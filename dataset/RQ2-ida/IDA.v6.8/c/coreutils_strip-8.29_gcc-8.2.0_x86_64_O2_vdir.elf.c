__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  unsigned int v3; // ebp@1
  char **v4; // rbx@1
  char *v5; // rax@4
  char *v6; // r12@4
  int v7; // eax@5
  char *v8; // rax@7
  char *v9; // r12@7
  char *v10; // rax@12
  char *v11; // r12@12
  char v12; // r15@15
  char v13; // r14@15
  const char *v14; // r12@15
  int v15; // eax@16
  int v16; // er13@23
  bool v17; // al@26
  __int64 v18; // rax@29
  __int64 v19; // rax@30
  __int64 v20; // rax@33
  __int64 v21; // rax@34
  __int64 v22; // rax@36
  int v23; // edx@36
  __int64 v24; // rax@37
  __int64 v25; // rax@39
  __int64 v26; // rdx@39
  __int64 v27; // rax@42
  __int64 v28; // rax@46
  int v29; // eax@46
  unsigned int v30; // eax@49
  char **v31; // rax@52
  char *v32; // rax@52
  char *v33; // ST18_8@84
  __int64 v34; // rax@84
  __int64 v35; // rax@90
  __int64 v36; // rdx@90
  __int64 v37; // rax@90
  __int64 v38; // rdx@90
  __int64 v39; // rax@96
  __int64 v40; // r12@96
  char *v41; // rax@96
  __int64 v42; // rax@98
  __int64 v43; // r12@98
  char *v44; // rax@98
  __int64 v45; // rax@100
  __int64 v46; // rax@103
  __int64 v47; // rsi@103
  char *i; // r13@103
  __int64 v49; // rax@105
  const char *v50; // rsi@105
  __int64 v51; // r12@116
  __int64 v52; // rax@119
  char *v53; // rdi@121
  char v54; // al@123
  __int64 v55; // rax@127
  signed int v56; // er13@127
  char *v57; // rdi@128
  void *v58; // rbx@130
  __int64 v59; // rdx@132
  __int64 v60; // rsi@132
  void *v61; // rdi@135
  __int64 v62; // rdx@137
  __int64 v63; // rcx@138
  __int64 v64; // rdx@138
  void *v65; // rax@138
  __int64 v66; // rbx@148
  __int64 v67; // rax@149
  __int64 result; // rax@151
  __int64 v69; // rax@161
  __int64 v70; // r12@161
  char *v71; // rax@161
  char *v72; // r13@162
  int k; // ebx@169
  signed int v74; // eax@184
  char *v75; // rax@188
  void *v76; // rax@190
  __int64 v77; // rax@191
  char v78; // dl@191
  __int64 v79; // r13@196
  const char *v80; // rsi@196
  signed __int64 v81; // rcx@199
  __int64 v82; // rax@200
  __int64 v83; // r13@200
  char *v84; // rax@200
  char *v85; // rax@201
  __int64 j; // rdi@201
  __int64 v87; // r13@202
  char *v88; // rax@218
  __int64 v89; // rax@221
  signed __int64 v90; // rdx@222
  __int64 v91; // rcx@224
  char *v92; // rax@232
  int v93; // eax@147
  signed __int64 v94; // rax@236
  char *v95; // rax@242
  char *v96; // rax@245
  char *v97; // rax@247
  char *v98; // r14@247
  const char *v99; // r15@249
  __int64 v100; // rax@262
  __int64 v101; // r13@262
  __int64 v102; // rax@262
  char *v103; // rax@263
  FILE *v104; // rbx@268
  char *v105; // rax@268
  FILE *v106; // rsi@268
  char **v107; // rbx@268
  const char *v108; // rcx@268
  FILE *v109; // rbx@270
  char *v110; // rax@270
  const char *v111; // r12@272
  char *v112; // rax@272
  char *v113; // r13@272
  char *v114; // r14@273
  char *v115; // rax@112
  __int64 v116; // rax@284
  __int64 v117; // rbx@284
  char *v118; // rax@284
  char s1[2]; // [sp+15h] [bp-53h]@190
  char *v120; // [sp+18h] [bp-50h]@188
  __int64 v121; // [sp+20h] [bp-48h]@9
  __int64 v122; // [sp+28h] [bp-40h]@138

  v3 = a1;
  v4 = a2;
  sub_410670(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  status = 2;
  sub_418780(
    sub_40B710,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
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
      LODWORD(v39) = sub_412290(v6);
      v40 = v39;
      v41 = dcgettext(0LL, "ignoring invalid value of environment variable QUOTING_STYLE: %s", 5);
      error(0, 0, v41, v40);
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
    LODWORD(v42) = sub_412290(v9);
    v43 = v42;
    v44 = dcgettext(0LL, "ignoring invalid width in environment variable COLUMNS: %s", 5);
    error(0, 0, v44, v43);
  }
  if ( ioctl(1, 0x5413uLL, &v121) != -1 && WORD1(v121) )
    qword_625670 = WORD1(v121);
  v10 = getenv("TABSIZE");
  qword_625680 = 8LL;
  v11 = v10;
  if ( v10 )
  {
    if ( (unsigned int)sub_412DF0(v10) )
    {
      LODWORD(v69) = sub_412290(v11);
      v70 = v69;
      v71 = dcgettext(0LL, "ignoring invalid tab size in environment variable TABSIZE: %s", 5);
      error(0, 0, v71, v70);
    }
    else
    {
      qword_625680 = v121;
    }
  }
  v12 = 0;
  v13 = 0;
  v14 = 0LL;
  while ( 2 )
  {
    LODWORD(v121) = -1;
    v15 = sub_416E00(a1, v4, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", &off_419900, &v121);
    if ( v15 != -1 )
    {
      switch ( v15 + 131 )
      {
        case 241:
          byte_6256ED = 1;
          goto LABEL_21;
        case 239:
LABEL_21:
          dword_6256F8 = 0;
          continue;
        case 275:
          v14 = nptr;
          continue;
        case 274:
          LODWORD(v18) = sub_40AFB0("--time", nptr, off_419800, dword_4197D0, 4LL, off_6245B8);
          dword_6256F4 = dword_4197D0[v18];
          continue;
        case 273:
          v13 = 1;
          LODWORD(v19) = sub_40AFB0("--sort", nptr, &off_419860, dword_419830, 4LL, off_6245B8);
          dword_6256F0 = dword_419830[v19];
          continue;
        case 272:
          dword_6256E8 = 144;
          dword_6256DC = 144;
          qword_6256E0 = 1LL;
          qword_6245A0 = 1LL;
          continue;
        case 271:
          byte_625698 = 0;
          continue;
        case 270:
          LODWORD(v20) = sub_40AFB0("--quoting-style", nptr, off_41EA00, dword_41E9C0, 4LL, off_6245B8);
          sub_411C30(0LL, (unsigned int)dword_41E9C0[v20]);
          continue;
        case 269:
          LODWORD(v21) = sub_40AFB0("--indicator-style", nptr, off_419F60, dword_419F50, 4LL, off_6245B8);
          dword_6256D4 = dword_419F50[v21];
          continue;
        case 268:
          if ( nptr
            && (LODWORD(v22) = sub_40AFB0("--hyperlink", nptr, off_419780, dword_419740, 4LL, off_6245B8),
                v23 = dword_419740[v22],
                v23 != 1) )
          {
            LOBYTE(v24) = 0;
            if ( v23 == 2 )
              v24 = isatty(1) != 0;
          }
          else
          {
            LOBYTE(v24) = 1;
          }
          byte_6256D1 = v24 & 1;
          continue;
        case 267:
          LODWORD(v25) = sub_412980(16LL);
          *(_QWORD *)v25 = nptr;
          v26 = qword_6256A0;
          qword_6256A0 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          continue;
        case 266:
          byte_6256B4 = 1;
          continue;
        case 265:
          dword_6256F8 = 0;
          v14 = "full-iso";
          continue;
        case 264:
          LODWORD(v27) = sub_40AFB0("--format", nptr, off_4198C0, dword_419890, 4LL, off_6245B8);
          dword_6256F8 = dword_419890[v27];
          continue;
        case 263:
          dword_6256D4 = 2;
          continue;
        case 262:
          dword_6256B8 = 4;
          continue;
        case 261:
          if ( nptr
            && (LODWORD(v28) = sub_40AFB0("--color", nptr, off_419780, dword_419740, 4LL, off_6245B8),
                v29 = dword_419740[v28],
                v29 != 1)
            && (v29 != 2 || !isatty(1)) )
          {
            byte_6256D2 = 0;
          }
          else
          {
            byte_6256D2 = 1;
            qword_625680 = 0LL;
          }
          continue;
        case 260:
          v30 = sub_40DFA0(nptr);
          if ( v30 )
            sub_413220(v30, (unsigned int)v121, 0LL, &off_419900, nptr);
          dword_6256DC = dword_6256E8;
          qword_6245A0 = qword_6256E0;
          continue;
        case 250:
          if ( (unsigned __int8)sub_404B40(nptr) )
            continue;
          LODWORD(v31) = sub_412290(nptr);
          v4 = v31;
          v32 = dcgettext(0LL, "invalid line width", 5);
          error(2, 0, "%s: %s", v32, v4);
          goto LABEL_53;
        case 249:
LABEL_53:
          dword_6256F0 = 3;
          v13 = 1;
          continue;
        case 248:
          dword_6256F4 = 2;
          continue;
        case 247:
          dword_6256F0 = 4;
          v13 = 1;
          continue;
        case 259:
          byte_6256EE = 1;
          continue;
        case 251:
          dword_6256F8 = 3;
          continue;
        case 246:
          byte_6256EC = 1;
          continue;
        case 245:
          byte_6256EF = 1;
          continue;
        case 244:
          byte_625698 = 1;
          continue;
        case 243:
          dword_6256D4 = 1;
          continue;
        case 242:
          dword_6256F8 = 0;
          byte_6245A8 = 0;
          continue;
        case 240:
          dword_6256F8 = 4;
          continue;
        case 238:
          v12 = 1;
          continue;
        case 236:
          byte_6256BC = 1;
          continue;
        case 235:
          dword_6256E8 = 176;
          dword_6256DC = 176;
          qword_6256E0 = 1LL;
          qword_6245A0 = 1LL;
          continue;
        case 234:
          dword_6256F8 = 0;
          byte_6245A9 = 0;
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
        case 231:
          byte_6256B5 = 1;
          continue;
        case 230:
          dword_6256F4 = 1;
          continue;
        case 229:
          sub_411C30(0LL, 7LL);
          continue;
        case 228:
          dword_6256B0 = 2;
          continue;
        case 221:
          byte_625725 = 1;
          continue;
        case 219:
          dword_6256F0 = 1;
          v13 = 1;
          continue;
        case 216:
          dword_6256F0 = -1;
          v13 = 1;
          continue;
        case 215:
          dcgettext(0LL, "invalid tab size", 5);
          qword_625680 = sub_412C10((_DWORD)nptr);
          continue;
        case 214:
          dword_6256F0 = 2;
          v13 = 1;
          continue;
        case 213:
          byte_6256B6 = 1;
          continue;
        case 212:
          sub_411C30(0LL, 5LL);
          continue;
        case 209:
          sub_411C30(0LL, 0LL);
          continue;
        case 207:
          dword_6256B8 = 5;
          continue;
        case 204:
          v33 = nptr;
          LODWORD(v34) = sub_412980(16LL);
          *(_QWORD *)v34 = v33;
          *(_QWORD *)(v34 + 8) = qword_6256A8;
          qword_6256A8 = v34;
          continue;
        case 203:
          dword_6256B8 = 3;
          continue;
        case 202:
          byte_6245A8 = 0;
          continue;
        case 201:
          dword_6256D4 = 3;
          continue;
        case 199:
          byte_6256D8 = 1;
          continue;
        case 198:
          dword_6256F8 = 2;
          continue;
        case 197:
          LODWORD(v35) = sub_412980(16LL);
          v36 = qword_6256A8;
          *(_QWORD *)v35 = "*~";
          *(_QWORD *)(v35 + 8) = v36;
          qword_6256A8 = v35;
          LODWORD(v37) = sub_412980(16LL);
          v38 = qword_6256A8;
          *(_QWORD *)v37 = ".*~";
          *(_QWORD *)(v37 + 8) = v38;
          qword_6256A8 = v37;
          continue;
        case 196:
          if ( !dword_6256B0 )
            dword_6256B0 = 1;
          continue;
        case 180:
          dword_6256F8 = dword_6256F8 != 0;
          continue;
        case 0:
          sub_412840((char)stdout);
          exit(0);
          return result;
        case 1:
          sub_40A530(0);
          return result;
        default:
          break;
      }
LABEL_271:
      sub_40A530(2);
    }
    break;
  }
  if ( !qword_6256E0 )
  {
    v72 = getenv("LS_BLOCK_SIZE");
    sub_40DFA0(v72);
    if ( v72 || getenv("BLOCK_SIZE") )
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
  LODWORD(v45) = sub_411BE0(0LL);
  qword_625690 = v45;
  if ( v16 == 7 )
    sub_411C40(v45, 32LL, 1LL);
  if ( (unsigned int)dword_6256D4 > 1 )
  {
    v46 = (unsigned int)(dword_6256D4 - 2);
    v47 = (unsigned int)byte_41B297[v46];
    for ( i = &byte_41B297[v46]; *i; v47 = (unsigned int)*i )
    {
      ++i;
      sub_411C40(qword_625690, v47, 1LL);
    }
  }
  LODWORD(v49) = sub_411BE0(0LL);
  v50 = (const char *)58;
  qword_625688 = v49;
  sub_411C40(v49, 58LL, 1LL);
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
  if ( !v14 )
  {
    v115 = getenv("TIME_STYLE");
    v14 = v115;
    if ( !v115 )
    {
      v14 = "locale";
LABEL_236:
      v50 = (const char *)off_419FA0;
      LODWORD(v94) = sub_40ACF0(v14, off_419FA0, &unk_419F90, 4LL);
      if ( v94 < 0 )
      {
        sub_40AE10("time style", v14, v94);
        v104 = stderr;
        v105 = dcgettext(0LL, "Valid arguments are:\n", 5);
        v106 = v104;
        v107 = off_419FA0;
        fputs_unlocked(v105, v106);
        v108 = "full-iso";
        do
        {
          ++v107;
          __fprintf_chk(stderr, 1LL, "  - [posix-]%s\n", v108);
          v108 = *v107;
        }
        while ( *v107 );
        v109 = stderr;
        v110 = dcgettext(0LL, "  - +FORMAT (e.g., +%H:%M) for a 'date'-style format\n", 5);
        fputs_unlocked(v110, v109);
        goto LABEL_271;
      }
      if ( v94 == 1 )
      {
        off_624418 = (char *)&unk_41B30E;
        off_624410 = (char *)&unk_41B30E;
      }
      else if ( v94 <= 1 )
      {
        if ( !v94 )
        {
          off_624418 = "%Y-%m-%d %H:%M:%S.%N %z";
          off_624410 = "%Y-%m-%d %H:%M:%S.%N %z";
        }
      }
      else if ( v94 == 2 )
      {
        off_624410 = "%Y-%m-%d ";
        off_624418 = "%m-%d %H:%M";
      }
      else if ( v94 == 3 && (unsigned __int8)sub_40C190(2LL, off_419FA0) )
      {
        v95 = dcgettext(0LL, off_624410, 2);
        v50 = off_624418;
        off_624410 = v95;
        off_624418 = dcgettext(0LL, off_624418, 2);
      }
      goto LABEL_243;
    }
  }
  while ( 1 )
  {
    v50 = "posix-";
    if ( strncmp(v14, "posix-", 6uLL) )
      break;
    if ( !(unsigned __int8)sub_40C190(2LL, "posix-") )
      goto LABEL_116;
    v14 += 6;
  }
  if ( *v14 != 43 )
    goto LABEL_236;
  v111 = v14 + 1;
  v50 = (const char *)10;
  v112 = strchr(v111, 10);
  v113 = v112;
  if ( v112 )
  {
    v114 = v112 + 1;
    v50 = (const char *)10;
    if ( strchr(v112 + 1, 10) )
    {
      LODWORD(v116) = sub_412290(v111);
      v117 = v116;
      v118 = dcgettext(0LL, "invalid time style format %s", 5);
      error(2, 0, v118, v117);
LABEL_285:
      __assert_fail("found", "src/ls.c", 0x638u, "main");
    }
    *v113 = 0;
  }
  else
  {
    v114 = (char *)v111;
  }
  off_624410 = (char *)v111;
  off_624418 = v114;
LABEL_243:
  sub_404BB0();
LABEL_116:
  v51 = dword_62463C;
  if ( byte_6256D2 )
  {
    v75 = getenv("LS_COLORS");
    v120 = v75;
    if ( v75 && *v75 )
    {
      strcpy(s1, "??");
      LODWORD(v76) = sub_412BB0(v75);
      qword_6256C0 = v76;
      v121 = (__int64)v76;
      while ( 1 )
      {
LABEL_191:
        while ( 1 )
        {
          v77 = (__int64)v120;
          v78 = *v120;
          if ( *v120 != 42 )
            break;
          LODWORD(v100) = sub_412980(40LL);
          v101 = v100;
          v102 = qword_6256C8;
          ++v120;
          qword_6256C8 = v101;
          *(_QWORD *)(v101 + 32) = v102;
          *(_QWORD *)(v101 + 8) = v121;
          if ( (unsigned __int8)sub_404860(&v121, &v120, 1LL, v101) )
          {
            v103 = v120++;
            if ( *v103 == 61 )
            {
              v50 = (const char *)&v120;
              *(_QWORD *)(v101 + 24) = v121;
              if ( (unsigned __int8)sub_404860(&v121, &v120, 0LL, v101 + 16) )
                continue;
            }
          }
          goto LABEL_201;
        }
        if ( v78 != 58 )
          break;
        ++v120;
      }
      if ( !v78 )
        goto LABEL_205;
      ++v120;
      s1[0] = *(_BYTE *)v77;
      if ( *(_BYTE *)(v77 + 1) )
      {
        v120 = (char *)(v77 + 2);
        s1[1] = *(_BYTE *)(v77 + 1);
        v120 = (char *)(v77 + 3);
        if ( *(_BYTE *)(v77 + 2) == 61 )
        {
          v79 = 0LL;
          v80 = "lc";
          while ( strcmp(s1, v80) )
          {
            v80 = (&off_419E80)[8 * ++v79];
            if ( !v80 )
              goto LABEL_200;
          }
          v50 = (const char *)&v120;
          v81 = 16LL * (signed int)v79 + 6439968;
          *(_QWORD *)(v81 + 8) = v121;
          if ( (unsigned __int8)sub_404860(&v121, &v120, 0LL, v81) )
            goto LABEL_191;
LABEL_200:
          LODWORD(v82) = sub_412290(s1);
          v83 = v82;
          v84 = dcgettext(0LL, "unrecognized prefix: %s", 5);
          error(0, 0, v84, v83);
        }
      }
LABEL_201:
      v85 = dcgettext(0LL, "unparsable value for LS_COLORS environment variable", 5);
      v50 = 0LL;
      error(0, 0, v85);
      free(qword_6256C0);
      for ( j = qword_6256C8; j; j = v87 )
      {
        v87 = *(_QWORD *)(j + 32);
        free((void *)j);
      }
      byte_6256D2 = 0;
LABEL_205:
      if ( qword_624490 == 6 )
      {
        v50 = "target";
        if ( !strncmp(off_624498, "target", 6uLL) )
          byte_625750 = 1;
      }
    }
    else
    {
      v96 = getenv("COLORTERM");
      if ( !v96 || !*v96 )
      {
        v97 = getenv("TERM");
        v98 = v97;
        if ( v97 && *v97 )
        {
          v99 = "# Configuration file for dircolors, a utility to help you set the";
          while ( 1 )
          {
            v50 = "TERM ";
            if ( !strncmp(v99, "TERM ", 5uLL) )
            {
              v50 = v98;
              if ( !sub_4159A0(v99 + 5, v98, 0LL) )
                break;
            }
            v99 += strlen(v99) + 1;
            if ( (unsigned __int64)(v99 - "# Configuration file for dircolors, a utility to help you set the") > 0x104C )
              goto LABEL_267;
          }
        }
        else
        {
LABEL_267:
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
    v74 = 2;
    if ( !byte_6256B5 && dword_6256D4 != 3 )
      v74 = (unsigned int)dword_6256F8 < 1 ? 2 : 4;
    dword_6256B8 = v74;
  }
  if ( byte_6256B6 )
  {
    LODWORD(v52) = sub_40CA80(30LL, 0LL, sub_404800, sub_404810, j__free);
    qword_625788 = v52;
    if ( !v52 )
      sub_412BD0();
    v50 = 0LL;
    obstack_begin(&unk_6254A0, 0LL, 0LL, malloc, free);
  }
  v53 = getenv("TZ");
  qword_625668 = sub_417410(v53);
  if ( !((dword_6256F0 - 2) & 0xFFFFFFFD) || !dword_6256F8 || byte_625725 || byte_6256EC )
  {
    byte_625661 = 1;
    v54 = 0;
  }
  else
  {
    byte_625661 = 0;
    v54 = 1;
    if ( !byte_6256B6 && !byte_6256D2 && !dword_6256D4 )
      v54 = byte_6256B4;
  }
  byte_625660 = v54 & 1;
  if ( byte_6256D8 )
  {
    obstack_begin(&unk_625560, 0LL, 0LL, malloc, free);
    v50 = 0LL;
    v53 = (char *)&unk_625500;
    obstack_begin(&unk_625500, 0LL, 0LL, malloc, free);
  }
  if ( byte_6256D1 )
  {
    v89 = 0LL;
    while ( 1 )
    {
      v91 = (unsigned int)v89;
      if ( (signed int)v89 <= 90 )
      {
        v90 = 1LL;
        if ( (signed int)v89 >= 65 )
          goto LABEL_227;
        v50 = (const char *)(unsigned int)(v89 - 48);
        if ( (unsigned int)v50 <= 9 )
          goto LABEL_227;
        v91 = (unsigned int)(v89 - 45);
        if ( (unsigned int)v91 <= 1 )
        {
LABEL_231:
          v90 = 1LL;
          goto LABEL_227;
        }
      }
      else
      {
        v50 = (const char *)(unsigned int)(v89 - 97);
        v90 = 1LL;
        if ( (unsigned int)v50 <= 0x19 )
          goto LABEL_227;
        v91 = (unsigned int)(v89 - 45);
        if ( (unsigned int)v91 <= 1 )
          goto LABEL_231;
      }
      if ( (_DWORD)v89 == 126 )
        goto LABEL_231;
      LOBYTE(v90) = (_DWORD)v89 == 95;
LABEL_227:
      byte_6253A0[v89] |= v90;
      if ( ++v89 == 256 )
      {
        LODWORD(v92) = sub_412D40(v53, v50, v90, v91);
        if ( !v92 )
          v92 = "";
        qword_625748 = (__int64)v92;
        break;
      }
    }
  }
  qword_625778 = 100LL;
  LODWORD(v55) = sub_412980(20000LL);
  v56 = v3 - v51;
  qword_625770 = 0LL;
  qword_625780 = v55;
  sub_4084B0();
  if ( (signed int)(v3 - v51) <= 0 )
  {
    if ( byte_6256B5 )
      sub_408580(".", 3LL, 1LL, "");
    else
      sub_404D90(".", 0LL, 1LL);
    if ( !qword_625770 )
      goto LABEL_158;
    goto LABEL_214;
  }
  do
  {
    v57 = v4[v51++];
    sub_408580(v57, 0LL, 1LL, "");
  }
  while ( (signed int)v3 > (signed int)v51 );
  if ( qword_625770 )
  {
LABEL_214:
    sub_404F40();
    if ( !byte_6256B5 )
      sub_405140(0LL, 1LL);
    if ( qword_625770 )
    {
      sub_407CA0();
      if ( ptr )
      {
        v88 = stdout->_IO_write_ptr;
        if ( stdout->_IO_write_end <= v88 )
        {
          __overflow(stdout, 10);
        }
        else
        {
          stdout->_IO_write_ptr = v88 + 1;
          *v88 = 10;
        }
        ++qword_6255B8;
        v58 = ptr;
        goto LABEL_134;
      }
      goto LABEL_144;
    }
  }
  v58 = ptr;
  if ( v56 > 1 )
    goto LABEL_134;
LABEL_158:
  v58 = ptr;
  if ( ptr )
  {
    if ( !*((_QWORD *)ptr + 3) )
      byte_625678 = 0;
LABEL_134:
    while ( v58 )
    {
      v61 = *(void **)v58;
      ptr = (void *)*((_QWORD *)v58 + 3);
      if ( !qword_625788 || v61 )
      {
        v59 = *((_BYTE *)v58 + 16);
        v60 = *((_QWORD *)v58 + 1);
        sub_4092A0(v61);
        free(*(void **)v58);
        free(*((void **)v58 + 1));
        free(v58);
        byte_625678 = 1;
      }
      else
      {
        v62 = qword_6254B8;
        if ( (unsigned __int64)(qword_6254B8 - qword_6254B0) <= 0xF )
          __assert_fail("dev_ino_size <= obstack_object_size (&dev_ino_obstack)", "src/ls.c", 0x402u, "dev_ino_pop");
        qword_6254B8 -= 16LL;
        v63 = *(_QWORD *)(v62 - 16);
        v64 = *(_QWORD *)(v62 - 8);
        v121 = v63;
        v122 = v64;
        LODWORD(v65) = sub_40D260(qword_625788, &v121);
        if ( !v65 )
          goto LABEL_285;
        free(v65);
        free(*(void **)v58);
        free(*((void **)v58 + 1));
        free(v58);
      }
      v58 = ptr;
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
    v93 = sub_411C20(qword_625690);
    __printf_chk(1LL, "//DIRED-OPTIONS// --quoting-style=%s\n", off_41EA00[(unsigned __int64)(unsigned int)v93]);
  }
  v66 = qword_625788;
  if ( qword_625788 )
  {
    LODWORD(v67) = sub_40C5F0(qword_625788);
    if ( v67 )
      __assert_fail("hash_get_n_entries (active_dir_set) == 0", "src/ls.c", 0x66Cu, "main");
    sub_40CCC0(v66);
  }
  return (unsigned int)dword_6255D0;
}

signed int sub_40474B()
{
  return 6440520;
}

int sub_40476A()
{
  return 0;
}

signed int sub_4047A1()
{
  signed int result; // eax@4

  if ( !byte_624688 )
  {
    while ( qword_624690 < (unsigned __int64)(((&unk_623E48 - (_UNKNOWN *)&qword_623E40) >> 3) - 1) )
      (*(&qword_623E40 + ++qword_624690))();
    result = sub_40474B();
    byte_624688 = 1;
  }
  return result;
}

int sub_4047F8()
{
  return sub_40476A();
}

unsigned __int64 __fastcall sub_404800(unsigned __int64 *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_404810(__int64 a1, __int64 a2)
{
  bool result; // al@1

  result = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
    result = *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
  return result;
}

void j__free(void *ptr)
{
  free(ptr);
}

signed __int64 __fastcall sub_404860(_BYTE **a1, __int64 *a2, unsigned int a3, _QWORD *a4)
{
  _QWORD *v4; // r11@1
  __int64 v5; // r8@1
  __int64 v6; // r10@1
  _BYTE *v7; // r9@1
  int v8; // ecx@2
  char v9; // cl@4
  bool v10; // zf@4
  bool v11; // sf@4
  unsigned __int8 v12; // of@4
  char v13; // cl@8
  signed __int64 result; // rax@11
  int v15; // er12@21
  int v16; // er13@24
  int v17; // er12@25
  char v18; // cl@25
  signed __int64 v19; // r14@26

  v4 = a4;
  v5 = *a2;
  v6 = 0LL;
  v7 = *a1;
LABEL_4:
  v9 = *(_BYTE *)v5;
  v12 = __OFSUB__(*(_BYTE *)v5, 61);
  v10 = *(_BYTE *)v5 == 61;
  v11 = (char)(*(_BYTE *)v5 - 61) < 0;
  if ( *(_BYTE *)v5 == 61 )
  {
LABEL_17:
    if ( (_BYTE)a3 )
    {
      result = a3;
      goto LABEL_12;
    }
    goto LABEL_16;
  }
  while ( !((unsigned __int8)(v11 ^ v12) | v10) )
  {
    if ( v9 == 92 )
    {
      v8 = *(_BYTE *)(v5 + 1);
      v5 += 2LL;
      switch ( (_BYTE)v8 )
      {
        default:
          goto LABEL_3;
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
          v15 = *(_BYTE *)v5;
          for ( v8 -= 48; (unsigned __int8)(v15 - 48) <= 7u; v15 = *(_BYTE *)v5 )
          {
            ++v5;
            v8 = v15 + 8 * v8 - 48;
          }
          goto LABEL_3;
        case 0x58:
        case 0x78:
          v16 = 0;
          break;
        case 0x61:
          LOBYTE(v8) = 7;
          goto LABEL_3;
        case 0x3F:
          LOBYTE(v8) = 127;
          goto LABEL_3;
        case 0x5F:
          LOBYTE(v8) = 32;
          goto LABEL_3;
        case 0x66:
          LOBYTE(v8) = 12;
          goto LABEL_3;
        case 0x65:
          LOBYTE(v8) = 27;
          goto LABEL_3;
        case 0x76:
          LOBYTE(v8) = 11;
          goto LABEL_3;
        case 0x74:
          LOBYTE(v8) = 9;
          goto LABEL_3;
        case 0x72:
          LOBYTE(v8) = 13;
          goto LABEL_3;
        case 0x6E:
          LOBYTE(v8) = 10;
          goto LABEL_3;
        case 0x62:
          LOBYTE(v8) = 8;
          goto LABEL_3;
      }
LABEL_25:
      while ( 1 )
      {
        v17 = *(_BYTE *)v5;
        v18 = v17 - 48;
        if ( (unsigned __int8)(v17 - 48) > 0x36u )
          break;
        while ( 1 )
        {
          v19 = 1LL << v18;
          if ( (1LL << v18) & 0x7E0000 )
          {
            ++v5;
            v16 = v17 + 16 * v16 - 55;
            goto LABEL_25;
          }
          if ( v19 & 0x7E000000000000LL )
            break;
          if ( v19 & 0x3FF )
          {
            ++v5;
            v16 = v17 + 16 * v16 - 48;
            v17 = *(_BYTE *)v5;
            v18 = v17 - 48;
            if ( (unsigned __int8)(v17 - 48) <= 0x36u )
              continue;
          }
          goto LABEL_30;
        }
        ++v5;
        v16 = v17 + 16 * v16 - 87;
      }
LABEL_30:
      *v7 = v16;
      ++v6;
      ++v7;
      goto LABEL_4;
    }
    if ( v9 == 94 )
    {
      v13 = *(_BYTE *)(v5 + 1);
      if ( (unsigned __int8)(v13 - 64) <= 0x3Eu )
      {
        v5 += 2LL;
        LOBYTE(v8) = v8 & 0x1F;
LABEL_3:
        *v7 = v8;
        ++v6;
        ++v7;
      }
      else
      {
        if ( v13 != 63 )
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
    v9 = *(_BYTE *)v5;
    v12 = __OFSUB__(*(_BYTE *)v5, 61);
    v10 = *(_BYTE *)v5 == 61;
    v11 = (char)(*(_BYTE *)v5 - 61) < 0;
    if ( *(_BYTE *)v5 == 61 )
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
  bool result; // al@1
  signed __int64 v2; // rdi@1
  unsigned __int64 v3; // rdx@1
  char *v4; // rsi@2
  bool v5; // cf@3
  bool v6; // zf@3
  const char *v7; // rdi@6
  signed __int64 v8; // rcx@6

  result = 0;
  v2 = 2LL * a1;
  v3 = qword_624420[v2];
  if ( v3 )
  {
    v4 = (&off_624428)[v2 * 8];
    if ( v3 == 1 )
    {
      result = *v4 != 48;
    }
    else
    {
      result = 1;
      v5 = v3 < 2;
      v6 = v3 == 2;
      if ( v3 == 2 )
      {
        v7 = "00";
        v8 = 2LL;
        do
        {
          if ( !v8 )
            break;
          v5 = (unsigned __int8)*v4 < *v7;
          v6 = *v4++ == *v7++;
          --v8;
        }
        while ( v6 );
        result = (!v5 && !v6) != v5;
      }
    }
  }
  return result;
}

signed __int64 __fastcall sub_404B40(char *a1)
{
  int v1; // eax@1
  signed __int64 result; // rax@3
  __int64 v3; // [sp+8h] [bp-10h]@0

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
  __int64 v0; // rsi@1
  char *v1; // rax@2
  char i; // dl@2
  char v3; // cl@3
  unsigned __int64 v4; // r15@10
  char *v5; // rbx@11
  nl_item v6; // er12@11
  unsigned __int64 v7; // rbp@11
  char *v8; // rax@12
  char *v9; // r13@12
  __int64 v10; // r12@20
  char **v11; // rbx@20
  char *v12; // rbp@26
  char *v13; // r15@26
  char *v14; // r13@26
  unsigned __int64 v16; // [sp+8h] [bp-650h]@12
  __int64 v17; // [sp+10h] [bp-648h]@9
  __int64 v18; // [sp+18h] [bp-640h]@23
  char v19; // [sp+20h] [bp-638h]@11
  char v20; // [sp+620h] [bp-38h]@16

  v0 = 0LL;
  do
  {
    v1 = (&off_624410)[v0 * 8];
    for ( i = *v1; i; ++v1 )
    {
      v3 = v1[1];
      if ( i == 37 )
      {
        if ( v3 == 37 )
        {
          i = (v1++)[2];
          continue;
        }
        if ( v3 == 98 )
          goto LABEL_9;
      }
      i = v1[1];
    }
    v1 = 0LL;
LABEL_9:
    *(__int64 *)((char *)&v17 + v0 * 8) = (__int64)v1;
    ++v0;
  }
  while ( v0 != 2 );
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
      LODWORD(v1) = sub_40E570(v9, v5, 128LL, &v16, 0LL, 0LL);
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
        v14 = (char *)&unk_6247A0 + 192 * v10;
        while ( 1 )
        {
          v1 = *v11;
          if ( *v11 )
          {
            if ( v1 - v12 > 128 )
              return (unsigned __int64)v1;
            LODWORD(v1) = __snprintf_chk(v14, 128LL, 1LL, -1LL, "%.*s%s%s");
          }
          else
          {
            LODWORD(v1) = snprintf(v14, 0x80uLL, "%s", v12);
          }
          if ( (unsigned int)v1 > 0x7F )
            return (unsigned __int64)v1;
          v13 += 128;
          v14 += 128;
          if ( v13 == &v20 )
          {
            v10 += 8LL;
            ++v11;
            if ( v10 != 16 )
              goto LABEL_26;
            byte_624788 = 1;
            return (unsigned __int64)v1;
          }
        }
      }
    }
  }
  return (unsigned __int64)v1;
}

void *__fastcall sub_404D90(__int64 a1, __int64 a2, char a3)
{
  char v3; // r13@1
  __int64 v4; // rax@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@1
  __int64 v7; // rax@3
  void *result; // rax@5

  v3 = a3;
  LODWORD(v4) = sub_412980(32LL);
  v5 = v4;
  v6 = 0LL;
  if ( a2 )
    LODWORD(v6) = sub_412BB0(a2);
  *(_QWORD *)(v5 + 8) = v6;
  v7 = 0LL;
  if ( a1 )
    LODWORD(v7) = sub_412BB0(a1);
  *(_QWORD *)v5 = v7;
  result = ptr;
  *(_BYTE *)(v5 + 16) = v3;
  *(_QWORD *)(v5 + 24) = result;
  ptr = (void *)v5;
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
  __int64 v1; // rax@1
  bool result; // al@2
  __int64 v3; // [sp+Eh] [bp-1Ah]@1

  v1 = sub_411CD0((__int64)&v3, 2LL, a1);
  if ( *a1 == (_BYTE)v3 )
    result = strlen(a1) != v1;
  else
    result = 1;
  return result;
}

_BYTE *__fastcall sub_404E80(const char *a1, __int64 a2)
{
  const char *v2; // rbx@1
  size_t v3; // rcx@1
  __int64 v4; // rdx@1
  _BYTE *v5; // rax@3
  _BYTE *v6; // r14@3
  char *i; // rbp@3
  char v8; // al@4
  char *v10; // rdi@10

  v2 = a1;
  v3 = strlen(a1) + 1;
  v4 = 3 * (unsigned __int128)v3 >> 64;
  LOBYTE(v4) = v4 != 0;
  if ( (3 * v3 & 0x8000000000000000LL) != 0LL || (v4 = (unsigned __int8)v4, (_BYTE)v4) )
    sub_412BD0(a1, a2, v4);
  LODWORD(v5) = sub_412980(3 * v3);
  v6 = v5;
LABEL_4:
  for ( i = v5; ; ++i )
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
      if ( !byte_6253A0[(unsigned __int64)(unsigned __int8)v8] )
      {
        v10 = i;
        i += 3;
        __sprintf_chk(v10, 1LL, -1LL, "%%%02x", (unsigned __int8)v8);
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

int __fastcall sub_404F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  char *v3; // rax@1
  __int64 v4; // rdx@3
  char *v5; // rcx@3
  __int64 v6; // rax@6
  int v7; // er8@6
  __int64 v8; // rsi@8
  void *v9; // rdi@8
  __int64 v10; // rdx@9
  __int64 *v11; // rax@9
  char *v12; // rcx@9
  int v13; // edx@12
  void *v14; // rdi@17
  signed __int64 v15; // rdx@17

  v2 = qword_625770;
  v3 = (char *)(qword_625770 + ((unsigned __int64)qword_625770 >> 1));
  if ( (unsigned __int64)v3 > qword_625758 )
  {
    v14 = qword_625760;
    free(qword_625760);
    v15 = 24 * (unsigned __int128)(unsigned __int64)v2 >> 64 != 0;
    if ( 24 * v2 < 0 )
      v15 = 1LL;
    if ( v15 )
      sub_412BD0(v14, a2, v15);
    LODWORD(v3) = sub_412980(24 * v2);
    v2 = qword_625770;
    qword_625760 = v3;
    LODWORD(v3) = 3 * qword_625770;
    qword_625758 = 3 * qword_625770;
  }
  if ( v2 )
  {
    v3 = (char *)qword_625760;
    v4 = qword_625780;
    v5 = (char *)qword_625760 + 8 * v2;
    do
    {
      *(_QWORD *)v3 = v4;
      v3 += 8;
      v4 += 200LL;
    }
    while ( v5 != v3 );
  }
  if ( dword_6256F0 != -1 )
  {
    LODWORD(v6) = _setjmp(env);
    v7 = dword_6256F0;
    if ( (_DWORD)v6 )
    {
      if ( dword_6256F0 == 3 )
        __assert_fail("sort_type != sort_version", "src/ls.c", 0xEE5u, "sort_files");
      v8 = qword_625770;
      v9 = qword_625760;
      if ( qword_625770 )
      {
        v10 = qword_625780;
        v11 = (__int64 *)qword_625760;
        v12 = (char *)qword_625760 + 8 * qword_625770;
        do
        {
          *v11 = v10;
          ++v11;
          v10 += 200LL;
        }
        while ( (char *)v11 != v12 );
      }
      LODWORD(v6) = 1;
    }
    else
    {
      v8 = qword_625770;
      v9 = qword_625760;
    }
    v13 = 0;
    v6 = (signed int)v6;
    if ( v7 == 4 )
      v13 = dword_6256F4;
    LODWORD(v3) = sub_40EDD0(
                    v9,
                    v8,
                    off_419580[(unsigned __int8)byte_6256B4
                             + 2
                             * ((unsigned __int8)byte_6256EF + 2 * (v6 + 2 * (unsigned __int64)(unsigned int)(v7 + v13)))]);
  }
  return (unsigned __int64)v3;
}

int __fastcall sub_4050D0(const char *a1, const char *a2)
{
  *__errno_location() = 0;
  return strcoll(a1, a2);
}

int __fastcall sub_405100(const char **a1, const char **a2)
{
  return sub_4050D0(*a1, *a2);
}

int __fastcall sub_405110(const char **a1, const char **a2)
{
  return sub_4050D0(*a2, *a1);
}

void __fastcall sub_405120(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rax@1
  __int64 v3; // rsi@1
  __int64 v4; // rdi@1

  v2 = a2;
  v3 = *a1;
  v4 = *v2;
  JUMPOUT(&loc_40BD40);
}

__int64 __fastcall sub_405130(const char **a1, const char **a2)
{
  const char *v2; // rsi@1
  const char *v3; // rdi@1
  const char *v4; // rbp@1
  const char *v5; // rbx@1
  int v6; // er12@1
  char v7; // r8@2
  char v8; // r9@3
  bool v9; // cf@3
  bool v10; // zf@3
  signed __int64 v11; // rcx@4
  _BYTE *v12; // rsi@4
  char v13; // al@7
  bool v14; // cf@7
  bool v15; // zf@7
  signed __int64 v16; // rcx@8
  _BYTE *v17; // rsi@8
  const char *v18; // rdi@8
  char v19; // al@11
  bool v20; // cf@11
  bool v21; // zf@11
  const char *v22; // rdx@12
  signed __int64 v23; // rcx@12
  const char *v24; // rdi@12
  const char *v25; // rsi@12
  char v26; // al@15
  bool v27; // cf@15
  bool v28; // zf@15
  signed __int64 v29; // rcx@16
  const char *v30; // rsi@16
  const char *v31; // rdi@16
  __int64 v32; // rax@24
  __int64 v33; // r13@24
  __int64 v34; // rdx@24
  __int64 v35; // rax@24
  size_t v36; // r13@25
  unsigned __int64 v37; // r14@26
  unsigned __int64 v38; // rsi@28
  size_t v39; // rdx@28
  unsigned __int64 v40; // r9@31
  char v41; // al@32
  signed int v42; // er10@33
  int v43; // ecx@34
  int v44; // ecx@35
  char v45; // di@40
  signed int v46; // eax@40
  int v47; // ecx@44
  int v48; // ecx@49
  int v49; // eax@54
  int v50; // er9@57
  size_t v52; // rdi@67
  int v53; // er9@67
  int v54; // eax@68
  int v55; // [sp+0h] [bp-54h]@70
  const char *v56; // [sp+Ch] [bp-48h]@24
  const char *v57; // [sp+14h] [bp-40h]@24

  v2 = *a2;
  v3 = *a1;
  v4 = v2;
  v5 = v3;
  v6 = strcmp(v3, v2);
  if ( v6 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v8 = *v2;
      v9 = 0;
      v10 = *v2 == 0;
      if ( !*v2 )
        goto LABEL_59;
      v11 = 2LL;
      v12 = ".." + 1;
      do
      {
        if ( !v11 )
          break;
        v9 = *v12 < (const unsigned __int8)*v3;
        v10 = *v12++ == *v3++;
        --v11;
      }
      while ( v10 );
      v13 = (!v9 && !v10) - v9;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        goto LABEL_62;
      v16 = 2LL;
      v17 = ".." + 1;
      v18 = v4;
      do
      {
        if ( !v16 )
          break;
        v14 = *v17 < (const unsigned __int8)*v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      v19 = (!v14 && !v15) - v14;
      v20 = 0;
      v21 = v19 == 0;
      if ( !v19 )
        goto LABEL_59;
      v22 = "..";
      v23 = 3LL;
      v24 = v5;
      v25 = "..";
      do
      {
        if ( !v23 )
          break;
        v20 = (const unsigned __int8)*v25 < *v24;
        v21 = *v25++ == *v24++;
        --v23;
      }
      while ( v21 );
      v26 = (!v20 && !v21) - v20;
      v27 = 0;
      v28 = v26 == 0;
      if ( !v26 )
        goto LABEL_62;
      v29 = 3LL;
      v30 = "..";
      v31 = v4;
      do
      {
        if ( !v29 )
          break;
        v27 = (const unsigned __int8)*v30 < *v31;
        v28 = *v30++ == *v31++;
        --v29;
      }
      while ( v28 );
      if ( (!v27 && !v28) == v27 )
LABEL_59:
        return 1;
      if ( v8 == 46 || v7 != 46 )
      {
        if ( v7 == 46 )
        {
          if ( v8 == 46 )
          {
            ++v5;
            ++v4;
          }
LABEL_24:
          v56 = v5;
          v57 = v4;
          LOBYTE(v22) = v7 == 46;
          LODWORD(v32) = sub_40BC70(&v56, v30, v22);
          v33 = v32;
          LODWORD(v35) = sub_40BC70(&v57, v30, v34);
          if ( v33 )
          {
            v36 = v33 - (_QWORD)v5;
            if ( !v35 )
            {
              v37 = v57 - v4;
LABEL_27:
              if ( v36 != v37 || strncmp(v5, v4, v36) )
                goto LABEL_28;
              v36 = v56 - v5;
LABEL_77:
              v37 = v57 - v4;
LABEL_28:
              v38 = 0LL;
              v39 = 0LL;
              while ( 1 )
              {
                if ( v36 <= v39 && v37 <= v38 )
                  return (unsigned int)v6;
                v40 = v38 - v39;
                if ( v36 > v39 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v45 = v4[v38];
                  v47 = v4[v38];
                  if ( v37 <= v38 || (unsigned int)(v45 - 48) <= 9 )
                    break;
                  if ( v36 != v39 )
                  {
                    v43 = v5[v39];
                    v41 = v5[v39];
                    v42 = v5[v39];
                    if ( (unsigned int)(v43 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v46 = (unsigned __int8)v45;
                  v42 = 0;
                  if ( (unsigned int)(unsigned __int8)v45 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v39;
                  ++v38;
                  if ( v36 > v39 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v49 = v5[v39];
                  if ( v5[v39] != 48 )
                    break;
                  ++v39;
                }
                if ( v45 == 48 )
                {
                  do
                    v47 = v4[++v38];
                  while ( v4[v38] == 48 );
                }
                v50 = v47 - 48;
                if ( (unsigned int)(v49 - 48) > 9 )
                {
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v50 > 9 )
                    goto LABEL_59;
                  v52 = v39;
                  v53 = 0;
                  while ( 1 )
                  {
                    v54 = v49 - v47;
                    if ( !v53 )
                      v53 = v54;
                    v47 = *(&v4[v38 - v39] + ++v52);
                    v49 = v5[v52];
                    v55 = v47 - 48;
                    if ( (unsigned int)(v49 - 48) > 9 )
                      break;
                    if ( (unsigned int)v55 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v55 <= 9 )
                    goto LABEL_62;
                  if ( v53 )
                    return (unsigned int)v53;
                  v38 += v52 - v39;
                  v39 = v52;
                }
              }
LABEL_32:
              v41 = v5[v39];
              if ( (unsigned int)(v5[v39] - 48) <= 9 )
                goto LABEL_44;
              v42 = (unsigned __int8)v41;
              if ( (unsigned int)(unsigned __int8)v41 - 48 <= 9 )
              {
                if ( v37 != v38 )
                {
                  v45 = v4[v38];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v43 = (unsigned __int8)v41;
LABEL_35:
              v44 = v43 - 65;
              if ( (unsigned int)v44 <= 0x39 && (1LL << v44) & 0x3FFFFFF03FFFFFFLL )
              {
                v46 = 0;
                if ( v37 == v39 + v40 )
                {
LABEL_42:
                  if ( v46 == v42 )
                    goto LABEL_43;
                  return (unsigned int)(v42 - v46);
                }
              }
              else
              {
                if ( v41 == 126 )
                  v42 = -1;
                else
                  v42 += 256;
                if ( v37 == v39 + v40 )
                  return (unsigned int)v42;
              }
              v45 = v4[v38];
              v46 = v4[v38];
              if ( (unsigned int)(v46 - 48) > 9 )
              {
LABEL_49:
                v48 = (unsigned __int8)v45 - 65;
                if ( (unsigned int)v48 > 0x39 || !((1LL << v48) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v45 == 126 )
                    v46 = -1;
                  else
                    v46 += 256;
                }
              }
              else
              {
                v46 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v36 = v56 - v5;
            if ( !v35 )
              goto LABEL_77;
          }
          v37 = v35 - (_QWORD)v4;
          goto LABEL_27;
        }
        if ( v8 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v6 = -1;
  }
  return (unsigned int)v6;
}

__int64 __fastcall sub_405130(const char **a1, const char **a2)
{
  const char *v2; // rsi@1
  const char *v3; // rdi@1
  const char *v4; // rbp@1
  const char *v5; // rbx@1
  int v6; // er12@1
  char v7; // r8@2
  char v8; // r9@3
  bool v9; // cf@3
  bool v10; // zf@3
  signed __int64 v11; // rcx@4
  _BYTE *v12; // rsi@4
  char v13; // al@7
  bool v14; // cf@7
  bool v15; // zf@7
  signed __int64 v16; // rcx@8
  _BYTE *v17; // rsi@8
  const char *v18; // rdi@8
  char v19; // al@11
  bool v20; // cf@11
  bool v21; // zf@11
  const char *v22; // rdx@12
  signed __int64 v23; // rcx@12
  const char *v24; // rdi@12
  const char *v25; // rsi@12
  char v26; // al@15
  bool v27; // cf@15
  bool v28; // zf@15
  signed __int64 v29; // rcx@16
  const char *v30; // rsi@16
  const char *v31; // rdi@16
  __int64 v32; // rax@24
  __int64 v33; // r13@24
  __int64 v34; // rdx@24
  __int64 v35; // rax@24
  size_t v36; // r13@25
  unsigned __int64 v37; // r14@26
  unsigned __int64 v38; // rsi@28
  size_t v39; // rdx@28
  unsigned __int64 v40; // r9@31
  char v41; // al@32
  signed int v42; // er10@33
  int v43; // ecx@34
  int v44; // ecx@35
  char v45; // di@40
  signed int v46; // eax@40
  int v47; // ecx@44
  int v48; // ecx@49
  int v49; // eax@54
  int v50; // er9@57
  size_t v52; // rdi@67
  int v53; // er9@67
  int v54; // eax@68
  int v55; // [sp+0h] [bp-54h]@70
  const char *v56; // [sp+Ch] [bp-48h]@24
  const char *v57; // [sp+14h] [bp-40h]@24

  v2 = *a2;
  v3 = *a1;
  v4 = v2;
  v5 = v3;
  v6 = strcmp(v3, v2);
  if ( v6 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v8 = *v2;
      v9 = 0;
      v10 = *v2 == 0;
      if ( !*v2 )
        goto LABEL_59;
      v11 = 2LL;
      v12 = ".." + 1;
      do
      {
        if ( !v11 )
          break;
        v9 = *v12 < (const unsigned __int8)*v3;
        v10 = *v12++ == *v3++;
        --v11;
      }
      while ( v10 );
      v13 = (!v9 && !v10) - v9;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        goto LABEL_62;
      v16 = 2LL;
      v17 = ".." + 1;
      v18 = v4;
      do
      {
        if ( !v16 )
          break;
        v14 = *v17 < (const unsigned __int8)*v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      v19 = (!v14 && !v15) - v14;
      v20 = 0;
      v21 = v19 == 0;
      if ( !v19 )
        goto LABEL_59;
      v22 = "..";
      v23 = 3LL;
      v24 = v5;
      v25 = "..";
      do
      {
        if ( !v23 )
          break;
        v20 = (const unsigned __int8)*v25 < *v24;
        v21 = *v25++ == *v24++;
        --v23;
      }
      while ( v21 );
      v26 = (!v20 && !v21) - v20;
      v27 = 0;
      v28 = v26 == 0;
      if ( !v26 )
        goto LABEL_62;
      v29 = 3LL;
      v30 = "..";
      v31 = v4;
      do
      {
        if ( !v29 )
          break;
        v27 = (const unsigned __int8)*v30 < *v31;
        v28 = *v30++ == *v31++;
        --v29;
      }
      while ( v28 );
      if ( (!v27 && !v28) == v27 )
LABEL_59:
        return 1;
      if ( v8 == 46 || v7 != 46 )
      {
        if ( v7 == 46 )
        {
          if ( v8 == 46 )
          {
            ++v5;
            ++v4;
          }
LABEL_24:
          v56 = v5;
          v57 = v4;
          LOBYTE(v22) = v7 == 46;
          LODWORD(v32) = sub_40BC70(&v56, v30, v22);
          v33 = v32;
          LODWORD(v35) = sub_40BC70(&v57, v30, v34);
          if ( v33 )
          {
            v36 = v33 - (_QWORD)v5;
            if ( !v35 )
            {
              v37 = v57 - v4;
LABEL_27:
              if ( v36 != v37 || strncmp(v5, v4, v36) )
                goto LABEL_28;
              v36 = v56 - v5;
LABEL_77:
              v37 = v57 - v4;
LABEL_28:
              v38 = 0LL;
              v39 = 0LL;
              while ( 1 )
              {
                if ( v36 <= v39 && v37 <= v38 )
                  return (unsigned int)v6;
                v40 = v38 - v39;
                if ( v36 > v39 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v45 = v4[v38];
                  v47 = v4[v38];
                  if ( v37 <= v38 || (unsigned int)(v45 - 48) <= 9 )
                    break;
                  if ( v36 != v39 )
                  {
                    v43 = v5[v39];
                    v41 = v5[v39];
                    v42 = v5[v39];
                    if ( (unsigned int)(v43 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v46 = (unsigned __int8)v45;
                  v42 = 0;
                  if ( (unsigned int)(unsigned __int8)v45 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v39;
                  ++v38;
                  if ( v36 > v39 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v49 = v5[v39];
                  if ( v5[v39] != 48 )
                    break;
                  ++v39;
                }
                if ( v45 == 48 )
                {
                  do
                    v47 = v4[++v38];
                  while ( v4[v38] == 48 );
                }
                v50 = v47 - 48;
                if ( (unsigned int)(v49 - 48) > 9 )
                {
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v50 > 9 )
                    goto LABEL_59;
                  v52 = v39;
                  v53 = 0;
                  while ( 1 )
                  {
                    v54 = v49 - v47;
                    if ( !v53 )
                      v53 = v54;
                    v47 = *(&v4[v38 - v39] + ++v52);
                    v49 = v5[v52];
                    v55 = v47 - 48;
                    if ( (unsigned int)(v49 - 48) > 9 )
                      break;
                    if ( (unsigned int)v55 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v55 <= 9 )
                    goto LABEL_62;
                  if ( v53 )
                    return (unsigned int)v53;
                  v38 += v52 - v39;
                  v39 = v52;
                }
              }
LABEL_32:
              v41 = v5[v39];
              if ( (unsigned int)(v5[v39] - 48) <= 9 )
                goto LABEL_44;
              v42 = (unsigned __int8)v41;
              if ( (unsigned int)(unsigned __int8)v41 - 48 <= 9 )
              {
                if ( v37 != v38 )
                {
                  v45 = v4[v38];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v43 = (unsigned __int8)v41;
LABEL_35:
              v44 = v43 - 65;
              if ( (unsigned int)v44 <= 0x39 && (1LL << v44) & 0x3FFFFFF03FFFFFFLL )
              {
                v46 = 0;
                if ( v37 == v39 + v40 )
                {
LABEL_42:
                  if ( v46 == v42 )
                    goto LABEL_43;
                  return (unsigned int)(v42 - v46);
                }
              }
              else
              {
                if ( v41 == 126 )
                  v42 = -1;
                else
                  v42 += 256;
                if ( v37 == v39 + v40 )
                  return (unsigned int)v42;
              }
              v45 = v4[v38];
              v46 = v4[v38];
              if ( (unsigned int)(v46 - 48) > 9 )
              {
LABEL_49:
                v48 = (unsigned __int8)v45 - 65;
                if ( (unsigned int)v48 > 0x39 || !((1LL << v48) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v45 == 126 )
                    v46 = -1;
                  else
                    v46 += 256;
                }
              }
              else
              {
                v46 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v36 = v56 - v5;
            if ( !v35 )
              goto LABEL_77;
          }
          v37 = v35 - (_QWORD)v4;
          goto LABEL_27;
        }
        if ( v8 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v6 = -1;
  }
  return (unsigned int)v6;
}

__int64 __fastcall sub_405130(const char **a1, const char **a2)
{
  const char *v2; // rsi@1
  const char *v3; // rdi@1
  const char *v4; // rbp@1
  const char *v5; // rbx@1
  int v6; // er12@1
  char v7; // r8@2
  char v8; // r9@3
  bool v9; // cf@3
  bool v10; // zf@3
  signed __int64 v11; // rcx@4
  _BYTE *v12; // rsi@4
  char v13; // al@7
  bool v14; // cf@7
  bool v15; // zf@7
  signed __int64 v16; // rcx@8
  _BYTE *v17; // rsi@8
  const char *v18; // rdi@8
  char v19; // al@11
  bool v20; // cf@11
  bool v21; // zf@11
  const char *v22; // rdx@12
  signed __int64 v23; // rcx@12
  const char *v24; // rdi@12
  const char *v25; // rsi@12
  char v26; // al@15
  bool v27; // cf@15
  bool v28; // zf@15
  signed __int64 v29; // rcx@16
  const char *v30; // rsi@16
  const char *v31; // rdi@16
  __int64 v32; // rax@24
  __int64 v33; // r13@24
  __int64 v34; // rdx@24
  __int64 v35; // rax@24
  size_t v36; // r13@25
  unsigned __int64 v37; // r14@26
  unsigned __int64 v38; // rsi@28
  size_t v39; // rdx@28
  unsigned __int64 v40; // r9@31
  char v41; // al@32
  signed int v42; // er10@33
  int v43; // ecx@34
  int v44; // ecx@35
  char v45; // di@40
  signed int v46; // eax@40
  int v47; // ecx@44
  int v48; // ecx@49
  int v49; // eax@54
  int v50; // er9@57
  size_t v52; // rdi@67
  int v53; // er9@67
  int v54; // eax@68
  int v55; // [sp+0h] [bp-54h]@70
  const char *v56; // [sp+Ch] [bp-48h]@24
  const char *v57; // [sp+14h] [bp-40h]@24

  v2 = *a2;
  v3 = *a1;
  v4 = v2;
  v5 = v3;
  v6 = strcmp(v3, v2);
  if ( v6 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v8 = *v2;
      v9 = 0;
      v10 = *v2 == 0;
      if ( !*v2 )
        goto LABEL_59;
      v11 = 2LL;
      v12 = ".." + 1;
      do
      {
        if ( !v11 )
          break;
        v9 = *v12 < (const unsigned __int8)*v3;
        v10 = *v12++ == *v3++;
        --v11;
      }
      while ( v10 );
      v13 = (!v9 && !v10) - v9;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        goto LABEL_62;
      v16 = 2LL;
      v17 = ".." + 1;
      v18 = v4;
      do
      {
        if ( !v16 )
          break;
        v14 = *v17 < (const unsigned __int8)*v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      v19 = (!v14 && !v15) - v14;
      v20 = 0;
      v21 = v19 == 0;
      if ( !v19 )
        goto LABEL_59;
      v22 = "..";
      v23 = 3LL;
      v24 = v5;
      v25 = "..";
      do
      {
        if ( !v23 )
          break;
        v20 = (const unsigned __int8)*v25 < *v24;
        v21 = *v25++ == *v24++;
        --v23;
      }
      while ( v21 );
      v26 = (!v20 && !v21) - v20;
      v27 = 0;
      v28 = v26 == 0;
      if ( !v26 )
        goto LABEL_62;
      v29 = 3LL;
      v30 = "..";
      v31 = v4;
      do
      {
        if ( !v29 )
          break;
        v27 = (const unsigned __int8)*v30 < *v31;
        v28 = *v30++ == *v31++;
        --v29;
      }
      while ( v28 );
      if ( (!v27 && !v28) == v27 )
LABEL_59:
        return 1;
      if ( v8 == 46 || v7 != 46 )
      {
        if ( v7 == 46 )
        {
          if ( v8 == 46 )
          {
            ++v5;
            ++v4;
          }
LABEL_24:
          v56 = v5;
          v57 = v4;
          LOBYTE(v22) = v7 == 46;
          LODWORD(v32) = sub_40BC70(&v56, v30, v22);
          v33 = v32;
          LODWORD(v35) = sub_40BC70(&v57, v30, v34);
          if ( v33 )
          {
            v36 = v33 - (_QWORD)v5;
            if ( !v35 )
            {
              v37 = v57 - v4;
LABEL_27:
              if ( v36 != v37 || strncmp(v5, v4, v36) )
                goto LABEL_28;
              v36 = v56 - v5;
LABEL_77:
              v37 = v57 - v4;
LABEL_28:
              v38 = 0LL;
              v39 = 0LL;
              while ( 1 )
              {
                if ( v36 <= v39 && v37 <= v38 )
                  return (unsigned int)v6;
                v40 = v38 - v39;
                if ( v36 > v39 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v45 = v4[v38];
                  v47 = v4[v38];
                  if ( v37 <= v38 || (unsigned int)(v45 - 48) <= 9 )
                    break;
                  if ( v36 != v39 )
                  {
                    v43 = v5[v39];
                    v41 = v5[v39];
                    v42 = v5[v39];
                    if ( (unsigned int)(v43 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v46 = (unsigned __int8)v45;
                  v42 = 0;
                  if ( (unsigned int)(unsigned __int8)v45 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v39;
                  ++v38;
                  if ( v36 > v39 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v49 = v5[v39];
                  if ( v5[v39] != 48 )
                    break;
                  ++v39;
                }
                if ( v45 == 48 )
                {
                  do
                    v47 = v4[++v38];
                  while ( v4[v38] == 48 );
                }
                v50 = v47 - 48;
                if ( (unsigned int)(v49 - 48) > 9 )
                {
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v50 > 9 )
                    goto LABEL_59;
                  v52 = v39;
                  v53 = 0;
                  while ( 1 )
                  {
                    v54 = v49 - v47;
                    if ( !v53 )
                      v53 = v54;
                    v47 = *(&v4[v38 - v39] + ++v52);
                    v49 = v5[v52];
                    v55 = v47 - 48;
                    if ( (unsigned int)(v49 - 48) > 9 )
                      break;
                    if ( (unsigned int)v55 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v55 <= 9 )
                    goto LABEL_62;
                  if ( v53 )
                    return (unsigned int)v53;
                  v38 += v52 - v39;
                  v39 = v52;
                }
              }
LABEL_32:
              v41 = v5[v39];
              if ( (unsigned int)(v5[v39] - 48) <= 9 )
                goto LABEL_44;
              v42 = (unsigned __int8)v41;
              if ( (unsigned int)(unsigned __int8)v41 - 48 <= 9 )
              {
                if ( v37 != v38 )
                {
                  v45 = v4[v38];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v43 = (unsigned __int8)v41;
LABEL_35:
              v44 = v43 - 65;
              if ( (unsigned int)v44 <= 0x39 && (1LL << v44) & 0x3FFFFFF03FFFFFFLL )
              {
                v46 = 0;
                if ( v37 == v39 + v40 )
                {
LABEL_42:
                  if ( v46 == v42 )
                    goto LABEL_43;
                  return (unsigned int)(v42 - v46);
                }
              }
              else
              {
                if ( v41 == 126 )
                  v42 = -1;
                else
                  v42 += 256;
                if ( v37 == v39 + v40 )
                  return (unsigned int)v42;
              }
              v45 = v4[v38];
              v46 = v4[v38];
              if ( (unsigned int)(v46 - 48) > 9 )
              {
LABEL_49:
                v48 = (unsigned __int8)v45 - 65;
                if ( (unsigned int)v48 > 0x39 || !((1LL << v48) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v45 == 126 )
                    v46 = -1;
                  else
                    v46 += 256;
                }
              }
              else
              {
                v46 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v36 = v56 - v5;
            if ( !v35 )
              goto LABEL_77;
          }
          v37 = v35 - (_QWORD)v4;
          goto LABEL_27;
        }
        if ( v8 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v6 = -1;
  }
  return (unsigned int)v6;
}

__int64 __fastcall sub_405130(const char **a1, const char **a2)
{
  const char *v2; // rsi@1
  const char *v3; // rdi@1
  const char *v4; // rbp@1
  const char *v5; // rbx@1
  int v6; // er12@1
  char v7; // r8@2
  char v8; // r9@3
  bool v9; // cf@3
  bool v10; // zf@3
  signed __int64 v11; // rcx@4
  _BYTE *v12; // rsi@4
  char v13; // al@7
  bool v14; // cf@7
  bool v15; // zf@7
  signed __int64 v16; // rcx@8
  _BYTE *v17; // rsi@8
  const char *v18; // rdi@8
  char v19; // al@11
  bool v20; // cf@11
  bool v21; // zf@11
  const char *v22; // rdx@12
  signed __int64 v23; // rcx@12
  const char *v24; // rdi@12
  const char *v25; // rsi@12
  char v26; // al@15
  bool v27; // cf@15
  bool v28; // zf@15
  signed __int64 v29; // rcx@16
  const char *v30; // rsi@16
  const char *v31; // rdi@16
  __int64 v32; // rax@24
  __int64 v33; // r13@24
  __int64 v34; // rdx@24
  __int64 v35; // rax@24
  size_t v36; // r13@25
  unsigned __int64 v37; // r14@26
  unsigned __int64 v38; // rsi@28
  size_t v39; // rdx@28
  unsigned __int64 v40; // r9@31
  char v41; // al@32
  signed int v42; // er10@33
  int v43; // ecx@34
  int v44; // ecx@35
  char v45; // di@40
  signed int v46; // eax@40
  int v47; // ecx@44
  int v48; // ecx@49
  int v49; // eax@54
  int v50; // er9@57
  size_t v52; // rdi@67
  int v53; // er9@67
  int v54; // eax@68
  int v55; // [sp+0h] [bp-54h]@70
  const char *v56; // [sp+Ch] [bp-48h]@24
  const char *v57; // [sp+14h] [bp-40h]@24

  v2 = *a2;
  v3 = *a1;
  v4 = v2;
  v5 = v3;
  v6 = strcmp(v3, v2);
  if ( v6 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v8 = *v2;
      v9 = 0;
      v10 = *v2 == 0;
      if ( !*v2 )
        goto LABEL_59;
      v11 = 2LL;
      v12 = ".." + 1;
      do
      {
        if ( !v11 )
          break;
        v9 = *v12 < (const unsigned __int8)*v3;
        v10 = *v12++ == *v3++;
        --v11;
      }
      while ( v10 );
      v13 = (!v9 && !v10) - v9;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        goto LABEL_62;
      v16 = 2LL;
      v17 = ".." + 1;
      v18 = v4;
      do
      {
        if ( !v16 )
          break;
        v14 = *v17 < (const unsigned __int8)*v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      v19 = (!v14 && !v15) - v14;
      v20 = 0;
      v21 = v19 == 0;
      if ( !v19 )
        goto LABEL_59;
      v22 = "..";
      v23 = 3LL;
      v24 = v5;
      v25 = "..";
      do
      {
        if ( !v23 )
          break;
        v20 = (const unsigned __int8)*v25 < *v24;
        v21 = *v25++ == *v24++;
        --v23;
      }
      while ( v21 );
      v26 = (!v20 && !v21) - v20;
      v27 = 0;
      v28 = v26 == 0;
      if ( !v26 )
        goto LABEL_62;
      v29 = 3LL;
      v30 = "..";
      v31 = v4;
      do
      {
        if ( !v29 )
          break;
        v27 = (const unsigned __int8)*v30 < *v31;
        v28 = *v30++ == *v31++;
        --v29;
      }
      while ( v28 );
      if ( (!v27 && !v28) == v27 )
LABEL_59:
        return 1;
      if ( v8 == 46 || v7 != 46 )
      {
        if ( v7 == 46 )
        {
          if ( v8 == 46 )
          {
            ++v5;
            ++v4;
          }
LABEL_24:
          v56 = v5;
          v57 = v4;
          LOBYTE(v22) = v7 == 46;
          LODWORD(v32) = sub_40BC70(&v56, v30, v22);
          v33 = v32;
          LODWORD(v35) = sub_40BC70(&v57, v30, v34);
          if ( v33 )
          {
            v36 = v33 - (_QWORD)v5;
            if ( !v35 )
            {
              v37 = v57 - v4;
LABEL_27:
              if ( v36 != v37 || strncmp(v5, v4, v36) )
                goto LABEL_28;
              v36 = v56 - v5;
LABEL_77:
              v37 = v57 - v4;
LABEL_28:
              v38 = 0LL;
              v39 = 0LL;
              while ( 1 )
              {
                if ( v36 <= v39 && v37 <= v38 )
                  return (unsigned int)v6;
                v40 = v38 - v39;
                if ( v36 > v39 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v45 = v4[v38];
                  v47 = v4[v38];
                  if ( v37 <= v38 || (unsigned int)(v45 - 48) <= 9 )
                    break;
                  if ( v36 != v39 )
                  {
                    v43 = v5[v39];
                    v41 = v5[v39];
                    v42 = v5[v39];
                    if ( (unsigned int)(v43 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v46 = (unsigned __int8)v45;
                  v42 = 0;
                  if ( (unsigned int)(unsigned __int8)v45 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v39;
                  ++v38;
                  if ( v36 > v39 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v49 = v5[v39];
                  if ( v5[v39] != 48 )
                    break;
                  ++v39;
                }
                if ( v45 == 48 )
                {
                  do
                    v47 = v4[++v38];
                  while ( v4[v38] == 48 );
                }
                v50 = v47 - 48;
                if ( (unsigned int)(v49 - 48) > 9 )
                {
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v50 > 9 )
                    goto LABEL_59;
                  v52 = v39;
                  v53 = 0;
                  while ( 1 )
                  {
                    v54 = v49 - v47;
                    if ( !v53 )
                      v53 = v54;
                    v47 = *(&v4[v38 - v39] + ++v52);
                    v49 = v5[v52];
                    v55 = v47 - 48;
                    if ( (unsigned int)(v49 - 48) > 9 )
                      break;
                    if ( (unsigned int)v55 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v55 <= 9 )
                    goto LABEL_62;
                  if ( v53 )
                    return (unsigned int)v53;
                  v38 += v52 - v39;
                  v39 = v52;
                }
              }
LABEL_32:
              v41 = v5[v39];
              if ( (unsigned int)(v5[v39] - 48) <= 9 )
                goto LABEL_44;
              v42 = (unsigned __int8)v41;
              if ( (unsigned int)(unsigned __int8)v41 - 48 <= 9 )
              {
                if ( v37 != v38 )
                {
                  v45 = v4[v38];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v43 = (unsigned __int8)v41;
LABEL_35:
              v44 = v43 - 65;
              if ( (unsigned int)v44 <= 0x39 && (1LL << v44) & 0x3FFFFFF03FFFFFFLL )
              {
                v46 = 0;
                if ( v37 == v39 + v40 )
                {
LABEL_42:
                  if ( v46 == v42 )
                    goto LABEL_43;
                  return (unsigned int)(v42 - v46);
                }
              }
              else
              {
                if ( v41 == 126 )
                  v42 = -1;
                else
                  v42 += 256;
                if ( v37 == v39 + v40 )
                  return (unsigned int)v42;
              }
              v45 = v4[v38];
              v46 = v4[v38];
              if ( (unsigned int)(v46 - 48) > 9 )
              {
LABEL_49:
                v48 = (unsigned __int8)v45 - 65;
                if ( (unsigned int)v48 > 0x39 || !((1LL << v48) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v45 == 126 )
                    v46 = -1;
                  else
                    v46 += 256;
                }
              }
              else
              {
                v46 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v36 = v56 - v5;
            if ( !v35 )
              goto LABEL_77;
          }
          v37 = v35 - (_QWORD)v4;
          goto LABEL_27;
        }
        if ( v8 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v6 = -1;
  }
  return (unsigned int)v6;
}

__int64 __fastcall sub_405130(const char **a1, const char **a2)
{
  const char *v2; // rsi@1
  const char *v3; // rdi@1
  const char *v4; // rbp@1
  const char *v5; // rbx@1
  int v6; // er12@1
  char v7; // r8@2
  char v8; // r9@3
  bool v9; // cf@3
  bool v10; // zf@3
  signed __int64 v11; // rcx@4
  _BYTE *v12; // rsi@4
  char v13; // al@7
  bool v14; // cf@7
  bool v15; // zf@7
  signed __int64 v16; // rcx@8
  _BYTE *v17; // rsi@8
  const char *v18; // rdi@8
  char v19; // al@11
  bool v20; // cf@11
  bool v21; // zf@11
  const char *v22; // rdx@12
  signed __int64 v23; // rcx@12
  const char *v24; // rdi@12
  const char *v25; // rsi@12
  char v26; // al@15
  bool v27; // cf@15
  bool v28; // zf@15
  signed __int64 v29; // rcx@16
  const char *v30; // rsi@16
  const char *v31; // rdi@16
  __int64 v32; // rax@24
  __int64 v33; // r13@24
  __int64 v34; // rdx@24
  __int64 v35; // rax@24
  size_t v36; // r13@25
  unsigned __int64 v37; // r14@26
  unsigned __int64 v38; // rsi@28
  size_t v39; // rdx@28
  unsigned __int64 v40; // r9@31
  char v41; // al@32
  signed int v42; // er10@33
  int v43; // ecx@34
  int v44; // ecx@35
  char v45; // di@40
  signed int v46; // eax@40
  int v47; // ecx@44
  int v48; // ecx@49
  int v49; // eax@54
  int v50; // er9@57
  size_t v52; // rdi@67
  int v53; // er9@67
  int v54; // eax@68
  int v55; // [sp+0h] [bp-54h]@70
  const char *v56; // [sp+Ch] [bp-48h]@24
  const char *v57; // [sp+14h] [bp-40h]@24

  v2 = *a2;
  v3 = *a1;
  v4 = v2;
  v5 = v3;
  v6 = strcmp(v3, v2);
  if ( v6 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v8 = *v2;
      v9 = 0;
      v10 = *v2 == 0;
      if ( !*v2 )
        goto LABEL_59;
      v11 = 2LL;
      v12 = ".." + 1;
      do
      {
        if ( !v11 )
          break;
        v9 = *v12 < (const unsigned __int8)*v3;
        v10 = *v12++ == *v3++;
        --v11;
      }
      while ( v10 );
      v13 = (!v9 && !v10) - v9;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        goto LABEL_62;
      v16 = 2LL;
      v17 = ".." + 1;
      v18 = v4;
      do
      {
        if ( !v16 )
          break;
        v14 = *v17 < (const unsigned __int8)*v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      v19 = (!v14 && !v15) - v14;
      v20 = 0;
      v21 = v19 == 0;
      if ( !v19 )
        goto LABEL_59;
      v22 = "..";
      v23 = 3LL;
      v24 = v5;
      v25 = "..";
      do
      {
        if ( !v23 )
          break;
        v20 = (const unsigned __int8)*v25 < *v24;
        v21 = *v25++ == *v24++;
        --v23;
      }
      while ( v21 );
      v26 = (!v20 && !v21) - v20;
      v27 = 0;
      v28 = v26 == 0;
      if ( !v26 )
        goto LABEL_62;
      v29 = 3LL;
      v30 = "..";
      v31 = v4;
      do
      {
        if ( !v29 )
          break;
        v27 = (const unsigned __int8)*v30 < *v31;
        v28 = *v30++ == *v31++;
        --v29;
      }
      while ( v28 );
      if ( (!v27 && !v28) == v27 )
LABEL_59:
        return 1;
      if ( v8 == 46 || v7 != 46 )
      {
        if ( v7 == 46 )
        {
          if ( v8 == 46 )
          {
            ++v5;
            ++v4;
          }
LABEL_24:
          v56 = v5;
          v57 = v4;
          LOBYTE(v22) = v7 == 46;
          LODWORD(v32) = sub_40BC70(&v56, v30, v22);
          v33 = v32;
          LODWORD(v35) = sub_40BC70(&v57, v30, v34);
          if ( v33 )
          {
            v36 = v33 - (_QWORD)v5;
            if ( !v35 )
            {
              v37 = v57 - v4;
LABEL_27:
              if ( v36 != v37 || strncmp(v5, v4, v36) )
                goto LABEL_28;
              v36 = v56 - v5;
LABEL_77:
              v37 = v57 - v4;
LABEL_28:
              v38 = 0LL;
              v39 = 0LL;
              while ( 1 )
              {
                if ( v36 <= v39 && v37 <= v38 )
                  return (unsigned int)v6;
                v40 = v38 - v39;
                if ( v36 > v39 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v45 = v4[v38];
                  v47 = v4[v38];
                  if ( v37 <= v38 || (unsigned int)(v45 - 48) <= 9 )
                    break;
                  if ( v36 != v39 )
                  {
                    v43 = v5[v39];
                    v41 = v5[v39];
                    v42 = v5[v39];
                    if ( (unsigned int)(v43 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v46 = (unsigned __int8)v45;
                  v42 = 0;
                  if ( (unsigned int)(unsigned __int8)v45 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v39;
                  ++v38;
                  if ( v36 > v39 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v49 = v5[v39];
                  if ( v5[v39] != 48 )
                    break;
                  ++v39;
                }
                if ( v45 == 48 )
                {
                  do
                    v47 = v4[++v38];
                  while ( v4[v38] == 48 );
                }
                v50 = v47 - 48;
                if ( (unsigned int)(v49 - 48) > 9 )
                {
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v50 > 9 )
                    goto LABEL_59;
                  v52 = v39;
                  v53 = 0;
                  while ( 1 )
                  {
                    v54 = v49 - v47;
                    if ( !v53 )
                      v53 = v54;
                    v47 = *(&v4[v38 - v39] + ++v52);
                    v49 = v5[v52];
                    v55 = v47 - 48;
                    if ( (unsigned int)(v49 - 48) > 9 )
                      break;
                    if ( (unsigned int)v55 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v55 <= 9 )
                    goto LABEL_62;
                  if ( v53 )
                    return (unsigned int)v53;
                  v38 += v52 - v39;
                  v39 = v52;
                }
              }
LABEL_32:
              v41 = v5[v39];
              if ( (unsigned int)(v5[v39] - 48) <= 9 )
                goto LABEL_44;
              v42 = (unsigned __int8)v41;
              if ( (unsigned int)(unsigned __int8)v41 - 48 <= 9 )
              {
                if ( v37 != v38 )
                {
                  v45 = v4[v38];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v43 = (unsigned __int8)v41;
LABEL_35:
              v44 = v43 - 65;
              if ( (unsigned int)v44 <= 0x39 && (1LL << v44) & 0x3FFFFFF03FFFFFFLL )
              {
                v46 = 0;
                if ( v37 == v39 + v40 )
                {
LABEL_42:
                  if ( v46 == v42 )
                    goto LABEL_43;
                  return (unsigned int)(v42 - v46);
                }
              }
              else
              {
                if ( v41 == 126 )
                  v42 = -1;
                else
                  v42 += 256;
                if ( v37 == v39 + v40 )
                  return (unsigned int)v42;
              }
              v45 = v4[v38];
              v46 = v4[v38];
              if ( (unsigned int)(v46 - 48) > 9 )
              {
LABEL_49:
                v48 = (unsigned __int8)v45 - 65;
                if ( (unsigned int)v48 > 0x39 || !((1LL << v48) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v45 == 126 )
                    v46 = -1;
                  else
                    v46 += 256;
                }
              }
              else
              {
                v46 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v36 = v56 - v5;
            if ( !v35 )
              goto LABEL_77;
          }
          v37 = v35 - (_QWORD)v4;
          goto LABEL_27;
        }
        if ( v8 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v6 = -1;
  }
  return (unsigned int)v6;
}

__int64 __fastcall sub_405130(const char **a1, const char **a2)
{
  const char *v2; // rsi@1
  const char *v3; // rdi@1
  const char *v4; // rbp@1
  const char *v5; // rbx@1
  int v6; // er12@1
  char v7; // r8@2
  char v8; // r9@3
  bool v9; // cf@3
  bool v10; // zf@3
  signed __int64 v11; // rcx@4
  _BYTE *v12; // rsi@4
  char v13; // al@7
  bool v14; // cf@7
  bool v15; // zf@7
  signed __int64 v16; // rcx@8
  _BYTE *v17; // rsi@8
  const char *v18; // rdi@8
  char v19; // al@11
  bool v20; // cf@11
  bool v21; // zf@11
  const char *v22; // rdx@12
  signed __int64 v23; // rcx@12
  const char *v24; // rdi@12
  const char *v25; // rsi@12
  char v26; // al@15
  bool v27; // cf@15
  bool v28; // zf@15
  signed __int64 v29; // rcx@16
  const char *v30; // rsi@16
  const char *v31; // rdi@16
  __int64 v32; // rax@24
  __int64 v33; // r13@24
  __int64 v34; // rdx@24
  __int64 v35; // rax@24
  size_t v36; // r13@25
  unsigned __int64 v37; // r14@26
  unsigned __int64 v38; // rsi@28
  size_t v39; // rdx@28
  unsigned __int64 v40; // r9@31
  char v41; // al@32
  signed int v42; // er10@33
  int v43; // ecx@34
  int v44; // ecx@35
  char v45; // di@40
  signed int v46; // eax@40
  int v47; // ecx@44
  int v48; // ecx@49
  int v49; // eax@54
  int v50; // er9@57
  size_t v52; // rdi@67
  int v53; // er9@67
  int v54; // eax@68
  int v55; // [sp+0h] [bp-54h]@70
  const char *v56; // [sp+Ch] [bp-48h]@24
  const char *v57; // [sp+14h] [bp-40h]@24

  v2 = *a2;
  v3 = *a1;
  v4 = v2;
  v5 = v3;
  v6 = strcmp(v3, v2);
  if ( v6 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v8 = *v2;
      v9 = 0;
      v10 = *v2 == 0;
      if ( !*v2 )
        goto LABEL_59;
      v11 = 2LL;
      v12 = ".." + 1;
      do
      {
        if ( !v11 )
          break;
        v9 = *v12 < (const unsigned __int8)*v3;
        v10 = *v12++ == *v3++;
        --v11;
      }
      while ( v10 );
      v13 = (!v9 && !v10) - v9;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        goto LABEL_62;
      v16 = 2LL;
      v17 = ".." + 1;
      v18 = v4;
      do
      {
        if ( !v16 )
          break;
        v14 = *v17 < (const unsigned __int8)*v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      v19 = (!v14 && !v15) - v14;
      v20 = 0;
      v21 = v19 == 0;
      if ( !v19 )
        goto LABEL_59;
      v22 = "..";
      v23 = 3LL;
      v24 = v5;
      v25 = "..";
      do
      {
        if ( !v23 )
          break;
        v20 = (const unsigned __int8)*v25 < *v24;
        v21 = *v25++ == *v24++;
        --v23;
      }
      while ( v21 );
      v26 = (!v20 && !v21) - v20;
      v27 = 0;
      v28 = v26 == 0;
      if ( !v26 )
        goto LABEL_62;
      v29 = 3LL;
      v30 = "..";
      v31 = v4;
      do
      {
        if ( !v29 )
          break;
        v27 = (const unsigned __int8)*v30 < *v31;
        v28 = *v30++ == *v31++;
        --v29;
      }
      while ( v28 );
      if ( (!v27 && !v28) == v27 )
LABEL_59:
        return 1;
      if ( v8 == 46 || v7 != 46 )
      {
        if ( v7 == 46 )
        {
          if ( v8 == 46 )
          {
            ++v5;
            ++v4;
          }
LABEL_24:
          v56 = v5;
          v57 = v4;
          LOBYTE(v22) = v7 == 46;
          LODWORD(v32) = sub_40BC70(&v56, v30, v22);
          v33 = v32;
          LODWORD(v35) = sub_40BC70(&v57, v30, v34);
          if ( v33 )
          {
            v36 = v33 - (_QWORD)v5;
            if ( !v35 )
            {
              v37 = v57 - v4;
LABEL_27:
              if ( v36 != v37 || strncmp(v5, v4, v36) )
                goto LABEL_28;
              v36 = v56 - v5;
LABEL_77:
              v37 = v57 - v4;
LABEL_28:
              v38 = 0LL;
              v39 = 0LL;
              while ( 1 )
              {
                if ( v36 <= v39 && v37 <= v38 )
                  return (unsigned int)v6;
                v40 = v38 - v39;
                if ( v36 > v39 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v45 = v4[v38];
                  v47 = v4[v38];
                  if ( v37 <= v38 || (unsigned int)(v45 - 48) <= 9 )
                    break;
                  if ( v36 != v39 )
                  {
                    v43 = v5[v39];
                    v41 = v5[v39];
                    v42 = v5[v39];
                    if ( (unsigned int)(v43 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v46 = (unsigned __int8)v45;
                  v42 = 0;
                  if ( (unsigned int)(unsigned __int8)v45 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v39;
                  ++v38;
                  if ( v36 > v39 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v49 = v5[v39];
                  if ( v5[v39] != 48 )
                    break;
                  ++v39;
                }
                if ( v45 == 48 )
                {
                  do
                    v47 = v4[++v38];
                  while ( v4[v38] == 48 );
                }
                v50 = v47 - 48;
                if ( (unsigned int)(v49 - 48) > 9 )
                {
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v50 > 9 )
                    goto LABEL_59;
                  v52 = v39;
                  v53 = 0;
                  while ( 1 )
                  {
                    v54 = v49 - v47;
                    if ( !v53 )
                      v53 = v54;
                    v47 = *(&v4[v38 - v39] + ++v52);
                    v49 = v5[v52];
                    v55 = v47 - 48;
                    if ( (unsigned int)(v49 - 48) > 9 )
                      break;
                    if ( (unsigned int)v55 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v55 <= 9 )
                    goto LABEL_62;
                  if ( v53 )
                    return (unsigned int)v53;
                  v38 += v52 - v39;
                  v39 = v52;
                }
              }
LABEL_32:
              v41 = v5[v39];
              if ( (unsigned int)(v5[v39] - 48) <= 9 )
                goto LABEL_44;
              v42 = (unsigned __int8)v41;
              if ( (unsigned int)(unsigned __int8)v41 - 48 <= 9 )
              {
                if ( v37 != v38 )
                {
                  v45 = v4[v38];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v43 = (unsigned __int8)v41;
LABEL_35:
              v44 = v43 - 65;
              if ( (unsigned int)v44 <= 0x39 && (1LL << v44) & 0x3FFFFFF03FFFFFFLL )
              {
                v46 = 0;
                if ( v37 == v39 + v40 )
                {
LABEL_42:
                  if ( v46 == v42 )
                    goto LABEL_43;
                  return (unsigned int)(v42 - v46);
                }
              }
              else
              {
                if ( v41 == 126 )
                  v42 = -1;
                else
                  v42 += 256;
                if ( v37 == v39 + v40 )
                  return (unsigned int)v42;
              }
              v45 = v4[v38];
              v46 = v4[v38];
              if ( (unsigned int)(v46 - 48) > 9 )
              {
LABEL_49:
                v48 = (unsigned __int8)v45 - 65;
                if ( (unsigned int)v48 > 0x39 || !((1LL << v48) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v45 == 126 )
                    v46 = -1;
                  else
                    v46 += 256;
                }
              }
              else
              {
                v46 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v36 = v56 - v5;
            if ( !v35 )
              goto LABEL_77;
          }
          v37 = v35 - (_QWORD)v4;
          goto LABEL_27;
        }
        if ( v8 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v6 = -1;
  }
  return (unsigned int)v6;
}

__int64 __fastcall sub_405130(const char **a1, const char **a2)
{
  const char *v2; // rsi@1
  const char *v3; // rdi@1
  const char *v4; // rbp@1
  const char *v5; // rbx@1
  int v6; // er12@1
  char v7; // r8@2
  char v8; // r9@3
  bool v9; // cf@3
  bool v10; // zf@3
  signed __int64 v11; // rcx@4
  _BYTE *v12; // rsi@4
  char v13; // al@7
  bool v14; // cf@7
  bool v15; // zf@7
  signed __int64 v16; // rcx@8
  _BYTE *v17; // rsi@8
  const char *v18; // rdi@8
  char v19; // al@11
  bool v20; // cf@11
  bool v21; // zf@11
  const char *v22; // rdx@12
  signed __int64 v23; // rcx@12
  const char *v24; // rdi@12
  const char *v25; // rsi@12
  char v26; // al@15
  bool v27; // cf@15
  bool v28; // zf@15
  signed __int64 v29; // rcx@16
  const char *v30; // rsi@16
  const char *v31; // rdi@16
  __int64 v32; // rax@24
  __int64 v33; // r13@24
  __int64 v34; // rdx@24
  __int64 v35; // rax@24
  size_t v36; // r13@25
  unsigned __int64 v37; // r14@26
  unsigned __int64 v38; // rsi@28
  size_t v39; // rdx@28
  unsigned __int64 v40; // r9@31
  char v41; // al@32
  signed int v42; // er10@33
  int v43; // ecx@34
  int v44; // ecx@35
  char v45; // di@40
  signed int v46; // eax@40
  int v47; // ecx@44
  int v48; // ecx@49
  int v49; // eax@54
  int v50; // er9@57
  size_t v52; // rdi@67
  int v53; // er9@67
  int v54; // eax@68
  int v55; // [sp+0h] [bp-54h]@70
  const char *v56; // [sp+Ch] [bp-48h]@24
  const char *v57; // [sp+14h] [bp-40h]@24

  v2 = *a2;
  v3 = *a1;
  v4 = v2;
  v5 = v3;
  v6 = strcmp(v3, v2);
  if ( v6 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v8 = *v2;
      v9 = 0;
      v10 = *v2 == 0;
      if ( !*v2 )
        goto LABEL_59;
      v11 = 2LL;
      v12 = ".." + 1;
      do
      {
        if ( !v11 )
          break;
        v9 = *v12 < (const unsigned __int8)*v3;
        v10 = *v12++ == *v3++;
        --v11;
      }
      while ( v10 );
      v13 = (!v9 && !v10) - v9;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        goto LABEL_62;
      v16 = 2LL;
      v17 = ".." + 1;
      v18 = v4;
      do
      {
        if ( !v16 )
          break;
        v14 = *v17 < (const unsigned __int8)*v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      v19 = (!v14 && !v15) - v14;
      v20 = 0;
      v21 = v19 == 0;
      if ( !v19 )
        goto LABEL_59;
      v22 = "..";
      v23 = 3LL;
      v24 = v5;
      v25 = "..";
      do
      {
        if ( !v23 )
          break;
        v20 = (const unsigned __int8)*v25 < *v24;
        v21 = *v25++ == *v24++;
        --v23;
      }
      while ( v21 );
      v26 = (!v20 && !v21) - v20;
      v27 = 0;
      v28 = v26 == 0;
      if ( !v26 )
        goto LABEL_62;
      v29 = 3LL;
      v30 = "..";
      v31 = v4;
      do
      {
        if ( !v29 )
          break;
        v27 = (const unsigned __int8)*v30 < *v31;
        v28 = *v30++ == *v31++;
        --v29;
      }
      while ( v28 );
      if ( (!v27 && !v28) == v27 )
LABEL_59:
        return 1;
      if ( v8 == 46 || v7 != 46 )
      {
        if ( v7 == 46 )
        {
          if ( v8 == 46 )
          {
            ++v5;
            ++v4;
          }
LABEL_24:
          v56 = v5;
          v57 = v4;
          LOBYTE(v22) = v7 == 46;
          LODWORD(v32) = sub_40BC70(&v56, v30, v22);
          v33 = v32;
          LODWORD(v35) = sub_40BC70(&v57, v30, v34);
          if ( v33 )
          {
            v36 = v33 - (_QWORD)v5;
            if ( !v35 )
            {
              v37 = v57 - v4;
LABEL_27:
              if ( v36 != v37 || strncmp(v5, v4, v36) )
                goto LABEL_28;
              v36 = v56 - v5;
LABEL_77:
              v37 = v57 - v4;
LABEL_28:
              v38 = 0LL;
              v39 = 0LL;
              while ( 1 )
              {
                if ( v36 <= v39 && v37 <= v38 )
                  return (unsigned int)v6;
                v40 = v38 - v39;
                if ( v36 > v39 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v45 = v4[v38];
                  v47 = v4[v38];
                  if ( v37 <= v38 || (unsigned int)(v45 - 48) <= 9 )
                    break;
                  if ( v36 != v39 )
                  {
                    v43 = v5[v39];
                    v41 = v5[v39];
                    v42 = v5[v39];
                    if ( (unsigned int)(v43 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v46 = (unsigned __int8)v45;
                  v42 = 0;
                  if ( (unsigned int)(unsigned __int8)v45 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v39;
                  ++v38;
                  if ( v36 > v39 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v49 = v5[v39];
                  if ( v5[v39] != 48 )
                    break;
                  ++v39;
                }
                if ( v45 == 48 )
                {
                  do
                    v47 = v4[++v38];
                  while ( v4[v38] == 48 );
                }
                v50 = v47 - 48;
                if ( (unsigned int)(v49 - 48) > 9 )
                {
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v50 > 9 )
                    goto LABEL_59;
                  v52 = v39;
                  v53 = 0;
                  while ( 1 )
                  {
                    v54 = v49 - v47;
                    if ( !v53 )
                      v53 = v54;
                    v47 = *(&v4[v38 - v39] + ++v52);
                    v49 = v5[v52];
                    v55 = v47 - 48;
                    if ( (unsigned int)(v49 - 48) > 9 )
                      break;
                    if ( (unsigned int)v55 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v55 <= 9 )
                    goto LABEL_62;
                  if ( v53 )
                    return (unsigned int)v53;
                  v38 += v52 - v39;
                  v39 = v52;
                }
              }
LABEL_32:
              v41 = v5[v39];
              if ( (unsigned int)(v5[v39] - 48) <= 9 )
                goto LABEL_44;
              v42 = (unsigned __int8)v41;
              if ( (unsigned int)(unsigned __int8)v41 - 48 <= 9 )
              {
                if ( v37 != v38 )
                {
                  v45 = v4[v38];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v43 = (unsigned __int8)v41;
LABEL_35:
              v44 = v43 - 65;
              if ( (unsigned int)v44 <= 0x39 && (1LL << v44) & 0x3FFFFFF03FFFFFFLL )
              {
                v46 = 0;
                if ( v37 == v39 + v40 )
                {
LABEL_42:
                  if ( v46 == v42 )
                    goto LABEL_43;
                  return (unsigned int)(v42 - v46);
                }
              }
              else
              {
                if ( v41 == 126 )
                  v42 = -1;
                else
                  v42 += 256;
                if ( v37 == v39 + v40 )
                  return (unsigned int)v42;
              }
              v45 = v4[v38];
              v46 = v4[v38];
              if ( (unsigned int)(v46 - 48) > 9 )
              {
LABEL_49:
                v48 = (unsigned __int8)v45 - 65;
                if ( (unsigned int)v48 > 0x39 || !((1LL << v48) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v45 == 126 )
                    v46 = -1;
                  else
                    v46 += 256;
                }
              }
              else
              {
                v46 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v36 = v56 - v5;
            if ( !v35 )
              goto LABEL_77;
          }
          v37 = v35 - (_QWORD)v4;
          goto LABEL_27;
        }
        if ( v8 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v6 = -1;
  }
  return (unsigned int)v6;
}

__int64 __fastcall sub_405130(const char **a1, const char **a2)
{
  const char *v2; // rsi@1
  const char *v3; // rdi@1
  const char *v4; // rbp@1
  const char *v5; // rbx@1
  int v6; // er12@1
  char v7; // r8@2
  char v8; // r9@3
  bool v9; // cf@3
  bool v10; // zf@3
  signed __int64 v11; // rcx@4
  _BYTE *v12; // rsi@4
  char v13; // al@7
  bool v14; // cf@7
  bool v15; // zf@7
  signed __int64 v16; // rcx@8
  _BYTE *v17; // rsi@8
  const char *v18; // rdi@8
  char v19; // al@11
  bool v20; // cf@11
  bool v21; // zf@11
  const char *v22; // rdx@12
  signed __int64 v23; // rcx@12
  const char *v24; // rdi@12
  const char *v25; // rsi@12
  char v26; // al@15
  bool v27; // cf@15
  bool v28; // zf@15
  signed __int64 v29; // rcx@16
  const char *v30; // rsi@16
  const char *v31; // rdi@16
  __int64 v32; // rax@24
  __int64 v33; // r13@24
  __int64 v34; // rdx@24
  __int64 v35; // rax@24
  size_t v36; // r13@25
  unsigned __int64 v37; // r14@26
  unsigned __int64 v38; // rsi@28
  size_t v39; // rdx@28
  unsigned __int64 v40; // r9@31
  char v41; // al@32
  signed int v42; // er10@33
  int v43; // ecx@34
  int v44; // ecx@35
  char v45; // di@40
  signed int v46; // eax@40
  int v47; // ecx@44
  int v48; // ecx@49
  int v49; // eax@54
  int v50; // er9@57
  size_t v52; // rdi@67
  int v53; // er9@67
  int v54; // eax@68
  int v55; // [sp+0h] [bp-54h]@70
  const char *v56; // [sp+Ch] [bp-48h]@24
  const char *v57; // [sp+14h] [bp-40h]@24

  v2 = *a2;
  v3 = *a1;
  v4 = v2;
  v5 = v3;
  v6 = strcmp(v3, v2);
  if ( v6 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v8 = *v2;
      v9 = 0;
      v10 = *v2 == 0;
      if ( !*v2 )
        goto LABEL_59;
      v11 = 2LL;
      v12 = ".." + 1;
      do
      {
        if ( !v11 )
          break;
        v9 = *v12 < (const unsigned __int8)*v3;
        v10 = *v12++ == *v3++;
        --v11;
      }
      while ( v10 );
      v13 = (!v9 && !v10) - v9;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        goto LABEL_62;
      v16 = 2LL;
      v17 = ".." + 1;
      v18 = v4;
      do
      {
        if ( !v16 )
          break;
        v14 = *v17 < (const unsigned __int8)*v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      v19 = (!v14 && !v15) - v14;
      v20 = 0;
      v21 = v19 == 0;
      if ( !v19 )
        goto LABEL_59;
      v22 = "..";
      v23 = 3LL;
      v24 = v5;
      v25 = "..";
      do
      {
        if ( !v23 )
          break;
        v20 = (const unsigned __int8)*v25 < *v24;
        v21 = *v25++ == *v24++;
        --v23;
      }
      while ( v21 );
      v26 = (!v20 && !v21) - v20;
      v27 = 0;
      v28 = v26 == 0;
      if ( !v26 )
        goto LABEL_62;
      v29 = 3LL;
      v30 = "..";
      v31 = v4;
      do
      {
        if ( !v29 )
          break;
        v27 = (const unsigned __int8)*v30 < *v31;
        v28 = *v30++ == *v31++;
        --v29;
      }
      while ( v28 );
      if ( (!v27 && !v28) == v27 )
LABEL_59:
        return 1;
      if ( v8 == 46 || v7 != 46 )
      {
        if ( v7 == 46 )
        {
          if ( v8 == 46 )
          {
            ++v5;
            ++v4;
          }
LABEL_24:
          v56 = v5;
          v57 = v4;
          LOBYTE(v22) = v7 == 46;
          LODWORD(v32) = sub_40BC70(&v56, v30, v22);
          v33 = v32;
          LODWORD(v35) = sub_40BC70(&v57, v30, v34);
          if ( v33 )
          {
            v36 = v33 - (_QWORD)v5;
            if ( !v35 )
            {
              v37 = v57 - v4;
LABEL_27:
              if ( v36 != v37 || strncmp(v5, v4, v36) )
                goto LABEL_28;
              v36 = v56 - v5;
LABEL_77:
              v37 = v57 - v4;
LABEL_28:
              v38 = 0LL;
              v39 = 0LL;
              while ( 1 )
              {
                if ( v36 <= v39 && v37 <= v38 )
                  return (unsigned int)v6;
                v40 = v38 - v39;
                if ( v36 > v39 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v45 = v4[v38];
                  v47 = v4[v38];
                  if ( v37 <= v38 || (unsigned int)(v45 - 48) <= 9 )
                    break;
                  if ( v36 != v39 )
                  {
                    v43 = v5[v39];
                    v41 = v5[v39];
                    v42 = v5[v39];
                    if ( (unsigned int)(v43 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v46 = (unsigned __int8)v45;
                  v42 = 0;
                  if ( (unsigned int)(unsigned __int8)v45 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v39;
                  ++v38;
                  if ( v36 > v39 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v49 = v5[v39];
                  if ( v5[v39] != 48 )
                    break;
                  ++v39;
                }
                if ( v45 == 48 )
                {
                  do
                    v47 = v4[++v38];
                  while ( v4[v38] == 48 );
                }
                v50 = v47 - 48;
                if ( (unsigned int)(v49 - 48) > 9 )
                {
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v50 > 9 )
                    goto LABEL_59;
                  v52 = v39;
                  v53 = 0;
                  while ( 1 )
                  {
                    v54 = v49 - v47;
                    if ( !v53 )
                      v53 = v54;
                    v47 = *(&v4[v38 - v39] + ++v52);
                    v49 = v5[v52];
                    v55 = v47 - 48;
                    if ( (unsigned int)(v49 - 48) > 9 )
                      break;
                    if ( (unsigned int)v55 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v55 <= 9 )
                    goto LABEL_62;
                  if ( v53 )
                    return (unsigned int)v53;
                  v38 += v52 - v39;
                  v39 = v52;
                }
              }
LABEL_32:
              v41 = v5[v39];
              if ( (unsigned int)(v5[v39] - 48) <= 9 )
                goto LABEL_44;
              v42 = (unsigned __int8)v41;
              if ( (unsigned int)(unsigned __int8)v41 - 48 <= 9 )
              {
                if ( v37 != v38 )
                {
                  v45 = v4[v38];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v43 = (unsigned __int8)v41;
LABEL_35:
              v44 = v43 - 65;
              if ( (unsigned int)v44 <= 0x39 && (1LL << v44) & 0x3FFFFFF03FFFFFFLL )
              {
                v46 = 0;
                if ( v37 == v39 + v40 )
                {
LABEL_42:
                  if ( v46 == v42 )
                    goto LABEL_43;
                  return (unsigned int)(v42 - v46);
                }
              }
              else
              {
                if ( v41 == 126 )
                  v42 = -1;
                else
                  v42 += 256;
                if ( v37 == v39 + v40 )
                  return (unsigned int)v42;
              }
              v45 = v4[v38];
              v46 = v4[v38];
              if ( (unsigned int)(v46 - 48) > 9 )
              {
LABEL_49:
                v48 = (unsigned __int8)v45 - 65;
                if ( (unsigned int)v48 > 0x39 || !((1LL << v48) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v45 == 126 )
                    v46 = -1;
                  else
                    v46 += 256;
                }
              }
              else
              {
                v46 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v36 = v56 - v5;
            if ( !v35 )
              goto LABEL_77;
          }
          v37 = v35 - (_QWORD)v4;
          goto LABEL_27;
        }
        if ( v8 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v6 = -1;
  }
  return (unsigned int)v6;
}

__int64 __fastcall sub_405130(const char **a1, const char **a2)
{
  const char *v2; // rsi@1
  const char *v3; // rdi@1
  const char *v4; // rbp@1
  const char *v5; // rbx@1
  int v6; // er12@1
  char v7; // r8@2
  char v8; // r9@3
  bool v9; // cf@3
  bool v10; // zf@3
  signed __int64 v11; // rcx@4
  _BYTE *v12; // rsi@4
  char v13; // al@7
  bool v14; // cf@7
  bool v15; // zf@7
  signed __int64 v16; // rcx@8
  _BYTE *v17; // rsi@8
  const char *v18; // rdi@8
  char v19; // al@11
  bool v20; // cf@11
  bool v21; // zf@11
  const char *v22; // rdx@12
  signed __int64 v23; // rcx@12
  const char *v24; // rdi@12
  const char *v25; // rsi@12
  char v26; // al@15
  bool v27; // cf@15
  bool v28; // zf@15
  signed __int64 v29; // rcx@16
  const char *v30; // rsi@16
  const char *v31; // rdi@16
  __int64 v32; // rax@24
  __int64 v33; // r13@24
  __int64 v34; // rdx@24
  __int64 v35; // rax@24
  size_t v36; // r13@25
  unsigned __int64 v37; // r14@26
  unsigned __int64 v38; // rsi@28
  size_t v39; // rdx@28
  unsigned __int64 v40; // r9@31
  char v41; // al@32
  signed int v42; // er10@33
  int v43; // ecx@34
  int v44; // ecx@35
  char v45; // di@40
  signed int v46; // eax@40
  int v47; // ecx@44
  int v48; // ecx@49
  int v49; // eax@54
  int v50; // er9@57
  size_t v52; // rdi@67
  int v53; // er9@67
  int v54; // eax@68
  int v55; // [sp+0h] [bp-54h]@70
  const char *v56; // [sp+Ch] [bp-48h]@24
  const char *v57; // [sp+14h] [bp-40h]@24

  v2 = *a2;
  v3 = *a1;
  v4 = v2;
  v5 = v3;
  v6 = strcmp(v3, v2);
  if ( v6 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      v8 = *v2;
      v9 = 0;
      v10 = *v2 == 0;
      if ( !*v2 )
        goto LABEL_59;
      v11 = 2LL;
      v12 = ".." + 1;
      do
      {
        if ( !v11 )
          break;
        v9 = *v12 < (const unsigned __int8)*v3;
        v10 = *v12++ == *v3++;
        --v11;
      }
      while ( v10 );
      v13 = (!v9 && !v10) - v9;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        goto LABEL_62;
      v16 = 2LL;
      v17 = ".." + 1;
      v18 = v4;
      do
      {
        if ( !v16 )
          break;
        v14 = *v17 < (const unsigned __int8)*v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      v19 = (!v14 && !v15) - v14;
      v20 = 0;
      v21 = v19 == 0;
      if ( !v19 )
        goto LABEL_59;
      v22 = "..";
      v23 = 3LL;
      v24 = v5;
      v25 = "..";
      do
      {
        if ( !v23 )
          break;
        v20 = (const unsigned __int8)*v25 < *v24;
        v21 = *v25++ == *v24++;
        --v23;
      }
      while ( v21 );
      v26 = (!v20 && !v21) - v20;
      v27 = 0;
      v28 = v26 == 0;
      if ( !v26 )
        goto LABEL_62;
      v29 = 3LL;
      v30 = "..";
      v31 = v4;
      do
      {
        if ( !v29 )
          break;
        v27 = (const unsigned __int8)*v30 < *v31;
        v28 = *v30++ == *v31++;
        --v29;
      }
      while ( v28 );
      if ( (!v27 && !v28) == v27 )
LABEL_59:
        return 1;
      if ( v8 == 46 || v7 != 46 )
      {
        if ( v7 == 46 )
        {
          if ( v8 == 46 )
          {
            ++v5;
            ++v4;
          }
LABEL_24:
          v56 = v5;
          v57 = v4;
          LOBYTE(v22) = v7 == 46;
          LODWORD(v32) = sub_40BC70(&v56, v30, v22);
          v33 = v32;
          LODWORD(v35) = sub_40BC70(&v57, v30, v34);
          if ( v33 )
          {
            v36 = v33 - (_QWORD)v5;
            if ( !v35 )
            {
              v37 = v57 - v4;
LABEL_27:
              if ( v36 != v37 || strncmp(v5, v4, v36) )
                goto LABEL_28;
              v36 = v56 - v5;
LABEL_77:
              v37 = v57 - v4;
LABEL_28:
              v38 = 0LL;
              v39 = 0LL;
              while ( 1 )
              {
                if ( v36 <= v39 && v37 <= v38 )
                  return (unsigned int)v6;
                v40 = v38 - v39;
                if ( v36 > v39 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v45 = v4[v38];
                  v47 = v4[v38];
                  if ( v37 <= v38 || (unsigned int)(v45 - 48) <= 9 )
                    break;
                  if ( v36 != v39 )
                  {
                    v43 = v5[v39];
                    v41 = v5[v39];
                    v42 = v5[v39];
                    if ( (unsigned int)(v43 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v46 = (unsigned __int8)v45;
                  v42 = 0;
                  if ( (unsigned int)(unsigned __int8)v45 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v39;
                  ++v38;
                  if ( v36 > v39 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v49 = v5[v39];
                  if ( v5[v39] != 48 )
                    break;
                  ++v39;
                }
                if ( v45 == 48 )
                {
                  do
                    v47 = v4[++v38];
                  while ( v4[v38] == 48 );
                }
                v50 = v47 - 48;
                if ( (unsigned int)(v49 - 48) > 9 )
                {
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v50 > 9 )
                    goto LABEL_59;
                  v52 = v39;
                  v53 = 0;
                  while ( 1 )
                  {
                    v54 = v49 - v47;
                    if ( !v53 )
                      v53 = v54;
                    v47 = *(&v4[v38 - v39] + ++v52);
                    v49 = v5[v52];
                    v55 = v47 - 48;
                    if ( (unsigned int)(v49 - 48) > 9 )
                      break;
                    if ( (unsigned int)v55 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v55 <= 9 )
                    goto LABEL_62;
                  if ( v53 )
                    return (unsigned int)v53;
                  v38 += v52 - v39;
                  v39 = v52;
                }
              }
LABEL_32:
              v41 = v5[v39];
              if ( (unsigned int)(v5[v39] - 48) <= 9 )
                goto LABEL_44;
              v42 = (unsigned __int8)v41;
              if ( (unsigned int)(unsigned __int8)v41 - 48 <= 9 )
              {
                if ( v37 != v38 )
                {
                  v45 = v4[v38];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v43 = (unsigned __int8)v41;
LABEL_35:
              v44 = v43 - 65;
              if ( (unsigned int)v44 <= 0x39 && (1LL << v44) & 0x3FFFFFF03FFFFFFLL )
              {
                v46 = 0;
                if ( v37 == v39 + v40 )
                {
LABEL_42:
                  if ( v46 == v42 )
                    goto LABEL_43;
                  return (unsigned int)(v42 - v46);
                }
              }
              else
              {
                if ( v41 == 126 )
                  v42 = -1;
                else
                  v42 += 256;
                if ( v37 == v39 + v40 )
                  return (unsigned int)v42;
              }
              v45 = v4[v38];
              v46 = v4[v38];
              if ( (unsigned int)(v46 - 48) > 9 )
              {
LABEL_49:
                v48 = (unsigned __int8)v45 - 65;
                if ( (unsigned int)v48 > 0x39 || !((1LL << v48) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v45 == 126 )
                    v46 = -1;
                  else
                    v46 += 256;
                }
              }
              else
              {
                v46 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v36 = v56 - v5;
            if ( !v35 )
              goto LABEL_77;
          }
          v37 = v35 - (_QWORD)v4;
          goto LABEL_27;
        }
        if ( v8 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v6 = -1;
  }
  return (unsigned int)v6;
}

void __fastcall sub_405140(__int64 a1, __int64 a2)
{
  char v2; // r12@1
  __int64 v3; // rbx@4
  __int64 v4; // rbp@6
  int v5; // eax@6
  _BYTE *v6; // r14@8
  __int64 v7; // rax@9
  __int64 v8; // rax@11
  void *v9; // r14@11
  __int64 v10; // rdx@14
  _QWORD *v11; // rsi@15
  char *v12; // rdi@15
  char *v13; // rax@15
  bool v14; // zf@16
  char v15; // al@19

  v2 = a2;
  if ( a1 && qword_625788 )
  {
    a2 = a1;
    sub_404D90(0LL, a1, 0);
  }
  v3 = qword_625770;
LABEL_5:
  while ( --v3 != -1 )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)qword_625760 + v3);
      v5 = *(_DWORD *)(v4 + 168);
      if ( v5 != 3 && v5 != 9 )
        break;
      v6 = *(_BYTE **)v4;
      if ( !a1 )
        goto LABEL_24;
      LODWORD(v7) = sub_40B870(*(_BYTE **)v4, a2);
      if ( *(_BYTE *)v7 == 46 )
      {
        v15 = *(_BYTE *)(v7 + (*(_BYTE *)(v7 + 1) == 46) + 1);
        if ( !v15 || v15 == 47 )
          goto LABEL_5;
      }
      if ( *v6 != 47 )
      {
        LODWORD(v8) = sub_40BB70(a1, v6, 0LL);
        a2 = *(_QWORD *)(v4 + 8);
        v9 = (void *)v8;
        sub_404D90(v8, a2, v2);
        free(v9);
      }
      else
      {
LABEL_24:
        a2 = *(_QWORD *)(v4 + 8);
        sub_404D90((__int64)v6, a2, v2);
      }
      if ( *(_DWORD *)(v4 + 168) != 9 )
        goto LABEL_5;
      --v3;
      free(*(void **)v4);
      free(*(void **)(v4 + 8));
      free(*(void **)(v4 + 16));
      if ( v3 == -1 )
        goto LABEL_14;
    }
  }
LABEL_14:
  v10 = qword_625770;
  if ( qword_625770 )
  {
    v11 = qword_625760;
    v12 = (char *)qword_625760 + 8 * qword_625770;
    v13 = (char *)qword_625760;
    v10 = 0LL;
    do
    {
      v14 = *(_DWORD *)(*(_QWORD *)v13 + 168LL) == 9;
      v11[v10] = *(_QWORD *)v13;
      v13 += 8;
      v10 += !v14;
    }
    while ( v12 != v13 );
  }
  qword_625770 = v10;
}

int __fastcall sub_4052C0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12@2
  unsigned __int64 v3; // rbx@2
  unsigned __int64 v4; // rax@6
  unsigned __int64 v5; // rcx@7
  unsigned __int64 v6; // rbp@7
  char *v7; // rsi@7
  char *v8; // r8@7

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
  char *v2; // rax@1
  char *v3; // rbx@1
  unsigned __int64 v4; // rbp@1
  unsigned __int64 v5; // rax@4
  unsigned __int64 v6; // rbp@6
  __int64 v7; // rdx@7

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
  return (unsigned __int64)v2;
}

size_t __fastcall sub_405460(char *s, __int64 a2, __int64 a3)
{
  int v3; // ebx@1
  int v4; // ebx@2
  size_t v5; // rbp@4
  char *v6; // rdx@5
  size_t result; // rax@8

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
  char *v3; // rax@1

  v3 = "?";
  if ( a3 )
  {
    v3 = 0LL;
    if ( !byte_6256ED )
      LODWORD(v3) = sub_40E160();
  }
  return sub_405460(v3, a1, a2);
}

void __fastcall sub_405580(char a1, const char *a2, __int64 a3)
{
  __int64 v3; // rax@1
  __int64 v4; // r12@1
  int *v5; // rax@1

  LODWORD(v3) = sub_412040(4LL, a3);
  v4 = v3;
  v5 = __errno_location();
  error(0, *v5, a2, v4);
  if ( a1 )
  {
    dword_6255D0 = 2;
  }
  else if ( !dword_6255D0 )
  {
    dword_6255D0 = 1;
  }
}

signed int __fastcall sub_4055F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  signed int result; // eax@3

  v2 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(a1 + 72) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a1 + 72) == v2 )
  {
    result = strcmp(*(const char **)a1, *(const char **)a2);
  }
  else
  {
    result = *(_QWORD *)(a1 + 72) < v2;
  }
  return result;
}

int __fastcall sub_405630(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
  {
    result = -1;
  }
  else if ( v2 || (result = 1, !v3) )
  {
    result = sub_4050D0(*(const char **)a1, *(const char **)a2);
  }
  return result;
}

int __fastcall sub_405690(__int64 a1, __int64 a2)
{
  bool v2; // dl@1
  bool v3; // al@1
  signed int v4; // edx@4

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
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
  {
    result = -1;
  }
  else if ( v2 || (result = 1, !v3) )
  {
    result = sub_4050D0(*(const char **)a2, *(const char **)a1);
  }
  return result;
}

int __fastcall sub_405750(__int64 a1, __int64 a2)
{
  bool v2; // dl@1
  bool v3; // al@1
  signed int v4; // edx@4

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

signed __int64 __fastcall sub_4057B0(char a1, __int16 a2, int a3)
{
  int v3; // eax@2
  bool v4; // cl@3
  signed __int64 result; // rax@4
  int v6; // esi@7

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
            return -(signed int)result & 0x3D;
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
            return -(signed int)result & 0x3D;
          }
        }
      }
    }
  }
  return result;
}

bool __fastcall sub_4058A0(char a1, __int16 a2, int a3)
{
  char v3; // bl@1
  char *v4; // rax@2

  v3 = sub_4057B0(a1, a2, a3);
  if ( v3 )
  {
    v4 = stdout->_IO_write_ptr;
    if ( v4 >= stdout->_IO_write_end )
    {
      __overflow(stdout, (unsigned __int8)v3);
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
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a2 + 104) - *(_DWORD *)(a1 + 104);
        if ( (unsigned int)*(_QWORD *)(a2 + 104) == *(_DWORD *)(a1 + 104) )
          result = strcmp(*(const char **)a1, *(const char **)a2);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

__int64 __fastcall sub_405970(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8@1
  bool v3; // dl@1
  bool v4; // al@1
  signed int v5; // edx@4
  __int64 v7; // rsi@6
  __int64 v8; // rdi@6

  v2 = (__int64 *)a2;
  v3 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v4 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v4 && v3 )
  {
    v5 = -1;
  }
  else if ( v3 || (v5 = 1, !v4) )
  {
    v7 = *(_QWORD *)a1;
    v8 = *v2;
    JUMPOUT(&loc_40BD40);
  }
  return (unsigned int)v5;
}

__int64 __fastcall sub_4059D0(__int64 a1, __int64 a2)
{
  bool v2; // dl@1
  bool v3; // al@1
  signed int v4; // edx@4
  __int64 v6; // rsi@6
  __int64 v7; // rdi@6

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
  {
    v4 = -1;
  }
  else if ( v2 || (v4 = 1, !v3) )
  {
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD *)a1;
    JUMPOUT(&loc_40BD40);
  }
  return (unsigned int)v4;
}

int __fastcall sub_405A30(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  const char *v5; // r12@5
  char *v6; // rax@5
  const char *v7; // rbx@5
  const char *v8; // rbp@5
  char *v9; // rax@5

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

int __fastcall sub_405AF0(char a1)
{
  void *v1; // rbx@2
  int v2; // ebp@2
  int result; // eax@5
  void *v4; // rbx@8
  int v5; // er12@8
  void *i; // rbp@8
  int v7; // ebp@13
  __int64 (__fastcall *v8)(); // rax@16
  __int64 (__fastcall *v9)(); // [sp+0h] [bp-B8h]@10
  __m128i v10; // [sp+8h] [bp-B0h]@13
  __m128i v11; // [sp+18h] [bp-A0h]@13
  __m128i v12; // [sp+28h] [bp-90h]@13
  __m128i v13; // [sp+38h] [bp-80h]@13
  __m128i v14; // [sp+48h] [bp-70h]@13
  __m128i v15; // [sp+58h] [bp-60h]@13
  __m128i v16; // [sp+68h] [bp-50h]@13
  __m128i v17; // [sp+78h] [bp-40h]@13
  int v18; // [sp+88h] [bp-30h]@13

  if ( !a1 )
  {
    v1 = &unk_419504;
    v2 = 20;
    while ( 1 )
    {
      result = sigismember(&set, v2);
      if ( result )
      {
        result = (unsigned __int64)signal(v2, 0LL);
        if ( v1 == &unk_419530 )
          return result;
      }
      else if ( v1 == &unk_419530 )
      {
        return result;
      }
      v2 = *(_DWORD *)v1;
      v1 = (char *)v1 + 4;
    }
  }
  v4 = &unk_419504;
  v5 = 20;
  sigemptyset(&set);
  for ( i = &unk_419504; ; i = (char *)i + 4 )
  {
    sigaction(v5, 0LL, (struct sigaction *)&v9);
    if ( v9 != (__int64 (__fastcall *)())1 )
      sigaddset(&set, v5);
    if ( i == &unk_419530 )
      break;
    v5 = *(_DWORD *)i;
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
    if ( v4 == &unk_419530 )
      break;
    v7 = *(_DWORD *)v4;
    v4 = (char *)v4 + 4;
  }
  return result;
}

int sub_405C70()
{
  int result; // eax@2

  if ( qword_624448 )
  {
    result = sub_405CD0(&unk_624440, &qword_624448);
  }
  else
  {
    sub_405CD0(qword_624420, &off_624428);
    sub_405CD0(&unk_624450, &off_624458);
    result = sub_405CD0(&qword_624430, &off_624438);
  }
  return result;
}

size_t __fastcall sub_405CD0(size_t *a1, const void **a2)
{
  if ( !byte_6256D0 )
  {
    byte_6256D0 = 1;
    if ( tcgetpgrp(1) >= 0 )
    {
      sub_405AF0(1);
      sub_405C70();
    }
    else
    {
      sub_405C70();
    }
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
  __int64 result; // rax@2
  int v1; // ebx@5
  __int64 v2; // [sp-88h] [bp-88h]@5

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

size_t __usercall sub_405EA0@<rax>(__int64 a1@<rdx>, int a2@<ecx>, size_t a3@<rbx>, void **a4@<rdi>, const char *a5@<rsi>, size_t *a6@<r8>, char *a7@<r9>)
{
  char *v7; // r13@1
  signed int v8; // er10@2
  unsigned __int64 v9; // rax@3
  signed int v10; // er10@3
  size_t v11; // r9@3
  size_t v12; // ST18_8@6
  signed int v13; // ST08_4@6
  size_t v14; // rax@6
  size_t v15; // rax@11
  const unsigned __int16 **v16; // rax@13
  const unsigned __int16 *v17; // rcx@13
  char *v18; // rax@13
  size_t v19; // rax@20
  size_t v20; // r12@20
  char *v21; // rbp@23
  const unsigned __int16 **v22; // rax@25
  char *v23; // rdx@25
  char v24; // al@30
  char *v26; // r15@36
  char *v27; // r14@36
  char v28; // al@41
  int v29; // eax@46
  signed __int64 v30; // rdx@46
  __int64 v31; // rax@49
  char v32; // cl@53
  __int64 v33; // rdx@55
  int v34; // eax@59
  char *v35; // rax@21
  __int64 v36; // r14@4
  signed int v37; // ST18_4@4
  unsigned __int64 v38; // ST08_8@4
  __int64 v39; // rax@4
  int v40; // [sp+8h] [bp-70h]@1
  signed int v41; // [sp+8h] [bp-70h]@3
  size_t v42; // [sp+8h] [bp-70h]@11
  __int64 v43; // [sp+8h] [bp-70h]@51
  size_t *v44; // [sp+10h] [bp-68h]@1
  char v45; // [sp+18h] [bp-60h]@1
  char *v46; // [sp+28h] [bp-50h]@1
  wchar_t c; // [sp+34h] [bp-44h]@46
  mbstate_t ps; // [sp+38h] [bp-40h]@45

  v7 = (char *)*a4;
  v40 = a2;
  v44 = a6;
  v46 = a7;
  v45 = byte_625698 & ((unsigned int)sub_411C20(a1) <= 2);
  if ( v45 )
  {
    if ( !v40 )
    {
      v19 = strlen(a5);
      a3 = v19;
      v20 = v19 + 1;
      if ( v19 > 0x1FFF )
      {
        LODWORD(v35) = sub_412980(v19 + 1);
        v7 = v35;
      }
      memcpy(v7, a5, v20);
      v45 = 0;
LABEL_23:
      v21 = &v7[a3];
      if ( __ctype_get_mb_cur_max() <= 1 )
      {
        if ( v21 > v7 )
        {
          v22 = __ctype_b_loc();
          v23 = v7;
          do
          {
            if ( !(HIBYTE((*v22)[(unsigned __int8)*v23]) & 0x40) )
              *v23 = 63;
            ++v23;
          }
          while ( v23 != v21 );
        }
        v11 = a3;
LABEL_30:
        v24 = byte_625768;
        if ( !byte_625768 )
          goto LABEL_32;
        goto LABEL_31;
      }
      if ( v21 <= v7 )
      {
        v11 = 0LL;
        a3 = 0LL;
        goto LABEL_30;
      }
      v26 = v7;
      v27 = v7;
      a3 = 0LL;
LABEL_41:
      v28 = *v27;
      if ( *v27 <= 63 )
      {
        if ( v28 >= 37 || (unsigned __int8)(v28 - 32) <= 3u )
        {
LABEL_39:
          *v26 = v28;
          ++v27;
          ++a3;
          ++v26;
          goto LABEL_40;
        }
      }
      else if ( v28 >= 65 && (v28 <= 95 || (unsigned __int8)(v28 - 97) <= 0x1Du) )
      {
        goto LABEL_39;
      }
      ps = 0LL;
      while ( 1 )
      {
        v31 = sub_416E80(&c, v27);
        if ( v31 == -1 )
        {
          *v26 = 63;
          ++v27;
          ++a3;
          goto LABEL_61;
        }
        if ( v31 == -2 )
        {
          *v26 = 63;
          ++a3;
          v27 = v21;
LABEL_61:
          ++v26;
LABEL_40:
          if ( v21 <= v27 )
          {
            v11 = v26 - v7;
            goto LABEL_30;
          }
          goto LABEL_41;
        }
        v43 = v31;
        if ( v31 )
        {
          v29 = wcwidth(c);
          v30 = (signed __int64)&v27[v43];
          if ( v29 >= 0 )
          {
            v33 = 0LL;
            do
            {
              v26[v33] = v27[v33];
              ++v33;
            }
            while ( v43 != v33 );
            v27 += v43;
            v26 += v43;
            goto LABEL_54;
          }
        }
        else
        {
          v29 = wcwidth(c);
          v30 = (signed __int64)(v27 + 1);
          if ( v29 >= 0 )
          {
            v32 = *v27++;
            *v26++ = v32;
LABEL_54:
            a3 += v29;
            goto LABEL_48;
          }
        }
        *v26 = 63;
        ++a3;
        ++v26;
        v27 = (char *)v30;
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
    if ( !v40 )
    {
      v7 = (char *)a5;
      v11 = strlen(a5);
      goto LABEL_10;
    }
  }
  v41 = v8;
  v9 = sub_411CD0((__int64)v7, 0x2000LL, (char *)a5);
  v10 = v41;
  v11 = v9;
  if ( v9 > 0x1FFF )
  {
    v36 = v9 + 1;
    v37 = v41;
    v38 = v9;
    LODWORD(v39) = sub_412980(v9 + 1);
    v7 = (char *)v39;
    sub_411CD0(v39, v36, (char *)a5);
    v10 = v37;
    v11 = v38;
  }
  v45 = 1;
  if ( *a5 == *v7 )
  {
    v12 = v11;
    v13 = v10;
    v14 = strlen(a5);
    v11 = v12;
    v10 = v13;
    v45 = v12 != v14;
  }
  if ( v10 )
  {
    a3 = v11;
    goto LABEL_23;
  }
LABEL_10:
  if ( v44 )
  {
    v42 = v11;
    v15 = __ctype_get_mb_cur_max();
    v11 = v42;
    if ( v15 > 1 )
    {
      v34 = sub_40E9B0(v7);
      v11 = v42;
      a3 = v34;
    }
    else if ( &v7[v42] <= v7 )
    {
      a3 = 0LL;
    }
    else
    {
      a3 = 0LL;
      v16 = __ctype_b_loc();
      v11 = v42;
      v17 = *v16;
      v18 = v7;
      do
        a3 -= ((v17[(unsigned __int8)*v18++] & 0x4000u) < 1) - 1LL;
      while ( &v7[v42] != v18 );
    }
    if ( !byte_625768 )
    {
      *v46 = 0;
LABEL_33:
      *v44 = a3;
      goto LABEL_34;
    }
  }
  else if ( !byte_625768 )
  {
    *v46 = 0;
    goto LABEL_34;
  }
LABEL_31:
  v24 = (v45 | byte_625769 ^ 1) ^ 1;
LABEL_32:
  *v46 = v24;
  if ( v44 )
    goto LABEL_33;
LABEL_34:
  *a4 = v7;
  return v11;
}

size_t __fastcall sub_4062D0(const char *a1, __int64 a2, int a3, __int64 a4, char a5, size_t a6, const char *a7)
{
  char v7; // r15@1
  __int64 v8; // r12@1
  size_t v9; // rbx@1
  size_t v10; // rbp@1
  char v11; // r12@8
  signed __int64 v12; // r10@9
  signed __int64 v13; // r9@9
  size_t n; // ST18_8@10
  signed __int64 v15; // ST10_8@10
  _BYTE *v16; // r15@10
  _BYTE *v17; // rax@10
  void *ptr; // ST08_8@10
  void *v19; // r9@10
  size_t v20; // r10@10
  _QWORD *v21; // rdx@12
  __int64 v22; // rax@15
  __int64 *v23; // rcx@16
  char v24; // dl@21
  char *v25; // rax@21
  char v27; // dl@29
  char *v28; // rax@29
  char *v29; // rax@31
  size_t v30; // ST10_8@13
  void *v31; // ST08_8@13
  unsigned __int8 v32; // [sp+27h] [bp-2041h]@1
  void *v33; // [sp+28h] [bp-2040h]@1
  char v34; // [sp+30h] [bp-2038h]@1

  v7 = a5;
  v8 = a4;
  v9 = a6;
  v33 = &v34;
  v10 = sub_405EA0(a2, a3, a6, &v33, a1, 0LL, (char *)&v32);
  if ( v32 && v7 )
  {
    v29 = stdout->_IO_write_ptr;
    if ( v29 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 32);
    }
    else
    {
      stdout->_IO_write_ptr = v29 + 1;
      *v29 = 32;
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
      if ( v32 )
      {
        v12 = v10;
        v13 = 0LL;
        v11 = 0;
      }
      else
      {
        v12 = v10 - 2;
        v27 = *(_BYTE *)v33;
        v28 = stdout->_IO_write_ptr;
        if ( v28 >= stdout->_IO_write_end )
        {
          __overflow(stdout, (unsigned __int8)v27);
          v13 = 1LL;
          v12 = v10 - 2;
        }
        else
        {
          v13 = 1LL;
          stdout->_IO_write_ptr = v28 + 1;
          *v28 = v27;
        }
      }
    }
    else
    {
      v12 = v10;
      v13 = 0LL;
    }
    n = v12;
    v15 = v13;
    v16 = sub_404E80((const char *)qword_625748, 0LL);
    v17 = sub_404E80(a7, 1LL);
    *v17;
    ptr = v17;
    __printf_chk(1LL, "\x1B]8;;file://%s%s%s\a", v16);
    free(v16);
    free(ptr);
    v19 = (void *)v15;
    v20 = n;
    if ( v9 )
      goto LABEL_11;
LABEL_35:
    fwrite_unlocked((char *)v33 + (_QWORD)v19, 1uLL, v20, stdout);
    qword_6255B8 += v10;
    goto LABEL_19;
  }
  v20 = v10;
  v19 = 0LL;
  v11 = 0;
  if ( !v9 )
    goto LABEL_35;
LABEL_11:
  if ( byte_6256D8 )
  {
    v21 = *(_QWORD **)(v9 + 24);
    if ( *(_QWORD *)(v9 + 32) - (_QWORD)v21 <= 7uLL )
    {
      v30 = v20;
      v31 = v19;
      obstack_newchunk(v9, 8LL);
      v21 = *(_QWORD **)(v9 + 24);
      v20 = v30;
      v19 = v31;
    }
    *v21 = qword_6255B8;
    *(_QWORD *)(v9 + 24) += 8LL;
  }
  fwrite_unlocked((char *)v33 + (_QWORD)v19, 1uLL, v20, stdout);
  v22 = v10 + qword_6255B8;
  qword_6255B8 += v10;
  if ( byte_6256D8 )
  {
    v23 = *(__int64 **)(v9 + 24);
    if ( *(_QWORD *)(v9 + 32) - (_QWORD)v23 <= 7uLL )
    {
      obstack_newchunk(v9, 8LL);
      v23 = *(__int64 **)(v9 + 24);
      v22 = qword_6255B8;
    }
    *v23 = v22;
    *(_QWORD *)(v9 + 24) += 8LL;
  }
LABEL_19:
  if ( a7 )
  {
    fwrite_unlocked("\x1B]8;;\a", 1uLL, 6uLL, stdout);
    if ( v11 )
    {
      v24 = *((char *)v33 + v10 - 1);
      v25 = stdout->_IO_write_ptr;
      if ( v25 >= stdout->_IO_write_end )
      {
        __overflow(stdout, (unsigned __int8)v24);
      }
      else
      {
        stdout->_IO_write_ptr = v25 + 1;
        *v25 = v24;
      }
    }
  }
  if ( v33 != &v34 && v33 != (void *)a1 )
    free(v33);
  return v10 + v32;
}

size_t __fastcall sub_406690(__int64 a1, char a2, size_t a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r13@1
  size_t v5; // r12@1
  const char *v6; // rbp@2
  size_t v7; // rbx@3
  int v9; // er8@5
  bool v10; // al@6
  signed int v11; // edx@6
  signed __int64 v12; // rcx@7
  bool v13; // cl@11
  signed __int64 v14; // rax@12
  __int64 v15; // rcx@17
  int v16; // eax@25
  size_t v17; // rax@36
  __int64 v18; // rbx@36
  size_t v19; // rcx@36
  size_t v20; // ST18_8@38
  int v21; // eax@38
  char v22; // r8@46
  bool v23; // al@53
  signed __int64 v24; // rcx@55
  bool v25; // al@63

  v4 = a4;
  v5 = a3;
  if ( !a2 )
  {
    v6 = *(const char **)a1;
    if ( !byte_6256D2 )
      goto LABEL_3;
    v11 = *(_BYTE *)(a1 + 185);
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
    v14 = (unsigned int)dword_419540[(unsigned __int64)*(_DWORD *)(a1 + 168)];
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
          v12 = (-(signed __int64)((unsigned __int8)sub_404AE0(0xDu) < 1u) & 0xFFFFFFFFFFFFFFA0LL) + 208;
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
      if ( (v9 & 0x202) != 514 || (v25 = sub_404AE0(0x14u), v12 = 320LL, !v25) )
      {
        if ( !(v9 & 2) || (v23 = sub_404AE0(0x13u), v12 = 304LL, !v23) )
        {
          v12 = 96LL;
          if ( v9 & 0x200 )
          {
            v24 = -(signed __int64)((unsigned __int8)sub_404AE0(0x12u) < 1u);
            LOBYTE(v24) = v24 & 0x40;
            v12 = v24 + 288;
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
  if ( v22 & 0x49 && sub_404AE0(0xEu) )
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
      v20 = v19;
      v21 = strncmp(&v6[v19 - *(_QWORD *)v18], *(const char **)(v18 + 8), *(_QWORD *)v18);
      v19 = v20;
      if ( !v21 )
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
  __int64 v2; // rbx@1
  __int64 v3; // rdx@1
  __int64 v4; // rdi@3
  __int64 v5; // rdx@5
  __int64 v6; // rdx@11
  __int64 v7; // rdx@15
  __int64 v8; // rcx@15
  size_t v9; // rbp@18
  size_t result; // rax@19
  __int64 v11; // [sp+0h] [bp-2A8h]@4

  v2 = a1;
  sub_405E30();
  if ( byte_6256BC )
  {
    if ( *(_BYTE *)(a1 + 184) )
    {
      v4 = *(_QWORD *)(a1 + 32);
      if ( v4 )
        sub_40E520(v4, &v11, v3, "?");
    }
    v5 = 0LL;
    if ( dword_6256F8 != 4 )
      v5 = (unsigned int)dword_625720;
    __printf_chk(1LL, "%*s ", v5);
  }
  if ( byte_6256EC )
  {
    if ( *(_BYTE *)(v2 + 184) )
      sub_40D5D0(*(_QWORD *)(v2 + 88), &v11, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
    v6 = 0LL;
    if ( dword_6256F8 != 4 )
      v6 = (unsigned int)dword_62571C;
    __printf_chk(1LL, "%*s ", v6);
  }
  if ( byte_625725 )
  {
    v7 = 0LL;
    v8 = *(_QWORD *)(v2 + 176);
    if ( dword_6256F8 != 4 )
      v7 = (unsigned int)dword_625714;
    __printf_chk(1LL, "%*s ", v7);
  }
  v9 = sub_406690(v2, 0, 0LL, a2);
  if ( dword_6256D4 )
    result = sub_4058A0(*(_BYTE *)(v2 + 184), *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 168)) + v9;
  else
    result = v9;
  return result;
}

char __fastcall sub_406C60(__int64 a1, __int64 a2, __int64 a3, signed __int64 a4)
{
  __int64 v4; // rbp@1
  char *v5; // r13@2
  int v6; // eax@5
  __int64 v7; // rax@7
  __int64 v8; // rdx@7
  char *v9; // r12@8
  char *v10; // rbx@8
  char *v11; // r15@10
  int v12; // er14@12
  int v13; // eax@12
  int v14; // eax@13
  int v15; // edx@13
  char *v16; // rax@13
  char v17; // al@16
  __int64 v18; // rcx@20
  const char *v19; // rbx@20
  char *v20; // rax@34
  char *v21; // r14@34
  int v22; // er13@35
  int v23; // eax@35
  int v24; // eax@36
  int v25; // edx@36
  signed __int64 v26; // rcx@36
  const char *v27; // rax@36
  char v28; // al@39
  __int64 v29; // r8@42
  signed __int64 v30; // r13@43
  unsigned __int64 v31; // r13@44
  size_t v32; // rax@44
  int v33; // edx@44
  size_t v34; // r12@44
  __int64 v35; // rax@49
  int v36; // eax@51
  __int64 v37; // rax@54
  __int64 v38; // rdi@58
  char *v39; // rbx@60
  int v40; // eax@61
  unsigned int v41; // edx@61
  unsigned __int8 v42; // cf@66
  __int64 v43; // rax@71
  __time_t v44; // rdx@72
  __int64 v45; // rcx@72
  int v46; // esi@72
  __int64 v47; // r9@72
  int v48; // edi@74
  int v49; // eax@74
  signed __int64 v50; // rax@76
  char *v51; // rdx@78
  __int64 v52; // rax@79
  __int64 v53; // rdx@83
  char *v54; // rdi@83
  __int64 v55; // rsi@83
  __int64 v56; // ST18_8@89
  int v57; // ST14_4@89
  char *v58; // rax@89
  __time_t v59; // rdi@90
  int v60; // er13@97
  unsigned int v61; // edi@97
  __int64 v62; // rcx@97
  int v63; // er8@97
  char *v64; // rax@11
  __int64 v65; // rax@102
  char *v66; // rdx@103
  __int64 v67; // rax@105
  int v68; // eax@112
  __int64 v70; // [sp+18h] [bp-1330h]@102
  char v71; // [sp+24h] [bp-1324h]@2
  __int64 v72; // [sp+25h] [bp-1323h]@56
  signed __int16 v73; // [sp+2Dh] [bp-131Bh]@56
  char v74; // [sp+2Eh] [bp-131Ah]@4
  char v75; // [sp+2Fh] [bp-1319h]@56
  __int64 v76; // [sp+30h] [bp-1318h]@7
  __int64 v77; // [sp+38h] [bp-1310h]@7
  char v78; // [sp+40h] [bp-1308h]@101
  char v79; // [sp+60h] [bp-12E8h]@71
  int v80; // [sp+70h] [bp-12D8h]@78
  char v81; // [sp+A0h] [bp-12A8h]@97
  int v82; // [sp+B0h] [bp-1298h]@104
  char v83; // [sp+E0h] [bp-1268h]@11
  char s; // [sp+4D0h] [bp-E78h]@8

  v4 = a1;
  if ( *(_BYTE *)(a1 + 184) )
  {
    v5 = &v71;
    sub_40BB60(a1 + 24, &v71);
  }
  else
  {
    v5 = &v71;
    v71 = byte_419FC8[(unsigned __int64)*(_DWORD *)(a1 + 168)];
    v72 = 4557430888798830399LL;
    v73 = 16191;
    v75 = 0;
  }
  if ( !byte_625724 )
  {
    v74 = 0;
    goto LABEL_5;
  }
  v36 = *(_DWORD *)(a1 + 188);
  if ( v36 == 1 )
  {
    v74 = 46;
LABEL_5:
    v6 = dword_6256F4;
    if ( dword_6256F4 != 1 )
      goto LABEL_6;
LABEL_54:
    v37 = *(_QWORD *)(a1 + 136);
    v76 = *(_QWORD *)(a1 + 128);
    v8 = *(_BYTE *)(a1 + 184);
    v77 = v37;
    if ( !byte_6256BC )
      goto LABEL_8;
    goto LABEL_57;
  }
  if ( v36 != 2 )
    goto LABEL_5;
  v6 = dword_6256F4;
  v74 = 43;
  if ( dword_6256F4 == 1 )
    goto LABEL_54;
LABEL_6:
  if ( v6 )
  {
    if ( v6 != 2 )
      abort();
    v35 = *(_QWORD *)(a1 + 104);
    v76 = *(_QWORD *)(a1 + 96);
    v8 = *(_BYTE *)(a1 + 184);
    v77 = v35;
    if ( !byte_6256BC )
      goto LABEL_8;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 120);
    v76 = *(_QWORD *)(a1 + 112);
    v8 = *(_BYTE *)(a1 + 184);
    v77 = v7;
    if ( !byte_6256BC )
    {
LABEL_8:
      v9 = &s;
      v10 = &s;
      goto LABEL_9;
    }
  }
LABEL_57:
  if ( (_BYTE)v8 )
  {
    v38 = *(_QWORD *)(a1 + 32);
    if ( v38 )
      sub_40E520(v38, &v83, v8, a4);
  }
  v9 = &s;
  v39 = &s;
  __sprintf_chk(&s, 1LL, 3643LL, "%*s ", (unsigned int)dword_625720);
  do
  {
    v40 = *(_DWORD *)v39;
    v39 += 4;
    v41 = ~v40 & (v40 - 16843009) & 0x80808080;
  }
  while ( !v41 );
  if ( !((unsigned __int16)~(_WORD)v40 & (unsigned __int16)(v40 - 257) & 0x8080) )
    LOBYTE(v41) = v41 >> 16;
  if ( !((unsigned __int16)~(_WORD)v40 & (unsigned __int16)(v40 - 257) & 0x8080) )
    v39 += 2;
  v42 = __CFADD__((_BYTE)v41, (_BYTE)v41);
  v8 = *(_BYTE *)(v4 + 184);
  v10 = &v39[-v42 - 3];
LABEL_9:
  if ( byte_6256EC )
  {
    v11 = "?";
    if ( (_BYTE)v8 )
    {
      LODWORD(v64) = sub_40D5D0(*(_QWORD *)(v4 + 88), &v83, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
      v11 = v64;
    }
    v12 = dword_62571C;
    v13 = v12 - (unsigned __int64)sub_40EB70(v11);
    if ( v13 > 0 )
    {
      v14 = v13 - 1;
      v15 = v14;
      a4 = (signed __int64)&v10[v14 + 1];
      v16 = v10;
      do
        *(++v16 - 1) = 32;
      while ( v16 != (char *)a4 );
      v10 += v15 + 1;
    }
    do
    {
      v17 = *(++v11 - 1);
      *(++v10 - 1) = v17;
    }
    while ( v17 );
    *(v10 - 1) = 32;
    v8 = *(_BYTE *)(v4 + 184);
  }
  if ( (_BYTE)v8 )
    sub_40E520(*(_QWORD *)(v4 + 40), &v83, v8, a4);
  __sprintf_chk(v10, 1LL, -1LL, "%s %*s ", v5);
  v19 = &v10[strlen(v10)];
  if ( byte_6256D8 )
  {
    fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
    qword_6255B8 += 2LL;
  }
  if ( byte_6245A9 || byte_6245A8 || byte_6256EE || byte_625725 )
  {
    fputs_unlocked(v9, stdout);
    qword_6255B8 += v19 - v9;
    if ( byte_6245A9 )
      sub_405520(*(_DWORD *)(v4 + 52), dword_625710, *(_BYTE *)(v4 + 184));
    if ( byte_6245A8 )
    {
      v53 = (unsigned int)dword_62570C;
      v54 = "?";
      v55 = *(_DWORD *)(v4 + 56);
      if ( *(_BYTE *)(v4 + 184) )
      {
        v54 = 0LL;
        if ( !byte_6256ED )
        {
          v56 = *(_DWORD *)(v4 + 56);
          v57 = dword_62570C;
          LODWORD(v58) = sub_40E2F0((unsigned int)v55);
          v55 = v56;
          v53 = (unsigned int)v57;
          v54 = v58;
        }
      }
      sub_405460(v54, v55, v53);
    }
    if ( byte_6256EE )
      sub_405520(*(_DWORD *)(v4 + 52), dword_625708, *(_BYTE *)(v4 + 184));
    v19 = v9;
    if ( byte_625725 )
      sub_405460(*(char **)(v4 + 176), 0LL, (unsigned int)dword_625714);
  }
  if ( !*(_BYTE *)(v4 + 184) )
  {
    v21 = "?";
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(v4 + 48) & 0xB000) != 0x2000 )
  {
    LODWORD(v20) = sub_40D5D0(*(_QWORD *)(v4 + 72), &v83, (unsigned int)dword_6256DC, 1LL, qword_6245A0);
    v21 = v20;
LABEL_35:
    v22 = dword_6256FC;
    v23 = v22 - (unsigned __int64)sub_40EB70(v21);
    if ( v23 > 0 )
    {
      v24 = v23 - 1;
      v25 = v24;
      v26 = (signed __int64)&v19[v24 + 1];
      v27 = v19;
      do
        *((_BYTE *)++v27 - 1) = 32;
      while ( v27 != (const char *)v26 );
      v19 += v25 + 1;
    }
    do
    {
      v28 = *(++v21 - 1);
      *((_BYTE *)++v19 - 1) = v28;
    }
    while ( v28 );
    *((_BYTE *)v19 - 1) = 32;
    goto LABEL_41;
  }
  v60 = dword_6256FC - (dword_625704 + dword_625700 + 2);
  v61 = *(_QWORD *)(v4 + 64) >> 12;
  LOBYTE(v61) = 0;
  sub_40E520((unsigned __int8)*(_QWORD *)(v4 + 64) | v61, &v83, (unsigned __int8)*(_QWORD *)(v4 + 64), v18);
  sub_40E520(
    (*(_QWORD *)(v4 + 64) >> 8) & 0xFFF | (unsigned int)(*(_QWORD *)(v4 + 64) >> 32) & 0xFFFFF000,
    &v81,
    (*(_QWORD *)(v4 + 64) >> 8) & 0xFFFLL,
    v62);
  v63 = 0;
  if ( v60 >= 0 )
    v63 = v60;
  __sprintf_chk(v19, 1LL, -1LL, &unk_41B096, (unsigned int)(dword_625704 + v63));
  v19 += dword_6256FC + 1;
LABEL_41:
  *v19 = 1;
  if ( !*(_BYTE *)(v4 + 184) )
    goto LABEL_42;
  LODWORD(v43) = sub_4176F0(qword_625668, &v76, &v79);
  if ( !v43 )
    goto LABEL_81;
  v44 = tp.tv_sec;
  v45 = v76;
  v46 = tp.tv_nsec;
  v47 = v77;
  if ( tp.tv_sec < v76 )
    goto LABEL_110;
  if ( tp.tv_sec <= v76 )
  {
    v48 = tp.tv_nsec;
    v49 = v77;
    if ( LODWORD(tp.tv_nsec) - (signed int)v77 >= 0 )
    {
      if ( tp.tv_sec - 15778476 >= v76 )
      {
        v50 = 0LL;
        goto LABEL_77;
      }
LABEL_96:
      v50 = (unsigned int)(v49 - v48) >> 31;
      goto LABEL_77;
    }
LABEL_110:
    sub_40C150(&tp);
    v45 = v76;
    v47 = v77;
    v44 = tp.tv_sec;
    v46 = tp.tv_nsec;
    v59 = tp.tv_sec - 15778476;
    if ( tp.tv_sec - 15778476 < v76 )
      goto LABEL_93;
    goto LABEL_91;
  }
  v59 = tp.tv_sec - 15778476;
  if ( tp.tv_sec - 15778476 < v76 )
    goto LABEL_113;
LABEL_91:
  v50 = 0LL;
  if ( v59 > v45 || v46 - (signed int)v47 >= 0 )
    goto LABEL_77;
LABEL_93:
  if ( v45 >= v44 )
  {
    v50 = 0LL;
    if ( v45 > v44 )
      goto LABEL_77;
    v49 = v47;
    v48 = v46;
    goto LABEL_96;
  }
LABEL_113:
  v50 = 1LL;
LABEL_77:
  if ( byte_624788 )
    v51 = (char *)(((v80 + 12 * v50) << 7) + 6440864);
  else
    v51 = (&off_624410)[8 * v50];
  LODWORD(v52) = sub_410650(v19, 1001LL, v51, &v79, qword_625668, v47);
  if ( v52 )
  {
    v19 += v52;
    goto LABEL_82;
  }
LABEL_81:
  if ( *v19 )
  {
    if ( *(_BYTE *)(v4 + 184) )
    {
      sub_40E480(v76, &v78);
      v29 = (unsigned int)dword_624404;
      if ( dword_624404 >= 0 )
        goto LABEL_43;
      goto LABEL_102;
    }
LABEL_42:
    v29 = (unsigned int)dword_624404;
    if ( dword_624404 >= 0 )
    {
LABEL_43:
      __sprintf_chk(v19, 1LL, -1LL, "%*s ", v29);
      v30 = (signed __int64)&v19[strlen(v19)];
      goto LABEL_44;
    }
LABEL_102:
    v70 = 0LL;
    LODWORD(v65) = sub_4176F0(qword_625668, &v70, &v81);
    if ( !v65 )
      goto LABEL_119;
    v66 = off_624410;
    if ( byte_624788 )
      v66 = (char *)(((signed __int64)v82 << 7) + 6440864);
    LODWORD(v67) = sub_410650(&v83, 1001LL, v66, &v81, qword_625668, 0LL);
    if ( v67 )
    {
      v68 = sub_40E9B0(&v83);
      v29 = (unsigned int)v68;
      dword_624404 = v68;
    }
    else
    {
LABEL_119:
      v29 = (unsigned int)dword_624404;
    }
    if ( (signed int)v29 < 0 )
    {
      dword_624404 = 0;
      v29 = 0LL;
    }
    goto LABEL_43;
  }
LABEL_82:
  v30 = (signed __int64)(v19 + 1);
  *(_WORD *)v19 = 32;
LABEL_44:
  v31 = v30 - (_QWORD)v9;
  fputs_unlocked(v9, stdout);
  qword_6255B8 += v31;
  v32 = sub_406690(v4, 0, (size_t)&unk_625560, v31);
  v33 = *(_DWORD *)(v4 + 168);
  v34 = v32;
  if ( v33 == 6 )
  {
    if ( *(_QWORD *)(v4 + 8) )
    {
      fwrite_unlocked(" -> ", 1uLL, 4uLL, stdout);
      qword_6255B8 += 4LL;
      LOBYTE(v32) = sub_406690(v4, 1, 0LL, v31 + v34 + 4);
      if ( dword_6256D4 )
        LOBYTE(v32) = sub_4058A0(1, *(_DWORD *)(v4 + 172), 0);
    }
  }
  else
  {
    LOBYTE(v32) = dword_6256D4;
    if ( dword_6256D4 )
      LOBYTE(v32) = sub_4058A0(*(_BYTE *)(v4 + 184), *(_DWORD *)(v4 + 48), v33);
  }
  return v32;
}

__int64 __fastcall sub_407630(const char *a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // [sp+Fh] [bp-2029h]@1
  void *ptr; // [sp+10h] [bp-2028h]@1
  __int64 v6; // [sp+18h] [bp-2020h]@1
  char v7; // [sp+20h] [bp-2018h]@1

  ptr = &v7;
  sub_405EA0(a2, a3, (size_t)&v7, &ptr, a1, (size_t *)&v6, (char *)&v4);
  if ( ptr != &v7 && ptr != (void *)a1 )
    free(ptr);
  return v6 + v4;
}

__int64 __fastcall sub_407690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rbx@3
  signed __int64 v5; // rax@4
  signed __int64 v6; // rax@8
  __int64 v7; // rbx@10
  const char *v9; // rax@17
  const char *v10; // rax@20
  __int64 v11; // [sp+0h] [bp-2A8h]@17

  if ( !byte_6256BC )
  {
    v4 = 0LL;
    goto LABEL_14;
  }
  if ( dword_6256F8 == 4 )
  {
    LODWORD(v10) = sub_40E520(*(_QWORD *)(a1 + 32), &v11, a3, a4);
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
        LODWORD(v9) = sub_40D5D0(*(_QWORD *)(a1 + 88), &v11, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
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
  char v3; // r12@1
  __int64 v4; // r9@1
  __int64 v5; // rcx@1
  unsigned __int64 v6; // rbx@1
  unsigned __int64 v7; // rdi@4
  unsigned __int64 v8; // rdx@5
  __int64 v9; // rax@7
  unsigned __int64 v10; // rbp@7
  __int64 v11; // rcx@8
  unsigned __int64 v12; // rdi@10
  __int64 v13; // rax@12
  __int64 v14; // rdi@13
  __int64 v15; // rdi@17
  char *v16; // rax@18
  unsigned __int64 v17; // rbp@21
  __int64 v18; // rax@22
  unsigned __int64 v19; // r10@22
  __int64 v20; // r9@22
  unsigned __int64 v21; // r11@23
  signed __int64 v22; // rdi@23
  unsigned __int64 v23; // r13@24
  unsigned __int64 v24; // rax@25
  __int64 *v25; // rsi@27
  unsigned __int64 v26; // r8@30
  __int64 v27; // rax@36
  __int64 v29; // rax@42

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
      v8 = 48 * (unsigned __int128)v6 >> 64 != 0;
      if ( (48 * v6 & 0x8000000000000000LL) != 0LL || 48 * (unsigned __int128)v6 >> 64 != 0 )
        goto LABEL_43;
      v10 = 2 * v6;
      LODWORD(v29) = sub_4129E0(qword_6255C8, 48 * v6);
      qword_6255C8 = v29;
    }
    else
    {
      v8 = 24 * (unsigned __int128)(unsigned __int64)qword_6255C0 >> 64 != 0;
      if ( 24 * qword_6255C0 < 0 || 24 * (unsigned __int128)(unsigned __int64)qword_6255C0 >> 64 != 0 )
        goto LABEL_43;
      LODWORD(v9) = sub_4129E0(qword_6255C8, 24 * qword_6255C0);
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
          LODWORD(v13) = sub_412980(v7);
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
      v16 = *(char **)(v15 + 8 * v5 - 8);
      *(_BYTE *)(v15 + 8 * v5 - 24) = 1;
      a2 += 8LL;
      *(_QWORD *)(v15 + 8 * v5 - 16) = v5;
      a3 = (__int64)&v16[a2];
      do
      {
        *(_QWORD *)v16 = 3LL;
        v16 += 8;
      }
      while ( (char *)a3 != v16 );
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
              v23 = v17 / ((v19 + v26 - 1) / v26);
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

int __fastcall sub_407CA0(__int64 a1, signed __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax@1
  unsigned __int64 v4; // r14@3
  __int64 v5; // r15@3
  __int64 v6; // rbx@3
  __int64 v7; // rcx@3
  __int64 v8; // r12@3
  unsigned __int64 v9; // r13@4
  unsigned __int64 v10; // rbx@4
  __int64 v11; // rcx@4
  char *v12; // rax@5
  __int64 v13; // r12@7
  __int64 v14; // rdx@7
  __int64 v15; // rcx@7
  unsigned __int64 v16; // rbp@8
  unsigned __int64 v17; // rdi@9
  unsigned __int64 v18; // rbx@11
  __int64 v19; // rdx@12
  signed __int64 v20; // rcx@12
  unsigned __int64 v21; // rbx@16
  unsigned __int64 v22; // rax@22
  __int64 v23; // rcx@22
  __int64 v24; // r15@22
  unsigned __int64 v25; // rt2@22
  __int64 v26; // rdx@22
  bool v27; // zf@22
  __int64 v28; // rdx@22
  unsigned __int64 v29; // r14@23
  __int64 v30; // r13@23
  unsigned __int64 v31; // rbp@23
  unsigned __int64 v32; // rdi@24
  __int64 v33; // r12@25
  __int64 v34; // rax@25
  __int64 v35; // rbx@25
  char *v36; // rax@26
  __int64 v38; // [sp+0h] [bp-50h]@3
  __int64 v39; // [sp+0h] [bp-50h]@25
  unsigned __int64 v40; // [sp+8h] [bp-48h]@22
  __int64 v41; // [sp+10h] [bp-40h]@22

  LODWORD(v3) = dword_6256F8;
  switch ( dword_6256F8 )
  {
    case 3:
      if ( !qword_625670 )
        goto LABEL_10;
      v4 = sub_407800(0, a2, a3);
      v5 = qword_6255C8 + 24 * v4 - 24;
      v6 = *(_QWORD *)qword_625760;
      v38 = sub_407690(*(_QWORD *)qword_625760, a2, 3 * v4, v7);
      v8 = **(_QWORD **)(v5 + 16);
      sub_406AF0(v6, 0LL);
      if ( (unsigned __int64)qword_625770 > 1 )
      {
        v9 = 0LL;
        v10 = 1LL;
        v11 = v38;
        do
        {
          v16 = v10 % v4;
          if ( v10 % v4 )
          {
            v17 = v9 + v11;
            v9 += v8;
            sub_4052C0(v17, v9);
          }
          else
          {
            v12 = stdout->_IO_write_ptr;
            if ( v12 >= stdout->_IO_write_end )
            {
              v9 = 0LL;
              __overflow(stdout, 10);
            }
            else
            {
              v9 = 0LL;
              stdout->_IO_write_ptr = v12 + 1;
              *v12 = 10;
            }
          }
          v13 = *((_QWORD *)qword_625760 + v10++);
          sub_406AF0(v13, v9);
          v11 = sub_407690(v13, v9, v14, v15);
          v8 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v16);
        }
        while ( v10 < qword_625770 );
      }
      v3 = (unsigned __int64)stdout->_IO_write_ptr;
      if ( (char *)v3 >= stdout->_IO_write_end )
      {
        LODWORD(v3) = __overflow(stdout, 10);
      }
      else
      {
        stdout->_IO_write_ptr = (char *)(v3 + 1);
        *(_BYTE *)v3 = 10;
      }
      return v3;
    case 4:
      goto LABEL_10;
    case 0:
      v18 = 0LL;
      if ( qword_625770 )
      {
        do
        {
          sub_405E30();
          sub_406C60(*((_QWORD *)qword_625760 + v18), a2, v19, v20);
          v3 = (unsigned __int64)stdout->_IO_write_ptr;
          if ( (char *)v3 >= stdout->_IO_write_end )
          {
            a2 = 10LL;
            LODWORD(v3) = __overflow(stdout, 10);
          }
          else
          {
            stdout->_IO_write_ptr = (char *)(v3 + 1);
            *(_BYTE *)v3 = 10;
          }
          ++qword_6255B8;
          ++v18;
        }
        while ( qword_625770 > v18 );
      }
      break;
    case 1:
      v21 = 0LL;
      if ( qword_625770 )
      {
        do
        {
          sub_406AF0(*((_QWORD *)qword_625760 + v21), 0LL);
          v3 = (unsigned __int64)stdout->_IO_write_ptr;
          if ( (char *)v3 >= stdout->_IO_write_end )
          {
            LODWORD(v3) = __overflow(stdout, 10);
          }
          else
          {
            stdout->_IO_write_ptr = (char *)(v3 + 1);
            *(_BYTE *)v3 = 10;
          }
          ++v21;
        }
        while ( qword_625770 > v21 );
      }
      break;
    case 2:
      if ( !qword_625670 )
LABEL_10:
        JUMPOUT(&loc_407AE0);
      v22 = sub_407800(1, a2, a3);
      v40 = 0LL;
      v23 = v22;
      v24 = qword_6255C8 + 24 * v22 - 24;
      v25 = qword_625770 % v22;
      v3 = qword_625770 / v22;
      v26 = v25 != 0;
      v27 = v3 + v26 == 0;
      v28 = v3 + v26;
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
            v34 = sub_407690(*((_QWORD *)qword_625760 + v29), a2, v28, v23);
            a2 = v31;
            v39 = v34;
            v35 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + v30);
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
          LODWORD(v3) = ++v40;
        }
        while ( v41 != v40 );
      }
      break;
    default:
      return v3;
  }
  return v3;
}

signed int __fastcall sub_408040(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  signed int result; // eax@4
  __int64 v5; // rax@5

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

signed int __fastcall sub_4080C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  signed int result; // eax@3

  v2 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(a1 + 72) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a1 + 72) == v2 )
  {
    result = sub_4050D0(*(const char **)a1, *(const char **)a2);
  }
  else
  {
    result = *(_QWORD *)(a1 + 72) < v2;
  }
  return result;
}

signed int __fastcall sub_408100(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  signed int result; // eax@4
  __int64 v5; // rax@5

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
        result = sub_4050D0(*(const char **)a1, *(const char **)a2);
      else
        result = *(_QWORD *)(a1 + 72) < v5;
      return result;
    }
LABEL_9:
    result = -1;
  }
  return result;
}

signed int __fastcall sub_408180(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  signed int result; // eax@4
  __int64 v5; // rax@5

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

signed int __fastcall sub_408200(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  signed int result; // eax@4
  __int64 v5; // rax@5

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
        result = sub_4050D0(*(const char **)a2, *(const char **)a1);
      else
        result = *(_QWORD *)(a2 + 72) < v5;
      return result;
    }
LABEL_9:
    result = -1;
  }
  return result;
}

signed int __fastcall sub_408280(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx@1
  signed int result; // eax@3

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a2 + 72) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a2 + 72) == v2 )
  {
    result = sub_4050D0(*(const char **)a2, *(const char **)a1);
  }
  else
  {
    result = *(_QWORD *)(a2 + 72) < v2;
  }
  return result;
}

signed int __fastcall sub_4082C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx@1
  signed int result; // eax@3

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a2 + 72) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a2 + 72) == v2 )
  {
    result = strcmp(*(const char **)a2, *(const char **)a1);
  }
  else
  {
    result = *(_QWORD *)(a2 + 72) < v2;
  }
  return result;
}

int __fastcall sub_408300(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
        if ( (unsigned int)*(_QWORD *)(a2 + 136) == *(_DWORD *)(a1 + 136) )
          result = strcmp(*(const char **)a1, *(const char **)a2);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_408390(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a2 + 120) - *(_DWORD *)(a1 + 120);
        if ( (unsigned int)*(_QWORD *)(a2 + 120) == *(_DWORD *)(a1 + 120) )
          result = strcmp(*(const char **)a1, *(const char **)a2);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

__int64 __fastcall sub_408410(unsigned int a1)
{
  int *v1; // rax@2
  int v2; // ecx@3
  unsigned int v3; // edx@3
  __int64 result; // rax@8
  char *v5; // rax@9
  __int64 v6; // [sp+0h] [bp-38h]@2

  if ( byte_6256ED || (LODWORD(v5) = sub_40E160(), !v5) )
  {
    __sprintf_chk(&v6, 1LL, 21LL, 4304996LL, a1);
    v1 = (int *)&v6;
    do
    {
      v2 = *v1;
      ++v1;
      v3 = ~v2 & (v2 - 16843009) & 0x80808080;
    }
    while ( !v3 );
    if ( !((unsigned __int16)~(_WORD)v2 & (unsigned __int16)(v2 - 257) & 0x8080) )
      v3 >>= 16;
    if ( !((unsigned __int16)~(_WORD)v2 & (unsigned __int16)(v2 - 257) & 0x8080) )
      LODWORD(v1) = (_DWORD)v1 + 2;
    result = (_DWORD)v1 - (__CFADD__((_BYTE)v3, (_BYTE)v3) + 3) - (unsigned int)&v6;
  }
  else
  {
    result = sub_40EB70(v5);
    if ( (signed int)result < 0 )
      result = 0LL;
  }
  return result;
}

void sub_4084B0()
{
  char *v0; // rbx@1
  char *v1; // r12@1
  __int64 v2; // rbp@2

  v0 = (char *)qword_625760;
  v1 = (char *)qword_625760 + 8 * qword_625770;
  if ( qword_625770 )
  {
    do
    {
      v2 = *(_QWORD *)v0;
      v0 += 8;
      free(*(void **)v2);
      free(*(void **)(v2 + 8));
      free(*(void **)(v2 + 16));
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

__int64 __fastcall sub_408580(char *a1, __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r15@1
  int v5; // er14@1
  char v6; // r13@1
  __int64 v7; // rcx@1
  __int64 v8; // rdi@1
  __int64 v9; // rax@4
  signed __int64 v10; // rbx@5
  char v11; // r8@7
  char v12; // dl@8
  void *v13; // r12@8
  char v14; // cl@9
  struct stat *v15; // r15@11
  __int64 v16; // rdx@14
  int *v17; // rax@19
  __int64 v18; // r14@19
  int v19; // er9@21
  int v20; // eax@23
  signed __int64 v21; // rcx@26
  __int64 v22; // r12@26
  __int64 v23; // rax@30
  bool v25; // dl@37
  bool v26; // al@43
  bool v27; // al@44
  bool v28; // al@45
  bool v29; // al@46
  char *v30; // rax@53
  __int64 v31; // rdx@53
  char *v32; // rax@55
  int v33; // eax@55
  int v34; // eax@62
  const char *v35; // rax@65
  int v36; // eax@65
  __int64 v37; // rcx@65
  const char *v38; // rax@68
  int v39; // eax@68
  __int64 v40; // rcx@68
  unsigned int v41; // edi@70
  const char *v42; // rax@70
  int v43; // eax@70
  int v44; // eax@72
  int *v45; // rax@76
  __int64 v46; // r14@76
  __int64 v47; // rax@81
  char *v48; // rax@82
  int v49; // eax@84
  const char *v50; // rax@89
  int v51; // eax@89
  char v52; // ST0E_1@92
  size_t v53; // r12@92
  size_t v54; // rax@92
  char v55; // cl@92
  char v56; // r10@92
  char v57; // dl@92
  void *v58; // rsp@92
  _BYTE *v59; // rdi@92
  unsigned __int64 v60; // rsi@93
  _BYTE *v61; // rax@95
  char *v62; // rcx@100
  bool v63; // al@103
  char *v64; // rax@105
  int v65; // eax@110
  char *v66; // rsi@115
  const char *v67; // r14@115
  int *v68; // rax@117
  size_t v69; // rax@118
  char *v70; // rax@118
  size_t v71; // rdx@118
  const char *v72; // r15@118
  char *v73; // rax@120
  int v74; // eax@136
  int v75; // eax@138
  unsigned int v76; // er14@140
  struct stat *v77; // rax@141
  int v78; // ecx@142
  bool v79; // zf@143
  int v80; // eax@147
  const char *v81; // rax@150
  char *v82; // rax@161
  __int64 v83; // rdx@161
  int *v84; // r8@163
  __int64 v85; // rcx@163
  __int64 v86; // rax@167
  bool v87; // al@171
  bool v88; // al@172
  bool v89; // al@173
  char *v90; // rax@175
  int v91; // eax@181
  char v92; // [sp+Fh] [bp-2F1h]@92
  int *v93; // [sp+10h] [bp-2F0h]@42
  char *filename; // [sp+18h] [bp-2E8h]@1
  char v95; // [sp+20h] [bp-2E0h]@65
  struct stat stat_buf; // [sp+40h] [bp-2C0h]@55

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v7 = qword_625770;
  filename = a1;
  v8 = qword_625780;
  if ( qword_625770 == qword_625778 )
  {
    if ( 400 * qword_625770 < 0 || 400 * (unsigned __int128)(unsigned __int64)qword_625770 >> 64 != 0 )
      sub_412BD0(qword_625780, a2, 400 * (unsigned __int128)(unsigned __int64)qword_625770 >> 64 != 0);
    LODWORD(v9) = sub_4129E0(qword_625780, 400 * qword_625770);
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
    v14 = *(_BYTE *)v4;
    if ( !*(_BYTE *)v4 )
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
    v14 = *(_BYTE *)v4;
    v13 = filename;
    if ( !*(_BYTE *)v4 )
    {
LABEL_81:
      v47 = sub_40B070(v13);
      *(_QWORD *)(v10 + 16) = v47;
      if ( !v47 )
      {
        v48 = dcgettext(0LL, "error canonicalizing %s", 5);
        sub_405580(v6, v48, (__int64)v13);
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
      v87 = sub_404AE0(0x13u);
      v11 = (char)v93;
      if ( v87 )
        goto LABEL_47;
      v88 = sub_404AE0(0x12u);
      v11 = (char)v93;
      if ( v88 )
        goto LABEL_47;
      v89 = sub_404AE0(0x14u);
      v11 = (char)v93;
      if ( v89 )
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
    if ( *filename == 47 || (v14 = *(_BYTE *)v4) == 0 )
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
    v52 = v11;
    v92 = v12;
    LOBYTE(v93) = v14;
    v53 = strlen(filename);
    v54 = strlen((const char *)v4);
    v55 = (char)v93;
    v56 = *(_BYTE *)(v4 + 1);
    v57 = v92;
    v11 = v52;
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
        v56 = *(_BYTE *)(v60 + 1);
        ++v59;
      }
      if ( v4 < v60 && *(_BYTE *)(v60 - 1) != 47 )
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
          v49 = __xstat(1, (const char *)v13, (struct stat *)(v10 + 24));
          if ( (_DWORD)v93 == 3 )
            goto LABEL_87;
          if ( v49 < 0 )
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
              if ( !v49 )
                goto LABEL_15;
LABEL_161:
              v82 = dcgettext(0LL, "cannot access %s", 5);
              v83 = (__int64)v13;
              v22 = 0LL;
              sub_405580(1, v82, v83);
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
        v45 = __errno_location();
        v46 = *(_QWORD *)(v10 + 24);
        v79 = v46 == qword_6246B8;
        *v45 = 95;
        if ( !v79 )
          qword_6246B8 = v46;
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
            v91 = *(_DWORD *)(v10 + 48);
            *(_DWORD *)(v10 + 188) = 0;
            v20 = v91 & 0xF000;
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
              v84 = v93;
              v16 = (unsigned int)*v93;
              v85 = ((_DWORD)v16 - 22) & 0xFFFFFFEF;
              if ( !(((_DWORD)v16 - 22) & 0xFFFFFFEF) || (_DWORD)v16 == 95 )
              {
                v16 = *(_QWORD *)(v10 + 24);
                qword_6246A8 = *(_QWORD *)(v10 + 24);
              }
              *(_DWORD *)(v10 + 188) = 0;
              if ( v65 < 0 )
              {
                v93 = v84;
                LODWORD(v86) = sub_412110(0LL, 3LL, v13, v85);
                error(0, *v93, "%s", v86);
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
          v67 = (const char *)sub_40ABF0((char *)v13);
          *(_QWORD *)(v10 + 8) = v67;
          if ( !v67 )
          {
            v66 = dcgettext(0LL, "cannot read symbolic link %s", 5);
            sub_405580(v6, v66, (__int64)v13);
            v67 = *(const char **)(v10 + 8);
            if ( !v67 )
              goto LABEL_186;
          }
          if ( *v67 != 47 && (LODWORD(v68) = sub_40B7B0(v13, v66), v68) )
          {
            v93 = v68;
            v69 = strlen(v67);
            LODWORD(v70) = sub_412980((char *)v93 + v69 + 2);
            v71 = (size_t)v93;
            v72 = v70;
            if ( *((_BYTE *)v93 + (_QWORD)v13 - 1) != 47 )
              v71 = (size_t)v93 + 1;
            v73 = stpncpy(v70, (const char *)v13, v71);
            strcpy(v73, v67);
          }
          else
          {
            LODWORD(v81) = sub_412BB0(v67);
            v72 = v81;
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
          free((void *)v72);
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
          LODWORD(v32) = sub_40D5D0(*(_QWORD *)(v10 + 88), &stat_buf, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
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
              if ( byte_6256ED || (LODWORD(v90) = sub_40E2F0(v76), !v90) )
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
                v21 = (signed __int64)&v77->st_dev + 2;
                if ( v79 )
                  LODWORD(v77) = (_DWORD)v77 + 2;
                v80 = (_DWORD)v77 - (__CFADD__((_BYTE)v16, (_BYTE)v16) + 3) - (unsigned __int64)&stat_buf;
              }
              else
              {
                v80 = sub_40EB70(v90);
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
                LODWORD(v35) = sub_40E520(*(_QWORD *)(v10 + 40), &v95, v16, v21);
                v36 = strlen(v35);
                if ( v36 > dword_625718 )
                  dword_625718 = v36;
                if ( (*(_DWORD *)(v10 + 48) & 0xB000) == 0x2000 )
                {
                  LODWORD(v38) = sub_40E520(
                                   (*(_QWORD *)(v10 + 64) >> 8) & 0xFFF | (unsigned int)(*(_QWORD *)(v10 + 64) >> 32) & 0xFFFFF000,
                                   &stat_buf,
                                   (*(_QWORD *)(v10 + 64) >> 8) & 0xFFFLL,
                                   v37);
                  v39 = strlen(v38);
                  if ( v39 > dword_625704 )
                    dword_625704 = v39;
                  v41 = *(_QWORD *)(v10 + 64) >> 12;
                  LOBYTE(v41) = 0;
                  LODWORD(v42) = sub_40E520(
                                   (unsigned __int8)*(_QWORD *)(v10 + 64) | v41,
                                   &stat_buf,
                                   (unsigned __int8)*(_QWORD *)(v10 + 64),
                                   v40);
                  v43 = strlen(v42);
                  v16 = (unsigned int)dword_625700;
                  if ( v43 > dword_625700 )
                  {
                    dword_625700 = v43;
                    v16 = (unsigned int)v43;
                  }
                  v44 = v16 + dword_625704 + 2;
                  if ( v44 <= dword_6256FC )
                    goto LABEL_29;
                  goto LABEL_106;
                }
                LODWORD(v64) = sub_40D5D0(
                                 *(_QWORD *)(v10 + 72),
                                 &stat_buf,
                                 (unsigned int)dword_6256DC,
                                 1LL,
                                 qword_6245A0);
                v44 = sub_40EB70(v64);
                if ( v44 > dword_6256FC )
                {
LABEL_106:
                  dword_6256FC = v44;
                  goto LABEL_29;
                }
              }
LABEL_29:
              if ( byte_6256BC )
              {
                LODWORD(v50) = sub_40E520(*(_QWORD *)(v10 + 32), &stat_buf, v16, v21);
                v51 = strlen(v50);
                if ( v51 > dword_625720 )
                  dword_625720 = v51;
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
  LODWORD(v23) = sub_412BB0(filename);
  ++qword_625770;
  *(_QWORD *)v10 = v23;
  return v22;
}

void __fastcall sub_4092A0(void *src, char *a2, char a3)
{
  char *v3; // r14@1
  const char *v4; // rbp@1
  char v5; // bl@1
  int *v6; // rax@1
  int *v7; // r12@1
  DIR *v8; // rax@1
  DIR *v9; // r13@2
  int v10; // eax@3
  __ino_t v11; // ST20_8@5
  __dev_t v12; // ST18_8@5
  __int64 v13; // rax@5
  __int64 v14; // rdi@5
  void *v15; // r15@5
  void *v16; // rax@5
  __int64 v17; // rdx@5
  __int64 v18; // rcx@7
  __int64 v19; // rax@7
  __int64 v20; // rbx@7
  char *v21; // rax@7
  __int64 v22; // rax@9
  __ino_t v23; // r15@9
  __dev_t v24; // rcx@9
  __dev_t v25; // ST18_8@10
  char *v26; // rax@14
  const char *v27; // r15@18
  struct dirent *v28; // rax@23
  struct dirent *v29; // rbx@23
  char *v30; // rbp@24
  __int64 v31; // r15@27
  char *v32; // rax@35
  FILE *v33; // rdi@38
  __int64 v34; // rdx@40
  char *v35; // rbx@46
  char *v36; // rax@46
  const char *v37; // rax@48
  const char *v38; // rbx@48
  size_t v39; // rax@48
  char *v40; // rax@48
  __int64 v41; // r15@55
  __int64 v42; // rdx@66
  char *v43; // rax@69
  char *v44; // rax@70
  char *v45; // [sp-8h] [bp-2F0h]@0
  char v46; // [sp+8h] [bp-2E0h]@22
  __int64 v47; // [sp+10h] [bp-2D8h]@22
  char v48; // [sp+1Ch] [bp-2CCh]@1
  struct stat stat_buf; // [sp+20h] [bp-2C8h]@4

  v3 = (char *)src;
  v4 = a2;
  v5 = a3;
  v48 = a3;
  v6 = __errno_location();
  *v6 = 0;
  v7 = v6;
  v8 = opendir((const char *)src);
  if ( !v8 )
  {
    v44 = dcgettext(0LL, "cannot open directory %s", 5);
    sub_405580(v48, v44, (__int64)src);
    return;
  }
  v9 = v8;
  if ( qword_625788 )
  {
    v10 = dirfd(v8);
    if ( v10 < 0 )
    {
      if ( !((unsigned int)__xstat(1, (const char *)src, &stat_buf) >> 31) )
        goto LABEL_5;
    }
    else if ( !((unsigned int)__fxstat(1, v10, &stat_buf) >> 31) )
    {
LABEL_5:
      v11 = stat_buf.st_ino;
      v12 = stat_buf.st_dev;
      LODWORD(v13) = sub_412980(16LL);
      v14 = qword_625788;
      a2 = (char *)v13;
      v15 = (void *)v13;
      *(_QWORD *)v13 = v11;
      *(_QWORD *)(v13 + 8) = v12;
      LODWORD(v16) = sub_40D220(v14, v13);
      if ( !v16 )
        sub_412BD0(v14, a2, v17);
      if ( v15 != v16 )
      {
        free(v15);
        LODWORD(v19) = sub_412110(0LL, 3LL, v3, v18);
        v20 = v19;
        v21 = dcgettext(0LL, "%s: not listing already-listed directory", 5);
        error(0, 0, v21, v20);
        closedir(v9);
        dword_6255D0 = 2;
        return;
      }
      v22 = qword_6254B8;
      v23 = stat_buf.st_ino;
      v24 = stat_buf.st_dev;
      if ( (unsigned __int64)(qword_6254C0 - qword_6254B8) <= 0xF )
      {
        a2 = (char *)16;
        v25 = stat_buf.st_dev;
        obstack_newchunk(&unk_6254A0, 16LL);
        v22 = qword_6254B8;
        v24 = v25;
      }
      qword_6254B8 = v22 + 16;
      *(_QWORD *)(v22 + 8) = v24;
      *(_QWORD *)v22 = v23;
      goto LABEL_12;
    }
    v32 = dcgettext(0LL, "cannot determine device and inode of %s", 5);
    sub_405580(v48, v32, (__int64)src);
    closedir(v9);
    return;
  }
LABEL_12:
  sub_4084B0();
  if ( byte_6256B6 || byte_625678 )
  {
    if ( !byte_624400 )
    {
      v26 = stdout->_IO_write_ptr;
      if ( v26 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 10);
      }
      else
      {
        stdout->_IO_write_ptr = v26 + 1;
        *v26 = 10;
      }
      ++qword_6255B8;
    }
    byte_624400 = 0;
    if ( byte_6256D8 )
    {
      v27 = 0LL;
      fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
      qword_6255B8 += 2LL;
      if ( !byte_6256D1 )
        goto LABEL_19;
    }
    else
    {
      v27 = 0LL;
      if ( !byte_6256D1 )
      {
LABEL_19:
        if ( !v4 )
          v4 = v3;
        sub_4062D0(v4, qword_625688, -1, 0LL, 1, (size_t)&unk_625500, v27);
        free((void *)v27);
        fwrite_unlocked(":\n", 1uLL, 2uLL, stdout);
        qword_6255B8 += 2LL;
        a2 = v45;
        goto LABEL_22;
      }
    }
    v27 = (const char *)sub_40B070(v3);
    if ( !v27 )
    {
      v43 = dcgettext(0LL, "error canonicalizing %s", 5);
      sub_405580(v48, v43, (__int64)v3);
    }
    goto LABEL_19;
  }
LABEL_22:
  v47 = 0LL;
  v46 = v5;
  while ( 1 )
  {
    *v7 = 0;
    v28 = readdir(v9);
    v29 = v28;
    if ( !v28 )
      break;
    v30 = v28->d_name;
    if ( dword_6256B0 == 2 )
      goto LABEL_55;
    if ( v28->d_name[0] == 46 )
    {
      if ( !dword_6256B0 || !v28->d_name[(v28->d_name[1] == 46) + 1] )
        goto LABEL_31;
LABEL_55:
      v41 = qword_6256A8;
      if ( qword_6256A8 )
      {
        while ( 1 )
        {
          a2 = v30;
          if ( !sub_4159A0(*(_QWORD *)v41, v30, 4LL) )
            break;
          v41 = *(_QWORD *)(v41 + 8);
          if ( !v41 )
            goto LABEL_60;
        }
      }
      else
      {
LABEL_60:
        a2 = 0LL;
        if ( (unsigned __int8)(v29->d_type - 1) <= 0xDu )
          a2 = (char *)(unsigned int)dword_4194A0[(unsigned __int64)(unsigned __int8)(v29->d_type - 1)];
        v47 += sub_408580(v30, (__int64)a2, 0, (unsigned __int64)v3);
        if ( dword_6256F8 == 1 && dword_6256F0 == -1 && !byte_6256EC && !byte_6256B6 )
        {
          sub_404F40((__int64)v30, (__int64)a2);
          sub_407CA0((__int64)v30, (signed __int64)a2, v42);
          sub_4084B0();
        }
      }
      goto LABEL_31;
    }
    if ( dword_6256B0 )
      goto LABEL_55;
    v31 = qword_6256A0;
    if ( !qword_6256A0 )
      goto LABEL_55;
    while ( 1 )
    {
      a2 = v30;
      if ( !sub_4159A0(*(_QWORD *)v31, v30, 4LL) )
        break;
      v31 = *(_QWORD *)(v31 + 8);
      if ( !v31 )
        goto LABEL_55;
    }
LABEL_31:
    sub_405D70();
  }
  if ( *v7 )
  {
    a2 = dcgettext(0LL, "reading directory %s", 5);
    sub_405580(v46, a2, (__int64)v3);
    if ( *v7 == 75 )
      goto LABEL_31;
  }
  v33 = (FILE *)v9;
  if ( closedir(v9) )
  {
    v33 = (FILE *)(unsigned __int8)v48;
    a2 = dcgettext(0LL, "closing directory %s", 5);
    sub_405580(v48, a2, (__int64)v3);
  }
  sub_404F40((__int64)v33, (__int64)a2);
  if ( byte_6256B6 )
  {
    a2 = 0LL;
    v33 = (FILE *)v3;
    sub_405140((__int64)v3, 0LL);
  }
  if ( !dword_6256F8 || byte_6256EC )
  {
    if ( byte_6256D8 )
    {
      fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
      qword_6255B8 += 2LL;
    }
    v35 = dcgettext(0LL, "total", 5);
    fputs_unlocked(v35, stdout);
    qword_6255B8 += strlen(v35);
    v36 = stdout->_IO_write_ptr;
    if ( v36 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 32);
    }
    else
    {
      stdout->_IO_write_ptr = v36 + 1;
      *v36 = 32;
    }
    ++qword_6255B8;
    LODWORD(v37) = sub_40D5D0(v47, &stat_buf, (unsigned int)dword_6256E8, 512LL, qword_6256E0);
    a2 = (char *)stdout;
    v38 = v37;
    fputs_unlocked(v37, stdout);
    v39 = strlen(v38);
    v33 = stdout;
    qword_6255B8 += v39;
    v40 = stdout->_IO_write_ptr;
    if ( v40 >= stdout->_IO_write_end )
    {
      a2 = (char *)10;
      __overflow(stdout, 10);
    }
    else
    {
      v34 = (__int64)(v40 + 1);
      stdout->_IO_write_ptr = v40 + 1;
      *v40 = 10;
    }
    ++qword_6255B8;
  }
  if ( qword_625770 )
    sub_407CA0((__int64)v33, (signed __int64)a2, v34);
}

int __fastcall sub_409960(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a2 + 128);
  if ( *(_QWORD *)(a1 + 128) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a1 + 128) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
    if ( (unsigned int)*(_QWORD *)(a2 + 136) == *(_DWORD *)(a1 + 136) )
      result = sub_4050D0(*(const char **)a1, *(const char **)a2);
  }
  return result;
}

int __fastcall sub_4099B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a2 + 112);
  if ( *(_QWORD *)(a1 + 112) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a1 + 112) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a2 + 120) - *(_DWORD *)(a1 + 120);
    if ( (unsigned int)*(_QWORD *)(a2 + 120) == *(_DWORD *)(a1 + 120) )
      result = sub_4050D0(*(const char **)a1, *(const char **)a2);
  }
  return result;
}

int __fastcall sub_4099F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a1 + 96) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a1 + 96) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a2 + 104) - *(_DWORD *)(a1 + 104);
    if ( (unsigned int)*(_QWORD *)(a2 + 104) == *(_DWORD *)(a1 + 104) )
      result = sub_4050D0(*(const char **)a1, *(const char **)a2);
  }
  return result;
}

int __fastcall sub_409A30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a2 + 128) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a2 + 128) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a1 + 136) - *(_DWORD *)(a2 + 136);
    if ( (unsigned int)*(_QWORD *)(a1 + 136) == *(_DWORD *)(a2 + 136) )
      result = sub_4050D0(*(const char **)a2, *(const char **)a1);
  }
  return result;
}

int __fastcall sub_409A80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a1 + 112);
  if ( *(_QWORD *)(a2 + 112) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a2 + 112) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a1 + 120) - *(_DWORD *)(a2 + 120);
    if ( (unsigned int)*(_QWORD *)(a1 + 120) == *(_DWORD *)(a2 + 120) )
      result = sub_4050D0(*(const char **)a2, *(const char **)a1);
  }
  return result;
}

int __fastcall sub_409AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a1 + 96);
  if ( *(_QWORD *)(a2 + 96) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a2 + 96) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a1 + 104) - *(_DWORD *)(a2 + 104);
    if ( (unsigned int)*(_QWORD *)(a1 + 104) == *(_DWORD *)(a2 + 104) )
      result = sub_4050D0(*(const char **)a2, *(const char **)a1);
  }
  return result;
}

int __fastcall sub_409B00(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a2 + 104) - *(_DWORD *)(a1 + 104);
        if ( (unsigned int)*(_QWORD *)(a2 + 104) == *(_DWORD *)(a1 + 104) )
          result = sub_4050D0(*(const char **)a1, *(const char **)a2);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409B80(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 120) - *(_DWORD *)(a2 + 120);
        if ( (unsigned int)*(_QWORD *)(a1 + 120) == *(_DWORD *)(a2 + 120) )
          result = sub_4050D0(*(const char **)a2, *(const char **)a1);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409C00(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 104) - *(_DWORD *)(a2 + 104);
        if ( (unsigned int)*(_QWORD *)(a1 + 104) == *(_DWORD *)(a2 + 104) )
          result = sub_4050D0(*(const char **)a2, *(const char **)a1);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409C80(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a2 + 120) - *(_DWORD *)(a1 + 120);
        if ( (unsigned int)*(_QWORD *)(a2 + 120) == *(_DWORD *)(a1 + 120) )
          result = sub_4050D0(*(const char **)a1, *(const char **)a2);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409D00(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 136) - *(_DWORD *)(a2 + 136);
        if ( (unsigned int)*(_QWORD *)(a1 + 136) == *(_DWORD *)(a2 + 136) )
          result = sub_4050D0(*(const char **)a2, *(const char **)a1);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409D90(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
        if ( (unsigned int)*(_QWORD *)(a2 + 136) == *(_DWORD *)(a1 + 136) )
          result = sub_4050D0(*(const char **)a1, *(const char **)a2);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_409E20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a1 + 96);
  if ( *(_QWORD *)(a2 + 96) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a2 + 96) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a1 + 104) - *(_DWORD *)(a2 + 104);
    if ( (unsigned int)*(_QWORD *)(a1 + 104) == *(_DWORD *)(a2 + 104) )
      result = strcmp(*(const char **)a2, *(const char **)a1);
  }
  return result;
}

int __fastcall sub_409E60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a2 + 128) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a2 + 128) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a1 + 136) - *(_DWORD *)(a2 + 136);
    if ( (unsigned int)*(_QWORD *)(a1 + 136) == *(_DWORD *)(a2 + 136) )
      result = strcmp(*(const char **)a2, *(const char **)a1);
  }
  return result;
}

int __fastcall sub_409EB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a1 + 112);
  if ( *(_QWORD *)(a2 + 112) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a2 + 112) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a1 + 120) - *(_DWORD *)(a2 + 120);
    if ( (unsigned int)*(_QWORD *)(a1 + 120) == *(_DWORD *)(a2 + 120) )
      result = strcmp(*(const char **)a2, *(const char **)a1);
  }
  return result;
}

int __fastcall sub_409EF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a1 + 96) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a1 + 96) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a2 + 104) - *(_DWORD *)(a1 + 104);
    if ( (unsigned int)*(_QWORD *)(a2 + 104) == *(_DWORD *)(a1 + 104) )
      result = strcmp(*(const char **)a1, *(const char **)a2);
  }
  return result;
}

int __fastcall sub_409F30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a2 + 128);
  if ( *(_QWORD *)(a1 + 128) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a1 + 128) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
    if ( (unsigned int)*(_QWORD *)(a2 + 136) == *(_DWORD *)(a1 + 136) )
      result = strcmp(*(const char **)a1, *(const char **)a2);
  }
  return result;
}

int __fastcall sub_409F80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  int result; // eax@3

  v2 = *(_QWORD *)(a2 + 112);
  if ( *(_QWORD *)(a1 + 112) > v2 )
  {
    result = -1;
  }
  else if ( *(_QWORD *)(a1 + 112) < v2 )
  {
    result = 1;
  }
  else
  {
    result = *(_QWORD *)(a2 + 120) - *(_DWORD *)(a1 + 120);
    if ( (unsigned int)*(_QWORD *)(a2 + 120) == *(_DWORD *)(a1 + 120) )
      result = strcmp(*(const char **)a1, *(const char **)a2);
  }
  return result;
}

int __fastcall sub_409FC0(const char **a1, const char **a2)
{
  char *v2; // rbx@1
  char *v3; // rax@1
  int result; // eax@5

  v2 = strrchr(*a1, 46);
  v3 = strrchr(*a2, 46);
  if ( !v3 )
    v3 = "\x1B]8;;\a" + 6;
  if ( !v2 )
    v2 = "\x1B]8;;\a" + 6;
  result = sub_4050D0(v2, v3);
  if ( !result )
    result = sub_4050D0(*a1, *a2);
  return result;
}

int __fastcall sub_40A030(const char **a1, const char **a2)
{
  char *v2; // rbx@1
  char *v3; // rax@1
  int result; // eax@5

  v2 = strrchr(*a2, 46);
  v3 = strrchr(*a1, 46);
  if ( !v3 )
    v3 = "\x1B]8;;\a" + 6;
  if ( !v2 )
    v2 = "\x1B]8;;\a" + 6;
  result = sub_4050D0(v2, v3);
  if ( !result )
    result = sub_4050D0(*a2, *a1);
  return result;
}

int __fastcall sub_40A0A0(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  char *v5; // r12@5
  char *v6; // rax@5

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
  {
    result = -1;
  }
  else if ( v2 || (result = 1, !v3) )
  {
    v5 = strrchr(*(const char **)a2, 46);
    v6 = strrchr(*(const char **)a1, 46);
    if ( !v6 )
      v6 = "\x1B]8;;\a" + 6;
    if ( !v5 )
      v5 = "\x1B]8;;\a" + 6;
    result = sub_4050D0(v5, v6);
    if ( !result )
      result = sub_4050D0(*(const char **)a2, *(const char **)a1);
  }
  return result;
}

int __fastcall sub_40A150(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  char *v5; // r12@5
  char *v6; // rax@5

  v2 = *(_DWORD *)(a1 + 168) == 9 || *(_DWORD *)(a1 + 168) == 3;
  v3 = *(_DWORD *)(a2 + 168) == 3 || *(_DWORD *)(a2 + 168) == 9;
  if ( !v3 && v2 )
  {
    result = -1;
  }
  else if ( v2 || (result = 1, !v3) )
  {
    v5 = strrchr(*(const char **)a1, 46);
    v6 = strrchr(*(const char **)a2, 46);
    if ( !v6 )
      v6 = "\x1B]8;;\a" + 6;
    if ( !v5 )
      v5 = "\x1B]8;;\a" + 6;
    result = sub_4050D0(v5, v6);
    if ( !result )
      result = sub_4050D0(*(const char **)a1, *(const char **)a2);
  }
  return result;
}

int __fastcall sub_40A200(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 120) - *(_DWORD *)(a2 + 120);
        if ( (unsigned int)*(_QWORD *)(a1 + 120) == *(_DWORD *)(a2 + 120) )
          result = strcmp(*(const char **)a2, *(const char **)a1);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_40A280(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 136) - *(_DWORD *)(a2 + 136);
        if ( (unsigned int)*(_QWORD *)(a1 + 136) == *(_DWORD *)(a2 + 136) )
          result = strcmp(*(const char **)a2, *(const char **)a1);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_40A310(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  __int64 v5; // rax@6

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
      {
        result = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 104) - *(_DWORD *)(a2 + 104);
        if ( (unsigned int)*(_QWORD *)(a1 + 104) == *(_DWORD *)(a2 + 104) )
          result = strcmp(*(const char **)a2, *(const char **)a1);
      }
      return result;
    }
LABEL_11:
    result = -1;
  }
  return result;
}

int __fastcall sub_40A390(const char **a1, const char **a2)
{
  const char *v2; // rbp@1
  char *v3; // rax@1
  const char *v4; // r12@1
  const char *v5; // rbx@1
  char *v6; // rax@1
  int result; // eax@4

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
      goto LABEL_7;
  }
  result = strcmp(v5, v6);
  if ( !result )
LABEL_7:
    result = strcmp(v2, v4);
  return result;
}

int __fastcall sub_40A400(const char **a1, const char **a2)
{
  const char *v2; // rbp@1
  char *v3; // rax@1
  const char *v4; // r12@1
  const char *v5; // rbx@1
  char *v6; // rax@1
  int result; // eax@4

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
      goto LABEL_7;
  }
  result = strcmp(v5, v6);
  if ( !result )
LABEL_7:
    result = strcmp(v2, v4);
  return result;
}

int __fastcall sub_40A470(__int64 a1, __int64 a2)
{
  bool v2; // cl@1
  bool v3; // dl@1
  int result; // eax@4
  const char *v5; // r12@5
  char *v6; // rax@5
  const char *v7; // rbx@5
  const char *v8; // rbp@5
  char *v9; // rax@5

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

void __fastcall __noreturn sub_40A530(int status)
{
  __int64 v1; // rbx@1
  char *v2; // rax@2
  char *v3; // rax@4
  FILE *v4; // rbx@4
  char *v5; // rax@4
  FILE *v6; // rbx@4
  char *v7; // rax@4
  FILE *v8; // rbx@4
  char *v9; // rax@4
  FILE *v10; // rbx@4
  char *v11; // rax@4
  FILE *v12; // rbx@4
  char *v13; // rax@4
  FILE *v14; // rbx@4
  char *v15; // rax@4
  FILE *v16; // rbx@4
  char *v17; // rax@4
  FILE *v18; // rbx@4
  char *v19; // rax@4
  FILE *v20; // rbx@4
  char *v21; // rax@4
  FILE *v22; // rbx@4
  char *v23; // rax@4
  FILE *v24; // rbx@4
  char *v25; // rax@4
  FILE *v26; // rbx@4
  char *v27; // rax@4
  FILE *v28; // rbx@4
  char *v29; // rax@4
  FILE *v30; // rbx@4
  char *v31; // rax@4
  FILE *v32; // rbx@4
  char *v33; // rax@4
  FILE *v34; // rbx@4
  char *v35; // rax@4
  FILE *v36; // rbx@4
  char *v37; // rax@4
  FILE *v38; // rbx@4
  char *v39; // rax@4
  FILE *v40; // rbx@4
  char *v41; // rax@4
  FILE *v42; // rbx@4
  char *v43; // rax@4
  FILE *v44; // rbx@4
  char *v45; // rax@4
  FILE *v46; // rbx@4
  char *v47; // rax@4
  FILE *v48; // rbx@4
  char *v49; // rax@4
  FILE *v50; // rbx@4
  char *v51; // rax@4
  FILE *v52; // rbx@4
  char *v53; // rax@4
  FILE *v54; // rbx@4
  char *v55; // rax@4
  FILE *v56; // rbx@4
  char *v57; // rax@4
  FILE *v58; // rbx@4
  char *v59; // rax@4
  FILE *v60; // rbx@4
  char *v61; // rax@4
  FILE *v62; // rbx@4
  char *v63; // rax@4
  const char *v64; // rbp@5
  const char *v65; // rsi@7
  __int64 *v66; // rbx@7
  const char *v67; // rbx@10
  char *v68; // rax@11
  char *v69; // rax@11
  char *v70; // rax@13
  char *v71; // rax@14
  char *v72; // rax@17
  char *v73; // rax@18
  char *v74; // rax@18
  char *v75; // rax@20
  char *v76; // [sp+0h] [bp-88h]@7
  const char *v77; // [sp+8h] [bp-80h]@7
  const char *v78; // [sp+10h] [bp-78h]@7
  const char *v79; // [sp+18h] [bp-70h]@7
  const char *v80; // [sp+20h] [bp-68h]@7
  const char *v81; // [sp+28h] [bp-60h]@7
  const char *v82; // [sp+30h] [bp-58h]@7
  const char *v83; // [sp+38h] [bp-50h]@7
  const char *v84; // [sp+40h] [bp-48h]@7
  const char *v85; // [sp+48h] [bp-40h]@7
  const char *v86; // [sp+50h] [bp-38h]@7
  const char *v87; // [sp+58h] [bp-30h]@7
  __int64 v88; // [sp+60h] [bp-28h]@7
  __int64 v89; // [sp+68h] [bp-20h]@7

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
  v66 = (__int64 *)&v76;
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
    v65 = (const char *)*v66;
  }
  while ( *v66 );
  v67 = (const char *)v66[1];
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
  size_t v2; // rbx@1
  char *v3; // rax@3
  char *v4; // rbp@3
  ssize_t v5; // r12@4
  char *v7; // rdi@12

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

signed __int64 __fastcall sub_40ACF0(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_40AE10(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx@2
  __int64 v4; // rax@3
  __int64 v5; // rbp@3
  __int64 v6; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  LODWORD(v4) = sub_412270(1LL, a1);
  v5 = v4;
  LODWORD(v6) = sub_411F60(0LL, 8LL, a2);
  error(0, 0, v3, v6, v5);
}

int __fastcall sub_40AE90(__int64 *a1, char *a2, size_t a3)
{
  char *v3; // r14@1
  size_t v4; // r13@1
  char *v5; // rbp@1
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
    while ( !v9 || memcmp(v3, v5, v4) )
    {
      ++v9;
      v3 = v5;
      v5 += v4;
      LODWORD(v11) = sub_412290(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    LODWORD(v12) = sub_412290(i);
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

__int64 __fastcall sub_40AFB0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(__int64 *, char *))
{
  size_t v6; // r15@1
  void (__fastcall *v7)(__int64 *, char *); // r13@1
  char *v8; // rbp@1
  __int64 *v9; // rbx@1
  __int64 result; // rax@1

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (__int64 *)a3;
  result = sub_40ACF0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40AE10(a1, (__int64)a2, result);
    sub_40AE90(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

char *__fastcall sub_40B070(void *src, char a2)
{
  char *v2; // r15@2
  const char *v3; // rax@5
  char *v4; // r12@5
  size_t v5; // rax@6
  size_t v6; // rbx@6
  char *v7; // rbx@7
  unsigned __int64 v8; // rbp@7
  char v9; // al@8
  char v10; // dl@10
  char *i; // r13@13
  char *v12; // r14@15
  signed __int64 v13; // r8@18
  unsigned __int64 v14; // rbp@24
  signed __int64 v15; // rbx@24
  signed __int64 v16; // rax@24
  signed __int64 v17; // rbp@24
  char *v18; // rax@26
  signed __int64 v19; // ST08_8@27
  _BYTE *v20; // rax@33
  bool v21; // al@35
  int *v22; // rdx@37
  signed int v23; // ecx@37
  int *v24; // ST08_8@39
  size_t v25; // rax@39
  int v26; // eax@42
  signed __int64 v27; // rax@49
  char *v28; // rax@51
  char *v30; // rax@58
  char *v31; // r15@58
  const char *v32; // rdi@59
  size_t v33; // r13@59
  size_t v34; // rax@59
  size_t v35; // rdx@59
  unsigned __int64 v36; // r8@59
  int *v37; // rax@66
  signed int v38; // ecx@66
  int *v39; // rdx@66
  signed int v40; // ST14_4@67
  int *v41; // ST08_8@67
  int *v42; // rdx@67
  signed int v43; // ecx@67
  signed int v44; // ST14_4@68
  int *v45; // ST08_8@68
  signed __int64 v46; // rdx@72
  __int64 v47; // rax@76
  __int64 v48; // rdx@76
  int *v49; // rax@78
  signed int v50; // ST14_4@79
  int *v51; // ST08_8@79
  signed __int64 v52; // rax@81
  void *v53; // rax@83
  char *v54; // rax@85
  signed __int64 v55; // ST08_8@61
  size_t v56; // ST20_8@61
  void *v57; // rax@61
  bool v58; // zf@96
  size_t v59; // [sp+8h] [bp-100h]@81
  int v60; // [sp+14h] [bp-F4h]@1
  __int64 v61; // [sp+18h] [bp-F0h]@8
  void *v62; // [sp+20h] [bp-E8h]@8
  void *ptr; // [sp+28h] [bp-E0h]@8
  unsigned __int64 v64; // [sp+30h] [bp-D8h]@8
  int v65; // [sp+3Ch] [bp-CCh]@39
  struct stat stat_buf; // [sp+40h] [bp-C8h]@29

  v60 = a2 & 3;
  if ( (v60 - 1) & v60 || (v2 = (char *)src) == 0LL )
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
    LODWORD(v20) = sub_412980(4096LL);
    v4 = v20;
    v8 = (unsigned __int64)(v20 + 4096);
    v7 = v20 + 1;
    *v20 = 47;
  }
  else
  {
    LODWORD(v3) = sub_412D10();
    v4 = (char *)v3;
    if ( !v3 )
      return v4;
    v5 = strlen(v3);
    v6 = v5;
    if ( v5 <= 0xFFF )
    {
      LODWORD(v54) = sub_4129E0(v4, 4096LL);
      v4 = v54;
      v7 = &v54[v6];
      v8 = (unsigned __int64)(v54 + 4096);
    }
    else
    {
      v7 = &v4[v5];
      v8 = (unsigned __int64)&v4[v5];
    }
  }
  v62 = src;
  v9 = *(_BYTE *)src;
  v61 = 0LL;
  v64 = 0LL;
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
        LODWORD(v18) = sub_4129E0(v4, v17);
        v13 = v12 - v2;
        v4 = v18;
        v8 = (unsigned __int64)&v18[v17];
        v7 = &v18[v15];
      }
      v19 = v13;
      memcpy(v7, v2, v13);
      v7 += v19;
      *v7 = 0;
      if ( v60 == 2 && a2 & 4 )
      {
LABEL_29:
        stat_buf.st_mode = 0;
LABEL_30:
        if ( *v12 && v60 != 2 )
        {
          v49 = __errno_location();
          v23 = 20;
          v22 = v49;
LABEL_79:
          v50 = v23;
          v51 = v22;
          free(ptr);
          free(v4);
          v42 = v51;
          v43 = v50;
          if ( v61 )
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
          v21 = __xstat(1, v4, &stat_buf) != 0;
        else
          v21 = __lxstat(1, v4, &stat_buf) != 0;
        if ( v21 )
        {
          v22 = __errno_location();
          v23 = *v22;
          if ( !(a2 & 3) )
            goto LABEL_79;
          if ( v60 != 1 )
            goto LABEL_29;
          v65 = *v22;
          v24 = v22;
          v25 = strspn(i + 1, "/");
          v22 = v24;
          v23 = v65;
          if ( v12[v25] || v65 != 2 )
            goto LABEL_79;
        }
        else
        {
          v26 = stat_buf.st_mode & 0xF000;
          if ( v26 != 40960 )
          {
            if ( v26 == 0x4000 )
              goto LABEL_32;
            goto LABEL_30;
          }
          if ( !v61 )
          {
            LODWORD(v47) = sub_40CA80(7LL, 0LL, sub_40D440, sub_40D4B0, sub_40D4F0);
            v61 = v47;
            if ( !v47 )
              sub_412BD0(7LL, 0LL, v48);
          }
          if ( (unsigned __int8)sub_40B9A0(v61, v62, &stat_buf) )
          {
            if ( v60 != 2 )
            {
              v37 = __errno_location();
              v38 = 40;
              v39 = v37;
LABEL_67:
              v40 = v38;
              v41 = v39;
              free(ptr);
              free(v4);
              v42 = v41;
              v43 = v40;
LABEL_68:
              v44 = v43;
              v45 = v42;
              sub_40CCC0(v61);
              v43 = v44;
              v42 = v45;
LABEL_69:
              *v42 = v43;
              return 0LL;
            }
          }
          else
          {
            sub_40B910(v61, v62, &stat_buf);
            v30 = sub_40ABF0(v4, stat_buf.st_size);
            v31 = v30;
            if ( v30 )
            {
              v32 = i + 1;
              v33 = strlen(v30);
              v34 = strlen(v32);
              v35 = v34;
              v36 = v33 + v34 + 1;
              if ( v64 )
              {
                if ( v36 > v64 )
                {
                  v55 = v33 + v34 + 1;
                  v56 = v34;
                  LODWORD(v57) = sub_4129E0(ptr, v55);
                  v35 = v56;
                  ptr = v57;
                  v64 = v55;
                }
              }
              else
              {
                v59 = v34;
                v52 = 4096LL;
                if ( v36 >= 0x1000 )
                  v52 = v36;
                v64 = v52;
                LODWORD(v53) = sub_412980(v52);
                v35 = v59;
                ptr = v53;
              }
              memmove((char *)ptr + v33, v12, v35 + 1);
              v12 = (char *)memcpy(ptr, v31, v33);
              v62 = v12;
              if ( *v31 == 47 )
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
                  v58 = *(v7-- - 2) == 47;
                  if ( !v58 )
                  {
                    do
                      --v7;
                    while ( v4 != v7 && *(v7 - 1) != 47 );
                  }
                }
              }
              free(v31);
              goto LABEL_32;
            }
            v39 = __errno_location();
            v38 = *v39;
            if ( v60 != 2 || v38 == 12 )
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
        v46 = (signed __int64)(v7 - 1);
        if ( v4 < v7 - 1 && *(v7 - 2) != 47 )
        {
          v7 -= 2;
          if ( v4 != (char *)(v46 - 1) )
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
    v27 = (signed __int64)v7--;
  else
    v27 = (signed __int64)(v7 + 1);
  *v7 = 0;
  if ( v8 != v27 )
  {
    LODWORD(v28) = sub_4129E0(v4, v7 - v4 + 1);
    v4 = v28;
  }
  free(ptr);
  if ( v61 )
    sub_40CCC0(v61);
  return v4;
}

__int64 sub_40B710()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_4120E0(qword_625798, "write error");
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

signed __int64 __fastcall sub_40B7B0(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp@1
  __int64 v3; // rax@1
  signed __int64 v4; // rdx@2
  signed __int64 result; // rax@7

  v2 = *a1 == 47;
  LODWORD(v3) = sub_40B870(a1, a2);
  if ( v3 - (signed __int64)a1 > v2 && (v4 = v3 - (_QWORD)a1 - 1, *(_BYTE *)(v3 - 1) == 47) )
  {
    while ( v2 != v4 && a1[v4 - 1] == 47 )
      --v4;
    result = v4;
  }
  else
  {
    result = v3 - (_QWORD)a1;
  }
  return result;
}

_BYTE *__fastcall sub_40B810(void *src, __int64 a2)
{
  signed __int64 v2; // rax@1
  size_t v3; // rbx@1
  _BYTE *v4; // rax@1
  _BYTE *v5; // rcx@1
  _BYTE *v6; // rax@2

  v2 = sub_40B7B0(src, a2);
  v3 = v2;
  v4 = malloc(v2 + (v2 == 0) + 1);
  v5 = v4;
  if ( v4 )
  {
    v6 = memcpy(v4, src, v3);
    v5 = v6;
    if ( !v3 )
    {
      *v6 = 46;
      v3 = 1LL;
    }
    v6[v3] = 0;
  }
  return v5;
}

_BYTE *__fastcall sub_40B870(_BYTE *a1)
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

size_t __fastcall sub_40B8D0(const char *a1)
{
  size_t result; // rax@1
  signed __int64 v2; // rdx@2

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

void __fastcall sub_40B910(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@2
  __int64 v4; // rax@2
  __int64 v5; // rbx@2
  __int64 v6; // rax@2
  __int64 v7; // rax@2
  __int64 v8; // rdx@2

  if ( a1 )
  {
    v3 = a3;
    LODWORD(v4) = sub_412980(24LL);
    v5 = v4;
    LODWORD(v6) = sub_412BB0(a2);
    *(_QWORD *)v5 = v6;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v5 + 16) = *(_QWORD *)v3;
    LODWORD(v7) = sub_40D220(a1, v5);
    if ( !v7 )
      sub_412BD0(a1, v5, v8);
    if ( v5 != v7 )
      sub_40D4F0(v5, v5);
  }
}

bool __fastcall sub_40B9A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax@2
  __int64 v4; // rax@2
  bool result; // al@2
  __int64 v6; // [sp+0h] [bp-28h]@2
  __int64 v7; // [sp+8h] [bp-20h]@2
  __int64 v8; // [sp+10h] [bp-18h]@2

  if ( a1 )
  {
    v3 = *(_QWORD *)(a3 + 8);
    v6 = a2;
    v7 = v3;
    v8 = *(_QWORD *)a3;
    LODWORD(v4) = sub_40C810(a1, &v6);
    result = v4 != 0;
  }
  else
  {
    result = 0;
  }
  return result;
}

signed __int64 __fastcall sub_40BB60(__int64 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14
  int v10; // edi@1

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
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  return result;
}

signed __int64 __fastcall sub_40BB60(__int64 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14
  int v10; // edi@1

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
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  return result;
}

signed __int64 __fastcall sub_40BB60(__int64 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14
  int v10; // edi@1

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
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  return result;
}

signed __int64 __fastcall sub_40BB60(__int64 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14
  int v10; // edi@1

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
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  return result;
}

__int64 __fastcall sub_40BB70(void *a1, void *a2)
{
  __int64 result; // rax@1
  __int64 v3; // rdx@1

  result = sub_40BB90(a1, a2);
  if ( !result )
    sub_412BD0(a1, a2, v3);
  return result;
}

void *__fastcall sub_40BB90(void *src, void *a2, _QWORD *a3)
{
  const char *v3; // r12@1
  const char *v4; // rax@1
  const char *v5; // r14@1
  size_t v6; // rax@1
  size_t v7; // rbx@1
  size_t v8; // rbp@1
  size_t v9; // rax@4
  size_t v10; // r14@4
  void *v11; // rax@4
  void *v12; // r15@4
  _BYTE *v13; // rax@5
  char *v14; // rdi@5
  _QWORD *v16; // [sp+0h] [bp-48h]@1
  char v17; // [sp+Fh] [bp-39h]@3

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

int __fastcall sub_40C150(struct timespec *tp)
{
  int result; // eax@1
  __int64 v2; // [sp+0h] [bp-18h]@2
  __int64 v3; // [sp+8h] [bp-10h]@2

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

unsigned __int64 __fastcall sub_40C1F0(unsigned __int64 a1)
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

signed __int64 __fastcall sub_40C2B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

signed __int64 __fastcall sub_40C2B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40C2E0(__int64 a1, __int64 a2, __int64 **a3, char a4)
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
  v7 = (__int64 *)sub_40C2B0(a1, a2);
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

signed __int64 __fastcall sub_40C400(void **a1)
{
  void *v1; // rax@1
  float v2; // xmm0_4@2
  float v3; // xmm1_4@5
  float v4; // xmm2_4@5
  signed __int64 result; // rax@7

  v1 = *a1;
  if ( *a1 == &unk_41D810 )
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
      *a1 = &unk_41D810;
      result = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_40C480(__int64 a1, __int64 a2, char a3)
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
              v8 = sub_40C2B0(a1, *(_QWORD *)v6);
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

__int64 __fastcall sub_40C5F0(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}

__int64 __fastcall sub_40C810(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 *v3; // rax@1
  __int64 v4; // rsi@1
  __int64 *v5; // rbx@2
  __int64 result; // rax@7

  v2 = a2;
  v3 = (__int64 *)sub_40C2B0(a1, a2);
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

char **__fastcall sub_40CA80(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(), __int64 (__fastcall *a4)(), char *a5)
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
    v7 = sub_40C290;
  if ( !a4 )
    v6 = sub_40C2A0;
  v9 = malloc(0x50uLL);
  v10 = (char **)v9;
  if ( v9 )
  {
    v11 = (void **)((char *)v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40C400(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40C1F0(v8);
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
      *((_QWORD *)v9 + 5) = &unk_41D810;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40C400(v11) )
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

void __fastcall sub_40CCC0(__int64 a1)
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

signed __int64 __fastcall sub_40CDA0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_40C1F0(a2);
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
  v14 = sub_40C480((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_40C480(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40C480(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40CDA0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_40C1F0(a2);
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
  v14 = sub_40C480((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_40C480(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40C480(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40CFA0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40C2E0(a1, a2, &v26, 0);
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
        sub_40C400((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40CDA0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40C2E0(a1, v4, &v26, 0) )
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

signed __int64 __fastcall sub_40CFA0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40C2E0(a1, a2, &v26, 0);
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
        sub_40C400((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40CDA0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40C2E0(a1, v4, &v26, 0) )
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

__int64 __fastcall sub_40D220(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  int v3; // eax@1
  __int64 result; // rax@4
  __int64 v5; // [sp+8h] [bp-10h]@1

  v2 = a2;
  v3 = sub_40CFA0(a1, a2, &v5);
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

__int64 __fastcall sub_40D260(__int64 a1, __int64 a2)
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
  v3 = sub_40C2E0(a1, a2, &v24, 1);
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
    sub_40C400((void **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40CDA0(a1, v17) )
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

unsigned __int64 __fastcall sub_40D440(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = sub_417960(*(_QWORD *)a1);
  return (*(_QWORD *)(a1 + 8) ^ v2) % a2;
}

bool __fastcall sub_40D4B0(__int64 a1, __int64 a2)
{
  bool result; // al@1

  result = 0;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8) && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
    result = strcmp(*(const char **)a1, *(const char **)a2) == 0;
  return result;
}

void __fastcall sub_40D4F0(void **a1)
{
  free(*a1);
  free(a1);
}

long double __usercall sub_40D510@<st0>(int a1@<edi>, __int128 a2)
{
  __int128 v2; // fst7@2
  unsigned __int64 v3; // rax@2
  long double v4; // fst6@3
  long double v5; // t0@4
  __int128 v6; // fst6@4
  long double result; // fst7@4

  if ( *(long double *)&a2 >= 9.223372e18 )
  {
    v2 = a2;
    v3 = (signed __int64)(*(long double *)&a2 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  else
  {
    v2 = a2;
    v3 = (signed __int64)*(long double *)&a2;
  }
  v4 = (long double)v3;
  if ( a1 )
  {
    result = v4;
  }
  else
  {
    v5 = v4;
    v6 = v2;
    result = v5;
    if ( *(long double *)&v6 != v5 )
    {
      result = (long double)(signed __int64)(v3 + 1);
      if ( ((v3 + 1) & 0x8000000000000000LL) != 0LL )
        result = result + 1.8446744e19;
    }
  }
  return result;
}

signed __int64 __fastcall sub_40D5D0(unsigned __int64 a1, char *a2, __int16 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r14@1
  unsigned __int64 v6; // rbp@1
  struct lconv *v7; // rax@1
  char *v8; // r15@1
  struct lconv *v9; // r12@1
  size_t v10; // r8@1
  char *v11; // rax@3
  const char *v12; // r12@3
  size_t v13; // rax@5
  size_t v14; // r8@5
  unsigned __int64 v15; // rax@8
  unsigned __int64 v16; // rsi@9
  long double v17; // fst7@10
  long double v18; // fst6@10
  long double v19; // fst7@11
  long double v20; // fst6@11
  long double v21; // fst7@12
  long double v22; // fst6@13
  signed int v23; // ebx@13
  long double v24; // fst5@13
  long double v25; // fst4@15
  long double v26; // fst7@15
  long double v27; // fst6@17
  long double v28; // fst7@17
  signed __int64 v29; // r14@19
  long double v30; // fst7@19
  unsigned __int64 v31; // r15@19
  long double v32; // fst6@21
  size_t v33; // rax@22
  __int64 v34; // r8@22
  long double v35; // fst7@23
  size_t v36; // r14@26
  signed __int64 v37; // r15@31
  char *v38; // r14@31
  int v39; // eax@35
  unsigned __int64 v41; // rcx@42
  unsigned __int64 v42; // rtt@43
  unsigned __int64 v43; // rdx@43
  int v44; // er9@43
  signed int v45; // edi@44
  int v46; // ecx@45
  char *v47; // rbp@56
  char *v48; // r15@56
  size_t v49; // rbx@56
  size_t v50; // rbp@56
  char v51; // dl@57
  size_t v52; // rax@58
  size_t v53; // rbp@62
  char *v54; // r14@63
  unsigned __int64 v55; // rax@66
  _BYTE *v56; // rdx@74
  unsigned __int64 v57; // r11@81
  int v58; // eax@81
  unsigned int v59; // ett@81
  int v60; // edx@81
  int v61; // edi@81
  size_t v62; // ST00_8@29
  long double v63; // ST30_16@83
  bool v64; // dl@104
  char v65; // al@108
  unsigned __int64 v66; // r9@122
  unsigned int v67; // edx@123
  __int64 v68; // rdi@124
  unsigned __int64 v69; // rcx@134
  signed __int64 v70; // r15@134
  unsigned int v71; // edx@135
  __int64 v72; // rsi@136
  signed __int64 v73; // [sp+10h] [bp-A8h]@7
  char *s; // [sp+18h] [bp-A0h]@1
  __int16 v75; // [sp+20h] [bp-98h]@1
  int v76; // [sp+24h] [bp-94h]@1
  signed int v77; // [sp+24h] [bp-94h]@56
  unsigned __int64 v78; // [sp+28h] [bp-90h]@1
  size_t v79; // [sp+30h] [bp-88h]@5
  size_t v80; // [sp+30h] [bp-88h]@56
  int v81; // [sp+40h] [bp-78h]@1
  unsigned int v82; // [sp+44h] [bp-74h]@1
  char *v83; // [sp+48h] [bp-70h]@5
  char src[104]; // [sp+50h] [bp-68h]@56

  v5 = a4;
  v6 = a5;
  v81 = a3 & 0x20;
  s = a2;
  v75 = a3;
  v78 = a5;
  v76 = a3 & 3;
  v82 = (unsigned int)v81 < 1 ? 1000 : 1024;
  v7 = localeconv();
  v8 = v7->decimal_point;
  v9 = v7;
  v10 = strlen(v7->decimal_point);
  if ( v10 - 1 >= 0x10 )
    v8 = ".";
  v11 = v9->grouping;
  v12 = v9->thousands_sep;
  if ( v10 - 1 >= 0x10 )
    v10 = 1LL;
  v79 = v10;
  v83 = v11;
  v13 = strlen(v12);
  v14 = v79;
  if ( v13 >= 0x11 )
    v12 = "";
  v73 = (signed __int64)(a2 + 647);
  if ( v6 > v5 )
  {
    if ( !v5 || (v41 = v78 / v5, v78 % v5) )
    {
LABEL_10:
      v17 = (long double)v5;
      v18 = (long double)(signed __int64)v78;
      if ( (v78 & 0x8000000000000000LL) != 0LL )
      {
        v19 = v17 / (v18 + 1.8446744e19);
        v20 = (long double)(signed __int64)a1;
        if ( (a1 & 0x8000000000000000LL) == 0LL )
        {
LABEL_12:
          v21 = v19 * v20;
          if ( v75 & 0x10 )
          {
LABEL_13:
            v22 = (long double)(signed int)v82;
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
            v29 = v79 + 1;
            v30 = v27 / v28;
            v31 = v79 + 1 + (v81 == 0) + 1;
            if ( v76 == 1 )
            {
              __sprintf_chk(s, 1LL, -1LL, "%.1Lf", v79);
              v33 = strlen(s);
              if ( v33 > v31 )
                goto LABEL_26;
            }
            else
            {
              if ( v30 < 1.8446744073709551615e19 )
              {
                v63 = v30;
                sub_40D510(v76, *(__int128 *)&v30);
                v32 = v63;
              }
              else
              {
                v32 = v30;
              }
              __sprintf_chk(s, 1LL, -1LL, "%.1Lf", v14);
              v33 = strlen(s);
              v30 = v32;
              if ( v33 > v31 )
              {
                v35 = v32 * 10.0;
LABEL_24:
                if ( v35 < 1.8446744073709551615e19 )
                  sub_40D510(v76, *(__int128 *)&v35);
                goto LABEL_26;
              }
            }
            if ( !(v75 & 8) || s[v33 - 1] != 48 )
            {
              v36 = v33 - v29;
              goto LABEL_31;
            }
            v35 = v30 * 10.0;
            if ( v76 != 1 )
              goto LABEL_24;
LABEL_26:
            __sprintf_chk(s, 1LL, -1LL, "%.0Lf", v34);
            v33 = strlen(s);
            v36 = v33;
LABEL_31:
            v37 = v73 - v33;
            v38 = (char *)(v73 - v33 + v36);
            memmove((void *)(v73 - v33), s, v33);
            goto LABEL_32;
          }
LABEL_27:
          if ( v76 != 1 && v21 < 1.8446744073709551615e19 )
          {
            sub_40D510(v76, *(__int128 *)&v21);
            v14 = v62;
          }
          __sprintf_chk(s, 1LL, -1LL, "%.0Lf", v14);
          v23 = -1;
          v33 = strlen(s);
          v36 = v33;
          goto LABEL_31;
        }
      }
      else
      {
        v19 = v17 / v18;
        v20 = (long double)(signed __int64)a1;
        if ( (a1 & 0x8000000000000000LL) == 0LL )
          goto LABEL_12;
      }
      v21 = v19 * (v20 + 1.8446744e19);
      if ( v75 & 0x10 )
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
    v46 = v75 & 0x10;
    if ( !(v75 & 0x10) )
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
    v46 = v75 & 0x10;
    if ( !(v75 & 0x10) )
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
      v45 = v82 > v60 ? (unsigned __int8)(v61 != 0) : (unsigned int)(v82 < v61) + 2;
      ++v23;
      if ( v82 > v57 )
        break;
      if ( v23 == 8 )
        goto LABEL_47;
    }
    if ( v57 <= 9 )
    {
      if ( v76 == 1 )
        v64 = v45 + (v58 & 1) > 2;
      else
        v64 = v45 > 0 && v76 == 0;
      if ( v64 )
      {
        if ( ++v58 == 10 )
        {
          v16 = v57 + 1;
          if ( v57 == 9 )
          {
            v38 = (char *)v73;
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
        v38 = (char *)v73;
        if ( v75 & 8 )
        {
LABEL_115:
          if ( v76 == 1 )
            goto LABEL_52;
          v44 = 0;
          goto LABEL_48;
        }
        v65 = 48;
        goto LABEL_109;
      }
      v65 = v58 + 48;
LABEL_109:
      s[646] = v65;
      v38 = &s[-v79 + 646];
      if ( (unsigned int)v79 >= 8 )
      {
        v66 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)v38 = *(_QWORD *)v8;
        *(_QWORD *)&v38[(unsigned int)v79 - 8] = *(_QWORD *)&v8[(unsigned int)v79 - 8];
        if ( (((_DWORD)v79 + (_DWORD)v38 - (_DWORD)v66) & 0xFFFFFFF8) >= 8 )
        {
          v67 = 0;
          do
          {
            v68 = v67;
            v67 += 8;
            *(_QWORD *)(v66 + v68) = *(_QWORD *)(v8 - &v38[-v66] + v68);
          }
          while ( v67 < (((_DWORD)v79 + (_DWORD)v38 - (_DWORD)v66) & 0xFFFFFFF8) );
        }
      }
      else if ( v79 & 4 )
      {
        *(_DWORD *)v38 = *(_DWORD *)v8;
        *(_DWORD *)&v38[(unsigned int)v79 - 4] = *(_DWORD *)&v8[(unsigned int)v79 - 4];
      }
      else if ( (_DWORD)v79 )
      {
        *v38 = *v8;
        if ( v79 & 2 )
          *(_WORD *)&v38[(unsigned int)v79 - 2] = *(_WORD *)&v8[(unsigned int)v79 - 2];
      }
      goto LABEL_114;
    }
  }
LABEL_47:
  v38 = (char *)v73;
  if ( v76 == 1 )
  {
    if ( (v45 + (v16 & 1) != 0) + v44 <= 5 )
      goto LABEL_52;
    v38 = (char *)v73;
    goto LABEL_50;
  }
LABEL_48:
  if ( v76 || v44 + v45 <= 0 )
  {
LABEL_52:
    v37 = (signed __int64)v38;
    while ( 1 )
    {
      *(_BYTE *)--v37 = v16 - 10 * ((unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)v16 >> 64) >> 3) + 48;
      if ( v16 <= 9 )
        break;
      v16 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)v16 >> 64) >> 3;
    }
    if ( !(v75 & 4) )
      goto LABEL_33;
    goto LABEL_56;
  }
LABEL_50:
  ++v16;
  if ( !v46 || v82 != v16 || v23 == 8 )
    goto LABEL_52;
  ++v23;
  if ( !(v75 & 8) )
  {
    *(v38 - 1) = 48;
    v38 += ~v79;
    if ( (unsigned int)v79 >= 8 )
    {
      v69 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v38 = *(_QWORD *)v8;
      *(_QWORD *)&v38[(unsigned int)v79 - 8] = *(_QWORD *)&v8[(unsigned int)v79 - 8];
      v70 = v8 - &v38[-v69];
      if ( (((_DWORD)v79 + (_DWORD)v38 - (_DWORD)v69) & 0xFFFFFFF8) >= 8 )
      {
        v71 = 0;
        do
        {
          v72 = v71;
          v71 += 8;
          *(_QWORD *)(v69 + v72) = *(_QWORD *)(v70 + v72);
        }
        while ( v71 < (((_DWORD)v79 + (_DWORD)v38 - (_DWORD)v69) & 0xFFFFFFF8) );
      }
    }
    else if ( v79 & 4 )
    {
      *(_DWORD *)v38 = *(_DWORD *)v8;
      *(_DWORD *)&v38[(unsigned int)v79 - 4] = *(_DWORD *)&v8[(unsigned int)v79 - 4];
    }
    else if ( (_DWORD)v79 )
    {
      *v38 = *v8;
      if ( v79 & 2 )
        *(_WORD *)&v38[(unsigned int)v79 - 2] = *(_WORD *)&v8[(unsigned int)v79 - 2];
    }
  }
  v37 = (signed __int64)(v38 - 1);
  *(v38 - 1) = 49;
LABEL_32:
  if ( !(v75 & 4) )
    goto LABEL_33;
LABEL_56:
  v47 = &v38[-v37];
  v80 = strlen(v12);
  __memcpy_chk(src, v37, &v38[-v37], 41LL);
  v77 = v23;
  v48 = v83;
  v49 = (size_t)v47;
  v50 = -1LL;
  while ( 1 )
  {
    v51 = *v48;
    if ( *v48 )
    {
      v52 = (unsigned __int8)v51;
      if ( (unsigned __int8)v51 >= 0x7Fu )
        v52 = v49;
      ++v48;
      v50 = v52;
    }
    if ( v50 > v49 )
    {
      v53 = v49;
      v23 = v77;
      v37 = (signed __int64)&v38[-v53];
      memcpy(&v38[-v53], src, v53);
      goto LABEL_33;
    }
    v54 = &v38[-v50];
    v49 -= v50;
    memcpy(v54, &src[v49], v50);
    if ( !v49 )
      break;
    v38 = &v54[-v80];
    memcpy(v38, v12, v80);
  }
  v23 = v77;
  v37 = (signed __int64)v54;
LABEL_33:
  if ( v75 & 0x80 )
  {
    if ( v23 == -1 )
    {
      if ( v78 > 1 )
      {
        v23 = 1;
        v55 = 1LL;
        do
        {
          v55 *= v82;
          if ( v78 <= v55 )
            break;
          ++v23;
        }
        while ( v23 != 8 );
        v39 = v75 & 0x100;
        if ( !(v75 & 0x40) )
          goto LABEL_72;
        goto LABEL_70;
      }
      v23 = 0;
    }
    v39 = v75 & 0x100;
    if ( !(v23 | v39) )
      goto LABEL_36;
    if ( !(v75 & 0x40) )
    {
LABEL_71:
      if ( !v23 )
      {
        v56 = (_BYTE *)v73;
        if ( !v39 )
          goto LABEL_36;
        goto LABEL_77;
      }
LABEL_72:
      if ( v81 || v23 != 1 )
      {
        v56 = (_BYTE *)(v73 + 1);
        *(_BYTE *)v73 = byte_41D8B8[(signed __int64)v23];
        if ( v39 )
        {
          if ( v81 )
          {
            v56 = (_BYTE *)(v73 + 2);
            *(_BYTE *)(v73 + 1) = 105;
          }
          goto LABEL_77;
        }
      }
      else
      {
        v56 = (_BYTE *)(v73 + 1);
        *(_BYTE *)v73 = 107;
        if ( v39 )
        {
LABEL_77:
          *v56 = 66;
          v73 = (signed __int64)(v56 + 1);
          goto LABEL_36;
        }
      }
      v73 = (signed __int64)v56;
      goto LABEL_36;
    }
LABEL_70:
    s[647] = 32;
    v73 = (signed __int64)(s + 648);
    goto LABEL_71;
  }
LABEL_36:
  *(_BYTE *)v73 = 0;
  return v37;
}

char *__fastcall sub_40DFA0(char *nptr, int *a2, __int64 *a3)
{
  __int64 *v3; // r12@1
  char *v4; // rbx@1
  signed int v5; // ebp@2
  int v6; // eax@4
  int v7; // ebp@5
  char *result; // rax@5
  __int64 v9; // rdx@13
  char *v10; // [sp+8h] [bp-30h]@0

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
    result = (char *)sub_4132B0(v4);
    if ( (_DWORD)result )
    {
      *a2 = 0;
      v9 = *v3;
LABEL_15:
      if ( !v9 )
      {
        *v3 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? 1024LL : 512LL;
        result = (char *)4;
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
            goto LABEL_21;
        }
        goto LABEL_13;
      }
LABEL_21:
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
  result = getenv("POSIXLY_CORRECT");
  if ( result )
  {
    *v3 = 512LL;
    result = 0LL;
    *a2 = 0;
  }
  else
  {
    *v3 = 1024LL;
    *a2 = 0;
  }
  return result;
}

signed __int64 __fastcall sub_40E160(__uid_t a1)
{
  __int64 v1; // rbx@1
  __uid_t v2; // ebp@6
  char *v3; // r12@6
  struct passwd *v4; // rax@6
  size_t v5; // rdi@6
  __int64 v6; // rax@8
  __int64 v7; // rax@8
  signed __int64 result; // rax@9

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
  LODWORD(v6) = sub_412980(v5);
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

signed __int64 __fastcall sub_40E2F0(__gid_t a1)
{
  __int64 v1; // rbx@1
  __gid_t v2; // ebp@6
  char *v3; // r12@6
  struct group *v4; // rax@6
  size_t v5; // rdi@6
  __int64 v6; // rax@8
  __int64 v7; // rax@8
  signed __int64 result; // rax@9

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
  LODWORD(v6) = sub_412980(v5);
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

signed __int64 __fastcall sub_40E480(signed __int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_40E520(unsigned __int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_40E570(const char *a1, char *a2, __int64 a3, size_t *a4, int a5, char a6)
{
  size_t *v6; // r13@1
  char v7; // bp@1
  char *v8; // rbx@1
  size_t v9; // rax@1
  size_t v10; // r14@1
  size_t v11; // r15@2
  char *v12; // r12@2
  size_t v13; // rdx@3
  unsigned __int64 v14; // rax@4
  int v15; // esi@5
  unsigned __int64 v16; // r13@6
  size_t v17; // r15@8
  unsigned __int64 v18; // rbp@13
  unsigned __int64 v19; // rdi@13
  size_t v20; // rdx@18
  _BYTE *v21; // rax@20
  _BYTE *v22; // rdx@20
  signed __int64 v23; // r13@26
  size_t v25; // r12@33
  size_t v26; // rax@34
  size_t v27; // r15@37
  wint_t v28; // edi@39
  signed __int64 v29; // rdx@39
  char *v30; // rax@45
  wchar_t *v31; // r14@47
  wchar_t v32; // edi@47
  signed __int64 v33; // rax@49
  unsigned __int64 v34; // rax@50
  wchar_t *v35; // [sp+0h] [bp-68h]@2
  __int64 v36; // [sp+8h] [bp-60h]@1
  int v37; // [sp+14h] [bp-54h]@1
  void *src; // [sp+18h] [bp-50h]@1
  void *srca; // [sp+18h] [bp-50h]@47
  signed __int64 size; // [sp+20h] [bp-48h]@37
  char sizea; // [sp+20h] [bp-48h]@40
  signed __int64 sizeb; // [sp+20h] [bp-48h]@45
  signed __int64 v43; // [sp+28h] [bp-40h]@41

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
    v35 = 0LL;
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
  v35 = (wchar_t *)malloc(size * 4);
  if ( !v35 )
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
        v19 = (unsigned __int64)v8;
        if ( (unsigned __int64)v8 < v18 && v14 )
        {
          do
            *(_BYTE *)(++v19 - 1) = 32;
          while ( &v8[v14] - v19 && v18 > v19 );
        }
        *(_BYTE *)v19 = 0;
        v20 = v18 - v19;
        if ( v18 - v19 > v10 )
          v20 = v10;
        v21 = mempcpy((void *)v19, src, v20);
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
  if ( !mbstowcs(v35, a1, v27) )
  {
    v11 = v10;
    v12 = 0LL;
    goto LABEL_3;
  }
  v35[size - 1] = 0;
  v28 = *v35;
  v29 = (signed __int64)v35;
  if ( *v35 )
  {
    sizea = 0;
    do
    {
      v43 = v29;
      if ( !iswprint(v28) )
      {
        *(_DWORD *)v43 = 65533;
        sizea = 1;
      }
      v29 = v43 + 4;
      v28 = *(_DWORD *)(v43 + 4);
    }
    while ( *(_DWORD *)(v43 + 4) );
    v11 = wcswidth(v35, v27);
    if ( sizea )
    {
      sizeb = wcstombs(0LL, v35, 0LL) + 1;
      v30 = (char *)malloc(sizeb);
      goto LABEL_46;
    }
  }
  else
  {
    v11 = wcswidth(v35, v27);
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
    v31 = v35;
    v32 = *v35;
    srca = (void *)*v6;
    if ( *v35 )
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
          v33 = (signed int)v33;
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
      v31 = v35;
      v11 = 0LL;
    }
    *v31 = 0;
    src = v12;
    v10 = wcstombs(v12, v35, sizeb);
    goto LABEL_3;
  }
  if ( v7 & 1 )
    goto LABEL_3;
  v23 = -1LL;
LABEL_27:
  free(v35);
LABEL_28:
  free(v12);
  return v23;
}

__int64 __fastcall sub_40E9B0(char *s, __int64 a2, char a3)
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

__int64 __fastcall sub_40EB70(char *s, char a2)
{
  __int64 v2; // rax@1

  v2 = strlen(s);
  return sub_40E9B0(s, v2, a2);
}

void __fastcall sub_40EBA0(__int64 a1, unsigned __int64 a2, _QWORD *a3, int (__fastcall *a4)(__int64, __int64))
{
  int (__fastcall *v4)(__int64, __int64); // r13@1
  __int64 v5; // r12@4
  __int64 v6; // rbp@4
  __int64 v7; // rbp@7
  __int64 v8; // r15@8
  unsigned __int64 v9; // r14@8
  __int64 i; // r12@8
  void *v11; // r15@15
  unsigned __int64 v12; // r14@15
  __int64 v13; // rbp@15
  __int64 v14; // r12@15
  __int64 v15; // [sp+0h] [bp-68h]@8
  unsigned __int64 v16; // [sp+0h] [bp-68h]@15
  unsigned __int64 v17; // [sp+10h] [bp-58h]@6
  _QWORD *v18; // [sp+18h] [bp-50h]@1
  unsigned __int64 v19; // [sp+20h] [bp-48h]@15
  __int64 *v20; // [sp+28h] [bp-40h]@6

  v4 = a4;
  v18 = a3;
  if ( a2 > 2 )
  {
    v17 = a2 >> 1;
    v20 = (__int64 *)(a1 + 8 * (a2 >> 1));
    sub_40EBA0(v20, a2 - (a2 >> 1), a3);
    if ( a2 == 3 )
    {
      v7 = *(_QWORD *)a1;
      *v18 = *(_QWORD *)a1;
    }
    else
    {
      v11 = v18;
      v12 = a2 >> 2;
      v19 = a2 >> 2;
      sub_40EBA0(a1 + 8 * (a2 >> 2), v17 - (a2 >> 2), v18);
      sub_40EBA0(a1, a2 >> 2, v18);
      v16 = 0LL;
      v13 = *(_QWORD *)a1;
      v14 = *(_QWORD *)(a1 + 8 * (a2 >> 2));
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = (char *)v11 + 8;
          if ( v4(v13, v14) <= 0 )
            break;
          *((_QWORD *)v11 - 1) = v14;
          if ( v17 == ++v12 )
            goto LABEL_22;
          v14 = *(_QWORD *)(a1 + 8 * v12);
        }
        ++v16;
        *((_QWORD *)v11 - 1) = v13;
        if ( v19 == v16 )
          break;
        v13 = *(_QWORD *)(a1 + 8 * v16);
      }
      v16 = v12;
      v19 = a2 >> 1;
LABEL_22:
      memcpy(v11, (const void *)(a1 + 8 * v16), 8 * (v19 - v16));
      v7 = *v18;
    }
    v15 = 0LL;
    v8 = 0LL;
    v9 = a2 >> 1;
    for ( i = *v20; ; i = *(_QWORD *)(a1 + 8 * v9) )
    {
      while ( 1 )
      {
        ++v8;
        if ( v4(v7, i) > 0 )
          break;
        ++v15;
        *(_QWORD *)(a1 + 8 * v8 - 8) = v7;
        if ( v17 == v15 )
          return;
        v7 = v18[v15];
      }
      *(_QWORD *)(a1 + 8 * v8 - 8) = i;
      if ( a2 == ++v9 )
        break;
    }
    memcpy((void *)(a1 + 8 * v8), &v18[v15], 8 * (v17 - v15));
  }
  else if ( a2 == 2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    if ( a4(*(_QWORD *)a1, *(_QWORD *)(a1 + 8)) > 0 )
    {
      *(_QWORD *)a1 = v5;
      *(_QWORD *)(a1 + 8) = v6;
    }
  }
}

void __fastcall sub_40EDD0(__int64 a1, unsigned __int64 a2, int (__fastcall *a3)(__int64, __int64))
{
  sub_40EBA0(a1, a2, (_QWORD *)(a1 + 8 * a2), a3);
}

__int64 __fastcall sub_40EDE0(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx@2
  const __int32_t **v4; // rax@2

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_tolower_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(_BYTE *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_40EE30(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx@2
  const __int32_t **v4; // rax@2

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_toupper_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(_BYTE *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __usercall sub_40EE80@<rax>(void *s@<rdi>, char *a2@<rdx>, __int64 a3@<rcx>, __int64 a4@<rsi>, char a5@<r8b>, __int64 a6, int a7)
{
  char *v7; // r15@1
  signed __int64 v8; // rbx@1
  signed __int64 v9; // r12@1
  signed int v10; // er11@1
  char v11; // al@5
  __int64 v12; // r14@5
  _BYTE *v13; // r8@11
  char v15; // r11@21
  signed __int64 v16; // r8@21
  signed int i; // er12@21
  signed int v18; // eax@22
  __int64 v19; // rcx@22
  __int64 v20; // r9@22
  bool v21; // zf@22
  bool v22; // sf@22
  unsigned __int8 v23; // of@22
  int v24; // ebp@28
  unsigned int v25; // eax@38
  int v26; // edi@39
  char *v27; // rax@51
  signed __int64 v28; // r8@51
  char v29; // r13@51
  size_t v30; // rax@52
  unsigned __int64 v31; // rcx@53
  unsigned __int64 v32; // rbx@55
  size_t v33; // rdx@61
  char *v34; // rdi@62
  char *v35; // rsi@63
  size_t v36; // rdx@63
  char *v37; // rdi@63
  unsigned __int64 v38; // rcx@65
  char v39; // ST50_1@72
  char *v40; // r13@72
  __m128i v41; // xmm4@72
  __m128i v42; // xmm2@72
  __int64 v43; // rax@72
  signed __int64 v44; // rax@72
  signed __int64 v45; // rsi@72
  signed __int64 v46; // rcx@72
  signed __int64 v47; // rdx@73
  signed __int64 v48; // rax@73
  unsigned int v49; // eax@73
  signed int v50; // er10@76
  char *v51; // rcx@79
  unsigned __int64 v52; // rax@79
  size_t v53; // r9@80
  unsigned __int64 v54; // r9@81
  size_t v55; // rdx@90
  char *v56; // rdi@91
  unsigned __int64 v57; // r10@94
  unsigned __int64 v58; // rax@94
  unsigned __int64 v59; // rsi@96
  size_t v60; // rdx@101
  char *v61; // rdi@102
  unsigned __int64 v62; // ST58_8@103
  int v63; // er10@108
  int v64; // er13@108
  signed int v65; // edi@108
  signed int v66; // er8@108
  int v67; // eax@109
  signed int v68; // er13@112
  int v69; // er13@114
  int v70; // edi@117
  int v71; // esi@117
  int v72; // edi@120
  unsigned int v73; // er8@120
  unsigned __int64 v74; // r13@127
  unsigned __int64 v75; // rax@127
  unsigned __int64 v76; // rsi@129
  char v77; // r11@133
  char v78; // r8@133
  size_t v79; // rdx@134
  char *v80; // rdi@135
  signed int v81; // esi@164
  unsigned __int64 v82; // r13@165
  size_t v83; // rdx@172
  char *v84; // rdi@173
  char *v85; // rcx@178
  signed __int64 v86; // rax@180
  unsigned __int64 v87; // rsi@193
  size_t v88; // rdx@201
  char *v89; // rdi@202
  char *v90; // ST68_8@205
  signed int v91; // ST60_4@205
  _BYTE *v92; // ST58_8@205
  char v93; // ST50_1@205
  size_t v94; // ST40_8@205
  size_t v95; // rdx@214
  char *v96; // rdi@215
  signed int v97; // esi@220
  signed int v98; // edi@226
  int v99; // edx@226
  int v100; // esi@229
  int v101; // edx@229
  signed __int64 v102; // rax@237
  _BYTE *v103; // r9@238
  unsigned __int64 v104; // rcx@238
  unsigned __int64 v105; // rax@239
  size_t v106; // rdx@246
  char *v107; // rdi@247
  unsigned __int64 v108; // rcx@249
  signed __int64 j; // r13@252
  __int64 v110; // rsi@254
  int v111; // eax@257
  int v112; // esi@257
  char v113; // cl@261
  signed int v114; // esi@273
  size_t v115; // rdx@282
  char *v116; // rdi@283
  int v117; // eax@287
  int v118; // eax@288
  char v119; // al@291
  char v120; // cl@298
  unsigned __int64 v121; // r12@299
  char v122; // ST68_1@307
  unsigned __int64 v123; // ST60_8@307
  char v124; // ST50_1@307
  char *v125; // rdi@312
  unsigned __int64 v126; // r8@313
  size_t v127; // rdx@321
  __int64 v128; // r12@326
  char *v129; // rdi@328
  int v130; // ST60_4@328
  signed int v131; // ST58_4@328
  char v132; // ST50_1@328
  int v133; // eax@329
  char *v134; // rdi@333
  char *v135; // rdi@335
  unsigned __int64 v136; // rcx@338
  char *v137; // rdi@344
  unsigned __int64 v138; // ST68_8@344
  char v139; // ST58_1@344
  char *v140; // rdi@347
  signed int v141; // esi@348
  int v142; // edx@348
  int v143; // er10@351
  int v144; // esi@351
  int v145; // edi@353
  int v146; // esi@357
  int v147; // eax@361
  int v148; // eax@361
  int v149; // esi@362
  int v150; // esi@365
  char *v151; // rdi@370
  char *v152; // rdi@371
  char *v153; // rdi@373
  char *v154; // rdi@374
  char *v155; // rdi@375
  __int64 v156; // [sp+0h] [bp-4C8h]@1
  struct tm *tp; // [sp+8h] [bp-4C0h]@1
  char *v158; // [sp+20h] [bp-4A8h]@6
  char v159; // [sp+2Bh] [bp-49Dh]@3
  int v160; // [sp+2Ch] [bp-49Ch]@6
  _BYTE *v161; // [sp+30h] [bp-498h]@52
  char v162; // [sp+30h] [bp-498h]@61
  unsigned __int64 v163; // [sp+30h] [bp-498h]@63
  char v164; // [sp+30h] [bp-498h]@90
  signed int v165; // [sp+30h] [bp-498h]@108
  char v166; // [sp+30h] [bp-498h]@120
  char v167; // [sp+30h] [bp-498h]@189
  char v168; // [sp+30h] [bp-498h]@246
  unsigned __int64 v169; // [sp+30h] [bp-498h]@248
  int v170; // [sp+30h] [bp-498h]@257
  char v171; // [sp+40h] [bp-488h]@52
  _BYTE *v172; // [sp+40h] [bp-488h]@61
  _BYTE *v173; // [sp+40h] [bp-488h]@63
  _BYTE *v174; // [sp+40h] [bp-488h]@90
  char v175; // [sp+40h] [bp-488h]@127
  char v176; // [sp+40h] [bp-488h]@201
  _BYTE *v177; // [sp+40h] [bp-488h]@246
  _BYTE *v178; // [sp+40h] [bp-488h]@248
  char *v179; // [sp+40h] [bp-488h]@321
  int v180; // [sp+48h] [bp-480h]@52
  unsigned __int64 v181; // [sp+48h] [bp-480h]@61
  char *v182; // [sp+48h] [bp-480h]@90
  char v183; // [sp+48h] [bp-480h]@125
  _BYTE *v184; // [sp+48h] [bp-480h]@246
  char v185; // [sp+48h] [bp-480h]@321
  unsigned __int64 v186; // [sp+50h] [bp-478h]@101
  unsigned __int64 v187; // [sp+50h] [bp-478h]@246
  size_t v188; // [sp+58h] [bp-470h]@201
  unsigned __int64 v189; // [sp+58h] [bp-470h]@321
  unsigned __int64 v190; // [sp+60h] [bp-468h]@321
  char format[2]; // [sp+70h] [bp-458h]@51
  char v192; // [sp+72h] [bp-456h]@51
  char v193; // [sp+73h] [bp-455h]@124
  char v194[9]; // [sp+87h] [bp-441h]@72
  char sa[16]; // [sp+90h] [bp-438h]@52
  __m128i v196; // [sp+A0h] [bp-428h]@72
  __m128i v197; // [sp+B0h] [bp-418h]@72
  __int64 v198; // [sp+C0h] [bp-408h]@72

  v7 = (char *)s;
  v8 = (signed __int64)a2;
  v9 = *(_QWORD *)(a3 + 48);
  v10 = *(_DWORD *)(a3 + 8);
  v156 = a4;
  tp = (struct tm *)a3;
  if ( !v9 )
    v9 = 4305034LL;
  v159 = a5;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = *a2;
  v12 = 0LL;
  if ( !*a2 )
  {
LABEL_13:
    if ( v7 && v156 )
      *v7 = 0;
    return v12;
  }
  v160 = v10;
  v158 = (char *)v9;
  while ( v11 != 37 )
  {
    a2 = (char *)(v156 - v12);
    if ( (unsigned __int64)(v156 - v12) <= 1 )
      return 0LL;
    if ( v7 )
      *v7++ = v11;
    ++v12;
    v13 = (_BYTE *)v8;
LABEL_12:
    v11 = v13[1];
    v8 = (signed __int64)(v13 + 1);
    if ( !v11 )
      goto LABEL_13;
  }
  v15 = v159;
  v16 = 0LL;
LABEL_22:
  for ( i = 0; ; i = v18 )
  {
    v18 = *(_BYTE *)++v8;
    v19 = (unsigned int)v18;
    v20 = (unsigned int)v18;
    v23 = __OFSUB__(*(_BYTE *)v8, 48);
    v21 = *(_BYTE *)v8 == 48;
    v22 = (char)(*(_BYTE *)v8 - 48) < 0;
    if ( *(_BYTE *)v8 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !((unsigned __int8)(v22 ^ v23) | v21) )
    {
      if ( (_BYTE)v18 == 94 )
      {
        v15 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v18 != 95 )
      {
        v24 = -1;
        if ( (unsigned int)(v18 - 48) > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v18 != 35 )
      break;
    v18 = *(_BYTE *)++v8;
    v16 = 1LL;
    v19 = (unsigned int)v18;
    v20 = (unsigned int)v18;
    v23 = __OFSUB__(*(_BYTE *)v8, 48);
    v21 = *(_BYTE *)v8 == 48;
    v22 = (char)(*(_BYTE *)v8 - 48) < 0;
    if ( *(_BYTE *)v8 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v18 == 45 )
    goto LABEL_26;
  v24 = -1;
  if ( (unsigned int)(v18 - 48) > 9 )
    goto LABEL_29;
LABEL_37:
  v24 = 0;
  while ( 1 )
  {
    v25 = *(_BYTE *)(v8 + 1);
    v19 = v25;
    a2 = (char *)(v25 - 48);
    if ( v24 > 214748364 )
      break;
    v26 = *(_BYTE *)v8;
    if ( v24 == 214748364 && (char)v26 > 55 )
      break;
    ++v8;
    v24 = v26 + 10 * v24 - 48;
LABEL_41:
    if ( (unsigned int)a2 > 9 )
    {
      v20 = v25;
      goto LABEL_29;
    }
  }
  if ( (unsigned int)a2 <= 9 )
  {
    v25 = *(_BYTE *)(v8 + 2);
    v24 = 0x7FFFFFFF;
    v8 += 2LL;
    v19 = v25;
    a2 = (char *)(v25 - 48);
    goto LABEL_41;
  }
  v20 = v25;
  ++v8;
  v24 = 0x7FFFFFFF;
LABEL_29:
  if ( (_BYTE)v19 == 69 || (_BYTE)v19 == 79 )
    v19 = *(_BYTE *)(v8++ + 1);
  else
    v20 = 0LL;
  switch ( (_BYTE)v19 )
  {
    case 0x41:
    case 0x42:
    case 0x61:
      if ( (_DWORD)v20 )
        goto LABEL_237;
      if ( (_BYTE)v16 )
        v15 = v16;
      goto LABEL_51;
    case 0x58:
    case 0x63:
    case 0x78:
      if ( (_DWORD)v20 != 79 )
        goto LABEL_69;
      goto LABEL_237;
    case 0x72:
LABEL_69:
      v29 = 0;
      goto LABEL_70;
    case 0x73:
      v39 = v15;
      v40 = v194;
      v41 = _mm_loadu_si128((const __m128i *)&tp->tm_isdst);
      v42 = _mm_loadu_si128((const __m128i *)&tp->tm_mon);
      v43 = (__int64)tp->tm_zone;
      *(__m128i *)sa = _mm_loadu_si128((const __m128i *)tp);
      v196 = v42;
      v197 = v41;
      v198 = v43;
      LODWORD(v44) = sub_4177A0(a6, sa, a2, v19, v16, v20);
      v15 = v39;
      v45 = v44;
      v46 = v44;
      do
      {
        v47 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * v46) >> 64) >> 2) - (v46 >> 63);
        v48 = v47;
        LODWORD(v47) = v46 - 10 * v47;
        v46 = v48;
        v49 = 48 - v47;
        a2 = (char *)(unsigned int)(v47 + 48);
        if ( v45 < 0 )
          a2 = (char *)v49;
        *--v40 = (char)a2;
      }
      while ( v46 );
      v50 = 1;
      if ( v24 > 0 )
        v50 = v24;
      if ( v45 >= 0 )
        goto LABEL_79;
      goto LABEL_298;
    case 0x44:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_237;
    case 0x46:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_237;
    case 0x47:
    case 0x56:
    case 0x67:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v63 = tp->tm_yday;
      v64 = tp->tm_wday;
      v165 = tp->tm_year;
      v65 = v165 + ((v165 >> 31) & 0x190) - 100;
      v66 = v63 - (v63 - v64 + 382) + 7 * ((v63 - v64 + 382) / 7) + 3;
      if ( v66 < 0 )
      {
        v141 = v165 + ((v165 >> 31) & 0x190) - 101;
        v142 = 365;
        if ( !(((_BYTE)v165 + ((v165 >> 31) & 0x90) - 101) & 3) )
        {
          v142 = 366;
          if ( v141 == 100 * (v141 / 100) )
            v142 = 366 - ((unsigned int)(v141 % 400) >= 1);
        }
        v143 = v142 + v63;
        v144 = v143 - v64;
        v69 = -1;
        v66 = v143 - (v144 + 382) + 7 * ((v144 + 382) / 7) + 3;
      }
      else
      {
        v67 = 365;
        if ( !(v65 & 3) )
        {
          v67 = 366;
          if ( v65 == 100 * (v65 / 100) )
            v67 = (v65 == 400 * (v65 / 400)) + 365;
        }
        v68 = v63 - v67 - (v63 - v67 - v64 + 382) + 7 * ((v63 - v67 - v64 + 382) / 7) + 3;
        if ( v68 >= 0 )
          v66 = v68;
        v69 = (v68 >> 31) + 1;
      }
      if ( (_BYTE)v19 == 71 )
      {
        v146 = tp->tm_year;
        v166 = 0;
        v50 = 4;
        v23 = __OFSUB__(v146, -1900 - v69);
        v22 = v146 - (-1900 - v69) < 0;
        v71 = v146 + v69 + 1900;
        LOBYTE(v73) = v22 ^ v23;
        v72 = 0;
        goto LABEL_121;
      }
      if ( (_BYTE)v19 == 103 )
      {
        v50 = 2;
        v70 = (v69 + v165 % 100) % 100;
        v71 = v70;
        if ( v70 < 0 )
        {
          v71 = v70 + 100;
          if ( v165 < -1900 - v69 )
            v71 = -v70;
        }
      }
      else
      {
        v50 = 2;
        v71 = v66 / 7 + 1;
      }
      goto LABEL_120;
    case 0x5A:
      v183 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
      v175 = v15;
      v74 = strlen(v158);
      LODWORD(v75) = 0;
      if ( v24 >= 0 )
        LODWORD(v75) = v24;
      v75 = (signed int)v75;
      v76 = (signed int)v75;
      if ( v74 >= (signed int)v75 )
        v76 = v74;
      a2 = (char *)(v156 - v12);
      if ( v156 - v12 <= v76 )
        return 0LL;
      if ( v7 )
      {
        v77 = v175;
        v78 = v183;
        if ( v74 < v75 )
        {
          v79 = v24 - v74;
          if ( i == 48 )
          {
            v154 = v7;
            v7 += v79;
            memset(v154, 48, v79);
            v77 = v175;
            v78 = v183;
          }
          else
          {
            v80 = v7;
            v7 += v79;
            memset(v80, 32, v79);
            v78 = v183;
            v77 = v175;
          }
        }
        if ( v78 )
        {
          sub_40EDE0((__int64)v7, (__int64)v158, v74);
        }
        else if ( v77 )
        {
          sub_40EE30((__int64)v7, (__int64)v158, v74);
        }
        else
        {
          memcpy(v7, v158, v74);
        }
        v7 += v74;
      }
      v12 += v76;
      v13 = (_BYTE *)v8;
      goto LABEL_12;
    case 0x52:
    case 0x54:
LABEL_94:
      v57 = sub_40EE80(0LL, a6, a7);
      LODWORD(v58) = 0;
      if ( v24 >= 0 )
        LODWORD(v58) = v24;
      v58 = (signed int)v58;
      v59 = (signed int)v58;
      if ( v57 >= (signed int)v58 )
        v59 = v57;
      if ( v156 - v12 <= v59 )
        return 0LL;
      if ( v7 )
      {
        if ( v57 < v58 )
        {
          v186 = v57;
          v60 = v24 - v57;
          if ( i == 48 )
          {
            v140 = v7;
            v7 += v60;
            memset(v140, 48, v60);
            v57 = v186;
          }
          else
          {
            v61 = v7;
            v7 += v60;
            memset(v61, 32, v60);
            v57 = v186;
          }
        }
        v62 = v57;
        sub_40EE80(v7, a6, a7);
        v7 += v62;
      }
      v12 += v59;
      v13 = (_BYTE *)v8;
      goto LABEL_12;
    case 0x48:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_hour;
      goto LABEL_120;
    case 0x49:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = v160;
      v50 = 2;
      goto LABEL_120;
    case 0x4D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_min;
      goto LABEL_120;
    case 0x4E:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      if ( v24 == -1 )
      {
        v71 = a7;
        v24 = 9;
        v50 = 9;
      }
      else
      {
        if ( v24 > 8 )
        {
          v71 = a7;
        }
        else
        {
          v71 = a7;
          v145 = v24;
          do
          {
            ++v145;
            v71 /= 10;
          }
          while ( v145 != 9 );
        }
        v50 = v24;
      }
      goto LABEL_120;
    case 0x50:
      v29 = 1;
      goto LABEL_151;
    case 0x6B:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = tp->tm_hour;
      goto LABEL_158;
    case 0x6C:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = v160;
      goto LABEL_158;
    case 0x6D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v166 = 0;
      v50 = 2;
      v81 = tp->tm_mon;
      LOBYTE(v73) = v81 < -1;
      v71 = v81 + 1;
      v72 = 0;
      goto LABEL_121;
    case 0x6E:
      LODWORD(v82) = 0;
      if ( v24 >= 0 )
        LODWORD(v82) = v24;
      v82 = (signed int)v82;
      if ( !(_DWORD)v82 )
        v82 = 1LL;
      if ( v156 - v12 <= v82 )
        return 0LL;
      if ( v7 )
      {
        if ( v24 > 1 )
        {
          v83 = v24 - 1LL;
          if ( i == 48 )
          {
            v151 = v7;
            v7 += v83;
            memset(v151, 48, v83);
          }
          else
          {
            v84 = v7;
            v7 += v83;
            memset(v84, 32, v83);
          }
        }
        *v7++ = 10;
      }
      goto LABEL_175;
    case 0x71:
      v50 = 1;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_123;
      v166 = 0;
      LOBYTE(v73) = 0;
      v72 = 0;
      v71 = (11 * tp->tm_mon >> 5) + 1;
      goto LABEL_178;
    case 0x74:
      LODWORD(v82) = 0;
      if ( v24 >= 0 )
        LODWORD(v82) = v24;
      v82 = (signed int)v82;
      if ( !(_DWORD)v82 )
        v82 = 1LL;
      if ( v156 - v12 <= v82 )
        return 0LL;
      if ( v7 )
      {
        if ( v24 > 1 )
        {
          v95 = v24 - 1LL;
          if ( i == 48 )
          {
            v152 = v7;
            v7 += v95;
            memset(v152, 48, v95);
          }
          else
          {
            v96 = v7;
            v7 += v95;
            memset(v96, 32, v95);
          }
        }
        *v7++ = 9;
      }
      goto LABEL_175;
    case 0x75:
      v50 = 1;
      v71 = (tp->tm_wday + 6) % 7 + 1;
      goto LABEL_120;
    case 0x59:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_334;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_237;
      v166 = 0;
      v50 = 4;
      v97 = tp->tm_year;
      LOBYTE(v73) = v97 < -1900;
      v71 = v97 + 1900;
      v72 = 0;
      goto LABEL_221;
    case 0x53:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_sec;
      goto LABEL_120;
    case 0x55:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v98 = tp->tm_yday - tp->tm_wday + 7;
      v99 = (unsigned __int64)(-1840700269LL * v98) >> 32;
      goto LABEL_227;
    case 0x43:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_334;
      v166 = 0;
      v50 = 2;
      v100 = tp->tm_year / 100 + 19;
      v101 = tp->tm_year % 100;
      LOBYTE(v101) = v100 > 0;
      LOBYTE(v73) = tp->tm_year < -1900;
      v71 = v100 - (v101 & ((unsigned int)(tp->tm_year % 100) >> 31));
      v72 = 0;
      goto LABEL_121;
    case 0x57:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v98 = 7 * ((tp->tm_wday + 6) / 7) - (tp->tm_wday + 6) + tp->tm_yday + 7;
      v99 = (unsigned __int64)(-1840700269LL * v98) >> 32;
LABEL_227:
      v50 = 2;
      v71 = ((v99 + v98) >> 2) - (v98 >> 31);
      goto LABEL_120;
    case 0x77:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 1;
      v71 = tp->tm_wday;
      goto LABEL_120;
    case 0x62:
    case 0x68:
      if ( (_BYTE)v16 )
        v15 = v16;
      if ( (_DWORD)v20 )
        goto LABEL_237;
LABEL_51:
      v27 = &v192;
      v28 = v8;
      v29 = 0;
      *(_WORD *)format = 9504;
      LODWORD(v20) = 0;
      goto LABEL_52;
    default:
      goto LABEL_237;
    case 0x7A:
      j = 0LL;
      goto LABEL_253;
    case 0x64:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_mday;
      goto LABEL_120;
    case 0x65:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = tp->tm_mday;
LABEL_158:
      v50 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_120;
    case 0x6A:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v166 = 0;
      v50 = 3;
      v114 = tp->tm_yday;
      LOBYTE(v73) = v114 < -1;
      v71 = v114 + 1;
      v72 = 0;
      goto LABEL_121;
    case 0x25:
      LODWORD(v105) = 0;
      v82 = 1LL;
      a2 = (char *)(v156 - v12);
      if ( v24 >= 0 )
        LODWORD(v105) = v24;
      v105 = (signed int)v105;
      if ( (_DWORD)v105 )
        v82 = v105;
      if ( (_DWORD)v20 )
      {
        v13 = (_BYTE *)v8;
        v103 = (_BYTE *)v8;
        v104 = 1LL;
        goto LABEL_243;
      }
      if ( v82 < (unsigned __int64)a2 )
      {
        if ( v7 )
        {
          if ( v24 > 1 )
          {
            v115 = v24 - 1LL;
            if ( i == 48 )
            {
              v153 = v7;
              v7 += v115;
              memset(v153, 48, v115);
              LOBYTE(v19) = *(_BYTE *)v8;
            }
            else
            {
              v116 = v7;
              v7 += v115;
              memset(v116, 32, v115);
              LOBYTE(v19) = *(_BYTE *)v8;
            }
          }
          *v7++ = v19;
        }
LABEL_175:
        v12 += v82;
        v13 = (_BYTE *)v8;
        goto LABEL_12;
      }
      return 0LL;
    case 0:
      v103 = (_BYTE *)(v8 - 1);
      v113 = *(_BYTE *)(v8 - 1);
      goto LABEL_262;
    case 0x79:
      if ( (_DWORD)v20 == 69 )
      {
LABEL_334:
        v50 = 0;
        goto LABEL_123;
      }
      v50 = 2;
      v117 = tp->tm_year % 100;
      v71 = v117;
      if ( v117 < 0 )
      {
        v118 = -v117;
        v71 += 100;
        if ( tp->tm_year <= -1901 )
          v71 = v118;
      }
LABEL_120:
      v166 = 0;
      v72 = 0;
      v73 = (unsigned int)v71 >> 31;
LABEL_121:
      if ( (_DWORD)v20 == 79 )
      {
        if ( (_BYTE)v73 )
          goto LABEL_222;
LABEL_123:
        v29 = 0;
        *(_WORD *)format = 9504;
LABEL_124:
        v192 = v20;
        v28 = v8;
        LODWORD(v20) = v50;
        v27 = &v193;
LABEL_52:
        *v27 = v19;
        v27[1] = 0;
        v161 = (_BYTE *)v28;
        v180 = v20;
        v171 = v15;
        v30 = strftime(sa, 0x400uLL, format, tp);
        v13 = v161;
        if ( v30 )
        {
          v31 = v30 - 1;
          LODWORD(v30) = 0;
          if ( v24 >= 0 )
            LODWORD(v30) = v24;
          v30 = (signed int)v30;
          v32 = (signed int)v30;
          if ( v31 >= (signed int)v30 )
            v32 = v31;
          a2 = (char *)(v156 - v12);
          if ( v156 - v12 > v32 )
          {
            if ( v7 )
            {
              v15 = v171;
              if ( !v180 && v31 < v30 )
              {
                v181 = v31;
                v33 = v24 - v31;
                v172 = v161;
                v162 = v15;
                if ( i == 48 )
                {
                  v125 = v7;
                  v7 += v33;
                  memset(v125, 48, v33);
                  v15 = v162;
                  v13 = v172;
                  v31 = v181;
                }
                else
                {
                  v34 = v7;
                  v7 += v33;
                  memset(v34, 32, v33);
                  v31 = v181;
                  v13 = v172;
                  v15 = v162;
                }
              }
              v173 = v13;
              v35 = &sa[1];
              v36 = v31;
              v37 = v7;
              v163 = v31;
              if ( !v29 )
                goto LABEL_64;
              sub_40EDE0((__int64)v7, (__int64)&sa[1], v31);
              v38 = v163;
              v13 = v173;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_221:
      if ( (_BYTE)v73 )
LABEL_222:
        v71 = -v71;
LABEL_178:
      v85 = v194;
      while ( 1 )
      {
        v40 = v85 - 1;
        if ( v72 & 1 )
        {
          v86 = (signed __int64)(v85 - 2);
          *(v85-- - 1) = 58;
          v40 = (char *)v86;
        }
        v72 >>= 1;
        a2 = (char *)(v71 / 0xAu);
        *(v85 - 1) = v71 % 0xAu + 48;
        v85 = v40;
        if ( (unsigned int)v71 <= 9 && !v72 )
          break;
        v71 /= 0xAu;
      }
      if ( v50 < v24 )
        v50 = v24;
      if ( (_BYTE)v73 )
      {
LABEL_298:
        v167 = 45;
        v120 = 45;
        if ( i == 45 )
          goto LABEL_299;
LABEL_190:
        v51 = (char *)(v194 - v40);
        LODWORD(v53) = v50 - 1 - ((unsigned __int64)v194 - (_DWORD)v40);
        v52 = v156 - v12;
        if ( (signed int)v53 <= 0 )
        {
          LODWORD(v54) = 0;
          v126 = 1LL;
          if ( v24 >= 0 )
            LODWORD(v54) = v24;
          v54 = (signed int)v54;
          if ( (_DWORD)v54 )
            v126 = v54;
          if ( v126 >= v52 )
            return 0LL;
          if ( v7 )
          {
            if ( !v50 && v54 > 1 )
            {
              v127 = v24 - 1LL;
              v190 = v126;
              v189 = v54;
              v179 = &v7[v127];
              v185 = v15;
              if ( i == 48 )
              {
                memset(v7, 48, v127);
                v7 = v179;
                v15 = v185;
                v50 = 0;
                v54 = v189;
                v126 = v190;
                v51 = (char *)(v194 - v40);
              }
              else
              {
                memset(v7, 32, v127);
                v7 = v179;
                v51 = (char *)(v194 - v40);
                v126 = v190;
                v54 = v189;
                v50 = 0;
                v15 = v185;
              }
            }
            *(++v7 - 1) = v167;
          }
          v12 += v126;
          v13 = (_BYTE *)v8;
          v52 = v156 - v12;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v50 >= v52 )
            return 0LL;
          LODWORD(a2) = 0;
          v87 = 1LL;
          if ( v24 >= 0 )
            LODWORD(a2) = v24;
          a2 = (char *)(signed int)a2;
          if ( (_DWORD)a2 )
            v87 = (unsigned __int64)a2;
          if ( v87 >= v52 )
            return 0LL;
          v12 += v87;
          v53 = (signed int)v53;
          v13 = (_BYTE *)v8;
          if ( !v7 )
            goto LABEL_206;
          if ( !v50 && (unsigned __int64)a2 > 1 )
          {
            v188 = v53;
            v88 = v24 - 1LL;
            v176 = v15;
            if ( i == 48 )
            {
              v155 = v7;
              v7 += v88;
              memset(v155, 48, v88);
              v15 = v176;
              v50 = 0;
              v51 = (char *)(v194 - v40);
              v53 = v188;
            }
            else
            {
              v89 = v7;
              v7 += v88;
              memset(v89, 32, v88);
              v53 = v188;
              v51 = (char *)(v194 - v40);
              v50 = 0;
              v15 = v176;
            }
          }
          ++v7;
          v13 = (_BYTE *)v8;
          *(v7 - 1) = v167;
LABEL_204:
          if ( v7 )
          {
            v90 = v51;
            v91 = v50;
            v92 = v13;
            v93 = v15;
            v94 = v53;
            memset(v7, 48, v53);
            v53 = v94;
            v51 = v90;
            v50 = v91;
            v13 = v92;
            v15 = v93;
            v7 += v94;
          }
LABEL_206:
          v12 += v53;
          v24 = 0;
          v54 = 0LL;
          v52 = v156 - v12;
          goto LABEL_84;
        }
LABEL_326:
        v128 = (signed int)v53;
        if ( (signed int)v53 >= v52 )
          return 0LL;
        if ( v7 )
        {
          v129 = v7;
          v130 = v53;
          v131 = v50;
          v7 += (signed int)v53;
          v132 = v15;
          memset(v129, 32, (signed int)v53);
          LODWORD(v53) = v130;
          v50 = v131;
          v15 = v132;
        }
        v12 += v128;
        v133 = v24 - v53;
        v23 = __OFSUB__((_DWORD)v53, v24);
        v22 = (signed int)v53 - v24 < 0;
        v24 = 0;
        if ( v22 ^ v23 )
          v24 = v133;
        v52 = v156 - v12;
        if ( v167 )
        {
          v54 = v24;
          v136 = 1LL;
          if ( v24 )
            v136 = v24;
          if ( v136 >= v52 )
            return 0LL;
          if ( v7 )
          {
            if ( !v50 && (unsigned __int64)v24 > 1 )
            {
              v137 = v7;
              v138 = v136;
              v7 += v24 - 1;
              v139 = v15;
              memset(v137, 32, v24 - 1LL);
              v136 = v138;
              v50 = 0;
              v15 = v139;
              v54 = v24;
            }
            *(++v7 - 1) = v167;
          }
          v12 += v136;
          v13 = (_BYTE *)v8;
          i = 95;
          v51 = (char *)(v194 - v40);
          v52 = v156 - v12;
        }
        else
        {
          v54 = v24;
          v13 = (_BYTE *)v8;
          i = 95;
          v51 = (char *)(v194 - v40);
        }
        goto LABEL_84;
      }
      if ( !v166 )
      {
LABEL_79:
        v51 = (char *)(v194 - v40);
        v52 = v156 - v12;
        if ( i == 45 || (LODWORD(v53) = v50 - (_DWORD)v51, v50 - (signed int)v51 <= 0) )
        {
          LODWORD(v54) = 0;
          v13 = (_BYTE *)v8;
          if ( v24 >= 0 )
            LODWORD(v54) = v24;
          v54 = (signed int)v54;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          a2 = (char *)v50;
          if ( v50 >= v52 )
            return 0LL;
          v53 = (signed int)v53;
          v13 = (_BYTE *)v8;
          goto LABEL_204;
        }
        v167 = 0;
        goto LABEL_326;
      }
      if ( i != 45 )
      {
        v167 = 43;
        goto LABEL_190;
      }
      v120 = 43;
LABEL_299:
      LODWORD(v54) = 0;
      v121 = 1LL;
      if ( v24 >= 0 )
        LODWORD(v54) = v24;
      v54 = (signed int)v54;
      if ( (_DWORD)v54 )
        v121 = v54;
      if ( v156 - v12 <= v121 )
        return 0LL;
      if ( v7 )
      {
        if ( !v50 && v54 > 1 )
        {
          v122 = v120;
          v123 = v54;
          v124 = v15;
          memset(v7, 32, v24 - 1LL);
          v120 = v122;
          v54 = v123;
          v50 = 0;
          v15 = v124;
          v7 += v24 - 1;
        }
        *v7++ = v120;
      }
      v12 += v121;
      v13 = (_BYTE *)v8;
      i = 45;
      v51 = (char *)(v194 - v40);
      v52 = v156 - v12;
LABEL_84:
      v32 = v54;
      if ( (unsigned __int64)v51 >= v54 )
        v32 = (unsigned __int64)v51;
      if ( v32 < v52 )
      {
        if ( v7 )
        {
          if ( !v50 && (unsigned __int64)v51 < v54 )
          {
            v182 = v51;
            v55 = v24 - (_QWORD)v51;
            v174 = v13;
            v164 = v15;
            if ( i == 48 )
            {
              v134 = v7;
              v7 += v55;
              memset(v134, 48, v55);
              v15 = v164;
              v13 = v174;
              v51 = v182;
            }
            else
            {
              v56 = v7;
              v7 += v55;
              memset(v56, 32, v55);
              v51 = v182;
              v13 = v174;
              v15 = v164;
            }
          }
          v173 = v13;
          v36 = (size_t)v51;
          v35 = v40;
          v37 = v7;
          v163 = (unsigned __int64)v51;
LABEL_64:
          if ( v15 )
          {
            sub_40EE30((__int64)v37, (__int64)v35, v36);
            v38 = v163;
            v13 = v173;
          }
          else
          {
            memcpy(v37, v35, v36);
            v13 = v173;
            v38 = v163;
          }
LABEL_66:
          v7 += v38;
        }
LABEL_67:
        v12 += v32;
        goto LABEL_12;
      }
      return 0LL;
    case 0x3A:
      v119 = *(_BYTE *)(v8 + 1);
      a2 = (char *)(v8 + 1);
      for ( j = 1LL; v119 == 58; a2 = (char *)(v8 + j) )
        v119 = *(_BYTE *)(v8 + ++j);
      if ( v119 != 122 )
        goto LABEL_237;
      v8 = (signed __int64)a2;
LABEL_253:
      if ( tp->tm_isdst < 0 )
      {
        v13 = (_BYTE *)v8;
        goto LABEL_12;
      }
      v110 = tp->tm_gmtoff;
      LOBYTE(v73) = 1;
      if ( (signed int)v110 >= 0 )
      {
        LOBYTE(v73) = 0;
        if ( !(_DWORD)v110 )
          LOBYTE(v73) = *v158 == 45;
      }
      v170 = (signed int)v110 / 3600;
      v111 = (signed int)v110 / 60 % 60;
      v72 = (signed int)v110 / 60 % 60;
      v112 = (signed int)v110 % 60;
      if ( j == 1 )
        goto LABEL_362;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_381;
        if ( j != 3 )
        {
          v113 = *(_BYTE *)v8;
          v103 = (_BYTE *)v8;
LABEL_262:
          LODWORD(v105) = 0;
          a2 = (char *)(v156 - v12);
          if ( v24 >= 0 )
            LODWORD(v105) = v24;
          v105 = (signed int)v105;
          if ( v113 == 37 )
          {
            v82 = 1LL;
            v13 = v103;
            v104 = 1LL;
            if ( v105 )
              v82 = v105;
          }
          else
          {
            v8 = (signed __int64)v103;
LABEL_237:
            v102 = v8 - 1;
            do
            {
              v103 = (_BYTE *)v102;
              LODWORD(v104) = v8 - 1 + 2 - v102--;
            }
            while ( *(_BYTE *)(v102 + 1) != 37 );
            LODWORD(v105) = 0;
            v104 = (signed int)v104;
            v13 = (_BYTE *)v8;
            a2 = (char *)(v156 - v12);
            if ( v24 >= 0 )
              LODWORD(v105) = v24;
            v105 = (signed int)v105;
            v82 = (signed int)v105;
            if ( v104 >= (signed int)v105 )
              v82 = v104;
          }
LABEL_243:
          if ( (unsigned __int64)a2 > v82 )
          {
            if ( v7 )
            {
              if ( v104 < v105 )
              {
                v187 = v104;
                v106 = v24 - v104;
                v184 = v13;
                v177 = v103;
                v168 = v15;
                if ( i == 48 )
                {
                  v135 = v7;
                  v7 += v106;
                  memset(v135, 48, v106);
                  v15 = v168;
                  v103 = v177;
                  v13 = v184;
                  v104 = v187;
                }
                else
                {
                  v107 = v7;
                  v7 += v106;
                  memset(v107, 32, v106);
                  v104 = v187;
                  v13 = v184;
                  v103 = v177;
                  v15 = v168;
                }
              }
              v178 = v13;
              v169 = v104;
              if ( v15 )
              {
                sub_40EE30((__int64)v7, (__int64)v103, v104);
                v108 = v169;
                v13 = v178;
              }
              else
              {
                memcpy(v7, v103, v104);
                v13 = v178;
                v108 = v169;
              }
              v7 += v108;
            }
            v12 += v82;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v112 )
        {
LABEL_381:
          v147 = 10000 * v170;
          v50 = 9;
          v166 = 1;
          v148 = 100 * v72 + v147;
          v72 = 20;
          v71 = v148 + v112;
        }
        else if ( v111 )
        {
LABEL_362:
          v149 = 100 * v170;
          v50 = 6;
          v166 = 1;
          v71 = v72 + v149;
          v72 = 4;
        }
        else
        {
          v71 = v170;
          v50 = 3;
          v166 = 1;
        }
      }
      else
      {
        v150 = 100 * v170;
        v72 = 0;
        v166 = 1;
        v50 = 5;
        v71 = v111 + v150;
      }
      goto LABEL_121;
    case 0x70:
      v29 = 0;
LABEL_151:
      LOBYTE(v19) = 112;
      if ( (_BYTE)v16 )
        v29 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !(_DWORD)v20 )
      {
        v28 = v8;
        v27 = &v192;
        goto LABEL_52;
      }
      v50 = 0;
      goto LABEL_124;
  }
}

__int64 __fastcall sub_410650(void *a1, __int64 a2, char *a3, __int64 a4, __int64 a5, int a6)
{
  return sub_40EE80(a1, a3, a4, a2, 0, a5, a6);
}

char *__fastcall sub_410670(const char *a1)
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
  qword_6257C0 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_410710(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_4179A0(0LL);
  if ( (*(_BYTE *)v4 & 0xDF) == 85 )
  {
    if ( (*(_BYTE *)(v4 + 1) & 0xDF) == 84
      && (*(_BYTE *)(v4 + 2) & 0xDF) == 70
      && *(_BYTE *)(v4 + 3) == 45
      && *(_BYTE *)(v4 + 4) == 56
      && !*(_BYTE *)(v4 + 5) )
    {
      v5 = *v2 == 96;
      v2 = "â€˜";
      if ( !v5 )
        v2 = "â€™";
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
    v2 = "¡\ae";
    if ( !v5 )
      v2 = "¡¯";
    return (char *)v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_410810(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_410710("`", v11);
        v58 = sub_410710("'", v11);
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
            return sub_410810((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_410810((__int64)v9, v79, s);
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
                return sub_410810((__int64)v9, v10, s);
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
              return sub_410810((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_410810((__int64)v9, v10, s);
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
              return sub_410810((__int64)v9, v10, s);
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
              return sub_410810((__int64)v9, v10, s);
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
            return sub_410810((__int64)v9, v10, s);
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
            return sub_410810((__int64)v9, v10, s);
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
              return sub_410810((__int64)v9, v10, s);
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
          return sub_410810((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_410810((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_416E80((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_410810((__int64)v9, v10, s);
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
      return sub_410810((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_410810(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_410710("`", v11);
        v58 = sub_410710("'", v11);
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
            return sub_410810((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_410810((__int64)v9, v79, s);
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
                return sub_410810((__int64)v9, v10, s);
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
              return sub_410810((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_410810((__int64)v9, v10, s);
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
              return sub_410810((__int64)v9, v10, s);
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
              return sub_410810((__int64)v9, v10, s);
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
            return sub_410810((__int64)v9, v10, s);
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
            return sub_410810((__int64)v9, v10, s);
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
              return sub_410810((__int64)v9, v10, s);
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
          return sub_410810((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_410810((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_416E80((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_410810((__int64)v9, v10, s);
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
      return sub_410810((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_411A40(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v8 = off_624618;
  v9 = v6;
  v23 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_624630 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_412BD0(a1, a2, v7);
    v10 = 16LL * ((signed int)a1 + 1);
    if ( off_624618 == &xmmword_624620 )
    {
      LODWORD(v21) = sub_4129E0(0LL, v10);
      v8 = v21;
      off_624618 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_624620);
    }
    else
    {
      LODWORD(v11) = sub_4129E0(off_624618, v10);
      off_624618 = v11;
      v8 = v11;
    }
    memset(&v8[dword_624630], 0, 16LL * ((signed int)a1 + 1 - dword_624630));
    dword_624630 = a1 + 1;
  }
  v12 = (signed __int64)&v8[(signed int)a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_410810(v13, *(_QWORD *)v12, v22, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_6257E0 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_412980(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_410810(v18, v16, v22, v4, v19, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v23;
  return v13;
}

_BYTE *__fastcall sub_411A40(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v8 = off_624618;
  v9 = v6;
  v23 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_624630 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_412BD0(a1, a2, v7);
    v10 = 16LL * ((signed int)a1 + 1);
    if ( off_624618 == &xmmword_624620 )
    {
      LODWORD(v21) = sub_4129E0(0LL, v10);
      v8 = v21;
      off_624618 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_624620);
    }
    else
    {
      LODWORD(v11) = sub_4129E0(off_624618, v10);
      off_624618 = v11;
      v8 = v11;
    }
    memset(&v8[dword_624630], 0, 16LL * ((signed int)a1 + 1 - dword_624630));
    dword_624630 = a1 + 1;
  }
  v12 = (signed __int64)&v8[(signed int)a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_410810(v13, *(_QWORD *)v12, v22, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_6257E0 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_412980(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_410810(v18, v16, v22, v4, v19, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v23;
  return v13;
}

int __fastcall sub_411BE0(__int128 *a1)
{
  __int128 *v1; // rbx@1
  int *v2; // rax@1
  int v3; // er12@1
  int *v4; // rbp@1
  int result; // eax@3

  v1 = a1;
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  if ( !a1 )
    v1 = &xmmword_6258E0;
  result = sub_412B80(v1, 56LL);
  *v4 = v3;
  return result;
}

__int64 __fastcall sub_411C20(__int128 *a1)
{
  if ( !a1 )
    a1 = &xmmword_6258E0;
  return *(_DWORD *)a1;
}

__int128 *__fastcall sub_411C30(__int128 *a1, int a2)
{
  __int128 *result; // rax@1

  result = &xmmword_6258E0;
  if ( !a1 )
    a1 = &xmmword_6258E0;
  *(_DWORD *)a1 = a2;
  return result;
}

__int64 __fastcall sub_411C40(__int128 *a1, unsigned __int8 a2, char a3)
{
  unsigned int *v3; // rdi@3
  unsigned int v4; // eax@3
  char v5; // dl@3
  __int64 result; // rax@3

  if ( !a1 )
    a1 = &xmmword_6258E0;
  v3 = (unsigned int *)((char *)a1 + 4 * (a2 >> 5) + 8);
  v4 = *v3 >> (a2 & 0x1F);
  v5 = v4 ^ a3;
  result = v4 & 1;
  *v3 ^= (v5 & 1) << (a2 & 0x1F);
  return result;
}

unsigned __int64 __fastcall sub_411CD0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, __int128 *a5)
{
  char *v5; // r15@1
  __int128 *v6; // rbx@1
  unsigned __int64 v7; // ST28_8@3
  int *v8; // rax@3
  int v9; // er12@3
  int *v10; // rbp@3
  unsigned __int64 result; // rax@3

  v5 = a3;
  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_6258E0;
  v7 = a4;
  v8 = __errno_location();
  v9 = *v8;
  v10 = v8;
  result = sub_410810(
             a1,
             a2,
             v5,
             v7,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((char **)v6 + 5),
             *((char **)v6 + 6));
  *v10 = v9;
  return result;
}

_BYTE *__fastcall sub_411F60(__int64 a1, int a2, char *a3)
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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_411F60(__int64 a1, int a2, char *a3)
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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_412040(int a1, char *a2)
{
  return sub_411F60(0LL, a1, a2);
}

_BYTE *__fastcall sub_412060(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_625910;
  v4 = _mm_load_si128((const __m128i *)&xmmword_6258E0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_6258F0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_625900);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_411A40(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_4120E0(char *a1)
{
  return sub_412060(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_412110(__int64 a1, int a2, char *a3)
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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_412110(__int64 a1, int a2, char *a3)
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
  return sub_411A40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_412270(__int64 a1, char *a2)
{
  return sub_411A40(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6245E0);
}

_BYTE *__fastcall sub_412290(char *a1)
{
  return sub_411A40(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6245E0);
}

int __fastcall sub_4123E0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_4123E0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_412840(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4123E0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_4123E0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_412980(size_t a1, __int64 a2)
{
  void *result; // rax@1
  __int64 v3; // rdx@1

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
        sub_412BD0(a1, a2, v3);
    }
  }
  return result;
}

void *__fastcall sub_412AE0(void *a1, unsigned __int64 *a2, signed __int64 a3)
{
  unsigned __int64 v3; // rax@1

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

void *__fastcall sub_412B80(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_412980(a2, a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_412BB0(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_412B80(a1, v1 + 1);
}

void __noreturn sub_412BD0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_412C10(char *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
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

__int64 sub_412D10()
{
  __int64 v0; // rax@1
  __int64 v1; // rbx@1

  LODWORD(v0) = sub_415BE0(0LL, 0LL);
  v1 = v0;
  if ( !v0 && *__errno_location() == 12 )
    sub_412BD0();
  return v1;
}

void *sub_412D40()
{
  signed __int64 v0; // r13@1
  void *v1; // rbx@1
  signed __int64 v2; // rdx@1
  int *v3; // r12@1
  char *v4; // rbp@2
  size_t v5; // rsi@2
  unsigned __int64 v7; // rbp@5
  __int64 v8; // [sp+8h] [bp-30h]@1

  v0 = 68723675137LL;
  v1 = 0LL;
  v8 = 34LL;
  v3 = __errno_location();
  do
  {
    while ( 1 )
    {
      v1 = sub_412AE0(v1, (unsigned __int64 *)&v8, v2);
      v4 = (char *)v1 + v8 - 2;
      v5 = v8 - 1;
      *v4 = 0;
      *v3 = 0;
      if ( gethostname((char *)v1, v5) )
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

void __fastcall __noreturn sub_413220(int a1, int a2, char a3, __int64 a4, __int64 a5)
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
    v9 = (&off_41F1E0)[8 * v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_41F171[-(signed __int64)v7];
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

void __fastcall __noreturn sub_413220(int a1, int a2, char a3, __int64 a4, __int64 a5)
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
    v9 = (&off_41F1E0)[8 * v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_41F171[-(signed __int64)v7];
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

signed __int64 __fastcall sub_4136F0(__int64 a1)
{
  signed __int64 v1; // r12@1
  __int64 v2; // rbx@1
  int v3; // edx@2
  unsigned __int64 v4; // rcx@4
  int v6; // edx@12
  __int64 v7; // rax@22

  v1 = 3221227009LL;
  v2 = a1;
LABEL_2:
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    if ( !v3 )
      return a1;
    while ( v3 != 91 )
    {
      v4 = (unsigned int)(v3 - 33);
      if ( (unsigned int)v4 <= 0x1F )
      {
        if ( _bittest64(&v1, v4) && *(_DWORD *)(v2 + 8) == 40 )
        {
          LODWORD(v7) = sub_4136F0(v2 + 8);
          v2 = v7;
          goto LABEL_2;
        }
        if ( v3 == 41 )
          return v2 + 8;
      }
      v2 += 4LL;
      v3 = *(_DWORD *)(v2 + 4);
      if ( !v3 )
        return a1;
    }
    if ( !dword_625918 )
      dword_625918 = -((unsigned __int64)getenv("POSIXLY_CORRECT") < 1) | 1;
    v6 = *(_DWORD *)(v2 + 8);
    if ( v6 == 33 || dword_625918 < 0 && v6 == 94 )
    {
      v6 = *(_DWORD *)(v2 + 12);
      v2 += 12LL;
    }
    else
    {
      v2 += 8LL;
    }
    if ( v6 == 93 )
    {
      v6 = *(_DWORD *)(v2 + 4);
      v2 += 4LL;
    }
    while ( v6 != 93 )
    {
      if ( !v6 )
        return a1;
      v6 = *(_DWORD *)(v2 + 4);
      v2 += 4LL;
    }
  }
}

signed __int64 __fastcall sub_4137F0(__int64 a1)
{
  signed __int64 v1; // r12@1
  __int64 v2; // rbx@1
  int v3; // edx@2
  char v5; // dl@12
  __int64 v6; // rax@22

  v1 = 3221227009LL;
  v2 = a1;
LABEL_2:
  while ( 1 )
  {
    v3 = *(_BYTE *)(v2 + 1);
    if ( !(_BYTE)v3 )
      return a1;
    while ( (_BYTE)v3 != 91 )
    {
      if ( (unsigned __int8)(v3 - 33) <= 0x1Fu )
      {
        if ( _bittest64(&v1, (unsigned int)(v3 - 33)) && *(_BYTE *)(v2 + 2) == 40 )
        {
          LODWORD(v6) = sub_4137F0(v2 + 2);
          v2 = v6;
          goto LABEL_2;
        }
        if ( (_BYTE)v3 == 41 )
          return v2 + 2;
      }
      v3 = *(_BYTE *)(++v2 + 1);
      if ( !(_BYTE)v3 )
        return a1;
    }
    if ( !dword_625918 )
      dword_625918 = -((unsigned __int64)getenv("POSIXLY_CORRECT") < 1) | 1;
    v5 = *(_BYTE *)(v2 + 2);
    if ( v5 == 33 || dword_625918 < 0 && v5 == 94 )
    {
      v5 = *(_BYTE *)(v2 + 3);
      v2 += 3LL;
    }
    else
    {
      v2 += 2LL;
    }
    if ( v5 == 93 )
      v5 = *(_BYTE *)(v2++ + 1);
    while ( v5 != 93 )
    {
      if ( !v5 )
        return a1;
      v5 = *(_BYTE *)(v2++ + 1);
    }
  }
}

signed __int64 __fastcall sub_4138F0(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned int v6; // er12@1
  signed int v7; // eax@1
  signed __int64 v8; // r14@2
  const wchar_t *v9; // rsi@2
  __int64 *v10; // rbx@2
  signed __int64 v11; // r15@2
  __int64 v12; // r13@2
  unsigned __int64 v13; // rdx@8
  signed __int64 result; // rax@14
  wchar_t v15; // eax@19
  signed __int64 v16; // rdx@22
  unsigned __int64 v17; // rdx@30
  unsigned __int64 v18; // rax@32
  void *v19; // rsp@34
  wchar_t *v20; // rax@34
  char *v21; // rax@18
  _QWORD *v22; // r13@35
  __int64 v23; // rbx@35
  unsigned __int64 v24; // rax@37
  void *v25; // rsp@39
  __int64 v26; // r13@39
  unsigned __int64 v27; // r14@43
  unsigned int v28; // er12@43
  signed __int64 v29; // rax@45
  unsigned __int64 v30; // rbx@45
  unsigned __int64 v31; // r15@47
  __int64 v32; // rcx@48
  __int64 v33; // rcx@51
  unsigned __int64 v34; // r15@61
  unsigned __int64 v35; // r14@61
  unsigned int v36; // ebx@61
  _QWORD *v37; // r13@63
  __int64 v38; // rcx@67
  unsigned __int64 v39; // r15@73
  unsigned int v40; // ebx@73
  wchar_t *v41; // rax@77
  const wchar_t *v42; // [sp+8h] [bp-78h]@18
  signed __int64 v43; // [sp+8h] [bp-78h]@45
  __int64 v44; // [sp+8h] [bp-78h]@53
  __int64 v45; // [sp+10h] [bp-70h]@2
  unsigned __int64 v46; // [sp+18h] [bp-68h]@1
  unsigned __int8 v47; // [sp+23h] [bp-5Dh]@1
  unsigned int v48; // [sp+24h] [bp-5Ch]@1
  unsigned __int64 v49; // [sp+28h] [bp-58h]@1
  __int64 v50; // [sp+30h] [bp-50h]@1
  size_t v51; // [sp+38h] [bp-48h]@1
  __int64 v52; // [sp+48h] [bp-38h]@1

  LOBYTE(v6) = a5;
  LODWORD(v50) = a1;
  v46 = a3;
  v49 = a4;
  v48 = a6;
  v47 = a5;
  v52 = 0LL;
  v51 = wcslen((const wchar_t *)a2);
  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 )
  {
    v8 = a2 + 4;
    v45 = a2;
    v9 = (const wchar_t *)(a2 + 4);
    v10 = &v52;
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
          dword_625918 = -((unsigned __int64)v21 < 1) | 1;
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
            goto LABEL_14;
          v15 = *(_DWORD *)v8;
          v16 += 4LL;
        }
        v7 = *(_DWORD *)(v16 + 4);
LABEL_6:
        if ( !v7 )
          goto LABEL_14;
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
            goto LABEL_6;
          }
          v17 = v51;
          if ( (unsigned int)(v50 - 63) > 1 )
            v17 = ((v8 - (signed __int64)v9) >> 2) + 1;
          v18 = (4 * v17 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v18 - 8 <= 0x1F37 && v17 <= 0x3FFFFFFFFFFFFFFFLL )
          {
            v19 = alloca(v18 + 8);
            v20 = wmempcpy(
                    (wchar_t *)((((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8),
                    v9,
                    (v8 - (signed __int64)v9) >> 2);
            v9 = (const wchar_t *)(v8 + 4);
            *v20 = 0;
            v7 = *(_DWORD *)(v8 + 4);
            v8 += 4LL;
            *(_QWORD *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
            *v10 = ((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL;
            v10 = (__int64 *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL);
            v12 = 0LL;
            goto LABEL_6;
          }
          goto LABEL_14;
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
          goto LABEL_14;
        continue;
      }
      break;
    }
    v22 = v10;
    v23 = v45;
    if ( (unsigned int)(v50 - 63) > 1 )
      v51 = ((v8 - (signed __int64)v9) >> 2) + 1;
    v24 = (4 * v51 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v24 - 8 > 0x1F37 || v51 > 0x3FFFFFFFFFFFFFFFLL )
      goto LABEL_14;
    v25 = alloca(v24 + 8);
    *wmempcpy(
       (wchar_t *)((((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8),
       v9,
       (v8 - (signed __int64)v9) >> 2) = 0;
    *v22 = ((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL;
    v26 = v52;
    *(_QWORD *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
    if ( !v26 )
      __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_wmatch");
    if ( *(_DWORD *)(v8 - 4) != 41 )
      __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_wmatch");
    switch ( (_DWORD)v50 )
    {
      case 0x2A:
        if ( sub_413E80(v8, v46, v49, (unsigned __int8)v6, v48) )
          goto LABEL_43;
        return 0LL;
      case 0x2B:
LABEL_43:
        v45 = v8;
        v27 = v46;
        v28 = v48 & 0xFFFFFFFB;
        if ( v48 & 1 )
          v28 = v48;
        v29 = v23 - 4;
        LODWORD(v50) = v48 & 1;
        v30 = v49;
        v43 = v29;
        do
        {
          if ( v27 <= v30 )
          {
            v31 = v27;
            LODWORD(v51) = v47;
            do
            {
              if ( !sub_413E80(v26 + 8, v27, v31, (unsigned int)v51, v28) )
              {
                if ( v27 == v31 )
                {
                  if ( !sub_413E80(v45, v27, v30, (unsigned int)v51, v28) )
                    return 0LL;
                }
                else
                {
                  v32 = 0LL;
                  if ( *(_DWORD *)(v31 - 4) == 47 )
                    v32 = (v48 & 5) == 5;
                  if ( !sub_413E80(v45, v31, v30, v32, v28) )
                    return 0LL;
                  v33 = 0LL;
                  if ( *(_DWORD *)(v31 - 4) == 47 )
                    v33 = (v48 & 5) == 5;
                  if ( !sub_413E80(v44, v31, v30, v33, v28) )
                    return 0LL;
                }
                v26 = v52;
              }
              v31 += 4LL;
            }
            while ( v30 >= v31 );
          }
          v26 = *(_QWORD *)v26;
          v52 = v26;
        }
        while ( v26 );
        goto LABEL_71;
      case 0x21:
        if ( v46 > v49 )
          goto LABEL_71;
        v34 = v46;
        v51 = v26;
        v6 = (unsigned __int8)v6;
        v50 = v8;
        v35 = v46;
        v36 = v48 & 0xFFFFFFFB;
        if ( v48 & 1 )
          v36 = v48;
        break;
      case 0x40:
        v6 = (unsigned __int8)v6;
        goto LABEL_73;
      case 0x3F:
        v6 = (unsigned __int8)v6;
        if ( sub_413E80(v8, v46, v49, (unsigned __int8)v6, v48) )
        {
LABEL_73:
          v39 = v46;
          v40 = v48 & 0xFFFFFFFB;
          if ( v48 & 1 )
            v40 = v48;
          while ( 1 )
          {
            v41 = wcscat((wchar_t *)(v26 + 8), (const wchar_t *)v8);
            if ( !sub_413E80(v41, v39, v49, v6, v40) )
              break;
            v26 = *(_QWORD *)v26;
            v52 = v26;
            if ( !v26 )
              goto LABEL_71;
          }
          result = 0LL;
        }
        else
        {
          result = 0LL;
        }
        return result;
      default:
        __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_wmatch");
        return result;
    }
    do
    {
      v37 = (_QWORD *)v51;
      while ( sub_413E80(v37 + 1, v34, v35, v6, v36) )
      {
        v37 = (_QWORD *)*v37;
        if ( !v37 )
        {
          if ( v34 == v35 )
          {
            v38 = v6;
          }
          else
          {
            v38 = 0LL;
            if ( *(_DWORD *)(v35 - 4) == 47 )
              v38 = (v48 & 5) == 5;
          }
          if ( !sub_413E80(v50, v35, v49, v38, v36) )
            return 0LL;
          break;
        }
      }
      v35 += 4LL;
    }
    while ( v49 >= v35 );
LABEL_71:
    result = 1LL;
  }
  else
  {
LABEL_14:
    result = 0xFFFFFFFFLL;
  }
  return result;
}

signed __int64 __fastcall sub_413E80(wint_t *a1, wint_t *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  wint_t *v5; // r14@1
  wint_t *v6; // rbx@1
  wint_t v7; // er15@1
  unsigned __int8 v8; // r10@2
  int v9; // er12@2
  int v10; // er13@2
  signed __int64 v11; // rbp@2
  unsigned __int8 v12; // ST1C_1@4
  wint_t v13; // eax@4
  wint_t v14; // eax@10
  wint_t v15; // er8@14
  int v16; // eax@17
  signed int *v17; // r14@20
  wint_t *v18; // r15@23
  signed int v19; // eax@23
  wint_t v20; // ebx@23
  signed int v21; // er14@31
  signed __int64 i; // rsi@34
  wint_t v23; // edx@35
  signed int *v24; // rsi@37
  bool v25; // di@41
  wint_t v26; // eax@50
  signed __int64 result; // rax@58
  signed __int64 v28; // rax@64
  int v29; // ebp@64
  wint_t *v30; // r14@64
  signed __int64 v31; // r13@64
  wint_t v32; // er11@68
  wint_t *v33; // r15@68
  bool v34; // dl@70
  wint_t *v35; // rax@74
  wchar_t *v36; // rax@78
  wint_t v37; // er11@78
  wchar_t *v38; // r9@78
  unsigned __int8 v39; // r10@78
  wchar_t *v40; // ST08_8@86
  wint_t v41; // eax@86
  signed __int64 v42; // r15@87
  wint_t v43; // er12@88
  unsigned int v44; // er14@88
  wint_t *v45; // r13@88
  unsigned __int64 v46; // rbx@88
  wint_t v47; // eax@90
  signed __int64 v48; // r14@104
  __int64 v49; // rdx@104
  int v50; // eax@107
  unsigned __int8 v51; // ST10_1@118
  bool v52; // ST08_1@118
  unsigned __int8 v53; // ST1C_1@12
  char *v54; // rax@12
  unsigned __int64 v55; // rax@132
  signed __int64 v56; // rdx@133
  unsigned int v57; // eax@135
  signed __int64 v58; // r15@137
  unsigned int v59; // ebp@137
  unsigned __int64 v60; // r12@138
  unsigned __int64 v61; // rcx@143
  unsigned __int8 v62; // ST1C_1@146
  signed int *v63; // r8@152
  signed int v64; // edx@152
  signed __int64 v65; // rbp@157
  int v66; // eax@161
  signed __int64 v67; // rax@176
  signed __int64 v68; // rbp@176
  char *v69; // rsi@182
  int *v70; // rdx@182
  int v71; // eax@182
  wctype_t v72; // rax@206
  signed __int64 v73; // r9@209
  __int64 v74; // [sp+8h] [bp-580h]@1
  wint_t *v75; // [sp+8h] [bp-580h]@88
  unsigned __int64 wc; // [sp+10h] [bp-578h]@2
  wint_t wca; // [sp+10h] [bp-578h]@78
  unsigned __int8 wcb; // [sp+10h] [bp-578h]@143
  unsigned int v79; // [sp+18h] [bp-570h]@1
  signed int v80; // [sp+1Ch] [bp-56Ch]@20
  unsigned __int8 v81; // [sp+1Ch] [bp-56Ch]@78
  wint_t v82; // [sp+1Ch] [bp-56Ch]@118
  int v83; // [sp+20h] [bp-568h]@2
  wint_t v84; // [sp+24h] [bp-564h]@23
  char property; // [sp+30h] [bp-558h]@182
  int v86; // [sp+13Ch] [bp-44Ch]@106
  int v87[274]; // [sp+140h] [bp-448h]@182
  int _540[274]; // [sp+540h] [bp-48h]@185

  v5 = (wint_t *)a3;
  v6 = a2;
  v7 = *a1;
  v79 = a5;
  v74 = (__int64)(a1 + 1);
  if ( !*a1 )
  {
LABEL_56:
    if ( v6 != v5 )
    {
      if ( !(v79 & 8) )
        return 1LL;
      return *v6 != 47;
    }
    return 0LL;
  }
  wc = a3;
  v83 = a5 & 5;
  v8 = a4;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  v11 = (signed __int64)a1;
LABEL_3:
  if ( v10 )
  {
    v12 = v8;
    v13 = towlower(v7);
    v8 = v12;
    v7 = v13;
  }
  switch ( v7 )
  {
    case 0x5Cu:
      if ( v9 )
      {
        if ( (wint_t *)wc == v6 )
          return 1LL;
        if ( v10 )
          goto LABEL_10;
      }
      else
      {
        v7 = *(_DWORD *)(v11 + 4);
        v74 = v11 + 8;
        if ( !v7 )
          return 1LL;
        if ( v10 )
        {
          v7 = towlower(v7);
          if ( (wint_t *)wc == v6 )
            return 1LL;
LABEL_10:
          v14 = towlower(*v6);
          v11 = v74;
          goto LABEL_98;
        }
        if ( (wint_t *)wc == v6 )
          return 1LL;
      }
      v14 = *v6;
      v11 = v74;
LABEL_98:
      if ( v14 != v7 )
        return 1LL;
      goto LABEL_99;
    case 0x5Bu:
      if ( !dword_625918 )
      {
        v53 = v8;
        v54 = getenv("POSIXLY_CORRECT");
        v8 = v53;
        dword_625918 = -((unsigned __int64)v54 < 1) | 1;
      }
      if ( (wint_t *)wc == v6 )
        return 1LL;
      v15 = *v6;
      if ( *v6 == 46 )
      {
        if ( v8 )
          return 1LL;
      }
      else if ( v15 == 47 && v79 & 1 )
      {
        return 1LL;
      }
      v16 = *(_DWORD *)(v11 + 4);
      if ( v16 == 33 || dword_625918 < 0 && v16 == 94 )
      {
        v17 = (signed int *)(v11 + 8);
        v80 = 1;
      }
      else
      {
        v80 = 0;
        v17 = (signed int *)v74;
      }
      if ( v10 )
        v15 = towlower(v15);
      v84 = v7;
      v11 = (signed __int64)(v17 + 1);
      v18 = v6;
      v19 = *v17;
      v20 = v15;
      do
      {
        while ( 2 )
        {
          if ( !v9 && v19 == 92 )
          {
            v19 = *(_DWORD *)v11;
            if ( !*(_DWORD *)v11 )
              return 1LL;
            if ( v10 )
              v19 = towlower(v19);
            v21 = *(_DWORD *)(v11 + 4);
            v11 += 4LL;
            goto LABEL_34;
          }
          if ( v19 != 91 )
          {
            if ( v19 )
            {
              v21 = *(_DWORD *)v11;
              goto LABEL_32;
            }
            v6 = v18;
            v7 = v84;
LABEL_50:
            v26 = *v6;
            if ( v10 )
              v26 = towlower(v26);
            if ( v26 != v7 )
              return 1LL;
LABEL_53:
            v11 = v74;
            v8 = 0;
            goto LABEL_54;
          }
          v21 = *(_DWORD *)v11;
          if ( *(_DWORD *)v11 != 58 )
          {
            while ( 1 )
            {
LABEL_32:
              if ( v10 )
                v19 = towlower(v19);
LABEL_34:
              i = v11 + 4;
              if ( v21 != 45 )
              {
                if ( v19 == v20 )
                  goto LABEL_148;
                v19 = v21;
                v11 += 4LL;
                goto LABEL_26;
              }
              v23 = *(_DWORD *)(v11 + 4);
              if ( v23 != 93 && v23 )
                goto LABEL_213;
              if ( v19 == v20 )
              {
                v6 = v18;
                goto LABEL_152;
              }
              if ( v23 != 93 )
              {
LABEL_213:
                v24 = (signed int *)(v11 + 8);
                if ( v23 == 92 && !v9 )
                {
                  v24 = (signed int *)(v11 + 12);
                  v23 = *(_DWORD *)(v11 + 8);
                }
                if ( !v23 )
                  return 1LL;
                v21 = *v24;
                v11 = (signed __int64)(v24 + 1);
                v25 = v19 <= v20;
                v19 = *v24;
                if ( v23 >= v20 && v25 )
                {
                  v11 = (signed __int64)v24;
                  v6 = v18;
                  i = (signed __int64)(v24 + 1);
                  goto LABEL_152;
                }
                goto LABEL_26;
              }
              v21 = 93;
              v11 += 4LL;
              v19 = 45;
            }
          }
          v48 = v11;
          v49 = 0LL;
          while ( 1 )
          {
            v50 = *(_DWORD *)(v48 + 4);
            if ( v50 == 58 )
              break;
            if ( (unsigned int)(v50 - 97) > 0x18 )
              goto LABEL_109;
            ++v49;
            v48 += 4LL;
            *(&v86 + v49) = v50;
            if ( v49 == 256 )
              return 1LL;
          }
          if ( *(_DWORD *)(v48 + 8) != 93 )
          {
LABEL_109:
            i = v11 + 4;
            if ( v20 == 91 )
            {
LABEL_148:
              v6 = v18;
              v21 = *(_DWORD *)v11;
              goto LABEL_152;
            }
            v11 += 4LL;
            v19 = 58;
            continue;
          }
          break;
        }
        v87[v49] = 0;
        v69 = &property;
        v70 = v87;
        v71 = v87[0];
        do
        {
          if ( v71 <= 63 )
          {
            if ( v71 < 37 && (unsigned int)(v71 - 32) > 3 )
              return 1LL;
          }
          else if ( v71 < 65 || v71 > 95 && (unsigned int)(v71 - 97) > 0x1D )
          {
            return 1LL;
          }
          if ( v70 == _540 )
            return 1LL;
          ++v70;
          *(++v69 - 1) = v71;
          v71 = *v70;
        }
        while ( *v70 );
        *v69 = 0;
        v72 = wctype(&property);
        if ( !v72 )
          return 1LL;
        if ( iswctype(*v18, v72) )
        {
          v73 = v48;
          v11 = v48 + 12;
          v6 = v18;
          v21 = *(_DWORD *)(v48 + 12);
          for ( i = v73 + 16; ; i = v11 + 4 )
          {
LABEL_152:
            v63 = (signed int *)i;
            v64 = v21;
            if ( !v21 )
              return 1LL;
            v8 = v9 == 0 && v21 == 92;
            if ( v8 )
            {
              if ( *(_DWORD *)(v11 + 4) )
              {
                v21 = *(_DWORD *)(v11 + 8);
                v11 += 8LL;
                continue;
              }
              return 1LL;
            }
            if ( v21 != 91 )
              goto LABEL_149;
            v21 = *(_DWORD *)(v11 + 4);
            if ( v21 != 58 )
              break;
            v67 = v11 + 8;
            v21 = *(_DWORD *)(v11 + 8);
            v68 = v11 + 1028;
            while ( 1 )
            {
              if ( v21 == 58 )
              {
                if ( *(_DWORD *)(v67 + 4) != 93 )
                  goto LABEL_158;
                v63 = (signed int *)(v67 + 12);
                v64 = *(_DWORD *)(v67 + 8);
                goto LABEL_149;
              }
              if ( (unsigned int)(v21 - 97) > 0x18 )
                break;
              v67 += 4LL;
              v21 = *(_DWORD *)v67;
              if ( v68 == v67 )
                return 1LL;
            }
            v21 = 58;
            v11 = i;
LABEL_151:
            ;
          }
          if ( v21 == 61 )
          {
            if ( *(_DWORD *)(v11 + 8) && *(_DWORD *)(v11 + 12) == 61 && *(_DWORD *)(v11 + 16) == 93 )
            {
              v63 = (signed int *)(v11 + 24);
              v64 = *(_DWORD *)(v11 + 20);
              goto LABEL_149;
            }
            return 1LL;
          }
          v65 = v11 + 8;
          if ( v21 != 46 )
          {
LABEL_158:
            v11 = i;
            goto LABEL_151;
          }
          while ( 1 )
          {
            v66 = *(_DWORD *)(v65 + 4);
            if ( !v66 )
              return 1LL;
            if ( v66 == 46 && *(_DWORD *)(v65 + 8) == 93 )
              break;
            v65 += 4LL;
          }
          v63 = (signed int *)(v65 + 16);
          v64 = *(_DWORD *)(v65 + 12);
LABEL_149:
          if ( v64 != 93 )
          {
            v21 = *v63;
            v11 = (signed __int64)v63;
            goto LABEL_151;
          }
          if ( v80 )
            return 1LL;
          v11 = (signed __int64)v63;
LABEL_54:
          v7 = *(_DWORD *)v11;
          ++v6;
          v74 = v11 + 4;
          if ( !*(_DWORD *)v11 )
          {
            v5 = (wint_t *)wc;
            goto LABEL_56;
          }
          goto LABEL_3;
        }
        v11 = v48 + 16;
        v19 = *(_DWORD *)(v48 + 12);
LABEL_26:
        ;
      }
      while ( v19 != 93 );
      v6 = v18;
      if ( v80 )
      {
LABEL_99:
        v8 = 0;
        goto LABEL_54;
      }
      return 1LL;
    case 0x3Fu:
      if ( v79 & 0x20 )
      {
        if ( *(_DWORD *)(v11 + 4) == 40 )
        {
          v62 = v8;
          result = sub_4138F0(63, v74, (unsigned __int64)v6, wc, v8, v79);
          v8 = v62;
          if ( (_DWORD)result != -1 )
            return result;
        }
      }
      if ( (wint_t *)wc == v6 )
        return 1LL;
      if ( *v6 == 47 )
      {
        if ( v79 & 1 )
          return 1LL;
        goto LABEL_53;
      }
      v8 &= *v6 == 46;
      if ( !v8 )
      {
        v11 = v74;
        goto LABEL_54;
      }
      return 1LL;
    case 0x2Fu:
      if ( v83 != 5 )
        goto LABEL_49;
      if ( (wint_t *)wc == v6 || *v6 != 47 )
        return 1LL;
      v11 = v74;
      v8 = 1;
      goto LABEL_54;
    default:
      goto LABEL_49;
    case 0x21u:
    case 0x2Bu:
    case 0x40u:
      if ( v79 & 0x20 )
      {
        if ( *(_DWORD *)(v11 + 4) == 40 )
        {
          result = sub_4138F0(v7, v74, (unsigned __int64)v6, wc, v8, v79);
          if ( (_DWORD)result != -1 )
            return result;
        }
      }
LABEL_49:
      if ( (wint_t *)wc != v6 )
        goto LABEL_50;
      return 1LL;
    case 0x2Au:
      v28 = v11;
      v29 = v10;
      v30 = (wint_t *)wc;
      v31 = v28;
      if ( !(v79 & 0x20) || *(_DWORD *)(v28 + 4) != 40 )
        goto LABEL_65;
      v61 = wc;
      wcb = v8;
      result = sub_4138F0(42, v74, (unsigned __int64)v6, v61, v8, v79);
      if ( (_DWORD)result != -1 )
        return result;
      v8 = wcb;
LABEL_65:
      if ( v30 != v6 && *v6 == 46 && v8 )
        return 1LL;
      v32 = *(_DWORD *)(v31 + 4);
      v33 = (wint_t *)(v31 + 8);
      if ( v32 != 42 && v32 != 63 )
        goto LABEL_77;
      v34 = (v79 & 0x20) != 0;
      break;
  }
  while ( 1 )
  {
    if ( *v33 != 40 || !v34 )
      goto LABEL_73;
    v51 = v8;
    v52 = v34;
    v82 = v32;
    v35 = (wint_t *)sub_4136F0((__int64)v33);
    v34 = v52;
    v8 = v51;
    if ( v35 == v33 )
      break;
LABEL_75:
    v32 = *v35;
    v33 = v35 + 1;
    if ( *v35 != 63 && v32 != 42 )
    {
LABEL_77:
      if ( v32 )
      {
        v81 = v8;
        wca = v32;
        v36 = wmemchr((const wchar_t *)v6, -(v79 & 1) & 0x2F, v30 - v6);
        v37 = wca;
        v38 = v36;
        v39 = v81;
        if ( !v36 )
          v38 = (wchar_t *)v30;
        if ( wca == 91
          || v79 & 0x20
          && (v55 = wca - 33, (unsigned int)v55 <= 0x1F)
          && (v56 = 2147484673LL, _bittest64(&v56, v55))
          && *v33 == 40 )
        {
          v57 = v79 & 0xFFFFFFFB;
          if ( v79 & 1 )
            v57 = v79;
          v58 = (signed __int64)(v33 - 1);
          v59 = v57;
          if ( v38 <= (wchar_t *)v6 )
            return 1LL;
          v60 = (unsigned __int64)v38;
          while ( sub_413E80(v58, v6, v30, v39, v59) )
          {
            ++v6;
            v39 = 0;
            if ( v60 <= (unsigned __int64)v6 )
              return 1LL;
          }
          return 0LL;
        }
        if ( wca == 47 )
        {
          if ( v79 & 1 )
          {
            if ( v30 <= v6 )
              return 1LL;
            while ( *v6 != 47 )
            {
              ++v6;
              if ( v30 <= v6 )
                return 1LL;
            }
            return sub_413E80(v33, v6 + 1, v30, (v79 >> 2) & 1, v79) != 0;
          }
        }
        else if ( v79 & 1 )
        {
          goto LABEL_84;
        }
        v79 &= 0xFFFFFFFB;
LABEL_84:
        if ( wca == 92 && !v9 )
          v37 = *v33;
        if ( v29 )
        {
          v40 = v38;
          v41 = towlower(v37);
          v38 = v40;
          v37 = v41;
        }
        v42 = (signed __int64)(v33 - 1);
        if ( v38 <= (wchar_t *)v6 )
          return 1LL;
        v75 = v30;
        v43 = v37;
        v44 = v81;
        v45 = v6;
        v46 = (unsigned __int64)v38;
        while ( 1 )
        {
          v47 = *v45;
          if ( v29 )
            v47 = towlower(v47);
          if ( v43 == v47 && !sub_413E80(v42, v45, v75, v44, v79) )
            break;
          ++v45;
          v44 = 0;
          if ( v46 <= (unsigned __int64)v45 )
            return 1LL;
        }
        return 0LL;
      }
      if ( v79 & 1 && !(v79 & 8) )
        return wmemchr((const wchar_t *)v6, 47, v30 - v6) != 0LL;
      return 0LL;
    }
  }
  v32 = v82;
LABEL_73:
  if ( v32 == 63 )
  {
    if ( v6 == v30 || *v6 == 47 && v79 & 1 )
      return 1LL;
    ++v6;
  }
  v35 = v33;
  goto LABEL_75;
}

signed __int64 __fastcall sub_414960(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned int v6; // er12@1
  signed int v7; // eax@1
  signed __int64 i; // r14@2
  const void *v9; // rsi@2
  __int64 *v10; // rbx@2
  signed __int64 v11; // r13@2
  __int64 v12; // r15@2
  signed __int64 result; // rax@14
  char v14; // al@19
  signed __int64 v15; // rcx@22
  signed __int64 v16; // rax@30
  unsigned __int64 v17; // rax@32
  void *v18; // rsp@33
  _BYTE *v19; // rax@33
  _QWORD *v20; // r15@34
  __int64 v21; // rbx@34
  signed __int64 v22; // rax@34
  unsigned __int64 v23; // rax@36
  void *v24; // rsp@37
  _BYTE *v25; // rax@37
  __int64 v26; // rax@37
  unsigned __int64 v27; // r15@41
  _QWORD *v28; // r14@41
  unsigned int v29; // er12@41
  signed __int64 v30; // rax@43
  unsigned __int64 v31; // rbx@43
  unsigned __int64 v32; // r13@45
  __int64 v33; // rcx@46
  __int64 v34; // rcx@49
  unsigned __int64 v35; // r15@59
  unsigned __int64 v36; // r13@59
  unsigned int v37; // ebx@59
  _QWORD *v38; // r14@61
  __int64 v39; // rcx@65
  __int64 v40; // r13@71
  unsigned __int64 v41; // r15@71
  unsigned int v42; // ebx@71
  char *v43; // rax@75
  __int64 v44; // [sp+8h] [bp-78h]@2
  unsigned __int8 v45; // [sp+13h] [bp-6Dh]@1
  unsigned int v46; // [sp+14h] [bp-6Ch]@1
  unsigned __int64 v47; // [sp+18h] [bp-68h]@1
  unsigned __int64 v48; // [sp+20h] [bp-60h]@1
  __int64 v49; // [sp+28h] [bp-58h]@2
  size_t v50; // [sp+30h] [bp-50h]@1
  __int64 v51; // [sp+38h] [bp-48h]@1
  _QWORD *v52; // [sp+48h] [bp-38h]@1

  LOBYTE(v6) = a5;
  LODWORD(v51) = a1;
  v48 = a3;
  v47 = a4;
  v46 = a6;
  v45 = a5;
  v52 = 0LL;
  v50 = strlen((const char *)a2);
  v7 = *(_BYTE *)(a2 + 1);
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
        dword_625918 = -((unsigned __int64)getenv("POSIXLY_CORRECT") < 1) | 1;
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
      v14 = *(_BYTE *)(v15++ + 1);
      for ( i = v15 + 1; v14 != 93; i = v15 + 1 )
      {
        if ( !v14 )
          return 0xFFFFFFFFLL;
        v14 = *(_BYTE *)i;
        v15 = i;
LABEL_27:
        ;
      }
      v7 = *(_BYTE *)(v15 + 1);
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
          v7 = *(_BYTE *)(i++ + 1);
          goto LABEL_6;
        }
        v16 = i - (_QWORD)v9 + 1;
        if ( (unsigned int)v49 <= 1 )
          v16 = v50;
        v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v17 - 8 <= 0x1F37 )
        {
          v18 = alloca(v17 + 8);
          v19 = mempcpy((void *)((((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8), v9, i - (_QWORD)v9);
          v9 = (const void *)(i + 1);
          *v19 = 0;
          v7 = *(_BYTE *)(i++ + 1);
          *(_QWORD *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
          *v10 = ((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL;
          v10 = (__int64 *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL);
          v12 = 0LL;
          goto LABEL_6;
        }
        return 0xFFFFFFFFLL;
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
      v7 = *(_BYTE *)(i + 1);
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
    case 0x2A:
      if ( sub_414EB0(i, v48, v47, (unsigned __int8)v6, v46) )
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
            if ( !sub_414EB0(v28 + 1, v27, v32, (unsigned int)v51, v29) )
            {
              if ( v27 == v32 )
              {
                if ( !sub_414EB0(v49, v27, v31, (unsigned int)v51, v29) )
                  return 0LL;
              }
              else
              {
                v33 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v33 = (v46 & 5) == 5;
                if ( !sub_414EB0(v49, v32, v31, v33, v29) )
                  return 0LL;
                v34 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v34 = (v46 & 5) == 5;
                if ( !sub_414EB0(v44, v32, v31, v34, v29) )
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
    case 0x21:
      if ( v48 > v47 )
        return 1LL;
      v35 = v48;
      v51 = i;
      v6 = (unsigned __int8)v6;
      v36 = v48;
      v37 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v37 = v46;
      break;
    case 0x40:
      v6 = (unsigned __int8)v6;
      goto LABEL_71;
    case 0x3F:
      v6 = (unsigned __int8)v6;
      if ( sub_414EB0(i, v48, v47, (unsigned __int8)v6, v46) )
      {
LABEL_71:
        v40 = v50;
        v41 = v47;
        v42 = v46 & 0xFFFFFFFB;
        if ( v46 & 1 )
          v42 = v46;
        while ( 1 )
        {
          v43 = strcat((char *)(v40 + 8), (const char *)i);
          if ( !sub_414EB0(v43, v48, v41, v6, v42) )
            break;
          v40 = *(_QWORD *)v40;
          v52 = (_QWORD *)v40;
          if ( !v40 )
            return 1LL;
        }
        result = 0LL;
      }
      else
      {
        result = 0LL;
      }
      return result;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_match");
      return result;
  }
  do
  {
    v38 = (_QWORD *)v50;
    while ( sub_414EB0(v38 + 1, v35, v36, v6, v37) )
    {
      v38 = (_QWORD *)*v38;
      if ( !v38 )
      {
        if ( v35 == v36 )
        {
          v39 = v6;
        }
        else
        {
          v39 = 0LL;
          if ( *(_BYTE *)(v36 - 1) == 47 )
            v39 = (v46 & 5) == 5;
        }
        if ( !sub_414EB0(v51, v36, v47, v39, v37) )
          return 0LL;
        break;
      }
    }
    ++v36;
  }
  while ( v47 >= v36 );
  return 1LL;
}

signed __int64 __fastcall sub_414EB0(_BYTE *a1, char *a2, unsigned __int64 a3, char a4, unsigned int a5)
{
  char *v5; // r14@1
  __int64 v6; // r12@1
  signed __int64 v7; // r13@2
  unsigned int v8; // er15@2
  int v9; // ebp@2
  int v10; // ebx@2
  unsigned __int8 v11; // r12@7
  signed int v12; // eax@10
  __int32_t v13; // edx@11
  __int64 v14; // r12@17
  char v15; // al@20
  _BYTE *v16; // r15@23
  signed __int64 v17; // r15@26
  char v18; // si@34
  char *i; // rax@37
  unsigned __int8 v20; // dl@38
  signed int v21; // ecx@40
  char *v22; // r8@49
  char v23; // cl@49
  __int32_t v24; // eax@61
  __int64 v25; // r13@62
  signed __int64 result; // rax@68
  __int64 v27; // r8@78
  _BYTE *v28; // r9@78
  _BYTE *v29; // rax@83
  __int64 v30; // rcx@86
  char *v31; // rax@87
  unsigned __int8 v32; // r8@87
  char *v33; // r12@87
  _BYTE *v34; // r9@87
  unsigned __int8 v35; // ST18_1@95
  _BYTE *v36; // ST10_8@95
  const __int32_t **v37; // rax@95
  int v38; // ebp@97
  unsigned int v39; // er13@97
  __int32_t v40; // eax@99
  unsigned __int8 v41; // r15@100
  const __int32_t *v42; // rdx@106
  signed __int64 v43; // r15@112
  __int64 v44; // rdx@112
  char v45; // al@115
  _BYTE *v46; // ST10_8@126
  signed __int64 v47; // r13@132
  char v48; // al@136
  const __int32_t **v49; // rax@150
  signed __int64 v50; // rdx@153
  unsigned int v51; // eax@155
  unsigned int v52; // er13@157
  __int64 v53; // rax@176
  signed __int64 v54; // rdx@178
  signed __int64 v55; // r13@178
  wctype_t v56; // r13@184
  wint_t v57; // eax@185
  unsigned __int64 v58; // [sp+8h] [bp-170h]@1
  __int64 v59; // [sp+10h] [bp-168h]@1
  signed __int64 v60; // [sp+10h] [bp-168h]@96
  _BYTE *v61; // [sp+18h] [bp-160h]@87
  char v62; // [sp+18h] [bp-160h]@126
  unsigned int v63; // [sp+20h] [bp-158h]@1
  int v64; // [sp+28h] [bp-150h]@2
  unsigned __int8 v65; // [sp+28h] [bp-150h]@87
  int v66; // [sp+2Ch] [bp-14Ch]@23
  char property[328]; // [sp+30h] [bp-148h]@184

  v5 = a2;
  v6 = *a1;
  v58 = a3;
  v63 = a5;
  v59 = (__int64)(a1 + 1);
  if ( !(_BYTE)v6 )
    goto LABEL_66;
  v7 = (signed __int64)a1;
  v64 = a5 & 5;
  LOBYTE(v8) = a4;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  while ( 2 )
  {
    if ( v10 )
      v6 = LOBYTE((*__ctype_tolower_loc())[v6]);
    switch ( (_BYTE)v6 )
    {
      case 0x5C:
        if ( v9 )
        {
          if ( v5 == (char *)v58 )
            return 1LL;
          if ( !v10 )
          {
            v12 = 92;
LABEL_11:
            v13 = (unsigned __int8)*v5;
            v7 = v59;
            goto LABEL_12;
          }
          v7 = v59;
          v42 = *__ctype_tolower_loc();
          v12 = 92;
        }
        else
        {
          v11 = *(_BYTE *)(v7 + 1);
          v59 = v7 + 2;
          if ( !v11 )
            return 1LL;
          if ( !v10 )
          {
            if ( v5 == (char *)v58 )
              return 1LL;
            v12 = v11;
            goto LABEL_11;
          }
          v49 = __ctype_tolower_loc();
          v42 = *v49;
          v12 = (*v49)[v11];
          if ( v5 == (char *)v58 )
            return 1LL;
          v12 = (unsigned __int8)v12;
          v7 += 2LL;
        }
        v13 = v42[(unsigned __int8)*v5];
LABEL_12:
        if ( v13 != v12 )
          return 1LL;
        goto LABEL_13;
      case 0x5B:
        if ( !dword_625918 )
          dword_625918 = -((unsigned __int64)getenv("POSIXLY_CORRECT") < 1) | 1;
        if ( v5 == (char *)v58 )
          return 1LL;
        v14 = (unsigned __int8)*v5;
        if ( (_BYTE)v14 == 46 )
        {
          if ( (_BYTE)v8 )
            return 1LL;
        }
        else if ( (_BYTE)v14 == 47 && v63 & 1 )
        {
          return 1LL;
        }
        v15 = *(_BYTE *)(v7 + 1);
        if ( v15 == 33 || dword_625918 < 0 && v15 == 94 )
        {
          v16 = (_BYTE *)(v7 + 2);
          v66 = 1;
        }
        else
        {
          v66 = 0;
          v16 = (_BYTE *)v59;
        }
        if ( v10 )
          LOBYTE(v14) = (*__ctype_tolower_loc())[v14];
        v7 = (signed __int64)(v16 + 1);
        v17 = *v16;
LABEL_30:
        while ( 2 )
        {
          if ( !v9 && (_BYTE)v17 == 92 )
          {
            v17 = *(_BYTE *)v7;
            if ( !(_BYTE)v17 )
              return 1LL;
            if ( v10 )
              v17 = LOBYTE((*__ctype_tolower_loc())[v17]);
            v18 = *(_BYTE *)(v7++ + 1);
            goto LABEL_37;
          }
          if ( (_BYTE)v17 != 91 )
          {
            if ( (_BYTE)v17 )
            {
              v18 = *(_BYTE *)v7;
              goto LABEL_35;
            }
            LODWORD(v6) = 91;
LABEL_61:
            v24 = (unsigned __int8)*v5;
            if ( v10 )
            {
              v25 = (unsigned __int8)*v5;
              v24 = (*__ctype_tolower_loc())[v25];
            }
            if ( v24 == (_DWORD)v6 )
            {
LABEL_64:
              v7 = v59;
              LOBYTE(v8) = 0;
              goto LABEL_65;
            }
            return 1LL;
          }
          v18 = *(_BYTE *)v7;
          if ( *(_BYTE *)v7 != 58 )
          {
            while ( 1 )
            {
LABEL_35:
              if ( v10 )
                v17 = LOBYTE((*__ctype_tolower_loc())[v17]);
LABEL_37:
              i = (char *)(v7 + 1);
              if ( v18 != 45 )
                break;
              v20 = *(_BYTE *)(v7 + 1);
              if ( v20 != 93 && v20 )
              {
                v21 = (char)v17;
LABEL_41:
                i = (char *)(v7 + 2);
                if ( !v9 && v20 == 92 )
                {
                  i = (char *)(v7 + 3);
                  v20 = *(_BYTE *)(v7 + 2);
                }
                if ( !v20 )
                  return 1LL;
                v18 = *i;
                v7 = (signed __int64)(i + 1);
                v17 = (unsigned __int8)*i;
                if ( v21 <= (unsigned __int8)v14 && (unsigned __int8)v14 <= v20 )
                  goto LABEL_47;
LABEL_29:
                if ( (_BYTE)v17 == 93 )
                {
                  if ( v66 )
                  {
LABEL_13:
                    LOBYTE(v8) = 0;
                    goto LABEL_65;
                  }
                  return 1LL;
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
            v17 = (unsigned __int8)v18;
            ++v7;
            goto LABEL_29;
          }
          v43 = v7;
          v44 = 0LL;
          while ( 1 )
          {
            v45 = *(_BYTE *)(v43 + 1);
            if ( v45 == 58 )
              break;
            if ( (unsigned __int8)(v45 - 97) > 0x18u )
              goto LABEL_117;
            ++v44;
            ++v43;
            *((_BYTE *)&v66 + v44 + 3) = v45;
            if ( v44 == 256 )
              return 1LL;
          }
          if ( *(_BYTE *)(v43 + 2) != 93 )
          {
LABEL_117:
            i = (char *)(v7 + 1);
            if ( (_BYTE)v14 == 91 )
            {
LABEL_177:
              v18 = *(_BYTE *)v7;
              goto LABEL_49;
            }
            ++v7;
            v17 = 58LL;
            continue;
          }
          break;
        }
        property[v44] = 0;
        v56 = wctype(property);
        if ( !v56 )
          return 1LL;
        v57 = btowc((unsigned __int8)*v5);
        if ( !iswctype(v57, v56) )
        {
          v7 = v43 + 4;
          v17 = *(_BYTE *)(v43 + 3);
          goto LABEL_29;
        }
        v7 = v43 + 3;
        v18 = *(_BYTE *)(v43 + 3);
        for ( i = (char *)(v43 + 4); ; i = (char *)(v7 + 1) )
        {
LABEL_49:
          v22 = i;
          v23 = v18;
          if ( !v18 )
            return 1LL;
          LOBYTE(v8) = v9 == 0 && v18 == 92;
          if ( (_BYTE)v8 )
          {
            if ( *(_BYTE *)(v7 + 1) )
            {
              v18 = *(_BYTE *)(v7 + 2);
              v7 += 2LL;
              continue;
            }
            return 1LL;
          }
          if ( v18 != 91 )
            goto LABEL_52;
          v18 = *(_BYTE *)(v7 + 1);
          if ( v18 != 58 )
            break;
          v54 = v7 + 2;
          v18 = *(_BYTE *)(v7 + 2);
          v55 = v7 + 257;
          while ( 1 )
          {
            if ( v18 == 58 )
            {
              if ( *(_BYTE *)(v54 + 1) == 93 )
              {
                v22 = (char *)(v54 + 3);
                v23 = *(_BYTE *)(v54 + 2);
                goto LABEL_52;
              }
LABEL_47:
              v7 = (signed __int64)i;
              goto LABEL_48;
            }
            if ( (unsigned __int8)(v18 - 97) > 0x18u )
              break;
            v18 = *(_BYTE *)++v54;
            if ( v55 == v54 )
              return 1LL;
          }
          v18 = 58;
          v7 = (signed __int64)i;
LABEL_48:
          ;
        }
        if ( v18 == 61 )
        {
          if ( *(_BYTE *)(v7 + 2) && *(_BYTE *)(v7 + 3) == 61 && *(_BYTE *)(v7 + 4) == 93 )
          {
            v22 = (char *)(v7 + 6);
            v23 = *(_BYTE *)(v7 + 5);
            goto LABEL_52;
          }
          return 1LL;
        }
        v47 = v7 + 2;
        if ( v18 != 46 )
          goto LABEL_47;
        while ( 1 )
        {
          v48 = *(_BYTE *)(v47 + 1);
          if ( !v48 )
            return 1LL;
          if ( v48 == 46 && *(_BYTE *)(v47 + 2) == 93 )
            break;
          ++v47;
        }
        v22 = (char *)(v47 + 4);
        v23 = *(_BYTE *)(v47 + 3);
LABEL_52:
        if ( v23 != 93 )
        {
          v7 = (signed __int64)v22;
          v18 = *v22;
          i = v22 + 1;
          goto LABEL_49;
        }
        if ( v66 )
          return 1LL;
        v7 = (signed __int64)v22;
LABEL_65:
        v6 = *(_BYTE *)v7;
        ++v5;
        v59 = v7 + 1;
        if ( (_BYTE)v6 )
          continue;
LABEL_66:
        if ( (char *)v58 == v5 )
          return 0LL;
        if ( !(v63 & 8) )
          return 1LL;
        return *v5 != 47;
      case 0x3F:
        if ( v63 & 0x20 )
        {
          if ( *(_BYTE *)(v7 + 1) == 40 )
          {
            result = sub_414960(63, v59, (unsigned __int64)v5, v58, v8, v63);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( v5 == (char *)v58 )
          return 1LL;
        if ( *v5 != 47 )
        {
          LOBYTE(v8) = (*v5 == 46) & v8;
          if ( !(_BYTE)v8 )
          {
            v7 = v59;
            goto LABEL_65;
          }
          return 1LL;
        }
        if ( v63 & 1 )
          return 1LL;
        goto LABEL_64;
      case 0x2F:
        if ( v64 != 5 )
          goto LABEL_60;
        if ( v5 == (char *)v58 || *v5 != 47 )
          return 1LL;
        v7 = v59;
        LOBYTE(v8) = 1;
        goto LABEL_65;
      default:
        goto LABEL_60;
      case 0x21:
      case 0x2B:
      case 0x40:
        if ( v63 & 0x20 )
        {
          if ( *(_BYTE *)(v7 + 1) == 40 )
          {
            result = sub_414960((unsigned __int8)v6, v59, (unsigned __int64)v5, v58, v8, v63);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
LABEL_60:
        if ( v5 != (char *)v58 )
          goto LABEL_61;
        return 1LL;
      case 0x2A:
        if ( v63 & 0x20 )
        {
          if ( *(_BYTE *)(v7 + 1) == 40 )
          {
            result = sub_414960(42, v59, (unsigned __int64)v5, v58, v8, v63);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( v5 != (char *)v58 && *v5 == 46 && (_BYTE)v8 )
          return 1LL;
        v27 = *(_BYTE *)(v7 + 1);
        v28 = (_BYTE *)(v7 + 2);
        if ( (_BYTE)v27 != 42 && (_BYTE)v27 != 63 )
          goto LABEL_86;
        break;
    }
    break;
  }
  while ( 1 )
  {
    if ( *v28 != 40 || (v63 & 0x20) == 0 )
      goto LABEL_82;
    v46 = v28;
    v62 = v27;
    v29 = (_BYTE *)sub_4137F0((__int64)v28);
    v28 = v46;
    if ( v29 == v46 )
      break;
LABEL_84:
    v27 = *v29;
    v28 = v29 + 1;
    if ( (_BYTE)v27 != 63 && (_BYTE)v27 != 42 )
    {
LABEL_86:
      v30 = v63 & 1;
      if ( !(_BYTE)v27 )
      {
        if ( v63 & 1 && !(v63 & 8) )
        {
          LODWORD(v53) = sub_416F00(v5, 47LL, v58 - (_QWORD)v5, v30, v27, v28);
          return v53 != 0;
        }
        return 0LL;
      }
      v65 = v27;
      v61 = v28;
      LODWORD(v31) = sub_416F00(v5, -(signed int)v30 & 0x2F, v58 - (_QWORD)v5, v30, v27, v28);
      v32 = v65;
      v33 = v31;
      v34 = v61;
      if ( !v31 )
        v33 = (char *)v58;
      if ( v65 == 91
        || v63 & 0x20
        && (unsigned __int8)(v65 - 33) <= 0x1Fu
        && (v50 = 2147484673LL, _bittest64(&v50, (unsigned int)v65 - 33))
        && *v61 == 40 )
      {
        v51 = v63 & 0xFFFFFFFB;
        if ( v63 & 1 )
          v51 = v63;
        v52 = v51;
        if ( v33 > v5 )
        {
          while ( sub_414EB0(v61 - 1, v5, v58, (unsigned __int8)v8, v52) )
          {
            ++v5;
            LOBYTE(v8) = 0;
            if ( v33 == v5 )
              return 1LL;
          }
          return 0LL;
        }
        return 1LL;
      }
      if ( v65 == 47 )
      {
        if ( v63 & 1 )
        {
          if ( v58 > (unsigned __int64)v5 )
          {
            do
            {
              if ( *v5 == 47 )
                return sub_414EB0(v61, v5 + 1, v58, (v63 >> 2) & 1, v63) != 0;
              ++v5;
            }
            while ( (char *)v58 != v5 );
          }
          return 1LL;
        }
      }
      else if ( v63 & 1 )
      {
        goto LABEL_93;
      }
      v63 &= 0xFFFFFFFB;
LABEL_93:
      v8 = (unsigned __int8)v8;
      if ( v65 == 92 && !v9 )
        v32 = *v61;
      if ( v10 )
      {
        v35 = v32;
        v36 = v34;
        v37 = __ctype_tolower_loc();
        v34 = v36;
        v32 = (*v37)[v35];
      }
      v60 = (signed __int64)(v34 - 1);
      if ( v33 > v5 )
      {
        v38 = v32;
        v39 = v8;
        while ( 1 )
        {
          v40 = (unsigned __int8)*v5;
          if ( v10 )
          {
            v41 = *v5;
            v40 = (*__ctype_tolower_loc())[v41];
          }
          if ( v40 == v38 && !sub_414EB0(v60, v5, v58, v39, v63) )
            break;
          ++v5;
          v39 = 0;
          if ( v33 == v5 )
            return 1LL;
        }
        return 0LL;
      }
      return 1LL;
    }
  }
  LOBYTE(v27) = v62;
LABEL_82:
  if ( (_BYTE)v27 == 63 )
  {
    if ( v5 == (char *)v58 || *v5 == 47 && v63 & 1 )
      return 1LL;
    ++v5;
  }
  v29 = v28;
  goto LABEL_84;
}

signed __int64 __fastcall sub_4159A0(char *a1, char *a2, unsigned int a3)
{
  unsigned int v3; // er12@1
  char *v4; // rbx@2
  size_t v5; // rax@2
  signed __int64 result; // rax@2
  size_t v7; // rax@4
  size_t v8; // rbx@4
  size_t v9; // rax@6
  size_t v10; // r13@6
  unsigned __int64 v11; // rax@8
  size_t v12; // rdi@10
  void *v13; // rsp@11
  wchar_t *v14; // rax@14
  wint_t *v15; // r14@14
  wchar_t *v16; // r15@15
  unsigned int v17; // [sp+Ch] [bp-54h]@16
  char *s; // [sp+10h] [bp-50h]@1
  char *src; // [sp+18h] [bp-48h]@1
  mbstate_t ps; // [sp+28h] [bp-38h]@4

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
    v4 = s;
    v5 = strlen(s);
    return sub_414EB0(src, v4, (unsigned __int64)&v4[v5], (v3 >> 2) & 1, v3);
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
               (wint_t *)((((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL) + 4 * v8),
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
    v17 = sub_413E80(v15, (wint_t *)v16, (unsigned __int64)&v16[v10 - 1], (v3 >> 2) & 1, v3);
    free(v15);
    result = v17;
  }
  return result;
}

char *__fastcall sub_415BE0(char *a1, unsigned __int64 a2)
{
  char *v3; // rbx@7
  __dev_t v4; // r15@8
  __ino_t v5; // r14@8
  DIR *v6; // rbp@10
  int v7; // er15@10
  int *v8; // r12@10
  int v9; // eax@11
  bool v10; // r13@16
  struct dirent *v11; // rax@17
  const char *v12; // rbx@22
  signed __int64 v13; // r13@26
  size_t v14; // r14@26
  char *v15; // rdx@28
  char *v16; // rax@31
  size_t v17; // rbx@39
  char *v18; // rax@41
  signed int v19; // ebx@44
  __dev_t v20; // [sp+8h] [bp-120h]@8
  unsigned __int64 v21; // [sp+8h] [bp-120h]@30
  __dev_t v22; // [sp+10h] [bp-118h]@15
  char *ptr; // [sp+18h] [bp-110h]@3
  char *v24; // [sp+20h] [bp-108h]@1
  unsigned __int64 size; // [sp+28h] [bp-100h]@2
  bool v26; // [sp+3Fh] [bp-E9h]@9
  char *src; // [sp+40h] [bp-E8h]@9
  char *srca; // [sp+40h] [bp-E8h]@30
  __dev_t v29; // [sp+48h] [bp-E0h]@9
  __ino_t v30; // [sp+50h] [bp-D8h]@9
  __ino_t v31; // [sp+58h] [bp-D0h]@15
  struct stat stat_buf; // [sp+60h] [bp-C8h]@7

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
      v21 = (unsigned __int64)&v15[size];
      if ( __CFADD__(v15, size) || (v16 = (char *)realloc(ptr, (size_t)&v15[size])) == 0LL )
      {
        *v8 = 12;
        v19 = 12;
        goto LABEL_54;
      }
      ptr = v16;
      src = (char *)memcpy(&v16[(_QWORD)&srca[v13]], &v16[v13], size - v13);
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
    *(src-- - 1) = 47;
  v17 = v3 - src;
  memmove(ptr, src, v17);
  if ( !a2 )
    v24 = (char *)realloc(ptr, v17);
  v18 = v24;
  if ( !v24 )
    v18 = ptr;
  return v18;
}

__int64 __fastcall sub_4160B0(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_416190(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_4167B0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_4160B0(a2, a7);
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
        sub_4160B0((__int64)v11, a7);
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
            v40 = sub_416190(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_416190(v10, v11, v12, v53, v54, a6, a7, v8, 4321650LL);
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
        v40 = sub_416190(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_416D80(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_625920 = dword_62463C;
  dword_625924 = dword_624638;
  result = sub_4167B0(a1, a2, a3, a4, a5, a6, (__int64)&dword_625920, a7);
  dword_62463C = dword_625920;
  nptr = (char *)qword_625930;
  dword_624634 = dword_625928;
  return result;
}

__int64 __fastcall sub_416E00(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_416D80(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_416E80(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx@2
  wchar_t *v5; // r12@3
  char *v6; // rbp@3
  char v8; // [sp+Ch] [bp-1Ch]@7

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

void __noreturn sub_417010()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  __fprintf_chk(stderr, 1LL, "%s\n", v0);
  exit(status);
}

int __fastcall sub_417050(__int64 a1, __int64 a2)
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

int __fastcall sub_417070(__int64 a1, __int64 a2)
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
  LODWORD(v7) = sub_417050(a1, a2);
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
  LODWORD(v7) = sub_417050(a1, a2);
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
  LODWORD(v7) = sub_417050(a1, a2);
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
  JUMPOUT(&loc_417090);
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
  if ( v7 || (a4 = v8) != 0 || (v9 = v11, LODWORD(v12) = sub_417050(a1, v11), (v13 = v12) == 0) )
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
      LODWORD(v15) = sub_417070(a1, v5);
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

__int64 __fastcall sub_417340(__int64 a1)
{
  int v1; // eax@2
  signed int v2; // edx@3

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
  return (unsigned int)v2;
}

void __fastcall sub_417390(void *a1)
{
  void *v1; // rbx@2

  if ( a1 )
  {
    do
    {
      v1 = *(void **)a1;
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_4173C0(void *a1)
{
  int *v1; // rbx@1
  int v2; // er13@1
  unsigned int v3; // ebp@1

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_417340((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_417390(a1);
  *v1 = v2;
  return v3;
}

_BYTE *__fastcall sub_417410(void *src)
{
  void *v1; // r12@2
  size_t v2; // rax@2
  signed __int64 v3; // rdi@2
  size_t v4; // rbp@2
  void *v5; // rax@4
  _BYTE *v6; // rbx@4
  _BYTE *result; // rax@6

  if ( src )
  {
    v1 = src;
    v2 = strlen((const char *)src);
    v3 = 118LL;
    v4 = v2 + 1;
    if ( v2 + 1 >= 0x76 )
      v3 = v2 + 1;
    v5 = malloc((v3 + 17) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_WORD *)v5 + 4) = 1;
      memcpy((char *)v5 + 9, v1, v4);
      v6[v4 + 9] = 0;
    }
    return v6;
  }
  result = malloc(0x80uLL);
  v6 = result;
  if ( !result )
    return v6;
  *(_QWORD *)result = 0LL;
  *((_WORD *)result + 4) = 0;
  return result;
}

signed __int64 __fastcall sub_4174A0(__int64 a1, unsigned __int64 a2)
{
  const char *v2; // r12@1
  __int64 v3; // rbp@2
  signed __int64 result; // rax@3
  const char *v5; // rbx@4
  signed __int64 v6; // r14@7
  __int64 v7; // rax@10
  size_t v8; // r15@16
  const char *v9; // rax@16
  _BYTE *v10; // rax@21

  v2 = *(const char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (const char *)(a1 + 9);
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
        v6 = v3 + 9;
        if ( (const char *)(v3 + 9) != v5 )
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
            memcpy((void *)v5, v2, v8);
            v5[v8] = 0;
            goto LABEL_12;
          }
          v10 = sub_417410((void *)v2);
          *(_QWORD *)v3 = v10;
          if ( v10 )
          {
            v10[8] = 0;
            v5 = v10 + 9;
LABEL_12:
            *(_QWORD *)(a2 + 48) = v5;
            result = 1LL;
          }
          else
          {
            result = 0LL;
          }
          return result;
        }
        if ( !*(_BYTE *)(v3 + 8) )
        {
          v8 = strlen(v2) + 1;
          v9 = 0LL;
          goto LABEL_19;
        }
      }
      v5 += strlen(v5) + 1;
      if ( *v5 )
        goto LABEL_5;
      v7 = *(_QWORD *)v3;
      if ( !*(_QWORD *)v3 )
        goto LABEL_5;
      v5 = (const char *)(v7 + 9);
      v3 = *(_QWORD *)v3;
      if ( !strcmp((const char *)(v7 + 9), v2) )
        goto LABEL_12;
    }
  }
  return result;
}

signed __int64 __fastcall sub_417620(__int64 a1)
{
  char *v1; // rax@1
  char *v2; // rbp@1
  _BYTE *v3; // rbx@3
  signed __int64 result; // rax@5
  int *v5; // rbp@10
  int v6; // er12@10

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
  if ( v3 && !(unsigned __int8)sub_417340(a1) )
  {
    v5 = __errno_location();
    v6 = *v5;
    if ( v3 != (_BYTE *)1 )
      sub_417390(v3);
    *v5 = v6;
    result = 0LL;
  }
  else
  {
    result = (signed __int64)v3;
  }
  return result;
}

struct tm *__fastcall sub_4176F0(__int64 a1, const time_t *a2, struct tm *a3)
{
  struct tm *v3; // rbx@2
  void *v4; // r13@2
  struct tm *result; // rax@6

  if ( a1 )
  {
    v3 = a3;
    v4 = (void *)sub_417620(a1);
    if ( v4 )
    {
      if ( localtime_r(a2, v3) && (unsigned __int8)sub_4174A0(a1, (unsigned __int64)v3) )
      {
        if ( v4 == (void *)1 || (unsigned __int8)sub_4173C0(v4) )
          return v3;
      }
      else if ( v4 != (void *)1 )
      {
        sub_4173C0(v4);
      }
    }
    result = 0LL;
  }
  else
  {
    result = gmtime_r(a2, a3);
  }
  return result;
}

int __fastcall sub_4177A0(__int64 a1, unsigned __int64 a2)
{
  void *v2; // r12@2
  time_t v3; // rax@3
  int result; // eax@8
  int v5; // eax@11
  time_t timer; // [sp+8h] [bp-60h]@3
  struct tm tp; // [sp+10h] [bp-58h]@10

  if ( a1 )
  {
    v2 = (void *)sub_417620(a1);
    if ( !v2 )
      goto LABEL_20;
    LODWORD(v3) = sub_4186F0(a2);
    timer = v3;
    if ( v3 != -1
      || localtime_r(&timer, &tp)
      && ((v5 = *(_DWORD *)(a2 + 32), (v5 == 0) == (tp.tm_isdst == 0)) || v5 < 0 || tp.tm_isdst < 0)
      && !(tp.tm_sec ^ *(_DWORD *)a2 | tp.tm_min ^ *(_DWORD *)(a2 + 4) | tp.tm_hour ^ *(_DWORD *)(a2 + 8) | tp.tm_mday ^ *(_DWORD *)(a2 + 12) | tp.tm_year ^ *(_DWORD *)(a2 + 20) | tp.tm_mon ^ *(_DWORD *)(a2 + 16)) )
    {
      if ( !(unsigned __int8)sub_4174A0(a1, a2) )
        timer = -1LL;
    }
    if ( v2 == (void *)1 || (unsigned __int8)sub_4173C0(v2) )
      result = timer;
    else
LABEL_20:
      result = -1;
  }
  else
  {
    result = sub_4178C0(a2);
  }
  return result;
}

__int64 __fastcall sub_4178C0(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_41FD60[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_625958;
  v12 = sub_418030(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4181F0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_418150(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4181F0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_418150(v6);
          sub_4181F0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_625958 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_4178C0(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_41FD60[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_625958;
  v12 = sub_418030(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4181F0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_418150(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4181F0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_418150(v6);
          sub_4181F0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_625958 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_4178C0(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_41FD60[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_625958;
  v12 = sub_418030(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4181F0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_418150(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4181F0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_418150(v6);
          sub_4181F0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_625958 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_4178C0(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_41FD60[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_625958;
  v12 = sub_418030(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4181F0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_418150(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4181F0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_418150(v6);
          sub_4181F0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_625958 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_4178C0(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_41FD60[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_625958;
  v12 = sub_418030(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4181F0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_418150(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4181F0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_418150(v6);
          sub_4181F0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_625958 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_4178C0(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_41FD60[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_625958;
  v12 = sub_418030(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4181F0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_418150(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4181F0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_418150(v6);
          sub_4181F0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_625958 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_4178C0(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_41FD60[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_625958;
  v12 = sub_418030(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4181F0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_418150(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4181F0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_418150(v6);
          sub_4181F0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_625958 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_4178C0(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_41FD60[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_625958;
  v12 = sub_418030(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4181F0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_418150(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4181F0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_418150(v6);
          sub_4181F0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_625958 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_4178E0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

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

_BYTE *__fastcall sub_417940(void *a1, __int64 a2)
{
  _BYTE *result; // rax@1

  result = sub_40B810(a1, a2);
  if ( !result )
    sub_412BD0();
  return result;
}

unsigned __int64 __fastcall sub_417960(_BYTE *a1, unsigned __int64 a2)
{
  __int64 v2; // rcx@1
  unsigned __int64 v3; // rax@2
  __int64 v4; // rax@3
  unsigned __int64 result; // rax@4

  v2 = *a1;
  if ( (_BYTE)v2 )
  {
    v3 = 0LL;
    do
    {
      v4 = __ROL8__(v3, 9);
      ++a1;
      v3 = v2 + v4;
      v2 = *a1;
    }
    while ( (_BYTE)v2 );
    result = v3 % a2;
  }
  else
  {
    result = 0LL;
  }
  return result;
}

const char *sub_4179A0()
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
          v1 = "\x1B]8;;\a" + 6;
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
                v1 = "\x1B]8;;\a" + 6;
                v2 = v59;
                free(v60);
                sub_417F10(v61);
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
            sub_417F10(v40);
            if ( !v62 )
              goto LABEL_25;
            v1[v62] = 0;
            goto LABEL_26;
          }
          close(v18);
        }
LABEL_25:
        v1 = "\x1B]8;;\a" + 6;
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

int __fastcall sub_417F10(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_417F90(stream) )
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

int __fastcall sub_417F90(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_417FD0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_417FD0(FILE *a1, __off_t a2, int a3)
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

signed __int64 __fastcall sub_418030(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed int a6, int a7, int a8, int a9, int a10)
{
  signed int v10; // er10@1
  signed int v11; // er12@1

  v10 = (unsigned __int64)(a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (a6 >> 2) + 475 - ((a6 & 3) == 0);
  return a5
       + 60
       * (a4
        + 60
        * (a3
         + 24
         * ((signed int)(v10
                       - v11
                       - (v10 / 25
                        - ((unsigned int)(v10 % 25) >> 31)
                        - (v11 / 25
                         - ((unsigned int)(v11 % 25) >> 31)))
                       + ((signed int)(v10 / 25 - ((unsigned int)(v10 % 25) >> 31)) >> 2)
                       - ((signed int)(v11 / 25 - ((unsigned int)(v11 % 25) >> 31)) >> 2))
          + 365 * (a1 - a6)
          + a2
          - a7)
         - a8)
        - a9)
       - a10;
}

signed __int64 __fastcall sub_418150(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed __int64 a6, __int64 a7)
{
  signed __int64 v7; // rbx@1
  signed __int64 v8; // rax@2
  unsigned __int8 v9; // of@2
  signed __int64 result; // rax@2

  v7 = a6;
  if ( !a7
    || (v8 = sub_418030(
               a1,
               a2,
               a3,
               a4,
               a5,
               *(_DWORD *)(a7 + 20),
               *(_DWORD *)(a7 + 28),
               *(_DWORD *)(a7 + 8),
               *(_DWORD *)(a7 + 4),
               *(_DWORD *)a7),
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

int __fastcall sub_4181F0(int (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 v3; // r13@1
  __int64 v4; // rax@1
  signed __int64 v5; // r14@3
  signed __int64 v6; // rbp@3
  signed __int64 v7; // rdx@6
  signed __int64 v8; // rbx@6
  __int64 v10; // [sp+8h] [bp-30h]@1

  v3 = a3;
  v10 = *a2;
  LODWORD(v4) = a1(&v10, a3);
  if ( !v4 )
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
        v10 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        LODWORD(v4) = a1(&v10, v3);
        if ( !v4 )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !v4 && v6 )
      {
        v10 = v6;
        LODWORD(v4) = a1(&v10, v3);
      }
    }
  }
  return v4;
}

void sub_4186F0()
{
  tzset();
  JUMPOUT(&loc_4182B0);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_418780(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_6243E8 )
    v1 = unk_6243E8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_418798(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_623E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
