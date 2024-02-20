#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  unsigned int v3; // er12@1
  char **v4; // rbp@1
  int v5; // eax@2
  __int64 v6; // rbx@9
  char *v7; // r9@10
  unsigned int v8; // ecx@10
  char *v9; // rdx@12
  unsigned int v10; // ecx@13
  bool v11; // cf@14
  bool v12; // zf@14
  char *v13; // rdi@15
  signed __int64 v14; // rcx@15
  char *v15; // rsi@15
  int *v16; // rax@19
  int *v17; // r15@19
  const char *v18; // rsi@26
  char *v19; // rax@27
  __int64 *v20; // rbx@30
  const char **v21; // rbp@30
  char v22; // dl@30
  _BYTE *v23; // rax@31
  int v24; // ecx@32
  int v25; // edx@32
  __int64 v26; // ST08_8@34
  __int32_t v27; // ecx@34
  const char *v28; // rsi@35
  void *v29; // rdi@35
  int v30; // eax@35
  char *v31; // rbx@41
  void *v32; // rax@42
  __int64 *v33; // rbx@45
  char *v34; // rax@45
  char *v35; // r12@45
  void *v36; // rsi@50
  int v37; // eax@52
  int v38; // ebx@54
  int *v39; // r12@54
  int v40; // ebx@55
  __int64 v41; // rax@55
  __int64 v42; // rbp@55
  char *v43; // rax@55
  int v45; // ST04_4@57
  __int32_t v46; // ecx@57
  struct stat *v47; // r15@46
  void *v48; // rax@59
  char *v49; // rax@60
  char *v50; // r12@60
  void *v51; // rax@61
  void *v52; // rax@44
  char *v53; // rax@64
  char *v54; // rax@65
  char *i; // rax@65
  const char *v56; // rax@68
  char *v57; // r13@68
  char *v58; // rdi@68
  void *v59; // rax@69
  signed int v60; // eax@71
  __int64 v61; // rax@72
  __int64 v62; // rbx@72
  char *v63; // rax@72
  __int64 v64; // rax@76
  __int64 v65; // rbx@76
  char *v66; // rax@76
  __int64 v67; // rax@77
  __int64 v68; // rbp@77
  char *v69; // rbx@77
  int *v70; // rax@77
  __int64 v71; // rax@79
  __int64 v72; // rbx@79
  char *v73; // rax@79
  int v74; // [sp+4h] [bp-104h]@19
  char *string; // [sp+10h] [bp-F8h]@35
  void *ptr; // [sp+18h] [bp-F0h]@47
  void *v77; // [sp+20h] [bp-E8h]@45
  const char *v78; // [sp+28h] [bp-E0h]@45
  __int64 v79; // [sp+30h] [bp-D8h]@45
  struct stat stat_buf; // [sp+40h] [bp-C8h]@20

  v3 = a1;
  v4 = a2;
  sub_4027F0(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  status = 125;
  sub_409450(
    sub_4024E0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  while ( 1 )
  {
    v5 = sub_405EB0(v3, v4, "+i:o:e:", &off_409E20, 0LL);
    if ( v5 == -1 )
      break;
    if ( v5 != 101 )
    {
      if ( v5 <= 101 )
      {
        if ( v5 == -131 )
        {
          sub_404890((char)stdout);
          exit(0);
        }
        if ( v5 == -130 )
          sub_402100(0);
LABEL_22:
        sub_402100(125);
      }
      if ( v5 != 105 && v5 != 111 )
        goto LABEL_22;
    }
    v6 = dword_409DE0[(unsigned __int64)(unsigned int)(v5 - 101)];
    if ( (unsigned int)v6 > 2 )
      goto LABEL_73;
    v7 = nptr;
    dword_60D2C8[6 * v6] = v5;
    v8 = *v7;
    if ( v8 <= 0x20 && (1LL << v8) & 0x100003E00LL )
    {
      v9 = v7 + 1;
      do
      {
        nptr = v9;
        v10 = *v9;
        v7 = v9;
        if ( v10 > 0x20 )
          break;
        ++v9;
      }
      while ( (1LL << v10) & 0x100003E00LL );
    }
    qword_60D2D0[3 * v6] = (__int64)v7;
    v11 = (unsigned int)v5 < 0x69;
    v12 = v5 == 105;
    if ( v5 == 105 )
    {
      v11 = (unsigned __int8)*v7 < 0x4Cu;
      v12 = *v7 == 76;
      if ( *v7 == 76 )
      {
        v18 = "line buffering stdin is meaningless";
        goto LABEL_27;
      }
    }
    v13 = "L";
    v14 = 2LL;
    v15 = v7;
    do
    {
      if ( !v14 )
        break;
      v11 = (unsigned __int8)*v15 < (unsigned __int8)*v13;
      v12 = *v15++ == *v13++;
      --v14;
    }
    while ( v12 );
    if ( (!v11 && !v12) != v11 )
    {
      v74 = sub_404C90(v7);
      v16 = __errno_location();
      v17 = v16;
      if ( v74 )
      {
        if ( v74 == 1 )
          v60 = 75;
        else
          v60 = *v16;
        *v17 = v60;
        LODWORD(v61) = sub_404410(nptr, 0LL);
        v62 = v61;
        v63 = dcgettext(0LL, "invalid mode %s", 5);
        error(125, *v17, v63, v62);
LABEL_73:
        __assert_fail("0 <= opt_fileno && opt_fileno < ARRAY_CARDINALITY (stdbuf)", "src/stdbuf.c", 0x14Fu, "main");
      }
      *v16 = 0;
      qword_60D2C0[3 * v6] = stat_buf.st_dev;
    }
  }
  v20 = qword_60D2C0;
  v21 = (const char **)&v4[dword_60D27C];
  v22 = 0;
  if ( (signed int)(v3 - dword_60D27C) <= 0 )
    goto LABEL_78;
  do
  {
    v23 = (_BYTE *)v20[2];
    if ( v23 )
    {
      v24 = *((_DWORD *)v20 + 2);
      v25 = v24 + 128;
      if ( *v23 == 76 )
      {
        if ( (unsigned int)v25 <= 0x17F )
        {
          v45 = *((_DWORD *)v20 + 2);
          v46 = (*__ctype_toupper_loc())[v45];
        }
        v28 = "%s%c=L";
        v29 = &string;
        v30 = sub_4050D0((unsigned __int64)&string);
      }
      else
      {
        if ( (unsigned int)v25 <= 0x17F )
        {
          v26 = *v20;
          v27 = (*__ctype_toupper_loc())[v24];
        }
        v28 = "%s%c=%lu";
        v29 = &string;
        v30 = sub_4050D0((unsigned __int64)&string);
      }
      if ( v30 < 0 )
        goto LABEL_74;
      if ( putenv(string) )
        goto LABEL_77;
      v22 = 1;
    }
    v20 += 3;
  }
  while ( (void **)v20 != &ptr/*INVALID_COLON*/ );
  if ( !v22 )
    goto LABEL_80;
  v31 = s;
  if ( strchr(s, 47) )
  {
    LODWORD(v32) = sub_402580(v31, 47LL);
    ptr/*INVALID_COLON*/ = v32;
  }
  else
  {
    LODWORD(v49) = sub_404C60("/proc/self/exe", 47LL);
    v50 = v49;
    if ( v49 )
    {
      LODWORD(v51) = sub_402580(v49, 47LL);
      ptr/*INVALID_COLON*/ = v51;
    }
    else
    {
      v53 = getenv("PATH");
      v50 = v53;
      if ( v53 )
      {
        LODWORD(v54) = sub_404C00(v53);
        v50 = v54;
        for ( i = strtok(v54, ":"); i; i = strtok(0LL, ":") )
        {
          LODWORD(v56) = sub_4026F0(i, v31, 0LL);
          v57 = (char *)v56;
          v58 = (char *)v56;
          if ( !access(v56, 1) )
          {
            LODWORD(v59) = sub_402580(v58, 1LL);
            ptr/*INVALID_COLON*/ = v59;
            free(v57);
            break;
          }
          free(v58);
        }
      }
    }
    free(v50);
  }
  if ( !ptr/*INVALID_COLON*/ )
  {
    LODWORD(v52) = sub_404C00("/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib/coreutils");
    ptr/*INVALID_COLON*/ = v52;
  }
  v33 = (__int64 *)&v77;
  v34 = getenv("LD_PRELOAD");
  v78 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/libexec/coreutils";
  v79 = 0LL;
  v35 = v34;
  v12 = *(_BYTE *)ptr/*INVALID_COLON*/ == 0;
  v77 = ptr/*INVALID_COLON*/;
  if ( !v12 )
  {
    while ( 1 )
    {
      v28 = "%s/%s";
      v29 = &ptr;
      if ( (signed int)sub_4050D0((unsigned __int64)&ptr) < 0 )
        goto LABEL_74;
      v47 = &stat_buf;
      v36 = ptr;
      if ( !__xstat(1, (const char *)ptr, &stat_buf) )
        goto LABEL_51;
      ++v33;
      free(ptr);
      if ( !*v33 )
        break;
      if ( !*(_BYTE *)*v33 )
        goto LABEL_59;
    }
    LODWORD(v64) = sub_404410("libstdbuf.so", v36);
    v65 = v64;
    v66 = dcgettext(0LL, "failed to find %s", 5);
    v28 = 0LL;
    error(125, 0, v66, v65);
LABEL_77:
    LODWORD(v67) = sub_404410(string, v28);
    v68 = v67;
    v69 = dcgettext(0LL, "failed to update the environment with %s", 5);
    v70 = __errno_location();
    error(125, *v70, v69, v68);
LABEL_78:
    v18 = "missing operand";
LABEL_27:
    v19 = dcgettext(0LL, v18, 5);
    error(0, 0, v19);
    goto LABEL_22;
  }
  v47 = &stat_buf;
LABEL_59:
  LODWORD(v48) = sub_404C00("libstdbuf.so");
  ptr = v48;
LABEL_51:
  if ( v35 )
  {
    v28 = "%s=%s:%s";
    v29 = v47;
    v37 = sub_4050D0((char)v47);
  }
  else
  {
    v28 = "%s=%s";
    v29 = v47;
    v37 = sub_4050D0((char)v47);
  }
  if ( v37 < 0 )
LABEL_74:
    sub_404C20(v29, v28);
  free(ptr);
  v38 = putenv((char *)stat_buf.st_dev);
  v39 = __errno_location();
  if ( v38 )
  {
    LODWORD(v71) = sub_404410(stat_buf.st_dev, v28);
    v72 = v71;
    v73 = dcgettext(0LL, "failed to update the environment with %s", 5);
    error(125, *v39, v73, v72);
LABEL_80:
    v18 = "you must specify a buffering mode option";
    goto LABEL_27;
  }
  free(ptr/*INVALID_COLON*/);
  execvp(*v21, (char *const *__attribute__((__org_arrdim(0,0))) )v21);
  v40 = *v39 == 2;
  LODWORD(v41) = sub_404410(*v21, v21);
  v42 = v41;
  v43 = dcgettext(0LL, "failed to run command %s", 5);
  error(0, *v39, v43, v42);
  return (unsigned int)(v40 + 126);
}

int sub_40204B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_40206A()
{
  return 0;
}

int sub_4020A1()
{
  int result; // eax@4

  if ( !byte_60D2A8 )
  {
    while ( qword_60D2B0 < (unsigned __int64)(((&unk_60CE48 - (_UNKNOWN *)&qword_60CE40) >> 3) - 1) )
      (*(&qword_60CE40 + ++qword_60D2B0))();
    result = sub_40204B();
    byte_60D2A8 = 1;
  }
  return result;
}

int sub_4020F8()
{
  return sub_40206A();
}

noreturn void __fastcall  sub_402100(int status)
{
  int v1; // ebx@1
  char *v2; // rbp@1
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
  const char *v29; // rbp@10
  char *v30; // rax@11
  char *v31; // rax@11
  char *v32; // rax@13
  char *v33; // rax@14
  char *v34; // rax@15
  char *v35; // rax@15
  char *v36; // rax@17
  char *v37; // rax@19
  const char *v38; // [sp+0h] [bp-88h]@4
  const char *v39; // [sp+8h] [bp-80h]@4
  const char *v40; // [sp+10h] [bp-78h]@4
  const char *v41; // [sp+18h] [bp-70h]@4
  const char *v42; // [sp+20h] [bp-68h]@4
  const char *v43; // [sp+28h] [bp-60h]@4
  const char *v44; // [sp+30h] [bp-58h]@4
  const char *v45; // [sp+38h] [bp-50h]@4
  const char *v46; // [sp+40h] [bp-48h]@4
  const char *v47; // [sp+48h] [bp-40h]@4
  const char *v48; // [sp+50h] [bp-38h]@4
  const char *v49; // [sp+58h] [bp-30h]@4
  __int64 v50; // [sp+60h] [bp-28h]@4
  __int64 v51; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = s;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s OPTION... COMMAND\n", 5);
  __printf_chk(1LL, v4, v2);
  v5 = stdout;
  v6 = dcgettext(0LL, "Run COMMAND, with modified buffering operations for its standard streams.\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "  -i, --input=MODE   adjust standard input stream buffering\n"
          "  -o, --output=MODE  adjust standard output stream buffering\n"
          "  -e, --error=MODE   adjust standard error stream buffering\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "\n"
          "If MODE is 'L' the corresponding stream will be line buffered.\n"
          "This option is invalid with standard input.\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(0LL, "\nIf MODE is '0' the corresponding stream will be unbuffered.\n", 5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "\n"
          "Otherwise MODE is a number which may be followed by one of the following:\n"
          "KB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n"
          "In this case the corresponding stream will be fully buffered with the buffer\n"
          "size set to MODE bytes.\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "\n"
          "NOTE: If COMMAND adjusts the buffering of its standard streams ('tee' does\n"
          "for example) then that will override corresponding changes by 'stdbuf'.\n"
          "Also some filters (like 'dd' and 'cat' etc.) don't use streams for I/O,\n"
          "and are thus unaffected by 'stdbuf' settings.\n",
          5);
  fputs_unlocked(v22, v21);
  v38 = "[";
  v23 = (__int64 *)&v38;
  v39 = "test invocation";
  v40 = "coreutils";
  v41 = "Multi-call invocation";
  v42 = "sha224sum";
  v43 = "sha2 utilities";
  v44 = "sha256sum";
  v45 = "sha2 utilities";
  v46 = "sha384sum";
  v47 = "sha2 utilities";
  v48 = "sha512sum";
  v49 = "sha2 utilities";
  v50 = 0LL;
  v51 = 0LL;
  do
  {
    v23 += 2;
    v24 = (_BYTE *)*v23;
    v25 = 0;
    v26 = *v23 == 0;
    if ( !*v23 )
      break;
    v27 = "stdbuf";
    v28 = 7LL;
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
  v29 = (const char *)v23[1];
  if ( v29 )
  {
    v30 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v30, &unk_40953E);
    v31 = setlocale(5, 0LL);
    if ( !v31 || !strncmp(v31, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v34 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v34, &unk_40953E);
    v35 = setlocale(5, 0LL);
    if ( !v35 || !strncmp(v35, "en_", 3uLL) )
    {
      v29 = "stdbuf";
      v36 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v36, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v29 = "stdbuf";
  }
  v37 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v37, "stdbuf");
LABEL_13:
  v32 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v32, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v33 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v33, v29);
LABEL_3:
  exit(v1);
}

__int64 sub_4024E0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_406240(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60D310 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60D318 )
      {
        LODWORD(v5) = sub_404260(qword_60D318, "write error");
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
  result = sub_406240(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_402580(void *a1, __int64 a2)
{
  __int64 result; // rax@1

  result = sub_402600(a1);
  if ( !result )
    sub_404C20(a1, a2);
  return result;
}

signed __int64 __fastcall sub_4025A0(_BYTE *a1)
{
  unsigned __int64 v1; // rbp@1
  __int64 v2; // rax@1
  signed __int64 v3; // rdx@2
  signed __int64 result; // rax@7

  v1 = *a1 == 47;
  LODWORD(v2) = sub_402660();
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

_BYTE *__fastcall sub_402600(void *src)
{
  signed __int64 v1; // rax@1
  size_t v2; // rbx@1
  _BYTE *v3; // rax@1
  _BYTE *v4; // rcx@1
  _BYTE *v5; // rax@2

  v1 = sub_4025A0(src);
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

_BYTE *__fastcall sub_402660(_BYTE *a1)
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

size_t __fastcall sub_4026C0(const char *a1)
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

__int64 __fastcall sub_4026F0(void *a1, void *a2)
{
  __int64 result; // rax@1

  result = sub_402710(a1, a2);
  if ( !result )
    sub_404C20(a1, a2);
  return result;
}

void *__fastcall sub_402710(void *src, void *a2, _QWORD *a3)
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
  v4 = sub_402660(src);
  v5 = v4;
  v6 = sub_4026C0(v4);
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

char *__fastcall sub_4027F0(const char *a1)
{
  char *v1; // rbx@2
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
  v1 = (char *)a1;
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
        v1 = result + 1;
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
          v1 = result + 4;
          program_invocation_short_name = (__int64)(result + 4);
        }
      }
    }
  }
  s = v1;
  program_invocation_name = (__int64)v1;
  return result;
}

char *__fastcall sub_402890(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_406300(0LL);
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

unsigned __int64 __fastcall sub_402990(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_402890("`", v11);
        v58 = sub_402890("'", v11);
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
            return sub_402990((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_402990((__int64)v9, v79, s);
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
                return sub_402990((__int64)v9, v10, s);
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
              return sub_402990((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_402990((__int64)v9, v10, s);
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
              return sub_402990((__int64)v9, v10, s);
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
              return sub_402990((__int64)v9, v10, s);
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
            return sub_402990((__int64)v9, v10, s);
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
            return sub_402990((__int64)v9, v10, s);
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
            return sub_402990((__int64)v9, v10, s);
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
              return sub_402990((__int64)v9, v10, s);
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
          return sub_402990((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_402990((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_405F30((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_402990((__int64)v9, v10, s);
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
      return sub_402990((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_402990(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_402890("`", v11);
        v58 = sub_402890("'", v11);
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
            return sub_402990((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_402990((__int64)v9, v79, s);
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
                return sub_402990((__int64)v9, v10, s);
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
              return sub_402990((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_402990((__int64)v9, v10, s);
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
              return sub_402990((__int64)v9, v10, s);
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
              return sub_402990((__int64)v9, v10, s);
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
            return sub_402990((__int64)v9, v10, s);
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
            return sub_402990((__int64)v9, v10, s);
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
            return sub_402990((__int64)v9, v10, s);
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
              return sub_402990((__int64)v9, v10, s);
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
          return sub_402990((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_402990((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_405F30((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_402990((__int64)v9, v10, s);
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
      return sub_402990((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_403BC0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60D258;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_60D270 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_404C20(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_60D258 == &xmmword_60D260 )
    {
      LODWORD(v20) = sub_404A30(0LL, v9);
      v7 = v20;
      off_60D258 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60D260);
    }
    else
    {
      LODWORD(v10) = sub_404A30(off_60D258, v9);
      off_60D258 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60D270], 0, 16LL * ((signed int)a1 + 1 - dword_60D270));
    dword_60D270 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_402990(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60D340 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4049D0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_402990(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_403BC0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60D258;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_60D270 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_404C20(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_60D258 == &xmmword_60D260 )
    {
      LODWORD(v20) = sub_404A30(0LL, v9);
      v7 = v20;
      off_60D258 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60D260);
    }
    else
    {
      LODWORD(v10) = sub_404A30(off_60D258, v9);
      off_60D258 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60D270], 0, 16LL * ((signed int)a1 + 1 - dword_60D270));
    dword_60D270 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_402990(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60D340 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4049D0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_402990(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4041E0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60D470;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60D440);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60D450);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60D460);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_403BC0(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_404260(char *a1)
{
  return sub_4041E0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_404410(char *a1)
{
  return sub_403BC0(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60D220);
}

int __fastcall sub_404430(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_404430(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_404890(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_404430(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_404430(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_4049D0(size_t a1, __int64 a2)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_404C20(a1, a2);
  }
  return result;
}

void *__fastcall sub_404A30(void *a1, size_t a2)
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
        sub_404C20(a1, a2);
    }
  }
  return result;
}

void *__fastcall sub_404BD0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_4049D0(a2, a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_404C00(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_404BD0(a1, v1 + 1);
}

noreturn void  sub_404C20()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_404C60()
{
  __int64 v0; // rax@1
  __int64 v1; // rbx@1

  LODWORD(v0) = sub_406040();
  v1 = v0;
  if ( !v0 && *__errno_location() == 12 )
    sub_404C20();
  return v1;
}

__int64 __fastcall sub_404C90(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
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
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
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
  v13 = __strtoul_internal(nptr, v5, v35, 0);
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

int sub_4050D0(__int64 a1, __int64 a2, ...)
{
  va_list va; // [sp+8h] [bp-D0h]@1

  va_start(va, a2);
  return sub_405FB0(a1, a2, va);
}

__int64 __fastcall sub_405160(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_405240(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_405860(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_405160(a2, a7);
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
        sub_405160((__int64)v11, a7);
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
            v40 = sub_405240(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_405240(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_405240(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_405E30(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60D480 = dword_60D27C;
  dword_60D484 = dword_60D278;
  result = sub_405860(a1, a2, a3, a4, a5, a6, (__int64)&dword_60D480, a7);
  dword_60D27C = dword_60D480;
  nptr = (char *)qword_60D490;
  dword_60D274 = dword_60D488;
  return result;
}

__int64 __fastcall sub_405EB0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_405E30(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_405F30(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_4062A0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

signed __int64 __fastcall sub_405FB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // rax@1
  unsigned int v4; // edx@2
  signed __int64 result; // rax@3
  unsigned __int64 v6; // [sp+8h] [bp-10h]@1

  LODWORD(v3) = sub_406990(0LL, &v6, a2, a3);
  if ( v3 )
  {
    v4 = v6;
    if ( v6 > 0x7FFFFFFF )
    {
      free(v3);
      *__errno_location() = 75;
      result = 0xFFFFFFFFLL;
    }
    else
    {
      *a1 = v3;
      result = v4;
    }
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  return result;
}

ssize_t __fastcall sub_406010(int a1, const char *a2, char *a3, size_t a4)
{
  if ( a1 != -100 )
    abort();
  return readlink(a2, a3, a4);
}

ssize_t __fastcall sub_406010(int a1, const char *a2, char *a3, size_t a4)
{
  if ( a1 != -100 )
    abort();
  return readlink(a2, a3, a4);
}

char *__fastcall sub_406040(__int64 a1)
{
  ssize_t (__fastcall *v1)(int, const char *, char *, size_t); // r9@1
  __int64 v2; // r8@1
  unsigned __int64 v3; // rbx@1
  char *v4; // r14@1
  char *v5; // rax@2
  __int64 v6; // rsi@3
  signed __int64 v7; // rax@3
  unsigned __int64 v8; // rcx@3
  char *v9; // rax@9
  void (__fastcall *v10)(unsigned __int64); // rax@10
  unsigned __int64 v12; // ST08_8@14
  int *v13; // rax@14
  __int64 v14; // rdx@14
  char *v15; // rdi@16
  size_t v16; // r13@17
  int (__fastcall *v17)(char *, unsigned __int64); // rax@20
  char *v18; // rax@21
  char *v19; // rax@24
  int *v20; // [sp+0h] [bp-448h]@15
  int v21; // [sp+8h] [bp-440h]@15
  char src; // [sp+10h] [bp-438h]@1

  v1 = sub_406010;
  v2 = 0LL;
  v3 = 1024LL;
  v4 = &src;
  while ( 1 )
  {
    v6 = a1;
    LODWORD(v7) = ((int (__fastcall *)(signed __int64, __int64, char *, unsigned __int64, __int64, ssize_t (__fastcall *)(int, const char *, char *, size_t)))sub_406010)(
                    4294967196LL,
                    a1,
                    v4,
                    v3,
                    v2,
                    v1);
    v8 = v7;
    if ( v7 < 0 )
    {
      v12 = v7;
      v13 = __errno_location();
      v8 = v12;
      v14 = (unsigned int)*v13;
      if ( (_DWORD)v14 != 34 )
      {
        v21 = *v13;
        v20 = v13;
        if ( &src == v4 )
        {
          v4 = 0LL;
        }
        else
        {
          v15 = v4;
          v4 = 0LL;
          ((void (__fastcall *)(char *, __int64, __int64, unsigned __int64))*(&off_40B620 + 2))(v15, v6, v14, v8);
          *v20 = v21;
        }
        return v4;
      }
    }
    if ( v3 > v8 )
      break;
    if ( &src != v4 )
      ((void (__fastcall *)(char *))*(&off_40B620 + 2))(v4);
    if ( v3 <= 0x4000000000000000LL )
    {
      v3 *= 2LL;
      LODWORD(v5) = ((int (__fastcall *)(unsigned __int64))malloc)(v3);
      v4 = v5;
      if ( !v5 )
        goto LABEL_10;
    }
    else
    {
      if ( (v3 & 0x8000000000000000LL) != 0LL )
      {
        v4 = 0LL;
        *__errno_location() = 36;
        return v4;
      }
      v3 = 0x8000000000000000LL;
      LODWORD(v9) = ((int (__fastcall *)(unsigned __int64))malloc)(0x8000000000000000LL);
      v4 = v9;
      if ( !v9 )
        goto LABEL_10;
    }
  }
  v16 = v8 + 1;
  v4[v8] = 0;
  if ( v4 == &src )
  {
    LODWORD(v19) = ((int (__fastcall *)(unsigned __int64))malloc)(v8 + 1);
    v4 = v19;
    if ( v19 )
    {
      memcpy(v19, &src, v16);
      return v4;
    }
    v3 = v16;
LABEL_10:
    v10 = (void (__fastcall *)(unsigned __int64))*(&off_40B620 + 3);
    if ( v10 )
      v10(v3);
    v4 = 0LL;
    *__errno_location() = 12;
    return v4;
  }
  if ( v3 > v16 && &src != v4 )
  {
    v17 = (int (__fastcall *)(char *, unsigned __int64))*(&off_40B620 + 1);
    if ( v17 )
    {
      LODWORD(v18) = v17(v4, v8 + 1);
      if ( v18 )
        v4 = v18;
    }
  }
  return v4;
}

__int64 __fastcall sub_406240(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_406870(stream);
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

bool __fastcall sub_4062A0(int a1)
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

const char *sub_406300()
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
  v1 = qword_60D4B8;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_60D4B8 )
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
          qword_60D4B8 = v1;
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
                sub_406870(v61);
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
            sub_406870(v40);
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

int __fastcall sub_406870(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_4068F0(stream) )
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

int __fastcall sub_4068F0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_406930(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_406930(FILE *a1, __off_t a2, int a3)
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

char *__fastcall sub_406990(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // r15@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@3
  unsigned __int64 v7; // rax@5
  size_t v8; // rdi@6
  void *v9; // rax@9
  size_t v10; // r12@11
  void *v11; // r14@13
  _BYTE *v12; // r8@13
  char *v13; // rbx@13
  size_t v14; // r15@13
  _BYTE *v15; // rcx@13
  char *v16; // rcx@14
  unsigned __int64 v17; // rax@14
  size_t v18; // r13@14
  bool v19; // dl@18
  void *v20; // rax@19
  char *v21; // rax@22
  void *v22; // rsp@23
  char *v23; // rax@30
  char v24; // r15@34
  __int64 v25; // rax@34
  char *v26; // r8@36
  char *v27; // rdx@36
  int v28; // eax@36
  char v29; // al@37
  int v30; // eax@40
  _BYTE *v31; // r15@40
  __int64 v32; // rdi@41
  _BYTE *v33; // rsi@54
  _BYTE *v34; // rdx@54
  _BYTE *v35; // rsi@56
  _BYTE *v36; // rdx@56
  signed __int64 v37; // rax@59
  char v38; // al@62
  __int64 v39; // rax@62
  signed __int64 v40; // rax@63
  __int64 v41; // rax@65
  signed __int64 v42; // r8@66
  __int64 v43; // rax@67
  unsigned __int64 v44; // rax@68
  char *v45; // r11@75
  int *v46; // rax@76
  char *v47; // r11@76
  unsigned __int64 v48; // rbx@77
  unsigned __int64 v49; // r10@81
  _BYTE *v50; // rdx@82
  _BYTE *v51; // rcx@82
  __int64 v52; // rsi@83
  char *v53; // r8@84
  unsigned __int64 v54; // rdx@85
  unsigned __int64 v55; // rcx@87
  char *v56; // r15@88
  char *result; // rax@98
  unsigned __int64 v58; // rax@100
  char *v59; // rax@107
  __int16 v61; // fps@117
  _BYTE *v65; // rdx@118
  _BYTE *v66; // rdi@118
  int v67; // er11@118
  __int64 v68; // rcx@119
  char *v69; // rcx@120
  char *v70; // rdi@128
  int *v71; // r9@128
  int v72; // eax@130
  int v73; // edx@131
  __int64 v74; // rax@138
  unsigned __int8 v75; // cf@138
  unsigned __int64 v76; // rax@138
  bool v77; // bl@144
  char *v78; // rax@146
  __int64 v79; // r9@148
  signed int v80; // ebx@154
  __int64 v81; // rax@167
  long double v82; // fst7@167
  __int64 v83; // rax@171
  char *v84; // rdi@171
  __int128 v85; // xmm0@171
  unsigned __int64 v86; // rax@188
  void *v87; // rax@190
  char *v88; // rax@193
  char *v89; // rcx@193
  int v90; // er8@194
  unsigned __int64 v91; // r15@195
  void *v92; // rax@201
  char *v93; // rax@216
  void *v94; // rax@222
  char v95; // al@254
  unsigned __int64 v96; // r9@257
  size_t v97; // r8@258
  unsigned __int64 v98; // r10@259
  unsigned __int64 v99; // rdi@259
  signed __int64 v100; // rax@263
  unsigned __int64 v101; // r10@266
  unsigned __int64 v102; // rax@269
  char *v103; // rax@277
  signed __int64 v104; // rsi@286
  char v105; // al@287
  size_t v106; // r15@292
  size_t v107; // r14@292
  bool v108; // r13@297
  char *v109; // rax@299
  char *v110; // rax@303
  signed __int64 v111; // rax@316
  unsigned __int64 v112; // r10@320
  void *v113; // rax@323
  char *v114; // rax@326
  __int16 v115; // ST34_2@330
  char *v116; // rax@330
  __int64 v117; // rsi@330
  __int64 v118; // rdx@330
  char v119; // al@330
  signed __int64 v120; // rdx@333
  unsigned __int64 v121; // rax@333
  char *v122; // rax@340
  __int64 v123; // rdx@340
  char v124; // al@340
  unsigned __int64 v125; // rax@343
  signed __int64 v126; // rsi@348
  signed __int64 v127; // r9@348
  __int64 v128; // rdx@348
  signed __int64 v129; // rax@354
  _BYTE *v130; // rsi@355
  _BYTE *v131; // rdi@357
  __int64 v132; // rax@357
  signed __int64 v133; // rsi@357
  unsigned __int64 v134; // rax@359
  char v135; // al@371
  signed __int64 v136; // rsi@372
  char v137; // al@373
  char *v138; // rax@374
  __int64 v139; // rdx@374
  char v140; // al@374
  signed __int64 v141; // rax@377
  void *v142; // rax@381
  __int16 v143; // ST34_2@389
  char *v144; // rax@389
  char *v145; // rdx@389
  char v146; // al@389
  char *v147; // rax@392
  char *v148; // rax@397
  char v149; // al@397
  unsigned __int64 v150; // [sp+28h] [bp-6E8h]@23
  char *v151; // [sp+30h] [bp-6E0h]@76
  void *ptr; // [sp+38h] [bp-6D8h]@10
  size_t *v153; // [sp+40h] [bp-6D0h]@1
  void *v154; // [sp+48h] [bp-6C8h]@128
  char *v155; // [sp+50h] [bp-6C0h]@76
  __int64 v156; // [sp+58h] [bp-6B8h]@13
  _BYTE *v157; // [sp+60h] [bp-6B0h]@19
  unsigned __int64 v158; // [sp+68h] [bp-6A8h]@9
  long double v159; // [sp+70h] [bp-6A0h]@19
  void *v160; // [sp+80h] [bp-690h]@19
  void *src; // [sp+88h] [bp-688h]@1
  int v162; // [sp+94h] [bp-67Ch]@77
  unsigned int v163; // [sp+98h] [bp-678h]@64
  char v164; // [sp+A0h] [bp-670h]@1
  void *v165; // [sp+A8h] [bp-668h]@36
  __int64 v166; // [sp+B0h] [bp-660h]@95
  __int64 v167; // [sp+190h] [bp-580h]@1
  void *v168; // [sp+198h] [bp-578h]@13
  __int64 v169; // [sp+1A0h] [bp-570h]@3
  __int64 v170; // [sp+1A8h] [bp-568h]@5
  __int64 v171; // [sp+1B0h] [bp-560h]@93
  char v172; // [sp+420h] [bp-2F0h]@252

  v4 = a3;
  v5 = a4;
  src = a1;
  v153 = a2;
  if ( sub_4086D0(a3, &v167, &v164) < 0 )
    return 0LL;
  if ( sub_4084B0(v5, &v164) < 0 )
  {
    if ( v168 != &v171 )
      free(v168);
    if ( v165 != &v166 )
      free(v165);
    v13 = 0LL;
    *__errno_location() = 22;
    return v13;
  }
  v6 = v169 + 7;
  if ( (unsigned __int64)(v169 + 7) <= 6 )
    v6 = -1LL;
  v75 = __CFADD__(v170, v6);
  v7 = v170 + v6;
  if ( v75 )
    goto LABEL_112;
  v8 = v7 + 6;
  if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
    goto LABEL_112;
  if ( v8 <= 0xF9F )
  {
    ptr = 0LL;
    v22 = alloca(v7 + 14);
    v158 = ((unsigned __int64)&v150 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( v8 == -1LL )
      goto LABEL_112;
    v9 = malloc(v8);
    v158 = (unsigned __int64)v9;
    if ( !v9 )
      goto LABEL_112;
    ptr = v9;
  }
  v10 = 0LL;
  if ( src )
    v10 = *v153;
  v11 = v168;
  v12 = v4;
  v13 = (char *)src;
  v156 = 0LL;
  v14 = 0LL;
  v15 = *(_BYTE **)v168;
  if ( *(_BYTE **)v168 == v12 )
    goto LABEL_111;
LABEL_14:
  v16 = (char *)(v15 - v12);
  v17 = (unsigned __int64)&v16[v14];
  v18 = (size_t)&v16[v14];
  if ( __CFADD__(v16, v14) )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    v18 = -1LL;
  }
  else if ( v10 < v17 )
  {
    if ( v10 )
    {
      if ( (v10 & 0x8000000000000000LL) != 0LL )
        goto LABEL_88;
      v10 *= 2LL;
      if ( v10 >= v17 )
      {
LABEL_28:
        v19 = v13 == src;
        if ( !v13 )
          goto LABEL_19;
        goto LABEL_29;
      }
    }
    else if ( v17 <= 0xC )
    {
      v10 = 12LL;
      v19 = v13 == src;
      if ( !v13 )
      {
LABEL_19:
        v157 = v12;
        LOBYTE(v159) = v19;
        v160 = v16;
        v20 = malloc(v10);
        v16 = (char *)v160;
        v12 = v157;
        if ( !v20 )
          goto LABEL_88;
        if ( v14 && LOBYTE(v159) )
        {
          *(_QWORD *)&v159 = v157;
          v21 = (char *)memcpy(v20, v13, v14);
          v16 = (char *)v160;
          v12 = *(_BYTE **)&v159;
          v13 = v21;
        }
        else
        {
          v13 = (char *)v20;
        }
        goto LABEL_32;
      }
LABEL_29:
      if ( !v19 )
      {
        *(_QWORD *)&v159 = v12;
        v160 = v16;
        v23 = (char *)realloc(v13, v10);
        if ( !v23 )
          goto LABEL_126;
        v16 = (char *)v160;
        v12 = *(_BYTE **)&v159;
        v13 = v23;
        goto LABEL_32;
      }
      goto LABEL_19;
    }
    if ( v17 == -1LL )
      goto LABEL_88;
    v10 = (size_t)&v16[v14];
    goto LABEL_28;
  }
LABEL_32:
  memcpy(&v13[v14], v12, (size_t)v16);
  while ( v167 != v156 )
  {
    v24 = *((_BYTE *)v11 + 72);
    v25 = *((_QWORD *)v11 + 10);
    if ( v24 == 37 )
    {
      if ( v25 != -1 )
        goto LABEL_198;
      v58 = v18 + 1;
      v14 = v18 + 1;
      if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
      {
        if ( v10 != -1LL )
          goto LABEL_88;
        v14 = -1LL;
      }
      else if ( v10 < v58 )
      {
        if ( v10 )
        {
          if ( (v10 & 0x8000000000000000LL) != 0LL )
            goto LABEL_88;
          v10 *= 2LL;
          if ( v10 < v58 )
            goto LABEL_234;
        }
        else
        {
          if ( v58 <= 0xC )
          {
            v10 = 12LL;
            goto LABEL_105;
          }
LABEL_234:
          if ( v58 == -1LL )
            goto LABEL_88;
          v10 = v18 + 1;
        }
LABEL_105:
        if ( v13 && v13 != src )
        {
          v59 = (char *)realloc(v13, v10);
          if ( v59 )
          {
            v13 = v59;
            goto LABEL_109;
          }
LABEL_126:
          v56 = v13;
          *(_QWORD *)&v159 = __errno_location();
          goto LABEL_127;
        }
        LOBYTE(v160) = v13 == src;
        v94 = malloc(v10);
        if ( !v94 )
          goto LABEL_88;
        if ( v18 && (_BYTE)v160 )
          v13 = (char *)memcpy(v94, v13, v18);
        else
          v13 = (char *)v94;
      }
LABEL_109:
      v13[v18] = 37;
      goto LABEL_110;
    }
    if ( v25 == -1 )
      goto LABEL_198;
    v26 = (char *)v165;
    v27 = (char *)v165 + 32 * v25;
    v28 = *(_DWORD *)v27;
    LODWORD(v160) = *(_DWORD *)v27;
    if ( v24 != 110 )
    {
      v29 = v24 & 0xDF;
      if ( (unsigned __int8)((v24 & 0xDF) - 69) > 2u && v29 != 65
        || (_DWORD)v160 != 12
        || (_FST7 = *((long double *)v27 + 1), _FST7 != _FST7 + _FST7) )
      {
        v30 = *((_DWORD *)v11 + 4);
        v31 = (_BYTE *)(v158 + 1);
        *(_BYTE *)v158 = 37;
        if ( v30 & 1 )
        {
          v32 = v158;
          *(_BYTE *)(v158 + 1) = 39;
          v31 = (_BYTE *)(v32 + 2);
        }
        if ( v30 & 2 )
          *v31++ = 45;
        if ( v30 & 4 )
          *v31++ = 43;
        if ( v30 & 8 )
          *v31++ = 32;
        if ( v30 & 0x10 )
          *v31++ = 35;
        if ( v30 & 0x40 )
          *v31++ = 73;
        if ( v30 & 0x20 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        if ( (unsigned int)v160 <= 0x10 )
        {
          v37 = 1LL << (char)v160;
          if ( (1LL << (char)v160) & 0x14180 )
            goto LABEL_125;
          if ( BYTE1(v37) & 0x10 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(BYTE1(v37) & 6) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = *((_BYTE *)v11 + 72);
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = (signed __int64)&v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v157) = 1;
            v163 = *(_DWORD *)(v40 + 16);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v157) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = (signed __int64)&v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (unsigned int)v157;
          *(&v163 + v43) = *(_DWORD *)(v42 + 16);
          LODWORD(v157) = v43 + 1;
        }
        v44 = v18 + 2;
        if ( v18 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
        }
        else if ( v10 < v44 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 >= v44 )
              goto LABEL_73;
          }
          else if ( v44 <= 0xC )
          {
            v10 = 12LL;
LABEL_73:
            if ( v13 && v13 != src )
            {
              v45 = (char *)realloc(v13, v10);
              if ( v45 )
                goto LABEL_76;
LABEL_88:
              v56 = v13;
              *(_QWORD *)&v159 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v168 != &v171 )
                    free(v168);
                  if ( v165 != &v166 )
                    free(v165);
                  v13 = 0LL;
                  **(_DWORD **)&v159 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v159 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v159) = v13 == src;
            v93 = (char *)malloc(v10);
            v45 = v93;
            if ( !v93 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v159) )
              v45 = (char *)memcpy(v93, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v155 = v45;
            v46 = __errno_location();
            v47 = v155;
            v155 = v31;
            *(_QWORD *)&v159 = v46;
            LODWORD(v151) = *v46;
            while ( 2 )
            {
              while ( 2 )
              {
                v48 = 0x7FFFFFFFLL;
                v162 = -1;
                **(_DWORD **)&v159 = 0;
                if ( v10 - v18 <= 0x7FFFFFFF )
                  v48 = v10 - v18;
                switch ( (_DWORD)v160 )
                {
                  default:
                    goto LABEL_402;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    v70 = &v47[v18];
                    v71 = (int *)*((_QWORD *)v165 + 4 * *((_QWORD *)v11 + 10) + 2);
                    v154 = v47;
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_208;
                    if ( (_DWORD)v157 != 2 )
                      goto LABEL_130;
                    goto LABEL_207;
                  case 5:
                  case 6:
                  case 0xD:
                  case 0xE:
                    v79 = *((_DWORD *)v165 + 8 * *((_QWORD *)v11 + 10) + 4);
                    break;
                  case 0xC:
                    v81 = *((_QWORD *)v11 + 10);
                    v70 = &v47[v18];
                    v154 = v47;
                    v82 = *((long double *)v165 + 2 * v81 + 1);
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_207;
                    if ( (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v71 = &v162;
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v71);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 1:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                  case 0xB:
                    v83 = *((_QWORD *)v11 + 10);
                    v84 = &v47[v18];
                    v154 = v47;
                    v85 = *((_QWORD *)v165 + 4 * v83 + 2);
                    if ( (_DWORD)v157 == 1 || (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, &v162);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 4:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 3:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 2:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                }
                v70 = &v47[v18];
                v154 = v47;
                if ( (_DWORD)v157 != 1 )
                {
                  if ( (_DWORD)v157 != 2 )
                    goto LABEL_151;
LABEL_207:
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                  v47 = (char *)v154;
LABEL_131:
                  v73 = v162;
                  if ( v162 >= 0 )
                    goto LABEL_132;
LABEL_152:
                  if ( v155[1] )
                  {
                    v155[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v159;
                    if ( !**(_DWORD **)&v159 )
                    {
                      v80 = 84;
                      if ( (*((_BYTE *)v11 + 72) & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v168 != &v171 )
                      free(v168);
                    if ( v165 != &v166 )
                      free(v165);
                    **(_DWORD **)&v159 = v80;
                    return 0LL;
                  }
                  goto LABEL_135;
                }
                break;
              }
LABEL_208:
              v79 = v163;
LABEL_151:
              v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v79);
              v73 = v162;
              v47 = (char *)v154;
              if ( v162 < 0 )
                goto LABEL_152;
LABEL_132:
              if ( v73 < v48 && *(&v47[v73] + v18) )
                goto LABEL_198;
              if ( v73 < v72 )
              {
LABEL_135:
                v162 = v72;
                v73 = v72;
              }
              if ( (unsigned int)(v73 + 1) < v48 )
              {
                v13 = v47;
                v14 = v18 + v73;
                **(_DWORD **)&v159 = (_DWORD)v151;
                goto LABEL_110;
              }
              if ( v10 - v18 > 0x7FFFFFFE )
              {
                if ( v47 != src && v47 )
                  free(v47);
                if ( ptr )
                  free(ptr);
                if ( v168 != &v171 )
                  free(v168);
                if ( v165 != &v166 )
                  free(v165);
                v13 = 0LL;
                **(_DWORD **)&v159 = 75;
                return v13;
              }
              v74 = (unsigned int)(v73 + 2);
              v75 = __CFADD__(v18, v74);
              v76 = v18 + v74;
              if ( (v10 & 0x8000000000000000LL) != 0LL )
              {
                if ( v10 != -1LL )
                  goto LABEL_200;
              }
              else
              {
                if ( v75 )
                  goto LABEL_200;
                if ( 2 * v10 >= v76 )
                  v76 = 2 * v10;
                if ( v10 < v76 )
                {
                  v10 *= 2LL;
                  if ( v10 < v76 )
                  {
                    if ( v76 == -1LL )
                    {
LABEL_200:
                      v56 = v47;
                      goto LABEL_89;
                    }
                    v10 = v76;
                  }
                  v77 = v47 == src;
                  if ( !v47 || v77 )
                  {
                    v154 = v47;
                    v92 = malloc(v10);
                    v47 = (char *)v154;
                    if ( !v92 )
                      goto LABEL_200;
                    if ( v18 && v77 )
                      v47 = (char *)memcpy(v92, v154, v18);
                    else
                      v47 = (char *)v92;
                  }
                  else
                  {
                    v154 = v47;
                    v78 = (char *)realloc(v47, v10);
                    v47 = (char *)v154;
                    if ( !v78 )
                      goto LABEL_200;
                    v47 = v78;
                  }
                }
              }
              continue;
            }
          }
          if ( v44 != -1LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      v65 = (_BYTE *)*((_QWORD *)v11 + 3);
      v66 = (_BYTE *)*((_QWORD *)v11 + 4);
      v67 = *((_DWORD *)v11 + 4);
      if ( v65 == v66 )
      {
        v49 = 0LL;
      }
      else
      {
        v68 = *((_QWORD *)v11 + 5);
        if ( v68 == -1 )
        {
          v49 = 0LL;
          v160 = (void *)-1;
          while ( 1 )
          {
            v126 = (signed __int64)(v65 + 1);
            v127 = -1LL;
            v128 = *v65 - 48;
            if ( v49 <= 0x1999999999999999LL )
              v127 = 10 * v49;
            v75 = __CFADD__(v127, v128);
            v49 = v127 + v128;
            v65 = (_BYTE *)v126;
            if ( v75 )
            {
              if ( v66 == (_BYTE *)v126 )
              {
LABEL_81:
                v49 = (unsigned __int64)v160;
                goto LABEL_82;
              }
              while ( *(++v65 - 1) != 48 )
              {
                if ( v66 == v65 )
                  goto LABEL_81;
              }
              v49 = -1LL;
            }
            if ( v66 == v65 )
              goto LABEL_82;
          }
        }
        v69 = (char *)v165 + 32 * v68;
        if ( *(_DWORD *)v69 != 5 )
          goto LABEL_198;
        v49 = *((_DWORD *)v69 + 4);
        if ( (v49 & 0x80000000) != 0LL )
        {
          v67 |= 2u;
          v49 = -(signed __int64)v49;
        }
      }
LABEL_82:
      v50 = (_BYTE *)*((_QWORD *)v11 + 6);
      v51 = (_BYTE *)*((_QWORD *)v11 + 7);
      if ( v50 != v51 )
      {
        v52 = *((_QWORD *)v11 + 8);
        if ( v52 == -1 )
        {
          v129 = (signed __int64)(v50 + 1);
          v54 = 0LL;
          if ( v51 != (_BYTE *)v129 )
          {
            v130 = (_BYTE *)v129;
            while ( 1 )
            {
              v131 = v130 + 1;
              v132 = *v130 - 48;
              v133 = -1LL;
              if ( v54 <= 0x1999999999999999LL )
                v133 = 10 * v54;
              v75 = __CFADD__(v133, v132);
              v134 = v133 + v132;
              v130 = v131;
              v54 = v134;
              if ( v75 )
              {
                if ( v51 == v131 )
                  goto LABEL_88;
                while ( 1 )
                {
                  v130 = v131 + 1;
                  if ( *v131 == 48 )
                    break;
                  if ( v51 == v130 )
                    goto LABEL_88;
                  ++v131;
                }
                v54 = -1LL;
              }
              if ( v51 == v130 )
                goto LABEL_86;
            }
          }
          goto LABEL_369;
        }
        v53 = (char *)v165 + 32 * v52;
        if ( *(_DWORD *)v53 != 5 )
          goto LABEL_198;
        v54 = *((_DWORD *)v53 + 4);
        if ( (v54 & 0x80000000) == 0LL )
        {
LABEL_86:
          if ( v54 )
          {
            v55 = v54 + 12;
            if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
              goto LABEL_88;
LABEL_188:
            v86 = v55;
            if ( v49 >= v55 )
              v86 = v49;
            v75 = __CFADD__(v86, 1LL);
            v87 = (void *)(v86 + 1);
            v160 = v87;
            if ( v75 )
              goto LABEL_88;
            if ( (unsigned __int64)v87 <= 0x2BC )
            {
              v89 = &v172;
            }
            else
            {
              v154 = (void *)v49;
              v155 = (char *)v54;
              LODWORD(v157) = v67;
              v159 = _FST7;
              if ( v87 == (void *)-1 )
                goto LABEL_88;
              v88 = (char *)malloc((size_t)v87);
              v67 = (signed int)v157;
              _FST7 = v159;
              v89 = v88;
              v54 = (unsigned __int64)v155;
              v49 = (unsigned __int64)v154;
              if ( !v88 )
                goto LABEL_88;
            }
            v90 = (unsigned __int16)v163;
            LOWORD(v163) = v163 | 0x300;
            __asm (" fxam ");
            if ( HIBYTE(v61) & 2 )
            {
              *v89 = 45;
              _FST7 = -_FST7;
              v91 = (unsigned __int64)(v89 + 1);
            }
            else if ( v67 & 4 )
            {
              v91 = (unsigned __int64)(v89 + 1);
              *v89 = 43;
            }
            else
            {
              v91 = (unsigned __int64)v89;
              if ( v67 & 8 )
              {
                v91 = (unsigned __int64)(v89 + 1);
                *v89 = 32;
              }
            }
            if ( _FST7 > 0.0 )
            {
              if ( _FST7 + _FST7 != _FST7 )
                goto LABEL_198;
              v96 = v91 + 3;
              if ( (unsigned __int8)(*((_BYTE *)v11 + 72) - 65) > 0x19u )
              {
                *(_BYTE *)(v91 + 2) = 102;
                *(_WORD *)v91 = 28265;
                v91 = 0LL;
              }
              else
              {
                *(_BYTE *)(v91 + 2) = 70;
                *(_WORD *)v91 = 20041;
                v91 = 0LL;
              }
              goto LABEL_258;
            }
            if ( _FST7 != 0.0 )
              goto LABEL_198;
            v95 = *((_BYTE *)v11 + 72) & 0xDF;
            if ( v95 == 70 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || v54 )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v122 = nl_langinfo(0x10000);
                v123 = (__int64)v155;
                v96 = *(_QWORD *)&v159;
                v124 = *v122;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v124 )
                  v124 = 46;
                *(_BYTE *)(v91 + 1) = v124;
                if ( v123 )
                {
                  v125 = v96;
                  do
                    *(_BYTE *)(++v125 - 1) = 48;
                  while ( v125 != v91 + v123 + 2 );
                  v96 += v123;
                }
                goto LABEL_258;
              }
              goto LABEL_257;
            }
            if ( v95 == 69 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || (v104 = v91 + 1, v54) )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v138 = nl_langinfo(0x10000);
                v139 = (__int64)v155;
                v104 = *(_QWORD *)&v159;
                v140 = *v138;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v140 )
                  v140 = 46;
                *(_BYTE *)(v91 + 1) = v140;
                if ( v139 )
                {
                  v141 = v104;
                  do
                    *(_BYTE *)(++v141 - 1) = 48;
                  while ( v141 != v91 + v139 + 2 );
                  v104 += v139;
                }
              }
              v105 = *((_BYTE *)v11 + 72);
              v96 = v104 + 4;
              *(_BYTE *)(v104 + 3) = 48;
              *(_BYTE *)v104 = v105;
              *(_WORD *)(v104 + 1) = 12331;
              goto LABEL_258;
            }
            if ( v95 == 71 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 )
              {
                if ( v54 )
                {
                  v115 = v90;
                  v150 = v49;
                  v151 = (char *)(v91 + 2);
                  v154 = v89;
                  LODWORD(v155) = v67;
                  v157 = (_BYTE *)v54;
                  *(_QWORD *)&v159 = v54 - 1;
                  v116 = nl_langinfo(0x10000);
                  v117 = *(_QWORD *)&v159;
                  v118 = (__int64)v157;
                  v119 = *v116;
                  LOBYTE(v67) = (_BYTE)v155;
                  v89 = (char *)v154;
                  v96 = (unsigned __int64)v151;
                  v49 = v150;
                  LOWORD(v90) = v115;
                  if ( !v119 )
                    v119 = 46;
                  *(_BYTE *)(v91 + 1) = v119;
                  if ( v117 )
                  {
                    v120 = v91 + v118 + 1;
                    v121 = v96;
                    do
                      *(_BYTE *)(++v121 - 1) = 48;
                    while ( v121 != v120 );
                    v96 += v117;
                  }
                }
                else
                {
                  LODWORD(v151) = v90;
                  v154 = (void *)v49;
                  v155 = (char *)(v91 + 2);
                  v157 = v89;
                  LODWORD(v159) = v67;
                  v148 = nl_langinfo(0x10000);
                  LOBYTE(v67) = LOBYTE(v159);
                  v89 = v157;
                  v149 = *v148;
                  v96 = (unsigned __int64)v155;
                  v49 = (unsigned __int64)v154;
                  LOWORD(v90) = (_WORD)v151;
                  if ( !v149 )
                    v149 = 46;
                  *(_BYTE *)(v91 + 1) = v149;
                }
                goto LABEL_258;
              }
LABEL_257:
              v96 = v91 + 1;
              goto LABEL_258;
            }
            if ( v95 != 65 )
              goto LABEL_198;
            *(_BYTE *)v91 = 48;
            *(_QWORD *)&v159 = v91 + 2;
            v135 = *((_BYTE *)v11 + 72);
            *(_BYTE *)(v91 + 2) = 48;
            *(_BYTE *)(v91 + 1) = v135 + 23;
            if ( v67 & 0x10 || (v136 = v91 + 3, v54) )
            {
              v143 = v90;
              v150 = v49;
              v151 = v89;
              v154 = (void *)v54;
              LODWORD(v155) = v67;
              v157 = (_BYTE *)(v91 + 4);
              v144 = nl_langinfo(0x10000);
              v145 = (char *)v154;
              v136 = (signed __int64)v157;
              v146 = *v144;
              LOBYTE(v67) = (_BYTE)v155;
              v89 = v151;
              v49 = v150;
              LOWORD(v90) = v143;
              if ( !v146 )
                v146 = 46;
              *(_BYTE *)(v91 + 3) = v146;
              if ( v145 )
              {
                v147 = (char *)v136;
                do
                  *(++v147 - 1) = 48;
                while ( v147 != &v145[v91 + 4] );
                v136 += (signed __int64)v145;
              }
            }
            v137 = *((_BYTE *)v11 + 72);
            v96 = v136 + 3;
            *(_WORD *)(v136 + 1) = 12331;
            v91 = *(_QWORD *)&v159;
            *(_BYTE *)v136 = v137 + 15;
LABEL_258:
            LOWORD(v163) = v90;
            v97 = v96 - (_QWORD)v89;
            if ( v49 > v96 - (unsigned __int64)v89 )
            {
              v98 = v49 - v97;
              v99 = v96 + v98;
              v97 = v96 + v98 - (_QWORD)v89;
              if ( v67 & 2 )
              {
                if ( v98 )
                {
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v99 != v96 );
                }
              }
              else if ( v67 & 0x20 && v91 )
              {
                if ( v91 >= v96 )
                {
                  v91 = v96;
                }
                else
                {
                  v100 = -1LL;
                  do
                  {
                    *(_BYTE *)(v99 + v100) = *(_BYTE *)(v96 + v100);
                    --v100;
                  }
                  while ( v100 != v91 - 1 - v96 );
                }
                if ( v98 )
                {
                  v101 = v91 + v98;
                  do
                    *(_BYTE *)(++v91 - 1) = 48;
                  while ( v91 != v101 );
                }
              }
              else
              {
                v111 = -1LL;
                if ( (unsigned __int64)v89 < v96 )
                {
                  do
                  {
                    *(_BYTE *)(v99 + v111) = *(_BYTE *)(v96 + v111);
                    --v111;
                  }
                  while ( &v89[-v96 - 1] != (char *)v111 );
                  v96 = (unsigned __int64)v89;
                }
                if ( v98 )
                {
                  v112 = v96 + v98;
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v96 != v112 );
                }
              }
            }
            if ( (unsigned __int64)v160 <= v97 )
              goto LABEL_198;
            v102 = v97 + v18;
            v14 = v97 + v18;
            if ( v10 - v18 <= v97 )
            {
              if ( __CFADD__(v97, v18) )
              {
                if ( v10 != -1LL )
                  goto LABEL_88;
              }
              else if ( v10 < v102 )
              {
                if ( v10 )
                {
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_88;
                  v10 *= 2LL;
                  if ( v10 < v102 )
                    goto LABEL_367;
                }
                else
                {
                  if ( v102 <= 0xC )
                  {
                    v10 = 12LL;
                    goto LABEL_275;
                  }
LABEL_367:
                  if ( v102 == -1LL )
                    goto LABEL_88;
                  v10 = v97 + v18;
                }
LABEL_275:
                if ( v13 && v13 != src )
                {
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v103 = (char *)realloc(v13, v10);
                  if ( !v103 )
                    goto LABEL_88;
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  v13 = v103;
                }
                else
                {
                  LOBYTE(v157) = v13 == src;
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v113 = malloc(v10);
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  if ( !v113 )
                    goto LABEL_88;
                  if ( v18 && (_BYTE)v157 )
                  {
                    v114 = (char *)memcpy(v113, v13, v18);
                    v89 = (char *)v160;
                    v97 = *(_QWORD *)&v159;
                    v13 = v114;
                  }
                  else
                  {
                    v13 = (char *)v113;
                  }
                }
              }
            }
            v160 = v89;
            memcpy(&v13[v18], v89, v97);
            if ( v160 != &v172 )
              free(v160);
            goto LABEL_110;
          }
LABEL_369:
          v55 = 12LL;
          goto LABEL_188;
        }
      }
      v55 = 12LL;
      if ( v29 != 65 )
        v55 = 18LL;
      v54 = 0LL;
      if ( v29 != 65 )
        v54 = 6LL;
      goto LABEL_188;
    }
    switch ( v28 )
    {
      case 21:
      case 22:
        v14 = v18;
        **((_QWORD **)v27 + 2) = v18;
        break;
      case 20:
        v14 = v18;
        **((_DWORD **)v27 + 2) = v18;
        break;
      case 19:
        v14 = v18;
        **((_WORD **)v27 + 2) = v18;
        break;
      case 18:
        v14 = v18;
        **((_BYTE **)v27 + 2) = v18;
        break;
      default:
LABEL_402:
        abort();
        return result;
    }
LABEL_110:
    v12 = (_BYTE *)*((_QWORD *)v11 + 1);
    v11 = (char *)v11 + 88;
    v15 = *(_BYTE **)v11;
    ++v156;
    if ( v15 != v12 )
      goto LABEL_14;
LABEL_111:
    v18 = v14;
  }
  v106 = v18;
  v107 = v18 + 1;
  if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    goto LABEL_301;
  }
  if ( v10 >= v107 )
    goto LABEL_301;
  if ( v10 )
  {
    if ( (v10 & 0x8000000000000000LL) != 0LL )
      goto LABEL_88;
    v10 *= 2LL;
    if ( v10 >= v107 )
      goto LABEL_297;
    goto LABEL_387;
  }
  if ( v107 > 0xC )
  {
LABEL_387:
    if ( v107 == -1LL )
      goto LABEL_88;
    v10 = v18 + 1;
    goto LABEL_297;
  }
  v10 = 12LL;
LABEL_297:
  v108 = v13 == src;
  if ( !v13 || v108 )
  {
    v142 = malloc(v10);
    if ( !v142 )
      goto LABEL_88;
    if ( v106 && v108 )
      v13 = (char *)memcpy(v142, v13, v106);
    else
      v13 = (char *)v142;
  }
  else
  {
    v109 = (char *)realloc(v13, v10);
    if ( !v109 )
      goto LABEL_126;
    v13 = v109;
  }
LABEL_301:
  v13[v106] = 0;
  if ( v10 > v107 && v13 != src )
  {
    v110 = (char *)realloc(v13, v107);
    if ( v110 )
      v13 = v110;
  }
  if ( ptr )
    free(ptr);
  if ( v168 != &v171 )
    free(v168);
  if ( v165 != &v166 )
    free(v165);
  *v153 = v106;
  return v13;
}

char *__fastcall sub_406990(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // r15@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@3
  unsigned __int64 v7; // rax@5
  size_t v8; // rdi@6
  void *v9; // rax@9
  size_t v10; // r12@11
  void *v11; // r14@13
  _BYTE *v12; // r8@13
  char *v13; // rbx@13
  size_t v14; // r15@13
  _BYTE *v15; // rcx@13
  char *v16; // rcx@14
  unsigned __int64 v17; // rax@14
  size_t v18; // r13@14
  bool v19; // dl@18
  void *v20; // rax@19
  char *v21; // rax@22
  void *v22; // rsp@23
  char *v23; // rax@30
  char v24; // r15@34
  __int64 v25; // rax@34
  char *v26; // r8@36
  char *v27; // rdx@36
  int v28; // eax@36
  char v29; // al@37
  int v30; // eax@40
  _BYTE *v31; // r15@40
  __int64 v32; // rdi@41
  _BYTE *v33; // rsi@54
  _BYTE *v34; // rdx@54
  _BYTE *v35; // rsi@56
  _BYTE *v36; // rdx@56
  signed __int64 v37; // rax@59
  char v38; // al@62
  __int64 v39; // rax@62
  signed __int64 v40; // rax@63
  __int64 v41; // rax@65
  signed __int64 v42; // r8@66
  __int64 v43; // rax@67
  unsigned __int64 v44; // rax@68
  char *v45; // r11@75
  int *v46; // rax@76
  char *v47; // r11@76
  unsigned __int64 v48; // rbx@77
  unsigned __int64 v49; // r10@81
  _BYTE *v50; // rdx@82
  _BYTE *v51; // rcx@82
  __int64 v52; // rsi@83
  char *v53; // r8@84
  unsigned __int64 v54; // rdx@85
  unsigned __int64 v55; // rcx@87
  char *v56; // r15@88
  char *result; // rax@98
  unsigned __int64 v58; // rax@100
  char *v59; // rax@107
  __int16 v61; // fps@117
  _BYTE *v65; // rdx@118
  _BYTE *v66; // rdi@118
  int v67; // er11@118
  __int64 v68; // rcx@119
  char *v69; // rcx@120
  char *v70; // rdi@128
  int *v71; // r9@128
  int v72; // eax@130
  int v73; // edx@131
  __int64 v74; // rax@138
  unsigned __int8 v75; // cf@138
  unsigned __int64 v76; // rax@138
  bool v77; // bl@144
  char *v78; // rax@146
  __int64 v79; // r9@148
  signed int v80; // ebx@154
  __int64 v81; // rax@167
  long double v82; // fst7@167
  __int64 v83; // rax@171
  char *v84; // rdi@171
  __int128 v85; // xmm0@171
  unsigned __int64 v86; // rax@188
  void *v87; // rax@190
  char *v88; // rax@193
  char *v89; // rcx@193
  int v90; // er8@194
  unsigned __int64 v91; // r15@195
  void *v92; // rax@201
  char *v93; // rax@216
  void *v94; // rax@222
  char v95; // al@254
  unsigned __int64 v96; // r9@257
  size_t v97; // r8@258
  unsigned __int64 v98; // r10@259
  unsigned __int64 v99; // rdi@259
  signed __int64 v100; // rax@263
  unsigned __int64 v101; // r10@266
  unsigned __int64 v102; // rax@269
  char *v103; // rax@277
  signed __int64 v104; // rsi@286
  char v105; // al@287
  size_t v106; // r15@292
  size_t v107; // r14@292
  bool v108; // r13@297
  char *v109; // rax@299
  char *v110; // rax@303
  signed __int64 v111; // rax@316
  unsigned __int64 v112; // r10@320
  void *v113; // rax@323
  char *v114; // rax@326
  __int16 v115; // ST34_2@330
  char *v116; // rax@330
  __int64 v117; // rsi@330
  __int64 v118; // rdx@330
  char v119; // al@330
  signed __int64 v120; // rdx@333
  unsigned __int64 v121; // rax@333
  char *v122; // rax@340
  __int64 v123; // rdx@340
  char v124; // al@340
  unsigned __int64 v125; // rax@343
  signed __int64 v126; // rsi@348
  signed __int64 v127; // r9@348
  __int64 v128; // rdx@348
  signed __int64 v129; // rax@354
  _BYTE *v130; // rsi@355
  _BYTE *v131; // rdi@357
  __int64 v132; // rax@357
  signed __int64 v133; // rsi@357
  unsigned __int64 v134; // rax@359
  char v135; // al@371
  signed __int64 v136; // rsi@372
  char v137; // al@373
  char *v138; // rax@374
  __int64 v139; // rdx@374
  char v140; // al@374
  signed __int64 v141; // rax@377
  void *v142; // rax@381
  __int16 v143; // ST34_2@389
  char *v144; // rax@389
  char *v145; // rdx@389
  char v146; // al@389
  char *v147; // rax@392
  char *v148; // rax@397
  char v149; // al@397
  unsigned __int64 v150; // [sp+28h] [bp-6E8h]@23
  char *v151; // [sp+30h] [bp-6E0h]@76
  void *ptr; // [sp+38h] [bp-6D8h]@10
  size_t *v153; // [sp+40h] [bp-6D0h]@1
  void *v154; // [sp+48h] [bp-6C8h]@128
  char *v155; // [sp+50h] [bp-6C0h]@76
  __int64 v156; // [sp+58h] [bp-6B8h]@13
  _BYTE *v157; // [sp+60h] [bp-6B0h]@19
  unsigned __int64 v158; // [sp+68h] [bp-6A8h]@9
  long double v159; // [sp+70h] [bp-6A0h]@19
  void *v160; // [sp+80h] [bp-690h]@19
  void *src; // [sp+88h] [bp-688h]@1
  int v162; // [sp+94h] [bp-67Ch]@77
  unsigned int v163; // [sp+98h] [bp-678h]@64
  char v164; // [sp+A0h] [bp-670h]@1
  void *v165; // [sp+A8h] [bp-668h]@36
  __int64 v166; // [sp+B0h] [bp-660h]@95
  __int64 v167; // [sp+190h] [bp-580h]@1
  void *v168; // [sp+198h] [bp-578h]@13
  __int64 v169; // [sp+1A0h] [bp-570h]@3
  __int64 v170; // [sp+1A8h] [bp-568h]@5
  __int64 v171; // [sp+1B0h] [bp-560h]@93
  char v172; // [sp+420h] [bp-2F0h]@252

  v4 = a3;
  v5 = a4;
  src = a1;
  v153 = a2;
  if ( sub_4086D0(a3, &v167, &v164) < 0 )
    return 0LL;
  if ( sub_4084B0(v5, &v164) < 0 )
  {
    if ( v168 != &v171 )
      free(v168);
    if ( v165 != &v166 )
      free(v165);
    v13 = 0LL;
    *__errno_location() = 22;
    return v13;
  }
  v6 = v169 + 7;
  if ( (unsigned __int64)(v169 + 7) <= 6 )
    v6 = -1LL;
  v75 = __CFADD__(v170, v6);
  v7 = v170 + v6;
  if ( v75 )
    goto LABEL_112;
  v8 = v7 + 6;
  if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
    goto LABEL_112;
  if ( v8 <= 0xF9F )
  {
    ptr = 0LL;
    v22 = alloca(v7 + 14);
    v158 = ((unsigned __int64)&v150 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( v8 == -1LL )
      goto LABEL_112;
    v9 = malloc(v8);
    v158 = (unsigned __int64)v9;
    if ( !v9 )
      goto LABEL_112;
    ptr = v9;
  }
  v10 = 0LL;
  if ( src )
    v10 = *v153;
  v11 = v168;
  v12 = v4;
  v13 = (char *)src;
  v156 = 0LL;
  v14 = 0LL;
  v15 = *(_BYTE **)v168;
  if ( *(_BYTE **)v168 == v12 )
    goto LABEL_111;
LABEL_14:
  v16 = (char *)(v15 - v12);
  v17 = (unsigned __int64)&v16[v14];
  v18 = (size_t)&v16[v14];
  if ( __CFADD__(v16, v14) )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    v18 = -1LL;
  }
  else if ( v10 < v17 )
  {
    if ( v10 )
    {
      if ( (v10 & 0x8000000000000000LL) != 0LL )
        goto LABEL_88;
      v10 *= 2LL;
      if ( v10 >= v17 )
      {
LABEL_28:
        v19 = v13 == src;
        if ( !v13 )
          goto LABEL_19;
        goto LABEL_29;
      }
    }
    else if ( v17 <= 0xC )
    {
      v10 = 12LL;
      v19 = v13 == src;
      if ( !v13 )
      {
LABEL_19:
        v157 = v12;
        LOBYTE(v159) = v19;
        v160 = v16;
        v20 = malloc(v10);
        v16 = (char *)v160;
        v12 = v157;
        if ( !v20 )
          goto LABEL_88;
        if ( v14 && LOBYTE(v159) )
        {
          *(_QWORD *)&v159 = v157;
          v21 = (char *)memcpy(v20, v13, v14);
          v16 = (char *)v160;
          v12 = *(_BYTE **)&v159;
          v13 = v21;
        }
        else
        {
          v13 = (char *)v20;
        }
        goto LABEL_32;
      }
LABEL_29:
      if ( !v19 )
      {
        *(_QWORD *)&v159 = v12;
        v160 = v16;
        v23 = (char *)realloc(v13, v10);
        if ( !v23 )
          goto LABEL_126;
        v16 = (char *)v160;
        v12 = *(_BYTE **)&v159;
        v13 = v23;
        goto LABEL_32;
      }
      goto LABEL_19;
    }
    if ( v17 == -1LL )
      goto LABEL_88;
    v10 = (size_t)&v16[v14];
    goto LABEL_28;
  }
LABEL_32:
  memcpy(&v13[v14], v12, (size_t)v16);
  while ( v167 != v156 )
  {
    v24 = *((_BYTE *)v11 + 72);
    v25 = *((_QWORD *)v11 + 10);
    if ( v24 == 37 )
    {
      if ( v25 != -1 )
        goto LABEL_198;
      v58 = v18 + 1;
      v14 = v18 + 1;
      if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
      {
        if ( v10 != -1LL )
          goto LABEL_88;
        v14 = -1LL;
      }
      else if ( v10 < v58 )
      {
        if ( v10 )
        {
          if ( (v10 & 0x8000000000000000LL) != 0LL )
            goto LABEL_88;
          v10 *= 2LL;
          if ( v10 < v58 )
            goto LABEL_234;
        }
        else
        {
          if ( v58 <= 0xC )
          {
            v10 = 12LL;
            goto LABEL_105;
          }
LABEL_234:
          if ( v58 == -1LL )
            goto LABEL_88;
          v10 = v18 + 1;
        }
LABEL_105:
        if ( v13 && v13 != src )
        {
          v59 = (char *)realloc(v13, v10);
          if ( v59 )
          {
            v13 = v59;
            goto LABEL_109;
          }
LABEL_126:
          v56 = v13;
          *(_QWORD *)&v159 = __errno_location();
          goto LABEL_127;
        }
        LOBYTE(v160) = v13 == src;
        v94 = malloc(v10);
        if ( !v94 )
          goto LABEL_88;
        if ( v18 && (_BYTE)v160 )
          v13 = (char *)memcpy(v94, v13, v18);
        else
          v13 = (char *)v94;
      }
LABEL_109:
      v13[v18] = 37;
      goto LABEL_110;
    }
    if ( v25 == -1 )
      goto LABEL_198;
    v26 = (char *)v165;
    v27 = (char *)v165 + 32 * v25;
    v28 = *(_DWORD *)v27;
    LODWORD(v160) = *(_DWORD *)v27;
    if ( v24 != 110 )
    {
      v29 = v24 & 0xDF;
      if ( (unsigned __int8)((v24 & 0xDF) - 69) > 2u && v29 != 65
        || (_DWORD)v160 != 12
        || (_FST7 = *((long double *)v27 + 1), _FST7 != _FST7 + _FST7) )
      {
        v30 = *((_DWORD *)v11 + 4);
        v31 = (_BYTE *)(v158 + 1);
        *(_BYTE *)v158 = 37;
        if ( v30 & 1 )
        {
          v32 = v158;
          *(_BYTE *)(v158 + 1) = 39;
          v31 = (_BYTE *)(v32 + 2);
        }
        if ( v30 & 2 )
          *v31++ = 45;
        if ( v30 & 4 )
          *v31++ = 43;
        if ( v30 & 8 )
          *v31++ = 32;
        if ( v30 & 0x10 )
          *v31++ = 35;
        if ( v30 & 0x40 )
          *v31++ = 73;
        if ( v30 & 0x20 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        if ( (unsigned int)v160 <= 0x10 )
        {
          v37 = 1LL << (char)v160;
          if ( (1LL << (char)v160) & 0x14180 )
            goto LABEL_125;
          if ( BYTE1(v37) & 0x10 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(BYTE1(v37) & 6) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = *((_BYTE *)v11 + 72);
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = (signed __int64)&v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v157) = 1;
            v163 = *(_DWORD *)(v40 + 16);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v157) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = (signed __int64)&v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (unsigned int)v157;
          *(&v163 + v43) = *(_DWORD *)(v42 + 16);
          LODWORD(v157) = v43 + 1;
        }
        v44 = v18 + 2;
        if ( v18 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
        }
        else if ( v10 < v44 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 >= v44 )
              goto LABEL_73;
          }
          else if ( v44 <= 0xC )
          {
            v10 = 12LL;
LABEL_73:
            if ( v13 && v13 != src )
            {
              v45 = (char *)realloc(v13, v10);
              if ( v45 )
                goto LABEL_76;
LABEL_88:
              v56 = v13;
              *(_QWORD *)&v159 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v168 != &v171 )
                    free(v168);
                  if ( v165 != &v166 )
                    free(v165);
                  v13 = 0LL;
                  **(_DWORD **)&v159 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v159 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v159) = v13 == src;
            v93 = (char *)malloc(v10);
            v45 = v93;
            if ( !v93 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v159) )
              v45 = (char *)memcpy(v93, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v155 = v45;
            v46 = __errno_location();
            v47 = v155;
            v155 = v31;
            *(_QWORD *)&v159 = v46;
            LODWORD(v151) = *v46;
            while ( 2 )
            {
              while ( 2 )
              {
                v48 = 0x7FFFFFFFLL;
                v162 = -1;
                **(_DWORD **)&v159 = 0;
                if ( v10 - v18 <= 0x7FFFFFFF )
                  v48 = v10 - v18;
                switch ( (_DWORD)v160 )
                {
                  default:
                    goto LABEL_402;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    v70 = &v47[v18];
                    v71 = (int *)*((_QWORD *)v165 + 4 * *((_QWORD *)v11 + 10) + 2);
                    v154 = v47;
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_208;
                    if ( (_DWORD)v157 != 2 )
                      goto LABEL_130;
                    goto LABEL_207;
                  case 5:
                  case 6:
                  case 0xD:
                  case 0xE:
                    v79 = *((_DWORD *)v165 + 8 * *((_QWORD *)v11 + 10) + 4);
                    break;
                  case 0xC:
                    v81 = *((_QWORD *)v11 + 10);
                    v70 = &v47[v18];
                    v154 = v47;
                    v82 = *((long double *)v165 + 2 * v81 + 1);
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_207;
                    if ( (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v71 = &v162;
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v71);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 1:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                  case 0xB:
                    v83 = *((_QWORD *)v11 + 10);
                    v84 = &v47[v18];
                    v154 = v47;
                    v85 = *((_QWORD *)v165 + 4 * v83 + 2);
                    if ( (_DWORD)v157 == 1 || (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, &v162);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 4:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 3:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 2:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                }
                v70 = &v47[v18];
                v154 = v47;
                if ( (_DWORD)v157 != 1 )
                {
                  if ( (_DWORD)v157 != 2 )
                    goto LABEL_151;
LABEL_207:
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                  v47 = (char *)v154;
LABEL_131:
                  v73 = v162;
                  if ( v162 >= 0 )
                    goto LABEL_132;
LABEL_152:
                  if ( v155[1] )
                  {
                    v155[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v159;
                    if ( !**(_DWORD **)&v159 )
                    {
                      v80 = 84;
                      if ( (*((_BYTE *)v11 + 72) & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v168 != &v171 )
                      free(v168);
                    if ( v165 != &v166 )
                      free(v165);
                    **(_DWORD **)&v159 = v80;
                    return 0LL;
                  }
                  goto LABEL_135;
                }
                break;
              }
LABEL_208:
              v79 = v163;
LABEL_151:
              v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v79);
              v73 = v162;
              v47 = (char *)v154;
              if ( v162 < 0 )
                goto LABEL_152;
LABEL_132:
              if ( v73 < v48 && *(&v47[v73] + v18) )
                goto LABEL_198;
              if ( v73 < v72 )
              {
LABEL_135:
                v162 = v72;
                v73 = v72;
              }
              if ( (unsigned int)(v73 + 1) < v48 )
              {
                v13 = v47;
                v14 = v18 + v73;
                **(_DWORD **)&v159 = (_DWORD)v151;
                goto LABEL_110;
              }
              if ( v10 - v18 > 0x7FFFFFFE )
              {
                if ( v47 != src && v47 )
                  free(v47);
                if ( ptr )
                  free(ptr);
                if ( v168 != &v171 )
                  free(v168);
                if ( v165 != &v166 )
                  free(v165);
                v13 = 0LL;
                **(_DWORD **)&v159 = 75;
                return v13;
              }
              v74 = (unsigned int)(v73 + 2);
              v75 = __CFADD__(v18, v74);
              v76 = v18 + v74;
              if ( (v10 & 0x8000000000000000LL) != 0LL )
              {
                if ( v10 != -1LL )
                  goto LABEL_200;
              }
              else
              {
                if ( v75 )
                  goto LABEL_200;
                if ( 2 * v10 >= v76 )
                  v76 = 2 * v10;
                if ( v10 < v76 )
                {
                  v10 *= 2LL;
                  if ( v10 < v76 )
                  {
                    if ( v76 == -1LL )
                    {
LABEL_200:
                      v56 = v47;
                      goto LABEL_89;
                    }
                    v10 = v76;
                  }
                  v77 = v47 == src;
                  if ( !v47 || v77 )
                  {
                    v154 = v47;
                    v92 = malloc(v10);
                    v47 = (char *)v154;
                    if ( !v92 )
                      goto LABEL_200;
                    if ( v18 && v77 )
                      v47 = (char *)memcpy(v92, v154, v18);
                    else
                      v47 = (char *)v92;
                  }
                  else
                  {
                    v154 = v47;
                    v78 = (char *)realloc(v47, v10);
                    v47 = (char *)v154;
                    if ( !v78 )
                      goto LABEL_200;
                    v47 = v78;
                  }
                }
              }
              continue;
            }
          }
          if ( v44 != -1LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      v65 = (_BYTE *)*((_QWORD *)v11 + 3);
      v66 = (_BYTE *)*((_QWORD *)v11 + 4);
      v67 = *((_DWORD *)v11 + 4);
      if ( v65 == v66 )
      {
        v49 = 0LL;
      }
      else
      {
        v68 = *((_QWORD *)v11 + 5);
        if ( v68 == -1 )
        {
          v49 = 0LL;
          v160 = (void *)-1;
          while ( 1 )
          {
            v126 = (signed __int64)(v65 + 1);
            v127 = -1LL;
            v128 = *v65 - 48;
            if ( v49 <= 0x1999999999999999LL )
              v127 = 10 * v49;
            v75 = __CFADD__(v127, v128);
            v49 = v127 + v128;
            v65 = (_BYTE *)v126;
            if ( v75 )
            {
              if ( v66 == (_BYTE *)v126 )
              {
LABEL_81:
                v49 = (unsigned __int64)v160;
                goto LABEL_82;
              }
              while ( *(++v65 - 1) != 48 )
              {
                if ( v66 == v65 )
                  goto LABEL_81;
              }
              v49 = -1LL;
            }
            if ( v66 == v65 )
              goto LABEL_82;
          }
        }
        v69 = (char *)v165 + 32 * v68;
        if ( *(_DWORD *)v69 != 5 )
          goto LABEL_198;
        v49 = *((_DWORD *)v69 + 4);
        if ( (v49 & 0x80000000) != 0LL )
        {
          v67 |= 2u;
          v49 = -(signed __int64)v49;
        }
      }
LABEL_82:
      v50 = (_BYTE *)*((_QWORD *)v11 + 6);
      v51 = (_BYTE *)*((_QWORD *)v11 + 7);
      if ( v50 != v51 )
      {
        v52 = *((_QWORD *)v11 + 8);
        if ( v52 == -1 )
        {
          v129 = (signed __int64)(v50 + 1);
          v54 = 0LL;
          if ( v51 != (_BYTE *)v129 )
          {
            v130 = (_BYTE *)v129;
            while ( 1 )
            {
              v131 = v130 + 1;
              v132 = *v130 - 48;
              v133 = -1LL;
              if ( v54 <= 0x1999999999999999LL )
                v133 = 10 * v54;
              v75 = __CFADD__(v133, v132);
              v134 = v133 + v132;
              v130 = v131;
              v54 = v134;
              if ( v75 )
              {
                if ( v51 == v131 )
                  goto LABEL_88;
                while ( 1 )
                {
                  v130 = v131 + 1;
                  if ( *v131 == 48 )
                    break;
                  if ( v51 == v130 )
                    goto LABEL_88;
                  ++v131;
                }
                v54 = -1LL;
              }
              if ( v51 == v130 )
                goto LABEL_86;
            }
          }
          goto LABEL_369;
        }
        v53 = (char *)v165 + 32 * v52;
        if ( *(_DWORD *)v53 != 5 )
          goto LABEL_198;
        v54 = *((_DWORD *)v53 + 4);
        if ( (v54 & 0x80000000) == 0LL )
        {
LABEL_86:
          if ( v54 )
          {
            v55 = v54 + 12;
            if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
              goto LABEL_88;
LABEL_188:
            v86 = v55;
            if ( v49 >= v55 )
              v86 = v49;
            v75 = __CFADD__(v86, 1LL);
            v87 = (void *)(v86 + 1);
            v160 = v87;
            if ( v75 )
              goto LABEL_88;
            if ( (unsigned __int64)v87 <= 0x2BC )
            {
              v89 = &v172;
            }
            else
            {
              v154 = (void *)v49;
              v155 = (char *)v54;
              LODWORD(v157) = v67;
              v159 = _FST7;
              if ( v87 == (void *)-1 )
                goto LABEL_88;
              v88 = (char *)malloc((size_t)v87);
              v67 = (signed int)v157;
              _FST7 = v159;
              v89 = v88;
              v54 = (unsigned __int64)v155;
              v49 = (unsigned __int64)v154;
              if ( !v88 )
                goto LABEL_88;
            }
            v90 = (unsigned __int16)v163;
            LOWORD(v163) = v163 | 0x300;
            __asm (" fxam ");
            if ( HIBYTE(v61) & 2 )
            {
              *v89 = 45;
              _FST7 = -_FST7;
              v91 = (unsigned __int64)(v89 + 1);
            }
            else if ( v67 & 4 )
            {
              v91 = (unsigned __int64)(v89 + 1);
              *v89 = 43;
            }
            else
            {
              v91 = (unsigned __int64)v89;
              if ( v67 & 8 )
              {
                v91 = (unsigned __int64)(v89 + 1);
                *v89 = 32;
              }
            }
            if ( _FST7 > 0.0 )
            {
              if ( _FST7 + _FST7 != _FST7 )
                goto LABEL_198;
              v96 = v91 + 3;
              if ( (unsigned __int8)(*((_BYTE *)v11 + 72) - 65) > 0x19u )
              {
                *(_BYTE *)(v91 + 2) = 102;
                *(_WORD *)v91 = 28265;
                v91 = 0LL;
              }
              else
              {
                *(_BYTE *)(v91 + 2) = 70;
                *(_WORD *)v91 = 20041;
                v91 = 0LL;
              }
              goto LABEL_258;
            }
            if ( _FST7 != 0.0 )
              goto LABEL_198;
            v95 = *((_BYTE *)v11 + 72) & 0xDF;
            if ( v95 == 70 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || v54 )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v122 = nl_langinfo(0x10000);
                v123 = (__int64)v155;
                v96 = *(_QWORD *)&v159;
                v124 = *v122;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v124 )
                  v124 = 46;
                *(_BYTE *)(v91 + 1) = v124;
                if ( v123 )
                {
                  v125 = v96;
                  do
                    *(_BYTE *)(++v125 - 1) = 48;
                  while ( v125 != v91 + v123 + 2 );
                  v96 += v123;
                }
                goto LABEL_258;
              }
              goto LABEL_257;
            }
            if ( v95 == 69 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || (v104 = v91 + 1, v54) )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v138 = nl_langinfo(0x10000);
                v139 = (__int64)v155;
                v104 = *(_QWORD *)&v159;
                v140 = *v138;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v140 )
                  v140 = 46;
                *(_BYTE *)(v91 + 1) = v140;
                if ( v139 )
                {
                  v141 = v104;
                  do
                    *(_BYTE *)(++v141 - 1) = 48;
                  while ( v141 != v91 + v139 + 2 );
                  v104 += v139;
                }
              }
              v105 = *((_BYTE *)v11 + 72);
              v96 = v104 + 4;
              *(_BYTE *)(v104 + 3) = 48;
              *(_BYTE *)v104 = v105;
              *(_WORD *)(v104 + 1) = 12331;
              goto LABEL_258;
            }
            if ( v95 == 71 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 )
              {
                if ( v54 )
                {
                  v115 = v90;
                  v150 = v49;
                  v151 = (char *)(v91 + 2);
                  v154 = v89;
                  LODWORD(v155) = v67;
                  v157 = (_BYTE *)v54;
                  *(_QWORD *)&v159 = v54 - 1;
                  v116 = nl_langinfo(0x10000);
                  v117 = *(_QWORD *)&v159;
                  v118 = (__int64)v157;
                  v119 = *v116;
                  LOBYTE(v67) = (_BYTE)v155;
                  v89 = (char *)v154;
                  v96 = (unsigned __int64)v151;
                  v49 = v150;
                  LOWORD(v90) = v115;
                  if ( !v119 )
                    v119 = 46;
                  *(_BYTE *)(v91 + 1) = v119;
                  if ( v117 )
                  {
                    v120 = v91 + v118 + 1;
                    v121 = v96;
                    do
                      *(_BYTE *)(++v121 - 1) = 48;
                    while ( v121 != v120 );
                    v96 += v117;
                  }
                }
                else
                {
                  LODWORD(v151) = v90;
                  v154 = (void *)v49;
                  v155 = (char *)(v91 + 2);
                  v157 = v89;
                  LODWORD(v159) = v67;
                  v148 = nl_langinfo(0x10000);
                  LOBYTE(v67) = LOBYTE(v159);
                  v89 = v157;
                  v149 = *v148;
                  v96 = (unsigned __int64)v155;
                  v49 = (unsigned __int64)v154;
                  LOWORD(v90) = (_WORD)v151;
                  if ( !v149 )
                    v149 = 46;
                  *(_BYTE *)(v91 + 1) = v149;
                }
                goto LABEL_258;
              }
LABEL_257:
              v96 = v91 + 1;
              goto LABEL_258;
            }
            if ( v95 != 65 )
              goto LABEL_198;
            *(_BYTE *)v91 = 48;
            *(_QWORD *)&v159 = v91 + 2;
            v135 = *((_BYTE *)v11 + 72);
            *(_BYTE *)(v91 + 2) = 48;
            *(_BYTE *)(v91 + 1) = v135 + 23;
            if ( v67 & 0x10 || (v136 = v91 + 3, v54) )
            {
              v143 = v90;
              v150 = v49;
              v151 = v89;
              v154 = (void *)v54;
              LODWORD(v155) = v67;
              v157 = (_BYTE *)(v91 + 4);
              v144 = nl_langinfo(0x10000);
              v145 = (char *)v154;
              v136 = (signed __int64)v157;
              v146 = *v144;
              LOBYTE(v67) = (_BYTE)v155;
              v89 = v151;
              v49 = v150;
              LOWORD(v90) = v143;
              if ( !v146 )
                v146 = 46;
              *(_BYTE *)(v91 + 3) = v146;
              if ( v145 )
              {
                v147 = (char *)v136;
                do
                  *(++v147 - 1) = 48;
                while ( v147 != &v145[v91 + 4] );
                v136 += (signed __int64)v145;
              }
            }
            v137 = *((_BYTE *)v11 + 72);
            v96 = v136 + 3;
            *(_WORD *)(v136 + 1) = 12331;
            v91 = *(_QWORD *)&v159;
            *(_BYTE *)v136 = v137 + 15;
LABEL_258:
            LOWORD(v163) = v90;
            v97 = v96 - (_QWORD)v89;
            if ( v49 > v96 - (unsigned __int64)v89 )
            {
              v98 = v49 - v97;
              v99 = v96 + v98;
              v97 = v96 + v98 - (_QWORD)v89;
              if ( v67 & 2 )
              {
                if ( v98 )
                {
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v99 != v96 );
                }
              }
              else if ( v67 & 0x20 && v91 )
              {
                if ( v91 >= v96 )
                {
                  v91 = v96;
                }
                else
                {
                  v100 = -1LL;
                  do
                  {
                    *(_BYTE *)(v99 + v100) = *(_BYTE *)(v96 + v100);
                    --v100;
                  }
                  while ( v100 != v91 - 1 - v96 );
                }
                if ( v98 )
                {
                  v101 = v91 + v98;
                  do
                    *(_BYTE *)(++v91 - 1) = 48;
                  while ( v91 != v101 );
                }
              }
              else
              {
                v111 = -1LL;
                if ( (unsigned __int64)v89 < v96 )
                {
                  do
                  {
                    *(_BYTE *)(v99 + v111) = *(_BYTE *)(v96 + v111);
                    --v111;
                  }
                  while ( &v89[-v96 - 1] != (char *)v111 );
                  v96 = (unsigned __int64)v89;
                }
                if ( v98 )
                {
                  v112 = v96 + v98;
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v96 != v112 );
                }
              }
            }
            if ( (unsigned __int64)v160 <= v97 )
              goto LABEL_198;
            v102 = v97 + v18;
            v14 = v97 + v18;
            if ( v10 - v18 <= v97 )
            {
              if ( __CFADD__(v97, v18) )
              {
                if ( v10 != -1LL )
                  goto LABEL_88;
              }
              else if ( v10 < v102 )
              {
                if ( v10 )
                {
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_88;
                  v10 *= 2LL;
                  if ( v10 < v102 )
                    goto LABEL_367;
                }
                else
                {
                  if ( v102 <= 0xC )
                  {
                    v10 = 12LL;
                    goto LABEL_275;
                  }
LABEL_367:
                  if ( v102 == -1LL )
                    goto LABEL_88;
                  v10 = v97 + v18;
                }
LABEL_275:
                if ( v13 && v13 != src )
                {
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v103 = (char *)realloc(v13, v10);
                  if ( !v103 )
                    goto LABEL_88;
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  v13 = v103;
                }
                else
                {
                  LOBYTE(v157) = v13 == src;
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v113 = malloc(v10);
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  if ( !v113 )
                    goto LABEL_88;
                  if ( v18 && (_BYTE)v157 )
                  {
                    v114 = (char *)memcpy(v113, v13, v18);
                    v89 = (char *)v160;
                    v97 = *(_QWORD *)&v159;
                    v13 = v114;
                  }
                  else
                  {
                    v13 = (char *)v113;
                  }
                }
              }
            }
            v160 = v89;
            memcpy(&v13[v18], v89, v97);
            if ( v160 != &v172 )
              free(v160);
            goto LABEL_110;
          }
LABEL_369:
          v55 = 12LL;
          goto LABEL_188;
        }
      }
      v55 = 12LL;
      if ( v29 != 65 )
        v55 = 18LL;
      v54 = 0LL;
      if ( v29 != 65 )
        v54 = 6LL;
      goto LABEL_188;
    }
    switch ( v28 )
    {
      case 21:
      case 22:
        v14 = v18;
        **((_QWORD **)v27 + 2) = v18;
        break;
      case 20:
        v14 = v18;
        **((_DWORD **)v27 + 2) = v18;
        break;
      case 19:
        v14 = v18;
        **((_WORD **)v27 + 2) = v18;
        break;
      case 18:
        v14 = v18;
        **((_BYTE **)v27 + 2) = v18;
        break;
      default:
LABEL_402:
        abort();
        return result;
    }
LABEL_110:
    v12 = (_BYTE *)*((_QWORD *)v11 + 1);
    v11 = (char *)v11 + 88;
    v15 = *(_BYTE **)v11;
    ++v156;
    if ( v15 != v12 )
      goto LABEL_14;
LABEL_111:
    v18 = v14;
  }
  v106 = v18;
  v107 = v18 + 1;
  if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    goto LABEL_301;
  }
  if ( v10 >= v107 )
    goto LABEL_301;
  if ( v10 )
  {
    if ( (v10 & 0x8000000000000000LL) != 0LL )
      goto LABEL_88;
    v10 *= 2LL;
    if ( v10 >= v107 )
      goto LABEL_297;
    goto LABEL_387;
  }
  if ( v107 > 0xC )
  {
LABEL_387:
    if ( v107 == -1LL )
      goto LABEL_88;
    v10 = v18 + 1;
    goto LABEL_297;
  }
  v10 = 12LL;
LABEL_297:
  v108 = v13 == src;
  if ( !v13 || v108 )
  {
    v142 = malloc(v10);
    if ( !v142 )
      goto LABEL_88;
    if ( v106 && v108 )
      v13 = (char *)memcpy(v142, v13, v106);
    else
      v13 = (char *)v142;
  }
  else
  {
    v109 = (char *)realloc(v13, v10);
    if ( !v109 )
      goto LABEL_126;
    v13 = v109;
  }
LABEL_301:
  v13[v106] = 0;
  if ( v10 > v107 && v13 != src )
  {
    v110 = (char *)realloc(v13, v107);
    if ( v110 )
      v13 = v110;
  }
  if ( ptr )
    free(ptr);
  if ( v168 != &v171 )
    free(v168);
  if ( v165 != &v166 )
    free(v165);
  *v153 = v106;
  return v13;
}

signed __int64 __fastcall sub_4084B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  unsigned __int64 v3; // rdx@2
  unsigned int v4; // ecx@4
  _QWORD *v5; // r10@5
  signed __int64 result; // rax@8
  unsigned int v7; // ecx@9
  _DWORD *v8; // r10@10
  unsigned int v9; // ecx@12
  _DWORD *v10; // r10@13
  unsigned int v11; // ecx@15
  _DWORD *v12; // r10@16
  unsigned int v13; // ecx@22
  _QWORD *v14; // r10@23
  long double *v15; // rcx@25
  unsigned int v16; // ecx@26
  void **v17; // r10@27
  void *v18; // rcx@28
  unsigned int v19; // ecx@31
  const char **v20; // r10@32
  const char *v21; // rcx@33

  v2 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
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
          v4 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v5 = *(_QWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) + v4);
            *(_DWORD *)a1 = v4 + 8;
          }
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v8 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v7);
            *(_DWORD *)a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
        case 3:
        case 4:
          v9 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v10 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v9);
            *(_DWORD *)a1 = v9 + 8;
          }
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 1:
        case 2:
          v11 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v12 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v11);
            *(_DWORD *)a1 = v11 + 8;
          }
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 0xB:
          v13 = *(_DWORD *)(a1 + 4);
          if ( v13 > 0xAF )
          {
            v14 = *(_QWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*(_QWORD *)(a1 + 16) + v13);
            *(_DWORD *)(a1 + 4) = v13 + 16;
          }
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*(_QWORD *)(a1 + 8) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *(_QWORD *)(a1 + 8) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0x10:
          v16 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v17 = *(void ***)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*(_QWORD *)(a1 + 16) + v16);
            *(_DWORD *)a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_40B710;
          *(_QWORD *)(v2 + 16) = v18;
          goto LABEL_7;
        case 0xF:
          v19 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v20 = *(const char ***)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*(_QWORD *)(a1 + 16) + v19);
            *(_DWORD *)a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *(_QWORD *)(v2 + 16) = v21;
LABEL_7:
          ++v3;
          v2 += 32LL;
          if ( *(_QWORD *)a2 <= v3 )
            goto LABEL_8;
          continue;
        default:
          result = 0xFFFFFFFFLL;
          break;
      }
      break;
    }
  }
  else
  {
LABEL_8:
    result = 0LL;
  }
  return result;
}

signed __int64 __fastcall sub_4086D0(signed __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx@1
  signed __int64 *v4; // r8@1
  __int64 v5; // r15@1
  unsigned __int64 v6; // r9@1
  unsigned __int64 v7; // r11@1
  signed __int64 v8; // r13@1
  signed __int64 v9; // rbp@2
  unsigned __int64 v11; // r14@7
  signed __int64 v12; // r12@7
  char v13; // bl@7
  signed __int64 v14; // rcx@17
  signed int v15; // eax@27
  signed __int64 v16; // rax@37
  int v17; // eax@39
  unsigned __int64 v18; // rbx@40
  void *v19; // r13@41
  unsigned __int64 v20; // rdx@42
  char *v21; // rax@46
  bool v22; // zf@48
  signed __int64 v23; // rax@49
  char *v24; // rcx@49
  int v25; // eax@51
  unsigned __int64 v26; // rbx@52
  unsigned __int64 v27; // rdx@54
  char *v28; // rax@58
  signed int v29; // ecx@62
  unsigned __int64 v30; // rax@66
  signed int *v31; // rax@69
  signed __int64 v32; // rax@71
  signed __int64 v33; // rbx@74
  void *v34; // r12@75
  _QWORD *v35; // rax@76
  _BYTE *v36; // rax@8
  unsigned __int64 v37; // rax@84
  unsigned __int64 v38; // r9@88
  void *v39; // rax@92
  const void *v40; // rsi@92
  _QWORD *v41; // rax@95
  signed __int64 *v42; // ST38_8@96
  unsigned __int64 v43; // ST30_8@96
  _QWORD *v44; // rax@96
  _BYTE *v45; // rdx@99
  unsigned __int64 v46; // rsi@102
  signed __int64 v47; // rdx@104
  __int64 v48; // rax@104
  signed __int64 v49; // rdi@106
  unsigned __int8 v50; // cf@107
  unsigned __int64 v51; // rdx@107
  unsigned __int8 v52; // bl@107
  signed __int64 *v53; // ST08_8@133
  void *v54; // rdi@134
  unsigned __int64 v55; // r9@139
  void *v56; // rax@143
  signed __int64 i; // rcx@149
  signed __int64 v58; // rdx@151
  unsigned __int64 v59; // rax@152
  const void *v60; // rsi@159
  signed __int64 *v61; // ST48_8@159
  unsigned __int64 v62; // ST40_8@159
  unsigned __int64 v63; // ST38_8@159
  signed int v64; // ST30_4@159
  signed __int64 *v65; // ST08_8@162
  void *v66; // rdi@163
  unsigned __int64 v67; // r9@166
  void *v68; // rax@170
  void *v69; // rax@175
  signed __int64 *v70; // ST48_8@177
  unsigned __int64 v71; // ST40_8@177
  unsigned __int64 v72; // ST38_8@177
  signed __int64 v73; // ST30_8@177
  unsigned __int64 v74; // rax@180
  signed __int64 v75; // rsi@182
  __int64 v76; // rdx@182
  signed __int64 v77; // rcx@184
  unsigned __int64 v78; // rdx@185
  unsigned __int8 v79; // si@185
  _BYTE *v80; // rdx@190
  unsigned __int64 v81; // rsi@193
  signed __int64 v82; // rdx@195
  __int64 v83; // rax@195
  char *v84; // rdi@197
  unsigned __int64 v85; // rdx@198
  unsigned __int8 v86; // bl@198
  void *v87; // rax@203
  signed __int64 *v88; // ST48_8@205
  unsigned __int64 v89; // ST40_8@205
  unsigned __int64 v90; // ST38_8@205
  char *v91; // ST30_8@205
  void *src; // [sp+8h] [bp-80h]@1
  unsigned __int64 v93; // [sp+10h] [bp-78h]@1
  unsigned __int64 v94; // [sp+18h] [bp-70h]@1
  unsigned __int64 v95; // [sp+20h] [bp-68h]@1
  signed __int64 v96; // [sp+28h] [bp-60h]@1
  unsigned __int64 v97; // [sp+30h] [bp-58h]@75
  signed __int64 v98; // [sp+30h] [bp-58h]@91
  signed int v99; // [sp+30h] [bp-58h]@142
  char *v100; // [sp+30h] [bp-58h]@169
  signed __int64 *v101; // [sp+38h] [bp-50h]@75
  unsigned __int64 v102; // [sp+38h] [bp-50h]@91
  unsigned __int64 v103; // [sp+38h] [bp-50h]@142
  unsigned __int64 v104; // [sp+38h] [bp-50h]@169
  unsigned __int64 v105; // [sp+40h] [bp-48h]@91
  unsigned __int64 v106; // [sp+40h] [bp-48h]@142
  unsigned __int64 v107; // [sp+40h] [bp-48h]@169
  signed __int64 *v108; // [sp+48h] [bp-40h]@91
  signed __int64 *v109; // [sp+48h] [bp-40h]@142
  signed __int64 *v110; // [sp+48h] [bp-40h]@169

  v3 = (_QWORD *)(a2 + 32);
  v4 = (signed __int64 *)a2;
  v5 = a3;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a2 + 32;
  v96 = a2 + 32;
  *(_QWORD *)a3 = 0LL;
  src = (void *)(a3 + 16);
  *(_QWORD *)(a3 + 8) = a3 + 16;
  v94 = 0LL;
  v93 = 0LL;
  v95 = 0LL;
  while ( 1 )
  {
    if ( !*(_BYTE *)a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v93;
      v4[3] = v94;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *(_BYTE *)a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (signed __int64)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 40) = -1LL;
  *(_QWORD *)(v12 + 48) = 0LL;
  *(_QWORD *)(v12 + 56) = 0LL;
  *(_QWORD *)(v12 + 64) = -1LL;
  *(_QWORD *)(v12 + 80) = -1LL;
  v13 = *(_BYTE *)(a1 + 1);
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_17;
  v36 = (_BYTE *)(a1 + 1);
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_17;
  }
  v74 = 0LL;
  do
  {
    v75 = -1LL;
    v76 = v13 - 48;
    if ( v74 <= 0x1999999999999999LL )
      v75 = 10 * v74;
    v77 = v9;
    while ( 1 )
    {
      v13 = *(_BYTE *)(v9 + 1);
      v50 = __CFADD__(v75, v76);
      v78 = v75 + v76;
      v74 = v78;
      ++v9;
      v79 = v13 - 48;
      if ( !v50 )
        break;
      if ( v79 > 9u )
        goto LABEL_131;
      v75 = -1LL;
      v77 = v9;
      v76 = v13 - 48;
    }
  }
  while ( v79 <= 9u );
  v11 = v78 - 1;
  if ( v78 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  v9 = v77 + 2;
  v13 = *(_BYTE *)(v77 + 2);
  while ( 1 )
  {
LABEL_17:
    v14 = v9 + 1;
    if ( v13 == 39 )
    {
      *(_DWORD *)(v12 + 16) |= 1u;
      goto LABEL_16;
    }
    if ( v13 == 45 )
    {
      *(_DWORD *)(v12 + 16) |= 2u;
      goto LABEL_16;
    }
    if ( v13 == 43 )
    {
      *(_DWORD *)(v12 + 16) |= 4u;
      goto LABEL_16;
    }
    if ( v13 == 32 )
    {
      *(_DWORD *)(v12 + 16) |= 8u;
      goto LABEL_16;
    }
    if ( v13 == 35 )
    {
      *(_DWORD *)(v12 + 16) |= 0x10u;
      goto LABEL_16;
    }
    if ( v13 != 48 )
      break;
    *(_DWORD *)(v12 + 16) |= 0x20u;
LABEL_16:
    v13 = *(_BYTE *)v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *(_DWORD *)(v12 + 16) |= 0x40u;
    goto LABEL_16;
  }
  if ( v13 != 42 )
  {
    if ( (unsigned __int8)(v13 - 48) <= 9u )
    {
      *(_QWORD *)(v12 + 24) = v9;
      if ( (unsigned __int8)(*(_BYTE *)v9 - 48) <= 9u )
      {
        for ( i = v9; ; ++i )
        {
          v58 = i + 1;
          if ( (unsigned __int8)(*(_BYTE *)(i + 1) - 48) > 9u )
            break;
        }
        v14 = i + 2;
        v59 = v58 - v9;
        v9 = v58;
        if ( v93 >= v59 )
          v59 = v93;
        v93 = v59;
      }
      *(_QWORD *)(v12 + 32) = v9;
      v13 = *(_BYTE *)v9;
    }
    goto LABEL_26;
  }
  v16 = 1LL;
  *(_QWORD *)(v12 + 24) = v9;
  *(_QWORD *)(v12 + 32) = v14;
  if ( v93 )
    v16 = v93;
  v93 = v16;
  v17 = *(_BYTE *)(v9 + 1);
  if ( (unsigned __int8)(*(_BYTE *)(v9 + 1) - 48) > 9u )
    goto LABEL_215;
  v45 = (_BYTE *)(v9 + 1);
  do
    ++v45;
  while ( (unsigned __int8)(*v45 - 48) <= 9u );
  if ( *v45 != 36 )
  {
LABEL_215:
    v18 = *(_QWORD *)(v12 + 40);
    if ( v18 != -1LL )
      goto LABEL_41;
    *(_QWORD *)(v12 + 40) = v95;
    if ( v95 != -1LL )
    {
      v18 = v95++;
      goto LABEL_41;
    }
    goto LABEL_131;
  }
  v46 = 0LL;
  do
  {
    v47 = -1LL;
    v48 = v17 - 48;
    if ( v46 <= 0x1999999999999999LL )
      v47 = 10 * v46;
    v49 = v14;
    while ( 1 )
    {
      v50 = __CFADD__(v48, v47);
      v51 = v48 + v47;
      v17 = *(_BYTE *)(v14 + 1);
      v46 = v51;
      ++v14;
      v52 = v17 - 48;
      if ( !v50 )
        break;
      if ( v52 > 9u )
        goto LABEL_131;
      v47 = -1LL;
      v49 = v14;
      v48 = v17 - 48;
    }
  }
  while ( v52 <= 9u );
  v18 = v51 - 1;
  if ( v51 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  *(_QWORD *)(v12 + 40) = v18;
  v14 = v49 + 2;
LABEL_41:
  v19 = *(void **)(v5 + 8);
  if ( v6 > v18 )
  {
    v20 = *(_QWORD *)v5;
    goto LABEL_43;
  }
  v38 = 2 * v6;
  if ( v38 <= v18 )
    v38 = v18 + 1;
  if ( v38 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_160;
  v108 = v4;
  v105 = v38;
  v102 = v7;
  v98 = v14;
  if ( src == v19 )
  {
    v69 = malloc(32 * v38);
    v14 = v98;
    v7 = v102;
    v6 = v105;
    v4 = v108;
    if ( !v69 )
      goto LABEL_163;
    v20 = *(_QWORD *)v5;
    v40 = src;
    v19 = v69;
LABEL_177:
    v70 = v4;
    v71 = v6;
    v72 = v7;
    v73 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *(_QWORD *)v5;
    v4 = v70;
    v6 = v71;
    v7 = v72;
    v14 = v73;
    goto LABEL_94;
  }
  v39 = realloc(v19, 32 * v38);
  v40 = *(const void **)(v5 + 8);
  v14 = v98;
  v19 = v39;
  v7 = v102;
  v6 = v105;
  v4 = v108;
  if ( !v39 )
    goto LABEL_161;
  v20 = *(_QWORD *)v5;
  if ( src == v40 )
    goto LABEL_177;
LABEL_94:
  *(_QWORD *)(v5 + 8) = v19;
LABEL_43:
  if ( v20 <= v18 )
  {
    do
      *((_DWORD *)v19 + 8 * ++v20 - 8) = 0;
    while ( v20 <= v18 );
    *(_QWORD *)v5 = v20;
  }
  v21 = (char *)v19 + 32 * v18;
  if ( *(_DWORD *)v21 )
  {
    if ( *(_DWORD *)v21 != 5 )
      goto LABEL_132;
    v13 = *(_BYTE *)v14;
    v9 = v14++;
LABEL_26:
    if ( v13 != 46 )
      goto LABEL_27;
LABEL_48:
    v22 = *(_BYTE *)(v9 + 1) == 42;
    *(_QWORD *)(v12 + 48) = v9;
    if ( !v22 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v9 + 1) - 48) > 9u )
      {
        v9 = v14;
        v37 = 1LL;
      }
      else
      {
        do
          ++v14;
        while ( (unsigned __int8)(*(_BYTE *)v14 - 48) <= 9u );
        v37 = v14 - v9;
        v9 = v14;
      }
      *(_QWORD *)(v12 + 56) = v14;
      v13 = *(_BYTE *)v14;
      if ( v94 >= v37 )
        v37 = v94;
      v94 = v37;
      goto LABEL_27;
    }
    v23 = 2LL;
    v24 = (char *)(v9 + 2);
    *(_QWORD *)(v12 + 56) = v9 + 2;
    if ( v94 >= 2 )
      v23 = v94;
    v94 = v23;
    v25 = *(_BYTE *)(v9 + 2);
    if ( (unsigned __int8)(*(_BYTE *)(v9 + 2) - 48) > 9u )
      goto LABEL_216;
    v80 = (_BYTE *)(v9 + 2);
    do
      ++v80;
    while ( (unsigned __int8)(*v80 - 48) <= 9u );
    if ( *v80 != 36 )
    {
LABEL_216:
      v26 = *(_QWORD *)(v12 + 64);
      if ( v26 == -1LL )
      {
        *(_QWORD *)(v12 + 64) = v95;
        if ( v95 == -1LL )
          goto LABEL_131;
        v26 = v95++;
      }
LABEL_53:
      v19 = *(void **)(v5 + 8);
      if ( v6 > v26 )
      {
        v27 = *(_QWORD *)v5;
        goto LABEL_55;
      }
      v67 = 2 * v6;
      if ( v67 <= v26 )
        v67 = v26 + 1;
      if ( v67 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v110 = v4;
      v107 = v67;
      v104 = v7;
      v100 = v24;
      if ( src != v19 )
      {
        v68 = realloc(v19, 32 * v67);
        v40 = *(const void **)(v5 + 8);
        v24 = v100;
        v19 = v68;
        v7 = v104;
        v6 = v107;
        v4 = v110;
        if ( !v68 )
          goto LABEL_161;
        v27 = *(_QWORD *)v5;
        if ( src != v40 )
          goto LABEL_172;
        goto LABEL_205;
      }
      v87 = malloc(32 * v67);
      v24 = v100;
      v7 = v104;
      v6 = v107;
      v4 = v110;
      if ( v87 )
      {
        v27 = *(_QWORD *)v5;
        v40 = src;
        v19 = v87;
LABEL_205:
        v88 = v4;
        v89 = v6;
        v90 = v7;
        v91 = v24;
        memcpy(v19, v40, 32 * v27);
        v27 = *(_QWORD *)v5;
        v4 = v88;
        v6 = v89;
        v7 = v90;
        v24 = v91;
LABEL_172:
        *(_QWORD *)(v5 + 8) = v19;
LABEL_55:
        if ( v27 <= v26 )
        {
          do
            *((_DWORD *)v19 + 8 * ++v27 - 8) = 0;
          while ( v27 <= v26 );
          *(_QWORD *)v5 = v27;
        }
        v28 = (char *)v19 + 32 * v26;
        if ( *(_DWORD *)v28 )
        {
          if ( *(_DWORD *)v28 != 5 )
            goto LABEL_132;
          v13 = *v24;
          v9 = (signed __int64)v24;
        }
        else
        {
          *(_DWORD *)v28 = 5;
          v9 = (signed __int64)v24;
          v13 = *v24;
        }
        goto LABEL_27;
      }
LABEL_163:
      v66 = (void *)v4[1];
      if ( (void *)v96 != v66 )
        free(v66);
      goto LABEL_165;
    }
    v81 = 0LL;
    do
    {
      v82 = -1LL;
      v83 = v25 - 48;
      if ( v81 <= 0x1999999999999999LL )
        v82 = 10 * v81;
      v84 = v24;
      while ( 1 )
      {
        v50 = __CFADD__(v83, v82);
        v85 = v83 + v82;
        v25 = *++v24;
        v81 = v85;
        v86 = v25 - 48;
        if ( !v50 )
          break;
        if ( v86 > 9u )
          goto LABEL_131;
        v82 = -1LL;
        v84 = v24;
        v83 = v25 - 48;
      }
    }
    while ( v86 <= 9u );
    v26 = v85 - 1;
    if ( v85 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *(_QWORD *)(v12 + 64) = v26;
      v24 = v84 + 2;
      goto LABEL_53;
    }
LABEL_131:
    v19 = *(void **)(v5 + 8);
    goto LABEL_132;
  }
  *(_DWORD *)v21 = 5;
  v13 = *(_BYTE *)v14;
  v9 = v14++;
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
      v13 = *(_BYTE *)v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case 115:
      v29 = (v15 > 7) + 15;
      break;
    case 37:
      goto LABEL_71;
    case 99:
      v29 = (v15 > 7) + 13;
      break;
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
      break;
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
      break;
    case 112:
      v29 = 17;
      break;
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
      break;
    case 83:
      v29 = 16;
      v13 = 115;
      break;
    case 67:
      v29 = 14;
      v13 = 99;
      break;
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
      break;
    default:
      goto LABEL_131;
  }
  if ( v11 != -1LL )
  {
    *(_QWORD *)(v12 + 80) = v11;
    goto LABEL_65;
  }
  *(_QWORD *)(v12 + 80) = v95;
  if ( v95 == -1LL )
    goto LABEL_131;
  v11 = v95++;
LABEL_65:
  v19 = *(void **)(v5 + 8);
  if ( v6 <= v11 )
  {
    v55 = 2 * v6;
    if ( v55 <= v11 )
      v55 = v11 + 1;
    if ( v55 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v109 = v4;
      v106 = v55;
      v103 = v7;
      v99 = v29;
      if ( src == v19 )
      {
        v56 = malloc(32 * v55);
        v29 = v99;
        v7 = v103;
        v6 = v106;
        v4 = v109;
        if ( !v56 )
          goto LABEL_163;
        goto LABEL_159;
      }
      v56 = realloc(v19, 32 * v55);
      v29 = v99;
      v7 = v103;
      v19 = v56;
      v6 = v106;
      v4 = v109;
      if ( v56 )
      {
        if ( src != *(void **)(v5 + 8) )
        {
LABEL_145:
          *(_QWORD *)(v5 + 8) = v19;
          goto LABEL_66;
        }
        v19 = src;
LABEL_159:
        v60 = v19;
        v61 = v4;
        v62 = v6;
        v19 = v56;
        v63 = v7;
        v64 = v29;
        memcpy(v56, v60, 32LL * *(_QWORD *)v5);
        v4 = v61;
        v29 = v64;
        v6 = v62;
        v7 = v63;
        goto LABEL_145;
      }
LABEL_211:
      v40 = *(const void **)(v5 + 8);
LABEL_161:
      if ( src == v40 )
        goto LABEL_163;
      goto LABEL_162;
    }
LABEL_160:
    v40 = v19;
    goto LABEL_161;
  }
LABEL_66:
  v30 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 <= v11 )
  {
    do
      *((_DWORD *)v19 + 8 * ++v30 - 8) = 0;
    while ( v30 <= v11 );
    *(_QWORD *)v5 = v30;
  }
  v31 = (signed int *)((char *)v19 + 32 * v11);
  if ( !*v31 )
  {
    *v31 = v29;
    goto LABEL_71;
  }
  if ( *v31 == v29 )
  {
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
    if ( (v7 & 0x8000000000000000LL) != 0LL )
      goto LABEL_211;
    v33 = 2 * v7;
    if ( 2 * v7 > 0x2E8BA2E8BA2E8BALL )
      goto LABEL_211;
    v34 = (void *)v4[1];
    v101 = v4;
    v97 = v6;
    if ( (void *)v96 != v34 )
    {
      v35 = realloc(v34, 176 * v7);
      v6 = v97;
      v4 = v101;
      v3 = v35;
      if ( !v35 )
        goto LABEL_211;
      v34 = (void *)v101[1];
      v8 = *v101;
      if ( (void *)v96 == v34 )
      {
LABEL_96:
        v42 = v4;
        v43 = v6;
        v44 = memcpy(v3, v34, 88 * v8);
        v4 = v42;
        v6 = v43;
        v3 = v44;
        v8 = *v42;
      }
      v4[1] = (signed __int64)v3;
      v7 = v33;
      goto LABEL_3;
    }
    v41 = malloc(176 * v7);
    v6 = v97;
    v4 = v101;
    v3 = v41;
    if ( v41 )
      goto LABEL_96;
    v40 = *(const void **)(v5 + 8);
    if ( src == v40 )
    {
LABEL_165:
      *__errno_location() = 12;
      return 0xFFFFFFFFLL;
    }
LABEL_162:
    v65 = v4;
    free((void *)v40);
    v4 = v65;
    goto LABEL_163;
  }
LABEL_132:
  if ( src != v19 )
  {
    v53 = v4;
    free(v19);
    v4 = v53;
  }
  v54 = (void *)v4[1];
  if ( (void *)v96 != v54 )
    free(v54);
  *__errno_location() = 22;
  return 0xFFFFFFFFLL;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409450(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60D208 )
    v1 = unk_60D208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409468(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60CE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
