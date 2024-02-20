__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  const char *v3; // r15@1
  signed int v4; // er14@1
  char v5; // r13@1
  signed __int64 v6; // r12@1
  signed int v7; // ebp@1
  const char *v8; // rbx@1
  const char *v9; // rsi@2
  int v10; // eax@2
  bool v11; // zf@37
  signed int v12; // eax@37
  char *v13; // r14@37
  int v14; // edx@37
  char *v15; // rsi@39
  __int64 v16; // rax@40
  struct group *v18; // rax@51
  __int64 v19; // rax@54
  __int64 v20; // rax@55
  __int64 v21; // rbp@55
  int *v22; // rax@55
  __int64 v23; // rax@58
  __int64 v24; // rbx@58
  char *v25; // rax@58
  __int64 v26; // rax@59
  __int64 v27; // rbp@59
  char *v28; // rax@61
  char *v29; // rax@62
  __int64 v30; // rax@63
  __int64 v31; // rbx@63
  char *v32; // rax@63
  int v33; // [sp+0h] [bp-F8h]@1
  char v34; // [sp+4h] [bp-F4h]@14
  __int64 v35; // [sp+8h] [bp-F0h]@54
  bool v36; // [sp+10h] [bp-E8h]@37
  char v37; // [sp+11h] [bp-E7h]@35
  __int64 v38; // [sp+20h] [bp-D8h]@40
  struct stat stat_buf; // [sp+30h] [bp-C8h]@39

  v3 = (const char *)1;
  v4 = -1;
  v5 = 0;
  v6 = (signed int)a1;
  v7 = 16;
  v8 = (const char *)a2;
  sub_403B60(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40C0F0(
    sub_403A70,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  sub_402B00(&v33);
  while ( 1 )
  {
    v9 = v8;
    v10 = sub_409760(a1, v8, "HLPRcfhv", &off_40CB40, 0LL);
    if ( v10 == -1 )
      break;
    if ( v10 == 99 )
    {
      v33 = 1;
    }
    else if ( v10 <= 99 )
    {
      if ( v10 == 72 )
      {
        v7 = 17;
      }
      else
      {
        if ( v10 <= 72 )
        {
          if ( v10 == -131 )
          {
            sub_405C50((char)stdout);
            exit(0);
          }
          if ( v10 == -130 )
            sub_402660(0);
LABEL_16:
          sub_402660(1);
        }
        if ( v10 == 80 )
        {
          v7 = 16;
        }
        else if ( v10 == 82 )
        {
          v34 = 1;
        }
        else
        {
          if ( v10 != 76 )
            goto LABEL_16;
          v7 = 2;
        }
      }
    }
    else if ( v10 == 128 )
    {
      v4 = 1;
    }
    else if ( v10 > 128 )
    {
      if ( v10 == 130 )
      {
        v5 = 1;
      }
      else if ( v10 >= 130 )
      {
        if ( v10 != 131 )
          goto LABEL_16;
        filename = (char *)qword_611530;
      }
      else
      {
        v5 = 0;
      }
    }
    else if ( v10 == 104 )
    {
      v4 = 0;
    }
    else if ( v10 == 118 )
    {
      v33 = 0;
    }
    else
    {
      if ( v10 != 102 )
        goto LABEL_16;
      v37 = 1;
    }
  }
  if ( v34 && v7 == 16 )
  {
    if ( v4 == 1 )
    {
      v29 = dcgettext(0LL, "-R --dereference requires either -H or -L", 5);
      v9 = 0LL;
      error(1, 0, v29, *(_QWORD *)&v33);
LABEL_63:
      LODWORD(v30) = sub_405780(*(_QWORD *)&v8[8 * v6 - 8], v9);
      v31 = v30;
      v32 = dcgettext(0LL, "missing operand after %s", 5);
      error(0, 0, v32, v31, *(_QWORD *)&v33);
      goto LABEL_16;
    }
    v4 = 0;
  }
  v11 = v4 == 0;
  v12 = dword_61131C;
  v13 = filename;
  v36 = !v11;
  v14 = a1 - dword_61131C;
  if ( filename )
  {
    if ( v14 > 0 )
    {
      v15 = filename;
      if ( !__xstat(1, filename, &stat_buf) )
      {
        v6 = stat_buf.st_gid;
        LODWORD(v16) = sub_402B40(stat_buf.st_gid, v15);
        v38 = v16;
        goto LABEL_41;
      }
LABEL_59:
      LODWORD(v26) = sub_405530(4LL, v13);
      v27 = v26;
      v8 = dcgettext(0LL, "failed to get attributes of %s", 5);
      v9 = (const char *)(unsigned int)*__errno_location();
      error(1, (int)v9, v8, v27, *(_QWORD *)&v33);
    }
LABEL_60:
    if ( v12 >= (signed int)v6 )
    {
      v28 = dcgettext(0LL, "missing operand", 5);
      error(0, 0, v28, *(_QWORD *)&v33);
      goto LABEL_16;
    }
    goto LABEL_63;
  }
  if ( v14 <= 1 )
    goto LABEL_60;
  v3 = *(const char **)&v8[8 * dword_61131C++];
  if ( *v3 )
    v13 = (char *)v3;
  v6 = 0xFFFFFFFFLL;
  v38 = (__int64)v13;
  if ( *v3 )
  {
    v18 = getgrnam(v3);
    if ( !v18 )
      goto LABEL_56;
    v6 = v18->gr_gid;
    goto LABEL_53;
  }
LABEL_41:
  while ( v34 )
  {
    if ( !v5 )
      break;
    LODWORD(v19) = sub_4057A0(&unk_611360);
    v35 = v19;
    if ( v19 )
      break;
    LODWORD(v20) = sub_405530(4LL, "/");
    v21 = v20;
    v8 = dcgettext(0LL, "failed to get attributes of %s", 5);
    v22 = __errno_location();
    error(1, *v22, v8, v21, *(_QWORD *)&v33, v35, *(_QWORD *)&v36);
LABEL_56:
    if ( (unsigned int)sub_4060A0((char *)v3) || (v6 = LODWORD(stat_buf.st_dev), stat_buf.st_dev > 0xFFFFFFFF) )
    {
      LODWORD(v23) = sub_405780(v3, 0LL);
      v24 = v23;
      v25 = dcgettext(0LL, "invalid group: %s", 5);
      error(1, 0, v25, v24, *(_QWORD *)&v33);
      goto LABEL_59;
    }
LABEL_53:
    endgrent();
  }
  return (unsigned __int8)((unsigned __int64)sub_403930((__int64)&v8[8 * dword_61131C]) ^ 1);
}

int sub_4025AB()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_4025CA()
{
  return 0;
}

int sub_402601()
{
  int result; // eax@4

  if ( !byte_611348 )
  {
    while ( qword_611350 < (unsigned __int64)(((&unk_610E48 - (_UNKNOWN *)&qword_610E40) >> 3) - 1) )
      (*(&qword_610E40 + ++qword_611350))();
    result = sub_4025AB();
    byte_611348 = 1;
  }
  return result;
}

int sub_402658()
{
  return sub_4025CA();
}

void __fastcall __noreturn sub_402660(int status)
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
  FILE *v23; // rbp@4
  char *v24; // rax@4
  __int64 v25; // rbp@4
  char *v26; // rax@4
  __int64 *v27; // rax@4
  _BYTE *v28; // rdi@5
  bool v29; // cf@5
  bool v30; // zf@5
  const char *v31; // rsi@6
  signed __int64 v32; // rcx@6
  char *v33; // rbp@10
  char *v34; // rax@11
  char *v35; // rax@11
  char *v36; // r12@13
  char *v37; // rax@13
  char *v38; // rax@15
  char *v39; // rax@16
  char *v40; // rax@16
  char *v41; // rax@18
  char *v42; // rax@20
  __int64 v43; // rcx@20
  const char *v44; // [sp+0h] [bp-88h]@4
  const char *v45; // [sp+8h] [bp-80h]@4
  const char *v46; // [sp+10h] [bp-78h]@4
  const char *v47; // [sp+18h] [bp-70h]@4
  const char *v48; // [sp+20h] [bp-68h]@4
  const char *v49; // [sp+28h] [bp-60h]@4
  const char *v50; // [sp+30h] [bp-58h]@4
  const char *v51; // [sp+38h] [bp-50h]@4
  const char *v52; // [sp+40h] [bp-48h]@4
  const char *v53; // [sp+48h] [bp-40h]@4
  const char *v54; // [sp+50h] [bp-38h]@4
  const char *v55; // [sp+58h] [bp-30h]@4
  __int64 v56; // [sp+60h] [bp-28h]@4
  __int64 v57; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_611388;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... GROUP FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n", 5);
  __printf_chk(1LL, v4, v2, v2);
  v5 = stdout;
  v6 = dcgettext(
         0LL,
         "Change the group of each FILE to GROUP.\n"
         "With --reference, change the group of each FILE to that of RFILE.\n"
         "\n",
         5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(
         0LL,
         "  -c, --changes          like verbose but report only when a change is made\n"
         "  -f, --silent, --quiet  suppress most error messages\n"
         "  -v, --verbose          output a diagnostic for every file processed\n",
         5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "      --dereference      affect the referent of each symbolic link (this is\n"
          "                         the default), rather than the symbolic link itself\n"
          "  -h, --no-dereference   affect symbolic links instead of any referenced file\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "                         (useful only on systems that can change the\n"
          "                         ownership of a symlink)\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "      --no-preserve-root  do not treat '/' specially (the default)\n"
          "      --preserve-root    fail to operate recursively on '/'\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "      --reference=RFILE  use RFILE's group rather than specifying a\n                         GROUP value\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(0LL, "  -R, --recursive        operate on files and directories recursively\n", 5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "\n"
          "The following options modify how a hierarchy is traversed when the -R\n"
          "option is also specified.  If more than one is specified, only the final\n"
          "one takes effect.\n"
          "\n"
          "  -H                     if a command line argument is a symbolic link\n"
          "                         to a directory, traverse it\n"
          "  -L                     traverse every symbolic link to a directory\n"
          "                         encountered\n"
          "  -P                     do not traverse any symbolic links (default)\n"
          "\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v24, v23);
  v25 = qword_611388;
  v26 = dcgettext(
          0LL,
          "\n"
          "Examples:\n"
          "  %s staff /u      Change the group of /u to \"staff\".\n"
          "  %s -hR staff /u  Change the group of /u and subfiles to \"staff\".\n",
          5);
  __printf_chk(1LL, v26, v25, v25);
  v44 = "[";
  v27 = (__int64 *)&v44;
  v45 = "test invocation";
  v46 = "coreutils";
  v47 = "Multi-call invocation";
  v48 = "sha224sum";
  v49 = "sha2 utilities";
  v50 = "sha256sum";
  v51 = "sha2 utilities";
  v52 = "sha384sum";
  v53 = "sha2 utilities";
  v54 = "sha512sum";
  v55 = "sha2 utilities";
  v56 = 0LL;
  v57 = 0LL;
  do
  {
    v27 += 2;
    v28 = (_BYTE *)*v27;
    v29 = 0;
    v30 = *v27 == 0;
    if ( !*v27 )
      break;
    v31 = "chgrp";
    v32 = 6LL;
    do
    {
      if ( !v32 )
        break;
      v29 = (const unsigned __int8)*v31 < *v28;
      v30 = *v31++ == *v28++;
      --v32;
    }
    while ( v30 );
  }
  while ( (!v29 && !v30) != v29 );
  v33 = (char *)v27[1];
  if ( v33 )
  {
    v34 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v34, &unk_40C1C0, "https://www.gnu.org/software/coreutils/");
    v35 = setlocale(5, 0LL);
    if ( !v35 || !strncmp(v35, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v39 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v39, &unk_40C1C0, "https://www.gnu.org/software/coreutils/");
    v40 = setlocale(5, 0LL);
    if ( !v40 || !strncmp(v40, "en_", 3uLL) )
    {
      v33 = "chgrp";
      v41 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v36 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v41, "https://www.gnu.org/software/coreutils/", "chgrp");
LABEL_15:
      v38 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v38, v33, v36);
LABEL_3:
      exit(v1);
    }
    v33 = "chgrp";
  }
  v42 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v42, "chgrp", v43);
LABEL_13:
  v36 = "Multi-call invocation" + 10;
  v37 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v37, "https://www.gnu.org/software/coreutils/", "chgrp");
  if ( v33 != "chgrp" )
    v36 = "";
  goto LABEL_15;
}

int __fastcall sub_402A80(char *src, char *a2)
{
  size_t v2; // r12@3
  size_t v3; // rax@3
  char *v4; // rax@3
  int v5; // er12@3
  char *v6; // rax@3

  if ( src )
  {
    if ( a2 )
    {
      v2 = strlen(src);
      v3 = strlen(a2);
      LODWORD(v4) = sub_405D90(v2 + v3 + 2);
      v5 = (signed int)v4;
      v6 = stpcpy(v4, src);
      *v6 = 58;
      strcpy(v6 + 1, a2);
      return v5;
    }
  }
  else
  {
    if ( !a2 )
      return 0;
    src = a2;
  }
  return sub_405FC0(src);
}

signed __int64 __fastcall sub_402B00(__int64 a1)
{
  signed __int64 result; // rax@1

  result = 1LL;
  *(_DWORD *)a1 = 2;
  *(_BYTE *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}

int __fastcall sub_402B40(__gid_t a1)
{
  struct group *v1; // rax@1
  int result; // eax@2
  __int64 v3; // rax@3
  __int64 v4; // [sp+0h] [bp-28h]@3

  v1 = getgrgid(a1);
  if ( v1 )
  {
    result = sub_405FC0(v1->gr_name);
  }
  else
  {
    LODWORD(v3) = sub_403B10(a1, &v4);
    result = sub_405FC0(v3);
  }
  return result;
}

int __fastcall sub_402B80(__uid_t a1)
{
  struct passwd *v1; // rax@1
  int result; // eax@2
  __int64 v3; // rax@3
  __int64 v4; // [sp+0h] [bp-28h]@3

  v1 = getpwuid(a1);
  if ( v1 )
  {
    result = sub_405FC0(v1->pw_name);
  }
  else
  {
    LODWORD(v3) = sub_403B10(a1, &v4);
    result = sub_405FC0(v3);
  }
  return result;
}

__int64 __usercall sub_402BC0@<rax>(__uid_t a1@<edx>, __gid_t a2@<ecx>, signed int a3@<ebp>, __int64 a4@<rdi>, __int64 a5@<rsi>, int a6@<r8d>, int a7@<r9d>, __int64 a8)
{
  __uid_t v8; // er15@1
  int v9; // er10@1
  __int64 v10; // r13@1
  __int64 v11; // r12@1
  int v12; // edx@1
  int v13; // ST20_4@2
  int v14; // ST10_4@2
  int v15; // ST18_4@2
  char v16; // al@2
  struct stat *v17; // r14@3
  int v18; // er11@3
  char v19; // al@3
  unsigned int v20; // eax@6
  __int64 v21; // rax@9
  int v22; // eax@11
  __int64 v23; // rdx@16
  int v24; // ebp@19
  int v25; // eax@20
  bool v26; // bp@20
  __uid_t v27; // edi@25
  __gid_t v28; // er15@26
  char *v29; // rax@27
  char *v30; // rax@27
  char *v31; // r15@27
  char *v32; // r14@27
  void *v33; // rax@28
  char *v34; // rsi@28
  void *v35; // rax@31
  char *v36; // r15@33
  __int64 v37; // rax@34
  __int64 v39; // rax@40
  unsigned __int64 v40; // rax@42
  bool v41; // cf@42
  bool v42; // zf@42
  _BYTE *v43; // rsi@43
  char *v44; // rdi@43
  signed __int64 v45; // rcx@43
  __int64 v46; // rax@47
  __int64 v47; // rbx@47
  char *v48; // rax@47
  char *v49; // rax@48
  int v50; // eax@50
  __int64 v51; // rax@56
  const char *v52; // rsi@56
  __int64 v53; // r15@56
  __int64 v54; // rax@58
  char *v55; // rax@59
  int v56; // esi@59
  __int64 v57; // rcx@59
  const char *v58; // rdx@59
  __int64 v59; // rax@65
  __dev_t v60; // rax@67
  bool v61; // cf@67
  bool v62; // zf@67
  _BYTE *v63; // rsi@68
  char *v64; // rdi@68
  signed __int64 v65; // rcx@68
  __int64 v66; // rax@72
  __int64 v67; // rbx@72
  char *v68; // rax@72
  char *v69; // rax@73
  int v70; // eax@75
  int v71; // eax@77
  int v72; // er10@77
  int v73; // er9@77
  int v74; // ecx@77
  int *v75; // r8@78
  int v76; // eax@80
  void *v77; // rax@92
  int v78; // eax@99
  int v79; // ecx@99
  int *v80; // rax@101
  int *v81; // rbp@101
  int v82; // er15@101
  int v83; // eax@101
  __int64 v84; // rax@106
  char *v85; // r15@107
  int *v86; // rax@108
  __int64 v87; // rax@123
  __int64 v88; // rbx@123
  char *v89; // rax@123
  int v90; // ST10_4@124
  int *v91; // rbp@124
  int v92; // ST08_4@124
  __int64 v93; // rax@131
  __dev_t v94; // rcx@133
  __dev_t v95; // rax@135
  char *v96; // rax@140
  char *v97; // rax@140
  __int64 v98; // rax@140
  __int64 v99; // r14@140
  char *v100; // rax@140
  __int64 v101; // rcx@140
  const char *v102; // rsi@141
  void *v103; // rax@142
  int v104; // eax@144
  int v105; // ST2C_4@147
  int v106; // ST28_4@147
  int v107; // eax@147
  int v108; // ST18_4@154
  int *v109; // rbp@154
  int v110; // ST10_4@154
  __int64 v111; // rax@160
  __int64 v112; // rbp@160
  __int64 v113; // rax@160
  __int64 v114; // rbx@160
  char *v115; // rax@160
  __int64 v116; // rax@161
  __int64 v117; // r14@161
  char *v118; // r15@161
  int *v119; // rax@161
  __int64 v120; // rax@163
  __int64 v121; // rbp@163
  __int64 v122; // rax@163
  __int64 v123; // rbx@163
  char *v124; // rax@163
  int v125; // eax@166
  _BYTE *v126; // [sp+0h] [bp-188h]@1
  __gid_t group; // [sp+8h] [bp-180h]@1
  char *groupa; // [sp+8h] [bp-180h]@27
  __int64 groupb; // [sp+8h] [bp-180h]@106
  char *filename; // [sp+10h] [bp-178h]@3
  char *filenamea; // [sp+10h] [bp-178h]@27
  int filenameb; // [sp+10h] [bp-178h]@99
  void *v133; // [sp+18h] [bp-170h]@30
  signed int v134; // [sp+18h] [bp-170h]@76
  int v135; // [sp+18h] [bp-170h]@99
  int v136; // [sp+18h] [bp-170h]@117
  void *ptr; // [sp+20h] [bp-168h]@31
  int ptra; // [sp+20h] [bp-168h]@77
  int ptrb; // [sp+20h] [bp-168h]@99
  int ptrc; // [sp+20h] [bp-168h]@117
  int *ptrd; // [sp+20h] [bp-168h]@147
  signed int v142; // [sp+28h] [bp-160h]@13
  int v143; // [sp+28h] [bp-160h]@77
  int v144; // [sp+28h] [bp-160h]@117
  struct stat v145; // [sp+30h] [bp-158h]@117
  struct stat stat_buf; // [sp+C0h] [bp-C8h]@99

  v8 = a1;
  v9 = a6;
  v10 = a4;
  v11 = a5;
  v12 = *(_WORD *)(a5 + 112);
  group = a2;
  v126 = *(_BYTE **)(a5 + 56);
  switch ( (_WORD)v12 )
  {
    case 2:
      v13 = a7;
      v14 = *(_WORD *)(a5 + 112);
      v15 = a6;
      v16 = sub_406070();
      v12 = v14;
      v9 = v15;
      a7 = v13;
      if ( !v16 )
        goto LABEL_3;
      a3 = 0;
      LODWORD(v87) = sub_405600(0LL, 3LL, v126);
      v88 = v87;
      v89 = dcgettext(
              0LL,
              "WARNING: Circular directory structure.\n"
              "This almost certainly means that you have a corrupted file system.\n"
              "NOTIFY YOUR SYSTEM MANAGER.\n"
              "The following directory is part of the cycle:\n"
              "  %s\n",
              5);
      error(0, 0, v89, v88, v126);
      return (unsigned int)a3;
    default:
      goto LABEL_3;
    case 1:
      a3 = *(_BYTE *)(a8 + 4);
      if ( !(_BYTE)a3 )
        goto LABEL_3;
      v39 = *(_QWORD *)(a8 + 8);
      if ( v39 )
      {
        if ( *(_QWORD *)(a5 + 128) == *(_QWORD *)v39 )
        {
          v40 = *(_QWORD *)(v39 + 8);
          v41 = *(_QWORD *)(a5 + 120) < v40;
          v42 = *(_QWORD *)(a5 + 120) == v40;
          if ( *(_QWORD *)(a5 + 120) == v40 )
          {
            v43 = *(_BYTE **)(a5 + 56);
            v44 = "/";
            v45 = 2LL;
            do
            {
              if ( !v45 )
                break;
              v41 = *v43 < (unsigned __int8)*v44;
              v42 = *v43++ == *v44++;
              --v45;
            }
            while ( v42 );
            if ( (!v41 && !v42) == v41 )
            {
              LODWORD(v46) = sub_405530(4LL, v126);
              v47 = v46;
              v48 = dcgettext(0LL, "it is dangerous to operate recursively on %s", 5);
              error(0, 0, v48, v47, v126);
            }
            else
            {
              LODWORD(v120) = sub_405450(1LL, 4LL, "/");
              v121 = v120;
              LODWORD(v122) = sub_405450(0LL, 4LL, v126);
              v123 = v122;
              v124 = dcgettext(0LL, "it is dangerous to operate recursively on %s (same as %s)", 5);
              error(0, 0, v124, v123, v121, v126);
            }
            a3 = 0;
            v49 = dcgettext(0LL, "use --no-preserve-root to override this failsafe", 5);
            error(0, 0, v49);
            fts_set(v10, v11, 4LL);
            fts_read(v10);
          }
        }
      }
      return (unsigned int)a3;
    case 7:
      a3 = *(_BYTE *)(a8 + 17);
      if ( (_BYTE)a3 )
        goto LABEL_50;
      LODWORD(v93) = sub_405600(0LL, 3LL, v126);
      v56 = *(_DWORD *)(a5 + 64);
      v58 = "invalid group: %s" + 15;
      v57 = v93;
      goto LABEL_60;
    case 0xA:
      if ( !*(_QWORD *)(a5 + 88) && !*(_QWORD *)(a5 + 32) )
      {
        *(_QWORD *)(a5 + 32) = 1LL;
        fts_set(a4, a5, 1LL);
LABEL_63:
        return 1;
      }
      a3 = *(_BYTE *)(a8 + 17);
      if ( (_BYTE)a3 )
      {
LABEL_50:
        v50 = *(_DWORD *)a8;
        a3 = 0;
        if ( *(_DWORD *)a8 == 2 )
          goto LABEL_36;
      }
      else
      {
        LODWORD(v51) = sub_405530(4LL, v126);
        v52 = "cannot access %s";
        v53 = v51;
LABEL_59:
        v55 = dcgettext(0LL, v52, 5);
        v56 = *(_DWORD *)(v11 + 64);
        v57 = v53;
        v58 = v55;
LABEL_60:
        error(0, v56, v58, v57, v126);
        v50 = *(_DWORD *)a8;
        if ( *(_DWORD *)a8 == 2 )
          goto LABEL_36;
      }
      if ( v50 )
        goto LABEL_36;
      v31 = *(char **)(a8 + 32);
      v32 = *(char **)(a8 + 24);
      a3 = 0;
      filenamea = 0LL;
      groupa = 0LL;
      v142 = 3;
      goto LABEL_28;
    case 4:
      a3 = *(_BYTE *)(a8 + 17);
      if ( (_BYTE)a3 )
        goto LABEL_50;
      LODWORD(v54) = sub_405530(4LL, v126);
      v52 = "cannot read directory %s";
      v53 = v54;
      goto LABEL_59;
    case 6:
      if ( !*(_BYTE *)(a8 + 4) )
        goto LABEL_63;
LABEL_3:
      v17 = (struct stat *)(a5 + 120);
      v18 = a7 & v9;
      filename = *(char **)(a5 + 48);
      v19 = *(_BYTE *)(a8 + 16);
      if ( (a7 & v9) != -1 || *(_DWORD *)a8 != 2 || *(_QWORD *)(a8 + 8) )
      {
        if ( !v19 )
          goto LABEL_6;
      }
      else if ( !v19 )
      {
        if ( (v12 & 0xFFFD) == 4 || (unsigned __int16)(v12 - 1) <= 1u )
        {
          v24 = *(_DWORD *)(a4 + 44);
          goto LABEL_20;
        }
LABEL_19:
        v24 = *(_DWORD *)(a4 + 44);
        if ( !v19 )
        {
LABEL_20:
          v25 = sub_4064D0(v24, filename, v8, group);
          v26 = v25 == 0;
          if ( v25 && *__errno_location() == 95 )
          {
            a3 = 1;
            if ( *(_DWORD *)a8 != 2 && !*(_DWORD *)a8 )
            {
              LODWORD(v96) = sub_402B80(v17->st_uid);
              filenamea = v96;
              LODWORD(v97) = sub_402B40(v17->st_gid);
              groupa = v97;
              LODWORD(v98) = sub_405530(4LL, v126);
              v99 = v98;
              v100 = dcgettext(0LL, "neither symbolic link %s nor referent has been changed\n", 5);
              __printf_chk(1LL, v100, v99, v101);
              goto LABEL_35;
            }
            goto LABEL_36;
          }
          goto LABEL_22;
        }
        if ( v18 != -1 )
        {
          v70 = v17->st_mode & 0xF000;
          if ( v70 == 0x8000 )
          {
            v134 = 2304;
LABEL_77:
            v143 = a7;
            ptra = v9;
            v71 = __openat_2((unsigned int)v24, filename, (unsigned int)v134);
            v72 = ptra;
            v73 = v143;
            v74 = v71;
            if ( v71 < 0 )
            {
              v75 = __errno_location();
              if ( *v75 != 13 )
                goto LABEL_79;
              if ( (v17->st_mode & 0xF000) != 0x8000 )
              {
LABEL_115:
                v24 = *(_DWORD *)(a4 + 44);
                goto LABEL_116;
              }
              v105 = v143;
              v106 = ptra;
              ptrd = v75;
              v107 = __openat_2((unsigned int)v24, filename, v134 | 1u);
              v72 = v106;
              v74 = v107;
              v73 = v105;
              if ( v107 < 0 )
              {
                if ( *ptrd != 13 )
                  goto LABEL_79;
                goto LABEL_115;
              }
            }
            filenameb = v74;
            ptrb = v73;
            v135 = v72;
            v78 = __fxstat(1, v74, &stat_buf);
            v79 = filenameb;
            if ( v78 )
              goto LABEL_171;
            if ( v17->st_ino != stat_buf.st_ino || v17->st_dev != stat_buf.st_dev )
            {
              v80 = __errno_location();
              v81 = v80;
              v82 = *v80;
              close(filenameb);
              v83 = *(_DWORD *)a8;
              *v81 = v82;
              if ( v83 == 2 || v83 )
              {
                a3 = 0;
                goto LABEL_36;
              }
              a3 = 0;
LABEL_104:
              v142 = 3;
              goto LABEL_105;
            }
            if ( v135 != -1 && v135 != stat_buf.st_uid || ptrb != -1 && ptrb != stat_buf.st_gid )
            {
              v108 = filenameb;
              v109 = __errno_location();
              v110 = *v109;
              close(v108);
              *v109 = v110;
              goto LABEL_23;
            }
            v125 = fchown(filenameb, v8, group);
            v79 = filenameb;
            if ( v125 )
            {
LABEL_171:
              v90 = v79;
              v91 = __errno_location();
              v92 = *v91;
              close(v90);
              *v91 = v92;
            }
            else if ( !close(filenameb) )
            {
              goto LABEL_23;
            }
LABEL_79:
            a3 = *(_BYTE *)(a8 + 17);
            if ( (_BYTE)a3 )
            {
              v76 = *(_DWORD *)a8;
              a3 = 0;
              if ( *(_DWORD *)a8 == 2 )
                goto LABEL_36;
            }
            else
            {
              LODWORD(v84) = sub_405530(4LL, v126);
              groupb = v84;
              if ( v8 == -1 )
                v85 = dcgettext(0LL, "changing group of %s", 5);
              else
                v85 = dcgettext(0LL, "changing ownership of %s", 5);
              v86 = __errno_location();
              error(0, *v86, v85, groupb, v126);
              v76 = *(_DWORD *)a8;
              if ( *(_DWORD *)a8 == 2 )
                goto LABEL_36;
            }
            if ( v76 )
              goto LABEL_36;
            goto LABEL_104;
          }
          v134 = 67840;
          if ( v70 == 0x4000 )
            goto LABEL_77;
        }
LABEL_116:
        v26 = (unsigned int)sub_4064D0(v24, filename, v8, group) == 0;
LABEL_22:
        if ( v26 )
        {
LABEL_23:
          if ( *(_DWORD *)a8 != 2 )
          {
            if ( v8 != -1 )
            {
              v27 = v17->st_uid;
              if ( v27 != v8 )
              {
                v142 = 2;
                v28 = v17->st_gid;
                a3 = 1;
LABEL_27:
                LODWORD(v29) = sub_402B80(v27);
                filenamea = v29;
                LODWORD(v30) = sub_402B40(v28);
                v31 = *(char **)(a8 + 32);
                v32 = *(char **)(a8 + 24);
                groupa = v30;
LABEL_28:
                LODWORD(v33) = sub_402A80(v32, v31);
                v34 = 0LL;
                if ( v31 )
                  v34 = groupa;
                v133 = v33;
                if ( v32 )
                {
                  LODWORD(v35) = sub_402A80(filenamea, v34);
                  ptr = v35;
                  if ( v142 != 3 )
                  {
                    if ( v142 == 4 )
                      v36 = dcgettext(0LL, "ownership of %s retained as %s\n", 5);
                    else
                      v36 = dcgettext(0LL, "changed ownership of %s from %s to %s\n", 5);
LABEL_34:
                    LODWORD(v37) = sub_405530(4LL, v126);
                    __printf_chk(1LL, v36, v37, ptr);
                    free(ptr);
                    free(v133);
LABEL_35:
                    free(filenamea);
                    free(groupa);
                    goto LABEL_36;
                  }
                }
                else
                {
                  LODWORD(v77) = sub_402A80(0LL, v34);
                  ptr = v77;
                  if ( v142 != 3 )
                  {
                    if ( v142 == 4 )
                    {
                      if ( v31 )
                        v36 = dcgettext(0LL, "group of %s retained as %s\n", 5);
                      else
                        v36 = dcgettext(0LL, "ownership of %s retained\n", 5);
                    }
                    else if ( v31 )
                    {
                      v36 = dcgettext(0LL, "changed group of %s from %s to %s\n", 5);
                    }
                    else
                    {
                      v36 = dcgettext(0LL, "no change to ownership of %s\n", 5);
                    }
                    goto LABEL_34;
                  }
                }
                if ( ptr )
                {
                  if ( v32 )
                  {
                    v36 = dcgettext(0LL, "failed to change ownership of %s from %s to %s\n", 5);
                  }
                  else if ( v31 )
                  {
                    v36 = dcgettext(0LL, "failed to change group of %s from %s to %s\n", 5);
                  }
                  else
                  {
                    v36 = dcgettext(0LL, "failed to change ownership of %s\n", 5);
                  }
                }
                else
                {
                  v102 = "failed to change ownership of %s to %s\n";
                  if ( !v32 )
                  {
                    v102 = "failed to change group of %s to %s\n";
                    if ( !v31 )
                      v102 = "failed to change ownership of %s\n";
                  }
                  v36 = dcgettext(0LL, v102, 5);
                  v103 = v133;
                  v133 = 0LL;
                  ptr = v103;
                }
                goto LABEL_34;
              }
            }
            if ( group != -1 )
            {
              v28 = v17->st_gid;
              if ( v28 != group )
              {
                v27 = v17->st_uid;
                v142 = 2;
                a3 = 1;
                goto LABEL_27;
              }
            }
            if ( !*(_DWORD *)a8 )
            {
              v142 = 4;
              a3 = 1;
              goto LABEL_105;
            }
          }
          goto LABEL_111;
        }
        goto LABEL_79;
      }
      if ( (*(_DWORD *)(a5 + 144) & 0xF000) == 40960 )
      {
        v144 = a7;
        ptrc = v9;
        v136 = a7 & v9;
        if ( __fxstatat(1, *(_DWORD *)(a4 + 44), filename, &v145, 0) )
        {
          a3 = *(_BYTE *)(a8 + 17);
          if ( (_BYTE)a3 )
          {
            v104 = *(_DWORD *)a8;
            a3 = 0;
            if ( *(_DWORD *)a8 == 2 )
              goto LABEL_36;
          }
          else
          {
            LODWORD(v116) = sub_405530(4LL, v126);
            v117 = v116;
            v118 = dcgettext(0LL, "cannot dereference %s", 5);
            v119 = __errno_location();
            error(0, *v119, v118, v117, v126);
            v104 = *(_DWORD *)a8;
            if ( *(_DWORD *)a8 == 2 )
              goto LABEL_36;
          }
          if ( !v104 )
          {
            v17 = &v145;
            v142 = 3;
            goto LABEL_105;
          }
LABEL_36:
          if ( !*(_BYTE *)(a8 + 4) )
            fts_set(v10, v11, 4LL);
          return (unsigned int)a3;
        }
        v12 = *(_WORD *)(a5 + 112);
        v17 = &v145;
        v18 = v136;
        v9 = ptrc;
        a7 = v144;
      }
LABEL_6:
      v20 = v12 & 0xFFFFFFFD;
      LOBYTE(a3) = (v12 & 0xFFFD) == 4;
      LOBYTE(v20) = (unsigned __int16)(v12 - 1) <= 1u;
      a3 |= v20;
      if ( v9 == -1 || v17->st_uid == v9 )
      {
        if ( a7 == -1 )
        {
          if ( (_BYTE)a3 )
          {
            v59 = *(_QWORD *)(a8 + 8);
            if ( v59 )
            {
              if ( v17->st_ino == *(_QWORD *)v59 )
              {
                v60 = *(_QWORD *)(v59 + 8);
                v61 = v17->st_dev < v60;
                v62 = v17->st_dev == v60;
                if ( v17->st_dev == v60 )
                  goto LABEL_68;
              }
            }
          }
        }
        else
        {
          if ( (_BYTE)a3 )
          {
            v23 = *(_QWORD *)(a8 + 8);
            if ( v23 )
            {
              if ( v17->st_ino == *(_QWORD *)v23 )
              {
                v94 = *(_QWORD *)(v23 + 8);
                v61 = v17->st_dev < v94;
                v62 = v17->st_dev == v94;
                if ( v17->st_dev == v94 )
                  goto LABEL_68;
              }
            }
          }
          if ( v17->st_gid != a7 )
            goto LABEL_136;
        }
        v19 = *(_BYTE *)(a8 + 16);
        goto LABEL_19;
      }
      if ( !(_BYTE)a3 )
      {
        if ( *(_DWORD *)a8 == 2 || *(_DWORD *)a8 )
        {
LABEL_111:
          a3 = 1;
          goto LABEL_36;
        }
        a3 = 1;
        v142 = 4;
LABEL_105:
        v27 = v17->st_uid;
        v28 = v17->st_gid;
        goto LABEL_27;
      }
      v21 = *(_QWORD *)(a8 + 8);
      if ( !v21 || *(_QWORD *)v21 != v17->st_ino )
      {
        v22 = *(_DWORD *)a8;
        if ( *(_DWORD *)a8 == 2 )
          goto LABEL_36;
        goto LABEL_12;
      }
      v95 = *(_QWORD *)(v21 + 8);
      v61 = v17->st_dev < v95;
      v62 = v17->st_dev == v95;
      if ( v17->st_dev != v95 )
      {
LABEL_136:
        v22 = *(_DWORD *)a8;
        a3 = 1;
        if ( *(_DWORD *)a8 == 2 )
          goto LABEL_36;
LABEL_12:
        if ( v22 )
          goto LABEL_36;
        v142 = 4;
        goto LABEL_105;
      }
LABEL_68:
      v63 = v126;
      v64 = "/";
      v65 = 2LL;
      do
      {
        if ( !v65 )
          break;
        v61 = *v63 < (unsigned __int8)*v64;
        v62 = *v63++ == *v64++;
        --v65;
      }
      while ( v62 );
      if ( (!v61 && !v62) == v61 )
      {
        LODWORD(v66) = sub_405530(4LL, v126);
        v67 = v66;
        v68 = dcgettext(0LL, "it is dangerous to operate recursively on %s", 5);
        error(0, 0, v68, v67, v126);
      }
      else
      {
        LODWORD(v111) = sub_405450(1LL, 4LL, "/");
        v112 = v111;
        LODWORD(v113) = sub_405450(0LL, 4LL, v126);
        v114 = v113;
        v115 = dcgettext(0LL, "it is dangerous to operate recursively on %s (same as %s)", 5);
        error(0, 0, v115, v114, v112, v126);
      }
      a3 = 0;
      v69 = dcgettext(0LL, "use --no-preserve-root to override this failsafe", 5);
      error(0, 0, v69);
      return (unsigned int)a3;
  }
}

__int64 __fastcall sub_403930(__int64 a1, __int64 a2, __uid_t a3, __gid_t a4, int a5, int a6, __int64 a7)
{
  __gid_t v7; // er15@1
  int v8; // er14@1
  int v9; // er13@1
  signed int v10; // ebx@2
  void *v11; // rax@2
  void *i; // rbp@2
  __int64 v13; // rax@4
  int *v14; // r13@5
  char *v16; // rax@9
  char *v17; // rax@15
  __uid_t v18; // [sp+Ch] [bp-3Ch]@1

  v7 = a4;
  v8 = a6;
  v9 = a5;
  v18 = a3;
  if ( (a6 & a5) == -1 && !*(_BYTE *)(a7 + 16) && *(_DWORD *)a7 == 2 )
    a2 = (unsigned int)a2 | 8;
  v10 = 1;
  LODWORD(v11) = sub_406020(a1, a2, 0LL);
  for ( i = v11; ; v10 &= sub_402BC0(v18, v7, (signed int)i, (__int64)i, v13, v9, v8, a7) )
  {
    LODWORD(v13) = fts_read(i);
    if ( !v13 )
      break;
  }
  v14 = __errno_location();
  if ( *v14 )
  {
    v10 = *(_BYTE *)(a7 + 17);
    if ( (_BYTE)v10 )
    {
      v10 = 0;
    }
    else
    {
      v17 = dcgettext(0LL, "fts_read failed", 5);
      error(0, *v14, v17);
    }
  }
  if ( (unsigned int)fts_close(i) )
  {
    v10 = 0;
    v16 = dcgettext(0LL, "fts_close failed", 5);
    error(0, *v14, v16);
  }
  return (unsigned int)v10;
}

__int64 sub_403A70()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_409990(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_611378 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_611380 )
      {
        LODWORD(v5) = sub_4055D0(qword_611380, "write error");
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
  result = sub_409990(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

signed __int64 __fastcall sub_403B10(unsigned __int64 a1, __int64 a2)
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

char *__fastcall sub_403B60(const char *a1)
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
  qword_611388 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_403C00(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_40AE40(0LL);
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

unsigned __int64 __fastcall sub_403D00(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_403C00("`", v11);
        v58 = sub_403C00("'", v11);
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
            return sub_403D00((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_403D00((__int64)v9, v79, s);
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
                return sub_403D00((__int64)v9, v10, s);
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
              return sub_403D00((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_403D00((__int64)v9, v10, s);
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
              return sub_403D00((__int64)v9, v10, s);
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
              return sub_403D00((__int64)v9, v10, s);
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
            return sub_403D00((__int64)v9, v10, s);
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
            return sub_403D00((__int64)v9, v10, s);
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
            return sub_403D00((__int64)v9, v10, s);
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
              return sub_403D00((__int64)v9, v10, s);
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
          return sub_403D00((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_403D00((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4097E0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_403D00((__int64)v9, v10, s);
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
      return sub_403D00((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_403D00(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_403C00("`", v11);
        v58 = sub_403C00("'", v11);
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
            return sub_403D00((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_403D00((__int64)v9, v79, s);
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
                return sub_403D00((__int64)v9, v10, s);
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
              return sub_403D00((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_403D00((__int64)v9, v10, s);
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
              return sub_403D00((__int64)v9, v10, s);
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
              return sub_403D00((__int64)v9, v10, s);
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
            return sub_403D00((__int64)v9, v10, s);
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
            return sub_403D00((__int64)v9, v10, s);
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
            return sub_403D00((__int64)v9, v10, s);
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
              return sub_403D00((__int64)v9, v10, s);
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
          return sub_403D00((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_403D00((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4097E0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_403D00((__int64)v9, v10, s);
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
      return sub_403D00((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_404F30(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6112F8;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_611310 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405FE0();
    v9 = 16LL * (a1 + 1);
    if ( off_6112F8 == &xmmword_611300 )
    {
      LODWORD(v20) = sub_405DF0(0LL, v9);
      v7 = v20;
      off_6112F8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_611300);
    }
    else
    {
      LODWORD(v10) = sub_405DF0(off_6112F8, v9);
      off_6112F8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_611310], 0, 16LL * (a1 + 1 - dword_611310));
    dword_611310 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_403D00(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_6113A0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_405D90(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_403D00(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_404F30(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6112F8;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_611310 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405FE0();
    v9 = 16LL * (a1 + 1);
    if ( off_6112F8 == &xmmword_611300 )
    {
      LODWORD(v20) = sub_405DF0(0LL, v9);
      v7 = v20;
      off_6112F8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_611300);
    }
    else
    {
      LODWORD(v10) = sub_405DF0(off_6112F8, v9);
      off_6112F8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_611310], 0, 16LL * (a1 + 1 - dword_611310));
    dword_611310 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_403D00(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_6113A0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_405D90(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_403D00(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_405450(int a1, int a2, char *a3)
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
  return sub_404F30(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405450(int a1, int a2, char *a3)
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
  return sub_404F30(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405530(int a1, char *a2)
{
  return sub_405450(0, a1, a2);
}

_BYTE *__fastcall sub_405550(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_6114D0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_6114A0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_6114B0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_6114C0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_404F30(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_4055D0(char *a1)
{
  return sub_405550(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
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
  v6 = 0x400000000000000LL;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_404F30(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
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
  v6 = 0x400000000000000LL;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_404F30(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405780(char *a1)
{
  return sub_404F30(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6112C0);
}

__int64 __fastcall sub_4057A0(__int64 a1)
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

int __fastcall sub_4057F0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_4057F0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_405C50(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4057F0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_4057F0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_405D90(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405FE0();
  }
  return result;
}

void *__fastcall sub_405DF0(void *a1, size_t a2)
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
        sub_405FE0();
    }
  }
  return result;
}

void *__fastcall sub_405F90(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_405D90(a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_405FC0(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_405F90(a1, v1 + 1);
}

void __noreturn sub_405FE0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_406020(__int64 a1, int a2)
{
  __int64 v2; // rax@1

  LODWORD(v2) = fts_open(a1, a2 | 0x200u);
  if ( !v2 )
  {
    if ( *__errno_location() != 22 )
      sub_405FE0();
    __assert_fail("errno != EINVAL", "lib/xfts.c", 0x29u, "xfts_open");
  }
  return v2;
}

bool __fastcall sub_406070(__int64 a1, __int64 a2)
{
  bool result; // al@1
  int v3; // edx@1

  result = 1;
  v3 = *(_DWORD *)(a1 + 72) & 0x11;
  if ( v3 != 16 )
  {
    result = 0;
    if ( v3 == 17 )
      result = *(_QWORD *)(a2 + 88) != 0LL;
  }
  return result;
}

__int64 __fastcall sub_4060A0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
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

__int64 __fastcall sub_4064D0(int fd, char *file, __uid_t owner, __gid_t group, int a5)
{
  int v5; // ebx@2
  char *v6; // r12@2
  __uid_t v7; // er14@2
  __gid_t v8; // er15@2
  int v9; // ebp@2
  const char *v10; // rax@4
  int v11; // eax@6
  int *v12; // rcx@6
  int v13; // er13@6
  int *v14; // rax@7
  unsigned __int64 v15; // rsi@7
  int *v16; // rdi@8
  int v17; // ST0C_4@8
  int *v18; // ST00_8@8
  signed __int64 v19; // rcx@11
  int v21; // eax@28
  int *v22; // rbx@29
  int v23; // ebp@29
  int *v24; // rax@32
  int v25; // ebp@32
  int *v26; // rbx@32
  int *v27; // rax@35
  int *v28; // rax@36
  const char *v29; // [sp+0h] [bp-1008h]@5
  int *v30; // [sp+0h] [bp-1008h]@7
  int v31; // [sp+10h] [bp-FF8h]@4

  if ( a5 & 0xFFFFFEFF )
  {
    v13 = -1;
    *__errno_location() = 22;
    return (unsigned int)v13;
  }
  v5 = fd;
  v6 = file;
  v7 = owner;
  v8 = group;
  v9 = a5;
  if ( fd == -100 || *file == 47 )
  {
    if ( a5 == 256 )
      v13 = lchown(file, owner, group);
    else
      v13 = chown(file, owner, group);
    return (unsigned int)v13;
  }
  LODWORD(v10) = sub_409860(&v31, (unsigned int)fd, file);
  if ( !v10 )
    goto LABEL_12;
  v29 = v10;
  if ( v9 == 256 )
  {
    v21 = lchown(v10, v7, v8);
    v12 = (int *)v29;
    v13 = v21;
  }
  else
  {
    v11 = chown(v10, v7, v8);
    v12 = (int *)v29;
    v13 = v11;
  }
  v30 = v12;
  v14 = __errno_location();
  v15 = (unsigned int)*v14;
  if ( v30 != &v31 )
  {
    v16 = v30;
    v17 = *v14;
    v18 = v14;
    free(v16);
    v15 = (unsigned int)v17;
    v14 = v18;
  }
  if ( v13 != -1 )
    return (unsigned int)v13;
  if ( (unsigned int)v15 > 0x26 )
  {
    if ( (_DWORD)v15 == 95 )
      goto LABEL_12;
LABEL_25:
    *v14 = v15;
    return (unsigned int)v13;
  }
  v19 = 274878963718LL;
  if ( !_bittest64(&v19, v15) )
    goto LABEL_25;
LABEL_12:
  if ( sub_40B460(&v31) )
  {
    v28 = __errno_location();
    sub_40B3B0(*v28);
  }
  if ( v5 >= 0 && v31 == v5 )
  {
    v13 = -1;
    sub_40B4D0(&v31);
    *__errno_location() = 9;
    return (unsigned int)v13;
  }
  if ( fchdir(v5) )
  {
    v24 = __errno_location();
    v13 = -1;
    v25 = *v24;
    v26 = v24;
    sub_40B4D0(&v31);
    *v26 = v25;
    return (unsigned int)v13;
  }
  if ( v9 == 256 )
    v13 = lchown(v6, v7, v8);
  else
    v13 = chown(v6, v7, v8);
  if ( v13 != -1 )
  {
    if ( !sub_40B4B0(&v31) )
    {
      sub_40B4D0(&v31);
      return (unsigned int)v13;
    }
LABEL_35:
    v27 = __errno_location();
    sub_40B3E0(*v27);
  }
  v22 = __errno_location();
  v23 = *v22;
  if ( sub_40B4B0(&v31) )
    goto LABEL_35;
  sub_40B4D0(&v31);
  if ( v23 )
    *v22 = v23;
  return (unsigned int)v13;
}

signed __int64 __fastcall sub_4067C0(__int64 a1, __int64 a2, char a3)
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

__int64 __fastcall sub_406970(__int64 a1, __int64 a2, size_t a3)
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

void *__fastcall sub_406A70(__int64 a1, const void *a2, size_t a3)
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

void __fastcall sub_406B00(void *ptr)
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

int __fastcall sub_406B50(__int64 a1)
{
  int v1; // eax@2
  int result; // eax@4

  while ( 1 )
  {
    result = sub_40ADA0(a1);
    if ( (_BYTE)result )
      break;
    v1 = sub_40ADF0(a1);
    if ( v1 >= 0 )
      close(v1);
  }
  return result;
}

__int64 __fastcall sub_406B90(__int64 a1)
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
    LODWORD(v8) = sub_40A3C0(13LL, 0LL, sub_406770, sub_406780, free);
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
  LODWORD(v3) = sub_40A150(v2, &v9);
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
      LODWORD(v7) = sub_40AB60(v2, v5);
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

__int64 __fastcall sub_406B90(__int64 a1)
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
    LODWORD(v8) = sub_40A3C0(13LL, 0LL, sub_406770, sub_406780, free);
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
  LODWORD(v3) = sub_40A150(v2, &v9);
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
      LODWORD(v7) = sub_40AB60(v2, v5);
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

__int64 __fastcall sub_406CB0(__int64 a1)
{
  __int64 v1; // rax@1
  int v2; // edx@4

  v1 = sub_406B90(a1);
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

void __fastcall sub_406D20(__int64 a1, int a2, char a3)
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
    v5 = sub_40ADB0(a1 + 96);
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

__int64 __fastcall sub_406D90(__int64 a1)
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
      sub_406D20(a1, -100, 1);
    else
      v2 = fchdir(*(_DWORD *)(a1 + 40)) != 0;
  }
  sub_406B50(a1 + 96);
  return (unsigned int)v2;
}

signed __int64 __fastcall sub_406DF0(void **a1, size_t *a2, __int64 a3)
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

bool __fastcall sub_406E60(__int16 a1, _QWORD *a2)
{
  __int64 v2; // rax@2
  bool result; // al@2
  void *v4; // rax@4
  void *v5; // rdi@4

  if ( a1 & 0x102 )
  {
    LODWORD(v2) = sub_40A3C0(31LL, 0LL, sub_406760, sub_406740, free);
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
      sub_4099F0();
      result = 1;
    }
  }
  return result;
}

__int64 __fastcall sub_406EC0(char a1, __int16 a2, char a3)
{
  __int64 result; // rax@2

  if ( a2 & 0x200 )
    result = sub_40B410(a1);
  else
    result = sub_409A80(a3);
  return result;
}

__int64 __fastcall sub_406F10(__int64 a1, __int64 a2, int a3, _BYTE *a4)
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
        v15 = sub_40ADA0(v4 + 96);
        if ( !v15 )
        {
          v16 = sub_40ADF0(v4 + 96);
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
      v17 = sub_406EC0(*(_DWORD *)(v4 + 44), v8, (char)v7);
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
            sub_406D20(v4, v17, v15 ^ 1);
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

int __fastcall sub_4070E0(__int16 a1, __int64 *a2, __int64 a3)
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
      LODWORD(v7) = sub_40AB60(v6, v4);
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
    result = sub_409A00(*a2, a3 + 120);
    if ( !(_BYTE)result )
      return 1;
    *(_QWORD *)v3 = v3;
    *(_WORD *)(v3 + 112) = 2;
  }
  return result;
}

void __fastcall sub_407190(__int16 a1, __int64 a2, __int64 a3)
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
    LODWORD(v6) = sub_40ABA0(v5, &v9);
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

void __fastcall sub_407190(__int16 a1, __int64 a2, __int64 a3)
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
    LODWORD(v6) = sub_40ABA0(v5, &v9);
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

__int64 __fastcall sub_407230(__int64 *a1, int a2)
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
  v35 = sub_40B410(v34);
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
    *(_WORD *)(v3 + 112) = sub_4067C0(v2, v3, 0);
  }
  else
  {
    v39 = *(_DWORD *)(v2 + 72);
    if ( v39 & 0x100 )
    {
      sub_407190(v39, v2 + 88, v3);
      sub_4067C0(v2, v3, 0);
      if ( !(unsigned __int8)sub_4070E0(*(_DWORD *)(v2 + 72), (__int64 *)(v2 + 88), v3) )
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
  if ( (*(_DWORD *)(v2 + 72) & 0x38) == 24 && *(_QWORD *)(v3 + 136) == 2LL && (unsigned int)sub_406CB0(v3) )
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
    v36 = sub_40B8B0(v36);
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
  if ( (unsigned int)sub_406F10(v2, v3, v36, 0LL) )
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
      v16 = sub_406A70(v8, v14->d_name, v15);
      if ( !v16 )
        goto LABEL_80;
      if ( v61 <= v15 )
      {
        v62 = *(_QWORD *)(v8 + 32);
        v21 = sub_406DF0((void **)(v8 + 32), (size_t *)(v8 + 48), v67 + v15 + 2);
        if ( !v21 )
        {
LABEL_80:
          v44 = v16;
          v45 = v8;
          v46 = *v12;
          free(v44);
          sub_406B00(ptr);
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
        sub_406B00(ptr);
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
        *((_WORD *)v16 + 56) = sub_4067C0(v8, (__int64)v16, 0);
      }
      else
      {
        v20 = (unsigned int)v14->d_type - 1;
        if ( (v19 & 0x18) == 24 && v14->d_type & 0xFB )
        {
          *((_WORD *)v16 + 56) = 11;
          if ( (unsigned int)v20 <= 0xB )
          {
            *((_DWORD *)v16 + 36) = dword_40E600[v20];
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
            *((_DWORD *)v16 + 36) = dword_40E600[v20];
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
  v50 = *(_QWORD *)(v24 + 88) ? (unsigned int)sub_406F10(v25, *(_QWORD *)(v24 + 8), -1, "..") != 0 : (unsigned int)sub_406D90(v25) != 0;
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
      sub_406B00(ptr);
      return 0LL;
    }
LABEL_97:
    v49 = *(_QWORD *)(v25 + 64);
    if ( v7 > 0x2710 )
    {
      if ( v49 )
        return sub_406970(v25, (__int64)ptr, v7);
      v55 = sub_406B90(v24);
      if ( v55 != 26985 && v55 != 16914836 )
      {
        *(_QWORD *)(v25 + 64) = sub_406790;
        v56 = sub_406970(v25, (__int64)ptr, v7);
        *(_QWORD *)(v25 + 64) = 0LL;
        return v56;
      }
      v49 = *(_QWORD *)(v25 + 64);
    }
    if ( !v49 || v7 == 1 )
      return (__int64)ptr;
    return sub_406970(v25, (__int64)ptr, v7);
  }
  *(_WORD *)(v24 + 112) = 7;
  *(_DWORD *)(v25 + 72) |= 0x4000u;
  sub_406B00(ptr);
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
    v28 = sub_406DF0((void **)(v6 + 32), (size_t *)(v6 + 48), v11);
    if ( !v28 )
      goto LABEL_44;
    v12 = *v3;
    if ( *v3 )
    {
      v13 = sub_406A70(v6, "", 0LL);
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
        v19 = sub_406A70(v6, "", 0LL);
        *(_QWORD *)v6 = v19;
        if ( v19 )
        {
          v19[2] = v14;
          v20 = *(_DWORD *)(v6 + 72);
          *((_WORD *)v19 + 56) = 9;
          if ( sub_406E60(v20, (_QWORD *)(v6 + 88)) )
          {
            v21 = *(_DWORD *)(v6 + 72);
            if ( !(v21 & 0x204) )
            {
              v26 = sub_406EC0(*(_DWORD *)(v6 + 44), v21, (unsigned __int64)".");
              *(_DWORD *)(v6 + 40) = v26;
              if ( v26 < 0 )
                *(_DWORD *)(v6 + 72) |= 4u;
            }
            sub_40AD80(v6 + 96, 0xFFFFFFFFLL);
            return v6;
          }
        }
LABEL_42:
        sub_406B00(v14);
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
        v16 = sub_406A70(v6, v12, v18);
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
        *((_WORD *)v16 + 56) = sub_4067C0(v6, (__int64)v16, 0);
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
            v14 = (void *)sub_406970(v6, (__int64)v14, v15);
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
    sub_406B00(v3);
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
  sub_406B50((__int64)v1 + 96);
  v7 = (void *)*((_QWORD *)v1 + 10);
  if ( v7 )
    sub_40A600(v7);
  v8 = (void *)*((_QWORD *)v1 + 11);
  if ( *((_DWORD *)v1 + 18) & 0x102 )
  {
    if ( v8 )
      sub_40A600(v8);
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
    *(_WORD *)(v1 + 112) = sub_4067C0(a1, v1, 0);
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
    v29 = sub_4067C0(a1, v1, 1);
    *(_WORD *)(v1 + 112) = v29;
    if ( v29 == 1 )
    {
      v40 = *(_DWORD *)(a1 + 72);
      if ( !(v40 & 4) )
      {
        v43 = sub_406EC0(*(_DWORD *)(a1 + 44), v40, (unsigned __int64)".");
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
      && (unsigned int)sub_406CB0(*(_QWORD *)(v7 + 8)) == 2 )
    {
      v24 = *(_WORD *)(v7 + 112);
      goto LABEL_52;
    }
    v24 = sub_4067C0(v4, v7, 0);
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
      if ( !(unsigned __int8)sub_4070E0(*(_DWORD *)(v4 + 72), (__int64 *)(v4 + 88), v7) )
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
        sub_406B00(v14);
        *(_QWORD *)(v4 + 8) = 0LL;
      }
      v15 = *(_DWORD *)(v4 + 72);
      *(_WORD *)(v1 + 112) = 6;
      sub_407190(v15, v4 + 88, v1);
      return v1;
    }
    v11 = *(void **)(a1 + 8);
    if ( v11 )
    {
      if ( !(BYTE1(v2) & 0x20) )
      {
        if ( (unsigned int)sub_406F10(v4, v1, -1, *(_BYTE **)(v1 + 48)) )
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
      sub_406B00(v11);
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    v7 = sub_407230((__int64 *)v4, 3);
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
      sub_407190(v31, v4 + 88, v1);
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
        v7 = sub_407230((__int64 *)a1, 3);
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
                sub_406D20(v4, v33, 1);
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
          else if ( !(v8 & 1) && (unsigned int)sub_406F10(a1, *(_QWORD *)(v7 + 8), -1, "..") )
          {
            goto LABEL_81;
          }
        }
        else if ( (unsigned int)sub_406D90(a1) )
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
            sub_407190(v9, v4 + 88, v7);
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
      if ( !(unsigned int)sub_406D90(a1) )
      {
        v16 = *(void **)(a1 + 88);
        if ( *(_DWORD *)(v4 + 72) & 0x102 )
        {
          if ( v16 )
            sub_40A600(v16);
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
        sub_406E60(v23, (_QWORD *)(v4 + 88));
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
    v39 = sub_4067C0(a1, v7, 1);
    *(_WORD *)(v7 + 112) = v39;
    if ( v39 == 1 )
    {
      v41 = *(_DWORD *)(a1 + 72);
      if ( !(v41 & 4) )
      {
        v42 = sub_406EC0(*(_DWORD *)(a1 + 44), v41, (unsigned __int64)".");
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
    *(_WORD *)(v1 + 112) = sub_4067C0(a1, v1, 0);
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
    v29 = sub_4067C0(a1, v1, 1);
    *(_WORD *)(v1 + 112) = v29;
    if ( v29 == 1 )
    {
      v40 = *(_DWORD *)(a1 + 72);
      if ( !(v40 & 4) )
      {
        v43 = sub_406EC0(*(_DWORD *)(a1 + 44), v40, (unsigned __int64)".");
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
      && (unsigned int)sub_406CB0(*(_QWORD *)(v7 + 8)) == 2 )
    {
      v24 = *(_WORD *)(v7 + 112);
      goto LABEL_52;
    }
    v24 = sub_4067C0(v4, v7, 0);
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
      if ( !(unsigned __int8)sub_4070E0(*(_DWORD *)(v4 + 72), (__int64 *)(v4 + 88), v7) )
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
        sub_406B00(v14);
        *(_QWORD *)(v4 + 8) = 0LL;
      }
      v15 = *(_DWORD *)(v4 + 72);
      *(_WORD *)(v1 + 112) = 6;
      sub_407190(v15, v4 + 88, v1);
      return v1;
    }
    v11 = *(void **)(a1 + 8);
    if ( v11 )
    {
      if ( !(BYTE1(v2) & 0x20) )
      {
        if ( (unsigned int)sub_406F10(v4, v1, -1, *(_BYTE **)(v1 + 48)) )
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
      sub_406B00(v11);
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    v7 = sub_407230((__int64 *)v4, 3);
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
      sub_407190(v31, v4 + 88, v1);
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
        v7 = sub_407230((__int64 *)a1, 3);
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
                sub_406D20(v4, v33, 1);
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
          else if ( !(v8 & 1) && (unsigned int)sub_406F10(a1, *(_QWORD *)(v7 + 8), -1, "..") )
          {
            goto LABEL_81;
          }
        }
        else if ( (unsigned int)sub_406D90(a1) )
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
            sub_407190(v9, v4 + 88, v7);
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
      if ( !(unsigned int)sub_406D90(a1) )
      {
        v16 = *(void **)(a1 + 88);
        if ( *(_DWORD *)(v4 + 72) & 0x102 )
        {
          if ( v16 )
            sub_40A600(v16);
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
        sub_406E60(v23, (_QWORD *)(v4 + 88));
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
    v39 = sub_4067C0(a1, v7, 1);
    *(_WORD *)(v7 + 112) = v39;
    if ( v39 == 1 )
    {
      v41 = *(_DWORD *)(a1 + 72);
      if ( !(v41 & 4) )
      {
        v42 = sub_406EC0(*(_DWORD *)(a1 + 44), v41, (unsigned __int64)".");
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
      sub_406B00(v8);
    v9 = 1;
    if ( a2 == 0x2000 )
    {
      *(_DWORD *)(v2 + 72) |= 0x2000u;
      v9 = 2;
    }
    if ( *(_QWORD *)(v5 + 88) || **(_BYTE **)(v5 + 48) == 47 || (v10 = *(_DWORD *)(v2 + 72), v10 & 4) )
    {
      result = sub_407230((__int64 *)v2, v9);
      *(_QWORD *)(v2 + 8) = result;
      return result;
    }
    v11 = sub_406EC0(*(_DWORD *)(v2 + 44), v10, (unsigned __int64)".");
    if ( v11 < 0 )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      result = 0LL;
    }
    else
    {
      *(_QWORD *)(v2 + 8) = sub_407230((__int64 *)v2, v9);
      if ( *(_BYTE *)(v2 + 73) & 2 )
      {
        sub_406D20(v2, v11, 1);
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

__int64 __fastcall sub_408A10(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_408AF0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_409110(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_408A10(a2, a7);
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
        sub_408A10((__int64)v11, a7);
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
            v40 = sub_408AF0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_408AF0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_408AF0(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_4096E0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_6114E0 = dword_61131C;
  dword_6114E4 = dword_611318;
  result = sub_409110(a1, a2, a3, a4, a5, a6, (__int64)&dword_6114E0, a7);
  dword_61131C = dword_6114E0;
  qword_611530 = qword_6114F0;
  dword_611314 = dword_6114E8;
  return result;
}

__int64 __fastcall sub_409760(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_4096E0(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_4097E0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409AD0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

char *__fastcall sub_409860(char *a1, unsigned int a2, const char *a3)
{
  char *v3; // rbx@1
  int v4; // eax@2
  const char *v5; // rbp@2
  size_t v6; // rdi@4
  int v7; // eax@5
  char *result; // rax@5
  int v9; // eax@9
  int v10; // er13@9
  __int64 v11; // [sp+0h] [bp-48h]@12

  v3 = a1;
  if ( *a3 )
  {
    v4 = dword_611518;
    v5 = a3;
    if ( !dword_611518 )
    {
      v9 = open("/proc/self/fd", 67840);
      v10 = v9;
      if ( v9 < 0 )
      {
        dword_611518 = -1;
        return 0LL;
      }
      __sprintf_chk(&v11, 1LL, 32LL, "/proc/self/fd/%d/../fd", (unsigned int)v9);
      dword_611518 = (unsigned int)access((const char *)&v11, 0) < 1 ? 1 : -1;
      close(v10);
      v4 = dword_611518;
    }
    if ( v4 >= 0 && ((v6 = strlen(v5) + 27, v6 <= 0xFC0) || (v3 = (char *)malloc(v6)) != 0LL) )
    {
      v7 = __sprintf_chk(v3, 1LL, -1LL, "/proc/self/fd/%d/", a2);
      strcpy(&v3[v7], v5);
      result = v3;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    *a1 = 0;
    result = a1;
  }
  return result;
}

__int64 __fastcall sub_409990(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40B830(stream);
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

void __fastcall sub_4099F0(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 9827862;
}

signed __int64 __fastcall sub_409A00(__int64 a1, __int64 a2)
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

__int64 __fastcall sub_409A80(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_40B4F0(v4);
}

bool __fastcall sub_409AD0(int a1)
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

unsigned __int64 __fastcall sub_409B30(unsigned __int64 a1)
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

signed __int64 __fastcall sub_409BF0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

signed __int64 __fastcall sub_409BF0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_409C20(__int64 a1, __int64 a2, __int64 **a3, char a4)
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
  v7 = (__int64 *)sub_409BF0(a1, a2);
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

signed __int64 __fastcall sub_409D40(void **a1)
{
  void *v1; // rax@1
  float v2; // xmm0_4@2
  float v3; // xmm1_4@5
  float v4; // xmm2_4@5
  signed __int64 result; // rax@7

  v1 = *a1;
  if ( *a1 == &unk_40E850 )
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
      *a1 = &unk_40E850;
      result = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_409DC0(__int64 a1, __int64 a2, char a3)
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
              v8 = sub_409BF0(a1, *(_QWORD *)v6);
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
    v10 = (_QWORD *)sub_409BF0(a1, v5);
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

__int64 __fastcall sub_40A150(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 *v3; // rax@1
  __int64 v4; // rsi@1
  __int64 *v5; // rbx@2
  __int64 result; // rax@7

  v2 = a2;
  v3 = (__int64 *)sub_409BF0(a1, a2);
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

char **__fastcall sub_40A3C0(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(), __int64 (__fastcall *a4)(), char *a5)
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
    v7 = sub_409BD0;
  if ( !a4 )
    v6 = sub_409BE0;
  v9 = malloc(0x50uLL);
  v10 = (char **)v9;
  if ( v9 )
  {
    v11 = (void **)((char *)v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_409D40(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_409B30(v8);
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
      *((_QWORD *)v9 + 5) = &unk_40E850;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_409D40(v11) )
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

void __fastcall sub_40A600(void *ptr)
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

signed __int64 __fastcall sub_40A6E0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_409B30(a2);
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
  v14 = sub_409DC0((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_409DC0(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_409DC0(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40A6E0(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_409B30(a2);
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
  v14 = sub_409DC0((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_409DC0(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_409DC0(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40A8E0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_409C20(a1, a2, &v26, 0);
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
        sub_409D40((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40A6E0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_409C20(a1, v4, &v26, 0) )
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

signed __int64 __fastcall sub_40A8E0(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_409C20(a1, a2, &v26, 0);
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
        sub_409D40((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40A6E0(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_409C20(a1, v4, &v26, 0) )
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

__int64 __fastcall sub_40AB60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  int v3; // eax@1
  __int64 result; // rax@4
  __int64 v5; // [sp+8h] [bp-10h]@1

  v2 = a2;
  v3 = sub_40A8E0(a1, a2, &v5);
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

__int64 __fastcall sub_40ABA0(__int64 a1, __int64 a2)
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
  v3 = sub_409C20(a1, a2, &v24, 1);
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
    sub_409D40((void **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40A6E0(a1, v17) )
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

void __fastcall sub_40AD80(__int64 a1, int a2)
{
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = a2;
}

__int64 __fastcall sub_40ADA0(__int64 a1)
{
  return *(_BYTE *)(a1 + 28);
}

__int64 __fastcall sub_40ADB0(__int64 a1, int a2)
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

__int64 __fastcall sub_40ADF0(__int64 a1)
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

__int64 __fastcall sub_40ADF0(__int64 a1)
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

const char *sub_40AE40()
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
                sub_40B830(v61);
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
            sub_40B830(v40);
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

void __fastcall __noreturn sub_40B3B0(int errnum)
{
  char *v1; // rax@1

  v1 = dcgettext(0LL, "unable to record current working directory", 5);
  error(status, errnum, v1);
  abort();
}

void __fastcall __noreturn sub_40B3E0(int errnum)
{
  char *v1; // rax@1

  v1 = dcgettext(0LL, "failed to return to initial working directory", 5);
  error(status, errnum, v1);
  abort();
}

__int64 __fastcall sub_40B410(int a1, const char *a2, char a3, __int64 a4)
{
  __int64 v4; // rcx@1
  int v5; // eax@3
  __int64 v7; // [sp+38h] [bp-20h]@1

  v7 = a4;
  v4 = 0LL;
  if ( a3 & 0x40 )
    v4 = (unsigned int)v7;
  v5 = openat(a1, a2, a3, v4);
  return sub_40B4F0(v5);
}

__int64 __fastcall sub_40B460(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax@1
  int v4; // edx@1
  __int64 result; // rax@1
  __int64 v6; // rax@2

  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = sub_409A80(".", 0, a3);
  v4 = v3;
  *(_DWORD *)a1 = v3;
  result = 0LL;
  if ( v4 < 0 )
  {
    LODWORD(v6) = sub_40BA90(0LL, 0LL);
    *(_QWORD *)(a1 + 8) = v6;
    result = (unsigned int)-(v6 == 0);
  }
  return result;
}

int __fastcall sub_40B4B0(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40BF60(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_40B580(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_40B580(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_40B580(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_40B540((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/proc/self/fd/%d/" + 16;
        if ( !sub_40B580(&fd, 4253585LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_40B540((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_40B4B0(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40BF60(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_40B580(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_40B580(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_40B580(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_40B540((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/proc/self/fd/%d/" + 16;
        if ( !sub_40B580(&fd, 4253585LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_40B540((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_40B4B0(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40BF60(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_40B580(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_40B580(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_40B580(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_40B540((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/proc/self/fd/%d/" + 16;
        if ( !sub_40B580(&fd, 4253585LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_40B540((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_40B4B0(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40BF60(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_40B580(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_40B580(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_40B580(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_40B540((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/proc/self/fd/%d/" + 16;
        if ( !sub_40B580(&fd, 4253585LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_40B540((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_40B4B0(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40BF60(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_40B580(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_40B580(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_40B580(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_40B540((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/proc/self/fd/%d/" + 16;
        if ( !sub_40B580(&fd, 4253585LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_40B540((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_40B4B0(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40BF60(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_40B580(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_40B580(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_40B580(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_40B540((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/proc/self/fd/%d/" + 16;
        if ( !sub_40B580(&fd, 4253585LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_40B540((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_40B4B0(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40BF60(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_40B580(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_40B580(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_40B580(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_40B540((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/proc/self/fd/%d/" + 16;
        if ( !sub_40B580(&fd, 4253585LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_40B540((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

void __fastcall sub_40B4D0(int *a1)
{
  int *v1; // rbx@1
  int v2; // edi@1

  v1 = a1;
  v2 = *a1;
  if ( v2 >= 0 )
    close(v2);
  free(*((void **)v1 + 1));
}

__int64 __fastcall sub_40B4F0(int fd)
{
  __int64 result; // rax@2
  int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_40C070();
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

void __fastcall sub_40B540(int a1)
{
  if ( a1 >= 0 )
  {
    if ( close(a1) )
      __assert_fail("! close_fail", "lib/chdir-long.c", 0x40u, "cdb_free");
  }
}

signed __int64 __fastcall sub_40B580(int *a1, const char *a2)
{
  int v2; // eax@1
  int v3; // ebp@2
  signed __int64 result; // rax@2

  v2 = openat(*a1, a2, 67840);
  if ( v2 < 0 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v3 = v2;
    sub_40B540(*a1);
    *a1 = v3;
    result = 0LL;
  }
  return result;
}

int __fastcall sub_40B830(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_40B9F0(stream) )
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

__int64 __fastcall sub_40B8B0(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_611528 < 0 )
    {
      v4 = sub_40B8B0(a1);
      if ( v4 >= 0 && dword_611528 == -1 )
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
        dword_611528 = 1;
      }
      else
      {
        v4 = sub_40B8B0(a1);
        if ( v4 >= 0 )
        {
          dword_611528 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_40B9F0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_40BA30(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_40BA30(FILE *a1, __off_t a2, int a3)
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

char *__fastcall sub_40BA90(char *a1, unsigned __int64 a2)
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

_BYTE *__fastcall sub_40BF60(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

__int64 __fastcall sub_40C070(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return sub_40B8B0(a1, 0, 3LL, a4);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40C0F0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_6112A8 )
    v1 = unk_6112A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40C108(__int64 a1, __int64 a2, __int64 a3)
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
