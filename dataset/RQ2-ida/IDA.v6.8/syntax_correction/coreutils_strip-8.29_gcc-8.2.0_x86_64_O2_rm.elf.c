#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(signed int a1, char **a2, char **a3)
{
  signed int v3; // er12@1
  char **v4; // rbp@1
  char v5; // bl@1
  char v6; // r13@1
  int v7; // eax@2
  bool v8; // cf@7
  bool v9; // zf@7
  const char *v10; // rdi@9
  signed __int64 v11; // rcx@9
  char *v12; // rsi@9
  signed __int64 i; // rbx@22
  char *v14; // r13@24
  __int64 v15; // rax@29
  int v16; // eax@29
  signed __int64 v17; // rbp@48
  int v18; // er12@49
  __int64 v19; // rbx@49
  unsigned __int64 v20; // rcx@51
  __int64 v21; // r12@51
  char *v22; // rdx@51
  int v23; // eax@53
  int v24; // edx@53
  __int64 result; // rax@53
  unsigned __int64 v26; // rcx@59
  __int64 v27; // rax@62
  char *v28; // rbx@62
  __int64 v29; // r12@62
  char *v30; // rax@62
  __int64 v31; // rax@64
  __int64 v32; // rax@65
  __int64 v33; // rbp@65
  char *v34; // rbx@65
  int *v35; // rax@65
  char *v36; // rax@66
  char *v37; // rax@67
  char v38; // [sp+0h] [bp-D8h]@1
  int v39; // [sp+4h] [bp-D4h]@1
  __int16 v40; // [sp+8h] [bp-D0h]@1
  char v41; // [sp+Ah] [bp-CEh]@1
  __int64 v42; // [sp+10h] [bp-C8h]@1
  bool v43; // [sp+18h] [bp-C0h]@1
  __int16 v44; // [sp+19h] [bp-BFh]@1
  struct stat stat_buf; // [sp+20h] [bp-B8h]@61

  v3 = a1;
  v4 = a2;
  v5 = 1;
  sub_403D10(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40B1F0(
    sub_4039D0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  v38 = 0;
  v39 = 4;
  v40 = 0;
  v41 = 0;
  v42 = 0LL;
  v43 = isatty(0) != 0;
  v6 = 0;
  v44 = 0;
  while ( 1 )
  {
    v7 = sub_4093F0((unsigned int)v3, v4, "dfirvIR", &off_40BD60, 0LL);
    if ( v7 == -1 )
      break;
    if ( v7 == 105 )
      goto LABEL_32;
    if ( v7 <= 105 )
    {
      if ( v7 == 73 )
        goto LABEL_41;
      if ( v7 <= 73 )
      {
        if ( v7 == -131 )
        {
          sub_405E00((char)stdout);
          exit(0);
        }
        if ( v7 == -130 )
          sub_402450(0);
LABEL_22:
        for ( i = 1LL; ; ++i )
        {
          if ( v3 <= (signed int)i )
            goto LABEL_63;
          v14 = v4[i];
          if ( *v14 == 45 && v14[1] && !__lxstat(1, v4[i], &stat_buf) )
            break;
        }
        sub_4056E0(4LL, v14);
        LODWORD(v27) = sub_405600(1LL, 3LL, v14);
        v28 = *v4;
        v29 = v27;
        v30 = dcgettext(0LL, "Try '%s ./%s' to remove the file %s.\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v28, v29);
LABEL_63:
        sub_402450(1);
      }
      if ( v7 == 100 )
      {
        v41 = 1;
      }
      else if ( v7 == 102 )
      {
        v39 = 5;
        v6 = 0;
        v38 = 1;
      }
      else
      {
        if ( v7 != 82 )
          goto LABEL_22;
LABEL_34:
        HIBYTE(v40) = 1;
      }
    }
    else if ( v7 == 129 )
    {
      LOBYTE(v40) = 1;
    }
    else if ( v7 <= 129 )
    {
      if ( v7 == 118 )
      {
        LOBYTE(v44) = 1;
      }
      else
      {
        if ( v7 != 128 )
        {
          if ( v7 != 114 )
            goto LABEL_22;
          goto LABEL_34;
        }
        if ( !qword_610508 )
          goto LABEL_32;
        LODWORD(v15) = sub_403900("--interactive", qword_610508, off_40BD20, dword_40BCF0, 4LL, off_610278);
        v16 = dword_40BCF0[v15];
        if ( v16 == 1 )
        {
LABEL_41:
          v39 = 4;
          v6 = 1;
          v38 = 0;
        }
        else if ( v16 )
        {
          if ( v16 == 2 )
          {
LABEL_32:
            v39 = 3;
            v6 = 0;
            v38 = 0;
          }
        }
        else
        {
          v39 = 5;
          v6 = 0;
        }
      }
    }
    else
    {
      v8 = (unsigned int)v7 < 0x83;
      v9 = v7 == 131;
      if ( v7 == 131 )
      {
        v5 = 1;
      }
      else if ( v7 >= 131 )
      {
        if ( v7 != 132 )
          goto LABEL_22;
        v43 = 1;
      }
      else
      {
        v10 = "--no-preserve-root";
        v11 = 19LL;
        v12 = v4[dword_6102FC - 1];
        do
        {
          if ( !v11 )
            break;
          v8 = (unsigned __int8)*v12 < *v10;
          v9 = *v12++ == *v10++;
          --v11;
        }
        while ( v9 );
        if ( (!v8 && !v9) != v8 )
          goto LABEL_66;
        v5 = 0;
      }
    }
  }
  if ( dword_6102FC >= v3 )
  {
    if ( !v38 )
    {
LABEL_67:
      v37 = dcgettext(0LL, "missing operand", 5);
      error(0, 0, v37, *(_QWORD *)&v38, *(_QWORD *)&v40);
      goto LABEL_63;
    }
    return 0LL;
  }
  if ( HIBYTE(v40) )
  {
    if ( v5 )
    {
      LODWORD(v31) = sub_405950(&unk_610340);
      v42 = v31;
      if ( !v31 )
      {
        LODWORD(v32) = sub_4056E0(4LL, "/");
        v33 = v32;
        v34 = dcgettext(0LL, "failed to get attributes of %s", 5);
        v35 = __errno_location();
        error(1, *v35, v34, v33, *(_QWORD *)&v38, *(_QWORD *)&v40, v42, *(_QWORD *)&v43);
LABEL_66:
        v36 = dcgettext(0LL, "you may not abbreviate the --no-preserve-root option", 5);
        error(1, 0, v36, *(_QWORD *)&v38, *(_QWORD *)&v40);
        goto LABEL_67;
      }
    }
  }
  v17 = (signed __int64)&v4[dword_6102FC];
  if ( !v6 )
    goto LABEL_53;
  v18 = v3 - dword_6102FC;
  v19 = v18;
  if ( !HIBYTE(v40) )
  {
    if ( (unsigned __int64)v18 > 3 )
    {
      v20 = v18;
      v21 = qword_610368;
      v22 = dcngettext(0LL, "%s: remove %lu argument? ", "%s: remove %lu arguments? ", v20, 5);
      goto LABEL_52;
    }
    goto LABEL_53;
  }
  v26 = v18;
  v21 = qword_610368;
  v22 = dcngettext(0LL, "%s: remove %lu argument recursively? ", "%s: remove %lu arguments recursively? ", v26, 5);
LABEL_52:
  __fprintf_chk(stderr, 1LL, v22, v21, v19);
  if ( !(unsigned __int8)sub_406290() )
    return 0LL;
LABEL_53:
  v23 = sub_402F50(v17, &v38);
  v24 = v23 - 2;
  result = v23 == 4;
  if ( (unsigned int)v24 > 2 )
    __assert_fail("VALID_STATUS (status)", "src/rm.c", 0x163u, "main");
  return result;
}

int sub_40239B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_4023BA()
{
  return 0;
}

int sub_4023F1()
{
  int result; // eax@4

  if ( !byte_610328 )
  {
    while ( qword_610330 < (unsigned __int64)(((&unk_60FE48 - (_UNKNOWN *)&qword_60FE40) >> 3) - 1) )
      (*(&qword_60FE40 + ++qword_610330))();
    result = sub_40239B();
    byte_610328 = 1;
  }
  return result;
}

int sub_402448()
{
  return sub_4023BA();
}

noreturn void __fastcall  sub_402450(int status)
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
  __int64 v20; // rbp@4
  char *v21; // rax@4
  FILE *v22; // rbp@4
  char *v23; // rax@4
  __int64 *v24; // rax@4
  _BYTE *v25; // rdi@5
  bool v26; // cf@5
  bool v27; // zf@5
  _BYTE *v28; // rsi@6
  signed __int64 v29; // rcx@6
  void *v30; // rbp@10
  char *v31; // rax@11
  char *v32; // rax@11
  char *v33; // rax@13
  char *v34; // rax@14
  char *v35; // rax@15
  char *v36; // rax@15
  char *v37; // rax@17
  char *v38; // rax@19
  void *v39; // [sp+0h] [bp-88h]@4
  const char *v40; // [sp+8h] [bp-80h]@4
  const char *v41; // [sp+10h] [bp-78h]@4
  const char *v42; // [sp+18h] [bp-70h]@4
  const char *v43; // [sp+20h] [bp-68h]@4
  const char *v44; // [sp+28h] [bp-60h]@4
  const char *v45; // [sp+30h] [bp-58h]@4
  const char *v46; // [sp+38h] [bp-50h]@4
  const char *v47; // [sp+40h] [bp-48h]@4
  const char *v48; // [sp+48h] [bp-40h]@4
  const char *v49; // [sp+50h] [bp-38h]@4
  const char *v50; // [sp+58h] [bp-30h]@4
  __int64 v51; // [sp+60h] [bp-28h]@4
  __int64 v52; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_610368;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2, v4);
    goto LABEL_3;
  }
  v5 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v5, v2);
  v6 = stdout;
  v7 = dcgettext(
         0LL,
         "Remove (unlink) the FILE(s).\n"
         "\n"
         "  -f, --force           ignore nonexistent files and arguments, never prompt\n"
         "  -i                    prompt before every removal\n",
         5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "  -I                    prompt once before removing more than three files, or\n"
         "                          when removing recursively; less intrusive than -i,\n"
         "                          while still giving protection against most mistakes\n"
         "      --interactive[=WHEN]  prompt according to WHEN: never, once (-I), or\n"
         "                          always (-i); without WHEN, prompt always\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "      --one-file-system  when removing a hierarchy recursively, skip any\n"
          "                          directory that is on a file system different from\n"
          "                          that of the corresponding command line argument\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "      --no-preserve-root  do not treat '/' specially\n"
          "      --preserve-root   do not remove '/' (default)\n"
          "  -r, -R, --recursive   remove directories and their contents recursively\n"
          "  -d, --dir             remove empty directories\n"
          "  -v, --verbose         explain what is being done\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(
          0LL,
          "\n"
          "By default, rm does not remove directories.  Use the --recursive (-r or -R)\n"
          "option to remove each listed directory, too, along with all of its contents.\n",
          5);
  fputs_unlocked(v19, v18);
  v20 = qword_610368;
  v21 = dcgettext(
          0LL,
          "\n"
          "To remove a file whose name starts with a '-', for example '-foo',\n"
          "use one of these commands:\n"
          "  %s -- -foo\n"
          "\n"
          "  %s ./-foo\n",
          5);
  __printf_chk(1LL, v21, v20);
  v22 = stdout;
  v23 = dcgettext(
          0LL,
          "\n"
          "Note that if you use rm to remove a file, it might be possible to recover\n"
          "some of its contents, given sufficient expertise and/or time.  For greater\n"
          "assurance that the contents are truly unrecoverable, consider using shred.\n",
          5);
  fputs_unlocked(v23, v22);
  v39 = &unk_40B247;
  v24 = (__int64 *)&v39;
  v40 = "test invocation";
  v41 = "coreutils";
  v42 = "Multi-call invocation";
  v43 = "sha224sum";
  v44 = "sha2 utilities";
  v45 = "sha256sum";
  v46 = "sha2 utilities";
  v47 = "sha384sum";
  v48 = "sha2 utilities";
  v49 = "sha512sum";
  v50 = "sha2 utilities";
  v51 = 0LL;
  v52 = 0LL;
  do
  {
    v24 += 2;
    v25 = (_BYTE *)*v24;
    v26 = 0;
    v27 = *v24 == 0;
    if ( !*v24 )
      break;
    v28 = &unk_40B244;
    v29 = 3LL;
    do
    {
      if ( !v29 )
        break;
      v26 = *v28 < *v25;
      v27 = *v28++ == *v25++;
      --v29;
    }
    while ( v27 );
  }
  while ( (!v26 && !v27) != v26 );
  v30 = (void *)v24[1];
  if ( v30 )
  {
    v31 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v31, &unk_40B2BD);
    v32 = setlocale(5, 0LL);
    if ( !v32 || !strncmp(v32, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v35 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v35, &unk_40B2BD);
    v36 = setlocale(5, 0LL);
    if ( !v36 || !strncmp(v36, "en_", 3uLL) )
    {
      v30 = &unk_40B244;
      v37 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v37, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v30 = &unk_40B244;
  }
  v38 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v38, &unk_40B244);
LABEL_13:
  v33 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v33, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v34 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v34, v30);
LABEL_3:
  exit(v1);
}

signed __int64 __fastcall sub_402820(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // r13@1
  __int64 v5; // r12@1
  int *v6; // rax@2
  unsigned __int64 v7; // rdx@2
  int *v8; // r13@2
  signed __int64 result; // rax@4
  __int64 v10; // rax@9
  __int64 v11; // rbp@9
  char *v12; // rax@9
  __int64 v13; // rax@9
  signed __int64 v14; // rax@18
  int v15; // eax@19
  __int64 v16; // rax@23
  __int64 v17; // rbx@23
  char *v18; // rsi@24
  __int64 v19; // [sp+0h] [bp-B8h]@26

  v4 = a4;
  v5 = a3;
  if ( unlinkat(*(_DWORD *)(a1 + 44), *(const char **)(a2 + 48), (a4 != 0) << 9) )
  {
    v6 = __errno_location();
    v7 = (unsigned int)*v6;
    v8 = v6;
    if ( (_DWORD)v7 == 30 )
    {
      if ( !__fxstatat(1, *(_DWORD *)(a1 + 44), *(const char **)(a2 + 48), (struct stat *)&v19, 256)
        || (v7 = (unsigned int)*v8, (_DWORD)v7 != 2) )
      {
        *v8 = 30;
        goto LABEL_9;
      }
      result = 2LL;
      if ( *(_BYTE *)v5 )
        return result;
      if ( *(_WORD *)(a2 + 112) != 4 )
        goto LABEL_9;
      goto LABEL_18;
    }
    if ( *(_BYTE *)v5 )
    {
      result = 2LL;
      if ( (_DWORD)v7 == 20 )
        return result;
      if ( (signed int)v7 <= 20 )
      {
        if ( (_DWORD)v7 == 2 )
          return result;
        if ( *(_WORD *)(a2 + 112) != 4 )
          goto LABEL_9;
LABEL_17:
        if ( (unsigned int)v7 > 0x27 )
          goto LABEL_9;
LABEL_18:
        v14 = 549759090688LL;
        if ( _bittest64(&v14, v7) )
        {
          v15 = *(_DWORD *)(a2 + 64);
          if ( v15 == 1 || v15 == 13 )
            *v8 = v15;
        }
        goto LABEL_9;
      }
      if ( (_DWORD)v7 == 22 || (_DWORD)v7 == 84 )
        return result;
    }
    if ( *(_WORD *)(a2 + 112) != 4 )
    {
LABEL_9:
      LODWORD(v10) = sub_4056E0(4LL, *(_QWORD *)(a2 + 56));
      v11 = v10;
      v12 = dcgettext(0LL, "cannot remove %s", 5);
      error(0, *v8, v12, v11);
      v13 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(v13 + 88) >= 0 )
      {
        do
        {
          if ( *(_QWORD *)(v13 + 32) )
            break;
          *(_QWORD *)(v13 + 32) = 1LL;
          v13 = *(_QWORD *)(v13 + 8);
        }
        while ( *(_QWORD *)(v13 + 88) >= 0LL );
      }
      return 4LL;
    }
    goto LABEL_17;
  }
  result = 2LL;
  if ( *(_BYTE *)(v5 + 25) )
  {
    LODWORD(v16) = sub_4056E0(4LL, *(_QWORD *)(a2 + 56));
    v17 = v16;
    if ( v4 )
      v18 = dcgettext(0LL, "removed directory %s\n", 5);
    else
      v18 = dcgettext(0LL, "removed %s\n", 5);
    __printf_chk(1LL, v18, v17);
    result = 2LL;
  }
  return result;
}

__int64 __fastcall sub_402A30(int fildes, char *filename, struct stat *stat_buf)
{
  __off_t v3; // rax@1
  struct stat *v4; // rbx@1
  int *v6; // rax@5
  __ino_t v7; // rcx@5
  int v8; // edx@5

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

signed __int64 __fastcall sub_402AA0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, int a5, signed int *a6)
{
  __int64 v6; // rbp@1
  DIR *v7; // rdi@1
  const char *v8; // r13@1
  signed int *v9; // r12@2
  int v10; // ebx@2
  int v11; // eax@2
  DIR *v12; // r14@3
  struct dirent *v13; // rax@5
  signed int v14; // eax@8
  int v15; // eax@11
  signed int v16; // er12@19
  signed int v17; // er15@20
  struct stat *v18; // r12@21
  __int64 v19; // rax@23
  __int64 v20; // rbp@23
  __int64 v21; // r12@23
  char *v22; // rax@24
  FILE *v23; // rdi@25
  __int64 v25; // rax@38
  __int64 v26; // rbx@38
  char *v27; // rax@39
  __int64 v28; // rax@43
  __int64 v29; // rbx@43
  __int64 v30; // rbp@45
  char *v31; // rdx@46
  char v32; // al@48
  int v33; // ST18_4@51
  int v34; // eax@54
  __int64 v35; // rax@56
  __int64 v36; // rax@58
  char *v37; // rbp@64
  int *v38; // rax@64
  __int64 v39; // [sp+8h] [bp-E0h]@1
  int fd; // [sp+10h] [bp-D8h]@1
  int v41; // [sp+14h] [bp-D4h]@1
  int v42; // [sp+18h] [bp-D0h]@3
  int *v43; // [sp+18h] [bp-D0h]@4
  struct stat stat_buf; // [sp+20h] [bp-C8h]@2

  v6 = a4;
  v7 = (DIR *)*(_DWORD *)(a1 + 44);
  v41 = a5;
  v8 = *(const char **)(a2 + 48);
  fd = (signed int)v7;
  v39 = *(_QWORD *)(a2 + 56);
  if ( a6 )
  {
    *a6 = 2;
    v9 = a6;
    stat_buf.st_size = -1LL;
    v10 = 4 * (a3 != 0);
    v11 = openat((int)v7, v8, 198912);
    if ( v11 < 0 )
      goto LABEL_8;
    v42 = v11;
    v12 = fdopendir(v11);
    if ( !v12 )
    {
      v7 = (DIR *)(unsigned int)v42;
      close(v42);
      v14 = 3;
      goto LABEL_9;
    }
    v43 = __errno_location();
    *v43 = 0;
    while ( 1 )
    {
      v13 = readdir(v12);
      if ( !v13 )
        break;
      if ( v13->d_name[0] == 46 )
      {
        v32 = v13->d_name[(v13->d_name[1] == 46) + 1];
        if ( !v32 || v32 == 47 )
          continue;
      }
      v7 = v12;
      closedir(v12);
      goto LABEL_8;
    }
    v7 = v12;
    v33 = *v43;
    closedir(v12);
    if ( v33 )
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
  if ( *(_QWORD *)(a2 + 32) )
    return 3LL;
  v15 = *(_DWORD *)(v6 + 4);
  if ( v15 == 5 )
    return 2LL;
  if ( *(_BYTE *)v6 )
    goto LABEL_31;
  if ( v15 != 3 && !*(_BYTE *)(v6 + 24) )
    return 2LL;
  if ( (unsigned __int8)sub_405F40(v7) )
    goto LABEL_68;
  if ( (unsigned int)sub_402A30(fd, (char *)v8, &stat_buf) )
  {
LABEL_57:
    v16 = *__errno_location();
    goto LABEL_58;
  }
  if ( (stat_buf.st_mode & 0xF000) == 40960 || !faccessat(fd, v8, 2, 512) )
  {
LABEL_68:
    v15 = *(_DWORD *)(v6 + 4);
LABEL_31:
    if ( v15 != 3 )
      return 2LL;
    v17 = 0;
    goto LABEL_33;
  }
  v16 = *__errno_location();
  if ( v16 != 13 )
  {
LABEL_58:
    LODWORD(v36) = sub_4056E0(4LL, v39);
    v26 = v36;
    goto LABEL_39;
  }
  v17 = 1;
LABEL_33:
  if ( !v10 )
  {
    v18 = &stat_buf;
    if ( !(unsigned int)sub_402A30(fd, (char *)v8, &stat_buf) )
    {
      v34 = stat_buf.st_mode & 0xF000;
      if ( v34 == 40960 )
      {
        if ( *(_DWORD *)(v6 + 4) != 3 )
          return 2LL;
        goto LABEL_56;
      }
      if ( v34 != 0x4000 )
      {
LABEL_56:
        LODWORD(v35) = sub_4056E0(4LL, v39);
        v29 = v35;
        goto LABEL_22;
      }
      goto LABEL_35;
    }
    goto LABEL_57;
  }
  if ( v10 != 4 )
  {
LABEL_65:
    v18 = &stat_buf;
    goto LABEL_56;
  }
LABEL_35:
  if ( !*(_BYTE *)(v6 + 9) )
  {
    if ( !*(_BYTE *)(v6 + 10) || !(_BYTE)v12 )
    {
      v16 = 21;
      LODWORD(v25) = sub_4056E0(4LL, v39);
      v26 = v25;
LABEL_39:
      v27 = dcgettext(0LL, "cannot remove %s", 5);
      error(0, v16, v27, v26);
      return 4LL;
    }
    goto LABEL_65;
  }
  LODWORD(v28) = sub_4056E0(4LL, v39);
  v29 = v28;
  if ( v41 == 2 && !(_BYTE)v12 )
  {
    v30 = qword_610368;
    if ( v17 )
      v31 = dcgettext(0LL, "%s: descend into write-protected directory %s? ", 5);
    else
      v31 = dcgettext(0LL, "%s: descend into directory %s? ", 5);
    v23 = stderr;
    __fprintf_chk(stderr, 1LL, v31, v30, v29);
LABEL_26:
    if ( (unsigned __int8)sub_406290(v23, 1LL) )
      return 2LL;
    return 3LL;
  }
  v18 = &stat_buf;
LABEL_22:
  if ( !(unsigned int)sub_402A30(fd, (char *)v8, v18) )
  {
    LODWORD(v19) = sub_403C20(v18, v8);
    v20 = qword_610368;
    v21 = v19;
    if ( v17 )
      v22 = dcgettext(0LL, "%s: remove write-protected %s %s? ", 5);
    else
      v22 = dcgettext(0LL, "%s: remove %s %s? ", 5);
    v23 = stderr;
    __fprintf_chk(stderr, 1LL, v22, v20, v21);
    goto LABEL_26;
  }
  v37 = dcgettext(0LL, "cannot remove %s", 5);
  v38 = __errno_location();
  error(0, *v38, v37, v29);
  return 4LL;
}

__int64 __fastcall sub_402F50(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13@2
  signed int v3; // er12@2
  __int64 v4; // rax@2
  __int64 v5; // rbp@2
  __int64 v6; // rax@3
  __int64 v7; // rbx@3
  __int16 v8; // ax@4
  __int64 v9; // rax@5
  __int64 v10; // r12@5
  char *v11; // rax@5
  int v12; // esi@5
  __int64 v13; // rcx@5
  const char *v14; // rdx@5
  int *v15; // rbx@8
  __int64 result; // rax@10
  bool v17; // r15@15
  int v18; // er14@15
  __int64 v19; // rax@23
  __int64 v20; // r12@23
  char *v21; // rax@23
  int v22; // eax@26
  int v23; // er14@26
  DIR *v24; // r15@27
  int *v25; // rax@28
  int *v26; // r14@28
  struct dirent *v27; // rax@29
  int v28; // er12@33
  int v29; // er14@34
  __int64 v30; // rax@36
  __int64 v31; // rax@37
  __int64 v32; // rax@40
  __int64 v33; // rax@49
  __int64 v34; // r14@49
  char *v35; // rax@49
  __int64 v36; // rax@49
  char v37; // al@54
  __int64 v38; // rax@56
  __int64 v39; // r15@56
  __int64 v40; // rax@56
  __int64 v41; // r14@56
  __int64 v42; // rax@56
  __int64 v43; // r12@56
  char *v44; // rax@56
  char v45; // al@57
  unsigned __int64 v46; // rax@60
  bool v47; // cf@60
  bool v48; // zf@60
  char *v49; // rdi@61
  signed __int64 v50; // rcx@61
  _BYTE *v51; // rsi@61
  __int64 v52; // rax@65
  __int64 v53; // r12@65
  char *v54; // rax@65
  char *v55; // rax@66
  char *v56; // rax@67
  char *v57; // rax@68
  __int64 v58; // rax@69
  __int64 v59; // rax@73
  __int64 v60; // rbx@73
  char *v61; // rax@73
  __int64 v62; // rax@76
  unsigned int v63; // ebx@76
  __int64 v64; // rbp@76
  char *v65; // rax@76
  __int64 v66; // rax@78
  __int64 v67; // r14@78
  __int64 v68; // rax@78
  __int64 v69; // r12@78
  char *v70; // rax@78
  int v71; // [sp+Ch] [bp-3Ch]@39

  if ( !*a1 )
    return 2;
  v2 = a2;
  v3 = 2;
  LODWORD(v4) = sub_406210(a1, *(_BYTE *)(a2 + 8) < 1u ? 536 : 600, 0LL);
  v5 = v4;
  while ( 1 )
  {
    LODWORD(v6) = fts_read(v5);
    v7 = v6;
    if ( !v6 )
      break;
LABEL_4:
    v8 = *(_WORD *)(v6 + 112);
    switch ( v8 )
    {
      case 7:
        LODWORD(v9) = sub_4057B0(0LL, 3LL, *(_QWORD *)(v7 + 56));
        v10 = v9;
        v11 = dcgettext(0LL, "traversal failed: %s", 5);
        v12 = *(_DWORD *)(v7 + 64);
        v13 = v10;
        v14 = v11;
        goto LABEL_6;
      case 3:
      case 4:
      case 6:
      case 8:
      case 10:
      case 11:
      case 12:
      case 13:
        if ( v8 != 6
          || !*(_BYTE *)(v2 + 8)
          || *(_QWORD *)(v7 + 88) <= 0LL
          || *(_QWORD *)(v7 + 120) == *(_QWORD *)(v5 + 24) )
        {
          v17 = (v8 & 0xFFFD) == 4;
          v18 = sub_402AA0(v5, v7, v17, v2, 3, 0LL);
          if ( v18 == 2 )
            v18 = sub_402820(v5, v7, v2, v17);
          goto LABEL_17;
        }
        v58 = *(_QWORD *)(v7 + 8);
        if ( *(_QWORD *)(v58 + 88) >= 0 )
        {
          do
          {
            if ( *(_QWORD *)(v58 + 32) )
              break;
            *(_QWORD *)(v58 + 32) = 1LL;
            v58 = *(_QWORD *)(v58 + 8);
          }
          while ( *(_QWORD *)(v58 + 88) >= 0LL );
        }
        v3 = 4;
        LODWORD(v59) = sub_4056E0(4LL, *(_QWORD *)(v7 + 56));
        v60 = v59;
        v61 = dcgettext(0LL, "skipping %s, since it's on a different device", 5);
        error(0, 0, v61, v60);
        continue;
      case 2:
        LODWORD(v19) = sub_4057B0(0LL, 3LL, *(_QWORD *)(v7 + 56));
        v20 = v19;
        v21 = dcgettext(
                0LL,
                "WARNING: Circular directory structure.\n"
                "This almost certainly means that you have a corrupted file system.\n"
                "NOTIFY YOUR SYSTEM MANAGER.\n"
                "The following directory is part of the cycle:\n"
                "  %s\n",
                5);
        v13 = v20;
        v12 = 0;
        v14 = v21;
LABEL_6:
        error(0, v12, v14, v13);
        goto LABEL_7;
      case 1:
        if ( *(_BYTE *)(v2 + 9) )
          goto LABEL_35;
        if ( !*(_BYTE *)(v2 + 10) )
          goto LABEL_48;
        v22 = openat(*(_DWORD *)(v5 + 44), *(const char **)(v7 + 48), 198912);
        v23 = v22;
        if ( v22 < 0 )
          goto LABEL_32;
        v24 = fdopendir(v22);
        if ( !v24 )
        {
          close(v23);
LABEL_32:
          if ( *(_BYTE *)(v2 + 10) )
            v28 = 39;
          else
LABEL_48:
            v28 = 21;
          LODWORD(v33) = sub_4056E0(4LL, *(_QWORD *)(v7 + 56));
          v34 = v33;
          v35 = dcgettext(0LL, "cannot remove %s", 5);
          error(0, v28, v35, v34);
          v36 = *(_QWORD *)(v7 + 8);
          if ( *(_QWORD *)(v36 + 88) >= 0 )
          {
            do
            {
              if ( *(_QWORD *)(v36 + 32) )
                break;
              *(_QWORD *)(v36 + 32) = 1LL;
              v36 = *(_QWORD *)(v36 + 8);
            }
            while ( *(_QWORD *)(v36 + 88) >= 0LL );
          }
          goto LABEL_7;
        }
        v25 = __errno_location();
        *v25 = 0;
        v26 = v25;
        while ( 1 )
        {
          v27 = readdir(v24);
          if ( !v27 )
            break;
          if ( v27->d_name[0] == 46 )
          {
            v45 = v27->d_name[(v27->d_name[1] == 46) + 1];
            if ( !v45 || v45 == 47 )
              continue;
          }
          closedir(v24);
          goto LABEL_32;
        }
        v29 = *v26;
        closedir(v24);
        if ( v29 )
          goto LABEL_32;
LABEL_35:
        if ( *(_QWORD *)(v7 + 88) )
          goto LABEL_39;
        LODWORD(v30) = sub_403B90(*(_QWORD *)(v7 + 48));
        if ( *(_BYTE *)v30 == 46 )
        {
          v37 = *(_BYTE *)(v30 + (*(_BYTE *)(v30 + 1) == 46) + 1);
          if ( !v37 || v37 == 47 )
          {
            LODWORD(v38) = sub_405600(2LL, 4LL, *(_QWORD *)(v7 + 56));
            v39 = v38;
            LODWORD(v40) = sub_405600(1LL, 4LL, "..");
            v41 = v40;
            LODWORD(v42) = sub_405600(0LL, 4LL, ".");
            v43 = v42;
            v44 = dcgettext(0LL, "refusing to remove %s or %s directory: skipping %s", 5);
            error(0, 0, v44, v43, v41, v39);
LABEL_7:
            v3 = 4;
            fts_set(v5, v7, 4LL);
            fts_read(v5);
            LODWORD(v6) = fts_read(v5);
            v7 = v6;
            if ( !v6 )
              goto LABEL_8;
            goto LABEL_4;
          }
        }
        v31 = *(_QWORD *)(v2 + 16);
        if ( v31 )
        {
          if ( *(_QWORD *)(v7 + 128) == *(_QWORD *)v31 )
          {
            v46 = *(_QWORD *)(v31 + 8);
            v47 = *(_QWORD *)(v7 + 120) < v46;
            v48 = *(_QWORD *)(v7 + 120) == v46;
            if ( *(_QWORD *)(v7 + 120) == v46 )
            {
              v49 = "/";
              v50 = 2LL;
              v51 = *(_BYTE **)(v7 + 56);
              do
              {
                if ( !v50 )
                  break;
                v47 = *v51 < (unsigned __int8)*v49;
                v48 = *v51++ == *v49++;
                --v50;
              }
              while ( v48 );
              if ( (!v47 && !v48) == v47 )
              {
                LODWORD(v52) = sub_4056E0(4LL, *(_QWORD *)(v7 + 56));
                v53 = v52;
                v54 = dcgettext(0LL, "it is dangerous to operate recursively on %s", 5);
                error(0, 0, v54, v53);
              }
              else
              {
                LODWORD(v66) = sub_405600(1LL, 4LL, "/");
                v67 = v66;
                LODWORD(v68) = sub_405600(0LL, 4LL, *(_QWORD *)(v7 + 56));
                v69 = v68;
                v70 = dcgettext(0LL, "it is dangerous to operate recursively on %s (same as %s)", 5);
                error(0, 0, v70, v69, v67);
              }
              v55 = dcgettext(0LL, "use --no-preserve-root to override this failsafe", 5);
              error(0, 0, v55);
              goto LABEL_7;
            }
          }
        }
LABEL_39:
        v18 = sub_402AA0(v5, v7, 1u, v2, 2, &v71);
        if ( v18 != 2 || v71 == 4 && (v18 = sub_402820(v5, v7, v2, 1), fts_set(v5, v7, 4LL), fts_read(v5), v18 != 2) )
        {
          v32 = *(_QWORD *)(v7 + 8);
          if ( *(_QWORD *)(v32 + 88) >= 0 )
          {
            do
            {
              if ( *(_QWORD *)(v32 + 32) )
                break;
              *(_QWORD *)(v32 + 32) = 1LL;
              v32 = *(_QWORD *)(v32 + 8);
            }
            while ( *(_QWORD *)(v32 + 88) >= 0LL );
          }
          fts_set(v5, v7, 4LL);
          fts_read(v5);
LABEL_17:
          if ( (unsigned int)(v18 - 2) > 2 )
            __assert_fail("VALID_STATUS (s)", "src/remove.c", 0x23Eu, "rm");
          if ( v18 == 4 )
          {
            v3 = 4;
          }
          else if ( v18 == 3 && v3 == 2 )
          {
            v3 = 3;
          }
        }
        break;
      default:
        LODWORD(v62) = sub_4057B0(0LL, 3LL, *(_QWORD *)(v7 + 56));
        v63 = *(_WORD *)(v7 + 112);
        v64 = v62;
        v65 = dcgettext(0LL, "unexpected failure: fts_info=%d: %s\nplease report to %s", 5);
        error(0, 0, v65, v63, v64, "bug-coreutils@gnu.org");
        abort();
        return result;
    }
  }
LABEL_8:
  v15 = __errno_location();
  if ( *v15 )
  {
    v3 = 4;
    v56 = dcgettext(0LL, "fts_read failed", 5);
    error(0, *v15, v56);
    if ( !(unsigned int)fts_close((void *)v5) )
      return (unsigned int)v3;
LABEL_68:
    v3 = 4;
    v57 = dcgettext(0LL, "fts_close failed", 5);
    error(0, *v15, v57);
    return (unsigned int)v3;
  }
  if ( (unsigned int)fts_close((void *)v5) )
    goto LABEL_68;
  return (unsigned int)v3;
}

noreturn void  sub_403630()
{
  sub_402450(1);
}

signed __int64 __fastcall sub_403640(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_403760(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx@2
  __int64 v4; // rax@3
  __int64 v5; // rbp@3
  __int64 v6; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  LODWORD(v4) = sub_405910(1LL, a1);
  v5 = v4;
  LODWORD(v6) = sub_405600(0LL, 8LL, a2);
  error(0, 0, v3, v6, v5);
}

int __fastcall sub_4037E0(__int64 *a1, char *a2, size_t a3)
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
  __int64 v12; // r8@3
  __int64 v13; // rax@6
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
      LODWORD(v11) = sub_405930(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11, v12);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    LODWORD(v13) = sub_405930(i);
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

__int64 __fastcall sub_403900(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(__int64 *, char *))
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
  result = sub_403640(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_403760(a1, (__int64)a2, result);
    sub_4037E0(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

int sub_4039D0()
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
  LODWORD(v1) = sub_406340(stdin);
  if ( !v1 )
  {
    if ( !(unsigned int)sub_4094F0(v0) )
      return sub_403AF0(v0);
    goto LABEL_6;
  }
  v11 = sub_406370(v0, 0LL, 1LL);
  v4 = stdin;
  if ( !v11 )
  {
    v3 = sub_406300();
    v4 = stdin;
    if ( v3 )
    {
      sub_4094F0(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_4094F0(v4) )
  {
LABEL_6:
    v5 = dcgettext(0LL, "error closing file", 5);
    v6 = qword_610350;
    v7 = v5;
    v8 = __errno_location();
    v9 = v8;
    if ( v6 )
    {
      LODWORD(v10) = sub_405780(v6, "error closing file");
      error(0, *v9, "%s: %s", v10, v7);
    }
    else
    {
      error(0, *v8, "%s", v7);
    }
    ((void (*)(void))sub_403AF0)();
    _exit(status);
  }
  return ((int (*)(void))sub_403AF0)();
}

__int64 sub_403AF0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_405780(qword_610360, "write error");
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

char *__fastcall sub_403C20(__int64 a1)
{
  int v1; // eax@1
  char *result; // rax@8

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
  qword_610368 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_403DB0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_40A9A0(0LL);
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

unsigned __int64 __fastcall sub_403EB0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_403DB0("`", v11);
        v58 = sub_403DB0("'", v11);
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
            return sub_403EB0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_403EB0((__int64)v9, v79, s);
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
                return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
          return sub_403EB0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_403EB0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_409470((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_403EB0((__int64)v9, v10, s);
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
      return sub_403EB0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_403EB0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_403DB0("`", v11);
        v58 = sub_403DB0("'", v11);
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
            return sub_403EB0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_403EB0((__int64)v9, v79, s);
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
                return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
            return sub_403EB0((__int64)v9, v10, s);
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
              return sub_403EB0((__int64)v9, v10, s);
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
          return sub_403EB0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_403EB0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_409470((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_403EB0((__int64)v9, v10, s);
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
      return sub_403EB0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_4050E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6102D8;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6102F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4061D0();
    v9 = 16LL * (a1 + 1);
    if ( off_6102D8 == &xmmword_6102E0 )
    {
      LODWORD(v20) = sub_405FE0(0LL, v9);
      v7 = v20;
      off_6102D8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      LODWORD(v10) = sub_405FE0(off_6102D8, v9);
      off_6102D8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_6102F0], 0, 16LL * (a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_403EB0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_610380 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_405F80(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_403EB0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4050E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6102D8;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6102F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4061D0();
    v9 = 16LL * (a1 + 1);
    if ( off_6102D8 == &xmmword_6102E0 )
    {
      LODWORD(v20) = sub_405FE0(0LL, v9);
      v7 = v20;
      off_6102D8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      LODWORD(v10) = sub_405FE0(off_6102D8, v9);
      off_6102D8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_6102F0], 0, 16LL * (a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_403EB0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_610380 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_405F80(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_403EB0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_405600(int a1, int a2, char *a3)
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
  return sub_4050E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405600(int a1, int a2, char *a3)
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
  return sub_4050E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4056E0(int a1, char *a2)
{
  return sub_405600(0, a1, a2);
}

_BYTE *__fastcall sub_405700(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_6104B0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_610480);
  v5 = _mm_load_si128((const __m128i *)&xmmword_610490);
  v6 = _mm_load_si128((const __m128i *)&xmmword_6104A0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_4050E0(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_405780(char *a1)
{
  return sub_405700(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4057B0(int a1, int a2, char *a3)
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
  return sub_4050E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4057B0(int a1, int a2, char *a3)
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
  return sub_4050E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405910(int a1, char *a2)
{
  return sub_4050E0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

_BYTE *__fastcall sub_405930(char *a1)
{
  return sub_4050E0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

__int64 __fastcall sub_405950(__int64 a1)
{
  __int64 result; // rax@2
  __int64 v2; // [sp+0h] [bp-98h]@1
  __int64 v3; // [sp+8h] [bp-90h]@2

  if ( __lxstat(1, "/", (struct stat *)&v2) )
  {
    result = 0LL;
  }
  else
  {
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = v2;
    result = a1;
  }
  return result;
}

int __fastcall sub_4059A0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_4059A0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_405E00(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4059A0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_4059A0(a1, a2, a3, a4, (__int64)v15, v9);
}

char sub_405F40()
{
  char result; // al@2
  __uid_t v1; // eax@3

  if ( byte_6104B9 )
  {
    result = byte_6104B8;
  }
  else
  {
    v1 = geteuid();
    byte_6104B9 = 1;
    result = v1 == 0;
    byte_6104B8 = result;
  }
  return result;
}

void *__fastcall sub_405F80(size_t a1)
{
  void *result; // rax@1

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
        sub_4061D0();
    }
  }
  return result;
}

void *__fastcall sub_406180(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_405F80(a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_4061D0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_406210(__int64 a1, int a2)
{
  __int64 v2; // rax@1

  LODWORD(v2) = fts_open(a1, a2 | 0x200u);
  if ( !v2 )
  {
    if ( *__errno_location() != 22 )
      sub_4061D0();
    __assert_fail("errno != EINVAL", "lib/xfts.c", 0x29u, "xfts_open");
  }
  return v2;
}

__int64 sub_406290()
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

int __fastcall sub_406300(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_406370(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

__int64 __fastcall sub_406340(__int64 a1)
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

int __fastcall sub_406370(FILE *a1, __off_t a2, int a3)
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

signed __int64 __fastcall sub_406450(__int64 a1, __int64 a2, char a3)
{
  struct stat *v3; // rbp@1
  __int64 v4; // rbx@1
  int v5; // eax@1
  bool v6; // zf@1
  const char *v7; // rsi@1
  int *v8; // rax@4
  int *v9; // r12@4
  int v10; // eax@4
  signed __int64 result; // rax@6
  int v12; // eax@10
  unsigned __int64 v13; // rax@16

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
  size_t v3; // r12@1
  __int64 v4; // rbp@1
  __int64 v5; // rbx@1
  int (*v6)(const void *, const void *); // r13@1
  void *v7; // rdi@1
  void *v8; // rax@3
  void *v9; // rdx@5
  __int64 *v10; // r8@7
  __int64 result; // rax@7
  __int64 v12; // rdx@7
  __int64 v13; // rsi@7
  signed __int64 v14; // rcx@7
  __int64 v15; // rdi@10
  __int64 v16; // rdx@8

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
      v9 = (char *)v9 + 8;
      *((_QWORD *)v9 - 1) = v5;
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 );
  }
  qsort(v7, v3, 8uLL, v6);
  v10 = *(__int64 **)(v4 + 16);
  result = *v10;
  v12 = *(_QWORD *)(v4 + 16);
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
      v15 = *(_QWORD *)(v12 + 8);
      v12 += 8LL;
      *(_QWORD *)(v13 + 16) = v15;
      if ( !--v14 )
        break;
      v13 = *(_QWORD *)v12;
    }
    v16 = v10[v3 - 1];
  }
  *(_QWORD *)(v16 + 16) = 0LL;
  return result;
}

void *__fastcall sub_406700(__int64 a1, const void *a2, size_t a3)
{
  size_t v3; // rbp@1
  void *v4; // rax@1
  void *v5; // rbx@1
  __int64 v6; // rax@2

  v3 = a3;
  v4 = malloc((a3 + 272) & 0xFFFFFFFFFFFFFFF8LL);
  v5 = v4;
  if ( v4 )
  {
    memcpy((char *)v4 + 264, a2, v3);
    v6 = *(_QWORD *)(a1 + 32);
    *((_BYTE *)v5 + v3 + 264) = 0;
    *((_QWORD *)v5 + 12) = v3;
    *((_QWORD *)v5 + 10) = a1;
    *((_QWORD *)v5 + 7) = v6;
    *((_DWORD *)v5 + 16) = 0;
    *((_QWORD *)v5 + 3) = 0LL;
    *(_DWORD *)((char *)v5 + 114) = 196608;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
  }
  return v5;
}

void __fastcall sub_406790(void *ptr)
{
  void *v1; // rbx@2
  DIR *v2; // rdi@3
  void *v3; // rbp@3
  void *v4; // rdi@5

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

int __fastcall sub_4067E0(__int64 a1)
{
  int v1; // eax@2
  int result; // eax@4

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
  __int64 v1; // rbx@1
  __int64 v2; // r12@2
  __int64 v3; // rax@3
  __int64 result; // rax@4
  _QWORD *v5; // rbx@7
  __int64 v6; // rdx@8
  _QWORD *v7; // rax@8
  __int64 v8; // rax@11
  struct statfs v9; // [sp+0h] [bp-98h]@3

  v1 = *(_QWORD *)(a1 + 80);
  if ( !(*(_BYTE *)(v1 + 73) & 2) )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 80);
  if ( !v2 )
  {
    LODWORD(v8) = sub_409F20(13LL, 0LL, sub_406400, sub_406410, free);
    v2 = v8;
    *(_QWORD *)(v1 + 80) = v8;
    if ( !v8 )
    {
      if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v9) )
        return 0LL;
      return v9.f_type;
    }
  }
  v9.f_type = *(_QWORD *)(a1 + 120);
  LODWORD(v3) = sub_409CB0(v2, &v9);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 8);
  }
  else
  {
    if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v9) )
      return 0LL;
    v5 = malloc(0x10uLL);
    result = v9.f_type;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 120);
      v5[1] = v9.f_type;
      *v5 = v6;
      LODWORD(v7) = sub_40A6C0(v2, v5);
      if ( v7 )
      {
        if ( v5 != v7 )
          abort();
        return v9.f_type;
      }
      free(v5);
      result = v9.f_type;
    }
  }
  return result;
}

__int64 __fastcall sub_406820(__int64 a1)
{
  __int64 v1; // rbx@1
  __int64 v2; // r12@2
  __int64 v3; // rax@3
  __int64 result; // rax@4
  _QWORD *v5; // rbx@7
  __int64 v6; // rdx@8
  _QWORD *v7; // rax@8
  __int64 v8; // rax@11
  struct statfs v9; // [sp+0h] [bp-98h]@3

  v1 = *(_QWORD *)(a1 + 80);
  if ( !(*(_BYTE *)(v1 + 73) & 2) )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 80);
  if ( !v2 )
  {
    LODWORD(v8) = sub_409F20(13LL, 0LL, sub_406400, sub_406410, free);
    v2 = v8;
    *(_QWORD *)(v1 + 80) = v8;
    if ( !v8 )
    {
      if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v9) )
        return 0LL;
      return v9.f_type;
    }
  }
  v9.f_type = *(_QWORD *)(a1 + 120);
  LODWORD(v3) = sub_409CB0(v2, &v9);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 8);
  }
  else
  {
    if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v9) )
      return 0LL;
    v5 = malloc(0x10uLL);
    result = v9.f_type;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 120);
      v5[1] = v9.f_type;
      *v5 = v6;
      LODWORD(v7) = sub_40A6C0(v2, v5);
      if ( v7 )
      {
        if ( v5 != v7 )
          abort();
        return v9.f_type;
      }
      free(v5);
      result = v9.f_type;
    }
  }
  return result;
}

__int64 __fastcall sub_406940(__int64 a1)
{
  __int64 v1; // rax@1
  int v2; // edx@4

  v1 = sub_406820(a1);
  if ( v1 == 40864 )
LABEL_9:
    return 0;
  if ( v1 > 40864 )
  {
    if ( v1 != 1397113167 )
    {
      v2 = 2;
      if ( v1 != 1481003842 )
        v2 = (v1 == 1382369651) + 1;
      return (unsigned int)v2;
    }
    goto LABEL_9;
  }
  v2 = 0;
  if ( !v1 )
    return (unsigned int)v2;
  return v1 != 26985;
}

void __fastcall sub_4069B0(__int64 a1, int a2, char a3)
{
  int v3; // ebp@1
  int v4; // esi@1
  int v5; // eax@7

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
  int v1; // edx@2
  int v2; // ebp@1

  v2 = *(_DWORD *)(a1 + 72) & 4;
  if ( v2 )
  {
    v2 = 0;
  }
  else
  {
    v1 = *(_DWORD *)(a1 + 72);
    if ( BYTE1(v1) & 2 )
      sub_4069B0(a1, -100, 1);
    else
      v2 = fchdir(*(_DWORD *)(a1 + 40)) != 0;
  }
  sub_4067E0(a1 + 96);
  return (unsigned int)v2;
}

signed __int64 __fastcall sub_406A80(void **a1, size_t *a2, __int64 a3)
{
  void **v3; // rbx@1
  void *v4; // rdi@1
  size_t v5; // rax@1
  void *v6; // rax@2
  signed __int64 result; // rax@3

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

bool __fastcall sub_406AF0(__int16 a1, _QWORD *a2)
{
  __int64 v2; // rax@2
  bool result; // al@2
  void *v4; // rax@4
  void *v5; // rdi@4

  if ( a1 & 0x102 )
  {
    LODWORD(v2) = sub_409F20(31LL, 0LL, sub_4063F0, sub_4063D0, free);
    *a2 = v2;
    result = v2 != 0;
  }
  else
  {
    v4 = malloc(0x20uLL);
    v5 = v4;
    *a2 = v4;
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
  __int64 result; // rax@2

  if ( a2 & 0x200 )
    result = sub_40AF10(a1);
  else
    result = sub_4095E0(a3);
  return result;
}

__int64 __fastcall sub_406BA0(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  __int64 v4; // r15@1
  __int64 v5; // r13@1
  int v6; // ebp@1
  _BYTE *v7; // rbx@1
  int v8; // er12@1
  int v9; // edx@1
  bool v10; // cf@1
  bool v11; // zf@1
  const char *v12; // rdi@2
  signed __int64 v13; // rcx@2
  _BYTE *v14; // rsi@2
  char v15; // r14@9
  int v16; // eax@10
  int v17; // er12@10
  int v18; // ebx@15
  int *v19; // rax@21
  int v20; // er13@21
  int *v21; // rbp@21
  struct stat stat_buf; // [sp+10h] [bp-C8h]@15

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = *(_DWORD *)(a1 + 72);
  v9 = *(_DWORD *)(a1 + 72) & 4;
  v10 = 0;
  v11 = a4 == 0LL;
  if ( !a4 )
    goto LABEL_38;
  v12 = "..";
  v13 = 3LL;
  v14 = v7;
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
    if ( !v9 )
    {
      if ( v6 >= 0 )
      {
        v17 = v6;
        v15 = 1;
        goto LABEL_15;
      }
      if ( v8 & 0x200 )
      {
        v15 = sub_40A900(v4 + 96);
        if ( !v15 )
        {
          v16 = sub_40A950(v4 + 96);
          v17 = v16;
          if ( v16 >= 0 )
          {
            v6 = v16;
            v15 = 1;
            goto LABEL_15;
          }
          v8 = *(_DWORD *)(v4 + 72);
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
      }
LABEL_27:
      v17 = sub_406B50(*(_DWORD *)(v4 + 44), v8, (char)v7);
      if ( v17 < 0 )
        return (unsigned int)-1;
LABEL_15:
      v18 = __fxstat(1, v17, &stat_buf);
      if ( !v18 )
      {
        if ( *(_QWORD *)(v5 + 120) == stat_buf.st_dev && *(_QWORD *)(v5 + 128) == stat_buf.st_ino )
        {
          if ( *(_BYTE *)(v4 + 73) & 2 )
          {
            sub_4069B0(v4, v17, v15 ^ 1);
            return (unsigned int)v18;
          }
          v18 = fchdir(v17);
          goto LABEL_20;
        }
        *__errno_location() = 2;
      }
      v18 = -1;
LABEL_20:
      if ( v6 < 0 )
      {
        v19 = __errno_location();
        v20 = *v19;
        v21 = v19;
        close(v17);
        *v21 = v20;
      }
      return (unsigned int)v18;
    }
  }
  else
  {
LABEL_38:
    if ( !v9 )
    {
      if ( v6 >= 0 )
      {
        v17 = v6;
        v15 = 0;
        goto LABEL_15;
      }
      v15 = 0;
      goto LABEL_27;
    }
  }
  if ( v8 & 0x200 && v6 >= 0 )
  {
    v18 = 0;
    close(v6);
  }
  else
  {
    v18 = 0;
  }
  return (unsigned int)v18;
}

int __fastcall sub_406D70(__int16 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx@1
  _QWORD *v4; // rbp@2
  __int64 v5; // rax@3
  __int64 v6; // rdi@3
  _QWORD *v7; // rax@3
  _QWORD *v8; // r12@3
  __int64 v9; // rax@5
  int result; // eax@6

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
      LODWORD(v7) = sub_40A6C0(v6, v4);
      v8 = v7;
      if ( v4 == v7 )
        return 1;
      free(v4);
      if ( v8 )
      {
        v9 = v8[2];
        *(_WORD *)(v3 + 112) = 2;
        *(_QWORD *)v3 = v9;
        return 1;
      }
    }
    result = 0;
  }
  else
  {
    result = sub_409560(*a2, a3 + 120);
    if ( !(_BYTE)result )
      return 1;
    *(_QWORD *)v3 = v3;
    *(_WORD *)(v3 + 112) = 2;
  }
  return result;
}

void __fastcall sub_406E20(__int16 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax@2
  __int64 v4; // rcx@4
  __int64 v5; // rdi@7
  void *v6; // rax@7
  __int64 v7; // rdx@10
  __int64 v8; // rax@10
  __int64 v9; // [sp+0h] [bp-28h]@7
  __int64 v10; // [sp+8h] [bp-20h]@7

  if ( a1 & 0x102 )
  {
    v5 = *(_QWORD *)a2;
    v9 = *(_QWORD *)(a3 + 120);
    v10 = *(_QWORD *)(a3 + 128);
    LODWORD(v6) = sub_40A700(v5, &v9);
    if ( v6 )
    {
      free(v6);
      return;
    }
    goto LABEL_11;
  }
  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 || *(_QWORD *)(v3 + 88) < 0LL )
    return;
  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 16LL) )
LABEL_11:
    abort();
  if ( *(_QWORD *)v4 == *(_QWORD *)(a3 + 128) && *(_QWORD *)(v4 + 8) == *(_QWORD *)(a3 + 120) )
  {
    v7 = *(_QWORD *)(v3 + 120);
    v8 = *(_QWORD *)(v3 + 128);
    *(_QWORD *)(v4 + 8) = v7;
    *(_QWORD *)v4 = v8;
  }
}

void __fastcall sub_406E20(__int16 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax@2
  __int64 v4; // rcx@4
  __int64 v5; // rdi@7
  void *v6; // rax@7
  __int64 v7; // rdx@10
  __int64 v8; // rax@10
  __int64 v9; // [sp+0h] [bp-28h]@7
  __int64 v10; // [sp+8h] [bp-20h]@7

  if ( a1 & 0x102 )
  {
    v5 = *(_QWORD *)a2;
    v9 = *(_QWORD *)(a3 + 120);
    v10 = *(_QWORD *)(a3 + 128);
    LODWORD(v6) = sub_40A700(v5, &v9);
    if ( v6 )
    {
      free(v6);
      return;
    }
    goto LABEL_11;
  }
  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 || *(_QWORD *)(v3 + 88) < 0LL )
    return;
  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 16LL) )
LABEL_11:
    abort();
  if ( *(_QWORD *)v4 == *(_QWORD *)(a3 + 128) && *(_QWORD *)(v4 + 8) == *(_QWORD *)(a3 + 120) )
  {
    v7 = *(_QWORD *)(v3 + 120);
    v8 = *(_QWORD *)(v3 + 128);
    *(_QWORD *)(v4 + 8) = v7;
    *(_QWORD *)v4 = v8;
  }
}

__int64 __fastcall sub_406EC0(__int64 *a1, int a2)
{
  __int64 v2; // r15@1
  __int64 v3; // r13@1
  DIR *v4; // rdi@1
  int v5; // edi@5
  _BYTE *v6; // rax@9
  size_t v7; // rbp@10
  __int64 v8; // rbx@10
  signed __int64 v9; // rax@11
  DIR *v10; // r15@16
  int *v11; // rax@17
  int *v12; // r12@17
  struct dirent *v13; // rax@17
  struct dirent *v14; // r14@17
  size_t v15; // r13@20
  void *v16; // r15@20
  const void *v17; // rsi@23
  __int64 v18; // rax@23
  int v19; // eax@23
  __int64 v20; // rdx@27
  char v21; // al@30
  __int64 v22; // rdx@31
  char *v23; // rdx@32
  __int64 v24; // r13@38
  __int64 v25; // r15@38
  __int64 v26; // rax@39
  __int64 i; // rcx@39
  __int64 v28; // rdx@40
  _QWORD *j; // rax@43
  char *v30; // rdx@46
  _QWORD *v31; // rdx@48
  int v32; // eax@58
  __int64 v33; // rsi@61
  int v34; // edi@61
  int v35; // eax@63
  int v36; // ebx@63
  DIR *v37; // rax@64
  bool v38; // zf@65
  int v39; // edi@66
  char v40; // r14@69
  bool v41; // r12@69
  DIR *v42; // rdi@72
  __int16 v43; // bp@72
  void *v44; // rcx@80
  __int64 v45; // r15@80
  int v46; // ebx@80
  int v48; // ecx@60
  __int64 v49; // rax@97
  bool v50; // al@101
  DIR *v51; // rdi@112
  int *v52; // rax@114
  int v53; // er12@114
  int *v54; // rbp@114
  __int64 v55; // rax@130
  __int64 v56; // rax@132
  __int16 v57; // ax@133
  DIR *dirp; // [sp+8h] [bp-90h]@10
  __int64 v59; // [sp+10h] [bp-88h]@6
  void *ptr; // [sp+18h] [bp-80h]@10
  size_t v61; // [sp+20h] [bp-78h]@10
  __int64 v62; // [sp+20h] [bp-78h]@30
  __int64 v63; // [sp+28h] [bp-70h]@10
  signed __int64 v64; // [sp+30h] [bp-68h]@10
  unsigned __int64 v65; // [sp+38h] [bp-60h]@4
  char *dest; // [sp+40h] [bp-58h]@8
  signed __int64 v67; // [sp+48h] [bp-50h]@6
  DIR *v68; // [sp+50h] [bp-48h]@1
  int v69; // [sp+58h] [bp-40h]@1
  char v70; // [sp+5Eh] [bp-3Ah]@10
  char v71; // [sp+5Fh] [bp-39h]@5

  v2 = (__int64)a1;
  v3 = *a1;
  v69 = a2;
  v4 = *(DIR **)(*a1 + 24);
  v68 = v4;
  if ( v4 )
  {
    if ( dirfd(v4) >= 0 )
    {
      if ( !*(_QWORD *)(v2 + 64) )
      {
        v65 = 100000LL;
        v5 = *(_DWORD *)(v2 + 72);
        v71 = 1;
        goto LABEL_6;
      }
      v65 = -1LL;
      goto LABEL_5;
    }
    closedir(*(DIR **)(v3 + 24));
    *(_QWORD *)(v3 + 24) = 0LL;
    if ( a2 == 3 )
      goto LABEL_128;
    return 0LL;
  }
  v32 = *(_DWORD *)(v2 + 72);
  if ( *(_DWORD *)(v2 + 72) & 0x10 && v32 & 1 )
    v48 = (*(_QWORD *)(v3 + 88) != 0LL) << 17;
  v33 = *(_QWORD *)(v3 + 48);
  LOBYTE(v34) = -100;
  if ( (*(_DWORD *)(v2 + 72) & 0x204) == 512 )
    v34 = *(_DWORD *)(v2 + 44);
  v35 = sub_40AF10(v34);
  v36 = v35;
  if ( v35 < 0 )
  {
LABEL_115:
    *(_QWORD *)(v3 + 24) = 0LL;
    if ( v69 == 3 )
    {
LABEL_128:
      *(_WORD *)(v3 + 112) = 4;
      *(_DWORD *)(v3 + 64) = *__errno_location();
    }
    return 0LL;
  }
  v37 = fdopendir(v35);
  if ( !v37 )
  {
    v52 = __errno_location();
    v53 = *v52;
    v54 = v52;
    close(v36);
    *v54 = v53;
    goto LABEL_115;
  }
  v38 = *(_WORD *)(v3 + 112) == 11;
  *(_QWORD *)(v3 + 24) = v37;
  if ( v38 )
  {
    *(_WORD *)(v3 + 112) = sub_406450(v2, v3, 0);
  }
  else
  {
    v39 = *(_DWORD *)(v2 + 72);
    if ( v39 & 0x100 )
    {
      sub_406E20(v39, v2 + 88, v3);
      sub_406450(v2, v3, 0);
      if ( !(unsigned __int8)sub_406D70(*(_DWORD *)(v2 + 72), (__int64 *)(v2 + 88), v3) )
      {
        ptr = 0LL;
        *__errno_location() = 12;
        return (__int64)ptr;
      }
    }
  }
  v65 = *(_QWORD *)(v2 + 64) < 1uLL ? 100000LL : -1LL;
  if ( v69 == 2 )
    goto LABEL_118;
  if ( (*(_DWORD *)(v2 + 72) & 0x38) == 24 && *(_QWORD *)(v3 + 136) == 2LL && (unsigned int)sub_406940(v3) )
  {
    if ( v69 == 3 )
    {
      v40 = 0;
      v41 = 1;
      goto LABEL_70;
    }
LABEL_118:
    v71 = 0;
    v5 = *(_DWORD *)(v2 + 72);
    goto LABEL_6;
  }
  v40 = 1;
  v41 = v69 == 3;
LABEL_70:
  if ( *(_BYTE *)(v2 + 73) & 2 )
  {
    v36 = sub_40B030(v36);
    if ( v36 < 0 )
    {
      v42 = *(DIR **)(v3 + 24);
      v43 = *(_WORD *)(v3 + 114) | 1;
      if ( !v41 || !v40 )
      {
        *(_WORD *)(v3 + 114) |= 1u;
        closedir(v42);
        v5 = *(_DWORD *)(v2 + 72);
LABEL_78:
        *(_QWORD *)(v3 + 24) = 0LL;
        v71 = 0;
        goto LABEL_6;
      }
      goto LABEL_74;
    }
  }
  if ( (unsigned int)sub_406BA0(v2, v3, v36, 0LL) )
  {
    v42 = *(DIR **)(v3 + 24);
    v43 = *(_WORD *)(v3 + 114) | 1;
    if ( !v41 || !v40 )
    {
LABEL_75:
      *(_WORD *)(v3 + 114) = v43;
      closedir(v42);
      v5 = *(_DWORD *)(v2 + 72);
      *(_QWORD *)(v3 + 24) = 0LL;
      if ( v5 & 0x200 && v36 >= 0 )
      {
        close(v36);
        v5 = *(_DWORD *)(v2 + 72);
      }
      goto LABEL_78;
    }
LABEL_74:
    *(_DWORD *)(v3 + 64) = *__errno_location();
    goto LABEL_75;
  }
LABEL_5:
  v71 = 1;
  v5 = *(_DWORD *)(v2 + 72);
LABEL_6:
  v59 = *(_QWORD *)(v3 + 72);
  v67 = v59 - 1;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 56) + v59 - 1) != 47 )
  {
    v67 = *(_QWORD *)(v3 + 72);
    ++v59;
  }
  dest = 0LL;
  if ( v5 & 4 )
  {
    v6 = (_BYTE *)(*(_QWORD *)(v2 + 32) + v67);
    *v6 = 47;
    dest = v6 + 1;
  }
  v70 = 0;
  v7 = 0LL;
  v61 = *(_QWORD *)(v2 + 48) - v59;
  v8 = v2;
  dirp = 0LL;
  v63 = v3;
  v64 = *(_QWORD *)(v3 + 88) + 1LL;
  ptr = 0LL;
  while ( 1 )
  {
    v10 = *(DIR **)(v63 + 24);
    if ( !v10 )
    {
      v24 = v63;
      v25 = v8;
      goto LABEL_87;
    }
    v11 = __errno_location();
    *v11 = 0;
    v12 = v11;
    v13 = readdir(v10);
    v14 = v13;
    if ( !v13 )
      break;
    if ( *(_BYTE *)(v8 + 72) & 0x20 || v13->d_name[0] != 46 || v13->d_name[1] && *(_WORD *)&v13->d_name[1] != 46 )
    {
      v15 = strlen(v13->d_name);
      v16 = sub_406700(v8, v14->d_name, v15);
      if ( !v16 )
        goto LABEL_80;
      if ( v61 <= v15 )
      {
        v62 = *(_QWORD *)(v8 + 32);
        v21 = sub_406A80((void **)(v8 + 32), (size_t *)(v8 + 48), v67 + v15 + 2);
        if ( !v21 )
        {
LABEL_80:
          v44 = v16;
          v45 = v8;
          v46 = *v12;
          free(v44);
          sub_406790(ptr);
          closedir(*(DIR **)(v63 + 24));
          *(_QWORD *)(v63 + 24) = 0LL;
          *(_WORD *)(v63 + 112) = 7;
          ptr = 0LL;
          *(_DWORD *)(v45 + 72) |= 0x4000u;
          *v12 = v46;
          return (__int64)ptr;
        }
        v22 = *(_QWORD *)(v8 + 32);
        if ( v22 == v62 )
        {
          v21 = v70;
        }
        else
        {
          v23 = (char *)(v59 + v22);
          if ( !(*(_BYTE *)(v8 + 72) & 4) )
            v23 = dest;
          dest = v23;
        }
        v70 = v21;
        v61 = *(_QWORD *)(v8 + 48) - v59;
      }
      if ( __CFADD__(v59, v15) )
      {
        free(v16);
        sub_406790(ptr);
        closedir(*(DIR **)(v63 + 24));
        *(_QWORD *)(v63 + 24) = 0LL;
        *(_WORD *)(v63 + 112) = 7;
        ptr = 0LL;
        *(_DWORD *)(v8 + 72) |= 0x4000u;
        *v12 = 36;
        return (__int64)ptr;
      }
      v17 = (char *)v16 + 264;
      *((_QWORD *)v16 + 11) = v64;
      v18 = *(_QWORD *)v8;
      *((_QWORD *)v16 + 9) = v59 + v15;
      *((_QWORD *)v16 + 1) = v18;
      *((_QWORD *)v16 + 16) = v14->d_ino;
      v19 = *(_DWORD *)(v8 + 72);
      if ( v19 & 4 )
      {
        *((_QWORD *)v16 + 6) = *((_QWORD *)v16 + 7);
        memmove(dest, v17, *((_QWORD *)v16 + 12) + 1LL);
        v19 = *(_DWORD *)(v8 + 72);
      }
      else
      {
        *((_QWORD *)v16 + 6) = v17;
      }
      if ( *(_QWORD *)(v8 + 64) && !(BYTE1(v19) & 4) )
      {
        *((_WORD *)v16 + 56) = sub_406450(v8, (__int64)v16, 0);
      }
      else
      {
        v20 = (unsigned int)v14->d_type - 1;
        if ( (v19 & 0x18) == 24 && v14->d_type & 0xFB )
        {
          *((_WORD *)v16 + 56) = 11;
          if ( (unsigned int)v20 <= 0xB )
          {
            *((_DWORD *)v16 + 36) = dword_40D4E0[v20];
            v9 = 1LL;
          }
          else
          {
            *((_DWORD *)v16 + 36) = 0;
            v9 = 1LL;
          }
        }
        else
        {
          *((_WORD *)v16 + 56) = 11;
          if ( (unsigned int)v20 > 0xB )
          {
            *((_DWORD *)v16 + 36) = 0;
            v9 = 2LL;
          }
          else
          {
            *((_DWORD *)v16 + 36) = dword_40D4E0[v20];
            v9 = 2LL;
          }
        }
        *((_QWORD *)v16 + 21) = v9;
      }
      *((_QWORD *)v16 + 2) = 0LL;
      if ( ptr )
      {
        ++v7;
        *((_QWORD *)dirp + 2) = v16;
        if ( v7 >= v65 )
          goto LABEL_38;
      }
      else
      {
        ptr = v16;
        if ( ++v7 >= v65 )
        {
LABEL_38:
          v24 = v63;
          v25 = v8;
          if ( !v70 )
            goto LABEL_88;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v16 = (void *)dirp;
    }
    dirp = (DIR *)v16;
  }
  v24 = v63;
  v25 = v8;
  if ( *v12 )
  {
    *(_DWORD *)(v63 + 64) = *v12;
    *(_WORD *)(v63 + 112) = (v7 | (unsigned __int64)v68) < 1 ? 4 : 7;
  }
  v51 = *(DIR **)(v63 + 24);
  if ( v51 )
  {
    closedir(v51);
    *(_QWORD *)(v63 + 24) = 0LL;
  }
LABEL_87:
  if ( !v70 )
    goto LABEL_88;
LABEL_39:
  v26 = *(_QWORD *)(v25 + 8);
  for ( i = *(_QWORD *)(v25 + 32); v26; v26 = *(_QWORD *)(v26 + 16) )
  {
    v28 = *(_QWORD *)(v26 + 48);
    if ( v28 != v26 + 264 )
      *(_QWORD *)(v26 + 48) = i + v28 - *(_QWORD *)(v26 + 56);
    *(_QWORD *)(v26 + 56) = i;
  }
  for ( j = ptr; j[11] >= 0LL; j = v31 )
  {
    v30 = (char *)j[6];
    if ( (_QWORD *)v30 != j + 33 )
      j[6] = &v30[i] - j[7];
    v31 = (_QWORD *)j[2];
    j[7] = i;
    if ( !v31 )
      v31 = (_QWORD *)j[1];
  }
LABEL_88:
  if ( *(_BYTE *)(v25 + 72) & 4 )
  {
    if ( *(_QWORD *)(v25 + 48) == v59 || !v7 )
      --dest;
    *dest = 0;
  }
  if ( v68 || !v71 )
    goto LABEL_139;
  if ( v69 != 1 && v7 )
    goto LABEL_97;
  v50 = *(_QWORD *)(v24 + 88) ? (unsigned int)sub_406BA0(v25, *(_QWORD *)(v24 + 8), -1, "..") != 0 : (unsigned int)sub_406A20(v25) != 0;
  if ( !v50 )
  {
LABEL_139:
    if ( !v7 )
    {
      if ( v69 == 3 )
      {
        v57 = *(_WORD *)(v24 + 112);
        if ( v57 != 4 && v57 != 7 )
          *(_WORD *)(v24 + 112) = 6;
      }
      sub_406790(ptr);
      return 0LL;
    }
LABEL_97:
    v49 = *(_QWORD *)(v25 + 64);
    if ( v7 > 0x2710 )
    {
      if ( v49 )
        return sub_406600(v25, (__int64)ptr, v7);
      v55 = sub_406820(v24);
      if ( v55 != 26985 && v55 != 16914836 )
      {
        *(_QWORD *)(v25 + 64) = sub_406420;
        v56 = sub_406600(v25, (__int64)ptr, v7);
        *(_QWORD *)(v25 + 64) = 0LL;
        return v56;
      }
      v49 = *(_QWORD *)(v25 + 64);
    }
    if ( !v49 || v7 == 1 )
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
  const char **v3; // r13@4
  __int64 v4; // r14@4
  _QWORD *v5; // rax@4
  __int64 v6; // rbx@4
  const char *v7; // rdi@7
  const char **v8; // r15@8
  size_t v9; // r12@8
  size_t v10; // rax@9
  __int64 v11; // rdx@12
  const char *v12; // r15@15
  void *v13; // rcx@16
  void *v14; // r12@20
  size_t v15; // rbp@20
  _QWORD *v16; // rax@21
  _QWORD *v17; // r15@21
  unsigned __int64 v18; // rax@27
  _QWORD *v19; // rax@36
  int v20; // edi@37
  int v21; // esi@38
  void *v23; // rdi@44
  unsigned int v24; // eax@45
  __int64 v25; // rax@52
  int v26; // eax@54
  void *ptr; // [sp+8h] [bp-50h]@16
  char v28; // [sp+16h] [bp-42h]@14
  _BYTE v29[9]; // [sp+17h] [bp-41h]@20

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
          v19[2] = v14;
          v20 = *(_DWORD *)(v6 + 72);
          *((_WORD *)v19 + 56) = 9;
          if ( sub_406AF0(v20, (_QWORD *)(v6 + 88)) )
          {
            v21 = *(_DWORD *)(v6 + 72);
            if ( !(v21 & 0x204) )
            {
              v26 = sub_406B50(*(_DWORD *)(v6 + 44), v21, (unsigned __int64)".");
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
        v16[11] = 0LL;
        v16[1] = ptr;
        v16[6] = v16 + 33;
        if ( v14 )
        {
          if ( v28 )
            break;
        }
        *((_WORD *)v16 + 56) = sub_406450(v6, (__int64)v16, 0);
        if ( v4 )
          goto LABEL_25;
        v17[2] = 0LL;
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
      v16[21] = 2LL;
      *((_WORD *)v16 + 56) = 11;
      if ( !v4 )
      {
        v16[2] = 0LL;
LABEL_52:
        v25 = *(_QWORD *)&v29[1];
        *(_QWORD *)&v29[1] = v17;
        *(_QWORD *)(v25 + 16) = v17;
        goto LABEL_26;
      }
LABEL_25:
      v17[2] = v14;
      v14 = v17;
      goto LABEL_26;
    }
    goto LABEL_47;
  }
  return v6;
}

__int64 __fastcall fts_close(void *ptr)
{
  void *v1; // rbp@1
  __int64 v2; // rdi@1
  void *v3; // rdi@8
  int v4; // eax@10
  int v5; // edi@11
  signed int v6; // ebx@12
  void *v7; // rdi@13
  void *v8; // rdi@15
  int *v10; // r12@24
  __int64 v11; // rbx@3

  v1 = ptr;
  v2 = *(_QWORD *)ptr;
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 88) >= 0 )
    {
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v2 + 16);
          if ( !v11 )
            break;
          free((void *)v2);
          v2 = v11;
          if ( *(_QWORD *)(v11 + 88) < 0LL )
            goto LABEL_7;
        }
        v11 = *(_QWORD *)(v2 + 8);
        free((void *)v2);
        v2 = v11;
      }
      while ( *(_QWORD *)(v11 + 88) >= 0 );
    }
    else
    {
      v11 = v2;
    }
LABEL_7:
    free((void *)v11);
  }
  v3 = (void *)*((_QWORD *)v1 + 1);
  if ( v3 )
    sub_406790(v3);
  free(*((void **)v1 + 2));
  free(*((void **)v1 + 4));
  v4 = *((_DWORD *)v1 + 18);
  if ( BYTE1(v4) & 2 )
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
  return (unsigned int)v6;
}

__int64 __fastcall fts_read(__int64 a1)
{
  __int64 v1; // rbp@1
  int v2; // edx@2
  __int16 v3; // ax@3
  __int64 v4; // r12@3
  __int16 v5; // cx@4
  __int16 v6; // ax@8
  __int64 v7; // rbx@9
  __int16 v8; // ax@14
  int v9; // edi@16
  void *v11; // rdi@26
  int *v12; // rax@29
  __int64 v13; // rax@30
  void *v14; // rdi@36
  int v15; // edi@38
  void *v16; // rdi@40
  __int64 v17; // rdx@43
  void *v18; // rdi@43
  char *v19; // rax@43
  const void *v20; // r13@45
  size_t v21; // r14@45
  __int64 v22; // rax@46
  int v23; // edi@46
  __int16 v24; // ax@46
  __int64 v25; // rcx@48
  __int64 v26; // rdx@48
  signed __int64 v27; // rax@48
  signed __int64 v28; // rax@50
  __int16 v29; // ax@57
  __int64 v30; // rax@60
  int v31; // edi@66
  int v32; // eax@71
  int v33; // edi@71
  __int64 v34; // rbp@83
  int v35; // edx@85
  __int64 v36; // rcx@87
  __int64 v37; // rax@91
  __int64 v38; // rdx@91
  __int16 v39; // ax@96
  int v40; // esi@104
  int v41; // esi@106
  int v42; // eax@107
  int v43; // eax@113
  int v44; // eax@115
  int v45; // eax@116

  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 72);
  if ( BYTE1(v2) & 0x40 )
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
        v43 = sub_406B50(*(_DWORD *)(a1 + 44), v40, (unsigned __int64)".");
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
      if ( !(unsigned __int8)sub_406D70(*(_DWORD *)(v4 + 72), (__int64 *)(v4 + 88), v7) )
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
      sub_406E20(v15, v4 + 88, v1);
      return v1;
    }
    v11 = *(void **)(a1 + 8);
    if ( v11 )
    {
      if ( !(BYTE1(v2) & 0x20) )
      {
        if ( (unsigned int)sub_406BA0(v4, v1, -1, *(_BYTE **)(v1 + 48)) )
        {
          v12 = __errno_location();
          v7 = *(_QWORD *)(v4 + 8);
          LODWORD(v12) = *v12;
          *(_WORD *)(v1 + 114) |= 1u;
          *(_DWORD *)(v1 + 64) = (_DWORD)v12;
          if ( v7 )
          {
            v13 = v7;
            do
            {
              *(_QWORD *)(v13 + 48) = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 48LL);
              v13 = *(_QWORD *)(v13 + 16);
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
      sub_406E20(v31, v4 + 88, v1);
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
              if ( BYTE1(v32) & 2 )
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
            sub_406E20(v9, v4 + 88, v7);
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
        sub_406AF0(v23, (_QWORD *)(v4 + 88));
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
        v42 = sub_406B50(*(_DWORD *)(a1 + 44), v41, (unsigned __int64)".");
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
  v28 = *(_QWORD *)(v4 + 32) + v27;
  *(_BYTE *)v28 = 47;
  memmove((void *)(v28 + 1), (const void *)(v7 + 264), *(_QWORD *)(v7 + 96) + 1LL);
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
  __int64 v1; // rbp@1
  int v2; // edx@2
  __int16 v3; // ax@3
  __int64 v4; // r12@3
  __int16 v5; // cx@4
  __int16 v6; // ax@8
  __int64 v7; // rbx@9
  __int16 v8; // ax@14
  int v9; // edi@16
  void *v11; // rdi@26
  int *v12; // rax@29
  __int64 v13; // rax@30
  void *v14; // rdi@36
  int v15; // edi@38
  void *v16; // rdi@40
  __int64 v17; // rdx@43
  void *v18; // rdi@43
  char *v19; // rax@43
  const void *v20; // r13@45
  size_t v21; // r14@45
  __int64 v22; // rax@46
  int v23; // edi@46
  __int16 v24; // ax@46
  __int64 v25; // rcx@48
  __int64 v26; // rdx@48
  signed __int64 v27; // rax@48
  signed __int64 v28; // rax@50
  __int16 v29; // ax@57
  __int64 v30; // rax@60
  int v31; // edi@66
  int v32; // eax@71
  int v33; // edi@71
  __int64 v34; // rbp@83
  int v35; // edx@85
  __int64 v36; // rcx@87
  __int64 v37; // rax@91
  __int64 v38; // rdx@91
  __int16 v39; // ax@96
  int v40; // esi@104
  int v41; // esi@106
  int v42; // eax@107
  int v43; // eax@113
  int v44; // eax@115
  int v45; // eax@116

  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 72);
  if ( BYTE1(v2) & 0x40 )
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
        v43 = sub_406B50(*(_DWORD *)(a1 + 44), v40, (unsigned __int64)".");
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
      if ( !(unsigned __int8)sub_406D70(*(_DWORD *)(v4 + 72), (__int64 *)(v4 + 88), v7) )
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
      sub_406E20(v15, v4 + 88, v1);
      return v1;
    }
    v11 = *(void **)(a1 + 8);
    if ( v11 )
    {
      if ( !(BYTE1(v2) & 0x20) )
      {
        if ( (unsigned int)sub_406BA0(v4, v1, -1, *(_BYTE **)(v1 + 48)) )
        {
          v12 = __errno_location();
          v7 = *(_QWORD *)(v4 + 8);
          LODWORD(v12) = *v12;
          *(_WORD *)(v1 + 114) |= 1u;
          *(_DWORD *)(v1 + 64) = (_DWORD)v12;
          if ( v7 )
          {
            v13 = v7;
            do
            {
              *(_QWORD *)(v13 + 48) = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 48LL);
              v13 = *(_QWORD *)(v13 + 16);
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
      sub_406E20(v31, v4 + 88, v1);
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
              if ( BYTE1(v32) & 2 )
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
            sub_406E20(v9, v4 + 88, v7);
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
        sub_406AF0(v23, (_QWORD *)(v4 + 88));
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
        v42 = sub_406B50(*(_DWORD *)(a1 + 44), v41, (unsigned __int64)".");
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
  v28 = *(_QWORD *)(v4 + 32) + v27;
  *(_BYTE *)v28 = 47;
  memmove((void *)(v28 + 1), (const void *)(v7 + 264), *(_QWORD *)(v7 + 96) + 1LL);
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

signed __int64 __fastcall fts_set(__int64 a1, __int64 a2, unsigned int a3)
{
  signed __int64 result; // rax@2

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
  __int64 v2; // rbx@1
  int *v3; // rax@1
  int *v4; // r13@1
  __int64 v5; // r12@2
  __int16 v6; // dx@3
  __int64 result; // rax@4
  void *v8; // rdi@5
  int v9; // er14@7
  int v10; // esi@11
  int v11; // ebp@14
  int v12; // ebx@24

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
    v11 = sub_406B50(*(_DWORD *)(v2 + 44), v10, (unsigned __int64)".");
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

__int64 __fastcall sub_4086A0(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_408780(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_408DA0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_4086A0(a2, a7);
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
        sub_4086A0((__int64)v11, a7);
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
            v40 = sub_408780(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_408780(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_408780(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_409370(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_6104C0 = dword_6102FC;
  dword_6104C4 = dword_6102F8;
  result = sub_408DA0(a1, a2, a3, a4, a5, a6, (__int64)&dword_6104C0, a7);
  dword_6102FC = dword_6104C0;
  qword_610508 = qword_6104D0;
  dword_6102F4 = dword_6104C8;
  return result;
}

__int64 __fastcall sub_4093F0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_409370(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_409470(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409630(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_4094F0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

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

signed __int64 __fastcall sub_409560(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@2
  __int64 v3; // rdx@2
  __int64 v5; // rax@7

  if ( *(_DWORD *)(a1 + 24) != 9827862 )
    __assert_fail("state->magic == 9827862", "lib/cycle-check.c", 0x3Cu, "cycle_check");
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
  {
    *(_QWORD *)(a1 + 16) = 1LL;
    goto LABEL_7;
  }
  if ( *(_QWORD *)a1 == v3 && *(_QWORD *)a2 == *(_QWORD *)(a1 + 8) )
    return 1LL;
  *(_QWORD *)(a1 + 16) = v2 + 1;
  if ( (v2 + 1) & v2 )
    return 0LL;
  if ( v2 != -1 )
  {
LABEL_7:
    v5 = *(_QWORD *)a2;
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = v5;
    return 0LL;
  }
  return 1LL;
}

__int64 __fastcall sub_4095E0(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_40AF60(v4);
}

bool __fastcall sub_409630(int a1)
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

unsigned __int64 __fastcall sub_409690(unsigned __int64 a1)
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

signed __int64 __fastcall sub_409750(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

signed __int64 __fastcall sub_409750(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_409780(__int64 a1, __int64 a2, __int64 **a3, char a4)
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
  v7 = (__int64 *)sub_409750(a1, a2);
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

signed __int64 __fastcall sub_4098A0(void **a1)
{
  void *v1; // rax@1
  float v2; // xmm0_4@2
  float v3; // xmm1_4@5
  float v4; // xmm2_4@5
  signed __int64 result; // rax@7

  v1 = *a1;
  if ( *a1 == &unk_40D6F0 )
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
      *a1 = &unk_40D6F0;
      result = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_409920(__int64 a1, __int64 a2, char a3)
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
              v8 = sub_409750(a1, *(_QWORD *)v6);
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

__int64 __fastcall sub_409CB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 *v3; // rax@1
  __int64 v4; // rsi@1
  __int64 *v5; // rbx@2
  __int64 result; // rax@7

  v2 = a2;
  v3 = (__int64 *)sub_409750(a1, a2);
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

char **__fastcall sub_409F20(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(), __int64 (__fastcall *a4)(), char *a5)
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
    v7 = sub_409730;
  if ( !a4 )
    v6 = sub_409740;
  v9 = malloc(0x50uLL);
  v10 = (char **)v9;
  if ( v9 )
  {
    v11 = (void **)((char *)v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_4098A0(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_409690(v8);
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
      *((_QWORD *)v9 + 5) = &unk_40D6F0;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_4098A0(v11) )
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

void __fastcall sub_40A160(void *ptr)
{
  void (**v1)(void); // r12@1
  void (*v2)(void); // rbp@1
  unsigned __int64 v3; // rax@1
  void (*i)(void); // rbx@7
  __int64 v5; // rdi@8
  __int64 v6; // rdi@13
  __int64 v7; // rbx@14
  void (*v8)(void); // rdi@16
  void (*v9)(void); // rbx@17

  v1 = (void (**)(void))ptr;
  v2 = *(void (**)(void))ptr;
  v3 = *((_QWORD *)ptr + 1);
  if ( *((_QWORD *)ptr + 8) && *((_QWORD *)ptr + 4) )
  {
    if ( (unsigned __int64)v2 >= v3 )
      goto LABEL_16;
    do
    {
      while ( !*(_QWORD *)v2 )
      {
        v2 = (void (*)(void))((char *)v2 + 16);
        if ( v3 <= (unsigned __int64)v2 )
          goto LABEL_11;
      }
      for ( i = v2; ; v5 = *(_QWORD *)i )
      {
        v1[8]();
        i = (void (*)(void))*((_QWORD *)i + 1);
        if ( !i )
          break;
      }
      v3 = (unsigned __int64)v1[1];
      v2 = (void (*)(void))((char *)v2 + 16);
    }
    while ( v3 > (unsigned __int64)v2 );
LABEL_11:
    v2 = *v1;
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
      v2 = (void (*)(void))((char *)v2 + 16);
    }
    while ( (unsigned __int64)v1[1] > (unsigned __int64)v2 );
  }
LABEL_16:
  v8 = v1[9];
  if ( v8 )
  {
    do
    {
      v9 = (void (*)(void))*((_QWORD *)v8 + 1);
      free(v8);
      v8 = v9;
    }
    while ( v9 );
  }
  free(*v1);
  free(v1);
}

signed __int64 __fastcall sub_40A240(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_409690(a2);
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
  v14 = sub_409920((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_409920(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_409920(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40A240(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_409690(a2);
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
  v14 = sub_409920((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_409920(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_409920(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40A440(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_409780(a1, a2, &v26, 0);
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
        sub_4098A0((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40A240(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_409780(a1, v4, &v26, 0) )
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

signed __int64 __fastcall sub_40A440(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_409780(a1, a2, &v26, 0);
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
        sub_4098A0((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40A240(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_409780(a1, v4, &v26, 0) )
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

__int64 __fastcall sub_40A6C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  int v3; // eax@1
  __int64 result; // rax@4
  __int64 v5; // [sp+8h] [bp-10h]@1

  v2 = a2;
  v3 = sub_40A440(a1, a2, &v5);
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

__int64 __fastcall sub_40A700(__int64 a1, __int64 a2)
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
  v3 = sub_409780(a1, a2, &v24, 1);
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
    sub_4098A0((void **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40A240(a1, v17) )
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
  return *(_BYTE *)(a1 + 28);
}

__int64 __fastcall sub_40A910(__int64 a1, int a2)
{
  char v2; // dl@1
  int v3; // ecx@1
  _DWORD *v4; // r8@1
  __int64 result; // rax@1
  int v6; // esi@1

  v2 = *(_BYTE *)(a1 + 28) ^ 1;
  v3 = (v2 + (unsigned __int8)*(_DWORD *)(a1 + 20)) & 3;
  v4 = (_DWORD *)(a1 + 4LL * ((v2 + (unsigned __int8)*(_DWORD *)(a1 + 20)) & 3));
  result = *v4;
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
  _DWORD *v1; // rcx@2
  int v2; // edx@2
  __int64 result; // rax@2

  if ( *(_BYTE *)(a1 + 28) )
    abort();
  v1 = (_DWORD *)(a1 + 4LL * *(_DWORD *)(a1 + 20));
  v2 = *(_DWORD *)(a1 + 20);
  result = *v1;
  *v1 = *(_DWORD *)(a1 + 16);
  if ( v2 == *(_DWORD *)(a1 + 24) )
    *(_BYTE *)(a1 + 28) = 1;
  else
    *(_DWORD *)(a1 + 20) = ((_BYTE)v2 + 3) & 3;
  return result;
}

__int64 __fastcall sub_40A950(__int64 a1)
{
  _DWORD *v1; // rcx@2
  int v2; // edx@2
  __int64 result; // rax@2

  if ( *(_BYTE *)(a1 + 28) )
    abort();
  v1 = (_DWORD *)(a1 + 4LL * *(_DWORD *)(a1 + 20));
  v2 = *(_DWORD *)(a1 + 20);
  result = *v1;
  *v1 = *(_DWORD *)(a1 + 16);
  if ( v2 == *(_DWORD *)(a1 + 24) )
    *(_BYTE *)(a1 + 28) = 1;
  else
    *(_DWORD *)(a1 + 20) = ((_BYTE)v2 + 3) & 3;
  return result;
}

const char *sub_40A9A0()
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
                sub_40AFB0(v61);
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
            sub_40AFB0(v40);
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

__int64 __fastcall sub_40AF10(int a1, const char *a2, char a3, __int64 a4)
{
  __int64 v4; // rcx@1
  int v5; // eax@3
  __int64 v7; // [sp+38h] [bp-20h]@1

  v7 = a4;
  v4 = 0LL;
  if ( a3 & 0x40 )
    v4 = (unsigned int)v7;
  v5 = openat(a1, a2, a3, v4);
  return sub_40AF60(v5);
}

__int64 __fastcall sub_40AF60(int fd)
{
  __int64 result; // rax@2
  int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_40B170();
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

int __fastcall sub_40AFB0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_406300(stream) )
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

__int64 __fastcall sub_40B030(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_610500 < 0 )
    {
      v4 = sub_40B030(a1);
      if ( v4 >= 0 && dword_610500 == -1 )
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
        dword_610500 = 1;
      }
      else
      {
        v4 = sub_40B030(a1);
        if ( v4 >= 0 )
        {
          dword_610500 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

__int64 __fastcall sub_40B170(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return sub_40B030(a1, 0, 3LL, a4);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40B1F0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_610268 )
    v1 = unk_610268;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40B208(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60FE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
