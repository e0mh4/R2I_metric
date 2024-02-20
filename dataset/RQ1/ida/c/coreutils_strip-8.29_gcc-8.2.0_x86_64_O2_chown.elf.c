__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char v3; // r14
  int v4; // r13d
  __int64 v5; // r12
  char **v6; // rbp
  char *v7; // rbx
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  const char *v12; // rax
  bool v13; // zf
  char *v14; // r13
  __int64 v15; // rdx
  __gid_t st_gid; // r12d
  bool v18; // cc
  __uid_t *v19; // rsi
  __int64 v20; // rdx
  int *v21; // rax
  char *v22; // rax
  __int64 v23; // rbx
  char *v24; // rax
  char *v25; // rbx
  const char *v26; // rax
  char *v27; // rax
  const char *v28; // [rsp+8h] [rbp-110h]
  __uid_t st_uid; // [rsp+10h] [rbp-108h] BYREF
  __gid_t v30; // [rsp+14h] [rbp-104h]
  int v31; // [rsp+18h] [rbp-100h] BYREF
  int v32; // [rsp+1Ch] [rbp-FCh]
  int v33; // [rsp+20h] [rbp-F8h] BYREF
  char v34; // [rsp+24h] [rbp-F4h]
  bool v36; // [rsp+30h] [rbp-E8h]
  char v37; // [rsp+31h] [rbp-E7h]
  const char *v38; // [rsp+38h] [rbp-E0h]
  __int64 v39; // [rsp+40h] [rbp-D8h]
  struct stat stat_buf; // [rsp+50h] [rbp-C8h] BYREF

  v3 = 0;
  v4 = -1;
  v5 = a1;
  v6 = a2;
  LODWORD(v7) = 16;
  v8 = *a2;
  st_uid = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  sub_403CB0(v8);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40C620(sub_403BC0);
  sub_402C50(&v33);
  while ( 1 )
  {
    v9 = sub_409C90((unsigned int)v5, a2, "HLPRcfhv", &off_40D320, 0LL);
    if ( v9 == -1 )
      break;
    if ( v9 == 102 )
    {
      v37 = 1;
    }
    else if ( v9 <= 102 )
    {
      if ( v9 == 76 )
      {
        LODWORD(v7) = 2;
      }
      else if ( v9 <= 76 )
      {
        if ( v9 == -130 )
          sub_402770(0);
        if ( v9 != 72 )
        {
          if ( v9 == -131 )
          {
            sub_406180(
              (_DWORD)stdout,
              (unsigned int)"chown",
              (unsigned int)&unk_40C700,
              (_DWORD)off_6122D0,
              (unsigned int)"David MacKenzie",
              (unsigned int)"Jim Meyering",
              0);
            exit(0);
          }
          goto LABEL_16;
        }
        LODWORD(v7) = 17;
      }
      else
      {
        switch ( v9 )
        {
          case 'R':
            goto LABEL_34;
          case 'c':
            v33 = 1;
            break;
          case 'P':
            LODWORD(v7) = 16;
            break;
          default:
            goto LABEL_16;
        }
      }
    }
    else if ( v9 == 129 )
    {
      v10 = sub_405C50(qword_612550);
      if ( v10 )
      {
        v28 = (const char *)v10;
        v12 = (const char *)sub_4058D0(qword_612550, &v31, v11);
        error(1, 0, "%s: %s", v28, v12);
LABEL_34:
        v34 = 1;
      }
    }
    else if ( v9 > 129 )
    {
      if ( v9 == 131 )
      {
        v3 = 1;
      }
      else if ( v9 >= 131 )
      {
        if ( v9 != 132 )
          goto LABEL_16;
        filename = qword_612550;
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      switch ( v9 )
      {
        case 118:
          v33 = 0;
          break;
        case 128:
          v4 = 1;
          break;
        case 104:
          v4 = 0;
          break;
        default:
          goto LABEL_16;
      }
    }
  }
  if ( !v34 )
  {
    LODWORD(v7) = 16;
    goto LABEL_39;
  }
  if ( (_DWORD)v7 == 16 )
  {
    if ( v4 != 1 )
    {
      v4 = 0;
      goto LABEL_39;
    }
LABEL_63:
    v27 = dcgettext(0LL, "-R --dereference requires either -H or -L", 5);
    error(1, 0, v27);
    start();
  }
LABEL_39:
  v13 = v4 == 0;
  v14 = filename;
  v36 = !v13;
  v15 = (unsigned int)(v5 - dword_61233C);
  if ( !filename )
  {
    v18 = (int)v15 <= 1;
    v15 = (unsigned int)(v15 - 1);
    if ( !v18 )
    {
      v19 = &st_uid;
      v5 = sub_405C50(v6[dword_61233C]);
      if ( !v5 )
      {
        if ( !v38 )
          goto LABEL_55;
        goto LABEL_52;
      }
      goto LABEL_62;
    }
LABEL_58:
    if ( dword_61233C < (int)v5 )
    {
      v23 = sub_4058D0(a2[v5 - 1], a2, v15);
      v24 = dcgettext(0LL, "missing operand after %s", 5);
      error(0, 0, v24, v23);
    }
    else
    {
      v22 = dcgettext(0LL, "missing operand", 5);
      error(0, 0, v22);
    }
LABEL_16:
    sub_402770(1);
  }
  if ( (int)v15 <= 0 )
    goto LABEL_58;
  if ( __xstat(1, filename, &stat_buf) )
  {
    v6 = (char **)sub_405680(4LL, v14);
    v25 = dcgettext(0LL, "failed to get attributes of %s", 5);
    v19 = (__uid_t *)(unsigned int)*__errno_location();
    error(1, (int)v19, v25, v6);
LABEL_62:
    v26 = (const char *)sub_4058D0(v6[dword_61233C], v19, v20);
    error(1, 0, "%s: %s", (const char *)v5, v26);
    goto LABEL_63;
  }
  st_gid = stat_buf.st_gid;
  st_uid = stat_buf.st_uid;
  v30 = stat_buf.st_gid;
  v38 = (const char *)sub_402CD0();
  v39 = sub_402C90(st_gid);
  while ( v34 )
  {
    if ( !v3 )
      break;
    if ( sub_4058F0(&unk_612380) )
      break;
    v6 = (char **)sub_405680(4LL, "/");
    v7 = dcgettext(0LL, "failed to get attributes of %s", 5);
    v21 = __errno_location();
    error(1, *v21, v7, v6);
LABEL_55:
    if ( v39 )
      v38 = "";
LABEL_52:
    ++dword_61233C;
  }
  BYTE1(v7) |= 4u;
  return (unsigned __int8)sub_403A80((int)v6 + 8 * dword_61233C, (_DWORD)v7, st_uid, v30, v31, v32, (__int64)&v33) ^ 1u;
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

__int64 *sub_4026BB()
{
  return &program_invocation_short_name;
}

__int64 sub_4026DA()
{
  return 0LL;
}

__int64 *sub_402711()
{
  __int64 *result; // rax

  if ( !byte_612368 )
  {
    while ( qword_612370 < (unsigned __int64)(&qword_611E48 - qword_611E40 - 1) )
      ((void (*)(void))qword_611E40[++qword_612370])();
    result = sub_4026BB();
    byte_612368 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_402768()
{
  return sub_4026DA();
}

void __fastcall __noreturn sub_402770(int status)
{
  __int64 v1; // rbp
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
  FILE *v24; // rbp
  char *v25; // rax
  FILE *v26; // rbp
  char *v27; // rax
  __int64 v28; // rbp
  char *v29; // rax
  __int64 *v30; // rax
  char *v31; // rbp
  char *v32; // rax
  char *v33; // rax
  const char *v34; // r12
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  __int64 v41; // rcx
  __int64 v42[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_6123A8;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(
         0LL,
         "Usage: %s [OPTION]... [OWNER][:[GROUP]] FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n",
         5);
  __printf_chk(1LL, v3, v1, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "Change the owner and/or group of each FILE to OWNER and/or GROUP.\n"
         "With --reference, change the owner and group of each FILE to those of RFILE.\n"
         "\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(
         0LL,
         "  -c, --changes          like verbose but report only when a change is made\n"
         "  -f, --silent, --quiet  suppress most error messages\n"
         "  -v, --verbose          output a diagnostic for every file processed\n",
         5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "      --dereference      affect the referent of each symbolic link (this is\n"
         "                         the default), rather than the symbolic link itself\n"
         "  -h, --no-dereference   affect symbolic links instead of any referenced file\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "                         (useful only on systems that can change the\n"
          "                         ownership of a symlink)\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "      --from=CURRENT_OWNER:CURRENT_GROUP\n"
          "                         change the owner and/or group of each file only if\n"
          "                         its current owner and/or group match those specified\n"
          "                         here.  Either may be omitted, in which case a match\n"
          "                         is not required for the omitted attribute\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "      --no-preserve-root  do not treat '/' specially (the default)\n"
          "      --preserve-root    fail to operate recursively on '/'\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "      --reference=RFILE  use RFILE's owner and group rather than\n"
          "                         specifying OWNER:GROUP values\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "  -R, --recursive        operate on files and directories recursively\n", 5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
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
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "\n"
          "Owner is unchanged if missing.  Group is unchanged if missing, but changed\n"
          "to login group if implied by a ':' following a symbolic OWNER.\n"
          "OWNER and GROUP may be numeric as well as symbolic.\n",
          5);
  fputs_unlocked(v27, v26);
  v28 = qword_6123A8;
  v29 = dcgettext(
          0LL,
          "\n"
          "Examples:\n"
          "  %s root /u        Change the owner of /u to \"root\".\n"
          "  %s root:staff /u  Likewise, but also change its group to \"staff\".\n"
          "  %s -hR root /u    Change the owner of /u and subfiles to \"root\".\n",
          5);
  __printf_chk(1LL, v29, v28, v28);
  v42[0] = (__int64)"[";
  v30 = v42;
  v42[1] = (__int64)"test invocation";
  v42[2] = (__int64)"coreutils";
  v42[3] = (__int64)"Multi-call invocation";
  v42[4] = (__int64)"sha224sum";
  v42[5] = (__int64)"sha2 utilities";
  v42[6] = (__int64)"sha256sum";
  v42[7] = (__int64)"sha2 utilities";
  v42[8] = (__int64)"sha384sum";
  v42[9] = (__int64)"sha2 utilities";
  v42[10] = (__int64)"sha512sum";
  v42[11] = (__int64)"sha2 utilities";
  v42[12] = 0LL;
  v42[13] = 0LL;
  do
    v30 += 2;
  while ( *v30 && strcmp("chown", (const char *)*v30) );
  v31 = (char *)v30[1];
  if ( v31 )
  {
    v32 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v32, &unk_40C700, "https://www.gnu.org/software/coreutils/");
    v33 = setlocale(5, 0LL);
    if ( !v33 || !strncmp(v33, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v37 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v37, &unk_40C700, "https://www.gnu.org/software/coreutils/");
    v38 = setlocale(5, 0LL);
    if ( !v38 || !strncmp(v38, "en_", 3uLL) )
    {
      v31 = "chown";
      v39 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v34 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v39, "https://www.gnu.org/software/coreutils/", "chown");
LABEL_12:
      v36 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v36, v31, v34);
LABEL_3:
      exit(status);
    }
    v31 = "chown";
  }
  v40 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v40, "chown", v41);
LABEL_10:
  v34 = "Multi-call invocation" + 10;
  v35 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v35, "https://www.gnu.org/software/coreutils/", "chown");
  if ( v31 != "chown" )
    v34 = "";
  goto LABEL_12;
}

char *__fastcall sub_402BD0(char *src, const char *a2)
{
  size_t v2; // r12
  size_t v3; // rax
  char *v4; // r12
  char *v5; // rax

  if ( src )
  {
    if ( a2 )
    {
      v2 = strlen(src);
      v3 = strlen(a2);
      v4 = (char *)sub_4062C0(v2 + v3 + 2);
      v5 = stpcpy(v4, src);
      *v5 = 58;
      strcpy(v5 + 1, a2);
      return v4;
    }
  }
  else
  {
    if ( !a2 )
      return 0LL;
    src = (char *)a2;
  }
  return (char *)sub_4064F0(src);
}

__int64 __fastcall sub_402C50(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  *(_DWORD *)a1 = 2;
  *(_BYTE *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}

void nullsub_1()
{
  ;
}

__int64 __fastcall sub_402C90(__gid_t a1)
{
  struct group *v1; // rax
  void *v3; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF

  v1 = getgrgid(a1);
  if ( v1 )
    return sub_4064F0(v1->gr_name);
  v3 = (void *)sub_403C60(a1, &v4);
  return sub_4064F0(v3);
}

__int64 __fastcall sub_402CD0(__uid_t a1)
{
  struct passwd *v1; // rax
  void *v3; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF

  v1 = getpwuid(a1);
  if ( v1 )
    return sub_4064F0(v1->pw_name);
  v3 = (void *)sub_403C60(a1, &v4);
  return sub_4064F0(v3);
}

__int64 __fastcall sub_402D10(__int64 a1, __int64 a2, __uid_t a3, __gid_t a4, int a5, int a6, int *a7)
{
  unsigned int v7; // ebp
  int v9; // r10d
  int v12; // edx
  char v13; // al
  struct stat *v14; // r14
  int v15; // r11d
  char v16; // al
  unsigned int v17; // eax
  _QWORD *v18; // rax
  int v19; // eax
  _QWORD *v20; // rdx
  unsigned int v21; // ebp
  int v22; // eax
  bool v23; // bp
  __uid_t st_uid; // edi
  __gid_t st_gid; // r15d
  __int64 v26; // rax
  const char *v27; // r15
  char *v28; // r14
  char *v29; // rax
  const char *v30; // rsi
  char *v31; // r15
  __int64 v32; // rax
  _QWORD *v34; // rax
  __int64 v35; // rbx
  char *v36; // rax
  char *v37; // rax
  int v38; // eax
  const char *v39; // rsi
  __int64 v40; // r15
  char *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rbx
  char *v44; // rax
  char *v45; // rax
  int v46; // eax
  int v47; // eax
  int v48; // r10d
  int v49; // r9d
  int v50; // ecx
  int *v51; // r8
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  int *v55; // rbp
  int v56; // r15d
  int v57; // eax
  char *v58; // r15
  int *v59; // rax
  __int64 v60; // rbx
  char *v61; // rax
  int *v62; // rbp
  __int64 v63; // rax
  __int64 v64; // r14
  char *v65; // rax
  __int64 v66; // rcx
  const char *v67; // rsi
  char *v68; // rax
  int v69; // eax
  int v70; // eax
  int *v71; // rbp
  __int64 v72; // rbp
  __int64 v73; // rbx
  char *v74; // rax
  __int64 v75; // r14
  char *v76; // r15
  int *v77; // rax
  __int64 v78; // rbp
  __int64 v79; // rbx
  char *v80; // rax
  int v81; // eax
  const char *v82; // [rsp+0h] [rbp-188h]
  char *groupa; // [rsp+8h] [rbp-180h]
  __int64 groupb; // [rsp+8h] [rbp-180h]
  __gid_t groupc; // [rsp+8h] [rbp-180h]
  int filenamec; // [rsp+10h] [rbp-178h]
  char *filename; // [rsp+10h] [rbp-178h]
  char *filenamea; // [rsp+10h] [rbp-178h]
  int filenameb; // [rsp+10h] [rbp-178h]
  int filenamed; // [rsp+10h] [rbp-178h]
  int filenamee; // [rsp+10h] [rbp-178h]
  char *v94; // [rsp+18h] [rbp-170h]
  unsigned int v95; // [rsp+18h] [rbp-170h]
  int v96; // [rsp+18h] [rbp-170h]
  int v97; // [rsp+18h] [rbp-170h]
  int v98; // [rsp+18h] [rbp-170h]
  int ptre; // [rsp+20h] [rbp-168h]
  char *ptr; // [rsp+20h] [rbp-168h]
  int ptra; // [rsp+20h] [rbp-168h]
  int ptrb; // [rsp+20h] [rbp-168h]
  int ptrc; // [rsp+20h] [rbp-168h]
  int *ptrd; // [rsp+20h] [rbp-168h]
  int v105; // [rsp+28h] [rbp-160h]
  int v106; // [rsp+28h] [rbp-160h]
  int v107; // [rsp+28h] [rbp-160h]
  int v108; // [rsp+28h] [rbp-160h]
  int v109; // [rsp+2Ch] [rbp-15Ch]
  struct stat v110; // [rsp+30h] [rbp-158h] BYREF
  struct stat stat_buf; // [rsp+C0h] [rbp-C8h] BYREF

  v9 = a5;
  v12 = *(unsigned __int16 *)(a2 + 112);
  v82 = *(const char **)(a2 + 56);
  switch ( (__int16)v12 )
  {
    case 1:
      v7 = *((unsigned __int8 *)a7 + 4);
      if ( !(_BYTE)v7 )
        goto LABEL_3;
      v34 = (_QWORD *)*((_QWORD *)a7 + 1);
      if ( v34 && *(_QWORD *)(a2 + 128) == *v34 && *(_QWORD *)(a2 + 120) == v34[1] )
      {
        if ( !strcmp(*(const char **)(a2 + 56), "/") )
        {
          v35 = sub_405680(4LL, v82);
          v36 = dcgettext(0LL, "it is dangerous to operate recursively on %s", 5);
          error(0, 0, v36, v35);
        }
        else
        {
          v78 = sub_4055A0(1LL, 4LL, "/");
          v79 = sub_4055A0(0LL, 4LL, v82);
          v80 = dcgettext(0LL, "it is dangerous to operate recursively on %s (same as %s)", 5);
          error(0, 0, v80, v79, v78);
        }
        v7 = 0;
        v37 = dcgettext(0LL, "use --no-preserve-root to override this failsafe", 5);
        error(0, 0, v37);
        fts_set(a1, a2, 4LL);
        fts_read(a1);
      }
      return v7;
    case 2:
      ptre = a6;
      filenamec = *(unsigned __int16 *)(a2 + 112);
      v13 = sub_4065A0();
      v12 = filenamec;
      v9 = a5;
      a6 = ptre;
      if ( !v13 )
        goto LABEL_3;
      v7 = 0;
      v60 = sub_405750(0LL, 3LL, v82);
      v61 = dcgettext(
              0LL,
              "WARNING: Circular directory structure.\n"
              "This almost certainly means that you have a corrupted file system.\n"
              "NOTIFY YOUR SYSTEM MANAGER.\n"
              "The following directory is part of the cycle:\n"
              "  %s\n",
              5);
      error(0, 0, v61, v60);
      return v7;
    case 4:
      v7 = *((unsigned __int8 *)a7 + 17);
      if ( (_BYTE)v7 )
        goto LABEL_47;
      v39 = "cannot read directory %s";
      v40 = sub_405680(4LL, v82);
      goto LABEL_56;
    case 6:
      if ( !*((_BYTE *)a7 + 4) )
        return 1;
      goto LABEL_3;
    case 7:
      v7 = *((unsigned __int8 *)a7 + 17);
      if ( (_BYTE)v7 )
        goto LABEL_47;
      v63 = sub_405750(0LL, 3LL, v82);
      error(0, *(_DWORD *)(a2 + 64), "%s", v63);
      goto LABEL_57;
    case 10:
      if ( !*(_QWORD *)(a2 + 88) && !*(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(a2 + 32) = 1LL;
        fts_set(a1, a2, 1LL);
        return 1;
      }
      v7 = *((unsigned __int8 *)a7 + 17);
      if ( (_BYTE)v7 )
      {
LABEL_47:
        v38 = *a7;
        v7 = 0;
        if ( *a7 == 2 )
          goto LABEL_36;
      }
      else
      {
        v39 = "cannot access %s";
        v40 = sub_405680(4LL, v82);
LABEL_56:
        v41 = dcgettext(0LL, v39, 5);
        error(0, *(_DWORD *)(a2 + 64), v41, v40);
LABEL_57:
        v38 = *a7;
        if ( *a7 == 2 )
          goto LABEL_36;
      }
      if ( v38 )
        goto LABEL_36;
      v27 = (const char *)*((_QWORD *)a7 + 4);
      v28 = (char *)*((_QWORD *)a7 + 3);
      v7 = 0;
      filenamea = 0LL;
      groupa = 0LL;
      v105 = 3;
      goto LABEL_28;
    default:
LABEL_3:
      v14 = (struct stat *)(a2 + 120);
      v15 = a6 & v9;
      filename = *(char **)(a2 + 48);
      v16 = *((_BYTE *)a7 + 16);
      if ( (a6 & v9) == -1 && *a7 == 2 && !*((_QWORD *)a7 + 1) )
      {
        if ( !v16 )
        {
          if ( (v12 & 0xFFFD) == 4 || (unsigned __int16)(v12 - 1) <= 1u )
          {
            v21 = *(_DWORD *)(a1 + 44);
            goto LABEL_20;
          }
LABEL_19:
          v21 = *(_DWORD *)(a1 + 44);
          if ( !v16 )
          {
LABEL_20:
            v22 = sub_406A00(v21, filename, a3, a4);
            v23 = v22 == 0;
            if ( v22 && *__errno_location() == 95 )
            {
              v7 = 1;
              if ( !*a7 )
              {
                filenamea = (char *)sub_402CD0(v14->st_uid);
                groupa = (char *)sub_402C90(v14->st_gid);
                v64 = sub_405680(4LL, v82);
                v65 = dcgettext(0LL, "neither symbolic link %s nor referent has been changed\n", 5);
                __printf_chk(1LL, v65, v64, v66);
                goto LABEL_35;
              }
              goto LABEL_36;
            }
            goto LABEL_22;
          }
          if ( v15 != -1 )
          {
            v46 = v14->st_mode & 0xF000;
            if ( v46 == 0x8000 )
            {
              v95 = 2304;
LABEL_71:
              v106 = a6;
              ptra = v9;
              v47 = __openat_2(v21, filename, v95);
              v48 = ptra;
              v49 = v106;
              v50 = v47;
              if ( v47 < 0 )
              {
                v51 = __errno_location();
                if ( *v51 != 13 )
                {
LABEL_73:
                  v7 = *((unsigned __int8 *)a7 + 17);
                  if ( (_BYTE)v7 )
                  {
                    v52 = *a7;
                    v7 = 0;
                    if ( *a7 == 2 )
                      goto LABEL_36;
LABEL_75:
                    if ( v52 )
                      goto LABEL_36;
                    goto LABEL_97;
                  }
                  groupb = sub_405680(4LL, v82);
                  if ( a3 == -1 )
                    v58 = dcgettext(0LL, "changing group of %s", 5);
                  else
                    v58 = dcgettext(0LL, "changing ownership of %s", 5);
                  v59 = __errno_location();
                  error(0, *v59, v58, groupb);
                  v52 = *a7;
                  if ( *a7 != 2 )
                    goto LABEL_75;
                  goto LABEL_36;
                }
                if ( (v14->st_mode & 0xF000) != 0x8000 )
                  goto LABEL_108;
                v109 = v106;
                v108 = ptra;
                ptrd = v51;
                v70 = __openat_2(v21, filename, v95 | 1);
                v48 = v108;
                v50 = v70;
                v49 = v109;
                if ( v70 < 0 )
                {
                  if ( *ptrd != 13 )
                    goto LABEL_73;
LABEL_108:
                  v21 = *(_DWORD *)(a1 + 44);
                  goto LABEL_109;
                }
              }
              filenameb = v50;
              ptrb = v49;
              v96 = v48;
              v53 = __fxstat(1, v50, &stat_buf);
              v54 = filenameb;
              if ( v53 )
                goto LABEL_116;
              if ( v14->st_ino != stat_buf.st_ino || v14->st_dev != stat_buf.st_dev )
              {
                v55 = __errno_location();
                v56 = *v55;
                close(filenameb);
                v57 = *a7;
                *v55 = v56;
                if ( v57 )
                {
                  v7 = 0;
                  goto LABEL_36;
                }
                v7 = 0;
LABEL_97:
                v105 = 3;
                goto LABEL_98;
              }
              if ( v96 != -1 && v96 != stat_buf.st_uid || ptrb != -1 && ptrb != stat_buf.st_gid )
              {
                v98 = filenameb;
                v71 = __errno_location();
                filenamee = *v71;
                close(v98);
                *v71 = filenamee;
                goto LABEL_23;
              }
              v81 = fchown(filenameb, a3, a4);
              v54 = filenameb;
              if ( v81 )
              {
LABEL_116:
                filenamed = v54;
                v62 = __errno_location();
                groupc = *v62;
                close(filenamed);
                *v62 = groupc;
              }
              else if ( !close(filenameb) )
              {
                goto LABEL_23;
              }
              goto LABEL_73;
            }
            v95 = 67840;
            if ( v46 == 0x4000 )
              goto LABEL_71;
          }
LABEL_109:
          v23 = (unsigned int)sub_406A00(v21, filename, a3, a4) == 0;
LABEL_22:
          if ( v23 )
          {
LABEL_23:
            if ( *a7 != 2 )
            {
              if ( a3 != -1 )
              {
                st_uid = v14->st_uid;
                if ( st_uid != a3 )
                {
                  v105 = 2;
                  st_gid = v14->st_gid;
                  v7 = 1;
LABEL_27:
                  filenamea = (char *)sub_402CD0(st_uid);
                  v26 = sub_402C90(st_gid);
                  v27 = (const char *)*((_QWORD *)a7 + 4);
                  v28 = (char *)*((_QWORD *)a7 + 3);
                  groupa = (char *)v26;
LABEL_28:
                  v29 = sub_402BD0(v28, v27);
                  v30 = 0LL;
                  if ( v27 )
                    v30 = groupa;
                  v94 = v29;
                  if ( v28 )
                  {
                    ptr = sub_402BD0(filenamea, v30);
                    if ( v105 != 3 )
                    {
                      if ( v105 == 4 )
                        v31 = dcgettext(0LL, "ownership of %s retained as %s\n", 5);
                      else
                        v31 = dcgettext(0LL, "changed ownership of %s from %s to %s\n", 5);
LABEL_34:
                      v32 = sub_405680(4LL, v82);
                      __printf_chk(1LL, v31, v32, ptr);
                      free(ptr);
                      free(v94);
LABEL_35:
                      free(filenamea);
                      free(groupa);
                      goto LABEL_36;
                    }
                  }
                  else
                  {
                    ptr = sub_402BD0(0LL, v30);
                    if ( v105 != 3 )
                    {
                      if ( v105 == 4 )
                      {
                        if ( v27 )
                          v31 = dcgettext(0LL, "group of %s retained as %s\n", 5);
                        else
                          v31 = dcgettext(0LL, "ownership of %s retained\n", 5);
                      }
                      else if ( v27 )
                      {
                        v31 = dcgettext(0LL, "changed group of %s from %s to %s\n", 5);
                      }
                      else
                      {
                        v31 = dcgettext(0LL, "no change to ownership of %s\n", 5);
                      }
                      goto LABEL_34;
                    }
                  }
                  if ( ptr )
                  {
                    if ( v28 )
                    {
                      v31 = dcgettext(0LL, "failed to change ownership of %s from %s to %s\n", 5);
                    }
                    else if ( v27 )
                    {
                      v31 = dcgettext(0LL, "failed to change group of %s from %s to %s\n", 5);
                    }
                    else
                    {
                      v31 = dcgettext(0LL, "failed to change ownership of %s\n", 5);
                    }
                  }
                  else
                  {
                    v67 = "failed to change ownership of %s to %s\n";
                    if ( !v28 )
                    {
                      v67 = "failed to change group of %s to %s\n";
                      if ( !v27 )
                        v67 = "failed to change ownership of %s\n";
                    }
                    v31 = dcgettext(0LL, v67, 5);
                    v68 = v94;
                    v94 = 0LL;
                    ptr = v68;
                  }
                  goto LABEL_34;
                }
              }
              if ( a4 != -1 )
              {
                st_gid = v14->st_gid;
                if ( st_gid != a4 )
                {
                  st_uid = v14->st_uid;
                  v105 = 2;
                  v7 = 1;
                  goto LABEL_27;
                }
              }
              if ( !*a7 )
              {
                v105 = 4;
                v7 = 1;
                goto LABEL_98;
              }
            }
            goto LABEL_104;
          }
          goto LABEL_73;
        }
      }
      else if ( !v16 )
      {
LABEL_6:
        v17 = v12 & 0xFFFFFFFD;
        LOBYTE(v7) = (v12 & 0xFFFD) == 4;
        LOBYTE(v17) = (unsigned __int16)(v12 - 1) <= 1u;
        v7 |= v17;
        if ( v9 != -1 && v14->st_uid != v9 )
        {
          if ( !(_BYTE)v7 )
          {
            if ( *a7 )
            {
LABEL_104:
              v7 = 1;
              goto LABEL_36;
            }
            v7 = 1;
            v105 = 4;
LABEL_98:
            st_uid = v14->st_uid;
            st_gid = v14->st_gid;
            goto LABEL_27;
          }
          v18 = (_QWORD *)*((_QWORD *)a7 + 1);
          if ( !v18 || *v18 != v14->st_ino )
          {
            v19 = *a7;
            if ( *a7 == 2 )
              goto LABEL_36;
            goto LABEL_12;
          }
          if ( v14->st_dev != v18[1] )
          {
LABEL_128:
            v19 = *a7;
            v7 = 1;
            if ( *a7 == 2 )
              goto LABEL_36;
LABEL_12:
            if ( v19 )
              goto LABEL_36;
            v105 = 4;
            goto LABEL_98;
          }
LABEL_65:
          if ( !strcmp(v82, "/") )
          {
            v43 = sub_405680(4LL, v82);
            v44 = dcgettext(0LL, "it is dangerous to operate recursively on %s", 5);
            error(0, 0, v44, v43);
          }
          else
          {
            v72 = sub_4055A0(1LL, 4LL, "/");
            v73 = sub_4055A0(0LL, 4LL, v82);
            v74 = dcgettext(0LL, "it is dangerous to operate recursively on %s (same as %s)", 5);
            error(0, 0, v74, v73, v72);
          }
          v7 = 0;
          v45 = dcgettext(0LL, "use --no-preserve-root to override this failsafe", 5);
          error(0, 0, v45);
          return v7;
        }
        if ( a6 == -1 )
        {
          if ( (_BYTE)v7 )
          {
            v42 = (_QWORD *)*((_QWORD *)a7 + 1);
            if ( v42 )
            {
              if ( v14->st_ino == *v42 && v14->st_dev == v42[1] )
                goto LABEL_65;
            }
          }
        }
        else
        {
          if ( (_BYTE)v7 )
          {
            v20 = (_QWORD *)*((_QWORD *)a7 + 1);
            if ( v20 )
            {
              if ( v14->st_ino == *v20 && v14->st_dev == v20[1] )
                goto LABEL_65;
            }
          }
          if ( v14->st_gid != a6 )
            goto LABEL_128;
        }
        v16 = *((_BYTE *)a7 + 16);
        goto LABEL_19;
      }
      if ( (*(_DWORD *)(a2 + 144) & 0xF000) != 40960 )
        goto LABEL_6;
      v107 = a6;
      ptrc = v9;
      v97 = a6 & v9;
      if ( !__fxstatat(1, *(_DWORD *)(a1 + 44), filename, &v110, 0) )
      {
        v12 = *(unsigned __int16 *)(a2 + 112);
        v14 = &v110;
        v15 = v97;
        v9 = ptrc;
        a6 = v107;
        goto LABEL_6;
      }
      v7 = *((unsigned __int8 *)a7 + 17);
      if ( (_BYTE)v7 )
      {
        v69 = *a7;
        v7 = 0;
        if ( *a7 == 2 )
          goto LABEL_36;
      }
      else
      {
        v75 = sub_405680(4LL, v82);
        v76 = dcgettext(0LL, "cannot dereference %s", 5);
        v77 = __errno_location();
        error(0, *v77, v76, v75);
        v69 = *a7;
        if ( *a7 == 2 )
          goto LABEL_36;
      }
      if ( !v69 )
      {
        v14 = &v110;
        v105 = 3;
        goto LABEL_98;
      }
LABEL_36:
      if ( !*((_BYTE *)a7 + 4) )
        fts_set(a1, a2, 4LL);
      return v7;
  }
}

__int64 __fastcall sub_403A80(__int64 a1, __int64 a2, __uid_t a3, __gid_t a4, int a5, int a6, __int64 a7)
{
  unsigned int v10; // ebx
  void *i; // rbp
  __int64 v12; // rax
  int *v13; // r13
  char *v15; // rax
  char *v16; // rax

  if ( (a6 & a5) == -1 && !*(_BYTE *)(a7 + 16) && *(_DWORD *)a7 == 2 )
    a2 = (unsigned int)a2 | 8;
  v10 = 1;
  for ( i = (void *)sub_406550(a1, a2, 0LL); ; v10 &= sub_402D10((__int64)i, v12, a3, a4, a5, a6, (int *)a7) )
  {
    v12 = fts_read(i);
    if ( !v12 )
      break;
  }
  v13 = __errno_location();
  if ( *v13 )
  {
    v10 = *(unsigned __int8 *)(a7 + 17);
    if ( (_BYTE)v10 )
    {
      v10 = 0;
    }
    else
    {
      v16 = dcgettext(0LL, "fts_read failed", 5);
      error(0, *v13, v16);
    }
  }
  if ( (unsigned int)fts_close(i) )
  {
    v10 = 0;
    v15 = dcgettext(0LL, "fts_close failed", 5);
    error(0, *v13, v15);
  }
  return v10;
}

__int64 sub_403BC0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_409EC0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_612398 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_6123A0 )
      {
        v5 = (const char *)sub_405720();
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
  result = sub_409EC0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_403C60(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  while ( 1 )
  {
    *(_BYTE *)--v2 = a1 % 0xA + 48;
    if ( a1 <= 9 )
      break;
    a1 /= 0xAuLL;
  }
  return v2;
}

char *__fastcall sub_403CB0(const char *a1)
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
  qword_6123A8 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_403D50(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40B370();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40D971;
      if ( !v5 )
        return (const char *)&unk_40D966;
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
    v2 = (char *)&unk_40D96D;
    if ( !v5 )
      return (const char *)&unk_40D96A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return v6;
}

unsigned __int64 __fastcall sub_403E50(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        const char *a8,
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
  const char *v58; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
                return sub_403E50((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_403E50((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_409D10((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_403E50((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_403D50("`", a5);
        v51 = (char *)sub_403D50((char *)"'", a5);
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

unsigned __int64 __fastcall sub_403E50(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        const char *a8,
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
  const char *v58; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
                return sub_403E50((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_403E50((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_409D10((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_403E50((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_403D50("`", a5);
        v51 = (char *)sub_403D50((char *)"'", a5);
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

_BYTE *__fastcall sub_405080(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_612330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406510();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_612320 )
    {
      v7 = (__m128i *)sub_406320(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      ptr = (void *)sub_406320(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_612330], 0, 16LL * (a1 + 1 - dword_612330));
    dword_612330 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_403E50(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6123C0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4062C0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_403E50(v14, v13, a2, a3, v15, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_405080(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_612330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406510();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_612320 )
    {
      v7 = (__m128i *)sub_406320(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      ptr = (void *)sub_406320(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_612330], 0, 16LL * (a1 + 1 - dword_612330));
    dword_612330 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_403E50(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6123C0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4062C0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_403E50(v14, v13, a2, a3, v15, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_405220(__int128 *a1)
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
    v1 = &xmmword_6124C0;
  result = sub_4064C0(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_405310(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_6124C0;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_403E50(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((const char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_405390(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_6124C0;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_403E50(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_4062C0(v11 + 1);
  sub_403E50(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_405490()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_612330 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_612330 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_6123C0 )
  {
    free(v4);
    *(_QWORD *)&xmmword_612320 = 256LL;
    *((_QWORD *)&xmmword_612320 + 1) = &unk_6123C0;
  }
  if ( v0 != &xmmword_612320 )
  {
    free(v0);
    ptr = &xmmword_612320;
  }
  dword_612330 = 1;
}

_BYTE *__fastcall sub_4055A0(int a1, int a2, __int64 a3)
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
  return sub_405080(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4055A0(int a1, int a2, __int64 a3)
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
  return sub_405080(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405610(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_405080(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_405610(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_405080(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_405680(int a1, __int64 a2)
{
  return sub_4055A0(0, a1, a2);
}

_BYTE *__fastcall sub_4056A0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_6124F0;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124C0);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124D0);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124E0);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_405080(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_405720(__int64 a1)
{
  return sub_4056A0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_405750(int a1, int a2, __int64 a3)
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
  return sub_405080(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405750(int a1, int a2, __int64 a3)
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
  return sub_405080(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4057C0(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124C0);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124D0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_6124E0);
  v8 = qword_6124F0;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_405080(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_4058D0(__int64 a1)
{
  return sub_405080(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6122E0);
}

__ino_t *__fastcall sub_4058F0(__ino_t *a1)
{
  struct stat v2; // [rsp+0h] [rbp-98h] BYREF

  if ( __lxstat(1, "/", &v2) )
    return 0LL;
  *a1 = v2.st_ino;
  a1[1] = v2.st_dev;
  return a1;
}

char *__fastcall sub_405940(_BYTE *a1, _BYTE *a2, int *a3, __gid_t *a4, char **a5, char **a6)
{
  __gid_t pw_gid; // r15d
  __int64 v10; // r14
  char *v11; // r14
  char *v12; // rbx
  struct group *v13; // rax
  char *v15; // rax
  _BYTE *v16; // r10
  bool v17; // dl
  struct passwd *v18; // rax
  const char *v19; // r12
  void *v20; // rbp
  __int64 v21; // rax
  struct group *v22; // rax
  void *gr_name; // rdi
  __uid_t pw_uid; // [rsp+Ch] [rbp-6Ch]
  bool v25; // [rsp+Ch] [rbp-6Ch]
  unsigned __int64 v27[11]; // [rsp+20h] [rbp-58h] BYREF

  pw_gid = -1;
  pw_uid = *a3;
  if ( a4 )
    pw_gid = *a4;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( !a2 )
  {
    v12 = 0LL;
    v11 = 0LL;
    if ( !*a1 )
      goto LABEL_15;
    v21 = sub_4064F0(a1);
    v16 = 0LL;
    v12 = (char *)v21;
    goto LABEL_34;
  }
  v10 = a2 - a1;
  if ( a2 == a1 )
  {
    v11 = a2 + 1;
    if ( a2[1] )
      goto LABEL_10;
    v12 = 0LL;
LABEL_40:
    v11 = 0LL;
    goto LABEL_15;
  }
  v15 = (char *)sub_4064C0(a1, v10 + 1);
  v16 = a2;
  v15[v10] = 0;
  v12 = v15;
  if ( !a2[1] )
  {
LABEL_34:
    if ( !v12 )
      goto LABEL_40;
    v11 = 0LL;
    v17 = v16 != 0LL;
    if ( *v12 == 43 )
    {
LABEL_36:
      if ( v17 )
      {
        endpwent();
        v19 = "invalid spec";
        v20 = 0LL;
        goto LABEL_38;
      }
      if ( (unsigned int)sub_4065D0(v12) || (pw_uid = v27[0], v27[0] > 0xFFFFFFFE) )
      {
        endpwent();
        v19 = "invalid user";
        v20 = 0LL;
        goto LABEL_38;
      }
      endpwent();
      if ( !v11 )
        goto LABEL_15;
LABEL_11:
      if ( *v11 != 43 )
        goto LABEL_12;
      goto LABEL_29;
    }
LABEL_25:
    v25 = v17;
    v18 = getpwnam(v12);
    v17 = v25;
    if ( v18 )
    {
      pw_uid = v18->pw_uid;
      if ( v17 )
      {
        pw_gid = v18->pw_gid;
        v22 = getgrgid(pw_gid);
        if ( v22 )
          gr_name = v22->gr_name;
        else
          gr_name = (void *)sub_403C60(pw_gid, (__int64)v27);
        v11 = (char *)sub_4064F0(gr_name);
        endgrent();
        endpwent();
        goto LABEL_15;
      }
      endpwent();
      if ( v11 )
      {
        if ( *v11 != 43 )
        {
LABEL_12:
          v13 = getgrnam(v11);
          if ( v13 )
          {
            pw_gid = v13->gr_gid;
LABEL_14:
            endgrent();
            v11 = (char *)sub_4064F0(v11);
            goto LABEL_15;
          }
        }
LABEL_29:
        if ( !(unsigned int)sub_4065D0(v11) )
        {
          pw_gid = v27[0];
          if ( v27[0] <= 0xFFFFFFFE )
            goto LABEL_14;
        }
        endgrent();
        v19 = "invalid group";
        v20 = (void *)sub_4064F0(v11);
LABEL_38:
        free(v12);
        free(v20);
        return dcgettext(0LL, v19, 5);
      }
      goto LABEL_15;
    }
    goto LABEL_36;
  }
  v11 = a2 + 1;
  if ( v15 )
  {
    v17 = a2 != 0LL && v11 == 0LL;
    if ( *v15 == 43 )
      goto LABEL_36;
    goto LABEL_25;
  }
LABEL_10:
  v12 = 0LL;
  if ( v11 )
    goto LABEL_11;
LABEL_15:
  *a3 = pw_uid;
  if ( a4 )
    *a4 = pw_gid;
  if ( a5 )
  {
    *a5 = v12;
    v12 = 0LL;
  }
  if ( a6 )
  {
    *a6 = v11;
    v11 = 0LL;
  }
  free(v12);
  free(v11);
  return 0LL;
}

char *__fastcall sub_405C50(char *s, int *a2, __gid_t *a3, char **a4, char **a5)
{
  char *v8; // r15
  char *v9; // rax
  char *v10; // r10
  char *v11; // rax
  char *v12; // rax
  char *v14; // [rsp+0h] [rbp-40h]

  if ( !a3 )
    return sub_405940(s, 0LL, a2, 0LL, a4, a5);
  v8 = strchr(s, 58);
  v9 = sub_405940(s, v8, a2, a3, a4, a5);
  v10 = v9;
  if ( !v8 )
  {
    v14 = v9;
    if ( !v9 )
      return 0LL;
    v11 = strchr(s, 46);
    v10 = v14;
    if ( v11 )
    {
      v12 = sub_405940(s, v11, a2, a3, a4, a5);
      v10 = v14;
      if ( !v12 )
        return 0LL;
    }
  }
  return v10;
}

__int64 __fastcall sub_405D20(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_405D20(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_406120(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_405D20(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_405D20(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_406180(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_405D20(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_405D20(a1, a2, a3, a4, v15, i);
}

int sub_406240()
{
  char *v0; // rax
  __int64 v1; // rcx
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1);
  v2 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v2, &unk_40C700, "https://www.gnu.org/software/coreutils/");
  v3 = stdout;
  v4 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v4, v3);
}

void *__fastcall sub_4062C0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_406510();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_406310(size_t a1)
{
  return sub_4062C0(a1);
}

void *__fastcall sub_406320(void *a1, size_t a2)
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
        sub_406510();
    }
  }
  return result;
}

void *__fastcall sub_406470(size_t n)
{
  void *v1; // rax

  v1 = sub_4062C0(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_406490(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_406510(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_4064C0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4062C0(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_4064F0(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_4064C0(src, v1 + 1);
}

void __noreturn sub_406510()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_406550(__int64 a1, int a2)
{
  __int64 result; // rax

  result = fts_open(a1, a2 | 0x200u);
  if ( !result )
  {
    if ( *__errno_location() != 22 )
      sub_406510();
    __assert_fail("errno != EINVAL", "lib/xfts.c", 0x29u, "xfts_open");
  }
  return result;
}

bool __fastcall sub_4065A0(__int64 a1, __int64 a2)
{
  bool result; // al
  int v3; // edx

  result = 1;
  v3 = *(_DWORD *)(a1 + 72) & 0x11;
  if ( v3 != 16 )
  {
    result = 0;
    if ( v3 == 17 )
      return *(_QWORD *)(a2 + 88) != 0LL;
  }
  return result;
}

__int64 __fastcall sub_4065D0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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

__int64 __fastcall sub_406A00(int fd, char *file, __uid_t owner, __gid_t group, int a5)
{
  const char *v10; // rax
  int v11; // eax
  unsigned int v12; // r13d
  int *v13; // rax
  unsigned __int64 v14; // rsi
  int *v15; // rdi
  __int64 v16; // rcx
  int *v18; // rbx
  int v19; // ebp
  int *v20; // rax
  int v21; // ebp
  int *v22; // rbx
  int *v23; // rax
  int *v24; // rax
  int *ptr; // [rsp+0h] [rbp-1008h]
  int *ptra; // [rsp+0h] [rbp-1008h]
  unsigned int v27; // [rsp+Ch] [rbp-FFCh]
  int v28[1022]; // [rsp+10h] [rbp-FF8h] BYREF

  if ( (a5 & 0xFFFFFEFF) != 0 )
  {
    v12 = -1;
    *__errno_location() = 22;
    return v12;
  }
  if ( fd == -100 || *file == 47 )
  {
    if ( a5 == 256 )
      return (unsigned int)lchown(file, owner, group);
    else
      return (unsigned int)chown(file, owner, group);
  }
  v10 = (const char *)sub_409D90(v28, (unsigned int)fd, file);
  if ( !v10 )
    goto LABEL_12;
  ptr = (int *)v10;
  if ( a5 == 256 )
    v11 = lchown(v10, owner, group);
  else
    v11 = chown(v10, owner, group);
  v12 = v11;
  v13 = __errno_location();
  v14 = (unsigned int)*v13;
  if ( ptr != v28 )
  {
    v15 = ptr;
    v27 = *v13;
    ptra = v13;
    free(v15);
    v14 = v27;
    v13 = ptra;
  }
  if ( v12 != -1 )
    return v12;
  if ( (unsigned int)v14 > 0x26 )
  {
    if ( (_DWORD)v14 == 95 )
      goto LABEL_12;
LABEL_25:
    *v13 = v14;
    return v12;
  }
  v16 = 0x4000102006LL;
  if ( !_bittest64(&v16, v14) )
    goto LABEL_25;
LABEL_12:
  if ( (unsigned int)sub_40B990(v28) )
  {
    v24 = __errno_location();
    sub_40B8E0(*v24);
  }
  if ( fd >= 0 && v28[0] == fd )
  {
    v12 = -1;
    sub_40BA00(v28);
    *__errno_location() = 9;
    return v12;
  }
  if ( fchdir(fd) )
  {
    v20 = __errno_location();
    v12 = -1;
    v21 = *v20;
    v22 = v20;
    sub_40BA00(v28);
    *v22 = v21;
    return v12;
  }
  if ( a5 == 256 )
    v12 = lchown(file, owner, group);
  else
    v12 = chown(file, owner, group);
  if ( v12 != -1 )
  {
    if ( !(unsigned int)sub_40B9E0(v28) )
    {
      sub_40BA00(v28);
      return v12;
    }
LABEL_35:
    v23 = __errno_location();
    sub_40B910(*v23);
  }
  v18 = __errno_location();
  v19 = *v18;
  if ( (unsigned int)sub_40B9E0(v28) )
    goto LABEL_35;
  sub_40BA00(v28);
  if ( v19 )
    *v18 = v19;
  return v12;
}

unsigned __int64 __fastcall sub_406C90(__int64 a1, unsigned __int64 a2)
{
  return *(_QWORD *)(a1 + 8) % a2;
}

unsigned __int64 __fastcall sub_406CA0(_QWORD *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_406CB0(_QWORD *a1, _QWORD *a2)
{
  return *a1 == *a2;
}

__int64 __fastcall sub_406CC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 128LL);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 128LL) >= v3 )
    return *(_QWORD *)(*(_QWORD *)a1 + 128LL) > v3;
  return result;
}

__int64 __fastcall sub_406CF0(__int64 a1, __int64 a2, char a3)
{
  struct stat *v3; // rbp
  int v5; // eax
  bool v6; // zf
  const char *v7; // rsi
  int *v8; // r12
  int v9; // eax
  __int64 result; // rax
  int v11; // eax
  unsigned __int64 v12; // rax

  v3 = (struct stat *)(a2 + 120);
  v5 = *(_DWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a2 + 88) == 0LL;
  v7 = *(const char **)(a2 + 48);
  if ( v6 && (v5 & 1) != 0 || (v5 & 2) != 0 || a3 )
  {
    if ( !__xstat(1, v7, v3) )
      goto LABEL_10;
    v8 = __errno_location();
    v9 = *v8;
    if ( *v8 == 2 )
    {
      if ( !__lxstat(1, *(const char **)(a2 + 48), v3) )
      {
        *v8 = 0;
        return 13LL;
      }
      v9 = *v8;
    }
LABEL_15:
    *(_DWORD *)(a2 + 64) = v9;
    *(_QWORD *)(a2 + 120) = 0LL;
    v3->__unused[2] = 0LL;
    memset(
      (void *)((unsigned __int64)&v3->st_ino & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v3 - (((_DWORD)v3 + 8) & 0xFFFFFFF8) + 144) >> 3));
    return 10LL;
  }
  if ( __fxstatat(1, *(_DWORD *)(a1 + 44), v7, v3, 256) )
  {
    v9 = *__errno_location();
    goto LABEL_15;
  }
LABEL_10:
  v11 = *(_DWORD *)(a2 + 144) & 0xF000;
  if ( v11 == 0x4000 )
  {
    v12 = *(_QWORD *)(a2 + 136);
    if ( v12 <= 1 || *(__int64 *)(a2 + 88) <= 0 )
    {
      v12 = -1LL;
    }
    else if ( (*(_BYTE *)(a1 + 72) & 0x20) == 0 )
    {
      v12 -= 2LL;
    }
    v6 = *(_BYTE *)(a2 + 264) == 46;
    *(_QWORD *)(a2 + 104) = v12;
    result = 1LL;
    if ( v6 && (!*(_BYTE *)(a2 + 265) || (*(_DWORD *)(a2 + 264) & 0xFFFF00) == 11776) )
      return *(_QWORD *)(a2 + 88) == 0LL ? 1 : 5;
  }
  else if ( v11 == 40960 )
  {
    return 12LL;
  }
  else
  {
    return 5 * (unsigned int)(v11 == 0x8000) + 3;
  }
  return result;
}

__int64 __fastcall sub_406EA0(_QWORD *a1, __int64 a2, size_t a3)
{
  __int64 v5; // rbx
  int (*v6)(const void *, const void *); // r13
  void *v7; // rdi
  void *v8; // rax
  _QWORD *v9; // rdx
  __int64 *v10; // r8
  __int64 result; // rax
  __int64 *v12; // rdx
  __int64 v13; // rsi
  size_t v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx

  v5 = a2;
  v6 = (int (*)(const void *, const void *))a1[8];
  v7 = (void *)a1[2];
  if ( a1[7] >= a3 )
    goto LABEL_5;
  a1[7] = a3 + 40;
  if ( a3 + 40 > 0x1FFFFFFFFFFFFFFFLL )
  {
LABEL_14:
    free(v7);
    a1[2] = 0LL;
    result = a2;
    a1[7] = 0LL;
    return result;
  }
  v8 = realloc(v7, 8 * (a3 + 40));
  v7 = v8;
  if ( !v8 )
  {
    v7 = (void *)a1[2];
    goto LABEL_14;
  }
  a1[2] = v8;
LABEL_5:
  v9 = v7;
  if ( a2 )
  {
    do
    {
      *v9++ = v5;
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 );
  }
  qsort(v7, a3, 8uLL, v6);
  v10 = (__int64 *)a1[2];
  result = *v10;
  v12 = v10;
  v13 = *v10;
  v14 = a3 - 1;
  if ( a3 == 1 )
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
    v16 = v10[a3 - 1];
  }
  *(_QWORD *)(v16 + 16) = 0LL;
  return result;
}

char *__fastcall sub_406FA0(__int64 a1, const void *a2, size_t a3)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rax

  v4 = (char *)malloc((a3 + 272) & 0xFFFFFFFFFFFFFFF8LL);
  v5 = v4;
  if ( v4 )
  {
    memcpy(v4 + 264, a2, a3);
    v6 = *(_QWORD *)(a1 + 32);
    v5[a3 + 264] = 0;
    *((_QWORD *)v5 + 12) = a3;
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

void __fastcall sub_407030(void *ptr)
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

__int64 __fastcall sub_407080(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  while ( 1 )
  {
    result = sub_40B2D0(a1);
    if ( (_BYTE)result )
      break;
    v1 = sub_40B320(a1);
    if ( v1 >= 0 )
      close(v1);
  }
  return result;
}

__fsword_t __fastcall sub_4070C0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rax
  __fsword_t result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  struct statfs v8; // [rsp+0h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( (*(_BYTE *)(v1 + 73) & 2) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 80);
  if ( !v2 )
  {
    v2 = sub_40A8F0(13LL, 0LL, sub_406CA0, sub_406CB0, free);
    *(_QWORD *)(v1 + 80) = v2;
    if ( !v2 )
    {
      if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
        return 0LL;
      return v8.f_type;
    }
  }
  v8.f_type = *(_QWORD *)(a1 + 120);
  v3 = sub_40A680(v2, &v8);
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
    v7 = sub_40B090(v2, v5);
    if ( v7 )
    {
      if ( v5 != (_QWORD *)v7 )
        abort();
      return v8.f_type;
    }
    free(v5);
    return v8.f_type;
  }
  return result;
}

__fsword_t __fastcall sub_4070C0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rax
  __fsword_t result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  struct statfs v8; // [rsp+0h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( (*(_BYTE *)(v1 + 73) & 2) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 80);
  if ( !v2 )
  {
    v2 = sub_40A8F0(13LL, 0LL, sub_406CA0, sub_406CB0, free);
    *(_QWORD *)(v1 + 80) = v2;
    if ( !v2 )
    {
      if ( fstatfs(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 44LL), &v8) )
        return 0LL;
      return v8.f_type;
    }
  }
  v8.f_type = *(_QWORD *)(a1 + 120);
  v3 = sub_40A680(v2, &v8);
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
    v7 = sub_40B090(v2, v5);
    if ( v7 )
    {
      if ( v5 != (_QWORD *)v7 )
        abort();
      return v8.f_type;
    }
    free(v5);
    return v8.f_type;
  }
  return result;
}

__int64 __fastcall sub_4071E0(__int64 a1)
{
  __fsword_t v1; // rax
  unsigned int v2; // edx

  v1 = sub_4070C0(a1);
  if ( v1 == 40864 )
    return 0;
  if ( v1 > 40864 )
  {
    if ( v1 != 1397113167 )
    {
      v2 = 2;
      if ( v1 != 1481003842 )
        return (unsigned int)(v1 == 1382369651) + 1;
      return v2;
    }
    return 0;
  }
  v2 = 0;
  if ( !v1 )
    return v2;
  return v1 != 26985;
}

void __fastcall sub_407250(__int64 a1, int a2, char a3)
{
  int v4; // esi
  int v5; // eax

  v4 = *(_DWORD *)(a1 + 44);
  if ( v4 == a2 && v4 != -100 )
    abort();
  if ( a3 )
  {
    v5 = sub_40B2E0(a1 + 96);
    if ( v5 < 0 )
    {
LABEL_6:
      *(_DWORD *)(a1 + 44) = a2;
      return;
    }
    close(v5);
    *(_DWORD *)(a1 + 44) = a2;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 72) & 4) != 0 || v4 < 0 )
      goto LABEL_6;
    close(v4);
    *(_DWORD *)(a1 + 44) = a2;
  }
}

__int64 __fastcall sub_4072C0(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ebp

  v1 = *(_DWORD *)(a1 + 72);
  v2 = v1 & 4;
  if ( (v1 & 4) != 0 )
  {
    v2 = 0;
  }
  else if ( (v1 & 0x200) != 0 )
  {
    sub_407250(a1, -100, 1);
  }
  else
  {
    v2 = fchdir(*(_DWORD *)(a1 + 40)) != 0;
  }
  sub_407080(a1 + 96);
  return v2;
}

__int64 __fastcall sub_407320(void **a1, size_t *a2, __int64 a3)
{
  void *v4; // rdi
  size_t v5; // rax
  void *v6; // rax

  v4 = *a1;
  v5 = *a2 + a3 + 256;
  if ( *a2 > v5 )
  {
    free(v4);
    *a1 = 0LL;
    *__errno_location() = 36;
    return 0LL;
  }
  else
  {
    *a2 = v5;
    v6 = realloc(v4, v5);
    if ( v6 )
    {
      *a1 = v6;
      return 1LL;
    }
    else
    {
      free(*a1);
      *a1 = 0LL;
      return 0LL;
    }
  }
}

bool __fastcall sub_407390(__int16 a1, __int64 *a2)
{
  __int64 v2; // rax
  bool result; // al
  void *v4; // rdi

  if ( (a1 & 0x102) != 0 )
  {
    v2 = sub_40A8F0(31LL, 0LL, sub_406C90, sub_406C70, free);
    *a2 = v2;
    return v2 != 0;
  }
  else
  {
    v4 = malloc(0x20uLL);
    *a2 = (__int64)v4;
    result = 0;
    if ( v4 )
    {
      sub_409F20();
      return 1;
    }
  }
  return result;
}

__int64 __fastcall sub_4073F0(int a1, int a2, int a3, __int64 a4, int a5, int a6, char a7)
{
  int v8; // edx

  v8 = (a2 << 7) & 0x40000 | (a2 << 13) & 0x20000 | 0x90900;
  if ( (a2 & 0x200) != 0 )
    return sub_40B940(a1, a3, v8, a3, a5, a6, a7);
  else
    return sub_409FB0(a3, v8, v8, a3, a5, a6, a7);
}

__int64 __fastcall sub_407440(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  int v8; // ebp
  const char *v9; // rbx
  int v10; // r12d
  bool v11; // cf
  bool v12; // zf
  const char *v13; // rdi
  const char *v14; // rsi
  char v15; // r14
  int v16; // eax
  int v17; // r12d
  unsigned int v18; // ebx
  int *v19; // rax
  int v20; // r13d
  int *v21; // rbp
  char v23; // [rsp+0h] [rbp-D8h]
  struct stat stat_buf; // [rsp+10h] [rbp-C8h] BYREF

  v8 = a3;
  v9 = (const char *)a4;
  v10 = *(_DWORD *)(a1 + 72);
  v11 = 0;
  v12 = a4 == 0;
  if ( !a4 )
    goto LABEL_12;
  v13 = "..";
  a4 = 3LL;
  v14 = v9;
  do
  {
    if ( !a4 )
      break;
    v11 = *v14 < (unsigned int)*v13;
    v12 = *v14++ == *v13++;
    --a4;
  }
  while ( v12 );
  if ( (!v11 && !v12) == v11 )
  {
    if ( (v10 & 4) == 0 )
    {
      if ( a3 >= 0 )
      {
        v17 = a3;
        v15 = 1;
        goto LABEL_15;
      }
      if ( (v10 & 0x200) != 0 )
      {
        v15 = sub_40B2D0(a1 + 96);
        if ( !v15 )
        {
          v16 = sub_40B320(a1 + 96);
          v17 = v16;
          if ( v16 >= 0 )
          {
            v8 = v16;
            v15 = 1;
            goto LABEL_15;
          }
          v10 = *(_DWORD *)(a1 + 72);
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
      }
LABEL_27:
      v17 = sub_4073F0(*(_DWORD *)(a1 + 44), v10, (int)v9, a4, a5, a6, v23);
      if ( v17 < 0 )
        return (unsigned int)-1;
LABEL_15:
      v18 = __fxstat(1, v17, &stat_buf);
      if ( !v18 )
      {
        if ( *(_QWORD *)(a2 + 120) == stat_buf.st_dev && *(_QWORD *)(a2 + 128) == stat_buf.st_ino )
        {
          if ( (*(_BYTE *)(a1 + 73) & 2) != 0 )
          {
            sub_407250(a1, v17, v15 ^ 1);
            return v18;
          }
          v18 = fchdir(v17);
          goto LABEL_20;
        }
        *__errno_location() = 2;
      }
      v18 = -1;
LABEL_20:
      if ( v8 < 0 )
      {
        v19 = __errno_location();
        v20 = *v19;
        v21 = v19;
        close(v17);
        *v21 = v20;
      }
      return v18;
    }
  }
  else
  {
LABEL_12:
    if ( (v10 & 4) == 0 )
    {
      if ( a3 >= 0 )
      {
        v17 = a3;
        v15 = 0;
        goto LABEL_15;
      }
      v15 = 0;
      goto LABEL_27;
    }
  }
  if ( (v10 & 0x200) != 0 && a3 >= 0 )
  {
    v18 = 0;
    close(a3);
  }
  else
  {
    return 0;
  }
  return v18;
}

__int64 __fastcall sub_407610(__int16 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 result; // rax

  if ( (a1 & 0x102) != 0 )
  {
    v4 = malloc(0x18uLL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a3 + 120);
      v6 = *a2;
      v4[2] = a3;
      *v4 = v5;
      v4[1] = *(_QWORD *)(a3 + 128);
      v7 = sub_40B090(v6, v4);
      if ( v4 == (_QWORD *)v7 )
        return 1LL;
      free(v4);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 16);
        *(_WORD *)(a3 + 112) = 2;
        *(_QWORD *)a3 = v8;
        return 1LL;
      }
    }
    return 0LL;
  }
  else
  {
    result = sub_409F30(*a2, a3 + 120);
    if ( !(_BYTE)result )
      return 1LL;
    *(_QWORD *)a3 = a3;
    *(_WORD *)(a3 + 112) = 2;
  }
  return result;
}

void __fastcall sub_4076C0(__int16 a1, __int64 **a2, _QWORD *a3)
{
  __int64 *v3; // rax
  __int64 *v4; // rcx
  __int64 *v5; // rdi
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( (a1 & 0x102) != 0 )
  {
    v5 = *a2;
    v9[0] = a3[15];
    v9[1] = a3[16];
    v6 = (void *)sub_40B0D0(v5, v9);
    if ( v6 )
    {
      free(v6);
      return;
    }
    goto LABEL_11;
  }
  v3 = (__int64 *)a3[1];
  if ( !v3 || v3[11] < 0 )
    return;
  v4 = *a2;
  if ( !(*a2)[2] )
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

void __fastcall sub_4076C0(__int16 a1, __int64 **a2, _QWORD *a3)
{
  __int64 *v3; // rax
  __int64 *v4; // rcx
  __int64 *v5; // rdi
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( (a1 & 0x102) != 0 )
  {
    v5 = *a2;
    v9[0] = a3[15];
    v9[1] = a3[16];
    v6 = (void *)sub_40B0D0(v5, v9);
    if ( v6 )
    {
      free(v6);
      return;
    }
    goto LABEL_11;
  }
  v3 = (__int64 *)a3[1];
  if ( !v3 || v3[11] < 0 )
    return;
  v4 = *a2;
  if ( !(*a2)[2] )
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

__int64 __fastcall sub_407760(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // r13
  DIR *v8; // rdi
  size_t v9; // r8
  int v10; // r9d
  int v11; // edi
  _BYTE *v12; // rax
  size_t v13; // rbp
  __int64 v14; // rbx
  DIR *v15; // r15
  int *v16; // rax
  int *v17; // r12
  struct dirent *v18; // rax
  struct dirent *v19; // r14
  size_t v20; // r13
  char *v21; // r15
  const void *v22; // rsi
  __int64 v23; // rax
  int v24; // eax
  int d_type; // esi
  __int64 v26; // rdx
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rdx
  _BYTE *v30; // rdx
  __int64 v31; // r13
  __int64 v32; // r15
  _QWORD *v33; // rax
  __int64 i; // rcx
  _QWORD *v35; // rdx
  char *j; // rax
  char *v37; // rdx
  char *v38; // rdx
  int v39; // eax
  int v40; // ecx
  int v41; // edi
  int v42; // eax
  int v43; // ebx
  DIR *v44; // rax
  int v45; // ecx
  bool v46; // zf
  int v47; // edi
  char v48; // r14
  bool v49; // r12
  DIR *v50; // rdi
  __int16 v51; // bp
  char *v52; // rcx
  __int64 v53; // r15
  int v54; // ebx
  __int64 v56; // rax
  DIR *v58; // rdi
  int *v59; // rax
  int v60; // r12d
  int *v61; // rbp
  __fsword_t v62; // rax
  __int64 v63; // rax
  __int16 v64; // ax
  DIR *dirp; // [rsp+8h] [rbp-90h]
  __int64 v66; // [rsp+10h] [rbp-88h]
  char *ptr; // [rsp+18h] [rbp-80h]
  size_t v68; // [rsp+20h] [rbp-78h]
  __int64 v69; // [rsp+20h] [rbp-78h]
  __int64 v70; // [rsp+28h] [rbp-70h]
  __int64 v71; // [rsp+30h] [rbp-68h]
  unsigned __int64 v72; // [rsp+38h] [rbp-60h]
  _BYTE *dest; // [rsp+40h] [rbp-58h]
  __int64 v74; // [rsp+48h] [rbp-50h]
  DIR *v75; // [rsp+50h] [rbp-48h]
  char v77; // [rsp+5Eh] [rbp-3Ah]
  char v78; // [rsp+5Fh] [rbp-39h]

  v7 = *(_QWORD *)a1;
  v8 = *(DIR **)(*(_QWORD *)a1 + 24LL);
  v75 = v8;
  if ( v8 )
  {
    if ( dirfd(v8) >= 0 )
    {
      if ( !*(_QWORD *)(a1 + 64) )
      {
        v72 = 100000LL;
        v11 = *(_DWORD *)(a1 + 72);
        v78 = 1;
        goto LABEL_6;
      }
      v72 = -1LL;
      goto LABEL_5;
    }
    closedir(*(DIR **)(v7 + 24));
    *(_QWORD *)(v7 + 24) = 0LL;
    if ( a2 == 3 )
      goto LABEL_130;
    return 0LL;
  }
  v39 = *(_DWORD *)(a1 + 72);
  v40 = v39 & 0x10;
  if ( (v39 & 0x10) != 0 )
  {
    v40 = 0x20000;
    if ( (v39 & 1) != 0 )
      v40 = (*(_QWORD *)(v7 + 88) != 0LL) << 17;
  }
  v41 = -100;
  if ( (v39 & 0x204) == 512 )
    v41 = *(_DWORD *)(a1 + 44);
  v42 = sub_40B940(v41, *(_QWORD *)(v7 + 48), v40 | (v39 << 7) & 0x40000 | 0x90900u, v40, a5, a6);
  v43 = v42;
  if ( v42 < 0 )
  {
LABEL_117:
    *(_QWORD *)(v7 + 24) = 0LL;
    if ( a2 == 3 )
    {
LABEL_130:
      *(_WORD *)(v7 + 112) = 4;
      *(_DWORD *)(v7 + 64) = *__errno_location();
    }
    return 0LL;
  }
  v44 = fdopendir(v42);
  if ( !v44 )
  {
    v59 = __errno_location();
    v60 = *v59;
    v61 = v59;
    close(v43);
    *v61 = v60;
    goto LABEL_117;
  }
  v46 = *(_WORD *)(v7 + 112) == 11;
  *(_QWORD *)(v7 + 24) = v44;
  if ( v46 )
  {
    *(_WORD *)(v7 + 112) = sub_406CF0(a1, v7, 0);
  }
  else
  {
    v47 = *(_DWORD *)(a1 + 72);
    if ( (v47 & 0x100) != 0 )
    {
      sub_4076C0(v47, (__int64 **)(a1 + 88), (_QWORD *)v7);
      sub_406CF0(a1, v7, 0);
      if ( !(unsigned __int8)sub_407610(*(_DWORD *)(a1 + 72), (_QWORD *)(a1 + 88), v7) )
      {
        ptr = 0LL;
        *__errno_location() = 12;
        return (__int64)ptr;
      }
    }
  }
  v72 = *(_QWORD *)(a1 + 64) == 0LL ? 100000LL : -1LL;
  if ( a2 == 2 )
    goto LABEL_120;
  if ( (*(_DWORD *)(a1 + 72) & 0x38) == 24 && *(_QWORD *)(v7 + 136) == 2LL && (unsigned int)sub_4071E0(v7) )
  {
    if ( a2 == 3 )
    {
      v48 = 0;
      v49 = 1;
      goto LABEL_72;
    }
LABEL_120:
    v78 = 0;
    v11 = *(_DWORD *)(a1 + 72);
    goto LABEL_6;
  }
  v48 = 1;
  v49 = a2 == 3;
LABEL_72:
  if ( (*(_BYTE *)(a1 + 73) & 2) != 0 )
  {
    v43 = sub_40BDE0(v43, 1030, 3, v45, v9, v10);
    if ( v43 < 0 )
    {
      v50 = *(DIR **)(v7 + 24);
      v51 = *(_WORD *)(v7 + 114) | 1;
      if ( !v49 || !v48 )
      {
        *(_WORD *)(v7 + 114) |= 1u;
        closedir(v50);
        v11 = *(_DWORD *)(a1 + 72);
LABEL_80:
        *(_QWORD *)(v7 + 24) = 0LL;
        v78 = 0;
        goto LABEL_6;
      }
      goto LABEL_76;
    }
  }
  if ( (unsigned int)sub_407440(a1, v7, v43, 0LL, v9, v10) )
  {
    v50 = *(DIR **)(v7 + 24);
    v51 = *(_WORD *)(v7 + 114) | 1;
    if ( !v49 || !v48 )
    {
LABEL_77:
      *(_WORD *)(v7 + 114) = v51;
      closedir(v50);
      v11 = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(v7 + 24) = 0LL;
      if ( (v11 & 0x200) != 0 && v43 >= 0 )
      {
        close(v43);
        v11 = *(_DWORD *)(a1 + 72);
      }
      goto LABEL_80;
    }
LABEL_76:
    *(_DWORD *)(v7 + 64) = *__errno_location();
    goto LABEL_77;
  }
LABEL_5:
  v78 = 1;
  v11 = *(_DWORD *)(a1 + 72);
LABEL_6:
  v66 = *(_QWORD *)(v7 + 72);
  v74 = v66 - 1;
  if ( *(_BYTE *)(*(_QWORD *)(v7 + 56) + v66 - 1) != 47 )
  {
    v74 = *(_QWORD *)(v7 + 72);
    ++v66;
  }
  dest = 0LL;
  if ( (v11 & 4) != 0 )
  {
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 32) + v74);
    *v12 = 47;
    dest = v12 + 1;
  }
  v77 = 0;
  v13 = 0LL;
  v68 = *(_QWORD *)(a1 + 48) - v66;
  v14 = a1;
  dirp = 0LL;
  v70 = v7;
  v71 = *(_QWORD *)(v7 + 88) + 1LL;
  ptr = 0LL;
  while ( 1 )
  {
    v15 = *(DIR **)(v70 + 24);
    if ( !v15 )
    {
      v31 = v70;
      v32 = v14;
      goto LABEL_89;
    }
    v16 = __errno_location();
    *v16 = 0;
    v17 = v16;
    v18 = readdir(v15);
    v19 = v18;
    if ( !v18 )
      break;
    if ( (*(_BYTE *)(v14 + 72) & 0x20) != 0 || v18->d_name[0] != 46 || v18->d_name[1] && *(_WORD *)&v18->d_name[1] != 46 )
    {
      v20 = strlen(v18->d_name);
      v21 = sub_406FA0(v14, v19->d_name, v20);
      if ( !v21 )
        goto LABEL_82;
      if ( v68 <= v20 )
      {
        v69 = *(_QWORD *)(v14 + 32);
        v28 = sub_407320((void **)(v14 + 32), (size_t *)(v14 + 48), v74 + v20 + 2);
        if ( !v28 )
        {
LABEL_82:
          v52 = v21;
          v53 = v14;
          v54 = *v17;
          free(v52);
          sub_407030(ptr);
          closedir(*(DIR **)(v70 + 24));
          *(_QWORD *)(v70 + 24) = 0LL;
          *(_WORD *)(v70 + 112) = 7;
          ptr = 0LL;
          *(_DWORD *)(v53 + 72) |= 0x4000u;
          *v17 = v54;
          return (__int64)ptr;
        }
        v29 = *(_QWORD *)(v14 + 32);
        if ( v29 == v69 )
        {
          v28 = v77;
        }
        else
        {
          v30 = (_BYTE *)(v66 + v29);
          if ( (*(_BYTE *)(v14 + 72) & 4) == 0 )
            v30 = dest;
          dest = v30;
        }
        v77 = v28;
        v68 = *(_QWORD *)(v14 + 48) - v66;
      }
      v9 = v66 + v20;
      if ( __CFADD__(v66, v20) )
      {
        free(v21);
        sub_407030(ptr);
        closedir(*(DIR **)(v70 + 24));
        *(_QWORD *)(v70 + 24) = 0LL;
        *(_WORD *)(v70 + 112) = 7;
        ptr = 0LL;
        *(_DWORD *)(v14 + 72) |= 0x4000u;
        *v17 = 36;
        return (__int64)ptr;
      }
      v22 = v21 + 264;
      *((_QWORD *)v21 + 11) = v71;
      v23 = *(_QWORD *)v14;
      *((_QWORD *)v21 + 9) = v9;
      *((_QWORD *)v21 + 1) = v23;
      *((_QWORD *)v21 + 16) = v19->d_ino;
      v24 = *(_DWORD *)(v14 + 72);
      if ( (v24 & 4) != 0 )
      {
        *((_QWORD *)v21 + 6) = *((_QWORD *)v21 + 7);
        memmove(dest, v22, *((_QWORD *)v21 + 12) + 1LL);
        v24 = *(_DWORD *)(v14 + 72);
      }
      else
      {
        *((_QWORD *)v21 + 6) = v22;
      }
      if ( *(_QWORD *)(v14 + 64) && (v24 & 0x400) == 0 )
      {
        *((_WORD *)v21 + 56) = sub_406CF0(v14, (__int64)v21, 0);
      }
      else
      {
        d_type = v19->d_type;
        v26 = (unsigned int)(d_type - 1);
        if ( (v24 & 0x18) == 24 && (d_type & 0xFB) != 0 )
        {
          *((_WORD *)v21 + 56) = 11;
          if ( (unsigned int)v26 <= 0xB )
            *((_DWORD *)v21 + 36) = dword_40EE20[v26];
          else
            *((_DWORD *)v21 + 36) = 0;
          v27 = 1LL;
        }
        else
        {
          *((_WORD *)v21 + 56) = 11;
          if ( (unsigned int)v26 > 0xB )
            *((_DWORD *)v21 + 36) = 0;
          else
            *((_DWORD *)v21 + 36) = dword_40EE20[v26];
          v27 = 2LL;
        }
        *((_QWORD *)v21 + 21) = v27;
      }
      *((_QWORD *)v21 + 2) = 0LL;
      if ( ptr )
      {
        ++v13;
        *((_QWORD *)dirp + 2) = v21;
        if ( v13 >= v72 )
          goto LABEL_39;
      }
      else
      {
        ptr = v21;
        if ( ++v13 >= v72 )
        {
LABEL_39:
          v31 = v70;
          v32 = v14;
          if ( !v77 )
            goto LABEL_90;
          goto LABEL_40;
        }
      }
    }
    else
    {
      v21 = (char *)dirp;
    }
    dirp = (DIR *)v21;
  }
  v31 = v70;
  v32 = v14;
  if ( *v17 )
  {
    *(_DWORD *)(v70 + 64) = *v17;
    *(_WORD *)(v70 + 112) = (v13 | (unsigned __int64)v75) == 0 ? 4 : 7;
  }
  v58 = *(DIR **)(v70 + 24);
  if ( v58 )
  {
    closedir(v58);
    *(_QWORD *)(v70 + 24) = 0LL;
  }
LABEL_89:
  if ( !v77 )
    goto LABEL_90;
LABEL_40:
  v33 = *(_QWORD **)(v32 + 8);
  for ( i = *(_QWORD *)(v32 + 32); v33; v33 = (_QWORD *)v33[2] )
  {
    v35 = (_QWORD *)v33[6];
    if ( v35 != v33 + 33 )
      v33[6] = (char *)v35 + i - v33[7];
    v33[7] = i;
  }
  for ( j = ptr; *((__int64 *)j + 11) >= 0; j = v38 )
  {
    v37 = (char *)*((_QWORD *)j + 6);
    if ( v37 != j + 264 )
      *((_QWORD *)j + 6) = &v37[i - *((_QWORD *)j + 7)];
    v38 = (char *)*((_QWORD *)j + 2);
    *((_QWORD *)j + 7) = i;
    if ( !v38 )
      v38 = (char *)*((_QWORD *)j + 1);
  }
LABEL_90:
  if ( (*(_BYTE *)(v32 + 72) & 4) != 0 )
  {
    if ( *(_QWORD *)(v32 + 48) == v66 || !v13 )
      --dest;
    *dest = 0;
  }
  if ( v75 || !v78 )
    goto LABEL_105;
  if ( a2 != 1 && v13 )
    goto LABEL_99;
  if ( !(*(_QWORD *)(v31 + 88)
       ? (unsigned int)sub_407440(v32, *(_QWORD *)(v31 + 8), -1, (__int64)"..", v9, v10) != 0
       : (unsigned int)sub_4072C0(v32) != 0) )
  {
LABEL_105:
    if ( !v13 )
    {
      if ( a2 == 3 )
      {
        v64 = *(_WORD *)(v31 + 112);
        if ( v64 != 4 && v64 != 7 )
          *(_WORD *)(v31 + 112) = 6;
      }
      sub_407030(ptr);
      return 0LL;
    }
LABEL_99:
    v56 = *(_QWORD *)(v32 + 64);
    if ( v13 > 0x2710 )
    {
      if ( v56 )
        return sub_406EA0((_QWORD *)v32, (__int64)ptr, v13);
      v62 = sub_4070C0(v31);
      if ( v62 != 26985 && v62 != 16914836 )
      {
        *(_QWORD *)(v32 + 64) = sub_406CC0;
        v63 = sub_406EA0((_QWORD *)v32, (__int64)ptr, v13);
        *(_QWORD *)(v32 + 64) = 0LL;
        return v63;
      }
      v56 = *(_QWORD *)(v32 + 64);
    }
    if ( !v56 || v13 == 1 )
      return (__int64)ptr;
    return sub_406EA0((_QWORD *)v32, (__int64)ptr, v13);
  }
  *(_WORD *)(v31 + 112) = 7;
  *(_DWORD *)(v32 + 72) |= 0x4000u;
  sub_407030(ptr);
  return 0LL;
}

__int64 __fastcall fts_open(const char **a1, unsigned int a2, __int64 a3)
{
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
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // r9d
  int v24; // esi
  void *v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  char v30; // [rsp+0h] [rbp-58h]
  char *ptr; // [rsp+8h] [rbp-50h]
  char v32; // [rsp+16h] [rbp-42h]
  _BYTE v33[9]; // [rsp+17h] [rbp-41h]

  if ( (a2 & 0xFFFFE000) != 0 || (a2 & 0x204) == 516 || (a2 & 0x12) == 0 )
  {
    v6 = 0LL;
    *__errno_location() = 22;
    return v6;
  }
  v5 = calloc(0x80uLL, 1uLL);
  v6 = (__int64)v5;
  if ( v5 )
  {
    v5[8] = a3;
    if ( (a2 & 2) != 0 )
    {
      v27 = a2;
      BYTE1(v27) = BYTE1(a2) & 0xFD;
      *(_DWORD *)(v6 + 72) = v27 | 4;
    }
    else
    {
      *((_DWORD *)v5 + 18) = a2;
    }
    v7 = *a1;
    *(_DWORD *)(v6 + 44) = -100;
    if ( v7 )
    {
      v8 = a1;
      v9 = 0LL;
      do
      {
        v10 = strlen(v7);
        if ( v9 < v10 )
          v9 = v10;
        v7 = *++v8;
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
    v32 = sub_407320((void **)(v6 + 32), (size_t *)(v6 + 48), v11);
    if ( !v32 )
      goto LABEL_44;
    v12 = *a1;
    if ( *a1 )
    {
      v13 = sub_406FA0(v6, "", 0LL);
      ptr = v13;
      if ( !v13 )
      {
LABEL_43:
        free(*(void **)(v6 + 32));
LABEL_44:
        v26 = (void *)v6;
        v6 = 0LL;
        free(v26);
        return v6;
      }
      v12 = *a1;
      *((_QWORD *)v13 + 11) = -1LL;
      *((_QWORD *)v13 + 13) = -1LL;
      if ( !a3 )
        goto LABEL_19;
    }
    else
    {
      ptr = 0LL;
      if ( !a3 )
      {
LABEL_47:
        v14 = 0LL;
LABEL_36:
        v19 = sub_406FA0(v6, "", 0LL);
        *(_QWORD *)v6 = v19;
        if ( v19 )
        {
          *((_QWORD *)v19 + 2) = v14;
          v20 = *(_DWORD *)(v6 + 72);
          *((_WORD *)v19 + 56) = 9;
          if ( sub_407390(v20, (__int64 *)(v6 + 88)) )
          {
            v24 = *(_DWORD *)(v6 + 72);
            if ( (v24 & 0x204) == 0 )
            {
              v29 = sub_4073F0(*(_DWORD *)(v6 + 44), v24, 4255258, v21, v22, v23, v30);
              *(_DWORD *)(v6 + 40) = v29;
              if ( v29 < 0 )
                *(_DWORD *)(v6 + 72) |= 4u;
            }
            sub_40B2B0(v6 + 96, 0xFFFFFFFFLL);
            return v6;
          }
        }
LABEL_42:
        sub_407030(v14);
        free(ptr);
        goto LABEL_43;
      }
    }
    v32 = (*(_DWORD *)(v6 + 72) & 0x400) != 0;
LABEL_19:
    if ( v12 )
    {
      v33[8] = 0;
      v14 = 0LL;
      v15 = 0LL;
      *(_QWORD *)v33 = ((unsigned __int8)(a2 >> 12) ^ 1) & 1;
      while ( 1 )
      {
        v18 = strlen(v12);
        if ( v18 > 2 && v33[0] && v12[v18 - 1] == 47 )
        {
          do
          {
            if ( v12[v18 - 2] != 47 )
              break;
            --v18;
          }
          while ( v18 != 1 );
        }
        v16 = sub_406FA0(v6, v12, v18);
        v17 = v16;
        if ( !v16 )
          goto LABEL_42;
        *((_QWORD *)v16 + 11) = 0LL;
        *((_QWORD *)v16 + 1) = ptr;
        *((_QWORD *)v16 + 6) = v16 + 264;
        if ( v14 )
        {
          if ( v32 )
            break;
        }
        *((_WORD *)v16 + 56) = sub_406CF0(v6, (__int64)v16, 0);
        if ( a3 )
          goto LABEL_25;
        *((_QWORD *)v17 + 2) = 0LL;
        if ( v14 )
          goto LABEL_52;
        *(_QWORD *)&v33[1] = v17;
        v14 = v17;
LABEL_26:
        v12 = a1[++v15];
        if ( !v12 )
        {
          if ( a3 && v15 > 1 )
            v14 = (void *)sub_406EA0((_QWORD *)v6, (__int64)v14, v15);
          goto LABEL_36;
        }
      }
      *((_QWORD *)v16 + 21) = 2LL;
      *((_WORD *)v16 + 56) = 11;
      if ( !a3 )
      {
        *((_QWORD *)v16 + 2) = 0LL;
LABEL_52:
        v28 = *(_QWORD *)&v33[1];
        *(_QWORD *)&v33[1] = v17;
        *(_QWORD *)(v28 + 16) = v17;
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
  __int64 *v2; // rdi
  void *v3; // rdi
  int v4; // eax
  int v5; // edi
  unsigned int v6; // ebx
  void *v7; // rdi
  void *v8; // rdi
  int *v10; // r12
  __int64 *v11; // rbx

  v2 = *(__int64 **)ptr;
  if ( v2 )
  {
    if ( v2[11] >= 0 )
    {
      do
      {
        while ( 1 )
        {
          v11 = (__int64 *)v2[2];
          if ( !v11 )
            break;
          free(v2);
          v2 = v11;
          if ( v11[11] < 0 )
            goto LABEL_7;
        }
        v11 = (__int64 *)v2[1];
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
  v3 = (void *)*((_QWORD *)ptr + 1);
  if ( v3 )
    sub_407030(v3);
  free(*((void **)ptr + 2));
  free(*((void **)ptr + 4));
  v4 = *((_DWORD *)ptr + 18);
  if ( (v4 & 0x200) != 0 )
  {
    v5 = *((_DWORD *)ptr + 11);
    if ( v5 >= 0 && close(v5) )
    {
      v6 = *__errno_location();
      goto LABEL_13;
    }
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  if ( (v4 & 4) != 0 )
    goto LABEL_12;
  if ( !fchdir(*((_DWORD *)ptr + 10)) )
  {
    if ( !close(*((_DWORD *)ptr + 10)) )
      goto LABEL_12;
    v10 = __errno_location();
    goto LABEL_30;
  }
  v10 = __errno_location();
  v6 = *v10;
  if ( close(*((_DWORD *)ptr + 10)) && !v6 )
LABEL_30:
    v6 = *v10;
LABEL_13:
  sub_407080((__int64)ptr + 96);
  v7 = (void *)*((_QWORD *)ptr + 10);
  if ( v7 )
    sub_40AB30(v7);
  v8 = (void *)*((_QWORD *)ptr + 11);
  if ( (*((_DWORD *)ptr + 18) & 0x102) != 0 )
  {
    if ( v8 )
      sub_40AB30(v8);
  }
  else
  {
    free(v8);
  }
  free(ptr);
  if ( v6 )
  {
    *__errno_location() = v6;
    return (unsigned int)-1;
  }
  return v6;
}

__int64 __fastcall fts_read(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int16 v8; // ax
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  __int16 v15; // ax
  int v16; // edi
  void *v18; // rdi
  int *v19; // rax
  _QWORD *v20; // rax
  void *v21; // rdi
  int v22; // edi
  void *v23; // rdi
  __int64 v24; // rdx
  void *v25; // rdi
  char *v26; // rax
  const void *v27; // r13
  size_t v28; // r14
  __int64 v29; // rax
  int v30; // edi
  __int16 v31; // ax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  _BYTE *v35; // rax
  __int16 v36; // ax
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  int v41; // edi
  int v42; // eax
  int v43; // edi
  __int64 v44; // rbp
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int16 v49; // ax
  __int64 v50; // rcx
  int v51; // r8d
  int v52; // r9d
  int v53; // esi
  int v54; // esi
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  char v59; // [rsp+0h] [rbp-28h]

  v6 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v7 = *(unsigned int *)(a1 + 72);
  if ( (v7 & 0x4000) != 0 )
    return 0LL;
  v8 = *(_WORD *)(v6 + 116);
  *(_WORD *)(v6 + 116) = 3;
  if ( v8 == 1 )
  {
    *(_WORD *)(v6 + 112) = sub_406CF0(a1, v6, 0);
    return v6;
  }
  v10 = *(unsigned __int16 *)(v6 + 112);
  if ( v8 != 2 )
  {
    if ( (_WORD)v10 != 1 )
      goto LABEL_9;
    if ( v8 == 4 )
      goto LABEL_34;
    goto LABEL_24;
  }
  if ( (unsigned __int16)(v10 - 12) <= 1u )
  {
    v36 = sub_406CF0(a1, v6, 1);
    *(_WORD *)(v6 + 112) = v36;
    if ( v36 == 1 )
    {
      v53 = *(_DWORD *)(a1 + 72);
      if ( (v53 & 4) == 0 )
      {
        v56 = sub_4073F0(*(_DWORD *)(a1 + 44), v53, 4255258, v37, v38, v39, v59);
        *(_DWORD *)(v6 + 68) = v56;
        if ( v56 >= 0 )
        {
          *(_WORD *)(v6 + 114) |= 2u;
          v31 = *(_WORD *)(v6 + 112);
          v12 = v6;
          goto LABEL_51;
        }
        v57 = *__errno_location();
        *(_WORD *)(v6 + 112) = 7;
        *(_DWORD *)(v6 + 64) = v57;
        *(_QWORD *)a1 = v6;
        return v6;
      }
      *(_QWORD *)a1 = v6;
      v12 = v6;
LABEL_53:
      if ( *(_QWORD *)(v12 + 88) )
        goto LABEL_55;
      goto LABEL_54;
    }
    *(_QWORD *)a1 = v6;
    if ( v36 != 11 )
      return v6;
    v12 = v6;
LABEL_60:
    v40 = *(_QWORD *)(v12 + 168);
    if ( v40 != 2 )
    {
      if ( v40 == 1 )
        return v12;
      goto LABEL_117;
    }
    v44 = *(_QWORD *)(v12 + 8);
    if ( !*(_QWORD *)(v44 + 104)
      && (*(_DWORD *)(a1 + 72) & 0x18) == 24
      && (unsigned int)sub_4071E0(*(_QWORD *)(v12 + 8)) == 2 )
    {
      v31 = *(_WORD *)(v12 + 112);
      goto LABEL_52;
    }
    v31 = sub_406CF0(a1, v12, 0);
    v45 = *(_DWORD *)(v12 + 144);
    *(_WORD *)(v12 + 112) = v31;
    if ( (v45 & 0xF000) != 0x4000 )
      goto LABEL_52;
    if ( *(_QWORD *)(v12 + 88) )
    {
      v46 = *(_QWORD *)(v44 + 104);
      if ( (unsigned __int64)(v46 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        *(_QWORD *)(v44 + 104) = v46 - 1;
      if ( v31 != 1 )
        return v12;
LABEL_55:
      v6 = v12;
      if ( !(unsigned __int8)sub_407610(*(_DWORD *)(a1 + 72), (_QWORD *)(a1 + 88), v12) )
      {
        v6 = 0LL;
        *__errno_location() = 12;
      }
      return v6;
    }
    if ( v31 != 1 )
      return v12;
LABEL_54:
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v12 + 120);
    goto LABEL_55;
  }
  if ( (_WORD)v10 == 1 )
  {
LABEL_24:
    if ( (v7 & 0x40) != 0 && *(_QWORD *)(v6 + 120) != *(_QWORD *)(a1 + 24) )
    {
LABEL_34:
      if ( (*(_BYTE *)(v6 + 114) & 2) != 0 )
        close(*(_DWORD *)(v6 + 68));
      v21 = *(void **)(a1 + 8);
      if ( v21 )
      {
        sub_407030(v21);
        *(_QWORD *)(a1 + 8) = 0LL;
      }
      v22 = *(_DWORD *)(a1 + 72);
      *(_WORD *)(v6 + 112) = 6;
      sub_4076C0(v22, (__int64 **)(a1 + 88), (_QWORD *)v6);
      return v6;
    }
    v18 = *(void **)(a1 + 8);
    if ( v18 )
    {
      if ( (v7 & 0x2000) == 0 )
      {
        if ( (unsigned int)sub_407440(a1, v6, -1, *(_QWORD *)(v6 + 48), a5, a6) )
        {
          v19 = __errno_location();
          v12 = *(_QWORD *)(a1 + 8);
          LODWORD(v19) = *v19;
          *(_WORD *)(v6 + 114) |= 1u;
          *(_DWORD *)(v6 + 64) = (_DWORD)v19;
          if ( v12 )
          {
            v20 = (_QWORD *)v12;
            do
            {
              v20[6] = *(_QWORD *)(v20[1] + 48LL);
              v20 = (_QWORD *)v20[2];
            }
            while ( v20 );
          }
        }
        else
        {
          v12 = *(_QWORD *)(a1 + 8);
        }
        goto LABEL_32;
      }
      BYTE1(v7) &= ~0x20u;
      *(_DWORD *)(a1 + 72) = v7;
      sub_407030(v18);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    v12 = sub_407760(a1, 3, v7, v10, a5, a6);
    *(_QWORD *)(a1 + 8) = v12;
    if ( v12 )
    {
LABEL_32:
      *(_QWORD *)(a1 + 8) = 0LL;
      goto LABEL_48;
    }
    v41 = *(_DWORD *)(a1 + 72);
    if ( (v41 & 0x4000) == 0 )
    {
      if ( *(_DWORD *)(v6 + 64) && *(_WORD *)(v6 + 112) != 4 )
        *(_WORD *)(v6 + 112) = 7;
      sub_4076C0(v41, (__int64 **)(a1 + 88), (_QWORD *)v6);
      return v6;
    }
    return 0LL;
  }
  do
  {
LABEL_9:
    v12 = *(_QWORD *)(v6 + 16);
    if ( !v12 )
    {
      v12 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v12 + 24) )
      {
        v47 = *(_QWORD *)(v12 + 72);
        v48 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)a1 = v12;
        *(_BYTE *)(v48 + v47) = 0;
        v12 = sub_407760(a1, 3, v48, v10, a5, a6);
        if ( v12 )
        {
          free((void *)v6);
          goto LABEL_48;
        }
        if ( (*(_BYTE *)(a1 + 73) & 0x40) != 0 )
          return 0LL;
        v12 = *(_QWORD *)(v6 + 8);
      }
      *(_QWORD *)a1 = v12;
      free((void *)v6);
      if ( *(_QWORD *)(v12 + 88) == -1LL )
      {
        v6 = 0LL;
        free((void *)v12);
        *__errno_location() = 0;
        *(_QWORD *)a1 = 0LL;
        return v6;
      }
      if ( *(_WORD *)(v12 + 112) != 11 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + *(_QWORD *)(v12 + 72)) = 0;
        if ( *(_QWORD *)(v12 + 88) )
        {
          v15 = *(_WORD *)(v12 + 114);
          if ( (v15 & 2) != 0 )
          {
            v42 = *(_DWORD *)(a1 + 72);
            v43 = *(_DWORD *)(v12 + 68);
            if ( (v42 & 4) == 0 )
            {
              if ( (v42 & 0x200) != 0 )
              {
                sub_407250(a1, v43, 1);
                v43 = *(_DWORD *)(v12 + 68);
              }
              else
              {
                if ( fchdir(v43) )
                {
                  *(_DWORD *)(v12 + 64) = *__errno_location();
                  *(_DWORD *)(a1 + 72) |= 0x4000u;
                }
                v43 = *(_DWORD *)(v12 + 68);
              }
            }
            close(v43);
          }
          else if ( (v15 & 1) == 0 && (unsigned int)sub_407440(a1, *(_QWORD *)(v12 + 8), -1, (__int64)"..", v13, v14) )
          {
            goto LABEL_81;
          }
        }
        else if ( (unsigned int)sub_4072C0(a1) )
        {
LABEL_81:
          *(_DWORD *)(v12 + 64) = *__errno_location();
          *(_DWORD *)(a1 + 72) |= 0x4000u;
          if ( *(_WORD *)(v12 + 112) == 2 )
            return 0LL;
          v16 = *(_DWORD *)(a1 + 72);
LABEL_17:
          if ( *(_DWORD *)(v12 + 64) )
          {
            *(_WORD *)(v12 + 112) = 7;
          }
          else
          {
            *(_WORD *)(v12 + 112) = 6;
            sub_4076C0(v16, (__int64 **)(a1 + 88), (_QWORD *)v12);
            v16 = *(_DWORD *)(a1 + 72);
          }
LABEL_19:
          if ( (v16 & 0x4000) != 0 )
            return 0LL;
          return v12;
        }
        v16 = *(_DWORD *)(a1 + 72);
        if ( *(_WORD *)(v12 + 112) == 2 )
          goto LABEL_19;
        goto LABEL_17;
      }
LABEL_117:
      abort();
    }
    *(_QWORD *)a1 = v12;
    free((void *)v6);
    if ( !*(_QWORD *)(v12 + 88) )
    {
      if ( !(unsigned int)sub_4072C0(a1) )
      {
        v23 = *(void **)(a1 + 88);
        if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
        {
          if ( v23 )
            sub_40AB30(v23);
        }
        else
        {
          free(v23);
        }
        v24 = *(_QWORD *)(v12 + 96);
        v25 = *(void **)(a1 + 32);
        *(_QWORD *)(v12 + 72) = v24;
        memmove(v25, (const void *)(v12 + 264), v24 + 1);
        v26 = strrchr((const char *)(v12 + 264), 47);
        if ( v26 && ((char *)(v12 + 264) != v26 || *(_BYTE *)(v12 + 265)) )
        {
          v27 = v26 + 1;
          v28 = strlen(v26 + 1);
          memmove((void *)(v12 + 264), v27, v28 + 1);
          *(_QWORD *)(v12 + 96) = v28;
        }
        v29 = *(_QWORD *)(a1 + 32);
        v30 = *(_DWORD *)(a1 + 72);
        *(_QWORD *)(v12 + 56) = v29;
        *(_QWORD *)(v12 + 48) = v29;
        sub_407390(v30, (__int64 *)(a1 + 88));
        v31 = *(_WORD *)(v12 + 112);
        goto LABEL_51;
      }
      *(_DWORD *)(a1 + 72) |= 0x4000u;
      return 0LL;
    }
    v11 = *(_WORD *)(v12 + 116);
    v6 = v12;
  }
  while ( v11 == 4 );
  if ( v11 == 2 )
  {
    v49 = sub_406CF0(a1, v12, 1);
    *(_WORD *)(v12 + 112) = v49;
    if ( v49 == 1 )
    {
      v54 = *(_DWORD *)(a1 + 72);
      if ( (v54 & 4) == 0 )
      {
        v55 = sub_4073F0(*(_DWORD *)(a1 + 44), v54, 4255258, v50, v51, v52, v59);
        *(_DWORD *)(v12 + 68) = v55;
        if ( v55 < 0 )
        {
          v58 = *__errno_location();
          *(_WORD *)(v12 + 112) = 7;
          *(_DWORD *)(v12 + 64) = v58;
        }
        else
        {
          *(_WORD *)(v12 + 114) |= 2u;
        }
      }
    }
    *(_WORD *)(v12 + 116) = 3;
  }
LABEL_48:
  v32 = *(_QWORD *)(v12 + 8);
  v33 = *(_QWORD *)(v32 + 72);
  v34 = v33 - 1;
  if ( *(_BYTE *)(*(_QWORD *)(v32 + 56) + v33 - 1) != 47 )
    v34 = *(_QWORD *)(v32 + 72);
  v35 = (_BYTE *)(*(_QWORD *)(a1 + 32) + v34);
  *v35 = 47;
  memmove(v35 + 1, (const void *)(v12 + 264), *(_QWORD *)(v12 + 96) + 1LL);
  v31 = *(_WORD *)(v12 + 112);
LABEL_51:
  *(_QWORD *)a1 = v12;
  if ( v31 == 11 )
    goto LABEL_60;
LABEL_52:
  v6 = v12;
  if ( v31 == 1 )
    goto LABEL_53;
  return v6;
}

__int64 __fastcall fts_read(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int16 v8; // ax
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  __int16 v15; // ax
  int v16; // edi
  void *v18; // rdi
  int *v19; // rax
  _QWORD *v20; // rax
  void *v21; // rdi
  int v22; // edi
  void *v23; // rdi
  __int64 v24; // rdx
  void *v25; // rdi
  char *v26; // rax
  const void *v27; // r13
  size_t v28; // r14
  __int64 v29; // rax
  int v30; // edi
  __int16 v31; // ax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  _BYTE *v35; // rax
  __int16 v36; // ax
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  int v41; // edi
  int v42; // eax
  int v43; // edi
  __int64 v44; // rbp
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int16 v49; // ax
  __int64 v50; // rcx
  int v51; // r8d
  int v52; // r9d
  int v53; // esi
  int v54; // esi
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  char v59; // [rsp+0h] [rbp-28h]

  v6 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v7 = *(unsigned int *)(a1 + 72);
  if ( (v7 & 0x4000) != 0 )
    return 0LL;
  v8 = *(_WORD *)(v6 + 116);
  *(_WORD *)(v6 + 116) = 3;
  if ( v8 == 1 )
  {
    *(_WORD *)(v6 + 112) = sub_406CF0(a1, v6, 0);
    return v6;
  }
  v10 = *(unsigned __int16 *)(v6 + 112);
  if ( v8 != 2 )
  {
    if ( (_WORD)v10 != 1 )
      goto LABEL_9;
    if ( v8 == 4 )
      goto LABEL_34;
    goto LABEL_24;
  }
  if ( (unsigned __int16)(v10 - 12) <= 1u )
  {
    v36 = sub_406CF0(a1, v6, 1);
    *(_WORD *)(v6 + 112) = v36;
    if ( v36 == 1 )
    {
      v53 = *(_DWORD *)(a1 + 72);
      if ( (v53 & 4) == 0 )
      {
        v56 = sub_4073F0(*(_DWORD *)(a1 + 44), v53, 4255258, v37, v38, v39, v59);
        *(_DWORD *)(v6 + 68) = v56;
        if ( v56 >= 0 )
        {
          *(_WORD *)(v6 + 114) |= 2u;
          v31 = *(_WORD *)(v6 + 112);
          v12 = v6;
          goto LABEL_51;
        }
        v57 = *__errno_location();
        *(_WORD *)(v6 + 112) = 7;
        *(_DWORD *)(v6 + 64) = v57;
        *(_QWORD *)a1 = v6;
        return v6;
      }
      *(_QWORD *)a1 = v6;
      v12 = v6;
LABEL_53:
      if ( *(_QWORD *)(v12 + 88) )
        goto LABEL_55;
      goto LABEL_54;
    }
    *(_QWORD *)a1 = v6;
    if ( v36 != 11 )
      return v6;
    v12 = v6;
LABEL_60:
    v40 = *(_QWORD *)(v12 + 168);
    if ( v40 != 2 )
    {
      if ( v40 == 1 )
        return v12;
      goto LABEL_117;
    }
    v44 = *(_QWORD *)(v12 + 8);
    if ( !*(_QWORD *)(v44 + 104)
      && (*(_DWORD *)(a1 + 72) & 0x18) == 24
      && (unsigned int)sub_4071E0(*(_QWORD *)(v12 + 8)) == 2 )
    {
      v31 = *(_WORD *)(v12 + 112);
      goto LABEL_52;
    }
    v31 = sub_406CF0(a1, v12, 0);
    v45 = *(_DWORD *)(v12 + 144);
    *(_WORD *)(v12 + 112) = v31;
    if ( (v45 & 0xF000) != 0x4000 )
      goto LABEL_52;
    if ( *(_QWORD *)(v12 + 88) )
    {
      v46 = *(_QWORD *)(v44 + 104);
      if ( (unsigned __int64)(v46 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        *(_QWORD *)(v44 + 104) = v46 - 1;
      if ( v31 != 1 )
        return v12;
LABEL_55:
      v6 = v12;
      if ( !(unsigned __int8)sub_407610(*(_DWORD *)(a1 + 72), (_QWORD *)(a1 + 88), v12) )
      {
        v6 = 0LL;
        *__errno_location() = 12;
      }
      return v6;
    }
    if ( v31 != 1 )
      return v12;
LABEL_54:
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v12 + 120);
    goto LABEL_55;
  }
  if ( (_WORD)v10 == 1 )
  {
LABEL_24:
    if ( (v7 & 0x40) != 0 && *(_QWORD *)(v6 + 120) != *(_QWORD *)(a1 + 24) )
    {
LABEL_34:
      if ( (*(_BYTE *)(v6 + 114) & 2) != 0 )
        close(*(_DWORD *)(v6 + 68));
      v21 = *(void **)(a1 + 8);
      if ( v21 )
      {
        sub_407030(v21);
        *(_QWORD *)(a1 + 8) = 0LL;
      }
      v22 = *(_DWORD *)(a1 + 72);
      *(_WORD *)(v6 + 112) = 6;
      sub_4076C0(v22, (__int64 **)(a1 + 88), (_QWORD *)v6);
      return v6;
    }
    v18 = *(void **)(a1 + 8);
    if ( v18 )
    {
      if ( (v7 & 0x2000) == 0 )
      {
        if ( (unsigned int)sub_407440(a1, v6, -1, *(_QWORD *)(v6 + 48), a5, a6) )
        {
          v19 = __errno_location();
          v12 = *(_QWORD *)(a1 + 8);
          LODWORD(v19) = *v19;
          *(_WORD *)(v6 + 114) |= 1u;
          *(_DWORD *)(v6 + 64) = (_DWORD)v19;
          if ( v12 )
          {
            v20 = (_QWORD *)v12;
            do
            {
              v20[6] = *(_QWORD *)(v20[1] + 48LL);
              v20 = (_QWORD *)v20[2];
            }
            while ( v20 );
          }
        }
        else
        {
          v12 = *(_QWORD *)(a1 + 8);
        }
        goto LABEL_32;
      }
      BYTE1(v7) &= ~0x20u;
      *(_DWORD *)(a1 + 72) = v7;
      sub_407030(v18);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    v12 = sub_407760(a1, 3, v7, v10, a5, a6);
    *(_QWORD *)(a1 + 8) = v12;
    if ( v12 )
    {
LABEL_32:
      *(_QWORD *)(a1 + 8) = 0LL;
      goto LABEL_48;
    }
    v41 = *(_DWORD *)(a1 + 72);
    if ( (v41 & 0x4000) == 0 )
    {
      if ( *(_DWORD *)(v6 + 64) && *(_WORD *)(v6 + 112) != 4 )
        *(_WORD *)(v6 + 112) = 7;
      sub_4076C0(v41, (__int64 **)(a1 + 88), (_QWORD *)v6);
      return v6;
    }
    return 0LL;
  }
  do
  {
LABEL_9:
    v12 = *(_QWORD *)(v6 + 16);
    if ( !v12 )
    {
      v12 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v12 + 24) )
      {
        v47 = *(_QWORD *)(v12 + 72);
        v48 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)a1 = v12;
        *(_BYTE *)(v48 + v47) = 0;
        v12 = sub_407760(a1, 3, v48, v10, a5, a6);
        if ( v12 )
        {
          free((void *)v6);
          goto LABEL_48;
        }
        if ( (*(_BYTE *)(a1 + 73) & 0x40) != 0 )
          return 0LL;
        v12 = *(_QWORD *)(v6 + 8);
      }
      *(_QWORD *)a1 = v12;
      free((void *)v6);
      if ( *(_QWORD *)(v12 + 88) == -1LL )
      {
        v6 = 0LL;
        free((void *)v12);
        *__errno_location() = 0;
        *(_QWORD *)a1 = 0LL;
        return v6;
      }
      if ( *(_WORD *)(v12 + 112) != 11 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + *(_QWORD *)(v12 + 72)) = 0;
        if ( *(_QWORD *)(v12 + 88) )
        {
          v15 = *(_WORD *)(v12 + 114);
          if ( (v15 & 2) != 0 )
          {
            v42 = *(_DWORD *)(a1 + 72);
            v43 = *(_DWORD *)(v12 + 68);
            if ( (v42 & 4) == 0 )
            {
              if ( (v42 & 0x200) != 0 )
              {
                sub_407250(a1, v43, 1);
                v43 = *(_DWORD *)(v12 + 68);
              }
              else
              {
                if ( fchdir(v43) )
                {
                  *(_DWORD *)(v12 + 64) = *__errno_location();
                  *(_DWORD *)(a1 + 72) |= 0x4000u;
                }
                v43 = *(_DWORD *)(v12 + 68);
              }
            }
            close(v43);
          }
          else if ( (v15 & 1) == 0 && (unsigned int)sub_407440(a1, *(_QWORD *)(v12 + 8), -1, (__int64)"..", v13, v14) )
          {
            goto LABEL_81;
          }
        }
        else if ( (unsigned int)sub_4072C0(a1) )
        {
LABEL_81:
          *(_DWORD *)(v12 + 64) = *__errno_location();
          *(_DWORD *)(a1 + 72) |= 0x4000u;
          if ( *(_WORD *)(v12 + 112) == 2 )
            return 0LL;
          v16 = *(_DWORD *)(a1 + 72);
LABEL_17:
          if ( *(_DWORD *)(v12 + 64) )
          {
            *(_WORD *)(v12 + 112) = 7;
          }
          else
          {
            *(_WORD *)(v12 + 112) = 6;
            sub_4076C0(v16, (__int64 **)(a1 + 88), (_QWORD *)v12);
            v16 = *(_DWORD *)(a1 + 72);
          }
LABEL_19:
          if ( (v16 & 0x4000) != 0 )
            return 0LL;
          return v12;
        }
        v16 = *(_DWORD *)(a1 + 72);
        if ( *(_WORD *)(v12 + 112) == 2 )
          goto LABEL_19;
        goto LABEL_17;
      }
LABEL_117:
      abort();
    }
    *(_QWORD *)a1 = v12;
    free((void *)v6);
    if ( !*(_QWORD *)(v12 + 88) )
    {
      if ( !(unsigned int)sub_4072C0(a1) )
      {
        v23 = *(void **)(a1 + 88);
        if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
        {
          if ( v23 )
            sub_40AB30(v23);
        }
        else
        {
          free(v23);
        }
        v24 = *(_QWORD *)(v12 + 96);
        v25 = *(void **)(a1 + 32);
        *(_QWORD *)(v12 + 72) = v24;
        memmove(v25, (const void *)(v12 + 264), v24 + 1);
        v26 = strrchr((const char *)(v12 + 264), 47);
        if ( v26 && ((char *)(v12 + 264) != v26 || *(_BYTE *)(v12 + 265)) )
        {
          v27 = v26 + 1;
          v28 = strlen(v26 + 1);
          memmove((void *)(v12 + 264), v27, v28 + 1);
          *(_QWORD *)(v12 + 96) = v28;
        }
        v29 = *(_QWORD *)(a1 + 32);
        v30 = *(_DWORD *)(a1 + 72);
        *(_QWORD *)(v12 + 56) = v29;
        *(_QWORD *)(v12 + 48) = v29;
        sub_407390(v30, (__int64 *)(a1 + 88));
        v31 = *(_WORD *)(v12 + 112);
        goto LABEL_51;
      }
      *(_DWORD *)(a1 + 72) |= 0x4000u;
      return 0LL;
    }
    v11 = *(_WORD *)(v12 + 116);
    v6 = v12;
  }
  while ( v11 == 4 );
  if ( v11 == 2 )
  {
    v49 = sub_406CF0(a1, v12, 1);
    *(_WORD *)(v12 + 112) = v49;
    if ( v49 == 1 )
    {
      v54 = *(_DWORD *)(a1 + 72);
      if ( (v54 & 4) == 0 )
      {
        v55 = sub_4073F0(*(_DWORD *)(a1 + 44), v54, 4255258, v50, v51, v52, v59);
        *(_DWORD *)(v12 + 68) = v55;
        if ( v55 < 0 )
        {
          v58 = *__errno_location();
          *(_WORD *)(v12 + 112) = 7;
          *(_DWORD *)(v12 + 64) = v58;
        }
        else
        {
          *(_WORD *)(v12 + 114) |= 2u;
        }
      }
    }
    *(_WORD *)(v12 + 116) = 3;
  }
LABEL_48:
  v32 = *(_QWORD *)(v12 + 8);
  v33 = *(_QWORD *)(v32 + 72);
  v34 = v33 - 1;
  if ( *(_BYTE *)(*(_QWORD *)(v32 + 56) + v33 - 1) != 47 )
    v34 = *(_QWORD *)(v32 + 72);
  v35 = (_BYTE *)(*(_QWORD *)(a1 + 32) + v34);
  *v35 = 47;
  memmove(v35 + 1, (const void *)(v12 + 264), *(_QWORD *)(v12 + 96) + 1LL);
  v31 = *(_WORD *)(v12 + 112);
LABEL_51:
  *(_QWORD *)a1 = v12;
  if ( v31 == 11 )
    goto LABEL_60;
LABEL_52:
  v6 = v12;
  if ( v31 == 1 )
    goto LABEL_53;
  return v6;
}

__int64 __fastcall fts_set(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 > 4 )
  {
    *__errno_location() = 22;
    return 1LL;
  }
  else
  {
    *(_WORD *)(a2 + 116) = a3;
    return 0LL;
  }
}

__int64 __fastcall fts_children(__int64 a1, int a2)
{
  int *v3; // rax
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  int *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 result; // rax
  void *v11; // rdi
  int v12; // r14d
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebp
  int v17; // r8d
  int v18; // r9d
  int v19; // ebx
  char v20; // [rsp+0h] [rbp-28h]

  v3 = __errno_location();
  v7 = v3;
  if ( (a2 & 0xFFFFDFFF) != 0 )
  {
    *v3 = 22;
    return 0LL;
  }
  v8 = *(_QWORD *)a1;
  *v3 = 0;
  if ( (*(_BYTE *)(a1 + 73) & 0x40) != 0 )
    return 0LL;
  v9 = *(unsigned __int16 *)(v8 + 112);
  if ( (_WORD)v9 == 9 )
    return *(_QWORD *)(v8 + 16);
  result = 0LL;
  if ( (_WORD)v9 == 1 )
  {
    v11 = *(void **)(a1 + 8);
    if ( v11 )
      sub_407030(v11);
    v12 = 1;
    if ( a2 == 0x2000 )
    {
      *(_DWORD *)(a1 + 72) |= 0x2000u;
      v12 = 2;
    }
    if ( !*(_QWORD *)(v8 + 88) && **(_BYTE **)(v8 + 48) != 47 )
    {
      v13 = *(_DWORD *)(a1 + 72);
      if ( (v13 & 4) == 0 )
      {
        v16 = sub_4073F0(*(_DWORD *)(a1 + 44), v13, 4255258, v4, v5, v6, v20);
        if ( v16 < 0 )
        {
          *(_QWORD *)(a1 + 8) = 0LL;
          return 0LL;
        }
        *(_QWORD *)(a1 + 8) = sub_407760(a1, v12, v14, v15, v17, v18);
        if ( (*(_BYTE *)(a1 + 73) & 2) != 0 )
        {
          sub_407250(a1, v16, 1);
        }
        else
        {
          if ( fchdir(v16) )
          {
            v19 = *v7;
            close(v16);
            result = 0LL;
            *v7 = v19;
            return result;
          }
          close(v16);
        }
        return *(_QWORD *)(a1 + 8);
      }
    }
    result = sub_407760(a1, v12, v9, v4, v5, v6);
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}

__int64 __fastcall sub_408F40(__int64 a1, int *a2)
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

__int64 __fastcall sub_409020(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        __int64 a9)
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
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-49h]
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v46 = *v9;
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
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v46), result = 0xFFFFFFFFLL, !v18) )
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
  v48 = -1;
  v15 = s1;
  v16 = 0LL;
  v45 = 0;
  v49 = 0;
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
        v33 = a4;
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
    return 63LL;
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
          v36 = *a2;
          v37 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v37, v36);
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

__int64 __fastcall sub_409640(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_408F40((__int64)a2, a7);
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
        sub_408F40((__int64)a2, a7);
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
            return (unsigned int)sub_409020(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_409020(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_409020(a1, a2, v12, a4, a5, 0, a7, v8, (__int64)"-W ");
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
        __fprintf_chk(stderr, 1LL, v44, v43);
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
            __fprintf_chk(stderr, 1LL, v42, v41);
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
      __fprintf_chk(stderr, 1LL, v40, v39);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_409C10(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_612500 = dword_61233C;
  dword_612504 = dword_612338;
  result = sub_409640(a1, a2, a3, a4, a5, a6, &dword_612500, a7);
  dword_61233C = dword_612500;
  qword_612550 = (char *)qword_612510;
  dword_612334 = dword_612508;
  return result;
}

__int64 __fastcall sub_409C70(int a1, __int64 *a2, const char *a3)
{
  return sub_409C10(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_409C90(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_409C10(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_409CB0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409640(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_409CD0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_409C10(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_409CF0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409640(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409D10(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40A000(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

char *__fastcall sub_409D90(char *a1, unsigned int a2, const char *a3)
{
  char *v3; // rbx
  int v4; // eax
  size_t v6; // rdi
  int v7; // eax
  int v9; // eax
  int v10; // r13d
  char v11[72]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a1;
  if ( *a3 )
  {
    v4 = dword_612538;
    if ( !dword_612538 )
    {
      v9 = open("/proc/self/fd", 67840);
      v10 = v9;
      if ( v9 < 0 )
      {
        dword_612538 = -1;
        return 0LL;
      }
      __sprintf_chk(v11, 1LL, 32LL, "/proc/self/fd/%d/../fd", (unsigned int)v9);
      dword_612538 = access(v11, 0) == 0 ? 1 : -1;
      close(v10);
      v4 = dword_612538;
    }
    if ( v4 >= 0 && ((v6 = strlen(a3) + 27, v6 <= 0xFC0) || (v3 = (char *)malloc(v6)) != 0LL) )
    {
      v7 = __sprintf_chk(v3, 1LL, -1LL, "/proc/self/fd/%d/", a2);
      strcpy(&v3[v7], a3);
      return v3;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}

__int64 __fastcall sub_409EC0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40BD60(stream);
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

void __fastcall sub_409F20(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 9827862;
}

__int64 __fastcall sub_409F30(__int64 a1, __int64 *a2)
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
  if ( ((v2 + 1) & v2) != 0 )
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

__int64 __fastcall sub_409FB0(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax

  v3 = 0LL;
  if ( (a2 & 0x40) != 0 )
    v3 = a3;
  v4 = open(a1, a2, v3);
  return sub_40BA20(v4);
}

bool __fastcall sub_40A000(int a1)
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

unsigned __int64 __fastcall sub_40A060(unsigned __int64 a1)
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

unsigned __int64 __fastcall sub_40A100(__int64 a1, unsigned __int64 a2)
{
  return __ROR8__(a1, 3) % a2;
}

bool __fastcall sub_40A110(__int64 a1, __int64 a2)
{
  return a1 == a2;
}

__int64 __fastcall sub_40A120(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40A120(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40A150(__int64 a1, __int64 a2, __m128i **a3, char a4)
{
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 *v10; // rax
  const __m128i *v12; // rax

  v7 = (__m128i *)sub_40A120(a1, a2);
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

__int64 __fastcall sub_40A270(float **a1)
{
  float *v1; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == (float *)&unk_40F070 )
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
    *a1 = (float *)&unk_40F070;
    return 0LL;
  }
  return result;
}

__int64 __fastcall sub_40A2F0(__int64 a1, __int64 a2, char a3)
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
              v8 = (_QWORD *)sub_40A120(a1, *v6);
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
    v10 = (_QWORD *)sub_40A120(a1, v5);
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

__int64 __fastcall sub_40A530(__int64 a1, __int64 a2)
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

__int64 __fastcall sub_40A680(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = (_QWORD *)sub_40A120(a1, a2);
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

__int64 __fastcall sub_40A730(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)sub_40A120(a1, a2);
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

__int64 __fastcall sub_40A810(__int64 a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
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

_QWORD *__fastcall sub_40A8F0(
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
    v7 = sub_40A100;
  if ( !a4 )
    v6 = sub_40A110;
  v9 = (char *)malloc(0x50uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = (float **)(v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40A270(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40A060(a1);
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
      *((_QWORD *)v9 + 5) = &unk_40F070;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40A270(v11) )
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

void __fastcall sub_40AA80(_QWORD *a1)
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

void __fastcall sub_40AB30(_QWORD *ptr)
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

__int64 __fastcall sub_40AC10(__int64 a1, __int64 a2)
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
  v5 = sub_40A060(a2);
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
  v12 = sub_40A2F0((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40A2F0(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40A2F0(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_40AC10(__int64 a1, __int64 a2)
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
  v5 = sub_40A060(a2);
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
  v12 = sub_40A2F0((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40A2F0(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40A2F0(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_40AE10(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40A150(a1, a2, v26, 0);
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
        sub_40A270((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40AC10(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40A150(a1, a2, v26, 0) )
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

__int64 __fastcall sub_40AE10(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40A150(a1, a2, v26, 0);
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
        sub_40A270((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40AC10(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40A150(a1, a2, v26, 0) )
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

__int64 __fastcall sub_40B090(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v2 = a2;
  v3 = sub_40AE10(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    return v5;
  return v2;
}

__int64 __fastcall sub_40B0D0(__int64 a1, __int64 a2)
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

  v3 = sub_40A150(a1, a2, &v24, 1);
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
    sub_40A270((float **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40AC10(a1, v17) )
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

void __fastcall sub_40B2B0(__int64 a1, int a2)
{
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = a2;
}

__int64 __fastcall sub_40B2D0(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 28);
}

__int64 __fastcall sub_40B2E0(__int64 a1, int a2)
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

__int64 __fastcall sub_40B320(__int64 a1)
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

__int64 __fastcall sub_40B320(__int64 a1)
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

const char *sub_40B370()
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
                sub_40BD60(v60);
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
            sub_40BD60(v39);
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

void __fastcall __noreturn sub_40B8E0(int errnum)
{
  char *v1; // rax

  v1 = dcgettext(0LL, "unable to record current working directory", 5);
  error(status, errnum, v1);
  abort();
}

void __fastcall __noreturn sub_40B910(int errnum)
{
  char *v1; // rax

  v1 = dcgettext(0LL, "failed to return to initial working directory", 5);
  error(status, errnum, v1);
  abort();
}

__int64 __fastcall sub_40B940(int a1, const char *a2, char a3, unsigned int a4)
{
  __int64 v4; // rcx
  int v5; // eax

  v4 = 0LL;
  if ( (a3 & 0x40) != 0 )
    v4 = a4;
  v5 = openat(a1, a2, a3, v4);
  return sub_40BA20(v5);
}

__int64 __fastcall sub_40B990(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // edx
  __int64 result; // rax
  __int64 v5; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = sub_409FB0(".", 0, a3);
  *(_DWORD *)a1 = v3;
  result = 0LL;
  if ( v3 < 0 )
  {
    v5 = sub_40BFC0(0LL, 0LL);
    *(_QWORD *)(a1 + 8) = v5;
    return (unsigned int)-(v5 == 0);
  }
  return result;
}

int __fastcall sub_40B9E0(__int64 a1)
{
  if ( *(int *)a1 < 0 )
    return sub_40BAF0(*(void **)(a1 + 8));
  else
    return fchdir(*(_DWORD *)a1);
}

void __fastcall sub_40BA00(__int64 a1)
{
  int v2; // edi

  v2 = *(_DWORD *)a1;
  if ( v2 >= 0 )
    close(v2);
  free(*(void **)(a1 + 8));
}

__int64 __fastcall sub_40BA20(unsigned int fd)
{
  __int64 result; // rax
  unsigned int v2; // r12d
  int *v3; // rax
  int v4; // r13d
  int *v5; // rbp

  if ( fd > 2 )
    return fd;
  v2 = sub_40C5A0();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

void __fastcall sub_40BA70(int a1)
{
  if ( a1 >= 0 )
  {
    if ( close(a1) )
      __assert_fail("! close_fail", "lib/chdir-long.c", 0x40u, "cdb_free");
  }
}

__int64 __fastcall sub_40BAB0(int *a1, const char *a2)
{
  int v2; // eax
  int v3; // ebp

  v2 = openat(*a1, a2, 67840);
  if ( v2 < 0 )
    return 0xFFFFFFFFLL;
  v3 = v2;
  sub_40BA70(*a1);
  *a1 = v3;
  return 0LL;
}

__int64 __fastcall sub_40BAF0(const char *s)
{
  unsigned int v1; // ebx
  int *v2; // r12
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // rax
  size_t v6; // rbx
  const char *v7; // rbp
  const char *v8; // r13
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  int v11; // eax
  int v12; // ebx
  _BYTE *v14; // rax
  _BYTE *v15; // rbx
  int v16; // eax
  int fd[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v1 = chdir(s);
  if ( v1 )
  {
    v2 = __errno_location();
    if ( *v2 == 36 )
    {
      v3 = strlen(s);
      fd[0] = -100;
      v4 = v3;
      if ( !v3 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v3 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v5 = strspn(s, "/");
      v6 = v5;
      if ( v5 == 2 )
      {
        v14 = (_BYTE *)sub_40C490(s + 3, 47LL, v4 - 3);
        v15 = v14;
        if ( !v14 )
          return (unsigned int)-1;
        *v14 = 0;
        v16 = sub_40BAB0(fd, s);
        *v15 = 47;
        if ( !v16 )
        {
          v7 = &v15[strspn(v15 + 1, "/") + 1];
          goto LABEL_7;
        }
      }
      else
      {
        v7 = s;
        if ( !v5 )
        {
LABEL_7:
          if ( *v7 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v8 = &s[v4];
          if ( v7 > &s[v4] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v8 - v7 > 4095 )
          {
            v9 = memrchr(v7, 47, 0x1000uLL);
            v10 = v9;
            if ( !v9 )
            {
              *v2 = 36;
              return (unsigned int)-1;
            }
            *v9 = 0;
            if ( v9 - v7 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v11 = sub_40BAB0(fd, v7);
            *v10 = 47;
            if ( v11 )
              goto LABEL_18;
            v7 = &v10[strspn(v10 + 1, "/") + 1];
          }
          if ( v8 <= v7 || !(unsigned int)sub_40BAB0(fd, v7) )
          {
            v1 = fchdir(fd[0]);
            if ( !v1 )
            {
              sub_40BA70(fd[0]);
              return v1;
            }
          }
          goto LABEL_18;
        }
        if ( !(unsigned int)sub_40BAB0(fd, "/") )
        {
          v7 = &s[v6];
          goto LABEL_7;
        }
      }
LABEL_18:
      v12 = *v2;
      sub_40BA70(fd[0]);
      *v2 = v12;
      return (unsigned int)-1;
    }
  }
  return v1;
}

int __fastcall sub_40BD60(FILE *stream)
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
  if ( !(unsigned int)sub_40BF20(stream) )
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

__int64 __fastcall sub_40BDE0(int a1, int a2, __int64 a3, int a4, int a5, int a6)
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
    if ( dword_612548 < 0 )
    {
      v6 = sub_40BDE0(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_612548 == -1 )
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
        v6 = sub_40BDE0(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_612548 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_612548 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_40BF20(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_40BF60(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_40BF60(FILE *a1, __off_t a2, int a3)
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

char *__fastcall sub_40BFC0(char *a1, size_t a2)
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

_BYTE *__fastcall sub_40C490(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // r9
  _BYTE *v5; // rcx
  _BYTE *v6; // rdi

  if ( !a3 )
    return 0LL;
  if ( ((unsigned __int8)a1 & 7) != 0 )
  {
    if ( (_BYTE)a2 == *a1 )
      return a1;
    while ( 1 )
    {
      ++a1;
      if ( !--a3 )
        return 0LL;
      if ( ((unsigned __int8)a1 & 7) == 0 )
        break;
      if ( *a1 == (_BYTE)a2 )
        return a1;
    }
  }
  v4 = ((((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
  if ( a3 > 7 && (((v4 ^ *(_QWORD *)a1) - 0x101010101010101LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) == 0 )
  {
    while ( 1 )
    {
      a3 -= 8LL;
      a1 += 8;
      if ( a3 <= 7 )
        break;
      if ( (((v4 ^ *(_QWORD *)a1) - 0x101010101010101LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) != 0 )
        goto LABEL_15;
    }
    if ( !a3 )
      return 0LL;
  }
LABEL_15:
  if ( (_BYTE)a2 != *a1 )
  {
    v5 = a1 + 1;
    v6 = &a1[a3];
    while ( 1 )
    {
      result = v5;
      if ( v5 == v6 )
        break;
      if ( *v5++ == (_BYTE)a2 )
        return result;
    }
    return 0LL;
  }
  return a1;
}

__int64 __fastcall sub_40C5A0(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  return sub_40BDE0(a1, 0, 3LL, a4, a5, a6);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40C620(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_6122C8 )
    v1 = (void *)qword_6122C8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40C638(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_611E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
