__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char v3; // r15
  int v4; // r14d
  __int64 v5; // r13
  char *v6; // r12
  __int64 v7; // rbp
  int *v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  char **v11; // rax
  const char *v12; // rsi
  char *v13; // rax
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // al
  __int64 v17; // rax
  void *v18; // r13
  const char *v19; // rsi
  struct passwd *v20; // rax
  __uid_t pw_uid; // eax
  struct group *v22; // rax
  __gid_t st_dev; // eax
  char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _BYTE *v28; // rdi
  bool v29; // zf
  char *v30; // rax
  int *v31; // rax
  char *v32; // rax
  __int64 v33; // r13
  char *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rbx
  char *v38; // rax
  char *v39; // rbx
  char v40; // al
  char v41; // dl
  char *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char *v46; // rax
  char *v47; // rax
  __int64 v48; // rbx
  char *v49; // rax
  __int64 v50; // rbp
  char *v51; // rbx
  int *v52; // rax
  const char *v53; // rsi
  __int64 v54; // rbx
  char *v55; // rax
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  __int64 v59; // rbx
  char *v60; // rax
  char *v61; // rax
  __int64 v62; // rbx
  char *v63; // rax
  __int64 v64; // rbx
  char *v65; // rax
  char **v66; // [rsp+8h] [rbp-140h]
  void *v67; // [rsp+10h] [rbp-138h]
  unsigned int v68; // [rsp+10h] [rbp-138h]
  void *v69; // [rsp+18h] [rbp-130h]
  int v70; // [rsp+18h] [rbp-130h]
  char v71; // [rsp+27h] [rbp-121h]
  void *v72; // [rsp+28h] [rbp-120h]
  __int64 v73[3]; // [rsp+30h] [rbp-118h] BYREF
  __int16 v74; // [rsp+48h] [rbp-100h]
  int v75; // [rsp+4Ch] [rbp-FCh]
  __int64 v76; // [rsp+50h] [rbp-F8h]
  __int64 v77; // [rsp+58h] [rbp-F0h]
  char v78; // [rsp+60h] [rbp-E8h]
  int v79; // [rsp+64h] [rbp-E4h]
  __int64 v80; // [rsp+68h] [rbp-E0h]
  __int64 v81; // [rsp+70h] [rbp-D8h]
  struct stat stat_buf; // [rsp+80h] [rbp-C8h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = (__int64)a2;
  v6 = 0LL;
  LOBYTE(v7) = 0;
  LODWORD(v8) = a1;
  v9 = (__int64)*a2;
  dword_621560 = 0;
  sub_40CFD0(v9);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_416FD0(sub_40AA00);
  sub_405700(v73);
  v73[0] = 0x400000000LL;
  v73[1] = 0x200000004LL;
  v79 = 0;
  v73[2] = 0x10100000180LL;
  v74 = 256;
  v75 = 0;
  v76 = 0x1000000LL;
  v77 = 0x1000000LL;
  v78 = 0;
  v80 = 0LL;
  v81 = 0LL;
  nptr = 0LL;
  qword_621548 = 0LL;
  byte_621541 = 0;
  byte_621540 = 0;
  umask(0);
  v71 = 0;
  v72 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v69 = 0LL;
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
        v67 = qword_621B80;
      }
      else if ( v10 <= 83 )
      {
        if ( v10 == -130 )
          sub_4046F0(0);
        if ( v10 <= -130 )
        {
          if ( v10 == -131 )
          {
            sub_411160(
              (_DWORD)stdout,
              (unsigned int)"install",
              (unsigned int)&unk_417166,
              (_DWORD)off_61F460,
              (unsigned int)"David MacKenzie",
              0);
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
            v72 = qword_621B80;
          else
            BYTE1(v76) = 1;
        }
        else if ( qword_621B80 )
        {
          v12 = "warning: ignoring --context; it requires an SELinux-enabled kernel";
LABEL_55:
          v13 = dcgettext(0LL, v12, 5);
          error(0, 0, v13);
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
        v11 = (char **)qword_621B80;
        v3 = 1;
        if ( !qword_621B80 )
          v11 = v66;
        v66 = v11;
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
        BYTE6(v77) = 1;
      }
      else if ( v10 <= 118 )
      {
        if ( v10 != 116 )
          goto LABEL_22;
        if ( v6 )
        {
          v47 = dcgettext(0LL, "multiple target directories specified", 5);
          error(1, 0, v47);
          goto LABEL_139;
        }
        v6 = (char *)qword_621B80;
      }
      else if ( v10 == 128 )
      {
        v12 = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
        if ( !dword_621560 )
          goto LABEL_55;
        BYTE5(v76) = 1;
        byte_61F44C = 0;
      }
      else
      {
        if ( v10 != 129 )
          goto LABEL_22;
        v71 = 1;
        arg = (char *)sub_411510(qword_621B80);
      }
    }
    else if ( v10 == 109 )
    {
      v69 = qword_621B80;
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
      HIBYTE(v75) = 1;
    }
  }
  if ( !byte_621540 )
  {
    if ( !v6 )
      goto LABEL_62;
    v14 = __xstat(1, v6, &stat_buf);
    if ( (_BYTE)v7 || !v14 )
    {
      if ( v14 || (stat_buf.st_mode & 0xF000) == 0x4000 )
        goto LABEL_62;
LABEL_139:
      v48 = sub_40EA00(4LL, v6);
      v49 = dcgettext(0LL, "target %s is not a directory", 5);
      error(1, 0, v49, v48);
    }
    v50 = sub_40EA00(4LL, v6);
    v51 = dcgettext(0LL, "failed to access %s", 5);
    v52 = __errno_location();
    error(1, *v52, v51, v50);
LABEL_141:
    v53 = "extra operand %s";
    v54 = sub_40EA00(4LL, v66[2]);
LABEL_142:
    v55 = dcgettext(0LL, v53, 5);
    error(0, 0, v55, v54);
    goto LABEL_22;
  }
  if ( byte_621541 )
    goto LABEL_151;
  if ( v6 )
  {
    v25 = dcgettext(0LL, "target directory not allowed when installing a directory", 5);
    error(1, 0, v25);
    goto LABEL_96;
  }
LABEL_62:
  v15 = 0;
  if ( v3 )
  {
    v38 = dcgettext(0LL, "backup type", 5);
    v15 = sub_40A930(v38, v66);
  }
  LODWORD(v73[0]) = v15;
  sub_40A380(v67);
  if ( !BYTE5(v76) )
    goto LABEL_109;
  if ( BYTE1(v76) || v72 )
  {
    v57 = dcgettext(0LL, "cannot set target context and preserve it", 5);
    error(1, 0, v57);
    goto LABEL_147;
  }
  while ( 2 )
  {
    LODWORD(v8) = (_DWORD)v8 - dword_61F4DC;
    v66 = (char **)(v5 + 8LL * dword_61F4DC);
    v16 = (v6 == 0LL) & (byte_621540 ^ 1);
    if ( v16 >= (int)v8 )
      goto LABEL_144;
    if ( (_BYTE)v4 )
    {
      if ( !v6 )
      {
        if ( (int)v8 <= 2 )
          goto LABEL_71;
        goto LABEL_141;
      }
      v56 = dcgettext(0LL, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5);
      error(1, 0, v56);
LABEL_144:
      if ( (_DWORD)v8 == 1 )
      {
        v53 = "missing destination file operand after %s";
        v54 = sub_40EA00(4LL, *v66);
        goto LABEL_142;
      }
LABEL_147:
      v19 = "missing file operand";
      goto LABEL_148;
    }
LABEL_96:
    if ( !v16 )
      goto LABEL_71;
    v6 = 0LL;
    if ( (_DWORD)v8 == 1 )
      goto LABEL_71;
    v5 = 1LL;
    v6 = v66[(int)v8 - 1];
    v26 = sub_40AD40(v6);
    v27 = -1LL;
    v28 = (_BYTE *)v26;
    do
    {
      if ( !v27 )
        break;
      v29 = *v28++ == (unsigned __int8)v4;
      --v27;
    }
    while ( !v29 );
    if ( -v27 != 2 )
      v5 = *(_BYTE *)(v26 + -v27 - 2 - 1) == 47;
    if ( __xstat(1, v6, &stat_buf) )
    {
      v4 = *__errno_location();
      if ( v4 )
      {
        if ( v4 != 2 )
          goto LABEL_152;
LABEL_106:
        if ( (_DWORD)v5 )
          goto LABEL_153;
        v6 = 0LL;
        if ( (_DWORD)v8 == 2 )
          goto LABEL_71;
        v8 = (int *)sub_40EA00(4LL, v66[(int)v8 - 1]);
        v30 = dcgettext(0LL, "target %s is not a directory", 5);
        error(1, 0, v30, v8);
LABEL_109:
        if ( v72 )
        {
          v31 = __errno_location();
          *v31 = 95;
          v8 = v31;
          v7 = sub_40EC50(v72);
          v32 = dcgettext(0LL, "failed to set default file creation context to %s", 5);
          error(1, *v8, v32, v7);
LABEL_111:
          sub_409A90();
          if ( v6 )
          {
            v33 = 0LL;
            sub_4056A0(v73);
            v68 = 0;
            v70 = (int)v8;
            do
            {
              v34 = v66[v33];
              v35 = sub_40AD40(v34);
              v36 = sub_40B0C0(v6, v35, 0LL);
              v37 = (void *)v36;
              if ( (((unsigned __int8)v7 & ((_DWORD)v33 == 0)) == 0 || (unsigned __int8)sub_403DB0(v34, v36, v73, 1LL))
                && (unsigned __int8)sub_404090(v34, (char *)v37) )
              {
                free(v37);
              }
              else
              {
                free(v37);
                v68 = 1;
              }
              ++v33;
            }
            while ( v70 > (int)v33 );
            return v68;
          }
          v6 = v66[1];
          v39 = *v66;
          if ( (_BYTE)v7 )
          {
            v40 = sub_403DB0(*v66, v66[1], v73, 0LL);
            v41 = 0;
            if ( !v40 )
              return !(v41 & 1);
            goto LABEL_133;
          }
          return (unsigned __int8)(sub_404090(*v66, v66[1]) ^ 1);
        }
        continue;
      }
    }
    break;
  }
  if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
  {
    v4 = 0;
    goto LABEL_106;
  }
  LODWORD(v8) = (_DWORD)v8 - 1;
  v6 = v66[(int)v8];
LABEL_71:
  if ( v69 )
  {
    v17 = sub_40CA80(v69);
    v18 = (void *)v17;
    if ( v17 )
    {
      mode = sub_40CE50(0LL, 0LL, 0LL, v17, 0LL);
      dword_61F444 = sub_40CE50(0LL, 1LL, 0LL, v18, &dword_61F440);
      free(v18);
      goto LABEL_74;
    }
    v59 = sub_40EC50(v69);
    v60 = dcgettext(0LL, "invalid mode %s", 5);
    error(1, 0, v60, v59);
LABEL_151:
    v61 = dcgettext(0LL, "the strip option may not be used when installing a directory", 5);
    error(1, 0, v61);
LABEL_152:
    v62 = sub_40EA00(4LL, v6);
    v63 = dcgettext(0LL, "failed to access %s", 5);
    error(1, v4, v63, v62);
LABEL_153:
    v64 = sub_40EA00(4LL, v6);
    v65 = dcgettext(0LL, "target %s is not a directory", 5);
    error(1, v4, v65, v64);
    start();
  }
LABEL_74:
  if ( v71 && !byte_621541 )
  {
    v44 = dcgettext(0LL, "WARNING: ignoring --strip-program option as -s option was not specified", 5);
    error(0, 0, v44);
  }
  if ( byte_621542 )
  {
    if ( HIBYTE(v75) )
    {
      v19 = "options --compare (-C) and --preserve-timestamps are mutually exclusive";
    }
    else
    {
      v19 = "options --compare (-C) and --strip are mutually exclusive";
      if ( !byte_621541 )
      {
        if ( (mode & 0xFFFF0E00) != 0 )
        {
          v43 = dcgettext(
                  0LL,
                  "the --compare (-C) option is ignored when you specify a mode with non-permission bits",
                  5);
          error(0, 0, v43);
        }
        goto LABEL_82;
      }
    }
LABEL_148:
    v58 = dcgettext(0LL, v19, 5);
    error(0, 0, v58);
LABEL_22:
    sub_4046F0(1);
  }
LABEL_82:
  if ( nptr )
  {
    v20 = getpwnam(nptr);
    if ( v20 )
    {
      pw_uid = v20->pw_uid;
      goto LABEL_85;
    }
    if ( (unsigned int)sub_411570(nptr) || (pw_uid = stat_buf.st_dev, stat_buf.st_dev > 0xFFFFFFFF) )
    {
      v8 = (int *)sub_40EC50(nptr);
      v45 = dcgettext(0LL, "invalid user %s", 5);
      error(1, 0, v45, v8);
LABEL_130:
      if ( (unsigned int)sub_411570(qword_621548) || (st_dev = stat_buf.st_dev, stat_buf.st_dev > 0xFFFFFFFF) )
      {
        v39 = (char *)sub_40EC50(qword_621548);
        v46 = dcgettext(0LL, "invalid group %s", 5);
        error(1, 0, v46, v39);
LABEL_133:
        v41 = sub_404090(v39, v6);
        return !(v41 & 1);
      }
      goto LABEL_89;
    }
LABEL_85:
    owner = pw_uid;
    endpwent();
  }
  else
  {
    owner = -1;
  }
  if ( qword_621548 )
  {
    v22 = getgrnam(qword_621548);
    if ( !v22 )
      goto LABEL_130;
    st_dev = v22->gr_gid;
LABEL_89:
    group = st_dev;
    endgrent();
  }
  else
  {
    group = -1;
  }
  if ( !byte_621540 )
    goto LABEL_111;
  return (unsigned int)sub_40F910((unsigned int)v8, v66, sub_403F50, v73);
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

void *sub_403CFB()
{
  return &unk_61F4E8;
}

__int64 sub_403D1A()
{
  return 0LL;
}

void *sub_403D51()
{
  void *result; // rax

  if ( !byte_61F528 )
  {
    while ( qword_61F530 < (unsigned __int64)(&qword_61EE48 - qword_61EE40 - 1) )
      ((void (*)(void))qword_61EE40[++qword_61F530])();
    result = sub_403CFB();
    byte_61F528 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_403DA8()
{
  return sub_403D1A();
}

__int64 __fastcall sub_403DB0(_BYTE *a1, _BYTE *a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  int *v6; // r12
  __int64 v7; // rbx
  char *v8; // rax
  int v10; // eax
  int v11; // r12d
  int v12; // ebp
  __int64 v13; // rbp
  char *v14; // rbx
  int *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  int v18[8]; // [rsp+8h] [rbp-20h] BYREF

  if ( !a4 && *a1 == 47 && *a2 == 47 )
  {
    v18[0] = 0;
    sub_40F8A0(v18);
    if ( sub_40C5E0(a2, v18, &sub_404020, a3) == -1 )
    {
      v13 = sub_40EA00(4LL, a2);
      v14 = dcgettext(0LL, "cannot create directory %s", 5);
      v15 = __errno_location();
      error(0, *v15, v14, v13);
      return 0LL;
    }
    return 1LL;
  }
  v18[0] = 0;
  v5 = sub_40C5E0(a2, v18, &sub_404020, a3);
  v6 = __errno_location();
  if ( v5 == -1 )
  {
    v7 = sub_40EA00(4LL, a2);
    v8 = dcgettext(0LL, "cannot create directory %s", 5);
    error(0, *v6, v8, v7);
    sub_40F770(v18, 1LL);
    sub_40F8A0(v18);
    return 0LL;
  }
  v10 = sub_40F770(v18, 0LL);
  v11 = *v6;
  v12 = v10;
  sub_40F8A0(v18);
  if ( v12 > 0 )
    return 0LL;
  if ( !v12 )
    return 1LL;
  v16 = sub_40EA00(4LL, a2);
  v17 = dcgettext(0LL, "cannot create directory %s", 5);
  error(0, v11, v17, v16);
  return 0LL;
}

__int64 __fastcall sub_403F50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // al
  unsigned int v5; // ebp

  v4 = sub_40C770(
         a1,
         a2,
         &sub_404020,
         a3,
         (unsigned int)dword_61F444,
         sub_404000,
         (unsigned int)dword_61F440,
         owner,
         group,
         0LL) ^ 1;
  v5 = v4;
  if ( !v4 && *(_BYTE *)(a3 + 33) )
    *__errno_location() = 95;
  return v5;
}

__int64 __fastcall sub_403FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  sub_40EA00(4LL, a1);
  dcgettext(0LL, "creating directory %s", 5);
  return sub_404AE0(stdout, a7);
}

__int64 __fastcall sub_404000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 46) )
    return sub_403FC0(a1, a2, a3, a4, a5, a6, a7);
  return result;
}

int __fastcall sub_404020(__int64 a1, const char *a2, __int64 a3)
{
  int result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // [rsp+0h] [rbp-28h]

  if ( *(_BYTE *)(a3 + 33) )
    *__errno_location() = 95;
  result = mkdir(a2, 0x1EDu);
  if ( !result )
  {
    if ( *(_BYTE *)(a3 + 46) )
    {
      sub_403FC0(a1, 493LL, v5, v6, v7, v8, v9);
      return 0;
    }
  }
  return result;
}

__int64 __fastcall sub_404090(char *file, char *filename, __int64 a3)
{
  __int64 v3; // rbp
  char *v4; // rbx
  __mode_t v5; // r14d
  __uid_t v6; // eax
  __gid_t v7; // eax
  int v8; // r14d
  int v9; // r15d
  size_t v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebp
  __pid_t v14; // eax
  const char *v15; // rsi
  char *v16; // rbp
  int *v17; // rax
  __int64 v18; // rbp
  char *v19; // rbx
  int *v20; // rax
  const char *v21; // rsi
  __int64 v22; // rbp
  char *v23; // rbx
  int *v24; // rax
  const char *v25; // rsi
  __int64 v26; // r12
  char *v27; // rbp
  int *v28; // rax
  const char *v29; // rdx
  char *v30; // rax
  char v31; // al
  char *v32; // r12
  size_t v33; // rbx
  char *v34; // rax
  char *v35; // r13
  _BYTE *v36; // rdx
  int *v37; // rax
  int *v38; // r14
  int *v39; // rax
  int *v40; // r14
  char *v41; // rbp
  int *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-1F0h]
  struct stat stat_buf; // [rsp+10h] [rbp-1E8h] BYREF
  struct stat v45; // [rsp+A0h] [rbp-158h] BYREF
  struct stat v46; // [rsp+130h] [rbp-C8h] BYREF

  v3 = a3;
  v4 = filename;
  if ( *(_BYTE *)(a3 + 31) && __xstat(1, file, &stat_buf) )
    goto LABEL_46;
  if ( byte_621542 )
  {
    v5 = mode;
    if ( (mode & 0xFFFF0E00) == 0
      && !__lxstat(1, file, &v45)
      && !__lxstat(1, filename, &v46)
      && (v45.st_mode & 0xF000) == 0x8000
      && (v46.st_mode & 0xF000) == 0x8000
      && ((v46.st_mode | v45.st_mode) & 0xFFFF0E00) == 0
      && v45.st_size == v46.st_size
      && v5 == (v46.st_mode & 0xFFF) )
    {
      v6 = owner;
      if ( owner != -1 || (v37 = __errno_location(), *v37 = 0, v38 = v37, v6 = getuid(), v6 != -1) || !*v38 )
      {
        if ( v6 == v46.st_uid )
        {
          v7 = group;
          if ( group != -1 || (v39 = __errno_location(), *v39 = 0, v40 = v39, v7 = getgid(), v7 != -1) || !*v40 )
          {
            if ( v7 == v46.st_gid )
            {
              if ( dword_621560 && *(_BYTE *)(v3 + 37) )
                goto LABEL_77;
              v8 = open(file, 0);
              if ( v8 >= 0 )
              {
                v9 = open(filename, 0);
                if ( v9 >= 0 )
                {
                  do
                  {
                    v11 = sub_40B1C0(v8, &unk_61F540, 0x1000uLL);
                    if ( !v11 )
                    {
                      close(v8);
                      close(v9);
                      goto LABEL_25;
                    }
                    v43 = v11;
                    v10 = sub_40B1C0(v9, &unk_620540, 0x1000uLL);
                  }
                  while ( v10 == v43 && !memcmp(&unk_61F540, &unk_620540, v10) );
                  close(v8);
                  close(v9);
                }
                else
                {
                  close(v8);
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
    if ( !(unsigned __int8)sub_409810(file, v4, 0LL, v3, &v46, 0LL) )
      return 0;
LABEL_25:
    if ( !byte_621541 )
    {
      if ( *(_BYTE *)(v3 + 31) )
        goto LABEL_27;
      goto LABEL_29;
    }
    v14 = fork();
    if ( v14 == -1 )
    {
      v15 = "fork system call failed";
LABEL_43:
      v16 = dcgettext(0LL, v15, 5);
      v17 = __errno_location();
      error(0, *v17, v16);
      goto LABEL_44;
    }
    if ( v14 )
      break;
    v41 = arg;
    execlp(arg, arg, v4, 0LL);
    v3 = sub_40EA00(4LL, v41);
    v4 = dcgettext(0LL, "cannot run %s", 5);
    v42 = __errno_location();
    error(1, *v42, v4, v3);
LABEL_77:
    *__errno_location() = 95;
  }
  if ( waitpid(v14, (int *)&v46, 0) < 0 )
  {
    v15 = "waiting for strip";
    goto LABEL_43;
  }
  if ( !(v46.st_dev & 0x7F | BYTE1(v46.st_dev)) )
  {
    if ( *(_BYTE *)(v3 + 31) )
    {
      if ( byte_621541 )
        goto LABEL_28;
LABEL_27:
      if ( (stat_buf.st_mode & 0xF000) != 0x8000 )
      {
LABEL_28:
        v46.st_dev = stat_buf.st_atim.tv_sec;
        v46.st_ino = stat_buf.st_atim.tv_nsec;
        *(struct timespec *)&v46.st_nlink = stat_buf.st_mtim;
        if ( (unsigned int)sub_410AA0(v4) )
        {
          v21 = "cannot set timestamps for %s";
          v22 = sub_40EA00(4LL, v4);
          goto LABEL_47;
        }
      }
    }
LABEL_29:
    if ( (group & owner) != -1 && lchown(v4, owner, group) )
    {
      v25 = "cannot change ownership of %s";
      v26 = sub_40EA00(4LL, v4);
    }
    else
    {
      v12 = 1;
      if ( !chmod(v4, mode) )
      {
LABEL_32:
        if ( byte_61F44C && dword_621560 == 1 && !__lxstat(1, v4, &v46) )
        {
          if ( byte_61F430 && *v4 == 47 )
          {
            v31 = v4[1];
            v32 = v4 + 1;
            if ( v31 == 47 )
            {
              while ( 1 )
              {
                v31 = v32[1];
                v36 = v32 + 1;
                if ( v31 != 47 )
                  break;
                ++v32;
              }
            }
            else
            {
              v36 = v4 + 1;
              v32 = v4;
            }
            if ( v31 )
            {
              do
                ++v36;
              while ( *v36 && *v36 != 47 );
              v33 = v36 - v32;
              v34 = (char *)malloc(v36 - v32 + 2);
              v35 = v34;
              if ( v34 )
              {
                *(_WORD *)stpncpy(v34, v32, v33) = 47;
                free(v35);
              }
            }
          }
          byte_61F430 = 0;
          *__errno_location() = 95;
        }
        return v12;
      }
      v25 = "cannot change permissions of %s";
      v26 = sub_40EA00(4LL, v4);
    }
    v27 = dcgettext(0LL, v25, 5);
    v28 = __errno_location();
    v29 = v27;
    v12 = 0;
    error(0, *v28, v29, v26);
    goto LABEL_32;
  }
  v30 = dcgettext(0LL, "strip process terminated abnormally", 5);
  error(0, 0, v30);
LABEL_44:
  if ( !unlink(v4) )
    return 0;
  v18 = sub_40EA00(4LL, v4);
  v19 = dcgettext(0LL, "cannot unlink %s", 5);
  v20 = __errno_location();
  error(1, *v20, v19, v18);
LABEL_46:
  v21 = "cannot stat %s";
  v22 = sub_40EA00(4LL, file);
LABEL_47:
  v23 = dcgettext(0LL, v21, 5);
  v24 = __errno_location();
  error(0, *v24, v23, v22);
  return 0;
}

void __fastcall __noreturn sub_4046F0(int status)
{
  char *v1; // rbp
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbp
  char *v5; // rax
  FILE *v6; // rbp
  char *v7; // rax
  FILE *v8; // rbp
  char *v9; // rax
  FILE *v10; // rbp
  char *v11; // rax
  FILE *v12; // rbp
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
  __int64 *v24; // rax
  char *v25; // rbp
  char *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // rax
  const char *v30; // r12
  char *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  char *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  char *v40; // rax
  char *v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = s;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(
         0LL,
         "Usage: %s [OPTION]... [-T] SOURCE DEST\n"
         "  or:  %s [OPTION]... SOURCE... DIRECTORY\n"
         "  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n"
         "  or:  %s [OPTION]... -d DIRECTORY...\n",
         5);
  __printf_chk(1LL, v3, v1, v1, v1, v1);
  v4 = stdout;
  v5 = dcgettext(
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
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "      --backup[=CONTROL]  make a backup of each existing destination file\n"
         "  -b                  like --backup but does not accept an argument\n"
         "  -c                  (ignored)\n"
         "  -C, --compare       compare each pair of source and destination files, and\n"
         "                        in some cases, do not modify the destination at all\n"
         "  -d, --directory     treat all arguments as directory names; create all\n"
         "                        components of the specified directories\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "  -D                  create all leading components of DEST except the last,\n"
          "                        or all components of --target-directory,\n"
          "                        then copy SOURCE to DEST\n"
          "  -g, --group=GROUP   set group ownership, instead of process' current group\n"
          "  -m, --mode=MODE     set permission mode (as in chmod), instead of rwxr-xr-x\n"
          "  -o, --owner=OWNER   set ownership (super-user only)\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
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
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "      --preserve-context  preserve SELinux security context\n"
          "  -Z                      set SELinux security context of destination\n"
          "                            file and each created directory to default type\n"
          "      --context[=CTX]     like -Z, or if CTX is specified then set the\n"
          "                            SELinux or SMACK security context to CTX\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
          0LL,
          "\n"
          "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
          "The version control method may be selected via the --backup option or through\n"
          "the VERSION_CONTROL environment variable.  Here are the values:\n"
          "\n",
          5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(
          0LL,
          "  none, off       never make backups (even if --backup is given)\n"
          "  numbered, t     make numbered backups\n"
          "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
          "  simple, never   always make simple backups\n",
          5);
  fputs_unlocked(v23, v22);
  v48[0] = (__int64)"[";
  v24 = v48;
  v48[1] = (__int64)"test invocation";
  v48[2] = (__int64)"coreutils";
  v48[3] = (__int64)"Multi-call invocation";
  v48[4] = (__int64)"sha224sum";
  v48[5] = (__int64)"sha2 utilities";
  v48[6] = (__int64)"sha256sum";
  v48[7] = (__int64)"sha2 utilities";
  v48[8] = (__int64)"sha384sum";
  v48[9] = (__int64)"sha2 utilities";
  v48[10] = (__int64)"sha512sum";
  v48[11] = (__int64)"sha2 utilities";
  v48[12] = 0LL;
  v48[13] = 0LL;
  do
    v24 += 2;
  while ( *v24 && strcmp("install", (const char *)*v24) );
  v25 = (char *)v24[1];
  if ( v25 )
  {
    v26 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v26, &unk_417166, "https://www.gnu.org/software/coreutils/", v27, v28);
    v29 = setlocale(5, 0LL);
    if ( !v29 || !strncmp(v29, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v37 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v37, &unk_417166, "https://www.gnu.org/software/coreutils/", v38, v39);
    v40 = setlocale(5, 0LL);
    if ( !v40 || !strncmp(v40, "en_", 3uLL) )
    {
      v25 = "install";
      v41 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v30 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v41, "https://www.gnu.org/software/coreutils/", "install", v42, v43);
LABEL_12:
      v34 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v34, v25, v30, v35, v36);
LABEL_3:
      exit(status);
    }
    v25 = "install";
  }
  v44 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v44, "install", v45, v46, v47);
LABEL_10:
  v30 = "Multi-call invocation" + 10;
  v31 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v31, "https://www.gnu.org/software/coreutils/", "install", v32, v33);
  if ( v25 != "install" )
    v30 = "";
  goto LABEL_12;
}

int __fastcall sub_404AE0(FILE *s)
{
  char *IO_write_ptr; // rax

  fputs_unlocked(::s, s);
  fwrite_unlocked(&unk_4185C0, 1uLL, 2uLL, s);
  sub_412A70(s);
  IO_write_ptr = s->_IO_write_ptr;
  if ( IO_write_ptr >= s->_IO_write_end )
  {
    LODWORD(IO_write_ptr) = __overflow(s, 10);
  }
  else
  {
    s->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 10;
  }
  return (int)IO_write_ptr;
}

bool __fastcall sub_404BD0(char *name, __int16 a2)
{
  if ( (a2 & 0xF000) == 40960 )
    return 1;
  if ( (unsigned __int8)sub_4112A0() )
    return 1;
  return euidaccess(name, 2) == 0;
}

__int64 __fastcall sub_404C20(int fd, size_t a2)
{
  size_t v2; // rbx
  size_t v3; // rbp
  __int64 v4; // rax
  void *v6; // rax

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
  if ( !a2 )
    return 1LL;
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
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_404CD0(int a1, __off_t a2, __off_t a3)
{
  int v3; // ebx
  int v5; // eax

  v3 = fallocate(a1, 3, a2, a3);
  if ( v3 < 0 && ((v5 = *__errno_location(), v5 == 38) || v5 == 95) )
    return 0LL;
  else
    return (unsigned int)v3;
}

int __fastcall sub_404D10(int a1, const char *a2, __mode_t a3)
{
  if ( a1 >= 0 )
    return fchmod(a1, a3);
  else
    return chmod(a2, a3);
}

__int64 sub_404D30()
{
  int *v0; // rax
  int *v1; // rbx
  char *v2; // rax

  v0 = __errno_location();
  *v0 = 95;
  v1 = v0;
  v2 = dcgettext(0LL, "failed to restore the default file creation context", 5);
  error(1, *v1, v2);
  return sub_404D70();
}

int __fastcall sub_404D70(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rbp
  const char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  char *IO_write_ptr; // rax

  v4 = (const char *)sub_40E920(1LL, 4LL, a2);
  v5 = (const char *)sub_40E920(0LL, 4LL, a1);
  __printf_chk(1LL, "%s -> %s", v5, v4);
  if ( a3 )
  {
    v6 = sub_40EA00(4LL, a3);
    v7 = dcgettext(0LL, " (backup: %s)", 5);
    __printf_chk(1LL, v7, v6);
  }
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
  return (int)IO_write_ptr;
}

__int64 __fastcall sub_404E20(__int64 a1, char *a2, _DWORD *a3)
{
  char *v4; // rbx
  char *v5; // rdx
  FILE *v6; // rdi
  char *v8; // rbx
  char *v9; // rax
  char v10[52]; // [rsp+4h] [rbp-34h] BYREF

  if ( sub_404BD0(a2, *a3) )
  {
    sub_40EA00(4LL, a2);
    v8 = s;
    v9 = dcgettext(0LL, "%s: overwrite %s? ", 5);
    __fprintf_chk(stderr, 1LL, v9, v8);
    return ((__int64 (*)(void))sub_4119A0)();
  }
  else
  {
    sub_40AF30((unsigned int)*a3, v10);
    v10[10] = 0;
    sub_40EA00(4LL, a2);
    v4 = s;
    if ( *(_BYTE *)(a1 + 24) || (*(_DWORD *)(a1 + 20) & 0xFFFF00) != 0 )
      v5 = dcgettext(0LL, "%s: replace %s, overriding mode %04lo (%s)? ", 5);
    else
      v5 = dcgettext(0LL, "%s: unwritable %s (mode %04lo, %s); try anyway? ", 5);
    v6 = stderr;
    __fprintf_chk(stderr, 1LL, v5, v4);
    return ((__int64 (__fastcall *)(FILE *, __int64))sub_4119A0)(v6, 1LL);
  }
}

__int64 __fastcall sub_404F50(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // rbp
  char *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbp
  char *v13; // rbx
  int *v14; // rax

  v6 = a1;
  v7 = sub_409E90(4294967196LL, a1, 4294967196LL, a2, (unsigned __int8)(a5 != 0) << 10, a3);
  if ( v7 < 0 )
  {
    v11 = sub_40E920(1LL, 4LL, a1);
    v12 = sub_40E920(0LL, 4LL, a2);
    v13 = dcgettext(0LL, "cannot create hard link %s to %s", 5);
    v14 = __errno_location();
    error(0, *v14, v13, v12, v11);
    return 0LL;
  }
  else
  {
    LOBYTE(v6) = a4 & (v7 > 0);
    if ( (_BYTE)v6 )
    {
      v9 = sub_40EA00(4LL, a2);
      v10 = dcgettext(0LL, "removed %s\n", 5);
      __printf_chk(1LL, v10, v9);
      return v6;
    }
    else
    {
      return 1LL;
    }
  }
}

__int64 __fastcall sub_405060(int a1, __int64 a2, char a3, __off_t a4)
{
  __off_t v6; // rax
  __int64 v8; // rax
  const char *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  char *v12; // rbx
  int *v13; // rax

  v6 = lseek(a1, a4, 1);
  if ( v6 < 0 )
  {
    v11 = sub_40EA00(4LL, a2);
    v9 = "cannot lseek %s";
    v10 = v11;
  }
  else
  {
    if ( !a3 || (int)sub_404CD0(a1, v6 - a4, a4) >= 0 )
      return 1LL;
    v8 = sub_40EA00(4LL, a2);
    v9 = "error deallocating %s";
    v10 = v8;
  }
  v12 = dcgettext(0LL, v9, 5);
  v13 = __errno_location();
  error(0, *v13, v12, v10);
  return 0LL;
}

__int64 __fastcall sub_405120(
        int a1,
        int a2,
        char *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 a9,
        _QWORD *a10,
        _BYTE *a11)
{
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  unsigned __int64 v13; // r15
  size_t v14; // rdx
  ssize_t v15; // rax
  int *v16; // rax
  int *v17; // rbx
  unsigned int v18; // r15d
  __int64 v19; // rbp
  char *v20; // rax
  char *v22; // r13
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  void *v25; // r11
  _BYTE *v26; // rsi
  size_t v27; // rdx
  int v28; // eax
  char v29; // dl
  bool v30; // al
  char v31; // r9
  __int64 v32; // rax
  char v33; // r9
  unsigned int v34; // eax
  bool v35; // zf
  __int64 v36; // rbx
  char *v37; // rax
  __int64 v38; // rbp
  char *v39; // rbx
  int *v40; // rax
  __off_t v41; // r13
  void *v42; // [rsp+8h] [rbp-A0h]
  int v43; // [rsp+8h] [rbp-A0h]
  bool v45; // [rsp+1Dh] [rbp-8Bh]
  char v46; // [rsp+1Eh] [rbp-8Ah]
  unsigned __int64 v49; // [rsp+28h] [rbp-80h]
  ssize_t v50; // [rsp+30h] [rbp-78h]
  unsigned __int64 v52; // [rsp+50h] [rbp-58h]
  unsigned __int64 v53; // [rsp+58h] [rbp-50h]

  *a11 = 0;
  v49 = a9;
  *a10 = 0LL;
  if ( !a9 )
    return 1;
  v53 = a5;
  if ( !a5 )
    a5 = a4;
  v12 = 0;
  v13 = 0LL;
  v52 = a5;
  while ( 1 )
  {
LABEL_5:
    v14 = v49;
    if ( a4 <= v49 )
      v14 = a4;
    v15 = read(a1, a3, v14);
    v50 = v15;
    if ( v15 >= 0 )
      break;
    v16 = __errno_location();
    if ( *v16 != 4 )
    {
      v17 = v16;
      v18 = 0;
      v19 = sub_40EA00(4LL, a7);
      v20 = dcgettext(0LL, "error reading %s", 5);
      error(0, *v17, v20, v19);
      return v18;
    }
  }
  if ( !v15 )
  {
    v41 = v13;
    LOBYTE(v11) = v12;
    goto LABEL_51;
  }
  v22 = a3;
  v23 = v15;
  v24 = v52;
  *a10 += v15;
  v25 = a3;
  v45 = v53 != 0;
  while ( 1 )
  {
    if ( v24 > v23 )
      v24 = v23;
    LOBYTE(v11) = v45 && v24 != 0;
    if ( (_BYTE)v11 )
      break;
    v11 = v12;
    if ( (((unsigned __int8)v12 ^ 1) & (v24 == v23)) == 0 && v24 )
    {
LABEL_38:
      if ( 0x7FFFFFFFFFFFFFFFLL - v24 < v13 )
      {
        v18 = 0;
        v36 = sub_40EA00(4LL, a7);
        v37 = dcgettext(0LL, "overflow reading %s", 5);
        error(0, 0, v37, v36);
        return v18;
      }
      v13 += v24;
      v23 -= v24;
      v22 += v24;
      v12 = v11;
      goto LABEL_40;
    }
LABEL_33:
    v13 += v24;
    v43 = 1;
    v46 = 0;
    if ( !(_BYTE)v12 )
      goto LABEL_26;
LABEL_34:
    v34 = sub_405060(a2, a8, a6, v13);
    v33 = v46;
    if ( !(_BYTE)v34 )
      return v34;
LABEL_27:
    if ( v43 )
    {
      if ( !v24 )
      {
        v13 = 0LL;
LABEL_44:
        v35 = v49 == v50;
        v49 -= v50;
        *a11 = v11;
        if ( !v35 )
        {
          v12 = v11;
          goto LABEL_5;
        }
        v41 = v13;
LABEL_51:
        if ( (_BYTE)v11 )
          return sub_405060(a2, a8, a6, v41);
        return 1;
      }
      if ( !v33 )
      {
        v25 = v22;
        v23 -= v24;
        v12 = v11;
        v22 += v24;
        v13 = 0LL;
        goto LABEL_40;
      }
      v13 = v24;
      v25 = v22;
      v12 = v11;
      v24 = 0LL;
    }
    else
    {
      v25 = v22;
      v23 -= v24;
      v12 = v11;
      v22 += v24;
      v13 = v24;
LABEL_40:
      if ( !v23 )
        goto LABEL_44;
    }
  }
  v26 = v22;
  v27 = v24;
  do
  {
    if ( *v26 )
    {
      v30 = v45 && v24 != 0;
      v29 = v12;
      v11 = 0;
      goto LABEL_21;
    }
    ++v26;
    if ( !--v27 )
    {
      v31 = (v13 != 0) & (v12 ^ 1);
      goto LABEL_37;
    }
  }
  while ( (v27 & 0xF) != 0 );
  v42 = v25;
  v28 = memcmp(v22, v26, v27);
  v25 = v42;
  LOBYTE(v11) = v28 == 0;
  v29 = v12 ^ (v28 == 0);
  v30 = v28 != 0;
LABEL_21:
  v31 = v29 & (v13 != 0);
  if ( v24 != v23 || !v30 )
  {
LABEL_37:
    if ( !v31 )
      goto LABEL_38;
    v43 = 0;
    goto LABEL_25;
  }
  if ( !v31 )
  {
    v11 = 0;
    goto LABEL_33;
  }
  v43 = 1;
  v11 = 0;
LABEL_25:
  v46 = v31;
  if ( (_BYTE)v12 )
    goto LABEL_34;
LABEL_26:
  v32 = sub_40B240(a2, v25, v13);
  v33 = v46;
  if ( v13 == v32 )
    goto LABEL_27;
  v18 = v12;
  v38 = sub_40EA00(4LL, a8);
  v39 = dcgettext(0LL, "error writing %s", 5);
  v40 = __errno_location();
  error(0, *v40, v39, v38);
  return v18;
}

__int64 __fastcall sub_405550(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  int *v6; // rax
  int *v7; // r13
  __int64 v8; // rbx
  char *v9; // rax
  int v10; // ebx
  unsigned int v12; // ebx

  if ( a5[37] )
  {
    v6 = __errno_location();
    v7 = v6;
    if ( !a5[35] || (v10 = (unsigned __int8)a5[38], (_BYTE)v10) )
    {
      *v6 = 95;
      v8 = sub_40EA00(4LL, a1);
      v9 = dcgettext(0LL, "failed to get security context of %s", 5);
      error(0, *v7, v9, v8);
      v10 = (unsigned __int8)a5[38];
    }
    else
    {
      *v6 = 95;
    }
    return v10 ^ 1u;
  }
  else
  {
    v12 = a4;
    LOBYTE(v12) = a5[33] & a4;
    if ( (_BYTE)v12 )
    {
      *__errno_location() = 95;
      return v12;
    }
    else
    {
      return 1LL;
    }
  }
}

__int64 __fastcall sub_405620(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v5; // rax
  int *v6; // rbp
  __int64 v7; // rbx
  char *v8; // rax

  v5 = __errno_location();
  v6 = v5;
  if ( !*(_BYTE *)(a4 + 35) || *(_BYTE *)(a4 + 38) )
  {
    *v5 = 95;
    v7 = sub_40E920(0LL, 4LL, a1);
    v8 = dcgettext(0LL, "failed to set the security context of %s", 5);
    error(0, *v6, v8, v7);
    return 0LL;
  }
  else
  {
    *v5 = 95;
    return 0LL;
  }
}

__int64 __fastcall sub_4056A0(__int64 a1)
{
  __int64 result; // rax

  result = sub_40BB50(61LL, 0LL, sub_40C510, sub_40C550, sub_40C5C0);
  *(_QWORD *)(a1 + 56) = result;
  return result;
}

__int64 __fastcall sub_4056D0(__int64 a1)
{
  __int64 result; // rax

  result = sub_40BB50(61LL, 0LL, sub_40C540, sub_40C550, sub_40C5C0);
  *(_QWORD *)(a1 + 64) = result;
  return result;
}

bool __fastcall sub_405700(__int64 a1)
{
  bool result; // al

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
  int *v1; // rax
  char result; // al

  v1 = __errno_location();
  result = *v1 == 22 || *v1 == 1;
  if ( result )
    return *(_BYTE *)(a1 + 26) ^ 1;
  return result;
}

__int64 __fastcall sub_405770(__int64 a1, const char *a2, unsigned int a3, _DWORD *a4, char a5, __int64 a6)
{
  __uid_t v8; // r14d
  __gid_t v9; // r13d
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int *v13; // rax
  int v14; // r14d
  int *v15; // r15
  char v16; // al
  unsigned int v17; // edx
  int *v19; // rax
  int v20; // ebx
  int *v21; // r14
  __int64 v22; // r12
  char *v23; // rbx
  int *v24; // rax
  int *v25; // rbx
  __int64 v26; // r12
  char *v27; // rax

  v8 = a4[7];
  v9 = a4[8];
  if ( !a5 )
  {
    if ( (*(_QWORD *)(a1 + 24) & 0xFF0000000000FFLL) != 0 )
    {
      v10 = *(_DWORD *)(a6 + 24);
      v11 = a4[6];
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 43) )
        goto LABEL_6;
      v10 = *(_DWORD *)(a6 + 24);
      v11 = *(_DWORD *)(a1 + 16);
    }
    v12 = ~v11;
    BYTE1(v12) = ((unsigned __int16)~(_WORD)v11 >> 8) | 0xE;
    if ( (v10 & v12 & 0xFFF) != 0
      && (unsigned int)sub_40D0B0(a2, a3, (unsigned __int16)v10 & (unsigned __int16)v11 & 0x1C0) )
    {
      v25 = __errno_location();
      if ( *v25 != 1 && *v25 != 22 || *(_BYTE *)(a1 + 27) )
      {
        v26 = sub_40EA00(4LL, a2);
        v27 = dcgettext(0LL, "clearing permissions for %s", 5);
        error(0, *v25, v27, v26);
      }
      return (unsigned int)-*(unsigned __int8 *)(a1 + 36);
    }
  }
LABEL_6:
  if ( a3 != -1 )
  {
    if ( fchown(a3, v8, v9) )
    {
      v13 = __errno_location();
      v14 = *v13;
      v15 = v13;
      if ( *v13 == 1 || v14 == 22 )
      {
        fchown(a3, 0xFFFFFFFF, v9);
        *v15 = v14;
      }
      goto LABEL_10;
    }
    return 1;
  }
  if ( !lchown(a2, v8, v9) )
    return 1;
  v19 = __errno_location();
  v20 = *v19;
  v21 = v19;
  if ( *v19 == 1 || v20 == 22 )
  {
    lchown(a2, 0xFFFFFFFF, v9);
    *v21 = v20;
  }
LABEL_10:
  v16 = sub_405740(a1);
  v17 = 0;
  if ( !v16 )
  {
    v22 = sub_40EA00(4LL, a2);
    v23 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
    v24 = __errno_location();
    error(0, *v24, v23, v22);
    return (unsigned int)-*(unsigned __int8 *)(a1 + 36);
  }
  return v17;
}

__int64 sub_405960()
{
  __mode_t v0; // ebx

  v0 = dword_61F450;
  if ( dword_61F450 == -1 )
  {
    v0 = umask(0);
    dword_61F450 = v0;
    umask(v0);
  }
  return v0;
}

__int64 __fastcall sub_405990(
        const char *a1,
        char *a2,
        unsigned int a3,
        struct timespec *a4,
        __int64 a5,
        __m128i *a6,
        unsigned int a7,
        _BYTE *a8,
        _BYTE *a9,
        _BYTE *a10)
{
  unsigned int v10; // r15d
  char *v11; // r14
  __m128i *v12; // r13
  bool v14; // zf
  __int64 v15; // rbx
  int v16; // eax
  char *v17; // rsi
  __int64 v18; // rdi
  __int32 v19; // eax
  int v20; // eax
  __int64 v21; // r8
  __int32 v22; // eax
  __int16 v23; // ax
  __int64 v24; // rcx
  __int32 v25; // r12d
  __int64 v26; // rdi
  char v27; // al
  char v28; // al
  int v29; // eax
  int *v30; // rax
  int *v31; // r12
  struct stat *v32; // rdx
  __int64 v33; // r12
  const char *v34; // rsi
  __int64 v35; // rbx
  char *v36; // rax
  int v37; // r12d
  char v38; // al
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  void *v43; // r12
  char v44; // r8
  bool v45; // r12
  __int64 v46; // rsi
  char v47; // al
  int v48; // eax
  __int64 v49; // r12
  char *v50; // rbx
  int *v51; // rax
  int v52; // eax
  __mode_t v53; // edx
  __int64 v54; // r12
  char *v55; // rbx
  int *v56; // rax
  unsigned int v57; // eax
  int v58; // eax
  __int64 v59; // r12
  char *v60; // rbx
  int *v61; // rax
  __dev_t st_dev; // rdx
  __ino_t st_ino; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int32 v73; // eax
  __int64 v74; // r12
  char *v75; // rax
  __int64 v76; // r12
  __int64 v77; // rbx
  char *v78; // rax
  int *v79; // r12
  int v80; // eax
  int *v81; // rax
  __int64 v82; // rbx
  char *v83; // rax
  __int32 v84; // eax
  char v85; // al
  _QWORD *v86; // rax
  const char *v87; // rsi
  char *v88; // rax
  int v89; // eax
  const char *v90; // rsi
  char *v91; // r12
  int *v92; // rax
  __mode_t v93; // r12d
  int v94; // eax
  __int64 v95; // r12
  char *v96; // rax
  __m128i v97; // xmm1
  __m128i v98; // xmm2
  __m128i v99; // xmm3
  __blkcnt_t v100; // rax
  char *v101; // r12
  char v102; // r15
  void *v103; // rbx
  void *v104; // rsi
  char v105; // al
  char v106; // r12
  __int64 v107; // rax
  int v108; // edx
  const char *v109; // rsi
  char *v110; // rax
  _BOOL8 v111; // rcx
  int v112; // eax
  __int64 v113; // rax
  char v114; // r12
  __int64 v115; // rcx
  __m128i *v116; // r9
  __m128i *v117; // rdx
  char v118; // al
  __int64 v119; // r13
  const char *v120; // rsi
  __int64 v121; // rbx
  char *v122; // rax
  int v123; // eax
  int v124; // eax
  bool v125; // al
  char v126; // al
  __int64 v127; // r12
  char *v128; // rbx
  int *v129; // rax
  int v130; // esi
  int v131; // edx
  int v132; // ecx
  int v133; // r8d
  int v134; // r9d
  char *v135; // r12
  int v136; // ecx
  int *v137; // rax
  int *v138; // r12
  int *v139; // rax
  int tv_sec; // r12d
  char *v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rbx
  char *v144; // rax
  __int64 v145; // r12
  char *v146; // rax
  __int64 v147; // rcx
  char *v148; // rax
  _BYTE *v149; // rax
  __int64 v150; // rdx
  _BYTE *v151; // r8
  size_t v152; // r12
  size_t v153; // rax
  int v154; // eax
  int v155; // eax
  void *v156; // r12
  char *v157; // rax
  __int64 v158; // rsi
  char *v159; // rax
  char *v160; // r12
  size_t v161; // rax
  void *v162; // rsp
  char *v163; // r12
  char v164; // al
  int v165; // r12d
  char *v166; // rax
  __int64 v167; // r12
  __int64 v168; // rbx
  char *v169; // rax
  __int64 v170; // r12
  char *v171; // r14
  int *v172; // rax
  __int64 v173; // rax
  char *v174; // r12
  __int64 v175; // r12
  char *v176; // rax
  __int64 v177; // rdx
  unsigned int v178; // eax
  _BYTE *v179; // rax
  __int64 v180; // rbx
  char *v181; // rax
  char v182; // al
  int v183; // r12d
  int v184; // eax
  __int64 v185; // rcx
  char v186; // al
  char *v187; // r12
  int *v188; // rax
  int *v189; // rax
  const char *v190; // rsi
  __int64 v191; // rbx
  char *v192; // rax
  char *v193; // r12
  int *v194; // rax
  char *v195; // r12
  int *v196; // rax
  char *v197; // rax
  __int64 v198; // rcx
  int v199; // eax
  __int64 v200; // r12
  char *v201; // rax
  __int64 v202; // r12
  char *v203; // rax
  unsigned __int64 v204; // r12
  __int64 v205; // rax
  __blksize_t v206; // rdi
  unsigned __int64 v207; // rax
  char *v208; // rsi
  unsigned __int64 v209; // rdx
  bool v210; // r9
  int v211; // eax
  char v212; // r8
  int v213; // eax
  char *v214; // r12
  int *v215; // rax
  int v216; // ecx
  int v217; // r9d
  int v218; // r8d
  char *v219; // r12
  int *v220; // rax
  int v221; // eax
  int v222; // eax
  char *v223; // r12
  int *v224; // rax
  int v225; // eax
  __off_t v226; // r12
  char *v227; // rcx
  __off_t v228; // rbx
  char v229; // r15
  unsigned __int64 v230; // r14
  char v231; // al
  unsigned __int64 v232; // rdx
  __off_t v233; // rsi
  unsigned int v234; // r13d
  __int64 v235; // rax
  unsigned __int64 v236; // r8
  __off_t *v237; // rax
  __int64 v238; // rcx
  bool v239; // r12
  const char *v240; // rsi
  char *v241; // r12
  int *v242; // rax
  __int64 v243; // rdx
  char *v244; // rbx
  __int64 v245; // r12
  __int64 v246; // rax
  __int32 v247; // eax
  __int64 v248; // r12
  int *v249; // rax
  char *v250; // r12
  int *v251; // rax
  __int64 v252; // rcx
  char *v253; // rdi
  void *v254; // rax
  __int64 v255; // r12
  char *v256; // rax
  const char *v257; // rsi
  char *v258; // r12
  int *v259; // rax
  char *v260; // rax
  int v261; // eax
  int v262; // eax
  char *v263; // r12
  int *v264; // rax
  unsigned __int64 v265; // rax
  __int64 v266; // r12
  char *v267; // rax
  _QWORD v268[4]; // [rsp-Eh] [rbp-390h] BYREF
  char v269[8]; // [rsp+12h] [rbp-370h] BYREF
  __off_t st_size; // [rsp+1Ah] [rbp-368h]
  __m128i *v271; // [rsp+22h] [rbp-360h]
  unsigned int v272; // [rsp+2Ah] [rbp-358h]
  int v273; // [rsp+2Eh] [rbp-354h]
  char *v274; // [rsp+32h] [rbp-350h]
  int v275; // [rsp+3Ah] [rbp-348h]
  __mode_t v276; // [rsp+3Eh] [rbp-344h]
  __m128i *st_blksize; // [rsp+42h] [rbp-340h]
  char *v278; // [rsp+4Ah] [rbp-338h]
  char *s; // [rsp+52h] [rbp-330h]
  unsigned int v280; // [rsp+5Ah] [rbp-328h]
  char v281; // [rsp+5Fh] [rbp-323h]
  unsigned __int8 v282; // [rsp+60h] [rbp-322h]
  char v283; // [rsp+61h] [rbp-321h]
  struct stat *p_dev; // [rsp+62h] [rbp-320h]
  size_t v285; // [rsp+6Ah] [rbp-318h]
  char *s2; // [rsp+72h] [rbp-310h]
  void *s1; // [rsp+7Ah] [rbp-308h]
  char *old; // [rsp+82h] [rbp-300h]
  struct timespec *p_length; // [rsp+8Ah] [rbp-2F8h]
  size_t n; // [rsp+92h] [rbp-2F0h]
  int fd[2]; // [rsp+9Ah] [rbp-2E8h]
  void *ptr; // [rsp+A2h] [rbp-2E0h]
  struct stat *p_stat_buf; // [rsp+AAh] [rbp-2D8h]
  char *src; // [rsp+B2h] [rbp-2D0h]
  __mode_t st_mode; // [rsp+BAh] [rbp-2C8h]
  int v296; // [rsp+BEh] [rbp-2C4h]
  int fildes[2]; // [rsp+C2h] [rbp-2C0h]
  char *filename; // [rsp+CAh] [rbp-2B8h]
  char v299; // [rsp+D9h] [rbp-2A9h] BYREF
  __int64 v300; // [rsp+DAh] [rbp-2A8h] BYREF
  struct timespec length; // [rsp+E2h] [rbp-2A0h] BYREF
  struct timespec st_mtim; // [rsp+F2h] [rbp-290h]
  char v303; // [rsp+102h] [rbp-280h]
  char v304; // [rsp+103h] [rbp-27Fh]
  void *v305; // [rsp+10Ah] [rbp-278h]
  struct stat stat_buf; // [rsp+112h] [rbp-270h] BYREF
  struct stat v307; // [rsp+1A2h] [rbp-1E0h] BYREF
  struct stat v308; // [rsp+232h] [rbp-150h] BYREF
  struct stat dev; // [rsp+2C2h] [rbp-C0h] BYREF

  v11 = (char *)a1;
  v12 = a6;
  filename = a2;
  LOBYTE(fildes[0]) = a10 != 0LL;
  v14 = a6[1].m128i_i8[8] == 0;
  v15 = a7;
  p_length = a4;
  *(_QWORD *)fd = a5;
  if ( !v14 && a10 )
    *a10 = 0;
  v14 = a6->m128i_i32[1] == 2;
  *a9 = 0;
  p_stat_buf = &stat_buf;
  if ( !v14 )
  {
    v16 = __xstat(1, a1, &stat_buf);
    v17 = (char *)a1;
    LOBYTE(v10) = v16 != 0;
    if ( !v16 )
      goto LABEL_6;
LABEL_117:
    v10 = 0;
    v59 = sub_40EA00(4LL, v17);
    v60 = dcgettext(0LL, "cannot stat %s", 5);
    v61 = __errno_location();
    error(0, *v61, v60, v59);
    return v10;
  }
  v58 = __lxstat(1, a1, &stat_buf);
  v17 = (char *)a1;
  LOBYTE(v10) = v58 != 0;
  if ( v58 )
    goto LABEL_117;
LABEL_6:
  st_mode = stat_buf.st_mode;
  v296 = stat_buf.st_mode & 0xF000;
  if ( v296 != 0x4000 )
  {
    if ( !(_BYTE)a7 )
      goto LABEL_10;
    v18 = v12[4].m128i_i64[0];
    if ( v12->m128i_i32[0] )
    {
      sub_40AE60(v18, v11, p_stat_buf);
      goto LABEL_10;
    }
    v85 = sub_40AEF0(v18, v11, p_stat_buf);
    if ( v85 )
    {
      LOBYTE(filename) = v85;
      v143 = sub_40EA00(4LL, v11);
      v144 = dcgettext(0LL, "warning: source file %s specified more than once", 5);
      error(0, 0, v144, v143);
      return (unsigned __int8)filename;
    }
    goto LABEL_169;
  }
  if ( !v12[2].m128i_i8[10] )
  {
    v107 = sub_40EA00(4LL, v17);
    v108 = 5;
    v15 = v107;
    if ( !v12[1].m128i_i8[9] )
    {
LABEL_240:
      v110 = dcgettext(0LL, "-r not specified; omitting directory %s", v108);
      goto LABEL_226;
    }
    v109 = "omitting directory %s";
    goto LABEL_225;
  }
  if ( (_BYTE)a7 )
LABEL_169:
    sub_40AE60(v12[4].m128i_i64[0], v11, p_stat_buf);
LABEL_10:
  LODWORD(ptr) = 1;
  v19 = v12->m128i_i32[1];
  if ( v19 != 4 )
    LODWORD(ptr) = (unsigned __int8)a7 & (v19 == 3);
  if ( (_BYTE)a3 )
  {
LABEL_58:
    LOBYTE(src) = 1;
    LOBYTE(v24) = 0;
    old = 0LL;
    goto LABEL_59;
  }
  if ( v296 != 0x8000 && (!v12[1].m128i_i8[4] || v296 == 0x4000 || v296 == 40960)
    || v12[1].m128i_i8[8]
    || v12[2].m128i_i8[12]
    || v12[1].m128i_i8[7]
    || v12->m128i_i32[0]
    || v12[1].m128i_i8[5] )
  {
    n = (size_t)&v307;
    v80 = __lxstat(1, filename, &v307);
    v21 = a3;
    LOBYTE(src) = v80 != 0;
    if ( !v80 )
      goto LABEL_23;
    goto LABEL_157;
  }
  n = (size_t)&v307;
  v20 = __xstat(1, filename, &v307);
  v21 = 1LL;
  LOBYTE(src) = v20 != 0;
  if ( v20 )
  {
LABEL_157:
    v81 = __errno_location();
    if ( *v81 != 2 )
    {
      *(_QWORD *)fildes = v81;
      v10 = a3;
      v82 = sub_40EA00(4LL, filename);
      v83 = dcgettext(0LL, "cannot stat %s", 5);
      error(0, **(_DWORD **)fildes, v83, v82);
      return v10;
    }
    goto LABEL_58;
  }
LABEL_23:
  if ( stat_buf.st_ino == v307.st_ino && stat_buf.st_dev == v307.st_dev )
  {
    v114 = v12[1].m128i_i8[7];
    if ( v114 )
      goto LABEL_324;
    if ( v12->m128i_i32[1] != 2 )
    {
      LOBYTE(old) = v21;
      s2 = (char *)&v308;
      v123 = __lxstat(1, filename, &v308);
      LODWORD(v21) = (unsigned __int8)old;
      if ( v123 )
        goto LABEL_25;
      p_dev = &dev;
      v124 = __lxstat(1, v11, &dev);
      v21 = (unsigned __int8)old;
      if ( v124 )
        goto LABEL_25;
      if ( dev.st_ino == v308.st_ino )
        v114 = dev.st_dev == v308.st_dev;
      v116 = (__m128i *)s2;
      v117 = (__m128i *)p_dev;
      if ( (dev.st_mode & 0xF000) == 40960 && (v308.st_mode & 0xF000) == 40960 && v12[1].m128i_i8[5] )
        goto LABEL_25;
      goto LABEL_243;
    }
    v114 = 1;
    v115 = 1LL;
  }
  else
  {
    if ( v12->m128i_i32[1] != 2 )
      goto LABEL_25;
    v114 = 0;
    v115 = 0LL;
  }
  v116 = (__m128i *)n;
  v117 = (__m128i *)p_stat_buf;
  if ( (stat_buf.st_mode & 0xF000) == 40960 && (v307.st_mode & 0xF000) == 40960 )
  {
    LODWORD(s1) = v115;
    LOBYTE(old) = v21;
    if ( (unsigned __int8)sub_40EF80(v11, filename, p_stat_buf, v115, v21, n) )
      goto LABEL_249;
    LODWORD(v21) = (unsigned __int8)old;
    if ( v12->m128i_i32[0] || !(_DWORD)s1 )
      goto LABEL_25;
    v164 = 1;
    LOBYTE(v165) = v12[1].m128i_i8[8] ^ 1;
    goto LABEL_368;
  }
LABEL_243:
  if ( v12->m128i_i32[0] )
  {
    if ( !v114 )
    {
      if ( v12[1].m128i_i8[8]
        || v12->m128i_i32[1] == 2
        || (v117[1].m128i_i32[2] & 0xF000) != 40960
        || (v116[1].m128i_i32[2] & 0xF000) == 40960 )
      {
        goto LABEL_25;
      }
LABEL_249:
      v33 = sub_40E920(1LL, 4LL, filename);
      v34 = "%s and %s are the same file";
      v35 = sub_40E920(0LL, 4LL, v11);
      goto LABEL_56;
    }
    LOBYTE(src) = v21;
    v186 = sub_40EF80(v11, filename, v117, v115, v21, v116);
    LODWORD(v21) = (unsigned __int8)src;
    LOBYTE(v165) = v186 ^ 1;
    v164 = 0;
LABEL_368:
    if ( (_BYTE)v165 )
    {
      LOBYTE(src) = v164;
      goto LABEL_25;
    }
    goto LABEL_249;
  }
  v142 = v12[1].m128i_u8[8];
  if ( (_BYTE)v142 || v12[1].m128i_i8[5] )
  {
    if ( (v116[1].m128i_i32[2] & 0xF000) == 40960 )
      goto LABEL_25;
    if ( !v114 || v116[1].m128i_i64[0] <= 1uLL )
    {
      if ( (v117[1].m128i_i32[2] & 0xF000) == 40960 )
        goto LABEL_311;
      goto LABEL_341;
    }
    LOBYTE(s2) = v21;
    s1 = v116;
    old = (char *)v117;
    v164 = sub_40EF80(v11, filename, v117, v142, v21, v116);
    v117 = (__m128i *)old;
    v116 = (__m128i *)s1;
    LODWORD(v21) = (unsigned __int8)s2;
    if ( !v164 )
    {
      LOBYTE(v165) = v12[1].m128i_i8[8] ^ 1;
      goto LABEL_368;
    }
    if ( (*((_DWORD *)old + 6) & 0xF000) == 40960 )
      goto LABEL_310;
  }
  else if ( (v117[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    goto LABEL_313;
  }
  if ( (v116[1].m128i_i32[2] & 0xF000) != 40960 )
  {
LABEL_341:
    if ( v117->m128i_i64[1] != v116->m128i_i64[1] || v117->m128i_i64[0] != v116->m128i_i64[0] )
      goto LABEL_25;
    if ( v12[1].m128i_i8[7] )
      goto LABEL_324;
  }
LABEL_310:
  LOBYTE(v142) = v12[1].m128i_i8[8];
LABEL_311:
  if ( (_BYTE)v142 )
  {
    if ( (stat_buf.st_mode & 0xF000) == 40960 && v116[1].m128i_i64[0] > 1uLL )
    {
      LOBYTE(s2) = v21;
      s1 = v116;
      old = (char *)v117;
      v197 = canonicalize_file_name(v11);
      v117 = (__m128i *)old;
      v116 = (__m128i *)s1;
      LODWORD(v21) = (unsigned __int8)s2;
      if ( v197 )
      {
        LOBYTE(old) = (_BYTE)s2;
        src = v197;
        v165 = sub_40EF80(v197, filename, v117, v198, (unsigned __int8)s2, s1) ^ 1;
        free(src);
        v164 = 0;
        LODWORD(v21) = (unsigned __int8)s2;
        goto LABEL_368;
      }
    }
  }
LABEL_313:
  if ( v12[2].m128i_i8[12] || (v12[1].m128i_i32[1] & 0xFF00FF00) != 0 && (v116[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    LOBYTE(v165) = v116->m128i_i64[0] == v117->m128i_i64[0];
    v164 = 0;
    goto LABEL_368;
  }
  if ( v12->m128i_i32[1] != 2 )
    goto LABEL_249;
  if ( (v117[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    LOBYTE(s1) = v21;
    old = (char *)v116;
    v222 = __xstat(1, v11, &dev);
    v116 = (__m128i *)old;
    LODWORD(v21) = (unsigned __int8)s1;
    if ( v222 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&dev.st_dev = _mm_load_si128(v117);
    *(__m128i *)&dev.st_nlink = _mm_load_si128(v117 + 1);
    *(__m128i *)&dev.st_gid = _mm_load_si128(v117 + 2);
    *(__m128i *)&dev.st_size = _mm_load_si128(v117 + 3);
    *(__m128i *)&dev.st_blocks = _mm_load_si128(v117 + 4);
    *(__m128i *)&dev.st_atim.tv_nsec = _mm_load_si128(v117 + 5);
    *(__m128i *)&dev.st_mtim.tv_nsec = _mm_load_si128(v117 + 6);
    *(__m128i *)&dev.st_ctim.tv_nsec = _mm_load_si128(v117 + 7);
    *(__m128i *)&dev.__unused[1] = _mm_load_si128(v117 + 8);
  }
  if ( (v116[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    LOBYTE(old) = v21;
    v221 = __xstat(1, filename, &v308);
    LODWORD(v21) = (unsigned __int8)old;
    if ( v221 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v308.st_dev = _mm_load_si128(v116);
    *(__m128i *)&v308.st_nlink = _mm_load_si128(v116 + 1);
    *(__m128i *)&v308.st_gid = _mm_load_si128(v116 + 2);
    *(__m128i *)&v308.st_size = _mm_load_si128(v116 + 3);
    *(__m128i *)&v308.st_blocks = _mm_load_si128(v116 + 4);
    *(__m128i *)&v308.st_atim.tv_nsec = _mm_load_si128(v116 + 5);
    *(__m128i *)&v308.st_mtim.tv_nsec = _mm_load_si128(v116 + 6);
    *(__m128i *)&v308.st_ctim.tv_nsec = _mm_load_si128(v116 + 7);
    *(__m128i *)&v308.__unused[1] = _mm_load_si128(v116 + 8);
  }
  if ( dev.st_ino == v308.st_ino && dev.st_dev == v308.st_dev )
  {
    if ( !v12[1].m128i_i8[7] )
      goto LABEL_249;
LABEL_324:
    LOBYTE(src) = 1;
  }
LABEL_25:
  if ( v296 == 0x4000 )
  {
    if ( !v12[1].m128i_i8[8] )
      goto LABEL_30;
    v22 = v12->m128i_i32[2];
  }
  else
  {
    if ( v12[2].m128i_i8[13] )
    {
      v111 = 0LL;
      if ( v12[1].m128i_i8[15] )
      {
        v111 = 1LL;
        if ( v12[1].m128i_i8[8] )
          v111 = v307.st_dev != stat_buf.st_dev;
      }
      LOBYTE(old) = v21;
      v112 = sub_40FD60(filename, n, p_stat_buf, v111);
      LODWORD(v21) = (unsigned __int8)old;
      if ( v112 >= 0 )
      {
        if ( a10 )
          *a10 = 1;
        v113 = sub_409A10(filename);
        if ( v113 && !(unsigned __int8)sub_404F50(v113, (__int64)filename, 1u, v12[2].m128i_i8[14], (char)ptr) )
        {
          if ( !v12[2].m128i_i8[5] )
            return v10;
          goto LABEL_239;
        }
        return 1;
      }
    }
    v22 = v12->m128i_i32[2];
    if ( !v12[1].m128i_i8[8] )
    {
      if ( v22 == 2 )
        return 1;
      if ( v22 == 3 )
      {
        LOBYTE(old) = v21;
        v182 = sub_404E20((__int64)v12, filename, (_DWORD *)(n + 24));
        LODWORD(v21) = (unsigned __int8)old;
        if ( !v182 )
          return 1;
      }
      goto LABEL_30;
    }
  }
  if ( v22 == 2
    || (v22 == 3
     || v22 == 4
     && v12[2].m128i_i8[15]
     && (LOBYTE(old) = v21, v125 = sub_404BD0(filename, v307.st_mode), LODWORD(v21) = (unsigned __int8)old, !v125))
    && (LOBYTE(old) = v21,
        v126 = sub_404E20((__int64)v12, filename, (_DWORD *)(n + 24)),
        LODWORD(v21) = (unsigned __int8)old,
        !v126) )
  {
    if ( !a10 )
      return 1;
LABEL_284:
    v10 = 1;
    *a10 = 1;
    return v10;
  }
LABEL_30:
  if ( (_BYTE)src )
    return 1;
  v23 = v307.st_mode;
  v24 = (unsigned int)v21 ^ 1;
  if ( (v307.st_mode & 0xF000) != 0x4000 )
  {
    if ( v296 == 0x4000 )
    {
      if ( !v12[1].m128i_i8[8] || (v25 = v12->m128i_i32[0]) == 0 )
      {
        v33 = sub_40E920(1LL, 4LL, v11);
        v34 = "cannot overwrite non-directory %s with directory %s";
        v35 = sub_40E920(0LL, 4LL, filename);
        goto LABEL_56;
      }
      if ( !(_BYTE)a7 )
        goto LABEL_349;
    }
    else
    {
      v25 = v12->m128i_i32[0];
      if ( !(_BYTE)a7 )
        goto LABEL_39;
    }
    if ( v25 != 3 )
    {
      v26 = v12[3].m128i_i64[1];
      LOBYTE(old) = v21 ^ 1;
      v27 = sub_40AEF0(v26, filename, n);
      v24 = (unsigned __int8)old;
      if ( v27 )
      {
        v33 = sub_40E920(1LL, 4LL, v11);
        v34 = "will not overwrite just-created %s with %s";
        v35 = sub_40E920(0LL, 4LL, filename);
        goto LABEL_56;
      }
      if ( v296 == 0x4000 )
        goto LABEL_38;
      v23 = v307.st_mode;
      if ( (v307.st_mode & 0xF000) != 0x4000 )
        goto LABEL_38;
      goto LABEL_347;
    }
    if ( !v12[1].m128i_i8[8] )
      goto LABEL_390;
LABEL_349:
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      goto LABEL_350;
    goto LABEL_408;
  }
  if ( v296 != 0x4000 )
  {
LABEL_347:
    if ( v12[1].m128i_i8[8] )
    {
      v25 = v12->m128i_i32[0];
      if ( v12->m128i_i32[0] )
        goto LABEL_349;
    }
    v109 = "cannot overwrite directory %s with non-directory";
    v15 = sub_40EA00(4LL, filename);
LABEL_225:
    v110 = dcgettext(0LL, v109, 5);
LABEL_226:
    v10 = 0;
    error(0, 0, v110, v15);
    return v10;
  }
LABEL_38:
  v25 = v12->m128i_i32[0];
LABEL_39:
  v28 = v12[1].m128i_i8[8];
  if ( v28 )
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      goto LABEL_394;
    v23 = v307.st_mode;
LABEL_408:
    if ( (v23 & 0xF000) == 0x4000 )
    {
LABEL_394:
      if ( !v25 )
        goto LABEL_392;
      goto LABEL_350;
    }
    if ( !v25 )
    {
      v33 = sub_40EAD0(0LL, 3LL, filename, v24);
      v34 = "cannot move directory onto non-directory: %s -> %s";
      v35 = sub_40EAD0(0LL, 3LL, v11, v185);
      goto LABEL_56;
    }
LABEL_350:
    LOBYTE(n) = v24;
    v149 = (_BYTE *)sub_40AD40(v11);
    v24 = (unsigned __int8)n;
    v151 = v149;
    if ( *v149 != 46 )
      goto LABEL_351;
    v28 = 1;
    goto LABEL_430;
  }
  if ( v25 )
  {
LABEL_390:
    LOBYTE(n) = v24;
    v179 = (_BYTE *)sub_40AD40(v11);
    v24 = (unsigned __int8)n;
    v151 = v179;
    if ( *v179 != 46 )
    {
LABEL_391:
      if ( (v307.st_mode & 0xF000) == 0x4000 )
      {
LABEL_392:
        old = 0LL;
        goto LABEL_59;
      }
LABEL_351:
      if ( v25 != 3 )
      {
        LOBYTE(n) = v24;
        s1 = v151;
        src = (char *)strlen(v151);
        old = (char *)sub_40AD40(filename);
        v152 = strlen(old);
        s2 = ::src;
        v153 = strlen(::src);
        v24 = (unsigned __int8)n;
        v285 = v153;
        if ( src == (char *)(v152 + v153) )
        {
          LOBYTE(src) = n;
          n = (size_t)s1;
          v154 = memcmp(s1, old, v152);
          v24 = (unsigned __int8)src;
          if ( !v154 )
          {
            v155 = strcmp((const char *)(n + v152), s2);
            v24 = (unsigned __int8)src;
            if ( !v155 )
            {
              LOBYTE(old) = (_BYTE)src;
              n = strlen(filename);
              v156 = (void *)sub_4112E0(v285 + n + 1);
              src = ::src;
              v157 = (char *)mempcpy(v156, filename, n);
              strcpy(v157, src);
              LODWORD(src) = __xstat(1, (const char *)v156, &dev);
              free(v156);
              v24 = (unsigned __int8)old;
              if ( !(_DWORD)src && stat_buf.st_ino == dev.st_ino && stat_buf.st_dev == dev.st_dev )
              {
                if ( v12[1].m128i_i8[8] )
                  v244 = dcgettext(0LL, "backing up %s might destroy source;  %s not moved", 5);
                else
                  v244 = dcgettext(0LL, "backing up %s might destroy source;  %s not copied", 5);
                v245 = sub_40E920(1LL, 4LL, v11);
                v246 = sub_40E920(0LL, 4LL, filename);
                error(0, 0, v244, v246, v245);
                return 0;
              }
            }
          }
        }
      }
      v158 = v12->m128i_u32[0];
      LOBYTE(src) = v24;
      v159 = (char *)sub_40A8B0(filename, v158, v150, v24, v151);
      v160 = v159;
      old = v159;
      LOBYTE(n) = (_BYTE)src;
      if ( v159 )
      {
        v161 = strlen(v159);
        v162 = alloca(v161 + 9);
        v163 = (char *)memcpy(v269, v160, v161 + 1);
        free(old);
        old = v163;
        LOBYTE(v24) = n;
        LOBYTE(src) = 1;
        goto LABEL_59;
      }
      v189 = __errno_location();
      LOBYTE(src) = 1;
      LOBYTE(v24) = n;
      v31 = v189;
      if ( *v189 == 2 )
        goto LABEL_59;
      v190 = "cannot backup %s";
      v191 = sub_40EA00(4LL, filename);
LABEL_421:
      v10 = 0;
      v192 = dcgettext(0LL, v190, 5);
      error(0, *v31, v192, v191);
      return v10;
    }
    v28 = 0;
LABEL_430:
    v150 = (unsigned __int8)v151[(v151[1] == 46) + 1];
    if ( !(_BYTE)v150 || (_BYTE)v150 == 47 )
      goto LABEL_41;
    if ( v28 )
      goto LABEL_351;
    goto LABEL_391;
  }
LABEL_41:
  old = 0LL;
  if ( (unsigned __int8)v28 | ((v307.st_mode & 0xF000) == 0x4000)
    || (LOBYTE(src) = v12[1].m128i_i8[5], !(_BYTE)src)
    && (!v12[2].m128i_i8[2] || v307.st_nlink <= 1)
    && ((old = 0LL, v12->m128i_i32[1] != 2) || (stat_buf.st_mode & 0xF000) == 0x8000) )
  {
LABEL_59:
    if ( !(_BYTE)a7 || !v12[3].m128i_i64[1] )
      goto LABEL_60;
    goto LABEL_50;
  }
  LOBYTE(src) = v24;
  v29 = unlink(filename);
  LOBYTE(v24) = (_BYTE)src;
  if ( v29 )
  {
    v30 = __errno_location();
    LOBYTE(v24) = (_BYTE)src;
    v31 = v30;
    if ( *v30 != 2 )
    {
      v190 = "cannot remove %s";
      v191 = sub_40EA00(4LL, filename);
      goto LABEL_421;
    }
  }
  LOBYTE(src) = v12[2].m128i_i8[14];
  if ( (_BYTE)src )
  {
    LOBYTE(n) = v24;
    v202 = sub_40EA00(4LL, filename);
    v203 = dcgettext(0LL, "removed %s\n", 5);
    __printf_chk(1LL, v203, v202);
    LOBYTE(v24) = n;
    old = 0LL;
    goto LABEL_59;
  }
  if ( !(_BYTE)a7 )
  {
    LOBYTE(src) = v12[2].m128i_i8[10] & (v296 == 0x4000);
    if ( (_BYTE)src )
    {
      st_dev = stat_buf.st_dev;
      st_ino = stat_buf.st_ino;
      old = 0LL;
      goto LABEL_228;
    }
    LOBYTE(src) = 1;
    old = 0LL;
    goto LABEL_64;
  }
  v14 = v12[3].m128i_i64[1] == 0;
  LOBYTE(src) = a7;
  old = 0LL;
  if ( !v14 )
  {
LABEL_50:
    if ( v12[1].m128i_i8[8] )
    {
      if ( v12[2].m128i_i8[14] )
      {
LABEL_143:
        if ( v296 != 0x4000 || !v12[2].m128i_i8[10] )
          goto LABEL_145;
LABEL_125:
        st_dev = stat_buf.st_dev;
        st_ino = stat_buf.st_ino;
        if ( (_BYTE)a7 )
        {
          n = sub_409A10(filename);
          goto LABEL_127;
        }
LABEL_228:
        n = sub_4099D0(st_ino, st_dev);
LABEL_127:
        if ( !n )
          goto LABEL_141;
        goto LABEL_128;
      }
      goto LABEL_123;
    }
    if ( v12->m128i_i32[0] )
    {
      if ( !v12[2].m128i_i8[14] )
      {
        if ( v296 != 0x4000 )
          goto LABEL_65;
        goto LABEL_186;
      }
LABEL_62:
      if ( v296 != 0x4000 )
      {
        sub_404D70((__int64)v11, (__int64)filename, (__int64)old);
        goto LABEL_64;
      }
LABEL_186:
      if ( v12[2].m128i_i8[10] )
        goto LABEL_125;
LABEL_65:
      if ( !v12[2].m128i_i8[2] )
      {
        n = 0LL;
        fildes[0] = (unsigned __int8)src;
        goto LABEL_67;
      }
LABEL_139:
      if ( v12[1].m128i_i8[7] )
      {
        n = 0LL;
        goto LABEL_141;
      }
      if ( stat_buf.st_nlink <= 1 )
      {
        v84 = v12->m128i_i32[1];
        if ( !(_BYTE)a7 || v84 != 3 )
        {
          n = 0LL;
          if ( v84 != 4 )
            goto LABEL_141;
        }
      }
      n = sub_409A10(filename);
      goto LABEL_164;
    }
    v32 = &v307;
    if ( !(_BYTE)v24 )
    {
      if ( __lxstat(1, filename, &dev) )
        goto LABEL_60;
      v32 = &dev;
    }
    if ( (v32->st_mode & 0xF000) != 40960 || !(unsigned __int8)sub_40AEF0(v12[3].m128i_i64[1], filename, v32) )
    {
LABEL_60:
      if ( v12[2].m128i_i8[14] )
      {
        if ( !v12[1].m128i_i8[8] )
          goto LABEL_62;
        goto LABEL_143;
      }
      goto LABEL_123;
    }
    v33 = sub_40E920(1LL, 4LL, filename);
    v34 = "will not copy %s through just-created symlink %s";
    v35 = sub_40E920(0LL, 4LL, v11);
LABEL_56:
    v36 = dcgettext(0LL, v34, 5);
    error(0, 0, v36, v35, v33);
    return 0;
  }
LABEL_123:
  if ( v12[2].m128i_i8[10] && v296 == 0x4000 )
    goto LABEL_125;
LABEL_64:
  if ( !v12[1].m128i_i8[8] )
    goto LABEL_65;
LABEL_145:
  if ( stat_buf.st_nlink != 1 )
  {
    if ( !v12[2].m128i_i8[2] )
    {
      n = 0LL;
      goto LABEL_148;
    }
    goto LABEL_139;
  }
  n = sub_4099D0(stat_buf.st_ino, stat_buf.st_dev);
LABEL_164:
  if ( !n )
    goto LABEL_141;
  if ( v296 != 0x4000 )
  {
    if ( (unsigned __int8)sub_404F50(n, (__int64)filename, 1u, v12[2].m128i_i8[14], (char)ptr) )
      return 1;
    goto LABEL_134;
  }
LABEL_128:
  if ( (unsigned __int8)sub_40EF80(v11, n, v65, v66, v67, v68) )
  {
    v15 = sub_40E920(1LL, 4LL, qword_621988);
    v145 = sub_40E920(0LL, 4LL, qword_621990);
    v146 = dcgettext(0LL, "cannot copy a directory, %s, into itself, %s", 5);
    error(0, 0, v146, v145, v15);
    *a9 = 1;
LABEL_134:
    if ( !v12[2].m128i_i8[5] )
      goto LABEL_135;
    goto LABEL_239;
  }
  if ( (unsigned __int8)sub_40EF80(filename, n, v69, v70, v71, v72) )
  {
    v180 = sub_40EA00(4LL, qword_621990);
    v181 = dcgettext(0LL, "warning: source directory %s specified more than once", 5);
    error(0, 0, v181, v180);
    if ( !v12[1].m128i_i8[8] || !LOBYTE(fildes[0]) )
      return 1;
    goto LABEL_284;
  }
  v73 = v12->m128i_i32[1];
  if ( v73 != 4 && (v73 != 3 || !(_BYTE)a7) )
  {
    v74 = sub_40E920(1LL, 4LL, n);
    v15 = sub_40E920(0LL, 4LL, filename);
    v75 = dcgettext(0LL, "will not create hard link %s to directory %s", 5);
    error(0, 0, v75, v15, v74);
    goto LABEL_134;
  }
LABEL_141:
  if ( !v12[1].m128i_i8[8] )
  {
    fildes[0] = (unsigned __int8)src;
    goto LABEL_67;
  }
LABEL_148:
  if ( !rename(v11, filename) )
  {
    if ( v12[2].m128i_i8[14] )
    {
      v148 = dcgettext(0LL, "renamed ", 5);
      __printf_chk(1LL, v148);
      sub_404D70((__int64)v11, (__int64)filename, (__int64)old);
    }
    if ( v12[2].m128i_i8[1] )
      sub_405620((__int64)filename, 0LL, 1LL, (__int64)v12);
    if ( a10 )
      *a10 = 1;
    if ( (_BYTE)a7 )
    {
      v10 = a7;
      sub_40AE60(v12[3].m128i_i64[1], filename, p_stat_buf);
      return v10;
    }
    return 1;
  }
  v79 = __errno_location();
  if ( *v79 == 22 )
  {
    v10 = 1;
    v167 = sub_40E920(1LL, 4LL, qword_621988);
    v168 = sub_40E920(0LL, 4LL, qword_621990);
    v169 = dcgettext(0LL, "cannot move %s to a subdirectory of itself, %s", 5);
    error(0, 0, v169, v168, v167);
    *a9 = 1;
    return v10;
  }
  if ( *v79 != 18 )
  {
    v119 = sub_40E920(1LL, 4LL, filename);
    v120 = "cannot move %s to %s";
    v121 = sub_40E920(0LL, 4LL, v11);
    goto LABEL_255;
  }
  if ( v296 == 0x4000 )
  {
    if ( !rmdir(filename) || *v79 == 2 )
      goto LABEL_155;
    goto LABEL_254;
  }
  if ( unlink(filename) && *v79 != 2 )
  {
LABEL_254:
    v119 = sub_40E920(1LL, 4LL, filename);
    v120 = "inter-device move failed: %s to %s; unable to remove target";
    v121 = sub_40E920(0LL, 4LL, v11);
LABEL_255:
    v122 = dcgettext(0LL, v120, 5);
    error(0, *v79, v122, v121, v119);
    sub_409980(stat_buf.st_ino, stat_buf.st_dev);
    return v10;
  }
  LOBYTE(src) = v12[2].m128i_i8[14] & (v296 != 0x4000);
  if ( !(_BYTE)src )
  {
LABEL_155:
    fildes[0] = 1;
    LOBYTE(src) = 1;
    goto LABEL_67;
  }
  v166 = dcgettext(0LL, "copied ", 5);
  __printf_chk(1LL, v166);
  sub_404D70((__int64)v11, (__int64)filename, (__int64)old);
  fildes[0] = 1;
LABEL_67:
  v37 = st_mode & 0xFFF;
  if ( v12[2].m128i_i8[11] )
    v37 = v12[1].m128i_i32[0] & 0xFFF;
  if ( v12[1].m128i_i8[13] )
  {
    if ( !(unsigned __int8)sub_405550((__int64)v11, (__int64)filename, st_mode, fildes[0], v12) )
      return v10;
    LODWORD(s1) = v37 & 0x3F;
    if ( v296 != 0x4000 )
      goto LABEL_72;
LABEL_177:
    v86 = *(_QWORD **)fd;
    if ( *(_QWORD *)fd )
    {
      while ( v86[1] != stat_buf.st_ino || v86[2] != stat_buf.st_dev )
      {
        v86 = (_QWORD *)*v86;
        if ( !v86 )
          goto LABEL_199;
      }
      v87 = "cannot copy cyclic symbolic link %s";
      v15 = sub_40EA00(4LL, v11);
      goto LABEL_183;
    }
LABEL_199:
    v285 = (size_t)v268;
    v268[0] = *(_QWORD *)fd;
    v268[1] = stat_buf.st_ino;
    v268[2] = stat_buf.st_dev;
    if ( !(_BYTE)src && (v307.st_mode & 0xF000) == 0x4000 )
    {
      if ( (v12[2].m128i_i64[0] & 0xFF000000FF00LL) != 0
        && !(unsigned __int8)sub_405620((__int64)filename, v12[2].m128i_u8[5], 0LL, (__int64)v12)
        && v12[2].m128i_i8[6] )
      {
        goto LABEL_196;
      }
      v283 = 0;
      LODWORD(s1) = 0;
    }
    else
    {
      if ( mkdir(filename, v37 & ~(_DWORD)s1) )
      {
        v90 = "cannot create directory %s";
        v15 = sub_40EA00(4LL, filename);
        goto LABEL_195;
      }
      if ( __lxstat(1, filename, &v307) )
      {
        v90 = "cannot stat %s";
        v15 = sub_40EA00(4LL, filename);
        goto LABEL_195;
      }
      v93 = v307.st_mode;
      v283 = 0;
      if ( (v307.st_mode & 0x1C0) != 448 )
      {
        v94 = chmod(filename, v307.st_mode | 0x1C0);
        v276 = v93;
        v283 = 1;
        if ( v94 )
        {
          v90 = "setting permissions for %s";
          v15 = sub_40EA00(4LL, filename);
          goto LABEL_195;
        }
      }
      if ( !*a8 )
      {
        sub_409A10(filename);
        *a8 = 1;
      }
      if ( v12[2].m128i_i8[14] )
      {
        if ( v12[1].m128i_i8[8] )
        {
          v95 = sub_40EA00(4LL, filename);
          v96 = dcgettext(0LL, "created directory %s\n", 5);
          __printf_chk(1LL, v96, v95);
        }
        else
        {
          sub_404D70((__int64)v11, (__int64)filename, 0LL);
        }
      }
    }
    LOBYTE(ptr) = v12[1].m128i_i8[12] & (p_length != 0LL);
    if ( !(_BYTE)ptr || (LOBYTE(fd[0]) = 0, v44 = 0, p_length->tv_sec == stat_buf.st_dev) )
    {
      v97 = _mm_loadu_si128(v12 + 1);
      v98 = _mm_loadu_si128(v12 + 2);
      v99 = _mm_loadu_si128(v12 + 3);
      v100 = v12[4].m128i_i64[0];
      *(__m128i *)&dev.st_dev = _mm_loadu_si128(v12);
      *(__m128i *)&dev.st_nlink = v97;
      *(__m128i *)&dev.st_gid = v98;
      *(__m128i *)&dev.st_size = v99;
      dev.st_blocks = v100;
      s = (char *)sub_40F480(v11, 2LL);
      if ( s )
      {
        if ( v12->m128i_i32[1] == 3 )
          HIDWORD(dev.st_dev) = 2;
        if ( *s )
        {
          LOBYTE(v278) = v10;
          v101 = s;
          s2 = (char *)&v308;
          v102 = 0;
          p_dev = &dev;
          st_blksize = v12;
          LOBYTE(ptr) = 1;
          p_length = &length;
          *(_QWORD *)fd = v11;
          v280 = a7;
          do
          {
            v103 = (void *)sub_40B0C0(*(_QWORD *)fd, v101, 0LL);
            v104 = (void *)sub_40B0C0(filename, v101, 0LL);
            LOBYTE(v308.st_dev) = *a8;
            v105 = sub_405990(
                     (_DWORD)v103,
                     (_DWORD)v104,
                     fildes[0],
                     (_DWORD)p_stat_buf,
                     v285,
                     (_DWORD)p_dev,
                     0,
                     (__int64)s2,
                     (__int64)p_length,
                     0LL);
            LOBYTE(ptr) = v105 & (unsigned __int8)ptr;
            *a9 |= LOBYTE(length.tv_sec);
            free(v104);
            free(v103);
            if ( LOBYTE(length.tv_sec) )
              break;
            v102 |= LOBYTE(v308.st_dev);
            v101 += strlen(v101) + 1;
          }
          while ( *v101 );
          v106 = v102;
          v11 = *(char **)fd;
          v10 = (unsigned __int8)v278;
          v12 = st_blksize;
          v15 = v280;
        }
        else
        {
          v106 = 0;
          LOBYTE(ptr) = 1;
        }
        free(s);
        *a8 = v106;
      }
      else
      {
        *(_QWORD *)fildes = sub_40EA00(4LL, v11);
        v195 = dcgettext(0LL, "cannot access %s", 5);
        v196 = __errno_location();
        error(0, *v196, v195, *(_QWORD *)fildes);
        LOBYTE(ptr) = 0;
      }
      LOBYTE(fd[0]) = 0;
      v44 = 0;
    }
    goto LABEL_78;
  }
  if ( v296 == 0x4000 )
  {
    if ( !(unsigned __int8)sub_405550((__int64)v11, (__int64)filename, st_mode, fildes[0], v12) )
      return v10;
    LODWORD(s1) = v37 & 0x12;
    goto LABEL_177;
  }
  v38 = sub_405550((__int64)v11, (__int64)filename, st_mode, fildes[0], v12);
  LODWORD(s1) = 0;
  if ( !v38 )
    return v10;
LABEL_72:
  LOBYTE(fd[0]) = v12[2].m128i_i8[12];
  if ( LOBYTE(fd[0]) )
  {
    if ( *v11 == 47 )
    {
LABEL_76:
      if ( (int)sub_409FD0(v11, 4294967196LL, filename, v12[1].m128i_u8[6]) < 0 )
      {
        v15 = sub_40E920(1LL, 4LL, v11);
        v170 = sub_40E920(0LL, 4LL, filename);
        v171 = dcgettext(0LL, "cannot create symbolic link %s to %s", 5);
        v172 = __errno_location();
        error(0, *v172, v171, v170, v15);
        goto LABEL_196;
      }
      v283 = 0;
      v44 = 0;
      LOBYTE(ptr) = fd[0];
      goto LABEL_78;
    }
    v43 = (void *)sub_40AC60(filename);
    if ( !strcmp(".", (const char *)v43)
      || __xstat(1, ".", &v308)
      || __xstat(1, (const char *)v43, &dev)
      || v308.st_ino == dev.st_ino && v308.st_dev == dev.st_dev )
    {
      free(v43);
      goto LABEL_76;
    }
    free(v43);
    v87 = "%s: can make relative symbolic links only in current directory";
    v15 = sub_40EAD0(0LL, 3LL, filename, v147);
LABEL_183:
    v88 = dcgettext(0LL, v87, 5);
    error(0, 0, v88, v15);
    goto LABEL_196;
  }
  v283 = v12[1].m128i_i8[7];
  if ( v283 )
  {
    v118 = sub_404F50((__int64)v11, (__int64)filename, v12[1].m128i_u8[6], 0, (char)ptr);
    v44 = 0;
    v283 = 0;
    LOBYTE(ptr) = v118;
    if ( !v118 )
      goto LABEL_196;
LABEL_78:
    v45 = v296 != 0x4000;
    if ( !(_BYTE)src && v12[1].m128i_i8[4] != 1 && v296 != 0x4000 && (v12[2].m128i_i64[0] & 0xFF000000FF00LL) != 0 )
    {
      v46 = v12[2].m128i_u8[5];
      LOBYTE(fildes[0]) = v44;
      v47 = sub_405620((__int64)filename, v46, 0LL, (__int64)v12);
      v44 = fildes[0];
      if ( !v47 )
      {
        if ( v12[2].m128i_i8[6] )
          goto LABEL_196;
      }
    }
    if ( (_BYTE)v15 )
    {
      if ( v12[3].m128i_i64[1] )
      {
        LOBYTE(fildes[0]) = v44;
        v48 = __lxstat(1, filename, &dev);
        v44 = fildes[0];
        if ( !v48 )
        {
          sub_40AE60(v12[3].m128i_i64[1], filename, &dev);
          v44 = fildes[0];
        }
      }
    }
    if ( v12[1].m128i_i8[7] && v45 || v44 )
      return (unsigned __int8)ptr;
    if ( v12[1].m128i_i8[15] )
    {
      dev.st_dev = stat_buf.st_atim.tv_sec;
      dev.st_ino = stat_buf.st_atim.tv_nsec;
      *(struct timespec *)&dev.st_nlink = stat_buf.st_mtim;
      if ( !LOBYTE(fd[0]) )
      {
        if ( !(unsigned int)sub_410AA0(filename) )
        {
LABEL_97:
          if ( !v12[1].m128i_i8[13] || !(_BYTE)src && stat_buf.st_uid == v307.st_uid && stat_buf.st_gid == v307.st_gid )
            goto LABEL_104;
          v52 = sub_405770((__int64)v12, filename, 0xFFFFFFFF, p_stat_buf, (char)src, (__int64)&v307);
          if ( v52 != -1 )
          {
            v53 = st_mode;
            BYTE1(v53) = BYTE1(st_mode) & 0xF1;
            if ( v52 )
              v53 = st_mode;
            st_mode = v53;
LABEL_104:
            if ( (v12[1].m128i_i64[1] & 0xFF0000000000FFLL) == 0 )
            {
              if ( v12[2].m128i_i8[11] )
              {
                v177 = v12[1].m128i_u32[0];
              }
              else
              {
                if ( !v12[2].m128i_i8[0] )
                {
                  if ( (_DWORD)s1 && (LODWORD(s1) = ~(unsigned int)sub_405960() & (unsigned int)s1, (_DWORD)s1) )
                  {
                    if ( v283 != 1 )
                    {
                      if ( (_BYTE)src && __lxstat(1, filename, &v307) )
                      {
                        v17 = filename;
                        goto LABEL_117;
                      }
                      v276 = v307.st_mode;
                      if ( (~v307.st_mode & (unsigned int)s1) == 0 )
                        return (unsigned __int8)ptr;
                    }
                  }
                  else if ( !v283 )
                  {
                    return (unsigned __int8)ptr;
                  }
                  if ( !chmod(filename, (unsigned int)s1 | v276) )
                    return (unsigned __int8)ptr;
                  v54 = sub_40EA00(4LL, filename);
                  v55 = dcgettext(0LL, "preserving permissions for %s", 5);
                  v56 = __errno_location();
                  error(0, *v56, v55, v54);
LABEL_111:
                  v57 = (unsigned __int8)ptr;
                  if ( v12[2].m128i_i8[4] )
                    return v10;
                  return v57;
                }
                v177 = ~(unsigned __int16)sub_405960() & 0x1FF;
              }
              v14 = (unsigned int)sub_40A160(filename, 0xFFFFFFFFLL, v177) == 0;
              v178 = (unsigned __int8)ptr;
              if ( !v14 )
                return v10;
              return v178;
            }
            if ( !(unsigned int)sub_40A0D0(v11, 0xFFFFFFFFLL, filename, 0xFFFFFFFFLL, st_mode) )
              return (unsigned __int8)ptr;
            goto LABEL_111;
          }
          return 0;
        }
        goto LABEL_95;
      }
      if ( (unsigned int)sub_410AB0(filename) && *__errno_location() != 38 )
      {
LABEL_95:
        v49 = sub_40EA00(4LL, filename);
        v50 = dcgettext(0LL, "preserving times for %s", 5);
        v51 = __errno_location();
        error(0, *v51, v50, v49);
        if ( v12[2].m128i_i8[4] )
          return 0;
      }
    }
    if ( LOBYTE(fd[0]) )
      return (unsigned __int8)ptr;
    goto LABEL_97;
  }
  if ( v296 != 0x8000 )
  {
    LOBYTE(v41) = v12[1].m128i_i8[4] & (v296 != 40960);
    if ( !(_BYTE)v41 )
    {
      LOBYTE(fildes[0]) = 0;
      if ( v296 == 4096 )
      {
        dev.st_dev = 0LL;
        v183 = st_mode & ~(_DWORD)s1;
        v184 = __xmknod(0, filename, v183, &dev.st_dev);
        v44 = fildes[0];
        if ( !v184 || (v199 = mkfifo(filename, v183 & 0xFFFFEFFF), v44 = fildes[0], !v199) )
        {
          LOBYTE(fd[0]) = v44;
          v283 = v44;
          LOBYTE(ptr) = 1;
          goto LABEL_78;
        }
        v90 = "cannot create fifo %s";
        v15 = sub_40EA00(4LL, filename);
        goto LABEL_195;
      }
      LOBYTE(ptr) = v296 == 49152 || (st_mode & 0xB000) == 0x2000;
      if ( (_BYTE)ptr )
      {
        dev.st_dev = stat_buf.st_rdev;
        v89 = __xmknod(0, filename, st_mode & ~(_DWORD)s1, &dev.st_dev);
        v44 = fildes[0];
        LOBYTE(fd[0]) = fildes[0];
        v283 = fildes[0];
        if ( !v89 )
          goto LABEL_78;
        v90 = "cannot create special file %s";
        v15 = sub_40EA00(4LL, filename);
LABEL_195:
        v91 = dcgettext(0LL, v90, 5);
        v92 = __errno_location();
        error(0, *v92, v91, v15);
        goto LABEL_196;
      }
      if ( v296 != 40960 )
      {
        v87 = "%s has unknown file type";
        v15 = sub_40EA00(4LL, v11);
        goto LABEL_183;
      }
      v173 = sub_40A1C0(v11);
      v174 = (char *)v173;
      if ( !v173 )
      {
        v90 = "cannot read symbolic link %s";
        v15 = sub_40EA00(4LL, v11);
        goto LABEL_195;
      }
      if ( (int)sub_409FD0(v173, 4294967196LL, filename, v12[1].m128i_u8[6]) < 0 )
      {
        fildes[0] = *__errno_location();
        if ( fildes[0] )
        {
          if ( v12[2].m128i_i8[13] == 1 && !(_BYTE)src && (v307.st_mode & 0xF000) == 40960 )
          {
            v252 = -1LL;
            v253 = v174;
            do
            {
              if ( !v252 )
                break;
              v14 = *v253++ == (char)src;
              --v252;
            }
            while ( !v14 );
            if ( v307.st_size == -v252 - 2 )
            {
              v254 = (void *)sub_40A1C0(filename);
              if ( v254 )
              {
                ptr = v254;
                if ( !strcmp((const char *)v254, v174) )
                {
                  free(ptr);
                  goto LABEL_376;
                }
                free(ptr);
              }
            }
          }
          free(v174);
          v200 = sub_40EA00(4LL, filename);
          v201 = dcgettext(0LL, "cannot create symbolic link %s", 5);
          error(0, fildes[0], v201, v200);
          goto LABEL_196;
        }
      }
LABEL_376:
      free(v174);
      v283 = v12[2].m128i_i8[5];
      if ( !v283 )
      {
        v44 = v12[1].m128i_i8[13];
        if ( v44 )
        {
          LOBYTE(fildes[0]) = v12[1].m128i_i8[13];
          if ( lchown(filename, stat_buf.st_uid, stat_buf.st_gid) )
          {
            LOBYTE(fd[0]) = sub_405740((__int64)v12);
            if ( LOBYTE(fd[0]) )
            {
              v44 = 0;
              LOBYTE(ptr) = fd[0];
            }
            else
            {
              v250 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
              v251 = __errno_location();
              error(0, *v251, v250, filename);
              v283 = v12[2].m128i_i8[4];
              if ( v283 )
                goto LABEL_196;
              LOBYTE(fd[0]) = fildes[0];
              LOBYTE(ptr) = fildes[0];
              v44 = 0;
            }
          }
          else
          {
            LOBYTE(fd[0]) = fildes[0];
            LOBYTE(ptr) = fildes[0];
            v44 = 0;
          }
        }
        else
        {
          v283 = 0;
          LOBYTE(fd[0]) = 1;
          LOBYTE(ptr) = 1;
        }
        goto LABEL_78;
      }
LABEL_239:
      sub_404D30();
      goto LABEL_240;
    }
  }
  v130 = v12->m128i_i32[1] == 2;
  LODWORD(v285) = stat_buf.st_mode;
  LOBYTE(s2) = v12[2].m128i_i8[3];
  fildes[0] = sub_40AE10((_DWORD)v11, v130 << 17, v39, v40, v41, v42, v269[0]);
  if ( fildes[0] < 0 )
  {
    v90 = "cannot open %s for reading";
    v15 = sub_40EA00(4LL, v11);
    goto LABEL_195;
  }
  if ( __fxstat(1, fildes[0], &v308) )
  {
    ptr = (void *)sub_40EA00(4LL, v11);
    v193 = dcgettext(0LL, "cannot fstat %s", 5);
    v194 = __errno_location();
    error(0, *v194, v193, ptr);
    goto LABEL_302;
  }
  if ( stat_buf.st_ino != v308.st_ino || stat_buf.st_dev != v308.st_dev )
  {
    v175 = sub_40EA00(4LL, v11);
    v176 = dcgettext(0LL, "skipping file %s, as it was replaced while being copied", 5);
    error(0, 0, v176, v175);
    goto LABEL_302;
  }
  v273 = v37 & 0x1FF;
  if ( (_BYTE)src )
    goto LABEL_440;
  v135 = filename;
  v136 = sub_40AE10((_DWORD)filename, v12[2].m128i_i8[3] == 0 ? 1 : 513, v131, v132, v133, v134, v269[0]);
  fd[0] = v136;
  if ( (v12[2].m128i_i64[0] & 0xFF000000FF00LL) != 0 )
  {
    if ( v136 < 0 )
    {
LABEL_294:
      v137 = __errno_location();
      v138 = v137;
      if ( !v12[1].m128i_i8[6] )
      {
        tv_sec = *v137;
        if ( *v137 != 2 || v12[1].m128i_i8[8] )
        {
          LOBYTE(src) = 0;
          goto LABEL_301;
        }
        v275 = 0;
        goto LABEL_299;
      }
      if ( unlink(filename) )
      {
        ptr = (void *)sub_40EA00(4LL, filename);
        v260 = dcgettext(0LL, "cannot remove %s", 5);
        error(0, *v138, v260, ptr);
        goto LABEL_302;
      }
      if ( v12[2].m128i_i8[14] )
      {
        v255 = sub_40EA00(4LL, filename);
        v256 = dcgettext(0LL, "removed %s\n", 5);
        __printf_chk(1LL, v256, v255);
      }
      v132 = (int)s1;
      LOBYTE(src) = v12[2].m128i_i8[1];
      v275 = (int)s1;
      if ( !(_BYTE)src )
      {
LABEL_299:
        LODWORD(ptr) = v273 & ~v275;
        fd[0] = sub_40AE10((_DWORD)filename, 193, (_DWORD)ptr, v132, v133, v134, v269[0]);
        v139 = __errno_location();
        tv_sec = *v139;
        p_length = (struct timespec *)v139;
        LOBYTE(p_dev) = fd[0] < 0 && tv_sec == 17;
        if ( (_BYTE)p_dev )
        {
          tv_sec = 17;
          LOBYTE(src) = v12[1].m128i_i8[8];
          if ( (_BYTE)src )
            goto LABEL_301;
          if ( !__lxstat(1, filename, &dev) && (dev.st_mode & 0xF000) == 40960 )
          {
            v218 = v12[3].m128i_u8[0];
            if ( !(_BYTE)v218 )
            {
              LOBYTE(fd[0]) = 0;
              v266 = sub_40EA00(4LL, filename);
              v267 = dcgettext(0LL, "not writing through dangling symlink %s", 5);
              error(0, 0, v267, v266);
              ptr = 0LL;
              LOBYTE(v133) = fd[0];
              LOBYTE(src) = (_BYTE)p_dev;
              goto LABEL_303;
            }
            fd[0] = sub_40AE10((_DWORD)filename, 65, (_DWORD)ptr, v216, v218, v217, v269[0]);
            tv_sec = p_length->tv_sec;
          }
        }
        LOBYTE(src) = fd[0] < 0 && tv_sec == 21;
        if ( (_BYTE)src )
        {
          tv_sec = 21;
          if ( *filename )
            tv_sec = (filename[strlen(filename) - 1] != 47) + 20;
          goto LABEL_301;
        }
        LOBYTE(src) = 1;
        if ( fd[0] < 0 )
        {
LABEL_301:
          ptr = (void *)sub_40EA00(4LL, filename);
          v141 = dcgettext(0LL, "cannot create regular file %s", 5);
          error(0, tv_sec, v141, ptr);
LABEL_302:
          LOBYTE(v133) = 0;
          ptr = 0LL;
          goto LABEL_303;
        }
        goto LABEL_457;
      }
      v133 = sub_405550((__int64)v11, (__int64)filename, (unsigned int)v273, 1u, v12);
      if ( !(_BYTE)v133 )
      {
        ptr = 0LL;
        goto LABEL_303;
      }
LABEL_440:
      v275 = (int)s1;
      goto LABEL_299;
    }
    v212 = sub_405620((__int64)v135, v12[2].m128i_u8[5], 0LL, (__int64)v12);
    if ( !v212 )
    {
      LOBYTE(src) = v12[2].m128i_i8[6];
      if ( (_BYTE)src )
      {
        LOBYTE(src) = 0;
        ptr = 0LL;
        goto LABEL_489;
      }
    }
  }
  else if ( fd[0] < 0 )
  {
    goto LABEL_294;
  }
  v275 = 0;
LABEL_457:
  p_dev = &dev;
  LODWORD(p_length) = __fxstat(1, fd[0], &dev);
  if ( (_DWORD)p_length )
  {
    ptr = (void *)sub_40EA00(4LL, filename);
    v223 = dcgettext(0LL, "cannot fstat %s", 5);
    v224 = __errno_location();
    error(0, *v224, v223, ptr);
    v212 = 0;
    ptr = 0LL;
    goto LABEL_489;
  }
  if ( !(_BYTE)s2 )
    goto LABEL_504;
  if ( !v12[3].m128i_i32[1] )
    goto LABEL_460;
  if ( !ioctl(fd[0], 0x40049409uLL, (unsigned int)fildes[0]) )
  {
LABEL_504:
    ptr = 0LL;
    goto LABEL_476;
  }
  if ( v12[3].m128i_i32[1] == 2 )
  {
    p_length = (struct timespec *)sub_40E920(1LL, 4LL, v11);
    v248 = sub_40E920(0LL, 4LL, filename);
    ptr = dcgettext(0LL, "failed to clone %s from %s", 5);
    v249 = __errno_location();
    error(0, *v249, (const char *)ptr, v248, p_length);
    v212 = 0;
    ptr = 0LL;
    goto LABEL_489;
  }
LABEL_460:
  v204 = getpagesize();
  st_blksize = (__m128i *)dev.st_blksize;
  s = (char *)dev.st_blksize;
  if ( (unsigned __int64)(dev.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
  {
    s = (char *)0x20000;
    v205 = 512LL;
    if ( (unsigned __int64)&st_blksize[-1].m128i_u64[1] + 7 <= 0x1FFFFFFFFFFFFFFFLL )
      v205 = (__int64)st_blksize;
    st_blksize = (__m128i *)v205;
  }
  j__posix_fadvise(fildes[0], 0LL, 0LL, 2);
  if ( (v308.st_mode & 0xF000) == 0x8000 )
    LODWORD(p_length) = v308.st_blocks < v308.st_size / 512;
  ptr = (void *)(v204 - 1);
  if ( (dev.st_mode & 0xF000) != 0x8000 )
    goto LABEL_467;
  v247 = v12->m128i_i32[3];
  if ( v247 == 3 )
  {
    ptr = (void *)sub_4112E0(&s[v204]);
    v209 = ((unsigned __int64)ptr + v204 - 1) % v204;
    v274 = (char *)ptr + v204 - v209 - 1;
    if ( !(_DWORD)p_length )
    {
      v210 = v12->m128i_i32[3] == 3;
      p_length = &length;
      goto LABEL_474;
    }
  }
  else
  {
    if ( v247 != 2 || ((unsigned __int8)p_length & 1) == 0 )
    {
LABEL_467:
      v206 = v308.st_blksize;
      LODWORD(v278) = v308.st_mode & 0xF000;
      ptr = (void *)(0x7FFFFFFFFFFFFFFFLL - v204);
      if ( (unsigned __int64)(v308.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
        v206 = 0x20000LL;
      v207 = sub_40A980(v206, s, 0x7FFFFFFFFFFFFFFFLL - v204);
      if ( (_DWORD)v278 == 0x8000 && (unsigned __int64)s > v308.st_size )
        s = (char *)(v308.st_size + 1);
      v208 = &s[v207 - 1 - (unsigned __int64)&s[v207 - 1] % v207];
      s = v208;
      if ( !v208 || ptr < v208 )
        s = (char *)v207;
      ptr = (void *)sub_4112E0(&s[v204]);
      v209 = ((unsigned __int64)ptr + v204 - 1) % v204;
      v274 = (char *)ptr + v204 - v209 - 1;
      if ( !(_DWORD)p_length )
      {
        v14 = v12->m128i_i32[3] == 3;
        st_blksize = 0LL;
        p_length = &length;
        v210 = v14;
LABEL_474:
        v268[3] = v209;
        if ( !(unsigned __int8)sub_405120(
                                 fildes[0],
                                 fd[0],
                                 v274,
                                 (unsigned __int64)s,
                                 (unsigned __int64)st_blksize,
                                 v210,
                                 (__int64)v11,
                                 (__int64)filename,
                                 0xFFFFFFFFFFFFFFFFLL,
                                 p_length,
                                 &v300) )
          goto LABEL_512;
        if ( !(_BYTE)v300 || ftruncate(fd[0], length.tv_sec) >= 0 )
          goto LABEL_476;
        goto LABEL_601;
      }
      v281 = 0;
      v280 = 1;
      goto LABEL_528;
    }
    ptr = (void *)sub_4112E0(&s[v204]);
    v274 = (char *)ptr + v204 - ((unsigned __int64)ptr + v204 - 1) % v204 - 1;
  }
  v280 = v12->m128i_u32[3];
  v281 = (char)s2;
LABEL_528:
  v226 = 0LL;
  p_length = &length;
  st_size = v308.st_size;
  sub_409AE0((unsigned int)fildes[0], &length);
  v272 = a7;
  v227 = 0LL;
  v271 = v12;
  v228 = st_size;
  v282 = v10;
  v229 = (char)s2;
  v278 = v11;
  v230 = 0LL;
  do
  {
    s2 = v227;
    v231 = sub_409B10(p_length);
    v227 = s2;
    if ( !v231 )
    {
      LOBYTE(s2) = v229;
      v11 = v278;
      v10 = v282;
      v12 = v271;
      v15 = v272;
      if ( v304 )
        goto LABEL_554;
      if ( !v303 )
      {
        v240 = "%s: failed to get extents info";
        p_length = (struct timespec *)sub_40EAD0(0LL, 3LL, v278, v227);
        goto LABEL_562;
      }
      v265 = 0LL;
      v210 = v271->m128i_i32[3] == 3;
      if ( v281 )
        v265 = (unsigned __int64)st_blksize;
      st_blksize = (__m128i *)v265;
      goto LABEL_474;
    }
    if ( !st_mtim.tv_nsec )
      goto LABEL_552;
    v232 = v230;
    v233 = v226;
    v234 = 0;
    v235 = 0LL;
    while ( 1 )
    {
      v237 = (__off_t *)((char *)v305 + 24 * v235);
      v226 = *v237;
      v230 = v237[1];
      if ( v228 < (__int64)(*v237 + v230) )
      {
        if ( v226 > v228 )
          v226 = v228;
        v230 = v228 - v226;
      }
      v229 = 0;
      if ( v226 - v233 != v232 )
      {
        s2 = (char *)(v226 - v233 - v232);
        if ( lseek(fildes[0], v226, 0) < 0 )
        {
          v11 = v278;
          v10 = v282;
          v12 = v271;
          v15 = v272;
          v257 = "cannot lseek %s";
          p_length = (struct timespec *)sub_40EA00(4LL, v278);
        }
        else
        {
          if ( v280 != 1 )
          {
            v229 = sub_405060(fd[0], (__int64)filename, v280 == 3, (__off_t)s2);
            if ( !v229 )
            {
LABEL_547:
              v10 = v282;
              v11 = v278;
              v12 = v271;
              v15 = v272;
LABEL_548:
              free(v305);
              goto LABEL_512;
            }
            goto LABEL_532;
          }
          if ( (unsigned __int8)sub_404C20(fd[0], (size_t)s2) )
          {
            v236 = 0LL;
            goto LABEL_534;
          }
          v10 = v282;
          v11 = v278;
          v12 = v271;
          v15 = v272;
          v257 = "%s: write failed";
          p_length = (struct timespec *)sub_40EAD0(0LL, 3LL, filename, v238);
        }
        v258 = dcgettext(0LL, v257, 5);
        v259 = __errno_location();
        error(0, *v259, v258, p_length);
        goto LABEL_548;
      }
LABEL_532:
      v236 = 0LL;
      if ( v280 == 3 )
        v236 = (unsigned __int64)st_blksize;
LABEL_534:
      if ( !(unsigned __int8)sub_405120(
                               fildes[0],
                               fd[0],
                               v274,
                               (unsigned __int64)s,
                               v236,
                               1,
                               (__int64)v278,
                               (__int64)filename,
                               v230,
                               &v300,
                               &v299) )
        goto LABEL_547;
      v227 = (char *)(v226 + v300);
      if ( v300 )
        v229 = v299;
      if ( (char *)v228 == v227 )
        break;
      v233 = v226;
      v232 = v230;
      v235 = ++v234;
      if ( (unsigned __int64)v234 >= st_mtim.tv_nsec )
        goto LABEL_552;
    }
    v304 = 1;
LABEL_552:
    s2 = v227;
    free(v305);
    v305 = 0LL;
    st_mtim.tv_nsec = 0LL;
    v227 = s2;
  }
  while ( !v304 );
  LOBYTE(s2) = v229;
  v11 = v278;
  v10 = v282;
  v12 = v271;
  v15 = v272;
LABEL_554:
  v239 = st_size > (__int64)v227;
  if ( st_size <= (__int64)v227 && !(_BYTE)s2 )
    goto LABEL_476;
  if ( v280 == 1 )
  {
    if ( (unsigned __int8)sub_404C20(fd[0], st_size - (_QWORD)v227) )
      goto LABEL_476;
    goto LABEL_601;
  }
  p_length = (struct timespec *)v227;
  if ( ftruncate(fd[0], st_size) )
  {
LABEL_601:
    v240 = "failed to extend %s";
    p_length = (struct timespec *)sub_40EA00(4LL, filename);
LABEL_562:
    v241 = dcgettext(0LL, v240, 5);
    v242 = __errno_location();
    error(0, *v242, v241, p_length);
    goto LABEL_512;
  }
  if ( v280 == 3 && v239 && (int)sub_404CD0(fd[0], (__off_t)p_length, st_size - (_QWORD)p_length) < 0 )
  {
    v240 = "error deallocating %s";
    p_length = (struct timespec *)sub_40EA00(4LL, filename);
    goto LABEL_562;
  }
LABEL_476:
  if ( !v12[1].m128i_i8[15]
    || (length = stat_buf.st_atim, st_mtim = stat_buf.st_mtim, !(unsigned int)sub_410660(fd[0], filename))
    || (p_length = (struct timespec *)sub_40EA00(4LL, filename),
        v219 = dcgettext(0LL, "preserving times for %s", 5),
        v220 = __errno_location(),
        error(0, *v220, v219, p_length),
        !v12[2].m128i_i8[4]) )
  {
    if ( v12[1].m128i_i8[13] && (stat_buf.st_uid != dev.st_uid || stat_buf.st_gid != dev.st_gid) )
    {
      v211 = sub_405770((__int64)v12, filename, fd[0], p_stat_buf, (char)src, (__int64)p_dev);
      if ( v211 == -1 )
        goto LABEL_512;
      if ( !v211 )
        LODWORD(v285) = v285 & 0xFFFFF1FF;
    }
    if ( v12[2].m128i_i8[7] && SLOBYTE(dev.st_mode) >= 0 && geteuid() && !sub_404D10(fd[0], filename, 0x180u) )
      sub_404D10(fd[0], filename, v273 & ~v275);
    if ( (v12[1].m128i_i64[1] & 0xFF0000000000FFLL) == 0 )
    {
      if ( v12[2].m128i_i8[11] )
      {
        v243 = v12[1].m128i_u32[0];
      }
      else
      {
        if ( !v12[2].m128i_i8[0] )
        {
          v212 = 1;
          if ( !v275 )
            goto LABEL_489;
          LOBYTE(p_length) = 1;
          v261 = sub_405960();
          v212 = (char)p_length;
          if ( (~v261 & v275) == 0 )
            goto LABEL_489;
          v262 = sub_404D10(fd[0], filename, v273);
          v212 = (char)p_length;
          if ( !v262 )
            goto LABEL_489;
          p_length = (struct timespec *)sub_40EA00(4LL, filename);
          v263 = dcgettext(0LL, "preserving permissions for %s", 5);
          v264 = __errno_location();
          error(0, *v264, v263, p_length);
          goto LABEL_522;
        }
        v243 = ~(unsigned __int16)sub_405960() & 0x1B6;
      }
      v212 = (unsigned int)sub_40A160(filename, (unsigned int)fd[0], v243) == 0;
      goto LABEL_489;
    }
    v225 = sub_40A0D0(v11, (unsigned int)fildes[0], filename, (unsigned int)fd[0], (unsigned int)v285);
    v212 = 1;
    if ( !v225 )
      goto LABEL_489;
LABEL_522:
    v212 = v12[2].m128i_i8[4] ^ 1;
    goto LABEL_489;
  }
LABEL_512:
  v212 = 0;
LABEL_489:
  LOBYTE(p_length) = v212;
  v213 = close(fd[0]);
  LOBYTE(v133) = (_BYTE)p_length;
  if ( v213 < 0 )
  {
    *(_QWORD *)fd = sub_40EA00(4LL, filename);
    v214 = dcgettext(0LL, "failed to close %s", 5);
    v215 = __errno_location();
    error(0, *v215, v214, *(_QWORD *)fd);
    LOBYTE(v133) = 0;
  }
LABEL_303:
  LOBYTE(fd[0]) = v133;
  if ( close(fildes[0]) < 0 )
  {
    v15 = sub_40EA00(4LL, v11);
    v187 = dcgettext(0LL, "failed to close %s", 5);
    v188 = __errno_location();
    error(0, *v188, v187, v15);
    free(ptr);
    goto LABEL_196;
  }
  LOBYTE(fildes[0]) = fd[0];
  free(ptr);
  v44 = fildes[0];
  LOBYTE(fd[0]) = 0;
  LOBYTE(ptr) = fildes[0];
  if ( LOBYTE(fildes[0]) )
    goto LABEL_78;
LABEL_196:
  if ( v12[2].m128i_i8[5] )
    goto LABEL_239;
  if ( !n )
    sub_409980(stat_buf.st_ino, stat_buf.st_dev);
LABEL_135:
  if ( old )
  {
    if ( rename(old, filename) )
    {
      v127 = sub_40EA00(4LL, filename);
      v128 = dcgettext(0LL, "cannot un-backup %s", 5);
      v129 = __errno_location();
      error(0, *v129, v128, v127);
    }
    else if ( v12[2].m128i_i8[14] )
    {
      v76 = sub_40E920(1LL, 4LL, filename);
      v77 = sub_40E920(0LL, 4LL, old);
      v78 = dcgettext(0LL, "%s -> %s (unbackup)\n", 5);
      __printf_chk(1LL, v78, v77, v76);
    }
  }
  return v10;
}

__int64 __fastcall sub_409810(const char *a1, char *a2, unsigned __int8 a3, __m128i *a4, _BYTE *a5, _BYTE *a6)
{
  __int32 v6; // eax
  unsigned int v7; // r10d
  char v9[9]; // [rsp+Fh] [rbp-9h] BYREF

  if ( !a4 )
    __assert_fail("co != NULL", "src/copy.c", 0xB60u, "valid_options");
  if ( a4->m128i_i32[0] > 3u )
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 0xB61u, "valid_options");
  v6 = a4->m128i_i32[3];
  if ( (unsigned int)(v6 - 1) > 2 )
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 0xB62u, "valid_options");
  v7 = a4[3].m128i_u32[1];
  if ( v7 > 2 )
    __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 0xB63u, "valid_options");
  if ( a4[1].m128i_i8[7] && a4[2].m128i_i8[12] )
    __assert_fail("!(co->hard_link && co->symbolic_link)", "src/copy.c", 0xB64u, "valid_options");
  if ( v6 != 2 && v7 == 2 )
    __assert_fail(
      "! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
      "src/copy.c",
      0xB67u,
      "valid_options");
  v9[0] = 0;
  qword_621990 = (__int64)a1;
  qword_621988 = (__int64)a2;
  return sub_405990(a1, a2, a3, 0LL, 0LL, a4, 1u, v9, a5, a6);
}

unsigned __int64 __fastcall sub_409930(_QWORD *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_409940(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( *a1 == *a2 )
    return a1[1] == a2[1];
  return result;
}

void __fastcall sub_409960(void **ptr)
{
  free(ptr[2]);
  free(ptr);
}

void __fastcall sub_409980(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rbx
  __int64 v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v4[2] = 0LL;
  v2 = sub_40C330(qword_621998, v4);
  if ( v2 )
  {
    v3 = (void *)v2;
    free(*(void **)(v2 + 16));
    free(v3);
  }
}

__int64 __fastcall sub_4099D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v2 = sub_40B8E0(qword_621998, v4);
  if ( v2 )
    return *(_QWORD *)(v2 + 16);
  else
    return 0LL;
}

__int64 __fastcall sub_409A10(void *src, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  void *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int64 result; // rax

  v4 = (_QWORD *)sub_4112E0(24LL);
  v5 = sub_411510(src);
  v6 = qword_621998;
  *v4 = a2;
  v4[2] = v5;
  v4[1] = a3;
  v7 = sub_40C2F0(v6, v4);
  if ( !v7 )
    sub_411530();
  v8 = (_QWORD *)v7;
  result = 0LL;
  if ( v4 != v8 )
  {
    free((void *)v4[2]);
    free(v4);
    return v8[2];
  }
  return result;
}

void *sub_409A90()
{
  void *result; // rax

  result = (void *)sub_40BB50(103LL, 0LL, sub_409930, sub_409940, sub_409960);
  qword_621998 = result;
  if ( !result )
    sub_411530();
  return result;
}

__int64 sub_409AD0()
{
  return sub_40BD90(qword_621998);
}

__int64 __fastcall sub_409AE0(int a1, __int64 a2)
{
  __int64 result; // rax

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
  unsigned int v1; // r13d
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r8d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 *v16; // rcx
  int v17; // r9d
  __int64 v18; // r10
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  bool result; // al
  bool v25; // zf
  __int64 vars0[519]; // [rsp+0h] [rbp+0h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    memset(vars0, 0, 0x1000uLL);
    v5 = *(_DWORD *)(a1 + 16);
    v6 = *(_DWORD *)a1;
    vars0[0] = v4;
    LODWORD(vars0[3]) = 72;
    LODWORD(vars0[2]) = v5;
    vars0[1] = ~v4;
    if ( ioctl(v6, 0xC020660BuLL, vars0) < 0 )
      break;
    if ( !HIDWORD(vars0[2]) )
    {
      v25 = *(_QWORD *)(a1 + 8) == 0LL;
      *(_BYTE *)(a1 + 33) = 1;
      return !v25;
    }
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 > ~(unsigned __int64)HIDWORD(vars0[2]) )
      __assert_fail(
        "scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents",
        "src/extent-scan.c",
        0x7Eu,
        "extent_scan_read");
    v8 = *(_QWORD *)(a1 + 40);
    v9 = HIDWORD(vars0[2]) + v7;
    *(_QWORD *)(a1 + 24) = v9;
    v10 = v3 - v8;
    if ( ((24 * v9) & 0x8000000000000000LL) != 0LL || !is_mul_ok(v9, 0x18uLL) )
      sub_411530(v8, 3223348747LL, (v9 * (unsigned __int128)0x18uLL) >> 64 != 0);
    v11 = sub_411340(v8, 24 * v9);
    v12 = HIDWORD(vars0[2]);
    *(_QWORD *)(a1 + 40) = v11;
    v3 = v11 + v10;
    if ( v12 )
    {
      v13 = vars0[6];
      v14 = vars0[4];
      if ( vars0[4] > (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - vars0[6]) )
LABEL_17:
        __assert_fail(
          "fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length",
          "src/extent-scan.c",
          0x8Du,
          "extent_scan_read");
      v15 = 0;
      v16 = &vars0[4];
      while ( 2 )
      {
        if ( v1 )
        {
          v17 = *((_DWORD *)v16 + 10);
          v18 = *(_QWORD *)(v3 + 8);
          v19 = v18 + *(_QWORD *)v3;
          if ( *(_DWORD *)(v3 + 16) == (v17 & 0xFFFFFFFE) && v14 == v19 )
          {
            *(_DWORD *)(v3 + 16) = v17;
            ++v15;
            *(_QWORD *)(v3 + 8) = v18 + v13;
LABEL_15:
            if ( v15 >= v12 )
              goto LABEL_21;
LABEL_16:
            v16 = &vars0[7 * v15 + 4];
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
          v19 = *(_QWORD *)(a1 + 8);
          if ( v19 > v14 )
            goto LABEL_13;
          v17 = *((_DWORD *)v16 + 10);
        }
        break;
      }
      v20 = v1;
      ++v15;
      ++v1;
      v3 = *(_QWORD *)(a1 + 40) + 24 * v20;
      *(_QWORD *)v3 = v14;
      *(_QWORD *)(v3 + 8) = v13;
      *(_DWORD *)(v3 + 16) = v17;
      if ( v15 >= v12 )
        goto LABEL_21;
      goto LABEL_16;
    }
LABEL_21:
    if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
    {
      *(_BYTE *)(a1 + 33) = 1;
LABEL_35:
      *(_QWORD *)(a1 + 24) = v1;
      return 1;
    }
    v21 = *(_BYTE *)(a1 + 33);
    if ( v1 > 0x48 )
    {
      if ( v21 )
        goto LABEL_35;
      v22 = v1 - 1;
      v23 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 24) = v22;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v23 + 24 * v22 - 24) + *(_QWORD *)(v23 + 24 * v22 - 16);
      return 1;
    }
    *(_QWORD *)(a1 + 24) = v1;
    if ( !v21 )
    {
      v4 = *(_QWORD *)v3 + *(_QWORD *)(v3 + 8);
      *(_QWORD *)(a1 + 8) = v4;
      if ( v1 != 72 )
        continue;
    }
    return 1;
  }
LABEL_27:
  result = 0;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 32) = 1;
    return 0;
  }
  return result;
}

int __fastcall sub_409DE0(char *to, __int64 a2)
{
  return linkat(*(_DWORD *)a2, *(const char **)(a2 + 8), *(_DWORD *)(a2 + 16), to, *(_DWORD *)(a2 + 20));
}

void *__fastcall sub_409E00(void *src, void *dest)
{
  __int64 v3; // rax
  size_t v4; // rbp

  v3 = sub_40AD40(src) - (_QWORD)src;
  v4 = v3;
  if ( (unsigned __int64)(v3 + 9) > 0x100 )
  {
    dest = malloc(v3 + 9);
    if ( !dest )
      return 0LL;
  }
  strcpy((char *)mempcpy(dest, src, v4), "CuXXXXXX");
  return dest;
}

int __fastcall sub_409E70(char *to, __int64 a2)
{
  return symlinkat(*(const char **)a2, *(_DWORD *)(a2 + 8), to);
}

__int64 __fastcall sub_409E90(int a1, const char *a2, int a3, char *a4, int a5, char a6)
{
  int v8; // eax
  unsigned int v9; // ebx
  int *v10; // rax
  char *v12; // rax
  char *v13; // rbx
  int v14; // eax
  int *v15; // r9
  int v16; // r12d
  int *v18; // [rsp+8h] [rbp-160h]
  int *v19; // [rsp+8h] [rbp-160h]
  char dest[312]; // [rsp+30h] [rbp-138h] BYREF

  v8 = linkat(a1, a2, a3, a4, a5);
  v9 = v8;
  if ( a6 == 1 )
  {
    if ( v8 )
    {
      v10 = __errno_location();
      if ( *v10 == 17 )
      {
        v18 = v10;
        v12 = (char *)sub_409E00(a4, dest);
        v13 = v12;
        if ( v12 )
        {
          v14 = sub_40FB10(v12);
          v15 = v18;
          if ( v14 )
          {
            v16 = *v18;
          }
          else
          {
            v16 = renameat(a3, v13, a3, a4);
            if ( v16 )
              v16 = *v18;
            unlinkat(a3, v13, 0);
            v15 = v18;
          }
          if ( v13 != dest )
          {
            v19 = v15;
            free(v13);
            v15 = v19;
          }
          v9 = 1;
          if ( v16 )
          {
            *v15 = v16;
            return (unsigned int)-1;
          }
        }
        else
        {
          return (unsigned int)-1;
        }
      }
    }
  }
  return v9;
}

__int64 __fastcall sub_409FD0(const char *a1, int a2, char *a3, char a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int *v8; // r14
  char *v10; // rax
  char *v11; // rbx
  int v12; // r12d
  char dest[312]; // [rsp+10h] [rbp-138h] BYREF

  v6 = symlinkat(a1, a2, a3);
  v7 = v6;
  if ( a4 == 1 )
  {
    if ( v6 )
    {
      v8 = __errno_location();
      if ( *v8 == 17 )
      {
        v10 = (char *)sub_409E00(a3, dest);
        v11 = v10;
        if ( !v10 )
          return (unsigned int)-1;
        if ( (unsigned int)sub_40FB10(v10) )
        {
          v12 = *v8;
        }
        else
        {
          if ( !renameat(a2, v11, a2, a3) )
          {
            if ( v11 != dest )
              free(v11);
            return 1;
          }
          v12 = *v8;
          unlinkat(a2, v11, 0);
        }
        if ( v11 != dest )
          free(v11);
        if ( v12 )
        {
          *v8 = v12;
          return (unsigned int)-1;
        }
        return 1;
      }
    }
  }
  return v7;
}

__int64 __fastcall sub_40A0D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r12
  char *v7; // rbp
  int *v8; // rax
  const char *v10; // rbp
  int *v11; // rax

  v4 = sub_40D070();
  v5 = v4;
  if ( v4 == -2 )
  {
    v10 = (const char *)sub_40EC50(a1);
    v11 = __errno_location();
    error(0, *v11, "%s", v10);
    return 4294967294LL;
  }
  else
  {
    if ( v4 == -1 )
    {
      v6 = sub_40EC50(a3);
      v7 = dcgettext(0LL, "preserving permissions for %s", 5);
      v8 = __errno_location();
      error(0, *v8, v7, v6);
    }
    return v5;
  }
}

__int64 __fastcall sub_40A160(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r12
  char *v6; // rbp
  int *v7; // rax

  v3 = sub_40D0B0(a1, a2, a3);
  if ( v3 )
  {
    v5 = sub_40EC50(a1);
    v6 = dcgettext(0LL, "setting permissions for %s", 5);
    v7 = __errno_location();
    error(0, *v7, v6, v5);
  }
  return v3;
}

char *__fastcall sub_40A1C0(char *path, unsigned __int64 a2)
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

char *__fastcall sub_40A2B0(char *path, __int64 a2)
{
  char *v3; // rbp
  char *result; // rax
  __int16 v5; // r14
  char *v6; // r12
  int *v7; // rax
  int *v8; // r15
  unsigned __int64 v9; // rdx
  char *v10; // rsi

  v3 = (char *)sub_40AD40(path);
  result = (char *)sub_40ADA0(v3);
  if ( (unsigned __int64)result > 0xE )
  {
    v5 = *(_WORD *)v3;
    v6 = result;
    *(_WORD *)v3 = 46;
    v7 = __errno_location();
    *v7 = 0;
    v8 = v7;
    result = (char *)pathconf(path, 3);
    if ( (__int64)result >= 0 || (v9 = 255LL, !*v8) )
      v9 = (unsigned __int64)result;
    *(_WORD *)v3 = v5;
    if ( (unsigned __int64)v6 > v9 )
    {
      v10 = &path[a2];
      result = (char *)(&path[a2] - v3);
      if ( (unsigned __int64)result >= v9 )
        v10 = &v3[v9 - 1];
      else
        v9 = (unsigned __int64)(result + 1);
      *v10 = 126;
      v3[v9] = 0;
    }
  }
  return result;
}

void __fastcall sub_40A380(char *a1)
{
  char *v1; // rbx

  v1 = a1;
  if ( (a1 || (v1 = getenv("SIMPLE_BACKUP_SUFFIX")) != 0LL) && *v1 && (char *)sub_40AD40(v1) == v1 )
    src = v1;
  else
    src = "~";
}

char *__fastcall sub_40A3E0(_BYTE *a1, int a2, char a3)
{
  const char *v3; // r14
  size_t v4; // rax
  signed __int64 v5; // r14
  const char *v6; // rdi
  size_t v7; // rax
  bool v8; // cf
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  char *v12; // r15
  DIR *v13; // r12
  char *v14; // rbx
  __int64 v15; // r13
  int v16; // ebp
  struct dirent *v17; // rax
  char *d_name; // rbx
  char *v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // r8
  int i; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  char *v26; // rax
  char *v27; // r8
  char *v28; // rax
  char *v29; // rax
  char v30; // dl
  char *v31; // rax
  int v32; // eax
  char *v33; // rcx
  int v34; // edx
  int *v35; // rax
  int v36; // ebp
  int *v37; // rbx
  void *v38; // rdi
  __int16 v40; // ax
  void *v41; // rdi
  _BOOL4 v42; // ebp
  __int64 v43; // [rsp+8h] [rbp-90h]
  unsigned __int8 v45; // [rsp+18h] [rbp-80h]
  unsigned __int64 v46; // [rsp+18h] [rbp-80h]
  unsigned __int64 v47; // [rsp+18h] [rbp-80h]
  __int16 v48; // [rsp+18h] [rbp-80h]
  size_t v49; // [rsp+20h] [rbp-78h]
  unsigned __int64 size; // [rsp+28h] [rbp-70h]
  unsigned __int64 v53; // [rsp+48h] [rbp-50h]
  unsigned __int64 v54; // [rsp+50h] [rbp-48h]
  __int64 v55; // [rsp+50h] [rbp-48h]
  char *v56; // [rsp+50h] [rbp-48h]
  size_t v57; // [rsp+58h] [rbp-40h]

  v3 = (const char *)sub_40AD40(a1);
  v4 = strlen(v3);
  v5 = v3 - a1;
  v6 = src;
  v43 = v5 + v4;
  if ( !src )
  {
    sub_40A380(src);
    v6 = src;
  }
  v7 = strlen(v6) + 1;
  v8 = v7 < 9;
  v9 = v43 + 1;
  v57 = v7;
  v10 = v7;
  v11 = 9LL;
  if ( !v8 )
    v11 = v10;
  v53 = v9 + v11;
  v12 = (char *)malloc(v9 + v11);
  if ( v12 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      memcpy(v12, a1, v43 + 1);
      if ( a2 == 1 )
      {
        memcpy(&v12[v43], src, v57);
        goto LABEL_33;
      }
      v14 = &v12[v5];
      v15 = sub_40ADA0(&v12[v5]);
      if ( v13 )
        break;
      v40 = *(_WORD *)v14;
      *(_WORD *)v14 = 46;
      v48 = v40;
      v13 = (DIR *)sub_40ABC0(v12);
      if ( v13 )
      {
        *(_WORD *)v14 = v48;
        strcpy(&v14[v15], ".~1~");
LABEL_10:
        v16 = 2;
        v49 = 1LL;
        size = v53;
        while ( 1 )
        {
          v17 = readdir(v13);
          if ( !v17 )
            goto LABEL_30;
          while ( 1 )
          {
            d_name = v17->d_name;
            if ( strlen(v17->d_name) < v15 + 4 )
              break;
            if ( memcmp(&v12[v5], d_name, v15 + 2) )
              break;
            v19 = &d_name[v15 + 2];
            if ( (unsigned __int8)(*v19 - 49) > 8u )
              break;
            v20 = 1LL;
            v21 = *v19 == 57;
            for ( i = v19[1]; (unsigned int)(i - 48) <= 9; i = v19[v20] )
            {
              ++v20;
              v21 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( v19[v20 + 1] )
              break;
            if ( v49 >= v20 )
            {
              v54 = v20;
              v45 = v21;
              if ( v49 != v20 )
                break;
              v23 = memcmp(&v12[v43 + 2], v19, v49);
              v21 = v45;
              v20 = v54;
              if ( v23 > 0 )
                break;
            }
            v24 = v21;
            v16 = v21;
            v49 = v21 + v20;
            v25 = v43 + v49 + 4;
            if ( v25 <= size )
            {
              v27 = v12;
            }
            else
            {
              if ( (v25 & 0x4000000000000000LL) != 0 || v25 < 0 )
                size = v43 + v49 + 4;
              else
                size = 2 * v25;
              v55 = v21;
              v46 = v20;
              v26 = (char *)realloc(v12, size);
              v20 = v46;
              v24 = v55;
              v27 = v26;
              if ( !v26 )
                goto LABEL_49;
            }
            v56 = v27;
            v47 = v20;
            v28 = &v27[v43];
            *(_WORD *)v28 = 32302;
            v28[2] = 48;
            v29 = (char *)memcpy(&v27[v43 + 2 + v24], v19, v20 + 2);
            v30 = v29[v47 - 1];
            v31 = &v29[v47 - 1];
            if ( v30 == 57 )
            {
              do
              {
                *v31-- = 48;
                v30 = *v31;
              }
              while ( *v31 == 57 );
            }
            v12 = v56;
            *v31 = v30 + 1;
            v17 = readdir(v13);
            if ( !v17 )
              goto LABEL_30;
          }
        }
      }
      v42 = *__errno_location() == 12;
      *(_WORD *)v14 = v48;
      v16 = v42 + 2;
      strcpy(&v14[v15], ".~1~");
LABEL_30:
      switch ( v16 )
      {
        case 2:
          if ( a2 == 2 )
          {
            memcpy(&v12[v43], src, v57);
            a2 = 1;
          }
LABEL_46:
          sub_40A2B0(v12, v43);
          break;
        case 3:
LABEL_49:
          v41 = v12;
          v12 = 0LL;
          free(v41);
          *__errno_location() = 12;
          return v12;
        case 1:
          goto LABEL_46;
      }
LABEL_33:
      if ( !a3 )
        goto LABEL_53;
      if ( !v13 || (v32 = dirfd(v13), v33 = &v12[v5], v34 = v32, v32 < 0) )
      {
        v33 = v12;
        v34 = -100;
        v5 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, a1, v34, v33) )
      {
LABEL_53:
        if ( v13 )
          closedir(v13);
        return v12;
      }
      v35 = __errno_location();
      v36 = *v35;
      if ( *v35 != 17 )
      {
        v37 = v35;
        if ( v13 )
          closedir(v13);
        v38 = v12;
        v12 = 0LL;
        free(v38);
        *v37 = v36;
        return v12;
      }
    }
    rewinddir(v13);
    goto LABEL_10;
  }
  return v12;
}

char *__fastcall sub_40A8B0(_BYTE *a1, int a2)
{
  return sub_40A3E0(a1, a2, 1);
}

__int64 __fastcall sub_40A8C0(__int64 a1, __int64 a2)
{
  return (unsigned int)dword_419020[sub_412E60(a1, a2, off_419040, dword_419020, 4LL, off_61F4E0)];
}

char *__fastcall sub_40A8F0(_BYTE *a1, __int64 a2)
{
  char *result; // rax
  __int64 v3; // rdx

  result = sub_40A3E0(a1, a2, 0);
  if ( !result )
    sub_411530(a1, a2, v3);
  return result;
}

__int64 __fastcall sub_40A930(void *a1, char *a2)
{
  char *v2; // rax

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
  unsigned __int64 v4; // r8
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

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
      if ( v9 * a2 <= a3 && v4 / a2 == v9 )
        return v4;
    }
  }
  else
  {
    a1 = 0x2000LL;
    if ( a2 )
      a1 = a2;
  }
  if ( a1 <= a3 )
    return a1;
  return a3;
}

__int64 sub_40AA00()
{
  FILE *v0; // rbx
  int v2; // eax
  FILE *v3; // rdi
  char *v4; // rax
  __int64 v5; // rbx
  const char *v6; // r12
  int *v7; // rax
  int *v8; // rbp
  const char *v9; // rax
  int v10; // eax

  v0 = stdin;
  if ( sub_411B90(stdin) )
  {
    v10 = sub_411BC0(v0, 0LL, 1LL);
    v3 = stdin;
    if ( v10 || (v2 = sub_411B50(stdin), v3 = stdin, !v2) )
    {
      if ( !(unsigned int)sub_412F20(v3) )
        return sub_40AB20();
    }
    else
    {
      sub_412F20(stdin);
    }
LABEL_6:
    v4 = dcgettext(0LL, "error closing file", 5);
    v5 = qword_6219A8;
    v6 = v4;
    v7 = __errno_location();
    v8 = v7;
    if ( v5 )
    {
      v9 = (const char *)sub_40EAA0(v5);
      error(0, *v8, "%s: %s", v9, v6);
    }
    else
    {
      error(0, *v7, "%s", v6);
    }
    sub_40AB20();
    _exit(status);
  }
  if ( (unsigned int)sub_412F20(v0) )
    goto LABEL_6;
  return sub_40AB20();
}

__int64 sub_40AB20()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

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
        v5 = (const char *)sub_40EAA0(qword_6219B8);
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
  DIR *v1; // rax
  DIR *v2; // rbx
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v8; // r12d
  int *v9; // rax
  int *v10; // rbp
  int v11; // r14d
  DIR *v12; // r13
  DIR *v13; // rax

  v1 = opendir(a1);
  v2 = v1;
  if ( !v1 )
    return v2;
  v3 = dirfd(v1);
  if ( v3 > 2 )
    return v2;
  v8 = sub_411A10(v3, 1030, 3, v4, v5, v6);
  v9 = __errno_location();
  v10 = v9;
  if ( v8 >= 0 )
  {
    v13 = fdopendir(v8);
    v11 = *v10;
    v12 = v13;
    if ( !v13 )
      close(v8);
  }
  else
  {
    v11 = *v9;
    v12 = 0LL;
  }
  closedir(v2);
  *v10 = v11;
  return v12;
}

__int64 __fastcall sub_40AC60(void *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = sub_40ACE0(a1);
  if ( !result )
    sub_411530(a1, a2, v3);
  return result;
}

__int64 __fastcall sub_40AC80(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *a1 == 47;
  v2 = sub_40AD40(a1);
  if ( v2 - (__int64)a1 <= v1 )
    return v2 - (_QWORD)a1;
  v3 = v2 - (_QWORD)a1 - 1;
  if ( *(_BYTE *)(v2 - 1) != 47 )
    return v2 - (_QWORD)a1;
  while ( v1 != v3 && a1[v3 - 1] == 47 )
    --v3;
  return v3;
}

_BYTE *__fastcall sub_40ACE0(_BYTE *src)
{
  __int64 v1; // rbx
  _BYTE *v2; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // rax

  v1 = sub_40AC80(src);
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

_BYTE *__fastcall sub_40AD40(_BYTE *a1)
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

size_t __fastcall sub_40ADA0(const char *a1)
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

// attributes: thunk
int j__posix_fadvise(int fd, off_t offset, off_t len, int advise)
{
  return posix_fadvise(fd, offset, len, advise);
}

__int64 __fastcall sub_40AE10(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax

  v3 = 0LL;
  if ( (a2 & 0x40) != 0 )
    v3 = a3;
  v4 = open(a1, a2, v3);
  return sub_40FCF0(v4);
}

void __fastcall sub_40AE60(__int64 a1, void *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( a1 )
  {
    v4 = (_QWORD *)sub_4112E0(24LL);
    *v4 = sub_411510(a2);
    v4[1] = a3[1];
    v4[2] = *a3;
    v5 = sub_40C2F0(a1, v4);
    if ( !v5 )
      sub_411530(a1, v4, v6);
    if ( v4 != (_QWORD *)v5 )
      sub_40C5C0(v4);
  }
}

bool __fastcall sub_40AEF0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0;
  v3 = a3[1];
  v5[0] = a2;
  v5[1] = v3;
  v5[2] = *a3;
  return sub_40B8E0(a1, v5) != 0;
}

__int64 __fastcall sub_40AF30(__int16 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  char v5; // al
  int v6; // eax
  char v7; // al
  int v8; // eax
  __int64 result; // rax

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
  *(_BYTE *)(a2 + 1) = (a1 & 0x100) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (a1 & 0x80) == 0 ? 45 : 119;
  v4 = -((a1 & 0x40) == 0);
  if ( (a1 & 0x800) != 0 )
    v5 = (v4 & 0xE0) + 115;
  else
    v5 = (v4 & 0xB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (a1 & 0x20) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (a1 & 0x10) == 0 ? 45 : 119;
  v6 = -((a1 & 8) == 0);
  if ( (a1 & 0x400) != 0 )
    v7 = (v6 & 0xE0) + 115;
  else
    v7 = (v6 & 0xB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (a1 & 4) == 0 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (a1 & 2) == 0 ? 45 : 119;
  v8 = -((a1 & 1) == 0);
  if ( (a1 & 0x200) != 0 )
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_40B0C0(void *a1, void *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = sub_40B0E0(a1, a2);
  if ( !result )
    sub_411530(a1, a2, v3);
  return result;
}

void *__fastcall sub_40B0E0(_BYTE *src, const char *a2, _QWORD *a3)
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
  v4 = sub_40AD40(src);
  v5 = sub_40ADA0(v4);
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

__int64 __fastcall sub_40B1C0(int fd, char *buf, size_t nbytes)
{
  size_t v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax

  if ( !nbytes )
    return 0LL;
  v4 = nbytes;
  v5 = 0LL;
  do
  {
    v6 = sub_40EEC0(fd, buf, v4);
    if ( v6 == -1 )
      break;
    if ( !v6 )
    {
      *__errno_location() = 0;
      return v5;
    }
    v5 += v6;
    buf += v6;
    v4 -= v6;
  }
  while ( v4 );
  return v5;
}

__int64 __fastcall sub_40B240(int fd, char *buf, size_t n)
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
    v6 = sub_40EF20(fd, buf, v4);
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

unsigned __int64 __fastcall sub_40B2C0(unsigned __int64 a1)
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

unsigned __int64 __fastcall sub_40B360(__int64 a1, unsigned __int64 a2)
{
  return __ROR8__(a1, 3) % a2;
}

bool __fastcall sub_40B370(__int64 a1, __int64 a2)
{
  return a1 == a2;
}

__int64 __fastcall sub_40B380(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40B380(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40B3B0(__int64 a1, __int64 a2, __m128i **a3, char a4)
{
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 *v10; // rax
  const __m128i *v12; // rax

  v7 = (__m128i *)sub_40B380(a1, a2);
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

__int64 __fastcall sub_40B4D0(float **a1)
{
  float *v1; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == (float *)&unk_419120 )
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
    *a1 = (float *)&unk_419120;
    return 0LL;
  }
  return result;
}

__int64 __fastcall sub_40B550(__int64 a1, __int64 a2, char a3)
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
              v8 = (_QWORD *)sub_40B380(a1, *v6);
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

__int64 __fastcall sub_40B790(__int64 a1, __int64 a2)
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

__int64 __fastcall sub_40B8E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = (_QWORD *)sub_40B380(a1, a2);
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

__int64 __fastcall sub_40B990(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)sub_40B380(a1, a2);
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

__int64 __fastcall sub_40BA70(__int64 a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
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

_QWORD *__fastcall sub_40BB50(
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
    v7 = sub_40B360;
  if ( !a4 )
    v6 = sub_40B370;
  v9 = (char *)malloc(0x50uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = (float **)(v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40B4D0(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40B2C0(a1);
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
      *((_QWORD *)v9 + 5) = &unk_419120;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40B4D0(v11) )
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

void __fastcall sub_40BCE0(_QWORD *a1)
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

void __fastcall sub_40BD90(_QWORD *ptr)
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

__int64 __fastcall sub_40BE70(__int64 a1, __int64 a2)
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
  v5 = sub_40B2C0(a2);
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
  v12 = sub_40B550((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40B550(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40B550(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_40BE70(__int64 a1, __int64 a2)
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
  v5 = sub_40B2C0(a2);
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
  v12 = sub_40B550((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40B550(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40B550(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_40C070(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40B3B0(a1, a2, v26, 0);
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
        sub_40B4D0((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40BE70(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B3B0(a1, a2, v26, 0) )
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

__int64 __fastcall sub_40C070(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40B3B0(a1, a2, v26, 0);
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
        sub_40B4D0((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40BE70(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B3B0(a1, a2, v26, 0) )
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

__int64 __fastcall sub_40C2F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v2 = a2;
  v3 = sub_40C070(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    return v5;
  return v2;
}

__int64 __fastcall sub_40C330(__int64 a1, __int64 a2)
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

  v3 = sub_40B3B0(a1, a2, &v24, 1);
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
    sub_40B4D0((float **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40BE70(a1, v17) )
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

unsigned __int64 __fastcall sub_40C510(_QWORD *a1, unsigned __int64 a2)
{
  return (a1[1] ^ (unsigned __int64)sub_413020(*a1)) % a2;
}

unsigned __int64 __fastcall sub_40C540(__int64 a1, unsigned __int64 a2)
{
  return *(_QWORD *)(a1 + 8) % a2;
}

__int64 __fastcall sub_40C550(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( a1[1] == a2[1] && a1[2] == a2[2] )
    return sub_40EF80(*a1, *a2, a3, a4, a5, a6);
  else
    return 0LL;
}

void __fastcall sub_40C5C0(void **ptr)
{
  free(*ptr);
  free(ptr);
}

_BYTE *__fastcall sub_40C5E0(char *a1, __int64 a2, int (__fastcall *a3)(char *, char *, __int64), __int64 a4)
{
  char *v5; // r13
  char *v6; // r12
  char *v7; // rbp
  char v8; // dl
  bool v9; // r15
  __int64 v10; // rdx
  int v11; // r15d
  int v12; // eax
  int v13; // r13d
  int *v15; // rax
  bool v16; // [rsp+14h] [rbp-44h]

  v5 = a1;
  v6 = a1;
  v7 = 0LL;
  v16 = 0;
LABEL_2:
  while ( 1 )
  {
    v8 = *v6++;
    if ( !v8 )
      return (_BYTE *)(v5 - a1);
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
      if ( a3(a1, v5, a4) < 0 )
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
        return (_BYTE *)v13;
      }
LABEL_12:
      v5 = v6++;
      v8 = *(v6 - 1);
      if ( !v8 )
        return (_BYTE *)(v5 - a1);
    }
    if ( v8 != 47 )
      v7 = v6;
  }
}

__int64 __fastcall sub_40C770(
        char *a1,
        _DWORD *a2,
        int (__fastcall *a3)(char *, char *, __int64),
        __int64 a4,
        __mode_t a5,
        void (__fastcall *a6)(char *, __int64),
        int a7,
        int a8,
        int a9,
        char a10)
{
  _BYTE *v12; // rax
  _BYTE *v13; // rbp
  char *v14; // rbp
  int v15; // eax
  int v16; // r15d
  __int64 v17; // rbx
  char *v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  int v21; // eax
  int *v22; // rbp
  const char *v23; // rsi
  __int64 v24; // rbx
  char *v25; // rax
  struct stat stat_buf; // [rsp+20h] [rbp-C8h] BYREF

  if ( *a1 != 47 && *a2 == 4 )
  {
    v16 = a2[1];
    if ( v16 )
      goto LABEL_14;
    if ( a3 )
    {
LABEL_4:
      v12 = sub_40C5E0(a1, (__int64)a2, a3, a4);
      v13 = v12;
      if ( (__int64)v12 >= 0 )
      {
        v14 = &v12[(_QWORD)a1];
        goto LABEL_6;
      }
      result = 1LL;
      if ( v13 != (_BYTE *)-1LL )
        return result;
      v16 = *__errno_location();
LABEL_14:
      v17 = sub_40EC50(a1);
      v18 = dcgettext(0LL, "cannot create directory %s", 5);
      error(0, v16, v18, v17);
      return 0LL;
    }
  }
  else if ( a3 )
  {
    goto LABEL_4;
  }
  v14 = a1;
LABEL_6:
  if ( (a9 & a8) != -1 )
  {
    v15 = mkdir(v14, a5 & 0xFFFFFFC0);
    goto LABEL_8;
  }
  if ( a5 & 0x200 | a7 & 0xC00 )
  {
    v15 = mkdir(v14, a5 & 0xFFFFFFED);
LABEL_8:
    v16 = v15;
    if ( !v15 )
    {
      a6(a1, a4);
      v20 = 3LL;
      goto LABEL_28;
    }
    goto LABEL_9;
  }
  v16 = mkdir(v14, a5);
  if ( !v16 )
  {
    a6(a1, a4);
    if ( ((unsigned __int16)a5 & (unsigned __int16)a7 & 0x1FF) == 0 )
      return 1LL;
    v20 = 3LL;
    goto LABEL_28;
  }
LABEL_9:
  v16 = *__errno_location();
  if ( a10 )
  {
    if ( !v16 || v16 != 2 && a3 && !__xstat(1, v14, &stat_buf) && (stat_buf.st_mode & 0xF000) == 0x4000 )
      return 1LL;
    goto LABEL_14;
  }
  v20 = 2LL;
LABEL_28:
  v21 = sub_40F520(a2, v14, v20, &stat_buf);
  if ( v21 < -1 )
    return 1LL;
  if ( !v21 )
    v14 = ".";
  if ( !(unsigned int)sub_4135D0(stat_buf.st_dev, v14, a7) )
    return 1LL;
  if ( v16 && (v16 == 2 || !a3 || *__errno_location() == 20) )
    goto LABEL_14;
  v22 = __errno_location();
  v23 = "cannot change permissions of %s";
  v24 = sub_40EC50(a1);
  if ( (a9 & a8) != -1 )
    v23 = "cannot change owner and permissions of %s";
  v25 = dcgettext(0LL, v23, 5);
  error(0, *v22, v25, v24);
  return 0LL;
}

_WORD *__fastcall sub_40CA80(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // rcx
  char *v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  bool v6; // al
  bool v7; // al
  __int64 v8; // rdi
  _WORD *result; // rax
  __int64 v10; // r10
  int v11; // edi
  char v12; // r9
  unsigned int v13; // ebp
  __int64 v14; // r11
  _WORD *v15; // r10
  int v16; // ecx
  int v17; // edx
  char *v18; // r8
  char *v19; // rsi
  unsigned int v20; // ecx
  unsigned __int8 v21; // si
  char v22; // bl
  int v23; // ebx

  v2 = a1;
  v3 = a1;
  LODWORD(v4) = (char)*a1;
  if ( (unsigned __int8)(*a1 - 48) > 7u )
  {
    v5 = 1LL;
    if ( (_BYTE)v4 )
    {
      do
      {
        ++v2;
        v6 = (_BYTE)v4 == 43 || (v4 & 0xEF) == 45;
        v4 = (unsigned __int8)*v2;
        v5 += v6;
      }
      while ( (_BYTE)v4 );
      v7 = v5 >> 60 != 0;
      v8 = 16 * v5;
      if ( v8 < 0 || v7 )
        sub_411530(v8, a2, v4);
    }
    else
    {
      v8 = 16LL;
    }
    result = (_WORD *)sub_4112E0(v8);
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
      switch ( v12 )
      {
        case 'o':
          v11 |= 0x207u;
          break;
        case 'u':
          v11 |= 0x9C0u;
          break;
        case 'g':
          v11 |= 0x438u;
          break;
        default:
          goto LABEL_13;
      }
LABEL_54:
      ++v3;
    }
    if ( v12 != 45 && v12 != 61 && v12 != 43 )
      goto LABEL_13;
    v14 = v10 + 1;
    v15 = &result[8 * v10];
    while ( 1 )
    {
      v17 = v3[1];
      v18 = v3 + 1;
      if ( v3[1] == 103 )
      {
        v19 = v3 + 2;
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
              if ( v20 > 0xFFF )
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
                  *((_DWORD *)v15 + 2) = v20;
                  v16 = 4095;
                  *((_BYTE *)v15 + 1) = 1;
                  *((_DWORD *)v15 + 1) = 4095;
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
          while ( 2 )
          {
            switch ( v21 )
            {
              case 0u:
                v22 = 2;
                goto LABEL_45;
              case 0x1Au:
                v16 |= 0x124u;
                goto LABEL_45;
              case 0x1Bu:
                BYTE1(v16) |= 0xCu;
                goto LABEL_45;
              case 0x1Cu:
                BYTE1(v16) |= 2u;
                goto LABEL_45;
              case 0x1Fu:
                LOBYTE(v16) = v16 | 0x92;
                goto LABEL_45;
              case 0x20u:
                v16 |= 0x49u;
LABEL_45:
                LOBYTE(v17) = *++v18;
                v21 = *v18 - 88;
                if ( v21 > 0x20u )
                  goto LABEL_46;
                continue;
              default:
LABEL_46:
                *(_BYTE *)v15 = v12;
                v12 = v17;
                *((_BYTE *)v15 + 1) = v22;
                v3 = v18;
                *((_DWORD *)v15 + 1) = v11;
                *((_DWORD *)v15 + 2) = v16;
                break;
            }
            goto LABEL_25;
          }
        }
        v19 = v3 + 2;
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
      *((_BYTE *)v15 + 1) = 3;
      *((_DWORD *)v15 + 1) = v11;
      *((_DWORD *)v15 + 2) = v16;
      *(_BYTE *)v15 = v12;
      v12 = v3[2];
      v3 = v19;
LABEL_25:
      if ( v11 )
        v16 &= v11;
LABEL_27:
      *((_DWORD *)v15 + 3) = v16;
      v15 += 8;
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
          HIBYTE(result[8 * v14]) = 0;
          return result;
        }
LABEL_13:
        free(result);
        return 0LL;
      }
      ++v14;
    }
  }
  v13 = 0;
  do
  {
    v13 = v4 + 8 * v13 - 48;
    ++v2;
    if ( v13 > 0xFFF )
      return 0LL;
    LODWORD(v4) = (char)*v2;
  }
  while ( (unsigned __int8)(*v2 - 48) <= 7u );
  result = 0LL;
  if ( !(_BYTE)v4 )
  {
    v23 = v13 & 0xC00 | 0x3FF;
    if ( v2 - a1 >= 5 )
      v23 = 4095;
    result = (_WORD *)sub_4112E0(32LL);
    *result = 317;
    *((_DWORD *)result + 1) = 4095;
    *((_DWORD *)result + 2) = v13;
    *((_DWORD *)result + 3) = v23;
    *((_BYTE *)result + 17) = 0;
  }
  return result;
}

__int64 __fastcall sub_40CDF0(char *filename)
{
  int v1; // edx
  __int64 result; // rax
  __mode_t st_mode; // ebx
  struct stat v4; // [rsp+0h] [rbp-98h] BYREF

  v1 = __xstat(1, filename, &v4);
  result = 0LL;
  if ( !v1 )
  {
    st_mode = v4.st_mode;
    result = sub_4112E0(32LL);
    *(_WORD *)result = 317;
    *(_DWORD *)(result + 4) = 4095;
    *(_DWORD *)(result + 8) = st_mode;
    *(_DWORD *)(result + 12) = 4095;
    *(_BYTE *)(result + 17) = 0;
  }
  return result;
}

__int64 __fastcall sub_40CE50(__int16 a1, char a2, int a3, char *a4, _DWORD *a5)
{
  char v5; // r11
  __int64 result; // rax
  int v7; // ebx
  int v8; // edx
  unsigned int v9; // r10d
  int v10; // edi
  int v11; // r9d
  int v12; // r11d
  int v13; // r13d
  int v14; // r9d
  char v15; // r11
  int v16; // r9d
  int v17; // r9d
  int v18; // r12d

  v5 = a4[1];
  result = a1 & 0xFFF;
  v7 = 0;
  if ( v5 )
  {
    v8 = ~a3;
    while ( 1 )
    {
      v18 = *((_DWORD *)a4 + 1);
      v14 = *((_DWORD *)a4 + 2);
      if ( a2 )
        break;
      v9 = -1;
      v10 = 0;
      if ( v5 == 2 )
      {
        if ( (result & 0x49) == 0 )
          goto LABEL_10;
LABEL_18:
        v15 = *a4;
        v16 = v9 & (v14 | 0x49);
        if ( !v18 )
          goto LABEL_11;
LABEL_19:
        v17 = v18 & v16;
        if ( v15 != 45 )
        {
          if ( v15 == 61 )
          {
            v10 |= ~v18;
            LOWORD(v9) = ~(_WORD)v10;
            goto LABEL_22;
          }
LABEL_13:
          if ( v15 == 43 )
          {
            v7 |= v17;
            result = v17 | (unsigned int)result;
          }
          goto LABEL_15;
        }
LABEL_26:
        v7 |= v17;
        result = ~v17 & (unsigned int)result;
LABEL_15:
        a4 += 16;
        v5 = a4[1];
        if ( !v5 )
          goto LABEL_23;
      }
      else
      {
LABEL_4:
        if ( v5 == 3 )
        {
          v11 = result & v14;
          v12 = (v11 & 0x124) != 0 ? 0x124 : 0;
          v13 = v12;
          if ( (v11 & 0x92) != 0 )
          {
            LOBYTE(v13) = ((v11 & 0x124) != 0 ? 0x24 : 0) | 0x92;
            v12 = v13;
          }
          if ( (v11 & 0x49) != 0 )
            v12 |= 0x49u;
          v14 = v12 | v11;
        }
LABEL_10:
        v15 = *a4;
        v16 = v9 & v14;
        if ( v18 )
          goto LABEL_19;
LABEL_11:
        v17 = v8 & v16;
        if ( v15 == 45 )
          goto LABEL_26;
        if ( v15 != 61 )
          goto LABEL_13;
LABEL_22:
        a4 += 16;
        v5 = a4[1];
        v7 |= v9 & 0xFFF;
        result = v17 | v10 & (unsigned int)result;
        if ( !v5 )
          goto LABEL_23;
      }
    }
    v9 = *((_DWORD *)a4 + 3) | 0xFFFFF3FF;
    v10 = ~(unsigned __int16)*((_DWORD *)a4 + 3) & 0xC00;
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
  char *v1; // rbx
  char *result; // rax

  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v1 = (char *)a1;
  result = strrchr(a1, 47);
  if ( result )
  {
    if ( result + 1 - a1 > 6 && !memcmp(result - 6, "/.libs/", 7uLL) )
    {
      v1 = result + 1;
      if ( !memcmp(result + 1, "lt-", 3uLL) )
      {
        v1 = result + 4;
        program_invocation_short_name = (__int64)(result + 4);
      }
    }
  }
  s = v1;
  program_invocation_name = (__int64)v1;
  return result;
}

__int64 __fastcall sub_40D070(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  char v8[28]; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( (unsigned int)sub_412B30(a1, a2, a5, v8) )
    return 4294967294LL;
  else
    return sub_412B60(v8, a3, a4);
}

__int64 __fastcall sub_40D0B0(__int64 a1, unsigned int a2, int a3)
{
  int v4[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v4[0] = a3;
  return sub_412B60(v4, a1, a2);
}

char *__fastcall sub_40D0D0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_413060();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_4192E9;
      if ( !v5 )
        return (char *)&unk_4192DE;
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
    v2 = (char *)&unk_4192E5;
    if ( !v5 )
      return (char *)&unk_4192E2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_40D1D0(
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
                return sub_40D1D0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_40D1D0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_4129F0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_40D1D0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_40D0D0("`", a5);
        v51 = sub_40D0D0("'", a5);
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

unsigned __int64 __fastcall sub_40D1D0(
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
                return sub_40D1D0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_40D1D0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_4129F0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_40D1D0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_40D0D0("`", a5);
        v51 = sub_40D0D0("'", a5);
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

_BYTE *__fastcall sub_40E400(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  v8 = (__m128i *)ptr;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_61F4D0 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411530(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( ptr == &xmmword_61F4C0 )
    {
      v8 = (__m128i *)sub_411340(0LL, v10);
      ptr = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_61F4C0);
    }
    else
    {
      ptr = (void *)sub_411340(ptr, v10);
      v8 = (__m128i *)ptr;
    }
    memset(&v8[dword_61F4D0], 0, 16LL * ((int)a1 + 1 - dword_61F4D0));
    dword_61F4D0 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_40D1D0(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_6219E0 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_4112E0(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_40D1D0(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_40E400(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  v8 = (__m128i *)ptr;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_61F4D0 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411530(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( ptr == &xmmword_61F4C0 )
    {
      v8 = (__m128i *)sub_411340(0LL, v10);
      ptr = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_61F4C0);
    }
    else
    {
      ptr = (void *)sub_411340(ptr, v10);
      v8 = (__m128i *)ptr;
    }
    memset(&v8[dword_61F4D0], 0, 16LL * ((int)a1 + 1 - dword_61F4D0));
    dword_61F4D0 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_40D1D0(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_6219E0 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_4112E0(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_40D1D0(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

__int64 __fastcall sub_40E5A0(__int128 *a1)
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
    v1 = &xmmword_621AE0;
  result = sub_4114E0(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_40E690(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_621AE0;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_40D1D0(
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

_BYTE *__fastcall sub_40E710(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_621AE0;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_40D1D0(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_4112E0(v11 + 1);
  sub_40D1D0(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_40E810()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_61F4D0 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_61F4D0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_6219E0 )
  {
    free(v4);
    *(_QWORD *)&xmmword_61F4C0 = 256LL;
    *((_QWORD *)&xmmword_61F4C0 + 1) = &unk_6219E0;
  }
  if ( v0 != &xmmword_61F4C0 )
  {
    free(v0);
    ptr = &xmmword_61F4C0;
  }
  dword_61F4D0 = 1;
}

_BYTE *__fastcall sub_40E920(__int64 a1, int a2, __int64 a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40E920(__int64 a1, int a2, __int64 a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40E990(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_40E400(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_40E990(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_40E400(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_40EA00(int a1, __int64 a2)
{
  return sub_40E920(0LL, a1, a2);
}

_BYTE *__fastcall sub_40EA20(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_621B10;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_621AE0);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_621AF0);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_621B00);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_40E400(0LL, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_40EAA0(__int64 a1)
{
  return sub_40EA20(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40EAD0(__int64 a1, int a2, __int64 a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40EAD0(__int64 a1, int a2, __int64 a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40EB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_621AE0);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_621AF0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_621B00);
  v8 = qword_621B10;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_40E400(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_40EC30(__int64 a1, __int64 a2)
{
  return sub_40E400(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61F480);
}

_BYTE *__fastcall sub_40EC50(__int64 a1)
{
  return sub_40E400(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61F480);
}

__int64 __fastcall sub_40EC70(unsigned int oldfd, char *old, unsigned int newfd, char *a4, unsigned int a5)
{
  int v8; // eax
  unsigned int v9; // edx
  int *v10; // rax
  int *v11; // r9
  bool v12; // r15
  int v14; // eax
  size_t v15; // rbp
  size_t v16; // rax
  int v17; // [rsp+8h] [rbp-160h]
  int *v18; // [rsp+8h] [rbp-160h]
  int *v19; // [rsp+8h] [rbp-160h]
  struct stat v20; // [rsp+10h] [rbp-158h] BYREF
  struct stat stat_buf; // [rsp+A0h] [rbp-C8h] BYREF

  v8 = syscall(316LL, oldfd, old, newfd, a4, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = v8;
    v10 = __errno_location();
    v9 = v17;
    v11 = v10;
    v12 = *v10 != 95 && ((*v10 - 22) & 0xFFFFFFEF) != 0;
    if ( !v12 )
    {
      if ( a5 )
      {
        if ( (a5 & 0xFFFFFFFE) != 0 )
        {
          *v10 = 95;
          return (unsigned int)-1;
        }
        v18 = v10;
        v14 = __fxstatat(1, newfd, a4, &stat_buf, 256);
        v11 = v18;
        if ( !v14 || *v18 == 75 )
        {
          *v18 = 17;
          return (unsigned int)-1;
        }
        if ( *v18 != 2 )
          return (unsigned int)-1;
        v12 = 1;
      }
      v19 = v11;
      v15 = strlen(old);
      v16 = strlen(a4);
      if ( !v15 || !v16 || old[v15 - 1] != 47 && a4[v16 - 1] != 47 )
        return (unsigned int)renameat(oldfd, old, newfd, a4);
      if ( !__fxstatat(1, oldfd, old, &v20, 256) )
      {
        if ( v12 )
        {
          if ( (v20.st_mode & 0xF000) != 0x4000 )
          {
            *v19 = 2;
            return (unsigned int)-1;
          }
          return (unsigned int)renameat(oldfd, old, newfd, a4);
        }
        if ( __fxstatat(1, newfd, a4, &stat_buf, 256) )
        {
          if ( *v19 == 2 && (v20.st_mode & 0xF000) == 0x4000 )
            return (unsigned int)renameat(oldfd, old, newfd, a4);
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
            return (unsigned int)renameat(oldfd, old, newfd, a4);
          }
          *v19 = 20;
        }
      }
      return (unsigned int)-1;
    }
  }
  return v9;
}

ssize_t __fastcall sub_40EEC0(int fd, void *buf, size_t nbytes)
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

ssize_t __fastcall sub_40EF20(int fd, void *buf, size_t n)
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

__int64 __fastcall sub_40EF80(_BYTE *a1, _BYTE *a2)
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
  v3 = sub_40AD40(a1);
  v4 = sub_40AD40(a2);
  v5 = sub_40ADA0(v3);
  if ( v5 == sub_40ADA0(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (char *)sub_40AC60(a1, (__int64)v4);
    v8 = (char *)sub_40AC60(a2, (__int64)v4);
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

__int64 __fastcall sub_40F0B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a1 + 8) >= v3 )
    return *(_QWORD *)(a1 + 8) > v3;
  return result;
}

int __fastcall sub_40F0D0(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}

__int64 __fastcall sub_40F0E0(DIR *dirp, __int64 a2)
{
  unsigned __int64 v3; // r15
  size_t v4; // r12
  char *v5; // r14
  __int64 v6; // r13
  int *v7; // rbp
  struct dirent *v8; // rax
  struct dirent *v9; // rcx
  const char *d_name; // r8
  char v11; // al
  const char *v12; // rdi
  size_t v13; // rax
  void *v14; // r8
  size_t v15; // rdx
  struct dirent *v16; // rcx
  char *v17; // r12
  int v18; // ebx
  char *v19; // rbp
  char *v20; // rbp
  const char **v21; // r12
  const char **v22; // rbx
  const char *v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rdi
  int (*compar)(const void *, const void *); // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h]
  const char *srcb; // [rsp+18h] [rbp-60h]
  __int64 src; // [rsp+18h] [rbp-60h]
  unsigned __int64 srca; // [rsp+18h] [rbp-60h]
  __int64 v34; // [rsp+20h] [rbp-58h]
  struct dirent *v35; // [rsp+28h] [rbp-50h]
  struct dirent *v36; // [rsp+28h] [rbp-50h]
  void *v37; // [rsp+28h] [rbp-50h]
  size_t n; // [rsp+30h] [rbp-48h]
  size_t na; // [rsp+30h] [rbp-48h]
  size_t nb; // [rsp+30h] [rbp-48h]
  size_t v41; // [rsp+38h] [rbp-40h]

  a2 = (unsigned int)a2;
  compar = (int (*)(const void *, const void *))qword_41A020[(unsigned int)a2];
  if ( !dirp )
    return 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v7 = __errno_location();
  while ( 1 )
  {
    *v7 = 0;
    v8 = readdir(dirp);
    v9 = v8;
    if ( !v8 )
      break;
    d_name = v8->d_name;
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
        v12 = d_name;
        srcb = d_name;
        v35 = v9;
        v13 = strlen(d_name);
        v14 = (void *)srcb;
        v15 = v13 + 1;
        if ( compar )
        {
          v16 = v35;
          src = v4 + 1;
          if ( v4 == v34 )
          {
            if ( v5 )
            {
              if ( v4 > 0x555555555555554LL )
                goto LABEL_41;
              v34 = src + (v4 >> 1);
              a2 = 16 * v34;
            }
            else if ( v4 )
            {
              a2 = 16 * v4;
              if ( (v4 & 0x800000000000000LL) != 0 || v4 >> 60 )
LABEL_41:
                sub_411530(v12, a2, v15);
            }
            else
            {
              v34 = 8LL;
              a2 = 128LL;
              src = 1LL;
            }
            v41 = v13 + 1;
            nb = (size_t)v14;
            v27 = sub_411340(v5, a2);
            v15 = v41;
            v14 = (void *)nb;
            v5 = (char *)v27;
            v16 = v35;
          }
          n = v15;
          v36 = v16;
          v17 = &v5[16 * v4];
          *(_QWORD *)v17 = sub_411510(v14);
          v3 += n;
          *((_QWORD *)v17 + 1) = v36->d_ino;
          v4 = src;
        }
        else
        {
          a2 = v15 + v3;
          srca = v15 + v3;
          if ( v30 - v3 > v15 )
            goto LABEL_29;
          if ( __CFADD__(v15, v3) )
            goto LABEL_41;
          if ( v6 )
          {
            a2 = v15 + v3;
            if ( srca > 0x5555555555555553LL )
              goto LABEL_41;
            v25 = srca + (srca >> 1) + 1;
          }
          else
          {
            v25 = v15 + v3;
            if ( !a2 )
            {
              v30 = 128LL;
              goto LABEL_28;
            }
            if ( a2 < 0 )
              goto LABEL_41;
          }
          v30 = v25;
LABEL_28:
          na = v15;
          v37 = v14;
          v26 = sub_411340(v6, v30);
          v15 = na;
          v14 = v37;
          v6 = v26;
LABEL_29:
          a2 = (__int64)v14;
          memcpy((void *)(v6 + v3), v14, v15);
          v3 = srca;
        }
      }
    }
  }
  v18 = *v7;
  if ( *v7 )
  {
    free(v5);
    v28 = (void *)v6;
    v6 = 0LL;
    free(v28);
    *v7 = v18;
  }
  else
  {
    if ( compar )
    {
      if ( v4 )
      {
        v20 = 0LL;
        qsort(v5, v4, 0x10uLL, compar);
        v21 = (const char **)&v5[16 * v4];
        v22 = (const char **)v5;
        v6 = sub_4112E0(v3 + 1);
        do
        {
          v23 = *v22;
          v22 += 2;
          v20 = &stpcpy(&v20[v6], v23)[-v6 + 1];
          free((void *)*(v22 - 2));
        }
        while ( v22 != v21 );
        v19 = &v20[v6];
      }
      else
      {
        v6 = sub_4112E0(v3 + 1);
        v19 = (char *)v6;
      }
      free(v5);
    }
    else if ( v30 == v3 )
    {
      v6 = sub_411340(v6, v30 + 1);
      v19 = (char *)(v6 + v30);
    }
    else
    {
      v19 = (char *)(v6 + v3);
    }
    *v19 = 0;
  }
  return v6;
}

void *__fastcall sub_40F480(const char *a1, unsigned int a2)
{
  DIR *v2; // rax
  DIR *v3; // rbx
  void *v4; // rbp
  void *result; // rax
  int *v6; // rax
  int v7; // r12d
  int *v8; // rbx

  v2 = sub_40ABC0(a1);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  v4 = (void *)sub_40F0E0(v2, a2);
  if ( !closedir(v3) )
    return v4;
  v6 = __errno_location();
  v7 = *v6;
  v8 = v6;
  free(v4);
  result = 0LL;
  *v8 = v7;
  return result;
}

__int64 __fastcall sub_40F520(int *a1, const char *a2, unsigned int a3, int *a4)
{
  char v5; // r14
  int v6; // eax
  int v7; // r13d
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // r12d
  bool v12; // al
  __int64 result; // rax
  int *v14; // rax
  int v15; // ebp
  int *v16; // rbx
  __pid_t v17; // eax
  int v18; // eax

  if ( a4 )
  {
    v5 = a3;
    v6 = __open_2(a2, (a3 << 17) & 0x20000 | 0x10900);
    *a4 = v6;
    v7 = v6;
    v8 = *__errno_location();
    a4[1] = v8;
    if ( v7 < 0 )
    {
      if ( v8 != 13 )
        return (unsigned int)-1;
    }
    else if ( (v5 & 2) != 0 )
    {
      return 0;
    }
  }
  else
  {
    v7 = -1;
  }
  v9 = *a1;
  if ( (unsigned int)*a1 > 5 )
    goto LABEL_37;
  if ( ((1LL << v9) & 0x36) != 0 )
    goto LABEL_10;
  if ( ((1LL << v9) & 8) != 0 )
  {
    if ( a1[1] >= 0 )
      goto LABEL_10;
    goto LABEL_26;
  }
  if ( v9 )
LABEL_37:
    __assert_fail("0", "lib/savewd.c", 0x63u, "savewd_save");
  v10 = sub_40AE10(".", 0, a3);
  if ( v10 >= 0 )
  {
    *a1 = 1;
    a1[1] = v10;
    goto LABEL_10;
  }
  v18 = *__errno_location();
  if ( v18 != 13 && v18 != 116 )
  {
    *a1 = 4;
    a1[1] = v18;
    goto LABEL_10;
  }
  *(_QWORD *)a1 = 0xFFFFFFFF00000003LL;
LABEL_26:
  v17 = fork();
  a1[1] = v17;
  if ( v17 )
  {
    if ( v17 > 0 )
    {
      v12 = 1;
      v11 = -2;
      goto LABEL_21;
    }
    *a1 = 4;
    a1[1] = *__errno_location();
  }
LABEL_10:
  if ( v7 < 0 )
  {
    v11 = chdir(a2);
    if ( !v11 )
      goto LABEL_18;
    return v11;
  }
  v11 = fchdir(v7);
  if ( v11 )
  {
    v12 = a4 == 0LL;
    goto LABEL_21;
  }
LABEL_18:
  switch ( *a1 )
  {
    case 1:
      *a1 = 2;
      break;
    case 2:
    case 4:
    case 5:
      break;
    case 3:
      if ( a1[1] )
        __assert_fail("wd->val.child == 0", "lib/savewd.c", 0x9Bu, "savewd_chdir");
      return result;
    default:
      __assert_fail("0", "lib/savewd.c", 0x9Fu, "savewd_chdir");
  }
  v12 = a4 == 0LL;
  v11 = 0;
LABEL_21:
  if ( v7 < 0 || !v12 )
    return v11;
  v14 = __errno_location();
  v15 = *v14;
  v16 = v14;
  close(v7);
  result = v11;
  *v16 = v15;
  return result;
}

int __fastcall sub_40F770(_DWORD *a1, int a2)
{
  __pid_t v2; // ebp
  int result; // eax
  int v4; // r12d
  int *v5; // rbp
  __int16 v6; // ax
  int *v7; // rax
  int stat_loc; // [rsp+Ch] [rbp-1Ch] BYREF

  switch ( *a1 )
  {
    case 0:
    case 1:
      return 0;
    case 2:
      result = fchdir(a1[1]);
      if ( result )
      {
        v7 = __errno_location();
        v4 = *v7;
        v5 = v7;
        close(a1[1]);
        *a1 = 4;
        a1[1] = v4;
LABEL_6:
        *v5 = v4;
        return -1;
      }
      else
      {
        *a1 = 1;
      }
      return result;
    case 3:
      v2 = a1[1];
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
      a1[1] = -1;
      if ( (v6 & 0x7F) != 0 )
      {
        raise(v6 & 0x7F);
        HIBYTE(v6) = BYTE1(stat_loc);
      }
      return HIBYTE(v6);
    case 4:
      v4 = a1[1];
      v5 = __errno_location();
      goto LABEL_6;
    default:
      __assert_fail("0", "lib/savewd.c", 0xE2u, "savewd_restore");
  }
}

int __fastcall sub_40F8A0(int *a1)
{
  int result; // eax

  result = *a1;
  switch ( *a1 )
  {
    case 0:
    case 4:
      break;
    case 1:
    case 2:
      result = close(a1[1]);
      break;
    case 3:
      result = a1[1];
      if ( result >= 0 )
        __assert_fail("wd->val.child < 0", "lib/savewd.c", 0xF7u, "savewd_finish");
      return result;
    default:
      __assert_fail("0", "lib/savewd.c", 0xFBu, "savewd_finish");
  }
  *a1 = 5;
  return result;
}

__int64 __fastcall sub_40F910(int a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD, int *, __int64), __int64 a4)
{
  int v5; // ebp
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // r15
  int v9; // r14d
  int i; // eax
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // r15
  unsigned __int64 v14; // rbp
  int v15; // eax
  int v18[16]; // [rsp+28h] [rbp-40h] BYREF

  v18[0] = 0;
  if ( a1 - 1 < 0 )
    goto LABEL_18;
  v5 = a1 - 1;
  if ( **(_BYTE **)(a2 + 8LL * (a1 - 1)) == 47 )
  {
    v6 = a1 - 2;
    do
    {
      v5 = v6;
      if ( (int)v6 < 0 )
        break;
      v7 = *(_BYTE **)(a2 + 8 * v6--);
    }
    while ( *v7 == 47 );
  }
  if ( v5 <= 0 )
  {
LABEL_18:
    v9 = 0;
    v5 = 0;
  }
  else
  {
    v8 = a2;
    v9 = 0;
    for ( i = 0; ; i = v18[0] )
    {
      if ( i != 3 || v18[1] <= 0 )
      {
        v11 = a3(*(_QWORD *)v8, v18, a4);
        if ( v9 < v11 )
          v9 = v11;
      }
      if ( **(_BYTE **)(v8 + 8) != 47 )
      {
        v12 = sub_40F770(v18, v9);
        if ( v9 < v12 )
          v9 = v12;
      }
      v8 += 8LL;
      if ( v8 == a2 + 8LL * (unsigned int)(v5 - 1) + 8 )
        break;
    }
  }
  sub_40F8A0(v18);
  if ( a1 > v5 )
  {
    v13 = (_QWORD *)(a2 + 8LL * v5);
    v14 = a2 + 8 * (v5 + (unsigned __int64)(unsigned int)(a1 - 1 - v5)) + 8;
    do
    {
      v15 = a3(*v13, v18, a4);
      if ( v9 < v15 )
        v9 = v15;
      ++v13;
    }
    while ( v13 != (_QWORD *)v14 );
  }
  return (unsigned int)v9;
}

__int64 __fastcall sub_40FA60(char *filename)
{
  int v1; // ebx
  int *v2; // rax
  struct stat v4; // [rsp+0h] [rbp-98h] BYREF

  v1 = __lxstat(1, filename, &v4);
  v2 = __errno_location();
  if ( v1 && *v2 != 75 )
    return (unsigned int)-(*v2 != 2);
  *v2 = 17;
  return 0xFFFFFFFFLL;
}

int __fastcall sub_40FAC0(const char *a1)
{
  return mkdir(a1, 0x1C0u);
}

void __noreturn sub_40FAF0()
{
  __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147u, "gen_tempname_len");
}

__int64 __fastcall sub_40FB10(char *s, int a2, __int64 a3, __int64 (__fastcall *a4)(char *, __int64), size_t a5)
{
  int *v6; // r15
  size_t v7; // rax
  size_t v8; // rdx
  size_t v9; // rbx
  void *v10; // rbp
  int v11; // r12d
  char *v12; // rbx
  char *v13; // r14
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // edx
  int v18; // [rsp+8h] [rbp-60h]
  const char *v19; // [rsp+10h] [rbp-58h]
  int v20; // [rsp+10h] [rbp-58h]
  int v23; // [rsp+2Ch] [rbp-3Ch]

  v6 = __errno_location();
  v23 = *v6;
  v7 = strlen(s);
  v8 = a5 + a2;
  if ( v8 > v7 || (v9 = v7 - v8, v19 = &s[v7 - v8], a5 > strspn(v19, "X")) )
  {
    *v6 = 22;
    return (unsigned int)-1;
  }
  else
  {
    v10 = (void *)sub_413800(0LL, a5);
    if ( v10 )
    {
      v11 = 238328;
      v12 = &s[a5 + v9];
      while ( 1 )
      {
        v13 = (char *)v19;
        if ( a5 )
        {
          do
            *v13++ = byte_41A1C0[sub_413840(v10, 61LL)];
          while ( v13 != v12 );
        }
        v14 = a4(s, a3);
        if ( v14 >= 0 )
        {
          *v6 = v23;
          v15 = v23;
          goto LABEL_12;
        }
        v15 = *v6;
        if ( *v6 != 17 )
          break;
        if ( !--v11 )
        {
          sub_413960(v10);
          *v6 = 17;
          return (unsigned int)-1;
        }
      }
      v14 = -1;
LABEL_12:
      v20 = v14;
      v18 = v15;
      sub_413960(v10);
      v16 = v20;
      *v6 = v18;
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return v16;
}

__int64 __fastcall sub_40FC70(char *a1, int a2, int a3, unsigned int a4, size_t a5)
{
  int v6[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v6[0] = a3;
  if ( a4 > 2 )
    sub_40FAF0();
  return sub_40FB10(a1, a2, (__int64)v6, (__int64 (__fastcall *)(char *, __int64))*(&off_41A180 + a4), a5);
}

__int64 __fastcall sub_40FCA0(char *a1, int a2, int a3, unsigned int a4)
{
  int v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v5[0] = a3;
  if ( a4 > 2 )
    sub_40FAF0();
  return sub_40FB10(a1, a2, (__int64)v5, (__int64 (__fastcall *)(char *, __int64))*(&off_41A180 + a4), 6uLL);
}

__int64 __fastcall sub_40FCE0(char *a1, int a2, __int64 a3, __int64 (__fastcall *a4)(char *, __int64))
{
  return sub_40FB10(a1, a2, a3, a4, 6uLL);
}

__int64 __fastcall sub_40FCF0(unsigned int fd)
{
  __int64 result; // rax
  unsigned int v2; // r12d
  int *v3; // rax
  int v4; // r13d
  int *v5; // rbp

  if ( fd > 2 )
    return fd;
  v2 = sub_4143D0();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

unsigned __int64 __fastcall sub_40FD40(_QWORD *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_40FD50(_QWORD *a1, _QWORD *a2)
{
  return *a1 == *a2;
}

__int64 __fastcall sub_40FD60(char *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  signed __int64 v6; // rbp
  __int64 v7; // r14
  int v8; // r15d
  unsigned int i; // ebx
  _QWORD *v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // r9
  int v14; // edi
  __int64 v16; // rcx
  int v17; // r10d
  int v18; // edi
  int v19; // ecx
  int v20; // esi
  int v21; // r8d
  int v22; // r15d
  int v23; // r11d
  signed __int64 v24; // rax
  int v25; // eax
  int v26; // r8d
  __int64 *v27; // r9
  int v28; // eax
  int v29; // r8d
  int v30; // r10d
  char tv_sec; // al
  int tv_nsec; // ecx
  int v33; // eax
  int v34; // r10d
  int v35; // ecx
  int v36; // esi
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdi
  __int64 *v40; // [rsp+0h] [rbp-148h]
  __int64 *v41; // [rsp+0h] [rbp-148h]
  __int64 *v42; // [rsp+0h] [rbp-148h]
  bool v43; // [rsp+8h] [rbp-140h]
  int v45; // [rsp+10h] [rbp-138h]
  int v46; // [rsp+18h] [rbp-130h]
  int v47; // [rsp+18h] [rbp-130h]
  int v48; // [rsp+18h] [rbp-130h]
  int v49; // [rsp+18h] [rbp-130h]
  _QWORD *v50; // [rsp+18h] [rbp-130h]
  __int64 v52; // [rsp+30h] [rbp-118h]
  __int64 v53; // [rsp+48h] [rbp-100h]
  __int64 v54; // [rsp+50h] [rbp-F8h] BYREF
  int v55; // [rsp+58h] [rbp-F0h]
  char v56; // [rsp+5Ch] [rbp-ECh]
  __int64 v57; // [rsp+60h] [rbp-E8h]
  __int64 v58; // [rsp+68h] [rbp-E0h]
  __int64 v59; // [rsp+70h] [rbp-D8h]
  __int64 v60; // [rsp+78h] [rbp-D0h]
  struct stat stat_buf; // [rsp+80h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(a3 + 96);
  v5 = *(_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(a3 + 88);
  v7 = *(_QWORD *)(a2 + 96);
  v8 = v4;
  i = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
LABEL_12:
    if ( v6 > v5 )
      return (unsigned int)-1;
    i = 1;
    if ( v6 == v5 )
    {
      if ( v8 <= (int)v7 )
        return v8 < (int)v7;
      return (unsigned int)-1;
    }
    return i;
  }
  v43 = v5 == v6 && (_DWORD)v7 == (_DWORD)v4;
  if ( v43 )
    return 0;
  if ( v6 - 1 > v5 )
    return (unsigned int)-1;
  if ( v5 - 1 <= v6 )
  {
    v10 = (_QWORD *)qword_621B20;
    if ( !qword_621B20 )
    {
      v10 = sub_40BB50(
              16LL,
              0LL,
              (unsigned __int64 (__fastcall *)(__int64, unsigned __int64))sub_40FD40,
              (bool (__fastcall *)(__int64, __int64))sub_40FD50,
              (__int64)free);
      qword_621B20 = (__int64)v10;
      if ( !v10 )
        goto LABEL_21;
    }
    v11 = (_QWORD *)qword_621B18;
    if ( !qword_621B18 )
    {
      v50 = v10;
      v38 = malloc(0x10uLL);
      v11 = v38;
      qword_621B18 = (__int64)v38;
      if ( !v38 )
      {
        v39 = qword_621B20;
        goto LABEL_59;
      }
      *((_DWORD *)v38 + 2) = 2000000000;
      v10 = v50;
      *((_BYTE *)v38 + 12) = 0;
    }
    *v11 = *(_QWORD *)a2;
    v12 = sub_40C2F0((__int64)v10, (__int64)v11);
    v13 = (__int64 *)v12;
    if ( v12 )
    {
      if ( qword_621B18 == v12 )
        qword_621B18 = 0LL;
LABEL_10:
      v14 = *((_DWORD *)v13 + 2);
      v46 = v14;
      if ( *((_BYTE *)v13 + 12) )
      {
        v6 = ~(v14 == 2000000000) & (unsigned __int64)v6;
        v8 = v4 - (int)v4 % v14;
        goto LABEL_12;
      }
LABEL_22:
      v16 = *(_QWORD *)(a2 + 112);
      v52 = *(_QWORD *)(a2 + 80);
      v17 = (int)v16 / 10;
      v18 = (int)v7 / 10;
      if ( ((int)v7 % 10) | ((int)v52 % 10) | ((int)v16 % 10) )
      {
LABEL_55:
        *((_DWORD *)v13 + 2) = i;
        *((_BYTE *)v13 + 12) = 1;
        goto LABEL_12;
      }
      v19 = (int)v52 / 10;
      v20 = v17;
      v53 = *(_QWORD *)(a2 + 72);
      if ( v46 <= 10 )
      {
        *((_DWORD *)v13 + 2) = 10;
        v24 = v6;
        v21 = 10;
      }
      else
      {
        v21 = 10;
        if ( ((int)v7 / 10 % 10) | (v17 % 10) | ((int)v52 / 10 % 10) )
        {
          *((_DWORD *)v13 + 2) = 10;
          v24 = v6;
        }
        else
        {
          v22 = 8;
          do
          {
            v23 = 10 * v21;
            v21 = v23;
            v19 /= 10;
            v20 /= 10;
            v18 /= 10;
            if ( v23 >= v46 || (v18 % 10) | (v20 % 10) | (v19 % 10) )
            {
              v43 = v23 == 2000000000;
              v8 = v4;
              *((_DWORD *)v13 + 2) = v23;
              v24 = v6 & ~(v23 == 2000000000);
              goto LABEL_31;
            }
            --v22;
          }
          while ( v22 );
          v8 = v4;
          if ( ((*(_BYTE *)(a2 + 104) | (unsigned __int8)(v5 | v53)) & 1) != 0 )
          {
            *((_DWORD *)v13 + 2) = 1000000000;
            v24 = v6;
            v21 = 1000000000;
          }
          else
          {
            *((_DWORD *)v13 + 2) = 2000000000;
            v21 = 2000000000;
            v24 = v6 & 0xFFFFFFFFFFFFFFFELL;
            v43 = 1;
          }
        }
      }
LABEL_31:
      if ( v5 > v6 || (int)v7 >= (int)v4 && v5 == v6 )
        return i;
      if ( v5 < v24 || v5 == v24 && (int)v4 - v8 % v21 > (int)v7 )
        return (unsigned int)-1;
      v47 = v21;
      v57 = v53;
      v58 = (int)v52;
      v59 = v5 | v43;
      v60 = (int)(v21 / 9u + v7);
      v40 = v13;
      if ( (*(_DWORD *)(a2 + 24) & 0xF000) == 40960 )
      {
        v25 = sub_410AB0(a1);
        v27 = v40;
        v26 = v47;
      }
      else
      {
        v25 = sub_410AA0(a1);
        v26 = v47;
        v27 = v40;
      }
      if ( v25 )
        return (unsigned int)-2;
      v48 = v26;
      v41 = v27;
      if ( (*(_DWORD *)(a2 + 24) & 0xF000) == 40960 )
      {
        v28 = __lxstat(1, a1, &stat_buf);
        v13 = v41;
        v29 = v48;
      }
      else
      {
        v28 = __xstat(1, a1, &stat_buf);
        v29 = v48;
        v13 = v41;
      }
      v30 = v28;
      tv_sec = stat_buf.st_mtim.tv_sec;
      tv_nsec = stat_buf.st_mtim.tv_nsec;
      if ( v30 | v5 ^ stat_buf.st_mtim.tv_sec | stat_buf.st_mtim.tv_nsec ^ (int)v7 )
      {
        v60 = (int)v7;
        v59 = v5;
        v33 = *(_DWORD *)(a2 + 24);
        v49 = v29;
        v45 = v30;
        v42 = v13;
        if ( (v33 & 0xF000) == 40960 )
        {
          sub_410AB0(a1);
          v13 = v42;
          v34 = v45;
          v29 = v49;
        }
        else
        {
          sub_410AA0(a1);
          v29 = v49;
          v34 = v45;
          v13 = v42;
        }
        if ( v34 )
          return (unsigned int)-2;
        tv_sec = stat_buf.st_mtim.tv_sec;
        tv_nsec = stat_buf.st_mtim.tv_nsec;
      }
      v35 = 1000000000 * (tv_sec & 1) + tv_nsec;
      if ( v35 == 10 * (v35 / 10) )
      {
        if ( v29 != 10 )
        {
          v36 = 9;
          for ( i = 10; i != v29; i *= 10 )
          {
            v35 /= 10;
            if ( v35 != 10 * (v35 / 10) )
              break;
            if ( !--v36 )
            {
              v37 = -2LL;
              i = 2000000000;
              goto LABEL_54;
            }
          }
          v37 = ~(i == 2000000000);
          goto LABEL_54;
        }
        i = 10;
      }
      v37 = -1LL;
LABEL_54:
      v6 &= v37;
      v8 = v4 - v8 % (int)i;
      goto LABEL_55;
    }
    v39 = qword_621B20;
    if ( !qword_621B20 )
    {
LABEL_21:
      v55 = 2000000000;
      v13 = &v54;
      v56 = 0;
      v46 = 2000000000;
      goto LABEL_22;
    }
LABEL_59:
    v54 = *(_QWORD *)a2;
    v13 = (__int64 *)sub_40B8E0(v39, (__int64)&v54);
    if ( v13 )
      goto LABEL_10;
    goto LABEL_21;
  }
  return i;
}

__int64 __fastcall sub_4104D0(_QWORD *a1, struct timespec **a2)
{
  struct timespec *v2; // rbx
  __syscall_slong_t tv_nsec; // rax
  __syscall_slong_t v4; // rdx
  __syscall_slong_t v5; // rax
  __int64 result; // rax
  __syscall_slong_t v7; // rax

  v2 = *a2;
  tv_nsec = (*a2)->tv_nsec;
  v4 = (*a2)[1].tv_nsec;
  if ( tv_nsec == 1073741822 )
  {
    result = 1LL;
    if ( v4 == 1073741822 )
      return result;
    v7 = a1[10];
    v2->tv_sec = a1[9];
    v2->tv_nsec = v7;
  }
  else if ( tv_nsec == 0x3FFFFFFF )
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
    v5 = a1[12];
    v2[1].tv_sec = a1[11];
    v2[1].tv_nsec = v5;
    return 0LL;
  }
  result = 0LL;
  if ( v4 == 0x3FFFFFFF )
  {
    sub_412F80(v2 + 1);
    return 0LL;
  }
  return result;
}

__int64 __fastcall sub_4105A0(_QWORD *a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // rdx
  int v3; // ecx
  int v4; // r10d

  v1 = a1[1];
  if ( v1 - 1073741822 > 1 && v1 > 0x3B9AC9FF || (v2 = a1[3], v2 - 1073741822 > 1) && v2 > 0x3B9AC9FF )
  {
    *__errno_location() = 22;
    return 0xFFFFFFFFLL;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    if ( v1 - 1073741822 <= 1 )
    {
      *a1 = 0LL;
      v4 = 1;
      v3 = v1 == 1073741822;
    }
    if ( v2 - 1073741822 <= 1 )
    {
      a1[2] = 0LL;
      v4 = 1;
      v3 += v2 == 1073741822;
    }
    return v4 + (unsigned int)(v3 == 1);
  }
}

__int64 __fastcall sub_410660(int fd, char *filename, const __m128i *a3)
{
  __m128i v5; // xmm1
  int v6; // r13d
  struct timespec *v7; // rsi
  unsigned int v8; // r12d
  bool v9; // zf
  __syscall_slong_t v11; // rdi
  const __m128i *p_tvp; // r13
  __syscall_slong_t v13; // rsi
  struct timeval *v14; // rdx
  struct utimbuf *p_file_times; // rsi
  __time_t v16; // rax
  bool v18; // al
  __time_t tv_sec; // rdx
  bool v20; // bp
  bool v21; // r14
  __time_t v22; // rax
  __m128i si128; // xmm3
  bool v24; // dl
  bool v25; // r14
  __syscall_slong_t tv_nsec; // rax
  struct timespec *times; // [rsp+8h] [rbp-120h] BYREF
  __int128 v28[2]; // [rsp+10h] [rbp-118h] BYREF
  struct timeval tvp; // [rsp+30h] [rbp-F8h] BYREF
  __time_t v30; // [rsp+40h] [rbp-E8h]
  __syscall_slong_t v31; // [rsp+48h] [rbp-E0h]
  struct utimbuf file_times; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v33; // [rsp+60h] [rbp-C8h]
  struct stat stat_buf; // [rsp+70h] [rbp-B8h] BYREF

  if ( a3 )
  {
    v5 = _mm_loadu_si128(a3 + 1);
    times = (struct timespec *)v28;
    v28[0] = (__int128)_mm_loadu_si128(a3);
    v28[1] = (__int128)v5;
    v6 = sub_4105A0(v28);
    if ( v6 < 0 )
      return (unsigned int)-1;
  }
  else
  {
    times = 0LL;
    v6 = 0;
  }
  if ( fd < 0 && !filename )
  {
    *__errno_location() = 9;
    return (unsigned int)-1;
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
      return (unsigned int)-1;
    v7 = times;
    if ( times->tv_nsec == 1073741822 )
    {
      tv_nsec = stat_buf.st_atim.tv_nsec;
      v6 = 3;
      times->tv_sec = stat_buf.st_atim.tv_sec;
      v7->tv_nsec = tv_nsec;
    }
    else
    {
      v6 = 3;
      if ( times[1].tv_nsec == 1073741822 )
      {
        tv_sec = stat_buf.st_mtim.tv_sec;
        times[1].tv_nsec = stat_buf.st_mtim.tv_nsec;
        v7[1].tv_sec = tv_sec;
      }
    }
  }
  else
  {
    v7 = times;
  }
  if ( fd < 0 )
  {
    v8 = utimensat(-100, filename, v7, 0);
    v9 = v8 == 0;
    if ( (int)v8 > 0 )
      goto LABEL_10;
  }
  else
  {
    v8 = futimens(fd, v7);
    v9 = v8 == 0;
    if ( (int)v8 > 0 )
    {
LABEL_10:
      *__errno_location() = 38;
      goto LABEL_11;
    }
  }
  if ( v9 || *__errno_location() != 38 )
  {
    dword_621B2C = 1;
    return v8;
  }
LABEL_11:
  dword_621B2C = -1;
  dword_621B28 = -1;
  if ( !v6 )
    goto LABEL_18;
  if ( v6 != 3 && (fd < 0 ? __xstat(1, filename, &stat_buf) != 0 : __fxstat(1, fd, &stat_buf) != 0) )
    return (unsigned int)-1;
  if ( !times )
    goto LABEL_26;
  v8 = 0;
  if ( (unsigned __int8)sub_4104D0(&stat_buf, &times) )
    return v8;
LABEL_18:
  if ( times )
  {
    v11 = times->tv_nsec;
    p_tvp = (const __m128i *)&tvp;
    tvp.tv_sec = times->tv_sec;
    v13 = times[1].tv_nsec;
    v30 = times[1].tv_sec;
    tvp.tv_usec = v11 / 1000;
    v14 = &tvp;
    v31 = v13 / 1000;
    if ( fd >= 0 )
      goto LABEL_20;
    return (unsigned int)futimesat(-100, filename, v14);
  }
LABEL_26:
  p_tvp = 0LL;
  v14 = 0LL;
  if ( fd < 0 )
    return (unsigned int)futimesat(-100, filename, v14);
LABEL_20:
  v8 = futimesat(fd, 0LL, v14);
  if ( !v8 )
  {
    if ( !p_tvp )
      return v8;
    v20 = p_tvp->m128i_i64[1] > 499999;
    v21 = p_tvp[1].m128i_i64[1] > 499999;
    if ( p_tvp->m128i_i64[1] <= 499999 && p_tvp[1].m128i_i64[1] <= 499999 )
      return v8;
    if ( __fxstat(1, fd, &stat_buf) )
      return v8;
    v22 = stat_buf.st_atim.tv_sec - p_tvp->m128i_i64[0];
    si128 = _mm_load_si128(p_tvp + 1);
    v24 = stat_buf.st_mtim.tv_sec - p_tvp[1].m128i_i64[0] == 1;
    file_times = (struct utimbuf)_mm_load_si128(p_tvp);
    v33 = si128;
    v25 = v24 && v21;
    if ( v22 == 1 && v20 && !stat_buf.st_atim.tv_nsec )
    {
      file_times.modtime = 0LL;
      if ( !v25 || stat_buf.st_mtim.tv_nsec )
        goto LABEL_48;
    }
    else if ( !v25 || stat_buf.st_mtim.tv_nsec )
    {
      return 0;
    }
    v33.m128i_i64[1] = 0LL;
LABEL_48:
    futimesat(fd, 0LL, (const struct timeval *)&file_times);
    return 0;
  }
  v8 = -1;
  if ( filename )
  {
    p_file_times = 0LL;
    if ( times )
    {
      v16 = times[1].tv_sec;
      p_file_times = &file_times;
      file_times.actime = times->tv_sec;
      file_times.modtime = v16;
    }
    return (unsigned int)utime(filename, p_file_times);
  }
  return v8;
}

__int64 __fastcall sub_410AA0(char *filename, const __m128i *a2)
{
  return sub_410660(-1, filename, a2);
}

__int64 __fastcall sub_410AB0(char *filename, const __m128i *a2)
{
  __m128i v2; // xmm1
  int v3; // ebx
  struct timespec *v4; // rdx
  int v5; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ebp
  __int64 result; // rax
  __time_t tv_sec; // rcx
  __syscall_slong_t tv_nsec; // rax
  struct timespec *times; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v12[2]; // [rsp+10h] [rbp-C8h] BYREF
  struct stat stat_buf; // [rsp+30h] [rbp-A8h] BYREF

  if ( a2 )
  {
    v2 = _mm_loadu_si128(a2 + 1);
    times = (struct timespec *)v12;
    v12[0] = (__int128)_mm_loadu_si128(a2);
    v12[1] = (__int128)v2;
    v3 = sub_4105A0(v12);
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
        tv_nsec = stat_buf.st_atim.tv_nsec;
        v3 = 3;
        times->tv_sec = stat_buf.st_atim.tv_sec;
        v4->tv_nsec = tv_nsec;
      }
      else
      {
        v3 = 3;
        if ( times[1].tv_nsec == 1073741822 )
        {
          tv_sec = stat_buf.st_mtim.tv_sec;
          times[1].tv_nsec = stat_buf.st_mtim.tv_nsec;
          v4[1].tv_sec = tv_sec;
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
            return (unsigned int)sub_410660(-1, filename, (const __m128i *)times);
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
      if ( (unsigned __int8)sub_4104D0(&stat_buf, &times) )
        return v7;
      goto LABEL_12;
    }
LABEL_17:
    if ( __lxstat(1, filename, &stat_buf) )
      return (unsigned int)-1;
    goto LABEL_12;
  }
  dword_621B2C = 1;
  result = v6;
  dword_621B28 = 1;
  return result;
}

__int64 __fastcall sub_410D00(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_410D00(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_411100(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_410D00(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_410D00(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_411160(
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
        return sub_410D00(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_410D00(a1, a2, a3, a4, v15, i);
}

int sub_411220()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_417166, "https://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

char sub_4112A0()
{
  char result; // al
  __uid_t v1; // eax

  if ( byte_621B31 )
    return byte_621B30;
  v1 = geteuid();
  byte_621B31 = 1;
  result = v1 == 0;
  byte_621B30 = result;
  return result;
}

void *__fastcall sub_4112E0(size_t a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // rdx

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_411530(a1, a2, v3);
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_411330(size_t a1, __int64 a2)
{
  return sub_4112E0(a1, a2);
}

void *__fastcall sub_411340(void *a1, size_t a2)
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
        sub_411530(a1, a2, v3);
    }
  }
  return result;
}

void *__fastcall sub_411490(size_t n, __int64 a2)
{
  void *v2; // rax

  v2 = sub_4112E0(n, a2);
  return memset(v2, 0, n);
}

__int64 __fastcall sub_4114B0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_411530(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_4114E0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4112E0(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_411510(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_4114E0(src, v1 + 1);
}

void __noreturn sub_411530()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_411570(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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

__int64 sub_4119A0()
{
  unsigned int v0; // ebx
  __ssize_t v1; // rax
  char *v2; // rdi
  char *v3; // rax
  char *response; // [rsp+0h] [rbp-18h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-10h] BYREF

  v0 = 0;
  response = 0LL;
  n[0] = 0LL;
  v1 = __getdelim(&response, n, 10, stdin);
  if ( v1 > 0 )
  {
    v2 = response;
    v3 = &response[v1 - 1];
    if ( *v3 == 10 )
    {
      *v3 = 0;
      v2 = response;
    }
    LOBYTE(v0) = rpmatch(v2) > 0;
  }
  free(response);
  return v0;
}

__int64 __fastcall sub_411A10(int a1, int a2, __int64 a3, int a4, int a5, int a6)
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
    if ( dword_621B34 < 0 )
    {
      v6 = sub_411A10(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_621B34 == -1 )
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
        v6 = sub_411A10(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_621B34 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_621B34 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_411B50(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_411BC0(stream, 0LL, 1LL);
  return fflush(stream);
}

__int64 __fastcall sub_411B90(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 40) <= *(_QWORD *)(a1 + 32) )
  {
    result = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      result += *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 72);
  }
  return result;
}

int __fastcall sub_411BC0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_411C20(__int64 a1, int *a2)
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

__int64 __fastcall sub_411D00(
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

__int64 __fastcall sub_412320(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_411C20((__int64)a2, a7);
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
        sub_411C20((__int64)a2, a7);
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
            return (unsigned int)sub_411D00(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_411D00(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_411D00(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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

__int64 __fastcall sub_4128F0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_621B40 = dword_61F4DC;
  dword_621B44 = dword_61F4D8;
  result = sub_412320(a1, a2, a3, a4, a5, a6, &dword_621B40, a7);
  dword_61F4DC = dword_621B40;
  qword_621B80 = (void *)qword_621B50;
  dword_61F4D4 = dword_621B48;
  return result;
}

__int64 __fastcall sub_412950(int a1, __int64 *a2, const char *a3)
{
  return sub_4128F0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_412970(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_4128F0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_412990(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_412320(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4129B0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_4128F0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_4129D0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_412320(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_4129F0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_412FC0(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

__int64 __fastcall sub_412A70(FILE *s, __int64 a2, __int64 a3)
{
  char *v3; // rax
  size_t v4; // rbx
  char *v5; // rbp
  int *v7; // rax
  int v8; // r13d
  int *v9; // r12
  size_t n; // [rsp+8h] [rbp-800h] BYREF
  char v11[2040]; // [rsp+10h] [rbp-7F8h] BYREF

  n = 2000LL;
  v3 = (char *)sub_414470(v11, &n, a2, a3);
  v4 = n;
  if ( !v3 )
    goto LABEL_10;
  v5 = v3;
  if ( fwrite(v3, 1uLL, n, s) >= v4 )
  {
    if ( v5 != v11 )
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
  if ( v5 != v11 )
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
  if ( a2 == -1 )
    return chmod(a1, a3);
  else
    return fchmod(a2, a3);
}

__int64 __fastcall sub_412B60(__mode_t *a1, const char *a2, int a3)
{
  return (unsigned int)-(sub_412B40(a2, a3, *a1) != 0);
}

void __noreturn sub_412B90()
{
  sub_4046F0(1);
}

__int64 __fastcall sub_412BA0(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_412CC0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  _BYTE *v4; // rbp
  _BYTE *v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_40EC30(1LL, a1);
  v5 = sub_40E920(0LL, 8, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_412D40(__int64 *a1, char *a2, size_t a3)
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
      v11 = sub_40EC50(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = sub_40EC50(i);
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

__int64 __fastcall sub_412E60(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_412BA0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_412CC0(a1, (__int64)a2, result);
    sub_412D40((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_412ED0(void *s1, __int64 *a2, char *a3, size_t a4)
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

__int64 __fastcall sub_412F20(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

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
    return 0xFFFFFFFFLL;
  }
  if ( !(_DWORD)result )
    return result;
  if ( v1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)-(*__errno_location() != 9);
}

int __fastcall sub_412F80(struct timespec *tp)
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

bool __fastcall sub_412FC0(int a1)
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

unsigned __int64 __fastcall sub_413020(char *a1, unsigned __int64 a2)
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

const char *sub_413060()
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
  v1 = qword_621B78;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_621B78 )
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
          qword_621B78 = v1;
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
                sub_4143E0(v60);
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
            sub_4143E0(v39);
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

__int64 __fastcall sub_4135D0(int fd, char *file, int a3, __uid_t a4, __gid_t a5, int a6, int a7)
{
  unsigned int v11; // ebx
  __mode_t st_mode; // ecx
  int v13; // eax
  int v14; // edx
  int *v16; // rax
  int v17; // r12d
  int *v18; // rbp
  int v19; // esi
  int v20; // eax
  __mode_t v22; // [rsp+Ch] [rbp-CCh]
  __mode_t v23; // [rsp+Ch] [rbp-CCh]
  struct stat stat_buf; // [rsp+10h] [rbp-C8h] BYREF

  if ( fd < 0 )
  {
    v11 = __xstat(1, file, &stat_buf);
    if ( v11 )
      return v11;
    st_mode = stat_buf.st_mode;
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
    {
      v11 = -1;
      *__errno_location() = 20;
      return v11;
    }
  }
  else
  {
    v11 = __fxstat(1, fd, &stat_buf);
    if ( v11 )
      goto LABEL_23;
    st_mode = stat_buf.st_mode;
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
      return v11;
    }
  }
  if ( (a4 == -1 || stat_buf.st_uid == a4) && (a5 == -1 || stat_buf.st_gid == a5) )
    goto LABEL_18;
  if ( fd >= 0 )
  {
    v23 = st_mode;
    v20 = fchown(fd, a4, a5);
    st_mode = v23;
    v11 = v20;
    if ( !v20 )
      goto LABEL_10;
LABEL_23:
    v18 = __errno_location();
    v17 = *v18;
    goto LABEL_15;
  }
  v22 = st_mode;
  if ( a3 == -1 )
    v13 = chown(file, a4, a5);
  else
    v13 = lchown(file, a4, a5);
  st_mode = v22;
  v11 = v13;
  if ( !v13 )
  {
LABEL_10:
    if ( (st_mode & 0x49) != 0 )
    {
      v14 = st_mode & 0xC00;
      goto LABEL_19;
    }
LABEL_18:
    v14 = 0;
LABEL_19:
    if ( ((v14 | a6 ^ st_mode) & a7) != 0 )
    {
      v19 = a6 | (unsigned __int16)st_mode & (unsigned __int16)~(_WORD)a7 & 0xFFF;
      if ( fd < 0 )
        return (unsigned int)chmod(file, v19);
      v11 = fchmod(fd, v19);
      if ( v11 )
        goto LABEL_23;
    }
    else
    {
      v11 = 0;
      if ( fd < 0 )
        return v11;
    }
    return (unsigned int)close(fd);
  }
  return v11;
}

_QWORD *__fastcall sub_4137D0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = sub_4112E0(0x18uLL, a2);
  *result = a1;
  result[2] = 0LL;
  result[1] = 0LL;
  return result;
}

_QWORD *__fastcall sub_413800(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  v2 = sub_413A20();
  result = 0LL;
  if ( v2 )
  {
    result = sub_4112E0(0x18uLL, a2);
    *result = v2;
    result[2] = 0LL;
    result[1] = 0LL;
  }
  return result;
}

unsigned __int64 __fastcall sub_413840(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx
  char v13[64]; // [rsp+8h] [rbp-40h] BYREF

  v2 = a2 + 1;
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  while ( 1 )
  {
    if ( v6 >= a2 )
    {
      if ( v6 == a2 )
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
      while ( a2 > v8 );
      sub_413D30(v4, v13, v9);
      v10 = v13;
      do
      {
        v11 = (unsigned __int8)*v10++;
        v6 = (v6 << 8) + 255;
        v5 = v11 + (v5 << 8);
      }
      while ( a2 > v6 );
      if ( v6 == a2 )
      {
LABEL_11:
        a1[2] = 0LL;
        a1[1] = 0LL;
        return v5;
      }
    }
    v7 = (v6 - a2) % v2;
    if ( v5 <= v6 - v7 )
      break;
    v6 = v7 - 1;
    v5 %= v2;
  }
  a1[1] = v5 / v2;
  v5 %= v2;
  a1[2] = (v6 - a2) / v2;
  return v5;
}

void __fastcall sub_413940(void *ptr)
{
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
}

__int64 __fastcall sub_413960(void **ptr)
{
  unsigned int v1; // r12d
  int *v2; // rax
  int v3; // r13d
  int *v4; // rbp

  v1 = sub_413E90(*ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
  *v4 = v3;
  return v1;
}

void __fastcall __noreturn sub_4139C0(__int64 a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

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

void __fastcall __noreturn sub_4139C0(__int64 a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

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

__m128i *__fastcall sub_413A20(__int64 a1, unsigned __int64 a2)
{
  FILE *v2; // r13
  __m128i *v3; // rax
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
    v5 = (__m128i *)sub_4112E0(0x1038uLL, 0LL);
    v5->m128i_i64[0] = 0LL;
    v5->m128i_i64[1] = (__int64)sub_4139C0;
    v5[1].m128i_i64[0] = 0LL;
    return v5;
  }
  if ( !a1 )
  {
    v7 = (__m128i *)sub_4112E0(0x1038uLL, a2);
    v7->m128i_i64[0] = 0LL;
    v5 = v7;
    v8 = v7 + 2;
    v7->m128i_i64[1] = (__int64)sub_4139C0;
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
    sub_414190(v8);
    return v5;
  }
  v2 = (FILE *)sub_415F90(a1, "rb");
  if ( !v2 )
    return 0LL;
  v3 = (__m128i *)sub_4112E0(0x1038uLL, (__int64)"rb");
  v4 = 4096LL;
  v3->m128i_i64[0] = (__int64)v2;
  if ( a2 <= 0x1000 )
    v4 = a2;
  v3->m128i_i64[1] = (__int64)sub_4139C0;
  v5 = v3;
  v3[1].m128i_i64[0] = a1;
  setvbuf(v2, &v3[1].m128i_i8[8], 0, v4);
  return v5;
}

__int64 __fastcall sub_413D30(__int64 a1, char *a2, size_t a3)
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
        v15 = a2;
        a2 += 2048;
        result = sub_413EE0(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_413E90(FILE **ptr)
{
  FILE *v1; // rbp

  v1 = *ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    return sub_4143E0(v1);
  else
    return 0LL;
}

unsigned __int64 *__fastcall sub_413EE0(unsigned __int64 *a1, unsigned __int64 *a2)
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

unsigned __int64 __fastcall sub_414190(__int64 *a1)
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

__int64 __fastcall sub_4143D0(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  return sub_411A10(a1, 0, 3LL, a4, a5, a6);
}

int __fastcall sub_4143E0(FILE *stream)
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
  if ( !sub_411B50(stream) )
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

void __fastcall sub_414460(_DWORD *a1)
{
  *a1 |= 0x20u;
}

char *__fastcall sub_414470(void *a1, size_t *a2, _BYTE *a3, __int64 a4, double a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  __int64 *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  _BYTE *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  __int64 v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // r11d
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  unsigned __int64 v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  int v80; // ebx
  __int64 v81; // rax
  char *v82; // rdi
  unsigned __int128 v83; // fst7
  __int64 v84; // rax
  char *v85; // rdi
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  __int64 v149; // [rsp-8h] [rbp-718h]
  int *v150; // [rsp+10h] [rbp-700h]
  int *v151; // [rsp+18h] [rbp-6F8h]
  __int64 v152; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v153; // [rsp+28h] [rbp-6E8h]
  char *v154; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v156; // [rsp+40h] [rbp-6D0h]
  void *v157; // [rsp+48h] [rbp-6C8h]
  char *v158; // [rsp+50h] [rbp-6C0h]
  __int64 v159; // [rsp+58h] [rbp-6B8h]
  _BYTE *v160; // [rsp+60h] [rbp-6B0h]
  __int64 *v161; // [rsp+68h] [rbp-6A8h]
  long double v162; // [rsp+70h] [rbp-6A0h]
  void *v163; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v165; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v166; // [rsp+98h] [rbp-678h]
  unsigned int v167; // [rsp+9Ch] [rbp-674h]
  char v168[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v169; // [rsp+A8h] [rbp-668h]
  _BYTE v170[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v171; // [rsp+190h] [rbp-580h] BYREF
  void *v172; // [rsp+198h] [rbp-578h]
  __int64 v173; // [rsp+1A0h] [rbp-570h]
  __int64 v174; // [rsp+1A8h] [rbp-568h]
  _BYTE v175[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v176[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v156 = a2;
  if ( (int)sub_416250(a3, &v171, v168) < 0 )
    return 0LL;
  if ( (int)sub_416030(a4, v168) >= 0 )
  {
    v7 = v173 + 7;
    if ( (unsigned __int64)(v173 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v174, v7);
    v8 = v174 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v161 = &v152;
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = (__int64 *)malloc(v9);
      v161 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v156;
    v12 = (char *)v172;
    v13 = a3;
    v14 = (char *)src;
    v159 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v172;
    if ( *(_BYTE **)v172 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (void *)(v16 - v13);
    v18 = (unsigned __int64)v17 + v15;
    v19 = (size_t)v17 + v15;
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v160 = v13;
          LOBYTE(v162) = v20;
          v163 = v17;
          v21 = (char *)malloc(v11);
          v17 = v163;
          v13 = v160;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v162) )
          {
            *(_QWORD *)&v162 = v160;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = v163;
            v13 = *(_BYTE **)&v162;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v162 = v13;
          v163 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = v163;
          v13 = *(_BYTE **)&v162;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)v17 + v15;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v171 != v159 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_238;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v162 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v163) = v14 == src;
          v95 = (char *)malloc(v11);
          if ( !v95 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v163 )
            v14 = (char *)memcpy(v95, v14, v19);
          else
            v14 = v95;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v169;
      v28 = (long double *)((char *)v169 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v163) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v163 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v163 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v66 + 1;
                  v127 = -1LL;
                  v128 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v127 = 10 * v50;
                  v76 = __CFADD__(v127, v128);
                  v50 = v127 + v128;
                  v66 = v126;
                  if ( v76 )
                  {
                    if ( v67 == v126 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v163;
                      goto LABEL_82;
                    }
                    while ( *v66++ != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v169 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v129 = v51 + 1;
                v55 = 0LL;
                if ( v52 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v133 = 10 * v55;
                    v76 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v55 = v134;
                    if ( v76 )
                    {
                      if ( v52 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v52 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v54 = (char *)v169 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v56;
                  if ( v50 >= v56 )
                    v86 = v50;
                  v76 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v163 = v87;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v176;
                  }
                  else
                  {
                    v157 = (void *)v50;
                    v158 = (char *)v55;
                    LODWORD(v160) = v68;
                    v162 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v68 = (int)v160;
                    _FST7 = v162;
                    v89 = v88;
                    v55 = (unsigned __int64)v158;
                    v50 = (unsigned __int64)v157;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v166;
                  LOBYTE(v91) = v166;
                  HIBYTE(v91) = BYTE1(v166) | 3;
                  LOWORD(v166) = v91;
                  __asm { fxam }
                  if ( (v62 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v68 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v68 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v12[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || v55 )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v158;
                        v97 = *(char **)&v162;
                        v124 = *v122;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || (v105 = v92 + 1, v55) )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v158;
                        v105 = *(char **)&v162;
                        v140 = *v138;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v12[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v152) = v90;
                          v153 = v50;
                          v154 = v92 + 2;
                          v157 = v89;
                          LODWORD(v158) = v68;
                          v160 = (_BYTE *)v55;
                          *(_QWORD *)&v162 = v55 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v162;
                          v118 = (__int64)v160;
                          v119 = *v116;
                          LOBYTE(v68) = (_BYTE)v158;
                          v89 = (char *)v157;
                          v97 = v154;
                          v50 = v153;
                          LOWORD(v90) = WORD2(v152);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v154) = v90;
                          v157 = (void *)v50;
                          v158 = v92 + 2;
                          v160 = v89;
                          LODWORD(v162) = v68;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v162);
                          v89 = v160;
                          v148 = *v147;
                          v97 = v158;
                          v50 = (unsigned __int64)v157;
                          LOWORD(v90) = (_WORD)v154;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v162 = v92 + 2;
                  v135 = v12[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v68 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v55) )
                  {
                    HIDWORD(v152) = v90;
                    v153 = v50;
                    v154 = v89;
                    v157 = (void *)v55;
                    LODWORD(v158) = v68;
                    v160 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v157;
                    v136 = (__int64)v160;
                    v145 = *v143;
                    LOBYTE(v68) = (_BYTE)v158;
                    v89 = v154;
                    v50 = v153;
                    LOWORD(v90) = WORD2(v152);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v12[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v162;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v166) = v90;
                  v98 = v97 - v89;
                  if ( v50 > v97 - v89 )
                  {
                    v99 = v50 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v68 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v68 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v163 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v19;
                  v15 = v98 + v19;
                  if ( v11 - v19 <= v98 )
                  {
                    if ( __CFADD__(v98, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v103 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v11 = v98 + v19;
                      }
LABEL_280:
                      if ( !v14 || v14 == src )
                      {
                        LOBYTE(v160) = v14 == src;
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v114 = (char *)malloc(v11);
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v160 )
                        {
                          v115 = (char *)memcpy(v114, v14, v19);
                          v89 = (char *)v163;
                          v98 = *(_QWORD *)&v162;
                          v14 = v115;
                        }
                        else
                        {
                          v14 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v104 = (char *)realloc(v14, v11);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        v14 = v104;
                      }
                    }
                  }
                  v163 = v89;
                  memcpy(&v14[v19], v89, v98);
                  if ( v163 != v176 )
                    free(v163);
                  goto LABEL_110;
                }
LABEL_375:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = (char *)v161 + 1;
        *(_BYTE *)v161 = 37;
        if ( (v31 & 1) != 0 )
        {
          v33 = (__int64)v161;
          *((_BYTE *)v161 + 1) = 39;
          v32 = (char *)(v33 + 2);
        }
        if ( (v31 & 2) != 0 )
          *v32++ = 45;
        if ( (v31 & 4) != 0 )
          *v32++ = 43;
        if ( (v31 & 8) != 0 )
          *v32++ = 32;
        if ( (v31 & 0x10) != 0 )
          *v32++ = 35;
        if ( (v31 & 0x40) != 0 )
          *v32++ = 73;
        if ( (v31 & 0x20) != 0 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        if ( (unsigned int)v163 <= 0x10 )
        {
          v38 = 1LL << (char)v163;
          if ( ((1LL << (char)v163) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v38 & 0x1000) != 0 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( (v38 & 0x600) == 0 )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v160) = 1;
            v166 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v160) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v160;
          *(&v166 + (unsigned int)v160) = *((_DWORD *)v43 + 4);
          LODWORD(v160) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v162 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v172 != v175 )
                    free(v172);
                  if ( v169 != v170 )
                    free(v169);
                  v14 = 0LL;
                  **(_DWORD **)&v162 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v162 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v162) = v14 == src;
            v94 = (char *)malloc(v11);
            v46 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v162) )
              v46 = (char *)memcpy(v94, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v158 = v46;
            v47 = __errno_location();
            v48 = v158;
            v158 = v32;
            *(_QWORD *)&v162 = v47;
            LODWORD(v154) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v165 = -1;
              **(_DWORD **)&v162 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (int)v163 )
              {
                case 1:
                  v72 = (unsigned int)*((char *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v72 = *((unsigned __int8 *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v72 = (unsigned int)*((__int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v72 = *((unsigned __int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v72 = *((unsigned int *)v169 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v150 = &v165;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v71 = &v48[v19];
                  v72 = *((_QWORD *)v169 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, &v165, v151);
LABEL_131:
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
LABEL_209:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v166, a5, v167, v72);
LABEL_210:
                    v48 = (char *)v157;
LABEL_132:
                    v74 = v165;
                    if ( v165 < 0 )
                    {
LABEL_154:
                      if ( v158[1] )
                      {
                        v158[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v80 = **(_DWORD **)&v162;
                        if ( !**(_DWORD **)&v162 )
                        {
                          v80 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v80 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        **(_DWORD **)&v162 = v80;
                        return 0LL;
                      }
LABEL_136:
                      v165 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v162 = (_DWORD)v154;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        v14 = 0LL;
                        **(_DWORD **)&v162 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v48 == src )
                          {
                            v157 = v48;
                            v93 = (char *)malloc(v11);
                            v48 = (char *)v157;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v93, v157, v19);
                            else
                              v48 = v93;
                          }
                          else
                          {
                            v157 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v157;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 11:
                  v84 = *((_QWORD *)v12 + 10);
                  v85 = &v48[v19];
                  v157 = v48;
                  a5 = *((double *)v169 + 4 * v84 + 2);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, &v165, v151);
                  }
                  else
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, &v165, a5, v152, v153);
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, v167, &v165);
                  }
                  v48 = (char *)v157;
                  goto LABEL_132;
                case 12:
                  v81 = *((_QWORD *)v12 + 10);
                  v82 = &v48[v19];
                  v157 = v48;
                  v83 = *((unsigned __int128 *)v169 + 2 * v81 + 1);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v83, v83 >> 64);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v160 != 2 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, &v165, a5, v83, v83 >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v167, v149);
                  v48 = (char *)v157;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v72 = v166;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, v150, v151);
            v74 = v165;
            v48 = (char *)v157;
            if ( v165 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v13 = (_BYTE *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v159;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v107 = v19;
    v108 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v108 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v108 )
        {
LABEL_303:
          v109 = v14 == src;
          if ( !v14 || v14 == src )
          {
            v142 = (char *)malloc(v11);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v14 = (char *)memcpy(v142, v14, v107);
            else
              v14 = v142;
          }
          else
          {
            v110 = (char *)realloc(v14, v11);
            if ( !v110 )
              goto LABEL_126;
            v14 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_303;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v14[v107] = 0;
    if ( v11 > v108 && v14 != src )
    {
      v111 = (char *)realloc(v14, v108);
      if ( v111 )
        v14 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v172 != v175 )
      free(v172);
    if ( v169 != v170 )
      free(v169);
    *v156 = v107;
    return v14;
  }
  if ( v172 != v175 )
    free(v172);
  if ( v169 != v170 )
    free(v169);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

char *__fastcall sub_414470(void *a1, size_t *a2, _BYTE *a3, __int64 a4, double a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  __int64 *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  _BYTE *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  __int64 v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // r11d
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  unsigned __int64 v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  int v80; // ebx
  __int64 v81; // rax
  char *v82; // rdi
  unsigned __int128 v83; // fst7
  __int64 v84; // rax
  char *v85; // rdi
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  __int64 v149; // [rsp-8h] [rbp-718h]
  int *v150; // [rsp+10h] [rbp-700h]
  int *v151; // [rsp+18h] [rbp-6F8h]
  __int64 v152; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v153; // [rsp+28h] [rbp-6E8h]
  char *v154; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v156; // [rsp+40h] [rbp-6D0h]
  void *v157; // [rsp+48h] [rbp-6C8h]
  char *v158; // [rsp+50h] [rbp-6C0h]
  __int64 v159; // [rsp+58h] [rbp-6B8h]
  _BYTE *v160; // [rsp+60h] [rbp-6B0h]
  __int64 *v161; // [rsp+68h] [rbp-6A8h]
  long double v162; // [rsp+70h] [rbp-6A0h]
  void *v163; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v165; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v166; // [rsp+98h] [rbp-678h]
  unsigned int v167; // [rsp+9Ch] [rbp-674h]
  char v168[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v169; // [rsp+A8h] [rbp-668h]
  _BYTE v170[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v171; // [rsp+190h] [rbp-580h] BYREF
  void *v172; // [rsp+198h] [rbp-578h]
  __int64 v173; // [rsp+1A0h] [rbp-570h]
  __int64 v174; // [rsp+1A8h] [rbp-568h]
  _BYTE v175[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v176[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v156 = a2;
  if ( (int)sub_416250(a3, &v171, v168) < 0 )
    return 0LL;
  if ( (int)sub_416030(a4, v168) >= 0 )
  {
    v7 = v173 + 7;
    if ( (unsigned __int64)(v173 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v174, v7);
    v8 = v174 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v161 = &v152;
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = (__int64 *)malloc(v9);
      v161 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v156;
    v12 = (char *)v172;
    v13 = a3;
    v14 = (char *)src;
    v159 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v172;
    if ( *(_BYTE **)v172 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (void *)(v16 - v13);
    v18 = (unsigned __int64)v17 + v15;
    v19 = (size_t)v17 + v15;
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v160 = v13;
          LOBYTE(v162) = v20;
          v163 = v17;
          v21 = (char *)malloc(v11);
          v17 = v163;
          v13 = v160;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v162) )
          {
            *(_QWORD *)&v162 = v160;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = v163;
            v13 = *(_BYTE **)&v162;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v162 = v13;
          v163 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = v163;
          v13 = *(_BYTE **)&v162;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)v17 + v15;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v171 != v159 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_238;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v162 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v163) = v14 == src;
          v95 = (char *)malloc(v11);
          if ( !v95 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v163 )
            v14 = (char *)memcpy(v95, v14, v19);
          else
            v14 = v95;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v169;
      v28 = (long double *)((char *)v169 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v163) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v163 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v163 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v66 + 1;
                  v127 = -1LL;
                  v128 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v127 = 10 * v50;
                  v76 = __CFADD__(v127, v128);
                  v50 = v127 + v128;
                  v66 = v126;
                  if ( v76 )
                  {
                    if ( v67 == v126 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v163;
                      goto LABEL_82;
                    }
                    while ( *v66++ != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v169 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v129 = v51 + 1;
                v55 = 0LL;
                if ( v52 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v133 = 10 * v55;
                    v76 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v55 = v134;
                    if ( v76 )
                    {
                      if ( v52 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v52 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v54 = (char *)v169 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v56;
                  if ( v50 >= v56 )
                    v86 = v50;
                  v76 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v163 = v87;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v176;
                  }
                  else
                  {
                    v157 = (void *)v50;
                    v158 = (char *)v55;
                    LODWORD(v160) = v68;
                    v162 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v68 = (int)v160;
                    _FST7 = v162;
                    v89 = v88;
                    v55 = (unsigned __int64)v158;
                    v50 = (unsigned __int64)v157;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v166;
                  LOBYTE(v91) = v166;
                  HIBYTE(v91) = BYTE1(v166) | 3;
                  LOWORD(v166) = v91;
                  __asm { fxam }
                  if ( (v62 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v68 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v68 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v12[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || v55 )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v158;
                        v97 = *(char **)&v162;
                        v124 = *v122;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || (v105 = v92 + 1, v55) )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v158;
                        v105 = *(char **)&v162;
                        v140 = *v138;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v12[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v152) = v90;
                          v153 = v50;
                          v154 = v92 + 2;
                          v157 = v89;
                          LODWORD(v158) = v68;
                          v160 = (_BYTE *)v55;
                          *(_QWORD *)&v162 = v55 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v162;
                          v118 = (__int64)v160;
                          v119 = *v116;
                          LOBYTE(v68) = (_BYTE)v158;
                          v89 = (char *)v157;
                          v97 = v154;
                          v50 = v153;
                          LOWORD(v90) = WORD2(v152);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v154) = v90;
                          v157 = (void *)v50;
                          v158 = v92 + 2;
                          v160 = v89;
                          LODWORD(v162) = v68;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v162);
                          v89 = v160;
                          v148 = *v147;
                          v97 = v158;
                          v50 = (unsigned __int64)v157;
                          LOWORD(v90) = (_WORD)v154;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v162 = v92 + 2;
                  v135 = v12[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v68 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v55) )
                  {
                    HIDWORD(v152) = v90;
                    v153 = v50;
                    v154 = v89;
                    v157 = (void *)v55;
                    LODWORD(v158) = v68;
                    v160 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v157;
                    v136 = (__int64)v160;
                    v145 = *v143;
                    LOBYTE(v68) = (_BYTE)v158;
                    v89 = v154;
                    v50 = v153;
                    LOWORD(v90) = WORD2(v152);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v12[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v162;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v166) = v90;
                  v98 = v97 - v89;
                  if ( v50 > v97 - v89 )
                  {
                    v99 = v50 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v68 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v68 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v163 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v19;
                  v15 = v98 + v19;
                  if ( v11 - v19 <= v98 )
                  {
                    if ( __CFADD__(v98, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v103 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v11 = v98 + v19;
                      }
LABEL_280:
                      if ( !v14 || v14 == src )
                      {
                        LOBYTE(v160) = v14 == src;
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v114 = (char *)malloc(v11);
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v160 )
                        {
                          v115 = (char *)memcpy(v114, v14, v19);
                          v89 = (char *)v163;
                          v98 = *(_QWORD *)&v162;
                          v14 = v115;
                        }
                        else
                        {
                          v14 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v104 = (char *)realloc(v14, v11);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        v14 = v104;
                      }
                    }
                  }
                  v163 = v89;
                  memcpy(&v14[v19], v89, v98);
                  if ( v163 != v176 )
                    free(v163);
                  goto LABEL_110;
                }
LABEL_375:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = (char *)v161 + 1;
        *(_BYTE *)v161 = 37;
        if ( (v31 & 1) != 0 )
        {
          v33 = (__int64)v161;
          *((_BYTE *)v161 + 1) = 39;
          v32 = (char *)(v33 + 2);
        }
        if ( (v31 & 2) != 0 )
          *v32++ = 45;
        if ( (v31 & 4) != 0 )
          *v32++ = 43;
        if ( (v31 & 8) != 0 )
          *v32++ = 32;
        if ( (v31 & 0x10) != 0 )
          *v32++ = 35;
        if ( (v31 & 0x40) != 0 )
          *v32++ = 73;
        if ( (v31 & 0x20) != 0 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        if ( (unsigned int)v163 <= 0x10 )
        {
          v38 = 1LL << (char)v163;
          if ( ((1LL << (char)v163) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v38 & 0x1000) != 0 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( (v38 & 0x600) == 0 )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v160) = 1;
            v166 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v160) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v160;
          *(&v166 + (unsigned int)v160) = *((_DWORD *)v43 + 4);
          LODWORD(v160) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v162 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v172 != v175 )
                    free(v172);
                  if ( v169 != v170 )
                    free(v169);
                  v14 = 0LL;
                  **(_DWORD **)&v162 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v162 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v162) = v14 == src;
            v94 = (char *)malloc(v11);
            v46 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v162) )
              v46 = (char *)memcpy(v94, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v158 = v46;
            v47 = __errno_location();
            v48 = v158;
            v158 = v32;
            *(_QWORD *)&v162 = v47;
            LODWORD(v154) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v165 = -1;
              **(_DWORD **)&v162 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (int)v163 )
              {
                case 1:
                  v72 = (unsigned int)*((char *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v72 = *((unsigned __int8 *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v72 = (unsigned int)*((__int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v72 = *((unsigned __int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v72 = *((unsigned int *)v169 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v150 = &v165;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v71 = &v48[v19];
                  v72 = *((_QWORD *)v169 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, &v165, v151);
LABEL_131:
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
LABEL_209:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v166, a5, v167, v72);
LABEL_210:
                    v48 = (char *)v157;
LABEL_132:
                    v74 = v165;
                    if ( v165 < 0 )
                    {
LABEL_154:
                      if ( v158[1] )
                      {
                        v158[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v80 = **(_DWORD **)&v162;
                        if ( !**(_DWORD **)&v162 )
                        {
                          v80 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v80 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        **(_DWORD **)&v162 = v80;
                        return 0LL;
                      }
LABEL_136:
                      v165 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v162 = (_DWORD)v154;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        v14 = 0LL;
                        **(_DWORD **)&v162 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v48 == src )
                          {
                            v157 = v48;
                            v93 = (char *)malloc(v11);
                            v48 = (char *)v157;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v93, v157, v19);
                            else
                              v48 = v93;
                          }
                          else
                          {
                            v157 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v157;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 11:
                  v84 = *((_QWORD *)v12 + 10);
                  v85 = &v48[v19];
                  v157 = v48;
                  a5 = *((double *)v169 + 4 * v84 + 2);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, &v165, v151);
                  }
                  else
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, &v165, a5, v152, v153);
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, v167, &v165);
                  }
                  v48 = (char *)v157;
                  goto LABEL_132;
                case 12:
                  v81 = *((_QWORD *)v12 + 10);
                  v82 = &v48[v19];
                  v157 = v48;
                  v83 = *((unsigned __int128 *)v169 + 2 * v81 + 1);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v83, v83 >> 64);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v160 != 2 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, &v165, a5, v83, v83 >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v167, v149);
                  v48 = (char *)v157;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v72 = v166;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, v150, v151);
            v74 = v165;
            v48 = (char *)v157;
            if ( v165 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v13 = (_BYTE *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v159;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v107 = v19;
    v108 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v108 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v108 )
        {
LABEL_303:
          v109 = v14 == src;
          if ( !v14 || v14 == src )
          {
            v142 = (char *)malloc(v11);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v14 = (char *)memcpy(v142, v14, v107);
            else
              v14 = v142;
          }
          else
          {
            v110 = (char *)realloc(v14, v11);
            if ( !v110 )
              goto LABEL_126;
            v14 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_303;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v14[v107] = 0;
    if ( v11 > v108 && v14 != src )
    {
      v111 = (char *)realloc(v14, v108);
      if ( v111 )
        v14 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v172 != v175 )
      free(v172);
    if ( v169 != v170 )
      free(v169);
    *v156 = v107;
    return v14;
  }
  if ( v172 != v175 )
    free(v172);
  if ( v169 != v170 )
    free(v169);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

FILE *__fastcall sub_415F90(const char *a1, const char *a2)
{
  FILE *v2; // rax
  FILE *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v10; // r12d
  int *v11; // rax
  int v12; // ebp
  int *v13; // rbx
  int *v14; // rax
  FILE *v15; // rdi
  int v16; // r12d
  int *v17; // rbp

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( v4 <= 2 )
    {
      v10 = sub_4143D0(v4, (__int64)a2, v5, v6, v7, v8);
      if ( v10 < 0 )
      {
        v14 = __errno_location();
        v15 = v3;
        v3 = 0LL;
        v16 = *v14;
        v17 = v14;
        sub_4143E0(v15);
        *v17 = v16;
      }
      else if ( sub_4143E0(v3) || (v3 = fdopen(v10, a2)) == 0LL )
      {
        v11 = __errno_location();
        v12 = *v11;
        v13 = v11;
        close(v10);
        *v13 = v12;
        return 0LL;
      }
    }
  }
  return v3;
}

__int64 __fastcall sub_416030(int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  _QWORD *v5; // r10
  unsigned int v7; // ecx
  _DWORD *v8; // r10
  unsigned int v9; // ecx
  _DWORD *v10; // r10
  unsigned int v11; // ecx
  _DWORD *v12; // r10
  unsigned int v13; // ecx
  _QWORD *v14; // r10
  long double *v15; // rcx
  unsigned int v16; // ecx
  void **v17; // r10
  void *v18; // rcx
  unsigned int v19; // ecx
  const char **v20; // r10
  const char *v21; // rcx

  v2 = a2[1];
  if ( *a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
        case 1:
        case 2:
          v11 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v12 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*((_QWORD *)a1 + 2) + v11);
            *a1 = v11 + 8;
          }
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 3:
        case 4:
          v9 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v10 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + v9);
            *a1 = v9 + 8;
          }
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v8 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*((_QWORD *)a1 + 2) + v7);
            *a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
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
          v4 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v5 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*((_QWORD *)a1 + 2) + v4);
            *a1 = v4 + 8;
          }
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 0xB:
          v13 = a1[1];
          if ( v13 > 0xAF )
          {
            v14 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*((_QWORD *)a1 + 2) + v13);
            a1[1] = v13 + 16;
          }
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *((_QWORD *)a1 + 1) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0xF:
          v19 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v20 = (const char **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*((_QWORD *)a1 + 2) + v19);
            *a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *(_QWORD *)(v2 + 16) = v21;
          goto LABEL_7;
        case 0x10:
          v16 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v17 = (void **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*((_QWORD *)a1 + 2) + v16);
            *a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_41ACE0;
          *(_QWORD *)(v2 + 16) = v18;
LABEL_7:
          ++v3;
          v2 += 32LL;
          if ( *a2 <= v3 )
            return 0LL;
          continue;
        default:
          return 0xFFFFFFFFLL;
      }
    }
  }
  return 0LL;
}

__int64 __fastcall sub_416250(char *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r13
  char *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // r14
  char *v12; // r12
  char v13; // bl
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rbx
  _DWORD *v19; // r13
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  _BYTE *v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  _DWORD *v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // rax
  int *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // r12
  _QWORD *v35; // rax
  _BYTE *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  _DWORD *v39; // rax
  _DWORD *v40; // rsi
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _BYTE *v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  char *v47; // rdi
  bool v48; // cf
  unsigned __int64 v49; // rdx
  unsigned __int8 v50; // bl
  _QWORD *v51; // rdi
  unsigned __int64 v52; // r9
  _DWORD *v53; // rax
  char *i; // rcx
  char *v55; // rdx
  unsigned __int64 v56; // rax
  const void *v57; // rsi
  _QWORD *v58; // rdi
  unsigned __int64 v59; // r9
  _DWORD *v60; // rax
  _DWORD *v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  char *v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int8 v67; // si
  _BYTE *v68; // rdx
  unsigned __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rax
  _BYTE *v72; // rdi
  unsigned __int64 v73; // rdx
  unsigned __int8 v74; // bl
  _DWORD *v75; // rax
  _DWORD *src; // [rsp+8h] [rbp-80h]
  _QWORD *srca; // [rsp+8h] [rbp-80h]
  _QWORD *srcb; // [rsp+8h] [rbp-80h]
  unsigned __int64 v79; // [rsp+10h] [rbp-78h]
  unsigned __int64 v80; // [rsp+18h] [rbp-70h]
  unsigned __int64 v81; // [rsp+20h] [rbp-68h]
  _QWORD *v82; // [rsp+28h] [rbp-60h]
  unsigned __int64 v83; // [rsp+30h] [rbp-58h]
  char *v84; // [rsp+30h] [rbp-58h]
  unsigned __int64 v85; // [rsp+30h] [rbp-58h]
  int v86; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+30h] [rbp-58h]
  _BYTE *v88; // [rsp+30h] [rbp-58h]
  char *v89; // [rsp+30h] [rbp-58h]
  _BYTE *v90; // [rsp+30h] [rbp-58h]
  _QWORD *v91; // [rsp+38h] [rbp-50h]
  __int64 v92; // [rsp+38h] [rbp-50h]
  _QWORD *v93; // [rsp+38h] [rbp-50h]
  __int64 v94; // [rsp+38h] [rbp-50h]
  __int64 v95; // [rsp+38h] [rbp-50h]
  __int64 v96; // [rsp+38h] [rbp-50h]
  __int64 v97; // [rsp+38h] [rbp-50h]
  __int64 v98; // [rsp+38h] [rbp-50h]
  unsigned __int64 v99; // [rsp+40h] [rbp-48h]
  unsigned __int64 v100; // [rsp+40h] [rbp-48h]
  unsigned __int64 v101; // [rsp+40h] [rbp-48h]
  unsigned __int64 v102; // [rsp+40h] [rbp-48h]
  unsigned __int64 v103; // [rsp+40h] [rbp-48h]
  unsigned __int64 v104; // [rsp+40h] [rbp-48h]
  _QWORD *v105; // [rsp+48h] [rbp-40h]
  _QWORD *v106; // [rsp+48h] [rbp-40h]
  _QWORD *v107; // [rsp+48h] [rbp-40h]
  _QWORD *v108; // [rsp+48h] [rbp-40h]
  _QWORD *v109; // [rsp+48h] [rbp-40h]
  _QWORD *v110; // [rsp+48h] [rbp-40h]

  v3 = a2 + 4;
  v4 = a2;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *a2 = 0LL;
  a2[1] = a2 + 4;
  v82 = a2 + 4;
  *a3 = 0LL;
  src = a3 + 2;
  a3[1] = (unsigned __int64)(a3 + 2);
  v80 = 0LL;
  v79 = 0LL;
  v81 = 0LL;
  while ( 1 )
  {
    if ( !*a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v79;
      v4[3] = v80;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (char *)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *((_DWORD *)v12 + 4) = 0;
  *((_QWORD *)v12 + 3) = 0LL;
  *((_QWORD *)v12 + 4) = 0LL;
  *((_QWORD *)v12 + 5) = -1LL;
  *((_QWORD *)v12 + 6) = 0LL;
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = -1LL;
  *((_QWORD *)v12 + 10) = -1LL;
  v13 = a1[1];
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_16;
  v36 = a1 + 1;
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_16;
  }
  v62 = 0LL;
  do
  {
    v63 = -1LL;
    v64 = v13 - 48;
    if ( v62 <= 0x1999999999999999LL )
      v63 = 10 * v62;
    v65 = v9;
    while ( 1 )
    {
      v13 = v9[1];
      v48 = __CFADD__(v63, v64);
      v66 = v63 + v64;
      v62 = v66;
      ++v9;
      v67 = v13 - 48;
      if ( !v48 )
        break;
      if ( v67 > 9u )
        goto LABEL_130;
      v63 = -1LL;
      v65 = v9;
      v64 = v13 - 48;
    }
  }
  while ( v67 <= 9u );
  v11 = v66 - 1;
  if ( v66 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_130;
  v9 = v65 + 2;
  v13 = v65[2];
  while ( 1 )
  {
LABEL_16:
    v14 = v9 + 1;
    switch ( v13 )
    {
      case '\'':
        *((_DWORD *)v12 + 4) |= 1u;
        goto LABEL_15;
      case '-':
        *((_DWORD *)v12 + 4) |= 2u;
        goto LABEL_15;
      case '+':
        *((_DWORD *)v12 + 4) |= 4u;
        goto LABEL_15;
      case ' ':
        *((_DWORD *)v12 + 4) |= 8u;
        goto LABEL_15;
      case '#':
        *((_DWORD *)v12 + 4) |= 0x10u;
        goto LABEL_15;
    }
    if ( v13 != 48 )
      break;
    *((_DWORD *)v12 + 4) |= 0x20u;
LABEL_15:
    v13 = *v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *((_DWORD *)v12 + 4) |= 0x40u;
    goto LABEL_15;
  }
  if ( v13 == 42 )
  {
    v16 = 1LL;
    *((_QWORD *)v12 + 3) = v9;
    *((_QWORD *)v12 + 4) = v14;
    if ( v79 )
      v16 = v79;
    v79 = v16;
    v17 = v9[1];
    if ( (unsigned __int8)(v9[1] - 48) > 9u )
      goto LABEL_39;
    v43 = v9 + 1;
    do
      ++v43;
    while ( (unsigned __int8)(*v43 - 48) <= 9u );
    if ( *v43 == 36 )
    {
      v44 = 0LL;
      do
      {
        v45 = -1LL;
        v46 = v17 - 48;
        if ( v44 <= 0x1999999999999999LL )
          v45 = 10 * v44;
        v47 = v14;
        while ( 1 )
        {
          v48 = __CFADD__(v46, v45);
          v49 = v46 + v45;
          v17 = v14[1];
          v44 = v49;
          ++v14;
          v50 = v17 - 48;
          if ( !v48 )
            break;
          if ( v50 > 9u )
            goto LABEL_130;
          v45 = -1LL;
          v47 = v14;
          v46 = v17 - 48;
        }
      }
      while ( v50 <= 9u );
      v18 = v49 - 1;
      if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_130;
      *((_QWORD *)v12 + 5) = v18;
      v14 = v47 + 2;
    }
    else
    {
LABEL_39:
      v18 = *((_QWORD *)v12 + 5);
      if ( v18 == -1LL )
      {
        *((_QWORD *)v12 + 5) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v18 = v81++;
      }
    }
    v19 = (_DWORD *)a3[1];
    if ( v6 > v18 )
    {
      v20 = *a3;
LABEL_42:
      if ( v20 <= v18 )
      {
        do
        {
          ++v20;
          v19[8 * v20 - 8] = 0;
        }
        while ( v20 <= v18 );
        *a3 = v20;
      }
      v21 = &v19[8 * v18];
      if ( *v21 )
      {
        if ( *v21 == 5 )
        {
          v13 = *v14;
          v9 = v14++;
          goto LABEL_25;
        }
        goto LABEL_131;
      }
      *v21 = 5;
      v13 = *v14;
      v9 = v14++;
      if ( v13 != 46 )
        goto LABEL_26;
LABEL_47:
      v22 = v9[1] == 42;
      *((_QWORD *)v12 + 6) = v9;
      if ( !v22 )
      {
        if ( (unsigned __int8)(v9[1] - 48) > 9u )
        {
          v9 = v14;
          v37 = 1LL;
        }
        else
        {
          do
            ++v14;
          while ( (unsigned __int8)(*v14 - 48) <= 9u );
          v37 = v14 - v9;
          v9 = v14;
        }
        *((_QWORD *)v12 + 7) = v14;
        v13 = *v14;
        if ( v80 >= v37 )
          v37 = v80;
        v80 = v37;
        goto LABEL_26;
      }
      v23 = 2LL;
      v24 = v9 + 2;
      *((_QWORD *)v12 + 7) = v9 + 2;
      if ( v80 >= 2 )
        v23 = v80;
      v80 = v23;
      v25 = v9[2];
      if ( (unsigned __int8)(v9[2] - 48) > 9u )
        goto LABEL_51;
      v68 = v9 + 2;
      do
        ++v68;
      while ( (unsigned __int8)(*v68 - 48) <= 9u );
      if ( *v68 == 36 )
      {
        v69 = 0LL;
        do
        {
          v70 = -1LL;
          v71 = v25 - 48;
          if ( v69 <= 0x1999999999999999LL )
            v70 = 10 * v69;
          v72 = v24;
          while ( 1 )
          {
            v48 = __CFADD__(v71, v70);
            v73 = v71 + v70;
            v25 = (char)*++v24;
            v69 = v73;
            v74 = v25 - 48;
            if ( !v48 )
              break;
            if ( v74 > 9u )
              goto LABEL_130;
            v70 = -1LL;
            v72 = v24;
            v71 = v25 - 48;
          }
        }
        while ( v74 <= 9u );
        v26 = v73 - 1;
        if ( v73 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *((_QWORD *)v12 + 8) = v26;
          v24 = v72 + 2;
LABEL_52:
          v19 = (_DWORD *)a3[1];
          if ( v6 > v26 )
          {
            v27 = *a3;
            goto LABEL_54;
          }
          v59 = 2 * v6;
          if ( v59 <= v26 )
            v59 = v26 + 1;
          if ( v59 <= 0x7FFFFFFFFFFFFFFLL )
          {
            v108 = v4;
            v102 = v59;
            v96 = v7;
            v88 = v24;
            if ( src == v19 )
            {
              v75 = malloc(32 * v59);
              v24 = v88;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v75 )
                goto LABEL_162;
              v27 = *a3;
              v40 = src;
              v19 = v75;
            }
            else
            {
              v60 = realloc(v19, 32 * v59);
              v40 = (_DWORD *)a3[1];
              v24 = v88;
              v19 = v60;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v60 )
                goto LABEL_160;
              v27 = *a3;
              if ( src != v40 )
                goto LABEL_171;
            }
            v110 = v4;
            v104 = v6;
            v98 = v7;
            v90 = v24;
            memcpy(v19, v40, 32 * v27);
            v27 = *a3;
            v4 = v110;
            v6 = v104;
            v7 = v98;
            v24 = v90;
LABEL_171:
            a3[1] = (unsigned __int64)v19;
LABEL_54:
            if ( v27 <= v26 )
            {
              do
              {
                ++v27;
                v19[8 * v27 - 8] = 0;
              }
              while ( v27 <= v26 );
              *a3 = v27;
            }
            v28 = &v19[8 * v26];
            if ( !*v28 )
            {
              *v28 = 5;
              v9 = v24;
              v13 = *v24;
              goto LABEL_26;
            }
            if ( *v28 == 5 )
            {
              v13 = *v24;
              v9 = v24;
              goto LABEL_26;
            }
            goto LABEL_131;
          }
LABEL_159:
          v40 = v19;
          goto LABEL_160;
        }
      }
      else
      {
LABEL_51:
        v26 = *((_QWORD *)v12 + 8);
        if ( v26 != -1LL )
          goto LABEL_52;
        *((_QWORD *)v12 + 8) = v81;
        if ( v81 != -1LL )
        {
          v26 = v81++;
          goto LABEL_52;
        }
      }
LABEL_130:
      v19 = (_DWORD *)a3[1];
LABEL_131:
      if ( src != v19 )
      {
        srca = v4;
        free(v19);
        v4 = srca;
      }
      v51 = (_QWORD *)v4[1];
      if ( v82 != v51 )
        free(v51);
      *__errno_location() = 22;
      return 0xFFFFFFFFLL;
    }
    v38 = 2 * v6;
    if ( v38 <= v18 )
      v38 = v18 + 1;
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_159;
    v105 = v4;
    v99 = v38;
    v92 = v7;
    v84 = v14;
    if ( src == v19 )
    {
      v61 = malloc(32 * v38);
      v14 = v84;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v61 )
        goto LABEL_162;
      v20 = *a3;
      v40 = src;
      v19 = v61;
    }
    else
    {
      v39 = realloc(v19, 32 * v38);
      v40 = (_DWORD *)a3[1];
      v14 = v84;
      v19 = v39;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v39 )
        goto LABEL_160;
      v20 = *a3;
      if ( src != v40 )
        goto LABEL_93;
    }
    v109 = v4;
    v103 = v6;
    v97 = v7;
    v89 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *a3;
    v4 = v109;
    v6 = v103;
    v7 = v97;
    v14 = v89;
LABEL_93:
    a3[1] = (unsigned __int64)v19;
    goto LABEL_42;
  }
  if ( (unsigned __int8)(v13 - 48) <= 9u )
  {
    *((_QWORD *)v12 + 3) = v9;
    if ( (unsigned __int8)(*v9 - 48) <= 9u )
    {
      for ( i = v9; ; ++i )
      {
        v55 = i + 1;
        if ( (unsigned __int8)(i[1] - 48) > 9u )
          break;
      }
      v14 = i + 2;
      v56 = v55 - v9;
      v9 = v55;
      if ( v79 >= v56 )
        v56 = v79;
      v79 = v56;
    }
    *((_QWORD *)v12 + 4) = v9;
    v13 = *v9;
  }
LABEL_25:
  if ( v13 == 46 )
    goto LABEL_47;
LABEL_26:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_33;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_33;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_33:
      v13 = *v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case '%':
      goto LABEL_70;
    case 'A':
    case 'E':
    case 'F':
    case 'G':
    case 'a':
    case 'e':
    case 'f':
    case 'g':
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      goto LABEL_62;
    case 'C':
      v29 = 14;
      v13 = 99;
      goto LABEL_62;
    case 'S':
      v29 = 16;
      v13 = 115;
      goto LABEL_62;
    case 'X':
    case 'o':
    case 'u':
    case 'x':
      v29 = 10;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 6 : 4;
        }
      }
      goto LABEL_62;
    case 'c':
      v29 = (v15 > 7) + 13;
      goto LABEL_62;
    case 'd':
    case 'i':
      v29 = 9;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 5 : 3;
        }
      }
      goto LABEL_62;
    case 'n':
      v29 = 22;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( (v15 & 2) == 0 )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      goto LABEL_62;
    case 'p':
      v29 = 17;
      goto LABEL_62;
    case 's':
      v29 = (v15 > 7) + 15;
LABEL_62:
      if ( v11 == -1LL )
      {
        *((_QWORD *)v12 + 10) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v11 = v81++;
      }
      else
      {
        *((_QWORD *)v12 + 10) = v11;
      }
      v19 = (_DWORD *)a3[1];
      if ( v6 > v11 )
        goto LABEL_65;
      v52 = 2 * v6;
      if ( v52 <= v11 )
        v52 = v11 + 1;
      if ( v52 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_159;
      v106 = v4;
      v100 = v52;
      v94 = v7;
      v86 = v29;
      if ( src == v19 )
      {
        v53 = malloc(32 * v52);
        v29 = v86;
        v7 = v94;
        v6 = v100;
        v4 = v106;
        if ( !v53 )
          goto LABEL_162;
        goto LABEL_158;
      }
      v53 = realloc(v19, 32 * v52);
      v29 = v86;
      v7 = v94;
      v19 = v53;
      v6 = v100;
      v4 = v106;
      if ( !v53 )
        goto LABEL_210;
      if ( src == (_DWORD *)a3[1] )
      {
        v19 = src;
LABEL_158:
        v57 = v19;
        v107 = v4;
        v101 = v6;
        v19 = v53;
        v95 = v7;
        v87 = v29;
        memcpy(v53, v57, 32 * *a3);
        v4 = v107;
        v29 = v87;
        v6 = v101;
        v7 = v95;
      }
      a3[1] = (unsigned __int64)v19;
LABEL_65:
      v30 = *a3;
      if ( *a3 <= v11 )
      {
        do
        {
          ++v30;
          v19[8 * v30 - 8] = 0;
        }
        while ( v30 <= v11 );
        *a3 = v30;
      }
      v31 = &v19[8 * v11];
      if ( *v31 )
      {
        if ( *v31 != v29 )
          goto LABEL_131;
      }
      else
      {
        *v31 = v29;
      }
LABEL_70:
      v12[72] = v13;
      v32 = *v4;
      *((_QWORD *)v12 + 1) = v9;
      v8 = v32 + 1;
      *v4 = v32 + 1;
      if ( v7 > (unsigned __int64)(v32 + 1) )
      {
        v3 = (_QWORD *)v4[1];
        goto LABEL_3;
      }
      if ( v7 >= 0 )
      {
        v33 = 2 * v7;
        if ( (unsigned __int64)(2 * v7) <= 0x2E8BA2E8BA2E8BALL )
        {
          v34 = (_QWORD *)v4[1];
          v91 = v4;
          v83 = v6;
          if ( v82 == v34 )
          {
            v41 = malloc(176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v41;
            if ( !v41 )
            {
              v40 = (_DWORD *)a3[1];
              if ( src != v40 )
                goto LABEL_161;
              goto LABEL_164;
            }
          }
          else
          {
            v35 = realloc(v34, 176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v35;
            if ( !v35 )
              goto LABEL_210;
            v34 = (_QWORD *)v91[1];
            v8 = *v91;
            if ( v82 != v34 )
              goto LABEL_77;
          }
          v93 = v4;
          v85 = v6;
          v42 = memcpy(v3, v34, 88 * v8);
          v4 = v93;
          v6 = v85;
          v3 = v42;
          v8 = *v93;
LABEL_77:
          v4[1] = v3;
          v7 = v33;
          goto LABEL_3;
        }
      }
LABEL_210:
      v40 = (_DWORD *)a3[1];
LABEL_160:
      if ( src != v40 )
      {
LABEL_161:
        srcb = v4;
        free(v40);
        v4 = srcb;
      }
LABEL_162:
      v58 = (_QWORD *)v4[1];
      if ( v82 != v58 )
        free(v58);
LABEL_164:
      *__errno_location() = 12;
      result = 0xFFFFFFFFLL;
      break;
    default:
      goto LABEL_130;
  }
  return result;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_416FD0(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_61F428 )
    v1 = (void *)qword_61F428;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_416FE8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_61EE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
