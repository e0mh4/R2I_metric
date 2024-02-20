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
  int v12; // er14
  __int64 v13; // r15
  char *v14; // rdi
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
  struct stat stat_buf; // [rsp+20h] [rbp-C8h]

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
            sub_408910((char)stdout);
            exit(0);
          }
LABEL_22:
          sub_4032B0(1);
        }
LABEL_34:
        byte_6113E0 = 1;
      }
      else
      {
        switch ( v8 )
        {
          case 83:
            v4 = 1;
            v43 = filename;
            break;
          case 84:
            v6 = 1;
            break;
          case 80:
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
        case 102:
          byte_6113E2 = 1;
          byte_6113E3 = 0;
          break;
        case 105:
          byte_6113E2 = 0;
          byte_6113E3 = 1;
          break;
        case 100:
          goto LABEL_34;
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
        goto LABEL_96;
      if ( __xstat(1, filename, &stat_buf) )
        goto LABEL_95;
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
LABEL_88:
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
        goto LABEL_60;
      if ( (_DWORD)v7 != 1 )
      {
        v34 = "extra operand %s";
        v35 = sub_407C30(4LL, v10[2]);
LABEL_91:
        v36 = dcgettext(0LL, v34, 5);
        error(0, 0, v36, v35);
        goto LABEL_22;
      }
    }
    v34 = "missing destination file operand after %s";
    v35 = sub_407C30(4LL, *v10);
    goto LABEL_91;
  }
  if ( v5 )
    goto LABEL_47;
  v5 = ".";
  if ( (_DWORD)v7 == 1 )
    goto LABEL_47;
  v19 = v10[(int)v7 - 1];
  v44 = &v10[(int)v7 - 1];
  v20 = sub_404CA0(v19);
  v21 = -1LL;
  v22 = (_BYTE *)v20;
  do
  {
    if ( !v21 )
      break;
    v23 = *v22++ == v6;
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
    goto LABEL_80;
  v25 = (unsigned int)*__errno_location();
  if ( !(_DWORD)v25 )
    goto LABEL_80;
  if ( (unsigned int)v25 > 0x28 || (v26 = 1168232153092LL, !_bittest64(&v26, v25)) )
  {
    v29 = sub_407C30(4LL, v19);
    v30 = dcgettext(0LL, "failed to access %s", 5);
    error(1, v25, v30, v29);
LABEL_86:
    LODWORD(v25) = 0;
    goto LABEL_87;
  }
  if ( v45 )
  {
LABEL_87:
    v31 = sub_407C30(4LL, v19);
    v32 = dcgettext(0LL, "target %s is not a directory", 5);
    error(1, v25, v32, v31);
    goto LABEL_88;
  }
  while ( (_DWORD)v7 != 2 )
  {
    v7 = sub_407C30(4LL, *v44);
    v27 = dcgettext(0LL, "target %s is not a directory", 5);
    error(1, 0, v27, v7);
LABEL_80:
    v28 = stat_buf.st_mode & 0xF000;
    if ( (unsigned __int8)(v28 == 0x4000) < (unsigned __int8)v45 )
      goto LABEL_86;
    if ( v28 == 0x4000 )
    {
      LODWORD(v7) = v7 - 1;
      v5 = v10[(int)v7];
      goto LABEL_47;
    }
  }
LABEL_60:
  LODWORD(v7) = 2;
  v5 = 0LL;
LABEL_47:
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
LABEL_95:
    v39 = sub_407C30(4LL, filename);
    v40 = dcgettext(0LL, "failed to access %s", 5);
    v41 = __errno_location();
    error(1, *v41, v40, v39);
LABEL_96:
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
      v14 = *v10;
      ++v10;
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
void __usercall __noreturn start(__int64 a1@<rax>, void (*a2)(void)@<rdx>)
{
  int v2; // esi
  int v3; // [rsp-8h] [rbp-8h]
  __int64 _0; // [rsp+0h] [rbp+0h]

  v2 = v3;
  *(_QWORD *)&v3 = a1;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v2, (char **)&_0, init, fini, a2, &v3);
  __halt();
}

void *sub_40297B()
{
  void *result; // rax

  result = &unk_611388;
  if ( &unk_611388 != &unk_611388 )
    result = 0LL;
  return result;
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

__int64 sub_402A28()
{
  return sub_40299A();
}

__int64 __fastcall sub_402A30(void *src, char *a2)
{
  _BYTE *v2; // r12
  char *v3; // rbp
  unsigned int v4; // ebx
  char v5; // r15
  char v6; // r13
  int v7; // er14
  int *v8; // rax
  bool v9; // bl
  void *v10; // r13
  void *v11; // r14
  unsigned __int8 v12; // bl
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // r12
  char *v17; // rbp
  int *v18; // rax
  int *v19; // rax
  char *v20; // rdx
  __int64 v21; // rbp
  char *v22; // rax
  void *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  const char *v27; // rsi
  __int64 v28; // rbx
  char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // rbx
  char *v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rbx
  char *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r14
  char *v43; // rax
  __int64 v44; // r12
  int v45; // ebx
  __int64 v46; // rbp
  char *v47; // rax
  int v48; // esi
  int *v49; // [rsp+8h] [rbp-170h]
  void *v50; // [rsp+8h] [rbp-170h]
  int *v51; // [rsp+8h] [rbp-170h]
  void *v52; // [rsp+10h] [rbp-168h]
  void *v53; // [rsp+10h] [rbp-168h]
  void *ptr; // [rsp+18h] [rbp-160h]
  void *ptra; // [rsp+18h] [rbp-160h]
  struct stat stat_buf; // [rsp+20h] [rbp-158h]
  struct stat v57; // [rsp+B0h] [rbp-C8h]

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
    v16 = sub_407C30(4LL, src);
    v17 = dcgettext(0LL, "failed to access %s", 5);
    v18 = __errno_location();
    error(0, *v18, v17, v16);
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
    v27 = "%s: hard link not allowed for directory";
    v28 = sub_407D00(0LL, 3LL, src);
LABEL_57:
    v29 = dcgettext(0LL, v27, 5);
    v30 = v28;
    v4 = 0;
    error(0, 0, v29, v30);
    return v4;
  }
LABEL_6:
  v6 = byte_6113E2;
  if ( !byte_6113E2 && !byte_6113E3 && !dword_6113E8 )
  {
LABEL_11:
    v9 = 0;
    v10 = 0LL;
    goto LABEL_12;
  }
  v7 = __lxstat(1, a2, &v57);
  if ( v7 )
  {
    v8 = __errno_location();
    if ( *v8 != 2 )
    {
      v51 = v8;
      v37 = sub_407C30(4LL, a2);
      v38 = dcgettext(0LL, "failed to access %s", 5);
      v39 = v37;
      v4 = 0;
      error(0, *v51, v38, v39);
      return v4;
    }
    if ( !v6 && !(_BYTE)v4 )
      dword_6113E8;
    goto LABEL_11;
  }
  if ( qword_6113D8 )
  {
    if ( (unsigned __int8)sub_404E00(qword_6113D8, a2, &v57) )
    {
      v44 = sub_407B50(1LL, 4LL, src);
      v32 = sub_407B50(0LL, 4LL, a2);
      v33 = dcgettext(0LL, "will not overwrite just-created %s with %s", 5);
      v34 = v44;
      goto LABEL_65;
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
    goto LABEL_60;
  }
  if ( !byte_6113E6 && dword_6113E8 )
  {
LABEL_60:
    if ( stat_buf.st_ino != v57.st_ino
      || stat_buf.st_dev != v57.st_dev
      || stat_buf.st_nlink != 1 && !(unsigned __int8)sub_4080F0(src, a2) )
    {
      goto LABEL_31;
    }
    v31 = sub_407B50(1LL, 4LL, a2);
    v32 = sub_407B50(0LL, 4LL, src);
    v33 = dcgettext(0LL, "%s and %s are the same file", 5);
    v34 = v31;
LABEL_65:
    v35 = v32;
    v4 = 0;
    error(0, 0, v33, v35, v34);
    return v4;
  }
LABEL_31:
  if ( (v57.st_mode & 0xF000) == 0x4000 )
  {
    v27 = "%s: cannot overwrite directory";
    v28 = sub_407D00(0LL, 3LL, v3);
    goto LABEL_57;
  }
  v4 = (unsigned __int8)byte_6113E3;
  if ( byte_6113E3 )
  {
    v40 = sub_407C30(4LL, a2);
    v41 = qword_611410;
    v42 = v40;
    v43 = dcgettext(0LL, "%s: replace %s? ", 5);
    __fprintf_chk(stderr, 1LL, v43, v41, v42);
    if ( !(unsigned __int8)sub_408D10() )
      return v4;
    byte_6113E2 = 1;
  }
  if ( !dword_6113E8 )
    goto LABEL_11;
  v10 = (void *)sub_404240(a2);
  if ( rename(a2, (const char *)v10) )
  {
    v45 = *__errno_location();
    free(v10);
    if ( v45 != 2 )
    {
      v46 = sub_407C30(4LL, a2);
      v47 = dcgettext(0LL, "cannot backup %s", 5);
      v48 = v45;
      v4 = 0;
      error(0, v48, v47, v46);
      return v4;
    }
    goto LABEL_11;
  }
  v9 = v10 != 0LL;
LABEL_12:
  v11 = 0LL;
  if ( !byte_6113E5 )
    goto LABEL_13;
  v23 = (void *)sub_404BC0(a2);
  ptra = v23;
  v24 = sub_4042D0(v23);
  v25 = v24;
  v50 = (void *)v24;
  v26 = sub_4042D0(src);
  v53 = (void *)v26;
  if ( !v25 || !v26 )
    goto LABEL_72;
  v11 = (void *)sub_408A50(4096LL, 2LL);
  if ( !(unsigned __int8)sub_403A10(v53, v50, v11, 4096LL) )
  {
    free(v11);
LABEL_72:
    free(ptra);
    free(v50);
    free(v53);
    goto LABEL_73;
  }
  free(ptra);
  free(v50);
  free(v53);
  if ( v11 )
  {
    v2 = v11;
    goto LABEL_13;
  }
LABEL_73:
  v2 = (_BYTE *)sub_408C80(src);
  v11 = v2;
LABEL_13:
  v12 = byte_6113E2 | v9;
  if ( byte_6113E6 )
    v4 = (int)sub_403890(v2, 4294967196LL, a2, v12) >= 0;
  else
    v4 = (int)sub_403750(4294967196LL, v2, 4294967196LL, a2, (unsigned __int8)(byte_6113E4 != 0) << 10, v12) >= 0;
  if ( !(_BYTE)v4 )
  {
    v52 = (void *)sub_407B50(1LL, 4LL, v2);
    ptr = (void *)sub_407B50(0LL, 4LL, a2);
    v19 = __errno_location();
    v49 = v19;
    if ( byte_6113E6 )
    {
      if ( *v19 != 36 && *v2 )
        v20 = dcgettext(0LL, "failed to create symbolic link %s", 5);
      else
        v20 = dcgettext(0LL, "failed to create symbolic link %s -> %s", 5);
    }
    else
    {
      v36 = *v19;
      if ( *v49 == 31 )
      {
        if ( !v5 )
        {
          v20 = dcgettext(0LL, "failed to create hard link to %.0s%s", 5);
          goto LABEL_44;
        }
      }
      else if ( v36 == 122 || v36 == 17 || (v36 & 0xFFFFFFFD) == 28 )
      {
        v20 = dcgettext(0LL, "failed to create hard link %s", 5);
        goto LABEL_44;
      }
      v20 = dcgettext(0LL, "failed to create hard link %s => %s", 5);
    }
LABEL_44:
    error(0, *v49, v20, ptr, v52);
    if ( v10 && rename((const char *)v10, a2) )
    {
      v21 = sub_407C30(4LL, a2);
      v22 = dcgettext(0LL, "cannot un-backup %s", 5);
      error(0, *v49, v22, v21);
    }
    goto LABEL_22;
  }
  if ( !byte_6113E6 )
    sub_404D70(qword_6113D8, a2, &stat_buf);
  if ( byte_6113E1 )
  {
    if ( v10 )
    {
      v13 = sub_407C30(4LL, v10);
      __printf_chk(1LL, "%s ~ ", v13);
    }
    sub_407B50(1LL, 4LL, v2);
    v14 = sub_407B50(0LL, 4LL, a2);
    __printf_chk(1LL, "%s %c> %s\n", v14);
  }
LABEL_22:
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
  const char **v24; // rax
  const char *v25; // rbp
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  const char *v34; // [rsp+0h] [rbp-88h]
  const char *v35; // [rsp+8h] [rbp-80h]
  const char *v36; // [rsp+10h] [rbp-78h]
  const char *v37; // [rsp+18h] [rbp-70h]
  const char *v38; // [rsp+20h] [rbp-68h]
  const char *v39; // [rsp+28h] [rbp-60h]
  const char *v40; // [rsp+30h] [rbp-58h]
  const char *v41; // [rsp+38h] [rbp-50h]
  const char *v42; // [rsp+40h] [rbp-48h]
  const char *v43; // [rsp+48h] [rbp-40h]
  const char *v44; // [rsp+50h] [rbp-38h]
  const char *v45; // [rsp+58h] [rbp-30h]
  __int64 v46; // [rsp+60h] [rbp-28h]
  __int64 v47; // [rsp+68h] [rbp-20h]

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
  __printf_chk(1LL, v4, v1);
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
  v34 = "[";
  v24 = &v34;
  v35 = "test invocation";
  v36 = "coreutils";
  v37 = "Multi-call invocation";
  v38 = "sha224sum";
  v39 = "sha2 utilities";
  v40 = "sha256sum";
  v41 = "sha2 utilities";
  v42 = "sha384sum";
  v43 = "sha2 utilities";
  v44 = "sha512sum";
  v45 = "sha2 utilities";
  v46 = 0LL;
  v47 = 0LL;
  do
    v24 += 2;
  while ( *v24 && strcmp("ln", *v24) );
  v25 = v24[1];
  if ( v25 )
  {
    v26 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v26, &unk_40BCB5);
    v27 = setlocale(5, 0LL);
    if ( !v27 || !strncmp(v27, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v30 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v30, &unk_40BCB5);
    v31 = setlocale(5, 0LL);
    if ( !v31 || !strncmp(v31, "en_", 3uLL) )
    {
      v25 = "ln";
      v32 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v32, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v25 = "ln";
  }
  v33 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v33, "ln");
LABEL_10:
  v28 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v28, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v29 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v29, v25);
LABEL_3:
  exit(status);
}

int __fastcall sub_4036A0(char *to, __int64 a2)
{
  return linkat(*(_DWORD *)a2, *(const char **)(a2 + 8), *(_DWORD *)(a2 + 16), to, *(_DWORD *)(a2 + 20));
}

void *__fastcall sub_4036C0(void *src, void *dest)
{
  void *v2; // rbx
  __int64 v3; // rax
  size_t v4; // rbp

  v2 = dest;
  v3 = sub_404CA0(src) - (_QWORD)src;
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

int __fastcall sub_403730(char *to, __int64 a2)
{
  return symlinkat(*(const char **)a2, *(_DWORD *)(a2 + 8), to);
}

__int64 __fastcall sub_403750(int a1, const char *a2, int a3, const char *a4, int a5, char a6)
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
        v12 = (char *)sub_4036C0(v6, &dest);
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

__int64 __fastcall sub_403890(const char *a1, int a2, const char *a3, char a4)
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

__int64 __fastcall sub_403990(void *src, void **a2, size_t *a3)
{
  void *v3; // r13
  size_t *v4; // r12
  size_t v5; // rbx
  __int64 result; // rax

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

char __fastcall sub_403A10(char *a1, char *a2, __int64 a3, __int64 a4)
{
  char v4; // r8
  char v5; // r9
  char result; // al
  char v7; // dl
  char v8; // r10
  bool v9; // cl
  __int64 v10; // rcx
  int v11; // edx
  char v12; // r11
  char *v13; // rbp
  char v14; // al
  char *v15; // rbx
  int v16; // er12
  char i; // al
  int v18; // ebp
  char *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-28h]
  __int64 v21; // [rsp+8h] [rbp-20h]

  v4 = a2[1];
  v5 = a1[1];
  v20 = a4;
  v21 = a3;
  result = 0;
  if ( (v4 == 47) == (v5 == 47) )
  {
    v7 = *a1;
    v8 = *a2;
    v9 = *a1 == 0;
    if ( *a2 )
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
          v12 = a2[v10];
          v5 = a1[v10];
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
        v13 = &a2[v11];
        v14 = *v13;
        if ( *v13 == 47 )
          v14 = *++v13;
        v15 = &a1[v11 + (a1[v11] == 47)];
        if ( v14 )
        {
          v16 = sub_403990(asc_40CE0A, (void **)&v21, (size_t *)&v20);
          for ( i = *v13; *v13; i = *v13 )
          {
            if ( i == 47 )
              v16 |= sub_403990(&unk_40CE09, (void **)&v21, (size_t *)&v20);
            ++v13;
          }
          if ( *v15 )
          {
            v18 = sub_403990("/", (void **)&v21, (size_t *)&v20);
            v16 |= (unsigned __int64)sub_403990(v15, (void **)&v21, (size_t *)&v20) | v18;
          }
        }
        else
        {
          if ( !*v15 )
            v15 = ".";
          LOBYTE(v16) = sub_403990(v15, (void **)&v21, (size_t *)&v20);
        }
        if ( (_BYTE)v16 )
        {
          v19 = dcgettext(0LL, "generating relative path", 5);
          error(0, 36, "%s", v19);
        }
        result = v16 ^ 1;
      }
    }
  }
  return result;
}

char *__fastcall sub_403C10(char *path, __int64 a2)
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
  v3 = sub_404CA0(path);
  v4 = (char *)v3;
  result = (char *)sub_404D00(v3);
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

void __fastcall sub_403CE0(char *a1)
{
  char *v1; // rbx

  v1 = a1;
  if ( (a1 || (v1 = getenv("SIMPLE_BACKUP_SUFFIX")) != 0LL) && *v1 && (char *)sub_404CA0(v1) == v1 )
    src = v1;
  else
    src = "~";
}

char *__fastcall sub_403D40(void *a1, int a2, char a3)
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
  v3 = (const char *)sub_404CA0(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v45 = v6 + v5;
  if ( !::src )
  {
    sub_403CE0(::src);
    v7 = ::src;
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
        memcpy(&v13[v45], ::src, v59);
        goto LABEL_33;
      }
      v15 = &v13[v6];
      v16 = sub_404D00(&v13[v6]);
      if ( v14 )
        break;
      v42 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v50 = v42;
      v14 = (DIR *)sub_404B20(v13);
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
            memcpy(&v13[v45], ::src, v59);
            v53 = 1;
          }
LABEL_46:
          sub_403C10(v13, v45);
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
      if ( !(unsigned int)sub_407EA0(-100, (char *)src, v36, v35) )
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

__int64 __fastcall sub_404210(__int64 a1, __int64 a2)
{
  return (unsigned int)dword_40CEA0[sub_40A670(a1, a2, off_40CEC0, dword_40CEA0, 4LL, off_611380)];
}

char *__fastcall sub_404240(void *a1, int a2)
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

_BYTE *__fastcall sub_4042D0(void *src, __int64 a2)
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
  __off_t v26; // rsi
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
  int v61; // [rsp+38h] [rbp-D0h]
  int v62; // [rsp+3Ch] [rbp-CCh]
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
    v4 = (_BYTE *)sub_408A50(4096LL, a2);
    v8 = (unsigned __int64)(v4 + 4096);
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
        v18 = sub_408AB0(v4, v17);
        v13 = v12 - v2;
        v4 = (_BYTE *)v18;
        v8 = v18 + v17;
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
            v26 = stat_buf.st_size;
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
                v42 = sub_408A50(v41, v26);
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
                  v44 = *(v7-- - 2) == 47;
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
    else
    {
      v2 = i + 1;
      if ( v7 > v4 + 1 )
      {
        v39 = (__int64)(v7 - 1);
        if ( v4 < v7 - 1 && *(v7 - 2) != 47 )
        {
          v7 -= 2;
          if ( v4 != (_BYTE *)(v39 - 1) )
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
  char *v6; // r12
  int *v7; // rax
  int *v8; // rbp
  __int64 v9; // rax
  int v10; // eax

  v0 = stdin;
  if ( !sub_408F00(stdin) )
  {
    if ( !(unsigned int)sub_40A730(v0) )
      return sub_404A80();
    goto LABEL_6;
  }
  v10 = sub_408F30(v0, 0LL, 1LL);
  v3 = stdin;
  if ( !v10 )
  {
    v2 = sub_408EC0(stdin);
    v3 = stdin;
    if ( v2 )
    {
      sub_40A730(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_40A730(v3) )
  {
LABEL_6:
    v4 = dcgettext(0LL, "error closing file", 5);
    v5 = qword_6113F8;
    v6 = v4;
    v7 = __errno_location();
    v8 = v7;
    if ( v5 )
    {
      v9 = sub_407CD0(v5);
      error(0, *v8, "%s: %s", v9, v6);
    }
    else
    {
      error(0, *v7, "%s", v6);
    }
    sub_404A80();
    _exit(status);
  }
  return sub_404A80();
}

__int64 sub_404A80()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

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
        v5 = sub_407CD0(qword_611408);
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
  return v9;
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

_BYTE *__fastcall sub_404C40(void *src)
{
  __int64 v1; // rax
  size_t v2; // rbx
  _BYTE *v3; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // rax

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
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rax

  if ( a1 )
  {
    v3 = a3;
    v4 = (_QWORD *)sub_408A50(24LL, a2);
    *v4 = sub_408C80(a2);
    v4[1] = v3[1];
    v4[2] = *v3;
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
  __int64 v5; // [rsp+0h] [rbp-28h]
  __int64 v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]

  if ( !a1 )
    return 0;
  v3 = a3[1];
  v5 = a2;
  v6 = v3;
  v7 = *a3;
  return sub_405560(a1, &v5) != 0;
}

__int64 __fastcall sub_404E40(void *a1, void *a2)
{
  __int64 result; // rax

  result = sub_404E60(a1, a2);
  if ( !result )
    sub_408CA0();
  return result;
}

void *__fastcall sub_404E60(void *src, void *a2, _QWORD *a3)
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
  v7 = (__m128i *)sub_405000(a1, a2);
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
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_4051D0(__int64 a1, __int64 a2, char a3)
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
        if ( !v3 )
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

_QWORD *__fastcall sub_4057D0(unsigned __int64 a1, __int64 a2, unsigned __int64 (__fastcall *a3)(__int64 a1, unsigned __int64 a2), bool (__fastcall *a4)(__int64 a1, __int64 a2), __int64 a5)
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
        v12 = sub_404F40(v8);
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
      *((_QWORD *)v9 + 5) = &unk_40CFA0;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_405150(v11) )
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

void __fastcall sub_405A10(void *ptr)
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

__int64 __fastcall sub_405AF0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_404F40(a2);
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
  v14 = sub_4051D0((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_4051D0(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_4051D0(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_405AF0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_404F40(a2);
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
  v14 = sub_4051D0((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_4051D0(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_4051D0(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_405CF0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_405030(a1, a2, (__m128i **)&v26, 0);
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
        v25 = v22 >= 9.223372e18 ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_405AF0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_405030(a1, v4, (__m128i **)&v26, 0) )
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

__int64 __fastcall sub_405CF0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_405030(a1, a2, (__m128i **)&v26, 0);
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
        v25 = v22 >= 9.223372e18 ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_405AF0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_405030(a1, v4, (__m128i **)&v26, 0) )
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

__int64 __fastcall sub_405F70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h]

  v2 = a2;
  v3 = sub_405CF0(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    v2 = v5;
  return v2;
}

unsigned __int64 __fastcall sub_406190(_QWORD *a1, unsigned __int64 a2)
{
  return (a1[1] ^ (unsigned __int64)sub_40A7F0(*a1)) % a2;
}

__int64 __fastcall sub_4061D0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a1[1] != a2[1] || a1[2] != a2[2] )
    result = 0LL;
  else
    result = sub_4080F0(*a1, *a2);
  return result;
}

bool __fastcall sub_406200(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8) && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
    result = strcmp(*(const char **)a1, *(const char **)a2) == 0;
  return result;
}

void __fastcall sub_406240(void *ptr)
{
  free(*(void **)ptr);
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
  char *v6; // rbx

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
        v2 = (char *)&unk_40D026;
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
      v2 = (char *)&unk_40D02A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_406400(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_406400((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_406400((__int64)v9, v79, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_406400((__int64)v9, v10, s);
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
          return sub_406400((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40A230((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_406400((__int64)v9, v10, s);
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
      return sub_406400((__int64)v9, v10, s);
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
        a8 = sub_406300("`", v11);
        v47 = sub_406300("'", v11);
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

unsigned __int64 __fastcall sub_406400(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_406400((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_406400((__int64)v9, v79, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_406400((__int64)v9, v10, s);
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
          return sub_406400((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40A230((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_406400((__int64)v9, v10, s);
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
      return sub_406400((__int64)v9, v10, s);
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
        a8 = sub_406300("`", v11);
        v47 = sub_406300("'", v11);
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

_BYTE *__fastcall sub_407630(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // er8
  char *v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v17 = a2;
  v6 = __errno_location();
  v7 = off_611358;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_611370 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408CA0();
    v9 = 16LL * (a1 + 1);
    if ( off_611358 == &xmmword_611360 )
    {
      v7 = (__int128 *)sub_408AB0(0LL, v9);
      off_611358 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_611360);
    }
    else
    {
      off_611358 = (__int128 *)sub_408AB0(off_611358, v9);
      v7 = off_611358;
    }
    memset(&v7[dword_611370], 0, 16LL * (a1 + 1 - dword_611370));
    dword_611370 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_406400(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406400(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_407630(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // er8
  char *v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v17 = a2;
  v6 = __errno_location();
  v7 = off_611358;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_611370 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408CA0();
    v9 = 16LL * (a1 + 1);
    if ( off_611358 == &xmmword_611360 )
    {
      v7 = (__int128 *)sub_408AB0(0LL, v9);
      off_611358 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_611360);
    }
    else
    {
      off_611358 = (__int128 *)sub_408AB0(off_611358, v9);
      v7 = off_611358;
    }
    memset(&v7[dword_611370], 0, 16LL * (a1 + 1 - dword_611370));
    dword_611370 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_406400(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406400(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_407B50(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407B50(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407BC0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_407630(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_407BC0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_407630(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_407C30(int a1, char *a2)
{
  return sub_407B50(0, a1, a2);
}

_BYTE *__fastcall sub_407C50(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_611550;
  v7 = _mm_load_si128((const __m128i *)&xmmword_611520);
  v8 = _mm_load_si128((const __m128i *)&xmmword_611530);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_611540);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_407630(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_407CD0(char *a1)
{
  return sub_407C50(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407D70(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_611520);
  v7 = _mm_load_si128((const __m128i *)&xmmword_611530);
  v8 = _mm_load_si128((const __m128i *)&xmmword_611540);
  v9 = qword_611550;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_407630(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_407E60(int a1, char *a2)
{
  return sub_407630(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_611320);
}

_BYTE *__fastcall sub_407E80(char *a1)
{
  return sub_407630(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_611320);
}

__int64 __fastcall sub_407EA0(int oldfd, char *old, int newfd, char *a4, unsigned int a5)
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
  __int64 v11; // [rsp+0h] [rbp-158h]
  __int64 v12; // [rsp+8h] [rbp-150h]
  struct stat stat_buf; // [rsp+90h] [rbp-C8h]

  v2 = 0;
  v3 = sub_404CA0(a1);
  v4 = sub_404CA0(a2);
  v5 = sub_404D00(v3);
  if ( v5 == sub_404D00(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (char *)sub_404BC0(a1);
    v8 = (char *)sub_404BC0(a2);
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

__int64 __fastcall sub_408220(char *filename)
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

int __fastcall sub_408280(const char *a1)
{
  return mkdir(a1, 0x1C0u);
}

int __fastcall sub_408290(const char *a1, int *a2)
{
  int v2; // esi

  v2 = *a2;
  LOBYTE(v2) = v2 & 0x3C | 0xC2;
  return open(a1, v2, 384LL);
}

void __noreturn sub_4082B0()
{
  __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147u, "gen_tempname_len");
}

__int64 __fastcall sub_4082D0(char *s, int a2, __int64 a3, __int64 (__fastcall *a4)(char *, __int64), size_t a5)
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
    v11 = (void *)sub_40ADD0(0LL, v5);
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
            *(++v14 - 1) = byte_40DE00[sub_40AE10(v11, 61LL)];
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
          sub_40AF30(v11);
          *v7 = 17;
          return (unsigned int)-1;
        }
      }
      v15 = -1;
LABEL_12:
      v21 = v15;
      v19 = v16;
      sub_40AF30(v11);
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

__int64 __fastcall sub_408430(char *a1, int a2, int a3, unsigned int a4, size_t a5)
{
  int v6; // [rsp+Ch] [rbp-Ch]

  v6 = a3;
  if ( a4 > 2 )
    sub_4082B0();
  return sub_4082D0(a1, a2, (__int64)&v6, (__int64 (__fastcall *)(char *, __int64))off_40DDC0[a4], a5);
}

__int64 __fastcall sub_408460(char *a1, int a2, int a3, unsigned int a4)
{
  int v5; // [rsp+Ch] [rbp-Ch]

  v5 = a3;
  if ( a4 > 2 )
    sub_4082B0();
  return sub_4082D0(a1, a2, (__int64)&v5, (__int64 (__fastcall *)(char *, __int64))off_40DDC0[a4], 6uLL);
}

__int64 __fastcall sub_4084B0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbx
  char *v12; // rax
  __int64 result; // rax
  const char *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rbx
  char *v21; // rax
  __int64 v22; // r12
  __int64 v23; // rbx
  char *v24; // rax
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // rbx
  char *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // [rsp+0h] [rbp-58h]
  __int64 v34; // [rsp+8h] [rbp-50h]

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
    case 1LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v18);
    case 2LL:
      v19 = v7[1];
      v20 = *v7;
      v21 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v21, v20, v19);
    case 3LL:
      v22 = v7[1];
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23, v22);
    case 4LL:
      v25 = v7[3];
      v26 = v7[1];
      v27 = *v7;
      v28 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v25 = v7[3];
      v26 = v7[1];
      v27 = *v7;
      v28 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v28, v27, v26);
      return v25;
    case 6LL:
      v33 = v7[1];
      v29 = *v7;
      v30 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v33);
    case 7LL:
      v31 = v7[1];
      v29 = *v7;
      v33 = v31;
      v30 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v33);
    case 8LL:
      v10 = v7[1];
      v11 = *v7;
      v34 = v10;
      v12 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v12, v11, v34);
    case 9LL:
      v14 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v15 = v7[1];
      v11 = *v7;
      v34 = v15;
      goto LABEL_8;
    default:
      v14 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v32 = v7[1];
      v11 = *v7;
      v34 = v32;
LABEL_8:
      v12 = dcgettext(0LL, v14, 5);
      return __fprintf_chk(stream, 1LL, v12, v11, v34);
  }
}

__int64 __fastcall sub_4084B0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbx
  char *v12; // rax
  __int64 result; // rax
  const char *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rbx
  char *v21; // rax
  __int64 v22; // r12
  __int64 v23; // rbx
  char *v24; // rax
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // rbx
  char *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // [rsp+0h] [rbp-58h]
  __int64 v34; // [rsp+8h] [rbp-50h]

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
    case 1LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v18);
    case 2LL:
      v19 = v7[1];
      v20 = *v7;
      v21 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v21, v20, v19);
    case 3LL:
      v22 = v7[1];
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23, v22);
    case 4LL:
      v25 = v7[3];
      v26 = v7[1];
      v27 = *v7;
      v28 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v25 = v7[3];
      v26 = v7[1];
      v27 = *v7;
      v28 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v28, v27, v26);
      return v25;
    case 6LL:
      v33 = v7[1];
      v29 = *v7;
      v30 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v33);
    case 7LL:
      v31 = v7[1];
      v29 = *v7;
      v33 = v31;
      v30 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v33);
    case 8LL:
      v10 = v7[1];
      v11 = *v7;
      v34 = v10;
      v12 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v12, v11, v34);
    case 9LL:
      v14 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v15 = v7[1];
      v11 = *v7;
      v34 = v15;
      goto LABEL_8;
    default:
      v14 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v32 = v7[1];
      v11 = *v7;
      v34 = v32;
LABEL_8:
      v12 = dcgettext(0LL, v14, 5);
      return __fprintf_chk(stream, 1LL, v12, v11, v34);
  }
}

__int64 __fastcall sub_4088B0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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

__int64 __fastcall sub_408910(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
  __printf_chk(1LL, v1, &unk_40BCB5);
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

void *__fastcall sub_408AB0(void *a1, size_t a2)
{
  void *result; // rax

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
        sub_408CA0();
    }
  }
  return result;
}

void *__fastcall sub_408C50(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_408A50(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_408C80(void *src)
{
  size_t v1; // rax

  v1 = strlen((const char *)src);
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

__int64 __fastcall sub_408D80(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_611558 < 0 )
    {
      v3 = sub_408D80(a1);
      if ( v3 >= 0 && dword_611558 == -1 )
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
        dword_611558 = 1;
      }
      else
      {
        v3 = sub_408D80(a1);
        if ( v3 >= 0 )
        {
          dword_611558 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_408EC0(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
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
    if ( *(_DWORD *)a1 & 0x100 )
      result += *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 72);
  }
  return result;
}

int __fastcall sub_408F30(FILE *a1, __off_t a2, int a3)
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

char *__fastcall sub_408F90(char *a1, size_t a2)
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
    v9 = openat(v7, asc_40CE0A, 0);
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

__int64 __fastcall sub_409460(__int64 a1, int *a2)
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

__int64 __fastcall sub_409540(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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
        __fprintf_chk(stderr, 1LL, v25, v24, a9);
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
        __fprintf_chk(stderr, 1LL, v27, v26, a9);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v30 = *a2;
        v31 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v31, v30, a9);
        v32 = stderr;
        v33 = v38;
        v34 = ptr;
        v35 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v34 )
          {
            __fprintf_chk(v32, 1LL, " '%s%s'", a9, *v33);
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
        __fprintf_chk(stderr, 1LL, v29, v28, a9);
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
          __fprintf_chk(stderr, 1LL, v37, v36, a9);
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

__int64 __fastcall sub_409B60(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_409460(a2, a7);
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
        sub_409460((__int64)v11, a7);
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
            return (unsigned int)sub_409540(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_409540(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_409540(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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
        __fprintf_chk(stderr, 1LL, v44, v43, v21);
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
            __fprintf_chk(stderr, 1LL, v42, v41, v21);
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
      __fprintf_chk(stderr, 1LL, v40, v39, v21);
    }
    a7[2] = v21;
    v21 = 63;
  }
  return v21;
}

__int64 __fastcall sub_40A130(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
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

__int64 __fastcall sub_40A190(int a1, __int64 a2, char *a3)
{
  return sub_40A130(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40A1B0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40A130(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40A1D0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409B60(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40A1F0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40A130(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40A210(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409B60(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40A230(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40A790(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
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

void __fastcall sub_40A4D0(char *a1, char *a2, __int64 a3)
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

int __fastcall sub_40A550(char **a1, char *a2, size_t a3)
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
  __int64 v12; // r8
  _BYTE *v13; // rax
  __int64 v14; // r8
  char *v15; // rax

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
  return (int)v15;
}

__int64 __fastcall sub_40A670(char *a1, char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
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
  result = sub_40A3B0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40A4D0(a1, a2, result);
    sub_40A550(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_40A6E0(void *s1, __int64 *a2, char *a3, size_t a4)
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
          v1 = "%s: invalid option -- '%c'\n" + 27;
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
                v1 = "%s: invalid option -- '%c'\n" + 27;
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
            sub_40B9A0(v39);
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

void __fastcall sub_40AF10(void *ptr)
{
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
}

__int64 __fastcall sub_40AF30(void *ptr)
{
  unsigned int v1; // er12
  int *v2; // rax
  int v3; // er13
  int *v4; // rbp

  v1 = sub_40B460(*(void **)ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
  *v4 = v3;
  return v1;
}

void __fastcall __noreturn sub_40AF90(char *a1)
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

void __fastcall __noreturn sub_40AF90(char *a1)
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
    v8 = (__int64)v7[2].m128i_i64;
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
        result = sub_40B4B0(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_40B460(void *ptr)
{
  FILE *v1; // rbp
  __int64 result; // rax

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_40B9A0(v1);
  else
    result = 0LL;
  return result;
}

unsigned __int64 *__fastcall sub_40B4B0(unsigned __int64 *a1, __int64 *a2)
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

unsigned __int64 __fastcall sub_40B760(_QWORD *a1)
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

int __fastcall sub_40B9A0(FILE *stream)
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
  if ( !sub_408EC0(stream) )
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

FILE *__fastcall sub_40BA20(const char *a1, const char *a2)
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
        v3 = 0LL;
      }
    }
  }
  return v3;
}

__int64 __fastcall sub_40BAC0(char a1)
{
  return sub_408D80(a1, 0, 3LL);
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
  if ( &unk_6112E8 )
    v1 = (void *)unk_6112E8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40BB58(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_610E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
