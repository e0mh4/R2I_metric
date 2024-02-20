__int64 __fastcall main(int a1, char **a2, char **a3)
{
  const char *v4; // rbx
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
  int v16; // r13d
  bool v17; // al
  __int64 v18; // rax
  int v19; // edx
  bool v20; // al
  _QWORD *v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // eax
  char *v25; // rax
  unsigned int v26; // eax
  char **v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  const char *v32; // rax
  const char *v33; // rsi
  __int64 v34; // r12
  char *v35; // rax
  __int64 v36; // r12
  char *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  char *i; // r13
  __int64 v42; // rsi
  __int64 v43; // r12
  char *v44; // rdi
  char v45; // al
  __int64 v46; // rax
  int v47; // r13d
  __int64 v48; // rdi
  void *v49; // rbx
  void *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  void *v54; // rax
  void *v55; // rbx
  __int64 v57; // r12
  char *v58; // rax
  char *v59; // r13
  int k; // ebx
  int v61; // eax
  char *v62; // rax
  char *v63; // rax
  char v64; // dl
  __int64 v65; // r13
  const char *v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // r13
  char *v69; // rax
  char *v70; // rax
  _QWORD *j; // rdi
  _QWORD *v72; // r13
  char *IO_write_ptr; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  char *v77; // rax
  int v78; // eax
  __int64 v79; // rax
  char *v80; // rax
  char *v81; // rax
  char *v82; // rax
  char *v83; // r14
  const char *v84; // r15
  _QWORD *v85; // r13
  __int64 v86; // rax
  char *v87; // rax
  FILE *v88; // rbx
  char *v89; // rax
  FILE *v90; // rsi
  const char **v91; // rbx
  const char *v92; // rcx
  FILE *v93; // rbx
  char *v94; // rax
  const char *v95; // r12
  char *v96; // rax
  char *v97; // r13
  char *v98; // r14
  char *v99; // rax
  __int64 v100; // rbx
  char *v101; // rax
  char *v102; // [rsp+8h] [rbp-60h]
  char s1[3]; // [rsp+15h] [rbp-53h] BYREF
  char *v104; // [rsp+18h] [rbp-50h] BYREF
  __int64 v105[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (const char *)a2;
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
  switch ( dword_6245AC )
  {
    case 2:
      dword_6256F8 = 2;
      sub_411C30(0LL, 7LL);
      break;
    case 3:
      dword_6256F8 = 0;
      sub_411C30(0LL, 7LL);
      break;
    case 1:
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
      break;
    default:
      abort();
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
      v34 = sub_412290(v6);
      v35 = dcgettext(0LL, "ignoring invalid value of environment variable QUOTING_STYLE: %s", 5);
      error(0, 0, v35, v34);
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
    v36 = sub_412290(v9);
    v37 = dcgettext(0LL, "ignoring invalid width in environment variable COLUMNS: %s", 5);
    error(0, 0, v37, v36);
  }
  if ( ioctl(1, 0x5413uLL, v105) != -1 && WORD1(v105[0]) )
    qword_625670 = WORD1(v105[0]);
  v10 = getenv("TABSIZE");
  qword_625680 = 8LL;
  v11 = v10;
  if ( v10 )
  {
    if ( (unsigned int)sub_412DF0(v10) )
    {
      v57 = sub_412290(v11);
      v58 = dcgettext(0LL, "ignoring invalid tab size in environment variable TABSIZE: %s", 5);
      error(0, 0, v58, v57);
    }
    else
    {
      qword_625680 = v105[0];
    }
  }
  v12 = 0;
  v13 = 0;
  v14 = 0LL;
  while ( 1 )
  {
    LODWORD(v105[0]) = -1;
    v15 = sub_416E00((unsigned int)a1, v4, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", &off_419900, v105);
    if ( v15 == -1 )
      break;
    switch ( v15 )
    {
      case -131:
        v32 = (const char *)(unsigned int)dword_6245AC;
        if ( dword_6245AC == 1 )
        {
          LODWORD(v33) = 4305336;
        }
        else
        {
          v33 = "dir";
          v32 = "vdir";
          if ( dword_6245AC != 2 )
            v33 = "vdir";
        }
        sub_412840(
          (_DWORD)stdout,
          (_DWORD)v33,
          (unsigned int)&unk_41B1AD,
          (_DWORD)off_6245B0,
          (unsigned int)"Richard M. Stallman",
          (unsigned int)"David MacKenzie",
          0LL,
          v32);
        exit(0);
      case -130:
        sub_40A530(0);
      case 49:
        dword_6256F8 = dword_6256F8 != 0;
        continue;
      case 65:
        if ( !dword_6256B0 )
          dword_6256B0 = 1;
        continue;
      case 66:
        v28 = (_QWORD *)sub_412980(16LL);
        v29 = qword_6256A8;
        *v28 = "*~";
        v28[1] = v29;
        qword_6256A8 = (__int64)v28;
        v30 = (_QWORD *)sub_412980(16LL);
        v31 = qword_6256A8;
        *v30 = ".*~";
        v30[1] = v31;
        qword_6256A8 = (__int64)v30;
        continue;
      case 67:
        dword_6256F8 = 2;
        continue;
      case 68:
        byte_6256D8 = 1;
        continue;
      case 70:
        dword_6256D4 = 3;
        continue;
      case 71:
        byte_6245A8 = 0;
        continue;
      case 72:
        dword_6256B8 = 3;
        continue;
      case 73:
        v102 = nptr;
        v27 = (char **)sub_412980(16LL);
        *v27 = v102;
        v27[1] = (char *)qword_6256A8;
        qword_6256A8 = (__int64)v27;
        continue;
      case 76:
        dword_6256B8 = 5;
        continue;
      case 78:
        sub_411C30(0LL, 0LL);
        continue;
      case 81:
        sub_411C30(0LL, 5LL);
        continue;
      case 82:
        byte_6256B6 = 1;
        continue;
      case 83:
        dword_6256F0 = 2;
        v13 = 1;
        continue;
      case 84:
        v26 = (unsigned int)dcgettext(0LL, "invalid tab size", 5);
        qword_625680 = sub_412C10((_DWORD)nptr, 0, 0, -1, (unsigned int)"", v26, 2);
        continue;
      case 85:
        dword_6256F0 = -1;
        v13 = 1;
        continue;
      case 88:
        dword_6256F0 = 1;
        v13 = 1;
        continue;
      case 90:
        byte_625725 = 1;
        continue;
      case 97:
        dword_6256B0 = 2;
        continue;
      case 98:
        sub_411C30(0LL, 7LL);
        continue;
      case 99:
        dword_6256F4 = 1;
        continue;
      case 100:
        byte_6256B5 = 1;
        continue;
      case 102:
        dword_6256B0 = 2;
        dword_6256F0 = -1;
        if ( !dword_6256F8 )
          dword_6256F8 = 2 - (isatty(1) == 0);
        byte_6256EC = 0;
        v13 = 1;
        byte_6256D2 = 0;
        byte_6256D1 = 0;
        continue;
      case 103:
        dword_6256F8 = 0;
        byte_6245A9 = 0;
        continue;
      case 104:
        dword_6256E8 = 176;
        dword_6256DC = 176;
        qword_6256E0 = 1LL;
        qword_6245A0 = 1LL;
        continue;
      case 105:
        byte_6256BC = 1;
        continue;
      case 107:
        v12 = 1;
        continue;
      case 108:
        goto LABEL_21;
      case 109:
        dword_6256F8 = 4;
        continue;
      case 110:
        byte_6256ED = 1;
LABEL_21:
        dword_6256F8 = 0;
        continue;
      case 111:
        dword_6256F8 = 0;
        byte_6245A8 = 0;
        continue;
      case 112:
        dword_6256D4 = 1;
        continue;
      case 113:
        byte_625698 = 1;
        continue;
      case 114:
        byte_6256EF = 1;
        continue;
      case 115:
        byte_6256EC = 1;
        continue;
      case 116:
        dword_6256F0 = 4;
        v13 = 1;
        continue;
      case 117:
        dword_6256F4 = 2;
        continue;
      case 118:
        goto LABEL_53;
      case 119:
        if ( (unsigned __int8)sub_404B40(nptr) )
          continue;
        v4 = (const char *)sub_412290(nptr);
        v25 = dcgettext(0LL, "invalid line width", 5);
        error(2, 0, "%s: %s", v25, v4);
LABEL_53:
        dword_6256F0 = 3;
        v13 = 1;
        break;
      case 120:
        dword_6256F8 = 3;
        continue;
      case 128:
        byte_6256EE = 1;
        continue;
      case 129:
        v24 = sub_40DFA0(nptr);
        if ( v24 )
          sub_413220(v24, LODWORD(v105[0]), 0LL, &off_419900, nptr);
        dword_6256DC = dword_6256E8;
        qword_6245A0 = qword_6256E0;
        continue;
      case 130:
        if ( !nptr
          || (v23 = dword_419740[sub_40AFB0("--color", nptr, off_419780, dword_419740, 4LL, off_6245B8)], v23 == 1)
          || v23 == 2 && isatty(1) )
        {
          byte_6256D2 = 1;
          qword_625680 = 0LL;
        }
        else
        {
          byte_6256D2 = 0;
        }
        continue;
      case 131:
        dword_6256B8 = 4;
        continue;
      case 132:
        dword_6256D4 = 2;
        continue;
      case 133:
        dword_6256F8 = dword_419890[sub_40AFB0("--format", nptr, off_4198C0, dword_419890, 4LL, off_6245B8)];
        continue;
      case 134:
        dword_6256F8 = 0;
        v14 = "full-iso";
        continue;
      case 135:
        byte_6256B4 = 1;
        continue;
      case 136:
        v21 = (_QWORD *)sub_412980(16LL);
        *v21 = nptr;
        v22 = qword_6256A0;
        qword_6256A0 = (__int64)v21;
        v21[1] = v22;
        continue;
      case 137:
        if ( !nptr
          || (v19 = dword_419740[sub_40AFB0("--hyperlink", nptr, off_419780, dword_419740, 4LL, off_6245B8)], v19 == 1) )
        {
          v20 = 1;
        }
        else
        {
          v20 = 0;
          if ( v19 == 2 )
            v20 = isatty(1) != 0;
        }
        byte_6256D1 = v20;
        continue;
      case 138:
        dword_6256D4 = dword_419F50[sub_40AFB0("--indicator-style", nptr, off_419F60, dword_419F50, 4LL, off_6245B8)];
        continue;
      case 139:
        v18 = sub_40AFB0("--quoting-style", nptr, off_41EA00, dword_41E9C0, 4LL, off_6245B8);
        sub_411C30(0LL, (unsigned int)dword_41E9C0[v18]);
        continue;
      case 140:
        byte_625698 = 0;
        continue;
      case 141:
        dword_6256E8 = 144;
        dword_6256DC = 144;
        qword_6256E0 = 1LL;
        qword_6245A0 = 1LL;
        continue;
      case 142:
        v13 = 1;
        dword_6256F0 = dword_419830[sub_40AFB0("--sort", nptr, &off_419860, dword_419830, 4LL, off_6245B8)];
        continue;
      case 143:
        dword_6256F4 = dword_4197D0[sub_40AFB0("--time", nptr, off_419800, dword_4197D0, 4LL, off_6245B8)];
        continue;
      case 144:
        v14 = nptr;
        continue;
      default:
        goto LABEL_273;
    }
  }
  if ( !qword_6256E0 )
  {
    v59 = getenv("LS_BLOCK_SIZE");
    sub_40DFA0(v59);
    if ( v59 || getenv("BLOCK_SIZE") )
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
  v38 = sub_411BE0(0LL);
  qword_625690 = v38;
  if ( v16 == 7 )
    sub_411C40(v38, 32LL, 1LL);
  if ( (unsigned int)dword_6256D4 > 1 )
  {
    v39 = (unsigned int)(dword_6256D4 - 2);
    v40 = (unsigned int)byte_41B297[v39];
    for ( i = &byte_41B297[v39]; *i; v40 = (unsigned int)*i )
    {
      ++i;
      sub_411C40(qword_625690, v40, 1LL);
    }
  }
  v42 = 58LL;
  qword_625688 = sub_411BE0(0LL);
  sub_411C40(qword_625688, 58LL, 1LL);
  if ( byte_6256D8 )
  {
    if ( !dword_6256F8 && !byte_6256D1 )
      goto LABEL_113;
    byte_6256D8 = 0;
  }
  if ( (unsigned int)(dword_6256F4 - 1) > 1 || v13 )
  {
    if ( dword_6256F8 )
      goto LABEL_118;
  }
  else if ( dword_6256F8 )
  {
    dword_6256F0 = 4;
    goto LABEL_118;
  }
LABEL_113:
  if ( v14 || (v99 = getenv("TIME_STYLE"), (v14 = v99) != 0LL) )
  {
    while ( 1 )
    {
      v42 = (__int64)"posix-";
      if ( strncmp(v14, "posix-", 6uLL) )
        break;
      if ( !(unsigned __int8)sub_40C190(2LL) )
        goto LABEL_118;
      v14 += 6;
    }
    if ( *v14 == 43 )
    {
      v95 = v14 + 1;
      v42 = 10LL;
      v96 = strchr(v95, 10);
      v97 = v96;
      if ( v96 )
      {
        v98 = v96 + 1;
        v42 = 10LL;
        if ( strchr(v96 + 1, 10) )
        {
          v100 = sub_412290(v95);
          v101 = dcgettext(0LL, "invalid time style format %s", 5);
          error(2, 0, v101, v100);
LABEL_287:
          __assert_fail("found", "src/ls.c", 0x638u, "main");
        }
        *v97 = 0;
      }
      else
      {
        v98 = (char *)v95;
      }
      off_624410 = (char *)v95;
      off_624418 = v98;
      goto LABEL_246;
    }
  }
  else
  {
    v14 = "locale";
  }
  v42 = (__int64)off_419FA0;
  v79 = sub_40ACF0(v14, off_419FA0, &unk_419F90, 4LL);
  if ( v79 < 0 )
  {
    sub_40AE10("time style", v14, v79);
    v88 = stderr;
    v89 = dcgettext(0LL, "Valid arguments are:\n", 5);
    v90 = v88;
    v91 = (const char **)off_419FA0;
    fputs_unlocked(v89, v90);
    v92 = "full-iso";
    do
    {
      ++v91;
      __fprintf_chk(stderr, 1LL, "  - [posix-]%s\n", v92);
      v92 = *v91;
    }
    while ( *v91 );
    v93 = stderr;
    v94 = dcgettext(0LL, "  - +FORMAT (e.g., +%H:%M) for a 'date'-style format\n", 5);
    fputs_unlocked(v94, v93);
LABEL_273:
    sub_40A530(2);
  }
  if ( v79 == 1 )
  {
    off_624418 = (char *)&unk_41B30E;
    off_624410 = (char *)&unk_41B30E;
  }
  else if ( v79 <= 1 )
  {
    off_624418 = "%Y-%m-%d %H:%M:%S.%N %z";
    off_624410 = "%Y-%m-%d %H:%M:%S.%N %z";
  }
  else if ( v79 == 2 )
  {
    off_624410 = "%Y-%m-%d ";
    off_624418 = "%m-%d %H:%M";
  }
  else if ( v79 == 3 && (unsigned __int8)sub_40C190(2LL) )
  {
    v80 = dcgettext(0LL, off_624410, 2);
    v42 = (__int64)off_624418;
    off_624410 = v80;
    off_624418 = dcgettext(0LL, off_624418, 2);
  }
LABEL_246:
  sub_404BB0();
LABEL_118:
  v43 = dword_62463C;
  if ( byte_6256D2 )
  {
    v62 = getenv("LS_COLORS");
    v104 = v62;
    if ( v62 && *v62 )
    {
      strcpy(s1, "??");
      qword_6256C0 = (void *)sub_412BB0(v62);
      v105[0] = (__int64)qword_6256C0;
      while ( 1 )
      {
LABEL_193:
        while ( 1 )
        {
          v63 = v104;
          v64 = *v104;
          if ( *v104 != 42 )
            break;
          v85 = (_QWORD *)sub_412980(40LL);
          v86 = qword_6256C8;
          ++v104;
          qword_6256C8 = (__int64)v85;
          v85[4] = v86;
          v85[1] = v105[0];
          if ( (unsigned __int8)sub_404860(v105, &v104, 1LL, v85) )
          {
            v87 = v104++;
            if ( *v87 == 61 )
            {
              v42 = (__int64)&v104;
              v85[3] = v105[0];
              if ( (unsigned __int8)sub_404860(v105, &v104, 0LL, v85 + 2) )
                continue;
            }
          }
          goto LABEL_203;
        }
        if ( v64 != 58 )
          break;
        ++v104;
      }
      if ( !v64 )
        goto LABEL_207;
      ++v104;
      s1[0] = *v63;
      if ( v63[1] )
      {
        v104 = v63 + 2;
        s1[1] = v63[1];
        v104 = v63 + 3;
        if ( v63[2] == 61 )
        {
          v65 = 0LL;
          v66 = "lc";
          while ( strcmp(s1, v66) )
          {
            v66 = (&off_419E80)[++v65];
            if ( !v66 )
              goto LABEL_202;
          }
          v42 = (__int64)&v104;
          v67 = 16LL * (int)v65 + 6439968;
          *(_QWORD *)(v67 + 8) = v105[0];
          if ( (unsigned __int8)sub_404860(v105, &v104, 0LL, v67) )
            goto LABEL_193;
LABEL_202:
          v68 = sub_412290(s1);
          v69 = dcgettext(0LL, "unrecognized prefix: %s", 5);
          error(0, 0, v69, v68);
        }
      }
LABEL_203:
      v70 = dcgettext(0LL, "unparsable value for LS_COLORS environment variable", 5);
      v42 = 0LL;
      error(0, 0, v70);
      free(qword_6256C0);
      for ( j = (_QWORD *)qword_6256C8; j; j = v72 )
      {
        v72 = (_QWORD *)j[4];
        free(j);
      }
      byte_6256D2 = 0;
LABEL_207:
      if ( qword_624490 == 6 )
      {
        v42 = (__int64)"target";
        if ( !strncmp(off_624498, "target", 6uLL) )
          byte_625750 = 1;
      }
    }
    else
    {
      v81 = getenv("COLORTERM");
      if ( !v81 || !*v81 )
      {
        v82 = getenv("TERM");
        v83 = v82;
        if ( v82 && *v82 )
        {
          v84 = "# Configuration file for dircolors, a utility to help you set the";
          while ( 1 )
          {
            v42 = (__int64)"TERM ";
            if ( !strncmp(v84, "TERM ", 5uLL) )
            {
              v42 = (__int64)v83;
              if ( !(unsigned int)sub_4159A0(v84 + 5, v83, 0LL) )
                break;
            }
            v84 += strlen(v84) + 1;
            if ( (unsigned __int64)(v84 - "# Configuration file for dircolors, a utility to help you set the") > 0x104C )
              goto LABEL_269;
          }
        }
        else
        {
LABEL_269:
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
    v61 = 2;
    if ( !byte_6256B5 && dword_6256D4 != 3 )
      v61 = dword_6256F8 == 0 ? 2 : 4;
    dword_6256B8 = v61;
  }
  if ( byte_6256B6 )
  {
    qword_625788 = (void *)sub_40CA80(30LL, 0LL, sub_404800, sub_404810, j__free);
    if ( !qword_625788 )
      sub_412BD0();
    v42 = 0LL;
    obstack_begin(&unk_6254A0, 0LL, 0LL, malloc, free);
  }
  v44 = getenv("TZ");
  qword_625668 = sub_417410(v44);
  if ( ((dword_6256F0 - 2) & 0xFFFFFFFD) == 0 || !dword_6256F8 || byte_625725 || byte_6256EC )
  {
    byte_625661 = 1;
    v45 = 0;
  }
  else
  {
    byte_625661 = 0;
    v45 = 1;
    if ( !byte_6256B6 && !byte_6256D2 && !dword_6256D4 )
      v45 = byte_6256B4;
  }
  byte_625660 = v45 & 1;
  if ( byte_6256D8 )
  {
    obstack_begin(&unk_625560, 0LL, 0LL, malloc, free);
    v42 = 0LL;
    v44 = (char *)&unk_625500;
    obstack_begin(&unk_625500, 0LL, 0LL, malloc, free);
  }
  if ( byte_6256D1 )
  {
    v74 = 0LL;
    while ( 1 )
    {
      v76 = (unsigned int)v74;
      if ( (int)v74 <= 90 )
      {
        v75 = 1LL;
        if ( (int)v74 >= 65 )
          goto LABEL_229;
        v42 = (unsigned int)(v74 - 48);
        if ( (unsigned int)v42 <= 9 )
          goto LABEL_229;
        v76 = (unsigned int)(v74 - 45);
        if ( (unsigned int)v76 <= 1 )
        {
LABEL_233:
          v75 = 1LL;
          goto LABEL_229;
        }
      }
      else
      {
        v42 = (unsigned int)(v74 - 97);
        v75 = 1LL;
        if ( (unsigned int)v42 <= 0x19 )
          goto LABEL_229;
        v76 = (unsigned int)(v74 - 45);
        if ( (unsigned int)v76 <= 1 )
          goto LABEL_233;
      }
      if ( (_DWORD)v74 == 126 )
        goto LABEL_233;
      LOBYTE(v75) = (_DWORD)v74 == 95;
LABEL_229:
      byte_6253A0[v74] |= v75;
      if ( ++v74 == 256 )
      {
        v77 = (char *)sub_412D40(v44, v42, v75, v76);
        if ( !v77 )
          v77 = "";
        qword_625748 = (__int64)v77;
        break;
      }
    }
  }
  qword_625778 = 100LL;
  v46 = sub_412980(20000LL);
  v47 = a1 - v43;
  qword_625770 = 0LL;
  qword_625780 = v46;
  sub_4084B0();
  if ( a1 - (int)v43 <= 0 )
  {
    if ( byte_6256B5 )
      sub_408580(".", 3LL, 1LL, "");
    else
      sub_404D90((void *)".", 0LL);
    if ( !qword_625770 )
      goto LABEL_160;
    goto LABEL_216;
  }
  do
  {
    v48 = *(_QWORD *)&v4[8 * v43++];
    sub_408580(v48, 0LL, 1LL, "");
  }
  while ( a1 > (int)v43 );
  if ( qword_625770 )
  {
LABEL_216:
    sub_404F40();
    if ( !byte_6256B5 )
      sub_405140(0LL);
    if ( qword_625770 )
    {
      sub_407CA0();
      if ( ptr )
      {
        IO_write_ptr = stdout->_IO_write_ptr;
        if ( stdout->_IO_write_end <= IO_write_ptr )
        {
          __overflow(stdout, 10);
        }
        else
        {
          stdout->_IO_write_ptr = IO_write_ptr + 1;
          *IO_write_ptr = 10;
        }
        ++qword_6255B8;
        v49 = ptr;
        goto LABEL_136;
      }
      goto LABEL_146;
    }
  }
  v49 = ptr;
  if ( v47 > 1 )
    goto LABEL_136;
LABEL_160:
  v49 = ptr;
  if ( ptr )
  {
    if ( !*((_QWORD *)ptr + 3) )
      byte_625678 = 0;
LABEL_136:
    while ( v49 )
    {
      v50 = *(void **)v49;
      ptr = (void *)*((_QWORD *)v49 + 3);
      if ( !qword_625788 || v50 )
      {
        sub_4092A0(v50);
        free(*(void **)v49);
        free(*((void **)v49 + 1));
        free(v49);
        byte_625678 = 1;
      }
      else
      {
        v51 = qword_6254B8;
        if ( (unsigned __int64)(qword_6254B8 - qword_6254B0) <= 0xF )
          __assert_fail("dev_ino_size <= obstack_object_size (&dev_ino_obstack)", "src/ls.c", 0x402u, "dev_ino_pop");
        qword_6254B8 -= 16LL;
        v52 = *(_QWORD *)(v51 - 16);
        v53 = *(_QWORD *)(v51 - 8);
        v105[0] = v52;
        v105[1] = v53;
        v54 = (void *)sub_40D260(qword_625788, v105);
        if ( !v54 )
          goto LABEL_287;
        free(v54);
        free(*(void **)v49);
        free(*((void **)v49 + 1));
        free(v49);
      }
      v49 = ptr;
    }
  }
LABEL_146:
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
    v78 = sub_411C20(qword_625690);
    __printf_chk(1LL, "//DIRED-OPTIONS// --quoting-style=%s\n", off_41EA00[v78]);
  }
  v55 = qword_625788;
  if ( qword_625788 )
  {
    if ( sub_40C5F0(qword_625788) )
      __assert_fail("hash_get_n_entries (active_dir_set) == 0", "src/ls.c", 0x66Cu, "main");
    sub_40CCC0(v55);
  }
  return (unsigned int)dword_6255D0;
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

void *sub_40474B()
{
  return &unk_624648;
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

// attributes: thunk
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
    return a1[1] == a2[1];
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

// attributes: thunk
void j__free(void *ptr)
{
  free(ptr);
}

__int64 __fastcall sub_404860(char **a1, char **a2, unsigned int a3, _QWORD *a4)
{
  char *v5; // r8
  __int64 v6; // r10
  char *v7; // r9
  char v8; // cl
  char v9; // cl
  bool v10; // cc
  unsigned __int8 v11; // cl
  __int64 result; // rax
  char v13; // r12
  int v14; // r13d
  int v15; // r12d
  char v16; // cl
  __int64 v17; // r14

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
      v8 = v5[1];
      v5 += 2;
      switch ( v8 )
      {
        case 0:
          goto LABEL_11;
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
          v13 = *v5;
          for ( v8 -= 48; (unsigned __int8)(*v5 - 48) <= 7u; v13 = *v5 )
          {
            ++v5;
            v8 = v13 + 8 * v8 - 48;
          }
          goto LABEL_3;
        case 63:
          v8 = 127;
          goto LABEL_3;
        case 88:
        case 120:
          v14 = 0;
          break;
        case 95:
          v8 = 32;
          goto LABEL_3;
        case 97:
          v8 = 7;
          goto LABEL_3;
        case 98:
          v8 = 8;
          goto LABEL_3;
        case 101:
          v8 = 27;
          goto LABEL_3;
        case 102:
          v8 = 12;
          goto LABEL_3;
        case 110:
          v8 = 10;
          goto LABEL_3;
        case 114:
          v8 = 13;
          goto LABEL_3;
        case 116:
          v8 = 9;
          goto LABEL_3;
        case 118:
          v8 = 11;
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
          if ( ((1LL << v16) & 0x7E0000) != 0 )
          {
            ++v5;
            v14 = v15 + 16 * v14 - 55;
            goto LABEL_25;
          }
          if ( (v17 & 0x7E000000000000LL) != 0 )
            break;
          if ( (v17 & 0x3FF) != 0 )
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
        v8 = v11 & 0x1F;
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
  *a4 = v6;
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
      return *v4 != 48;
    }
    else
    {
      result = 1;
      if ( v3 == 2 )
        return memcmp(v4, "00", 2uLL) != 0;
    }
  }
  return result;
}

__int64 __fastcall sub_404B40(char *a1)
{
  int v1; // eax
  __int64 v3; // [rsp+8h] [rbp-10h]

  v1 = sub_4132B0(a1);
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      qword_625670 = -1LL;
      return 1LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    qword_625670 = v3;
    return 1LL;
  }
}

int sub_404BB0()
{
  __int64 i; // rsi
  char *v1; // rax
  char j; // dl
  char v3; // cl
  unsigned __int64 v4; // r15
  char *v5; // rbx
  nl_item v6; // r12d
  unsigned __int64 v7; // rbp
  char *v8; // r13
  __int64 v9; // r12
  char **v10; // rbx
  const char *v11; // rbp
  const char *v12; // r15
  char *v13; // r13
  unsigned __int64 v15; // [rsp+8h] [rbp-650h] BYREF
  __int64 v16[2]; // [rsp+10h] [rbp-648h] BYREF
  char v17[1536]; // [rsp+20h] [rbp-638h] BYREF
  char v18[56]; // [rsp+620h] [rbp-38h] BYREF

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
          j = v1[2];
          ++v1;
          continue;
        }
        if ( v3 == 98 )
          goto LABEL_9;
      }
      j = v1[1];
    }
    v1 = 0LL;
LABEL_9:
    v16[i] = (__int64)v1;
  }
  v4 = 5LL;
  if ( v16[0] || v16[1] )
  {
LABEL_11:
    v5 = v17;
    v6 = 131086;
    v7 = 0LL;
    while ( 1 )
    {
      v15 = v4;
      v8 = nl_langinfo(v6);
      v1 = strchr(v8, 37);
      if ( v1 )
        break;
      v1 = (char *)sub_40E570(v8, v5, 128LL, &v15, 0LL, 0LL);
      if ( (unsigned __int64)v1 > 0x7F )
        break;
      if ( v7 < v15 )
        v7 = v15;
      v5 += 128;
      ++v6;
      if ( v5 == v18 )
      {
        if ( v4 > v7 )
        {
          v4 = v7;
          goto LABEL_11;
        }
        v10 = (char **)v16;
        v9 = 0LL;
LABEL_26:
        v11 = (&off_624410)[v9];
        v12 = v17;
        v13 = (char *)&unk_6247A0 + 24 * v9;
        while ( 1 )
        {
          v1 = *v10;
          if ( *v10 )
          {
            if ( v1 - v11 > 128 )
              return (int)v1;
            LODWORD(v1) = __snprintf_chk(v13, 128LL, 1LL, -1LL, "%.*s%s%s", (int)v1 - (int)v11, v11, v12, v1 + 2);
          }
          else
          {
            LODWORD(v1) = snprintf(v13, 0x80uLL, "%s", v11);
          }
          if ( (unsigned int)v1 > 0x7F )
            return (int)v1;
          v12 += 128;
          v13 += 128;
          if ( v12 == v18 )
          {
            ++v9;
            ++v10;
            if ( v9 != 2 )
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
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  void *result; // rax

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
  *((_BYTE *)v4 + 16) = a3;
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

bool __fastcall sub_404E20(const char *a1)
{
  __int64 v1; // rax
  int v3; // [rsp+Eh] [rbp-1Ah] BYREF

  v1 = sub_411CD0((int)&v3, 2, (int)a1);
  return *a1 != (_BYTE)v3 || strlen(a1) != v1;
}

__int64 __fastcall sub_404E80(const char *a1, __int64 a2)
{
  const char *v2; // rbx
  size_t v3; // rcx
  unsigned __int128 v4; // rax
  __int64 v5; // r14
  _BYTE *i; // rbp
  unsigned __int8 v7; // al
  _BYTE *v9; // rdi

  v2 = a1;
  v3 = strlen(a1) + 1;
  v4 = v3 * (unsigned __int128)3uLL;
  BYTE8(v4) = *((_QWORD *)&v4 + 1) != 0LL;
  if ( ((3 * v3) & 0x8000000000000000LL) != 0LL || (*((_QWORD *)&v4 + 1) = BYTE8(v4), BYTE8(v4)) )
    sub_412BD0(a1, a2, *((_QWORD *)&v4 + 1));
  v5 = sub_412980(3 * v3);
LABEL_4:
  for ( i = (_BYTE *)v5; ; ++i )
  {
    v7 = *v2;
    if ( !*v2 )
      break;
    while ( 1 )
    {
      ++v2;
      if ( v7 == 47 )
      {
        if ( (_BYTE)a2 )
          break;
      }
      if ( !byte_6253A0[v7] )
      {
        v9 = i;
        i += 3;
        __sprintf_chk(v9, 1LL, -1LL, "%%%02x", v7);
        goto LABEL_4;
      }
      *i = v7;
      v7 = *v2;
      ++i;
      if ( !*v2 )
        goto LABEL_9;
    }
    *i = 47;
  }
LABEL_9:
  *i = 0;
  return v5;
}

unsigned __int64 __fastcall sub_404F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  char *v5; // rcx
  int v6; // eax
  int v7; // r8d
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
          *v11++ = v10;
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
    return sub_40EDD0(
             v9,
             v8,
             *(&off_419580[8 * (unsigned int)(v7 + v13)]
             + 4 * v6
             + 2 * (unsigned __int8)byte_6256EF
             + (unsigned __int8)byte_6256B4));
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

void __fastcall sub_405140(void *a1, char a2)
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

  if ( a1 && qword_625788 )
    sub_404D90(0LL, a1, 0);
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
      if ( !a1 )
        goto LABEL_18;
      v6 = (_BYTE *)sub_40B870(*v3);
      if ( *v6 == 46 )
      {
        v13 = v6[(v6[1] == 46) + 1];
        if ( !v13 || v13 == 47 )
          goto LABEL_5;
      }
      if ( *v5 == 47 )
      {
LABEL_18:
        sub_404D90(v5, v3[1], a2);
      }
      else
      {
        v7 = (void *)sub_40BB70(a1, v5, 0LL);
        sub_404D90(v7, v3[1], a2);
        free(v7);
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
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  char *IO_write_ptr; // rsi
  char *IO_write_end; // r8

  if ( a1 < a2 )
  {
    v3 = a1;
    do
    {
      while ( 1 )
      {
        v5 = qword_625680;
        v6 = v3 + 1;
        IO_write_ptr = stdout->_IO_write_ptr;
        IO_write_end = stdout->_IO_write_end;
        if ( !qword_625680 || a2 / qword_625680 <= v6 / qword_625680 )
          break;
        if ( IO_write_ptr >= IO_write_end )
        {
          __overflow(stdout, 9);
          v5 = qword_625680;
        }
        else
        {
          stdout->_IO_write_ptr = IO_write_ptr + 1;
          *IO_write_ptr = 9;
        }
        v4 = v3 / v5;
        v3 = v3 + v5 - v3 % v5;
        if ( v3 >= a2 )
          return v4;
      }
      if ( IO_write_ptr >= IO_write_end )
      {
        LODWORD(v4) = __overflow(stdout, 32);
      }
      else
      {
        LODWORD(v4) = (_DWORD)IO_write_ptr + 1;
        stdout->_IO_write_ptr = IO_write_ptr + 1;
        *IO_write_ptr = 32;
      }
      ++v3;
    }
    while ( v6 < a2 );
  }
  return v4;
}

int __fastcall sub_405390(const char *a1, __int64 a2)
{
  char *IO_write_ptr; // rax
  char *v3; // rbx
  signed __int64 v4; // rbp
  unsigned __int64 v5; // rax
  char *v6; // rbp
  __int64 v7; // rdx

  IO_write_ptr = *(char **)(a2 + 24);
  v3 = *(char **)(a2 + 16);
  v4 = IO_write_ptr - v3;
  if ( (unsigned __int64)(IO_write_ptr - v3) > 7 )
  {
    if ( IO_write_ptr == v3 )
      *(_BYTE *)(a2 + 80) |= 2u;
    v5 = ~*(_QWORD *)(a2 + 48) & (unsigned __int64)&IO_write_ptr[*(_QWORD *)(a2 + 48)];
    if ( v5 - *(_QWORD *)(a2 + 8) > *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 8) )
      v5 = *(_QWORD *)(a2 + 32);
    v6 = &v3[v4 & 0xFFFFFFFFFFFFFFF8LL];
    *(_QWORD *)(a2 + 24) = v5;
    *(_QWORD *)(a2 + 16) = v5;
    fputs_unlocked(a1, stdout);
    do
    {
      v7 = *(_QWORD *)v3;
      v3 += 8;
      __printf_chk(1LL, " %lu", v7);
    }
    while ( v6 != v3 );
    IO_write_ptr = stdout->_IO_write_ptr;
    if ( IO_write_ptr >= stdout->_IO_write_end )
    {
      LODWORD(IO_write_ptr) = __overflow(stdout, 10);
    }
    else
    {
      stdout->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = 10;
    }
  }
  return (int)IO_write_ptr;
}

size_t __fastcall sub_405460(char *s, __int64 a2, int a3)
{
  int v4; // ebx
  size_t v5; // rbp
  char *IO_write_ptr; // rdx
  size_t result; // rax

  if ( s )
  {
    v4 = a3 - sub_40EB70(s);
    if ( v4 < 0 )
      v4 = 0;
    fputs_unlocked(s, stdout);
    v5 = strlen(s) + v4;
    do
    {
      IO_write_ptr = stdout->_IO_write_ptr;
      if ( IO_write_ptr >= stdout->_IO_write_end )
      {
        __overflow(stdout, 32);
      }
      else
      {
        stdout->_IO_write_ptr = IO_write_ptr + 1;
        *IO_write_ptr = 32;
      }
      --v4;
    }
    while ( v4 != -1 );
  }
  else
  {
    __printf_chk(1LL, "%*lu ", a3, a2);
    v5 = a3;
  }
  result = v5 + qword_6255B8 + 1;
  qword_6255B8 = result;
  return result;
}

size_t __fastcall sub_405520(unsigned int a1, int a2, char a3)
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
    return (unsigned int)++dword_6255D4;
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
  if ( v2 )
    return sub_4050D0(*(char **)a1, *(char **)a2);
  result = 1;
  if ( !v3 )
    return sub_4050D0(*(char **)a1, *(char **)a2);
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
  if ( v2 )
    return sub_4050D0(*(char **)a2, *(char **)a1);
  result = 1;
  if ( !v3 )
    return sub_4050D0(*(char **)a2, *(char **)a1);
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
        return (a2 & 0x49) != 0 ? 0x2A : 0;
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
  char *IO_write_ptr; // rax

  v3 = sub_4057B0(a1, a2, a3);
  if ( v3 )
  {
    IO_write_ptr = stdout->_IO_write_ptr;
    if ( IO_write_ptr >= stdout->_IO_write_end )
    {
      __overflow(stdout, v3);
    }
    else
    {
      stdout->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = v3;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 96);
    if ( *(_QWORD *)(a1 + 96) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 96) < v5 )
        return 1;
      result = *(_QWORD *)(a2 + 104) - *(_DWORD *)(a1 + 104);
      if ( !result )
        return strcmp(*(const char **)a1, *(const char **)a2);
      return result;
    }
    return -1;
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
        return strcmp(v5, v7);
    }
    result = strcmp(v8, v9);
    if ( result )
      return result;
    return strcmp(v5, v7);
  }
  return result;
}

int __fastcall sub_405AF0(char a1)
{
  int *v1; // rbx
  int i; // ebp
  int result; // eax
  int *v4; // rbx
  int v5; // r12d
  int *j; // rbp
  int v7; // ebp
  void (*v8)(int); // rax
  struct sigaction v9; // [rsp+0h] [rbp-B8h] BYREF

  if ( !a1 )
  {
    v1 = (int *)&unk_419504;
    for ( i = 20; ; i = *v1++ )
    {
      result = sigismember(&set, i);
      if ( result )
      {
        result = (unsigned int)signal(i, 0LL);
        if ( v1 == (int *)&unk_419530 )
          return result;
      }
      else if ( v1 == (int *)&unk_419530 )
      {
        return result;
      }
    }
  }
  v4 = (int *)&unk_419504;
  v5 = 20;
  sigemptyset(&set);
  for ( j = (int *)&unk_419504; ; ++j )
  {
    sigaction(v5, 0LL, &v9);
    if ( v9.sa_handler != (__sighandler_t)1 )
      sigaddset(&set, v5);
    if ( j == (int *)&unk_419530 )
      break;
    v5 = *j;
  }
  v9.sa_flags = 0x10000000;
  v7 = 20;
  *(__m128i *)v9.sa_mask.__val = _mm_load_si128((const __m128i *)&set);
  *(__m128i *)&v9.sa_mask.__val[2] = _mm_load_si128((const __m128i *)&set.__val[2]);
  *(__m128i *)&v9.sa_mask.__val[4] = _mm_load_si128((const __m128i *)&set.__val[4]);
  *(__m128i *)&v9.sa_mask.__val[6] = _mm_load_si128((const __m128i *)&set.__val[6]);
  *(__m128i *)&v9.sa_mask.__val[8] = _mm_load_si128((const __m128i *)&set.__val[8]);
  *(__m128i *)&v9.sa_mask.__val[10] = _mm_load_si128((const __m128i *)&set.__val[10]);
  *(__m128i *)&v9.sa_mask.__val[12] = _mm_load_si128((const __m128i *)&set.__val[12]);
  *(__m128i *)&v9.sa_mask.__val[14] = _mm_load_si128((const __m128i *)&set.__val[14]);
  while ( 1 )
  {
    result = sigismember(&set, v7);
    if ( result )
    {
      v8 = (void (*)(int))sub_404830;
      if ( v7 == 20 )
        v8 = (void (*)(int))sub_405560;
      v9.sa_handler = v8;
      result = sigaction(v7, &v9, 0LL);
    }
    if ( v4 == (int *)&unk_419530 )
      break;
    v7 = *v4++;
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
  sigset_t v2; // [rsp-88h] [rbp-88h] BYREF

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
    sigprocmask(0, &set, &v2);
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
    sigprocmask(2, &v2, 0LL);
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
      sub_405CD0(&qword_624460, (const void **)&unk_624468);
      sub_405CD0((size_t *)&qword_624430, (const void **)&off_624438);
    }
  }
}

size_t __fastcall sub_405EA0(char **a1, const char *a2, __int64 a3, int a4, size_t *a5, char *a6)
{
  size_t v6; // rbx
  char *v7; // r13
  int v8; // r10d
  unsigned __int64 v9; // rax
  int v10; // r10d
  size_t v11; // r9
  size_t v12; // rax
  size_t mb_cur_max; // rax
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
  char *v28; // rdx
  __int64 v29; // rax
  char v30; // cl
  __int64 v31; // rdx
  int v32; // eax
  int v33; // r14d
  int v35; // [rsp+8h] [rbp-70h]
  int v36; // [rsp+8h] [rbp-70h]
  size_t v37; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+8h] [rbp-70h]
  unsigned __int64 v39; // [rsp+8h] [rbp-70h]
  char v41; // [rsp+18h] [rbp-60h]
  size_t v42; // [rsp+18h] [rbp-60h]
  int v43; // [rsp+18h] [rbp-60h]
  wchar_t c; // [rsp+34h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+38h] [rbp-40h] BYREF

  v7 = *a1;
  v41 = byte_625698 & ((unsigned int)sub_411C20(a3) <= 2);
  if ( v41 )
  {
    if ( !a4 )
    {
      v17 = strlen(a2);
      v6 = v17;
      v18 = v17 + 1;
      if ( v17 > 0x1FFF )
        v7 = (char *)sub_412980(v17 + 1);
      memcpy(v7, a2, v18);
      v41 = 0;
LABEL_23:
      v19 = &v7[v6];
      if ( __ctype_get_mb_cur_max() <= 1 )
      {
        if ( v19 > v7 )
        {
          v20 = __ctype_b_loc();
          v21 = v7;
          do
          {
            if ( ((*v20)[(unsigned __int8)*v21] & 0x4000) == 0 )
              *v21 = 63;
            ++v21;
          }
          while ( v21 != v19 );
        }
        v11 = v6;
LABEL_30:
        v22 = byte_625768;
        if ( !byte_625768 )
          goto LABEL_32;
        goto LABEL_31;
      }
      if ( v19 <= v7 )
      {
        v11 = 0LL;
        v6 = 0LL;
        goto LABEL_30;
      }
      v24 = v7;
      v25 = v7;
      v6 = 0LL;
LABEL_41:
      v26 = *v25;
      if ( *v25 <= 63 )
      {
        if ( v26 >= 37 || (unsigned __int8)(v26 - 32) <= 3u )
        {
LABEL_39:
          *v24 = v26;
          ++v25;
          ++v6;
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
          ++v6;
          goto LABEL_61;
        }
        if ( v29 == -2 )
        {
          *v24 = 63;
          ++v6;
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
          v28 = &v25[v38];
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
          v28 = v25 + 1;
          if ( v27 >= 0 )
          {
            v30 = *v25++;
            *v24++ = v30;
LABEL_54:
            v6 += v27;
            goto LABEL_48;
          }
        }
        *v24 = 63;
        ++v6;
        ++v24;
        v25 = v28;
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
    if ( !a4 )
    {
      v7 = (char *)a2;
      v11 = strlen(a2);
      goto LABEL_10;
    }
  }
  v35 = v8;
  v9 = sub_411CD0((int)v7, 0x2000, (int)a2);
  v10 = v35;
  v11 = v9;
  if ( v9 > 0x1FFF )
  {
    v33 = v9 + 1;
    v43 = v35;
    v39 = v9;
    v7 = (char *)sub_412980(v9 + 1);
    sub_411CD0((int)v7, v33, (int)a2);
    v10 = v43;
    v11 = v39;
  }
  v41 = 1;
  if ( *a2 == *v7 )
  {
    v42 = v11;
    v36 = v10;
    v12 = strlen(a2);
    v11 = v42;
    v10 = v36;
    v41 = v42 != v12;
  }
  if ( v10 )
  {
    v6 = v11;
    goto LABEL_23;
  }
LABEL_10:
  if ( a5 )
  {
    v37 = v11;
    mb_cur_max = __ctype_get_mb_cur_max();
    v11 = v37;
    if ( mb_cur_max > 1 )
    {
      v32 = sub_40E9B0(v7);
      v11 = v37;
      v6 = v32;
    }
    else if ( &v7[v37] <= v7 )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
      v14 = __ctype_b_loc();
      v11 = v37;
      v15 = *v14;
      v16 = v7;
      do
        v6 -= ((v15[(unsigned __int8)*v16++] & 0x4000) == 0) - 1LL;
      while ( &v7[v37] != v16 );
    }
    if ( !byte_625768 )
    {
      *a6 = 0;
LABEL_33:
      *a5 = v6;
      goto LABEL_34;
    }
  }
  else if ( !byte_625768 )
  {
    *a6 = 0;
    goto LABEL_34;
  }
LABEL_31:
  v22 = (v41 | byte_625769 ^ 1) ^ 1;
LABEL_32:
  *a6 = v22;
  if ( a5 )
    goto LABEL_33;
LABEL_34:
  *a1 = v7;
  return v11;
}

size_t __fastcall sub_4062D0(const char *a1, __int64 a2, int a3, __int64 a4, char a5, __int64 a6, const char *a7)
{
  size_t v10; // rbp
  char v11; // r12
  size_t v12; // r10
  __int64 v13; // r9
  void *v14; // r15
  _BYTE *v15; // rax
  char *v16; // rcx
  void *v17; // r9
  size_t v18; // r10
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rcx
  unsigned __int8 v22; // dl
  char *v23; // rax
  unsigned __int8 v25; // dl
  char *v26; // rax
  char *IO_write_ptr; // rax
  void *ptr; // [rsp+8h] [rbp-2060h]
  void *ptra; // [rsp+8h] [rbp-2060h]
  __int64 v30; // [rsp+10h] [rbp-2058h]
  size_t v31; // [rsp+10h] [rbp-2058h]
  size_t n; // [rsp+18h] [rbp-2050h]
  unsigned __int8 v33; // [rsp+27h] [rbp-2041h] BYREF
  void *v34; // [rsp+28h] [rbp-2040h] BYREF
  char v35[8248]; // [rsp+30h] [rbp-2038h] BYREF

  v34 = v35;
  v10 = sub_405EA0((char **)&v34, a1, a2, a3, 0LL, (char *)&v33);
  if ( v33 && a5 )
  {
    IO_write_ptr = stdout->_IO_write_ptr;
    if ( IO_write_ptr >= stdout->_IO_write_end )
    {
      __overflow(stdout, 32);
    }
    else
    {
      stdout->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = 32;
    }
    ++qword_6255B8;
  }
  if ( a4 )
  {
    if ( sub_404AE0(4u) )
      sub_405D40();
    sub_405CD0((size_t *)qword_624420, (const void **)&off_624428);
    sub_405CD0((size_t *)a4, (const void **)(a4 + 8));
    sub_405CD0((size_t *)&qword_624430, (const void **)&off_624438);
  }
  if ( a7 )
  {
    v11 = byte_625768;
    if ( byte_625768 && (v11 = byte_625769) != 0 )
    {
      if ( v33 )
      {
        v12 = v10;
        v13 = 0LL;
        v11 = 0;
      }
      else
      {
        v12 = v10 - 2;
        v25 = *(_BYTE *)v34;
        v26 = stdout->_IO_write_ptr;
        if ( v26 >= stdout->_IO_write_end )
        {
          __overflow(stdout, v25);
          v13 = 1LL;
          v12 = v10 - 2;
        }
        else
        {
          v13 = 1LL;
          stdout->_IO_write_ptr = v26 + 1;
          *v26 = v25;
        }
      }
    }
    else
    {
      v12 = v10;
      v13 = 0LL;
    }
    n = v12;
    v30 = v13;
    v14 = (void *)sub_404E80((const char *)qword_625748, 0LL);
    v15 = (_BYTE *)sub_404E80(a7, 1LL);
    v16 = "";
    if ( *v15 != 47 )
      v16 = "//DIRED//" + 8;
    ptr = v15;
    __printf_chk(1LL, "\x1B]8;;file://%s%s%s\a", v14, v16, v15);
    free(v14);
    free(ptr);
    v17 = (void *)v30;
    v18 = n;
    if ( a6 )
      goto LABEL_13;
LABEL_37:
    fwrite_unlocked((char *)v34 + (_QWORD)v17, 1uLL, v18, stdout);
    qword_6255B8 += v10;
    goto LABEL_21;
  }
  v18 = v10;
  v17 = 0LL;
  v11 = 0;
  if ( !a6 )
    goto LABEL_37;
LABEL_13:
  if ( byte_6256D8 )
  {
    v19 = *(_QWORD **)(a6 + 24);
    if ( *(_QWORD *)(a6 + 32) - (_QWORD)v19 <= 7uLL )
    {
      v31 = v18;
      ptra = v17;
      obstack_newchunk(a6, 8LL);
      v19 = *(_QWORD **)(a6 + 24);
      v18 = v31;
      v17 = ptra;
    }
    *v19 = qword_6255B8;
    *(_QWORD *)(a6 + 24) += 8LL;
  }
  fwrite_unlocked((char *)v34 + (_QWORD)v17, 1uLL, v18, stdout);
  v20 = v10 + qword_6255B8;
  qword_6255B8 += v10;
  if ( byte_6256D8 )
  {
    v21 = *(__int64 **)(a6 + 24);
    if ( *(_QWORD *)(a6 + 32) - (_QWORD)v21 <= 7uLL )
    {
      obstack_newchunk(a6, 8LL);
      v21 = *(__int64 **)(a6 + 24);
      v20 = qword_6255B8;
    }
    *v21 = v20;
    *(_QWORD *)(a6 + 24) += 8LL;
  }
LABEL_21:
  if ( a7 )
  {
    fwrite_unlocked("\x1B]8;;\a", 1uLL, 6uLL, stdout);
    if ( v11 )
    {
      v22 = *((char *)v34 + v10 - 1);
      v23 = stdout->_IO_write_ptr;
      if ( v23 >= stdout->_IO_write_end )
      {
        __overflow(stdout, v22);
      }
      else
      {
        stdout->_IO_write_ptr = v23 + 1;
        *v23 = v22;
      }
    }
  }
  if ( v34 != v35 && v34 != a1 )
    free(v34);
  return v10 + v33;
}

size_t __fastcall sub_406690(__int64 a1, char a2, __int64 a3, unsigned __int64 a4)
{
  const char *v6; // rbp
  size_t v7; // rbx
  int v9; // r8d
  bool v10; // al
  int v11; // edx
  unsigned __int64 v12; // rcx
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

  if ( !a2 )
  {
    v6 = *(const char **)a1;
    if ( !byte_6256D2 )
      goto LABEL_3;
    v11 = *(unsigned __int8 *)(a1 + 185);
    if ( byte_625750 && (_BYTE)v11 )
      v9 = *(_DWORD *)(a1 + 172);
    else
      v9 = *(_DWORD *)(a1 + 48);
    goto LABEL_11;
  }
  v6 = *(const char **)(a1 + 8);
  if ( !byte_6256D2 )
  {
LABEL_3:
    v7 = sub_4062D0(v6, qword_625690, *(_DWORD *)(a1 + 196), 0LL, a2 ^ 1u, a3, *(const char **)(a1 + 16));
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
          v12 = (-(__int64)!sub_404AE0(0xDu) & 0xFFFFFFFFFFFFFFA0LL) + 208;
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
        if ( (v9 & 2) == 0 || (v22 = sub_404AE0(0x13u), v12 = 304LL, !v22) )
        {
          v12 = 96LL;
          if ( (v9 & 0x200) != 0 )
          {
            v23 = -(__int64)!sub_404AE0(0x12u);
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
  if ( (v9 & 0x800) != 0 && sub_404AE0(0x10u) )
  {
    v12 = 256LL;
    goto LABEL_17;
  }
  if ( (v9 & 0x400) != 0 && sub_404AE0(0x11u) )
  {
    v12 = 272LL;
    goto LABEL_17;
  }
  if ( sub_404AE0(0x15u) && *(_BYTE *)(a1 + 192) )
  {
    v12 = 336LL;
    goto LABEL_17;
  }
  if ( (v21 & 0x49) != 0 && sub_404AE0(0xEu) )
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
  v7 = sub_4062D0(v6, qword_625690, *(_DWORD *)(a1 + 196), v15, a2 ^ 1u, a3, *(const char **)(a1 + 16));
  sub_405D70();
  sub_405C70();
  if ( qword_625670 && a4 / qword_625670 != (v7 + a4 - 1) / qword_625670 )
    sub_405CD0(&qword_624590, (const void **)&off_624598);
  return v7;
}

size_t __fastcall sub_406AF0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  const char *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  const char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  size_t v10; // rbp
  _BYTE v12[680]; // [rsp+0h] [rbp-2A8h] BYREF

  sub_405E30();
  if ( byte_6256BC )
  {
    v4 = "?";
    if ( *(_BYTE *)(a1 + 184) )
    {
      v5 = *(_QWORD *)(a1 + 32);
      if ( v5 )
        v4 = (const char *)sub_40E520(v5, v12, v3, "?");
    }
    v6 = 0LL;
    if ( dword_6256F8 != 4 )
      v6 = (unsigned int)dword_625720;
    __printf_chk(1LL, "%*s ", v6, v4);
  }
  if ( byte_6256EC )
  {
    v7 = "?";
    if ( *(_BYTE *)(a1 + 184) )
      v7 = (const char *)sub_40D5D0(*(_QWORD *)(a1 + 88), v12, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
    v8 = 0LL;
    if ( dword_6256F8 != 4 )
      v8 = (unsigned int)dword_62571C;
    __printf_chk(1LL, "%*s ", v8, v7);
  }
  if ( byte_625725 )
  {
    v9 = 0LL;
    if ( dword_6256F8 != 4 )
      v9 = (unsigned int)dword_625714;
    __printf_chk(1LL, "%*s ", v9, *(_QWORD *)(a1 + 176));
  }
  v10 = sub_406690(a1, 0, 0LL, a2);
  if ( dword_6256D4 )
    return sub_4058A0(*(_BYTE *)(a1 + 184), *(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 168)) + v10;
  else
    return v10;
}

char __fastcall sub_406C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  char *v8; // rbx
  char *v9; // r15
  int v10; // r14d
  int v11; // eax
  int v12; // edx
  char *v13; // rax
  char v14; // al
  const char *v15; // rax
  __int64 v16; // rcx
  char *v17; // rbx
  char *v18; // r14
  int v19; // r13d
  int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  char *v23; // rax
  char v24; // al
  const char *v25; // r13
  int v26; // r8d
  char *v27; // r13
  unsigned __int64 v28; // r13
  size_t v29; // rax
  int v30; // edx
  size_t v31; // r12
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  const char *v35; // r9
  __int64 v36; // rdi
  char *v37; // rbx
  int v38; // eax
  unsigned int v39; // edx
  bool v40; // cf
  __time_t tv_sec; // rdx
  __time_t v42; // rcx
  int tv_nsec; // esi
  __int64 v44; // r9
  int v45; // edi
  int v46; // eax
  __int64 v47; // rax
  char *v48; // rdx
  __int64 v49; // rax
  int v50; // edx
  char *v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  __time_t v54; // rdi
  int v55; // r13d
  unsigned __int64 v56; // rax
  unsigned int v57; // edi
  __int64 v58; // rax
  int v59; // r14d
  const char *v60; // r15
  __int64 v61; // rcx
  const char *v62; // rax
  int v63; // r8d
  __int64 v64; // rax
  char *v65; // rdx
  int v67; // [rsp+4h] [rbp-1344h]
  __int64 v68; // [rsp+8h] [rbp-1340h]
  __int64 v69; // [rsp+18h] [rbp-1330h] BYREF
  char v70; // [rsp+24h] [rbp-1324h] BYREF
  char v71[19]; // [rsp+25h] [rbp-1323h] BYREF
  __int64 v72; // [rsp+38h] [rbp-1310h]
  char v73[32]; // [rsp+40h] [rbp-1308h] BYREF
  char v74[16]; // [rsp+60h] [rbp-12E8h] BYREF
  int v75; // [rsp+70h] [rbp-12D8h]
  char v76[16]; // [rsp+A0h] [rbp-12A8h] BYREF
  int v77; // [rsp+B0h] [rbp-1298h]
  char v78[1008]; // [rsp+E0h] [rbp-1268h] BYREF
  char s[3704]; // [rsp+4D0h] [rbp-E78h] BYREF

  if ( *(_BYTE *)(a1 + 184) )
  {
    sub_40BB60(a1 + 24, &v70);
  }
  else
  {
    v70 = byte_419FC8[*(unsigned int *)(a1 + 168)];
    strcpy(v71, "??????????");
  }
  if ( !byte_625724 )
  {
    v71[9] = 0;
    goto LABEL_5;
  }
  v33 = *(_DWORD *)(a1 + 188);
  if ( v33 == 1 )
  {
    v71[9] = 46;
LABEL_5:
    v5 = dword_6256F4;
    if ( dword_6256F4 != 1 )
      goto LABEL_6;
LABEL_53:
    v34 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)&v71[11] = *(_QWORD *)(a1 + 128);
    v7 = *(unsigned __int8 *)(a1 + 184);
    v72 = v34;
    if ( !byte_6256BC )
      goto LABEL_8;
    goto LABEL_56;
  }
  if ( v33 != 2 )
    goto LABEL_5;
  v5 = dword_6256F4;
  v71[9] = 43;
  if ( dword_6256F4 == 1 )
    goto LABEL_53;
LABEL_6:
  if ( v5 )
  {
    if ( v5 != 2 )
      abort();
    v32 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)&v71[11] = *(_QWORD *)(a1 + 96);
    v7 = *(unsigned __int8 *)(a1 + 184);
    v72 = v32;
    if ( !byte_6256BC )
      goto LABEL_8;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)&v71[11] = *(_QWORD *)(a1 + 112);
    v7 = *(unsigned __int8 *)(a1 + 184);
    v72 = v6;
    if ( !byte_6256BC )
    {
LABEL_8:
      v8 = s;
      goto LABEL_9;
    }
  }
LABEL_56:
  v35 = "?";
  if ( (_BYTE)v7 )
  {
    v36 = *(_QWORD *)(a1 + 32);
    if ( v36 )
      v35 = (const char *)sub_40E520(v36, v78, v7, a4);
  }
  v37 = s;
  __sprintf_chk(s, 1LL, 3643LL, "%*s ", dword_625720, v35);
  do
  {
    v38 = *(_DWORD *)v37;
    v37 += 4;
    v39 = ~v38 & (v38 - 16843009) & 0x80808080;
  }
  while ( !v39 );
  if ( (~v38 & (v38 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v39) = (~v38 & (v38 - 16843009) & 0x80808080) >> 16;
    v37 += 2;
  }
  v40 = __CFADD__((_BYTE)v39, (_BYTE)v39);
  v7 = *(unsigned __int8 *)(a1 + 184);
  v8 = &v37[-v40 - 3];
LABEL_9:
  if ( byte_6256EC )
  {
    v9 = "?";
    if ( (_BYTE)v7 )
      v9 = (char *)sub_40D5D0(*(_QWORD *)(a1 + 88), v78, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
    v10 = dword_62571C;
    v11 = v10 - sub_40EB70(v9);
    if ( v11 > 0 )
    {
      v12 = v11 - 1;
      a4 = (__int64)&v8[v11 - 1 + 1];
      v13 = v8;
      do
        *v13++ = 32;
      while ( v13 != (char *)a4 );
      v8 += v12 + 1;
    }
    do
    {
      v14 = *v9++;
      *v8++ = v14;
    }
    while ( v14 );
    *(v8 - 1) = 32;
    v7 = *(unsigned __int8 *)(a1 + 184);
  }
  v15 = "?";
  if ( (_BYTE)v7 )
    v15 = (const char *)sub_40E520(*(_QWORD *)(a1 + 40), v78, v7, a4);
  __sprintf_chk(v8, 1LL, -1LL, "%s %*s ", &v70, dword_625718, v15);
  v17 = &v8[strlen(v8)];
  if ( byte_6256D8 )
  {
    fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
    qword_6255B8 += 2LL;
  }
  if ( byte_6245A9 || byte_6245A8 || byte_6256EE || byte_625725 )
  {
    fputs_unlocked(s, stdout);
    qword_6255B8 += v17 - s;
    if ( byte_6245A9 )
      sub_405520(*(_DWORD *)(a1 + 52), dword_625710, *(_BYTE *)(a1 + 184));
    if ( byte_6245A8 )
    {
      v50 = dword_62570C;
      v51 = "?";
      v52 = *(unsigned int *)(a1 + 56);
      if ( *(_BYTE *)(a1 + 184) )
      {
        v51 = 0LL;
        if ( !byte_6256ED )
        {
          v68 = *(unsigned int *)(a1 + 56);
          v67 = dword_62570C;
          v53 = sub_40E2F0((unsigned int)v52);
          v52 = v68;
          v50 = v67;
          v51 = (char *)v53;
        }
      }
      sub_405460(v51, v52, v50);
    }
    if ( byte_6256EE )
      sub_405520(*(_DWORD *)(a1 + 52), dword_625708, *(_BYTE *)(a1 + 184));
    v17 = s;
    if ( byte_625725 )
      sub_405460(*(char **)(a1 + 176), 0LL, dword_625714);
  }
  if ( !*(_BYTE *)(a1 + 184) )
  {
    v18 = "?";
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(a1 + 48) & 0xB000) != 0x2000 )
  {
    v18 = (char *)sub_40D5D0(*(_QWORD *)(a1 + 72), v78, (unsigned int)dword_6256DC, 1LL, qword_6245A0);
LABEL_35:
    v19 = dword_6256FC;
    v20 = v19 - sub_40EB70(v18);
    if ( v20 > 0 )
    {
      v21 = v20 - 1;
      v22 = (__int64)&v17[v20 - 1 + 1];
      v23 = v17;
      do
        *v23++ = 32;
      while ( v23 != (char *)v22 );
      v17 += v21 + 1;
    }
    do
    {
      v24 = *v18++;
      *v17++ = v24;
    }
    while ( v24 );
    *(v17 - 1) = 32;
    goto LABEL_41;
  }
  v55 = dword_6256FC - (dword_625704 + dword_625700 + 2);
  v56 = *(_QWORD *)(a1 + 64);
  v57 = v56 >> 12;
  LOBYTE(v57) = 0;
  v58 = sub_40E520((unsigned __int8)v56 | v57, v78, (unsigned __int8)v56, v16);
  v59 = dword_625700;
  v60 = (const char *)v58;
  v62 = (const char *)sub_40E520(
                        ((unsigned int)*(_QWORD *)(a1 + 64) >> 8) & 0xFFF | HIDWORD(*(_QWORD *)(a1 + 64)) & 0xFFFFF000,
                        v76,
                        ((unsigned int)*(_QWORD *)(a1 + 64) >> 8) & 0xFFF,
                        v61);
  v63 = 0;
  if ( v55 >= 0 )
    v63 = v55;
  __sprintf_chk(v17, 1LL, -1LL, "%*s, %*s ", dword_625704 + v63, v62, v59, v60);
  v17 += dword_6256FC + 1;
LABEL_41:
  *v17 = 1;
  v25 = "?";
  if ( !*(_BYTE *)(a1 + 184) )
    goto LABEL_42;
  if ( !sub_4176F0(qword_625668, &v71[11], v74) )
    goto LABEL_78;
  tv_sec = tp.tv_sec;
  v42 = *(_QWORD *)&v71[11];
  tv_nsec = tp.tv_nsec;
  v44 = v72;
  if ( tp.tv_sec < *(__int64 *)&v71[11] )
    goto LABEL_108;
  if ( tp.tv_sec <= *(__int64 *)&v71[11] )
  {
    v45 = tp.tv_nsec;
    v46 = v72;
    if ( LODWORD(tp.tv_nsec) - (int)v72 >= 0 )
    {
      if ( tp.tv_sec - 15778476 >= *(__int64 *)&v71[11] )
      {
        v47 = 0LL;
        goto LABEL_74;
      }
LABEL_94:
      v47 = (unsigned int)(v46 - v45) >> 31;
      goto LABEL_74;
    }
LABEL_108:
    sub_40C150(&tp);
    v42 = *(_QWORD *)&v71[11];
    v44 = v72;
    tv_sec = tp.tv_sec;
    tv_nsec = tp.tv_nsec;
    v54 = tp.tv_sec - 15778476;
    if ( tp.tv_sec - 15778476 < *(__int64 *)&v71[11] )
      goto LABEL_91;
    goto LABEL_89;
  }
  v54 = tp.tv_sec - 15778476;
  if ( tp.tv_sec - 15778476 < *(__int64 *)&v71[11] )
    goto LABEL_111;
LABEL_89:
  v47 = 0LL;
  if ( v54 > v42 || tv_nsec - (int)v44 >= 0 )
    goto LABEL_74;
LABEL_91:
  if ( v42 >= tv_sec )
  {
    v47 = 0LL;
    if ( v42 > tv_sec )
      goto LABEL_74;
    v46 = v44;
    v45 = tv_nsec;
    goto LABEL_94;
  }
LABEL_111:
  v47 = 1LL;
LABEL_74:
  if ( byte_624788 )
    v48 = (char *)(((v75 + 12 * v47) << 7) + 6440864);
  else
    v48 = (&off_624410)[v47];
  v49 = sub_410650(v17, 1001LL, v48, v74, qword_625668, v44);
  if ( v49 )
  {
    v17 += v49;
    goto LABEL_79;
  }
LABEL_78:
  if ( *v17 )
  {
    if ( *(_BYTE *)(a1 + 184) )
    {
      v64 = sub_40E480(*(_QWORD *)&v71[11], v73);
      v26 = dword_624404;
      v25 = (const char *)v64;
      if ( dword_624404 >= 0 )
        goto LABEL_43;
      goto LABEL_100;
    }
    v25 = "?";
LABEL_42:
    v26 = dword_624404;
    if ( dword_624404 >= 0 )
    {
LABEL_43:
      __sprintf_chk(v17, 1LL, -1LL, "%*s ", v26, v25);
      v27 = &v17[strlen(v17)];
      goto LABEL_44;
    }
LABEL_100:
    v69 = 0LL;
    if ( !sub_4176F0(qword_625668, &v69, v76) )
      goto LABEL_104;
    v65 = off_624410;
    if ( byte_624788 )
      v65 = (char *)(((__int64)v77 << 7) + 6440864);
    if ( sub_410650(v78, 1001LL, v65, v76, qword_625668, 0LL) )
    {
      v26 = sub_40E9B0(v78);
      dword_624404 = v26;
    }
    else
    {
LABEL_104:
      v26 = dword_624404;
    }
    if ( v26 < 0 )
    {
      dword_624404 = 0;
      v26 = 0;
    }
    goto LABEL_43;
  }
LABEL_79:
  v27 = v17 + 1;
  *(_WORD *)v17 = 32;
LABEL_44:
  v28 = v27 - s;
  fputs_unlocked(s, stdout);
  qword_6255B8 += v28;
  v29 = sub_406690(a1, 0, (__int64)&unk_625560, v28);
  v30 = *(_DWORD *)(a1 + 168);
  v31 = v29;
  if ( v30 == 6 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      fwrite_unlocked(" -> ", 1uLL, 4uLL, stdout);
      qword_6255B8 += 4LL;
      LOBYTE(v29) = sub_406690(a1, 1, 0LL, v28 + v31 + 4);
      if ( dword_6256D4 )
        LOBYTE(v29) = sub_4058A0(1, *(_DWORD *)(a1 + 172), 0);
    }
  }
  else
  {
    LOBYTE(v29) = dword_6256D4;
    if ( dword_6256D4 )
      LOBYTE(v29) = sub_4058A0(*(_BYTE *)(a1 + 184), *(_DWORD *)(a1 + 48), v30);
  }
  return v29;
}

size_t __fastcall sub_407630(const char *a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // [rsp+Fh] [rbp-2029h] BYREF
  void *ptr; // [rsp+10h] [rbp-2028h] BYREF
  size_t v6; // [rsp+18h] [rbp-2020h] BYREF
  char v7[8216]; // [rsp+20h] [rbp-2018h] BYREF

  ptr = v7;
  sub_405EA0((char **)&ptr, a1, a2, a3, &v6, (char *)&v4);
  if ( ptr != v7 && ptr != a1 )
    free(ptr);
  return v6 + v4;
}

size_t __fastcall sub_407690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rbx
  const char *v9; // rax
  const char *v10; // rax
  _BYTE v11[680]; // [rsp+0h] [rbp-2A8h] BYREF

  if ( !byte_6256BC )
  {
    v4 = 0LL;
    goto LABEL_14;
  }
  if ( dword_6256F8 == 4 )
  {
    v10 = (const char *)sub_40E520(*(_QWORD *)(a1 + 32), v11, a3, a4);
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
        v9 = (const char *)sub_40D5D0(*(_QWORD *)(a1 + 88), v11, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
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
  v7 = sub_407630(*(const char **)a1, qword_625690, *(_DWORD *)(a1 + 196)) + v4;
  if ( dword_6256D4 )
    v7 += (unsigned __int8)sub_4057B0(*(_BYTE *)(a1 + 184), *(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 168)) != 0;
  return v7;
}

unsigned __int64 __fastcall sub_407800(char a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbp
  size_t v18; // rax
  unsigned __int64 v19; // r10
  size_t v20; // r9
  unsigned __int64 v21; // r11
  size_t v22; // rdi
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  __int64 *v25; // rsi
  unsigned __int64 v26; // r8
  __int64 v27; // rax

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
      if ( ((48 * v6) & 0x8000000000000000LL) != 0LL || !is_mul_ok(v6, 0x30uLL) )
        goto LABEL_43;
      v10 = 2 * v6;
      qword_6255C8 = sub_4129E0(qword_6255C8, 48 * v6);
    }
    else
    {
      v8 = ((unsigned __int64)qword_6255C0 * (unsigned __int128)0x18uLL) >> 64 != 0;
      if ( 24 * qword_6255C0 < 0 || !is_mul_ok(qword_6255C0, 0x18uLL) )
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
        if ( v7 >= 0 && !a2 )
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
        *v16++ = 3LL;
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
            if ( a1 )
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
  size_t v8; // rax
  int v9; // ecx
  char v10; // dl
  char *IO_write_ptr; // rax
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
          if ( !qword_625670 || qword_625670 > v8 + v4 + 2 && -3LL - v8 >= v4 )
          {
            v4 += v8 + 2;
            goto LABEL_11;
          }
          v4 = v8;
          v9 = 10;
          v10 = 10;
          v6 = 0LL;
LABEL_12:
          IO_write_ptr = stdout->_IO_write_ptr;
          if ( IO_write_ptr >= stdout->_IO_write_end )
          {
            v16 = v9;
            v15 = v10;
            __overflow(stdout, a1);
            v10 = v15;
            v9 = v16;
          }
          else
          {
            stdout->_IO_write_ptr = IO_write_ptr + 1;
            *IO_write_ptr = a1;
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
  unsigned __int64 IO_write_ptr; // rax
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
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
  unsigned __int64 v24; // rcx
  __int64 v25; // r15
  _BOOL8 v26; // rdx
  bool v27; // zf
  __int64 v28; // rdx
  unsigned __int64 v29; // r14
  __int64 v30; // r13
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rdi
  __int64 v33; // r12
  size_t v34; // rax
  __int64 v35; // rbx
  char *v36; // rax
  size_t v38; // [rsp+0h] [rbp-50h]
  size_t v39; // [rsp+0h] [rbp-50h]
  unsigned __int64 v40; // [rsp+8h] [rbp-48h]
  __int64 v41; // [rsp+10h] [rbp-40h]

  LODWORD(IO_write_ptr) = dword_6256F8;
  switch ( dword_6256F8 )
  {
    case 0:
      for ( i = 0LL; qword_625770 > i; ++i )
      {
        sub_405E30();
        sub_406C60(*((_QWORD *)qword_625760 + i), a2, v21, v22);
        IO_write_ptr = (unsigned __int64)stdout->_IO_write_ptr;
        if ( (char *)IO_write_ptr >= stdout->_IO_write_end )
        {
          a2 = 10LL;
          LODWORD(IO_write_ptr) = __overflow(stdout, 10);
        }
        else
        {
          stdout->_IO_write_ptr = (char *)(IO_write_ptr + 1);
          *(_BYTE *)IO_write_ptr = 10;
        }
        ++qword_6255B8;
      }
      break;
    case 1:
      for ( j = 0LL; qword_625770 > j; ++j )
      {
        sub_406AF0(*((_QWORD *)qword_625760 + j), 0LL);
        IO_write_ptr = (unsigned __int64)stdout->_IO_write_ptr;
        if ( (char *)IO_write_ptr >= stdout->_IO_write_end )
        {
          LODWORD(IO_write_ptr) = __overflow(stdout, 10);
        }
        else
        {
          stdout->_IO_write_ptr = (char *)(IO_write_ptr + 1);
          *(_BYTE *)IO_write_ptr = 10;
        }
      }
      break;
    case 2:
      if ( !qword_625670 )
        goto LABEL_31;
      v40 = 0LL;
      v24 = sub_407800(1, a2, a3);
      v25 = qword_6255C8 + 24 * v24 - 24;
      IO_write_ptr = qword_625770 / v24;
      v26 = qword_625770 % v24 != 0;
      v27 = qword_625770 / v24 + v26 == 0;
      v28 = qword_625770 / v24 + v26;
      v41 = v28;
      if ( !v27 )
      {
        do
        {
          v29 = v40;
          v30 = 0LL;
          v31 = 0LL;
          while ( 1 )
          {
            v33 = *((_QWORD *)qword_625760 + v29);
            v34 = sub_407690(v33, a2, v28, v24);
            a2 = v31;
            v39 = v34;
            v35 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + v30);
            v30 += 8LL;
            sub_406AF0(v33, v31);
            v29 += v41;
            if ( v29 >= qword_625770 )
              break;
            a2 = v31 + v35;
            v32 = v31 + v39;
            v31 = a2;
            sub_4052C0(v32, a2);
          }
          v36 = stdout->_IO_write_ptr;
          if ( v36 >= stdout->_IO_write_end )
          {
            a2 = 10LL;
            __overflow(stdout, 10);
          }
          else
          {
            v28 = (__int64)(v36 + 1);
            stdout->_IO_write_ptr = v36 + 1;
            *v36 = 10;
          }
          LODWORD(IO_write_ptr) = ++v40;
        }
        while ( v41 != v40 );
      }
      break;
    case 3:
      if ( !qword_625670 )
      {
LABEL_31:
        v19 = 32;
        goto LABEL_11;
      }
      v5 = sub_407800(0, a2, a3);
      v6 = qword_6255C8 + 24 * v5 - 24;
      v7 = *(_QWORD *)qword_625760;
      v38 = sub_407690(*(_QWORD *)qword_625760, a2, 3 * v5, v8);
      v9 = **(_QWORD **)(v6 + 16);
      sub_406AF0(v7, 0LL);
      if ( (unsigned __int64)qword_625770 > 1 )
      {
        v10 = 0LL;
        v11 = 1LL;
        v12 = v38;
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
      IO_write_ptr = (unsigned __int64)stdout->_IO_write_ptr;
      if ( (char *)IO_write_ptr >= stdout->_IO_write_end )
      {
        LODWORD(IO_write_ptr) = __overflow(stdout, 10);
      }
      else
      {
        stdout->_IO_write_ptr = (char *)(IO_write_ptr + 1);
        *(_BYTE *)IO_write_ptr = 10;
      }
      break;
    case 4:
      v19 = 44;
LABEL_11:
      LODWORD(IO_write_ptr) = sub_407AE0(v19, a2, a3, a4);
      break;
    default:
      return IO_write_ptr;
  }
  return IO_write_ptr;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(a2 + 72) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 72) == v5 )
        return strcmp(*(const char **)a2, *(const char **)a1);
      else
        return *(_QWORD *)(a2 + 72) < v5;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 72);
    if ( *(_QWORD *)(a1 + 72) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 72) == v5 )
        return sub_4050D0(*(char **)a1, *(char **)a2);
      else
        return *(_QWORD *)(a1 + 72) < v5;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 72);
    if ( *(_QWORD *)(a1 + 72) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 72) == v5 )
        return strcmp(*(const char **)a1, *(const char **)a2);
      else
        return *(_QWORD *)(a1 + 72) < v5;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(a2 + 72) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 72) == v5 )
        return sub_4050D0(*(char **)a2, *(char **)a1);
      else
        return *(_QWORD *)(a2 + 72) < v5;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 128);
    if ( *(_QWORD *)(a1 + 128) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 128) < v5 )
        return 1;
      result = *(_QWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
      if ( !result )
        return strcmp(*(const char **)a1, *(const char **)a2);
      return result;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 112);
    if ( *(_QWORD *)(a1 + 112) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 112) < v5 )
        return 1;
      result = *(_QWORD *)(a2 + 120) - *(_DWORD *)(a1 + 120);
      if ( !result )
        return strcmp(*(const char **)a1, *(const char **)a2);
      return result;
    }
    return -1;
  }
  return result;
}

__int64 __fastcall sub_408410(unsigned int a1)
{
  int *v2; // rax
  int v3; // ecx
  unsigned int v4; // edx
  __int64 result; // rax
  char *v6; // rdi
  _BYTE v7[56]; // [rsp+0h] [rbp-38h] BYREF

  if ( byte_6256ED || (v6 = (char *)sub_40E160()) == 0LL )
  {
    __sprintf_chk(v7, 1LL, 21LL, "%lu", a1);
    v2 = (int *)v7;
    do
    {
      v3 = *v2++;
      v4 = ~v3 & (v3 - 16843009) & 0x80808080;
    }
    while ( !v4 );
    if ( (~v3 & (v3 - 16843009) & 0x8080) == 0 )
    {
      v4 >>= 16;
      LODWORD(v2) = (_DWORD)v2 + 2;
    }
    return (_DWORD)v2 - (__CFADD__((_BYTE)v4, (_BYTE)v4) + 3) - (unsigned int)v7;
  }
  else
  {
    result = sub_40EB70(v6);
    if ( (int)result < 0 )
      return 0LL;
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
      v2 = *v0++;
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
  int v5; // r14d
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  char v11; // r8
  char v12; // dl
  char *v13; // r12
  char v14; // cl
  struct stat *v15; // r15
  __int64 v16; // rdx
  int *v17; // rax
  __int64 v18; // r14
  int v19; // r9d
  int v20; // eax
  unsigned __int64 v21; // rcx
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
  char *v59; // rdi
  char *v60; // rsi
  char *v61; // rax
  char *v62; // rcx
  bool v63; // al
  char *v64; // rax
  int v65; // eax
  char *v66; // rsi
  _BYTE *v67; // r14
  int *v68; // rax
  size_t v69; // rax
  char *v70; // rax
  size_t v71; // rdx
  char *v72; // r15
  char *v73; // rax
  int v74; // eax
  int v75; // eax
  unsigned int v76; // r14d
  struct stat *p_stat_buf; // rax
  int st_dev; // ecx
  bool v79; // zf
  int v80; // eax
  char *v81; // rax
  __int64 v82; // rdx
  int *v83; // r8
  const char *v84; // rax
  bool v85; // al
  bool v86; // al
  bool v87; // al
  char *v88; // rdi
  int v89; // eax
  _BYTE v90[14]; // [rsp+0h] [rbp-300h] BYREF
  char v91; // [rsp+Eh] [rbp-2F2h]
  char v92; // [rsp+Fh] [rbp-2F1h]
  int *v93; // [rsp+10h] [rbp-2F0h]
  char *filename; // [rsp+18h] [rbp-2E8h]
  char v95[32]; // [rsp+20h] [rbp-2E0h] BYREF
  struct stat stat_buf; // [rsp+40h] [rbp-2C0h] BYREF

  v5 = a2;
  v7 = qword_625770;
  filename = a1;
  v8 = qword_625780;
  if ( qword_625770 == qword_625778 )
  {
    if ( 400 * qword_625770 < 0 || !is_mul_ok(qword_625770, 0x190uLL) )
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
  if ( a3 )
  {
    v12 = *filename;
    v13 = filename;
    if ( *filename == 47 )
      goto LABEL_10;
    v14 = *a4;
    if ( !*a4 )
      goto LABEL_10;
    goto LABEL_90;
  }
  if ( byte_6256D1 )
  {
    v12 = *filename;
    if ( *filename == 47 )
    {
      v13 = filename;
      goto LABEL_79;
    }
    v14 = *a4;
    v13 = filename;
    if ( !*a4 )
    {
LABEL_79:
      v48 = sub_40B070(v13);
      *(_QWORD *)(v10 + 16) = v48;
      if ( !v48 )
      {
        v49 = dcgettext(0LL, "error canonicalizing %s", 5);
        sub_405580(a3, v49, (__int64)v13);
      }
      goto LABEL_11;
    }
    goto LABEL_90;
  }
  if ( byte_625661 )
    goto LABEL_47;
  if ( (_DWORD)a2 == 3 )
  {
    if ( byte_6256D2 )
    {
      LOBYTE(v93) = byte_6256D1;
      v85 = sub_404AE0(0x13u);
      v11 = (char)v93;
      if ( v85 )
        goto LABEL_47;
      v86 = sub_404AE0(0x12u);
      v11 = (char)v93;
      if ( v86 )
        goto LABEL_47;
      v87 = sub_404AE0(0x14u);
      v11 = (char)v93;
      if ( v87 )
        goto LABEL_47;
    }
  }
  if ( byte_6256BC )
  {
    v25 = (_DWORD)a2 == 0;
    if ( (_DWORD)a2 == 6 || !(_DWORD)a2 )
      goto LABEL_151;
LABEL_47:
    v12 = *filename;
    if ( *filename == 47 || (v14 = *a4) == 0 )
    {
      v15 = (struct stat *)(v10 + 24);
      v13 = filename;
      if ( dword_6256B8 == 5 )
      {
LABEL_14:
        if ( !__xstat(1, v13, v15) )
          goto LABEL_15;
LABEL_51:
        v30 = dcgettext(0LL, "cannot access %s", 5);
        v31 = (__int64)v13;
        v22 = 0LL;
        sub_405580(a3, v30, v31);
        if ( a3 )
          return v22;
        goto LABEL_30;
      }
      goto LABEL_50;
    }
LABEL_90:
    v91 = v11;
    v92 = v12;
    LOBYTE(v93) = v14;
    v53 = strlen(filename);
    v54 = strlen(a4);
    v55 = (char)v93;
    v56 = a4[1];
    v57 = v92;
    v11 = v91;
    v58 = alloca(v53 + v54 + 10);
    v59 = v90;
    v13 = v90;
    if ( (_BYTE)v93 != 46 || (v61 = v90, v56) )
    {
      v60 = a4;
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
      if ( a4 < v60 && *(v60 - 1) != 47 )
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
        *v61++ = v57;
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
          goto LABEL_50;
        }
        if ( a3 )
        {
          LODWORD(v93) = dword_6256B8;
          v50 = __xstat(1, v13, (struct stat *)(v10 + 24));
          if ( (_DWORD)v93 == 3 )
            goto LABEL_85;
          if ( v50 < 0 )
          {
            if ( *__errno_location() != 2 )
              goto LABEL_159;
          }
          else
          {
            v16 = *(_DWORD *)(v10 + 48) & 0xF000;
            if ( (_DWORD)v16 == 0x4000 )
            {
LABEL_85:
              if ( !v50 )
                goto LABEL_15;
LABEL_159:
              v81 = dcgettext(0LL, "cannot access %s", 5);
              v82 = (__int64)v13;
              v22 = 0LL;
              sub_405580(1, v81, v82);
              return v22;
            }
          }
        }
      }
LABEL_50:
      if ( __lxstat(1, v13, v15) )
        goto LABEL_51;
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
            v89 = *(_DWORD *)(v10 + 48);
            *(_DWORD *)(v10 + 188) = 0;
            v20 = v89 & 0xF000;
            if ( v20 != 40960 )
            {
LABEL_24:
              if ( v20 == 0x4000 )
              {
                if ( !a3 || byte_6256B5 )
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
              if ( (((_DWORD)v16 - 22) & 0xFFFFFFEF) == 0 || (_DWORD)v16 == 95 )
              {
                v16 = *(_QWORD *)(v10 + 24);
                qword_6246A8 = v16;
              }
              *(_DWORD *)(v10 + 188) = 0;
              if ( v65 < 0 )
              {
                v93 = v83;
                v84 = (const char *)sub_412110(0LL, 3LL, v13);
                error(0, *v93, "%s", v84);
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
              goto LABEL_112;
          }
LABEL_113:
          v66 = *(char **)(v10 + 72);
          v67 = (_BYTE *)sub_40ABF0(v13);
          *(_QWORD *)(v10 + 8) = v67;
          if ( !v67 )
          {
            v66 = dcgettext(0LL, "cannot read symbolic link %s", 5);
            sub_405580(a3, v66, (__int64)v13);
            v67 = *(_BYTE **)(v10 + 8);
            if ( !v67 )
              goto LABEL_167;
          }
          if ( *v67 == 47 || (v68 = (int *)sub_40B7B0(v13, v66)) == 0LL )
          {
            v72 = (char *)sub_412BB0(v67);
          }
          else
          {
            v93 = v68;
            v69 = strlen(v67);
            v70 = (char *)sub_412980((char *)v93 + v69 + 2);
            v71 = (size_t)v93;
            v72 = v70;
            if ( *((_BYTE *)v93 + (_QWORD)v13 - 1) != 47 )
              v71 = (size_t)v93 + 1;
            v73 = stpncpy(v70, v13, v71);
            strcpy(v73, v67);
          }
          if ( v72 )
          {
            if ( !*(_DWORD *)(v10 + 196) && sub_404E20(*(const char **)(v10 + 8)) )
              *(_DWORD *)(v10 + 196) = -1;
            if ( ((unsigned int)dword_6256D4 > 1 || byte_6256BD) && !__xstat(1, v72, &stat_buf) )
            {
              *(_BYTE *)(v10 + 185) = 1;
              if ( !a3 || !dword_6256F8 || (stat_buf.st_mode & 0xF000) != 0x4000 )
                *(_DWORD *)(v10 + 172) = stat_buf.st_mode;
            }
          }
          else
          {
LABEL_167:
            v72 = 0LL;
          }
          free(v72);
          v20 = *(_DWORD *)(v10 + 48) & 0xF000;
          if ( v20 != 40960 )
            goto LABEL_24;
LABEL_124:
          *(_DWORD *)(v10 + 168) = 6;
LABEL_26:
          v21 = (unsigned int)dword_6256F8;
          v22 = *(_QWORD *)(v10 + 88);
          if ( dword_6256F8 && !byte_6256EC )
            goto LABEL_28;
          v32 = (char *)sub_40D5D0(*(_QWORD *)(v10 + 88), &stat_buf, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
          v33 = sub_40EB70(v32);
          if ( v33 > dword_62571C )
            dword_62571C = v33;
          v16 = (unsigned int)dword_6256F8;
          if ( dword_6256F8 )
          {
LABEL_28:
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
              if ( byte_6256ED || (v88 = (char *)sub_40E2F0(v76)) == 0LL )
              {
                __sprintf_chk(&stat_buf, 1LL, 21LL, "%lu", v76);
                p_stat_buf = &stat_buf;
                do
                {
                  st_dev = p_stat_buf->st_dev;
                  p_stat_buf = (struct stat *)((char *)p_stat_buf + 4);
                  v16 = ~st_dev & (st_dev - 16843009) & 0x80808080;
                }
                while ( !(_DWORD)v16 );
                v79 = (~st_dev & (st_dev - 16843009) & 0x8080) == 0;
                if ( (~st_dev & (st_dev - 16843009) & 0x8080) == 0 )
                  v16 = WORD1(v16);
                v21 = (unsigned __int64)&p_stat_buf->st_dev + 2;
                if ( v79 )
                  LODWORD(p_stat_buf) = (_DWORD)p_stat_buf + 2;
                v80 = (_DWORD)p_stat_buf - (__CFADD__((_BYTE)v16, (_BYTE)v16) + 3) - (unsigned int)&stat_buf;
              }
              else
              {
                v80 = sub_40EB70(v88);
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
LABEL_62:
              if ( !dword_6256F8 )
              {
                v35 = (const char *)sub_40E520(*(_QWORD *)(v10 + 40), v95, v16, v21);
                v36 = strlen(v35);
                if ( v36 > dword_625718 )
                  dword_625718 = v36;
                if ( (*(_DWORD *)(v10 + 48) & 0xB000) == 0x2000 )
                {
                  v38 = (const char *)sub_40E520(
                                        ((unsigned int)*(_QWORD *)(v10 + 64) >> 8) & 0xFFF | HIDWORD(*(_QWORD *)(v10 + 64)) & 0xFFFFF000,
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
                  goto LABEL_104;
                }
                v64 = (char *)sub_40D5D0(
                                *(_QWORD *)(v10 + 72),
                                &stat_buf,
                                (unsigned int)dword_6256DC,
                                1LL,
                                qword_6245A0);
                v45 = sub_40EB70(v64);
                if ( v45 > dword_6256FC )
LABEL_104:
                  dword_6256FC = v45;
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
          goto LABEL_62;
        }
        *(_DWORD *)(v10 + 188) = 0;
      }
      v20 = *(_DWORD *)(v10 + 48) & 0xF000;
      if ( v20 != 40960 )
        goto LABEL_24;
LABEL_112:
      if ( !byte_6256BD )
        goto LABEL_124;
      goto LABEL_113;
    }
    goto LABEL_79;
  }
  if ( !byte_625660 )
    goto LABEL_160;
  v25 = (_DWORD)a2 == 0;
  if ( (_DWORD)a2 != 6 && (_DWORD)a2 )
  {
    if ( byte_625660 )
      goto LABEL_40;
LABEL_160:
    v22 = 0LL;
    goto LABEL_30;
  }
LABEL_151:
  if ( dword_6256B8 == 5 || byte_625750 || byte_6256BD || byte_6256BC )
    goto LABEL_47;
  if ( !byte_625660 )
    goto LABEL_160;
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

void __fastcall sub_4092A0(char *src, __int64 a2, unsigned __int8 a3)
{
  const char *v4; // rbp
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
  __int64 v16; // rbx
  char *v17; // rax
  __ino_t *v18; // rax
  __ino_t v19; // r15
  __dev_t v20; // rcx
  char *IO_write_ptr; // rax
  char *v22; // r15
  struct dirent *v23; // rax
  struct dirent *v24; // rbx
  char *d_name; // rbp
  _QWORD *v26; // r15
  char *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  char *v31; // rbx
  char *v32; // rax
  const char *v33; // rax
  const char *v34; // rbx
  size_t v35; // rax
  char *v36; // rax
  _QWORD *v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  char *v40; // rax
  char *v41; // rax
  __int64 v42; // [rsp-8h] [rbp-2F0h]
  __dev_t st_dev; // [rsp+8h] [rbp-2E0h]
  __dev_t v44; // [rsp+8h] [rbp-2E0h]
  char v45; // [rsp+8h] [rbp-2E0h]
  __ino_t st_ino; // [rsp+10h] [rbp-2D8h]
  __int64 v47; // [rsp+10h] [rbp-2D8h]
  struct stat stat_buf; // [rsp+20h] [rbp-2C8h] BYREF

  v4 = (const char *)a2;
  v6 = __errno_location();
  *v6 = 0;
  v7 = v6;
  v8 = opendir(src);
  if ( !v8 )
  {
    v41 = dcgettext(0LL, "cannot open directory %s", 5);
    sub_405580(a3, v41, (__int64)src);
    return;
  }
  v9 = v8;
  if ( !qword_625788 )
    goto LABEL_12;
  v10 = dirfd(v8);
  if ( v10 < 0 )
  {
    if ( __xstat(1, src, &stat_buf) >= 0 )
      goto LABEL_5;
LABEL_35:
    v27 = dcgettext(0LL, "cannot determine device and inode of %s", 5);
    sub_405580(a3, v27, (__int64)src);
    closedir(v9);
    return;
  }
  if ( __fxstat(1, v10, &stat_buf) < 0 )
    goto LABEL_35;
LABEL_5:
  st_ino = stat_buf.st_ino;
  st_dev = stat_buf.st_dev;
  v11 = (__ino_t *)sub_412980(16LL);
  v12 = qword_625788;
  a2 = (__int64)v11;
  v13 = v11;
  *v11 = st_ino;
  v11[1] = st_dev;
  v14 = sub_40D220(v12, v11);
  if ( !v14 )
    sub_412BD0(v12, a2, v15);
  if ( v13 != (__ino_t *)v14 )
  {
    free(v13);
    v16 = sub_412110(0LL, 3LL, src);
    v17 = dcgettext(0LL, "%s: not listing already-listed directory", 5);
    error(0, 0, v17, v16);
    closedir(v9);
    dword_6255D0 = 2;
    return;
  }
  v18 = (__ino_t *)qword_6254B8;
  v19 = stat_buf.st_ino;
  v20 = stat_buf.st_dev;
  if ( (unsigned __int64)(qword_6254C0 - qword_6254B8) <= 0xF )
  {
    a2 = 16LL;
    v44 = stat_buf.st_dev;
    obstack_newchunk(&unk_6254A0, 16LL);
    v18 = (__ino_t *)qword_6254B8;
    v20 = v44;
  }
  qword_6254B8 = (__int64)(v18 + 2);
  v18[1] = v20;
  *v18 = v19;
LABEL_12:
  sub_4084B0();
  if ( byte_6256B6 || byte_625678 )
  {
    if ( !byte_624400 )
    {
      IO_write_ptr = stdout->_IO_write_ptr;
      if ( IO_write_ptr >= stdout->_IO_write_end )
      {
        __overflow(stdout, 10);
      }
      else
      {
        stdout->_IO_write_ptr = IO_write_ptr + 1;
        *IO_write_ptr = 10;
      }
      ++qword_6255B8;
    }
    byte_624400 = 0;
    if ( byte_6256D8 )
    {
      v22 = 0LL;
      fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
      qword_6255B8 += 2LL;
      if ( !byte_6256D1 )
        goto LABEL_19;
    }
    else
    {
      v22 = 0LL;
      if ( !byte_6256D1 )
      {
LABEL_19:
        if ( !v4 )
          v4 = src;
        sub_4062D0(v4, qword_625688, -1, 0LL, 1, (__int64)&unk_625500, v22);
        free(v22);
        fwrite_unlocked(":\n", 1uLL, 2uLL, stdout);
        qword_6255B8 += 2LL;
        a2 = v42;
        goto LABEL_22;
      }
    }
    v22 = (char *)sub_40B070(src);
    if ( !v22 )
    {
      v40 = dcgettext(0LL, "error canonicalizing %s", 5);
      sub_405580(a3, v40, (__int64)src);
    }
    goto LABEL_19;
  }
LABEL_22:
  v47 = 0LL;
  v45 = a3;
  while ( 1 )
  {
    *v7 = 0;
    v23 = readdir(v9);
    v24 = v23;
    if ( !v23 )
      break;
    d_name = v23->d_name;
    if ( dword_6256B0 == 2 )
      goto LABEL_55;
    if ( v23->d_name[0] == 46 )
    {
      if ( !dword_6256B0 || !v23->d_name[(v23->d_name[1] == 46) + 1] )
        goto LABEL_31;
LABEL_55:
      v37 = (_QWORD *)qword_6256A8;
      if ( qword_6256A8 )
      {
        while ( 1 )
        {
          a2 = (__int64)d_name;
          if ( !(unsigned int)sub_4159A0(*v37, d_name, 4LL) )
            break;
          v37 = (_QWORD *)v37[1];
          if ( !v37 )
            goto LABEL_60;
        }
      }
      else
      {
LABEL_60:
        a2 = 0LL;
        if ( (unsigned __int8)(v24->d_type - 1) <= 0xDu )
          a2 = (unsigned int)dword_4194A0[(unsigned __int8)(v24->d_type - 1)];
        v47 += sub_408580(d_name, a2, 0, src);
        if ( dword_6256F8 == 1 && dword_6256F0 == -1 && !byte_6256EC && !byte_6256B6 )
        {
          sub_404F40((__int64)d_name, a2);
          sub_407CA0((__int64)d_name, a2, v38, v39);
          sub_4084B0();
        }
      }
      goto LABEL_31;
    }
    if ( dword_6256B0 )
      goto LABEL_55;
    v26 = (_QWORD *)qword_6256A0;
    if ( !qword_6256A0 )
      goto LABEL_55;
    while ( 1 )
    {
      a2 = (__int64)d_name;
      if ( !(unsigned int)sub_4159A0(*v26, d_name, 4LL) )
        break;
      v26 = (_QWORD *)v26[1];
      if ( !v26 )
        goto LABEL_55;
    }
LABEL_31:
    sub_405D70();
  }
  if ( *v7 )
  {
    a2 = (__int64)dcgettext(0LL, "reading directory %s", 5);
    sub_405580(v45, (const char *)a2, (__int64)src);
    if ( *v7 == 75 )
      goto LABEL_31;
  }
  v28 = (__int64)v9;
  if ( closedir(v9) )
  {
    v28 = a3;
    a2 = (__int64)dcgettext(0LL, "closing directory %s", 5);
    sub_405580(a3, (const char *)a2, (__int64)src);
  }
  sub_404F40(v28, a2);
  if ( byte_6256B6 )
  {
    a2 = 0LL;
    v28 = (__int64)src;
    sub_405140(src, 0);
  }
  if ( !dword_6256F8 || byte_6256EC )
  {
    if ( byte_6256D8 )
    {
      fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
      qword_6255B8 += 2LL;
    }
    v31 = dcgettext(0LL, "total", 5);
    fputs_unlocked(v31, stdout);
    qword_6255B8 += strlen(v31);
    v32 = stdout->_IO_write_ptr;
    if ( v32 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 32);
    }
    else
    {
      stdout->_IO_write_ptr = v32 + 1;
      *v32 = 32;
    }
    ++qword_6255B8;
    v33 = (const char *)sub_40D5D0(v47, &stat_buf, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
    a2 = (__int64)stdout;
    v34 = v33;
    fputs_unlocked(v33, stdout);
    v35 = strlen(v34);
    v28 = (__int64)stdout;
    qword_6255B8 += v35;
    v36 = stdout->_IO_write_ptr;
    if ( v36 >= stdout->_IO_write_end )
    {
      a2 = 10LL;
      __overflow(stdout, 10);
    }
    else
    {
      v29 = (__int64)(v36 + 1);
      stdout->_IO_write_ptr = v36 + 1;
      *v36 = 10;
    }
    ++qword_6255B8;
  }
  if ( qword_625770 )
    sub_407CA0(v28, a2, v29, v30);
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
  result = *(_QWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
  if ( !result )
    return sub_4050D0(*(char **)a1, *(char **)a2);
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
  result = *(_QWORD *)(a2 + 120) - *(_DWORD *)(a1 + 120);
  if ( !result )
    return sub_4050D0(*(char **)a1, *(char **)a2);
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
  result = *(_QWORD *)(a2 + 104) - *(_DWORD *)(a1 + 104);
  if ( !result )
    return sub_4050D0(*(char **)a1, *(char **)a2);
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
  result = *(_QWORD *)(a1 + 136) - *(_DWORD *)(a2 + 136);
  if ( !result )
    return sub_4050D0(*(char **)a2, *(char **)a1);
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
  result = *(_QWORD *)(a1 + 120) - *(_DWORD *)(a2 + 120);
  if ( !result )
    return sub_4050D0(*(char **)a2, *(char **)a1);
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
  result = *(_QWORD *)(a1 + 104) - *(_DWORD *)(a2 + 104);
  if ( !result )
    return sub_4050D0(*(char **)a2, *(char **)a1);
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 96);
    if ( *(_QWORD *)(a1 + 96) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 96) < v5 )
        return 1;
      result = *(_QWORD *)(a2 + 104) - *(_DWORD *)(a1 + 104);
      if ( !result )
        return sub_4050D0(*(char **)a1, *(char **)a2);
      return result;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a2 + 112) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 112) < v5 )
        return 1;
      result = *(_QWORD *)(a1 + 120) - *(_DWORD *)(a2 + 120);
      if ( !result )
        return sub_4050D0(*(char **)a2, *(char **)a1);
      return result;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( *(_QWORD *)(a2 + 96) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 96) < v5 )
        return 1;
      result = *(_QWORD *)(a1 + 104) - *(_DWORD *)(a2 + 104);
      if ( !result )
        return sub_4050D0(*(char **)a2, *(char **)a1);
      return result;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 112);
    if ( *(_QWORD *)(a1 + 112) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 112) < v5 )
        return 1;
      result = *(_QWORD *)(a2 + 120) - *(_DWORD *)(a1 + 120);
      if ( !result )
        return sub_4050D0(*(char **)a1, *(char **)a2);
      return result;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( *(_QWORD *)(a2 + 128) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 128) < v5 )
        return 1;
      result = *(_QWORD *)(a1 + 136) - *(_DWORD *)(a2 + 136);
      if ( !result )
        return sub_4050D0(*(char **)a2, *(char **)a1);
      return result;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a2 + 128);
    if ( *(_QWORD *)(a1 + 128) <= v5 )
    {
      if ( *(_QWORD *)(a1 + 128) < v5 )
        return 1;
      result = *(_QWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
      if ( !result )
        return sub_4050D0(*(char **)a1, *(char **)a2);
      return result;
    }
    return -1;
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
  result = *(_QWORD *)(a1 + 104) - *(_DWORD *)(a2 + 104);
  if ( !result )
    return strcmp(*(const char **)a2, *(const char **)a1);
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
  result = *(_QWORD *)(a1 + 136) - *(_DWORD *)(a2 + 136);
  if ( !result )
    return strcmp(*(const char **)a2, *(const char **)a1);
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
  result = *(_QWORD *)(a1 + 120) - *(_DWORD *)(a2 + 120);
  if ( !result )
    return strcmp(*(const char **)a2, *(const char **)a1);
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
  result = *(_QWORD *)(a2 + 104) - *(_DWORD *)(a1 + 104);
  if ( !result )
    return strcmp(*(const char **)a1, *(const char **)a2);
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
  result = *(_QWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
  if ( !result )
    return strcmp(*(const char **)a1, *(const char **)a2);
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
  result = *(_QWORD *)(a2 + 120) - *(_DWORD *)(a1 + 120);
  if ( !result )
    return strcmp(*(const char **)a1, *(const char **)a2);
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
    return sub_4050D0((char *)*a1, (char *)*a2);
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
    return sub_4050D0((char *)*a2, (char *)*a1);
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
      return sub_4050D0(*(char **)a2, *(char **)a1);
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
      return sub_4050D0(*(char **)a1, *(char **)a2);
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a2 + 112) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 112) < v5 )
        return 1;
      result = *(_QWORD *)(a1 + 120) - *(_DWORD *)(a2 + 120);
      if ( !result )
        return strcmp(*(const char **)a2, *(const char **)a1);
      return result;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( *(_QWORD *)(a2 + 128) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 128) < v5 )
        return 1;
      result = *(_QWORD *)(a1 + 136) - *(_DWORD *)(a2 + 136);
      if ( !result )
        return strcmp(*(const char **)a2, *(const char **)a1);
      return result;
    }
    return -1;
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
    return -1;
  if ( v2 || (result = 1, !v3) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( *(_QWORD *)(a2 + 96) <= v5 )
    {
      if ( *(_QWORD *)(a2 + 96) < v5 )
        return 1;
      result = *(_QWORD *)(a1 + 104) - *(_DWORD *)(a2 + 104);
      if ( !result )
        return strcmp(*(const char **)a2, *(const char **)a1);
      return result;
    }
    return -1;
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
        return strcmp(v5, v7);
    }
    result = strcmp(v8, v9);
    if ( result )
      return result;
    return strcmp(v5, v7);
  }
  return result;
}

void __fastcall __noreturn sub_40A530(int status)
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
  __int64 *v66; // rbx
  const char *v67; // rbx
  char *v68; // rax
  char *v69; // rax
  char *v70; // rax
  bool v71; // zf
  __int64 v72; // rbp
  char *v73; // rax
  char *v74; // rax
  char *v75; // rax
  char *v76; // rax
  char *v77; // rax
  const char *v78; // rcx
  __int64 v79[17]; // [rsp+0h] [rbp-88h] BYREF

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
  v79[0] = (__int64)"[";
  v65 = "[";
  v66 = v79;
  v79[1] = (__int64)"test invocation";
  v79[2] = (__int64)"coreutils";
  v79[3] = (__int64)"Multi-call invocation";
  v79[4] = (__int64)"sha224sum";
  v79[5] = (__int64)"sha2 utilities";
  v79[6] = (__int64)"sha256sum";
  v79[7] = (__int64)"sha2 utilities";
  v79[8] = (__int64)"sha384sum";
  v79[9] = (__int64)"sha2 utilities";
  v79[10] = (__int64)"sha512sum";
  v79[11] = (__int64)"sha2 utilities";
  v79[12] = 0LL;
  v79[13] = 0LL;
  do
  {
    if ( !strcmp(v64, v65) )
      break;
    v66 += 2;
    v65 = (const char *)*v66;
  }
  while ( *v66 );
  v67 = (const char *)v66[1];
  if ( v67 )
  {
    v68 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v68, &unk_41B1AD, "https://www.gnu.org/software/coreutils/");
    v69 = setlocale(5, 0LL);
    if ( !v69 || !strncmp(v69, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v75 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v75, &unk_41B1AD, "https://www.gnu.org/software/coreutils/");
    v76 = setlocale(5, 0LL);
    if ( !v76 || !strncmp(v76, "en_", 3uLL) )
    {
      v67 = v64;
      v77 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v78 = v64;
      v72 = 4305235LL;
      __printf_chk(1LL, v77, "https://www.gnu.org/software/coreutils/", v78);
LABEL_15:
      v73 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v73, v67, v72);
LABEL_3:
      exit(status);
    }
    v67 = v64;
  }
  v74 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v74, v64);
LABEL_13:
  v70 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v70, "https://www.gnu.org/software/coreutils/", v64);
  v71 = v64 == v67;
  v72 = 4305235LL;
  if ( !v71 )
    v72 = 4305034LL;
  goto LABEL_15;
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

void __noreturn sub_40ACE0()
{
  sub_40A530(1);
}

__int64 __fastcall sub_40ACF0(const char *a1, const char **a2, char *a3, size_t a4)
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
      v11 = (const char *)sub_412290(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = (const char *)sub_412290(i);
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

__int64 __fastcall sub_40AFB0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_40ACF0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40AE10(a1, (__int64)a2, result);
    sub_40AE90((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_40B020(void *s1, __int64 *a2, char *a3, size_t a4)
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

_BYTE *__fastcall sub_40B070(_BYTE *src, char a2)
{
  _BYTE *v2; // r15
  const char *v3; // rax
  _BYTE *v4; // r12
  size_t v5; // rax
  size_t v6; // rbx
  _BYTE *v7; // rbx
  _BYTE *v8; // rbp
  char v9; // al
  char v10; // dl
  _BYTE *i; // r13
  _BYTE *v12; // r14
  signed __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  bool v19; // al
  int *v20; // rdx
  int v21; // ecx
  size_t v22; // rax
  int v23; // eax
  _BYTE *v24; // rax
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
  _BYTE *v38; // rdx
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
  _BYTE *v57; // [rsp+20h] [rbp-E8h]
  size_t v58; // [rsp+20h] [rbp-E8h]
  char *ptr; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v60; // [rsp+30h] [rbp-D8h]
  int v61; // [rsp+3Ch] [rbp-CCh]
  struct stat stat_buf; // [rsp+40h] [rbp-C8h] BYREF

  v52 = a2 & 3;
  if ( ((v52 - 1) & (unsigned __int8)v52) != 0 || (v2 = src) == 0LL )
  {
    v4 = 0LL;
    *__errno_location() = 22;
    return v4;
  }
  if ( !*src )
  {
    v4 = 0LL;
    *__errno_location() = 2;
    return v4;
  }
  if ( *src == 47 )
  {
    v4 = (_BYTE *)sub_412980(4096LL);
    v8 = v4 + 4096;
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
      v8 = v4 + 4096;
    }
    else
    {
      v7 = &v4[v5];
      v8 = &v4[v5];
    }
  }
  v57 = src;
  v9 = *src;
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
    if ( v10 == 46 && v13 == 2 && v2[1] == 46 )
    {
      v2 = i + 1;
      if ( v7 > v4 + 1 )
      {
        v38 = v7 - 1;
        if ( v4 >= v7 - 1 || *(v7 - 2) == 47 )
        {
          --v7;
        }
        else
        {
          v7 -= 2;
          if ( v4 != v38 - 1 )
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
      }
    }
    else
    {
LABEL_21:
      if ( *(v7 - 1) != 47 )
        *v7++ = 47;
      if ( v8 <= &v7[v13] )
      {
        v14 = v8 - v4;
        v15 = v7 - v4;
        v16 = v13 + v14 + 1;
        v17 = v14 + 4096;
        if ( v13 >= 4096 )
          v17 = v16;
        v18 = sub_4129E0(v4, v17);
        v13 = v12 - v2;
        v4 = (_BYTE *)v18;
        v8 = (_BYTE *)(v18 + v17);
        v7 = (_BYTE *)(v18 + v15);
      }
      v45 = v13;
      memcpy(v7, v2, v13);
      v7 += v45;
      *v7 = 0;
      if ( v52 == 2 && (a2 & 4) != 0 )
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
        if ( (a2 & 4) != 0 )
          v19 = __xstat(1, v4, &stat_buf) != 0;
        else
          v19 = __lxstat(1, v4, &stat_buf) != 0;
        if ( v19 )
        {
          v20 = __errno_location();
          v21 = *v20;
          if ( (a2 & 3) == 0 )
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
                  v44 = *(v7 - 2) == 47;
                  --v7;
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
  }
  if ( v7 > v4 + 1 && *(v7 - 1) == 47 )
    v24 = v7--;
  else
    v24 = v7 + 1;
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
  const char *v4; // rbp
  const char *v5; // rax

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
        v5 = (const char *)sub_4120E0();
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

_BYTE *__fastcall sub_40B810(_BYTE *src)
{
  __int64 v1; // rbx
  _BYTE *v2; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // rax

  v1 = sub_40B7B0(src);
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

__int64 sub_40B900()
{
  return 0LL;
}

void __fastcall sub_40B910(__int64 a1, void *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( a1 )
  {
    v4 = (_QWORD *)sub_412980(24LL);
    *v4 = sub_412BB0(a2);
    v4[1] = a3[1];
    v4[2] = *a3;
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
  __int64 v5[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0;
  v3 = a3[1];
  v5[0] = a2;
  v5[1] = v3;
  v5[2] = *a3;
  return sub_40C810(a1, v5) != 0;
}

__int64 __fastcall sub_40BB60(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  char v5; // al
  int v6; // eax
  char v7; // al
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
  *(_BYTE *)(a2 + 1) = (v10 & 0x100) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80) == 0 ? 45 : 119;
  v4 = -((v10 & 0x40) == 0);
  if ( (v10 & 0x800) != 0 )
    v5 = (v4 & 0xE0) + 115;
  else
    v5 = (v4 & 0xB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10) == 0 ? 45 : 119;
  v6 = -((v10 & 8) == 0);
  if ( (v10 & 0x400) != 0 )
    v7 = (v6 & 0xE0) + 115;
  else
    v7 = (v6 & 0xB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2) == 0 ? 45 : 119;
  v8 = -((v10 & 1) == 0);
  if ( (v10 & 0x200) != 0 )
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
  char v5; // al
  int v6; // eax
  char v7; // al
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
  *(_BYTE *)(a2 + 1) = (v10 & 0x100) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80) == 0 ? 45 : 119;
  v4 = -((v10 & 0x40) == 0);
  if ( (v10 & 0x800) != 0 )
    v5 = (v4 & 0xE0) + 115;
  else
    v5 = (v4 & 0xB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10) == 0 ? 45 : 119;
  v6 = -((v10 & 8) == 0);
  if ( (v10 & 0x400) != 0 )
    v7 = (v6 & 0xE0) + 115;
  else
    v7 = (v6 & 0xB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2) == 0 ? 45 : 119;
  v8 = -((v10 & 1) == 0);
  if ( (v10 & 0x200) != 0 )
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
  char v5; // al
  int v6; // eax
  char v7; // al
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
  *(_BYTE *)(a2 + 1) = (v10 & 0x100) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80) == 0 ? 45 : 119;
  v4 = -((v10 & 0x40) == 0);
  if ( (v10 & 0x800) != 0 )
    v5 = (v4 & 0xE0) + 115;
  else
    v5 = (v4 & 0xB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10) == 0 ? 45 : 119;
  v6 = -((v10 & 8) == 0);
  if ( (v10 & 0x400) != 0 )
    v7 = (v6 & 0xE0) + 115;
  else
    v7 = (v6 & 0xB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2) == 0 ? 45 : 119;
  v8 = -((v10 & 1) == 0);
  if ( (v10 & 0x200) != 0 )
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
  char v5; // al
  int v6; // eax
  char v7; // al
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
  *(_BYTE *)(a2 + 1) = (v10 & 0x100) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80) == 0 ? 45 : 119;
  v4 = -((v10 & 0x40) == 0);
  if ( (v10 & 0x800) != 0 )
    v5 = (v4 & 0xE0) + 115;
  else
    v5 = (v4 & 0xB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10) == 0 ? 45 : 119;
  v6 = -((v10 & 8) == 0);
  if ( (v10 & 0x400) != 0 )
    v7 = (v6 & 0xE0) + 115;
  else
    v7 = (v6 & 0xB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2) == 0 ? 45 : 119;
  v8 = -((v10 & 1) == 0);
  if ( (v10 & 0x200) != 0 )
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

void *__fastcall sub_40BB90(_BYTE *src, const char *a2, _QWORD *a3)
{
  const char *v3; // r12
  const char *v4; // r14
  size_t v5; // rax
  _BOOL8 v6; // rbx
  size_t v7; // rbp
  size_t v8; // r14
  void *v9; // rax
  void *v10; // r15
  _BYTE *v11; // rax
  char *v12; // rdi
  char v15; // [rsp+Fh] [rbp-39h]

  v3 = a2;
  v4 = sub_40B870(src);
  v5 = sub_40B8D0(v4);
  v6 = v5;
  v7 = v5 + v4 - src;
  if ( v5 )
    v6 = v4[v5 - 1] != 47;
  v15 = *a2;
  if ( *a2 == 47 )
  {
    do
      ++v3;
    while ( *v3 == 47 );
  }
  v8 = strlen(v3);
  v9 = malloc(v8 + v6 + v7 + 1);
  v10 = v9;
  if ( v9 )
  {
    v11 = mempcpy(v9, src, v7);
    *v11 = 47;
    v12 = &v11[v6];
    if ( a3 )
      *a3 = &v12[-(v15 == 47)];
    *(_BYTE *)mempcpy(v12, v3, v8) = 0;
  }
  return v10;
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

__int64 __fastcall sub_40BD40(char *s1, char *s2)
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
          v7 = sub_40BC70(&v29);
          v8 = sub_40BC70(&v30);
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

int __fastcall sub_40C150(struct timespec *tp)
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
      return strcmp(v1, "POSIX") != 0;
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
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 *v10; // rax
  const __m128i *v12; // rax

  v7 = (__m128i *)sub_40C2B0(a1, a2);
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
    return 0LL;
  }
  return result;
}

__int64 __fastcall sub_40C480(__int64 a1, __int64 a2, char a3)
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
        if ( !a3 )
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

__int64 __fastcall sub_40C6C0(__int64 a1, __int64 a2)
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

_QWORD *__fastcall sub_40CA80(
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
        v12 = sub_40C1F0(a1);
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
      *((_QWORD *)v9 + 5) = &unk_41D810;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40C400(v11) )
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

void __fastcall sub_40CC10(_QWORD *a1)
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

void __fastcall sub_40CCC0(_QWORD *ptr)
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

__int64 __fastcall sub_40CDA0(__int64 a1, __int64 a2)
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
  v5 = sub_40C1F0(a2);
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
  v12 = sub_40C480((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40C480(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40C480(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_40CDA0(__int64 a1, __int64 a2)
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
  v5 = sub_40C1F0(a2);
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
  v12 = sub_40C480((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40C480(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40C480(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_40CFA0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40C2E0(a1, a2, v26, 0);
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
        v25 = v22 >= 9.223372e18
            ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL
            : (unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_40CDA0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40C2E0(a1, a2, v26, 0) )
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

__int64 __fastcall sub_40CFA0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40C2E0(a1, a2, v26, 0);
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
        v25 = v22 >= 9.223372e18
            ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL
            : (unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_40CDA0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40C2E0(a1, a2, v26, 0) )
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

__int64 __fastcall sub_40D220(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v2 = a2;
  v3 = sub_40CFA0(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    return v5;
  return v2;
}

__int64 __fastcall sub_40D260(__int64 a1, __int64 a2)
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

  v3 = sub_40C2E0(a1, a2, &v24, 1);
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
        *(_QWORD *)(a1 + 72) = 0LL;
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
    return strcmp(*(const char **)a1, *(const char **)a2) == 0;
  return result;
}

void __fastcall sub_40D4F0(void **ptr)
{
  free(*ptr);
  free(ptr);
}

long double __fastcall sub_40D510(int a1, long double a2)
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

char *__fastcall sub_40D5D0(__int64 a1, __int64 a2, __int16 a3, unsigned __int64 a4, unsigned __int64 a5)
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
    decimal_point = ".." + 1;
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
                v28 = sub_40D510(v71, v28);
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
                  v33 = sub_40D510(v71, v33);
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
            v19 = sub_40D510(v71, v19);
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
        *v68 = byte_41D8B8[v21];
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

__int64 __fastcall sub_40DFA0(char *nptr, int *a2, __int64 *a3)
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
    v6 = sub_40ACF0(v4, (const char **)off_41D8A0, (char *)dword_41D890, 4uLL);
    if ( v6 >= 0 )
    {
      *a3 = 1LL;
      v7 = dword_41D890[v6] | v5;
      result = 0LL;
      *a2 = v7;
      return result;
    }
    result = sub_4132B0(v4);
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

__int64 __fastcall sub_40E160(__uid_t a1)
{
  __int64 v1; // rbx
  char *pw_name; // r12
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
  pw_name = "";
  v4 = getpwuid(a1);
  v5 = 24LL;
  if ( v4 )
  {
    pw_name = v4->pw_name;
    v5 = (strlen(v4->pw_name) + 24) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v6 = sub_412980(v5);
  *(_DWORD *)v6 = a1;
  v1 = v6;
  strcpy((char *)(v6 + 16), pw_name);
  v7 = qword_6257B8;
  qword_6257B8 = v1;
  *(_QWORD *)(v1 + 8) = v7;
LABEL_9:
  result = 0LL;
  if ( *(_BYTE *)(v1 + 16) )
    return v1 + 16;
  return result;
}

__int64 __fastcall sub_40E1F0(char *src)
{
  __int64 v1; // rbx
  char v2; // bp
  __int64 v4; // rbx
  char v5; // bp
  struct passwd *v6; // rbp
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = qword_6257B8;
  if ( qword_6257B8 )
  {
    v2 = *src;
    while ( *(_BYTE *)(v1 + 16) != v2 || strcmp((const char *)(v1 + 16), src) )
    {
      v1 = *(_QWORD *)(v1 + 8);
      if ( !v1 )
        goto LABEL_7;
    }
    return v1;
  }
LABEL_7:
  v4 = qword_6257B0;
  if ( qword_6257B0 )
  {
    v5 = *src;
    while ( *(_BYTE *)(v4 + 16) != v5 || strcmp((const char *)(v4 + 16), src) )
    {
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v4 )
        goto LABEL_13;
    }
    return 0LL;
  }
  else
  {
LABEL_13:
    v6 = getpwnam(src);
    v7 = strlen(src);
    v1 = sub_412980((v7 + 24) & 0xFFFFFFFFFFFFFFF8LL);
    strcpy((char *)(v1 + 16), src);
    if ( v6 )
    {
      *(_DWORD *)v1 = v6->pw_uid;
      v8 = qword_6257B8;
      qword_6257B8 = v1;
      *(_QWORD *)(v1 + 8) = v8;
      return v1;
    }
    v9 = qword_6257B0;
    qword_6257B0 = v1;
    *(_QWORD *)(v1 + 8) = v9;
    return 0LL;
  }
}

__int64 __fastcall sub_40E2F0(__gid_t a1)
{
  __int64 v1; // rbx
  char *gr_name; // r12
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
  gr_name = "";
  v4 = getgrgid(a1);
  v5 = 24LL;
  if ( v4 )
  {
    gr_name = v4->gr_name;
    v5 = (strlen(v4->gr_name) + 24) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v6 = sub_412980(v5);
  *(_DWORD *)v6 = a1;
  v1 = v6;
  strcpy((char *)(v6 + 16), gr_name);
  v7 = qword_6257A8;
  qword_6257A8 = v1;
  *(_QWORD *)(v1 + 8) = v7;
LABEL_9:
  result = 0LL;
  if ( *(_BYTE *)(v1 + 16) )
    return v1 + 16;
  return result;
}

__int64 __fastcall sub_40E380(char *src)
{
  __int64 v1; // rbx
  char v2; // bp
  __int64 v4; // rbx
  char v5; // bp
  struct group *v6; // rbp
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = qword_6257A8;
  if ( qword_6257A8 )
  {
    v2 = *src;
    while ( *(_BYTE *)(v1 + 16) != v2 || strcmp((const char *)(v1 + 16), src) )
    {
      v1 = *(_QWORD *)(v1 + 8);
      if ( !v1 )
        goto LABEL_7;
    }
    return v1;
  }
LABEL_7:
  v4 = qword_6257A0;
  if ( qword_6257A0 )
  {
    v5 = *src;
    while ( *(_BYTE *)(v4 + 16) != v5 || strcmp((const char *)(v4 + 16), src) )
    {
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v4 )
        goto LABEL_13;
    }
    return 0LL;
  }
  else
  {
LABEL_13:
    v6 = getgrnam(src);
    v7 = strlen(src);
    v1 = sub_412980((v7 + 24) & 0xFFFFFFFFFFFFFFF8LL);
    strcpy((char *)(v1 + 16), src);
    if ( v6 )
    {
      *(_DWORD *)v1 = v6->gr_gid;
      v8 = qword_6257A8;
      qword_6257A8 = v1;
      *(_QWORD *)(v1 + 8) = v8;
      return v1;
    }
    v9 = qword_6257A0;
    qword_6257A0 = v1;
    *(_QWORD *)(v1 + 8) = v9;
    return 0LL;
  }
}

__int64 __fastcall sub_40E480(__int64 a1, __int64 a2)
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
  wchar_t *v29; // rdx
  char *v30; // rax
  wchar_t *v31; // r14
  wchar_t v32; // edi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  wchar_t *ptr; // [rsp+0h] [rbp-68h]
  void *src; // [rsp+18h] [rbp-50h]
  void *srca; // [rsp+18h] [rbp-50h]
  __int64 size; // [rsp+20h] [rbp-48h]
  char sizea; // [rsp+20h] [rbp-48h]
  size_t sizeb; // [rsp+20h] [rbp-48h]
  wchar_t *v43; // [rsp+28h] [rbp-40h]

  src = (void *)a1;
  v9 = strlen(a1);
  v10 = v9;
  if ( (a6 & 2) != 0 || (v25 = v9, __ctype_get_mb_cur_max() <= 1) )
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
    if ( (a6 & 1) == 0 )
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
    if ( (a6 & 1) == 0 )
      goto LABEL_36;
LABEL_3:
    v13 = *a4;
    if ( *a4 < v11 )
    {
      v10 = *a4;
      v14 = 0LL;
      goto LABEL_5;
    }
LABEL_30:
    if ( v11 < v13 )
    {
      v15 = a5;
      v14 = v13 - v11;
      *a4 = v11;
      if ( a5 )
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
      if ( (a6 & 4) != 0 )
      {
        v17 = v10;
        v14 = 0LL;
      }
      if ( (a6 & 8) != 0 )
        v16 = 0LL;
      if ( a3 )
      {
        v18 = (unsigned __int64)&a2[a3 - 1];
        v19 = a2;
        if ( (unsigned __int64)a2 < v18 && v14 )
        {
          do
            *v19++ = 32;
          while ( v14 + a2 - v19 && v18 > (unsigned __int64)v19 );
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
            *v22++ = 32;
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
    v15 = a5;
    *a4 = v13;
    if ( a5 )
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
  v29 = ptr;
  if ( *ptr )
  {
    sizea = 0;
    do
    {
      v43 = v29;
      if ( !iswprint(v28) )
      {
        *v43 = 65533;
        sizea = 1;
      }
      v29 = v43 + 1;
      v28 = v43[1];
    }
    while ( v28 );
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
  v13 = *a4;
  if ( *a4 >= v11 )
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
    srca = (void *)*a4;
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
        v32 = *++v31;
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
  if ( (a6 & 1) != 0 )
    goto LABEL_3;
  v23 = -1LL;
LABEL_27:
  free(ptr);
LABEL_28:
  free(v12);
  return v23;
}

_BYTE *__fastcall sub_40E910(const char *a1, size_t *a2, int a3, char a4)
{
  void *v4; // r12
  size_t v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  void *v11; // rdi

  v4 = 0LL;
  v5 = *a2;
  v6 = *a2;
  while ( 1 )
  {
    v7 = v6 + 1;
    v8 = realloc(v4, v6 + 1);
    v9 = v8;
    if ( !v8 )
    {
      free(v4);
      return v9;
    }
    *a2 = v5;
    v6 = sub_40E570(a1, v8, v7, a2, a3, a4);
    if ( v6 == -1LL )
      break;
    v4 = v9;
    if ( v7 > v6 )
      return v9;
  }
  v11 = v9;
  v9 = 0LL;
  free(v11);
  return v9;
}

__int64 __fastcall sub_40E9B0(char *s, __int64 a2, char a3)
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
            v8 = sub_416E80(&c, v5);
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

__int64 __fastcall sub_40EB70(char *s, char a2)
{
  __int64 v2; // rax

  v2 = strlen(s);
  return sub_40E9B0(s, v2, a2);
}

void __fastcall sub_40EBA0(__int64 *a1, unsigned __int64 a2, __int64 *a3, int (__fastcall *a4)(__int64, __int64))
{
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
  unsigned __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+28h] [rbp-40h]

  if ( a2 > 2 )
  {
    v17 = a2 >> 1;
    v20 = &a1[a2 >> 1];
    sub_40EBA0(v20, a2 - (a2 >> 1), a3, a4);
    if ( a2 == 3 )
    {
      v7 = *a1;
      *a3 = *a1;
    }
    else
    {
      v11 = a3;
      v12 = a2 >> 2;
      v19 = a2 >> 2;
      sub_40EBA0(&a1[a2 >> 2], v17 - (a2 >> 2), a3, a4);
      sub_40EBA0(a1, a2 >> 2, a3, a4);
      v16 = 0LL;
      v13 = *a1;
      v14 = a1[a2 >> 2];
      while ( 1 )
      {
        while ( 1 )
        {
          ++v11;
          if ( a4(v13, v14) <= 0 )
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
      v7 = *a3;
    }
    v15 = 0LL;
    v8 = 0LL;
    v9 = a2 >> 1;
    for ( i = *v20; ; i = a1[v9] )
    {
      while ( 1 )
      {
        ++v8;
        if ( a4(v7, i) > 0 )
          break;
        ++v15;
        a1[v8 - 1] = v7;
        if ( v17 == v15 )
          return;
        v7 = a3[v15];
      }
      a1[v8 - 1] = i;
      if ( a2 == ++v9 )
        break;
    }
    memcpy(&a1[v8], &a3[v15], 8 * (v17 - v15));
  }
  else if ( a2 == 2 )
  {
    v5 = a1[1];
    v6 = *a1;
    if ( a4(*a1, v5) > 0 )
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

__int64 __fastcall sub_40EE80(
        char *s,
        __int64 a2,
        unsigned __int64 a3,
        const __m128i *a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  char *v9; // rbx
  __int64 v10; // r12
  int v11; // r11d
  char v12; // al
  __int64 v13; // r14
  char *v14; // r8
  char v16; // r11
  __int64 v17; // r8
  int i; // r12d
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  bool v22; // cc
  int v23; // ebp
  unsigned int v24; // eax
  int v25; // edi
  char *v26; // rax
  char *v27; // r8
  char v28; // r13
  size_t v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rbx
  size_t v33; // rdx
  char *v34; // rdi
  char *v35; // rsi
  size_t v36; // rdx
  char *v37; // rdi
  unsigned __int64 v38; // rcx
  char *v39; // r13
  __m128i v40; // xmm4
  __m128i v41; // xmm2
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rcx
  int v46; // edx
  unsigned int v47; // eax
  int v48; // r10d
  char *v49; // rcx
  unsigned __int64 v50; // rax
  size_t v51; // r9
  unsigned __int64 v52; // r9
  size_t v53; // rdx
  char *v54; // rdi
  unsigned __int64 v55; // r10
  int v56; // eax
  unsigned __int64 v57; // rsi
  size_t v58; // rdx
  char *v59; // rdi
  __int32 v60; // r10d
  __int32 v61; // r13d
  int v62; // edi
  int v63; // r8d
  int v64; // eax
  int v65; // r13d
  int v66; // r13d
  int v67; // edi
  unsigned int v68; // esi
  int v69; // edi
  unsigned int v70; // r8d
  unsigned __int64 v71; // r13
  int v72; // eax
  unsigned __int64 v73; // rsi
  char v74; // r11
  char v75; // r8
  size_t v76; // rdx
  char *v77; // rdi
  int v78; // esi
  unsigned __int64 v79; // r13
  size_t v80; // rdx
  char *v81; // rdi
  char *v82; // rcx
  char *v83; // rax
  unsigned __int64 v84; // rsi
  size_t v85; // rdx
  char *v86; // rdi
  size_t v87; // rdx
  char *v88; // rdi
  int v89; // esi
  int v90; // edi
  int v91; // edx
  char *v92; // rax
  char *v93; // r9
  size_t v94; // rcx
  size_t v95; // rax
  size_t v96; // rdx
  char *v97; // rdi
  size_t v98; // rcx
  __int64 j; // r13
  __int64 v100; // rsi
  int v101; // eax
  int v102; // esi
  char v103; // cl
  int v104; // esi
  size_t v105; // rdx
  char *v106; // rdi
  char v107; // al
  char v108; // cl
  unsigned __int64 v109; // r12
  unsigned __int64 v110; // r8
  size_t v111; // rdx
  __int64 v112; // r12
  char *v113; // rdi
  int v114; // eax
  unsigned __int64 v115; // rcx
  char *v116; // rdi
  int v117; // esi
  int v118; // edx
  __int32 v119; // r10d
  __int32 v120; // esi
  int k; // edi
  __int32 v122; // esi
  bool v123; // sf
  bool v124; // of
  int v125; // eax
  int v126; // eax
  int v127; // esi
  int v128; // esi
  char *v131; // [rsp+20h] [rbp-4A8h]
  int v133; // [rsp+2Ch] [rbp-49Ch]
  char *v134; // [rsp+30h] [rbp-498h]
  char v135; // [rsp+30h] [rbp-498h]
  unsigned __int64 v136; // [rsp+30h] [rbp-498h]
  char v137; // [rsp+30h] [rbp-498h]
  int v138; // [rsp+30h] [rbp-498h]
  char v139; // [rsp+30h] [rbp-498h]
  char v140; // [rsp+30h] [rbp-498h]
  size_t v141; // [rsp+30h] [rbp-498h]
  char v142; // [rsp+30h] [rbp-498h]
  size_t v143; // [rsp+30h] [rbp-498h]
  int v144; // [rsp+30h] [rbp-498h]
  char v145; // [rsp+40h] [rbp-488h]
  char *v146; // [rsp+40h] [rbp-488h]
  char *v147; // [rsp+40h] [rbp-488h]
  char v148; // [rsp+40h] [rbp-488h]
  char *v149; // [rsp+40h] [rbp-488h]
  char v150; // [rsp+40h] [rbp-488h]
  char v151; // [rsp+40h] [rbp-488h]
  char v152; // [rsp+40h] [rbp-488h]
  char *v153; // [rsp+40h] [rbp-488h]
  char *v154; // [rsp+40h] [rbp-488h]
  char v155; // [rsp+40h] [rbp-488h]
  char *v156; // [rsp+40h] [rbp-488h]
  char v157; // [rsp+40h] [rbp-488h]
  int v158; // [rsp+48h] [rbp-480h]
  unsigned __int64 v159; // [rsp+48h] [rbp-480h]
  char *v160; // [rsp+48h] [rbp-480h]
  unsigned __int64 v161; // [rsp+48h] [rbp-480h]
  char v162; // [rsp+48h] [rbp-480h]
  char *v163; // [rsp+48h] [rbp-480h]
  char *v164; // [rsp+48h] [rbp-480h]
  char v165; // [rsp+48h] [rbp-480h]
  int v166; // [rsp+48h] [rbp-480h]
  char v167; // [rsp+48h] [rbp-480h]
  unsigned __int64 v168; // [rsp+50h] [rbp-478h]
  int v169; // [rsp+50h] [rbp-478h]
  size_t v170; // [rsp+50h] [rbp-478h]
  unsigned __int64 v171; // [rsp+50h] [rbp-478h]
  int v172; // [rsp+50h] [rbp-478h]
  size_t v173; // [rsp+58h] [rbp-470h]
  char *v174; // [rsp+58h] [rbp-470h]
  char v175; // [rsp+58h] [rbp-470h]
  unsigned __int64 v176; // [rsp+58h] [rbp-470h]
  unsigned __int64 v177; // [rsp+58h] [rbp-470h]
  unsigned __int64 v178; // [rsp+60h] [rbp-468h]
  char format[2]; // [rsp+70h] [rbp-458h] BYREF
  char v180; // [rsp+72h] [rbp-456h] BYREF
  char v181; // [rsp+73h] [rbp-455h] BYREF
  char v182[9]; // [rsp+87h] [rbp-441h] BYREF
  char sa[16]; // [rsp+90h] [rbp-438h] BYREF
  __m128i v184; // [rsp+A0h] [rbp-428h]
  __m128i v185; // [rsp+B0h] [rbp-418h]
  __int64 v186; // [rsp+C0h] [rbp-408h]

  v9 = (char *)a3;
  v10 = a4[3].m128i_i64[0];
  v11 = a4->m128i_i32[2];
  if ( !v10 )
    v10 = 4305034LL;
  if ( v11 <= 12 )
  {
    if ( !v11 )
      v11 = 12;
  }
  else
  {
    v11 -= 12;
  }
  v12 = *(_BYTE *)a3;
  v13 = 0LL;
  if ( !*(_BYTE *)a3 )
  {
LABEL_13:
    if ( s && a2 )
      *s = 0;
    return v13;
  }
  v133 = v11;
  v131 = (char *)v10;
  while ( v12 != 37 )
  {
    a3 = a2 - v13;
    if ( (unsigned __int64)(a2 - v13) <= 1 )
      return 0LL;
    if ( s )
      *s++ = v12;
    ++v13;
    v14 = v9;
LABEL_12:
    v12 = v14[1];
    v9 = v14 + 1;
    if ( !v12 )
      goto LABEL_13;
  }
  v16 = a5;
  v17 = 0LL;
LABEL_22:
  for ( i = 0; ; i = v19 )
  {
    v19 = *++v9;
    v20 = v19;
    v21 = v19;
    v22 = *v9 <= 48;
    if ( *v9 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !v22 )
    {
      if ( (_BYTE)v19 == 94 )
      {
        v16 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v19 != 95 )
      {
        v23 = -1;
        if ( v19 - 48 > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v19 != 35 )
      break;
    v19 = *++v9;
    v17 = 1LL;
    v20 = v19;
    v21 = v19;
    v22 = *v9 <= 48;
    if ( *v9 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v19 == 45 )
    goto LABEL_26;
  v23 = -1;
  if ( v19 - 48 > 9 )
    goto LABEL_29;
LABEL_37:
  v23 = 0;
  while ( 1 )
  {
    v24 = v9[1];
    v20 = v24;
    a3 = v24 - 48;
    if ( v23 > 214748364 )
      break;
    v25 = *v9;
    if ( v23 == 214748364 && (char)v25 > 55 )
      break;
    ++v9;
    v23 = v25 + 10 * v23 - 48;
LABEL_41:
    if ( (unsigned int)a3 > 9 )
    {
      v21 = v24;
      goto LABEL_29;
    }
  }
  if ( (unsigned int)a3 <= 9 )
  {
    v24 = v9[2];
    v23 = 0x7FFFFFFF;
    v9 += 2;
    v20 = v24;
    a3 = v24 - 48;
    goto LABEL_41;
  }
  v21 = v24;
  ++v9;
  v23 = 0x7FFFFFFF;
LABEL_29:
  if ( (_BYTE)v20 == 69 || (_BYTE)v20 == 79 )
    v20 = (unsigned __int8)*++v9;
  else
    v21 = 0LL;
  switch ( (char)v20 )
  {
    case 0:
      v93 = v9 - 1;
      v103 = *(v9 - 1);
      goto LABEL_261;
    case 37:
      LODWORD(v95) = 0;
      v79 = 1LL;
      a3 = a2 - v13;
      if ( v23 >= 0 )
        LODWORD(v95) = v23;
      v95 = (int)v95;
      if ( (_DWORD)v95 )
        v79 = (int)v95;
      if ( (_DWORD)v21 )
      {
        v14 = v9;
        v93 = v9;
        v94 = 1LL;
        goto LABEL_242;
      }
      if ( v79 < a3 )
      {
        if ( s )
        {
          if ( v23 > 1 )
          {
            v105 = v23 - 1LL;
            v106 = s;
            s += v105;
            if ( i == 48 )
              memset(v106, 48, v105);
            else
              memset(v106, 32, v105);
            LOBYTE(v20) = *v9;
          }
          *s++ = v20;
        }
LABEL_174:
        v13 += v79;
        v14 = v9;
        goto LABEL_12;
      }
      return 0LL;
    case 58:
      v107 = v9[1];
      a3 = (unsigned __int64)(v9 + 1);
      for ( j = 1LL; v107 == 58; a3 = (unsigned __int64)&v9[j] )
        v107 = v9[++j];
      if ( v107 != 122 )
        goto LABEL_236;
      v9 = (char *)a3;
      goto LABEL_252;
    case 65:
    case 66:
    case 97:
      if ( (_DWORD)v21 )
        goto LABEL_236;
      if ( (_BYTE)v17 )
        v16 = v17;
      goto LABEL_51;
    case 67:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_334;
      v139 = 0;
      v48 = 2;
      LOBYTE(v70) = a4[1].m128i_i32[1] < -1900;
      v68 = a4[1].m128i_i32[1] / 100
          + 19
          - ((a4[1].m128i_i32[1] / 100 + 19 > 0) & ((unsigned int)(a4[1].m128i_i32[1] % 100) >> 31));
      v69 = 0;
      goto LABEL_122;
    case 68:
      if ( !(_DWORD)v21 )
        goto LABEL_94;
      goto LABEL_236;
    case 70:
      if ( !(_DWORD)v21 )
        goto LABEL_94;
      goto LABEL_236;
    case 71:
    case 86:
    case 103:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v60 = a4[1].m128i_i32[3];
      v61 = a4[1].m128i_i32[2];
      v138 = a4[1].m128i_i32[1];
      v62 = v138 + ((v138 >> 31) & 0x190) - 100;
      v63 = v61 - 382 + 7 * ((v60 - v61 + 382) / 7) + 3;
      if ( v63 < 0 )
      {
        v117 = v138 + ((v138 >> 31) & 0x190) - 101;
        v118 = 365;
        if ( (((_BYTE)v138 + ((v138 >> 31) & 0x90) - 101) & 3) == 0 )
        {
          v118 = 366;
          if ( v117 == 100 * (v117 / 100) )
            v118 = 366 - (v117 % 400 != 0);
        }
        v119 = v118 + v60;
        v120 = v119 - v61;
        v66 = -1;
        v63 = v119 - (v120 + 382) + 7 * ((v120 + 382) / 7) + 3;
      }
      else
      {
        v64 = 365;
        if ( (v62 & 3) == 0 )
        {
          v64 = 366;
          if ( v62 == 100 * (v62 / 100) )
            v64 = (v62 == 400 * (v62 / 400)) + 365;
        }
        v65 = v61 - 382 + 7 * ((v60 - v64 - v61 + 382) / 7) + 3;
        if ( v65 >= 0 )
          v63 = v65;
        v66 = (v65 >> 31) + 1;
      }
      if ( (_BYTE)v20 == 71 )
      {
        v122 = a4[1].m128i_i32[1];
        v139 = 0;
        v48 = 4;
        v124 = __OFSUB__(v122, -1900 - v66);
        v123 = v122 - (-1900 - v66) < 0;
        v68 = v122 + v66 + 1900;
        LOBYTE(v70) = v123 ^ v124;
        v69 = 0;
        goto LABEL_122;
      }
      if ( (_BYTE)v20 == 103 )
      {
        v48 = 2;
        v67 = (v66 + v138 % 100) % 100;
        v68 = v67;
        if ( v67 < 0 )
        {
          v68 = v67 + 100;
          if ( v138 < -1900 - v66 )
            v68 = -v67;
        }
      }
      else
      {
        v48 = 2;
        v68 = v63 / 7 + 1;
      }
      goto LABEL_121;
    case 72:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 2;
      v68 = a4->m128i_u32[2];
      goto LABEL_121;
    case 73:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v68 = v133;
      v48 = 2;
      goto LABEL_121;
    case 77:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 2;
      v68 = a4->m128i_u32[1];
      goto LABEL_121;
    case 78:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      if ( v23 == -1 )
      {
        v68 = a8;
        v23 = 9;
        v48 = 9;
      }
      else
      {
        if ( v23 > 8 )
        {
          v68 = a8;
        }
        else
        {
          v68 = a8;
          for ( k = v23; k != 9; ++k )
            v68 = (int)v68 / 10;
        }
        v48 = v23;
      }
      goto LABEL_121;
    case 80:
      v28 = 1;
      goto LABEL_152;
    case 82:
    case 84:
LABEL_94:
      v55 = sub_40EE80(0LL, a7, a8);
      v56 = 0;
      if ( v23 >= 0 )
        v56 = v23;
      v57 = v56;
      if ( v55 >= v56 )
        v57 = v55;
      if ( a2 - v13 <= v57 )
        return 0LL;
      if ( s )
      {
        if ( v55 < v56 )
        {
          v168 = v55;
          v58 = v23 - v55;
          v59 = s;
          s += v58;
          if ( i == 48 )
            memset(v59, 48, v58);
          else
            memset(v59, 32, v58);
          v55 = v168;
        }
        v161 = v55;
        sub_40EE80(s, a7, a8);
        s += v161;
      }
      v13 += v57;
      v14 = v9;
      goto LABEL_12;
    case 83:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 2;
      v68 = a4->m128i_i32[0];
      goto LABEL_121;
    case 85:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v90 = a4[1].m128i_i32[3] - a4[1].m128i_i32[2] + 7;
      v91 = (unsigned __int64)(-1840700269LL * v90) >> 32;
      goto LABEL_226;
    case 87:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v90 = 7 * ((a4[1].m128i_i32[2] + 6) / 7) - (a4[1].m128i_i32[2] + 6) + a4[1].m128i_i32[3] + 7;
      v91 = (unsigned __int64)(-1840700269LL * v90) >> 32;
LABEL_226:
      v48 = 2;
      v68 = ((v91 + v90) >> 2) - (v90 >> 31);
      goto LABEL_121;
    case 88:
    case 99:
    case 120:
      if ( (_DWORD)v21 != 79 )
        goto LABEL_69;
      goto LABEL_236;
    case 89:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_334;
      if ( (_DWORD)v21 == 79 )
        goto LABEL_236;
      v139 = 0;
      v48 = 4;
      v89 = a4[1].m128i_i32[1];
      LOBYTE(v70) = v89 < -1900;
      v68 = v89 + 1900;
      v69 = 0;
      goto LABEL_220;
    case 90:
      v162 = v17;
      if ( (_BYTE)v17 )
        v16 = 0;
      v150 = v16;
      v71 = strlen(v131);
      v72 = 0;
      if ( v23 >= 0 )
        v72 = v23;
      v73 = v72;
      if ( v71 >= v72 )
        v73 = v71;
      a3 = a2 - v13;
      if ( a2 - v13 <= v73 )
        return 0LL;
      if ( s )
      {
        v74 = v150;
        v75 = v162;
        if ( v71 < v72 )
        {
          v76 = v23 - v71;
          v77 = s;
          s += v76;
          if ( i == 48 )
          {
            memset(v77, 48, v76);
            v74 = v150;
            v75 = v162;
          }
          else
          {
            memset(v77, 32, v76);
            v75 = v162;
            v74 = v150;
          }
        }
        if ( v75 )
        {
          sub_40EDE0((__int64)s, (__int64)v131, v71);
        }
        else if ( v74 )
        {
          sub_40EE30((__int64)s, (__int64)v131, v71);
        }
        else
        {
          memcpy(s, v131, v71);
        }
        s += v71;
      }
      v13 += v73;
      v14 = v9;
      goto LABEL_12;
    case 98:
    case 104:
      if ( (_BYTE)v17 )
        v16 = v17;
      if ( (_DWORD)v21 )
        goto LABEL_236;
LABEL_51:
      v26 = &v180;
      v27 = v9;
      v28 = 0;
      *(_WORD *)format = 9504;
      LODWORD(v21) = 0;
      goto LABEL_52;
    case 100:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 2;
      v68 = a4->m128i_u32[3];
      goto LABEL_121;
    case 101:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v68 = a4->m128i_u32[3];
      goto LABEL_157;
    case 106:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v139 = 0;
      v48 = 3;
      v104 = a4[1].m128i_i32[3];
      LOBYTE(v70) = v104 < -1;
      v68 = v104 + 1;
      v69 = 0;
      goto LABEL_122;
    case 107:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v68 = a4->m128i_u32[2];
      goto LABEL_157;
    case 108:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v68 = v133;
LABEL_157:
      v48 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_121;
    case 109:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v139 = 0;
      v48 = 2;
      v78 = a4[1].m128i_i32[0];
      LOBYTE(v70) = v78 < -1;
      v68 = v78 + 1;
      v69 = 0;
      goto LABEL_122;
    case 110:
      LODWORD(v79) = 0;
      if ( v23 >= 0 )
        LODWORD(v79) = v23;
      v79 = (int)v79;
      if ( !(_DWORD)v79 )
        v79 = 1LL;
      if ( a2 - v13 <= v79 )
        return 0LL;
      if ( s )
      {
        if ( v23 > 1 )
        {
          v80 = v23 - 1LL;
          v81 = s;
          s += v80;
          if ( i == 48 )
            memset(v81, 48, v80);
          else
            memset(v81, 32, v80);
        }
        *s++ = 10;
      }
      goto LABEL_174;
    case 112:
      v28 = 0;
LABEL_152:
      LOBYTE(v20) = 112;
      if ( (_BYTE)v17 )
      {
        v28 = v17;
        v16 = 0;
      }
      goto LABEL_70;
    case 113:
      v48 = 1;
      if ( (_DWORD)v21 == 79 )
        goto LABEL_124;
      v139 = 0;
      LOBYTE(v70) = 0;
      v69 = 0;
      v68 = ((11 * a4[1].m128i_i32[0]) >> 5) + 1;
      goto LABEL_177;
    case 114:
LABEL_69:
      v28 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !(_DWORD)v21 )
      {
        v27 = v9;
        v26 = &v180;
        goto LABEL_52;
      }
      v48 = 0;
      goto LABEL_125;
    case 115:
      v148 = v16;
      v39 = v182;
      v40 = _mm_loadu_si128(a4 + 2);
      v41 = _mm_loadu_si128(a4 + 1);
      v42 = a4[3].m128i_i64[0];
      *(__m128i *)sa = _mm_loadu_si128(a4);
      v184 = v41;
      v185 = v40;
      v186 = v42;
      v43 = sub_4177A0(a7, sa, a3, v20, v17, v21);
      v16 = v148;
      v44 = v43;
      v45 = v43;
      do
      {
        v46 = v45 % 10;
        v45 /= 10LL;
        v47 = 48 - v46;
        a3 = (unsigned int)(v46 + 48);
        if ( v44 < 0 )
          a3 = v47;
        *--v39 = a3;
      }
      while ( v45 );
      v48 = 1;
      if ( v23 > 0 )
        v48 = v23;
      if ( v44 >= 0 )
        goto LABEL_79;
      goto LABEL_298;
    case 116:
      LODWORD(v79) = 0;
      if ( v23 >= 0 )
        LODWORD(v79) = v23;
      v79 = (int)v79;
      if ( !(_DWORD)v79 )
        v79 = 1LL;
      if ( a2 - v13 <= v79 )
        return 0LL;
      if ( s )
      {
        if ( v23 > 1 )
        {
          v87 = v23 - 1LL;
          v88 = s;
          s += v87;
          if ( i == 48 )
            memset(v88, 48, v87);
          else
            memset(v88, 32, v87);
        }
        *s++ = 9;
      }
      goto LABEL_174;
    case 117:
      v48 = 1;
      v68 = (a4[1].m128i_i32[2] + 6) % 7 + 1;
      goto LABEL_121;
    case 119:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 1;
      v68 = a4[1].m128i_u32[2];
      goto LABEL_121;
    case 121:
      if ( (_DWORD)v21 == 69 )
      {
LABEL_334:
        v48 = 0;
        goto LABEL_124;
      }
      v48 = 2;
      v68 = a4[1].m128i_i32[1] % 100;
      if ( (v68 & 0x80000000) != 0 )
      {
        v68 += 100;
        if ( a4[1].m128i_i32[1] <= -1901 )
          v68 = -(a4[1].m128i_i32[1] % 100);
      }
LABEL_121:
      v139 = 0;
      v69 = 0;
      v70 = v68 >> 31;
LABEL_122:
      if ( (_DWORD)v21 == 79 )
      {
        if ( (_BYTE)v70 )
          goto LABEL_221;
LABEL_124:
        v28 = 0;
        *(_WORD *)format = 9504;
LABEL_125:
        v180 = v21;
        v27 = v9;
        LODWORD(v21) = v48;
        v26 = &v181;
LABEL_52:
        *v26 = v20;
        v26[1] = 0;
        v134 = v27;
        v158 = v21;
        v145 = v16;
        v29 = strftime(sa, 0x400uLL, format, (const struct tm *)a4);
        v14 = v134;
        if ( v29 )
        {
          v30 = v29 - 1;
          v31 = 0;
          if ( v23 >= 0 )
            v31 = v23;
          v32 = v31;
          if ( v30 >= v31 )
            v32 = v30;
          a3 = a2 - v13;
          if ( a2 - v13 > v32 )
          {
            if ( s )
            {
              v16 = v145;
              if ( !v158 && v30 < v31 )
              {
                v159 = v30;
                v33 = v23 - v30;
                v146 = v134;
                v135 = v16;
                v34 = s;
                s += v33;
                if ( i == 48 )
                {
                  memset(v34, 48, v33);
                  v16 = v135;
                  v14 = v146;
                  v30 = v159;
                }
                else
                {
                  memset(v34, 32, v33);
                  v30 = v159;
                  v14 = v146;
                  v16 = v135;
                }
              }
              v147 = v14;
              v35 = &sa[1];
              v36 = v30;
              v37 = s;
              v136 = v30;
              if ( !v28 )
                goto LABEL_64;
              sub_40EDE0((__int64)s, (__int64)&sa[1], v30);
              v38 = v136;
              v14 = v147;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_220:
      if ( (_BYTE)v70 )
LABEL_221:
        v68 = -v68;
LABEL_177:
      v82 = v182;
      while ( 1 )
      {
        v39 = v82 - 1;
        if ( (v69 & 1) != 0 )
        {
          v83 = v82 - 2;
          *--v82 = 58;
          v39 = v83;
        }
        v69 >>= 1;
        a3 = v68 / 0xA;
        *(v82 - 1) = v68 % 0xA + 48;
        v82 = v39;
        if ( v68 <= 9 && !v69 )
          break;
        v68 /= 0xAu;
      }
      if ( v48 < v23 )
        v48 = v23;
      if ( (_BYTE)v70 )
      {
LABEL_298:
        v140 = 45;
        v108 = 45;
        if ( i == 45 )
          goto LABEL_299;
LABEL_189:
        v49 = (char *)(v182 - v39);
        LODWORD(v51) = v48 - 1 - (v182 - v39);
        v50 = a2 - v13;
        if ( (int)v51 <= 0 )
        {
          LODWORD(v52) = 0;
          v110 = 1LL;
          if ( v23 >= 0 )
            LODWORD(v52) = v23;
          v52 = (int)v52;
          if ( (_DWORD)v52 )
            v110 = (int)v52;
          if ( v110 >= v50 )
            return 0LL;
          if ( s )
          {
            if ( !v48 && (unsigned __int64)(int)v52 > 1 )
            {
              v111 = v23 - 1LL;
              v178 = v110;
              v176 = (int)v52;
              v156 = &s[v111];
              v165 = v16;
              if ( i == 48 )
              {
                memset(s, 48, v111);
                s = v156;
                v16 = v165;
                v48 = 0;
                v52 = v176;
                v110 = v178;
                v49 = (char *)(v182 - v39);
              }
              else
              {
                memset(s, 32, v111);
                s = v156;
                v49 = (char *)(v182 - v39);
                v110 = v178;
                v52 = v176;
                v48 = 0;
                v16 = v165;
              }
            }
            *s++ = v140;
          }
          v13 += v110;
          v14 = v9;
          v50 = a2 - v13;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v48 >= v50 )
            return 0LL;
          LODWORD(a3) = 0;
          v84 = 1LL;
          if ( v23 >= 0 )
            LODWORD(a3) = v23;
          a3 = (int)a3;
          if ( (_DWORD)a3 )
            v84 = (int)a3;
          if ( v84 >= v50 )
            return 0LL;
          v13 += v84;
          v51 = (int)v51;
          v14 = v9;
          if ( !s )
            goto LABEL_205;
          if ( !v48 && (unsigned __int64)(int)a3 > 1 )
          {
            v173 = (int)v51;
            v85 = v23 - 1LL;
            v151 = v16;
            v86 = s;
            s += v85;
            if ( i == 48 )
            {
              memset(v86, 48, v85);
              v16 = v151;
              v48 = 0;
              v49 = (char *)(v182 - v39);
              v51 = v173;
            }
            else
            {
              memset(v86, 32, v85);
              v51 = v173;
              v49 = (char *)(v182 - v39);
              v48 = 0;
              v16 = v151;
            }
          }
          ++s;
          v14 = v9;
          *(s - 1) = v140;
LABEL_203:
          if ( s )
          {
            v174 = v49;
            v169 = v48;
            v163 = v14;
            v152 = v16;
            v141 = v51;
            memset(s, 48, v51);
            v51 = v141;
            v49 = v174;
            v48 = v169;
            v14 = v163;
            v16 = v152;
            s += v141;
          }
LABEL_205:
          v13 += v51;
          v23 = 0;
          v52 = 0LL;
          v50 = a2 - v13;
          goto LABEL_84;
        }
LABEL_326:
        v112 = (int)v51;
        if ( (int)v51 >= v50 )
          return 0LL;
        if ( s )
        {
          v113 = s;
          v172 = v51;
          v166 = v48;
          s += (int)v51;
          v157 = v16;
          memset(v113, 32, (int)v51);
          LODWORD(v51) = v172;
          v48 = v166;
          v16 = v157;
        }
        v13 += v112;
        v114 = v23 - v51;
        v22 = (int)v51 < v23;
        v23 = 0;
        if ( v22 )
          v23 = v114;
        v50 = a2 - v13;
        if ( v140 )
        {
          v52 = v23;
          v115 = 1LL;
          if ( v23 )
            v115 = v23;
          if ( v115 >= v50 )
            return 0LL;
          if ( s )
          {
            if ( !v48 && (unsigned __int64)v23 > 1 )
            {
              v116 = s;
              v177 = v115;
              s += v23 - 1;
              v167 = v16;
              memset(v116, 32, v23 - 1LL);
              v115 = v177;
              v48 = 0;
              v16 = v167;
              v52 = v23;
            }
            *s++ = v140;
          }
          v13 += v115;
          v14 = v9;
          i = 95;
          v49 = (char *)(v182 - v39);
          v50 = a2 - v13;
        }
        else
        {
          v52 = v23;
          v14 = v9;
          i = 95;
          v49 = (char *)(v182 - v39);
        }
        goto LABEL_84;
      }
      if ( !v139 )
      {
LABEL_79:
        v49 = (char *)(v182 - v39);
        v50 = a2 - v13;
        if ( i == 45 || (LODWORD(v51) = v48 - (_DWORD)v49, v48 - (int)v49 <= 0) )
        {
          LODWORD(v52) = 0;
          v14 = v9;
          if ( v23 >= 0 )
            LODWORD(v52) = v23;
          v52 = (int)v52;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          a3 = v48;
          if ( v48 >= v50 )
            return 0LL;
          v51 = (int)v51;
          v14 = v9;
          goto LABEL_203;
        }
        v140 = 0;
        goto LABEL_326;
      }
      if ( i != 45 )
      {
        v140 = 43;
        goto LABEL_189;
      }
      v108 = 43;
LABEL_299:
      LODWORD(v52) = 0;
      v109 = 1LL;
      if ( v23 >= 0 )
        LODWORD(v52) = v23;
      v52 = (int)v52;
      if ( (_DWORD)v52 )
        v109 = (int)v52;
      if ( a2 - v13 <= v109 )
        return 0LL;
      if ( s )
      {
        if ( !v48 && (unsigned __int64)(int)v52 > 1 )
        {
          v175 = v108;
          v171 = (int)v52;
          v155 = v16;
          memset(s, 32, v23 - 1LL);
          v108 = v175;
          v52 = v171;
          v48 = 0;
          v16 = v155;
          s += v23 - 1;
        }
        *s++ = v108;
      }
      v13 += v109;
      v14 = v9;
      i = 45;
      v49 = (char *)(v182 - v39);
      v50 = a2 - v13;
LABEL_84:
      v32 = v52;
      if ( (unsigned __int64)v49 >= v52 )
        v32 = (unsigned __int64)v49;
      if ( v32 < v50 )
      {
        if ( s )
        {
          if ( !v48 && (unsigned __int64)v49 < v52 )
          {
            v160 = v49;
            v53 = v23 - (_QWORD)v49;
            v149 = v14;
            v137 = v16;
            v54 = s;
            s += v53;
            if ( i == 48 )
            {
              memset(v54, 48, v53);
              v16 = v137;
              v14 = v149;
              v49 = v160;
            }
            else
            {
              memset(v54, 32, v53);
              v49 = v160;
              v14 = v149;
              v16 = v137;
            }
          }
          v147 = v14;
          v36 = (size_t)v49;
          v35 = v39;
          v37 = s;
          v136 = (unsigned __int64)v49;
LABEL_64:
          if ( v16 )
          {
            sub_40EE30((__int64)v37, (__int64)v35, v36);
            v38 = v136;
            v14 = v147;
          }
          else
          {
            memcpy(v37, v35, v36);
            v14 = v147;
            v38 = v136;
          }
LABEL_66:
          s += v38;
        }
LABEL_67:
        v13 += v32;
        goto LABEL_12;
      }
      return 0LL;
    case 122:
      j = 0LL;
LABEL_252:
      if ( a4[2].m128i_i32[0] < 0 )
      {
        v14 = v9;
        goto LABEL_12;
      }
      v100 = a4[2].m128i_i64[1];
      LOBYTE(v70) = 1;
      if ( (int)v100 >= 0 )
      {
        LOBYTE(v70) = 0;
        if ( !(_DWORD)v100 )
          LOBYTE(v70) = *v131 == 45;
      }
      v144 = (int)v100 / 3600;
      v101 = (int)v100 / 60 % 60;
      v69 = v101;
      v102 = (int)v100 % 60;
      if ( j == 1 )
        goto LABEL_362;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_361;
        if ( j != 3 )
        {
          v103 = *v9;
          v93 = v9;
LABEL_261:
          LODWORD(v95) = 0;
          a3 = a2 - v13;
          if ( v23 >= 0 )
            LODWORD(v95) = v23;
          v95 = (int)v95;
          if ( v103 == 37 )
          {
            v79 = 1LL;
            v14 = v93;
            v94 = 1LL;
            if ( (_DWORD)v95 )
              v79 = (int)v95;
          }
          else
          {
            v9 = v93;
LABEL_236:
            v92 = v9 - 1;
            do
            {
              v93 = v92;
              LODWORD(v94) = (_DWORD)v9 - 1 + 2 - (_DWORD)v92--;
            }
            while ( v92[1] != 37 );
            LODWORD(v95) = 0;
            v94 = (int)v94;
            v14 = v9;
            a3 = a2 - v13;
            if ( v23 >= 0 )
              LODWORD(v95) = v23;
            v95 = (int)v95;
            v79 = (int)v95;
            if ( (int)v94 >= (unsigned __int64)(int)v95 )
              v79 = (int)v94;
          }
LABEL_242:
          if ( a3 > v79 )
          {
            if ( s )
            {
              if ( v94 < v95 )
              {
                v170 = v94;
                v96 = v23 - v94;
                v164 = v14;
                v153 = v93;
                v142 = v16;
                v97 = s;
                s += v96;
                if ( i == 48 )
                {
                  memset(v97, 48, v96);
                  v16 = v142;
                  v93 = v153;
                  v14 = v164;
                  v94 = v170;
                }
                else
                {
                  memset(v97, 32, v96);
                  v94 = v170;
                  v14 = v164;
                  v93 = v153;
                  v16 = v142;
                }
              }
              v154 = v14;
              v143 = v94;
              if ( v16 )
              {
                sub_40EE30((__int64)s, (__int64)v93, v94);
                v98 = v143;
                v14 = v154;
              }
              else
              {
                memcpy(s, v93, v94);
                v14 = v154;
                v98 = v143;
              }
              s += v98;
            }
            v13 += v79;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v102 )
        {
LABEL_361:
          v125 = 10000 * v144;
          v48 = 9;
          v139 = 1;
          v126 = 100 * v69 + v125;
          v69 = 20;
          v68 = v126 + v102;
        }
        else if ( v101 )
        {
LABEL_362:
          v127 = 100 * v144;
          v48 = 6;
          v139 = 1;
          v68 = v101 + v127;
          v69 = 4;
        }
        else
        {
          v68 = v144;
          v48 = 3;
          v139 = 1;
        }
      }
      else
      {
        v128 = 100 * v144;
        v69 = 0;
        v139 = 1;
        v48 = 5;
        v68 = v101 + v128;
      }
      goto LABEL_122;
    default:
      goto LABEL_236;
  }
}

__int64 __fastcall sub_410650(char *a1, __int64 a2, unsigned __int64 a3, const __m128i *a4, __int64 a5, int a6)
{
  char v7[9]; // [rsp+Fh] [rbp-9h] BYREF

  v7[0] = 0;
  return sub_40EE80(a1, a2, a3, a4, 0, (__int64)v7, a5, a6);
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
  const char *v6; // rbx

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
        return (char *)&unk_41DD1E;
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
      return (char *)&unk_41DD22;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_410810(
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
                return sub_410810((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_410810((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_416E80((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_410810((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_410710("`", a5);
        v51 = sub_410710("'", a5);
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

unsigned __int64 __fastcall sub_410810(
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
                return sub_410810((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_410810((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_416E80((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_410810((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_410710("`", a5);
        v51 = sub_410710("'", a5);
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

_BYTE *__fastcall sub_411A40(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  v8 = (__m128i *)off_624618;
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
      v8 = (__m128i *)sub_4129E0(0LL, v10);
      off_624618 = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_624620);
    }
    else
    {
      off_624618 = (void *)sub_4129E0(off_624618, v10);
      v8 = (__m128i *)off_624618;
    }
    memset(&v8[dword_624630], 0, 16LL * ((int)a1 + 1 - dword_624630));
    dword_624630 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_410810(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
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
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_410810(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_411A40(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  v8 = (__m128i *)off_624618;
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
      v8 = (__m128i *)sub_4129E0(0LL, v10);
      off_624618 = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_624620);
    }
    else
    {
      off_624618 = (void *)sub_4129E0(off_624618, v10);
      v8 = (__m128i *)off_624618;
    }
    memset(&v8[dword_624630], 0, 16LL * ((int)a1 + 1 - dword_624630));
    dword_624630 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_410810(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
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
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_410810(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

__int64 __fastcall sub_411BE0(__int128 *a1)
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
  v3 = (_DWORD *)a1 + (a2 >> 5) + 2;
  v4 = *v3 >> (a2 & 0x1F);
  v5 = v4 ^ a3;
  result = v4 & 1;
  *v3 ^= (v5 & 1) << (a2 & 0x1F);
  return result;
}

unsigned __int64 __fastcall sub_411CD0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_6258E0;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_410810(
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

_BYTE *__fastcall sub_411D50(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_6258E0;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_410810(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_412980(v11 + 1);
  sub_410810(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_411E50()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)off_624618;
  if ( dword_624630 > 1 )
  {
    v1 = (void **)((char *)off_624618 + 24);
    v2 = (void **)((char *)off_624618 + 16 * (unsigned int)(dword_624630 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_6257E0 )
  {
    free(v4);
    *(_QWORD *)&xmmword_624620 = 256LL;
    *((_QWORD *)&xmmword_624620 + 1) = &unk_6257E0;
  }
  if ( v0 != &xmmword_624620 )
  {
    free(v0);
    off_624618 = &xmmword_624620;
  }
  dword_624630 = 1;
}

_BYTE *__fastcall sub_411F60(__int64 a1, int a2, __int64 a3)
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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_411F60(__int64 a1, int a2, __int64 a3)
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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_411FD0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_411A40(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_411FD0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_411A40(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_412040(int a1, __int64 a2)
{
  return sub_411F60(0LL, a1, a2);
}

_BYTE *__fastcall sub_412060(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_625910;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6258E0);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6258F0);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_625900);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_411A40(0LL, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_4120E0(__int64 a1)
{
  return sub_412060(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_412110(__int64 a1, int a2, __int64 a3)
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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_412110(__int64 a1, int a2, __int64 a3)
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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_412180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6258E0);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6258F0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_625900);
  v8 = qword_625910;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_411A40(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_412270(__int64 a1, __int64 a2)
{
  return sub_411A40(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6245E0);
}

_BYTE *__fastcall sub_412290(__int64 a1)
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
  struct stat v11; // [rsp+0h] [rbp-158h] BYREF
  struct stat stat_buf; // [rsp+90h] [rbp-C8h] BYREF

  v2 = 0;
  v3 = sub_40B870(a1);
  v4 = sub_40B870(a2);
  v5 = sub_40B8D0(v3);
  if ( v5 == sub_40B8D0(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (char *)sub_417940(a1);
    v8 = (char *)sub_417940(a2);
    if ( __xstat(1, v7, &v11) )
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
    if ( v11.st_ino == stat_buf.st_ino )
      LOBYTE(v2) = v11.st_dev == stat_buf.st_dev;
    free(v7);
    free(v8);
  }
  return v2;
}

__int64 __fastcall sub_4123E0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4123E0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4127E0(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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

__int64 __fastcall sub_412840(
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
  __printf_chk(1LL, v1, &unk_41B1AD, "https://www.gnu.org/software/coreutils/");
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

// attributes: thunk
void *__fastcall sub_4129D0(size_t a1, __int64 a2)
{
  return sub_412980(a1, a2);
}

void *__fastcall sub_4129E0(void *a1, size_t a2)
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
    a3 = 0x5555555555555553LL;
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

void *__fastcall sub_412B30(size_t n, __int64 a2)
{
  void *v2; // rax

  v2 = sub_412980(n, a2);
  return memset(v2, 0, n);
}

__int64 __fastcall sub_412B50(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_412BD0(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_412B80(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_412980(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_412BB0(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_412B80(src, v1 + 1);
}

void __noreturn sub_412BD0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_412C10(
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
    if ( v19 >= a3 && v19 <= a4 )
      return v12;
    v13 = __errno_location();
    *v13 = v19 < 0x40000000 ? 34 : 75;
  }
  v14 = sub_412290((__int64)a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", a6, v14);
  return v19;
}

unsigned __int64 __fastcall sub_412CE0(
        char *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
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
  size_t v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v0 = 0x1000401001LL;
  v1 = 0LL;
  v8[0] = 34LL;
  v3 = __errno_location();
  do
  {
    while ( 1 )
    {
      v1 = (char *)sub_412AE0(v1, v8, v2);
      v4 = &v1[v8[0] - 2];
      v5 = v8[0] - 1;
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

__int64 __fastcall sub_412DF0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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

void __fastcall __noreturn sub_413220(int a1, int a2, char a3, __int64 a4, __int64 a5)
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
    v9 = (&off_41F1E0)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_41F171[-a2];
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

void __fastcall __noreturn sub_413220(int a1, int a2, char a3, __int64 a4, __int64 a5)
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
    v9 = (&off_41F1E0)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_41F171[-a2];
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

__int64 __fastcall sub_4132B0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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

_DWORD *__fastcall sub_4136F0(_DWORD *a1)
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
      return a1;
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
          return v2 + 2;
      }
      ++v2;
      v3 = v2[1];
      if ( !v3 )
        return a1;
    }
    if ( !dword_625918 )
      dword_625918 = getenv("POSIXLY_CORRECT") == 0LL ? -1 : 1;
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
        return a1;
      v6 = v2[1];
      ++v2;
    }
  }
}

unsigned __int8 *__fastcall sub_4137F0(unsigned __int8 *a1)
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
      return a1;
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
          return v2 + 2;
      }
      v3 = (++v2)[1];
      if ( !(_BYTE)v3 )
        return a1;
    }
    if ( !dword_625918 )
      dword_625918 = getenv("POSIXLY_CORRECT") == 0LL ? -1 : 1;
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
        return a1;
      v5 = *++v2;
    }
  }
}

__int64 __fastcall sub_4138F0(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned int v6; // r12d
  int v7; // eax
  __int64 v8; // r14
  const wchar_t *v9; // rsi
  size_t *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  wchar_t v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  void *v19; // rsp
  wchar_t *v20; // rax
  char *v21; // rax
  size_t *v22; // r13
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  void *v25; // rsp
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  unsigned int v28; // r12d
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
  __int64 v42; // [rsp+0h] [rbp-80h] BYREF
  const wchar_t *v43; // [rsp+8h] [rbp-78h] BYREF
  __int64 v44; // [rsp+10h] [rbp-70h]
  unsigned __int64 v45; // [rsp+18h] [rbp-68h]
  unsigned __int8 v46; // [rsp+23h] [rbp-5Dh]
  unsigned int v47; // [rsp+24h] [rbp-5Ch]
  unsigned __int64 v48; // [rsp+28h] [rbp-58h]
  __int64 v49; // [rsp+30h] [rbp-50h]
  size_t v50; // [rsp+38h] [rbp-48h]
  size_t v51; // [rsp+48h] [rbp-38h] BYREF

  LOBYTE(v6) = a5;
  LODWORD(v49) = a1;
  v45 = a3;
  v48 = a4;
  v47 = a6;
  v46 = a5;
  v51 = 0LL;
  v50 = wcslen((const wchar_t *)a2);
  v7 = *(_DWORD *)(a2 + 4);
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = a2 + 4;
  v44 = a2;
  v9 = (const wchar_t *)(a2 + 4);
  v10 = &v51;
  v11 = 3221227009LL;
  v12 = 0LL;
  while ( 2 )
  {
    while ( v7 == 91 )
    {
      if ( !dword_625918 )
      {
        v43 = v9;
        v21 = getenv("POSIXLY_CORRECT");
        v9 = v43;
        dword_625918 = v21 == 0LL ? -1 : 1;
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
        if ( v7 == 124 && !v12 )
        {
          v17 = v50;
          if ( (unsigned int)(v49 - 63) > 1 )
            v17 = ((v8 - (__int64)v9) >> 2) + 1;
          v18 = (4 * v17 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v18 - 8 > 0x1F37 || v17 > 0x3FFFFFFFFFFFFFFFLL )
            return 0xFFFFFFFFLL;
          v19 = alloca(v18 + 8);
          v20 = wmempcpy((wchar_t *)&v43, v9, (v8 - (__int64)v9) >> 2);
          v9 = (const wchar_t *)(v8 + 4);
          *v20 = 0;
          v7 = *(_DWORD *)(v8 + 4);
          v8 += 4LL;
          v42 = 0LL;
          *v10 = (size_t)&v42;
          v10 = (size_t *)&v42;
          v12 = 0LL;
        }
        else
        {
LABEL_5:
          v7 = *(_DWORD *)(v8 + 4);
          v8 += 4LL;
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
  v23 = v44;
  if ( (unsigned int)(v49 - 63) > 1 )
    v50 = ((v8 - (__int64)v9) >> 2) + 1;
  v24 = (4 * v50 + 15) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v24 - 8 > 0x1F37 || v50 > 0x3FFFFFFFFFFFFFFFLL )
    return 0xFFFFFFFFLL;
  v25 = alloca(v24 + 8);
  *wmempcpy((wchar_t *)&v43, v9, (v8 - (__int64)v9) >> 2) = 0;
  *v22 = (size_t)&v42;
  v26 = v51;
  v42 = 0LL;
  if ( !v51 )
    __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_wmatch");
  if ( *(_DWORD *)(v8 - 4) != 41 )
    __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_wmatch");
  switch ( (int)v49 )
  {
    case '!':
      if ( v45 > v48 )
        return 1LL;
      v34 = v45;
      v50 = v51;
      v49 = v8;
      v35 = v45;
      v36 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v36 = v47;
      while ( 2 )
      {
        v37 = (_QWORD *)v50;
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
                v38 = (v47 & 5) == 5;
            }
            if ( !(unsigned int)sub_413E80(v49, v35, v48, v38, v36) )
              return 0LL;
            break;
          }
        }
        v35 += 4LL;
        if ( v48 >= v35 )
          continue;
        break;
      }
      return 1LL;
    case '*':
      if ( (unsigned int)sub_413E80(v8, v45, v48, (unsigned __int8)v6, v47) )
        goto LABEL_42;
      return 0LL;
    case '+':
LABEL_42:
      v44 = v8;
      v27 = v45;
      v28 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v28 = v47;
      v29 = v23 - 4;
      LODWORD(v49) = v47 & 1;
      v30 = v48;
      v43 = (const wchar_t *)v29;
      do
      {
        if ( v27 <= v30 )
        {
          v31 = v27;
          LODWORD(v50) = v46;
          do
          {
            if ( !(unsigned int)sub_413E80(v26 + 8, v27, v31, (unsigned int)v50, v28) )
            {
              if ( v27 == v31 )
              {
                if ( !(unsigned int)sub_413E80(v44, v27, v30, (unsigned int)v50, v28) )
                  return 0LL;
              }
              else
              {
                v32 = 0LL;
                if ( *(_DWORD *)(v31 - 4) == 47 )
                  v32 = (v47 & 5) == 5;
                if ( !(unsigned int)sub_413E80(v44, v31, v30, v32, v28) )
                  return 0LL;
                v33 = 0LL;
                if ( *(_DWORD *)(v31 - 4) == 47 )
                  v33 = (v47 & 5) == 5;
                if ( !(unsigned int)sub_413E80(v43, v31, v30, v33, v28) )
                  return 0LL;
              }
              v26 = v51;
            }
            v31 += 4LL;
          }
          while ( v30 >= v31 );
        }
        v26 = *(_QWORD *)v26;
        v51 = v26;
      }
      while ( v26 );
      return 1LL;
    case '?':
      v6 = (unsigned __int8)v6;
      if ( (unsigned int)sub_413E80(v8, v45, v48, (unsigned __int8)v6, v47) )
        goto LABEL_72;
      return 0LL;
    case '@':
      v6 = (unsigned __int8)v6;
LABEL_72:
      v39 = v45;
      v40 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v40 = v47;
      break;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_wmatch");
  }
  while ( 1 )
  {
    v41 = wcscat((wchar_t *)(v26 + 8), (const wchar_t *)v8);
    if ( !(unsigned int)sub_413E80(v41, v39, v48, v6, v40) )
      break;
    v26 = *(_QWORD *)v26;
    v51 = v26;
    if ( !v26 )
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_413E80(wint_t *a1, const wchar_t *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  const wchar_t *v5; // r14
  wint_t v7; // r15d
  int v9; // r12d
  int v10; // r13d
  wint_t *v11; // rbp
  wint_t v12; // eax
  wint_t v13; // eax
  wint_t v14; // r8d
  wint_t v15; // eax
  wint_t *v16; // r14
  wint_t *v17; // r15
  wint_t v18; // eax
  wint_t v19; // ebx
  int v20; // r14d
  wint_t *i; // rsi
  wint_t v22; // edx
  _DWORD *v23; // rsi
  bool v24; // di
  wint_t v25; // eax
  __int64 result; // rax
  wint_t *v27; // rax
  int v28; // ebp
  const wchar_t *v29; // r14
  wint_t *v30; // r13
  wint_t v31; // r11d
  wint_t *v32; // r15
  bool v33; // dl
  wint_t *v34; // rax
  wchar_t *v35; // rax
  wint_t v36; // r11d
  wchar_t *v37; // r9
  unsigned __int8 v38; // r10
  wint_t v39; // eax
  wint_t *v40; // r15
  wint_t v41; // r12d
  unsigned int v42; // r14d
  wint_t *v43; // r13
  unsigned __int64 v44; // rbx
  wint_t v45; // eax
  wint_t *v46; // r14
  __int64 v47; // rdx
  wint_t v48; // eax
  char *v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // eax
  wint_t *v53; // r15
  unsigned int v54; // ebp
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rcx
  int *v57; // r8
  int v58; // edx
  _DWORD *v59; // rbp
  int v60; // eax
  wint_t *v61; // rax
  wint_t *v62; // rbp
  char *v63; // rsi
  int *v64; // rdx
  int v65; // eax
  wctype_t v66; // rax
  wint_t *v67; // r9
  __int64 v68; // [rsp+8h] [rbp-580h]
  wchar_t *v69; // [rsp+8h] [rbp-580h]
  const wchar_t *v70; // [rsp+8h] [rbp-580h]
  bool v71; // [rsp+8h] [rbp-580h]
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
  char property[272]; // [rsp+30h] [rbp-558h] BYREF
  int v86[256]; // [rsp+140h] [rbp-448h] BYREF
  __int64 v87; // [rsp+540h] [rbp-48h] BYREF

  v5 = (const wchar_t *)a3;
  v7 = *a1;
  v76 = a5;
  v68 = (__int64)(a1 + 1);
  if ( !*a1 )
    goto LABEL_56;
  v83 = a5 & 5;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  v11 = a1;
  while ( 2 )
  {
    if ( v10 )
    {
      v77 = a4;
      v12 = towlower(v7);
      a4 = v77;
      v7 = v12;
    }
    switch ( v7 )
    {
      case '!':
      case '+':
      case '@':
        if ( (v76 & 0x20) == 0 )
          goto LABEL_49;
        if ( v11[1] != 40 )
          goto LABEL_49;
        result = sub_4138F0(v7, v68, (unsigned __int64)a2, a3, a4, v76);
        if ( (_DWORD)result == -1 )
          goto LABEL_49;
        return result;
      case '*':
        v27 = v11;
        v28 = v10;
        v29 = (const wchar_t *)a3;
        v30 = v27;
        if ( (v76 & 0x20) == 0 || v27[1] != 40 )
          goto LABEL_65;
        v56 = a3;
        wcb = a4;
        result = sub_4138F0(42, v68, (unsigned __int64)a2, v56, a4, v76);
        if ( (_DWORD)result != -1 )
          return result;
        a4 = wcb;
LABEL_65:
        if ( v29 != a2 && *a2 == 46 && a4 )
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
            wcc = a4;
            v71 = v33;
            v80 = v31;
            v34 = sub_4136F0(v32);
            v33 = v71;
            a4 = wcc;
            if ( v34 != v32 )
              goto LABEL_75;
            v31 = v80;
          }
          if ( v31 == 63 )
          {
            if ( a2 == v29 || *a2 == 47 && (v76 & 1) != 0 )
              return 1LL;
            ++a2;
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
          v79 = a4;
          wca = v31;
          v35 = wmemchr(a2, -(v76 & 1) & 0x2F, v29 - a2);
          v36 = wca;
          v37 = v35;
          v38 = v79;
          if ( !v35 )
            v37 = (wchar_t *)v29;
          if ( wca == 91
            || (v76 & 0x20) != 0
            && (v50 = wca - 33, (unsigned int)v50 <= 0x1F)
            && (v51 = 2147484673LL, _bittest64(&v51, v50))
            && *v32 == 40 )
          {
            v52 = v76 & 0xFFFFFFFB;
            if ( (v76 & 1) != 0 )
              v52 = v76;
            v53 = v32 - 1;
            v54 = v52;
            if ( v37 > a2 )
            {
              v55 = (unsigned __int64)v37;
              do
              {
                if ( !(unsigned int)sub_413E80(v53, a2, v29, v38, v54) )
                  return 0LL;
                ++a2;
                v38 = 0;
              }
              while ( v55 > (unsigned __int64)a2 );
            }
            return 1LL;
          }
          if ( wca != 47 )
          {
            if ( (v76 & 1) != 0 )
              goto LABEL_84;
            goto LABEL_192;
          }
          if ( (v76 & 1) == 0 )
          {
LABEL_192:
            v76 &= ~4u;
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
            v40 = v32 - 1;
            if ( v37 <= a2 )
              return 1LL;
            v70 = v29;
            v41 = v36;
            v42 = v79;
            v43 = (wint_t *)a2;
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
          if ( v29 <= a2 )
            return 1LL;
          while ( *a2 != 47 )
          {
            if ( v29 <= ++a2 )
              return 1LL;
          }
          return (unsigned int)sub_413E80(v32, a2 + 1, v29, (v76 >> 2) & 1, v76) != 0;
        }
        else
        {
          if ( (v76 & 1) == 0 || (v76 & 8) != 0 )
            return 0LL;
          return wmemchr(a2, 47, v29 - a2) != 0LL;
        }
      case '/':
        if ( v83 != 5 )
          goto LABEL_49;
        if ( (const wchar_t *)a3 == a2 || *a2 != 47 )
          return 1LL;
        v11 = (wint_t *)v68;
        a4 = 1;
        goto LABEL_54;
      case '?':
        if ( (v76 & 0x20) != 0 && v11[1] == 40 )
        {
          v82 = a4;
          result = sub_4138F0(63, v68, (unsigned __int64)a2, a3, a4, v76);
          a4 = v82;
          if ( (_DWORD)result != -1 )
            return result;
        }
        if ( (const wchar_t *)a3 == a2 )
          return 1LL;
        if ( *a2 != 47 )
        {
          a4 &= *a2 == 46;
          if ( !a4 )
          {
            v11 = (wint_t *)v68;
            goto LABEL_54;
          }
          return 1LL;
        }
        if ( (v76 & 1) != 0 )
          return 1LL;
        goto LABEL_53;
      case '[':
        if ( !dword_625918 )
        {
          v81 = a4;
          v49 = getenv("POSIXLY_CORRECT");
          a4 = v81;
          dword_625918 = v49 == 0LL ? -1 : 1;
        }
        if ( (const wchar_t *)a3 == a2 )
          return 1LL;
        v14 = *a2;
        if ( *a2 == 46 )
        {
          if ( a4 )
            return 1LL;
        }
        else if ( v14 == 47 && (v76 & 1) != 0 )
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
        v17 = (wint_t *)a2;
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
              a2 = (const wchar_t *)v17;
              v7 = v84;
LABEL_50:
              v25 = *a2;
              if ( v10 )
                v25 = towlower(v25);
              if ( v25 != v7 )
                return 1LL;
LABEL_53:
              v11 = (wint_t *)v68;
              a4 = 0;
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
                i = v11 + 1;
                if ( v20 != 45 )
                  break;
                v22 = v11[1];
                if ( v22 != 93 && v22 )
                  goto LABEL_37;
                if ( v18 == v19 )
                {
                  a2 = (const wchar_t *)v17;
                  goto LABEL_152;
                }
                if ( v22 != 93 )
                {
LABEL_37:
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
                    a2 = (const wchar_t *)v17;
                    i = v23 + 1;
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
                a2 = (const wchar_t *)v17;
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
            if ( v48 - 97 > 0x18 )
              goto LABEL_109;
            ++v47;
            ++v46;
            *(_DWORD *)&property[4 * v47 + 268] = v48;
            if ( v47 == 256 )
              return 1LL;
          }
          if ( v46[2] != 93 )
          {
LABEL_109:
            i = v11 + 1;
            if ( v19 != 91 )
            {
              ++v11;
              v18 = 58;
              continue;
            }
LABEL_148:
            a2 = (const wchar_t *)v17;
            v20 = *v11;
            goto LABEL_152;
          }
          break;
        }
        v86[v47] = 0;
        v63 = property;
        v64 = v86;
        v65 = v86[0];
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
          if ( v64 == (int *)&v87 )
            return 1LL;
          ++v64;
          *v63++ = v65;
          v65 = *v64;
        }
        while ( *v64 );
        *v63 = 0;
        v66 = wctype(property);
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
        a2 = (const wchar_t *)v17;
        v20 = v46[3];
        for ( i = v67 + 4; ; i = v11 + 1 )
        {
LABEL_152:
          v57 = (int *)i;
          v58 = v20;
          if ( !v20 )
            return 1LL;
          a4 = v9 == 0 && v20 == 92;
          if ( a4 )
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
          v61 = v11 + 2;
          v20 = v11[2];
          v62 = v11 + 257;
          while ( 1 )
          {
            if ( v20 == 58 )
            {
              if ( v61[1] != 93 )
                goto LABEL_158;
              v57 = (int *)(v61 + 3);
              v58 = v61[2];
              goto LABEL_149;
            }
            if ( (unsigned int)(v20 - 97) > 0x18 )
              break;
            v20 = *++v61;
            if ( v62 == v61 )
              return 1LL;
          }
          v20 = 58;
          v11 = i;
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
          v11 = i;
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
        ++a2;
        v68 = (__int64)(v11 + 1);
        if ( !*v11 )
        {
          v5 = (const wchar_t *)a3;
LABEL_56:
          if ( a2 == v5 )
            return 0LL;
          if ( (v76 & 8) != 0 )
            return *a2 != 47;
          return 1LL;
        }
        continue;
      case '\\':
        if ( v9 )
        {
          if ( (const wchar_t *)a3 == a2 )
            return 1LL;
          if ( v10 )
          {
LABEL_10:
            v13 = towlower(*a2);
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
            if ( (const wchar_t *)a3 == a2 )
              return 1LL;
            goto LABEL_10;
          }
          if ( (const wchar_t *)a3 == a2 )
            return 1LL;
        }
        v13 = *a2;
        v11 = (wint_t *)v68;
LABEL_98:
        if ( v13 != v7 )
          return 1LL;
LABEL_99:
        a4 = 0;
        goto LABEL_54;
      default:
LABEL_49:
        if ( (const wchar_t *)a3 != a2 )
          goto LABEL_50;
        return 1LL;
    }
  }
}

__int64 __fastcall sub_414960(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned int v6; // r12d
  int v7; // eax
  __int64 i; // r14
  void *v9; // rsi
  void **p_src; // rbx
  __int64 v11; // r13
  __int64 v12; // r15
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  void *v18; // rsp
  _BYTE *v19; // rax
  char *v20; // rax
  _QWORD *v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  void *v25; // rsp
  _BYTE *v26; // rax
  unsigned __int64 v27; // r15
  _QWORD *v28; // r14
  unsigned int v29; // r12d
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
  void *src; // [rsp+0h] [rbp-80h] BYREF
  __int64 v45; // [rsp+8h] [rbp-78h] BYREF
  unsigned __int8 v46; // [rsp+13h] [rbp-6Dh]
  unsigned int v47; // [rsp+14h] [rbp-6Ch]
  unsigned __int64 v48; // [rsp+18h] [rbp-68h]
  unsigned __int64 v49; // [rsp+20h] [rbp-60h]
  __int64 v50; // [rsp+28h] [rbp-58h]
  size_t v51; // [rsp+30h] [rbp-50h]
  __int64 v52; // [rsp+38h] [rbp-48h]
  size_t v53; // [rsp+48h] [rbp-38h] BYREF

  LOBYTE(v6) = a5;
  LODWORD(v52) = a1;
  v49 = a3;
  v48 = a4;
  v47 = a6;
  v46 = a5;
  v53 = 0LL;
  v51 = strlen((const char *)a2);
  v7 = *(unsigned __int8 *)(a2 + 1);
  if ( !(_BYTE)v7 )
    return 0xFFFFFFFFLL;
  i = a2 + 1;
  v45 = a2;
  v9 = (void *)(a2 + 1);
  p_src = (void **)&v53;
  v11 = 3221227009LL;
  v12 = 0LL;
  LODWORD(v50) = v52 - 63;
  while ( 2 )
  {
    while ( (_BYTE)v7 == 91 )
    {
      if ( !dword_625918 )
      {
        src = v9;
        v20 = getenv("POSIXLY_CORRECT");
        v9 = src;
        dword_625918 = v20 == 0LL ? -1 : 1;
      }
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
        goto LABEL_26;
      v14 = *(_BYTE *)++v15;
      for ( i = v15 + 1; v14 != 93; i = v15 + 1 )
      {
        if ( !v14 )
          return 0xFFFFFFFFLL;
        v14 = *(_BYTE *)i;
        v15 = i;
LABEL_26:
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
        if ( (_BYTE)v7 == 124 && !v12 )
        {
          v16 = i - (_QWORD)v9 + 1;
          if ( (unsigned int)v50 <= 1 )
            v16 = v51;
          v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v17 - 8 > 0x1F37 )
            return 0xFFFFFFFFLL;
          v18 = alloca(v17 + 8);
          v19 = mempcpy(&v45, v9, i - (_QWORD)v9);
          v9 = (void *)(i + 1);
          *v19 = 0;
          v7 = *(unsigned __int8 *)++i;
          src = 0LL;
          *p_src = &src;
          p_src = &src;
          v12 = 0LL;
        }
        else
        {
LABEL_5:
          v7 = *(unsigned __int8 *)++i;
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
  v21 = p_src;
  v22 = v45;
  v23 = i - (_QWORD)v9 + 1;
  if ( (unsigned int)(v52 - 63) <= 1 )
    v23 = v51;
  v24 = (v23 + 15) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v24 - 8 > 0x1F37 )
    return 0xFFFFFFFFLL;
  v25 = alloca(v24 + 8);
  v26 = mempcpy(&v45, v9, i - (_QWORD)v9);
  *v21 = &src;
  *v26 = 0;
  src = 0LL;
  v51 = v53;
  if ( !v53 )
    __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_match");
  if ( *(_BYTE *)(i - 1) != 41 )
    __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_match");
  switch ( (int)v52 )
  {
    case '!':
      if ( v49 > v48 )
        return 1LL;
      v35 = v49;
      v52 = i;
      v36 = v49;
      v37 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v37 = v47;
      while ( 2 )
      {
        v38 = (_QWORD *)v51;
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
                v39 = (v47 & 5) == 5;
            }
            if ( !(unsigned int)sub_414EB0(v52, v36, v48, v39, v37) )
              return 0LL;
            break;
          }
        }
        if ( v48 >= ++v36 )
          continue;
        break;
      }
      return 1LL;
    case '*':
      if ( (unsigned int)sub_414EB0(i, v49, v48, (unsigned __int8)v6, v47) )
        goto LABEL_40;
      return 0LL;
    case '+':
LABEL_40:
      v27 = v49;
      v50 = i;
      v28 = (_QWORD *)v51;
      v29 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v29 = v47;
      v30 = v22 - 1;
      LODWORD(v51) = v47 & 1;
      v31 = v48;
      v45 = v30;
      do
      {
        if ( v27 <= v31 )
        {
          v32 = v27;
          LODWORD(v52) = v46;
          do
          {
            if ( !(unsigned int)sub_414EB0(v28 + 1, v27, v32, (unsigned int)v52, v29) )
            {
              if ( v27 == v32 )
              {
                if ( !(unsigned int)sub_414EB0(v50, v27, v31, (unsigned int)v52, v29) )
                  return 0LL;
              }
              else
              {
                v33 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v33 = (v47 & 5) == 5;
                if ( !(unsigned int)sub_414EB0(v50, v32, v31, v33, v29) )
                  return 0LL;
                v34 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v34 = (v47 & 5) == 5;
                if ( !(unsigned int)sub_414EB0(v45, v32, v31, v34, v29) )
                  return 0LL;
              }
              v28 = (_QWORD *)v53;
            }
            ++v32;
          }
          while ( v31 >= v32 );
        }
        v28 = (_QWORD *)*v28;
        v53 = (size_t)v28;
      }
      while ( v28 );
      return 1LL;
    case '?':
      v6 = (unsigned __int8)v6;
      if ( (unsigned int)sub_414EB0(i, v49, v48, (unsigned __int8)v6, v47) )
        goto LABEL_70;
      return 0LL;
    case '@':
      v6 = (unsigned __int8)v6;
LABEL_70:
      v40 = v51;
      v41 = v48;
      v42 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v42 = v47;
      break;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_match");
  }
  while ( 1 )
  {
    v43 = strcat((char *)(v40 + 8), (const char *)i);
    if ( !(unsigned int)sub_414EB0(v43, v49, v41, v6, v42) )
      break;
    v40 = *(_QWORD *)v40;
    v53 = v40;
    if ( !v40 )
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_414EB0(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v6; // r12
  unsigned __int8 *v7; // r13
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
  unsigned int i; // r13d
  __int32_t v38; // eax
  unsigned __int8 v39; // r15
  const __int32_t *v40; // rdx
  unsigned __int8 *v41; // r15
  __int64 v42; // rdx
  char v43; // al
  _BYTE *v44; // r13
  char v45; // al
  const __int32_t **v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // r13d
  unsigned __int8 *v50; // rdx
  unsigned __int8 *v51; // r13
  wctype_t v52; // r13
  wint_t v53; // eax
  __int64 v55; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v56; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v57; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v58; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v59; // [rsp+18h] [rbp-160h]
  unsigned __int8 v60; // [rsp+18h] [rbp-160h]
  char v61; // [rsp+18h] [rbp-160h]
  unsigned int v62; // [rsp+20h] [rbp-158h]
  int v63; // [rsp+28h] [rbp-150h]
  unsigned __int8 v64; // [rsp+28h] [rbp-150h]
  int v65; // [rsp+2Ch] [rbp-14Ch]
  char property[328]; // [rsp+30h] [rbp-148h] BYREF

  v6 = *a1;
  v62 = a5;
  v55 = (__int64)(a1 + 1);
  if ( !(_BYTE)v6 )
    goto LABEL_66;
  v7 = a1;
  v63 = a5 & 5;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  while ( 2 )
  {
    if ( v10 )
      LODWORD(v6) = LOBYTE((*__ctype_tolower_loc())[v6]);
    switch ( (char)v6 )
    {
      case '!':
      case '+':
      case '@':
        if ( (v62 & 0x20) == 0 )
          goto LABEL_60;
        if ( v7[1] != 40 )
          goto LABEL_60;
        result = sub_414960((unsigned __int8)v6, v55, (unsigned __int64)a2, a3, a4, v62);
        if ( (_DWORD)result == -1 )
          goto LABEL_60;
        return result;
      case '*':
        if ( (v62 & 0x20) != 0 && v7[1] == 40 )
        {
          result = sub_414960(42, v55, (unsigned __int64)a2, a3, a4, v62);
          if ( (_DWORD)result != -1 )
            return result;
        }
        if ( a2 != (unsigned __int8 *)a3 && *a2 == 46 && a4 )
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
            v29 = sub_4137F0(v28);
            v28 = v58;
            if ( v29 != v58 )
              goto LABEL_84;
            LOBYTE(v27) = v61;
          }
          if ( (_BYTE)v27 == 63 )
          {
            if ( a2 == (unsigned __int8 *)a3 || *a2 == 47 && (v62 & 1) != 0 )
              return 1LL;
            ++a2;
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
          v31 = sub_416F00(a2, -(int)v30 & 0x2F, a3 - (_QWORD)a2, v30, v27, v28);
          v32 = v64;
          v33 = (unsigned __int8 *)v31;
          v34 = v59;
          if ( !v31 )
            v33 = (unsigned __int8 *)a3;
          if ( v64 == 91
            || (v62 & 0x20) != 0
            && (unsigned __int8)(v64 - 33) <= 0x1Fu
            && (v47 = 2147484673LL, _bittest64(&v47, (unsigned int)v64 - 33))
            && *v59 == 40 )
          {
            v48 = v62 & 0xFFFFFFFB;
            if ( (v62 & 1) != 0 )
              v48 = v62;
            v49 = v48;
            if ( v33 > a2 )
            {
              do
              {
                if ( !(unsigned int)sub_414EB0(v59 - 1, a2, a3, a4, v49) )
                  return 0LL;
                ++a2;
                a4 = 0;
              }
              while ( v33 != a2 );
            }
            return 1LL;
          }
          if ( v64 != 47 )
          {
            if ( (v62 & 1) != 0 )
              goto LABEL_93;
            goto LABEL_187;
          }
          if ( (v62 & 1) == 0 )
          {
LABEL_187:
            v62 &= ~4u;
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
            v57 = v34 - 1;
            if ( v33 <= a2 )
              return 1LL;
            v36 = v32;
            for ( i = a4; ; i = 0 )
            {
              v38 = *a2;
              if ( v10 )
              {
                v39 = *a2;
                v38 = (*__ctype_tolower_loc())[v39];
              }
              if ( v38 == v36 && !(unsigned int)sub_414EB0(v57, a2, a3, i, v62) )
                break;
              if ( v33 == ++a2 )
                return 1LL;
            }
            return 0LL;
          }
          if ( a3 <= (unsigned __int64)a2 )
            return 1LL;
          while ( *a2 != 47 )
          {
            if ( (unsigned __int8 *)a3 == ++a2 )
              return 1LL;
          }
          return (unsigned int)sub_414EB0(v59, a2 + 1, a3, (v62 >> 2) & 1, v62) != 0;
        }
        else
        {
          if ( (v62 & 1) == 0 || (v62 & 8) != 0 )
            return 0LL;
          return sub_416F00(a2, 47LL, a3 - (_QWORD)a2, v30, v27, v28) != 0;
        }
      case '/':
        if ( v63 != 5 )
          goto LABEL_60;
        if ( a2 == (unsigned __int8 *)a3 || *a2 != 47 )
          return 1LL;
        v7 = (unsigned __int8 *)v55;
        a4 = 1;
        goto LABEL_65;
      case '?':
        if ( (v62 & 0x20) != 0 && v7[1] == 40 )
        {
          result = sub_414960(63, v55, (unsigned __int64)a2, a3, a4, v62);
          if ( (_DWORD)result != -1 )
            return result;
        }
        if ( a2 == (unsigned __int8 *)a3 )
          return 1LL;
        if ( *a2 != 47 )
        {
          a4 &= *a2 == 46;
          if ( !a4 )
          {
            v7 = (unsigned __int8 *)v55;
            goto LABEL_65;
          }
          return 1LL;
        }
        if ( (v62 & 1) != 0 )
          return 1LL;
        goto LABEL_64;
      case '[':
        if ( !dword_625918 )
          dword_625918 = getenv("POSIXLY_CORRECT") == 0LL ? -1 : 1;
        if ( a2 == (unsigned __int8 *)a3 )
          return 1LL;
        v14 = *a2;
        if ( (_BYTE)v14 == 46 )
        {
          if ( a4 )
            return 1LL;
        }
        else if ( (_BYTE)v14 == 47 && (v62 & 1) != 0 )
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
            v24 = *a2;
            if ( v10 )
            {
              v25 = *a2;
              v24 = (*__ctype_tolower_loc())[v25];
            }
            if ( v24 != (_DWORD)v6 )
              return 1LL;
LABEL_64:
            v7 = (unsigned __int8 *)v55;
            a4 = 0;
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
            property[v42 - 1] = v43;
            if ( v42 == 256 )
              return 1LL;
          }
          if ( v41[2] != 93 )
          {
LABEL_117:
            j = v7 + 1;
            if ( (_BYTE)v14 == 91 )
            {
LABEL_177:
              v18 = *v7;
              goto LABEL_49;
            }
            ++v7;
            v17 = 58LL;
            continue;
          }
          break;
        }
        property[v42] = 0;
        v52 = wctype(property);
        if ( !v52 )
          return 1LL;
        v53 = btowc(*a2);
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
          a4 = v9 == 0 && v18 == 92;
          if ( a4 )
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
          v50 = v7 + 2;
          v18 = v7[2];
          v51 = v7 + 257;
          while ( 1 )
          {
            if ( v18 == 58 )
            {
              if ( v50[1] == 93 )
              {
                v22 = v50 + 3;
                v23 = v50[2];
                goto LABEL_52;
              }
LABEL_47:
              v7 = j;
              goto LABEL_48;
            }
            if ( (unsigned __int8)(v18 - 97) > 0x18u )
              break;
            v18 = *++v50;
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
        ++a2;
        v55 = (__int64)(v7 + 1);
        if ( !(_BYTE)v6 )
        {
LABEL_66:
          if ( (unsigned __int8 *)a3 == a2 )
            return 0LL;
          if ( (v62 & 8) != 0 )
            return *a2 != 47;
          return 1LL;
        }
        continue;
      case '\\':
        if ( v9 )
        {
          if ( a2 == (unsigned __int8 *)a3 )
            return 1LL;
          if ( !v10 )
          {
            v12 = 92;
LABEL_11:
            v13 = *a2;
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
            if ( a2 == (unsigned __int8 *)a3 )
              return 1LL;
            v12 = v11;
            goto LABEL_11;
          }
          v46 = __ctype_tolower_loc();
          v40 = *v46;
          v12 = (*v46)[v11];
          if ( a2 == (unsigned __int8 *)a3 )
            return 1LL;
          v12 = (unsigned __int8)v12;
          v7 += 2;
        }
        v13 = v40[*a2];
LABEL_12:
        if ( v13 != v12 )
          return 1LL;
LABEL_13:
        a4 = 0;
        goto LABEL_65;
      default:
LABEL_60:
        if ( a2 != (unsigned __int8 *)a3 )
          goto LABEL_61;
        return 1LL;
    }
  }
}

__int64 __fastcall sub_4159A0(char *a1, char *a2, unsigned int a3)
{
  unsigned __int8 *v4; // rbx
  size_t v5; // rax
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
  wchar_t v17[3]; // [rsp+0h] [rbp-60h] BYREF
  unsigned int v18; // [rsp+Ch] [rbp-54h]
  char *s; // [rsp+10h] [rbp-50h] BYREF
  char *src[2]; // [rsp+18h] [rbp-48h] BYREF
  mbstate_t ps; // [rsp+28h] [rbp-38h] BYREF

  src[0] = a1;
  s = a2;
  if ( __ctype_get_mb_cur_max() == 1 )
    goto LABEL_2;
  ps = 0LL;
  v7 = mbsrtowcs(0LL, (const char **)src, 0LL, &ps);
  v8 = v7 + 1;
  if ( v7 == -1LL )
    goto LABEL_2;
  if ( !mbsinit(&ps) )
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x129u, "gnu_fnmatch");
  v9 = mbsrtowcs(0LL, (const char **)&s, 0LL, &ps);
  v10 = v9 + 1;
  if ( v9 == -1LL )
  {
LABEL_2:
    v4 = (unsigned __int8 *)s;
    v5 = strlen(s);
    return sub_414EB0((unsigned __int8 *)src[0], v4, (unsigned __int64)&v4[v5], (a3 & 4) != 0, a3);
  }
  if ( !mbsinit(&ps) )
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x12Du, "gnu_fnmatch");
  v11 = v10 + v8;
  if ( __CFADD__(v10, v8) || v11 > 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_12;
  v12 = 4 * v11;
  if ( v11 <= 0x7CF )
  {
    v13 = alloca(v12 + 8);
    mbsrtowcs(v17, (const char **)src, v8, &ps);
    if ( mbsinit(&ps) )
    {
      mbsrtowcs(&v17[v8], (const char **)&s, v10, &ps);
      return sub_413E80((wint_t *)v17, &v17[v8], (unsigned __int64)&v17[v8 - 1 + v10], (a3 & 4) != 0, a3);
    }
LABEL_16:
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x147u, "gnu_fnmatch");
  }
  v14 = (wchar_t *)malloc(v12);
  v15 = (wint_t *)v14;
  if ( !v14 )
  {
LABEL_12:
    *__errno_location() = 12;
    return 0xFFFFFFFFLL;
  }
  else
  {
    v16 = &v14[v8];
    mbsrtowcs(v14, (const char **)src, v8, &ps);
    if ( !mbsinit(&ps) )
      goto LABEL_16;
    mbsrtowcs(v16, (const char **)&s, v10, &ps);
    v18 = sub_413E80(v15, v16, (unsigned __int64)&v16[v10 - 1], (a3 & 4) != 0, a3);
    free(v15);
    return v18;
  }
}

char *__fastcall sub_415BE0(char *a1, size_t a2)
{
  char *v3; // rbx
  __dev_t st_dev; // r15
  __ino_t st_ino; // r14
  DIR *v6; // rbp
  int v7; // r15d
  int *v8; // r12
  int v9; // eax
  bool v10; // r13
  struct dirent *v11; // rax
  const char *d_name; // rbx
  __int64 v13; // r13
  size_t v14; // r14
  char *v15; // rdx
  char *v16; // rax
  size_t v17; // rbx
  void *v18; // rax
  int v19; // ebx
  __dev_t v20; // [rsp+8h] [rbp-120h]
  size_t v21; // [rsp+8h] [rbp-120h]
  __dev_t v22; // [rsp+10h] [rbp-118h]
  char *ptr; // [rsp+18h] [rbp-110h]
  void *v24; // [rsp+20h] [rbp-108h]
  size_t size; // [rsp+28h] [rbp-100h]
  bool v26; // [rsp+3Fh] [rbp-E9h]
  char *src; // [rsp+40h] [rbp-E8h]
  char *srca; // [rsp+40h] [rbp-E8h]
  __dev_t v29; // [rsp+48h] [rbp-E0h]
  __ino_t v30; // [rsp+50h] [rbp-D8h]
  __ino_t v31; // [rsp+58h] [rbp-D0h]
  struct stat stat_buf; // [rsp+60h] [rbp-C8h] BYREF

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
    || (st_dev = stat_buf.st_dev, st_ino = stat_buf.st_ino, v20 = stat_buf.st_dev, __lxstat(1, "/", &stat_buf) < 0) )
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
  v26 = st_ino != stat_buf.st_ino || st_dev != stat_buf.st_dev;
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
          if ( v22 != v20 || v11->d_ino == st_ino )
          {
            v10 = v22 != v20 || v11->d_ino == st_ino;
            break;
          }
        }
      }
      d_name = v11->d_name;
    }
    while ( __fxstatat(1, v7, v11->d_name, &stat_buf, 256)
         || (stat_buf.st_mode & 0xF000) != 0x4000
         || stat_buf.st_dev != v20
         || stat_buf.st_ino != st_ino );
    v13 = src - ptr;
    v14 = strlen(d_name);
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
    src = (char *)memcpy(&src[-v14], d_name, v14) - 1;
    st_ino = v31;
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
    v24 = realloc(ptr, v17);
  v18 = v24;
  if ( !v24 )
    return ptr;
  return (char *)v18;
}

__int64 __fastcall sub_4160B0(__int64 a1, int *a2)
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

__int64 __fastcall sub_416190(
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

__int64 __fastcall sub_4167B0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_4160B0((__int64)a2, a7);
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
        sub_4160B0((__int64)a2, a7);
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
            return (unsigned int)sub_416190(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_416190(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_416190(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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

__int64 __fastcall sub_416D80(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
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

__int64 __fastcall sub_416DE0(int a1, __int64 *a2, const char *a3)
{
  return sub_416D80(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_416E00(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_416D80(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_416E20(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4167B0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_416E40(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_416D80(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_416E60(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4167B0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_416E80(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  const char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch] BYREF

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
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

_BYTE *__fastcall sub_416F00(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

void __noreturn sub_417010()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  __fprintf_chk(stderr, 1LL, "%s\n", v0);
  exit(status);
}

__int64 __fastcall sub_417050(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 56);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    return v2(*(_QWORD *)(a1 + 72));
  else
    return v2(a2);
}

__int64 __fastcall sub_417070(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 64);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    return v2(*(_QWORD *)(a1 + 72));
  else
    return v2(a2);
}

__int64 __fastcall sub_417090(__int64 a1, __int64 a2, __int64 a3)
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
  v5 = (_QWORD *)sub_417050(a1, a2);
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
  return sub_417090(a1, a2, a3);
}

__int64 __fastcall obstack_begin_1(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_BYTE *)(a1 + 80) |= 1u;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  return sub_417090(a1, a2, a3);
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
  if ( (*(_BYTE *)(a1 + 80) & 2) == 0 )
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
      sub_417070((__int64)obstack, (__int64)chunk);
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
      sub_417070((__int64)obstack, (__int64)chunk);
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
    return 1;
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
  int v2; // r13d
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

_QWORD *__fastcall sub_417410(const char *src)
{
  size_t v2; // rax
  __int64 v3; // rdi
  size_t v4; // rbp
  char *v5; // rax
  _BYTE *v6; // rbx
  _QWORD *result; // rax

  if ( src )
  {
    v2 = strlen(src);
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
      memcpy(v5 + 9, src, v4);
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
  const char *v2; // r12
  __int64 *v3; // rbp
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rax
  size_t v8; // r15
  char *v9; // rax
  _QWORD *v10; // rax

  v2 = *(const char **)(a2 + 48);
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
  const char *v2; // rbp
  _QWORD *v3; // rbx
  int *v5; // rbp
  int v6; // r12d

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
  _QWORD *v4; // r13

  if ( !a1 )
    return gmtime_r(a2, a3);
  v4 = (_QWORD *)sub_417620((__int64)a1);
  if ( v4 )
  {
    if ( localtime_r(a2, a3) && (unsigned __int8)sub_4174A0(a1, (unsigned __int64)a3) )
    {
      if ( v4 == (_QWORD *)1 || (unsigned __int8)sub_4173C0(v4) )
        return a3;
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
  int v4; // eax
  time_t timer; // [rsp+8h] [rbp-60h] BYREF
  struct tm tp; // [rsp+10h] [rbp-58h] BYREF

  if ( !a1 )
    return sub_4178C0(a2);
  v2 = (_QWORD *)sub_417620((__int64)a1);
  if ( !v2 )
    return -1LL;
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
    return timer;
  else
    return -1LL;
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
    return 0xFFFFFFFFLL;
  }
  if ( !(_DWORD)result )
    return result;
  if ( v1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)-(*__errno_location() != 9);
}

_BYTE *__fastcall sub_417940(_BYTE *a1)
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

int __fastcall sub_417F10(FILE *stream)
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
  if ( !(unsigned int)sub_417F90(stream) )
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

int __fastcall sub_417F90(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_417FD0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_417FD0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_418030(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r10d
  int v11; // r12d

  v10 = (a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (__PAIR64__((a6 >> 2) + 475, a6 & 3) - 1) >> 32;
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

unsigned __int64 __fastcall sub_418150(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int *a7)
{
  __int64 v8; // rax
  bool v9; // of
  unsigned __int64 result; // rax

  if ( !a7
    || (v8 = sub_418030(a1, a2, a3, a4, a5, a7[5], a7[7], a7[2], a7[1], *a7),
        v9 = __OFADD__(a6, v8),
        result = a6 + v8,
        v9) )
  {
    if ( a6 < 0 )
    {
      if ( a6 >= (__int64)0x8000000000000002LL )
        return 0x8000000000000000LL;
      else
        return a6 + 1;
    }
    else
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      if ( a6 > 0x7FFFFFFFFFFFFFFDLL )
        return a6 - 1;
    }
  }
  return result;
}

__int64 __fastcall sub_4181F0(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[0] = *a2;
  result = a1(v9, a3);
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
        v9[0] = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        result = a1(v9, a3);
        if ( !result )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !result && v6 )
      {
        v9[0] = v6;
        return a1(v9, a3);
      }
    }
  }
  return result;
}

unsigned __int64 __fastcall sub_4182B0(int *a1, __int64 (__fastcall *a2)(__int64 *, __int64), _QWORD *a3)
{
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edi
  _BOOL4 v7; // edx
  __int64 v8; // rbx
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  _BOOL4 v14; // r12d
  __int64 v15; // r14
  int *v16; // rax
  __int64 v17; // r15
  unsigned __int64 result; // rax
  bool v19; // dl
  __m128i *v20; // r14
  __int32 v21; // esi
  __int64 v22; // rdx
  bool v23; // of
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rdx
  int i; // r13d
  int v29; // r12d
  int v30; // r15d
  int v31; // [rsp+Ch] [rbp-10Ch]
  int v33; // [rsp+18h] [rbp-100h]
  int v34; // [rsp+1Ch] [rbp-FCh]
  int v35; // [rsp+28h] [rbp-F0h]
  __int64 v37; // [rsp+38h] [rbp-E0h]
  int v38; // [rsp+40h] [rbp-D8h]
  int v39; // [rsp+44h] [rbp-D4h]
  int *v40; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-C0h] BYREF
  __m128i v43; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v44; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v45; // [rsp+80h] [rbp-98h] BYREF
  __int64 v46; // [rsp+90h] [rbp-88h]
  __int64 v47[4]; // [rsp+A0h] [rbp-78h] BYREF
  int v48; // [rsp+C0h] [rbp-58h]

  v4 = a1[3];
  v38 = *a1;
  v31 = a1[1];
  v5 = a1[2];
  v6 = a1[4];
  v33 = v5;
  v35 = a1[8];
  v7 = 0;
  v8 = a1[5] + (__int64)(int)(v6 / 12 - ((unsigned int)(v6 % 12) >> 31));
  if ( (v8 & 3) == 0 )
  {
    v7 = 1;
    if ( v8 == 100 * (v8 / 100) )
      v7 = ((v8 / 100) & 3) == 1;
  }
  v9 = 59;
  v10 = 6;
  v11 = (unsigned __int16)word_41FD60[13 * v7 + (((v6 % 12) >> 31) & 0xC) + v6 % 12] - 1 + v4;
  if ( v38 <= 59 )
    v9 = v38;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v34 = v12;
  v39 = -(int)*a3;
  v13 = sub_418030(v8, v11, v33, v31, v12, 70, 0, 0, 0, v39);
  v37 = v13;
  v41 = v13;
  v40 = a1;
  v14 = 0;
  v15 = v13;
  while ( 1 )
  {
    v16 = (int *)sub_4181F0(a2, (__int64 *)&v41, (__int64)&v43);
    v17 = v41;
    result = sub_418150(v8, v11, v33, v31, v34, v41, v16);
    if ( v17 == result )
      break;
    if ( v17 == v13 && v17 != v15 )
    {
      if ( v45.m128i_i32[0] < 0 )
        goto LABEL_17;
      v19 = v45.m128i_i32[0] != 0;
      if ( v35 < 0 )
      {
        if ( (unsigned __int8)v19 >= v14 )
        {
LABEL_17:
          v20 = (__m128i *)v40;
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
    v14 = v45.m128i_i32[0] != 0;
  }
  v20 = (__m128i *)v40;
  if ( (v35 == 0) != (v45.m128i_i32[0] == 0) && v35 >= 0 && v45.m128i_i32[0] >= 0 )
  {
    for ( i = 601200; i != 269337600; i += 601200 )
    {
      v29 = 2;
      v30 = -i;
      v42 = result + -i;
      if ( !__OFADD__(result, -i) )
      {
LABEL_34:
        sub_4181F0(a2, &v42, (__int64)v47);
        if ( (v35 == 0) == (v48 == 0) || v48 < 0 )
        {
          v41 = sub_418150(v8, v11, v33, v31, v34, v42, (int *)v47);
          sub_4181F0(a2, (__int64 *)&v41, (__int64)&v43);
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
          goto LABEL_34;
      }
    }
  }
LABEL_18:
  v21 = v43.m128i_i32[0];
  *a3 = result - (v37 + v39);
  if ( v21 == v38 )
    goto LABEL_22;
  v22 = ((v38 <= 0) & (unsigned __int8)(v21 == 60)) - (__int64)v34 + v38;
  v23 = __OFADD__(v22, result);
  v24 = v22 + result;
  v41 = v24;
  if ( !v23 )
  {
    v47[0] = v24;
    if ( a2(v47, (__int64)&v43) )
    {
      result = v41;
LABEL_22:
      v25 = _mm_load_si128(&v44);
      v26 = _mm_load_si128(&v45);
      v27 = v46;
      *v20 = _mm_load_si128(&v43);
      v20[1] = v25;
      v20[2] = v26;
      v20[3].m128i_i64[0] = v27;
      return result;
    }
  }
  return -1LL;
}

unsigned __int64 __fastcall sub_4186F0(int *a1)
{
  tzset();
  return sub_4182B0(a1, (__int64 (__fastcall *)(__int64 *, __int64))localtime_r, &qword_625968);
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
  if ( qword_6243E8 )
    v1 = (void *)qword_6243E8[0];
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_418798(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_623E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
