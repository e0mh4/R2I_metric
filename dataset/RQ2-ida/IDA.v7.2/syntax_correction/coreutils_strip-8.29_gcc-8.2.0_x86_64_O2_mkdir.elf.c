#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  __int64 v3; // r12
  unsigned int v4; // ebp
  char *v5; // rdi
  int v6; // eax
  char *v7; // rax
  unsigned int v8; // er13
  __int64 v9; // rax
  void *v10; // r14
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  void *v15; // [rsp+0h] [rbp-48h]
  unsigned int v16; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+Ch] [rbp-3Ch]
  char v18; // [rsp+14h] [rbp-34h]
  char *v19; // [rsp+18h] [rbp-30h]

  v3 = 0LL;
  v4 = a1;
  v5 = *a2;
  v15 = 0LL;
  v19 = 0LL;
  v17 = 511LL;
  v18 = 0;
  sub_402E70(v5);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409F00(sub_402570);
  while ( 1 )
  {
    v6 = sub_4065A0(v4, a2, "pm:vZ", &off_40A520, 0LL);
    if ( v6 == -1 )
      break;
    if ( v6 == 90 )
    {
      if ( qword_60E4A8 )
      {
        v7 = dcgettext(0LL, "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel", 5);
        error(0, 0, v7);
      }
    }
    else
    {
      if ( v6 <= 90 )
      {
        if ( v6 == -131 )
        {
          sub_405480((char)stdout);
          exit(0);
        }
        if ( v6 == -130 )
          sub_402100(0);
LABEL_12:
        sub_402100(1);
      }
      switch ( v6 )
      {
        case 112:
          v15 = &sub_402060;
          break;
        case 118:
          v19 = dcgettext(0LL, "created directory %s", 5);
          break;
        case 109:
          v3 = qword_60E4A8;
          break;
        default:
          goto LABEL_12;
      }
    }
  }
  if ( dword_60E2BC == v4 )
  {
    v12 = dcgettext(0LL, "missing operand", 5);
    error(0, 0, v12);
    goto LABEL_12;
  }
  if ( v15 )
  {
    v8 = umask(0);
    umask(v8);
    v16 = v8;
    if ( !v3 )
    {
      LODWORD(v17) = 511;
      return sub_404ED0(v4 - dword_60E2BC, &a2[dword_60E2BC], sub_401F70, &v15);
    }
  }
  else
  {
    if ( !v3 )
      return sub_404ED0(v4 - dword_60E2BC, &a2[dword_60E2BC], sub_401F70, &v15);
    v8 = umask(0);
    umask(v8);
    v16 = v8;
  }
  v9 = sub_402920(v3);
  v10 = (void *)v9;
  if ( !v9 )
  {
    v13 = sub_404A90(v3);
    v14 = dcgettext(0LL, "invalid mode %s", 5);
    error(1, 0, v14, v13);
    start();
  }
  LODWORD(v17) = sub_402CF0(511LL, 1LL, v8, v9, (char *)&v17 + 4);
  free(v10);
  return sub_404ED0(v4 - dword_60E2BC, &a2[dword_60E2BC], sub_401F70, &v15);
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

__int64 *sub_401EBB()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_401EDA()
{
  return 0LL;
}

__int64 *sub_401F11()
{
  __int64 *result; // rax

  if ( !byte_60E2E8 )
  {
    while ( qword_60E2F0 < (unsigned __int64)(&qword_60DE48 - qword_60DE40 - 1) )
      ((void (*)(void))qword_60DE40[++qword_60E2F0])();
    result = sub_401EBB();
    byte_60E2E8 = 1;
  }
  return result;
}

__int64 sub_401F68()
{
  return sub_401EDA();
}

__int64 __fastcall sub_401F70(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rbx
  bool v4; // zf
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebp

  v3 = a3;
  v4 = *((_BYTE *)a3 + 20) == 0;
  v5 = *a3;
  if ( !v4 && !v5 )
  {
    *__errno_location() = 95;
    v5 = 0LL;
  }
  v6 = (unsigned __int64)sub_402610(
                           a1,
                           a2,
                           v5,
                           v3,
                           *((unsigned int *)v3 + 3),
                           sub_402040,
                           *((unsigned int *)v3 + 4),
                           -1LL,
                           -1LL,
                           1LL) ^ 1;
  v7 = (unsigned __int8)v6;
  if ( !(_BYTE)v6 && *((_BYTE *)v3 + 20) && *v3 )
    *__errno_location() = 95;
  return v7;
}

__int64 __fastcall sub_402010(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  sub_404840(4LL, a1);
  return sub_402460(stdout, a7);
}

__int64 __fastcall sub_402040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 24) )
    result = sub_402010(a1, a2, a3, a4, a5, a6, a7);
  return result;
}

__int64 __fastcall sub_402060(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __mode_t v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  int *v12; // rax
  int v13; // er14
  int *v14; // r13
  char v15; // [rsp+0h] [rbp-28h]

  v3 = a1;
  v4 = a3;
  if ( *(_BYTE *)(a3 + 20) )
    *__errno_location() = 95;
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 & 0xC0 )
  {
    LOBYTE(v5) = v5 & 0x3F;
    umask(v5);
    v8 = mkdir(a2, 0x1FFu);
    v12 = __errno_location();
    v13 = *v12;
    v14 = v12;
    umask(*(_DWORD *)(v4 + 8));
    *v14 = v13;
  }
  else
  {
    v8 = mkdir(a2, 0x1FFu);
  }
  if ( !v8 )
  {
    v8 = (*(_DWORD *)(v4 + 8) >> 8) & 1;
    if ( *(_QWORD *)(v4 + 24) )
      sub_402010(v3, v4, v6, v7, v9, v10, v15);
  }
  return v8;
}

noreturn void __fastcall  sub_402100(int status)
{
  char *v1; // rbp
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
  const char **v16; // rax
  const char *v17; // rbp
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  const char *v26; // [rsp+0h] [rbp-88h]
  const char *v27; // [rsp+8h] [rbp-80h]
  const char *v28; // [rsp+10h] [rbp-78h]
  const char *v29; // [rsp+18h] [rbp-70h]
  const char *v30; // [rsp+20h] [rbp-68h]
  const char *v31; // [rsp+28h] [rbp-60h]
  const char *v32; // [rsp+30h] [rbp-58h]
  const char *v33; // [rsp+38h] [rbp-50h]
  const char *v34; // [rsp+40h] [rbp-48h]
  const char *v35; // [rsp+48h] [rbp-40h]
  const char *v36; // [rsp+50h] [rbp-38h]
  const char *v37; // [rsp+58h] [rbp-30h]
  __int64 v38; // [rsp+60h] [rbp-28h]
  __int64 v39; // [rsp+68h] [rbp-20h]

  v1 = s;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... DIRECTORY...\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(0LL, "Create the DIRECTORY(ies), if they do not already exist.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "  -m, --mode=MODE   set file mode (as in chmod), not a=rwx - umask\n"
         "  -p, --parents     no error if existing, make parent directories as needed\n"
         "  -v, --verbose     print a message for each created directory\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "  -Z                   set SELinux security context of each created directory\n"
          "                         to the default type\n"
          "      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux\n"
          "                         or SMACK security context to CTX\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v15, v14);
  v26 = "[";
  v16 = &v26;
  v27 = "test invocation";
  v28 = "coreutils";
  v29 = "Multi-call invocation";
  v30 = "sha224sum";
  v31 = "sha2 utilities";
  v32 = "sha256sum";
  v33 = "sha2 utilities";
  v34 = "sha384sum";
  v35 = "sha2 utilities";
  v36 = "sha512sum";
  v37 = "sha2 utilities";
  v38 = 0LL;
  v39 = 0LL;
  do
    v16 += 2;
  while ( *v16 && strcmp("mkdir", *v16) );
  v17 = v16[1];
  if ( v17 )
  {
    v18 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v18, &unk_409FE0);
    v19 = setlocale(5, 0LL);
    if ( !v19 || !strncmp(v19, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v22 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v22, &unk_409FE0);
    v23 = setlocale(5, 0LL);
    if ( !v23 || !strncmp(v23, "en_", 3uLL) )
    {
      v17 = "mkdir";
      v24 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v24, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v17 = "mkdir";
  }
  v25 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v25, "mkdir");
LABEL_10:
  v20 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v20, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v21 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v21, v17);
LABEL_3:
  exit(status);
}

int __usercall sub_402460(FILE *s)
{
  char *v1; // rax

  fputs_unlocked(s, s);
  fwrite_unlocked(&unk_40A600, 1uLL, 2uLL, s);
  sub_4066A0(s);
  v1 = s->_IO_write_ptr;
  if ( v1 >= s->_IO_write_end )
  {
    LODWORD(v1) = __overflow(s, 10);
  }
  else
  {
    s->_IO_write_ptr = v1 + 1;
    *v1 = 10;
  }
  return (int)v1;
}

__int64 sub_402570()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_406760(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60E2F8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60E300 )
      {
        v5 = sub_4048E0();
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
  result = sub_406760(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_402610(char *a1, _DWORD *a2, __int64 a3, __int64 a4, __mode_t a5, void (__fastcall *a6)(char *, __int64), int a7, int a8, int a9, char a10)
{
  __int64 v10; // r13
  __mode_t v11; // er12
  __int64 v12; // rax
  __int64 v13; // rbp
  char *v14; // rbp
  int v15; // eax
  int v16; // er15
  __int64 v17; // rbx
  char *v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  int v21; // eax
  int *v22; // rbp
  const char *v23; // rsi
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // [rsp+0h] [rbp-E8h]
  void (__fastcall *v27)(char *, __int64); // [rsp+10h] [rbp-D8h]
  struct stat stat_buf; // [rsp+20h] [rbp-C8h]

  v10 = a3;
  v11 = a5;
  v26 = a4;
  v27 = a6;
  if ( *a1 != 47 && *a2 == 4 )
  {
    v16 = a2[1];
    if ( v16 )
      goto LABEL_14;
    if ( a3 )
      goto LABEL_4;
LABEL_16:
    v14 = a1;
    goto LABEL_6;
  }
  if ( !a3 )
    goto LABEL_16;
LABEL_4:
  v12 = sub_406DE0(a1, a2, a3, a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    result = 1LL;
    if ( v13 == -1 )
    {
      v16 = *__errno_location();
      goto LABEL_14;
    }
    return result;
  }
  v14 = &a1[v12];
LABEL_6:
  if ( (a9 & a8) == -1 )
  {
    if ( !(v11 & 0x200 | a7 & 0xC00) )
    {
      v16 = mkdir(v14, v11);
      if ( v16 )
        goto LABEL_9;
      v27(a1, v26);
      if ( !(v11 & a7 & 0x1FF) )
        return 1LL;
      v20 = 3LL;
      goto LABEL_28;
    }
    v15 = mkdir(v14, v11 & 0xFFFFFFED);
  }
  else
  {
    v15 = mkdir(v14, v11 & 0xFFFFFFC0);
  }
  v16 = v15;
  if ( v15 )
  {
LABEL_9:
    v16 = *__errno_location();
    if ( a10 )
    {
      if ( !v16 || v16 != 2 && v10 && !__xstat(1, v14, &stat_buf) && (stat_buf.st_mode & 0xF000) == 0x4000 )
        return 1LL;
LABEL_14:
      v17 = sub_404A90(a1);
      v18 = dcgettext(0LL, "cannot create directory %s", 5);
      error(0, v16, v18, v17);
      return 0LL;
    }
    v20 = 2LL;
    goto LABEL_28;
  }
  v27(a1, v26);
  v20 = 3LL;
LABEL_28:
  v21 = sub_404AE0(a2, v14, v20, &stat_buf);
  if ( v21 < -1 )
    return 1LL;
  if ( !v21 )
    v14 = ".";
  if ( !(unsigned int)sub_406F70(stat_buf.st_dev, v14, a7) )
    return 1LL;
  if ( v16 && (v16 == 2 || !v10 || *__errno_location() == 20) )
    goto LABEL_14;
  v22 = __errno_location();
  v23 = "cannot change permissions of %s";
  v24 = sub_404A90(a1);
  if ( (a9 & a8) != -1 )
    v23 = "cannot change owner and permissions of %s";
  v25 = dcgettext(0LL, v23, 5);
  error(0, *v22, v25, v24);
  return 0LL;
}

_WORD *__fastcall sub_402920(_BYTE *a1)
{
  _BYTE *v1; // rcx
  char *v2; // rbx
  int v3; // edx
  unsigned __int64 v4; // rdi
  bool v5; // al
  bool v6; // al
  __int64 v7; // rdi
  _WORD *result; // rax
  __int64 v9; // r10
  int v10; // edi
  char v11; // r9
  unsigned int v12; // ebp
  __int64 v13; // r11
  __int64 v14; // r10
  int v15; // ecx
  int v16; // edx
  char *v17; // r8
  __int64 v18; // rsi
  unsigned int v19; // ecx
  unsigned __int8 v20; // si
  char v21; // bl
  int v22; // ebx

  v1 = a1;
  v2 = a1;
  v3 = (char)*a1;
  if ( (unsigned __int8)(*a1 - 48) > 7u )
  {
    v4 = 1LL;
    if ( (_BYTE)v3 )
    {
      do
      {
        ++v1;
        v5 = (_BYTE)v3 == 43 || (v3 & 0xEF) == 45;
        LOBYTE(v3) = *v1;
        v4 += v5;
      }
      while ( *v1 );
      v6 = v4 >> 60 != 0;
      v7 = 16 * v4;
      if ( v7 < 0 || v6 )
        sub_405810();
    }
    else
    {
      v7 = 16LL;
    }
    result = (_WORD *)sub_4055C0(v7);
    v9 = 0LL;
LABEL_7:
    v10 = 0;
    while ( 1 )
    {
      v11 = *v2;
      if ( *v2 == 97 )
      {
        v10 = 4095;
        goto LABEL_54;
      }
      if ( v11 <= 97 )
        break;
      switch ( v11 )
      {
        case 111:
          v10 |= 0x207u;
          break;
        case 117:
          v10 |= 0x9C0u;
          break;
        case 103:
          v10 |= 0x438u;
          break;
        default:
          goto LABEL_13;
      }
LABEL_54:
      ++v2;
    }
    if ( v11 != 45 && v11 != 61 && v11 != 43 )
      goto LABEL_13;
    v13 = v9 + 1;
    v14 = (__int64)&result[8 * v9];
    while ( 1 )
    {
      v16 = v2[1];
      v17 = v2 + 1;
      if ( v2[1] == 103 )
      {
        v18 = (__int64)(v2 + 2);
        v15 = 56;
      }
      else
      {
        if ( v2[1] <= 103 )
        {
          if ( (unsigned __int8)(v16 - 48) <= 7u )
          {
            v19 = 0;
            while ( 1 )
            {
              v19 = v16 + 8 * v19 - 48;
              ++v17;
              if ( v19 > 0xFFF )
                goto LABEL_13;
              v16 = *v17;
              if ( (unsigned __int8)(*v17 - 48) > 7u )
              {
                if ( !v10 && (!(_BYTE)v16 || (_BYTE)v16 == 44) )
                {
                  *(_BYTE *)v14 = v11;
                  v2 = v17;
                  v11 = v16;
                  v10 = 4095;
                  *(_DWORD *)(v14 + 8) = v19;
                  v15 = 4095;
                  *(_BYTE *)(v14 + 1) = 1;
                  *(_DWORD *)(v14 + 4) = 4095;
                  goto LABEL_27;
                }
                goto LABEL_13;
              }
            }
          }
LABEL_42:
          v20 = v16 - 88;
          v21 = 1;
          v15 = 0;
          while ( 2 )
          {
            switch ( v20 )
            {
              case 0u:
                v21 = 2;
                goto LABEL_45;
              case 0x1Au:
                v15 |= 0x124u;
                goto LABEL_45;
              case 0x1Bu:
                BYTE1(v15) |= 0xCu;
                goto LABEL_45;
              case 0x1Cu:
                BYTE1(v15) |= 2u;
                goto LABEL_45;
              case 0x1Fu:
                LOBYTE(v15) = v15 | 0x92;
                goto LABEL_45;
              case 0x20u:
                v15 |= 0x49u;
LABEL_45:
                LOBYTE(v16) = *++v17;
                v20 = *v17 - 88;
                if ( v20 > 0x20u )
                  goto LABEL_46;
                continue;
              default:
LABEL_46:
                *(_BYTE *)v14 = v11;
                v11 = v16;
                *(_BYTE *)(v14 + 1) = v21;
                v2 = v17;
                *(_DWORD *)(v14 + 4) = v10;
                *(_DWORD *)(v14 + 8) = v15;
                break;
            }
            goto LABEL_25;
          }
        }
        v18 = (__int64)(v2 + 2);
        if ( (_BYTE)v16 == 111 )
        {
          v15 = 7;
        }
        else
        {
          v15 = 448;
          if ( (_BYTE)v16 != 117 )
            goto LABEL_42;
        }
      }
      *(_BYTE *)(v14 + 1) = 3;
      *(_DWORD *)(v14 + 4) = v10;
      *(_DWORD *)(v14 + 8) = v15;
      *(_BYTE *)v14 = v11;
      v11 = v2[2];
      v2 = (char *)v18;
LABEL_25:
      if ( v10 )
        v15 &= v10;
LABEL_27:
      *(_DWORD *)(v14 + 12) = v15;
      v14 += 16LL;
      if ( (v11 & 0xEF) != 45 && v11 != 43 )
      {
        if ( v11 == 44 )
        {
          ++v2;
          v9 = v13;
          goto LABEL_7;
        }
        if ( !v11 )
        {
          HIBYTE(result[8 * v13]) = 0;
          return result;
        }
LABEL_13:
        free(result);
        return 0LL;
      }
      ++v13;
    }
  }
  v12 = 0;
  do
  {
    v12 = v3 + 8 * v12 - 48;
    ++v1;
    if ( v12 > 0xFFF )
      return 0LL;
    v3 = (char)*v1;
  }
  while ( (unsigned __int8)(*v1 - 48) <= 7u );
  result = 0LL;
  if ( !(_BYTE)v3 )
  {
    v22 = v12 & 0xC00 | 0x3FF;
    if ( v1 - a1 >= 5 )
      v22 = 4095;
    result = (_WORD *)sub_4055C0(32LL);
    *result = 317;
    *((_DWORD *)result + 1) = 4095;
    *((_DWORD *)result + 2) = v12;
    *((_DWORD *)result + 3) = v22;
    *((_BYTE *)result + 17) = 0;
  }
  return result;
}

__int64 __fastcall sub_402C90(char *filename)
{
  int v1; // edx
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+0h] [rbp-98h]
  int v5; // [rsp+18h] [rbp-80h]

  v1 = __xstat(1, filename, (struct stat *)&v4);
  result = 0LL;
  if ( !v1 )
  {
    v3 = v5;
    result = sub_4055C0(32LL);
    *(_WORD *)result = 317;
    *(_DWORD *)(result + 4) = 4095;
    *(_DWORD *)(result + 8) = v3;
    *(_DWORD *)(result + 12) = 4095;
    *(_BYTE *)(result + 17) = 0;
  }
  return result;
}

__int64 __fastcall sub_402CF0(__int16 a1, char a2, int a3, char *a4, _DWORD *a5)
{
  char v5; // r11
  __int64 result; // rax
  int v7; // ebx
  int v8; // edx
  unsigned int v9; // er10
  int v10; // edi
  int v11; // er9
  int v12; // er11
  int v13; // er9
  char v14; // r11
  int v15; // er9
  int v16; // er9
  int v17; // er12

  v5 = a4[1];
  result = a1 & 0xFFF;
  v7 = 0;
  if ( v5 )
  {
    v8 = ~a3;
    while ( 1 )
    {
      v17 = *((_DWORD *)a4 + 1);
      v13 = *((_DWORD *)a4 + 2);
      if ( a2 )
        break;
      v9 = -1;
      v10 = 0;
      if ( v5 == 2 )
      {
        if ( !(result & 0x49) )
          goto LABEL_10;
LABEL_18:
        v14 = *a4;
        v15 = v9 & (v13 | 0x49);
        if ( !v17 )
          goto LABEL_11;
LABEL_19:
        v16 = v17 & v15;
        if ( v14 != 45 )
        {
          if ( v14 == 61 )
          {
            v10 |= ~v17;
            LOWORD(v9) = ~(_WORD)v10;
            goto LABEL_22;
          }
LABEL_13:
          if ( v14 == 43 )
          {
            v7 |= v16;
            result = v16 | (unsigned int)result;
          }
          goto LABEL_15;
        }
LABEL_26:
        v7 |= v16;
        result = ~v16 & (unsigned int)result;
LABEL_15:
        a4 += 16;
        v5 = a4[1];
        if ( !v5 )
          goto LABEL_23;
      }
      else
      {
LABEL_4:
        if ( v5 == 3 )
        {
          v11 = result & v13;
          v12 = (v11 & 0x124u) >= 1 ? 0x124 : 0;
          if ( v11 & 0x92 )
            v12 = (v11 & 0x124u) >= 1 ? 0x124 : 0;
          if ( v11 & 0x49 )
            v12 |= 0x49u;
          v13 = v12 | v11;
        }
LABEL_10:
        v14 = *a4;
        v15 = v9 & v13;
        if ( v17 )
          goto LABEL_19;
LABEL_11:
        v16 = v8 & v15;
        if ( v14 == 45 )
          goto LABEL_26;
        if ( v14 != 61 )
          goto LABEL_13;
LABEL_22:
        a4 += 16;
        v5 = a4[1];
        v7 |= v9 & 0xFFF;
        result = v16 | v10 & (unsigned int)result;
        if ( !v5 )
          goto LABEL_23;
      }
    }
    v9 = *((_DWORD *)a4 + 3) | 0xFFFFF3FF;
    v10 = ~(unsigned __int16)*((_DWORD *)a4 + 3) & 0xC00;
    if ( v5 == 2 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_23:
  if ( a5 )
    *a5 = v7;
  return result;
}

char *__fastcall sub_402E70(const char *a1)
{
  char *v1; // rbx
  char *result; // rax

  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v1 = (char *)a1;
  result = strrchr(a1, 47);
  if ( result )
  {
    if ( result + 1 - a1 > 6 && !memcmp(result - 6, "/.libs/", 7uLL) )
    {
      v1 = result + 1;
      if ( !memcmp(result + 1, "lt-", 3uLL) )
      {
        v1 = result + 4;
        program_invocation_short_name = (__int64)(result + 4);
      }
    }
  }
  s = v1;
  program_invocation_name = (__int64)v1;
  return result;
}

char *__fastcall sub_402F10(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_406870();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40A7E1;
      if ( !v5 )
        v2 = (char *)&unk_40A7D6;
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
    v2 = (char *)&unk_40A7DD;
    if ( !v5 )
      v2 = (char *)&unk_40A7DA;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_403010(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_403010((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_403010((__int64)v9, v79, s);
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
              return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
            return sub_403010((__int64)v9, v10, s);
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
            return sub_403010((__int64)v9, v10, s);
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
            return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
            return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
          return sub_403010((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_406620((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_403010((__int64)v9, v10, s);
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
      return sub_403010((__int64)v9, v10, s);
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
        a8 = sub_402F10("`", v11);
        v47 = sub_402F10("'", v11);
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

unsigned __int64 __fastcall sub_403010(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_403010((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_403010((__int64)v9, v79, s);
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
              return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
            return sub_403010((__int64)v9, v10, s);
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
            return sub_403010((__int64)v9, v10, s);
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
            return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
            return sub_403010((__int64)v9, v10, s);
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
              return sub_403010((__int64)v9, v10, s);
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
          return sub_403010((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_406620((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_403010((__int64)v9, v10, s);
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
      return sub_403010((__int64)v9, v10, s);
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
        a8 = sub_402F10("`", v11);
        v47 = sub_402F10("'", v11);
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

_BYTE *__fastcall sub_404240(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60E298;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405810();
    v9 = 16LL * (a1 + 1);
    if ( off_60E298 == &xmmword_60E2A0 )
    {
      v7 = (__int128 *)sub_405620(0LL, v9);
      off_60E298 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E2A0);
    }
    else
    {
      off_60E298 = (__int128 *)sub_405620(off_60E298, v9);
      v7 = off_60E298;
    }
    memset(&v7[dword_60E2B0], 0, 16LL * (a1 + 1 - dword_60E2B0));
    dword_60E2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_403010(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4055C0(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_403010(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_404240(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60E298;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405810();
    v9 = 16LL * (a1 + 1);
    if ( off_60E298 == &xmmword_60E2A0 )
    {
      v7 = (__int128 *)sub_405620(0LL, v9);
      off_60E298 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E2A0);
    }
    else
    {
      off_60E298 = (__int128 *)sub_405620(off_60E298, v9);
      v7 = off_60E298;
    }
    memset(&v7[dword_60E2B0], 0, 16LL * (a1 + 1 - dword_60E2B0));
    dword_60E2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_403010(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4055C0(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_403010(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_404760(int a1, int a2, char *a3)
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
  return sub_404240(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404760(int a1, int a2, char *a3)
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
  return sub_404240(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4047D0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_404240(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_4047D0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_404240(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_404840(int a1, char *a2)
{
  return sub_404760(0, a1, a2);
}

_BYTE *__fastcall sub_404860(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_60E450;
  v7 = _mm_load_si128((const __m128i *)&xmmword_60E420);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60E430);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_60E440);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_404240(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_4048E0(char *a1)
{
  return sub_404860(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_404910(int a1, int a2, char *a3)
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
  return sub_404240(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404910(int a1, int a2, char *a3)
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
  return sub_404240(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404980(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_60E420);
  v7 = _mm_load_si128((const __m128i *)&xmmword_60E430);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60E440);
  v9 = qword_60E450;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_404240(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_404A90(char *a1)
{
  return sub_404240(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60E260);
}

__int64 __fastcall sub_404AE0(unsigned int *a1, const char *a2, int a3, int *a4)
{
  int *v4; // rbx
  char v5; // r14
  int v6; // eax
  int v7; // er13
  int v8; // eax
  int v9; // ecx
  signed int v10; // eax
  unsigned int v11; // er12
  bool v12; // al
  __int64 result; // rax
  int *v14; // rax
  int v15; // ebp
  int *v16; // rbx
  __pid_t v17; // eax
  int v18; // eax

  v4 = a4;
  if ( a4 )
  {
    v5 = a3;
    v6 = __open_2(a2, (a3 << 17) & 0x20000 | 0x10900u);
    *v4 = v6;
    v7 = v6;
    v8 = *__errno_location();
    v4[1] = v8;
    if ( v7 < 0 )
    {
      if ( v8 != 13 )
        return (unsigned int)-1;
    }
    else if ( v5 & 2 )
    {
      return 0;
    }
  }
  else
  {
    v7 = -1;
  }
  v9 = *a1;
  if ( *a1 > 5 )
    goto LABEL_40;
  if ( (1LL << v9) & 0x36 )
    goto LABEL_10;
  if ( (1LL << v9) & 8 )
  {
    if ( (a1[1] & 0x80000000) == 0 )
      goto LABEL_10;
    goto LABEL_26;
  }
  if ( v9 )
LABEL_40:
    __assert_fail("0", "lib/savewd.c", 0x63u, "savewd_save");
  v10 = sub_4067C0((unsigned __int64)".");
  if ( v10 >= 0 )
  {
    *a1 = 1;
    a1[1] = v10;
    goto LABEL_10;
  }
  v18 = *__errno_location();
  if ( v18 != 13 && v18 != 116 )
  {
    *a1 = 4;
    a1[1] = v18;
    goto LABEL_10;
  }
  *(_QWORD *)a1 = -4294967293LL;
LABEL_26:
  v17 = fork();
  a1[1] = v17;
  if ( v17 )
  {
    if ( v17 > 0 )
    {
      v12 = 1;
      v11 = -2;
      goto LABEL_21;
    }
    *a1 = 4;
    a1[1] = *__errno_location();
  }
LABEL_10:
  if ( v7 < 0 )
  {
    v11 = chdir(a2);
    if ( !v11 )
      goto LABEL_18;
    return v11;
  }
  v11 = fchdir(v7);
  if ( v11 )
  {
    v12 = v4 == 0LL;
    goto LABEL_21;
  }
LABEL_18:
  switch ( (unsigned __int64)*a1 )
  {
    case 1uLL:
      *a1 = 2;
      break;
    case 2uLL:
    case 4uLL:
    case 5uLL:
      break;
    case 3uLL:
      if ( a1[1] )
        __assert_fail("wd->val.child == 0", "lib/savewd.c", 0x9Bu, "savewd_chdir");
      return result;
    default:
      __assert_fail("0", "lib/savewd.c", 0x9Fu, "savewd_chdir");
      return result;
  }
  v12 = v4 == 0LL;
  v11 = 0;
LABEL_21:
  if ( v7 < 0 || !v12 )
    return v11;
  v14 = __errno_location();
  v15 = *v14;
  v16 = v14;
  close(v7);
  result = v11;
  *v16 = v15;
  return result;
}

int __fastcall sub_404D30(unsigned int *a1, int a2)
{
  __pid_t v2; // ebp
  int result; // eax
  int v4; // er12
  int *v5; // rbp
  __int16 v6; // ax
  int *v7; // rax
  int stat_loc; // [rsp+Ch] [rbp-1Ch]

  switch ( (unsigned __int64)*a1 )
  {
    case 0uLL:
    case 1uLL:
      return 0;
    case 2uLL:
      result = fchdir(a1[1]);
      if ( result )
      {
        v7 = __errno_location();
        v4 = *v7;
        v5 = v7;
        close(a1[1]);
        *a1 = 4;
        a1[1] = v4;
LABEL_6:
        *v5 = v4;
        result = -1;
      }
      else
      {
        *a1 = 1;
      }
      return result;
    case 3uLL:
      v2 = a1[1];
      if ( !v2 )
        _exit(a2);
      if ( v2 <= 0 )
        return 0;
      while ( waitpid(v2, &stat_loc, 0) < 0 )
      {
        if ( *__errno_location() != 4 )
          __assert_fail("(*__errno_location ()) == 4", "lib/savewd.c", 0xD8u, "savewd_restore");
      }
      v6 = stat_loc;
      a1[1] = -1;
      if ( v6 & 0x7F )
      {
        raise(v6 & 0x7F);
        HIBYTE(v6) = BYTE1(stat_loc);
      }
      return HIBYTE(v6);
    case 4uLL:
      v4 = a1[1];
      v5 = __errno_location();
      goto LABEL_6;
    default:
      __assert_fail("0", "lib/savewd.c", 0xE2u, "savewd_restore");
      return result;
  }
}

int __fastcall sub_404E60(unsigned int *a1)
{
  __int64 v1; // rax
  int result; // eax

  v1 = *a1;
  switch ( v1 )
  {
    case 0LL:
    case 4LL:
      break;
    case 1LL:
    case 2LL:
      LODWORD(v1) = close(a1[1]);
      break;
    case 3LL:
      LODWORD(v1) = a1[1];
      if ( (int)v1 >= 0 )
        __assert_fail("wd->val.child < 0", "lib/savewd.c", 0xF7u, "savewd_finish");
      return result;
    default:
      __assert_fail("0", "lib/savewd.c", 0xFBu, "savewd_finish");
      return result;
  }
  *a1 = 5;
  return v1;
}

__int64 __fastcall sub_404ED0(int a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD, int *, __int64), __int64 a4)
{
  __int64 (__fastcall *v4)(_QWORD, int *, __int64); // r13
  int v5; // ebp
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // r15
  int v9; // er14
  int i; // eax
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // r15
  unsigned __int64 v14; // rbp
  int v15; // eax
  __int64 v17; // [rsp+8h] [rbp-60h]
  int v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+2Ch] [rbp-3Ch]

  v4 = a3;
  v17 = a4;
  v18 = 0;
  if ( a1 - 1 < 0 )
    goto LABEL_27;
  v5 = a1 - 1;
  if ( **(_BYTE **)(a2 + 8LL * (a1 - 1)) == 47 )
  {
    v6 = a1 - 2;
    do
    {
      v5 = v6;
      if ( (int)v6 < 0 )
        break;
      v7 = *(_BYTE **)(a2 + 8 * v6--);
    }
    while ( *v7 == 47 );
  }
  if ( v5 <= 0 )
  {
LABEL_27:
    v9 = 0;
    v5 = 0;
  }
  else
  {
    v8 = a2;
    v9 = 0;
    for ( i = 0; ; i = v18 )
    {
      if ( i != 3 || v19 <= 0 )
      {
        v11 = v4(*(_QWORD *)v8, &v18, v17);
        if ( v9 < v11 )
          v9 = v11;
      }
      if ( **(_BYTE **)(v8 + 8) != 47 )
      {
        v12 = sub_404D30((unsigned int *)&v18, v9);
        if ( v9 < v12 )
          v9 = v12;
      }
      v8 += 8LL;
      if ( v8 == a2 + 8LL * (unsigned int)(v5 - 1) + 8 )
        break;
    }
  }
  sub_404E60((unsigned int *)&v18);
  if ( a1 > v5 )
  {
    v13 = (_QWORD *)(a2 + 8LL * v5);
    v14 = a2 + 8 * (v5 + (unsigned __int64)(unsigned int)(a1 - 1 - v5)) + 8;
    do
    {
      v15 = v4(*v13, &v18, v17);
      if ( v9 < v15 )
        v9 = v15;
      ++v13;
    }
    while ( v13 != (_QWORD *)v14 );
  }
  return (unsigned int)v9;
}

__int64 __fastcall sub_405020(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_405020(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_405420(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_405020(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_405020(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_405480(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_405020(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_405020(a1, a2, a3, a4, v15, i);
}

int sub_405540()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_409FE0);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_4055C0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405810();
  }
  return result;
}

void *__fastcall sub_405620(void *a1, size_t a2)
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
        sub_405810();
    }
  }
  return result;
}

void *__fastcall sub_4057C0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4055C0(n);
  return memcpy(v2, src, n);
}

noreturn void  sub_405810()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_405850(__int64 a1, int *a2)
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

__int64 __fastcall sub_405930(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_405F50(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_405850(a2, a7);
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
        sub_405850((__int64)v11, a7);
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
            return (unsigned int)sub_405930(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_405930(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_405930(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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
        else if ( a1 == (_DWORD)v36 )
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

__int64 __fastcall sub_406520(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60E460 = dword_60E2BC;
  dword_60E464 = dword_60E2B8;
  result = sub_405F50(a1, a2, a3, a4, a5, a6, &dword_60E460, a7);
  dword_60E2BC = dword_60E460;
  qword_60E4A8 = qword_60E470;
  dword_60E2B4 = dword_60E468;
  return result;
}

__int64 __fastcall sub_406580(int a1, __int64 a2, char *a3)
{
  return sub_406520(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_4065A0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_406520(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_4065C0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_405F50(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4065E0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_406520(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_406600(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_405F50(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_406620(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_406810(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_4066A0(FILE *s, __int64 a2, __int64 a3)
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
  v3 = (char *)sub_4072F0(&v11, &n, a2, a3);
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
    sub_4072E0(s);
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

__int64 __fastcall sub_406760(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4071C0(stream);
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

__int64 __fastcall sub_4067C0(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp-28h]

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = v6;
  v4 = open(a1, a2, v3);
  return sub_407170(v4);
}

bool __fastcall sub_406810(int a1)
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

const char *sub_406870()
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
  v1 = qword_60E498;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_60E498 )
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
          qword_60E498 = v1;
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
                sub_4071C0(v60);
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
            sub_4071C0(v39);
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

signed __int64 __fastcall sub_406DE0(const char *a1, unsigned int *a2, int (__fastcall *a3)(const char *, const char *, __int64), __int64 a4)
{
  int (__fastcall *v4)(const char *, const char *, __int64); // r14
  const char *v5; // r13
  const char *v6; // r12
  _BYTE *v7; // rbp
  char v8; // dl
  bool v9; // r15
  int v10; // edx
  int v11; // er15
  int v12; // eax
  int v13; // er13
  int *v15; // rax
  bool v16; // [rsp+14h] [rbp-44h]
  __int64 v17; // [rsp+18h] [rbp-40h]

  v4 = a3;
  v5 = a1;
  v6 = a1;
  v7 = 0LL;
  v17 = a4;
  v16 = 0;
LABEL_2:
  while ( 1 )
  {
    v8 = *(++v6 - 1);
    if ( !v8 )
      return v5 - a1;
    while ( *v6 != 47 )
    {
      v9 = *v6 != 0 && v8 == 47;
      if ( !v9 || !v7 )
        goto LABEL_2;
      if ( v7 - v5 == 1 )
      {
        if ( *v5 == 46 )
          goto LABEL_12;
        *v7 = 0;
      }
      else
      {
        *v7 = 0;
        if ( v7 - v5 == 2 && *v5 == 46 && v5[1] == 46 )
        {
          v11 = 0;
          v16 = 0;
          v10 = 0;
          goto LABEL_10;
        }
      }
      if ( v4(a1, v5, v17) < 0 )
      {
        v11 = *__errno_location();
        v10 = v16;
      }
      else
      {
        v16 = v9;
        v10 = 1;
        v11 = 0;
      }
LABEL_10:
      v12 = sub_404AE0(a2, v5, v10, 0LL);
      v13 = v12;
      if ( v12 == -1 || (*v7 = 47, v12) )
      {
        if ( v11 )
        {
          v15 = __errno_location();
          if ( *v15 == 2 )
            *v15 = v11;
        }
        return v13;
      }
LABEL_12:
      v5 = v6++;
      v8 = *(v6 - 1);
      if ( !v8 )
        return v5 - a1;
    }
    if ( v8 != 47 )
      v7 = v6;
  }
}

__int64 __usercall sub_406F70(int fd, char *file, int a3, __uid_t a4, __gid_t a5, int a6, int a7)
{
  int v7; // er14
  __gid_t v8; // er13
  __uid_t v9; // er12
  char *v10; // rbp
  unsigned int v11; // ebx
  __mode_t v12; // ecx
  int v13; // eax
  int v14; // edx
  int *v16; // rax
  int v17; // er12
  int *v18; // rbp
  int v19; // esi
  int v20; // eax
  int v21; // [rsp+8h] [rbp-D0h]
  __mode_t v22; // [rsp+Ch] [rbp-CCh]
  __mode_t v23; // [rsp+Ch] [rbp-CCh]
  struct stat stat_buf; // [rsp+10h] [rbp-C8h]

  v7 = a6;
  v8 = a5;
  v9 = a4;
  v10 = file;
  v21 = a3;
  if ( fd < 0 )
  {
    v11 = __xstat(1, file, &stat_buf);
    if ( v11 )
      return v11;
    v12 = stat_buf.st_mode;
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
    {
      v11 = -1;
      *__errno_location() = 20;
      return v11;
    }
  }
  else
  {
    v11 = __fxstat(1, fd, &stat_buf);
    if ( v11 )
      goto LABEL_23;
    v12 = stat_buf.st_mode;
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
    {
      v16 = __errno_location();
      v17 = 20;
      v11 = -1;
      *v16 = 20;
      v18 = v16;
LABEL_15:
      close(fd);
      *v18 = v17;
      return v11;
    }
  }
  if ( (v9 == -1 || stat_buf.st_uid == v9) && (v8 == -1 || stat_buf.st_gid == v8) )
    goto LABEL_18;
  if ( fd >= 0 )
  {
    v23 = v12;
    v20 = fchown(fd, v9, v8);
    v12 = v23;
    v11 = v20;
    if ( !v20 )
      goto LABEL_10;
LABEL_23:
    v18 = __errno_location();
    v17 = *v18;
    goto LABEL_15;
  }
  v22 = v12;
  if ( v21 == -1 )
    v13 = chown(file, v9, v8);
  else
    v13 = lchown(file, v9, v8);
  v12 = v22;
  v11 = v13;
  if ( !v13 )
  {
LABEL_10:
    if ( v12 & 0x49 )
    {
      v14 = v12 & 0xC00;
      goto LABEL_19;
    }
LABEL_18:
    v14 = 0;
LABEL_19:
    if ( (v14 | v7 ^ v12) & a7 )
    {
      v19 = v7 | (unsigned __int16)v12 & (unsigned __int16)~(_WORD)a7 & 0xFFF;
      if ( fd < 0 )
        return (unsigned int)chmod(v10, v19);
      v11 = fchmod(fd, v19);
      if ( v11 )
        goto LABEL_23;
    }
    else
    {
      v11 = 0;
      if ( fd < 0 )
        return v11;
    }
    v11 = close(fd);
  }
  return v11;
}

__int64 __fastcall sub_407170(int fd)
{
  __int64 result; // rax
  unsigned int v2; // er12
  int *v3; // rax
  int v4; // er13
  int *v5; // rbp

  if ( (unsigned int)fd > 2 )
    return (unsigned int)fd;
  v2 = sub_408E10();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

int __fastcall sub_4071C0(FILE *stream)
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
  if ( !(unsigned int)sub_407240(stream) )
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

int __fastcall sub_407240(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_407280(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_407280(FILE *a1, __off_t a2, int a3)
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

void __fastcall sub_4072E0(_DWORD *a1)
{
  *a1 |= 0x20u;
}

char *__fastcall sub_4072F0(void *a1, size_t *a2, char *a3, __int64 a4, double a5)
{
  char *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  _BYTE *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  char *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  char *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  _BYTE *v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  char *result; // rax
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // er11
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  int *v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  unsigned __int64 v80; // r9
  int v81; // ebx
  __int64 v82; // rax
  char *v83; // rdi
  unsigned __int128 v84; // fst7
  __int64 v85; // rax
  char *v86; // rdi
  unsigned __int64 v87; // rax
  void *v88; // rax
  char *v89; // rax
  char *v90; // rcx
  int v91; // er8
  __int16 v92; // ax
  unsigned __int64 v93; // r15
  char *v94; // rax
  char *v95; // rax
  char *v96; // rax
  char v97; // al
  unsigned __int64 v98; // r9
  size_t v99; // r8
  unsigned __int64 v100; // r10
  unsigned __int64 v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rax
  char *v105; // rax
  __int64 v106; // rsi
  char v107; // al
  size_t v108; // r15
  size_t v109; // r14
  bool v110; // r13
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // r10
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  char v120; // al
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  char *v123; // rax
  __int64 v124; // rdx
  char v125; // al
  unsigned __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  char *v131; // rsi
  char *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rsi
  unsigned __int64 v135; // rax
  char v136; // al
  __int64 v137; // rsi
  char v138; // al
  char *v139; // rax
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // rax
  char *v143; // rax
  char *v144; // rax
  void *v145; // rdx
  char v146; // al
  char *v147; // rax
  char *v148; // rax
  char v149; // al
  __int64 v150; // [rsp-8h] [rbp-718h]
  int *v151; // [rsp+8h] [rbp-708h]
  int *v152; // [rsp+10h] [rbp-700h]
  int *v153; // [rsp+18h] [rbp-6F8h]
  __int64 v154; // [rsp+20h] [rbp-6F0h]
  unsigned __int64 v155; // [rsp+28h] [rbp-6E8h]
  char *v156; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v158; // [rsp+40h] [rbp-6D0h]
  void *v159; // [rsp+48h] [rbp-6C8h]
  char *v160; // [rsp+50h] [rbp-6C0h]
  __int64 v161; // [rsp+58h] [rbp-6B8h]
  char *v162; // [rsp+60h] [rbp-6B0h]
  _BYTE *v163; // [rsp+68h] [rbp-6A8h]
  long double v164; // [rsp+70h] [rbp-6A0h]
  void *v165; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v167; // [rsp+94h] [rbp-67Ch]
  unsigned int v168; // [rsp+98h] [rbp-678h]
  unsigned int v169; // [rsp+9Ch] [rbp-674h]
  char v170; // [rsp+A0h] [rbp-670h]
  void *v171; // [rsp+A8h] [rbp-668h]
  __int64 v172; // [rsp+B0h] [rbp-660h]
  __int64 v173; // [rsp+190h] [rbp-580h]
  void *v174; // [rsp+198h] [rbp-578h]
  __int64 v175; // [rsp+1A0h] [rbp-570h]
  __int64 v176; // [rsp+1A8h] [rbp-568h]
  __int64 v177; // [rsp+1B0h] [rbp-560h]
  char v178; // [rsp+420h] [rbp-2F0h]

  v5 = a3;
  v6 = a4;
  src = a1;
  v158 = a2;
  if ( (int)sub_409180(a3, &v173, &v170) < 0 )
    return 0LL;
  if ( (int)sub_408F60(v6, &v170) >= 0 )
  {
    v7 = v175 + 7;
    if ( (unsigned __int64)(v175 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v176, v7);
    v8 = v176 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v163 = (_BYTE *)(((unsigned __int64)&v155 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = malloc(v9);
      v163 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v158;
    v12 = (char *)v174;
    v13 = v5;
    v14 = (char *)src;
    v161 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v174;
    if ( *(char **)v174 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (char *)(v16 - v13);
    v18 = (unsigned __int64)&v17[v15];
    v19 = (size_t)&v17[v15];
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v162 = v13;
          LOBYTE(v164) = v20;
          v165 = v17;
          v21 = (char *)malloc(v11);
          v17 = (char *)v165;
          v13 = v162;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v164) )
          {
            *(_QWORD *)&v164 = v162;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = (char *)v165;
            v13 = *(char **)&v164;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v164 = v13;
          v165 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = (char *)v165;
          v13 = *(char **)&v164;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)&v17[v15];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v173 != v161 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_239;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_239:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v164 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v165) = v14 == src;
          v96 = (char *)malloc(v11);
          if ( !v96 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v165 )
            v14 = (char *)memcpy(v96, v14, v19);
          else
            v14 = v96;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v171;
      v28 = (long double *)((char *)v171 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v165) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v165 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v165 = (void *)-1LL;
                while ( 1 )
                {
                  v127 = (__int64)(v66 + 1);
                  v128 = -1LL;
                  v129 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v128 = 10 * v50;
                  v76 = __CFADD__(v128, v129);
                  v50 = v128 + v129;
                  v66 = (char *)v127;
                  if ( v76 )
                  {
                    if ( v67 == (char *)v127 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v165;
                      goto LABEL_82;
                    }
                    while ( *(++v66 - 1) != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v171 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v130 = (__int64)(v51 + 1);
                v55 = 0LL;
                if ( v52 != (char *)v130 )
                {
                  v131 = (char *)v130;
                  while ( 1 )
                  {
                    v132 = v131 + 1;
                    v133 = *v131 - 48;
                    v134 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v134 = 10 * v55;
                    v76 = __CFADD__(v134, v133);
                    v135 = v134 + v133;
                    v131 = v132;
                    v55 = v135;
                    if ( v76 )
                    {
                      if ( v52 == v132 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v131 = v132 + 1;
                        if ( *v132 == 48 )
                          break;
                        if ( v52 == v131 )
                          goto LABEL_88;
                        ++v132;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v131 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_376;
              }
              v54 = (char *)v171 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v87 = v56;
                  if ( v50 >= v56 )
                    v87 = v50;
                  v76 = __CFADD__(v87, 1LL);
                  v88 = (void *)(v87 + 1);
                  v165 = v88;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v88 <= 0x2BC )
                  {
                    v90 = &v178;
                  }
                  else
                  {
                    v159 = (void *)v50;
                    v160 = (char *)v55;
                    LODWORD(v162) = v68;
                    v164 = _FST7;
                    if ( v88 == (void *)-1LL )
                      goto LABEL_88;
                    v89 = (char *)malloc((size_t)v88);
                    v68 = (int)v162;
                    _FST7 = v164;
                    v90 = v89;
                    v55 = (unsigned __int64)v160;
                    v50 = (unsigned __int64)v159;
                    if ( !v89 )
                      goto LABEL_88;
                  }
                  v91 = (unsigned __int16)v168;
                  LOBYTE(v92) = v168;
                  HIBYTE(v92) = BYTE1(v168) | 3;
                  LOWORD(v168) = v92;
                  __asm (" fxam ");
                  if ( v62 & 2 )
                  {
                    *v90 = 45;
                    _FST7 = -_FST7;
                    v93 = (unsigned __int64)(v90 + 1);
                  }
                  else if ( v68 & 4 )
                  {
                    v93 = (unsigned __int64)(v90 + 1);
                    *v90 = 43;
                  }
                  else
                  {
                    v93 = (unsigned __int64)v90;
                    if ( v68 & 8 )
                    {
                      v93 = (unsigned __int64)(v90 + 1);
                      *v90 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v98 = v93 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v93 + 2) = 102;
                      *(_WORD *)v93 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v93 + 2) = 70;
                      *(_WORD *)v93 = 20041;
                    }
                    v93 = 0LL;
                    goto LABEL_264;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v97 = v12[72] & 0xDF;
                  switch ( v97 )
                  {
                    case 70:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || v55 )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v123 = nl_langinfo(0x10000);
                        v124 = (__int64)v160;
                        v98 = *(_QWORD *)&v164;
                        v125 = *v123;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v125 )
                          v125 = 46;
                        *(_BYTE *)(v93 + 1) = v125;
                        if ( v124 )
                        {
                          v126 = v98;
                          do
                            *(_BYTE *)(++v126 - 1) = 48;
                          while ( v126 != v93 + v124 + 2 );
                          v98 += v124;
                        }
                        goto LABEL_264;
                      }
                      goto LABEL_263;
                    case 69:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || (v106 = v93 + 1, v55) )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v139 = nl_langinfo(0x10000);
                        v140 = (__int64)v160;
                        v106 = *(_QWORD *)&v164;
                        v141 = *v139;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v141 )
                          v141 = 46;
                        *(_BYTE *)(v93 + 1) = v141;
                        if ( v140 )
                        {
                          v142 = v106;
                          do
                            *(_BYTE *)(++v142 - 1) = 48;
                          while ( v142 != v93 + v140 + 2 );
                          v106 += v140;
                        }
                      }
                      v107 = v12[72];
                      v98 = v106 + 4;
                      *(_BYTE *)(v106 + 3) = 48;
                      *(_BYTE *)v106 = v107;
                      *(_WORD *)(v106 + 1) = 12331;
                      goto LABEL_264;
                    case 71:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v154) = v91;
                          v155 = v50;
                          v156 = (char *)(v93 + 2);
                          v159 = v90;
                          LODWORD(v160) = v68;
                          v162 = (char *)v55;
                          *(_QWORD *)&v164 = v55 - 1;
                          v117 = nl_langinfo(0x10000);
                          v118 = *(_QWORD *)&v164;
                          v119 = (__int64)v162;
                          v120 = *v117;
                          LOBYTE(v68) = (_BYTE)v160;
                          v90 = (char *)v159;
                          v98 = (unsigned __int64)v156;
                          v50 = v155;
                          LOWORD(v91) = WORD2(v154);
                          if ( !v120 )
                            v120 = 46;
                          *(_BYTE *)(v93 + 1) = v120;
                          if ( v118 )
                          {
                            v121 = v93 + v119 + 1;
                            v122 = v98;
                            do
                              *(_BYTE *)(++v122 - 1) = 48;
                            while ( v122 != v121 );
                            v98 += v118;
                          }
                        }
                        else
                        {
                          LODWORD(v156) = v91;
                          v159 = (void *)v50;
                          v160 = (char *)(v93 + 2);
                          v162 = v90;
                          LODWORD(v164) = v68;
                          v148 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v164);
                          v90 = v162;
                          v149 = *v148;
                          v98 = (unsigned __int64)v160;
                          v50 = (unsigned __int64)v159;
                          LOWORD(v91) = (_WORD)v156;
                          if ( !v149 )
                            v149 = 46;
                          *(_BYTE *)(v93 + 1) = v149;
                        }
                        goto LABEL_264;
                      }
LABEL_263:
                      v98 = v93 + 1;
                      goto LABEL_264;
                  }
                  if ( v97 != 65 )
                    goto LABEL_200;
                  *(_BYTE *)v93 = 48;
                  *(_QWORD *)&v164 = v93 + 2;
                  v136 = v12[72];
                  *(_BYTE *)(v93 + 2) = 48;
                  *(_BYTE *)(v93 + 1) = v136 + 23;
                  if ( v68 & 0x10 || (v137 = v93 + 3, v55) )
                  {
                    HIDWORD(v154) = v91;
                    v155 = v50;
                    v156 = v90;
                    v159 = (void *)v55;
                    LODWORD(v160) = v68;
                    v162 = (char *)(v93 + 4);
                    v144 = nl_langinfo(0x10000);
                    v145 = v159;
                    v137 = (__int64)v162;
                    v146 = *v144;
                    LOBYTE(v68) = (_BYTE)v160;
                    v90 = v156;
                    v50 = v155;
                    LOWORD(v91) = WORD2(v154);
                    if ( !v146 )
                      v146 = 46;
                    *(_BYTE *)(v93 + 3) = v146;
                    if ( v145 )
                    {
                      v147 = (char *)v137;
                      do
                        *(++v147 - 1) = 48;
                      while ( v147 != (char *)v145 + v93 + 4 );
                      v137 += (__int64)v145;
                    }
                  }
                  v138 = v12[72];
                  v98 = v137 + 3;
                  *(_WORD *)(v137 + 1) = 12331;
                  v93 = *(_QWORD *)&v164;
                  *(_BYTE *)v137 = v138 + 15;
LABEL_264:
                  LOWORD(v168) = v91;
                  v99 = v98 - (_QWORD)v90;
                  if ( v50 > v98 - (unsigned __int64)v90 )
                  {
                    v100 = v50 - v99;
                    v101 = v98 + v100;
                    v99 = v98 + v100 - (_QWORD)v90;
                    if ( v68 & 2 )
                    {
                      if ( v100 )
                      {
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v101 != v98 );
                      }
                    }
                    else if ( v68 & 0x20 && v93 )
                    {
                      if ( v93 >= v98 )
                      {
                        v93 = v98;
                      }
                      else
                      {
                        v102 = -1LL;
                        do
                        {
                          *(_BYTE *)(v101 + v102) = *(_BYTE *)(v98 + v102);
                          --v102;
                        }
                        while ( v102 != v93 - 1 - v98 );
                      }
                      if ( v100 )
                      {
                        v103 = v93 + v100;
                        do
                          *(_BYTE *)(++v93 - 1) = 48;
                        while ( v93 != v103 );
                      }
                    }
                    else
                    {
                      v113 = -1LL;
                      if ( (unsigned __int64)v90 < v98 )
                      {
                        do
                        {
                          *(_BYTE *)(v101 + v113) = *(_BYTE *)(v98 + v113);
                          --v113;
                        }
                        while ( &v90[-v98 - 1] != (char *)v113 );
                        v98 = (unsigned __int64)v90;
                      }
                      if ( v100 )
                      {
                        v114 = v98 + v100;
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v98 != v114 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v165 <= v99 )
                    goto LABEL_200;
                  v104 = v99 + v19;
                  v15 = v99 + v19;
                  if ( v11 - v19 <= v99 )
                  {
                    if ( __CFADD__(v99, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v104 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v104 )
                          goto LABEL_374;
                      }
                      else
                      {
                        if ( v104 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_281;
                        }
LABEL_374:
                        if ( v104 == -1LL )
                          goto LABEL_88;
                        v11 = v99 + v19;
                      }
LABEL_281:
                      if ( v14 && v14 != src )
                      {
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v105 = (char *)realloc(v14, v11);
                        if ( !v105 )
                          goto LABEL_88;
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        v14 = v105;
                      }
                      else
                      {
                        LOBYTE(v162) = v14 == src;
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v115 = (char *)malloc(v11);
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        if ( !v115 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v162 )
                        {
                          v116 = (char *)memcpy(v115, v14, v19);
                          v90 = (char *)v165;
                          v99 = *(_QWORD *)&v164;
                          v14 = v116;
                        }
                        else
                        {
                          v14 = v115;
                        }
                      }
                    }
                  }
                  v165 = v90;
                  memcpy(&v14[v19], v90, v99);
                  if ( v165 != &v178 )
                    free(v165);
                  goto LABEL_110;
                }
LABEL_376:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = v163 + 1;
        *v163 = 37;
        if ( v31 & 1 )
        {
          v33 = v163;
          v163[1] = 39;
          v32 = v33 + 2;
        }
        if ( v31 & 2 )
          *v32++ = 45;
        if ( v31 & 4 )
          *v32++ = 43;
        if ( v31 & 8 )
          *v32++ = 32;
        if ( v31 & 0x10 )
          *v32++ = 35;
        if ( v31 & 0x40 )
          *v32++ = 73;
        if ( v31 & 0x20 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        if ( (unsigned int)v165 <= 0x10 )
        {
          v38 = 1LL << (char)v165;
          if ( (1LL << (char)v165) & 0x14180 )
            goto LABEL_125;
          if ( v38 & 0x1000 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( !(v38 & 0x600) )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v162) = 1;
            v168 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v162) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v162;
          *(&v168 + (unsigned int)v162) = *((_DWORD *)v43 + 4);
          LODWORD(v162) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v164 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v174 != &v177 )
                    free(v174);
                  if ( v171 != &v172 )
                    free(v171);
                  v14 = 0LL;
                  **(_DWORD **)&v164 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v164 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v164) = v14 == src;
            v95 = (char *)malloc(v11);
            v46 = v95;
            if ( !v95 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v164) )
              v46 = (char *)memcpy(v95, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v160 = v46;
            v47 = __errno_location();
            v48 = v160;
            v160 = v32;
            *(_QWORD *)&v164 = v47;
            LODWORD(v156) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v167 = -1;
              **(_DWORD **)&v164 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (_DWORD)v165 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v80 = *((unsigned int *)v171 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v152 = &v167;
                      goto LABEL_153;
                    }
                    v151 = (int *)v80;
                    goto LABEL_210;
                  }
                  v153 = &v167;
                  v152 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v171 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v72, a5, &v167, v153);
LABEL_131:
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v151 = v72;
LABEL_210:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v168, a5, v169, v151);
LABEL_211:
                    v48 = (char *)v159;
LABEL_132:
                    v74 = v167;
                    if ( v167 < 0 )
                    {
LABEL_154:
                      if ( v160[1] )
                      {
                        v160[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v164;
                        if ( !**(_DWORD **)&v164 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        **(_DWORD **)&v164 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v167 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v164 = (_DWORD)v156;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        v14 = 0LL;
                        **(_DWORD **)&v164 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v78 )
                          {
                            v159 = v48;
                            v94 = (char *)malloc(v11);
                            v48 = (char *)v159;
                            if ( !v94 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v94, v159, v19);
                            else
                              v48 = v94;
                          }
                          else
                          {
                            v159 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v159;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v153 = &v167;
                  v152 = v72;
                  break;
                case 0xB:
                  v85 = *((_QWORD *)v12 + 10);
                  v86 = &v48[v19];
                  v159 = v48;
                  a5 = *((double *)v171 + 4 * v85 + 2);
                  if ( (_DWORD)v162 == 1 )
                  {
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, &v167, v153);
                  }
                  else
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, &v167, a5, v154, v155);
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, v169, &v167);
                  }
                  v48 = (char *)v159;
                  goto LABEL_132;
                case 0xC:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 == 1 )
                  {
                    v84 = *((unsigned __int128 *)v171 + 2 * v82 + 1);
                    v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v84, v84 >> 64);
                    goto LABEL_211;
                  }
                  if ( (_DWORD)v162 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v163,
                            &v167,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)),
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)) >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v169, v150);
                  v48 = (char *)v159;
                  goto LABEL_132;
                default:
                  goto LABEL_409;
              }
              break;
            }
            v80 = v168;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v80, a5, v152, v153);
            v74 = v167;
            v48 = (char *)v159;
            if ( v167 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_409:
          abort();
          return result;
      }
LABEL_110:
      v13 = (char *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v161;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v108 = v19;
    v109 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v109 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v109 )
        {
LABEL_304:
          v110 = v14 == src;
          if ( !v14 || v110 )
          {
            v143 = (char *)malloc(v11);
            if ( !v143 )
              goto LABEL_88;
            if ( v108 && v110 )
              v14 = (char *)memcpy(v143, v14, v108);
            else
              v14 = v143;
          }
          else
          {
            v111 = (char *)realloc(v14, v11);
            if ( !v111 )
              goto LABEL_126;
            v14 = v111;
          }
          goto LABEL_308;
        }
      }
      else if ( v109 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_304;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_304;
    }
LABEL_308:
    v14[v108] = 0;
    if ( v11 > v109 && v14 != src )
    {
      v112 = (char *)realloc(v14, v109);
      if ( v112 )
        v14 = v112;
    }
    if ( ptr )
      free(ptr);
    if ( v174 != &v177 )
      free(v174);
    if ( v171 != &v172 )
      free(v171);
    *v158 = v108;
    return v14;
  }
  if ( v174 != &v177 )
    free(v174);
  if ( v171 != &v172 )
    free(v171);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

char *__fastcall sub_4072F0(void *a1, size_t *a2, char *a3, __int64 a4, double a5)
{
  char *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  _BYTE *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  char *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  char *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  _BYTE *v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  char *result; // rax
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // er11
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  int *v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  unsigned __int64 v80; // r9
  int v81; // ebx
  __int64 v82; // rax
  char *v83; // rdi
  unsigned __int128 v84; // fst7
  __int64 v85; // rax
  char *v86; // rdi
  unsigned __int64 v87; // rax
  void *v88; // rax
  char *v89; // rax
  char *v90; // rcx
  int v91; // er8
  __int16 v92; // ax
  unsigned __int64 v93; // r15
  char *v94; // rax
  char *v95; // rax
  char *v96; // rax
  char v97; // al
  unsigned __int64 v98; // r9
  size_t v99; // r8
  unsigned __int64 v100; // r10
  unsigned __int64 v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rax
  char *v105; // rax
  __int64 v106; // rsi
  char v107; // al
  size_t v108; // r15
  size_t v109; // r14
  bool v110; // r13
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // r10
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  char v120; // al
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  char *v123; // rax
  __int64 v124; // rdx
  char v125; // al
  unsigned __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  char *v131; // rsi
  char *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rsi
  unsigned __int64 v135; // rax
  char v136; // al
  __int64 v137; // rsi
  char v138; // al
  char *v139; // rax
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // rax
  char *v143; // rax
  char *v144; // rax
  void *v145; // rdx
  char v146; // al
  char *v147; // rax
  char *v148; // rax
  char v149; // al
  __int64 v150; // [rsp-8h] [rbp-718h]
  int *v151; // [rsp+8h] [rbp-708h]
  int *v152; // [rsp+10h] [rbp-700h]
  int *v153; // [rsp+18h] [rbp-6F8h]
  __int64 v154; // [rsp+20h] [rbp-6F0h]
  unsigned __int64 v155; // [rsp+28h] [rbp-6E8h]
  char *v156; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v158; // [rsp+40h] [rbp-6D0h]
  void *v159; // [rsp+48h] [rbp-6C8h]
  char *v160; // [rsp+50h] [rbp-6C0h]
  __int64 v161; // [rsp+58h] [rbp-6B8h]
  char *v162; // [rsp+60h] [rbp-6B0h]
  _BYTE *v163; // [rsp+68h] [rbp-6A8h]
  long double v164; // [rsp+70h] [rbp-6A0h]
  void *v165; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v167; // [rsp+94h] [rbp-67Ch]
  unsigned int v168; // [rsp+98h] [rbp-678h]
  unsigned int v169; // [rsp+9Ch] [rbp-674h]
  char v170; // [rsp+A0h] [rbp-670h]
  void *v171; // [rsp+A8h] [rbp-668h]
  __int64 v172; // [rsp+B0h] [rbp-660h]
  __int64 v173; // [rsp+190h] [rbp-580h]
  void *v174; // [rsp+198h] [rbp-578h]
  __int64 v175; // [rsp+1A0h] [rbp-570h]
  __int64 v176; // [rsp+1A8h] [rbp-568h]
  __int64 v177; // [rsp+1B0h] [rbp-560h]
  char v178; // [rsp+420h] [rbp-2F0h]

  v5 = a3;
  v6 = a4;
  src = a1;
  v158 = a2;
  if ( (int)sub_409180(a3, &v173, &v170) < 0 )
    return 0LL;
  if ( (int)sub_408F60(v6, &v170) >= 0 )
  {
    v7 = v175 + 7;
    if ( (unsigned __int64)(v175 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v176, v7);
    v8 = v176 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v163 = (_BYTE *)(((unsigned __int64)&v155 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = malloc(v9);
      v163 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v158;
    v12 = (char *)v174;
    v13 = v5;
    v14 = (char *)src;
    v161 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v174;
    if ( *(char **)v174 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (char *)(v16 - v13);
    v18 = (unsigned __int64)&v17[v15];
    v19 = (size_t)&v17[v15];
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v162 = v13;
          LOBYTE(v164) = v20;
          v165 = v17;
          v21 = (char *)malloc(v11);
          v17 = (char *)v165;
          v13 = v162;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v164) )
          {
            *(_QWORD *)&v164 = v162;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = (char *)v165;
            v13 = *(char **)&v164;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v164 = v13;
          v165 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = (char *)v165;
          v13 = *(char **)&v164;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)&v17[v15];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v173 != v161 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_239;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_239:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v164 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v165) = v14 == src;
          v96 = (char *)malloc(v11);
          if ( !v96 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v165 )
            v14 = (char *)memcpy(v96, v14, v19);
          else
            v14 = v96;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v171;
      v28 = (long double *)((char *)v171 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v165) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v165 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v165 = (void *)-1LL;
                while ( 1 )
                {
                  v127 = (__int64)(v66 + 1);
                  v128 = -1LL;
                  v129 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v128 = 10 * v50;
                  v76 = __CFADD__(v128, v129);
                  v50 = v128 + v129;
                  v66 = (char *)v127;
                  if ( v76 )
                  {
                    if ( v67 == (char *)v127 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v165;
                      goto LABEL_82;
                    }
                    while ( *(++v66 - 1) != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v171 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v130 = (__int64)(v51 + 1);
                v55 = 0LL;
                if ( v52 != (char *)v130 )
                {
                  v131 = (char *)v130;
                  while ( 1 )
                  {
                    v132 = v131 + 1;
                    v133 = *v131 - 48;
                    v134 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v134 = 10 * v55;
                    v76 = __CFADD__(v134, v133);
                    v135 = v134 + v133;
                    v131 = v132;
                    v55 = v135;
                    if ( v76 )
                    {
                      if ( v52 == v132 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v131 = v132 + 1;
                        if ( *v132 == 48 )
                          break;
                        if ( v52 == v131 )
                          goto LABEL_88;
                        ++v132;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v131 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_376;
              }
              v54 = (char *)v171 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v87 = v56;
                  if ( v50 >= v56 )
                    v87 = v50;
                  v76 = __CFADD__(v87, 1LL);
                  v88 = (void *)(v87 + 1);
                  v165 = v88;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v88 <= 0x2BC )
                  {
                    v90 = &v178;
                  }
                  else
                  {
                    v159 = (void *)v50;
                    v160 = (char *)v55;
                    LODWORD(v162) = v68;
                    v164 = _FST7;
                    if ( v88 == (void *)-1LL )
                      goto LABEL_88;
                    v89 = (char *)malloc((size_t)v88);
                    v68 = (int)v162;
                    _FST7 = v164;
                    v90 = v89;
                    v55 = (unsigned __int64)v160;
                    v50 = (unsigned __int64)v159;
                    if ( !v89 )
                      goto LABEL_88;
                  }
                  v91 = (unsigned __int16)v168;
                  LOBYTE(v92) = v168;
                  HIBYTE(v92) = BYTE1(v168) | 3;
                  LOWORD(v168) = v92;
                  __asm (" fxam ");
                  if ( v62 & 2 )
                  {
                    *v90 = 45;
                    _FST7 = -_FST7;
                    v93 = (unsigned __int64)(v90 + 1);
                  }
                  else if ( v68 & 4 )
                  {
                    v93 = (unsigned __int64)(v90 + 1);
                    *v90 = 43;
                  }
                  else
                  {
                    v93 = (unsigned __int64)v90;
                    if ( v68 & 8 )
                    {
                      v93 = (unsigned __int64)(v90 + 1);
                      *v90 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v98 = v93 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v93 + 2) = 102;
                      *(_WORD *)v93 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v93 + 2) = 70;
                      *(_WORD *)v93 = 20041;
                    }
                    v93 = 0LL;
                    goto LABEL_264;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v97 = v12[72] & 0xDF;
                  switch ( v97 )
                  {
                    case 70:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || v55 )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v123 = nl_langinfo(0x10000);
                        v124 = (__int64)v160;
                        v98 = *(_QWORD *)&v164;
                        v125 = *v123;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v125 )
                          v125 = 46;
                        *(_BYTE *)(v93 + 1) = v125;
                        if ( v124 )
                        {
                          v126 = v98;
                          do
                            *(_BYTE *)(++v126 - 1) = 48;
                          while ( v126 != v93 + v124 + 2 );
                          v98 += v124;
                        }
                        goto LABEL_264;
                      }
                      goto LABEL_263;
                    case 69:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || (v106 = v93 + 1, v55) )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v139 = nl_langinfo(0x10000);
                        v140 = (__int64)v160;
                        v106 = *(_QWORD *)&v164;
                        v141 = *v139;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v141 )
                          v141 = 46;
                        *(_BYTE *)(v93 + 1) = v141;
                        if ( v140 )
                        {
                          v142 = v106;
                          do
                            *(_BYTE *)(++v142 - 1) = 48;
                          while ( v142 != v93 + v140 + 2 );
                          v106 += v140;
                        }
                      }
                      v107 = v12[72];
                      v98 = v106 + 4;
                      *(_BYTE *)(v106 + 3) = 48;
                      *(_BYTE *)v106 = v107;
                      *(_WORD *)(v106 + 1) = 12331;
                      goto LABEL_264;
                    case 71:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v154) = v91;
                          v155 = v50;
                          v156 = (char *)(v93 + 2);
                          v159 = v90;
                          LODWORD(v160) = v68;
                          v162 = (char *)v55;
                          *(_QWORD *)&v164 = v55 - 1;
                          v117 = nl_langinfo(0x10000);
                          v118 = *(_QWORD *)&v164;
                          v119 = (__int64)v162;
                          v120 = *v117;
                          LOBYTE(v68) = (_BYTE)v160;
                          v90 = (char *)v159;
                          v98 = (unsigned __int64)v156;
                          v50 = v155;
                          LOWORD(v91) = WORD2(v154);
                          if ( !v120 )
                            v120 = 46;
                          *(_BYTE *)(v93 + 1) = v120;
                          if ( v118 )
                          {
                            v121 = v93 + v119 + 1;
                            v122 = v98;
                            do
                              *(_BYTE *)(++v122 - 1) = 48;
                            while ( v122 != v121 );
                            v98 += v118;
                          }
                        }
                        else
                        {
                          LODWORD(v156) = v91;
                          v159 = (void *)v50;
                          v160 = (char *)(v93 + 2);
                          v162 = v90;
                          LODWORD(v164) = v68;
                          v148 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v164);
                          v90 = v162;
                          v149 = *v148;
                          v98 = (unsigned __int64)v160;
                          v50 = (unsigned __int64)v159;
                          LOWORD(v91) = (_WORD)v156;
                          if ( !v149 )
                            v149 = 46;
                          *(_BYTE *)(v93 + 1) = v149;
                        }
                        goto LABEL_264;
                      }
LABEL_263:
                      v98 = v93 + 1;
                      goto LABEL_264;
                  }
                  if ( v97 != 65 )
                    goto LABEL_200;
                  *(_BYTE *)v93 = 48;
                  *(_QWORD *)&v164 = v93 + 2;
                  v136 = v12[72];
                  *(_BYTE *)(v93 + 2) = 48;
                  *(_BYTE *)(v93 + 1) = v136 + 23;
                  if ( v68 & 0x10 || (v137 = v93 + 3, v55) )
                  {
                    HIDWORD(v154) = v91;
                    v155 = v50;
                    v156 = v90;
                    v159 = (void *)v55;
                    LODWORD(v160) = v68;
                    v162 = (char *)(v93 + 4);
                    v144 = nl_langinfo(0x10000);
                    v145 = v159;
                    v137 = (__int64)v162;
                    v146 = *v144;
                    LOBYTE(v68) = (_BYTE)v160;
                    v90 = v156;
                    v50 = v155;
                    LOWORD(v91) = WORD2(v154);
                    if ( !v146 )
                      v146 = 46;
                    *(_BYTE *)(v93 + 3) = v146;
                    if ( v145 )
                    {
                      v147 = (char *)v137;
                      do
                        *(++v147 - 1) = 48;
                      while ( v147 != (char *)v145 + v93 + 4 );
                      v137 += (__int64)v145;
                    }
                  }
                  v138 = v12[72];
                  v98 = v137 + 3;
                  *(_WORD *)(v137 + 1) = 12331;
                  v93 = *(_QWORD *)&v164;
                  *(_BYTE *)v137 = v138 + 15;
LABEL_264:
                  LOWORD(v168) = v91;
                  v99 = v98 - (_QWORD)v90;
                  if ( v50 > v98 - (unsigned __int64)v90 )
                  {
                    v100 = v50 - v99;
                    v101 = v98 + v100;
                    v99 = v98 + v100 - (_QWORD)v90;
                    if ( v68 & 2 )
                    {
                      if ( v100 )
                      {
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v101 != v98 );
                      }
                    }
                    else if ( v68 & 0x20 && v93 )
                    {
                      if ( v93 >= v98 )
                      {
                        v93 = v98;
                      }
                      else
                      {
                        v102 = -1LL;
                        do
                        {
                          *(_BYTE *)(v101 + v102) = *(_BYTE *)(v98 + v102);
                          --v102;
                        }
                        while ( v102 != v93 - 1 - v98 );
                      }
                      if ( v100 )
                      {
                        v103 = v93 + v100;
                        do
                          *(_BYTE *)(++v93 - 1) = 48;
                        while ( v93 != v103 );
                      }
                    }
                    else
                    {
                      v113 = -1LL;
                      if ( (unsigned __int64)v90 < v98 )
                      {
                        do
                        {
                          *(_BYTE *)(v101 + v113) = *(_BYTE *)(v98 + v113);
                          --v113;
                        }
                        while ( &v90[-v98 - 1] != (char *)v113 );
                        v98 = (unsigned __int64)v90;
                      }
                      if ( v100 )
                      {
                        v114 = v98 + v100;
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v98 != v114 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v165 <= v99 )
                    goto LABEL_200;
                  v104 = v99 + v19;
                  v15 = v99 + v19;
                  if ( v11 - v19 <= v99 )
                  {
                    if ( __CFADD__(v99, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v104 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v104 )
                          goto LABEL_374;
                      }
                      else
                      {
                        if ( v104 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_281;
                        }
LABEL_374:
                        if ( v104 == -1LL )
                          goto LABEL_88;
                        v11 = v99 + v19;
                      }
LABEL_281:
                      if ( v14 && v14 != src )
                      {
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v105 = (char *)realloc(v14, v11);
                        if ( !v105 )
                          goto LABEL_88;
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        v14 = v105;
                      }
                      else
                      {
                        LOBYTE(v162) = v14 == src;
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v115 = (char *)malloc(v11);
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        if ( !v115 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v162 )
                        {
                          v116 = (char *)memcpy(v115, v14, v19);
                          v90 = (char *)v165;
                          v99 = *(_QWORD *)&v164;
                          v14 = v116;
                        }
                        else
                        {
                          v14 = v115;
                        }
                      }
                    }
                  }
                  v165 = v90;
                  memcpy(&v14[v19], v90, v99);
                  if ( v165 != &v178 )
                    free(v165);
                  goto LABEL_110;
                }
LABEL_376:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = v163 + 1;
        *v163 = 37;
        if ( v31 & 1 )
        {
          v33 = v163;
          v163[1] = 39;
          v32 = v33 + 2;
        }
        if ( v31 & 2 )
          *v32++ = 45;
        if ( v31 & 4 )
          *v32++ = 43;
        if ( v31 & 8 )
          *v32++ = 32;
        if ( v31 & 0x10 )
          *v32++ = 35;
        if ( v31 & 0x40 )
          *v32++ = 73;
        if ( v31 & 0x20 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        if ( (unsigned int)v165 <= 0x10 )
        {
          v38 = 1LL << (char)v165;
          if ( (1LL << (char)v165) & 0x14180 )
            goto LABEL_125;
          if ( v38 & 0x1000 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( !(v38 & 0x600) )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v162) = 1;
            v168 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v162) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v162;
          *(&v168 + (unsigned int)v162) = *((_DWORD *)v43 + 4);
          LODWORD(v162) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v164 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v174 != &v177 )
                    free(v174);
                  if ( v171 != &v172 )
                    free(v171);
                  v14 = 0LL;
                  **(_DWORD **)&v164 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v164 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v164) = v14 == src;
            v95 = (char *)malloc(v11);
            v46 = v95;
            if ( !v95 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v164) )
              v46 = (char *)memcpy(v95, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v160 = v46;
            v47 = __errno_location();
            v48 = v160;
            v160 = v32;
            *(_QWORD *)&v164 = v47;
            LODWORD(v156) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v167 = -1;
              **(_DWORD **)&v164 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (_DWORD)v165 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v80 = *((unsigned int *)v171 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v152 = &v167;
                      goto LABEL_153;
                    }
                    v151 = (int *)v80;
                    goto LABEL_210;
                  }
                  v153 = &v167;
                  v152 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v171 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v72, a5, &v167, v153);
LABEL_131:
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v151 = v72;
LABEL_210:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v168, a5, v169, v151);
LABEL_211:
                    v48 = (char *)v159;
LABEL_132:
                    v74 = v167;
                    if ( v167 < 0 )
                    {
LABEL_154:
                      if ( v160[1] )
                      {
                        v160[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v164;
                        if ( !**(_DWORD **)&v164 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        **(_DWORD **)&v164 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v167 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v164 = (_DWORD)v156;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        v14 = 0LL;
                        **(_DWORD **)&v164 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v78 )
                          {
                            v159 = v48;
                            v94 = (char *)malloc(v11);
                            v48 = (char *)v159;
                            if ( !v94 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v94, v159, v19);
                            else
                              v48 = v94;
                          }
                          else
                          {
                            v159 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v159;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v153 = &v167;
                  v152 = v72;
                  break;
                case 0xB:
                  v85 = *((_QWORD *)v12 + 10);
                  v86 = &v48[v19];
                  v159 = v48;
                  a5 = *((double *)v171 + 4 * v85 + 2);
                  if ( (_DWORD)v162 == 1 )
                  {
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, &v167, v153);
                  }
                  else
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, &v167, a5, v154, v155);
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, v169, &v167);
                  }
                  v48 = (char *)v159;
                  goto LABEL_132;
                case 0xC:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 == 1 )
                  {
                    v84 = *((unsigned __int128 *)v171 + 2 * v82 + 1);
                    v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v84, v84 >> 64);
                    goto LABEL_211;
                  }
                  if ( (_DWORD)v162 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v163,
                            &v167,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)),
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)) >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v169, v150);
                  v48 = (char *)v159;
                  goto LABEL_132;
                default:
                  goto LABEL_409;
              }
              break;
            }
            v80 = v168;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v80, a5, v152, v153);
            v74 = v167;
            v48 = (char *)v159;
            if ( v167 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_409:
          abort();
          return result;
      }
LABEL_110:
      v13 = (char *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v161;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v108 = v19;
    v109 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v109 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v109 )
        {
LABEL_304:
          v110 = v14 == src;
          if ( !v14 || v110 )
          {
            v143 = (char *)malloc(v11);
            if ( !v143 )
              goto LABEL_88;
            if ( v108 && v110 )
              v14 = (char *)memcpy(v143, v14, v108);
            else
              v14 = v143;
          }
          else
          {
            v111 = (char *)realloc(v14, v11);
            if ( !v111 )
              goto LABEL_126;
            v14 = v111;
          }
          goto LABEL_308;
        }
      }
      else if ( v109 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_304;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_304;
    }
LABEL_308:
    v14[v108] = 0;
    if ( v11 > v109 && v14 != src )
    {
      v112 = (char *)realloc(v14, v109);
      if ( v112 )
        v14 = v112;
    }
    if ( ptr )
      free(ptr);
    if ( v174 != &v177 )
      free(v174);
    if ( v171 != &v172 )
      free(v171);
    *v158 = v108;
    return v14;
  }
  if ( v174 != &v177 )
    free(v174);
  if ( v171 != &v172 )
    free(v171);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

__int64 __fastcall sub_408E10(char a1)
{
  return sub_408E20(a1);
}

__int64 __fastcall sub_408E20(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_60E4A0 < 0 )
    {
      v3 = sub_408E20(a1);
      if ( v3 >= 0 && dword_60E4A0 == -1 )
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
        dword_60E4A0 = 1;
      }
      else
      {
        v3 = sub_408E20(a1);
        if ( v3 >= 0 )
        {
          dword_60E4A0 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

__int64 __fastcall sub_408F60(int *a1, unsigned __int64 *a2)
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
            v18 = &unk_40BD00;
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

__int64 __fastcall sub_409180(char *a1, _QWORD *a2, unsigned __int64 *a3)
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

int __fastcall sub_409F00(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_60E248 )
    v1 = (void *)unk_60E248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409F18(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_60DE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
