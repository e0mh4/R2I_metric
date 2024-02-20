#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char **v3; // rbx@1
  int v4; // eax@1
  const char *v5; // r12@1
  char *v6; // r13@1
  char *v7; // r15@1
  char v8; // r14@1
  int v9; // eax@2
  char **v10; // rax@37
  char *v11; // rax@37
  int v12; // ebp@38
  char **v13; // rbx@38
  char *v14; // rax@44
  int v15; // eax@44
  signed int v16; // ebp@47
  __int64 v18; // rax@52
  signed __int64 v19; // r12@52
  char *v20; // rdi@53
  const char **v21; // r13@58
  int v22; // er8@59
  char **v23; // rax@62
  char *v24; // rax@62
  char *v25; // rax@67
  __int64 v26; // rax@69
  __int64 v27; // rbx@69
  char *v28; // rax@69
  __int64 v29; // rax@70
  __int64 v30; // rbp@70
  char *v31; // rbx@70
  int *v32; // rax@70
  const char *v33; // rsi@71
  char *v34; // rax@72
  __int64 v35; // rax@73
  __int64 v36; // rbx@73
  char *v37; // rax@73
  char *v38; // rax@76
  int v39; // ST18_4@77
  __int64 v40; // rax@77
  __int64 v41; // rbx@77
  char *v42; // rax@77
  char *errnum; // [sp+8h] [bp-120h]@1
  int v44; // [sp+10h] [bp-118h]@1
  int v45; // [sp+14h] [bp-114h]@1
  __int64 v46; // [sp+18h] [bp-110h]@1
  __int64 v47; // [sp+20h] [bp-108h]@1
  __int16 v48; // [sp+28h] [bp-100h]@1
  __int64 v49; // [sp+2Ch] [bp-FCh]@1
  __int64 v50; // [sp+34h] [bp-F4h]@1
  char v51; // [sp+3Ch] [bp-ECh]@1
  __int16 v52; // [sp+3Dh] [bp-EBh]@1
  bool v53; // [sp+3Fh] [bp-E9h]@1
  char v54; // [sp+40h] [bp-E8h]@1
  int v55; // [sp+44h] [bp-E4h]@1
  __int64 v56; // [sp+48h] [bp-E0h]@1
  __int64 v57; // [sp+50h] [bp-D8h]@1
  struct stat stat_buf; // [sp+60h] [bp-C8h]@35

  v3 = a2;
  sub_40C350(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_415170(
    sub_40A6C0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  sub_4053C0(&v44);
  v55 = 1;
  v49 = 72339069031481600LL;
  v50 = 281474993487872LL;
  v46 = 8589934596LL;
  v51 = 0;
  v45 = 2;
  v47 = 0LL;
  v48 = 1;
  v4 = isatty(0);
  v54 = 0;
  v56 = 0LL;
  v53 = v4 != 0;
  v5 = 0LL;
  v6 = 0LL;
  v52 = 0;
  v7 = 0LL;
  v8 = 0;
  v57 = 0LL;
  errnum = 0LL;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = sub_413690(a1, a2, "bfint:uvS:TZ", &off_415DC0, 0LL);
          if ( v9 == -1 )
            goto LABEL_38;
          if ( v9 != 102 )
            break;
          LODWORD(v46) = 1;
        }
        if ( v9 > 102 )
          break;
        if ( v9 == 83 )
        {
          v8 = 1;
          errnum = filename;
        }
        else
        {
          if ( v9 <= 83 )
          {
            if ( v9 == -131 )
            {
              sub_40FF60((char)stdout);
              exit(0);
            }
            if ( v9 == -130 )
              sub_4036B0(0);
LABEL_22:
            sub_4036B0(1);
          }
          if ( v9 != 90 )
          {
            if ( v9 == 98 )
            {
              v8 = 1;
              if ( filename )
                v7 = filename;
            }
            else
            {
              if ( v9 != 84 )
                goto LABEL_22;
              v5 = (const char *)1;
            }
          }
        }
      }
      if ( v9 == 116 )
        break;
      if ( v9 <= 116 )
      {
        if ( v9 == 105 )
        {
          LODWORD(v46) = 3;
        }
        else
        {
          if ( v9 != 110 )
            goto LABEL_22;
          LODWORD(v46) = 2;
        }
      }
      else if ( v9 == 118 )
      {
        HIBYTE(v52) = 1;
      }
      else if ( v9 >= 118 )
      {
        if ( v9 != 128 )
          goto LABEL_22;
        byte_61D4F0 = 1;
      }
      else
      {
        LOBYTE(v52) = 1;
      }
    }
    if ( v6 )
    {
      v38 = dcgettext(0LL, "multiple target directories specified", 5);
      error(1, 0, v38);
      goto LABEL_77;
    }
    if ( __xstat(1, filename, &stat_buf) )
    {
      LODWORD(v29) = sub_40DD80(4LL, filename);
      v30 = v29;
      v31 = dcgettext(0LL, "failed to access %s", 5);
      v32 = __errno_location();
      error(1, *v32, v31, v30);
LABEL_71:
      v33 = "missing file operand";
LABEL_72:
      v34 = dcgettext(0LL, v33, 5);
      error(0, 0, v34);
      goto LABEL_22;
    }
    v6 = filename;
  }
  while ( (stat_buf.st_mode & 0xF000) == 0x4000 );
  LODWORD(v10) = sub_40DD80(4LL, filename);
  v3 = v10;
  v11 = dcgettext(0LL, "target %s is not a directory", 5);
  error(1, 0, v11, v3);
LABEL_38:
  v12 = a1 - dword_61D47C;
  v13 = &v3[dword_61D47C];
  if ( (v6 == 0LL) >= (signed int)(a1 - dword_61D47C) )
  {
LABEL_68:
    if ( v12 == 1 )
    {
      LODWORD(v26) = sub_40DD80(4LL, *v13);
      v27 = v26;
      v28 = dcgettext(0LL, "missing destination file operand after %s", 5);
      error(0, 0, v28, v27);
      goto LABEL_22;
    }
    goto LABEL_71;
  }
  if ( !(_BYTE)v5 )
  {
    if ( v6 )
    {
      if ( v8 )
        goto LABEL_43;
      v44 = 0;
      sub_40A040(errnum);
      sub_409750();
      goto LABEL_46;
    }
    if ( v12 == 1 )
      __assert_fail("2 <= n_files", "src/mv.c", 0x1C6u, "main");
    v21 = (const char **)&v13[v12 - 1];
    v5 = *v21;
    if ( !__xstat(1, *v21, &stat_buf) )
      goto LABEL_63;
    v22 = *__errno_location();
    if ( !v22 )
      goto LABEL_63;
    if ( v22 == 2 )
    {
      do
      {
        if ( v12 == 2 )
          goto LABEL_42;
        LODWORD(v23) = sub_40DD80(4LL, *v21);
        v13 = v23;
        v24 = dcgettext(0LL, "target %s is not a directory", 5);
        error(1, 0, v24, v13);
LABEL_63:
        ;
      }
      while ( (stat_buf.st_mode & 0xF000) != 0x4000 );
      v6 = v13[--v12];
      v15 = 0;
      if ( v8 )
      {
LABEL_43:
        if ( (_DWORD)v46 == 2 )
        {
          v33 = "options --backup and --no-clobber are mutually exclusive";
          goto LABEL_72;
        }
        v14 = dcgettext(0LL, "backup type", 5);
        v15 = sub_40A5F0(v14, v7);
      }
      v44 = v15;
      sub_40A040(errnum);
      sub_409750();
      if ( !v6 )
        goto LABEL_56;
LABEL_46:
      if ( v12 == 1 )
      {
        LOBYTE(v16) = sub_403620(*v13, v6, 1LL, &v44);
      }
      else
      {
        sub_405360(&v44);
        v18 = (unsigned int)(v12 - 1);
        v16 = 1;
        v19 = (signed __int64)&v13[v18 + 1];
        do
        {
          v20 = *v13;
          ++v13;
          v16 &= sub_403620(v20, v6, 1LL, &v44);
        }
        while ( v13 != (char **)v19 );
      }
      return (unsigned __int8)(v16 ^ 1);
    }
LABEL_77:
    v39 = v22;
    LODWORD(v40) = sub_40DD80(4LL, v5);
    v41 = v40;
    v42 = dcgettext(0LL, "failed to access %s", 5);
    error(1, v39, v42, v41);
    start();
  }
  if ( v6 )
  {
    v25 = dcgettext(0LL, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5);
    error(1, 0, v25);
    goto LABEL_68;
  }
  if ( v12 > 2 )
  {
    LODWORD(v35) = sub_40DD80(4LL, v13[2]);
    v36 = v35;
    v37 = dcgettext(0LL, "extra operand %s", 5);
    error(0, 0, v37, v36);
    sub_4036B0(1);
  }
LABEL_42:
  v6 = 0LL;
  if ( v8 )
    goto LABEL_43;
  v44 = 0;
  sub_40A040(errnum);
  sub_409750();
LABEL_56:
  LOBYTE(v16) = sub_403620(*v13, v13[1], 0LL, &v44);
  return (unsigned __int8)(v16 ^ 1);
}

signed int sub_40345B()
{
  return 6411400;
}

int sub_40347A()
{
  return 0;
}

signed int sub_4034B1()
{
  signed int result; // eax@4

  if ( !byte_61D4C8 )
  {
    while ( qword_61D4D0 < (unsigned __int64)(((&unk_61CE48 - (_UNKNOWN *)&qword_61CE40) >> 3) - 1) )
      (*(&qword_61CE40 + ++qword_61D4D0))();
    result = sub_40345B();
    byte_61D4C8 = 1;
  }
  return result;
}

int sub_403508()
{
  return sub_40347A();
}

char __fastcall sub_403510(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1
  char result; // al@1
  __int64 v5; // rax@7
  char v6; // al@8
  int v7; // eax@8
  __int64 v8; // rax@10
  __int64 v9; // rbp@10
  char *v10; // rbx@10
  int *v11; // rax@10
  char v12; // [sp+Eh] [bp-4Ah]@1
  char v13; // [sp+Fh] [bp-49h]@1
  __int64 v14; // [sp+10h] [bp-48h]@8
  __int64 v15; // [sp+18h] [bp-40h]@8
  char v16; // [sp+20h] [bp-38h]@7
  int v17; // [sp+24h] [bp-34h]@7
  __int16 v18; // [sp+28h] [bp-30h]@7
  char v19; // [sp+2Ah] [bp-2Eh]@7
  __int64 v20; // [sp+30h] [bp-28h]@7
  __int16 v21; // [sp+38h] [bp-20h]@7
  char v22; // [sp+3Ah] [bp-1Eh]@7

  v3 = a3;
  result = sub_4094D0(a1, a2, 0LL, a3, &v12, &v13);
  if ( result )
  {
    if ( v12 )
      return 0;
    if ( v13 != 1 && a1 )
    {
      v16 = 0;
      v17 = 5;
      v18 = 256;
      v19 = 1;
      v21 = 0;
      v22 = 1;
      LODWORD(v5) = sub_40E240(&unk_61D4E0);
      v20 = v5;
      if ( v5 )
      {
        v6 = *(_BYTE *)(v3 + 46);
        v14 = a1;
        v15 = 0LL;
        HIBYTE(v21) = v6;
        v7 = sub_4041B0(&v14, &v16);
        if ( (unsigned int)(v7 - 2) <= 2 )
          return v7 != 4;
      }
      else
      {
        LODWORD(v8) = sub_40DD80(4LL, "/");
        v9 = v8;
        v10 = dcgettext(0LL, "failed to get attributes of %s", 5);
        v11 = __errno_location();
        error(1, *v11, v10, v9);
      }
      __assert_fail("VALID_STATUS (status)", "src/mv.c", 0xECu, "do_move");
    }
  }
  return result;
}

char __fastcall sub_403620(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  char v4; // r13@1
  __int64 v5; // r12@1
  char result; // al@4
  __int64 v7; // rax@5
  void *v8; // rax@5
  void *v9; // rbp@5
  char v10; // bl@5

  v4 = a3;
  v5 = a4;
  if ( byte_61D4F0 )
    ((void (*)(void))sub_40AA90)();
  if ( v4 )
  {
    LODWORD(v7) = sub_40AA00();
    LODWORD(v8) = sub_40AEB0(a2, v7, 0LL);
    v9 = v8;
    sub_40AA90(v8);
    v10 = sub_403510(a1, (__int64)v9, v5);
    free(v9);
    result = v10;
  }
  else
  {
    result = sub_403510(a1, a2, v5);
  }
  return result;
}

noreturn void __fastcall  sub_4036B0(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
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
  __int64 *v23; // rax@4
  _BYTE *v24; // rdi@5
  bool v25; // cf@5
  bool v26; // zf@5
  const char *v27; // rsi@6
  signed __int64 v28; // rcx@6
  char *v29; // rbp@10
  char *v30; // rax@11
  __int64 v31; // r8@11
  char *v32; // rax@11
  char *v33; // r12@13
  char *v34; // rax@13
  __int64 v35; // r8@13
  char *v36; // rax@15
  __int64 v37; // r8@15
  char *v38; // rax@16
  __int64 v39; // r8@16
  char *v40; // rax@16
  char *v41; // rax@18
  __int64 v42; // r8@18
  char *v43; // rax@20
  __int64 v44; // rcx@20
  __int64 v45; // r8@20
  const char *v46; // [sp+0h] [bp-88h]@4
  const char *v47; // [sp+8h] [bp-80h]@4
  const char *v48; // [sp+10h] [bp-78h]@4
  const char *v49; // [sp+18h] [bp-70h]@4
  const char *v50; // [sp+20h] [bp-68h]@4
  const char *v51; // [sp+28h] [bp-60h]@4
  const char *v52; // [sp+30h] [bp-58h]@4
  const char *v53; // [sp+38h] [bp-50h]@4
  const char *v54; // [sp+40h] [bp-48h]@4
  const char *v55; // [sp+48h] [bp-40h]@4
  const char *v56; // [sp+50h] [bp-38h]@4
  const char *v57; // [sp+58h] [bp-30h]@4
  __int64 v58; // [sp+60h] [bp-28h]@4
  __int64 v59; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_61D940;
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
         "  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n",
         5);
  __printf_chk(1LL, v4, v2, v2, v2);
  v5 = stdout;
  v6 = dcgettext(0LL, "Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "      --backup[=CONTROL]       make a backup of each existing destination file\n"
          "  -b                           like --backup but does not accept an argument\n"
          "  -f, --force                  do not prompt before overwriting\n"
          "  -i, --interactive            prompt before overwrite\n"
          "  -n, --no-clobber             do not overwrite an existing file\n"
          "If you specify more than one of -i, -f, -n, only the final one takes effect.\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n"
          "                                 argument\n"
          "  -S, --suffix=SUFFIX          override the usual backup suffix\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "  -t, --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY\n"
          "  -T, --no-target-directory    treat DEST as a normal file\n"
          "  -u, --update                 move only when the SOURCE file is newer\n"
          "                                 than the destination file or when the\n"
          "                                 destination file is missing\n"
          "  -v, --verbose                explain what is being done\n"
          "  -Z, --context                set SELinux security context of destination\n"
          "                                 file to default type\n",
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
  v46 = "[";
  v23 = (__int64 *)&v46;
  v47 = "test invocation";
  v48 = "coreutils";
  v49 = "Multi-call invocation";
  v50 = "sha224sum";
  v51 = "sha2 utilities";
  v52 = "sha256sum";
  v53 = "sha2 utilities";
  v54 = "sha384sum";
  v55 = "sha2 utilities";
  v56 = "sha512sum";
  v57 = "sha2 utilities";
  v58 = 0LL;
  v59 = 0LL;
  do
  {
    v23 += 2;
    v24 = (_BYTE *)*v23;
    v25 = 0;
    v26 = *v23 == 0;
    if ( !*v23 )
      break;
    v27 = "mv";
    v28 = 3LL;
    do
    {
      if ( !v28 )
        break;
      v25 = (const unsigned __int8)*v27 < *v24;
      v26 = *v27++ == *v24++;
      --v28;
    }
    while ( v26 );
  }
  while ( (!v25 && !v26) != v25 );
  v29 = (char *)v23[1];
  if ( v29 )
  {
    v30 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v30, &unk_41525C, "https://www.gnu.org/software/coreutils/", v31);
    v32 = setlocale(5, 0LL);
    if ( !v32 || !strncmp(v32, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v38 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v38, &unk_41525C, "https://www.gnu.org/software/coreutils/", v39);
    v40 = setlocale(5, 0LL);
    if ( !v40 || !strncmp(v40, "en_", 3uLL) )
    {
      v29 = "mv";
      v41 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v33 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v41, "https://www.gnu.org/software/coreutils/", "mv", v42);
LABEL_15:
      v36 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v36, v29, v33, v37);
LABEL_3:
      exit(v1);
    }
    v29 = "mv";
  }
  v43 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v43, "mv", v44, v45);
LABEL_13:
  v33 = "Multi-call invocation" + 10;
  v34 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v34, "https://www.gnu.org/software/coreutils/", "mv", v35);
  if ( v29 != "mv" )
    v33 = "";
  goto LABEL_15;
}

signed __int64 __fastcall sub_403A80(__int64 a1, __int64 a2, __int64 a3, char a4)
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
  __int64 v18; // rcx@24
  char *v19; // rsi@24
  __int64 v20; // r8@24
  __int64 v21; // [sp+0h] [bp-B8h]@26

  v4 = a4;
  v5 = a3;
  if ( unlinkat(*(_DWORD *)(a1 + 44), *(const char **)(a2 + 48), (a4 != 0) << 9) )
  {
    v6 = __errno_location();
    v7 = (unsigned int)*v6;
    v8 = v6;
    if ( (_DWORD)v7 == 30 )
    {
      if ( !__fxstatat(1, *(_DWORD *)(a1 + 44), *(const char **)(a2 + 48), (struct stat *)&v21, 256)
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
      LODWORD(v10) = sub_40DD80(4LL, *(_QWORD *)(a2 + 56));
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
    LODWORD(v16) = sub_40DD80(4LL, *(_QWORD *)(a2 + 56));
    v17 = v16;
    if ( v4 )
      v19 = dcgettext(0LL, "removed directory %s\n", 5);
    else
      v19 = dcgettext(0LL, "removed %s\n", 5);
    __printf_chk(1LL, v19, v17, v18, v20);
    result = 2LL;
  }
  return result;
}

__int64 __fastcall sub_403C90(int fildes, char *filename, struct stat *stat_buf)
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

signed __int64 __fastcall sub_403D00(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, int a5, signed int *a6)
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
  __int64 v19; // rbp@23
  char *v20; // rax@24
  FILE *v21; // rdi@25
  __int64 v23; // rax@38
  __int64 v24; // rbx@38
  char *v25; // rax@39
  __int64 v26; // rax@43
  __int64 v27; // rbx@43
  __int64 v28; // rbp@45
  char *v29; // rdx@46
  char v30; // al@48
  int v31; // ST18_4@51
  int v32; // eax@54
  __int64 v33; // rax@56
  __int64 v34; // rax@58
  char *v35; // rbp@64
  int *v36; // rax@64
  __int64 v37; // [sp+8h] [bp-E0h]@1
  int fd; // [sp+10h] [bp-D8h]@1
  int v39; // [sp+14h] [bp-D4h]@1
  int v40; // [sp+18h] [bp-D0h]@3
  int *v41; // [sp+18h] [bp-D0h]@4
  struct stat stat_buf; // [sp+20h] [bp-C8h]@2

  v6 = a4;
  v7 = (DIR *)*(_DWORD *)(a1 + 44);
  v39 = a5;
  v8 = *(const char **)(a2 + 48);
  fd = (signed int)v7;
  v37 = *(_QWORD *)(a2 + 56);
  if ( a6 )
  {
    *a6 = 2;
    v9 = a6;
    stat_buf.st_size = -1LL;
    v10 = 4 * (a3 != 0);
    v11 = openat((int)v7, v8, 198912);
    if ( v11 < 0 )
      goto LABEL_8;
    v40 = v11;
    v12 = fdopendir(v11);
    if ( !v12 )
    {
      v7 = (DIR *)(unsigned int)v40;
      close(v40);
      v14 = 3;
      goto LABEL_9;
    }
    v41 = __errno_location();
    *v41 = 0;
    while ( 1 )
    {
      v13 = readdir(v12);
      if ( !v13 )
        break;
      if ( v13->d_name[0] == 46 )
      {
        v30 = v13->d_name[(v13->d_name[1] == 46) + 1];
        if ( !v30 || v30 == 47 )
          continue;
      }
      v7 = v12;
      closedir(v12);
      goto LABEL_8;
    }
    v7 = v12;
    v31 = *v41;
    closedir(v12);
    if ( v31 )
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
  if ( (unsigned __int8)sub_4100A0(v7) )
    goto LABEL_68;
  if ( (unsigned int)sub_403C90(fd, (char *)v8, &stat_buf) )
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
    LODWORD(v34) = sub_40DD80(4LL, v37);
    v24 = v34;
    goto LABEL_39;
  }
  v17 = 1;
LABEL_33:
  if ( !v10 )
  {
    v18 = &stat_buf;
    if ( !(unsigned int)sub_403C90(fd, (char *)v8, &stat_buf) )
    {
      v32 = stat_buf.st_mode & 0xF000;
      if ( v32 == 40960 )
      {
        if ( *(_DWORD *)(v6 + 4) != 3 )
          return 2LL;
        goto LABEL_56;
      }
      if ( v32 != 0x4000 )
      {
LABEL_56:
        LODWORD(v33) = sub_40DD80(4LL, v37);
        v27 = v33;
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
      LODWORD(v23) = sub_40DD80(4LL, v37);
      v24 = v23;
LABEL_39:
      v25 = dcgettext(0LL, "cannot remove %s", 5);
      error(0, v16, v25, v24);
      return 4LL;
    }
    goto LABEL_65;
  }
  LODWORD(v26) = sub_40DD80(4LL, v37);
  v27 = v26;
  if ( v39 == 2 && !(_BYTE)v12 )
  {
    v28 = qword_61D940;
    if ( v17 )
      v29 = dcgettext(0LL, "%s: descend into write-protected directory %s? ", 5);
    else
      v29 = dcgettext(0LL, "%s: descend into directory %s? ", 5);
    v21 = stderr;
    __fprintf_chk(stderr, 1LL, v29, v28);
LABEL_26:
    if ( (unsigned __int8)sub_4103F0(v21, 1LL) )
      return 2LL;
    return 3LL;
  }
  v18 = &stat_buf;
LABEL_22:
  if ( !(unsigned int)sub_403C90(fd, (char *)v8, v18) )
  {
    sub_40AC30(v18, v8);
    v19 = qword_61D940;
    if ( v17 )
      v20 = dcgettext(0LL, "%s: remove write-protected %s %s? ", 5);
    else
      v20 = dcgettext(0LL, "%s: remove %s %s? ", 5);
    v21 = stderr;
    __fprintf_chk(stderr, 1LL, v20, v19);
    goto LABEL_26;
  }
  v35 = dcgettext(0LL, "cannot remove %s", 5);
  v36 = __errno_location();
  error(0, *v36, v35, v27);
  return 4LL;
}

__int64 __fastcall sub_4041B0(_QWORD *a1, __int64 a2)
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
  LODWORD(v4) = sub_410370(a1, *(_BYTE *)(a2 + 8) < 1u ? 536 : 600, 0LL);
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
        LODWORD(v9) = sub_40DE50(0LL, 3LL, *(_QWORD *)(v7 + 56));
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
          v18 = sub_403D00(v5, v7, v17, v2, 3, 0LL);
          if ( v18 == 2 )
            v18 = sub_403A80(v5, v7, v2, v17);
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
        LODWORD(v59) = sub_40DD80(4LL, *(_QWORD *)(v7 + 56));
        v60 = v59;
        v61 = dcgettext(0LL, "skipping %s, since it's on a different device", 5);
        error(0, 0, v61, v60);
        continue;
      case 2:
        LODWORD(v19) = sub_40DE50(0LL, 3LL, *(_QWORD *)(v7 + 56));
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
          LODWORD(v33) = sub_40DD80(4LL, *(_QWORD *)(v7 + 56));
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
        LODWORD(v30) = sub_40AA00(*(_QWORD *)(v7 + 48));
        if ( *(_BYTE *)v30 == 46 )
        {
          v37 = *(_BYTE *)(v30 + (*(_BYTE *)(v30 + 1) == 46) + 1);
          if ( !v37 || v37 == 47 )
          {
            LODWORD(v38) = sub_40DCA0(2LL, 4LL, *(_QWORD *)(v7 + 56));
            v39 = v38;
            LODWORD(v40) = sub_40DCA0(1LL, 4LL, &unk_415FD6);
            v41 = v40;
            LODWORD(v42) = sub_40DCA0(0LL, 4LL, ".");
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
                LODWORD(v52) = sub_40DD80(4LL, *(_QWORD *)(v7 + 56));
                v53 = v52;
                v54 = dcgettext(0LL, "it is dangerous to operate recursively on %s", 5);
                error(0, 0, v54, v53);
              }
              else
              {
                LODWORD(v66) = sub_40DCA0(1LL, 4LL, "/");
                v67 = v66;
                LODWORD(v68) = sub_40DCA0(0LL, 4LL, *(_QWORD *)(v7 + 56));
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
        v18 = sub_403D00(v5, v7, 1u, v2, 2, &v71);
        if ( v18 != 2 || v71 == 4 && (v18 = sub_403A80(v5, v7, v2, 1), fts_set(v5, v7, 4LL), fts_read(v5), v18 != 2) )
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
        LODWORD(v62) = sub_40DE50(0LL, 3LL, *(_QWORD *)(v7 + 56));
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

bool __fastcall sub_404890(char *name, __int16 a2)
{
  bool result; // al@2

  if ( (a2 & 0xF000) == 40960 )
  {
    result = 1;
  }
  else if ( (unsigned __int8)sub_4100A0(name) )
  {
    result = 1;
  }
  else
  {
    result = euidaccess(name, 2) == 0;
  }
  return result;
}

__int64 __fastcall sub_4048E0(int fd, size_t a2)
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
      buf = &unk_61D500;
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
      v4 = sub_40AFB0(fd, buf, v3);
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

__int64 __fastcall sub_404990(int a1, __off_t a2, __off_t a3)
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

int __fastcall sub_4049D0(int a1, const char *a2, __mode_t a3)
{
  int result; // eax@2

  if ( a1 >= 0 )
    result = fchmod(a1, a3);
  else
    result = chmod(a2, a3);
  return result;
}

int sub_4049F0()
{
  int *v0; // rax@1
  int *v1; // rbx@1
  char *v2; // rax@1

  v0 = __errno_location();
  *v0 = 95;
  v1 = v0;
  v2 = dcgettext(0LL, "failed to restore the default file creation context", 5);
  error(1, *v1, v2);
  return sub_404A30();
}

int __fastcall sub_404A30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx@1
  __int64 v4; // rax@1
  __int64 v5; // rbp@1
  __int64 v6; // rax@1
  __int64 v7; // r8@1
  __int64 v8; // rax@2
  __int64 v9; // rbx@2
  char *v10; // rax@2
  __int64 v11; // rcx@2
  __int64 v12; // r8@2
  char *v13; // rax@3

  v3 = a3;
  LODWORD(v4) = sub_40DCA0(1LL, 4LL, a2);
  v5 = v4;
  LODWORD(v6) = sub_40DCA0(0LL, 4LL, a1);
  __printf_chk(1LL, "%s -> %s", v6, v5, v7);
  if ( v3 )
  {
    LODWORD(v8) = sub_40DD80(4LL, v3);
    v9 = v8;
    v10 = dcgettext(0LL, " (backup: %s)", 5);
    __printf_chk(1LL, v10, v9, v11, v12);
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
  return (unsigned __int64)v13;
}

int __fastcall sub_404AE0(__int64 a1, char *a2, int *a3)
{
  int *v3; // rbp@1
  int v4; // ebp@2
  __int64 v5; // rbx@2
  char *v6; // rdx@4
  FILE *v7; // rdi@5
  int result; // eax@5
  __int64 v9; // rbx@6
  char *v10; // rax@6
  FILE *v11; // rdi@6
  char v12; // [sp+4h] [bp-34h]@2
  char v13; // [sp+Eh] [bp-2Ah]@2

  v3 = a3;
  if ( sub_404890(a2, *a3) )
  {
    sub_40DD80(4LL, a2);
    v9 = qword_61D940;
    v10 = dcgettext(0LL, "%s: overwrite %s? ", 5);
    v11 = stderr;
    __fprintf_chk(stderr, 1LL, v10, v9);
    result = sub_4103F0(v11, 1LL);
  }
  else
  {
    sub_40AD20((unsigned int)*v3, &v12);
    v4 = *v3;
    v13 = 0;
    sub_40DD80(4LL, a2);
    v5 = qword_61D940;
    if ( *(_BYTE *)(a1 + 24) || *(_DWORD *)(a1 + 20) & 0xFFFF00 )
      v6 = dcgettext(0LL, "%s: replace %s, overriding mode %04lo (%s)? ", 5);
    else
      v6 = dcgettext(0LL, "%s: unwritable %s (mode %04lo, %s); try anyway? ", 5);
    v7 = stderr;
    __fprintf_chk(stderr, 1LL, v6, v5);
    result = sub_4103F0(v7, 1LL);
  }
  return result;
}

signed __int64 __fastcall sub_404C10(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5)
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
  __int64 v14; // rax@5
  __int64 v15; // r13@5
  __int64 v16; // rax@5
  __int64 v17; // rbp@5
  char *v18; // rbx@5
  int *v19; // rax@5

  v5 = a4;
  v6 = a1;
  v7 = sub_409B50(4294967196LL, a1, 4294967196LL, a2, (unsigned int)(a5 != 0) << 10, a3);
  if ( v7 < 0 )
  {
    LODWORD(v14) = sub_40DCA0(1LL, 4LL, a1);
    v15 = v14;
    LODWORD(v16) = sub_40DCA0(0LL, 4LL, a2);
    v17 = v16;
    v18 = dcgettext(0LL, "cannot create hard link %s to %s", 5);
    v19 = __errno_location();
    error(0, *v19, v18, v17, v15);
    result = 0LL;
  }
  else
  {
    LOBYTE(v6) = v5 & (v7 > 0);
    if ( (_BYTE)v6 )
    {
      LODWORD(v9) = sub_40DD80(4LL, a2);
      v10 = v9;
      v11 = dcgettext(0LL, "removed %s\n", 5);
      __printf_chk(1LL, v11, v10, v12, v13);
      result = v6;
    }
    else
    {
      result = 1LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_404D20(int a1, __int64 a2, char a3, __off_t a4)
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
    LODWORD(v11) = sub_40DD80(4LL, a2);
    v9 = "cannot lseek %s";
    v10 = v11;
  }
  else
  {
    if ( !v4 || (signed int)sub_404990(a1, v6 - v5, v5) >= 0 )
      return 1LL;
    LODWORD(v8) = sub_40DD80(4LL, a2);
    v9 = "error deallocating %s";
    v10 = v8;
  }
  v12 = dcgettext(0LL, v9, 5);
  v13 = __errno_location();
  error(0, *v13, v12, v10);
  return 0LL;
}

signed __int64 __usercall sub_404DE0(void *a1, size_t a2, unsigned int a3, int a4, int a5, size_t a6, char a7, __int64 a8, __int64 a9, size_t a10, _QWORD *a11, _BYTE *a12)
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
      LODWORD(v19) = sub_40DD80(4LL, a8);
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
        LODWORD(v39) = sub_40DD80(4LL, a8);
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
    v37 = sub_404D20(v48, a9, v51, v13);
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
          return sub_404D20(v48, a9, v58, v46);
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
  v35 = sub_40AFB0(v48, v27, v13);
  v36 = v50;
  if ( v13 == v35 )
    goto LABEL_27;
  v18 = v12;
  LODWORD(v42) = sub_40DD80(4LL, a9);
  v43 = v42;
  v44 = dcgettext(0LL, "error writing %s", 5);
  v45 = __errno_location();
  error(0, *v45, v44, v43);
  return v18;
}

signed __int64 __fastcall sub_405210(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
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
      LODWORD(v8) = sub_40DD80(4LL, a1);
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

__int64 __fastcall sub_4052E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
    LODWORD(v7) = sub_40DCA0(0LL, 4LL, a1);
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

int __fastcall sub_405360(__int64 a1)
{
  __int64 v1; // rax@1

  LODWORD(v1) = sub_40B8C0(61LL, 0LL, sub_40C280, sub_40C2C0, sub_40C330);
  *(_QWORD *)(a1 + 56) = v1;
  return v1;
}

bool __fastcall sub_4053C0(__int64 a1)
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

char __fastcall sub_405400(__int64 a1)
{
  int *v1; // rax@1
  char result; // al@1

  v1 = __errno_location();
  result = *v1 == 22 || *v1 == 1;
  if ( result )
    result = *(_BYTE *)(a1 + 26) ^ 1;
  return result;
}

__int64 __fastcall sub_405430(__int64 a1, const char *a2, int a3, __int64 a4, char a5, __int64 a6)
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
    if ( v10 & v12 & 0xFFF && sub_40C430(v6, (unsigned int)v7, (unsigned __int16)v10 & (unsigned __int16)v11 & 0x1C0) )
    {
      v26 = __errno_location();
      v27 = v26;
      v28 = *v26;
      if ( v28 != 1 && v28 != 22 || *(_BYTE *)(a1 + 27) )
      {
        LODWORD(v29) = sub_40DD80(4LL, v6);
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
  v16 = sub_405400(a1);
  v17 = 0;
  if ( !v16 )
  {
    LODWORD(v22) = sub_40DD80(4LL, v6);
    v23 = v22;
    v24 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
    v25 = __errno_location();
    error(0, *v25, v24, v23);
LABEL_20:
    v17 = -*(_BYTE *)(a1 + 36);
  }
  return (unsigned int)v17;
}

__int64 sub_405620()
{
  __int64 result; // rax@2
  int v1; // eax@3
  int v2; // ebx@3

  if ( dword_61D3F0 == -1 )
  {
    v1 = umask(0);
    v2 = v1;
    dword_61D3F0 = v1;
    umask(v1);
    result = (unsigned int)v2;
  }
  else
  {
    result = (unsigned int)dword_61D3F0;
  }
  return result;
}

__int64 __usercall sub_405650(int a1, __int64 a2, const char *a3, char *a4, __int64 a5, __int64 a6, signed int a7, unsigned int a8, _BYTE *a9, _BYTE *a10, _BYTE *a11)
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
  int *v96; // rax@153
  int *v97; // r12@153
  int v98; // eax@153
  int v99; // eax@160
  int *v100; // rax@161
  __int64 v101; // rax@162
  __int64 v102; // rbx@162
  char *v103; // rax@162
  int v104; // eax@164
  size_t v105; // rax@167
  char v106; // al@172
  __ino_t v107; // rdx@181
  __dev_t v108; // rcx@181
  __int64 v109; // rax@181
  __int64 v110; // rax@186
  const char *v111; // rsi@186
  char *v112; // rax@187
  int v113; // eax@197
  __int64 v114; // rax@198
  const char *v115; // rsi@198
  char *v116; // r12@199
  int *v117; // rax@199
  unsigned __int64 v118; // rax@203
  __int64 v119; // rcx@206
  __int64 v120; // r8@206
  __mode_t v121; // er12@207
  int v122; // eax@208
  __int64 v123; // rax@213
  __int64 v124; // r12@213
  char *v125; // rax@213
  __int64 v126; // rcx@213
  __int64 v127; // r8@213
  __m128i v128; // xmm1@215
  __m128i v129; // xmm2@215
  __m128i v130; // xmm3@215
  __blkcnt_t v131; // rax@215
  char *v132; // rax@215
  char *v133; // r12@219
  char v134; // r15@219
  void *v135; // rax@221
  void *v136; // rbx@221
  void *v137; // rax@221
  void *v138; // r14@221
  char v139; // al@221
  char v140; // r12@222
  __int64 v141; // rax@227
  int v142; // edx@227
  const char *v143; // rsi@228
  char *v144; // rax@229
  size_t v145; // rax@232
  size_t v146; // rax@233
  signed __int64 v147; // rcx@234
  int v148; // eax@237
  __int64 v149; // rcx@237
  __int64 v150; // rax@240
  bool v151; // r12@245
  signed __int64 v152; // rcx@245
  size_t v153; // r9@246
  struct stat *v154; // rdx@246
  __int64 v155; // rax@253
  __int64 v156; // rax@253
  char v157; // al@254
  __int64 v158; // rax@258
  __int64 v159; // r13@258
  __int64 v160; // rax@258
  const char *v161; // rsi@258
  __int64 v162; // rbx@258
  char *v163; // rax@259
  int v164; // eax@271
  int v165; // eax@272
  bool v166; // al@285
  char v167; // al@286
  __int64 v168; // rax@289
  __int64 v169; // r12@289
  char *v170; // rbx@289
  int *v171; // rax@289
  __int64 v172; // rax@290
  __int64 v173; // rax@290
  int v174; // esi@291
  char *v175; // r12@296
  __int64 v176; // rsi@296
  int v177; // ecx@296
  int *v178; // rax@298
  int *v179; // r12@298
  int *v180; // rax@303
  int v181; // er12@303
  void *v182; // rax@305
  char *v183; // rax@305
  void *v184; // rcx@305
  int v185; // esi@305
  const char *v186; // rdx@305
  char v187; // r8@306
  __int64 v188; // rcx@310
  __int64 v189; // rax@329
  __int64 v190; // rbx@329
  char *v191; // rax@329
  __int64 v192; // rax@330
  __int64 v193; // rax@330
  __int64 v194; // r12@330
  char *v195; // rax@330
  __int64 v196; // rax@340
  char *v197; // rax@261
  __int64 v198; // rdx@261
  __int64 v199; // rcx@261
  __int64 v200; // r8@261
  __int64 v201; // rax@349
  _BYTE *v202; // rax@354
  char *v203; // rax@356
  size_t v204; // r12@356
  size_t v205; // rax@356
  int v206; // eax@357
  int v207; // eax@358
  size_t v208; // rax@359
  char *v209; // rax@359
  const char *v210; // r12@359
  char *v211; // rax@359
  __int64 v212; // rsi@361
  char *v213; // rax@361
  char *v214; // r12@361
  size_t v215; // rax@362
  void *v216; // rsp@362
  char *v217; // r12@362
  char v218; // al@371
  int v219; // er12@371
  char *v220; // rax@374
  __int64 v221; // rdx@374
  __int64 v222; // rcx@374
  __int64 v223; // r8@374
  __int64 v224; // rax@375
  __int64 v225; // r12@375
  __int64 v226; // rax@375
  __int64 v227; // rbx@375
  char *v228; // rax@375
  __int64 v229; // rax@376
  __int64 v230; // rax@376
  __int64 v231; // r12@376
  char *v232; // r14@376
  int *v233; // rax@376
  __int64 v234; // rax@378
  const char *v235; // r12@378
  void *v236; // rax@387
  void *v237; // r12@387
  char *v238; // rax@387
  __int64 v239; // rdx@388
  signed int v240; // eax@389
  _BYTE *v241; // rax@394
  __int64 v242; // rax@400
  __int64 v243; // rbx@400
  char *v244; // rax@400
  __int64 v245; // rax@403
  __int64 v246; // rax@404
  char v247; // al@406
  int v248; // er12@409
  int v249; // eax@409
  __int64 v250; // rax@414
  __int64 v251; // rax@414
  __int64 v252; // rax@415
  char v253; // al@419
  __int64 v254; // rax@421
  __int64 v255; // rax@421
  __int64 v256; // rax@422
  char *v257; // r12@422
  int *v258; // rax@422
  int *v259; // rax@423
  __int64 v260; // rax@424
  const char *v261; // rsi@424
  __int64 v262; // rbx@424
  char *v263; // rax@425
  __int64 v264; // rax@426
  void *v265; // rax@429
  char *v266; // r12@429
  int *v267; // rax@429
  __int64 v268; // rax@442
  char *v269; // r12@442
  int *v270; // rax@442
  __int64 v271; // rax@443
  char *v272; // rax@446
  __int64 v273; // rcx@446
  int v274; // eax@448
  __int64 v275; // rax@449
  __int64 v276; // rax@453
  __int64 v277; // r12@453
  char *v278; // rax@453
  __int64 v279; // rax@455
  __int64 v280; // rax@455
  __int64 v281; // rax@458
  __int64 v282; // r12@458
  char *v283; // rax@458
  __int64 v284; // rcx@458
  __int64 v285; // r8@458
  unsigned __int64 v286; // r12@464
  signed __int64 v287; // rax@465
  __int128 v288; // tt@469
  __blksize_t v289; // rdi@471
  unsigned __int64 v290; // rax@473
  char *v291; // rsi@474
  void *v292; // rax@476
  unsigned __int64 v293; // rdx@476
  bool v294; // r9@477
  int v295; // eax@484
  char v296; // r8@492
  int v297; // eax@493
  __int64 v298; // rax@494
  char *v299; // r12@494
  int *v300; // rax@494
  __int64 v301; // rax@509
  __int64 v302; // rax@510
  __int64 v303; // rax@515
  char *v304; // r12@515
  int *v305; // rax@515
  int v306; // eax@520
  int v307; // eax@522
  void *v308; // rax@524
  char *v309; // r12@524
  int *v310; // rax@524
  int v311; // eax@525
  __off_t v312; // r12@532
  char *v313; // rcx@532
  char *v314; // rbx@532
  char v315; // r15@532
  size_t v316; // r14@532
  char v317; // al@533
  size_t v318; // rdx@535
  __off_t v319; // rsi@535
  unsigned int v320; // er13@535
  __int64 v321; // rax@535
  size_t v322; // r8@536
  char *v323; // rax@543
  bool v324; // r12@558
  __int64 v325; // rax@565
  const char *v326; // rsi@565
  char *v327; // r12@566
  int *v328; // rax@566
  __int64 v329; // rdx@569
  char *v330; // rbx@573
  __int64 v331; // rax@574
  __int64 v332; // r12@574
  __int64 v333; // rax@574
  int v334; // eax@582
  void *v335; // rax@585
  __int64 v336; // rax@589
  __int64 v337; // rax@589
  __int64 v338; // r12@589
  int *v339; // rax@589
  char *v340; // r12@590
  int *v341; // rax@590
  signed __int64 v342; // rcx@593
  const char *v343; // rdi@593
  void *v344; // rax@597
  void *v345; // rax@602
  __int64 v346; // rax@605
  __int64 v347; // rax@301
  __int64 v348; // r12@301
  char *v349; // rax@301
  __int64 v350; // rcx@301
  __int64 v351; // r8@301
  __int64 v352; // rax@606
  const char *v353; // rsi@606
  char *v354; // r12@607
  int *v355; // rax@607
  void *v356; // rax@608
  char *v357; // rax@608
  int v358; // eax@609
  int v359; // eax@610
  __int64 v360; // rax@611
  char *v361; // r12@611
  int *v362; // rax@611
  __int64 v363; // rax@615
  __int64 v364; // rax@618
  __int64 v365; // rax@619
  __int64 v366; // rax@623
  __int64 v367; // r12@623
  char *v368; // rax@623
  char v369; // [sp+1h] [bp-381h]@203
  unsigned __int64 v370; // [sp+Ah] [bp-378h]@478
  __off_t v371; // [sp+1Ah] [bp-368h]@532
  char v372; // [sp+21h] [bp-361h]@362
  __int64 v373; // [sp+22h] [bp-360h]@532
  unsigned int v374; // [sp+2Ah] [bp-358h]@532
  int v375; // [sp+2Eh] [bp-354h]@295
  char *v376; // [sp+32h] [bp-350h]@476
  int v377; // [sp+3Ah] [bp-348h]@302
  __mode_t v378; // [sp+3Eh] [bp-344h]@113
  __int64 v379; // [sp+42h] [bp-340h]@219
  const char *v380; // [sp+4Ah] [bp-338h]@219
  char *s; // [sp+52h] [bp-330h]@215
  unsigned int v382; // [sp+5Ah] [bp-328h]@219
  char v383; // [sp+5Fh] [bp-323h]@531
  unsigned __int8 v384; // [sp+60h] [bp-322h]@532
  char v385; // [sp+61h] [bp-321h]@81
  struct stat *v386; // [sp+62h] [bp-320h]@219
  __int64 v387; // [sp+6Ah] [bp-318h]@203
  char *s2; // [sp+72h] [bp-310h]@219
  void *s1; // [sp+7Ah] [bp-308h]@72
  char *old; // [sp+82h] [bp-300h]@35
  __int64 v391; // [sp+8Ah] [bp-2F8h]@1
  size_t n; // [sp+92h] [bp-2F0h]@22
  int v393[2]; // [sp+9Ah] [bp-2E8h]@1
  void *ptr; // [sp+A2h] [bp-2E0h]@10
  struct stat *v395; // [sp+AAh] [bp-2D8h]@4
  char *src; // [sp+B2h] [bp-2D0h]@22
  __mode_t v397; // [sp+BAh] [bp-2C8h]@6
  int v398; // [sp+BEh] [bp-2C4h]@6
  int fildes[2]; // [sp+C2h] [bp-2C0h]@1
  char *filename; // [sp+CAh] [bp-2B8h]@1
  char v401; // [sp+D9h] [bp-2A9h]@538
  __int64 v402; // [sp+DAh] [bp-2A8h]@478
  __off_t length; // [sp+E2h] [bp-2A0h]@219
  __int64 v404; // [sp+EAh] [bp-298h]@514
  __int64 v405; // [sp+F2h] [bp-290h]@514
  __int64 v406; // [sp+FAh] [bp-288h]@514
  char v407; // [sp+102h] [bp-280h]@614
  char v408; // [sp+103h] [bp-27Fh]@555
  void *v409; // [sp+10Ah] [bp-278h]@543
  struct stat stat_buf; // [sp+112h] [bp-270h]@4
  struct stat v411; // [sp+1A2h] [bp-1E0h]@22
  struct stat v412; // [sp+232h] [bp-150h]@219
  struct stat v413; // [sp+2C2h] [bp-C0h]@90

  v12 = a3;
  v13 = a6;
  v14 = a1;
  filename = a4;
  LOBYTE(fildes[0]) = a11 != 0LL;
  v46 = *(_BYTE *)(a6 + 24) == 0;
  v15 = a8;
  v391 = a2;
  *(_QWORD *)v393 = a5;
  if ( !v46 && a11 != 0LL )
    *a11 = 0;
  v46 = *(_DWORD *)(a6 + 4) == 2;
  *a10 = 0;
  v395 = &stat_buf;
  if ( !v46 )
  {
    v16 = __xstat(1, a3, &stat_buf);
    v19 = (char *)a3;
    LOBYTE(a7) = v16 != 0;
    if ( !v16 )
      goto LABEL_6;
LABEL_121:
    a7 = 0;
    LODWORD(v69) = sub_40DD80(4LL, v19);
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
  v397 = stat_buf.st_mode;
  v398 = stat_buf.st_mode & 0xF000;
  if ( v398 != 0x4000 )
  {
    if ( !(_BYTE)a8 )
      goto LABEL_10;
    v20 = *(_QWORD *)(v13 + 64);
    if ( *(_DWORD *)v13 )
    {
      sub_40AB60(v20, v12, v395);
      goto LABEL_10;
    }
    v106 = sub_40ABF0(v20, v12, v395);
    if ( v106 )
    {
      LOBYTE(filename) = v106;
      LODWORD(v189) = sub_40DD80(4LL, v12);
      v190 = v189;
      v191 = dcgettext(0LL, "warning: source file %s specified more than once", 5);
      error(0, 0, v191, v190);
      return (unsigned __int8)filename;
    }
    goto LABEL_173;
  }
  if ( !*(_BYTE *)(v13 + 42) )
  {
    LODWORD(v141) = sub_40DD80(4LL, v19);
    v142 = 5;
    v15 = v141;
    if ( !*(_BYTE *)(v13 + 25) )
    {
LABEL_244:
      v144 = dcgettext(0LL, "-r not specified; omitting directory %s", v142);
      goto LABEL_230;
    }
    v143 = "omitting directory %s";
    goto LABEL_229;
  }
  if ( (_BYTE)a8 )
LABEL_173:
    sub_40AB60(*(_QWORD *)(v13 + 64), v12, v395);
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
  if ( v398 != 0x8000 && (!*(_BYTE *)(v13 + 20) || v398 == 0x4000 || v398 == 40960)
    || *(_BYTE *)(v13 + 24)
    || *(_BYTE *)(v13 + 44)
    || *(_BYTE *)(v13 + 23)
    || *(_DWORD *)v13
    || *(_BYTE *)(v13 + 21) )
  {
    n = (size_t)&v411;
    v99 = __lxstat(1, filename, &v411);
    v18 = (unsigned int)v14;
    LOBYTE(src) = v99 != 0;
    if ( !v99 )
      goto LABEL_23;
    goto LABEL_161;
  }
  n = (size_t)&v411;
  v22 = __xstat(1, filename, &v411);
  v18 = 1LL;
  LOBYTE(src) = v22 != 0;
  if ( v22 )
  {
LABEL_161:
    v100 = __errno_location();
    if ( *v100 != 2 )
    {
      *(_QWORD *)fildes = v100;
      a7 = v14;
      LODWORD(v101) = sub_40DD80(4LL, filename);
      v102 = v101;
      v103 = dcgettext(0LL, "cannot stat %s", 5);
      error(0, **(_DWORD **)fildes, v103, v102);
      return (unsigned int)a7;
    }
    goto LABEL_59;
  }
LABEL_23:
  if ( stat_buf.st_ino != v411.st_ino || stat_buf.st_dev != v411.st_dev )
  {
    if ( *(_DWORD *)(v13 + 4) != 2 )
      goto LABEL_25;
    v151 = 0;
    v152 = 0LL;
  }
  else
  {
    v151 = *(_BYTE *)(v13 + 23);
    if ( v151 )
      goto LABEL_328;
    if ( *(_DWORD *)(v13 + 4) != 2 )
    {
      LOBYTE(old) = v18;
      s2 = (char *)&v412;
      v164 = __lxstat(1, filename, &v412);
      v18 = (unsigned __int8)old;
      if ( v164 )
        goto LABEL_25;
      v386 = &v413;
      v165 = __lxstat(1, v12, &v413);
      v18 = (unsigned __int8)old;
      if ( v165 )
        goto LABEL_25;
      if ( v413.st_ino == v412.st_ino )
        v151 = v413.st_dev == v412.st_dev;
      v153 = (size_t)s2;
      v154 = v386;
      if ( (v413.st_mode & 0xF000) == 40960 && (v412.st_mode & 0xF000) == 40960 && *(_BYTE *)(v13 + 21) )
        goto LABEL_25;
      goto LABEL_247;
    }
    v151 = 1;
    v152 = 1LL;
  }
  v153 = n;
  v154 = v395;
  if ( (stat_buf.st_mode & 0xF000) == 40960 && (v411.st_mode & 0xF000) == 40960 )
  {
    LODWORD(s1) = v152;
    LOBYTE(old) = v18;
    if ( (unsigned __int8)sub_40E2F0(v12, filename, v395, v152, v18, n) )
      goto LABEL_253;
    v18 = (unsigned __int8)old;
    if ( *(_DWORD *)v13 || !(_DWORD)s1 )
      goto LABEL_25;
    v218 = 1;
    LOBYTE(v219) = *(_BYTE *)(v13 + 24) ^ 1;
    goto LABEL_372;
  }
LABEL_247:
  if ( *(_DWORD *)v13 )
  {
    if ( !v151 )
    {
      if ( *(_BYTE *)(v13 + 24)
        || *(_DWORD *)(v13 + 4) == 2
        || (v154->st_mode & 0xF000) != 40960
        || (*(_DWORD *)(v153 + 24) & 0xF000) == 40960 )
      {
        goto LABEL_25;
      }
LABEL_253:
      LODWORD(v155) = sub_40DCA0(1LL, 4LL, filename);
      v34 = v155;
      LODWORD(v156) = sub_40DCA0(0LL, 4LL, v12);
      v36 = "%s and %s are the same file";
      v37 = v156;
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
    v253 = sub_40E2F0(v12, filename, v154, v152, v18, v153);
    v18 = (unsigned __int8)src;
    LOBYTE(v219) = v253 ^ 1;
    v218 = 0;
LABEL_372:
    if ( (_BYTE)v219 )
    {
      LOBYTE(src) = v218;
      goto LABEL_25;
    }
    goto LABEL_253;
  }
  v188 = *(_BYTE *)(v13 + 24);
  if ( (_BYTE)v188 || *(_BYTE *)(v13 + 21) )
  {
    if ( (*(_DWORD *)(v153 + 24) & 0xF000) == 40960 )
      goto LABEL_25;
    if ( !v151 || *(_QWORD *)(v153 + 16) <= 1uLL )
    {
      if ( (v154->st_mode & 0xF000) == 40960 )
        goto LABEL_315;
      goto LABEL_345;
    }
    LOBYTE(s2) = v18;
    s1 = (void *)v153;
    old = (char *)v154;
    v218 = sub_40E2F0(v12, filename, v154, v188, v18, v153);
    v154 = (struct stat *)old;
    v153 = (size_t)s1;
    v18 = (unsigned __int8)s2;
    if ( !v218 )
    {
      LOBYTE(v219) = *(_BYTE *)(v13 + 24) ^ 1;
      goto LABEL_372;
    }
    if ( (*((_DWORD *)old + 6) & 0xF000) == 40960 )
      goto LABEL_314;
  }
  else if ( (v154->st_mode & 0xF000) == 40960 )
  {
    goto LABEL_317;
  }
  if ( (*(_DWORD *)(v153 + 24) & 0xF000) != 40960 )
  {
LABEL_345:
    if ( v154->st_ino != *(_QWORD *)(v153 + 8) || v154->st_dev != *(_QWORD *)v153 )
      goto LABEL_25;
    if ( *(_BYTE *)(v13 + 23) )
      goto LABEL_328;
  }
LABEL_314:
  LOBYTE(v188) = *(_BYTE *)(v13 + 24);
LABEL_315:
  if ( (_BYTE)v188 )
  {
    if ( (stat_buf.st_mode & 0xF000) == 40960 && *(_QWORD *)(v153 + 16) > 1uLL )
    {
      LOBYTE(s2) = v18;
      s1 = (void *)v153;
      old = (char *)v154;
      v272 = canonicalize_file_name(v12);
      v154 = (struct stat *)old;
      v153 = (size_t)s1;
      v18 = (unsigned __int8)s2;
      if ( v272 )
      {
        LOBYTE(old) = (_BYTE)s2;
        src = v272;
        v219 = sub_40E2F0(v272, filename, v154, v273, (unsigned __int8)s2, s1) ^ 1;
        free(src);
        v218 = 0;
        v18 = (unsigned __int8)s2;
        goto LABEL_372;
      }
    }
  }
LABEL_317:
  if ( *(_BYTE *)(v13 + 44) || *(_DWORD *)(v13 + 20) & 0xFF00FF00 && (*(_DWORD *)(v153 + 24) & 0xF000) == 40960 )
  {
    LOBYTE(v219) = *(_QWORD *)v153 == v154->st_dev;
    v218 = 0;
    goto LABEL_372;
  }
  if ( *(_DWORD *)(v13 + 4) != 2 )
    goto LABEL_253;
  if ( (v154->st_mode & 0xF000) == 40960 )
  {
    LOBYTE(s1) = v18;
    old = (char *)v153;
    v307 = __xstat(1, v12, &v413);
    v153 = (size_t)old;
    v18 = (unsigned __int8)s1;
    if ( v307 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v413.st_dev = _mm_load_si128((const __m128i *)v154);
    *(__m128i *)&v413.st_nlink = _mm_load_si128((const __m128i *)&v154->st_nlink);
    *(__m128i *)&v413.st_gid = _mm_load_si128((const __m128i *)&v154->st_gid);
    *(__m128i *)&v413.st_size = _mm_load_si128((const __m128i *)&v154->st_size);
    *(__m128i *)&v413.st_blocks = _mm_load_si128((const __m128i *)&v154->st_blocks);
    *(__m128i *)&v413.st_atim.tv_nsec = _mm_load_si128((const __m128i *)&v154->st_atim.tv_nsec);
    *(__m128i *)&v413.st_mtim.tv_nsec = _mm_load_si128((const __m128i *)&v154->st_mtim.tv_nsec);
    *(__m128i *)&v413.st_ctim.tv_nsec = _mm_load_si128((const __m128i *)&v154->st_ctim.tv_nsec);
    *(__m128i *)&v413.__unused[1] = _mm_load_si128((const __m128i *)&v154->__unused[1]);
  }
  if ( (*(_DWORD *)(v153 + 24) & 0xF000) == 40960 )
  {
    LOBYTE(old) = v18;
    v306 = __xstat(1, filename, &v412);
    v18 = (unsigned __int8)old;
    if ( v306 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v412.st_dev = _mm_load_si128((const __m128i *)v153);
    *(__m128i *)&v412.st_nlink = _mm_load_si128((const __m128i *)(v153 + 16));
    *(__m128i *)&v412.st_gid = _mm_load_si128((const __m128i *)(v153 + 32));
    *(__m128i *)&v412.st_size = _mm_load_si128((const __m128i *)(v153 + 48));
    *(__m128i *)&v412.st_blocks = _mm_load_si128((const __m128i *)(v153 + 64));
    *(__m128i *)&v412.st_atim.tv_nsec = _mm_load_si128((const __m128i *)(v153 + 80));
    *(__m128i *)&v412.st_mtim.tv_nsec = _mm_load_si128((const __m128i *)(v153 + 96));
    *(__m128i *)&v412.st_ctim.tv_nsec = _mm_load_si128((const __m128i *)(v153 + 112));
    *(__m128i *)&v412.__unused[1] = _mm_load_si128((const __m128i *)(v153 + 128));
  }
  if ( v413.st_ino == v412.st_ino && v413.st_dev == v412.st_dev )
  {
    if ( !*(_BYTE *)(v13 + 23) )
      goto LABEL_253;
LABEL_328:
    LOBYTE(src) = 1;
  }
LABEL_25:
  if ( v398 == 0x4000 )
  {
    if ( !*(_BYTE *)(v13 + 24) )
      goto LABEL_30;
    v23 = *(_DWORD *)(v13 + 8);
  }
  else
  {
    if ( *(_BYTE *)(v13 + 45) )
    {
      v147 = 0LL;
      if ( *(_BYTE *)(v13 + 31) )
      {
        v147 = 1LL;
        if ( *(_BYTE *)(v13 + 24) )
          v147 = v411.st_dev != stat_buf.st_dev;
      }
      LOBYTE(old) = v18;
      v148 = sub_40EB60(filename, n, v395, v147);
      v18 = (unsigned __int8)old;
      if ( v148 >= 0 )
      {
        if ( a11 )
          *a11 = 1;
        LODWORD(v150) = sub_4096D0(filename, stat_buf.st_ino, stat_buf.st_dev, v149, v18);
        if ( v150 && !(unsigned __int8)sub_404C10(v150, (__int64)filename, 1u, *(_BYTE *)(v13 + 46), (char)ptr) )
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
        v247 = sub_404AE0(v13, filename, (int *)(n + 24));
        v18 = (unsigned __int8)old;
        if ( !v247 )
          goto LABEL_171;
      }
      goto LABEL_30;
    }
  }
  if ( v23 == 2
    || (v23 == 3
     || v23 == 4
     && *(_BYTE *)(v13 + 47)
     && (LOBYTE(old) = v18, v166 = sub_404890(filename, v411.st_mode), v18 = (unsigned __int8)old, !v166))
    && (LOBYTE(old) = v18, v167 = sub_404AE0(v13, filename, (int *)(n + 24)), v18 = (unsigned __int8)old, !v167) )
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
  v24 = v411.st_mode;
  v25 = (unsigned int)v18 ^ 1;
  v17 = (struct stat *)(v411.st_mode & 0xF000);
  if ( (_DWORD)v17 != 0x4000 )
  {
    if ( v398 == 0x4000 )
    {
      if ( !*(_BYTE *)(v13 + 24) || (v26 = *(_DWORD *)v13) == 0 )
      {
        LODWORD(v254) = sub_40DCA0(1LL, 4LL, v12);
        v34 = v254;
        LODWORD(v255) = sub_40DCA0(0LL, 4LL, filename);
        v36 = "cannot overwrite non-directory %s with directory %s";
        v37 = v255;
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
      v28 = sub_40ABF0(v27, filename, n);
      v25 = (unsigned __int8)old;
      if ( v28 )
      {
        LODWORD(v279) = sub_40DCA0(1LL, 4LL, v12);
        v34 = v279;
        LODWORD(v280) = sub_40DCA0(0LL, 4LL, filename);
        v36 = "will not overwrite just-created %s with %s";
        v37 = v280;
        goto LABEL_56;
      }
      if ( v398 == 0x4000 )
        goto LABEL_38;
      v24 = v411.st_mode;
      v17 = (struct stat *)(v411.st_mode & 0xF000);
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
  if ( v398 != 0x4000 )
  {
LABEL_351:
    if ( *(_BYTE *)(v13 + 24) )
    {
      v26 = *(_DWORD *)v13;
      if ( *(_DWORD *)v13 )
        goto LABEL_353;
    }
    LODWORD(v264) = sub_40DD80(4LL, filename);
    v143 = "cannot overwrite directory %s with non-directory";
    v15 = v264;
LABEL_229:
    v144 = dcgettext(0LL, v143, 5);
LABEL_230:
    a7 = 0;
    error(0, 0, v144, v15);
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
    v24 = v411.st_mode;
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
      LODWORD(v250) = sub_40DE50(0LL, 3LL, filename);
      v34 = v250;
      LODWORD(v251) = sub_40DE50(0LL, 3LL, v12);
      v36 = "cannot move directory onto non-directory: %s -> %s";
      v37 = v251;
      goto LABEL_56;
    }
LABEL_354:
    LOBYTE(n) = v25;
    LODWORD(v202) = sub_40AA00(v12);
    v25 = (unsigned __int8)n;
    v18 = (signed __int64)v202;
    if ( *v202 != 46 )
      goto LABEL_355;
    v29 = 1;
    goto LABEL_434;
  }
  if ( v26 )
  {
LABEL_394:
    LOBYTE(n) = v25;
    LODWORD(v241) = sub_40AA00(v12);
    v25 = (unsigned __int8)n;
    v18 = (signed __int64)v241;
    if ( *v241 != 46 )
    {
LABEL_395:
      if ( (v411.st_mode & 0xF000) == 0x4000 )
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
        LODWORD(v203) = sub_40AA00(filename);
        old = v203;
        v204 = strlen(v203);
        s2 = src;
INVALID_COLON;
        v205 = strlen(src);
INVALID_COLON;
        v25 = (unsigned __int8)n;
        v387 = v205;
        if ( src == (char *)(v204 + v205) )
        {
          LOBYTE(src) = n;
          n = (size_t)s1;
          v206 = memcmp(s1, old, v204);
          v25 = (unsigned __int8)src;
          if ( !v206 )
          {
            v207 = strcmp((const char *)(n + v204), s2);
            v25 = (unsigned __int8)src;
            if ( !v207 )
            {
              LOBYTE(old) = (_BYTE)src;
              v208 = strlen(filename);
              n = v208;
              LODWORD(v209) = sub_4100E0(v387 + v208 + 1, s2);
              v210 = v209;
              src = src;
INVALID_COLON;
              v211 = (char *)mempcpy(v209, filename, n);
              strcpy(v211, src);
              LODWORD(src) = __xstat(1, v210, &v413);
              free((void *)v210);
              v25 = (unsigned __int8)old;
              if ( !(_DWORD)src && stat_buf.st_ino == v413.st_ino && stat_buf.st_dev == v413.st_dev )
              {
                if ( *(_BYTE *)(v13 + 24) )
                  v330 = dcgettext(0LL, "backing up %s might destroy source;  %s not moved", 5);
                else
                  v330 = dcgettext(0LL, "backing up %s might destroy source;  %s not copied", 5);
                LODWORD(v331) = sub_40DCA0(1LL, 4LL, v12);
                v332 = v331;
                LODWORD(v333) = sub_40DCA0(0LL, 4LL, filename);
                v39 = v332;
                v41 = v330;
                v40 = v333;
                goto LABEL_57;
              }
            }
          }
        }
      }
      v212 = *(_DWORD *)v13;
      LOBYTE(src) = v25;
      LODWORD(v213) = sub_40A570(filename, v212, v17, v25, v18);
      v214 = v213;
      old = v213;
      LOBYTE(n) = (_BYTE)src;
      if ( v213 )
      {
        v215 = strlen(v213);
        v216 = alloca(v215 + 9);
        v217 = (char *)memcpy((void *)((unsigned __int64)&v372 & 0xFFFFFFFFFFFFFFF0LL), v214, v215 + 1);
        free(old);
        old = v217;
        v25 = (unsigned __int8)n;
        LOBYTE(src) = 1;
        goto LABEL_60;
      }
      v259 = __errno_location();
      LOBYTE(src) = 1;
      v25 = (unsigned __int8)n;
      v32 = v259;
      if ( *v259 == 2 )
        goto LABEL_60;
      LODWORD(v260) = sub_40DD80(4LL, filename);
      v261 = "cannot backup %s";
      v262 = v260;
LABEL_425:
      a7 = 0;
      v263 = dcgettext(0LL, v261, 5);
      error(0, *v32, v263, v262);
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
  v17 = (struct stat *)(v411.st_mode & 0xF000);
  LOBYTE(v17) = v29 | ((_DWORD)v17 == 0x4000);
  if ( (_BYTE)v17
    || (LOBYTE(src) = *(_BYTE *)(v13 + 21), !(_BYTE)src)
    && (!*(_BYTE *)(v13 + 34) || v411.st_nlink <= 1)
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
      LODWORD(v302) = sub_40DD80(4LL, filename);
      v261 = "cannot remove %s";
      v262 = v302;
      goto LABEL_425;
    }
  }
  LOBYTE(src) = *(_BYTE *)(v13 + 46);
  if ( (_BYTE)src )
  {
    LOBYTE(n) = v25;
    LODWORD(v281) = sub_40DD80(4LL, filename);
    v282 = v281;
    v283 = dcgettext(0LL, "removed %s\n", 5);
    __printf_chk(1LL, v283, v282, v284, v285);
    v25 = (unsigned __int8)n;
    old = 0LL;
    goto LABEL_60;
  }
  if ( !(_BYTE)a8 )
  {
    LOBYTE(src) = *(_BYTE *)(v13 + 42) & (v398 == 0x4000);
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
        if ( v398 != 0x4000 || !*(_BYTE *)(v13 + 42) )
          goto LABEL_149;
LABEL_129:
        v74 = stat_buf.st_dev;
        v75 = stat_buf.st_ino;
        if ( (_BYTE)a8 )
        {
          LODWORD(v76) = sub_4096D0(filename, stat_buf.st_ino, stat_buf.st_dev, v25, v18);
          n = v76;
          goto LABEL_131;
        }
LABEL_232:
        LODWORD(v145) = sub_409690(v75, v74, v74, v25);
        n = v145;
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
        if ( v398 != 0x4000 )
          goto LABEL_66;
        goto LABEL_190;
      }
LABEL_63:
      if ( v398 != 0x4000 )
      {
        sub_404A30((__int64)v12, (__int64)filename, (__int64)old);
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
        v104 = *(_DWORD *)(v13 + 4);
        if ( !(_BYTE)a8 || v104 != 3 )
        {
          n = 0LL;
          if ( v104 != 4 )
            goto LABEL_145;
        }
      }
      LODWORD(v105) = sub_4096D0(filename, stat_buf.st_ino, stat_buf.st_dev, v25, v18);
      n = v105;
      goto LABEL_168;
    }
    v17 = &v411;
    if ( !(_BYTE)v25 )
    {
      if ( __lxstat(1, filename, &v413) )
        goto LABEL_61;
      v17 = &v413;
    }
    if ( (v17->st_mode & 0xF000) != 40960 || !(unsigned __int8)sub_40ABF0(*(_QWORD *)(v13 + 56), filename, v17) )
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
    LODWORD(v33) = sub_40DCA0(1LL, 4LL, filename);
    v34 = v33;
    LODWORD(v35) = sub_40DCA0(0LL, 4LL, v12);
    v36 = "will not copy %s through just-created symlink %s";
    v37 = v35;
    goto LABEL_56;
  }
LABEL_127:
  if ( *(_BYTE *)(v13 + 42) && v398 == 0x4000 )
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
  LODWORD(v146) = sub_409690(stat_buf.st_ino, stat_buf.st_dev, v17, v25);
  n = v146;
LABEL_168:
  if ( !n )
    goto LABEL_145;
  if ( v398 != 0x4000 )
  {
    if ( (unsigned __int8)sub_404C10(n, (__int64)filename, 1u, *(_BYTE *)(v13 + 46), (char)ptr) )
      goto LABEL_171;
    goto LABEL_138;
  }
LABEL_132:
  if ( (unsigned __int8)sub_40E2F0(v12, n, v77, v78, v79, v80) )
  {
    LODWORD(v192) = sub_40DCA0(1LL, 4LL, qword_61D908);
    v15 = v192;
    LODWORD(v193) = sub_40DCA0(0LL, 4LL, qword_61D910);
    v194 = v193;
    v195 = dcgettext(0LL, "cannot copy a directory, %s, into itself, %s", 5);
    error(0, 0, v195, v194, v15);
    *a10 = 1;
LABEL_138:
    if ( !*(_BYTE *)(v13 + 37) )
      goto LABEL_139;
    goto LABEL_243;
  }
  if ( (unsigned __int8)sub_40E2F0(filename, n, v81, v82, v83, v84) )
  {
    LODWORD(v242) = sub_40DD80(4LL, qword_61D910);
    v243 = v242;
    v244 = dcgettext(0LL, "warning: source directory %s specified more than once", 5);
    error(0, 0, v244, v243);
    if ( !*(_BYTE *)(v13 + 24) || !LOBYTE(fildes[0]) )
      goto LABEL_171;
    goto LABEL_288;
  }
  v85 = *(_DWORD *)(v13 + 4);
  if ( v85 != 4 && (v85 != 3 || !(_BYTE)a8) )
  {
    LODWORD(v86) = sub_40DCA0(1LL, 4LL, n);
    v87 = v86;
    LODWORD(v88) = sub_40DCA0(0LL, 4LL, filename);
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
      v197 = dcgettext(0LL, "renamed ", 5);
      __printf_chk(1LL, v197, v198, v199, v200);
      sub_404A30((__int64)v12, (__int64)filename, (__int64)old);
    }
    if ( *(_BYTE *)(v13 + 33) )
      sub_4052E0((__int64)filename, 0LL, 1LL, v13);
    if ( a11 )
      *a11 = 1;
    if ( (_BYTE)a8 )
    {
      a7 = a8;
      sub_40AB60(*(_QWORD *)(v13 + 56), filename, v395);
      return (unsigned int)a7;
    }
    goto LABEL_171;
  }
  v96 = __errno_location();
  v97 = v96;
  v98 = *v96;
  if ( v98 == 22 )
  {
    a7 = 1;
    LODWORD(v224) = sub_40DCA0(1LL, 4LL, qword_61D908);
    v225 = v224;
    LODWORD(v226) = sub_40DCA0(0LL, 4LL, qword_61D910);
    v227 = v226;
    v228 = dcgettext(0LL, "cannot move %s to a subdirectory of itself, %s", 5);
    error(0, 0, v228, v227, v225);
    *a10 = 1;
    return (unsigned int)a7;
  }
  if ( v98 != 18 )
  {
    LODWORD(v172) = sub_40DCA0(1LL, 4LL, filename);
    v159 = v172;
    LODWORD(v173) = sub_40DCA0(0LL, 4LL, v12);
    v161 = "cannot move %s to %s";
    v162 = v173;
    goto LABEL_259;
  }
  if ( v398 == 0x4000 )
  {
    if ( !rmdir(filename) || *v97 == 2 )
      goto LABEL_159;
    goto LABEL_258;
  }
  if ( unlink(filename) && *v97 != 2 )
  {
LABEL_258:
    LODWORD(v158) = sub_40DCA0(1LL, 4LL, filename);
    v159 = v158;
    LODWORD(v160) = sub_40DCA0(0LL, 4LL, v12);
    v161 = "inter-device move failed: %s to %s; unable to remove target";
    v162 = v160;
LABEL_259:
    v163 = dcgettext(0LL, v161, 5);
    error(0, *v97, v163, v162, v159);
    sub_409640(stat_buf.st_ino, stat_buf.st_dev);
    return (unsigned int)a7;
  }
  LOBYTE(src) = *(_BYTE *)(v13 + 46) & (v398 != 0x4000);
  if ( !(_BYTE)src )
  {
LABEL_159:
    fildes[0] = 1;
    LOBYTE(src) = 1;
    goto LABEL_68;
  }
  v220 = dcgettext(0LL, "copied ", 5);
  __printf_chk(1LL, v220, v221, v222, v223);
  sub_404A30((__int64)v12, (__int64)filename, (__int64)old);
  fildes[0] = 1;
LABEL_68:
  v42 = v397 & 0xFFF;
  if ( *(_BYTE *)(v13 + 43) )
    v42 = *(_DWORD *)(v13 + 16) & 0xFFF;
  if ( *(_BYTE *)(v13 + 29) )
  {
    v43 = filename;
    if ( !(unsigned __int8)sub_405210((__int64)v12, (__int64)filename, v397, fildes[0], v13) )
      return (unsigned int)a7;
    LODWORD(s1) = v42 & 0x3F;
    if ( v398 != 0x4000 )
      goto LABEL_73;
LABEL_181:
    v107 = stat_buf.st_ino;
    v108 = stat_buf.st_dev;
    v109 = *(_QWORD *)v393;
    if ( *(_QWORD *)v393 )
    {
      while ( *(_QWORD *)(v109 + 8) != stat_buf.st_ino || *(_QWORD *)(v109 + 16) != stat_buf.st_dev )
      {
        v109 = *(_QWORD *)v109;
        if ( !v109 )
          goto LABEL_203;
      }
      LODWORD(v110) = sub_40DD80(4LL, v12);
      v111 = "cannot copy cyclic symbolic link %s";
      v15 = v110;
      goto LABEL_187;
    }
LABEL_203:
    v118 = (unsigned __int64)&v369 & 0xFFFFFFFFFFFFFFF0LL;
    v46 = (_BYTE)src == 0;
    v387 = v118;
    *(_QWORD *)v118 = *(_QWORD *)v393;
    *(_QWORD *)(v118 + 8) = v107;
    *(_QWORD *)(v118 + 16) = v108;
    if ( v46 && (v411.st_mode & 0xF000) == 0x4000 )
    {
      if ( *(_QWORD *)(v13 + 32) & 0xFF000000FF00LL
        && !(unsigned __int8)sub_4052E0((__int64)filename, *(_BYTE *)(v13 + 37), 0LL, v13)
        && *(_BYTE *)(v13 + 38) )
      {
        goto LABEL_200;
      }
      v385 = 0;
      LODWORD(s1) = 0;
    }
    else
    {
      if ( mkdir(filename, v42 & ~(_DWORD)s1) )
      {
        LODWORD(v201) = sub_40DD80(4LL, filename);
        v115 = "cannot create directory %s";
        v15 = v201;
        goto LABEL_199;
      }
      if ( __lxstat(1, filename, &v411) )
      {
        LODWORD(v245) = sub_40DD80(4LL, filename);
        v115 = "cannot stat %s";
        v15 = v245;
        goto LABEL_199;
      }
      v121 = v411.st_mode;
      v385 = 0;
      if ( (v411.st_mode & 0x1C0) != 448 )
      {
        v122 = chmod(filename, v411.st_mode | 0x1C0);
        v378 = v121;
        v385 = 1;
        if ( v122 )
        {
          LODWORD(v271) = sub_40DD80(4LL, filename);
          v115 = "setting permissions for %s";
          v15 = v271;
          goto LABEL_199;
        }
      }
      if ( !*a9 )
      {
        sub_4096D0(filename, v411.st_ino, v411.st_dev, v119, v120);
        *a9 = 1;
      }
      if ( *(_BYTE *)(v13 + 46) )
      {
        if ( *(_BYTE *)(v13 + 24) )
        {
          LODWORD(v123) = sub_40DD80(4LL, filename);
          v124 = v123;
          v125 = dcgettext(0LL, "created directory %s\n", 5);
          __printf_chk(1LL, v125, v124, v126, v127);
        }
        else
        {
          sub_404A30((__int64)v12, (__int64)filename, 0LL);
        }
      }
    }
    LOBYTE(ptr) = *(_BYTE *)(v13 + 28) & (v391 != 0);
    if ( !(_BYTE)ptr || (LOBYTE(v393[0]) = 0, v52 = 0, *(_QWORD *)v391 == stat_buf.st_dev) )
    {
      v128 = _mm_loadu_si128((const __m128i *)(v13 + 16));
      v129 = _mm_loadu_si128((const __m128i *)(v13 + 32));
      v130 = _mm_loadu_si128((const __m128i *)(v13 + 48));
      v131 = *(_QWORD *)(v13 + 64);
      *(__m128i *)&v413.st_dev = _mm_loadu_si128((const __m128i *)v13);
      *(__m128i *)&v413.st_nlink = v128;
      *(__m128i *)&v413.st_gid = v129;
      *(__m128i *)&v413.st_size = v130;
      v413.st_blocks = v131;
      LODWORD(v132) = sub_40E7F0(v12, 2LL);
      s = v132;
      if ( v132 )
      {
        if ( *(_DWORD *)(v13 + 4) == 3 )
          HIDWORD(v413.st_dev) = 2;
        if ( *s )
        {
          LOBYTE(v380) = a7;
          v133 = s;
          s2 = (char *)&v412;
          v134 = 0;
          v386 = &v413;
          v379 = v13;
          LOBYTE(ptr) = 1;
          v391 = (__int64)&length;
          *(_QWORD *)v393 = v12;
          v382 = a8;
          do
          {
            LODWORD(v135) = sub_40AEB0(*(_QWORD *)v393, v133, 0LL);
            v136 = v135;
            LODWORD(v137) = sub_40AEB0(filename, v133, 0LL);
            v138 = v137;
            LOBYTE(v412.st_dev) = *a9;
            v139 = sub_405650((_DWORD)v136, (_DWORD)v137, (unsigned int)fildes[0], (__int64)v395, v387);
            LOBYTE(ptr) = v139 & (unsigned __int8)ptr;
            *a10 |= length;
            free(v138);
            free(v136);
            if ( (_BYTE)length )
              break;
            v134 |= LOBYTE(v412.st_dev);
            v133 += strlen(v133) + 1;
          }
          while ( *v133 );
          v140 = v134;
          v12 = *(const char **)v393;
          a7 = (unsigned __int8)v380;
          v13 = v379;
          v15 = v382;
        }
        else
        {
          v140 = 0;
          LOBYTE(ptr) = 1;
        }
        free(s);
        *a9 = v140;
      }
      else
      {
        LODWORD(v268) = sub_40DD80(4LL, v12);
        *(_QWORD *)fildes = v268;
        v269 = dcgettext(0LL, "cannot access %s", 5);
        v270 = __errno_location();
        error(0, *v270, v269, *(_QWORD *)fildes);
        LOBYTE(ptr) = 0;
      }
      LOBYTE(v393[0]) = 0;
      v52 = 0;
    }
    goto LABEL_82;
  }
  if ( v398 == 0x4000 )
  {
    if ( !(unsigned __int8)sub_405210((__int64)v12, (__int64)filename, v397, fildes[0], v13) )
      return (unsigned int)a7;
    LODWORD(s1) = v42 & 0x12;
    goto LABEL_181;
  }
  v43 = filename;
  v44 = sub_405210((__int64)v12, (__int64)filename, v397, fildes[0], v13);
  LODWORD(s1) = 0;
  if ( !v44 )
    return (unsigned int)a7;
LABEL_73:
  LOBYTE(v393[0]) = *(_BYTE *)(v13 + 44);
  if ( LOBYTE(v393[0]) )
  {
    if ( *v12 == 47 )
    {
LABEL_80:
      if ( sub_409C90(v12, 4294967196LL, filename, *(_BYTE *)(v13 + 22)) < 0 )
      {
        LODWORD(v229) = sub_40DCA0(1LL, 4LL, v12);
        v15 = v229;
        LODWORD(v230) = sub_40DCA0(0LL, 4LL, filename);
        v231 = v230;
        v232 = dcgettext(0LL, "cannot create symbolic link %s to %s", 5);
        v233 = __errno_location();
        error(0, *v233, v232, v231, v15);
        goto LABEL_200;
      }
      v385 = 0;
      v52 = 0;
      LOBYTE(ptr) = v393[0];
      goto LABEL_82;
    }
    LODWORD(v47) = sub_40A920(filename, v43);
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
      || __xstat(1, ".", &v412)
      || __xstat(1, (const char *)v51, &v413)
      || v412.st_ino == v413.st_ino && v412.st_dev == v413.st_dev )
    {
      free(v51);
      goto LABEL_80;
    }
    free(v51);
    LODWORD(v196) = sub_40DE50(0LL, 3LL, filename);
    v111 = "%s: can make relative symbolic links only in current directory";
    v15 = v196;
LABEL_187:
    v112 = dcgettext(0LL, v111, 5);
    error(0, 0, v112, v15);
    goto LABEL_200;
  }
  v385 = *(_BYTE *)(v13 + 23);
  if ( v385 )
  {
    v157 = sub_404C10((__int64)v12, (__int64)filename, *(_BYTE *)(v13 + 22), 0, (char)ptr);
    v52 = 0;
    v385 = 0;
    LOBYTE(ptr) = v157;
    if ( !v157 )
      goto LABEL_200;
LABEL_82:
    v53 = v398 != 0x4000;
    if ( !(_BYTE)src && *(_BYTE *)(v13 + 20) != 1 && v53 )
    {
      if ( *(_QWORD *)(v13 + 32) & 0xFF000000FF00LL )
      {
        v54 = *(_BYTE *)(v13 + 37);
        LOBYTE(fildes[0]) = v52;
        v55 = sub_4052E0((__int64)filename, v54, 0LL, v13);
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
        v56 = __lxstat(1, filename, &v413);
        v52 = fildes[0];
        if ( !v56 )
        {
          sub_40AB60(*(_QWORD *)(v13 + 56), filename, &v413);
          v52 = fildes[0];
        }
      }
    }
    if ( *(_BYTE *)(v13 + 23) && v53 || v52 )
      goto LABEL_178;
    if ( *(_BYTE *)(v13 + 31) )
    {
      v413.st_dev = stat_buf.st_atim.tv_sec;
      v413.st_ino = stat_buf.st_atim.tv_nsec;
      v413.st_nlink = stat_buf.st_mtim.tv_sec;
      *(_QWORD *)&v413.st_mode = stat_buf.st_mtim.tv_nsec;
      if ( !LOBYTE(v393[0]) )
      {
        if ( !(unsigned int)sub_40F8A0(filename) )
        {
LABEL_101:
          if ( !*(_BYTE *)(v13 + 29) || !(_BYTE)src && stat_buf.st_uid == v411.st_uid && stat_buf.st_gid == v411.st_gid )
            goto LABEL_108;
          v61 = sub_405430(v13, filename, -1, (__int64)v395, (char)src, (__int64)&v411);
          if ( v61 != -1 )
          {
            v62 = v397;
            BYTE1(v62) &= 0xF1u;
            if ( v61 )
              v62 = v397;
            v397 = v62;
LABEL_108:
            if ( !(*(_QWORD *)(v13 + 24) & 0xFF0000000000FFLL) )
            {
              if ( *(_BYTE *)(v13 + 43) )
              {
                v239 = *(_DWORD *)(v13 + 16);
              }
              else
              {
                if ( !*(_BYTE *)(v13 + 32) )
                {
                  if ( (_DWORD)s1 && (LODWORD(s1) = ~(unsigned int)sub_405620() & (unsigned int)s1, (_DWORD)s1) )
                  {
                    if ( v385 != 1 )
                    {
                      if ( (_BYTE)src && __lxstat(1, filename, &v411) )
                      {
                        v19 = filename;
                        goto LABEL_121;
                      }
                      v378 = v411.st_mode;
                      if ( !(~v411.st_mode & (unsigned int)s1) )
LABEL_178:
                        return (unsigned __int8)ptr;
                    }
                  }
                  else if ( !v385 )
                  {
                    goto LABEL_178;
                  }
                  if ( !chmod(filename, (unsigned int)s1 | v378) )
                    goto LABEL_178;
                  LODWORD(v63) = sub_40DD80(4LL, filename);
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
                v239 = ~(unsigned __int16)sub_405620() & 0x1FF;
              }
              v46 = sub_409E20(filename, 0xFFFFFFFFLL, v239) == 0;
              v240 = (unsigned __int8)ptr;
              if ( !v46 )
                v240 = a7;
              return (unsigned int)v240;
            }
            if ( !sub_409D90(v12, 0xFFFFFFFFLL, filename, 0xFFFFFFFFLL, v397) )
              goto LABEL_178;
            goto LABEL_115;
          }
LABEL_58:
          return 0;
        }
        goto LABEL_99;
      }
      if ( (unsigned int)sub_40F8B0(filename) && *__errno_location() != 38 )
      {
LABEL_99:
        LODWORD(v57) = sub_40DD80(4LL, filename);
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
    if ( LOBYTE(v393[0]) )
      goto LABEL_178;
    goto LABEL_101;
  }
  if ( v398 != 0x8000 && !(*(_BYTE *)(v13 + 20) & (v398 != 40960)) )
  {
    LOBYTE(fildes[0]) = 0;
    if ( v398 == 4096 )
    {
      v413.st_dev = 0LL;
      v248 = v397 & ~(_DWORD)s1;
      v249 = __xmknod(0, filename, v397 & ~(_DWORD)s1, &v413.st_dev);
      v52 = fildes[0];
      if ( !v249 || (v274 = mkfifo(filename, v248 & 0xFFFFEFFF), v52 = fildes[0], !v274) )
      {
        LOBYTE(v393[0]) = v52;
        v385 = v52;
        LOBYTE(ptr) = 1;
        goto LABEL_82;
      }
      LODWORD(v275) = sub_40DD80(4LL, filename);
      v115 = "cannot create fifo %s";
      v15 = v275;
      goto LABEL_199;
    }
    LOBYTE(ptr) = v398 == 49152 || (v397 & 0xB000) == 0x2000;
    if ( (_BYTE)ptr )
    {
      v413.st_dev = stat_buf.st_rdev;
      v113 = __xmknod(0, filename, v397 & ~(_DWORD)s1, &v413.st_dev);
      v52 = fildes[0];
      LOBYTE(v393[0]) = fildes[0];
      v385 = fildes[0];
      if ( !v113 )
        goto LABEL_82;
      LODWORD(v114) = sub_40DD80(4LL, filename);
      v115 = "cannot create special file %s";
      v15 = v114;
LABEL_199:
      v116 = dcgettext(0LL, v115, 5);
      v117 = __errno_location();
      error(0, *v117, v116, v15);
      goto LABEL_200;
    }
    if ( v398 != 40960 )
    {
      LODWORD(v252) = sub_40DD80(4LL, v12);
      v111 = "%s has unknown file type";
      v15 = v252;
      goto LABEL_187;
    }
    v234 = sub_409E80((char *)v12);
    v235 = (const char *)v234;
    if ( !v234 )
    {
      LODWORD(v301) = sub_40DD80(4LL, v12);
      v115 = "cannot read symbolic link %s";
      v15 = v301;
      goto LABEL_199;
    }
    if ( sub_409C90(v234, 4294967196LL, filename, *(_BYTE *)(v13 + 22)) < 0 )
    {
      fildes[0] = *__errno_location();
      if ( fildes[0] )
      {
        if ( *(_BYTE *)(v13 + 45) == 1 && !(_BYTE)src && (v411.st_mode & 0xF000) == 40960 )
        {
          v342 = -1LL;
          v343 = v235;
          do
          {
            if ( !v342 )
              break;
            v46 = *v343++ == (_BYTE)src;
            --v342;
          }
          while ( !v46 );
          if ( v411.st_size == ~v342 - 1 )
          {
            v344 = (void *)sub_409E80(filename);
            if ( v344 )
            {
              ptr = v344;
              if ( !strcmp((const char *)v344, v235) )
              {
                free(ptr);
                goto LABEL_380;
              }
              free(ptr);
            }
          }
        }
        free((void *)v235);
        LODWORD(v276) = sub_40DD80(4LL, filename);
        v277 = v276;
        v278 = dcgettext(0LL, "cannot create symbolic link %s", 5);
        error(0, fildes[0], v278, v277);
        goto LABEL_200;
      }
    }
LABEL_380:
    free((void *)v235);
    v385 = *(_BYTE *)(v13 + 37);
    if ( !v385 )
    {
      v52 = *(_BYTE *)(v13 + 29);
      if ( v52 )
      {
        LOBYTE(fildes[0]) = *(_BYTE *)(v13 + 29);
        if ( lchown(filename, stat_buf.st_uid, stat_buf.st_gid) )
        {
          LOBYTE(v393[0]) = sub_405400(v13);
          if ( LOBYTE(v393[0]) )
          {
            v52 = 0;
            LOBYTE(ptr) = v393[0];
          }
          else
          {
            v340 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
            v341 = __errno_location();
            error(0, *v341, v340, filename);
            v385 = *(_BYTE *)(v13 + 36);
            if ( v385 )
              goto LABEL_200;
            LOBYTE(v393[0]) = fildes[0];
            LOBYTE(ptr) = fildes[0];
            v52 = 0;
          }
        }
        else
        {
          LOBYTE(v393[0]) = fildes[0];
          LOBYTE(ptr) = fildes[0];
          v52 = 0;
        }
      }
      else
      {
        v385 = 0;
        LOBYTE(v393[0]) = 1;
        LOBYTE(ptr) = 1;
      }
      goto LABEL_82;
    }
LABEL_243:
    sub_4049F0();
    goto LABEL_244;
  }
  v174 = *(_DWORD *)(v13 + 4) == 2;
  LODWORD(v387) = stat_buf.st_mode;
  LOBYTE(s2) = *(_BYTE *)(v13 + 35);
  fildes[0] = sub_40AB10((char)v12);
  if ( fildes[0] < 0 )
  {
    LODWORD(v246) = sub_40DD80(4LL, v12);
    v115 = "cannot open %s for reading";
    v15 = v246;
    goto LABEL_199;
  }
  if ( __fxstat(1, fildes[0], &v412) )
  {
    LODWORD(v265) = sub_40DD80(4LL, v12);
    ptr = v265;
    v266 = dcgettext(0LL, "cannot fstat %s", 5);
    v267 = __errno_location();
    v184 = ptr;
    v186 = v266;
    v185 = *v267;
    goto LABEL_306;
  }
  if ( stat_buf.st_ino != v412.st_ino || stat_buf.st_dev != v412.st_dev )
  {
    LODWORD(v236) = sub_40DD80(4LL, v12);
    v237 = v236;
    v238 = dcgettext(0LL, "skipping file %s, as it was replaced while being copied", 5);
    v184 = v237;
    v185 = 0;
    v186 = v238;
    goto LABEL_306;
  }
  v375 = v42 & 0x1FF;
  if ( (_BYTE)src )
    goto LABEL_444;
  v175 = filename;
  v176 = *(_BYTE *)(v13 + 35) < 1u ? 1 : 513;
  v177 = sub_40AB10((char)filename);
  v393[0] = v177;
  if ( *(_QWORD *)(v13 + 32) & 0xFF000000FF00LL )
  {
    if ( v177 < 0 )
    {
LABEL_298:
      v178 = __errno_location();
      v179 = v178;
      if ( !*(_BYTE *)(v13 + 22) )
      {
        v181 = *v178;
        if ( *v178 != 2 || *(_BYTE *)(v13 + 24) )
        {
          LOBYTE(src) = 0;
          goto LABEL_305;
        }
        v377 = 0;
        goto LABEL_303;
      }
      if ( unlink(filename) )
      {
        LODWORD(v356) = sub_40DD80(4LL, filename);
        ptr = v356;
        v357 = dcgettext(0LL, "cannot remove %s", 5);
        v184 = ptr;
        v185 = *v179;
        v186 = v357;
        goto LABEL_306;
      }
      if ( *(_BYTE *)(v13 + 46) )
      {
        LODWORD(v347) = sub_40DD80(4LL, filename);
        v348 = v347;
        v349 = dcgettext(0LL, "removed %s\n", 5);
        __printf_chk(1LL, v349, v348, v350, v351);
      }
      LOBYTE(src) = *(_BYTE *)(v13 + 33);
      v377 = (signed int)s1;
      if ( !(_BYTE)src )
      {
LABEL_303:
        LODWORD(ptr) = v375 & ~v377;
        v393[0] = sub_40AB10((char)filename);
        v180 = __errno_location();
        v181 = *v180;
        v391 = (__int64)v180;
        LOBYTE(v386) = ((unsigned int)v393[0] >> 31) & (v181 == 17);
        if ( (_BYTE)v386 )
        {
          v181 = 17;
          LOBYTE(src) = *(_BYTE *)(v13 + 24);
          if ( (_BYTE)src )
            goto LABEL_305;
          if ( !__lxstat(1, filename, &v413) && (v413.st_mode & 0xF000) == 40960 )
          {
            if ( !*(_BYTE *)(v13 + 48) )
            {
              LOBYTE(v393[0]) = 0;
              LODWORD(v366) = sub_40DD80(4LL, filename);
              v367 = v366;
              v368 = dcgettext(0LL, "not writing through dangling symlink %s", 5);
              error(0, 0, v368, v367);
              ptr = 0LL;
              v187 = v393[0];
              LOBYTE(src) = (_BYTE)v386;
              goto LABEL_307;
            }
            v393[0] = sub_40AB10((char)filename);
            v181 = *(_DWORD *)v391;
          }
        }
        LOBYTE(src) = ((unsigned int)v393[0] >> 31) & (v181 == 21);
        if ( (_BYTE)src )
        {
          v181 = 21;
          if ( *filename )
            v181 = (filename[strlen(filename) - 1] != 47) + 20;
          goto LABEL_305;
        }
        LOBYTE(src) = 1;
        if ( v393[0] < 0 )
        {
LABEL_305:
          LODWORD(v182) = sub_40DD80(4LL, filename);
          ptr = v182;
          v183 = dcgettext(0LL, "cannot create regular file %s", 5);
          v184 = ptr;
          v185 = v181;
          v186 = v183;
LABEL_306:
          error(0, v185, v186, v184);
          v187 = 0;
          ptr = 0LL;
          goto LABEL_307;
        }
        goto LABEL_461;
      }
      v187 = sub_405210((__int64)v12, (__int64)filename, (unsigned int)v375, 1u, v13);
      if ( !v187 )
      {
        ptr = 0LL;
        goto LABEL_307;
      }
LABEL_444:
      v377 = (signed int)s1;
      goto LABEL_303;
    }
    v296 = sub_4052E0((__int64)v175, *(_BYTE *)(v13 + 37), 0LL, v13);
    if ( !v296 )
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
  else if ( v393[0] < 0 )
  {
    goto LABEL_298;
  }
  v377 = 0;
LABEL_461:
  v386 = &v413;
  LODWORD(v391) = __fxstat(1, v393[0], &v413);
  if ( (_DWORD)v391 )
  {
    LODWORD(v308) = sub_40DD80(4LL, filename);
    ptr = v308;
    v309 = dcgettext(0LL, "cannot fstat %s", 5);
    v310 = __errno_location();
    error(0, *v310, v309, ptr);
    v296 = 0;
    ptr = 0LL;
    goto LABEL_493;
  }
  if ( !(_BYTE)s2 )
    goto LABEL_626;
  if ( !*(_DWORD *)(v13 + 52) )
    goto LABEL_464;
  if ( !ioctl(v393[0], 0x40049409uLL, (unsigned int)fildes[0]) )
  {
LABEL_626:
    ptr = 0LL;
    goto LABEL_480;
  }
  if ( *(_DWORD *)(v13 + 52) == 2 )
  {
    LODWORD(v336) = sub_40DCA0(1LL, 4LL, v12);
    v391 = v336;
    LODWORD(v337) = sub_40DCA0(0LL, 4LL, filename);
    v338 = v337;
    ptr = dcgettext(0LL, "failed to clone %s from %s", 5);
    v339 = __errno_location();
    error(0, *v339, (const char *)ptr, v338, v391);
    v296 = 0;
    ptr = 0LL;
    goto LABEL_493;
  }
LABEL_464:
  v286 = getpagesize();
  v379 = v413.st_blksize;
  s = (char *)v413.st_blksize;
  if ( (unsigned __int64)(v413.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
  {
    s = (char *)0x20000;
    v287 = 512LL;
    if ( (unsigned __int64)(v379 - 1) <= 0x1FFFFFFFFFFFFFFFLL )
      v287 = v379;
    v379 = v287;
  }
  j__posix_fadvise(fildes[0], 0LL, 0LL, 2);
  if ( (v412.st_mode & 0xF000) == 0x8000 )
  {
    *(_QWORD *)&v288 = v412.st_size;
    *((_QWORD *)&v288 + 1) = (unsigned __int128)v412.st_size >> 64;
    LODWORD(v391) = v412.st_blocks < (signed __int64)(v288 / 512);
  }
  ptr = (void *)(v286 - 1);
  if ( (v413.st_mode & 0xF000) != 0x8000 )
    goto LABEL_471;
  v334 = *(_DWORD *)(v13 + 12);
  if ( v334 == 3 )
  {
    LODWORD(v345) = sub_4100E0(&s[v286], 0LL);
    ptr = v345;
    v293 = ((unsigned __int64)v345 + v286 - 1) % v286;
    v376 = (char *)v345 + v286 - v293 - 1;
    if ( !(_DWORD)v391 )
    {
      v294 = *(_DWORD *)(v13 + 12) == 3;
      v391 = (__int64)&length;
      goto LABEL_478;
    }
  }
  else
  {
    if ( v334 != 2 || !(v391 & 1) )
    {
LABEL_471:
      v289 = v412.st_blksize;
      LODWORD(v380) = v412.st_mode & 0xF000;
      ptr = (void *)(0x7FFFFFFFFFFFFFFFLL - v286);
      if ( (unsigned __int64)(v412.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
        v289 = 0x20000LL;
      LODWORD(v290) = sub_40A640(v289, s, 0x7FFFFFFFFFFFFFFFLL - v286);
      if ( (_DWORD)v380 == 0x8000 && (unsigned __int64)s > v412.st_size )
        s = (char *)(v412.st_size + 1);
      v291 = &s[v290 - 1] - (unsigned __int64)&s[v290 - 1] % v290;
      s = v291;
      if ( !v291 || ptr < v291 )
        s = (char *)v290;
      LODWORD(v292) = sub_4100E0(&s[v286], v291);
      ptr = v292;
      v293 = ((unsigned __int64)v292 + v286 - 1) % v286;
      v376 = (char *)v292 + v286 - v293 - 1;
      if ( !(_DWORD)v391 )
      {
        v46 = *(_DWORD *)(v13 + 12) == 3;
        v379 = 0LL;
        v391 = (__int64)&length;
        v294 = v46;
LABEL_478:
        v370 = v293;
        if ( !(unsigned __int8)sub_404DE0(
                                 v376,
                                 (size_t)s,
                                 v11,
                                 fildes[0],
                                 v393[0],
                                 v379,
                                 v294,
                                 (__int64)v12,
                                 (__int64)filename,
                                 0xFFFFFFFFFFFFFFFFLL,
                                 (_QWORD *)v391,
                                 &v402) )
          goto LABEL_516;
        if ( !(_BYTE)v402 || ftruncate(v393[0], length) >= 0 )
          goto LABEL_480;
        goto LABEL_605;
      }
      v383 = 0;
      v382 = 1;
      goto LABEL_532;
    }
    LODWORD(v335) = sub_4100E0(&s[v286], 0LL);
    ptr = v335;
    v376 = (char *)v335 + v286 - ((unsigned __int64)v335 + v286 - 1) % v286 - 1;
  }
  v382 = *(_DWORD *)(v13 + 12);
  v383 = (char)s2;
LABEL_532:
  v312 = 0LL;
  v391 = (__int64)&length;
  v371 = v412.st_size;
  sub_4097A0((unsigned int)fildes[0], &length);
  v374 = a8;
  v313 = 0LL;
  v373 = v13;
  v314 = (char *)v371;
  v384 = a7;
  v315 = (char)s2;
  v380 = v12;
  v316 = 0LL;
  do
  {
    s2 = v313;
    v317 = sub_4097D0(v391);
    v313 = s2;
    if ( !v317 )
    {
      LOBYTE(s2) = v315;
      v12 = v380;
      a7 = v384;
      v13 = v373;
      v15 = v374;
      if ( v408 )
        goto LABEL_558;
      if ( !v407 )
      {
        LODWORD(v365) = sub_40DE50(0LL, 3LL, v380);
        v326 = "%s: failed to get extents info";
        v391 = v365;
        goto LABEL_566;
      }
      v363 = 0LL;
      v294 = *(_DWORD *)(v373 + 12) == 3;
      if ( v383 )
        v363 = v379;
      v379 = v363;
      goto LABEL_478;
    }
    if ( !v406 )
      goto LABEL_556;
    v318 = v316;
    v319 = v312;
    v320 = 0;
    v321 = 0LL;
    while ( 1 )
    {
      v323 = (char *)v409 + 24 * v321;
      v312 = *(_QWORD *)v323;
      v316 = *((_QWORD *)v323 + 1);
      if ( (signed __int64)v314 < (signed __int64)(*(_QWORD *)v323 + v316) )
      {
        if ( v312 > (signed __int64)v314 )
          v312 = (__off_t)v314;
        v316 = (size_t)&v314[-v312];
      }
      v315 = 0;
      if ( v312 - v319 != v318 )
      {
        s2 = (char *)(v312 - v319 - v318);
        if ( lseek(fildes[0], v312, 0) < 0 )
        {
          v12 = v380;
          a7 = v384;
          v13 = v373;
          v15 = v374;
          LODWORD(v352) = sub_40DD80(4LL, v380);
          v353 = "cannot lseek %s";
          v391 = v352;
        }
        else
        {
          if ( v382 != 1 )
          {
            v315 = sub_404D20(v393[0], (__int64)filename, v382 == 3, (__off_t)s2);
            if ( !v315 )
            {
LABEL_551:
              a7 = v384;
              v12 = v380;
              v13 = v373;
              v15 = v374;
LABEL_552:
              free(v409);
              goto LABEL_516;
            }
            goto LABEL_536;
          }
          if ( (unsigned __int8)sub_4048E0(v393[0], (size_t)s2) )
          {
            v322 = 0LL;
            goto LABEL_538;
          }
          a7 = v384;
          v12 = v380;
          v13 = v373;
          v15 = v374;
          LODWORD(v364) = sub_40DE50(0LL, 3LL, filename);
          v353 = "%s: write failed";
          v391 = v364;
        }
        v354 = dcgettext(0LL, v353, 5);
        v355 = __errno_location();
        error(0, *v355, v354, v391);
        goto LABEL_552;
      }
LABEL_536:
      v322 = 0LL;
      if ( v382 == 3 )
        v322 = v379;
LABEL_538:
      if ( !(unsigned __int8)sub_404DE0(
                               v376,
                               (size_t)s,
                               v11,
                               fildes[0],
                               v393[0],
                               v322,
                               1,
                               (__int64)v380,
                               (__int64)filename,
                               v316,
                               &v402,
                               &v401) )
        goto LABEL_551;
      v313 = (char *)(v312 + v402);
      if ( v402 )
        v315 = v401;
      if ( v314 == v313 )
        break;
      v319 = v312;
      v318 = v316;
      v321 = ++v320;
      if ( v320 >= (unsigned __int64)v406 )
        goto LABEL_556;
    }
    v408 = 1;
LABEL_556:
    s2 = v313;
    free(v409);
    v409 = 0LL;
    v406 = 0LL;
    v313 = s2;
  }
  while ( !v408 );
  LOBYTE(s2) = v315;
  v12 = v380;
  a7 = v384;
  v13 = v373;
  v15 = v374;
LABEL_558:
  v324 = v371 > (signed __int64)v313;
  if ( v371 <= (signed __int64)v313 && !(_BYTE)s2 )
    goto LABEL_480;
  if ( v382 == 1 )
  {
    if ( (unsigned __int8)sub_4048E0(v393[0], v371 - (_QWORD)v313) )
      goto LABEL_480;
    goto LABEL_605;
  }
  v391 = (__int64)v313;
  if ( ftruncate(v393[0], v371) )
  {
LABEL_605:
    LODWORD(v346) = sub_40DD80(4LL, filename);
    v326 = "failed to extend %s";
    v391 = v346;
LABEL_566:
    v327 = dcgettext(0LL, v326, 5);
    v328 = __errno_location();
    error(0, *v328, v327, v391);
    goto LABEL_516;
  }
  if ( v382 == 3 && v324 && (signed int)sub_404990(v393[0], v391, v371 - v391) < 0 )
  {
    LODWORD(v325) = sub_40DD80(4LL, filename);
    v326 = "error deallocating %s";
    v391 = v325;
    goto LABEL_566;
  }
LABEL_480:
  if ( !*(_BYTE *)(v13 + 31)
    || (length = stat_buf.st_atim.tv_sec,
        v404 = stat_buf.st_atim.tv_nsec,
        v405 = stat_buf.st_mtim.tv_sec,
        v406 = stat_buf.st_mtim.tv_nsec,
        !(unsigned int)sub_40F460(v393[0], filename))
    || (LODWORD(v303) = sub_40DD80(4LL, filename),
        v391 = v303,
        v304 = dcgettext(0LL, "preserving times for %s", 5),
        v305 = __errno_location(),
        error(0, *v305, v304, v391),
        !*(_BYTE *)(v13 + 36)) )
  {
    if ( *(_BYTE *)(v13 + 29) && (stat_buf.st_uid != v413.st_uid || stat_buf.st_gid != v413.st_gid) )
    {
      v295 = sub_405430(v13, filename, v393[0], (__int64)v395, (char)src, (__int64)v386);
      if ( v295 == -1 )
        goto LABEL_516;
      if ( !v295 )
        LODWORD(v387) = v387 & 0xFFFFF1FF;
    }
    if ( *(_BYTE *)(v13 + 39) && !(v413.st_mode & 0x80) && geteuid() && !sub_4049D0(v393[0], filename, 0x180u) )
      sub_4049D0(v393[0], filename, v375 & ~v377);
    if ( !(*(_QWORD *)(v13 + 24) & 0xFF0000000000FFLL) )
    {
      if ( *(_BYTE *)(v13 + 43) )
      {
        v329 = *(_DWORD *)(v13 + 16);
      }
      else
      {
        if ( !*(_BYTE *)(v13 + 32) )
        {
          v296 = 1;
          if ( !v377 )
            goto LABEL_493;
          LOBYTE(v391) = 1;
          v358 = sub_405620();
          v296 = v391;
          if ( !(~v358 & v377) )
            goto LABEL_493;
          v359 = sub_4049D0(v393[0], filename, v375);
          v296 = v391;
          if ( !v359 )
            goto LABEL_493;
          LODWORD(v360) = sub_40DD80(4LL, filename);
          v391 = v360;
          v361 = dcgettext(0LL, "preserving permissions for %s", 5);
          v362 = __errno_location();
          error(0, *v362, v361, v391);
          goto LABEL_526;
        }
        v329 = ~(unsigned __int16)sub_405620() & 0x1B6;
      }
      v296 = sub_409E20(filename, (unsigned int)v393[0], v329) == 0;
      goto LABEL_493;
    }
    v311 = sub_409D90(v12, (unsigned int)fildes[0], filename, (unsigned int)v393[0], (unsigned int)v387);
    v296 = 1;
    if ( !v311 )
      goto LABEL_493;
LABEL_526:
    v296 = *(_BYTE *)(v13 + 36) ^ 1;
    goto LABEL_493;
  }
LABEL_516:
  v296 = 0;
LABEL_493:
  LOBYTE(v391) = v296;
  v297 = close(v393[0]);
  v187 = v391;
  if ( v297 < 0 )
  {
    LODWORD(v298) = sub_40DD80(4LL, filename);
    *(_QWORD *)v393 = v298;
    v299 = dcgettext(0LL, "failed to close %s", 5);
    v300 = __errno_location();
    error(0, *v300, v299, *(_QWORD *)v393);
    v187 = 0;
  }
LABEL_307:
  LOBYTE(v393[0]) = v187;
  if ( close(fildes[0]) < 0 )
  {
    LODWORD(v256) = sub_40DD80(4LL, v12);
    v15 = v256;
    v257 = dcgettext(0LL, "failed to close %s", 5);
    v258 = __errno_location();
    error(0, *v258, v257, v15);
    free(ptr);
    goto LABEL_200;
  }
  LOBYTE(fildes[0]) = v393[0];
  free(ptr);
  v52 = fildes[0];
  LOBYTE(v393[0]) = 0;
  LOBYTE(ptr) = fildes[0];
  if ( LOBYTE(fildes[0]) )
    goto LABEL_82;
LABEL_200:
  if ( *(_BYTE *)(v13 + 37) )
    goto LABEL_243;
  if ( !n )
    sub_409640(stat_buf.st_ino, stat_buf.st_dev);
LABEL_139:
  if ( old )
  {
    if ( rename(old, filename) )
    {
      LODWORD(v168) = sub_40DD80(4LL, filename);
      v169 = v168;
      v170 = dcgettext(0LL, "cannot un-backup %s", 5);
      v171 = __errno_location();
      error(0, *v171, v170, v169);
    }
    else if ( *(_BYTE *)(v13 + 46) )
    {
      LODWORD(v90) = sub_40DCA0(1LL, 4LL, filename);
      v91 = v90;
      LODWORD(v92) = sub_40DCA0(0LL, 4LL, old);
      v93 = v92;
      v94 = dcgettext(0LL, "%s -> %s (unbackup)\n", 5);
      __printf_chk(1LL, v94, v93, v91, v95);
    }
  }
  return (unsigned int)a7;
}

__int64 __usercall sub_4094D0(unsigned __int8 a1, __int64 a2, const char *a3, char *a4, _BYTE *a5, _BYTE *a6, signed int a7)
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
  qword_61D910 = (__int64)a3;
  qword_61D908 = (__int64)a4;
  return sub_405650(a1, 0LL, a3, a4, 0LL, a2, a7, 1u, &v10, a5, a6);
}

void __fastcall sub_409620(__int64 a1)
{
  free(*(void **)(a1 + 16));
  free((void *)a1);
}

void __fastcall sub_409640(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  void *v3; // rbx@2
  __int64 v4; // [sp+0h] [bp-28h]@1
  __int64 v5; // [sp+8h] [bp-20h]@1
  __int64 v6; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v5 = a2;
  v6 = 0LL;
  LODWORD(v2) = sub_40C0A0(qword_61D918, &v4);
  if ( v2 )
  {
    v3 = (void *)v2;
    free(*(void **)(v2 + 16));
    free(v3);
  }
}

__int64 __fastcall sub_409690(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  __int64 result; // rax@2
  __int64 v4; // [sp+0h] [bp-28h]@1
  __int64 v5; // [sp+8h] [bp-20h]@1

  v4 = a1;
  v5 = a2;
  LODWORD(v2) = sub_40B650(qword_61D918, &v4);
  if ( v2 )
    result = *(_QWORD *)(v2 + 16);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_4096D0(__int64 a1, __int64 a2, __int64 a3)
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
  LODWORD(v4) = sub_4100E0(24LL, a2);
  v5 = v4;
  LODWORD(v6) = sub_410310(a1);
  v7 = qword_61D918;
  *(_QWORD *)v5 = a2;
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 8) = v3;
  LODWORD(v8) = sub_40C060(v7, v5);
  if ( !v8 )
    sub_410330();
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

int sub_409750()
{
  __int64 v0; // rax@1

  LODWORD(v0) = sub_40B8C0(103LL, 0LL, sub_4095F0, sub_409600, sub_409620);
  qword_61D918 = v0;
  if ( !v0 )
    sub_410330(103LL, 0LL);
  return v0;
}

__int64 __fastcall sub_4097A0(int a1, __int64 a2)
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

bool __fastcall sub_4097D0(__int64 a1)
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
      sub_410330(v8, 3223348747LL);
    LODWORD(v11) = sub_410140(v8, 24 * v9);
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

void *__fastcall sub_409AC0(void *src, void *dest)
{
  void *v2; // rbx@1
  __int64 v3; // rax@1
  size_t v4; // rax@1
  size_t v5; // rbp@1
  _BYTE *v6; // rax@3
  void *result; // rax@3

  v2 = dest;
  LODWORD(v3) = sub_40AA00(src);
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

__int64 __fastcall sub_409B50(int a1, const char *a2, int a3, const char *a4, int a5, char a6)
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
        v13 = (char *)sub_409AC0(v6, &dest);
        v14 = v13;
        if ( v13 )
        {
          v15 = sub_40E910(v13);
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

__int64 __fastcall sub_409C90(const char *a1, int a2, const char *a3, char a4)
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
        v10 = (char *)sub_409AC0(v5, &dest);
        v11 = v10;
        if ( !v10 )
          return (unsigned int)-1;
        if ( (unsigned int)sub_40E910(v10) )
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

__int64 __fastcall sub_409D90(__int64 a1, __int64 a2, __int64 a3)
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
  v4 = sub_40C3F0();
  v5 = v4;
  if ( v4 == -2 )
  {
    LODWORD(v11) = ((int (*)(void))sub_40DFD0)();
    v12 = v11;
    v13 = __errno_location();
    error(0, *v13, "%s", v12);
    result = (unsigned int)v5;
  }
  else
  {
    if ( v4 == -1 )
    {
      LODWORD(v6) = sub_40DFD0(v3);
      v7 = v6;
      v8 = dcgettext(0LL, "preserving permissions for %s", 5);
      v9 = __errno_location();
      error(0, *v9, v8, v7);
    }
    result = (unsigned int)v5;
  }
  return result;
}

__int64 __fastcall sub_409E20(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx@1
  __int64 result; // rax@2
  __int64 v5; // rax@3
  __int64 v6; // r12@3
  char *v7; // rbp@3
  int *v8; // rax@3

  v3 = sub_40C430(a1, a2, a3);
  if ( v3 )
  {
    LODWORD(v5) = sub_40DFD0(a1);
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

char *__fastcall sub_409E80(char *path, unsigned __int64 a2)
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

int __fastcall sub_409F70(char *path, __int64 a2)
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
  LODWORD(v3) = sub_40AA00(path);
  v4 = v3;
  LODWORD(v5) = sub_40AA60(v3);
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

void __fastcall sub_40A040(char *a1)
{
  char *v1; // rbx@1
  char *v2; // rax@4

  v1 = a1;
  if ( (a1 || (v1 = getenv("SIMPLE_BACKUP_SUFFIX")) != 0LL) && *v1 && (LODWORD(v2) = sub_40AA00(v1), v2 == v1) )
    src = v1;
  else
    src = "~";
}

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A0A0(void *a1, signed int a2, char a3)
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
  LODWORD(v3) = sub_40AA00(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A040(src);
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
      LODWORD(v16) = sub_40AA60((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A880(v13, src);
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
        sub_409F70((char *)v13, v52);
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
      if ( !(unsigned int)sub_40DFF0(-100, (char *)src, v40, v39) )
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

void *__fastcall sub_40A570(void *a1, signed int a2)
{
  return sub_40A0A0(a1, a2, 1);
}

__int64 __fastcall sub_40A580(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1

  LODWORD(v2) = sub_413AC0(a1, a2, off_416DC0, dword_416DA0, 4LL, off_61D480);
  return (unsigned int)dword_416DA0[v2];
}

__int64 __fastcall sub_40A5F0(void *a1, char *a2)
{
  char *v2; // rax@3

  if ( !a2 || !*a2 )
  {
    v2 = getenv("VERSION_CONTROL");
    if ( !v2 || !*v2 )
      return 2LL;
    a2 = v2;
    a1 = &unk_416D4D;
  }
  return sub_40A580((__int64)a1, (__int64)a2);
}

unsigned __int64 __fastcall sub_40A640(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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

int sub_40A6C0()
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
  LODWORD(v1) = sub_4105E0(stdin);
  if ( !v1 )
  {
    if ( !(unsigned int)sub_413B80(v0) )
      return sub_40A7E0(v0);
    goto LABEL_6;
  }
  v11 = sub_410610(v0, 0LL, 1LL);
  v4 = stdin;
  if ( !v11 )
  {
    v3 = sub_4105A0();
    v4 = stdin;
    if ( v3 )
    {
      sub_413B80(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_413B80(v4) )
  {
LABEL_6:
    v5 = dcgettext(0LL, "error closing file", 5);
    v6 = qword_61D928;
    v7 = v5;
    v8 = __errno_location();
    v9 = v8;
    if ( v6 )
    {
      LODWORD(v10) = sub_40DE20(v6, "error closing file");
      error(0, *v9, "%s: %s", v10, v7);
    }
    else
    {
      error(0, *v8, "%s", v7);
    }
    ((void (*)(void))sub_40A7E0)();
    _exit(status);
  }
  return ((int (*)(void))sub_40A7E0)();
}

__int64 sub_40A7E0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_413B80(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_61D930 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_61D938 )
      {
        LODWORD(v5) = sub_40DE20(qword_61D938, "write error");
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
  result = sub_413B80(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

DIR *__fastcall sub_40A880(const char *a1)
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
    v5 = sub_410460(v3);
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

__int64 __fastcall sub_40A920(void *a1, __int64 a2)
{
  __int64 result; // rax@1

  result = sub_40A9A0(a1);
  if ( !result )
    sub_410330(a1, a2);
  return result;
}

signed __int64 __fastcall sub_40A940(_BYTE *a1)
{
  unsigned __int64 v1; // rbp@1
  __int64 v2; // rax@1
  signed __int64 v3; // rdx@2
  signed __int64 result; // rax@7

  v1 = *a1 == 47;
  LODWORD(v2) = sub_40AA00(a1);
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

_BYTE *__fastcall sub_40A9A0(void *src)
{
  signed __int64 v1; // rax@1
  size_t v2; // rbx@1
  _BYTE *v3; // rax@1
  _BYTE *v4; // rcx@1
  _BYTE *v5; // rax@2

  v1 = sub_40A940(src);
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

_BYTE *__fastcall sub_40AA00(_BYTE *a1)
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

size_t __fastcall sub_40AA60(const char *a1)
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

bool __fastcall sub_40AA90(char *a1)
{
  const char *v1; // rbx@1
  char *v2; // rbx@3
  bool v3; // zf@3

  v1 = sub_40AA00(a1);
  if ( !*v1 )
    v1 = a1;
  v2 = (char *)&v1[sub_40AA60(v1)];
  v3 = *v2 == 0;
  *v2 = 0;
  return !v3;
}

int j__posix_fadvise(int fd, off_t offset, off_t len, int advise)
{
  return posix_fadvise(fd, offset, len, advise);
}

__int64 __fastcall sub_40AB10(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_40EAF0(v4);
}

void __fastcall sub_40AB60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@2
  __int64 v4; // rax@2
  __int64 v5; // rbx@2
  __int64 v6; // rax@2
  __int64 v7; // rax@2

  if ( a1 )
  {
    v3 = a3;
    LODWORD(v4) = sub_4100E0(24LL, a2);
    v5 = v4;
    LODWORD(v6) = sub_410310(a2);
    *(_QWORD *)v5 = v6;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v5 + 16) = *(_QWORD *)v3;
    LODWORD(v7) = sub_40C060(a1, v5);
    if ( !v7 )
      sub_410330(a1, v5);
    if ( v5 != v7 )
      sub_40C330(v5, v5);
  }
}

bool __fastcall sub_40ABF0(__int64 a1, __int64 a2, __int64 a3)
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
    LODWORD(v4) = sub_40B650(a1, &v6);
    result = v4 != 0;
  }
  else
  {
    result = 0;
  }
  return result;
}

char *__fastcall sub_40AC30(__int64 a1)
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

signed __int64 __fastcall sub_40AD20(__int16 a1, __int64 a2)
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

__int64 __fastcall sub_40AEB0(void *a1, void *a2)
{
  __int64 result; // rax@1

  result = sub_40AED0(a1, a2);
  if ( !result )
    sub_410330(a1, a2);
  return result;
}

void *__fastcall sub_40AED0(void *src, void *a2, _QWORD *a3)
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
  v4 = sub_40AA00(src);
  v5 = v4;
  v6 = sub_40AA60(v4);
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

__int64 __fastcall sub_40AFB0(int fd, void *buf, size_t n)
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
      v6 = sub_40E290(fd, v3, v4);
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

unsigned __int64 __fastcall sub_40B030(unsigned __int64 a1)
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

signed __int64 __fastcall sub_40B0F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

signed __int64 __fastcall sub_40B0F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40B120(__int64 a1, __int64 a2, __int64 **a3, char a4)
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
  v7 = (__int64 *)sub_40B0F0(a1, a2);
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

signed __int64 __fastcall sub_40B240(void **a1)
{
  void *v1; // rax@1
  float v2; // xmm0_4@2
  float v3; // xmm1_4@5
  float v4; // xmm2_4@5
  signed __int64 result; // rax@7

  v1 = *a1;
  if ( *a1 == &unk_416F10 )
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
      *a1 = &unk_416F10;
      result = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_40B2C0(__int64 a1, __int64 a2, char a3)
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
              v8 = sub_40B0F0(a1, *(_QWORD *)v6);
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
    v10 = (_QWORD *)sub_40B0F0(a1, v5);
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

__int64 __fastcall sub_40B650(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 *v3; // rax@1
  __int64 v4; // rsi@1
  __int64 *v5; // rbx@2
  __int64 result; // rax@7

  v2 = a2;
  v3 = (__int64 *)sub_40B0F0(a1, a2);
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

char **__fastcall sub_40B8C0(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(), __int64 (__fastcall *a4)(), char *a5)
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
    v7 = sub_40B0D0;
  if ( !a4 )
    v6 = sub_40B0E0;
  v9 = malloc(0x50uLL);
  v10 = (char **)v9;
  if ( v9 )
  {
    v11 = (void **)((char *)v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40B240(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40B030(v8);
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
      *((_QWORD *)v9 + 5) = &unk_416F10;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40B240(v11) )
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

void __fastcall sub_40BB00(void *ptr)
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

signed __int64 __fastcall sub_40BBE0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_40B030(a2);
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
  v14 = sub_40B2C0((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_40B2C0(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40B2C0(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40BBE0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_40B030(a2);
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
  v14 = sub_40B2C0((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_40B2C0(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40B2C0(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40BDE0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40B120(a1, a2, &v26, 0);
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
        sub_40B240((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40BBE0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B120(a1, v4, &v26, 0) )
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

signed __int64 __fastcall sub_40BDE0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40B120(a1, a2, &v26, 0);
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
        sub_40B240((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40BBE0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B120(a1, v4, &v26, 0) )
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

__int64 __fastcall sub_40C060(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  int v3; // eax@1
  __int64 result; // rax@4
  __int64 v5; // [sp+8h] [bp-10h]@1

  v2 = a2;
  v3 = sub_40BDE0(a1, a2, &v5);
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

__int64 __fastcall sub_40C0A0(__int64 a1, __int64 a2)
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
  v3 = sub_40B120(a1, a2, &v24, 1);
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
    sub_40B240((void **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40BBE0(a1, v17) )
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

unsigned __int64 __fastcall sub_40C280(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = sub_413D10(*(_QWORD *)a1);
  return (*(_QWORD *)(a1 + 8) ^ v2) % a2;
}

int __fastcall sub_40C2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int result; // eax@2

  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) || *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16) )
    result = 0;
  else
    result = sub_40E2F0(*(_QWORD *)a1, *(_QWORD *)a2, a3, a4, a5, a6);
  return result;
}

void __fastcall sub_40C330(void **a1)
{
  free(*a1);
  free(a1);
}

char *__fastcall sub_40C350(const char *a1)
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
  qword_61D940 = v1;
  program_invocation_name = v1;
  return result;
}

int __fastcall sub_40C3F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebp@1
  __int64 v6; // rbx@1
  int result; // eax@2
  char v8; // [sp+Ch] [bp-1Ch]@1

  v5 = a4;
  v6 = a3;
  if ( sub_413790(a1, a2, a5, &v8) )
    result = -2;
  else
    result = sub_4137C0(&v8, v6, v5);
  return result;
}

int __fastcall sub_40C430(__int64 a1, unsigned int a2, int a3)
{
  int v4; // [sp+Ch] [bp-Ch]@1

  v4 = a3;
  return sub_4137C0(&v4, a1, a2);
}

char *__fastcall sub_40C450(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_413E10(0LL);
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

unsigned __int64 __fastcall sub_40C550(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_40C450("`", v11);
        v58 = sub_40C450("'", v11);
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
            return sub_40C550((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40C550((__int64)v9, v79, s);
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
                return sub_40C550((__int64)v9, v10, s);
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
              return sub_40C550((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40C550((__int64)v9, v10, s);
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
              return sub_40C550((__int64)v9, v10, s);
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
              return sub_40C550((__int64)v9, v10, s);
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
            return sub_40C550((__int64)v9, v10, s);
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
            return sub_40C550((__int64)v9, v10, s);
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
            return sub_40C550((__int64)v9, v10, s);
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
              return sub_40C550((__int64)v9, v10, s);
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
          return sub_40C550((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40C550((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_413710((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_40C550((__int64)v9, v10, s);
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
      return sub_40C550((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_40C550(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_40C450("`", v11);
        v58 = sub_40C450("'", v11);
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
            return sub_40C550((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40C550((__int64)v9, v79, s);
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
                return sub_40C550((__int64)v9, v10, s);
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
              return sub_40C550((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40C550((__int64)v9, v10, s);
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
              return sub_40C550((__int64)v9, v10, s);
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
              return sub_40C550((__int64)v9, v10, s);
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
            return sub_40C550((__int64)v9, v10, s);
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
            return sub_40C550((__int64)v9, v10, s);
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
            return sub_40C550((__int64)v9, v10, s);
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
              return sub_40C550((__int64)v9, v10, s);
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
          return sub_40C550((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40C550((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_413710((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_40C550((__int64)v9, v10, s);
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
      return sub_40C550((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_40D780(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_61D458;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61D470 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_410330(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_61D458 == &xmmword_61D460 )
    {
      LODWORD(v20) = sub_410140(0LL, v9);
      v7 = v20;
      off_61D458 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61D460);
    }
    else
    {
      LODWORD(v10) = sub_410140(off_61D458, v9);
      off_61D458 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61D470], 0, 16LL * ((signed int)a1 + 1 - dword_61D470));
    dword_61D470 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_40C550(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_61D960 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4100E0(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_40C550(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_40D780(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_61D458;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61D470 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_410330(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_61D458 == &xmmword_61D460 )
    {
      LODWORD(v20) = sub_410140(0LL, v9);
      v7 = v20;
      off_61D458 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61D460);
    }
    else
    {
      LODWORD(v10) = sub_410140(off_61D458, v9);
      off_61D458 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61D470], 0, 16LL * ((signed int)a1 + 1 - dword_61D470));
    dword_61D470 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_40C550(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_61D960 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4100E0(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_40C550(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_40DCA0(__int64 a1, int a2, char *a3)
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
  return sub_40D780(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DCA0(__int64 a1, int a2, char *a3)
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
  return sub_40D780(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DD80(int a1, char *a2)
{
  return sub_40DCA0(0LL, a1, a2);
}

_BYTE *__fastcall sub_40DDA0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_61DA90;
  v4 = _mm_load_si128((const __m128i *)&xmmword_61DA60);
  v5 = _mm_load_si128((const __m128i *)&xmmword_61DA70);
  v6 = _mm_load_si128((const __m128i *)&xmmword_61DA80);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_40D780(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_40DE20(char *a1)
{
  return sub_40DDA0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40DE50(__int64 a1, int a2, char *a3)
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
  return sub_40D780(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DE50(__int64 a1, int a2, char *a3)
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
  return sub_40D780(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DFB0(__int64 a1, char *a2)
{
  return sub_40D780(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61D420);
}

_BYTE *__fastcall sub_40DFD0(char *a1)
{
  return sub_40D780(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61D420);
}

__int64 __fastcall sub_40DFF0(int oldfd, char *old, int newfd, char *a4, unsigned int a5)
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

__int64 __fastcall sub_40E240(__int64 a1)
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

__int64 __fastcall sub_40E290(int fd, void *buf, size_t n)
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

__int64 __fastcall sub_40E2F0(_BYTE *a1, _BYTE *a2)
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
  v3 = sub_40AA00(a1);
  v4 = sub_40AA00(a2);
  v5 = sub_40AA60(v3);
  if ( v5 == sub_40AA60(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (const char *)sub_40A920(a1, (__int64)v4);
    v8 = (const char *)sub_40A920(a2, (__int64)v4);
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

signed __int64 __fastcall sub_40E420(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax@1
  unsigned __int64 v3; // rdx@1

  result = 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a1 + 8) >= v3 )
    result = *(_QWORD *)(a1 + 8) > v3;
  return result;
}

int __fastcall sub_40E440(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}

char *__fastcall sub_40E450(DIR *dirp, signed __int64 a2)
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
  compar = (int (*)(const void *, const void *))qword_417CE0[(unsigned __int64)(unsigned int)a2];
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
                sub_410330(v12, a2);
            }
            else
            {
              v45 = 8LL;
              a2 = 128LL;
              src = (char *)1;
            }
            v36 = v14 + 1;
            v37 = (size_t)v15;
            LODWORD(v38) = sub_410140(v5, a2);
            v16 = v36;
            v15 = (const void *)v37;
            v5 = v38;
            v17 = v46;
          }
          n = v16;
          v19 = v17;
          v20 = (signed __int64)&v5[16 * v4];
          LODWORD(v21) = sub_410310(v15);
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
          LODWORD(v35) = sub_410140(v6, v42);
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
        LODWORD(v29) = sub_4100E0(v3 + 1, v25);
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
        LODWORD(v23) = sub_4100E0(v3 + 1, a2);
        v6 = v23;
        v24 = v23;
      }
      free(v5);
    }
    else if ( v42 == v3 )
    {
      LODWORD(v39) = sub_410140(v6, v42 + 1);
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

char *__fastcall sub_40E7F0(const char *a1, unsigned int a2)
{
  DIR *v2; // rax@1
  DIR *v3; // rbx@2
  char *v4; // rbp@2
  char *result; // rax@3
  int *v6; // rax@5
  int v7; // er12@5
  int *v8; // rbx@5

  v2 = sub_40A880(a1);
  if ( v2 )
  {
    v3 = v2;
    v4 = sub_40E450(v2, a2);
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

__int64 __fastcall sub_40E860(char *filename)
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

int __fastcall sub_40E8C0(const char *a1)
{
  return mkdir(a1, 0x1C0u);
}

int __fastcall sub_40E8D0(const char *a1, int *a2)
{
  int v2; // esi@1

  v2 = *a2;
  LOBYTE(v2) = v2 & 0x3C | 0xC2;
  return open(a1, v2, 384LL);
}

noreturn void  sub_40E8F0()
{
  __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147u, "gen_tempname_len");
}

__int64 __fastcall sub_40E910(char *s, int a2, __int64 a3, int (__fastcall *a4)(char *, __int64), size_t a5)
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
    LODWORD(v11) = sub_414400(0LL, v5);
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
            LODWORD(v16) = sub_414440(v12, 61LL);
            *(v15 - 1) = byte_417D80[v16];
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
          sub_414560(v12);
          *v7 = 17;
          return (unsigned int)-1;
        }
      }
      v17 = -1;
LABEL_12:
      v20 = v17;
      v21 = v18;
      sub_414560(v12);
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

__int64 __fastcall sub_40EAF0(int fd)
{
  __int64 result; // rax@2
  int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_414FD0();
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

__int64 __fastcall sub_40EB60(char *a1, __int64 a2, __int64 a3, char a4)
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
    v10 = (char **)qword_61DAA0;
    v49 = a2;
    filename = a1;
    if ( !qword_61DAA0 )
    {
      v10 = sub_40B8C0(0x10uLL, 0LL, sub_40EB40, sub_40EB50, (char *)free);
      qword_61DAA0 = (__int64)v10;
      if ( !v10 )
        goto LABEL_21;
    }
    v11 = (_QWORD *)qword_61DA98;
    if ( !qword_61DA98 )
    {
      v55 = v10;
      v40 = malloc(0x10uLL);
      v11 = v40;
      qword_61DA98 = (__int64)v40;
      if ( !v40 )
      {
        v41 = qword_61DAA0;
        goto LABEL_60;
      }
      *((_DWORD *)v40 + 2) = 2000000000;
      v10 = v55;
      *((_BYTE *)v40 + 12) = 0;
    }
    *v11 = *(_QWORD *)v49;
    v12 = sub_40C060((__int64)v10, (__int64)v11);
    v13 = v12;
    if ( v12 )
    {
      if ( qword_61DA98 == v12 )
        qword_61DA98 = 0LL;
      goto LABEL_10;
    }
    v41 = qword_61DAA0;
    if ( !qword_61DAA0 )
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
    v42 = sub_40B650(v41, (__int64)&v60);
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
      v43 = sub_40F8B0(filename);
      v28 = v45;
      v27 = v52;
      v29 = v43 != 0;
    }
    else
    {
      v26 = sub_40F8A0(filename);
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
        sub_40F8B0(filename);
        v13 = v47;
        v36 = v50;
        v31 = v54;
      }
      else
      {
        sub_40F8A0(filename);
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

signed __int64 __fastcall sub_40F2D0(__int64 a1, struct timespec **a2)
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
    sub_413C70(*a2);
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
    sub_413C70(v2 + 1);
    result = 0LL;
  }
  return result;
}

signed __int64 __fastcall sub_40F3A0(__int64 a1)
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

__int64 __fastcall sub_40F460(int fd, char *filename, __int64 a3)
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
    v6 = sub_40F3A0((__int64)&v28);
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
  if ( dword_61DAAC < 0 )
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
    dword_61DAAC = 1;
    return (unsigned int)v8;
  }
LABEL_11:
  dword_61DAAC = -1;
  dword_61DAA8 = -1;
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
  if ( (unsigned __int8)sub_40F2D0((__int64)&stat_buf, &times) )
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

__int64 __fastcall sub_40F8A0(char *filename, __int64 a2)
{
  return sub_40F460(-1, filename, a2);
}

__int64 __fastcall sub_40F8B0(char *filename, __int64 a2)
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
    v3 = sub_40F3A0((__int64)&v12);
    if ( v3 < 0 )
      return (unsigned int)-1;
    if ( dword_61DAA8 < 0 )
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
    if ( dword_61DAA8 < 0 )
    {
      dword_61DAA8 = -1;
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
    dword_61DAA8 = -1;
    if ( v3 )
    {
      if ( v3 == 3 )
      {
        if ( !times )
        {
LABEL_12:
          if ( (stat_buf.st_mode & 0xF000) != 40960 )
            return (unsigned int)sub_40F460(-1, filename, (__int64)times);
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
      if ( (unsigned __int8)sub_40F2D0((__int64)&stat_buf, &times) )
        return v7;
      goto LABEL_12;
    }
LABEL_17:
    if ( __lxstat(1, filename, &stat_buf) )
      return (unsigned int)-1;
    goto LABEL_12;
  }
  dword_61DAAC = 1;
  result = (unsigned int)v6;
  dword_61DAA8 = 1;
  return result;
}

int __fastcall sub_40FB00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_40FB00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_40FF60(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_40FB00(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_40FB00(a1, a2, a3, a4, (__int64)v15, v9);
}

char sub_4100A0()
{
  char result; // al@2
  __uid_t v1; // eax@3

  if ( byte_61DAB1 )
  {
    result = byte_61DAB0;
  }
  else
  {
    v1 = geteuid();
    byte_61DAB1 = 1;
    result = v1 == 0;
    byte_61DAB0 = result;
  }
  return result;
}

void *__fastcall sub_4100E0(size_t a1, __int64 a2)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_410330(a1, a2);
  }
  return result;
}

void *__fastcall sub_410140(void *a1, size_t a2)
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
        sub_410330(a1, a2);
    }
  }
  return result;
}

void *__fastcall sub_4102E0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_4100E0(a2, a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_410310(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_4102E0(a1, v1 + 1);
}

noreturn void  sub_410330()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_410370(__int64 a1, int a2)
{
  __int64 v2; // rax@1

  LODWORD(v2) = fts_open(a1, a2 | 0x200u);
  if ( !v2 )
  {
    if ( *__errno_location() != 22 )
      sub_410330();
    __assert_fail("errno != EINVAL", "lib/xfts.c", 0x29u, "xfts_open");
  }
  return v2;
}

__int64 sub_4103F0()
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

__int64 __fastcall sub_410460(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_61DAB4 < 0 )
    {
      v4 = sub_410460(a1);
      if ( v4 >= 0 && dword_61DAB4 == -1 )
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
        dword_61DAB4 = 1;
      }
      else
      {
        v4 = sub_410460(a1);
        if ( v4 >= 0 )
        {
          dword_61DAB4 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_4105A0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_410610(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

__int64 __fastcall sub_4105E0(__int64 a1)
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

int __fastcall sub_410610(FILE *a1, __off_t a2, int a3)
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

signed __int64 __fastcall sub_4106F0(__int64 a1, __int64 a2, char a3)
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

__int64 __fastcall sub_4108A0(__int64 a1, __int64 a2, size_t a3)
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

void *__fastcall sub_4109A0(__int64 a1, const void *a2, size_t a3)
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

void __fastcall sub_410A30(void *ptr)
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

int __fastcall sub_410A80(__int64 a1)
{
  int v1; // eax@2
  int result; // eax@4

  while ( 1 )
  {
    result = sub_413D70(a1);
    if ( (_BYTE)result )
      break;
    v1 = sub_413DC0(a1);
    if ( v1 >= 0 )
      close(v1);
  }
  return result;
}

__int64 __fastcall sub_410AC0(__int64 a1)
{
  __int64 v1; // rbx@1
  char **v2; // r12@2
  __int64 v3; // rax@3
  __int64 result; // rax@4
  _QWORD *v5; // rbx@7
  __int64 v6; // rdx@8
  __int64 v7; // rax@8
  struct statfs v8; // [sp+0h] [bp-98h]@3

  v1 = *(_QWORD *)(a1 + 80);
  if ( !(*(_BYTE *)(v1 + 73) & 2) )
    return 0LL;
  v2 = *(char ***)(v1 + 80);
  if ( !v2 )
  {
    v2 = sub_40B8C0(0xDuLL, 0LL, sub_4106A0, sub_4106B0, (char *)free);
    *(_QWORD *)(v1 + 80) = v2;
    if ( !v2 )
    {
      if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
        return 0LL;
      return v8.f_type;
    }
  }
  v8.f_type = *(_QWORD *)(a1 + 120);
  v3 = sub_40B650((__int64)v2, (__int64)&v8);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 8);
  }
  else
  {
    if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
      return 0LL;
    v5 = malloc(0x10uLL);
    result = v8.f_type;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 120);
      v5[1] = v8.f_type;
      *v5 = v6;
      v7 = sub_40C060((__int64)v2, (__int64)v5);
      if ( v7 )
      {
        if ( v5 != (_QWORD *)v7 )
          abort();
        return v8.f_type;
      }
      free(v5);
      result = v8.f_type;
    }
  }
  return result;
}

__int64 __fastcall sub_410AC0(__int64 a1)
{
  __int64 v1; // rbx@1
  char **v2; // r12@2
  __int64 v3; // rax@3
  __int64 result; // rax@4
  _QWORD *v5; // rbx@7
  __int64 v6; // rdx@8
  __int64 v7; // rax@8
  struct statfs v8; // [sp+0h] [bp-98h]@3

  v1 = *(_QWORD *)(a1 + 80);
  if ( !(*(_BYTE *)(v1 + 73) & 2) )
    return 0LL;
  v2 = *(char ***)(v1 + 80);
  if ( !v2 )
  {
    v2 = sub_40B8C0(0xDuLL, 0LL, sub_4106A0, sub_4106B0, (char *)free);
    *(_QWORD *)(v1 + 80) = v2;
    if ( !v2 )
    {
      if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
        return 0LL;
      return v8.f_type;
    }
  }
  v8.f_type = *(_QWORD *)(a1 + 120);
  v3 = sub_40B650((__int64)v2, (__int64)&v8);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 8);
  }
  else
  {
    if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
      return 0LL;
    v5 = malloc(0x10uLL);
    result = v8.f_type;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 120);
      v5[1] = v8.f_type;
      *v5 = v6;
      v7 = sub_40C060((__int64)v2, (__int64)v5);
      if ( v7 )
      {
        if ( v5 != (_QWORD *)v7 )
          abort();
        return v8.f_type;
      }
      free(v5);
      result = v8.f_type;
    }
  }
  return result;
}

__int64 __fastcall sub_410BE0(__int64 a1)
{
  __int64 v1; // rax@1
  int v2; // edx@4

  v1 = sub_410AC0(a1);
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

void __fastcall sub_410C50(__int64 a1, int a2, char a3)
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
    v5 = sub_413D80(a1 + 96);
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

__int64 __fastcall sub_410CC0(__int64 a1)
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
      sub_410C50(a1, -100, 1);
    else
      v2 = fchdir(*(_DWORD *)(a1 + 40)) != 0;
  }
  sub_410A80(a1 + 96);
  return (unsigned int)v2;
}

signed __int64 __fastcall sub_410D20(void **a1, size_t *a2, __int64 a3)
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

bool __fastcall sub_410D90(__int16 a1, char ***a2)
{
  char **v2; // rax@2
  bool result; // al@2
  void *v4; // rax@4
  void *v5; // rdi@4

  if ( a1 & 0x102 )
  {
    v2 = sub_40B8C0(0x1FuLL, 0LL, sub_410690, sub_410670, (char *)free);
    *a2 = v2;
    result = v2 != 0LL;
  }
  else
  {
    v4 = malloc(0x20uLL);
    v5 = v4;
    *a2 = (char **)v4;
    result = 0;
    if ( v5 )
    {
      sub_413BE0();
      result = 1;
    }
  }
  return result;
}

__int64 __fastcall sub_410DF0(char a1, int a2, const char *a3)
{
  const char *v3; // rcx@1
  __int64 v4; // rdx@3
  __int64 result; // rax@2

  v3 = a3;
  if ( a2 & 0x200 )
  {
    result = sub_414380(a1);
  }
  else
  {
    v4 = (a2 << 7) & 0x40000 | (a2 << 13) & 0x20000 | 0x90900u;
    result = sub_40AB10(v3, v4, v4);
  }
  return result;
}

__int64 __fastcall sub_410E40(__int64 a1, __int64 a2, int a3, const char *a4)
{
  __int64 v4; // r15@1
  __int64 v5; // r13@1
  int v6; // ebp@1
  const char *v7; // rbx@1
  int v8; // er12@1
  int v9; // edx@1
  bool v10; // cf@1
  bool v11; // zf@1
  _BYTE *v12; // rdi@2
  signed __int64 v13; // rcx@2
  const char *v14; // rsi@2
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
  v12 = &unk_415FD6;
  v13 = 3LL;
  v14 = v7;
  do
  {
    if ( !v13 )
      break;
    v10 = (const unsigned __int8)*v14 < *v12;
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
        v15 = sub_413D70(v4 + 96);
        if ( !v15 )
        {
          v16 = sub_413DC0(v4 + 96);
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
      v17 = sub_410DF0(*(_DWORD *)(v4 + 44), v8, v7);
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
            sub_410C50(v4, v17, v15 ^ 1);
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

int __fastcall sub_411010(__int16 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx@1
  _QWORD *v4; // rbp@2
  __int64 v5; // rax@3
  __int64 v6; // rdi@3
  __int64 v7; // r12@3
  __int64 v8; // rax@5
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
      v7 = sub_40C060(v6, (__int64)v4);
      if ( v4 == (_QWORD *)v7 )
        return 1;
      free(v4);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 16);
        *(_WORD *)(v3 + 112) = 2;
        *(_QWORD *)v3 = v8;
        return 1;
      }
    }
    result = 0;
  }
  else
  {
    result = sub_413BF0(*a2, a3 + 120);
    if ( !(_BYTE)result )
      return 1;
    *(_QWORD *)v3 = v3;
    *(_WORD *)(v3 + 112) = 2;
  }
  return result;
}

void __fastcall sub_4110C0(__int16 a1, __int64 *a2, __int64 a3)
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
    v5 = *a2;
    v9 = *(_QWORD *)(a3 + 120);
    v10 = *(_QWORD *)(a3 + 128);
    v6 = (void *)sub_40C0A0(v5, (__int64)&v9);
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
  v4 = *a2;
  if ( !*(_QWORD *)(*a2 + 16) )
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

void __fastcall sub_4110C0(__int16 a1, __int64 *a2, __int64 a3)
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
    v5 = *a2;
    v9 = *(_QWORD *)(a3 + 120);
    v10 = *(_QWORD *)(a3 + 128);
    v6 = (void *)sub_40C0A0(v5, (__int64)&v9);
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
  v4 = *a2;
  if ( !*(_QWORD *)(*a2 + 16) )
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

__int64 __fastcall sub_411160(__int64 *a1, int a2)
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
  __int64 v38; // rcx@64
  bool v39; // zf@65
  int v40; // edi@66
  char v41; // r14@69
  bool v42; // r12@69
  DIR *v43; // rdi@72
  __int16 v44; // bp@72
  void *v45; // rcx@80
  __int64 v46; // r15@80
  int v47; // ebx@80
  int v49; // ecx@60
  __int64 v50; // rax@97
  bool v51; // al@101
  DIR *v52; // rdi@112
  int *v53; // rax@114
  int v54; // er12@114
  int *v55; // rbp@114
  __int64 v56; // rax@130
  __int64 v57; // rax@132
  __int16 v58; // ax@133
  DIR *dirp; // [sp+8h] [bp-90h]@10
  __int64 v60; // [sp+10h] [bp-88h]@6
  void *ptr; // [sp+18h] [bp-80h]@10
  size_t v62; // [sp+20h] [bp-78h]@10
  __int64 v63; // [sp+20h] [bp-78h]@30
  __int64 v64; // [sp+28h] [bp-70h]@10
  signed __int64 v65; // [sp+30h] [bp-68h]@10
  unsigned __int64 v66; // [sp+38h] [bp-60h]@4
  char *dest; // [sp+40h] [bp-58h]@8
  signed __int64 v68; // [sp+48h] [bp-50h]@6
  DIR *v69; // [sp+50h] [bp-48h]@1
  int v70; // [sp+58h] [bp-40h]@1
  char v71; // [sp+5Eh] [bp-3Ah]@10
  char v72; // [sp+5Fh] [bp-39h]@5

  v2 = (__int64)a1;
  v3 = *a1;
  v70 = a2;
  v4 = *(DIR **)(*a1 + 24);
  v69 = v4;
  if ( v4 )
  {
    if ( dirfd(v4) >= 0 )
    {
      if ( !*(_QWORD *)(v2 + 64) )
      {
        v66 = 100000LL;
        v5 = *(_DWORD *)(v2 + 72);
        v72 = 1;
        goto LABEL_6;
      }
      v66 = -1LL;
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
    v49 = (*(_QWORD *)(v3 + 88) != 0LL) << 17;
  v33 = *(_QWORD *)(v3 + 48);
  LOBYTE(v34) = -100;
  if ( (*(_DWORD *)(v2 + 72) & 0x204) == 512 )
    v34 = *(_DWORD *)(v2 + 44);
  v35 = sub_414380(v34);
  v36 = v35;
  if ( v35 < 0 )
  {
LABEL_115:
    *(_QWORD *)(v3 + 24) = 0LL;
    if ( v70 == 3 )
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
    v53 = __errno_location();
    v54 = *v53;
    v55 = v53;
    close(v36);
    *v55 = v54;
    goto LABEL_115;
  }
  v39 = *(_WORD *)(v3 + 112) == 11;
  *(_QWORD *)(v3 + 24) = v37;
  if ( v39 )
  {
    *(_WORD *)(v3 + 112) = sub_4106F0(v2, v3, 0);
  }
  else
  {
    v40 = *(_DWORD *)(v2 + 72);
    if ( v40 & 0x100 )
    {
      sub_4110C0(v40, (__int64 *)(v2 + 88), v3);
      sub_4106F0(v2, v3, 0);
      if ( !(unsigned __int8)sub_411010(*(_DWORD *)(v2 + 72), (__int64 *)(v2 + 88), v3) )
      {
        ptr = 0LL;
        *__errno_location() = 12;
        return (__int64)ptr;
      }
    }
  }
  v66 = *(_QWORD *)(v2 + 64) < 1uLL ? 100000LL : -1LL;
  if ( v70 == 2 )
    goto LABEL_118;
  if ( (*(_DWORD *)(v2 + 72) & 0x38) == 24 && *(_QWORD *)(v3 + 136) == 2LL && (unsigned int)sub_410BE0(v3) )
  {
    if ( v70 == 3 )
    {
      v41 = 0;
      v42 = 1;
      goto LABEL_70;
    }
LABEL_118:
    v72 = 0;
    v5 = *(_DWORD *)(v2 + 72);
    goto LABEL_6;
  }
  v41 = 1;
  v42 = v70 == 3;
LABEL_70:
  if ( *(_BYTE *)(v2 + 73) & 2 )
  {
    v36 = sub_410460(v36, 1030, 3LL, v38);
    if ( v36 < 0 )
    {
      v43 = *(DIR **)(v3 + 24);
      v44 = *(_WORD *)(v3 + 114) | 1;
      if ( !v42 || !v41 )
      {
        *(_WORD *)(v3 + 114) |= 1u;
        closedir(v43);
        v5 = *(_DWORD *)(v2 + 72);
LABEL_78:
        *(_QWORD *)(v3 + 24) = 0LL;
        v72 = 0;
        goto LABEL_6;
      }
      goto LABEL_74;
    }
  }
  if ( (unsigned int)sub_410E40(v2, v3, v36, 0LL) )
  {
    v43 = *(DIR **)(v3 + 24);
    v44 = *(_WORD *)(v3 + 114) | 1;
    if ( !v42 || !v41 )
    {
LABEL_75:
      *(_WORD *)(v3 + 114) = v44;
      closedir(v43);
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
  v72 = 1;
  v5 = *(_DWORD *)(v2 + 72);
LABEL_6:
  v60 = *(_QWORD *)(v3 + 72);
  v68 = v60 - 1;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 56) + v60 - 1) != 47 )
  {
    v68 = *(_QWORD *)(v3 + 72);
    ++v60;
  }
  dest = 0LL;
  if ( v5 & 4 )
  {
    v6 = (_BYTE *)(*(_QWORD *)(v2 + 32) + v68);
    *v6 = 47;
    dest = v6 + 1;
  }
  v71 = 0;
  v7 = 0LL;
  v62 = *(_QWORD *)(v2 + 48) - v60;
  v8 = v2;
  dirp = 0LL;
  v64 = v3;
  v65 = *(_QWORD *)(v3 + 88) + 1LL;
  ptr = 0LL;
  while ( 1 )
  {
    v10 = *(DIR **)(v64 + 24);
    if ( !v10 )
    {
      v24 = v64;
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
      v16 = sub_4109A0(v8, v14->d_name, v15);
      if ( !v16 )
        goto LABEL_80;
      if ( v62 <= v15 )
      {
        v63 = *(_QWORD *)(v8 + 32);
        v21 = sub_410D20((void **)(v8 + 32), (size_t *)(v8 + 48), v68 + v15 + 2);
        if ( !v21 )
        {
LABEL_80:
          v45 = v16;
          v46 = v8;
          v47 = *v12;
          free(v45);
          sub_410A30(ptr);
          closedir(*(DIR **)(v64 + 24));
          *(_QWORD *)(v64 + 24) = 0LL;
          *(_WORD *)(v64 + 112) = 7;
          ptr = 0LL;
          *(_DWORD *)(v46 + 72) |= 0x4000u;
          *v12 = v47;
          return (__int64)ptr;
        }
        v22 = *(_QWORD *)(v8 + 32);
        if ( v22 == v63 )
        {
          v21 = v71;
        }
        else
        {
          v23 = (char *)(v60 + v22);
          if ( !(*(_BYTE *)(v8 + 72) & 4) )
            v23 = dest;
          dest = v23;
        }
        v71 = v21;
        v62 = *(_QWORD *)(v8 + 48) - v60;
      }
      if ( __CFADD__(v60, v15) )
      {
        free(v16);
        sub_410A30(ptr);
        closedir(*(DIR **)(v64 + 24));
        *(_QWORD *)(v64 + 24) = 0LL;
        *(_WORD *)(v64 + 112) = 7;
        ptr = 0LL;
        *(_DWORD *)(v8 + 72) |= 0x4000u;
        *v12 = 36;
        return (__int64)ptr;
      }
      v17 = (char *)v16 + 264;
      *((_QWORD *)v16 + 11) = v65;
      v18 = *(_QWORD *)v8;
      *((_QWORD *)v16 + 9) = v60 + v15;
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
        *((_WORD *)v16 + 56) = sub_4106F0(v8, (__int64)v16, 0);
      }
      else
      {
        v20 = (unsigned int)v14->d_type - 1;
        if ( (v19 & 0x18) == 24 && v14->d_type & 0xFB )
        {
          *((_WORD *)v16 + 56) = 11;
          if ( (unsigned int)v20 <= 0xB )
          {
            *((_DWORD *)v16 + 36) = dword_418180[v20];
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
            *((_DWORD *)v16 + 36) = dword_418180[v20];
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
        if ( v7 >= v66 )
          goto LABEL_38;
      }
      else
      {
        ptr = v16;
        if ( ++v7 >= v66 )
        {
LABEL_38:
          v24 = v64;
          v25 = v8;
          if ( !v71 )
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
  v24 = v64;
  v25 = v8;
  if ( *v12 )
  {
    *(_DWORD *)(v64 + 64) = *v12;
    *(_WORD *)(v64 + 112) = (v7 | (unsigned __int64)v69) < 1 ? 4 : 7;
  }
  v52 = *(DIR **)(v64 + 24);
  if ( v52 )
  {
    closedir(v52);
    *(_QWORD *)(v64 + 24) = 0LL;
  }
LABEL_87:
  if ( !v71 )
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
    if ( *(_QWORD *)(v25 + 48) == v60 || !v7 )
      --dest;
    *dest = 0;
  }
  if ( v69 || !v72 )
    goto LABEL_139;
  if ( v70 != 1 && v7 )
    goto LABEL_97;
  v51 = *(_QWORD *)(v24 + 88) ? (unsigned int)sub_410E40(v25, *(_QWORD *)(v24 + 8), -1, (const char *)&unk_415FD6) != 0 : (unsigned int)sub_410CC0(v25) != 0;
  if ( !v51 )
  {
LABEL_139:
    if ( !v7 )
    {
      if ( v70 == 3 )
      {
        v58 = *(_WORD *)(v24 + 112);
        if ( v58 != 4 && v58 != 7 )
          *(_WORD *)(v24 + 112) = 6;
      }
      sub_410A30(ptr);
      return 0LL;
    }
LABEL_97:
    v50 = *(_QWORD *)(v25 + 64);
    if ( v7 > 0x2710 )
    {
      if ( v50 )
        return sub_4108A0(v25, (__int64)ptr, v7);
      v56 = sub_410AC0(v24);
      if ( v56 != 26985 && v56 != 16914836 )
      {
        *(_QWORD *)(v25 + 64) = sub_4106C0;
        v57 = sub_4108A0(v25, (__int64)ptr, v7);
        *(_QWORD *)(v25 + 64) = 0LL;
        return v57;
      }
      v50 = *(_QWORD *)(v25 + 64);
    }
    if ( !v50 || v7 == 1 )
      return (__int64)ptr;
    return sub_4108A0(v25, (__int64)ptr, v7);
  }
  *(_WORD *)(v24 + 112) = 7;
  *(_DWORD *)(v25 + 72) |= 0x4000u;
  sub_410A30(ptr);
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
    v28 = sub_410D20((void **)(v6 + 32), (size_t *)(v6 + 48), v11);
    if ( !v28 )
      goto LABEL_44;
    v12 = *v3;
    if ( *v3 )
    {
      v13 = sub_4109A0(v6, "", 0LL);
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
        v19 = sub_4109A0(v6, "", 0LL);
        *(_QWORD *)v6 = v19;
        if ( v19 )
        {
          v19[2] = v14;
          v20 = *(_DWORD *)(v6 + 72);
          *((_WORD *)v19 + 56) = 9;
          if ( sub_410D90(v20, (char ***)(v6 + 88)) )
          {
            v21 = *(_DWORD *)(v6 + 72);
            if ( !(v21 & 0x204) )
            {
              v26 = sub_410DF0(*(_DWORD *)(v6 + 44), v21, ".");
              *(_DWORD *)(v6 + 40) = v26;
              if ( v26 < 0 )
                *(_DWORD *)(v6 + 72) |= 4u;
            }
            sub_413D50(v6 + 96, 0xFFFFFFFFLL);
            return v6;
          }
        }
LABEL_42:
        sub_410A30(v14);
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
        v16 = sub_4109A0(v6, v12, v18);
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
        *((_WORD *)v16 + 56) = sub_4106F0(v6, (__int64)v16, 0);
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
            v14 = (void *)sub_4108A0(v6, (__int64)v14, v15);
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
    sub_410A30(v3);
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
  sub_410A80((__int64)v1 + 96);
  v7 = (void *)*((_QWORD *)v1 + 10);
  if ( v7 )
    sub_40BB00(v7);
  v8 = (void *)*((_QWORD *)v1 + 11);
  if ( *((_DWORD *)v1 + 18) & 0x102 )
  {
    if ( v8 )
      sub_40BB00(v8);
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
    *(_WORD *)(v1 + 112) = sub_4106F0(a1, v1, 0);
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
    v29 = sub_4106F0(a1, v1, 1);
    *(_WORD *)(v1 + 112) = v29;
    if ( v29 == 1 )
    {
      v40 = *(_DWORD *)(a1 + 72);
      if ( !(v40 & 4) )
      {
        v43 = sub_410DF0(*(_DWORD *)(a1 + 44), v40, ".");
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
      && (unsigned int)sub_410BE0(*(_QWORD *)(v7 + 8)) == 2 )
    {
      v24 = *(_WORD *)(v7 + 112);
      goto LABEL_52;
    }
    v24 = sub_4106F0(v4, v7, 0);
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
      if ( !(unsigned __int8)sub_411010(*(_DWORD *)(v4 + 72), (__int64 *)(v4 + 88), v7) )
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
        sub_410A30(v14);
        *(_QWORD *)(v4 + 8) = 0LL;
      }
      v15 = *(_DWORD *)(v4 + 72);
      *(_WORD *)(v1 + 112) = 6;
      sub_4110C0(v15, (__int64 *)(v4 + 88), v1);
      return v1;
    }
    v11 = *(void **)(a1 + 8);
    if ( v11 )
    {
      if ( !(BYTE1(v2) & 0x20) )
      {
        if ( (unsigned int)sub_410E40(v4, v1, -1, *(const char **)(v1 + 48)) )
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
      sub_410A30(v11);
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    v7 = sub_411160((__int64 *)v4, 3);
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
      sub_4110C0(v31, (__int64 *)(v4 + 88), v1);
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
        v7 = sub_411160((__int64 *)a1, 3);
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
                sub_410C50(v4, v33, 1);
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
          else if ( !(v8 & 1) && (unsigned int)sub_410E40(a1, *(_QWORD *)(v7 + 8), -1, (const char *)&unk_415FD6) )
          {
            goto LABEL_81;
          }
        }
        else if ( (unsigned int)sub_410CC0(a1) )
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
            sub_4110C0(v9, (__int64 *)(v4 + 88), v7);
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
      if ( !(unsigned int)sub_410CC0(a1) )
      {
        v16 = *(void **)(a1 + 88);
        if ( *(_DWORD *)(v4 + 72) & 0x102 )
        {
          if ( v16 )
            sub_40BB00(v16);
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
        sub_410D90(v23, (char ***)(v4 + 88));
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
    v39 = sub_4106F0(a1, v7, 1);
    *(_WORD *)(v7 + 112) = v39;
    if ( v39 == 1 )
    {
      v41 = *(_DWORD *)(a1 + 72);
      if ( !(v41 & 4) )
      {
        v42 = sub_410DF0(*(_DWORD *)(a1 + 44), v41, ".");
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
    *(_WORD *)(v1 + 112) = sub_4106F0(a1, v1, 0);
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
    v29 = sub_4106F0(a1, v1, 1);
    *(_WORD *)(v1 + 112) = v29;
    if ( v29 == 1 )
    {
      v40 = *(_DWORD *)(a1 + 72);
      if ( !(v40 & 4) )
      {
        v43 = sub_410DF0(*(_DWORD *)(a1 + 44), v40, ".");
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
      && (unsigned int)sub_410BE0(*(_QWORD *)(v7 + 8)) == 2 )
    {
      v24 = *(_WORD *)(v7 + 112);
      goto LABEL_52;
    }
    v24 = sub_4106F0(v4, v7, 0);
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
      if ( !(unsigned __int8)sub_411010(*(_DWORD *)(v4 + 72), (__int64 *)(v4 + 88), v7) )
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
        sub_410A30(v14);
        *(_QWORD *)(v4 + 8) = 0LL;
      }
      v15 = *(_DWORD *)(v4 + 72);
      *(_WORD *)(v1 + 112) = 6;
      sub_4110C0(v15, (__int64 *)(v4 + 88), v1);
      return v1;
    }
    v11 = *(void **)(a1 + 8);
    if ( v11 )
    {
      if ( !(BYTE1(v2) & 0x20) )
      {
        if ( (unsigned int)sub_410E40(v4, v1, -1, *(const char **)(v1 + 48)) )
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
      sub_410A30(v11);
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    v7 = sub_411160((__int64 *)v4, 3);
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
      sub_4110C0(v31, (__int64 *)(v4 + 88), v1);
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
        v7 = sub_411160((__int64 *)a1, 3);
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
                sub_410C50(v4, v33, 1);
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
          else if ( !(v8 & 1) && (unsigned int)sub_410E40(a1, *(_QWORD *)(v7 + 8), -1, (const char *)&unk_415FD6) )
          {
            goto LABEL_81;
          }
        }
        else if ( (unsigned int)sub_410CC0(a1) )
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
            sub_4110C0(v9, (__int64 *)(v4 + 88), v7);
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
      if ( !(unsigned int)sub_410CC0(a1) )
      {
        v16 = *(void **)(a1 + 88);
        if ( *(_DWORD *)(v4 + 72) & 0x102 )
        {
          if ( v16 )
            sub_40BB00(v16);
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
        sub_410D90(v23, (char ***)(v4 + 88));
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
    v39 = sub_4106F0(a1, v7, 1);
    *(_WORD *)(v7 + 112) = v39;
    if ( v39 == 1 )
    {
      v41 = *(_DWORD *)(a1 + 72);
      if ( !(v41 & 4) )
      {
        v42 = sub_410DF0(*(_DWORD *)(a1 + 44), v41, ".");
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
      sub_410A30(v8);
    v9 = 1;
    if ( a2 == 0x2000 )
    {
      *(_DWORD *)(v2 + 72) |= 0x2000u;
      v9 = 2;
    }
    if ( *(_QWORD *)(v5 + 88) || **(_BYTE **)(v5 + 48) == 47 || (v10 = *(_DWORD *)(v2 + 72), v10 & 4) )
    {
      result = sub_411160((__int64 *)v2, v9);
      *(_QWORD *)(v2 + 8) = result;
      return result;
    }
    v11 = sub_410DF0(*(_DWORD *)(v2 + 44), v10, ".");
    if ( v11 < 0 )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      result = 0LL;
    }
    else
    {
      *(_QWORD *)(v2 + 8) = sub_411160((__int64 *)v2, v9);
      if ( *(_BYTE *)(v2 + 73) & 2 )
      {
        sub_410C50(v2, v11, 1);
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

__int64 __fastcall sub_412940(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_412A20(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_413040(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_412940(a2, a7);
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
        sub_412940((__int64)v11, a7);
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
            v40 = sub_412A20(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_412A20(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_412A20(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_413610(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_61DAC0 = dword_61D47C;
  dword_61DAC4 = dword_61D478;
  result = sub_413040(a1, a2, a3, a4, a5, a6, (__int64)&dword_61DAC0, a7);
  dword_61D47C = dword_61DAC0;
  filename = (char *)qword_61DAD0;
  dword_61D474 = dword_61DAC8;
  return result;
}

__int64 __fastcall sub_413690(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_413610(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_413710(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_413CB0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_413790(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  *a4 = a3;
  return 0LL;
}

int __fastcall sub_4137A0(const char *a1, int a2, __mode_t a3)
{
  int result; // eax@2

  if ( a2 == -1 )
    result = chmod(a1, a3);
  else
    result = fchmod(a2, a3);
  return result;
}

__int64 __fastcall sub_4137C0(__mode_t *a1, const char *a2, int a3)
{
  return (unsigned int)-(sub_4137A0(a2, a3, *a1) != 0);
}

noreturn void  sub_4137F0()
{
  sub_4036B0(1);
}

signed __int64 __fastcall sub_413800(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_413920(char *a1, char *a2, __int64 a3)
{
  char *v3; // rbx@2
  _BYTE *v4; // rbp@3
  _BYTE *v5; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_40DFB0(1LL, a1);
  v5 = sub_40DCA0(0LL, 8, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_4139A0(char **a1, char *a2, size_t a3)
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
      v11 = sub_40DFD0(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v12 = sub_40DFD0(i);
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

__int64 __fastcall sub_413AC0(char *a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(char **, char *))
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
  result = sub_413800(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_413920(a1, (char *)a2, result);
    sub_4139A0(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_413B80(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_414FE0(stream);
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

void __fastcall sub_413BE0(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 9827862;
}

signed __int64 __fastcall sub_413BF0(__int64 a1, __int64 a2)
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

int __fastcall sub_413C70(struct timespec *tp)
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

bool __fastcall sub_413CB0(int a1)
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

unsigned __int64 __fastcall sub_413D10(_BYTE *a1, unsigned __int64 a2)
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

void __fastcall sub_413D50(__int64 a1, int a2)
{
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = a2;
}

__int64 __fastcall sub_413D70(__int64 a1)
{
  return *(_BYTE *)(a1 + 28);
}

__int64 __fastcall sub_413D80(__int64 a1, int a2)
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

__int64 __fastcall sub_413DC0(__int64 a1)
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

__int64 __fastcall sub_413DC0(__int64 a1)
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

const char *sub_413E10()
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
                sub_414FE0(v61);
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
            sub_414FE0(v40);
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

__int64 __fastcall sub_414380(int a1, const char *a2, char a3, __int64 a4)
{
  __int64 v4; // rcx@1
  int v5; // eax@3
  __int64 v7; // [sp+38h] [bp-20h]@1

  v7 = a4;
  v4 = 0LL;
  if ( a3 & 0x40 )
    v4 = (unsigned int)v7;
  v5 = openat(a1, a2, a3, v4);
  return sub_40EAF0(v5);
}

_QWORD *__fastcall sub_414400(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  __int64 v3; // rbx@1
  _QWORD *result; // rax@1

  LODWORD(v2) = sub_414620();
  v3 = v2;
  result = 0LL;
  if ( v3 )
  {
    result = sub_4100E0(0x18uLL, a2);
    *result = v3;
    result[2] = 0LL;
    result[1] = 0LL;
  }
  return result;
}

unsigned __int64 __fastcall sub_414440(__int64 a1, unsigned __int64 a2)
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
      sub_414930(v4, &v13, v9);
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

__int64 __fastcall sub_414560(void *ptr)
{
  unsigned int v1; // er12@1
  int *v2; // rax@1
  int v3; // er13@1
  int *v4; // rbp@1

  v1 = sub_414A90(*(void **)ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
  *v4 = v3;
  return v1;
}

noreturn void __fastcall  sub_4145C0(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

  if ( a1 )
  {
    v1 = sub_40DFD0(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

noreturn void __fastcall  sub_4145C0(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

  if ( a1 )
  {
    v1 = sub_40DFD0(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

__m128i *__fastcall sub_414620(signed __int64 a1, unsigned __int64 a2)
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
    v6 = (__m128i *)sub_4100E0(0x1038uLL, 0LL);
    v6->m128i_i64[0] = 0LL;
    v6->m128i_i64[1] = (__int64)sub_4145C0;
    v6[1].m128i_i64[0] = 0LL;
    return v6;
  }
  if ( !a1 )
  {
    v8 = (__m128i *)sub_4100E0(0x1038uLL, a2);
    v8->m128i_i64[0] = 0LL;
    v6 = v8;
    v9 = (signed __int64)&v8[2];
    v8->m128i_i64[1] = (__int64)sub_4145C0;
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
    sub_414D90(v9);
    return v6;
  }
  LODWORD(v2) = sub_415060(a1, "rb");
  v3 = v2;
  if ( v2 )
  {
    v4 = sub_4100E0(0x1038uLL, (__int64)"rb");
    v5 = 4096LL;
    *(_QWORD *)v4 = v3;
    if ( a2 <= 0x1000 )
      v5 = a2;
    *((_QWORD *)v4 + 1) = sub_4145C0;
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

int __fastcall sub_414930(__int64 a1, char *a2, size_t a3)
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
        sub_414AE0(v13, v12);
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
          sub_414AE0(v13, v12);
          goto LABEL_15;
        }
        v15 = v4;
        v4 += 2048;
        LODWORD(v10) = sub_414AE0(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return v10;
}

__int64 __fastcall sub_414A90(void *ptr)
{
  FILE *v1; // rbp@1
  __int64 result; // rax@2

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_414FE0(v1);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_414AE0(__int64 a1, __int64 a2)
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

unsigned __int64 __fastcall sub_414D90(__int64 a1)
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

__int64 __fastcall sub_414FD0(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return sub_410460(a1, 0, 3LL, a4);
}

int __fastcall sub_414FE0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_4105A0(stream) )
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

FILE *__fastcall sub_415060(const char *a1, const char *a2)
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
      v8 = sub_414FD0(v4, (__int64)a2, v5, v6);
      if ( v8 < 0 )
      {
        v12 = __errno_location();
        v13 = v3;
        v3 = 0LL;
        v14 = *v12;
        v15 = v12;
        sub_414FE0(v13);
        *v15 = v14;
      }
      else if ( sub_414FE0(v3) || (v3 = fdopen(v8, a2)) == 0LL )
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_415170(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_61D3E8 )
    v1 = unk_61D3E8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_415188(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_61CE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
