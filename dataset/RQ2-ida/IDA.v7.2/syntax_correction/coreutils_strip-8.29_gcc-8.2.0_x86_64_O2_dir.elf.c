#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  int v3; // ebp
  char **v4; // rbx
  char *v5; // rax
  char *v6; // r12
  int v7; // eax
  char *v8; // rax
  char *v9; // r12
  char *v10; // rax
  char *v11; // r12
  char v12; // r15
  char v13; // r14
  const char *v14; // r12
  int v15; // eax
  int v16; // er13
  bool v17; // al
  __int64 v18; // rax
  int v19; // edx
  bool v20; // al
  _QWORD *v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // eax
  char *v25; // rax
  char **v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r12
  char *v32; // rax
  __int64 v33; // r12
  char *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  char *i; // r13
  __int64 v39; // rsi
  __int64 v40; // r12
  char *v41; // rdi
  char v42; // al
  __int64 v43; // rax
  int v44; // er13
  char *v45; // rdi
  void *v46; // rbx
  void *v47; // rdi
  __int64 v48; // rdx
  void *v49; // rcx
  __int64 v50; // rdx
  void *v51; // rax
  void *v52; // rbx
  __int64 result; // rax
  __int64 v54; // r12
  char *v55; // rax
  char *v56; // r13
  int k; // ebx
  int v58; // eax
  char *v59; // rax
  char *v60; // rax
  char v61; // dl
  __int64 v62; // r13
  const char *v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // r13
  char *v66; // rax
  char *v67; // rax
  _QWORD *j; // rdi
  _QWORD *v69; // r13
  char *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  char *v74; // rax
  int v75; // eax
  __int64 v76; // rax
  char *v77; // rax
  char *v78; // rax
  char *v79; // rax
  char *v80; // r14
  const char *v81; // r15
  _QWORD *v82; // r13
  __int64 v83; // rax
  char *v84; // rax
  FILE *v85; // rbx
  char *v86; // rax
  FILE *v87; // rsi
  const char **v88; // rbx
  const char *v89; // rcx
  FILE *v90; // rbx
  char *v91; // rax
  const char *v92; // r12
  char *v93; // rax
  char *v94; // r13
  char *v95; // r14
  char *v96; // rax
  __int64 v97; // rbx
  char *v98; // rax
  char *v99; // [rsp+8h] [rbp-60h]
  char s1[2]; // [rsp+15h] [rbp-53h]
  char *v101; // [rsp+18h] [rbp-50h]
  void *v102; // [rsp+20h] [rbp-48h]
  __int64 v103; // [rsp+28h] [rbp-40h]

  v3 = a1;
  v4 = a2;
  sub_410670(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  status = 2;
  sub_418780(sub_40B710);
  byte_625678 = 1;
  tp.tv_sec = 0x8000000000000000LL;
  dword_6255D0 = 0;
  ptr = 0LL;
  tp.tv_nsec = -1LL;
  byte_625698 = 0;
  if ( dword_6245AC == 2 )
  {
    dword_6256F8 = 2;
    sub_411C30(0LL, 7LL);
  }
  else if ( dword_6245AC == 3 )
  {
    dword_6256F8 = 0;
    sub_411C30(0LL, 7LL);
  }
  else
  {
    if ( dword_6245AC != 1 )
      abort();
    if ( isatty(1) )
    {
      dword_6256F8 = 2;
      sub_411C30(0LL, 3LL);
      byte_625698 = 1;
    }
    else
    {
      dword_6256F8 = 1;
    }
  }
  byte_6256EF = 0;
  dword_6256F4 = 0;
  dword_6256F0 = 0;
  byte_6256ED = 0;
  byte_6256EC = 0;
  dword_6256D4 = 0;
  byte_6256BC = 0;
  dword_6256B8 = 1;
  byte_6256B6 = 0;
  byte_6256B5 = 0;
  dword_6256B0 = 0;
  qword_6256A8 = 0LL;
  qword_6256A0 = 0LL;
  byte_625725 = 0;
  v5 = getenv("QUOTING_STYLE");
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_40ACF0(v5, off_41EA00, dword_41E9C0, 4LL);
    if ( v7 < 0 )
    {
      v31 = sub_412290(v6);
      v32 = dcgettext(0LL, "ignoring invalid value of environment variable QUOTING_STYLE: %s", 5);
      error(0, 0, v32, v31);
    }
    else
    {
      sub_411C30(0LL, (unsigned int)dword_41E9C0[v7]);
    }
  }
  qword_625670 = 80LL;
  v8 = getenv("COLUMNS");
  v9 = v8;
  if ( v8 && *v8 && !(unsigned __int8)sub_404B40(v8) )
  {
    v33 = sub_412290(v9);
    v34 = dcgettext(0LL, "ignoring invalid width in environment variable COLUMNS: %s", 5);
    error(0, 0, v34, v33);
  }
  if ( ioctl(1, 0x5413uLL, &v102) != -1 && WORD1(v102) )
    qword_625670 = WORD1(v102);
  v10 = getenv("TABSIZE");
  qword_625680 = 8LL;
  v11 = v10;
  if ( v10 )
  {
    if ( (unsigned int)sub_412DF0(v10) )
    {
      v54 = sub_412290(v11);
      v55 = dcgettext(0LL, "ignoring invalid tab size in environment variable TABSIZE: %s", 5);
      error(0, 0, v55, v54);
    }
    else
    {
      qword_625680 = (__int64)v102;
    }
  }
  v12 = 0;
  v13 = 0;
  v14 = 0LL;
  while ( 1 )
  {
    LODWORD(v102) = -1;
    v15 = sub_416E00(a1, v4, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", &off_419900, &v102);
    if ( v15 == -1 )
      break;
    switch ( v15 + 131 )
    {
      case 0:
        sub_412840((char)stdout);
        exit(0);
        return result;
      case 1:
        sub_40A530(0);
        return result;
      case 180:
        dword_6256F8 = dword_6256F8 != 0;
        continue;
      case 196:
        if ( !dword_6256B0 )
          dword_6256B0 = 1;
        continue;
      case 197:
        v27 = (_QWORD *)sub_412980(16LL);
        v28 = qword_6256A8;
        *v27 = "*~";
        v27[1] = v28;
        qword_6256A8 = (__int64)v27;
        v29 = (_QWORD *)sub_412980(16LL);
        v30 = qword_6256A8;
        *v29 = ".*~";
        v29[1] = v30;
        qword_6256A8 = (__int64)v29;
        continue;
      case 198:
        dword_6256F8 = 2;
        continue;
      case 199:
        byte_6256D8 = 1;
        continue;
      case 201:
        dword_6256D4 = 3;
        continue;
      case 202:
        byte_6245A8 = 0;
        continue;
      case 203:
        dword_6256B8 = 3;
        continue;
      case 204:
        v99 = nptr;
        v26 = (char **)sub_412980(16LL);
        *v26 = v99;
        v26[1] = (char *)qword_6256A8;
        qword_6256A8 = (__int64)v26;
        continue;
      case 207:
        dword_6256B8 = 5;
        continue;
      case 209:
        sub_411C30(0LL, 0LL);
        continue;
      case 212:
        sub_411C30(0LL, 5LL);
        continue;
      case 213:
        byte_6256B6 = 1;
        continue;
      case 214:
        dword_6256F0 = 2;
        v13 = 1;
        continue;
      case 215:
        dcgettext(0LL, "invalid tab size", 5);
        qword_625680 = sub_412C10((_DWORD)nptr);
        continue;
      case 216:
        dword_6256F0 = -1;
        v13 = 1;
        continue;
      case 219:
        dword_6256F0 = 1;
        v13 = 1;
        continue;
      case 221:
        byte_625725 = 1;
        continue;
      case 228:
        dword_6256B0 = 2;
        continue;
      case 229:
        sub_411C30(0LL, 7LL);
        continue;
      case 230:
        dword_6256F4 = 1;
        continue;
      case 231:
        byte_6256B5 = 1;
        continue;
      case 233:
        dword_6256B0 = 2;
        dword_6256F0 = -1;
        if ( !dword_6256F8 )
          dword_6256F8 = 2 - ((unsigned int)isatty(1) < 1);
        byte_6256EC = 0;
        v13 = 1;
        byte_6256D2 = 0;
        byte_6256D1 = 0;
        continue;
      case 234:
        dword_6256F8 = 0;
        byte_6245A9 = 0;
        continue;
      case 235:
        dword_6256E8 = 176;
        dword_6256DC = 176;
        qword_6256E0 = 1LL;
        qword_6245A0 = 1LL;
        continue;
      case 236:
        byte_6256BC = 1;
        continue;
      case 238:
        v12 = 1;
        continue;
      case 239:
        goto LABEL_21;
      case 240:
        dword_6256F8 = 4;
        continue;
      case 241:
        byte_6256ED = 1;
LABEL_21:
        dword_6256F8 = 0;
        continue;
      case 242:
        dword_6256F8 = 0;
        byte_6245A8 = 0;
        continue;
      case 243:
        dword_6256D4 = 1;
        continue;
      case 244:
        byte_625698 = 1;
        continue;
      case 245:
        byte_6256EF = 1;
        continue;
      case 246:
        byte_6256EC = 1;
        continue;
      case 247:
        dword_6256F0 = 4;
        v13 = 1;
        continue;
      case 248:
        dword_6256F4 = 2;
        continue;
      case 249:
        goto LABEL_53;
      case 250:
        if ( (unsigned __int8)sub_404B40(nptr) )
          continue;
        v4 = (char **)sub_412290(nptr);
        v25 = dcgettext(0LL, "invalid line width", 5);
        error(2, 0, "%s: %s", v25, v4);
LABEL_53:
        dword_6256F0 = 3;
        v13 = 1;
        break;
      case 251:
        dword_6256F8 = 3;
        continue;
      case 259:
        byte_6256EE = 1;
        continue;
      case 260:
        v24 = sub_40DFA0(nptr);
        if ( v24 )
          sub_413220(v24, (unsigned int)v102, 0LL, &off_419900, nptr);
        dword_6256DC = dword_6256E8;
        qword_6245A0 = qword_6256E0;
        continue;
      case 261:
        if ( nptr
          && (v23 = dword_419740[sub_40AFB0("--color", nptr, off_419780, dword_419740, 4LL, off_6245B8)], v23 != 1)
          && (v23 != 2 || !isatty(1)) )
        {
          byte_6256D2 = 0;
        }
        else
        {
          byte_6256D2 = 1;
          qword_625680 = 0LL;
        }
        continue;
      case 262:
        dword_6256B8 = 4;
        continue;
      case 263:
        dword_6256D4 = 2;
        continue;
      case 264:
        dword_6256F8 = dword_419890[sub_40AFB0("--format", nptr, off_4198C0, dword_419890, 4LL, off_6245B8)];
        continue;
      case 265:
        dword_6256F8 = 0;
        v14 = "full-iso";
        continue;
      case 266:
        byte_6256B4 = 1;
        continue;
      case 267:
        v21 = (_QWORD *)sub_412980(16LL);
        *v21 = nptr;
        v22 = qword_6256A0;
        qword_6256A0 = (__int64)v21;
        v21[1] = v22;
        continue;
      case 268:
        if ( nptr
          && (v19 = dword_419740[sub_40AFB0("--hyperlink", nptr, off_419780, dword_419740, 4LL, off_6245B8)], v19 != 1) )
        {
          v20 = 0;
          if ( v19 == 2 )
            v20 = isatty(1) != 0;
        }
        else
        {
          v20 = 1;
        }
        byte_6256D1 = v20;
        continue;
      case 269:
        dword_6256D4 = dword_419F50[sub_40AFB0("--indicator-style", nptr, off_419F60, dword_419F50, 4LL, off_6245B8)];
        continue;
      case 270:
        v18 = sub_40AFB0("--quoting-style", nptr, off_41EA00, dword_41E9C0, 4LL, off_6245B8);
        sub_411C30(0LL, (unsigned int)dword_41E9C0[v18]);
        continue;
      case 271:
        byte_625698 = 0;
        continue;
      case 272:
        dword_6256E8 = 144;
        dword_6256DC = 144;
        qword_6256E0 = 1LL;
        qword_6245A0 = 1LL;
        continue;
      case 273:
        v13 = 1;
        dword_6256F0 = dword_419830[sub_40AFB0("--sort", nptr, &off_419860, dword_419830, 4LL, off_6245B8)];
        continue;
      case 274:
        dword_6256F4 = dword_4197D0[sub_40AFB0("--time", nptr, off_419800, dword_4197D0, 4LL, off_6245B8)];
        continue;
      case 275:
        v14 = nptr;
        continue;
      default:
        goto LABEL_270;
    }
  }
  if ( !qword_6256E0 )
  {
    v56 = getenv("LS_BLOCK_SIZE");
    sub_40DFA0(v56);
    if ( v56 || getenv("BLOCK_SIZE") )
    {
      dword_6256DC = dword_6256E8;
      qword_6245A0 = qword_6256E0;
    }
    if ( v12 )
    {
      dword_6256E8 = 0;
      qword_6256E0 = 1024LL;
    }
  }
  qword_6255C0 = (qword_625670 % 3uLL != 0) + qword_625670 / 3uLL;
  v16 = sub_411C20(0LL);
  if ( dword_6256F8 == 4 || dword_6256F8 == 1 )
  {
    v17 = 0;
  }
  else if ( qword_625670 || (v17 = 0, !dword_6256F8) )
  {
    v17 = v16 == 6 || (v16 & 0xFFFFFFFD) == 1;
  }
  byte_625768 = v17;
  v35 = sub_411BE0(0LL);
  qword_625690 = v35;
  if ( v16 == 7 )
    sub_411C40(v35, 32LL, 1LL);
  if ( (unsigned int)dword_6256D4 > 1 )
  {
    v36 = (unsigned int)(dword_6256D4 - 2);
    v37 = (unsigned int)byte_41B297[v36];
    for ( i = &byte_41B297[v36]; *i; v37 = (unsigned int)*i )
    {
      ++i;
      sub_411C40(qword_625690, v37, 1LL);
    }
  }
  v39 = 58LL;
  qword_625688 = sub_411BE0(0LL);
  sub_411C40(qword_625688, 58LL, 1LL);
  if ( byte_6256D8 )
  {
    if ( !dword_6256F8 && !byte_6256D1 )
      goto LABEL_111;
    byte_6256D8 = 0;
  }
  if ( (unsigned int)(dword_6256F4 - 1) > 1 || v13 )
  {
    if ( dword_6256F8 )
      goto LABEL_116;
  }
  else if ( dword_6256F8 )
  {
    dword_6256F0 = 4;
    goto LABEL_116;
  }
LABEL_111:
  if ( v14 || (v96 = getenv("TIME_STYLE"), (v14 = v96) != 0LL) )
  {
    while ( 1 )
    {
      v39 = (__int64)"posix-";
      if ( strncmp(v14, "posix-", 6uLL) )
        break;
      if ( !(unsigned __int8)sub_40C190(2LL) )
        goto LABEL_116;
      v14 += 6;
    }
    if ( *v14 == 43 )
    {
      v92 = v14 + 1;
      v39 = 10LL;
      v93 = strchr(v92, 10);
      v94 = v93;
      if ( v93 )
      {
        v95 = v93 + 1;
        v39 = 10LL;
        if ( strchr(v93 + 1, 10) )
        {
          v97 = sub_412290(v92);
          v98 = dcgettext(0LL, "invalid time style format %s", 5);
          error(2, 0, v98, v97);
LABEL_284:
          __assert_fail("found", "src/ls.c", 0x638u, "main");
        }
        *v94 = 0;
      }
      else
      {
        v95 = (char *)v92;
      }
      off_624410 = (char *)v92;
      off_624418 = v95;
      goto LABEL_243;
    }
  }
  else
  {
    v14 = "locale";
  }
  v39 = (__int64)off_419FA0;
  v76 = sub_40ACF0(v14, off_419FA0, &unk_419F90, 4LL);
  if ( v76 < 0 )
  {
    sub_40AE10("time style", v14, v76);
    v85 = stderr;
    v86 = dcgettext(0LL, "Valid arguments are:\n", 5);
    v87 = v85;
    v88 = (const char **)off_419FA0;
    fputs_unlocked(v86, v87);
    v89 = "full-iso";
    do
    {
      ++v88;
      __fprintf_chk(stderr, 1LL, "  - [posix-]%s\n", v89);
      v89 = *v88;
    }
    while ( *v88 );
    v90 = stderr;
    v91 = dcgettext(0LL, "  - +FORMAT (e.g., +%H:%M) for a 'date'-style format\n", 5);
    fputs_unlocked(v91, v90);
LABEL_270:
    sub_40A530(2);
  }
  if ( v76 == 1 )
  {
    off_624418 = (char *)&unk_41B30E;
    off_624410 = (char *)&unk_41B30E;
  }
  else if ( v76 <= 1 )
  {
    off_624418 = "%Y-%m-%d %H:%M:%S.%N %z";
    off_624410 = "%Y-%m-%d %H:%M:%S.%N %z";
  }
  else if ( v76 == 2 )
  {
    off_624410 = "%Y-%m-%d ";
    off_624418 = "%m-%d %H:%M";
  }
  else if ( v76 == 3 && (unsigned __int8)sub_40C190(2LL) )
  {
    v77 = dcgettext(0LL, off_624410, 2);
    v39 = (__int64)off_624418;
    off_624410 = v77;
    off_624418 = dcgettext(0LL, off_624418, 2);
  }
LABEL_243:
  sub_404BB0();
LABEL_116:
  v40 = dword_62463C;
  if ( byte_6256D2 )
  {
    v59 = getenv("LS_COLORS");
    v101 = v59;
    if ( v59 && *v59 )
    {
      strcpy(s1, "??");
      qword_6256C0 = (void *)sub_412BB0(v59);
      v102 = qword_6256C0;
      while ( 1 )
      {
LABEL_191:
        while ( 1 )
        {
          v60 = v101;
          v61 = *v101;
          if ( *v101 != 42 )
            break;
          v82 = (_QWORD *)sub_412980(40LL);
          v83 = qword_6256C8;
          ++v101;
          qword_6256C8 = (__int64)v82;
          v82[4] = v83;
          v82[1] = v102;
          if ( (unsigned __int8)sub_404860(&v102, &v101, 1LL, v82) )
          {
            v84 = v101++;
            if ( *v84 == 61 )
            {
              v39 = (__int64)&v101;
              v82[3] = v102;
              if ( (unsigned __int8)sub_404860(&v102, &v101, 0LL, v82 + 2) )
                continue;
            }
          }
          goto LABEL_201;
        }
        if ( v61 != 58 )
          break;
        ++v101;
      }
      if ( !v61 )
        goto LABEL_205;
      ++v101;
      s1[0] = *v60;
      if ( v60[1] )
      {
        v101 = v60 + 2;
        s1[1] = v60[1];
        v101 = v60 + 3;
        if ( v60[2] == 61 )
        {
          v62 = 0LL;
          v63 = "lc";
          while ( strcmp(s1, v63) )
          {
            v63 = (&off_419E80)[++v62];
            if ( !v63 )
              goto LABEL_200;
          }
          v39 = (__int64)&v101;
          v64 = 16LL * (int)v62 + 6439968;
          *(_QWORD *)(v64 + 8) = v102;
          if ( (unsigned __int8)sub_404860(&v102, &v101, 0LL, v64) )
            goto LABEL_191;
LABEL_200:
          v65 = sub_412290(s1);
          v66 = dcgettext(0LL, "unrecognized prefix: %s", 5);
          error(0, 0, v66, v65);
        }
      }
LABEL_201:
      v67 = dcgettext(0LL, "unparsable value for LS_COLORS environment variable", 5);
      v39 = 0LL;
      error(0, 0, v67);
      free(qword_6256C0);
      for ( j = (_QWORD *)qword_6256C8; j; j = v69 )
      {
        v69 = (_QWORD *)j[4];
        free(j);
      }
      byte_6256D2 = 0;
LABEL_205:
      if ( qword_624490 == 6 )
      {
        v39 = (__int64)"target";
        if ( !strncmp(off_624498, "target", 6uLL) )
          byte_625750 = 1;
      }
    }
    else
    {
      v78 = getenv("COLORTERM");
      if ( !v78 || !*v78 )
      {
        v79 = getenv("TERM");
        v80 = v79;
        if ( v79 && *v79 )
        {
          v81 = "# Configuration file for dircolors, a utility to help you set the";
          while ( 1 )
          {
            v39 = (__int64)"TERM ";
            if ( !strncmp(v81, "TERM ", 5uLL) )
            {
              v39 = (__int64)v80;
              if ( !(unsigned int)sub_4159A0(v81 + 5, v80, 0LL) )
                break;
            }
            v81 += strlen(v81) + 1;
            if ( (unsigned __int64)(v81 - "# Configuration file for dircolors, a utility to help you set the") > 0x104C )
              goto LABEL_266;
          }
        }
        else
        {
LABEL_266:
          byte_6256D2 = 0;
        }
      }
    }
    if ( byte_6256D2
      && ((unsigned __int8)sub_404AE0(13LL)
       || (unsigned __int8)sub_404AE0(14LL) && byte_625750
       || (unsigned __int8)sub_404AE0(12LL) && !dword_6256F8) )
    {
      byte_6256BD = 1;
    }
  }
  if ( dword_6256B8 == 1 )
  {
    v58 = 2;
    if ( !byte_6256B5 && dword_6256D4 != 3 )
      v58 = (unsigned int)dword_6256F8 < 1 ? 2 : 4;
    dword_6256B8 = v58;
  }
  if ( byte_6256B6 )
  {
    qword_625788 = (void *)sub_40CA80(30LL, 0LL, sub_404800, sub_404810, j__free);
    if ( !qword_625788 )
      sub_412BD0();
    v39 = 0LL;
    obstack_begin(&unk_6254A0, 0LL, 0LL, malloc, free);
  }
  v41 = getenv("TZ");
  qword_625668 = sub_417410(v41);
  if ( !((dword_6256F0 - 2) & 0xFFFFFFFD) || !dword_6256F8 || byte_625725 || byte_6256EC )
  {
    byte_625661 = 1;
    v42 = 0;
  }
  else
  {
    byte_625661 = 0;
    v42 = 1;
    if ( !byte_6256B6 && !byte_6256D2 && !dword_6256D4 )
      v42 = byte_6256B4;
  }
  byte_625660 = v42 & 1;
  if ( byte_6256D8 )
  {
    obstack_begin(&unk_625560, 0LL, 0LL, malloc, free);
    v39 = 0LL;
    v41 = (char *)&unk_625500;
    obstack_begin(&unk_625500, 0LL, 0LL, malloc, free);
  }
  if ( byte_6256D1 )
  {
    v71 = 0LL;
    while ( 1 )
    {
      v73 = (unsigned int)v71;
      if ( (int)v71 <= 90 )
      {
        v72 = 1LL;
        if ( (int)v71 >= 65 )
          goto LABEL_227;
        v39 = (unsigned int)(v71 - 48);
        if ( (unsigned int)v39 <= 9 )
          goto LABEL_227;
        v73 = (unsigned int)(v71 - 45);
        if ( (unsigned int)v73 <= 1 )
        {
LABEL_231:
          v72 = 1LL;
          goto LABEL_227;
        }
      }
      else
      {
        v39 = (unsigned int)(v71 - 97);
        v72 = 1LL;
        if ( (unsigned int)v39 <= 0x19 )
          goto LABEL_227;
        v73 = (unsigned int)(v71 - 45);
        if ( (unsigned int)v73 <= 1 )
          goto LABEL_231;
      }
      if ( (_DWORD)v71 == 126 )
        goto LABEL_231;
      LOBYTE(v72) = (_DWORD)v71 == 95;
LABEL_227:
      byte_6253A0[v71] |= v72;
      if ( ++v71 == 256 )
      {
        v74 = (char *)sub_412D40(v41, v39, v72, v73);
        if ( !v74 )
          v74 = "";
        qword_625748 = (__int64)v74;
        break;
      }
    }
  }
  qword_625778 = 100LL;
  v43 = sub_412980(20000LL);
  v44 = v3 - v40;
  qword_625770 = 0LL;
  qword_625780 = v43;
  sub_4084B0();
  if ( v3 - (int)v40 <= 0 )
  {
    if ( byte_6256B5 )
      sub_408580(".", 3LL, 1LL, "");
    else
      sub_404D90(".", 0LL);
    if ( !qword_625770 )
      goto LABEL_158;
    goto LABEL_214;
  }
  do
  {
    v45 = v4[v40++];
    sub_408580(v45, 0LL, 1LL, "");
  }
  while ( v3 > (int)v40 );
  if ( qword_625770 )
  {
LABEL_214:
    sub_404F40();
    if ( !byte_6256B5 )
      sub_405140(0LL);
    if ( qword_625770 )
    {
      sub_407CA0();
      if ( ptr )
      {
        v70 = stdout->_IO_write_ptr;
        if ( stdout->_IO_write_end <= v70 )
        {
          __overflow(stdout, 10);
        }
        else
        {
          stdout->_IO_write_ptr = v70 + 1;
          *v70 = 10;
        }
        ++qword_6255B8;
        v46 = ptr;
        goto LABEL_134;
      }
      goto LABEL_144;
    }
  }
  v46 = ptr;
  if ( v44 > 1 )
    goto LABEL_134;
LABEL_158:
  v46 = ptr;
  if ( ptr )
  {
    if ( !*((_QWORD *)ptr + 3) )
      byte_625678 = 0;
LABEL_134:
    while ( v46 )
    {
      v47 = *(void **)v46;
      ptr = (void *)*((_QWORD *)v46 + 3);
      if ( !qword_625788 || v47 )
      {
        sub_4092A0(v47);
        free(*(void **)v46);
        free(*((void **)v46 + 1));
        free(v46);
        byte_625678 = 1;
      }
      else
      {
        v48 = qword_6254B8;
        if ( (unsigned __int64)(qword_6254B8 - qword_6254B0) <= 0xF )
          __assert_fail("dev_ino_size <= obstack_object_size (&dev_ino_obstack)", "src/ls.c", 0x402u, "dev_ino_pop");
        qword_6254B8 -= 16LL;
        v49 = *(void **)(v48 - 16);
        v50 = *(_QWORD *)(v48 - 8);
        v102 = v49;
        v103 = v50;
        v51 = (void *)sub_40D260(qword_625788, &v102);
        if ( !v51 )
          goto LABEL_284;
        free(v51);
        free(*(void **)v46);
        free(*((void **)v46 + 1));
        free(v46);
      }
      v46 = ptr;
    }
  }
LABEL_144:
  if ( byte_6256D2 && byte_6256D0 )
  {
    if ( qword_624420 != 2 || *(_WORD *)off_624428 != 23323 || qword_624430 != 1 || *(_BYTE *)off_624438 != 109 )
      sub_405D40();
    fflush_unlocked(stdout);
    sub_405AF0(0LL);
    for ( k = dword_6255D4; k; --k )
      raise(19);
    if ( sig )
      raise(sig);
  }
  if ( byte_6256D8 )
  {
    sub_405390("//DIRED//", &unk_625560);
    sub_405390("//SUBDIRED//", &unk_625500);
    v75 = sub_411C20(qword_625690);
    __printf_chk(1LL, "//DIRED-OPTIONS// --quoting-style=%s\n", off_41EA00[v75]);
  }
  v52 = qword_625788;
  if ( qword_625788 )
  {
    if ( sub_40C5F0(qword_625788) )
      __assert_fail("hash_get_n_entries (active_dir_set) == 0", "src/ls.c", 0x66Cu, "main");
    sub_40CCC0(v52);
  }
  return (unsigned int)dword_6255D0;
}

// positive sp value has been detected, the output may be wrong!
noreturn void __usercall  start(__int64 a1, void (*a2)(void))
{
  int v2; // esi
  int v3; // [rsp-8h] [rbp-8h]
  __int64 _0; // [rsp+0h] [rbp+0h]

  v2 = v3;
  *(_QWORD *)&v3 = a1;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v2, (char **)&_0, init, fini, a2, &v3);
  __halt();
}

void *sub_40474B()
{
  void *result; // rax

  result = &unk_624648;
  if ( &unk_624648 != &unk_624648 )
    result = 0LL;
  return result;
}

__int64 sub_40476A()
{
  return 0LL;
}

void *sub_4047A1()
{
  void *result; // rax

  if ( !byte_624688 )
  {
    while ( qword_624690 < (unsigned __int64)(&qword_623E48 - qword_623E40 - 1) )
      ((void (*)(void))qword_623E40[++qword_624690])();
    result = sub_40474B();
    byte_624688 = 1;
  }
  return result;
}

__int64 sub_4047F8()
{
  return sub_40476A();
}

unsigned __int64 __fastcall sub_404800(_QWORD *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_404810(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( *a1 == *a2 )
    result = a1[1] == a2[1];
  return result;
}

__int64 __fastcall sub_404830(int a1)
{
  __int64 result; // rax

  result = (unsigned int)sig;
  if ( !sig )
    sig = a1;
  return result;
}

void j__free(void *ptr)
{
  free(ptr);
}

__int64 __fastcall sub_404860(char **a1, char **a2, unsigned int a3, _QWORD *a4)
{
  _QWORD *v4; // r11
  char *v5; // r8
  __int64 v6; // r10
  char *v7; // r9
  int v8; // ecx
  char v9; // cl
  bool v10; // cc
  unsigned __int8 v11; // cl
  __int64 result; // rax
  int v13; // er12
  int v14; // er13
  int v15; // er12
  char v16; // cl
  __int64 v17; // r14

  v4 = a4;
  v5 = *a2;
  v6 = 0LL;
  v7 = *a1;
LABEL_4:
  v9 = *v5;
  v10 = *v5 <= 61;
  if ( *v5 == 61 )
  {
LABEL_17:
    if ( (_BYTE)a3 )
    {
      result = a3;
      goto LABEL_12;
    }
    goto LABEL_16;
  }
  while ( !v10 )
  {
    if ( v9 == 92 )
    {
      v8 = (unsigned __int8)v5[1];
      v5 += 2;
      switch ( (_BYTE)v8 )
      {
        case 0:
          goto LABEL_11;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
          v13 = (unsigned __int8)*v5;
          for ( v8 -= 48; (unsigned __int8)(v13 - 48) <= 7u; v13 = (unsigned __int8)*v5 )
          {
            ++v5;
            v8 = v13 + 8 * v8 - 48;
          }
          goto LABEL_3;
        case 0x3F:
          LOBYTE(v8) = 127;
          goto LABEL_3;
        case 0x58:
        case 0x78:
          v14 = 0;
          break;
        case 0x5F:
          LOBYTE(v8) = 32;
          goto LABEL_3;
        case 0x61:
          LOBYTE(v8) = 7;
          goto LABEL_3;
        case 0x62:
          LOBYTE(v8) = 8;
          goto LABEL_3;
        case 0x65:
          LOBYTE(v8) = 27;
          goto LABEL_3;
        case 0x66:
          LOBYTE(v8) = 12;
          goto LABEL_3;
        case 0x6E:
          LOBYTE(v8) = 10;
          goto LABEL_3;
        case 0x72:
          LOBYTE(v8) = 13;
          goto LABEL_3;
        case 0x74:
          LOBYTE(v8) = 9;
          goto LABEL_3;
        case 0x76:
          LOBYTE(v8) = 11;
          goto LABEL_3;
        default:
          goto LABEL_3;
      }
LABEL_25:
      while ( 1 )
      {
        v15 = (unsigned __int8)*v5;
        v16 = v15 - 48;
        if ( (unsigned __int8)(v15 - 48) > 0x36u )
          break;
        while ( 1 )
        {
          v17 = 1LL << v16;
          if ( (1LL << v16) & 0x7E0000 )
          {
            ++v5;
            v14 = v15 + 16 * v14 - 55;
            goto LABEL_25;
          }
          if ( v17 & 0x7E000000000000LL )
            break;
          if ( v17 & 0x3FF )
          {
            ++v5;
            v14 = v15 + 16 * v14 - 48;
            v15 = (unsigned __int8)*v5;
            v16 = v15 - 48;
            if ( (unsigned __int8)(v15 - 48) <= 0x36u )
              continue;
          }
          goto LABEL_30;
        }
        ++v5;
        v14 = v15 + 16 * v14 - 87;
      }
LABEL_30:
      *v7 = v14;
      ++v6;
      ++v7;
      goto LABEL_4;
    }
    if ( v9 == 94 )
    {
      v11 = v5[1];
      if ( (unsigned __int8)(v11 - 64) <= 0x3Eu )
      {
        v5 += 2;
        LOBYTE(v8) = v11 & 0x1F;
LABEL_3:
        *v7 = v8;
        ++v6;
        ++v7;
      }
      else
      {
        if ( v11 != 63 )
        {
          ++v5;
LABEL_11:
          result = 0LL;
          goto LABEL_12;
        }
        *v7 = 127;
        ++v6;
        ++v7;
        ++v5;
      }
      goto LABEL_4;
    }
LABEL_16:
    ++v5;
    *v7 = v9;
    ++v6;
    ++v7;
    v9 = *v5;
    v10 = *v5 <= 61;
    if ( *v5 == 61 )
      goto LABEL_17;
  }
  if ( v9 && v9 != 58 )
    goto LABEL_16;
  result = 1LL;
LABEL_12:
  *a1 = v7;
  *a2 = v5;
  *v4 = v6;
  return result;
}

bool __fastcall sub_404AE0(unsigned int a1)
{
  bool result; // al
  __int64 v2; // rdi
  __int64 v3; // rdx
  char *v4; // rsi

  result = 0;
  v2 = 2LL * a1;
  v3 = qword_624420[v2];
  if ( v3 )
  {
    v4 = (&off_624428)[v2];
    if ( v3 == 1 )
    {
      result = *v4 != 48;
    }
    else
    {
      result = 1;
      if ( v3 == 2 )
        result = memcmp(v4, "00", 2uLL) != 0;
    }
  }
  return result;
}

__int64 __fastcall sub_404B40(char *a1)
{
  int v1; // eax
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-10h]

  v1 = sub_4132B0(a1);
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      qword_625670 = -1LL;
      result = 1LL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    qword_625670 = v3;
    result = 1LL;
  }
  return result;
}

int sub_404BB0()
{
  __int64 i; // rsi
  char *v1; // rax
  char j; // dl
  char v3; // cl
  unsigned __int64 v4; // r15
  char *v5; // rbx
  nl_item v6; // er12
  unsigned __int64 v7; // rbp
  char *v8; // rax
  char *v9; // r13
  __int64 v10; // r12
  char **v11; // rbx
  char *v12; // rbp
  char *v13; // r15
  char *v14; // r13
  unsigned __int64 v16; // [rsp+8h] [rbp-650h]
  __int64 v17; // [rsp+10h] [rbp-648h]
  __int64 v18; // [rsp+18h] [rbp-640h]
  char v19; // [rsp+20h] [rbp-638h]
  char v20; // [rsp+620h] [rbp-38h]

  for ( i = 0LL; i != 2; ++i )
  {
    v1 = (&off_624410)[i];
    for ( j = *v1; j; ++v1 )
    {
      v3 = v1[1];
      if ( j == 37 )
      {
        if ( v3 == 37 )
        {
          j = (v1++)[2];
          continue;
        }
        if ( v3 == 98 )
          goto LABEL_9;
      }
      j = v1[1];
    }
    v1 = 0LL;
LABEL_9:
    *(__int64 *)((char *)&v17 + i * 8) = (__int64)v1;
  }
  v4 = 5LL;
  if ( v17 || v18 )
  {
LABEL_11:
    v5 = &v19;
    v6 = 131086;
    v7 = 0LL;
    while ( 1 )
    {
      v16 = v4;
      v8 = nl_langinfo(v6);
      v9 = v8;
      v1 = strchr(v8, 37);
      if ( v1 )
        break;
      v1 = (char *)sub_40E570(v9, v5, 128LL, &v16, 0LL, 0LL);
      if ( (unsigned __int64)v1 > 0x7F )
        break;
      if ( v7 < v16 )
        v7 = v16;
      v5 += 128;
      ++v6;
      if ( v5 == &v20 )
      {
        if ( v4 > v7 )
        {
          v4 = v7;
          goto LABEL_11;
        }
        v11 = (char **)&v17;
        v10 = 0LL;
LABEL_26:
        v12 = (&off_624410)[v10];
        v13 = &v19;
        v14 = (char *)&unk_6247A0 + 24 * v10;
        while ( 1 )
        {
          v1 = *v11;
          if ( *v11 )
          {
            if ( v1 - v12 > 128 )
              return (int)v1;
            LODWORD(v1) = __snprintf_chk(v14, 128LL, 1LL, -1LL, "%.*s%s%s");
          }
          else
          {
            LODWORD(v1) = snprintf(v14, 0x80uLL, "%s", v12);
          }
          if ( (unsigned int)v1 > 0x7F )
            return (int)v1;
          v13 += 128;
          v14 += 128;
          if ( v13 == &v20 )
          {
            ++v10;
            ++v11;
            if ( v10 != 2 )
              goto LABEL_26;
            byte_624788 = 1;
            return (int)v1;
          }
        }
      }
    }
  }
  return (int)v1;
}

void *__fastcall sub_404D90(void *src, void *a2, char a3)
{
  char v3; // r13
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  void *result; // rax

  v3 = a3;
  v4 = (__int64 *)sub_412980(32LL);
  v5 = 0LL;
  if ( a2 )
    v5 = sub_412BB0(a2);
  v4[1] = v5;
  v6 = 0LL;
  if ( src )
    v6 = sub_412BB0(src);
  *v4 = v6;
  result = ptr;
  *((_BYTE *)v4 + 16) = v3;
  v4[3] = (__int64)result;
  ptr = v4;
  return result;
}

int __fastcall sub_404E00(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}

int __fastcall sub_404E10(const char **a1, const char **a2)
{
  return strcmp(*a2, *a1);
}

bool __fastcall sub_404E20(char *a1)
{
  __int64 v1; // rax
  bool result; // al
  __int64 v3; // [rsp+Eh] [rbp-1Ah]

  v1 = sub_411CD0((__int64)&v3, 2LL, a1);
  if ( *a1 == (_BYTE)v3 )
    result = strlen(a1) != v1;
  else
    result = 1;
  return result;
}

__int64 __fastcall sub_404E80(const char *a1, __int64 a2)
{
  const char *v2; // rbx
  size_t v3; // rax
  __int64 v4; // rcx
  unsigned __int128 v5; // ax
  __int64 v6; // r14
  _BYTE *i; // rbp
  unsigned __int8 v8; // al
  _BYTE *v10; // rdi

  v2 = a1;
  v3 = strlen(a1);
  v4 = v3 + 1;
  v5 = (v3 + 1) * (unsigned __int128)3uLL;
  BYTE8(v5) = *((_QWORD *)&v5 + 1) != 0LL;
  if ( (v5 & 0x8000000000000000LL) != 0LL || (*((_QWORD *)&v5 + 1) = BYTE8(v5), BYTE8(v5)) )
    sub_412BD0(a1, a2, *((_QWORD *)&v5 + 1));
  v6 = sub_412980(3 * v4);
LABEL_4:
  for ( i = (_BYTE *)v6; ; ++i )
  {
    v8 = *v2;
    if ( !*v2 )
      break;
    while ( 1 )
    {
      ++v2;
      if ( v8 == 47 )
      {
        if ( (_BYTE)a2 )
          break;
      }
      if ( !byte_6253A0[v8] )
      {
        v10 = i;
        i += 3;
        __sprintf_chk(v10, 1LL, -1LL, "%%%02x", v8);
        goto LABEL_4;
      }
      *i = v8;
      v8 = *v2;
      ++i;
      if ( !*v2 )
        goto LABEL_9;
    }
    *i = 47;
  }
LABEL_9:
  *i = 0;
  return v6;
}

unsigned __int64 __fastcall sub_404F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  char *v5; // rcx
  int v6; // eax
  int v7; // er8
  __int64 v8; // rsi
  void *v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  int v13; // edx
  void *v14; // rdi
  _BOOL8 v15; // rdx
  void *v16; // rax

  v2 = qword_625770;
  result = qword_625770 + ((unsigned __int64)qword_625770 >> 1);
  if ( result > qword_625758 )
  {
    v14 = qword_625760;
    free(qword_625760);
    v15 = ((unsigned __int64)v2 * (unsigned __int128)0x18uLL) >> 64 != 0;
    if ( 24 * v2 < 0 )
      v15 = 1LL;
    if ( v15 )
      sub_412BD0(v14, a2, v15);
    v16 = (void *)sub_412980(24 * v2);
    v2 = qword_625770;
    qword_625760 = v16;
    result = 3 * qword_625770;
    qword_625758 = 3 * qword_625770;
  }
  if ( v2 )
  {
    result = (unsigned __int64)qword_625760;
    v4 = qword_625780;
    v5 = (char *)qword_625760 + 8 * v2;
    do
    {
      *(_QWORD *)result = v4;
      result += 8LL;
      v4 += 200LL;
    }
    while ( v5 != (char *)result );
  }
  if ( dword_6256F0 != -1 )
  {
    v6 = _setjmp(env);
    v7 = dword_6256F0;
    if ( v6 )
    {
      if ( dword_6256F0 == 3 )
        __assert_fail("sort_type != sort_version", "src/ls.c", 0xEE5u, "sort_files");
      v8 = qword_625770;
      v9 = qword_625760;
      if ( qword_625770 )
      {
        v10 = qword_625780;
        v11 = (__int64 *)qword_625760;
        v12 = (__int64 *)((char *)qword_625760 + 8 * qword_625770);
        do
        {
          *v11 = v10;
          ++v11;
          v10 += 200LL;
        }
        while ( v11 != v12 );
      }
      v6 = 1;
    }
    else
    {
      v8 = qword_625770;
      v9 = qword_625760;
    }
    v13 = 0;
    if ( v7 == 4 )
      v13 = dword_6256F4;
    result = sub_40EDD0(
               v9,
               v8,
               off_419580[(unsigned __int8)byte_6256B4
                        + 2 * ((unsigned __int8)byte_6256EF + 2 * (v6 + 2LL * (unsigned int)(v7 + v13)))]);
  }
  return result;
}

int __fastcall sub_4050D0(char *s1, char *s2)
{
  *__errno_location() = 0;
  return strcoll(s1, s2);
}

int __fastcall sub_405100(char **a1, char **a2)
{
  return sub_4050D0(*a1, *a2);
}

int __fastcall sub_405110(char **a1, char **a2)
{
  return sub_4050D0(*a2, *a1);
}

__int64 __fastcall sub_405120(char **a1, char **a2)
{
  return sub_40BD40(*a2, *a1);
}

__int64 __fastcall sub_405130(char **a1, char **a2)
{
  return sub_40BD40(*a1, *a2);
}

void __fastcall sub_405140(void *src, char a2)
{
  __int64 v2; // rbx
  void **v3; // rbp
  int v4; // eax
  _BYTE *v5; // r14
  _BYTE *v6; // rax
  void *v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  char *v10; // rdi
  char *v11; // rax
  bool v12; // zf
  char v13; // al

  if ( src && qword_625788 )
    sub_404D90(0LL, src, 0);
  v2 = qword_625770;
LABEL_5:
  while ( --v2 != -1 )
  {
    while ( 1 )
    {
      v3 = (void **)*((_QWORD *)qword_625760 + v2);
      v4 = *((_DWORD *)v3 + 42);
      if ( v4 != 3 && v4 != 9 )
        break;
      v5 = *v3;
      if ( !src )
        goto LABEL_24;
      v6 = (_BYTE *)sub_40B870(*v3);
      if ( *v6 == 46 )
      {
        v13 = v6[(v6[1] == 46) + 1];
        if ( !v13 || v13 == 47 )
          goto LABEL_5;
      }
      if ( *v5 != 47 )
      {
        v7 = (void *)sub_40BB70(src, v5, 0LL);
        sub_404D90(v7, v3[1], a2);
        free(v7);
      }
      else
      {
LABEL_24:
        sub_404D90(v5, v3[1], a2);
      }
      if ( *((_DWORD *)v3 + 42) != 9 )
        goto LABEL_5;
      --v2;
      free(*v3);
      free(v3[1]);
      free(v3[2]);
      if ( v2 == -1 )
        goto LABEL_14;
    }
  }
LABEL_14:
  v8 = qword_625770;
  if ( qword_625770 )
  {
    v9 = qword_625760;
    v10 = (char *)qword_625760 + 8 * qword_625770;
    v11 = (char *)qword_625760;
    v8 = 0LL;
    do
    {
      v12 = *(_DWORD *)(*(_QWORD *)v11 + 168LL) == 9;
      v9[v8] = *(_QWORD *)v11;
      v11 += 8;
      v8 += !v12;
    }
    while ( v10 != v11 );
  }
  qword_625770 = v8;
}

int __fastcall sub_4052C0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  char *v7; // rsi
  char *v8; // r8

  if ( a1 < a2 )
  {
    v2 = a2;
    v3 = a1;
    do
    {
      while ( 1 )
      {
        v5 = qword_625680;
        v6 = v3 + 1;
        v7 = stdout->_IO_write_ptr;
        v8 = stdout->_IO_write_end;
        if ( !qword_625680 || v2 / qword_625680 <= v6 / qword_625680 )
          break;
        if ( v7 >= v8 )
        {
          __overflow(stdout, 9);
          v5 = qword_625680;
        }
        else
        {
          stdout->_IO_write_ptr = v7 + 1;
          *v7 = 9;
        }
        v4 = v3 / v5;
        v3 = v3 + v5 - v3 % v5;
        if ( v3 >= v2 )
          return v4;
      }
      if ( v7 >= v8 )
      {
        LODWORD(v4) = __overflow(stdout, 32);
      }
      else
      {
        LODWORD(v4) = (_DWORD)v7 + 1;
        stdout->_IO_write_ptr = v7 + 1;
        *v7 = 32;
      }
      ++v3;
    }
    while ( v6 < v2 );
  }
  return v4;
}

int __fastcall sub_405390(const char *a1, __int64 a2)
{
  char *v2; // rax
  char *v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx

  v2 = *(char **)(a2 + 24);
  v3 = *(char **)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24) - (_QWORD)v3;
  if ( v4 > 7 )
  {
    if ( v2 == v3 )
      *(_BYTE *)(a2 + 80) |= 2u;
    v5 = ~*(_QWORD *)(a2 + 48) & (unsigned __int64)&v2[*(_QWORD *)(a2 + 48)];
    if ( v5 - *(_QWORD *)(a2 + 8) > *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 8) )
      v5 = *(_QWORD *)(a2 + 32);
    v6 = (unsigned __int64)&v3[v4 & 0xFFFFFFFFFFFFFFF8LL];
    *(_QWORD *)(a2 + 24) = v5;
    *(_QWORD *)(a2 + 16) = v5;
    fputs_unlocked(a1, stdout);
    do
    {
      v7 = *(_QWORD *)v3;
      v3 += 8;
      __printf_chk(1LL, " %lu", v7);
    }
    while ( (char *)v6 != v3 );
    v2 = stdout->_IO_write_ptr;
    if ( v2 >= stdout->_IO_write_end )
    {
      LODWORD(v2) = __overflow(stdout, 10);
    }
    else
    {
      stdout->_IO_write_ptr = v2 + 1;
      *v2 = 10;
    }
  }
  return (int)v2;
}

size_t __fastcall sub_405460(char *s, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // ebx
  size_t v5; // rbp
  char *v6; // rdx
  size_t result; // rax

  v3 = a3;
  if ( s )
  {
    v4 = a3 - sub_40EB70(s);
    if ( v4 < 0 )
      v4 = 0;
    fputs_unlocked(s, stdout);
    v5 = strlen(s) + v4;
    do
    {
      v6 = stdout->_IO_write_ptr;
      if ( v6 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 32);
      }
      else
      {
        stdout->_IO_write_ptr = v6 + 1;
        *v6 = 32;
      }
      --v4;
    }
    while ( v4 != -1 );
  }
  else
  {
    __printf_chk(1LL, "%*lu ", a3);
    v5 = v3;
  }
  result = v5 + qword_6255B8 + 1;
  qword_6255B8 += v5 + 1;
  return result;
}

size_t __fastcall sub_405520(unsigned int a1, unsigned int a2, char a3)
{
  char *v3; // rax

  v3 = "?";
  if ( a3 )
  {
    v3 = 0LL;
    if ( !byte_6256ED )
      v3 = (char *)sub_40E160();
  }
  return sub_405460(v3, a1, a2);
}

__int64 sub_405560()
{
  __int64 result; // rax

  result = (unsigned int)sig;
  if ( !sig )
    result = (unsigned int)++dword_6255D4;
  return result;
}

void __fastcall sub_405580(char a1, const char *a2, __int64 a3)
{
  __int64 v3; // r12
  int *v4; // rax

  v3 = sub_412040(4LL, a3);
  v4 = __errno_location();
  error(0, *v4, a2, v3);
  if ( a1 )
  {
    dword_6255D0 = 2;
  }
  else if ( !dword_6255D0 )
  {
    dword_6255D0 = 1;
  }
}

int __fastcall sub_4055F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(a1 + 72) > v2 )
    return -1;
  if ( *(_QWORD *)(a1 + 72) == v2 )
    return strcmp(*(const char **)a1, *(const char **)a2);
  return *(_QWORD *)(a1 + 72) < v2;
}

int __fastcall sub_405630(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    return -1;
  if ( v2 || (result = 1, !v3) )
    result = sub_4050D0(*(char **)a1, *(char **)a2);
  return result;
}

int __fastcall sub_405690(__int64 a1, __int64 a2)
{
  bool v2; // dl
  bool v3; // al
  int v4; // edx

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 9 || *(_DWORD *)(a2 + 168) == 3;
  if ( !v3 && v2 )
    return -1;
  if ( !v2 )
  {
    v4 = 1;
    if ( v3 )
      return v4;
  }
  return strcmp(*(const char **)a1, *(const char **)a2);
}

int __fastcall sub_4056F0(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    return -1;
  if ( v2 || (result = 1, !v3) )
    result = sub_4050D0(*(char **)a2, *(char **)a1);
  return result;
}

int __fastcall sub_405750(__int64 a1, __int64 a2)
{
  bool v2; // dl
  bool v3; // al
  int v4; // edx

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 9 || *(_DWORD *)(a2 + 168) == 3;
  if ( !v3 && v2 )
    return -1;
  if ( !v2 )
  {
    v4 = 1;
    if ( v3 )
      return v4;
  }
  return strcmp(*(const char **)a2, *(const char **)a1);
}

__int64 __fastcall sub_4057B0(char a1, __int16 a2, int a3)
{
  int v3; // eax
  bool v4; // cl
  __int64 result; // rax
  int v6; // esi

  if ( a1 )
  {
    v3 = a2 & 0xF000;
    if ( v3 == 0x8000 )
    {
      result = 0LL;
      if ( dword_6256D4 == 3 )
        result = (a2 & 0x49u) >= 1 ? 0x2A : 0;
      return result;
    }
    v4 = v3 == 0x4000;
  }
  else
  {
    result = 0LL;
    if ( a3 == 5 )
      return result;
    v4 = a3 == 9 || a3 == 3;
  }
  result = 47LL;
  if ( !v4 )
  {
    result = 0LL;
    if ( dword_6256D4 != 1 )
    {
      if ( a1 )
      {
        v6 = a2 & 0xF000;
        result = 64LL;
        if ( v6 != 40960 )
        {
          result = 124LL;
          if ( v6 != 4096 )
          {
            LOBYTE(result) = v6 == 49152;
            return -(int)result & 0x3D;
          }
        }
      }
      else
      {
        result = 64LL;
        if ( a3 != 6 )
        {
          result = 124LL;
          if ( a3 != 1 )
          {
            LOBYTE(result) = a3 == 7;
            return -(int)result & 0x3D;
          }
        }
      }
    }
  }
  return result;
}

bool __fastcall sub_4058A0(char a1, __int16 a2, int a3)
{
  unsigned __int8 v3; // bl
  char *v4; // rax

  v3 = sub_4057B0(a1, a2, a3);
  if ( v3 )
  {
    v4 = stdout->_IO_write_ptr;
    if ( v4 >= stdout->_IO_write_end )
    {
      __overflow(stdout, v3);
    }
    else
    {
      stdout->_IO_write_ptr = v4 + 1;
      *v4 = v3;
    }
    ++qword_6255B8;
  }
  return v3 != 0;
}

int __fastcall sub_4058F0(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 96);
    if ( *(_QWORD *)(a1 + 96) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 96) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a2 + 104) - *(_DWORD *)(a1 + 104);
      if ( !result )
        result = strcmp(*(const char **)a1, *(const char **)a2);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

__int64 __fastcall sub_405970(__int64 a1, __int64 a2)
{
  bool v2; // dl
  bool v3; // al
  unsigned int v4; // edx

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    return (unsigned int)-1;
  if ( !v2 )
  {
    v4 = 1;
    if ( v3 )
      return v4;
  }
  return sub_40BD40(*(char **)a2, *(char **)a1);
}

__int64 __fastcall sub_4059D0(__int64 a1, __int64 a2)
{
  bool v2; // dl
  bool v3; // al
  unsigned int v4; // edx

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    return (unsigned int)-1;
  if ( !v2 )
  {
    v4 = 1;
    if ( v3 )
      return v4;
  }
  return sub_40BD40(*(char **)a1, *(char **)a2);
}

int __fastcall sub_405A30(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  const char *v5; // r12
  char *v6; // rax
  const char *v7; // rbx
  const char *v8; // rbp
  char *v9; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(const char **)a2;
    v6 = strrchr(*(const char **)a2, 46);
    v7 = *(const char **)a1;
    v8 = v6;
    v9 = strrchr(*(const char **)a1, 46);
    if ( v9 )
    {
      if ( !v8 )
        v8 = "";
    }
    else
    {
      v9 = "";
      if ( !v8 )
        goto LABEL_11;
    }
    result = strcmp(v8, v9);
    if ( result )
      return result;
LABEL_11:
    result = strcmp(v5, v7);
  }
  return result;
}

int __fastcall sub_405AF0(char a1)
{
  int *v1; // rbx
  int v2; // ebp
  int result; // eax
  int *v4; // rbx
  int v5; // er12
  int *i; // rbp
  int v7; // ebp
  void *v8; // rax
  void *v9; // [rsp+0h] [rbp-B8h]
  __m128i v10; // [rsp+8h] [rbp-B0h]
  __m128i v11; // [rsp+18h] [rbp-A0h]
  __m128i v12; // [rsp+28h] [rbp-90h]
  __m128i v13; // [rsp+38h] [rbp-80h]
  __m128i v14; // [rsp+48h] [rbp-70h]
  __m128i v15; // [rsp+58h] [rbp-60h]
  __m128i v16; // [rsp+68h] [rbp-50h]
  __m128i v17; // [rsp+78h] [rbp-40h]
  int v18; // [rsp+88h] [rbp-30h]

  if ( !a1 )
  {
    v1 = (int *)&unk_419504;
    v2 = 20;
    while ( 1 )
    {
      result = sigismember(&set, v2);
      if ( result )
      {
        result = (unsigned __int64)signal(v2, 0LL);
        if ( v1 == (int *)&unk_419530 )
          return result;
      }
      else if ( v1 == (int *)&unk_419530 )
      {
        return result;
      }
      v2 = *v1;
      ++v1;
    }
  }
  v4 = (int *)&unk_419504;
  v5 = 20;
  sigemptyset(&set);
  for ( i = (int *)&unk_419504; ; ++i )
  {
    sigaction(v5, 0LL, (struct sigaction *)&v9);
    if ( v9 != (void *)1 )
      sigaddset(&set, v5);
    if ( i == (int *)&unk_419530 )
      break;
    v5 = *i;
  }
  v18 = 0x10000000;
  v7 = 20;
  v10 = _mm_load_si128((const __m128i *)&set);
  v11 = _mm_load_si128((const __m128i *)&set.__val[2]);
  v12 = _mm_load_si128((const __m128i *)&set.__val[4]);
  v13 = _mm_load_si128((const __m128i *)&set.__val[6]);
  v14 = _mm_load_si128((const __m128i *)&set.__val[8]);
  v15 = _mm_load_si128((const __m128i *)&set.__val[10]);
  v16 = _mm_load_si128((const __m128i *)&set.__val[12]);
  v17 = _mm_load_si128((const __m128i *)&set.__val[14]);
  while ( 1 )
  {
    result = sigismember(&set, v7);
    if ( result )
    {
      v8 = sub_404830;
      if ( v7 == 20 )
        v8 = sub_405560;
      v9 = v8;
      result = sigaction(v7, (const struct sigaction *)&v9, 0LL);
    }
    if ( v4 == (int *)&unk_419530 )
      break;
    v7 = *v4;
    ++v4;
  }
  return result;
}

__int64 sub_405C70()
{
  if ( qword_624448 )
    return sub_405CD0(&unk_624440, &qword_624448);
  sub_405CD0(qword_624420, &off_624428);
  sub_405CD0(&unk_624450, &off_624458);
  return sub_405CD0(&qword_624430, &off_624438);
}

size_t __fastcall sub_405CD0(size_t *a1, const void **a2)
{
  if ( !byte_6256D0 )
  {
    byte_6256D0 = 1;
    if ( tcgetpgrp(1) >= 0 )
      sub_405AF0(1);
    sub_405C70();
  }
  return fwrite_unlocked(*a2, *a1, 1uLL, stdout);
}

size_t sub_405D40()
{
  sub_405CD0((size_t *)qword_624420, (const void **)&off_624428);
  return sub_405CD0((size_t *)&qword_624430, (const void **)&off_624438);
}

__int64 sub_405D70()
{
  __int64 result; // rax
  int v1; // ebx
  __int64 v2; // [rsp-88h] [rbp-88h]

  while ( 1 )
  {
    if ( !sig )
    {
      result = (unsigned int)dword_6255D4;
      if ( !dword_6255D4 )
        break;
    }
    if ( byte_6256D0 )
      sub_405D40();
    fflush_unlocked(stdout);
    sigprocmask(0, &set, (sigset_t *)&v2);
    v1 = sig;
    if ( dword_6255D4 )
    {
      v1 = 19;
      --dword_6255D4;
    }
    else
    {
      signal(sig, 0LL);
    }
    raise(v1);
    sigprocmask(2, (const sigset_t *)&v2, 0LL);
  }
  return result;
}

void sub_405E30()
{
  if ( byte_6256D2 )
  {
    if ( sub_404AE0(4u) )
    {
      sub_405CD0((size_t *)qword_624420, (const void **)&off_624428);
      sub_405CD0((size_t *)&unk_624460, (const void **)&unk_624468);
      sub_405CD0((size_t *)&qword_624430, (const void **)&off_624438);
    }
  }
}

size_t __usercall sub_405EA0(__int64 a1, int a2, size_t a3, char **a4, char *a5, size_t *a6, char *a7)
{
  char *v7; // r13
  int v8; // er10
  unsigned __int64 v9; // rax
  int v10; // er10
  size_t v11; // r9
  size_t v12; // rax
  size_t v13; // rax
  const unsigned __int16 **v14; // rax
  const unsigned __int16 *v15; // rcx
  char *v16; // rax
  size_t v17; // rax
  size_t v18; // r12
  char *v19; // rbp
  const unsigned __int16 **v20; // rax
  char *v21; // rdx
  char v22; // al
  char *v24; // r15
  char *v25; // r14
  char v26; // al
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  char v30; // cl
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // r14
  int v34; // [rsp+8h] [rbp-70h]
  int v35; // [rsp+8h] [rbp-70h]
  int v36; // [rsp+8h] [rbp-70h]
  size_t v37; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+8h] [rbp-70h]
  unsigned __int64 v39; // [rsp+8h] [rbp-70h]
  size_t *v40; // [rsp+10h] [rbp-68h]
  char v41; // [rsp+18h] [rbp-60h]
  size_t v42; // [rsp+18h] [rbp-60h]
  int v43; // [rsp+18h] [rbp-60h]
  char *v44; // [rsp+28h] [rbp-50h]
  wchar_t c; // [rsp+34h] [rbp-44h]
  mbstate_t ps; // [rsp+38h] [rbp-40h]

  v7 = *a4;
  v34 = a2;
  v40 = a6;
  v44 = a7;
  v41 = byte_625698 & ((unsigned int)sub_411C20(a1) <= 2);
  if ( v41 )
  {
    if ( !v34 )
    {
      v17 = strlen(a5);
      a3 = v17;
      v18 = v17 + 1;
      if ( v17 > 0x1FFF )
        v7 = (char *)sub_412980(v17 + 1);
      memcpy(v7, a5, v18);
      v41 = 0;
LABEL_23:
      v19 = &v7[a3];
      if ( __ctype_get_mb_cur_max() <= 1 )
      {
        if ( v19 > v7 )
        {
          v20 = __ctype_b_loc();
          v21 = v7;
          do
          {
            if ( !((*v20)[(unsigned __int8)*v21] & 0x4000) )
              *v21 = 63;
            ++v21;
          }
          while ( v21 != v19 );
        }
        v11 = a3;
LABEL_30:
        v22 = byte_625768;
        if ( !byte_625768 )
          goto LABEL_32;
        goto LABEL_31;
      }
      if ( v19 <= v7 )
      {
        v11 = 0LL;
        a3 = 0LL;
        goto LABEL_30;
      }
      v24 = v7;
      v25 = v7;
      a3 = 0LL;
LABEL_41:
      v26 = *v25;
      if ( *v25 <= 63 )
      {
        if ( v26 >= 37 || (unsigned __int8)(v26 - 32) <= 3u )
        {
LABEL_39:
          *v24 = v26;
          ++v25;
          ++a3;
          ++v24;
          goto LABEL_40;
        }
      }
      else if ( v26 >= 65 && (v26 <= 95 || (unsigned __int8)(v26 - 97) <= 0x1Du) )
      {
        goto LABEL_39;
      }
      ps = 0LL;
      while ( 1 )
      {
        v29 = sub_416E80(&c, v25);
        if ( v29 == -1 )
        {
          *v24 = 63;
          ++v25;
          ++a3;
          goto LABEL_61;
        }
        if ( v29 == -2 )
        {
          *v24 = 63;
          ++a3;
          v25 = v19;
LABEL_61:
          ++v24;
LABEL_40:
          if ( v19 <= v25 )
          {
            v11 = v24 - v7;
            goto LABEL_30;
          }
          goto LABEL_41;
        }
        v38 = v29;
        if ( v29 )
        {
          v27 = wcwidth(c);
          v28 = (__int64)&v25[v38];
          if ( v27 >= 0 )
          {
            v31 = 0LL;
            do
            {
              v24[v31] = v25[v31];
              ++v31;
            }
            while ( v38 != v31 );
            v25 += v38;
            v24 += v38;
            goto LABEL_54;
          }
        }
        else
        {
          v27 = wcwidth(c);
          v28 = (__int64)(v25 + 1);
          if ( v27 >= 0 )
          {
            v30 = *v25++;
            *v24++ = v30;
LABEL_54:
            a3 += v27;
            goto LABEL_48;
          }
        }
        *v24 = 63;
        ++a3;
        ++v24;
        v25 = (char *)v28;
LABEL_48:
        if ( mbsinit(&ps) )
          goto LABEL_40;
      }
    }
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( !v34 )
    {
      v7 = a5;
      v11 = strlen(a5);
      goto LABEL_10;
    }
  }
  v35 = v8;
  v9 = sub_411CD0((__int64)v7, 0x2000LL, a5);
  v10 = v35;
  v11 = v9;
  if ( v9 > 0x1FFF )
  {
    v33 = v9 + 1;
    v43 = v35;
    v39 = v9;
    v7 = (char *)sub_412980(v9 + 1);
    sub_411CD0((__int64)v7, v33, a5);
    v10 = v43;
    v11 = v39;
  }
  v41 = 1;
  if ( *a5 == *v7 )
  {
    v42 = v11;
    v36 = v10;
    v12 = strlen(a5);
    v11 = v42;
    v10 = v36;
    v41 = v42 != v12;
  }
  if ( v10 )
  {
    a3 = v11;
    goto LABEL_23;
  }
LABEL_10:
  if ( v40 )
  {
    v37 = v11;
    v13 = __ctype_get_mb_cur_max();
    v11 = v37;
    if ( v13 > 1 )
    {
      v32 = sub_40E9B0(v7);
      v11 = v37;
      a3 = v32;
    }
    else if ( &v7[v37] <= v7 )
    {
      a3 = 0LL;
    }
    else
    {
      a3 = 0LL;
      v14 = __ctype_b_loc();
      v11 = v37;
      v15 = *v14;
      v16 = v7;
      do
        a3 -= ((v15[(unsigned __int8)*v16++] & 0x4000u) < 1) - 1LL;
      while ( &v7[v37] != v16 );
    }
    if ( !byte_625768 )
    {
      *v44 = 0;
LABEL_33:
      *v40 = a3;
      goto LABEL_34;
    }
  }
  else if ( !byte_625768 )
  {
    *v44 = 0;
    goto LABEL_34;
  }
LABEL_31:
  v22 = (v41 | byte_625769 ^ 1) ^ 1;
LABEL_32:
  *v44 = v22;
  if ( v40 )
    goto LABEL_33;
LABEL_34:
  *a4 = v7;
  return v11;
}

size_t __fastcall sub_4062D0(char *a1, __int64 a2, int a3, __int64 a4, char a5, size_t a6, const char *a7)
{
  char v7; // r15
  __int64 v8; // r12
  size_t v9; // rbx
  size_t v10; // rbp
  char v11; // r12
  __int64 v12; // r10
  __int64 v13; // r9
  void *v14; // r15
  void *v15; // r9
  size_t v16; // r10
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rcx
  unsigned __int8 v20; // dl
  char *v21; // rax
  unsigned __int8 v23; // dl
  char *v24; // rax
  char *v25; // rax
  void *ptr; // [rsp+8h] [rbp-2060h]
  void *ptra; // [rsp+8h] [rbp-2060h]
  __int64 v28; // [rsp+10h] [rbp-2058h]
  size_t v29; // [rsp+10h] [rbp-2058h]
  size_t n; // [rsp+18h] [rbp-2050h]
  unsigned __int8 v31; // [rsp+27h] [rbp-2041h]
  void *v32; // [rsp+28h] [rbp-2040h]
  char v33; // [rsp+30h] [rbp-2038h]

  v7 = a5;
  v8 = a4;
  v9 = a6;
  v32 = &v33;
  v10 = sub_405EA0(a2, a3, a6, (char **)&v32, a1, 0LL, (char *)&v31);
  if ( v31 && v7 )
  {
    v25 = stdout->_IO_write_ptr;
    if ( v25 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 32);
    }
    else
    {
      stdout->_IO_write_ptr = v25 + 1;
      *v25 = 32;
    }
    ++qword_6255B8;
  }
  if ( v8 )
  {
    if ( sub_404AE0(4u) )
      sub_405D40();
    sub_405CD0((size_t *)qword_624420, (const void **)&off_624428);
    sub_405CD0((size_t *)v8, (const void **)(v8 + 8));
    sub_405CD0((size_t *)&qword_624430, (const void **)&off_624438);
  }
  if ( a7 )
  {
    v11 = byte_625768;
    if ( byte_625768 && (v11 = byte_625769) != 0 )
    {
      if ( v31 )
      {
        v12 = v10;
        v13 = 0LL;
        v11 = 0;
      }
      else
      {
        v12 = v10 - 2;
        v23 = *(_BYTE *)v32;
        v24 = stdout->_IO_write_ptr;
        if ( v24 >= stdout->_IO_write_end )
        {
          __overflow(stdout, v23);
          v13 = 1LL;
          v12 = v10 - 2;
        }
        else
        {
          v13 = 1LL;
          stdout->_IO_write_ptr = v24 + 1;
          *v24 = v23;
        }
      }
    }
    else
    {
      v12 = v10;
      v13 = 0LL;
    }
    n = v12;
    v28 = v13;
    v14 = (void *)sub_404E80((const char *)qword_625748, 0LL);
    ptr = (void *)sub_404E80(a7, 1LL);
    __printf_chk(1LL, "\x1B]8;;file://%s%s%s\a", v14);
    free(v14);
    free(ptr);
    v15 = (void *)v28;
    v16 = n;
    if ( v9 )
      goto LABEL_11;
LABEL_35:
    fwrite_unlocked((char *)v32 + (_QWORD)v15, 1uLL, v16, stdout);
    qword_6255B8 += v10;
    goto LABEL_19;
  }
  v16 = v10;
  v15 = 0LL;
  v11 = 0;
  if ( !v9 )
    goto LABEL_35;
LABEL_11:
  if ( byte_6256D8 )
  {
    v17 = *(_QWORD **)(v9 + 24);
    if ( *(_QWORD *)(v9 + 32) - (_QWORD)v17 <= 7uLL )
    {
      v29 = v16;
      ptra = v15;
      obstack_newchunk(v9, 8LL);
      v17 = *(_QWORD **)(v9 + 24);
      v16 = v29;
      v15 = ptra;
    }
    *v17 = qword_6255B8;
    *(_QWORD *)(v9 + 24) += 8LL;
  }
  fwrite_unlocked((char *)v32 + (_QWORD)v15, 1uLL, v16, stdout);
  v18 = v10 + qword_6255B8;
  qword_6255B8 += v10;
  if ( byte_6256D8 )
  {
    v19 = *(__int64 **)(v9 + 24);
    if ( *(_QWORD *)(v9 + 32) - (_QWORD)v19 <= 7uLL )
    {
      obstack_newchunk(v9, 8LL);
      v19 = *(__int64 **)(v9 + 24);
      v18 = qword_6255B8;
    }
    *v19 = v18;
    *(_QWORD *)(v9 + 24) += 8LL;
  }
LABEL_19:
  if ( a7 )
  {
    fwrite_unlocked("\x1B]8;;\a", 1uLL, 6uLL, stdout);
    if ( v11 )
    {
      v20 = *((char *)v32 + v10 - 1);
      v21 = stdout->_IO_write_ptr;
      if ( v21 >= stdout->_IO_write_end )
      {
        __overflow(stdout, v20);
      }
      else
      {
        stdout->_IO_write_ptr = v21 + 1;
        *v21 = v20;
      }
    }
  }
  if ( v32 != &v33 && v32 != a1 )
    free(v32);
  return v10 + v31;
}

size_t __fastcall sub_406690(__int64 a1, char a2, size_t a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r13
  size_t v5; // r12
  char *v6; // rbp
  size_t v7; // rbx
  int v9; // er8
  bool v10; // al
  int v11; // edx
  __int64 v12; // rcx
  char v13; // cl
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  size_t v17; // rax
  __int64 v18; // rbx
  size_t v19; // rcx
  int v20; // eax
  char v21; // r8
  bool v22; // al
  __int64 v23; // rcx
  bool v24; // al
  size_t v25; // [rsp+8h] [rbp-40h]

  v4 = a4;
  v5 = a3;
  if ( !a2 )
  {
    v6 = *(char **)a1;
    if ( !byte_6256D2 )
      goto LABEL_3;
    v11 = *(unsigned __int8 *)(a1 + 185);
    if ( byte_625750 && (_BYTE)v11 )
      v9 = *(_DWORD *)(a1 + 172);
    else
      v9 = *(_DWORD *)(a1 + 48);
    goto LABEL_11;
  }
  v6 = *(char **)(a1 + 8);
  if ( !byte_6256D2 )
  {
LABEL_3:
    v7 = sub_4062D0(v6, qword_625690, *(_DWORD *)(a1 + 196), 0LL, a2 ^ 1u, v5, *(const char **)(a1 + 16));
    sub_405D70();
    return v7;
  }
  v9 = *(_DWORD *)(a1 + 172);
  if ( !*(_BYTE *)(a1 + 185) )
  {
    v10 = sub_404AE0(0xCu);
    v11 = -1;
    if ( v10 )
    {
      v12 = 192LL;
LABEL_17:
      v15 = v12 + 6439968;
      goto LABEL_18;
    }
LABEL_11:
    v13 = *(_BYTE *)(a1 + 184);
    if ( !v13 )
      goto LABEL_12;
    goto LABEL_25;
  }
  v13 = *(_BYTE *)(a1 + 184);
  v11 = 0;
  if ( !v13 )
  {
LABEL_12:
    v14 = (unsigned int)dword_419540[*(unsigned int *)(a1 + 168)];
    v13 = (_DWORD)v14 == 7;
    if ( (_DWORD)v14 != 5 )
    {
LABEL_13:
      if ( v11 || !v13 )
      {
        v12 = 16 * v14;
      }
      else
      {
        v12 = 208LL;
        if ( !byte_625750 )
          v12 = (-(__int64)((unsigned __int8)sub_404AE0(0xDu) < 1u) & 0xFFFFFFFFFFFFFFA0LL) + 208;
      }
      goto LABEL_17;
    }
    goto LABEL_36;
  }
LABEL_25:
  v16 = v9 & 0xF000;
  if ( v16 != 0x8000 )
  {
    if ( v16 == 0x4000 )
    {
      if ( (v9 & 0x202) != 514 || (v24 = sub_404AE0(0x14u), v12 = 320LL, !v24) )
      {
        if ( !(v9 & 2) || (v22 = sub_404AE0(0x13u), v12 = 304LL, !v22) )
        {
          v12 = 96LL;
          if ( v9 & 0x200 )
          {
            v23 = -(__int64)((unsigned __int8)sub_404AE0(0x12u) < 1u);
            LOBYTE(v23) = v23 & 0x40;
            v12 = v23 + 288;
          }
        }
      }
      goto LABEL_17;
    }
    if ( v16 != 40960 )
    {
      v12 = 128LL;
      if ( v16 != 4096 )
      {
        v12 = 144LL;
        if ( v16 != 49152 )
        {
          v12 = 160LL;
          if ( v16 != 24576 )
          {
            v12 = 176LL;
            if ( v16 != 0x2000 )
              v12 = 208LL;
          }
        }
      }
      goto LABEL_17;
    }
    v14 = 7LL;
    goto LABEL_13;
  }
  if ( v9 & 0x800 && sub_404AE0(0x10u) )
  {
    v12 = 256LL;
    goto LABEL_17;
  }
  if ( v9 & 0x400 && sub_404AE0(0x11u) )
  {
    v12 = 272LL;
    goto LABEL_17;
  }
  if ( sub_404AE0(0x15u) && *(_BYTE *)(a1 + 192) )
  {
    v12 = 336LL;
    goto LABEL_17;
  }
  if ( v21 & 0x49 && sub_404AE0(0xEu) )
  {
    v12 = 224LL;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 40) > 1uLL && sub_404AE0(0x16u) )
  {
    v12 = 352LL;
    goto LABEL_17;
  }
LABEL_36:
  v17 = strlen(v6);
  v18 = qword_6256C8;
  v19 = v17;
  if ( !qword_6256C8 )
  {
LABEL_40:
    v12 = 80LL;
    goto LABEL_17;
  }
  while ( 1 )
  {
    if ( v19 >= *(_QWORD *)v18 )
    {
      v25 = v19;
      v20 = strncmp(&v6[v19 - *(_QWORD *)v18], *(const char **)(v18 + 8), *(_QWORD *)v18);
      v19 = v25;
      if ( !v20 )
        break;
    }
    v18 = *(_QWORD *)(v18 + 32);
    if ( !v18 )
      goto LABEL_40;
  }
  v15 = v18 + 16;
LABEL_18:
  if ( !*(_QWORD *)(v15 + 8) )
  {
    if ( !sub_404AE0(4u) )
      goto LABEL_3;
    v15 = 0LL;
  }
  v7 = sub_4062D0(v6, qword_625690, *(_DWORD *)(a1 + 196), v15, a2 ^ 1u, v5, *(const char **)(a1 + 16));
  sub_405D70();
  sub_405C70();
  if ( qword_625670 && v4 / qword_625670 != (v7 + v4 - 1) / qword_625670 )
    sub_405CD0((size_t *)&unk_624590, (const void **)&off_624598);
  return v7;
}

size_t __fastcall sub_406AF0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  size_t v8; // rbp
  size_t result; // rax
  __int64 v10; // [rsp+0h] [rbp-2A8h]

  v2 = a1;
  sub_405E30();
  if ( byte_6256BC )
  {
    if ( *(_BYTE *)(a1 + 184) )
    {
      v4 = *(_QWORD *)(a1 + 32);
      if ( v4 )
        sub_40E520(v4, &v10, v3, "?");
    }
    v5 = 0LL;
    if ( dword_6256F8 != 4 )
      v5 = (unsigned int)dword_625720;
    __printf_chk(1LL, "%*s ", v5);
  }
  if ( byte_6256EC )
  {
    if ( *(_BYTE *)(v2 + 184) )
      sub_40D5D0(*(_QWORD *)(v2 + 88), &v10, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
    v6 = 0LL;
    if ( dword_6256F8 != 4 )
      v6 = (unsigned int)dword_62571C;
    __printf_chk(1LL, "%*s ", v6);
  }
  if ( byte_625725 )
  {
    v7 = 0LL;
    if ( dword_6256F8 != 4 )
      v7 = (unsigned int)dword_625714;
    __printf_chk(1LL, "%*s ", v7);
  }
  v8 = sub_406690(v2, 0, 0LL, a2);
  if ( dword_6256D4 )
    result = sub_4058A0(*(_BYTE *)(v2 + 184), *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 168)) + v8;
  else
    result = v8;
  return result;
}

char __fastcall sub_406C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  char *v8; // rbx
  char *v9; // r15
  int v10; // er14
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  char *v14; // rax
  char v15; // al
  __int64 v16; // rcx
  char *v17; // rbx
  char *v18; // r14
  int v19; // er13
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  char *v24; // rax
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // r13
  unsigned __int64 v28; // r13
  size_t v29; // rax
  int v30; // edx
  size_t v31; // r12
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdi
  char *v36; // rbx
  int v37; // eax
  unsigned int v38; // edx
  bool v39; // cf
  __time_t v40; // rdx
  __time_t v41; // rcx
  int v42; // esi
  __int64 v43; // r9
  int v44; // edi
  int v45; // eax
  __int64 v46; // rax
  char *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  char *v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rax
  __time_t v53; // rdi
  int v54; // er13
  unsigned __int64 v55; // rax
  unsigned int v56; // edi
  __int64 v57; // rcx
  int v58; // er8
  char *v59; // rdx
  unsigned int v60; // eax
  unsigned int v62; // [rsp+4h] [rbp-1344h]
  __int64 v63; // [rsp+8h] [rbp-1340h]
  __int64 v64; // [rsp+18h] [rbp-1330h]
  char v65; // [rsp+24h] [rbp-1324h]
  __int64 v66; // [rsp+25h] [rbp-1323h]
  char v67; // [rsp+2Eh] [rbp-131Ah]
  __time_t v68; // [rsp+30h] [rbp-1318h]
  __int64 v69; // [rsp+38h] [rbp-1310h]
  char v70; // [rsp+40h] [rbp-1308h]
  char v71; // [rsp+60h] [rbp-12E8h]
  int v72; // [rsp+70h] [rbp-12D8h]
  char v73; // [rsp+A0h] [rbp-12A8h]
  int v74; // [rsp+B0h] [rbp-1298h]
  char v75; // [rsp+E0h] [rbp-1268h]
  char s; // [rsp+4D0h] [rbp-E78h]

  v4 = a1;
  if ( *(_BYTE *)(a1 + 184) )
  {
    sub_40BB60(a1 + 24, &v65);
  }
  else
  {
    v65 = byte_419FC8[*(unsigned int *)(a1 + 168)];
    strcpy((char *)&v66, "??????????");
  }
  if ( !byte_625724 )
  {
    v67 = 0;
    goto LABEL_5;
  }
  v33 = *(_DWORD *)(a1 + 188);
  if ( v33 == 1 )
  {
    v67 = 46;
LABEL_5:
    v5 = dword_6256F4;
    if ( dword_6256F4 != 1 )
      goto LABEL_6;
LABEL_54:
    v34 = *(_QWORD *)(a1 + 136);
    v68 = *(_QWORD *)(a1 + 128);
    v7 = *(unsigned __int8 *)(a1 + 184);
    v69 = v34;
    if ( !byte_6256BC )
      goto LABEL_8;
    goto LABEL_57;
  }
  if ( v33 != 2 )
    goto LABEL_5;
  v5 = dword_6256F4;
  v67 = 43;
  if ( dword_6256F4 == 1 )
    goto LABEL_54;
LABEL_6:
  if ( v5 )
  {
    if ( v5 != 2 )
      abort();
    v32 = *(_QWORD *)(a1 + 104);
    v68 = *(_QWORD *)(a1 + 96);
    v7 = *(unsigned __int8 *)(a1 + 184);
    v69 = v32;
    if ( !byte_6256BC )
      goto LABEL_8;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 120);
    v68 = *(_QWORD *)(a1 + 112);
    v7 = *(unsigned __int8 *)(a1 + 184);
    v69 = v6;
    if ( !byte_6256BC )
    {
LABEL_8:
      v8 = &s;
      goto LABEL_9;
    }
  }
LABEL_57:
  if ( (_BYTE)v7 )
  {
    v35 = *(_QWORD *)(a1 + 32);
    if ( v35 )
      sub_40E520(v35, &v75, v7, a4);
  }
  v36 = &s;
  __sprintf_chk(&s, 1LL, 3643LL, "%*s ", (unsigned int)dword_625720);
  do
  {
    v37 = *(_DWORD *)v36;
    v36 += 4;
    v38 = ~v37 & (v37 - 16843009) & 0x80808080;
  }
  while ( !v38 );
  if ( !(~v37 & (v37 - 16843009) & 0x8080) )
    LOBYTE(v38) = (~v37 & (v37 - 16843009) & 0x80808080) >> 16;
  if ( !(~v37 & (v37 - 16843009) & 0x8080) )
    v36 += 2;
  v39 = __CFADD__((_BYTE)v38, (_BYTE)v38);
  v7 = *(unsigned __int8 *)(v4 + 184);
  v8 = &v36[-v39 - 3];
LABEL_9:
  if ( byte_6256EC )
  {
    v9 = "?";
    if ( (_BYTE)v7 )
      v9 = (char *)sub_40D5D0(*(_QWORD *)(v4 + 88), &v75, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
    v10 = dword_62571C;
    v11 = v10 - (unsigned __int64)sub_40EB70(v9);
    if ( v11 > 0 )
    {
      v12 = v11 - 1;
      v13 = v12;
      a4 = (__int64)&v8[v12 + 1];
      v14 = v8;
      do
        *(++v14 - 1) = 32;
      while ( v14 != (char *)a4 );
      v8 += (int)v13 + 1;
    }
    do
    {
      v15 = *(++v9 - 1);
      *(++v8 - 1) = v15;
    }
    while ( v15 );
    *(v8 - 1) = 32;
    v7 = *(unsigned __int8 *)(v4 + 184);
  }
  if ( (_BYTE)v7 )
    sub_40E520(*(_QWORD *)(v4 + 40), &v75, v7, a4);
  __sprintf_chk(v8, 1LL, -1LL, "%s %*s ", &v65);
  v17 = &v8[strlen(v8)];
  if ( byte_6256D8 )
  {
    fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
    qword_6255B8 += 2LL;
  }
  if ( byte_6245A9 || byte_6245A8 || byte_6256EE || byte_625725 )
  {
    fputs_unlocked(&s, stdout);
    qword_6255B8 += v17 - &s;
    if ( byte_6245A9 )
      sub_405520(*(_DWORD *)(v4 + 52), dword_625710, *(_BYTE *)(v4 + 184));
    if ( byte_6245A8 )
    {
      v49 = (unsigned int)dword_62570C;
      v50 = "?";
      v51 = *(unsigned int *)(v4 + 56);
      if ( *(_BYTE *)(v4 + 184) )
      {
        v50 = 0LL;
        if ( !byte_6256ED )
        {
          v63 = *(unsigned int *)(v4 + 56);
          v62 = dword_62570C;
          v52 = sub_40E2F0((unsigned int)v51);
          v51 = v63;
          v49 = v62;
          v50 = (char *)v52;
        }
      }
      sub_405460(v50, v51, v49);
    }
    if ( byte_6256EE )
      sub_405520(*(_DWORD *)(v4 + 52), dword_625708, *(_BYTE *)(v4 + 184));
    v17 = &s;
    if ( byte_625725 )
      sub_405460(*(char **)(v4 + 176), 0LL, (unsigned int)dword_625714);
  }
  if ( !*(_BYTE *)(v4 + 184) )
  {
    v18 = "?";
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(v4 + 48) & 0xB000) != 0x2000 )
  {
    v18 = (char *)sub_40D5D0(*(_QWORD *)(v4 + 72), &v75, (unsigned int)dword_6256DC, 1LL, qword_6245A0);
LABEL_35:
    v19 = dword_6256FC;
    v20 = v19 - (unsigned __int64)sub_40EB70(v18);
    if ( v20 > 0 )
    {
      v21 = v20 - 1;
      v22 = v21;
      v23 = (__int64)&v17[v21 + 1];
      v24 = v17;
      do
        *(++v24 - 1) = 32;
      while ( v24 != (char *)v23 );
      v17 += (int)v22 + 1;
    }
    do
    {
      v25 = *(++v18 - 1);
      *(++v17 - 1) = v25;
    }
    while ( v25 );
    *(v17 - 1) = 32;
    goto LABEL_41;
  }
  v54 = dword_6256FC - (dword_625704 + dword_625700 + 2);
  v55 = *(_QWORD *)(v4 + 64);
  v56 = v55 >> 12;
  LOBYTE(v56) = 0;
  sub_40E520((unsigned __int8)v55 | v56, &v75, (unsigned __int8)v55, v16);
  sub_40E520(
    ((unsigned int)*(_QWORD *)(v4 + 64) >> 8) & 0xFFF | (*(_QWORD *)(v4 + 64) >> 32) & 0xFFFFF000,
    &v73,
    ((unsigned int)*(_QWORD *)(v4 + 64) >> 8) & 0xFFF,
    v57);
  v58 = 0;
  if ( v54 >= 0 )
    v58 = v54;
  __sprintf_chk(v17, 1LL, -1LL, &unk_41B096, (unsigned int)(dword_625704 + v58));
  v17 += dword_6256FC + 1;
LABEL_41:
  *v17 = 1;
  if ( !*(_BYTE *)(v4 + 184) )
    goto LABEL_42;
  if ( !sub_4176F0(qword_625668, &v68, &v71) )
    goto LABEL_81;
  v40 = tp.tv_sec;
  v41 = v68;
  v42 = tp.tv_nsec;
  v43 = v69;
  if ( tp.tv_sec < v68 )
    goto LABEL_110;
  if ( tp.tv_sec <= v68 )
  {
    v44 = tp.tv_nsec;
    v45 = v69;
    if ( LODWORD(tp.tv_nsec) - (int)v69 >= 0 )
    {
      if ( tp.tv_sec - 15778476 >= v68 )
      {
        v46 = 0LL;
        goto LABEL_77;
      }
LABEL_96:
      v46 = (unsigned int)(v45 - v44) >> 31;
      goto LABEL_77;
    }
LABEL_110:
    sub_40C150(&tp);
    v41 = v68;
    v43 = v69;
    v40 = tp.tv_sec;
    v42 = tp.tv_nsec;
    v53 = tp.tv_sec - 15778476;
    if ( tp.tv_sec - 15778476 < v68 )
      goto LABEL_93;
    goto LABEL_91;
  }
  v53 = tp.tv_sec - 15778476;
  if ( tp.tv_sec - 15778476 < v68 )
    goto LABEL_113;
LABEL_91:
  v46 = 0LL;
  if ( v53 > v41 || v42 - (int)v43 >= 0 )
    goto LABEL_77;
LABEL_93:
  if ( v41 >= v40 )
  {
    v46 = 0LL;
    if ( v41 > v40 )
      goto LABEL_77;
    v45 = v43;
    v44 = v42;
    goto LABEL_96;
  }
LABEL_113:
  v46 = 1LL;
LABEL_77:
  if ( byte_624788 )
    v47 = (char *)(((v72 + 12 * v46) << 7) + 6440864);
  else
    v47 = (&off_624410)[v46];
  v48 = sub_410650(v17, 1001LL, v47, &v71, qword_625668, v43);
  if ( v48 )
  {
    v17 += v48;
    goto LABEL_82;
  }
LABEL_81:
  if ( *v17 )
  {
    if ( *(_BYTE *)(v4 + 184) )
    {
      sub_40E480(v68, &v70);
      v26 = (unsigned int)dword_624404;
      if ( dword_624404 >= 0 )
        goto LABEL_43;
      goto LABEL_102;
    }
LABEL_42:
    v26 = (unsigned int)dword_624404;
    if ( dword_624404 >= 0 )
    {
LABEL_43:
      __sprintf_chk(v17, 1LL, -1LL, "%*s ", v26);
      v27 = (__int64)&v17[strlen(v17)];
      goto LABEL_44;
    }
LABEL_102:
    v64 = 0LL;
    if ( !sub_4176F0(qword_625668, &v64, &v73) )
      goto LABEL_119;
    v59 = off_624410;
    if ( byte_624788 )
      v59 = (char *)(((__int64)v74 << 7) + 6440864);
    if ( sub_410650(&v75, 1001LL, v59, &v73, qword_625668, 0LL) )
    {
      v60 = sub_40E9B0(&v75);
      v26 = v60;
      dword_624404 = v60;
    }
    else
    {
LABEL_119:
      v26 = (unsigned int)dword_624404;
    }
    if ( (int)v26 < 0 )
    {
      dword_624404 = 0;
      v26 = 0LL;
    }
    goto LABEL_43;
  }
LABEL_82:
  v27 = (__int64)(v17 + 1);
  *(_WORD *)v17 = 32;
LABEL_44:
  v28 = v27 - (_QWORD)&s;
  fputs_unlocked(&s, stdout);
  qword_6255B8 += v28;
  v29 = sub_406690(v4, 0, (size_t)&unk_625560, v28);
  v30 = *(_DWORD *)(v4 + 168);
  v31 = v29;
  if ( v30 == 6 )
  {
    if ( *(_QWORD *)(v4 + 8) )
    {
      fwrite_unlocked(" -> ", 1uLL, 4uLL, stdout);
      qword_6255B8 += 4LL;
      LOBYTE(v29) = sub_406690(v4, 1, 0LL, v28 + v31 + 4);
      if ( dword_6256D4 )
        LOBYTE(v29) = sub_4058A0(1, *(_DWORD *)(v4 + 172), 0);
    }
  }
  else
  {
    LOBYTE(v29) = dword_6256D4;
    if ( dword_6256D4 )
      LOBYTE(v29) = sub_4058A0(*(_BYTE *)(v4 + 184), *(_DWORD *)(v4 + 48), v30);
  }
  return v29;
}

__int64 __fastcall sub_407630(char *a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // [rsp+Fh] [rbp-2029h]
  void *ptr; // [rsp+10h] [rbp-2028h]
  __int64 v6; // [rsp+18h] [rbp-2020h]
  char v7; // [rsp+20h] [rbp-2018h]

  ptr = &v7;
  sub_405EA0(a2, a3, (size_t)&v7, (char **)&ptr, a1, (size_t *)&v6, (char *)&v4);
  if ( ptr != &v7 && ptr != a1 )
    free(ptr);
  return v6 + v4;
}

__int64 __fastcall sub_407690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  const char *v9; // rax
  const char *v10; // rax
  __int64 v11; // [rsp+0h] [rbp-2A8h]

  if ( !byte_6256BC )
  {
    v4 = 0LL;
    goto LABEL_14;
  }
  if ( dword_6256F8 == 4 )
  {
    v10 = (const char *)sub_40E520(*(_QWORD *)(a1 + 32), &v11, a3, a4);
    v4 = strlen(v10) + 1;
LABEL_14:
    if ( !byte_6256EC )
    {
LABEL_6:
      if ( !byte_625725 )
        goto LABEL_10;
      if ( dword_6256F8 == 4 )
      {
        v6 = strlen(*(const char **)(a1 + 176)) + 1;
        goto LABEL_9;
      }
LABEL_8:
      v6 = dword_625714 + 1LL;
LABEL_9:
      v4 += v6;
      goto LABEL_10;
    }
    if ( dword_6256F8 == 4 )
    {
      v5 = 2LL;
      if ( *(_BYTE *)(a1 + 184) )
      {
        v9 = (const char *)sub_40D5D0(*(_QWORD *)(a1 + 88), &v11, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
        v5 = strlen(v9) + 1;
      }
      goto LABEL_5;
    }
LABEL_4:
    v5 = dword_62571C + 1LL;
LABEL_5:
    v4 += v5;
    goto LABEL_6;
  }
  v4 = dword_625720 + 1LL;
  if ( byte_6256EC )
    goto LABEL_4;
  if ( byte_625725 )
    goto LABEL_8;
LABEL_10:
  v7 = sub_407630(*(char **)a1, qword_625690, *(_DWORD *)(a1 + 196)) + v4;
  if ( dword_6256D4 )
    v7 += (unsigned __int8)sub_4057B0(*(_BYTE *)(a1 + 184), *(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 168)) != 0;
  return v7;
}

unsigned __int64 __fastcall sub_407800(char a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // r12
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 v19; // r10
  __int64 v20; // r9
  unsigned __int64 v21; // r11
  __int64 v22; // rdi
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  __int64 *v25; // rsi
  unsigned __int64 v26; // r8
  __int64 v27; // rax

  v3 = a1;
  v4 = qword_625770;
  v5 = qword_6255C0;
  v6 = qword_6255C0;
  if ( qword_625770 <= (unsigned __int64)qword_6255C0 )
    v6 = qword_625770;
  if ( v6 > qword_6246A0 )
  {
    v7 = qword_6255C8;
    if ( v6 < (unsigned __int64)qword_6255C0 >> 1 )
    {
      v8 = (v6 * (unsigned __int128)0x30uLL) >> 64 != 0;
      if ( ((48 * v6) & 0x8000000000000000LL) != 0LL || (v6 * (unsigned __int128)0x30uLL) >> 64 != 0 )
        goto LABEL_43;
      v10 = 2 * v6;
      qword_6255C8 = sub_4129E0(qword_6255C8, 48 * v6);
    }
    else
    {
      v8 = ((unsigned __int64)qword_6255C0 * (unsigned __int128)0x18uLL) >> 64 != 0;
      if ( 24 * qword_6255C0 < 0 || ((unsigned __int64)qword_6255C0 * (unsigned __int128)0x18uLL) >> 64 != 0 )
        goto LABEL_43;
      v9 = sub_4129E0(qword_6255C8, 24 * qword_6255C0);
      v10 = qword_6255C0;
      qword_6255C8 = v9;
    }
    v7 = v10 - qword_6246A0;
    v11 = v10 + qword_6246A0 + 1;
    a2 = v11 * (v10 - qword_6246A0);
    if ( !__CFADD__(v10, qword_6246A0 + 1) )
    {
      v8 = a2 % v7;
      if ( v11 == a2 / v7 )
      {
        v12 = a2 >> 1;
        a2 >>= 62;
        v7 = 8 * v12;
        if ( (v7 & 0x8000000000000000LL) == 0LL && a2 == 0 )
        {
          v13 = sub_412980(v7);
          a3 = qword_6246A0;
          if ( v10 > qword_6246A0 )
          {
            v14 = qword_6255C8;
            a3 = 8 * qword_6246A0 + 8;
            a2 = 8 * v10 + 8;
            do
            {
              v5 = 3 * a3;
              *(_QWORD *)(v14 + 3 * a3 - 8) = v13;
              v13 += a3;
              a3 += 8LL;
            }
            while ( a2 != a3 );
          }
          qword_6246A0 = v10;
          v4 = qword_625770;
          goto LABEL_16;
        }
      }
    }
LABEL_43:
    sub_412BD0(v7, a2, v8);
  }
LABEL_16:
  if ( v6 )
  {
    v15 = qword_6255C8;
    a2 = 0LL;
    v5 = 3LL;
    do
    {
      v16 = *(_QWORD **)(v15 + 8 * v5 - 8);
      *(_BYTE *)(v15 + 8 * v5 - 24) = 1;
      a2 += 8LL;
      *(_QWORD *)(v15 + 8 * v5 - 16) = v5;
      a3 = (__int64)v16 + a2;
      do
      {
        *v16 = 3LL;
        ++v16;
      }
      while ( (_QWORD *)a3 != v16 );
      v5 += 3LL;
    }
    while ( v5 != 3 * v6 + 3 );
  }
  v17 = 0LL;
  if ( v4 )
  {
    do
    {
      v18 = sub_407690(*((_QWORD *)qword_625760 + v17), a2, a3, v5);
      v19 = qword_625770;
      v20 = v18;
      if ( v6 )
      {
        v21 = qword_625670;
        v5 = qword_6255C8;
        a2 = 0LL;
        v22 = v18 + 2;
        do
        {
          v26 = a2 + 1;
          if ( *(_BYTE *)v5 )
          {
            if ( v3 )
              v23 = v17 / ((v19 + a2) / (a2 + 1));
            else
              v23 = v17 % v26;
            v24 = v20;
            if ( v23 != a2 )
              v24 = v22;
            v25 = (__int64 *)(*(_QWORD *)(v5 + 16) + 8 * v23);
            a3 = *v25;
            if ( *v25 < v24 )
            {
              a3 = v24 + *(_QWORD *)(v5 + 8) - a3;
              *(_QWORD *)(v5 + 8) = a3;
              *v25 = v24;
              *(_BYTE *)v5 = *(_QWORD *)(v5 + 8) < v21;
            }
          }
          v5 += 24LL;
          a2 = v26;
        }
        while ( v6 != v26 );
      }
      ++v17;
    }
    while ( v17 < v19 );
  }
  if ( v6 > 1 && !*(_BYTE *)(qword_6255C8 + 24 * v6 - 24) )
  {
    v27 = qword_6255C8 + 24 * v6 - 48;
    do
    {
      if ( --v6 == 1 )
        break;
      v27 -= 24LL;
    }
    while ( !*(_BYTE *)(v27 + 24) );
  }
  return v6;
}

int __fastcall sub_407AE0(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 i; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  int v9; // ecx
  char v10; // dl
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char v15; // [rsp+Bh] [rbp-3Dh]
  int v16; // [rsp+Ch] [rbp-3Ch]

  if ( qword_625770 )
  {
    v4 = 0LL;
    for ( i = 0LL; qword_625770 > i; ++i )
    {
      v7 = *((_QWORD *)qword_625760 + i);
      if ( qword_625670 )
      {
        v8 = sub_407690(*((_QWORD *)qword_625760 + i), a2, a3, a4);
        if ( i )
        {
          v6 = v4 + 2;
          if ( !qword_625670 || qword_625670 > v8 + v4 + 2 && -3 - v8 >= v4 )
          {
            v4 += v8 + 2;
            goto LABEL_11;
          }
          v4 = v8;
          v9 = 10;
          v10 = 10;
          v6 = 0LL;
LABEL_12:
          v11 = stdout->_IO_write_ptr;
          if ( v11 >= stdout->_IO_write_end )
          {
            v16 = v9;
            v15 = v10;
            __overflow(stdout, a1);
            v10 = v15;
            v9 = v16;
          }
          else
          {
            stdout->_IO_write_ptr = v11 + 1;
            *v11 = a1;
          }
          v12 = stdout->_IO_write_ptr;
          if ( v12 >= stdout->_IO_write_end )
          {
            __overflow(stdout, v9);
          }
          else
          {
            stdout->_IO_write_ptr = v12 + 1;
            *v12 = v10;
          }
          goto LABEL_4;
        }
        v6 = v4;
        v4 += v8;
      }
      else
      {
        v6 = v4;
        if ( i )
        {
          v6 = v4 + 2;
          v4 += 2LL;
LABEL_11:
          v9 = 32;
          v10 = 32;
          goto LABEL_12;
        }
      }
LABEL_4:
      a2 = v6;
      sub_406AF0(v7, v6);
    }
  }
  v13 = stdout->_IO_write_ptr;
  if ( v13 >= stdout->_IO_write_end )
  {
    LODWORD(v13) = __overflow(stdout, 10);
  }
  else
  {
    stdout->_IO_write_ptr = v13 + 1;
    *v13 = 10;
  }
  return (int)v13;
}

int __fastcall sub_407CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rdi
  char v19; // di
  unsigned __int64 i; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 j; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  unsigned __int64 v27; // rt2
  _BOOL8 v28; // rdx
  bool v29; // zf
  __int64 v30; // rdx
  unsigned __int64 v31; // r14
  __int64 v32; // r13
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rdi
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rbx
  char *v38; // rax
  __int64 v40; // [rsp+0h] [rbp-50h]
  __int64 v41; // [rsp+0h] [rbp-50h]
  unsigned __int64 v42; // [rsp+8h] [rbp-48h]
  __int64 v43; // [rsp+10h] [rbp-40h]

  LODWORD(v4) = dword_6256F8;
  switch ( (unsigned __int64)(unsigned int)dword_6256F8 )
  {
    case 0uLL:
      for ( i = 0LL; qword_625770 > i; ++i )
      {
        sub_405E30();
        sub_406C60(*((_QWORD *)qword_625760 + i), a2, v21, v22);
        v4 = (unsigned __int64)stdout->_IO_write_ptr;
        if ( (char *)v4 >= stdout->_IO_write_end )
        {
          a2 = 10LL;
          LODWORD(v4) = __overflow(stdout, 10);
        }
        else
        {
          stdout->_IO_write_ptr = (char *)(v4 + 1);
          *(_BYTE *)v4 = 10;
        }
        ++qword_6255B8;
      }
      break;
    case 1uLL:
      for ( j = 0LL; qword_625770 > j; ++j )
      {
        sub_406AF0(*((_QWORD *)qword_625760 + j), 0LL);
        v4 = (unsigned __int64)stdout->_IO_write_ptr;
        if ( (char *)v4 >= stdout->_IO_write_end )
        {
          LODWORD(v4) = __overflow(stdout, 10);
        }
        else
        {
          stdout->_IO_write_ptr = (char *)(v4 + 1);
          *(_BYTE *)v4 = 10;
        }
      }
      break;
    case 2uLL:
      if ( !qword_625670 )
        goto LABEL_31;
      v24 = sub_407800(1, a2, a3);
      v42 = 0LL;
      v25 = v24;
      v26 = qword_6255C8 + 24 * v24 - 24;
      v27 = qword_625770 % v24;
      v4 = qword_625770 / v24;
      v28 = v27 != 0;
      v29 = v4 + v28 == 0;
      v30 = v4 + v28;
      v43 = v30;
      if ( !v29 )
      {
        do
        {
          v31 = v42;
          v32 = 0LL;
          v33 = 0LL;
          while ( 1 )
          {
            v35 = *((_QWORD *)qword_625760 + v31);
            v36 = sub_407690(*((_QWORD *)qword_625760 + v31), a2, v30, v25);
            a2 = v33;
            v41 = v36;
            v37 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + v32);
            v32 += 8LL;
            sub_406AF0(v35, v33);
            v31 += v43;
            if ( v31 >= qword_625770 )
              break;
            a2 = v33 + v37;
            v34 = v33 + v41;
            v33 = a2;
            sub_4052C0(v34, a2);
          }
          v38 = stdout->_IO_write_ptr;
          if ( v38 >= stdout->_IO_write_end )
          {
            a2 = 10LL;
            __overflow(stdout, 10);
          }
          else
          {
            v30 = (__int64)(v38 + 1);
            stdout->_IO_write_ptr = v38 + 1;
            *v38 = 10;
          }
          LODWORD(v4) = ++v42;
        }
        while ( v43 != v42 );
      }
      break;
    case 3uLL:
      if ( !qword_625670 )
      {
LABEL_31:
        v19 = 32;
        goto LABEL_11;
      }
      v5 = sub_407800(0, a2, a3);
      v6 = qword_6255C8 + 24 * v5 - 24;
      v7 = *(_QWORD *)qword_625760;
      v40 = sub_407690(*(_QWORD *)qword_625760, a2, 3 * v5, v8);
      v9 = **(_QWORD **)(v6 + 16);
      sub_406AF0(v7, 0LL);
      if ( (unsigned __int64)qword_625770 > 1 )
      {
        v10 = 0LL;
        v11 = 1LL;
        v12 = v40;
        do
        {
          v17 = v11 % v5;
          if ( v11 % v5 )
          {
            v18 = v10 + v12;
            v10 += v9;
            sub_4052C0(v18, v10);
          }
          else
          {
            v13 = stdout->_IO_write_ptr;
            v10 = 0LL;
            if ( v13 >= stdout->_IO_write_end )
            {
              __overflow(stdout, 10);
            }
            else
            {
              stdout->_IO_write_ptr = v13 + 1;
              *v13 = 10;
            }
          }
          v14 = *((_QWORD *)qword_625760 + v11++);
          sub_406AF0(v14, v10);
          v12 = sub_407690(v14, v10, v15, v16);
          v9 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8 * v17);
        }
        while ( v11 < qword_625770 );
      }
      v4 = (unsigned __int64)stdout->_IO_write_ptr;
      if ( (char *)v4 >= stdout->_IO_write_end )
      {
        LODWORD(v4) = __overflow(stdout, 10);
      }
      else
      {
        stdout->_IO_write_ptr = (char *)(v4 + 1);
        *(_BYTE *)v4 = 10;
      }
      break;
    case 4uLL:
      v19 = 44;
LABEL_11:
      LODWORD(v4) = sub_407AE0(v19, a2, a3, a4);
      break;
    default:
      return v4;
  }
  return v4;
}

int __fastcall sub_408040(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_9;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(a2 + 72) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 72) == v5 )
        result = strcmp(*(const char **)a2, *(const char **)a1);
      else
        result = *(_QWORD *)(a2 + 72) < v5;
      return result;
    }
LABEL_9:
    result = -1;
  }
  return result;
}

int __fastcall sub_4080C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(a1 + 72) > v2 )
    return -1;
  if ( *(_QWORD *)(a1 + 72) == v2 )
    return sub_4050D0(*(char **)a1, *(char **)a2);
  return *(_QWORD *)(a1 + 72) < v2;
}

int __fastcall sub_408100(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_9;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 72);
    if ( *(_QWORD *)(a1 + 72) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 72) == v5 )
        result = sub_4050D0(*(char **)a1, *(char **)a2);
      else
        result = *(_QWORD *)(a1 + 72) < v5;
      return result;
    }
LABEL_9:
    result = -1;
  }
  return result;
}

int __fastcall sub_408180(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_9;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 72);
    if ( *(_QWORD *)(a1 + 72) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 72) == v5 )
        result = strcmp(*(const char **)a1, *(const char **)a2);
      else
        result = *(_QWORD *)(a1 + 72) < v5;
      return result;
    }
LABEL_9:
    result = -1;
  }
  return result;
}

int __fastcall sub_408200(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_9;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(a2 + 72) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 72) == v5 )
        result = sub_4050D0(*(char **)a2, *(char **)a1);
      else
        result = *(_QWORD *)(a2 + 72) < v5;
      return result;
    }
LABEL_9:
    result = -1;
  }
  return result;
}

int __fastcall sub_408280(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a2 + 72) > v2 )
    return -1;
  if ( *(_QWORD *)(a2 + 72) == v2 )
    return sub_4050D0(*(char **)a2, *(char **)a1);
  return *(_QWORD *)(a2 + 72) < v2;
}

int __fastcall sub_4082C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a2 + 72) > v2 )
    return -1;
  if ( *(_QWORD *)(a2 + 72) == v2 )
    return strcmp(*(const char **)a2, *(const char **)a1);
  return *(_QWORD *)(a2 + 72) < v2;
}

int __fastcall sub_408300(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 128);
    if ( *(_QWORD *)(a1 + 128) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 128) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a2 + 136) - *(_DWORD *)(a1 + 136);
      if ( !result )
        result = strcmp(*(const char **)a1, *(const char **)a2);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_408390(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 112);
    if ( *(_QWORD *)(a1 + 112) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 112) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a2 + 120) - *(_DWORD *)(a1 + 120);
      if ( !result )
        result = strcmp(*(const char **)a1, *(const char **)a2);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

__int64 __fastcall sub_408410(unsigned int a1)
{
  unsigned int v1; // ebp
  int *v2; // rax
  int v3; // ecx
  unsigned int v4; // edx
  __int64 result; // rax
  char *v6; // rdi
  __int64 v7; // [rsp+0h] [rbp-38h]

  v1 = a1;
  if ( byte_6256ED || (v6 = (char *)sub_40E160()) == 0LL )
  {
    __sprintf_chk(&v7, 1LL, 21LL, 4304996LL, v1);
    v2 = (int *)&v7;
    do
    {
      v3 = *v2;
      ++v2;
      v4 = ~v3 & (v3 - 16843009) & 0x80808080;
    }
    while ( !v4 );
    if ( !(~v3 & (v3 - 16843009) & 0x8080) )
      v4 >>= 16;
    if ( !(~v3 & (v3 - 16843009) & 0x8080) )
      LODWORD(v2) = (_DWORD)v2 + 2;
    result = (_DWORD)v2 - (__CFADD__((_BYTE)v4, (_BYTE)v4) + 3) - (unsigned int)&v7;
  }
  else
  {
    result = sub_40EB70(v6);
    if ( (int)result < 0 )
      result = 0LL;
  }
  return result;
}

void sub_4084B0()
{
  void ***v0; // rbx
  void ***v1; // r12
  void **v2; // rbp

  v0 = (void ***)qword_625760;
  v1 = (void ***)((char *)qword_625760 + 8 * qword_625770);
  if ( qword_625770 )
  {
    do
    {
      v2 = *v0;
      ++v0;
      free(*v2);
      free(v2[1]);
      free(v2[2]);
    }
    while ( v0 != v1 );
  }
  byte_625769 = 0;
  qword_625770 = 0LL;
  byte_625724 = 0;
  dword_625720 = 0;
  dword_62571C = 0;
  dword_625718 = 0;
  dword_625710 = 0;
  dword_62570C = 0;
  dword_625708 = 0;
  dword_625714 = 0;
  dword_625704 = 0;
  dword_625700 = 0;
  dword_6256FC = 0;
}

__int64 __fastcall sub_408580(char *a1, __int64 a2, char a3, char *a4)
{
  char *v4; // r15
  int v5; // er14
  char v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  char v11; // r8
  char v12; // dl
  void *v13; // r12
  char v14; // cl
  struct stat *v15; // r15
  __int64 v16; // rdx
  int *v17; // rax
  __int64 v18; // r14
  int v19; // er9
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rax
  bool v25; // dl
  bool v26; // al
  bool v27; // al
  bool v28; // al
  bool v29; // al
  char *v30; // rax
  __int64 v31; // rdx
  char *v32; // rax
  int v33; // eax
  int v34; // eax
  const char *v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  const char *v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned int v42; // edi
  const char *v43; // rax
  int v44; // eax
  int v45; // eax
  int *v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  char *v49; // rax
  int v50; // eax
  const char *v51; // rax
  int v52; // eax
  size_t v53; // r12
  size_t v54; // rax
  char v55; // cl
  char v56; // r10
  char v57; // dl
  void *v58; // rsp
  _BYTE *v59; // rdi
  char *v60; // rsi
  _BYTE *v61; // rax
  char *v62; // rcx
  bool v63; // al
  char *v64; // rax
  int v65; // eax
  char *v66; // rsi
  char *v67; // r14
  int *v68; // rax
  size_t v69; // rax
  char *v70; // rax
  size_t v71; // rdx
  char *v72; // r15
  char *v73; // rax
  int v74; // eax
  int v75; // eax
  unsigned int v76; // er14
  struct stat *v77; // rax
  int v78; // ecx
  bool v79; // zf
  int v80; // eax
  char *v81; // rax
  __int64 v82; // rdx
  int *v83; // r8
  __int64 v84; // rcx
  __int64 v85; // rax
  bool v86; // al
  bool v87; // al
  bool v88; // al
  char *v89; // rdi
  int v90; // eax
  char v91; // [rsp+Eh] [rbp-2F2h]
  char v92; // [rsp+Fh] [rbp-2F1h]
  int *v93; // [rsp+10h] [rbp-2F0h]
  char *filename; // [rsp+18h] [rbp-2E8h]
  char v95; // [rsp+20h] [rbp-2E0h]
  struct stat stat_buf; // [rsp+40h] [rbp-2C0h]

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v7 = qword_625770;
  filename = a1;
  v8 = qword_625780;
  if ( qword_625770 == qword_625778 )
  {
    if ( 400 * qword_625770 < 0 || ((unsigned __int64)qword_625770 * (unsigned __int128)0x190uLL) >> 64 != 0 )
      sub_412BD0(qword_625780, a2, ((unsigned __int64)qword_625770 * (unsigned __int128)0x190uLL) >> 64 != 0);
    v9 = sub_4129E0(qword_625780, 400 * qword_625770);
    v7 = qword_625770;
    qword_625778 *= 2LL;
    qword_625780 = v9;
    v8 = v9;
  }
  v10 = v8 + 200 * v7;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 188) = 0LL;
  memset(
    (void *)((v10 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v10 - (((_DWORD)v10 + 8) & 0xFFFFFFF8) + 196) >> 3));
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_DWORD *)(v10 + 168) = a2;
  v79 = byte_625769 == 0;
  *(_DWORD *)(v10 + 196) = -1;
  if ( v79 )
  {
    if ( byte_625768 )
    {
      v63 = sub_404E20(filename);
      *(_DWORD *)(v10 + 196) = v63;
      if ( v63 )
        byte_625769 = 1;
    }
  }
  v11 = byte_6256D1;
  if ( v6 )
  {
    v12 = *filename;
    v13 = filename;
    if ( *filename == 47 )
      goto LABEL_10;
    v14 = *v4;
    if ( !*v4 )
      goto LABEL_10;
    goto LABEL_92;
  }
  if ( byte_6256D1 )
  {
    v12 = *filename;
    if ( *filename == 47 )
    {
      v13 = filename;
      goto LABEL_81;
    }
    v14 = *v4;
    v13 = filename;
    if ( !*v4 )
    {
LABEL_81:
      v48 = sub_40B070(v13);
      *(_QWORD *)(v10 + 16) = v48;
      if ( !v48 )
      {
        v49 = dcgettext(0LL, "error canonicalizing %s", 5);
        sub_405580(v6, v49, (__int64)v13);
      }
      goto LABEL_11;
    }
    goto LABEL_92;
  }
  if ( byte_625661 )
    goto LABEL_47;
  if ( (_DWORD)a2 == 3 )
  {
    if ( byte_6256D2 )
    {
      LOBYTE(v93) = byte_6256D1;
      v86 = sub_404AE0(0x13u);
      v11 = (char)v93;
      if ( v86 )
        goto LABEL_47;
      v87 = sub_404AE0(0x12u);
      v11 = (char)v93;
      if ( v87 )
        goto LABEL_47;
      v88 = sub_404AE0(0x14u);
      v11 = (char)v93;
      if ( v88 )
        goto LABEL_47;
    }
  }
  if ( byte_6256BC )
  {
    v25 = (_DWORD)a2 == 0;
    if ( (_DWORD)a2 == 6 || v25 )
      goto LABEL_153;
LABEL_47:
    v12 = *filename;
    if ( *filename == 47 || (v14 = *v4) == 0 )
    {
      v15 = (struct stat *)(v10 + 24);
      v13 = filename;
      if ( (unsigned int)dword_6256B8 >= 3 && (unsigned int)dword_6256B8 > 4 && dword_6256B8 == 5 )
      {
LABEL_14:
        if ( !__xstat(1, (const char *)v13, v15) )
          goto LABEL_15;
LABEL_53:
        v30 = dcgettext(0LL, "cannot access %s", 5);
        v31 = (__int64)v13;
        v22 = 0LL;
        sub_405580(v6, v30, v31);
        if ( v6 )
          return v22;
        goto LABEL_30;
      }
      goto LABEL_52;
    }
LABEL_92:
    v91 = v11;
    v92 = v12;
    LOBYTE(v93) = v14;
    v53 = strlen(filename);
    v54 = strlen(v4);
    v55 = (char)v93;
    v56 = v4[1];
    v57 = v92;
    v11 = v91;
    v58 = alloca(v53 + v54 + 10);
    v59 = (_BYTE *)((unsigned __int64)&v92 & 0xFFFFFFFFFFFFFFF0LL);
    v13 = (void *)((unsigned __int64)&v92 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (_BYTE)v93 != 46 || (v61 = (_BYTE *)((unsigned __int64)&v92 & 0xFFFFFFFFFFFFFFF0LL), v56) )
    {
      v60 = v4;
      while ( 1 )
      {
        v61 = v59 + 1;
        ++v60;
        *v59 = v55;
        if ( !v56 )
          break;
        v55 = v56;
        v56 = v60[1];
        ++v59;
      }
      if ( v4 < v60 && *(v60 - 1) != 47 )
      {
        *v61 = 47;
        v61 = v59 + 2;
      }
    }
    if ( v57 )
    {
      v62 = filename;
      do
      {
        ++v62;
        *(++v61 - 1) = v57;
        v57 = *v62;
      }
      while ( *v62 );
    }
    *v61 = 0;
LABEL_10:
    if ( !v11 )
    {
LABEL_11:
      v15 = (struct stat *)(v10 + 24);
      if ( (unsigned int)dword_6256B8 >= 3 )
      {
        if ( (unsigned int)dword_6256B8 > 4 )
        {
          if ( dword_6256B8 == 5 )
            goto LABEL_14;
          goto LABEL_52;
        }
        if ( v6 )
        {
          LODWORD(v93) = dword_6256B8;
          v50 = __xstat(1, (const char *)v13, (struct stat *)(v10 + 24));
          if ( (_DWORD)v93 == 3 )
            goto LABEL_87;
          if ( v50 < 0 )
          {
            if ( *__errno_location() != 2 )
              goto LABEL_161;
          }
          else
          {
            v16 = *(_DWORD *)(v10 + 48) & 0xF000;
            if ( (_DWORD)v16 == 0x4000 )
            {
LABEL_87:
              if ( !v50 )
                goto LABEL_15;
LABEL_161:
              v81 = dcgettext(0LL, "cannot access %s", 5);
              v82 = (__int64)v13;
              v22 = 0LL;
              sub_405580(1, v81, v82);
              return v22;
            }
          }
        }
      }
LABEL_52:
      if ( __lxstat(1, (const char *)v13, v15) )
        goto LABEL_53;
LABEL_15:
      *(_BYTE *)(v10 + 184) = 1;
      if ( (v5 == 5 || (*(_DWORD *)(v10 + 48) & 0xF000) == 0x8000) && byte_6256D2 && sub_404AE0(0x15u) )
      {
        v46 = __errno_location();
        v47 = *(_QWORD *)(v10 + 24);
        v79 = v47 == qword_6246B8;
        *v46 = 95;
        if ( !v79 )
          qword_6246B8 = v47;
        *(_BYTE *)(v10 + 192) = 0;
      }
      if ( !dword_6256F8 || byte_625725 )
      {
        v17 = __errno_location();
        v18 = *(_QWORD *)(v10 + 24);
        v79 = v18 == qword_6246B0;
        *v17 = 95;
        if ( !v79 )
          qword_6246B0 = v18;
        v19 = dword_6256F8;
        *(_QWORD *)(v10 + 176) = &unk_6245AA;
        if ( !v19 )
        {
          if ( v18 == qword_6246A8 )
          {
            *v17 = 95;
            v90 = *(_DWORD *)(v10 + 48);
            *(_DWORD *)(v10 + 188) = 0;
            v20 = v90 & 0xF000;
            if ( v20 != 40960 )
            {
LABEL_24:
              if ( v20 == 0x4000 )
              {
                if ( !v6 || byte_6256B5 )
                  *(_DWORD *)(v10 + 168) = 3;
                else
                  *(_DWORD *)(v10 + 168) = 9;
              }
              else
              {
                *(_DWORD *)(v10 + 168) = 5;
              }
              goto LABEL_26;
            }
          }
          else
          {
            *v17 = 0;
            v93 = v17;
            v65 = sub_40B900(v13, v15);
            if ( v65 <= 0 )
            {
              v83 = v93;
              v16 = (unsigned int)*v93;
              v84 = ((_DWORD)v16 - 22) & 0xFFFFFFEF;
              if ( !(((_DWORD)v16 - 22) & 0xFFFFFFEF) || (_DWORD)v16 == 95 )
              {
                v16 = *(_QWORD *)(v10 + 24);
                qword_6246A8 = *(_QWORD *)(v10 + 24);
              }
              *(_DWORD *)(v10 + 188) = 0;
              if ( v65 < 0 )
              {
                v93 = v83;
                v85 = sub_412110(0LL, 3LL, v13, v84);
                error(0, *v93, "%s", v85);
              }
            }
            else
            {
              *(_DWORD *)(v10 + 188) = 2;
              byte_625724 = 1;
            }
            v20 = *(_DWORD *)(v10 + 48) & 0xF000;
            if ( v20 != 40960 )
              goto LABEL_24;
            if ( dword_6256F8 )
              goto LABEL_114;
          }
LABEL_115:
          v66 = *(char **)(v10 + 72);
          v67 = (char *)sub_40ABF0((char *)v13);
          *(_QWORD *)(v10 + 8) = v67;
          if ( !v67 )
          {
            v66 = dcgettext(0LL, "cannot read symbolic link %s", 5);
            sub_405580(v6, v66, (__int64)v13);
            v67 = *(char **)(v10 + 8);
            if ( !v67 )
              goto LABEL_186;
          }
          if ( *v67 != 47 && (v68 = (int *)sub_40B7B0(v13, v66)) != 0LL )
          {
            v93 = v68;
            v69 = strlen(v67);
            v70 = (char *)sub_412980((char *)v93 + v69 + 2);
            v71 = (size_t)v93;
            v72 = v70;
            if ( *((_BYTE *)v93 + (_QWORD)v13 - 1) != 47 )
              v71 = (size_t)v93 + 1;
            v73 = stpncpy(v70, (const char *)v13, v71);
            strcpy(v73, v67);
          }
          else
          {
            v72 = (char *)sub_412BB0(v67);
          }
          if ( v72 )
          {
            if ( !*(_DWORD *)(v10 + 196) && sub_404E20(*(char **)(v10 + 8)) )
              *(_DWORD *)(v10 + 196) = -1;
            if ( ((unsigned int)dword_6256D4 > 1 || byte_6256BD) && !__xstat(1, v72, &stat_buf) )
            {
              *(_BYTE *)(v10 + 185) = 1;
              if ( !v6 || !dword_6256F8 || (stat_buf.st_mode & 0xF000) != 0x4000 )
                *(_DWORD *)(v10 + 172) = stat_buf.st_mode;
            }
          }
          else
          {
LABEL_186:
            v72 = 0LL;
          }
          free(v72);
          v20 = *(_DWORD *)(v10 + 48) & 0xF000;
          if ( v20 != 40960 )
            goto LABEL_24;
LABEL_126:
          *(_DWORD *)(v10 + 168) = 6;
LABEL_26:
          v21 = (unsigned int)dword_6256F8;
          v22 = *(_QWORD *)(v10 + 88);
          if ( dword_6256F8 && !byte_6256EC )
            goto LABEL_187;
          v32 = (char *)sub_40D5D0(*(_QWORD *)(v10 + 88), &stat_buf, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
          v33 = sub_40EB70(v32);
          if ( v33 > dword_62571C )
            dword_62571C = v33;
          v16 = (unsigned int)dword_6256F8;
          if ( dword_6256F8 )
          {
LABEL_187:
            if ( !byte_625725 )
              goto LABEL_29;
          }
          else
          {
            if ( byte_6245A9 )
            {
              v74 = sub_408410(*(_DWORD *)(v10 + 52));
              if ( v74 > dword_625710 )
                dword_625710 = v74;
            }
            if ( byte_6245A8 )
            {
              v76 = *(_DWORD *)(v10 + 56);
              if ( byte_6256ED || (v89 = (char *)sub_40E2F0(v76)) == 0LL )
              {
                __sprintf_chk(&stat_buf, 1LL, 21LL, 4304996LL, v76);
                v77 = &stat_buf;
                do
                {
                  v78 = v77->st_dev;
                  v77 = (struct stat *)((char *)v77 + 4);
                  v16 = ~v78 & (v78 - 16843009) & 0x80808080;
                }
                while ( !(_DWORD)v16 );
                v79 = (~v78 & (v78 - 16843009) & 0x8080) == 0;
                if ( !(~v78 & (v78 - 16843009) & 0x8080) )
                  v16 = (unsigned int)v16 >> 16;
                v21 = (__int64)&v77->st_dev + 2;
                if ( v79 )
                  LODWORD(v77) = (_DWORD)v77 + 2;
                v80 = (_DWORD)v77 - (__CFADD__((_BYTE)v16, (_BYTE)v16) + 3) - (unsigned __int64)&stat_buf;
              }
              else
              {
                v80 = sub_40EB70(v89);
                v16 = 0LL;
                if ( v80 < 0 )
                  v80 = 0;
              }
              if ( dword_62570C < v80 )
                dword_62570C = v80;
            }
            if ( byte_6256EE )
            {
              v75 = sub_408410(*(_DWORD *)(v10 + 52));
              if ( v75 > dword_625708 )
                dword_625708 = v75;
            }
            if ( !byte_625725 )
            {
LABEL_64:
              if ( !dword_6256F8 )
              {
                v35 = (const char *)sub_40E520(*(_QWORD *)(v10 + 40), &v95, v16, v21);
                v36 = strlen(v35);
                if ( v36 > dword_625718 )
                  dword_625718 = v36;
                if ( (*(_DWORD *)(v10 + 48) & 0xB000) == 0x2000 )
                {
                  v38 = (const char *)sub_40E520(
                                        ((unsigned int)*(_QWORD *)(v10 + 64) >> 8) & 0xFFF | (*(_QWORD *)(v10 + 64) >> 32) & 0xFFFFF000,
                                        &stat_buf,
                                        ((unsigned int)*(_QWORD *)(v10 + 64) >> 8) & 0xFFF,
                                        v37);
                  v39 = strlen(v38);
                  if ( v39 > dword_625704 )
                    dword_625704 = v39;
                  v41 = *(_QWORD *)(v10 + 64);
                  v42 = v41 >> 12;
                  LOBYTE(v42) = 0;
                  v43 = (const char *)sub_40E520((unsigned __int8)v41 | v42, &stat_buf, (unsigned __int8)v41, v40);
                  v44 = strlen(v43);
                  v16 = (unsigned int)dword_625700;
                  if ( v44 > dword_625700 )
                  {
                    dword_625700 = v44;
                    v16 = (unsigned int)v44;
                  }
                  v45 = v16 + dword_625704 + 2;
                  if ( v45 <= dword_6256FC )
                    goto LABEL_29;
                  goto LABEL_106;
                }
                v64 = (char *)sub_40D5D0(
                                *(_QWORD *)(v10 + 72),
                                &stat_buf,
                                (unsigned int)dword_6256DC,
                                1LL,
                                qword_6245A0);
                v45 = sub_40EB70(v64);
                if ( v45 > dword_6256FC )
                {
LABEL_106:
                  dword_6256FC = v45;
                  goto LABEL_29;
                }
              }
LABEL_29:
              if ( byte_6256BC )
              {
                v51 = (const char *)sub_40E520(*(_QWORD *)(v10 + 32), &stat_buf, v16, v21);
                v52 = strlen(v51);
                if ( v52 > dword_625720 )
                  dword_625720 = v52;
              }
              goto LABEL_30;
            }
          }
          v34 = strlen(*(const char **)(v10 + 176));
          if ( v34 > dword_625714 )
            dword_625714 = v34;
          goto LABEL_64;
        }
        *(_DWORD *)(v10 + 188) = 0;
      }
      v20 = *(_DWORD *)(v10 + 48) & 0xF000;
      if ( v20 != 40960 )
        goto LABEL_24;
LABEL_114:
      if ( !byte_6256BD )
        goto LABEL_126;
      goto LABEL_115;
    }
    goto LABEL_81;
  }
  if ( !byte_625660 )
    goto LABEL_162;
  v25 = (_DWORD)a2 == 0;
  if ( (_DWORD)a2 != 6 && (_DWORD)a2 != 0 )
  {
    if ( byte_625660 )
      goto LABEL_40;
LABEL_162:
    v22 = 0LL;
    goto LABEL_30;
  }
LABEL_153:
  if ( dword_6256B8 == 5 || byte_625750 || byte_6256BD || byte_6256BC )
    goto LABEL_47;
  if ( !byte_625660 )
    goto LABEL_162;
  if ( v25 )
    goto LABEL_47;
LABEL_40:
  v22 = 0LL;
  if ( (_DWORD)a2 == 5 )
  {
    if ( dword_6256D4 == 3 )
      goto LABEL_47;
    LOBYTE(v93) = v11;
    if ( byte_6256D2 )
    {
      v26 = sub_404AE0(0xEu);
      v11 = (char)v93;
      if ( v26 )
        goto LABEL_47;
      v27 = sub_404AE0(0x10u);
      v11 = (char)v93;
      if ( v27 )
        goto LABEL_47;
      v28 = sub_404AE0(0x11u);
      v11 = (char)v93;
      if ( v28 )
        goto LABEL_47;
      v29 = sub_404AE0(0x15u);
      v11 = (char)v93;
      if ( v29 )
        goto LABEL_47;
    }
  }
LABEL_30:
  v23 = sub_412BB0(filename);
  ++qword_625770;
  *(_QWORD *)v10 = v23;
  return v22;
}

void __fastcall sub_4092A0(void *src, __int64 a2, unsigned __int8 a3)
{
  char *v3; // r14
  char *v4; // rbp
  char v5; // bl
  int *v6; // rax
  int *v7; // r12
  DIR *v8; // rax
  DIR *v9; // r13
  int v10; // eax
  __ino_t *v11; // rax
  void *v12; // rdi
  __ino_t *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  char *v18; // rax
  __ino_t *v19; // rax
  __ino_t v20; // r15
  __dev_t v21; // rcx
  char *v22; // rax
  char *v23; // r15
  struct dirent *v24; // rax
  struct dirent *v25; // rbx
  char *v26; // rbp
  _QWORD *v27; // r15
  char *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  char *v32; // rbx
  char *v33; // rax
  const char *v34; // rax
  const char *v35; // rbx
  size_t v36; // rax
  char *v37; // rax
  _QWORD *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  char *v41; // rax
  char *v42; // rax
  __int64 v43; // [rsp-8h] [rbp-2F0h]
  __dev_t v44; // [rsp+8h] [rbp-2E0h]
  __dev_t v45; // [rsp+8h] [rbp-2E0h]
  char v46; // [rsp+8h] [rbp-2E0h]
  __ino_t v47; // [rsp+10h] [rbp-2D8h]
  __int64 v48; // [rsp+10h] [rbp-2D8h]
  unsigned __int8 v49; // [rsp+1Ch] [rbp-2CCh]
  struct stat stat_buf; // [rsp+20h] [rbp-2C8h]

  v3 = (char *)src;
  v4 = (char *)a2;
  v5 = a3;
  v49 = a3;
  v6 = __errno_location();
  *v6 = 0;
  v7 = v6;
  v8 = opendir((const char *)src);
  if ( !v8 )
  {
    v42 = dcgettext(0LL, "cannot open directory %s", 5);
    sub_405580(v49, v42, (__int64)src);
    return;
  }
  v9 = v8;
  if ( qword_625788 )
  {
    v10 = dirfd(v8);
    if ( v10 < 0 )
    {
      if ( __xstat(1, (const char *)src, &stat_buf) >= 0 )
        goto LABEL_5;
    }
    else if ( __fxstat(1, v10, &stat_buf) >= 0 )
    {
LABEL_5:
      v47 = stat_buf.st_ino;
      v44 = stat_buf.st_dev;
      v11 = (__ino_t *)sub_412980(16LL);
      v12 = qword_625788;
      a2 = (__int64)v11;
      v13 = v11;
      *v11 = v47;
      v11[1] = v44;
      v14 = sub_40D220(v12, v11);
      if ( !v14 )
        sub_412BD0(v12, a2, v15);
      if ( v13 != (__ino_t *)v14 )
      {
        free(v13);
        v17 = sub_412110(0LL, 3LL, v3, v16);
        v18 = dcgettext(0LL, "%s: not listing already-listed directory", 5);
        error(0, 0, v18, v17);
        closedir(v9);
        dword_6255D0 = 2;
        return;
      }
      v19 = (__ino_t *)qword_6254B8;
      v20 = stat_buf.st_ino;
      v21 = stat_buf.st_dev;
      if ( (unsigned __int64)(qword_6254C0 - qword_6254B8) <= 0xF )
      {
        a2 = 16LL;
        v45 = stat_buf.st_dev;
        obstack_newchunk(&unk_6254A0, 16LL);
        v19 = (__ino_t *)qword_6254B8;
        v21 = v45;
      }
      qword_6254B8 = (__int64)(v19 + 2);
      v19[1] = v21;
      *v19 = v20;
      goto LABEL_12;
    }
    v28 = dcgettext(0LL, "cannot determine device and inode of %s", 5);
    sub_405580(v49, v28, (__int64)src);
    closedir(v9);
    return;
  }
LABEL_12:
  sub_4084B0();
  if ( byte_6256B6 || byte_625678 )
  {
    if ( !byte_624400 )
    {
      v22 = stdout->_IO_write_ptr;
      if ( v22 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 10);
      }
      else
      {
        stdout->_IO_write_ptr = v22 + 1;
        *v22 = 10;
      }
      ++qword_6255B8;
    }
    byte_624400 = 0;
    if ( byte_6256D8 )
    {
      v23 = 0LL;
      fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
      qword_6255B8 += 2LL;
      if ( !byte_6256D1 )
        goto LABEL_19;
    }
    else
    {
      v23 = 0LL;
      if ( !byte_6256D1 )
      {
LABEL_19:
        if ( !v4 )
          v4 = v3;
        sub_4062D0(v4, qword_625688, -1, 0LL, 1, (size_t)&unk_625500, v23);
        free(v23);
        fwrite_unlocked(":\n", 1uLL, 2uLL, stdout);
        qword_6255B8 += 2LL;
        a2 = v43;
        goto LABEL_22;
      }
    }
    v23 = (char *)sub_40B070(v3);
    if ( !v23 )
    {
      v41 = dcgettext(0LL, "error canonicalizing %s", 5);
      sub_405580(v49, v41, (__int64)v3);
    }
    goto LABEL_19;
  }
LABEL_22:
  v48 = 0LL;
  v46 = v5;
  while ( 1 )
  {
    *v7 = 0;
    v24 = readdir(v9);
    v25 = v24;
    if ( !v24 )
      break;
    v26 = v24->d_name;
    if ( dword_6256B0 == 2 )
      goto LABEL_55;
    if ( v24->d_name[0] == 46 )
    {
      if ( !dword_6256B0 || !v24->d_name[(v24->d_name[1] == 46) + 1] )
        goto LABEL_31;
LABEL_55:
      v38 = (_QWORD *)qword_6256A8;
      if ( qword_6256A8 )
      {
        while ( 1 )
        {
          a2 = (__int64)v26;
          if ( !(unsigned int)sub_4159A0(*v38, v26, 4LL) )
            break;
          v38 = (_QWORD *)v38[1];
          if ( !v38 )
            goto LABEL_60;
        }
      }
      else
      {
LABEL_60:
        a2 = 0LL;
        if ( (unsigned __int8)(v25->d_type - 1) <= 0xDu )
          a2 = (unsigned int)dword_4194A0[(unsigned __int8)(v25->d_type - 1)];
        v48 += sub_408580(v26, a2, 0, v3);
        if ( dword_6256F8 == 1 && dword_6256F0 == -1 && !byte_6256EC && !byte_6256B6 )
        {
          sub_404F40((__int64)v26, a2);
          sub_407CA0((__int64)v26, a2, v39, v40);
          sub_4084B0();
        }
      }
      goto LABEL_31;
    }
    if ( dword_6256B0 )
      goto LABEL_55;
    v27 = (_QWORD *)qword_6256A0;
    if ( !qword_6256A0 )
      goto LABEL_55;
    while ( 1 )
    {
      a2 = (__int64)v26;
      if ( !(unsigned int)sub_4159A0(*v27, v26, 4LL) )
        break;
      v27 = (_QWORD *)v27[1];
      if ( !v27 )
        goto LABEL_55;
    }
LABEL_31:
    sub_405D70();
  }
  if ( *v7 )
  {
    a2 = (__int64)dcgettext(0LL, "reading directory %s", 5);
    sub_405580(v46, (const char *)a2, (__int64)v3);
    if ( *v7 == 75 )
      goto LABEL_31;
  }
  v29 = (__int64)v9;
  if ( closedir(v9) )
  {
    v29 = v49;
    a2 = (__int64)dcgettext(0LL, "closing directory %s", 5);
    sub_405580(v49, (const char *)a2, (__int64)v3);
  }
  sub_404F40(v29, a2);
  if ( byte_6256B6 )
  {
    a2 = 0LL;
    v29 = (__int64)v3;
    sub_405140(v3, 0);
  }
  if ( !dword_6256F8 || byte_6256EC )
  {
    if ( byte_6256D8 )
    {
      fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
      qword_6255B8 += 2LL;
    }
    v32 = dcgettext(0LL, "total", 5);
    fputs_unlocked(v32, stdout);
    qword_6255B8 += strlen(v32);
    v33 = stdout->_IO_write_ptr;
    if ( v33 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 32);
    }
    else
    {
      stdout->_IO_write_ptr = v33 + 1;
      *v33 = 32;
    }
    ++qword_6255B8;
    v34 = (const char *)sub_40D5D0(v48, &stat_buf, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
    a2 = (__int64)stdout;
    v35 = v34;
    fputs_unlocked(v34, stdout);
    v36 = strlen(v35);
    v29 = (__int64)stdout;
    qword_6255B8 += v36;
    v37 = stdout->_IO_write_ptr;
    if ( v37 >= stdout->_IO_write_end )
    {
      a2 = 10LL;
      __overflow(stdout, 10);
    }
    else
    {
      v30 = (__int64)(v37 + 1);
      stdout->_IO_write_ptr = v37 + 1;
      *v37 = 10;
    }
    ++qword_6255B8;
  }
  if ( qword_625770 )
    sub_407CA0(v29, a2, v30, v31);
}

int __fastcall sub_409960(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a2 + 128);
  if ( *(_QWORD *)(a1 + 128) > v2 )
    return -1;
  if ( *(_QWORD *)(a1 + 128) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a2 + 136) - *(_DWORD *)(a1 + 136);
  if ( !result )
    result = sub_4050D0(*(char **)a1, *(char **)a2);
  return result;
}

int __fastcall sub_4099B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a2 + 112);
  if ( *(_QWORD *)(a1 + 112) > v2 )
    return -1;
  if ( *(_QWORD *)(a1 + 112) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a2 + 120) - *(_DWORD *)(a1 + 120);
  if ( !result )
    result = sub_4050D0(*(char **)a1, *(char **)a2);
  return result;
}

int __fastcall sub_4099F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a1 + 96) > v2 )
    return -1;
  if ( *(_QWORD *)(a1 + 96) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a2 + 104) - *(_DWORD *)(a1 + 104);
  if ( !result )
    result = sub_4050D0(*(char **)a1, *(char **)a2);
  return result;
}

int __fastcall sub_409A30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a2 + 128) > v2 )
    return -1;
  if ( *(_QWORD *)(a2 + 128) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a1 + 136) - *(_DWORD *)(a2 + 136);
  if ( !result )
    result = sub_4050D0(*(char **)a2, *(char **)a1);
  return result;
}

int __fastcall sub_409A80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a1 + 112);
  if ( *(_QWORD *)(a2 + 112) > v2 )
    return -1;
  if ( *(_QWORD *)(a2 + 112) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a1 + 120) - *(_DWORD *)(a2 + 120);
  if ( !result )
    result = sub_4050D0(*(char **)a2, *(char **)a1);
  return result;
}

int __fastcall sub_409AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a1 + 96);
  if ( *(_QWORD *)(a2 + 96) > v2 )
    return -1;
  if ( *(_QWORD *)(a2 + 96) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a1 + 104) - *(_DWORD *)(a2 + 104);
  if ( !result )
    result = sub_4050D0(*(char **)a2, *(char **)a1);
  return result;
}

int __fastcall sub_409B00(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 96);
    if ( *(_QWORD *)(a1 + 96) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 96) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a2 + 104) - *(_DWORD *)(a1 + 104);
      if ( !result )
        result = sub_4050D0(*(char **)a1, *(char **)a2);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409B80(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a2 + 112) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 112) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a1 + 120) - *(_DWORD *)(a2 + 120);
      if ( !result )
        result = sub_4050D0(*(char **)a2, *(char **)a1);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409C00(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( *(_QWORD *)(a2 + 96) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 96) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a1 + 104) - *(_DWORD *)(a2 + 104);
      if ( !result )
        result = sub_4050D0(*(char **)a2, *(char **)a1);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409C80(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 112);
    if ( *(_QWORD *)(a1 + 112) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 112) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a2 + 120) - *(_DWORD *)(a1 + 120);
      if ( !result )
        result = sub_4050D0(*(char **)a1, *(char **)a2);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409D00(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( *(_QWORD *)(a2 + 128) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 128) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a1 + 136) - *(_DWORD *)(a2 + 136);
      if ( !result )
        result = sub_4050D0(*(char **)a2, *(char **)a1);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409D90(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 128);
    if ( *(_QWORD *)(a1 + 128) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 128) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a2 + 136) - *(_DWORD *)(a1 + 136);
      if ( !result )
        result = sub_4050D0(*(char **)a1, *(char **)a2);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409E20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a1 + 96);
  if ( *(_QWORD *)(a2 + 96) > v2 )
    return -1;
  if ( *(_QWORD *)(a2 + 96) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a1 + 104) - *(_DWORD *)(a2 + 104);
  if ( !result )
    result = strcmp(*(const char **)a2, *(const char **)a1);
  return result;
}

int __fastcall sub_409E60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a2 + 128) > v2 )
    return -1;
  if ( *(_QWORD *)(a2 + 128) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a1 + 136) - *(_DWORD *)(a2 + 136);
  if ( !result )
    result = strcmp(*(const char **)a2, *(const char **)a1);
  return result;
}

int __fastcall sub_409EB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a1 + 112);
  if ( *(_QWORD *)(a2 + 112) > v2 )
    return -1;
  if ( *(_QWORD *)(a2 + 112) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a1 + 120) - *(_DWORD *)(a2 + 120);
  if ( !result )
    result = strcmp(*(const char **)a2, *(const char **)a1);
  return result;
}

int __fastcall sub_409EF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a1 + 96) > v2 )
    return -1;
  if ( *(_QWORD *)(a1 + 96) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a2 + 104) - *(_DWORD *)(a1 + 104);
  if ( !result )
    result = strcmp(*(const char **)a1, *(const char **)a2);
  return result;
}

int __fastcall sub_409F30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a2 + 128);
  if ( *(_QWORD *)(a1 + 128) > v2 )
    return -1;
  if ( *(_QWORD *)(a1 + 128) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a2 + 136) - *(_DWORD *)(a1 + 136);
  if ( !result )
    result = strcmp(*(const char **)a1, *(const char **)a2);
  return result;
}

int __fastcall sub_409F80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int result; // eax

  v2 = *(_QWORD *)(a2 + 112);
  if ( *(_QWORD *)(a1 + 112) > v2 )
    return -1;
  if ( *(_QWORD *)(a1 + 112) < v2 )
    return 1;
  result = *(unsigned __int64 *)(a2 + 120) - *(_DWORD *)(a1 + 120);
  if ( !result )
    result = strcmp(*(const char **)a1, *(const char **)a2);
  return result;
}

int __fastcall sub_409FC0(const char **a1, const char **a2)
{
  char *v2; // rbx
  char *v3; // rax
  int result; // eax

  v2 = strrchr(*a1, 46);
  v3 = strrchr(*a2, 46);
  if ( !v3 )
    v3 = "";
  if ( !v2 )
    v2 = "";
  result = sub_4050D0(v2, v3);
  if ( !result )
    result = sub_4050D0((char *)*a1, (char *)*a2);
  return result;
}

int __fastcall sub_40A030(const char **a1, const char **a2)
{
  char *v2; // rbx
  char *v3; // rax
  int result; // eax

  v2 = strrchr(*a2, 46);
  v3 = strrchr(*a1, 46);
  if ( !v3 )
    v3 = "";
  if ( !v2 )
    v2 = "";
  result = sub_4050D0(v2, v3);
  if ( !result )
    result = sub_4050D0((char *)*a2, (char *)*a1);
  return result;
}

int __fastcall sub_40A0A0(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  char *v5; // r12
  char *v6; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = strrchr(*(const char **)a2, 46);
    v6 = strrchr(*(const char **)a1, 46);
    if ( !v6 )
      v6 = "";
    if ( !v5 )
      v5 = "";
    result = sub_4050D0(v5, v6);
    if ( !result )
      result = sub_4050D0(*(char **)a2, *(char **)a1);
  }
  return result;
}

int __fastcall sub_40A150(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  char *v5; // r12
  char *v6; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = strrchr(*(const char **)a1, 46);
    v6 = strrchr(*(const char **)a2, 46);
    if ( !v6 )
      v6 = "";
    if ( !v5 )
      v5 = "";
    result = sub_4050D0(v5, v6);
    if ( !result )
      result = sub_4050D0(*(char **)a1, *(char **)a2);
  }
  return result;
}

int __fastcall sub_40A200(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a2 + 112) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 112) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a1 + 120) - *(_DWORD *)(a2 + 120);
      if ( !result )
        result = strcmp(*(const char **)a2, *(const char **)a1);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_40A280(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( *(_QWORD *)(a2 + 128) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 128) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a1 + 136) - *(_DWORD *)(a2 + 136);
      if ( !result )
        result = strcmp(*(const char **)a2, *(const char **)a1);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_40A310(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    goto LABEL_11;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( *(_QWORD *)(a2 + 96) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 96) < v5 )
        return 1;
      result = *(unsigned __int64 *)(a1 + 104) - *(_DWORD *)(a2 + 104);
      if ( !result )
        result = strcmp(*(const char **)a2, *(const char **)a1);
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_40A390(const char **a1, const char **a2)
{
  const char *v2; // rbp
  char *v3; // rax
  const char *v4; // r12
  const char *v5; // rbx
  char *v6; // rax
  int result; // eax

  v2 = *a2;
  v3 = strrchr(*a2, 46);
  v4 = *a1;
  v5 = v3;
  v6 = strrchr(*a1, 46);
  if ( v6 )
  {
    if ( !v5 )
      v5 = "";
  }
  else
  {
    v6 = "\x1B]8;;\a" + 6;
    if ( !v5 )
      return strcmp(v2, v4);
  }
  result = strcmp(v5, v6);
  if ( !result )
    return strcmp(v2, v4);
  return result;
}

int __fastcall sub_40A400(const char **a1, const char **a2)
{
  const char *v2; // rbp
  char *v3; // rax
  const char *v4; // r12
  const char *v5; // rbx
  char *v6; // rax
  int result; // eax

  v2 = *a1;
  v3 = strrchr(*a1, 46);
  v4 = *a2;
  v5 = v3;
  v6 = strrchr(*a2, 46);
  if ( v6 )
  {
    if ( !v5 )
      v5 = "";
  }
  else
  {
    v6 = "\x1B]8;;\a" + 6;
    if ( !v5 )
      return strcmp(v2, v4);
  }
  result = strcmp(v5, v6);
  if ( !result )
    return strcmp(v2, v4);
  return result;
}

int __fastcall sub_40A470(__int64 a1, __int64 a2)
{
  bool v2; // cl
  bool v3; // dl
  int result; // eax
  const char *v5; // r12
  char *v6; // rax
  const char *v7; // rbx
  const char *v8; // rbp
  char *v9; // rax

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(const char **)a1;
    v6 = strrchr(*(const char **)a1, 46);
    v7 = *(const char **)a2;
    v8 = v6;
    v9 = strrchr(*(const char **)a2, 46);
    if ( v9 )
    {
      if ( !v8 )
        v8 = "";
    }
    else
    {
      v9 = "\x1B]8;;\a" + 6;
      if ( !v8 )
        goto LABEL_11;
    }
    result = strcmp(v8, v9);
    if ( result )
      return result;
LABEL_11:
    result = strcmp(v5, v7);
  }
  return result;
}

noreturn void __fastcall  sub_40A530(int status)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rbx
  char *v9; // rax
  FILE *v10; // rbx
  char *v11; // rax
  FILE *v12; // rbx
  char *v13; // rax
  FILE *v14; // rbx
  char *v15; // rax
  FILE *v16; // rbx
  char *v17; // rax
  FILE *v18; // rbx
  char *v19; // rax
  FILE *v20; // rbx
  char *v21; // rax
  FILE *v22; // rbx
  char *v23; // rax
  FILE *v24; // rbx
  char *v25; // rax
  FILE *v26; // rbx
  char *v27; // rax
  FILE *v28; // rbx
  char *v29; // rax
  FILE *v30; // rbx
  char *v31; // rax
  FILE *v32; // rbx
  char *v33; // rax
  FILE *v34; // rbx
  char *v35; // rax
  FILE *v36; // rbx
  char *v37; // rax
  FILE *v38; // rbx
  char *v39; // rax
  FILE *v40; // rbx
  char *v41; // rax
  FILE *v42; // rbx
  char *v43; // rax
  FILE *v44; // rbx
  char *v45; // rax
  FILE *v46; // rbx
  char *v47; // rax
  FILE *v48; // rbx
  char *v49; // rax
  FILE *v50; // rbx
  char *v51; // rax
  FILE *v52; // rbx
  char *v53; // rax
  FILE *v54; // rbx
  char *v55; // rax
  FILE *v56; // rbx
  char *v57; // rax
  FILE *v58; // rbx
  char *v59; // rax
  FILE *v60; // rbx
  char *v61; // rax
  FILE *v62; // rbx
  char *v63; // rax
  const char *v64; // rbp
  const char *v65; // rsi
  char **v66; // rbx
  const char *v67; // rbx
  char *v68; // rax
  char *v69; // rax
  char *v70; // rax
  char *v71; // rax
  char *v72; // rax
  char *v73; // rax
  char *v74; // rax
  char *v75; // rax
  char *v76; // [rsp+0h] [rbp-88h]
  const char *v77; // [rsp+8h] [rbp-80h]
  const char *v78; // [rsp+10h] [rbp-78h]
  const char *v79; // [rsp+18h] [rbp-70h]
  const char *v80; // [rsp+20h] [rbp-68h]
  const char *v81; // [rsp+28h] [rbp-60h]
  const char *v82; // [rsp+30h] [rbp-58h]
  const char *v83; // [rsp+38h] [rbp-50h]
  const char *v84; // [rsp+40h] [rbp-48h]
  const char *v85; // [rsp+48h] [rbp-40h]
  const char *v86; // [rsp+50h] [rbp-38h]
  const char *v87; // [rsp+58h] [rbp-30h]
  __int64 v88; // [rsp+60h] [rbp-28h]
  __int64 v89; // [rsp+68h] [rbp-20h]

  v1 = qword_6257C0;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "List information about the FILEs (the current directory by default).\n"
         "Sort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "  -a, --all                  do not ignore entries starting with .\n"
         "  -A, --almost-all           do not list implied . and ..\n"
         "      --author               with -l, print the author of each file\n"
         "  -b, --escape               print C-style escapes for nongraphic characters\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "      --block-size=SIZE      with -l, scale sizes by SIZE when printing them;\n"
          "                               e.g., '--block-size=M'; see SIZE format below\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  -B, --ignore-backups       do not list implied entries ending with ~\n"
          "  -c                         with -lt: sort by, and show, ctime (time of last\n"
          "                               modification of file status information);\n"
          "                               with -l: show ctime and sort by name;\n"
          "                               otherwise: sort by ctime, newest first\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "  -C                         list entries by columns\n"
          "      --color[=WHEN]         colorize the output; WHEN can be 'always' (default\n"
          "                               if omitted), 'auto', or 'never'; more info below\n"
          "  -d, --directory            list directories themselves, not their contents\n"
          "  -D, --dired                generate output designed for Emacs' dired mode\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "  -f                         do not sort, enable -aU, disable -ls --color\n"
          "  -F, --classify             append indicator (one of */=>@|) to entries\n"
          "      --file-type            likewise, except do not append '*'\n"
          "      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n"
          "                               single-column -1, verbose -l, vertical -C\n"
          "      --full-time            like -l --time-style=full-iso\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "  -g                         like -l, but do not list owner\n", 5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
          0LL,
          "      --group-directories-first\n"
          "                             group directories before files;\n"
          "                               can be augmented with a --sort option, but any\n"
          "                               use of --sort=none (-U) disables grouping\n",
          5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(0LL, "  -G, --no-group             in a long listing, don't print group names\n", 5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(
          0LL,
          "  -h, --human-readable       with -l and -s, print sizes like 1K 234M 2G etc.\n"
          "      --si                   likewise, but use powers of 1000 not 1024\n",
          5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "  -H, --dereference-command-line\n"
          "                             follow symbolic links listed on the command line\n"
          "      --dereference-command-line-symlink-to-dir\n"
          "                             follow each command line symbolic link\n"
          "                               that points to a directory\n"
          "      --hide=PATTERN         do not list implied entries matching shell PATTERN\n"
          "                               (overridden by -a or -A)\n",
          5);
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(
          0LL,
          "      --hyperlink[=WHEN]     hyperlink file names; WHEN can be 'always'\n"
          "                               (default if omitted), 'auto', or 'never'\n",
          5);
  fputs_unlocked(v29, v28);
  v30 = stdout;
  v31 = dcgettext(
          0LL,
          "      --indicator-style=WORD  append indicator with style WORD to entry names:\n"
          "                               none (default), slash (-p),\n"
          "                               file-type (--file-type), classify (-F)\n"
          "  -i, --inode                print the index number of each file\n"
          "  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n",
          5);
  fputs_unlocked(v31, v30);
  v32 = stdout;
  v33 = dcgettext(
          0LL,
          "  -k, --kibibytes            default to 1024-byte blocks for disk usage;\n"
          "                               used only with -s and per directory totals\n",
          5);
  fputs_unlocked(v33, v32);
  v34 = stdout;
  v35 = dcgettext(
          0LL,
          "  -l                         use a long listing format\n"
          "  -L, --dereference          when showing file information for a symbolic\n"
          "                               link, show information for the file the link\n"
          "                               references rather than for the link itself\n"
          "  -m                         fill width with a comma separated list of entries\n",
          5);
  fputs_unlocked(v35, v34);
  v36 = stdout;
  v37 = dcgettext(
          0LL,
          "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n"
          "  -N, --literal              print entry names without quoting\n"
          "  -o                         like -l, but do not list group information\n"
          "  -p, --indicator-style=slash\n"
          "                             append / indicator to directories\n",
          5);
  fputs_unlocked(v37, v36);
  v38 = stdout;
  v39 = dcgettext(
          0LL,
          "  -q, --hide-control-chars   print ? instead of nongraphic characters\n"
          "      --show-control-chars   show nongraphic characters as-is (the default,\n"
          "                               unless program is 'ls' and output is a terminal)\n"
          "  -Q, --quote-name           enclose entry names in double quotes\n"
          "      --quoting-style=WORD   use quoting style WORD for entry names:\n"
          "                               literal, locale, shell, shell-always,\n"
          "                               shell-escape, shell-escape-always, c, escape\n"
          "                               (overrides QUOTING_STYLE environment variable)\n",
          5);
  fputs_unlocked(v39, v38);
  v40 = stdout;
  v41 = dcgettext(
          0LL,
          "  -r, --reverse              reverse order while sorting\n"
          "  -R, --recursive            list subdirectories recursively\n"
          "  -s, --size                 print the allocated size of each file, in blocks\n",
          5);
  fputs_unlocked(v41, v40);
  v42 = stdout;
  v43 = dcgettext(
          0LL,
          "  -S                         sort by file size, largest first\n"
          "      --sort=WORD            sort by WORD instead of name: none (-U), size (-S),\n"
          "                               time (-t), version (-v), extension (-X)\n"
          "      --time=WORD            with -l, show time as WORD instead of default\n"
          "                               modification time: atime or access or use (-u);\n"
          "                               ctime or status (-c); also use specified time\n"
          "                               as sort key if --sort=time (newest first)\n",
          5);
  fputs_unlocked(v43, v42);
  v44 = stdout;
  v45 = dcgettext(0LL, "      --time-style=TIME_STYLE  time/date format with -l; see TIME_STYLE below\n", 5);
  fputs_unlocked(v45, v44);
  v46 = stdout;
  v47 = dcgettext(
          0LL,
          "  -t                         sort by modification time, newest first\n"
          "  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n",
          5);
  fputs_unlocked(v47, v46);
  v48 = stdout;
  v49 = dcgettext(
          0LL,
          "  -u                         with -lt: sort by, and show, access time;\n"
          "                               with -l: show access time and sort by name;\n"
          "                               otherwise: sort by access time, newest first\n"
          "  -U                         do not sort; list entries in directory order\n"
          "  -v                         natural sort of (version) numbers within text\n",
          5);
  fputs_unlocked(v49, v48);
  v50 = stdout;
  v51 = dcgettext(
          0LL,
          "  -w, --width=COLS           set output width to COLS.  0 means no limit\n"
          "  -x                         list entries by lines instead of by columns\n"
          "  -X                         sort alphabetically by entry extension\n"
          "  -Z, --context              print any security context of each file\n"
          "  -1                         list one file per line.  Avoid '\\n' with -q or -b\n",
          5);
  fputs_unlocked(v51, v50);
  v52 = stdout;
  v53 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v53, v52);
  v54 = stdout;
  v55 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v55, v54);
  v56 = stdout;
  v57 = dcgettext(
          0LL,
          "\n"
          "The SIZE argument is an integer and optional unit (example: 10K is 10*1024).\n"
          "Units are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n",
          5);
  fputs_unlocked(v57, v56);
  v58 = stdout;
  v59 = dcgettext(
          0LL,
          "\n"
          "The TIME_STYLE argument can be full-iso, long-iso, iso, locale, or +FORMAT.\n"
          "FORMAT is interpreted like in date(1).  If FORMAT is FORMAT1<newline>FORMAT2,\n"
          "then FORMAT1 applies to non-recent files and FORMAT2 to recent files.\n"
          "TIME_STYLE prefixed with 'posix-' takes effect only outside the POSIX locale.\n"
          "Also the TIME_STYLE environment variable sets the default style to use.\n",
          5);
  fputs_unlocked(v59, v58);
  v60 = stdout;
  v61 = dcgettext(
          0LL,
          "\n"
          "Using color to distinguish file types is disabled both by default and\n"
          "with --color=never.  With --color=auto, ls emits color codes only when\n"
          "standard output is connected to a terminal.  The LS_COLORS environment\n"
          "variable can change the settings.  Use the dircolors command to set it.\n",
          5);
  fputs_unlocked(v61, v60);
  v62 = stdout;
  v63 = dcgettext(
          0LL,
          "\n"
          "Exit status:\n"
          " 0  if OK,\n"
          " 1  if minor problems (e.g., cannot access subdirectory),\n"
          " 2  if serious trouble (e.g., cannot access command-line argument).\n",
          5);
  fputs_unlocked(v63, v62);
  if ( dword_6245AC == 1 )
  {
    v64 = "coreutils" + 7;
  }
  else
  {
    v64 = "vdir" + 1;
    if ( dword_6245AC != 2 )
      v64 = "vdir";
  }
  v76 = "[";
  v65 = "[";
  v66 = &v76;
  v77 = "test invocation";
  v78 = "coreutils";
  v79 = "Multi-call invocation";
  v80 = "sha224sum";
  v81 = "sha2 utilities";
  v82 = "sha256sum";
  v83 = "sha2 utilities";
  v84 = "sha384sum";
  v85 = "sha2 utilities";
  v86 = "sha512sum";
  v87 = "sha2 utilities";
  v88 = 0LL;
  v89 = 0LL;
  do
  {
    if ( !strcmp(v64, v65) )
      break;
    v66 += 2;
    v65 = *v66;
  }
  while ( *v66 );
  v67 = v66[1];
  if ( v67 )
  {
    v68 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v68, &unk_41B1AD);
    v69 = setlocale(5, 0LL);
    if ( !v69 || !strncmp(v69, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v73 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v73, &unk_41B1AD);
    v74 = setlocale(5, 0LL);
    if ( !v74 || !strncmp(v74, "en_", 3uLL) )
    {
      v67 = v64;
      v75 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v75, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v67 = v64;
  }
  v72 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v72, v64);
LABEL_13:
  v70 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v70, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v71 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v71, v67);
LABEL_3:
  exit(status);
}

char *__fastcall sub_40ABF0(char *path, unsigned __int64 a2)
{
  size_t v2; // rbx
  char *v3; // rax
  char *v4; // rbp
  ssize_t v5; // r12
  char *v7; // rdi

  v2 = a2 + 1;
  if ( a2 >= 0x401 )
    v2 = 1025LL;
  while ( 2 )
  {
    v3 = (char *)malloc(v2);
    v4 = v3;
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = readlink(path, v3, v2);
        if ( v5 < 0 && *__errno_location() != 34 )
        {
          v7 = v4;
          v4 = 0LL;
          free(v7);
          return v4;
        }
        if ( v2 > v5 )
        {
          v4[v5] = 0;
          return v4;
        }
        free(v4);
        if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
          break;
        v2 *= 2LL;
        v3 = (char *)malloc(v2);
        v4 = v3;
        if ( !v3 )
          return v4;
      }
      if ( v2 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v2 = 0x7FFFFFFFFFFFFFFFLL;
        continue;
      }
      v4 = 0LL;
      *__errno_location() = 12;
    }
    break;
  }
  return v4;
}

noreturn void  sub_40ACE0()
{
  sub_40A530(1);
}

__int64 __fastcall sub_40ACF0(const char *a1, const char **a2, char *a3, size_t a4)
{
  size_t v4; // r13
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
  char *v16; // [rsp+18h] [rbp-40h]

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

void __fastcall sub_40AE10(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_412270(1LL, a1);
  v5 = sub_411F60(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_40AE90(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  size_t v4; // r13
  char *v5; // rbp
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rax

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
    while ( !v9 || memcmp(v3, v5, v4) )
    {
      ++v9;
      v3 = v5;
      v5 += v4;
      v11 = sub_412290(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v12 = sub_412290(i);
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
  return (int)v13;
}

__int64 __fastcall sub_40AFB0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  size_t v6; // r15
  void (*v7)(void); // r13
  char *v8; // rbp
  __int64 *v9; // rbx
  __int64 result; // rax

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (__int64 *)a3;
  result = sub_40ACF0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40AE10(a1, (__int64)a2, result);
    sub_40AE90(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_40B020(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  size_t v5; // r12
  __int64 *v6; // rbx
  char *v7; // rbp

  v4 = *a2;
  if ( *a2 )
  {
    v5 = a4;
    v6 = a2 + 1;
    v7 = a3;
    do
    {
      if ( !memcmp(s1, v7, v5) )
        break;
      v4 = *v6;
      v7 += v5;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

_BYTE *__fastcall sub_40B070(void *src, char a2)
{
  _BYTE *v2; // r15
  const char *v3; // rax
  _BYTE *v4; // r12
  size_t v5; // rax
  size_t v6; // rbx
  _BYTE *v7; // rbx
  unsigned __int64 v8; // rbp
  char v9; // al
  char v10; // dl
  _BYTE *i; // r13
  _BYTE *v12; // r14
  signed __int64 v13; // r8
  unsigned __int64 v14; // rbp
  signed __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  bool v19; // al
  int *v20; // rdx
  int v21; // ecx
  size_t v22; // rax
  int v23; // eax
  __int64 v24; // rax
  char *v26; // rax
  char *v27; // r15
  const char *v28; // rdi
  size_t v29; // r13
  size_t v30; // rax
  size_t v31; // rdx
  unsigned __int64 v32; // r8
  int *v33; // rax
  int v34; // ecx
  int *v35; // rdx
  int *v36; // rdx
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rdx
  int *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  bool v44; // zf
  signed __int64 v45; // [rsp+8h] [rbp-100h]
  int *v46; // [rsp+8h] [rbp-100h]
  int *v47; // [rsp+8h] [rbp-100h]
  int *v48; // [rsp+8h] [rbp-100h]
  int *v49; // [rsp+8h] [rbp-100h]
  size_t v50; // [rsp+8h] [rbp-100h]
  __int64 v51; // [rsp+8h] [rbp-100h]
  int v52; // [rsp+14h] [rbp-F4h]
  int v53; // [rsp+14h] [rbp-F4h]
  int v54; // [rsp+14h] [rbp-F4h]
  int v55; // [rsp+14h] [rbp-F4h]
  void *v56; // [rsp+18h] [rbp-F0h]
  void *v57; // [rsp+20h] [rbp-E8h]
  size_t v58; // [rsp+20h] [rbp-E8h]
  char *ptr; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v60; // [rsp+30h] [rbp-D8h]
  int v61; // [rsp+3Ch] [rbp-CCh]
  struct stat stat_buf; // [rsp+40h] [rbp-C8h]

  v52 = a2 & 3;
  if ( (v52 - 1) & (unsigned __int8)v52 || (v2 = src) == 0LL )
  {
    v4 = 0LL;
    *__errno_location() = 22;
    return v4;
  }
  if ( !*(_BYTE *)src )
  {
    v4 = 0LL;
    *__errno_location() = 2;
    return v4;
  }
  if ( *(_BYTE *)src == 47 )
  {
    v4 = (_BYTE *)sub_412980(4096LL);
    v8 = (unsigned __int64)(v4 + 4096);
    v7 = v4 + 1;
    *v4 = 47;
  }
  else
  {
    v3 = (const char *)sub_412D10();
    v4 = v3;
    if ( !v3 )
      return v4;
    v5 = strlen(v3);
    v6 = v5;
    if ( v5 <= 0xFFF )
    {
      v4 = (_BYTE *)sub_4129E0(v4, 4096LL);
      v7 = &v4[v6];
      v8 = (unsigned __int64)(v4 + 4096);
    }
    else
    {
      v7 = &v4[v5];
      v8 = (unsigned __int64)&v4[v5];
    }
  }
  v57 = src;
  v9 = *(_BYTE *)src;
  v56 = 0LL;
  v60 = 0LL;
  ptr = 0LL;
  while ( v9 )
  {
    v10 = v9;
    if ( v9 == 47 )
    {
      do
        v10 = *++v2;
      while ( *v2 == 47 );
      if ( !v10 )
        break;
    }
    for ( i = v2; ; ++i )
    {
      v9 = i[1];
      v12 = i + 1;
      if ( !v9 || v9 == 47 )
        break;
    }
    if ( v12 == v2 )
      break;
    v13 = v12 - v2;
    if ( v12 - v2 == 1 )
    {
      if ( v10 == 46 )
        goto LABEL_46;
      goto LABEL_21;
    }
    if ( v10 != 46 || v13 != 2 || v2[1] != 46 )
    {
LABEL_21:
      if ( *(v7 - 1) != 47 )
        *v7++ = 47;
      if ( v8 <= (unsigned __int64)&v7[v13] )
      {
        v14 = v8 - (_QWORD)v4;
        v15 = v7 - v4;
        v16 = v13 + v14 + 1;
        v17 = v14 + 4096;
        if ( v13 >= 4096 )
          v17 = v16;
        v18 = sub_4129E0(v4, v17);
        v13 = v12 - v2;
        v4 = (_BYTE *)v18;
        v8 = v18 + v17;
        v7 = (_BYTE *)(v18 + v15);
      }
      v45 = v13;
      memcpy(v7, v2, v13);
      v7 += v45;
      *v7 = 0;
      if ( v52 == 2 && a2 & 4 )
      {
LABEL_29:
        stat_buf.st_mode = 0;
LABEL_30:
        if ( *v12 && v52 != 2 )
        {
          v40 = __errno_location();
          v21 = 20;
          v20 = v40;
LABEL_79:
          v55 = v21;
          v49 = v20;
          free(ptr);
          free(v4);
          v36 = v49;
          v37 = v55;
          if ( v56 )
            goto LABEL_68;
          goto LABEL_69;
        }
LABEL_32:
        v9 = *v12;
        v2 = v12;
      }
      else
      {
        if ( a2 & 4 )
          v19 = __xstat(1, v4, &stat_buf) != 0;
        else
          v19 = __lxstat(1, v4, &stat_buf) != 0;
        if ( v19 )
        {
          v20 = __errno_location();
          v21 = *v20;
          if ( !(a2 & 3) )
            goto LABEL_79;
          if ( v52 != 1 )
            goto LABEL_29;
          v61 = *v20;
          v46 = v20;
          v22 = strspn(i + 1, "/");
          v20 = v46;
          v21 = v61;
          if ( v12[v22] || v61 != 2 )
            goto LABEL_79;
        }
        else
        {
          v23 = stat_buf.st_mode & 0xF000;
          if ( v23 != 40960 )
          {
            if ( v23 == 0x4000 )
              goto LABEL_32;
            goto LABEL_30;
          }
          if ( !v56 )
          {
            v56 = (void *)sub_40CA80(7LL, 0LL, sub_40D440, sub_40D4B0, sub_40D4F0);
            if ( !v56 )
              sub_412BD0(7LL, 0LL, v39);
          }
          if ( (unsigned __int8)sub_40B9A0(v56, v57, &stat_buf) )
          {
            if ( v52 != 2 )
            {
              v33 = __errno_location();
              v34 = 40;
              v35 = v33;
LABEL_67:
              v53 = v34;
              v47 = v35;
              free(ptr);
              free(v4);
              v36 = v47;
              v37 = v53;
LABEL_68:
              v54 = v37;
              v48 = v36;
              sub_40CCC0(v56);
              v37 = v54;
              v36 = v48;
LABEL_69:
              *v36 = v37;
              return 0LL;
            }
          }
          else
          {
            sub_40B910(v56, v57, &stat_buf);
            v26 = sub_40ABF0(v4, stat_buf.st_size);
            v27 = v26;
            if ( v26 )
            {
              v28 = i + 1;
              v29 = strlen(v26);
              v30 = strlen(v28);
              v31 = v30;
              v32 = v29 + v30 + 1;
              if ( v60 )
              {
                if ( v32 > v60 )
                {
                  v51 = v29 + v30 + 1;
                  v58 = v30;
                  v43 = sub_4129E0(ptr, v51);
                  v31 = v58;
                  ptr = (char *)v43;
                  v60 = v51;
                }
              }
              else
              {
                v50 = v30;
                v41 = 4096LL;
                if ( v32 >= 0x1000 )
                  v41 = v32;
                v60 = v41;
                v42 = sub_412980(v41);
                v31 = v50;
                ptr = (char *)v42;
              }
              memmove(&ptr[v29], v12, v31 + 1);
              v12 = memcpy(ptr, v27, v29);
              v57 = v12;
              if ( *v27 == 47 )
              {
                *v4 = 47;
                v7 = v4 + 1;
              }
              else if ( v7 > v4 + 1 )
              {
                if ( v4 >= v7 - 1 )
                {
                  --v7;
                }
                else
                {
                  v44 = *(v7-- - 2) == 47;
                  if ( !v44 )
                  {
                    do
                      --v7;
                    while ( v4 != v7 && *(v7 - 1) != 47 );
                  }
                }
              }
              free(v27);
              goto LABEL_32;
            }
            v35 = __errno_location();
            v34 = *v35;
            if ( v52 != 2 || v34 == 12 )
              goto LABEL_67;
          }
        }
        v9 = i[1];
        v2 = i + 1;
      }
    }
    else
    {
      v2 = i + 1;
      if ( v7 > v4 + 1 )
      {
        v38 = (__int64)(v7 - 1);
        if ( v4 < v7 - 1 && *(v7 - 2) != 47 )
        {
          v7 -= 2;
          if ( v4 != (_BYTE *)(v38 - 1) )
          {
            do
            {
              if ( *(v7 - 1) == 47 )
                break;
              --v7;
            }
            while ( v4 != v7 );
          }
LABEL_46:
          v2 = i + 1;
        }
        else
        {
          --v7;
        }
      }
    }
  }
  if ( v7 > v4 + 1 && *(v7 - 1) == 47 )
    v24 = (__int64)v7--;
  else
    v24 = (__int64)(v7 + 1);
  *v7 = 0;
  if ( v8 != v24 )
    v4 = (_BYTE *)sub_4129E0(v4, v7 - v4 + 1);
  free(ptr);
  if ( v56 )
    sub_40CCC0(v56);
  return v4;
}

__int64 sub_40B710()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_4178E0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_625790 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_625798 )
      {
        v5 = sub_4120E0();
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
  result = sub_4178E0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_40B7B0(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *a1 == 47;
  v2 = sub_40B870(a1);
  if ( v2 - (__int64)a1 <= v1 )
    return v2 - (_QWORD)a1;
  v3 = v2 - (_QWORD)a1 - 1;
  if ( *(_BYTE *)(v2 - 1) != 47 )
    return v2 - (_QWORD)a1;
  while ( v1 != v3 && a1[v3 - 1] == 47 )
    --v3;
  return v3;
}

_BYTE *__fastcall sub_40B810(void *src)
{
  __int64 v1; // rax
  size_t v2; // rbx
  _BYTE *v3; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // rax

  v1 = sub_40B7B0(src);
  v2 = v1;
  v3 = malloc(v1 + (v1 == 0) + 1);
  v4 = v3;
  if ( v3 )
  {
    v5 = memcpy(v3, src, v2);
    v4 = v5;
    if ( !v2 )
    {
      *v5 = 46;
      v2 = 1LL;
    }
    v5[v2] = 0;
  }
  return v4;
}

_BYTE *__fastcall sub_40B870(_BYTE *a1)
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

size_t __fastcall sub_40B8D0(const char *a1)
{
  size_t result; // rax
  __int64 v2; // rdx

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

__int64 sub_40B900()
{
  return 0LL;
}

void __fastcall sub_40B910(__int64 a1, void *a2, _QWORD *a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( a1 )
  {
    v3 = a3;
    v4 = (_QWORD *)sub_412980(24LL);
    *v4 = sub_412BB0(a2);
    v4[1] = v3[1];
    v4[2] = *v3;
    v5 = sub_40D220(a1, v4);
    if ( !v5 )
      sub_412BD0(a1, v4, v6);
    if ( v4 != (_QWORD *)v5 )
      sub_40D4F0(v4);
  }
}

bool __fastcall sub_40B9A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-28h]
  __int64 v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]

  if ( !a1 )
    return 0;
  v3 = a3[1];
  v5 = a2;
  v6 = v3;
  v7 = *a3;
  return sub_40C810(a1, &v5) != 0;
}

__int64 __fastcall sub_40BB60(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // edi

  v10 = *(_DWORD *)(a1 + 24);
  v2 = 45;
  v3 = v10 & 0xF000;
  if ( v3 != 0x8000 )
  {
    v2 = 100;
    if ( v3 != 0x4000 )
    {
      v2 = 98;
      if ( v3 != 24576 )
      {
        v2 = 99;
        if ( v3 != 0x2000 )
        {
          v2 = 108;
          if ( v3 != 40960 )
          {
            v2 = 112;
            if ( v3 != 4096 )
            {
              v2 = 115;
              if ( v3 != 49152 )
                v2 = 63;
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a2 = v2;
  *(_BYTE *)(a2 + 1) = (v10 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80u) < 1 ? 45 : 119;
  v4 = -((v10 & 0x40u) < 1);
  if ( v10 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10u) < 1 ? 45 : 119;
  v6 = -((v10 & 8u) < 1);
  if ( v10 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2u) < 1 ? 45 : 119;
  v8 = -((v10 & 1u) < 1);
  if ( v10 & 0x200 )
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_40BB60(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // edi

  v10 = *(_DWORD *)(a1 + 24);
  v2 = 45;
  v3 = v10 & 0xF000;
  if ( v3 != 0x8000 )
  {
    v2 = 100;
    if ( v3 != 0x4000 )
    {
      v2 = 98;
      if ( v3 != 24576 )
      {
        v2 = 99;
        if ( v3 != 0x2000 )
        {
          v2 = 108;
          if ( v3 != 40960 )
          {
            v2 = 112;
            if ( v3 != 4096 )
            {
              v2 = 115;
              if ( v3 != 49152 )
                v2 = 63;
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a2 = v2;
  *(_BYTE *)(a2 + 1) = (v10 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80u) < 1 ? 45 : 119;
  v4 = -((v10 & 0x40u) < 1);
  if ( v10 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10u) < 1 ? 45 : 119;
  v6 = -((v10 & 8u) < 1);
  if ( v10 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2u) < 1 ? 45 : 119;
  v8 = -((v10 & 1u) < 1);
  if ( v10 & 0x200 )
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_40BB60(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // edi

  v10 = *(_DWORD *)(a1 + 24);
  v2 = 45;
  v3 = v10 & 0xF000;
  if ( v3 != 0x8000 )
  {
    v2 = 100;
    if ( v3 != 0x4000 )
    {
      v2 = 98;
      if ( v3 != 24576 )
      {
        v2 = 99;
        if ( v3 != 0x2000 )
        {
          v2 = 108;
          if ( v3 != 40960 )
          {
            v2 = 112;
            if ( v3 != 4096 )
            {
              v2 = 115;
              if ( v3 != 49152 )
                v2 = 63;
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a2 = v2;
  *(_BYTE *)(a2 + 1) = (v10 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80u) < 1 ? 45 : 119;
  v4 = -((v10 & 0x40u) < 1);
  if ( v10 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10u) < 1 ? 45 : 119;
  v6 = -((v10 & 8u) < 1);
  if ( v10 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2u) < 1 ? 45 : 119;
  v8 = -((v10 & 1u) < 1);
  if ( v10 & 0x200 )
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_40BB60(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // edi

  v10 = *(_DWORD *)(a1 + 24);
  v2 = 45;
  v3 = v10 & 0xF000;
  if ( v3 != 0x8000 )
  {
    v2 = 100;
    if ( v3 != 0x4000 )
    {
      v2 = 98;
      if ( v3 != 24576 )
      {
        v2 = 99;
        if ( v3 != 0x2000 )
        {
          v2 = 108;
          if ( v3 != 40960 )
          {
            v2 = 112;
            if ( v3 != 4096 )
            {
              v2 = 115;
              if ( v3 != 49152 )
                v2 = 63;
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a2 = v2;
  *(_BYTE *)(a2 + 1) = (v10 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80u) < 1 ? 45 : 119;
  v4 = -((v10 & 0x40u) < 1);
  if ( v10 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10u) < 1 ? 45 : 119;
  v6 = -((v10 & 8u) < 1);
  if ( v10 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2u) < 1 ? 45 : 119;
  v8 = -((v10 & 1u) < 1);
  if ( v10 & 0x200 )
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_40BB70(void *a1, void *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = sub_40BB90(a1, a2);
  if ( !result )
    sub_412BD0(a1, a2, v3);
  return result;
}

void *__fastcall sub_40BB90(void *src, void *a2, _QWORD *a3)
{
  const char *v3; // r12
  const char *v4; // rax
  const char *v5; // r14
  size_t v6; // rax
  _BOOL8 v7; // rbx
  size_t v8; // rbp
  size_t v9; // rax
  size_t v10; // r14
  void *v11; // rax
  void *v12; // r15
  _BYTE *v13; // rax
  char *v14; // rdi
  _QWORD *v16; // [rsp+0h] [rbp-48h]
  char v17; // [rsp+Fh] [rbp-39h]

  v3 = (const char *)a2;
  v16 = a3;
  v4 = sub_40B870(src);
  v5 = v4;
  v6 = sub_40B8D0(v4);
  v7 = v6;
  v8 = v6 + v5 - (_BYTE *)src;
  if ( v6 )
    v7 = v5[v6 - 1] != 47;
  v17 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 47 )
  {
    do
      ++v3;
    while ( *v3 == 47 );
  }
  v9 = strlen(v3);
  v10 = v9;
  v11 = malloc(v9 + v7 + v8 + 1);
  v12 = v11;
  if ( v11 )
  {
    v13 = mempcpy(v11, src, v8);
    *v13 = 47;
    v14 = &v13[v7];
    if ( v16 )
      *v16 = &v14[-(v17 == 47)];
    *(_BYTE *)mempcpy(v14, v3, v10) = 0;
  }
  return v12;
}

char *__fastcall sub_40BC70(char **a1)
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
          if ( v5 > 0x39 || (v6 = 1LL << v5, v3 = 0, !(v6 & 0x3FFFFFF03FFFFFFLL)) )
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

__int64 __fastcall sub_40BD40(char *s1, char *s2)
{
  char *v2; // rbp
  char *v3; // rbx
  unsigned int v4; // er12
  char v5; // r8
  char v6; // r9
  char *v7; // r13
  char *v8; // rax
  size_t v9; // r13
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  size_t v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int8 v14; // al
  unsigned int v15; // er10
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int8 v18; // di
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // er9
  size_t v25; // rdi
  unsigned int v26; // er9
  int v27; // eax
  unsigned int v28; // [rsp+4h] [rbp-54h]
  char *v29; // [rsp+10h] [rbp-48h]
  char *v30; // [rsp+18h] [rbp-40h]

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
        goto LABEL_50;
      if ( !strcmp(".", s2) )
        return 1;
      if ( !strcmp("..", s1) )
        goto LABEL_50;
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
          v7 = sub_40BC70(&v29);
          v8 = sub_40BC70(&v30);
          if ( v7 )
          {
            v9 = v7 - v3;
            if ( !v8 )
            {
              v10 = v30 - v2;
LABEL_15:
              if ( v9 != v10 || strncmp(v3, v2, v9) )
                goto LABEL_16;
              v9 = v29 - v3;
LABEL_65:
              v10 = v30 - v2;
LABEL_16:
              v11 = 0LL;
              v12 = 0LL;
              while ( 1 )
              {
                if ( v9 <= v12 && v10 <= v11 )
                  return v4;
                v13 = v11 - v12;
                if ( v9 > v12 )
                  break;
LABEL_32:
                while ( 1 )
                {
                  v18 = v2[v11];
                  v20 = (char)v18;
                  if ( v10 <= v11 || (unsigned int)((char)v18 - 48) <= 9 )
                    break;
                  if ( v9 != v12 )
                  {
                    v16 = (unsigned __int8)v3[v12];
                    v14 = v3[v12];
                    v15 = (unsigned __int8)v3[v12];
                    if ( (unsigned int)(v16 - 48) > 9 )
                      goto LABEL_23;
                  }
LABEL_36:
                  v19 = v18;
                  v15 = 0;
                  if ( (unsigned int)v18 - 48 > 9 )
                    goto LABEL_37;
LABEL_31:
                  ++v12;
                  ++v11;
                  if ( v9 > v12 )
                    goto LABEL_20;
                }
                while ( 1 )
                {
                  v22 = v3[v12];
                  if ( v3[v12] != 48 )
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
                    goto LABEL_50;
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
                    v20 = v2[v11 - v12 + ++v25];
                    v22 = v3[v25];
                    v28 = v20 - 48;
                    if ( (unsigned int)(v22 - 48) > 9 )
                      break;
                    if ( v28 > 9 )
                      return 1;
                  }
                  if ( v28 <= 9 )
                    goto LABEL_50;
                  if ( v26 )
                    return v26;
                  v11 += v25 - v12;
                  v12 = v25;
                }
              }
LABEL_20:
              v14 = v3[v12];
              if ( (unsigned int)((char)v14 - 48) <= 9 )
                goto LABEL_32;
              v15 = v14;
              if ( (unsigned int)v14 - 48 <= 9 )
              {
                if ( v10 != v11 )
                {
                  v18 = v2[v11];
                  goto LABEL_36;
                }
                goto LABEL_31;
              }
              v16 = v14;
LABEL_23:
              v17 = v16 - 65;
              if ( v17 <= 0x39 && (1LL << v17) & 0x3FFFFFF03FFFFFFLL )
              {
                v19 = 0;
                if ( v10 == v12 + v13 )
                {
LABEL_30:
                  if ( v19 == v15 )
                    goto LABEL_31;
                  return v15 - v19;
                }
              }
              else
              {
                if ( v14 == 126 )
                  v15 = -1;
                else
                  v15 += 256;
                if ( v10 == v12 + v13 )
                  return v15;
              }
              v18 = v2[v11];
              v19 = v18;
              if ( (unsigned int)v18 - 48 > 9 )
              {
LABEL_37:
                v21 = v18 - 65;
                if ( v21 > 0x39 || !((1LL << v21) & 0x3FFFFFF03FFFFFFLL) )
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
              goto LABEL_30;
            }
          }
          else
          {
            v9 = v29 - v3;
            if ( !v8 )
              goto LABEL_65;
          }
          v10 = v8 - v2;
          goto LABEL_15;
        }
        if ( v6 != 46 )
          goto LABEL_12;
        return 1;
      }
    }
LABEL_50:
    v4 = -1;
  }
  return v4;
}

int __fastcall sub_40C150(struct timespec *tp)
{
  int result; // eax
  __time_t v2; // [rsp+0h] [rbp-18h]
  __int64 v3; // [rsp+8h] [rbp-10h]

  result = clock_gettime(0, tp);
  if ( result )
  {
    gettimeofday((struct timeval *)&v2, 0LL);
    tp->tv_sec = v2;
    result = 1000 * v3;
    tp->tv_nsec = 1000 * v3;
  }
  return result;
}

bool __fastcall sub_40C190(int a1)
{
  char *v1; // rdx
  bool result; // al

  v1 = setlocale(a1, 0LL);
  result = 1;
  if ( v1 )
  {
    result = 0;
    if ( strcmp(v1, "C") )
      result = strcmp(v1, "POSIX") != 0;
  }
  return result;
}

unsigned __int64 __fastcall sub_40C1F0(unsigned __int64 a1)
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

unsigned __int64 __fastcall sub_40C290(__int64 a1, unsigned __int64 a2)
{
  return __ROR8__(a1, 3) % a2;
}

bool __fastcall sub_40C2A0(__int64 a1, __int64 a2)
{
  return a1 == a2;
}

__int64 __fastcall sub_40C2B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40C2B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40C2E0(__int64 a1, __int64 a2, __m128i **a3, char a4)
{
  __m128i **v4; // r14
  char v5; // r13
  __int64 v6; // rbp
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 *v10; // rax
  const __m128i *v12; // rax

  v4 = a3;
  v5 = a4;
  v6 = a2;
  v7 = (__m128i *)sub_40C2B0(a1, a2);
  *v4 = v7;
  v8 = v7->m128i_i64[0];
  if ( v7->m128i_i64[0] )
  {
    v9 = v7;
    if ( v8 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(v6) )
      {
        v10 = (__int64 *)v9->m128i_i64[1];
        if ( v10 )
        {
          v8 = *v10;
          if ( v6 != *v10 )
          {
            while ( !(*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(v6) )
            {
              v9 = (__m128i *)v9->m128i_i64[1];
              v10 = (__int64 *)v9->m128i_i64[1];
              if ( !v10 )
                return 0LL;
              v8 = *v10;
              if ( *v10 == v6 )
                goto LABEL_11;
            }
            v10 = (__int64 *)v9->m128i_i64[1];
            v8 = *v10;
          }
LABEL_11:
          if ( v5 )
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
    if ( v5 )
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

__int64 __fastcall sub_40C400(float **a1)
{
  float *v1; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == (float *)&unk_41D810 )
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
    *a1 = (float *)&unk_41D810;
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_40C480(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
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

  v3 = a3;
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
              v8 = (_QWORD *)sub_40C2B0(a1, *v6);
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
        if ( !v3 )
          break;
      }
      v4 += 2;
      if ( *(_QWORD *)(a2 + 8) <= (unsigned __int64)v4 )
        return 1LL;
    }
    v10 = (_QWORD *)sub_40C2B0(a1, v5);
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

__int64 __fastcall sub_40C5F0(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}

__int64 __fastcall sub_40C810(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = (_QWORD *)sub_40C2B0(a1, a2);
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

__int64 __fastcall sub_40C8C0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)sub_40C2B0(a1, a2);
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

__int64 __fastcall sub_40C9A0(__int64 a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 *v3; // r14
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v9; // rbx

  v3 = *(__int64 **)a1;
  if ( *(_QWORD *)(a1 + 8) <= *(_QWORD *)a1 )
    return 0LL;
  v4 = a3;
  v5 = a1;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *v3;
    if ( *v3 )
      break;
LABEL_4:
    v3 += 2;
    if ( *(_QWORD *)(v5 + 8) <= (unsigned __int64)v3 )
      return v6;
  }
  v9 = v3;
  while ( a2(v7, v4) )
  {
    v9 = (__int64 *)v9[1];
    ++v6;
    if ( !v9 )
      goto LABEL_4;
    v7 = *v9;
  }
  return v6;
}

_QWORD *__fastcall sub_40CA80(unsigned __int64 a1, __int64 a2, unsigned __int64 (__fastcall *a3)(__int64 a1, unsigned __int64 a2), bool (__fastcall *a4)(__int64 a1, __int64 a2), __int64 a5)
{
  __int64 v5; // r14
  bool (__fastcall *v6)(__int64, __int64); // r13
  unsigned __int64 (__fastcall *v7)(__int64, unsigned __int64); // r12
  unsigned __int64 v8; // rbp
  char *v9; // rax
  _QWORD *v10; // rbx
  float **v11; // rdi
  unsigned __int64 v12; // rbp
  char *v13; // rax
  void *v14; // rdi
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4

  v5 = a5;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  if ( !a3 )
    v7 = sub_40C290;
  if ( !a4 )
    v6 = sub_40C2A0;
  v9 = (char *)malloc(0x50uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = (float **)(v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40C400(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40C1F0(v8);
        if ( !_bittest64((const __int64 *)&v12, 0x3Cu) && v12 >> 61 == 0 )
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
      *((_QWORD *)v9 + 5) = &unk_41D810;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40C400(v11) )
        goto LABEL_14;
      if ( (v8 & 0x8000000000000000LL) != 0LL )
      {
LABEL_23:
        v17 = (float)(int)(v8 & 1 | (v8 >> 1)) + (float)(int)(v8 & 1 | (v8 >> 1));
        goto LABEL_19;
      }
    }
    v17 = (float)(int)v8;
LABEL_19:
    v18 = v17 / v16;
    if ( v18 >= 1.8446744e19 )
      goto LABEL_14;
    if ( v18 < 9.223372e18 )
      v8 = (unsigned int)(int)v18;
    else
      v8 = (unsigned int)(int)(float)(v18 - 9.223372e18) ^ 0x8000000000000000LL;
    goto LABEL_9;
  }
  return v10;
}

void __fastcall sub_40CCC0(void *ptr)
{
  void **v1; // r12
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  v1 = (void **)ptr;
  v2 = *(_QWORD **)ptr;
  v3 = *((_QWORD *)ptr + 1);
  if ( *((_QWORD *)ptr + 8) && *((_QWORD *)ptr + 4) )
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
        (*((void (**)(void))ptr + 8))();
        v4 = (_QWORD *)v4[1];
      }
      while ( v4 );
      v3 = *((_QWORD *)ptr + 1);
      v2 += 2;
    }
    while ( v3 > (unsigned __int64)v2 );
LABEL_10:
    v2 = *(_QWORD **)ptr;
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
    while ( v1[1] > v2 );
  }
LABEL_15:
  v7 = v1[9];
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
  free(*v1);
  free(v1);
}

__int64 __fastcall sub_40CDA0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  size_t v6; // rbx
  bool v7; // sf
  _BOOL8 v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx
  void *ptr; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  size_t v18; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+40h] [rbp-28h]
  __int64 v25; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( (a2 & 0x8000000000000000LL) != 0LL )
      v3 = (float)(int)(a2 & 1 | (a2 >> 1)) + (float)(int)(a2 & 1 | (a2 >> 1));
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
  v5 = sub_40C1F0(a2);
  v6 = v5;
  v7 = ((8 * v5) & 0x8000000000000000LL) != 0LL;
  v8 = v5 >> 61 != 0;
  if ( v7 )
    v8 = 1LL;
  if ( !v6 || v8 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v6 )
    return 1LL;
  v9 = (char *)calloc(v6, 0x10uLL);
  ptr = v9;
  if ( !v9 )
    return 0;
  v18 = v6;
  v10 = (__int64)&v9[16 * v6];
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
  v14 = sub_40C480((__int64)&ptr, a1, 0);
  if ( (_BYTE)v14 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = ptr;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 72) = v25;
    return v14;
  }
  *(_QWORD *)(a1 + 72) = v25;
  if ( !(unsigned __int8)sub_40C480(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40C480(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_40CDA0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  size_t v6; // rbx
  bool v7; // sf
  _BOOL8 v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx
  void *ptr; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  size_t v18; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+40h] [rbp-28h]
  __int64 v25; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( (a2 & 0x8000000000000000LL) != 0LL )
      v3 = (float)(int)(a2 & 1 | (a2 >> 1)) + (float)(int)(a2 & 1 | (a2 >> 1));
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
  v5 = sub_40C1F0(a2);
  v6 = v5;
  v7 = ((8 * v5) & 0x8000000000000000LL) != 0LL;
  v8 = v5 >> 61 != 0;
  if ( v7 )
    v8 = 1LL;
  if ( !v6 || v8 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v6 )
    return 1LL;
  v9 = (char *)calloc(v6, 0x10uLL);
  ptr = v9;
  if ( !v9 )
    return 0;
  v18 = v6;
  v10 = (__int64)&v9[16 * v6];
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
  v14 = sub_40C480((__int64)&ptr, a1, 0);
  if ( (_BYTE)v14 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = ptr;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 72) = v25;
    return v14;
  }
  *(_QWORD *)(a1 + 72) = v25;
  if ( !(unsigned __int8)sub_40C480(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40C480(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_40CFA0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  float v9; // xmm1_4
  unsigned __int64 v10; // rax
  __int64 *v11; // r12
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
  unsigned __int64 v25; // rsi
  __int64 *v26; // [rsp+8h] [rbp-20h]

  if ( !a2 )
    goto LABEL_35;
  v3 = a3;
  v4 = a2;
  v5 = sub_40C2E0(a1, a2, (__m128i **)&v26, 0);
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
        if ( v9 <= (float)((float)(int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_40C400((float **)(a1 + 40));
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
        v25 = v22 >= 9.223372e18 ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_40CDA0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40C2E0(a1, v4, (__m128i **)&v26, 0) )
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
      v9 = (float)(int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( (v10 & 0x8000000000000000LL) == 0LL )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(int)(v10 & 1 | (v10 >> 1)) + (float)(int)(v10 & 1 | (v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( v3 )
    *v3 = v5;
  return result;
}

__int64 __fastcall sub_40CFA0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  float v9; // xmm1_4
  unsigned __int64 v10; // rax
  __int64 *v11; // r12
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
  unsigned __int64 v25; // rsi
  __int64 *v26; // [rsp+8h] [rbp-20h]

  if ( !a2 )
    goto LABEL_35;
  v3 = a3;
  v4 = a2;
  v5 = sub_40C2E0(a1, a2, (__m128i **)&v26, 0);
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
        if ( v9 <= (float)((float)(int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_40C400((float **)(a1 + 40));
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
        v25 = v22 >= 9.223372e18 ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_40CDA0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40C2E0(a1, v4, (__m128i **)&v26, 0) )
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
      v9 = (float)(int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( (v10 & 0x8000000000000000LL) == 0LL )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(int)(v10 & 1 | (v10 >> 1)) + (float)(int)(v10 & 1 | (v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( v3 )
    *v3 = v5;
  return result;
}

__int64 __fastcall sub_40D220(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h]

  v2 = a2;
  v3 = sub_40CFA0(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    v2 = v5;
  return v2;
}

__int64 __fastcall sub_40D260(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // rax
  __int64 v6; // rax
  float *v7; // rdx
  float v8; // xmm0_4
  unsigned __int64 v9; // rax
  float v10; // xmm1_4
  __int64 v11; // rax
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rdi
  _QWORD *v19; // r12
  int v20; // edx
  float v21; // xmm0_4
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // [rsp+8h] [rbp-20h]

  v2 = a1;
  v3 = sub_40C2E0(a1, a2, (__m128i **)&v24, 1);
  if ( !v3 )
    return v3;
  v4 = v24;
  --*(_QWORD *)(a1 + 32);
  if ( *v4 )
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
    if ( (v9 & 0x8000000000000000LL) == 0LL )
      goto LABEL_6;
LABEL_22:
    v10 = (float)(int)(v9 & 1 | (v9 >> 1)) + (float)(int)(v9 & 1 | (v9 >> 1));
    goto LABEL_7;
  }
  v7 = *(float **)(a1 + 40);
  v8 = (float)(int)v6;
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 0x8000000000000000LL) != 0LL )
    goto LABEL_22;
LABEL_6:
  v10 = (float)(int)v9;
LABEL_7:
  if ( (float)(v10 * *v7) > v8 )
  {
    sub_40C400((float **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40CDA0(a1, v17) )
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
        *(_QWORD *)(v2 + 72) = 0LL;
      }
    }
  }
  return v3;
}

unsigned __int64 __fastcall sub_40D440(_QWORD *a1, unsigned __int64 a2)
{
  return (a1[1] ^ (unsigned __int64)sub_417960(*a1)) % a2;
}

bool __fastcall sub_40D4B0(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8) && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
    result = strcmp(*(const char **)a1, *(const char **)a2) == 0;
  return result;
}

void __fastcall sub_40D4F0(void *ptr)
{
  free(*(void **)ptr);
  free(ptr);
}

long double __fastcall sub_40D510(int a1, long double a15)
{
  unsigned __int64 v7; // rax
  long double v8; // fst6
  long double result; // fst7

  if ( a15 >= 9.223372e18 )
    v7 = (__int64)(a15 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v7 = (__int64)a15;
  v8 = (long double)v7;
  if ( a1 )
    return v8;
  result = v8;
  if ( a15 != v8 )
  {
    result = (long double)(__int64)(v7 + 1);
    if ( (__int64)(v7 + 1) < 0 )
      result = result + 1.8446744e19;
  }
  return result;
}

__int64 __fastcall sub_40D5D0(__int64 a1, char *a2, __int16 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  struct lconv *v7; // rax
  const char *v8; // r15
  struct lconv *v9; // r12
  size_t v10; // r8
  char *v11; // rax
  const char *v12; // r12
  size_t v13; // rax
  size_t v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  long double v17; // fst7
  long double v18; // fst6
  long double v19; // fst7
  long double v20; // fst6
  long double v21; // fst7
  long double v22; // fst6
  int v23; // ebx
  long double v24; // fst5
  long double v25; // fst4
  long double v26; // fst7
  long double v27; // fst6
  long double v28; // fst7
  __int64 v29; // r14
  long double v30; // fst7
  unsigned __int64 v31; // r15
  long double v32; // fst6
  size_t v33; // rax
  __int64 v34; // r8
  long double v35; // fst7
  size_t v36; // r14
  __int64 v37; // r15
  char *v38; // r14
  int v39; // eax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rtt
  unsigned __int64 v43; // rdx
  int v44; // er9
  int v45; // edi
  int v46; // ecx
  char *v47; // rbp
  unsigned __int8 *v48; // r15
  size_t v49; // rbx
  size_t v50; // rbp
  unsigned __int8 v51; // dl
  size_t v52; // rax
  size_t v53; // rbp
  char *v54; // r14
  unsigned __int64 v55; // rax
  char *v56; // rdx
  unsigned __int64 v57; // r11
  int v58; // eax
  unsigned int v59; // ett
  unsigned int v60; // edx
  unsigned int v61; // edi
  bool v62; // dl
  char v63; // al
  unsigned __int64 v64; // r9
  unsigned int v65; // edx
  __int64 v66; // rdi
  unsigned __int64 v67; // rcx
  signed __int64 v68; // r15
  unsigned int v69; // edx
  __int64 v70; // rsi
  size_t v71; // [rsp+0h] [rbp-B8h]
  char *v72; // [rsp+10h] [rbp-A8h]
  char *s; // [rsp+18h] [rbp-A0h]
  __int16 v74; // [rsp+20h] [rbp-98h]
  int v75; // [rsp+24h] [rbp-94h]
  int v76; // [rsp+24h] [rbp-94h]
  unsigned __int64 v77; // [rsp+28h] [rbp-90h]
  size_t v78; // [rsp+30h] [rbp-88h]
  size_t v79; // [rsp+30h] [rbp-88h]
  long double v80; // [rsp+30h] [rbp-88h]
  unsigned int v81; // [rsp+40h] [rbp-78h]
  unsigned int v82; // [rsp+44h] [rbp-74h]
  char *v83; // [rsp+48h] [rbp-70h]
  char src[104]; // [rsp+50h] [rbp-68h]

  v5 = a4;
  v6 = a5;
  v81 = a3 & 0x20;
  s = a2;
  v74 = a3;
  v77 = a5;
  v75 = a3 & 3;
  v82 = v81 < 1 ? 1000 : 1024;
  v7 = localeconv();
  v8 = v7->decimal_point;
  v9 = v7;
  v10 = strlen(v7->decimal_point);
  if ( v10 - 1 >= 0x10 )
    v8 = ".." + 1;
  v11 = v9->grouping;
  v12 = v9->thousands_sep;
  if ( v10 - 1 >= 0x10 )
    v10 = 1LL;
  v78 = v10;
  v83 = v11;
  v13 = strlen(v12);
  v14 = v78;
  if ( v13 >= 0x11 )
    v12 = "";
  v72 = a2 + 647;
  if ( v6 > v5 )
  {
    if ( !v5 || (v41 = v77 / v5, v77 % v5) )
    {
LABEL_10:
      v17 = (long double)v5;
      v18 = (long double)(__int64)v77;
      if ( (v77 & 0x8000000000000000LL) != 0LL )
      {
        v19 = v17 / (v18 + 1.8446744e19);
        v20 = (long double)a1;
        if ( a1 >= 0 )
        {
LABEL_12:
          v21 = v19 * v20;
          if ( v74 & 0x10 )
          {
LABEL_13:
            v22 = (long double)(int)v82;
            v23 = 0;
            v24 = v22;
            while ( 1 )
            {
              ++v23;
              v25 = v21;
              v26 = v24 * v22;
              if ( v25 < v26 )
                break;
              if ( v23 == 8 )
              {
                v27 = v25;
                v28 = v24;
                goto LABEL_19;
              }
              v24 = v26;
              v21 = v25;
            }
            v27 = v25;
            v28 = v24;
LABEL_19:
            v29 = v78 + 1;
            v30 = v27 / v28;
            v31 = v78 + 1 + (v81 == 0) + 1;
            if ( v75 == 1 )
            {
              __sprintf_chk(s, 1LL, -1LL, "%Lf", v78);
              v33 = strlen(s);
              if ( v33 > v31 )
                goto LABEL_26;
            }
            else
            {
              if ( v30 < 1.8446744073709551615e19 )
              {
                v80 = v30;
                sub_40D510(v75, v30);
                v32 = v80;
              }
              else
              {
                v32 = v30;
              }
              __sprintf_chk(s, 1LL, -1LL, "%Lf", v14);
              v33 = strlen(s);
              v30 = v32;
              if ( v33 > v31 )
              {
                v35 = v32 * 10.0;
LABEL_24:
                if ( v35 < 1.8446744073709551615e19 )
                  sub_40D510(v75, v35);
                goto LABEL_26;
              }
            }
            if ( !(v74 & 8) || s[v33 - 1] != 48 )
            {
              v36 = v33 - v29;
              goto LABEL_31;
            }
            v35 = v30 * 10.0;
            if ( v75 != 1 )
              goto LABEL_24;
LABEL_26:
            __sprintf_chk(s, 1LL, -1LL, "%Lf", v34);
            v33 = strlen(s);
            v36 = v33;
LABEL_31:
            v37 = (__int64)&v72[-v33];
            v38 = &v72[v36 - v33];
            memmove(&v72[-v33], s, v33);
            goto LABEL_32;
          }
LABEL_27:
          if ( v75 != 1 && v21 < 1.8446744073709551615e19 )
          {
            sub_40D510(v75, v21);
            v14 = v71;
          }
          __sprintf_chk(s, 1LL, -1LL, "%Lf", v14);
          v23 = -1;
          v33 = strlen(s);
          v36 = v33;
          goto LABEL_31;
        }
      }
      else
      {
        v19 = v17 / v18;
        v20 = (long double)a1;
        if ( a1 >= 0 )
          goto LABEL_12;
      }
      v21 = v19 * (v20 + 1.8446744e19);
      if ( v74 & 0x10 )
        goto LABEL_13;
      goto LABEL_27;
    }
    v16 = a1 / v41;
    v42 = 10 * (a1 % v41);
    v43 = 2 * (v42 % v41);
    v44 = v42 / v41;
    if ( v41 <= v43 )
      v45 = (v41 < v43) + 2;
    else
      v45 = v43 != 0;
    v46 = v74 & 0x10;
    if ( !(v74 & 0x10) )
      goto LABEL_85;
  }
  else
  {
    v15 = v5 / v6;
    if ( v5 % v6 )
      goto LABEL_10;
    v16 = a1 * v15;
    if ( a1 * v15 / (v5 / v6) != a1 )
      goto LABEL_10;
    v45 = 0;
    v44 = 0;
    v46 = v74 & 0x10;
    if ( !(v74 & 0x10) )
    {
LABEL_85:
      v23 = -1;
      goto LABEL_47;
    }
  }
  v23 = 0;
  if ( v82 <= v16 )
  {
    while ( 1 )
    {
      v57 = v16 / v82;
      v59 = v44 + 10 * (v16 % v82);
      v58 = (v44 + 10 * (v16 % v82)) / v82;
      v60 = (v45 >> 1) + 2 * (v59 % v82);
      v44 = v59 / v82;
      v16 /= v82;
      v61 = v60 + v45;
      v45 = v82 > v60 ? v61 != 0 : (v82 < v61) + 2;
      ++v23;
      if ( v82 > v57 )
        break;
      if ( v23 == 8 )
        goto LABEL_47;
    }
    if ( v57 <= 9 )
    {
      if ( v75 == 1 )
        v62 = v45 + (v58 & 1) > 2;
      else
        v62 = v45 > 0 && v75 == 0;
      if ( v62 )
      {
        if ( ++v58 == 10 )
        {
          v16 = v57 + 1;
          if ( v57 == 9 )
          {
            v38 = v72;
LABEL_114:
            v45 = 0;
            goto LABEL_115;
          }
          v45 = 0;
          goto LABEL_107;
        }
      }
      else if ( !v58 )
      {
LABEL_107:
        v38 = v72;
        if ( v74 & 8 )
        {
LABEL_115:
          if ( v75 == 1 )
            goto LABEL_52;
          v44 = 0;
          goto LABEL_48;
        }
        v63 = 48;
        goto LABEL_109;
      }
      v63 = v58 + 48;
LABEL_109:
      s[646] = v63;
      v38 = &s[-v78 + 646];
      if ( (unsigned int)v78 >= 8 )
      {
        v64 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)v38 = *(_QWORD *)v8;
        *(_QWORD *)&v38[(unsigned int)v78 - 8] = *(_QWORD *)&v8[(unsigned int)v78 - 8];
        if ( (((_DWORD)s + 646 - (_DWORD)v64) & 0xFFFFFFF8) >= 8 )
        {
          v65 = 0;
          do
          {
            v66 = v65;
            v65 += 8;
            *(_QWORD *)(v64 + v66) = *(_QWORD *)(v8 - &v38[-v64] + v66);
          }
          while ( v65 < (((_DWORD)s + 646 - (_DWORD)v64) & 0xFFFFFFF8) );
        }
      }
      else if ( v78 & 4 )
      {
        *(_DWORD *)v38 = *(_DWORD *)v8;
        *(_DWORD *)&v38[(unsigned int)v78 - 4] = *(_DWORD *)&v8[(unsigned int)v78 - 4];
      }
      else if ( (_DWORD)v78 )
      {
        *v38 = *v8;
        if ( v78 & 2 )
          *(_WORD *)&v38[(unsigned int)v78 - 2] = *(_WORD *)&v8[(unsigned int)v78 - 2];
      }
      goto LABEL_114;
    }
  }
LABEL_47:
  v38 = v72;
  if ( v75 == 1 )
  {
    if ( (v45 + (v16 & 1) != 0) + v44 <= 5 )
      goto LABEL_52;
    v38 = v72;
    goto LABEL_50;
  }
LABEL_48:
  if ( v75 || v44 + v45 <= 0 )
  {
LABEL_52:
    v37 = (__int64)v38;
    while ( 1 )
    {
      *(_BYTE *)--v37 = v16 % 0xA + 48;
      if ( v16 <= 9 )
        break;
      v16 /= 0xAuLL;
    }
    if ( !(v74 & 4) )
      goto LABEL_33;
    goto LABEL_56;
  }
LABEL_50:
  ++v16;
  if ( !v46 || v82 != v16 || v23 == 8 )
    goto LABEL_52;
  ++v23;
  if ( !(v74 & 8) )
  {
    *(v38 - 1) = 48;
    v38 += ~v78;
    if ( (unsigned int)v78 >= 8 )
    {
      v67 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v38 = *(_QWORD *)v8;
      *(_QWORD *)&v38[(unsigned int)v78 - 8] = *(_QWORD *)&v8[(unsigned int)v78 - 8];
      v68 = v8 - &v38[-v67];
      if ( (((_DWORD)v78 + (_DWORD)v38 - (_DWORD)v67) & 0xFFFFFFF8) >= 8 )
      {
        v69 = 0;
        do
        {
          v70 = v69;
          v69 += 8;
          *(_QWORD *)(v67 + v70) = *(_QWORD *)(v68 + v70);
        }
        while ( v69 < (((_DWORD)v78 + (_DWORD)v38 - (_DWORD)v67) & 0xFFFFFFF8) );
      }
    }
    else if ( v78 & 4 )
    {
      *(_DWORD *)v38 = *(_DWORD *)v8;
      *(_DWORD *)&v38[(unsigned int)v78 - 4] = *(_DWORD *)&v8[(unsigned int)v78 - 4];
    }
    else if ( (_DWORD)v78 )
    {
      *v38 = *v8;
      if ( v78 & 2 )
        *(_WORD *)&v38[(unsigned int)v78 - 2] = *(_WORD *)&v8[(unsigned int)v78 - 2];
    }
  }
  v37 = (__int64)(v38 - 1);
  *(v38 - 1) = 49;
LABEL_32:
  if ( !(v74 & 4) )
    goto LABEL_33;
LABEL_56:
  v47 = &v38[-v37];
  v79 = strlen(v12);
  __memcpy_chk(src, v37, &v38[-v37], 41LL);
  v76 = v23;
  v48 = (unsigned __int8 *)v83;
  v49 = (size_t)v47;
  v50 = -1LL;
  while ( 1 )
  {
    v51 = *v48;
    if ( *v48 )
    {
      v52 = v51;
      if ( v51 >= 0x7Fu )
        v52 = v49;
      ++v48;
      v50 = v52;
    }
    if ( v50 > v49 )
    {
      v53 = v49;
      v23 = v76;
      v37 = (__int64)&v38[-v53];
      memcpy(&v38[-v53], src, v53);
      goto LABEL_33;
    }
    v54 = &v38[-v50];
    v49 -= v50;
    memcpy(v54, &src[v49], v50);
    if ( !v49 )
      break;
    v38 = &v54[-v79];
    memcpy(v38, v12, v79);
  }
  v23 = v76;
  v37 = (__int64)v54;
LABEL_33:
  if ( (v74 & 0x80u) != 0 )
  {
    if ( v23 == -1 )
    {
      if ( v77 > 1 )
      {
        v23 = 1;
        v55 = 1LL;
        do
        {
          v55 *= v82;
          if ( v77 <= v55 )
            break;
          ++v23;
        }
        while ( v23 != 8 );
        v39 = v74 & 0x100;
        if ( !(v74 & 0x40) )
          goto LABEL_72;
        goto LABEL_70;
      }
      v23 = 0;
    }
    v39 = v74 & 0x100;
    if ( !(v23 | v39) )
      goto LABEL_36;
    if ( !(v74 & 0x40) )
    {
LABEL_71:
      if ( !v23 )
      {
        v56 = v72;
        if ( !v39 )
          goto LABEL_36;
        goto LABEL_77;
      }
LABEL_72:
      if ( v81 || v23 != 1 )
      {
        v56 = v72 + 1;
        *v72 = byte_41D8B8[v23];
        if ( v39 )
        {
          if ( v81 )
          {
            v56 = v72 + 2;
            v72[1] = 105;
          }
          goto LABEL_77;
        }
      }
      else
      {
        v56 = v72 + 1;
        *v72 = 107;
        if ( v39 )
        {
LABEL_77:
          *v56 = 66;
          v72 = v56 + 1;
          goto LABEL_36;
        }
      }
      v72 = v56;
      goto LABEL_36;
    }
LABEL_70:
    s[647] = 32;
    v72 = s + 648;
    goto LABEL_71;
  }
LABEL_36:
  *v72 = 0;
  return v37;
}

__int64 __fastcall sub_40DFA0(char *nptr, int *a2, __int64 *a3)
{
  __int64 *v3; // r12
  char *v4; // rbx
  int v5; // ebp
  int v6; // eax
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rdx
  char *v10; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = nptr;
  if ( nptr || (v4 = getenv("BLOCK_SIZE")) != 0LL || (v4 = getenv("BLOCKSIZE")) != 0LL )
  {
    v5 = 0;
    if ( *v4 == 39 )
    {
      ++v4;
      v5 = 4;
    }
    v6 = sub_40ACF0(v4, (const char **)off_41D8A0, (char *)dword_41D890, 4uLL);
    if ( v6 >= 0 )
    {
      *v3 = 1LL;
      v7 = dword_41D890[v6] | v5;
      result = 0LL;
      *a2 = v7;
      return result;
    }
    result = sub_4132B0(v4);
    if ( (_DWORD)result )
    {
      *a2 = 0;
      v9 = *v3;
LABEL_15:
      if ( !v9 )
      {
        *v3 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? 1024LL : 512LL;
        result = 4LL;
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
    v9 = *v3;
    *a2 = v5;
    goto LABEL_15;
  }
  result = (__int64)getenv("POSIXLY_CORRECT");
  if ( result )
  {
    *v3 = 512LL;
    result = 0LL;
  }
  else
  {
    *v3 = 1024LL;
  }
  *a2 = 0;
  return result;
}

__int64 __fastcall sub_40E160(__uid_t a1)
{
  __int64 v1; // rbx
  __uid_t v2; // ebp
  char *v3; // r12
  struct passwd *v4; // rax
  size_t v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax

  v1 = qword_6257B8;
  if ( qword_6257B8 )
  {
    if ( a1 == *(_DWORD *)qword_6257B8 )
      goto LABEL_9;
    while ( 1 )
    {
      v1 = *(_QWORD *)(v1 + 8);
      if ( !v1 )
        break;
      if ( *(_DWORD *)v1 == a1 )
        goto LABEL_9;
    }
  }
  v2 = a1;
  v3 = "";
  v4 = getpwuid(a1);
  v5 = 24LL;
  if ( v4 )
  {
    v3 = v4->pw_name;
    v5 = (strlen(v4->pw_name) + 24) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v6 = sub_412980(v5);
  *(_DWORD *)v6 = v2;
  v1 = v6;
  strcpy((char *)(v6 + 16), v3);
  v7 = qword_6257B8;
  qword_6257B8 = v1;
  *(_QWORD *)(v1 + 8) = v7;
LABEL_9:
  result = 0LL;
  if ( *(_BYTE *)(v1 + 16) )
    result = v1 + 16;
  return result;
}

__int64 __fastcall sub_40E2F0(__gid_t a1)
{
  __int64 v1; // rbx
  __gid_t v2; // ebp
  char *v3; // r12
  struct group *v4; // rax
  size_t v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax

  v1 = qword_6257A8;
  if ( qword_6257A8 )
  {
    if ( a1 == *(_DWORD *)qword_6257A8 )
      goto LABEL_9;
    while ( 1 )
    {
      v1 = *(_QWORD *)(v1 + 8);
      if ( !v1 )
        break;
      if ( *(_DWORD *)v1 == a1 )
        goto LABEL_9;
    }
  }
  v2 = a1;
  v3 = "";
  v4 = getgrgid(a1);
  v5 = 24LL;
  if ( v4 )
  {
    v3 = v4->gr_name;
    v5 = (strlen(v4->gr_name) + 24) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v6 = sub_412980(v5);
  *(_DWORD *)v6 = v2;
  v1 = v6;
  strcpy((char *)(v6 + 16), v3);
  v7 = qword_6257A8;
  qword_6257A8 = v1;
  *(_QWORD *)(v1 + 8) = v7;
LABEL_9:
  result = 0LL;
  if ( *(_BYTE *)(v1 + 16) )
    result = v1 + 16;
  return result;
}

__int64 __fastcall sub_40E480(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // eax

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v4 = 10 * (unsigned __int64)(a1 / 10) + 48 - a1;
      a1 /= 10LL;
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
      *(_BYTE *)--v2 = a1 % 0xAuLL + 48;
      a1 /= 0xAuLL;
    }
    while ( a1 );
    result = v2;
  }
  return result;
}

__int64 __fastcall sub_40E520(unsigned __int64 a1, __int64 a2)
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

__int64 __fastcall sub_40E570(const char *a1, _BYTE *a2, __int64 a3, size_t *a4, int a5, char a6)
{
  size_t *v6; // r13
  char v7; // bp
  _BYTE *v8; // rbx
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r15
  char *v12; // r12
  size_t v13; // rdx
  size_t v14; // rax
  int v15; // esi
  size_t v16; // r13
  size_t v17; // r15
  unsigned __int64 v18; // rbp
  _BYTE *v19; // rdi
  size_t v20; // rdx
  _BYTE *v21; // rax
  _BYTE *v22; // rdx
  __int64 v23; // r13
  size_t v25; // r12
  size_t v26; // rax
  size_t v27; // r15
  wint_t v28; // edi
  __int64 v29; // rdx
  char *v30; // rax
  wchar_t *v31; // r14
  wchar_t v32; // edi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  wchar_t *ptr; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  int v37; // [rsp+14h] [rbp-54h]
  void *src; // [rsp+18h] [rbp-50h]
  void *srca; // [rsp+18h] [rbp-50h]
  __int64 size; // [rsp+20h] [rbp-48h]
  char sizea; // [rsp+20h] [rbp-48h]
  __int64 sizeb; // [rsp+20h] [rbp-48h]
  _DWORD *v43; // [rsp+28h] [rbp-40h]

  v6 = a4;
  v7 = a6;
  v8 = a2;
  src = (void *)a1;
  v36 = a3;
  v37 = a5;
  v9 = strlen(a1);
  v10 = v9;
  if ( v7 & 2 || (v25 = v9, __ctype_get_mb_cur_max() <= 1) )
  {
LABEL_2:
    ptr = 0LL;
    v11 = v10;
    v12 = 0LL;
    goto LABEL_3;
  }
  v26 = mbstowcs(0LL, a1, 0LL);
  if ( v26 == -1LL )
  {
    if ( !(v7 & 1) )
    {
LABEL_36:
      v12 = 0LL;
      v23 = -1LL;
      free(0LL);
      goto LABEL_28;
    }
    goto LABEL_2;
  }
  v27 = v26 + 1;
  size = v26 + 1;
  ptr = (wchar_t *)malloc(size * 4);
  if ( !ptr )
  {
    v11 = v10;
    v12 = 0LL;
    if ( !(v7 & 1) )
      goto LABEL_36;
LABEL_3:
    v13 = *v6;
    if ( *v6 < v11 )
    {
      v10 = *v6;
      v14 = 0LL;
      goto LABEL_5;
    }
LABEL_30:
    if ( v11 < v13 )
    {
      v15 = v37;
      v14 = v13 - v11;
      *v6 = v11;
      if ( v37 )
      {
LABEL_6:
        v16 = 0LL;
        if ( v15 != 1 )
        {
          v16 = v14 >> 1;
          v14 = (v14 >> 1) + (v14 & 1);
        }
        goto LABEL_8;
      }
LABEL_32:
      v16 = v14;
      v14 = 0LL;
LABEL_8:
      v17 = v14 + v10;
      if ( v7 & 4 )
      {
        v17 = v10;
        v14 = 0LL;
      }
      if ( v7 & 8 )
        v16 = 0LL;
      if ( v36 )
      {
        v18 = (unsigned __int64)&v8[v36 - 1];
        v19 = v8;
        if ( (unsigned __int64)v8 < v18 && v14 )
        {
          do
            *(++v19 - 1) = 32;
          while ( v14 + v8 - v19 && v18 > (unsigned __int64)v19 );
        }
        *v19 = 0;
        v20 = v18 - (_QWORD)v19;
        if ( v18 - (unsigned __int64)v19 > v10 )
          v20 = v10;
        v21 = mempcpy(v19, src, v20);
        v22 = v21;
        if ( v18 > (unsigned __int64)v21 && v16 )
        {
          do
            *(++v22 - 1) = 32;
          while ( &v21[v16 - (_QWORD)v22] && v18 > (unsigned __int64)v22 );
        }
        *v22 = 0;
      }
      v23 = v17 + v16;
      goto LABEL_27;
    }
    v13 = v11;
    v14 = 0LL;
LABEL_5:
    v15 = v37;
    *v6 = v13;
    if ( v37 )
      goto LABEL_6;
    goto LABEL_32;
  }
  if ( !mbstowcs(ptr, a1, v27) )
  {
    v11 = v10;
    v12 = 0LL;
    goto LABEL_3;
  }
  ptr[size - 1] = 0;
  v28 = *ptr;
  v29 = (__int64)ptr;
  if ( *ptr )
  {
    sizea = 0;
    do
    {
      v43 = (_DWORD *)v29;
      if ( !iswprint(v28) )
      {
        *v43 = 65533;
        sizea = 1;
      }
      v29 = (__int64)(v43 + 1);
      v28 = v43[1];
    }
    while ( v43[1] );
    v11 = wcswidth(ptr, v27);
    if ( sizea )
    {
      sizeb = wcstombs(0LL, ptr, 0LL) + 1;
      v30 = (char *)malloc(sizeb);
      goto LABEL_46;
    }
  }
  else
  {
    v11 = wcswidth(ptr, v27);
  }
  v13 = *v6;
  if ( *v6 >= v11 )
  {
    v12 = 0LL;
    goto LABEL_30;
  }
  sizeb = v25 + 1;
  v30 = (char *)malloc(v25 + 1);
LABEL_46:
  v12 = v30;
  if ( v30 )
  {
    v31 = ptr;
    v32 = *ptr;
    srca = (void *)*v6;
    if ( *ptr )
    {
      v11 = 0LL;
      do
      {
        LODWORD(v33) = wcwidth(v32);
        if ( (_DWORD)v33 == -1 )
        {
          *v31 = 65533;
          v33 = 1LL;
        }
        else
        {
          v33 = (int)v33;
        }
        v34 = v11 + v33;
        if ( (unsigned __int64)srca < v34 )
          break;
        ++v31;
        v32 = *v31;
        v11 = v34;
      }
      while ( *v31 );
    }
    else
    {
      v31 = ptr;
      v11 = 0LL;
    }
    *v31 = 0;
    src = v12;
    v10 = wcstombs(v12, ptr, sizeb);
    goto LABEL_3;
  }
  if ( v7 & 1 )
    goto LABEL_3;
  v23 = -1LL;
LABEL_27:
  free(ptr);
LABEL_28:
  free(v12);
  return v23;
}

__int64 __fastcall sub_40E9B0(char *s, __int64 a2, char a3)
{
  char v3; // r15
  char *v4; // r13
  char *v5; // rbx
  unsigned int v6; // er12
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // eax
  int v12; // er15
  const unsigned __int16 *v13; // rdx
  unsigned __int16 v14; // ax
  wchar_t c; // [rsp+4h] [rbp-44h]
  mbstate_t ps; // [rsp+8h] [rbp-40h]

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
      if ( v14 & 0x4000 )
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
            v8 = sub_416E80(&c, v5);
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
              if ( (int)(0x7FFFFFFF - v6) < v10 )
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

__int64 __fastcall sub_40EB70(char *s, char a2)
{
  __int64 v2; // rax

  v2 = strlen(s);
  return sub_40E9B0(s, v2, a2);
}

void __fastcall sub_40EBA0(__int64 *a1, unsigned __int64 a2, __int64 *a3, int (__fastcall *a4)(__int64, __int64))
{
  int (__fastcall *v4)(__int64, __int64); // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 i; // r12
  __int64 *v11; // r15
  unsigned __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // [rsp+0h] [rbp-68h]
  unsigned __int64 v16; // [rsp+0h] [rbp-68h]
  unsigned __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 *v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+28h] [rbp-40h]

  v4 = a4;
  v18 = a3;
  if ( a2 > 2 )
  {
    v17 = a2 >> 1;
    v20 = &a1[a2 >> 1];
    sub_40EBA0(v20, a2 - (a2 >> 1), a3, a4);
    if ( a2 == 3 )
    {
      v7 = *a1;
      *v18 = *a1;
    }
    else
    {
      v11 = v18;
      v12 = a2 >> 2;
      v19 = a2 >> 2;
      sub_40EBA0(&a1[a2 >> 2], v17 - (a2 >> 2), v18, v4);
      sub_40EBA0(a1, a2 >> 2, v18, v4);
      v16 = 0LL;
      v13 = *a1;
      v14 = a1[a2 >> 2];
      while ( 1 )
      {
        while ( 1 )
        {
          ++v11;
          if ( v4(v13, v14) <= 0 )
            break;
          *(v11 - 1) = v14;
          if ( v17 == ++v12 )
            goto LABEL_22;
          v14 = a1[v12];
        }
        ++v16;
        *(v11 - 1) = v13;
        if ( v19 == v16 )
          break;
        v13 = a1[v16];
      }
      v16 = v12;
      v19 = a2 >> 1;
LABEL_22:
      memcpy(v11, &a1[v16], 8 * (v19 - v16));
      v7 = *v18;
    }
    v15 = 0LL;
    v8 = 0LL;
    v9 = a2 >> 1;
    for ( i = *v20; ; i = a1[v9] )
    {
      while ( 1 )
      {
        ++v8;
        if ( v4(v7, i) > 0 )
          break;
        ++v15;
        a1[v8 - 1] = v7;
        if ( v17 == v15 )
          return;
        v7 = v18[v15];
      }
      a1[v8 - 1] = i;
      if ( a2 == ++v9 )
        break;
    }
    memcpy(&a1[v8], &v18[v15], 8 * (v17 - v15));
  }
  else if ( a2 == 2 )
  {
    v5 = a1[1];
    v6 = *a1;
    if ( a4(*a1, a1[1]) > 0 )
    {
      *a1 = v5;
      a1[1] = v6;
    }
  }
}

void __fastcall sub_40EDD0(__int64 *a1, unsigned __int64 a2, int (__fastcall *a3)(__int64, __int64))
{
  sub_40EBA0(a1, a2, &a1[a2], a3);
}

__int64 __fastcall sub_40EDE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_tolower_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_40EE30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_toupper_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __usercall sub_40EE80(void *s, unsigned __int64 a2, const __m128i *a3, __int64 a4, char a5, __int64 a6, int a7)
{
  char *v7; // r15
  char *v8; // rbx
  __int64 v9; // r12
  int v10; // er11
  char v11; // al
  __int64 v12; // r14
  char *v13; // r8
  char v15; // r11
  __int64 v16; // r8
  int i; // er12
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  bool v21; // cc
  int v22; // ebp
  unsigned int v23; // eax
  int v24; // edi
  char *v25; // rax
  char *v26; // r8
  char v27; // r13
  size_t v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rbx
  size_t v32; // rdx
  char *v33; // rdi
  char *v34; // rsi
  size_t v35; // rdx
  char *v36; // rdi
  unsigned __int64 v37; // rcx
  __int64 v38; // r13
  __m128i v39; // xmm4
  __m128i v40; // xmm2
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rcx
  int v45; // edx
  unsigned int v46; // eax
  int v47; // er10
  char *v48; // rcx
  unsigned __int64 v49; // rax
  size_t v50; // r9
  unsigned __int64 v51; // r9
  size_t v52; // rdx
  char *v53; // rdi
  unsigned __int64 v54; // r10
  int v55; // eax
  unsigned __int64 v56; // rsi
  size_t v57; // rdx
  char *v58; // rdi
  __int32 v59; // er10
  __int32 v60; // er13
  int v61; // edi
  int v62; // er8
  int v63; // eax
  int v64; // er13
  int v65; // er13
  int v66; // edi
  unsigned int v67; // esi
  int v68; // edi
  unsigned int v69; // er8
  unsigned __int64 v70; // r13
  int v71; // eax
  unsigned __int64 v72; // rsi
  char v73; // r11
  char v74; // r8
  size_t v75; // rdx
  char *v76; // rdi
  int v77; // esi
  unsigned __int64 v78; // r13
  size_t v79; // rdx
  char *v80; // rdi
  char *v81; // rcx
  __int64 v82; // rax
  unsigned __int64 v83; // rsi
  size_t v84; // rdx
  char *v85; // rdi
  size_t v86; // rdx
  char *v87; // rdi
  int v88; // esi
  int v89; // edi
  int v90; // edx
  __int64 v91; // rax
  char *v92; // r9
  size_t v93; // rcx
  size_t v94; // rax
  size_t v95; // rdx
  char *v96; // rdi
  size_t v97; // rcx
  __int64 j; // r13
  __int64 v99; // rsi
  int v100; // eax
  int v101; // esi
  char v102; // cl
  int v103; // esi
  size_t v104; // rdx
  char *v105; // rdi
  int v106; // eax
  int v107; // eax
  char v108; // al
  char v109; // cl
  unsigned __int64 v110; // r12
  unsigned __int64 v111; // r8
  size_t v112; // rdx
  __int64 v113; // r12
  char *v114; // rdi
  int v115; // eax
  unsigned __int64 v116; // rcx
  char *v117; // rdi
  int v118; // esi
  int v119; // edx
  int v120; // er10
  int v121; // esi
  int k; // edi
  __int32 v123; // esi
  bool v124; // sf
  bool v125; // of
  int v126; // eax
  int v127; // eax
  int v128; // esi
  int v129; // esi
  __int64 v130; // [rsp+0h] [rbp-4C8h]
  const __m128i *tp; // [rsp+8h] [rbp-4C0h]
  char *v132; // [rsp+20h] [rbp-4A8h]
  char v133; // [rsp+2Bh] [rbp-49Dh]
  int v134; // [rsp+2Ch] [rbp-49Ch]
  char *v135; // [rsp+30h] [rbp-498h]
  char v136; // [rsp+30h] [rbp-498h]
  unsigned __int64 v137; // [rsp+30h] [rbp-498h]
  char v138; // [rsp+30h] [rbp-498h]
  int v139; // [rsp+30h] [rbp-498h]
  char v140; // [rsp+30h] [rbp-498h]
  char v141; // [rsp+30h] [rbp-498h]
  size_t v142; // [rsp+30h] [rbp-498h]
  char v143; // [rsp+30h] [rbp-498h]
  size_t v144; // [rsp+30h] [rbp-498h]
  int v145; // [rsp+30h] [rbp-498h]
  char v146; // [rsp+40h] [rbp-488h]
  char *v147; // [rsp+40h] [rbp-488h]
  char *v148; // [rsp+40h] [rbp-488h]
  char v149; // [rsp+40h] [rbp-488h]
  char *v150; // [rsp+40h] [rbp-488h]
  char v151; // [rsp+40h] [rbp-488h]
  char v152; // [rsp+40h] [rbp-488h]
  char v153; // [rsp+40h] [rbp-488h]
  char *v154; // [rsp+40h] [rbp-488h]
  char *v155; // [rsp+40h] [rbp-488h]
  char v156; // [rsp+40h] [rbp-488h]
  char *v157; // [rsp+40h] [rbp-488h]
  char v158; // [rsp+40h] [rbp-488h]
  int v159; // [rsp+48h] [rbp-480h]
  unsigned __int64 v160; // [rsp+48h] [rbp-480h]
  char *v161; // [rsp+48h] [rbp-480h]
  unsigned __int64 v162; // [rsp+48h] [rbp-480h]
  char v163; // [rsp+48h] [rbp-480h]
  char *v164; // [rsp+48h] [rbp-480h]
  char *v165; // [rsp+48h] [rbp-480h]
  char v166; // [rsp+48h] [rbp-480h]
  int v167; // [rsp+48h] [rbp-480h]
  char v168; // [rsp+48h] [rbp-480h]
  unsigned __int64 v169; // [rsp+50h] [rbp-478h]
  int v170; // [rsp+50h] [rbp-478h]
  size_t v171; // [rsp+50h] [rbp-478h]
  unsigned __int64 v172; // [rsp+50h] [rbp-478h]
  int v173; // [rsp+50h] [rbp-478h]
  size_t v174; // [rsp+58h] [rbp-470h]
  char *v175; // [rsp+58h] [rbp-470h]
  char v176; // [rsp+58h] [rbp-470h]
  unsigned __int64 v177; // [rsp+58h] [rbp-470h]
  unsigned __int64 v178; // [rsp+58h] [rbp-470h]
  unsigned __int64 v179; // [rsp+60h] [rbp-468h]
  char format[2]; // [rsp+70h] [rbp-458h]
  char v181; // [rsp+72h] [rbp-456h]
  char v182; // [rsp+73h] [rbp-455h]
  char v183[9]; // [rsp+87h] [rbp-441h]
  char sa[16]; // [rsp+90h] [rbp-438h]
  __m128i v185; // [rsp+A0h] [rbp-428h]
  __m128i v186; // [rsp+B0h] [rbp-418h]
  __int64 v187; // [rsp+C0h] [rbp-408h]

  v7 = (char *)s;
  v8 = (char *)a2;
  v9 = a3[3].m128i_i64[0];
  v10 = a3->m128i_i64[1];
  v130 = a4;
  tp = a3;
  if ( !v9 )
    v9 = 4305034LL;
  v133 = a5;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = *(_BYTE *)a2;
  v12 = 0LL;
  if ( !*(_BYTE *)a2 )
  {
LABEL_13:
    if ( v7 && v130 )
      *v7 = 0;
    return v12;
  }
  v134 = v10;
  v132 = (char *)v9;
  while ( v11 != 37 )
  {
    a2 = v130 - v12;
    if ( (unsigned __int64)(v130 - v12) <= 1 )
      return 0LL;
    if ( v7 )
      *v7++ = v11;
    ++v12;
    v13 = v8;
LABEL_12:
    v11 = v13[1];
    v8 = v13 + 1;
    if ( !v11 )
      goto LABEL_13;
  }
  v15 = v133;
  v16 = 0LL;
LABEL_22:
  for ( i = 0; ; i = v18 )
  {
    v18 = *++v8;
    v19 = v18;
    v20 = v18;
    v21 = *v8 <= 48;
    if ( *v8 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !v21 )
    {
      if ( (_BYTE)v18 == 94 )
      {
        v15 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v18 != 95 )
      {
        v22 = -1;
        if ( v18 - 48 > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v18 != 35 )
      break;
    v18 = *++v8;
    v16 = 1LL;
    v19 = v18;
    v20 = v18;
    v21 = *v8 <= 48;
    if ( *v8 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v18 == 45 )
    goto LABEL_26;
  v22 = -1;
  if ( v18 - 48 > 9 )
    goto LABEL_29;
LABEL_37:
  v22 = 0;
  while ( 1 )
  {
    v23 = v8[1];
    v19 = v23;
    a2 = v23 - 48;
    if ( v22 > 214748364 )
      break;
    v24 = *v8;
    if ( v22 == 214748364 && (char)v24 > 55 )
      break;
    ++v8;
    v22 = v24 + 10 * v22 - 48;
LABEL_41:
    if ( (unsigned int)a2 > 9 )
    {
      v20 = v23;
      goto LABEL_29;
    }
  }
  if ( (unsigned int)a2 <= 9 )
  {
    v23 = v8[2];
    v22 = 0x7FFFFFFF;
    v8 += 2;
    v19 = v23;
    a2 = v23 - 48;
    goto LABEL_41;
  }
  v20 = v23;
  ++v8;
  v22 = 0x7FFFFFFF;
LABEL_29:
  if ( (_BYTE)v19 == 69 || (_BYTE)v19 == 79 )
    v19 = (unsigned __int8)*++v8;
  else
    v20 = 0LL;
  switch ( (_BYTE)v19 )
  {
    case 0:
      v92 = v8 - 1;
      v102 = *(v8 - 1);
      goto LABEL_263;
    case 0x25:
      LODWORD(v94) = 0;
      v78 = 1LL;
      a2 = v130 - v12;
      if ( v22 >= 0 )
        LODWORD(v94) = v22;
      v94 = (int)v94;
      if ( (_DWORD)v94 )
        v78 = (int)v94;
      if ( (_DWORD)v20 )
      {
        v13 = v8;
        v92 = v8;
        v93 = 1LL;
        goto LABEL_244;
      }
      if ( v78 < a2 )
      {
        if ( v7 )
        {
          if ( v22 > 1 )
          {
            v104 = v22 - 1LL;
            v105 = v7;
            v7 += v104;
            if ( i == 48 )
              memset(v105, 48, v104);
            else
              memset(v105, 32, v104);
            LOBYTE(v19) = *v8;
          }
          *v7++ = v19;
        }
LABEL_176:
        v12 += v78;
        v13 = v8;
        goto LABEL_12;
      }
      return 0LL;
    case 0x3A:
      v108 = v8[1];
      a2 = (unsigned __int64)(v8 + 1);
      for ( j = 1LL; v108 == 58; a2 = (unsigned __int64)&v8[j] )
        v108 = v8[++j];
      if ( v108 != 122 )
        goto LABEL_238;
      v8 = (char *)a2;
      goto LABEL_254;
    case 0x41:
    case 0x42:
    case 0x61:
      if ( (_DWORD)v20 )
        goto LABEL_238;
      if ( (_BYTE)v16 )
        v15 = v16;
      goto LABEL_51;
    case 0x43:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_336;
      v140 = 0;
      v47 = 2;
      LOBYTE(v69) = tp[1].m128i_i32[1] < -1900;
      v67 = tp[1].m128i_i32[1] / 100
          + 19
          - ((tp[1].m128i_i32[1] / 100 + 19 > 0) & ((unsigned int)(tp[1].m128i_i32[1] % 100) >> 31));
      v68 = 0;
      goto LABEL_122;
    case 0x44:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_238;
    case 0x46:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_238;
    case 0x47:
    case 0x56:
    case 0x67:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v59 = tp[1].m128i_i32[3];
      v60 = tp[1].m128i_i32[2];
      v139 = tp[1].m128i_i32[1];
      v61 = v139 + ((v139 >> 31) & 0x190) - 100;
      v62 = v60 - 382 + 7 * ((v59 - v60 + 382) / 7) + 3;
      if ( v62 < 0 )
      {
        v118 = v139 + ((v139 >> 31) & 0x190) - 101;
        v119 = 365;
        if ( !(((_BYTE)v139 + ((v139 >> 31) & 0x90) - 101) & 3) )
        {
          v119 = 366;
          if ( v118 == 100 * (v118 / 100) )
            v119 = 366 - ((unsigned int)(v118 % 400) >= 1);
        }
        v120 = v119 + v59;
        v121 = v120 - v60;
        v65 = -1;
        v62 = v120 - (v121 + 382) + 7 * ((v121 + 382) / 7) + 3;
      }
      else
      {
        v63 = 365;
        if ( !(v61 & 3) )
        {
          v63 = 366;
          if ( v61 == 100 * (v61 / 100) )
            v63 = (v61 == 400 * (v61 / 400)) + 365;
        }
        v64 = v60 - 382 + 7 * ((v59 - v63 - v60 + 382) / 7) + 3;
        if ( v64 >= 0 )
          v62 = v64;
        v65 = (v64 >> 31) + 1;
      }
      if ( (_BYTE)v19 == 71 )
      {
        v123 = tp[1].m128i_i32[1];
        v140 = 0;
        v47 = 4;
        v125 = __OFSUB__(v123, -1900 - v65);
        v124 = v123 - (-1900 - v65) < 0;
        v67 = v123 + v65 + 1900;
        LOBYTE(v69) = v124 ^ v125;
        v68 = 0;
        goto LABEL_122;
      }
      if ( (_BYTE)v19 == 103 )
      {
        v47 = 2;
        v66 = (v65 + v139 % 100) % 100;
        v67 = v66;
        if ( v66 < 0 )
        {
          v67 = v66 + 100;
          if ( v139 < -1900 - v65 )
            v67 = -v66;
        }
      }
      else
      {
        v47 = 2;
        v67 = v62 / 7 + 1;
      }
      goto LABEL_121;
    case 0x48:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = tp->m128i_i64[1];
      goto LABEL_121;
    case 0x49:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = v134;
      v47 = 2;
      goto LABEL_121;
    case 0x4D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = HIDWORD(tp->m128i_i64[0]);
      goto LABEL_121;
    case 0x4E:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      if ( v22 == -1 )
      {
        v67 = a7;
        v22 = 9;
        v47 = 9;
      }
      else
      {
        if ( v22 > 8 )
        {
          v67 = a7;
        }
        else
        {
          v67 = a7;
          for ( k = v22; k != 9; ++k )
            v67 = (int)v67 / 10;
        }
        v47 = v22;
      }
      goto LABEL_121;
    case 0x50:
      v27 = 1;
      goto LABEL_152;
    case 0x52:
    case 0x54:
LABEL_94:
      v54 = sub_40EE80(0LL, a6, a7);
      v55 = 0;
      if ( v22 >= 0 )
        v55 = v22;
      v56 = v55;
      if ( v54 >= v55 )
        v56 = v54;
      if ( v130 - v12 <= v56 )
        return 0LL;
      if ( v7 )
      {
        if ( v54 < v55 )
        {
          v169 = v54;
          v57 = v22 - v54;
          v58 = v7;
          v7 += v57;
          if ( i == 48 )
            memset(v58, 48, v57);
          else
            memset(v58, 32, v57);
          v54 = v169;
        }
        v162 = v54;
        sub_40EE80(v7, a6, a7);
        v7 += v162;
      }
      v12 += v56;
      v13 = v8;
      goto LABEL_12;
    case 0x53:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = tp->m128i_i64[0];
      goto LABEL_121;
    case 0x55:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v89 = tp[1].m128i_i32[3] - tp[1].m128i_i32[2] + 7;
      v90 = (unsigned __int64)(-1840700269LL * v89) >> 32;
      goto LABEL_228;
    case 0x57:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v89 = 7 * ((tp[1].m128i_i32[2] + 6) / 7) - (tp[1].m128i_i32[2] + 6) + tp[1].m128i_i32[3] + 7;
      v90 = (unsigned __int64)(-1840700269LL * v89) >> 32;
LABEL_228:
      v47 = 2;
      v67 = ((v90 + v89) >> 2) - (v89 >> 31);
      goto LABEL_121;
    case 0x58:
    case 0x63:
    case 0x78:
      if ( (_DWORD)v20 != 79 )
        goto LABEL_69;
      goto LABEL_238;
    case 0x59:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_336;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_238;
      v140 = 0;
      v47 = 4;
      v88 = tp[1].m128i_i32[1];
      LOBYTE(v69) = v88 < -1900;
      v67 = v88 + 1900;
      v68 = 0;
      goto LABEL_222;
    case 0x5A:
      v163 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
      v151 = v15;
      v70 = strlen(v132);
      v71 = 0;
      if ( v22 >= 0 )
        v71 = v22;
      v72 = v71;
      if ( v70 >= v71 )
        v72 = v70;
      a2 = v130 - v12;
      if ( v130 - v12 <= v72 )
        return 0LL;
      if ( v7 )
      {
        v73 = v151;
        v74 = v163;
        if ( v70 < v71 )
        {
          v75 = v22 - v70;
          v76 = v7;
          v7 += v75;
          if ( i == 48 )
          {
            memset(v76, 48, v75);
            v73 = v151;
            v74 = v163;
          }
          else
          {
            memset(v76, 32, v75);
            v74 = v163;
            v73 = v151;
          }
        }
        if ( v74 )
        {
          sub_40EDE0((__int64)v7, (__int64)v132, v70);
        }
        else if ( v73 )
        {
          sub_40EE30((__int64)v7, (__int64)v132, v70);
        }
        else
        {
          memcpy(v7, v132, v70);
        }
        v7 += v70;
      }
      v12 += v72;
      v13 = v8;
      goto LABEL_12;
    case 0x62:
    case 0x68:
      if ( (_BYTE)v16 )
        v15 = v16;
      if ( (_DWORD)v20 )
        goto LABEL_238;
LABEL_51:
      v25 = &v181;
      v26 = v8;
      v27 = 0;
      *(_WORD *)format = 9504;
      LODWORD(v20) = 0;
      goto LABEL_52;
    case 0x64:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = HIDWORD(tp->m128i_i64[1]);
      goto LABEL_121;
    case 0x65:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = HIDWORD(tp->m128i_i64[1]);
      goto LABEL_159;
    case 0x6A:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v140 = 0;
      v47 = 3;
      v103 = tp[1].m128i_i32[3];
      LOBYTE(v69) = v103 < -1;
      v67 = v103 + 1;
      v68 = 0;
      goto LABEL_122;
    case 0x6B:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = tp->m128i_i64[1];
      goto LABEL_159;
    case 0x6C:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = v134;
LABEL_159:
      v47 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_121;
    case 0x6D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v140 = 0;
      v47 = 2;
      v77 = tp[1].m128i_i32[0];
      LOBYTE(v69) = v77 < -1;
      v67 = v77 + 1;
      v68 = 0;
      goto LABEL_122;
    case 0x6E:
      LODWORD(v78) = 0;
      if ( v22 >= 0 )
        LODWORD(v78) = v22;
      v78 = (int)v78;
      if ( !(_DWORD)v78 )
        v78 = 1LL;
      if ( v130 - v12 <= v78 )
        return 0LL;
      if ( v7 )
      {
        if ( v22 > 1 )
        {
          v79 = v22 - 1LL;
          v80 = v7;
          v7 += v79;
          if ( i == 48 )
            memset(v80, 48, v79);
          else
            memset(v80, 32, v79);
        }
        *v7++ = 10;
      }
      goto LABEL_176;
    case 0x70:
      v27 = 0;
LABEL_152:
      LOBYTE(v19) = 112;
      if ( (_BYTE)v16 )
        v27 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
      goto LABEL_70;
    case 0x71:
      v47 = 1;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_124;
      v140 = 0;
      LOBYTE(v69) = 0;
      v68 = 0;
      v67 = ((11 * tp[1].m128i_i32[0]) >> 5) + 1;
      goto LABEL_179;
    case 0x72:
LABEL_69:
      v27 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !(_DWORD)v20 )
      {
        v26 = v8;
        v25 = &v181;
        goto LABEL_52;
      }
      v47 = 0;
      goto LABEL_125;
    case 0x73:
      v149 = v15;
      v38 = (__int64)v183;
      v39 = _mm_loadu_si128(tp + 2);
      v40 = _mm_loadu_si128(tp + 1);
      v41 = tp[3].m128i_i64[0];
      *(__m128i *)sa = _mm_loadu_si128(tp);
      v185 = v40;
      v186 = v39;
      v187 = v41;
      v42 = sub_4177A0(a6, sa, a2, v19, v16, v20);
      v15 = v149;
      v43 = v42;
      v44 = v42;
      do
      {
        v45 = v44 % 10;
        v44 /= 10LL;
        v46 = 48 - v45;
        a2 = (unsigned int)(v45 + 48);
        if ( v43 < 0 )
          a2 = v46;
        *(_BYTE *)--v38 = a2;
      }
      while ( v44 );
      v47 = 1;
      if ( v22 > 0 )
        v47 = v22;
      if ( v43 >= 0 )
        goto LABEL_79;
      goto LABEL_300;
    case 0x74:
      LODWORD(v78) = 0;
      if ( v22 >= 0 )
        LODWORD(v78) = v22;
      v78 = (int)v78;
      if ( !(_DWORD)v78 )
        v78 = 1LL;
      if ( v130 - v12 <= v78 )
        return 0LL;
      if ( v7 )
      {
        if ( v22 > 1 )
        {
          v86 = v22 - 1LL;
          v87 = v7;
          v7 += v86;
          if ( i == 48 )
            memset(v87, 48, v86);
          else
            memset(v87, 32, v86);
        }
        *v7++ = 9;
      }
      goto LABEL_176;
    case 0x75:
      v47 = 1;
      v67 = (tp[1].m128i_i32[2] + 6) % 7 + 1;
      goto LABEL_121;
    case 0x77:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 1;
      v67 = tp[1].m128i_u32[2];
      goto LABEL_121;
    case 0x79:
      if ( (_DWORD)v20 == 69 )
      {
LABEL_336:
        v47 = 0;
        goto LABEL_124;
      }
      v47 = 2;
      v106 = tp[1].m128i_i32[1] % 100;
      v67 = v106;
      if ( v106 < 0 )
      {
        v107 = -v106;
        v67 += 100;
        if ( tp[1].m128i_i32[1] <= -1901 )
          v67 = v107;
      }
LABEL_121:
      v140 = 0;
      v68 = 0;
      v69 = v67 >> 31;
LABEL_122:
      if ( (_DWORD)v20 == 79 )
      {
        if ( (_BYTE)v69 )
          goto LABEL_223;
LABEL_124:
        v27 = 0;
        *(_WORD *)format = 9504;
LABEL_125:
        v181 = v20;
        v26 = v8;
        LODWORD(v20) = v47;
        v25 = &v182;
LABEL_52:
        *v25 = v19;
        v25[1] = 0;
        v135 = v26;
        v159 = v20;
        v146 = v15;
        v28 = strftime(sa, 0x400uLL, format, (const struct tm *)tp);
        v13 = v135;
        if ( v28 )
        {
          v29 = v28 - 1;
          v30 = 0;
          if ( v22 >= 0 )
            v30 = v22;
          v31 = v30;
          if ( v29 >= v30 )
            v31 = v29;
          a2 = v130 - v12;
          if ( v130 - v12 > v31 )
          {
            if ( v7 )
            {
              v15 = v146;
              if ( !v159 && v29 < v30 )
              {
                v160 = v29;
                v32 = v22 - v29;
                v147 = v135;
                v136 = v15;
                v33 = v7;
                v7 += v32;
                if ( i == 48 )
                {
                  memset(v33, 48, v32);
                  v15 = v136;
                  v13 = v147;
                  v29 = v160;
                }
                else
                {
                  memset(v33, 32, v32);
                  v29 = v160;
                  v13 = v147;
                  v15 = v136;
                }
              }
              v148 = v13;
              v34 = &sa[1];
              v35 = v29;
              v36 = v7;
              v137 = v29;
              if ( !v27 )
                goto LABEL_64;
              sub_40EDE0((__int64)v7, (__int64)&sa[1], v29);
              v37 = v137;
              v13 = v148;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_222:
      if ( (_BYTE)v69 )
LABEL_223:
        v67 = -v67;
LABEL_179:
      v81 = v183;
      while ( 1 )
      {
        v38 = (__int64)(v81 - 1);
        if ( v68 & 1 )
        {
          v82 = (__int64)(v81 - 2);
          *--v81 = 58;
          v38 = v82;
        }
        v68 >>= 1;
        a2 = v67 / 0xA;
        *(v81 - 1) = v67 % 0xA + 48;
        v81 = (char *)v38;
        if ( v67 <= 9 && !v68 )
          break;
        v67 /= 0xAu;
      }
      if ( v47 < v22 )
        v47 = v22;
      if ( (_BYTE)v69 )
      {
LABEL_300:
        v141 = 45;
        v109 = 45;
        if ( i == 45 )
          goto LABEL_301;
LABEL_191:
        v48 = &v183[-v38];
        LODWORD(v50) = v47 - 1 - (unsigned __int64)&v183[-v38];
        v49 = v130 - v12;
        if ( (int)v50 <= 0 )
        {
          LODWORD(v51) = 0;
          v111 = 1LL;
          if ( v22 >= 0 )
            LODWORD(v51) = v22;
          v51 = (int)v51;
          if ( (_DWORD)v51 )
            v111 = (int)v51;
          if ( v111 >= v49 )
            return 0LL;
          if ( v7 )
          {
            if ( !v47 && (unsigned __int64)(int)v51 > 1 )
            {
              v112 = v22 - 1LL;
              v179 = v111;
              v177 = (int)v51;
              v157 = &v7[v112];
              v166 = v15;
              if ( i == 48 )
              {
                memset(v7, 48, v112);
                v7 = v157;
                v15 = v166;
                v47 = 0;
                v51 = v177;
                v111 = v179;
                v48 = &v183[-v38];
              }
              else
              {
                memset(v7, 32, v112);
                v7 = v157;
                v48 = &v183[-v38];
                v111 = v179;
                v51 = v177;
                v47 = 0;
                v15 = v166;
              }
            }
            *(++v7 - 1) = v141;
          }
          v12 += v111;
          v13 = v8;
          v49 = v130 - v12;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v47 >= v49 )
            return 0LL;
          LODWORD(a2) = 0;
          v83 = 1LL;
          if ( v22 >= 0 )
            LODWORD(a2) = v22;
          a2 = (int)a2;
          if ( (_DWORD)a2 )
            v83 = (int)a2;
          if ( v83 >= v49 )
            return 0LL;
          v12 += v83;
          v50 = (int)v50;
          v13 = v8;
          if ( !v7 )
            goto LABEL_207;
          if ( !v47 && (unsigned __int64)(int)a2 > 1 )
          {
            v174 = (int)v50;
            v84 = v22 - 1LL;
            v152 = v15;
            v85 = v7;
            v7 += v84;
            if ( i == 48 )
            {
              memset(v85, 48, v84);
              v15 = v152;
              v47 = 0;
              v48 = &v183[-v38];
              v50 = v174;
            }
            else
            {
              memset(v85, 32, v84);
              v50 = v174;
              v48 = &v183[-v38];
              v47 = 0;
              v15 = v152;
            }
          }
          ++v7;
          v13 = v8;
          *(v7 - 1) = v141;
LABEL_205:
          if ( v7 )
          {
            v175 = v48;
            v170 = v47;
            v164 = v13;
            v153 = v15;
            v142 = v50;
            memset(v7, 48, v50);
            v50 = v142;
            v48 = v175;
            v47 = v170;
            v13 = v164;
            v15 = v153;
            v7 += v142;
          }
LABEL_207:
          v12 += v50;
          v22 = 0;
          v51 = 0LL;
          v49 = v130 - v12;
          goto LABEL_84;
        }
LABEL_328:
        v113 = (int)v50;
        if ( (int)v50 >= v49 )
          return 0LL;
        if ( v7 )
        {
          v114 = v7;
          v173 = v50;
          v167 = v47;
          v7 += (int)v50;
          v158 = v15;
          memset(v114, 32, (int)v50);
          LODWORD(v50) = v173;
          v47 = v167;
          v15 = v158;
        }
        v12 += v113;
        v115 = v22 - v50;
        v21 = (int)v50 < v22;
        v22 = 0;
        if ( v21 )
          v22 = v115;
        v49 = v130 - v12;
        if ( v141 )
        {
          v51 = v22;
          v116 = 1LL;
          if ( v22 )
            v116 = v22;
          if ( v116 >= v49 )
            return 0LL;
          if ( v7 )
          {
            if ( !v47 && (unsigned __int64)v22 > 1 )
            {
              v117 = v7;
              v178 = v116;
              v7 += v22 - 1;
              v168 = v15;
              memset(v117, 32, v22 - 1LL);
              v116 = v178;
              v47 = 0;
              v15 = v168;
              v51 = v22;
            }
            *(++v7 - 1) = v141;
          }
          v12 += v116;
          v13 = v8;
          i = 95;
          v48 = &v183[-v38];
          v49 = v130 - v12;
        }
        else
        {
          v51 = v22;
          v13 = v8;
          i = 95;
          v48 = &v183[-v38];
        }
        goto LABEL_84;
      }
      if ( !v140 )
      {
LABEL_79:
        v48 = &v183[-v38];
        v49 = v130 - v12;
        if ( i == 45 || (LODWORD(v50) = v47 - (_DWORD)v48, v47 - (int)v48 <= 0) )
        {
          LODWORD(v51) = 0;
          v13 = v8;
          if ( v22 >= 0 )
            LODWORD(v51) = v22;
          v51 = (int)v51;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          a2 = v47;
          if ( v47 >= v49 )
            return 0LL;
          v50 = (int)v50;
          v13 = v8;
          goto LABEL_205;
        }
        v141 = 0;
        goto LABEL_328;
      }
      if ( i != 45 )
      {
        v141 = 43;
        goto LABEL_191;
      }
      v109 = 43;
LABEL_301:
      LODWORD(v51) = 0;
      v110 = 1LL;
      if ( v22 >= 0 )
        LODWORD(v51) = v22;
      v51 = (int)v51;
      if ( (_DWORD)v51 )
        v110 = (int)v51;
      if ( v130 - v12 <= v110 )
        return 0LL;
      if ( v7 )
      {
        if ( !v47 && (unsigned __int64)(int)v51 > 1 )
        {
          v176 = v109;
          v172 = (int)v51;
          v156 = v15;
          memset(v7, 32, v22 - 1LL);
          v109 = v176;
          v51 = v172;
          v47 = 0;
          v15 = v156;
          v7 += v22 - 1;
        }
        *v7++ = v109;
      }
      v12 += v110;
      v13 = v8;
      i = 45;
      v48 = &v183[-v38];
      v49 = v130 - v12;
LABEL_84:
      v31 = v51;
      if ( (unsigned __int64)v48 >= v51 )
        v31 = (unsigned __int64)v48;
      if ( v31 < v49 )
      {
        if ( v7 )
        {
          if ( !v47 && (unsigned __int64)v48 < v51 )
          {
            v161 = v48;
            v52 = v22 - (_QWORD)v48;
            v150 = v13;
            v138 = v15;
            v53 = v7;
            v7 += v52;
            if ( i == 48 )
            {
              memset(v53, 48, v52);
              v15 = v138;
              v13 = v150;
              v48 = v161;
            }
            else
            {
              memset(v53, 32, v52);
              v48 = v161;
              v13 = v150;
              v15 = v138;
            }
          }
          v148 = v13;
          v35 = (size_t)v48;
          v34 = (char *)v38;
          v36 = v7;
          v137 = (unsigned __int64)v48;
LABEL_64:
          if ( v15 )
          {
            sub_40EE30((__int64)v36, (__int64)v34, v35);
            v37 = v137;
            v13 = v148;
          }
          else
          {
            memcpy(v36, v34, v35);
            v13 = v148;
            v37 = v137;
          }
LABEL_66:
          v7 += v37;
        }
LABEL_67:
        v12 += v31;
        goto LABEL_12;
      }
      return 0LL;
    case 0x7A:
      j = 0LL;
LABEL_254:
      if ( tp[2].m128i_i32[0] < 0 )
      {
        v13 = v8;
        goto LABEL_12;
      }
      v99 = tp[2].m128i_i64[1];
      LOBYTE(v69) = 1;
      if ( (int)v99 >= 0 )
      {
        LOBYTE(v69) = 0;
        if ( !(_DWORD)v99 )
          LOBYTE(v69) = *v132 == 45;
      }
      v145 = (int)v99 / 3600;
      v100 = (int)v99 / 60 % 60;
      v68 = (int)v99 / 60 % 60;
      v101 = (int)v99 % 60;
      if ( j == 1 )
        goto LABEL_364;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_383;
        if ( j != 3 )
        {
          v102 = *v8;
          v92 = v8;
LABEL_263:
          LODWORD(v94) = 0;
          a2 = v130 - v12;
          if ( v22 >= 0 )
            LODWORD(v94) = v22;
          v94 = (int)v94;
          if ( v102 == 37 )
          {
            v78 = 1LL;
            v13 = v92;
            v93 = 1LL;
            if ( (_DWORD)v94 )
              v78 = (int)v94;
          }
          else
          {
            v8 = v92;
LABEL_238:
            v91 = (__int64)(v8 - 1);
            do
            {
              v92 = (char *)v91;
              LODWORD(v93) = (_DWORD)v8 - 1 + 2 - v91--;
            }
            while ( *(_BYTE *)(v91 + 1) != 37 );
            LODWORD(v94) = 0;
            v93 = (int)v93;
            v13 = v8;
            a2 = v130 - v12;
            if ( v22 >= 0 )
              LODWORD(v94) = v22;
            v94 = (int)v94;
            v78 = (int)v94;
            if ( (int)v93 >= (unsigned __int64)(int)v94 )
              v78 = (int)v93;
          }
LABEL_244:
          if ( a2 > v78 )
          {
            if ( v7 )
            {
              if ( v93 < v94 )
              {
                v171 = v93;
                v95 = v22 - v93;
                v165 = v13;
                v154 = v92;
                v143 = v15;
                v96 = v7;
                v7 += v95;
                if ( i == 48 )
                {
                  memset(v96, 48, v95);
                  v15 = v143;
                  v92 = v154;
                  v13 = v165;
                  v93 = v171;
                }
                else
                {
                  memset(v96, 32, v95);
                  v93 = v171;
                  v13 = v165;
                  v92 = v154;
                  v15 = v143;
                }
              }
              v155 = v13;
              v144 = v93;
              if ( v15 )
              {
                sub_40EE30((__int64)v7, (__int64)v92, v93);
                v97 = v144;
                v13 = v155;
              }
              else
              {
                memcpy(v7, v92, v93);
                v13 = v155;
                v97 = v144;
              }
              v7 += v97;
            }
            v12 += v78;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v101 )
        {
LABEL_383:
          v126 = 10000 * v145;
          v47 = 9;
          v140 = 1;
          v127 = 100 * v68 + v126;
          v68 = 20;
          v67 = v127 + v101;
        }
        else if ( v100 )
        {
LABEL_364:
          v128 = 100 * v145;
          v47 = 6;
          v140 = 1;
          v67 = v68 + v128;
          v68 = 4;
        }
        else
        {
          v67 = v145;
          v47 = 3;
          v140 = 1;
        }
      }
      else
      {
        v129 = 100 * v145;
        v68 = 0;
        v140 = 1;
        v47 = 5;
        v67 = v100 + v129;
      }
      goto LABEL_122;
    default:
      goto LABEL_238;
  }
}

__int64 __fastcall sub_410650(void *a1, __int64 a2, unsigned __int64 a3, const __m128i *a4, __int64 a5, int a6)
{
  return sub_40EE80(a1, a3, a4, a2, 0, a5, a6);
}

char *__fastcall sub_410670(const char *a1)
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
  qword_6257C0 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_410710(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_4179A0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_41DD29;
      if ( !v5 )
        v2 = (char *)&unk_41DD1E;
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
    v2 = (char *)&unk_41DD25;
    if ( !v5 )
      v2 = (char *)&unk_41DD22;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_410810(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v11; // er13
  int v12; // ebp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r11
  int v15; // er10
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r12
  int v19; // er11
  char *v20; // r8
  size_t v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rbp
  bool v24; // al
  int v25; // eax
  int v26; // eax
  char v27; // di
  const unsigned __int16 **v28; // rax
  char v29; // cl
  unsigned __int64 result; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  int v35; // er13
  bool v36; // dl
  bool v37; // dl
  bool v38; // al
  size_t v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r15
  const unsigned __int16 **v42; // r14
  char *v43; // rax
  int v44; // esi
  unsigned __int64 v45; // rcx
  unsigned __int8 v46; // di
  char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  char *v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v56; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v57; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+10h] [rbp-B8h]
  char v59; // [rsp+1Fh] [rbp-A9h]
  char *s; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  char *v62; // [rsp+30h] [rbp-98h]
  unsigned __int8 v63; // [rsp+30h] [rbp-98h]
  char *v64; // [rsp+30h] [rbp-98h]
  unsigned __int64 v65; // [rsp+30h] [rbp-98h]
  unsigned __int8 v66; // [rsp+38h] [rbp-90h]
  unsigned __int8 v67; // [rsp+38h] [rbp-90h]
  unsigned __int64 v68; // [rsp+38h] [rbp-90h]
  char v69; // [rsp+38h] [rbp-90h]
  int v70; // [rsp+38h] [rbp-90h]
  int v71; // [rsp+40h] [rbp-88h]
  unsigned __int64 v72; // [rsp+40h] [rbp-88h]
  int v73; // [rsp+40h] [rbp-88h]
  int v74; // [rsp+40h] [rbp-88h]
  _BYTE *v75; // [rsp+40h] [rbp-88h]
  int v76; // [rsp+48h] [rbp-80h]
  unsigned __int64 v77; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  __int64 v79; // [rsp+58h] [rbp-70h]
  size_t v80; // [rsp+60h] [rbp-68h]
  char v81; // [rsp+68h] [rbp-60h]
  bool v82; // [rsp+6Ch] [rbp-5Ch]
  char v83; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v84; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v85; // [rsp+70h] [rbp-58h]
  char *v86; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h]
  mbstate_t ps; // [rsp+88h] [rbp-40h]

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v55 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v55;
  switch ( v11 )
  {
    case 0:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v56 = 0;
        goto LABEL_212;
      }
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v56 = 1;
LABEL_212:
      if ( a2 )
      {
        v15 = 0;
        v38 = 0;
        v59 = 1;
        v79 = 0LL;
        goto LABEL_138;
      }
      v59 = 1;
      v15 = 0;
      v16 = 1LL;
      v11 = 2;
      v79 = 0LL;
      v83 = 0;
      v82 = 0;
      n = 1LL;
      s2 = "'";
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
          v35 = v19;
          v14 = v17;
          v36 = v35 == 2;
          if ( !v16 && v36 && v82 )
            return sub_410810((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_410810((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v38;
                goto LABEL_3;
              }
              v37 = v83;
            }
          }
          else
          {
            v37 = !v82;
          }
          if ( s2 )
          {
            if ( v37 )
            {
              v53 = *s2;
              if ( *s2 )
              {
                v54 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v53;
                  v53 = v54[++v16];
                }
                while ( v53 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v57 = v56 & (v19 != 2);
        if ( !(v56 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v71 = v19;
            v66 = v15;
            v21 = strlen(s);
            v19 = v71;
            v15 = v66;
            v20 = &s[v18];
            v17 = v21;
          }
          if ( v18 + n <= v17 )
          {
            v76 = v19;
            v72 = v17;
            v67 = v15;
            v62 = v20;
            v22 = memcmp(v20, s2, n);
            v20 = v62;
            v15 = v67;
            v17 = v72;
            v19 = v76;
            if ( !v22 )
            {
              if ( !v82 )
              {
                LOBYTE(v23) = *v62;
                switch ( *v62 )
                {
                  case 0:
                    goto LABEL_83;
                  case 7:
                    LOBYTE(v23) = 97;
                    goto LABEL_79;
                  case 8:
                    LODWORD(v13) = 0;
                    v11 = 0;
                    LOBYTE(v23) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_72;
                  case 10:
                    goto LABEL_68;
                  case 11:
                    goto LABEL_80;
                  case 12:
                    goto LABEL_77;
                  case 13:
                    goto LABEL_76;
                  case 32:
                    v33 = v57;
                    goto LABEL_128;
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
                  case 35:
                  case 126:
                    v34 = v57;
                    goto LABEL_125;
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
                    v33 = v57;
                    goto LABEL_123;
                  case 39:
                    goto LABEL_62;
                  case 63:
                    goto LABEL_58;
                  case 92:
                    goto LABEL_65;
                  case 123:
                  case 125:
                    goto LABEL_17;
                  default:
                    goto LABEL_98;
                }
              }
              return sub_410810((__int64)v9, v10, s);
            }
          }
        }
        LOBYTE(v23) = *v20;
        switch ( *v20 )
        {
          case 0:
            goto LABEL_81;
          case 7:
            LOBYTE(v23) = 97;
            goto LABEL_78;
          case 8:
            LOBYTE(v23) = 98;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v23) = 116;
            goto LABEL_69;
          case 10:
LABEL_68:
            LOBYTE(v23) = 110;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
            goto LABEL_29;
          case 11:
LABEL_80:
            LOBYTE(v23) = 118;
            goto LABEL_78;
          case 12:
LABEL_77:
            LOBYTE(v23) = 102;
LABEL_78:
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
LABEL_79:
            v11 = 0;
            goto LABEL_37;
          case 13:
            v57 = 0;
LABEL_76:
            LOBYTE(v23) = 13;
            v29 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 32:
            v33 = 0;
LABEL_128:
            LOBYTE(v23) = 32;
            goto LABEL_123;
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
            v57 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 35:
          case 126:
            v34 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v57;
              LODWORD(v13) = 0;
              v57 = v34;
              goto LABEL_23;
            }
            v57 = v34;
            v11 = 0;
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
            v33 = 0;
LABEL_123:
            v11 = v57;
            v57 = v33;
            v25 = 0;
            goto LABEL_25;
          case 39:
            v57 = 0;
            goto LABEL_62;
          case 63:
            v57 = 0;
            goto LABEL_58;
          case 92:
            v57 = 0;
            goto LABEL_65;
          case 123:
          case 125:
            v57 = 0;
            goto LABEL_17;
          default:
            v57 = 0;
            goto LABEL_98;
        }
LABEL_24:
        v25 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v23 >> 5)) >> v23) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
LABEL_29:
            v26 = v15 ^ 1;
            LOBYTE(v26) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & ((unsigned __int8)v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v26;
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
        if ( v57 )
          goto LABEL_28;
        ++v18;
        LODWORD(v28) = v15 & (v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v28 )
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
          v9[v16] = v23;
        v27 = v59;
        ++v16;
        if ( !(_BYTE)v11 )
          v27 = 0;
        v59 = v27;
      }
      LOBYTE(v23) = *v20;
      switch ( *v20 )
      {
        case 0:
          if ( !v56 )
          {
            if ( !(v81 & 1) )
            {
              v57 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v23) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_410810((__int64)v9, v10, s);
          v57 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v25 = v15 ^ 1;
          LOBYTE(v25) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v31 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v25;
              v11 = 0;
              LOBYTE(v23) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v31 = v16;
          if ( v10 > v16 )
          {
            v25 = v15;
LABEL_91:
            v9[v31] = 92;
            v15 = v25;
          }
          v16 = v31 + 1;
          if ( v19 == 2 )
          {
            v25 = v11;
            LOBYTE(v23) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v23) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v31 + 2 )
              v9[v31 + 2] = 48;
            v16 = v31 + 3;
            LOBYTE(v23) = 48;
          }
LABEL_95:
          v25 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | v56 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v23) = 7;
          v29 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v23) = 8;
          v29 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v23) = 9;
          v29 = 116;
          goto LABEL_104;
        case 10:
          LOBYTE(v23) = 10;
          v29 = 110;
          goto LABEL_104;
        case 11:
          LOBYTE(v23) = 11;
          v29 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 12:
          LOBYTE(v23) = 12;
          v29 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 13:
          LOBYTE(v23) = 13;
          v29 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v57 = v19 == 2 && v82;
          if ( v57 )
            return sub_410810((__int64)v9, v10, s);
          goto LABEL_66;
        case 32:
          LOBYTE(v23) = 32;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_21;
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
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
          goto LABEL_20;
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
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v23) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_410810((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            v13 = v10;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v10 = v79;
          }
          v83 = v11;
          v16 += 3LL;
          v25 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v23) = 39;
          v10 = v13;
          goto LABEL_49;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
            v11 = 0;
            v25 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v23) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v23 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v23 > 0x3Eu)
            || (v49 = 8070630310989004800LL, !_bittest64(&v49, v23)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_410810((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            LOBYTE(v23) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = v56;
          LOBYTE(v23) = 92;
          v29 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v56;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v56 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v23) = v29;
          v11 = 0;
          goto LABEL_28;
        case 123:
        case 125:
LABEL_17:
          v24 = v17 != 1;
          if ( v17 == -1LL )
            v24 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( v24 )
            goto LABEL_67;
LABEL_20:
          if ( v18 )
            goto LABEL_67;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_410810((__int64)v9, v10, s);
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v73 = v19;
            v68 = v17;
            v63 = v15;
            v28 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v23;
            v15 = v63;
            v17 = v68;
            v19 = v73;
            v32 = 1LL;
            LODWORD(v28) = (*v28)[(unsigned __int8)v23];
            LOWORD(v28) = (unsigned __int16)v28 & 0x4000;
            LOBYTE(v11) = (_WORD)v28 != 0;
            LOBYTE(v13) = v56 & ((_WORD)v28 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v74 = v19;
            v69 = v15;
            v64 = v20;
            v39 = strlen(s);
            v19 = v74;
            LOBYTE(v15) = v69;
            v20 = v64;
            v17 = v39;
          }
          v85 = v16;
          v86 = v20;
          v40 = 0LL;
          v84 = v15;
          v75 = v9;
          v77 = v10;
          v65 = v17;
          v70 = v19;
          break;
      }
      while ( 2 )
      {
        v41 = v18 + v40;
        v28 = (const unsigned __int16 **)sub_416E80((wchar_t *)&wc, &s[v18 + v40]);
        v42 = v28;
        if ( !v28 )
        {
LABEL_241:
          v32 = v40;
          v16 = v85;
          v15 = v84;
          v9 = v75;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LOBYTE(v13) = v56 & (v11 ^ 1);
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-1LL )
        {
          v32 = v40;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v75;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LODWORD(v13) = v56;
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-2LL )
        {
          v17 = v65;
          v50 = v18 + v40;
          v51 = &s[v18 + v40];
          v28 = (const unsigned __int16 **)v40;
          v32 = v40;
          v15 = v84;
          v16 = v85;
          v9 = v75;
          v10 = v77;
          v19 = v70;
          if ( v50 < v65 && *v51 )
          {
            do
              v28 = (const unsigned __int16 **)((char *)v28 + 1);
            while ( (unsigned __int64)v28 + v18 < v65 && *((_BYTE *)v28 + (_QWORD)v86) );
            v32 = (unsigned __int64)v28;
          }
          LODWORD(v13) = v56;
          v11 = 0;
LABEL_242:
          if ( v32 > 1 )
            goto LABEL_174;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = v56;
            LOBYTE(v11) = 0;
LABEL_174:
            v44 = 0;
            v45 = v18 + v32;
            v46 = v57;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_410810((__int64)v9, v10, s);
                LOBYTE(v28) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (int)v28;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v23 >> 6) + 48;
                LODWORD(v28) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v28) = (((unsigned __int8)v23 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v28;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v23) = (v23 & 7) + 48;
                if ( v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v44 = v13;
              }
              else
              {
                LODWORD(v28) = v15 & (v44 ^ 1);
                if ( v46 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v28) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v46 = 0;
                  v15 = 0;
                }
                else
                {
                  v46 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v23;
              LOBYTE(v23) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v25 = (v13 | v56 ^ 1) ^ 1;
          LOBYTE(v25) = v82 | (v13 | v56 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)(v13 | v56 ^ 1) ^ 1) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v70 != 2 || !v82 || v28 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v40 += (unsigned __int64)v42;
          LODWORD(v28) = mbsinit(&ps);
          if ( (_DWORD)v28 )
            goto LABEL_241;
          continue;
        }
        break;
      }
      v43 = &s[v41 + 1];
      while ( (unsigned __int8)(*v43 - 91) > 0x21u || !((1LL << (*v43 - 91)) & 0x20000002BLL) )
      {
        if ( &s[(_QWORD)v42 + v41] == ++v43 )
          goto LABEL_148;
      }
      v9 = v75;
      v10 = v77;
      return sub_410810((__int64)v9, v10, s);
    case 5:
      if ( v12 )
      {
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v59 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v59 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_410710("`", v11);
        v47 = sub_410710("'", v11);
        v14 = v55;
        a9 = v47;
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
      v58 = v14;
      v48 = strlen(a9);
      v59 = 1;
      v15 = 0;
      v14 = v58;
      n = v48;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v56 = 1;
      goto LABEL_3;
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_410810(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v11; // er13
  int v12; // ebp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r11
  int v15; // er10
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r12
  int v19; // er11
  char *v20; // r8
  size_t v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rbp
  bool v24; // al
  int v25; // eax
  int v26; // eax
  char v27; // di
  const unsigned __int16 **v28; // rax
  char v29; // cl
  unsigned __int64 result; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  int v35; // er13
  bool v36; // dl
  bool v37; // dl
  bool v38; // al
  size_t v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r15
  const unsigned __int16 **v42; // r14
  char *v43; // rax
  int v44; // esi
  unsigned __int64 v45; // rcx
  unsigned __int8 v46; // di
  char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  char *v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v56; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v57; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+10h] [rbp-B8h]
  char v59; // [rsp+1Fh] [rbp-A9h]
  char *s; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  char *v62; // [rsp+30h] [rbp-98h]
  unsigned __int8 v63; // [rsp+30h] [rbp-98h]
  char *v64; // [rsp+30h] [rbp-98h]
  unsigned __int64 v65; // [rsp+30h] [rbp-98h]
  unsigned __int8 v66; // [rsp+38h] [rbp-90h]
  unsigned __int8 v67; // [rsp+38h] [rbp-90h]
  unsigned __int64 v68; // [rsp+38h] [rbp-90h]
  char v69; // [rsp+38h] [rbp-90h]
  int v70; // [rsp+38h] [rbp-90h]
  int v71; // [rsp+40h] [rbp-88h]
  unsigned __int64 v72; // [rsp+40h] [rbp-88h]
  int v73; // [rsp+40h] [rbp-88h]
  int v74; // [rsp+40h] [rbp-88h]
  _BYTE *v75; // [rsp+40h] [rbp-88h]
  int v76; // [rsp+48h] [rbp-80h]
  unsigned __int64 v77; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  __int64 v79; // [rsp+58h] [rbp-70h]
  size_t v80; // [rsp+60h] [rbp-68h]
  char v81; // [rsp+68h] [rbp-60h]
  bool v82; // [rsp+6Ch] [rbp-5Ch]
  char v83; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v84; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v85; // [rsp+70h] [rbp-58h]
  char *v86; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h]
  mbstate_t ps; // [rsp+88h] [rbp-40h]

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v55 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v55;
  switch ( v11 )
  {
    case 0:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v56 = 0;
        goto LABEL_212;
      }
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v56 = 1;
LABEL_212:
      if ( a2 )
      {
        v15 = 0;
        v38 = 0;
        v59 = 1;
        v79 = 0LL;
        goto LABEL_138;
      }
      v59 = 1;
      v15 = 0;
      v16 = 1LL;
      v11 = 2;
      v79 = 0LL;
      v83 = 0;
      v82 = 0;
      n = 1LL;
      s2 = "'";
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
          v35 = v19;
          v14 = v17;
          v36 = v35 == 2;
          if ( !v16 && v36 && v82 )
            return sub_410810((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_410810((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v38;
                goto LABEL_3;
              }
              v37 = v83;
            }
          }
          else
          {
            v37 = !v82;
          }
          if ( s2 )
          {
            if ( v37 )
            {
              v53 = *s2;
              if ( *s2 )
              {
                v54 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v53;
                  v53 = v54[++v16];
                }
                while ( v53 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v57 = v56 & (v19 != 2);
        if ( !(v56 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v71 = v19;
            v66 = v15;
            v21 = strlen(s);
            v19 = v71;
            v15 = v66;
            v20 = &s[v18];
            v17 = v21;
          }
          if ( v18 + n <= v17 )
          {
            v76 = v19;
            v72 = v17;
            v67 = v15;
            v62 = v20;
            v22 = memcmp(v20, s2, n);
            v20 = v62;
            v15 = v67;
            v17 = v72;
            v19 = v76;
            if ( !v22 )
            {
              if ( !v82 )
              {
                LOBYTE(v23) = *v62;
                switch ( *v62 )
                {
                  case 0:
                    goto LABEL_83;
                  case 7:
                    LOBYTE(v23) = 97;
                    goto LABEL_79;
                  case 8:
                    LODWORD(v13) = 0;
                    v11 = 0;
                    LOBYTE(v23) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_72;
                  case 10:
                    goto LABEL_68;
                  case 11:
                    goto LABEL_80;
                  case 12:
                    goto LABEL_77;
                  case 13:
                    goto LABEL_76;
                  case 32:
                    v33 = v57;
                    goto LABEL_128;
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
                  case 35:
                  case 126:
                    v34 = v57;
                    goto LABEL_125;
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
                    v33 = v57;
                    goto LABEL_123;
                  case 39:
                    goto LABEL_62;
                  case 63:
                    goto LABEL_58;
                  case 92:
                    goto LABEL_65;
                  case 123:
                  case 125:
                    goto LABEL_17;
                  default:
                    goto LABEL_98;
                }
              }
              return sub_410810((__int64)v9, v10, s);
            }
          }
        }
        LOBYTE(v23) = *v20;
        switch ( *v20 )
        {
          case 0:
            goto LABEL_81;
          case 7:
            LOBYTE(v23) = 97;
            goto LABEL_78;
          case 8:
            LOBYTE(v23) = 98;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v23) = 116;
            goto LABEL_69;
          case 10:
LABEL_68:
            LOBYTE(v23) = 110;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
            goto LABEL_29;
          case 11:
LABEL_80:
            LOBYTE(v23) = 118;
            goto LABEL_78;
          case 12:
LABEL_77:
            LOBYTE(v23) = 102;
LABEL_78:
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
LABEL_79:
            v11 = 0;
            goto LABEL_37;
          case 13:
            v57 = 0;
LABEL_76:
            LOBYTE(v23) = 13;
            v29 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 32:
            v33 = 0;
LABEL_128:
            LOBYTE(v23) = 32;
            goto LABEL_123;
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
            v57 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 35:
          case 126:
            v34 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v57;
              LODWORD(v13) = 0;
              v57 = v34;
              goto LABEL_23;
            }
            v57 = v34;
            v11 = 0;
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
            v33 = 0;
LABEL_123:
            v11 = v57;
            v57 = v33;
            v25 = 0;
            goto LABEL_25;
          case 39:
            v57 = 0;
            goto LABEL_62;
          case 63:
            v57 = 0;
            goto LABEL_58;
          case 92:
            v57 = 0;
            goto LABEL_65;
          case 123:
          case 125:
            v57 = 0;
            goto LABEL_17;
          default:
            v57 = 0;
            goto LABEL_98;
        }
LABEL_24:
        v25 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v23 >> 5)) >> v23) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
LABEL_29:
            v26 = v15 ^ 1;
            LOBYTE(v26) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & ((unsigned __int8)v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v26;
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
        if ( v57 )
          goto LABEL_28;
        ++v18;
        LODWORD(v28) = v15 & (v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v28 )
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
          v9[v16] = v23;
        v27 = v59;
        ++v16;
        if ( !(_BYTE)v11 )
          v27 = 0;
        v59 = v27;
      }
      LOBYTE(v23) = *v20;
      switch ( *v20 )
      {
        case 0:
          if ( !v56 )
          {
            if ( !(v81 & 1) )
            {
              v57 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v23) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_410810((__int64)v9, v10, s);
          v57 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v25 = v15 ^ 1;
          LOBYTE(v25) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v31 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v25;
              v11 = 0;
              LOBYTE(v23) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v31 = v16;
          if ( v10 > v16 )
          {
            v25 = v15;
LABEL_91:
            v9[v31] = 92;
            v15 = v25;
          }
          v16 = v31 + 1;
          if ( v19 == 2 )
          {
            v25 = v11;
            LOBYTE(v23) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v23) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v31 + 2 )
              v9[v31 + 2] = 48;
            v16 = v31 + 3;
            LOBYTE(v23) = 48;
          }
LABEL_95:
          v25 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | v56 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v23) = 7;
          v29 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v23) = 8;
          v29 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v23) = 9;
          v29 = 116;
          goto LABEL_104;
        case 10:
          LOBYTE(v23) = 10;
          v29 = 110;
          goto LABEL_104;
        case 11:
          LOBYTE(v23) = 11;
          v29 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 12:
          LOBYTE(v23) = 12;
          v29 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 13:
          LOBYTE(v23) = 13;
          v29 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v57 = v19 == 2 && v82;
          if ( v57 )
            return sub_410810((__int64)v9, v10, s);
          goto LABEL_66;
        case 32:
          LOBYTE(v23) = 32;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_21;
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
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
          goto LABEL_20;
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
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v23) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_410810((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            v13 = v10;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v10 = v79;
          }
          v83 = v11;
          v16 += 3LL;
          v25 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v23) = 39;
          v10 = v13;
          goto LABEL_49;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
            v11 = 0;
            v25 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v23) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v23 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v23 > 0x3Eu)
            || (v49 = 8070630310989004800LL, !_bittest64(&v49, v23)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_410810((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_410810((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            LOBYTE(v23) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = v56;
          LOBYTE(v23) = 92;
          v29 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v56;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v56 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v23) = v29;
          v11 = 0;
          goto LABEL_28;
        case 123:
        case 125:
LABEL_17:
          v24 = v17 != 1;
          if ( v17 == -1LL )
            v24 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( v24 )
            goto LABEL_67;
LABEL_20:
          if ( v18 )
            goto LABEL_67;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_410810((__int64)v9, v10, s);
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v73 = v19;
            v68 = v17;
            v63 = v15;
            v28 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v23;
            v15 = v63;
            v17 = v68;
            v19 = v73;
            v32 = 1LL;
            LODWORD(v28) = (*v28)[(unsigned __int8)v23];
            LOWORD(v28) = (unsigned __int16)v28 & 0x4000;
            LOBYTE(v11) = (_WORD)v28 != 0;
            LOBYTE(v13) = v56 & ((_WORD)v28 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v74 = v19;
            v69 = v15;
            v64 = v20;
            v39 = strlen(s);
            v19 = v74;
            LOBYTE(v15) = v69;
            v20 = v64;
            v17 = v39;
          }
          v85 = v16;
          v86 = v20;
          v40 = 0LL;
          v84 = v15;
          v75 = v9;
          v77 = v10;
          v65 = v17;
          v70 = v19;
          break;
      }
      while ( 2 )
      {
        v41 = v18 + v40;
        v28 = (const unsigned __int16 **)sub_416E80((wchar_t *)&wc, &s[v18 + v40]);
        v42 = v28;
        if ( !v28 )
        {
LABEL_241:
          v32 = v40;
          v16 = v85;
          v15 = v84;
          v9 = v75;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LOBYTE(v13) = v56 & (v11 ^ 1);
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-1LL )
        {
          v32 = v40;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v75;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LODWORD(v13) = v56;
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-2LL )
        {
          v17 = v65;
          v50 = v18 + v40;
          v51 = &s[v18 + v40];
          v28 = (const unsigned __int16 **)v40;
          v32 = v40;
          v15 = v84;
          v16 = v85;
          v9 = v75;
          v10 = v77;
          v19 = v70;
          if ( v50 < v65 && *v51 )
          {
            do
              v28 = (const unsigned __int16 **)((char *)v28 + 1);
            while ( (unsigned __int64)v28 + v18 < v65 && *((_BYTE *)v28 + (_QWORD)v86) );
            v32 = (unsigned __int64)v28;
          }
          LODWORD(v13) = v56;
          v11 = 0;
LABEL_242:
          if ( v32 > 1 )
            goto LABEL_174;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = v56;
            LOBYTE(v11) = 0;
LABEL_174:
            v44 = 0;
            v45 = v18 + v32;
            v46 = v57;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_410810((__int64)v9, v10, s);
                LOBYTE(v28) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (int)v28;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v23 >> 6) + 48;
                LODWORD(v28) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v28) = (((unsigned __int8)v23 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v28;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v23) = (v23 & 7) + 48;
                if ( v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v44 = v13;
              }
              else
              {
                LODWORD(v28) = v15 & (v44 ^ 1);
                if ( v46 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v28) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v46 = 0;
                  v15 = 0;
                }
                else
                {
                  v46 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v23;
              LOBYTE(v23) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v25 = (v13 | v56 ^ 1) ^ 1;
          LOBYTE(v25) = v82 | (v13 | v56 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)(v13 | v56 ^ 1) ^ 1) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v70 != 2 || !v82 || v28 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v40 += (unsigned __int64)v42;
          LODWORD(v28) = mbsinit(&ps);
          if ( (_DWORD)v28 )
            goto LABEL_241;
          continue;
        }
        break;
      }
      v43 = &s[v41 + 1];
      while ( (unsigned __int8)(*v43 - 91) > 0x21u || !((1LL << (*v43 - 91)) & 0x20000002BLL) )
      {
        if ( &s[(_QWORD)v42 + v41] == ++v43 )
          goto LABEL_148;
      }
      v9 = v75;
      v10 = v77;
      return sub_410810((__int64)v9, v10, s);
    case 5:
      if ( v12 )
      {
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v59 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v59 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_410710("`", v11);
        v47 = sub_410710("'", v11);
        v14 = v55;
        a9 = v47;
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
      v58 = v14;
      v48 = strlen(a9);
      v59 = 1;
      v15 = 0;
      v14 = v58;
      n = v48;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v56 = 1;
      goto LABEL_3;
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_411A40(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int64 v7; // rdx
  __int128 *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // er8
  char *v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v18 = a2;
  v6 = __errno_location();
  v8 = off_624618;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_624630 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_412BD0(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_624618 == &xmmword_624620 )
    {
      v8 = (__int128 *)sub_4129E0(0LL, v10);
      off_624618 = v8;
      *v8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_624620);
    }
    else
    {
      off_624618 = (__int128 *)sub_4129E0(off_624618, v10);
      v8 = off_624618;
    }
    memset(&v8[dword_624630], 0, 16LL * ((int)a1 + 1 - dword_624630));
    dword_624630 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v19 = *v11;
  v13 = sub_410810(v12, *v11, v18, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_6257E0 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_412980(v14);
    v16 = *(_DWORD *)v5;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_410810(v15, v14, v18, v4, v16, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_411A40(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int64 v7; // rdx
  __int128 *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // er8
  char *v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v18 = a2;
  v6 = __errno_location();
  v8 = off_624618;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_624630 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_412BD0(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_624618 == &xmmword_624620 )
    {
      v8 = (__int128 *)sub_4129E0(0LL, v10);
      off_624618 = v8;
      *v8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_624620);
    }
    else
    {
      off_624618 = (__int128 *)sub_4129E0(off_624618, v10);
      v8 = off_624618;
    }
    memset(&v8[dword_624630], 0, 16LL * ((int)a1 + 1 - dword_624630));
    dword_624630 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v19 = *v11;
  v13 = sub_410810(v12, *v11, v18, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_6257E0 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_412980(v14);
    v16 = *(_DWORD *)v5;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_410810(v15, v14, v18, v4, v16, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v21;
  return v12;
}

__int64 __fastcall sub_411BE0(__int128 *a1)
{
  __int128 *v1; // rbx
  int *v2; // rax
  int v3; // er12
  int *v4; // rbp
  __int64 result; // rax

  v1 = a1;
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  if ( !a1 )
    v1 = &xmmword_6258E0;
  result = sub_412B80(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

__int64 __fastcall sub_411C20(__int128 *a1)
{
  if ( !a1 )
    a1 = &xmmword_6258E0;
  return *(unsigned int *)a1;
}

__int128 *__fastcall sub_411C30(__int128 *a1, int a2)
{
  __int128 *result; // rax

  result = &xmmword_6258E0;
  if ( !a1 )
    a1 = &xmmword_6258E0;
  *(_DWORD *)a1 = a2;
  return result;
}

__int64 __fastcall sub_411C40(__int128 *a1, unsigned __int8 a2, char a3)
{
  _DWORD *v3; // rdi
  int v4; // eax
  char v5; // dl
  __int64 result; // rax

  if ( !a1 )
    a1 = &xmmword_6258E0;
  v3 = (_DWORD *)((char *)a1 + 4 * (a2 >> 5) + 8);
  v4 = *v3 >> (a2 & 0x1F);
  v5 = v4 ^ a3;
  result = v4 & 1;
  *v3 ^= (v5 & 1) << (a2 & 0x1F);
  return result;
}

unsigned __int64 __fastcall sub_411CD0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, __int128 *a5)
{
  char *v5; // r15
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // er12
  int *v9; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]

  v5 = a3;
  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_6258E0;
  v11 = a4;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_410810(
             a1,
             a2,
             v5,
             v11,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_411F60(__int64 a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_411F60(__int64 a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_411FD0(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [rsp+0h] [rbp-48h]
  int v6; // [rsp+4h] [rbp-44h]
  __int64 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

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
  return sub_411A40(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_411FD0(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [rsp+0h] [rbp-48h]
  int v6; // [rsp+4h] [rbp-44h]
  __int64 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

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
  return sub_411A40(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_412040(int a1, char *a2)
{
  return sub_411F60(0LL, a1, a2);
}

_BYTE *__fastcall sub_412060(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_625910;
  v7 = _mm_load_si128((const __m128i *)&xmmword_6258E0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6258F0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_625900);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_411A40(0LL, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_4120E0(char *a1)
{
  return sub_412060(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_412110(__int64 a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_412110(__int64 a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_412180(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_6258E0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_6258F0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_625900);
  v9 = qword_625910;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_411A40(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_412270(__int64 a1, char *a2)
{
  return sub_411A40(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6245E0);
}

_BYTE *__fastcall sub_412290(char *a1)
{
  return sub_411A40(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6245E0);
}

__int64 __fastcall sub_4122B0(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  const char *v3; // rbp
  const char *v4; // r12
  size_t v5; // r13
  char *v7; // rbp
  char *v8; // r12
  int *v9; // rax
  int *v10; // rax
  __int64 v11; // [rsp+0h] [rbp-158h]
  __int64 v12; // [rsp+8h] [rbp-150h]
  struct stat stat_buf; // [rsp+90h] [rbp-C8h]

  v2 = 0;
  v3 = sub_40B870(a1);
  v4 = sub_40B870(a2);
  v5 = sub_40B8D0(v3);
  if ( v5 == sub_40B8D0(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (char *)sub_417940(a1);
    v8 = (char *)sub_417940(a2);
    if ( __xstat(1, v7, (struct stat *)&v11) )
    {
      v10 = __errno_location();
      error(1, *v10, "%s", v7);
    }
    if ( __xstat(1, v8, &stat_buf) )
    {
      v9 = __errno_location();
      error(1, *v9, "%s", v8);
    }
    v2 = 0;
    if ( v12 == stat_buf.st_ino )
      LOBYTE(v2) = v11 == stat_buf.st_dev;
    free(v7);
    free(v8);
  }
  return v2;
}

__int64 __fastcall sub_4123E0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 result; // rax
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
  __int64 v23; // rbx
  char *v24; // rax

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
    case 1LL:
      v14 = *v7;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 7LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 8LL:
      v10 = *v7;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *v7;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *v7;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_4123E0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 result; // rax
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
  __int64 v23; // rbx
  char *v24; // rax

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
    case 1LL:
      v14 = *v7;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 7LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 8LL:
      v10 = *v7;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *v7;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *v7;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_4127E0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 i; // r9
  __int64 *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 v12[11]; // [rsp+0h] [rbp-58h]

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
        return sub_4123E0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_4123E0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_412840(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char *v7; // r10
  unsigned int v8; // er8
  __int64 i; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v15[10]; // [rsp+20h] [rbp-88h]
  char v16[32]; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+90h] [rbp-18h]
  __int64 v18; // [rsp+98h] [rbp-10h]

  v17 = a5;
  v7 = &a7;
  v8 = 32;
  v18 = a6;
  for ( i = 0LL; i != 10; ++i )
  {
    if ( v8 <= 0x2F )
    {
      v10 = v8;
      v8 += 8;
      v11 = *(_QWORD *)&v16[v10];
      v15[i] = v11;
      if ( !v11 )
        return sub_4123E0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_4123E0(a1, a2, a3, a4, v15, i);
}

int sub_412900()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_41B1AD);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_412980(size_t a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // rdx

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_412BD0(a1, a2, v3);
  }
  return result;
}

void *__fastcall sub_4129E0(void *a1, size_t a2)
{
  void *result; // rax
  __int64 v3; // rdx

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
        sub_412BD0(a1, a2, v3);
    }
  }
  return result;
}

void *__fastcall sub_412AE0(void *a1, size_t *a2, __int64 a3)
{
  size_t v3; // rax

  v3 = *a2;
  if ( a1 )
  {
    a3 = 6148914691236517203LL;
    if ( v3 <= 0x5555555555555553LL )
    {
      v3 += (v3 >> 1) + 1;
LABEL_4:
      *a2 = v3;
      return sub_4129E0(a1, v3);
    }
LABEL_8:
    sub_412BD0(a1, a2, a3);
  }
  if ( v3 )
  {
    if ( (v3 & 0x8000000000000000LL) == 0LL )
      goto LABEL_4;
    goto LABEL_8;
  }
  *a2 = 128LL;
  return sub_4129E0(0LL, 0x80uLL);
}

void *__fastcall sub_412B80(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_412980(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_412BB0(void *src)
{
  size_t v1; // rax

  v1 = strlen((const char *)src);
  return sub_412B80(src, v1 + 1);
}

noreturn void  sub_412BD0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_412C10(char *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // rbp
  int *v13; // r14
  _BYTE *v14; // rax
  int v15; // esi
  int v17; // ebp
  int *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v7 = a4;
  v8 = a3;
  v9 = a6;
  v10 = a7;
  v11 = sub_4132B0(a1);
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
  v14 = sub_412290(a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", v9, v14);
  return v19;
}

unsigned __int64 __fastcall sub_412CE0(char *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_412C10(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 sub_412D10()
{
  __int64 v0; // rbx

  v0 = sub_415BE0(0LL, 0LL);
  if ( !v0 && *__errno_location() == 12 )
    sub_412BD0();
  return v0;
}

char *sub_412D40()
{
  __int64 v0; // r13
  char *v1; // rbx
  __int64 v2; // rdx
  int *v3; // r12
  char *v4; // rbp
  size_t v5; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // [rsp+8h] [rbp-30h]

  v0 = 68723675137LL;
  v1 = 0LL;
  v8 = 34LL;
  v3 = __errno_location();
  do
  {
    while ( 1 )
    {
      v1 = (char *)sub_412AE0(v1, (size_t *)&v8, v2);
      v4 = &v1[v8 - 2];
      v5 = v8 - 1;
      *v4 = 0;
      *v3 = 0;
      if ( gethostname(v1, v5) )
        break;
      if ( !*v4 )
        return v1;
    }
    v7 = (unsigned int)*v3;
  }
  while ( (unsigned int)v7 <= 0x24 && _bittest64(&v0, v7) );
  free(v1);
  *v3 = v7;
  return 0LL;
}

__int64 __fastcall sub_412DF0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15
  unsigned __int64 *v6; // r14
  const char *v7; // r13
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // er12
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
  int v28; // er9
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int base; // [rsp+0h] [rbp-58h]
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h]

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoul");
  v5 = a2;
  base = a3;
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
  while ( v11[v10] & 0x2000 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = strtoul(nptr, v5, base);
  if ( *v5 == nptr )
  {
    basea = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
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
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      baseb = *v5;
      v26 = strchr(v7, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_39:
        *v6 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      v19 = 142129060940101LL;
      if ( !_bittest64(&v19, (unsigned int)(v15 - 69)) || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
LABEL_26:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_27;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_27:
          switch ( (_BYTE)v15 )
          {
            case 0x42:
              if ( v13 >> 54 )
                goto LABEL_37;
              v13 <<= 10;
              break;
            case 0x45:
              goto LABEL_70;
            case 0x47:
            case 0x67:
              goto LABEL_76;
            case 0x4B:
            case 0x6B:
              goto LABEL_36;
            case 0x4D:
            case 0x6D:
              goto LABEL_29;
            case 0x50:
              goto LABEL_64;
            case 0x54:
            case 0x74:
              goto LABEL_58;
            case 0x59:
              goto LABEL_52;
            case 0x5A:
              goto LABEL_46;
            case 0x62:
              goto LABEL_43;
            case 0x63:
              break;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_37;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_39;
          }
LABEL_32:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (_BYTE)v15 )
          {
            case 0x45:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_70:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_50;
            case 0x46:
            case 0x48:
            case 0x49:
            case 0x4A:
            case 0x4C:
            case 0x4E:
            case 0x4F:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x5B:
            case 0x5C:
            case 0x5D:
            case 0x5E:
            case 0x5F:
            case 0x60:
            case 0x61:
            case 0x64:
            case 0x65:
            case 0x66:
            case 0x68:
            case 0x69:
            case 0x6A:
            case 0x6C:
            case 0x6E:
            case 0x6F:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
              goto LABEL_39;
            case 0x47:
            case 0x67:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_76:
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
              goto LABEL_32;
            case 0x4B:
            case 0x6B:
              v22 = 1;
              v23 = 1024LL;
LABEL_36:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_32;
              goto LABEL_37;
            case 0x4D:
            case 0x6D:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_29:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_37;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 0x50:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_64:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_50;
            case 0x54:
            case 0x74:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_58:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_50;
            case 0x59:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_52:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_50;
            case 0x5A:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_46:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_50:
              v14 |= v28;
              break;
            case 0x62:
              v22 = 1;
LABEL_43:
              if ( v13 >> 55 )
              {
LABEL_37:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 0x63:
              v22 = 1;
              goto LABEL_32;
            default:
              goto LABEL_26;
          }
          goto LABEL_32;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_27;
    }
  }
LABEL_13:
  *v6 = v13;
  return v14;
}

noreturn void __fastcall  sub_413220(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // er10
  __int64 v8; // rbp
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13; // [rsp+Eh] [rbp-2Ah]
  char v14; // [rsp+Fh] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v7 = a2;
    v8 = a5;
    v9 = (&off_41F1E0)[v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_41F171[-v7];
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

noreturn void __fastcall  sub_413220(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // er10
  __int64 v8; // rbp
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13; // [rsp+Eh] [rbp-2Ah]
  char v14; // [rsp+Fh] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v7 = a2;
    v8 = a5;
    v9 = (&off_41F1E0)[v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_41F171[-v7];
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

__int64 __fastcall sub_4132B0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15
  unsigned __int64 *v6; // r14
  const char *v7; // r13
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // er12
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
  int v28; // er9
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int base; // [rsp+0h] [rbp-58h]
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h]

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  v5 = a2;
  base = a3;
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
  while ( v11[v10] & 0x2000 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = __strtoul_internal(nptr, v5, base, 0);
  if ( *v5 == nptr )
  {
    basea = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
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
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      baseb = *v5;
      v26 = strchr(v7, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_39:
        *v6 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      v19 = 142129060940101LL;
      if ( !_bittest64(&v19, (unsigned int)(v15 - 69)) || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
LABEL_26:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_27;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_27:
          switch ( (_BYTE)v15 )
          {
            case 0x42:
              if ( v13 >> 54 )
                goto LABEL_37;
              v13 <<= 10;
              break;
            case 0x45:
              goto LABEL_70;
            case 0x47:
            case 0x67:
              goto LABEL_76;
            case 0x4B:
            case 0x6B:
              goto LABEL_36;
            case 0x4D:
            case 0x6D:
              goto LABEL_29;
            case 0x50:
              goto LABEL_64;
            case 0x54:
            case 0x74:
              goto LABEL_58;
            case 0x59:
              goto LABEL_52;
            case 0x5A:
              goto LABEL_46;
            case 0x62:
              goto LABEL_43;
            case 0x63:
              break;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_37;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_39;
          }
LABEL_32:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (_BYTE)v15 )
          {
            case 0x45:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_70:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_50;
            case 0x46:
            case 0x48:
            case 0x49:
            case 0x4A:
            case 0x4C:
            case 0x4E:
            case 0x4F:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x5B:
            case 0x5C:
            case 0x5D:
            case 0x5E:
            case 0x5F:
            case 0x60:
            case 0x61:
            case 0x64:
            case 0x65:
            case 0x66:
            case 0x68:
            case 0x69:
            case 0x6A:
            case 0x6C:
            case 0x6E:
            case 0x6F:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
              goto LABEL_39;
            case 0x47:
            case 0x67:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_76:
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
              goto LABEL_32;
            case 0x4B:
            case 0x6B:
              v22 = 1;
              v23 = 1024LL;
LABEL_36:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_32;
              goto LABEL_37;
            case 0x4D:
            case 0x6D:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_29:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_37;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 0x50:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_64:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_50;
            case 0x54:
            case 0x74:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_58:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_50;
            case 0x59:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_52:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_50;
            case 0x5A:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_46:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_50:
              v14 |= v28;
              break;
            case 0x62:
              v22 = 1;
LABEL_43:
              if ( v13 >> 55 )
              {
LABEL_37:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 0x63:
              v22 = 1;
              goto LABEL_32;
            default:
              goto LABEL_26;
          }
          goto LABEL_32;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_27;
    }
  }
LABEL_13:
  *v6 = v13;
  return v14;
}

__int64 __fastcall sub_4136F0(_DWORD *a1)
{
  __int64 v1; // r12
  _DWORD *v2; // rbx
  int v3; // edx
  unsigned __int64 v4; // rcx
  int v6; // edx

  v1 = 3221227009LL;
  v2 = a1;
LABEL_2:
  while ( 1 )
  {
    v3 = v2[1];
    if ( !v3 )
      return (__int64)a1;
    while ( v3 != 91 )
    {
      v4 = (unsigned int)(v3 - 33);
      if ( (unsigned int)v4 <= 0x1F )
      {
        if ( _bittest64(&v1, v4) && v2[2] == 40 )
        {
          v2 = (_DWORD *)sub_4136F0(v2 + 2);
          goto LABEL_2;
        }
        if ( v3 == 41 )
          return (__int64)(v2 + 2);
      }
      ++v2;
      v3 = v2[1];
      if ( !v3 )
        return (__int64)a1;
    }
    if ( !dword_625918 )
      dword_625918 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? -1 : 1;
    v6 = v2[2];
    if ( v6 == 33 || dword_625918 < 0 && v6 == 94 )
    {
      v6 = v2[3];
      v2 += 3;
    }
    else
    {
      v2 += 2;
    }
    if ( v6 == 93 )
    {
      v6 = v2[1];
      ++v2;
    }
    while ( v6 != 93 )
    {
      if ( !v6 )
        return (__int64)a1;
      v6 = v2[1];
      ++v2;
    }
  }
}

__int64 __fastcall sub_4137F0(unsigned __int8 *a1)
{
  __int64 v1; // r12
  unsigned __int8 *v2; // rbx
  int v3; // edx
  unsigned __int8 v5; // dl

  v1 = 3221227009LL;
  v2 = a1;
LABEL_2:
  while ( 1 )
  {
    v3 = v2[1];
    if ( !(_BYTE)v3 )
      return (__int64)a1;
    while ( (_BYTE)v3 != 91 )
    {
      if ( (unsigned __int8)(v3 - 33) <= 0x1Fu )
      {
        if ( _bittest64(&v1, (unsigned int)(v3 - 33)) && v2[2] == 40 )
        {
          v2 = (unsigned __int8 *)sub_4137F0(v2 + 2);
          goto LABEL_2;
        }
        if ( (_BYTE)v3 == 41 )
          return (__int64)(v2 + 2);
      }
      v3 = (++v2)[1];
      if ( !(_BYTE)v3 )
        return (__int64)a1;
    }
    if ( !dword_625918 )
      dword_625918 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? -1 : 1;
    v5 = v2[2];
    if ( v5 == 33 || dword_625918 < 0 && v5 == 94 )
    {
      v5 = v2[3];
      v2 += 3;
    }
    else
    {
      v2 += 2;
    }
    if ( v5 == 93 )
      v5 = *++v2;
    while ( v5 != 93 )
    {
      if ( !v5 )
        return (__int64)a1;
      v5 = *++v2;
    }
  }
}

__int64 __fastcall sub_4138F0(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned int v6; // er12
  int v7; // eax
  __int64 v8; // r14
  const wchar_t *v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  wchar_t v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  void *v19; // rsp
  wchar_t *v20; // rax
  char *v21; // rax
  _QWORD *v22; // r13
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  void *v25; // rsp
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  unsigned int v28; // er12
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r15
  _BOOL8 v32; // rcx
  _BOOL8 v33; // rcx
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r14
  unsigned int v36; // ebx
  _QWORD *v37; // r13
  __int64 v38; // rcx
  unsigned __int64 v39; // r15
  unsigned int v40; // ebx
  wchar_t *v41; // rax
  const wchar_t *v42; // [rsp+8h] [rbp-78h]
  __int64 v43; // [rsp+10h] [rbp-70h]
  unsigned __int64 v44; // [rsp+18h] [rbp-68h]
  unsigned __int8 v45; // [rsp+23h] [rbp-5Dh]
  unsigned int v46; // [rsp+24h] [rbp-5Ch]
  unsigned __int64 v47; // [rsp+28h] [rbp-58h]
  __int64 v48; // [rsp+30h] [rbp-50h]
  size_t v49; // [rsp+38h] [rbp-48h]
  __int64 v50; // [rsp+48h] [rbp-38h]

  LOBYTE(v6) = a5;
  LODWORD(v48) = a1;
  v44 = a3;
  v47 = a4;
  v46 = a6;
  v45 = a5;
  v50 = 0LL;
  v49 = wcslen((const wchar_t *)a2);
  v7 = *(_DWORD *)(a2 + 4);
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = a2 + 4;
  v43 = a2;
  v9 = (const wchar_t *)(a2 + 4);
  v10 = &v50;
  v11 = 3221227009LL;
  v12 = 0LL;
  while ( 2 )
  {
    while ( v7 == 91 )
    {
      if ( !dword_625918 )
      {
        v42 = v9;
        v21 = getenv("POSIXLY_CORRECT");
        v9 = v42;
        dword_625918 = (unsigned __int64)v21 < 1 ? -1 : 1;
      }
      v15 = *(_DWORD *)(v8 + 4);
      if ( v15 == 33 || dword_625918 < 0 && v15 == 94 )
      {
        v16 = v8 + 8;
        v15 = *(_DWORD *)(v8 + 8);
      }
      else
      {
        v16 = v8 + 4;
      }
      if ( v15 == 93 )
      {
        v15 = *(_DWORD *)(v16 + 4);
        v16 += 4LL;
      }
      while ( 1 )
      {
        v8 = v16 + 4;
        if ( v15 == 93 )
          break;
        if ( !v15 )
          return 0xFFFFFFFFLL;
        v15 = *(_DWORD *)v8;
        v16 += 4LL;
      }
      v7 = *(_DWORD *)(v16 + 4);
LABEL_6:
      if ( !v7 )
        return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      v13 = (unsigned int)(v7 - 33);
      if ( (unsigned int)v13 > 0x1F )
      {
        if ( v7 != 124 || v12 )
        {
LABEL_5:
          v7 = *(_DWORD *)(v8 + 4);
          v8 += 4LL;
        }
        else
        {
          v17 = v49;
          if ( (unsigned int)(v48 - 63) > 1 )
            v17 = ((v8 - (__int64)v9) >> 2) + 1;
          v18 = (4 * v17 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v18 - 8 > 0x1F37 || v17 > 0x3FFFFFFFFFFFFFFFLL )
            return 0xFFFFFFFFLL;
          v19 = alloca(v18 + 8);
          v20 = wmempcpy(
                  (wchar_t *)((((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8),
                  v9,
                  (v8 - (__int64)v9) >> 2);
          v9 = (const wchar_t *)(v8 + 4);
          *v20 = 0;
          v7 = *(_DWORD *)(v8 + 4);
          v8 += 4LL;
          *(_QWORD *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
          *v10 = ((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL;
          v10 = (__int64 *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL);
          v12 = 0LL;
        }
        goto LABEL_6;
      }
      if ( !_bittest64(&v11, v13) || *(_DWORD *)(v8 + 4) != 40 )
        break;
      ++v12;
      v8 += 4LL;
      v7 = 40;
    }
    if ( v7 != 41 )
      goto LABEL_5;
    if ( v12 )
    {
      v7 = *(_DWORD *)(v8 + 4);
      --v12;
      v8 += 4LL;
      if ( !v7 )
        return 0xFFFFFFFFLL;
      continue;
    }
    break;
  }
  v22 = v10;
  v23 = v43;
  if ( (unsigned int)(v48 - 63) > 1 )
    v49 = ((v8 - (__int64)v9) >> 2) + 1;
  v24 = (4 * v49 + 15) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v24 - 8 > 0x1F37 || v49 > 0x3FFFFFFFFFFFFFFFLL )
    return 0xFFFFFFFFLL;
  v25 = alloca(v24 + 8);
  *wmempcpy((wchar_t *)((((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8), v9, (v8 - (__int64)v9) >> 2) = 0;
  *v22 = ((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  v26 = v50;
  *(_QWORD *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
  if ( !v26 )
    __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_wmatch");
  if ( *(_DWORD *)(v8 - 4) != 41 )
    __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_wmatch");
  switch ( (_DWORD)v48 )
  {
    case 0x21:
      if ( v44 > v47 )
        return 1LL;
      v34 = v44;
      v49 = v26;
      v48 = v8;
      v35 = v44;
      v36 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v36 = v46;
      while ( 2 )
      {
        v37 = (_QWORD *)v49;
        while ( (unsigned int)sub_413E80(v37 + 1, v34, v35, (unsigned __int8)v6, v36) )
        {
          v37 = (_QWORD *)*v37;
          if ( !v37 )
          {
            if ( v34 == v35 )
            {
              v38 = (unsigned __int8)v6;
            }
            else
            {
              v38 = 0LL;
              if ( *(_DWORD *)(v35 - 4) == 47 )
                v38 = (v46 & 5) == 5;
            }
            if ( !(unsigned int)sub_413E80(v48, v35, v47, v38, v36) )
              return 0LL;
            break;
          }
        }
        v35 += 4LL;
        if ( v47 >= v35 )
          continue;
        break;
      }
      return 1LL;
    case 0x2A:
      if ( (unsigned int)sub_413E80(v8, v44, v47, (unsigned __int8)v6, v46) )
        goto LABEL_43;
      return 0LL;
    case 0x2B:
LABEL_43:
      v43 = v8;
      v27 = v44;
      v28 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v28 = v46;
      v29 = v23 - 4;
      LODWORD(v48) = v46 & 1;
      v30 = v47;
      v42 = (const wchar_t *)v29;
      do
      {
        if ( v27 <= v30 )
        {
          v31 = v27;
          LODWORD(v49) = v45;
          do
          {
            if ( !(unsigned int)sub_413E80(v26 + 8, v27, v31, (unsigned int)v49, v28) )
            {
              if ( v27 == v31 )
              {
                if ( !(unsigned int)sub_413E80(v43, v27, v30, (unsigned int)v49, v28) )
                  return 0LL;
              }
              else
              {
                v32 = 0LL;
                if ( *(_DWORD *)(v31 - 4) == 47 )
                  v32 = (v46 & 5) == 5;
                if ( !(unsigned int)sub_413E80(v43, v31, v30, v32, v28) )
                  return 0LL;
                v33 = 0LL;
                if ( *(_DWORD *)(v31 - 4) == 47 )
                  v33 = (v46 & 5) == 5;
                if ( !(unsigned int)sub_413E80(v42, v31, v30, v33, v28) )
                  return 0LL;
              }
              v26 = v50;
            }
            v31 += 4LL;
          }
          while ( v30 >= v31 );
        }
        v26 = *(_QWORD *)v26;
        v50 = v26;
      }
      while ( v26 );
      return 1LL;
    case 0x3F:
      v6 = (unsigned __int8)v6;
      if ( (unsigned int)sub_413E80(v8, v44, v47, (unsigned __int8)v6, v46) )
        goto LABEL_73;
      return 0LL;
    case 0x40:
      v6 = (unsigned __int8)v6;
LABEL_73:
      v39 = v44;
      v40 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v40 = v46;
      break;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_wmatch");
      return result;
  }
  while ( 1 )
  {
    v41 = wcscat((wchar_t *)(v26 + 8), (const wchar_t *)v8);
    if ( !(unsigned int)sub_413E80(v41, v39, v47, v6, v40) )
      break;
    v26 = *(_QWORD *)v26;
    v50 = v26;
    if ( !v26 )
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_413E80(wint_t *a1, const wchar_t *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  const wchar_t *v5; // r14
  const wchar_t *v6; // rbx
  wint_t v7; // er15
  unsigned __int8 v8; // r10
  int v9; // er12
  int v10; // er13
  wint_t *v11; // rbp
  wint_t v12; // eax
  wint_t v13; // eax
  wint_t v14; // er8
  wint_t v15; // eax
  wint_t *v16; // r14
  wint_t *v17; // r15
  wint_t v18; // eax
  wint_t v19; // ebx
  int v20; // er14
  __int64 i; // rsi
  wint_t v22; // edx
  _DWORD *v23; // rsi
  bool v24; // di
  wint_t v25; // eax
  __int64 result; // rax
  wint_t *v27; // rax
  int v28; // ebp
  const wchar_t *v29; // r14
  wint_t *v30; // r13
  wint_t v31; // er11
  wint_t *v32; // r15
  bool v33; // dl
  wint_t *v34; // rax
  wchar_t *v35; // rax
  wint_t v36; // er11
  wchar_t *v37; // r9
  unsigned __int8 v38; // r10
  wint_t v39; // eax
  __int64 v40; // r15
  wint_t v41; // er12
  unsigned int v42; // er14
  wint_t *v43; // r13
  unsigned __int64 v44; // rbx
  wint_t v45; // eax
  wint_t *v46; // r14
  __int64 v47; // rdx
  int v48; // eax
  char *v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // r15
  unsigned int v54; // ebp
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rcx
  int *v57; // r8
  int v58; // edx
  _DWORD *v59; // rbp
  int v60; // eax
  int *v61; // rax
  __int64 v62; // rbp
  char *v63; // rsi
  int *v64; // rdx
  int v65; // eax
  wctype_t v66; // rax
  wint_t *v67; // r9
  __int64 v68; // [rsp+8h] [rbp-580h]
  wchar_t *v69; // [rsp+8h] [rbp-580h]
  const wchar_t *v70; // [rsp+8h] [rbp-580h]
  bool v71; // [rsp+8h] [rbp-580h]
  unsigned __int64 wc; // [rsp+10h] [rbp-578h]
  wint_t wca; // [rsp+10h] [rbp-578h]
  unsigned __int8 wcc; // [rsp+10h] [rbp-578h]
  unsigned __int8 wcb; // [rsp+10h] [rbp-578h]
  unsigned int v76; // [rsp+18h] [rbp-570h]
  unsigned __int8 v77; // [rsp+1Ch] [rbp-56Ch]
  int v78; // [rsp+1Ch] [rbp-56Ch]
  unsigned __int8 v79; // [rsp+1Ch] [rbp-56Ch]
  wint_t v80; // [rsp+1Ch] [rbp-56Ch]
  unsigned __int8 v81; // [rsp+1Ch] [rbp-56Ch]
  unsigned __int8 v82; // [rsp+1Ch] [rbp-56Ch]
  int v83; // [rsp+20h] [rbp-568h]
  wint_t v84; // [rsp+24h] [rbp-564h]
  char property; // [rsp+30h] [rbp-558h]
  int v86; // [rsp+13Ch] [rbp-44Ch]
  int v87[274]; // [rsp+140h] [rbp-448h]
  int _540[274]; // [rsp+540h] [rbp-48h]

  v5 = (const wchar_t *)a3;
  v6 = a2;
  v7 = *a1;
  v76 = a5;
  v68 = (__int64)(a1 + 1);
  if ( !*a1 )
    goto LABEL_56;
  wc = a3;
  v83 = a5 & 5;
  v8 = a4;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  v11 = a1;
  while ( 2 )
  {
    if ( v10 )
    {
      v77 = v8;
      v12 = towlower(v7);
      v8 = v77;
      v7 = v12;
    }
    switch ( v7 )
    {
      case 0x21u:
      case 0x2Bu:
      case 0x40u:
        if ( !(v76 & 0x20) )
          goto LABEL_49;
        if ( v11[1] != 40 )
          goto LABEL_49;
        result = sub_4138F0(v7, v68, (unsigned __int64)v6, wc, v8, v76);
        if ( (_DWORD)result == -1 )
          goto LABEL_49;
        return result;
      case 0x2Au:
        v27 = v11;
        v28 = v10;
        v29 = (const wchar_t *)wc;
        v30 = v27;
        if ( !(v76 & 0x20) || v27[1] != 40 )
          goto LABEL_65;
        v56 = wc;
        wcb = v8;
        result = sub_4138F0(42, v68, (unsigned __int64)v6, v56, v8, v76);
        if ( (_DWORD)result != -1 )
          return result;
        v8 = wcb;
LABEL_65:
        if ( v29 != v6 && *v6 == 46 && v8 )
          return 1LL;
        v31 = v30[1];
        v32 = v30 + 2;
        if ( v31 != 42 && v31 != 63 )
          goto LABEL_77;
        v33 = (v76 & 0x20) != 0;
        do
        {
          if ( *v32 == 40 && v33 )
          {
            wcc = v8;
            v71 = v33;
            v80 = v31;
            v34 = (wint_t *)sub_4136F0(v32);
            v33 = v71;
            v8 = wcc;
            if ( v34 != v32 )
              goto LABEL_75;
            v31 = v80;
          }
          if ( v31 == 63 )
          {
            if ( v6 == v29 || *v6 == 47 && v76 & 1 )
              return 1LL;
            ++v6;
          }
          v34 = v32;
LABEL_75:
          v31 = *v34;
          v32 = v34 + 1;
        }
        while ( *v34 == 63 || v31 == 42 );
LABEL_77:
        if ( v31 )
        {
          v79 = v8;
          wca = v31;
          v35 = wmemchr(v6, -(v76 & 1) & 0x2F, v29 - v6);
          v36 = wca;
          v37 = v35;
          v38 = v79;
          if ( !v35 )
            v37 = (wchar_t *)v29;
          if ( wca == 91
            || v76 & 0x20
            && (v50 = wca - 33, (unsigned int)v50 <= 0x1F)
            && (v51 = 2147484673LL, _bittest64(&v51, v50))
            && *v32 == 40 )
          {
            v52 = v76 & 0xFFFFFFFB;
            if ( v76 & 1 )
              v52 = v76;
            v53 = (__int64)(v32 - 1);
            v54 = v52;
            if ( v37 > v6 )
            {
              v55 = (unsigned __int64)v37;
              do
              {
                if ( !(unsigned int)sub_413E80(v53, v6, v29, v38, v54) )
                  return 0LL;
                ++v6;
                v38 = 0;
              }
              while ( v55 > (unsigned __int64)v6 );
            }
            return 1LL;
          }
          if ( wca != 47 )
          {
            if ( v76 & 1 )
              goto LABEL_84;
            goto LABEL_192;
          }
          if ( !(v76 & 1) )
          {
LABEL_192:
            v76 &= 0xFFFFFFFB;
LABEL_84:
            if ( wca == 92 && !v9 )
              v36 = *v32;
            if ( v28 )
            {
              v69 = v37;
              v39 = towlower(v36);
              v37 = v69;
              v36 = v39;
            }
            v40 = (__int64)(v32 - 1);
            if ( v37 <= v6 )
              return 1LL;
            v70 = v29;
            v41 = v36;
            v42 = v79;
            v43 = (wint_t *)v6;
            v44 = (unsigned __int64)v37;
            while ( 1 )
            {
              v45 = *v43;
              if ( v28 )
                v45 = towlower(v45);
              if ( v41 == v45 && !(unsigned int)sub_413E80(v40, v43, v70, v42, v76) )
                break;
              ++v43;
              v42 = 0;
              if ( v44 <= (unsigned __int64)v43 )
                return 1LL;
            }
            return 0LL;
          }
          if ( v29 <= v6 )
            return 1LL;
          while ( *v6 != 47 )
          {
            ++v6;
            if ( v29 <= v6 )
              return 1LL;
          }
          result = (unsigned int)sub_413E80(v32, v6 + 1, v29, (v76 >> 2) & 1, v76) != 0;
        }
        else
        {
          if ( !(v76 & 1) || v76 & 8 )
            return 0LL;
          result = wmemchr(v6, 47, v29 - v6) != 0LL;
        }
        return result;
      case 0x2Fu:
        if ( v83 != 5 )
          goto LABEL_49;
        if ( (const wchar_t *)wc == v6 || *v6 != 47 )
          return 1LL;
        v11 = (wint_t *)v68;
        v8 = 1;
        goto LABEL_54;
      case 0x3Fu:
        if ( v76 & 0x20 )
        {
          if ( v11[1] == 40 )
          {
            v82 = v8;
            result = sub_4138F0(63, v68, (unsigned __int64)v6, wc, v8, v76);
            v8 = v82;
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( (const wchar_t *)wc == v6 )
          return 1LL;
        if ( *v6 != 47 )
        {
          v8 &= *v6 == 46;
          if ( !v8 )
          {
            v11 = (wint_t *)v68;
            goto LABEL_54;
          }
          return 1LL;
        }
        if ( v76 & 1 )
          return 1LL;
        goto LABEL_53;
      case 0x5Bu:
        if ( !dword_625918 )
        {
          v81 = v8;
          v49 = getenv("POSIXLY_CORRECT");
          v8 = v81;
          dword_625918 = (unsigned __int64)v49 < 1 ? -1 : 1;
        }
        if ( (const wchar_t *)wc == v6 )
          return 1LL;
        v14 = *v6;
        if ( *v6 == 46 )
        {
          if ( v8 )
            return 1LL;
        }
        else if ( v14 == 47 && v76 & 1 )
        {
          return 1LL;
        }
        v15 = v11[1];
        if ( v15 == 33 || dword_625918 < 0 && v15 == 94 )
        {
          v16 = v11 + 2;
          v78 = 1;
        }
        else
        {
          v78 = 0;
          v16 = (wint_t *)v68;
        }
        if ( v10 )
          v14 = towlower(v14);
        v84 = v7;
        v11 = v16 + 1;
        v17 = (wint_t *)v6;
        v18 = *v16;
        v19 = v14;
        while ( 2 )
        {
          while ( 2 )
          {
            if ( !v9 && v18 == 92 )
            {
              v18 = *v11;
              if ( !*v11 )
                return 1LL;
              if ( v10 )
                v18 = towlower(v18);
              v20 = v11[1];
              ++v11;
              goto LABEL_34;
            }
            if ( v18 != 91 )
            {
              if ( v18 )
              {
                v20 = *v11;
                goto LABEL_32;
              }
              v6 = (const wchar_t *)v17;
              v7 = v84;
LABEL_50:
              v25 = *v6;
              if ( v10 )
                v25 = towlower(v25);
              if ( v25 != v7 )
                return 1LL;
LABEL_53:
              v11 = (wint_t *)v68;
              v8 = 0;
              goto LABEL_54;
            }
            v20 = *v11;
            if ( *v11 != 58 )
            {
              while ( 1 )
              {
LABEL_32:
                if ( v10 )
                  v18 = towlower(v18);
LABEL_34:
                i = (__int64)(v11 + 1);
                if ( v20 != 45 )
                  break;
                v22 = v11[1];
                if ( v22 != 93 && v22 )
                  goto LABEL_213;
                if ( v18 == v19 )
                {
                  v6 = (const wchar_t *)v17;
                  goto LABEL_152;
                }
                if ( v22 != 93 )
                {
LABEL_213:
                  v23 = v11 + 2;
                  if ( v22 == 92 && !v9 )
                  {
                    v23 = v11 + 3;
                    v22 = v11[2];
                  }
                  if ( !v22 )
                    return 1LL;
                  v20 = *v23;
                  v11 = v23 + 1;
                  v24 = v18 <= v19;
                  v18 = *v23;
                  if ( v22 >= v19 && v24 )
                  {
                    v11 = v23;
                    v6 = (const wchar_t *)v17;
                    i = (__int64)(v23 + 1);
                    goto LABEL_152;
                  }
                  goto LABEL_26;
                }
                v20 = 93;
                ++v11;
                v18 = 45;
              }
              if ( v18 == v19 )
                goto LABEL_148;
              v18 = v20;
              ++v11;
LABEL_26:
              if ( v18 == 93 )
              {
                v6 = (const wchar_t *)v17;
                if ( !v78 )
                  return 1LL;
                goto LABEL_99;
              }
              continue;
            }
            break;
          }
          v46 = v11;
          v47 = 0LL;
          while ( 1 )
          {
            v48 = v46[1];
            if ( v48 == 58 )
              break;
            if ( (unsigned int)(v48 - 97) > 0x18 )
              goto LABEL_109;
            ++v47;
            ++v46;
            *(&v86 + v47) = v48;
            if ( v47 == 256 )
              return 1LL;
          }
          if ( v46[2] != 93 )
          {
LABEL_109:
            i = (__int64)(v11 + 1);
            if ( v19 != 91 )
            {
              ++v11;
              v18 = 58;
              continue;
            }
LABEL_148:
            v6 = (const wchar_t *)v17;
            v20 = *v11;
            goto LABEL_152;
          }
          break;
        }
        v87[v47] = 0;
        v63 = &property;
        v64 = v87;
        v65 = v87[0];
        do
        {
          if ( v65 <= 63 )
          {
            if ( v65 < 37 && (unsigned int)(v65 - 32) > 3 )
              return 1LL;
          }
          else if ( v65 < 65 || v65 > 95 && (unsigned int)(v65 - 97) > 0x1D )
          {
            return 1LL;
          }
          if ( v64 == _540 )
            return 1LL;
          ++v64;
          *(++v63 - 1) = v65;
          v65 = *v64;
        }
        while ( *v64 );
        *v63 = 0;
        v66 = wctype(&property);
        if ( !v66 )
          return 1LL;
        if ( !iswctype(*v17, v66) )
        {
          v11 = v46 + 4;
          v18 = v46[3];
          goto LABEL_26;
        }
        v67 = v46;
        v11 = v46 + 3;
        v6 = (const wchar_t *)v17;
        v20 = v46[3];
        for ( i = (__int64)(v67 + 4); ; i = (__int64)(v11 + 1) )
        {
LABEL_152:
          v57 = (int *)i;
          v58 = v20;
          if ( !v20 )
            return 1LL;
          v8 = v9 == 0 && v20 == 92;
          if ( v8 )
          {
            if ( v11[1] )
            {
              v20 = v11[2];
              v11 += 2;
              continue;
            }
            return 1LL;
          }
          if ( v20 != 91 )
            goto LABEL_149;
          v20 = v11[1];
          if ( v20 != 58 )
            break;
          v61 = (int *)(v11 + 2);
          v20 = v11[2];
          v62 = (__int64)(v11 + 257);
          while ( 1 )
          {
            if ( v20 == 58 )
            {
              if ( v61[1] != 93 )
                goto LABEL_158;
              v57 = v61 + 3;
              v58 = v61[2];
              goto LABEL_149;
            }
            if ( (unsigned int)(v20 - 97) > 0x18 )
              break;
            ++v61;
            v20 = *v61;
            if ( (int *)v62 == v61 )
              return 1LL;
          }
          v20 = 58;
          v11 = (wint_t *)i;
LABEL_151:
          ;
        }
        if ( v20 == 61 )
        {
          if ( v11[2] && v11[3] == 61 && v11[4] == 93 )
          {
            v57 = (int *)(v11 + 6);
            v58 = v11[5];
            goto LABEL_149;
          }
          return 1LL;
        }
        v59 = v11 + 2;
        if ( v20 != 46 )
        {
LABEL_158:
          v11 = (wint_t *)i;
          goto LABEL_151;
        }
        while ( 1 )
        {
          v60 = v59[1];
          if ( !v60 )
            return 1LL;
          if ( v60 == 46 && v59[2] == 93 )
            break;
          ++v59;
        }
        v57 = v59 + 4;
        v58 = v59[3];
LABEL_149:
        if ( v58 != 93 )
        {
          v20 = *v57;
          v11 = (wint_t *)v57;
          goto LABEL_151;
        }
        if ( v78 )
          return 1LL;
        v11 = (wint_t *)v57;
LABEL_54:
        v7 = *v11;
        ++v6;
        v68 = (__int64)(v11 + 1);
        if ( !*v11 )
        {
          v5 = (const wchar_t *)wc;
LABEL_56:
          if ( v6 == v5 )
            return 0LL;
          if ( v76 & 8 )
            return *v6 != 47;
          return 1LL;
        }
        continue;
      case 0x5Cu:
        if ( v9 )
        {
          if ( (const wchar_t *)wc == v6 )
            return 1LL;
          if ( v10 )
          {
LABEL_10:
            v13 = towlower(*v6);
            v11 = (wint_t *)v68;
            goto LABEL_98;
          }
        }
        else
        {
          v7 = v11[1];
          v68 = (__int64)(v11 + 2);
          if ( !v7 )
            return 1LL;
          if ( v10 )
          {
            v7 = towlower(v7);
            if ( (const wchar_t *)wc == v6 )
              return 1LL;
            goto LABEL_10;
          }
          if ( (const wchar_t *)wc == v6 )
            return 1LL;
        }
        v13 = *v6;
        v11 = (wint_t *)v68;
LABEL_98:
        if ( v13 != v7 )
          return 1LL;
LABEL_99:
        v8 = 0;
        goto LABEL_54;
      default:
LABEL_49:
        if ( (const wchar_t *)wc != v6 )
          goto LABEL_50;
        return 1LL;
    }
  }
}

__int64 __fastcall sub_414960(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned int v6; // er12
  int v7; // eax
  __int64 i; // r14
  const void *v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 result; // rax
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  void *v18; // rsp
  _BYTE *v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  void *v24; // rsp
  _BYTE *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  _QWORD *v28; // r14
  unsigned int v29; // er12
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r13
  _BOOL8 v33; // rcx
  _BOOL8 v34; // rcx
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // r13
  unsigned int v37; // ebx
  _QWORD *v38; // r14
  __int64 v39; // rcx
  __int64 v40; // r13
  unsigned __int64 v41; // r15
  unsigned int v42; // ebx
  char *v43; // rax
  __int64 v44; // [rsp+8h] [rbp-78h]
  unsigned __int8 v45; // [rsp+13h] [rbp-6Dh]
  unsigned int v46; // [rsp+14h] [rbp-6Ch]
  unsigned __int64 v47; // [rsp+18h] [rbp-68h]
  unsigned __int64 v48; // [rsp+20h] [rbp-60h]
  __int64 v49; // [rsp+28h] [rbp-58h]
  size_t v50; // [rsp+30h] [rbp-50h]
  __int64 v51; // [rsp+38h] [rbp-48h]
  _QWORD *v52; // [rsp+48h] [rbp-38h]

  LOBYTE(v6) = a5;
  LODWORD(v51) = a1;
  v48 = a3;
  v47 = a4;
  v46 = a6;
  v45 = a5;
  v52 = 0LL;
  v50 = strlen((const char *)a2);
  v7 = *(unsigned __int8 *)(a2 + 1);
  if ( !(_BYTE)v7 )
    return 0xFFFFFFFFLL;
  i = a2 + 1;
  v44 = a2;
  v9 = (const void *)(a2 + 1);
  v10 = (__int64 *)&v52;
  v11 = 3221227009LL;
  v12 = 0LL;
  LODWORD(v49) = v51 - 63;
  while ( 2 )
  {
    while ( (_BYTE)v7 == 91 )
    {
      if ( !dword_625918 )
        dword_625918 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? -1 : 1;
      v14 = *(_BYTE *)(i + 1);
      if ( v14 == 33 || dword_625918 < 0 && v14 == 94 )
      {
        v15 = i + 2;
        v14 = *(_BYTE *)(i + 2);
      }
      else
      {
        v15 = i + 1;
      }
      if ( v14 != 93 )
        goto LABEL_27;
      v14 = *(_BYTE *)++v15;
      for ( i = v15 + 1; v14 != 93; i = v15 + 1 )
      {
        if ( !v14 )
          return 0xFFFFFFFFLL;
        v14 = *(_BYTE *)i;
        v15 = i;
LABEL_27:
        ;
      }
      v7 = *(unsigned __int8 *)(v15 + 1);
LABEL_6:
      if ( !(_BYTE)v7 )
        return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)(v7 - 33) > 0x1Fu )
      {
        if ( (_BYTE)v7 != 124 || v12 )
        {
LABEL_5:
          v7 = *(unsigned __int8 *)++i;
        }
        else
        {
          v16 = i - (_QWORD)v9 + 1;
          if ( (unsigned int)v49 <= 1 )
            v16 = v50;
          v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v17 - 8 > 0x1F37 )
            return 0xFFFFFFFFLL;
          v18 = alloca(v17 + 8);
          v19 = mempcpy((void *)((((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8), v9, i - (_QWORD)v9);
          v9 = (const void *)(i + 1);
          *v19 = 0;
          v7 = *(unsigned __int8 *)++i;
          *(_QWORD *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
          *v10 = ((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL;
          v10 = (__int64 *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL);
          v12 = 0LL;
        }
        goto LABEL_6;
      }
      if ( !_bittest64(&v11, (unsigned int)(v7 - 33)) || *(_BYTE *)(i + 1) != 40 )
        break;
      ++v12;
      ++i;
      v7 = 40;
    }
    if ( (_BYTE)v7 != 41 )
      goto LABEL_5;
    if ( v12 )
    {
      v7 = *(unsigned __int8 *)(i + 1);
      --v12;
      ++i;
      if ( !(_BYTE)v7 )
        return 0xFFFFFFFFLL;
      continue;
    }
    break;
  }
  v20 = v10;
  v21 = v44;
  v22 = i - (_QWORD)v9 + 1;
  if ( (unsigned int)(v51 - 63) <= 1 )
    v22 = v50;
  v23 = (v22 + 15) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v23 - 8 > 0x1F37 )
    return 0xFFFFFFFFLL;
  v24 = alloca(v23 + 8);
  v25 = mempcpy((void *)((((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8), v9, i - (_QWORD)v9);
  *v20 = ((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  *v25 = 0;
  v26 = (__int64)v52;
  *(_QWORD *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
  v50 = v26;
  if ( !v26 )
    __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_match");
  if ( *(_BYTE *)(i - 1) != 41 )
    __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_match");
  switch ( (_DWORD)v51 )
  {
    case 0x21:
      if ( v48 > v47 )
        return 1LL;
      v35 = v48;
      v51 = i;
      v36 = v48;
      v37 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v37 = v46;
      while ( 2 )
      {
        v38 = (_QWORD *)v50;
        while ( (unsigned int)sub_414EB0(v38 + 1, v35, v36, (unsigned __int8)v6, v37) )
        {
          v38 = (_QWORD *)*v38;
          if ( !v38 )
          {
            if ( v35 == v36 )
            {
              v39 = (unsigned __int8)v6;
            }
            else
            {
              v39 = 0LL;
              if ( *(_BYTE *)(v36 - 1) == 47 )
                v39 = (v46 & 5) == 5;
            }
            if ( !(unsigned int)sub_414EB0(v51, v36, v47, v39, v37) )
              return 0LL;
            break;
          }
        }
        if ( v47 >= ++v36 )
          continue;
        break;
      }
      return 1LL;
    case 0x2A:
      if ( (unsigned int)sub_414EB0(i, v48, v47, (unsigned __int8)v6, v46) )
        goto LABEL_41;
      return 0LL;
    case 0x2B:
LABEL_41:
      v27 = v48;
      v49 = i;
      v28 = (_QWORD *)v50;
      v29 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v29 = v46;
      v30 = v21 - 1;
      LODWORD(v50) = v46 & 1;
      v31 = v47;
      v44 = v30;
      do
      {
        if ( v27 <= v31 )
        {
          v32 = v27;
          LODWORD(v51) = v45;
          do
          {
            if ( !(unsigned int)sub_414EB0(v28 + 1, v27, v32, (unsigned int)v51, v29) )
            {
              if ( v27 == v32 )
              {
                if ( !(unsigned int)sub_414EB0(v49, v27, v31, (unsigned int)v51, v29) )
                  return 0LL;
              }
              else
              {
                v33 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v33 = (v46 & 5) == 5;
                if ( !(unsigned int)sub_414EB0(v49, v32, v31, v33, v29) )
                  return 0LL;
                v34 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v34 = (v46 & 5) == 5;
                if ( !(unsigned int)sub_414EB0(v44, v32, v31, v34, v29) )
                  return 0LL;
              }
              v28 = v52;
            }
            ++v32;
          }
          while ( v31 >= v32 );
        }
        v28 = (_QWORD *)*v28;
        v52 = v28;
      }
      while ( v28 );
      return 1LL;
    case 0x3F:
      v6 = (unsigned __int8)v6;
      if ( (unsigned int)sub_414EB0(i, v48, v47, (unsigned __int8)v6, v46) )
        goto LABEL_71;
      return 0LL;
    case 0x40:
      v6 = (unsigned __int8)v6;
LABEL_71:
      v40 = v50;
      v41 = v47;
      v42 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v42 = v46;
      break;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_match");
      return result;
  }
  while ( 1 )
  {
    v43 = strcat((char *)(v40 + 8), (const char *)i);
    if ( !(unsigned int)sub_414EB0(v43, v48, v41, v6, v42) )
      break;
    v40 = *(_QWORD *)v40;
    v52 = (_QWORD *)v40;
    if ( !v40 )
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_414EB0(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  unsigned __int8 *v5; // r14
  __int64 v6; // r12
  unsigned __int8 *v7; // r13
  unsigned __int8 v8; // r15
  int v9; // ebp
  int v10; // ebx
  unsigned __int8 v11; // r12
  int v12; // eax
  __int32_t v13; // edx
  __int64 v14; // r12
  unsigned __int8 v15; // al
  unsigned __int8 *v16; // r15
  __int64 v17; // r15
  unsigned __int8 v18; // si
  unsigned __int8 *j; // rax
  unsigned __int8 v20; // dl
  int v21; // ecx
  unsigned __int8 *v22; // r8
  unsigned __int8 v23; // cl
  __int32_t v24; // eax
  __int64 v25; // r13
  __int64 result; // rax
  __int64 v27; // r8
  unsigned __int8 *v28; // r9
  unsigned __int8 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int8 v32; // r8
  unsigned __int8 *v33; // r12
  unsigned __int8 *v34; // r9
  const __int32_t **v35; // rax
  int v36; // ebp
  unsigned int i; // er13
  __int32_t v38; // eax
  unsigned __int8 v39; // r15
  const __int32_t *v40; // rdx
  unsigned __int8 *v41; // r15
  __int64 v42; // rdx
  unsigned __int8 v43; // al
  _BYTE *v44; // r13
  char v45; // al
  const __int32_t **v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // er13
  __int64 v50; // rdx
  __int64 v51; // r13
  wctype_t v52; // r13
  wint_t v53; // eax
  unsigned __int64 v54; // [rsp+8h] [rbp-170h]
  __int64 v55; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v56; // [rsp+10h] [rbp-168h]
  __int64 v57; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v58; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v59; // [rsp+18h] [rbp-160h]
  unsigned __int8 v60; // [rsp+18h] [rbp-160h]
  char v61; // [rsp+18h] [rbp-160h]
  unsigned int v62; // [rsp+20h] [rbp-158h]
  int v63; // [rsp+28h] [rbp-150h]
  unsigned __int8 v64; // [rsp+28h] [rbp-150h]
  int v65; // [rsp+2Ch] [rbp-14Ch]
  char property[328]; // [rsp+30h] [rbp-148h]

  v5 = a2;
  v6 = *a1;
  v54 = a3;
  v62 = a5;
  v55 = (__int64)(a1 + 1);
  if ( !(_BYTE)v6 )
    goto LABEL_66;
  v7 = a1;
  v63 = a5 & 5;
  v8 = a4;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  while ( 2 )
  {
    if ( v10 )
      LODWORD(v6) = LOBYTE((*__ctype_tolower_loc())[v6]);
    switch ( (_BYTE)v6 )
    {
      case 0x21:
      case 0x2B:
      case 0x40:
        if ( !(v62 & 0x20) )
          goto LABEL_60;
        if ( v7[1] != 40 )
          goto LABEL_60;
        result = sub_414960((unsigned __int8)v6, v55, (unsigned __int64)v5, v54, v8, v62);
        if ( (_DWORD)result == -1 )
          goto LABEL_60;
        return result;
      case 0x2A:
        if ( v62 & 0x20 )
        {
          if ( v7[1] == 40 )
          {
            result = sub_414960(42, v55, (unsigned __int64)v5, v54, v8, v62);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( v5 != (unsigned __int8 *)v54 && *v5 == 46 && v8 )
          return 1LL;
        v27 = v7[1];
        v28 = v7 + 2;
        if ( (_BYTE)v27 != 42 && (_BYTE)v27 != 63 )
          goto LABEL_86;
        do
        {
          if ( *v28 == 40 && (v62 & 0x20) != 0 )
          {
            v58 = v28;
            v61 = v27;
            v29 = (unsigned __int8 *)sub_4137F0(v28);
            v28 = v58;
            if ( v29 != v58 )
              goto LABEL_84;
            LOBYTE(v27) = v61;
          }
          if ( (_BYTE)v27 == 63 )
          {
            if ( v5 == (unsigned __int8 *)v54 || *v5 == 47 && v62 & 1 )
              return 1LL;
            ++v5;
          }
          v29 = v28;
LABEL_84:
          v27 = *v29;
          v28 = v29 + 1;
        }
        while ( (_BYTE)v27 == 63 || (_BYTE)v27 == 42 );
LABEL_86:
        v30 = v62 & 1;
        if ( (_BYTE)v27 )
        {
          v64 = v27;
          v59 = v28;
          v31 = sub_416F00(v5, -(int)v30 & 0x2F, v54 - (_QWORD)v5, v30, v27, v28);
          v32 = v64;
          v33 = (unsigned __int8 *)v31;
          v34 = v59;
          if ( !v31 )
            v33 = (unsigned __int8 *)v54;
          if ( v64 == 91
            || v62 & 0x20
            && (unsigned __int8)(v64 - 33) <= 0x1Fu
            && (v47 = 2147484673LL, _bittest64(&v47, (unsigned int)v64 - 33))
            && *v59 == 40 )
          {
            v48 = v62 & 0xFFFFFFFB;
            if ( v62 & 1 )
              v48 = v62;
            v49 = v48;
            if ( v33 > v5 )
            {
              do
              {
                if ( !(unsigned int)sub_414EB0(v59 - 1, v5, v54, v8, v49) )
                  return 0LL;
                ++v5;
                v8 = 0;
              }
              while ( v33 != v5 );
            }
            return 1LL;
          }
          if ( v64 != 47 )
          {
            if ( v62 & 1 )
              goto LABEL_93;
            goto LABEL_187;
          }
          if ( !(v62 & 1) )
          {
LABEL_187:
            v62 &= 0xFFFFFFFB;
LABEL_93:
            if ( v64 == 92 && !v9 )
              v32 = *v59;
            if ( v10 )
            {
              v60 = v32;
              v56 = v34;
              v35 = __ctype_tolower_loc();
              v34 = v56;
              v32 = (*v35)[v60];
            }
            v57 = (__int64)(v34 - 1);
            if ( v33 <= v5 )
              return 1LL;
            v36 = v32;
            for ( i = v8; ; i = 0 )
            {
              v38 = *v5;
              if ( v10 )
              {
                v39 = *v5;
                v38 = (*__ctype_tolower_loc())[v39];
              }
              if ( v38 == v36 && !(unsigned int)sub_414EB0(v57, v5, v54, i, v62) )
                break;
              if ( v33 == ++v5 )
                return 1LL;
            }
            return 0LL;
          }
          if ( v54 <= (unsigned __int64)v5 )
            return 1LL;
          while ( *v5 != 47 )
          {
            if ( (unsigned __int8 *)v54 == ++v5 )
              return 1LL;
          }
          result = (unsigned int)sub_414EB0(v59, v5 + 1, v54, (v62 >> 2) & 1, v62) != 0;
        }
        else
        {
          if ( !(v62 & 1) || v62 & 8 )
            return 0LL;
          result = sub_416F00(v5, 47LL, v54 - (_QWORD)v5, v30, v27, v28) != 0;
        }
        return result;
      case 0x2F:
        if ( v63 != 5 )
          goto LABEL_60;
        if ( v5 == (unsigned __int8 *)v54 || *v5 != 47 )
          return 1LL;
        v7 = (unsigned __int8 *)v55;
        v8 = 1;
        goto LABEL_65;
      case 0x3F:
        if ( v62 & 0x20 )
        {
          if ( v7[1] == 40 )
          {
            result = sub_414960(63, v55, (unsigned __int64)v5, v54, v8, v62);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( v5 == (unsigned __int8 *)v54 )
          return 1LL;
        if ( *v5 != 47 )
        {
          v8 &= *v5 == 46;
          if ( !v8 )
          {
            v7 = (unsigned __int8 *)v55;
            goto LABEL_65;
          }
          return 1LL;
        }
        if ( v62 & 1 )
          return 1LL;
        goto LABEL_64;
      case 0x5B:
        if ( !dword_625918 )
          dword_625918 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? -1 : 1;
        if ( v5 == (unsigned __int8 *)v54 )
          return 1LL;
        v14 = *v5;
        if ( (_BYTE)v14 == 46 )
        {
          if ( v8 )
            return 1LL;
        }
        else if ( (_BYTE)v14 == 47 && v62 & 1 )
        {
          return 1LL;
        }
        v15 = v7[1];
        if ( v15 == 33 || dword_625918 < 0 && v15 == 94 )
        {
          v16 = v7 + 2;
          v65 = 1;
        }
        else
        {
          v65 = 0;
          v16 = (unsigned __int8 *)v55;
        }
        if ( v10 )
          LOBYTE(v14) = (*__ctype_tolower_loc())[v14];
        v7 = v16 + 1;
        v17 = *v16;
LABEL_30:
        while ( 2 )
        {
          if ( !v9 && (_BYTE)v17 == 92 )
          {
            v17 = *v7;
            if ( !(_BYTE)v17 )
              return 1LL;
            if ( v10 )
              LOBYTE(v17) = (*__ctype_tolower_loc())[v17];
            v18 = *++v7;
            goto LABEL_37;
          }
          if ( (_BYTE)v17 != 91 )
          {
            if ( (_BYTE)v17 )
            {
              v18 = *v7;
              goto LABEL_35;
            }
            LODWORD(v6) = 91;
LABEL_61:
            v24 = *v5;
            if ( v10 )
            {
              v25 = *v5;
              v24 = (*__ctype_tolower_loc())[v25];
            }
            if ( v24 != (_DWORD)v6 )
              return 1LL;
LABEL_64:
            v7 = (unsigned __int8 *)v55;
            v8 = 0;
            goto LABEL_65;
          }
          v18 = *v7;
          if ( *v7 != 58 )
          {
            while ( 1 )
            {
LABEL_35:
              if ( v10 )
                LOBYTE(v17) = (*__ctype_tolower_loc())[v17];
LABEL_37:
              j = v7 + 1;
              if ( v18 != 45 )
                break;
              v20 = v7[1];
              if ( v20 != 93 && v20 )
              {
                v21 = (char)v17;
LABEL_41:
                j = v7 + 2;
                if ( !v9 && v20 == 92 )
                {
                  j = v7 + 3;
                  v20 = v7[2];
                }
                if ( !v20 )
                  return 1LL;
                v18 = *j;
                v7 = j + 1;
                v17 = *j;
                if ( v21 <= (unsigned __int8)v14 && (unsigned __int8)v14 <= v20 )
                  goto LABEL_47;
LABEL_29:
                if ( (_BYTE)v17 == 93 )
                {
                  if ( !v65 )
                    return 1LL;
                  goto LABEL_13;
                }
                goto LABEL_30;
              }
              if ( (_BYTE)v14 == (_BYTE)v17 )
                goto LABEL_49;
              v21 = (char)v17;
              if ( v20 != 93 )
                goto LABEL_41;
              v18 = 93;
              ++v7;
              v17 = 45LL;
            }
            if ( (_BYTE)v14 == (_BYTE)v17 )
              goto LABEL_177;
            v17 = v18;
            ++v7;
            goto LABEL_29;
          }
          v41 = v7;
          v42 = 0LL;
          while ( 1 )
          {
            v43 = v41[1];
            if ( v43 == 58 )
              break;
            if ( (unsigned __int8)(v43 - 97) > 0x18u )
              goto LABEL_117;
            ++v42;
            ++v41;
            *((_BYTE *)&v65 + v42 + 3) = v43;
            if ( v42 == 256 )
              return 1LL;
          }
          if ( v41[2] != 93 )
          {
LABEL_117:
            j = v7 + 1;
            if ( (_BYTE)v14 != 91 )
            {
              ++v7;
              v17 = 58LL;
              continue;
            }
LABEL_177:
            v18 = *v7;
            goto LABEL_49;
          }
          break;
        }
        property[v42] = 0;
        v52 = wctype(property);
        if ( !v52 )
          return 1LL;
        v53 = btowc(*v5);
        if ( !iswctype(v53, v52) )
        {
          v7 = v41 + 4;
          v17 = v41[3];
          goto LABEL_29;
        }
        v7 = v41 + 3;
        v18 = v41[3];
        for ( j = v41 + 4; ; j = v7 + 1 )
        {
LABEL_49:
          v22 = j;
          v23 = v18;
          if ( !v18 )
            return 1LL;
          v8 = v9 == 0 && v18 == 92;
          if ( v8 )
          {
            if ( v7[1] )
            {
              v18 = v7[2];
              v7 += 2;
              continue;
            }
            return 1LL;
          }
          if ( v18 != 91 )
            goto LABEL_52;
          v18 = v7[1];
          if ( v18 != 58 )
            break;
          v50 = (__int64)(v7 + 2);
          v18 = v7[2];
          v51 = (__int64)(v7 + 257);
          while ( 1 )
          {
            if ( v18 == 58 )
            {
              if ( *(_BYTE *)(v50 + 1) == 93 )
              {
                v22 = (unsigned __int8 *)(v50 + 3);
                v23 = *(_BYTE *)(v50 + 2);
                goto LABEL_52;
              }
LABEL_47:
              v7 = j;
              goto LABEL_48;
            }
            if ( (unsigned __int8)(v18 - 97) > 0x18u )
              break;
            v18 = *(_BYTE *)++v50;
            if ( v51 == v50 )
              return 1LL;
          }
          v18 = 58;
          v7 = j;
LABEL_48:
          ;
        }
        if ( v18 == 61 )
        {
          if ( v7[2] && v7[3] == 61 && v7[4] == 93 )
          {
            v22 = v7 + 6;
            v23 = v7[5];
            goto LABEL_52;
          }
          return 1LL;
        }
        v44 = v7 + 2;
        if ( v18 != 46 )
          goto LABEL_47;
        while ( 1 )
        {
          v45 = v44[1];
          if ( !v45 )
            return 1LL;
          if ( v45 == 46 && v44[2] == 93 )
            break;
          ++v44;
        }
        v22 = v44 + 4;
        v23 = v44[3];
LABEL_52:
        if ( v23 != 93 )
        {
          v7 = v22;
          v18 = *v22;
          j = v22 + 1;
          goto LABEL_49;
        }
        if ( v65 )
          return 1LL;
        v7 = v22;
LABEL_65:
        v6 = *v7;
        ++v5;
        v55 = (__int64)(v7 + 1);
        if ( !(_BYTE)v6 )
        {
LABEL_66:
          if ( (unsigned __int8 *)v54 == v5 )
            return 0LL;
          if ( v62 & 8 )
            return *v5 != 47;
          return 1LL;
        }
        continue;
      case 0x5C:
        if ( v9 )
        {
          if ( v5 == (unsigned __int8 *)v54 )
            return 1LL;
          if ( !v10 )
          {
            v12 = 92;
LABEL_11:
            v13 = *v5;
            v7 = (unsigned __int8 *)v55;
            goto LABEL_12;
          }
          v7 = (unsigned __int8 *)v55;
          v40 = *__ctype_tolower_loc();
          v12 = 92;
        }
        else
        {
          v11 = v7[1];
          v55 = (__int64)(v7 + 2);
          if ( !v11 )
            return 1LL;
          if ( !v10 )
          {
            if ( v5 == (unsigned __int8 *)v54 )
              return 1LL;
            v12 = v11;
            goto LABEL_11;
          }
          v46 = __ctype_tolower_loc();
          v40 = *v46;
          v12 = (*v46)[v11];
          if ( v5 == (unsigned __int8 *)v54 )
            return 1LL;
          v12 = (unsigned __int8)v12;
          v7 += 2;
        }
        v13 = v40[*v5];
LABEL_12:
        if ( v13 != v12 )
          return 1LL;
LABEL_13:
        v8 = 0;
        goto LABEL_65;
      default:
LABEL_60:
        if ( v5 != (unsigned __int8 *)v54 )
          goto LABEL_61;
        return 1LL;
    }
  }
}

__int64 __fastcall sub_4159A0(char *a1, char *a2, unsigned int a3)
{
  unsigned int v3; // er12
  unsigned __int8 *v4; // rbx
  size_t v5; // rax
  __int64 result; // rax
  size_t v7; // rax
  size_t v8; // rbx
  size_t v9; // rax
  size_t v10; // r13
  unsigned __int64 v11; // rax
  size_t v12; // rdi
  void *v13; // rsp
  wchar_t *v14; // rax
  wint_t *v15; // r14
  wchar_t *v16; // r15
  unsigned int v17; // [rsp+Ch] [rbp-54h]
  char *s; // [rsp+10h] [rbp-50h]
  char *src; // [rsp+18h] [rbp-48h]
  mbstate_t ps; // [rsp+28h] [rbp-38h]

  v3 = a3;
  src = a1;
  s = a2;
  if ( __ctype_get_mb_cur_max() == 1 )
    goto LABEL_22;
  ps = 0LL;
  v7 = mbsrtowcs(0LL, (const char **)&src, 0LL, &ps);
  v8 = v7 + 1;
  if ( v7 == -1LL )
    goto LABEL_22;
  if ( !mbsinit(&ps) )
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x129u, "gnu_fnmatch");
  v9 = mbsrtowcs(0LL, (const char **)&s, 0LL, &ps);
  v10 = v9 + 1;
  if ( v9 == -1LL )
  {
LABEL_22:
    v4 = (unsigned __int8 *)s;
    v5 = strlen(s);
    return sub_414EB0((unsigned __int8 *)src, v4, (unsigned __int64)&v4[v5], (v3 >> 2) & 1, v3);
  }
  if ( !mbsinit(&ps) )
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x12Du, "gnu_fnmatch");
  v11 = v10 + v8;
  if ( __CFADD__(v10, v8) || v11 > 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_23;
  v12 = 4 * v11;
  if ( v11 <= 0x7CF )
  {
    v13 = alloca(v12 + 8);
    mbsrtowcs((wchar_t *)(((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL), (const char **)&src, v8, &ps);
    if ( mbsinit(&ps) )
    {
      mbsrtowcs(
        (wchar_t *)((((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL) + 4 * v8),
        (const char **)&s,
        v10,
        &ps);
      return sub_413E80(
               (wint_t *)(((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL),
               (const wchar_t *)((((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL) + 4 * v8),
               (((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL) + 4 * v8 + 4 * v10 - 4,
               (v3 >> 2) & 1,
               v3);
    }
LABEL_17:
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x147u, "gnu_fnmatch");
  }
  v14 = (wchar_t *)malloc(v12);
  v15 = (wint_t *)v14;
  if ( !v14 )
  {
LABEL_23:
    *__errno_location() = 12;
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v16 = &v14[v8];
    mbsrtowcs(v14, (const char **)&src, v8, &ps);
    if ( !mbsinit(&ps) )
      goto LABEL_17;
    mbsrtowcs(v16, (const char **)&s, v10, &ps);
    v17 = sub_413E80(v15, v16, (unsigned __int64)&v16[v10 - 1], (v3 >> 2) & 1, v3);
    free(v15);
    result = v17;
  }
  return result;
}

char *__fastcall sub_415BE0(char *a1, size_t a2)
{
  char *v3; // rbx
  __dev_t v4; // r15
  __ino_t v5; // r14
  DIR *v6; // rbp
  int v7; // er15
  int *v8; // r12
  int v9; // eax
  bool v10; // r13
  struct dirent *v11; // rax
  const char *v12; // rbx
  signed __int64 v13; // r13
  size_t v14; // r14
  char *v15; // rdx
  char *v16; // rax
  size_t v17; // rbx
  char *v18; // rax
  int v19; // ebx
  __dev_t v20; // [rsp+8h] [rbp-120h]
  size_t v21; // [rsp+8h] [rbp-120h]
  __dev_t v22; // [rsp+10h] [rbp-118h]
  char *ptr; // [rsp+18h] [rbp-110h]
  char *v24; // [rsp+20h] [rbp-108h]
  size_t size; // [rsp+28h] [rbp-100h]
  bool v26; // [rsp+3Fh] [rbp-E9h]
  char *src; // [rsp+40h] [rbp-E8h]
  char *srca; // [rsp+40h] [rbp-E8h]
  __dev_t v29; // [rsp+48h] [rbp-E0h]
  __ino_t v30; // [rsp+50h] [rbp-D8h]
  __ino_t v31; // [rsp+58h] [rbp-D0h]
  struct stat stat_buf; // [rsp+60h] [rbp-C8h]

  v24 = a1;
  if ( !a2 )
  {
    size = 4096LL;
    if ( a1 )
    {
      ptr = 0LL;
      *__errno_location() = 22;
      return ptr;
    }
LABEL_3:
    ptr = (char *)malloc(size);
    if ( !ptr )
      return ptr;
    goto LABEL_7;
  }
  size = a2;
  if ( !a1 )
    goto LABEL_3;
  ptr = a1;
LABEL_7:
  v3 = &ptr[size];
  ptr[size - 1] = 0;
  if ( __lxstat(1, ".", &stat_buf) < 0
    || (v4 = stat_buf.st_dev, v5 = stat_buf.st_ino, v20 = stat_buf.st_dev, __lxstat(1, "/", &stat_buf) < 0) )
  {
    v8 = __errno_location();
LABEL_58:
    v19 = *v8;
    if ( a1 )
      goto LABEL_56;
    goto LABEL_59;
  }
  src = v3 - 1;
  v30 = stat_buf.st_ino;
  v29 = stat_buf.st_dev;
  v26 = v5 != stat_buf.st_ino || v4 != stat_buf.st_dev;
  if ( !v26 )
    goto LABEL_37;
  v6 = 0LL;
  v7 = -100;
  v8 = __errno_location();
  do
  {
    v9 = openat(v7, "..", 0);
    v7 = v9;
    if ( v9 < 0 )
    {
      v19 = *v8;
      if ( v6 )
LABEL_54:
        closedir(v6);
LABEL_55:
      if ( a1 )
      {
LABEL_56:
        *v8 = v19;
        return 0LL;
      }
LABEL_59:
      free(ptr);
      goto LABEL_56;
    }
    if ( __fxstat(1, v9, &stat_buf) )
    {
      v19 = *v8;
      if ( v6 )
        closedir(v6);
      goto LABEL_62;
    }
    if ( v6 && closedir(v6) || (v22 = stat_buf.st_dev, v31 = stat_buf.st_ino, (v6 = fdopendir(v7)) == 0LL) )
    {
      v19 = *v8;
LABEL_62:
      close(v7);
      goto LABEL_55;
    }
    v10 = v26;
    do
    {
      while ( 1 )
      {
        *v8 = 0;
        v11 = readdir(v6);
        if ( v11 )
        {
          if ( v11->d_name[0] != 46 )
            goto LABEL_19;
          goto LABEL_48;
        }
        v19 = *v8;
        if ( *v8 || !v10 )
          goto LABEL_52;
        rewinddir(v6);
        v11 = readdir(v6);
        if ( !v11 )
        {
          v19 = *v8;
LABEL_52:
          if ( !v19 )
          {
            *v8 = 2;
            v19 = 2;
          }
          goto LABEL_54;
        }
        v10 = 0;
        if ( v11->d_name[0] != 46 )
          break;
LABEL_48:
        if ( v11->d_name[1] && *(_WORD *)&v11->d_name[1] != 46 )
        {
LABEL_19:
          if ( !v10 )
            break;
          if ( v22 != v20 || v11->d_ino == v5 )
          {
            v10 = v22 != v20 || v11->d_ino == v5;
            break;
          }
        }
      }
      v12 = v11->d_name;
    }
    while ( __fxstatat(1, v7, v11->d_name, &stat_buf, 256)
         || (stat_buf.st_mode & 0xF000) != 0x4000
         || stat_buf.st_dev != v20
         || stat_buf.st_ino != v5 );
    v13 = src - ptr;
    v14 = strlen(v12);
    if ( src - ptr <= v14 )
    {
      if ( a2 )
      {
        *v8 = 34;
        v19 = 34;
        goto LABEL_54;
      }
      v15 = (char *)size;
      if ( v14 >= size )
        v15 = (char *)v14;
      srca = v15;
      v21 = (size_t)&v15[size];
      if ( __CFADD__(v15, size) || (v16 = (char *)realloc(ptr, (size_t)&v15[size])) == 0LL )
      {
        *v8 = 12;
        v19 = 12;
        goto LABEL_54;
      }
      ptr = v16;
      src = (char *)memcpy(&srca[v13 + (_QWORD)v16], &v16[v13], size - v13);
      size = v21;
    }
    src = (char *)memcpy(&src[-v14], v12, v14) - 1;
    v5 = v31;
    *src = 47;
    v20 = v22;
  }
  while ( v29 != v22 || v30 != v31 );
  if ( closedir(v6) )
    goto LABEL_58;
  v3 = &ptr[size];
LABEL_37:
  if ( src == &ptr[size - 1] )
    *--src = 47;
  v17 = v3 - src;
  memmove(ptr, src, v17);
  if ( !a2 )
    v24 = (char *)realloc(ptr, v17);
  v18 = v24;
  if ( !v24 )
    v18 = ptr;
  return v18;
}

__int64 __fastcall sub_4160B0(__int64 a1, int *a2)
{
  __int64 v2; // r11
  int v3; // er12
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // er9
  int v7; // er10
  int v8; // er8
  int v9; // er14
  int v10; // edx
  __int64 *v11; // rax
  unsigned __int64 v12; // r13
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
  v6 = a2[11];
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
      v12 = v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1));
      v13 = v7 - (__int64)v6;
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
  a2[12] = v4;
  result = (unsigned int)(v4 - v8);
  a2[11] = result + v3;
  return result;
}

__int64 __fastcall sub_416190(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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
  char **v38; // [rsp+0h] [rbp-88h]
  int v39; // [rsp+Ch] [rbp-7Ch]
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  _DWORD *v43; // [rsp+20h] [rbp-68h]
  char *s; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-49h]
  int v47; // [rsp+40h] [rbp-48h]
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]

  v47 = a1;
  v9 = (const char *)*((_QWORD *)a7 + 4);
  s = a3;
  v38 = a4;
  v43 = a5;
  v10 = (char *)*((_QWORD *)a7 + 4);
  v39 = a6;
  v46 = *v9;
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
    if ( !v39 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(s, v46), result = 0xFFFFFFFFLL, !v18) )
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
  v17 = v38;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (v39
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
        v33 = v38;
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
    result = 63LL;
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
      result = 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= v47 )
      {
        if ( a8 )
        {
          v36 = *a2;
          v37 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v37, v36);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( v43 )
          *v43 = v13;
        v23 = v12[2];
        result = *((unsigned int *)v12 + 6);
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

__int64 __fastcall sub_4167B0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
{
  int v8; // er13
  int v9; // eax
  int v10; // ebp
  __int64 *v11; // r12
  char *v12; // r15
  _BYTE *v13; // rdx
  char v14; // al
  char v15; // al
  int v16; // eax
  _BYTE *v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // er14
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
  char **v45; // [rsp+8h] [rbp-60h]
  _DWORD *v46; // [rsp+10h] [rbp-58h]
  char v47; // [rsp+1Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+1Ch] [rbp-4Ch]
  int v50; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v51; // [rsp+20h] [rbp-48h]
  __int64 v52; // [rsp+28h] [rbp-40h]

  v45 = a4;
  v46 = a5;
  v8 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  v9 = *a7;
  v10 = a1;
  v11 = (__int64 *)a2;
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
  if ( !((v14 - 43) & 0xFD) )
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
        sub_4160B0(a2, a7);
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
          v28 = (_BYTE *)v11[v27];
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
    v17 = (_BYTE *)v11[v16];
    if ( !strcmp((const char *)v11[v16], "--") )
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
        sub_4160B0((__int64)v11, a7);
        v18 = a7[11];
      }
      a7[12] = a1;
      *a7 = a1;
      goto LABEL_41;
    }
    if ( *v17 == 45 )
    {
      v30 = v17[1];
      if ( v30 )
      {
        if ( v45 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_416190(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_416190(a1, v11, v12, v45, v46, a6, a7, v8, 4321650LL);
              if ( v21 != -1 )
                return v21;
              v17 = (_BYTE *)v11[*a7];
            }
          }
        }
        v13 = v17 + 1;
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
  v52 = (__int64)(v13 + 1);
  v47 = *v13;
  v22 = strchr(v12, v21);
  v23 = v52;
  if ( !v51[1] )
    ++*a7;
  if ( (unsigned __int8)(v47 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && v45 && v24 == 59 )
    {
      if ( v51[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_416190(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = v11[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *v11;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43);
      }
      a7[2] = v21;
      v21 = 5 * (*v12 != 58) + 58;
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
            v41 = *v11;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41);
          }
          a7[2] = v21;
          v21 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v37 = v36 + 1;
          v38 = v11[v36];
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
      v39 = *v11;
      v40 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v40, v39);
    }
    a7[2] = v21;
    v21 = 63;
  }
  return v21;
}

__int64 __fastcall sub_416D80(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_625920 = dword_62463C;
  dword_625924 = dword_624638;
  result = sub_4167B0(a1, a2, a3, a4, a5, a6, &dword_625920, a7);
  dword_62463C = dword_625920;
  nptr = (char *)qword_625930;
  dword_624634 = dword_625928;
  return result;
}

__int64 __fastcall sub_416DE0(int a1, __int64 a2, char *a3)
{
  return sub_416D80(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_416E00(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_416D80(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_416E20(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4167B0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_416E40(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_416D80(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_416E60(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4167B0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_416E80(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch]

  if ( !s )
  {
    a3 = 1LL;
    v6 = "\x1B]8;;\a" + 6;
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !sub_40C190(0) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_416F00(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  _BYTE *v6; // rdi

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
  v4 = ((((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
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
    v5 = (__int64)(a1 + 1);
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

noreturn void  sub_417010()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  __fprintf_chk(stderr, 1LL, 4319840LL, v0);
  exit(status);
}

__int64 __fastcall sub_417050(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 result; // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 56);
  if ( *(_BYTE *)(a1 + 80) & 1 )
    result = v2(*(_QWORD *)(a1 + 72));
  else
    result = v2(a2);
  return result;
}

__int64 __fastcall sub_417070(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 result; // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 64);
  if ( *(_BYTE *)(a1 + 80) & 1 )
    result = v2(*(_QWORD *)(a1 + 72));
  else
    result = v2(a2);
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  char *v10; // rdx
  __int64 result; // rax

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
  v7 = (_QWORD *)sub_417050(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = ((unsigned __int64)v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = (char *)v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  v7[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  char *v10; // rdx
  __int64 result; // rax

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
  v7 = (_QWORD *)sub_417050(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = ((unsigned __int64)v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = (char *)v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  v7[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  char *v10; // rdx
  __int64 result; // rax

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
  v7 = (_QWORD *)sub_417050(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = ((unsigned __int64)v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = (char *)v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  v7[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin_1(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  char *v11; // rdx
  __int64 result; // rax

  *(_BYTE *)(a1 + 80) |= 1u;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  if ( !a3 )
    JUMPOUT(0x417100LL);
  v6 = a3;
  v7 = a3 - 1;
  *(_QWORD *)(a1 + 48) = a3 - 1;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  v8 = (_QWORD *)sub_417050(a1, a2);
  *(_QWORD *)(a1 + 8) = v8;
  if ( !v8 )
    JUMPOUT(0x41710DLL);
  v9 = ((unsigned __int64)v8 + v7 + 16) & -v6;
  v10 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v9;
  v11 = (char *)v8 + v10;
  *(_QWORD *)(a1 + 24) = v9;
  *v8 = v11;
  *(_QWORD *)(a1 + 32) = v11;
  v8[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  char *v10; // rdx
  __int64 result; // rax

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
  v7 = (_QWORD *)sub_417050(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = ((unsigned __int64)v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = (char *)v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  v7[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
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
  if ( v7 || (a4 = v8) || (v9 = v11, v12 = (_QWORD *)sub_417050(a1, v11), (v13 = v12) == 0LL) )
    obstack_alloc_failed_handler(a1, v9, v10, a4);
  *(_QWORD *)(a1 + 8) = v12;
  v12[1] = v5;
  *(_QWORD *)(a1 + 32) = (char *)v12 + v11;
  *v12 = (char *)v12 + v11;
  v14 = (char *)(~*(_QWORD *)(a1 + 48) & ((unsigned __int64)v12 + *(_QWORD *)(a1 + 48) + 16));
  result = (__int64)memcpy(v14, *(const void **)(a1 + 16), v4);
  if ( !(*(_BYTE *)(a1 + 80) & 2) )
  {
    result = (v5 + *(_QWORD *)(a1 + 48) + 16) & ~*(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 16) == result )
    {
      v13[1] = *(_QWORD *)(v5 + 8);
      result = sub_417070(a1, v5);
    }
  }
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = &v14[v4];
  *(_BYTE *)(a1 + 80) &= 0xFDu;
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
    result = 1LL;
  }
  return result;
}

void obstack_free(struct obstack *obstack, void *block)
{
  char *v2; // rbp
  struct _obstack_chunk *v3; // rsi
  char *v4; // rax
  struct _obstack_chunk *v5; // r12

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
      sub_417070((__int64)obstack, (__int64)v3);
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
  char *v2; // rbp
  struct _obstack_chunk *v3; // rsi
  char *v4; // rax
  struct _obstack_chunk *v5; // r12

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
      sub_417070((__int64)obstack, (__int64)v3);
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

__int64 __fastcall sub_417340(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  if ( *(_BYTE *)(a1 + 8) )
    v1 = setenv("TZ", (const char *)(a1 + 9), 1);
  else
    v1 = unsetenv("TZ");
  v2 = 0;
  if ( !v1 )
  {
    tzset();
    v2 = 1;
  }
  return v2;
}

void __fastcall sub_417390(_QWORD *a1)
{
  _QWORD *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_4173C0(_QWORD *a1)
{
  int *v1; // rbx
  int v2; // er13
  unsigned int v3; // ebp

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_417340((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_417390(a1);
  *v1 = v2;
  return v3;
}

_QWORD *__fastcall sub_417410(void *src)
{
  void *v1; // r12
  size_t v2; // rax
  __int64 v3; // rdi
  size_t v4; // rbp
  char *v5; // rax
  _BYTE *v6; // rbx
  _QWORD *result; // rax

  if ( src )
  {
    v1 = src;
    v2 = strlen((const char *)src);
    v3 = 118LL;
    v4 = v2 + 1;
    if ( v2 + 1 >= 0x76 )
      v3 = v2 + 1;
    v5 = (char *)malloc((v3 + 17) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_WORD *)v5 + 4) = 1;
      memcpy(v5 + 9, v1, v4);
      v6[v4 + 9] = 0;
    }
    return v6;
  }
  result = malloc(0x80uLL);
  v6 = result;
  if ( !result )
    return v6;
  *result = 0LL;
  *((_WORD *)result + 4) = 0;
  return result;
}

__int64 __fastcall sub_4174A0(__int64 *a1, unsigned __int64 a2)
{
  char *v2; // r12
  __int64 *v3; // rbp
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rax
  size_t v8; // r15
  char *v9; // rax
  _QWORD *v10; // rax

  v2 = *(char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (char *)a1 + 9;
    if ( !*v2 )
    {
      v5 = "\x1B]8;;\a" + 6;
      goto LABEL_12;
    }
LABEL_5:
    if ( !strcmp(v5, v2) )
      goto LABEL_12;
    while ( 1 )
    {
      if ( !*v5 )
      {
        v6 = (__int64)v3 + 9;
        if ( (char *)v3 + 9 != v5 )
        {
          v8 = strlen(v2) + 1;
          v9 = &v5[-v6];
          if ( ~(unsigned __int64)&v5[-v6] < v8 )
          {
            *__errno_location() = 12;
            return 0LL;
          }
LABEL_19:
          if ( (unsigned __int64)&v9[v8] <= 0x76 )
          {
            memcpy(v5, v2, v8);
            v5[v8] = 0;
            goto LABEL_12;
          }
          v10 = sub_417410(v2);
          *v3 = (__int64)v10;
          if ( !v10 )
            return 0LL;
          *((_BYTE *)v10 + 8) = 0;
          v5 = (char *)v10 + 9;
LABEL_12:
          *(_QWORD *)(a2 + 48) = v5;
          return 1LL;
        }
        if ( !*((_BYTE *)v3 + 8) )
        {
          v8 = strlen(v2) + 1;
          v9 = 0LL;
          goto LABEL_19;
        }
      }
      v5 += strlen(v5) + 1;
      if ( *v5 )
        goto LABEL_5;
      v7 = (__int64 *)*v3;
      if ( !*v3 )
        goto LABEL_5;
      v5 = (char *)v7 + 9;
      v3 = (__int64 *)*v3;
      if ( !strcmp((const char *)v7 + 9, v2) )
        goto LABEL_12;
    }
  }
  return result;
}

__int64 __fastcall sub_417620(__int64 a1)
{
  char *v1; // rax
  char *v2; // rbp
  _QWORD *v3; // rbx
  int *v5; // rbp
  int v6; // er12

  v1 = getenv("TZ");
  v2 = v1;
  if ( v1 )
  {
    if ( *(_BYTE *)(a1 + 8) && !strcmp((const char *)(a1 + 9), v1) )
      return 1LL;
  }
  else if ( !*(_BYTE *)(a1 + 8) )
  {
    return 1LL;
  }
  v3 = sub_417410(v2);
  if ( !v3 || (unsigned __int8)sub_417340(a1) )
    return (__int64)v3;
  v5 = __errno_location();
  v6 = *v5;
  if ( v3 != (_QWORD *)1 )
    sub_417390(v3);
  *v5 = v6;
  return 0LL;
}

struct tm *__fastcall sub_4176F0(__int64 *a1, const time_t *a2, struct tm *a3)
{
  struct tm *v3; // rbx
  _QWORD *v4; // r13

  if ( !a1 )
    return gmtime_r(a2, a3);
  v3 = a3;
  v4 = (_QWORD *)sub_417620((__int64)a1);
  if ( v4 )
  {
    if ( localtime_r(a2, v3) && (unsigned __int8)sub_4174A0(a1, (unsigned __int64)v3) )
    {
      if ( v4 == (_QWORD *)1 || (unsigned __int8)sub_4173C0(v4) )
        return v3;
    }
    else if ( v4 != (_QWORD *)1 )
    {
      sub_4173C0(v4);
    }
  }
  return 0LL;
}

time_t __fastcall sub_4177A0(__int64 *a1, _DWORD *a2)
{
  _QWORD *v2; // r12
  time_t result; // rax
  int v4; // eax
  time_t timer; // [rsp+8h] [rbp-60h]
  struct tm tp; // [rsp+10h] [rbp-58h]

  if ( !a1 )
    return sub_4178C0(a2);
  v2 = (_QWORD *)sub_417620((__int64)a1);
  if ( !v2 )
    goto LABEL_20;
  timer = sub_4186F0(a2);
  if ( timer != -1
    || localtime_r(&timer, &tp)
    && ((v4 = a2[8], (v4 == 0) == (tp.tm_isdst == 0)) || v4 < 0 || tp.tm_isdst < 0)
    && !(tp.tm_sec ^ *a2 | tp.tm_min ^ a2[1] | tp.tm_hour ^ a2[2] | tp.tm_mday ^ a2[3] | tp.tm_year ^ a2[5] | tp.tm_mon ^ a2[4]) )
  {
    if ( !(unsigned __int8)sub_4174A0(a1, (unsigned __int64)a2) )
      timer = -1LL;
  }
  if ( v2 == (_QWORD *)1 || (unsigned __int8)sub_4173C0(v2) )
    result = timer;
  else
LABEL_20:
    result = -1LL;
  return result;
}

__int64 __fastcall sub_4178C0(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 0;
  return sub_4182B0(a1, gmtime_r, &unk_625958);
}

__int64 __fastcall sub_4178E0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_417F10(stream);
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

_BYTE *__fastcall sub_417940(void *a1)
{
  _BYTE *result; // rax

  result = sub_40B810(a1);
  if ( !result )
    sub_412BD0();
  return result;
}

unsigned __int64 __fastcall sub_417960(char *a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax

  v2 = *a1;
  if ( !(_BYTE)v2 )
    return 0LL;
  v3 = 0LL;
  do
  {
    ++a1;
    v3 = v2 + __ROL8__(v3, 9);
    v2 = *a1;
  }
  while ( (_BYTE)v2 );
  return v3 % a2;
}

const char *sub_4179A0()
{
  char *v0; // rax
  char *v1; // r15
  const char *v2; // rbx
  char v3; // bp
  size_t v4; // rax
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
  int v17; // er12
  FILE *v18; // r13
  const char *v19; // rax
  FILE *v20; // rbx
  const char *v21; // r13
  char *v22; // rax
  int v23; // edi
  char *v24; // kr00_8
  char *v25; // rdx
  int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdx
  signed __int64 v29; // rax
  char *v30; // rax
  signed __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rdi
  char *v36; // rsi
  unsigned int v37; // edx
  char *v38; // rcx
  FILE *v39; // rdi
  int v40; // eax
  bool v41; // dl
  char *v42; // rax
  __int64 v43; // rax
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
  __int64 v61; // [rsp+8h] [rbp-D0h]
  __int64 v62; // [rsp+18h] [rbp-C0h]
  char v63[64]; // [rsp+20h] [rbp-B8h]
  char v64[120]; // [rsp+60h] [rbp-78h]

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
          v1 = "\x1B]8;;\a" + 6;
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
            v22 = v20->_IO_read_ptr;
            if ( v22 < v20->_IO_read_end )
            {
LABEL_31:
              v20->_IO_read_ptr = v22 + 1;
              v23 = (unsigned __int8)*v22;
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
              v25 = v64;
              do
              {
                v26 = *(_DWORD *)v25;
                v25 += 4;
                v27 = ~v26 & (v26 - 16843009) & 0x80808080;
              }
              while ( !v27 );
              if ( !(~v26 & (v26 - 16843009) & 0x8080) )
                v27 >>= 16;
              if ( !(~v26 & (v26 - 16843009) & 0x8080) )
                v25 += 2;
              v28 = &v25[-__CFADD__((_BYTE)v27, (_BYTE)v27) - 3] - v64;
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
                v1 = "\x1B]8;;\a" + 6;
                v2 = v58;
                free(v59);
                sub_417F10(v60);
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
              else if ( v34 & 4 )
              {
                *(_DWORD *)v36 = *(_DWORD *)v63;
                *(_DWORD *)&v36[v34 - 4] = *(_DWORD *)&v63[v34 - 4];
              }
              else if ( v34 )
              {
                *v36 = v63[0];
                if ( v34 & 2 )
                  *(_WORD *)&v36[v34 - 2] = *(_WORD *)&v63[v34 - 2];
              }
              v37 = v32 + 1;
              v38 = &v30[v35 - 1];
              if ( v37 >= 8 )
              {
                *(_QWORD *)v38 = *(_QWORD *)v64;
                *(_QWORD *)&v38[v37 - 8] = *(_QWORD *)&v64[v37 - 8];
                v51 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v52 = &v38[-v51];
                v53 = (char *)(v64 - v52);
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
              else if ( v37 & 4 )
              {
                *(_DWORD *)v38 = *(_DWORD *)v64;
                *(_DWORD *)&v38[v37 - 4] = *(_DWORD *)&v64[v37 - 4];
              }
              else if ( v37 )
              {
                *v38 = v64[0];
                if ( v37 & 2 )
                  *(_WORD *)&v38[v37 - 2] = *(_WORD *)&v64[v37 - 2];
              }
              v1 = v30;
              v22 = v20->_IO_read_ptr;
              if ( v22 < v20->_IO_read_end )
                goto LABEL_31;
            }
            v39 = v20;
            v2 = v21;
            sub_417F10(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = "\x1B]8;;\a" + 6;
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

int __fastcall sub_417F10(FILE *stream)
{
  int *v1; // rax
  int v2; // er12
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
  if ( !(unsigned int)sub_417F90(stream) )
    return fclose(stream);
  v1 = __errno_location();
  v2 = *v1;
  v3 = v1;
  result = fclose(stream);
  if ( v2 )
  {
    *v3 = v2;
    result = -1;
  }
  return result;
}

int __fastcall sub_417F90(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_417FD0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_417FD0(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax
  int v4; // er12
  int v5; // eax

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

__int64 __fastcall sub_418030(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // er10
  int v11; // er12

  v10 = (unsigned __int64)(a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (a6 >> 2) + 475 - ((a6 & 3) == 0);
  return a5
       + 60
       * (a4
        + 60
        * (a3
         + 24
         * ((int)(v10
                - v11
                - (v10 / 25
                 - ((unsigned int)(v10 % 25) >> 31)
                 - (v11 / 25
                  - ((unsigned int)(v11 % 25) >> 31)))
                + ((int)(v10 / 25 - ((unsigned int)(v10 % 25) >> 31)) >> 2)
                - ((int)(v11 / 25 - ((unsigned int)(v11 % 25) >> 31)) >> 2))
          + 365 * (a1 - a6)
          + a2
          - a7)
         - a8)
        - a9)
       - a10;
}

__int64 __fastcall sub_418150(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int *a7)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // of
  __int64 result; // rax

  v7 = a6;
  if ( !a7
    || (v8 = sub_418030(a1, a2, a3, a4, a5, a7[5], a7[7], a7[2], a7[1], *a7),
        v9 = __OFADD__(v7, v8),
        result = v7 + v8,
        v9) )
  {
    if ( v7 < 0 )
    {
      if ( v7 >= -9223372036854775806LL )
        result = 0x8000000000000000LL;
      else
        result = v7 + 1;
    }
    else
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      if ( v7 > 9223372036854775805LL )
        result = v7 - 1;
    }
  }
  return result;
}

__int64 __fastcall sub_4181F0(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v9 = *a2;
  result = a1(&v9, a3);
  if ( !result )
  {
    v5 = *a2;
    v6 = 0LL;
    if ( *a2 )
    {
      while ( 1 )
      {
        v7 = (v6 >> 1) + (v5 >> 1);
        v8 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        if ( v6 != v8 && v5 != v8 )
          break;
        v9 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        result = a1(&v9, v3);
        if ( !result )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !result && v6 )
      {
        v9 = v6;
        result = a1(&v9, v3);
      }
    }
  }
  return result;
}

__int64 __fastcall sub_4182B0(int *a1, __int64 (__fastcall *a2)(__int64 *, __int64), _QWORD *a3)
{
  int *v3; // r14
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edi
  _BOOL4 v7; // edx
  __int64 v8; // rbx
  int v9; // er12
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  int v14; // er12
  __int64 v15; // r14
  int *v16; // rax
  __int64 v17; // r15
  __int64 result; // rax
  bool v19; // dl
  __m128i *v20; // r14
  int v21; // esi
  __int64 v22; // rdx
  bool v23; // of
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rdx
  int i; // er13
  int v29; // er12
  int v30; // er15
  int v31; // [rsp+Ch] [rbp-10Ch]
  __int64 (__fastcall *v32)(__int64 *, __int64); // [rsp+10h] [rbp-108h]
  int v33; // [rsp+18h] [rbp-100h]
  int v34; // [rsp+1Ch] [rbp-FCh]
  int v35; // [rsp+28h] [rbp-F0h]
  _QWORD *v36; // [rsp+30h] [rbp-E8h]
  __int64 v37; // [rsp+38h] [rbp-E0h]
  int v38; // [rsp+40h] [rbp-D8h]
  int v39; // [rsp+44h] [rbp-D4h]
  __m128i *v40; // [rsp+48h] [rbp-D0h]
  __int64 v41; // [rsp+50h] [rbp-C8h]
  __int64 v42; // [rsp+58h] [rbp-C0h]
  __int128 v43; // [rsp+60h] [rbp-B8h]
  __int128 v44; // [rsp+70h] [rbp-A8h]
  __int128 v45; // [rsp+80h] [rbp-98h]
  __int64 v46; // [rsp+90h] [rbp-88h]
  __int64 v47; // [rsp+A0h] [rbp-78h]
  int v48; // [rsp+C0h] [rbp-58h]

  v3 = a1;
  v32 = a2;
  v4 = a1[3];
  v38 = *a1;
  v36 = a3;
  v31 = a1[1];
  v5 = a1[2];
  v6 = a1[4];
  v33 = v5;
  v35 = v3[8];
  v7 = 0;
  v8 = v3[5] + (__int64)(int)(v6 / 12 - ((unsigned int)(v6 % 12) >> 31));
  if ( !(v8 & 3) )
  {
    v7 = 1;
    if ( v8 == 100 * (v8 / 100) )
      v7 = ((v8 / 100) & 3) == 1;
  }
  v9 = 59;
  v10 = 6;
  v11 = (unsigned __int16)word_41FD60[13LL * v7 + (((v6 % 12) >> 31) & 0xC) + v6 % 12] - 1 + v4;
  if ( v38 <= 59 )
    v9 = v38;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v34 = v12;
  v39 = -(int)*v36;
  v13 = sub_418030(v8, v11, v33, v31, v12, 70, 0, 0, 0, v39);
  v37 = v13;
  v41 = v13;
  v40 = (__m128i *)v3;
  v14 = 0;
  v15 = v13;
  while ( 1 )
  {
    v16 = (int *)sub_4181F0(v32, &v41, (__int64)&v43);
    v17 = v41;
    result = sub_418150(v8, v11, v33, v31, v34, v41, v16);
    if ( v17 == result )
      break;
    if ( v17 == v13 && v17 != v15 )
    {
      if ( (int)v45 < 0 )
        goto LABEL_17;
      v19 = (_DWORD)v45 != 0;
      if ( v35 < 0 )
      {
        if ( v19 >= v14 )
        {
LABEL_17:
          v20 = v40;
          result = v17;
          goto LABEL_18;
        }
      }
      else if ( (v35 != 0) != v19 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v10 )
      return -1LL;
    v41 = result;
    v13 = v15;
    v15 = v17;
    v14 = v45 != 0;
  }
  v20 = v40;
  if ( (v35 == 0) != ((_DWORD)v45 == 0) && v35 >= 0 && (int)v45 >= 0 )
  {
    for ( i = 601200; i != 269337600; i += 601200 )
    {
      v29 = 2;
      v30 = -i;
      v42 = result + -i;
      if ( !__OFADD__(result, -i) )
      {
LABEL_35:
        sub_4181F0(v32, &v42, (__int64)&v47);
        if ( (v35 == 0) == (v48 == 0) || v48 < 0 )
        {
          v41 = sub_418150(v8, v11, v33, v31, v34, v42, (int *)&v47);
          sub_4181F0(v32, &v41, (__int64)&v43);
          result = v41;
          break;
        }
        result = v41;
      }
      while ( 1 )
      {
        v30 += 2 * i;
        if ( v29 == 1 )
          break;
        v29 = 1;
        v42 = result + v30;
        if ( !__OFADD__(result, v30) )
          goto LABEL_35;
      }
    }
  }
LABEL_18:
  v21 = v43;
  *v36 = result - (v37 + v39);
  if ( v21 == v38 )
    goto LABEL_22;
  v22 = ((v38 <= 0) & (unsigned __int8)(v21 == 60)) - (__int64)v34 + v38;
  v23 = __OFADD__(v22, result);
  v24 = v22 + result;
  v41 = v24;
  if ( !v23 )
  {
    v47 = v24;
    if ( v32(&v47, (__int64)&v43) )
    {
      result = v41;
LABEL_22:
      v25 = _mm_load_si128((const __m128i *)&v44);
      v26 = _mm_load_si128((const __m128i *)&v45);
      v27 = v46;
      *v20 = _mm_load_si128((const __m128i *)&v43);
      v20[1] = v25;
      v20[2] = v26;
      v20[3].m128i_i64[0] = v27;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_4186F0(int *a1)
{
  tzset();
  return sub_4182B0(a1, (__int64 (__fastcall *)(__int64 *, __int64))localtime_r, &unk_625968);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_418780(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_6243E8 )
    v1 = (void *)unk_6243E8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_418798(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_623E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
