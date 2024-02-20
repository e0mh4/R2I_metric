#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char v3; // r15
  int v4; // er14
  unsigned __int64 v5; // r13
  char *v6; // r12
  __int64 v7; // rbp
  int *v8; // rbx
  char *v9; // rdi
  int v10; // eax
  char **v11; // rax
  const char *v12; // rsi
  char *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  __int64 v18; // rax
  void *v19; // r13
  const char *v20; // rsi
  struct passwd *v21; // rax
  __uid_t v22; // eax
  struct group *v23; // rax
  __gid_t v24; // eax
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _BYTE *v29; // rdi
  bool v30; // zf
  char *v31; // rax
  int *v32; // rax
  char *v33; // rax
  __int64 v34; // r13
  char *v35; // r15
  __int64 v36; // rax
  __int64 v37; // rax
  void *v38; // rbx
  char *v39; // rax
  char *v40; // rbx
  char v41; // al
  char v42; // dl
  char *v44; // rax
  char *v45; // rax
  char *v46; // rax
  char *v47; // rax
  char *v48; // rax
  __int64 v49; // rbx
  char *v50; // rax
  __int64 v51; // rbp
  char *v52; // rbx
  int *v53; // rax
  const char *v54; // rsi
  __int64 v55; // rbx
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  char *v59; // rax
  __int64 v60; // rbx
  char *v61; // rax
  char *v62; // rax
  __int64 v63; // rbx
  char *v64; // rax
  __int64 v65; // rbx
  char *v66; // rax
  char **v67; // [rsp+8h] [rbp-140h]
  void *v68; // [rsp+10h] [rbp-138h]
  unsigned int v69; // [rsp+10h] [rbp-138h]
  void *v70; // [rsp+18h] [rbp-130h]
  int v71; // [rsp+18h] [rbp-130h]
  char v72; // [rsp+27h] [rbp-121h]
  void *v73; // [rsp+28h] [rbp-120h]
  __int64 v74; // [rsp+30h] [rbp-118h]
  __int64 v75; // [rsp+38h] [rbp-110h]
  __int64 v76; // [rsp+40h] [rbp-108h]
  __int16 v77; // [rsp+48h] [rbp-100h]
  int v78; // [rsp+4Ch] [rbp-FCh]
  __int64 v79; // [rsp+50h] [rbp-F8h]
  __int64 v80; // [rsp+58h] [rbp-F0h]
  char v81; // [rsp+60h] [rbp-E8h]
  int v82; // [rsp+64h] [rbp-E4h]
  __int64 v83; // [rsp+68h] [rbp-E0h]
  __int64 v84; // [rsp+70h] [rbp-D8h]
  struct stat stat_buf; // [rsp+80h] [rbp-C8h]

  v3 = 0;
  v4 = 0;
  v5 = (unsigned __int64)a2;
  v6 = 0LL;
  LOBYTE(v7) = 0;
  LODWORD(v8) = a1;
  v9 = *a2;
  dword_621560 = 0;
  sub_40CFD0(v9);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_416FD0(sub_40AA00);
  sub_405700(&v74);
  v74 = 0x400000000LL;
  v75 = 8589934596LL;
  v82 = 0;
  v76 = 1103806595456LL;
  v77 = 256;
  v78 = 0;
  v79 = 0x1000000LL;
  v80 = 0x1000000LL;
  v81 = 0;
  v83 = 0LL;
  v84 = 0LL;
  nptr = 0LL;
  qword_621548 = 0LL;
  byte_621541 = 0;
  byte_621540 = 0;
  umask(0);
  v72 = 0;
  v73 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v70 = 0LL;
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
        v68 = qword_621B80;
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
            v73 = qword_621B80;
          else
            BYTE1(v79) = 1;
        }
        else if ( qword_621B80 )
        {
          v12 = "warning: ignoring --context; it requires an SELinux-enabled kernel";
LABEL_56:
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
          v11 = v67;
        v67 = v11;
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
        BYTE6(v80) = 1;
      }
      else if ( v10 <= 118 )
      {
        if ( v10 != 116 )
          goto LABEL_22;
        if ( v6 )
        {
          v48 = dcgettext(0LL, "multiple target directories specified", 5);
          error(1, 0, v48);
          goto LABEL_140;
        }
        v6 = (char *)qword_621B80;
      }
      else if ( v10 == 128 )
      {
        v12 = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
        if ( !dword_621560 )
          goto LABEL_56;
        BYTE5(v79) = 1;
        byte_61F44C = 0;
      }
      else
      {
        if ( v10 != 129 )
          goto LABEL_22;
        v72 = 1;
        arg = (char *)sub_411510(qword_621B80);
      }
    }
    else if ( v10 == 109 )
    {
      v70 = qword_621B80;
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
      HIBYTE(v78) = 1;
    }
  }
  if ( !byte_621540 )
  {
    if ( !v6 )
      goto LABEL_63;
    v14 = __xstat(1, v6, &stat_buf);
    if ( (_BYTE)v7 || !v14 )
    {
      if ( v14 || (stat_buf.st_mode & 0xF000) == 0x4000 )
        goto LABEL_63;
LABEL_140:
      v49 = sub_40EA00(4LL, v6);
      v50 = dcgettext(0LL, "target %s is not a directory", 5);
      error(1, 0, v50, v49);
    }
    v51 = sub_40EA00(4LL, v6);
    v52 = dcgettext(0LL, "failed to access %s", 5);
    v53 = __errno_location();
    error(1, *v53, v52, v51);
LABEL_142:
    v54 = "extra operand %s";
    v55 = sub_40EA00(4LL, v67[2]);
LABEL_143:
    v56 = dcgettext(0LL, v54, 5);
    error(0, 0, v56, v55);
    goto LABEL_22;
  }
  if ( byte_621541 )
    goto LABEL_152;
  if ( v6 )
  {
    v26 = dcgettext(0LL, "target directory not allowed when installing a directory", 5);
    error(1, 0, v26);
    goto LABEL_97;
  }
LABEL_63:
  v15 = 0;
  if ( v3 )
  {
    v39 = dcgettext(0LL, "backup type", 5);
    v15 = sub_40A930(v39, v67);
  }
  LODWORD(v74) = v15;
  sub_40A380(v68);
  if ( !BYTE5(v79) )
    goto LABEL_110;
  if ( BYTE1(v79) || v73 )
  {
    v58 = dcgettext(0LL, "cannot set target context and preserve it", 5);
    error(1, 0, v58);
    goto LABEL_148;
  }
  while ( 2 )
  {
    LODWORD(v8) = (_DWORD)v8 - dword_61F4DC;
    v67 = (char **)(v5 + 8LL * dword_61F4DC);
    LOBYTE(v16) = v6 == 0LL;
    v17 = v16 & ((unsigned __int8)byte_621540 ^ 1);
    if ( ((v6 == 0LL) & (unsigned __int8)(byte_621540 ^ 1)) >= (int)v8 )
      goto LABEL_145;
    if ( (_BYTE)v4 )
    {
      if ( !v6 )
      {
        if ( (int)v8 <= 2 )
          goto LABEL_72;
        goto LABEL_142;
      }
      v57 = dcgettext(0LL, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5);
      error(1, 0, v57);
LABEL_145:
      if ( (_DWORD)v8 == 1 )
      {
        v54 = "missing destination file operand after %s";
        v55 = sub_40EA00(4LL, *v67);
        goto LABEL_143;
      }
LABEL_148:
      v20 = "missing file operand";
      goto LABEL_149;
    }
LABEL_97:
    if ( !(_BYTE)v17 )
      goto LABEL_72;
    v6 = 0LL;
    if ( (_DWORD)v8 == 1 )
      goto LABEL_72;
    v5 = 1LL;
    v6 = v67[(int)v8 - 1];
    v27 = sub_40AD40(v6);
    v28 = -1LL;
    v29 = (_BYTE *)v27;
    do
    {
      if ( !v28 )
        break;
      v30 = *v29++ == (_BYTE)v4;
      --v28;
    }
    while ( !v30 );
    if ( -v28 != 2 )
      v5 = *(_BYTE *)(v27 + -v28 - 2 - 1) == 47;
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
        v8 = (int *)sub_40EA00(4LL, v67[(int)v8 - 1]);
        v31 = dcgettext(0LL, "target %s is not a directory", 5);
        error(1, 0, v31, v8);
LABEL_110:
        if ( v73 )
        {
          v32 = __errno_location();
          *v32 = 95;
          v8 = v32;
          v7 = sub_40EC50(v73);
          v33 = dcgettext(0LL, "failed to set default file creation context to %s", 5);
          error(1, *v8, v33, v7);
LABEL_112:
          sub_409A90();
          if ( v6 )
          {
            v34 = 0LL;
            sub_4056A0(&v74);
            v69 = 0;
            v71 = (int)v8;
            do
            {
              v35 = v67[v34];
              v36 = sub_40AD40(v67[v34]);
              v37 = sub_40B0C0(v6, v36, 0LL);
              v38 = (void *)v37;
              if ( (!((unsigned __int8)v7 & ((_DWORD)v34 == 0)) || (unsigned __int8)sub_403DB0(v35, v37, &v74, 1LL))
                && (unsigned __int8)sub_404090(v35, (char *)v38) )
              {
                free(v38);
              }
              else
              {
                free(v38);
                v69 = 1;
              }
              ++v34;
            }
            while ( v71 > (int)v34 );
            return v69;
          }
          v6 = v67[1];
          v40 = *v67;
          if ( (_BYTE)v7 )
          {
            v41 = sub_403DB0(*v67, v67[1], &v74, 0LL);
            v42 = 0;
            if ( !v41 )
              goto LABEL_125;
            goto LABEL_134;
          }
          return (unsigned __int8)((unsigned __int64)sub_404090(*v67, v67[1]) ^ 1);
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
  v6 = v67[(int)v8];
LABEL_72:
  if ( v70 )
  {
    v18 = sub_40CA80(v70);
    v19 = (void *)v18;
    if ( v18 )
    {
      mode = sub_40CE50(0LL, 0LL, 0LL, v18, 0LL);
      dword_61F444 = sub_40CE50(0LL, 1LL, 0LL, v19, &dword_61F440);
      free(v19);
      goto LABEL_75;
    }
    v60 = sub_40EC50(v70);
    v61 = dcgettext(0LL, "invalid mode %s", 5);
    error(1, 0, v61, v60);
LABEL_152:
    v62 = dcgettext(0LL, "the strip option may not be used when installing a directory", 5);
    error(1, 0, v62);
LABEL_153:
    v63 = sub_40EA00(4LL, v6);
    v64 = dcgettext(0LL, "failed to access %s", 5);
    error(1, v4, v64, v63);
LABEL_154:
    v65 = sub_40EA00(4LL, v6);
    v66 = dcgettext(0LL, "target %s is not a directory", 5);
    error(1, v4, v66, v65);
    start();
  }
LABEL_75:
  if ( v72 && !byte_621541 )
  {
    v45 = dcgettext(0LL, "WARNING: ignoring --strip-program option as -s option was not specified", 5);
    error(0, 0, v45);
  }
  if ( byte_621542 )
  {
    if ( HIBYTE(v78) )
    {
      v20 = "options --compare (-C) and --preserve-timestamps are mutually exclusive";
    }
    else
    {
      v20 = "options --compare (-C) and --strip are mutually exclusive";
      if ( !byte_621541 )
      {
        if ( mode & 0xFFFF0E00 )
        {
          v44 = dcgettext(
                  0LL,
                  "the --compare (-C) option is ignored when you specify a mode with non-permission bits",
                  5);
          error(0, 0, v44);
        }
        goto LABEL_83;
      }
    }
LABEL_149:
    v59 = dcgettext(0LL, v20, 5);
    error(0, 0, v59);
LABEL_22:
    sub_4046F0(1);
  }
LABEL_83:
  if ( nptr )
  {
    v21 = getpwnam(nptr);
    if ( v21 )
    {
      v22 = v21->pw_uid;
      goto LABEL_86;
    }
    if ( (unsigned int)sub_411570(nptr) || (v22 = stat_buf.st_dev, stat_buf.st_dev > 0xFFFFFFFF) )
    {
      v8 = (int *)sub_40EC50(nptr);
      v46 = dcgettext(0LL, "invalid user %s", 5);
      error(1, 0, v46, v8);
LABEL_131:
      if ( (unsigned int)sub_411570(qword_621548) || (v24 = stat_buf.st_dev, stat_buf.st_dev > 0xFFFFFFFF) )
      {
        v40 = (char *)sub_40EC50(qword_621548);
        v47 = dcgettext(0LL, "invalid group %s", 5);
        error(1, 0, v47, v40);
LABEL_134:
        v42 = sub_404090(v40, v6);
LABEL_125:
        return v42 & 1 ^ 1;
      }
      goto LABEL_90;
    }
LABEL_86:
    owner = v22;
    endpwent();
  }
  else
  {
    owner = -1;
  }
  if ( qword_621548 )
  {
    v23 = getgrnam(qword_621548);
    if ( !v23 )
      goto LABEL_131;
    v24 = v23->gr_gid;
LABEL_90:
    group = v24;
    endgrent();
  }
  else
  {
    group = -1;
  }
  if ( !byte_621540 )
    goto LABEL_112;
  return (unsigned int)sub_40F910((unsigned int)v8, v67, sub_403F50, &v74);
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

void *sub_403CFB()
{
  void *result; // rax

  result = &unk_61F4E8;
  if ( &unk_61F4E8 != &unk_61F4E8 )
    result = 0LL;
  return result;
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

__int64 sub_403DA8()
{
  return sub_403D1A();
}

__int64 __fastcall sub_403DB0(_BYTE *a1, _BYTE *a2, __int64 a3, char a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbp
  int *v6; // r12
  __int64 v7; // rbx
  char *v8; // rax
  int v10; // eax
  int v11; // er12
  int v12; // ebp
  __int64 v13; // rbp
  char *v14; // rbx
  int *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  int v18; // [rsp+8h] [rbp-20h]

  v4 = a3;
  if ( !a4 && *a1 == 47 && *a2 == 47 )
  {
    v18 = 0;
    sub_40F8A0(&v18);
    if ( sub_40C5E0(a2, &v18, &sub_404020, v4) == -1 )
    {
      v13 = sub_40EA00(4LL, a2);
      v14 = dcgettext(0LL, "cannot create directory %s", 5);
      v15 = __errno_location();
      error(0, *v15, v14, v13);
      return 0LL;
    }
    return 1LL;
  }
  v18 = 0;
  v5 = sub_40C5E0(a2, &v18, &sub_404020, a3);
  v6 = __errno_location();
  if ( v5 == -1 )
  {
    v7 = sub_40EA00(4LL, a2);
    v8 = dcgettext(0LL, "cannot create directory %s", 5);
    error(0, *v6, v8, v7);
    sub_40F770(&v18, 1LL);
    sub_40F8A0(&v18);
    return 0LL;
  }
  v10 = sub_40F770(&v18, 0LL);
  v11 = *v6;
  v12 = v10;
  sub_40F8A0(&v18);
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
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebp

  v3 = a3;
  v4 = (unsigned __int64)sub_40C770(
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
  v5 = (unsigned __int8)v4;
  if ( !(_BYTE)v4 && *(_BYTE *)(v3 + 33) )
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
    result = sub_403FC0(a1, a2, a3, a4, a5, a6, a7);
  return result;
}

int __fastcall sub_404020(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v3; // rbx
  int result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // [rsp+0h] [rbp-28h]

  v3 = a3;
  if ( *(_BYTE *)(a3 + 33) )
    *__errno_location() = 95;
  result = mkdir(a2, 0x1EDu);
  if ( !result )
  {
    if ( *(_BYTE *)(v3 + 46) )
    {
      sub_403FC0(a1, 493LL, v5, v6, v7, v8, v9);
      result = 0;
    }
  }
  return result;
}

__int64 __fastcall sub_404090(char *file, char *filename, __int64 a3)
{
  __int64 v3; // rbp
  char *v4; // rbx
  __mode_t v5; // er14
  __uid_t v6; // eax
  __gid_t v7; // eax
  int v8; // er14
  int v9; // er15
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
  __int64 v32; // r12
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
  struct stat stat_buf; // [rsp+10h] [rbp-1E8h]
  struct stat v45; // [rsp+A0h] [rbp-158h]
  struct stat v46; // [rsp+130h] [rbp-C8h]

  v3 = a3;
  v4 = filename;
  if ( *(_BYTE *)(a3 + 31) && __xstat(1, file, &stat_buf) )
    goto LABEL_46;
  if ( byte_621542 )
  {
    v5 = mode;
    if ( !(mode & 0xFFFF0E00)
      && !__lxstat(1, file, &v45)
      && !__lxstat(1, filename, &v46)
      && (v45.st_mode & 0xF000) == 0x8000
      && (v46.st_mode & 0xF000) == 0x8000
      && !((v46.st_mode | v45.st_mode) & 0xFFFF0E00)
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
        *(timespec *)&v46.st_nlink = stat_buf.st_mtim;
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
            v32 = (__int64)(v4 + 1);
            if ( v31 == 47 )
            {
              while ( 1 )
              {
                v31 = *(_BYTE *)(v32 + 1);
                v36 = (_BYTE *)(v32 + 1);
                if ( v31 != 47 )
                  break;
                ++v32;
              }
            }
            else
            {
              v36 = v4 + 1;
              v32 = (__int64)v4;
            }
            if ( v31 )
            {
              do
                ++v36;
              while ( *v36 && *v36 != 47 );
              v33 = (size_t)&v36[-v32];
              v34 = (char *)malloc((size_t)&v36[-v32 + 2]);
              v35 = v34;
              if ( v34 )
              {
                *(_WORD *)stpncpy(v34, (const char *)v32, v33) = 47;
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

noreturn void __fastcall  sub_4046F0(int status)
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
  const char **v24; // rax
  char *v25; // rbp
  char *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // rax
  char *v30; // r12
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
  const char *v48; // [rsp+0h] [rbp-88h]
  const char *v49; // [rsp+8h] [rbp-80h]
  const char *v50; // [rsp+10h] [rbp-78h]
  const char *v51; // [rsp+18h] [rbp-70h]
  const char *v52; // [rsp+20h] [rbp-68h]
  const char *v53; // [rsp+28h] [rbp-60h]
  const char *v54; // [rsp+30h] [rbp-58h]
  const char *v55; // [rsp+38h] [rbp-50h]
  const char *v56; // [rsp+40h] [rbp-48h]
  const char *v57; // [rsp+48h] [rbp-40h]
  const char *v58; // [rsp+50h] [rbp-38h]
  const char *v59; // [rsp+58h] [rbp-30h]
  __int64 v60; // [rsp+60h] [rbp-28h]
  __int64 v61; // [rsp+68h] [rbp-20h]

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
  v48 = "[";
  v24 = &v48;
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
    v24 += 2;
  while ( *v24 && strcmp("install", *v24) );
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

int __usercall sub_404AE0(FILE *s)
{
  char *v1; // rax

  fputs_unlocked(s, s);
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
  return (int)v1;
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
  __int64 result; // rax
  int v5; // eax

  v3 = fallocate(a1, 3, a2, a3);
  if ( v3 >= 0 || (v5 = *__errno_location(), v5 != 38) && v5 != 95 )
    result = (unsigned int)v3;
  else
    result = 0LL;
  return result;
}

int __fastcall sub_404D10(int a1, const char *a2, __mode_t a3)
{
  int result; // eax

  if ( a1 >= 0 )
    result = fchmod(a1, a3);
  else
    result = chmod(a2, a3);
  return result;
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
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rax

  v3 = a3;
  v4 = sub_40E920(1LL, 4LL, a2);
  v5 = sub_40E920(0LL, 4LL, a1);
  __printf_chk(1LL, "%s -> %s", v5, v4, v6, v7);
  if ( v3 )
  {
    v8 = sub_40EA00(4LL, v3);
    v9 = dcgettext(0LL, " (backup: %s)", 5);
    __printf_chk(1LL, v9, v8, v10, v11, v12);
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

__int64 __fastcall sub_404E20(__int64 a1, char *a2, unsigned int *a3)
{
  unsigned int *v3; // rbp
  char *v4; // rbx
  char *v5; // rdx
  FILE *v6; // rdi
  __int64 result; // rax
  char *v8; // rbx
  char *v9; // rax
  char v10; // [rsp+4h] [rbp-34h]
  char v11; // [rsp+Eh] [rbp-2Ah]

  v3 = a3;
  if ( sub_404BD0(a2, *a3) )
  {
    sub_40EA00(4LL, a2);
    v8 = s;
    v9 = dcgettext(0LL, "%s: overwrite %s? ", 5);
    __fprintf_chk(stderr, 1LL, v9, v8);
    result = ((__int64 (*)(void))sub_4119A0)();
  }
  else
  {
    sub_40AF30(*v3, &v10);
    v11 = 0;
    sub_40EA00(4LL, a2);
    v4 = s;
    if ( *(_BYTE *)(a1 + 24) || *(_DWORD *)(a1 + 20) & 0xFFFF00 )
      v5 = dcgettext(0LL, "%s: replace %s, overriding mode %04lo (%s)? ", 5);
    else
      v5 = dcgettext(0LL, "%s: unwritable %s (mode %04lo, %s); try anyway? ", 5);
    v6 = stderr;
    __fprintf_chk(stderr, 1LL, v5, v4);
    result = ((__int64 (__fastcall *)(FILE *, __int64))sub_4119A0)(v6, 1LL);
  }
  return result;
}

__int64 __fastcall sub_404F50(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5)
{
  char v5; // bp
  unsigned int v6; // ebx
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rbp
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rbp
  char *v16; // rbx
  int *v17; // rax

  v5 = a4;
  v6 = a1;
  v7 = sub_409E90(4294967196LL, a1, 4294967196LL, a2, (unsigned __int8)(a5 != 0) << 10, a3);
  if ( v7 < 0 )
  {
    v14 = sub_40E920(1LL, 4LL, a1);
    v15 = sub_40E920(0LL, 4LL, a2);
    v16 = dcgettext(0LL, "cannot create hard link %s to %s", 5);
    v17 = __errno_location();
    error(0, *v17, v16, v15, v14);
    result = 0LL;
  }
  else
  {
    LOBYTE(v6) = v5 & (v7 > 0);
    if ( (_BYTE)v6 )
    {
      v9 = sub_40EA00(4LL, a2);
      v10 = dcgettext(0LL, "removed %s\n", 5);
      __printf_chk(1LL, v10, v9, v11, v12, v13);
      result = v6;
    }
    else
    {
      result = 1LL;
    }
  }
  return result;
}

__int64 __fastcall sub_405060(int a1, __int64 a2, char a3, __off_t a4)
{
  char v4; // r12
  __off_t v5; // rbx
  __off_t v6; // rax
  __int64 v8; // rax
  const char *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  char *v12; // rbx
  int *v13; // rax

  v4 = a3;
  v5 = a4;
  v6 = lseek(a1, a4, 1);
  if ( v6 < 0 )
  {
    v11 = sub_40EA00(4LL, a2);
    v9 = "cannot lseek %s";
    v10 = v11;
  }
  else
  {
    if ( !v4 || (int)sub_404CD0(a1, v6 - v5, v5) >= 0 )
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

__int64 __usercall sub_405120(char *a1, size_t a2, unsigned int a3, int a4, int a5, size_t a6, char a7, __int64 a8, __int64 a9, size_t a10, _QWORD *a11, _BYTE *a12)
{
  unsigned int v12; // er14
  unsigned __int64 v13; // r15
  size_t v14; // rdx
  ssize_t v15; // rax
  int *v16; // rax
  int *v17; // rbx
  unsigned int v18; // er15
  __int64 v19; // rbp
  char *v20; // rax
  int v22; // eax
  char *v23; // r13
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  void *v26; // r11
  _BYTE *v27; // rsi
  size_t v28; // rdx
  int v29; // eax
  char v30; // dl
  bool v31; // al
  int v32; // er9
  __int64 v33; // rax
  char v34; // r9
  unsigned int v35; // eax
  bool v36; // zf
  __int64 v37; // rbx
  char *v38; // rax
  __int64 v39; // rbp
  char *v40; // rbx
  int *v41; // rax
  __off_t v42; // r13
  void *v43; // [rsp+8h] [rbp-A0h]
  int v44; // [rsp+8h] [rbp-A0h]
  int v45; // [rsp+18h] [rbp-90h]
  bool v46; // [rsp+1Dh] [rbp-8Bh]
  char v47; // [rsp+1Eh] [rbp-8Ah]
  char v48; // [rsp+1Fh] [rbp-89h]
  char *buf; // [rsp+20h] [rbp-88h]
  size_t v50; // [rsp+28h] [rbp-80h]
  ssize_t v51; // [rsp+30h] [rbp-78h]
  size_t nbytes; // [rsp+38h] [rbp-70h]
  unsigned __int64 v53; // [rsp+50h] [rbp-58h]
  size_t v54; // [rsp+58h] [rbp-50h]
  char v55; // [rsp+6Ch] [rbp-3Ch]

  v48 = a7;
  *a12 = 0;
  v50 = a10;
  *a11 = 0LL;
  if ( !a10 )
    return 1;
  v54 = a6;
  if ( !a6 )
    a6 = a2;
  v55 = a7;
  nbytes = a2;
  v12 = 0;
  v13 = 0LL;
  buf = a1;
  v45 = a5;
  v53 = a6;
  while ( 1 )
  {
LABEL_5:
    v14 = v50;
    if ( nbytes <= v50 )
      v14 = nbytes;
    v15 = read(a4, buf, v14);
    v51 = v15;
    if ( v15 >= 0 )
      break;
    v16 = __errno_location();
    if ( *v16 != 4 )
    {
      v17 = v16;
      v18 = 0;
      v19 = sub_40EA00(4LL, a8);
      v20 = dcgettext(0LL, "error reading %s", 5);
      error(0, *v17, v20, v19);
      return v18;
    }
  }
  if ( !v15 )
  {
    v42 = v13;
    LOBYTE(a3) = v12;
    goto LABEL_51;
  }
  v22 = (int)a11;
  v23 = buf;
  v24 = v51;
  v25 = v53;
  *a11 += v51;
  v26 = buf;
  v46 = v54 != 0;
  while ( 1 )
  {
    if ( v25 > v24 )
      v25 = v24;
    LOBYTE(a3) = v46 && v25 != 0;
    if ( v46 && v25 != 0 )
      break;
    a3 = v12;
    if ( !(((unsigned __int8)v12 ^ 1) & (v25 == v24)) && v25 )
    {
LABEL_38:
      v22 = -1 - v25;
      if ( 0x7FFFFFFFFFFFFFFFLL - v25 < v13 )
      {
        v18 = 0;
        v37 = sub_40EA00(4LL, a8);
        v38 = dcgettext(0LL, "overflow reading %s", 5);
        error(0, 0, v38, v37);
        return v18;
      }
      v13 += v25;
      v24 -= v25;
      v23 += v25;
      v12 = a3;
      goto LABEL_40;
    }
LABEL_33:
    v13 += v25;
    v44 = 1;
    v47 = 0;
    if ( !(_BYTE)v12 )
      goto LABEL_26;
LABEL_34:
    v35 = sub_405060(v45, a9, v48, v13);
    v34 = v47;
    if ( !(_BYTE)v35 )
      return v35;
LABEL_27:
    v22 = v44;
    if ( v44 )
    {
      if ( !v25 )
      {
        v13 = 0LL;
LABEL_44:
        v36 = v50 == v51;
        v50 -= v51;
        *a12 = a3;
        if ( !v36 )
        {
          v12 = a3;
          goto LABEL_5;
        }
        v42 = v13;
LABEL_51:
        if ( (_BYTE)a3 )
          return sub_405060(v45, a9, v55, v42);
        return 1;
      }
      if ( !v34 )
      {
        v26 = v23;
        v24 -= v25;
        v12 = a3;
        v23 += v25;
        v13 = 0LL;
        goto LABEL_40;
      }
      v13 = v25;
      v26 = v23;
      v12 = a3;
      v25 = 0LL;
    }
    else
    {
      v26 = v23;
      v24 -= v25;
      v12 = a3;
      v23 += v25;
      v13 = v25;
LABEL_40:
      if ( !v24 )
        goto LABEL_44;
    }
  }
  v27 = v23;
  v28 = v25;
  do
  {
    if ( *v27 )
    {
      v31 = v46 && v25 != 0;
      v30 = v12;
      a3 = 0;
      goto LABEL_21;
    }
    ++v27;
    if ( !--v28 )
    {
      LOBYTE(v22) = v13 != 0;
      v32 = v22 & (v12 ^ 1);
      goto LABEL_37;
    }
  }
  while ( v28 & 0xF );
  v43 = v26;
  v29 = memcmp(v23, v27, v28);
  v26 = v43;
  LOBYTE(a3) = v29 == 0;
  v30 = v12 ^ (v29 == 0);
  v31 = v29 != 0;
LABEL_21:
  LOBYTE(v32) = v30 & (v13 != 0);
  if ( v25 != v24 || !v31 )
  {
LABEL_37:
    if ( !(_BYTE)v32 )
      goto LABEL_38;
    v44 = 0;
    goto LABEL_25;
  }
  if ( !(_BYTE)v32 )
  {
    a3 = 0;
    goto LABEL_33;
  }
  v44 = 1;
  a3 = 0;
LABEL_25:
  v47 = v32;
  if ( (_BYTE)v12 )
    goto LABEL_34;
LABEL_26:
  v33 = sub_40B240(v45, v26, v13);
  v34 = v47;
  if ( v13 == v33 )
    goto LABEL_27;
  v18 = v12;
  v39 = sub_40EA00(4LL, a9);
  v40 = dcgettext(0LL, "error writing %s", 5);
  v41 = __errno_location();
  error(0, *v41, v40, v39);
  return v18;
}

__int64 __fastcall sub_405550(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbp
  int *v6; // rax
  int *v7; // r13
  __int64 v8; // rbx
  char *v9; // rax
  int v10; // ebx
  __int64 result; // rax
  unsigned int v12; // ebx

  v5 = a5;
  if ( *(_BYTE *)(a5 + 37) )
  {
    v6 = __errno_location();
    v7 = v6;
    if ( !*(_BYTE *)(v5 + 35) || (v10 = *(unsigned __int8 *)(v5 + 38), (_BYTE)v10) )
    {
      *v6 = 95;
      v8 = sub_40EA00(4LL, a1);
      v9 = dcgettext(0LL, "failed to get security context of %s", 5);
      error(0, *v7, v9, v8);
      v10 = *(unsigned __int8 *)(v5 + 38);
    }
    else
    {
      *v6 = 95;
    }
    result = v10 ^ 1u;
  }
  else
  {
    v12 = a4;
    LOBYTE(v12) = *(_BYTE *)(a5 + 33) & a4;
    if ( (_BYTE)v12 )
    {
      *__errno_location() = 95;
      result = v12;
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
  __int64 v4; // rbx
  int *v5; // rax
  int *v6; // rbp
  __int64 v7; // rbx
  char *v8; // rax
  __int64 result; // rax

  v4 = a4;
  v5 = __errno_location();
  v6 = v5;
  if ( !*(_BYTE *)(v4 + 35) || *(_BYTE *)(v4 + 38) )
  {
    *v5 = 95;
    v7 = sub_40E920(0LL, 4LL, a1);
    v8 = dcgettext(0LL, "failed to set the security context of %s", 5);
    error(0, *v6, v8, v7);
    result = 0LL;
  }
  else
  {
    *v5 = 95;
    result = 0LL;
  }
  return result;
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
    result = *(_BYTE *)(a1 + 26) ^ 1;
  return result;
}

__int64 __fastcall sub_405770(__int64 a1, const char *a2, unsigned int a3, _DWORD *a4, char a5, __int64 a6)
{
  const char *v6; // r12
  unsigned int v7; // ebx
  __uid_t v8; // er14
  __gid_t v9; // er13
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int *v13; // rax
  int v14; // er14
  int *v15; // r15
  char v16; // al
  unsigned int v17; // edx
  int *v19; // rax
  int v20; // ebx
  int *v21; // r14
  __int64 v22; // r12
  char *v23; // rbx
  int *v24; // rax
  int *v25; // rax
  int *v26; // rbx
  int v27; // eax
  __int64 v28; // r12
  char *v29; // rax

  v6 = a2;
  v7 = a3;
  v8 = a4[7];
  v9 = a4[8];
  if ( !a5 )
  {
    if ( *(_QWORD *)(a1 + 24) & 0xFF0000000000FFLL )
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
    BYTE1(v12) |= 0xEu;
    if ( v10 & v12 & 0xFFF && (unsigned int)sub_40D0B0(v6, v7, (unsigned __int16)v10 & (unsigned __int16)v11 & 0x1C0) )
    {
      v25 = __errno_location();
      v26 = v25;
      v27 = *v25;
      if ( v27 != 1 && v27 != 22 || *(_BYTE *)(a1 + 27) )
      {
        v28 = sub_40EA00(4LL, v6);
        v29 = dcgettext(0LL, "clearing permissions for %s", 5);
        error(0, *v26, v29, v28);
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
    return 1;
  }
  if ( !lchown(v6, v8, v9) )
    return 1;
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
    v22 = sub_40EA00(4LL, v6);
    v23 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
    v24 = __errno_location();
    error(0, *v24, v23, v22);
LABEL_20:
    v17 = -*(unsigned __int8 *)(a1 + 36);
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

__int64 __usercall sub_405990(unsigned int a1, __off_t a2, const char *a3, char *a4, __int64 a5, const __m128i *a6, unsigned int a7, unsigned int a8, _BYTE *a9, _BYTE *a10, _BYTE *a11)
{
  char *v11; // r14
  const __m128i *v12; // r13
  unsigned int v13; // er12
  bool v14; // zf
  __int64 v15; // rbx
  int v16; // eax
  char *v17; // rsi
  __int64 v18; // rdi
  int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  __int16 v23; // ax
  __int64 v24; // rcx
  int v25; // er12
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
  __int64 v37; // r8
  __int64 v38; // rcx
  const char *v39; // rdx
  int v40; // er12
  char v41; // al
  void *v42; // r12
  char v43; // r8
  bool v44; // r12
  __int64 v45; // rsi
  char v46; // al
  int v47; // eax
  __int64 v48; // r12
  char *v49; // rbx
  int *v50; // rax
  int v51; // eax
  __mode_t v52; // edx
  __int64 v53; // r12
  char *v54; // rbx
  int *v55; // rax
  unsigned int v56; // eax
  int v57; // eax
  __int64 v58; // r12
  char *v59; // rbx
  int *v60; // rax
  __dev_t v62; // rdx
  __ino_t v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // eax
  __int64 v73; // r12
  char *v74; // rax
  __int64 v75; // r12
  __int64 v76; // rbx
  char *v77; // rax
  __int64 v78; // r8
  __int64 v79; // r9
  int *v80; // rax
  int *v81; // r12
  int v82; // eax
  int v83; // eax
  int *v84; // rax
  __int64 v85; // rbx
  char *v86; // rax
  int v87; // eax
  char v88; // al
  __ino_t v89; // rdx
  __dev_t v90; // rcx
  _QWORD *v91; // rax
  const char *v92; // rsi
  char *v93; // rax
  int v94; // eax
  const char *v95; // rsi
  char *v96; // r12
  int *v97; // rax
  _QWORD *v98; // rax
  __mode_t v99; // er12
  int v100; // eax
  __int64 v101; // r12
  char *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __m128i v106; // xmm1
  __m128i v107; // xmm2
  __m128i v108; // xmm3
  __blkcnt_t v109; // rax
  char *v110; // r12
  char v111; // r15
  void *v112; // rbx
  __int64 v113; // rax
  void *v114; // r14
  char v115; // al
  char v116; // r12
  __int64 v117; // rax
  int v118; // edx
  const char *v119; // rsi
  char *v120; // rax
  _BOOL8 v121; // rcx
  int v122; // eax
  __int64 v123; // rax
  char v124; // r12
  __int64 v125; // rcx
  __m128i *v126; // r9
  __m128i *v127; // rdx
  char v128; // al
  __int64 v129; // r13
  const char *v130; // rsi
  __int64 v131; // rbx
  char *v132; // rax
  int v133; // eax
  int v134; // eax
  bool v135; // al
  char v136; // al
  __int64 v137; // r12
  char *v138; // rbx
  int *v139; // rax
  char *v140; // r12
  int v141; // ecx
  int *v142; // rax
  int *v143; // r12
  int *v144; // rax
  int v145; // er12
  char *v146; // rax
  void *v147; // rcx
  int v148; // esi
  const char *v149; // rdx
  char v150; // r8
  __int64 v151; // rcx
  __int64 v152; // rbx
  char *v153; // rax
  __int64 v154; // r12
  char *v155; // rax
  __int64 v156; // rcx
  char *v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  _BYTE *v162; // rax
  __int64 v163; // rdx
  _BYTE *v164; // r8
  size_t v165; // r12
  size_t v166; // rax
  int v167; // eax
  int v168; // eax
  size_t v169; // rax
  char *v170; // rax
  char *v171; // r12
  char *v172; // rax
  __int64 v173; // rsi
  char *v174; // rax
  char *v175; // r12
  size_t v176; // rax
  void *v177; // rsp
  char *v178; // r12
  char v179; // al
  int v180; // er12
  char *v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // r12
  __int64 v187; // rbx
  char *v188; // rax
  __int64 v189; // r12
  char *v190; // r14
  int *v191; // rax
  __int64 v192; // rax
  char *v193; // r12
  __int64 v194; // r12
  char *v195; // rax
  __int64 v196; // rdx
  unsigned int v197; // eax
  _BYTE *v198; // rax
  __int64 v199; // rbx
  char *v200; // rax
  char v201; // al
  int v202; // er12
  int v203; // eax
  __int64 v204; // rcx
  char v205; // al
  char *v206; // r12
  int *v207; // rax
  int *v208; // rax
  const char *v209; // rsi
  __int64 v210; // rbx
  char *v211; // rax
  char *v212; // r12
  int *v213; // rax
  char *v214; // r12
  int *v215; // rax
  char *v216; // rax
  __int64 v217; // rcx
  int v218; // eax
  __int64 v219; // r12
  char *v220; // rax
  __int64 v221; // r12
  char *v222; // rax
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  unsigned __int64 v226; // r12
  __blksize_t v227; // rax
  __blksize_t v228; // rdi
  unsigned __int64 v229; // rax
  char *v230; // rsi
  unsigned __int64 v231; // rdx
  bool v232; // r9
  int v233; // eax
  char v234; // r8
  int v235; // eax
  char *v236; // r12
  int *v237; // rax
  char *v238; // r12
  int *v239; // rax
  int v240; // eax
  int v241; // eax
  char *v242; // r12
  int *v243; // rax
  int v244; // eax
  __off_t v245; // r12
  char *v246; // rcx
  __off_t v247; // rbx
  char v248; // r15
  size_t v249; // r14
  char v250; // al
  size_t v251; // rdx
  __off_t v252; // rsi
  unsigned int v253; // er13
  __int64 v254; // rax
  size_t v255; // r8
  __off_t *v256; // rax
  __int64 v257; // rcx
  bool v258; // r12
  const char *v259; // rsi
  char *v260; // r12
  int *v261; // rax
  __int64 v262; // rdx
  char *v263; // rbx
  __int64 v264; // r12
  __int64 v265; // rax
  int v266; // eax
  __int64 v267; // r12
  int *v268; // rax
  char *v269; // r12
  int *v270; // rax
  __int64 v271; // rcx
  char *v272; // rdi
  void *v273; // rax
  __int64 v274; // r12
  char *v275; // rax
  __int64 v276; // rcx
  __int64 v277; // r8
  __int64 v278; // r9
  const char *v279; // rsi
  char *v280; // r12
  int *v281; // rax
  char *v282; // rax
  int v283; // eax
  int v284; // eax
  char *v285; // r12
  int *v286; // rax
  __blksize_t v287; // rax
  __int64 v288; // r12
  char *v289; // rax
  char v290; // [rsp+1h] [rbp-381h]
  unsigned __int64 v291; // [rsp+Ah] [rbp-378h]
  __off_t v292; // [rsp+1Ah] [rbp-368h]
  const __m128i *v293; // [rsp+22h] [rbp-360h]
  unsigned int v294; // [rsp+2Ah] [rbp-358h]
  unsigned int v295; // [rsp+2Eh] [rbp-354h]
  char *v296; // [rsp+32h] [rbp-350h]
  int v297; // [rsp+3Ah] [rbp-348h]
  __mode_t v298; // [rsp+3Eh] [rbp-344h]
  __blksize_t v299; // [rsp+42h] [rbp-340h]
  char *v300; // [rsp+4Ah] [rbp-338h]
  char *s; // [rsp+52h] [rbp-330h]
  unsigned int v302; // [rsp+5Ah] [rbp-328h]
  char v303; // [rsp+5Fh] [rbp-323h]
  unsigned __int8 v304; // [rsp+60h] [rbp-322h]
  char v305; // [rsp+61h] [rbp-321h]
  struct stat *v306; // [rsp+62h] [rbp-320h]
  __int64 v307; // [rsp+6Ah] [rbp-318h]
  char *s2; // [rsp+72h] [rbp-310h]
  void *s1; // [rsp+7Ah] [rbp-308h]
  char *old; // [rsp+82h] [rbp-300h]
  __off_t v311; // [rsp+8Ah] [rbp-2F8h]
  size_t n; // [rsp+92h] [rbp-2F0h]
  int fd[2]; // [rsp+9Ah] [rbp-2E8h]
  void *ptr; // [rsp+A2h] [rbp-2E0h]
  struct stat *v315; // [rsp+AAh] [rbp-2D8h]
  char *src; // [rsp+B2h] [rbp-2D0h]
  __mode_t v317; // [rsp+BAh] [rbp-2C8h]
  int v318; // [rsp+BEh] [rbp-2C4h]
  int fildes[2]; // [rsp+C2h] [rbp-2C0h]
  char *filename; // [rsp+CAh] [rbp-2B8h]
  char v321; // [rsp+D9h] [rbp-2A9h]
  __int64 v322; // [rsp+DAh] [rbp-2A8h]
  __int128 length; // [rsp+E2h] [rbp-2A0h]
  timespec v324; // [rsp+F2h] [rbp-290h]
  char v325; // [rsp+102h] [rbp-280h]
  char v326; // [rsp+103h] [rbp-27Fh]
  void *v327; // [rsp+10Ah] [rbp-278h]
  struct stat stat_buf; // [rsp+112h] [rbp-270h]
  struct stat v329; // [rsp+1A2h] [rbp-1E0h]
  struct stat v330; // [rsp+232h] [rbp-150h]
  struct stat v331; // [rsp+2C2h] [rbp-C0h]
  __int64 savedregs; // [rsp+382h] [rbp+0h]

  v11 = (char *)a3;
  v12 = a6;
  v13 = a1;
  filename = a4;
  LOBYTE(fildes[0]) = a11 != 0LL;
  v14 = a6[1].m128i_i8[8] == 0;
  v15 = a8;
  v311 = a2;
  *(_QWORD *)fd = a5;
  if ( !v14 && a11 != 0LL )
    *a11 = 0;
  v14 = HIDWORD(a6->m128i_i64[0]) == 2;
  *a10 = 0;
  v315 = &stat_buf;
  if ( !v14 )
  {
    v16 = __xstat(1, a3, &stat_buf);
    v17 = (char *)a3;
    LOBYTE(a7) = v16 != 0;
    if ( !v16 )
      goto LABEL_6;
LABEL_118:
    a7 = 0;
    v58 = sub_40EA00(4LL, v17);
    v59 = dcgettext(0LL, "cannot stat %s", 5);
    v60 = __errno_location();
    error(0, *v60, v59, v58);
    return a7;
  }
  v57 = __lxstat(1, a3, &stat_buf);
  v17 = (char *)a3;
  LOBYTE(a7) = v57 != 0;
  if ( v57 )
    goto LABEL_118;
LABEL_6:
  v317 = stat_buf.st_mode;
  v318 = stat_buf.st_mode & 0xF000;
  if ( v318 != 0x4000 )
  {
    if ( !(_BYTE)a8 )
      goto LABEL_10;
    v18 = v12[4].m128i_i64[0];
    if ( LODWORD(v12->m128i_i64[0]) )
    {
      sub_40AE60(v18, v11, v315);
      goto LABEL_10;
    }
    v88 = sub_40AEF0(v18, v11, v315);
    if ( v88 )
    {
      LOBYTE(filename) = v88;
      v152 = sub_40EA00(4LL, v11);
      v153 = dcgettext(0LL, "warning: source file %s specified more than once", 5);
      error(0, 0, v153, v152);
      return (unsigned __int8)filename;
    }
    goto LABEL_170;
  }
  if ( !v12[2].m128i_i8[10] )
  {
    v117 = sub_40EA00(4LL, v17);
    v118 = 5;
    v15 = v117;
    if ( !v12[1].m128i_i8[9] )
    {
LABEL_241:
      v120 = dcgettext(0LL, "-r not specified; omitting directory %s", v118);
      goto LABEL_227;
    }
    v119 = "omitting directory %s";
    goto LABEL_226;
  }
  if ( (_BYTE)a8 )
LABEL_170:
    sub_40AE60(v12[4].m128i_i64[0], v11, v315);
LABEL_10:
  LODWORD(ptr) = 1;
  v19 = HIDWORD(v12->m128i_i64[0]);
  if ( v19 != 4 )
    LODWORD(ptr) = (unsigned __int8)a8 & (v19 == 3);
  if ( (_BYTE)v13 )
  {
LABEL_59:
    LOBYTE(src) = 1;
    LOBYTE(v24) = 0;
    old = 0LL;
    goto LABEL_60;
  }
  if ( v318 != 0x8000 && (!v12[1].m128i_i8[4] || v318 == 0x4000 || v318 == 40960)
    || v12[1].m128i_i8[8]
    || v12[2].m128i_i8[12]
    || v12[1].m128i_i8[7]
    || LODWORD(v12->m128i_i64[0])
    || v12[1].m128i_i8[5] )
  {
    n = (size_t)&v329;
    v83 = __lxstat(1, filename, &v329);
    v21 = v13;
    LOBYTE(src) = v83 != 0;
    if ( !v83 )
      goto LABEL_23;
    goto LABEL_158;
  }
  n = (size_t)&v329;
  v20 = __xstat(1, filename, &v329);
  v21 = 1LL;
  LOBYTE(src) = v20 != 0;
  if ( v20 )
  {
LABEL_158:
    v84 = __errno_location();
    if ( *v84 != 2 )
    {
      *(_QWORD *)fildes = v84;
      a7 = v13;
      v85 = sub_40EA00(4LL, filename);
      v86 = dcgettext(0LL, "cannot stat %s", 5);
      error(0, **(_DWORD **)fildes, v86, v85);
      return a7;
    }
    goto LABEL_59;
  }
LABEL_23:
  if ( stat_buf.st_ino != v329.st_ino || stat_buf.st_dev != v329.st_dev )
  {
    if ( HIDWORD(v12->m128i_i64[0]) != 2 )
      goto LABEL_25;
    v124 = 0;
    v125 = 0LL;
  }
  else
  {
    v124 = v12[1].m128i_i8[7];
    if ( v124 )
      goto LABEL_325;
    if ( HIDWORD(v12->m128i_i64[0]) != 2 )
    {
      LOBYTE(old) = v21;
      s2 = (char *)&v330;
      v133 = __lxstat(1, filename, &v330);
      LODWORD(v21) = (unsigned __int8)old;
      if ( v133 )
        goto LABEL_25;
      v306 = &v331;
      v134 = __lxstat(1, v11, &v331);
      v21 = (unsigned __int8)old;
      if ( v134 )
        goto LABEL_25;
      if ( v331.st_ino == v330.st_ino )
        v124 = v331.st_dev == v330.st_dev;
      v126 = (__m128i *)s2;
      v127 = (__m128i *)v306;
      if ( (v331.st_mode & 0xF000) == 40960 && (v330.st_mode & 0xF000) == 40960 && v12[1].m128i_i8[5] )
        goto LABEL_25;
      goto LABEL_244;
    }
    v124 = 1;
    v125 = 1LL;
  }
  v126 = (__m128i *)n;
  v127 = (__m128i *)v315;
  if ( (stat_buf.st_mode & 0xF000) == 40960 && (v329.st_mode & 0xF000) == 40960 )
  {
    LODWORD(s1) = v125;
    LOBYTE(old) = v21;
    if ( (unsigned __int8)sub_40EF80(v11, filename, v315, v125, v21, n) )
      goto LABEL_250;
    LODWORD(v21) = (unsigned __int8)old;
    if ( LODWORD(v12->m128i_i64[0]) || !(_DWORD)s1 )
      goto LABEL_25;
    v179 = 1;
    LOBYTE(v180) = v12[1].m128i_i8[8] ^ 1;
    goto LABEL_369;
  }
LABEL_244:
  if ( LODWORD(v12->m128i_i64[0]) )
  {
    if ( !v124 )
    {
      if ( v12[1].m128i_i8[8]
        || HIDWORD(v12->m128i_i64[0]) == 2
        || (v127[1].m128i_i32[2] & 0xF000) != 40960
        || (v126[1].m128i_i32[2] & 0xF000) == 40960 )
      {
        goto LABEL_25;
      }
LABEL_250:
      v33 = sub_40E920(1LL, 4LL, filename);
      v34 = "%s and %s are the same file";
      v35 = sub_40E920(0LL, 4LL, v11);
LABEL_56:
      v36 = dcgettext(0LL, v34, 5);
      v37 = v33;
      v38 = v35;
      v39 = v36;
LABEL_57:
      error(0, 0, v39, v38, v37);
      return 0;
    }
    LOBYTE(src) = v21;
    v205 = sub_40EF80(v11, filename, v127, v125, v21, v126);
    LODWORD(v21) = (unsigned __int8)src;
    LOBYTE(v180) = v205 ^ 1;
    v179 = 0;
LABEL_369:
    if ( (_BYTE)v180 )
    {
      LOBYTE(src) = v179;
      goto LABEL_25;
    }
    goto LABEL_250;
  }
  v151 = v12[1].m128i_u8[8];
  if ( (_BYTE)v151 || v12[1].m128i_i8[5] )
  {
    if ( (v126[1].m128i_i32[2] & 0xF000) == 40960 )
      goto LABEL_25;
    if ( !v124 || v126[1].m128i_i64[0] <= 1uLL )
    {
      if ( (v127[1].m128i_i32[2] & 0xF000) == 40960 )
        goto LABEL_312;
      goto LABEL_342;
    }
    LOBYTE(s2) = v21;
    s1 = v126;
    old = (char *)v127;
    v179 = sub_40EF80(v11, filename, v127, v151, v21, v126);
    v127 = (__m128i *)old;
    v126 = (__m128i *)s1;
    LODWORD(v21) = (unsigned __int8)s2;
    if ( !v179 )
    {
      LOBYTE(v180) = v12[1].m128i_i8[8] ^ 1;
      goto LABEL_369;
    }
    if ( (*((_DWORD *)old + 6) & 0xF000) == 40960 )
      goto LABEL_311;
  }
  else if ( (v127[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    goto LABEL_314;
  }
  if ( (v126[1].m128i_i32[2] & 0xF000) != 40960 )
  {
LABEL_342:
    if ( v127->m128i_i64[1] != v126->m128i_i64[1] || v127->m128i_i64[0] != v126->m128i_i64[0] )
      goto LABEL_25;
    if ( v12[1].m128i_i8[7] )
      goto LABEL_325;
  }
LABEL_311:
  LOBYTE(v151) = v12[1].m128i_i8[8];
LABEL_312:
  if ( (_BYTE)v151 )
  {
    if ( (stat_buf.st_mode & 0xF000) == 40960 && v126[1].m128i_i64[0] > 1uLL )
    {
      LOBYTE(s2) = v21;
      s1 = v126;
      old = (char *)v127;
      v216 = canonicalize_file_name(v11);
      v127 = (__m128i *)old;
      v126 = (__m128i *)s1;
      LODWORD(v21) = (unsigned __int8)s2;
      if ( v216 )
      {
        LOBYTE(old) = (_BYTE)s2;
        src = v216;
        v180 = (unsigned __int64)sub_40EF80(v216, filename, v127, v217, (unsigned __int8)s2, s1) ^ 1;
        free(src);
        v179 = 0;
        LODWORD(v21) = (unsigned __int8)s2;
        goto LABEL_369;
      }
    }
  }
LABEL_314:
  if ( v12[2].m128i_i8[12] || v12[1].m128i_i32[1] & 0xFF00FF00 && (v126[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    LOBYTE(v180) = v126->m128i_i64[0] == v127->m128i_i64[0];
    v179 = 0;
    goto LABEL_369;
  }
  if ( HIDWORD(v12->m128i_i64[0]) != 2 )
    goto LABEL_250;
  if ( (v127[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    LOBYTE(s1) = v21;
    old = (char *)v126;
    v241 = __xstat(1, v11, &v331);
    v126 = (__m128i *)old;
    LODWORD(v21) = (unsigned __int8)s1;
    if ( v241 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v331.st_dev = _mm_load_si128(v127);
    *(__m128i *)&v331.st_nlink = _mm_load_si128(v127 + 1);
    *(__m128i *)&v331.st_gid = _mm_load_si128(v127 + 2);
    *(__m128i *)&v331.st_size = _mm_load_si128(v127 + 3);
    *(__m128i *)&v331.st_blocks = _mm_load_si128(v127 + 4);
    *(__m128i *)&v331.st_atim.tv_nsec = _mm_load_si128(v127 + 5);
    *(__m128i *)&v331.st_mtim.tv_nsec = _mm_load_si128(v127 + 6);
    *(__m128i *)&v331.st_ctim.tv_nsec = _mm_load_si128(v127 + 7);
    *(__m128i *)&v331.__unused[1] = _mm_load_si128(v127 + 8);
  }
  if ( (v126[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    LOBYTE(old) = v21;
    v240 = __xstat(1, filename, &v330);
    LODWORD(v21) = (unsigned __int8)old;
    if ( v240 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v330.st_dev = _mm_load_si128(v126);
    *(__m128i *)&v330.st_nlink = _mm_load_si128(v126 + 1);
    *(__m128i *)&v330.st_gid = _mm_load_si128(v126 + 2);
    *(__m128i *)&v330.st_size = _mm_load_si128(v126 + 3);
    *(__m128i *)&v330.st_blocks = _mm_load_si128(v126 + 4);
    *(__m128i *)&v330.st_atim.tv_nsec = _mm_load_si128(v126 + 5);
    *(__m128i *)&v330.st_mtim.tv_nsec = _mm_load_si128(v126 + 6);
    *(__m128i *)&v330.st_ctim.tv_nsec = _mm_load_si128(v126 + 7);
    *(__m128i *)&v330.__unused[1] = _mm_load_si128(v126 + 8);
  }
  if ( v331.st_ino == v330.st_ino && v331.st_dev == v330.st_dev )
  {
    if ( !v12[1].m128i_i8[7] )
      goto LABEL_250;
LABEL_325:
    LOBYTE(src) = 1;
  }
LABEL_25:
  if ( v318 == 0x4000 )
  {
    if ( !v12[1].m128i_i8[8] )
      goto LABEL_30;
    v22 = v12->m128i_i64[1];
  }
  else
  {
    if ( v12[2].m128i_i8[13] )
    {
      v121 = 0LL;
      if ( v12[1].m128i_i8[15] )
      {
        v121 = 1LL;
        if ( v12[1].m128i_i8[8] )
          v121 = v329.st_dev != stat_buf.st_dev;
      }
      LOBYTE(old) = v21;
      v122 = sub_40FD60(filename, n, v315, v121);
      LODWORD(v21) = (unsigned __int8)old;
      if ( v122 >= 0 )
      {
        if ( a11 )
          *a11 = 1;
        v123 = sub_409A10(filename);
        if ( v123 && !(unsigned __int8)sub_404F50(v123, (__int64)filename, 1u, v12[2].m128i_i8[14], (char)ptr) )
        {
          if ( !v12[2].m128i_i8[5] )
            return a7;
          goto LABEL_240;
        }
        return 1;
      }
    }
    v22 = v12->m128i_i64[1];
    if ( !v12[1].m128i_i8[8] )
    {
      if ( v22 == 2 )
        return 1;
      if ( v22 == 3 )
      {
        LOBYTE(old) = v21;
        v201 = sub_404E20((__int64)v12, filename, (unsigned int *)(n + 24));
        LODWORD(v21) = (unsigned __int8)old;
        if ( !v201 )
          return 1;
      }
      goto LABEL_30;
    }
  }
  if ( v22 == 2
    || (v22 == 3
     || v22 == 4
     && v12[2].m128i_i8[15]
     && (LOBYTE(old) = v21, v135 = sub_404BD0(filename, v329.st_mode), LODWORD(v21) = (unsigned __int8)old, !v135))
    && (LOBYTE(old) = v21,
        v136 = sub_404E20((__int64)v12, filename, (unsigned int *)(n + 24)),
        LODWORD(v21) = (unsigned __int8)old,
        !v136) )
  {
    if ( !a11 )
      return 1;
LABEL_285:
    a7 = 1;
    *a11 = 1;
    return a7;
  }
LABEL_30:
  if ( (_BYTE)src )
    return 1;
  v23 = v329.st_mode;
  v24 = (unsigned int)v21 ^ 1;
  if ( (v329.st_mode & 0xF000) != 0x4000 )
  {
    if ( v318 == 0x4000 )
    {
      if ( !v12[1].m128i_i8[8] || (v25 = v12->m128i_i64[0]) == 0 )
      {
        v33 = sub_40E920(1LL, 4LL, v11);
        v34 = "cannot overwrite non-directory %s with directory %s";
        v35 = sub_40E920(0LL, 4LL, filename);
        goto LABEL_56;
      }
      if ( !(_BYTE)a8 )
        goto LABEL_350;
    }
    else
    {
      v25 = v12->m128i_i64[0];
      if ( !(_BYTE)a8 )
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
      if ( v318 == 0x4000 )
        goto LABEL_38;
      v23 = v329.st_mode;
      if ( (v329.st_mode & 0xF000) != 0x4000 )
        goto LABEL_38;
      goto LABEL_348;
    }
    if ( !v12[1].m128i_i8[8] )
      goto LABEL_391;
LABEL_350:
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      goto LABEL_351;
    goto LABEL_409;
  }
  if ( v318 != 0x4000 )
  {
LABEL_348:
    if ( v12[1].m128i_i8[8] )
    {
      v25 = v12->m128i_i64[0];
      if ( LODWORD(v12->m128i_i64[0]) )
        goto LABEL_350;
    }
    v119 = "cannot overwrite directory %s with non-directory";
    v15 = sub_40EA00(4LL, filename);
LABEL_226:
    v120 = dcgettext(0LL, v119, 5);
LABEL_227:
    a7 = 0;
    error(0, 0, v120, v15);
    return a7;
  }
LABEL_38:
  v25 = v12->m128i_i64[0];
LABEL_39:
  v28 = v12[1].m128i_i8[8];
  if ( v28 )
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      goto LABEL_395;
    v23 = v329.st_mode;
LABEL_409:
    if ( (v23 & 0xF000) == 0x4000 )
    {
LABEL_395:
      if ( !v25 )
        goto LABEL_393;
      goto LABEL_351;
    }
    if ( !v25 )
    {
      v33 = sub_40EAD0(0LL, 3LL, filename, v24);
      v34 = "cannot move directory onto non-directory: %s -> %s";
      v35 = sub_40EAD0(0LL, 3LL, v11, v204);
      goto LABEL_56;
    }
LABEL_351:
    LOBYTE(n) = v24;
    v162 = (_BYTE *)sub_40AD40(v11);
    v24 = (unsigned __int8)n;
    v164 = v162;
    if ( *v162 != 46 )
      goto LABEL_352;
    v28 = 1;
    goto LABEL_431;
  }
  if ( v25 )
  {
LABEL_391:
    LOBYTE(n) = v24;
    v198 = (_BYTE *)sub_40AD40(v11);
    v24 = (unsigned __int8)n;
    v164 = v198;
    if ( *v198 != 46 )
    {
LABEL_392:
      if ( (v329.st_mode & 0xF000) == 0x4000 )
      {
LABEL_393:
        old = 0LL;
        goto LABEL_60;
      }
LABEL_352:
      if ( v25 != 3 )
      {
        LOBYTE(n) = v24;
        s1 = v164;
        src = (char *)strlen(v164);
        old = (char *)sub_40AD40(filename);
        v165 = strlen(old);
        s2 = src;
        v166 = strlen(src);
        v24 = (unsigned __int8)n;
        v307 = v166;
        if ( src == (char *)(v165 + v166) )
        {
          LOBYTE(src) = n;
          n = (size_t)s1;
          v167 = memcmp(s1, old, v165);
          v24 = (unsigned __int8)src;
          if ( !v167 )
          {
            v168 = strcmp((const char *)(n + v165), s2);
            v24 = (unsigned __int8)src;
            if ( !v168 )
            {
              LOBYTE(old) = (_BYTE)src;
              v169 = strlen(filename);
              n = v169;
              v170 = (char *)sub_4112E0(v307 + v169 + 1);
              v171 = v170;
              src = src;
              v172 = (char *)mempcpy(v170, filename, n);
              strcpy(v172, src);
              LODWORD(src) = __xstat(1, v171, &v331);
              free(v171);
              v24 = (unsigned __int8)old;
              if ( !(_DWORD)src && stat_buf.st_ino == v331.st_ino && stat_buf.st_dev == v331.st_dev )
              {
                if ( v12[1].m128i_i8[8] )
                  v263 = dcgettext(0LL, "backing up %s might destroy source;  %s not moved", 5);
                else
                  v263 = dcgettext(0LL, "backing up %s might destroy source;  %s not copied", 5);
                v264 = sub_40E920(1LL, 4LL, v11);
                v265 = sub_40E920(0LL, 4LL, filename);
                v37 = v264;
                v39 = v263;
                v38 = v265;
                goto LABEL_57;
              }
            }
          }
        }
      }
      v173 = LODWORD(v12->m128i_i64[0]);
      LOBYTE(src) = v24;
      v174 = (char *)sub_40A8B0(filename, v173, v163, v24, v164);
      v175 = v174;
      old = v174;
      LOBYTE(n) = (_BYTE)src;
      if ( v174 )
      {
        v176 = strlen(v174);
        v177 = alloca(v176 + 9);
        v178 = (char *)memcpy((void *)(((unsigned __int64)&v292 + 7) & 0xFFFFFFFFFFFFFFF0LL), v175, v176 + 1);
        free(old);
        old = v178;
        LOBYTE(v24) = n;
        LOBYTE(src) = 1;
        goto LABEL_60;
      }
      v208 = __errno_location();
      LOBYTE(src) = 1;
      LOBYTE(v24) = n;
      v31 = v208;
      if ( *v208 == 2 )
        goto LABEL_60;
      v209 = "cannot backup %s";
      v210 = sub_40EA00(4LL, filename);
LABEL_422:
      a7 = 0;
      v211 = dcgettext(0LL, v209, 5);
      error(0, *v31, v211, v210);
      return a7;
    }
    v28 = 0;
LABEL_431:
    v163 = (unsigned __int8)v164[(v164[1] == 46) + 1];
    if ( !(_BYTE)v163 || (_BYTE)v163 == 47 )
      goto LABEL_41;
    if ( v28 )
      goto LABEL_352;
    goto LABEL_392;
  }
LABEL_41:
  old = 0LL;
  if ( (unsigned __int8)v28 | ((v329.st_mode & 0xF000) == 0x4000)
    || (LOBYTE(src) = v12[1].m128i_i8[5], !(_BYTE)src)
    && (!v12[2].m128i_i8[2] || v329.st_nlink <= 1)
    && ((old = 0LL, HIDWORD(v12->m128i_i64[0]) != 2) || (stat_buf.st_mode & 0xF000) == 0x8000) )
  {
LABEL_60:
    if ( !(_BYTE)a8 || !v12[3].m128i_i64[1] )
      goto LABEL_61;
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
      v209 = "cannot remove %s";
      v210 = sub_40EA00(4LL, filename);
      goto LABEL_422;
    }
  }
  LOBYTE(src) = v12[2].m128i_i8[14];
  if ( (_BYTE)src )
  {
    LOBYTE(n) = v24;
    v221 = sub_40EA00(4LL, filename);
    v222 = dcgettext(0LL, "removed %s\n", 5);
    __printf_chk(1LL, v222, v221, v223, v224, v225);
    LOBYTE(v24) = n;
    old = 0LL;
    goto LABEL_60;
  }
  if ( !(_BYTE)a8 )
  {
    LOBYTE(src) = v12[2].m128i_i8[10] & (v318 == 0x4000);
    if ( (_BYTE)src )
    {
      v62 = stat_buf.st_dev;
      v63 = stat_buf.st_ino;
      old = 0LL;
      goto LABEL_229;
    }
    LOBYTE(src) = 1;
    old = 0LL;
    goto LABEL_65;
  }
  v14 = v12[3].m128i_i64[1] == 0;
  LOBYTE(src) = a8;
  old = 0LL;
  if ( !v14 )
  {
LABEL_50:
    if ( v12[1].m128i_i8[8] )
    {
      if ( v12[2].m128i_i8[14] )
      {
LABEL_144:
        if ( v318 != 0x4000 || !v12[2].m128i_i8[10] )
          goto LABEL_146;
LABEL_126:
        v62 = stat_buf.st_dev;
        v63 = stat_buf.st_ino;
        if ( (_BYTE)a8 )
        {
          n = sub_409A10(filename);
          goto LABEL_128;
        }
LABEL_229:
        n = sub_4099D0(v63, v62);
LABEL_128:
        if ( !n )
          goto LABEL_142;
        goto LABEL_129;
      }
      goto LABEL_124;
    }
    if ( LODWORD(v12->m128i_i64[0]) )
    {
      if ( !v12[2].m128i_i8[14] )
      {
        if ( v318 != 0x4000 )
          goto LABEL_66;
        goto LABEL_187;
      }
LABEL_63:
      if ( v318 != 0x4000 )
      {
        sub_404D70((__int64)v11, (__int64)filename, (__int64)old);
        goto LABEL_65;
      }
LABEL_187:
      if ( v12[2].m128i_i8[10] )
        goto LABEL_126;
LABEL_66:
      if ( !v12[2].m128i_i8[2] )
      {
        n = 0LL;
        fildes[0] = (unsigned __int8)src;
        goto LABEL_68;
      }
LABEL_140:
      if ( v12[1].m128i_i8[7] )
      {
        n = 0LL;
        goto LABEL_142;
      }
      if ( stat_buf.st_nlink <= 1 )
      {
        v87 = HIDWORD(v12->m128i_i64[0]);
        if ( !(_BYTE)a8 || v87 != 3 )
        {
          n = 0LL;
          if ( v87 != 4 )
            goto LABEL_142;
        }
      }
      n = sub_409A10(filename);
      goto LABEL_165;
    }
    v32 = &v329;
    if ( !(_BYTE)v24 )
    {
      if ( __lxstat(1, filename, &v331) )
        goto LABEL_61;
      v32 = &v331;
    }
    if ( (v32->st_mode & 0xF000) != 40960 || !(unsigned __int8)sub_40AEF0(v12[3].m128i_i64[1], filename, v32) )
    {
LABEL_61:
      if ( v12[2].m128i_i8[14] )
      {
        if ( !v12[1].m128i_i8[8] )
          goto LABEL_63;
        goto LABEL_144;
      }
      goto LABEL_124;
    }
    v33 = sub_40E920(1LL, 4LL, filename);
    v34 = "will not copy %s through just-created symlink %s";
    v35 = sub_40E920(0LL, 4LL, v11);
    goto LABEL_56;
  }
LABEL_124:
  if ( v12[2].m128i_i8[10] && v318 == 0x4000 )
    goto LABEL_126;
LABEL_65:
  if ( !v12[1].m128i_i8[8] )
    goto LABEL_66;
LABEL_146:
  if ( stat_buf.st_nlink != 1 )
  {
    if ( !v12[2].m128i_i8[2] )
    {
      n = 0LL;
      goto LABEL_149;
    }
    goto LABEL_140;
  }
  n = sub_4099D0(stat_buf.st_ino, stat_buf.st_dev);
LABEL_165:
  if ( !n )
    goto LABEL_142;
  if ( v318 != 0x4000 )
  {
    if ( (unsigned __int8)sub_404F50(n, (__int64)filename, 1u, v12[2].m128i_i8[14], (char)ptr) )
      return 1;
    goto LABEL_135;
  }
LABEL_129:
  if ( (unsigned __int8)sub_40EF80(v11, n, v64, v65, v66, v67) )
  {
    v15 = sub_40E920(1LL, 4LL, qword_621988);
    v154 = sub_40E920(0LL, 4LL, qword_621990);
    v155 = dcgettext(0LL, "cannot copy a directory, %s, into itself, %s", 5);
    error(0, 0, v155, v154, v15);
    *a10 = 1;
LABEL_135:
    if ( !v12[2].m128i_i8[5] )
      goto LABEL_136;
    goto LABEL_240;
  }
  if ( (unsigned __int8)sub_40EF80(filename, n, v68, v69, v70, v71) )
  {
    v199 = sub_40EA00(4LL, qword_621990);
    v200 = dcgettext(0LL, "warning: source directory %s specified more than once", 5);
    error(0, 0, v200, v199);
    if ( !v12[1].m128i_i8[8] || !LOBYTE(fildes[0]) )
      return 1;
    goto LABEL_285;
  }
  v72 = HIDWORD(v12->m128i_i64[0]);
  if ( v72 != 4 && (v72 != 3 || !(_BYTE)a8) )
  {
    v73 = sub_40E920(1LL, 4LL, n);
    v15 = sub_40E920(0LL, 4LL, filename);
    v74 = dcgettext(0LL, "will not create hard link %s to directory %s", 5);
    error(0, 0, v74, v15, v73);
    goto LABEL_135;
  }
LABEL_142:
  if ( !v12[1].m128i_i8[8] )
  {
    fildes[0] = (unsigned __int8)src;
    goto LABEL_68;
  }
LABEL_149:
  if ( !rename(v11, filename) )
  {
    if ( v12[2].m128i_i8[14] )
    {
      v157 = dcgettext(0LL, "renamed ", 5);
      __printf_chk(1LL, v157, v158, v159, v160, v161);
      sub_404D70((__int64)v11, (__int64)filename, (__int64)old);
    }
    if ( v12[2].m128i_i8[1] )
      sub_405620((__int64)filename, 0LL, 1LL, (__int64)v12);
    if ( a11 )
      *a11 = 1;
    if ( (_BYTE)a8 )
    {
      a7 = a8;
      sub_40AE60(v12[3].m128i_i64[1], filename, v315);
      return a7;
    }
    return 1;
  }
  v80 = __errno_location();
  v81 = v80;
  v82 = *v80;
  if ( v82 == 22 )
  {
    a7 = 1;
    v186 = sub_40E920(1LL, 4LL, qword_621988);
    v187 = sub_40E920(0LL, 4LL, qword_621990);
    v188 = dcgettext(0LL, "cannot move %s to a subdirectory of itself, %s", 5);
    error(0, 0, v188, v187, v186);
    *a10 = 1;
    return a7;
  }
  if ( v82 != 18 )
  {
    v129 = sub_40E920(1LL, 4LL, filename);
    v130 = "cannot move %s to %s";
    v131 = sub_40E920(0LL, 4LL, v11);
    goto LABEL_256;
  }
  if ( v318 == 0x4000 )
  {
    if ( !rmdir(filename) || *v81 == 2 )
      goto LABEL_156;
    goto LABEL_255;
  }
  if ( unlink(filename) && *v81 != 2 )
  {
LABEL_255:
    v129 = sub_40E920(1LL, 4LL, filename);
    v130 = "inter-device move failed: %s to %s; unable to remove target";
    v131 = sub_40E920(0LL, 4LL, v11);
LABEL_256:
    v132 = dcgettext(0LL, v130, 5);
    error(0, *v81, v132, v131, v129);
    sub_409980(stat_buf.st_ino, stat_buf.st_dev);
    return a7;
  }
  LOBYTE(src) = v12[2].m128i_i8[14] & (v318 != 0x4000);
  if ( !(_BYTE)src )
  {
LABEL_156:
    fildes[0] = 1;
    LOBYTE(src) = 1;
    goto LABEL_68;
  }
  v181 = dcgettext(0LL, "copied ", 5);
  __printf_chk(1LL, v181, v182, v183, v184, v185);
  sub_404D70((__int64)v11, (__int64)filename, (__int64)old);
  fildes[0] = 1;
LABEL_68:
  v40 = v317 & 0xFFF;
  if ( v12[2].m128i_i8[11] )
    v40 = v12[1].m128i_i32[0] & 0xFFF;
  if ( v12[1].m128i_i8[13] )
  {
    if ( !(unsigned __int8)sub_405550((__int64)v11, (__int64)filename, v317, fildes[0], (__int64)v12) )
      return a7;
    LODWORD(s1) = v40 & 0x3F;
    if ( v318 != 0x4000 )
      goto LABEL_73;
LABEL_178:
    v89 = stat_buf.st_ino;
    v90 = stat_buf.st_dev;
    v91 = *(_QWORD **)fd;
    if ( *(_QWORD *)fd )
    {
      while ( v91[1] != stat_buf.st_ino || v91[2] != stat_buf.st_dev )
      {
        v91 = (_QWORD *)*v91;
        if ( !v91 )
          goto LABEL_200;
      }
      v92 = "cannot copy cyclic symbolic link %s";
      v15 = sub_40EA00(4LL, v11);
      goto LABEL_184;
    }
LABEL_200:
    v98 = (_QWORD *)((unsigned __int64)&v290 & 0xFFFFFFFFFFFFFFF0LL);
    v14 = (_BYTE)src == 0;
    v307 = (__int64)v98;
    *v98 = *(_QWORD *)fd;
    v98[1] = v89;
    v98[2] = v90;
    if ( v14 && (v329.st_mode & 0xF000) == 0x4000 )
    {
      if ( v12[2].m128i_i64[0] & 0xFF000000FF00LL
        && !(unsigned __int8)sub_405620((__int64)filename, v12[2].m128i_u8[5], 0LL, (__int64)v12)
        && v12[2].m128i_i8[6] )
      {
        goto LABEL_197;
      }
      v305 = 0;
      LODWORD(s1) = 0;
    }
    else
    {
      if ( mkdir(filename, v40 & ~(_DWORD)s1) )
      {
        v95 = "cannot create directory %s";
        v15 = sub_40EA00(4LL, filename);
        goto LABEL_196;
      }
      if ( __lxstat(1, filename, &v329) )
      {
        v95 = "cannot stat %s";
        v15 = sub_40EA00(4LL, filename);
        goto LABEL_196;
      }
      v99 = v329.st_mode;
      v305 = 0;
      if ( (v329.st_mode & 0x1C0) != 448 )
      {
        v100 = chmod(filename, v329.st_mode | 0x1C0);
        v298 = v99;
        v305 = 1;
        if ( v100 )
        {
          v95 = "setting permissions for %s";
          v15 = sub_40EA00(4LL, filename);
          goto LABEL_196;
        }
      }
      if ( !*a9 )
      {
        sub_409A10(filename);
        *a9 = 1;
      }
      if ( v12[2].m128i_i8[14] )
      {
        if ( v12[1].m128i_i8[8] )
        {
          v101 = sub_40EA00(4LL, filename);
          v102 = dcgettext(0LL, "created directory %s\n", 5);
          __printf_chk(1LL, v102, v101, v103, v104, v105);
        }
        else
        {
          sub_404D70((__int64)v11, (__int64)filename, 0LL);
        }
      }
    }
    LOBYTE(ptr) = v12[1].m128i_i8[12] & (v311 != 0);
    if ( !(_BYTE)ptr || (LOBYTE(fd[0]) = 0, v43 = 0, *(_QWORD *)v311 == stat_buf.st_dev) )
    {
      v106 = _mm_loadu_si128(v12 + 1);
      v107 = _mm_loadu_si128(v12 + 2);
      v108 = _mm_loadu_si128(v12 + 3);
      v109 = v12[4].m128i_i64[0];
      *(__m128i *)&v331.st_dev = _mm_loadu_si128(v12);
      *(__m128i *)&v331.st_nlink = v106;
      *(__m128i *)&v331.st_gid = v107;
      *(__m128i *)&v331.st_size = v108;
      v331.st_blocks = v109;
      s = (char *)sub_40F480(v11, 2LL);
      if ( s )
      {
        if ( HIDWORD(v12->m128i_i64[0]) == 3 )
          HIDWORD(v331.st_dev) = 2;
        if ( *s )
        {
          LOBYTE(v300) = a7;
          v110 = s;
          s2 = (char *)&v330;
          v111 = 0;
          v306 = &v331;
          v299 = (__blksize_t)v12;
          LOBYTE(ptr) = 1;
          v311 = (__off_t)&length;
          *(_QWORD *)fd = v11;
          v302 = a8;
          do
          {
            v112 = (void *)sub_40B0C0(*(_QWORD *)fd, v110, 0LL);
            v113 = sub_40B0C0(filename, v110, 0LL);
            v114 = (void *)v113;
            LOBYTE(v330.st_dev) = *a9;
            v115 = sub_405990((_DWORD)v112, v113, (unsigned int)fildes[0], (__int64)v315, v307);
            LOBYTE(ptr) = v115 & (unsigned __int8)ptr;
            *a10 |= length;
            free(v114);
            free(v112);
            if ( (_BYTE)length )
              break;
            v111 |= LOBYTE(v330.st_dev);
            v110 += strlen(v110) + 1;
          }
          while ( *v110 );
          v116 = v111;
          v11 = *(char **)fd;
          a7 = (unsigned __int8)v300;
          v12 = (const __m128i *)v299;
          v15 = v302;
        }
        else
        {
          v116 = 0;
          LOBYTE(ptr) = 1;
        }
        free(s);
        *a9 = v116;
      }
      else
      {
        *(_QWORD *)fildes = sub_40EA00(4LL, v11);
        v214 = dcgettext(0LL, "cannot access %s", 5);
        v215 = __errno_location();
        error(0, *v215, v214, *(_QWORD *)fildes);
        LOBYTE(ptr) = 0;
      }
      LOBYTE(fd[0]) = 0;
      v43 = 0;
    }
    goto LABEL_79;
  }
  if ( v318 == 0x4000 )
  {
    if ( !(unsigned __int8)sub_405550((__int64)v11, (__int64)filename, v317, fildes[0], (__int64)v12) )
      return a7;
    LODWORD(s1) = v40 & 0x12;
    goto LABEL_178;
  }
  v41 = sub_405550((__int64)v11, (__int64)filename, v317, fildes[0], (__int64)v12);
  LODWORD(s1) = 0;
  if ( !v41 )
    return a7;
LABEL_73:
  LOBYTE(fd[0]) = v12[2].m128i_i8[12];
  if ( LOBYTE(fd[0]) )
  {
    if ( *v11 == 47 )
    {
LABEL_77:
      if ( (int)sub_409FD0(v11, 4294967196LL, filename, v12[1].m128i_u8[6]) < 0 )
      {
        v15 = sub_40E920(1LL, 4LL, v11);
        v189 = sub_40E920(0LL, 4LL, filename);
        v190 = dcgettext(0LL, "cannot create symbolic link %s to %s", 5);
        v191 = __errno_location();
        error(0, *v191, v190, v189, v15);
        goto LABEL_197;
      }
      v305 = 0;
      v43 = 0;
      LOBYTE(ptr) = fd[0];
      goto LABEL_79;
    }
    v42 = (void *)sub_40AC60(filename);
    if ( !strcmp(".", (const char *)v42)
      || __xstat(1, ".", &v330)
      || __xstat(1, (const char *)v42, &v331)
      || v330.st_ino == v331.st_ino && v330.st_dev == v331.st_dev )
    {
      free(v42);
      goto LABEL_77;
    }
    free(v42);
    v92 = "%s: can make relative symbolic links only in current directory";
    v15 = sub_40EAD0(0LL, 3LL, filename, v156);
LABEL_184:
    v93 = dcgettext(0LL, v92, 5);
    error(0, 0, v93, v15);
    goto LABEL_197;
  }
  v305 = v12[1].m128i_i8[7];
  if ( v305 )
  {
    v128 = sub_404F50((__int64)v11, (__int64)filename, v12[1].m128i_u8[6], 0, (char)ptr);
    v43 = 0;
    v305 = 0;
    LOBYTE(ptr) = v128;
    if ( !v128 )
      goto LABEL_197;
LABEL_79:
    v44 = v318 != 0x4000;
    if ( !(_BYTE)src && v12[1].m128i_i8[4] != 1 && v44 )
    {
      if ( v12[2].m128i_i64[0] & 0xFF000000FF00LL )
      {
        v45 = v12[2].m128i_u8[5];
        LOBYTE(fildes[0]) = v43;
        v46 = sub_405620((__int64)filename, v45, 0LL, (__int64)v12);
        v43 = fildes[0];
        if ( !v46 )
        {
          if ( v12[2].m128i_i8[6] )
            goto LABEL_197;
        }
      }
    }
    if ( (_BYTE)v15 )
    {
      if ( v12[3].m128i_i64[1] )
      {
        LOBYTE(fildes[0]) = v43;
        v47 = __lxstat(1, filename, &v331);
        v43 = fildes[0];
        if ( !v47 )
        {
          sub_40AE60(v12[3].m128i_i64[1], filename, &v331);
          v43 = fildes[0];
        }
      }
    }
    if ( v12[1].m128i_i8[7] && v44 || v43 )
      return (unsigned __int8)ptr;
    if ( v12[1].m128i_i8[15] )
    {
      v331.st_dev = stat_buf.st_atim.tv_sec;
      v331.st_ino = stat_buf.st_atim.tv_nsec;
      *(timespec *)&v331.st_nlink = stat_buf.st_mtim;
      if ( !LOBYTE(fd[0]) )
      {
        if ( !(unsigned int)sub_410AA0(filename) )
        {
LABEL_98:
          if ( !v12[1].m128i_i8[13] || !(_BYTE)src && stat_buf.st_uid == v329.st_uid && stat_buf.st_gid == v329.st_gid )
            goto LABEL_105;
          v51 = sub_405770((__int64)v12, filename, 0xFFFFFFFF, v315, (char)src, (__int64)&v329);
          if ( v51 != -1 )
          {
            v52 = v317;
            BYTE1(v52) &= 0xF1u;
            if ( v51 )
              v52 = v317;
            v317 = v52;
LABEL_105:
            if ( !(v12[1].m128i_i64[1] & 0xFF0000000000FFLL) )
            {
              if ( v12[2].m128i_i8[11] )
              {
                v196 = v12[1].m128i_u32[0];
              }
              else
              {
                if ( !v12[2].m128i_i8[0] )
                {
                  if ( (_DWORD)s1 && (LODWORD(s1) = ~(unsigned int)sub_405960() & (unsigned int)s1, (_DWORD)s1) )
                  {
                    if ( v305 != 1 )
                    {
                      if ( (_BYTE)src && __lxstat(1, filename, &v329) )
                      {
                        v17 = filename;
                        goto LABEL_118;
                      }
                      v298 = v329.st_mode;
                      if ( !(~v329.st_mode & (unsigned int)s1) )
                        return (unsigned __int8)ptr;
                    }
                  }
                  else if ( !v305 )
                  {
                    return (unsigned __int8)ptr;
                  }
                  if ( !chmod(filename, (unsigned int)s1 | v298) )
                    return (unsigned __int8)ptr;
                  v53 = sub_40EA00(4LL, filename);
                  v54 = dcgettext(0LL, "preserving permissions for %s", 5);
                  v55 = __errno_location();
                  error(0, *v55, v54, v53);
LABEL_112:
                  v56 = (unsigned __int8)ptr;
                  if ( v12[2].m128i_i8[4] )
                    v56 = a7;
                  return v56;
                }
                v196 = ~(unsigned __int16)sub_405960() & 0x1FF;
              }
              v14 = (unsigned int)sub_40A160(filename, 0xFFFFFFFFLL, v196) == 0;
              v197 = (unsigned __int8)ptr;
              if ( !v14 )
                v197 = a7;
              return v197;
            }
            if ( !(unsigned int)sub_40A0D0(v11, 0xFFFFFFFFLL, filename, 0xFFFFFFFFLL, v317) )
              return (unsigned __int8)ptr;
            goto LABEL_112;
          }
          return 0;
        }
        goto LABEL_96;
      }
      if ( (unsigned int)sub_410AB0(filename) && *__errno_location() != 38 )
      {
LABEL_96:
        v48 = sub_40EA00(4LL, filename);
        v49 = dcgettext(0LL, "preserving times for %s", 5);
        v50 = __errno_location();
        error(0, *v50, v49, v48);
        if ( v12[2].m128i_i8[4] )
          return 0;
        goto LABEL_97;
      }
    }
LABEL_97:
    if ( LOBYTE(fd[0]) )
      return (unsigned __int8)ptr;
    goto LABEL_98;
  }
  if ( v318 != 0x8000 && !(v12[1].m128i_i8[4] & (v318 != 40960)) )
  {
    LOBYTE(fildes[0]) = 0;
    if ( v318 == 4096 )
    {
      v331.st_dev = 0LL;
      v202 = v317 & ~(_DWORD)s1;
      v203 = __xmknod(0, filename, v317 & ~(_DWORD)s1, &v331.st_dev);
      v43 = fildes[0];
      if ( !v203 || (v218 = mkfifo(filename, v202 & 0xFFFFEFFF), v43 = fildes[0], !v218) )
      {
        LOBYTE(fd[0]) = v43;
        v305 = v43;
        LOBYTE(ptr) = 1;
        goto LABEL_79;
      }
      v95 = "cannot create fifo %s";
      v15 = sub_40EA00(4LL, filename);
      goto LABEL_196;
    }
    LOBYTE(ptr) = v318 == 49152 || (v317 & 0xB000) == 0x2000;
    if ( (_BYTE)ptr )
    {
      v331.st_dev = stat_buf.st_rdev;
      v94 = __xmknod(0, filename, v317 & ~(_DWORD)s1, &v331.st_dev);
      v43 = fildes[0];
      LOBYTE(fd[0]) = fildes[0];
      v305 = fildes[0];
      if ( !v94 )
        goto LABEL_79;
      v95 = "cannot create special file %s";
      v15 = sub_40EA00(4LL, filename);
LABEL_196:
      v96 = dcgettext(0LL, v95, 5);
      v97 = __errno_location();
      error(0, *v97, v96, v15);
      goto LABEL_197;
    }
    if ( v318 != 40960 )
    {
      v92 = "%s has unknown file type";
      v15 = sub_40EA00(4LL, v11);
      goto LABEL_184;
    }
    v192 = sub_40A1C0(v11);
    v193 = (char *)v192;
    if ( !v192 )
    {
      v95 = "cannot read symbolic link %s";
      v15 = sub_40EA00(4LL, v11);
      goto LABEL_196;
    }
    if ( (int)sub_409FD0(v192, 4294967196LL, filename, v12[1].m128i_u8[6]) < 0 )
    {
      fildes[0] = *__errno_location();
      if ( fildes[0] )
      {
        if ( v12[2].m128i_i8[13] == 1 && !(_BYTE)src && (v329.st_mode & 0xF000) == 40960 )
        {
          v271 = -1LL;
          v272 = v193;
          do
          {
            if ( !v271 )
              break;
            v14 = *v272++ == (_BYTE)src;
            --v271;
          }
          while ( !v14 );
          if ( v329.st_size == -v271 - 2 )
          {
            v273 = (void *)sub_40A1C0(filename);
            if ( v273 )
            {
              ptr = v273;
              if ( !strcmp((const char *)v273, v193) )
              {
                free(ptr);
                goto LABEL_377;
              }
              free(ptr);
            }
          }
        }
        free(v193);
        v219 = sub_40EA00(4LL, filename);
        v220 = dcgettext(0LL, "cannot create symbolic link %s", 5);
        error(0, fildes[0], v220, v219);
        goto LABEL_197;
      }
    }
LABEL_377:
    free(v193);
    v305 = v12[2].m128i_i8[5];
    if ( !v305 )
    {
      v43 = v12[1].m128i_i8[13];
      if ( v43 )
      {
        LOBYTE(fildes[0]) = v12[1].m128i_i8[13];
        if ( lchown(filename, stat_buf.st_uid, stat_buf.st_gid) )
        {
          LOBYTE(fd[0]) = sub_405740((__int64)v12);
          if ( LOBYTE(fd[0]) )
          {
            v43 = 0;
            LOBYTE(ptr) = fd[0];
          }
          else
          {
            v269 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
            v270 = __errno_location();
            error(0, *v270, v269, filename);
            v305 = v12[2].m128i_i8[4];
            if ( v305 )
              goto LABEL_197;
            LOBYTE(fd[0]) = fildes[0];
            LOBYTE(ptr) = fildes[0];
            v43 = 0;
          }
        }
        else
        {
          LOBYTE(fd[0]) = fildes[0];
          LOBYTE(ptr) = fildes[0];
          v43 = 0;
        }
      }
      else
      {
        v305 = 0;
        LOBYTE(fd[0]) = 1;
        LOBYTE(ptr) = 1;
      }
      goto LABEL_79;
    }
LABEL_240:
    sub_404D30();
    goto LABEL_241;
  }
  LODWORD(v307) = stat_buf.st_mode;
  LOBYTE(s2) = v12[2].m128i_i8[3];
  fildes[0] = sub_40AE10((char)v11);
  if ( fildes[0] < 0 )
  {
    v95 = "cannot open %s for reading";
    v15 = sub_40EA00(4LL, v11);
    goto LABEL_196;
  }
  if ( __fxstat(1, fildes[0], &v330) )
  {
    ptr = (void *)sub_40EA00(4LL, v11);
    v212 = dcgettext(0LL, "cannot fstat %s", 5);
    v213 = __errno_location();
    v147 = ptr;
    v149 = v212;
    v148 = *v213;
    goto LABEL_303;
  }
  if ( stat_buf.st_ino != v330.st_ino || stat_buf.st_dev != v330.st_dev )
  {
    v194 = sub_40EA00(4LL, v11);
    v195 = dcgettext(0LL, "skipping file %s, as it was replaced while being copied", 5);
    v147 = (void *)v194;
    v148 = 0;
    v149 = v195;
    goto LABEL_303;
  }
  v295 = v40 & 0x1FF;
  if ( (_BYTE)src )
    goto LABEL_441;
  v140 = filename;
  v141 = sub_40AE10((char)filename);
  fd[0] = v141;
  if ( v12[2].m128i_i64[0] & 0xFF000000FF00LL )
  {
    if ( v141 < 0 )
    {
LABEL_295:
      v142 = __errno_location();
      v143 = v142;
      if ( !v12[1].m128i_i8[6] )
      {
        v145 = *v142;
        if ( *v142 != 2 || v12[1].m128i_i8[8] )
        {
          LOBYTE(src) = 0;
          goto LABEL_302;
        }
        v297 = 0;
        goto LABEL_300;
      }
      if ( unlink(filename) )
      {
        ptr = (void *)sub_40EA00(4LL, filename);
        v282 = dcgettext(0LL, "cannot remove %s", 5);
        v147 = ptr;
        v148 = *v143;
        v149 = v282;
        goto LABEL_303;
      }
      if ( v12[2].m128i_i8[14] )
      {
        v274 = sub_40EA00(4LL, filename);
        v275 = dcgettext(0LL, "removed %s\n", 5);
        __printf_chk(1LL, v275, v274, v276, v277, v278);
      }
      LOBYTE(src) = v12[2].m128i_i8[1];
      v297 = (int)s1;
      if ( !(_BYTE)src )
      {
LABEL_300:
        LODWORD(ptr) = v295 & ~v297;
        fd[0] = sub_40AE10((char)filename);
        v144 = __errno_location();
        v145 = *v144;
        v311 = (__off_t)v144;
        LOBYTE(v306) = fd[0] < 0 && v145 == 17;
        if ( (_BYTE)v306 )
        {
          v145 = 17;
          LOBYTE(src) = v12[1].m128i_i8[8];
          if ( (_BYTE)src )
            goto LABEL_302;
          if ( !__lxstat(1, filename, &v331) && (v331.st_mode & 0xF000) == 40960 )
          {
            if ( !v12[3].m128i_i8[0] )
            {
              LOBYTE(fd[0]) = 0;
              v288 = sub_40EA00(4LL, filename);
              v289 = dcgettext(0LL, "not writing through dangling symlink %s", 5);
              error(0, 0, v289, v288);
              ptr = 0LL;
              v150 = fd[0];
              LOBYTE(src) = (_BYTE)v306;
              goto LABEL_304;
            }
            fd[0] = sub_40AE10((char)filename);
            v145 = *(_DWORD *)v311;
          }
        }
        LOBYTE(src) = fd[0] < 0 && v145 == 21;
        if ( (_BYTE)src )
        {
          v145 = 21;
          if ( *filename )
            v145 = (filename[strlen(filename) - 1] != 47) + 20;
          goto LABEL_302;
        }
        LOBYTE(src) = 1;
        if ( fd[0] < 0 )
        {
LABEL_302:
          ptr = (void *)sub_40EA00(4LL, filename);
          v146 = dcgettext(0LL, "cannot create regular file %s", 5);
          v147 = ptr;
          v148 = v145;
          v149 = v146;
LABEL_303:
          error(0, v148, v149, v147);
          v150 = 0;
          ptr = 0LL;
          goto LABEL_304;
        }
        goto LABEL_458;
      }
      v150 = sub_405550((__int64)v11, (__int64)filename, v295, 1u, (__int64)v12);
      if ( !v150 )
      {
        ptr = 0LL;
        goto LABEL_304;
      }
LABEL_441:
      v297 = (int)s1;
      goto LABEL_300;
    }
    v234 = sub_405620((__int64)v140, v12[2].m128i_u8[5], 0LL, (__int64)v12);
    if ( !v234 )
    {
      LOBYTE(src) = v12[2].m128i_i8[6];
      if ( (_BYTE)src )
      {
        LOBYTE(src) = 0;
        ptr = 0LL;
        goto LABEL_490;
      }
    }
  }
  else if ( fd[0] < 0 )
  {
    goto LABEL_295;
  }
  v297 = 0;
LABEL_458:
  v306 = &v331;
  LODWORD(v311) = __fxstat(1, fd[0], &v331);
  if ( (_DWORD)v311 )
  {
    ptr = (void *)sub_40EA00(4LL, filename);
    v242 = dcgettext(0LL, "cannot fstat %s", 5);
    v243 = __errno_location();
    error(0, *v243, v242, ptr);
    v234 = 0;
    ptr = 0LL;
    goto LABEL_490;
  }
  if ( !(_BYTE)s2 )
    goto LABEL_623;
  if ( !v12[3].m128i_i32[1] )
    goto LABEL_461;
  if ( !ioctl(fd[0], 0x40049409uLL, (unsigned int)fildes[0]) )
  {
LABEL_623:
    ptr = 0LL;
    goto LABEL_477;
  }
  if ( v12[3].m128i_i32[1] == 2 )
  {
    v311 = sub_40E920(1LL, 4LL, v11);
    v267 = sub_40E920(0LL, 4LL, filename);
    ptr = dcgettext(0LL, "failed to clone %s from %s", 5);
    v268 = __errno_location();
    error(0, *v268, (const char *)ptr, v267, v311);
    v234 = 0;
    ptr = 0LL;
    goto LABEL_490;
  }
LABEL_461:
  v226 = getpagesize();
  v299 = v331.st_blksize;
  s = (char *)v331.st_blksize;
  if ( (unsigned __int64)(v331.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
  {
    s = (char *)0x20000;
    v227 = 512LL;
    if ( (unsigned __int64)(v299 - 1) <= 0x1FFFFFFFFFFFFFFFLL )
      v227 = v299;
    v299 = v227;
  }
  j__posix_fadvise(fildes[0], 0LL, 0LL, 2);
  if ( (v330.st_mode & 0xF000) == 0x8000 )
    LODWORD(v311) = v330.st_blocks < v330.st_size / 512;
  ptr = (void *)(v226 - 1);
  if ( (v331.st_mode & 0xF000) != 0x8000 )
    goto LABEL_468;
  v266 = HIDWORD(v12->m128i_i64[1]);
  if ( v266 == 3 )
  {
    ptr = (void *)sub_4112E0(&s[v226]);
    v231 = ((unsigned __int64)ptr + v226 - 1) % v226;
    v296 = (char *)ptr + v226 - v231 - 1;
    if ( !(_DWORD)v311 )
    {
      v232 = HIDWORD(v12->m128i_i64[1]) == 3;
      v311 = (__off_t)&length;
      goto LABEL_475;
    }
  }
  else
  {
    if ( v266 != 2 || !(v311 & 1) )
    {
LABEL_468:
      v228 = v330.st_blksize;
      LODWORD(v300) = v330.st_mode & 0xF000;
      ptr = (void *)(0x7FFFFFFFFFFFFFFFLL - v226);
      if ( (unsigned __int64)(v330.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
        v228 = 0x20000LL;
      v229 = sub_40A980(v228, s, 0x7FFFFFFFFFFFFFFFLL - v226);
      if ( (_DWORD)v300 == 0x8000 && (unsigned __int64)s > v330.st_size )
        s = (char *)(v330.st_size + 1);
      v230 = &s[v229 - 1 - (unsigned __int64)&s[v229 - 1] % v229];
      s = v230;
      if ( !v230 || ptr < v230 )
        s = (char *)v229;
      ptr = (void *)sub_4112E0(&s[v226]);
      v231 = ((unsigned __int64)ptr + v226 - 1) % v226;
      v296 = (char *)ptr + v226 - v231 - 1;
      if ( !(_DWORD)v311 )
      {
        v14 = HIDWORD(v12->m128i_i64[1]) == 3;
        v299 = 0LL;
        v311 = (__off_t)&length;
        v232 = v14;
LABEL_475:
        v291 = v231;
        if ( !(unsigned __int8)sub_405120(
                                 v296,
                                 (size_t)s,
                                 (unsigned __int64)&savedregs,
                                 fildes[0],
                                 fd[0],
                                 v299,
                                 v232,
                                 (__int64)v11,
                                 (__int64)filename,
                                 0xFFFFFFFFFFFFFFFFLL,
                                 (_QWORD *)v311,
                                 &v322) )
          goto LABEL_513;
        if ( !(_BYTE)v322 || ftruncate(fd[0], length) >= 0 )
          goto LABEL_477;
        goto LABEL_602;
      }
      v303 = 0;
      v302 = 1;
      goto LABEL_529;
    }
    ptr = (void *)sub_4112E0(&s[v226]);
    v296 = (char *)ptr + v226 - ((unsigned __int64)ptr + v226 - 1) % v226 - 1;
  }
  v302 = HIDWORD(v12->m128i_i64[1]);
  v303 = (char)s2;
LABEL_529:
  v245 = 0LL;
  v311 = (__off_t)&length;
  v292 = v330.st_size;
  sub_409AE0((unsigned int)fildes[0], &length);
  v294 = a8;
  v246 = 0LL;
  v293 = v12;
  v247 = v292;
  v304 = a7;
  v248 = (char)s2;
  v300 = v11;
  v249 = 0LL;
  do
  {
    s2 = v246;
    v250 = sub_409B10(v311);
    v246 = s2;
    if ( !v250 )
    {
      LOBYTE(s2) = v248;
      v11 = v300;
      a7 = v304;
      v12 = v293;
      v15 = v294;
      if ( v326 )
        goto LABEL_555;
      if ( !v325 )
      {
        v259 = "%s: failed to get extents info";
        v311 = sub_40EAD0(0LL, 3LL, v300, v246);
        goto LABEL_563;
      }
      v287 = 0LL;
      v232 = HIDWORD(v293->m128i_i64[1]) == 3;
      if ( v303 )
        v287 = v299;
      v299 = v287;
      goto LABEL_475;
    }
    if ( !v324.tv_nsec )
      goto LABEL_553;
    v251 = v249;
    v252 = v245;
    v253 = 0;
    v254 = 0LL;
    while ( 1 )
    {
      v256 = (__off_t *)((char *)v327 + 24 * v254);
      v245 = *v256;
      v249 = v256[1];
      if ( v247 < (__int64)(*v256 + v249) )
      {
        if ( v245 > v247 )
          v245 = v247;
        v249 = v247 - v245;
      }
      v248 = 0;
      if ( v245 - v252 != v251 )
      {
        s2 = (char *)(v245 - v252 - v251);
        if ( lseek(fildes[0], v245, 0) < 0 )
        {
          v11 = v300;
          a7 = v304;
          v12 = v293;
          v15 = v294;
          v279 = "cannot lseek %s";
          v311 = sub_40EA00(4LL, v300);
        }
        else
        {
          if ( v302 != 1 )
          {
            v248 = sub_405060(fd[0], (__int64)filename, v302 == 3, (__off_t)s2);
            if ( !v248 )
            {
LABEL_548:
              a7 = v304;
              v11 = v300;
              v12 = v293;
              v15 = v294;
LABEL_549:
              free(v327);
              goto LABEL_513;
            }
            goto LABEL_533;
          }
          if ( (unsigned __int8)sub_404C20(fd[0], (size_t)s2) )
          {
            v255 = 0LL;
            goto LABEL_535;
          }
          a7 = v304;
          v11 = v300;
          v12 = v293;
          v15 = v294;
          v279 = "%s: write failed";
          v311 = sub_40EAD0(0LL, 3LL, filename, v257);
        }
        v280 = dcgettext(0LL, v279, 5);
        v281 = __errno_location();
        error(0, *v281, v280, v311);
        goto LABEL_549;
      }
LABEL_533:
      v255 = 0LL;
      if ( v302 == 3 )
        v255 = v299;
LABEL_535:
      if ( !(unsigned __int8)sub_405120(
                               v296,
                               (size_t)s,
                               (unsigned __int64)&savedregs,
                               fildes[0],
                               fd[0],
                               v255,
                               1,
                               (__int64)v300,
                               (__int64)filename,
                               v249,
                               &v322,
                               &v321) )
        goto LABEL_548;
      v246 = (char *)(v245 + v322);
      if ( v322 )
        v248 = v321;
      if ( (char *)v247 == v246 )
        break;
      v252 = v245;
      v251 = v249;
      v254 = ++v253;
      if ( (unsigned __int64)v253 >= v324.tv_nsec )
        goto LABEL_553;
    }
    v326 = 1;
LABEL_553:
    s2 = v246;
    free(v327);
    v327 = 0LL;
    v324.tv_nsec = 0LL;
    v246 = s2;
  }
  while ( !v326 );
  LOBYTE(s2) = v248;
  v11 = v300;
  a7 = v304;
  v12 = v293;
  v15 = v294;
LABEL_555:
  v258 = v292 > (__int64)v246;
  if ( v292 <= (__int64)v246 && !(_BYTE)s2 )
    goto LABEL_477;
  if ( v302 == 1 )
  {
    if ( (unsigned __int8)sub_404C20(fd[0], v292 - (_QWORD)v246) )
      goto LABEL_477;
    goto LABEL_602;
  }
  v311 = (__off_t)v246;
  if ( ftruncate(fd[0], v292) )
  {
LABEL_602:
    v259 = "failed to extend %s";
    v311 = sub_40EA00(4LL, filename);
LABEL_563:
    v260 = dcgettext(0LL, v259, 5);
    v261 = __errno_location();
    error(0, *v261, v260, v311);
    goto LABEL_513;
  }
  if ( v302 == 3 && v258 && (int)sub_404CD0(fd[0], v311, v292 - v311) < 0 )
  {
    v259 = "error deallocating %s";
    v311 = sub_40EA00(4LL, filename);
    goto LABEL_563;
  }
LABEL_477:
  if ( !v12[1].m128i_i8[15]
    || (length = (__int128)stat_buf.st_atim, v324 = stat_buf.st_mtim, !(unsigned int)sub_410660(fd[0], filename))
    || (v311 = sub_40EA00(4LL, filename),
        v238 = dcgettext(0LL, "preserving times for %s", 5),
        v239 = __errno_location(),
        error(0, *v239, v238, v311),
        !v12[2].m128i_i8[4]) )
  {
    if ( v12[1].m128i_i8[13] && (stat_buf.st_uid != v331.st_uid || stat_buf.st_gid != v331.st_gid) )
    {
      v233 = sub_405770((__int64)v12, filename, fd[0], v315, (char)src, (__int64)v306);
      if ( v233 == -1 )
        goto LABEL_513;
      if ( !v233 )
        LODWORD(v307) = v307 & 0xFFFFF1FF;
    }
    if ( v12[2].m128i_i8[7] && SLOBYTE(v331.st_mode) >= 0 && geteuid() && !sub_404D10(fd[0], filename, 0x180u) )
      sub_404D10(fd[0], filename, v295 & ~v297);
    if ( !(v12[1].m128i_i64[1] & 0xFF0000000000FFLL) )
    {
      if ( v12[2].m128i_i8[11] )
      {
        v262 = v12[1].m128i_u32[0];
      }
      else
      {
        if ( !v12[2].m128i_i8[0] )
        {
          v234 = 1;
          if ( !v297 )
            goto LABEL_490;
          LOBYTE(v311) = 1;
          v283 = sub_405960();
          v234 = v311;
          if ( !(~v283 & v297) )
            goto LABEL_490;
          v284 = sub_404D10(fd[0], filename, v295);
          v234 = v311;
          if ( !v284 )
            goto LABEL_490;
          v311 = sub_40EA00(4LL, filename);
          v285 = dcgettext(0LL, "preserving permissions for %s", 5);
          v286 = __errno_location();
          error(0, *v286, v285, v311);
          goto LABEL_523;
        }
        v262 = ~(unsigned __int16)sub_405960() & 0x1B6;
      }
      v234 = (unsigned int)sub_40A160(filename, (unsigned int)fd[0], v262) == 0;
      goto LABEL_490;
    }
    v244 = sub_40A0D0(v11, (unsigned int)fildes[0], filename, (unsigned int)fd[0], (unsigned int)v307);
    v234 = 1;
    if ( !v244 )
      goto LABEL_490;
LABEL_523:
    v234 = v12[2].m128i_i8[4] ^ 1;
    goto LABEL_490;
  }
LABEL_513:
  v234 = 0;
LABEL_490:
  LOBYTE(v311) = v234;
  v235 = close(fd[0]);
  v150 = v311;
  if ( v235 < 0 )
  {
    *(_QWORD *)fd = sub_40EA00(4LL, filename);
    v236 = dcgettext(0LL, "failed to close %s", 5);
    v237 = __errno_location();
    error(0, *v237, v236, *(_QWORD *)fd);
    v150 = 0;
  }
LABEL_304:
  LOBYTE(fd[0]) = v150;
  if ( close(fildes[0]) < 0 )
  {
    v15 = sub_40EA00(4LL, v11);
    v206 = dcgettext(0LL, "failed to close %s", 5);
    v207 = __errno_location();
    error(0, *v207, v206, v15);
    free(ptr);
    goto LABEL_197;
  }
  LOBYTE(fildes[0]) = fd[0];
  free(ptr);
  v43 = fildes[0];
  LOBYTE(fd[0]) = 0;
  LOBYTE(ptr) = fildes[0];
  if ( LOBYTE(fildes[0]) )
    goto LABEL_79;
LABEL_197:
  if ( v12[2].m128i_i8[5] )
    goto LABEL_240;
  if ( !n )
    sub_409980(stat_buf.st_ino, stat_buf.st_dev);
LABEL_136:
  if ( old )
  {
    if ( rename(old, filename) )
    {
      v137 = sub_40EA00(4LL, filename);
      v138 = dcgettext(0LL, "cannot un-backup %s", 5);
      v139 = __errno_location();
      error(0, *v139, v138, v137);
    }
    else if ( v12[2].m128i_i8[14] )
    {
      v75 = sub_40E920(1LL, 4LL, filename);
      v76 = sub_40E920(0LL, 4LL, old);
      v77 = dcgettext(0LL, "%s -> %s (unbackup)\n", 5);
      __printf_chk(1LL, v77, v76, v75, v78, v79);
    }
  }
  return a7;
}

__int64 __usercall sub_409810(unsigned __int8 a1, const __m128i *a2, const char *a3, char *a4, _BYTE *a5, _BYTE *a6, unsigned int a7)
{
  int v7; // eax
  unsigned int v8; // er10
  char v10; // [rsp+Fh] [rbp-9h]

  if ( !a2 )
    __assert_fail("co != NULL", "src/copy.c", 0xB60u, "valid_options");
  if ( LODWORD(a2->m128i_i64[0]) > 3 )
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 0xB61u, "valid_options");
  v7 = HIDWORD(a2->m128i_i64[1]);
  if ( (unsigned int)(v7 - 1) > 2 )
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 0xB62u, "valid_options");
  v8 = a2[3].m128i_u32[1];
  if ( v8 > 2 )
    __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 0xB63u, "valid_options");
  if ( a2[1].m128i_i8[7] && a2[2].m128i_i8[12] )
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

unsigned __int64 __fastcall sub_409930(_QWORD *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_409940(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( *a1 == *a2 )
    result = a1[1] == a2[1];
  return result;
}

void __fastcall sub_409960(void *ptr)
{
  free(*((void **)ptr + 2));
  free(ptr);
}

void __fastcall sub_409980(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rbx
  __int64 v4; // [rsp+0h] [rbp-28h]
  __int64 v5; // [rsp+8h] [rbp-20h]
  __int64 v6; // [rsp+10h] [rbp-18h]

  v4 = a1;
  v5 = a2;
  v6 = 0LL;
  v2 = sub_40C330(qword_621998, &v4);
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
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-28h]
  __int64 v5; // [rsp+8h] [rbp-20h]

  v4 = a1;
  v5 = a2;
  v2 = sub_40B8E0(qword_621998, &v4);
  if ( v2 )
    result = *(_QWORD *)(v2 + 16);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_409A10(void *src, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int64 result; // rax

  v3 = a3;
  v4 = (_QWORD *)sub_4112E0(24LL);
  v5 = sub_411510(src);
  v6 = qword_621998;
  *v4 = a2;
  v4[2] = v5;
  v4[1] = v3;
  v7 = sub_40C2F0(v6, v4);
  if ( !v7 )
    sub_411530();
  v8 = (_QWORD *)v7;
  result = 0LL;
  if ( v4 != v8 )
  {
    free((void *)v4[2]);
    free(v4);
    result = v8[2];
  }
  return result;
}

__int64 sub_409A90()
{
  __int64 result; // rax

  result = sub_40BB50(103LL, 0LL, sub_409930, sub_409940, sub_409960);
  qword_621998 = result;
  if ( !result )
    sub_411530();
  return result;
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
  unsigned int v1; // er13
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // er8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 *v16; // rcx
  int v17; // er9
  __int64 v18; // r10
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  bool result; // al
  bool v25; // zf
  __int64 vars0; // [rsp+0h] [rbp+0h]
  __int64 vars8; // [rsp+8h] [rbp+8h]
  int vars10; // [rsp+10h] [rbp+10h]
  unsigned int vars14; // [rsp+14h] [rbp+14h]
  int vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20[2]; // [rsp+20h] [rbp+20h]
  unsigned __int64 vars30; // [rsp+30h] [rbp+30h]

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
    if ( ioctl(v6, 0xC020660BuLL, &vars0) < 0 )
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
    if ( ((24 * v9) & 0x8000000000000000LL) != 0LL || (v9 * (unsigned __int128)0x18uLL) >> 64 != 0 )
      sub_411530(v8, 3223348747LL, (v9 * (unsigned __int128)0x18uLL) >> 64 != 0);
    v11 = sub_411340(v8, 24 * v9);
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
          if ( *(_DWORD *)(v3 + 16) == (v16[5] & 0xFFFFFFFE) && v14 == v19 )
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

int __fastcall sub_409DE0(char *to, __int64 a2)
{
  return linkat(*(_DWORD *)a2, *(const char **)(a2 + 8), *(_DWORD *)(a2 + 16), to, *(_DWORD *)(a2 + 20));
}

void *__fastcall sub_409E00(void *src, void *dest)
{
  void *v2; // rbx
  __int64 v3; // rax
  size_t v4; // rbp

  v2 = dest;
  v3 = sub_40AD40(src) - (_QWORD)src;
  v4 = v3;
  if ( (unsigned __int64)(v3 + 9) > 0x100 )
  {
    v2 = malloc(v3 + 9);
    if ( !v2 )
      return 0LL;
  }
  strcpy((char *)mempcpy(v2, src, v4), "CuXXXXXX");
  return v2;
}

int __fastcall sub_409E70(char *to, __int64 a2)
{
  return symlinkat(*(const char **)a2, *(_DWORD *)(a2 + 8), to);
}

__int64 __fastcall sub_409E90(int a1, const char *a2, int a3, const char *a4, int a5, char a6)
{
  char *v6; // r12
  int v7; // ebp
  int v8; // eax
  unsigned int v9; // ebx
  int *v10; // rax
  char *v12; // rax
  char *v13; // rbx
  int v14; // eax
  int *v15; // r9
  int v16; // er12
  char v17; // [rsp+8h] [rbp-160h]
  int *v18; // [rsp+8h] [rbp-160h]
  int *v19; // [rsp+8h] [rbp-160h]
  char dest; // [rsp+30h] [rbp-138h]

  v6 = (char *)a4;
  v7 = a3;
  v17 = a6;
  v8 = linkat(a1, a2, a3, a4, a5);
  v9 = v8;
  if ( v17 == 1 )
  {
    if ( v8 )
    {
      v10 = __errno_location();
      if ( *v10 == 17 )
      {
        v18 = v10;
        v12 = (char *)sub_409E00(v6, &dest);
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
            v16 = renameat(v7, v13, v7, v6);
            if ( v16 )
              v16 = *v18;
            unlinkat(v7, v13, 0);
            v15 = v18;
          }
          if ( v13 != &dest )
          {
            v19 = v15;
            free(v13);
            v15 = v19;
          }
          v9 = 1;
          if ( v16 )
          {
            *v15 = v16;
            v9 = -1;
          }
        }
        else
        {
          v9 = -1;
        }
      }
    }
  }
  return v9;
}

__int64 __fastcall sub_409FD0(const char *a1, int a2, const char *a3, char a4)
{
  char v4; // r14
  char *v5; // r12
  int v6; // eax
  unsigned int v7; // ebx
  int *v8; // r14
  char *v10; // rax
  char *v11; // rbx
  int v12; // er12
  char dest; // [rsp+10h] [rbp-138h]

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
        return 1;
      }
    }
  }
  return v7;
}

__int64 __fastcall sub_40A0D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r12
  char *v7; // rbp
  int *v8; // rax
  __int64 result; // rax
  __int64 v10; // rbp
  int *v11; // rax

  v3 = a3;
  v4 = sub_40D070();
  v5 = v4;
  if ( v4 == -2 )
  {
    v10 = sub_40EC50(a1);
    v11 = __errno_location();
    error(0, *v11, "%s", v10);
    result = 4294967294LL;
  }
  else
  {
    if ( v4 == -1 )
    {
      v6 = sub_40EC50(v3);
      v7 = dcgettext(0LL, "preserving permissions for %s", 5);
      v8 = __errno_location();
      error(0, *v8, v7, v6);
    }
    result = v5;
  }
  return result;
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
  __int64 v2; // r13
  __int64 v3; // rax
  char *v4; // rbp
  char *result; // rax
  __int16 v6; // r14
  char *v7; // r12
  int *v8; // rax
  int *v9; // r15
  unsigned __int64 v10; // rdx
  char *v11; // rsi

  v2 = a2;
  v3 = sub_40AD40(path);
  v4 = (char *)v3;
  result = (char *)sub_40ADA0(v3);
  if ( (unsigned __int64)result > 0xE )
  {
    v6 = *(_WORD *)v4;
    v7 = result;
    *(_WORD *)v4 = 46;
    v8 = __errno_location();
    *v8 = 0;
    v9 = v8;
    result = (char *)pathconf(path, 3);
    if ( (__int64)result >= 0 || (v10 = 255LL, !*v9) )
      v10 = (unsigned __int64)result;
    *(_WORD *)v4 = v6;
    if ( (unsigned __int64)v7 > v10 )
    {
      v11 = &path[a2];
      result = (char *)(&path[v2] - v4);
      if ( (unsigned __int64)result >= v10 )
        v11 = &v4[v10 - 1];
      else
        v10 = (unsigned __int64)(result + 1);
      *v11 = 126;
      v4[v10] = 0;
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

char *__fastcall sub_40A3E0(void *a1, int a2, char a3)
{
  const char *v3; // rax
  const char *v4; // r14
  size_t v5; // rax
  signed __int64 v6; // r14
  const char *v7; // rdi
  size_t v8; // rax
  bool v9; // cf
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  char *v13; // r15
  DIR *v14; // r12
  char *v15; // rbx
  __int64 v16; // r13
  int v17; // ebp
  struct dirent *v18; // rax
  char *v19; // rbx
  char *v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // r8
  int i; // eax
  int v24; // eax
  __int64 v25; // rdx
  size_t v26; // rax
  __int64 v27; // rax
  char *v28; // rax
  char *v29; // r8
  __int64 v30; // rax
  char *v31; // rax
  char v32; // dl
  char *v33; // rax
  int v34; // eax
  char *v35; // rcx
  int v36; // edx
  int *v37; // rax
  int v38; // ebp
  int *v39; // rbx
  void *v40; // rdi
  __int16 v42; // ax
  void *v43; // rdi
  _BOOL4 v44; // ebp
  __int64 v45; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+10h] [rbp-88h]
  unsigned __int8 v47; // [rsp+18h] [rbp-80h]
  unsigned __int64 v48; // [rsp+18h] [rbp-80h]
  unsigned __int64 v49; // [rsp+18h] [rbp-80h]
  __int16 v50; // [rsp+18h] [rbp-80h]
  size_t v51; // [rsp+20h] [rbp-78h]
  unsigned __int64 size; // [rsp+28h] [rbp-70h]
  int v53; // [rsp+40h] [rbp-58h]
  char v54; // [rsp+47h] [rbp-51h]
  unsigned __int64 v55; // [rsp+48h] [rbp-50h]
  unsigned __int64 v56; // [rsp+50h] [rbp-48h]
  __int64 v57; // [rsp+50h] [rbp-48h]
  char *v58; // [rsp+50h] [rbp-48h]
  size_t v59; // [rsp+58h] [rbp-40h]

  src = a1;
  v53 = a2;
  v54 = a3;
  v3 = (const char *)sub_40AD40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
  v45 = v6 + v5;
  if ( !src )
  {
    sub_40A380(src);
    v7 = src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v45 + 1;
  v59 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v55 = v10 + v12;
  v13 = (char *)malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v45 + 1);
      if ( v53 == 1 )
      {
        memcpy(&v13[v45], src, v59);
        goto LABEL_33;
      }
      v15 = &v13[v6];
      v16 = sub_40ADA0(&v13[v6]);
      if ( v14 )
        break;
      v42 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v50 = v42;
      v14 = (DIR *)sub_40ABC0(v13);
      if ( v14 )
      {
        *(_WORD *)v15 = v50;
        strcpy(&v15[v16], ".~1~");
LABEL_10:
        v17 = 2;
        v51 = 1LL;
        size = v55;
        while ( 1 )
        {
          v18 = readdir(v14);
          if ( !v18 )
            goto LABEL_30;
          while ( 1 )
          {
            v19 = v18->d_name;
            if ( strlen(v18->d_name) < v16 + 4 )
              break;
            if ( memcmp(&v13[v6], v19, v16 + 2) )
              break;
            v20 = &v19[v16 + 2];
            if ( (unsigned __int8)(*v20 - 49) > 8u )
              break;
            v21 = 1LL;
            v22 = *v20 == 57;
            for ( i = v20[1]; (unsigned int)(i - 48) <= 9; i = v20[v21] )
            {
              ++v21;
              v22 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( v20[v21 + 1] )
              break;
            if ( v51 >= v21 )
            {
              v56 = v21;
              v47 = v22;
              if ( v51 != v21 )
                break;
              v24 = memcmp(&v13[v45 + 2], v20, v51);
              v22 = v47;
              v21 = v56;
              if ( v24 > 0 )
                break;
            }
            v25 = v22;
            v17 = v22;
            v26 = v22 + v21;
            v51 = v26;
            v27 = v45 + v26 + 4;
            if ( v27 <= size )
            {
              v29 = v13;
            }
            else
            {
              if ( v27 & 0x4000000000000000LL || v27 < 0 )
                size = v27;
              else
                size = 2 * v27;
              v57 = v22;
              v48 = v21;
              v28 = (char *)realloc(v13, size);
              v21 = v48;
              v25 = v57;
              v29 = v28;
              if ( !v28 )
                goto LABEL_49;
            }
            v58 = v29;
            v49 = v21;
            v30 = (__int64)&v29[v45];
            *(_WORD *)v30 = 32302;
            *(_BYTE *)(v30 + 2) = 48;
            v31 = (char *)memcpy(&v29[v45 + 2 + v25], v20, v21 + 2);
            v32 = v31[v49 - 1];
            v33 = &v31[v49 - 1];
            if ( v32 == 57 )
            {
              do
              {
                *v33-- = 48;
                v32 = *v33;
              }
              while ( *v33 == 57 );
            }
            v13 = v58;
            *v33 = v32 + 1;
            v18 = readdir(v14);
            if ( !v18 )
              goto LABEL_30;
          }
        }
      }
      v44 = *__errno_location() == 12;
      *(_WORD *)v15 = v50;
      v17 = v44 + 2;
      strcpy(&v15[v16], ".~1~");
LABEL_30:
      switch ( v17 )
      {
        case 2:
          if ( v53 == 2 )
          {
            memcpy(&v13[v45], src, v59);
            v53 = 1;
          }
LABEL_46:
          sub_40A2B0(v13, v45);
          break;
        case 3:
LABEL_49:
          v43 = v13;
          v13 = 0LL;
          free(v43);
          *__errno_location() = 12;
          return v13;
        case 1:
          goto LABEL_46;
      }
LABEL_33:
      if ( !v54 )
        goto LABEL_57;
      if ( !v14 || (v34 = dirfd(v14), v35 = &v13[v6], v36 = v34, v34 < 0) )
      {
        v35 = v13;
        v36 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40EC70(-100, (char *)src, v36, v35) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v37 = __errno_location();
      v38 = *v37;
      if ( *v37 != 17 )
      {
        v39 = v37;
        if ( v14 )
          closedir(v14);
        v40 = v13;
        v13 = 0LL;
        free(v40);
        *v39 = v38;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

char *__fastcall sub_40A8B0(void *a1, int a2)
{
  return sub_40A3E0(a1, a2, 1);
}

__int64 __fastcall sub_40A8C0(__int64 a1, __int64 a2)
{
  return (unsigned int)dword_419020[sub_412E60(a1, a2, off_419040, dword_419020, 4LL, off_61F4E0)];
}

char *__fastcall sub_40A8F0(void *a1, __int64 a2)
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
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

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

__int64 sub_40AA00()
{
  FILE *v0; // rbx
  int v2; // eax
  FILE *v3; // rdi
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // r12
  int *v7; // rax
  int *v8; // rbp
  __int64 v9; // rax
  int v10; // eax

  v0 = stdin;
  if ( !sub_411B90(stdin) )
  {
    if ( !(unsigned int)sub_412F20(v0) )
      return sub_40AB20();
    goto LABEL_6;
  }
  v10 = sub_411BC0(v0, 0LL, 1LL);
  v3 = stdin;
  if ( !v10 )
  {
    v2 = sub_411B50(stdin);
    v3 = stdin;
    if ( v2 )
    {
      sub_412F20(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_412F20(v3) )
  {
LABEL_6:
    v4 = dcgettext(0LL, "error closing file", 5);
    v5 = qword_6219A8;
    v6 = v4;
    v7 = __errno_location();
    v8 = v7;
    if ( v5 )
    {
      v9 = sub_40EAA0(v5);
      error(0, *v8, "%s: %s", v9, v6);
    }
    else
    {
      error(0, *v7, "%s", v6);
    }
    sub_40AB20();
    _exit(status);
  }
  return sub_40AB20();
}

__int64 sub_40AB20()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

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
        v5 = sub_40EAA0(qword_6219B8);
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
  int v5; // er12
  int *v6; // rax
  int *v7; // rbp
  int v8; // er14
  DIR *v9; // r13
  DIR *v10; // rax

  v1 = opendir(a1);
  v2 = v1;
  if ( !v1 )
    return v2;
  v3 = dirfd(v1);
  if ( v3 > 2 )
    return v2;
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
  return v9;
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

_BYTE *__fastcall sub_40ACE0(void *src)
{
  __int64 v1; // rax
  size_t v2; // rbx
  _BYTE *v3; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // rax

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

int j__posix_fadvise(int fd, off_t offset, off_t len, int advise)
{
  return posix_fadvise(fd, offset, len, advise);
}

__int64 __fastcall sub_40AE10(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp-28h]

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = v6;
  v4 = open(a1, a2, v3);
  return sub_40FCF0(v4);
}

void __fastcall sub_40AE60(__int64 a1, void *a2, _QWORD *a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( a1 )
  {
    v3 = a3;
    v4 = (_QWORD *)sub_4112E0(24LL);
    *v4 = sub_411510(a2);
    v4[1] = v3[1];
    v4[2] = *v3;
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
  __int64 v5; // [rsp+0h] [rbp-28h]
  __int64 v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]

  if ( !a1 )
    return 0;
  v3 = a3[1];
  v5 = a2;
  v6 = v3;
  v7 = *a3;
  return sub_40B8E0(a1, &v5) != 0;
}

__int64 __fastcall sub_40AF30(__int16 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
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

void *__fastcall sub_40B0E0(void *src, void *a2, _QWORD *a3)
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
  char *v3; // rbp
  size_t v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax

  if ( !nbytes )
    return 0LL;
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
  return v5;
}

__int64 __fastcall sub_40B240(int fd, void *buf, size_t n)
{
  char *v3; // rbp
  size_t v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax

  if ( !n )
    return 0LL;
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
  v7 = (__m128i *)sub_40B380(a1, a2);
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
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_40B550(__int64 a1, __int64 a2, char a3)
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
        if ( !v3 )
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

_QWORD *__fastcall sub_40BB50(unsigned __int64 a1, __int64 a2, unsigned __int64 (__fastcall *a3)(__int64 a1, unsigned __int64 a2), bool (__fastcall *a4)(__int64 a1, __int64 a2), __int64 a5)
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
        v12 = sub_40B2C0(v8);
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
      *((_QWORD *)v9 + 5) = &unk_419120;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40B4D0(v11) )
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

__int64 __fastcall sub_40BE70(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_40B2C0(a2);
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
  v14 = sub_40B550((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40B550(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40B550(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_40BE70(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_40B2C0(a2);
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
  v14 = sub_40B550((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40B550(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40B550(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_40C070(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40B3B0(a1, a2, (__m128i **)&v26, 0);
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
        v25 = v22 >= 9.223372e18 ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_40BE70(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B3B0(a1, v4, (__m128i **)&v26, 0) )
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

__int64 __fastcall sub_40C070(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40B3B0(a1, a2, (__m128i **)&v26, 0);
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
        v25 = v22 >= 9.223372e18 ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_40BE70(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B3B0(a1, v4, (__m128i **)&v26, 0) )
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

__int64 __fastcall sub_40C2F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h]

  v2 = a2;
  v3 = sub_40C070(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    v2 = v5;
  return v2;
}

__int64 __fastcall sub_40C330(__int64 a1, __int64 a2)
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
  v3 = sub_40B3B0(a1, a2, (__m128i **)&v24, 1);
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
        *(_QWORD *)(v2 + 72) = 0LL;
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
  __int64 result; // rax

  if ( a1[1] != a2[1] || a1[2] != a2[2] )
    result = 0LL;
  else
    result = sub_40EF80(*a1, *a2, a3, a4, a5, a6);
  return result;
}

void __fastcall sub_40C5C0(void *ptr)
{
  free(*(void **)ptr);
  free(ptr);
}

_BYTE *__fastcall sub_40C5E0(_BYTE *a1, __int64 a2, int (__fastcall *a3)(_BYTE *, _BYTE *, __int64), __int64 a4)
{
  int (__fastcall *v4)(_BYTE *, _BYTE *, __int64); // r14
  _BYTE *v5; // r13
  _BYTE *v6; // r12
  _BYTE *v7; // rbp
  char v8; // dl
  bool v9; // r15
  __int64 v10; // rdx
  int v11; // er15
  int v12; // eax
  int v13; // er13
  int *v15; // rax
  bool v16; // [rsp+14h] [rbp-44h]
  __int64 v17; // [rsp+18h] [rbp-40h]

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

__int64 __fastcall sub_40C770(char *a1, _DWORD *a2, int (__fastcall *a3)(_BYTE *, _BYTE *, __int64), __int64 a4, __mode_t a5, void (__fastcall *a6)(char *, __int64), int a7, int a8, int a9, char a10)
{
  int (__fastcall *v10)(_BYTE *, _BYTE *, __int64); // r13
  __mode_t v11; // er12
  _BYTE *v12; // rax
  _BYTE *v13; // rbp
  char *v14; // rbp
  int v15; // eax
  int v16; // er15
  __int64 v17; // rbx
  char *v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  int v21; // eax
  int *v22; // rbp
  const char *v23; // rsi
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // [rsp+0h] [rbp-E8h]
  void (__fastcall *v27)(char *, __int64); // [rsp+10h] [rbp-D8h]
  struct stat stat_buf; // [rsp+20h] [rbp-C8h]

  v10 = a3;
  v11 = a5;
  v26 = a4;
  v27 = a6;
  if ( *a1 != 47 && *a2 == 4 )
  {
    v16 = a2[1];
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
  v12 = sub_40C5E0(a1, (__int64)a2, a3, a4);
  v13 = v12;
  if ( (__int64)v12 < 0 )
  {
    result = 1LL;
    if ( v13 == (_BYTE *)-1LL )
    {
      v16 = *__errno_location();
      goto LABEL_14;
    }
    return result;
  }
  v14 = &v12[(_QWORD)a1];
LABEL_6:
  if ( (a9 & a8) == -1 )
  {
    if ( !(v11 & 0x200 | a7 & 0xC00) )
    {
      v16 = mkdir(v14, v11);
      if ( v16 )
        goto LABEL_9;
      v27(a1, v26);
      if ( !(v11 & a7 & 0x1FF) )
        return 1LL;
      v20 = 3LL;
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
      v17 = sub_40EC50(a1);
      v18 = dcgettext(0LL, "cannot create directory %s", 5);
      error(0, v16, v18, v17);
      return 0LL;
    }
    v20 = 2LL;
    goto LABEL_28;
  }
  v27(a1, v26);
  v20 = 3LL;
LABEL_28:
  v21 = sub_40F520(a2, v14, v20, &stat_buf);
  if ( v21 < -1 )
    return 1LL;
  if ( !v21 )
    v14 = ".";
  if ( !(unsigned int)sub_4135D0(stat_buf.st_dev, v14, a7) )
    return 1LL;
  if ( v16 && (v16 == 2 || !v10 || *__errno_location() == 20) )
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
  __int64 v15; // r10
  int v16; // ecx
  int v17; // edx
  char *v18; // r8
  __int64 v19; // rsi
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
        case 111:
          v11 |= 0x207u;
          break;
        case 117:
          v11 |= 0x9C0u;
          break;
        case 103:
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
    v15 = (__int64)&result[8 * v10];
    while ( 1 )
    {
      v17 = v3[1];
      v18 = v3 + 1;
      if ( v3[1] == 103 )
      {
        v19 = (__int64)(v3 + 2);
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
                *(_BYTE *)(v15 + 1) = v22;
                v3 = v18;
                *(_DWORD *)(v15 + 4) = v11;
                *(_DWORD *)(v15 + 8) = v16;
                break;
            }
            goto LABEL_25;
          }
        }
        v19 = (__int64)(v3 + 2);
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
      v3 = (char *)v19;
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
  int v3; // ebx
  __int64 v4; // [rsp+0h] [rbp-98h]
  int v5; // [rsp+18h] [rbp-80h]

  v1 = __xstat(1, filename, (struct stat *)&v4);
  result = 0LL;
  if ( !v1 )
  {
    v3 = v5;
    result = sub_4112E0(32LL);
    *(_WORD *)result = 317;
    *(_DWORD *)(result + 4) = 4095;
    *(_DWORD *)(result + 8) = v3;
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
  unsigned int v9; // er10
  int v10; // edi
  int v11; // er9
  int v12; // er11
  int v13; // er9
  char v14; // r11
  int v15; // er9
  int v16; // er9
  int v17; // er12

  v5 = a4[1];
  result = a1 & 0xFFF;
  v7 = 0;
  if ( v5 )
  {
    v8 = ~a3;
    while ( 1 )
    {
      v17 = *((_DWORD *)a4 + 1);
      v13 = *((_DWORD *)a4 + 2);
      if ( a2 )
        break;
      v9 = -1;
      v10 = 0;
      if ( v5 == 2 )
      {
        if ( !(result & 0x49) )
          goto LABEL_10;
LABEL_18:
        v14 = *a4;
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
          v11 = result & v13;
          v12 = (v11 & 0x124u) >= 1 ? 0x124 : 0;
          if ( v11 & 0x92 )
            v12 = (v11 & 0x124u) >= 1 ? 0x124 : 0;
          if ( v11 & 0x49 )
            v12 |= 0x49u;
          v13 = v12 | v11;
        }
LABEL_10:
        v14 = *a4;
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
        a4 += 16;
        v5 = a4[1];
        v7 |= v9 & 0xFFF;
        result = v16 | v10 & (unsigned int)result;
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
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 result; // rax
  char v8; // [rsp+Ch] [rbp-1Ch]

  v5 = a4;
  v6 = a3;
  if ( (unsigned int)sub_412B30(a1, a2, a5, &v8) )
    result = 4294967294LL;
  else
    result = sub_412B60(&v8, v6, v5);
  return result;
}

__int64 __fastcall sub_40D0B0(__int64 a1, unsigned int a2, int a3)
{
  int v4; // [rsp+Ch] [rbp-Ch]

  v4 = a3;
  return sub_412B60(&v4, a1, a2);
}

char *__fastcall sub_40D0D0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

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
        v2 = (char *)&unk_4192DE;
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
      v2 = (char *)&unk_4192E2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_40D1D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_40D1D0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_40D1D0((__int64)v9, v79, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40D1D0((__int64)v9, v10, s);
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
          return sub_40D1D0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_4129F0((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_40D1D0((__int64)v9, v10, s);
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
      return sub_40D1D0((__int64)v9, v10, s);
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
        a8 = sub_40D0D0("`", v11);
        v47 = sub_40D0D0("'", v11);
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

unsigned __int64 __fastcall sub_40D1D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_40D1D0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_40D1D0((__int64)v9, v79, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
            return sub_40D1D0((__int64)v9, v10, s);
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
              return sub_40D1D0((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40D1D0((__int64)v9, v10, s);
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
          return sub_40D1D0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_4129F0((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_40D1D0((__int64)v9, v10, s);
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
      return sub_40D1D0((__int64)v9, v10, s);
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
        a8 = sub_40D0D0("`", v11);
        v47 = sub_40D0D0("'", v11);
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

_BYTE *__fastcall sub_40E400(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v8 = off_61F4B8;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_61F4D0 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411530(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_61F4B8 == &xmmword_61F4C0 )
    {
      v8 = (__int128 *)sub_411340(0LL, v10);
      off_61F4B8 = v8;
      *v8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61F4C0);
    }
    else
    {
      off_61F4B8 = (__int128 *)sub_411340(off_61F4B8, v10);
      v8 = off_61F4B8;
    }
    memset(&v8[dword_61F4D0], 0, 16LL * ((int)a1 + 1 - dword_61F4D0));
    dword_61F4D0 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v19 = *v11;
  v13 = sub_40D1D0(v12, *v11, v18, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v16 = *(_DWORD *)v5;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_40D1D0(v15, v14, v18, v4, v16, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_40E400(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v8 = off_61F4B8;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_61F4D0 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411530(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_61F4B8 == &xmmword_61F4C0 )
    {
      v8 = (__int128 *)sub_411340(0LL, v10);
      off_61F4B8 = v8;
      *v8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61F4C0);
    }
    else
    {
      off_61F4B8 = (__int128 *)sub_411340(off_61F4B8, v10);
      v8 = off_61F4B8;
    }
    memset(&v8[dword_61F4D0], 0, 16LL * ((int)a1 + 1 - dword_61F4D0));
    dword_61F4D0 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v19 = *v11;
  v13 = sub_40D1D0(v12, *v11, v18, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v16 = *(_DWORD *)v5;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_40D1D0(v15, v14, v18, v4, v16, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_40E920(__int64 a1, int a2, char *a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40E920(__int64 a1, int a2, char *a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40E990(__int64 a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_40E400(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_40E990(__int64 a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_40E400(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_40EA00(int a1, char *a2)
{
  return sub_40E920(0LL, a1, a2);
}

_BYTE *__fastcall sub_40EA20(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_621B10;
  v7 = _mm_load_si128((const __m128i *)&xmmword_621AE0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_621AF0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_621B00);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_40E400(0LL, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_40EAA0(char *a1)
{
  return sub_40EA20(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40EAD0(__int64 a1, int a2, char *a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40EAD0(__int64 a1, int a2, char *a3)
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
  return sub_40E400(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40EB40(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_621AE0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_621AF0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_621B00);
  v9 = qword_621B10;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_40E400(a1, a4, a5, (__int64)&v6);
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
  int v5; // er13
  char *v6; // r12
  unsigned int v7; // ebp
  int v8; // eax
  unsigned int v9; // edx
  int *v10; // rax
  int *v11; // r9
  bool v12; // r15
  int v14; // eax
  size_t v15; // rbp
  size_t v16; // rax
  unsigned int v17; // [rsp+8h] [rbp-160h]
  int *v18; // [rsp+8h] [rbp-160h]
  int *v19; // [rsp+8h] [rbp-160h]
  struct stat v20; // [rsp+10h] [rbp-158h]
  struct stat stat_buf; // [rsp+A0h] [rbp-C8h]

  v5 = newfd;
  v6 = a4;
  v7 = a5;
  v8 = syscall(316LL, (unsigned int)oldfd, old, (unsigned int)newfd, a4, a5);
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
      if ( v7 )
      {
        if ( v7 & 0xFFFFFFFE )
        {
          *v10 = 95;
          return (unsigned int)-1;
        }
        v18 = v10;
        v14 = __fxstatat(1, v5, v6, &stat_buf, 256);
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
      v16 = strlen(v6);
      if ( !v15 || !v16 || old[v15 - 1] != 47 && v6[v16 - 1] != 47 )
        return (unsigned int)renameat(oldfd, old, v5, v6);
      if ( !__fxstatat(1, oldfd, old, &v20, 256) )
      {
        if ( v12 )
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

ssize_t __fastcall sub_40EEC0(int fd, void *buf, size_t nbytes)
{
  size_t v3; // rbx
  ssize_t v4; // rbp
  int v5; // eax

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

ssize_t __fastcall sub_40EF20(int fd, void *buf, size_t n)
{
  size_t v3; // rbx
  ssize_t v4; // rbp
  int v5; // eax

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
  v3 = sub_40AD40(a1);
  v4 = sub_40AD40(a2);
  v5 = sub_40ADA0(v3);
  if ( v5 == sub_40ADA0(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (char *)sub_40AC60(a1, (__int64)v4);
    v8 = (char *)sub_40AC60(a2, (__int64)v4);
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

__int64 __fastcall sub_40F0B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

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

__int64 __fastcall sub_40F0E0(DIR *dirp, __int64 a2)
{
  DIR *v2; // rbx
  unsigned __int64 v3; // r15
  size_t v4; // r12
  char *v5; // r14
  __int64 v6; // r13
  int *v7; // rbp
  struct dirent *v8; // rax
  struct dirent *v9; // rcx
  const char *v10; // r8
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
  __int64 v21; // r12
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
  __int64 v41; // [rsp+38h] [rbp-40h]

  a2 = (unsigned int)a2;
  compar = (int (*)(const void *, const void *))qword_41A020[(unsigned int)a2];
  if ( !dirp )
    return 0LL;
  v2 = dirp;
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
        srcb = v10;
        v35 = v9;
        v13 = strlen(v10);
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
              a2 = 16 * (src + (v4 >> 1));
            }
            else if ( v4 )
            {
              a2 = 16 * v4;
              if ( v4 & 0x800000000000000LL || v4 >> 60 != 0 )
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
        v21 = (__int64)&v5[16 * v4];
        v22 = (const char **)v5;
        v6 = sub_4112E0(v3 + 1);
        do
        {
          v23 = *v22;
          v22 += 2;
          v20 = &stpcpy(&v20[v6], v23)[-v6 + 1];
          free((void *)*(v22 - 2));
        }
        while ( v22 != (const char **)v21 );
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
  int v7; // er12
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

__int64 __fastcall sub_40F520(unsigned int *a1, const char *a2, unsigned int a3, int *a4)
{
  int *v4; // rbx
  char v5; // r14
  int v6; // eax
  int v7; // er13
  int v8; // eax
  int v9; // ecx
  signed int v10; // eax
  unsigned int v11; // er12
  bool v12; // al
  __int64 result; // rax
  int *v14; // rax
  int v15; // ebp
  int *v16; // rbx
  __pid_t v17; // eax
  int v18; // eax

  v4 = a4;
  if ( a4 )
  {
    v5 = a3;
    v6 = __open_2(a2, (a3 << 17) & 0x20000 | 0x10900);
    *v4 = v6;
    v7 = v6;
    v8 = *__errno_location();
    v4[1] = v8;
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
  v9 = *a1;
  if ( *a1 > 5 )
    goto LABEL_40;
  if ( (1LL << v9) & 0x36 )
    goto LABEL_10;
  if ( (1LL << v9) & 8 )
  {
    if ( (a1[1] & 0x80000000) == 0 )
      goto LABEL_10;
    goto LABEL_26;
  }
  if ( v9 )
LABEL_40:
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
  *(_QWORD *)a1 = -4294967293LL;
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
    v12 = v4 == 0LL;
    goto LABEL_21;
  }
LABEL_18:
  switch ( (unsigned __int64)*a1 )
  {
    case 1uLL:
      *a1 = 2;
      break;
    case 2uLL:
    case 4uLL:
    case 5uLL:
      break;
    case 3uLL:
      if ( a1[1] )
        __assert_fail("wd->val.child == 0", "lib/savewd.c", 0x9Bu, "savewd_chdir");
      return result;
    default:
      __assert_fail("0", "lib/savewd.c", 0x9Fu, "savewd_chdir");
      return result;
  }
  v12 = v4 == 0LL;
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

int __fastcall sub_40F770(unsigned int *a1, int a2)
{
  __pid_t v2; // ebp
  int result; // eax
  int v4; // er12
  int *v5; // rbp
  __int16 v6; // ax
  int *v7; // rax
  int stat_loc; // [rsp+Ch] [rbp-1Ch]

  switch ( (unsigned __int64)*a1 )
  {
    case 0uLL:
    case 1uLL:
      return 0;
    case 2uLL:
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
        result = -1;
      }
      else
      {
        *a1 = 1;
      }
      return result;
    case 3uLL:
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
      if ( v6 & 0x7F )
      {
        raise(v6 & 0x7F);
        HIBYTE(v6) = BYTE1(stat_loc);
      }
      return HIBYTE(v6);
    case 4uLL:
      v4 = a1[1];
      v5 = __errno_location();
      goto LABEL_6;
    default:
      __assert_fail("0", "lib/savewd.c", 0xE2u, "savewd_restore");
      return result;
  }
}

int __fastcall sub_40F8A0(unsigned int *a1)
{
  __int64 v1; // rax
  int result; // eax

  v1 = *a1;
  switch ( v1 )
  {
    case 0LL:
    case 4LL:
      break;
    case 1LL:
    case 2LL:
      LODWORD(v1) = close(a1[1]);
      break;
    case 3LL:
      LODWORD(v1) = a1[1];
      if ( (int)v1 >= 0 )
        __assert_fail("wd->val.child < 0", "lib/savewd.c", 0xF7u, "savewd_finish");
      return result;
    default:
      __assert_fail("0", "lib/savewd.c", 0xFBu, "savewd_finish");
      return result;
  }
  *a1 = 5;
  return v1;
}

__int64 __fastcall sub_40F910(int a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD, int *, __int64), __int64 a4)
{
  __int64 (__fastcall *v4)(_QWORD, int *, __int64); // r13
  int v5; // ebp
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // r15
  int v9; // er14
  int i; // eax
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // r15
  unsigned __int64 v14; // rbp
  int v15; // eax
  __int64 v17; // [rsp+8h] [rbp-60h]
  int v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+2Ch] [rbp-3Ch]

  v4 = a3;
  v17 = a4;
  v18 = 0;
  if ( a1 - 1 < 0 )
    goto LABEL_27;
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
LABEL_27:
    v9 = 0;
    v5 = 0;
  }
  else
  {
    v8 = a2;
    v9 = 0;
    for ( i = 0; ; i = v18 )
    {
      if ( i != 3 || v19 <= 0 )
      {
        v11 = v4(*(_QWORD *)v8, &v18, v17);
        if ( v9 < v11 )
          v9 = v11;
      }
      if ( **(_BYTE **)(v8 + 8) != 47 )
      {
        v12 = sub_40F770((unsigned int *)&v18, v9);
        if ( v9 < v12 )
          v9 = v12;
      }
      v8 += 8LL;
      if ( v8 == a2 + 8LL * (unsigned int)(v5 - 1) + 8 )
        break;
    }
  }
  sub_40F8A0((unsigned int *)&v18);
  if ( a1 > v5 )
  {
    v13 = (_QWORD *)(a2 + 8LL * v5);
    v14 = a2 + 8 * (v5 + (unsigned __int64)(unsigned int)(a1 - 1 - v5)) + 8;
    do
    {
      v15 = v4(*v13, &v18, v17);
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
  __int64 v4; // [rsp+0h] [rbp-98h]

  v1 = __lxstat(1, filename, (struct stat *)&v4);
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

int __fastcall sub_40FAD0(const char *a1, int *a2)
{
  int v2; // esi

  v2 = *a2;
  LOBYTE(v2) = v2 & 0x3C | 0xC2;
  return open(a1, v2, 384LL);
}

noreturn void  sub_40FAF0()
{
  __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147u, "gen_tempname_len");
}

__int64 __fastcall sub_40FB10(char *s, int a2, __int64 a3, __int64 (__fastcall *a4)(char *, __int64), size_t a5)
{
  size_t v5; // r13
  int *v6; // rax
  int *v7; // r15
  size_t v8; // rax
  size_t v9; // rdx
  size_t v10; // rbx
  void *v11; // rbp
  int v12; // er12
  char *v13; // rbx
  char *v14; // r14
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // edx
  int v19; // [rsp+8h] [rbp-60h]
  char *v20; // [rsp+10h] [rbp-58h]
  int v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 (__fastcall *v23)(char *, __int64); // [rsp+20h] [rbp-48h]
  int v24; // [rsp+2Ch] [rbp-3Ch]

  v5 = a5;
  v22 = a3;
  v23 = a4;
  v6 = __errno_location();
  v7 = v6;
  v24 = *v6;
  v8 = strlen(s);
  v9 = v5 + a2;
  if ( v9 > v8 || (v10 = v8 - v9, v20 = &s[v8 - v9], v5 > strspn(&s[v8 - v9], "X")) )
  {
    *v7 = 22;
    v17 = -1;
  }
  else
  {
    v11 = (void *)sub_413800(0LL, v5);
    if ( v11 )
    {
      v12 = 238328;
      v13 = &s[v5 + v10];
      while ( 1 )
      {
        v14 = v20;
        if ( v5 )
        {
          do
            *(++v14 - 1) = byte_41A1C0[sub_413840(v11, 61LL)];
          while ( v14 != v13 );
        }
        v15 = v23(s, v22);
        if ( v15 >= 0 )
        {
          *v7 = v24;
          v16 = v24;
          goto LABEL_12;
        }
        v16 = *v7;
        if ( *v7 != 17 )
          break;
        if ( !--v12 )
        {
          sub_413960(v11);
          *v7 = 17;
          return (unsigned int)-1;
        }
      }
      v15 = -1;
LABEL_12:
      v21 = v15;
      v19 = v16;
      sub_413960(v11);
      v17 = v21;
      *v7 = v19;
    }
    else
    {
      v17 = -1;
    }
  }
  return v17;
}

__int64 __fastcall sub_40FC70(char *a1, int a2, int a3, unsigned int a4, size_t a5)
{
  int v6; // [rsp+Ch] [rbp-Ch]

  v6 = a3;
  if ( a4 > 2 )
    sub_40FAF0();
  return sub_40FB10(a1, a2, (__int64)&v6, (__int64 (__fastcall *)(char *, __int64))off_41A180[a4], a5);
}

__int64 __fastcall sub_40FCA0(char *a1, int a2, int a3, unsigned int a4)
{
  int v5; // [rsp+Ch] [rbp-Ch]

  v5 = a3;
  if ( a4 > 2 )
    sub_40FAF0();
  return sub_40FB10(a1, a2, (__int64)&v5, (__int64 (__fastcall *)(char *, __int64))off_41A180[a4], 6uLL);
}

__int64 __fastcall sub_40FCF0(int fd)
{
  __int64 result; // rax
  unsigned int v2; // er12
  int *v3; // rax
  int v4; // er13
  int *v5; // rbp

  if ( (unsigned int)fd > 2 )
    return (unsigned int)fd;
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
  __int64 v6; // rbp
  __int64 v7; // r14
  int v8; // er15
  unsigned int v9; // ebx
  _QWORD *v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // r9
  int v14; // edi
  __int64 v16; // rcx
  int v17; // er10
  int v18; // edi
  int v19; // ecx
  int v20; // esi
  int v21; // er8
  int v22; // er15
  int v23; // er11
  signed __int64 v24; // rax
  int v25; // eax
  int v26; // er8
  __int64 *v27; // r9
  int v28; // eax
  int v29; // er8
  int v30; // er10
  char v31; // al
  int v32; // ecx
  int v33; // eax
  int v34; // er10
  int v35; // ecx
  int v36; // esi
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdi
  __int64 *v40; // [rsp+0h] [rbp-148h]
  __int64 *v41; // [rsp+0h] [rbp-148h]
  __int64 *v42; // [rsp+0h] [rbp-148h]
  bool v43; // [rsp+8h] [rbp-140h]
  __int64 v44; // [rsp+10h] [rbp-138h]
  int v45; // [rsp+10h] [rbp-138h]
  int v46; // [rsp+18h] [rbp-130h]
  int v47; // [rsp+18h] [rbp-130h]
  int v48; // [rsp+18h] [rbp-130h]
  int v49; // [rsp+18h] [rbp-130h]
  _QWORD *v50; // [rsp+18h] [rbp-130h]
  char *filename; // [rsp+20h] [rbp-128h]
  __int64 v52; // [rsp+30h] [rbp-118h]
  int v53; // [rsp+3Ch] [rbp-10Ch]
  __int64 v54; // [rsp+48h] [rbp-100h]
  __int64 v55; // [rsp+50h] [rbp-F8h]
  int v56; // [rsp+58h] [rbp-F0h]
  char v57; // [rsp+5Ch] [rbp-ECh]
  __int64 v58; // [rsp+60h] [rbp-E8h]
  __int64 v59; // [rsp+68h] [rbp-E0h]
  __int64 v60; // [rsp+70h] [rbp-D8h]
  __int64 v61; // [rsp+78h] [rbp-D0h]
  struct stat stat_buf; // [rsp+80h] [rbp-C8h]

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
      return (unsigned int)-1;
    v9 = 1;
    if ( v6 == v5 )
    {
      if ( v8 <= (int)v7 )
        return v8 < (int)v7;
      return (unsigned int)-1;
    }
    return v9;
  }
  v43 = v5 == v6 && (_DWORD)v7 == (_DWORD)v4;
  if ( v43 )
    return 0;
  if ( v6 - 1 > v5 )
    return (unsigned int)-1;
  if ( v5 - 1 <= v6 )
  {
    v10 = (_QWORD *)qword_621B20;
    v44 = a2;
    filename = a1;
    if ( !qword_621B20 )
    {
      v10 = sub_40BB50(
              0x10uLL,
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
    *v11 = *(_QWORD *)v44;
    v12 = sub_40C2F0((__int64)v10, (__int64)v11);
    v13 = (__int64 *)v12;
    if ( v12 )
    {
      if ( qword_621B18 == v12 )
        qword_621B18 = 0LL;
LABEL_10:
      v14 = *((_DWORD *)v13 + 2);
      v46 = *((_DWORD *)v13 + 2);
      if ( *((_BYTE *)v13 + 12) )
      {
        v6 = ~(v14 == 2000000000) & (unsigned __int64)v6;
        v8 = v4 - v8 % v14;
        goto LABEL_12;
      }
LABEL_22:
      v16 = *(_QWORD *)(v44 + 112);
      v52 = *(_QWORD *)(v44 + 80);
      v17 = (int)v16 / 10;
      v18 = (int)v7 / 10;
      if ( ((int)v7 % 10) | ((int)v52 % 10) | ((int)v16 % 10) )
      {
LABEL_55:
        *((_DWORD *)v13 + 2) = v9;
        *((_BYTE *)v13 + 12) = 1;
        goto LABEL_12;
      }
      v19 = (int)v52 / 10;
      v20 = v17;
      v54 = *(_QWORD *)(v44 + 72);
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
          v53 = v8;
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
              v8 = v53;
              *((_DWORD *)v13 + 2) = v23;
              v24 = v6 & ~(v23 == 2000000000);
              goto LABEL_31;
            }
            --v22;
          }
          while ( v22 );
          v8 = v53;
          if ( (*(_BYTE *)(v44 + 104) | (unsigned __int8)(v5 | v54)) & 1 )
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
        return v9;
      if ( v5 < v24 || v5 == v24 && (int)v4 - v8 % v21 > (int)v7 )
        return (unsigned int)-1;
      v47 = v21;
      v58 = v54;
      v59 = (int)v52;
      v60 = v5 | v43;
      v61 = (int)(v21 / 9u + v7);
      v40 = v13;
      if ( (*(_DWORD *)(v44 + 24) & 0xF000) == 40960 )
      {
        v25 = sub_410AB0(filename);
        v27 = v40;
        v26 = v47;
      }
      else
      {
        v25 = sub_410AA0(filename);
        v26 = v47;
        v27 = v40;
      }
      if ( v25 != 0 )
        return (unsigned int)-2;
      v48 = v26;
      v41 = v27;
      if ( (*(_DWORD *)(v44 + 24) & 0xF000) == 40960 )
      {
        v28 = __lxstat(1, filename, &stat_buf);
        v13 = v41;
        v29 = v48;
      }
      else
      {
        v28 = __xstat(1, filename, &stat_buf);
        v29 = v48;
        v13 = v41;
      }
      v30 = v28;
      v31 = stat_buf.st_mtim.tv_sec;
      v32 = stat_buf.st_mtim.tv_nsec;
      if ( v30 | v5 ^ stat_buf.st_mtim.tv_sec | stat_buf.st_mtim.tv_nsec ^ (int)v7 )
      {
        v61 = (int)v7;
        v60 = v5;
        v33 = *(_DWORD *)(v44 + 24);
        v49 = v29;
        v45 = v30;
        v42 = v13;
        if ( (v33 & 0xF000) == 40960 )
        {
          sub_410AB0(filename);
          v13 = v42;
          v34 = v45;
          v29 = v49;
        }
        else
        {
          sub_410AA0(filename);
          v29 = v49;
          v34 = v45;
          v13 = v42;
        }
        if ( v34 )
          return (unsigned int)-2;
        v31 = stat_buf.st_mtim.tv_sec;
        v32 = stat_buf.st_mtim.tv_nsec;
      }
      v35 = 1000000000 * (v31 & 1) + v32;
      if ( v35 == 10 * (v35 / 10) )
      {
        if ( v29 != 10 )
        {
          v36 = 9;
          v9 = 10;
          do
          {
            v35 /= 10;
            if ( v35 != 10 * (v35 / 10) )
              break;
            if ( !--v36 )
            {
              v37 = -2LL;
              v9 = 2000000000;
              goto LABEL_54;
            }
            v9 *= 10;
          }
          while ( v9 != v29 );
          v37 = ~(v9 == 2000000000);
          goto LABEL_54;
        }
        v9 = 10;
      }
      v37 = -1LL;
LABEL_54:
      v6 &= v37;
      v8 = v4 - v8 % (int)v9;
      goto LABEL_55;
    }
    v39 = qword_621B20;
    if ( !qword_621B20 )
    {
LABEL_21:
      v56 = 2000000000;
      v13 = &v55;
      v57 = 0;
      v46 = 2000000000;
      goto LABEL_22;
    }
LABEL_59:
    v55 = *(_QWORD *)v44;
    v13 = (__int64 *)sub_40B8E0(v39, (__int64)&v55);
    if ( v13 )
      goto LABEL_10;
    goto LABEL_21;
  }
  return v9;
}

__int64 __fastcall sub_4104D0(_QWORD *a1, struct timespec **a2)
{
  struct timespec *v2; // rbx
  __syscall_slong_t v3; // rax
  __syscall_slong_t v4; // rdx
  __syscall_slong_t v5; // rax
  __int64 result; // rax
  __syscall_slong_t v7; // rax

  v2 = *a2;
  v3 = (*a2)->tv_nsec;
  v4 = (*a2)[1].tv_nsec;
  if ( v3 == 1073741822 )
  {
    result = 1LL;
    if ( v4 == 1073741822 )
      return result;
    v7 = a1[10];
    v2->tv_sec = a1[9];
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
    v5 = a1[12];
    v2[1].tv_sec = a1[11];
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

__int64 __fastcall sub_4105A0(_QWORD *a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // rdx
  int v3; // ecx
  int v4; // er10
  __int64 result; // rax

  v1 = a1[1];
  if ( v1 - 1073741822 > 1 && v1 > 0x3B9AC9FF || (v2 = a1[3], v2 - 1073741822 > 1) && v2 > 0x3B9AC9FF )
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
    result = v4 + (unsigned int)(v3 == 1);
  }
  return result;
}

__int64 __fastcall sub_410660(int fd, char *filename, const __m128i *a3)
{
  char *v3; // rbp
  int v4; // ebx
  __m128i v5; // xmm1
  int v6; // er13
  struct timespec *v7; // rsi
  unsigned int v8; // er12
  bool v9; // zf
  char v10; // al
  __syscall_slong_t v11; // rdi
  const __m128i *v12; // r13
  __syscall_slong_t v13; // rsi
  struct timeval *v14; // rdx
  struct utimbuf *v15; // rsi
  __time_t v16; // rax
  bool v18; // al
  __time_t v19; // rdx
  bool v20; // bp
  bool v21; // r14
  __time_t v22; // rax
  __m128i v23; // xmm3
  bool v24; // dl
  bool v25; // r14
  __syscall_slong_t v26; // rax
  struct timespec *times; // [rsp+8h] [rbp-120h]
  __m128i v28; // [rsp+10h] [rbp-118h]
  __m128i v29; // [rsp+20h] [rbp-108h]
  struct timeval tvp; // [rsp+30h] [rbp-F8h]
  __time_t v31; // [rsp+40h] [rbp-E8h]
  __syscall_slong_t v32; // [rsp+48h] [rbp-E0h]
  struct utimbuf file_times; // [rsp+50h] [rbp-D8h]
  __m128i v34; // [rsp+60h] [rbp-C8h]
  struct stat stat_buf; // [rsp+70h] [rbp-B8h]

  v3 = filename;
  v4 = fd;
  if ( a3 )
  {
    v5 = _mm_loadu_si128(a3 + 1);
    times = (struct timespec *)&v28;
    v28 = _mm_loadu_si128(a3);
    v29 = v5;
    v6 = sub_4105A0(&v28);
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
  if ( v6 != 3 )
  {
    v10 = fd < 0 ? __xstat(1, v3, &stat_buf) != 0 : __fxstat(1, fd, &stat_buf) != 0;
    if ( v10 )
      return (unsigned int)-1;
  }
  if ( !times )
    goto LABEL_26;
  v8 = 0;
  if ( (unsigned __int8)sub_4104D0(&stat_buf, &times) )
    return v8;
LABEL_18:
  if ( times )
  {
    v11 = times->tv_nsec;
    v12 = (const __m128i *)&tvp;
    tvp.tv_sec = times->tv_sec;
    v13 = times[1].tv_nsec;
    v31 = times[1].tv_sec;
    tvp.tv_usec = v11 / 1000;
    v14 = &tvp;
    v32 = v13 / 1000;
    if ( v4 >= 0 )
      goto LABEL_20;
    return (unsigned int)futimesat(-100, v3, v14);
  }
LABEL_26:
  v12 = 0LL;
  v14 = 0LL;
  if ( fd < 0 )
    return (unsigned int)futimesat(-100, v3, v14);
LABEL_20:
  v8 = futimesat(v4, 0LL, v14);
  if ( !v8 )
  {
    if ( !v12 )
      return v8;
    v20 = v12->m128i_i64[1] > 499999;
    v21 = v12[1].m128i_i64[1] > 499999;
    if ( v12->m128i_i64[1] <= 499999 && !v21 )
      return v8;
    if ( __fxstat(1, v4, &stat_buf) )
      return v8;
    v22 = stat_buf.st_atim.tv_sec - v12->m128i_i64[0];
    v23 = _mm_load_si128(v12 + 1);
    v24 = stat_buf.st_mtim.tv_sec - v12[1].m128i_i64[0] == 1;
    file_times = (struct utimbuf)_mm_load_si128(v12);
    v34 = v23;
    v25 = v24 && v21;
    if ( v22 != 1 || !v20 || stat_buf.st_atim.tv_nsec )
    {
      if ( !v25 || stat_buf.st_mtim.tv_nsec )
        return 0;
    }
    else
    {
      file_times.modtime = 0LL;
      if ( !v25 || stat_buf.st_mtim.tv_nsec )
        goto LABEL_48;
    }
    v34.m128i_i64[1] = 0LL;
LABEL_48:
    futimesat(v4, 0LL, (const struct timeval *)&file_times);
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
  __time_t v9; // rcx
  __syscall_slong_t v10; // rax
  struct timespec *times; // [rsp+8h] [rbp-D0h]
  __m128i v12; // [rsp+10h] [rbp-C8h]
  __m128i v13; // [rsp+20h] [rbp-B8h]
  struct stat stat_buf; // [rsp+30h] [rbp-A8h]

  if ( a2 )
  {
    v2 = _mm_loadu_si128(a2 + 1);
    times = (struct timespec *)&v12;
    v12 = _mm_loadu_si128(a2);
    v13 = v2;
    v3 = sub_4105A0(&v12);
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

__int64 __fastcall sub_410D00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_410D00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_411100(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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

__int64 __fastcall sub_411160(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  FILE *v7; // rbx
  char *v8; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1, v2, v3);
  v4 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v4, &unk_417166, "https://www.gnu.org/software/coreutils/", v5, v6);
  v7 = stdout;
  v8 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v8, v7);
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

void *__fastcall sub_411340(void *a1, size_t a2)
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
        sub_411530(a1, a2, v3);
    }
  }
  return result;
}

void *__fastcall sub_4114E0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4112E0(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_411510(void *src)
{
  size_t v1; // rax

  v1 = strlen((const char *)src);
  return sub_4114E0(src, v1 + 1);
}

noreturn void  sub_411530()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_411570(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
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

__int64 sub_4119A0()
{
  unsigned int v0; // ebx
  __ssize_t v1; // rax
  char *v2; // rdi
  char *v3; // rax
  char *response; // [rsp+0h] [rbp-18h]
  size_t n; // [rsp+8h] [rbp-10h]

  v0 = 0;
  response = 0LL;
  n = 0LL;
  v1 = __getdelim(&response, &n, 10, stdin);
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

__int64 __fastcall sub_411A10(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_621B34 < 0 )
    {
      v3 = sub_411A10(a1);
      if ( v3 >= 0 && dword_621B34 == -1 )
      {
LABEL_8:
        v5 = fcntl((unsigned __int8)v3, 1);
        if ( v5 < 0 || fcntl((unsigned __int8)v3, 2, v5 | 1u) == -1 )
        {
          v6 = __errno_location();
          v7 = v3;
          v3 = -1;
          v8 = *v6;
          v9 = v6;
          close(v7);
          *v9 = v8;
        }
        return (unsigned int)v3;
      }
    }
    else
    {
      v3 = fcntl(a1, 1030, (unsigned int)a3);
      if ( v3 >= 0 || *__errno_location() != 22 )
      {
        dword_621B34 = 1;
      }
      else
      {
        v3 = sub_411A10(a1);
        if ( v3 >= 0 )
        {
          dword_621B34 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_411B50(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
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
    if ( *(_DWORD *)a1 & 0x100 )
      result += *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 72);
  }
  return result;
}

int __fastcall sub_411BC0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_411C20(__int64 a1, int *a2)
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

__int64 __fastcall sub_411D00(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_412320(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_411C20(a2, a7);
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
        sub_411C20((__int64)v11, a7);
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
            return (unsigned int)sub_411D00(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_411D00(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_411D00(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_4128F0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
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

__int64 __fastcall sub_412950(int a1, __int64 a2, char *a3)
{
  return sub_4128F0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_412970(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_4128F0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_412990(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_412320(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4129B0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_4128F0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_4129D0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_412320(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_4129F0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch]

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
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_412A70(FILE *s, __int64 a2, __int64 a3)
{
  char *v3; // rax
  size_t v4; // rbx
  char *v5; // rbp
  int *v7; // rax
  int v8; // er13
  int *v9; // r12
  size_t n; // [rsp+8h] [rbp-800h]
  char v11; // [rsp+10h] [rbp-7F8h]

  n = 2000LL;
  v3 = (char *)sub_414470(&v11, &n, a2, a3);
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
  int result; // eax

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

noreturn void  sub_412B90()
{
  sub_4046F0(1);
}

__int64 __fastcall sub_412BA0(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_412CC0(char *a1, char *a2, __int64 a3)
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

int __fastcall sub_412D40(char **a1, char *a2, size_t a3)
{
  const void *v3; // r14
  size_t v4; // r13
  char *v5; // rbp
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  char *i; // r12
  _BYTE *v11; // rax
  _BYTE *v12; // rax
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
  return (int)v13;
}

__int64 __fastcall sub_412E60(char *a1, char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  size_t v6; // r15
  void (*v7)(void); // r13
  char *v8; // rbp
  char **v9; // rbx
  __int64 result; // rax

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (char **)a3;
  result = sub_412BA0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_412CC0(a1, a2, result);
    sub_412D40(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_412ED0(void *s1, __int64 *a2, char *a3, size_t a4)
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
      result = strcmp(v1, "POSIX") != 0;
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
          v1 = "%s: invalid option -- '%c'\n" + 27;
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
                v1 = "%s: invalid option -- '%c'\n" + 27;
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
            sub_4143E0(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = "%s: invalid option -- '%c'\n" + 27;
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

__int64 __usercall sub_4135D0(int fd, char *file, int a3, __uid_t a4, __gid_t a5, int a6, int a7)
{
  int v7; // er14
  __gid_t v8; // er13
  __uid_t v9; // er12
  char *v10; // rbp
  unsigned int v11; // ebx
  __mode_t v12; // ecx
  int v13; // eax
  int v14; // edx
  int *v16; // rax
  int v17; // er12
  int *v18; // rbp
  int v19; // esi
  int v20; // eax
  int v21; // [rsp+8h] [rbp-D0h]
  __mode_t v22; // [rsp+Ch] [rbp-CCh]
  __mode_t v23; // [rsp+Ch] [rbp-CCh]
  struct stat stat_buf; // [rsp+10h] [rbp-C8h]

  v7 = a6;
  v8 = a5;
  v9 = a4;
  v10 = file;
  v21 = a3;
  if ( fd < 0 )
  {
    v11 = __xstat(1, file, &stat_buf);
    if ( v11 )
      return v11;
    v12 = stat_buf.st_mode;
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
      return v11;
    }
  }
  if ( (v9 == -1 || stat_buf.st_uid == v9) && (v8 == -1 || stat_buf.st_gid == v8) )
    goto LABEL_18;
  if ( fd >= 0 )
  {
    v23 = v12;
    v20 = fchown(fd, v9, v8);
    v12 = v23;
    v11 = v20;
    if ( !v20 )
      goto LABEL_10;
LABEL_23:
    v18 = __errno_location();
    v17 = *v18;
    goto LABEL_15;
  }
  v22 = v12;
  if ( v21 == -1 )
    v13 = chown(file, v9, v8);
  else
    v13 = lchown(file, v9, v8);
  v12 = v22;
  v11 = v13;
  if ( !v13 )
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
        return v11;
    }
    v11 = close(fd);
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
  unsigned __int64 v3; // r13
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx
  char v13; // [rsp+8h] [rbp-40h]

  v2 = a2 + 1;
  v3 = a2;
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
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
        a1[2] = 0LL;
        a1[1] = 0LL;
        return v5;
      }
    }
    v7 = (v6 - v3) % v2;
    if ( v5 <= v6 - v7 )
      break;
    v6 = v7 - 1;
    v5 %= v2;
  }
  a1[1] = v5 / v2;
  v5 %= v2;
  a1[2] = (v6 - v3) / v2;
  return v5;
}

void __fastcall sub_413940(void *ptr)
{
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
}

__int64 __fastcall sub_413960(void *ptr)
{
  unsigned int v1; // er12
  int *v2; // rax
  int v3; // er13
  int *v4; // rbp

  v1 = sub_413E90(*(void **)ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
  *v4 = v3;
  return v1;
}

noreturn void __fastcall  sub_4139C0(char *a1)
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

noreturn void __fastcall  sub_4139C0(char *a1)
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
  __int64 v8; // r13
  int v9; // eax
  int v10; // er15
  __int64 v11; // rdx
  __int64 v12; // rbp
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
  struct timeval tv; // [rsp+10h] [rbp-48h]

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
    v8 = (__int64)v7[2].m128i_i64;
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
      v12 = __read_chk((unsigned int)v9, v8, v11, 4120LL);
      close(v10);
      if ( v12 > 2047 )
        goto LABEL_12;
      if ( v12 < 0 )
        v12 = 0LL;
      v26 = 2048 - v12;
      v27 = (struct timeval *)(v8 + v12);
      if ( (unsigned __int64)(2048 - v12) > 0x10 )
        v26 = 16LL;
      v28 = v26 + v12;
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
      qmemcpy((void *)(v8 + v28), &tv, v30);
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
        *(_BYTE *)(v8 + v13 + v16) = *((_BYTE *)&tv.tv_sec + v16);
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
          *(_BYTE *)(v8 + v17 + v20) = *((_BYTE *)&tv.tv_sec + v20);
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
            *(_BYTE *)(v8 + v21 + v25) = *((_BYTE *)&tv.tv_sec + v25);
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
  __int64 v3; // r12
  char *v4; // rbp
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

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *(FILE **)a1;
  if ( *(_QWORD *)a1 )
  {
    v7 = __errno_location();
    while ( 1 )
    {
      result = fread_unlocked(v4, 1uLL, v5, v6);
      v9 = *v7;
      v4 += result;
      v5 -= result;
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
      result = (__int64)memcpy(v4, v12, v5);
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
        result = sub_413EE0(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_413E90(void *ptr)
{
  FILE *v1; // rbp
  __int64 result; // rax

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_4143E0(v1);
  else
    result = 0LL;
  return result;
}

unsigned __int64 *__fastcall sub_413EE0(unsigned __int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // rdx
  __int64 *v4; // r9
  __int64 v5; // r8
  unsigned __int64 *result; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 *v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r10
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r11
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx

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
    v14 = v13 ^ (v13 << 12);
    v15 = v11 + v13 + *(unsigned __int64 *)((char *)a1 + (result[1] & 0x7F8));
    result[1] = v15;
    v16 = v12 + *(unsigned __int64 *)((char *)a1 + ((v15 >> 8) & 0x7F8));
    v4[1] = v16;
    v17 = result[2];
    v18 = result[130] + v14;
    v19 = v16 + v18 + *(unsigned __int64 *)((char *)a1 + (result[2] & 0x7F8));
    result[2] = v19;
    v20 = *(unsigned __int64 *)((char *)a1 + ((v19 >> 8) & 0x7F8)) + v17;
    v4[2] = v20;
    v21 = result[3];
    v3 = result[131] + ((v18 >> 33) ^ v18);
    v22 = v20 + v3 + *(unsigned __int64 *)((char *)a1 + (result[3] & 0x7F8));
    result += 4;
    v4 += 4;
    *(result - 1) = v22;
    v7 = v21 + *(unsigned __int64 *)((char *)a1 + ((v22 >> 8) & 0x7F8));
    *(v4 - 1) = v7;
  }
  while ( result != a1 + 128 );
  v23 = a2 + 128;
  do
  {
    v24 = *result;
    v25 = *(result - 128) + ~((v3 << 21) ^ v3);
    v26 = v25 + *(unsigned __int64 *)((char *)a1 + (*result & 0x7F8));
    *result = v7 + v26;
    v27 = *(unsigned __int64 *)((char *)a1 + (((unsigned __int64)(v7 + v26) >> 8) & 0x7F8)) + v24;
    *v23 = v27;
    v28 = result[1];
    v29 = *(result - 127) + ((v25 >> 5) ^ v25);
    v30 = v29 ^ (v29 << 12);
    v31 = v27 + v29 + *(unsigned __int64 *)((char *)a1 + (result[1] & 0x7F8));
    result[1] = v31;
    v32 = v28 + *(unsigned __int64 *)((char *)a1 + ((v31 >> 8) & 0x7F8));
    v23[1] = v32;
    v33 = result[2];
    v34 = *(result - 126) + v30;
    v35 = v32 + v34 + *(unsigned __int64 *)((char *)a1 + (result[2] & 0x7F8));
    result[2] = v35;
    v36 = *(unsigned __int64 *)((char *)a1 + ((v35 >> 8) & 0x7F8)) + v33;
    v23[2] = v36;
    v37 = result[3];
    v3 = *(result - 125) + ((v34 >> 33) ^ v34);
    v38 = v36 + v3 + *(unsigned __int64 *)((char *)a1 + (result[3] & 0x7F8));
    result += 4;
    v23 += 4;
    *(result - 1) = v38;
    v7 = v37 + *(unsigned __int64 *)((char *)a1 + ((v38 >> 8) & 0x7F8));
    *(v23 - 1) = v7;
  }
  while ( result != a1 + 256 );
  a1[256] = v3;
  a1[257] = v7;
  return result;
}

unsigned __int64 __fastcall sub_414190(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // r11
  __int64 v6; // r12
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r11
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rbx
  unsigned __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // r10
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r11
  __int64 v34; // rsi
  unsigned __int64 v35; // rbx
  unsigned __int64 result; // rax
  __int64 v37; // r12

  v1 = a1;
  v2 = a1;
  v3 = -7424904924229222229LL;
  v4 = -9011610652101975858LL;
  v5 = -5576812576440232668LL;
  v6 = -5865837416287532563LL;
  v7 = -8354558816804203872LL;
  v8 = -5046086420515862430LL;
  v9 = (__int64)(a1 + 256);
  v10 = 7240739780546808700LL;
  v11 = 5259722845879046933LL;
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
  while ( (__int64 *)v9 != v2 );
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
  while ( (_QWORD *)v9 != v1 );
  a1[258] = 0LL;
  a1[257] = 0LL;
  a1[256] = 0LL;
  return result;
}

__int64 __fastcall sub_4143D0(char a1)
{
  return sub_411A10(a1, 0, 3LL);
}

int __fastcall sub_4143E0(FILE *stream)
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
  if ( !sub_411B50(stream) )
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

void __fastcall sub_414460(_DWORD *a1)
{
  *a1 |= 0x20u;
}

char *__fastcall sub_414470(void *a1, size_t *a2, char *a3, __int64 a4, double a5)
{
  char *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  _BYTE *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  char *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  char *v17; // rcx
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
  _BYTE *v33; // rdi
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
  char *result; // rax
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // er11
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  int *v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  unsigned __int64 v80; // r9
  int v81; // ebx
  __int64 v82; // rax
  char *v83; // rdi
  unsigned __int128 v84; // fst7
  __int64 v85; // rax
  char *v86; // rdi
  unsigned __int64 v87; // rax
  void *v88; // rax
  char *v89; // rax
  char *v90; // rcx
  int v91; // er8
  __int16 v92; // ax
  unsigned __int64 v93; // r15
  char *v94; // rax
  char *v95; // rax
  char *v96; // rax
  char v97; // al
  unsigned __int64 v98; // r9
  size_t v99; // r8
  unsigned __int64 v100; // r10
  unsigned __int64 v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rax
  char *v105; // rax
  __int64 v106; // rsi
  char v107; // al
  size_t v108; // r15
  size_t v109; // r14
  bool v110; // r13
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // r10
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  char v120; // al
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  char *v123; // rax
  __int64 v124; // rdx
  char v125; // al
  unsigned __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  char *v131; // rsi
  char *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rsi
  unsigned __int64 v135; // rax
  char v136; // al
  __int64 v137; // rsi
  char v138; // al
  char *v139; // rax
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // rax
  char *v143; // rax
  char *v144; // rax
  void *v145; // rdx
  char v146; // al
  char *v147; // rax
  char *v148; // rax
  char v149; // al
  __int64 v150; // [rsp-8h] [rbp-718h]
  int *v151; // [rsp+8h] [rbp-708h]
  int *v152; // [rsp+10h] [rbp-700h]
  int *v153; // [rsp+18h] [rbp-6F8h]
  __int64 v154; // [rsp+20h] [rbp-6F0h]
  unsigned __int64 v155; // [rsp+28h] [rbp-6E8h]
  char *v156; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v158; // [rsp+40h] [rbp-6D0h]
  void *v159; // [rsp+48h] [rbp-6C8h]
  char *v160; // [rsp+50h] [rbp-6C0h]
  __int64 v161; // [rsp+58h] [rbp-6B8h]
  char *v162; // [rsp+60h] [rbp-6B0h]
  _BYTE *v163; // [rsp+68h] [rbp-6A8h]
  long double v164; // [rsp+70h] [rbp-6A0h]
  void *v165; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v167; // [rsp+94h] [rbp-67Ch]
  unsigned int v168; // [rsp+98h] [rbp-678h]
  unsigned int v169; // [rsp+9Ch] [rbp-674h]
  char v170; // [rsp+A0h] [rbp-670h]
  void *v171; // [rsp+A8h] [rbp-668h]
  __int64 v172; // [rsp+B0h] [rbp-660h]
  __int64 v173; // [rsp+190h] [rbp-580h]
  void *v174; // [rsp+198h] [rbp-578h]
  __int64 v175; // [rsp+1A0h] [rbp-570h]
  __int64 v176; // [rsp+1A8h] [rbp-568h]
  __int64 v177; // [rsp+1B0h] [rbp-560h]
  char v178; // [rsp+420h] [rbp-2F0h]

  v5 = a3;
  v6 = a4;
  src = a1;
  v158 = a2;
  if ( (int)sub_416250(a3, &v173, &v170) < 0 )
    return 0LL;
  if ( (int)sub_416030(v6, &v170) >= 0 )
  {
    v7 = v175 + 7;
    if ( (unsigned __int64)(v175 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v176, v7);
    v8 = v176 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v163 = (_BYTE *)(((unsigned __int64)&v155 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = malloc(v9);
      v163 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v158;
    v12 = (char *)v174;
    v13 = v5;
    v14 = (char *)src;
    v161 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v174;
    if ( *(char **)v174 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (char *)(v16 - v13);
    v18 = (unsigned __int64)&v17[v15];
    v19 = (size_t)&v17[v15];
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
          v162 = v13;
          LOBYTE(v164) = v20;
          v165 = v17;
          v21 = (char *)malloc(v11);
          v17 = (char *)v165;
          v13 = v162;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v164) )
          {
            *(_QWORD *)&v164 = v162;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = (char *)v165;
            v13 = *(char **)&v164;
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
          *(_QWORD *)&v164 = v13;
          v165 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = (char *)v165;
          v13 = *(char **)&v164;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)&v17[v15];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v173 != v161 )
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
              goto LABEL_239;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_239:
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
            *(_QWORD *)&v164 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v165) = v14 == src;
          v96 = (char *)malloc(v11);
          if ( !v96 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v165 )
            v14 = (char *)memcpy(v96, v14, v19);
          else
            v14 = v96;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v171;
      v28 = (long double *)((char *)v171 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v165) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v165 == 12 )
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
                v165 = (void *)-1LL;
                while ( 1 )
                {
                  v127 = (__int64)(v66 + 1);
                  v128 = -1LL;
                  v129 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v128 = 10 * v50;
                  v76 = __CFADD__(v128, v129);
                  v50 = v128 + v129;
                  v66 = (char *)v127;
                  if ( v76 )
                  {
                    if ( v67 == (char *)v127 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v165;
                      goto LABEL_82;
                    }
                    while ( *(++v66 - 1) != 48 )
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
              v70 = (char *)v171 + 32 * v69;
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
                v130 = (__int64)(v51 + 1);
                v55 = 0LL;
                if ( v52 != (char *)v130 )
                {
                  v131 = (char *)v130;
                  while ( 1 )
                  {
                    v132 = v131 + 1;
                    v133 = *v131 - 48;
                    v134 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v134 = 10 * v55;
                    v76 = __CFADD__(v134, v133);
                    v135 = v134 + v133;
                    v131 = v132;
                    v55 = v135;
                    if ( v76 )
                    {
                      if ( v52 == v132 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v131 = v132 + 1;
                        if ( *v132 == 48 )
                          break;
                        if ( v52 == v131 )
                          goto LABEL_88;
                        ++v132;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v131 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_376;
              }
              v54 = (char *)v171 + 32 * v53;
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
                  v87 = v56;
                  if ( v50 >= v56 )
                    v87 = v50;
                  v76 = __CFADD__(v87, 1LL);
                  v88 = (void *)(v87 + 1);
                  v165 = v88;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v88 <= 0x2BC )
                  {
                    v90 = &v178;
                  }
                  else
                  {
                    v159 = (void *)v50;
                    v160 = (char *)v55;
                    LODWORD(v162) = v68;
                    v164 = _FST7;
                    if ( v88 == (void *)-1LL )
                      goto LABEL_88;
                    v89 = (char *)malloc((size_t)v88);
                    v68 = (int)v162;
                    _FST7 = v164;
                    v90 = v89;
                    v55 = (unsigned __int64)v160;
                    v50 = (unsigned __int64)v159;
                    if ( !v89 )
                      goto LABEL_88;
                  }
                  v91 = (unsigned __int16)v168;
                  LOBYTE(v92) = v168;
                  HIBYTE(v92) = BYTE1(v168) | 3;
                  LOWORD(v168) = v92;
                  __asm (" fxam ");
                  if ( v62 & 2 )
                  {
                    *v90 = 45;
                    _FST7 = -_FST7;
                    v93 = (unsigned __int64)(v90 + 1);
                  }
                  else if ( v68 & 4 )
                  {
                    v93 = (unsigned __int64)(v90 + 1);
                    *v90 = 43;
                  }
                  else
                  {
                    v93 = (unsigned __int64)v90;
                    if ( v68 & 8 )
                    {
                      v93 = (unsigned __int64)(v90 + 1);
                      *v90 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v98 = v93 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v93 + 2) = 102;
                      *(_WORD *)v93 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v93 + 2) = 70;
                      *(_WORD *)v93 = 20041;
                    }
                    v93 = 0LL;
                    goto LABEL_264;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v97 = v12[72] & 0xDF;
                  switch ( v97 )
                  {
                    case 70:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || v55 )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v123 = nl_langinfo(0x10000);
                        v124 = (__int64)v160;
                        v98 = *(_QWORD *)&v164;
                        v125 = *v123;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v125 )
                          v125 = 46;
                        *(_BYTE *)(v93 + 1) = v125;
                        if ( v124 )
                        {
                          v126 = v98;
                          do
                            *(_BYTE *)(++v126 - 1) = 48;
                          while ( v126 != v93 + v124 + 2 );
                          v98 += v124;
                        }
                        goto LABEL_264;
                      }
                      goto LABEL_263;
                    case 69:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || (v106 = v93 + 1, v55) )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v139 = nl_langinfo(0x10000);
                        v140 = (__int64)v160;
                        v106 = *(_QWORD *)&v164;
                        v141 = *v139;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v141 )
                          v141 = 46;
                        *(_BYTE *)(v93 + 1) = v141;
                        if ( v140 )
                        {
                          v142 = v106;
                          do
                            *(_BYTE *)(++v142 - 1) = 48;
                          while ( v142 != v93 + v140 + 2 );
                          v106 += v140;
                        }
                      }
                      v107 = v12[72];
                      v98 = v106 + 4;
                      *(_BYTE *)(v106 + 3) = 48;
                      *(_BYTE *)v106 = v107;
                      *(_WORD *)(v106 + 1) = 12331;
                      goto LABEL_264;
                    case 71:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v154) = v91;
                          v155 = v50;
                          v156 = (char *)(v93 + 2);
                          v159 = v90;
                          LODWORD(v160) = v68;
                          v162 = (char *)v55;
                          *(_QWORD *)&v164 = v55 - 1;
                          v117 = nl_langinfo(0x10000);
                          v118 = *(_QWORD *)&v164;
                          v119 = (__int64)v162;
                          v120 = *v117;
                          LOBYTE(v68) = (_BYTE)v160;
                          v90 = (char *)v159;
                          v98 = (unsigned __int64)v156;
                          v50 = v155;
                          LOWORD(v91) = WORD2(v154);
                          if ( !v120 )
                            v120 = 46;
                          *(_BYTE *)(v93 + 1) = v120;
                          if ( v118 )
                          {
                            v121 = v93 + v119 + 1;
                            v122 = v98;
                            do
                              *(_BYTE *)(++v122 - 1) = 48;
                            while ( v122 != v121 );
                            v98 += v118;
                          }
                        }
                        else
                        {
                          LODWORD(v156) = v91;
                          v159 = (void *)v50;
                          v160 = (char *)(v93 + 2);
                          v162 = v90;
                          LODWORD(v164) = v68;
                          v148 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v164);
                          v90 = v162;
                          v149 = *v148;
                          v98 = (unsigned __int64)v160;
                          v50 = (unsigned __int64)v159;
                          LOWORD(v91) = (_WORD)v156;
                          if ( !v149 )
                            v149 = 46;
                          *(_BYTE *)(v93 + 1) = v149;
                        }
                        goto LABEL_264;
                      }
LABEL_263:
                      v98 = v93 + 1;
                      goto LABEL_264;
                  }
                  if ( v97 != 65 )
                    goto LABEL_200;
                  *(_BYTE *)v93 = 48;
                  *(_QWORD *)&v164 = v93 + 2;
                  v136 = v12[72];
                  *(_BYTE *)(v93 + 2) = 48;
                  *(_BYTE *)(v93 + 1) = v136 + 23;
                  if ( v68 & 0x10 || (v137 = v93 + 3, v55) )
                  {
                    HIDWORD(v154) = v91;
                    v155 = v50;
                    v156 = v90;
                    v159 = (void *)v55;
                    LODWORD(v160) = v68;
                    v162 = (char *)(v93 + 4);
                    v144 = nl_langinfo(0x10000);
                    v145 = v159;
                    v137 = (__int64)v162;
                    v146 = *v144;
                    LOBYTE(v68) = (_BYTE)v160;
                    v90 = v156;
                    v50 = v155;
                    LOWORD(v91) = WORD2(v154);
                    if ( !v146 )
                      v146 = 46;
                    *(_BYTE *)(v93 + 3) = v146;
                    if ( v145 )
                    {
                      v147 = (char *)v137;
                      do
                        *(++v147 - 1) = 48;
                      while ( v147 != (char *)v145 + v93 + 4 );
                      v137 += (__int64)v145;
                    }
                  }
                  v138 = v12[72];
                  v98 = v137 + 3;
                  *(_WORD *)(v137 + 1) = 12331;
                  v93 = *(_QWORD *)&v164;
                  *(_BYTE *)v137 = v138 + 15;
LABEL_264:
                  LOWORD(v168) = v91;
                  v99 = v98 - (_QWORD)v90;
                  if ( v50 > v98 - (unsigned __int64)v90 )
                  {
                    v100 = v50 - v99;
                    v101 = v98 + v100;
                    v99 = v98 + v100 - (_QWORD)v90;
                    if ( v68 & 2 )
                    {
                      if ( v100 )
                      {
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v101 != v98 );
                      }
                    }
                    else if ( v68 & 0x20 && v93 )
                    {
                      if ( v93 >= v98 )
                      {
                        v93 = v98;
                      }
                      else
                      {
                        v102 = -1LL;
                        do
                        {
                          *(_BYTE *)(v101 + v102) = *(_BYTE *)(v98 + v102);
                          --v102;
                        }
                        while ( v102 != v93 - 1 - v98 );
                      }
                      if ( v100 )
                      {
                        v103 = v93 + v100;
                        do
                          *(_BYTE *)(++v93 - 1) = 48;
                        while ( v93 != v103 );
                      }
                    }
                    else
                    {
                      v113 = -1LL;
                      if ( (unsigned __int64)v90 < v98 )
                      {
                        do
                        {
                          *(_BYTE *)(v101 + v113) = *(_BYTE *)(v98 + v113);
                          --v113;
                        }
                        while ( &v90[-v98 - 1] != (char *)v113 );
                        v98 = (unsigned __int64)v90;
                      }
                      if ( v100 )
                      {
                        v114 = v98 + v100;
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v98 != v114 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v165 <= v99 )
                    goto LABEL_200;
                  v104 = v99 + v19;
                  v15 = v99 + v19;
                  if ( v11 - v19 <= v99 )
                  {
                    if ( __CFADD__(v99, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v104 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v104 )
                          goto LABEL_374;
                      }
                      else
                      {
                        if ( v104 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_281;
                        }
LABEL_374:
                        if ( v104 == -1LL )
                          goto LABEL_88;
                        v11 = v99 + v19;
                      }
LABEL_281:
                      if ( v14 && v14 != src )
                      {
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v105 = (char *)realloc(v14, v11);
                        if ( !v105 )
                          goto LABEL_88;
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        v14 = v105;
                      }
                      else
                      {
                        LOBYTE(v162) = v14 == src;
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v115 = (char *)malloc(v11);
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        if ( !v115 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v162 )
                        {
                          v116 = (char *)memcpy(v115, v14, v19);
                          v90 = (char *)v165;
                          v99 = *(_QWORD *)&v164;
                          v14 = v116;
                        }
                        else
                        {
                          v14 = v115;
                        }
                      }
                    }
                  }
                  v165 = v90;
                  memcpy(&v14[v19], v90, v99);
                  if ( v165 != &v178 )
                    free(v165);
                  goto LABEL_110;
                }
LABEL_376:
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
        v32 = v163 + 1;
        *v163 = 37;
        if ( v31 & 1 )
        {
          v33 = v163;
          v163[1] = 39;
          v32 = v33 + 2;
        }
        if ( v31 & 2 )
          *v32++ = 45;
        if ( v31 & 4 )
          *v32++ = 43;
        if ( v31 & 8 )
          *v32++ = 32;
        if ( v31 & 0x10 )
          *v32++ = 35;
        if ( v31 & 0x40 )
          *v32++ = 73;
        if ( v31 & 0x20 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        if ( (unsigned int)v165 <= 0x10 )
        {
          v38 = 1LL << (char)v165;
          if ( (1LL << (char)v165) & 0x14180 )
            goto LABEL_125;
          if ( v38 & 0x1000 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( !(v38 & 0x600) )
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
            LODWORD(v162) = 1;
            v168 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v162) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v162;
          *(&v168 + (unsigned int)v162) = *((_DWORD *)v43 + 4);
          LODWORD(v162) = v44 + 1;
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
              *(_QWORD *)&v164 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v174 != &v177 )
                    free(v174);
                  if ( v171 != &v172 )
                    free(v171);
                  v14 = 0LL;
                  **(_DWORD **)&v164 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v164 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v164) = v14 == src;
            v95 = (char *)malloc(v11);
            v46 = v95;
            if ( !v95 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v164) )
              v46 = (char *)memcpy(v95, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v160 = v46;
            v47 = __errno_location();
            v48 = v160;
            v160 = v32;
            *(_QWORD *)&v164 = v47;
            LODWORD(v156) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v167 = -1;
              **(_DWORD **)&v164 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (_DWORD)v165 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v80 = *((unsigned int *)v171 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v152 = &v167;
                      goto LABEL_153;
                    }
                    v151 = (int *)v80;
                    goto LABEL_210;
                  }
                  v153 = &v167;
                  v152 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v171 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v72, a5, &v167, v153);
LABEL_131:
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v151 = v72;
LABEL_210:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v168, a5, v169, v151);
LABEL_211:
                    v48 = (char *)v159;
LABEL_132:
                    v74 = v167;
                    if ( v167 < 0 )
                    {
LABEL_154:
                      if ( v160[1] )
                      {
                        v160[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v164;
                        if ( !**(_DWORD **)&v164 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        **(_DWORD **)&v164 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v167 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v164 = (_DWORD)v156;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        v14 = 0LL;
                        **(_DWORD **)&v164 = 75;
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
                          if ( !v48 || v78 )
                          {
                            v159 = v48;
                            v94 = (char *)malloc(v11);
                            v48 = (char *)v159;
                            if ( !v94 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v94, v159, v19);
                            else
                              v48 = v94;
                          }
                          else
                          {
                            v159 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v159;
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
                  v153 = &v167;
                  v152 = v72;
                  break;
                case 0xB:
                  v85 = *((_QWORD *)v12 + 10);
                  v86 = &v48[v19];
                  v159 = v48;
                  a5 = *((double *)v171 + 4 * v85 + 2);
                  if ( (_DWORD)v162 == 1 )
                  {
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, &v167, v153);
                  }
                  else
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, &v167, a5, v154, v155);
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, v169, &v167);
                  }
                  v48 = (char *)v159;
                  goto LABEL_132;
                case 0xC:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 == 1 )
                  {
                    v84 = *((unsigned __int128 *)v171 + 2 * v82 + 1);
                    v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v84, v84 >> 64);
                    goto LABEL_211;
                  }
                  if ( (_DWORD)v162 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v163,
                            &v167,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)),
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)) >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v169, v150);
                  v48 = (char *)v159;
                  goto LABEL_132;
                default:
                  goto LABEL_409;
              }
              break;
            }
            v80 = v168;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v80, a5, v152, v153);
            v74 = v167;
            v48 = (char *)v159;
            if ( v167 < 0 )
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
LABEL_409:
          abort();
          return result;
      }
LABEL_110:
      v13 = (char *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v161;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v108 = v19;
    v109 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v109 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v109 )
        {
LABEL_304:
          v110 = v14 == src;
          if ( !v14 || v110 )
          {
            v143 = (char *)malloc(v11);
            if ( !v143 )
              goto LABEL_88;
            if ( v108 && v110 )
              v14 = (char *)memcpy(v143, v14, v108);
            else
              v14 = v143;
          }
          else
          {
            v111 = (char *)realloc(v14, v11);
            if ( !v111 )
              goto LABEL_126;
            v14 = v111;
          }
          goto LABEL_308;
        }
      }
      else if ( v109 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_304;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_304;
    }
LABEL_308:
    v14[v108] = 0;
    if ( v11 > v109 && v14 != src )
    {
      v112 = (char *)realloc(v14, v109);
      if ( v112 )
        v14 = v112;
    }
    if ( ptr )
      free(ptr);
    if ( v174 != &v177 )
      free(v174);
    if ( v171 != &v172 )
      free(v171);
    *v158 = v108;
    return v14;
  }
  if ( v174 != &v177 )
    free(v174);
  if ( v171 != &v172 )
    free(v171);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

char *__fastcall sub_414470(void *a1, size_t *a2, char *a3, __int64 a4, double a5)
{
  char *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  _BYTE *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  char *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  char *v17; // rcx
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
  _BYTE *v33; // rdi
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
  char *result; // rax
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // er11
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  int *v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  unsigned __int64 v80; // r9
  int v81; // ebx
  __int64 v82; // rax
  char *v83; // rdi
  unsigned __int128 v84; // fst7
  __int64 v85; // rax
  char *v86; // rdi
  unsigned __int64 v87; // rax
  void *v88; // rax
  char *v89; // rax
  char *v90; // rcx
  int v91; // er8
  __int16 v92; // ax
  unsigned __int64 v93; // r15
  char *v94; // rax
  char *v95; // rax
  char *v96; // rax
  char v97; // al
  unsigned __int64 v98; // r9
  size_t v99; // r8
  unsigned __int64 v100; // r10
  unsigned __int64 v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rax
  char *v105; // rax
  __int64 v106; // rsi
  char v107; // al
  size_t v108; // r15
  size_t v109; // r14
  bool v110; // r13
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // r10
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  char v120; // al
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  char *v123; // rax
  __int64 v124; // rdx
  char v125; // al
  unsigned __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  char *v131; // rsi
  char *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rsi
  unsigned __int64 v135; // rax
  char v136; // al
  __int64 v137; // rsi
  char v138; // al
  char *v139; // rax
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // rax
  char *v143; // rax
  char *v144; // rax
  void *v145; // rdx
  char v146; // al
  char *v147; // rax
  char *v148; // rax
  char v149; // al
  __int64 v150; // [rsp-8h] [rbp-718h]
  int *v151; // [rsp+8h] [rbp-708h]
  int *v152; // [rsp+10h] [rbp-700h]
  int *v153; // [rsp+18h] [rbp-6F8h]
  __int64 v154; // [rsp+20h] [rbp-6F0h]
  unsigned __int64 v155; // [rsp+28h] [rbp-6E8h]
  char *v156; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v158; // [rsp+40h] [rbp-6D0h]
  void *v159; // [rsp+48h] [rbp-6C8h]
  char *v160; // [rsp+50h] [rbp-6C0h]
  __int64 v161; // [rsp+58h] [rbp-6B8h]
  char *v162; // [rsp+60h] [rbp-6B0h]
  _BYTE *v163; // [rsp+68h] [rbp-6A8h]
  long double v164; // [rsp+70h] [rbp-6A0h]
  void *v165; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v167; // [rsp+94h] [rbp-67Ch]
  unsigned int v168; // [rsp+98h] [rbp-678h]
  unsigned int v169; // [rsp+9Ch] [rbp-674h]
  char v170; // [rsp+A0h] [rbp-670h]
  void *v171; // [rsp+A8h] [rbp-668h]
  __int64 v172; // [rsp+B0h] [rbp-660h]
  __int64 v173; // [rsp+190h] [rbp-580h]
  void *v174; // [rsp+198h] [rbp-578h]
  __int64 v175; // [rsp+1A0h] [rbp-570h]
  __int64 v176; // [rsp+1A8h] [rbp-568h]
  __int64 v177; // [rsp+1B0h] [rbp-560h]
  char v178; // [rsp+420h] [rbp-2F0h]

  v5 = a3;
  v6 = a4;
  src = a1;
  v158 = a2;
  if ( (int)sub_416250(a3, &v173, &v170) < 0 )
    return 0LL;
  if ( (int)sub_416030(v6, &v170) >= 0 )
  {
    v7 = v175 + 7;
    if ( (unsigned __int64)(v175 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v176, v7);
    v8 = v176 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v163 = (_BYTE *)(((unsigned __int64)&v155 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = malloc(v9);
      v163 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v158;
    v12 = (char *)v174;
    v13 = v5;
    v14 = (char *)src;
    v161 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v174;
    if ( *(char **)v174 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (char *)(v16 - v13);
    v18 = (unsigned __int64)&v17[v15];
    v19 = (size_t)&v17[v15];
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
          v162 = v13;
          LOBYTE(v164) = v20;
          v165 = v17;
          v21 = (char *)malloc(v11);
          v17 = (char *)v165;
          v13 = v162;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v164) )
          {
            *(_QWORD *)&v164 = v162;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = (char *)v165;
            v13 = *(char **)&v164;
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
          *(_QWORD *)&v164 = v13;
          v165 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = (char *)v165;
          v13 = *(char **)&v164;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)&v17[v15];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v173 != v161 )
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
              goto LABEL_239;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_239:
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
            *(_QWORD *)&v164 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v165) = v14 == src;
          v96 = (char *)malloc(v11);
          if ( !v96 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v165 )
            v14 = (char *)memcpy(v96, v14, v19);
          else
            v14 = v96;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v171;
      v28 = (long double *)((char *)v171 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v165) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v165 == 12 )
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
                v165 = (void *)-1LL;
                while ( 1 )
                {
                  v127 = (__int64)(v66 + 1);
                  v128 = -1LL;
                  v129 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v128 = 10 * v50;
                  v76 = __CFADD__(v128, v129);
                  v50 = v128 + v129;
                  v66 = (char *)v127;
                  if ( v76 )
                  {
                    if ( v67 == (char *)v127 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v165;
                      goto LABEL_82;
                    }
                    while ( *(++v66 - 1) != 48 )
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
              v70 = (char *)v171 + 32 * v69;
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
                v130 = (__int64)(v51 + 1);
                v55 = 0LL;
                if ( v52 != (char *)v130 )
                {
                  v131 = (char *)v130;
                  while ( 1 )
                  {
                    v132 = v131 + 1;
                    v133 = *v131 - 48;
                    v134 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v134 = 10 * v55;
                    v76 = __CFADD__(v134, v133);
                    v135 = v134 + v133;
                    v131 = v132;
                    v55 = v135;
                    if ( v76 )
                    {
                      if ( v52 == v132 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v131 = v132 + 1;
                        if ( *v132 == 48 )
                          break;
                        if ( v52 == v131 )
                          goto LABEL_88;
                        ++v132;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v131 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_376;
              }
              v54 = (char *)v171 + 32 * v53;
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
                  v87 = v56;
                  if ( v50 >= v56 )
                    v87 = v50;
                  v76 = __CFADD__(v87, 1LL);
                  v88 = (void *)(v87 + 1);
                  v165 = v88;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v88 <= 0x2BC )
                  {
                    v90 = &v178;
                  }
                  else
                  {
                    v159 = (void *)v50;
                    v160 = (char *)v55;
                    LODWORD(v162) = v68;
                    v164 = _FST7;
                    if ( v88 == (void *)-1LL )
                      goto LABEL_88;
                    v89 = (char *)malloc((size_t)v88);
                    v68 = (int)v162;
                    _FST7 = v164;
                    v90 = v89;
                    v55 = (unsigned __int64)v160;
                    v50 = (unsigned __int64)v159;
                    if ( !v89 )
                      goto LABEL_88;
                  }
                  v91 = (unsigned __int16)v168;
                  LOBYTE(v92) = v168;
                  HIBYTE(v92) = BYTE1(v168) | 3;
                  LOWORD(v168) = v92;
                  __asm (" fxam ");
                  if ( v62 & 2 )
                  {
                    *v90 = 45;
                    _FST7 = -_FST7;
                    v93 = (unsigned __int64)(v90 + 1);
                  }
                  else if ( v68 & 4 )
                  {
                    v93 = (unsigned __int64)(v90 + 1);
                    *v90 = 43;
                  }
                  else
                  {
                    v93 = (unsigned __int64)v90;
                    if ( v68 & 8 )
                    {
                      v93 = (unsigned __int64)(v90 + 1);
                      *v90 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v98 = v93 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v93 + 2) = 102;
                      *(_WORD *)v93 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v93 + 2) = 70;
                      *(_WORD *)v93 = 20041;
                    }
                    v93 = 0LL;
                    goto LABEL_264;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v97 = v12[72] & 0xDF;
                  switch ( v97 )
                  {
                    case 70:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || v55 )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v123 = nl_langinfo(0x10000);
                        v124 = (__int64)v160;
                        v98 = *(_QWORD *)&v164;
                        v125 = *v123;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v125 )
                          v125 = 46;
                        *(_BYTE *)(v93 + 1) = v125;
                        if ( v124 )
                        {
                          v126 = v98;
                          do
                            *(_BYTE *)(++v126 - 1) = 48;
                          while ( v126 != v93 + v124 + 2 );
                          v98 += v124;
                        }
                        goto LABEL_264;
                      }
                      goto LABEL_263;
                    case 69:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || (v106 = v93 + 1, v55) )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v139 = nl_langinfo(0x10000);
                        v140 = (__int64)v160;
                        v106 = *(_QWORD *)&v164;
                        v141 = *v139;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v141 )
                          v141 = 46;
                        *(_BYTE *)(v93 + 1) = v141;
                        if ( v140 )
                        {
                          v142 = v106;
                          do
                            *(_BYTE *)(++v142 - 1) = 48;
                          while ( v142 != v93 + v140 + 2 );
                          v106 += v140;
                        }
                      }
                      v107 = v12[72];
                      v98 = v106 + 4;
                      *(_BYTE *)(v106 + 3) = 48;
                      *(_BYTE *)v106 = v107;
                      *(_WORD *)(v106 + 1) = 12331;
                      goto LABEL_264;
                    case 71:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v154) = v91;
                          v155 = v50;
                          v156 = (char *)(v93 + 2);
                          v159 = v90;
                          LODWORD(v160) = v68;
                          v162 = (char *)v55;
                          *(_QWORD *)&v164 = v55 - 1;
                          v117 = nl_langinfo(0x10000);
                          v118 = *(_QWORD *)&v164;
                          v119 = (__int64)v162;
                          v120 = *v117;
                          LOBYTE(v68) = (_BYTE)v160;
                          v90 = (char *)v159;
                          v98 = (unsigned __int64)v156;
                          v50 = v155;
                          LOWORD(v91) = WORD2(v154);
                          if ( !v120 )
                            v120 = 46;
                          *(_BYTE *)(v93 + 1) = v120;
                          if ( v118 )
                          {
                            v121 = v93 + v119 + 1;
                            v122 = v98;
                            do
                              *(_BYTE *)(++v122 - 1) = 48;
                            while ( v122 != v121 );
                            v98 += v118;
                          }
                        }
                        else
                        {
                          LODWORD(v156) = v91;
                          v159 = (void *)v50;
                          v160 = (char *)(v93 + 2);
                          v162 = v90;
                          LODWORD(v164) = v68;
                          v148 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v164);
                          v90 = v162;
                          v149 = *v148;
                          v98 = (unsigned __int64)v160;
                          v50 = (unsigned __int64)v159;
                          LOWORD(v91) = (_WORD)v156;
                          if ( !v149 )
                            v149 = 46;
                          *(_BYTE *)(v93 + 1) = v149;
                        }
                        goto LABEL_264;
                      }
LABEL_263:
                      v98 = v93 + 1;
                      goto LABEL_264;
                  }
                  if ( v97 != 65 )
                    goto LABEL_200;
                  *(_BYTE *)v93 = 48;
                  *(_QWORD *)&v164 = v93 + 2;
                  v136 = v12[72];
                  *(_BYTE *)(v93 + 2) = 48;
                  *(_BYTE *)(v93 + 1) = v136 + 23;
                  if ( v68 & 0x10 || (v137 = v93 + 3, v55) )
                  {
                    HIDWORD(v154) = v91;
                    v155 = v50;
                    v156 = v90;
                    v159 = (void *)v55;
                    LODWORD(v160) = v68;
                    v162 = (char *)(v93 + 4);
                    v144 = nl_langinfo(0x10000);
                    v145 = v159;
                    v137 = (__int64)v162;
                    v146 = *v144;
                    LOBYTE(v68) = (_BYTE)v160;
                    v90 = v156;
                    v50 = v155;
                    LOWORD(v91) = WORD2(v154);
                    if ( !v146 )
                      v146 = 46;
                    *(_BYTE *)(v93 + 3) = v146;
                    if ( v145 )
                    {
                      v147 = (char *)v137;
                      do
                        *(++v147 - 1) = 48;
                      while ( v147 != (char *)v145 + v93 + 4 );
                      v137 += (__int64)v145;
                    }
                  }
                  v138 = v12[72];
                  v98 = v137 + 3;
                  *(_WORD *)(v137 + 1) = 12331;
                  v93 = *(_QWORD *)&v164;
                  *(_BYTE *)v137 = v138 + 15;
LABEL_264:
                  LOWORD(v168) = v91;
                  v99 = v98 - (_QWORD)v90;
                  if ( v50 > v98 - (unsigned __int64)v90 )
                  {
                    v100 = v50 - v99;
                    v101 = v98 + v100;
                    v99 = v98 + v100 - (_QWORD)v90;
                    if ( v68 & 2 )
                    {
                      if ( v100 )
                      {
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v101 != v98 );
                      }
                    }
                    else if ( v68 & 0x20 && v93 )
                    {
                      if ( v93 >= v98 )
                      {
                        v93 = v98;
                      }
                      else
                      {
                        v102 = -1LL;
                        do
                        {
                          *(_BYTE *)(v101 + v102) = *(_BYTE *)(v98 + v102);
                          --v102;
                        }
                        while ( v102 != v93 - 1 - v98 );
                      }
                      if ( v100 )
                      {
                        v103 = v93 + v100;
                        do
                          *(_BYTE *)(++v93 - 1) = 48;
                        while ( v93 != v103 );
                      }
                    }
                    else
                    {
                      v113 = -1LL;
                      if ( (unsigned __int64)v90 < v98 )
                      {
                        do
                        {
                          *(_BYTE *)(v101 + v113) = *(_BYTE *)(v98 + v113);
                          --v113;
                        }
                        while ( &v90[-v98 - 1] != (char *)v113 );
                        v98 = (unsigned __int64)v90;
                      }
                      if ( v100 )
                      {
                        v114 = v98 + v100;
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v98 != v114 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v165 <= v99 )
                    goto LABEL_200;
                  v104 = v99 + v19;
                  v15 = v99 + v19;
                  if ( v11 - v19 <= v99 )
                  {
                    if ( __CFADD__(v99, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v104 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v104 )
                          goto LABEL_374;
                      }
                      else
                      {
                        if ( v104 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_281;
                        }
LABEL_374:
                        if ( v104 == -1LL )
                          goto LABEL_88;
                        v11 = v99 + v19;
                      }
LABEL_281:
                      if ( v14 && v14 != src )
                      {
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v105 = (char *)realloc(v14, v11);
                        if ( !v105 )
                          goto LABEL_88;
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        v14 = v105;
                      }
                      else
                      {
                        LOBYTE(v162) = v14 == src;
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v115 = (char *)malloc(v11);
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        if ( !v115 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v162 )
                        {
                          v116 = (char *)memcpy(v115, v14, v19);
                          v90 = (char *)v165;
                          v99 = *(_QWORD *)&v164;
                          v14 = v116;
                        }
                        else
                        {
                          v14 = v115;
                        }
                      }
                    }
                  }
                  v165 = v90;
                  memcpy(&v14[v19], v90, v99);
                  if ( v165 != &v178 )
                    free(v165);
                  goto LABEL_110;
                }
LABEL_376:
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
        v32 = v163 + 1;
        *v163 = 37;
        if ( v31 & 1 )
        {
          v33 = v163;
          v163[1] = 39;
          v32 = v33 + 2;
        }
        if ( v31 & 2 )
          *v32++ = 45;
        if ( v31 & 4 )
          *v32++ = 43;
        if ( v31 & 8 )
          *v32++ = 32;
        if ( v31 & 0x10 )
          *v32++ = 35;
        if ( v31 & 0x40 )
          *v32++ = 73;
        if ( v31 & 0x20 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        if ( (unsigned int)v165 <= 0x10 )
        {
          v38 = 1LL << (char)v165;
          if ( (1LL << (char)v165) & 0x14180 )
            goto LABEL_125;
          if ( v38 & 0x1000 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( !(v38 & 0x600) )
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
            LODWORD(v162) = 1;
            v168 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v162) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v162;
          *(&v168 + (unsigned int)v162) = *((_DWORD *)v43 + 4);
          LODWORD(v162) = v44 + 1;
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
              *(_QWORD *)&v164 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v174 != &v177 )
                    free(v174);
                  if ( v171 != &v172 )
                    free(v171);
                  v14 = 0LL;
                  **(_DWORD **)&v164 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v164 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v164) = v14 == src;
            v95 = (char *)malloc(v11);
            v46 = v95;
            if ( !v95 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v164) )
              v46 = (char *)memcpy(v95, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v160 = v46;
            v47 = __errno_location();
            v48 = v160;
            v160 = v32;
            *(_QWORD *)&v164 = v47;
            LODWORD(v156) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v167 = -1;
              **(_DWORD **)&v164 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (_DWORD)v165 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v80 = *((unsigned int *)v171 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v152 = &v167;
                      goto LABEL_153;
                    }
                    v151 = (int *)v80;
                    goto LABEL_210;
                  }
                  v153 = &v167;
                  v152 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v171 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v72, a5, &v167, v153);
LABEL_131:
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v151 = v72;
LABEL_210:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v168, a5, v169, v151);
LABEL_211:
                    v48 = (char *)v159;
LABEL_132:
                    v74 = v167;
                    if ( v167 < 0 )
                    {
LABEL_154:
                      if ( v160[1] )
                      {
                        v160[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v164;
                        if ( !**(_DWORD **)&v164 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        **(_DWORD **)&v164 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v167 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v164 = (_DWORD)v156;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        v14 = 0LL;
                        **(_DWORD **)&v164 = 75;
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
                          if ( !v48 || v78 )
                          {
                            v159 = v48;
                            v94 = (char *)malloc(v11);
                            v48 = (char *)v159;
                            if ( !v94 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v94, v159, v19);
                            else
                              v48 = v94;
                          }
                          else
                          {
                            v159 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v159;
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
                  v153 = &v167;
                  v152 = v72;
                  break;
                case 0xB:
                  v85 = *((_QWORD *)v12 + 10);
                  v86 = &v48[v19];
                  v159 = v48;
                  a5 = *((double *)v171 + 4 * v85 + 2);
                  if ( (_DWORD)v162 == 1 )
                  {
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, &v167, v153);
                  }
                  else
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, &v167, a5, v154, v155);
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, v169, &v167);
                  }
                  v48 = (char *)v159;
                  goto LABEL_132;
                case 0xC:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 == 1 )
                  {
                    v84 = *((unsigned __int128 *)v171 + 2 * v82 + 1);
                    v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v84, v84 >> 64);
                    goto LABEL_211;
                  }
                  if ( (_DWORD)v162 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v163,
                            &v167,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)),
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)) >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v169, v150);
                  v48 = (char *)v159;
                  goto LABEL_132;
                default:
                  goto LABEL_409;
              }
              break;
            }
            v80 = v168;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v80, a5, v152, v153);
            v74 = v167;
            v48 = (char *)v159;
            if ( v167 < 0 )
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
LABEL_409:
          abort();
          return result;
      }
LABEL_110:
      v13 = (char *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v161;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v108 = v19;
    v109 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v109 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v109 )
        {
LABEL_304:
          v110 = v14 == src;
          if ( !v14 || v110 )
          {
            v143 = (char *)malloc(v11);
            if ( !v143 )
              goto LABEL_88;
            if ( v108 && v110 )
              v14 = (char *)memcpy(v143, v14, v108);
            else
              v14 = v143;
          }
          else
          {
            v111 = (char *)realloc(v14, v11);
            if ( !v111 )
              goto LABEL_126;
            v14 = v111;
          }
          goto LABEL_308;
        }
      }
      else if ( v109 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_304;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_304;
    }
LABEL_308:
    v14[v108] = 0;
    if ( v11 > v109 && v14 != src )
    {
      v112 = (char *)realloc(v14, v109);
      if ( v112 )
        v14 = v112;
    }
    if ( ptr )
      free(ptr);
    if ( v174 != &v177 )
      free(v174);
    if ( v171 != &v172 )
      free(v171);
    *v158 = v108;
    return v14;
  }
  if ( v174 != &v177 )
    free(v174);
  if ( v171 != &v172 )
    free(v171);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

FILE *__fastcall sub_415F90(const char *a1, const char *a2)
{
  FILE *v2; // rax
  FILE *v3; // rbx
  unsigned int v4; // eax
  int v6; // er12
  int *v7; // rax
  int v8; // ebp
  int *v9; // rbx
  int *v10; // rax
  FILE *v11; // rdi
  int v12; // er12
  int *v13; // rbp

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( v4 <= 2 )
    {
      v6 = sub_4143D0(v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_4143E0(v11);
        *v13 = v12;
      }
      else if ( sub_4143E0(v3) || (v3 = fdopen(v6, a2)) == 0LL )
      {
        v7 = __errno_location();
        v8 = *v7;
        v9 = v7;
        close(v6);
        *v9 = v8;
        v3 = 0LL;
      }
    }
  }
  return v3;
}

__int64 __fastcall sub_416030(int *a1, unsigned __int64 *a2)
{
  unsigned int *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  _QWORD *v5; // r10
  unsigned int v7; // ecx
  unsigned int *v8; // r10
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

  v2 = (unsigned int *)a2[1];
  if ( *a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( (unsigned __int64)*v2 )
      {
        case 1uLL:
        case 2uLL:
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
          *((_BYTE *)v2 + 16) = *v12;
          goto LABEL_7;
        case 3uLL:
        case 4uLL:
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
          *((_WORD *)v2 + 8) = *v10;
          goto LABEL_7;
        case 5uLL:
        case 6uLL:
        case 0xDuLL:
        case 0xEuLL:
          v7 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v8 = (unsigned int *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v8 + 2;
          }
          else
          {
            v8 = (unsigned int *)(*((_QWORD *)a1 + 2) + v7);
            *a1 = v7 + 8;
          }
          v2[4] = *v8;
          goto LABEL_7;
        case 7uLL:
        case 8uLL:
        case 9uLL:
        case 0xAuLL:
        case 0x11uLL:
        case 0x12uLL:
        case 0x13uLL:
        case 0x14uLL:
        case 0x15uLL:
        case 0x16uLL:
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
          *((_QWORD *)v2 + 2) = *v5;
          goto LABEL_7;
        case 0xBuLL:
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
          *((_QWORD *)v2 + 2) = *v14;
          goto LABEL_7;
        case 0xCuLL:
          v15 = (long double *)((*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *((_QWORD *)a1 + 1) = v15 + 1;
          *((long double *)v2 + 1) = *v15;
          goto LABEL_7;
        case 0xFuLL:
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
          *((_QWORD *)v2 + 2) = v21;
          goto LABEL_7;
        case 0x10uLL:
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
          *((_QWORD *)v2 + 2) = v18;
LABEL_7:
          ++v3;
          v2 += 8;
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
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // r13
  char *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // r12
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
  void *v34; // r12
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
  void *v51; // rdi
  unsigned __int64 v52; // r9
  _DWORD *v53; // rax
  char *i; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  const void *v57; // rsi
  void *v58; // rdi
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
  __int64 v82; // [rsp+28h] [rbp-60h]
  unsigned __int64 v83; // [rsp+30h] [rbp-58h]
  char *v84; // [rsp+30h] [rbp-58h]
  unsigned __int64 v85; // [rsp+30h] [rbp-58h]
  int v86; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+30h] [rbp-58h]
  _BYTE *v88; // [rsp+30h] [rbp-58h]
  char *v89; // [rsp+30h] [rbp-58h]
  _BYTE *v90; // [rsp+30h] [rbp-58h]
  _QWORD *v91; // [rsp+38h] [rbp-50h]
  unsigned __int64 v92; // [rsp+38h] [rbp-50h]
  _QWORD *v93; // [rsp+38h] [rbp-50h]
  unsigned __int64 v94; // [rsp+38h] [rbp-50h]
  unsigned __int64 v95; // [rsp+38h] [rbp-50h]
  unsigned __int64 v96; // [rsp+38h] [rbp-50h]
  unsigned __int64 v97; // [rsp+38h] [rbp-50h]
  unsigned __int64 v98; // [rsp+38h] [rbp-50h]
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
  v5 = a3;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *a2 = 0LL;
  a2[1] = a2 + 4;
  v82 = (__int64)(a2 + 4);
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
  v12 = (__int64)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 40) = -1LL;
  *(_QWORD *)(v12 + 48) = 0LL;
  *(_QWORD *)(v12 + 56) = 0LL;
  *(_QWORD *)(v12 + 64) = -1LL;
  *(_QWORD *)(v12 + 80) = -1LL;
  v13 = a1[1];
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_17;
  v36 = a1 + 1;
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_17;
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
        goto LABEL_131;
      v63 = -1LL;
      v65 = v9;
      v64 = v13 - 48;
    }
  }
  while ( v67 <= 9u );
  v11 = v66 - 1;
  if ( v66 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  v9 = v65 + 2;
  v13 = v65[2];
  while ( 1 )
  {
LABEL_17:
    v14 = v9 + 1;
    switch ( v13 )
    {
      case 39:
        *(_DWORD *)(v12 + 16) |= 1u;
        goto LABEL_16;
      case 45:
        *(_DWORD *)(v12 + 16) |= 2u;
        goto LABEL_16;
      case 43:
        *(_DWORD *)(v12 + 16) |= 4u;
        goto LABEL_16;
      case 32:
        *(_DWORD *)(v12 + 16) |= 8u;
        goto LABEL_16;
      case 35:
        *(_DWORD *)(v12 + 16) |= 0x10u;
        goto LABEL_16;
    }
    if ( v13 != 48 )
      break;
    *(_DWORD *)(v12 + 16) |= 0x20u;
LABEL_16:
    v13 = *v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *(_DWORD *)(v12 + 16) |= 0x40u;
    goto LABEL_16;
  }
  if ( v13 == 42 )
  {
    v16 = 1LL;
    *(_QWORD *)(v12 + 24) = v9;
    *(_QWORD *)(v12 + 32) = v14;
    if ( v79 )
      v16 = v79;
    v79 = v16;
    v17 = v9[1];
    if ( (unsigned __int8)(v9[1] - 48) > 9u )
      goto LABEL_215;
    v43 = v9 + 1;
    do
      ++v43;
    while ( (unsigned __int8)(*v43 - 48) <= 9u );
    if ( *v43 != 36 )
    {
LABEL_215:
      v18 = *(_QWORD *)(v12 + 40);
      if ( v18 == -1LL )
      {
        *(_QWORD *)(v12 + 40) = v81;
        if ( v81 == -1LL )
          goto LABEL_131;
        v18 = v81++;
      }
    }
    else
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
            goto LABEL_131;
          v45 = -1LL;
          v47 = v14;
          v46 = v17 - 48;
        }
      }
      while ( v50 <= 9u );
      v18 = v49 - 1;
      if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_131;
      *(_QWORD *)(v12 + 40) = v18;
      v14 = v47 + 2;
    }
    v19 = (_DWORD *)v5[1];
    if ( v6 > v18 )
    {
      v20 = *v5;
LABEL_43:
      if ( v20 <= v18 )
      {
        do
          v19[8 * ++v20 - 8] = 0;
        while ( v20 <= v18 );
        *v5 = v20;
      }
      v21 = &v19[8 * v18];
      if ( *v21 )
      {
        if ( *v21 == 5 )
        {
          v13 = *v14;
          v9 = v14++;
          goto LABEL_26;
        }
        goto LABEL_132;
      }
      *v21 = 5;
      v13 = *v14;
      v9 = v14++;
      if ( v13 != 46 )
        goto LABEL_27;
LABEL_48:
      v22 = v9[1] == 42;
      *(_QWORD *)(v12 + 48) = v9;
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
        *(_QWORD *)(v12 + 56) = v14;
        v13 = *v14;
        if ( v80 >= v37 )
          v37 = v80;
        v80 = v37;
        goto LABEL_27;
      }
      v23 = 2LL;
      v24 = v9 + 2;
      *(_QWORD *)(v12 + 56) = v9 + 2;
      if ( v80 >= 2 )
        v23 = v80;
      v80 = v23;
      v25 = v9[2];
      if ( (unsigned __int8)(v9[2] - 48) > 9u )
        goto LABEL_216;
      v68 = v9 + 2;
      do
        ++v68;
      while ( (unsigned __int8)(*v68 - 48) <= 9u );
      if ( *v68 != 36 )
      {
LABEL_216:
        v26 = *(_QWORD *)(v12 + 64);
        if ( v26 != -1LL )
          goto LABEL_53;
        *(_QWORD *)(v12 + 64) = v81;
        if ( v81 != -1LL )
        {
          v26 = v81++;
          goto LABEL_53;
        }
      }
      else
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
              goto LABEL_131;
            v70 = -1LL;
            v72 = v24;
            v71 = v25 - 48;
          }
        }
        while ( v74 <= 9u );
        v26 = v73 - 1;
        if ( v73 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *(_QWORD *)(v12 + 64) = v26;
          v24 = v72 + 2;
LABEL_53:
          v19 = (_DWORD *)v5[1];
          if ( v6 > v26 )
          {
            v27 = *v5;
            goto LABEL_55;
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
                goto LABEL_163;
              v27 = *v5;
              v40 = src;
              v19 = v75;
            }
            else
            {
              v60 = realloc(v19, 32 * v59);
              v40 = (_DWORD *)v5[1];
              v24 = v88;
              v19 = v60;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v60 )
                goto LABEL_161;
              v27 = *v5;
              if ( src != v40 )
                goto LABEL_172;
            }
            v110 = v4;
            v104 = v6;
            v98 = v7;
            v90 = v24;
            memcpy(v19, v40, 32 * v27);
            v27 = *v5;
            v4 = v110;
            v6 = v104;
            v7 = v98;
            v24 = v90;
LABEL_172:
            v5[1] = (unsigned __int64)v19;
LABEL_55:
            if ( v27 <= v26 )
            {
              do
                v19[8 * ++v27 - 8] = 0;
              while ( v27 <= v26 );
              *v5 = v27;
            }
            v28 = &v19[8 * v26];
            if ( !*v28 )
            {
              *v28 = 5;
              v9 = v24;
              v13 = *v24;
              goto LABEL_27;
            }
            if ( *v28 == 5 )
            {
              v13 = *v24;
              v9 = v24;
              goto LABEL_27;
            }
            goto LABEL_132;
          }
LABEL_160:
          v40 = v19;
          goto LABEL_161;
        }
      }
LABEL_131:
      v19 = (_DWORD *)v5[1];
LABEL_132:
      if ( src != v19 )
      {
        srca = v4;
        free(v19);
        v4 = srca;
      }
      v51 = (void *)v4[1];
      if ( (void *)v82 != v51 )
        free(v51);
      *__errno_location() = 22;
      return 0xFFFFFFFFLL;
    }
    v38 = 2 * v6;
    if ( v38 <= v18 )
      v38 = v18 + 1;
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_160;
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
        goto LABEL_163;
      v20 = *v5;
      v40 = src;
      v19 = v61;
    }
    else
    {
      v39 = realloc(v19, 32 * v38);
      v40 = (_DWORD *)v5[1];
      v14 = v84;
      v19 = v39;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v39 )
        goto LABEL_161;
      v20 = *v5;
      if ( src != v40 )
        goto LABEL_94;
    }
    v109 = v4;
    v103 = v6;
    v97 = v7;
    v89 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *v5;
    v4 = v109;
    v6 = v103;
    v7 = v97;
    v14 = v89;
LABEL_94:
    v5[1] = (unsigned __int64)v19;
    goto LABEL_43;
  }
  if ( (unsigned __int8)(v13 - 48) <= 9u )
  {
    *(_QWORD *)(v12 + 24) = v9;
    if ( (unsigned __int8)(*v9 - 48) <= 9u )
    {
      for ( i = v9; ; ++i )
      {
        v55 = (__int64)(i + 1);
        if ( (unsigned __int8)(i[1] - 48) > 9u )
          break;
      }
      v14 = i + 2;
      v56 = v55 - (_QWORD)v9;
      v9 = (char *)v55;
      if ( v79 >= v56 )
        v56 = v79;
      v79 = v56;
    }
    *(_QWORD *)(v12 + 32) = v9;
    v13 = *v9;
  }
LABEL_26:
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
      v13 = *v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case 37:
      goto LABEL_71;
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
      goto LABEL_63;
    case 67:
      v29 = 14;
      v13 = 99;
      goto LABEL_63;
    case 83:
      v29 = 16;
      v13 = 115;
      goto LABEL_63;
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
      goto LABEL_63;
    case 99:
      v29 = (v15 > 7) + 13;
      goto LABEL_63;
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
      goto LABEL_63;
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
      goto LABEL_63;
    case 112:
      v29 = 17;
      goto LABEL_63;
    case 115:
      v29 = (v15 > 7) + 15;
LABEL_63:
      if ( v11 == -1LL )
      {
        *(_QWORD *)(v12 + 80) = v81;
        if ( v81 == -1LL )
          goto LABEL_131;
        v11 = v81++;
      }
      else
      {
        *(_QWORD *)(v12 + 80) = v11;
      }
      v19 = (_DWORD *)v5[1];
      if ( v6 > v11 )
        goto LABEL_66;
      v52 = 2 * v6;
      if ( v52 <= v11 )
        v52 = v11 + 1;
      if ( v52 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_160;
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
          goto LABEL_163;
        goto LABEL_159;
      }
      v53 = realloc(v19, 32 * v52);
      v29 = v86;
      v7 = v94;
      v19 = v53;
      v6 = v100;
      v4 = v106;
      if ( !v53 )
        goto LABEL_211;
      if ( src == (_DWORD *)v5[1] )
      {
        v19 = src;
LABEL_159:
        v57 = v19;
        v107 = v4;
        v101 = v6;
        v19 = v53;
        v95 = v7;
        v87 = v29;
        memcpy(v53, v57, 32 * *v5);
        v4 = v107;
        v29 = v87;
        v6 = v101;
        v7 = v95;
      }
      v5[1] = (unsigned __int64)v19;
LABEL_66:
      v30 = *v5;
      if ( *v5 <= v11 )
      {
        do
          v19[8 * ++v30 - 8] = 0;
        while ( v30 <= v11 );
        *v5 = v30;
      }
      v31 = &v19[8 * v11];
      if ( *v31 )
      {
        if ( *v31 != v29 )
          goto LABEL_132;
      }
      else
      {
        *v31 = v29;
      }
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
      if ( (v7 & 0x8000000000000000LL) == 0LL )
      {
        v33 = 2 * v7;
        if ( 2 * v7 <= 0x2E8BA2E8BA2E8BALL )
        {
          v34 = (void *)v4[1];
          v91 = v4;
          v83 = v6;
          if ( (void *)v82 == v34 )
          {
            v41 = malloc(176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v41;
            if ( !v41 )
            {
              v40 = (_DWORD *)v5[1];
              if ( src != v40 )
                goto LABEL_162;
              goto LABEL_165;
            }
          }
          else
          {
            v35 = realloc(v34, 176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v35;
            if ( !v35 )
              goto LABEL_211;
            v34 = (void *)v91[1];
            v8 = *v91;
            if ( (void *)v82 != v34 )
              goto LABEL_78;
          }
          v93 = v4;
          v85 = v6;
          v42 = memcpy(v3, v34, 88 * v8);
          v4 = v93;
          v6 = v85;
          v3 = v42;
          v8 = *v93;
LABEL_78:
          v4[1] = v3;
          v7 = v33;
          goto LABEL_3;
        }
      }
LABEL_211:
      v40 = (_DWORD *)v5[1];
LABEL_161:
      if ( src != v40 )
      {
LABEL_162:
        srcb = v4;
        free(v40);
        v4 = srcb;
      }
LABEL_163:
      v58 = (void *)v4[1];
      if ( (void *)v82 != v58 )
        free(v58);
LABEL_165:
      *__errno_location() = 12;
      result = 0xFFFFFFFFLL;
      break;
    default:
      goto LABEL_131;
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
  if ( &unk_61F428 )
    v1 = (void *)unk_61F428;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_416FE8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_61EE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
