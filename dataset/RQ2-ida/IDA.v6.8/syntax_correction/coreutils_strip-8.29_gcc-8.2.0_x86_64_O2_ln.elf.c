#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char *v3; // r15@1
  char v4; // r14@1
  const char *v5; // r13@1
  char v6; // r12@1
  __int64 v7; // rbx@1
  int v8; // eax@2
  __int64 v9; // rax@13
  char *v10; // rax@13
  char **v11; // rbp@44
  int v12; // eax@47
  __int64 v13; // rax@56
  signed int v14; // er14@61
  signed __int64 v15; // r15@61
  char *v16; // rdi@62
  __int64 v17; // rax@62
  char *v18; // rax@62
  char *v19; // rbx@62
  char *v21; // rax@48
  const char *v22; // r13@66
  _BYTE *v23; // rax@66
  signed __int64 v24; // rcx@66
  _BYTE *v25; // rdi@66
  bool v26; // zf@68
  int v27; // eax@72
  unsigned __int64 v28; // r12@74
  signed __int64 v29; // rax@76
  __int64 v30; // rax@79
  char *v31; // rax@79
  int v32; // eax@80
  __int64 v33; // rax@85
  __int64 v34; // rbx@85
  char *v35; // rax@85
  __int64 v36; // rax@87
  __int64 v37; // rbx@87
  char *v38; // rax@87
  char *v39; // rax@88
  __int64 v40; // rax@90
  const char *v41; // rsi@90
  __int64 v42; // rbx@90
  char *v43; // rax@91
  char *v44; // rax@92
  __int64 v45; // rax@93
  char *v46; // rax@94
  __int64 v47; // rax@95
  __int64 v48; // rbp@95
  char *v49; // rbx@95
  int *v50; // rax@95
  char *v51; // rax@96
  char *v52; // [sp+8h] [bp-E0h]@1
  char **v53; // [sp+10h] [bp-D8h]@66
  signed int v54; // [sp+18h] [bp-D0h]@69
  struct stat stat_buf; // [sp+20h] [bp-C8h]@11

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  LODWORD(v7) = a1;
  sub_406260(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40BB40(
    sub_404960,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  byte_6113E0 = 0;
  byte_6113E1 = 0;
  byte_6113E3 = 0;
  byte_6113E2 = 0;
  byte_6113E6 = 0;
  v52 = 0LL;
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
            sub_408910((char)stdout);
            exit(0);
          }
LABEL_22:
          sub_4032B0(1);
        }
LABEL_34:
        byte_6113E0 = 1;
      }
      else if ( v8 == 83 )
      {
        v4 = 1;
        v52 = filename;
      }
      else if ( v8 == 84 )
      {
        v6 = 1;
      }
      else
      {
        if ( v8 != 80 )
          goto LABEL_22;
        byte_6113E4 = 0;
      }
    }
    else if ( v8 == 110 )
    {
      byte_6112F0 = 0;
    }
    else if ( v8 <= 110 )
    {
      if ( v8 == 102 )
      {
        byte_6113E2 = 1;
        byte_6113E3 = 0;
      }
      else
      {
        if ( v8 != 105 )
        {
          if ( v8 != 100 )
            goto LABEL_22;
          goto LABEL_34;
        }
        byte_6113E2 = 0;
        byte_6113E3 = 1;
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
        goto LABEL_96;
      if ( __xstat(1, filename, &stat_buf) )
        goto LABEL_95;
      v5 = filename;
      if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      {
        LODWORD(v9) = sub_407C30(4LL, filename);
        v7 = v9;
        v10 = dcgettext(0LL, "target %s is not a directory", 5);
        error(1, 0, v10, v7);
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
  v11 = &a2[dword_61137C];
  if ( (signed int)v7 <= 0 )
  {
LABEL_88:
    v39 = dcgettext(0LL, "missing file operand", 5);
    error(0, 0, v39);
    goto LABEL_22;
  }
  if ( v6 )
  {
    if ( v5 )
    {
      v44 = dcgettext(0LL, "cannot combine --target-directory and --no-target-directory", 5);
      error(1, 0, v44);
    }
    else
    {
      if ( (_DWORD)v7 == 2 )
        goto LABEL_60;
      if ( (_DWORD)v7 != 1 )
      {
        LODWORD(v40) = sub_407C30(4LL, v11[2]);
        v41 = "extra operand %s";
        v42 = v40;
LABEL_91:
        v43 = dcgettext(0LL, v41, 5);
        error(0, 0, v43, v42);
        goto LABEL_22;
      }
    }
    LODWORD(v45) = sub_407C30(4LL, *v11);
    v41 = "missing destination file operand after %s";
    v42 = v45;
    goto LABEL_91;
  }
  if ( v5 )
    goto LABEL_47;
  v5 = ".";
  if ( (_DWORD)v7 == 1 )
    goto LABEL_47;
  v22 = v11[(signed int)v7 - 1];
  v53 = &v11[(signed int)v7 - 1];
  LODWORD(v23) = sub_404CA0(v22);
  v24 = -1LL;
  v25 = v23;
  do
  {
    if ( !v24 )
      break;
    v26 = *v25++ == v6;
    --v24;
  }
  while ( !v26 );
  v54 = 1;
  if ( ~v24 != 1 )
    v54 = v23[~v24 - 2] == 47;
  if ( byte_6112F0 )
    v27 = __xstat(1, v22, &stat_buf);
  else
    v27 = __lxstat(1, v22, &stat_buf);
  if ( !v27 )
    goto LABEL_80;
  v28 = (unsigned int)*__errno_location();
  if ( !(_DWORD)v28 )
    goto LABEL_80;
  if ( (unsigned int)v28 > 0x28 || (v29 = 1168232153092LL, !_bittest64(&v29, v28)) )
  {
    LODWORD(v33) = sub_407C30(4LL, v22);
    v34 = v33;
    v35 = dcgettext(0LL, "failed to access %s", 5);
    error(1, v28, v35, v34);
LABEL_86:
    LODWORD(v28) = 0;
    goto LABEL_87;
  }
  if ( v54 )
  {
LABEL_87:
    LODWORD(v36) = sub_407C30(4LL, v22);
    v37 = v36;
    v38 = dcgettext(0LL, "target %s is not a directory", 5);
    error(1, v28, v38, v37);
    goto LABEL_88;
  }
  while ( (_DWORD)v7 != 2 )
  {
    LODWORD(v30) = sub_407C30(4LL, *v53);
    v7 = v30;
    v31 = dcgettext(0LL, "target %s is not a directory", 5);
    error(1, 0, v31, v7);
LABEL_80:
    v32 = stat_buf.st_mode & 0xF000;
    if ( (v32 == 0x4000) < (unsigned __int8)(v54 & 1) )
      goto LABEL_86;
    if ( v32 == 0x4000 )
    {
      LODWORD(v7) = v7 - 1;
      v5 = v11[(signed int)v7];
      goto LABEL_47;
    }
  }
LABEL_60:
  LODWORD(v7) = 2;
  v5 = 0LL;
LABEL_47:
  v12 = 0;
  if ( v4 )
  {
    v21 = dcgettext(0LL, "backup type", 5);
    v12 = sub_404280(v21, v3);
  }
  dword_6113E8 = v12;
  sub_403CE0(v52);
  if ( byte_6113E5 && !byte_6113E6 )
  {
    v46 = dcgettext(0LL, "cannot do --relative without --symbolic", 5);
    error(1, 0, v46);
LABEL_95:
    LODWORD(v47) = sub_407C30(4LL, filename);
    v48 = v47;
    v49 = dcgettext(0LL, "failed to access %s", 5);
    v50 = __errno_location();
    error(1, *v50, v49, v48);
LABEL_96:
    v51 = dcgettext(0LL, "multiple target directories specified", 5);
    error(1, 0, v51);
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
          LODWORD(v13) = sub_4057D0(61LL, 0LL, sub_406190, sub_4061D0, sub_406240);
          qword_6113D8 = v13;
          if ( !v13 )
            sub_408CA0();
        }
      }
    }
    v14 = 1;
    v15 = (signed __int64)&v11[(unsigned int)(v7 - 1) + 1];
    do
    {
      v16 = *v11;
      ++v11;
      LODWORD(v17) = sub_404CA0(v16);
      LODWORD(v18) = sub_404E40(v5, v17, &stat_buf);
      v19 = v18;
      sub_404D30(stat_buf.st_dev);
      v14 &= sub_402A30(*(v11 - 1), v19);
      free(v19);
    }
    while ( v11 != (char **)v15 );
  }
  else
  {
    v14 = sub_402A30(*v11, v11[1]);
  }
  return (unsigned __int8)(v14 ^ 1);
}

signed int sub_40297B()
{
  return 6361992;
}

int sub_40299A()
{
  return 0;
}

signed int sub_4029D1()
{
  signed int result; // eax@4

  if ( !byte_6113C8 )
  {
    while ( qword_6113D0 < (unsigned __int64)(((&unk_610E48 - (_UNKNOWN *)&qword_610E40) >> 3) - 1) )
      (*(&qword_610E40 + ++qword_6113D0))();
    result = sub_40297B();
    byte_6113C8 = 1;
  }
  return result;
}

int sub_402A28()
{
  return sub_40299A();
}

__int64 __fastcall sub_402A30(void *src, char *a2)
{
  _BYTE *v2; // r12@1
  char *v3; // rbp@1
  unsigned int v4; // ebx@1
  char v5; // r15@5
  char v6; // r13@6
  void *v7; // rsi@8
  int v8; // er14@8
  int *v9; // rax@9
  bool v10; // bl@11
  char *v11; // r13@11
  void *v12; // r14@12
  unsigned __int8 v13; // bl@13
  __int64 v14; // rax@20
  __int64 v15; // rax@21
  const char *v17; // rax@34
  __int64 v18; // rax@39
  __int64 v19; // r12@39
  char *v20; // rbp@39
  int *v21; // rax@39
  void *v22; // rax@40
  void *v23; // rax@40
  int *v24; // rax@40
  char *v25; // rdx@43
  __int64 v26; // rax@46
  __int64 v27; // rbp@46
  char *v28; // rax@46
  void *v29; // rax@48
  __int64 v30; // rax@48
  __int64 v31; // r14@48
  __int64 v32; // rax@48
  void *v33; // rax@50
  __int64 v34; // rax@57
  const char *v35; // rsi@57
  __int64 v36; // rbx@57
  char *v37; // rax@58
  __int64 v38; // rcx@58
  __int64 v39; // rax@65
  __int64 v40; // rbp@65
  __int64 v41; // rax@65
  __int64 v42; // rbx@65
  char *v43; // rax@65
  __int64 v44; // r8@65
  __int64 v45; // rcx@66
  int v46; // eax@67
  _BYTE *v47; // rax@74
  int *v48; // ST08_8@76
  __int64 v49; // rax@76
  __int64 v50; // rbx@76
  char *v51; // rax@76
  __int64 v52; // rcx@76
  __int64 v53; // rax@77
  __int64 v54; // r13@77
  __int64 v55; // r14@77
  char *v56; // rax@77
  __int64 v57; // rax@83
  __int64 v58; // rax@86
  __int64 v59; // r12@86
  __int64 v60; // rax@86
  int v61; // ebx@87
  __int64 v62; // rax@88
  __int64 v63; // rbp@88
  char *v64; // rax@88
  int v65; // esi@88
  int *v66; // [sp+8h] [bp-170h]@40
  void *v67; // [sp+8h] [bp-170h]@48
  void *v68; // [sp+10h] [bp-168h]@40
  void *v69; // [sp+10h] [bp-168h]@48
  void *ptr; // [sp+18h] [bp-160h]@40
  void *ptra; // [sp+18h] [bp-160h]@48
  struct stat stat_buf; // [sp+20h] [bp-158h]@3
  struct stat v73; // [sp+B0h] [bp-C8h]@8

  v2 = src;
  v3 = a2;
  v4 = (unsigned __int8)byte_6113E6;
  if ( byte_6113E6 )
    goto LABEL_5;
  if ( byte_6113E4 )
  {
    if ( __xstat(1, (const char *)src, &stat_buf) == 0 )
      goto LABEL_4;
LABEL_39:
    LODWORD(v18) = sub_407C30(4LL, src);
    v19 = v18;
    v20 = dcgettext(0LL, "failed to access %s", 5);
    v21 = __errno_location();
    error(0, *v21, v20, v19);
    return v4;
  }
  if ( __lxstat(1, (const char *)src, &stat_buf) != 0 )
    goto LABEL_39;
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
    LODWORD(v34) = sub_407D00(0LL, 3LL, src);
    v35 = "%s: hard link not allowed for directory";
    v36 = v34;
LABEL_58:
    v37 = dcgettext(0LL, v35, 5);
    v38 = v36;
    v4 = 0;
    error(0, 0, v37, v38);
    return v4;
  }
LABEL_6:
  v6 = byte_6113E2;
  if ( !byte_6113E2 && !byte_6113E3 )
  {
    v7 = (void *)(unsigned int)dword_6113E8;
    if ( !dword_6113E8 )
    {
LABEL_11:
      v10 = 0;
      v11 = 0LL;
      goto LABEL_12;
    }
  }
  v7 = v3;
  v8 = __lxstat(1, v3, &v73);
  if ( !v8 )
  {
    if ( qword_6113D8 )
    {
      if ( (unsigned __int8)sub_404E00(qword_6113D8, v3, &v73) )
      {
        LODWORD(v58) = sub_407B50(1LL, 4LL, src);
        v59 = v58;
        LODWORD(v60) = sub_407B50(0LL, 4LL, v3);
        v42 = v60;
        v43 = dcgettext(0LL, "will not overwrite just-created %s with %s", 5);
        v44 = v59;
        goto LABEL_66;
      }
      v6 = byte_6113E2;
    }
    if ( v6 )
    {
      if ( dword_6113E8 )
      {
        if ( byte_6113E6 )
          goto LABEL_31;
      }
      else if ( byte_6113E6 && __xstat(1, (const char *)src, &stat_buf) )
      {
        goto LABEL_31;
      }
    }
    else if ( byte_6113E6 || !dword_6113E8 )
    {
      goto LABEL_31;
    }
    if ( stat_buf.st_ino != v73.st_ino
      || stat_buf.st_dev != v73.st_dev
      || stat_buf.st_nlink != 1 && !(unsigned __int8)sub_4080F0(src, v3) )
    {
      goto LABEL_31;
    }
    LODWORD(v39) = sub_407B50(1LL, 4LL, v3);
    v40 = v39;
    LODWORD(v41) = sub_407B50(0LL, 4LL, src);
    v42 = v41;
    v43 = dcgettext(0LL, "%s and %s are the same file", 5);
    v44 = v40;
LABEL_66:
    v45 = v42;
    v4 = 0;
    error(0, 0, v43, v45, v44);
    return v4;
  }
  v9 = __errno_location();
  if ( *v9 != 2 )
  {
    v48 = v9;
    LODWORD(v49) = sub_407C30(4LL, v3);
    v50 = v49;
    v51 = dcgettext(0LL, "failed to access %s", 5);
    v52 = v50;
    v4 = 0;
    error(0, *v48, v51, v52);
    return v4;
  }
  if ( v6 || !(_BYTE)v4 && dword_6113E8 || v8 )
    goto LABEL_11;
LABEL_31:
  if ( (v73.st_mode & 0xF000) == 0x4000 )
  {
    LODWORD(v57) = sub_407D00(0LL, 3LL, v3);
    v35 = "%s: cannot overwrite directory";
    v36 = v57;
    goto LABEL_58;
  }
  v4 = (unsigned __int8)byte_6113E3;
  if ( byte_6113E3 )
  {
    LODWORD(v53) = sub_407C30(4LL, v3);
    v54 = qword_611410;
    v55 = v53;
    v56 = dcgettext(0LL, "%s: replace %s? ", 5);
    __fprintf_chk(stderr, 1LL, v56, v54, v55);
    if ( !(unsigned __int8)sub_408D10() )
      return v4;
    byte_6113E2 = 1;
  }
  v7 = (void *)(unsigned int)dword_6113E8;
  if ( !dword_6113E8 )
    goto LABEL_11;
  LODWORD(v17) = sub_404240(v3);
  v7 = (void *)v17;
  v11 = (char *)v17;
  if ( rename(v3, v17) )
  {
    v61 = *__errno_location();
    free(v11);
    if ( v61 != 2 )
    {
      LODWORD(v62) = sub_407C30(4LL, v3);
      v63 = v62;
      v64 = dcgettext(0LL, "cannot backup %s", 5);
      v65 = v61;
      v4 = 0;
      error(0, v65, v64, v63);
      return v4;
    }
    goto LABEL_11;
  }
  v10 = v11 != 0LL;
LABEL_12:
  v12 = 0LL;
  if ( !byte_6113E5 )
    goto LABEL_13;
  LODWORD(v29) = sub_404BC0(v3, v7);
  ptra = v29;
  v30 = sub_4042D0(v29);
  v31 = v30;
  v67 = (void *)v30;
  v32 = sub_4042D0(src);
  v69 = (void *)v32;
  if ( !v31 || !v32 )
    goto LABEL_73;
  LODWORD(v33) = sub_408A50(4096LL, 2LL);
  v12 = v33;
  if ( !(unsigned __int8)sub_403A10(v69, v67, v33, 4096LL) )
  {
    free(v12);
LABEL_73:
    free(ptra);
    free(v67);
    free(v69);
    goto LABEL_74;
  }
  free(ptra);
  free(v67);
  free(v69);
  if ( v12 )
  {
    v2 = v12;
    goto LABEL_13;
  }
LABEL_74:
  LODWORD(v47) = sub_408C80(src);
  v2 = v47;
  v12 = v47;
LABEL_13:
  v13 = byte_6113E2 | v10;
  if ( byte_6113E6 )
    v4 = (unsigned int)~sub_403890(v2, 4294967196LL, v3, v13) >> 31;
  else
    v4 = (unsigned int)~sub_403750(4294967196LL, v2, 4294967196LL, v3, (unsigned int)(byte_6113E4 != 0) << 10, v13) >> 31;
  if ( !(_BYTE)v4 )
  {
    LODWORD(v22) = sub_407B50(1LL, 4LL, v2);
    v68 = v22;
    LODWORD(v23) = sub_407B50(0LL, 4LL, v3);
    ptr = v23;
    v24 = __errno_location();
    v66 = v24;
    if ( byte_6113E6 )
    {
      if ( *v24 != 36 && *v2 )
        v25 = dcgettext(0LL, "failed to create symbolic link %s", 5);
      else
        v25 = dcgettext(0LL, "failed to create symbolic link %s -> %s", 5);
    }
    else
    {
      v46 = *v24;
      if ( *v66 == 31 )
      {
        if ( !v5 )
        {
          v25 = dcgettext(0LL, "failed to create hard link to %s%s", 5);
          goto LABEL_44;
        }
      }
      else if ( v46 == 122 || v46 == 17 || (v46 & 0xFFFFFFFD) == 28 )
      {
        v25 = dcgettext(0LL, "failed to create hard link %s", 5);
        goto LABEL_44;
      }
      v25 = dcgettext(0LL, "failed to create hard link %s => %s", 5);
    }
LABEL_44:
    error(0, *v66, v25, ptr, v68);
    if ( v11 && rename(v11, v3) )
    {
      LODWORD(v26) = sub_407C30(4LL, v3);
      v27 = v26;
      v28 = dcgettext(0LL, "cannot un-backup %s", 5);
      error(0, *v66, v28, v27);
    }
    goto LABEL_22;
  }
  if ( !byte_6113E6 )
    sub_404D70(qword_6113D8, v3, &stat_buf);
  if ( byte_6113E1 )
  {
    if ( v11 )
    {
      LODWORD(v14) = sub_407C30(4LL, v11);
      __printf_chk(1LL, "%s ~ ", v14);
    }
    sub_407B50(1LL, 4LL, v2);
    LODWORD(v15) = sub_407B50(0LL, 4LL, v3);
    __printf_chk(1LL, "%s %c> %s\n", v15);
  }
LABEL_22:
  free(v11);
  free(v12);
  return v4;
}

noreturn void __fastcall  sub_4032B0(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  __int64 v4; // r8@2
  char *v5; // rax@4
  FILE *v6; // rbp@4
  char *v7; // rax@4
  FILE *v8; // rbp@4
  char *v9; // rax@4
  FILE *v10; // rbp@4
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
  FILE *v22; // rbp@4
  char *v23; // rax@4
  char *v24; // rax@4
  __int64 *v25; // rax@4
  _BYTE *v26; // rdi@5
  bool v27; // cf@5
  bool v28; // zf@5
  const char *v29; // rsi@6
  signed __int64 v30; // rcx@6
  const char *v31; // rbp@10
  char *v32; // rax@11
  char *v33; // rax@11
  char *v34; // rax@13
  char *v35; // rax@14
  char *v36; // rax@15
  char *v37; // rax@15
  char *v38; // rax@17
  char *v39; // rax@19
  const char *v40; // [sp+0h] [bp-88h]@4
  const char *v41; // [sp+8h] [bp-80h]@4
  const char *v42; // [sp+10h] [bp-78h]@4
  const char *v43; // [sp+18h] [bp-70h]@4
  const char *v44; // [sp+20h] [bp-68h]@4
  const char *v45; // [sp+28h] [bp-60h]@4
  const char *v46; // [sp+30h] [bp-58h]@4
  const char *v47; // [sp+38h] [bp-50h]@4
  const char *v48; // [sp+40h] [bp-48h]@4
  const char *v49; // [sp+48h] [bp-40h]@4
  const char *v50; // [sp+50h] [bp-38h]@4
  const char *v51; // [sp+58h] [bp-30h]@4
  __int64 v52; // [sp+60h] [bp-28h]@4
  __int64 v53; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_611410;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2, v4);
    goto LABEL_3;
  }
  v5 = dcgettext(
         0LL,
         "Usage: %s [OPTION]... [-T] TARGET LINK_NAME   (1st form)\n"
         "  or:  %s [OPTION]... TARGET                  (2nd form)\n"
         "  or:  %s [OPTION]... TARGET... DIRECTORY     (3rd form)\n"
         "  or:  %s [OPTION]... -t DIRECTORY TARGET...  (4th form)\n",
         5);
  __printf_chk(1LL, v5, v2);
  v6 = stdout;
  v7 = dcgettext(
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
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "      --backup[=CONTROL]      make a backup of each existing destination file\n"
          "  -b                          like --backup but does not accept an argument\n"
          "  -d, -F, --directory         allow the superuser to attempt to hard link\n"
          "                                directories (note: will probably fail due to\n"
          "                                system restrictions, even for the superuser)\n"
          "  -f, --force                 remove existing destination files\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  -i, --interactive           prompt whether to remove destinations\n"
          "  -L, --logical               dereference TARGETs that are symbolic links\n"
          "  -n, --no-dereference        treat LINK_NAME as a normal file if\n"
          "                                it is a symbolic link to a directory\n"
          "  -P, --physical              make hard links directly to symbolic links\n"
          "  -r, --relative              create symbolic links relative to link location\n"
          "  -s, --symbolic              make symbolic links instead of hard links\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "  -S, --suffix=SUFFIX         override the usual backup suffix\n"
          "  -t, --target-directory=DIRECTORY  specify the DIRECTORY in which to create\n"
          "                                the links\n"
          "  -T, --no-target-directory   treat LINK_NAME as a normal file always\n"
          "  -v, --verbose               print name of each linked file\n",
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
  v24 = dcgettext(
          0LL,
          "\n"
          "Using -s ignores -L and -P.  Otherwise, the last option specified controls\n"
          "behavior when a TARGET is a symbolic link, defaulting to %s.\n",
          5);
  __printf_chk(1LL, v24, "-P");
  v40 = "[";
  v25 = (__int64 *)&v40;
  v41 = "test invocation";
  v42 = "coreutils";
  v43 = "Multi-call invocation";
  v44 = "sha224sum";
  v45 = "sha2 utilities";
  v46 = "sha256sum";
  v47 = "sha2 utilities";
  v48 = "sha384sum";
  v49 = "sha2 utilities";
  v50 = "sha512sum";
  v51 = "sha2 utilities";
  v52 = 0LL;
  v53 = 0LL;
  do
  {
    v25 += 2;
    v26 = (_BYTE *)*v25;
    v27 = 0;
    v28 = *v25 == 0;
    if ( !*v25 )
      break;
    v29 = "ln";
    v30 = 3LL;
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
  v31 = (const char *)v25[1];
  if ( v31 )
  {
    v32 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v32, &unk_40BCB5);
    v33 = setlocale(5, 0LL);
    if ( !v33 || !strncmp(v33, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v36 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v36, &unk_40BCB5);
    v37 = setlocale(5, 0LL);
    if ( !v37 || !strncmp(v37, "en_", 3uLL) )
    {
      v31 = "ln";
      v38 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v38, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v31 = "ln";
  }
  v39 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v39, "ln");
LABEL_13:
  v34 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v34, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v35 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v35, v31);
LABEL_3:
  exit(v1);
}

void *__fastcall sub_4036C0(void *src, void *dest)
{
  void *v2; // rbx@1
  __int64 v3; // rax@1
  size_t v4; // rax@1
  size_t v5; // rbp@1
  _BYTE *v6; // rax@3
  void *result; // rax@3

  v2 = dest;
  LODWORD(v3) = sub_404CA0(src);
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

__int64 __fastcall sub_403750(int a1, const char *a2, int a3, const char *a4, int a5, char a6)
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
        v13 = (char *)sub_4036C0(v6, &dest);
        v14 = v13;
        if ( v13 )
        {
          v15 = sub_4082D0(v13);
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

__int64 __fastcall sub_403890(const char *a1, int a2, const char *a3, char a4)
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
        v10 = (char *)sub_4036C0(v5, &dest);
        v11 = v10;
        if ( !v10 )
          return (unsigned int)-1;
        if ( (unsigned int)sub_4082D0(v10) )
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

__int64 __fastcall sub_403990(void *src, void **a2, _QWORD *a3)
{
  void *v3; // r13@1
  _QWORD *v4; // r12@2
  size_t v5; // rbx@2
  __int64 result; // rax@2

  v3 = *a2;
  if ( *a2 )
  {
    v4 = a3;
    v5 = strlen((const char *)src);
    result = 1LL;
    if ( *v4 > v5 )
    {
      memcpy(v3, src, v5 + 1);
      *a2 = (char *)*a2 + v5;
      result = 0LL;
      *v4 -= v5;
    }
  }
  else
  {
    fputs_unlocked((const char *)src, stdout);
    result = 0LL;
  }
  return result;
}

char __fastcall sub_403A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r8@1
  char v5; // r9@1
  char result; // al@1
  char v7; // dl@2
  char v8; // r10@2
  bool v9; // cl@2
  signed __int64 v10; // rcx@4
  int v11; // edx@4
  char v12; // r11@7
  char *v13; // rbp@14
  char v14; // al@14
  const char *v15; // rbx@16
  int v16; // er12@19
  char i; // al@27
  int v18; // ebp@29
  char *v19; // rax@21
  __int64 v20; // [sp+0h] [bp-28h]@1
  __int64 v21; // [sp+8h] [bp-20h]@1

  v4 = *(_BYTE *)(a2 + 1);
  v5 = *(_BYTE *)(a1 + 1);
  v20 = a4;
  v21 = a3;
  result = 0;
  if ( (v4 == 47) == (v5 == 47) )
  {
    v7 = *(_BYTE *)a1;
    v8 = *(_BYTE *)a2;
    v9 = *(_BYTE *)a1 == 0;
    if ( *(_BYTE *)a2 )
    {
      result = v9 || v8 != v7;
      if ( v9 || v8 != v7 )
      {
        result = 0;
      }
      else
      {
        v10 = 2LL;
        v11 = 0;
        while ( 1 )
        {
          if ( v8 == 47 )
            v11 = v10 - 1;
          if ( !v4 )
            break;
          if ( v4 != v5 || !v5 )
          {
            if ( v4 == 47 && !v5 )
              goto LABEL_33;
            goto LABEL_13;
          }
          v12 = *(_BYTE *)(a2 + v10);
          v5 = *(_BYTE *)(a1 + v10);
          v8 = v4;
          ++v10;
          v4 = v12;
        }
        if ( v5 == 47 || !v5 )
        {
LABEL_33:
          v11 = v10 - 1;
          goto LABEL_14;
        }
LABEL_13:
        if ( !v11 )
          return result;
LABEL_14:
        v13 = (char *)(a2 + v11);
        v14 = *v13;
        if ( *v13 == 47 )
          v14 = (v13++)[1];
        v15 = (const char *)((*(_BYTE *)(a1 + v11) == 47) + a1 + v11);
        if ( v14 )
        {
          v16 = sub_403990("..", (void **)&v21, &v20);
          for ( i = *v13; *v13; i = *v13 )
          {
            if ( i == 47 )
              v16 |= sub_403990(&unk_40CE09, (void **)&v21, &v20);
            ++v13;
          }
          if ( *v15 )
          {
            v18 = sub_403990("/", (void **)&v21, &v20);
            v16 |= (unsigned __int64)sub_403990((void *)v15, (void **)&v21, &v20) | v18;
          }
        }
        else
        {
          if ( !*v15 )
            v15 = ".";
          v16 = sub_403990((void *)v15, (void **)&v21, &v20);
        }
        if ( (_BYTE)v16 )
        {
          v19 = dcgettext(0LL, "generating relative path", 5);
          error(0, 36, "%s", v19, v20, v21);
        }
        result = v16 ^ 1;
      }
    }
  }
  return result;
}

int __fastcall sub_403C10(char *path, __int64 a2)
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
  LODWORD(v3) = sub_404CA0(path);
  v4 = v3;
  LODWORD(v5) = sub_404D00(v3);
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

void __fastcall sub_403CE0(char *a1)
{
  char *v1; // rbx@1
  char *v2; // rax@4

  v1 = a1;
  if ( (a1 || (v1 = getenv("SIMPLE_BACKUP_SUFFIX")) != 0LL) && *v1 && (LODWORD(v2) = sub_404CA0(v1), v2 == v1) )
    src = v1;
  else
    src = "~";
}

void *__fastcall sub_403D40(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_404CA0(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_403CE0(src);
INVALID_COLON;
    v7 = src;
INVALID_COLON;
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
        memcpy((char *)v13 + v52, src, v63);
INVALID_COLON;
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_404D00((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_404B20(v13, src);
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
          memcpy((char *)v13 + v52, src, v63);
INVALID_COLON;
          v58 = 1;
        }
LABEL_46:
        sub_403C10((char *)v13, v52);
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
      if ( !(unsigned int)sub_407EA0(-100, (char *)src, v40, v39) )
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

__int64 __fastcall sub_404210(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1

  LODWORD(v2) = sub_40A670(a1, a2, off_40CEC0, dword_40CEA0, 4LL, off_611380);
  return (unsigned int)dword_40CEA0[v2];
}

void *__fastcall sub_404240(void *a1, signed int a2)
{
  void *result; // rax@1

  result = sub_403D40(a1, a2, 0);
  if ( !result )
    sub_408CA0();
  return result;
}

__int64 __fastcall sub_404280(void *a1, char *a2)
{
  char *v2; // rax@3

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

char *__fastcall sub_4042D0(void *src, __int64 a2)
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
  __off_t v30; // rsi@58
  const char *v31; // rax@58
  const char *v32; // r15@58
  const char *v33; // rdi@59
  size_t v34; // r13@59
  size_t v35; // rax@59
  size_t v36; // rdx@59
  unsigned __int64 v37; // r8@59
  int *v38; // rax@66
  signed int v39; // ecx@66
  int *v40; // rdx@66
  signed int v41; // ST14_4@67
  int *v42; // ST08_8@67
  int *v43; // rdx@67
  signed int v44; // ecx@67
  signed int v45; // ST14_4@68
  int *v46; // ST08_8@68
  signed __int64 v47; // rdx@72
  __int64 v48; // rax@76
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
  int v65; // [sp+38h] [bp-D0h]@8
  int v66; // [sp+3Ch] [bp-CCh]@39
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
    LODWORD(v20) = sub_408A50(4096LL, a2);
    v4 = v20;
    v8 = (unsigned __int64)(v20 + 4096);
    v7 = v20 + 1;
    *v20 = 47;
  }
  else
  {
    LODWORD(v3) = sub_408CE0();
    v4 = (char *)v3;
    if ( !v3 )
      return v4;
    v5 = strlen(v3);
    v6 = v5;
    if ( v5 <= 0xFFF )
    {
      LODWORD(v54) = sub_408AB0(v4, 4096LL);
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
  v65 = a2 & 4;
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
        LODWORD(v18) = sub_408AB0(v4, v17);
        v13 = v12 - v2;
        v4 = v18;
        v8 = (unsigned __int64)&v18[v17];
        v7 = &v18[v15];
      }
      v19 = v13;
      memcpy(v7, v2, v13);
      v7 += v19;
      *v7 = 0;
      if ( v60 == 2 && v65 )
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
          v43 = v51;
          v44 = v50;
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
        if ( v65 )
          v21 = __xstat(1, v4, &stat_buf) != 0;
        else
          v21 = __lxstat(1, v4, &stat_buf) != 0;
        if ( v21 )
        {
          v22 = __errno_location();
          v23 = *v22;
          if ( !v60 )
            goto LABEL_79;
          if ( v60 != 1 )
            goto LABEL_29;
          v66 = *v22;
          v24 = v22;
          v25 = strspn(i + 1, "/");
          v22 = v24;
          v23 = v66;
          if ( v12[v25] || v66 != 2 )
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
            LODWORD(v48) = sub_4057D0(7LL, 0LL, sub_406190, sub_406200, sub_406240);
            v61 = v48;
            if ( !v48 )
              sub_408CA0(7LL, 0LL);
          }
          if ( (unsigned __int8)sub_404E00(v61, v62, &stat_buf) )
          {
            if ( v60 != 2 )
            {
              v38 = __errno_location();
              v39 = 40;
              v40 = v38;
LABEL_67:
              v41 = v39;
              v42 = v40;
              free(ptr);
              free(v4);
              v43 = v42;
              v44 = v41;
LABEL_68:
              v45 = v44;
              v46 = v43;
              sub_405A10(v61);
              v44 = v45;
              v43 = v46;
LABEL_69:
              *v43 = v44;
              return 0LL;
            }
          }
          else
          {
            sub_404D70(v61, v62, &stat_buf);
            v30 = stat_buf.st_size;
            v31 = (const char *)sub_40A2B0(v4);
            v32 = v31;
            if ( v31 )
            {
              v33 = i + 1;
              v34 = strlen(v31);
              v35 = strlen(v33);
              v36 = v35;
              v37 = v34 + v35 + 1;
              if ( v64 )
              {
                if ( v37 > v64 )
                {
                  v55 = v34 + v35 + 1;
                  v56 = v35;
                  LODWORD(v57) = sub_408AB0(ptr, v55);
                  v36 = v56;
                  ptr = v57;
                  v64 = v55;
                }
              }
              else
              {
                v59 = v35;
                v52 = 4096LL;
                if ( v37 >= 0x1000 )
                  v52 = v37;
                v64 = v52;
                LODWORD(v53) = sub_408A50(v52, v30);
                v36 = v59;
                ptr = v53;
              }
              memmove((char *)ptr + v34, v12, v36 + 1);
              v12 = (char *)memcpy(ptr, v32, v34);
              v62 = v12;
              if ( *v32 == 47 )
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
              free((void *)v32);
              goto LABEL_32;
            }
            v40 = __errno_location();
            v39 = *v40;
            if ( v60 != 2 || v39 == 12 )
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
        v47 = (signed __int64)(v7 - 1);
        if ( v4 < v7 - 1 && *(v7 - 2) != 47 )
        {
          v7 -= 2;
          if ( v4 != (char *)(v47 - 1) )
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
    LODWORD(v28) = sub_408AB0(v4, v7 - v4 + 1);
    v4 = v28;
  }
  free(ptr);
  if ( v61 )
    sub_405A10(v61);
  return v4;
}

int sub_404960()
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
  LODWORD(v1) = sub_408F00(stdin);
  if ( !v1 )
  {
    if ( !(unsigned int)sub_40A730(v0) )
      return sub_404A80(v0);
    goto LABEL_6;
  }
  v11 = sub_408F30(v0, 0LL, 1LL);
  v4 = stdin;
  if ( !v11 )
  {
    v3 = sub_408EC0();
    v4 = stdin;
    if ( v3 )
    {
      sub_40A730(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_40A730(v4) )
  {
LABEL_6:
    v5 = dcgettext(0LL, "error closing file", 5);
    v6 = qword_6113F8;
    v7 = v5;
    v8 = __errno_location();
    v9 = v8;
    if ( v6 )
    {
      LODWORD(v10) = sub_407CD0(v6, "error closing file");
      error(0, *v9, "%s: %s", v10, v7);
    }
    else
    {
      error(0, *v8, "%s", v7);
    }
    ((void (*)(void))sub_404A80)();
    _exit(status);
  }
  return ((int (*)(void))sub_404A80)();
}

__int64 sub_404A80()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_407CD0(qword_611408, "write error");
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
    v5 = sub_408D80(v3);
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

__int64 __fastcall sub_404BC0(void *a1, __int64 a2)
{
  __int64 result; // rax@1

  result = sub_404C40(a1);
  if ( !result )
    sub_408CA0(a1, a2);
  return result;
}

signed __int64 __fastcall sub_404BE0(_BYTE *a1)
{
  unsigned __int64 v1; // rbp@1
  __int64 v2; // rax@1
  signed __int64 v3; // rdx@2
  signed __int64 result; // rax@7

  v1 = *a1 == 47;
  LODWORD(v2) = sub_404CA0(a1);
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

_BYTE *__fastcall sub_404C40(void *src)
{
  signed __int64 v1; // rax@1
  size_t v2; // rbx@1
  _BYTE *v3; // rax@1
  _BYTE *v4; // rcx@1
  _BYTE *v5; // rax@2

  v1 = sub_404BE0(src);
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

_BYTE *__fastcall sub_404CA0(_BYTE *a1)
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

size_t __fastcall sub_404D00(const char *a1)
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

bool __fastcall sub_404D30(char *a1)
{
  const char *v1; // rbx@1
  char *v2; // rbx@3
  bool v3; // zf@3

  v1 = sub_404CA0(a1);
  if ( !*v1 )
    v1 = a1;
  v2 = (char *)&v1[sub_404D00(v1)];
  v3 = *v2 == 0;
  *v2 = 0;
  return !v3;
}

void __fastcall sub_404D70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@2
  __int64 v4; // rax@2
  __int64 v5; // rbx@2
  __int64 v6; // rax@2
  __int64 v7; // rax@2

  if ( a1 )
  {
    v3 = a3;
    LODWORD(v4) = sub_408A50(24LL, a2);
    v5 = v4;
    LODWORD(v6) = sub_408C80(a2);
    *(_QWORD *)v5 = v6;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v5 + 16) = *(_QWORD *)v3;
    LODWORD(v7) = sub_405F70(a1, v5);
    if ( !v7 )
      sub_408CA0(a1, v5);
    if ( v5 != v7 )
      sub_406240(v5);
  }
}

bool __fastcall sub_404E00(__int64 a1, __int64 a2, __int64 a3)
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
    LODWORD(v4) = sub_405560(a1, &v6);
    result = v4 != 0;
  }
  else
  {
    result = 0;
  }
  return result;
}

__int64 __fastcall sub_404E40(void *a1, void *a2)
{
  __int64 result; // rax@1

  result = sub_404E60(a1, a2);
  if ( !result )
    sub_408CA0(a1, a2);
  return result;
}

void *__fastcall sub_404E60(void *src, void *a2, _QWORD *a3)
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
  v4 = sub_404CA0(src);
  v5 = v4;
  v6 = sub_404D00(v4);
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

unsigned __int64 __fastcall sub_404F40(unsigned __int64 a1)
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

signed __int64 __fastcall sub_405000(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

signed __int64 __fastcall sub_405000(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_405030(__int64 a1, __int64 a2, __int64 **a3, char a4)
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
  v7 = (__int64 *)sub_405000(a1, a2);
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

signed __int64 __fastcall sub_405150(void **a1)
{
  void *v1; // rax@1
  float v2; // xmm0_4@2
  float v3; // xmm1_4@5
  float v4; // xmm2_4@5
  signed __int64 result; // rax@7

  v1 = *a1;
  if ( *a1 == &unk_40CFA0 )
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
      *a1 = &unk_40CFA0;
      result = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_4051D0(__int64 a1, __int64 a2, char a3)
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
              v8 = sub_405000(a1, *(_QWORD *)v6);
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

__int64 __fastcall sub_405560(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 *v3; // rax@1
  __int64 v4; // rsi@1
  __int64 *v5; // rbx@2
  __int64 result; // rax@7

  v2 = a2;
  v3 = (__int64 *)sub_405000(a1, a2);
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

char **__fastcall sub_4057D0(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(), __int64 (__fastcall *a4)(), char *a5)
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
    v7 = sub_404FE0;
  if ( !a4 )
    v6 = sub_404FF0;
  v9 = malloc(0x50uLL);
  v10 = (char **)v9;
  if ( v9 )
  {
    v11 = (void **)((char *)v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_405150(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_404F40(v8);
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
      *((_QWORD *)v9 + 5) = &unk_40CFA0;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_405150(v11) )
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

void __fastcall sub_405A10(__int64 a1)
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

signed __int64 __fastcall sub_405AF0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_404F40(a2);
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
  v14 = sub_4051D0((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_4051D0(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_4051D0(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_405AF0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_404F40(a2);
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
  v14 = sub_4051D0((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_4051D0(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_4051D0(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_405CF0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_405030(a1, a2, &v26, 0);
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
        sub_405150((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_405AF0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_405030(a1, v4, &v26, 0) )
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

signed __int64 __fastcall sub_405CF0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_405030(a1, a2, &v26, 0);
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
        sub_405150((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_405AF0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_405030(a1, v4, &v26, 0) )
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

__int64 __fastcall sub_405F70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  int v3; // eax@1
  __int64 result; // rax@4
  __int64 v5; // [sp+8h] [bp-10h]@1

  v2 = a2;
  v3 = sub_405CF0(a1, a2, &v5);
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

unsigned __int64 __fastcall sub_406190(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = sub_40A7F0(*(_QWORD *)a1);
  return (*(_QWORD *)(a1 + 8) ^ v2) % a2;
}

int __fastcall sub_4061D0(__int64 a1, __int64 a2)
{
  int result; // eax@2

  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) || *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16) )
    result = 0;
  else
    result = sub_4080F0(*(_QWORD *)a1, *(_QWORD *)a2);
  return result;
}

bool __fastcall sub_406200(__int64 a1, __int64 a2)
{
  bool result; // al@1

  result = 0;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8) && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
    result = strcmp(*(const char **)a1, *(const char **)a2) == 0;
  return result;
}

void __fastcall sub_406240(void **a1)
{
  free(*a1);
  free(a1);
}

char *__fastcall sub_406260(const char *a1)
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
  qword_611410 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_406300(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_40A830(0LL);
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

unsigned __int64 __fastcall sub_406400(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_406300("`", v11);
        v58 = sub_406300("'", v11);
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
            return sub_406400((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_406400((__int64)v9, v79, s);
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
                return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
          return sub_406400((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_406400((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40A230((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_406400((__int64)v9, v10, s);
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
      return sub_406400((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_406400(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_406300("`", v11);
        v58 = sub_406300("'", v11);
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
            return sub_406400((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_406400((__int64)v9, v79, s);
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
                return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
          return sub_406400((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_406400((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40A230((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_406400((__int64)v9, v10, s);
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
      return sub_406400((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_407630(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_611358;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_611370 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_408CA0(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_611358 == &xmmword_611360 )
    {
      LODWORD(v20) = sub_408AB0(0LL, v9);
      v7 = v20;
      off_611358 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_611360);
    }
    else
    {
      LODWORD(v10) = sub_408AB0(off_611358, v9);
      off_611358 = v10;
      v7 = v10;
    }
    memset(&v7[dword_611370], 0, 16LL * ((signed int)a1 + 1 - dword_611370));
    dword_611370 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_406400(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_611420 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_408A50(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_406400(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_407630(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_611358;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_611370 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_408CA0(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_611358 == &xmmword_611360 )
    {
      LODWORD(v20) = sub_408AB0(0LL, v9);
      v7 = v20;
      off_611358 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_611360);
    }
    else
    {
      LODWORD(v10) = sub_408AB0(off_611358, v9);
      off_611358 = v10;
      v7 = v10;
    }
    memset(&v7[dword_611370], 0, 16LL * ((signed int)a1 + 1 - dword_611370));
    dword_611370 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_406400(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_611420 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_408A50(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_406400(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_407B50(__int64 a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407B50(__int64 a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407C30(int a1, char *a2)
{
  return sub_407B50(0LL, a1, a2);
}

_BYTE *__fastcall sub_407C50(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_611550;
  v4 = _mm_load_si128((const __m128i *)&xmmword_611520);
  v5 = _mm_load_si128((const __m128i *)&xmmword_611530);
  v6 = _mm_load_si128((const __m128i *)&xmmword_611540);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_407630(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_407CD0(char *a1)
{
  return sub_407C50(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407D00(__int64 a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407D00(__int64 a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407E60(__int64 a1, char *a2)
{
  return sub_407630(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_611320);
}

_BYTE *__fastcall sub_407E80(char *a1)
{
  return sub_407630(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_611320);
}

__int64 __fastcall sub_407EA0(int oldfd, char *old, int newfd, char *a4, unsigned int a5)
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

__int64 __fastcall sub_4080F0(_BYTE *a1, _BYTE *a2)
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
  v3 = sub_404CA0(a1);
  v4 = sub_404CA0(a2);
  v5 = sub_404D00(v3);
  if ( v5 == sub_404D00(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (const char *)sub_404BC0(a1, (__int64)v4);
    v8 = (const char *)sub_404BC0(a2, (__int64)v4);
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

__int64 __fastcall sub_408220(char *filename)
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

int __fastcall sub_408280(const char *a1)
{
  return mkdir(a1, 0x1C0u);
}

int __fastcall sub_408290(const char *a1, int *a2)
{
  int v2; // esi@1

  v2 = *a2;
  LOBYTE(v2) = v2 & 0x3C | 0xC2;
  return open(a1, v2, 384LL);
}

noreturn void  sub_4082B0()
{
  __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147u, "gen_tempname_len");
}

__int64 __fastcall sub_4082D0(char *s, int a2, __int64 a3, int (__fastcall *a4)(char *, __int64), size_t a5)
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
    LODWORD(v11) = sub_40ADD0(0LL, v5);
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
            LODWORD(v16) = sub_40AE10(v12, 61LL);
            *(v15 - 1) = byte_40DE00[v16];
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
          sub_40AF30(v12);
          *v7 = 17;
          return (unsigned int)-1;
        }
      }
      v17 = -1;
LABEL_12:
      v20 = v17;
      v21 = v18;
      sub_40AF30(v12);
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

int __fastcall sub_4084B0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v31; // r8@9
  __int64 v32; // r12@10
  __int64 v33; // rbx@10
  char *v34; // rax@10
  __int64 v35; // r13@11
  __int64 v36; // r12@11
  __int64 v37; // rbx@11
  char *v38; // rax@11
  __int64 v39; // r14@12
  __int64 v40; // r13@12
  __int64 v41; // r12@12
  __int64 v42; // rbx@12
  char *v43; // rax@12
  __int64 v44; // r15@14
  __int64 v45; // r13@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // r13@15
  __int64 v50; // rbx@15
  char *v51; // rax@15
  __int64 v52; // r13@17
  __int64 v53; // r12@17
  __int64 v54; // r15@17
  __int64 v55; // r14@17
  __int64 v56; // r8@17
  __int64 v57; // ST38_8@17
  __int64 v58; // r8@18
  __int64 v59; // r13@18
  __int64 v60; // r12@18
  __int64 v61; // ST48_8@18
  __int64 v62; // r15@18
  __int64 v63; // r14@18
  __int64 v64; // ST40_8@18
  __int64 v65; // ST30_8@18
  __int64 v66; // [sp+0h] [bp-58h]@15
  __int64 v67; // [sp+8h] [bp-50h]@5

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3);
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
      v67 = v11;
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
      v67 = v21;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v31);
    case 2LL:
      v32 = *(_QWORD *)(v7 + 8);
      v33 = *(_QWORD *)v7;
      v34 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v34, v33, v32);
    case 3LL:
      v35 = *(_QWORD *)(v7 + 16);
      v36 = *(_QWORD *)(v7 + 8);
      v37 = *(_QWORD *)v7;
      v38 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v38, v37, v36);
    case 4LL:
      v39 = *(_QWORD *)(v7 + 24);
      v40 = *(_QWORD *)(v7 + 16);
      v41 = *(_QWORD *)(v7 + 8);
      v42 = *(_QWORD *)v7;
      v43 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v44 = *(_QWORD *)(v7 + 32);
      v39 = *(_QWORD *)(v7 + 24);
      v45 = *(_QWORD *)(v7 + 16);
      v41 = *(_QWORD *)(v7 + 8);
      v42 = *(_QWORD *)v7;
      v43 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v43, v42, v41);
      return v39;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v66 = *(_QWORD *)(v7 + 8);
      v49 = *(_QWORD *)(v7 + 16);
      v50 = *(_QWORD *)v7;
      v51 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v52 = *(_QWORD *)(v7 + 48);
      v53 = *(_QWORD *)(v7 + 40);
      v54 = *(_QWORD *)(v7 + 32);
      v55 = *(_QWORD *)(v7 + 24);
      v56 = *(_QWORD *)(v7 + 8);
      v57 = *(_QWORD *)(v7 + 16);
      v50 = *(_QWORD *)v7;
      v66 = v56;
      v51 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v51, v50, v66);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v58 = *(_QWORD *)(v7 + 8);
      v59 = *(_QWORD *)(v7 + 48);
      v60 = *(_QWORD *)(v7 + 40);
      v61 = *(_QWORD *)(v7 + 64);
      v62 = *(_QWORD *)(v7 + 32);
      v63 = *(_QWORD *)(v7 + 24);
      v64 = *(_QWORD *)(v7 + 56);
      v65 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      v67 = v58;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17, v67);
      break;
  }
  return result;
}

int __fastcall sub_4084B0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v31; // r8@9
  __int64 v32; // r12@10
  __int64 v33; // rbx@10
  char *v34; // rax@10
  __int64 v35; // r13@11
  __int64 v36; // r12@11
  __int64 v37; // rbx@11
  char *v38; // rax@11
  __int64 v39; // r14@12
  __int64 v40; // r13@12
  __int64 v41; // r12@12
  __int64 v42; // rbx@12
  char *v43; // rax@12
  __int64 v44; // r15@14
  __int64 v45; // r13@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // r13@15
  __int64 v50; // rbx@15
  char *v51; // rax@15
  __int64 v52; // r13@17
  __int64 v53; // r12@17
  __int64 v54; // r15@17
  __int64 v55; // r14@17
  __int64 v56; // r8@17
  __int64 v57; // ST38_8@17
  __int64 v58; // r8@18
  __int64 v59; // r13@18
  __int64 v60; // r12@18
  __int64 v61; // ST48_8@18
  __int64 v62; // r15@18
  __int64 v63; // r14@18
  __int64 v64; // ST40_8@18
  __int64 v65; // ST30_8@18
  __int64 v66; // [sp+0h] [bp-58h]@15
  __int64 v67; // [sp+8h] [bp-50h]@5

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3);
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
      v67 = v11;
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
      v67 = v21;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v31);
    case 2LL:
      v32 = *(_QWORD *)(v7 + 8);
      v33 = *(_QWORD *)v7;
      v34 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v34, v33, v32);
    case 3LL:
      v35 = *(_QWORD *)(v7 + 16);
      v36 = *(_QWORD *)(v7 + 8);
      v37 = *(_QWORD *)v7;
      v38 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v38, v37, v36);
    case 4LL:
      v39 = *(_QWORD *)(v7 + 24);
      v40 = *(_QWORD *)(v7 + 16);
      v41 = *(_QWORD *)(v7 + 8);
      v42 = *(_QWORD *)v7;
      v43 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v44 = *(_QWORD *)(v7 + 32);
      v39 = *(_QWORD *)(v7 + 24);
      v45 = *(_QWORD *)(v7 + 16);
      v41 = *(_QWORD *)(v7 + 8);
      v42 = *(_QWORD *)v7;
      v43 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v43, v42, v41);
      return v39;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v66 = *(_QWORD *)(v7 + 8);
      v49 = *(_QWORD *)(v7 + 16);
      v50 = *(_QWORD *)v7;
      v51 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v52 = *(_QWORD *)(v7 + 48);
      v53 = *(_QWORD *)(v7 + 40);
      v54 = *(_QWORD *)(v7 + 32);
      v55 = *(_QWORD *)(v7 + 24);
      v56 = *(_QWORD *)(v7 + 8);
      v57 = *(_QWORD *)(v7 + 16);
      v50 = *(_QWORD *)v7;
      v66 = v56;
      v51 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v51, v50, v66);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v58 = *(_QWORD *)(v7 + 8);
      v59 = *(_QWORD *)(v7 + 48);
      v60 = *(_QWORD *)(v7 + 40);
      v61 = *(_QWORD *)(v7 + 64);
      v62 = *(_QWORD *)(v7 + 32);
      v63 = *(_QWORD *)(v7 + 24);
      v64 = *(_QWORD *)(v7 + 56);
      v65 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      v67 = v58;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17, v67);
      break;
  }
  return result;
}

int __fastcall sub_408910(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4084B0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_4084B0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_408A50(size_t a1, __int64 a2)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_408CA0(a1, a2);
  }
  return result;
}

void *__fastcall sub_408AB0(void *a1, size_t a2)
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
        sub_408CA0(a1, a2);
    }
  }
  return result;
}

void *__fastcall sub_408C50(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_408A50(a2, a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_408C80(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_408C50(a1, v1 + 1);
}

noreturn void  sub_408CA0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_408CE0()
{
  __int64 v0; // rax@1
  __int64 v1; // rbx@1

  LODWORD(v0) = sub_408F90(0LL, 0LL);
  v1 = v0;
  if ( !v0 && *__errno_location() == 12 )
    sub_408CA0();
  return v1;
}

__int64 sub_408D10()
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

__int64 __fastcall sub_408D80(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_611558 < 0 )
    {
      v4 = sub_408D80(a1);
      if ( v4 >= 0 && dword_611558 == -1 )
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
        dword_611558 = 1;
      }
      else
      {
        v4 = sub_408D80(a1);
        if ( v4 >= 0 )
        {
          dword_611558 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_408EC0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_408F30(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

__int64 __fastcall sub_408F00(__int64 a1)
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

int __fastcall sub_408F30(FILE *a1, __off_t a2, int a3)
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

char *__fastcall sub_408F90(char *a1, unsigned __int64 a2)
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

__int64 __fastcall sub_409460(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_409540(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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
  const char *v38; // r12@62
  __int64 v39; // rbp@62
  char *v40; // rax@62
  char **v41; // [sp+0h] [bp-88h]@1
  int v42; // [sp+Ch] [bp-7Ch]@1
  char *s1; // [sp+10h] [bp-78h]@6
  char *s1a; // [sp+10h] [bp-78h]@12
  _BYTE *ptr; // [sp+18h] [bp-70h]@12
  _DWORD *v46; // [sp+20h] [bp-68h]@1
  char *s; // [sp+30h] [bp-58h]@1
  signed int v48; // [sp+38h] [bp-50h]@12
  char v49; // [sp+3Fh] [bp-49h]@1
  int v50; // [sp+40h] [bp-48h]@1
  signed int v51; // [sp+44h] [bp-44h]@12
  signed int v52; // [sp+48h] [bp-40h]@12

  v50 = a1;
  v9 = *(const char **)(a7 + 32);
  s = a3;
  v41 = a4;
  v46 = a5;
  v10 = *(char **)(a7 + 32);
  v42 = a6;
  v49 = *v9;
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
    if ( !v42 || *(_BYTE *)(a2[*(_DWORD *)a7] + 1) == 45 || (v18 = strchr(s, v49), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24, a9);
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
  v51 = -1;
  v15 = s1;
  v16 = 0LL;
  v48 = 0;
  v52 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = v41;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (v42
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v48 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((signed int)v13 + 1, 1uLL);
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
        __fprintf_chk(stderr, 1LL, v27, v26, a9);
        v9 = *(const char **)(a7 + 32);
      }
      else
      {
        flockfile(stderr);
        v31 = *(_QWORD *)(a7 + 32);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32, a9);
        v34 = stderr;
        v35 = v41;
        v36 = ptr;
        v37 = (signed __int64)&ptr[v13 + 1];
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
        v9 = *(const char **)(a7 + 32);
      }
    }
    if ( v52 )
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
    LODWORD(v13) = v51;
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
        __fprintf_chk(stderr, 1LL, v30, v29, a9);
      }
      *(_DWORD *)(a7 + 8) = *((_DWORD *)v12 + 6);
      result = 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= v50 )
      {
        if ( a8 )
        {
          v38 = *v12;
          v39 = *a2;
          v40 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v40, v39, a9);
        }
        *(_DWORD *)(a7 + 8) = *((_DWORD *)v12 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *(_DWORD *)a7 = v20 + 2;
        *(_QWORD *)(a7 + 16) = a2[v21];
LABEL_33:
        if ( v46 )
          *v46 = v13;
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

__int64 __fastcall sub_409B60(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_409460(a2, a7);
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
        sub_409460((__int64)v11, a7);
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
            v40 = sub_409540(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_409540(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_409540(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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
        __fprintf_chk(stderr, 1LL, v52, v51, (unsigned int)v26);
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
            __fprintf_chk(stderr, 1LL, v50, v49, (unsigned int)v26);
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
      __fprintf_chk(stderr, 1LL, v48, v47, (unsigned int)v26);
    }
    *(_DWORD *)(a7 + 8) = v26;
    v26 = 63;
  }
  return (unsigned int)v26;
}

__int64 __fastcall sub_40A130(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_611560 = dword_61137C;
  dword_611564 = dword_611378;
  result = sub_409B60(a1, a2, a3, a4, a5, a6, (__int64)&dword_611560, a7);
  dword_61137C = dword_611560;
  filename = (char *)qword_611570;
  dword_611374 = dword_611568;
  return result;
}

__int64 __fastcall sub_40A1B0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_40A130(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_40A230(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40A790(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

char *__fastcall sub_40A2B0(char *path, unsigned __int64 a2)
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

noreturn void  sub_40A3A0()
{
  sub_4032B0(1);
}

signed __int64 __fastcall sub_40A3B0(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_40A4D0(char *a1, char *a2, __int64 a3)
{
  char *v3; // rbx@2
  _BYTE *v4; // rbp@3
  _BYTE *v5; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_407E60(1LL, a1);
  v5 = sub_407B50(0LL, 8, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_40A550(char **a1, char *a2, size_t a3)
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
  __int64 v12; // r8@3
  _BYTE *v13; // rax@6
  __int64 v14; // r8@6
  char *v15; // rax@7

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
      v11 = sub_407E80(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11, v12);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v13 = sub_407E80(i);
    __fprintf_chk(stderr, 1LL, ", %s", v13, v14);
  }
LABEL_7:
  v15 = stderr->_IO_write_ptr;
  if ( v15 >= stderr->_IO_write_end )
  {
    LODWORD(v15) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = v15 + 1;
    *v15 = 10;
  }
  return (unsigned __int64)v15;
}

__int64 __fastcall sub_40A670(char *a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(char **, char *))
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
  result = sub_40A3B0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40A4D0(a1, (char *)a2, result);
    sub_40A550(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_40A730(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

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

bool __fastcall sub_40A790(int a1)
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

unsigned __int64 __fastcall sub_40A7F0(_BYTE *a1, unsigned __int64 a2)
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

const char *sub_40A830()
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
                sub_40B9A0(v61);
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
            sub_40B9A0(v40);
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

_QWORD *__fastcall sub_40ADD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  __int64 v3; // rbx@1
  _QWORD *result; // rax@1

  LODWORD(v2) = sub_40AFF0();
  v3 = v2;
  result = 0LL;
  if ( v3 )
  {
    result = sub_408A50(0x18uLL, a2);
    *result = v3;
    result[2] = 0LL;
    result[1] = 0LL;
  }
  return result;
}

unsigned __int64 __fastcall sub_40AE10(__int64 a1, unsigned __int64 a2)
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
      sub_40B300(v4, &v13, v9);
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

__int64 __fastcall sub_40AF30(void *ptr)
{
  unsigned int v1; // er12@1
  int *v2; // rax@1
  int v3; // er13@1
  int *v4; // rbp@1

  v1 = sub_40B460(*(void **)ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
  *v4 = v3;
  return v1;
}

noreturn void __fastcall  sub_40AF90(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

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

noreturn void __fastcall  sub_40AF90(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

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

__m128i *__fastcall sub_40AFF0(signed __int64 a1, unsigned __int64 a2)
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
    v6 = (__m128i *)sub_408A50(0x1038uLL, 0LL);
    v6->m128i_i64[0] = 0LL;
    v6->m128i_i64[1] = (__int64)sub_40AF90;
    v6[1].m128i_i64[0] = 0LL;
    return v6;
  }
  if ( !a1 )
  {
    v8 = (__m128i *)sub_408A50(0x1038uLL, a2);
    v8->m128i_i64[0] = 0LL;
    v6 = v8;
    v9 = (signed __int64)&v8[2];
    v8->m128i_i64[1] = (__int64)sub_40AF90;
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
    sub_40B760(v9);
    return v6;
  }
  LODWORD(v2) = sub_40BA20(a1, "rb");
  v3 = v2;
  if ( v2 )
  {
    v4 = sub_408A50(0x1038uLL, (__int64)"rb");
    v5 = 4096LL;
    *(_QWORD *)v4 = v3;
    if ( a2 <= 0x1000 )
      v5 = a2;
    *((_QWORD *)v4 + 1) = sub_40AF90;
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

int __fastcall sub_40B300(__int64 a1, char *a2, size_t a3)
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
        v15 = v4;
        v4 += 2048;
        LODWORD(v10) = sub_40B4B0(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return v10;
}

__int64 __fastcall sub_40B460(void *ptr)
{
  FILE *v1; // rbp@1
  __int64 result; // rax@2

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_40B9A0(v1);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_40B4B0(__int64 a1, __int64 a2)
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

unsigned __int64 __fastcall sub_40B760(__int64 a1)
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

int __fastcall sub_40B9A0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_408EC0(stream) )
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

FILE *__fastcall sub_40BA20(const char *a1, const char *a2)
{
  FILE *v2; // rax@1
  FILE *v3; // rbx@1
  int v4; // eax@2
  int v6; // er12@4
  int *v7; // rax@7
  int v8; // ebp@7
  int *v9; // rbx@7
  int *v10; // rax@8
  FILE *v11; // rdi@8
  int v12; // er12@8
  int *v13; // rbp@8

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( (unsigned int)v4 <= 2 )
    {
      v6 = sub_40BAC0((unsigned int)v4);
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
        v3 = 0LL;
      }
    }
  }
  return v3;
}

__int64 __fastcall sub_40BAC0(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return sub_408D80(a1, 0, 3LL, a4);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40BB40(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_6112E8 )
    v1 = unk_6112E8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40BB58(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_610E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
