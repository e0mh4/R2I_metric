_BOOL8 __fastcall main(int a1, char **a2, char **a3)
{
  char v3; // bl
  char v4; // r13
  int v5; // eax
  __int64 i; // rbx
  char *v7; // r13
  int v8; // eax
  char **v9; // rbp
  int v10; // er12
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // r12
  char *v14; // rdx
  int v15; // eax
  unsigned int v16; // edx
  _BOOL8 result; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  char *v20; // rbx
  __int64 v21; // r12
  char *v22; // rax
  __int64 v23; // rbp
  char *v24; // rbx
  int *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char v28; // [rsp+0h] [rbp-D8h]
  int v29; // [rsp+4h] [rbp-D4h]
  __int16 v30; // [rsp+8h] [rbp-D0h]
  char v31; // [rsp+Ah] [rbp-CEh]
  __int64 v32; // [rsp+10h] [rbp-C8h]
  bool v33; // [rsp+18h] [rbp-C0h]
  __int16 v34; // [rsp+19h] [rbp-BFh]
  struct stat stat_buf; // [rsp+20h] [rbp-B8h]

  v3 = 1;
  sub_403D10(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40B1F0(sub_4039D0);
  v28 = 0;
  v29 = 4;
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  v33 = isatty(0) != 0;
  v4 = 0;
  v34 = 0;
  while ( 1 )
  {
    v5 = sub_4093F0((unsigned int)a1, a2, "dfirvIR", &off_40BD60, 0LL);
    if ( v5 == -1 )
      break;
    if ( v5 == 105 )
      goto LABEL_29;
    if ( v5 <= 105 )
    {
      if ( v5 == 73 )
        goto LABEL_38;
      if ( v5 <= 73 )
      {
        if ( v5 == -131 )
        {
          sub_405E00((char)stdout);
          exit(0);
        }
        if ( v5 == -130 )
          sub_402450(0);
LABEL_19:
        for ( i = 1LL; ; ++i )
        {
          if ( a1 <= (int)i )
            goto LABEL_60;
          v7 = a2[i];
          if ( *v7 == 45 && v7[1] && !__lxstat(1, a2[i], &stat_buf) )
            break;
        }
        sub_4056E0(4LL, v7);
        v19 = sub_405600(1LL, 3LL, v7);
        v20 = *a2;
        v21 = v19;
        v22 = dcgettext(0LL, "Try '%s ./%s' to remove the file %s.\n", 5);
        __fprintf_chk(stderr, 1LL, v22, v20, v21);
LABEL_60:
        sub_402450(1);
      }
      switch ( v5 )
      {
        case 100:
          v31 = 1;
          break;
        case 102:
          v29 = 5;
          v4 = 0;
          v28 = 1;
          break;
        case 82:
LABEL_31:
          HIBYTE(v30) = 1;
          break;
        default:
          goto LABEL_19;
      }
    }
    else if ( v5 == 129 )
    {
      LOBYTE(v30) = 1;
    }
    else if ( v5 <= 129 )
    {
      switch ( v5 )
      {
        case 118:
          LOBYTE(v34) = 1;
          break;
        case 128:
          if ( !qword_610508 )
            goto LABEL_29;
          v8 = dword_40BCF0[sub_403900("--interactive", qword_610508, off_40BD20, dword_40BCF0, 4LL, off_610278)];
          if ( v8 == 1 )
          {
LABEL_38:
            v29 = 4;
            v4 = 1;
            v28 = 0;
          }
          else if ( v8 )
          {
            if ( v8 == 2 )
            {
LABEL_29:
              v29 = 3;
              v4 = 0;
              v28 = 0;
            }
          }
          else
          {
            v29 = 5;
            v4 = 0;
          }
          break;
        case 114:
          goto LABEL_31;
        default:
          goto LABEL_19;
      }
    }
    else if ( v5 == 131 )
    {
      v3 = 1;
    }
    else if ( v5 >= 131 )
    {
      if ( v5 != 132 )
        goto LABEL_19;
      v33 = 1;
    }
    else
    {
      if ( strcmp(a2[dword_6102FC - 1], "--no-preserve-root") )
        goto LABEL_63;
      v3 = 0;
    }
  }
  if ( dword_6102FC >= a1 )
  {
    if ( !v28 )
    {
LABEL_64:
      v27 = dcgettext(0LL, "missing operand", 5);
      error(0, 0, v27);
      goto LABEL_60;
    }
    return 0LL;
  }
  if ( HIBYTE(v30) )
  {
    if ( v3 )
    {
      v32 = sub_405950(&unk_610340);
      if ( !v32 )
      {
        v23 = sub_4056E0(4LL, "/");
        v24 = dcgettext(0LL, "failed to get attributes of %s", 5);
        v25 = __errno_location();
        error(1, *v25, v24, v23);
LABEL_63:
        v26 = dcgettext(0LL, "you may not abbreviate the --no-preserve-root option", 5);
        error(1, 0, v26);
        goto LABEL_64;
      }
    }
  }
  v9 = &a2[dword_6102FC];
  if ( !v4 )
    goto LABEL_50;
  v10 = a1 - dword_6102FC;
  v11 = a1 - dword_6102FC;
  if ( !HIBYTE(v30) )
  {
    if ( (unsigned __int64)v10 > 3 )
    {
      v12 = v10;
      v13 = qword_610368;
      v14 = dcngettext(0LL, "%s: remove %lu argument? ", "%s: remove %lu arguments? ", v12, 5);
      goto LABEL_49;
    }
    goto LABEL_50;
  }
  v18 = v10;
  v13 = qword_610368;
  v14 = dcngettext(0LL, "%s: remove %lu argument recursively? ", "%s: remove %lu arguments recursively? ", v18, 5);
LABEL_49:
  __fprintf_chk(stderr, 1LL, v14, v13, v11);
  if ( !(unsigned __int8)sub_406290() )
    return 0LL;
LABEL_50:
  v15 = sub_402F50(v9, &v28);
  v16 = v15 - 2;
  result = v15 == 4;
  if ( v16 > 2 )
    __assert_fail("VALID_STATUS (status)", "src/rm.c", 0x163u, "main");
  return result;
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

__int64 *sub_40239B()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_4023BA()
{
  return 0LL;
}

__int64 *sub_4023F1()
{
  __int64 *result; // rax

  if ( !byte_610328 )
  {
    while ( qword_610330 < (unsigned __int64)(&qword_60FE48 - qword_60FE40 - 1) )
      ((void (*)(void))qword_60FE40[++qword_610330])();
    result = sub_40239B();
    byte_610328 = 1;
  }
  return result;
}

__int64 sub_402448()
{
  return sub_4023BA();
}

void __fastcall __noreturn sub_402450(int status)
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
  __int64 v19; // rbp
  char *v20; // rax
  FILE *v21; // rbp
  char *v22; // rax
  void **v23; // rax
  void *v24; // rbp
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  void *v33; // [rsp+0h] [rbp-88h]
  const char *v34; // [rsp+8h] [rbp-80h]
  const char *v35; // [rsp+10h] [rbp-78h]
  const char *v36; // [rsp+18h] [rbp-70h]
  const char *v37; // [rsp+20h] [rbp-68h]
  const char *v38; // [rsp+28h] [rbp-60h]
  const char *v39; // [rsp+30h] [rbp-58h]
  const char *v40; // [rsp+38h] [rbp-50h]
  const char *v41; // [rsp+40h] [rbp-48h]
  const char *v42; // [rsp+48h] [rbp-40h]
  const char *v43; // [rsp+50h] [rbp-38h]
  const char *v44; // [rsp+58h] [rbp-30h]
  __int64 v45; // [rsp+60h] [rbp-28h]
  __int64 v46; // [rsp+68h] [rbp-20h]

  v1 = qword_610368;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1, v3);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v4, v1);
  v5 = stdout;
  v6 = dcgettext(
         0LL,
         "Remove (unlink) the FILE(s).\n"
         "\n"
         "  -f, --force           ignore nonexistent files and arguments, never prompt\n"
         "  -i                    prompt before every removal\n",
         5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(
         0LL,
         "  -I                    prompt once before removing more than three files, or\n"
         "                          when removing recursively; less intrusive than -i,\n"
         "                          while still giving protection against most mistakes\n"
         "      --interactive[=WHEN]  prompt according to WHEN: never, once (-I), or\n"
         "                          always (-i); without WHEN, prompt always\n",
         5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "      --one-file-system  when removing a hierarchy recursively, skip any\n"
          "                          directory that is on a file system different from\n"
          "                          that of the corresponding command line argument\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "      --no-preserve-root  do not treat '/' specially\n"
          "      --preserve-root   do not remove '/' (default)\n"
          "  -r, -R, --recursive   remove directories and their contents recursively\n"
          "  -d, --dir             remove empty directories\n"
          "  -v, --verbose         explain what is being done\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "\n"
          "By default, rm does not remove directories.  Use the --recursive (-r or -R)\n"
          "option to remove each listed directory, too, along with all of its contents.\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = qword_610368;
  v20 = dcgettext(
          0LL,
          "\n"
          "To remove a file whose name starts with a '-', for example '-foo',\n"
          "use one of these commands:\n"
          "  %s -- -foo\n"
          "\n"
          "  %s ./-foo\n",
          5);
  __printf_chk(1LL, v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "\n"
          "Note that if you use rm to remove a file, it might be possible to recover\n"
          "some of its contents, given sufficient expertise and/or time.  For greater\n"
          "assurance that the contents are truly unrecoverable, consider using shred.\n",
          5);
  fputs_unlocked(v22, v21);
  v33 = &unk_40B247;
  v23 = &v33;
  v34 = "test invocation";
  v35 = "coreutils";
  v36 = "Multi-call invocation";
  v37 = "sha224sum";
  v38 = "sha2 utilities";
  v39 = "sha256sum";
  v40 = "sha2 utilities";
  v41 = "sha384sum";
  v42 = "sha2 utilities";
  v43 = "sha512sum";
  v44 = "sha2 utilities";
  v45 = 0LL;
  v46 = 0LL;
  do
    v23 += 2;
  while ( *v23 && strcmp((const char *)&unk_40B244, (const char *)*v23) );
  v24 = v23[1];
  if ( v24 )
  {
    v25 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v25, &unk_40B2BD);
    v26 = setlocale(5, 0LL);
    if ( !v26 || !strncmp(v26, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v29 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v29, &unk_40B2BD);
    v30 = setlocale(5, 0LL);
    if ( !v30 || !strncmp(v30, "en_", 3uLL) )
    {
      v24 = &unk_40B244;
      v31 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v31, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v24 = &unk_40B244;
  }
  v32 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v32, &unk_40B244);
LABEL_10:
  v27 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v27, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v28 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v28, v24);
LABEL_3:
  exit(status);
}

__int64 __fastcall sub_402820(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  char v4; // r13
  _BYTE *v5; // r12
  int *v6; // rax
  unsigned __int64 v7; // rdx
  int *v8; // r13
  __int64 result; // rax
  __int64 v10; // rbp
  char *v11; // rax
  _QWORD *i; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  char *v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-B8h]

  v4 = a4;
  v5 = a3;
  if ( unlinkat(*(_DWORD *)(a1 + 44), *(const char **)(a2 + 48), (a4 != 0) << 9) )
  {
    v6 = __errno_location();
    v7 = (unsigned int)*v6;
    v8 = v6;
    if ( (_DWORD)v7 == 30 )
    {
      if ( !__fxstatat(1, *(_DWORD *)(a1 + 44), *(const char **)(a2 + 48), (struct stat *)&v17, 256)
        || (v7 = (unsigned int)*v8, (_DWORD)v7 != 2) )
      {
        *v8 = 30;
        goto LABEL_9;
      }
      result = 2LL;
      if ( *v5 )
        return result;
      if ( *(_WORD *)(a2 + 112) != 4 )
        goto LABEL_9;
      goto LABEL_18;
    }
    if ( *v5 )
    {
      result = 2LL;
      if ( (_DWORD)v7 == 20 )
        return result;
      if ( (int)v7 <= 20 )
      {
        if ( (_DWORD)v7 == 2 )
          return result;
        if ( *(_WORD *)(a2 + 112) != 4 )
          goto LABEL_9;
LABEL_17:
        if ( (unsigned int)v7 > 0x27 )
          goto LABEL_9;
LABEL_18:
        v13 = 549759090688LL;
        if ( _bittest64(&v13, v7) )
        {
          v14 = *(_DWORD *)(a2 + 64);
          if ( v14 == 1 || v14 == 13 )
            *v8 = v14;
        }
        goto LABEL_9;
      }
      if ( (_DWORD)v7 == 22 || (_DWORD)v7 == 84 )
        return result;
    }
    if ( *(_WORD *)(a2 + 112) != 4 )
    {
LABEL_9:
      v10 = sub_4056E0(4LL, *(_QWORD *)(a2 + 56));
      v11 = dcgettext(0LL, "cannot remove %s", 5);
      error(0, *v8, v11, v10);
      for ( i = *(_QWORD **)(a2 + 8); i[11] >= 0LL; i = (_QWORD *)i[1] )
      {
        if ( i[4] )
          break;
        i[4] = 1LL;
      }
      return 4LL;
    }
    goto LABEL_17;
  }
  result = 2LL;
  if ( v5[25] )
  {
    v15 = sub_4056E0(4LL, *(_QWORD *)(a2 + 56));
    if ( v4 )
      v16 = dcgettext(0LL, "removed directory %s\n", 5);
    else
      v16 = dcgettext(0LL, "removed %s\n", 5);
    __printf_chk(1LL, v16, v15);
    result = 2LL;
  }
  return result;
}

__int64 __fastcall sub_402A30(int fildes, char *filename, struct stat *stat_buf)
{
  __off_t v3; // rax
  struct stat *v4; // rbx
  int *v6; // rax
  __ino_t v7; // rcx
  int v8; // edx

  v3 = stat_buf->st_size;
  v4 = stat_buf;
  if ( v3 == -1 )
  {
    if ( __fxstatat(1, fildes, filename, stat_buf, 256) )
    {
      v4->st_size = -2LL;
      v6 = __errno_location();
      v7 = *v6;
      v4->st_ino = v7;
      v8 = v7;
      goto LABEL_6;
    }
    v3 = v4->st_size;
  }
  if ( v3 >= 0 )
    return 0LL;
  v6 = __errno_location();
  v8 = v4->st_ino;
LABEL_6:
  *v6 = v8;
  return 0xFFFFFFFFLL;
}

__int64 __fastcall sub_402AA0(__int64 a1, _QWORD *a2, unsigned __int8 a3, __int64 a4, int a5, int *a6)
{
  __int64 v6; // rbp
  int v7; // edi
  char *v8; // r13
  int *v9; // r12
  int v10; // ebx
  int v11; // eax
  DIR *v12; // r14
  struct dirent *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // er12
  int v17; // er15
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r12
  char *v21; // rax
  __int64 v23; // rbx
  char *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rbp
  char *v27; // rdx
  char v28; // al
  int v29; // eax
  char *v30; // rbp
  int *v31; // rax
  __int64 v32; // [rsp+8h] [rbp-E0h]
  int v33; // [rsp+14h] [rbp-D4h]
  int v34; // [rsp+18h] [rbp-D0h]
  int *v35; // [rsp+18h] [rbp-D0h]
  int v36; // [rsp+18h] [rbp-D0h]
  struct stat stat_buf; // [rsp+20h] [rbp-C8h]

  v6 = a4;
  v7 = *(_DWORD *)(a1 + 44);
  v33 = a5;
  v8 = (char *)a2[6];
  v32 = a2[7];
  if ( a6 )
  {
    *a6 = 2;
    v9 = a6;
    stat_buf.st_size = -1LL;
    v10 = 4 * (a3 != 0);
    v11 = openat(v7, v8, 198912);
    if ( v11 < 0 )
      goto LABEL_8;
    v34 = v11;
    v12 = fdopendir(v11);
    if ( !v12 )
    {
      close(v34);
      v14 = 3;
      goto LABEL_9;
    }
    v35 = __errno_location();
    *v35 = 0;
    while ( 1 )
    {
      v13 = readdir(v12);
      if ( !v13 )
        break;
      if ( v13->d_name[0] == 46 )
      {
        v28 = v13->d_name[(v13->d_name[1] == 46) + 1];
        if ( !v28 || v28 == 47 )
          continue;
      }
      closedir(v12);
      goto LABEL_8;
    }
    v36 = *v35;
    closedir(v12);
    if ( v36 )
    {
LABEL_8:
      LOBYTE(v12) = 0;
      v14 = 3;
    }
    else
    {
      LOBYTE(v12) = 1;
      v14 = 4;
    }
LABEL_9:
    *v9 = v14;
    goto LABEL_10;
  }
  LOBYTE(v12) = a3;
  stat_buf.st_size = -1LL;
  v10 = a3 >= 1u ? 4 : 0;
  if ( a3 )
    LOBYTE(v12) = 0;
LABEL_10:
  if ( a2[4] )
    return 3LL;
  v15 = *(_DWORD *)(v6 + 4);
  if ( v15 == 5 )
    return 2LL;
  if ( *(_BYTE *)v6 )
    goto LABEL_30;
  if ( v15 != 3 && !*(_BYTE *)(v6 + 24) )
    return 2LL;
  if ( (unsigned __int8)sub_405F40() )
    goto LABEL_67;
  if ( (unsigned int)sub_402A30(v7, v8, &stat_buf) )
  {
LABEL_56:
    v16 = *__errno_location();
    goto LABEL_57;
  }
  if ( (stat_buf.st_mode & 0xF000) == 40960 || !faccessat(v7, v8, 2, 512) )
  {
LABEL_67:
    v15 = *(_DWORD *)(v6 + 4);
LABEL_30:
    if ( v15 != 3 )
      return 2LL;
    v17 = 0;
    goto LABEL_32;
  }
  v16 = *__errno_location();
  if ( v16 != 13 )
  {
LABEL_57:
    v23 = sub_4056E0(4LL, v32);
    goto LABEL_38;
  }
  v17 = 1;
LABEL_32:
  if ( v10 )
  {
    if ( v10 == 4 )
      goto LABEL_34;
LABEL_55:
    v25 = sub_4056E0(4LL, v32);
    goto LABEL_21;
  }
  if ( (unsigned int)sub_402A30(v7, v8, &stat_buf) )
    goto LABEL_56;
  v29 = stat_buf.st_mode & 0xF000;
  if ( v29 == 40960 )
  {
    if ( *(_DWORD *)(v6 + 4) != 3 )
      return 2LL;
    goto LABEL_55;
  }
  if ( v29 != 0x4000 )
    goto LABEL_55;
LABEL_34:
  if ( !*(_BYTE *)(v6 + 9) )
  {
    if ( !*(_BYTE *)(v6 + 10) || !(_BYTE)v12 )
    {
      v16 = 21;
      v23 = sub_4056E0(4LL, v32);
LABEL_38:
      v24 = dcgettext(0LL, "cannot remove %s", 5);
      error(0, v16, v24, v23);
      return 4LL;
    }
    goto LABEL_55;
  }
  v25 = sub_4056E0(4LL, v32);
  if ( v33 == 2 && !(_BYTE)v12 )
  {
    v26 = qword_610368;
    if ( v17 )
      v27 = dcgettext(0LL, "%s: descend into write-protected directory %s? ", 5);
    else
      v27 = dcgettext(0LL, "%s: descend into directory %s? ", 5);
    __fprintf_chk(stderr, 1LL, v27, v26, v25);
LABEL_25:
    if ( (unsigned __int8)sub_406290() )
      return 2LL;
    return 3LL;
  }
LABEL_21:
  if ( !(unsigned int)sub_402A30(v7, v8, &stat_buf) )
  {
    v18 = sub_403C20(&stat_buf);
    v19 = qword_610368;
    v20 = v18;
    if ( v17 )
      v21 = dcgettext(0LL, "%s: remove write-protected %s %s? ", 5);
    else
      v21 = dcgettext(0LL, "%s: remove %s %s? ", 5);
    __fprintf_chk(stderr, 1LL, v21, v19, v20);
    goto LABEL_25;
  }
  v30 = dcgettext(0LL, "cannot remove %s", 5);
  v31 = __errno_location();
  error(0, *v31, v30, v25);
  return 4LL;
}

__int64 __fastcall sub_402F50(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // er12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int16 v7; // ax
  __int64 v8; // r12
  char *v9; // rax
  int v10; // esi
  __int64 v11; // rcx
  const char *v12; // rdx
  int *v13; // rbx
  __int64 result; // rax
  bool v15; // r15
  int v16; // er14
  __int64 v17; // r12
  char *v18; // rax
  int v19; // eax
  int v20; // er14
  DIR *v21; // r15
  int *v22; // rax
  int *v23; // r14
  struct dirent *v24; // rax
  int v25; // er12
  int v26; // er14
  _BYTE *v27; // rax
  _QWORD *v28; // rax
  _QWORD *j; // rax
  __int64 v30; // r14
  char *v31; // rax
  _QWORD *i; // rax
  char v33; // al
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 v36; // r12
  char *v37; // rax
  char v38; // al
  __int64 v39; // r12
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  _QWORD *k; // rax
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // rax
  unsigned int v48; // ebx
  __int64 v49; // rbp
  char *v50; // rax
  __int64 v51; // r14
  __int64 v52; // r12
  char *v53; // rax
  int v54; // [rsp+Ch] [rbp-3Ch]

  if ( !*a1 )
    return 2;
  v2 = a2;
  v3 = 2;
  v4 = sub_406210(a1, *(_BYTE *)(a2 + 8) < 1u ? 536 : 600, 0LL);
LABEL_3:
  while ( 1 )
  {
    v5 = fts_read(v4);
    v6 = v5;
    if ( !v5 )
      break;
    while ( 2 )
    {
      v7 = *(_WORD *)(v5 + 112);
      switch ( v7 )
      {
        case 1:
          if ( *(_BYTE *)(v2 + 9) )
            goto LABEL_35;
          if ( !*(_BYTE *)(v2 + 10) )
            goto LABEL_48;
          v19 = openat(*(_DWORD *)(v4 + 44), *(const char **)(v6 + 48), 198912);
          v20 = v19;
          if ( v19 < 0 )
            goto LABEL_32;
          v21 = fdopendir(v19);
          if ( !v21 )
          {
            close(v20);
LABEL_32:
            if ( *(_BYTE *)(v2 + 10) )
              v25 = 39;
            else
LABEL_48:
              v25 = 21;
            v30 = sub_4056E0(4LL, *(_QWORD *)(v6 + 56));
            v31 = dcgettext(0LL, "cannot remove %s", 5);
            error(0, v25, v31, v30);
            for ( i = *(_QWORD **)(v6 + 8); i[11] >= 0LL; i = (_QWORD *)i[1] )
            {
              if ( i[4] )
                break;
              i[4] = 1LL;
            }
            goto LABEL_7;
          }
          v22 = __errno_location();
          *v22 = 0;
          v23 = v22;
          while ( 1 )
          {
            v24 = readdir(v21);
            if ( !v24 )
              break;
            if ( v24->d_name[0] == 46 )
            {
              v38 = v24->d_name[(v24->d_name[1] == 46) + 1];
              if ( !v38 || v38 == 47 )
                continue;
            }
            closedir(v21);
            goto LABEL_32;
          }
          v26 = *v23;
          closedir(v21);
          if ( v26 )
            goto LABEL_32;
LABEL_35:
          if ( *(_QWORD *)(v6 + 88) )
            goto LABEL_39;
          v27 = (_BYTE *)sub_403B90(*(_QWORD *)(v6 + 48));
          if ( *v27 == 46 )
          {
            v33 = v27[(v27[1] == 46) + 1];
            if ( !v33 || v33 == 47 )
            {
              v34 = sub_405600(2LL, 4LL, *(_QWORD *)(v6 + 56));
              v35 = sub_405600(1LL, 4LL, "..");
              v36 = sub_405600(0LL, 4LL, ".");
              v37 = dcgettext(0LL, "refusing to remove %s or %s directory: skipping %s", 5);
              error(0, 0, v37, v36, v35, v34);
LABEL_7:
              v3 = 4;
              fts_set(v4, v6, 4LL);
              fts_read(v4);
              v5 = fts_read(v4);
              v6 = v5;
              if ( !v5 )
                goto LABEL_8;
              continue;
            }
          }
          v28 = *(_QWORD **)(v2 + 16);
          if ( v28 && *(_QWORD *)(v6 + 128) == *v28 && *(_QWORD *)(v6 + 120) == v28[1] )
          {
            if ( !strcmp(*(const char **)(v6 + 56), "/") )
            {
              v39 = sub_4056E0(4LL, *(_QWORD *)(v6 + 56));
              v40 = dcgettext(0LL, "it is dangerous to operate recursively on %s", 5);
              error(0, 0, v40, v39);
            }
            else
            {
              v51 = sub_405600(1LL, 4LL, "/");
              v52 = sub_405600(0LL, 4LL, *(_QWORD *)(v6 + 56));
              v53 = dcgettext(0LL, "it is dangerous to operate recursively on %s (same as %s)", 5);
              error(0, 0, v53, v52, v51);
            }
            v41 = dcgettext(0LL, "use --no-preserve-root to override this failsafe", 5);
            error(0, 0, v41);
            goto LABEL_7;
          }
LABEL_39:
          v16 = sub_402AA0(v4, (_QWORD *)v6, 1u, v2, 2, &v54);
          if ( v16 != 2
            || v54 == 4 && (v16 = sub_402820(v4, v6, (_BYTE *)v2, 1), fts_set(v4, v6, 4LL), fts_read(v4), v16 != 2) )
          {
            for ( j = *(_QWORD **)(v6 + 8); j[11] >= 0LL; j = (_QWORD *)j[1] )
            {
              if ( j[4] )
                break;
              j[4] = 1LL;
            }
            fts_set(v4, v6, 4LL);
            fts_read(v4);
LABEL_17:
            if ( (unsigned int)(v16 - 2) > 2 )
              __assert_fail("VALID_STATUS (s)", "src/remove.c", 0x23Eu, "rm");
            if ( v16 == 4 )
            {
              v3 = 4;
            }
            else if ( v16 == 3 && v3 == 2 )
            {
              v3 = 3;
            }
          }
          break;
        case 2:
          v17 = sub_4057B0(0LL, 3LL, *(_QWORD *)(v6 + 56));
          v18 = dcgettext(
                  0LL,
                  "WARNING: Circular directory structure.\n"
                  "This almost certainly means that you have a corrupted file system.\n"
                  "NOTIFY YOUR SYSTEM MANAGER.\n"
                  "The following directory is part of the cycle:\n"
                  "  %s\n",
                  5);
          v11 = v17;
          v10 = 0;
          v12 = v18;
          goto LABEL_6;
        case 3:
        case 4:
        case 6:
        case 8:
        case 10:
        case 11:
        case 12:
        case 13:
          if ( v7 != 6
            || !*(_BYTE *)(v2 + 8)
            || *(_QWORD *)(v6 + 88) <= 0LL
            || *(_QWORD *)(v6 + 120) == *(_QWORD *)(v4 + 24) )
          {
            v15 = (v7 & 0xFFFD) == 4;
            v16 = sub_402AA0(v4, (_QWORD *)v6, v15, v2, 3, 0LL);
            if ( v16 == 2 )
              v16 = sub_402820(v4, v6, (_BYTE *)v2, v15);
            goto LABEL_17;
          }
          for ( k = *(_QWORD **)(v6 + 8); k[11] >= 0LL; k = (_QWORD *)k[1] )
          {
            if ( k[4] )
              break;
            k[4] = 1LL;
          }
          v3 = 4;
          v45 = sub_4056E0(4LL, *(_QWORD *)(v6 + 56));
          v46 = dcgettext(0LL, "skipping %s, since it's on a different device", 5);
          error(0, 0, v46, v45);
          goto LABEL_3;
        case 7:
          v8 = sub_4057B0(0LL, 3LL, *(_QWORD *)(v6 + 56));
          v9 = dcgettext(0LL, "traversal failed: %s", 5);
          v10 = *(_DWORD *)(v6 + 64);
          v11 = v8;
          v12 = v9;
LABEL_6:
          error(0, v10, v12, v11);
          goto LABEL_7;
        default:
          v47 = sub_4057B0(0LL, 3LL, *(_QWORD *)(v6 + 56));
          v48 = *(unsigned __int16 *)(v6 + 112);
          v49 = v47;
          v50 = dcgettext(0LL, "unexpected failure: fts_info=%d: %s\nplease report to %s", 5);
          error(0, 0, v50, v48, v49, "bug-coreutils@gnu.org");
          abort();
          return result;
      }
      break;
    }
  }
LABEL_8:
  v13 = __errno_location();
  if ( *v13 )
  {
    v3 = 4;
    v42 = dcgettext(0LL, "fts_read failed", 5);
    error(0, *v13, v42);
    if ( !(unsigned int)fts_close((void *)v4) )
      return v3;
LABEL_65:
    v3 = 4;
    v43 = dcgettext(0LL, "fts_close failed", 5);
    error(0, *v13, v43);
    return v3;
  }
  if ( (unsigned int)fts_close((void *)v4) )
    goto LABEL_65;
  return v3;
}

void __noreturn sub_403630()
{
  sub_402450(1);
}

__int64 __fastcall sub_403640(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_403760(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_405910(1LL, a1);
  v5 = sub_405600(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_4037E0(__int64 *a1, char *a2, size_t a3)
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
  __int64 v12; // r8
  __int64 v13; // rax
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
      v11 = sub_405930(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11, v12);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v13 = sub_405930(i);
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

__int64 __fastcall sub_403900(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
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
  result = sub_403640(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_403760(a1, (__int64)a2, result);
    sub_4037E0(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_403970(void *s1, __int64 *a2, char *a3, size_t a4)
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

__int64 sub_4039D0()
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
  if ( !sub_406340(stdin) )
  {
    if ( !(unsigned int)sub_4094F0(v0) )
      return sub_403AF0();
    goto LABEL_6;
  }
  v10 = sub_406370(v0, 0LL, 1LL);
  v3 = stdin;
  if ( !v10 )
  {
    v2 = sub_406300(stdin);
    v3 = stdin;
    if ( v2 )
    {
      sub_4094F0(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_4094F0(v3) )
  {
LABEL_6:
    v4 = dcgettext(0LL, "error closing file", 5);
    v5 = qword_610350;
    v6 = v4;
    v7 = __errno_location();
    v8 = v7;
    if ( v5 )
    {
      v9 = sub_405780(v5);
      error(0, *v8, "%s: %s", v9, v6);
    }
    else
    {
      error(0, *v7, "%s", v6);
    }
    sub_403AF0();
    _exit(status);
  }
  return sub_403AF0();
}

__int64 sub_403AF0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_4094F0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_610358 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_610360 )
      {
        v5 = sub_405780(qword_610360);
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
  result = sub_4094F0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

_BYTE *__fastcall sub_403B90(_BYTE *a1)
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

char *__fastcall sub_403C20(__int64 a1)
{
  int v1; // eax
  char *result; // rax

  v1 = *(_DWORD *)(a1 + 24) & 0xF000;
  switch ( v1 )
  {
    case 32768:
      if ( *(_QWORD *)(a1 + 48) )
        result = dcgettext(0LL, "regular file", 5);
      else
        result = dcgettext(0LL, "regular empty file", 5);
      break;
    case 16384:
      result = dcgettext(0LL, "directory", 5);
      break;
    case 40960:
      result = dcgettext(0LL, "symbolic link", 5);
      break;
    case 24576:
      result = dcgettext(0LL, "block special file", 5);
      break;
    case 8192:
      result = dcgettext(0LL, "character special file", 5);
      break;
    case 4096:
      result = dcgettext(0LL, "fifo", 5);
      break;
    case 49152:
      result = dcgettext(0LL, "socket", 5);
      break;
    default:
      result = dcgettext(0LL, "weird file", 5);
      break;
  }
  return result;
}

char *__fastcall sub_403D10(const char *a1)
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
  qword_610368 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_403DB0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40A9A0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40C3E1;
      if ( !v5 )
        v2 = (char *)&unk_40C3D6;
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
    v2 = (char *)&unk_40C3DD;
    if ( !v5 )
      v2 = (char *)&unk_40C3DA;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_403EB0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_403EB0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_403EB0((__int64)v9, v79, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
          return sub_403EB0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_409470((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_403EB0((__int64)v9, v10, s);
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
      return sub_403EB0((__int64)v9, v10, s);
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
        a8 = sub_403DB0("`", v11);
        v47 = sub_403DB0("'", v11);
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

unsigned __int64 __fastcall sub_403EB0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_403EB0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_403EB0((__int64)v9, v79, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
          return sub_403EB0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_409470((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_403EB0((__int64)v9, v10, s);
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
      return sub_403EB0((__int64)v9, v10, s);
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
        a8 = sub_403DB0("`", v11);
        v47 = sub_403DB0("'", v11);
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

_BYTE *__fastcall sub_4050E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6102D8;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6102F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4061D0();
    v9 = 16LL * (a1 + 1);
    if ( off_6102D8 == &xmmword_6102E0 )
    {
      v7 = (__int128 *)sub_405FE0(0LL, v9);
      off_6102D8 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      off_6102D8 = (__int128 *)sub_405FE0(off_6102D8, v9);
      v7 = off_6102D8;
    }
    memset(&v7[dword_6102F0], 0, 16LL * (a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_403EB0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_610380 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_405F80(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_403EB0(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_4050E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6102D8;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6102F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4061D0();
    v9 = 16LL * (a1 + 1);
    if ( off_6102D8 == &xmmword_6102E0 )
    {
      v7 = (__int128 *)sub_405FE0(0LL, v9);
      off_6102D8 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      off_6102D8 = (__int128 *)sub_405FE0(off_6102D8, v9);
      v7 = off_6102D8;
    }
    memset(&v7[dword_6102F0], 0, 16LL * (a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_403EB0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_610380 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_405F80(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_403EB0(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_405600(int a1, int a2, char *a3)
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
  return sub_4050E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405600(int a1, int a2, char *a3)
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
  return sub_4050E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405670(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_4050E0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_405670(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_4050E0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_4056E0(int a1, char *a2)
{
  return sub_405600(0, a1, a2);
}

_BYTE *__fastcall sub_405700(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_6104B0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_610480);
  v8 = _mm_load_si128((const __m128i *)&xmmword_610490);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_6104A0);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_4050E0(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_405780(char *a1)
{
  return sub_405700(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4057B0(int a1, int a2, char *a3)
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
  return sub_4050E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4057B0(int a1, int a2, char *a3)
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
  return sub_4050E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405820(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_610480);
  v7 = _mm_load_si128((const __m128i *)&xmmword_610490);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6104A0);
  v9 = qword_6104B0;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_4050E0(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_405910(int a1, char *a2)
{
  return sub_4050E0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

_BYTE *__fastcall sub_405930(char *a1)
{
  return sub_4050E0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

_QWORD *__fastcall sub_405950(_QWORD *a1)
{
  __int64 v2; // [rsp+0h] [rbp-98h]
  __int64 v3; // [rsp+8h] [rbp-90h]

  if ( __lxstat(1, "/", (struct stat *)&v2) )
    return 0LL;
  *a1 = v3;
  a1[1] = v2;
  return a1;
}

__int64 __fastcall sub_4059A0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4059A0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_405DA0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_4059A0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_4059A0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_405E00(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4059A0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_4059A0(a1, a2, a3, a4, v15, i);
}

int sub_405EC0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40B2BD);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

char sub_405F40()
{
  char result; // al
  __uid_t v1; // eax

  if ( byte_6104B9 )
    return byte_6104B8;
  v1 = geteuid();
  byte_6104B9 = 1;
  result = v1 == 0;
  byte_6104B8 = result;
  return result;
}

void *__fastcall sub_405F80(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_4061D0();
  }
  return result;
}

void *__fastcall sub_405FE0(void *a1, size_t a2)
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
        sub_4061D0();
    }
  }
  return result;
}

void *__fastcall sub_406180(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_405F80(n);
  return memcpy(v2, src, n);
}

void __noreturn sub_4061D0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_406210(__int64 a1, int a2)
{
  __int64 result; // rax

  result = fts_open(a1, a2 | 0x200u);
  if ( !result )
  {
    if ( *__errno_location() != 22 )
      sub_4061D0();
    __assert_fail("errno != EINVAL", "lib/xfts.c", 0x29u, "xfts_open");
  }
  return result;
}

__int64 sub_406290()
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

int __fastcall sub_406300(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_406370(stream, 0LL, 1LL);
  return fflush(stream);
}

__int64 __fastcall sub_406340(__int64 a1)
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

int __fastcall sub_406370(FILE *a1, __off_t a2, int a3)
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

bool __fastcall sub_4063D0(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( a1[1] == a2[1] )
    result = *a1 == *a2;
  return result;
}

unsigned __int64 __fastcall sub_4063F0(__int64 a1, unsigned __int64 a2)
{
  return *(_QWORD *)(a1 + 8) % a2;
}

unsigned __int64 __fastcall sub_406400(_QWORD *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_406410(_QWORD *a1, _QWORD *a2)
{
  return *a1 == *a2;
}

__int64 __fastcall sub_406420(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 128LL);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 128LL) >= v3 )
    result = *(_QWORD *)(*(_QWORD *)a1 + 128LL) > v3;
  return result;
}

__int64 __fastcall sub_406450(__int64 a1, __int64 a2, char a3)
{
  struct stat *v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  bool v6; // zf
  const char *v7; // rsi
  int *v8; // rax
  int *v9; // r12
  int v10; // eax
  __int64 result; // rax
  int v12; // eax
  unsigned __int64 v13; // rax

  v3 = (struct stat *)(a2 + 120);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a2 + 88) == 0LL;
  v7 = *(const char **)(a2 + 48);
  if ( v6 && v5 & 1 || v5 & 2 || a3 )
  {
    if ( !__xstat(1, v7, v3) )
      goto LABEL_10;
    v8 = __errno_location();
    v9 = v8;
    v10 = *v8;
    if ( v10 == 2 )
    {
      if ( !__lxstat(1, *(const char **)(v4 + 48), v3) )
      {
        *v9 = 0;
        return 13LL;
      }
      v10 = *v9;
    }
LABEL_15:
    *(_DWORD *)(v4 + 64) = v10;
    *(_QWORD *)(v4 + 120) = 0LL;
    v3->__unused[2] = 0LL;
    memset(
      (void *)((unsigned __int64)&v3->st_ino & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v3 - (((_DWORD)v3 + 8) & 0xFFFFFFF8) + 144) >> 3));
    return 10LL;
  }
  if ( __fxstatat(1, *(_DWORD *)(a1 + 44), v7, v3, 256) )
  {
    v10 = *__errno_location();
    goto LABEL_15;
  }
LABEL_10:
  v12 = *(_DWORD *)(v4 + 144) & 0xF000;
  if ( v12 == 0x4000 )
  {
    v13 = *(_QWORD *)(v4 + 136);
    if ( v13 <= 1 || *(_QWORD *)(v4 + 88) <= 0LL )
    {
      v13 = -1LL;
    }
    else if ( !(*(_BYTE *)(a1 + 72) & 0x20) )
    {
      v13 -= 2LL;
    }
    v6 = *(_BYTE *)(v4 + 264) == 46;
    *(_QWORD *)(v4 + 104) = v13;
    result = 1LL;
    if ( v6 && (!*(_BYTE *)(v4 + 265) || (*(_DWORD *)(v4 + 264) & 0xFFFF00) == 11776) )
      result = *(_QWORD *)(v4 + 88) < 1uLL ? 1 : 5;
  }
  else if ( v12 == 40960 )
  {
    result = 12LL;
  }
  else
  {
    result = 5 * (unsigned int)(v12 == 0x8000) + 3;
  }
  return result;
}

__int64 __fastcall sub_406600(__int64 a1, __int64 a2, size_t a3)
{
  size_t v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rbx
  int (*v6)(const void *, const void *); // r13
  void *v7; // rdi
  void *v8; // rax
  _QWORD *v9; // rdx
  __int64 *v10; // r8
  __int64 result; // rax
  __int64 *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = *(int (**)(const void *, const void *))(a1 + 64);
  v7 = *(void **)(a1 + 16);
  if ( *(_QWORD *)(v4 + 56) >= a3 )
    goto LABEL_5;
  *(_QWORD *)(v4 + 56) = a3 + 40;
  if ( a3 + 40 > 0x1FFFFFFFFFFFFFFFLL )
  {
LABEL_14:
    free(v7);
    *(_QWORD *)(v4 + 16) = 0LL;
    result = a2;
    *(_QWORD *)(v4 + 56) = 0LL;
    return result;
  }
  v8 = realloc(v7, 8 * (a3 + 40));
  v7 = v8;
  if ( !v8 )
  {
    v7 = *(void **)(v4 + 16);
    goto LABEL_14;
  }
  *(_QWORD *)(v4 + 16) = v8;
LABEL_5:
  v9 = v7;
  if ( a2 )
  {
    do
    {
      ++v9;
      *(v9 - 1) = v5;
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 );
  }
  qsort(v7, v3, 8uLL, v6);
  v10 = *(__int64 **)(v4 + 16);
  result = *v10;
  v12 = *(__int64 **)(v4 + 16);
  v13 = *v10;
  v14 = v3 - 1;
  if ( v3 == 1 )
  {
    v16 = *v10;
  }
  else
  {
    while ( 1 )
    {
      v15 = v12[1];
      ++v12;
      *(_QWORD *)(v13 + 16) = v15;
      if ( !--v14 )
        break;
      v13 = *v12;
    }
    v16 = v10[v3 - 1];
  }
  *(_QWORD *)(v16 + 16) = 0LL;
  return result;
}

char *__fastcall sub_406700(__int64 a1, const void *a2, size_t a3)
{
  size_t v3; // rbp
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rax

  v3 = a3;
  v4 = (char *)malloc((a3 + 272) & 0xFFFFFFFFFFFFFFF8LL);
  v5 = v4;
  if ( v4 )
  {
    memcpy(v4 + 264, a2, v3);
    v6 = *(_QWORD *)(a1 + 32);
    v5[v3 + 264] = 0;
    *((_QWORD *)v5 + 12) = v3;
    *((_QWORD *)v5 + 10) = a1;
    *((_QWORD *)v5 + 7) = v6;
    *((_DWORD *)v5 + 16) = 0;
    *((_QWORD *)v5 + 3) = 0LL;
    *(_DWORD *)(v5 + 114) = 196608;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
  }
  return v5;
}

void __fastcall sub_406790(void *ptr)
{
  void *v1; // rbx
  DIR *v2; // rdi
  void *v3; // rbp
  void *v4; // rdi

  if ( ptr )
  {
    v1 = ptr;
    do
    {
      v2 = (DIR *)*((_QWORD *)v1 + 3);
      v3 = (void *)*((_QWORD *)v1 + 2);
      if ( v2 )
        closedir(v2);
      v4 = v1;
      v1 = v3;
      free(v4);
    }
    while ( v3 );
  }
}

__int64 __fastcall sub_4067E0(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  while ( 1 )
  {
    result = sub_40A900(a1);
    if ( (_BYTE)result )
      break;
    v1 = sub_40A950(a1);
    if ( v1 >= 0 )
      close(v1);
  }
  return result;
}

__int64 __fastcall sub_406820(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  struct statfs v8; // [rsp+0h] [rbp-98h]

  v1 = *(_QWORD *)(a1 + 80);
  if ( !(*(_BYTE *)(v1 + 73) & 2) )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 80);
  if ( !v2 )
  {
    v2 = sub_409F20(13LL, 0LL, sub_406400, sub_406410, free);
    *(_QWORD *)(v1 + 80) = v2;
    if ( !v2 )
    {
      if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
        return 0LL;
      return v8.f_type;
    }
  }
  v8.f_type = *(_QWORD *)(a1 + 120);
  v3 = sub_409CB0(v2, &v8);
  if ( v3 )
    return *(_QWORD *)(v3 + 8);
  if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
    return 0LL;
  v5 = malloc(0x10uLL);
  result = v8.f_type;
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    v5[1] = v8.f_type;
    *v5 = v6;
    v7 = sub_40A6C0(v2, v5);
    if ( v7 )
    {
      if ( v5 != (_QWORD *)v7 )
        abort();
      return v8.f_type;
    }
    free(v5);
    result = v8.f_type;
  }
  return result;
}

__int64 __fastcall sub_406820(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  struct statfs v8; // [rsp+0h] [rbp-98h]

  v1 = *(_QWORD *)(a1 + 80);
  if ( !(*(_BYTE *)(v1 + 73) & 2) )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 80);
  if ( !v2 )
  {
    v2 = sub_409F20(13LL, 0LL, sub_406400, sub_406410, free);
    *(_QWORD *)(v1 + 80) = v2;
    if ( !v2 )
    {
      if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
        return 0LL;
      return v8.f_type;
    }
  }
  v8.f_type = *(_QWORD *)(a1 + 120);
  v3 = sub_409CB0(v2, &v8);
  if ( v3 )
    return *(_QWORD *)(v3 + 8);
  if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
    return 0LL;
  v5 = malloc(0x10uLL);
  result = v8.f_type;
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    v5[1] = v8.f_type;
    *v5 = v6;
    v7 = sub_40A6C0(v2, v5);
    if ( v7 )
    {
      if ( v5 != (_QWORD *)v7 )
        abort();
      return v8.f_type;
    }
    free(v5);
    result = v8.f_type;
  }
  return result;
}

__int64 __fastcall sub_406940(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = sub_406820(a1);
  if ( v1 == 40864 )
    return 0;
  if ( v1 > 40864 )
  {
    if ( v1 != 1397113167 )
    {
      v2 = 2;
      if ( v1 != 1481003842 )
        v2 = (v1 == 1382369651) + 1;
      return v2;
    }
    return 0;
  }
  v2 = 0;
  if ( !v1 )
    return v2;
  return v1 != 26985;
}

void __fastcall sub_4069B0(__int64 a1, int a2, char a3)
{
  int v3; // ebp
  int v4; // esi
  int v5; // eax

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 44);
  if ( v4 == v3 && v4 != -100 )
    abort();
  if ( a3 )
  {
    v5 = sub_40A910(a1 + 96);
    if ( v5 < 0 )
    {
LABEL_6:
      *(_DWORD *)(a1 + 44) = v3;
      return;
    }
    close(v5);
    *(_DWORD *)(a1 + 44) = v3;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 72) & 4 || v4 < 0 )
      goto LABEL_6;
    close(v4);
    *(_DWORD *)(a1 + 44) = v3;
  }
}

__int64 __fastcall sub_406A20(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ebp

  v2 = *(_DWORD *)(a1 + 72) & 4;
  if ( v2 )
  {
    v2 = 0;
  }
  else
  {
    v1 = *(_DWORD *)(a1 + 72);
    if ( v1 & 0x200 )
      sub_4069B0(a1, -100, 1);
    else
      v2 = fchdir(*(_DWORD *)(a1 + 40)) != 0;
  }
  sub_4067E0(a1 + 96);
  return v2;
}

__int64 __fastcall sub_406A80(void **a1, size_t *a2, __int64 a3)
{
  void **v3; // rbx
  void *v4; // rdi
  size_t v5; // rax
  void *v6; // rax
  __int64 result; // rax

  v3 = a1;
  v4 = *a1;
  v5 = *a2 + a3 + 256;
  if ( *a2 > v5 )
  {
    free(v4);
    *v3 = 0LL;
    *__errno_location() = 36;
    result = 0LL;
  }
  else
  {
    *a2 = v5;
    v6 = realloc(v4, v5);
    if ( v6 )
    {
      *v3 = v6;
      result = 1LL;
    }
    else
    {
      free(*v3);
      *v3 = 0LL;
      result = 0LL;
    }
  }
  return result;
}

bool __fastcall sub_406AF0(__int16 a1, __int64 *a2)
{
  __int64 v2; // rax
  bool result; // al
  void *v4; // rax
  void *v5; // rdi

  if ( a1 & 0x102 )
  {
    v2 = sub_409F20(31LL, 0LL, sub_4063F0, sub_4063D0, free);
    *a2 = v2;
    result = v2 != 0;
  }
  else
  {
    v4 = malloc(0x20uLL);
    v5 = v4;
    *a2 = (__int64)v4;
    result = 0;
    if ( v5 )
    {
      sub_409550();
      result = 1;
    }
  }
  return result;
}

__int64 __fastcall sub_406B50(char a1, __int16 a2, char a3)
{
  __int64 result; // rax

  if ( a2 & 0x200 )
    result = sub_40AF10(a1);
  else
    result = sub_4095E0(a3);
  return result;
}

__int64 __fastcall sub_406BA0(__int64 a1, __int64 a2, int a3, const char *a4)
{
  int v4; // ebp
  char v5; // bl
  int v6; // er12
  int v7; // edx
  char v8; // r14
  int v9; // eax
  int v10; // er12
  unsigned int v11; // ebx
  int *v12; // rax
  int v13; // er13
  int *v14; // rbp
  struct stat stat_buf; // [rsp+10h] [rbp-C8h]

  v4 = a3;
  v5 = (char)a4;
  v6 = *(_DWORD *)(a1 + 72);
  v7 = *(_DWORD *)(a1 + 72) & 4;
  if ( a4 && !strcmp(a4, "..") )
  {
    if ( !v7 )
    {
      if ( v4 >= 0 )
      {
        v10 = v4;
        v8 = 1;
        goto LABEL_12;
      }
      if ( v6 & 0x200 )
      {
        v8 = sub_40A900(a1 + 96);
        if ( !v8 )
        {
          v9 = sub_40A950(a1 + 96);
          v10 = v9;
          if ( v9 >= 0 )
          {
            v4 = v9;
            v8 = 1;
            goto LABEL_12;
          }
          v6 = *(_DWORD *)(a1 + 72);
          v8 = 1;
        }
      }
      else
      {
        v8 = 1;
      }
LABEL_24:
      v10 = sub_406B50(*(_DWORD *)(a1 + 44), v6, v5);
      if ( v10 < 0 )
        return (unsigned int)-1;
LABEL_12:
      v11 = __fxstat(1, v10, &stat_buf);
      if ( !v11 )
      {
        if ( *(_QWORD *)(a2 + 120) == stat_buf.st_dev && *(_QWORD *)(a2 + 128) == stat_buf.st_ino )
        {
          if ( *(_BYTE *)(a1 + 73) & 2 )
          {
            sub_4069B0(a1, v10, v8 ^ 1);
            return v11;
          }
          v11 = fchdir(v10);
          goto LABEL_17;
        }
        *__errno_location() = 2;
      }
      v11 = -1;
LABEL_17:
      if ( v4 < 0 )
      {
        v12 = __errno_location();
        v13 = *v12;
        v14 = v12;
        close(v10);
        *v14 = v13;
      }
      return v11;
    }
  }
  else if ( !v7 )
  {
    if ( v4 >= 0 )
    {
      v10 = v4;
      v8 = 0;
      goto LABEL_12;
    }
    v8 = 0;
    goto LABEL_24;
  }
  if ( v6 & 0x200 && v4 >= 0 )
  {
    v11 = 0;
    close(v4);
  }
  else
  {
    v11 = 0;
  }
  return v11;
}

__int64 __fastcall sub_406D70(__int16 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 result; // rax

  v3 = a3;
  if ( a1 & 0x102 )
  {
    v4 = malloc(0x18uLL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v3 + 120);
      v6 = *a2;
      v4[2] = v3;
      *v4 = v5;
      v4[1] = *(_QWORD *)(v3 + 128);
      v7 = sub_40A6C0(v6, v4);
      if ( v4 == (_QWORD *)v7 )
        return 1LL;
      free(v4);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 16);
        *(_WORD *)(v3 + 112) = 2;
        *(_QWORD *)v3 = v8;
        return 1LL;
      }
    }
    result = 0LL;
  }
  else
  {
    result = sub_409560(*a2, a3 + 120);
    if ( !(_BYTE)result )
      return 1LL;
    *(_QWORD *)v3 = v3;
    *(_WORD *)(v3 + 112) = 2;
  }
  return result;
}

void __fastcall sub_406E20(__int16 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-28h]
  __int64 v10; // [rsp+8h] [rbp-20h]

  if ( a1 & 0x102 )
  {
    v5 = *(_QWORD **)a2;
    v9 = a3[15];
    v10 = a3[16];
    v6 = (void *)sub_40A700(v5, &v9);
    if ( v6 )
    {
      free(v6);
      return;
    }
    goto LABEL_11;
  }
  v3 = (_QWORD *)a3[1];
  if ( !v3 || v3[11] < 0LL )
    return;
  v4 = *(_QWORD **)a2;
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 16LL) )
LABEL_11:
    abort();
  if ( *v4 == a3[16] && v4[1] == a3[15] )
  {
    v7 = v3[15];
    v8 = v3[16];
    v4[1] = v7;
    *v4 = v8;
  }
}

void __fastcall sub_406E20(__int16 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-28h]
  __int64 v10; // [rsp+8h] [rbp-20h]

  if ( a1 & 0x102 )
  {
    v5 = *(_QWORD **)a2;
    v9 = a3[15];
    v10 = a3[16];
    v6 = (void *)sub_40A700(v5, &v9);
    if ( v6 )
    {
      free(v6);
      return;
    }
    goto LABEL_11;
  }
  v3 = (_QWORD *)a3[1];
  if ( !v3 || v3[11] < 0LL )
    return;
  v4 = *(_QWORD **)a2;
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 16LL) )
LABEL_11:
    abort();
  if ( *v4 == a3[16] && v4[1] == a3[15] )
  {
    v7 = v3[15];
    v8 = v3[16];
    v4[1] = v7;
    *v4 = v8;
  }
}

__int64 __fastcall sub_406EC0(__int64 *a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // r13
  DIR *v4; // rdi
  int v5; // edi
  _BYTE *v6; // rax
  size_t v7; // rbp
  __int64 v8; // rbx
  DIR *v9; // r15
  int *v10; // rax
  int *v11; // r12
  struct dirent *v12; // rax
  struct dirent *v13; // r14
  size_t v14; // r13
  char *v15; // r15
  const void *v16; // rsi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rdx
  _BYTE *v23; // rdx
  __int64 v24; // r13
  __int64 v25; // r15
  _QWORD *v26; // rax
  __int64 i; // rcx
  _QWORD *v28; // rdx
  char *j; // rax
  char *v30; // rdx
  char *v31; // rdx
  int v32; // edi
  int v33; // eax
  int v34; // ebx
  DIR *v35; // rax
  bool v36; // zf
  int v37; // edi
  char v38; // r14
  bool v39; // r12
  DIR *v40; // rdi
  __int16 v41; // bp
  char *v42; // rcx
  __int64 v43; // r15
  int v44; // ebx
  __int64 v46; // rax
  char v47; // al
  DIR *v48; // rdi
  int *v49; // rax
  int v50; // er12
  int *v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rax
  __int16 v54; // ax
  DIR *dirp; // [rsp+8h] [rbp-90h]
  __int64 v56; // [rsp+10h] [rbp-88h]
  char *ptr; // [rsp+18h] [rbp-80h]
  size_t v58; // [rsp+20h] [rbp-78h]
  __int64 v59; // [rsp+20h] [rbp-78h]
  __int64 v60; // [rsp+28h] [rbp-70h]
  __int64 v61; // [rsp+30h] [rbp-68h]
  unsigned __int64 v62; // [rsp+38h] [rbp-60h]
  _BYTE *dest; // [rsp+40h] [rbp-58h]
  __int64 v64; // [rsp+48h] [rbp-50h]
  DIR *v65; // [rsp+50h] [rbp-48h]
  int v66; // [rsp+58h] [rbp-40h]
  char v67; // [rsp+5Eh] [rbp-3Ah]
  char v68; // [rsp+5Fh] [rbp-39h]

  v2 = (__int64)a1;
  v3 = *a1;
  v66 = a2;
  v4 = *(DIR **)(*a1 + 24);
  v65 = v4;
  if ( v4 )
  {
    if ( dirfd(v4) >= 0 )
    {
      if ( !*(_QWORD *)(v2 + 64) )
      {
        v62 = 100000LL;
        v5 = *(_DWORD *)(v2 + 72);
        v68 = 1;
        goto LABEL_6;
      }
      v62 = -1LL;
      goto LABEL_5;
    }
    closedir(*(DIR **)(v3 + 24));
    *(_QWORD *)(v3 + 24) = 0LL;
    if ( a2 == 3 )
      goto LABEL_127;
    return 0LL;
  }
  LOBYTE(v32) = -100;
  if ( (*(_DWORD *)(v2 + 72) & 0x204) == 512 )
    v32 = *(_DWORD *)(v2 + 44);
  v33 = sub_40AF10(v32);
  v34 = v33;
  if ( v33 < 0 )
  {
LABEL_114:
    *(_QWORD *)(v3 + 24) = 0LL;
    if ( a2 == 3 )
    {
LABEL_127:
      *(_WORD *)(v3 + 112) = 4;
      *(_DWORD *)(v3 + 64) = *__errno_location();
    }
    return 0LL;
  }
  v35 = fdopendir(v33);
  if ( !v35 )
  {
    v49 = __errno_location();
    v50 = *v49;
    v51 = v49;
    close(v34);
    *v51 = v50;
    goto LABEL_114;
  }
  v36 = *(_WORD *)(v3 + 112) == 11;
  *(_QWORD *)(v3 + 24) = v35;
  if ( v36 )
  {
    *(_WORD *)(v3 + 112) = sub_406450(v2, v3, 0);
  }
  else
  {
    v37 = *(_DWORD *)(v2 + 72);
    if ( v37 & 0x100 )
    {
      sub_406E20(v37, v2 + 88, (_QWORD *)v3);
      sub_406450(v2, v3, 0);
      if ( !(unsigned __int8)sub_406D70(*(_DWORD *)(v2 + 72), (_QWORD *)(v2 + 88), v3) )
      {
        ptr = 0LL;
        *__errno_location() = 12;
        return (__int64)ptr;
      }
    }
  }
  v62 = *(_QWORD *)(v2 + 64) < 1uLL ? 100000LL : -1LL;
  if ( a2 == 2 )
    goto LABEL_117;
  if ( (*(_DWORD *)(v2 + 72) & 0x38) == 24 && *(_QWORD *)(v3 + 136) == 2LL && (unsigned int)sub_406940(v3) )
  {
    if ( a2 == 3 )
    {
      v38 = 0;
      v39 = 1;
      goto LABEL_69;
    }
LABEL_117:
    v68 = 0;
    v5 = *(_DWORD *)(v2 + 72);
    goto LABEL_6;
  }
  v38 = 1;
  v39 = a2 == 3;
LABEL_69:
  if ( *(_BYTE *)(v2 + 73) & 2 )
  {
    v34 = sub_40B030(v34);
    if ( v34 < 0 )
    {
      v40 = *(DIR **)(v3 + 24);
      v41 = *(_WORD *)(v3 + 114) | 1;
      if ( !v39 || !v38 )
      {
        *(_WORD *)(v3 + 114) |= 1u;
        closedir(v40);
        v5 = *(_DWORD *)(v2 + 72);
LABEL_77:
        *(_QWORD *)(v3 + 24) = 0LL;
        v68 = 0;
        goto LABEL_6;
      }
      goto LABEL_73;
    }
  }
  if ( (unsigned int)sub_406BA0(v2, v3, v34, 0LL) )
  {
    v40 = *(DIR **)(v3 + 24);
    v41 = *(_WORD *)(v3 + 114) | 1;
    if ( !v39 || !v38 )
    {
LABEL_74:
      *(_WORD *)(v3 + 114) = v41;
      closedir(v40);
      v5 = *(_DWORD *)(v2 + 72);
      *(_QWORD *)(v3 + 24) = 0LL;
      if ( v5 & 0x200 && v34 >= 0 )
      {
        close(v34);
        v5 = *(_DWORD *)(v2 + 72);
      }
      goto LABEL_77;
    }
LABEL_73:
    *(_DWORD *)(v3 + 64) = *__errno_location();
    goto LABEL_74;
  }
LABEL_5:
  v68 = 1;
  v5 = *(_DWORD *)(v2 + 72);
LABEL_6:
  v56 = *(_QWORD *)(v3 + 72);
  v64 = v56 - 1;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 56) + v56 - 1) != 47 )
  {
    v64 = *(_QWORD *)(v3 + 72);
    ++v56;
  }
  dest = 0LL;
  if ( v5 & 4 )
  {
    v6 = (_BYTE *)(*(_QWORD *)(v2 + 32) + v64);
    *v6 = 47;
    dest = v6 + 1;
  }
  v67 = 0;
  v7 = 0LL;
  v58 = *(_QWORD *)(v2 + 48) - v56;
  v8 = v2;
  dirp = 0LL;
  v60 = v3;
  v61 = *(_QWORD *)(v3 + 88) + 1LL;
  ptr = 0LL;
  while ( 1 )
  {
    v9 = *(DIR **)(v60 + 24);
    if ( !v9 )
    {
      v24 = v60;
      v25 = v8;
      goto LABEL_86;
    }
    v10 = __errno_location();
    *v10 = 0;
    v11 = v10;
    v12 = readdir(v9);
    v13 = v12;
    if ( !v12 )
      break;
    if ( *(_BYTE *)(v8 + 72) & 0x20 || v12->d_name[0] != 46 || v12->d_name[1] && *(_WORD *)&v12->d_name[1] != 46 )
    {
      v14 = strlen(v12->d_name);
      v15 = sub_406700(v8, v13->d_name, v14);
      if ( !v15 )
        goto LABEL_79;
      if ( v58 <= v14 )
      {
        v59 = *(_QWORD *)(v8 + 32);
        v21 = sub_406A80((void **)(v8 + 32), (size_t *)(v8 + 48), v64 + v14 + 2);
        if ( !v21 )
        {
LABEL_79:
          v42 = v15;
          v43 = v8;
          v44 = *v11;
          free(v42);
          sub_406790(ptr);
          closedir(*(DIR **)(v60 + 24));
          *(_QWORD *)(v60 + 24) = 0LL;
          *(_WORD *)(v60 + 112) = 7;
          ptr = 0LL;
          *(_DWORD *)(v43 + 72) |= 0x4000u;
          *v11 = v44;
          return (__int64)ptr;
        }
        v22 = *(_QWORD *)(v8 + 32);
        if ( v22 == v59 )
        {
          v21 = v67;
        }
        else
        {
          v23 = (_BYTE *)(v56 + v22);
          if ( !(*(_BYTE *)(v8 + 72) & 4) )
            v23 = dest;
          dest = v23;
        }
        v67 = v21;
        v58 = *(_QWORD *)(v8 + 48) - v56;
      }
      if ( __CFADD__(v56, v14) )
      {
        free(v15);
        sub_406790(ptr);
        closedir(*(DIR **)(v60 + 24));
        *(_QWORD *)(v60 + 24) = 0LL;
        *(_WORD *)(v60 + 112) = 7;
        ptr = 0LL;
        *(_DWORD *)(v8 + 72) |= 0x4000u;
        *v11 = 36;
        return (__int64)ptr;
      }
      v16 = v15 + 264;
      *((_QWORD *)v15 + 11) = v61;
      v17 = *(_QWORD *)v8;
      *((_QWORD *)v15 + 9) = v56 + v14;
      *((_QWORD *)v15 + 1) = v17;
      *((_QWORD *)v15 + 16) = v13->d_ino;
      v18 = *(_DWORD *)(v8 + 72);
      if ( v18 & 4 )
      {
        *((_QWORD *)v15 + 6) = *((_QWORD *)v15 + 7);
        memmove(dest, v16, *((_QWORD *)v15 + 12) + 1LL);
        v18 = *(_DWORD *)(v8 + 72);
      }
      else
      {
        *((_QWORD *)v15 + 6) = v16;
      }
      if ( *(_QWORD *)(v8 + 64) && !(v18 & 0x400) )
      {
        *((_WORD *)v15 + 56) = sub_406450(v8, (__int64)v15, 0);
      }
      else
      {
        v19 = (unsigned int)v13->d_type - 1;
        if ( (v18 & 0x18) == 24 && v13->d_type & 0xFB )
        {
          *((_WORD *)v15 + 56) = 11;
          if ( (unsigned int)v19 <= 0xB )
            *((_DWORD *)v15 + 36) = dword_40D4E0[v19];
          else
            *((_DWORD *)v15 + 36) = 0;
          v20 = 1LL;
        }
        else
        {
          *((_WORD *)v15 + 56) = 11;
          if ( (unsigned int)v19 > 0xB )
            *((_DWORD *)v15 + 36) = 0;
          else
            *((_DWORD *)v15 + 36) = dword_40D4E0[v19];
          v20 = 2LL;
        }
        *((_QWORD *)v15 + 21) = v20;
      }
      *((_QWORD *)v15 + 2) = 0LL;
      if ( ptr )
      {
        ++v7;
        *((_QWORD *)dirp + 2) = v15;
        if ( v7 >= v62 )
          goto LABEL_39;
      }
      else
      {
        ptr = v15;
        if ( ++v7 >= v62 )
        {
LABEL_39:
          v24 = v60;
          v25 = v8;
          if ( !v67 )
            goto LABEL_87;
          goto LABEL_40;
        }
      }
    }
    else
    {
      v15 = (char *)dirp;
    }
    dirp = (DIR *)v15;
  }
  v24 = v60;
  v25 = v8;
  if ( *v11 )
  {
    *(_DWORD *)(v60 + 64) = *v11;
    *(_WORD *)(v60 + 112) = (v7 | (unsigned __int64)v65) < 1 ? 4 : 7;
  }
  v48 = *(DIR **)(v60 + 24);
  if ( v48 )
  {
    closedir(v48);
    *(_QWORD *)(v60 + 24) = 0LL;
  }
LABEL_86:
  if ( !v67 )
    goto LABEL_87;
LABEL_40:
  v26 = *(_QWORD **)(v25 + 8);
  for ( i = *(_QWORD *)(v25 + 32); v26; v26 = (_QWORD *)v26[2] )
  {
    v28 = (_QWORD *)v26[6];
    if ( v28 != v26 + 33 )
      v26[6] = (char *)v28 + i - v26[7];
    v26[7] = i;
  }
  for ( j = ptr; *((_QWORD *)j + 11) >= 0LL; j = v31 )
  {
    v30 = (char *)*((_QWORD *)j + 6);
    if ( v30 != j + 264 )
      *((_QWORD *)j + 6) = &v30[i - *((_QWORD *)j + 7)];
    v31 = (char *)*((_QWORD *)j + 2);
    *((_QWORD *)j + 7) = i;
    if ( !v31 )
      v31 = (char *)*((_QWORD *)j + 1);
  }
LABEL_87:
  if ( *(_BYTE *)(v25 + 72) & 4 )
  {
    if ( *(_QWORD *)(v25 + 48) == v56 || !v7 )
      --dest;
    *dest = 0;
  }
  if ( v65 || !v68 )
    goto LABEL_138;
  if ( v66 != 1 && v7 )
    goto LABEL_96;
  v47 = *(_QWORD *)(v24 + 88) ? (unsigned int)sub_406BA0(v25, *(_QWORD *)(v24 + 8), -1, "..") != 0 : (unsigned int)sub_406A20(v25) != 0;
  if ( !v47 )
  {
LABEL_138:
    if ( !v7 )
    {
      if ( v66 == 3 )
      {
        v54 = *(_WORD *)(v24 + 112);
        if ( v54 != 4 && v54 != 7 )
          *(_WORD *)(v24 + 112) = 6;
      }
      sub_406790(ptr);
      return 0LL;
    }
LABEL_96:
    v46 = *(_QWORD *)(v25 + 64);
    if ( v7 > 0x2710 )
    {
      if ( v46 )
        return sub_406600(v25, (__int64)ptr, v7);
      v52 = sub_406820(v24);
      if ( v52 != 26985 && v52 != 16914836 )
      {
        *(_QWORD *)(v25 + 64) = sub_406420;
        v53 = sub_406600(v25, (__int64)ptr, v7);
        *(_QWORD *)(v25 + 64) = 0LL;
        return v53;
      }
      v46 = *(_QWORD *)(v25 + 64);
    }
    if ( !v46 || v7 == 1 )
      return (__int64)ptr;
    return sub_406600(v25, (__int64)ptr, v7);
  }
  *(_WORD *)(v24 + 112) = 7;
  *(_DWORD *)(v25 + 72) |= 0x4000u;
  sub_406790(ptr);
  return 0LL;
}

__int64 __fastcall fts_open(const char **a1, unsigned int a2, __int64 a3)
{
  const char **v3; // r13
  __int64 v4; // r14
  _QWORD *v5; // rax
  __int64 v6; // rbx
  const char *v7; // rdi
  const char **v8; // r15
  size_t v9; // r12
  size_t v10; // rax
  __int64 v11; // rdx
  const char *v12; // r15
  char *v13; // rcx
  void *v14; // r12
  size_t v15; // rbp
  char *v16; // rax
  char *v17; // r15
  size_t v18; // rax
  char *v19; // rax
  int v20; // edi
  int v21; // esi
  void *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  char *ptr; // [rsp+8h] [rbp-50h]
  char v28; // [rsp+16h] [rbp-42h]
  _BYTE v29[9]; // [rsp+17h] [rbp-41h]

  if ( a2 & 0xFFFFE000 || (a2 & 0x204) == 516 || !(a2 & 0x12) )
  {
    v6 = 0LL;
    *__errno_location() = 22;
    return v6;
  }
  v3 = a1;
  v4 = a3;
  v5 = calloc(0x80uLL, 1uLL);
  v6 = (__int64)v5;
  if ( v5 )
  {
    v5[8] = v4;
    if ( a2 & 2 )
    {
      v24 = a2;
      BYTE1(v24) &= 0xFDu;
      *(_DWORD *)(v6 + 72) = v24 | 4;
    }
    else
    {
      *((_DWORD *)v5 + 18) = a2;
    }
    v7 = *a1;
    *(_DWORD *)(v6 + 44) = -100;
    if ( v7 )
    {
      v8 = v3;
      v9 = 0LL;
      do
      {
        v10 = strlen(v7);
        if ( v9 < v10 )
          v9 = v10;
        ++v8;
        v7 = *v8;
      }
      while ( *v8 );
      v11 = v9 + 1;
      if ( v9 + 1 < 0x1000 )
        v11 = 4096LL;
    }
    else
    {
      v11 = 4096LL;
    }
    v28 = sub_406A80((void **)(v6 + 32), (size_t *)(v6 + 48), v11);
    if ( !v28 )
      goto LABEL_44;
    v12 = *v3;
    if ( *v3 )
    {
      v13 = sub_406700(v6, "", 0LL);
      ptr = v13;
      if ( !v13 )
      {
LABEL_43:
        free(*(void **)(v6 + 32));
LABEL_44:
        v23 = (void *)v6;
        v6 = 0LL;
        free(v23);
        return v6;
      }
      v12 = *v3;
      *((_QWORD *)v13 + 11) = -1LL;
      *((_QWORD *)v13 + 13) = -1LL;
      if ( !v4 )
        goto LABEL_19;
    }
    else
    {
      ptr = 0LL;
      if ( !v4 )
      {
LABEL_47:
        v14 = 0LL;
LABEL_36:
        v19 = sub_406700(v6, "", 0LL);
        *(_QWORD *)v6 = v19;
        if ( v19 )
        {
          *((_QWORD *)v19 + 2) = v14;
          v20 = *(_DWORD *)(v6 + 72);
          *((_WORD *)v19 + 56) = 9;
          if ( sub_406AF0(v20, (__int64 *)(v6 + 88)) )
          {
            v21 = *(_DWORD *)(v6 + 72);
            if ( !(v21 & 0x204) )
            {
              v26 = sub_406B50(*(_DWORD *)(v6 + 44), v21, 55);
              *(_DWORD *)(v6 + 40) = v26;
              if ( v26 < 0 )
                *(_DWORD *)(v6 + 72) |= 4u;
            }
            sub_40A8E0(v6 + 96, 0xFFFFFFFFLL);
            return v6;
          }
        }
LABEL_42:
        sub_406790(v14);
        free(ptr);
        goto LABEL_43;
      }
    }
    v28 = (*(_DWORD *)(v6 + 72) >> 10) & 1;
LABEL_19:
    if ( v12 )
    {
      v29[8] = 0;
      v14 = 0LL;
      v15 = 0LL;
      *(_QWORD *)v29 = ((unsigned __int8)(a2 >> 12) ^ 1) & 1;
      while ( 1 )
      {
        v18 = strlen(v12);
        if ( v18 > 2 && v29[0] && v12[v18 - 1] == 47 )
        {
          do
          {
            if ( v12[v18 - 2] != 47 )
              break;
            --v18;
          }
          while ( v18 != 1 );
        }
        v16 = sub_406700(v6, v12, v18);
        v17 = v16;
        if ( !v16 )
          goto LABEL_42;
        *((_QWORD *)v16 + 11) = 0LL;
        *((_QWORD *)v16 + 1) = ptr;
        *((_QWORD *)v16 + 6) = v16 + 264;
        if ( v14 )
        {
          if ( v28 )
            break;
        }
        *((_WORD *)v16 + 56) = sub_406450(v6, (__int64)v16, 0);
        if ( v4 )
          goto LABEL_25;
        *((_QWORD *)v17 + 2) = 0LL;
        if ( v14 )
          goto LABEL_52;
        *(_QWORD *)&v29[1] = v17;
        v14 = v17;
LABEL_26:
        v12 = v3[++v15];
        if ( !v12 )
        {
          if ( v4 && v15 > 1 )
            v14 = (void *)sub_406600(v6, (__int64)v14, v15);
          goto LABEL_36;
        }
      }
      *((_QWORD *)v16 + 21) = 2LL;
      *((_WORD *)v16 + 56) = 11;
      if ( !v4 )
      {
        *((_QWORD *)v16 + 2) = 0LL;
LABEL_52:
        v25 = *(_QWORD *)&v29[1];
        *(_QWORD *)&v29[1] = v17;
        *(_QWORD *)(v25 + 16) = v17;
        goto LABEL_26;
      }
LABEL_25:
      *((_QWORD *)v17 + 2) = v14;
      v14 = v17;
      goto LABEL_26;
    }
    goto LABEL_47;
  }
  return v6;
}

__int64 __fastcall fts_close(void *ptr)
{
  void *v1; // rbp
  _QWORD *v2; // rdi
  void *v3; // rdi
  int v4; // eax
  int v5; // edi
  unsigned int v6; // ebx
  void *v7; // rdi
  void *v8; // rdi
  int *v10; // r12
  _QWORD *v11; // rbx

  v1 = ptr;
  v2 = *(_QWORD **)ptr;
  if ( v2 )
  {
    if ( v2[11] >= 0 )
    {
      do
      {
        while ( 1 )
        {
          v11 = (_QWORD *)v2[2];
          if ( !v11 )
            break;
          free(v2);
          v2 = v11;
          if ( v11[11] < 0LL )
            goto LABEL_7;
        }
        v11 = (_QWORD *)v2[1];
        free(v2);
        v2 = v11;
      }
      while ( v11[11] >= 0 );
    }
    else
    {
      v11 = v2;
    }
LABEL_7:
    free(v11);
  }
  v3 = (void *)*((_QWORD *)v1 + 1);
  if ( v3 )
    sub_406790(v3);
  free(*((void **)v1 + 2));
  free(*((void **)v1 + 4));
  v4 = *((_DWORD *)v1 + 18);
  if ( v4 & 0x200 )
  {
    v5 = *((_DWORD *)v1 + 11);
    if ( v5 >= 0 && close(v5) )
    {
      v6 = *__errno_location();
      goto LABEL_13;
    }
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  if ( v4 & 4 )
    goto LABEL_12;
  if ( !fchdir(*((_DWORD *)v1 + 10)) )
  {
    if ( !close(*((_DWORD *)v1 + 10)) )
      goto LABEL_12;
    v10 = __errno_location();
    goto LABEL_30;
  }
  v10 = __errno_location();
  v6 = *v10;
  if ( close(*((_DWORD *)v1 + 10)) && !v6 )
LABEL_30:
    v6 = *v10;
LABEL_13:
  sub_4067E0((__int64)v1 + 96);
  v7 = (void *)*((_QWORD *)v1 + 10);
  if ( v7 )
    sub_40A160(v7);
  v8 = (void *)*((_QWORD *)v1 + 11);
  if ( *((_DWORD *)v1 + 18) & 0x102 )
  {
    if ( v8 )
      sub_40A160(v8);
  }
  else
  {
    free(v8);
  }
  free(v1);
  if ( v6 )
  {
    *__errno_location() = v6;
    v6 = -1;
  }
  return v6;
}

__int64 __fastcall fts_read(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // edx
  __int16 v3; // ax
  __int64 v4; // r12
  __int16 v5; // cx
  __int16 v6; // ax
  __int64 v7; // rbx
  __int16 v8; // ax
  int v9; // edi
  void *v11; // rdi
  int *v12; // rax
  _QWORD *v13; // rax
  void *v14; // rdi
  int v15; // edi
  void *v16; // rdi
  __int64 v17; // rdx
  void *v18; // rdi
  char *v19; // rax
  const void *v20; // r13
  size_t v21; // r14
  __int64 v22; // rax
  int v23; // edi
  __int16 v24; // ax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  _BYTE *v28; // rax
  __int16 v29; // ax
  __int64 v30; // rax
  int v31; // edi
  int v32; // eax
  int v33; // edi
  __int64 v34; // rbp
  int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int16 v39; // ax
  int v40; // esi
  int v41; // esi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax

  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 & 0x4000 )
    return 0LL;
  v3 = *(_WORD *)(v1 + 116);
  v4 = a1;
  *(_WORD *)(v1 + 116) = 3;
  if ( v3 == 1 )
  {
    *(_WORD *)(v1 + 112) = sub_406450(a1, v1, 0);
    return v1;
  }
  v5 = *(_WORD *)(v1 + 112);
  if ( v3 != 2 )
  {
    if ( v5 != 1 )
      goto LABEL_9;
    if ( v3 == 4 )
      goto LABEL_34;
    goto LABEL_24;
  }
  if ( (unsigned __int16)(v5 - 12) <= 1u )
  {
    v29 = sub_406450(a1, v1, 1);
    *(_WORD *)(v1 + 112) = v29;
    if ( v29 == 1 )
    {
      v40 = *(_DWORD *)(a1 + 72);
      if ( !(v40 & 4) )
      {
        v43 = sub_406B50(*(_DWORD *)(a1 + 44), v40, 55);
        *(_DWORD *)(v1 + 68) = v43;
        if ( v43 >= 0 )
        {
          *(_WORD *)(v1 + 114) |= 2u;
          v24 = *(_WORD *)(v1 + 112);
          v7 = v1;
          goto LABEL_51;
        }
        v44 = *__errno_location();
        *(_WORD *)(v1 + 112) = 7;
        *(_DWORD *)(v1 + 64) = v44;
        *(_QWORD *)a1 = v1;
        return v1;
      }
      *(_QWORD *)a1 = v1;
      v7 = v1;
LABEL_53:
      if ( *(_QWORD *)(v7 + 88) )
        goto LABEL_55;
      goto LABEL_54;
    }
    *(_QWORD *)a1 = v1;
    if ( v29 != 11 )
      return v1;
    v7 = v1;
LABEL_60:
    v30 = *(_QWORD *)(v7 + 168);
    if ( v30 != 2 )
    {
      if ( v30 == 1 )
        return v7;
      goto LABEL_117;
    }
    v34 = *(_QWORD *)(v7 + 8);
    if ( !*(_QWORD *)(v34 + 104)
      && (*(_DWORD *)(v4 + 72) & 0x18) == 24
      && (unsigned int)sub_406940(*(_QWORD *)(v7 + 8)) == 2 )
    {
      v24 = *(_WORD *)(v7 + 112);
      goto LABEL_52;
    }
    v24 = sub_406450(v4, v7, 0);
    v35 = *(_DWORD *)(v7 + 144);
    *(_WORD *)(v7 + 112) = v24;
    if ( (v35 & 0xF000) != 0x4000 )
      goto LABEL_52;
    if ( *(_QWORD *)(v7 + 88) )
    {
      v36 = *(_QWORD *)(v34 + 104);
      if ( (unsigned __int64)(v36 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        *(_QWORD *)(v34 + 104) = v36 - 1;
      if ( v24 != 1 )
        return v7;
LABEL_55:
      v1 = v7;
      if ( !(unsigned __int8)sub_406D70(*(_DWORD *)(v4 + 72), (_QWORD *)(v4 + 88), v7) )
      {
        v1 = 0LL;
        *__errno_location() = 12;
      }
      return v1;
    }
    if ( v24 != 1 )
      return v7;
LABEL_54:
    *(_QWORD *)(v4 + 24) = *(_QWORD *)(v7 + 120);
    goto LABEL_55;
  }
  if ( v5 == 1 )
  {
LABEL_24:
    if ( v2 & 0x40 && *(_QWORD *)(v1 + 120) != *(_QWORD *)(a1 + 24) )
    {
LABEL_34:
      if ( *(_BYTE *)(v1 + 114) & 2 )
        close(*(_DWORD *)(v1 + 68));
      v14 = *(void **)(a1 + 8);
      if ( v14 )
      {
        sub_406790(v14);
        *(_QWORD *)(v4 + 8) = 0LL;
      }
      v15 = *(_DWORD *)(v4 + 72);
      *(_WORD *)(v1 + 112) = 6;
      sub_406E20(v15, v4 + 88, (_QWORD *)v1);
      return v1;
    }
    v11 = *(void **)(a1 + 8);
    if ( v11 )
    {
      if ( !(v2 & 0x2000) )
      {
        if ( (unsigned int)sub_406BA0(v4, v1, -1, *(const char **)(v1 + 48)) )
        {
          v12 = __errno_location();
          v7 = *(_QWORD *)(v4 + 8);
          LODWORD(v12) = *v12;
          *(_WORD *)(v1 + 114) |= 1u;
          *(_DWORD *)(v1 + 64) = (_DWORD)v12;
          if ( v7 )
          {
            v13 = (_QWORD *)v7;
            do
            {
              v13[6] = *(_QWORD *)(v13[1] + 48LL);
              v13 = (_QWORD *)v13[2];
            }
            while ( v13 );
          }
        }
        else
        {
          v7 = *(_QWORD *)(v4 + 8);
        }
        goto LABEL_32;
      }
      BYTE1(v2) &= 0xDFu;
      *(_DWORD *)(v4 + 72) = v2;
      sub_406790(v11);
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    v7 = sub_406EC0((__int64 *)v4, 3);
    *(_QWORD *)(v4 + 8) = v7;
    if ( v7 )
    {
LABEL_32:
      *(_QWORD *)(v4 + 8) = 0LL;
      goto LABEL_48;
    }
    v31 = *(_DWORD *)(v4 + 72);
    if ( !(v31 & 0x4000) )
    {
      if ( *(_DWORD *)(v1 + 64) && *(_WORD *)(v1 + 112) != 4 )
        *(_WORD *)(v1 + 112) = 7;
      sub_406E20(v31, v4 + 88, (_QWORD *)v1);
      return v1;
    }
    return 0LL;
  }
  do
  {
LABEL_9:
    v7 = *(_QWORD *)(v1 + 16);
    if ( !v7 )
    {
      v7 = *(_QWORD *)(v1 + 8);
      if ( *(_QWORD *)(v7 + 24) )
      {
        v37 = *(_QWORD *)(v7 + 72);
        v38 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)a1 = v7;
        *(_BYTE *)(v38 + v37) = 0;
        v7 = sub_406EC0((__int64 *)a1, 3);
        if ( v7 )
        {
          free((void *)v1);
          goto LABEL_48;
        }
        if ( *(_BYTE *)(a1 + 73) & 0x40 )
          return 0LL;
        v7 = *(_QWORD *)(v1 + 8);
      }
      *(_QWORD *)a1 = v7;
      free((void *)v1);
      if ( *(_QWORD *)(v7 + 88) == -1LL )
      {
        v1 = 0LL;
        free((void *)v7);
        *__errno_location() = 0;
        *(_QWORD *)a1 = 0LL;
        return v1;
      }
      if ( *(_WORD *)(v7 + 112) != 11 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + *(_QWORD *)(v7 + 72)) = 0;
        if ( *(_QWORD *)(v7 + 88) )
        {
          v8 = *(_WORD *)(v7 + 114);
          if ( v8 & 2 )
          {
            v32 = *(_DWORD *)(a1 + 72);
            v33 = *(_DWORD *)(v7 + 68);
            if ( !(v32 & 4) )
            {
              if ( v32 & 0x200 )
              {
                sub_4069B0(v4, v33, 1);
                v33 = *(_DWORD *)(v7 + 68);
              }
              else
              {
                if ( fchdir(v33) )
                {
                  *(_DWORD *)(v7 + 64) = *__errno_location();
                  *(_DWORD *)(v4 + 72) |= 0x4000u;
                }
                v33 = *(_DWORD *)(v7 + 68);
              }
            }
            close(v33);
          }
          else if ( !(v8 & 1) && (unsigned int)sub_406BA0(a1, *(_QWORD *)(v7 + 8), -1, "..") )
          {
            goto LABEL_81;
          }
        }
        else if ( (unsigned int)sub_406A20(a1) )
        {
LABEL_81:
          *(_DWORD *)(v7 + 64) = *__errno_location();
          *(_DWORD *)(a1 + 72) |= 0x4000u;
          if ( *(_WORD *)(v7 + 112) == 2 )
            return 0LL;
          v9 = *(_DWORD *)(a1 + 72);
LABEL_17:
          if ( *(_DWORD *)(v7 + 64) )
          {
            *(_WORD *)(v7 + 112) = 7;
          }
          else
          {
            *(_WORD *)(v7 + 112) = 6;
            sub_406E20(v9, v4 + 88, (_QWORD *)v7);
            v9 = *(_DWORD *)(v4 + 72);
          }
LABEL_19:
          if ( v9 & 0x4000 )
            return 0LL;
          return v7;
        }
        v9 = *(_DWORD *)(v4 + 72);
        if ( *(_WORD *)(v7 + 112) == 2 )
          goto LABEL_19;
        goto LABEL_17;
      }
LABEL_117:
      abort();
    }
    *(_QWORD *)a1 = v7;
    free((void *)v1);
    if ( !*(_QWORD *)(v7 + 88) )
    {
      if ( !(unsigned int)sub_406A20(a1) )
      {
        v16 = *(void **)(a1 + 88);
        if ( *(_DWORD *)(v4 + 72) & 0x102 )
        {
          if ( v16 )
            sub_40A160(v16);
        }
        else
        {
          free(v16);
        }
        v17 = *(_QWORD *)(v7 + 96);
        v18 = *(void **)(v4 + 32);
        *(_QWORD *)(v7 + 72) = v17;
        memmove(v18, (const void *)(v7 + 264), v17 + 1);
        v19 = strrchr((const char *)(v7 + 264), 47);
        if ( v19 && ((char *)(v7 + 264) != v19 || *(_BYTE *)(v7 + 265)) )
        {
          v20 = v19 + 1;
          v21 = strlen(v19 + 1);
          memmove((void *)(v7 + 264), v20, v21 + 1);
          *(_QWORD *)(v7 + 96) = v21;
        }
        v22 = *(_QWORD *)(v4 + 32);
        v23 = *(_DWORD *)(v4 + 72);
        *(_QWORD *)(v7 + 56) = v22;
        *(_QWORD *)(v7 + 48) = v22;
        sub_406AF0(v23, (__int64 *)(v4 + 88));
        v24 = *(_WORD *)(v7 + 112);
        goto LABEL_51;
      }
      *(_DWORD *)(a1 + 72) |= 0x4000u;
      return 0LL;
    }
    v6 = *(_WORD *)(v7 + 116);
    v1 = v7;
  }
  while ( v6 == 4 );
  if ( v6 == 2 )
  {
    v39 = sub_406450(a1, v7, 1);
    *(_WORD *)(v7 + 112) = v39;
    if ( v39 == 1 )
    {
      v41 = *(_DWORD *)(a1 + 72);
      if ( !(v41 & 4) )
      {
        v42 = sub_406B50(*(_DWORD *)(a1 + 44), v41, 55);
        *(_DWORD *)(v7 + 68) = v42;
        if ( v42 < 0 )
        {
          v45 = *__errno_location();
          *(_WORD *)(v7 + 112) = 7;
          *(_DWORD *)(v7 + 64) = v45;
        }
        else
        {
          *(_WORD *)(v7 + 114) |= 2u;
        }
      }
    }
    *(_WORD *)(v7 + 116) = 3;
  }
LABEL_48:
  v25 = *(_QWORD *)(v7 + 8);
  v26 = *(_QWORD *)(v25 + 72);
  v27 = v26 - 1;
  if ( *(_BYTE *)(*(_QWORD *)(v25 + 56) + v26 - 1) != 47 )
    v27 = *(_QWORD *)(v25 + 72);
  v28 = (_BYTE *)(*(_QWORD *)(v4 + 32) + v27);
  *v28 = 47;
  memmove(v28 + 1, (const void *)(v7 + 264), *(_QWORD *)(v7 + 96) + 1LL);
  v24 = *(_WORD *)(v7 + 112);
LABEL_51:
  *(_QWORD *)v4 = v7;
  if ( v24 == 11 )
    goto LABEL_60;
LABEL_52:
  v1 = v7;
  if ( v24 == 1 )
    goto LABEL_53;
  return v1;
}

__int64 __fastcall fts_read(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // edx
  __int16 v3; // ax
  __int64 v4; // r12
  __int16 v5; // cx
  __int16 v6; // ax
  __int64 v7; // rbx
  __int16 v8; // ax
  int v9; // edi
  void *v11; // rdi
  int *v12; // rax
  _QWORD *v13; // rax
  void *v14; // rdi
  int v15; // edi
  void *v16; // rdi
  __int64 v17; // rdx
  void *v18; // rdi
  char *v19; // rax
  const void *v20; // r13
  size_t v21; // r14
  __int64 v22; // rax
  int v23; // edi
  __int16 v24; // ax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  _BYTE *v28; // rax
  __int16 v29; // ax
  __int64 v30; // rax
  int v31; // edi
  int v32; // eax
  int v33; // edi
  __int64 v34; // rbp
  int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int16 v39; // ax
  int v40; // esi
  int v41; // esi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax

  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 & 0x4000 )
    return 0LL;
  v3 = *(_WORD *)(v1 + 116);
  v4 = a1;
  *(_WORD *)(v1 + 116) = 3;
  if ( v3 == 1 )
  {
    *(_WORD *)(v1 + 112) = sub_406450(a1, v1, 0);
    return v1;
  }
  v5 = *(_WORD *)(v1 + 112);
  if ( v3 != 2 )
  {
    if ( v5 != 1 )
      goto LABEL_9;
    if ( v3 == 4 )
      goto LABEL_34;
    goto LABEL_24;
  }
  if ( (unsigned __int16)(v5 - 12) <= 1u )
  {
    v29 = sub_406450(a1, v1, 1);
    *(_WORD *)(v1 + 112) = v29;
    if ( v29 == 1 )
    {
      v40 = *(_DWORD *)(a1 + 72);
      if ( !(v40 & 4) )
      {
        v43 = sub_406B50(*(_DWORD *)(a1 + 44), v40, 55);
        *(_DWORD *)(v1 + 68) = v43;
        if ( v43 >= 0 )
        {
          *(_WORD *)(v1 + 114) |= 2u;
          v24 = *(_WORD *)(v1 + 112);
          v7 = v1;
          goto LABEL_51;
        }
        v44 = *__errno_location();
        *(_WORD *)(v1 + 112) = 7;
        *(_DWORD *)(v1 + 64) = v44;
        *(_QWORD *)a1 = v1;
        return v1;
      }
      *(_QWORD *)a1 = v1;
      v7 = v1;
LABEL_53:
      if ( *(_QWORD *)(v7 + 88) )
        goto LABEL_55;
      goto LABEL_54;
    }
    *(_QWORD *)a1 = v1;
    if ( v29 != 11 )
      return v1;
    v7 = v1;
LABEL_60:
    v30 = *(_QWORD *)(v7 + 168);
    if ( v30 != 2 )
    {
      if ( v30 == 1 )
        return v7;
      goto LABEL_117;
    }
    v34 = *(_QWORD *)(v7 + 8);
    if ( !*(_QWORD *)(v34 + 104)
      && (*(_DWORD *)(v4 + 72) & 0x18) == 24
      && (unsigned int)sub_406940(*(_QWORD *)(v7 + 8)) == 2 )
    {
      v24 = *(_WORD *)(v7 + 112);
      goto LABEL_52;
    }
    v24 = sub_406450(v4, v7, 0);
    v35 = *(_DWORD *)(v7 + 144);
    *(_WORD *)(v7 + 112) = v24;
    if ( (v35 & 0xF000) != 0x4000 )
      goto LABEL_52;
    if ( *(_QWORD *)(v7 + 88) )
    {
      v36 = *(_QWORD *)(v34 + 104);
      if ( (unsigned __int64)(v36 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        *(_QWORD *)(v34 + 104) = v36 - 1;
      if ( v24 != 1 )
        return v7;
LABEL_55:
      v1 = v7;
      if ( !(unsigned __int8)sub_406D70(*(_DWORD *)(v4 + 72), (_QWORD *)(v4 + 88), v7) )
      {
        v1 = 0LL;
        *__errno_location() = 12;
      }
      return v1;
    }
    if ( v24 != 1 )
      return v7;
LABEL_54:
    *(_QWORD *)(v4 + 24) = *(_QWORD *)(v7 + 120);
    goto LABEL_55;
  }
  if ( v5 == 1 )
  {
LABEL_24:
    if ( v2 & 0x40 && *(_QWORD *)(v1 + 120) != *(_QWORD *)(a1 + 24) )
    {
LABEL_34:
      if ( *(_BYTE *)(v1 + 114) & 2 )
        close(*(_DWORD *)(v1 + 68));
      v14 = *(void **)(a1 + 8);
      if ( v14 )
      {
        sub_406790(v14);
        *(_QWORD *)(v4 + 8) = 0LL;
      }
      v15 = *(_DWORD *)(v4 + 72);
      *(_WORD *)(v1 + 112) = 6;
      sub_406E20(v15, v4 + 88, (_QWORD *)v1);
      return v1;
    }
    v11 = *(void **)(a1 + 8);
    if ( v11 )
    {
      if ( !(v2 & 0x2000) )
      {
        if ( (unsigned int)sub_406BA0(v4, v1, -1, *(const char **)(v1 + 48)) )
        {
          v12 = __errno_location();
          v7 = *(_QWORD *)(v4 + 8);
          LODWORD(v12) = *v12;
          *(_WORD *)(v1 + 114) |= 1u;
          *(_DWORD *)(v1 + 64) = (_DWORD)v12;
          if ( v7 )
          {
            v13 = (_QWORD *)v7;
            do
            {
              v13[6] = *(_QWORD *)(v13[1] + 48LL);
              v13 = (_QWORD *)v13[2];
            }
            while ( v13 );
          }
        }
        else
        {
          v7 = *(_QWORD *)(v4 + 8);
        }
        goto LABEL_32;
      }
      BYTE1(v2) &= 0xDFu;
      *(_DWORD *)(v4 + 72) = v2;
      sub_406790(v11);
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    v7 = sub_406EC0((__int64 *)v4, 3);
    *(_QWORD *)(v4 + 8) = v7;
    if ( v7 )
    {
LABEL_32:
      *(_QWORD *)(v4 + 8) = 0LL;
      goto LABEL_48;
    }
    v31 = *(_DWORD *)(v4 + 72);
    if ( !(v31 & 0x4000) )
    {
      if ( *(_DWORD *)(v1 + 64) && *(_WORD *)(v1 + 112) != 4 )
        *(_WORD *)(v1 + 112) = 7;
      sub_406E20(v31, v4 + 88, (_QWORD *)v1);
      return v1;
    }
    return 0LL;
  }
  do
  {
LABEL_9:
    v7 = *(_QWORD *)(v1 + 16);
    if ( !v7 )
    {
      v7 = *(_QWORD *)(v1 + 8);
      if ( *(_QWORD *)(v7 + 24) )
      {
        v37 = *(_QWORD *)(v7 + 72);
        v38 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)a1 = v7;
        *(_BYTE *)(v38 + v37) = 0;
        v7 = sub_406EC0((__int64 *)a1, 3);
        if ( v7 )
        {
          free((void *)v1);
          goto LABEL_48;
        }
        if ( *(_BYTE *)(a1 + 73) & 0x40 )
          return 0LL;
        v7 = *(_QWORD *)(v1 + 8);
      }
      *(_QWORD *)a1 = v7;
      free((void *)v1);
      if ( *(_QWORD *)(v7 + 88) == -1LL )
      {
        v1 = 0LL;
        free((void *)v7);
        *__errno_location() = 0;
        *(_QWORD *)a1 = 0LL;
        return v1;
      }
      if ( *(_WORD *)(v7 + 112) != 11 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + *(_QWORD *)(v7 + 72)) = 0;
        if ( *(_QWORD *)(v7 + 88) )
        {
          v8 = *(_WORD *)(v7 + 114);
          if ( v8 & 2 )
          {
            v32 = *(_DWORD *)(a1 + 72);
            v33 = *(_DWORD *)(v7 + 68);
            if ( !(v32 & 4) )
            {
              if ( v32 & 0x200 )
              {
                sub_4069B0(v4, v33, 1);
                v33 = *(_DWORD *)(v7 + 68);
              }
              else
              {
                if ( fchdir(v33) )
                {
                  *(_DWORD *)(v7 + 64) = *__errno_location();
                  *(_DWORD *)(v4 + 72) |= 0x4000u;
                }
                v33 = *(_DWORD *)(v7 + 68);
              }
            }
            close(v33);
          }
          else if ( !(v8 & 1) && (unsigned int)sub_406BA0(a1, *(_QWORD *)(v7 + 8), -1, "..") )
          {
            goto LABEL_81;
          }
        }
        else if ( (unsigned int)sub_406A20(a1) )
        {
LABEL_81:
          *(_DWORD *)(v7 + 64) = *__errno_location();
          *(_DWORD *)(a1 + 72) |= 0x4000u;
          if ( *(_WORD *)(v7 + 112) == 2 )
            return 0LL;
          v9 = *(_DWORD *)(a1 + 72);
LABEL_17:
          if ( *(_DWORD *)(v7 + 64) )
          {
            *(_WORD *)(v7 + 112) = 7;
          }
          else
          {
            *(_WORD *)(v7 + 112) = 6;
            sub_406E20(v9, v4 + 88, (_QWORD *)v7);
            v9 = *(_DWORD *)(v4 + 72);
          }
LABEL_19:
          if ( v9 & 0x4000 )
            return 0LL;
          return v7;
        }
        v9 = *(_DWORD *)(v4 + 72);
        if ( *(_WORD *)(v7 + 112) == 2 )
          goto LABEL_19;
        goto LABEL_17;
      }
LABEL_117:
      abort();
    }
    *(_QWORD *)a1 = v7;
    free((void *)v1);
    if ( !*(_QWORD *)(v7 + 88) )
    {
      if ( !(unsigned int)sub_406A20(a1) )
      {
        v16 = *(void **)(a1 + 88);
        if ( *(_DWORD *)(v4 + 72) & 0x102 )
        {
          if ( v16 )
            sub_40A160(v16);
        }
        else
        {
          free(v16);
        }
        v17 = *(_QWORD *)(v7 + 96);
        v18 = *(void **)(v4 + 32);
        *(_QWORD *)(v7 + 72) = v17;
        memmove(v18, (const void *)(v7 + 264), v17 + 1);
        v19 = strrchr((const char *)(v7 + 264), 47);
        if ( v19 && ((char *)(v7 + 264) != v19 || *(_BYTE *)(v7 + 265)) )
        {
          v20 = v19 + 1;
          v21 = strlen(v19 + 1);
          memmove((void *)(v7 + 264), v20, v21 + 1);
          *(_QWORD *)(v7 + 96) = v21;
        }
        v22 = *(_QWORD *)(v4 + 32);
        v23 = *(_DWORD *)(v4 + 72);
        *(_QWORD *)(v7 + 56) = v22;
        *(_QWORD *)(v7 + 48) = v22;
        sub_406AF0(v23, (__int64 *)(v4 + 88));
        v24 = *(_WORD *)(v7 + 112);
        goto LABEL_51;
      }
      *(_DWORD *)(a1 + 72) |= 0x4000u;
      return 0LL;
    }
    v6 = *(_WORD *)(v7 + 116);
    v1 = v7;
  }
  while ( v6 == 4 );
  if ( v6 == 2 )
  {
    v39 = sub_406450(a1, v7, 1);
    *(_WORD *)(v7 + 112) = v39;
    if ( v39 == 1 )
    {
      v41 = *(_DWORD *)(a1 + 72);
      if ( !(v41 & 4) )
      {
        v42 = sub_406B50(*(_DWORD *)(a1 + 44), v41, 55);
        *(_DWORD *)(v7 + 68) = v42;
        if ( v42 < 0 )
        {
          v45 = *__errno_location();
          *(_WORD *)(v7 + 112) = 7;
          *(_DWORD *)(v7 + 64) = v45;
        }
        else
        {
          *(_WORD *)(v7 + 114) |= 2u;
        }
      }
    }
    *(_WORD *)(v7 + 116) = 3;
  }
LABEL_48:
  v25 = *(_QWORD *)(v7 + 8);
  v26 = *(_QWORD *)(v25 + 72);
  v27 = v26 - 1;
  if ( *(_BYTE *)(*(_QWORD *)(v25 + 56) + v26 - 1) != 47 )
    v27 = *(_QWORD *)(v25 + 72);
  v28 = (_BYTE *)(*(_QWORD *)(v4 + 32) + v27);
  *v28 = 47;
  memmove(v28 + 1, (const void *)(v7 + 264), *(_QWORD *)(v7 + 96) + 1LL);
  v24 = *(_WORD *)(v7 + 112);
LABEL_51:
  *(_QWORD *)v4 = v7;
  if ( v24 == 11 )
    goto LABEL_60;
LABEL_52:
  v1 = v7;
  if ( v24 == 1 )
    goto LABEL_53;
  return v1;
}

__int64 __fastcall fts_set(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  if ( a3 > 4 )
  {
    *__errno_location() = 22;
    result = 1LL;
  }
  else
  {
    *(_WORD *)(a2 + 116) = a3;
    result = 0LL;
  }
  return result;
}

__int64 __fastcall fts_children(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int *v3; // rax
  int *v4; // r13
  __int64 v5; // r12
  __int16 v6; // dx
  __int64 result; // rax
  void *v8; // rdi
  int v9; // er14
  int v10; // esi
  int v11; // ebp
  int v12; // ebx

  v2 = a1;
  v3 = __errno_location();
  v4 = v3;
  if ( a2 & 0xFFFFDFFF )
  {
    *v3 = 22;
    return 0LL;
  }
  v5 = *(_QWORD *)a1;
  *v3 = 0;
  if ( *(_BYTE *)(a1 + 73) & 0x40 )
    return 0LL;
  v6 = *(_WORD *)(v5 + 112);
  if ( v6 == 9 )
    return *(_QWORD *)(v5 + 16);
  result = 0LL;
  if ( v6 == 1 )
  {
    v8 = *(void **)(a1 + 8);
    if ( v8 )
      sub_406790(v8);
    v9 = 1;
    if ( a2 == 0x2000 )
    {
      *(_DWORD *)(v2 + 72) |= 0x2000u;
      v9 = 2;
    }
    if ( *(_QWORD *)(v5 + 88) || **(_BYTE **)(v5 + 48) == 47 || (v10 = *(_DWORD *)(v2 + 72), v10 & 4) )
    {
      result = sub_406EC0((__int64 *)v2, v9);
      *(_QWORD *)(v2 + 8) = result;
      return result;
    }
    v11 = sub_406B50(*(_DWORD *)(v2 + 44), v10, 55);
    if ( v11 < 0 )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      result = 0LL;
    }
    else
    {
      *(_QWORD *)(v2 + 8) = sub_406EC0((__int64 *)v2, v9);
      if ( *(_BYTE *)(v2 + 73) & 2 )
      {
        sub_4069B0(v2, v11, 1);
        return *(_QWORD *)(v2 + 8);
      }
      if ( !fchdir(v11) )
      {
        close(v11);
        return *(_QWORD *)(v2 + 8);
      }
      v12 = *v4;
      close(v11);
      result = 0LL;
      *v4 = v12;
    }
  }
  return result;
}

__int64 __fastcall sub_4086A0(__int64 a1, int *a2)
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

__int64 __fastcall sub_408780(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_408DA0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_4086A0(a2, a7);
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
        sub_4086A0((__int64)v11, a7);
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
            return (unsigned int)sub_408780(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408780(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_408780(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_409370(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_6104C0 = dword_6102FC;
  dword_6104C4 = dword_6102F8;
  result = sub_408DA0(a1, a2, a3, a4, a5, a6, &dword_6104C0, a7);
  dword_6102FC = dword_6104C0;
  qword_610508 = qword_6104D0;
  dword_6102F4 = dword_6104C8;
  return result;
}

__int64 __fastcall sub_4093D0(int a1, __int64 a2, char *a3)
{
  return sub_409370(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_4093F0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409370(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_409410(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408DA0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_409430(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409370(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_409450(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408DA0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409470(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409630(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_4094F0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40AFB0(stream);
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

void __fastcall sub_409550(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 9827862;
}

__int64 __fastcall sub_409560(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 24) != 9827862 )
    __assert_fail("state->magic == 9827862", "lib/cycle-check.c", 0x3Cu, "cycle_check");
  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2[1];
  if ( !v2 )
  {
    *(_QWORD *)(a1 + 16) = 1LL;
    goto LABEL_7;
  }
  if ( *(_QWORD *)a1 == v3 && *a2 == *(_QWORD *)(a1 + 8) )
    return 1LL;
  *(_QWORD *)(a1 + 16) = v2 + 1;
  if ( (v2 + 1) & v2 )
    return 0LL;
  if ( v2 != -1 )
  {
LABEL_7:
    v5 = *a2;
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = v5;
    return 0LL;
  }
  return 1LL;
}

__int64 __fastcall sub_4095E0(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp-28h]

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = v6;
  v4 = open(a1, a2, v3);
  return sub_40AF60(v4);
}

bool __fastcall sub_409630(int a1)
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

unsigned __int64 __fastcall sub_409690(unsigned __int64 a1)
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

unsigned __int64 __fastcall sub_409730(__int64 a1, unsigned __int64 a2)
{
  return __ROR8__(a1, 3) % a2;
}

bool __fastcall sub_409740(__int64 a1, __int64 a2)
{
  return a1 == a2;
}

__int64 __fastcall sub_409750(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_409750(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_409780(__int64 a1, __int64 a2, __m128i **a3, char a4)
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
  v7 = (__m128i *)sub_409750(a1, a2);
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

__int64 __fastcall sub_4098A0(float **a1)
{
  float *v1; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == (float *)&unk_40D6F0 )
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
    *a1 = (float *)&unk_40D6F0;
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_409920(__int64 a1, __int64 a2, char a3)
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
              v8 = (_QWORD *)sub_409750(a1, *v6);
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
    v10 = (_QWORD *)sub_409750(a1, v5);
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

__int64 __fastcall sub_409CB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = (_QWORD *)sub_409750(a1, a2);
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

__int64 __fastcall sub_409D60(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)sub_409750(a1, a2);
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

__int64 __fastcall sub_409E40(__int64 a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
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

_QWORD *__fastcall sub_409F20(unsigned __int64 a1, __int64 a2, unsigned __int64 (__fastcall *a3)(__int64 a1, unsigned __int64 a2), bool (__fastcall *a4)(__int64 a1, __int64 a2), __int64 a5)
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
    v7 = sub_409730;
  if ( !a4 )
    v6 = sub_409740;
  v9 = (char *)malloc(0x50uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = (float **)(v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_4098A0(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_409690(v8);
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
      *((_QWORD *)v9 + 5) = &unk_40D6F0;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_4098A0(v11) )
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

void __fastcall sub_40A160(void *ptr)
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

__int64 __fastcall sub_40A240(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_409690(a2);
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
  v14 = sub_409920((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_409920(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_409920(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_40A240(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_409690(a2);
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
  v14 = sub_409920((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_409920(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_409920(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_40A440(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_409780(a1, a2, (__m128i **)&v26, 0);
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
        sub_4098A0((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40A240(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_409780(a1, v4, (__m128i **)&v26, 0) )
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

__int64 __fastcall sub_40A440(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_409780(a1, a2, (__m128i **)&v26, 0);
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
        sub_4098A0((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40A240(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_409780(a1, v4, (__m128i **)&v26, 0) )
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

__int64 __fastcall sub_40A6C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h]

  v2 = a2;
  v3 = sub_40A440(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    v2 = v5;
  return v2;
}

__int64 __fastcall sub_40A700(__int64 a1, __int64 a2)
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
  v3 = sub_409780(a1, a2, (__m128i **)&v24, 1);
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
    sub_4098A0((float **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40A240(a1, v17) )
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

void __fastcall sub_40A8E0(__int64 a1, int a2)
{
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = a2;
}

__int64 __fastcall sub_40A900(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 28);
}

__int64 __fastcall sub_40A910(__int64 a1, int a2)
{
  char v2; // dl
  int v3; // ecx
  _DWORD *v4; // r8
  __int64 result; // rax
  int v6; // esi

  v2 = *(_BYTE *)(a1 + 28) ^ 1;
  v3 = (v2 + (unsigned __int8)*(_DWORD *)(a1 + 20)) & 3;
  v4 = (_DWORD *)(a1 + 4LL * ((v2 + (unsigned __int8)*(_DWORD *)(a1 + 20)) & 3));
  result = (unsigned int)*v4;
  *v4 = a2;
  v6 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 20) = v3;
  if ( v6 == v3 )
    *(_DWORD *)(a1 + 24) = ((_BYTE)v6 + v2) & 3;
  *(_BYTE *)(a1 + 28) = 0;
  return result;
}

__int64 __fastcall sub_40A950(__int64 a1)
{
  _DWORD *v1; // rcx
  int v2; // edx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) )
    abort();
  v1 = (_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 20));
  v2 = *(_DWORD *)(a1 + 20);
  result = (unsigned int)*v1;
  *v1 = *(_DWORD *)(a1 + 16);
  if ( v2 == *(_DWORD *)(a1 + 24) )
    *(_BYTE *)(a1 + 28) = 1;
  else
    *(_DWORD *)(a1 + 20) = ((_BYTE)v2 + 3) & 3;
  return result;
}

__int64 __fastcall sub_40A950(__int64 a1)
{
  _DWORD *v1; // rcx
  int v2; // edx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) )
    abort();
  v1 = (_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 20));
  v2 = *(_DWORD *)(a1 + 20);
  result = (unsigned int)*v1;
  *v1 = *(_DWORD *)(a1 + 16);
  if ( v2 == *(_DWORD *)(a1 + 24) )
    *(_BYTE *)(a1 + 28) = 1;
  else
    *(_DWORD *)(a1 + 20) = ((_BYTE)v2 + 3) & 3;
  return result;
}

const char *sub_40A9A0()
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
                sub_40AFB0(v60);
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
            sub_40AFB0(v39);
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

__int64 __fastcall sub_40AF10(int a1, const char *a2, char a3, unsigned int a4)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v7; // [rsp+38h] [rbp-20h]

  v7 = a4;
  v4 = 0LL;
  if ( a3 & 0x40 )
    v4 = v7;
  v5 = openat(a1, a2, a3, v4);
  return sub_40AF60(v5);
}

__int64 __fastcall sub_40AF60(int fd)
{
  __int64 result; // rax
  unsigned int v2; // er12
  int *v3; // rax
  int v4; // er13
  int *v5; // rbp

  if ( (unsigned int)fd > 2 )
    return (unsigned int)fd;
  v2 = sub_40B170();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

int __fastcall sub_40AFB0(FILE *stream)
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
  if ( !sub_406300(stream) )
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

__int64 __fastcall sub_40B030(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_610500 < 0 )
    {
      v3 = sub_40B030(a1);
      if ( v3 >= 0 && dword_610500 == -1 )
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
        dword_610500 = 1;
      }
      else
      {
        v3 = sub_40B030(a1);
        if ( v3 >= 0 )
        {
          dword_610500 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

__int64 __fastcall sub_40B170(char a1)
{
  return sub_40B030(a1, 0, 3LL);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40B1F0(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_610268 )
    v1 = (void *)unk_610268;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40B208(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_60FE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
