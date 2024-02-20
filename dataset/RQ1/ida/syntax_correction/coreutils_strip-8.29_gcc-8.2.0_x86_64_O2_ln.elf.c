
#include "decompile_idapro.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char *v3; // r15
  char v4; // r14
  const char *v5; // r13
  char v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char *v9; // rax
  char **v10; // rbp
  int v11; // eax
  int v12; // r14d
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rax
  char *v16; // rbx
  char *v18; // rax
  const char *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rdi
  bool v23; // zf
  int v24; // eax
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  char *v27; // rax
  int v28; // eax
  __int64 v29; // rbx
  char *v30; // rax
  __int64 v31; // rbx
  char *v32; // rax
  char *v33; // rax
  const char *v34; // rsi
  __int64 v35; // rbx
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  __int64 v39; // rbp
  char *v40; // rbx
  int *v41; // rax
  char *v42; // rax
  char *v43; // [rsp+8h] [rbp-E0h]
  char **v44; // [rsp+10h] [rbp-D8h]
  _BOOL4 v45; // [rsp+18h] [rbp-D0h]
  struct stat stat_buf; // [rsp+20h] [rbp-C8h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  LODWORD(v7) = a1;
  sub_406260(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40BB40(sub_404960);
  byte_6113E0 = 0;
  byte_6113E1 = 0;
  byte_6113E3 = 0;
  byte_6113E2 = 0;
  byte_6113E6 = 0;
  v43 = 0LL;
  while ( 1 )
  {
    v8 = sub_40A1B0((unsigned int)v7, a2, "bdfinrst:vFLPS:T", &off_40CC00, 0LL);
    if ( v8 == -1 )
      break;
    if ( v8 == 98 )
    {
      v4 = 1;
      if ( filename )
        v3 = filename;
    }
    else if ( v8 <= 98 )
    {
LABEL_14:
      if ( v8 == 76 )
      {
        byte_6113E4 = 1;
      }
      else if ( v8 <= 76 )
      {
        if ( v8 == -130 )
          sub_4032B0(0);
        if ( v8 != 70 )
        {
          if ( v8 == -131 )
          {
            sub_408910(
              (_DWORD)stdout,
              (unsigned int)"ln",
              (unsigned int)&unk_40BCB5,
              (_DWORD)off_6112F8,
              (unsigned int)"Mike Parker",
              (unsigned int)"David MacKenzie",
              0);
            exit(0);
          }
LABEL_22:
          sub_4032B0(1);
        }
LABEL_33:
        byte_6113E0 = 1;
      }
      else
      {
        switch ( v8 )
        {
          case 'S':
            v4 = 1;
            v43 = filename;
            break;
          case 'T':
            v6 = 1;
            break;
          case 'P':
            byte_6113E4 = 0;
            break;
          default:
            goto LABEL_22;
        }
      }
    }
    else if ( v8 == 110 )
    {
      byte_6112F0 = 0;
    }
    else if ( v8 <= 110 )
    {
      switch ( v8 )
      {
        case 'f':
          byte_6113E2 = 1;
          byte_6113E3 = 0;
          break;
        case 'i':
          byte_6113E2 = 0;
          byte_6113E3 = 1;
          break;
        case 'd':
          goto LABEL_33;
        default:
          goto LABEL_22;
      }
    }
    else if ( v8 == 115 )
    {
      byte_6113E6 = 1;
    }
    else if ( v8 <= 115 )
    {
      if ( v8 != 114 )
        goto LABEL_22;
      byte_6113E5 = 1;
    }
    else if ( v8 == 116 )
    {
      if ( v5 )
        goto LABEL_95;
      if ( __xstat(1, filename, &stat_buf) )
        goto LABEL_94;
      v5 = filename;
      if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      {
        v7 = sub_407C30(4LL, filename);
        v9 = dcgettext(0LL, "target %s is not a directory", 5);
        error(1, 0, v9, v7);
        goto LABEL_14;
      }
    }
    else
    {
      if ( v8 != 118 )
        goto LABEL_22;
      byte_6113E1 = 1;
    }
  }
  LODWORD(v7) = v7 - dword_61137C;
  v10 = &a2[dword_61137C];
  if ( (int)v7 <= 0 )
  {
LABEL_87:
    v33 = dcgettext(0LL, "missing file operand", 5);
    error(0, 0, v33);
    goto LABEL_22;
  }
  if ( v6 )
  {
    if ( v5 )
    {
      v37 = dcgettext(0LL, "cannot combine --target-directory and --no-target-directory", 5);
      error(1, 0, v37);
    }
    else
    {
      if ( (_DWORD)v7 == 2 )
        goto LABEL_59;
      if ( (_DWORD)v7 != 1 )
      {
        v34 = "extra operand %s";
        v35 = sub_407C30(4LL, v10[2]);
LABEL_90:
        v36 = dcgettext(0LL, v34, 5);
        error(0, 0, v36, v35);
        goto LABEL_22;
      }
    }
    v34 = "missing destination file operand after %s";
    v35 = sub_407C30(4LL, *v10);
    goto LABEL_90;
  }
  if ( v5 )
    goto LABEL_46;
  v5 = ".";
  if ( (_DWORD)v7 == 1 )
    goto LABEL_46;
  v19 = v10[(int)v7 - 1];
  v44 = &v10[(int)v7 - 1];
  v20 = sub_404CA0(v19);
  v21 = -1LL;
  v22 = (_BYTE *)v20;
  do
  {
    if ( !v21 )
      break;
    v23 = *v22++ == (unsigned __int8)v6;
    --v21;
  }
  while ( !v23 );
  v45 = 1;
  if ( -v21 != 2 )
    v45 = *(_BYTE *)(v20 + -v21 - 2 - 1) == 47;
  if ( byte_6112F0 )
    v24 = __xstat(1, v19, &stat_buf);
  else
    v24 = __lxstat(1, v19, &stat_buf);
  if ( !v24 )
    goto LABEL_79;
  v25 = (unsigned int)*__errno_location();
  if ( !(_DWORD)v25 )
    goto LABEL_79;
  if ( (unsigned int)v25 > 0x28 || (v26 = 0x11000100004LL, !_bittest64(&v26, v25)) )
  {
    v29 = sub_407C30(4LL, v19);
    v30 = dcgettext(0LL, "failed to access %s", 5);
    error(1, v25, v30, v29);
LABEL_85:
    LODWORD(v25) = 0;
    goto LABEL_86;
  }
  if ( v45 )
  {
LABEL_86:
    v31 = sub_407C30(4LL, v19);
    v32 = dcgettext(0LL, "target %s is not a directory", 5);
    error(1, v25, v32, v31);
    goto LABEL_87;
  }
  while ( (_DWORD)v7 != 2 )
  {
    v7 = sub_407C30(4LL, *v44);
    v27 = dcgettext(0LL, "target %s is not a directory", 5);
    error(1, 0, v27, v7);
LABEL_79:
    v28 = stat_buf.st_mode & 0xF000;
    if ( (unsigned __int8)(v28 == 0x4000) < (unsigned __int8)v45 )
      goto LABEL_85;
    if ( v28 == 0x4000 )
    {
      LODWORD(v7) = v7 - 1;
      v5 = v10[(int)v7];
      goto LABEL_46;
    }
  }
LABEL_59:
  LODWORD(v7) = 2;
  v5 = 0LL;
LABEL_46:
  v11 = 0;
  if ( v4 )
  {
    v18 = dcgettext(0LL, "backup type", 5);
    v11 = sub_404280(v18, v3);
  }
  dword_6113E8 = v11;
  sub_403CE0(v43);
  if ( byte_6113E5 && !byte_6113E6 )
  {
    v38 = dcgettext(0LL, "cannot do --relative without --symbolic", 5);
    error(1, 0, v38);
LABEL_94:
    v39 = sub_407C30(4LL, filename);
    v40 = dcgettext(0LL, "failed to access %s", 5);
    v41 = __errno_location();
    error(1, *v41, v40, v39);
LABEL_95:
    v42 = dcgettext(0LL, "multiple target directories specified", 5);
    error(1, 0, v42);
    start();
  }
  if ( v5 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      if ( byte_6113E2 )
      {
        if ( !byte_6113E6 && dword_6113E8 != 3 )
        {
          qword_6113D8 = sub_4057D0(61LL, 0LL, sub_406190, sub_4061D0, sub_406240);
          if ( !qword_6113D8 )
            sub_408CA0();
        }
      }
    }
    v12 = 1;
    v13 = (__int64)&v10[(unsigned int)(v7 - 1) + 1];
    do
    {
      v14 = (__int64)*v10++;
      v15 = sub_404CA0(v14);
      v16 = (char *)sub_404E40(v5, v15, &stat_buf);
      sub_404D30(stat_buf.st_dev);
      v12 &= sub_402A30(*(v10 - 1), v16);
      free(v16);
    }
    while ( v10 != (char **)v13 );
  }
  else
  {
    LOBYTE(v12) = sub_402A30(*v10, v10[1]);
  }
  return (unsigned __int8)v12 ^ 1u;
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

void *sub_40297B()
{
  return &unk_611388;
}

__int64 sub_40299A()
{
  return 0LL;
}

void *sub_4029D1()
{
  void *result; // rax

  if ( !byte_6113C8 )
  {
    while ( qword_6113D0 < (unsigned __int64)(&qword_610E48 - qword_610E40 - 1) )
      ((void (*)(void))qword_610E40[++qword_6113D0])();
    result = sub_40297B();
    byte_6113C8 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_402A28()
{
  return sub_40299A();
}

__int64 __fastcall sub_402A30(char *src, char *a2)
{
  char *v2; // r12
  unsigned int v4; // ebx
  char v5; // r15
  char v6; // r13
  int *v8; // rax
  bool v9; // bl
  void *v10; // r13
  char *v11; // r14
  unsigned __int8 v12; // bl
  const char *v13; // rax
  char *v14; // rdx
  unsigned int v15; // r12d
  __int64 v16; // rax
  const char *v17; // r15
  const char *v18; // rax
  __int64 v20; // r12
  char *v21; // rbp
  int *v22; // rax
  int *v23; // rax
  char *v24; // rdx
  __int64 v25; // rbp
  char *v26; // rax
  __int64 v27; // rax
  const char *v28; // rsi
  __int64 v29; // rbx
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rbx
  char *v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // eax
  char *v38; // rdx
  char *v39; // rdx
  __int64 v40; // rbx
  char *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // r14
  char *v46; // rax
  char *v47; // rdx
  __int64 v48; // r12
  int v49; // ebx
  __int64 v50; // rbp
  char *v51; // rax
  int v52; // esi
  char *v53; // rdx
  int *v54; // [rsp+8h] [rbp-170h]
  void *v55; // [rsp+8h] [rbp-170h]
  int *v56; // [rsp+8h] [rbp-170h]
  void *v57; // [rsp+10h] [rbp-168h]
  void *v58; // [rsp+10h] [rbp-168h]
  void *ptr; // [rsp+18h] [rbp-160h]
  void *ptra; // [rsp+18h] [rbp-160h]
  struct stat stat_buf; // [rsp+20h] [rbp-158h] BYREF
  struct stat v62; // [rsp+B0h] [rbp-C8h] BYREF

  v2 = src;
  v4 = (unsigned __int8)byte_6113E6;
  if ( byte_6113E6 )
    goto LABEL_5;
  if ( byte_6113E4 )
  {
    if ( !__xstat(1, src, &stat_buf) )
      goto LABEL_4;
LABEL_40:
    v20 = sub_407C30(4LL, src);
    v21 = dcgettext(0LL, "failed to access %s", 5);
    v22 = __errno_location();
    error(0, *v22, v21, v20);
    return v4;
  }
  if ( __lxstat(1, src, &stat_buf) )
    goto LABEL_40;
LABEL_4:
  if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
  {
LABEL_5:
    v5 = 0;
    goto LABEL_6;
  }
  v5 = byte_6113E0;
  if ( !byte_6113E0 )
  {
    v28 = "%s: hard link not allowed for directory";
    v29 = sub_407D00(0LL, 3LL, src);
LABEL_56:
    v30 = dcgettext(0LL, v28, 5);
    v31 = v29;
    v4 = 0;
    error(0, 0, v30, v31);
    return v4;
  }
LABEL_6:
  v6 = byte_6113E2;
  if ( !byte_6113E2 && !byte_6113E3 && !dword_6113E8 )
  {
LABEL_10:
    v9 = 0;
    v10 = 0LL;
    goto LABEL_11;
  }
  if ( __lxstat(1, a2, &v62) )
  {
    v8 = __errno_location();
    if ( *v8 != 2 )
    {
      v56 = v8;
      v40 = sub_407C30(4LL, a2);
      v41 = dcgettext(0LL, "failed to access %s", 5);
      v42 = v40;
      v4 = 0;
      error(0, *v56, v41, v42);
      return v4;
    }
    goto LABEL_10;
  }
  if ( qword_6113D8 )
  {
    if ( (unsigned __int8)sub_404E00(qword_6113D8, a2, &v62) )
    {
      v48 = sub_407B50(1LL, 4LL, src);
      v33 = sub_407B50(0LL, 4LL, a2);
      v34 = dcgettext(0LL, "will not overwrite just-created %s with %s", 5);
      v35 = v48;
      goto LABEL_64;
    }
    v6 = byte_6113E2;
  }
  if ( v6 )
  {
    if ( dword_6113E8 )
    {
      if ( byte_6113E6 )
        goto LABEL_32;
    }
    else if ( byte_6113E6 && __xstat(1, src, &stat_buf) )
    {
      goto LABEL_32;
    }
    goto LABEL_59;
  }
  if ( !byte_6113E6 && dword_6113E8 )
  {
LABEL_59:
    if ( stat_buf.st_ino != v62.st_ino
      || stat_buf.st_dev != v62.st_dev
      || stat_buf.st_nlink != 1 && !(unsigned __int8)sub_4080F0(src, a2) )
    {
      goto LABEL_32;
    }
    v32 = sub_407B50(1LL, 4LL, a2);
    v33 = sub_407B50(0LL, 4LL, src);
    v34 = dcgettext(0LL, "%s and %s are the same file", 5);
    v35 = v32;
LABEL_64:
    v36 = v33;
    v4 = 0;
    error(0, 0, v34, v36, v35);
    return v4;
  }
LABEL_32:
  if ( (v62.st_mode & 0xF000) == 0x4000 )
  {
    v28 = "%s: cannot overwrite directory";
    v29 = sub_407D00(0LL, 3LL, a2);
    goto LABEL_56;
  }
  v4 = (unsigned __int8)byte_6113E3;
  if ( byte_6113E3 )
  {
    v43 = sub_407C30(4LL, a2);
    v44 = qword_611410;
    v45 = v43;
    v46 = dcgettext(0LL, "%s: replace %s? ", 5);
    __fprintf_chk(stderr, 1LL, v46, v44, v45);
    if ( !(unsigned __int8)sub_408D10() )
      return v4;
    byte_6113E2 = 1;
  }
  if ( !dword_6113E8 )
    goto LABEL_10;
  v10 = (void *)sub_404240(a2);
  if ( rename(a2, (const char *)v10) )
  {
    v49 = *__errno_location();
    free(v10);
    if ( v49 != 2 )
    {
      v50 = sub_407C30(4LL, a2);
      v51 = dcgettext(0LL, "cannot backup %s", 5);
      v52 = v49;
      v4 = 0;
      error(0, v52, v51, v50);
      return v4;
    }
    goto LABEL_10;
  }
  v9 = v10 != 0LL;
LABEL_11:
  v11 = 0LL;
  if ( !byte_6113E5 )
    goto LABEL_12;
  ptra = (void *)sub_404BC0(a2);
  v55 = (void *)sub_4042D0(ptra);
  v27 = sub_4042D0(src);
  v58 = (void *)v27;
  if ( !v55 || !v27 )
    goto LABEL_71;
  v11 = (char *)sub_408A50(4096LL, 2LL);
  if ( !(unsigned __int8)sub_403A10(v58, v55, v11, 4096LL) )
  {
    free(v11);
LABEL_71:
    free(ptra);
    free(v55);
    free(v58);
    goto LABEL_72;
  }
  free(ptra);
  free(v55);
  free(v58);
  if ( v11 )
  {
    v2 = v11;
    goto LABEL_12;
  }
LABEL_72:
  v2 = (char *)sub_408C80(src);
  v11 = v2;
LABEL_12:
  v12 = byte_6113E2 | v9;
  if ( byte_6113E6 )
    v4 = (int)sub_403890(v2, 4294967196LL, a2, v12) >= 0;
  else
    v4 = (int)sub_403750(4294967196LL, v2, 4294967196LL, a2, (unsigned __int8)(byte_6113E4 != 0) << 10, v12) >= 0;
  if ( !(_BYTE)v4 )
  {
    v57 = (void *)sub_407B50(1LL, 4LL, v2);
    ptr = (void *)sub_407B50(0LL, 4LL, a2);
    v23 = __errno_location();
    v54 = v23;
    if ( byte_6113E6 )
    {
      if ( *v23 != 36 && *v2 )
      {
        v53 = dcgettext(0LL, "failed to create symbolic link %s", 5);
        error(0, *v54, v53, ptr, v57);
      }
      else
      {
        v24 = dcgettext(0LL, "failed to create symbolic link %s -> %s", 5);
        error(0, *v54, v24, ptr, v57);
      }
    }
    else
    {
      v37 = *v23;
      if ( *v54 == 31 )
      {
        if ( !v5 )
        {
          v47 = dcgettext(0LL, "failed to create hard link to %.0s%s", 5);
          error(0, *v54, v47, ptr, v57);
          goto LABEL_45;
        }
      }
      else if ( v37 == 122 || v37 == 17 || (v37 & 0xFFFFFFFD) == 28 )
      {
        v39 = dcgettext(0LL, "failed to create hard link %s", 5);
        error(0, *v54, v39, ptr, v57);
        goto LABEL_45;
      }
      v38 = dcgettext(0LL, "failed to create hard link %s => %s", 5);
      error(0, *v54, v38, ptr, v57);
    }
LABEL_45:
    if ( v10 && rename((const char *)v10, a2) )
    {
      v25 = sub_407C30(4LL, a2);
      v26 = dcgettext(0LL, "cannot un-backup %s", 5);
      error(0, *v54, v26, v25);
    }
    goto LABEL_23;
  }
  if ( !byte_6113E6 )
    sub_404D70(qword_6113D8, a2, &stat_buf);
  if ( byte_6113E1 )
  {
    if ( v10 )
    {
      v13 = (const char *)sub_407C30(4LL, v10);
      __printf_chk(1LL, "%s ~ ", v13);
    }
    v14 = v2;
    v15 = 61;
    v16 = sub_407B50(1LL, 4LL, v14);
    if ( byte_6113E6 )
      v15 = 45;
    v17 = (const char *)v16;
    v18 = (const char *)sub_407B50(0LL, 4LL, a2);
    __printf_chk(1LL, "%s %c> %s\n", v18, v15, v17);
  }
LABEL_23:
  free(v10);
  free(v11);
  return v4;
}

void __fastcall __noreturn sub_4032B0(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  __int64 v3; // r8
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
  char *v23; // rax
  __int64 *v24; // rax
  char *v25; // rbp
  char *v26; // rax
  char *v27; // rax
  const char *v28; // r12
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  __int64 v35[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_611410;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1, v3);
    goto LABEL_3;
  }
  v4 = dcgettext(
         0LL,
         "Usage: %s [OPTION]... [-T] TARGET LINK_NAME   (1st form)\n"
         "  or:  %s [OPTION]... TARGET                  (2nd form)\n"
         "  or:  %s [OPTION]... TARGET... DIRECTORY     (3rd form)\n"
         "  or:  %s [OPTION]... -t DIRECTORY TARGET...  (4th form)\n",
         5);
  __printf_chk(1LL, v4, v1, v1, v1, v1);
  v5 = stdout;
  v6 = dcgettext(
         0LL,
         "In the 1st form, create a link to TARGET with the name LINK_NAME.\n"
         "In the 2nd form, create a link to TARGET in the current directory.\n"
         "In the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\n"
         "Create hard links by default, symbolic links with --symbolic.\n"
         "By default, each destination (name of new link) should not already exist.\n"
         "When creating hard links, each TARGET must exist.  Symbolic links\n"
         "can hold arbitrary text; if later resolved, a relative link is\n"
         "interpreted in relation to its parent directory.\n",
         5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "      --backup[=CONTROL]      make a backup of each existing destination file\n"
          "  -b                          like --backup but does not accept an argument\n"
          "  -d, -F, --directory         allow the superuser to attempt to hard link\n"
          "                                directories (note: will probably fail due to\n"
          "                                system restrictions, even for the superuser)\n"
          "  -f, --force                 remove existing destination files\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "  -i, --interactive           prompt whether to remove destinations\n"
          "  -L, --logical               dereference TARGETs that are symbolic links\n"
          "  -n, --no-dereference        treat LINK_NAME as a normal file if\n"
          "                                it is a symbolic link to a directory\n"
          "  -P, --physical              make hard links directly to symbolic links\n"
          "  -r, --relative              create symbolic links relative to link location\n"
          "  -s, --symbolic              make symbolic links instead of hard links\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "  -S, --suffix=SUFFIX         override the usual backup suffix\n"
          "  -t, --target-directory=DIRECTORY  specify the DIRECTORY in which to create\n"
          "                                the links\n"
          "  -T, --no-target-directory   treat LINK_NAME as a normal file always\n"
          "  -v, --verbose               print name of each linked file\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "\n"
          "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
          "The version control method may be selected via the --backup option or through\n"
          "the VERSION_CONTROL environment variable.  Here are the values:\n"
          "\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "  none, off       never make backups (even if --backup is given)\n"
          "  numbered, t     make numbered backups\n"
          "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
          "  simple, never   always make simple backups\n",
          5);
  fputs_unlocked(v22, v21);
  v23 = dcgettext(
          0LL,
          "\n"
          "Using -s ignores -L and -P.  Otherwise, the last option specified controls\n"
          "behavior when a TARGET is a symbolic link, defaulting to %s.\n",
          5);
  __printf_chk(1LL, v23, "-P");
  v35[0] = (__int64)"[";
  v24 = v35;
  v35[1] = (__int64)"test invocation";
  v35[2] = (__int64)"coreutils";
  v35[3] = (__int64)"Multi-call invocation";
  v35[4] = (__int64)"sha224sum";
  v35[5] = (__int64)"sha2 utilities";
  v35[6] = (__int64)"sha256sum";
  v35[7] = (__int64)"sha2 utilities";
  v35[8] = (__int64)"sha384sum";
  v35[9] = (__int64)"sha2 utilities";
  v35[10] = (__int64)"sha512sum";
  v35[11] = (__int64)"sha2 utilities";
  v35[12] = 0LL;
  v35[13] = 0LL;
  do
    v24 += 2;
  while ( *v24 && strcmp("ln", (const char *)*v24) );
  v25 = (char *)v24[1];
  if ( v25 )
  {
    v26 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v26, &unk_40BCB5, "https://www.gnu.org/software/coreutils/");
    v27 = setlocale(5, 0LL);
    if ( !v27 || !strncmp(v27, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v31 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v31, &unk_40BCB5, "https://www.gnu.org/software/coreutils/");
    v32 = setlocale(5, 0LL);
    if ( !v32 || !strncmp(v32, "en_", 3uLL) )
    {
      v25 = "ln";
      v33 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v28 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v33, "https://www.gnu.org/software/coreutils/", "ln");
LABEL_12:
      v30 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v30, v25, v28);
LABEL_3:
      exit(status);
    }
    v25 = "ln";
  }
  v34 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v34, "ln");
LABEL_10:
  v28 = "Multi-call invocation" + 10;
  v29 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v29, "https://www.gnu.org/software/coreutils/", "ln");
  if ( v25 != "ln" )
    v28 = "";
  goto LABEL_12;
}

int __fastcall sub_4036A0(char *to, __int64 a2)
{
  return linkat(*(_DWORD *)a2, *(const char **)(a2 + 8), *(_DWORD *)(a2 + 16), to, *(_DWORD *)(a2 + 20));
}

void *__fastcall sub_4036C0(void *src, void *dest)
{
  __int64 v3; // rax
  size_t v4; // rbp

  v3 = sub_404CA0(src) - (_QWORD)src;
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

int __fastcall sub_403730(char *to, __int64 a2)
{
  return symlinkat(*(const char **)a2, *(_DWORD *)(a2 + 8), to);
}

__int64 __fastcall sub_403750(int a1, const char *a2, int a3, char *a4, int a5, char a6)
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
        v12 = (char *)sub_4036C0(a4, dest);
        v13 = v12;
        if ( v12 )
        {
          v14 = sub_4082D0(v12);
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

__int64 __fastcall sub_403890(const char *a1, int a2, char *a3, char a4)
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
        v10 = (char *)sub_4036C0(a3, dest);
        v11 = v10;
        if ( !v10 )
          return (unsigned int)-1;
        if ( (unsigned int)sub_4082D0(v10) )
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

__int64 __fastcall sub_403990(const char *src, void **a2, size_t *a3)
{
  void *v3; // r13
  size_t v5; // rbx
  __int64 result; // rax

  v3 = *a2;
  if ( *a2 )
  {
    v5 = strlen(src);
    result = 1LL;
    if ( *a3 > v5 )
    {
      memcpy(v3, src, v5 + 1);
      *a2 = (char *)*a2 + v5;
      result = 0LL;
      *a3 -= v5;
    }
  }
  else
  {
    fputs_unlocked(src, stdout);
    return 0LL;
  }
  return result;
}

char __fastcall sub_403A10(_BYTE *a1, char *a2, void *a3, size_t a4)
{
  char v4; // r8
  char v5; // r9
  char result; // al
  char v7; // r10
  __int64 v8; // rcx
  int v9; // edx
  char v10; // r11
  char *v11; // rbp
  char v12; // al
  const char *v13; // rbx
  int v14; // r12d
  char i; // al
  int v16; // ebp
  char *v17; // rax
  size_t v18; // [rsp+0h] [rbp-28h] BYREF
  void *v19[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = a2[1];
  v5 = a1[1];
  v18 = a4;
  v19[0] = a3;
  result = 0;
  if ( (v4 == 47) == (v5 == 47) )
  {
    v7 = *a2;
    if ( *a2 )
    {
      result = *a1 == 0 || v7 != *a1;
      if ( result )
      {
        return 0;
      }
      else
      {
        v8 = 2LL;
        v9 = 0;
        while ( 1 )
        {
          if ( v7 == 47 )
            v9 = v8 - 1;
          if ( !v4 )
            break;
          if ( v4 != v5 || !v5 )
          {
            if ( v4 == 47 && !v5 )
              goto LABEL_33;
            goto LABEL_13;
          }
          v10 = a2[v8];
          v5 = a1[v8];
          v7 = v4;
          ++v8;
          v4 = v10;
        }
        if ( v5 == 47 || !v5 )
        {
LABEL_33:
          v9 = v8 - 1;
          goto LABEL_14;
        }
LABEL_13:
        if ( !v9 )
          return result;
LABEL_14:
        v11 = &a2[v9];
        v12 = *v11;
        if ( *v11 == 47 )
          v12 = *++v11;
        v13 = &a1[v9 + (a1[v9] == 47)];
        if ( v12 )
        {
          v14 = sub_403990("..", v19, &v18);
          for ( i = *v11; *v11; i = *v11 )
          {
            if ( i == 47 )
              v14 |= sub_403990("/..", v19, &v18);
            ++v11;
          }
          if ( *v13 )
          {
            v16 = sub_403990("/", v19, &v18);
            v14 |= sub_403990(v13, v19, &v18) | v16;
          }
        }
        else
        {
          if ( !*v13 )
            v13 = ".";
          LOBYTE(v14) = sub_403990(v13, v19, &v18);
        }
        if ( (_BYTE)v14 )
        {
          v17 = dcgettext(0LL, "generating relative path", 5);
          error(0, 36, "%s", v17);
        }
        return v14 ^ 1;
      }
    }
  }
  return result;
}

char *__fastcall sub_403C10(char *path, __int64 a2)
{
  char *v3; // rbp
  char *result; // rax
  __int16 v5; // r14
  char *v6; // r12
  int *v7; // rax
  int *v8; // r15
  unsigned __int64 v9; // rdx
  char *v10; // rsi

  v3 = (char *)sub_404CA0(path);
  result = (char *)sub_404D00(v3);
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

void __fastcall sub_403CE0(char *a1)
{
  char *v1; // rbx

  v1 = a1;
  if ( (a1 || (v1 = getenv("SIMPLE_BACKUP_SUFFIX")) != 0LL) && *v1 && (char *)sub_404CA0(v1) == v1 )
    src = v1;
  else
    src = "~";
}

char *__fastcall sub_403D40(_BYTE *a1, int a2, char a3)
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

  v3 = (const char *)sub_404CA0(a1);
  v4 = strlen(v3);
  v5 = v3 - a1;
  v6 = src;
  v43 = v5 + v4;
  if ( !src )
  {
    sub_403CE0(src);
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
      v15 = sub_404D00(&v12[v5]);
      if ( v13 )
        break;
      v40 = *(_WORD *)v14;
      *(_WORD *)v14 = 46;
      v48 = v40;
      v13 = (DIR *)sub_404B20(v12);
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
          sub_403C10(v12, v43);
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
      if ( !(unsigned int)sub_407EA0(-100, a1, v34, v33) )
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

__int64 __fastcall sub_404210(__int64 a1, __int64 a2)
{
  return (unsigned int)dword_40CEA0[sub_40A670(a1, a2, off_40CEC0, dword_40CEA0, 4LL, off_611380)];
}

char *__fastcall sub_404240(_BYTE *a1, int a2)
{
  char *result; // rax

  result = sub_403D40(a1, a2, 0);
  if ( !result )
    sub_408CA0();
  return result;
}

__int64 __fastcall sub_404280(void *a1, char *a2)
{
  char *v2; // rax

  if ( !a2 || !*a2 )
  {
    v2 = getenv("VERSION_CONTROL");
    if ( !v2 || !*v2 )
      return 2LL;
    a2 = v2;
    a1 = &unk_40CE42;
  }
  return sub_404210((__int64)a1, (__int64)a2);
}

_BYTE *__fastcall sub_4042D0(_BYTE *src, __int64 a2)
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
  __off_t st_size; // rsi
  const char *v27; // rax
  char *v28; // r15
  const char *v29; // rdi
  size_t v30; // r13
  size_t v31; // rax
  size_t v32; // rdx
  unsigned __int64 v33; // r8
  int *v34; // rax
  int v35; // ecx
  int *v36; // rdx
  int *v37; // rdx
  int v38; // ecx
  _BYTE *v39; // rdx
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
  int v61; // [rsp+38h] [rbp-D0h]
  int v62; // [rsp+3Ch] [rbp-CCh]
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
    v4 = (_BYTE *)sub_408A50(4096LL, a2);
    v8 = v4 + 4096;
    v7 = v4 + 1;
    *v4 = 47;
  }
  else
  {
    v3 = (const char *)sub_408CE0();
    v4 = v3;
    if ( !v3 )
      return v4;
    v5 = strlen(v3);
    v6 = v5;
    if ( v5 <= 0xFFF )
    {
      v4 = (_BYTE *)sub_408AB0(v4, 4096LL);
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
  v61 = a2 & 4;
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
        v39 = v7 - 1;
        if ( v4 >= v7 - 1 || *(v7 - 2) == 47 )
        {
          --v7;
        }
        else
        {
          v7 -= 2;
          if ( v4 != v39 - 1 )
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
        v18 = sub_408AB0(v4, v17);
        v13 = v12 - v2;
        v4 = (_BYTE *)v18;
        v8 = (_BYTE *)(v18 + v17);
        v7 = (_BYTE *)(v18 + v15);
      }
      v45 = v13;
      memcpy(v7, v2, v13);
      v7 += v45;
      *v7 = 0;
      if ( v52 == 2 && v61 )
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
          v37 = v49;
          v38 = v55;
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
        if ( v61 )
          v19 = __xstat(1, v4, &stat_buf) != 0;
        else
          v19 = __lxstat(1, v4, &stat_buf) != 0;
        if ( v19 )
        {
          v20 = __errno_location();
          v21 = *v20;
          if ( !v52 )
            goto LABEL_79;
          if ( v52 != 1 )
            goto LABEL_29;
          v62 = *v20;
          v46 = v20;
          v22 = strspn(i + 1, "/");
          v20 = v46;
          v21 = v62;
          if ( v12[v22] || v62 != 2 )
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
            v56 = (void *)sub_4057D0(7LL, 0LL, sub_406190, sub_406200, sub_406240);
            if ( !v56 )
              sub_408CA0();
          }
          if ( (unsigned __int8)sub_404E00(v56, v57, &stat_buf) )
          {
            if ( v52 != 2 )
            {
              v34 = __errno_location();
              v35 = 40;
              v36 = v34;
LABEL_67:
              v53 = v35;
              v47 = v36;
              free(ptr);
              free(v4);
              v37 = v47;
              v38 = v53;
LABEL_68:
              v54 = v38;
              v48 = v37;
              sub_405A10(v56);
              v38 = v54;
              v37 = v48;
LABEL_69:
              *v37 = v38;
              return 0LL;
            }
          }
          else
          {
            sub_404D70(v56, v57, &stat_buf);
            st_size = stat_buf.st_size;
            v27 = (const char *)sub_40A2B0(v4);
            v28 = (char *)v27;
            if ( v27 )
            {
              v29 = i + 1;
              v30 = strlen(v27);
              v31 = strlen(v29);
              v32 = v31;
              v33 = v30 + v31 + 1;
              if ( v60 )
              {
                if ( v33 > v60 )
                {
                  v51 = v30 + v31 + 1;
                  v58 = v31;
                  v43 = sub_408AB0(ptr, v51);
                  v32 = v58;
                  ptr = (char *)v43;
                  v60 = v51;
                }
              }
              else
              {
                v50 = v31;
                v41 = 4096LL;
                if ( v33 >= 0x1000 )
                  v41 = v33;
                v60 = v41;
                v42 = sub_408A50(v41, st_size);
                v32 = v50;
                ptr = (char *)v42;
              }
              memmove(&ptr[v30], v12, v32 + 1);
              v12 = memcpy(ptr, v28, v30);
              v57 = v12;
              if ( *v28 == 47 )
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
              free(v28);
              goto LABEL_32;
            }
            v36 = __errno_location();
            v35 = *v36;
            if ( v52 != 2 || v35 == 12 )
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
    v4 = (_BYTE *)sub_408AB0(v4, v7 - v4 + 1);
  free(ptr);
  if ( v56 )
    sub_405A10(v56);
  return v4;
}

__int64 sub_404960()
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
  if ( sub_408F00(stdin) )
  {
    v10 = sub_408F30(v0, 0LL, 1LL);
    v3 = stdin;
    if ( v10 || (v2 = sub_408EC0(stdin), v3 = stdin, !v2) )
    {
      if ( !(unsigned int)sub_40A730(v3) )
        return sub_404A80();
    }
    else
    {
      sub_40A730(stdin);
    }
LABEL_6:
    v4 = dcgettext(0LL, "error closing file", 5);
    v5 = qword_6113F8;
    v6 = v4;
    v7 = __errno_location();
    v8 = v7;
    if ( v5 )
    {
      v9 = (const char *)sub_407CD0(v5);
      error(0, *v8, "%s: %s", v9, v6);
    }
    else
    {
      error(0, *v7, "%s", v6);
    }
    sub_404A80();
    _exit(status);
  }
  if ( (unsigned int)sub_40A730(v0) )
    goto LABEL_6;
  return sub_404A80();
}

__int64 sub_404A80()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_40A730(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_611400 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_611408 )
      {
        v5 = (const char *)sub_407CD0(qword_611408);
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
  result = sub_40A730(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

DIR *__fastcall sub_404B20(const char *a1)
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
  v8 = sub_408D80(v3, 1030, 3, v4, v5, v6);
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

__int64 __fastcall sub_404BC0(void *a1)
{
  __int64 result; // rax

  result = sub_404C40(a1);
  if ( !result )
    sub_408CA0();
  return result;
}

__int64 __fastcall sub_404BE0(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *a1 == 47;
  v2 = sub_404CA0(a1);
  if ( v2 - (__int64)a1 <= v1 )
    return v2 - (_QWORD)a1;
  v3 = v2 - (_QWORD)a1 - 1;
  if ( *(_BYTE *)(v2 - 1) != 47 )
    return v2 - (_QWORD)a1;
  while ( v1 != v3 && a1[v3 - 1] == 47 )
    --v3;
  return v3;
}

_BYTE *__fastcall sub_404C40(_BYTE *src)
{
  __int64 v1; // rbx
  _BYTE *v2; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // rax

  v1 = sub_404BE0(src);
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

_BYTE *__fastcall sub_404CA0(_BYTE *a1)
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

size_t __fastcall sub_404D00(const char *a1)
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

bool __fastcall sub_404D30(char *a1)
{
  const char *v1; // rbx
  const char *v2; // rbx
  bool v3; // zf

  v1 = sub_404CA0(a1);
  if ( !*v1 )
    v1 = a1;
  v2 = &v1[sub_404D00(v1)];
  v3 = *v2 == 0;
  *v2 = 0;
  return !v3;
}

void __fastcall sub_404D70(__int64 a1, void *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax

  if ( a1 )
  {
    v4 = (_QWORD *)sub_408A50(24LL, a2);
    *v4 = sub_408C80(a2);
    v4[1] = a3[1];
    v4[2] = *a3;
    v5 = sub_405F70(a1, v4);
    if ( !v5 )
      sub_408CA0();
    if ( v4 != (_QWORD *)v5 )
      sub_406240(v4);
  }
}

bool __fastcall sub_404E00(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0;
  v3 = a3[1];
  v5[0] = a2;
  v5[1] = v3;
  v5[2] = *a3;
  return sub_405560(a1, v5) != 0;
}

__int64 __fastcall sub_404E40(void *a1, void *a2)
{
  __int64 result; // rax

  result = sub_404E60(a1, a2);
  if ( !result )
    sub_408CA0();
  return result;
}

void *__fastcall sub_404E60(_BYTE *src, const char *a2, _QWORD *a3)
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
  v4 = sub_404CA0(src);
  v5 = sub_404D00(v4);
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

unsigned __int64 __fastcall sub_404F40(unsigned __int64 a1)
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

unsigned __int64 __fastcall sub_404FE0(__int64 a1, unsigned __int64 a2)
{
  return __ROR8__(a1, 3) % a2;
}

bool __fastcall sub_404FF0(__int64 a1, __int64 a2)
{
  return a1 == a2;
}

__int64 __fastcall sub_405000(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_405000(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_405030(__int64 a1, __int64 a2, __m128i **a3, char a4)
{
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 *v10; // rax
  const __m128i *v12; // rax

  v7 = (__m128i *)sub_405000(a1, a2);
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

__int64 __fastcall sub_405150(float **a1)
{
  float *v1; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == (float *)&unk_40CFA0 )
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
    *a1 = (float *)&unk_40CFA0;
    return 0LL;
  }
  return result;
}

__int64 __fastcall sub_4051D0(__int64 a1, __int64 a2, char a3)
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
              v8 = (_QWORD *)sub_405000(a1, *v6);
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
    v10 = (_QWORD *)sub_405000(a1, v5);
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

__int64 __fastcall sub_405410(__int64 a1, __int64 a2)
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

__int64 __fastcall sub_405560(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = (_QWORD *)sub_405000(a1, a2);
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

__int64 __fastcall sub_405610(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)sub_405000(a1, a2);
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

__int64 __fastcall sub_4056F0(__int64 a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
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

_QWORD *__fastcall sub_4057D0(
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
    v7 = sub_404FE0;
  if ( !a4 )
    v6 = sub_404FF0;
  v9 = (char *)malloc(0x50uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = (float **)(v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_405150(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_404F40(a1);
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
      *((_QWORD *)v9 + 5) = &unk_40CFA0;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_405150(v11) )
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

void __fastcall sub_405960(_QWORD *a1)
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

void __fastcall sub_405A10(_QWORD *ptr)
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

__int64 __fastcall sub_405AF0(__int64 a1, __int64 a2)
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
  v5 = sub_404F40(a2);
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
  v12 = sub_4051D0((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_4051D0(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_4051D0(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_405AF0(__int64 a1, __int64 a2)
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
  v5 = sub_404F40(a2);
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
  v12 = sub_4051D0((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_4051D0(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_4051D0(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_405CF0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_405030(a1, a2, v26, 0);
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
        sub_405150((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_405AF0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_405030(a1, a2, v26, 0) )
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

__int64 __fastcall sub_405CF0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_405030(a1, a2, v26, 0);
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
        sub_405150((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_405AF0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_405030(a1, a2, v26, 0) )
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

__int64 __fastcall sub_405F70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v2 = a2;
  v3 = sub_405CF0(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    return v5;
  return v2;
}

__int64 __fastcall sub_405FB0(__int64 a1, __int64 a2)
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

  v3 = sub_405030(a1, a2, &v24, 1);
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
    sub_405150((float **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_405AF0(a1, v17) )
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

unsigned __int64 __fastcall sub_406190(_QWORD *a1, unsigned __int64 a2)
{
  return (a1[1] ^ (unsigned __int64)sub_40A7F0(*a1)) % a2;
}

__int64 __fastcall sub_4061D0(_QWORD *a1, _QWORD *a2)
{
  if ( a1[1] == a2[1] && a1[2] == a2[2] )
    return sub_4080F0(*a1, *a2);
  else
    return 0LL;
}

bool __fastcall sub_406200(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8) && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
    return strcmp(*(const char **)a1, *(const char **)a2) == 0;
  return result;
}

void __fastcall sub_406240(void **ptr)
{
  free(*ptr);
  free(ptr);
}

char *__fastcall sub_406260(const char *a1)
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
  qword_611410 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_406300(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40A830();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40D031;
      if ( !v5 )
        return (char *)&unk_40D026;
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
    v2 = (char *)&unk_40D02D;
    if ( !v5 )
      return (char *)&unk_40D02A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_406400(
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
                return sub_406400((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_406400((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_40A230((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_406400((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_406300("`", a5);
        v51 = sub_406300("'", a5);
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

unsigned __int64 __fastcall sub_406400(
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
                return sub_406400((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_406400((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_40A230((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_406400((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_406300("`", a5);
        v51 = sub_406300("'", a5);
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

_BYTE *__fastcall sub_407630(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_611370 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408CA0();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_611360 )
    {
      v7 = (__m128i *)sub_408AB0(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_611360);
    }
    else
    {
      ptr = (void *)sub_408AB0(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_611370], 0, 16LL * (a1 + 1 - dword_611370));
    dword_611370 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_406400(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_611420 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408A50(v13, v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406400(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_407630(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_611370 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408CA0();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_611360 )
    {
      v7 = (__m128i *)sub_408AB0(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_611360);
    }
    else
    {
      ptr = (void *)sub_408AB0(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_611370], 0, 16LL * (a1 + 1 - dword_611370));
    dword_611370 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_406400(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_611420 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408A50(v13, v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406400(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_4077D0(__int128 *a1)
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
    v1 = &xmmword_611520;
  result = sub_408C50(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_4078C0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_611520;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_406400(
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

_BYTE *__fastcall sub_407940(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_611520;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_406400(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_408A50(v11 + 1, v11 + 1);
  sub_406400(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_407A40()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_611370 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_611370 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_611420 )
  {
    free(v4);
    *(_QWORD *)&xmmword_611360 = 256LL;
    *((_QWORD *)&xmmword_611360 + 1) = &unk_611420;
  }
  if ( v0 != &xmmword_611360 )
  {
    free(v0);
    ptr = &xmmword_611360;
  }
  dword_611370 = 1;
}

_BYTE *__fastcall sub_407B50(int a1, int a2, __int64 a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407B50(int a1, int a2, __int64 a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407BC0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_407630(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_407BC0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_407630(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_407C30(int a1, __int64 a2)
{
  return sub_407B50(0, a1, a2);
}

_BYTE *__fastcall sub_407C50(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_611550;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_611520);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_611530);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_611540);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_407630(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_407CD0(__int64 a1)
{
  return sub_407C50(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, __int64 a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, __int64 a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407D70(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_611520);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_611530);
  si128 = _mm_load_si128((const __m128i *)&xmmword_611540);
  v8 = qword_611550;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_407630(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_407E60(int a1, __int64 a2)
{
  return sub_407630(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_611320);
}

_BYTE *__fastcall sub_407E80(__int64 a1)
{
  return sub_407630(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_611320);
}

__int64 __fastcall sub_407EA0(unsigned int oldfd, char *old, unsigned int newfd, char *a4, unsigned int a5)
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

__int64 __fastcall sub_4080F0(_BYTE *a1, _BYTE *a2)
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
  v3 = sub_404CA0(a1);
  v4 = sub_404CA0(a2);
  v5 = sub_404D00(v3);
  if ( v5 == sub_404D00(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (char *)sub_404BC0(a1);
    v8 = (char *)sub_404BC0(a2);
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

__int64 __fastcall sub_408220(char *filename)
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

int __fastcall sub_408280(const char *a1)
{
  return mkdir(a1, 0x1C0u);
}

void __noreturn sub_4082B0()
{
  __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147u, "gen_tempname_len");
}

__int64 __fastcall sub_4082D0(char *s, int a2, __int64 a3, __int64 (__fastcall *a4)(char *, __int64), size_t a5)
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
    v10 = (void *)sub_40ADD0(0LL, a5);
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
            *v13++ = byte_40DE00[sub_40AE10(v10, 61LL)];
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
          sub_40AF30(v10);
          *v6 = 17;
          return (unsigned int)-1;
        }
      }
      v14 = -1;
LABEL_12:
      v20 = v14;
      v18 = v15;
      sub_40AF30(v10);
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

__int64 __fastcall sub_408430(char *a1, int a2, int a3, unsigned int a4, size_t a5)
{
  int v6[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v6[0] = a3;
  if ( a4 > 2 )
    sub_4082B0();
  return sub_4082D0(a1, a2, (__int64)v6, (__int64 (__fastcall *)(char *, __int64))*(&off_40DDC0 + a4), a5);
}

__int64 __fastcall sub_408460(char *a1, int a2, int a3, unsigned int a4)
{
  int v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v5[0] = a3;
  if ( a4 > 2 )
    sub_4082B0();
  return sub_4082D0(a1, a2, (__int64)v5, (__int64 (__fastcall *)(char *, __int64))*(&off_40DDC0 + a4), 6uLL);
}

__int64 __fastcall sub_4084A0(char *a1, int a2, __int64 a3, __int64 (__fastcall *a4)(char *, __int64))
{
  return sub_4082D0(a1, a2, a3, a4, 6uLL);
}

__int64 __fastcall sub_4084B0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4084B0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4088B0(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_4084B0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_4084B0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_408910(
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
        return sub_4084B0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_4084B0(a1, a2, a3, a4, v15, i);
}

int sub_4089D0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40BCB5, "https://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_408A50(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_408CA0();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_408AA0(size_t a1)
{
  return sub_408A50(a1);
}

void *__fastcall sub_408AB0(void *a1, size_t a2)
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
        sub_408CA0();
    }
  }
  return result;
}

void *__fastcall sub_408C00(size_t n)
{
  void *v1; // rax

  v1 = sub_408A50(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_408C20(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_408CA0(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_408C50(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_408A50(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_408C80(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_408C50(src, v1 + 1);
}

void __noreturn sub_408CA0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_408CE0()
{
  __int64 v0; // rbx

  v0 = sub_408F90(0LL, 0LL);
  if ( !v0 && *__errno_location() == 12 )
    sub_408CA0();
  return v0;
}

__int64 sub_408D10()
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

__int64 __fastcall sub_408D80(int a1, int a2, __int64 a3, int a4, int a5, int a6)
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
    if ( dword_611558 < 0 )
    {
      v6 = sub_408D80(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_611558 == -1 )
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
        v6 = sub_408D80(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_611558 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_611558 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_408EC0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_408F30(stream, 0LL, 1LL);
  return fflush(stream);
}

__int64 __fastcall sub_408F00(__int64 a1)
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

int __fastcall sub_408F30(FILE *a1, __off_t a2, int a3)
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

char *__fastcall sub_408F90(char *a1, size_t a2)
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

__int64 __fastcall sub_409460(__int64 a1, int *a2)
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

__int64 __fastcall sub_409540(
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

__int64 __fastcall sub_409B60(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_409460((__int64)a2, a7);
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
        sub_409460((__int64)a2, a7);
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
            return (unsigned int)sub_409540(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_409540(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_409540(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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

__int64 __fastcall sub_40A130(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_611560 = dword_61137C;
  dword_611564 = dword_611378;
  result = sub_409B60(a1, a2, a3, a4, a5, a6, &dword_611560, a7);
  dword_61137C = dword_611560;
  filename = (char *)qword_611570;
  dword_611374 = dword_611568;
  return result;
}

__int64 __fastcall sub_40A190(int a1, __int64 *a2, const char *a3)
{
  return sub_40A130(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40A1B0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40A130(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40A1D0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409B60(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40A1F0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40A130(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40A210(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409B60(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40A230(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40A790(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

char *__fastcall sub_40A2B0(char *path, unsigned __int64 a2)
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

void __noreturn sub_40A3A0()
{
  sub_4032B0(1);
}

__int64 __fastcall sub_40A3B0(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_40A4D0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  _BYTE *v4; // rbp
  _BYTE *v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_407E60(1, a1);
  v5 = sub_407B50(0, 8, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_40A550(__int64 *a1, char *a2, size_t a3)
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
      v11 = sub_407E80(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = sub_407E80(i);
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

__int64 __fastcall sub_40A670(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_40A3B0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40A4D0(a1, (__int64)a2, result);
    sub_40A550((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_40A6E0(void *s1, __int64 *a2, char *a3, size_t a4)
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

__int64 __fastcall sub_40A730(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40B9A0(stream);
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

bool __fastcall sub_40A790(int a1)
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

unsigned __int64 __fastcall sub_40A7F0(char *a1, unsigned __int64 a2)
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

const char *sub_40A830()
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
                sub_40B9A0(v60);
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
            sub_40B9A0(v39);
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

_QWORD *__fastcall sub_40ADA0(__int64 a1)
{
  _QWORD *result; // rax

  result = sub_408A50(0x18uLL);
  *result = a1;
  result[2] = 0LL;
  result[1] = 0LL;
  return result;
}

_QWORD *sub_40ADD0()
{
  __int64 v0; // rbx
  _QWORD *result; // rax

  v0 = sub_40AFF0();
  result = 0LL;
  if ( v0 )
  {
    result = sub_408A50(0x18uLL);
    *result = v0;
    result[2] = 0LL;
    result[1] = 0LL;
  }
  return result;
}

unsigned __int64 __fastcall sub_40AE10(__int64 *a1, unsigned __int64 a2)
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
      sub_40B300(v4, v13, v9);
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

void __fastcall sub_40AF10(void *ptr)
{
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
}

__int64 __fastcall sub_40AF30(void **ptr)
{
  unsigned int v1; // r12d
  int *v2; // rax
  int v3; // r13d
  int *v4; // rbp

  v1 = sub_40B460(*ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
  *v4 = v3;
  return v1;
}

void __fastcall __noreturn sub_40AF90(__int64 a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

  if ( a1 )
  {
    v1 = sub_407E80(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

void __fastcall __noreturn sub_40AF90(__int64 a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

  if ( a1 )
  {
    v1 = sub_407E80(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

__m128i *__fastcall sub_40AFF0(__int64 a1, unsigned __int64 a2)
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
    v5 = (__m128i *)sub_408A50(0x1038uLL);
    v5->m128i_i64[0] = 0LL;
    v5->m128i_i64[1] = (__int64)sub_40AF90;
    v5[1].m128i_i64[0] = 0LL;
    return v5;
  }
  if ( !a1 )
  {
    v7 = (__m128i *)sub_408A50(0x1038uLL);
    v7->m128i_i64[0] = 0LL;
    v5 = v7;
    v8 = v7 + 2;
    v7->m128i_i64[1] = (__int64)sub_40AF90;
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
    sub_40B760(v8);
    return v5;
  }
  v2 = (FILE *)sub_40BA20(a1, "rb");
  if ( !v2 )
    return 0LL;
  v3 = (__m128i *)sub_408A50(0x1038uLL);
  v4 = 4096LL;
  v3->m128i_i64[0] = (__int64)v2;
  if ( a2 <= 0x1000 )
    v4 = a2;
  v3->m128i_i64[1] = (__int64)sub_40AF90;
  v5 = v3;
  v3[1].m128i_i64[0] = a1;
  setvbuf(v2, &v3[1].m128i_i8[8], 0, v4);
  return v5;
}

__int64 __fastcall sub_40B300(__int64 a1, char *a2, size_t a3)
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
        sub_40B4B0(v13, v12);
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
          sub_40B4B0(v13, v12);
          goto LABEL_15;
        }
        v15 = a2;
        a2 += 2048;
        result = sub_40B4B0(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_40B460(FILE **ptr)
{
  FILE *v1; // rbp

  v1 = *ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    return sub_40B9A0(v1);
  else
    return 0LL;
}

unsigned __int64 *__fastcall sub_40B4B0(unsigned __int64 *a1, unsigned __int64 *a2)
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

unsigned __int64 __fastcall sub_40B760(__int64 *a1)
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

int __fastcall sub_40B9A0(FILE *stream)
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
  if ( !sub_408EC0(stream) )
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

FILE *__fastcall sub_40BA20(const char *a1, const char *a2)
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
      v6 = sub_40BAC0(v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_40B9A0(v11);
        *v13 = v12;
      }
      else if ( sub_40B9A0(v3) || (v3 = fdopen(v6, a2)) == 0LL )
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

__int64 __fastcall sub_40BAC0(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  return sub_408D80(a1, 0, 3LL, a4, a5, a6);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40BB40(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_6112E8 )
    v1 = (void *)qword_6112E8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40BB58(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_610E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
