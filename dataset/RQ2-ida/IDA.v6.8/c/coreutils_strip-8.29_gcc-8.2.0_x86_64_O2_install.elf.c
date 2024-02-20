__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char v3; // r15@1
  signed int v4; // er14@1
  char **v5; // r13@1
  const char *v6; // r12@1
  __int64 v7; // rbp@1
  int *v8; // rbx@1
  char *v9; // rdi@1
  int v10; // eax@2
  __int64 v11; // rax@16
  const char *v12; // rsi@34
  char *v13; // rax@42
  char *v14; // rax@56
  int v15; // eax@59
  int v16; // eax@63
  int v17; // edx@65
  int v18; // eax@68
  void *v19; // rax@73
  void *v20; // r13@73
  int v21; // edx@80
  const char *v22; // rsi@80
  struct passwd *v23; // rax@84
  __uid_t v24; // eax@85
  struct group *v25; // rax@88
  __gid_t v26; // eax@89
  char *v28; // rax@96
  _BYTE *v29; // rax@99
  signed __int64 v30; // rcx@99
  _BYTE *v31; // rdi@99
  bool v32; // zf@101
  int *v33; // rax@109
  char *v34; // rax@109
  int *v35; // rax@111
  __int64 v36; // rax@111
  char *v37; // rax@111
  __int64 v38; // r13@113
  char *v39; // r15@117
  __int64 v40; // rax@117
  void *v41; // rax@117
  void *v42; // rbx@117
  char *v43; // rax@64
  char *v44; // rbx@123
  char v45; // al@124
  char v46; // dl@124
  unsigned __int8 v47; // al@125
  char *v48; // rax@82
  char *v49; // rax@77
  int *v50; // rax@130
  char *v51; // rax@130
  char *v52; // rax@133
  char *v53; // rax@133
  char *v54; // rax@139
  __int64 v55; // rax@140
  __int64 v56; // rbx@140
  char *v57; // rax@140
  __int64 v58; // rax@141
  __int64 v59; // rbp@141
  char *v60; // rbx@141
  int *v61; // rax@141
  __int64 v62; // rax@142
  const char *v63; // rsi@142
  __int64 v64; // rbx@142
  char *v65; // rax@143
  char *v66; // rax@144
  __int64 v67; // rax@146
  char *v68; // rax@147
  char *v69; // rax@149
  __int64 v70; // rax@151
  __int64 v71; // rbx@151
  char *v72; // rax@151
  char *v73; // rax@152
  __int64 v74; // rax@153
  __int64 v75; // rbx@153
  char *v76; // rax@153
  __int64 v77; // rax@154
  __int64 v78; // rbx@154
  char *v79; // rax@154
  char **v80; // [sp+8h] [bp-140h]@1
  __int64 v81; // [sp+10h] [bp-138h]@1
  signed int v82; // [sp+10h] [bp-138h]@92
  __int64 v83; // [sp+18h] [bp-130h]@1
  signed int v84; // [sp+18h] [bp-130h]@113
  char v85; // [sp+27h] [bp-121h]@1
  __int64 v86; // [sp+28h] [bp-120h]@1
  __int64 v87; // [sp+30h] [bp-118h]@1
  __int64 v88; // [sp+38h] [bp-110h]@1
  __int64 v89; // [sp+40h] [bp-108h]@1
  __int16 v90; // [sp+48h] [bp-100h]@1
  int v91; // [sp+4Ch] [bp-FCh]@1
  __int64 v92; // [sp+50h] [bp-F8h]@1
  __int64 v93; // [sp+58h] [bp-F0h]@1
  char v94; // [sp+60h] [bp-E8h]@1
  int v95; // [sp+64h] [bp-E4h]@1
  __int64 v96; // [sp+68h] [bp-E0h]@1
  __int64 v97; // [sp+70h] [bp-D8h]@1
  struct stat stat_buf; // [sp+80h] [bp-C8h]@59

  v3 = 0;
  v4 = 0;
  v5 = a2;
  v6 = 0LL;
  LOBYTE(v7) = 0;
  LODWORD(v8) = a1;
  v9 = *a2;
  dword_621560 = 0;
  sub_40CFD0(v9, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_416FD0(
    sub_40AA00,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  sub_405700(&v87);
  v87 = 0x400000000LL;
  v88 = 8589934596LL;
  v95 = 0;
  v89 = 1103806595456LL;
  v90 = 256;
  v91 = 0;
  v92 = 0x1000000LL;
  v93 = 0x1000000LL;
  v94 = 0;
  v96 = 0LL;
  v97 = 0LL;
  nptr = 0LL;
  qword_621548 = 0LL;
  byte_621541 = 0;
  byte_621540 = 0;
  umask(0);
  v85 = 0;
  v86 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v83 = 0LL;
  while ( 1 )
  {
    v10 = sub_412970((unsigned int)v8, v5, "bcCsDdg:m:o:pt:TvS:Z", &off_418380, 0LL);
    if ( v10 == -1 )
      break;
    if ( v10 == 100 )
    {
      byte_621540 = 1;
    }
    else if ( v10 <= 100 )
    {
      if ( v10 == 83 )
      {
        v3 = 1;
        v81 = qword_621B80;
      }
      else if ( v10 <= 83 )
      {
        if ( v10 == -130 )
          sub_4046F0(0);
        if ( v10 <= -130 )
        {
          if ( v10 == -131 )
          {
            sub_411160((char)stdout);
            exit(0);
          }
          goto LABEL_22;
        }
        if ( v10 == 67 )
        {
          byte_621542 = 1;
        }
        else
        {
          if ( v10 != 68 )
            goto LABEL_22;
          LOBYTE(v7) = 1;
        }
      }
      else if ( v10 == 90 )
      {
        if ( dword_621560 )
        {
          byte_61F44C = 0;
          if ( qword_621B80 )
            v86 = qword_621B80;
          else
            BYTE1(v92) = 1;
        }
        else if ( qword_621B80 )
        {
          v12 = "warning: ignoring --context; it requires an SELinux-enabled kernel";
LABEL_56:
          v14 = dcgettext(0LL, v12, 5);
          error(0, 0, v14);
        }
      }
      else if ( v10 <= 90 )
      {
        if ( v10 != 84 )
          goto LABEL_22;
        v4 = 1;
      }
      else if ( v10 == 98 )
      {
        v11 = qword_621B80;
        v3 = 1;
        if ( !qword_621B80 )
          v11 = (__int64)v80;
        v80 = (char **)v11;
      }
      else if ( v10 != 99 )
      {
        goto LABEL_22;
      }
    }
    else if ( v10 == 115 )
    {
      byte_621541 = 1;
      signal(17, 0LL);
    }
    else if ( v10 > 115 )
    {
      if ( v10 == 118 )
      {
        BYTE6(v93) = 1;
      }
      else if ( v10 <= 118 )
      {
        if ( v10 != 116 )
          goto LABEL_22;
        if ( v6 )
        {
          v54 = dcgettext(0LL, "multiple target directories specified", 5);
          error(1, 0, v54);
          goto LABEL_140;
        }
        v6 = (const char *)qword_621B80;
      }
      else if ( v10 == 128 )
      {
        v12 = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
        if ( !dword_621560 )
          goto LABEL_56;
        BYTE5(v92) = 1;
        byte_61F44C = 0;
      }
      else
      {
        if ( v10 != 129 )
          goto LABEL_22;
        LODWORD(v13) = sub_411510(qword_621B80);
        v85 = 1;
        arg = v13;
      }
    }
    else if ( v10 == 109 )
    {
      v83 = qword_621B80;
    }
    else if ( v10 <= 109 )
    {
      if ( v10 != 103 )
        goto LABEL_22;
      qword_621548 = (char *)qword_621B80;
    }
    else if ( v10 == 111 )
    {
      nptr = (char *)qword_621B80;
    }
    else
    {
      if ( v10 != 112 )
        goto LABEL_22;
      BYTE3(v91) = 1;
    }
  }
  if ( !byte_621540 )
  {
    if ( !v6 )
      goto LABEL_63;
    v15 = __xstat(1, v6, &stat_buf);
    if ( (_BYTE)v7 || !v15 )
    {
      if ( v15 || (stat_buf.st_mode & 0xF000) == 0x4000 )
        goto LABEL_63;
LABEL_140:
      LODWORD(v55) = sub_40EA00(4LL, v6);
      v56 = v55;
      v57 = dcgettext(0LL, "target %s is not a directory", 5);
      error(1, 0, v57, v56);
    }
    LODWORD(v58) = sub_40EA00(4LL, v6);
    v59 = v58;
    v60 = dcgettext(0LL, "failed to access %s", 5);
    v61 = __errno_location();
    error(1, *v61, v60, v59);
LABEL_142:
    LODWORD(v62) = sub_40EA00(4LL, v80[2]);
    v63 = "extra operand %s";
    v64 = v62;
LABEL_143:
    v65 = dcgettext(0LL, v63, 5);
    error(0, 0, v65, v64);
    goto LABEL_22;
  }
  if ( byte_621541 )
    goto LABEL_152;
  if ( v6 )
  {
    v28 = dcgettext(0LL, "target directory not allowed when installing a directory", 5);
    error(1, 0, v28);
    goto LABEL_97;
  }
LABEL_63:
  v16 = 0;
  if ( v3 )
  {
    v43 = dcgettext(0LL, "backup type", 5);
    v16 = sub_40A930(v43, v80);
  }
  LODWORD(v87) = v16;
  sub_40A380(v81);
  if ( !BYTE5(v92) )
    goto LABEL_110;
  if ( BYTE1(v92) || v86 )
  {
    v68 = dcgettext(0LL, "cannot set target context and preserve it", 5);
    error(1, 0, v68);
    goto LABEL_148;
  }
  while ( 2 )
  {
    LODWORD(v8) = (_DWORD)v8 - dword_61F4DC;
    v80 = &v5[dword_61F4DC];
    LOBYTE(v17) = v6 == 0LL;
    v18 = v17 & ((unsigned __int8)byte_621540 ^ 1);
    if ( ((v6 == 0LL) & (unsigned __int8)(byte_621540 ^ 1)) >= (signed int)v8 )
      goto LABEL_145;
    if ( (_BYTE)v4 )
    {
      if ( !v6 )
      {
        if ( (signed int)v8 <= 2 )
          goto LABEL_72;
        goto LABEL_142;
      }
      v66 = dcgettext(0LL, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5);
      error(1, 0, v66);
LABEL_145:
      if ( (_DWORD)v8 == 1 )
      {
        LODWORD(v67) = sub_40EA00(4LL, *v80);
        v63 = "missing destination file operand after %s";
        v64 = v67;
        goto LABEL_143;
      }
LABEL_148:
      v21 = 5;
      v22 = "missing file operand";
      goto LABEL_149;
    }
LABEL_97:
    if ( !(_BYTE)v18 )
      goto LABEL_72;
    v6 = 0LL;
    if ( (_DWORD)v8 == 1 )
      goto LABEL_72;
    v5 = (char **)1;
    v6 = v80[(signed int)v8 - 1];
    LODWORD(v29) = sub_40AD40(v6);
    v30 = -1LL;
    v31 = v29;
    do
    {
      if ( !v30 )
        break;
      v32 = *v31++ == (_BYTE)v4;
      --v30;
    }
    while ( !v32 );
    if ( ~v30 != 1 )
      v5 = (char **)(v29[~v30 - 2] == 47);
    if ( __xstat(1, v6, &stat_buf) )
    {
      v4 = *__errno_location();
      if ( v4 )
      {
        if ( v4 != 2 )
          goto LABEL_153;
LABEL_107:
        if ( (_DWORD)v5 )
          goto LABEL_154;
        v6 = 0LL;
        if ( (_DWORD)v8 == 2 )
          goto LABEL_72;
        LODWORD(v33) = sub_40EA00(4LL, v80[(signed int)v8 - 1]);
        v8 = v33;
        v34 = dcgettext(0LL, "target %s is not a directory", 5);
        error(1, 0, v34, v8);
LABEL_110:
        if ( v86 )
        {
          v35 = __errno_location();
          *v35 = 95;
          v8 = v35;
          LODWORD(v36) = sub_40EC50(v86);
          v7 = v36;
          v37 = dcgettext(0LL, "failed to set default file creation context to %s", 5);
          error(1, *v8, v37, v7);
LABEL_112:
          sub_409A90();
          if ( v6 )
          {
            v38 = 0LL;
            sub_4056A0(&v87);
            v82 = 0;
            v84 = (signed int)v8;
            do
            {
              v39 = v80[v38];
              LODWORD(v40) = sub_40AD40(v80[v38]);
              LODWORD(v41) = sub_40B0C0(v6, v40, 0LL);
              v42 = v41;
              if ( (!((unsigned __int8)v7 & ((_DWORD)v38 == 0)) || (unsigned __int8)sub_403DB0(v39, v41, &v87, 1LL))
                && (unsigned __int8)sub_404090(v39, (char *)v42) )
              {
                free(v42);
              }
              else
              {
                free(v42);
                v82 = 1;
              }
              ++v38;
            }
            while ( v84 > (signed int)v38 );
            return (unsigned int)v82;
          }
          v6 = v80[1];
          v44 = *v80;
          if ( (_BYTE)v7 )
          {
            v45 = sub_403DB0(*v80, v80[1], &v87, 0LL);
            v46 = 0;
            if ( !v45 )
              goto LABEL_125;
            goto LABEL_134;
          }
          v47 = (unsigned __int64)sub_404090(*v80, v80[1]) ^ 1;
LABEL_127:
          return v47;
        }
        continue;
      }
    }
    break;
  }
  if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
  {
    v4 = 0;
    goto LABEL_107;
  }
  LODWORD(v8) = (_DWORD)v8 - 1;
  v6 = v80[(signed int)v8];
LABEL_72:
  if ( v83 )
  {
    LODWORD(v19) = sub_40CA80(v83);
    v20 = v19;
    if ( v19 )
    {
      mode = sub_40CE50(0LL, 0LL, 0LL, v19, 0LL);
      dword_61F444 = sub_40CE50(0LL, 1LL, 0LL, v20, &dword_61F440);
      free(v20);
      goto LABEL_75;
    }
    LODWORD(v70) = sub_40EC50(v83);
    v71 = v70;
    v72 = dcgettext(0LL, "invalid mode %s", 5);
    error(1, 0, v72, v71);
LABEL_152:
    v73 = dcgettext(0LL, "the strip option may not be used when installing a directory", 5);
    error(1, 0, v73);
LABEL_153:
    LODWORD(v74) = sub_40EA00(4LL, v6);
    v75 = v74;
    v76 = dcgettext(0LL, "failed to access %s", 5);
    error(1, v4, v76, v75);
LABEL_154:
    LODWORD(v77) = sub_40EA00(4LL, v6);
    v78 = v77;
    v79 = dcgettext(0LL, "target %s is not a directory", 5);
    error(1, v4, v79, v78);
    start();
  }
LABEL_75:
  if ( v85 && !byte_621541 )
  {
    v49 = dcgettext(0LL, "WARNING: ignoring --strip-program option as -s option was not specified", 5);
    error(0, 0, v49);
  }
  if ( byte_621542 )
  {
    if ( BYTE3(v91) )
    {
      v21 = 5;
      v22 = "options --compare (-C) and --preserve-timestamps are mutually exclusive";
    }
    else
    {
      v21 = 5;
      v22 = "options --compare (-C) and --strip are mutually exclusive";
      if ( !byte_621541 )
      {
        if ( mode & 0xFFFF0E00 )
        {
          v48 = dcgettext(
                  0LL,
                  "the --compare (-C) option is ignored when you specify a mode with non-permission bits",
                  5);
          error(0, 0, v48);
        }
        goto LABEL_83;
      }
    }
LABEL_149:
    v69 = dcgettext(0LL, v22, v21);
    error(0, 0, v69);
LABEL_22:
    sub_4046F0(1);
  }
LABEL_83:
  if ( nptr )
  {
    v23 = getpwnam(nptr);
    if ( v23 )
    {
      v24 = v23->pw_uid;
      goto LABEL_86;
    }
    if ( (unsigned int)sub_411570(nptr) || (v24 = stat_buf.st_dev, stat_buf.st_dev > 0xFFFFFFFF) )
    {
      LODWORD(v50) = sub_40EC50(nptr);
      v8 = v50;
      v51 = dcgettext(0LL, "invalid user %s", 5);
      error(1, 0, v51, v8);
LABEL_131:
      if ( (unsigned int)sub_411570(qword_621548) || (v26 = stat_buf.st_dev, stat_buf.st_dev > 0xFFFFFFFF) )
      {
        LODWORD(v52) = sub_40EC50(qword_621548);
        v44 = v52;
        v53 = dcgettext(0LL, "invalid group %s", 5);
        error(1, 0, v53, v44);
LABEL_134:
        v46 = sub_404090(v44, (char *)v6);
LABEL_125:
        v47 = v46 & 1 ^ 1;
        goto LABEL_127;
      }
      goto LABEL_90;
    }
LABEL_86:
    owner = v24;
    endpwent();
  }
  else
  {
    owner = -1;
  }
  if ( qword_621548 )
  {
    v25 = getgrnam(qword_621548);
    if ( !v25 )
      goto LABEL_131;
    v26 = v25->gr_gid;
LABEL_90:
    group = v26;
    endgrent();
  }
  else
  {
    group = -1;
  }
  if ( !byte_621540 )
    goto LABEL_112;
  return (unsigned int)sub_40F910((unsigned int)v8, v80, sub_403F50, &v87);
}

signed int sub_403CFB()
{
  return 6419688;
}

int sub_403D1A()
{
  return 0;
}

signed int sub_403D51()
{
  signed int result; // eax@4

  if ( !byte_61F528 )
  {
    while ( qword_61F530 < (unsigned __int64)(((&unk_61EE48 - (_UNKNOWN *)&qword_61EE40) >> 3) - 1) )
      (*(&qword_61EE40 + ++qword_61F530))();
    result = sub_403CFB();
    byte_61F528 = 1;
  }
  return result;
}

int sub_403DA8()
{
  return sub_403D1A();
}

signed __int64 __fastcall sub_403DB0(_BYTE *a1, _BYTE *a2, __int64 a3, char a4)
{
  __int64 v4; // rbp@1
  __int64 v5; // rax@3
  __int64 v6; // rbp@3
  int *v7; // r12@3
  __int64 v8; // rax@4
  __int64 v9; // rbx@4
  char *v10; // rax@4
  int v12; // eax@7
  int v13; // er12@7
  int v14; // ebp@7
  __int64 v15; // rax@12
  __int64 v16; // rax@13
  __int64 v17; // rbp@13
  char *v18; // rbx@13
  int *v19; // rax@13
  __int64 v20; // rax@14
  __int64 v21; // rbx@14
  char *v22; // rax@14
  int v23; // [sp+8h] [bp-20h]@3

  v4 = a3;
  if ( !a4 && *a1 == 47 && *a2 == 47 )
  {
    v23 = 0;
    sub_40F8A0(&v23);
    LODWORD(v15) = sub_40C5E0(a2, &v23, sub_404020, v4);
    if ( v15 == -1 )
    {
      LODWORD(v16) = sub_40EA00(4LL, a2);
      v17 = v16;
      v18 = dcgettext(0LL, "cannot create directory %s", 5);
      v19 = __errno_location();
      error(0, *v19, v18, v17);
      return 0LL;
    }
    return 1LL;
  }
  v23 = 0;
  LODWORD(v5) = sub_40C5E0(a2, &v23, sub_404020, a3);
  v6 = v5;
  v7 = __errno_location();
  if ( v6 == -1 )
  {
    LODWORD(v8) = sub_40EA00(4LL, a2);
    v9 = v8;
    v10 = dcgettext(0LL, "cannot create directory %s", 5);
    error(0, *v7, v10, v9);
    sub_40F770(&v23, 1LL);
    sub_40F8A0(&v23);
    return 0LL;
  }
  v12 = sub_40F770(&v23, 0LL);
  v13 = *v7;
  v14 = v12;
  sub_40F8A0(&v23);
  if ( v14 > 0 )
    return 0LL;
  if ( !v14 )
    return 1LL;
  LODWORD(v20) = sub_40EA00(4LL, a2);
  v21 = v20;
  v22 = dcgettext(0LL, "cannot create directory %s", 5);
  error(0, v13, v22, v21);
  return 0LL;
}

__int64 __fastcall sub_403F50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx@1
  __int64 result; // rax@1

  v3 = a3;
  LODWORD(result) = sub_40C770(a1, a2, sub_404020, a3, (unsigned int)dword_61F444, sub_404000) ^ 1;
  if ( !(_BYTE)result && *(_BYTE *)(v3 + 33) )
    *__errno_location() = 95;
  return (unsigned __int8)result;
}

__int64 __usercall sub_403FC0@<rax>(__int64 a1@<rdi>, char a2)
{
  sub_40EA00(4LL, a1);
  dcgettext(0LL, "creating directory %s", 5);
  return sub_404AE0(stdout, a2);
}

__int64 __usercall sub_404000@<rax>(__int64 a1@<rdi>, __int64 a2@<rsi>, char a3)
{
  __int64 result; // rax@2

  if ( *(_BYTE *)(a2 + 46) )
    result = sub_403FC0(a1, a3);
  return result;
}

__int64 __fastcall sub_404090(char *file, char *name, __int64 a3)
{
  __int64 v3; // rbp@1
  char *v4; // rbx@1
  __mode_t v5; // er14@4
  int *v6; // r13@5
  __uid_t v7; // eax@12
  __gid_t v8; // eax@14
  int v9; // er14@18
  int v10; // er15@19
  __int64 v11; // ST08_8@21
  size_t v12; // rax@21
  __int64 v13; // rax@23
  signed int v14; // ebp@31
  __pid_t v16; // eax@42
  const char *v17; // rsi@43
  char *v18; // rbp@44
  int *v19; // rax@44
  __int64 v20; // rax@46
  __int64 v21; // rbp@46
  char *v22; // rbx@46
  int *v23; // rax@46
  __int64 v24; // rax@47
  const char *v25; // rsi@47
  __int64 v26; // rbp@47
  char *v27; // rbx@48
  int *v28; // rax@48
  __int64 v29; // rax@55
  const char *v30; // rsi@55
  __int64 v31; // r12@55
  char *v32; // rbp@56
  int *v33; // rax@56
  const char *v34; // rdx@56
  __int64 v35; // rax@57
  __int64 v36; // rax@58
  char *v37; // rax@59
  char v38; // al@61
  signed __int64 v39; // r12@61
  size_t v40; // rbx@69
  char *v41; // rax@69
  _BYTE *v42; // rdx@62
  int *v43; // rax@71
  int *v44; // r14@71
  int *v45; // rax@74
  int *v46; // r14@74
  char *v47; // rbp@77
  __int64 v48; // rax@77
  int *v49; // rax@77
  struct stat stat_buf; // [sp+10h] [bp-1E8h]@2
  struct stat v51; // [sp+A0h] [bp-158h]@5
  struct stat v52; // [sp+130h] [bp-C8h]@5

  v3 = a3;
  v4 = name;
  if ( *(_BYTE *)(a3 + 31) && __xstat(1, file, &stat_buf) )
    goto LABEL_47;
  if ( !byte_621542 || (v5 = mode, mode & 0xFFFF0E00) )
  {
    v6 = (int *)&v52;
  }
  else
  {
    v6 = (int *)&v52;
    if ( !__lxstat(1, file, &v51)
      && !__lxstat(1, name, &v52)
      && (v51.st_mode & 0xF000) == 0x8000
      && (v52.st_mode & 0xF000) == 0x8000
      && !((v52.st_mode | v51.st_mode) & 0xFFFF0E00)
      && v51.st_size == v52.st_size
      && v5 == (v52.st_mode & 0xFFF) )
    {
      v7 = owner;
      if ( owner != -1 || (v43 = __errno_location(), *v43 = 0, v44 = v43, v7 = getuid(), v7 != -1) || !*v44 )
      {
        if ( v7 == v52.st_uid )
        {
          v8 = group;
          if ( group != -1 || (v45 = __errno_location(), *v45 = 0, v46 = v45, v8 = getgid(), v8 != -1) || !*v46 )
          {
            if ( v8 == v52.st_gid )
            {
              if ( dword_621560 && *(_BYTE *)(v3 + 37) )
                goto LABEL_78;
              v9 = open(file, 0);
              if ( v9 >= 0 )
              {
                v10 = open(name, 0);
                if ( v10 >= 0 )
                {
                  do
                  {
                    v13 = sub_40B1C0(v9, &unk_61F540, 0x1000uLL);
                    if ( !v13 )
                    {
                      close(v9);
                      close(v10);
                      goto LABEL_25;
                    }
                    v11 = v13;
                    v12 = sub_40B1C0(v10, &unk_620540, 0x1000uLL);
                  }
                  while ( v12 == v11 && !memcmp(&unk_61F540, &unk_620540, v12) );
                  close(v9);
                  close(v10);
                }
                else
                {
                  close(v9);
                }
              }
            }
          }
        }
      }
    }
  }
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_409810(file, v4, 0LL, v3, v6, 0LL) )
      goto LABEL_40;
LABEL_25:
    if ( !byte_621541 )
    {
      if ( *(_BYTE *)(v3 + 31) )
        goto LABEL_27;
      goto LABEL_29;
    }
    v16 = fork();
    if ( v16 == -1 )
    {
      v17 = "fork system call failed";
LABEL_44:
      v18 = dcgettext(0LL, v17, 5);
      v19 = __errno_location();
      error(0, *v19, v18);
      goto LABEL_45;
    }
    if ( v16 )
      break;
    v47 = arg;
    execlp(arg, arg, v4, 0LL);
    LODWORD(v48) = sub_40EA00(4LL, v47);
    v3 = v48;
    v4 = dcgettext(0LL, "cannot run %s", 5);
    v49 = __errno_location();
    error(1, *v49, v4, v3);
LABEL_78:
    *__errno_location() = 95;
  }
  if ( waitpid(v16, v6, 0) < 0 )
  {
    v17 = "waiting for strip";
    goto LABEL_44;
  }
  if ( !(v52.st_dev & 0x7F | BYTE1(v52.st_dev)) )
  {
    if ( *(_BYTE *)(v3 + 31) )
    {
      if ( byte_621541 )
        goto LABEL_28;
LABEL_27:
      if ( (stat_buf.st_mode & 0xF000) != 0x8000 )
      {
LABEL_28:
        v52.st_dev = stat_buf.st_atim.tv_sec;
        v52.st_ino = stat_buf.st_atim.tv_nsec;
        v52.st_nlink = stat_buf.st_mtim.tv_sec;
        *(_QWORD *)&v52.st_mode = stat_buf.st_mtim.tv_nsec;
        if ( (unsigned int)sub_410AA0(v4) )
        {
          LODWORD(v36) = sub_40EA00(4LL, v4);
          v25 = "cannot set timestamps for %s";
          v26 = v36;
          goto LABEL_48;
        }
      }
    }
LABEL_29:
    if ( (group & owner) != -1 && lchown(v4, owner, group) )
    {
      LODWORD(v29) = sub_40EA00(4LL, v4);
      v30 = "cannot change ownership of %s";
      v31 = v29;
    }
    else
    {
      v14 = 1;
      if ( !chmod(v4, mode) )
      {
LABEL_32:
        if ( byte_61F44C && dword_621560 == 1 && !__lxstat(1, v4, (struct stat *)v6) )
        {
          if ( byte_61F430 && *v4 == 47 )
          {
            v38 = v4[1];
            v39 = (signed __int64)(v4 + 1);
            if ( v38 == 47 )
            {
              while ( 1 )
              {
                v38 = *(_BYTE *)(v39 + 1);
                v42 = (_BYTE *)(v39 + 1);
                if ( v38 != 47 )
                  break;
                ++v39;
              }
            }
            else
            {
              v42 = v4 + 1;
              v39 = (signed __int64)v4;
            }
            if ( v38 )
            {
              do
                ++v42;
              while ( *v42 && *v42 != 47 );
              v40 = (size_t)&v42[-v39];
              v41 = (char *)malloc((size_t)&v42[-v39 + 2]);
              if ( v41 )
              {
                *(_WORD *)stpncpy(v41, (const char *)v39, v40) = 47;
                free(v41);
              }
            }
          }
          byte_61F430 = 0;
          *__errno_location() = 95;
        }
        return (unsigned int)v14;
      }
      LODWORD(v35) = sub_40EA00(4LL, v4);
      v30 = "cannot change permissions of %s";
      v31 = v35;
    }
    v32 = dcgettext(0LL, v30, 5);
    v33 = __errno_location();
    v34 = v32;
    v14 = 0;
    error(0, *v33, v34, v31);
    goto LABEL_32;
  }
  v37 = dcgettext(0LL, "strip process terminated abnormally", 5);
  error(0, 0, v37);
LABEL_45:
  if ( !unlink(v4) )
    goto LABEL_40;
  LODWORD(v20) = sub_40EA00(4LL, v4);
  v21 = v20;
  v22 = dcgettext(0LL, "cannot unlink %s", 5);
  v23 = __errno_location();
  error(1, *v23, v22, v21);
LABEL_47:
  LODWORD(v24) = sub_40EA00(4LL, file);
  v25 = "cannot stat %s";
  v26 = v24;
LABEL_48:
  v27 = dcgettext(0LL, v25, 5);
  v28 = __errno_location();
  error(0, *v28, v27, v26);
LABEL_40:
  return 0;
}

void __fastcall __noreturn sub_4046F0(int status)
{
  int v1; // ebx@1
  char *v2; // rbp@1
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
  __int64 *v25; // rax@4
  _BYTE *v26; // rdi@5
  bool v27; // cf@5
  bool v28; // zf@5
  const char *v29; // rsi@6
  signed __int64 v30; // rcx@6
  char *v31; // rbp@10
  char *v32; // rax@11
  __int64 v33; // r8@11
  __int64 v34; // r9@11
  char *v35; // rax@11
  char *v36; // r12@13
  char *v37; // rax@13
  __int64 v38; // r8@13
  __int64 v39; // r9@13
  char *v40; // rax@15
  __int64 v41; // r8@15
  __int64 v42; // r9@15
  char *v43; // rax@16
  __int64 v44; // r8@16
  __int64 v45; // r9@16
  char *v46; // rax@16
  char *v47; // rax@18
  __int64 v48; // r8@18
  __int64 v49; // r9@18
  char *v50; // rax@20
  __int64 v51; // rcx@20
  __int64 v52; // r8@20
  __int64 v53; // r9@20
  const char *v54; // [sp+0h] [bp-88h]@4
  const char *v55; // [sp+8h] [bp-80h]@4
  const char *v56; // [sp+10h] [bp-78h]@4
  const char *v57; // [sp+18h] [bp-70h]@4
  const char *v58; // [sp+20h] [bp-68h]@4
  const char *v59; // [sp+28h] [bp-60h]@4
  const char *v60; // [sp+30h] [bp-58h]@4
  const char *v61; // [sp+38h] [bp-50h]@4
  const char *v62; // [sp+40h] [bp-48h]@4
  const char *v63; // [sp+48h] [bp-40h]@4
  const char *v64; // [sp+50h] [bp-38h]@4
  const char *v65; // [sp+58h] [bp-30h]@4
  __int64 v66; // [sp+60h] [bp-28h]@4
  __int64 v67; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_6219C0;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(
         0LL,
         "Usage: %s [OPTION]... [-T] SOURCE DEST\n"
         "  or:  %s [OPTION]... SOURCE... DIRECTORY\n"
         "  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n"
         "  or:  %s [OPTION]... -d DIRECTORY...\n",
         5);
  __printf_chk(1LL, v4, v2, v2, v2, v2);
  v5 = stdout;
  v6 = dcgettext(
         0LL,
         "\n"
         "This install program copies files (often just compiled) into destination\n"
         "locations you choose.  If you want to download and install a ready-to-use\n"
         "package on a GNU/Linux system, you should instead be using a package manager\n"
         "like yum(1) or apt-get(1).\n"
         "\n"
         "In the first three forms, copy SOURCE to DEST or multiple SOURCE(s) to\n"
         "the existing DIRECTORY, while setting permission modes and owner/group.\n"
         "In the 4th form, create all components of the given DIRECTORY(ies).\n",
         5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "      --backup[=CONTROL]  make a backup of each existing destination file\n"
          "  -b                  like --backup but does not accept an argument\n"
          "  -c                  (ignored)\n"
          "  -C, --compare       compare each pair of source and destination files, and\n"
          "                        in some cases, do not modify the destination at all\n"
          "  -d, --directory     treat all arguments as directory names; create all\n"
          "                        components of the specified directories\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "  -D                  create all leading components of DEST except the last,\n"
          "                        or all components of --target-directory,\n"
          "                        then copy SOURCE to DEST\n"
          "  -g, --group=GROUP   set group ownership, instead of process' current group\n"
          "  -m, --mode=MODE     set permission mode (as in chmod), instead of rwxr-xr-x\n"
          "  -o, --owner=OWNER   set ownership (super-user only)\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "  -p, --preserve-timestamps   apply access/modification times of SOURCE files\n"
          "                        to corresponding destination files\n"
          "  -s, --strip         strip symbol tables\n"
          "      --strip-program=PROGRAM  program used to strip binaries\n"
          "  -S, --suffix=SUFFIX  override the usual backup suffix\n"
          "  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n"
          "  -T, --no-target-directory  treat DEST as a normal file\n"
          "  -v, --verbose       print the name of each directory as it is created\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "      --preserve-context  preserve SELinux security context\n"
          "  -Z                      set SELinux security context of destination\n"
          "                            file and each created directory to default type\n"
          "      --context[=CTX]     like -Z, or if CTX is specified then set the\n"
          "                            SELinux or SMACK security context to CTX\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "\n"
          "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
          "The version control method may be selected via the --backup option or through\n"
          "the VERSION_CONTROL environment variable.  Here are the values:\n"
          "\n",
          5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "  none, off       never make backups (even if --backup is given)\n"
          "  numbered, t     make numbered backups\n"
          "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
          "  simple, never   always make simple backups\n",
          5);
  fputs_unlocked(v24, v23);
  v54 = "[";
  v25 = (__int64 *)&v54;
  v55 = "test invocation";
  v56 = "coreutils";
  v57 = "Multi-call invocation";
  v58 = "sha224sum";
  v59 = "sha2 utilities";
  v60 = "sha256sum";
  v61 = "sha2 utilities";
  v62 = "sha384sum";
  v63 = "sha2 utilities";
  v64 = "sha512sum";
  v65 = "sha2 utilities";
  v66 = 0LL;
  v67 = 0LL;
  do
  {
    v25 += 2;
    v26 = (_BYTE *)*v25;
    v27 = 0;
    v28 = *v25 == 0;
    if ( !*v25 )
      break;
    v29 = "install";
    v30 = 8LL;
    do
    {
      if ( !v30 )
        break;
      v27 = (const unsigned __int8)*v29 < *v26;
      v28 = *v29++ == *v26++;
      --v30;
    }
    while ( v28 );
  }
  while ( (!v27 && !v28) != v27 );
  v31 = (char *)v25[1];
  if ( v31 )
  {
    v32 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v32, &unk_417166, "https://www.gnu.org/software/coreutils/", v33, v34);
    v35 = setlocale(5, 0LL);
    if ( !v35 || !strncmp(v35, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v43 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v43, &unk_417166, "https://www.gnu.org/software/coreutils/", v44, v45);
    v46 = setlocale(5, 0LL);
    if ( !v46 || !strncmp(v46, "en_", 3uLL) )
    {
      v31 = "install";
      v47 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v36 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v47, "https://www.gnu.org/software/coreutils/", "install", v48, v49);
LABEL_15:
      v40 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v40, v31, v36, v41, v42);
LABEL_3:
      exit(v1);
    }
    v31 = "install";
  }
  v50 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v50, "install", v51, v52, v53);
LABEL_13:
  v36 = "Multi-call invocation" + 10;
  v37 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v37, "https://www.gnu.org/software/coreutils/", "install", v38, v39);
  if ( v31 != "install" )
    v36 = "";
  goto LABEL_15;
}

int __usercall sub_404AE0@<eax>(FILE *s@<rdi>)
{
  char *v1; // rax@1

  fputs_unlocked(qword_6219C0, s);
  fwrite_unlocked(&unk_4185C0, 1uLL, 2uLL, s);
  sub_412A70(s);
  v1 = s->_IO_write_ptr;
  if ( v1 >= s->_IO_write_end )
  {
    LODWORD(v1) = __overflow(s, 10);
  }
  else
  {
    s->_IO_write_ptr = v1 + 1;
    *v1 = 10;
  }
  return (unsigned __int64)v1;
}

bool __fastcall sub_404BD0(char *name, __int16 a2)
{
  bool result; // al@2

  if ( (a2 & 0xF000) == 40960 )
  {
    result = 1;
  }
  else if ( (unsigned __int8)sub_4112A0() )
  {
    result = 1;
  }
  else
  {
    result = euidaccess(name, 2) == 0;
  }
  return result;
}

__int64 __fastcall sub_404C20(int fd, size_t a2)
{
  size_t v2; // rbx@1
  size_t v3; // rbp@5
  __int64 v4; // rax@7
  __int64 result; // rax@8
  void *v6; // rax@10

  v2 = a2;
  if ( !buf )
  {
    v6 = calloc(n, 1uLL);
    if ( v6 )
    {
      buf = v6;
    }
    else
    {
      buf = &unk_621580;
      n = 1024LL;
    }
  }
  if ( a2 )
  {
    while ( 1 )
    {
      v3 = v2;
      if ( n <= v2 )
        v3 = n;
      v4 = sub_40B240(fd, buf, v3);
      if ( v4 != v3 )
        break;
      v2 -= v4;
      if ( !v2 )
        goto LABEL_9;
    }
    result = 0LL;
  }
  else
  {
LABEL_9:
    result = 1LL;
  }
  return result;
}

__int64 __fastcall sub_404CD0(int a1, __off_t a2, __off_t a3)
{
  int v3; // ebx@1
  __int64 result; // rax@2
  int v5; // eax@3

  v3 = fallocate(a1, 3, a2, a3);
  if ( v3 >= 0 || (v5 = *__errno_location(), v5 != 38) && v5 != 95 )
    result = (unsigned int)v3;
  else
    result = 0LL;
  return result;
}

int __fastcall sub_404D10(int a1, const char *a2, __mode_t a3)
{
  int result; // eax@2

  if ( a1 >= 0 )
    result = fchmod(a1, a3);
  else
    result = chmod(a2, a3);
  return result;
}

int sub_404D30()
{
  int *v0; // rax@1
  int *v1; // rbx@1
  char *v2; // rax@1

  v0 = __errno_location();
  *v0 = 95;
  v1 = v0;
  v2 = dcgettext(0LL, "failed to restore the default file creation context", 5);
  error(1, *v1, v2);
  return sub_404D70();
}

int __fastcall sub_404D70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx@1
  __int64 v4; // rax@1
  __int64 v5; // rbp@1
  __int64 v6; // rax@1
  __int64 v7; // r8@1
  __int64 v8; // r9@1
  __int64 v9; // rax@2
  __int64 v10; // rbx@2
  char *v11; // rax@2
  __int64 v12; // rcx@2
  __int64 v13; // r8@2
  __int64 v14; // r9@2
  char *v15; // rax@3

  v3 = a3;
  LODWORD(v4) = sub_40E920(1LL, 4LL, a2);
  v5 = v4;
  LODWORD(v6) = sub_40E920(0LL, 4LL, a1);
  __printf_chk(1LL, "%s -> %s", v6, v5, v7, v8);
  if ( v3 )
  {
    LODWORD(v9) = sub_40EA00(4LL, v3);
    v10 = v9;
    v11 = dcgettext(0LL, " (backup: %s)", 5);
    __printf_chk(1LL, v11, v10, v12, v13, v14);
  }
  v15 = stdout->_IO_write_ptr;
  if ( v15 >= stdout->_IO_write_end )
  {
    LODWORD(v15) = __overflow(stdout, 10);
  }
  else
  {
    stdout->_IO_write_ptr = v15 + 1;
    *v15 = 10;
  }
  return (unsigned __int64)v15;
}

int __fastcall sub_404E20(__int64 a1, char *a2, int *a3)
{
  int *v3; // rbp@1
  int v4; // ebp@2
  char *v5; // rbx@2
  char *v6; // rdx@4
  FILE *v7; // rdi@5
  int result; // eax@5
  char *v9; // rbx@6
  char *v10; // rax@6
  FILE *v11; // rdi@6
  char v12; // [sp+4h] [bp-34h]@2
  char v13; // [sp+Eh] [bp-2Ah]@2

  v3 = a3;
  if ( sub_404BD0(a2, *a3) )
  {
    sub_40EA00(4LL, a2);
    v9 = qword_6219C0;
    v10 = dcgettext(0LL, "%s: overwrite %s? ", 5);
    v11 = stderr;
    __fprintf_chk(stderr, 1LL, v10, v9);
    result = sub_4119A0(v11, 1LL);
  }
  else
  {
    sub_40AF30((unsigned int)*v3, &v12);
    v4 = *v3;
    v13 = 0;
    sub_40EA00(4LL, a2);
    v5 = qword_6219C0;
    if ( *(_BYTE *)(a1 + 24) || *(_DWORD *)(a1 + 20) & 0xFFFF00 )
      v6 = dcgettext(0LL, "%s: replace %s, overriding mode %04lo (%s)? ", 5);
    else
      v6 = dcgettext(0LL, "%s: unwritable %s (mode %04lo, %s); try anyway? ", 5);
    v7 = stderr;
    __fprintf_chk(stderr, 1LL, v6, v5);
    result = sub_4119A0(v7, 1LL);
  }
  return result;
}

signed __int64 __fastcall sub_404F50(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5)
{
  char v5; // bp@1
  unsigned int v6; // ebx@1
  int v7; // eax@1
  signed __int64 result; // rax@3
  __int64 v9; // rax@4
  __int64 v10; // rbp@4
  char *v11; // rax@4
  __int64 v12; // rcx@4
  __int64 v13; // r8@4
  __int64 v14; // r9@4
  __int64 v15; // rax@5
  __int64 v16; // r13@5
  __int64 v17; // rax@5
  __int64 v18; // rbp@5
  char *v19; // rbx@5
  int *v20; // rax@5

  v5 = a4;
  v6 = a1;
  v7 = sub_409E90(4294967196LL, a1, 4294967196LL, a2, (unsigned int)(a5 != 0) << 10, a3);
  if ( v7 < 0 )
  {
    LODWORD(v15) = sub_40E920(1LL, 4LL, a1);
    v16 = v15;
    LODWORD(v17) = sub_40E920(0LL, 4LL, a2);
    v18 = v17;
    v19 = dcgettext(0LL, "cannot create hard link %s to %s", 5);
    v20 = __errno_location();
    error(0, *v20, v19, v18, v16);
    result = 0LL;
  }
  else
  {
    LOBYTE(v6) = v5 & (v7 > 0);
    if ( (_BYTE)v6 )
    {
      LODWORD(v9) = sub_40EA00(4LL, a2);
      v10 = v9;
      v11 = dcgettext(0LL, "removed %s\n", 5);
      __printf_chk(1LL, v11, v10, v12, v13, v14);
      result = v6;
    }
    else
    {
      result = 1LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_405060(int a1, __int64 a2, char a3, __off_t a4)
{
  char v4; // r12@1
  __off_t v5; // rbx@1
  __off_t v6; // rax@1
  __int64 v8; // rax@5
  const char *v9; // rsi@5
  __int64 v10; // rbp@5
  __int64 v11; // rax@6
  char *v12; // rbx@7
  int *v13; // rax@7

  v4 = a3;
  v5 = a4;
  v6 = lseek(a1, a4, 1);
  if ( v6 < 0 )
  {
    LODWORD(v11) = sub_40EA00(4LL, a2);
    v9 = "cannot lseek %s";
    v10 = v11;
  }
  else
  {
    if ( !v4 || (signed int)sub_404CD0(a1, v6 - v5, v5) >= 0 )
      return 1LL;
    LODWORD(v8) = sub_40EA00(4LL, a2);
    v9 = "error deallocating %s";
    v10 = v8;
  }
  v12 = dcgettext(0LL, v9, 5);
  v13 = __errno_location();
  error(0, *v13, v12, v10);
  return 0LL;
}

signed __int64 __usercall sub_405120@<rax>(void *a1@<rdx>, size_t a2@<rcx>, unsigned int a3@<ebp>, int a4@<edi>, int a5@<esi>, size_t a6@<r8>, char a7@<r9b>, __int64 a8, __int64 a9, size_t a10, _QWORD *a11, _BYTE *a12)
{
  unsigned int v12; // er14@4
  unsigned __int64 v13; // r15@4
  size_t v14; // rdx@5
  ssize_t v15; // rax@7
  int *v16; // rax@8
  int *v17; // rbx@9
  unsigned int v18; // er15@9
  __int64 v19; // rax@9
  __int64 v20; // rbp@9
  char *v21; // rax@9
  _QWORD *v23; // rax@12
  char *v24; // r13@12
  size_t v25; // r12@12
  size_t v26; // rbx@12
  char *v27; // r11@12
  char *v28; // rsi@16
  size_t v29; // rdx@16
  char *v30; // ST08_8@20
  int v31; // eax@20
  char v32; // dl@20
  bool v33; // al@20
  unsigned int v34; // er9@21
  __int64 v35; // rax@26
  char v36; // r9@26
  unsigned int v37; // eax@34
  bool v38; // zf@44
  __int64 v39; // rax@47
  __int64 v40; // rbx@47
  char *v41; // rax@47
  __int64 v42; // rax@49
  __int64 v43; // rbp@49
  char *v44; // rbx@49
  int *v45; // rax@49
  __off_t v46; // r13@50
  signed int v47; // [sp+8h] [bp-A0h]@24
  int v48; // [sp+18h] [bp-90h]@4
  bool v49; // [sp+1Dh] [bp-8Bh]@12
  char v50; // [sp+1Eh] [bp-8Ah]@25
  char v51; // [sp+1Fh] [bp-89h]@1
  void *buf; // [sp+20h] [bp-88h]@4
  size_t v53; // [sp+28h] [bp-80h]@1
  ssize_t v54; // [sp+30h] [bp-78h]@7
  size_t nbytes; // [sp+38h] [bp-70h]@4
  size_t v56; // [sp+50h] [bp-58h]@4
  size_t v57; // [sp+58h] [bp-50h]@2
  char v58; // [sp+6Ch] [bp-3Ch]@4

  v51 = a7;
  *a12 = 0;
  v53 = a10;
  *a11 = 0LL;
  if ( !a10 )
    return 1;
  v57 = a6;
  if ( !a6 )
    a6 = a2;
  v58 = a7;
  nbytes = a2;
  v12 = 0;
  v13 = 0LL;
  buf = a1;
  v48 = a5;
  v56 = a6;
  while ( 1 )
  {
LABEL_5:
    v14 = v53;
    if ( nbytes <= v53 )
      v14 = nbytes;
    v15 = read(a4, buf, v14);
    v54 = v15;
    if ( v15 >= 0 )
      break;
    v16 = __errno_location();
    if ( *v16 != 4 )
    {
      v17 = v16;
      v18 = 0;
      LODWORD(v19) = sub_40EA00(4LL, a8);
      v20 = v19;
      v21 = dcgettext(0LL, "error reading %s", 5);
      error(0, *v17, v21, v20);
      return v18;
    }
  }
  if ( !v15 )
  {
    v46 = v13;
    LOBYTE(a3) = v12;
    goto LABEL_51;
  }
  v23 = a11;
  v24 = (char *)buf;
  v25 = v54;
  v26 = v56;
  *v23 += v54;
  v27 = (char *)buf;
  v49 = v57 != 0;
  while ( 1 )
  {
    if ( v26 > v25 )
      v26 = v25;
    LOBYTE(a3) = v49 && v26 != 0;
    if ( v49 && v26 != 0 )
      break;
    a3 = v12;
    if ( !((unsigned __int8)(v12 ^ 1) & (v26 == v25)) && v26 )
    {
LABEL_38:
      LODWORD(v23) = -1 - v26;
      if ( 0x7FFFFFFFFFFFFFFFLL - v26 < v13 )
      {
        v18 = 0;
        LODWORD(v39) = sub_40EA00(4LL, a8);
        v40 = v39;
        v41 = dcgettext(0LL, "overflow reading %s", 5);
        error(0, 0, v41, v40);
        return v18;
      }
      v13 += v26;
      v25 -= v26;
      v24 += v26;
      v12 = a3;
      goto LABEL_40;
    }
LABEL_33:
    v13 += v26;
    v47 = 1;
    v50 = 0;
    if ( !(_BYTE)v12 )
      goto LABEL_26;
LABEL_34:
    v37 = sub_405060(v48, a9, v51, v13);
    v36 = v50;
    if ( !(_BYTE)v37 )
      return v37;
LABEL_27:
    LODWORD(v23) = v47;
    if ( v47 )
    {
      if ( !v26 )
      {
        v13 = 0LL;
LABEL_44:
        v38 = v53 == v54;
        v53 -= v54;
        *a12 = a3;
        if ( !v38 )
        {
          v12 = a3;
          goto LABEL_5;
        }
        v46 = v13;
LABEL_51:
        if ( (_BYTE)a3 )
          return sub_405060(v48, a9, v58, v46);
        return 1;
      }
      if ( !v36 )
      {
        v27 = v24;
        v25 -= v26;
        v12 = a3;
        v24 += v26;
        v13 = 0LL;
        goto LABEL_40;
      }
      v13 = v26;
      v27 = v24;
      v12 = a3;
      v26 = 0LL;
    }
    else
    {
      v27 = v24;
      v25 -= v26;
      v12 = a3;
      v24 += v26;
      v13 = v26;
LABEL_40:
      if ( !v25 )
        goto LABEL_44;
    }
  }
  v28 = v24;
  v29 = v26;
  do
  {
    if ( *v28 )
    {
      v33 = v49 && v26 != 0;
      v32 = v12;
      a3 = 0;
      goto LABEL_21;
    }
    ++v28;
    if ( !--v29 )
    {
      LOBYTE(v23) = v13 != 0;
      v34 = (unsigned int)v23 & (v12 ^ 1);
      goto LABEL_37;
    }
  }
  while ( v29 & 0xF );
  v30 = v27;
  v31 = memcmp(v24, v28, v29);
  v27 = v30;
  LOBYTE(a3) = v31 == 0;
  v32 = v12 ^ (v31 == 0);
  v33 = v31 != 0;
LABEL_21:
  LOBYTE(v34) = v32 & (v13 != 0);
  if ( v26 != v25 || !v33 )
  {
LABEL_37:
    if ( !(_BYTE)v34 )
      goto LABEL_38;
    v47 = 0;
    goto LABEL_25;
  }
  if ( !(_BYTE)v34 )
  {
    a3 = 0;
    goto LABEL_33;
  }
  v47 = 1;
  a3 = 0;
LABEL_25:
  v50 = v34;
  if ( (_BYTE)v12 )
    goto LABEL_34;
LABEL_26:
  v35 = sub_40B240(v48, v27, v13);
  v36 = v50;
  if ( v13 == v35 )
    goto LABEL_27;
  v18 = v12;
  LODWORD(v42) = sub_40EA00(4LL, a9);
  v43 = v42;
  v44 = dcgettext(0LL, "error writing %s", 5);
  v45 = __errno_location();
  error(0, *v45, v44, v43);
  return v18;
}

signed __int64 __fastcall sub_405550(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbp@1
  int *v6; // rax@2
  int *v7; // r13@2
  __int64 v8; // rax@3
  __int64 v9; // rbx@3
  char *v10; // rax@3
  int v11; // ebx@3
  signed __int64 result; // rax@4
  unsigned int v13; // ebx@7

  v5 = a5;
  if ( *(_BYTE *)(a5 + 37) )
  {
    v6 = __errno_location();
    v7 = v6;
    if ( !*(_BYTE *)(v5 + 35) || (v11 = *(_BYTE *)(v5 + 38), (_BYTE)v11) )
    {
      *v6 = 95;
      LODWORD(v8) = sub_40EA00(4LL, a1);
      v9 = v8;
      v10 = dcgettext(0LL, "failed to get security context of %s", 5);
      error(0, *v7, v10, v9);
      v11 = *(_BYTE *)(v5 + 38);
    }
    else
    {
      *v6 = 95;
    }
    result = v11 ^ 1u;
  }
  else
  {
    v13 = a4;
    LOBYTE(v13) = *(_BYTE *)(a5 + 33) & a4;
    if ( (_BYTE)v13 )
    {
      *__errno_location() = 95;
      result = v13;
    }
    else
    {
      result = 1LL;
    }
  }
  return result;
}

__int64 __fastcall sub_405620(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx@1
  int *v5; // rax@1
  int *v6; // rbp@1
  __int64 v7; // rax@2
  __int64 v8; // rbx@2
  char *v9; // rax@2
  __int64 result; // rax@2

  v4 = a4;
  v5 = __errno_location();
  v6 = v5;
  if ( !*(_BYTE *)(v4 + 35) || *(_BYTE *)(v4 + 38) )
  {
    *v5 = 95;
    LODWORD(v7) = sub_40E920(0LL, 4LL, a1);
    v8 = v7;
    v9 = dcgettext(0LL, "failed to set the security context of %s", 5);
    error(0, *v6, v9, v8);
    result = 0LL;
  }
  else
  {
    *v5 = 95;
    result = 0LL;
  }
  return result;
}

int __fastcall sub_4056A0(__int64 a1)
{
  __int64 v1; // rax@1

  LODWORD(v1) = sub_40BB50(61LL, 0LL, sub_40C510, sub_40C550, sub_40C5C0);
  *(_QWORD *)(a1 + 56) = v1;
  return v1;
}

bool __fastcall sub_405700(__int64 a1)
{
  bool result; // al@1

  *(_QWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  result = geteuid() == 0;
  *(_BYTE *)(a1 + 27) = result;
  *(_BYTE *)(a1 + 26) = result;
  return result;
}

char __fastcall sub_405740(__int64 a1)
{
  int *v1; // rax@1
  char result; // al@1

  v1 = __errno_location();
  result = *v1 == 22 || *v1 == 1;
  if ( result )
    result = *(_BYTE *)(a1 + 26) ^ 1;
  return result;
}

__int64 __fastcall sub_405770(__int64 a1, const char *a2, int a3, __int64 a4, char a5, __int64 a6)
{
  const char *v6; // r12@1
  int v7; // ebx@1
  __uid_t v8; // er14@1
  __gid_t v9; // er13@1
  int v10; // esi@3
  int v11; // edx@3
  int v12; // eax@4
  int *v13; // rax@8
  int v14; // er14@8
  int *v15; // r15@8
  char v16; // al@10
  int v17; // edx@10
  int *v19; // rax@16
  int v20; // ebx@16
  int *v21; // r14@16
  __int64 v22; // rax@19
  __int64 v23; // r12@19
  char *v24; // rbx@19
  int *v25; // rax@19
  int *v26; // rax@22
  int *v27; // rbx@22
  int v28; // eax@22
  __int64 v29; // rax@24
  __int64 v30; // r12@24
  char *v31; // rax@24

  v6 = a2;
  v7 = a3;
  v8 = *(_DWORD *)(a4 + 28);
  v9 = *(_DWORD *)(a4 + 32);
  if ( !a5 )
  {
    if ( *(_QWORD *)(a1 + 24) & 0xFF0000000000FFLL )
    {
      v10 = *(_DWORD *)(a6 + 24);
      v11 = *(_DWORD *)(a4 + 24);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 43) )
        goto LABEL_6;
      v10 = *(_DWORD *)(a6 + 24);
      v11 = *(_DWORD *)(a1 + 16);
    }
    v12 = ~v11;
    BYTE1(v12) |= 0xEu;
    if ( v10 & v12 & 0xFFF && sub_40D0B0(v6, (unsigned int)v7, (unsigned __int16)v10 & (unsigned __int16)v11 & 0x1C0) )
    {
      v26 = __errno_location();
      v27 = v26;
      v28 = *v26;
      if ( v28 != 1 && v28 != 22 || *(_BYTE *)(a1 + 27) )
      {
        LODWORD(v29) = sub_40EA00(4LL, v6);
        v30 = v29;
        v31 = dcgettext(0LL, "clearing permissions for %s", 5);
        error(0, *v27, v31, v30);
      }
      goto LABEL_20;
    }
  }
LABEL_6:
  if ( v7 != -1 )
  {
    if ( fchown(v7, v8, v9) )
    {
      v13 = __errno_location();
      v14 = *v13;
      v15 = v13;
      if ( *v13 == 1 || v14 == 22 )
      {
        fchown(v7, 0xFFFFFFFF, v9);
        *v15 = v14;
      }
      goto LABEL_10;
    }
LABEL_14:
    return 1;
  }
  if ( !lchown(v6, v8, v9) )
    goto LABEL_14;
  v19 = __errno_location();
  v20 = *v19;
  v21 = v19;
  if ( *v19 == 1 || v20 == 22 )
  {
    lchown(v6, 0xFFFFFFFF, v9);
    *v21 = v20;
  }
LABEL_10:
  v16 = sub_405740(a1);
  v17 = 0;
  if ( !v16 )
  {
    LODWORD(v22) = sub_40EA00(4LL, v6);
    v23 = v22;
    v24 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
    v25 = __errno_location();
    error(0, *v25, v24, v23);
LABEL_20:
    v17 = -*(_BYTE *)(a1 + 36);
  }
  return (unsigned int)v17;
}

__int64 sub_405960()
{
  __int64 result; // rax@2
  int v1; // eax@3
  int v2; // ebx@3

  if ( dword_61F450 == -1 )
  {
    v1 = umask(0);
    v2 = v1;
    dword_61F450 = v1;
    umask(v1);
    result = (unsigned int)v2;
  }
  else
  {
    result = (unsigned int)dword_61F450;
  }
  return result;
}

__int64 __usercall sub_405990@<rax>(int a1@<edx>, __int64 a2@<rcx>, const char *a3@<rdi>, char *a4@<rsi>, __int64 a5@<r8>, __int64 a6@<r9>, signed int a7@<r15d>, unsigned int a8, _BYTE *a9, _BYTE *a10, _BYTE *a11)
{
  unsigned int v11; // ebp@0
  const char *v12; // r14@1
  __int64 v13; // r13@1
  int v14; // er12@1
  __int64 v15; // rbx@1
  int v16; // eax@5
  struct stat *v17; // rdx@5
  signed __int64 v18; // r8@5
  char *v19; // rsi@5
  __int64 v20; // rdi@8
  int v21; // eax@10
  int v22; // eax@22
  int v23; // eax@27
  __int16 v24; // ax@31
  __int64 v25; // rcx@31
  int v26; // er12@33
  __int64 v27; // rdi@35
  char v28; // al@35
  char v29; // al@39
  int v30; // eax@45
  int *v31; // rax@46
  int *v32; // r12@46
  __int64 v33; // rax@55
  __int64 v34; // r12@55
  __int64 v35; // rax@55
  const char *v36; // rsi@55
  __int64 v37; // rbx@55
  char *v38; // rax@56
  __int64 v39; // r8@56
  __int64 v40; // rcx@56
  const char *v41; // rdx@56
  int v42; // er12@68
  char *v43; // rsi@72
  char v44; // al@72
  bool v45; // cf@75
  bool v46; // zf@75
  _BYTE *v47; // rax@75
  const char *v48; // rsi@75
  signed __int64 v49; // rcx@75
  _BYTE *v50; // rdi@75
  void *v51; // r12@75
  char v52; // r8@81
  bool v53; // r12@82
  __int64 v54; // rsi@86
  char v55; // al@86
  int v56; // eax@90
  __int64 v57; // rax@99
  __int64 v58; // r12@99
  char *v59; // rbx@99
  int *v60; // rax@99
  int v61; // eax@104
  __mode_t v62; // edx@105
  __int64 v63; // rax@114
  __int64 v64; // r12@114
  char *v65; // rbx@114
  int *v66; // rax@114
  signed int v67; // eax@115
  int v68; // eax@120
  __int64 v69; // rax@121
  __int64 v70; // r12@121
  char *v71; // rbx@121
  int *v72; // rax@121
  __dev_t v74; // rdx@129
  __ino_t v75; // rdi@129
  size_t v76; // rax@130
  __int64 v77; // rdx@130
  __int64 v78; // rcx@130
  __int64 v79; // r8@130
  __int64 v80; // r9@130
  __int64 v81; // rdx@132
  __int64 v82; // rcx@132
  __int64 v83; // r8@132
  __int64 v84; // r9@132
  int v85; // eax@134
  __int64 v86; // rax@137
  __int64 v87; // r12@137
  __int64 v88; // rax@137
  char *v89; // rax@137
  __int64 v90; // rax@142
  __int64 v91; // r12@142
  __int64 v92; // rax@142
  __int64 v93; // rbx@142
  char *v94; // rax@142
  __int64 v95; // r8@142
  __int64 v96; // r9@142
  int *v97; // rax@153
  int *v98; // r12@153
  int v99; // eax@153
  int v100; // eax@160
  int *v101; // rax@161
  __int64 v102; // rax@162
  __int64 v103; // rbx@162
  char *v104; // rax@162
  int v105; // eax@164
  size_t v106; // rax@167
  char v107; // al@172
  __ino_t v108; // rdx@181
  __dev_t v109; // rcx@181
  __int64 v110; // rax@181
  __int64 v111; // rax@186
  const char *v112; // rsi@186
  char *v113; // rax@187
  int v114; // eax@197
  __int64 v115; // rax@198
  const char *v116; // rsi@198
  char *v117; // r12@199
  int *v118; // rax@199
  unsigned __int64 v119; // rax@203
  __int64 v120; // rcx@206
  __int64 v121; // r8@206
  __mode_t v122; // er12@207
  int v123; // eax@208
  __int64 v124; // rax@213
  __int64 v125; // r12@213
  char *v126; // rax@213
  __int64 v127; // rcx@213
  __int64 v128; // r8@213
  __int64 v129; // r9@213
  __m128i v130; // xmm1@215
  __m128i v131; // xmm2@215
  __m128i v132; // xmm3@215
  __blkcnt_t v133; // rax@215
  char *v134; // rax@215
  char *v135; // r12@219
  char v136; // r15@219
  void *v137; // rax@221
  void *v138; // rbx@221
  void *v139; // rax@221
  void *v140; // r14@221
  char v141; // al@221
  char v142; // r12@222
  __int64 v143; // rax@227
  int v144; // edx@227
  const char *v145; // rsi@228
  char *v146; // rax@229
  size_t v147; // rax@232
  size_t v148; // rax@233
  signed __int64 v149; // rcx@234
  int v150; // eax@237
  __int64 v151; // rcx@237
  __int64 v152; // rax@240
  bool v153; // r12@245
  signed __int64 v154; // rcx@245
  size_t v155; // r9@246
  struct stat *v156; // rdx@246
  __int64 v157; // rax@253
  __int64 v158; // rax@253
  char v159; // al@254
  __int64 v160; // rax@258
  __int64 v161; // r13@258
  __int64 v162; // rax@258
  const char *v163; // rsi@258
  __int64 v164; // rbx@258
  char *v165; // rax@259
  int v166; // eax@271
  int v167; // eax@272
  bool v168; // al@285
  char v169; // al@286
  __int64 v170; // rax@289
  __int64 v171; // r12@289
  char *v172; // rbx@289
  int *v173; // rax@289
  __int64 v174; // rax@290
  __int64 v175; // rax@290
  int v176; // esi@291
  char *v177; // r12@296
  __int64 v178; // rsi@296
  int v179; // ecx@296
  int *v180; // rax@298
  int *v181; // r12@298
  int *v182; // rax@303
  int v183; // er12@303
  void *v184; // rax@305
  char *v185; // rax@305
  void *v186; // rcx@305
  int v187; // esi@305
  const char *v188; // rdx@305
  char v189; // r8@306
  __int64 v190; // rcx@310
  __int64 v191; // rax@329
  __int64 v192; // rbx@329
  char *v193; // rax@329
  __int64 v194; // rax@330
  __int64 v195; // rax@330
  __int64 v196; // r12@330
  char *v197; // rax@330
  __int64 v198; // rcx@340
  __int64 v199; // rax@340
  char *v200; // rax@261
  __int64 v201; // rdx@261
  __int64 v202; // rcx@261
  __int64 v203; // r8@261
  __int64 v204; // r9@261
  __int64 v205; // rax@349
  _BYTE *v206; // rax@354
  char *v207; // rax@356
  size_t v208; // r12@356
  size_t v209; // rax@356
  int v210; // eax@357
  int v211; // eax@358
  size_t v212; // rax@359
  char *v213; // rax@359
  const char *v214; // r12@359
  char *v215; // rax@359
  __int64 v216; // rsi@361
  char *v217; // rax@361
  char *v218; // r12@361
  size_t v219; // rax@362
  void *v220; // rsp@362
  char *v221; // r12@362
  char v222; // al@371
  int v223; // er12@371
  char *v224; // rax@374
  __int64 v225; // rdx@374
  __int64 v226; // rcx@374
  __int64 v227; // r8@374
  __int64 v228; // r9@374
  __int64 v229; // rax@375
  __int64 v230; // r12@375
  __int64 v231; // rax@375
  __int64 v232; // rbx@375
  char *v233; // rax@375
  __int64 v234; // rax@376
  __int64 v235; // rax@376
  __int64 v236; // r12@376
  char *v237; // r14@376
  int *v238; // rax@376
  __int64 v239; // rax@378
  const char *v240; // r12@378
  void *v241; // rax@387
  void *v242; // r12@387
  char *v243; // rax@387
  __int64 v244; // rdx@388
  signed int v245; // eax@389
  _BYTE *v246; // rax@394
  __int64 v247; // rax@400
  __int64 v248; // rbx@400
  char *v249; // rax@400
  __int64 v250; // rax@403
  __int64 v251; // rax@404
  char v252; // al@406
  int v253; // er12@409
  int v254; // eax@409
  __int64 v255; // rax@414
  __int64 v256; // rcx@414
  __int64 v257; // rax@414
  __int64 v258; // rax@415
  char v259; // al@419
  __int64 v260; // rax@421
  __int64 v261; // rax@421
  __int64 v262; // rax@422
  char *v263; // r12@422
  int *v264; // rax@422
  int *v265; // rax@423
  __int64 v266; // rax@424
  const char *v267; // rsi@424
  __int64 v268; // rbx@424
  char *v269; // rax@425
  __int64 v270; // rax@426
  void *v271; // rax@429
  char *v272; // r12@429
  int *v273; // rax@429
  __int64 v274; // rax@442
  char *v275; // r12@442
  int *v276; // rax@442
  __int64 v277; // rax@443
  char *v278; // rax@446
  __int64 v279; // rcx@446
  int v280; // eax@448
  __int64 v281; // rax@449
  __int64 v282; // rax@453
  __int64 v283; // r12@453
  char *v284; // rax@453
  __int64 v285; // rax@455
  __int64 v286; // rax@455
  __int64 v287; // rax@458
  __int64 v288; // r12@458
  char *v289; // rax@458
  __int64 v290; // rcx@458
  __int64 v291; // r8@458
  __int64 v292; // r9@458
  unsigned __int64 v293; // r12@464
  signed __int64 v294; // rax@465
  __int128 v295; // tt@469
  __blksize_t v296; // rdi@471
  unsigned __int64 v297; // rax@473
  char *v298; // rsi@474
  void *v299; // rax@476
  unsigned __int64 v300; // rdx@476
  bool v301; // r9@477
  int v302; // eax@484
  char v303; // r8@492
  int v304; // eax@493
  __int64 v305; // rax@494
  char *v306; // r12@494
  int *v307; // rax@494
  __int64 v308; // rax@509
  __int64 v309; // rax@510
  __int64 v310; // rax@515
  char *v311; // r12@515
  int *v312; // rax@515
  int v313; // eax@520
  int v314; // eax@522
  void *v315; // rax@524
  char *v316; // r12@524
  int *v317; // rax@524
  int v318; // eax@525
  __off_t v319; // r12@532
  char *v320; // rcx@532
  char *v321; // rbx@532
  char v322; // r15@532
  size_t v323; // r14@532
  char v324; // al@533
  size_t v325; // rdx@535
  __off_t v326; // rsi@535
  unsigned int v327; // er13@535
  __int64 v328; // rax@535
  size_t v329; // r8@536
  char *v330; // rax@543
  __int64 v331; // rcx@553
  bool v332; // r12@558
  __int64 v333; // rax@565
  const char *v334; // rsi@565
  char *v335; // r12@566
  int *v336; // rax@566
  __int64 v337; // rdx@569
  char *v338; // rbx@573
  __int64 v339; // rax@574
  __int64 v340; // r12@574
  __int64 v341; // rax@574
  int v342; // eax@582
  void *v343; // rax@585
  __int64 v344; // rax@589
  __int64 v345; // rax@589
  __int64 v346; // r12@589
  int *v347; // rax@589
  char *v348; // r12@590
  int *v349; // rax@590
  signed __int64 v350; // rcx@593
  const char *v351; // rdi@593
  void *v352; // rax@597
  void *v353; // rax@602
  __int64 v354; // rax@605
  __int64 v355; // rax@301
  __int64 v356; // r12@301
  char *v357; // rax@301
  __int64 v358; // rcx@301
  __int64 v359; // r8@301
  __int64 v360; // r9@301
  __int64 v361; // rax@606
  const char *v362; // rsi@606
  char *v363; // r12@607
  int *v364; // rax@607
  void *v365; // rax@608
  char *v366; // rax@608
  int v367; // eax@609
  int v368; // eax@610
  __int64 v369; // rax@611
  char *v370; // r12@611
  int *v371; // rax@611
  __int64 v372; // rax@615
  __int64 v373; // rax@618
  __int64 v374; // rax@619
  __int64 v375; // rax@623
  __int64 v376; // r12@623
  char *v377; // rax@623
  char v378; // [sp+1h] [bp-381h]@203
  unsigned __int64 v379; // [sp+Ah] [bp-378h]@478
  __off_t v380; // [sp+1Ah] [bp-368h]@532
  char v381; // [sp+21h] [bp-361h]@362
  __int64 v382; // [sp+22h] [bp-360h]@532
  unsigned int v383; // [sp+2Ah] [bp-358h]@532
  int v384; // [sp+2Eh] [bp-354h]@295
  char *v385; // [sp+32h] [bp-350h]@476
  int v386; // [sp+3Ah] [bp-348h]@302
  __mode_t v387; // [sp+3Eh] [bp-344h]@113
  __int64 v388; // [sp+42h] [bp-340h]@219
  const char *v389; // [sp+4Ah] [bp-338h]@219
  char *s; // [sp+52h] [bp-330h]@215
  unsigned int v391; // [sp+5Ah] [bp-328h]@219
  char v392; // [sp+5Fh] [bp-323h]@531
  unsigned __int8 v393; // [sp+60h] [bp-322h]@532
  char v394; // [sp+61h] [bp-321h]@81
  struct stat *v395; // [sp+62h] [bp-320h]@219
  __int64 v396; // [sp+6Ah] [bp-318h]@203
  char *s2; // [sp+72h] [bp-310h]@219
  void *s1; // [sp+7Ah] [bp-308h]@72
  char *old; // [sp+82h] [bp-300h]@35
  __int64 v400; // [sp+8Ah] [bp-2F8h]@1
  size_t n; // [sp+92h] [bp-2F0h]@22
  int v402[2]; // [sp+9Ah] [bp-2E8h]@1
  void *ptr; // [sp+A2h] [bp-2E0h]@10
  struct stat *v404; // [sp+AAh] [bp-2D8h]@4
  char *src; // [sp+B2h] [bp-2D0h]@22
  __mode_t v406; // [sp+BAh] [bp-2C8h]@6
  int v407; // [sp+BEh] [bp-2C4h]@6
  int fildes[2]; // [sp+C2h] [bp-2C0h]@1
  char *filename; // [sp+CAh] [bp-2B8h]@1
  char v410; // [sp+D9h] [bp-2A9h]@538
  __int64 v411; // [sp+DAh] [bp-2A8h]@478
  __off_t length; // [sp+E2h] [bp-2A0h]@219
  __int64 v413; // [sp+EAh] [bp-298h]@514
  __int64 v414; // [sp+F2h] [bp-290h]@514
  __int64 v415; // [sp+FAh] [bp-288h]@514
  char v416; // [sp+102h] [bp-280h]@614
  char v417; // [sp+103h] [bp-27Fh]@555
  void *v418; // [sp+10Ah] [bp-278h]@543
  struct stat stat_buf; // [sp+112h] [bp-270h]@4
  struct stat v420; // [sp+1A2h] [bp-1E0h]@22
  struct stat v421; // [sp+232h] [bp-150h]@219
  struct stat v422; // [sp+2C2h] [bp-C0h]@90

  v12 = a3;
  v13 = a6;
  v14 = a1;
  filename = a4;
  LOBYTE(fildes[0]) = a11 != 0LL;
  v46 = *(_BYTE *)(a6 + 24) == 0;
  v15 = a8;
  v400 = a2;
  *(_QWORD *)v402 = a5;
  if ( !v46 && a11 != 0LL )
    *a11 = 0;
  v46 = *(_DWORD *)(a6 + 4) == 2;
  *a10 = 0;
  v404 = &stat_buf;
  if ( !v46 )
  {
    v16 = __xstat(1, a3, &stat_buf);
    v19 = (char *)a3;
    LOBYTE(a7) = v16 != 0;
    if ( !v16 )
      goto LABEL_6;
LABEL_121:
    a7 = 0;
    LODWORD(v69) = sub_40EA00(4LL, v19);
    v70 = v69;
    v71 = dcgettext(0LL, "cannot stat %s", 5);
    v72 = __errno_location();
    error(0, *v72, v71, v70);
    return (unsigned int)a7;
  }
  v68 = __lxstat(1, a3, &stat_buf);
  v19 = (char *)a3;
  LOBYTE(a7) = v68 != 0;
  if ( v68 )
    goto LABEL_121;
LABEL_6:
  v406 = stat_buf.st_mode;
  v407 = stat_buf.st_mode & 0xF000;
  if ( v407 != 0x4000 )
  {
    if ( !(_BYTE)a8 )
      goto LABEL_10;
    v20 = *(_QWORD *)(v13 + 64);
    if ( *(_DWORD *)v13 )
    {
      sub_40AE60(v20, v12, v404);
      goto LABEL_10;
    }
    v107 = sub_40AEF0(v20, v12, v404);
    if ( v107 )
    {
      LOBYTE(filename) = v107;
      LODWORD(v191) = sub_40EA00(4LL, v12);
      v192 = v191;
      v193 = dcgettext(0LL, "warning: source file %s specified more than once", 5);
      error(0, 0, v193, v192);
      return (unsigned __int8)filename;
    }
    goto LABEL_173;
  }
  if ( !*(_BYTE *)(v13 + 42) )
  {
    LODWORD(v143) = sub_40EA00(4LL, v19);
    v144 = 5;
    v15 = v143;
    if ( !*(_BYTE *)(v13 + 25) )
    {
LABEL_244:
      v146 = dcgettext(0LL, "-r not specified; omitting directory %s", v144);
      goto LABEL_230;
    }
    v145 = "omitting directory %s";
    goto LABEL_229;
  }
  if ( (_BYTE)a8 )
LABEL_173:
    sub_40AE60(*(_QWORD *)(v13 + 64), v12, v404);
LABEL_10:
  LODWORD(ptr) = 1;
  v21 = *(_DWORD *)(v13 + 4);
  if ( v21 != 4 )
    LODWORD(ptr) = (unsigned __int8)a8 & (v21 == 3);
  if ( (_BYTE)v14 )
  {
LABEL_59:
    LOBYTE(src) = 1;
    v25 = 0LL;
    old = 0LL;
    goto LABEL_60;
  }
  if ( v407 != 0x8000 && (!*(_BYTE *)(v13 + 20) || v407 == 0x4000 || v407 == 40960)
    || *(_BYTE *)(v13 + 24)
    || *(_BYTE *)(v13 + 44)
    || *(_BYTE *)(v13 + 23)
    || *(_DWORD *)v13
    || *(_BYTE *)(v13 + 21) )
  {
    n = (size_t)&v420;
    v100 = __lxstat(1, filename, &v420);
    v18 = (unsigned int)v14;
    LOBYTE(src) = v100 != 0;
    if ( !v100 )
      goto LABEL_23;
    goto LABEL_161;
  }
  n = (size_t)&v420;
  v22 = __xstat(1, filename, &v420);
  v18 = 1LL;
  LOBYTE(src) = v22 != 0;
  if ( v22 )
  {
LABEL_161:
    v101 = __errno_location();
    if ( *v101 != 2 )
    {
      *(_QWORD *)fildes = v101;
      a7 = v14;
      LODWORD(v102) = sub_40EA00(4LL, filename);
      v103 = v102;
      v104 = dcgettext(0LL, "cannot stat %s", 5);
      error(0, **(_DWORD **)fildes, v104, v103);
      return (unsigned int)a7;
    }
    goto LABEL_59;
  }
LABEL_23:
  if ( stat_buf.st_ino != v420.st_ino || stat_buf.st_dev != v420.st_dev )
  {
    if ( *(_DWORD *)(v13 + 4) != 2 )
      goto LABEL_25;
    v153 = 0;
    v154 = 0LL;
  }
  else
  {
    v153 = *(_BYTE *)(v13 + 23);
    if ( v153 )
      goto LABEL_328;
    if ( *(_DWORD *)(v13 + 4) != 2 )
    {
      LOBYTE(old) = v18;
      s2 = (char *)&v421;
      v166 = __lxstat(1, filename, &v421);
      v18 = (unsigned __int8)old;
      if ( v166 )
        goto LABEL_25;
      v395 = &v422;
      v167 = __lxstat(1, v12, &v422);
      v18 = (unsigned __int8)old;
      if ( v167 )
        goto LABEL_25;
      if ( v422.st_ino == v421.st_ino )
        v153 = v422.st_dev == v421.st_dev;
      v155 = (size_t)s2;
      v156 = v395;
      if ( (v422.st_mode & 0xF000) == 40960 && (v421.st_mode & 0xF000) == 40960 && *(_BYTE *)(v13 + 21) )
        goto LABEL_25;
      goto LABEL_247;
    }
    v153 = 1;
    v154 = 1LL;
  }
  v155 = n;
  v156 = v404;
  if ( (stat_buf.st_mode & 0xF000) == 40960 && (v420.st_mode & 0xF000) == 40960 )
  {
    LODWORD(s1) = v154;
    LOBYTE(old) = v18;
    if ( (unsigned __int8)sub_40EF80(v12, filename, v404, v154, v18, n) )
      goto LABEL_253;
    v18 = (unsigned __int8)old;
    if ( *(_DWORD *)v13 || !(_DWORD)s1 )
      goto LABEL_25;
    v222 = 1;
    LOBYTE(v223) = *(_BYTE *)(v13 + 24) ^ 1;
    goto LABEL_372;
  }
LABEL_247:
  if ( *(_DWORD *)v13 )
  {
    if ( !v153 )
    {
      if ( *(_BYTE *)(v13 + 24)
        || *(_DWORD *)(v13 + 4) == 2
        || (v156->st_mode & 0xF000) != 40960
        || (*(_DWORD *)(v155 + 24) & 0xF000) == 40960 )
      {
        goto LABEL_25;
      }
LABEL_253:
      LODWORD(v157) = sub_40E920(1LL, 4LL, filename);
      v34 = v157;
      LODWORD(v158) = sub_40E920(0LL, 4LL, v12);
      v36 = "%s and %s are the same file";
      v37 = v158;
LABEL_56:
      v38 = dcgettext(0LL, v36, 5);
      v39 = v34;
      v40 = v37;
      v41 = v38;
LABEL_57:
      error(0, 0, v41, v40, v39);
      goto LABEL_58;
    }
    LOBYTE(src) = v18;
    v259 = sub_40EF80(v12, filename, v156, v154, v18, v155);
    v18 = (unsigned __int8)src;
    LOBYTE(v223) = v259 ^ 1;
    v222 = 0;
LABEL_372:
    if ( (_BYTE)v223 )
    {
      LOBYTE(src) = v222;
      goto LABEL_25;
    }
    goto LABEL_253;
  }
  v190 = *(_BYTE *)(v13 + 24);
  if ( (_BYTE)v190 || *(_BYTE *)(v13 + 21) )
  {
    if ( (*(_DWORD *)(v155 + 24) & 0xF000) == 40960 )
      goto LABEL_25;
    if ( !v153 || *(_QWORD *)(v155 + 16) <= 1uLL )
    {
      if ( (v156->st_mode & 0xF000) == 40960 )
        goto LABEL_315;
      goto LABEL_345;
    }
    LOBYTE(s2) = v18;
    s1 = (void *)v155;
    old = (char *)v156;
    v222 = sub_40EF80(v12, filename, v156, v190, v18, v155);
    v156 = (struct stat *)old;
    v155 = (size_t)s1;
    v18 = (unsigned __int8)s2;
    if ( !v222 )
    {
      LOBYTE(v223) = *(_BYTE *)(v13 + 24) ^ 1;
      goto LABEL_372;
    }
    if ( (*((_DWORD *)old + 6) & 0xF000) == 40960 )
      goto LABEL_314;
  }
  else if ( (v156->st_mode & 0xF000) == 40960 )
  {
    goto LABEL_317;
  }
  if ( (*(_DWORD *)(v155 + 24) & 0xF000) != 40960 )
  {
LABEL_345:
    if ( v156->st_ino != *(_QWORD *)(v155 + 8) || v156->st_dev != *(_QWORD *)v155 )
      goto LABEL_25;
    if ( *(_BYTE *)(v13 + 23) )
      goto LABEL_328;
  }
LABEL_314:
  LOBYTE(v190) = *(_BYTE *)(v13 + 24);
LABEL_315:
  if ( (_BYTE)v190 )
  {
    if ( (stat_buf.st_mode & 0xF000) == 40960 && *(_QWORD *)(v155 + 16) > 1uLL )
    {
      LOBYTE(s2) = v18;
      s1 = (void *)v155;
      old = (char *)v156;
      v278 = canonicalize_file_name(v12);
      v156 = (struct stat *)old;
      v155 = (size_t)s1;
      v18 = (unsigned __int8)s2;
      if ( v278 )
      {
        LOBYTE(old) = (_BYTE)s2;
        src = v278;
        v223 = sub_40EF80(v278, filename, v156, v279, (unsigned __int8)s2, s1) ^ 1;
        free(src);
        v222 = 0;
        v18 = (unsigned __int8)s2;
        goto LABEL_372;
      }
    }
  }
LABEL_317:
  if ( *(_BYTE *)(v13 + 44) || *(_DWORD *)(v13 + 20) & 0xFF00FF00 && (*(_DWORD *)(v155 + 24) & 0xF000) == 40960 )
  {
    LOBYTE(v223) = *(_QWORD *)v155 == v156->st_dev;
    v222 = 0;
    goto LABEL_372;
  }
  if ( *(_DWORD *)(v13 + 4) != 2 )
    goto LABEL_253;
  if ( (v156->st_mode & 0xF000) == 40960 )
  {
    LOBYTE(s1) = v18;
    old = (char *)v155;
    v314 = __xstat(1, v12, &v422);
    v155 = (size_t)old;
    v18 = (unsigned __int8)s1;
    if ( v314 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v422.st_dev = _mm_load_si128((const __m128i *)v156);
    *(__m128i *)&v422.st_nlink = _mm_load_si128((const __m128i *)&v156->st_nlink);
    *(__m128i *)&v422.st_gid = _mm_load_si128((const __m128i *)&v156->st_gid);
    *(__m128i *)&v422.st_size = _mm_load_si128((const __m128i *)&v156->st_size);
    *(__m128i *)&v422.st_blocks = _mm_load_si128((const __m128i *)&v156->st_blocks);
    *(__m128i *)&v422.st_atim.tv_nsec = _mm_load_si128((const __m128i *)&v156->st_atim.tv_nsec);
    *(__m128i *)&v422.st_mtim.tv_nsec = _mm_load_si128((const __m128i *)&v156->st_mtim.tv_nsec);
    *(__m128i *)&v422.st_ctim.tv_nsec = _mm_load_si128((const __m128i *)&v156->st_ctim.tv_nsec);
    *(__m128i *)&v422.__unused[1] = _mm_load_si128((const __m128i *)&v156->__unused[1]);
  }
  if ( (*(_DWORD *)(v155 + 24) & 0xF000) == 40960 )
  {
    LOBYTE(old) = v18;
    v313 = __xstat(1, filename, &v421);
    v18 = (unsigned __int8)old;
    if ( v313 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v421.st_dev = _mm_load_si128((const __m128i *)v155);
    *(__m128i *)&v421.st_nlink = _mm_load_si128((const __m128i *)(v155 + 16));
    *(__m128i *)&v421.st_gid = _mm_load_si128((const __m128i *)(v155 + 32));
    *(__m128i *)&v421.st_size = _mm_load_si128((const __m128i *)(v155 + 48));
    *(__m128i *)&v421.st_blocks = _mm_load_si128((const __m128i *)(v155 + 64));
    *(__m128i *)&v421.st_atim.tv_nsec = _mm_load_si128((const __m128i *)(v155 + 80));
    *(__m128i *)&v421.st_mtim.tv_nsec = _mm_load_si128((const __m128i *)(v155 + 96));
    *(__m128i *)&v421.st_ctim.tv_nsec = _mm_load_si128((const __m128i *)(v155 + 112));
    *(__m128i *)&v421.__unused[1] = _mm_load_si128((const __m128i *)(v155 + 128));
  }
  if ( v422.st_ino == v421.st_ino && v422.st_dev == v421.st_dev )
  {
    if ( !*(_BYTE *)(v13 + 23) )
      goto LABEL_253;
LABEL_328:
    LOBYTE(src) = 1;
  }
LABEL_25:
  if ( v407 == 0x4000 )
  {
    if ( !*(_BYTE *)(v13 + 24) )
      goto LABEL_30;
    v23 = *(_DWORD *)(v13 + 8);
  }
  else
  {
    if ( *(_BYTE *)(v13 + 45) )
    {
      v149 = 0LL;
      if ( *(_BYTE *)(v13 + 31) )
      {
        v149 = 1LL;
        if ( *(_BYTE *)(v13 + 24) )
          v149 = v420.st_dev != stat_buf.st_dev;
      }
      LOBYTE(old) = v18;
      v150 = sub_40FD60(filename, n, v404, v149);
      v18 = (unsigned __int8)old;
      if ( v150 >= 0 )
      {
        if ( a11 )
          *a11 = 1;
        LODWORD(v152) = sub_409A10(filename, stat_buf.st_ino, stat_buf.st_dev, v151, v18);
        if ( v152 && !(unsigned __int8)sub_404F50(v152, (__int64)filename, 1u, *(_BYTE *)(v13 + 46), (char)ptr) )
        {
          if ( !*(_BYTE *)(v13 + 37) )
            return (unsigned int)a7;
          goto LABEL_243;
        }
LABEL_171:
        return 1;
      }
    }
    v23 = *(_DWORD *)(v13 + 8);
    if ( !*(_BYTE *)(v13 + 24) )
    {
      if ( v23 == 2 )
        goto LABEL_171;
      if ( v23 == 3 )
      {
        LOBYTE(old) = v18;
        v252 = sub_404E20(v13, filename, (int *)(n + 24));
        v18 = (unsigned __int8)old;
        if ( !v252 )
          goto LABEL_171;
      }
      goto LABEL_30;
    }
  }
  if ( v23 == 2
    || (v23 == 3
     || v23 == 4
     && *(_BYTE *)(v13 + 47)
     && (LOBYTE(old) = v18, v168 = sub_404BD0(filename, v420.st_mode), v18 = (unsigned __int8)old, !v168))
    && (LOBYTE(old) = v18, v169 = sub_404E20(v13, filename, (int *)(n + 24)), v18 = (unsigned __int8)old, !v169) )
  {
    if ( !a11 )
      goto LABEL_171;
LABEL_288:
    a7 = 1;
    *a11 = 1;
    return (unsigned int)a7;
  }
LABEL_30:
  if ( (_BYTE)src )
    goto LABEL_171;
  v24 = v420.st_mode;
  v25 = (unsigned int)v18 ^ 1;
  v17 = (struct stat *)(v420.st_mode & 0xF000);
  if ( (_DWORD)v17 != 0x4000 )
  {
    if ( v407 == 0x4000 )
    {
      if ( !*(_BYTE *)(v13 + 24) || (v26 = *(_DWORD *)v13) == 0 )
      {
        LODWORD(v260) = sub_40E920(1LL, 4LL, v12);
        v34 = v260;
        LODWORD(v261) = sub_40E920(0LL, 4LL, filename);
        v36 = "cannot overwrite non-directory %s with directory %s";
        v37 = v261;
        goto LABEL_56;
      }
      if ( !(_BYTE)a8 )
        goto LABEL_353;
    }
    else
    {
      v26 = *(_DWORD *)v13;
      if ( !(_BYTE)a8 )
        goto LABEL_39;
    }
    if ( v26 != 3 )
    {
      v27 = *(_QWORD *)(v13 + 56);
      LOBYTE(old) = v18 ^ 1;
      v28 = sub_40AEF0(v27, filename, n);
      v25 = (unsigned __int8)old;
      if ( v28 )
      {
        LODWORD(v285) = sub_40E920(1LL, 4LL, v12);
        v34 = v285;
        LODWORD(v286) = sub_40E920(0LL, 4LL, filename);
        v36 = "will not overwrite just-created %s with %s";
        v37 = v286;
        goto LABEL_56;
      }
      if ( v407 == 0x4000 )
        goto LABEL_38;
      v24 = v420.st_mode;
      v17 = (struct stat *)(v420.st_mode & 0xF000);
      if ( (_DWORD)v17 != 0x4000 )
        goto LABEL_38;
      goto LABEL_351;
    }
    if ( !*(_BYTE *)(v13 + 24) )
      goto LABEL_394;
LABEL_353:
    v17 = (struct stat *)(stat_buf.st_mode & 0xF000);
    if ( (_DWORD)v17 != 0x4000 )
      goto LABEL_354;
    goto LABEL_412;
  }
  if ( v407 != 0x4000 )
  {
LABEL_351:
    if ( *(_BYTE *)(v13 + 24) )
    {
      v26 = *(_DWORD *)v13;
      if ( *(_DWORD *)v13 )
        goto LABEL_353;
    }
    LODWORD(v270) = sub_40EA00(4LL, filename);
    v145 = "cannot overwrite directory %s with non-directory";
    v15 = v270;
LABEL_229:
    v146 = dcgettext(0LL, v145, 5);
LABEL_230:
    a7 = 0;
    error(0, 0, v146, v15);
    return (unsigned int)a7;
  }
LABEL_38:
  v26 = *(_DWORD *)v13;
LABEL_39:
  v29 = *(_BYTE *)(v13 + 24);
  if ( v29 )
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      goto LABEL_398;
    v24 = v420.st_mode;
LABEL_412:
    if ( (v24 & 0xF000) == 0x4000 )
    {
LABEL_398:
      if ( !v26 )
        goto LABEL_396;
      goto LABEL_354;
    }
    if ( !v26 )
    {
      LODWORD(v255) = sub_40EAD0(0LL, 3LL, filename, v25);
      v34 = v255;
      LODWORD(v257) = sub_40EAD0(0LL, 3LL, v12, v256);
      v36 = "cannot move directory onto non-directory: %s -> %s";
      v37 = v257;
      goto LABEL_56;
    }
LABEL_354:
    LOBYTE(n) = v25;
    LODWORD(v206) = sub_40AD40(v12);
    v25 = (unsigned __int8)n;
    v18 = (signed __int64)v206;
    if ( *v206 != 46 )
      goto LABEL_355;
    v29 = 1;
    goto LABEL_434;
  }
  if ( v26 )
  {
LABEL_394:
    LOBYTE(n) = v25;
    LODWORD(v246) = sub_40AD40(v12);
    v25 = (unsigned __int8)n;
    v18 = (signed __int64)v246;
    if ( *v246 != 46 )
    {
LABEL_395:
      if ( (v420.st_mode & 0xF000) == 0x4000 )
      {
LABEL_396:
        old = 0LL;
        goto LABEL_60;
      }
LABEL_355:
      if ( v26 != 3 )
      {
        LOBYTE(n) = v25;
        s1 = (void *)v18;
        src = (char *)strlen((const char *)v18);
        LODWORD(v207) = sub_40AD40(filename);
        old = v207;
        v208 = strlen(v207);
        s2 = ::src;
        v209 = strlen(::src);
        v25 = (unsigned __int8)n;
        v396 = v209;
        if ( src == (char *)(v208 + v209) )
        {
          LOBYTE(src) = n;
          n = (size_t)s1;
          v210 = memcmp(s1, old, v208);
          v25 = (unsigned __int8)src;
          if ( !v210 )
          {
            v211 = strcmp((const char *)(n + v208), s2);
            v25 = (unsigned __int8)src;
            if ( !v211 )
            {
              LOBYTE(old) = (_BYTE)src;
              v212 = strlen(filename);
              n = v212;
              LODWORD(v213) = sub_4112E0(v396 + v212 + 1, s2);
              v214 = v213;
              src = ::src;
              v215 = (char *)mempcpy(v213, filename, n);
              strcpy(v215, src);
              LODWORD(src) = __xstat(1, v214, &v422);
              free((void *)v214);
              v25 = (unsigned __int8)old;
              if ( !(_DWORD)src && stat_buf.st_ino == v422.st_ino && stat_buf.st_dev == v422.st_dev )
              {
                if ( *(_BYTE *)(v13 + 24) )
                  v338 = dcgettext(0LL, "backing up %s might destroy source;  %s not moved", 5);
                else
                  v338 = dcgettext(0LL, "backing up %s might destroy source;  %s not copied", 5);
                LODWORD(v339) = sub_40E920(1LL, 4LL, v12);
                v340 = v339;
                LODWORD(v341) = sub_40E920(0LL, 4LL, filename);
                v39 = v340;
                v41 = v338;
                v40 = v341;
                goto LABEL_57;
              }
            }
          }
        }
      }
      v216 = *(_DWORD *)v13;
      LOBYTE(src) = v25;
      LODWORD(v217) = sub_40A8B0(filename, v216, v17, v25, v18);
      v218 = v217;
      old = v217;
      LOBYTE(n) = (_BYTE)src;
      if ( v217 )
      {
        v219 = strlen(v217);
        v220 = alloca(v219 + 9);
        v221 = (char *)memcpy((void *)((unsigned __int64)&v381 & 0xFFFFFFFFFFFFFFF0LL), v218, v219 + 1);
        free(old);
        old = v221;
        v25 = (unsigned __int8)n;
        LOBYTE(src) = 1;
        goto LABEL_60;
      }
      v265 = __errno_location();
      LOBYTE(src) = 1;
      v25 = (unsigned __int8)n;
      v32 = v265;
      if ( *v265 == 2 )
        goto LABEL_60;
      LODWORD(v266) = sub_40EA00(4LL, filename);
      v267 = "cannot backup %s";
      v268 = v266;
LABEL_425:
      a7 = 0;
      v269 = dcgettext(0LL, v267, 5);
      error(0, *v32, v269, v268);
      return (unsigned int)a7;
    }
    v29 = 0;
LABEL_434:
    v17 = (struct stat *)*(_BYTE *)(v18 + (*(_BYTE *)(v18 + 1) == 46) + 1);
    if ( !(_BYTE)v17 || (_BYTE)v17 == 47 )
      goto LABEL_41;
    if ( v29 )
      goto LABEL_355;
    goto LABEL_395;
  }
LABEL_41:
  old = 0LL;
  v17 = (struct stat *)(v420.st_mode & 0xF000);
  LOBYTE(v17) = v29 | ((_DWORD)v17 == 0x4000);
  if ( (_BYTE)v17
    || (LOBYTE(src) = *(_BYTE *)(v13 + 21), !(_BYTE)src)
    && (!*(_BYTE *)(v13 + 34) || v420.st_nlink <= 1)
    && ((old = 0LL, *(_DWORD *)(v13 + 4) != 2) || (stat_buf.st_mode & 0xF000) == 0x8000) )
  {
LABEL_60:
    if ( !(_BYTE)a8 || !*(_QWORD *)(v13 + 56) )
      goto LABEL_61;
    goto LABEL_50;
  }
  LOBYTE(src) = v25;
  v30 = unlink(filename);
  v25 = (unsigned __int8)src;
  if ( v30 )
  {
    v31 = __errno_location();
    v25 = (unsigned __int8)src;
    v32 = v31;
    if ( *v31 != 2 )
    {
      LODWORD(v309) = sub_40EA00(4LL, filename);
      v267 = "cannot remove %s";
      v268 = v309;
      goto LABEL_425;
    }
  }
  LOBYTE(src) = *(_BYTE *)(v13 + 46);
  if ( (_BYTE)src )
  {
    LOBYTE(n) = v25;
    LODWORD(v287) = sub_40EA00(4LL, filename);
    v288 = v287;
    v289 = dcgettext(0LL, "removed %s\n", 5);
    __printf_chk(1LL, v289, v288, v290, v291, v292);
    v25 = (unsigned __int8)n;
    old = 0LL;
    goto LABEL_60;
  }
  if ( !(_BYTE)a8 )
  {
    LOBYTE(src) = *(_BYTE *)(v13 + 42) & (v407 == 0x4000);
    if ( (_BYTE)src )
    {
      v74 = stat_buf.st_dev;
      v75 = stat_buf.st_ino;
      old = 0LL;
      goto LABEL_232;
    }
    LOBYTE(src) = 1;
    old = 0LL;
    goto LABEL_65;
  }
  v46 = *(_QWORD *)(v13 + 56) == 0LL;
  LOBYTE(src) = a8;
  old = 0LL;
  if ( !v46 )
  {
LABEL_50:
    if ( *(_BYTE *)(v13 + 24) )
    {
      if ( *(_BYTE *)(v13 + 46) )
      {
LABEL_147:
        if ( v407 != 0x4000 || !*(_BYTE *)(v13 + 42) )
          goto LABEL_149;
LABEL_129:
        v74 = stat_buf.st_dev;
        v75 = stat_buf.st_ino;
        if ( (_BYTE)a8 )
        {
          LODWORD(v76) = sub_409A10(filename, stat_buf.st_ino, stat_buf.st_dev, v25, v18);
          n = v76;
          goto LABEL_131;
        }
LABEL_232:
        LODWORD(v147) = sub_4099D0(v75, v74, v74, v25);
        n = v147;
LABEL_131:
        if ( !n )
          goto LABEL_145;
        goto LABEL_132;
      }
      goto LABEL_127;
    }
    if ( *(_DWORD *)v13 )
    {
      if ( !*(_BYTE *)(v13 + 46) )
      {
        if ( v407 != 0x4000 )
          goto LABEL_66;
        goto LABEL_190;
      }
LABEL_63:
      if ( v407 != 0x4000 )
      {
        sub_404D70((__int64)v12, (__int64)filename, (__int64)old);
        goto LABEL_65;
      }
LABEL_190:
      if ( *(_BYTE *)(v13 + 42) )
        goto LABEL_129;
LABEL_66:
      if ( !*(_BYTE *)(v13 + 34) )
      {
        n = 0LL;
        fildes[0] = (unsigned __int8)src;
        goto LABEL_68;
      }
LABEL_143:
      if ( *(_BYTE *)(v13 + 23) )
      {
        n = 0LL;
        goto LABEL_145;
      }
      if ( stat_buf.st_nlink <= 1 )
      {
        v105 = *(_DWORD *)(v13 + 4);
        if ( !(_BYTE)a8 || v105 != 3 )
        {
          n = 0LL;
          if ( v105 != 4 )
            goto LABEL_145;
        }
      }
      LODWORD(v106) = sub_409A10(filename, stat_buf.st_ino, stat_buf.st_dev, v25, v18);
      n = v106;
      goto LABEL_168;
    }
    v17 = &v420;
    if ( !(_BYTE)v25 )
    {
      if ( __lxstat(1, filename, &v422) )
        goto LABEL_61;
      v17 = &v422;
    }
    if ( (v17->st_mode & 0xF000) != 40960 || !(unsigned __int8)sub_40AEF0(*(_QWORD *)(v13 + 56), filename, v17) )
    {
LABEL_61:
      if ( *(_BYTE *)(v13 + 46) )
      {
        if ( !*(_BYTE *)(v13 + 24) )
          goto LABEL_63;
        goto LABEL_147;
      }
      goto LABEL_127;
    }
    LODWORD(v33) = sub_40E920(1LL, 4LL, filename);
    v34 = v33;
    LODWORD(v35) = sub_40E920(0LL, 4LL, v12);
    v36 = "will not copy %s through just-created symlink %s";
    v37 = v35;
    goto LABEL_56;
  }
LABEL_127:
  if ( *(_BYTE *)(v13 + 42) && v407 == 0x4000 )
    goto LABEL_129;
LABEL_65:
  if ( !*(_BYTE *)(v13 + 24) )
    goto LABEL_66;
LABEL_149:
  if ( stat_buf.st_nlink != 1 )
  {
    if ( !*(_BYTE *)(v13 + 34) )
    {
      n = 0LL;
      goto LABEL_152;
    }
    goto LABEL_143;
  }
  LODWORD(v148) = sub_4099D0(stat_buf.st_ino, stat_buf.st_dev, v17, v25);
  n = v148;
LABEL_168:
  if ( !n )
    goto LABEL_145;
  if ( v407 != 0x4000 )
  {
    if ( (unsigned __int8)sub_404F50(n, (__int64)filename, 1u, *(_BYTE *)(v13 + 46), (char)ptr) )
      goto LABEL_171;
    goto LABEL_138;
  }
LABEL_132:
  if ( (unsigned __int8)sub_40EF80(v12, n, v77, v78, v79, v80) )
  {
    LODWORD(v194) = sub_40E920(1LL, 4LL, qword_621988);
    v15 = v194;
    LODWORD(v195) = sub_40E920(0LL, 4LL, qword_621990);
    v196 = v195;
    v197 = dcgettext(0LL, "cannot copy a directory, %s, into itself, %s", 5);
    error(0, 0, v197, v196, v15);
    *a10 = 1;
LABEL_138:
    if ( !*(_BYTE *)(v13 + 37) )
      goto LABEL_139;
    goto LABEL_243;
  }
  if ( (unsigned __int8)sub_40EF80(filename, n, v81, v82, v83, v84) )
  {
    LODWORD(v247) = sub_40EA00(4LL, qword_621990);
    v248 = v247;
    v249 = dcgettext(0LL, "warning: source directory %s specified more than once", 5);
    error(0, 0, v249, v248);
    if ( !*(_BYTE *)(v13 + 24) || !LOBYTE(fildes[0]) )
      goto LABEL_171;
    goto LABEL_288;
  }
  v85 = *(_DWORD *)(v13 + 4);
  if ( v85 != 4 && (v85 != 3 || !(_BYTE)a8) )
  {
    LODWORD(v86) = sub_40E920(1LL, 4LL, n);
    v87 = v86;
    LODWORD(v88) = sub_40E920(0LL, 4LL, filename);
    v15 = v88;
    v89 = dcgettext(0LL, "will not create hard link %s to directory %s", 5);
    error(0, 0, v89, v15, v87);
    goto LABEL_138;
  }
LABEL_145:
  if ( !*(_BYTE *)(v13 + 24) )
  {
    fildes[0] = (unsigned __int8)src;
    goto LABEL_68;
  }
LABEL_152:
  if ( !rename(v12, filename) )
  {
    if ( *(_BYTE *)(v13 + 46) )
    {
      v200 = dcgettext(0LL, "renamed ", 5);
      __printf_chk(1LL, v200, v201, v202, v203, v204);
      sub_404D70((__int64)v12, (__int64)filename, (__int64)old);
    }
    if ( *(_BYTE *)(v13 + 33) )
      sub_405620((__int64)filename, 0LL, 1LL, v13);
    if ( a11 )
      *a11 = 1;
    if ( (_BYTE)a8 )
    {
      a7 = a8;
      sub_40AE60(*(_QWORD *)(v13 + 56), filename, v404);
      return (unsigned int)a7;
    }
    goto LABEL_171;
  }
  v97 = __errno_location();
  v98 = v97;
  v99 = *v97;
  if ( v99 == 22 )
  {
    a7 = 1;
    LODWORD(v229) = sub_40E920(1LL, 4LL, qword_621988);
    v230 = v229;
    LODWORD(v231) = sub_40E920(0LL, 4LL, qword_621990);
    v232 = v231;
    v233 = dcgettext(0LL, "cannot move %s to a subdirectory of itself, %s", 5);
    error(0, 0, v233, v232, v230);
    *a10 = 1;
    return (unsigned int)a7;
  }
  if ( v99 != 18 )
  {
    LODWORD(v174) = sub_40E920(1LL, 4LL, filename);
    v161 = v174;
    LODWORD(v175) = sub_40E920(0LL, 4LL, v12);
    v163 = "cannot move %s to %s";
    v164 = v175;
    goto LABEL_259;
  }
  if ( v407 == 0x4000 )
  {
    if ( !rmdir(filename) || *v98 == 2 )
      goto LABEL_159;
    goto LABEL_258;
  }
  if ( unlink(filename) && *v98 != 2 )
  {
LABEL_258:
    LODWORD(v160) = sub_40E920(1LL, 4LL, filename);
    v161 = v160;
    LODWORD(v162) = sub_40E920(0LL, 4LL, v12);
    v163 = "inter-device move failed: %s to %s; unable to remove target";
    v164 = v162;
LABEL_259:
    v165 = dcgettext(0LL, v163, 5);
    error(0, *v98, v165, v164, v161);
    sub_409980(stat_buf.st_ino, stat_buf.st_dev);
    return (unsigned int)a7;
  }
  LOBYTE(src) = *(_BYTE *)(v13 + 46) & (v407 != 0x4000);
  if ( !(_BYTE)src )
  {
LABEL_159:
    fildes[0] = 1;
    LOBYTE(src) = 1;
    goto LABEL_68;
  }
  v224 = dcgettext(0LL, "copied ", 5);
  __printf_chk(1LL, v224, v225, v226, v227, v228);
  sub_404D70((__int64)v12, (__int64)filename, (__int64)old);
  fildes[0] = 1;
LABEL_68:
  v42 = v406 & 0xFFF;
  if ( *(_BYTE *)(v13 + 43) )
    v42 = *(_DWORD *)(v13 + 16) & 0xFFF;
  if ( *(_BYTE *)(v13 + 29) )
  {
    v43 = filename;
    if ( !(unsigned __int8)sub_405550((__int64)v12, (__int64)filename, v406, fildes[0], v13) )
      return (unsigned int)a7;
    LODWORD(s1) = v42 & 0x3F;
    if ( v407 != 0x4000 )
      goto LABEL_73;
LABEL_181:
    v108 = stat_buf.st_ino;
    v109 = stat_buf.st_dev;
    v110 = *(_QWORD *)v402;
    if ( *(_QWORD *)v402 )
    {
      while ( *(_QWORD *)(v110 + 8) != stat_buf.st_ino || *(_QWORD *)(v110 + 16) != stat_buf.st_dev )
      {
        v110 = *(_QWORD *)v110;
        if ( !v110 )
          goto LABEL_203;
      }
      LODWORD(v111) = sub_40EA00(4LL, v12);
      v112 = "cannot copy cyclic symbolic link %s";
      v15 = v111;
      goto LABEL_187;
    }
LABEL_203:
    v119 = (unsigned __int64)&v378 & 0xFFFFFFFFFFFFFFF0LL;
    v46 = (_BYTE)src == 0;
    v396 = v119;
    *(_QWORD *)v119 = *(_QWORD *)v402;
    *(_QWORD *)(v119 + 8) = v108;
    *(_QWORD *)(v119 + 16) = v109;
    if ( v46 && (v420.st_mode & 0xF000) == 0x4000 )
    {
      if ( *(_QWORD *)(v13 + 32) & 0xFF000000FF00LL
        && !(unsigned __int8)sub_405620((__int64)filename, *(_BYTE *)(v13 + 37), 0LL, v13)
        && *(_BYTE *)(v13 + 38) )
      {
        goto LABEL_200;
      }
      v394 = 0;
      LODWORD(s1) = 0;
    }
    else
    {
      if ( mkdir(filename, v42 & ~(_DWORD)s1) )
      {
        LODWORD(v205) = sub_40EA00(4LL, filename);
        v116 = "cannot create directory %s";
        v15 = v205;
        goto LABEL_199;
      }
      if ( __lxstat(1, filename, &v420) )
      {
        LODWORD(v250) = sub_40EA00(4LL, filename);
        v116 = "cannot stat %s";
        v15 = v250;
        goto LABEL_199;
      }
      v122 = v420.st_mode;
      v394 = 0;
      if ( (v420.st_mode & 0x1C0) != 448 )
      {
        v123 = chmod(filename, v420.st_mode | 0x1C0);
        v387 = v122;
        v394 = 1;
        if ( v123 )
        {
          LODWORD(v277) = sub_40EA00(4LL, filename);
          v116 = "setting permissions for %s";
          v15 = v277;
          goto LABEL_199;
        }
      }
      if ( !*a9 )
      {
        sub_409A10(filename, v420.st_ino, v420.st_dev, v120, v121);
        *a9 = 1;
      }
      if ( *(_BYTE *)(v13 + 46) )
      {
        if ( *(_BYTE *)(v13 + 24) )
        {
          LODWORD(v124) = sub_40EA00(4LL, filename);
          v125 = v124;
          v126 = dcgettext(0LL, "created directory %s\n", 5);
          __printf_chk(1LL, v126, v125, v127, v128, v129);
        }
        else
        {
          sub_404D70((__int64)v12, (__int64)filename, 0LL);
        }
      }
    }
    LOBYTE(ptr) = *(_BYTE *)(v13 + 28) & (v400 != 0);
    if ( !(_BYTE)ptr || (LOBYTE(v402[0]) = 0, v52 = 0, *(_QWORD *)v400 == stat_buf.st_dev) )
    {
      v130 = _mm_loadu_si128((const __m128i *)(v13 + 16));
      v131 = _mm_loadu_si128((const __m128i *)(v13 + 32));
      v132 = _mm_loadu_si128((const __m128i *)(v13 + 48));
      v133 = *(_QWORD *)(v13 + 64);
      *(__m128i *)&v422.st_dev = _mm_loadu_si128((const __m128i *)v13);
      *(__m128i *)&v422.st_nlink = v130;
      *(__m128i *)&v422.st_gid = v131;
      *(__m128i *)&v422.st_size = v132;
      v422.st_blocks = v133;
      LODWORD(v134) = sub_40F480(v12, 2LL);
      s = v134;
      if ( v134 )
      {
        if ( *(_DWORD *)(v13 + 4) == 3 )
          HIDWORD(v422.st_dev) = 2;
        if ( *s )
        {
          LOBYTE(v389) = a7;
          v135 = s;
          s2 = (char *)&v421;
          v136 = 0;
          v395 = &v422;
          v388 = v13;
          LOBYTE(ptr) = 1;
          v400 = (__int64)&length;
          *(_QWORD *)v402 = v12;
          v391 = a8;
          do
          {
            LODWORD(v137) = sub_40B0C0(*(_QWORD *)v402, v135, 0LL);
            v138 = v137;
            LODWORD(v139) = sub_40B0C0(filename, v135, 0LL);
            v140 = v139;
            LOBYTE(v421.st_dev) = *a9;
            v141 = sub_405990((_DWORD)v138, (_DWORD)v139, (unsigned int)fildes[0], (__int64)v404, v396);
            LOBYTE(ptr) = v141 & (unsigned __int8)ptr;
            *a10 |= length;
            free(v140);
            free(v138);
            if ( (_BYTE)length )
              break;
            v136 |= LOBYTE(v421.st_dev);
            v135 += strlen(v135) + 1;
          }
          while ( *v135 );
          v142 = v136;
          v12 = *(const char **)v402;
          a7 = (unsigned __int8)v389;
          v13 = v388;
          v15 = v391;
        }
        else
        {
          v142 = 0;
          LOBYTE(ptr) = 1;
        }
        free(s);
        *a9 = v142;
      }
      else
      {
        LODWORD(v274) = sub_40EA00(4LL, v12);
        *(_QWORD *)fildes = v274;
        v275 = dcgettext(0LL, "cannot access %s", 5);
        v276 = __errno_location();
        error(0, *v276, v275, *(_QWORD *)fildes);
        LOBYTE(ptr) = 0;
      }
      LOBYTE(v402[0]) = 0;
      v52 = 0;
    }
    goto LABEL_82;
  }
  if ( v407 == 0x4000 )
  {
    if ( !(unsigned __int8)sub_405550((__int64)v12, (__int64)filename, v406, fildes[0], v13) )
      return (unsigned int)a7;
    LODWORD(s1) = v42 & 0x12;
    goto LABEL_181;
  }
  v43 = filename;
  v44 = sub_405550((__int64)v12, (__int64)filename, v406, fildes[0], v13);
  LODWORD(s1) = 0;
  if ( !v44 )
    return (unsigned int)a7;
LABEL_73:
  LOBYTE(v402[0]) = *(_BYTE *)(v13 + 44);
  if ( LOBYTE(v402[0]) )
  {
    if ( *v12 == 47 )
    {
LABEL_80:
      if ( sub_409FD0(v12, 4294967196LL, filename, *(_BYTE *)(v13 + 22)) < 0 )
      {
        LODWORD(v234) = sub_40E920(1LL, 4LL, v12);
        v15 = v234;
        LODWORD(v235) = sub_40E920(0LL, 4LL, filename);
        v236 = v235;
        v237 = dcgettext(0LL, "cannot create symbolic link %s to %s", 5);
        v238 = __errno_location();
        error(0, *v238, v237, v236, v15);
        goto LABEL_200;
      }
      v394 = 0;
      v52 = 0;
      LOBYTE(ptr) = v402[0];
      goto LABEL_82;
    }
    LODWORD(v47) = sub_40AC60(filename, v43);
    v48 = ".";
    v49 = 2LL;
    v50 = v47;
    v51 = v47;
    do
    {
      if ( !v49 )
        break;
      v45 = (const unsigned __int8)*v48 < *v50;
      v46 = *v48++ == *v50++;
      --v49;
    }
    while ( v46 );
    if ( (!v45 && !v46) == v45
      || __xstat(1, ".", &v421)
      || __xstat(1, (const char *)v51, &v422)
      || v421.st_ino == v422.st_ino && v421.st_dev == v422.st_dev )
    {
      free(v51);
      goto LABEL_80;
    }
    free(v51);
    LODWORD(v199) = sub_40EAD0(0LL, 3LL, filename, v198);
    v112 = "%s: can make relative symbolic links only in current directory";
    v15 = v199;
LABEL_187:
    v113 = dcgettext(0LL, v112, 5);
    error(0, 0, v113, v15);
    goto LABEL_200;
  }
  v394 = *(_BYTE *)(v13 + 23);
  if ( v394 )
  {
    v159 = sub_404F50((__int64)v12, (__int64)filename, *(_BYTE *)(v13 + 22), 0, (char)ptr);
    v52 = 0;
    v394 = 0;
    LOBYTE(ptr) = v159;
    if ( !v159 )
      goto LABEL_200;
LABEL_82:
    v53 = v407 != 0x4000;
    if ( !(_BYTE)src && *(_BYTE *)(v13 + 20) != 1 && v53 )
    {
      if ( *(_QWORD *)(v13 + 32) & 0xFF000000FF00LL )
      {
        v54 = *(_BYTE *)(v13 + 37);
        LOBYTE(fildes[0]) = v52;
        v55 = sub_405620((__int64)filename, v54, 0LL, v13);
        v52 = fildes[0];
        if ( !v55 )
        {
          if ( *(_BYTE *)(v13 + 38) )
            goto LABEL_200;
        }
      }
    }
    if ( (_BYTE)v15 )
    {
      if ( *(_QWORD *)(v13 + 56) )
      {
        LOBYTE(fildes[0]) = v52;
        v56 = __lxstat(1, filename, &v422);
        v52 = fildes[0];
        if ( !v56 )
        {
          sub_40AE60(*(_QWORD *)(v13 + 56), filename, &v422);
          v52 = fildes[0];
        }
      }
    }
    if ( *(_BYTE *)(v13 + 23) && v53 || v52 )
      goto LABEL_178;
    if ( *(_BYTE *)(v13 + 31) )
    {
      v422.st_dev = stat_buf.st_atim.tv_sec;
      v422.st_ino = stat_buf.st_atim.tv_nsec;
      v422.st_nlink = stat_buf.st_mtim.tv_sec;
      *(_QWORD *)&v422.st_mode = stat_buf.st_mtim.tv_nsec;
      if ( !LOBYTE(v402[0]) )
      {
        if ( !(unsigned int)sub_410AA0(filename) )
        {
LABEL_101:
          if ( !*(_BYTE *)(v13 + 29) || !(_BYTE)src && stat_buf.st_uid == v420.st_uid && stat_buf.st_gid == v420.st_gid )
            goto LABEL_108;
          v61 = sub_405770(v13, filename, -1, (__int64)v404, (char)src, (__int64)&v420);
          if ( v61 != -1 )
          {
            v62 = v406;
            BYTE1(v62) &= 0xF1u;
            if ( v61 )
              v62 = v406;
            v406 = v62;
LABEL_108:
            if ( !(*(_QWORD *)(v13 + 24) & 0xFF0000000000FFLL) )
            {
              if ( *(_BYTE *)(v13 + 43) )
              {
                v244 = *(_DWORD *)(v13 + 16);
              }
              else
              {
                if ( !*(_BYTE *)(v13 + 32) )
                {
                  if ( (_DWORD)s1 && (LODWORD(s1) = ~(unsigned int)sub_405960() & (unsigned int)s1, (_DWORD)s1) )
                  {
                    if ( v394 != 1 )
                    {
                      if ( (_BYTE)src && __lxstat(1, filename, &v420) )
                      {
                        v19 = filename;
                        goto LABEL_121;
                      }
                      v387 = v420.st_mode;
                      if ( !(~v420.st_mode & (unsigned int)s1) )
LABEL_178:
                        return (unsigned __int8)ptr;
                    }
                  }
                  else if ( !v394 )
                  {
                    goto LABEL_178;
                  }
                  if ( !chmod(filename, (unsigned int)s1 | v387) )
                    goto LABEL_178;
                  LODWORD(v63) = sub_40EA00(4LL, filename);
                  v64 = v63;
                  v65 = dcgettext(0LL, "preserving permissions for %s", 5);
                  v66 = __errno_location();
                  error(0, *v66, v65, v64);
LABEL_115:
                  v67 = (unsigned __int8)ptr;
                  if ( *(_BYTE *)(v13 + 36) )
                    v67 = a7;
                  return (unsigned int)v67;
                }
                v244 = ~(unsigned __int16)sub_405960() & 0x1FF;
              }
              v46 = sub_40A160(filename, 0xFFFFFFFFLL, v244) == 0;
              v245 = (unsigned __int8)ptr;
              if ( !v46 )
                v245 = a7;
              return (unsigned int)v245;
            }
            if ( !sub_40A0D0(v12, 0xFFFFFFFFLL, filename, 0xFFFFFFFFLL, v406) )
              goto LABEL_178;
            goto LABEL_115;
          }
LABEL_58:
          return 0;
        }
        goto LABEL_99;
      }
      if ( (unsigned int)sub_410AB0(filename) && *__errno_location() != 38 )
      {
LABEL_99:
        LODWORD(v57) = sub_40EA00(4LL, filename);
        v58 = v57;
        v59 = dcgettext(0LL, "preserving times for %s", 5);
        v60 = __errno_location();
        error(0, *v60, v59, v58);
        if ( *(_BYTE *)(v13 + 36) )
          goto LABEL_58;
        goto LABEL_100;
      }
    }
LABEL_100:
    if ( LOBYTE(v402[0]) )
      goto LABEL_178;
    goto LABEL_101;
  }
  if ( v407 != 0x8000 && !(*(_BYTE *)(v13 + 20) & (v407 != 40960)) )
  {
    LOBYTE(fildes[0]) = 0;
    if ( v407 == 4096 )
    {
      v422.st_dev = 0LL;
      v253 = v406 & ~(_DWORD)s1;
      v254 = __xmknod(0, filename, v406 & ~(_DWORD)s1, &v422.st_dev);
      v52 = fildes[0];
      if ( !v254 || (v280 = mkfifo(filename, v253 & 0xFFFFEFFF), v52 = fildes[0], !v280) )
      {
        LOBYTE(v402[0]) = v52;
        v394 = v52;
        LOBYTE(ptr) = 1;
        goto LABEL_82;
      }
      LODWORD(v281) = sub_40EA00(4LL, filename);
      v116 = "cannot create fifo %s";
      v15 = v281;
      goto LABEL_199;
    }
    LOBYTE(ptr) = v407 == 49152 || (v406 & 0xB000) == 0x2000;
    if ( (_BYTE)ptr )
    {
      v422.st_dev = stat_buf.st_rdev;
      v114 = __xmknod(0, filename, v406 & ~(_DWORD)s1, &v422.st_dev);
      v52 = fildes[0];
      LOBYTE(v402[0]) = fildes[0];
      v394 = fildes[0];
      if ( !v114 )
        goto LABEL_82;
      LODWORD(v115) = sub_40EA00(4LL, filename);
      v116 = "cannot create special file %s";
      v15 = v115;
LABEL_199:
      v117 = dcgettext(0LL, v116, 5);
      v118 = __errno_location();
      error(0, *v118, v117, v15);
      goto LABEL_200;
    }
    if ( v407 != 40960 )
    {
      LODWORD(v258) = sub_40EA00(4LL, v12);
      v112 = "%s has unknown file type";
      v15 = v258;
      goto LABEL_187;
    }
    v239 = sub_40A1C0((char *)v12);
    v240 = (const char *)v239;
    if ( !v239 )
    {
      LODWORD(v308) = sub_40EA00(4LL, v12);
      v116 = "cannot read symbolic link %s";
      v15 = v308;
      goto LABEL_199;
    }
    if ( sub_409FD0(v239, 4294967196LL, filename, *(_BYTE *)(v13 + 22)) < 0 )
    {
      fildes[0] = *__errno_location();
      if ( fildes[0] )
      {
        if ( *(_BYTE *)(v13 + 45) == 1 && !(_BYTE)src && (v420.st_mode & 0xF000) == 40960 )
        {
          v350 = -1LL;
          v351 = v240;
          do
          {
            if ( !v350 )
              break;
            v46 = *v351++ == (_BYTE)src;
            --v350;
          }
          while ( !v46 );
          if ( v420.st_size == ~v350 - 1 )
          {
            v352 = (void *)sub_40A1C0(filename);
            if ( v352 )
            {
              ptr = v352;
              if ( !strcmp((const char *)v352, v240) )
              {
                free(ptr);
                goto LABEL_380;
              }
              free(ptr);
            }
          }
        }
        free((void *)v240);
        LODWORD(v282) = sub_40EA00(4LL, filename);
        v283 = v282;
        v284 = dcgettext(0LL, "cannot create symbolic link %s", 5);
        error(0, fildes[0], v284, v283);
        goto LABEL_200;
      }
    }
LABEL_380:
    free((void *)v240);
    v394 = *(_BYTE *)(v13 + 37);
    if ( !v394 )
    {
      v52 = *(_BYTE *)(v13 + 29);
      if ( v52 )
      {
        LOBYTE(fildes[0]) = *(_BYTE *)(v13 + 29);
        if ( lchown(filename, stat_buf.st_uid, stat_buf.st_gid) )
        {
          LOBYTE(v402[0]) = sub_405740(v13);
          if ( LOBYTE(v402[0]) )
          {
            v52 = 0;
            LOBYTE(ptr) = v402[0];
          }
          else
          {
            v348 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
            v349 = __errno_location();
            error(0, *v349, v348, filename);
            v394 = *(_BYTE *)(v13 + 36);
            if ( v394 )
              goto LABEL_200;
            LOBYTE(v402[0]) = fildes[0];
            LOBYTE(ptr) = fildes[0];
            v52 = 0;
          }
        }
        else
        {
          LOBYTE(v402[0]) = fildes[0];
          LOBYTE(ptr) = fildes[0];
          v52 = 0;
        }
      }
      else
      {
        v394 = 0;
        LOBYTE(v402[0]) = 1;
        LOBYTE(ptr) = 1;
      }
      goto LABEL_82;
    }
LABEL_243:
    sub_404D30();
    goto LABEL_244;
  }
  v176 = *(_DWORD *)(v13 + 4) == 2;
  LODWORD(v396) = stat_buf.st_mode;
  LOBYTE(s2) = *(_BYTE *)(v13 + 35);
  fildes[0] = sub_40AE10((char)v12);
  if ( fildes[0] < 0 )
  {
    LODWORD(v251) = sub_40EA00(4LL, v12);
    v116 = "cannot open %s for reading";
    v15 = v251;
    goto LABEL_199;
  }
  if ( __fxstat(1, fildes[0], &v421) )
  {
    LODWORD(v271) = sub_40EA00(4LL, v12);
    ptr = v271;
    v272 = dcgettext(0LL, "cannot fstat %s", 5);
    v273 = __errno_location();
    v186 = ptr;
    v188 = v272;
    v187 = *v273;
    goto LABEL_306;
  }
  if ( stat_buf.st_ino != v421.st_ino || stat_buf.st_dev != v421.st_dev )
  {
    LODWORD(v241) = sub_40EA00(4LL, v12);
    v242 = v241;
    v243 = dcgettext(0LL, "skipping file %s, as it was replaced while being copied", 5);
    v186 = v242;
    v187 = 0;
    v188 = v243;
    goto LABEL_306;
  }
  v384 = v42 & 0x1FF;
  if ( (_BYTE)src )
    goto LABEL_444;
  v177 = filename;
  v178 = *(_BYTE *)(v13 + 35) < 1u ? 1 : 513;
  v179 = sub_40AE10((char)filename);
  v402[0] = v179;
  if ( *(_QWORD *)(v13 + 32) & 0xFF000000FF00LL )
  {
    if ( v179 < 0 )
    {
LABEL_298:
      v180 = __errno_location();
      v181 = v180;
      if ( !*(_BYTE *)(v13 + 22) )
      {
        v183 = *v180;
        if ( *v180 != 2 || *(_BYTE *)(v13 + 24) )
        {
          LOBYTE(src) = 0;
          goto LABEL_305;
        }
        v386 = 0;
        goto LABEL_303;
      }
      if ( unlink(filename) )
      {
        LODWORD(v365) = sub_40EA00(4LL, filename);
        ptr = v365;
        v366 = dcgettext(0LL, "cannot remove %s", 5);
        v186 = ptr;
        v187 = *v181;
        v188 = v366;
        goto LABEL_306;
      }
      if ( *(_BYTE *)(v13 + 46) )
      {
        LODWORD(v355) = sub_40EA00(4LL, filename);
        v356 = v355;
        v357 = dcgettext(0LL, "removed %s\n", 5);
        __printf_chk(1LL, v357, v356, v358, v359, v360);
      }
      LOBYTE(src) = *(_BYTE *)(v13 + 33);
      v386 = (signed int)s1;
      if ( !(_BYTE)src )
      {
LABEL_303:
        LODWORD(ptr) = v384 & ~v386;
        v402[0] = sub_40AE10((char)filename);
        v182 = __errno_location();
        v183 = *v182;
        v400 = (__int64)v182;
        LOBYTE(v395) = ((unsigned int)v402[0] >> 31) & (v183 == 17);
        if ( (_BYTE)v395 )
        {
          v183 = 17;
          LOBYTE(src) = *(_BYTE *)(v13 + 24);
          if ( (_BYTE)src )
            goto LABEL_305;
          if ( !__lxstat(1, filename, &v422) && (v422.st_mode & 0xF000) == 40960 )
          {
            if ( !*(_BYTE *)(v13 + 48) )
            {
              LOBYTE(v402[0]) = 0;
              LODWORD(v375) = sub_40EA00(4LL, filename);
              v376 = v375;
              v377 = dcgettext(0LL, "not writing through dangling symlink %s", 5);
              error(0, 0, v377, v376);
              ptr = 0LL;
              v189 = v402[0];
              LOBYTE(src) = (_BYTE)v395;
              goto LABEL_307;
            }
            v402[0] = sub_40AE10((char)filename);
            v183 = *(_DWORD *)v400;
          }
        }
        LOBYTE(src) = ((unsigned int)v402[0] >> 31) & (v183 == 21);
        if ( (_BYTE)src )
        {
          v183 = 21;
          if ( *filename )
            v183 = (filename[strlen(filename) - 1] != 47) + 20;
          goto LABEL_305;
        }
        LOBYTE(src) = 1;
        if ( v402[0] < 0 )
        {
LABEL_305:
          LODWORD(v184) = sub_40EA00(4LL, filename);
          ptr = v184;
          v185 = dcgettext(0LL, "cannot create regular file %s", 5);
          v186 = ptr;
          v187 = v183;
          v188 = v185;
LABEL_306:
          error(0, v187, v188, v186);
          v189 = 0;
          ptr = 0LL;
          goto LABEL_307;
        }
        goto LABEL_461;
      }
      v189 = sub_405550((__int64)v12, (__int64)filename, (unsigned int)v384, 1u, v13);
      if ( !v189 )
      {
        ptr = 0LL;
        goto LABEL_307;
      }
LABEL_444:
      v386 = (signed int)s1;
      goto LABEL_303;
    }
    v303 = sub_405620((__int64)v177, *(_BYTE *)(v13 + 37), 0LL, v13);
    if ( !v303 )
    {
      LOBYTE(src) = *(_BYTE *)(v13 + 38);
      if ( (_BYTE)src )
      {
        LOBYTE(src) = 0;
        ptr = 0LL;
        goto LABEL_493;
      }
    }
  }
  else if ( v402[0] < 0 )
  {
    goto LABEL_298;
  }
  v386 = 0;
LABEL_461:
  v395 = &v422;
  LODWORD(v400) = __fxstat(1, v402[0], &v422);
  if ( (_DWORD)v400 )
  {
    LODWORD(v315) = sub_40EA00(4LL, filename);
    ptr = v315;
    v316 = dcgettext(0LL, "cannot fstat %s", 5);
    v317 = __errno_location();
    error(0, *v317, v316, ptr);
    v303 = 0;
    ptr = 0LL;
    goto LABEL_493;
  }
  if ( !(_BYTE)s2 )
    goto LABEL_626;
  if ( !*(_DWORD *)(v13 + 52) )
    goto LABEL_464;
  if ( !ioctl(v402[0], 0x40049409uLL, (unsigned int)fildes[0]) )
  {
LABEL_626:
    ptr = 0LL;
    goto LABEL_480;
  }
  if ( *(_DWORD *)(v13 + 52) == 2 )
  {
    LODWORD(v344) = sub_40E920(1LL, 4LL, v12);
    v400 = v344;
    LODWORD(v345) = sub_40E920(0LL, 4LL, filename);
    v346 = v345;
    ptr = dcgettext(0LL, "failed to clone %s from %s", 5);
    v347 = __errno_location();
    error(0, *v347, (const char *)ptr, v346, v400);
    v303 = 0;
    ptr = 0LL;
    goto LABEL_493;
  }
LABEL_464:
  v293 = getpagesize();
  v388 = v422.st_blksize;
  s = (char *)v422.st_blksize;
  if ( (unsigned __int64)(v422.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
  {
    s = (char *)0x20000;
    v294 = 512LL;
    if ( (unsigned __int64)(v388 - 1) <= 0x1FFFFFFFFFFFFFFFLL )
      v294 = v388;
    v388 = v294;
  }
  j__posix_fadvise(fildes[0], 0LL, 0LL, 2);
  if ( (v421.st_mode & 0xF000) == 0x8000 )
  {
    *(_QWORD *)&v295 = v421.st_size;
    *((_QWORD *)&v295 + 1) = (unsigned __int128)v421.st_size >> 64;
    LODWORD(v400) = v421.st_blocks < (signed __int64)(v295 / 512);
  }
  ptr = (void *)(v293 - 1);
  if ( (v422.st_mode & 0xF000) != 0x8000 )
    goto LABEL_471;
  v342 = *(_DWORD *)(v13 + 12);
  if ( v342 == 3 )
  {
    LODWORD(v353) = sub_4112E0(&s[v293], 0LL);
    ptr = v353;
    v300 = ((unsigned __int64)v353 + v293 - 1) % v293;
    v385 = (char *)v353 + v293 - v300 - 1;
    if ( !(_DWORD)v400 )
    {
      v301 = *(_DWORD *)(v13 + 12) == 3;
      v400 = (__int64)&length;
      goto LABEL_478;
    }
  }
  else
  {
    if ( v342 != 2 || !(v400 & 1) )
    {
LABEL_471:
      v296 = v421.st_blksize;
      LODWORD(v389) = v421.st_mode & 0xF000;
      ptr = (void *)(0x7FFFFFFFFFFFFFFFLL - v293);
      if ( (unsigned __int64)(v421.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
        v296 = 0x20000LL;
      LODWORD(v297) = sub_40A980(v296, s, 0x7FFFFFFFFFFFFFFFLL - v293);
      if ( (_DWORD)v389 == 0x8000 && (unsigned __int64)s > v421.st_size )
        s = (char *)(v421.st_size + 1);
      v298 = &s[v297 - 1] - (unsigned __int64)&s[v297 - 1] % v297;
      s = v298;
      if ( !v298 || ptr < v298 )
        s = (char *)v297;
      LODWORD(v299) = sub_4112E0(&s[v293], v298);
      ptr = v299;
      v300 = ((unsigned __int64)v299 + v293 - 1) % v293;
      v385 = (char *)v299 + v293 - v300 - 1;
      if ( !(_DWORD)v400 )
      {
        v46 = *(_DWORD *)(v13 + 12) == 3;
        v388 = 0LL;
        v400 = (__int64)&length;
        v301 = v46;
LABEL_478:
        v379 = v300;
        if ( !(unsigned __int8)sub_405120(
                                 v385,
                                 (size_t)s,
                                 v11,
                                 fildes[0],
                                 v402[0],
                                 v388,
                                 v301,
                                 (__int64)v12,
                                 (__int64)filename,
                                 0xFFFFFFFFFFFFFFFFLL,
                                 (_QWORD *)v400,
                                 &v411) )
          goto LABEL_516;
        if ( !(_BYTE)v411 || ftruncate(v402[0], length) >= 0 )
          goto LABEL_480;
        goto LABEL_605;
      }
      v392 = 0;
      v391 = 1;
      goto LABEL_532;
    }
    LODWORD(v343) = sub_4112E0(&s[v293], 0LL);
    ptr = v343;
    v385 = (char *)v343 + v293 - ((unsigned __int64)v343 + v293 - 1) % v293 - 1;
  }
  v391 = *(_DWORD *)(v13 + 12);
  v392 = (char)s2;
LABEL_532:
  v319 = 0LL;
  v400 = (__int64)&length;
  v380 = v421.st_size;
  sub_409AE0((unsigned int)fildes[0], &length);
  v383 = a8;
  v320 = 0LL;
  v382 = v13;
  v321 = (char *)v380;
  v393 = a7;
  v322 = (char)s2;
  v389 = v12;
  v323 = 0LL;
  do
  {
    s2 = v320;
    v324 = sub_409B10(v400);
    v320 = s2;
    if ( !v324 )
    {
      LOBYTE(s2) = v322;
      v12 = v389;
      a7 = v393;
      v13 = v382;
      v15 = v383;
      if ( v417 )
        goto LABEL_558;
      if ( !v416 )
      {
        LODWORD(v374) = sub_40EAD0(0LL, 3LL, v389, v320);
        v334 = "%s: failed to get extents info";
        v400 = v374;
        goto LABEL_566;
      }
      v372 = 0LL;
      v301 = *(_DWORD *)(v382 + 12) == 3;
      if ( v392 )
        v372 = v388;
      v388 = v372;
      goto LABEL_478;
    }
    if ( !v415 )
      goto LABEL_556;
    v325 = v323;
    v326 = v319;
    v327 = 0;
    v328 = 0LL;
    while ( 1 )
    {
      v330 = (char *)v418 + 24 * v328;
      v319 = *(_QWORD *)v330;
      v323 = *((_QWORD *)v330 + 1);
      if ( (signed __int64)v321 < (signed __int64)(*(_QWORD *)v330 + v323) )
      {
        if ( v319 > (signed __int64)v321 )
          v319 = (__off_t)v321;
        v323 = (size_t)&v321[-v319];
      }
      v322 = 0;
      if ( v319 - v326 != v325 )
      {
        s2 = (char *)(v319 - v326 - v325);
        if ( lseek(fildes[0], v319, 0) < 0 )
        {
          v12 = v389;
          a7 = v393;
          v13 = v382;
          v15 = v383;
          LODWORD(v361) = sub_40EA00(4LL, v389);
          v362 = "cannot lseek %s";
          v400 = v361;
        }
        else
        {
          if ( v391 != 1 )
          {
            v322 = sub_405060(v402[0], (__int64)filename, v391 == 3, (__off_t)s2);
            if ( !v322 )
            {
LABEL_551:
              a7 = v393;
              v12 = v389;
              v13 = v382;
              v15 = v383;
LABEL_552:
              free(v418);
              goto LABEL_516;
            }
            goto LABEL_536;
          }
          if ( (unsigned __int8)sub_404C20(v402[0], (size_t)s2) )
          {
            v329 = 0LL;
            goto LABEL_538;
          }
          a7 = v393;
          v12 = v389;
          v13 = v382;
          v15 = v383;
          LODWORD(v373) = sub_40EAD0(0LL, 3LL, filename, v331);
          v362 = "%s: write failed";
          v400 = v373;
        }
        v363 = dcgettext(0LL, v362, 5);
        v364 = __errno_location();
        error(0, *v364, v363, v400);
        goto LABEL_552;
      }
LABEL_536:
      v329 = 0LL;
      if ( v391 == 3 )
        v329 = v388;
LABEL_538:
      if ( !(unsigned __int8)sub_405120(
                               v385,
                               (size_t)s,
                               v11,
                               fildes[0],
                               v402[0],
                               v329,
                               1,
                               (__int64)v389,
                               (__int64)filename,
                               v323,
                               &v411,
                               &v410) )
        goto LABEL_551;
      v320 = (char *)(v319 + v411);
      if ( v411 )
        v322 = v410;
      if ( v321 == v320 )
        break;
      v326 = v319;
      v325 = v323;
      v328 = ++v327;
      if ( v327 >= (unsigned __int64)v415 )
        goto LABEL_556;
    }
    v417 = 1;
LABEL_556:
    s2 = v320;
    free(v418);
    v418 = 0LL;
    v415 = 0LL;
    v320 = s2;
  }
  while ( !v417 );
  LOBYTE(s2) = v322;
  v12 = v389;
  a7 = v393;
  v13 = v382;
  v15 = v383;
LABEL_558:
  v332 = v380 > (signed __int64)v320;
  if ( v380 <= (signed __int64)v320 && !(_BYTE)s2 )
    goto LABEL_480;
  if ( v391 == 1 )
  {
    if ( (unsigned __int8)sub_404C20(v402[0], v380 - (_QWORD)v320) )
      goto LABEL_480;
    goto LABEL_605;
  }
  v400 = (__int64)v320;
  if ( ftruncate(v402[0], v380) )
  {
LABEL_605:
    LODWORD(v354) = sub_40EA00(4LL, filename);
    v334 = "failed to extend %s";
    v400 = v354;
LABEL_566:
    v335 = dcgettext(0LL, v334, 5);
    v336 = __errno_location();
    error(0, *v336, v335, v400);
    goto LABEL_516;
  }
  if ( v391 == 3 && v332 && (signed int)sub_404CD0(v402[0], v400, v380 - v400) < 0 )
  {
    LODWORD(v333) = sub_40EA00(4LL, filename);
    v334 = "error deallocating %s";
    v400 = v333;
    goto LABEL_566;
  }
LABEL_480:
  if ( !*(_BYTE *)(v13 + 31)
    || (length = stat_buf.st_atim.tv_sec,
        v413 = stat_buf.st_atim.tv_nsec,
        v414 = stat_buf.st_mtim.tv_sec,
        v415 = stat_buf.st_mtim.tv_nsec,
        !(unsigned int)sub_410660(v402[0], filename))
    || (LODWORD(v310) = sub_40EA00(4LL, filename),
        v400 = v310,
        v311 = dcgettext(0LL, "preserving times for %s", 5),
        v312 = __errno_location(),
        error(0, *v312, v311, v400),
        !*(_BYTE *)(v13 + 36)) )
  {
    if ( *(_BYTE *)(v13 + 29) && (stat_buf.st_uid != v422.st_uid || stat_buf.st_gid != v422.st_gid) )
    {
      v302 = sub_405770(v13, filename, v402[0], (__int64)v404, (char)src, (__int64)v395);
      if ( v302 == -1 )
        goto LABEL_516;
      if ( !v302 )
        LODWORD(v396) = v396 & 0xFFFFF1FF;
    }
    if ( *(_BYTE *)(v13 + 39) && !(v422.st_mode & 0x80) && geteuid() && !sub_404D10(v402[0], filename, 0x180u) )
      sub_404D10(v402[0], filename, v384 & ~v386);
    if ( !(*(_QWORD *)(v13 + 24) & 0xFF0000000000FFLL) )
    {
      if ( *(_BYTE *)(v13 + 43) )
      {
        v337 = *(_DWORD *)(v13 + 16);
      }
      else
      {
        if ( !*(_BYTE *)(v13 + 32) )
        {
          v303 = 1;
          if ( !v386 )
            goto LABEL_493;
          LOBYTE(v400) = 1;
          v367 = sub_405960();
          v303 = v400;
          if ( !(~v367 & v386) )
            goto LABEL_493;
          v368 = sub_404D10(v402[0], filename, v384);
          v303 = v400;
          if ( !v368 )
            goto LABEL_493;
          LODWORD(v369) = sub_40EA00(4LL, filename);
          v400 = v369;
          v370 = dcgettext(0LL, "preserving permissions for %s", 5);
          v371 = __errno_location();
          error(0, *v371, v370, v400);
          goto LABEL_526;
        }
        v337 = ~(unsigned __int16)sub_405960() & 0x1B6;
      }
      v303 = sub_40A160(filename, (unsigned int)v402[0], v337) == 0;
      goto LABEL_493;
    }
    v318 = sub_40A0D0(v12, (unsigned int)fildes[0], filename, (unsigned int)v402[0], (unsigned int)v396);
    v303 = 1;
    if ( !v318 )
      goto LABEL_493;
LABEL_526:
    v303 = *(_BYTE *)(v13 + 36) ^ 1;
    goto LABEL_493;
  }
LABEL_516:
  v303 = 0;
LABEL_493:
  LOBYTE(v400) = v303;
  v304 = close(v402[0]);
  v189 = v400;
  if ( v304 < 0 )
  {
    LODWORD(v305) = sub_40EA00(4LL, filename);
    *(_QWORD *)v402 = v305;
    v306 = dcgettext(0LL, "failed to close %s", 5);
    v307 = __errno_location();
    error(0, *v307, v306, *(_QWORD *)v402);
    v189 = 0;
  }
LABEL_307:
  LOBYTE(v402[0]) = v189;
  if ( close(fildes[0]) < 0 )
  {
    LODWORD(v262) = sub_40EA00(4LL, v12);
    v15 = v262;
    v263 = dcgettext(0LL, "failed to close %s", 5);
    v264 = __errno_location();
    error(0, *v264, v263, v15);
    free(ptr);
    goto LABEL_200;
  }
  LOBYTE(fildes[0]) = v402[0];
  free(ptr);
  v52 = fildes[0];
  LOBYTE(v402[0]) = 0;
  LOBYTE(ptr) = fildes[0];
  if ( LOBYTE(fildes[0]) )
    goto LABEL_82;
LABEL_200:
  if ( *(_BYTE *)(v13 + 37) )
    goto LABEL_243;
  if ( !n )
    sub_409980(stat_buf.st_ino, stat_buf.st_dev);
LABEL_139:
  if ( old )
  {
    if ( rename(old, filename) )
    {
      LODWORD(v170) = sub_40EA00(4LL, filename);
      v171 = v170;
      v172 = dcgettext(0LL, "cannot un-backup %s", 5);
      v173 = __errno_location();
      error(0, *v173, v172, v171);
    }
    else if ( *(_BYTE *)(v13 + 46) )
    {
      LODWORD(v90) = sub_40E920(1LL, 4LL, filename);
      v91 = v90;
      LODWORD(v92) = sub_40E920(0LL, 4LL, old);
      v93 = v92;
      v94 = dcgettext(0LL, "%s -> %s (unbackup)\n", 5);
      __printf_chk(1LL, v94, v93, v91, v95, v96);
    }
  }
  return (unsigned int)a7;
}

__int64 __usercall sub_409810@<rax>(unsigned __int8 a1@<dl>, __int64 a2@<rcx>, const char *a3@<rdi>, char *a4@<rsi>, _BYTE *a5@<r8>, _BYTE *a6@<r9>, signed int a7@<r15d>)
{
  int v7; // eax@3
  unsigned int v8; // er10@4
  char v10; // [sp+Fh] [bp-9h]@8

  if ( !a2 )
    __assert_fail("co != NULL", "src/copy.c", 0xB60u, "valid_options");
  if ( *(_DWORD *)a2 > 3u )
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 0xB61u, "valid_options");
  v7 = *(_DWORD *)(a2 + 12);
  if ( (unsigned int)(v7 - 1) > 2 )
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 0xB62u, "valid_options");
  v8 = *(_DWORD *)(a2 + 52);
  if ( v8 > 2 )
    __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 0xB63u, "valid_options");
  if ( *(_BYTE *)(a2 + 23) && *(_BYTE *)(a2 + 44) )
    __assert_fail("!(co->hard_link && co->symbolic_link)", "src/copy.c", 0xB64u, "valid_options");
  if ( v7 != 2 && v8 == 2 )
    __assert_fail(
      "! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
      "src/copy.c",
      0xB67u,
      "valid_options");
  v10 = 0;
  qword_621990 = (__int64)a3;
  qword_621988 = (__int64)a4;
  return sub_405990(a1, 0LL, a3, a4, 0LL, a2, a7, 1u, &v10, a5, a6);
}

void __fastcall sub_409960(__int64 a1)
{
  free(*(void **)(a1 + 16));
  free((void *)a1);
}

void __fastcall sub_409980(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  void *v3; // rbx@2
  __int64 v4; // [sp+0h] [bp-28h]@1
  __int64 v5; // [sp+8h] [bp-20h]@1
  __int64 v6; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v5 = a2;
  v6 = 0LL;
  LODWORD(v2) = sub_40C330(qword_621998, &v4);
  if ( v2 )
  {
    v3 = (void *)v2;
    free(*(void **)(v2 + 16));
    free(v3);
  }
}

__int64 __fastcall sub_4099D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  __int64 result; // rax@2
  __int64 v4; // [sp+0h] [bp-28h]@1
  __int64 v5; // [sp+8h] [bp-20h]@1

  v4 = a1;
  v5 = a2;
  LODWORD(v2) = sub_40B8E0(qword_621998, &v4);
  if ( v2 )
    result = *(_QWORD *)(v2 + 16);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_409A10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1
  __int64 v4; // rax@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@1
  __int64 v7; // rdi@1
  __int64 v8; // rax@1
  __int64 v9; // rbp@2
  __int64 result; // rax@2

  v3 = a3;
  LODWORD(v4) = sub_4112E0(24LL, a2);
  v5 = v4;
  LODWORD(v6) = sub_411510(a1);
  v7 = qword_621998;
  *(_QWORD *)v5 = a2;
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 8) = v3;
  LODWORD(v8) = sub_40C2F0(v7, v5);
  if ( !v8 )
    sub_411530();
  v9 = v8;
  result = 0LL;
  if ( v5 != v9 )
  {
    free(*(void **)(v5 + 16));
    free((void *)v5);
    result = *(_QWORD *)(v9 + 16);
  }
  return result;
}

int sub_409A90()
{
  __int64 v0; // rax@1

  LODWORD(v0) = sub_40BB50(103LL, 0LL, sub_409930, sub_409940, sub_409960);
  qword_621998 = v0;
  if ( !v0 )
    sub_411530(103LL, 0LL);
  return v0;
}

__int64 __fastcall sub_409AE0(int a1, __int64 a2)
{
  __int64 result; // rax@1

  result = 0LL;
  *(_DWORD *)a2 = a1;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_WORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 16) = 1;
  return result;
}

bool __fastcall sub_409B10(__int64 a1)
{
  unsigned int v1; // er13@1
  __int64 v2; // r12@1
  signed __int64 v3; // rbx@1
  __int64 v4; // rdx@1
  int v5; // eax@2
  int v6; // edi@2
  unsigned __int64 v7; // rcx@4
  __int64 v8; // rdi@5
  unsigned __int64 v9; // rcx@5
  signed __int64 v10; // rbx@5
  __int64 v11; // rax@7
  unsigned int v12; // er8@7
  unsigned __int64 v13; // rax@8
  unsigned __int64 v14; // rdx@8
  unsigned int v15; // edi@9
  __int64 *v16; // rcx@9
  int v17; // er9@11
  __int64 v18; // r10@11
  unsigned __int64 v19; // rsi@11
  __int64 v20; // rcx@20
  char v21; // al@22
  __int64 v22; // rax@24
  __int64 v23; // rdx@24
  bool result; // al@25
  bool v25; // zf@36
  __int64 vars0; // [sp+0h] [bp+0h]@2
  __int64 vars8; // [sp+8h] [bp+8h]@2
  int vars10; // [sp+10h] [bp+10h]@2
  unsigned int vars14; // [sp+14h] [bp+14h]@3
  int vars18; // [sp+18h] [bp+18h]@2
  __int64 vars20[2]; // [sp+20h] [bp+20h]@8
  unsigned __int64 vars30; // [sp+30h] [bp+30h]@8

  v1 = 0;
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    memset(&vars0, 0, 0x1000uLL);
    v5 = *(_DWORD *)(v2 + 16);
    v6 = *(_DWORD *)v2;
    vars0 = v4;
    vars18 = 72;
    vars10 = v5;
    vars8 = ~v4;
    if ( ioctl(v6, 0xC020660BuLL, &vars0, v4, ~v4, *(_QWORD *)&vars10, *(_QWORD *)&vars18) < 0 )
      break;
    if ( !vars14 )
    {
      v25 = *(_QWORD *)(v2 + 8) == 0LL;
      *(_BYTE *)(v2 + 33) = 1;
      return !v25;
    }
    v7 = *(_QWORD *)(v2 + 24);
    if ( v7 > ~(unsigned __int64)vars14 )
      __assert_fail(
        "scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents",
        "src/extent-scan.c",
        0x7Eu,
        "extent_scan_read");
    v8 = *(_QWORD *)(v2 + 40);
    v9 = vars14 + v7;
    *(_QWORD *)(v2 + 24) = v9;
    v10 = v3 - v8;
    if ( (24 * v9 & 0x8000000000000000LL) != 0LL || 24 * (unsigned __int128)v9 >> 64 != 0 )
      sub_411530(v8, 3223348747LL);
    LODWORD(v11) = sub_411340(v8, 24 * v9);
    v12 = vars14;
    *(_QWORD *)(v2 + 40) = v11;
    v3 = v11 + v10;
    if ( v12 )
    {
      v13 = vars30;
      v14 = vars20[0];
      if ( vars20[0] > 0x7FFFFFFFFFFFFFFFLL - vars30 )
LABEL_17:
        __assert_fail(
          "fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length",
          "src/extent-scan.c",
          0x8Du,
          "extent_scan_read");
      v15 = 0;
      v16 = vars20;
      while ( 2 )
      {
        if ( v1 )
        {
          v17 = *((_DWORD *)v16 + 10);
          v18 = *(_QWORD *)(v3 + 8);
          v19 = v18 + *(_QWORD *)v3;
          if ( *(_DWORD *)(v3 + 16) == (*((_DWORD *)v16 + 10) & 0xFFFFFFFE) && v14 == v19 )
          {
            *(_DWORD *)(v3 + 16) = v17;
            ++v15;
            *(_QWORD *)(v3 + 8) = v18 + v13;
LABEL_15:
            if ( v15 >= v12 )
              goto LABEL_21;
LABEL_16:
            v16 = &vars20[7 * v15];
            v13 = v16[2];
            v14 = *v16;
            if ( *v16 > 0x7FFFFFFFFFFFFFFFLL - v13 )
              goto LABEL_17;
            continue;
          }
          if ( v19 > v14 )
          {
LABEL_13:
            if ( v19 - v14 < v13 )
              goto LABEL_27;
            *v16 = v19;
            v16[2] = v13 + v14 - v19;
            goto LABEL_15;
          }
        }
        else
        {
          v19 = *(_QWORD *)(v2 + 8);
          if ( v19 > v14 )
            goto LABEL_13;
          v17 = *((_DWORD *)v16 + 10);
        }
        break;
      }
      v20 = v1;
      ++v15;
      ++v1;
      v3 = *(_QWORD *)(v2 + 40) + 24 * v20;
      *(_QWORD *)v3 = v14;
      *(_QWORD *)(v3 + 8) = v13;
      *(_DWORD *)(v3 + 16) = v17;
      if ( v15 >= v12 )
        goto LABEL_21;
      goto LABEL_16;
    }
LABEL_21:
    if ( *(_BYTE *)(v3 + 16) & 1 )
    {
      *(_BYTE *)(v2 + 33) = 1;
LABEL_35:
      *(_QWORD *)(v2 + 24) = v1;
      return 1;
    }
    v21 = *(_BYTE *)(v2 + 33);
    if ( v1 > 0x48 )
    {
      if ( v21 )
        goto LABEL_35;
      v22 = v1 - 1;
      v23 = *(_QWORD *)(v2 + 40);
      *(_QWORD *)(v2 + 24) = v22;
      *(_QWORD *)(v2 + 8) = *(_QWORD *)(v23 + 24 * v22 - 24) + *(_QWORD *)(v23 + 24 * v22 - 16);
      return 1;
    }
    *(_QWORD *)(v2 + 24) = v1;
    if ( !v21 )
    {
      v4 = *(_QWORD *)v3 + *(_QWORD *)(v3 + 8);
      *(_QWORD *)(v2 + 8) = v4;
      if ( v1 != 72 )
        continue;
    }
    return 1;
  }
LABEL_27:
  result = 0;
  if ( !*(_QWORD *)(v2 + 8) )
  {
    *(_BYTE *)(v2 + 32) = 1;
    result = 0;
  }
  return result;
}

void *__fastcall sub_409E00(void *src, void *dest)
{
  void *v2; // rbx@1
  __int64 v3; // rax@1
  size_t v4; // rax@1
  size_t v5; // rbp@1
  _BYTE *v6; // rax@3
  void *result; // rax@3

  v2 = dest;
  LODWORD(v3) = sub_40AD40(src);
  v4 = v3 - (_QWORD)src;
  v5 = v4;
  if ( v4 + 9 <= 0x100 || (v2 = malloc(v4 + 9)) != 0LL )
  {
    v6 = mempcpy(v2, src, v5);
    *(_QWORD *)v6 = 6365935209750754627LL;
    v6[8] = 0;
    result = v2;
  }
  else
  {
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_409E90(int a1, const char *a2, int a3, const char *a4, int a5, char a6)
{
  char *v6; // r12@1
  int v7; // ebp@1
  char v8; // ST08_1@1
  int v9; // eax@1
  signed int v10; // ebx@1
  int *v11; // rax@3
  char *v13; // rax@5
  const char *v14; // rbx@5
  int v15; // eax@6
  int *v16; // r9@6
  int v17; // er12@7
  int *v18; // ST08_8@9
  int *v19; // [sp+8h] [bp-160h]@5
  char dest; // [sp+30h] [bp-138h]@5

  v6 = (char *)a4;
  v7 = a3;
  v8 = a6;
  v9 = linkat(a1, a2, a3, a4, a5);
  v10 = v9;
  if ( v8 == 1 )
  {
    if ( v9 )
    {
      v11 = __errno_location();
      if ( *v11 == 17 )
      {
        v19 = v11;
        v13 = (char *)sub_409E00(v6, &dest);
        v14 = v13;
        if ( v13 )
        {
          v15 = sub_40FB10(v13);
          v16 = v19;
          if ( v15 )
          {
            v17 = *v19;
          }
          else
          {
            v17 = renameat(v7, v14, v7, v6);
            if ( v17 )
              v17 = *v19;
            unlinkat(v7, v14, 0);
            v16 = v19;
          }
          if ( v14 != &dest )
          {
            v18 = v16;
            free((void *)v14);
            v16 = v18;
          }
          v10 = 1;
          if ( v17 )
          {
            *v16 = v17;
            v10 = -1;
          }
        }
        else
        {
          v10 = -1;
        }
      }
    }
  }
  return (unsigned int)v10;
}

__int64 __fastcall sub_409FD0(const char *a1, int a2, const char *a3, char a4)
{
  char v4; // r14@1
  char *v5; // r12@1
  int v6; // eax@1
  int v7; // ebx@1
  int *v8; // r14@3
  char *v10; // rax@5
  char *v11; // rbx@5
  int v12; // er12@7
  char dest; // [sp+10h] [bp-138h]@5

  v4 = a4;
  v5 = (char *)a3;
  v6 = symlinkat(a1, a2, a3);
  v7 = v6;
  if ( v4 == 1 )
  {
    if ( v6 )
    {
      v8 = __errno_location();
      if ( *v8 == 17 )
      {
        v10 = (char *)sub_409E00(v5, &dest);
        v11 = v10;
        if ( !v10 )
          return (unsigned int)-1;
        if ( (unsigned int)sub_40FB10(v10) )
        {
          v12 = *v8;
        }
        else
        {
          if ( !renameat(a2, v11, a2, v5) )
          {
            if ( v11 != &dest )
              free(v11);
LABEL_11:
            return 1;
          }
          v12 = *v8;
          unlinkat(a2, v11, 0);
        }
        if ( v11 != &dest )
          free(v11);
        if ( v12 )
        {
          *v8 = v12;
          return (unsigned int)-1;
        }
        goto LABEL_11;
      }
    }
  }
  return (unsigned int)v7;
}

__int64 __fastcall sub_40A0D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1
  int v4; // eax@1
  int v5; // ebx@1
  __int64 v6; // rax@3
  __int64 v7; // r12@3
  char *v8; // rbp@3
  int *v9; // rax@3
  __int64 result; // rax@4
  __int64 v11; // rax@5
  __int64 v12; // rbp@5
  int *v13; // rax@5

  v3 = a3;
  v4 = sub_40D070();
  v5 = v4;
  if ( v4 == -2 )
  {
    LODWORD(v11) = sub_40EC50(a1);
    v12 = v11;
    v13 = __errno_location();
    error(0, *v13, "%s", v12);
    result = (unsigned int)v5;
  }
  else
  {
    if ( v4 == -1 )
    {
      LODWORD(v6) = sub_40EC50(v3);
      v7 = v6;
      v8 = dcgettext(0LL, "preserving permissions for %s", 5);
      v9 = __errno_location();
      error(0, *v9, v8, v7);
    }
    result = (unsigned int)v5;
  }
  return result;
}

__int64 __fastcall sub_40A160(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx@1
  __int64 result; // rax@2
  __int64 v5; // rax@3
  __int64 v6; // r12@3
  char *v7; // rbp@3
  int *v8; // rax@3

  v3 = sub_40D0B0(a1, a2, a3);
  if ( v3 )
  {
    LODWORD(v5) = sub_40EC50(a1);
    v6 = v5;
    v7 = dcgettext(0LL, "setting permissions for %s", 5);
    v8 = __errno_location();
    error(0, *v8, v7, v6);
    result = (unsigned int)v3;
  }
  else
  {
    result = 0LL;
  }
  return result;
}

char *__fastcall sub_40A1C0(char *path, unsigned __int64 a2)
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

int __fastcall sub_40A2B0(char *path, __int64 a2)
{
  __int64 v2; // r13@1
  char *v3; // rax@1
  char *v4; // rbp@1
  char *v5; // rax@1
  __int16 v6; // r14@3
  char *v7; // r12@3
  int *v8; // rax@3
  int *v9; // r15@3
  unsigned __int64 v10; // rdx@4
  char *v11; // rsi@6

  v2 = a2;
  LODWORD(v3) = sub_40AD40(path);
  v4 = v3;
  LODWORD(v5) = sub_40ADA0(v3);
  if ( (unsigned __int64)v5 > 0xE )
  {
    v6 = *(_WORD *)v4;
    v7 = v5;
    *(_WORD *)v4 = 46;
    v8 = __errno_location();
    *v8 = 0;
    v9 = v8;
    v5 = (char *)pathconf(path, 3);
    if ( (signed __int64)v5 >= 0 || (v10 = 255LL, !*v9) )
      v10 = (unsigned __int64)v5;
    *(_WORD *)v4 = v6;
    if ( (unsigned __int64)v7 > v10 )
    {
      v11 = &path[a2];
      v5 = (char *)(&path[v2] - v4);
      if ( (unsigned __int64)v5 >= v10 )
        v11 = &v4[v10 - 1];
      else
        v10 = (unsigned __int64)(v5 + 1);
      *v11 = 126;
      v4[v10] = 0;
    }
  }
  return (unsigned __int64)v5;
}

void __fastcall sub_40A380(char *a1)
{
  char *v1; // rbx@1
  char *v2; // rax@4

  v1 = a1;
  if ( (a1 || (v1 = getenv("SIMPLE_BACKUP_SUFFIX")) != 0LL) && *v1 && (LODWORD(v2) = sub_40AD40(v1), v2 == v1) )
    src = v1;
  else
    src = "~";
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A3E0(void *a1, signed int a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v52 = v6 + v5;
  if ( !::src )
  {
    sub_40A380(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, ::src, v63);
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ADA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40ABC0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, ::src, v63);
          v58 = 1;
        }
LABEL_46:
        sub_40A2B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A8B0(void *a1, signed int a2)
{
  return sub_40A3E0(a1, a2, 1);
}

__int64 __fastcall sub_40A8C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1

  LODWORD(v2) = sub_412E60(a1, a2, off_419040, dword_419020, 4LL, off_61F4E0);
  return (unsigned int)dword_419020[v2];
}

__int64 __fastcall sub_40A930(void *a1, char *a2)
{
  char *v2; // rax@3

  if ( !a2 || !*a2 )
  {
    v2 = getenv("VERSION_CONTROL");
    if ( !v2 || !*v2 )
      return 2LL;
    a2 = v2;
    a1 = &unk_418FCD;
  }
  return sub_40A8C0((__int64)a1, (__int64)a2);
}

unsigned __int64 __fastcall sub_40A980(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx@1
  unsigned __int64 v4; // r8@6
  unsigned __int64 v6; // r8@9
  unsigned __int64 v7; // rax@9
  unsigned __int64 v8; // rdx@10
  unsigned __int64 v9; // rax@11

  v3 = a3;
  if ( a1 )
  {
    if ( a2 )
    {
      v6 = a2;
      v7 = a1;
      while ( 1 )
      {
        v8 = v7 % v6;
        if ( !(v7 % v6) )
          break;
        v7 = v6;
        v6 = v8;
      }
      v9 = a1 / v6;
      v4 = a1 / v6 * a2;
      if ( v9 * a2 <= v3 && v4 / a2 == v9 )
        return v4;
    }
  }
  else
  {
    a1 = 0x2000LL;
    if ( a2 )
      a1 = a2;
  }
  if ( a1 <= v3 )
    v3 = a1;
  return v3;
}

int sub_40AA00()
{
  FILE *v0; // rbx@1
  __int64 v1; // rax@1
  int v3; // eax@4
  FILE *v4; // rdi@4
  char *v5; // rax@6
  __int64 v6; // rbx@6
  char *v7; // r12@6
  int *v8; // rax@6
  int *v9; // rbp@6
  __int64 v10; // rax@7
  int v11; // eax@10

  v0 = stdin;
  LODWORD(v1) = sub_411B90(stdin);
  if ( !v1 )
  {
    if ( !(unsigned int)sub_412F20(v0) )
      return sub_40AB20(v0);
    goto LABEL_6;
  }
  v11 = sub_411BC0(v0, 0LL, 1LL);
  v4 = stdin;
  if ( !v11 )
  {
    v3 = sub_411B50();
    v4 = stdin;
    if ( v3 )
    {
      sub_412F20(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_412F20(v4) )
  {
LABEL_6:
    v5 = dcgettext(0LL, "error closing file", 5);
    v6 = qword_6219A8;
    v7 = v5;
    v8 = __errno_location();
    v9 = v8;
    if ( v6 )
    {
      LODWORD(v10) = sub_40EAA0(v6, "error closing file");
      error(0, *v9, "%s: %s", v10, v7);
    }
    else
    {
      error(0, *v8, "%s", v7);
    }
    ((void (*)(void))sub_40AB20)();
    _exit(status);
  }
  return ((int (*)(void))sub_40AB20)();
}

__int64 sub_40AB20()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_412F20(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_6219B0 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_6219B8 )
      {
        LODWORD(v5) = sub_40EAA0(qword_6219B8, "write error");
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
  result = sub_412F20(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

DIR *__fastcall sub_40ABC0(const char *a1)
{
  DIR *v1; // rax@1
  DIR *v2; // rbx@1
  int v3; // eax@2
  DIR *result; // rax@3
  int v5; // er12@4
  int *v6; // rax@4
  int *v7; // rbp@4
  int v8; // er14@5
  DIR *v9; // r13@5
  DIR *v10; // rax@7

  v1 = opendir(a1);
  v2 = v1;
  if ( v1 && (v3 = dirfd(v1), (unsigned int)v3 <= 2) )
  {
    v5 = sub_411A10(v3);
    v6 = __errno_location();
    v7 = v6;
    if ( v5 >= 0 )
    {
      v10 = fdopendir(v5);
      v8 = *v7;
      v9 = v10;
      if ( !v10 )
        close(v5);
    }
    else
    {
      v8 = *v6;
      v9 = 0LL;
    }
    closedir(v2);
    *v7 = v8;
    result = v9;
  }
  else
  {
    result = v2;
  }
  return result;
}

__int64 __fastcall sub_40AC60(void *a1, __int64 a2)
{
  __int64 result; // rax@1

  result = sub_40ACE0(a1);
  if ( !result )
    sub_411530(a1, a2);
  return result;
}

signed __int64 __fastcall sub_40AC80(_BYTE *a1)
{
  unsigned __int64 v1; // rbp@1
  __int64 v2; // rax@1
  signed __int64 v3; // rdx@2
  signed __int64 result; // rax@7

  v1 = *a1 == 47;
  LODWORD(v2) = sub_40AD40(a1);
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

_BYTE *__fastcall sub_40ACE0(void *src)
{
  signed __int64 v1; // rax@1
  size_t v2; // rbx@1
  _BYTE *v3; // rax@1
  _BYTE *v4; // rcx@1
  _BYTE *v5; // rax@2

  v1 = sub_40AC80(src);
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

_BYTE *__fastcall sub_40AD40(_BYTE *a1)
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

size_t __fastcall sub_40ADA0(const char *a1)
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

int j__posix_fadvise(int fd, off_t offset, off_t len, int advise)
{
  return posix_fadvise(fd, offset, len, advise);
}

__int64 __fastcall sub_40AE10(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_40FCF0(v4);
}

void __fastcall sub_40AE60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@2
  __int64 v4; // rax@2
  __int64 v5; // rbx@2
  __int64 v6; // rax@2
  __int64 v7; // rax@2

  if ( a1 )
  {
    v3 = a3;
    LODWORD(v4) = sub_4112E0(24LL, a2);
    v5 = v4;
    LODWORD(v6) = sub_411510(a2);
    *(_QWORD *)v5 = v6;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v5 + 16) = *(_QWORD *)v3;
    LODWORD(v7) = sub_40C2F0(a1, v5);
    if ( !v7 )
      sub_411530(a1, v5);
    if ( v5 != v7 )
      sub_40C5C0(v5, v5);
  }
}

bool __fastcall sub_40AEF0(__int64 a1, __int64 a2, __int64 a3)
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
    LODWORD(v4) = sub_40B8E0(a1, &v6);
    result = v4 != 0;
  }
  else
  {
    result = 0;
  }
  return result;
}

signed __int64 __fastcall sub_40AF30(__int16 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14

  v2 = 45;
  v3 = a1 & 0xF000;
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
  *(_BYTE *)(a2 + 1) = (a1 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (a1 & 0x80u) < 1 ? 45 : 119;
  v4 = -((a1 & 0x40u) < 1);
  if ( a1 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (a1 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (a1 & 0x10u) < 1 ? 45 : 119;
  v6 = -((a1 & 8u) < 1);
  if ( a1 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (a1 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (a1 & 2u) < 1 ? 45 : 119;
  v8 = -((a1 & 1u) < 1);
  if ( a1 & 0x200 )
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

__int64 __fastcall sub_40B0C0(void *a1, void *a2)
{
  __int64 result; // rax@1

  result = sub_40B0E0(a1, a2);
  if ( !result )
    sub_411530(a1, a2);
  return result;
}

void *__fastcall sub_40B0E0(void *src, void *a2, _QWORD *a3)
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
  v4 = sub_40AD40(src);
  v5 = v4;
  v6 = sub_40ADA0(v4);
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

__int64 __fastcall sub_40B1C0(int fd, void *buf, size_t nbytes)
{
  char *v3; // rbp@2
  size_t v4; // rbx@2
  __int64 v5; // r12@2
  __int64 v6; // rax@5

  if ( nbytes )
  {
    v3 = (char *)buf;
    v4 = nbytes;
    v5 = 0LL;
    do
    {
      v6 = sub_40EEC0(fd, v3, v4);
      if ( v6 == -1 )
        break;
      if ( !v6 )
      {
        *__errno_location() = 0;
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

__int64 __fastcall sub_40B240(int fd, void *buf, size_t n)
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
      v6 = sub_40EF20(fd, v3, v4);
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

unsigned __int64 __fastcall sub_40B2C0(unsigned __int64 a1)
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

signed __int64 __fastcall sub_40B380(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

signed __int64 __fastcall sub_40B380(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40B3B0(__int64 a1, __int64 a2, __int64 **a3, char a4)
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
  v7 = (__int64 *)sub_40B380(a1, a2);
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

signed __int64 __fastcall sub_40B4D0(void **a1)
{
  void *v1; // rax@1
  float v2; // xmm0_4@2
  float v3; // xmm1_4@5
  float v4; // xmm2_4@5
  signed __int64 result; // rax@7

  v1 = *a1;
  if ( *a1 == &unk_419120 )
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
      *a1 = &unk_419120;
      result = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_40B550(__int64 a1, __int64 a2, char a3)
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
              v8 = sub_40B380(a1, *(_QWORD *)v6);
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
    v10 = (_QWORD *)sub_40B380(a1, v5);
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

__int64 __fastcall sub_40B8E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 *v3; // rax@1
  __int64 v4; // rsi@1
  __int64 *v5; // rbx@2
  __int64 result; // rax@7

  v2 = a2;
  v3 = (__int64 *)sub_40B380(a1, a2);
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

char **__fastcall sub_40BB50(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(), __int64 (__fastcall *a4)(), char *a5)
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
    v7 = sub_40B360;
  if ( !a4 )
    v6 = sub_40B370;
  v9 = malloc(0x50uLL);
  v10 = (char **)v9;
  if ( v9 )
  {
    v11 = (void **)((char *)v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40B4D0(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40B2C0(v8);
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
      *((_QWORD *)v9 + 5) = &unk_419120;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40B4D0(v11) )
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

signed __int64 __fastcall sub_40BE70(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_40B2C0(a2);
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
  v14 = sub_40B550((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_40B550(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40B550(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40BE70(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_40B2C0(a2);
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
  v14 = sub_40B550((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_40B550(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40B550(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40C070(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40B3B0(a1, a2, &v26, 0);
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
        sub_40B4D0((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40BE70(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B3B0(a1, v4, &v26, 0) )
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

signed __int64 __fastcall sub_40C070(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40B3B0(a1, a2, &v26, 0);
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
        sub_40B4D0((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40BE70(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B3B0(a1, v4, &v26, 0) )
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

__int64 __fastcall sub_40C2F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  int v3; // eax@1
  __int64 result; // rax@4
  __int64 v5; // [sp+8h] [bp-10h]@1

  v2 = a2;
  v3 = sub_40C070(a1, a2, &v5);
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

__int64 __fastcall sub_40C330(__int64 a1, __int64 a2)
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
  v3 = sub_40B3B0(a1, a2, &v24, 1);
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
    sub_40B4D0((void **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40BE70(a1, v17) )
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

unsigned __int64 __fastcall sub_40C510(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = sub_413020(*(_QWORD *)a1);
  return (*(_QWORD *)(a1 + 8) ^ v2) % a2;
}

int __fastcall sub_40C550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int result; // eax@2

  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) || *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16) )
    result = 0;
  else
    result = sub_40EF80(*(_QWORD *)a1, *(_QWORD *)a2, a3, a4, a5, a6);
  return result;
}

void __fastcall sub_40C5C0(void **a1)
{
  free(*a1);
  free(a1);
}

signed __int64 __fastcall sub_40C5E0(_BYTE *a1, __int64 a2, int (__fastcall *a3)(_BYTE *, _BYTE *, __int64), __int64 a4)
{
  int (__fastcall *v4)(_BYTE *, _BYTE *, __int64); // r14@1
  _BYTE *v5; // r13@1
  _BYTE *v6; // r12@1
  _BYTE *v7; // rbp@1
  char v8; // dl@2
  bool v9; // r15@4
  signed __int64 v10; // rdx@9
  int v11; // er15@9
  int v12; // eax@10
  int v13; // er13@10
  int *v15; // rax@25
  bool v16; // [sp+14h] [bp-44h]@1
  __int64 v17; // [sp+18h] [bp-40h]@1

  v4 = a3;
  v5 = a1;
  v6 = a1;
  v7 = 0LL;
  v17 = a4;
  v16 = 0;
LABEL_2:
  while ( 1 )
  {
    v8 = *(++v6 - 1);
    if ( !v8 )
      return v5 - a1;
    while ( *v6 != 47 )
    {
      v9 = *v6 != 0 && v8 == 47;
      if ( !v9 || !v7 )
        goto LABEL_2;
      if ( v7 - v5 == 1 )
      {
        if ( *v5 == 46 )
          goto LABEL_12;
        *v7 = 0;
      }
      else
      {
        *v7 = 0;
        if ( v7 - v5 == 2 && *v5 == 46 && v5[1] == 46 )
        {
          v11 = 0;
          v16 = 0;
          v10 = 0LL;
          goto LABEL_10;
        }
      }
      if ( v4(a1, v5, v17) < 0 )
      {
        v11 = *__errno_location();
        v10 = v16;
      }
      else
      {
        v16 = v9;
        v10 = 1LL;
        v11 = 0;
      }
LABEL_10:
      v12 = sub_40F520(a2, v5, v10, 0LL);
      v13 = v12;
      if ( v12 == -1 || (*v7 = 47, v12) )
      {
        if ( v11 )
        {
          v15 = __errno_location();
          if ( *v15 == 2 )
            *v15 = v11;
        }
        return v13;
      }
LABEL_12:
      v5 = v6++;
      v8 = *(v6 - 1);
      if ( !v8 )
        return v5 - a1;
    }
    if ( v8 != 47 )
      v7 = v6;
  }
}

signed __int64 __fastcall sub_40C770(char *a1, __int64 a2, int (__fastcall *a3)(_BYTE *, _BYTE *, __int64), __int64 a4, __mode_t a5, void (__fastcall *a6)(char *, __int64), int a7, int a8, int a9, char a10)
{
  int (__fastcall *v10)(_BYTE *, _BYTE *, __int64); // r13@1
  __mode_t v11; // er12@1
  signed __int64 v12; // rax@4
  signed __int64 v13; // rbp@4
  const char *v14; // rbp@5
  int v15; // eax@7
  int v16; // er15@8
  __int64 v17; // rax@14
  __int64 v18; // rbx@14
  char *v19; // rax@14
  signed __int64 result; // rax@14
  signed __int64 v21; // rdx@27
  int v22; // eax@28
  int *v23; // rbp@36
  __int64 v24; // rax@36
  const char *v25; // rsi@36
  __int64 v26; // rbx@36
  char *v27; // rax@38
  __int64 v28; // [sp+0h] [bp-E8h]@1
  void (__fastcall *v29)(char *, __int64); // [sp+10h] [bp-D8h]@1
  struct stat stat_buf; // [sp+20h] [bp-C8h]@13

  v10 = a3;
  v11 = a5;
  v28 = a4;
  v29 = a6;
  if ( *a1 != 47 && *(_DWORD *)a2 == 4 )
  {
    v16 = *(_DWORD *)(a2 + 4);
    if ( v16 )
      goto LABEL_14;
    if ( a3 )
      goto LABEL_4;
LABEL_16:
    v14 = a1;
    goto LABEL_6;
  }
  if ( !a3 )
    goto LABEL_16;
LABEL_4:
  v12 = sub_40C5E0(a1, a2, a3, a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    result = 1LL;
    if ( v13 == -1 )
    {
      v16 = *__errno_location();
      goto LABEL_14;
    }
    return result;
  }
  v14 = &a1[v12];
LABEL_6:
  if ( (a9 & a8) == -1 )
  {
    if ( !(v11 & 0x200 | a7 & 0xC00) )
    {
      v16 = mkdir(v14, v11);
      if ( v16 )
        goto LABEL_9;
      v29(a1, v28);
      if ( !(v11 & a7 & 0x1FF) )
        return 1LL;
      v21 = 3LL;
      goto LABEL_28;
    }
    v15 = mkdir(v14, v11 & 0xFFFFFFED);
  }
  else
  {
    v15 = mkdir(v14, v11 & 0xFFFFFFC0);
  }
  v16 = v15;
  if ( v15 )
  {
LABEL_9:
    v16 = *__errno_location();
    if ( a10 )
    {
      if ( !v16 || v16 != 2 && v10 && !__xstat(1, v14, &stat_buf) && (stat_buf.st_mode & 0xF000) == 0x4000 )
        return 1LL;
LABEL_14:
      LODWORD(v17) = sub_40EC50(a1);
      v18 = v17;
      v19 = dcgettext(0LL, "cannot create directory %s", 5);
      error(0, v16, v19, v18, v28);
      return 0LL;
    }
    v21 = 2LL;
    goto LABEL_28;
  }
  v29(a1, v28);
  v21 = 3LL;
LABEL_28:
  v22 = sub_40F520(a2, v14, v21, &stat_buf);
  if ( v22 < -1 )
    return 1LL;
  if ( !v22 )
    v14 = ".";
  if ( !(unsigned int)sub_4135D0(stat_buf.st_dev, (char *)v14, a7) )
    return 1LL;
  if ( v16 && (v16 == 2 || !v10 || *__errno_location() == 20) )
    goto LABEL_14;
  v23 = __errno_location();
  LODWORD(v24) = sub_40EC50(a1);
  v25 = "cannot change permissions of %s";
  v26 = v24;
  if ( (a9 & a8) != -1 )
    v25 = "cannot change owner and permissions of %s";
  v27 = dcgettext(0LL, v25, 5);
  error(0, *v23, v27, v26, v28);
  return 0LL;
}

int __fastcall sub_40CA80(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // rcx@1
  _BYTE *v3; // rbx@1
  int v4; // edx@1
  unsigned __int64 v5; // rdi@2
  bool v6; // al@3
  bool v7; // al@4
  signed __int64 v8; // rdi@4
  __int64 v9; // rax@6
  signed __int64 v10; // r10@6
  signed int v11; // edi@7
  char v12; // r9@8
  int v13; // ebp@15
  signed __int64 v14; // r11@22
  signed __int64 v15; // r10@22
  signed int v16; // ecx@23
  int v17; // edx@30
  _BYTE *v18; // r8@30
  signed __int64 v19; // rsi@32
  int v20; // ecx@35
  unsigned __int8 v21; // si@42
  char v22; // bl@42
  int v23; // ebx@59

  v2 = a1;
  v3 = a1;
  v4 = *a1;
  if ( (unsigned __int8)(*a1 - 48) > 7u )
  {
    v5 = 1LL;
    if ( (_BYTE)v4 )
    {
      do
      {
        ++v2;
        v6 = (_BYTE)v4 == 43 || (v4 & 0xEF) == 45;
        LOBYTE(v4) = *v2;
        v5 += v6;
      }
      while ( *v2 );
      v7 = v5 >> 60 != 0;
      v8 = 16 * v5;
      if ( v8 < 0 || v7 )
        sub_411530(v8, a2);
    }
    else
    {
      v8 = 16LL;
    }
    LODWORD(v9) = sub_4112E0(v8, a2);
    v10 = 0LL;
LABEL_7:
    v11 = 0;
    while ( 1 )
    {
      v12 = *v3;
      if ( *v3 == 97 )
      {
        v11 = 4095;
        goto LABEL_54;
      }
      if ( v12 <= 97 )
        break;
      if ( v12 == 111 )
      {
        v11 |= 0x207u;
      }
      else if ( v12 == 117 )
      {
        v11 |= 0x9C0u;
      }
      else
      {
        if ( v12 != 103 )
          goto LABEL_13;
        v11 |= 0x438u;
      }
LABEL_54:
      ++v3;
    }
    if ( v12 != 45 && v12 != 61 && v12 != 43 )
      goto LABEL_13;
    v14 = v10 + 1;
    v15 = v9 + 16 * v10;
    while ( 1 )
    {
      v17 = v3[1];
      v18 = v3 + 1;
      if ( v3[1] == 103 )
      {
        v19 = (signed __int64)(v3 + 2);
        v16 = 56;
      }
      else
      {
        if ( v3[1] <= 103 )
        {
          if ( (unsigned __int8)(v17 - 48) <= 7u )
          {
            v20 = 0;
            while ( 1 )
            {
              v20 = v17 + 8 * v20 - 48;
              ++v18;
              if ( (unsigned int)v20 > 0xFFF )
                goto LABEL_13;
              v17 = *v18;
              if ( (unsigned __int8)(*v18 - 48) > 7u )
              {
                if ( !v11 && (!(_BYTE)v17 || (_BYTE)v17 == 44) )
                {
                  *(_BYTE *)v15 = v12;
                  v3 = v18;
                  v12 = v17;
                  v11 = 4095;
                  *(_DWORD *)(v15 + 8) = v20;
                  v16 = 4095;
                  *(_BYTE *)(v15 + 1) = 1;
                  *(_DWORD *)(v15 + 4) = 4095;
                  goto LABEL_27;
                }
                goto LABEL_13;
              }
            }
          }
LABEL_42:
          v21 = v17 - 88;
          v22 = 1;
          v16 = 0;
          do
          {
            switch ( v21 )
            {
              case 0u:
                v22 = 2;
                break;
              default:
                goto LABEL_46;
              case 0x20u:
                v16 |= 0x49u;
                break;
              case 0x1Fu:
                LOBYTE(v16) = v16 | 0x92;
                break;
              case 0x1Cu:
                BYTE1(v16) |= 2u;
                break;
              case 0x1Bu:
                BYTE1(v16) |= 0xCu;
                break;
              case 0x1Au:
                v16 |= 0x124u;
                break;
            }
            LOBYTE(v17) = *++v18;
            v21 = *v18 - 88;
          }
          while ( v21 <= 0x20u );
LABEL_46:
          *(_BYTE *)v15 = v12;
          v12 = v17;
          *(_BYTE *)(v15 + 1) = v22;
          v3 = v18;
          *(_DWORD *)(v15 + 4) = v11;
          *(_DWORD *)(v15 + 8) = v16;
          goto LABEL_25;
        }
        v19 = (signed __int64)(v3 + 2);
        if ( (_BYTE)v17 == 111 )
        {
          v16 = 7;
        }
        else
        {
          v16 = 448;
          if ( (_BYTE)v17 != 117 )
            goto LABEL_42;
        }
      }
      *(_BYTE *)(v15 + 1) = 3;
      *(_DWORD *)(v15 + 4) = v11;
      *(_DWORD *)(v15 + 8) = v16;
      *(_BYTE *)v15 = v12;
      v12 = v3[2];
      v3 = (_BYTE *)v19;
LABEL_25:
      if ( v11 )
        v16 &= v11;
LABEL_27:
      *(_DWORD *)(v15 + 12) = v16;
      v15 += 16LL;
      if ( (v12 & 0xEF) != 45 && v12 != 43 )
      {
        if ( v12 == 44 )
        {
          ++v3;
          v10 = v14;
          goto LABEL_7;
        }
        if ( !v12 )
        {
          *(_BYTE *)(v9 + 16 * v14 + 1) = 0;
          return v9;
        }
LABEL_13:
        free((void *)v9);
        LODWORD(v9) = 0;
        return v9;
      }
      ++v14;
    }
  }
  v13 = 0;
  do
  {
    v13 = v4 + 8 * v13 - 48;
    ++v2;
    if ( (unsigned int)v13 > 0xFFF )
    {
      LODWORD(v9) = 0;
      return v9;
    }
    v4 = *v2;
  }
  while ( (unsigned __int8)(*v2 - 48) <= 7u );
  LODWORD(v9) = 0;
  if ( !(_BYTE)v4 )
  {
    v23 = v13 & 0xC00 | 0x3FF;
    if ( v2 - a1 >= 5 )
      v23 = 4095;
    LODWORD(v9) = sub_4112E0(32LL, a2);
    *(_WORD *)v9 = 317;
    *(_DWORD *)(v9 + 4) = 4095;
    *(_DWORD *)(v9 + 8) = v13;
    *(_DWORD *)(v9 + 12) = v23;
    *(_BYTE *)(v9 + 17) = 0;
  }
  return v9;
}

__int64 __fastcall sub_40CE50(__int16 a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  char v5; // r11@1
  __int64 result; // rax@1
  int v7; // ebx@1
  int v8; // edx@2
  unsigned int v9; // er10@3
  int v10; // edi@3
  int v11; // er9@5
  int v12; // er11@5
  int v13; // er9@9
  char v14; // r11@10
  int v15; // er9@10
  int v16; // er9@11
  int v17; // er12@16

  v5 = *(_BYTE *)(a4 + 1);
  result = a1 & 0xFFF;
  v7 = 0;
  if ( v5 )
  {
    v8 = ~a3;
    while ( 1 )
    {
      v17 = *(_DWORD *)(a4 + 4);
      v13 = *(_DWORD *)(a4 + 8);
      if ( a2 )
        break;
      v9 = -1;
      v10 = 0;
      if ( v5 == 2 )
      {
        if ( !(result & 0x49) )
          goto LABEL_10;
LABEL_18:
        v14 = *(_BYTE *)a4;
        v15 = v9 & (v13 | 0x49);
        if ( !v17 )
          goto LABEL_11;
LABEL_19:
        v16 = v17 & v15;
        if ( v14 != 45 )
        {
          if ( v14 == 61 )
          {
            v10 |= ~v17;
            LOWORD(v9) = ~(_WORD)v10;
            goto LABEL_22;
          }
LABEL_13:
          if ( v14 == 43 )
          {
            v7 |= v16;
            result = v16 | (unsigned int)result;
          }
          goto LABEL_15;
        }
LABEL_26:
        v7 |= v16;
        result = ~v16 & (unsigned int)result;
LABEL_15:
        a4 += 16LL;
        v5 = *(_BYTE *)(a4 + 1);
        if ( !v5 )
          goto LABEL_23;
      }
      else
      {
LABEL_4:
        if ( v5 == 3 )
        {
          v11 = result & v13;
          v12 = (v11 & 0x124u) >= 1 ? 0x124 : 0;
          if ( v11 & 0x92 )
            v12 = (v11 & 0x124u) >= 1 ? 0x124 : 0;
          if ( v11 & 0x49 )
            v12 |= 0x49u;
          v13 = v12 | v11;
        }
LABEL_10:
        v14 = *(_BYTE *)a4;
        v15 = v9 & v13;
        if ( v17 )
          goto LABEL_19;
LABEL_11:
        v16 = v8 & v15;
        if ( v14 == 45 )
          goto LABEL_26;
        if ( v14 != 61 )
          goto LABEL_13;
LABEL_22:
        a4 += 16LL;
        v5 = *(_BYTE *)(a4 + 1);
        v7 |= v9 & 0xFFF;
        result = v16 | v10 & (unsigned int)result;
        if ( !v5 )
          goto LABEL_23;
      }
    }
    v9 = *(_DWORD *)(a4 + 12) | 0xFFFFF3FF;
    v10 = ~(unsigned __int16)*(_DWORD *)(a4 + 12) & 0xC00;
    if ( v5 == 2 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_23:
  if ( a5 )
    *a5 = v7;
  return result;
}

char *__fastcall sub_40CFD0(const char *a1)
{
  char *v1; // rbx@2
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
  v1 = (char *)a1;
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
        v1 = result + 1;
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
          v1 = result + 4;
          program_invocation_short_name = (__int64)(result + 4);
        }
      }
    }
  }
  qword_6219C0 = v1;
  program_invocation_name = (__int64)v1;
  return result;
}

int __fastcall sub_40D070(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebp@1
  __int64 v6; // rbx@1
  int result; // eax@2
  char v8; // [sp+Ch] [bp-1Ch]@1

  v5 = a4;
  v6 = a3;
  if ( sub_412B30(a1, a2, a5, &v8) )
    result = -2;
  else
    result = sub_412B60(&v8, v6, v5);
  return result;
}

int __fastcall sub_40D0B0(__int64 a1, unsigned int a2, int a3)
{
  int v4; // [sp+Ch] [bp-Ch]@1

  v4 = a3;
  return sub_412B60(&v4, a1, a2);
}

char *__fastcall sub_40D0D0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_413060(0LL);
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

unsigned __int64 __fastcall sub_40D1D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_40D0D0("`", v11);
        v58 = sub_40D0D0("'", v11);
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
            return sub_40D1D0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40D1D0((__int64)v9, v79, s);
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
                return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
          return sub_40D1D0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40D1D0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4129F0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_40D1D0((__int64)v9, v10, s);
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
      return sub_40D1D0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_40D1D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_40D0D0("`", v11);
        v58 = sub_40D0D0("'", v11);
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
            return sub_40D1D0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40D1D0((__int64)v9, v79, s);
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
                return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
          return sub_40D1D0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40D1D0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4129F0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_40D1D0((__int64)v9, v10, s);
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
      return sub_40D1D0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_40E400(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  unsigned __int64 v15; // rsi@8
  __int64 v16; // ST30_8@9
  _BYTE *v17; // rax@10
  int v18; // er8@10
  __int128 *v20; // rax@12
  char *v21; // [sp+8h] [bp-50h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v21 = a2;
  v6 = __errno_location();
  v7 = off_61F4B8;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61F4D0 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411530(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_61F4B8 == &xmmword_61F4C0 )
    {
      LODWORD(v20) = sub_411340(0LL, v9);
      v7 = v20;
      off_61F4B8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61F4C0);
    }
    else
    {
      LODWORD(v10) = sub_411340(off_61F4B8, v9);
      off_61F4B8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61F4D0], 0, 16LL * ((signed int)a1 + 1 - dword_61F4D0));
    dword_61F4D0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_40D1D0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_6219E0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4112E0(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_40D1D0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_40E400(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  unsigned __int64 v15; // rsi@8
  __int64 v16; // ST30_8@9
  _BYTE *v17; // rax@10
  int v18; // er8@10
  __int128 *v20; // rax@12
  char *v21; // [sp+8h] [bp-50h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v21 = a2;
  v6 = __errno_location();
  v7 = off_61F4B8;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61F4D0 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411530(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_61F4B8 == &xmmword_61F4C0 )
    {
      LODWORD(v20) = sub_411340(0LL, v9);
      v7 = v20;
      off_61F4B8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61F4C0);
    }
    else
    {
      LODWORD(v10) = sub_411340(off_61F4B8, v9);
      off_61F4B8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61F4D0], 0, 16LL * ((signed int)a1 + 1 - dword_61F4D0));
    dword_61F4D0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_40D1D0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_6219E0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4112E0(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_40D1D0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_40E920(__int64 a1, int a2, char *a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40E920(__int64 a1, int a2, char *a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40EA00(int a1, char *a2)
{
  return sub_40E920(0LL, a1, a2);
}

_BYTE *__fastcall sub_40EA20(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_621B10;
  v4 = _mm_load_si128((const __m128i *)&xmmword_621AE0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_621AF0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_621B00);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_40E400(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_40EAA0(char *a1)
{
  return sub_40EA20(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40EAD0(__int64 a1, int a2, char *a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40EAD0(__int64 a1, int a2, char *a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40EC30(__int64 a1, char *a2)
{
  return sub_40E400(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61F480);
}

_BYTE *__fastcall sub_40EC50(char *a1)
{
  return sub_40E400(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61F480);
}

__int64 __fastcall sub_40EC70(int oldfd, char *old, int newfd, char *a4, unsigned int a5)
{
  int v5; // er13@1
  char *v6; // r12@1
  unsigned int v7; // ebp@1
  unsigned int v8; // eax@1
  unsigned int v9; // edx@1
  unsigned int v10; // ST08_4@2
  int *v11; // rax@2
  int *v12; // r9@2
  bool v13; // r15@2
  int v15; // eax@7
  size_t v16; // rbp@11
  size_t v17; // rax@11
  int *v18; // [sp+8h] [bp-160h]@7
  int *v19; // [sp+8h] [bp-160h]@11
  struct stat v20; // [sp+10h] [bp-158h]@15
  struct stat stat_buf; // [sp+A0h] [bp-C8h]@7

  v5 = newfd;
  v6 = a4;
  v7 = a5;
  v8 = syscall(316LL, (unsigned int)oldfd, old, (unsigned int)newfd, a4, a5);
  v9 = v8;
  if ( (v8 & 0x80000000) != 0 )
  {
    v10 = v8;
    v11 = __errno_location();
    v9 = v10;
    v12 = v11;
    v13 = *v11 != 95 && ((*v11 - 22) & 0xFFFFFFEF) != 0;
    if ( !v13 )
    {
      if ( v7 )
      {
        if ( v7 & 0xFFFFFFFE )
        {
          *v11 = 95;
          return (unsigned int)-1;
        }
        v18 = v11;
        v15 = __fxstatat(1, v5, v6, &stat_buf, 256);
        v12 = v18;
        if ( !v15 || *v18 == 75 )
        {
          *v18 = 17;
          return (unsigned int)-1;
        }
        if ( *v18 != 2 )
          return (unsigned int)-1;
        v13 = 1;
      }
      v19 = v12;
      v16 = strlen(old);
      v17 = strlen(v6);
      if ( !v16 || !v17 || old[v16 - 1] != 47 && v6[v17 - 1] != 47 )
        return (unsigned int)renameat(oldfd, old, v5, v6);
      if ( !__fxstatat(1, oldfd, old, &v20, 256) )
      {
        if ( v13 )
        {
          if ( (v20.st_mode & 0xF000) != 0x4000 )
          {
            *v19 = 2;
            return (unsigned int)-1;
          }
          return (unsigned int)renameat(oldfd, old, v5, v6);
        }
        if ( __fxstatat(1, v5, v6, &stat_buf, 256) )
        {
          if ( *v19 == 2 && (v20.st_mode & 0xF000) == 0x4000 )
            return (unsigned int)renameat(oldfd, old, v5, v6);
        }
        else
        {
          if ( (stat_buf.st_mode & 0xF000) == 0x4000 )
          {
            if ( (v20.st_mode & 0xF000) != 0x4000 )
            {
              *v19 = 21;
              return (unsigned int)-1;
            }
            return (unsigned int)renameat(oldfd, old, v5, v6);
          }
          *v19 = 20;
        }
      }
      return (unsigned int)-1;
    }
  }
  return v9;
}

__int64 __fastcall sub_40EEC0(int fd, void *buf, size_t nbytes)
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

__int64 __fastcall sub_40EF20(int fd, void *buf, size_t n)
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

__int64 __fastcall sub_40EF80(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // ebx@1
  const char *v3; // rbp@1
  const char *v4; // r12@1
  size_t v5; // r13@1
  const char *v7; // rbp@4
  const char *v8; // r12@4
  int *v9; // rax@7
  int *v10; // rax@5
  __int64 v11; // [sp+0h] [bp-158h]@4
  __int64 v12; // [sp+8h] [bp-150h]@8
  struct stat stat_buf; // [sp+90h] [bp-C8h]@6

  v2 = 0;
  v3 = sub_40AD40(a1);
  v4 = sub_40AD40(a2);
  v5 = sub_40ADA0(v3);
  if ( v5 == sub_40ADA0(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (const char *)sub_40AC60(a1, (__int64)v4);
    v8 = (const char *)sub_40AC60(a2, (__int64)v4);
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
    free((void *)v7);
    free((void *)v8);
  }
  return v2;
}

signed __int64 __fastcall sub_40F0B0(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax@1
  unsigned __int64 v3; // rdx@1

  result = 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a1 + 8) >= v3 )
    result = *(_QWORD *)(a1 + 8) > v3;
  return result;
}

int __fastcall sub_40F0D0(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}

char *__fastcall sub_40F0E0(DIR *dirp, signed __int64 a2)
{
  DIR *v2; // rbx@2
  unsigned __int64 v3; // r15@2
  unsigned __int64 v4; // r12@2
  char *v5; // r14@2
  char *v6; // r13@2
  int *v7; // rbp@2
  struct dirent *v8; // rax@4
  struct dirent *v9; // rcx@4
  const char *v10; // r8@5
  char v11; // al@5
  const char *v12; // rdi@8
  const char *v13; // ST18_8@8
  size_t v14; // rax@8
  const void *v15; // r8@8
  size_t v16; // rdx@8
  struct dirent *v17; // rcx@9
  size_t n; // ST30_8@10
  struct dirent *v19; // ST28_8@10
  signed __int64 v20; // r12@10
  __int64 v21; // rax@10
  int v22; // ebx@12
  char *v23; // rax@15
  char *v24; // rbp@15
  unsigned __int64 v25; // rsi@16
  __int64 v26; // rbp@16
  signed __int64 v27; // r12@16
  const char **v28; // rbx@16
  char *v29; // rax@16
  const char *v30; // rsi@17
  signed __int64 v32; // rax@26
  size_t v33; // ST30_8@28
  const void *v34; // ST28_8@28
  char *v35; // rax@28
  signed __int64 v36; // ST38_8@35
  size_t v37; // ST30_8@35
  char *v38; // rax@35
  char *v39; // rax@36
  char *v40; // rdi@37
  int (*compar)(const void *, const void *); // [sp+8h] [bp-70h]@1
  signed __int64 v42; // [sp+10h] [bp-68h]@2
  char *src; // [sp+18h] [bp-60h]@9
  unsigned __int64 srca; // [sp+18h] [bp-60h]@22
  signed __int64 v45; // [sp+20h] [bp-58h]@2
  struct dirent *v46; // [sp+28h] [bp-50h]@8

  a2 = (unsigned int)a2;
  compar = (int (*)(const void *, const void *))qword_41A020[(unsigned __int64)(unsigned int)a2];
  if ( !dirp )
    return 0LL;
  v2 = dirp;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v7 = __errno_location();
  while ( 1 )
  {
    *v7 = 0;
    v8 = readdir(v2);
    v9 = v8;
    if ( !v8 )
      break;
    v10 = v8->d_name;
    v11 = v8->d_name[0];
    if ( v11 == 46 )
    {
      if ( v9->d_name[1] == 46 )
      {
        v11 = v9->d_name[2];
        goto LABEL_3;
      }
      if ( v9->d_name[1] )
        goto LABEL_8;
    }
    else
    {
LABEL_3:
      if ( v11 )
      {
LABEL_8:
        v12 = v10;
        v13 = v10;
        v46 = v9;
        v14 = strlen(v10);
        v15 = v13;
        v16 = v14 + 1;
        if ( compar )
        {
          v17 = v46;
          src = (char *)(v4 + 1);
          if ( v4 == v45 )
          {
            if ( v5 )
            {
              if ( v4 > 0x555555555555554LL )
                goto LABEL_41;
              v45 = (signed __int64)&src[v4 >> 1];
              a2 = 16LL * (_QWORD)&src[v4 >> 1];
            }
            else if ( v4 )
            {
              a2 = 16 * v4;
              if ( v4 & 0x800000000000000LL || v4 >> 60 != 0 )
LABEL_41:
                sub_411530(v12, a2);
            }
            else
            {
              v45 = 8LL;
              a2 = 128LL;
              src = (char *)1;
            }
            v36 = v14 + 1;
            v37 = (size_t)v15;
            LODWORD(v38) = sub_411340(v5, a2);
            v16 = v36;
            v15 = (const void *)v37;
            v5 = v38;
            v17 = v46;
          }
          n = v16;
          v19 = v17;
          v20 = (signed __int64)&v5[16 * v4];
          LODWORD(v21) = sub_411510(v15);
          *(_QWORD *)v20 = v21;
          v3 += n;
          *(_QWORD *)(v20 + 8) = v19->d_ino;
          v4 = (unsigned __int64)src;
        }
        else
        {
          a2 = v16 + v3;
          srca = v16 + v3;
          if ( v42 - v3 > v16 )
            goto LABEL_29;
          if ( __CFADD__(v16, v3) )
            goto LABEL_41;
          if ( v6 )
          {
            a2 = v16 + v3;
            if ( srca > 0x5555555555555553LL )
              goto LABEL_41;
            v32 = srca + (srca >> 1) + 1;
          }
          else
          {
            v32 = v16 + v3;
            if ( !a2 )
            {
              v42 = 128LL;
              goto LABEL_28;
            }
            if ( a2 < 0 )
              goto LABEL_41;
          }
          v42 = v32;
LABEL_28:
          v33 = v16;
          v34 = v15;
          LODWORD(v35) = sub_411340(v6, v42);
          v16 = v33;
          v15 = v34;
          v6 = v35;
LABEL_29:
          a2 = (signed __int64)v15;
          memcpy(&v6[v3], v15, v16);
          v3 = srca;
        }
      }
    }
  }
  v22 = *v7;
  if ( *v7 )
  {
    free(v5);
    v40 = v6;
    v6 = 0LL;
    free(v40);
    *v7 = v22;
  }
  else
  {
    if ( compar )
    {
      if ( v4 )
      {
        v25 = v4;
        v26 = 0LL;
        qsort(v5, v4, 0x10uLL, compar);
        v27 = (signed __int64)&v5[16 * v4];
        v28 = (const char **)v5;
        LODWORD(v29) = sub_4112E0(v3 + 1, v25);
        v6 = v29;
        do
        {
          v30 = *v28;
          v28 += 2;
          v26 += stpcpy(&v6[v26], v30) - &v6[v26] + 1;
          free((void *)*(v28 - 2));
        }
        while ( v28 != (const char **)v27 );
        v24 = &v6[v26];
      }
      else
      {
        LODWORD(v23) = sub_4112E0(v3 + 1, a2);
        v6 = v23;
        v24 = v23;
      }
      free(v5);
    }
    else if ( v42 == v3 )
    {
      LODWORD(v39) = sub_411340(v6, v42 + 1);
      v6 = v39;
      v24 = &v39[v42];
    }
    else
    {
      v24 = &v6[v3];
    }
    *v24 = 0;
  }
  return v6;
}

char *__fastcall sub_40F480(const char *a1, unsigned int a2)
{
  DIR *v2; // rax@1
  DIR *v3; // rbx@2
  char *v4; // rbp@2
  char *result; // rax@3
  int *v6; // rax@5
  int v7; // er12@5
  int *v8; // rbx@5

  v2 = sub_40ABC0(a1);
  if ( v2 )
  {
    v3 = v2;
    v4 = sub_40F0E0(v2, a2);
    if ( closedir(v3) )
    {
      v6 = __errno_location();
      v7 = *v6;
      v8 = v6;
      free(v4);
      result = 0LL;
      *v8 = v7;
    }
    else
    {
      result = v4;
    }
  }
  else
  {
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_40F520(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx@1
  char v5; // r14@2
  int v6; // eax@2
  int v7; // er13@2
  int v8; // eax@2
  int v9; // ecx@4
  int v10; // eax@8
  int v11; // er12@11
  bool v12; // al@12
  __int64 result; // rax@14
  int *v14; // rax@23
  int v15; // ebp@23
  int *v16; // rbx@23
  __pid_t v17; // eax@26
  int v18; // eax@31

  v4 = a4;
  if ( a4 )
  {
    v5 = a3;
    v6 = __open_2(a2, ((_DWORD)a3 << 17) & 0x20000 | 0x10900u);
    *(_DWORD *)v4 = v6;
    v7 = v6;
    v8 = *__errno_location();
    *(_DWORD *)(v4 + 4) = v8;
    if ( v7 < 0 )
    {
      if ( v8 != 13 )
        return (unsigned int)-1;
    }
    else if ( v5 & 2 )
    {
      return 0;
    }
  }
  else
  {
    v7 = -1;
  }
  v9 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 > 5u )
    goto LABEL_40;
  if ( (1LL << v9) & 0x36 )
    goto LABEL_10;
  if ( (1LL << v9) & 8 )
  {
    if ( *(_DWORD *)(a1 + 4) >= 0 )
      goto LABEL_10;
    goto LABEL_26;
  }
  if ( v9 )
LABEL_40:
    __assert_fail("0", "lib/savewd.c", 0x63u, "savewd_save");
  v10 = sub_40AE10(".", 0, a3);
  if ( v10 >= 0 )
  {
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = v10;
    goto LABEL_10;
  }
  v18 = *__errno_location();
  if ( v18 != 13 && v18 != 116 )
  {
    *(_DWORD *)a1 = 4;
    *(_DWORD *)(a1 + 4) = v18;
    goto LABEL_10;
  }
  *(_QWORD *)a1 = -4294967293LL;
LABEL_26:
  v17 = fork();
  *(_DWORD *)(a1 + 4) = v17;
  if ( v17 )
  {
    if ( v17 > 0 )
    {
      v12 = 1;
      v11 = -2;
      goto LABEL_21;
    }
    *(_DWORD *)a1 = 4;
    *(_DWORD *)(a1 + 4) = *__errno_location();
  }
LABEL_10:
  if ( v7 < 0 )
  {
    v11 = chdir(a2);
    if ( !v11 )
      goto LABEL_18;
    return (unsigned int)v11;
  }
  v11 = fchdir(v7);
  if ( v11 )
  {
    v12 = v4 == 0;
    goto LABEL_21;
  }
LABEL_18:
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      *(_DWORD *)a1 = 2;
      break;
    case 2:
    case 4:
    case 5:
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 4) )
        __assert_fail("wd->val.child == 0", "lib/savewd.c", 0x9Bu, "savewd_chdir");
      return result;
    default:
      __assert_fail("0", "lib/savewd.c", 0x9Fu, "savewd_chdir");
      return result;
  }
  v12 = v4 == 0;
  v11 = 0;
LABEL_21:
  if ( v7 < 0 || !v12 )
    return (unsigned int)v11;
  v14 = __errno_location();
  v15 = *v14;
  v16 = v14;
  close(v7);
  result = (unsigned int)v11;
  *v16 = v15;
  return result;
}

int __fastcall sub_40F770(__int64 a1, int a2)
{
  __pid_t v2; // ebp@2
  int result; // eax@4
  int v4; // er12@5
  int *v5; // rbp@5
  __int16 v6; // ax@9
  int *v7; // rax@14
  int stat_loc; // [sp+Ch] [bp-1Ch]@8

  switch ( *(_DWORD *)a1 )
  {
    case 3:
      v2 = *(_DWORD *)(a1 + 4);
      if ( !v2 )
        _exit(a2);
      if ( v2 <= 0 )
        return 0;
      while ( waitpid(v2, &stat_loc, 0) < 0 )
      {
        if ( *__errno_location() != 4 )
          __assert_fail("(*__errno_location ()) == 4", "lib/savewd.c", 0xD8u, "savewd_restore");
      }
      v6 = stat_loc;
      *(_DWORD *)(a1 + 4) = -1;
      if ( v6 & 0x7F )
      {
        raise(v6 & 0x7F);
        HIBYTE(v6) = BYTE1(stat_loc);
      }
      return HIBYTE(v6);
    case 0:
    case 1:
      return 0;
    case 4:
      v4 = *(_DWORD *)(a1 + 4);
      v5 = __errno_location();
      goto LABEL_6;
    case 2:
      result = fchdir(*(_DWORD *)(a1 + 4));
      if ( result )
      {
        v7 = __errno_location();
        v4 = *v7;
        v5 = v7;
        close(*(_DWORD *)(a1 + 4));
        *(_DWORD *)a1 = 4;
        *(_DWORD *)(a1 + 4) = v4;
LABEL_6:
        *v5 = v4;
        result = -1;
      }
      else
      {
        *(_DWORD *)a1 = 1;
      }
      return result;
    default:
      __assert_fail("0", "lib/savewd.c", 0xE2u, "savewd_restore");
      return result;
  }
}

int __fastcall sub_40F8A0(__int64 a1)
{
  int result; // eax@1

  result = *(_DWORD *)a1;
  switch ( *(_DWORD *)a1 )
  {
    case 1:
    case 2:
      result = close(*(_DWORD *)(a1 + 4));
      break;
    case 0:
    case 4:
      break;
    case 3:
      result = *(_DWORD *)(a1 + 4);
      if ( result >= 0 )
        __assert_fail("wd->val.child < 0", "lib/savewd.c", 0xF7u, "savewd_finish");
      return result;
    default:
      __assert_fail("0", "lib/savewd.c", 0xFBu, "savewd_finish");
      return result;
  }
  *(_DWORD *)a1 = 5;
  return result;
}

__int64 __fastcall sub_40F910(int a1, __int64 a2, int (__fastcall *a3)(_QWORD, int *, __int64), __int64 a4)
{
  int (__fastcall *v4)(_QWORD, int *, __int64); // r13@1
  int v5; // ebp@2
  __int64 v6; // rax@3
  _BYTE *v7; // rdx@4
  __int64 v8; // r15@7
  int *v9; // rbx@7
  int v10; // er14@7
  int i; // eax@7
  int v12; // eax@8
  int v13; // eax@11
  _QWORD *v14; // r15@20
  unsigned __int64 v15; // rbp@20
  int v16; // eax@21
  __int64 v18; // [sp+8h] [bp-60h]@1
  int v19; // [sp+28h] [bp-40h]@1
  int v20; // [sp+2Ch] [bp-3Ch]@16

  v4 = a3;
  v18 = a4;
  v19 = 0;
  if ( a1 - 1 < 0 )
    goto LABEL_27;
  v5 = a1 - 1;
  if ( **(_BYTE **)(a2 + 8LL * (a1 - 1)) == 47 )
  {
    v6 = a1 - 2;
    do
    {
      v5 = v6;
      if ( (signed int)v6 < 0 )
        break;
      v7 = *(_BYTE **)(a2 + 8 * v6--);
    }
    while ( *v7 == 47 );
  }
  if ( v5 <= 0 )
  {
LABEL_27:
    v10 = 0;
    v5 = 0;
    v9 = &v19;
  }
  else
  {
    v8 = a2;
    v9 = &v19;
    v10 = 0;
    for ( i = 0; ; i = v19 )
    {
      if ( i != 3 || v20 <= 0 )
      {
        v12 = v4(*(_QWORD *)v8, &v19, v18);
        if ( v10 < v12 )
          v10 = v12;
      }
      if ( **(_BYTE **)(v8 + 8) != 47 )
      {
        v13 = sub_40F770((__int64)&v19, v10);
        if ( v10 < v13 )
          v10 = v13;
      }
      v8 += 8LL;
      if ( v8 == a2 + 8LL * (unsigned int)(v5 - 1) + 8 )
        break;
    }
  }
  sub_40F8A0((__int64)v9);
  if ( a1 > v5 )
  {
    v14 = (_QWORD *)(a2 + 8LL * v5);
    v15 = a2 + 8 * (v5 + (unsigned __int64)(unsigned int)(a1 - 1 - v5)) + 8;
    do
    {
      v16 = v4(*v14, v9, v18);
      if ( v10 < v16 )
        v10 = v16;
      ++v14;
    }
    while ( v14 != (_QWORD *)v15 );
  }
  return (unsigned int)v10;
}

__int64 __fastcall sub_40FA60(char *filename)
{
  int v1; // ebx@1
  int *v2; // rax@1
  __int64 result; // rax@3
  __int64 v4; // [sp+0h] [bp-98h]@1

  v1 = __lxstat(1, filename, (struct stat *)&v4);
  v2 = __errno_location();
  if ( v1 && *v2 != 75 )
  {
    result = (unsigned int)-(*v2 != 2);
  }
  else
  {
    *v2 = 17;
    result = 0xFFFFFFFFLL;
  }
  return result;
}

int __fastcall sub_40FAC0(const char *a1)
{
  return mkdir(a1, 0x1C0u);
}

int __fastcall sub_40FAD0(const char *a1, int *a2)
{
  int v2; // esi@1

  v2 = *a2;
  LOBYTE(v2) = v2 & 0x3C | 0xC2;
  return open(a1, v2, 384LL);
}

void __noreturn sub_40FAF0()
{
  __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147u, "gen_tempname_len");
}

__int64 __fastcall sub_40FB10(char *s, int a2, __int64 a3, int (__fastcall *a4)(char *, __int64), size_t a5)
{
  size_t v5; // r13@1
  int *v6; // rax@1
  int *v7; // r15@1
  size_t v8; // rax@1
  size_t v9; // rdx@1
  size_t v10; // rbx@2
  void *v11; // rax@3
  void *v12; // rbp@3
  signed int v13; // er12@4
  char *v14; // rbx@4
  char *v15; // r14@5
  __int64 v16; // rax@6
  int v17; // edx@7
  int v18; // ecx@8
  signed int v19; // edx@10
  int v20; // ST10_4@12
  int v21; // ST08_4@12
  char *v23; // [sp+10h] [bp-58h]@2
  __int64 v24; // [sp+18h] [bp-50h]@1
  int (__fastcall *v25)(char *, __int64); // [sp+20h] [bp-48h]@1
  int v26; // [sp+2Ch] [bp-3Ch]@1

  v5 = a5;
  v24 = a3;
  v25 = a4;
  v6 = __errno_location();
  v7 = v6;
  v26 = *v6;
  v8 = strlen(s);
  v9 = v5 + a2;
  if ( v9 > v8 || (v10 = v8 - v9, v23 = &s[v8 - v9], v5 > strspn(&s[v8 - v9], "X")) )
  {
    *v7 = 22;
    v19 = -1;
  }
  else
  {
    LODWORD(v11) = sub_413800(0LL, v5);
    v12 = v11;
    if ( v11 )
    {
      v13 = 238328;
      v14 = &s[v5] + v10;
      while ( 1 )
      {
        v15 = v23;
        if ( v5 )
        {
          do
          {
            ++v15;
            LODWORD(v16) = sub_413840(v12, 61LL);
            *(v15 - 1) = byte_41A1C0[v16];
          }
          while ( v15 != v14 );
        }
        v17 = v25(s, v24);
        if ( v17 >= 0 )
        {
          *v7 = v26;
          v18 = v26;
          goto LABEL_12;
        }
        v18 = *v7;
        if ( *v7 != 17 )
          break;
        if ( !--v13 )
        {
          sub_413960(v12);
          *v7 = 17;
          return (unsigned int)-1;
        }
      }
      v17 = -1;
LABEL_12:
      v20 = v17;
      v21 = v18;
      sub_413960(v12);
      v19 = v20;
      *v7 = v21;
    }
    else
    {
      v19 = -1;
    }
  }
  return (unsigned int)v19;
}

__int64 __fastcall sub_40FCF0(int fd)
{
  __int64 result; // rax@2
  int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_4143D0();
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

__int64 __fastcall sub_40FD60(char *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13@1
  signed __int64 v5; // r12@1
  signed __int64 v6; // rbp@1
  __int64 v7; // r14@1
  signed int v8; // er15@1
  int v9; // ebx@1
  char **v10; // rdx@5
  _QWORD *v11; // rsi@6
  __int64 v12; // rax@7
  __int64 v13; // r9@7
  signed int v14; // edi@10
  __int64 *v16; // rdx@21
  __int64 v17; // rcx@23
  int v18; // er10@23
  int v19; // edi@23
  int v20; // ecx@24
  signed int v21; // esi@24
  signed int v22; // er8@25
  signed int v23; // er15@26
  int v24; // er11@27
  signed __int64 v25; // rax@31
  int v26; // eax@38
  signed int v27; // er8@38
  __int64 v28; // r9@38
  bool v29; // al@38
  int v30; // eax@41
  signed int v31; // er8@41
  int v32; // er10@41
  char v33; // al@42
  int v34; // ecx@42
  int v35; // eax@43
  int v36; // er10@44
  signed int v37; // ecx@48
  signed int v38; // esi@50
  signed __int64 v39; // rax@54
  _QWORD *v40; // rax@57
  __int64 v41; // rdi@59
  __int64 v42; // rax@60
  int v43; // eax@65
  int v44; // eax@68
  __int64 v45; // [sp+0h] [bp-148h]@37
  __int64 v46; // [sp+0h] [bp-148h]@40
  __int64 v47; // [sp+0h] [bp-148h]@43
  bool v48; // [sp+8h] [bp-140h]@2
  __int64 v49; // [sp+10h] [bp-138h]@5
  int v50; // [sp+10h] [bp-138h]@43
  signed int v51; // [sp+18h] [bp-130h]@10
  signed int v52; // [sp+18h] [bp-130h]@37
  signed int v53; // [sp+18h] [bp-130h]@40
  signed int v54; // [sp+18h] [bp-130h]@43
  char **v55; // [sp+18h] [bp-130h]@57
  char *filename; // [sp+20h] [bp-128h]@5
  __int64 v57; // [sp+30h] [bp-118h]@23
  signed int v58; // [sp+3Ch] [bp-10Ch]@26
  __int64 v59; // [sp+48h] [bp-100h]@24
  __int64 v60; // [sp+50h] [bp-F8h]@21
  int v61; // [sp+58h] [bp-F0h]@22
  char v62; // [sp+5Ch] [bp-ECh]@22
  __int64 v63; // [sp+60h] [bp-E8h]@37
  __int64 v64; // [sp+68h] [bp-E0h]@37
  __int64 v65; // [sp+70h] [bp-D8h]@37
  __int64 v66; // [sp+78h] [bp-D0h]@37
  struct stat stat_buf; // [sp+80h] [bp-C8h]@41

  v4 = *(_QWORD *)(a3 + 96);
  v5 = *(_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(a3 + 88);
  v7 = *(_QWORD *)(a2 + 96);
  v8 = *(_QWORD *)(a3 + 96);
  v9 = a4 & 1;
  if ( !(a4 & 1) )
  {
LABEL_12:
    if ( v6 > v5 )
      goto LABEL_19;
    v9 = 1;
    if ( v6 == v5 )
    {
      if ( v8 <= (signed int)v7 )
        return v8 < (signed int)v7;
LABEL_19:
      return (unsigned int)-1;
    }
    return (unsigned int)v9;
  }
  v48 = v5 == v6 && (_DWORD)v7 == (_DWORD)v4;
  if ( v48 )
    return 0;
  if ( v6 - 1 > v5 )
    goto LABEL_19;
  if ( v5 - 1 <= v6 )
  {
    v10 = (char **)qword_621B20;
    v49 = a2;
    filename = a1;
    if ( !qword_621B20 )
    {
      v10 = sub_40BB50(0x10uLL, 0LL, sub_40FD40, sub_40FD50, (char *)free);
      qword_621B20 = (__int64)v10;
      if ( !v10 )
        goto LABEL_21;
    }
    v11 = (_QWORD *)qword_621B18;
    if ( !qword_621B18 )
    {
      v55 = v10;
      v40 = malloc(0x10uLL);
      v11 = v40;
      qword_621B18 = (__int64)v40;
      if ( !v40 )
      {
        v41 = qword_621B20;
        goto LABEL_60;
      }
      *((_DWORD *)v40 + 2) = 2000000000;
      v10 = v55;
      *((_BYTE *)v40 + 12) = 0;
    }
    *v11 = *(_QWORD *)v49;
    v12 = sub_40C2F0((__int64)v10, (__int64)v11);
    v13 = v12;
    if ( v12 )
    {
      if ( qword_621B18 == v12 )
        qword_621B18 = 0LL;
      goto LABEL_10;
    }
    v41 = qword_621B20;
    if ( !qword_621B20 )
    {
LABEL_21:
      v16 = &v60;
LABEL_22:
      v61 = 2000000000;
      v13 = (__int64)v16;
      v62 = 0;
      v51 = 2000000000;
      goto LABEL_23;
    }
LABEL_60:
    v60 = *(_QWORD *)v49;
    v42 = sub_40B8E0(v41, (__int64)&v60);
    v16 = &v60;
    v13 = v42;
    if ( !v42 )
      goto LABEL_22;
LABEL_10:
    v14 = *(_DWORD *)(v13 + 8);
    v51 = *(_DWORD *)(v13 + 8);
    if ( *(_BYTE *)(v13 + 12) )
    {
      v6 = ~(v14 == 2000000000) & (unsigned __int64)v6;
      v8 = v4 - v8 % v14;
      goto LABEL_12;
    }
LABEL_23:
    v17 = *(_QWORD *)(v49 + 112);
    v57 = *(_QWORD *)(v49 + 80);
    v18 = (signed int)v17 / 10;
    v19 = (signed int)v7 / 10;
    if ( (signed int)v7 % 10 | (signed int)v57 % 10 | (signed int)v17 % 10 )
    {
LABEL_56:
      *(_DWORD *)(v13 + 8) = v9;
      *(_BYTE *)(v13 + 12) = 1;
      goto LABEL_12;
    }
    v20 = (signed int)v57 / 10;
    v21 = v18;
    v59 = *(_QWORD *)(v49 + 72);
    if ( v51 <= 10 )
    {
      *(_DWORD *)(v13 + 8) = 10;
      v25 = v6;
      v22 = 10;
    }
    else
    {
      v22 = 10;
      if ( (signed int)v7 / 10 % 10 | v18 % 10 | (signed int)v57 / 10 % 10 )
      {
        *(_DWORD *)(v13 + 8) = 10;
        v25 = v6;
      }
      else
      {
        v58 = v8;
        v23 = 8;
        do
        {
          v24 = 10 * v22;
          v22 = v24;
          v20 /= 10;
          v21 /= 10;
          v19 /= 10;
          if ( v24 >= v51 || v19 % 10 | v21 % 10 | v20 % 10 )
          {
            v48 = v24 == 2000000000;
            v8 = v58;
            *(_DWORD *)(v13 + 8) = v24;
            v25 = v6 & ~(v24 == 2000000000);
            goto LABEL_32;
          }
          --v23;
        }
        while ( v23 );
        v8 = v58;
        if ( (*(_BYTE *)(v49 + 104) | (unsigned __int8)(v5 | v59)) & 1 )
        {
          *(_DWORD *)(v13 + 8) = 1000000000;
          v25 = v6;
          v22 = 1000000000;
        }
        else
        {
          *(_DWORD *)(v13 + 8) = 2000000000;
          v22 = 2000000000;
          v25 = v6 & 0xFFFFFFFFFFFFFFFELL;
          v48 = 1;
        }
      }
    }
LABEL_32:
    if ( v5 > v6 || (signed int)v7 >= (signed int)v4 && v5 == v6 )
      return (unsigned int)v9;
    if ( v5 < v25 || v5 == v25 && (signed int)v4 - v8 % v22 > (signed int)v7 )
      goto LABEL_19;
    v52 = v22;
    v63 = v59;
    v64 = (signed int)v57;
    v65 = v5 | v48;
    v66 = (signed int)(v22 / 9u + v7);
    v45 = v13;
    if ( (*(_DWORD *)(v49 + 24) & 0xF000) == 40960 )
    {
      v43 = sub_410AB0(filename);
      v28 = v45;
      v27 = v52;
      v29 = v43 != 0;
    }
    else
    {
      v26 = sub_410AA0(filename);
      v27 = v52;
      v28 = v45;
      v29 = v26 != 0;
    }
    if ( v29 )
LABEL_46:
      return (unsigned int)-2;
    v53 = v27;
    v46 = v28;
    if ( (*(_DWORD *)(v49 + 24) & 0xF000) == 40960 )
    {
      v44 = __lxstat(1, filename, &stat_buf);
      v13 = v46;
      v31 = v53;
      v32 = v44;
    }
    else
    {
      v30 = __xstat(1, filename, &stat_buf);
      v31 = v53;
      v13 = v46;
      v32 = v30;
    }
    v33 = stat_buf.st_mtim.tv_sec;
    v34 = stat_buf.st_mtim.tv_nsec;
    if ( v32 | v5 ^ stat_buf.st_mtim.tv_sec | stat_buf.st_mtim.tv_nsec ^ (signed int)v7 )
    {
      v66 = (signed int)v7;
      v65 = v5;
      v35 = *(_DWORD *)(v49 + 24);
      v54 = v31;
      v50 = v32;
      v47 = v13;
      if ( (v35 & 0xF000) == 40960 )
      {
        sub_410AB0(filename);
        v13 = v47;
        v36 = v50;
        v31 = v54;
      }
      else
      {
        sub_410AA0(filename);
        v31 = v54;
        v36 = v50;
        v13 = v47;
      }
      if ( v36 )
        goto LABEL_46;
      v33 = stat_buf.st_mtim.tv_sec;
      v34 = stat_buf.st_mtim.tv_nsec;
    }
    v37 = 1000000000 * (v33 & 1) + v34;
    if ( v37 == 10 * (v37 / 10) )
    {
      if ( v31 != 10 )
      {
        v38 = 9;
        v9 = 10;
        do
        {
          v37 /= 10;
          if ( v37 != 10 * (v37 / 10) )
            break;
          if ( !--v38 )
          {
            v39 = -2LL;
            v9 = 2000000000;
            goto LABEL_55;
          }
          v9 *= 10;
        }
        while ( v9 != v31 );
        v39 = ~(v9 == 2000000000);
        goto LABEL_55;
      }
      v9 = 10;
    }
    v39 = -1LL;
LABEL_55:
    v6 &= v39;
    v8 = v4 - v8 % v9;
    goto LABEL_56;
  }
  return (unsigned int)v9;
}

signed __int64 __fastcall sub_4104D0(__int64 a1, struct timespec **a2)
{
  struct timespec *v2; // rbx@1
  __syscall_slong_t v3; // rax@1
  __syscall_slong_t v4; // rdx@1
  __syscall_slong_t v5; // rax@4
  signed __int64 result; // rax@4
  __syscall_slong_t v7; // rax@7

  v2 = *a2;
  v3 = (*a2)->tv_nsec;
  v4 = (*a2)[1].tv_nsec;
  if ( v3 == 1073741822 )
  {
    result = 1LL;
    if ( v4 == 1073741822 )
      return result;
    v7 = *(_QWORD *)(a1 + 80);
    v2->tv_sec = *(_QWORD *)(a1 + 72);
    v2->tv_nsec = v7;
  }
  else if ( v3 == 0x3FFFFFFF )
  {
    if ( v4 == 0x3FFFFFFF )
    {
      *a2 = 0LL;
      return 0LL;
    }
    sub_412F80(*a2);
    v4 = v2[1].tv_nsec;
    if ( v4 == 1073741822 )
      goto LABEL_4;
  }
  else if ( v4 == 1073741822 )
  {
LABEL_4:
    v5 = *(_QWORD *)(a1 + 96);
    v2[1].tv_sec = *(_QWORD *)(a1 + 88);
    v2[1].tv_nsec = v5;
    return 0LL;
  }
  result = 0LL;
  if ( v4 == 0x3FFFFFFF )
  {
    sub_412F80(v2 + 1);
    result = 0LL;
  }
  return result;
}

signed __int64 __fastcall sub_4105A0(__int64 a1)
{
  unsigned __int64 v1; // r9@1
  unsigned __int64 v2; // rdx@3
  int v3; // ecx@5
  signed int v4; // er10@5
  signed __int64 result; // rax@9

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 - 1073741822 > 1 && v1 > 0x3B9AC9FF || (v2 = *(_QWORD *)(a1 + 24), v2 - 1073741822 > 1) && v2 > 0x3B9AC9FF )
  {
    *__errno_location() = 22;
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    if ( v1 - 1073741822 <= 1 )
    {
      *(_QWORD *)a1 = 0LL;
      v4 = 1;
      v3 = v1 == 1073741822;
    }
    if ( v2 - 1073741822 <= 1 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      v4 = 1;
      v3 += v2 == 1073741822;
    }
    result = v4 + (unsigned int)(v3 == 1);
  }
  return result;
}

__int64 __fastcall sub_410660(int fd, char *filename, __int64 a3)
{
  char *v3; // rbp@1
  int v4; // ebx@1
  __m128i v5; // xmm1@2
  signed int v6; // er13@2
  struct timespec *v7; // rsi@7
  int v8; // er12@9
  bool v9; // zf@9
  bool v10; // al@14
  signed __int64 v11; // rdi@19
  struct timeval *v12; // r13@19
  signed __int64 v13; // rsi@19
  struct timeval *v14; // rdx@19
  struct utimbuf *v15; // rsi@22
  __time_t v16; // rax@23
  bool v18; // al@30
  __time_t v19; // rdx@34
  bool v20; // bp@40
  bool v21; // r14@40
  __time_t v22; // rax@43
  __m128i v23; // xmm3@43
  bool v24; // dl@43
  bool v25; // r14@43
  __syscall_slong_t v26; // rax@51
  struct timespec *times; // [sp+8h] [bp-120h]@2
  __m128i v28; // [sp+10h] [bp-118h]@2
  __m128i v29; // [sp+20h] [bp-108h]@2
  struct timeval tvp; // [sp+30h] [bp-F8h]@19
  __int64 v31; // [sp+40h] [bp-E8h]@19
  __int64 v32; // [sp+48h] [bp-E0h]@19
  struct utimbuf file_times; // [sp+50h] [bp-D8h]@23
  __m128i v34; // [sp+60h] [bp-C8h]@43
  struct stat stat_buf; // [sp+70h] [bp-B8h]@14

  v3 = filename;
  v4 = fd;
  if ( a3 )
  {
    v5 = _mm_loadu_si128((const __m128i *)(a3 + 16));
    times = (struct timespec *)&v28;
    v28 = _mm_loadu_si128((const __m128i *)a3);
    v29 = v5;
    v6 = sub_4105A0((__int64)&v28);
    if ( v6 < 0 )
      goto LABEL_53;
  }
  else
  {
    times = 0LL;
    v6 = 0;
  }
  if ( fd < 0 && !filename )
  {
    *__errno_location() = 9;
    goto LABEL_53;
  }
  if ( dword_621B2C < 0 )
    goto LABEL_11;
  if ( v6 == 2 )
  {
    if ( fd < 0 )
      v18 = __xstat(1, filename, &stat_buf) != 0;
    else
      v18 = __fxstat(1, fd, &stat_buf) != 0;
    if ( v18 )
      goto LABEL_53;
    v7 = times;
    if ( times->tv_nsec == 1073741822 )
    {
      v26 = stat_buf.st_atim.tv_nsec;
      v6 = 3;
      times->tv_sec = stat_buf.st_atim.tv_sec;
      v7->tv_nsec = v26;
    }
    else
    {
      v6 = 3;
      if ( times[1].tv_nsec == 1073741822 )
      {
        v19 = stat_buf.st_mtim.tv_sec;
        times[1].tv_nsec = stat_buf.st_mtim.tv_nsec;
        v7[1].tv_sec = v19;
      }
    }
  }
  else
  {
    v7 = times;
  }
  if ( fd < 0 )
  {
    v8 = utimensat(-100, v3, v7, 0);
    v9 = v8 == 0;
    if ( v8 > 0 )
      goto LABEL_10;
  }
  else
  {
    v8 = futimens(fd, v7);
    v9 = v8 == 0;
    if ( v8 > 0 )
    {
LABEL_10:
      *__errno_location() = 38;
      goto LABEL_11;
    }
  }
  if ( v9 || *__errno_location() != 38 )
  {
    dword_621B2C = 1;
    return (unsigned int)v8;
  }
LABEL_11:
  dword_621B2C = -1;
  dword_621B28 = -1;
  if ( !v6 )
    goto LABEL_18;
  if ( v6 != 3 )
  {
    v10 = fd < 0 ? __xstat(1, v3, &stat_buf) != 0 : __fxstat(1, fd, &stat_buf) != 0;
    if ( v10 )
LABEL_53:
      return (unsigned int)-1;
  }
  if ( !times )
    goto LABEL_26;
  v8 = 0;
  if ( (unsigned __int8)sub_4104D0((__int64)&stat_buf, &times) )
    return (unsigned int)v8;
LABEL_18:
  if ( times )
  {
    v11 = times->tv_nsec;
    v12 = &tvp;
    tvp.tv_sec = times->tv_sec;
    v13 = times[1].tv_nsec;
    v31 = times[1].tv_sec;
    tvp.tv_usec = ((signed __int64)((unsigned __int128)(2361183241434822607LL * v11) >> 64) >> 7) - (v11 >> 63);
    v14 = &tvp;
    v32 = ((signed __int64)((unsigned __int128)(2361183241434822607LL * v13) >> 64) >> 7) - (v13 >> 63);
    if ( v4 >= 0 )
      goto LABEL_20;
LABEL_27:
    return (unsigned int)futimesat(-100, v3, v14);
  }
LABEL_26:
  v12 = 0LL;
  v14 = 0LL;
  if ( fd < 0 )
    goto LABEL_27;
LABEL_20:
  v8 = futimesat(v4, 0LL, v14);
  if ( !v8 )
  {
    if ( !v12 )
      return (unsigned int)v8;
    v20 = v12->tv_usec > 499999;
    v21 = v12[1].tv_usec > 499999;
    if ( v12->tv_usec <= 499999 && !v21 )
      return (unsigned int)v8;
    if ( __fxstat(1, v4, &stat_buf) )
      return (unsigned int)v8;
    v22 = stat_buf.st_atim.tv_sec - v12->tv_sec;
    v23 = _mm_load_si128((const __m128i *)&v12[1]);
    v24 = stat_buf.st_mtim.tv_sec - v12[1].tv_sec == 1;
    file_times = (struct utimbuf)_mm_load_si128((const __m128i *)v12);
    v34 = v23;
    v25 = v24 && v21;
    if ( v22 != 1 || !v20 || stat_buf.st_atim.tv_nsec )
    {
      if ( !v25 || stat_buf.st_mtim.tv_nsec )
        goto LABEL_49;
    }
    else
    {
      file_times.modtime = 0LL;
      if ( !v25 || stat_buf.st_mtim.tv_nsec )
        goto LABEL_48;
    }
    v34.m128i_i64[1] = 0LL;
LABEL_48:
    futimesat(v4, 0LL, (const struct timeval *__attribute__((__org_arrdim(0,2))) )&file_times);
LABEL_49:
    return 0;
  }
  v8 = -1;
  if ( v3 )
  {
    v15 = 0LL;
    if ( times )
    {
      v16 = times[1].tv_sec;
      v15 = &file_times;
      file_times.actime = times->tv_sec;
      file_times.modtime = v16;
    }
    v8 = utime(v3, v15);
  }
  return (unsigned int)v8;
}

__int64 __fastcall sub_410AA0(char *filename, __int64 a2)
{
  return sub_410660(-1, filename, a2);
}

__int64 __fastcall sub_410AB0(char *filename, __int64 a2)
{
  __m128i v2; // xmm1@2
  signed int v3; // ebx@2
  struct timespec *v4; // rdx@5
  int v5; // eax@6
  int v6; // ebp@6
  unsigned int v7; // ebp@11
  __int64 result; // rax@14
  __time_t v9; // rcx@27
  __syscall_slong_t v10; // rax@28
  struct timespec *times; // [sp+8h] [bp-D0h]@2
  __m128i v12; // [sp+10h] [bp-C8h]@2
  __m128i v13; // [sp+20h] [bp-B8h]@2
  struct stat stat_buf; // [sp+30h] [bp-A8h]@11

  if ( a2 )
  {
    v2 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    times = (struct timespec *)&v12;
    v12 = _mm_loadu_si128((const __m128i *)a2);
    v13 = v2;
    v3 = sub_4105A0((__int64)&v12);
    if ( v3 < 0 )
      return (unsigned int)-1;
    if ( dword_621B28 < 0 )
      goto LABEL_8;
    if ( v3 == 2 )
    {
      if ( __lxstat(1, filename, &stat_buf) )
        return (unsigned int)-1;
      v4 = times;
      if ( times->tv_nsec == 1073741822 )
      {
        v10 = stat_buf.st_atim.tv_nsec;
        v3 = 3;
        times->tv_sec = stat_buf.st_atim.tv_sec;
        v4->tv_nsec = v10;
      }
      else
      {
        v3 = 3;
        if ( times[1].tv_nsec == 1073741822 )
        {
          v9 = stat_buf.st_mtim.tv_sec;
          times[1].tv_nsec = stat_buf.st_mtim.tv_nsec;
          v4[1].tv_sec = v9;
        }
      }
    }
    else
    {
      v4 = times;
    }
  }
  else
  {
    v4 = 0LL;
    v3 = 0;
    times = 0LL;
    if ( dword_621B28 < 0 )
    {
      dword_621B28 = -1;
      goto LABEL_17;
    }
  }
  v5 = utimensat(-100, filename, v4, 256);
  v6 = v5;
  if ( v5 > 0 )
  {
    *__errno_location() = 38;
    goto LABEL_8;
  }
  if ( v5 && *__errno_location() == 38 )
  {
LABEL_8:
    dword_621B28 = -1;
    if ( v3 )
    {
      if ( v3 == 3 )
      {
        if ( !times )
        {
LABEL_12:
          if ( (stat_buf.st_mode & 0xF000) != 40960 )
            return (unsigned int)sub_410660(-1, filename, (__int64)times);
          *__errno_location() = 38;
          return (unsigned int)-1;
        }
      }
      else
      {
        if ( __lxstat(1, filename, &stat_buf) )
          return (unsigned int)-1;
        if ( !times )
          goto LABEL_12;
      }
      v7 = 0;
      if ( (unsigned __int8)sub_4104D0((__int64)&stat_buf, &times) )
        return v7;
      goto LABEL_12;
    }
LABEL_17:
    if ( __lxstat(1, filename, &stat_buf) )
      return (unsigned int)-1;
    goto LABEL_12;
  }
  dword_621B2C = 1;
  result = (unsigned int)v6;
  dword_621B28 = 1;
  return result;
}

int __fastcall sub_410D00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_410D00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_411160(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_410D00(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_410D00(a1, a2, a3, a4, (__int64)v15, v9);
}

char sub_4112A0()
{
  char result; // al@2
  __uid_t v1; // eax@3

  if ( byte_621B31 )
  {
    result = byte_621B30;
  }
  else
  {
    v1 = geteuid();
    byte_621B31 = 1;
    result = v1 == 0;
    byte_621B30 = result;
  }
  return result;
}

void *__fastcall sub_4112E0(size_t a1, __int64 a2)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_411530(a1, a2);
  }
  return result;
}

void *__fastcall sub_411340(void *a1, size_t a2)
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
        sub_411530(a1, a2);
    }
  }
  return result;
}

void *__fastcall sub_4114E0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_4112E0(a2, a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_411510(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_4114E0(a1, v1 + 1);
}

void __noreturn sub_411530()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_411570(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
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

__int64 sub_4119A0()
{
  unsigned int v0; // ebx@1
  __ssize_t v1; // rax@1
  const char *v2; // rdi@2
  char *v3; // rax@2
  char *v5; // [sp+0h] [bp-18h]@1
  size_t n; // [sp+8h] [bp-10h]@1

  v0 = 0;
  v5 = 0LL;
  n = 0LL;
  v1 = __getdelim(&v5, &n, 10, stdin);
  if ( v1 > 0 )
  {
    v2 = v5;
    v3 = &v5[v1 - 1];
    if ( *v3 == 10 )
    {
      *v3 = 0;
      v2 = v5;
    }
    LOBYTE(v0) = rpmatch(v2) > 0;
  }
  free(v5);
  return v0;
}

__int64 __fastcall sub_411A10(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_621B34 < 0 )
    {
      v4 = sub_411A10(a1);
      if ( v4 >= 0 && dword_621B34 == -1 )
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
        dword_621B34 = 1;
      }
      else
      {
        v4 = sub_411A10(a1);
        if ( v4 >= 0 )
        {
          dword_621B34 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_411B50(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_411BC0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

__int64 __fastcall sub_411B90(__int64 a1)
{
  __int64 result; // rax@1

  result = 0LL;
  if ( *(_QWORD *)(a1 + 40) <= *(_QWORD *)(a1 + 32) )
  {
    result = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)a1 & 0x100 )
      result += *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 72);
  }
  return result;
}

int __fastcall sub_411BC0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_411C20(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_411D00(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_412320(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_411C20(a2, a7);
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
        sub_411C20((__int64)v11, a7);
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
            v40 = sub_411D00(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_411D00(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_411D00(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_4128F0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_621B40 = dword_61F4DC;
  dword_621B44 = dword_61F4D8;
  result = sub_412320(a1, a2, a3, a4, a5, a6, (__int64)&dword_621B40, a7);
  dword_61F4DC = dword_621B40;
  qword_621B80 = qword_621B50;
  dword_61F4D4 = dword_621B48;
  return result;
}

__int64 __fastcall sub_412970(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_4128F0(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_4129F0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_412FC0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_412A70(FILE *s, __int64 a2, __int64 a3)
{
  char *v3; // rax@1
  unsigned __int64 v4; // rbx@1
  char *v5; // rbp@2
  int *v7; // rax@8
  int v8; // er13@8
  int *v9; // r12@8
  size_t n; // [sp+8h] [bp-800h]@1
  char v11; // [sp+10h] [bp-7F8h]@1

  n = 2000LL;
  LODWORD(v3) = sub_414470(&v11, &n, a2, a3);
  v4 = n;
  if ( !v3 )
    goto LABEL_10;
  v5 = v3;
  if ( fwrite(v3, 1uLL, n, s) >= v4 )
  {
    if ( v5 != &v11 )
      free(v5);
    if ( v4 <= 0x7FFFFFFF )
      return (unsigned int)v4;
    *__errno_location() = 75;
LABEL_10:
    LODWORD(v4) = -1;
    sub_414460(s);
    return (unsigned int)v4;
  }
  LODWORD(v4) = -1;
  if ( v5 != &v11 )
  {
    v7 = __errno_location();
    v8 = *v7;
    v9 = v7;
    free(v5);
    *v9 = v8;
  }
  return (unsigned int)v4;
}

__int64 __fastcall sub_412B30(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  *a4 = a3;
  return 0LL;
}

int __fastcall sub_412B40(const char *a1, int a2, __mode_t a3)
{
  int result; // eax@2

  if ( a2 == -1 )
    result = chmod(a1, a3);
  else
    result = fchmod(a2, a3);
  return result;
}

__int64 __fastcall sub_412B60(__mode_t *a1, const char *a2, int a3)
{
  return (unsigned int)-(sub_412B40(a2, a3, *a1) != 0);
}

void __noreturn sub_412B90()
{
  sub_4046F0(1);
}

signed __int64 __fastcall sub_412BA0(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_412CC0(char *a1, char *a2, __int64 a3)
{
  char *v3; // rbx@2
  _BYTE *v4; // rbp@3
  _BYTE *v5; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_40EC30(1LL, a1);
  v5 = sub_40E920(0LL, 8, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_412D40(char **a1, char *a2, size_t a3)
{
  char *v3; // r14@1
  size_t v4; // r13@1
  char *v5; // rbp@1
  FILE *v6; // rbx@1
  char *v7; // rax@1
  FILE *v8; // rsi@1
  __int64 v9; // rbx@1
  char *i; // r12@1
  _BYTE *v11; // rax@3
  _BYTE *v12; // rax@6
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
      v11 = sub_40EC50(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v12 = sub_40EC50(i);
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

__int64 __fastcall sub_412E60(char *a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(char **, char *))
{
  size_t v6; // r15@1
  void (__fastcall *v7)(char **, char *); // r13@1
  char *v8; // rbp@1
  char **v9; // rbx@1
  __int64 result; // rax@1

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (char **)a3;
  result = sub_412BA0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_412CC0(a1, (char *)a2, result);
    sub_412D40(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_412F20(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4143E0(stream);
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

int __fastcall sub_412F80(struct timespec *tp)
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

bool __fastcall sub_412FC0(int a1)
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

unsigned __int64 __fastcall sub_413020(_BYTE *a1, unsigned __int64 a2)
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

const char *sub_413060()
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
                sub_4143E0(v61);
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
            sub_4143E0(v40);
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

__int64 __usercall sub_4135D0@<rax>(int fd@<edi>, char *file@<rsi>, int a3@<edx>, __uid_t a4@<ecx>, __gid_t a5@<r8d>, int a6@<r9d>, int a7)
{
  int v7; // er14@1
  __gid_t v8; // er13@1
  __uid_t v9; // er12@1
  char *v10; // rbp@1
  int v11; // ebx@2
  __mode_t v12; // ecx@3
  int v13; // eax@8
  int v14; // edx@11
  int *v16; // rax@14
  signed int v17; // er12@14
  int *v18; // rbp@14
  int v19; // esi@20
  __mode_t v20; // ST0C_4@22
  int v21; // eax@22
  int v22; // eax@26
  int v23; // [sp+8h] [bp-D0h]@1
  __mode_t v24; // [sp+Ch] [bp-CCh]@7
  struct stat stat_buf; // [sp+10h] [bp-C8h]@2

  v7 = a6;
  v8 = a5;
  v9 = a4;
  v10 = file;
  v23 = a3;
  if ( fd < 0 )
  {
    v11 = __xstat(1, file, &stat_buf);
    if ( v11 )
      return (unsigned int)v11;
    v12 = stat_buf.st_mode;
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
    {
      v11 = -1;
      *__errno_location() = 20;
      return (unsigned int)v11;
    }
  }
  else
  {
    v11 = __fxstat(1, fd, &stat_buf);
    if ( v11 )
      goto LABEL_23;
    v12 = stat_buf.st_mode;
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
    {
      v16 = __errno_location();
      v17 = 20;
      v11 = -1;
      *v16 = 20;
      v18 = v16;
LABEL_15:
      close(fd);
      *v18 = v17;
      return (unsigned int)v11;
    }
  }
  if ( (v9 == -1 || stat_buf.st_uid == v9) && (v8 == -1 || stat_buf.st_gid == v8) )
    goto LABEL_18;
  if ( fd >= 0 )
  {
    v20 = v12;
    v21 = fchown(fd, v9, v8);
    v12 = v20;
    v11 = v21;
    if ( !v21 )
      goto LABEL_10;
LABEL_23:
    v18 = __errno_location();
    v17 = *v18;
    goto LABEL_15;
  }
  v24 = v12;
  if ( v23 == -1 )
  {
    v22 = chown(file, v9, v8);
    v12 = v24;
    v11 = v22;
  }
  else
  {
    v13 = lchown(file, v9, v8);
    v12 = v24;
    v11 = v13;
  }
  if ( !v11 )
  {
LABEL_10:
    if ( v12 & 0x49 )
    {
      v14 = v12 & 0xC00;
      goto LABEL_19;
    }
LABEL_18:
    v14 = 0;
LABEL_19:
    if ( (v14 | v7 ^ v12) & a7 )
    {
      v19 = v7 | (unsigned __int16)v12 & (unsigned __int16)~(_WORD)a7 & 0xFFF;
      if ( fd < 0 )
        return (unsigned int)chmod(v10, v19);
      v11 = fchmod(fd, v19);
      if ( v11 )
        goto LABEL_23;
    }
    else
    {
      v11 = 0;
      if ( fd < 0 )
        return (unsigned int)v11;
    }
    v11 = close(fd);
  }
  return (unsigned int)v11;
}

_QWORD *__fastcall sub_413800(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  __int64 v3; // rbx@1
  _QWORD *result; // rax@1

  LODWORD(v2) = sub_413A20();
  v3 = v2;
  result = 0LL;
  if ( v3 )
  {
    result = sub_4112E0(0x18uLL, a2);
    *result = v3;
    result[2] = 0LL;
    result[1] = 0LL;
  }
  return result;
}

unsigned __int64 __fastcall sub_413840(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14@1
  unsigned __int64 v3; // r13@1
  __int64 v4; // r12@1
  unsigned __int64 v5; // rbp@1
  unsigned __int64 v6; // rbx@1
  unsigned __int64 v7; // rsi@3
  unsigned __int64 v8; // rax@6
  __int64 v9; // rdx@6
  char *v10; // rax@8
  __int64 v11; // rdx@9
  char v13; // [sp+8h] [bp-40h]@8

  v2 = a2 + 1;
  v3 = a2;
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    if ( v6 >= v3 )
    {
      if ( v6 == v3 )
        goto LABEL_11;
    }
    else
    {
      v8 = v6;
      v9 = 0LL;
      do
      {
        ++v9;
        v8 = (v8 << 8) + 255;
      }
      while ( v3 > v8 );
      sub_413D30(v4, &v13, v9);
      v10 = &v13;
      do
      {
        v11 = (unsigned __int8)*v10++;
        v6 = (v6 << 8) + 255;
        v5 = v11 + (v5 << 8);
      }
      while ( v3 > v6 );
      if ( v6 == v3 )
      {
LABEL_11:
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        return v5;
      }
    }
    v7 = (v6 - v3) % v2;
    if ( v5 <= v6 - v7 )
      break;
    v6 = v7 - 1;
    v5 %= v2;
  }
  *(_QWORD *)(a1 + 8) = v5 / v2;
  v5 %= v2;
  *(_QWORD *)(a1 + 16) = (v6 - v3) / v2;
  return v5;
}

__int64 __fastcall sub_413960(void *ptr)
{
  unsigned int v1; // er12@1
  int *v2; // rax@1
  int v3; // er13@1
  int *v4; // rbp@1

  v1 = sub_413E90(*(void **)ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
  *v4 = v3;
  return v1;
}

void __fastcall __noreturn sub_4139C0(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

  if ( a1 )
  {
    v1 = sub_40EC50(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

void __fastcall __noreturn sub_4139C0(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

  if ( a1 )
  {
    v1 = sub_40EC50(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

__m128i *__fastcall sub_413A20(signed __int64 a1, unsigned __int64 a2)
{
  FILE *v2; // rax@3
  FILE *v3; // r13@3
  void *v4; // rax@4
  size_t v5; // rcx@4
  __m128i *v6; // rbx@6
  __m128i *v8; // rax@8
  signed __int64 v9; // r13@8
  int v10; // eax@8
  int v11; // er15@8
  signed __int64 v12; // rdx@9
  signed __int64 v13; // rax@11
  signed __int64 v14; // rbp@11
  struct timeval *v15; // r12@14
  unsigned __int64 v16; // r14@14
  signed __int64 v17; // rbp@15
  unsigned int v18; // eax@18
  __int64 v19; // rdx@19
  unsigned __int64 v20; // rbp@20
  signed __int64 v21; // r14@21
  unsigned int v22; // eax@24
  __int64 v23; // rdx@25
  unsigned __int64 v24; // rbp@26
  signed int v25; // eax@27
  signed int v26; // edi@29
  unsigned int v27; // eax@30
  __int64 v28; // rdx@31
  signed __int64 v29; // rcx@36
  struct timeval *v30; // r15@36
  signed __int64 v31; // rbp@38
  unsigned int v32; // ST08_4@38
  signed __int64 v33; // r14@39
  unsigned __int64 v34; // rcx@41
  struct timeval tv; // [sp+10h] [bp-48h]@14

  if ( !a2 )
  {
    v6 = (__m128i *)sub_4112E0(0x1038uLL, 0LL);
    v6->m128i_i64[0] = 0LL;
    v6->m128i_i64[1] = (__int64)sub_4139C0;
    v6[1].m128i_i64[0] = 0LL;
    return v6;
  }
  if ( !a1 )
  {
    v8 = (__m128i *)sub_4112E0(0x1038uLL, a2);
    v8->m128i_i64[0] = 0LL;
    v6 = v8;
    v9 = (signed __int64)&v8[2];
    v8->m128i_i64[1] = (__int64)sub_4139C0;
    v8[1].m128i_i64[0] = 0LL;
    v8[1].m128i_i64[1] = 0LL;
    v10 = open("/dev/urandom", 0);
    v11 = v10;
    if ( v10 < 0 )
    {
      v15 = &tv;
      v16 = 20LL;
      gettimeofday(&tv, 0LL);
      v6[2] = _mm_load_si128((const __m128i *)&tv);
      LODWORD(tv.tv_sec) = getpid();
      v6[3].m128i_i32[0] = tv.tv_sec;
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
      v15 = &tv;
      v29 = 2048 - v14;
      v30 = (struct timeval *)(v9 + v14);
      if ( (unsigned __int64)(2048 - v14) > 0x10 )
        v29 = 16LL;
      v31 = v29 + v14;
      v32 = v29;
      gettimeofday(&tv, 0LL);
      qmemcpy(v30, &tv, v32);
      if ( v31 > 2047 )
        goto LABEL_12;
      v33 = 2048 - v31;
      if ( (unsigned __int64)(2048 - v31) > 4 )
        v33 = 4LL;
      LODWORD(tv.tv_sec) = getpid();
      v34 = (unsigned int)v33;
      v16 = v31 + v33;
      qmemcpy((void *)(v9 + v31), &tv, v34);
      if ( v16 > 0x7FF )
        goto LABEL_12;
    }
    v17 = 2048 - v16;
    if ( 2048 - v16 > 4 )
      v17 = 4LL;
    LODWORD(tv.tv_sec) = getppid();
    if ( (_DWORD)v17 )
    {
      v18 = 0;
      do
      {
        v19 = v18++;
        *(_BYTE *)(v9 + v16 + v19) = *((_BYTE *)&v15->tv_sec + v19);
      }
      while ( v18 < (unsigned int)v17 );
    }
    v20 = v16 + v17;
    if ( v20 <= 0x7FF )
    {
      v21 = 2048 - v20;
      if ( 2048 - v20 > 4 )
        v21 = 4LL;
      LODWORD(tv.tv_sec) = getuid();
      if ( (_DWORD)v21 )
      {
        v22 = 0;
        do
        {
          v23 = v22++;
          *(_BYTE *)(v9 + v20 + v23) = *((_BYTE *)&v15->tv_sec + v23);
        }
        while ( v22 < (unsigned int)v21 );
      }
      v24 = v21 + v20;
      if ( v24 <= 0x7FF )
      {
        LODWORD(tv.tv_sec) = getgid();
        v25 = 2048 - v24;
        if ( 2048 - v24 > 4 )
          v25 = 4;
        v26 = v25;
        if ( v25 )
        {
          v27 = 0;
          do
          {
            v28 = v27++;
            *(_BYTE *)(v9 + v24 + v28) = *((_BYTE *)&v15->tv_sec + v28);
          }
          while ( v27 < v26 );
        }
      }
    }
LABEL_12:
    sub_414190(v9);
    return v6;
  }
  LODWORD(v2) = sub_415F90(a1, "rb");
  v3 = v2;
  if ( v2 )
  {
    v4 = sub_4112E0(0x1038uLL, (__int64)"rb");
    v5 = 4096LL;
    *(_QWORD *)v4 = v3;
    if ( a2 <= 0x1000 )
      v5 = a2;
    *((_QWORD *)v4 + 1) = sub_4139C0;
    v6 = (__m128i *)v4;
    *((_QWORD *)v4 + 2) = a1;
    setvbuf(v3, (char *)v4 + 24, 0, v5);
  }
  else
  {
    v6 = 0LL;
  }
  return v6;
}

int __fastcall sub_413D30(__int64 a1, char *a2, size_t a3)
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
        sub_413EE0(v13, v12);
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
          sub_413EE0(v13, v12);
          goto LABEL_15;
        }
        v15 = v4;
        v4 += 2048;
        LODWORD(v10) = sub_413EE0(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return v10;
}

__int64 __fastcall sub_413E90(void *ptr)
{
  FILE *v1; // rbp@1
  __int64 result; // rax@2

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_4143E0(v1);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_413EE0(__int64 a1, __int64 a2)
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

unsigned __int64 __fastcall sub_414190(__int64 a1)
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

__int64 __fastcall sub_4143D0(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return sub_411A10(a1, 0, 3LL, a4);
}

int __fastcall sub_4143E0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_411B50(stream) )
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

void __fastcall sub_414460(_DWORD *a1)
{
  *a1 |= 0x20u;
}

char *__fastcall sub_414470(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // r15@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@3
  unsigned __int64 v7; // rax@5
  size_t v8; // rdi@6
  void *v9; // rax@9
  size_t v10; // r12@11
  void *v11; // r14@13
  _BYTE *v12; // r8@13
  char *v13; // rbx@13
  size_t v14; // r15@13
  _BYTE *v15; // rcx@13
  char *v16; // rcx@14
  unsigned __int64 v17; // rax@14
  size_t v18; // r13@14
  bool v19; // dl@18
  void *v20; // rax@19
  char *v21; // rax@22
  void *v22; // rsp@23
  char *v23; // rax@30
  char v24; // r15@34
  __int64 v25; // rax@34
  char *v26; // r8@36
  char *v27; // rdx@36
  int v28; // eax@36
  char v29; // al@37
  int v30; // eax@40
  _BYTE *v31; // r15@40
  __int64 v32; // rdi@41
  _BYTE *v33; // rsi@54
  _BYTE *v34; // rdx@54
  _BYTE *v35; // rsi@56
  _BYTE *v36; // rdx@56
  signed __int64 v37; // rax@59
  char v38; // al@62
  __int64 v39; // rax@62
  signed __int64 v40; // rax@63
  __int64 v41; // rax@65
  signed __int64 v42; // r8@66
  __int64 v43; // rax@67
  unsigned __int64 v44; // rax@68
  char *v45; // r11@75
  int *v46; // rax@76
  char *v47; // r11@76
  unsigned __int64 v48; // rbx@77
  unsigned __int64 v49; // r10@81
  _BYTE *v50; // rdx@82
  _BYTE *v51; // rcx@82
  __int64 v52; // rsi@83
  char *v53; // r8@84
  unsigned __int64 v54; // rdx@85
  unsigned __int64 v55; // rcx@87
  char *v56; // r15@88
  char *result; // rax@98
  unsigned __int64 v58; // rax@100
  char *v59; // rax@107
  __int16 v61; // fps@117
  _BYTE *v65; // rdx@118
  _BYTE *v66; // rdi@118
  int v67; // er11@118
  __int64 v68; // rcx@119
  char *v69; // rcx@120
  char *v70; // rdi@128
  int *v71; // r9@128
  int v72; // eax@130
  int v73; // edx@131
  __int64 v74; // rax@138
  unsigned __int8 v75; // cf@138
  unsigned __int64 v76; // rax@138
  bool v77; // bl@144
  char *v78; // rax@146
  __int64 v79; // r9@148
  signed int v80; // ebx@154
  __int64 v81; // rax@167
  long double v82; // fst7@167
  __int64 v83; // rax@171
  char *v84; // rdi@171
  __int128 v85; // xmm0@171
  unsigned __int64 v86; // rax@188
  void *v87; // rax@190
  char *v88; // rax@193
  char *v89; // rcx@193
  int v90; // er8@194
  unsigned __int64 v91; // r15@195
  void *v92; // rax@201
  char *v93; // rax@216
  void *v94; // rax@222
  char v95; // al@254
  unsigned __int64 v96; // r9@257
  size_t v97; // r8@258
  unsigned __int64 v98; // r10@259
  unsigned __int64 v99; // rdi@259
  signed __int64 v100; // rax@263
  unsigned __int64 v101; // r10@266
  unsigned __int64 v102; // rax@269
  char *v103; // rax@277
  signed __int64 v104; // rsi@286
  char v105; // al@287
  size_t v106; // r15@292
  size_t v107; // r14@292
  bool v108; // r13@297
  char *v109; // rax@299
  char *v110; // rax@303
  signed __int64 v111; // rax@316
  unsigned __int64 v112; // r10@320
  void *v113; // rax@323
  char *v114; // rax@326
  __int16 v115; // ST34_2@330
  char *v116; // rax@330
  __int64 v117; // rsi@330
  __int64 v118; // rdx@330
  char v119; // al@330
  signed __int64 v120; // rdx@333
  unsigned __int64 v121; // rax@333
  char *v122; // rax@340
  __int64 v123; // rdx@340
  char v124; // al@340
  unsigned __int64 v125; // rax@343
  signed __int64 v126; // rsi@348
  signed __int64 v127; // r9@348
  __int64 v128; // rdx@348
  signed __int64 v129; // rax@354
  _BYTE *v130; // rsi@355
  _BYTE *v131; // rdi@357
  __int64 v132; // rax@357
  signed __int64 v133; // rsi@357
  unsigned __int64 v134; // rax@359
  char v135; // al@371
  signed __int64 v136; // rsi@372
  char v137; // al@373
  char *v138; // rax@374
  __int64 v139; // rdx@374
  char v140; // al@374
  signed __int64 v141; // rax@377
  void *v142; // rax@381
  __int16 v143; // ST34_2@389
  char *v144; // rax@389
  char *v145; // rdx@389
  char v146; // al@389
  char *v147; // rax@392
  char *v148; // rax@397
  char v149; // al@397
  unsigned __int64 v150; // [sp+28h] [bp-6E8h]@23
  char *v151; // [sp+30h] [bp-6E0h]@76
  void *ptr; // [sp+38h] [bp-6D8h]@10
  size_t *v153; // [sp+40h] [bp-6D0h]@1
  void *v154; // [sp+48h] [bp-6C8h]@128
  char *v155; // [sp+50h] [bp-6C0h]@76
  __int64 v156; // [sp+58h] [bp-6B8h]@13
  _BYTE *v157; // [sp+60h] [bp-6B0h]@19
  unsigned __int64 v158; // [sp+68h] [bp-6A8h]@9
  long double v159; // [sp+70h] [bp-6A0h]@19
  void *v160; // [sp+80h] [bp-690h]@19
  void *src; // [sp+88h] [bp-688h]@1
  int v162; // [sp+94h] [bp-67Ch]@77
  unsigned int v163; // [sp+98h] [bp-678h]@64
  char v164; // [sp+A0h] [bp-670h]@1
  void *v165; // [sp+A8h] [bp-668h]@36
  __int64 v166; // [sp+B0h] [bp-660h]@95
  __int64 v167; // [sp+190h] [bp-580h]@1
  void *v168; // [sp+198h] [bp-578h]@13
  __int64 v169; // [sp+1A0h] [bp-570h]@3
  __int64 v170; // [sp+1A8h] [bp-568h]@5
  __int64 v171; // [sp+1B0h] [bp-560h]@93
  char v172; // [sp+420h] [bp-2F0h]@252

  v4 = a3;
  v5 = a4;
  src = a1;
  v153 = a2;
  if ( sub_416250(a3, &v167, &v164) < 0 )
    return 0LL;
  if ( sub_416030(v5, &v164) < 0 )
  {
    if ( v168 != &v171 )
      free(v168);
    if ( v165 != &v166 )
      free(v165);
    v13 = 0LL;
    *__errno_location() = 22;
    return v13;
  }
  v6 = v169 + 7;
  if ( (unsigned __int64)(v169 + 7) <= 6 )
    v6 = -1LL;
  v75 = __CFADD__(v170, v6);
  v7 = v170 + v6;
  if ( v75 )
    goto LABEL_112;
  v8 = v7 + 6;
  if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
    goto LABEL_112;
  if ( v8 <= 0xF9F )
  {
    ptr = 0LL;
    v22 = alloca(v7 + 14);
    v158 = ((unsigned __int64)&v150 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( v8 == -1LL )
      goto LABEL_112;
    v9 = malloc(v8);
    v158 = (unsigned __int64)v9;
    if ( !v9 )
      goto LABEL_112;
    ptr = v9;
  }
  v10 = 0LL;
  if ( src )
    v10 = *v153;
  v11 = v168;
  v12 = v4;
  v13 = (char *)src;
  v156 = 0LL;
  v14 = 0LL;
  v15 = *(_BYTE **)v168;
  if ( *(_BYTE **)v168 == v12 )
    goto LABEL_111;
LABEL_14:
  v16 = (char *)(v15 - v12);
  v17 = (unsigned __int64)&v16[v14];
  v18 = (size_t)&v16[v14];
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
        v157 = v12;
        LOBYTE(v159) = v19;
        v160 = v16;
        v20 = malloc(v10);
        v16 = (char *)v160;
        v12 = v157;
        if ( !v20 )
          goto LABEL_88;
        if ( v14 && LOBYTE(v159) )
        {
          *(_QWORD *)&v159 = v157;
          v21 = (char *)memcpy(v20, v13, v14);
          v16 = (char *)v160;
          v12 = *(_BYTE **)&v159;
          v13 = v21;
        }
        else
        {
          v13 = (char *)v20;
        }
        goto LABEL_32;
      }
LABEL_29:
      if ( !v19 )
      {
        *(_QWORD *)&v159 = v12;
        v160 = v16;
        v23 = (char *)realloc(v13, v10);
        if ( !v23 )
          goto LABEL_126;
        v16 = (char *)v160;
        v12 = *(_BYTE **)&v159;
        v13 = v23;
        goto LABEL_32;
      }
      goto LABEL_19;
    }
    if ( v17 == -1LL )
      goto LABEL_88;
    v10 = (size_t)&v16[v14];
    goto LABEL_28;
  }
LABEL_32:
  memcpy(&v13[v14], v12, (size_t)v16);
  while ( v167 != v156 )
  {
    v24 = *((_BYTE *)v11 + 72);
    v25 = *((_QWORD *)v11 + 10);
    if ( v24 == 37 )
    {
      if ( v25 != -1 )
        goto LABEL_198;
      v58 = v18 + 1;
      v14 = v18 + 1;
      if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
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
            goto LABEL_234;
        }
        else
        {
          if ( v58 <= 0xC )
          {
            v10 = 12LL;
            goto LABEL_105;
          }
LABEL_234:
          if ( v58 == -1LL )
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
          *(_QWORD *)&v159 = __errno_location();
          goto LABEL_127;
        }
        LOBYTE(v160) = v13 == src;
        v94 = malloc(v10);
        if ( !v94 )
          goto LABEL_88;
        if ( v18 && (_BYTE)v160 )
          v13 = (char *)memcpy(v94, v13, v18);
        else
          v13 = (char *)v94;
      }
LABEL_109:
      v13[v18] = 37;
      goto LABEL_110;
    }
    if ( v25 == -1 )
      goto LABEL_198;
    v26 = (char *)v165;
    v27 = (char *)v165 + 32 * v25;
    v28 = *(_DWORD *)v27;
    LODWORD(v160) = *(_DWORD *)v27;
    if ( v24 != 110 )
    {
      v29 = v24 & 0xDF;
      if ( (unsigned __int8)((v24 & 0xDF) - 69) > 2u && v29 != 65
        || (_DWORD)v160 != 12
        || (_FST7 = *((long double *)v27 + 1), _FST7 != _FST7 + _FST7) )
      {
        v30 = *((_DWORD *)v11 + 4);
        v31 = (_BYTE *)(v158 + 1);
        *(_BYTE *)v158 = 37;
        if ( v30 & 1 )
        {
          v32 = v158;
          *(_BYTE *)(v158 + 1) = 39;
          v31 = (_BYTE *)(v32 + 2);
        }
        if ( v30 & 2 )
          *v31++ = 45;
        if ( v30 & 4 )
          *v31++ = 43;
        if ( v30 & 8 )
          *v31++ = 32;
        if ( v30 & 0x10 )
          *v31++ = 35;
        if ( v30 & 0x40 )
          *v31++ = 73;
        if ( v30 & 0x20 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        if ( (unsigned int)v160 <= 0x10 )
        {
          v37 = 1LL << (char)v160;
          if ( (1LL << (char)v160) & 0x14180 )
            goto LABEL_125;
          if ( BYTE1(v37) & 0x10 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(BYTE1(v37) & 6) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = *((_BYTE *)v11 + 72);
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = (signed __int64)&v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v157) = 1;
            v163 = *(_DWORD *)(v40 + 16);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v157) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = (signed __int64)&v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (unsigned int)v157;
          *(&v163 + v43) = *(_DWORD *)(v42 + 16);
          LODWORD(v157) = v43 + 1;
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
              *(_QWORD *)&v159 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v168 != &v171 )
                    free(v168);
                  if ( v165 != &v166 )
                    free(v165);
                  v13 = 0LL;
                  **(_DWORD **)&v159 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v159 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v159) = v13 == src;
            v93 = (char *)malloc(v10);
            v45 = v93;
            if ( !v93 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v159) )
              v45 = (char *)memcpy(v93, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v155 = v45;
            v46 = __errno_location();
            v47 = v155;
            v155 = v31;
            *(_QWORD *)&v159 = v46;
            LODWORD(v151) = *v46;
            while ( 2 )
            {
              while ( 2 )
              {
                v48 = 0x7FFFFFFFLL;
                v162 = -1;
                **(_DWORD **)&v159 = 0;
                if ( v10 - v18 <= 0x7FFFFFFF )
                  v48 = v10 - v18;
                switch ( (_DWORD)v160 )
                {
                  default:
                    goto LABEL_402;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    v70 = &v47[v18];
                    v71 = (int *)*((_QWORD *)v165 + 4 * *((_QWORD *)v11 + 10) + 2);
                    v154 = v47;
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_208;
                    if ( (_DWORD)v157 != 2 )
                      goto LABEL_130;
                    goto LABEL_207;
                  case 5:
                  case 6:
                  case 0xD:
                  case 0xE:
                    v79 = *((_DWORD *)v165 + 8 * *((_QWORD *)v11 + 10) + 4);
                    break;
                  case 0xC:
                    v81 = *((_QWORD *)v11 + 10);
                    v70 = &v47[v18];
                    v154 = v47;
                    v82 = *((long double *)v165 + 2 * v81 + 1);
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_207;
                    if ( (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v71 = &v162;
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v71);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 1:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                  case 0xB:
                    v83 = *((_QWORD *)v11 + 10);
                    v84 = &v47[v18];
                    v154 = v47;
                    v85 = *((_QWORD *)v165 + 4 * v83 + 2);
                    if ( (_DWORD)v157 == 1 || (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, &v162);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 4:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 3:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 2:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                }
                v70 = &v47[v18];
                v154 = v47;
                if ( (_DWORD)v157 != 1 )
                {
                  if ( (_DWORD)v157 != 2 )
                    goto LABEL_151;
LABEL_207:
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                  v47 = (char *)v154;
LABEL_131:
                  v73 = v162;
                  if ( v162 >= 0 )
                    goto LABEL_132;
LABEL_152:
                  if ( v155[1] )
                  {
                    v155[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v159;
                    if ( !**(_DWORD **)&v159 )
                    {
                      v80 = 84;
                      if ( (*((_BYTE *)v11 + 72) & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v168 != &v171 )
                      free(v168);
                    if ( v165 != &v166 )
                      free(v165);
                    **(_DWORD **)&v159 = v80;
                    return 0LL;
                  }
                  goto LABEL_135;
                }
                break;
              }
LABEL_208:
              v79 = v163;
LABEL_151:
              v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v79);
              v73 = v162;
              v47 = (char *)v154;
              if ( v162 < 0 )
                goto LABEL_152;
LABEL_132:
              if ( v73 < v48 && *(&v47[v73] + v18) )
                goto LABEL_198;
              if ( v73 < v72 )
              {
LABEL_135:
                v162 = v72;
                v73 = v72;
              }
              if ( (unsigned int)(v73 + 1) < v48 )
              {
                v13 = v47;
                v14 = v18 + v73;
                **(_DWORD **)&v159 = (_DWORD)v151;
                goto LABEL_110;
              }
              if ( v10 - v18 > 0x7FFFFFFE )
              {
                if ( v47 != src && v47 )
                  free(v47);
                if ( ptr )
                  free(ptr);
                if ( v168 != &v171 )
                  free(v168);
                if ( v165 != &v166 )
                  free(v165);
                v13 = 0LL;
                **(_DWORD **)&v159 = 75;
                return v13;
              }
              v74 = (unsigned int)(v73 + 2);
              v75 = __CFADD__(v18, v74);
              v76 = v18 + v74;
              if ( (v10 & 0x8000000000000000LL) != 0LL )
              {
                if ( v10 != -1LL )
                  goto LABEL_200;
              }
              else
              {
                if ( v75 )
                  goto LABEL_200;
                if ( 2 * v10 >= v76 )
                  v76 = 2 * v10;
                if ( v10 < v76 )
                {
                  v10 *= 2LL;
                  if ( v10 < v76 )
                  {
                    if ( v76 == -1LL )
                    {
LABEL_200:
                      v56 = v47;
                      goto LABEL_89;
                    }
                    v10 = v76;
                  }
                  v77 = v47 == src;
                  if ( !v47 || v77 )
                  {
                    v154 = v47;
                    v92 = malloc(v10);
                    v47 = (char *)v154;
                    if ( !v92 )
                      goto LABEL_200;
                    if ( v18 && v77 )
                      v47 = (char *)memcpy(v92, v154, v18);
                    else
                      v47 = (char *)v92;
                  }
                  else
                  {
                    v154 = v47;
                    v78 = (char *)realloc(v47, v10);
                    v47 = (char *)v154;
                    if ( !v78 )
                      goto LABEL_200;
                    v47 = v78;
                  }
                }
              }
              continue;
            }
          }
          if ( v44 != -1LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      v65 = (_BYTE *)*((_QWORD *)v11 + 3);
      v66 = (_BYTE *)*((_QWORD *)v11 + 4);
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
          v160 = (void *)-1;
          while ( 1 )
          {
            v126 = (signed __int64)(v65 + 1);
            v127 = -1LL;
            v128 = *v65 - 48;
            if ( v49 <= 0x1999999999999999LL )
              v127 = 10 * v49;
            v75 = __CFADD__(v127, v128);
            v49 = v127 + v128;
            v65 = (_BYTE *)v126;
            if ( v75 )
            {
              if ( v66 == (_BYTE *)v126 )
              {
LABEL_81:
                v49 = (unsigned __int64)v160;
                goto LABEL_82;
              }
              while ( *(++v65 - 1) != 48 )
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
        v69 = (char *)v165 + 32 * v68;
        if ( *(_DWORD *)v69 != 5 )
          goto LABEL_198;
        v49 = *((_DWORD *)v69 + 4);
        if ( (v49 & 0x80000000) != 0LL )
        {
          v67 |= 2u;
          v49 = -(signed __int64)v49;
        }
      }
LABEL_82:
      v50 = (_BYTE *)*((_QWORD *)v11 + 6);
      v51 = (_BYTE *)*((_QWORD *)v11 + 7);
      if ( v50 != v51 )
      {
        v52 = *((_QWORD *)v11 + 8);
        if ( v52 == -1 )
        {
          v129 = (signed __int64)(v50 + 1);
          v54 = 0LL;
          if ( v51 != (_BYTE *)v129 )
          {
            v130 = (_BYTE *)v129;
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
          goto LABEL_369;
        }
        v53 = (char *)v165 + 32 * v52;
        if ( *(_DWORD *)v53 != 5 )
          goto LABEL_198;
        v54 = *((_DWORD *)v53 + 4);
        if ( (v54 & 0x80000000) == 0LL )
        {
LABEL_86:
          if ( v54 )
          {
            v55 = v54 + 12;
            if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
              goto LABEL_88;
LABEL_188:
            v86 = v55;
            if ( v49 >= v55 )
              v86 = v49;
            v75 = __CFADD__(v86, 1LL);
            v87 = (void *)(v86 + 1);
            v160 = v87;
            if ( v75 )
              goto LABEL_88;
            if ( (unsigned __int64)v87 <= 0x2BC )
            {
              v89 = &v172;
            }
            else
            {
              v154 = (void *)v49;
              v155 = (char *)v54;
              LODWORD(v157) = v67;
              v159 = _FST7;
              if ( v87 == (void *)-1 )
                goto LABEL_88;
              v88 = (char *)malloc((size_t)v87);
              v67 = (signed int)v157;
              _FST7 = v159;
              v89 = v88;
              v54 = (unsigned __int64)v155;
              v49 = (unsigned __int64)v154;
              if ( !v88 )
                goto LABEL_88;
            }
            v90 = (unsigned __int16)v163;
            LOWORD(v163) = v163 | 0x300;
            __asm { fxam }
            if ( HIBYTE(v61) & 2 )
            {
              *v89 = 45;
              _FST7 = -_FST7;
              v91 = (unsigned __int64)(v89 + 1);
            }
            else if ( v67 & 4 )
            {
              v91 = (unsigned __int64)(v89 + 1);
              *v89 = 43;
            }
            else
            {
              v91 = (unsigned __int64)v89;
              if ( v67 & 8 )
              {
                v91 = (unsigned __int64)(v89 + 1);
                *v89 = 32;
              }
            }
            if ( _FST7 > 0.0 )
            {
              if ( _FST7 + _FST7 != _FST7 )
                goto LABEL_198;
              v96 = v91 + 3;
              if ( (unsigned __int8)(*((_BYTE *)v11 + 72) - 65) > 0x19u )
              {
                *(_BYTE *)(v91 + 2) = 102;
                *(_WORD *)v91 = 28265;
                v91 = 0LL;
              }
              else
              {
                *(_BYTE *)(v91 + 2) = 70;
                *(_WORD *)v91 = 20041;
                v91 = 0LL;
              }
              goto LABEL_258;
            }
            if ( _FST7 != 0.0 )
              goto LABEL_198;
            v95 = *((_BYTE *)v11 + 72) & 0xDF;
            if ( v95 == 70 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || v54 )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v122 = nl_langinfo(0x10000);
                v123 = (__int64)v155;
                v96 = *(_QWORD *)&v159;
                v124 = *v122;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v124 )
                  v124 = 46;
                *(_BYTE *)(v91 + 1) = v124;
                if ( v123 )
                {
                  v125 = v96;
                  do
                    *(_BYTE *)(++v125 - 1) = 48;
                  while ( v125 != v91 + v123 + 2 );
                  v96 += v123;
                }
                goto LABEL_258;
              }
              goto LABEL_257;
            }
            if ( v95 == 69 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || (v104 = v91 + 1, v54) )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v138 = nl_langinfo(0x10000);
                v139 = (__int64)v155;
                v104 = *(_QWORD *)&v159;
                v140 = *v138;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v140 )
                  v140 = 46;
                *(_BYTE *)(v91 + 1) = v140;
                if ( v139 )
                {
                  v141 = v104;
                  do
                    *(_BYTE *)(++v141 - 1) = 48;
                  while ( v141 != v91 + v139 + 2 );
                  v104 += v139;
                }
              }
              v105 = *((_BYTE *)v11 + 72);
              v96 = v104 + 4;
              *(_BYTE *)(v104 + 3) = 48;
              *(_BYTE *)v104 = v105;
              *(_WORD *)(v104 + 1) = 12331;
              goto LABEL_258;
            }
            if ( v95 == 71 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 )
              {
                if ( v54 )
                {
                  v115 = v90;
                  v150 = v49;
                  v151 = (char *)(v91 + 2);
                  v154 = v89;
                  LODWORD(v155) = v67;
                  v157 = (_BYTE *)v54;
                  *(_QWORD *)&v159 = v54 - 1;
                  v116 = nl_langinfo(0x10000);
                  v117 = *(_QWORD *)&v159;
                  v118 = (__int64)v157;
                  v119 = *v116;
                  LOBYTE(v67) = (_BYTE)v155;
                  v89 = (char *)v154;
                  v96 = (unsigned __int64)v151;
                  v49 = v150;
                  LOWORD(v90) = v115;
                  if ( !v119 )
                    v119 = 46;
                  *(_BYTE *)(v91 + 1) = v119;
                  if ( v117 )
                  {
                    v120 = v91 + v118 + 1;
                    v121 = v96;
                    do
                      *(_BYTE *)(++v121 - 1) = 48;
                    while ( v121 != v120 );
                    v96 += v117;
                  }
                }
                else
                {
                  LODWORD(v151) = v90;
                  v154 = (void *)v49;
                  v155 = (char *)(v91 + 2);
                  v157 = v89;
                  LODWORD(v159) = v67;
                  v148 = nl_langinfo(0x10000);
                  LOBYTE(v67) = LOBYTE(v159);
                  v89 = v157;
                  v149 = *v148;
                  v96 = (unsigned __int64)v155;
                  v49 = (unsigned __int64)v154;
                  LOWORD(v90) = (_WORD)v151;
                  if ( !v149 )
                    v149 = 46;
                  *(_BYTE *)(v91 + 1) = v149;
                }
                goto LABEL_258;
              }
LABEL_257:
              v96 = v91 + 1;
              goto LABEL_258;
            }
            if ( v95 != 65 )
              goto LABEL_198;
            *(_BYTE *)v91 = 48;
            *(_QWORD *)&v159 = v91 + 2;
            v135 = *((_BYTE *)v11 + 72);
            *(_BYTE *)(v91 + 2) = 48;
            *(_BYTE *)(v91 + 1) = v135 + 23;
            if ( v67 & 0x10 || (v136 = v91 + 3, v54) )
            {
              v143 = v90;
              v150 = v49;
              v151 = v89;
              v154 = (void *)v54;
              LODWORD(v155) = v67;
              v157 = (_BYTE *)(v91 + 4);
              v144 = nl_langinfo(0x10000);
              v145 = (char *)v154;
              v136 = (signed __int64)v157;
              v146 = *v144;
              LOBYTE(v67) = (_BYTE)v155;
              v89 = v151;
              v49 = v150;
              LOWORD(v90) = v143;
              if ( !v146 )
                v146 = 46;
              *(_BYTE *)(v91 + 3) = v146;
              if ( v145 )
              {
                v147 = (char *)v136;
                do
                  *(++v147 - 1) = 48;
                while ( v147 != &v145[v91 + 4] );
                v136 += (signed __int64)v145;
              }
            }
            v137 = *((_BYTE *)v11 + 72);
            v96 = v136 + 3;
            *(_WORD *)(v136 + 1) = 12331;
            v91 = *(_QWORD *)&v159;
            *(_BYTE *)v136 = v137 + 15;
LABEL_258:
            LOWORD(v163) = v90;
            v97 = v96 - (_QWORD)v89;
            if ( v49 > v96 - (unsigned __int64)v89 )
            {
              v98 = v49 - v97;
              v99 = v96 + v98;
              v97 = v96 + v98 - (_QWORD)v89;
              if ( v67 & 2 )
              {
                if ( v98 )
                {
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v99 != v96 );
                }
              }
              else if ( v67 & 0x20 && v91 )
              {
                if ( v91 >= v96 )
                {
                  v91 = v96;
                }
                else
                {
                  v100 = -1LL;
                  do
                  {
                    *(_BYTE *)(v99 + v100) = *(_BYTE *)(v96 + v100);
                    --v100;
                  }
                  while ( v100 != v91 - 1 - v96 );
                }
                if ( v98 )
                {
                  v101 = v91 + v98;
                  do
                    *(_BYTE *)(++v91 - 1) = 48;
                  while ( v91 != v101 );
                }
              }
              else
              {
                v111 = -1LL;
                if ( (unsigned __int64)v89 < v96 )
                {
                  do
                  {
                    *(_BYTE *)(v99 + v111) = *(_BYTE *)(v96 + v111);
                    --v111;
                  }
                  while ( &v89[-v96 - 1] != (char *)v111 );
                  v96 = (unsigned __int64)v89;
                }
                if ( v98 )
                {
                  v112 = v96 + v98;
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v96 != v112 );
                }
              }
            }
            if ( (unsigned __int64)v160 <= v97 )
              goto LABEL_198;
            v102 = v97 + v18;
            v14 = v97 + v18;
            if ( v10 - v18 <= v97 )
            {
              if ( __CFADD__(v97, v18) )
              {
                if ( v10 != -1LL )
                  goto LABEL_88;
              }
              else if ( v10 < v102 )
              {
                if ( v10 )
                {
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_88;
                  v10 *= 2LL;
                  if ( v10 < v102 )
                    goto LABEL_367;
                }
                else
                {
                  if ( v102 <= 0xC )
                  {
                    v10 = 12LL;
                    goto LABEL_275;
                  }
LABEL_367:
                  if ( v102 == -1LL )
                    goto LABEL_88;
                  v10 = v97 + v18;
                }
LABEL_275:
                if ( v13 && v13 != src )
                {
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v103 = (char *)realloc(v13, v10);
                  if ( !v103 )
                    goto LABEL_88;
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  v13 = v103;
                }
                else
                {
                  LOBYTE(v157) = v13 == src;
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v113 = malloc(v10);
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  if ( !v113 )
                    goto LABEL_88;
                  if ( v18 && (_BYTE)v157 )
                  {
                    v114 = (char *)memcpy(v113, v13, v18);
                    v89 = (char *)v160;
                    v97 = *(_QWORD *)&v159;
                    v13 = v114;
                  }
                  else
                  {
                    v13 = (char *)v113;
                  }
                }
              }
            }
            v160 = v89;
            memcpy(&v13[v18], v89, v97);
            if ( v160 != &v172 )
              free(v160);
            goto LABEL_110;
          }
LABEL_369:
          v55 = 12LL;
          goto LABEL_188;
        }
      }
      v55 = 12LL;
      if ( v29 != 65 )
        v55 = 18LL;
      v54 = 0LL;
      if ( v29 != 65 )
        v54 = 6LL;
      goto LABEL_188;
    }
    switch ( v28 )
    {
      case 21:
      case 22:
        v14 = v18;
        **((_QWORD **)v27 + 2) = v18;
        break;
      case 20:
        v14 = v18;
        **((_DWORD **)v27 + 2) = v18;
        break;
      case 19:
        v14 = v18;
        **((_WORD **)v27 + 2) = v18;
        break;
      case 18:
        v14 = v18;
        **((_BYTE **)v27 + 2) = v18;
        break;
      default:
LABEL_402:
        abort();
        return result;
    }
LABEL_110:
    v12 = (_BYTE *)*((_QWORD *)v11 + 1);
    v11 = (char *)v11 + 88;
    v15 = *(_BYTE **)v11;
    ++v156;
    if ( v15 != v12 )
      goto LABEL_14;
LABEL_111:
    v18 = v14;
  }
  v106 = v18;
  v107 = v18 + 1;
  if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    goto LABEL_301;
  }
  if ( v10 >= v107 )
    goto LABEL_301;
  if ( v10 )
  {
    if ( (v10 & 0x8000000000000000LL) != 0LL )
      goto LABEL_88;
    v10 *= 2LL;
    if ( v10 >= v107 )
      goto LABEL_297;
    goto LABEL_387;
  }
  if ( v107 > 0xC )
  {
LABEL_387:
    if ( v107 == -1LL )
      goto LABEL_88;
    v10 = v18 + 1;
    goto LABEL_297;
  }
  v10 = 12LL;
LABEL_297:
  v108 = v13 == src;
  if ( !v13 || v108 )
  {
    v142 = malloc(v10);
    if ( !v142 )
      goto LABEL_88;
    if ( v106 && v108 )
      v13 = (char *)memcpy(v142, v13, v106);
    else
      v13 = (char *)v142;
  }
  else
  {
    v109 = (char *)realloc(v13, v10);
    if ( !v109 )
      goto LABEL_126;
    v13 = v109;
  }
LABEL_301:
  v13[v106] = 0;
  if ( v10 > v107 && v13 != src )
  {
    v110 = (char *)realloc(v13, v107);
    if ( v110 )
      v13 = v110;
  }
  if ( ptr )
    free(ptr);
  if ( v168 != &v171 )
    free(v168);
  if ( v165 != &v166 )
    free(v165);
  *v153 = v106;
  return v13;
}

char *__fastcall sub_414470(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // r15@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@3
  unsigned __int64 v7; // rax@5
  size_t v8; // rdi@6
  void *v9; // rax@9
  size_t v10; // r12@11
  void *v11; // r14@13
  _BYTE *v12; // r8@13
  char *v13; // rbx@13
  size_t v14; // r15@13
  _BYTE *v15; // rcx@13
  char *v16; // rcx@14
  unsigned __int64 v17; // rax@14
  size_t v18; // r13@14
  bool v19; // dl@18
  void *v20; // rax@19
  char *v21; // rax@22
  void *v22; // rsp@23
  char *v23; // rax@30
  char v24; // r15@34
  __int64 v25; // rax@34
  char *v26; // r8@36
  char *v27; // rdx@36
  int v28; // eax@36
  char v29; // al@37
  int v30; // eax@40
  _BYTE *v31; // r15@40
  __int64 v32; // rdi@41
  _BYTE *v33; // rsi@54
  _BYTE *v34; // rdx@54
  _BYTE *v35; // rsi@56
  _BYTE *v36; // rdx@56
  signed __int64 v37; // rax@59
  char v38; // al@62
  __int64 v39; // rax@62
  signed __int64 v40; // rax@63
  __int64 v41; // rax@65
  signed __int64 v42; // r8@66
  __int64 v43; // rax@67
  unsigned __int64 v44; // rax@68
  char *v45; // r11@75
  int *v46; // rax@76
  char *v47; // r11@76
  unsigned __int64 v48; // rbx@77
  unsigned __int64 v49; // r10@81
  _BYTE *v50; // rdx@82
  _BYTE *v51; // rcx@82
  __int64 v52; // rsi@83
  char *v53; // r8@84
  unsigned __int64 v54; // rdx@85
  unsigned __int64 v55; // rcx@87
  char *v56; // r15@88
  char *result; // rax@98
  unsigned __int64 v58; // rax@100
  char *v59; // rax@107
  __int16 v61; // fps@117
  _BYTE *v65; // rdx@118
  _BYTE *v66; // rdi@118
  int v67; // er11@118
  __int64 v68; // rcx@119
  char *v69; // rcx@120
  char *v70; // rdi@128
  int *v71; // r9@128
  int v72; // eax@130
  int v73; // edx@131
  __int64 v74; // rax@138
  unsigned __int8 v75; // cf@138
  unsigned __int64 v76; // rax@138
  bool v77; // bl@144
  char *v78; // rax@146
  __int64 v79; // r9@148
  signed int v80; // ebx@154
  __int64 v81; // rax@167
  long double v82; // fst7@167
  __int64 v83; // rax@171
  char *v84; // rdi@171
  __int128 v85; // xmm0@171
  unsigned __int64 v86; // rax@188
  void *v87; // rax@190
  char *v88; // rax@193
  char *v89; // rcx@193
  int v90; // er8@194
  unsigned __int64 v91; // r15@195
  void *v92; // rax@201
  char *v93; // rax@216
  void *v94; // rax@222
  char v95; // al@254
  unsigned __int64 v96; // r9@257
  size_t v97; // r8@258
  unsigned __int64 v98; // r10@259
  unsigned __int64 v99; // rdi@259
  signed __int64 v100; // rax@263
  unsigned __int64 v101; // r10@266
  unsigned __int64 v102; // rax@269
  char *v103; // rax@277
  signed __int64 v104; // rsi@286
  char v105; // al@287
  size_t v106; // r15@292
  size_t v107; // r14@292
  bool v108; // r13@297
  char *v109; // rax@299
  char *v110; // rax@303
  signed __int64 v111; // rax@316
  unsigned __int64 v112; // r10@320
  void *v113; // rax@323
  char *v114; // rax@326
  __int16 v115; // ST34_2@330
  char *v116; // rax@330
  __int64 v117; // rsi@330
  __int64 v118; // rdx@330
  char v119; // al@330
  signed __int64 v120; // rdx@333
  unsigned __int64 v121; // rax@333
  char *v122; // rax@340
  __int64 v123; // rdx@340
  char v124; // al@340
  unsigned __int64 v125; // rax@343
  signed __int64 v126; // rsi@348
  signed __int64 v127; // r9@348
  __int64 v128; // rdx@348
  signed __int64 v129; // rax@354
  _BYTE *v130; // rsi@355
  _BYTE *v131; // rdi@357
  __int64 v132; // rax@357
  signed __int64 v133; // rsi@357
  unsigned __int64 v134; // rax@359
  char v135; // al@371
  signed __int64 v136; // rsi@372
  char v137; // al@373
  char *v138; // rax@374
  __int64 v139; // rdx@374
  char v140; // al@374
  signed __int64 v141; // rax@377
  void *v142; // rax@381
  __int16 v143; // ST34_2@389
  char *v144; // rax@389
  char *v145; // rdx@389
  char v146; // al@389
  char *v147; // rax@392
  char *v148; // rax@397
  char v149; // al@397
  unsigned __int64 v150; // [sp+28h] [bp-6E8h]@23
  char *v151; // [sp+30h] [bp-6E0h]@76
  void *ptr; // [sp+38h] [bp-6D8h]@10
  size_t *v153; // [sp+40h] [bp-6D0h]@1
  void *v154; // [sp+48h] [bp-6C8h]@128
  char *v155; // [sp+50h] [bp-6C0h]@76
  __int64 v156; // [sp+58h] [bp-6B8h]@13
  _BYTE *v157; // [sp+60h] [bp-6B0h]@19
  unsigned __int64 v158; // [sp+68h] [bp-6A8h]@9
  long double v159; // [sp+70h] [bp-6A0h]@19
  void *v160; // [sp+80h] [bp-690h]@19
  void *src; // [sp+88h] [bp-688h]@1
  int v162; // [sp+94h] [bp-67Ch]@77
  unsigned int v163; // [sp+98h] [bp-678h]@64
  char v164; // [sp+A0h] [bp-670h]@1
  void *v165; // [sp+A8h] [bp-668h]@36
  __int64 v166; // [sp+B0h] [bp-660h]@95
  __int64 v167; // [sp+190h] [bp-580h]@1
  void *v168; // [sp+198h] [bp-578h]@13
  __int64 v169; // [sp+1A0h] [bp-570h]@3
  __int64 v170; // [sp+1A8h] [bp-568h]@5
  __int64 v171; // [sp+1B0h] [bp-560h]@93
  char v172; // [sp+420h] [bp-2F0h]@252

  v4 = a3;
  v5 = a4;
  src = a1;
  v153 = a2;
  if ( sub_416250(a3, &v167, &v164) < 0 )
    return 0LL;
  if ( sub_416030(v5, &v164) < 0 )
  {
    if ( v168 != &v171 )
      free(v168);
    if ( v165 != &v166 )
      free(v165);
    v13 = 0LL;
    *__errno_location() = 22;
    return v13;
  }
  v6 = v169 + 7;
  if ( (unsigned __int64)(v169 + 7) <= 6 )
    v6 = -1LL;
  v75 = __CFADD__(v170, v6);
  v7 = v170 + v6;
  if ( v75 )
    goto LABEL_112;
  v8 = v7 + 6;
  if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
    goto LABEL_112;
  if ( v8 <= 0xF9F )
  {
    ptr = 0LL;
    v22 = alloca(v7 + 14);
    v158 = ((unsigned __int64)&v150 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( v8 == -1LL )
      goto LABEL_112;
    v9 = malloc(v8);
    v158 = (unsigned __int64)v9;
    if ( !v9 )
      goto LABEL_112;
    ptr = v9;
  }
  v10 = 0LL;
  if ( src )
    v10 = *v153;
  v11 = v168;
  v12 = v4;
  v13 = (char *)src;
  v156 = 0LL;
  v14 = 0LL;
  v15 = *(_BYTE **)v168;
  if ( *(_BYTE **)v168 == v12 )
    goto LABEL_111;
LABEL_14:
  v16 = (char *)(v15 - v12);
  v17 = (unsigned __int64)&v16[v14];
  v18 = (size_t)&v16[v14];
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
        v157 = v12;
        LOBYTE(v159) = v19;
        v160 = v16;
        v20 = malloc(v10);
        v16 = (char *)v160;
        v12 = v157;
        if ( !v20 )
          goto LABEL_88;
        if ( v14 && LOBYTE(v159) )
        {
          *(_QWORD *)&v159 = v157;
          v21 = (char *)memcpy(v20, v13, v14);
          v16 = (char *)v160;
          v12 = *(_BYTE **)&v159;
          v13 = v21;
        }
        else
        {
          v13 = (char *)v20;
        }
        goto LABEL_32;
      }
LABEL_29:
      if ( !v19 )
      {
        *(_QWORD *)&v159 = v12;
        v160 = v16;
        v23 = (char *)realloc(v13, v10);
        if ( !v23 )
          goto LABEL_126;
        v16 = (char *)v160;
        v12 = *(_BYTE **)&v159;
        v13 = v23;
        goto LABEL_32;
      }
      goto LABEL_19;
    }
    if ( v17 == -1LL )
      goto LABEL_88;
    v10 = (size_t)&v16[v14];
    goto LABEL_28;
  }
LABEL_32:
  memcpy(&v13[v14], v12, (size_t)v16);
  while ( v167 != v156 )
  {
    v24 = *((_BYTE *)v11 + 72);
    v25 = *((_QWORD *)v11 + 10);
    if ( v24 == 37 )
    {
      if ( v25 != -1 )
        goto LABEL_198;
      v58 = v18 + 1;
      v14 = v18 + 1;
      if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
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
            goto LABEL_234;
        }
        else
        {
          if ( v58 <= 0xC )
          {
            v10 = 12LL;
            goto LABEL_105;
          }
LABEL_234:
          if ( v58 == -1LL )
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
          *(_QWORD *)&v159 = __errno_location();
          goto LABEL_127;
        }
        LOBYTE(v160) = v13 == src;
        v94 = malloc(v10);
        if ( !v94 )
          goto LABEL_88;
        if ( v18 && (_BYTE)v160 )
          v13 = (char *)memcpy(v94, v13, v18);
        else
          v13 = (char *)v94;
      }
LABEL_109:
      v13[v18] = 37;
      goto LABEL_110;
    }
    if ( v25 == -1 )
      goto LABEL_198;
    v26 = (char *)v165;
    v27 = (char *)v165 + 32 * v25;
    v28 = *(_DWORD *)v27;
    LODWORD(v160) = *(_DWORD *)v27;
    if ( v24 != 110 )
    {
      v29 = v24 & 0xDF;
      if ( (unsigned __int8)((v24 & 0xDF) - 69) > 2u && v29 != 65
        || (_DWORD)v160 != 12
        || (_FST7 = *((long double *)v27 + 1), _FST7 != _FST7 + _FST7) )
      {
        v30 = *((_DWORD *)v11 + 4);
        v31 = (_BYTE *)(v158 + 1);
        *(_BYTE *)v158 = 37;
        if ( v30 & 1 )
        {
          v32 = v158;
          *(_BYTE *)(v158 + 1) = 39;
          v31 = (_BYTE *)(v32 + 2);
        }
        if ( v30 & 2 )
          *v31++ = 45;
        if ( v30 & 4 )
          *v31++ = 43;
        if ( v30 & 8 )
          *v31++ = 32;
        if ( v30 & 0x10 )
          *v31++ = 35;
        if ( v30 & 0x40 )
          *v31++ = 73;
        if ( v30 & 0x20 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        if ( (unsigned int)v160 <= 0x10 )
        {
          v37 = 1LL << (char)v160;
          if ( (1LL << (char)v160) & 0x14180 )
            goto LABEL_125;
          if ( BYTE1(v37) & 0x10 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(BYTE1(v37) & 6) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = *((_BYTE *)v11 + 72);
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = (signed __int64)&v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v157) = 1;
            v163 = *(_DWORD *)(v40 + 16);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v157) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = (signed __int64)&v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (unsigned int)v157;
          *(&v163 + v43) = *(_DWORD *)(v42 + 16);
          LODWORD(v157) = v43 + 1;
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
              *(_QWORD *)&v159 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v168 != &v171 )
                    free(v168);
                  if ( v165 != &v166 )
                    free(v165);
                  v13 = 0LL;
                  **(_DWORD **)&v159 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v159 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v159) = v13 == src;
            v93 = (char *)malloc(v10);
            v45 = v93;
            if ( !v93 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v159) )
              v45 = (char *)memcpy(v93, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v155 = v45;
            v46 = __errno_location();
            v47 = v155;
            v155 = v31;
            *(_QWORD *)&v159 = v46;
            LODWORD(v151) = *v46;
            while ( 2 )
            {
              while ( 2 )
              {
                v48 = 0x7FFFFFFFLL;
                v162 = -1;
                **(_DWORD **)&v159 = 0;
                if ( v10 - v18 <= 0x7FFFFFFF )
                  v48 = v10 - v18;
                switch ( (_DWORD)v160 )
                {
                  default:
                    goto LABEL_402;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    v70 = &v47[v18];
                    v71 = (int *)*((_QWORD *)v165 + 4 * *((_QWORD *)v11 + 10) + 2);
                    v154 = v47;
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_208;
                    if ( (_DWORD)v157 != 2 )
                      goto LABEL_130;
                    goto LABEL_207;
                  case 5:
                  case 6:
                  case 0xD:
                  case 0xE:
                    v79 = *((_DWORD *)v165 + 8 * *((_QWORD *)v11 + 10) + 4);
                    break;
                  case 0xC:
                    v81 = *((_QWORD *)v11 + 10);
                    v70 = &v47[v18];
                    v154 = v47;
                    v82 = *((long double *)v165 + 2 * v81 + 1);
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_207;
                    if ( (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v71 = &v162;
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v71);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 1:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                  case 0xB:
                    v83 = *((_QWORD *)v11 + 10);
                    v84 = &v47[v18];
                    v154 = v47;
                    v85 = *((_QWORD *)v165 + 4 * v83 + 2);
                    if ( (_DWORD)v157 == 1 || (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, &v162);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 4:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 3:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 2:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                }
                v70 = &v47[v18];
                v154 = v47;
                if ( (_DWORD)v157 != 1 )
                {
                  if ( (_DWORD)v157 != 2 )
                    goto LABEL_151;
LABEL_207:
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                  v47 = (char *)v154;
LABEL_131:
                  v73 = v162;
                  if ( v162 >= 0 )
                    goto LABEL_132;
LABEL_152:
                  if ( v155[1] )
                  {
                    v155[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v159;
                    if ( !**(_DWORD **)&v159 )
                    {
                      v80 = 84;
                      if ( (*((_BYTE *)v11 + 72) & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v168 != &v171 )
                      free(v168);
                    if ( v165 != &v166 )
                      free(v165);
                    **(_DWORD **)&v159 = v80;
                    return 0LL;
                  }
                  goto LABEL_135;
                }
                break;
              }
LABEL_208:
              v79 = v163;
LABEL_151:
              v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v79);
              v73 = v162;
              v47 = (char *)v154;
              if ( v162 < 0 )
                goto LABEL_152;
LABEL_132:
              if ( v73 < v48 && *(&v47[v73] + v18) )
                goto LABEL_198;
              if ( v73 < v72 )
              {
LABEL_135:
                v162 = v72;
                v73 = v72;
              }
              if ( (unsigned int)(v73 + 1) < v48 )
              {
                v13 = v47;
                v14 = v18 + v73;
                **(_DWORD **)&v159 = (_DWORD)v151;
                goto LABEL_110;
              }
              if ( v10 - v18 > 0x7FFFFFFE )
              {
                if ( v47 != src && v47 )
                  free(v47);
                if ( ptr )
                  free(ptr);
                if ( v168 != &v171 )
                  free(v168);
                if ( v165 != &v166 )
                  free(v165);
                v13 = 0LL;
                **(_DWORD **)&v159 = 75;
                return v13;
              }
              v74 = (unsigned int)(v73 + 2);
              v75 = __CFADD__(v18, v74);
              v76 = v18 + v74;
              if ( (v10 & 0x8000000000000000LL) != 0LL )
              {
                if ( v10 != -1LL )
                  goto LABEL_200;
              }
              else
              {
                if ( v75 )
                  goto LABEL_200;
                if ( 2 * v10 >= v76 )
                  v76 = 2 * v10;
                if ( v10 < v76 )
                {
                  v10 *= 2LL;
                  if ( v10 < v76 )
                  {
                    if ( v76 == -1LL )
                    {
LABEL_200:
                      v56 = v47;
                      goto LABEL_89;
                    }
                    v10 = v76;
                  }
                  v77 = v47 == src;
                  if ( !v47 || v77 )
                  {
                    v154 = v47;
                    v92 = malloc(v10);
                    v47 = (char *)v154;
                    if ( !v92 )
                      goto LABEL_200;
                    if ( v18 && v77 )
                      v47 = (char *)memcpy(v92, v154, v18);
                    else
                      v47 = (char *)v92;
                  }
                  else
                  {
                    v154 = v47;
                    v78 = (char *)realloc(v47, v10);
                    v47 = (char *)v154;
                    if ( !v78 )
                      goto LABEL_200;
                    v47 = v78;
                  }
                }
              }
              continue;
            }
          }
          if ( v44 != -1LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      v65 = (_BYTE *)*((_QWORD *)v11 + 3);
      v66 = (_BYTE *)*((_QWORD *)v11 + 4);
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
          v160 = (void *)-1;
          while ( 1 )
          {
            v126 = (signed __int64)(v65 + 1);
            v127 = -1LL;
            v128 = *v65 - 48;
            if ( v49 <= 0x1999999999999999LL )
              v127 = 10 * v49;
            v75 = __CFADD__(v127, v128);
            v49 = v127 + v128;
            v65 = (_BYTE *)v126;
            if ( v75 )
            {
              if ( v66 == (_BYTE *)v126 )
              {
LABEL_81:
                v49 = (unsigned __int64)v160;
                goto LABEL_82;
              }
              while ( *(++v65 - 1) != 48 )
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
        v69 = (char *)v165 + 32 * v68;
        if ( *(_DWORD *)v69 != 5 )
          goto LABEL_198;
        v49 = *((_DWORD *)v69 + 4);
        if ( (v49 & 0x80000000) != 0LL )
        {
          v67 |= 2u;
          v49 = -(signed __int64)v49;
        }
      }
LABEL_82:
      v50 = (_BYTE *)*((_QWORD *)v11 + 6);
      v51 = (_BYTE *)*((_QWORD *)v11 + 7);
      if ( v50 != v51 )
      {
        v52 = *((_QWORD *)v11 + 8);
        if ( v52 == -1 )
        {
          v129 = (signed __int64)(v50 + 1);
          v54 = 0LL;
          if ( v51 != (_BYTE *)v129 )
          {
            v130 = (_BYTE *)v129;
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
          goto LABEL_369;
        }
        v53 = (char *)v165 + 32 * v52;
        if ( *(_DWORD *)v53 != 5 )
          goto LABEL_198;
        v54 = *((_DWORD *)v53 + 4);
        if ( (v54 & 0x80000000) == 0LL )
        {
LABEL_86:
          if ( v54 )
          {
            v55 = v54 + 12;
            if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
              goto LABEL_88;
LABEL_188:
            v86 = v55;
            if ( v49 >= v55 )
              v86 = v49;
            v75 = __CFADD__(v86, 1LL);
            v87 = (void *)(v86 + 1);
            v160 = v87;
            if ( v75 )
              goto LABEL_88;
            if ( (unsigned __int64)v87 <= 0x2BC )
            {
              v89 = &v172;
            }
            else
            {
              v154 = (void *)v49;
              v155 = (char *)v54;
              LODWORD(v157) = v67;
              v159 = _FST7;
              if ( v87 == (void *)-1 )
                goto LABEL_88;
              v88 = (char *)malloc((size_t)v87);
              v67 = (signed int)v157;
              _FST7 = v159;
              v89 = v88;
              v54 = (unsigned __int64)v155;
              v49 = (unsigned __int64)v154;
              if ( !v88 )
                goto LABEL_88;
            }
            v90 = (unsigned __int16)v163;
            LOWORD(v163) = v163 | 0x300;
            __asm { fxam }
            if ( HIBYTE(v61) & 2 )
            {
              *v89 = 45;
              _FST7 = -_FST7;
              v91 = (unsigned __int64)(v89 + 1);
            }
            else if ( v67 & 4 )
            {
              v91 = (unsigned __int64)(v89 + 1);
              *v89 = 43;
            }
            else
            {
              v91 = (unsigned __int64)v89;
              if ( v67 & 8 )
              {
                v91 = (unsigned __int64)(v89 + 1);
                *v89 = 32;
              }
            }
            if ( _FST7 > 0.0 )
            {
              if ( _FST7 + _FST7 != _FST7 )
                goto LABEL_198;
              v96 = v91 + 3;
              if ( (unsigned __int8)(*((_BYTE *)v11 + 72) - 65) > 0x19u )
              {
                *(_BYTE *)(v91 + 2) = 102;
                *(_WORD *)v91 = 28265;
                v91 = 0LL;
              }
              else
              {
                *(_BYTE *)(v91 + 2) = 70;
                *(_WORD *)v91 = 20041;
                v91 = 0LL;
              }
              goto LABEL_258;
            }
            if ( _FST7 != 0.0 )
              goto LABEL_198;
            v95 = *((_BYTE *)v11 + 72) & 0xDF;
            if ( v95 == 70 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || v54 )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v122 = nl_langinfo(0x10000);
                v123 = (__int64)v155;
                v96 = *(_QWORD *)&v159;
                v124 = *v122;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v124 )
                  v124 = 46;
                *(_BYTE *)(v91 + 1) = v124;
                if ( v123 )
                {
                  v125 = v96;
                  do
                    *(_BYTE *)(++v125 - 1) = 48;
                  while ( v125 != v91 + v123 + 2 );
                  v96 += v123;
                }
                goto LABEL_258;
              }
              goto LABEL_257;
            }
            if ( v95 == 69 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || (v104 = v91 + 1, v54) )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v138 = nl_langinfo(0x10000);
                v139 = (__int64)v155;
                v104 = *(_QWORD *)&v159;
                v140 = *v138;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v140 )
                  v140 = 46;
                *(_BYTE *)(v91 + 1) = v140;
                if ( v139 )
                {
                  v141 = v104;
                  do
                    *(_BYTE *)(++v141 - 1) = 48;
                  while ( v141 != v91 + v139 + 2 );
                  v104 += v139;
                }
              }
              v105 = *((_BYTE *)v11 + 72);
              v96 = v104 + 4;
              *(_BYTE *)(v104 + 3) = 48;
              *(_BYTE *)v104 = v105;
              *(_WORD *)(v104 + 1) = 12331;
              goto LABEL_258;
            }
            if ( v95 == 71 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 )
              {
                if ( v54 )
                {
                  v115 = v90;
                  v150 = v49;
                  v151 = (char *)(v91 + 2);
                  v154 = v89;
                  LODWORD(v155) = v67;
                  v157 = (_BYTE *)v54;
                  *(_QWORD *)&v159 = v54 - 1;
                  v116 = nl_langinfo(0x10000);
                  v117 = *(_QWORD *)&v159;
                  v118 = (__int64)v157;
                  v119 = *v116;
                  LOBYTE(v67) = (_BYTE)v155;
                  v89 = (char *)v154;
                  v96 = (unsigned __int64)v151;
                  v49 = v150;
                  LOWORD(v90) = v115;
                  if ( !v119 )
                    v119 = 46;
                  *(_BYTE *)(v91 + 1) = v119;
                  if ( v117 )
                  {
                    v120 = v91 + v118 + 1;
                    v121 = v96;
                    do
                      *(_BYTE *)(++v121 - 1) = 48;
                    while ( v121 != v120 );
                    v96 += v117;
                  }
                }
                else
                {
                  LODWORD(v151) = v90;
                  v154 = (void *)v49;
                  v155 = (char *)(v91 + 2);
                  v157 = v89;
                  LODWORD(v159) = v67;
                  v148 = nl_langinfo(0x10000);
                  LOBYTE(v67) = LOBYTE(v159);
                  v89 = v157;
                  v149 = *v148;
                  v96 = (unsigned __int64)v155;
                  v49 = (unsigned __int64)v154;
                  LOWORD(v90) = (_WORD)v151;
                  if ( !v149 )
                    v149 = 46;
                  *(_BYTE *)(v91 + 1) = v149;
                }
                goto LABEL_258;
              }
LABEL_257:
              v96 = v91 + 1;
              goto LABEL_258;
            }
            if ( v95 != 65 )
              goto LABEL_198;
            *(_BYTE *)v91 = 48;
            *(_QWORD *)&v159 = v91 + 2;
            v135 = *((_BYTE *)v11 + 72);
            *(_BYTE *)(v91 + 2) = 48;
            *(_BYTE *)(v91 + 1) = v135 + 23;
            if ( v67 & 0x10 || (v136 = v91 + 3, v54) )
            {
              v143 = v90;
              v150 = v49;
              v151 = v89;
              v154 = (void *)v54;
              LODWORD(v155) = v67;
              v157 = (_BYTE *)(v91 + 4);
              v144 = nl_langinfo(0x10000);
              v145 = (char *)v154;
              v136 = (signed __int64)v157;
              v146 = *v144;
              LOBYTE(v67) = (_BYTE)v155;
              v89 = v151;
              v49 = v150;
              LOWORD(v90) = v143;
              if ( !v146 )
                v146 = 46;
              *(_BYTE *)(v91 + 3) = v146;
              if ( v145 )
              {
                v147 = (char *)v136;
                do
                  *(++v147 - 1) = 48;
                while ( v147 != &v145[v91 + 4] );
                v136 += (signed __int64)v145;
              }
            }
            v137 = *((_BYTE *)v11 + 72);
            v96 = v136 + 3;
            *(_WORD *)(v136 + 1) = 12331;
            v91 = *(_QWORD *)&v159;
            *(_BYTE *)v136 = v137 + 15;
LABEL_258:
            LOWORD(v163) = v90;
            v97 = v96 - (_QWORD)v89;
            if ( v49 > v96 - (unsigned __int64)v89 )
            {
              v98 = v49 - v97;
              v99 = v96 + v98;
              v97 = v96 + v98 - (_QWORD)v89;
              if ( v67 & 2 )
              {
                if ( v98 )
                {
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v99 != v96 );
                }
              }
              else if ( v67 & 0x20 && v91 )
              {
                if ( v91 >= v96 )
                {
                  v91 = v96;
                }
                else
                {
                  v100 = -1LL;
                  do
                  {
                    *(_BYTE *)(v99 + v100) = *(_BYTE *)(v96 + v100);
                    --v100;
                  }
                  while ( v100 != v91 - 1 - v96 );
                }
                if ( v98 )
                {
                  v101 = v91 + v98;
                  do
                    *(_BYTE *)(++v91 - 1) = 48;
                  while ( v91 != v101 );
                }
              }
              else
              {
                v111 = -1LL;
                if ( (unsigned __int64)v89 < v96 )
                {
                  do
                  {
                    *(_BYTE *)(v99 + v111) = *(_BYTE *)(v96 + v111);
                    --v111;
                  }
                  while ( &v89[-v96 - 1] != (char *)v111 );
                  v96 = (unsigned __int64)v89;
                }
                if ( v98 )
                {
                  v112 = v96 + v98;
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v96 != v112 );
                }
              }
            }
            if ( (unsigned __int64)v160 <= v97 )
              goto LABEL_198;
            v102 = v97 + v18;
            v14 = v97 + v18;
            if ( v10 - v18 <= v97 )
            {
              if ( __CFADD__(v97, v18) )
              {
                if ( v10 != -1LL )
                  goto LABEL_88;
              }
              else if ( v10 < v102 )
              {
                if ( v10 )
                {
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_88;
                  v10 *= 2LL;
                  if ( v10 < v102 )
                    goto LABEL_367;
                }
                else
                {
                  if ( v102 <= 0xC )
                  {
                    v10 = 12LL;
                    goto LABEL_275;
                  }
LABEL_367:
                  if ( v102 == -1LL )
                    goto LABEL_88;
                  v10 = v97 + v18;
                }
LABEL_275:
                if ( v13 && v13 != src )
                {
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v103 = (char *)realloc(v13, v10);
                  if ( !v103 )
                    goto LABEL_88;
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  v13 = v103;
                }
                else
                {
                  LOBYTE(v157) = v13 == src;
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v113 = malloc(v10);
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  if ( !v113 )
                    goto LABEL_88;
                  if ( v18 && (_BYTE)v157 )
                  {
                    v114 = (char *)memcpy(v113, v13, v18);
                    v89 = (char *)v160;
                    v97 = *(_QWORD *)&v159;
                    v13 = v114;
                  }
                  else
                  {
                    v13 = (char *)v113;
                  }
                }
              }
            }
            v160 = v89;
            memcpy(&v13[v18], v89, v97);
            if ( v160 != &v172 )
              free(v160);
            goto LABEL_110;
          }
LABEL_369:
          v55 = 12LL;
          goto LABEL_188;
        }
      }
      v55 = 12LL;
      if ( v29 != 65 )
        v55 = 18LL;
      v54 = 0LL;
      if ( v29 != 65 )
        v54 = 6LL;
      goto LABEL_188;
    }
    switch ( v28 )
    {
      case 21:
      case 22:
        v14 = v18;
        **((_QWORD **)v27 + 2) = v18;
        break;
      case 20:
        v14 = v18;
        **((_DWORD **)v27 + 2) = v18;
        break;
      case 19:
        v14 = v18;
        **((_WORD **)v27 + 2) = v18;
        break;
      case 18:
        v14 = v18;
        **((_BYTE **)v27 + 2) = v18;
        break;
      default:
LABEL_402:
        abort();
        return result;
    }
LABEL_110:
    v12 = (_BYTE *)*((_QWORD *)v11 + 1);
    v11 = (char *)v11 + 88;
    v15 = *(_BYTE **)v11;
    ++v156;
    if ( v15 != v12 )
      goto LABEL_14;
LABEL_111:
    v18 = v14;
  }
  v106 = v18;
  v107 = v18 + 1;
  if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    goto LABEL_301;
  }
  if ( v10 >= v107 )
    goto LABEL_301;
  if ( v10 )
  {
    if ( (v10 & 0x8000000000000000LL) != 0LL )
      goto LABEL_88;
    v10 *= 2LL;
    if ( v10 >= v107 )
      goto LABEL_297;
    goto LABEL_387;
  }
  if ( v107 > 0xC )
  {
LABEL_387:
    if ( v107 == -1LL )
      goto LABEL_88;
    v10 = v18 + 1;
    goto LABEL_297;
  }
  v10 = 12LL;
LABEL_297:
  v108 = v13 == src;
  if ( !v13 || v108 )
  {
    v142 = malloc(v10);
    if ( !v142 )
      goto LABEL_88;
    if ( v106 && v108 )
      v13 = (char *)memcpy(v142, v13, v106);
    else
      v13 = (char *)v142;
  }
  else
  {
    v109 = (char *)realloc(v13, v10);
    if ( !v109 )
      goto LABEL_126;
    v13 = v109;
  }
LABEL_301:
  v13[v106] = 0;
  if ( v10 > v107 && v13 != src )
  {
    v110 = (char *)realloc(v13, v107);
    if ( v110 )
      v13 = v110;
  }
  if ( ptr )
    free(ptr);
  if ( v168 != &v171 )
    free(v168);
  if ( v165 != &v166 )
    free(v165);
  *v153 = v106;
  return v13;
}

FILE *__fastcall sub_415F90(const char *a1, const char *a2)
{
  FILE *v2; // rax@1
  FILE *v3; // rbx@1
  int v4; // eax@2
  __int64 v5; // rdx@2
  __int64 v6; // rcx@2
  int v8; // er12@4
  int *v9; // rax@7
  int v10; // ebp@7
  int *v11; // rbx@7
  int *v12; // rax@8
  FILE *v13; // rdi@8
  int v14; // er12@8
  int *v15; // rbp@8

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( (unsigned int)v4 <= 2 )
    {
      v8 = sub_4143D0(v4, (__int64)a2, v5, v6);
      if ( v8 < 0 )
      {
        v12 = __errno_location();
        v13 = v3;
        v3 = 0LL;
        v14 = *v12;
        v15 = v12;
        sub_4143E0(v13);
        *v15 = v14;
      }
      else if ( sub_4143E0(v3) || (v3 = fdopen(v8, a2)) == 0LL )
      {
        v9 = __errno_location();
        v10 = *v9;
        v11 = v9;
        close(v8);
        *v11 = v10;
        v3 = 0LL;
      }
    }
  }
  return v3;
}

signed __int64 __fastcall sub_416030(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  unsigned __int64 v3; // rdx@2
  unsigned int v4; // ecx@4
  _QWORD *v5; // r10@5
  signed __int64 result; // rax@8
  unsigned int v7; // ecx@9
  _DWORD *v8; // r10@10
  unsigned int v9; // ecx@12
  _DWORD *v10; // r10@13
  unsigned int v11; // ecx@15
  _DWORD *v12; // r10@16
  unsigned int v13; // ecx@22
  _QWORD *v14; // r10@23
  long double *v15; // rcx@25
  unsigned int v16; // ecx@26
  void **v17; // r10@27
  void *v18; // rcx@28
  unsigned int v19; // ecx@31
  const char **v20; // r10@32
  const char *v21; // rcx@33

  v2 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
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
          v4 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v5 = *(_QWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) + v4);
            *(_DWORD *)a1 = v4 + 8;
          }
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v8 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v7);
            *(_DWORD *)a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
        case 3:
        case 4:
          v9 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v10 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v9);
            *(_DWORD *)a1 = v9 + 8;
          }
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 1:
        case 2:
          v11 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v12 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v11);
            *(_DWORD *)a1 = v11 + 8;
          }
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 0xB:
          v13 = *(_DWORD *)(a1 + 4);
          if ( v13 > 0xAF )
          {
            v14 = *(_QWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*(_QWORD *)(a1 + 16) + v13);
            *(_DWORD *)(a1 + 4) = v13 + 16;
          }
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*(_QWORD *)(a1 + 8) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *(_QWORD *)(a1 + 8) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0x10:
          v16 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v17 = *(void ***)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*(_QWORD *)(a1 + 16) + v16);
            *(_DWORD *)a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_41ACE0;
          *(_QWORD *)(v2 + 16) = v18;
          goto LABEL_7;
        case 0xF:
          v19 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v20 = *(const char ***)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*(_QWORD *)(a1 + 16) + v19);
            *(_DWORD *)a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *(_QWORD *)(v2 + 16) = v21;
LABEL_7:
          ++v3;
          v2 += 32LL;
          if ( *(_QWORD *)a2 <= v3 )
            goto LABEL_8;
          continue;
        default:
          result = 0xFFFFFFFFLL;
          break;
      }
      break;
    }
  }
  else
  {
LABEL_8:
    result = 0LL;
  }
  return result;
}

signed __int64 __fastcall sub_416250(signed __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx@1
  signed __int64 *v4; // r8@1
  __int64 v5; // r15@1
  unsigned __int64 v6; // r9@1
  unsigned __int64 v7; // r11@1
  signed __int64 v8; // r13@1
  signed __int64 v9; // rbp@2
  unsigned __int64 v11; // r14@7
  signed __int64 v12; // r12@7
  char v13; // bl@7
  signed __int64 v14; // rcx@17
  signed int v15; // eax@27
  signed __int64 v16; // rax@37
  int v17; // eax@39
  unsigned __int64 v18; // rbx@40
  void *v19; // r13@41
  unsigned __int64 v20; // rdx@42
  char *v21; // rax@46
  bool v22; // zf@48
  signed __int64 v23; // rax@49
  char *v24; // rcx@49
  int v25; // eax@51
  unsigned __int64 v26; // rbx@52
  unsigned __int64 v27; // rdx@54
  char *v28; // rax@58
  signed int v29; // ecx@62
  unsigned __int64 v30; // rax@66
  signed int *v31; // rax@69
  signed __int64 v32; // rax@71
  signed __int64 v33; // rbx@74
  void *v34; // r12@75
  _QWORD *v35; // rax@76
  _BYTE *v36; // rax@8
  unsigned __int64 v37; // rax@84
  unsigned __int64 v38; // r9@88
  void *v39; // rax@92
  const void *v40; // rsi@92
  _QWORD *v41; // rax@95
  signed __int64 *v42; // ST38_8@96
  unsigned __int64 v43; // ST30_8@96
  _QWORD *v44; // rax@96
  _BYTE *v45; // rdx@99
  unsigned __int64 v46; // rsi@102
  signed __int64 v47; // rdx@104
  __int64 v48; // rax@104
  signed __int64 v49; // rdi@106
  unsigned __int8 v50; // cf@107
  unsigned __int64 v51; // rdx@107
  unsigned __int8 v52; // bl@107
  signed __int64 *v53; // ST08_8@133
  void *v54; // rdi@134
  unsigned __int64 v55; // r9@139
  void *v56; // rax@143
  signed __int64 i; // rcx@149
  signed __int64 v58; // rdx@151
  unsigned __int64 v59; // rax@152
  const void *v60; // rsi@159
  signed __int64 *v61; // ST48_8@159
  unsigned __int64 v62; // ST40_8@159
  unsigned __int64 v63; // ST38_8@159
  signed int v64; // ST30_4@159
  signed __int64 *v65; // ST08_8@162
  void *v66; // rdi@163
  unsigned __int64 v67; // r9@166
  void *v68; // rax@170
  void *v69; // rax@175
  signed __int64 *v70; // ST48_8@177
  unsigned __int64 v71; // ST40_8@177
  unsigned __int64 v72; // ST38_8@177
  signed __int64 v73; // ST30_8@177
  unsigned __int64 v74; // rax@180
  signed __int64 v75; // rsi@182
  __int64 v76; // rdx@182
  signed __int64 v77; // rcx@184
  unsigned __int64 v78; // rdx@185
  unsigned __int8 v79; // si@185
  _BYTE *v80; // rdx@190
  unsigned __int64 v81; // rsi@193
  signed __int64 v82; // rdx@195
  __int64 v83; // rax@195
  char *v84; // rdi@197
  unsigned __int64 v85; // rdx@198
  unsigned __int8 v86; // bl@198
  void *v87; // rax@203
  signed __int64 *v88; // ST48_8@205
  unsigned __int64 v89; // ST40_8@205
  unsigned __int64 v90; // ST38_8@205
  char *v91; // ST30_8@205
  void *src; // [sp+8h] [bp-80h]@1
  unsigned __int64 v93; // [sp+10h] [bp-78h]@1
  unsigned __int64 v94; // [sp+18h] [bp-70h]@1
  unsigned __int64 v95; // [sp+20h] [bp-68h]@1
  signed __int64 v96; // [sp+28h] [bp-60h]@1
  unsigned __int64 v97; // [sp+30h] [bp-58h]@75
  signed __int64 v98; // [sp+30h] [bp-58h]@91
  signed int v99; // [sp+30h] [bp-58h]@142
  char *v100; // [sp+30h] [bp-58h]@169
  signed __int64 *v101; // [sp+38h] [bp-50h]@75
  unsigned __int64 v102; // [sp+38h] [bp-50h]@91
  unsigned __int64 v103; // [sp+38h] [bp-50h]@142
  unsigned __int64 v104; // [sp+38h] [bp-50h]@169
  unsigned __int64 v105; // [sp+40h] [bp-48h]@91
  unsigned __int64 v106; // [sp+40h] [bp-48h]@142
  unsigned __int64 v107; // [sp+40h] [bp-48h]@169
  signed __int64 *v108; // [sp+48h] [bp-40h]@91
  signed __int64 *v109; // [sp+48h] [bp-40h]@142
  signed __int64 *v110; // [sp+48h] [bp-40h]@169

  v3 = (_QWORD *)(a2 + 32);
  v4 = (signed __int64 *)a2;
  v5 = a3;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a2 + 32;
  v96 = a2 + 32;
  *(_QWORD *)a3 = 0LL;
  src = (void *)(a3 + 16);
  *(_QWORD *)(a3 + 8) = a3 + 16;
  v94 = 0LL;
  v93 = 0LL;
  v95 = 0LL;
  while ( 1 )
  {
    if ( !*(_BYTE *)a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v93;
      v4[3] = v94;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *(_BYTE *)a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (signed __int64)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 40) = -1LL;
  *(_QWORD *)(v12 + 48) = 0LL;
  *(_QWORD *)(v12 + 56) = 0LL;
  *(_QWORD *)(v12 + 64) = -1LL;
  *(_QWORD *)(v12 + 80) = -1LL;
  v13 = *(_BYTE *)(a1 + 1);
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_17;
  v36 = (_BYTE *)(a1 + 1);
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_17;
  }
  v74 = 0LL;
  do
  {
    v75 = -1LL;
    v76 = v13 - 48;
    if ( v74 <= 0x1999999999999999LL )
      v75 = 10 * v74;
    v77 = v9;
    while ( 1 )
    {
      v13 = *(_BYTE *)(v9 + 1);
      v50 = __CFADD__(v75, v76);
      v78 = v75 + v76;
      v74 = v78;
      ++v9;
      v79 = v13 - 48;
      if ( !v50 )
        break;
      if ( v79 > 9u )
        goto LABEL_131;
      v75 = -1LL;
      v77 = v9;
      v76 = v13 - 48;
    }
  }
  while ( v79 <= 9u );
  v11 = v78 - 1;
  if ( v78 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  v9 = v77 + 2;
  v13 = *(_BYTE *)(v77 + 2);
  while ( 1 )
  {
LABEL_17:
    v14 = v9 + 1;
    if ( v13 == 39 )
    {
      *(_DWORD *)(v12 + 16) |= 1u;
      goto LABEL_16;
    }
    if ( v13 == 45 )
    {
      *(_DWORD *)(v12 + 16) |= 2u;
      goto LABEL_16;
    }
    if ( v13 == 43 )
    {
      *(_DWORD *)(v12 + 16) |= 4u;
      goto LABEL_16;
    }
    if ( v13 == 32 )
    {
      *(_DWORD *)(v12 + 16) |= 8u;
      goto LABEL_16;
    }
    if ( v13 == 35 )
    {
      *(_DWORD *)(v12 + 16) |= 0x10u;
      goto LABEL_16;
    }
    if ( v13 != 48 )
      break;
    *(_DWORD *)(v12 + 16) |= 0x20u;
LABEL_16:
    v13 = *(_BYTE *)v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *(_DWORD *)(v12 + 16) |= 0x40u;
    goto LABEL_16;
  }
  if ( v13 != 42 )
  {
    if ( (unsigned __int8)(v13 - 48) <= 9u )
    {
      *(_QWORD *)(v12 + 24) = v9;
      if ( (unsigned __int8)(*(_BYTE *)v9 - 48) <= 9u )
      {
        for ( i = v9; ; ++i )
        {
          v58 = i + 1;
          if ( (unsigned __int8)(*(_BYTE *)(i + 1) - 48) > 9u )
            break;
        }
        v14 = i + 2;
        v59 = v58 - v9;
        v9 = v58;
        if ( v93 >= v59 )
          v59 = v93;
        v93 = v59;
      }
      *(_QWORD *)(v12 + 32) = v9;
      v13 = *(_BYTE *)v9;
    }
    goto LABEL_26;
  }
  v16 = 1LL;
  *(_QWORD *)(v12 + 24) = v9;
  *(_QWORD *)(v12 + 32) = v14;
  if ( v93 )
    v16 = v93;
  v93 = v16;
  v17 = *(_BYTE *)(v9 + 1);
  if ( (unsigned __int8)(*(_BYTE *)(v9 + 1) - 48) > 9u )
    goto LABEL_215;
  v45 = (_BYTE *)(v9 + 1);
  do
    ++v45;
  while ( (unsigned __int8)(*v45 - 48) <= 9u );
  if ( *v45 != 36 )
  {
LABEL_215:
    v18 = *(_QWORD *)(v12 + 40);
    if ( v18 != -1LL )
      goto LABEL_41;
    *(_QWORD *)(v12 + 40) = v95;
    if ( v95 != -1LL )
    {
      v18 = v95++;
      goto LABEL_41;
    }
    goto LABEL_131;
  }
  v46 = 0LL;
  do
  {
    v47 = -1LL;
    v48 = v17 - 48;
    if ( v46 <= 0x1999999999999999LL )
      v47 = 10 * v46;
    v49 = v14;
    while ( 1 )
    {
      v50 = __CFADD__(v48, v47);
      v51 = v48 + v47;
      v17 = *(_BYTE *)(v14 + 1);
      v46 = v51;
      ++v14;
      v52 = v17 - 48;
      if ( !v50 )
        break;
      if ( v52 > 9u )
        goto LABEL_131;
      v47 = -1LL;
      v49 = v14;
      v48 = v17 - 48;
    }
  }
  while ( v52 <= 9u );
  v18 = v51 - 1;
  if ( v51 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  *(_QWORD *)(v12 + 40) = v18;
  v14 = v49 + 2;
LABEL_41:
  v19 = *(void **)(v5 + 8);
  if ( v6 > v18 )
  {
    v20 = *(_QWORD *)v5;
    goto LABEL_43;
  }
  v38 = 2 * v6;
  if ( v38 <= v18 )
    v38 = v18 + 1;
  if ( v38 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_160;
  v108 = v4;
  v105 = v38;
  v102 = v7;
  v98 = v14;
  if ( src == v19 )
  {
    v69 = malloc(32 * v38);
    v14 = v98;
    v7 = v102;
    v6 = v105;
    v4 = v108;
    if ( !v69 )
      goto LABEL_163;
    v20 = *(_QWORD *)v5;
    v40 = src;
    v19 = v69;
LABEL_177:
    v70 = v4;
    v71 = v6;
    v72 = v7;
    v73 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *(_QWORD *)v5;
    v4 = v70;
    v6 = v71;
    v7 = v72;
    v14 = v73;
    goto LABEL_94;
  }
  v39 = realloc(v19, 32 * v38);
  v40 = *(const void **)(v5 + 8);
  v14 = v98;
  v19 = v39;
  v7 = v102;
  v6 = v105;
  v4 = v108;
  if ( !v39 )
    goto LABEL_161;
  v20 = *(_QWORD *)v5;
  if ( src == v40 )
    goto LABEL_177;
LABEL_94:
  *(_QWORD *)(v5 + 8) = v19;
LABEL_43:
  if ( v20 <= v18 )
  {
    do
      *((_DWORD *)v19 + 8 * ++v20 - 8) = 0;
    while ( v20 <= v18 );
    *(_QWORD *)v5 = v20;
  }
  v21 = (char *)v19 + 32 * v18;
  if ( *(_DWORD *)v21 )
  {
    if ( *(_DWORD *)v21 != 5 )
      goto LABEL_132;
    v13 = *(_BYTE *)v14;
    v9 = v14++;
LABEL_26:
    if ( v13 != 46 )
      goto LABEL_27;
LABEL_48:
    v22 = *(_BYTE *)(v9 + 1) == 42;
    *(_QWORD *)(v12 + 48) = v9;
    if ( !v22 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v9 + 1) - 48) > 9u )
      {
        v9 = v14;
        v37 = 1LL;
      }
      else
      {
        do
          ++v14;
        while ( (unsigned __int8)(*(_BYTE *)v14 - 48) <= 9u );
        v37 = v14 - v9;
        v9 = v14;
      }
      *(_QWORD *)(v12 + 56) = v14;
      v13 = *(_BYTE *)v14;
      if ( v94 >= v37 )
        v37 = v94;
      v94 = v37;
      goto LABEL_27;
    }
    v23 = 2LL;
    v24 = (char *)(v9 + 2);
    *(_QWORD *)(v12 + 56) = v9 + 2;
    if ( v94 >= 2 )
      v23 = v94;
    v94 = v23;
    v25 = *(_BYTE *)(v9 + 2);
    if ( (unsigned __int8)(*(_BYTE *)(v9 + 2) - 48) > 9u )
      goto LABEL_216;
    v80 = (_BYTE *)(v9 + 2);
    do
      ++v80;
    while ( (unsigned __int8)(*v80 - 48) <= 9u );
    if ( *v80 != 36 )
    {
LABEL_216:
      v26 = *(_QWORD *)(v12 + 64);
      if ( v26 == -1LL )
      {
        *(_QWORD *)(v12 + 64) = v95;
        if ( v95 == -1LL )
          goto LABEL_131;
        v26 = v95++;
      }
LABEL_53:
      v19 = *(void **)(v5 + 8);
      if ( v6 > v26 )
      {
        v27 = *(_QWORD *)v5;
        goto LABEL_55;
      }
      v67 = 2 * v6;
      if ( v67 <= v26 )
        v67 = v26 + 1;
      if ( v67 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v110 = v4;
      v107 = v67;
      v104 = v7;
      v100 = v24;
      if ( src != v19 )
      {
        v68 = realloc(v19, 32 * v67);
        v40 = *(const void **)(v5 + 8);
        v24 = v100;
        v19 = v68;
        v7 = v104;
        v6 = v107;
        v4 = v110;
        if ( !v68 )
          goto LABEL_161;
        v27 = *(_QWORD *)v5;
        if ( src != v40 )
          goto LABEL_172;
        goto LABEL_205;
      }
      v87 = malloc(32 * v67);
      v24 = v100;
      v7 = v104;
      v6 = v107;
      v4 = v110;
      if ( v87 )
      {
        v27 = *(_QWORD *)v5;
        v40 = src;
        v19 = v87;
LABEL_205:
        v88 = v4;
        v89 = v6;
        v90 = v7;
        v91 = v24;
        memcpy(v19, v40, 32 * v27);
        v27 = *(_QWORD *)v5;
        v4 = v88;
        v6 = v89;
        v7 = v90;
        v24 = v91;
LABEL_172:
        *(_QWORD *)(v5 + 8) = v19;
LABEL_55:
        if ( v27 <= v26 )
        {
          do
            *((_DWORD *)v19 + 8 * ++v27 - 8) = 0;
          while ( v27 <= v26 );
          *(_QWORD *)v5 = v27;
        }
        v28 = (char *)v19 + 32 * v26;
        if ( *(_DWORD *)v28 )
        {
          if ( *(_DWORD *)v28 != 5 )
            goto LABEL_132;
          v13 = *v24;
          v9 = (signed __int64)v24;
        }
        else
        {
          *(_DWORD *)v28 = 5;
          v9 = (signed __int64)v24;
          v13 = *v24;
        }
        goto LABEL_27;
      }
LABEL_163:
      v66 = (void *)v4[1];
      if ( (void *)v96 != v66 )
        free(v66);
      goto LABEL_165;
    }
    v81 = 0LL;
    do
    {
      v82 = -1LL;
      v83 = v25 - 48;
      if ( v81 <= 0x1999999999999999LL )
        v82 = 10 * v81;
      v84 = v24;
      while ( 1 )
      {
        v50 = __CFADD__(v83, v82);
        v85 = v83 + v82;
        v25 = *++v24;
        v81 = v85;
        v86 = v25 - 48;
        if ( !v50 )
          break;
        if ( v86 > 9u )
          goto LABEL_131;
        v82 = -1LL;
        v84 = v24;
        v83 = v25 - 48;
      }
    }
    while ( v86 <= 9u );
    v26 = v85 - 1;
    if ( v85 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *(_QWORD *)(v12 + 64) = v26;
      v24 = v84 + 2;
      goto LABEL_53;
    }
LABEL_131:
    v19 = *(void **)(v5 + 8);
    goto LABEL_132;
  }
  *(_DWORD *)v21 = 5;
  v13 = *(_BYTE *)v14;
  v9 = v14++;
  if ( v13 == 46 )
    goto LABEL_48;
LABEL_27:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_34;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_34;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_34:
      v13 = *(_BYTE *)v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case 115:
      v29 = (v15 > 7) + 15;
      break;
    case 37:
      goto LABEL_71;
    case 99:
      v29 = (v15 > 7) + 13;
      break;
    case 110:
      v29 = 22;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( !(v15 & 2) )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      break;
    case 100:
    case 105:
      v29 = 9;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( !(v15 & 2) )
            v29 = (v15 & 1u) < 1 ? 5 : 3;
        }
      }
      break;
    case 112:
      v29 = 17;
      break;
    case 65:
    case 69:
    case 70:
    case 71:
    case 97:
    case 101:
    case 102:
    case 103:
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      break;
    case 83:
      v29 = 16;
      v13 = 115;
      break;
    case 67:
      v29 = 14;
      v13 = 99;
      break;
    case 88:
    case 111:
    case 117:
    case 120:
      v29 = 10;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( !(v15 & 2) )
            v29 = (v15 & 1u) < 1 ? 6 : 4;
        }
      }
      break;
    default:
      goto LABEL_131;
  }
  if ( v11 != -1LL )
  {
    *(_QWORD *)(v12 + 80) = v11;
    goto LABEL_65;
  }
  *(_QWORD *)(v12 + 80) = v95;
  if ( v95 == -1LL )
    goto LABEL_131;
  v11 = v95++;
LABEL_65:
  v19 = *(void **)(v5 + 8);
  if ( v6 <= v11 )
  {
    v55 = 2 * v6;
    if ( v55 <= v11 )
      v55 = v11 + 1;
    if ( v55 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v109 = v4;
      v106 = v55;
      v103 = v7;
      v99 = v29;
      if ( src == v19 )
      {
        v56 = malloc(32 * v55);
        v29 = v99;
        v7 = v103;
        v6 = v106;
        v4 = v109;
        if ( !v56 )
          goto LABEL_163;
        goto LABEL_159;
      }
      v56 = realloc(v19, 32 * v55);
      v29 = v99;
      v7 = v103;
      v19 = v56;
      v6 = v106;
      v4 = v109;
      if ( v56 )
      {
        if ( src != *(void **)(v5 + 8) )
        {
LABEL_145:
          *(_QWORD *)(v5 + 8) = v19;
          goto LABEL_66;
        }
        v19 = src;
LABEL_159:
        v60 = v19;
        v61 = v4;
        v62 = v6;
        v19 = v56;
        v63 = v7;
        v64 = v29;
        memcpy(v56, v60, 32LL * *(_QWORD *)v5);
        v4 = v61;
        v29 = v64;
        v6 = v62;
        v7 = v63;
        goto LABEL_145;
      }
LABEL_211:
      v40 = *(const void **)(v5 + 8);
LABEL_161:
      if ( src == v40 )
        goto LABEL_163;
      goto LABEL_162;
    }
LABEL_160:
    v40 = v19;
    goto LABEL_161;
  }
LABEL_66:
  v30 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 <= v11 )
  {
    do
      *((_DWORD *)v19 + 8 * ++v30 - 8) = 0;
    while ( v30 <= v11 );
    *(_QWORD *)v5 = v30;
  }
  v31 = (signed int *)((char *)v19 + 32 * v11);
  if ( !*v31 )
  {
    *v31 = v29;
    goto LABEL_71;
  }
  if ( *v31 == v29 )
  {
LABEL_71:
    *(_BYTE *)(v12 + 72) = v13;
    v32 = *v4;
    *(_QWORD *)(v12 + 8) = v9;
    v8 = v32 + 1;
    *v4 = v32 + 1;
    if ( v7 > v32 + 1 )
    {
      v3 = (_QWORD *)v4[1];
      goto LABEL_3;
    }
    if ( (v7 & 0x8000000000000000LL) != 0LL )
      goto LABEL_211;
    v33 = 2 * v7;
    if ( 2 * v7 > 0x2E8BA2E8BA2E8BALL )
      goto LABEL_211;
    v34 = (void *)v4[1];
    v101 = v4;
    v97 = v6;
    if ( (void *)v96 != v34 )
    {
      v35 = realloc(v34, 176 * v7);
      v6 = v97;
      v4 = v101;
      v3 = v35;
      if ( !v35 )
        goto LABEL_211;
      v34 = (void *)v101[1];
      v8 = *v101;
      if ( (void *)v96 == v34 )
      {
LABEL_96:
        v42 = v4;
        v43 = v6;
        v44 = memcpy(v3, v34, 88 * v8);
        v4 = v42;
        v6 = v43;
        v3 = v44;
        v8 = *v42;
      }
      v4[1] = (signed __int64)v3;
      v7 = v33;
      goto LABEL_3;
    }
    v41 = malloc(176 * v7);
    v6 = v97;
    v4 = v101;
    v3 = v41;
    if ( v41 )
      goto LABEL_96;
    v40 = *(const void **)(v5 + 8);
    if ( src == v40 )
    {
LABEL_165:
      *__errno_location() = 12;
      return 0xFFFFFFFFLL;
    }
LABEL_162:
    v65 = v4;
    free((void *)v40);
    v4 = v65;
    goto LABEL_163;
  }
LABEL_132:
  if ( src != v19 )
  {
    v53 = v4;
    free(v19);
    v4 = v53;
  }
  v54 = (void *)v4[1];
  if ( (void *)v96 != v54 )
    free(v54);
  *__errno_location() = 22;
  return 0xFFFFFFFFLL;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_416FD0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_61F428 )
    v1 = unk_61F428;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_416FE8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_61EE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
