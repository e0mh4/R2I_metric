#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  __int64 v3; // r14
  char v4; // r13
  char **v5; // rbp
  char *v6; // rbx
  int v7; // eax
  char v8; // r13
  int *v9; // rax
  __int64 v10; // r14
  char *v11; // r15
  int *v12; // rax
  char v13; // r10
  unsigned int v14; // er11
  char *v15; // r15
  bool v16; // zf
  int v17; // er14
  time_t *v18; // rcx
  int v19; // eax
  char v20; // r10
  int v21; // edx
  int v22; // eax
  __int64 v23; // r15
  char *v24; // rax
  __int64 v26; // r14
  char *v27; // r15
  int *v28; // rax
  bool v29; // al
  char v30; // al
  const char *v31; // rsi
  char *v32; // rax
  int *v33; // rax
  struct tm *v34; // rax
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // r13
  char *v38; // rax
  __int64 v39; // rbx
  char *v40; // rax
  unsigned int v41; // [rsp+Ch] [rbp-FCh]
  char v42; // [rsp+Ch] [rbp-FCh]
  unsigned int v43; // [rsp+Ch] [rbp-FCh]
  char v44; // [rsp+10h] [rbp-F8h]
  int v45; // [rsp+10h] [rbp-F8h]
  char *v46; // [rsp+10h] [rbp-F8h]
  unsigned int v47; // [rsp+18h] [rbp-F0h]
  unsigned int v48; // [rsp+1Ch] [rbp-ECh]
  struct timespec tp; // [rsp+20h] [rbp-E8h]
  __time_t v50; // [rsp+30h] [rbp-D8h]
  __syscall_slong_t v51; // [rsp+38h] [rbp-D0h]
  struct stat stat_buf; // [rsp+40h] [rbp-C8h]

  v3 = 0LL;
  v4 = 0;
  v5 = a2;
  sub_408430(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_410EE0(sub_402F30);
  byte_6183A2 = 0;
  dword_6183A4 = 0;
  byte_6183A3 = 0;
  while ( 1 )
  {
    LODWORD(v6) = sub_40B5F0((unsigned int)a1, a2, "acd:fhmr:t:", &off_411920, 0LL);
    if ( (_DWORD)v6 == -1 )
      break;
    if ( (_DWORD)v6 != 102 )
    {
      if ( (int)v6 <= 102 )
      {
        if ( (_DWORD)v6 == 97 )
        {
          dword_6183A4 |= 1u;
        }
        else
        {
          if ( (int)v6 <= 97 )
          {
            if ( (_DWORD)v6 == -131 )
            {
              sub_40A4D0((char)stdout);
              exit(0);
            }
            if ( (_DWORD)v6 == -130 )
              sub_4027E0(0);
LABEL_96:
            sub_4027E0(1);
          }
          if ( (_DWORD)v6 == 99 )
          {
            byte_6183A3 = 1;
          }
          else
          {
            if ( (_DWORD)v6 != 100 )
              goto LABEL_96;
            v3 = qword_618550;
          }
        }
      }
      else if ( (_DWORD)v6 == 114 )
      {
        byte_6183A2 = 1;
        filename = (char *)qword_618550;
      }
      else if ( (int)v6 > 114 )
      {
        if ( (_DWORD)v6 == 116 )
        {
          v4 = sub_408100(&timer, qword_618550, 6LL);
          if ( !v4 )
          {
            v39 = sub_40A050(qword_618550);
            v40 = dcgettext(0LL, "invalid date format %s", 5);
            error(1, 0, v40, v39);
            start();
          }
          *(&timer + 1) = 0LL;
          xmmword_618390 = (__int128)_mm_load_si128((const __m128i *)&timer);
        }
        else
        {
          if ( (_DWORD)v6 != 128 )
            goto LABEL_96;
          dword_6183A4 |= dword_4118B0[sub_402E50("--time", qword_618550, off_4118E0, dword_4118B0, 4LL, off_618298)];
        }
      }
      else if ( (_DWORD)v6 == 104 )
      {
        byte_6183A1 = 1;
      }
      else
      {
        if ( (_DWORD)v6 != 109 )
          goto LABEL_96;
        dword_6183A4 |= 2u;
      }
    }
  }
  if ( !dword_6183A4 )
    dword_6183A4 = 3;
  if ( !v4 )
  {
    if ( byte_6183A2 )
    {
      if ( byte_6183A1 )
        v29 = __lxstat(1, filename, &stat_buf) != 0;
      else
        v29 = __xstat(1, filename, &stat_buf) != 0;
      if ( !v29 )
      {
        *(timespec *)&timer = stat_buf.st_atim;
        xmmword_618390 = (__int128)stat_buf.st_mtim;
        if ( v3 )
        {
          v30 = dword_6183A4;
          if ( dword_6183A4 & 1 )
          {
            sub_4027A0(&timer, v3);
            v30 = dword_6183A4;
          }
          if ( v30 & 2 )
            sub_4027A0(&xmmword_618390, v3);
        }
        goto LABEL_34;
      }
      v5 = (char **)sub_409E00(4LL, filename);
      v6 = dcgettext(0LL, "failed to get attributes of %s", 5);
      v33 = __errno_location();
      error(1, *v33, v6, v5);
    }
    else
    {
      if ( v3 )
      {
        sub_4030D0(&tp);
        sub_4027A0(&timer, v3);
        xmmword_618390 = (__int128)_mm_load_si128((const __m128i *)&timer);
        if ( dword_6183A4 != 3 )
          goto LABEL_34;
        if ( *(_OWORD *)&timer != tp )
          goto LABEL_34;
        v51 = tp.tv_nsec;
        v50 = tp.tv_sec ^ 1;
        sub_4027A0(&stat_buf, v3);
        if ( stat_buf.st_dev != v50 || stat_buf.st_ino != v51 )
          goto LABEL_34;
      }
      if ( a1 - dword_61831C <= 1
        || (int)sub_4083B0() > 200111
        || !(unsigned __int8)sub_408100(&timer, a2[dword_61831C], 9LL) )
      {
        if ( dword_6183A4 == 3 )
        {
          byte_6183A0 = 1;
        }
        else
        {
          *(&timer + 1) = 0x3FFFFFFFLL;
          *((_QWORD *)&xmmword_618390 + 1) = 0x3FFFFFFFLL;
        }
        goto LABEL_34;
      }
      *(&timer + 1) = 0LL;
      xmmword_618390 = (__int128)_mm_load_si128((const __m128i *)&timer);
      if ( getenv("POSIXLY_CORRECT") )
      {
LABEL_93:
        ++dword_61831C;
        goto LABEL_34;
      }
    }
    v34 = localtime(&timer);
    if ( v34 )
    {
      v35 = (unsigned int)v34->tm_hour;
      v36 = (unsigned int)v34->tm_mday;
      v48 = v34->tm_sec;
      v47 = v34->tm_min;
      v37 = v34->tm_year + 1900LL;
      v43 = v34->tm_mon + 1;
      v46 = v5[dword_61831C];
      v38 = dcgettext(0LL, "warning: 'touch %s' is obsolete; use 'touch -t %04ld%02d%02d%02d%02d.%02d'", 5);
      error(0, 0, v38, v46, v37, v43, v36, v35, v47, v48);
    }
    goto LABEL_93;
  }
  if ( v3 || byte_6183A2 )
  {
    v31 = "cannot specify times from more than one source";
    goto LABEL_95;
  }
LABEL_34:
  v7 = dword_61831C;
  if ( dword_61831C == a1 )
  {
    v31 = "missing file operand";
LABEL_95:
    v32 = dcgettext(0LL, v31, 5);
    error(0, 0, v32);
    goto LABEL_96;
  }
  v8 = 1;
  if ( dword_61831C < a1 )
  {
    while ( 1 )
    {
      v14 = 1;
      v15 = v5[v7];
      v16 = strcmp(v5[v7], "-") == 0;
      v17 = !v16;
      if ( !v16 )
      {
        if ( byte_6183A3
          || byte_6183A1
          || (v17 = 0, v14 = sub_402FD0(0, v5[v7], 2369), v14 == -1)
          && ((v17 = *__errno_location(), (unsigned int)(v17 - 21) <= 1) || (v14 = -1, v17 == 1)) )
        {
          v14 = (unsigned int)v6;
          v17 = 0;
        }
      }
      if ( dword_6183A4 != 3 )
      {
        if ( dword_6183A4 == 2 )
        {
          *(&timer + 1) = 1073741822LL;
        }
        else
        {
          if ( dword_6183A4 != 1 )
            __assert_fail("change_times == CH_ATIME", "src/touch.c", 0x99u, "touch");
          *((_QWORD *)&xmmword_618390 + 1) = 1073741822LL;
        }
      }
      v18 = &timer;
      if ( byte_6183A0 )
        v18 = 0LL;
      if ( (unsigned __int8)byte_6183A1 & (v14 == -1) )
        break;
      if ( v14 != 1 )
      {
        v44 = byte_6183A1 & (v14 == -1);
        v41 = v14;
        v19 = sub_403040(v14, 4294967196LL, v15, v18, 0LL);
        v20 = v44;
        v21 = v19;
        if ( !v41 )
        {
          v45 = v19;
          v42 = v20;
          v22 = close(0);
          v21 = v45;
          if ( v22 )
          {
            v26 = sub_409E00(4LL, v15);
            v27 = dcgettext(0LL, "failed to close %s", 5);
            v28 = __errno_location();
            error(0, *v28, v27, v26);
            v13 = v42;
            goto LABEL_41;
          }
        }
LABEL_56:
        if ( !v21 )
          goto LABEL_57;
LABEL_37:
        if ( v17 )
          goto LABEL_62;
        v9 = __errno_location();
        if ( byte_6183A3 && *v9 == 2 )
        {
LABEL_57:
          v13 = 1;
          goto LABEL_41;
        }
        goto LABEL_40;
      }
      if ( !(unsigned int)sub_403040(1LL, 4294967196LL, 0LL, v18, 0LL) )
        goto LABEL_57;
      if ( *__errno_location() != 9 )
        goto LABEL_37;
      if ( byte_6183A3 )
        goto LABEL_57;
      if ( v17 )
      {
LABEL_62:
        v23 = sub_409E00(4LL, v15);
        v24 = dcgettext(0LL, "cannot touch %s", 5);
        error(0, v17, v24, v23);
        v13 = 0;
        goto LABEL_41;
      }
LABEL_40:
      v10 = sub_409E00(4LL, v15);
      v11 = dcgettext(0LL, "setting times of %s", 5);
      v12 = __errno_location();
      error(0, *v12, v11, v10);
      v13 = 0;
LABEL_41:
      v8 &= v13;
      v7 = dword_61831C + 1;
      dword_61831C = v7;
      if ( v7 >= a1 )
        return (unsigned __int8)v8 ^ 1u;
    }
    v21 = sub_403040(0xFFFFFFFFLL, 4294967196LL, v15, v18, 256LL);
    goto LABEL_56;
  }
  return (unsigned __int8)v8 ^ 1u;
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

__int64 *sub_4026EB()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_40270A()
{
  return 0LL;
}

__int64 *sub_402741()
{
  __int64 *result; // rax

  if ( !byte_618348 )
  {
    while ( qword_618350 < (unsigned __int64)(&qword_617E48 - qword_617E40 - 1) )
      ((void (*)(void))qword_617E40[++qword_618350])();
    result = sub_4026EB();
    byte_618348 = 1;
  }
  return result;
}

__int64 sub_402798()
{
  return sub_40270A();
}

__int64 __fastcall sub_4027A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  char *v4; // rax

  result = sub_408000();
  if ( !(_BYTE)result )
  {
    v3 = sub_40A050(a2);
    v4 = dcgettext(0LL, "invalid date format %s", 5);
    error(1, 0, v4, v3);
    sub_4027E0(1);
  }
  return result;
}

noreturn void __fastcall  sub_4027E0(int status)
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
  const char **v20; // rax
  const char *v21; // rbp
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  const char *v30; // [rsp+0h] [rbp-88h]
  const char *v31; // [rsp+8h] [rbp-80h]
  const char *v32; // [rsp+10h] [rbp-78h]
  const char *v33; // [rsp+18h] [rbp-70h]
  const char *v34; // [rsp+20h] [rbp-68h]
  const char *v35; // [rsp+28h] [rbp-60h]
  const char *v36; // [rsp+30h] [rbp-58h]
  const char *v37; // [rsp+38h] [rbp-50h]
  const char *v38; // [rsp+40h] [rbp-48h]
  const char *v39; // [rsp+48h] [rbp-40h]
  const char *v40; // [rsp+50h] [rbp-38h]
  const char *v41; // [rsp+58h] [rbp-30h]
  __int64 v42; // [rsp+60h] [rbp-28h]
  __int64 v43; // [rsp+68h] [rbp-20h]

  v1 = qword_6183B8;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... FILE...\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "Update the access and modification times of each FILE to the current time.\n"
         "\n"
         "A FILE argument that does not exist is created empty, unless -c or -h\n"
         "is supplied.\n"
         "\n"
         "A FILE argument string of - is handled specially and causes touch to\n"
         "change the times of the file associated with standard output.\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "  -a                     change only the access time\n"
         "  -c, --no-create        do not create any files\n"
         "  -d, --date=STRING      parse STRING and use it instead of current time\n"
         "  -f                     (ignored)\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "  -h, --no-dereference   affect each symbolic link instead of any referenced\n"
          "                         file (useful only on systems that can change the\n"
          "                         timestamps of a symlink)\n"
          "  -m                     change only the modification time\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  -r, --reference=FILE   use this file's times instead of current time\n"
          "  -t STAMP               use [[CC]YY]MMDDhhmm[.ss] instead of current time\n"
          "      --time=WORD        change the specified time:\n"
          "                           WORD is access, atime, or use: equivalent to -a\n"
          "                           WORD is modify or mtime: equivalent to -m\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "\nNote that the -d and -t options accept different time-date formats.\n", 5);
  fputs_unlocked(v19, v18);
  v30 = "[";
  v20 = &v30;
  v31 = "test invocation";
  v32 = "coreutils";
  v33 = "Multi-call invocation";
  v34 = "sha224sum";
  v35 = "sha2 utilities";
  v36 = "sha256sum";
  v37 = "sha2 utilities";
  v38 = "sha384sum";
  v39 = "sha2 utilities";
  v40 = "sha512sum";
  v41 = "sha2 utilities";
  v42 = 0LL;
  v43 = 0LL;
  do
    v20 += 2;
  while ( *v20 && strcmp("touch", *v20) );
  v21 = v20[1];
  if ( v21 )
  {
    v22 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v22, &unk_410FD7);
    v23 = setlocale(5, 0LL);
    if ( !v23 || !strncmp(v23, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v26 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v26, &unk_410FD7);
    v27 = setlocale(5, 0LL);
    if ( !v27 || !strncmp(v27, "en_", 3uLL) )
    {
      v21 = "touch";
      v28 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v28, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v21 = "touch";
  }
  v29 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v29, "touch");
LABEL_10:
  v24 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v24, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v25 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v25, v21);
LABEL_3:
  exit(status);
}

noreturn void  sub_402B80()
{
  sub_4027E0(1);
}

__int64 __fastcall sub_402B90(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_402CB0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_40A030(1LL, a1);
  v5 = sub_409D20(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_402D30(__int64 *a1, char *a2, size_t a3)
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
  __int64 v12; // rax
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
      v11 = sub_40A050(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v12 = sub_40A050(i);
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

__int64 __fastcall sub_402E50(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
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
  result = sub_402B90(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_402CB0(a1, (__int64)a2, result);
    sub_402D30(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_402EC0(void *s1, __int64 *a2, char *a3, size_t a4)
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

__int64 sub_402F30()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_40C430(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_6183A8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_6183B0 )
      {
        v5 = sub_409EA0();
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
  result = sub_40C430(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_402FD0(int fd2, char *file, int oflag, unsigned int a4)
{
  __int64 result; // rax
  int v5; // ebx
  unsigned int v6; // er12
  int *v7; // rax
  int v8; // er13
  int *v9; // rbp

  LODWORD(result) = open(file, oflag, a4);
  v5 = result;
  if ( fd2 == (_DWORD)result || (int)result < 0 )
    return (unsigned int)result;
  v6 = dup2(result, fd2);
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  close(v5);
  result = v6;
  *v9 = v8;
  return result;
}

int __fastcall sub_403040(int a1, int a2, const char *a3, const struct timespec *a4, int a5)
{
  int v5; // er13
  const struct timespec *v6; // rbp
  const char *v7; // rbx
  int result; // eax

  v5 = a5;
  v6 = a4;
  v7 = a3;
  if ( a1 < 0 )
  {
    if ( !a3 )
    {
LABEL_10:
      *__errno_location() = 9;
      return -1;
    }
    goto LABEL_3;
  }
  result = futimens(a1, a4);
  if ( v7 && result == -1 )
  {
    if ( *__errno_location() != 38 )
      return -1;
LABEL_3:
    result = utimensat(a2, v7, v6, v5);
  }
  if ( result == 1 )
    goto LABEL_10;
  return result;
}

int __fastcall sub_4030D0(struct timespec *tp)
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

__int64 __fastcall sub_403110(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // xmm0
  __int64 v13; // r9

  result = a1[10].m128i_i64[1];
  v10 = a8;
  v11 = a9;
  if ( result && !a1[3].m128i_i64[0] && !a1[10].m128i_i8[1] )
  {
    if ( a1[12].m128i_i64[1] || a9 > 2 )
    {
      v12 = _mm_loadu_si128((const __m128i *)&a7);
      result = a9;
      a1[13].m128i_i8[8] = 1;
      a1[2] = v12;
      a1[3].m128i_i64[0] = result;
      return result;
    }
    a1[12].m128i_i64[1] = 1LL;
LABEL_13:
    a1[4].m128i_i64[1] = v10;
    a1[5].m128i_i64[0] = 0LL;
    goto LABEL_11;
  }
  if ( a9 > 4 )
  {
    v13 = a9 - 4;
    a1[10].m128i_i64[1] = result + 1;
    a1[3].m128i_i64[0] = v13;
    a1[4].m128i_i64[0] = v10 % 100;
    result = 3777893186295716171LL * v10;
    a1[3].m128i_i64[1] = v10 / 100 % 100;
    a1[2].m128i_i64[1] = v10 / 10000;
    return result;
  }
  ++a1[12].m128i_i64[1];
  if ( v11 <= 2 )
    goto LABEL_13;
  a1[4].m128i_i64[1] = v10 / 100;
  result = 100 * (v10 / 100);
  a1[5].m128i_i64[0] = v10 % 100;
LABEL_11:
  a1[5].m128i_i64[1] = 0LL;
  a1[6].m128i_i64[0] = 0LL;
  a1[1].m128i_i32[3] = 2;
  return result;
}

__int64 __fastcall sub_403290(int a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // eax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // ecx
  unsigned int v7; // ebp

  v2 = a2;
  v3 = __sprintf_chk(a2, 1LL, -1LL, "%c%02d", ((a1 >> 31) & 2u) + 43, (unsigned int)abs32(a1 / 3600));
  if ( a1 % 3600 )
  {
    v4 = a2 + v3;
    *(_BYTE *)v4 = 58;
    v5 = abs32(a1 % 3600);
    *(_BYTE *)(v4 + 1) = v5 / 0x258 + 48;
    v6 = v5 / 0x3C % 0xA + 48;
    v7 = v5 % 0x3C;
    *(_BYTE *)(v4 + 2) = v6;
    if ( v7 )
    {
      *(_BYTE *)(v4 + 3) = 58;
      *(_BYTE *)(v4 + 4) = v7 / 0xA + 48;
      *(_WORD *)(v4 + 5) = (unsigned __int8)(v7 % 0xA + 48);
    }
    else
    {
      *(_BYTE *)(v4 + 3) = 0;
    }
  }
  return v2;
}

__int64 __fastcall sub_403390(int a1, __int64 a2)
{
  __sprintf_chk(
    a2,
    1LL,
    -1LL,
    (a1 >= -1900) + 4266649LL,
    (unsigned int)abs32(a1 / 100 + 19),
    (unsigned int)abs32(a1 % 100));
  return a2;
}

__int64 sub_403400()
{
  fwrite("date: ", 1uLL, 6uLL, stderr);
  return sub_40C370(stderr);
}

bool __fastcall sub_4034C0(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool result; // al
  __int64 v5; // [rsp+8h] [rbp-50h]
  char v6; // [rsp+10h] [rbp-48h]

  v5 = a4;
  if ( a4 != -1 || (a3 = (_DWORD *)sub_40C180(a1, &v5, &v6)) != 0LL )
    result = (a3[5] ^ a2[5] | a3[4] ^ a2[4] | a3[3] ^ a2[3] | a3[2] ^ a2[2] | a3[1] ^ a2[1] | *a3 ^ *a2) == 0;
  else
    result = 0;
  return result;
}

__int64 __fastcall sub_403530(unsigned __int8 a1, __int64 a2)
{
  __fprintf_chk(stderr, 1LL, &aLdS[a1 ^ 1], a2);
  return 1LL;
}

__int64 __fastcall sub_403570(_DWORD *a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  __int64 v6; // r9
  bool v7; // of
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx

  v5 = a3;
  if ( a4 <= 2 )
  {
    if ( a5 >= 0 )
      goto LABEL_3;
    v10 = 0LL;
LABEL_11:
    v8 = v10 + 60 * v5;
LABEL_6:
    result = 0LL;
    if ( (unsigned __int64)(v8 + 1440) <= 0xB40 )
    {
      result = 1LL;
      *a1 = 60 * v8;
    }
    return result;
  }
  if ( a5 < 0 )
  {
    v5 = a3 / 100;
    v10 = a3 % 100;
    goto LABEL_11;
  }
LABEL_3:
  v6 = 60 * a3;
  if ( a2 )
  {
    v7 = __OFSUB__(v6, a5);
    v8 = v6 - a5;
  }
  else
  {
    v7 = __OFADD__(a5, v6);
    v8 = a5 + v6;
  }
  result = 0LL;
  if ( !v7 && (unsigned __int128)(60 * (__int128)a3) >> 64 == 0 )
    goto LABEL_6;
  return result;
}

char **__fastcall sub_403630(__int64 a1, const char *a2)
{
  const char *v2; // rbp
  const char *v3; // rsi
  char **v4; // rbx
  const char *v6; // rsi
  const char **v7; // rbx
  const char *v8; // rsi

  v2 = a2;
  v3 = "GMT";
  v4 = &off_4130C0;
  do
  {
    if ( !strcmp(v2, v3) )
      return v4;
    v4 += 2;
    v3 = *v4;
  }
  while ( *v4 );
  v6 = *(const char **)(a1 + 232);
  v7 = (const char **)(a1 + 232);
  if ( !v6 )
  {
LABEL_6:
    v4 = &off_412DC0;
    v8 = "WET";
    while ( strcmp(v2, v8) )
    {
      v4 += 2;
      v8 = *v4;
      if ( !*v4 )
        return 0LL;
    }
    return v4;
  }
  while ( strcmp(v2, v6) )
  {
    v7 += 2;
    v6 = *v7;
    if ( !*v7 )
      goto LABEL_6;
  }
  return (char **)v7;
}

int __fastcall sub_4036F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rsi
  unsigned __int8 v5; // di
  unsigned __int8 v6; // al
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  FILE *v12; // rbx
  char *v13; // rax
  unsigned __int8 v14; // al

  v2 = a2;
  dcgettext(0LL, "parsed %s part: ", 5);
  sub_403400();
  v3 = *(_QWORD *)(a2 + 104);
  if ( !v3 )
  {
    v4 = *(_QWORD *)(v2 + 112);
    if ( !v4 )
    {
      v7 = *(_QWORD *)(v2 + 120);
      v5 = 0;
      if ( v7 )
        goto LABEL_6;
      if ( !*(_QWORD *)(v2 + 128) && !*(_QWORD *)(v2 + 136) && !*(_QWORD *)(v2 + 144) && !*(_DWORD *)(v2 + 152) )
      {
        v12 = stderr;
        v13 = dcgettext(0LL, "today/this/now\n", 5);
        return fputs(v13, v12);
      }
      goto LABEL_7;
    }
    v5 = 0;
    goto LABEL_4;
  }
  v14 = sub_403530(0, v3);
  v4 = *(_QWORD *)(v2 + 112);
  v5 = v14;
  if ( v4 )
  {
LABEL_4:
    v6 = sub_403530(v5, v4);
    v7 = *(_QWORD *)(v2 + 120);
    v5 = v6;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v2 + 120);
LABEL_5:
  if ( v7 )
LABEL_6:
    v5 = sub_403530(v5, v7);
LABEL_7:
  v8 = *(_QWORD *)(v2 + 128);
  if ( v8 )
    v5 = sub_403530(v5, v8);
  v9 = *(_QWORD *)(v2 + 136);
  if ( v9 )
    v5 = sub_403530(v5, v9);
  v10 = *(_QWORD *)(v2 + 144);
  if ( v10 )
    v5 = sub_403530(v5, v10);
  if ( *(_DWORD *)(v2 + 152) )
    sub_403530(v5, *(int *)(v2 + 152));
  return fputc(10, stderr);
}

__int64 __fastcall sub_403880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-38h]

  v3 = a3;
  v4 = sub_40E2D0(a3, 100LL, "(Y-M-D) %Y-%m-%d %H:%M:%S", a1, 0LL, 0LL);
  if ( !a2 )
    return v3;
  v5 = v4;
  if ( v4 > 99 || !*(_QWORD *)(a2 + 208) )
    return v3;
  v7 = sub_403290(*(_DWORD *)(a2 + 24), (__int64)&v8);
  __snprintf_chk(v3 + v5, 100 - v5, 1LL, -1LL, " TZ=%s", v7);
  return v3;
}

char *__fastcall sub_403920(__int64 a1, char *a2)
{
  char *v2; // rbp
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // rdx
  _BOOL8 v6; // rcx
  __int64 v7; // rsi
  char *v8; // rdi

  v2 = a2;
  if ( !*(_BYTE *)(a1 + 224) )
  {
    *a2 = 0;
    v5 = *(int *)(a1 + 16);
    if ( (unsigned int)v5 <= 6 )
    {
      v8 = a2;
      v6 = 1LL;
      v7 = 100LL;
      goto LABEL_10;
    }
    return a2;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(v3 + 1) <= 0xD )
  {
    v4 = snprintf(a2, 0x64uLL, "%s", &aLast[11 * v3 + 11]);
    v5 = *(int *)(a1 + 16);
    if ( (unsigned int)v5 <= 6 && (unsigned int)v4 <= 0x63 )
      goto LABEL_5;
    return a2;
  }
  v4 = __snprintf_chk(a2, 100LL, 1LL, -1LL, "%ld", v3);
  v5 = *(int *)(a1 + 16);
  if ( (unsigned int)v5 > 6 )
    return a2;
LABEL_5:
  v6 = v4 == 0;
  v7 = 100 - v4;
  v8 = &v2[v4];
LABEL_10:
  __snprintf_chk(v8, v7, 1LL, -1LL, v6 + 4266619, (char *)&unk_412B60 + 4 * v5);
  return v2;
}

int __fastcall sub_403A10(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 v3; // rbp
  char *v4; // rax
  char *v5; // rbp
  char *v6; // rax
  bool v7; // zf
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v11; // rcx
  const char *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-98h]

  dcgettext(0LL, "parsed %s part: ", 5);
  sub_403400();
  if ( *(_QWORD *)(a2 + 168) && !*(_BYTE *)(a2 + 218) )
  {
    __fprintf_chk(stderr, 1LL, "(Y-M-D) %04ld-%02ld-%02ld", *(_QWORD *)(a2 + 40));
    *(_BYTE *)(a2 + 218) = 1;
    v2 = 1;
    if ( *(_BYTE *)(a2 + 216) == *(_BYTE *)(a2 + 223) )
      goto LABEL_5;
    fputc(32, stderr);
    goto LABEL_4;
  }
  v2 = 0;
  if ( *(_BYTE *)(a2 + 216) != *(_BYTE *)(a2 + 223) )
  {
LABEL_4:
    v3 = *(_QWORD *)(a2 + 40);
    v4 = dcgettext(0LL, "year: %04ld", 5);
    __fprintf_chk(stderr, 1LL, v4, v3);
    v2 = 1;
    *(_BYTE *)(a2 + 223) = *(_BYTE *)(a2 + 216);
  }
LABEL_5:
  if ( *(_QWORD *)(a2 + 200) && !*(_BYTE *)(a2 + 221) )
  {
    __fprintf_chk(stderr, 1LL, ((unsigned __int8)v2 ^ 1u) + 4266851LL, *(_QWORD *)(a2 + 72));
    v11 = *(_QWORD *)(a2 + 96);
    if ( v11 )
      __fprintf_chk(stderr, 1LL, ".%09d", v11);
    if ( *(_DWORD *)(a2 + 28) == 1 )
      fwrite("pm", 1uLL, 2uLL, stderr);
    v7 = *(_QWORD *)(a2 + 176) == 0LL;
    *(_BYTE *)(a2 + 221) = 1;
    v2 = 1;
    if ( !v7 )
    {
      v2 = *(_BYTE *)(a2 + 219);
      if ( !v2 )
        goto LABEL_32;
    }
  }
  else if ( *(_QWORD *)(a2 + 176) && !*(_BYTE *)(a2 + 219) )
  {
    if ( !v2 )
    {
LABEL_10:
      v5 = sub_403920(a2, (char *)&v14);
      v6 = dcgettext(0LL, "%s (day ordinal=%ld number=%d)", 5);
      __fprintf_chk(stderr, 1LL, v6, v5);
      *(_BYTE *)(a2 + 219) = 1;
      v2 = 1;
      goto LABEL_11;
    }
LABEL_32:
    fputc(32, stderr);
    goto LABEL_10;
  }
LABEL_11:
  if ( !*(_QWORD *)(a2 + 184) || *(_BYTE *)(a2 + 220) )
  {
    if ( !*(_QWORD *)(a2 + 208) || *(_BYTE *)(a2 + 222) )
    {
      if ( *(_BYTE *)(a2 + 160) )
      {
        v8 = *(_QWORD *)(a2 + 88);
        if ( !v2 )
          goto LABEL_22;
        goto LABEL_17;
      }
      return fputc(10, stderr);
    }
    v12 = (const char *)(((unsigned __int8)v2 ^ 1u) + 4266806LL);
LABEL_34:
    v13 = sub_403290(*(_DWORD *)(a2 + 24), (__int64)&v14);
    __fprintf_chk(stderr, 1LL, v12, v13);
    v7 = *(_BYTE *)(a2 + 160) == 0;
    *(_BYTE *)(a2 + 222) = 1;
    if ( v7 )
      return fputc(10, stderr);
    goto LABEL_16;
  }
  __fprintf_chk(stderr, 1LL, ((unsigned __int8)v2 ^ 1u) + 4266879LL, *(unsigned int *)(a2 + 20));
  v7 = *(_QWORD *)(a2 + 208) == 0LL;
  *(_BYTE *)(a2 + 220) = 1;
  if ( !v7 && !*(_BYTE *)(a2 + 222) )
  {
    v12 = " UTC%s";
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a2 + 160) )
  {
LABEL_16:
    v8 = *(_QWORD *)(a2 + 88);
LABEL_17:
    fputc(32, stderr);
LABEL_22:
    v9 = dcgettext(0LL, "number of seconds: %ld", 5);
    __fprintf_chk(stderr, 1LL, v9, v8);
  }
  return fputc(10, stderr);
}

__int64 __fastcall sub_403DB0(__int16 *a1)
{
  __int64 v1; // r8
  __int16 *v2; // r9
  unsigned int v3; // er15
  int v4; // ebp
  char *v5; // rbx
  __int16 *v6; // r14
  int v7; // eax
  __int16 *v8; // rcx
  __m128i v9; // xmm7
  __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // xmm7
  int v13; // ecx
  char v14; // dl
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rsi
  const __m128i *v19; // rax
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __int64 v23; // r15
  __int64 v24; // r10
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r11
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int8 *v30; // rax
  int v31; // ebp
  int v32; // ecx
  __int64 v33; // rdx
  unsigned __int8 *v34; // rsi
  char v35; // cl
  char *v36; // rsi
  _BYTE *i; // rax
  unsigned int v38; // ecx
  unsigned __int8 v39; // al
  char *j; // rcx
  const char *v41; // rsi
  const char **v42; // rbx
  __int16 *v43; // rbp
  const char **v44; // rbp
  __int64 v45; // rdx
  int v46; // ecx
  _BYTE *v47; // rsi
  __int64 v48; // rcx
  char v49; // dl
  bool v50; // al
  unsigned int v51; // esi
  unsigned __int8 *v52; // r11
  __int64 v53; // rcx
  int v54; // edi
  int v55; // ebp
  __int64 v56; // rcx
  __int64 v57; // rbp
  int v58; // edx
  char *v59; // rbp
  int v60; // er11
  int v61; // eax
  char v62; // r13
  unsigned int v63; // edi
  __m128i v64; // xmm0
  __int64 v65; // rax
  __m128i v66; // xmm0
  __int64 v67; // rax
  __int64 v68; // rdx
  __m128i v69; // xmm0
  __m128i v70; // xmm7
  __int64 v71; // rax
  int v72; // eax
  __m128i v73; // xmm4
  __m128i v74; // xmm5
  __m128i v75; // xmm6
  __int64 v76; // rsi
  unsigned int v77; // er8
  int v78; // eax
  bool v79; // r8
  unsigned __int8 *v80; // rax
  unsigned __int8 *v81; // rdx
  unsigned __int8 *v82; // rdx
  bool v83; // di
  unsigned __int8 *v84; // rdx
  bool v85; // si
  unsigned __int8 *v86; // rdx
  unsigned __int8 *v87; // rdx
  unsigned __int8 *v88; // rdx
  _BOOL8 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rdx
  char v96; // si
  char v97; // al
  unsigned __int8 *v98; // rax
  unsigned __int8 *v99; // rdx
  unsigned __int8 *v100; // rcx
  unsigned __int8 *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __m128i v105; // xmm0
  char *v106; // rax
  __int64 v107; // rdi
  const char *v108; // rsi
  char *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  unsigned __int8 *v113; // rax
  unsigned __int8 *v114; // rdx
  unsigned __int8 *v115; // rax
  int v116; // eax
  bool v117; // r8
  unsigned __int8 *v118; // rax
  unsigned __int8 *v119; // rdx
  unsigned __int8 *v120; // rdx
  bool v121; // di
  unsigned __int8 *v122; // rdx
  bool v123; // si
  unsigned __int8 *v124; // rdx
  bool v125; // r11
  unsigned __int8 *v126; // rdx
  bool v127; // r10
  unsigned __int8 *v128; // rdx
  _BOOL8 v129; // rcx
  char *v130; // rax
  __int64 v131; // rdi
  __int64 v132; // rsi
  __int64 v133; // rax
  unsigned __int8 *v134; // rdx
  unsigned __int8 *v135; // rcx
  unsigned __int8 *v136; // rax
  __int64 v137; // rax
  unsigned __int8 *v138; // rax
  unsigned __int8 *v139; // rdx
  __int64 v140; // rax
  unsigned __int8 *v141; // rax
  __int64 v142; // rax
  const char *v143; // rsi
  char *v144; // rax
  char *v145; // rax
  __int64 v146; // rdi
  __int64 v147; // rsi
  unsigned __int8 *v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // rdx
  char v155; // si
  __int64 v156; // rax
  __int64 v157; // rax
  int v158; // edx
  __int64 v159; // rax
  __int64 v160; // rdi
  __int64 v161; // rsi
  __int64 v162; // rcx
  int v163; // er8
  __int64 v164; // rdx
  unsigned __int8 *v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rdi
  __int64 v168; // rdx
  __int64 v169; // rsi
  int v170; // ecx
  __int64 v171; // rdx
  bool v172; // r8
  bool v173; // cl
  bool v174; // si
  bool v175; // di
  _BOOL8 v176; // rdx
  bool v177; // of
  unsigned __int8 v178; // al
  __m128i v179; // xmm0
  __int64 v180; // rax
  __int64 v181; // rax
  __m128i v182; // xmm7
  unsigned __int8 *v183; // rax
  __m128i v184; // xmm0
  unsigned __int8 *v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rcx
  char v190; // al
  __m128i v191; // xmm0
  unsigned __int8 *v192; // rax
  int v193; // eax
  bool v194; // r8
  unsigned __int8 *v195; // rax
  unsigned __int8 *v196; // rdx
  unsigned __int8 *v197; // rdx
  bool v198; // di
  unsigned __int8 *v199; // rdx
  bool v200; // si
  unsigned __int8 *v201; // rdx
  bool v202; // r11
  unsigned __int8 *v203; // rdx
  bool v204; // r10
  unsigned __int8 *v205; // rdx
  _BOOL8 v206; // rcx
  __int64 v207; // r9
  char *v208; // rbp
  int v209; // edx
  unsigned int v210; // eax
  bool v211; // cf
  _BOOL4 v212; // eax
  __int64 v213; // rbp
  const char *v214; // rsi
  char **v215; // rbx
  _BOOL4 v216; // ebp
  bool v217; // dl
  bool v218; // zf
  const char *v219; // rsi
  char **v220; // rcx
  __int64 v221; // rbp
  char **v222; // rax
  __m128i v223; // xmm7
  unsigned __int8 *v224; // rax
  bool v225; // r8
  bool v226; // cl
  bool v227; // dl
  bool v228; // si
  _BOOL8 v229; // rdi
  _BOOL8 v230; // rdi
  __int64 v231; // rax
  char *v232; // rcx
  int v233; // er8
  char *v234; // rbx
  char v235; // dl
  const char *v236; // rsi
  char *v237; // r15
  const char **v238; // rbx
  int v239; // ebp
  int v240; // eax
  const char **v241; // rcx
  const char *v242; // rsi
  char *v243; // r15
  const char **v244; // rbx
  int v245; // ebp
  int v246; // eax
  const char **v247; // r10
  char v248; // al
  char *v249; // rsi
  char *v250; // rcx
  char **v251; // rcx
  char *v252; // rsi
  __int64 v253; // [rsp-20h] [rbp-608h]
  __int64 v254; // [rsp-20h] [rbp-608h]
  __int64 v255; // [rsp-18h] [rbp-600h]
  __int64 v256; // [rsp-18h] [rbp-600h]
  __int64 v257; // [rsp-10h] [rbp-5F8h]
  __int64 v258; // [rsp-10h] [rbp-5F8h]
  __int64 v259; // [rsp+8h] [rbp-5E0h]
  int v260; // [rsp+8h] [rbp-5E0h]
  unsigned int v261; // [rsp+8h] [rbp-5E0h]
  unsigned int v262; // [rsp+8h] [rbp-5E0h]
  __int16 *v263; // [rsp+8h] [rbp-5E0h]
  int v264; // [rsp+8h] [rbp-5E0h]
  __int64 v265; // [rsp+10h] [rbp-5D8h]
  char *v266; // [rsp+10h] [rbp-5D8h]
  __int64 v267; // [rsp+10h] [rbp-5D8h]
  __int64 v268; // [rsp+10h] [rbp-5D8h]
  __int16 *v269; // [rsp+10h] [rbp-5D8h]
  int v270; // [rsp+18h] [rbp-5D0h]
  __int64 v271; // [rsp+18h] [rbp-5D0h]
  char v272; // [rsp+18h] [rbp-5D0h]
  char v273; // [rsp+18h] [rbp-5D0h]
  unsigned int v274; // [rsp+24h] [rbp-5C4h]
  __int64 v275; // [rsp+28h] [rbp-5C0h]
  __int64 v276; // [rsp+30h] [rbp-5B8h]
  __int64 v277; // [rsp+38h] [rbp-5B0h]
  __int64 v278; // [rsp+40h] [rbp-5A8h]
  __int16 *v279; // [rsp+48h] [rbp-5A0h]
  __int64 v280; // [rsp+50h] [rbp-598h]
  __int64 v281; // [rsp+58h] [rbp-590h]
  char *v282; // [rsp+60h] [rbp-588h]
  __int64 v283; // [rsp+68h] [rbp-580h]
  __int64 v284; // [rsp+70h] [rbp-578h]
  unsigned __int8 *v285; // [rsp+78h] [rbp-570h]
  char s1[3]; // [rsp+80h] [rbp-568h]
  char v287; // [rsp+83h] [rbp-565h]
  _BYTE v288[5]; // [rsp+93h] [rbp-555h]
  __int16 v289; // [rsp+A0h] [rbp-548h]
  __int16 v290; // [rsp+C6h] [rbp-522h]
  __int128 v291; // [rsp+D0h] [rbp-518h]
  __int128 v292; // [rsp+E0h] [rbp-508h]
  __int128 v293; // [rsp+F0h] [rbp-4F8h]
  __int64 v294; // [rsp+100h] [rbp-4E8h]
  __m128i v295; // [rsp+110h] [rbp-4D8h]
  __m128i v296; // [rsp+120h] [rbp-4C8h]
  __m128i v297; // [rsp+130h] [rbp-4B8h]
  __int64 v298; // [rsp+140h] [rbp-4A8h]
  char v299; // [rsp+150h] [rbp-498h]

  v1 = 0LL;
  v2 = a1;
  v3 = 38;
  v4 = -2;
  v289 = 0;
  v5 = &v299;
  v6 = &v289;
  v274 = 0;
LABEL_2:
  if ( v4 != -2 )
    goto LABEL_3;
  v30 = *(unsigned __int8 **)v2;
  v31 = **(unsigned __int8 **)v2;
  v32 = **(unsigned __int8 **)v2;
  while ( 1 )
  {
LABEL_31:
    LODWORD(v33) = v32;
    if ( (unsigned __int8)v32 > 0x20u )
      goto LABEL_55;
    if ( !((1LL << v32) & 0x100003E00LL) )
    {
LABEL_36:
      if ( (unsigned int)(v31 - 48) > 9 )
      {
        v35 = v31 - 65;
        if ( (unsigned int)(v31 - 65) > 0x39 )
          goto LABEL_27;
LABEL_38:
        if ( !((1LL << v35) & 0x3FFFFFF03FFFFFFLL) )
          goto LABEL_58;
        v36 = s1;
        for ( i = (_BYTE *)(*(_QWORD *)v2 + 1LL); ; ++i )
        {
          if ( v36 < v288 )
            *v36++ = v33;
          *(_QWORD *)v2 = i;
          LOBYTE(v33) = *i;
          v38 = (unsigned __int8)*i - 65;
          if ( (v38 > 0x39 || !((1LL << v38) & 0x3FFFFFF03FFFFFFLL)) && (_BYTE)v33 != 46 )
            break;
        }
        *v36 = 0;
        v39 = s1[0];
        for ( j = s1; *j; v39 = *j )
        {
          if ( (unsigned int)v39 - 97 < 0x1A )
            v39 -= 32;
          *(++j - 1) = v39;
        }
        v266 = v5;
        v41 = "AM";
        v42 = (const char **)&off_4134C0;
        v260 = v1;
        v43 = v2;
        do
        {
          if ( !strcmp(s1, v41) )
          {
            v2 = v43;
            v44 = v42;
            v1 = v260;
            v5 = v266;
            v45 = *((int *)v44 + 3);
            v4 = *((_DWORD *)v44 + 2);
            goto LABEL_54;
          }
          v42 += 2;
          v41 = *v42;
        }
        while ( *v42 );
        v207 = (__int64)v43;
        v208 = s1;
        do
        {
          v209 = *(_DWORD *)v208;
          v208 += 4;
          v210 = ~v209 & (v209 - 16843009) & 0x80808080;
        }
        while ( !v210 );
        if ( !(~v209 & (v209 - 16843009) & 0x8080) )
          LOBYTE(v210) = (~v209 & (v209 - 16843009) & 0x80808080) >> 16;
        if ( !(~v209 & (v209 - 16843009) & 0x8080) )
          v208 += 2;
        v211 = __CFADD__((_BYTE)v210, (_BYTE)v210);
        v212 = 1;
        v213 = &v208[-v211 - 3] - s1;
        if ( v213 != 3 )
        {
          v212 = 0;
          if ( v213 == 4 )
            v212 = v287 == 46;
        }
        v214 = "JANUARY";
        v277 = v213;
        v215 = &off_413320;
        v216 = v212;
        v271 = v207;
        do
        {
          if ( v216 )
            v217 = strncmp(s1, v214, 3uLL) == 0;
          else
            v217 = strcmp(s1, v214) == 0;
          if ( v217 )
            goto LABEL_257;
          v215 += 2;
          v214 = *v215;
        }
        while ( *v215 );
        v5 = v266;
        v221 = v277;
        LODWORD(v278) = v260;
        v222 = sub_403630(v271, s1);
        v2 = (__int16 *)v271;
        v1 = (int)v278;
        if ( !v222 )
        {
          v218 = memcmp(s1, "DST", 4uLL) == 0;
          v219 = "YEAR";
          if ( v218 )
          {
            *(_QWORD *)&v291 = 0LL;
            v4 = 259;
            goto LABEL_72;
          }
          v215 = &off_413260;
          v260 = v278;
          LOBYTE(v277) = 0;
          while ( strcmp(s1, v219) )
          {
            v215 += 2;
            v219 = *v215;
            if ( !*v215 )
            {
              v232 = &s1[v221 - 1];
              v233 = v260;
              v234 = v266;
              v235 = v277;
              v2 = (__int16 *)v271;
              if ( *v232 == 83 )
              {
                v262 = v3;
                v242 = "YEAR";
                v243 = v266;
                v268 = v221;
                v244 = (const char **)&off_413260;
                v245 = v233;
                *v232 = 0;
                do
                {
                  v278 = (__int64)v2;
                  v277 = (__int64)v232;
                  v273 = v235;
                  v246 = strcmp(s1, v242);
                  v235 = v273;
                  v232 = (char *)v277;
                  v2 = (__int16 *)v278;
                  if ( !v246 )
                  {
                    v247 = v244;
                    v1 = v245;
                    v5 = v243;
                    v3 = v262;
                    v45 = *((int *)v247 + 3);
                    v4 = *((_DWORD *)v247 + 2);
                    goto LABEL_54;
                  }
                  v244 += 2;
                  v242 = *v244;
                }
                while ( *v244 );
                v233 = v245;
                v234 = v243;
                v221 = v268;
                v3 = v262;
                *(_BYTE *)v277 = 83;
              }
              v261 = v3;
              v236 = "TOMORROW";
              v237 = v234;
              v267 = v221;
              v238 = (const char **)&off_413100;
              v239 = v233;
              do
              {
                v277 = (__int64)v2;
                v272 = v235;
                v240 = strcmp(s1, v236);
                v235 = v272;
                v2 = (__int16 *)v277;
                if ( !v240 )
                {
                  v241 = v238;
                  v1 = v239;
                  v5 = v237;
                  v3 = v261;
                  v45 = *((int *)v241 + 3);
                  v4 = *((_DWORD *)v241 + 2);
                  goto LABEL_54;
                }
                v238 += 2;
                v236 = *v238;
              }
              while ( *v238 );
              v1 = v239;
              v5 = v237;
              v248 = s1[0];
              v3 = v261;
              if ( v267 == 1 )
              {
                v251 = &off_412C20;
                if ( s1[0] == 65 )
                {
                  *(_QWORD *)&v291 = -3600LL;
                  v4 = 273;
                  goto LABEL_72;
                }
                while ( 1 )
                {
                  v252 = v251[2];
                  if ( !v252 )
                    break;
                  if ( *v252 == s1[0] )
                  {
                    v45 = *((int *)v251 + 7);
                    v4 = *((_DWORD *)v251 + 6);
                    goto LABEL_54;
                  }
                  v251 += 2;
                }
              }
              v249 = s1;
              v250 = s1;
              if ( !s1[0] )
                goto LABEL_294;
              do
              {
                if ( v248 == 46 )
                  v235 = 1;
                else
                  ++v250;
                v248 = *++v249;
                *v250 = *v249;
              }
              while ( v248 );
              if ( !v235 || (v263 = v2, v222 = sub_403630((__int64)v2, s1), v2 = v263, v1 = v239, !v222) )
              {
LABEL_294:
                if ( !*((_BYTE *)v2 + 217) )
                  goto LABEL_115;
                v269 = v2;
                v264 = v1;
                v4 = 63;
                dcgettext(0LL, "error: unknown word '%s'\n", 5);
                sub_403400();
                v7 = 2;
                v1 = v264;
                v2 = v269;
                goto LABEL_73;
              }
              goto LABEL_259;
            }
          }
LABEL_257:
          v220 = v215;
          v1 = v260;
          v5 = v266;
          v2 = (__int16 *)v271;
          v45 = *((int *)v220 + 3);
          v4 = *((_DWORD *)v220 + 2);
          goto LABEL_54;
        }
LABEL_259:
        v45 = *((int *)v222 + 3);
        v4 = *((_DWORD *)v222 + 2);
LABEL_54:
        *(_QWORD *)&v291 = v45;
LABEL_3:
        if ( v4 <= 0 )
          goto LABEL_28;
        if ( v4 > 277 )
        {
          v3 += 2;
          v7 = 2;
          goto LABEL_6;
        }
        goto LABEL_72;
      }
LABEL_103:
      v30 = *(unsigned __int8 **)v2;
      v51 = 0;
LABEL_75:
      v52 = v30;
      v53 = 0LL;
      v54 = (unsigned __int8)v33;
      while ( 1 )
      {
        v55 = v54 - 48;
        if ( v51 == -1 )
          v55 = 48 - v54;
        v177 = __OFADD__(v55, v53);
        v56 = v55 + v53;
        if ( v177 )
          goto LABEL_115;
        v54 = v52[1];
        v57 = (__int64)(v52 + 1);
        if ( (unsigned int)(v54 - 48) > 9 )
          break;
        v177 = (unsigned __int128)(10 * (__int128)v56) >> 64 != 0;
        v53 = 10 * v56;
        if ( v177 )
          goto LABEL_115;
        ++v52;
      }
      if ( (v52[1] & 0xFD) != 44 || (v58 = (char)v52[2] - 48, (unsigned int)v58 > 9) )
      {
        *(_QWORD *)v2 = v57;
        v275 = v56;
        LOBYTE(v291) = (v51 & 0x80000000) != 0;
        v276 = v57 - (_QWORD)v30;
        v7 = 20 - (v51 >= 1);
        v4 = 275 - (v51 >= 1);
        goto LABEL_73;
      }
      v59 = (char *)(v52 + 3);
      v60 = (char)v52[3];
      v61 = 8;
      v62 = v60;
      do
      {
        v63 = v60 - 48;
        v58 *= 10;
        if ( (unsigned int)(v60 - 48) <= 9 )
        {
          v60 = v59[1];
          v58 += v63;
          ++v59;
          v62 = v60;
          v63 = v60 - 48;
        }
        --v61;
      }
      while ( v61 );
      if ( v51 != -1 )
      {
        if ( v63 > 9 )
          goto LABEL_250;
        goto LABEL_88;
      }
      if ( v63 <= 9 )
      {
        if ( v62 != 48 )
        {
LABEL_113:
          ++v58;
          if ( (unsigned int)(*v59 - 48) > 9 )
            goto LABEL_91;
          do
LABEL_88:
            ++v59;
          while ( (unsigned int)(*v59 - 48) <= 9 );
          if ( (v51 & 0x80000000) != 0 && v58 )
            goto LABEL_91;
LABEL_250:
          *(_QWORD *)v2 = v59;
          v275 = v58;
          *(_QWORD *)&v291 = v56;
          v7 = 22 - (v51 >= 1);
          v4 = 277 - (v51 >= 1);
          goto LABEL_73;
        }
        while ( (unsigned int)(*++v59 - 48) <= 9 )
        {
          if ( *v59 != 48 )
            goto LABEL_113;
        }
      }
      if ( !v58 )
      {
        *(_QWORD *)v2 = v59;
        v7 = 21;
        v4 = 276;
        *(_QWORD *)&v291 = v56;
        v275 = 0LL;
        goto LABEL_73;
      }
LABEL_91:
      if ( v56 != 0x8000000000000000LL )
      {
        *(_QWORD *)v2 = v59;
        v4 = 276;
        *(_QWORD *)&v291 = v56 - 1;
        v275 = 1000000000 - v58;
        v7 = 21;
        goto LABEL_73;
      }
LABEL_115:
      v7 = 2;
      v4 = 63;
      goto LABEL_73;
    }
    v34 = v30 + 1;
    while ( 1 )
    {
      *(_QWORD *)v2 = v34;
      v31 = *v34;
      v30 = v34;
      LODWORD(v33) = *v34;
      if ( (unsigned __int8)v31 > 0x20u )
        break;
      ++v34;
      if ( !((1LL << v33) & 0x100003E00LL) )
        goto LABEL_36;
    }
LABEL_55:
    v46 = (v33 - 43) & 0xFFFFFFFD;
    if ( (unsigned int)(v31 - 48) <= 9 )
    {
      v50 = (_BYTE)v33 == 45;
      if ( (_BYTE)v46 )
        goto LABEL_103;
      goto LABEL_67;
    }
    if ( (_BYTE)v46 )
      break;
    v50 = (_BYTE)v33 == 45;
LABEL_67:
    v33 = *(_QWORD *)v2 + 1LL;
    v51 = (unsigned __int8)v50 < 1u ? 1 : -1;
    while ( 1 )
    {
      *(_QWORD *)v2 = v33;
      v30 = (unsigned __int8 *)v33;
      LOBYTE(v33) = *(_BYTE *)v33;
      v32 = (unsigned __int8)v33;
      if ( (unsigned __int8)v33 > 0x20u )
        break;
      v33 = (__int64)(v30 + 1);
      if ( !((1LL << v32) & 0x100003E00LL) )
      {
        v31 = (unsigned __int8)v32;
        goto LABEL_31;
      }
    }
    v31 = (unsigned __int8)v33;
    if ( (unsigned int)(unsigned __int8)v33 - 48 <= 9 )
      goto LABEL_75;
  }
  v35 = v31 - 65;
  if ( (unsigned int)(v31 - 65) <= 0x39 )
    goto LABEL_38;
LABEL_58:
  if ( (_BYTE)v33 != 40 )
  {
LABEL_27:
    *(_QWORD *)v2 = v30 + 1;
    v4 = *v30;
    if ( !(_BYTE)v4 )
      goto LABEL_28;
LABEL_72:
    v7 = (unsigned __int8)byte_413820[v4];
LABEL_73:
    v3 += v7;
    goto LABEL_6;
  }
  v47 = *(_BYTE **)v2;
  v48 = 0LL;
  while ( 1 )
  {
    v30 = v47 + 1;
    *(_QWORD *)v2 = v47 + 1;
    v49 = *v47;
    if ( !*v47 )
      break;
    if ( v49 == 40 )
      ++v48;
    else
      v48 -= v49 == 41;
    if ( !v48 )
    {
      v31 = (unsigned __int8)v47[1];
      v32 = (unsigned __int8)v47[1];
      goto LABEL_31;
    }
    ++v47;
  }
LABEL_28:
  v7 = 0;
  v4 = 0;
LABEL_6:
  if ( v3 <= 0x70 && byte_4135E0[v3] == v7 )
  {
    v1 = (unsigned __int8)byte_413660[v3];
    if ( byte_413660[v3] )
    {
      v8 = v6;
      v4 = -2;
      v5 += 56;
      v274 = (v274 < 1) + v274 - 1;
      *((_QWORD *)&v291 + 1) = v275;
      v9 = _mm_load_si128((const __m128i *)&v291);
      *(_QWORD *)&v292 = v276;
      v10 = v294;
      v11 = _mm_load_si128((const __m128i *)&v292);
      *(__m128i *)v5 = v9;
      v12 = _mm_load_si128((const __m128i *)&v293);
      *((_QWORD *)v5 + 6) = v10;
      *((__m128i *)v5 + 1) = v11;
      *((__m128i *)v5 + 2) = v12;
      goto LABEL_10;
    }
    v67 = *((_QWORD *)v5 + 13);
    v8 = v6;
    v68 = (__int64)v5;
    v69 = _mm_loadu_si128((const __m128i *)(v5 + 72));
    v23 = *((_QWORD *)v5 + 7);
    v295 = _mm_loadu_si128((const __m128i *)(v5 + 56));
    v70 = _mm_loadu_si128((const __m128i *)(v5 + 88));
    v24 = *((_QWORD *)v5 + 8);
    v26 = *((_QWORD *)v5 + 9);
    v298 = v67;
    v71 = *((_QWORD *)v5 + 11);
    v27 = *((_QWORD *)v5 + 10);
    v296 = v69;
    v297 = v70;
    v265 = v71;
    v259 = *((_QWORD *)v5 + 12);
    v270 = *((_DWORD *)v5 + 26);
    v72 = -28;
    goto LABEL_100;
  }
  while ( 1 )
  {
    v13 = (unsigned __int8)byte_413720[v1];
    v14 = byte_413720[v1];
    if ( byte_413720[v1] )
    {
      v18 = (unsigned __int8)byte_413520[(unsigned __int8)byte_413720[v1]];
      v19 = (const __m128i *)&v5[56 * (1 - (unsigned __int8)byte_413520[(unsigned __int8)byte_413720[v1]])];
      v20 = _mm_loadu_si128(v19);
      v21 = _mm_loadu_si128(v19 + 1);
      v22 = _mm_loadu_si128(v19 + 2);
      v23 = v19->m128i_i64[0];
      v24 = v19->m128i_i64[1];
      v298 = v19[3].m128i_i64[0];
      v25 = v19[2].m128i_i64[0];
      v26 = v19[1].m128i_i64[0];
      v295 = v20;
      v27 = v19[1].m128i_i64[1];
      v296 = v21;
      v265 = v25;
      v28 = v19[2].m128i_i64[1];
      LODWORD(v19) = v19[3].m128i_i32[0];
      v297 = v22;
      v259 = v28;
      v270 = (int)v19;
      v29 = (unsigned __int8)(v14 - 4);
      switch ( (_BYTE)v29 )
      {
        case 0:
          v105 = _mm_loadu_si128((const __m128i *)v5);
          *((_BYTE *)v2 + 160) = 1;
          *(__m128i *)(v2 + 44) = v105;
          v279 = (__int16 *)v24;
          v278 = v27;
          v277 = (__int64)v2;
          v106 = dcgettext(0LL, aNumberOf, 5);
          v8 = v6 - 2;
          v68 = (__int64)(v5 - 112);
          LODWORD(v1) = -93;
          v107 = (__int64)v106;
          v72 = 2;
          goto LABEL_148;
        case 3:
          v279 = (__int16 *)v24;
          v108 = "datetime";
          v278 = v27;
          ++*((_QWORD *)v2 + 25);
          ++*((_QWORD *)v2 + 21);
          v277 = (__int64)v2;
          goto LABEL_152;
        case 4:
          v279 = (__int16 *)v24;
          v108 = "--time" + 2;
          v278 = v27;
          ++*((_QWORD *)v2 + 25);
          v277 = (__int64)v2;
          goto LABEL_152;
        case 5:
          v279 = (__int16 *)v24;
          v108 = (const char *)&unk_411BF0;
          v278 = v27;
          ++*((_QWORD *)v2 + 23);
          v277 = (__int64)v2;
          goto LABEL_152;
        case 6:
          v279 = (__int16 *)v24;
          v108 = "zone";
          ++*((_QWORD *)v2 + 26);
          v278 = v27;
          v277 = (__int64)v2;
          goto LABEL_152;
        case 7:
          v279 = (__int16 *)v24;
          v108 = "date";
          v278 = v27;
          ++*((_QWORD *)v2 + 21);
          v277 = (__int64)v2;
          goto LABEL_152;
        case 8:
          v279 = (__int16 *)v24;
          v108 = "day";
          v278 = v27;
          ++*((_QWORD *)v2 + 22);
          v277 = (__int64)v2;
LABEL_152:
          v109 = dcgettext(0LL, v108, 5);
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          LODWORD(v1) = -93;
          v107 = (__int64)v109;
          v72 = 4;
LABEL_148:
          v2 = (__int16 *)v277;
          v27 = v278;
          v24 = (__int64)v279;
          if ( !*(_BYTE *)(v277 + 217) )
            break;
          LODWORD(v283) = -93;
          v282 = (char *)v68;
          LODWORD(v281) = v72;
          v280 = (__int64)v279;
          v279 = v8;
          sub_403A10(v107, v277);
          goto LABEL_150;
        case 9:
          v279 = v2;
          v143 = "relative";
          v278 = v24;
          v277 = v27;
          goto LABEL_184;
        case 0xA:
          v279 = v2;
          v278 = v24;
          v277 = v27;
          v145 = dcgettext(0LL, "number", 5);
          v2 = v279;
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v146 = (__int64)v145;
          LODWORD(v1) = -93;
          v72 = 4;
          v27 = v277;
          v24 = v278;
          if ( !*((_BYTE *)v279 + 217) )
            break;
          v147 = (__int64)v279;
          LODWORD(v283) = -93;
          v282 = v5 - 56;
          LODWORD(v281) = 4;
          v280 = v278;
          v279 = v6 - 1;
          v278 = v277;
          v277 = (__int64)v2;
          sub_403A10(v146, v147);
          goto LABEL_150;
        case 0xB:
          v279 = v2;
          v143 = "hybrid";
          v278 = v24;
          v277 = v27;
LABEL_184:
          v144 = dcgettext(0LL, v143, 5);
          v2 = v279;
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v131 = (__int64)v144;
          LODWORD(v1) = -93;
          v72 = 4;
          v27 = v277;
          v24 = v278;
          if ( !*((_BYTE *)v279 + 217) )
            break;
          LODWORD(v283) = -93;
          v132 = (__int64)v279;
          v282 = v5 - 56;
          LODWORD(v281) = 4;
          v280 = v278;
          v279 = v6 - 1;
          v278 = v277;
          v277 = (__int64)v2;
          goto LABEL_176;
        case 0xE:
          v141 = (unsigned __int8 *)*((_QWORD *)v5 - 6);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          *((_QWORD *)v2 + 10) = 0LL;
          *((_QWORD *)v2 + 11) = 0LL;
          LODWORD(v1) = -93;
          *((_QWORD *)v2 + 9) = v141;
          v142 = *(_QWORD *)v5;
          *((_QWORD *)v2 + 12) = 0LL;
          *((_DWORD *)v2 + 7) = v142;
          v72 = 7;
          break;
        case 0xF:
          v138 = (unsigned __int8 *)*((_QWORD *)v5 - 6);
          v139 = (unsigned __int8 *)*((_QWORD *)v5 - 20);
          v8 = v6 - 4;
          *((_QWORD *)v2 + 11) = 0LL;
          *((_QWORD *)v2 + 12) = 0LL;
          LODWORD(v1) = -93;
          *((_QWORD *)v2 + 10) = v138;
          v140 = *(_QWORD *)v5;
          *((_QWORD *)v2 + 9) = v139;
          v68 = (__int64)(v5 - 224);
          *((_DWORD *)v2 + 7) = v140;
          v72 = 7;
          break;
        case 0x10:
          v134 = (unsigned __int8 *)*((_QWORD *)v5 - 20);
          LODWORD(v1) = -93;
          v135 = (unsigned __int8 *)*((_QWORD *)v5 - 34);
          *((_QWORD *)v2 + 11) = *((_QWORD *)v5 - 7);
          v136 = (unsigned __int8 *)*((int *)v5 - 12);
          *((_QWORD *)v2 + 9) = v135;
          v8 = v6 - 6;
          *((_QWORD *)v2 + 12) = v136;
          v137 = *(_QWORD *)v5;
          *((_QWORD *)v2 + 10) = v134;
          v68 = (__int64)(v5 - 336);
          *((_DWORD *)v2 + 7) = v137;
          v72 = 7;
          break;
        case 0x12:
          v115 = (unsigned __int8 *)*((_QWORD *)v5 - 6);
          *((_QWORD *)v2 + 10) = 0LL;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          *((_QWORD *)v2 + 11) = 0LL;
          LODWORD(v1) = 20;
          *((_QWORD *)v2 + 9) = v115;
          v72 = 8;
          *((_QWORD *)v2 + 12) = 0LL;
          *((_DWORD *)v2 + 7) = 2;
          break;
        case 0x13:
          v113 = (unsigned __int8 *)*((_QWORD *)v5 - 6);
          v114 = (unsigned __int8 *)*((_QWORD *)v5 - 20);
          *((_QWORD *)v2 + 11) = 0LL;
          v8 = v6 - 4;
          *((_QWORD *)v2 + 12) = 0LL;
          LODWORD(v1) = 20;
          *((_QWORD *)v2 + 9) = v114;
          v68 = (__int64)(v5 - 224);
          *((_QWORD *)v2 + 10) = v113;
          v72 = 8;
          *((_DWORD *)v2 + 7) = 2;
          break;
        case 0x14:
          v98 = (unsigned __int8 *)*((_QWORD *)v5 - 7);
          v99 = (unsigned __int8 *)*((_QWORD *)v5 - 20);
          *((_DWORD *)v2 + 7) = 2;
          LODWORD(v1) = 20;
          v100 = (unsigned __int8 *)*((_QWORD *)v5 - 34);
          *((_QWORD *)v2 + 11) = v98;
          v101 = (unsigned __int8 *)*((int *)v5 - 12);
          *((_QWORD *)v2 + 9) = v100;
          v8 = v6 - 6;
          *((_QWORD *)v2 + 10) = v99;
          v68 = (__int64)(v5 - 336);
          *((_QWORD *)v2 + 12) = v101;
          v72 = 8;
          break;
        case 0x17:
          v93 = *((_QWORD *)v5 - 5);
          v94 = *(_QWORD *)v5;
          v279 = (__int16 *)v24;
          v95 = *((_QWORD *)v5 - 6);
          v96 = *(v5 - 56);
          v278 = v27;
          ++*((_QWORD *)v2 + 26);
          v277 = (__int64)v2;
          v97 = sub_403570((_DWORD *)v2 + 6, v96, v95, v93, v94);
          v2 = (__int16 *)v277;
          v27 = v278;
          v24 = (__int64)v279;
          if ( !v97 )
            return 1LL;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -27;
          v72 = 10;
          break;
        case 0x18:
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          LODWORD(v1) = -93;
          *((_DWORD *)v2 + 5) = *(_QWORD *)v5;
          v72 = 11;
          break;
        case 0x19:
          *((_DWORD *)v2 + 5) = 1;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          ++*((_QWORD *)v2 + 24);
          v72 = 11;
          break;
        case 0x1A:
          v92 = *(_QWORD *)v5;
          goto LABEL_121;
        case 0x1B:
          *((_DWORD *)v2 + 6) = 25200;
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          LODWORD(v1) = -93;
          v72 = 12;
          break;
        case 0x1C:
          v133 = *((_QWORD *)v5 - 7);
          v279 = (__int16 *)v24;
          v278 = v27;
          *((_DWORD *)v2 + 6) = v133;
          goto LABEL_172;
        case 0x1D:
          v279 = (__int16 *)v24;
          v278 = v27;
          *((_DWORD *)v2 + 6) = 25200;
LABEL_172:
          v116 = *((_DWORD *)v5 + 12);
          v117 = __OFADD__(*((_DWORD *)v2 + 38), v116);
          *((_DWORD *)v2 + 38) += v116;
          v118 = (unsigned __int8 *)*((_QWORD *)v2 + 18);
          v119 = &v118[*((_QWORD *)v5 + 5)];
          LOBYTE(v118) = __OFADD__(*((_QWORD *)v5 + 5), v118);
          *((_QWORD *)v2 + 18) = v119;
          v120 = (unsigned __int8 *)*((_QWORD *)v2 + 17);
          v121 = __OFADD__(*((_QWORD *)v5 + 4), v120);
          *((_QWORD *)v2 + 17) = &v120[*((_QWORD *)v5 + 4)];
          v122 = (unsigned __int8 *)*((_QWORD *)v2 + 16);
          v123 = __OFADD__(*((_QWORD *)v5 + 3), v122);
          *((_QWORD *)v2 + 16) = &v122[*((_QWORD *)v5 + 3)];
          v124 = (unsigned __int8 *)*((_QWORD *)v2 + 15);
          v125 = __OFADD__(*((_QWORD *)v5 + 2), v124);
          *((_QWORD *)v2 + 15) = &v124[*((_QWORD *)v5 + 2)];
          v126 = (unsigned __int8 *)*((_QWORD *)v2 + 14);
          v127 = __OFADD__(*((_QWORD *)v5 + 1), v126);
          *((_QWORD *)v2 + 14) = &v126[*((_QWORD *)v5 + 1)];
          v128 = (unsigned __int8 *)*((_QWORD *)v2 + 13);
          v129 = __OFADD__(*(_QWORD *)v5, v128);
          *((_QWORD *)v2 + 13) = &v128[*(_QWORD *)v5];
          if ( (unsigned __int8)(v125 | v123 | v121 | v117 | (unsigned __int8)v118) | v127 || v129 )
            return 1LL;
          *((_BYTE *)v2 + 161) = 1;
          v277 = (__int64)v2;
          v130 = dcgettext(0LL, "relative", 5);
          v2 = (__int16 *)v277;
          v8 = v6 - 2;
          v68 = (__int64)(v5 - 112);
          v131 = (__int64)v130;
          LODWORD(v1) = -93;
          v72 = 12;
          v27 = v278;
          v24 = (__int64)v279;
          if ( *(_BYTE *)(v277 + 217) )
          {
            LODWORD(v283) = -93;
            v132 = v277;
            v282 = v5 - 112;
            LODWORD(v281) = 12;
            v280 = (__int64)v279;
            v279 = v6 - 2;
LABEL_176:
            sub_4036F0(v131, v132);
LABEL_150:
            v2 = (__int16 *)v277;
            v27 = v278;
            v8 = v279;
            v24 = v280;
            v72 = v281;
            v68 = (__int64)v282;
            LODWORD(v1) = v283;
          }
          break;
        case 0x1E:
          v152 = *((_QWORD *)v5 - 5);
          v153 = *(_QWORD *)v5;
          v279 = (__int16 *)v24;
          v154 = *((_QWORD *)v5 - 6);
          v155 = *(v5 - 56);
          v278 = v27;
          v277 = (__int64)v2;
          if ( !(unsigned __int8)sub_403570((_DWORD *)v2 + 6, v155, v154, v152, v153) )
            return 1LL;
          v2 = (__int16 *)v277;
          v156 = *(int *)(v277 + 24);
          v177 = __OFADD__(*((_QWORD *)v5 - 14), v156);
          v157 = *((_QWORD *)v5 - 14) + v156;
          v158 = v177;
          *(_DWORD *)(v277 + 24) = v157;
          if ( v157 != (int)v157 )
            v158 = 1;
          if ( v158 )
            return 1LL;
          v68 = (__int64)(v5 - 168);
          v8 = v6 - 3;
          LODWORD(v1) = -93;
          v72 = 12;
          v27 = v278;
          v24 = (__int64)v279;
          break;
        case 0x1F:
          LODWORD(v92) = *(_DWORD *)v5 + 3600;
LABEL_121:
          *((_DWORD *)v2 + 6) = v92;
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          LODWORD(v1) = -93;
          v72 = 12;
          break;
        case 0x20:
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          *((_DWORD *)v2 + 6) = *((_DWORD *)v5 - 14) + 3600;
          v72 = 12;
          break;
        case 0x21:
          v151 = *(_QWORD *)v5;
          *((_QWORD *)v2 + 1) = 0LL;
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          LODWORD(v1) = -93;
          *((_DWORD *)v2 + 4) = v151;
          v72 = 13;
          break;
        case 0x22:
          v150 = *((_QWORD *)v5 - 7);
          *((_QWORD *)v2 + 1) = 0LL;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          *((_DWORD *)v2 + 4) = v150;
          v72 = 13;
          break;
        case 0x23:
          v148 = (unsigned __int8 *)*((_QWORD *)v5 - 7);
          goto LABEL_192;
        case 0x24:
          v148 = (unsigned __int8 *)*((_QWORD *)v5 - 6);
LABEL_192:
          *((_QWORD *)v2 + 1) = v148;
          v149 = *(_QWORD *)v5;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          *((_BYTE *)v2 + 224) = 1;
          LODWORD(v1) = -93;
          *((_DWORD *)v2 + 4) = v149;
          v72 = 13;
          break;
        case 0x25:
          v8 = v6 - 3;
          v68 = (__int64)(v5 - 168);
          LODWORD(v1) = -93;
          *((_QWORD *)v2 + 7) = *((_QWORD *)v5 - 13);
          *((_QWORD *)v2 + 8) = *((_QWORD *)v5 + 1);
          v72 = 14;
          break;
        case 0x26:
          v189 = *((_QWORD *)v5 - 26);
          v190 = *((_BYTE *)v2 + 217);
          if ( v189 <= 3 )
          {
            v277 = *((_QWORD *)v5 - 27);
            if ( v190 )
            {
              v280 = (__int64)v2;
              v279 = (__int16 *)v24;
              v278 = v27;
              dcgettext(0LL, "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n", 5);
              sub_403400();
              v2 = (__int16 *)v280;
              v24 = (__int64)v279;
              v27 = v278;
            }
            v223 = _mm_loadu_si128((const __m128i *)v5);
            v8 = v6 - 5;
            v68 = (__int64)(v5 - 280);
            LODWORD(v1) = -93;
            *((_QWORD *)v2 + 7) = v277;
            v224 = (unsigned __int8 *)*((_QWORD *)v5 - 13);
            *((__m128i *)v2 + 2) = v223;
            *((_QWORD *)v2 + 8) = v224;
            *((_QWORD *)v2 + 6) = *((_QWORD *)v5 + 2);
            v72 = 14;
          }
          else
          {
            if ( v190 )
            {
              v231 = *((_QWORD *)v5 - 27);
              v281 = (__int64)v2;
              v280 = v24;
              v279 = (__int16 *)v27;
              v278 = v189;
              v277 = v231;
              dcgettext(0LL, "warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n", 5);
              sub_403400();
              v2 = (__int16 *)v281;
              v24 = v280;
              v27 = (__int64)v279;
            }
            v191 = _mm_loadu_si128((const __m128i *)v5 - 14);
            v8 = v6 - 5;
            v68 = (__int64)(v5 - 280);
            LODWORD(v1) = -93;
            *((_QWORD *)v2 + 6) = *((_QWORD *)v5 - 26);
            v192 = (unsigned __int8 *)*((_QWORD *)v5 - 13);
            *((__m128i *)v2 + 2) = v191;
            *((_QWORD *)v2 + 7) = v192;
            *((_QWORD *)v2 + 8) = *((_QWORD *)v5 + 1);
            v72 = 14;
          }
          break;
        case 0x27:
          *((_QWORD *)v2 + 8) = *((_QWORD *)v5 - 13);
          *((_QWORD *)v2 + 7) = *((_QWORD *)v5 - 7);
          v188 = *((_QWORD *)v5 + 1);
          *((_QWORD *)v2 + 5) = -*((_QWORD *)v5 + 1);
          if ( v188 == 0x8000000000000000LL )
            return 1LL;
          goto LABEL_212;
        case 0x28:
          *((_QWORD *)v2 + 7) = *((_QWORD *)v5 - 14);
          v186 = *((_QWORD *)v5 - 6);
          *((_QWORD *)v2 + 8) = -*((_QWORD *)v5 - 6);
          if ( v186 == 0x8000000000000000LL )
            return 1LL;
          v187 = *((_QWORD *)v5 + 1);
          *((_QWORD *)v2 + 5) = -*((_QWORD *)v5 + 1);
          if ( v187 == 0x8000000000000000LL )
            return 1LL;
          goto LABEL_212;
        case 0x29:
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          *((_QWORD *)v2 + 7) = *((_QWORD *)v5 - 7);
          *((_QWORD *)v2 + 8) = *((_QWORD *)v5 + 1);
          v72 = 14;
          break;
        case 0x2A:
          v184 = _mm_loadu_si128((const __m128i *)v5);
          v8 = v6 - 4;
          v68 = (__int64)(v5 - 224);
          LODWORD(v1) = -93;
          *((_QWORD *)v2 + 7) = *((_QWORD *)v5 - 21);
          v185 = (unsigned __int8 *)*((_QWORD *)v5 - 13);
          *((__m128i *)v2 + 2) = v184;
          *((_QWORD *)v2 + 8) = v185;
          *((_QWORD *)v2 + 6) = *((_QWORD *)v5 + 2);
          v72 = 14;
          break;
        case 0x2B:
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          *((_QWORD *)v2 + 8) = *((_QWORD *)v5 - 6);
          *((_QWORD *)v2 + 7) = *(_QWORD *)v5;
          v72 = 14;
          break;
        case 0x2C:
          v182 = _mm_loadu_si128((const __m128i *)v5);
          *((_QWORD *)v2 + 8) = *((_QWORD *)v5 - 13);
          v183 = (unsigned __int8 *)*((_QWORD *)v5 - 7);
          *((__m128i *)v2 + 2) = v182;
          *((_QWORD *)v2 + 7) = v183;
LABEL_212:
          v8 = v6 - 3;
          v68 = (__int64)(v5 - 168);
          LODWORD(v1) = -93;
          *((_QWORD *)v2 + 6) = *((_QWORD *)v5 + 2);
          v72 = 14;
          break;
        case 0x2E:
          v179 = _mm_loadu_si128((const __m128i *)v5 - 7);
          *((_QWORD *)v2 + 6) = *((_QWORD *)v5 - 12);
          v180 = *((_QWORD *)v5 - 6);
          *((__m128i *)v2 + 2) = v179;
          *((_QWORD *)v2 + 7) = -v180;
          if ( v180 == 0x8000000000000000LL )
            return 1LL;
          v181 = *((_QWORD *)v5 + 1);
          *((_QWORD *)v2 + 8) = -*((_QWORD *)v5 + 1);
          if ( v181 == 0x8000000000000000LL )
            return 1LL;
          v68 = (__int64)(v5 - 168);
          v8 = v6 - 3;
          LODWORD(v1) = -93;
          v72 = 15;
          break;
        case 0x2F:
          v159 = *((_QWORD *)v5 - 7);
          v160 = *((_QWORD *)v5 - 6);
          v161 = *((_QWORD *)v5 - 5);
          v162 = *((_QWORD *)v5 - 4);
          v163 = *((_DWORD *)v5 - 2);
          v281 = *((_QWORD *)v2 + 18);
          v164 = *((_QWORD *)v2 + 16);
          v277 = v159;
          v278 = v160;
          v165 = (unsigned __int8 *)*((_QWORD *)v2 + 17);
          v282 = (char *)v164;
          v166 = *((_QWORD *)v2 + 15);
          v279 = (__int16 *)v161;
          v167 = *((_QWORD *)v5 - 2);
          v283 = v166;
          v168 = *((_QWORD *)v2 + 14);
          v280 = v162;
          v169 = *((_QWORD *)v5 - 3);
          v284 = v168;
          v170 = *((_DWORD *)v2 + 38);
          v285 = (unsigned __int8 *)*((_QWORD *)v2 + 13);
          v171 = v281;
          if ( *(_DWORD *)v5 < 0 )
          {
            *((_DWORD *)v2 + 38) = v170 - v163;
            v225 = __OFSUB__(v170, v163);
            v226 = __OFSUB__(v171, v167);
            *((_QWORD *)v2 + 18) = v171 - v167;
            v227 = __OFSUB__(v165, v169);
            *((_QWORD *)v2 + 17) = &v165[-v169];
            v228 = __OFSUB__(v282, v280);
            *((_QWORD *)v2 + 16) = &v282[-v280];
            v229 = __OFSUB__(v283, v279);
            *((_QWORD *)v2 + 15) = v283 - (_QWORD)v279;
            v279 = (__int16 *)v229;
            v230 = __OFSUB__(v284, v278);
            *((_QWORD *)v2 + 14) = v284 - v278;
            v278 = v230;
            v177 = __OFSUB__(v285, v277);
            *((_QWORD *)v2 + 13) = &v285[-v277];
            v178 = v278 | (unsigned __int8)v279 | (v228 || v227 || v225 || v226);
          }
          else
          {
            *((_DWORD *)v2 + 38) = v163 + v170;
            v172 = __OFADD__(v163, v170);
            v173 = __OFADD__(v167, v171);
            *((_QWORD *)v2 + 18) = v167 + v171;
            *((_QWORD *)v2 + 17) = &v165[v169];
            v281 = __OFADD__(v169, v165);
            v174 = __OFADD__(v280, v282);
            *((_QWORD *)v2 + 16) = &v282[v280];
            v175 = __OFADD__(v279, v283);
            *((_QWORD *)v2 + 15) = (char *)v279 + v283;
            v176 = __OFADD__(v278, v284);
            *((_QWORD *)v2 + 14) = v278 + v284;
            v278 = v176;
            v177 = __OFADD__(v277, v285);
            *((_QWORD *)v2 + 13) = &v285[v277];
            v178 = v278 | v175 | v174 | v281 | (v172 || v173);
          }
          if ( v177 | v178 )
            return 1LL;
          *((_BYTE *)v2 + 161) = 1;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          v72 = 16;
          break;
        case 0x30:
        case 0x31:
          v78 = *((_DWORD *)v5 + 12);
          v79 = __OFADD__(*((_DWORD *)v2 + 38), v78);
          *((_DWORD *)v2 + 38) += v78;
          v80 = (unsigned __int8 *)*((_QWORD *)v2 + 18);
          v81 = &v80[*((_QWORD *)v5 + 5)];
          LOBYTE(v80) = __OFADD__(*((_QWORD *)v5 + 5), v80);
          *((_QWORD *)v2 + 18) = v81;
          v82 = (unsigned __int8 *)*((_QWORD *)v2 + 17);
          v83 = __OFADD__(*((_QWORD *)v5 + 4), v82);
          *((_QWORD *)v2 + 17) = &v82[*((_QWORD *)v5 + 4)];
          v84 = (unsigned __int8 *)*((_QWORD *)v2 + 16);
          v85 = __OFADD__(*((_QWORD *)v5 + 3), v84);
          *((_QWORD *)v2 + 16) = &v84[*((_QWORD *)v5 + 3)];
          v86 = (unsigned __int8 *)*((_QWORD *)v2 + 15);
          v177 = __OFADD__(*((_QWORD *)v5 + 2), v86);
          *((_QWORD *)v2 + 15) = &v86[*((_QWORD *)v5 + 2)];
          v87 = (unsigned __int8 *)*((_QWORD *)v2 + 14);
          v277 = v177;
          v177 = __OFADD__(*((_QWORD *)v5 + 1), v87);
          *((_QWORD *)v2 + 14) = &v87[*((_QWORD *)v5 + 1)];
          v278 = v177;
          v88 = (unsigned __int8 *)*((_QWORD *)v2 + 13);
          v89 = __OFADD__(*(_QWORD *)v5, v88);
          *((_QWORD *)v2 + 13) = &v88[*(_QWORD *)v5];
          if ( (unsigned __int8)(v277 | v85 | v83 | v79 | (unsigned __int8)v80) | (unsigned __int8)v278 || v89 )
            return 1LL;
          *((_BYTE *)v2 + 161) = 1;
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          LODWORD(v1) = -93;
          v72 = 16;
          break;
        case 0x32:
          HIDWORD(v298) = 0;
          v23 = *((_QWORD *)v5 - 7);
          goto LABEL_163;
        case 0x33:
          HIDWORD(v298) = 0;
          v23 = *((_QWORD *)v5 - 6);
LABEL_163:
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_159;
        case 0x34:
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v72 = 17;
          v27 = 0LL;
          LODWORD(v1) = -93;
          v26 = 0LL;
          HIDWORD(v298) = 0;
          v24 = 0LL;
          v270 = 0;
          v23 = 1LL;
          v259 = 0LL;
          v265 = 0LL;
          break;
        case 0x35:
          v24 = *((_QWORD *)v5 - 7);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_145;
        case 0x36:
          v24 = *((_QWORD *)v5 - 6);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_145;
        case 0x37:
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v72 = 17;
          v27 = 0LL;
          LODWORD(v1) = -93;
          v26 = 0LL;
          v23 = 0LL;
          HIDWORD(v298) = 0;
          v270 = 0;
          v24 = 1LL;
          v259 = 0LL;
          v265 = 0LL;
          break;
        case 0x38:
          v104 = *(_QWORD *)v5 * *((_QWORD *)v5 - 7);
          v177 = (unsigned __int128)(*(__int64 *)v5 * (__int128)*((__int64 *)v5 - 7)) >> 64 != 0;
          v298 = 0LL;
          v295 = 0LL;
          v296 = 0LL;
          v297 = 0LL;
          v26 = v104;
          if ( v177 )
            return 1LL;
          goto LABEL_140;
        case 0x39:
          v103 = *(_QWORD *)v5 * *((_QWORD *)v5 - 6);
          v177 = (unsigned __int128)(*(__int64 *)v5 * (__int128)*((__int64 *)v5 - 6)) >> 64 != 0;
          v298 = 0LL;
          v295 = 0LL;
          v296 = 0LL;
          v297 = 0LL;
          v26 = v103;
          if ( v177 )
            return 1LL;
LABEL_140:
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_138;
        case 0x3A:
          v26 = *(_QWORD *)v5;
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v72 = 17;
          HIDWORD(v298) = 0;
          LODWORD(v1) = -93;
          goto LABEL_138;
        case 0x3B:
          v27 = *((_QWORD *)v5 - 7);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_135;
        case 0x3C:
          v27 = *((_QWORD *)v5 - 6);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_135;
        case 0x3D:
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v72 = 17;
          v26 = 0LL;
          LODWORD(v1) = -93;
          v24 = 0LL;
          v23 = 0LL;
          HIDWORD(v298) = 0;
          v270 = 0;
          v27 = 1LL;
          v259 = 0LL;
          v265 = 0LL;
          break;
        case 0x3E:
          HIDWORD(v298) = 0;
          v102 = *((_QWORD *)v5 - 7);
          goto LABEL_130;
        case 0x3F:
          HIDWORD(v298) = 0;
          v102 = *((_QWORD *)v5 - 6);
LABEL_130:
          v265 = v102;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_131;
        case 0x40:
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v72 = 17;
          v27 = 0LL;
          LODWORD(v1) = -93;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          HIDWORD(v298) = 0;
          v270 = 0;
          v259 = 0LL;
          v265 = 1LL;
          break;
        case 0x41:
          HIDWORD(v298) = 0;
          v91 = *((_QWORD *)v5 - 7);
          goto LABEL_117;
        case 0x42:
          HIDWORD(v298) = 0;
          v91 = *((_QWORD *)v5 - 6);
LABEL_117:
          v259 = v91;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_118;
        case 0x43:
        case 0x44:
          v90 = *((_QWORD *)v5 - 7);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = -93;
          v259 = v90;
          v270 = *((_DWORD *)v5 - 12);
          v72 = 17;
          goto LABEL_108;
        case 0x45:
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          HIDWORD(v298) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          v270 = 0;
          v259 = 1LL;
          goto LABEL_108;
        case 0x47:
          v23 = *((_QWORD *)v5 - 6);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = 60;
          v72 = 18;
LABEL_159:
          v270 = 0;
          v27 = 0LL;
          v26 = 0LL;
          v24 = 0LL;
          v259 = 0LL;
          v265 = 0LL;
          break;
        case 0x48:
          v24 = *((_QWORD *)v5 - 6);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = 60;
          v72 = 18;
LABEL_145:
          v270 = 0;
          v27 = 0LL;
          v26 = 0LL;
          v23 = 0LL;
          v259 = 0LL;
          v265 = 0LL;
          break;
        case 0x49:
          v110 = *(_QWORD *)v5 * *((_QWORD *)v5 - 6);
          v177 = (unsigned __int128)(*(__int64 *)v5 * (__int128)*((__int64 *)v5 - 6)) >> 64 != 0;
          v298 = 0LL;
          v295 = 0LL;
          v296 = 0LL;
          v297 = 0LL;
          v26 = v110;
          if ( v177 )
            return 1LL;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = 60;
          v72 = 18;
          goto LABEL_138;
        case 0x4A:
          v27 = *((_QWORD *)v5 - 6);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = 60;
          v72 = 18;
LABEL_135:
          v270 = 0;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v259 = 0LL;
          v265 = 0LL;
          break;
        case 0x4B:
          v112 = *((_QWORD *)v5 - 6);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = 60;
          v265 = v112;
          v72 = 18;
LABEL_131:
          v27 = 0LL;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v270 = 0;
          v259 = 0LL;
          break;
        case 0x4C:
          v111 = *((_QWORD *)v5 - 6);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          HIDWORD(v298) = 0;
          LODWORD(v1) = 60;
          v259 = v111;
          v72 = 18;
LABEL_118:
          v270 = 0;
LABEL_108:
          v27 = 0LL;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v265 = 0LL;
          break;
        case 0x4D:
          v26 = *(_QWORD *)v5;
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v72 = 19;
          HIDWORD(v298) = 0;
          LODWORD(v1) = -93;
LABEL_138:
          v270 = 0;
          v27 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v259 = 0LL;
          v265 = 0LL;
          break;
        case 0x51:
          v23 = *((_QWORD *)v5 + 1);
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v24 = 0LL;
          LODWORD(v1) = -93;
          v72 = 21;
          break;
        case 0x53:
          v23 = *((_QWORD *)v5 + 1);
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          v24 = 0LL;
          LODWORD(v1) = -92;
          v72 = 22;
          break;
        case 0x54:
          v279 = (__int16 *)v24;
          v278 = v27;
          v258 = *((_QWORD *)v5 + 2);
          v256 = *((_QWORD *)v5 + 1);
          v254 = *(_QWORD *)v5;
          v277 = (__int64)v2;
          sub_403110((__m128i *)v2, v18, v29, v13, v1, (__int64)v2, v254, v256, v258);
          v68 = (__int64)(v5 - 56);
          v8 = v6 - 1;
          LODWORD(v1) = -93;
          v72 = 23;
          v2 = (__int16 *)v277;
          v27 = v278;
          v24 = (__int64)v279;
          break;
        case 0x55:
          v279 = (__int16 *)v24;
          v278 = v27;
          v257 = *((_QWORD *)v5 - 5);
          v255 = *((_QWORD *)v5 - 6);
          v253 = *((_QWORD *)v5 - 7);
          v277 = (__int64)v2;
          sub_403110((__m128i *)v2, v18, v29, v13, v1, (__int64)v2, v253, v255, v257);
          v193 = *((_DWORD *)v5 + 12);
          v2 = (__int16 *)v277;
          v194 = __OFADD__(*(_DWORD *)(v277 + 152), v193);
          *(_DWORD *)(v277 + 152) += v193;
          v195 = (unsigned __int8 *)*((_QWORD *)v2 + 18);
          v196 = &v195[*((_QWORD *)v5 + 5)];
          LOBYTE(v195) = __OFADD__(*((_QWORD *)v5 + 5), v195);
          *((_QWORD *)v2 + 18) = v196;
          v197 = (unsigned __int8 *)*((_QWORD *)v2 + 17);
          v198 = __OFADD__(*((_QWORD *)v5 + 4), v197);
          *((_QWORD *)v2 + 17) = &v197[*((_QWORD *)v5 + 4)];
          v199 = (unsigned __int8 *)*((_QWORD *)v2 + 16);
          v200 = __OFADD__(*((_QWORD *)v5 + 3), v199);
          *((_QWORD *)v2 + 16) = &v199[*((_QWORD *)v5 + 3)];
          v201 = (unsigned __int8 *)*((_QWORD *)v2 + 15);
          v202 = __OFADD__(*((_QWORD *)v5 + 2), v201);
          *((_QWORD *)v2 + 15) = &v201[*((_QWORD *)v5 + 2)];
          v203 = (unsigned __int8 *)*((_QWORD *)v2 + 14);
          v204 = __OFADD__(*((_QWORD *)v5 + 1), v203);
          *((_QWORD *)v2 + 14) = &v203[*((_QWORD *)v5 + 1)];
          v205 = (unsigned __int8 *)*((_QWORD *)v2 + 13);
          v206 = __OFADD__(*(_QWORD *)v5, v205);
          *((_QWORD *)v2 + 13) = &v205[*(_QWORD *)v5];
          if ( (unsigned __int8)(v202 | v200 | v198 | v194 | (unsigned __int8)v195) | v204 || v206 )
            return 1LL;
          *((_BYTE *)v2 + 161) = 1;
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = -93;
          v72 = 24;
          v27 = v278;
          v24 = (__int64)v279;
          break;
        case 0x56:
          LODWORD(v1) = 43;
          v23 = -1LL;
          v8 = &v6[-v18];
          v72 = 25;
          v68 = (__int64)&v5[-56 * v18];
          break;
        case 0x57:
          v23 = *((_QWORD *)v5 + 1);
          v68 = (__int64)(v5 - 112);
          v8 = v6 - 2;
          LODWORD(v1) = 43;
          v72 = 25;
          break;
        default:
          v72 = (unsigned __int8)byte_413580[v13] - 28;
          LODWORD(v1) = byte_413700[v72];
          v8 = &v6[-v18];
          v68 = (__int64)&v5[-56 * v18];
          break;
      }
LABEL_100:
      v295.m128i_i64[0] = v23;
      v5 = (char *)(v68 + 56);
      v295.m128i_i64[1] = v24;
      v73 = _mm_load_si128(&v295);
      v297.m128i_i64[0] = v265;
      v296.m128i_i64[0] = v26;
      v296.m128i_i64[1] = v27;
      v74 = _mm_load_si128(&v296);
      v297.m128i_i64[1] = v259;
      v75 = _mm_load_si128(&v297);
      LODWORD(v298) = v270;
      v76 = v298;
      *(__m128i *)(v68 + 56) = v73;
      *(_QWORD *)(v68 + 104) = v76;
      *(__m128i *)(v68 + 72) = v74;
      *(__m128i *)(v68 + 88) = v75;
      v77 = *v8 + (_DWORD)v1;
      if ( v77 <= 0x70 && *v8 == byte_4135E0[v77] )
        v1 = (unsigned __int8)byte_413660[v77];
      else
        v1 = byte_4136E0[v72];
      goto LABEL_10;
    }
    if ( v274 == 3 )
    {
      if ( v4 > 0 )
      {
        v4 = -2;
        goto LABEL_22;
      }
      if ( !v4 )
        return 1LL;
    }
LABEL_22:
    while ( 1 )
    {
      v16 = byte_4137A0[v1];
      if ( v16 != -93 )
      {
        v17 = v16 + 1;
        if ( v17 <= 0x70 && byte_4135E0[v17] == 1 )
        {
          v1 = (unsigned __int8)byte_413660[v17];
          if ( byte_413660[v17] )
            break;
        }
      }
      if ( v6 == &v289 )
        return 1LL;
      --v6;
      v1 = *v6;
      v5 -= 56;
    }
    v5 += 56;
    v8 = v6;
    v274 = 3;
    *((_QWORD *)&v291 + 1) = v275;
    v64 = _mm_load_si128((const __m128i *)&v291);
    *(_QWORD *)&v292 = v276;
    v65 = v294;
    *(__m128i *)v5 = v64;
    v66 = _mm_load_si128((const __m128i *)&v292);
    *((_QWORD *)v5 + 6) = v65;
    *((__m128i *)v5 + 1) = v66;
    *((__m128i *)v5 + 2) = _mm_load_si128((const __m128i *)&v293);
LABEL_10:
    v6 = v8 + 1;
    v8[1] = v1;
    if ( v8 + 1 >= &v290 )
      return 2LL;
    if ( (_DWORD)v1 == 12 )
      return 0LL;
    v3 = byte_4137A0[(int)v1];
    if ( v3 != -93 )
      goto LABEL_2;
  }
}

__int64 __fastcall sub_406030(time_t *a1, const char *a2, struct timespec *a3, char a4, __int64 a5, char *a6)
{
  __int64 v6; // r14
  struct timespec *v7; // r13
  const char *v8; // rbp
  __time_t v9; // rbx
  char *v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  char v16; // al
  signed __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  __int64 v20; // r15
  bool v21; // zf
  int v22; // er12
  unsigned int v23; // ebx
  unsigned __int64 v24; // r12
  char v25; // bp
  __int64 v26; // rax
  unsigned __int8 v27; // bp
  _BOOL4 v28; // edx
  unsigned int v29; // esi
  unsigned __int8 v30; // cl
  unsigned int v31; // edx
  __int64 v32; // rax
  unsigned int v33; // er9
  unsigned int v34; // er8
  unsigned int v35; // edi
  int v36; // eax
  __int64 v37; // rbx
  int v38; // er13
  int v39; // er12
  char *v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  char *i; // rdx
  char *v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  const char *v48; // rsi
  char *v49; // rax
  char *v50; // rcx
  char *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  FILE *v55; // rsi
  const char *v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rbp
  __int64 v59; // rbp
  const char *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // r12
  bool v63; // r13
  unsigned __int64 v64; // rax
  __int64 v65; // rsi
  int v66; // ecx
  __int64 v67; // rax
  bool v68; // of
  __int64 v69; // rax
  int v70; // edx
  __int64 v71; // rdi
  __int64 v72; // rdx
  unsigned __int8 v73; // al
  __int64 v74; // rdx
  __int64 v75; // r11
  __int64 v76; // rsi
  unsigned __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rbx
  __int64 v80; // r12
  __int64 v81; // rdx
  __int64 v82; // rbx
  __int64 v83; // r13
  __int64 v84; // rbx
  time_t v85; // rbx
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r13
  __int64 v89; // r12
  __int64 v90; // rdx
  __int64 v91; // rax
  _BOOL4 v92; // edx
  __int64 v93; // r9
  __int64 v94; // rax
  char *ptr; // [rsp+8h] [rbp-430h]
  char *src; // [rsp+10h] [rbp-428h]
  int srca; // [rsp+10h] [rbp-428h]
  char v98; // [rsp+18h] [rbp-420h]
  _BOOL4 v99; // [rsp+18h] [rbp-420h]
  __int64 v100; // [rsp+18h] [rbp-420h]
  int v101; // [rsp+18h] [rbp-420h]
  __syscall_slong_t v102; // [rsp+20h] [rbp-418h]
  int v103; // [rsp+20h] [rbp-418h]
  time_t *timer; // [rsp+28h] [rbp-410h]
  size_t v105; // [rsp+30h] [rbp-408h]
  int v106; // [rsp+38h] [rbp-400h]
  int v107; // [rsp+44h] [rbp-3F4h]
  __int64 v108; // [rsp+48h] [rbp-3F0h]
  struct timespec v109; // [rsp+60h] [rbp-3D8h]
  char v110; // [rsp+70h] [rbp-3C8h]
  unsigned __int64 v111; // [rsp+90h] [rbp-3A8h]
  unsigned __int64 v112; // [rsp+98h] [rbp-3A0h]
  unsigned __int64 v113; // [rsp+A0h] [rbp-398h]
  int v114; // [rsp+A8h] [rbp-390h]
  int v115; // [rsp+B0h] [rbp-388h]
  __int64 v116; // [rsp+B8h] [rbp-380h]
  unsigned __int64 v117; // [rsp+D0h] [rbp-368h]
  unsigned __int64 v118; // [rsp+D8h] [rbp-360h]
  unsigned __int64 v119; // [rsp+E0h] [rbp-358h]
  int v120; // [rsp+F0h] [rbp-348h]
  int v121; // [rsp+110h] [rbp-328h]
  int v122; // [rsp+114h] [rbp-324h]
  int v123; // [rsp+118h] [rbp-320h]
  int v124; // [rsp+11Ch] [rbp-31Ch]
  int v125; // [rsp+120h] [rbp-318h]
  int v126; // [rsp+124h] [rbp-314h]
  int v127; // [rsp+130h] [rbp-308h]
  char *v128; // [rsp+140h] [rbp-2F8h]
  struct tm tp; // [rsp+150h] [rbp-2E8h]
  __time_t v130; // [rsp+190h] [rbp-2A8h]
  char v131; // [rsp+200h] [rbp-238h]
  __int16 v132; // [rsp+270h] [rbp-1C8h]
  char v133; // [rsp+272h] [rbp-1C6h]
  char v134; // [rsp+273h] [rbp-1C5h]
  int v135; // [rsp+290h] [rbp-1A8h]
  int v136; // [rsp+298h] [rbp-1A0h]
  char *v137; // [rsp+2A0h] [rbp-198h]
  unsigned __int64 v138; // [rsp+2E0h] [rbp-158h]
  __int64 v139; // [rsp+2E8h] [rbp-150h]
  int v140; // [rsp+2F0h] [rbp-148h]
  int v141; // [rsp+2F4h] [rbp-144h]
  int v142; // [rsp+2F8h] [rbp-140h]
  unsigned int v143; // [rsp+2FCh] [rbp-13Ch]
  __int64 v144; // [rsp+308h] [rbp-130h]
  __int64 v145; // [rsp+310h] [rbp-128h]
  __int64 v146; // [rsp+318h] [rbp-120h]
  __int64 v147; // [rsp+320h] [rbp-118h]
  unsigned __int64 v148; // [rsp+328h] [rbp-110h]
  __int64 v149; // [rsp+330h] [rbp-108h]
  __int128 v150; // [rsp+338h] [rbp-100h]
  __int128 v151; // [rsp+348h] [rbp-F0h]
  __int128 v152; // [rsp+358h] [rbp-E0h]
  __int128 v153; // [rsp+368h] [rbp-D0h]
  __int64 v154; // [rsp+378h] [rbp-C0h]
  __int16 v155; // [rsp+380h] [rbp-B8h]
  __int64 v156; // [rsp+388h] [rbp-B0h]
  __int64 v157; // [rsp+390h] [rbp-A8h]
  __int64 v158; // [rsp+398h] [rbp-A0h]
  __int64 v159; // [rsp+3A0h] [rbp-98h]
  __int64 v160; // [rsp+3A8h] [rbp-90h]
  __int64 v161; // [rsp+3B0h] [rbp-88h]
  char v162; // [rsp+3B8h] [rbp-80h]
  unsigned __int8 v163; // [rsp+3B9h] [rbp-7Fh]
  __int16 v164; // [rsp+3BAh] [rbp-7Eh]
  int v165; // [rsp+3BCh] [rbp-7Ch]
  char v166; // [rsp+3C0h] [rbp-78h]
  char *s1; // [rsp+3C8h] [rbp-70h]
  int v168; // [rsp+3D0h] [rbp-68h]
  int v169; // [rsp+3D4h] [rbp-64h]
  char *s2; // [rsp+3D8h] [rbp-60h]
  int v171; // [rsp+3E0h] [rbp-58h]
  int v172; // [rsp+3E4h] [rbp-54h]
  __int64 v173; // [rsp+3E8h] [rbp-50h]

  v6 = a5;
  v7 = a3;
  v8 = a2;
  timer = a1;
  v98 = a4;
  src = a6;
  v105 = strlen(a2);
  if ( !v7 )
  {
    v7 = &v109;
    sub_4030D0(&v109);
  }
  v9 = v7->tv_sec;
  v10 = (char *)a2;
  v102 = v7->tv_nsec;
  v11 = *(unsigned __int8 *)a2;
  if ( (unsigned __int8)v11 <= 0x20u )
  {
    v12 = 4294983168LL;
    if ( _bittest64(&v12, v11) )
    {
      do
        ++v10;
      while ( (unsigned __int8)*v10 <= 0x20u && (1LL << *v10) & 0x100003E00LL );
    }
  }
  if ( memcmp(v10, "TZ=\"", 4uLL) || (v13 = v10[4], v14 = (__int64)(v10 + 4), !v13) )
  {
LABEL_14:
    if ( !sub_40C180(v6, v7, &v121) )
      goto LABEL_106;
    ptr = 0LL;
    v20 = v6;
    goto LABEL_16;
  }
  v15 = (__int64)(v10 + 4);
  v16 = v10[4];
  v17 = 1LL;
  while ( v16 == 92 )
  {
    v18 = v15 + 1;
    v19 = *(_BYTE *)(v15 + 1);
    if ( v19 != 92 && v19 != 34 )
      goto LABEL_14;
LABEL_10:
    v15 = v18 + 1;
    v16 = *(_BYTE *)(v18 + 1);
    ++v17;
    if ( !v16 )
      goto LABEL_14;
  }
  if ( v16 != 34 )
  {
    v18 = v15;
    goto LABEL_10;
  }
  if ( v17 <= 100 )
  {
    ptr = 0LL;
    src = &v131;
    goto LABEL_89;
  }
  v14 = (__int64)(v10 + 4);
  src = (char *)malloc(v17);
  ptr = src;
  if ( !src )
  {
LABEL_106:
    v23 = 0;
    free(0LL);
    return v23;
  }
LABEL_89:
  for ( i = src; v13 != 34; *(i - 1) = *v45 )
  {
    ++i;
    v45 = (char *)(v14 + (v13 == 92));
    v13 = v45[1];
    v14 = (__int64)(v45 + 1);
  }
  *i = 0;
  v20 = sub_40BEA0(src);
  if ( !v20 )
  {
    v23 = 0;
    goto LABEL_78;
  }
  v46 = *(unsigned __int8 *)(v14 + 1);
  v10 = (char *)(v14 + 1);
  if ( (unsigned __int8)v46 <= 0x20u )
  {
    v47 = 4294983168LL;
    if ( _bittest64(&v47, v46) )
    {
      do
        ++v10;
      while ( (unsigned __int8)*v10 <= 0x20u && (1LL << *v10) & 0x100003E00LL );
    }
  }
  if ( !sub_40C180(v20, v7, &v121) )
  {
    v23 = 0;
    goto LABEL_76;
  }
LABEL_16:
  v21 = *v10 == 0;
  v145 = 0LL;
  if ( v21 )
    v10 = "0";
  v143 = 2;
  v151 = 0LL;
  v138 = (unsigned __int64)v10;
  v163 = v98 & 1;
  v144 = v126 + 1900LL;
  *((_QWORD *)&v150 + 1) = (int)v102;
  v22 = 7776000;
  v152 = 0LL;
  v153 = 0LL;
  v146 = v125 + 1;
  v154 = 0LL;
  v147 = v124;
  v155 = 0;
  v148 = v123;
  v156 = 0LL;
  v149 = v122;
  v157 = 0LL;
  *(_QWORD *)&v150 = v121;
  v160 = 0LL;
  v115 = v127;
  v158 = 0LL;
  v159 = 0LL;
  v161 = 0LL;
  v162 = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  s1 = v128;
  v168 = 269;
  v169 = v127;
  s2 = 0LL;
  while ( !__OFADD__(v9, v22) )
  {
    v130 = v9 + v22;
    if ( sub_40C180(v20, &v130, &v132) && v137 && v135 != v169 )
    {
      s2 = v137;
      v171 = 269;
      v172 = v135;
      v173 = 0LL;
      break;
    }
    v22 += 7776000;
    if ( v22 == 31104000 )
      break;
  }
  if ( s1 && s2 && !strcmp(s1, s2) )
  {
    v169 = -1;
    s2 = 0LL;
  }
  if ( (unsigned int)sub_403DB0((__int16 *)&v138) )
  {
    v23 = v163;
    if ( v163 )
    {
      if ( v138 < (unsigned __int64)&v8[v105] )
        dcgettext(0LL, "error: parsing failed, stopped at '%s'\n", 5);
      else
        dcgettext(0LL, "error: parsing failed\n", 5);
      v23 = 0;
      sub_403400();
    }
    goto LABEL_76;
  }
  if ( v163 )
  {
    dcgettext(0LL, "input timezone: ", 5);
    sub_403400();
    v48 = "'@timespec' - always UTC";
    if ( !(_BYTE)v155 )
    {
      v48 = "parsed date/time string";
      if ( !v161 )
      {
        if ( src )
        {
          if ( v6 != v20 )
          {
            v49 = dcgettext(0LL, "TZ=\"%s\" in date string", 5);
            v50 = src;
LABEL_104:
            __fprintf_chk(stderr, 1LL, v49, v50);
            goto LABEL_109;
          }
          v48 = "TZ=\"UTC0\" environment value or -u";
          if ( strcmp(src, "UTC0") )
          {
            v49 = dcgettext(0LL, "TZ=\"%s\" environment value", 5);
            v50 = src;
            goto LABEL_104;
          }
        }
        else
        {
          v48 = "system default";
        }
      }
    }
    v51 = dcgettext(0LL, v48, 5);
    __fprintf_chk(stderr, 1LL, v51, v52);
LABEL_109:
    v53 = v161;
    if ( v158 )
    {
      if ( v161 )
      {
LABEL_111:
        v54 = sub_403290(v142, (__int64)&v110);
        __fprintf_chk(stderr, 1LL, " (%s)", v54);
LABEL_112:
        v55 = stderr;
LABEL_113:
        fputc(10, v55);
        v23 = v163;
        if ( !(_BYTE)v155 )
        {
          v57 = v156;
          if ( ((v158 + v161) | v159 | v157 | v156 | v160) <= 1 )
            goto LABEL_32;
          if ( v163 )
          {
            if ( v160 > 1 )
            {
              sub_403400();
              v57 = v156;
            }
            if ( v57 > 1 )
              sub_403400();
            if ( v157 > 1 )
              sub_403400();
            if ( v159 > 1 )
              sub_403400();
            if ( v158 + v161 > 1 )
            {
              v23 = 0;
              sub_403400();
              goto LABEL_76;
            }
          }
          goto LABEL_75;
        }
        *(__m128i *)timer = _mm_loadu_si128((const __m128i *)&v150);
LABEL_115:
        if ( !(_BYTE)v23 )
        {
          v23 = 1;
          goto LABEL_76;
        }
        v56 = "timezone: system default\n";
        if ( src )
        {
          if ( strcmp(src, "UTC0") )
          {
            dcgettext(0LL, "timezone: TZ=\"%s\" environment value\n", 5);
            sub_403400();
            goto LABEL_120;
          }
          v56 = "timezone: Universal Time\n";
        }
        dcgettext(0LL, v56, 5);
        sub_403400();
LABEL_120:
        dcgettext(0LL, "final: %ld.%09d (epoch-seconds)\n", 5);
        sub_403400();
        if ( gmtime_r(timer, &tp) )
        {
          sub_403880((__int64)&tp, 0LL, (__int64)&v130);
          dcgettext(0LL, "final: %s (UTC)\n", 5);
          sub_403400();
        }
        if ( sub_40C180(v20, timer, &v132) )
        {
          sub_403290(v136, (__int64)&v110);
          sub_403880((__int64)&v132, 0LL, (__int64)&v130);
          dcgettext(0LL, "final: %s (UTC%s)\n", 5);
          sub_403400();
        }
        goto LABEL_76;
      }
      v55 = stderr;
      if ( v141 <= 0 )
        goto LABEL_113;
      fwrite(", dst", 1uLL, 5uLL, stderr);
      v53 = v161;
    }
    if ( !v53 )
      goto LABEL_112;
    goto LABEL_111;
  }
  v23 = (unsigned __int8)v155;
  if ( (_BYTE)v155 )
  {
    *(__m128i *)timer = _mm_loadu_si128((const __m128i *)&v150);
    goto LABEL_76;
  }
  if ( ((v158 + v161) | v159 | v157 | v156 | v160) > 1 )
    goto LABEL_75;
LABEL_32:
  v24 = v144;
  if ( v144 < 0 )
  {
    v27 = __OFSUB__(-1900LL, v144);
    HIDWORD(v113) = -1900 - v144;
    if ( -1900 - v144 != -1900 - (_DWORD)v144 )
      v27 = 1;
  }
  else
  {
    if ( v145 == 2 )
    {
      v58 = 2000LL;
      if ( v144 >= 69 )
        v58 = 1900LL;
      v59 = v144 + v58;
      if ( (_BYTE)v23 )
      {
        dcgettext(0LL, "warning: adjusting year value %ld to %ld\n", 5);
        v24 = v59;
        sub_403400();
      }
      else
      {
        v24 = v59;
      }
    }
    v25 = 0;
    v26 = v24 - 1900;
    if ( v24 >= 0x76C )
    {
      if ( v26 < 0 )
        goto LABEL_143;
    }
    else
    {
      if ( v26 < 0 )
        goto LABEL_36;
LABEL_143:
      v25 = 1;
    }
LABEL_36:
    HIDWORD(v113) = v24 - 1900;
    if ( v26 != (int)v26 )
      v25 = 1;
    v27 = v25 & 1;
  }
  if ( v27 )
  {
    if ( (_BYTE)v23 )
    {
      dcgettext(0LL, "error: out-of-range year %ld\n", 5);
      sub_403400();
    }
    v30 = v163;
LABEL_153:
    v60 = "error: year, month, or day overflow\n";
    if ( !v30 )
      goto LABEL_75;
    goto LABEL_154;
  }
  v28 = __OFADD__(-1LL, v146);
  v29 = v146 - 1;
  LODWORD(v113) = v146 - 1;
  if ( v146 - 1 != (_DWORD)v146 - 1 )
    v28 = 1;
  v30 = v163;
  if ( v28 )
    goto LABEL_153;
  HIDWORD(v112) = v147;
  v31 = v147;
  v99 = v147 != v147;
  if ( v147 != (int)v147 )
    goto LABEL_153;
  v32 = v160;
  if ( !v160 )
  {
    if ( !HIBYTE(v155) || v156 )
    {
      v111 = 0LL;
      LODWORD(v112) = 0;
      *((_QWORD *)&v150 + 1) = 0LL;
      if ( v163 )
        goto LABEL_239;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      goto LABEL_196;
    }
    if ( v157 )
    {
      v111 = 0LL;
      LODWORD(v112) = 0;
      *((_QWORD *)&v150 + 1) = 0LL;
      if ( !v163 )
      {
        v33 = 0;
        v34 = 0;
        v35 = 0;
        goto LABEL_50;
      }
LABEL_239:
      sub_403400();
LABEL_240:
      v32 = v160;
      v35 = v111;
      v34 = HIDWORD(v111);
      v33 = v112;
      v31 = HIDWORD(v112);
      v29 = v113;
      goto LABEL_196;
    }
  }
  v86 = v143;
  if ( v143 )
  {
    if ( v143 != 1 )
    {
      if ( v148 <= 0x17 )
        goto LABEL_192;
      LODWORD(v112) = -1;
LABEL_257:
      if ( v163 )
      {
        dcgettext(0LL, "error: invalid hour %ld%s\n", 5);
        v23 = 0;
        sub_403400();
        goto LABEL_76;
      }
      goto LABEL_75;
    }
    v86 = (unsigned int)(v148 + 12);
    if ( v148 - 1 > 0xA )
    {
      if ( v148 != 12 )
      {
        LODWORD(v112) = -1;
        goto LABEL_257;
      }
      LODWORD(v112) = 12;
      v86 = 12LL;
      goto LABEL_194;
    }
  }
  else
  {
    if ( v148 - 1 > 0xA )
    {
      if ( v148 != 12 )
      {
        LODWORD(v112) = -1;
        goto LABEL_257;
      }
      LODWORD(v112) = 0;
      goto LABEL_194;
    }
LABEL_192:
    v86 = (unsigned int)v148;
  }
  LODWORD(v112) = v86;
LABEL_194:
  v34 = v149;
  v35 = v150;
  v111 = __PAIR64__(v149, v150);
  if ( v163 )
  {
    __snprintf_chk(&v130, 100LL, 1LL, 100LL, "%02d:%02d:%02d", v86);
    if ( v160 )
      dcgettext(0LL, "using specified time as starting value: '%s'\n", 5);
    else
      dcgettext(0LL, "using current time as starting value: '%s'\n", 5);
    sub_403400();
    goto LABEL_240;
  }
  v33 = v112;
LABEL_196:
  if ( v32 | v157 | v156 )
LABEL_50:
    v115 = -1;
  if ( v158 )
  {
    v36 = v141;
    v115 = v141;
  }
  else
  {
    v36 = v115;
  }
  v117 = __PAIR64__(v34, v35);
  v119 = __PAIR64__(HIDWORD(v113), v29);
  v118 = __PAIR64__(v31, v33);
  v120 = v36;
  v37 = sub_40C230(v20, &v111, 0.0);
  if ( sub_4034C0(v20, &v117, &v111, v37) )
    goto LABEL_291;
  v108 = v161;
  if ( v161 )
  {
    v133 = 88;
    v132 = 22616;
    sub_403290(v142, (__int64)&v134);
    v61 = sub_40BEA0(&v132);
    v62 = v61;
    if ( !v61 )
    {
      if ( v163 )
      {
        v23 = 0;
        dcgettext(0LL, "error: tzalloc (\"%s\") failed\n", 5);
        sub_403400();
        goto LABEL_76;
      }
      goto LABEL_75;
    }
    v111 = v117;
    v112 = v118;
    v113 = v119;
    v115 = v120;
    v37 = sub_40C230(v61, &v111, 0.0);
    v63 = sub_4034C0(v62, &v117, &v111, v37);
    sub_40C160(v62);
    if ( v63 )
    {
LABEL_291:
      if ( !v157 )
        goto LABEL_202;
      if ( v156 )
      {
        if ( !v163 )
          goto LABEL_174;
      }
      else
      {
        v64 = v139;
        if ( v139 > 0 && v114 != v140 )
          v64 = v139 - 1;
        v65 = 7 * v64;
        if ( !is_mul_ok(7uLL, v64) )
          goto LABEL_292;
        v66 = (v140 - v114 + 7) % 7;
        v67 = v65 + v66;
        if ( __OFADD__(v65, v66) )
          goto LABEL_292;
        v68 = __OFADD__(SHIDWORD(v112), v67);
        v69 = SHIDWORD(v112) + v67;
        HIDWORD(v112) = v69;
        v70 = v68;
        if ( v69 != (int)v69 )
          v70 = 1;
        if ( v70 || (v115 = -1, v37 = sub_40C230(v20, &v111, 0.0), v37 == -1) )
        {
LABEL_292:
          if ( v163 )
          {
            sub_403880((__int64)&v111, (__int64)&v138, (__int64)&v130);
            sub_403920((__int64)&v138, (char *)&v132);
            dcgettext(0LL, "error: day '%s' (day ordinal=%ld number=%d) resulted in an invalid date: '%s'\n", 5);
            v23 = 0;
            sub_403400();
            goto LABEL_76;
          }
          goto LABEL_75;
        }
        if ( !v163 )
        {
LABEL_174:
          v71 = *((_QWORD *)&v151 + 1);
          v72 = v151;
          if ( !((unsigned __int64)v152 | (unsigned __int64)v151 | *((_QWORD *)&v151 + 1)) )
          {
            v73 = 0;
            goto LABEL_176;
          }
LABEL_236:
          v91 = v72 + SHIDWORD(v113);
          v92 = __OFADD__(v72, SHIDWORD(v113));
          if ( v91 != (int)v91 || v92 )
            goto LABEL_75;
          v101 = v91;
LABEL_214:
          v88 = v71 + (int)v113;
          if ( v88 == (int)v88 && !__OFADD__(v71, (int)v113) )
          {
            v89 = v152 + SHIDWORD(v112);
            if ( v89 == (int)v89 && !__OFADD__((_QWORD)v152, SHIDWORD(v112)) )
            {
              v113 = __PAIR64__(v101, v88);
              HIDWORD(v112) += v152;
              v111 = v117;
              LODWORD(v112) = v118;
              v115 = v120;
              v37 = sub_40C230(v20, &v111, 0.0);
              if ( v37 == -1 )
              {
                if ( v163 )
                {
                  sub_403880((__int64)&v111, (__int64)&v138, (__int64)&v130);
                  dcgettext(0LL, "error: adding relative date resulted in an invalid date: '%s'\n", 5);
                  v23 = 0;
                  sub_403400();
                  goto LABEL_76;
                }
                goto LABEL_75;
              }
              v73 = v163;
              if ( v163 )
              {
                dcgettext(0LL, "after date adjustment (%+ld years, %+ld months, %+ld days),\n", 5);
                sub_403400();
                sub_403880((__int64)&v111, (__int64)&v138, (__int64)&v130);
                dcgettext(0LL, "    new date/time = '%s'\n", 5);
                sub_403400();
                if ( v120 != -1 && v120 != v115 )
                {
                  dcgettext(0LL, "warning: daylight saving time changed after date adjustment\n", 5);
                  sub_403400();
                }
                if ( !(_QWORD)v152
                  && ((_DWORD)v89 != HIDWORD(v112) || !*((_QWORD *)&v151 + 1) && (_DWORD)v88 != (_DWORD)v113) )
                {
                  dcgettext(0LL, "warning: month/year adjustment resulted in shifted dates:\n", 5);
                  sub_403400();
                  sub_403390(v101, (__int64)&tp);
                  dcgettext(0LL, "     adjusted Y M D: %s %02d %02d\n", 5);
                  sub_403400();
                  sub_403390(SHIDWORD(v113), (__int64)&tp);
                  dcgettext(0LL, "   normalized Y M D: %s %02d %02d\n", 5);
                  sub_403400();
                }
                v73 = v163;
                goto LABEL_176;
              }
              if ( v161 )
              {
                v90 = v142 - v116;
                v68 = __OFSUB__(v37, v90);
                v37 -= v90;
                if ( v68 | (unsigned __int64)__OFSUB__(v142, v116) )
                {
                  v23 = 0;
                  goto LABEL_76;
                }
                goto LABEL_178;
              }
              goto LABEL_179;
            }
          }
LABEL_224:
          if ( v163 )
          {
            v23 = 0;
            dcgettext(0LL, "error: %s:%d\n", 5);
            sub_403400();
            goto LABEL_76;
          }
          goto LABEL_75;
        }
        sub_403880((__int64)&v111, (__int64)&v138, (__int64)&v130);
        sub_403920((__int64)&v138, (char *)&v132);
        dcgettext(0LL, "new start date: '%s' is '%s'\n", 5);
        sub_403400();
LABEL_202:
        if ( !v163 )
          goto LABEL_174;
        if ( v156 )
        {
          if ( !v157 )
            goto LABEL_205;
        }
        else if ( v157
               || (v94 = sub_403390(SHIDWORD(v113), (__int64)&tp),
                   __snprintf_chk(&v130, 100LL, 1LL, 100LL, "(Y-M-D) %s-%02d-%02d", v94),
                   dcgettext(0LL, "using current date as starting value: '%s'\n", 5),
                   sub_403400(),
                   !v157)
               || !v156 )
        {
LABEL_205:
          sub_403880((__int64)&v111, (__int64)&v138, (__int64)&v130);
          dcgettext(0LL, "starting date/time: '%s'\n", 5);
          sub_403400();
          v71 = *((_QWORD *)&v151 + 1);
          v72 = v151;
          v87 = v152;
          v73 = v163;
          if ( (unsigned __int64)v152 | *((_QWORD *)&v151 + 1) | (unsigned __int64)v151 )
          {
            if ( !v163 )
              goto LABEL_236;
            if ( v151 == 0 )
              goto LABEL_293;
            if ( HIDWORD(v112) != 15 )
            {
              dcgettext(
                0LL,
                "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n",
                5);
              sub_403400();
              v87 = v152;
            }
            if ( v87 )
            {
LABEL_293:
              if ( (_DWORD)v112 != 12 )
              {
                dcgettext(0LL, "warning: when adding relative days, it is recommended to specify noon\n", 5);
                sub_403400();
              }
            }
            if ( (_QWORD)v151 + SHIDWORD(v113) == (_DWORD)v151 + HIDWORD(v113)
              && !__OFADD__((_QWORD)v151, SHIDWORD(v113)) )
            {
              v101 = v151 + HIDWORD(v113);
              v71 = *((_QWORD *)&v151 + 1);
              goto LABEL_214;
            }
            goto LABEL_224;
          }
LABEL_176:
          if ( v161 )
          {
            v74 = v142 - v116;
            v68 = __OFSUB__(v37, v74);
            v37 -= v74;
            if ( v68 | (unsigned __int64)__OFSUB__(v142, v116) )
            {
              if ( v73 )
              {
                v23 = 0;
                dcgettext(0LL, "error: timezone %d caused time_t overflow\n", 5);
                sub_403400();
                goto LABEL_76;
              }
              goto LABEL_75;
            }
          }
LABEL_178:
          if ( v73 )
          {
            sub_403880((__int64)&v111, (__int64)&v138, (__int64)&v130);
            dcgettext(0LL, "'%s' = %ld epoch-seconds\n", 5);
            sub_403400();
            v93 = 3600LL * *((_QWORD *)&v152 + 1);
            v100 = *((_QWORD *)&v152 + 1);
            if ( is_mul_ok(0xE10uLL, *((unsigned __int64 *)&v152 + 1)) )
            {
              v76 = (int)v154;
              v27 = v163;
              v77 = (((int)v154 + *((_QWORD *)&v150 + 1)) % 1000000000LL + 1000000000) % 0x3B9ACA00uLL;
              v78 = ((int)v154 + DWORD2(v150) - (int)v77) / 1000000000;
              v68 = __OFADD__(v93, v37);
              v79 = v93 + v37;
              if ( !v68 )
              {
                v80 = v153;
                v81 = 60 * v153;
                if ( is_mul_ok(0x3CuLL, v153) )
                  goto LABEL_182;
              }
            }
            else
            {
              v27 = v163;
            }
          }
          else
          {
LABEL_179:
            v75 = 3600LL * *((_QWORD *)&v152 + 1);
            v100 = *((_QWORD *)&v152 + 1);
            if ( !is_mul_ok(0xE10uLL, *((unsigned __int64 *)&v152 + 1)) )
              goto LABEL_75;
            v76 = (int)v154;
            v77 = (((int)v154 + *((_QWORD *)&v150 + 1)) % 1000000000LL + 1000000000) % 0x3B9ACA00uLL;
            v78 = ((int)v154 + DWORD2(v150) - (int)v77) / 1000000000;
            v68 = __OFADD__(v75, v37);
            v79 = v75 + v37;
            if ( v68 )
              goto LABEL_75;
            v80 = v153;
            v81 = 60 * v153;
            if ( !is_mul_ok(0x3CuLL, v153) )
              goto LABEL_75;
LABEL_182:
            v68 = __OFADD__(v81, v79);
            v82 = v81 + v79;
            if ( !v68 )
            {
              v83 = *((_QWORD *)&v153 + 1);
              v68 = __OFADD__(*((_QWORD *)&v153 + 1), v82);
              v84 = *((_QWORD *)&v153 + 1) + v82;
              if ( !v68 )
              {
                v68 = __OFADD__(v78, v84);
                v85 = v78 + v84;
                if ( !v68 )
                {
                  *timer = v85;
                  timer[1] = v77;
                  if ( v27 )
                  {
                    if ( v100 | v80 | v83 | v76 )
                    {
                      dcgettext(0LL, "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n", 5);
                      sub_403400();
                      dcgettext(0LL, "    new time = %ld epoch-seconds\n", 5);
                      sub_403400();
                      if ( v115 != -1 && sub_40C180(v20, timer, &tp) && v115 != tp.tm_isdst )
                      {
                        dcgettext(0LL, "warning: daylight saving time changed after time adjustment\n", 5);
                        sub_403400();
                      }
                    }
                  }
                  v23 = v163;
                  goto LABEL_115;
                }
              }
            }
          }
          if ( !v27 )
            goto LABEL_75;
          v60 = "error: adding relative time caused an overflow\n";
LABEL_154:
          v23 = 0;
          dcgettext(0LL, v60, 5);
          sub_403400();
          goto LABEL_76;
        }
      }
      sub_403920((__int64)&v138, (char *)&v132);
      dcgettext(0LL, "warning: day (%s) ignored when explicit dates are given\n", 5);
      sub_403400();
      goto LABEL_205;
    }
  }
  v38 = v119;
  v39 = v113;
  srca = HIDWORD(v118);
  v103 = HIDWORD(v112);
  v106 = HIDWORD(v119);
  v107 = HIDWORD(v113);
  if ( v117 == v111 )
  {
    if ( HIDWORD(v118) != HIDWORD(v112) || (_DWORD)v118 == (_DWORD)v112 || v119 != v113 )
    {
      if ( !v163 )
        goto LABEL_75;
      dcgettext(0LL, "error: invalid date/time value:\n", 5);
      sub_403400();
      sub_403880((__int64)&v117, (__int64)&v138, (__int64)&v132);
      dcgettext(0LL, "    user provided time: '%s'\n", 5);
      sub_403400();
      sub_403880((__int64)&v111, (__int64)&v138, (__int64)&v132);
      dcgettext(0LL, "       normalized time: '%s'\n", 5);
      sub_403400();
    }
    else
    {
      if ( !v163 )
        goto LABEL_75;
      dcgettext(0LL, "error: invalid date/time value:\n", 5);
      sub_403400();
      sub_403880((__int64)&v117, (__int64)&v138, (__int64)&v132);
      dcgettext(0LL, "    user provided time: '%s'\n", 5);
      sub_403400();
      sub_403880((__int64)&v111, (__int64)&v138, (__int64)&v132);
      dcgettext(0LL, "       normalized time: '%s'\n", 5);
      sub_403400();
      v99 = 1;
    }
  }
  else
  {
    if ( !v163 )
      goto LABEL_75;
    dcgettext(0LL, "error: invalid date/time value:\n", 5);
    sub_403400();
    sub_403880((__int64)&v117, (__int64)&v138, (__int64)&v132);
    dcgettext(0LL, "    user provided time: '%s'\n", 5);
    sub_403400();
    sub_403880((__int64)&v111, (__int64)&v138, (__int64)&v132);
    dcgettext(0LL, "       normalized time: '%s'\n", 5);
    sub_403400();
  }
  v40 = "----";
  if ( v106 == v107 )
    v40 = "";
  __snprintf_chk(&v132, 100LL, 1LL, 100LL, "                                 %4s %2s %2s %2s %2s %2s", v40);
  v41 = 51LL;
  v42 = 52LL;
  if ( BYTE3(v137) == 32 )
  {
    do
    {
      v42 = (int)v41;
      if ( !(_DWORD)v41 )
        break;
      --v41;
    }
    while ( *((_BYTE *)&v132 + v41) == 32 );
  }
  *((_BYTE *)&v132 + v42) = 0;
  sub_403400();
  dcgettext(0LL, "     possible reasons:\n", 5);
  sub_403400();
  if ( v99 )
  {
    dcgettext(0LL, "       non-existing due to daylight-saving time;\n", 5);
    sub_403400();
  }
  if ( srca != v103 && v38 != v39 )
  {
    dcgettext(0LL, "       invalid day/month combination;\n", 5);
    sub_403400();
  }
  dcgettext(0LL, "       numeric values overflow;\n", 5);
  sub_403400();
  if ( v108 )
    dcgettext(0LL, "incorrect timezone", 5);
  else
    dcgettext(0LL, "missing timezone", 5);
  sub_403400();
LABEL_75:
  v23 = 0;
LABEL_76:
  if ( v20 != v6 )
    sub_40C160(v20);
LABEL_78:
  free(ptr);
  return v23;
}

__int64 __fastcall sub_408000(time_t *a1, const char *a2, struct timespec *a3)
{
  struct timespec *v3; // r15
  unsigned int v4; // ebp
  char *v5; // rax
  char *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx

  v3 = a3;
  v4 = 0;
  v5 = getenv("TZ");
  v6 = v5;
  v7 = sub_40BEA0(v5);
  if ( v7 )
  {
    v8 = v7;
    v4 = sub_406030(a1, a2, v3, 0, v7, v6);
    sub_40C160(v8);
  }
  return v4;
}

__int64 __fastcall sub_408070(int *a1, int *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  int v5; // edx
  time_t timer; // [rsp+0h] [rbp-10h]

  if ( a3 == 1 )
  {
    v5 = *a2;
    result = 1LL;
    *a1 = *a2;
    if ( *a2 <= 68 )
    {
      if ( !(a4 & 8) )
      {
        *a1 = v5 + 100;
        return result;
      }
      return 0LL;
    }
  }
  else
  {
    if ( a3 == 2 )
    {
      if ( a4 & 2 )
      {
        *a1 = a2[1] + 100 * *a2 - 1900;
        return 1LL;
      }
      return 0LL;
    }
    time(&timer);
    result = (__int64)localtime(&timer);
    if ( result )
    {
      *a1 = *(_DWORD *)(result + 20);
      result = 1LL;
    }
  }
  return result;
}

__int64 __fastcall sub_408100(_QWORD *a1, const char *a2, unsigned int a3)
{
  unsigned int v3; // ebp
  size_t v4; // r13
  char *v5; // rax
  char *v6; // r14
  signed __int64 v7; // rax
  __int64 result; // rax
  const char *v9; // rax
  size_t v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // edx
  int v15; // eax
  __int64 v16; // rax
  struct tm *v17; // rdx
  char *v18; // rax
  int v19; // edx
  __int64 v20; // [rsp+0h] [rbp-C8h]
  char v21; // [rsp+8h] [rbp-C0h]
  char s; // [rsp+10h] [rbp-B8h]
  int v23; // [rsp+20h] [rbp-A8h]
  unsigned int v24; // [rsp+24h] [rbp-A4h]
  unsigned __int64 v25; // [rsp+28h] [rbp-A0h]
  __int64 v26; // [rsp+30h] [rbp-98h]
  char v27[16]; // [rsp+50h] [rbp-78h]
  int v28; // [rsp+60h] [rbp-68h]
  unsigned int v29; // [rsp+64h] [rbp-64h]
  unsigned __int64 v30; // [rsp+68h] [rbp-60h]
  __int64 v31; // [rsp+70h] [rbp-58h]
  int v32; // [rsp+80h] [rbp-48h]

  v3 = a3;
  v4 = strlen(a2);
  if ( v3 & 4 )
  {
    v5 = strchr(a2, 46);
    v6 = v5;
    if ( v5 )
    {
      v7 = v5 - a2;
      if ( v4 - v7 != 3 )
        return 0LL;
      v4 = v7;
    }
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 - 8 <= 4 && !(v4 & 1) )
  {
    v9 = a2;
    while ( (unsigned int)(*v9 - 48) <= 9 )
    {
      if ( &a2[v4] == ++v9 )
      {
        v10 = v4 >> 1;
        v11 = 0LL;
        do
        {
          *(&v28 + v11) = a2[2 * v11 + 1] + 2 * (5 * a2[2 * v11] - 240) - 48;
          ++v11;
        }
        while ( v10 != v11 );
        v12 = v10 - 4;
        if ( v3 & 1 )
        {
          LODWORD(v26) = v28 - 1;
          v24 = HIDWORD(v30);
          v25 = __PAIR64__(v29, v30);
          if ( !(unsigned __int8)sub_408070((int *)&v26 + 1, (int *)&v31, v12, v3) )
            return 0LL;
        }
        else
        {
          if ( !(unsigned __int8)sub_408070((int *)&v26 + 1, &v28, v12, v3) )
            return 0LL;
          v18 = &v27[4 * v10];
          LODWORD(v26) = *(_DWORD *)&v27[4 * v10] - 1;
          HIDWORD(v25) = *((_DWORD *)v18 + 1);
          v19 = *((_DWORD *)v18 + 2);
          LODWORD(v18) = *((_DWORD *)v18 + 3);
          LODWORD(v25) = v19;
          v24 = (unsigned int)v18;
        }
        if ( v6 )
        {
          v13 = v6[1] - 48;
          if ( v13 > 9 )
            return 0LL;
          v14 = v6[2];
          if ( (unsigned int)(v14 - 48) > 9 )
            return 0LL;
          v15 = v14 + 10 * v13 - 48;
          v23 = v15;
        }
        else
        {
          v23 = 0;
          v15 = 0;
        }
        v28 = v15;
        v32 = -1;
        v29 = v24;
        v30 = v25;
        v31 = v26;
        v16 = sub_40BDB0(&v28);
        v17 = (struct tm *)&v28;
        v20 = v16;
        if ( v16 == -1 )
        {
          v17 = localtime(&v20);
          if ( !v17 )
            return 0LL;
        }
        if ( !(v23 ^ v17->tm_sec | v17->tm_min ^ v24 | v17->tm_hour ^ (unsigned int)v25 | v17->tm_mday ^ HIDWORD(v25) | v17->tm_mon ^ (unsigned int)v26 | v17->tm_year ^ HIDWORD(v26)) )
          goto LABEL_33;
        if ( v23 != 60 )
          return 0LL;
        strcpy((char *)(__stpcpy_chk(&s, a2, 16LL) - 2), "59");
        result = sub_408100(&v21, &s, v3);
        if ( (_BYTE)result )
        {
LABEL_33:
          *a1 = v20;
          result = 1LL;
        }
        return result;
      }
    }
  }
  return 0LL;
}

__int64 sub_4083B0()
{
  unsigned int v0; // ebx
  char *v1; // rax
  __int64 v3; // rax
  unsigned int v4; // ebx
  char *endptr; // [rsp+8h] [rbp-10h]

  v0 = 200809;
  v1 = getenv("_POSIX2_VERSION");
  if ( !v1 )
    return v0;
  if ( !*v1 )
    return v0;
  v3 = strtol(v1, &endptr, 10);
  if ( *endptr )
    return v0;
  if ( v3 < -2147483648LL )
    return 2147483648;
  v4 = 0x7FFFFFFF;
  if ( v3 <= 0x7FFFFFFF )
    v4 = v3;
  return v4;
}

char *__fastcall sub_408430(const char *a1)
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
  qword_6183B8 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_4084D0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40C4F0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_413997;
      if ( !v5 )
        v2 = (char *)&unk_41398C;
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
    v2 = (char *)&unk_413993;
    if ( !v5 )
      v2 = (char *)&unk_413990;
    return v2;
  }
  v6 = "TZ=\"" + 3;
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_4085D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_4085D0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4085D0((__int64)v9, v79, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
            return sub_4085D0((__int64)v9, v10, s);
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
            return sub_4085D0((__int64)v9, v10, s);
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
            return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
            return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
          return sub_4085D0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40B670((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4085D0((__int64)v9, v10, s);
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
      return sub_4085D0((__int64)v9, v10, s);
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
        s2 = "TZ=\"" + 3;
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
        s2 = "TZ=\"" + 3;
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
      s2 = "TZ=\"" + 3;
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
        a8 = sub_4084D0("`", v11);
        v47 = sub_4084D0("'", v11);
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

unsigned __int64 __fastcall sub_4085D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_4085D0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4085D0((__int64)v9, v79, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
            return sub_4085D0((__int64)v9, v10, s);
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
            return sub_4085D0((__int64)v9, v10, s);
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
            return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
            return sub_4085D0((__int64)v9, v10, s);
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
              return sub_4085D0((__int64)v9, v10, s);
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
          return sub_4085D0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40B670((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4085D0((__int64)v9, v10, s);
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
      return sub_4085D0((__int64)v9, v10, s);
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
        s2 = "TZ=\"" + 3;
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
        s2 = "TZ=\"" + 3;
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
      s2 = "TZ=\"" + 3;
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
        a8 = sub_4084D0("`", v11);
        v47 = sub_4084D0("'", v11);
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

_BYTE *__fastcall sub_409800(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6182F8;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_618310 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_40A860();
    v9 = 16LL * (a1 + 1);
    if ( off_6182F8 == &xmmword_618300 )
    {
      v7 = (__int128 *)sub_40A670(0LL, v9);
      off_6182F8 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_618300);
    }
    else
    {
      off_6182F8 = (__int128 *)sub_40A670(off_6182F8, v9);
      v7 = off_6182F8;
    }
    memset(&v7[dword_618310], 0, 16LL * (a1 + 1 - dword_618310));
    dword_618310 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_4085D0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6183C0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_40A610(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4085D0(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_409800(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6182F8;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_618310 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_40A860();
    v9 = 16LL * (a1 + 1);
    if ( off_6182F8 == &xmmword_618300 )
    {
      v7 = (__int128 *)sub_40A670(0LL, v9);
      off_6182F8 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_618300);
    }
    else
    {
      off_6182F8 = (__int128 *)sub_40A670(off_6182F8, v9);
      v7 = off_6182F8;
    }
    memset(&v7[dword_618310], 0, 16LL * (a1 + 1 - dword_618310));
    dword_618310 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_4085D0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6183C0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_40A610(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4085D0(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_409D20(int a1, int a2, char *a3)
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
  return sub_409800(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409D20(int a1, int a2, char *a3)
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
  return sub_409800(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409D90(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_409800(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_409D90(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_409800(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_409E00(int a1, char *a2)
{
  return sub_409D20(0, a1, a2);
}

_BYTE *__fastcall sub_409E20(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_6184F0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_6184C0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6184D0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_6184E0);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_409800(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_409EA0(char *a1)
{
  return sub_409E20(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_409ED0(int a1, int a2, char *a3)
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
  return sub_409800(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409ED0(int a1, int a2, char *a3)
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
  return sub_409800(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409F40(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_6184C0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_6184D0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6184E0);
  v9 = qword_6184F0;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_409800(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_40A030(int a1, char *a2)
{
  return sub_409800(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6182C0);
}

_BYTE *__fastcall sub_40A050(char *a1)
{
  return sub_409800(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6182C0);
}

__int64 __fastcall sub_40A070(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_40A070(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_40A470(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_40A070(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_40A070(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_40A4D0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_40A070(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_40A070(a1, a2, a3, a4, v15, i);
}

int sub_40A590()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_410FD7);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_40A610(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_40A860();
  }
  return result;
}

void *__fastcall sub_40A670(void *a1, size_t a2)
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
        sub_40A860();
    }
  }
  return result;
}

void *__fastcall sub_40A810(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_40A610(n);
  return memcpy(v2, src, n);
}

noreturn void  sub_40A860()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_40A8A0(__int64 a1, int *a2)
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

__int64 __fastcall sub_40A980(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_40AFA0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_40A8A0(a2, a7);
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
    if ( !memcmp((const void *)v11[v16], "--", 3uLL) )
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
        sub_40A8A0((__int64)v11, a7);
        v18 = a7[11];
      }
      a7[12] = v10;
      *a7 = v10;
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
            return (unsigned int)sub_40A980(v10, v11, v12, v45, v46, a6, a7, v8, 4267035LL);
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_40A980(v10, v11, v12, v45, v46, a6, a7, v8, 4267036LL);
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
        return (unsigned int)sub_40A980(v10, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != v10 )
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
        else if ( v10 == (_DWORD)v36 )
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

__int64 __fastcall sub_40B570(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_618500 = dword_61831C;
  dword_618504 = dword_618318;
  result = sub_40AFA0(a1, a2, a3, a4, a5, a6, &dword_618500, a7);
  dword_61831C = dword_618500;
  qword_618550 = qword_618510;
  dword_618314 = dword_618508;
  return result;
}

__int64 __fastcall sub_40B5D0(int a1, __int64 a2, char *a3)
{
  return sub_40B570(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40B5F0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40B570(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40B610(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40AFA0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40B630(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40B570(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40B650(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40AFA0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40B670(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40C490(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_40B6F0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // er10
  int v11; // er12

  v10 = (unsigned __int64)(a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (a6 >> 2) + 475 - ((a6 & 3) == 0);
  return a5
       + 60
       * (a4
        + 60
        * (a3
         + 24
         * ((int)(v10
                - v11
                - (v10 / 25
                 - ((unsigned int)(v10 % 25) >> 31)
                 - (v11 / 25
                  - ((unsigned int)(v11 % 25) >> 31)))
                + ((int)(v10 / 25 - ((unsigned int)(v10 % 25) >> 31)) >> 2)
                - ((int)(v11 / 25 - ((unsigned int)(v11 % 25) >> 31)) >> 2))
          + 365 * (a1 - a6)
          + a2
          - a7)
         - a8)
        - a9)
       - a10;
}

__int64 __fastcall sub_40B810(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int *a7)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // of
  __int64 result; // rax

  v7 = a6;
  if ( !a7
    || (v8 = sub_40B6F0(a1, a2, a3, a4, a5, a7[5], a7[7], a7[2], a7[1], *a7),
        v9 = __OFADD__(v7, v8),
        result = v7 + v8,
        v9) )
  {
    if ( v7 < 0 )
    {
      if ( v7 >= -9223372036854775806LL )
        result = 0x8000000000000000LL;
      else
        result = v7 + 1;
    }
    else
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      if ( v7 > 9223372036854775805LL )
        result = v7 - 1;
    }
  }
  return result;
}

__int64 __fastcall sub_40B8B0(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v9 = *a2;
  result = a1(&v9, a3);
  if ( !result )
  {
    v5 = *a2;
    v6 = 0LL;
    if ( *a2 )
    {
      while ( 1 )
      {
        v7 = (v6 >> 1) + (v5 >> 1);
        v8 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        if ( v6 != v8 && v5 != v8 )
          break;
        v9 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        result = a1(&v9, v3);
        if ( !result )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !result && v6 )
      {
        v9 = v6;
        result = a1(&v9, v3);
      }
    }
  }
  return result;
}

__int64 __fastcall sub_40B970(int *a1, __int64 (__fastcall *a2)(__int64 *, __int64), _QWORD *a3)
{
  int *v3; // r14
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edi
  _BOOL4 v7; // edx
  __int64 v8; // rbx
  int v9; // er12
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  int v14; // er12
  __int64 v15; // r14
  int *v16; // rax
  __int64 v17; // r15
  __int64 result; // rax
  bool v19; // dl
  __m128i *v20; // r14
  int v21; // esi
  __int64 v22; // rdx
  bool v23; // of
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rdx
  int i; // er13
  int v29; // er12
  int v30; // er15
  int v31; // [rsp+Ch] [rbp-10Ch]
  __int64 (__fastcall *v32)(__int64 *, __int64); // [rsp+10h] [rbp-108h]
  int v33; // [rsp+18h] [rbp-100h]
  int v34; // [rsp+1Ch] [rbp-FCh]
  int v35; // [rsp+28h] [rbp-F0h]
  _QWORD *v36; // [rsp+30h] [rbp-E8h]
  __int64 v37; // [rsp+38h] [rbp-E0h]
  int v38; // [rsp+40h] [rbp-D8h]
  int v39; // [rsp+44h] [rbp-D4h]
  __m128i *v40; // [rsp+48h] [rbp-D0h]
  __int64 v41; // [rsp+50h] [rbp-C8h]
  __int64 v42; // [rsp+58h] [rbp-C0h]
  __int128 v43; // [rsp+60h] [rbp-B8h]
  __int128 v44; // [rsp+70h] [rbp-A8h]
  __int128 v45; // [rsp+80h] [rbp-98h]
  __int64 v46; // [rsp+90h] [rbp-88h]
  __int64 v47; // [rsp+A0h] [rbp-78h]
  int v48; // [rsp+C0h] [rbp-58h]

  v3 = a1;
  v32 = a2;
  v4 = a1[3];
  v38 = *a1;
  v36 = a3;
  v31 = a1[1];
  v5 = a1[2];
  v6 = a1[4];
  v33 = v5;
  v35 = v3[8];
  v7 = 0;
  v8 = v3[5] + (__int64)(int)(v6 / 12 - ((unsigned int)(v6 % 12) >> 31));
  if ( !(v8 & 3) )
  {
    v7 = 1;
    if ( v8 == 100 * (v8 / 100) )
      v7 = ((v8 / 100) & 3) == 1;
  }
  v9 = 59;
  v10 = 6;
  v11 = (unsigned __int16)word_414BA0[13LL * v7 + (((v6 % 12) >> 31) & 0xC) + v6 % 12] - 1 + v4;
  if ( v38 <= 59 )
    v9 = v38;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v34 = v12;
  v39 = -(int)*v36;
  v13 = sub_40B6F0(v8, v11, v33, v31, v12, 70, 0, 0, 0, v39);
  v37 = v13;
  v41 = v13;
  v40 = (__m128i *)v3;
  v14 = 0;
  v15 = v13;
  while ( 1 )
  {
    v16 = (int *)sub_40B8B0(v32, &v41, (__int64)&v43);
    v17 = v41;
    result = sub_40B810(v8, v11, v33, v31, v34, v41, v16);
    if ( v17 == result )
      break;
    if ( v17 == v13 && v17 != v15 )
    {
      if ( (int)v45 < 0 )
        goto LABEL_17;
      v19 = (_DWORD)v45 != 0;
      if ( v35 < 0 )
      {
        if ( v19 >= v14 )
        {
LABEL_17:
          v20 = v40;
          result = v17;
          goto LABEL_18;
        }
      }
      else if ( (v35 != 0) != v19 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v10 )
      return -1LL;
    v41 = result;
    v13 = v15;
    v15 = v17;
    v14 = v45 != 0;
  }
  v20 = v40;
  if ( (v35 == 0) != ((_DWORD)v45 == 0) && v35 >= 0 && (int)v45 >= 0 )
  {
    for ( i = 601200; i != 269337600; i += 601200 )
    {
      v29 = 2;
      v30 = -i;
      v42 = result + -i;
      if ( !__OFADD__(result, -i) )
      {
LABEL_35:
        sub_40B8B0(v32, &v42, (__int64)&v47);
        if ( (v35 == 0) == (v48 == 0) || v48 < 0 )
        {
          v41 = sub_40B810(v8, v11, v33, v31, v34, v42, (int *)&v47);
          sub_40B8B0(v32, &v41, (__int64)&v43);
          result = v41;
          break;
        }
        result = v41;
      }
      while ( 1 )
      {
        v30 += 2 * i;
        if ( v29 == 1 )
          break;
        v29 = 1;
        v42 = result + v30;
        if ( !__OFADD__(result, v30) )
          goto LABEL_35;
      }
    }
  }
LABEL_18:
  v21 = v43;
  *v36 = result - (v37 + v39);
  if ( v21 == v38 )
    goto LABEL_22;
  v22 = ((v38 <= 0) & (unsigned __int8)(v21 == 60)) - (__int64)v34 + v38;
  v23 = __OFADD__(v22, result);
  v24 = v22 + result;
  v41 = v24;
  if ( !v23 )
  {
    v47 = v24;
    if ( v32(&v47, (__int64)&v43) )
    {
      result = v41;
LABEL_22:
      v25 = _mm_load_si128((const __m128i *)&v44);
      v26 = _mm_load_si128((const __m128i *)&v45);
      v27 = v46;
      *v20 = _mm_load_si128((const __m128i *)&v43);
      v20[1] = v25;
      v20[2] = v26;
      v20[3].m128i_i64[0] = v27;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40BDB0(int *a1)
{
  tzset();
  return sub_40B970(a1, (__int64 (__fastcall *)(__int64 *, __int64))localtime_r, &unk_618538);
}

__int64 __fastcall sub_40BDD0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  if ( *(_BYTE *)(a1 + 8) )
    v1 = setenv("TZ", (const char *)(a1 + 9), 1);
  else
    v1 = unsetenv("TZ");
  v2 = 0;
  if ( !v1 )
  {
    tzset();
    v2 = 1;
  }
  return v2;
}

void __fastcall sub_40BE20(_QWORD *a1)
{
  _QWORD *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_40BE50(_QWORD *a1)
{
  int *v1; // rbx
  int v2; // er13
  unsigned int v3; // ebp

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_40BDD0((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_40BE20(a1);
  *v1 = v2;
  return v3;
}

_QWORD *__fastcall sub_40BEA0(void *src)
{
  void *v1; // r12
  size_t v2; // rax
  __int64 v3; // rdi
  size_t v4; // rbp
  char *v5; // rax
  _BYTE *v6; // rbx
  _QWORD *result; // rax

  if ( src )
  {
    v1 = src;
    v2 = strlen((const char *)src);
    v3 = 118LL;
    v4 = v2 + 1;
    if ( v2 + 1 >= 0x76 )
      v3 = v2 + 1;
    v5 = (char *)malloc((v3 + 17) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_WORD *)v5 + 4) = 1;
      memcpy(v5 + 9, v1, v4);
      v6[v4 + 9] = 0;
    }
    return v6;
  }
  result = malloc(0x80uLL);
  v6 = result;
  if ( !result )
    return v6;
  *result = 0LL;
  *((_WORD *)result + 4) = 0;
  return result;
}

__int64 __fastcall sub_40BF30(__int64 *a1, unsigned __int64 a2)
{
  char *v2; // r12
  __int64 *v3; // rbp
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rax
  size_t v8; // r15
  char *v9; // rax
  _QWORD *v10; // rax

  v2 = *(char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (char *)a1 + 9;
    if ( !*v2 )
    {
      v5 = "%s: invalid option -- '%c'\n" + 27;
      goto LABEL_12;
    }
LABEL_5:
    if ( !strcmp(v5, v2) )
      goto LABEL_12;
    while ( 1 )
    {
      if ( !*v5 )
      {
        v6 = (__int64)v3 + 9;
        if ( (char *)v3 + 9 != v5 )
        {
          v8 = strlen(v2) + 1;
          v9 = &v5[-v6];
          if ( ~(unsigned __int64)&v5[-v6] < v8 )
          {
            *__errno_location() = 12;
            return 0LL;
          }
LABEL_19:
          if ( (unsigned __int64)&v9[v8] <= 0x76 )
          {
            memcpy(v5, v2, v8);
            v5[v8] = 0;
            goto LABEL_12;
          }
          v10 = sub_40BEA0(v2);
          *v3 = (__int64)v10;
          if ( !v10 )
            return 0LL;
          *((_BYTE *)v10 + 8) = 0;
          v5 = (char *)v10 + 9;
LABEL_12:
          *(_QWORD *)(a2 + 48) = v5;
          return 1LL;
        }
        if ( !*((_BYTE *)v3 + 8) )
        {
          v8 = strlen(v2) + 1;
          v9 = 0LL;
          goto LABEL_19;
        }
      }
      v5 += strlen(v5) + 1;
      if ( *v5 )
        goto LABEL_5;
      v7 = (__int64 *)*v3;
      if ( !*v3 )
        goto LABEL_5;
      v5 = (char *)v7 + 9;
      v3 = (__int64 *)*v3;
      if ( !strcmp((const char *)v7 + 9, v2) )
        goto LABEL_12;
    }
  }
  return result;
}

__int64 __fastcall sub_40C0B0(__int64 a1)
{
  char *v1; // rax
  char *v2; // rbp
  _QWORD *v3; // rbx
  int *v5; // rbp
  int v6; // er12

  v1 = getenv("TZ");
  v2 = v1;
  if ( v1 )
  {
    if ( *(_BYTE *)(a1 + 8) && !strcmp((const char *)(a1 + 9), v1) )
      return 1LL;
  }
  else if ( !*(_BYTE *)(a1 + 8) )
  {
    return 1LL;
  }
  v3 = sub_40BEA0(v2);
  if ( !v3 || (unsigned __int8)sub_40BDD0(a1) )
    return (__int64)v3;
  v5 = __errno_location();
  v6 = *v5;
  if ( v3 != (_QWORD *)1 )
    sub_40BE20(v3);
  *v5 = v6;
  return 0LL;
}

void __fastcall sub_40C160(_QWORD *a1)
{
  if ( a1 != (_QWORD *)1 )
    sub_40BE20(a1);
}

struct tm *__fastcall sub_40C180(__int64 *a1, const time_t *a2, struct tm *a3)
{
  struct tm *v3; // rbx
  _QWORD *v4; // r13

  if ( !a1 )
    return gmtime_r(a2, a3);
  v3 = a3;
  v4 = (_QWORD *)sub_40C0B0((__int64)a1);
  if ( v4 )
  {
    if ( localtime_r(a2, v3) && (unsigned __int8)sub_40BF30(a1, (unsigned __int64)v3) )
    {
      if ( v4 == (_QWORD *)1 || (unsigned __int8)sub_40BE50(v4) )
        return v3;
    }
    else if ( v4 != (_QWORD *)1 )
    {
      sub_40BE50(v4);
    }
  }
  return 0LL;
}

time_t __fastcall sub_40C230(__int64 *a1, int *a2)
{
  _QWORD *v2; // r12
  time_t result; // rax
  int v4; // eax
  time_t timer; // [rsp+8h] [rbp-60h]
  struct tm tp; // [rsp+10h] [rbp-58h]

  if ( !a1 )
    return sub_40C350(a2);
  v2 = (_QWORD *)sub_40C0B0((__int64)a1);
  if ( !v2 )
    goto LABEL_20;
  timer = sub_40BDB0(a2);
  if ( timer != -1
    || localtime_r(&timer, &tp)
    && ((v4 = a2[8], (v4 == 0) == (tp.tm_isdst == 0)) || v4 < 0 || tp.tm_isdst < 0)
    && !(tp.tm_sec ^ *a2 | tp.tm_min ^ a2[1] | tp.tm_hour ^ a2[2] | tp.tm_mday ^ a2[3] | tp.tm_year ^ a2[5] | tp.tm_mon ^ a2[4]) )
  {
    if ( !(unsigned __int8)sub_40BF30(a1, (unsigned __int64)a2) )
      timer = -1LL;
  }
  if ( v2 == (_QWORD *)1 || (unsigned __int8)sub_40BE50(v2) )
    result = timer;
  else
LABEL_20:
    result = -1LL;
  return result;
}

__int64 __fastcall sub_40C350(int *a1)
{
  a1[8] = 0;
  return sub_40B970(a1, (__int64 (__fastcall *)(__int64 *, __int64))gmtime_r, &unk_618540);
}

__int64 __fastcall sub_40C370(FILE *s, __int64 a2, __int64 a3)
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
  v3 = (char *)sub_40E420(&v11, &n, a2, a3);
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
    sub_40E410(s);
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

__int64 __fastcall sub_40C430(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40E2F0(stream);
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

bool __fastcall sub_40C490(int a1)
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

const char *sub_40C4F0()
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
                sub_40E2F0(v60);
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
            sub_40E2F0(v39);
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

__int64 __fastcall sub_40CA60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_tolower_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_40CAB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_toupper_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __usercall sub_40CB00(void *s, char *a2, const __m128i *a3, __int64 a4, char a5, __int64 a6, int a7)
{
  char *v7; // r15
  char *v8; // rbx
  __int64 v9; // r12
  int v10; // er11
  char v11; // al
  __int64 v12; // r14
  char *v13; // r8
  char v15; // r11
  char v16; // r8
  int i; // er12
  int v18; // eax
  char v19; // cl
  int v20; // er9
  bool v21; // cc
  int v22; // ebp
  int v23; // eax
  unsigned int v24; // edx
  int v25; // edi
  char *v26; // rax
  char *v27; // r8
  char v28; // r13
  size_t v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rbx
  size_t v33; // rdx
  char *v34; // rdi
  char *v35; // rsi
  size_t v36; // rdx
  char *v37; // rdi
  unsigned __int64 v38; // rcx
  __int64 v39; // r13
  __m128i v40; // xmm4
  __m128i v41; // xmm2
  __int64 v42; // rax
  time_t v43; // rax
  time_t v44; // rsi
  time_t v45; // rcx
  int v46; // edx
  char v47; // al
  char v48; // dl
  int v49; // er10
  char *v50; // rcx
  unsigned __int64 v51; // rax
  size_t v52; // r9
  unsigned __int64 v53; // r9
  size_t v54; // rdx
  char *v55; // rdi
  unsigned __int64 v56; // r10
  int v57; // eax
  unsigned __int64 v58; // rsi
  size_t v59; // rdx
  char *v60; // rdi
  __int32 v61; // er10
  __int32 v62; // er13
  int v63; // edi
  int v64; // er8
  int v65; // eax
  int v66; // er13
  int v67; // er13
  int v68; // edi
  unsigned int v69; // esi
  int v70; // edi
  unsigned int v71; // er8
  unsigned __int64 v72; // r13
  int v73; // eax
  unsigned __int64 v74; // rsi
  char v75; // r11
  char v76; // r8
  size_t v77; // rdx
  char *v78; // rdi
  int v79; // esi
  unsigned __int64 v80; // r13
  size_t v81; // rdx
  char *v82; // rdi
  char *v83; // rcx
  __int64 v84; // rax
  int v85; // edx
  unsigned __int64 v86; // rsi
  size_t v87; // rdx
  char *v88; // rdi
  size_t v89; // rdx
  char *v90; // rdi
  int v91; // esi
  int v92; // edi
  int v93; // edx
  __int64 v94; // rax
  char *v95; // r9
  size_t v96; // rcx
  size_t v97; // rax
  unsigned __int64 v98; // rdx
  size_t v99; // rdx
  char *v100; // rdi
  size_t v101; // rcx
  __int64 j; // r13
  __int64 v103; // rsi
  int v104; // eax
  int v105; // esi
  char v106; // cl
  int v107; // esi
  size_t v108; // rdx
  char *v109; // rdi
  int v110; // eax
  int v111; // eax
  char v112; // al
  __int64 v113; // rdx
  char v114; // cl
  unsigned __int64 v115; // r12
  unsigned __int64 v116; // r8
  size_t v117; // rdx
  __int64 v118; // r12
  char *v119; // rdi
  int v120; // eax
  unsigned __int64 v121; // rcx
  char *v122; // rdi
  int v123; // esi
  int v124; // edx
  int v125; // er10
  int v126; // esi
  int k; // edi
  __int32 v128; // esi
  bool v129; // sf
  bool v130; // of
  int v131; // eax
  int v132; // eax
  int v133; // esi
  int v134; // esi
  __int64 v135; // [rsp+0h] [rbp-4C8h]
  const __m128i *tp; // [rsp+8h] [rbp-4C0h]
  char *v137; // [rsp+20h] [rbp-4A8h]
  char v138; // [rsp+2Bh] [rbp-49Dh]
  int v139; // [rsp+2Ch] [rbp-49Ch]
  char *v140; // [rsp+30h] [rbp-498h]
  char v141; // [rsp+30h] [rbp-498h]
  unsigned __int64 v142; // [rsp+30h] [rbp-498h]
  char v143; // [rsp+30h] [rbp-498h]
  int v144; // [rsp+30h] [rbp-498h]
  char v145; // [rsp+30h] [rbp-498h]
  char v146; // [rsp+30h] [rbp-498h]
  size_t v147; // [rsp+30h] [rbp-498h]
  char v148; // [rsp+30h] [rbp-498h]
  size_t v149; // [rsp+30h] [rbp-498h]
  int v150; // [rsp+30h] [rbp-498h]
  char v151; // [rsp+40h] [rbp-488h]
  char *v152; // [rsp+40h] [rbp-488h]
  char *v153; // [rsp+40h] [rbp-488h]
  char v154; // [rsp+40h] [rbp-488h]
  char *v155; // [rsp+40h] [rbp-488h]
  char v156; // [rsp+40h] [rbp-488h]
  char v157; // [rsp+40h] [rbp-488h]
  char v158; // [rsp+40h] [rbp-488h]
  char *v159; // [rsp+40h] [rbp-488h]
  char *v160; // [rsp+40h] [rbp-488h]
  char v161; // [rsp+40h] [rbp-488h]
  char *v162; // [rsp+40h] [rbp-488h]
  char v163; // [rsp+40h] [rbp-488h]
  int v164; // [rsp+48h] [rbp-480h]
  unsigned __int64 v165; // [rsp+48h] [rbp-480h]
  char *v166; // [rsp+48h] [rbp-480h]
  unsigned __int64 v167; // [rsp+48h] [rbp-480h]
  char v168; // [rsp+48h] [rbp-480h]
  char *v169; // [rsp+48h] [rbp-480h]
  char *v170; // [rsp+48h] [rbp-480h]
  char v171; // [rsp+48h] [rbp-480h]
  int v172; // [rsp+48h] [rbp-480h]
  char v173; // [rsp+48h] [rbp-480h]
  unsigned __int64 v174; // [rsp+50h] [rbp-478h]
  int v175; // [rsp+50h] [rbp-478h]
  size_t v176; // [rsp+50h] [rbp-478h]
  unsigned __int64 v177; // [rsp+50h] [rbp-478h]
  int v178; // [rsp+50h] [rbp-478h]
  size_t v179; // [rsp+58h] [rbp-470h]
  char *v180; // [rsp+58h] [rbp-470h]
  char v181; // [rsp+58h] [rbp-470h]
  unsigned __int64 v182; // [rsp+58h] [rbp-470h]
  unsigned __int64 v183; // [rsp+58h] [rbp-470h]
  unsigned __int64 v184; // [rsp+60h] [rbp-468h]
  char format[2]; // [rsp+70h] [rbp-458h]
  char v186; // [rsp+72h] [rbp-456h]
  char v187; // [rsp+73h] [rbp-455h]
  char v188[9]; // [rsp+87h] [rbp-441h]
  char sa[16]; // [rsp+90h] [rbp-438h]
  __m128i v190; // [rsp+A0h] [rbp-428h]
  __m128i v191; // [rsp+B0h] [rbp-418h]
  __int64 v192; // [rsp+C0h] [rbp-408h]

  v7 = (char *)s;
  v8 = a2;
  v9 = a3[3].m128i_i64[0];
  v10 = a3->m128i_i64[1];
  v135 = a4;
  tp = a3;
  if ( !v9 )
    v9 = 4279188LL;
  v138 = a5;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = *a2;
  v12 = 0LL;
  if ( !*a2 )
  {
LABEL_13:
    if ( v7 && v135 )
      *v7 = 0;
    return v12;
  }
  v139 = v10;
  v137 = (char *)v9;
  while ( v11 != 37 )
  {
    if ( (unsigned __int64)(v135 - v12) <= 1 )
      return 0LL;
    if ( v7 )
      *v7++ = v11;
    ++v12;
    v13 = v8;
LABEL_12:
    v11 = v13[1];
    v8 = v13 + 1;
    if ( !v11 )
      goto LABEL_13;
  }
  v15 = v138;
  v16 = 0;
LABEL_22:
  for ( i = 0; ; i = v18 )
  {
    v18 = *++v8;
    v19 = *v8;
    v20 = *v8;
    v21 = *v8 <= 48;
    if ( *v8 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !v21 )
    {
      if ( (_BYTE)v18 == 94 )
      {
        v15 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v18 != 95 )
      {
        v22 = -1;
        if ( (unsigned int)(v18 - 48) > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v18 != 35 )
      break;
    v18 = *++v8;
    v16 = 1;
    v19 = *v8;
    v20 = *v8;
    v21 = *v8 <= 48;
    if ( *v8 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v18 == 45 )
    goto LABEL_26;
  v22 = -1;
  if ( (unsigned int)(v18 - 48) > 9 )
    goto LABEL_29;
LABEL_37:
  v22 = 0;
  while ( 1 )
  {
    v23 = v8[1];
    v19 = v8[1];
    v24 = v23 - 48;
    if ( v22 > 214748364 )
      break;
    v25 = *v8;
    if ( v22 == 214748364 && (char)v25 > 55 )
      break;
    ++v8;
    v22 = v25 + 10 * v22 - 48;
LABEL_41:
    if ( v24 > 9 )
    {
      v20 = v23;
      goto LABEL_29;
    }
  }
  if ( v24 <= 9 )
  {
    v23 = v8[2];
    v22 = 0x7FFFFFFF;
    v8 += 2;
    v19 = v23;
    v24 = v23 - 48;
    goto LABEL_41;
  }
  v20 = *++v8;
  v22 = 0x7FFFFFFF;
LABEL_29:
  if ( v19 == 69 || v19 == 79 )
    v19 = *++v8;
  else
    v20 = 0;
  switch ( v19 )
  {
    case 0:
      v95 = v8 - 1;
      v106 = *(v8 - 1);
      goto LABEL_263;
    case 37:
      LODWORD(v97) = 0;
      v80 = 1LL;
      v98 = v135 - v12;
      if ( v22 >= 0 )
        LODWORD(v97) = v22;
      v97 = (int)v97;
      if ( (_DWORD)v97 )
        v80 = (int)v97;
      if ( v20 )
      {
        v13 = v8;
        v95 = v8;
        v96 = 1LL;
        goto LABEL_244;
      }
      if ( v80 < v98 )
      {
        if ( v7 )
        {
          if ( v22 > 1 )
          {
            v108 = v22 - 1LL;
            v109 = v7;
            v7 += v108;
            if ( i == 48 )
              memset(v109, 48, v108);
            else
              memset(v109, 32, v108);
            v19 = *v8;
          }
          *v7++ = v19;
        }
LABEL_176:
        v12 += v80;
        v13 = v8;
        goto LABEL_12;
      }
      return 0LL;
    case 58:
      v112 = v8[1];
      v113 = (__int64)(v8 + 1);
      for ( j = 1LL; v112 == 58; v113 = (__int64)&v8[j] )
        v112 = v8[++j];
      if ( v112 != 122 )
        goto LABEL_238;
      v8 = (char *)v113;
      goto LABEL_254;
    case 65:
    case 66:
    case 97:
      if ( v20 )
        goto LABEL_238;
      if ( v16 )
        v15 = v16;
      goto LABEL_51;
    case 67:
      if ( v20 == 69 )
        goto LABEL_336;
      v145 = 0;
      v49 = 2;
      LOBYTE(v71) = tp[1].m128i_i32[1] < -1900;
      v69 = tp[1].m128i_i32[1] / 100
          + 19
          - ((tp[1].m128i_i32[1] / 100 + 19 > 0) & ((unsigned int)(tp[1].m128i_i32[1] % 100) >> 31));
      v70 = 0;
      goto LABEL_122;
    case 68:
      if ( !v20 )
        goto LABEL_94;
      goto LABEL_238;
    case 70:
      if ( !v20 )
        goto LABEL_94;
      goto LABEL_238;
    case 71:
    case 86:
    case 103:
      if ( v20 == 69 )
        goto LABEL_238;
      v61 = tp[1].m128i_i32[3];
      v62 = tp[1].m128i_i32[2];
      v144 = tp[1].m128i_i32[1];
      v63 = v144 + ((v144 >> 31) & 0x190) - 100;
      v64 = v62 - 382 + 7 * ((v61 - v62 + 382) / 7) + 3;
      if ( v64 < 0 )
      {
        v123 = v144 + ((v144 >> 31) & 0x190) - 101;
        v124 = 365;
        if ( !(((_BYTE)v144 + ((v144 >> 31) & 0x90) - 101) & 3) )
        {
          v124 = 366;
          if ( v123 == 100 * (v123 / 100) )
            v124 = 366 - ((unsigned int)(v123 % 400) >= 1);
        }
        v125 = v124 + v61;
        v126 = v125 - v62;
        v67 = -1;
        v64 = v125 - (v126 + 382) + 7 * ((v126 + 382) / 7) + 3;
      }
      else
      {
        v65 = 365;
        if ( !(v63 & 3) )
        {
          v65 = 366;
          if ( v63 == 100 * (v63 / 100) )
            v65 = (v63 == 400 * (v63 / 400)) + 365;
        }
        v66 = v62 - 382 + 7 * ((v61 - v65 - v62 + 382) / 7) + 3;
        if ( v66 >= 0 )
          v64 = v66;
        v67 = (v66 >> 31) + 1;
      }
      if ( v19 == 71 )
      {
        v128 = tp[1].m128i_i32[1];
        v145 = 0;
        v49 = 4;
        v130 = __OFSUB__(v128, -1900 - v67);
        v129 = v128 - (-1900 - v67) < 0;
        v69 = v128 + v67 + 1900;
        LOBYTE(v71) = v129 ^ v130;
        v70 = 0;
        goto LABEL_122;
      }
      if ( v19 == 103 )
      {
        v49 = 2;
        v68 = (v67 + v144 % 100) % 100;
        v69 = v68;
        if ( v68 < 0 )
        {
          v69 = v68 + 100;
          if ( v144 < -1900 - v67 )
            v69 = -v68;
        }
      }
      else
      {
        v49 = 2;
        v69 = v64 / 7 + 1;
      }
      goto LABEL_121;
    case 72:
      if ( v20 == 69 )
        goto LABEL_238;
      v49 = 2;
      v69 = tp->m128i_i64[1];
      goto LABEL_121;
    case 73:
      if ( v20 == 69 )
        goto LABEL_238;
      v69 = v139;
      v49 = 2;
      goto LABEL_121;
    case 77:
      if ( v20 == 69 )
        goto LABEL_238;
      v49 = 2;
      v69 = HIDWORD(tp->m128i_i64[0]);
      goto LABEL_121;
    case 78:
      if ( v20 == 69 )
        goto LABEL_238;
      if ( v22 == -1 )
      {
        v69 = a7;
        v22 = 9;
        v49 = 9;
      }
      else
      {
        if ( v22 > 8 )
        {
          v69 = a7;
        }
        else
        {
          v69 = a7;
          for ( k = v22; k != 9; ++k )
            v69 = (int)v69 / 10;
        }
        v49 = v22;
      }
      goto LABEL_121;
    case 80:
      v28 = 1;
      goto LABEL_152;
    case 82:
    case 84:
LABEL_94:
      v56 = sub_40CB00(0LL, a6, a7);
      v57 = 0;
      if ( v22 >= 0 )
        v57 = v22;
      v58 = v57;
      if ( v56 >= v57 )
        v58 = v56;
      if ( v135 - v12 <= v58 )
        return 0LL;
      if ( v7 )
      {
        if ( v56 < v57 )
        {
          v174 = v56;
          v59 = v22 - v56;
          v60 = v7;
          v7 += v59;
          if ( i == 48 )
            memset(v60, 48, v59);
          else
            memset(v60, 32, v59);
          v56 = v174;
        }
        v167 = v56;
        sub_40CB00(v7, a6, a7);
        v7 += v167;
      }
      v12 += v58;
      v13 = v8;
      goto LABEL_12;
    case 83:
      if ( v20 == 69 )
        goto LABEL_238;
      v49 = 2;
      v69 = tp->m128i_i64[0];
      goto LABEL_121;
    case 85:
      if ( v20 == 69 )
        goto LABEL_238;
      v92 = tp[1].m128i_i32[3] - tp[1].m128i_i32[2] + 7;
      v93 = (unsigned __int64)(-1840700269LL * v92) >> 32;
      goto LABEL_228;
    case 87:
      if ( v20 == 69 )
        goto LABEL_238;
      v92 = 7 * ((tp[1].m128i_i32[2] + 6) / 7) - (tp[1].m128i_i32[2] + 6) + tp[1].m128i_i32[3] + 7;
      v93 = (unsigned __int64)(-1840700269LL * v92) >> 32;
LABEL_228:
      v49 = 2;
      v69 = ((v93 + v92) >> 2) - (v92 >> 31);
      goto LABEL_121;
    case 88:
    case 99:
    case 120:
      if ( v20 != 79 )
        goto LABEL_69;
      goto LABEL_238;
    case 89:
      if ( v20 == 69 )
        goto LABEL_336;
      if ( v20 == 79 )
        goto LABEL_238;
      v145 = 0;
      v49 = 4;
      v91 = tp[1].m128i_i32[1];
      LOBYTE(v71) = v91 < -1900;
      v69 = v91 + 1900;
      v70 = 0;
      goto LABEL_222;
    case 90:
      v168 = v16;
      if ( v16 )
        v15 = 0;
      v156 = v15;
      v72 = strlen(v137);
      v73 = 0;
      if ( v22 >= 0 )
        v73 = v22;
      v74 = v73;
      if ( v72 >= v73 )
        v74 = v72;
      if ( v135 - v12 <= v74 )
        return 0LL;
      if ( v7 )
      {
        v75 = v156;
        v76 = v168;
        if ( v72 < v73 )
        {
          v77 = v22 - v72;
          v78 = v7;
          v7 += v77;
          if ( i == 48 )
          {
            memset(v78, 48, v77);
            v75 = v156;
            v76 = v168;
          }
          else
          {
            memset(v78, 32, v77);
            v76 = v168;
            v75 = v156;
          }
        }
        if ( v76 )
        {
          sub_40CA60((__int64)v7, (__int64)v137, v72);
        }
        else if ( v75 )
        {
          sub_40CAB0((__int64)v7, (__int64)v137, v72);
        }
        else
        {
          memcpy(v7, v137, v72);
        }
        v7 += v72;
      }
      v12 += v74;
      v13 = v8;
      goto LABEL_12;
    case 98:
    case 104:
      if ( v16 )
        v15 = v16;
      if ( v20 )
        goto LABEL_238;
LABEL_51:
      v26 = &v186;
      v27 = v8;
      v28 = 0;
      *(_WORD *)format = 9504;
      v20 = 0;
      goto LABEL_52;
    case 100:
      if ( v20 == 69 )
        goto LABEL_238;
      v49 = 2;
      v69 = HIDWORD(tp->m128i_i64[1]);
      goto LABEL_121;
    case 101:
      if ( v20 == 69 )
        goto LABEL_238;
      v69 = HIDWORD(tp->m128i_i64[1]);
      goto LABEL_159;
    case 106:
      if ( v20 == 69 )
        goto LABEL_238;
      v145 = 0;
      v49 = 3;
      v107 = tp[1].m128i_i32[3];
      LOBYTE(v71) = v107 < -1;
      v69 = v107 + 1;
      v70 = 0;
      goto LABEL_122;
    case 107:
      if ( v20 == 69 )
        goto LABEL_238;
      v69 = tp->m128i_i64[1];
      goto LABEL_159;
    case 108:
      if ( v20 == 69 )
        goto LABEL_238;
      v69 = v139;
LABEL_159:
      v49 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_121;
    case 109:
      if ( v20 == 69 )
        goto LABEL_238;
      v145 = 0;
      v49 = 2;
      v79 = tp[1].m128i_i32[0];
      LOBYTE(v71) = v79 < -1;
      v69 = v79 + 1;
      v70 = 0;
      goto LABEL_122;
    case 110:
      LODWORD(v80) = 0;
      if ( v22 >= 0 )
        LODWORD(v80) = v22;
      v80 = (int)v80;
      if ( !(_DWORD)v80 )
        v80 = 1LL;
      if ( v135 - v12 <= v80 )
        return 0LL;
      if ( v7 )
      {
        if ( v22 > 1 )
        {
          v81 = v22 - 1LL;
          v82 = v7;
          v7 += v81;
          if ( i == 48 )
            memset(v82, 48, v81);
          else
            memset(v82, 32, v81);
        }
        *v7++ = 10;
      }
      goto LABEL_176;
    case 112:
      v28 = 0;
LABEL_152:
      v19 = 112;
      if ( v16 )
        v28 = v16;
      if ( v16 )
        v15 = 0;
      goto LABEL_70;
    case 113:
      v49 = 1;
      if ( v20 == 79 )
        goto LABEL_124;
      v145 = 0;
      LOBYTE(v71) = 0;
      v70 = 0;
      v69 = ((11 * tp[1].m128i_i32[0]) >> 5) + 1;
      goto LABEL_179;
    case 114:
LABEL_69:
      v28 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !v20 )
      {
        v27 = v8;
        v26 = &v186;
        goto LABEL_52;
      }
      v49 = 0;
      goto LABEL_125;
    case 115:
      v154 = v15;
      v39 = (__int64)v188;
      v40 = _mm_loadu_si128(tp + 2);
      v41 = _mm_loadu_si128(tp + 1);
      v42 = tp[3].m128i_i64[0];
      *(__m128i *)sa = _mm_loadu_si128(tp);
      v190 = v41;
      v191 = v40;
      v192 = v42;
      v43 = sub_40C230((__int64 *)a6, (int *)sa);
      v15 = v154;
      v44 = v43;
      v45 = v43;
      do
      {
        v46 = v45 % 10;
        v45 /= 10LL;
        v47 = 48 - v46;
        v48 = v46 + 48;
        if ( v44 < 0 )
          v48 = v47;
        *(_BYTE *)--v39 = v48;
      }
      while ( v45 );
      v49 = 1;
      if ( v22 > 0 )
        v49 = v22;
      if ( v44 >= 0 )
        goto LABEL_79;
      goto LABEL_300;
    case 116:
      LODWORD(v80) = 0;
      if ( v22 >= 0 )
        LODWORD(v80) = v22;
      v80 = (int)v80;
      if ( !(_DWORD)v80 )
        v80 = 1LL;
      if ( v135 - v12 <= v80 )
        return 0LL;
      if ( v7 )
      {
        if ( v22 > 1 )
        {
          v89 = v22 - 1LL;
          v90 = v7;
          v7 += v89;
          if ( i == 48 )
            memset(v90, 48, v89);
          else
            memset(v90, 32, v89);
        }
        *v7++ = 9;
      }
      goto LABEL_176;
    case 117:
      v49 = 1;
      v69 = (tp[1].m128i_i32[2] + 6) % 7 + 1;
      goto LABEL_121;
    case 119:
      if ( v20 == 69 )
        goto LABEL_238;
      v49 = 1;
      v69 = tp[1].m128i_u32[2];
      goto LABEL_121;
    case 121:
      if ( v20 == 69 )
      {
LABEL_336:
        v49 = 0;
        goto LABEL_124;
      }
      v49 = 2;
      v110 = tp[1].m128i_i32[1] % 100;
      v69 = v110;
      if ( v110 < 0 )
      {
        v111 = -v110;
        v69 += 100;
        if ( tp[1].m128i_i32[1] <= -1901 )
          v69 = v111;
      }
LABEL_121:
      v145 = 0;
      v70 = 0;
      v71 = v69 >> 31;
LABEL_122:
      if ( v20 == 79 )
      {
        if ( (_BYTE)v71 )
          goto LABEL_223;
LABEL_124:
        v28 = 0;
        *(_WORD *)format = 9504;
LABEL_125:
        v186 = v20;
        v27 = v8;
        v20 = v49;
        v26 = &v187;
LABEL_52:
        *v26 = v19;
        v26[1] = 0;
        v140 = v27;
        v164 = v20;
        v151 = v15;
        v29 = strftime(sa, 0x400uLL, format, (const struct tm *)tp);
        v13 = v140;
        if ( v29 )
        {
          v30 = v29 - 1;
          v31 = 0;
          if ( v22 >= 0 )
            v31 = v22;
          v32 = v31;
          if ( v30 >= v31 )
            v32 = v30;
          if ( v135 - v12 > v32 )
          {
            if ( v7 )
            {
              v15 = v151;
              if ( !v164 && v30 < v31 )
              {
                v165 = v30;
                v33 = v22 - v30;
                v152 = v140;
                v141 = v15;
                v34 = v7;
                v7 += v33;
                if ( i == 48 )
                {
                  memset(v34, 48, v33);
                  v15 = v141;
                  v13 = v152;
                  v30 = v165;
                }
                else
                {
                  memset(v34, 32, v33);
                  v30 = v165;
                  v13 = v152;
                  v15 = v141;
                }
              }
              v153 = v13;
              v35 = &sa[1];
              v36 = v30;
              v37 = v7;
              v142 = v30;
              if ( !v28 )
                goto LABEL_64;
              sub_40CA60((__int64)v7, (__int64)&sa[1], v30);
              v38 = v142;
              v13 = v153;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_222:
      if ( (_BYTE)v71 )
LABEL_223:
        v69 = -v69;
LABEL_179:
      v83 = v188;
      while ( 1 )
      {
        v39 = (__int64)(v83 - 1);
        if ( v70 & 1 )
        {
          v84 = (__int64)(v83 - 2);
          *--v83 = 58;
          v39 = v84;
        }
        v70 >>= 1;
        *(v83 - 1) = v69 % 0xA + 48;
        v83 = (char *)v39;
        if ( v69 <= 9 && !v70 )
          break;
        v69 /= 0xAu;
      }
      if ( v49 < v22 )
        v49 = v22;
      if ( (_BYTE)v71 )
      {
LABEL_300:
        v146 = 45;
        v114 = 45;
        if ( i == 45 )
          goto LABEL_301;
LABEL_191:
        v50 = &v188[-v39];
        LODWORD(v52) = v49 - 1 - (unsigned __int64)&v188[-v39];
        v51 = v135 - v12;
        if ( (int)v52 <= 0 )
        {
          LODWORD(v53) = 0;
          v116 = 1LL;
          if ( v22 >= 0 )
            LODWORD(v53) = v22;
          v53 = (int)v53;
          if ( (_DWORD)v53 )
            v116 = (int)v53;
          if ( v116 >= v51 )
            return 0LL;
          if ( v7 )
          {
            if ( !v49 && (unsigned __int64)(int)v53 > 1 )
            {
              v117 = v22 - 1LL;
              v184 = v116;
              v182 = (int)v53;
              v162 = &v7[v117];
              v171 = v15;
              if ( i == 48 )
              {
                memset(v7, 48, v117);
                v7 = v162;
                v15 = v171;
                v49 = 0;
                v53 = v182;
                v116 = v184;
                v50 = &v188[-v39];
              }
              else
              {
                memset(v7, 32, v117);
                v7 = v162;
                v50 = &v188[-v39];
                v116 = v184;
                v53 = v182;
                v49 = 0;
                v15 = v171;
              }
            }
            *(++v7 - 1) = v146;
          }
          v12 += v116;
          v13 = v8;
          v51 = v135 - v12;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v49 >= v51 )
            return 0LL;
          v85 = 0;
          v86 = 1LL;
          if ( v22 >= 0 )
            v85 = v22;
          if ( v85 )
            v86 = v85;
          if ( v86 >= v51 )
            return 0LL;
          v12 += v86;
          v52 = (int)v52;
          v13 = v8;
          if ( !v7 )
            goto LABEL_207;
          if ( !v49 && (unsigned __int64)v85 > 1 )
          {
            v179 = (int)v52;
            v87 = v22 - 1LL;
            v157 = v15;
            v88 = v7;
            v7 += v87;
            if ( i == 48 )
            {
              memset(v88, 48, v87);
              v15 = v157;
              v49 = 0;
              v50 = &v188[-v39];
              v52 = v179;
            }
            else
            {
              memset(v88, 32, v87);
              v52 = v179;
              v50 = &v188[-v39];
              v49 = 0;
              v15 = v157;
            }
          }
          ++v7;
          v13 = v8;
          *(v7 - 1) = v146;
LABEL_205:
          if ( v7 )
          {
            v180 = v50;
            v175 = v49;
            v169 = v13;
            v158 = v15;
            v147 = v52;
            memset(v7, 48, v52);
            v52 = v147;
            v50 = v180;
            v49 = v175;
            v13 = v169;
            v15 = v158;
            v7 += v147;
          }
LABEL_207:
          v12 += v52;
          v22 = 0;
          v53 = 0LL;
          v51 = v135 - v12;
          goto LABEL_84;
        }
LABEL_328:
        v118 = (int)v52;
        if ( (int)v52 >= v51 )
          return 0LL;
        if ( v7 )
        {
          v119 = v7;
          v178 = v52;
          v172 = v49;
          v7 += (int)v52;
          v163 = v15;
          memset(v119, 32, (int)v52);
          LODWORD(v52) = v178;
          v49 = v172;
          v15 = v163;
        }
        v12 += v118;
        v120 = v22 - v52;
        v21 = (int)v52 < v22;
        v22 = 0;
        if ( v21 )
          v22 = v120;
        v51 = v135 - v12;
        if ( v146 )
        {
          v53 = v22;
          v121 = 1LL;
          if ( v22 )
            v121 = v22;
          if ( v121 >= v51 )
            return 0LL;
          if ( v7 )
          {
            if ( !v49 && (unsigned __int64)v22 > 1 )
            {
              v122 = v7;
              v183 = v121;
              v7 += v22 - 1;
              v173 = v15;
              memset(v122, 32, v22 - 1LL);
              v121 = v183;
              v49 = 0;
              v15 = v173;
              v53 = v22;
            }
            *(++v7 - 1) = v146;
          }
          v12 += v121;
          v13 = v8;
          i = 95;
          v50 = &v188[-v39];
          v51 = v135 - v12;
        }
        else
        {
          v53 = v22;
          v13 = v8;
          i = 95;
          v50 = &v188[-v39];
        }
        goto LABEL_84;
      }
      if ( !v145 )
      {
LABEL_79:
        v50 = &v188[-v39];
        v51 = v135 - v12;
        if ( i == 45 || (LODWORD(v52) = v49 - (_DWORD)v50, v49 - (int)v50 <= 0) )
        {
          LODWORD(v53) = 0;
          v13 = v8;
          if ( v22 >= 0 )
            LODWORD(v53) = v22;
          v53 = (int)v53;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v49 >= v51 )
            return 0LL;
          v52 = (int)v52;
          v13 = v8;
          goto LABEL_205;
        }
        v146 = 0;
        goto LABEL_328;
      }
      if ( i != 45 )
      {
        v146 = 43;
        goto LABEL_191;
      }
      v114 = 43;
LABEL_301:
      LODWORD(v53) = 0;
      v115 = 1LL;
      if ( v22 >= 0 )
        LODWORD(v53) = v22;
      v53 = (int)v53;
      if ( (_DWORD)v53 )
        v115 = (int)v53;
      if ( v135 - v12 <= v115 )
        return 0LL;
      if ( v7 )
      {
        if ( !v49 && (unsigned __int64)(int)v53 > 1 )
        {
          v181 = v114;
          v177 = (int)v53;
          v161 = v15;
          memset(v7, 32, v22 - 1LL);
          v114 = v181;
          v53 = v177;
          v49 = 0;
          v15 = v161;
          v7 += v22 - 1;
        }
        *v7++ = v114;
      }
      v12 += v115;
      v13 = v8;
      i = 45;
      v50 = &v188[-v39];
      v51 = v135 - v12;
LABEL_84:
      v32 = v53;
      if ( (unsigned __int64)v50 >= v53 )
        v32 = (unsigned __int64)v50;
      if ( v32 < v51 )
      {
        if ( v7 )
        {
          if ( !v49 && (unsigned __int64)v50 < v53 )
          {
            v166 = v50;
            v54 = v22 - (_QWORD)v50;
            v155 = v13;
            v143 = v15;
            v55 = v7;
            v7 += v54;
            if ( i == 48 )
            {
              memset(v55, 48, v54);
              v15 = v143;
              v13 = v155;
              v50 = v166;
            }
            else
            {
              memset(v55, 32, v54);
              v50 = v166;
              v13 = v155;
              v15 = v143;
            }
          }
          v153 = v13;
          v36 = (size_t)v50;
          v35 = (char *)v39;
          v37 = v7;
          v142 = (unsigned __int64)v50;
LABEL_64:
          if ( v15 )
          {
            sub_40CAB0((__int64)v37, (__int64)v35, v36);
            v38 = v142;
            v13 = v153;
          }
          else
          {
            memcpy(v37, v35, v36);
            v13 = v153;
            v38 = v142;
          }
LABEL_66:
          v7 += v38;
        }
LABEL_67:
        v12 += v32;
        goto LABEL_12;
      }
      return 0LL;
    case 122:
      j = 0LL;
LABEL_254:
      if ( tp[2].m128i_i32[0] < 0 )
      {
        v13 = v8;
        goto LABEL_12;
      }
      v103 = tp[2].m128i_i64[1];
      LOBYTE(v71) = 1;
      if ( (int)v103 >= 0 )
      {
        LOBYTE(v71) = 0;
        if ( !(_DWORD)v103 )
          LOBYTE(v71) = *v137 == 45;
      }
      v150 = (int)v103 / 3600;
      v104 = (int)v103 / 60 % 60;
      v70 = (int)v103 / 60 % 60;
      v105 = (int)v103 % 60;
      if ( j == 1 )
        goto LABEL_364;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_383;
        if ( j != 3 )
        {
          v106 = *v8;
          v95 = v8;
LABEL_263:
          LODWORD(v97) = 0;
          v98 = v135 - v12;
          if ( v22 >= 0 )
            LODWORD(v97) = v22;
          v97 = (int)v97;
          if ( v106 == 37 )
          {
            v80 = 1LL;
            v13 = v95;
            v96 = 1LL;
            if ( (_DWORD)v97 )
              v80 = (int)v97;
          }
          else
          {
            v8 = v95;
LABEL_238:
            v94 = (__int64)(v8 - 1);
            do
            {
              v95 = (char *)v94;
              LODWORD(v96) = (_DWORD)v8 - 1 + 2 - v94--;
            }
            while ( *(_BYTE *)(v94 + 1) != 37 );
            LODWORD(v97) = 0;
            v96 = (int)v96;
            v13 = v8;
            v98 = v135 - v12;
            if ( v22 >= 0 )
              LODWORD(v97) = v22;
            v97 = (int)v97;
            v80 = (int)v97;
            if ( (int)v96 >= (unsigned __int64)(int)v97 )
              v80 = (int)v96;
          }
LABEL_244:
          if ( v98 > v80 )
          {
            if ( v7 )
            {
              if ( v96 < v97 )
              {
                v176 = v96;
                v99 = v22 - v96;
                v170 = v13;
                v159 = v95;
                v148 = v15;
                v100 = v7;
                v7 += v99;
                if ( i == 48 )
                {
                  memset(v100, 48, v99);
                  v15 = v148;
                  v95 = v159;
                  v13 = v170;
                  v96 = v176;
                }
                else
                {
                  memset(v100, 32, v99);
                  v96 = v176;
                  v13 = v170;
                  v95 = v159;
                  v15 = v148;
                }
              }
              v160 = v13;
              v149 = v96;
              if ( v15 )
              {
                sub_40CAB0((__int64)v7, (__int64)v95, v96);
                v101 = v149;
                v13 = v160;
              }
              else
              {
                memcpy(v7, v95, v96);
                v13 = v160;
                v101 = v149;
              }
              v7 += v101;
            }
            v12 += v80;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v105 )
        {
LABEL_383:
          v131 = 10000 * v150;
          v49 = 9;
          v145 = 1;
          v132 = 100 * v70 + v131;
          v70 = 20;
          v69 = v132 + v105;
        }
        else if ( v104 )
        {
LABEL_364:
          v133 = 100 * v150;
          v49 = 6;
          v145 = 1;
          v69 = v70 + v133;
          v70 = 4;
        }
        else
        {
          v69 = v150;
          v49 = 3;
          v145 = 1;
        }
      }
      else
      {
        v134 = 100 * v150;
        v70 = 0;
        v145 = 1;
        v49 = 5;
        v69 = v104 + v134;
      }
      goto LABEL_122;
    default:
      goto LABEL_238;
  }
}

__int64 __fastcall sub_40E2D0(void *a1, __int64 a2, char *a3, const __m128i *a4, __int64 a5, int a6)
{
  return sub_40CB00(a1, a3, a4, a2, 0, a5, a6);
}

int __fastcall sub_40E2F0(FILE *stream)
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
  if ( !(unsigned int)sub_40E370(stream) )
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

int __fastcall sub_40E370(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_40E3B0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_40E3B0(FILE *a1, __off_t a2, int a3)
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

void __fastcall sub_40E410(_DWORD *a1)
{
  *a1 |= 0x20u;
}

char *__fastcall sub_40E420(void *a1, size_t *a2, char *a3, __int64 a4)
{
  char *v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  size_t v8; // rdi
  _BYTE *v9; // rax
  size_t v10; // r12
  char *v11; // r14
  char *v12; // r8
  char *v13; // rbx
  size_t v14; // r15
  _BYTE *v15; // rcx
  char *v16; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // r13
  bool v19; // dl
  char *v20; // rax
  char *v21; // rax
  void *v22; // rsp
  char *v23; // rax
  char v24; // r15
  __int64 v25; // rax
  char *v26; // r8
  long double *v27; // rdx
  int v28; // eax
  char v29; // al
  int v30; // eax
  char *v31; // r15
  _BYTE *v32; // rdi
  _BYTE *v33; // rsi
  _BYTE *v34; // rdx
  _BYTE *v35; // rsi
  _BYTE *v36; // rdx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // rax
  char *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rax
  char *v45; // r11
  int *v46; // rax
  char *v47; // r11
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r10
  char *v50; // rdx
  char *v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // r8
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  void *v56; // r15
  char *result; // rax
  unsigned __int64 v58; // rax
  char *v59; // rax
  char v61; // fps^1
  char *v65; // rdx
  char *v66; // rdi
  int v67; // er11
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  char *v70; // rdi
  int *v71; // r9
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  bool v75; // cf
  unsigned __int64 v76; // rax
  bool v77; // bl
  char *v78; // rax
  __int64 v79; // r9
  int v80; // ebx
  char *v81; // rdi
  unsigned __int64 v82; // rax
  void *v83; // rax
  char *v84; // rax
  char *v85; // rcx
  int v86; // er8
  __int16 v87; // ax
  unsigned __int64 v88; // r15
  char *v89; // rax
  char *v90; // rax
  char *v91; // rax
  char v92; // al
  unsigned __int64 v93; // r9
  size_t v94; // r8
  unsigned __int64 v95; // r10
  unsigned __int64 v96; // rdi
  __int64 v97; // rax
  unsigned __int64 v98; // r10
  unsigned __int64 v99; // rax
  char *v100; // rax
  __int64 v101; // rsi
  char v102; // al
  size_t v103; // r15
  size_t v104; // r14
  bool v105; // r13
  char *v106; // rax
  char *v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // r10
  char *v110; // rax
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rdx
  char v115; // al
  __int64 v116; // rdx
  unsigned __int64 v117; // rax
  char *v118; // rax
  __int64 v119; // rdx
  char v120; // al
  unsigned __int64 v121; // rax
  __int64 v122; // rsi
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rax
  char *v126; // rsi
  char *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rsi
  unsigned __int64 v130; // rax
  char v131; // al
  __int64 v132; // rsi
  char v133; // al
  char *v134; // rax
  __int64 v135; // rdx
  char v136; // al
  __int64 v137; // rax
  char *v138; // rax
  char *v139; // rax
  void *v140; // rdx
  char v141; // al
  char *v142; // rax
  char *v143; // rax
  char v144; // al
  __int16 v145; // [rsp+24h] [rbp-6ECh]
  __int16 v146; // [rsp+24h] [rbp-6ECh]
  unsigned __int64 v147; // [rsp+28h] [rbp-6E8h]
  char *v148; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v150; // [rsp+40h] [rbp-6D0h]
  void *v151; // [rsp+48h] [rbp-6C8h]
  char *v152; // [rsp+50h] [rbp-6C0h]
  __int64 v153; // [rsp+58h] [rbp-6B8h]
  char *v154; // [rsp+60h] [rbp-6B0h]
  _BYTE *v155; // [rsp+68h] [rbp-6A8h]
  long double v156; // [rsp+70h] [rbp-6A0h]
  void *v157; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v159; // [rsp+94h] [rbp-67Ch]
  unsigned int v160; // [rsp+98h] [rbp-678h]
  char v161; // [rsp+A0h] [rbp-670h]
  void *v162; // [rsp+A8h] [rbp-668h]
  __int64 v163; // [rsp+B0h] [rbp-660h]
  __int64 v164; // [rsp+190h] [rbp-580h]
  void *v165; // [rsp+198h] [rbp-578h]
  __int64 v166; // [rsp+1A0h] [rbp-570h]
  __int64 v167; // [rsp+1A8h] [rbp-568h]
  __int64 v168; // [rsp+1B0h] [rbp-560h]
  char v169; // [rsp+420h] [rbp-2F0h]

  v4 = a3;
  v5 = a4;
  src = a1;
  v150 = a2;
  if ( (int)sub_410160(a3, &v164, &v161) < 0 )
    return 0LL;
  if ( (int)sub_40FF40(v5, &v161) >= 0 )
  {
    v6 = v166 + 7;
    if ( (unsigned __int64)(v166 + 7) <= 6 )
      v6 = -1LL;
    v75 = __CFADD__(v167, v6);
    v7 = v167 + v6;
    if ( v75 )
      goto LABEL_112;
    v8 = v7 + 6;
    if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v8 <= 0xF9F )
    {
      ptr = 0LL;
      v22 = alloca(v7 + 14);
      v155 = (_BYTE *)(((unsigned __int64)&v147 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v7 == -7LL )
        goto LABEL_112;
      v9 = malloc(v8);
      v155 = v9;
      if ( !v9 )
        goto LABEL_112;
      ptr = v9;
    }
    v10 = 0LL;
    if ( src )
      v10 = *v150;
    v11 = (char *)v165;
    v12 = v4;
    v13 = (char *)src;
    v153 = 0LL;
    v14 = 0LL;
    v15 = *(_BYTE **)v165;
    if ( *(char **)v165 == v12 )
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
          v154 = v12;
          LOBYTE(v156) = v19;
          v157 = v16;
          v20 = (char *)malloc(v10);
          v16 = (char *)v157;
          v12 = v154;
          if ( !v20 )
            goto LABEL_88;
          if ( v14 && LOBYTE(v156) )
          {
            *(_QWORD *)&v156 = v154;
            v21 = (char *)memcpy(v20, v13, v14);
            v16 = (char *)v157;
            v12 = *(char **)&v156;
            v13 = v21;
          }
          else
          {
            v13 = v20;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v19 )
        {
          *(_QWORD *)&v156 = v12;
          v157 = v16;
          v23 = (char *)realloc(v13, v10);
          if ( !v23 )
            goto LABEL_126;
          v16 = (char *)v157;
          v12 = *(char **)&v156;
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
    while ( v164 != v153 )
    {
      v24 = v11[72];
      v25 = *((_QWORD *)v11 + 10);
      if ( v24 == 37 )
      {
        if ( v25 != -1 )
          goto LABEL_198;
        v58 = v18 + 1;
        v14 = v18 + 1;
        if ( v18 == -1LL )
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
            if ( v18 == -2LL )
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
            *(_QWORD *)&v156 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v157) = v13 == src;
          v91 = (char *)malloc(v10);
          if ( !v91 )
            goto LABEL_88;
          if ( v18 && (_BYTE)v157 )
            v13 = (char *)memcpy(v91, v13, v18);
          else
            v13 = v91;
        }
LABEL_109:
        v13[v18] = 37;
        goto LABEL_110;
      }
      if ( v25 == -1 )
        goto LABEL_198;
      v26 = (char *)v162;
      v27 = (long double *)((char *)v162 + 32 * v25);
      v28 = *(_DWORD *)v27;
      LODWORD(v157) = *(_DWORD *)v27;
      if ( v24 != 110 )
      {
        v29 = v24 & 0xDF;
        if ( ((unsigned __int8)((v24 & 0xDF) - 69) <= 2u || v29 == 65) && (_DWORD)v157 == 12 )
        {
          _FST7 = v27[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v65 = (char *)*((_QWORD *)v11 + 3);
            v66 = (char *)*((_QWORD *)v11 + 4);
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
                v157 = (void *)-1LL;
                while ( 1 )
                {
                  v122 = (__int64)(v65 + 1);
                  v123 = -1LL;
                  v124 = *v65 - 48;
                  if ( v49 <= 0x1999999999999999LL )
                    v123 = 10 * v49;
                  v75 = __CFADD__(v123, v124);
                  v49 = v123 + v124;
                  v65 = (char *)v122;
                  if ( v75 )
                  {
                    if ( v66 == (char *)v122 )
                    {
LABEL_81:
                      v49 = (unsigned __int64)v157;
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
              v69 = (char *)v162 + 32 * v68;
              if ( *v69 != 5 )
                goto LABEL_198;
              v49 = (int)v69[4];
              if ( (v49 & 0x80000000) != 0LL )
              {
                v67 |= 2u;
                v49 = -(__int64)v49;
              }
            }
LABEL_82:
            v50 = (char *)*((_QWORD *)v11 + 6);
            v51 = (char *)*((_QWORD *)v11 + 7);
            if ( v50 != v51 )
            {
              v52 = *((_QWORD *)v11 + 8);
              if ( v52 == -1 )
              {
                v125 = (__int64)(v50 + 1);
                v54 = 0LL;
                if ( v51 != (char *)v125 )
                {
                  v126 = (char *)v125;
                  while ( 1 )
                  {
                    v127 = v126 + 1;
                    v128 = *v126 - 48;
                    v129 = -1LL;
                    if ( v54 <= 0x1999999999999999LL )
                      v129 = 10 * v54;
                    v75 = __CFADD__(v129, v128);
                    v130 = v129 + v128;
                    v126 = v127;
                    v54 = v130;
                    if ( v75 )
                    {
                      if ( v51 == v127 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v126 = v127 + 1;
                        if ( *v127 == 48 )
                          break;
                        if ( v51 == v126 )
                          goto LABEL_88;
                        ++v127;
                      }
                      v54 = -1LL;
                    }
                    if ( v51 == v126 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_370;
              }
              v53 = (char *)v162 + 32 * v52;
              if ( *v53 != 5 )
                goto LABEL_198;
              v54 = (int)v53[4];
              if ( (v54 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v54 )
                {
                  v55 = v54 + 12;
                  if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_188:
                  v82 = v55;
                  if ( v49 >= v55 )
                    v82 = v49;
                  v75 = __CFADD__(v82, 1LL);
                  v83 = (void *)(v82 + 1);
                  v157 = v83;
                  if ( v75 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v83 <= 0x2BC )
                  {
                    v85 = &v169;
                  }
                  else
                  {
                    v151 = (void *)v49;
                    v152 = (char *)v54;
                    LODWORD(v154) = v67;
                    v156 = _FST7;
                    if ( v83 == (void *)-1LL )
                      goto LABEL_88;
                    v84 = (char *)malloc((size_t)v83);
                    v67 = (int)v154;
                    _FST7 = v156;
                    v85 = v84;
                    v54 = (unsigned __int64)v152;
                    v49 = (unsigned __int64)v151;
                    if ( !v84 )
                      goto LABEL_88;
                  }
                  v86 = (unsigned __int16)v160;
                  LOBYTE(v87) = v160;
                  HIBYTE(v87) = BYTE1(v160) | 3;
                  LOWORD(v160) = v87;
                  __asm (" fxam ");
                  if ( v61 & 2 )
                  {
                    *v85 = 45;
                    _FST7 = -_FST7;
                    v88 = (unsigned __int64)(v85 + 1);
                  }
                  else if ( v67 & 4 )
                  {
                    v88 = (unsigned __int64)(v85 + 1);
                    *v85 = 43;
                  }
                  else
                  {
                    v88 = (unsigned __int64)v85;
                    if ( v67 & 8 )
                    {
                      v88 = (unsigned __int64)(v85 + 1);
                      *v85 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_198;
                    v93 = v88 + 3;
                    if ( (unsigned __int8)(v11[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v88 + 2) = 102;
                      *(_WORD *)v88 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v88 + 2) = 70;
                      *(_WORD *)v88 = 20041;
                    }
                    v88 = 0LL;
                    goto LABEL_258;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_198;
                  v92 = v11[72] & 0xDF;
                  switch ( v92 )
                  {
                    case 70:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 || v54 )
                      {
                        LOWORD(v147) = v86;
                        v148 = (char *)v49;
                        v151 = v85;
                        v152 = (char *)v54;
                        LODWORD(v154) = v67;
                        *(_QWORD *)&v156 = v88 + 2;
                        v118 = nl_langinfo(0x10000);
                        v119 = (__int64)v152;
                        v93 = *(_QWORD *)&v156;
                        v120 = *v118;
                        LOBYTE(v67) = (_BYTE)v154;
                        v85 = (char *)v151;
                        v49 = (unsigned __int64)v148;
                        LOWORD(v86) = v147;
                        if ( !v120 )
                          v120 = 46;
                        *(_BYTE *)(v88 + 1) = v120;
                        if ( v119 )
                        {
                          v121 = v93;
                          do
                            *(_BYTE *)(++v121 - 1) = 48;
                          while ( v121 != v88 + v119 + 2 );
                          v93 += v119;
                        }
                        goto LABEL_258;
                      }
                      goto LABEL_257;
                    case 69:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 || (v101 = v88 + 1, v54) )
                      {
                        LOWORD(v147) = v86;
                        v148 = (char *)v49;
                        v151 = v85;
                        v152 = (char *)v54;
                        LODWORD(v154) = v67;
                        *(_QWORD *)&v156 = v88 + 2;
                        v134 = nl_langinfo(0x10000);
                        v135 = (__int64)v152;
                        v101 = *(_QWORD *)&v156;
                        v136 = *v134;
                        LOBYTE(v67) = (_BYTE)v154;
                        v85 = (char *)v151;
                        v49 = (unsigned __int64)v148;
                        LOWORD(v86) = v147;
                        if ( !v136 )
                          v136 = 46;
                        *(_BYTE *)(v88 + 1) = v136;
                        if ( v135 )
                        {
                          v137 = v101;
                          do
                            *(_BYTE *)(++v137 - 1) = 48;
                          while ( v137 != v88 + v135 + 2 );
                          v101 += v135;
                        }
                      }
                      v102 = v11[72];
                      v93 = v101 + 4;
                      *(_BYTE *)(v101 + 3) = 48;
                      *(_BYTE *)v101 = v102;
                      *(_WORD *)(v101 + 1) = 12331;
                      goto LABEL_258;
                    case 71:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 )
                      {
                        if ( v54 )
                        {
                          v145 = v86;
                          v147 = v49;
                          v148 = (char *)(v88 + 2);
                          v151 = v85;
                          LODWORD(v152) = v67;
                          v154 = (char *)v54;
                          *(_QWORD *)&v156 = v54 - 1;
                          v112 = nl_langinfo(0x10000);
                          v113 = *(_QWORD *)&v156;
                          v114 = (__int64)v154;
                          v115 = *v112;
                          LOBYTE(v67) = (_BYTE)v152;
                          v85 = (char *)v151;
                          v93 = (unsigned __int64)v148;
                          v49 = v147;
                          LOWORD(v86) = v145;
                          if ( !v115 )
                            v115 = 46;
                          *(_BYTE *)(v88 + 1) = v115;
                          if ( v113 )
                          {
                            v116 = v88 + v114 + 1;
                            v117 = v93;
                            do
                              *(_BYTE *)(++v117 - 1) = 48;
                            while ( v117 != v116 );
                            v93 += v113;
                          }
                        }
                        else
                        {
                          LODWORD(v148) = v86;
                          v151 = (void *)v49;
                          v152 = (char *)(v88 + 2);
                          v154 = v85;
                          LODWORD(v156) = v67;
                          v143 = nl_langinfo(0x10000);
                          LOBYTE(v67) = LOBYTE(v156);
                          v85 = v154;
                          v144 = *v143;
                          v93 = (unsigned __int64)v152;
                          v49 = (unsigned __int64)v151;
                          LOWORD(v86) = (_WORD)v148;
                          if ( !v144 )
                            v144 = 46;
                          *(_BYTE *)(v88 + 1) = v144;
                        }
                        goto LABEL_258;
                      }
LABEL_257:
                      v93 = v88 + 1;
                      goto LABEL_258;
                  }
                  if ( v92 != 65 )
                    goto LABEL_198;
                  *(_BYTE *)v88 = 48;
                  *(_QWORD *)&v156 = v88 + 2;
                  v131 = v11[72];
                  *(_BYTE *)(v88 + 2) = 48;
                  *(_BYTE *)(v88 + 1) = v131 + 23;
                  if ( v67 & 0x10 || (v132 = v88 + 3, v54) )
                  {
                    v146 = v86;
                    v147 = v49;
                    v148 = v85;
                    v151 = (void *)v54;
                    LODWORD(v152) = v67;
                    v154 = (char *)(v88 + 4);
                    v139 = nl_langinfo(0x10000);
                    v140 = v151;
                    v132 = (__int64)v154;
                    v141 = *v139;
                    LOBYTE(v67) = (_BYTE)v152;
                    v85 = v148;
                    v49 = v147;
                    LOWORD(v86) = v146;
                    if ( !v141 )
                      v141 = 46;
                    *(_BYTE *)(v88 + 3) = v141;
                    if ( v140 )
                    {
                      v142 = (char *)v132;
                      do
                        *(++v142 - 1) = 48;
                      while ( v142 != (char *)v140 + v88 + 4 );
                      v132 += (__int64)v140;
                    }
                  }
                  v133 = v11[72];
                  v93 = v132 + 3;
                  *(_WORD *)(v132 + 1) = 12331;
                  v88 = *(_QWORD *)&v156;
                  *(_BYTE *)v132 = v133 + 15;
LABEL_258:
                  LOWORD(v160) = v86;
                  v94 = v93 - (_QWORD)v85;
                  if ( v49 > v93 - (unsigned __int64)v85 )
                  {
                    v95 = v49 - v94;
                    v96 = v93 + v95;
                    v94 = v93 + v95 - (_QWORD)v85;
                    if ( v67 & 2 )
                    {
                      if ( v95 )
                      {
                        do
                          *(_BYTE *)(++v93 - 1) = 32;
                        while ( v96 != v93 );
                      }
                    }
                    else if ( v67 & 0x20 && v88 )
                    {
                      if ( v88 >= v93 )
                      {
                        v88 = v93;
                      }
                      else
                      {
                        v97 = -1LL;
                        do
                        {
                          *(_BYTE *)(v96 + v97) = *(_BYTE *)(v93 + v97);
                          --v97;
                        }
                        while ( v97 != v88 - 1 - v93 );
                      }
                      if ( v95 )
                      {
                        v98 = v88 + v95;
                        do
                          *(_BYTE *)(++v88 - 1) = 48;
                        while ( v88 != v98 );
                      }
                    }
                    else
                    {
                      v108 = -1LL;
                      if ( (unsigned __int64)v85 < v93 )
                      {
                        do
                        {
                          *(_BYTE *)(v96 + v108) = *(_BYTE *)(v93 + v108);
                          --v108;
                        }
                        while ( &v85[-v93 - 1] != (char *)v108 );
                        v93 = (unsigned __int64)v85;
                      }
                      if ( v95 )
                      {
                        v109 = v93 + v95;
                        do
                          *(_BYTE *)(++v93 - 1) = 32;
                        while ( v93 != v109 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v157 <= v94 )
                    goto LABEL_198;
                  v99 = v94 + v18;
                  v14 = v94 + v18;
                  if ( v10 - v18 <= v94 )
                  {
                    if ( __CFADD__(v94, v18) )
                    {
                      if ( v10 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v10 < v99 )
                    {
                      if ( v10 )
                      {
                        if ( (v10 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v10 *= 2LL;
                        if ( v10 < v99 )
                          goto LABEL_368;
                      }
                      else
                      {
                        if ( v99 <= 0xC )
                        {
                          v10 = 12LL;
                          goto LABEL_275;
                        }
LABEL_368:
                        if ( v99 == -1LL )
                          goto LABEL_88;
                        v10 = v94 + v18;
                      }
LABEL_275:
                      if ( v13 && v13 != src )
                      {
                        *(_QWORD *)&v156 = v94;
                        v157 = v85;
                        v100 = (char *)realloc(v13, v10);
                        if ( !v100 )
                          goto LABEL_88;
                        v85 = (char *)v157;
                        v94 = *(_QWORD *)&v156;
                        v13 = v100;
                      }
                      else
                      {
                        LOBYTE(v154) = v13 == src;
                        *(_QWORD *)&v156 = v94;
                        v157 = v85;
                        v110 = (char *)malloc(v10);
                        v85 = (char *)v157;
                        v94 = *(_QWORD *)&v156;
                        if ( !v110 )
                          goto LABEL_88;
                        if ( v18 && (_BYTE)v154 )
                        {
                          v111 = (char *)memcpy(v110, v13, v18);
                          v85 = (char *)v157;
                          v94 = *(_QWORD *)&v156;
                          v13 = v111;
                        }
                        else
                        {
                          v13 = v110;
                        }
                      }
                    }
                  }
                  v157 = v85;
                  memcpy(&v13[v18], v85, v94);
                  if ( v157 != &v169 )
                    free(v157);
                  goto LABEL_110;
                }
LABEL_370:
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
        }
        v30 = *((_DWORD *)v11 + 4);
        v31 = v155 + 1;
        *v155 = 37;
        if ( v30 & 1 )
        {
          v32 = v155;
          v155[1] = 39;
          v31 = v32 + 2;
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
          v154 = v26;
          *(_QWORD *)&v156 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v154;
          v31 += *(_QWORD *)&v156;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v154 = v26;
          *(_QWORD *)&v156 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v154;
          v31 += *(_QWORD *)&v156;
        }
        if ( (unsigned int)v157 <= 0x10 )
        {
          v37 = 1LL << (char)v157;
          if ( (1LL << (char)v157) & 0x14180 )
            goto LABEL_125;
          if ( v37 & 0x1000 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(v37 & 0x600) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = v11[72];
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = &v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v154) = 1;
            v160 = *((_DWORD *)v40 + 4);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v154) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = &v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (int)v154;
          *(&v160 + (unsigned int)v154) = *((_DWORD *)v42 + 4);
          LODWORD(v154) = v43 + 1;
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
              *(_QWORD *)&v156 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v165 != &v168 )
                    free(v165);
                  if ( v162 != &v163 )
                    free(v162);
                  v13 = 0LL;
                  **(_DWORD **)&v156 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v156 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v156) = v13 == src;
            v90 = (char *)malloc(v10);
            v45 = v90;
            if ( !v90 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v156) )
              v45 = (char *)memcpy(v90, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v152 = v45;
            v46 = __errno_location();
            v47 = v152;
            v152 = v31;
            *(_QWORD *)&v156 = v46;
            LODWORD(v148) = *v46;
            while ( 2 )
            {
              v48 = 0x7FFFFFFFLL;
              v159 = -1;
              **(_DWORD **)&v156 = 0;
              if ( v10 - v18 <= 0x7FFFFFFF )
                v48 = v10 - v18;
              switch ( (_DWORD)v157 )
              {
                case 1:
                  v79 = (unsigned int)*((char *)v162 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_149;
                case 2:
                  v79 = *((unsigned __int8 *)v162 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_149;
                case 3:
                  v79 = (unsigned int)*((__int16 *)v162 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_149;
                case 4:
                  v79 = *((unsigned __int16 *)v162 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_149;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v79 = *((unsigned int *)v162 + 8 * *((_QWORD *)v11 + 10) + 4);
LABEL_149:
                  v70 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                    goto LABEL_208;
                  if ( (_DWORD)v154 != 2 )
                    goto LABEL_151;
                  goto LABEL_207;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v70 = &v47[v18];
                  v71 = (int *)*((_QWORD *)v162 + 4 * *((_QWORD *)v11 + 10) + 2);
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                  {
LABEL_208:
                    v79 = v160;
LABEL_151:
                    v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v79);
                    v73 = v159;
                    v47 = (char *)v151;
                    if ( v159 >= 0 )
                      goto LABEL_132;
                  }
                  else
                  {
                    if ( (_DWORD)v154 == 2 )
                    {
LABEL_207:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v160);
                      v47 = (char *)v151;
                    }
                    else
                    {
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v71);
                      v47 = (char *)v151;
                    }
LABEL_131:
                    v73 = v159;
                    if ( v159 >= 0 )
                    {
LABEL_132:
                      if ( v73 < v48 && v47[v73 + v18] )
                        goto LABEL_198;
                      if ( v73 >= v72 )
                        goto LABEL_136;
                      goto LABEL_135;
                    }
                  }
                  if ( v152[1] )
                  {
                    v152[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v156;
                    if ( !**(_DWORD **)&v156 )
                    {
                      v80 = 84;
                      if ( (v11[72] & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v165 != &v168 )
                      free(v165);
                    if ( v162 != &v163 )
                      free(v162);
                    **(_DWORD **)&v156 = v80;
                    return 0LL;
                  }
LABEL_135:
                  v159 = v72;
                  v73 = v72;
LABEL_136:
                  if ( (unsigned int)(v73 + 1) < v48 )
                  {
                    v13 = v47;
                    v14 = v18 + v73;
                    **(_DWORD **)&v156 = (_DWORD)v148;
                    goto LABEL_110;
                  }
                  if ( v10 - v18 > 0x7FFFFFFE )
                  {
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v165 != &v168 )
                      free(v165);
                    if ( v162 != &v163 )
                      free(v162);
                    v13 = 0LL;
                    **(_DWORD **)&v156 = 75;
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
                        v151 = v47;
                        v89 = (char *)malloc(v10);
                        v47 = (char *)v151;
                        if ( !v89 )
                          goto LABEL_200;
                        if ( v18 && v77 )
                          v47 = (char *)memcpy(v89, v151, v18);
                        else
                          v47 = v89;
                      }
                      else
                      {
                        v151 = v47;
                        v78 = (char *)realloc(v47, v10);
                        v47 = (char *)v151;
                        if ( !v78 )
                          goto LABEL_200;
                        v47 = v78;
                      }
                    }
                  }
                  continue;
                case 0xB:
                  v81 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 || (_DWORD)v154 == 2 )
                  {
                    v72 = __snprintf_chk(v81, v48, 1LL, -1LL, v155, v160);
                    v47 = (char *)v151;
                  }
                  else
                  {
                    v72 = __snprintf_chk(v81, v48, 1LL, -1LL, v155, &v159);
                    v47 = (char *)v151;
                  }
                  goto LABEL_131;
                case 0xC:
                  v70 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                    goto LABEL_207;
                  if ( (_DWORD)v154 != 2 )
                  {
                    v71 = &v159;
                    goto LABEL_130;
                  }
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v160);
                  v47 = (char *)v151;
                  goto LABEL_131;
                default:
                  goto LABEL_403;
              }
            }
          }
          if ( v18 != -3LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      switch ( v28 )
      {
        case 18:
          v14 = v18;
          **((_BYTE **)v27 + 2) = v18;
          break;
        case 19:
          v14 = v18;
          **((_WORD **)v27 + 2) = v18;
          break;
        case 20:
          v14 = v18;
          **((_DWORD **)v27 + 2) = v18;
          break;
        case 21:
        case 22:
          v14 = v18;
          **((_QWORD **)v27 + 2) = v18;
          break;
        default:
LABEL_403:
          abort();
          return result;
      }
LABEL_110:
      v12 = (char *)*((_QWORD *)v11 + 1);
      v11 += 88;
      v15 = *(_BYTE **)v11;
      ++v153;
      if ( v15 != v12 )
        goto LABEL_14;
LABEL_111:
      v18 = v14;
    }
    v103 = v18;
    v104 = v18 + 1;
    if ( v18 == -1LL )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
    }
    else if ( v10 < v104 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v104 )
        {
LABEL_298:
          v105 = v13 == src;
          if ( !v13 || v105 )
          {
            v138 = (char *)malloc(v10);
            if ( !v138 )
              goto LABEL_88;
            if ( v103 && v105 )
              v13 = (char *)memcpy(v138, v13, v103);
            else
              v13 = v138;
          }
          else
          {
            v106 = (char *)realloc(v13, v10);
            if ( !v106 )
              goto LABEL_126;
            v13 = v106;
          }
          goto LABEL_302;
        }
      }
      else if ( v104 <= 0xC )
      {
        v10 = 12LL;
        goto LABEL_298;
      }
      if ( v18 == -2LL )
        goto LABEL_88;
      v10 = v18 + 1;
      goto LABEL_298;
    }
LABEL_302:
    v13[v103] = 0;
    if ( v10 > v104 && v13 != src )
    {
      v107 = (char *)realloc(v13, v104);
      if ( v107 )
        v13 = v107;
    }
    if ( ptr )
      free(ptr);
    if ( v165 != &v168 )
      free(v165);
    if ( v162 != &v163 )
      free(v162);
    *v150 = v103;
    return v13;
  }
  if ( v165 != &v168 )
    free(v165);
  if ( v162 != &v163 )
    free(v162);
  v13 = 0LL;
  *__errno_location() = 22;
  return v13;
}

char *__fastcall sub_40E420(void *a1, size_t *a2, char *a3, __int64 a4)
{
  char *v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  size_t v8; // rdi
  _BYTE *v9; // rax
  size_t v10; // r12
  char *v11; // r14
  char *v12; // r8
  char *v13; // rbx
  size_t v14; // r15
  _BYTE *v15; // rcx
  char *v16; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // r13
  bool v19; // dl
  char *v20; // rax
  char *v21; // rax
  void *v22; // rsp
  char *v23; // rax
  char v24; // r15
  __int64 v25; // rax
  char *v26; // r8
  long double *v27; // rdx
  int v28; // eax
  char v29; // al
  int v30; // eax
  char *v31; // r15
  _BYTE *v32; // rdi
  _BYTE *v33; // rsi
  _BYTE *v34; // rdx
  _BYTE *v35; // rsi
  _BYTE *v36; // rdx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // rax
  char *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rax
  char *v45; // r11
  int *v46; // rax
  char *v47; // r11
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r10
  char *v50; // rdx
  char *v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // r8
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  void *v56; // r15
  char *result; // rax
  unsigned __int64 v58; // rax
  char *v59; // rax
  char v61; // fps^1
  char *v65; // rdx
  char *v66; // rdi
  int v67; // er11
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  char *v70; // rdi
  int *v71; // r9
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  bool v75; // cf
  unsigned __int64 v76; // rax
  bool v77; // bl
  char *v78; // rax
  __int64 v79; // r9
  int v80; // ebx
  char *v81; // rdi
  unsigned __int64 v82; // rax
  void *v83; // rax
  char *v84; // rax
  char *v85; // rcx
  int v86; // er8
  __int16 v87; // ax
  unsigned __int64 v88; // r15
  char *v89; // rax
  char *v90; // rax
  char *v91; // rax
  char v92; // al
  unsigned __int64 v93; // r9
  size_t v94; // r8
  unsigned __int64 v95; // r10
  unsigned __int64 v96; // rdi
  __int64 v97; // rax
  unsigned __int64 v98; // r10
  unsigned __int64 v99; // rax
  char *v100; // rax
  __int64 v101; // rsi
  char v102; // al
  size_t v103; // r15
  size_t v104; // r14
  bool v105; // r13
  char *v106; // rax
  char *v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // r10
  char *v110; // rax
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rdx
  char v115; // al
  __int64 v116; // rdx
  unsigned __int64 v117; // rax
  char *v118; // rax
  __int64 v119; // rdx
  char v120; // al
  unsigned __int64 v121; // rax
  __int64 v122; // rsi
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rax
  char *v126; // rsi
  char *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rsi
  unsigned __int64 v130; // rax
  char v131; // al
  __int64 v132; // rsi
  char v133; // al
  char *v134; // rax
  __int64 v135; // rdx
  char v136; // al
  __int64 v137; // rax
  char *v138; // rax
  char *v139; // rax
  void *v140; // rdx
  char v141; // al
  char *v142; // rax
  char *v143; // rax
  char v144; // al
  __int16 v145; // [rsp+24h] [rbp-6ECh]
  __int16 v146; // [rsp+24h] [rbp-6ECh]
  unsigned __int64 v147; // [rsp+28h] [rbp-6E8h]
  char *v148; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v150; // [rsp+40h] [rbp-6D0h]
  void *v151; // [rsp+48h] [rbp-6C8h]
  char *v152; // [rsp+50h] [rbp-6C0h]
  __int64 v153; // [rsp+58h] [rbp-6B8h]
  char *v154; // [rsp+60h] [rbp-6B0h]
  _BYTE *v155; // [rsp+68h] [rbp-6A8h]
  long double v156; // [rsp+70h] [rbp-6A0h]
  void *v157; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v159; // [rsp+94h] [rbp-67Ch]
  unsigned int v160; // [rsp+98h] [rbp-678h]
  char v161; // [rsp+A0h] [rbp-670h]
  void *v162; // [rsp+A8h] [rbp-668h]
  __int64 v163; // [rsp+B0h] [rbp-660h]
  __int64 v164; // [rsp+190h] [rbp-580h]
  void *v165; // [rsp+198h] [rbp-578h]
  __int64 v166; // [rsp+1A0h] [rbp-570h]
  __int64 v167; // [rsp+1A8h] [rbp-568h]
  __int64 v168; // [rsp+1B0h] [rbp-560h]
  char v169; // [rsp+420h] [rbp-2F0h]

  v4 = a3;
  v5 = a4;
  src = a1;
  v150 = a2;
  if ( (int)sub_410160(a3, &v164, &v161) < 0 )
    return 0LL;
  if ( (int)sub_40FF40(v5, &v161) >= 0 )
  {
    v6 = v166 + 7;
    if ( (unsigned __int64)(v166 + 7) <= 6 )
      v6 = -1LL;
    v75 = __CFADD__(v167, v6);
    v7 = v167 + v6;
    if ( v75 )
      goto LABEL_112;
    v8 = v7 + 6;
    if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v8 <= 0xF9F )
    {
      ptr = 0LL;
      v22 = alloca(v7 + 14);
      v155 = (_BYTE *)(((unsigned __int64)&v147 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v7 == -7LL )
        goto LABEL_112;
      v9 = malloc(v8);
      v155 = v9;
      if ( !v9 )
        goto LABEL_112;
      ptr = v9;
    }
    v10 = 0LL;
    if ( src )
      v10 = *v150;
    v11 = (char *)v165;
    v12 = v4;
    v13 = (char *)src;
    v153 = 0LL;
    v14 = 0LL;
    v15 = *(_BYTE **)v165;
    if ( *(char **)v165 == v12 )
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
          v154 = v12;
          LOBYTE(v156) = v19;
          v157 = v16;
          v20 = (char *)malloc(v10);
          v16 = (char *)v157;
          v12 = v154;
          if ( !v20 )
            goto LABEL_88;
          if ( v14 && LOBYTE(v156) )
          {
            *(_QWORD *)&v156 = v154;
            v21 = (char *)memcpy(v20, v13, v14);
            v16 = (char *)v157;
            v12 = *(char **)&v156;
            v13 = v21;
          }
          else
          {
            v13 = v20;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v19 )
        {
          *(_QWORD *)&v156 = v12;
          v157 = v16;
          v23 = (char *)realloc(v13, v10);
          if ( !v23 )
            goto LABEL_126;
          v16 = (char *)v157;
          v12 = *(char **)&v156;
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
    while ( v164 != v153 )
    {
      v24 = v11[72];
      v25 = *((_QWORD *)v11 + 10);
      if ( v24 == 37 )
      {
        if ( v25 != -1 )
          goto LABEL_198;
        v58 = v18 + 1;
        v14 = v18 + 1;
        if ( v18 == -1LL )
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
            if ( v18 == -2LL )
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
            *(_QWORD *)&v156 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v157) = v13 == src;
          v91 = (char *)malloc(v10);
          if ( !v91 )
            goto LABEL_88;
          if ( v18 && (_BYTE)v157 )
            v13 = (char *)memcpy(v91, v13, v18);
          else
            v13 = v91;
        }
LABEL_109:
        v13[v18] = 37;
        goto LABEL_110;
      }
      if ( v25 == -1 )
        goto LABEL_198;
      v26 = (char *)v162;
      v27 = (long double *)((char *)v162 + 32 * v25);
      v28 = *(_DWORD *)v27;
      LODWORD(v157) = *(_DWORD *)v27;
      if ( v24 != 110 )
      {
        v29 = v24 & 0xDF;
        if ( ((unsigned __int8)((v24 & 0xDF) - 69) <= 2u || v29 == 65) && (_DWORD)v157 == 12 )
        {
          _FST7 = v27[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v65 = (char *)*((_QWORD *)v11 + 3);
            v66 = (char *)*((_QWORD *)v11 + 4);
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
                v157 = (void *)-1LL;
                while ( 1 )
                {
                  v122 = (__int64)(v65 + 1);
                  v123 = -1LL;
                  v124 = *v65 - 48;
                  if ( v49 <= 0x1999999999999999LL )
                    v123 = 10 * v49;
                  v75 = __CFADD__(v123, v124);
                  v49 = v123 + v124;
                  v65 = (char *)v122;
                  if ( v75 )
                  {
                    if ( v66 == (char *)v122 )
                    {
LABEL_81:
                      v49 = (unsigned __int64)v157;
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
              v69 = (char *)v162 + 32 * v68;
              if ( *v69 != 5 )
                goto LABEL_198;
              v49 = (int)v69[4];
              if ( (v49 & 0x80000000) != 0LL )
              {
                v67 |= 2u;
                v49 = -(__int64)v49;
              }
            }
LABEL_82:
            v50 = (char *)*((_QWORD *)v11 + 6);
            v51 = (char *)*((_QWORD *)v11 + 7);
            if ( v50 != v51 )
            {
              v52 = *((_QWORD *)v11 + 8);
              if ( v52 == -1 )
              {
                v125 = (__int64)(v50 + 1);
                v54 = 0LL;
                if ( v51 != (char *)v125 )
                {
                  v126 = (char *)v125;
                  while ( 1 )
                  {
                    v127 = v126 + 1;
                    v128 = *v126 - 48;
                    v129 = -1LL;
                    if ( v54 <= 0x1999999999999999LL )
                      v129 = 10 * v54;
                    v75 = __CFADD__(v129, v128);
                    v130 = v129 + v128;
                    v126 = v127;
                    v54 = v130;
                    if ( v75 )
                    {
                      if ( v51 == v127 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v126 = v127 + 1;
                        if ( *v127 == 48 )
                          break;
                        if ( v51 == v126 )
                          goto LABEL_88;
                        ++v127;
                      }
                      v54 = -1LL;
                    }
                    if ( v51 == v126 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_370;
              }
              v53 = (char *)v162 + 32 * v52;
              if ( *v53 != 5 )
                goto LABEL_198;
              v54 = (int)v53[4];
              if ( (v54 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v54 )
                {
                  v55 = v54 + 12;
                  if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_188:
                  v82 = v55;
                  if ( v49 >= v55 )
                    v82 = v49;
                  v75 = __CFADD__(v82, 1LL);
                  v83 = (void *)(v82 + 1);
                  v157 = v83;
                  if ( v75 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v83 <= 0x2BC )
                  {
                    v85 = &v169;
                  }
                  else
                  {
                    v151 = (void *)v49;
                    v152 = (char *)v54;
                    LODWORD(v154) = v67;
                    v156 = _FST7;
                    if ( v83 == (void *)-1LL )
                      goto LABEL_88;
                    v84 = (char *)malloc((size_t)v83);
                    v67 = (int)v154;
                    _FST7 = v156;
                    v85 = v84;
                    v54 = (unsigned __int64)v152;
                    v49 = (unsigned __int64)v151;
                    if ( !v84 )
                      goto LABEL_88;
                  }
                  v86 = (unsigned __int16)v160;
                  LOBYTE(v87) = v160;
                  HIBYTE(v87) = BYTE1(v160) | 3;
                  LOWORD(v160) = v87;
                  __asm (" fxam ");
                  if ( v61 & 2 )
                  {
                    *v85 = 45;
                    _FST7 = -_FST7;
                    v88 = (unsigned __int64)(v85 + 1);
                  }
                  else if ( v67 & 4 )
                  {
                    v88 = (unsigned __int64)(v85 + 1);
                    *v85 = 43;
                  }
                  else
                  {
                    v88 = (unsigned __int64)v85;
                    if ( v67 & 8 )
                    {
                      v88 = (unsigned __int64)(v85 + 1);
                      *v85 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_198;
                    v93 = v88 + 3;
                    if ( (unsigned __int8)(v11[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v88 + 2) = 102;
                      *(_WORD *)v88 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v88 + 2) = 70;
                      *(_WORD *)v88 = 20041;
                    }
                    v88 = 0LL;
                    goto LABEL_258;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_198;
                  v92 = v11[72] & 0xDF;
                  switch ( v92 )
                  {
                    case 70:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 || v54 )
                      {
                        LOWORD(v147) = v86;
                        v148 = (char *)v49;
                        v151 = v85;
                        v152 = (char *)v54;
                        LODWORD(v154) = v67;
                        *(_QWORD *)&v156 = v88 + 2;
                        v118 = nl_langinfo(0x10000);
                        v119 = (__int64)v152;
                        v93 = *(_QWORD *)&v156;
                        v120 = *v118;
                        LOBYTE(v67) = (_BYTE)v154;
                        v85 = (char *)v151;
                        v49 = (unsigned __int64)v148;
                        LOWORD(v86) = v147;
                        if ( !v120 )
                          v120 = 46;
                        *(_BYTE *)(v88 + 1) = v120;
                        if ( v119 )
                        {
                          v121 = v93;
                          do
                            *(_BYTE *)(++v121 - 1) = 48;
                          while ( v121 != v88 + v119 + 2 );
                          v93 += v119;
                        }
                        goto LABEL_258;
                      }
                      goto LABEL_257;
                    case 69:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 || (v101 = v88 + 1, v54) )
                      {
                        LOWORD(v147) = v86;
                        v148 = (char *)v49;
                        v151 = v85;
                        v152 = (char *)v54;
                        LODWORD(v154) = v67;
                        *(_QWORD *)&v156 = v88 + 2;
                        v134 = nl_langinfo(0x10000);
                        v135 = (__int64)v152;
                        v101 = *(_QWORD *)&v156;
                        v136 = *v134;
                        LOBYTE(v67) = (_BYTE)v154;
                        v85 = (char *)v151;
                        v49 = (unsigned __int64)v148;
                        LOWORD(v86) = v147;
                        if ( !v136 )
                          v136 = 46;
                        *(_BYTE *)(v88 + 1) = v136;
                        if ( v135 )
                        {
                          v137 = v101;
                          do
                            *(_BYTE *)(++v137 - 1) = 48;
                          while ( v137 != v88 + v135 + 2 );
                          v101 += v135;
                        }
                      }
                      v102 = v11[72];
                      v93 = v101 + 4;
                      *(_BYTE *)(v101 + 3) = 48;
                      *(_BYTE *)v101 = v102;
                      *(_WORD *)(v101 + 1) = 12331;
                      goto LABEL_258;
                    case 71:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 )
                      {
                        if ( v54 )
                        {
                          v145 = v86;
                          v147 = v49;
                          v148 = (char *)(v88 + 2);
                          v151 = v85;
                          LODWORD(v152) = v67;
                          v154 = (char *)v54;
                          *(_QWORD *)&v156 = v54 - 1;
                          v112 = nl_langinfo(0x10000);
                          v113 = *(_QWORD *)&v156;
                          v114 = (__int64)v154;
                          v115 = *v112;
                          LOBYTE(v67) = (_BYTE)v152;
                          v85 = (char *)v151;
                          v93 = (unsigned __int64)v148;
                          v49 = v147;
                          LOWORD(v86) = v145;
                          if ( !v115 )
                            v115 = 46;
                          *(_BYTE *)(v88 + 1) = v115;
                          if ( v113 )
                          {
                            v116 = v88 + v114 + 1;
                            v117 = v93;
                            do
                              *(_BYTE *)(++v117 - 1) = 48;
                            while ( v117 != v116 );
                            v93 += v113;
                          }
                        }
                        else
                        {
                          LODWORD(v148) = v86;
                          v151 = (void *)v49;
                          v152 = (char *)(v88 + 2);
                          v154 = v85;
                          LODWORD(v156) = v67;
                          v143 = nl_langinfo(0x10000);
                          LOBYTE(v67) = LOBYTE(v156);
                          v85 = v154;
                          v144 = *v143;
                          v93 = (unsigned __int64)v152;
                          v49 = (unsigned __int64)v151;
                          LOWORD(v86) = (_WORD)v148;
                          if ( !v144 )
                            v144 = 46;
                          *(_BYTE *)(v88 + 1) = v144;
                        }
                        goto LABEL_258;
                      }
LABEL_257:
                      v93 = v88 + 1;
                      goto LABEL_258;
                  }
                  if ( v92 != 65 )
                    goto LABEL_198;
                  *(_BYTE *)v88 = 48;
                  *(_QWORD *)&v156 = v88 + 2;
                  v131 = v11[72];
                  *(_BYTE *)(v88 + 2) = 48;
                  *(_BYTE *)(v88 + 1) = v131 + 23;
                  if ( v67 & 0x10 || (v132 = v88 + 3, v54) )
                  {
                    v146 = v86;
                    v147 = v49;
                    v148 = v85;
                    v151 = (void *)v54;
                    LODWORD(v152) = v67;
                    v154 = (char *)(v88 + 4);
                    v139 = nl_langinfo(0x10000);
                    v140 = v151;
                    v132 = (__int64)v154;
                    v141 = *v139;
                    LOBYTE(v67) = (_BYTE)v152;
                    v85 = v148;
                    v49 = v147;
                    LOWORD(v86) = v146;
                    if ( !v141 )
                      v141 = 46;
                    *(_BYTE *)(v88 + 3) = v141;
                    if ( v140 )
                    {
                      v142 = (char *)v132;
                      do
                        *(++v142 - 1) = 48;
                      while ( v142 != (char *)v140 + v88 + 4 );
                      v132 += (__int64)v140;
                    }
                  }
                  v133 = v11[72];
                  v93 = v132 + 3;
                  *(_WORD *)(v132 + 1) = 12331;
                  v88 = *(_QWORD *)&v156;
                  *(_BYTE *)v132 = v133 + 15;
LABEL_258:
                  LOWORD(v160) = v86;
                  v94 = v93 - (_QWORD)v85;
                  if ( v49 > v93 - (unsigned __int64)v85 )
                  {
                    v95 = v49 - v94;
                    v96 = v93 + v95;
                    v94 = v93 + v95 - (_QWORD)v85;
                    if ( v67 & 2 )
                    {
                      if ( v95 )
                      {
                        do
                          *(_BYTE *)(++v93 - 1) = 32;
                        while ( v96 != v93 );
                      }
                    }
                    else if ( v67 & 0x20 && v88 )
                    {
                      if ( v88 >= v93 )
                      {
                        v88 = v93;
                      }
                      else
                      {
                        v97 = -1LL;
                        do
                        {
                          *(_BYTE *)(v96 + v97) = *(_BYTE *)(v93 + v97);
                          --v97;
                        }
                        while ( v97 != v88 - 1 - v93 );
                      }
                      if ( v95 )
                      {
                        v98 = v88 + v95;
                        do
                          *(_BYTE *)(++v88 - 1) = 48;
                        while ( v88 != v98 );
                      }
                    }
                    else
                    {
                      v108 = -1LL;
                      if ( (unsigned __int64)v85 < v93 )
                      {
                        do
                        {
                          *(_BYTE *)(v96 + v108) = *(_BYTE *)(v93 + v108);
                          --v108;
                        }
                        while ( &v85[-v93 - 1] != (char *)v108 );
                        v93 = (unsigned __int64)v85;
                      }
                      if ( v95 )
                      {
                        v109 = v93 + v95;
                        do
                          *(_BYTE *)(++v93 - 1) = 32;
                        while ( v93 != v109 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v157 <= v94 )
                    goto LABEL_198;
                  v99 = v94 + v18;
                  v14 = v94 + v18;
                  if ( v10 - v18 <= v94 )
                  {
                    if ( __CFADD__(v94, v18) )
                    {
                      if ( v10 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v10 < v99 )
                    {
                      if ( v10 )
                      {
                        if ( (v10 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v10 *= 2LL;
                        if ( v10 < v99 )
                          goto LABEL_368;
                      }
                      else
                      {
                        if ( v99 <= 0xC )
                        {
                          v10 = 12LL;
                          goto LABEL_275;
                        }
LABEL_368:
                        if ( v99 == -1LL )
                          goto LABEL_88;
                        v10 = v94 + v18;
                      }
LABEL_275:
                      if ( v13 && v13 != src )
                      {
                        *(_QWORD *)&v156 = v94;
                        v157 = v85;
                        v100 = (char *)realloc(v13, v10);
                        if ( !v100 )
                          goto LABEL_88;
                        v85 = (char *)v157;
                        v94 = *(_QWORD *)&v156;
                        v13 = v100;
                      }
                      else
                      {
                        LOBYTE(v154) = v13 == src;
                        *(_QWORD *)&v156 = v94;
                        v157 = v85;
                        v110 = (char *)malloc(v10);
                        v85 = (char *)v157;
                        v94 = *(_QWORD *)&v156;
                        if ( !v110 )
                          goto LABEL_88;
                        if ( v18 && (_BYTE)v154 )
                        {
                          v111 = (char *)memcpy(v110, v13, v18);
                          v85 = (char *)v157;
                          v94 = *(_QWORD *)&v156;
                          v13 = v111;
                        }
                        else
                        {
                          v13 = v110;
                        }
                      }
                    }
                  }
                  v157 = v85;
                  memcpy(&v13[v18], v85, v94);
                  if ( v157 != &v169 )
                    free(v157);
                  goto LABEL_110;
                }
LABEL_370:
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
        }
        v30 = *((_DWORD *)v11 + 4);
        v31 = v155 + 1;
        *v155 = 37;
        if ( v30 & 1 )
        {
          v32 = v155;
          v155[1] = 39;
          v31 = v32 + 2;
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
          v154 = v26;
          *(_QWORD *)&v156 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v154;
          v31 += *(_QWORD *)&v156;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v154 = v26;
          *(_QWORD *)&v156 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v154;
          v31 += *(_QWORD *)&v156;
        }
        if ( (unsigned int)v157 <= 0x10 )
        {
          v37 = 1LL << (char)v157;
          if ( (1LL << (char)v157) & 0x14180 )
            goto LABEL_125;
          if ( v37 & 0x1000 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(v37 & 0x600) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = v11[72];
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = &v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v154) = 1;
            v160 = *((_DWORD *)v40 + 4);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v154) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = &v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (int)v154;
          *(&v160 + (unsigned int)v154) = *((_DWORD *)v42 + 4);
          LODWORD(v154) = v43 + 1;
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
              *(_QWORD *)&v156 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v165 != &v168 )
                    free(v165);
                  if ( v162 != &v163 )
                    free(v162);
                  v13 = 0LL;
                  **(_DWORD **)&v156 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v156 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v156) = v13 == src;
            v90 = (char *)malloc(v10);
            v45 = v90;
            if ( !v90 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v156) )
              v45 = (char *)memcpy(v90, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v152 = v45;
            v46 = __errno_location();
            v47 = v152;
            v152 = v31;
            *(_QWORD *)&v156 = v46;
            LODWORD(v148) = *v46;
            while ( 2 )
            {
              v48 = 0x7FFFFFFFLL;
              v159 = -1;
              **(_DWORD **)&v156 = 0;
              if ( v10 - v18 <= 0x7FFFFFFF )
                v48 = v10 - v18;
              switch ( (_DWORD)v157 )
              {
                case 1:
                  v79 = (unsigned int)*((char *)v162 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_149;
                case 2:
                  v79 = *((unsigned __int8 *)v162 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_149;
                case 3:
                  v79 = (unsigned int)*((__int16 *)v162 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_149;
                case 4:
                  v79 = *((unsigned __int16 *)v162 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_149;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v79 = *((unsigned int *)v162 + 8 * *((_QWORD *)v11 + 10) + 4);
LABEL_149:
                  v70 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                    goto LABEL_208;
                  if ( (_DWORD)v154 != 2 )
                    goto LABEL_151;
                  goto LABEL_207;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v70 = &v47[v18];
                  v71 = (int *)*((_QWORD *)v162 + 4 * *((_QWORD *)v11 + 10) + 2);
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                  {
LABEL_208:
                    v79 = v160;
LABEL_151:
                    v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v79);
                    v73 = v159;
                    v47 = (char *)v151;
                    if ( v159 >= 0 )
                      goto LABEL_132;
                  }
                  else
                  {
                    if ( (_DWORD)v154 == 2 )
                    {
LABEL_207:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v160);
                      v47 = (char *)v151;
                    }
                    else
                    {
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v71);
                      v47 = (char *)v151;
                    }
LABEL_131:
                    v73 = v159;
                    if ( v159 >= 0 )
                    {
LABEL_132:
                      if ( v73 < v48 && v47[v73 + v18] )
                        goto LABEL_198;
                      if ( v73 >= v72 )
                        goto LABEL_136;
                      goto LABEL_135;
                    }
                  }
                  if ( v152[1] )
                  {
                    v152[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v156;
                    if ( !**(_DWORD **)&v156 )
                    {
                      v80 = 84;
                      if ( (v11[72] & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v165 != &v168 )
                      free(v165);
                    if ( v162 != &v163 )
                      free(v162);
                    **(_DWORD **)&v156 = v80;
                    return 0LL;
                  }
LABEL_135:
                  v159 = v72;
                  v73 = v72;
LABEL_136:
                  if ( (unsigned int)(v73 + 1) < v48 )
                  {
                    v13 = v47;
                    v14 = v18 + v73;
                    **(_DWORD **)&v156 = (_DWORD)v148;
                    goto LABEL_110;
                  }
                  if ( v10 - v18 > 0x7FFFFFFE )
                  {
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v165 != &v168 )
                      free(v165);
                    if ( v162 != &v163 )
                      free(v162);
                    v13 = 0LL;
                    **(_DWORD **)&v156 = 75;
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
                        v151 = v47;
                        v89 = (char *)malloc(v10);
                        v47 = (char *)v151;
                        if ( !v89 )
                          goto LABEL_200;
                        if ( v18 && v77 )
                          v47 = (char *)memcpy(v89, v151, v18);
                        else
                          v47 = v89;
                      }
                      else
                      {
                        v151 = v47;
                        v78 = (char *)realloc(v47, v10);
                        v47 = (char *)v151;
                        if ( !v78 )
                          goto LABEL_200;
                        v47 = v78;
                      }
                    }
                  }
                  continue;
                case 0xB:
                  v81 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 || (_DWORD)v154 == 2 )
                  {
                    v72 = __snprintf_chk(v81, v48, 1LL, -1LL, v155, v160);
                    v47 = (char *)v151;
                  }
                  else
                  {
                    v72 = __snprintf_chk(v81, v48, 1LL, -1LL, v155, &v159);
                    v47 = (char *)v151;
                  }
                  goto LABEL_131;
                case 0xC:
                  v70 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                    goto LABEL_207;
                  if ( (_DWORD)v154 != 2 )
                  {
                    v71 = &v159;
                    goto LABEL_130;
                  }
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v160);
                  v47 = (char *)v151;
                  goto LABEL_131;
                default:
                  goto LABEL_403;
              }
            }
          }
          if ( v18 != -3LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      switch ( v28 )
      {
        case 18:
          v14 = v18;
          **((_BYTE **)v27 + 2) = v18;
          break;
        case 19:
          v14 = v18;
          **((_WORD **)v27 + 2) = v18;
          break;
        case 20:
          v14 = v18;
          **((_DWORD **)v27 + 2) = v18;
          break;
        case 21:
        case 22:
          v14 = v18;
          **((_QWORD **)v27 + 2) = v18;
          break;
        default:
LABEL_403:
          abort();
          return result;
      }
LABEL_110:
      v12 = (char *)*((_QWORD *)v11 + 1);
      v11 += 88;
      v15 = *(_BYTE **)v11;
      ++v153;
      if ( v15 != v12 )
        goto LABEL_14;
LABEL_111:
      v18 = v14;
    }
    v103 = v18;
    v104 = v18 + 1;
    if ( v18 == -1LL )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
    }
    else if ( v10 < v104 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v104 )
        {
LABEL_298:
          v105 = v13 == src;
          if ( !v13 || v105 )
          {
            v138 = (char *)malloc(v10);
            if ( !v138 )
              goto LABEL_88;
            if ( v103 && v105 )
              v13 = (char *)memcpy(v138, v13, v103);
            else
              v13 = v138;
          }
          else
          {
            v106 = (char *)realloc(v13, v10);
            if ( !v106 )
              goto LABEL_126;
            v13 = v106;
          }
          goto LABEL_302;
        }
      }
      else if ( v104 <= 0xC )
      {
        v10 = 12LL;
        goto LABEL_298;
      }
      if ( v18 == -2LL )
        goto LABEL_88;
      v10 = v18 + 1;
      goto LABEL_298;
    }
LABEL_302:
    v13[v103] = 0;
    if ( v10 > v104 && v13 != src )
    {
      v107 = (char *)realloc(v13, v104);
      if ( v107 )
        v13 = v107;
    }
    if ( ptr )
      free(ptr);
    if ( v165 != &v168 )
      free(v165);
    if ( v162 != &v163 )
      free(v162);
    *v150 = v103;
    return v13;
  }
  if ( v165 != &v168 )
    free(v165);
  if ( v162 != &v163 )
    free(v162);
  v13 = 0LL;
  *__errno_location() = 22;
  return v13;
}

__int64 __fastcall sub_40FF40(int *a1, unsigned __int64 *a2)
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
            v18 = &unk_4151E0;
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

__int64 __fastcall sub_410160(char *a1, _QWORD *a2, unsigned __int64 *a3)
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

int __fastcall sub_410EE0(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_618288 )
    v1 = (void *)unk_618288;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_410EF8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_617E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
