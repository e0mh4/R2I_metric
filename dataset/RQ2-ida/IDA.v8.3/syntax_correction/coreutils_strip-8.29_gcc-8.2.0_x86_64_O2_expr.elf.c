#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  int v3; // eax
  char **v4; // rdx
  __int64 v5; // rbx
  FILE *v7; // rbp
  const char *v8; // rax
  char *IO_write_ptr; // rax
  __int64 v10; // rbx
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF

  sub_4041A0(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  status = 3;
  sub_416460(sub_403A90);
  sub_403BD0(
    a1,
    (_DWORD)a2,
    (unsigned int)"expr",
    (unsigned int)&unk_416564,
    (unsigned int)"8.29",
    (unsigned int)sub_402220,
    "Mike Parker",
    "James Youngman",
    "Paul Eggert",
    0LL);
  if ( a1 <= 1 )
  {
LABEL_14:
    v12 = dcgettext(0LL, "missing operand", 5);
    error(0, 0, v12);
    sub_402220(2);
  }
  v3 = strcmp(a2[1], "--");
  v4 = a2 + 1;
  if ( v3 )
  {
    v4 = a2;
  }
  else if ( a1 == 2 )
  {
    goto LABEL_14;
  }
  qword_61D2F8 = (__int64)(v4 + 1);
  v5 = sub_4039C0(1LL);
  if ( *(_QWORD *)qword_61D2F8 )
  {
    v10 = sub_405A90(0LL, 8LL);
    v11 = dcgettext(0LL, "syntax error: unexpected argument %s", 5);
    error(2, 0, v11, v10);
    goto LABEL_14;
  }
  if ( *(_DWORD *)v5 )
  {
    if ( *(_DWORD *)v5 != 1 )
      abort();
    puts(*(const char **)(v5 + 8));
  }
  else
  {
    v7 = stdout;
    v8 = (const char *)sub_403B30(*(_QWORD *)(v5 + 8), &v13);
    fputs_unlocked(v8, v7);
    IO_write_ptr = stdout->_IO_write_ptr;
    if ( IO_write_ptr >= stdout->_IO_write_end )
    {
      __overflow(stdout, 10);
    }
    else
    {
      stdout->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = 10;
    }
  }
  return (unsigned __int8)sub_402090(v5);
}

// positive sp value has been detected, the output may be wrong!
noreturn void __fastcall  start(__int64 a1, __int64 a2, void (*a3)(void))
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

__int64 *sub_401DBB()
{
  return &program_invocation_short_name;
}

__int64 sub_401DDA()
{
  return 0LL;
}

__int64 *sub_401E11()
{
  __int64 *result; // rax

  if ( !byte_61D2E8 )
  {
    while ( qword_61D2F0 < (unsigned __int64)(&qword_61CE48 - qword_61CE40 - 1) )
      ((void (*)(void))qword_61CE40[++qword_61D2F0])();
    result = sub_401DBB();
    byte_61D2E8 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_401E68()
{
  return sub_401DDA();
}

__int64 __fastcall sub_401E70(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rt2

  result = *a2;
  v4 = *a3;
  if ( *a2 == 0x8000000000000000LL && v4 == -1 )
  {
    *a1 = 0LL;
  }
  else
  {
    v5 = result % v4;
    result /= v4;
    *a1 = v5;
  }
  return result;
}

bool __fastcall sub_401EB0(char *s2)
{
  __int64 v1; // rbx
  bool result; // al

  v1 = qword_61D2F8;
  result = 0;
  if ( *(_QWORD *)qword_61D2F8 )
  {
    result = strcmp(*(const char **)qword_61D2F8, s2) == 0;
    qword_61D2F8 = v1 + 8LL * result;
  }
  return result;
}

__int64 __fastcall sub_401EE0(char a1)
{
  unsigned __int64 *v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  __int64 *v12; // rdx
  __int64 v13; // rcx

  error(3, 34, "%c", (unsigned int)a1);
  v2 = *v1;
  v3 = MEMORY[0x22] - *v1;
  result = v2 >> 63;
  if ( MEMORY[0x22] < v3 == (_BYTE)result )
  {
    MEMORY[3] = v3;
  }
  else
  {
    sub_401EE0(45LL);
    v6 = *v5;
    v7 = MEMORY[0x22] + *v5;
    result = v6 >> 63;
    if ( MEMORY[0x22] > v7 == (_BYTE)result )
    {
      MEMORY[0x2D] = v7;
    }
    else
    {
      sub_401EE0(43LL);
      result = MEMORY[0x22];
      v9 = *v8;
      v10 = v9 * MEMORY[0x22];
      if ( MEMORY[0x22]
        && v9
        && (v11 = (_QWORD *)((unsigned __int64)v10 >> 63),
            result = ((unsigned __int64)v9 >> 63) ^ (MEMORY[0x22] >> 63),
            ((v9 < 0) ^ (MEMORY[0x22] < 0)) != v10 < 0) )
      {
        sub_401EE0(42LL);
        v13 = *v12;
        if ( *v11 == 0x8000000000000000LL && v13 == -1 )
        {
          sub_401EE0(47LL);
          return sub_401FD0();
        }
        else
        {
          result = *v11 / v13;
          MEMORY[0x2A] = result;
        }
      }
      else
      {
        MEMORY[0x2B] = v9 * MEMORY[0x22];
      }
    }
  }
  return result;
}

__int64 sub_401FD0()
{
  __int64 result; // rax
  __int64 v1; // rbx
  char *v2; // rax

  result = qword_61D2F8;
  if ( !*(_QWORD *)qword_61D2F8 )
  {
    v1 = sub_405A90(0LL, 8LL);
    v2 = dcgettext(0LL, "syntax error: missing argument after %s", 5);
    error(2, 0, v2, v1);
    return sub_402020((void *)2);
  }
  return result;
}

void __fastcall sub_402020(void **ptr)
{
  if ( *(_DWORD *)ptr == 1 )
    free(ptr[1]);
  free(ptr);
}

__int64 __fastcall sub_402050(void *src)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = sub_406620(16LL);
  *(_DWORD *)v1 = 1;
  v2 = v1;
  *(_QWORD *)(v1 + 8) = sub_406850(src);
  return v2;
}

_BOOL4 __fastcall sub_402090(__int64 a1)
{
  _BOOL4 result; // eax
  _BYTE *v2; // rdx
  char *v3; // rax
  char v4; // dl

  if ( !*(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 8) == 0LL;
  if ( *(_DWORD *)a1 != 1 )
    abort();
  v2 = *(_BYTE **)(a1 + 8);
  result = 1;
  if ( *v2 )
  {
    v3 = &v2[*v2 == 45];
    v4 = *v3;
    do
    {
      if ( v4 != 48 )
        return 0;
      v4 = *++v3;
    }
    while ( *v3 );
    return 1;
  }
  return result;
}

noreturn void  sub_4020F0()
{
  __assert_fail("iter->cur.wc == 0", "./lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
}

__int64 __fastcall sub_402110(__int64 a1)
{
  char *v2; // rbp
  char *v3; // rdx

  if ( !*(_DWORD *)a1 )
    return 1LL;
  if ( *(_DWORD *)a1 != 1 )
LABEL_11:
    abort();
  v2 = *(char **)(a1 + 8);
  v3 = &v2[*v2 == 45];
  if ( (unsigned int)(*v3 - 48) > 9 )
    return 0LL;
  while ( *++v3 )
  {
    if ( (unsigned int)(*v3 - 48) > 9 )
      return 0LL;
  }
  if ( (unsigned int)sub_4068B0(*(char **)(a1 + 8)) )
  {
    error(3, 34, "%s", v2);
    goto LABEL_11;
  }
  free(v2);
  *(_DWORD *)a1 = 0;
  return 1LL;
}

__int64 __fastcall sub_4021D0(unsigned int *a1)
{
  __int64 result; // rax
  void *v2; // rax
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF

  result = *a1;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 1 )
      abort();
  }
  else
  {
    v2 = (void *)sub_403B30(*((_QWORD *)a1 + 1), &v3);
    result = sub_406850(v2);
    *a1 = 1;
    *((_QWORD *)a1 + 1) = result;
  }
  return result;
}

noreturn void __fastcall  sub_402220(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  char *IO_write_ptr; // rax
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
  FILE *v23; // rbp
  char *v24; // rax
  __int64 *v25; // rax
  char *v26; // rbp
  char *v27; // rax
  char *v28; // rax
  const char *v29; // r12
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  __int64 v33; // rcx
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  __int64 v37[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_61D310;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s EXPRESSION\n  or:  %s OPTION\n", 5);
  __printf_chk(1LL, v3, v1, v1);
  IO_write_ptr = stdout->_IO_write_ptr;
  if ( IO_write_ptr >= stdout->_IO_write_end )
  {
    __overflow(stdout, 10);
  }
  else
  {
    stdout->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 10;
  }
  v5 = stdout;
  v6 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "\n"
          "Print the value of EXPRESSION to standard output.  A blank line below\n"
          "separates increasing precedence groups.  EXPRESSION may be:\n"
          "\n"
          "  ARG1 | ARG2       ARG1 if it is neither null nor 0, otherwise ARG2\n"
          "\n"
          "  ARG1 & ARG2       ARG1 if neither argument is null or 0, otherwise 0\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "\n"
          "  ARG1 < ARG2       ARG1 is less than ARG2\n"
          "  ARG1 <= ARG2      ARG1 is less than or equal to ARG2\n"
          "  ARG1 = ARG2       ARG1 is equal to ARG2\n"
          "  ARG1 != ARG2      ARG1 is unequal to ARG2\n"
          "  ARG1 >= ARG2      ARG1 is greater than or equal to ARG2\n"
          "  ARG1 > ARG2       ARG1 is greater than ARG2\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "\n"
          "  ARG1 + ARG2       arithmetic sum of ARG1 and ARG2\n"
          "  ARG1 - ARG2       arithmetic difference of ARG1 and ARG2\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "\n"
          "  ARG1 * ARG2       arithmetic product of ARG1 and ARG2\n"
          "  ARG1 / ARG2       arithmetic quotient of ARG1 divided by ARG2\n"
          "  ARG1 % ARG2       arithmetic remainder of ARG1 divided by ARG2\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "\n"
          "  STRING : REGEXP   anchored pattern match of REGEXP in STRING\n"
          "\n"
          "  match STRING REGEXP        same as STRING : REGEXP\n"
          "  substr STRING POS LENGTH   substring of STRING, POS counted from 1\n"
          "  index STRING CHARS         index in STRING where any CHARS is found, or 0\n"
          "  length STRING              length of STRING\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "  + TOKEN                    interpret TOKEN as a string, even if it is a\n"
          "                               keyword like 'match' or an operator like '/'\n"
          "\n"
          "  ( EXPRESSION )             value of EXPRESSION\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "\n"
          "Beware that many operators need to be escaped or quoted for shells.\n"
          "Comparisons are arithmetic if both ARGs are numbers, else lexicographical.\n"
          "Pattern matches return the string matched between \\( and \\) or null; if\n"
          "\\( and \\) are not used, they return the number of characters matched or 0.\n",
          5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "\n"
          "Exit status is 0 if EXPRESSION is neither null nor 0, 1 if EXPRESSION is null\n"
          "or 0, 2 if EXPRESSION is syntactically invalid, and 3 if an error occurred.\n",
          5);
  fputs_unlocked(v24, v23);
  v37[0] = (__int64)"[";
  v25 = v37;
  v37[1] = (__int64)"test invocation";
  v37[2] = (__int64)"coreutils";
  v37[3] = (__int64)"Multi-call invocation";
  v37[4] = (__int64)"sha224sum";
  v37[5] = (__int64)"sha2 utilities";
  v37[6] = (__int64)"sha256sum";
  v37[7] = (__int64)"sha2 utilities";
  v37[8] = (__int64)"sha384sum";
  v37[9] = (__int64)"sha2 utilities";
  v37[10] = (__int64)"sha512sum";
  v37[11] = (__int64)"sha2 utilities";
  v37[12] = 0LL;
  v37[13] = 0LL;
  do
    v25 += 2;
  while ( *v25 && strcmp("expr", (const char *)*v25) );
  v26 = (char *)v25[1];
  if ( v26 )
  {
    v27 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v27, &unk_416564, "https://www.gnu.org/software/coreutils/");
    v28 = setlocale(5, 0LL);
    if ( !v28 || !strncmp(v28, "en_", 3uLL) )
      goto LABEL_12;
  }
  else
  {
    v34 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v34, &unk_416564, "https://www.gnu.org/software/coreutils/");
    v35 = setlocale(5, 0LL);
    if ( !v35 || !strncmp(v35, "en_", 3uLL) )
    {
      v26 = "expr";
      v36 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v29 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v36, "https://www.gnu.org/software/coreutils/", "expr");
LABEL_14:
      v31 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v31, v26, v29);
LABEL_3:
      exit(status);
    }
    v26 = "expr";
  }
  v32 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v32, "expr", v33);
LABEL_12:
  v29 = "Multi-call invocation" + 10;
  v30 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v30, "https://www.gnu.org/software/coreutils/", "expr");
  if ( v26 != "expr" )
    v29 = "";
  goto LABEL_14;
}

__int64 __fastcall sub_402630(__int64 a1, __int64 a2)
{
  const char *v2; // rbp
  size_t v3; // rax
  const char *v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v12; // rax
  bool v13; // zf
  char *v14; // r13
  wchar_t v15; // eax
  char *v16; // rbx
  size_t mb_cur_max; // rax
  char *v18; // rbx
  __int64 v19; // rax
  size_t v20; // rax
  int v21; // esi
  char *v22; // rbx
  __int64 v23; // [rsp+0h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+8h] [rbp-1C0h]
  void *v25; // [rsp+10h] [rbp-1B8h]
  __int64 v26[4]; // [rsp+20h] [rbp-1A8h] BYREF
  char *v27; // [rsp+40h] [rbp-188h]
  __int64 v28; // [rsp+48h] [rbp-180h]
  __int64 v29; // [rsp+50h] [rbp-178h]
  char v30; // [rsp+58h] [rbp-170h]
  char v31; // [rsp+60h] [rbp-168h]
  mbstate_t ps; // [rsp+64h] [rbp-164h] BYREF
  char v33; // [rsp+6Ch] [rbp-15Ch]
  char *s; // [rsp+70h] [rbp-158h]
  size_t v35; // [rsp+78h] [rbp-150h]
  char v36; // [rsp+80h] [rbp-148h]
  wchar_t v37[7]; // [rsp+84h] [rbp-144h] BYREF
  char v38; // [rsp+A0h] [rbp-128h] BYREF

  sub_4021D0((unsigned int *)a1);
  sub_4021D0((unsigned int *)a2);
  v2 = *(const char **)(a2 + 8);
  v23 = 0LL;
  ptr = 0LL;
  v27 = &v38;
  v25 = 0LL;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v28 = 0LL;
  qword_61D4A8 = 710LL;
  v3 = strlen(v2);
  v4 = (const char *)sub_415280(v2, v3, v26);
  if ( v4 )
  {
    error(2, 0, "%s", v4);
LABEL_36:
    __assert_fail("mbsinit (&iter->state)", "./lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
  }
  v5 = *(const char **)(a1 + 8);
  v30 &= ~0x80u;
  v6 = strlen(v5);
  v7 = sub_415BE0(v26, v5, v6, 0LL, &v23);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 != -1 )
    {
      v21 = 75;
      v22 = dcgettext(0LL, "error in regular expression matcher", 5);
      if ( v8 == -2LL )
        v21 = *__errno_location();
      error(3, v21, v22);
LABEL_40:
      sub_4020F0();
    }
    if ( v29 )
    {
      v10 = sub_402050((void *)"");
    }
    else
    {
      v10 = sub_406620(16LL);
      *(_DWORD *)v10 = 0;
      *(_QWORD *)(v10 + 8) = 0LL;
    }
LABEL_5:
    if ( v23 )
      goto LABEL_9;
    goto LABEL_6;
  }
  v9 = v29;
  if ( v29 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + *((_QWORD *)v25 + 1)) = 0;
    v10 = sub_402050((void *)(*(_QWORD *)(a1 + 8) + *((_QWORD *)ptr + 1)));
    goto LABEL_5;
  }
  if ( __ctype_get_mb_cur_max() == 1 )
    goto LABEL_8;
  v14 = *(char **)(a1 + 8);
  v31 = 0;
  ps = 0LL;
  s = v14;
  v33 = 0;
  while ( 1 )
  {
    if ( !v31 )
    {
      if ( (((unsigned int)dword_417140[((unsigned __int8)*s >> 5) & 7] >> *s) & 1) != 0 )
      {
        v35 = 1LL;
        v15 = *s;
        v36 = 1;
        v37[0] = v15;
        v33 = 1;
        goto LABEL_17;
      }
      if ( !mbsinit(&ps) )
        goto LABEL_36;
      v31 = 1;
    }
    mb_cur_max = __ctype_get_mb_cur_max();
    v18 = s;
    sub_405DE0(s, mb_cur_max);
    v19 = sub_407DD0(v37, v18);
    v35 = v19;
    switch ( v19 )
    {
      case -1LL:
        v35 = 1LL;
        v16 = s;
        v36 = 0;
        v33 = 1;
        goto LABEL_19;
      case -2LL:
        v16 = s;
        v20 = strlen(s);
        v36 = 0;
        v35 = v20;
        v33 = 1;
        goto LABEL_19;
      case 0LL:
        v35 = 1LL;
        if ( *s )
          __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
        if ( v37[0] )
          goto LABEL_40;
        break;
    }
    v36 = 1;
    if ( mbsinit(&ps) )
      v31 = 0;
    v33 = 1;
LABEL_17:
    if ( !v37[0] )
      break;
    v16 = s;
LABEL_19:
    if ( v16 - v14 >= v8 )
      break;
    v33 = 0;
    ++v9;
    s = &v16[v35];
  }
  v8 = v9;
LABEL_8:
  v12 = sub_406620(16LL);
  v13 = v23 == 0;
  v10 = v12;
  *(_DWORD *)v12 = 0;
  *(_QWORD *)(v12 + 8) = v8;
  if ( !v13 )
  {
LABEL_9:
    free(ptr);
    free(v25);
  }
LABEL_6:
  v27 = 0LL;
  sub_415AF0(v26);
  return v10;
}

__int64 __fastcall sub_402A10(unsigned int a1)
{
  __int64 v1; // rbp
  void **v2; // r13
  size_t v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  char *v11; // r13
  __int64 v12; // rdx
  size_t mb_cur_max; // rax
  unsigned __int64 v14; // rdx
  size_t v15; // r14
  unsigned __int64 v16; // r13
  wchar_t v17; // eax
  size_t v18; // r8
  char *v19; // rcx
  _BYTE *v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rax
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rbx
  char *v32; // rax
  char *v33; // rbx
  char *v34; // r12
  wchar_t v35; // eax
  __int64 v36; // rdi
  size_t v37; // rax
  char *v38; // r12
  __int64 v39; // rax
  char *v40; // rax
  int v41; // eax
  size_t v42; // r15
  size_t v43; // rax
  char *v44; // r15
  size_t v45; // rax
  size_t v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  size_t v49; // rax
  __int64 v50; // rbx
  char *v51; // rax
  wchar_t *dest; // [rsp+0h] [rbp-118h]
  char *desta; // [rsp+0h] [rbp-118h]
  _BYTE *destb; // [rsp+0h] [rbp-118h]
  mbstate_t *v55; // [rsp+8h] [rbp-110h]
  size_t v56; // [rsp+8h] [rbp-110h]
  char *v57; // [rsp+8h] [rbp-110h]
  char *v58; // [rsp+8h] [rbp-110h]
  size_t v59; // [rsp+10h] [rbp-108h]
  _BYTE *ptr; // [rsp+18h] [rbp-100h]
  char v61; // [rsp+20h] [rbp-F8h]
  mbstate_t v62; // [rsp+24h] [rbp-F4h] BYREF
  char v63; // [rsp+2Ch] [rbp-ECh]
  void *s2; // [rsp+30h] [rbp-E8h]
  __int64 v65; // [rsp+38h] [rbp-E0h]
  char v66; // [rsp+40h] [rbp-D8h]
  wchar_t pwc[7]; // [rsp+44h] [rbp-D4h] BYREF
  char v68; // [rsp+60h] [rbp-B8h]
  mbstate_t v69; // [rsp+64h] [rbp-B4h] BYREF
  char i; // [rsp+6Ch] [rbp-ACh]
  void *s1; // [rsp+70h] [rbp-A8h]
  size_t v72; // [rsp+78h] [rbp-A0h]
  char v73; // [rsp+80h] [rbp-98h]
  int v74; // [rsp+84h] [rbp-94h] BYREF
  char v75; // [rsp+A0h] [rbp-78h]
  mbstate_t ps; // [rsp+A4h] [rbp-74h] BYREF
  char v77; // [rsp+ACh] [rbp-6Ch]
  void *src; // [rsp+B0h] [rbp-68h]
  size_t n; // [rsp+B8h] [rbp-60h]
  char v80; // [rsp+C0h] [rbp-58h]
  wchar_t v81[21]; // [rsp+C4h] [rbp-54h] BYREF

  v3 = a1;
  if ( sub_401EB0("+") )
  {
    sub_401FD0();
    goto LABEL_40;
  }
  if ( sub_401EB0("length") )
  {
    v23 = sub_402A10((unsigned __int8)a1);
    sub_4021D0((unsigned int *)v23);
    v24 = sub_403FD0(*(char **)(v23 + 8));
    v25 = sub_406620(16LL);
    *(_DWORD *)v25 = 0;
    v2 = (void **)v25;
    *(_QWORD *)(v25 + 8) = v24;
    sub_402020((void **)v23);
    return (__int64)v2;
  }
  if ( sub_401EB0("match") )
  {
    v2 = (void **)sub_402A10((unsigned __int8)a1);
    v29 = sub_402A10((unsigned __int8)a1);
    v1 = v29;
    if ( (_BYTE)a1 )
    {
      v30 = sub_402630((__int64)v2, v29);
      sub_402020(v2);
      v2 = (void **)v30;
    }
    goto LABEL_44;
  }
  LOBYTE(v4) = sub_401EB0("index");
  v5 = v4;
  if ( (_BYTE)v4 )
  {
    v5 = sub_402A10((unsigned __int8)a1);
    v1 = sub_402A10((unsigned __int8)a1);
    sub_4021D0((unsigned int *)v5);
    sub_4021D0((unsigned int *)v1);
    v2 = *(void ***)(v1 + 8);
    if ( !*(_BYTE *)v2 )
      goto LABEL_42;
LABEL_53:
    v33 = *(char **)(v5 + 8);
    if ( __ctype_get_mb_cur_max() <= 1 )
    {
      v47 = strcspn(v33, (const char *)v2);
      if ( !v33[v47] )
        goto LABEL_42;
      v3 = v47 + 1;
      goto LABEL_43;
    }
    s2 = v33;
    v3 = 0LL;
    v61 = 0;
    dest = &v74;
    v62 = 0LL;
    v63 = 0;
    v55 = &v62;
    goto LABEL_55;
  }
  if ( sub_401EB0("substr") )
  {
    v6 = sub_402A10((unsigned __int8)a1);
    v7 = sub_402A10((unsigned __int8)a1);
    v8 = sub_402A10((unsigned __int8)a1);
    sub_4021D0((unsigned int *)v6);
    if ( (unsigned __int8)sub_402110(v7) && (unsigned __int8)sub_402110(v8) )
    {
      v9 = *(_QWORD *)(v7 + 8);
      v10 = -1LL;
      if ( v9 >= 0 )
      {
        v10 = *(_QWORD *)(v7 + 8);
        LOBYTE(v5) = v9 == 0;
      }
      v11 = *(char **)(v6 + 8);
      v12 = -1LL;
      if ( *(__int64 *)(v8 + 8) >= 0 )
        v12 = *(_QWORD *)(v8 + 8);
      v56 = v12;
      desta = (char *)strlen(*(const char **)(v6 + 8));
      mb_cur_max = __ctype_get_mb_cur_max();
      v14 = (unsigned __int64)desta;
      if ( mb_cur_max > 1 )
        v14 = sub_403FD0(v11);
      if ( v10 > v14 || (_BYTE)v5 || v56 - 1 > 0xFFFFFFFFFFFFFFFDLL )
      {
        ptr = (_BYTE *)sub_406850((void *)"");
      }
      else
      {
        v15 = v14 - v10 + 1;
        if ( v15 > v56 )
          v15 = v56;
        if ( __ctype_get_mb_cur_max() != 1 )
        {
          src = v11;
          v16 = 1LL;
          ptr = (_BYTE *)sub_406620(desta + 1);
          v75 = 0;
          ps = 0LL;
          v77 = 0;
          destb = ptr;
          while ( 1 )
          {
            if ( !v75 )
            {
              if ( (((unsigned int)dword_417140[(*(_BYTE *)src >> 5) & 7] >> *(_BYTE *)src) & 1) != 0 )
              {
                n = 1LL;
                v17 = *(char *)src;
                v80 = 1;
                v81[0] = v17;
                v77 = 1;
                goto LABEL_23;
              }
              if ( !mbsinit(&ps) )
                goto LABEL_112;
              v75 = 1;
            }
            v21 = __ctype_get_mb_cur_max();
            v58 = (char *)src;
            sub_405DE0(src, v21);
            v22 = sub_407DD0(v81, v58);
            n = v22;
            switch ( v22 )
            {
              case 0xFFFFFFFFFFFFFFFFLL:
                n = 1LL;
                v80 = 0;
                v77 = 1;
                goto LABEL_24;
              case 0xFFFFFFFFFFFFFFFELL:
                v49 = strlen((const char *)src);
                v80 = 0;
                n = v49;
                v77 = 1;
                goto LABEL_24;
              case 0uLL:
                n = 1LL;
                if ( *(_BYTE *)src )
                  goto LABEL_115;
                if ( v81[0] )
                  goto LABEL_114;
                break;
            }
            v80 = 1;
            if ( mbsinit(&ps) )
              v75 = 0;
            v77 = 1;
LABEL_23:
            if ( !v81[0] )
              goto LABEL_110;
LABEL_24:
            if ( !v15 )
              goto LABEL_110;
            v18 = n;
            v19 = (char *)src;
            if ( v10 <= v16 )
            {
              v59 = n;
              v57 = (char *)src;
              --v15;
              v20 = mempcpy(destb, src, n);
              v18 = v59;
              v19 = v57;
              destb = v20;
            }
            v77 = 0;
            ++v16;
            src = &v19[v18];
          }
        }
        ptr = (_BYTE *)sub_406620(v15 + 1);
        destb = mempcpy(ptr, &v11[v10 - 1], v15);
LABEL_110:
        *destb = 0;
      }
      v2 = (void **)sub_402050(ptr);
      free(ptr);
    }
    else
    {
      v2 = (void **)sub_402050((void *)"");
    }
    sub_402020((void **)v6);
    sub_402020((void **)v7);
    sub_402020((void **)v8);
    return (__int64)v2;
  }
  sub_401FD0();
  if ( sub_401EB0("(") )
  {
    v2 = (void **)sub_4039C0((unsigned __int8)a1);
    if ( *(_QWORD *)qword_61D2F8 )
    {
      if ( sub_401EB0((char *)")") )
        return (__int64)v2;
      v31 = sub_405A90(0LL, 8LL);
      v32 = dcgettext(0LL, "syntax error: expecting ')' instead of %s", 5);
      error(2, 0, v32, v31);
      goto LABEL_53;
    }
    v50 = sub_405A90(0LL, 8LL);
    v51 = dcgettext(0LL, "syntax error: expecting ')' after %s", 5);
    error(2, 0, v51, v50);
LABEL_114:
    sub_4020F0();
  }
  if ( !sub_401EB0((char *)")") )
  {
LABEL_40:
    v27 = *(void **)qword_61D2F8;
    qword_61D2F8 += 8LL;
    return sub_402050(v27);
  }
  v40 = dcgettext(0LL, "syntax error: unexpected ')'", 5);
  error(2, 0, v40);
  while ( 2 )
  {
    s1 = v2;
    v68 = 0;
    v69 = 0LL;
    for ( i = 0; ; i = 0 )
    {
      if ( !v68 )
      {
        if ( (((unsigned int)dword_417140[(*(_BYTE *)s1 >> 5) & 7] >> *(_BYTE *)s1) & 1) != 0 )
        {
          v72 = 1LL;
          v41 = *(char *)s1;
          v73 = 1;
          v74 = v41;
          i = 1;
          goto LABEL_76;
        }
        if ( !mbsinit(&v69) )
          goto LABEL_112;
        v68 = 1;
      }
      v43 = __ctype_get_mb_cur_max();
      v44 = (char *)s1;
      sub_405DE0(s1, v43);
      v45 = sub_407DD0(dest, v44);
      v72 = v45;
      switch ( v45 )
      {
        case 0xFFFFFFFFFFFFFFFFLL:
          v72 = 1LL;
          v73 = 0;
          i = 1;
          goto LABEL_91;
        case 0xFFFFFFFFFFFFFFFELL:
          v46 = strlen((const char *)s1);
          v73 = 0;
          v72 = v46;
          i = 1;
          goto LABEL_91;
        case 0uLL:
          v72 = 1LL;
          if ( *(_BYTE *)s1 )
            goto LABEL_115;
          if ( v74 )
            goto LABEL_114;
          break;
      }
      v73 = 1;
      if ( mbsinit(&v69) )
        v68 = 0;
      i = 1;
LABEL_76:
      if ( !v74 )
        break;
      if ( v66 )
      {
        if ( pwc[0] == v74 )
          goto LABEL_43;
        v42 = v72;
        goto LABEL_80;
      }
LABEL_91:
      v42 = v72;
      if ( v72 == v65 && !memcmp(s1, s2, v72) )
        goto LABEL_43;
LABEL_80:
      s1 = (char *)s1 + v42;
    }
    v34 = (char *)s2;
    v36 = v65;
    while ( 2 )
    {
      v63 = 0;
      s2 = &v34[v36];
      if ( !v61 )
      {
LABEL_55:
        v34 = (char *)s2;
        if ( (((unsigned int)dword_417140[(*(_BYTE *)s2 >> 5) & 7] >> *(_BYTE *)s2) & 1) == 0 )
        {
          if ( !mbsinit(v55) )
LABEL_112:
            __assert_fail("mbsinit (&iter->state)", "./lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
          v61 = 1;
          break;
        }
        v65 = 1LL;
        v35 = *(char *)s2;
        v66 = 1;
        pwc[0] = v35;
        v63 = 1;
        if ( !v35 )
          goto LABEL_42;
        ++v3;
LABEL_58:
        if ( !sub_403D90((char *)v2, *v34) )
        {
          v36 = 1LL;
          continue;
        }
        goto LABEL_43;
      }
      break;
    }
    v37 = __ctype_get_mb_cur_max();
    v38 = (char *)s2;
    sub_405DE0(s2, v37);
    v39 = sub_407DD0(pwc, v38);
    v65 = v39;
    switch ( v39 )
    {
      case -1LL:
        v66 = 0;
        ++v3;
        v34 = (char *)s2;
        v65 = 1LL;
        v63 = 1;
        goto LABEL_58;
      case -2LL:
        v48 = strlen((const char *)s2);
        v66 = 0;
        v65 = v48;
        v63 = 1;
        goto LABEL_69;
      case 0LL:
        v65 = 1LL;
        if ( *(_BYTE *)s2 )
LABEL_115:
          __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
        if ( pwc[0] )
          goto LABEL_114;
        break;
    }
    v66 = 1;
    if ( mbsinit(&v62) )
      v61 = 0;
    v63 = 1;
    if ( pwc[0] )
    {
LABEL_69:
      ++v3;
      if ( v65 == 1 )
      {
        v34 = (char *)s2;
        goto LABEL_58;
      }
      continue;
    }
    break;
  }
LABEL_42:
  v3 = 0LL;
LABEL_43:
  v28 = sub_406620(16LL);
  *(_DWORD *)v28 = 0;
  v2 = (void **)v28;
  *(_QWORD *)(v28 + 8) = v3;
  sub_402020((void **)v5);
LABEL_44:
  sub_402020((void **)v1);
  return (__int64)v2;
}

void **__fastcall sub_403470(unsigned __int8 a1)
{
  void **v1; // r12
  __int64 v2; // rax
  void **v3; // rbx
  __int64 v4; // r14

  v1 = (void **)sub_402A10(a1);
  while ( sub_401EB0(":") )
  {
    v2 = sub_402A10(a1);
    v3 = (void **)v2;
    if ( a1 )
    {
      v4 = sub_402630((__int64)v1, v2);
      sub_402020(v1);
      v1 = (void **)v4;
    }
    sub_402020(v3);
  }
  return v1;
}

__int64 __fastcall sub_4034E0(unsigned __int8 a1)
{
  void **v1; // r13
  int v2; // ebp
  void **v3; // rbx
  __int64 (__fastcall *v4)(__int64 *, __int64 *, __int64 *); // rax
  char *v6; // rax
  char *v7; // rax

  v1 = sub_403470(a1);
  while ( 1 )
  {
    if ( sub_401EB0("*") )
    {
      v2 = 0;
    }
    else
    {
      v2 = 1;
      if ( !sub_401EB0("/") )
      {
        if ( !sub_401EB0("%") )
          return (__int64)v1;
        v2 = 2;
      }
    }
    v3 = sub_403470(a1);
    if ( !a1 )
      goto LABEL_11;
    if ( !(unsigned __int8)sub_402110((__int64)v1) || !(unsigned __int8)sub_402110((__int64)v3) )
      break;
    if ( v2 )
    {
      if ( !v3[1] )
        goto LABEL_19;
      v4 = (__int64 (__fastcall *)(__int64 *, __int64 *, __int64 *))&loc_401FA0;
      if ( v2 != 1 )
        v4 = sub_401E70;
      v4((__int64 *)v1 + 1, (__int64 *)v1 + 1, (__int64 *)v3 + 1);
    }
    else
    {
      ((void (__fastcall *)(void **, void **, void **))loc_401F60)(v1 + 1, v1 + 1, v3 + 1);
    }
LABEL_11:
    sub_402020(v3);
  }
  v6 = dcgettext(0LL, "non-integer argument", 5);
  error(2, 0, v6);
LABEL_19:
  v7 = dcgettext(0LL, "division by zero", 5);
  error(2, 0, v7);
  return sub_403610();
}

__int64 __fastcall sub_403610(unsigned __int8 a1)
{
  __int64 v1; // r12
  int v2; // r14d
  void **v3; // rbx
  void (__fastcall *v4)(__int64, __int64, void **); // rax
  char *v6; // rax

  v1 = sub_4034E0(a1);
  while ( 1 )
  {
    if ( sub_401EB0("+") )
    {
      v2 = 0;
    }
    else
    {
      if ( !sub_401EB0((char *)"-") )
        return v1;
      v2 = 1;
    }
    v3 = (void **)sub_4034E0(a1);
    if ( a1 )
      break;
LABEL_10:
    sub_402020(v3);
  }
  if ( (unsigned __int8)sub_402110(v1) && (unsigned __int8)sub_402110((__int64)v3) )
  {
    v4 = (void (__fastcall *)(__int64, __int64, void **))&loc_401F30;
    if ( v2 )
      v4 = (void (__fastcall *)(__int64, __int64, void **))&loc_401F00;
    v4(v1 + 8, v1 + 8, v3 + 1);
    goto LABEL_10;
  }
  v6 = dcgettext(0LL, "non-integer argument", 5);
  error(2, 0, v6);
  return sub_4036E0();
}

__int64 __fastcall sub_4036E0(unsigned __int8 a1)
{
  __int64 v1; // rbx
  int v2; // r12d
  unsigned __int64 v3; // r15
  __int64 v4; // rbp
  __int64 v5; // rax
  const char *v6; // r15
  const char *v7; // rdx
  int v8; // eax
  const char *v9; // rsi
  int v10; // eax
  const char *v11; // rdx
  int v12; // eax

  v1 = sub_403610(a1);
  while ( 1 )
  {
    if ( sub_401EB0("<") )
    {
      v2 = 0;
      goto LABEL_3;
    }
    v2 = 1;
    if ( sub_401EB0("<=") )
      goto LABEL_3;
    if ( sub_401EB0((char *)"=") || sub_401EB0("==") )
    {
      v2 = 2;
      goto LABEL_3;
    }
    v2 = 3;
    if ( !sub_401EB0("!=") )
    {
      v2 = 4;
      if ( !sub_401EB0(">=") )
        break;
    }
LABEL_3:
    v3 = 0LL;
    v4 = sub_403610(a1);
    if ( a1 )
    {
      sub_4021D0((unsigned int *)v1);
      sub_4021D0((unsigned int *)v4);
      v6 = *(const char **)(v1 + 8);
      v7 = &v6[*v6 == 45];
      v8 = *v7;
      do
      {
        if ( (unsigned int)(v8 - 48) > 9 )
        {
          v9 = *(const char **)(v4 + 8);
          goto LABEL_11;
        }
        v8 = *++v7;
      }
      while ( *v7 );
      v9 = *(const char **)(v4 + 8);
      v11 = &v9[*v9 == 45];
      v12 = *v11;
      while ( (unsigned int)(v12 - 48) <= 9 )
      {
        v12 = *++v11;
        if ( !*v11 )
        {
          v10 = sub_405E20(*(_QWORD *)(v1 + 8));
          goto LABEL_12;
        }
      }
LABEL_11:
      *__errno_location() = 0;
      v10 = strcoll(v6, v9);
LABEL_12:
      switch ( v2 )
      {
        case 1:
          v3 = v10 <= 0;
          break;
        case 2:
          v3 = v10 == 0;
          break;
        case 3:
          v3 = v10 != 0;
          break;
        case 4:
          v3 = v10 >= 0LL;
          break;
        case 5:
          v3 = v10 > 0;
          break;
        default:
          v3 = (unsigned __int64)v10 >> 63;
          break;
      }
    }
    sub_402020((void **)v1);
    sub_402020((void **)v4);
    v5 = sub_406620(16LL);
    *(_DWORD *)v5 = 0;
    v1 = v5;
    *(_QWORD *)(v5 + 8) = v3;
  }
  if ( sub_401EB0(">") )
  {
    v2 = 5;
    goto LABEL_3;
  }
  return v1;
}

void **__fastcall sub_403910(unsigned __int8 a1)
{
  void **v2; // rbx
  bool v3; // di
  void **v4; // rbp
  __int64 v5; // rax

  v2 = (void **)sub_4036E0(a1);
  while ( sub_401EB0("&") )
  {
    while ( 1 )
    {
      v3 = 0;
      if ( a1 )
        v3 = !sub_402090((__int64)v2);
      v4 = (void **)sub_4036E0(v3);
      if ( !sub_402090((__int64)v2) && !sub_402090((__int64)v4) )
        break;
      sub_402020(v2);
      sub_402020(v4);
      v5 = sub_406620(16LL);
      *(_DWORD *)v5 = 0;
      v2 = (void **)v5;
      *(_QWORD *)(v5 + 8) = 0LL;
      if ( !sub_401EB0("&") )
        return v2;
    }
    sub_402020(v4);
  }
  return v2;
}

void **__fastcall sub_4039C0(unsigned __int8 a1)
{
  void **v2; // rbx
  unsigned __int8 v3; // di
  void **v4; // rbp
  void **v5; // rdi
  __int64 v6; // rax

  v2 = sub_403910(a1);
LABEL_2:
  while ( sub_401EB0("|") )
  {
    while ( 1 )
    {
      v3 = 0;
      if ( a1 )
        v3 = sub_402090((__int64)v2);
      v4 = sub_403910(v3);
      if ( !sub_402090((__int64)v2) )
        break;
      v5 = v2;
      v2 = v4;
      sub_402020(v5);
      if ( !sub_402090((__int64)v4) )
        goto LABEL_2;
      sub_402020(v4);
      v6 = sub_406620(16LL);
      *(_DWORD *)v6 = 0;
      v2 = (void **)v6;
      *(_QWORD *)(v6 + 8) = 0LL;
      if ( !sub_401EB0("|") )
        return v2;
    }
    sub_402020(v4);
  }
  return v2;
}

__int64 sub_403A90()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_415CA0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_61D300 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_61D308 )
      {
        v5 = (const char *)sub_405C10();
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
  result = sub_415CA0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_403B30(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // eax

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v4 = 10 * (a1 / 10) + 48 - a1;
      a1 /= 10LL;
      *(_BYTE *)(v2 - 1) = v4;
      if ( !a1 )
        break;
      --v2;
    }
    *(_BYTE *)(v2 - 2) = 45;
    return v2 - 2;
  }
  else
  {
    do
    {
      *(_BYTE *)--v2 = a1 % 0xAuLL + 48;
      a1 /= 0xAuLL;
    }
    while ( a1 );
    return v2;
  }
}

void sub_403BD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void (__fastcall *a6)(_QWORD), ...)
{
  int v6; // ebx
  int v11; // eax
  gcc_va_list va; // [rsp+8h] [rbp-F0h] BYREF

  v6 = dword_61D2B8;
  dword_61D2B8 = 0;
  if ( (_DWORD)a1 == 2 )
  {
    v11 = sub_407D50(a1, a2, "+", &off_4170E0, 0LL);
    if ( v11 != -1 )
    {
      if ( v11 == 104 )
      {
        a6(0LL);
      }
      else if ( v11 == 118 )
      {
        va_start(va, a6);
        sub_406480(stdout, a3, a4, a5, va);
        exit(0);
      }
    }
  }
  dword_61D2B8 = v6;
  dword_61D2BC = 0;
}

int __fastcall sub_403CE0(wint_t wc)
{
  int result; // eax

  result = wcwidth(wc);
  if ( result < 0 )
    return iswcntrl(wc) == 0;
  return result;
}

__int64 __fastcall sub_403D10(__int64 a1, __int64 a2)
{
  const void *v3; // rax
  const void *v4; // rsi
  size_t v5; // rdx
  __int64 result; // rax
  void *v7; // rax

  v3 = (const void *)(a2 + 24);
  v4 = *(const void **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v4 == v3 )
  {
    v7 = memcpy((void *)(a1 + 24), v4, v5);
    v5 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a1 = v7;
  }
  else
  {
    *(_QWORD *)a1 = v4;
  }
  result = *(unsigned __int8 *)(a2 + 16);
  *(_QWORD *)(a1 + 8) = v5;
  *(_BYTE *)(a1 + 16) = result;
  if ( (_BYTE)result )
  {
    result = *(unsigned int *)(a2 + 20);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}

char *__fastcall sub_403D90(char *s, unsigned __int8 c)
{
  wchar_t v3; // edx
  __int64 v4; // rdx
  char *v5; // rbx
  size_t mb_cur_max; // rax
  char *v7; // rbx
  __int64 v8; // rax
  size_t v9; // rax
  char v10; // [rsp+0h] [rbp-58h]
  mbstate_t ps; // [rsp+4h] [rbp-54h] BYREF
  char v12; // [rsp+Ch] [rbp-4Ch]
  char *sa; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+18h] [rbp-40h]
  char v15; // [rsp+20h] [rbp-38h]
  wchar_t pwc[13]; // [rsp+24h] [rbp-34h] BYREF

  if ( __ctype_get_mb_cur_max() <= 1 || c <= 0x2Fu )
    return strchr(s, c);
  sa = s;
  v10 = 0;
  ps = 0LL;
  v12 = 0;
  while ( 1 )
  {
    if ( !v10 )
    {
      if ( (((unsigned int)dword_417140[((unsigned __int8)*sa >> 5) & 7] >> *sa) & 1) != 0 )
      {
        v14 = 1LL;
        v3 = *sa;
        v15 = 1;
        pwc[0] = v3;
        v12 = 1;
        if ( !v3 )
          return 0LL;
        v4 = 1LL;
        v5 = sa;
        goto LABEL_8;
      }
      if ( !mbsinit(&ps) )
        __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
      v10 = 1;
    }
    mb_cur_max = __ctype_get_mb_cur_max();
    v7 = sa;
    sub_405DE0(sa, mb_cur_max);
    v8 = sub_407DD0(pwc, v7);
    v14 = v8;
    if ( v8 != -1 )
      break;
    v5 = sa;
    v15 = 0;
    v4 = 1LL;
    v14 = 1LL;
    v12 = 1;
    if ( *sa == c )
      return v5;
LABEL_9:
    v12 = 0;
    sa = &v5[v4];
  }
  if ( v8 == -2 )
  {
    v5 = sa;
    v9 = strlen(sa);
    v15 = 0;
    v14 = v9;
    v12 = 1;
    goto LABEL_20;
  }
  if ( !v8 )
  {
    v14 = 1LL;
    if ( *sa )
      __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
    if ( pwc[0] )
      __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
  }
  v15 = 1;
  if ( mbsinit(&ps) )
    v10 = 0;
  v12 = 1;
  if ( pwc[0] )
  {
    v5 = sa;
LABEL_20:
    v4 = v14;
    if ( v14 != 1 )
      goto LABEL_9;
LABEL_8:
    if ( *v5 == c )
      return v5;
    goto LABEL_9;
  }
  return 0LL;
}

size_t __fastcall sub_403FD0(char *s)
{
  __int64 v1; // rbx
  wchar_t v3; // eax
  size_t mb_cur_max; // rax
  char *v5; // rbp
  __int64 v6; // rax
  size_t v7; // rax
  char v8; // [rsp+0h] [rbp-58h]
  mbstate_t ps; // [rsp+4h] [rbp-54h] BYREF
  char i; // [rsp+Ch] [rbp-4Ch]
  char *sa; // [rsp+10h] [rbp-48h]
  size_t v12; // [rsp+18h] [rbp-40h]
  char v13; // [rsp+20h] [rbp-38h]
  wchar_t pwc[13]; // [rsp+24h] [rbp-34h] BYREF

  if ( __ctype_get_mb_cur_max() > 1 )
  {
    sa = s;
    v1 = 0LL;
    v8 = 0;
    ps = 0LL;
    for ( i = 0; ; i = 0 )
    {
      if ( !v8 )
      {
        if ( (((unsigned int)dword_417140[((unsigned __int8)*sa >> 5) & 7] >> *sa) & 1) != 0 )
        {
          v12 = 1LL;
          v3 = *sa;
          v13 = 1;
          pwc[0] = v3;
          goto LABEL_7;
        }
        if ( !mbsinit(&ps) )
          __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
        v8 = 1;
      }
      mb_cur_max = __ctype_get_mb_cur_max();
      v5 = sa;
      sub_405DE0(sa, mb_cur_max);
      v6 = sub_407DD0(pwc, v5);
      v12 = v6;
      switch ( v6 )
      {
        case -1LL:
          v12 = 1LL;
          v13 = 0;
          goto LABEL_8;
        case -2LL:
          v7 = strlen(sa);
          v13 = 0;
          v12 = v7;
          goto LABEL_8;
        case 0LL:
          v12 = 1LL;
          if ( *sa )
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
          if ( pwc[0] )
            __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
          break;
      }
      v13 = 1;
      if ( mbsinit(&ps) )
        v8 = 0;
LABEL_7:
      if ( !pwc[0] )
        return v1;
LABEL_8:
      sa += v12;
      ++v1;
    }
  }
  return strlen(s);
}

char *__fastcall sub_4041A0(const char *a1)
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
  qword_61D310 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_404240(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_415D60();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_4171E9;
      if ( !v5 )
        return (const char *)&unk_4171DE;
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
    v2 = (char *)&unk_4171E5;
    if ( !v5 )
      return (const char *)&unk_4171E2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "syntax error: unexpected ')'" + 27;
  return v6;
}

unsigned __int64 __fastcall sub_404340(
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
      s2 = "syntax error: unexpected ')'" + 27;
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
      s2 = "syntax error: unexpected ')'" + 27;
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
        s2 = "syntax error: unexpected ')'" + 27;
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
      s2 = "syntax error: unexpected ')'" + 27;
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
                return sub_404340((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "syntax error: unexpected ')'" + 27;
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
              return sub_404340((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_407DD0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_404340((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_404240("`", a5);
        v51 = (char *)sub_404240((char *)"'", a5);
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

unsigned __int64 __fastcall sub_404340(
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
      s2 = "syntax error: unexpected ')'" + 27;
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
      s2 = "syntax error: unexpected ')'" + 27;
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
        s2 = "syntax error: unexpected ')'" + 27;
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
      s2 = "syntax error: unexpected ')'" + 27;
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
                return sub_404340((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "syntax error: unexpected ')'" + 27;
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
              return sub_404340((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_407DD0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_404340((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_404240("`", a5);
        v51 = (char *)sub_404240((char *)"'", a5);
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

_BYTE *__fastcall sub_405570(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_61D2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406870();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_61D2A0 )
    {
      v7 = (__m128i *)sub_406680(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_61D2A0);
    }
    else
    {
      ptr = (void *)sub_406680(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_61D2B0], 0, 16LL * (a1 + 1 - dword_61D2B0));
    dword_61D2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_404340(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_61D320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_406620(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_404340(v14, v13, a2, a3, v15, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_405570(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_61D2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406870();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_61D2A0 )
    {
      v7 = (__m128i *)sub_406680(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_61D2A0);
    }
    else
    {
      ptr = (void *)sub_406680(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_61D2B0], 0, 16LL * (a1 + 1 - dword_61D2B0));
    dword_61D2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_404340(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_61D320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_406620(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_404340(v14, v13, a2, a3, v15, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_405710(__int128 *a1)
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
    v1 = &xmmword_61D420;
  result = sub_406820(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_405800(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_61D420;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_404340(
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

_BYTE *__fastcall sub_405880(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_61D420;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_404340(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_406620(v11 + 1);
  sub_404340(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_405980()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_61D2B0 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_61D2B0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_61D320 )
  {
    free(v4);
    *(_QWORD *)&xmmword_61D2A0 = 256LL;
    *((_QWORD *)&xmmword_61D2A0 + 1) = &unk_61D320;
  }
  if ( v0 != &xmmword_61D2A0 )
  {
    free(v0);
    ptr = &xmmword_61D2A0;
  }
  dword_61D2B0 = 1;
}

_BYTE *__fastcall sub_405A90(int a1, int a2, __int64 a3)
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
  return sub_405570(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405A90(int a1, int a2, __int64 a3)
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
  return sub_405570(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405B00(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_405570(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_405B00(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_405570(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_405B90(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_61D450;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61D420);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61D430);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61D440);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_405570(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_405C10(__int64 a1)
{
  return sub_405B90(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_405C40(int a1, int a2, __int64 a3)
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
  return sub_405570(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405C40(int a1, int a2, __int64 a3)
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
  return sub_405570(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405CB0(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61D420);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61D430);
  si128 = _mm_load_si128((const __m128i *)&xmmword_61D440);
  v8 = qword_61D450;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_405570(a1, a4, a5, (__int64)v6);
}

__int64 __fastcall sub_405DE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  bool v5; // zf
  __int64 result; // rax

  v3 = sub_407E50(a1, 0LL, a2);
  v4 = v3 - a1 + 1;
  v5 = v3 == 0;
  result = a2;
  if ( !v5 )
    return v4;
  return result;
}

__int64 __fastcall sub_405E20(_BYTE *a1, unsigned __int8 *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  unsigned int v5; // r8d
  __int64 result; // rax
  unsigned __int64 v7; // r8
  int v8; // ecx
  unsigned __int64 v9; // rcx
  int v10; // edx
  unsigned __int8 v11; // al
  int v12; // r8d
  unsigned int v13; // r9d
  int v14; // eax
  unsigned int v15; // edx
  unsigned __int8 v16; // dl
  int v17; // ecx
  int v18; // edx
  unsigned __int64 v19; // rcx
  int v20; // edx

  v2 = (unsigned __int8)*a1;
  v3 = *a2;
  if ( (_BYTE)v2 == 45 )
  {
    do
      v11 = *++a1;
    while ( *a1 == 48 );
    v12 = v11;
    v13 = v11 - 48;
    if ( (_BYTE)v3 != 45 )
    {
      if ( v13 <= 9 )
        return 0xFFFFFFFFLL;
      while ( (_BYTE)v3 == 48 )
        v3 = *++a2;
      return (unsigned int)-((unsigned int)(v3 - 48) <= 9);
    }
    do
      v16 = *++a2;
    while ( *a2 == 48 );
    if ( v11 == v16 )
    {
      while ( v13 <= 9 )
      {
        ++a1;
        ++a2;
        v12 = (unsigned __int8)*a1;
        v16 = *a2;
        v13 = v12 - 48;
        if ( (_BYTE)v12 != *a2 )
          goto LABEL_31;
      }
      v17 = v16;
      result = (unsigned int)v16 - v12;
    }
    else
    {
LABEL_31:
      v17 = v16;
      result = (unsigned int)v16 - v12;
      if ( v13 <= 9 )
      {
        v7 = 0LL;
        do
          v18 = (unsigned __int8)a1[++v7];
        while ( (unsigned int)(v18 - 48) <= 9 );
        if ( (unsigned int)(v17 - 48) > 9 )
          return (unsigned int)-(v7 != 0);
LABEL_35:
        v19 = 0LL;
        do
          v20 = a2[++v19];
        while ( (unsigned int)(v20 - 48) <= 9 );
        if ( v7 != v19 )
          return v7 < v19 ? 1 : -1;
        goto LABEL_42;
      }
    }
    v7 = 0LL;
    if ( (unsigned int)(v17 - 48) > 9 )
      return 0LL;
    goto LABEL_35;
  }
  if ( (_BYTE)v3 != 45 )
  {
    while ( (_BYTE)v2 == 48 )
      LOBYTE(v2) = *++a1;
    while ( (_BYTE)v3 == 48 )
      v3 = *++a2;
    v4 = (unsigned __int8)v2;
    v5 = (unsigned __int8)v2 - 48;
    if ( (_BYTE)v3 == (_BYTE)v2 )
    {
      while ( v5 <= 9 )
      {
        ++a1;
        ++a2;
        v4 = (unsigned __int8)*a1;
        v3 = *a2;
        v5 = v4 - 48;
        if ( (_BYTE)v4 != (_BYTE)v3 )
          goto LABEL_8;
      }
      result = (unsigned int)(v4 - v3);
    }
    else
    {
LABEL_8:
      result = (unsigned int)(v4 - v3);
      if ( v5 <= 9 )
      {
        v7 = 0LL;
        do
          v8 = (unsigned __int8)a1[++v7];
        while ( (unsigned int)(v8 - 48) <= 9 );
        if ( (unsigned int)(v3 - 48) > 9 )
          return v7 != 0;
LABEL_12:
        v9 = 0LL;
        do
          v10 = a2[++v9];
        while ( (unsigned int)(v10 - 48) <= 9 );
        if ( v7 != v9 )
          return v7 < v9 ? -1 : 1;
LABEL_42:
        if ( !v7 )
          return 0LL;
        return result;
      }
    }
    v7 = 0LL;
    if ( (unsigned int)(v3 - 48) > 9 )
      return 0LL;
    goto LABEL_12;
  }
  do
    v14 = *++a2;
  while ( (_BYTE)v14 == 48 );
  v15 = v14 - 48;
  result = 1LL;
  if ( v15 > 9 )
  {
    while ( (_BYTE)v2 == 48 )
      v2 = (unsigned __int8)*++a1;
    return (unsigned int)(v2 - 48) <= 9;
  }
  return result;
}

__int64 __fastcall sub_406080(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_406080(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_406480(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_406080(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_406080(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_4064E0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_406080(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_406080(a1, a2, a3, a4, v15, i);
}

int sub_4065A0()
{
  char *v0; // rax
  __int64 v1; // rcx
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1);
  v2 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v2, &unk_416564, "https://www.gnu.org/software/coreutils/");
  v3 = stdout;
  v4 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v4, v3);
}

void *__fastcall sub_406620(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_406870();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_406670(size_t a1)
{
  return sub_406620(a1);
}

void *__fastcall sub_406680(void *a1, size_t a2)
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
        sub_406870();
    }
  }
  return result;
}

void *__fastcall sub_4067D0(size_t n)
{
  void *v1; // rax

  v1 = sub_406620(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_4067F0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_406870(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_406820(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_406620(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_406850(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_406820(src, v1 + 1);
}

noreturn void  sub_406870()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_4068B0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **p_endptr; // rbx
  int *v8; // rax
  int *v9; // r13
  __int64 v10; // rax
  char *v11; // r15
  __int64 v12; // rbp
  unsigned int v13; // r12d
  int v14; // r13d
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  char v19; // al
  char *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // edi
  int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // edi
  __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // r9
  int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // r9
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // r9
  int v43; // edi
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoimax");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = __strtol_internal(nptr, p_endptr, a3, 0);
  v11 = *p_endptr;
  v12 = v10;
  if ( *p_endptr == nptr )
  {
    if ( !a5 )
      return 4;
    v14 = (unsigned __int8)*v11;
    v13 = 4;
    if ( !(_BYTE)v14 )
      return v13;
    v12 = 1LL;
    v13 = 0;
    if ( !strchr(a5, (char)v14) )
      return 4;
LABEL_16:
    if ( (unsigned __int8)(v14 - 69) > 0x2Fu
      || (v18 = 0x814400308945LL, !_bittest64(&v18, (unsigned int)(v14 - 69)))
      || !strchr(a5, 48) )
    {
LABEL_17:
      LODWORD(v16) = 1;
      v17 = 1024;
      goto LABEL_18;
    }
    v19 = v11[1];
    if ( v19 != 68 )
    {
      if ( v19 == 105 )
      {
        v17 = 1024;
        LODWORD(v16) = 2 * (v11[2] == 66) + 1;
LABEL_18:
        switch ( (char)v14 )
        {
          case 'B':
            v16 = (int)v16;
            if ( v12 < (__int64)0xFFE0000000000000LL )
              goto LABEL_46;
            if ( v12 > 0x1FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 10;
            break;
          case 'E':
            v32 = v17;
            v16 = (int)v16;
            v33 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_67;
          case 'G':
          case 'g':
            v35 = v17;
            v16 = (int)v16;
            v36 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_74;
          case 'K':
          case 'k':
            v21 = v17;
            v16 = (int)v16;
            v22 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_38;
          case 'M':
          case 'm':
            v21 = v17;
            v16 = (int)v16;
            v24 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_43;
          case 'P':
            v25 = v17;
            v16 = (int)v16;
            v26 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_53;
          case 'T':
          case 't':
            v29 = v17;
            v16 = (int)v16;
            v30 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_60;
          case 'Y':
            v38 = v17;
            v16 = (int)v16;
            v39 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_81;
          case 'Z':
            v41 = v17;
            v16 = (int)v16;
            v42 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_88;
          case 'b':
            v16 = (int)v16;
            goto LABEL_48;
          case 'c':
            v16 = (int)v16;
            break;
          case 'w':
            v16 = (int)v16;
            if ( v12 < (__int64)0xC000000000000000LL )
              goto LABEL_46;
            if ( v12 > 0x3FFFFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 *= 2LL;
            break;
          default:
            goto LABEL_27;
        }
LABEL_31:
        v20 = &v11[v16];
        *p_endptr = v20;
        if ( *v20 )
          v13 |= 2u;
        goto LABEL_9;
      }
      if ( v19 != 66 )
      {
        switch ( (char)v14 )
        {
          case 'E':
            v16 = 1LL;
            v32 = 1024LL;
            v33 = 0xFFE0000000000000LL;
LABEL_67:
            v34 = 6;
            v28 = 0;
            do
            {
              if ( v12 >= v33 )
              {
                if ( 0x7FFFFFFFFFFFFFFFLL / v32 < v12 )
                {
                  v12 = 0x7FFFFFFFFFFFFFFFLL;
                  v28 = 1;
                }
                else
                {
                  v12 *= v32;
                }
              }
              else
              {
                v12 = 0x8000000000000000LL;
                v28 = 1;
              }
              --v34;
            }
            while ( v34 );
            goto LABEL_104;
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
            goto LABEL_27;
          case 'G':
          case 'g':
            v16 = 1LL;
            v35 = 1024LL;
            v36 = 0xFFE0000000000000LL;
LABEL_74:
            v37 = 3;
            v28 = 0;
            do
            {
              if ( v12 >= v36 )
              {
                if ( 0x7FFFFFFFFFFFFFFFLL / v35 < v12 )
                {
                  v12 = 0x7FFFFFFFFFFFFFFFLL;
                  v28 = 1;
                }
                else
                {
                  v12 *= v35;
                }
              }
              else
              {
                v12 = 0x8000000000000000LL;
                v28 = 1;
              }
              --v37;
            }
            while ( v37 );
            goto LABEL_104;
          case 'K':
          case 'k':
            v16 = 1LL;
            v21 = 1024LL;
            v22 = 0xFFE0000000000000LL;
LABEL_38:
            if ( v12 < v22 )
              goto LABEL_46;
            v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
            goto LABEL_40;
          case 'M':
          case 'm':
            v16 = 1LL;
            v21 = 1024LL;
            v24 = 0xFFE0000000000000LL;
LABEL_43:
            if ( v12 < v24 )
              goto LABEL_46;
            v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
            if ( v12 > 0x7FFFFFFFFFFFFFFFLL / v21 )
              goto LABEL_105;
            v12 *= v21;
            if ( v12 >= v24 )
            {
LABEL_40:
              if ( v23 < v12 )
              {
LABEL_105:
                v12 = 0x7FFFFFFFFFFFFFFFLL;
                v13 = 1;
              }
              else
              {
                v12 *= v21;
              }
            }
            else
            {
LABEL_46:
              v12 = 0x8000000000000000LL;
              v13 = 1;
            }
            break;
          case 'P':
            v16 = 1LL;
            v25 = 1024LL;
            v26 = 0xFFE0000000000000LL;
LABEL_53:
            v27 = 5;
            v28 = 0;
            do
            {
              if ( v26 <= v12 )
              {
                if ( 0x7FFFFFFFFFFFFFFFLL / v25 < v12 )
                {
                  v12 = 0x7FFFFFFFFFFFFFFFLL;
                  v28 = 1;
                }
                else
                {
                  v12 *= v25;
                }
              }
              else
              {
                v12 = 0x8000000000000000LL;
                v28 = 1;
              }
              --v27;
            }
            while ( v27 );
            goto LABEL_104;
          case 'T':
          case 't':
            v16 = 1LL;
            v29 = 1024LL;
            v30 = 0xFFE0000000000000LL;
LABEL_60:
            v31 = 4;
            v28 = 0;
            do
            {
              if ( v30 <= v12 )
              {
                if ( 0x7FFFFFFFFFFFFFFFLL / v29 < v12 )
                {
                  v12 = 0x7FFFFFFFFFFFFFFFLL;
                  v28 = 1;
                }
                else
                {
                  v12 *= v29;
                }
              }
              else
              {
                v12 = 0x8000000000000000LL;
                v28 = 1;
              }
              --v31;
            }
            while ( v31 );
            goto LABEL_104;
          case 'Y':
            v16 = 1LL;
            v38 = 1024LL;
            v39 = 0xFFE0000000000000LL;
LABEL_81:
            v40 = 8;
            v28 = 0;
            do
            {
              if ( v39 <= v12 )
              {
                if ( 0x7FFFFFFFFFFFFFFFLL / v38 < v12 )
                {
                  v12 = 0x7FFFFFFFFFFFFFFFLL;
                  v28 = 1;
                }
                else
                {
                  v12 *= v38;
                }
              }
              else
              {
                v12 = 0x8000000000000000LL;
                v28 = 1;
              }
              --v40;
            }
            while ( v40 );
            goto LABEL_104;
          case 'Z':
            v16 = 1LL;
            v41 = 1024LL;
            v42 = 0xFFE0000000000000LL;
LABEL_88:
            v43 = 7;
            v28 = 0;
            do
            {
              if ( v42 <= v12 )
              {
                if ( 0x7FFFFFFFFFFFFFFFLL / v41 < v12 )
                {
                  v12 = 0x7FFFFFFFFFFFFFFFLL;
                  v28 = 1;
                }
                else
                {
                  v12 *= v41;
                }
              }
              else
              {
                v12 = 0x8000000000000000LL;
                v28 = 1;
              }
              --v43;
            }
            while ( v43 );
LABEL_104:
            v13 |= v28;
            goto LABEL_31;
          case 'b':
            v16 = 1LL;
LABEL_48:
            if ( v12 < (__int64)0xFFC0000000000000LL )
              goto LABEL_46;
            if ( v12 > 0x3FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 9;
            break;
          case 'c':
            v16 = 1LL;
            goto LABEL_31;
          default:
            goto LABEL_17;
        }
        goto LABEL_31;
      }
    }
    LODWORD(v16) = 2;
    v17 = 1000;
    goto LABEL_18;
  }
  if ( *v9 )
  {
    v13 = 4;
    if ( *v9 != 34 )
      return v13;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  if ( a5 )
  {
    v14 = (unsigned __int8)*v11;
    if ( (_BYTE)v14 )
    {
      if ( !strchr(a5, (char)v14) )
      {
LABEL_27:
        v13 |= 2u;
        *a4 = v12;
        return v13;
      }
      goto LABEL_16;
    }
  }
LABEL_9:
  *a4 = v12;
  return v13;
}

__int64 __fastcall sub_407000(__int64 a1, int *a2)
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

__int64 __fastcall sub_4070E0(
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

__int64 __fastcall sub_407700(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_407000((__int64)a2, a7);
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
        sub_407000((__int64)a2, a7);
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
            return (unsigned int)sub_4070E0(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_4070E0(a1, a2, v12, a4, a5, a6, a7, v8, 4286028LL);
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
        return (unsigned int)sub_4070E0(a1, a2, v12, a4, a5, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_407CD0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_61D460 = dword_61D2BC;
  dword_61D464 = dword_61D2B8;
  result = sub_407700(a1, a2, a3, a4, a5, a6, &dword_61D460, a7);
  dword_61D2BC = dword_61D460;
  qword_61D4A0 = qword_61D470;
  dword_61D2B4 = dword_61D468;
  return result;
}

__int64 __fastcall sub_407D30(int a1, __int64 *a2, const char *a3)
{
  return sub_407CD0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_407D50(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_407CD0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_407D70(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_407700(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_407D90(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_407CD0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_407DB0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_407700(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_407DD0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_415D00(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

_BYTE *__fastcall sub_407E50(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

bool __fastcall sub_407F60(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // rdx

  result = a2 == 0 || a1 == 0;
  if ( result )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a2 + 8) )
  {
    while ( --v3 >= 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v3) != *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * v3) )
        return result;
    }
    return 1;
  }
  return result;
}

__int64 __fastcall sub_407FB0(_QWORD *a1, __int64 (__fastcall *a2)(__int64, _QWORD *), __int64 a3)
{
  _QWORD *v5; // rax
  __int64 result; // rax
  _QWORD *v7; // rdx
  bool v8; // zf

  while ( 1 )
  {
    v5 = (_QWORD *)a1[1];
    if ( !v5 )
    {
      v5 = (_QWORD *)a1[2];
      if ( !v5 )
        break;
    }
LABEL_2:
    a1 = v5;
  }
  for ( result = a2(a3, a1); !(_DWORD)result; result = a2(a3, v7) )
  {
    v7 = (_QWORD *)*a1;
    if ( !*a1 )
      break;
    v5 = (_QWORD *)v7[2];
    v8 = v5 == a1;
    a1 = (_QWORD *)*a1;
    if ( !v8 && v5 != 0LL )
      goto LABEL_2;
  }
  return result;
}

__int64 __fastcall sub_408020(_BYTE *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  bool v5; // cc
  char v6; // cl
  __int64 result; // rax
  char v8; // al
  char v9; // al

  v3 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(a2 + 104) <= v3 )
  {
    a1[8] = 2;
    return 0LL;
  }
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 144) <= 1;
  v6 = *(_BYTE *)(v4 + v3);
  *a1 = v6;
  if ( !v5 && v3 != *(_QWORD *)(a2 + 48) && *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v3) == -1 )
    goto LABEL_12;
  switch ( v6 )
  {
    case '\\':
      if ( (a3 & 1) == 0 || v3 + 1 >= *(_QWORD *)(a2 + 88) )
        goto LABEL_12;
      *(_QWORD *)(a2 + 72) = v3 + 1;
      v9 = *(_BYTE *)(v4 + v3 + 1);
      a1[8] = 1;
      *a1 = v9;
      return 1LL;
    case '[':
      if ( v3 + 1 < *(_QWORD *)(a2 + 88) )
      {
        v8 = *(_BYTE *)(v4 + v3 + 1);
        *a1 = v8;
        switch ( v8 )
        {
          case ':':
            if ( (a3 & 4) != 0 )
            {
              a1[8] = 30;
              return 2LL;
            }
            break;
          case '=':
            a1[8] = 28;
            return 2LL;
          case '.':
            a1[8] = 26;
            return 2LL;
        }
      }
      a1[8] = 1;
      result = 1LL;
      *a1 = 91;
      return result;
    case ']':
      a1[8] = 21;
      return 1LL;
    case '^':
      a1[8] = 25;
      return 1LL;
    case '-':
      a1[8] = 22;
      return 1LL;
    default:
LABEL_12:
      a1[8] = 1;
      return 1LL;
  }
}

__int64 __fastcall sub_408150(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 48) != 17 || a1 != *(_QWORD *)(a2 + 40) )
    return 0LL;
  *(_BYTE *)(a2 + 50) |= 8u;
  return 0LL;
}

__int64 __fastcall sub_408170(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v7; // rbx
  __int64 v8; // r11
  _QWORD *v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rax
  char v12; // dl
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rcx
  int v17; // eax
  __int64 v19; // [rsp+18h] [rbp-60h]
  __int16 v20; // [rsp+26h] [rbp-52h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 48LL) + 24 * a4;
  if ( *(__int64 *)(v5 + 8) > 0 )
  {
    v7 = 0LL;
    v8 = a5;
    v9 = *(_QWORD **)(a1 + 152);
    v21 = 40 * a5;
    v19 = 1LL << a3;
    v20 = ~(unsigned __int16)(1LL << a3);
    do
    {
      while ( 2 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v7);
        v11 = *v9 + 16 * v10;
        v12 = *(_BYTE *)(v11 + 8);
        if ( v12 == 8 )
        {
          if ( (a2 & 1) != 0 && *(_QWORD *)v11 == a3 )
            return 0xFFFFFFFFLL;
        }
        else if ( v12 == 9 )
        {
          if ( (a2 & 2) != 0 && *(_QWORD *)v11 == a3 )
            return 0LL;
        }
        else if ( v12 == 4 && v8 != -1 )
        {
          v22 = v5;
          v23 = v7;
          v14 = v8;
          v15 = *(_QWORD *)(a1 + 216) + v21;
          do
          {
            if ( *(_QWORD *)v15 == v10 && (a3 > 63 || (*(_WORD *)(v15 + 34) & (unsigned __int16)v19) != 0) )
            {
              v16 = **(_QWORD **)(v9[5] + 24 * v10 + 16);
              if ( a4 == v16 )
                return -(a2 & 1);
              v17 = sub_408170(a1, (unsigned int)a2, a3, v16, v14);
              if ( v17 == -1 )
                return 0xFFFFFFFFLL;
              if ( !v17 && (a2 & 2) != 0 )
                return 0LL;
              if ( a3 <= 63 )
                *(_WORD *)(v15 + 34) &= v20;
            }
            v15 += 40LL;
          }
          while ( *(_BYTE *)(v15 - 8) );
          v8 = v14;
          v5 = v22;
          ++v7;
          if ( *(_QWORD *)(v22 + 8) > v23 + 1 )
            continue;
          return (unsigned int)(a2 >> 1);
        }
        break;
      }
      ++v7;
    }
    while ( *(_QWORD *)(v5 + 8) > v7 );
  }
  return (unsigned int)(a2 >> 1);
}

__int64 __fastcall sub_408380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // esi
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 216) + 40 * a2;
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 > a5 )
    return 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(v6 + 24);
  if ( v8 < a5 )
    return 1LL;
  v9 = v7 == a5;
  if ( v8 == a5 )
  {
    v9 |= 2u;
    return sub_408170(a1, v9, a3, a4, a6);
  }
  result = 0LL;
  if ( v7 == a5 )
    return sub_408170(a1, v9, a3, a4, a6);
  return result;
}

__int64 __fastcall sub_4083F0(__int64 a1, size_t a2)
{
  void *v3; // rax
  void *v4; // rdi
  void *v5; // rax
  void *v7; // rax

  if ( *(int *)(a1 + 144) > 1 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      return 12LL;
    v3 = realloc(*(void **)(a1 + 16), 4 * a2);
    if ( !v3 )
      return 12LL;
    v4 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 16) = v3;
    if ( v4 )
    {
      v5 = realloc(v4, 8 * a2);
      if ( !v5 )
        return 12LL;
      *(_QWORD *)(a1 + 24) = v5;
    }
  }
  if ( !*(_BYTE *)(a1 + 139) )
  {
LABEL_8:
    *(_QWORD *)(a1 + 64) = a2;
    return 0LL;
  }
  v7 = realloc(*(void **)(a1 + 8), a2);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 8) = v7;
    goto LABEL_8;
  }
  return 12LL;
}

__int64 __fastcall sub_408490(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  void *v4; // rax
  __int64 v6; // rsi

  v3 = a1[1];
  v4 = (void *)a1[2];
  if ( *a1 != v3 )
    goto LABEL_2;
  v6 = v3 + 1;
  *a1 = 2 * v6;
  v4 = realloc(v4, 16 * v6);
  if ( v4 )
  {
    a1[2] = v4;
    v3 = a1[1];
LABEL_2:
    a1[1] = v3 + 1;
    *((_QWORD *)v4 + v3) = a2;
    return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_408500(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rcx

  if ( *a1 )
  {
    v3 = a1[1];
    v4 = (_QWORD *)a1[2];
    if ( !v3 )
    {
      *v4 = a2;
      result = 1LL;
      ++a1[1];
      return result;
    }
    if ( *a1 == v3 )
    {
      *a1 = 2 * v3;
      v4 = realloc(v4, 16 * v3);
      if ( !v4 )
        return 0LL;
      a1[2] = v4;
      v3 = a1[1];
    }
    v6 = v3;
    if ( *v4 <= a2 )
    {
      for ( i = v4[v6 - 1]; i > a2; i = v4[v6 - 1] )
        v4[v6--] = i;
    }
    else if ( v3 > 0 )
    {
      v7 = &v4[v6];
      do
      {
        v8 = *--v7;
        v7[1] = v8;
      }
      while ( v7 != v4 );
      v6 = 0LL;
    }
    v4[v6] = a2;
    result = 1LL;
    ++a1[1];
  }
  else
  {
    *a1 = 1LL;
    a1[1] = 1LL;
    result = (__int64)malloc(8uLL);
    a1[2] = result;
    if ( result )
    {
      *(_QWORD *)result = a2;
      return 1LL;
    }
    else
    {
      a1[1] = 0LL;
      *a1 = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_408630(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r15
  void *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rsi

  v5 = a2[2];
  *a2 = a3;
  a2[5] = 0LL;
  a2[4] = v5;
  v6 = malloc(8 * v5);
  a2[6] = v6;
  if ( !v6 )
    return 12LL;
  v7 = 0LL;
  if ( v5 > 0 )
  {
    while ( (*(_BYTE *)(*a1 + 16LL * *(_QWORD *)(a2[3] + 8 * v7) + 8) & 8) != 0
         || (unsigned __int8)sub_408490(a2 + 4, *(_QWORD *)(a2[3] + 8 * v7)) )
    {
      if ( a2[2] <= ++v7 )
        goto LABEL_8;
    }
    return 12LL;
  }
LABEL_8:
  v9 = a1[8] + 24 * (a1[17] & a3);
  v10 = *(_QWORD *)v9;
  v11 = *(_QWORD **)(v9 + 16);
  v12 = *(_QWORD *)v9 + 1LL;
  if ( *(_QWORD *)(v9 + 8) <= *(_QWORD *)v9 )
  {
    v11 = realloc(*(void **)(v9 + 16), 16 * v12);
    if ( v11 )
    {
      v10 = *(_QWORD *)v9;
      *(_QWORD *)(v9 + 16) = v11;
      *(_QWORD *)(v9 + 8) = 2 * v12;
      v12 = v10 + 1;
      goto LABEL_9;
    }
    return 12LL;
  }
LABEL_9:
  *(_QWORD *)v9 = v12;
  v11[v10] = a2;
  return 0LL;
}

wint_t __fastcall sub_408730(unsigned __int8 a1, __int64 a2)
{
  wint_t result; // eax

  result = btowc(a1);
  if ( result == -1 && !a2 )
    return a1;
  return result;
}

void __fastcall sub_408760(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  const __int32_t **v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx

  v1 = a1[11];
  if ( a1[8] <= v1 )
    v1 = a1[8];
  v2 = a1[6];
  if ( v1 <= v2 )
  {
    a1[6] = v2;
    a1[7] = v2;
  }
  else
  {
    v3 = __ctype_toupper_loc();
    do
    {
      v4 = a1[15];
      v5 = *(unsigned __int8 *)(a1[5] + v2 + *a1);
      if ( v4 )
        v5 = *(unsigned __int8 *)(v4 + v5);
      *(_BYTE *)(a1[1] + v2++) = (*v3)[v5];
    }
    while ( v1 != v2 );
    a1[6] = v1;
    a1[7] = v1;
  }
}

void __fastcall sub_4087E0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  mbstate_t *v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r14
  signed __int64 v7; // rdx
  char *v8; // rsi
  size_t v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _DWORD *v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 *v17; // rax
  __int64 v18; // rax
  char v19; // cl
  wchar_t pwc; // [rsp+Ch] [rbp-6Ch] BYREF
  char v21[104]; // [rsp+10h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 64) <= v2 )
    v2 = *(_QWORD *)(a1 + 64);
  if ( v2 > v3 )
  {
    v4 = (mbstate_t *)(a1 + 32);
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 120);
      v6 = *(_QWORD *)(a1 + 32);
      v7 = v2 - v3;
      if ( v5 )
      {
        if ( *(int *)(a1 + 144) > 0 && (v18 = 0LL, v8 = v21, v7 > 0) )
        {
          while ( 1 )
          {
            v19 = *(_BYTE *)(v5 + *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v18 + v3 + *(_QWORD *)a1));
            *(_BYTE *)(v3 + *(_QWORD *)(a1 + 8) + v18) = v19;
            v21[v18] = v19;
            if ( *(_DWORD *)(a1 + 144) <= (int)v18 + 1 )
              break;
            if ( v7 == ++v18 )
              break;
            v5 = *(_QWORD *)(a1 + 120);
          }
        }
        else
        {
          v8 = v21;
        }
      }
      else
      {
        v8 = (char *)(*(_QWORD *)a1 + v3 + *(_QWORD *)(a1 + 40));
      }
      v9 = sub_407DD0(&pwc, v8, v7, v4);
      if ( v9 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_14;
      LODWORD(v10) = pwc;
      if ( v9 == -2LL )
        break;
LABEL_9:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = v3 + 1;
      v13 = 4 * v3;
      *(_DWORD *)(v11 + 4 * v3) = v10;
      v3 += v9;
      if ( v12 >= v3 )
      {
        v3 = v12;
        if ( v12 >= v2 )
          goto LABEL_13;
      }
      else
      {
        v14 = (_DWORD *)(v11 + v13 + 4);
        v15 = (_DWORD *)(v11 + 4 * v3);
        do
          *v14++ = -1;
        while ( v15 != v14 );
        if ( v3 >= v2 )
          goto LABEL_13;
      }
    }
    if ( *(_QWORD *)(a1 + 64) < *(_QWORD *)(a1 + 88) )
    {
      *(_QWORD *)(a1 + 32) = v6;
      goto LABEL_13;
    }
LABEL_14:
    v16 = *(_QWORD *)(a1 + 120);
    v17 = (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v3 + *(_QWORD *)a1);
    v10 = *v17;
    pwc = *v17;
    if ( v16 )
    {
      LODWORD(v10) = *(unsigned __int8 *)(v16 + v10);
      pwc = v10;
    }
    *(_QWORD *)(a1 + 32) = v6;
    v9 = 1LL;
    goto LABEL_9;
  }
LABEL_13:
  *(_QWORD *)(a1 + 48) = v3;
  *(_QWORD *)(a1 + 56) = v3;
}

__int64 __fastcall sub_408990(__int64 a1)
{
  char *v2; // rbx
  signed __int64 v3; // r15
  signed __int64 v4; // r12
  __int64 v5; // rdx
  size_t v6; // rax
  size_t v7; // rbp
  wchar_t v8; // eax
  void *v9; // r8
  wchar_t v10; // r13d
  size_t v11; // rax
  size_t v12; // r10
  signed __int64 v13; // r8
  size_t v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rdx
  __int64 result; // rax
  signed __int64 v18; // rbp
  char *v19; // r12
  __int64 v20; // r13
  size_t v21; // rax
  size_t v22; // r12
  wchar_t v23; // eax
  wchar_t v24; // r13d
  __int64 v25; // rax
  __int64 v26; // rdx
  signed __int64 v27; // rbp
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // r10
  __int64 v34; // rax
  signed __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  signed __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 i; // rax
  wchar_t *v43; // rsi
  __int64 v44; // rax
  signed __int64 *v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  void *v48; // rax
  mbstate_t *src; // [rsp+0h] [rbp-A8h]
  wint_t srcb; // [rsp+0h] [rbp-A8h]
  void *srcc; // [rsp+0h] [rbp-A8h]
  void *srca; // [rsp+0h] [rbp-A8h]
  char *v53; // [rsp+8h] [rbp-A0h]
  wint_t v54; // [rsp+8h] [rbp-A0h]
  char *v55; // [rsp+8h] [rbp-A0h]
  char *v56; // [rsp+8h] [rbp-A0h]
  signed __int64 v57; // [rsp+10h] [rbp-98h]
  wint_t wc; // [rsp+24h] [rbp-84h] BYREF
  mbstate_t ps; // [rsp+28h] [rbp-80h] BYREF
  char s[120]; // [rsp+30h] [rbp-78h] BYREF

  v2 = *(char **)(a1 + 88);
  if ( *(_QWORD *)(a1 + 64) <= (__int64)v2 )
    v2 = *(char **)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 138) || *(_QWORD *)(a1 + 120) || *(_BYTE *)(a1 + 140) )
  {
    v4 = *(_QWORD *)(a1 + 56);
    goto LABEL_6;
  }
  if ( v3 >= (__int64)v2 )
    goto LABEL_36;
  src = (mbstate_t *)(a1 + 32);
  while ( 1 )
  {
    v18 = v3;
    v19 = (char *)(*(_QWORD *)a1 + v3 + *(_QWORD *)(a1 + 40));
    v20 = (unsigned __int8)*v19;
    if ( (v20 & 0x80u) == 0LL && mbsinit(src) )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3) = (*__ctype_toupper_loc())[v20];
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v3) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v3);
      ++v3;
      goto LABEL_35;
    }
    ps = *(mbstate_t *)(a1 + 32);
    v57 = (signed __int64)&v2[-v3];
    v21 = sub_407DD0((wchar_t *)&wc, v19, (size_t)&v2[-v3], src);
    v22 = v21;
    if ( v21 <= 0xFFFFFFFFFFFFFFFDLL )
      break;
    if ( v21 == -2LL )
    {
      if ( *(_QWORD *)(a1 + 64) < *(_QWORD *)(a1 + 88) )
      {
        *(mbstate_t *)(a1 + 32) = ps;
LABEL_36:
        *(_QWORD *)(a1 + 48) = v3;
        result = 0LL;
        *(_QWORD *)(a1 + 56) = v3;
        return result;
      }
      v30 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v3 + *(_QWORD *)a1);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3++) = v30;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v18) = v30;
    }
    else
    {
      v31 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v3 + *(_QWORD *)a1);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3++) = v31;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v18) = v31;
      *(mbstate_t *)(a1 + 32) = ps;
    }
LABEL_35:
    if ( (__int64)v2 <= v3 )
      goto LABEL_36;
  }
  v54 = wc;
  v23 = towupper(wc);
  v24 = v23;
  if ( v54 == v23 )
  {
    memcpy((void *)(v3 + *(_QWORD *)(a1 + 8)), (const void *)(*(_QWORD *)a1 + v3 + *(_QWORD *)(a1 + 40)), v22);
LABEL_31:
    v25 = *(_QWORD *)(a1 + 16);
    v26 = 4 * v3++;
    *(_DWORD *)(v25 + 4 * v18) = v24;
    v27 = v22 + v18;
    if ( v3 < v27 )
    {
      v28 = (_DWORD *)(v25 + v26 + 4);
      v29 = (_DWORD *)(v25 + 4 * v27);
      do
        *v28++ = -1;
      while ( v29 != v28 );
      v3 = v27;
    }
    goto LABEL_35;
  }
  if ( v22 == wcrtomb(s, v23, &ps) )
  {
    memcpy((void *)(v3 + *(_QWORD *)(a1 + 8)), s, v22);
    goto LABEL_31;
  }
  v4 = v3;
  while ( 2 )
  {
    v5 = *(_QWORD *)(a1 + 120);
    ps = *(mbstate_t *)(a1 + 32);
    if ( v5 )
    {
      v32 = *(_DWORD *)(a1 + 144);
      if ( v32 > 0 && v57 > 0 )
      {
        v33 = (unsigned int)(v32 - 1);
        v34 = 0LL;
        v35 = *(_QWORD *)a1 + v4 + *(_QWORD *)(a1 + 40);
        do
        {
          s[v34] = *(_BYTE *)(v5 + *(unsigned __int8 *)(v35 + v34));
          if ( v33 == v34 )
            break;
          ++v34;
        }
        while ( v57 != v34 );
      }
      v53 = s;
      v6 = sub_407DD0((wchar_t *)&wc, s, v57, src);
    }
    else
    {
      v53 = (char *)(*(_QWORD *)a1 + v4 + *(_QWORD *)(a1 + 40));
      v6 = sub_407DD0((wchar_t *)&wc, v53, v57, src);
    }
    v7 = v6;
    if ( v6 > 0xFFFFFFFFFFFFFFFDLL )
    {
      if ( v6 == -2LL && *(_QWORD *)(a1 + 64) < *(_QWORD *)(a1 + 88) )
      {
LABEL_20:
        *(mbstate_t *)(a1 + 32) = ps;
LABEL_21:
        *(_QWORD *)(a1 + 48) = v3;
        result = 0LL;
        *(_QWORD *)(a1 + 56) = v4;
        return result;
      }
      v36 = *(_QWORD *)(a1 + 120);
      v37 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v4 + *(_QWORD *)a1);
      if ( v36 )
        LODWORD(v37) = *(unsigned __int8 *)(v36 + v37);
      v38 = v3;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3) = v37;
      if ( *(_BYTE *)(a1 + 140) )
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v3) = v4;
      ++v4;
      ++v3;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v38) = v37;
      if ( v7 == -1LL )
        *(mbstate_t *)(a1 + 32) = ps;
      goto LABEL_6;
    }
    srcb = wc;
    v8 = towupper(wc);
    v9 = (void *)v3;
    v10 = v8;
    if ( srcb == v8 )
      goto LABEL_50;
    v11 = wcrtomb(s, v8, &ps);
    v9 = (void *)v3;
    v12 = v11;
    if ( v7 == v11 )
    {
      memcpy((void *)(v3 + *(_QWORD *)(a1 + 8)), s, v7);
      v13 = v3;
      goto LABEL_14;
    }
    if ( v11 == -1LL )
    {
LABEL_50:
      srcc = v9;
      memcpy((void *)(v3 + *(_QWORD *)(a1 + 8)), v53, v7);
      v13 = (signed __int64)srcc;
LABEL_14:
      if ( *(_BYTE *)(a1 + 140) )
      {
        v14 = v4;
        if ( v7 )
        {
          v14 = v7 + v4;
          v39 = *(_QWORD *)(a1 + 24) + 8 * (v3 - v4);
          do
          {
            *(_QWORD *)(v39 + 8 * v4) = v4;
            ++v4;
          }
          while ( v14 != v4 );
        }
      }
      else
      {
        v14 = v4 + v7;
      }
      v4 = v14;
      v15 = *(_QWORD *)(a1 + 16);
      ++v3;
      *(_DWORD *)(v15 + 4 * v13) = v10;
      if ( v3 < (__int64)(v13 + v7) )
      {
        v16 = (_DWORD *)(v15 + 4 * v13 + 4);
        do
          *v16++ = -1;
        while ( (_DWORD *)(v15 + 4 * (v13 + v7)) != v16 );
        v3 = v13 + v7;
      }
LABEL_6:
      if ( v3 >= (__int64)v2 )
        goto LABEL_21;
      src = (mbstate_t *)(a1 + 32);
      v57 = (signed __int64)&v2[-v3];
      continue;
    }
    break;
  }
  srca = (void *)(v3 + v11);
  v40 = *(_QWORD *)(a1 + 64);
  if ( (unsigned __int64)srca > v40 )
    goto LABEL_20;
  if ( *(_QWORD *)(a1 + 24)
    || (v56 = (char *)v12, v48 = malloc(8 * v40), v12 = (size_t)v56, (*(_QWORD *)(a1 + 24) = v48) != 0LL) )
  {
    if ( !*(_BYTE *)(a1 + 140) )
    {
      if ( v3 )
      {
        v41 = *(_QWORD *)(a1 + 24);
        for ( i = 0LL; i != v3; ++i )
          *(_QWORD *)(v41 + 8 * i) = i;
      }
      *(_BYTE *)(a1 + 140) = 1;
    }
    v55 = (char *)v12;
    memcpy((void *)(v3 + *(_QWORD *)(a1 + 8)), s, v12);
    v43 = (wchar_t *)(*(_QWORD *)(a1 + 16) + 4 * v3);
    v44 = *(_QWORD *)(a1 + 24);
    *v43 = v10;
    v45 = (signed __int64 *)(v44 + 8 * v3);
    v46 = 1LL;
    *v45 = v4;
    if ( (unsigned __int64)v55 > 1 )
    {
      do
      {
        v47 = v46;
        if ( v46 >= v7 )
          v47 = v7 - 1;
        v45[v46] = v4 + v47;
        v43[v46++] = -1;
      }
      while ( (char *)v46 != v55 );
    }
    v2 = &v55[*(_QWORD *)(a1 + 88) - v7];
    *(_QWORD *)(a1 + 88) = v2;
    if ( v4 < *(_QWORD *)(a1 + 96) )
      *(_QWORD *)(a1 + 104) += &v55[-v7];
    v3 = (signed __int64)srca;
    if ( *(_QWORD *)(a1 + 64) <= (__int64)v2 )
      v2 = *(char **)(a1 + 64);
    v4 += v7;
    goto LABEL_6;
  }
  return 12LL;
}

__int64 __fastcall sub_408F90(__int64 a1, size_t a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v5; // ebp
  void *v6; // rdi
  void *v7; // rax
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 > 0xFFFFFFFFFFFFFFELL )
    return 12LL;
  v3 = 2 * v2;
  a2 = (int)a2;
  if ( v3 > *(_QWORD *)(a1 + 88) )
    v3 = *(_QWORD *)(a1 + 88);
  if ( v3 >= (int)a2 )
    a2 = v3;
  v5 = sub_4083F0(a1, a2);
  if ( v5 )
    return v5;
  v6 = *(void **)(a1 + 184);
  if ( !v6 )
    goto LABEL_10;
  v7 = realloc(v6, 8LL * *(_QWORD *)(a1 + 64) + 8);
  if ( !v7 )
    return 12LL;
  *(_QWORD *)(a1 + 184) = v7;
LABEL_10:
  v8 = *(_DWORD *)(a1 + 144);
  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( v8 > 1 )
    {
      sub_4087E0(a1);
      return 0LL;
    }
    v10 = *(_QWORD *)(a1 + 120);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 88);
      v12 = *(_QWORD *)(a1 + 48);
      if ( *(_QWORD *)(a1 + 64) <= v11 )
        v11 = *(_QWORD *)(a1 + 64);
      if ( v11 > v12 )
      {
        while ( 1 )
        {
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + v12) = *(_BYTE *)(v10
                                                           + *(unsigned __int8 *)(*(_QWORD *)(a1 + 40)
                                                                                + v12
                                                                                + *(_QWORD *)a1));
          if ( v11 == ++v12 )
            break;
          v10 = *(_QWORD *)(a1 + 120);
        }
        *(_QWORD *)(a1 + 48) = v11;
        *(_QWORD *)(a1 + 56) = v11;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = v12;
        *(_QWORD *)(a1 + 56) = v12;
      }
    }
    return v5;
  }
  if ( v8 > 1 )
    return sub_408990(a1);
  sub_408760((_QWORD *)a1);
  return 0LL;
}

__int64 __fastcall sub_4090E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // rax

  v2 = a1[8];
  v3 = a1[24];
  if ( v2 > a2 || v2 >= a1[11] )
  {
    v5 = a1[6];
    if ( v5 <= a2 && v5 < a1[11] )
    {
      result = sub_408F90((__int64)a1, (unsigned int)(a2 + 1));
      if ( (_DWORD)result )
        return result;
    }
  }
  else
  {
    result = sub_408F90((__int64)a1, (unsigned int)(a2 + 1));
    if ( (_DWORD)result )
      return result;
  }
  if ( v3 < a2 )
  {
    memset((void *)(a1[23] + 8 * v3 + 8), 0, 8 * (a2 - v3));
    a1[24] = a2;
  }
  return 0LL;
}

void __fastcall sub_409170(void **ptr)
{
  free(*ptr);
  free(ptr[3]);
  free(ptr);
}

void __fastcall sub_409190(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8) & 0x400FF;
  if ( v1 == 6 )
  {
    sub_409170(*(void ***)a1);
  }
  else if ( v1 == 3 )
  {
    free(*(void **)a1);
  }
}

__int64 __fastcall sub_4091C0(__int64 a1, __int64 a2)
{
  sub_409190(a2 + 40);
  return 0LL;
}

__int64 __fastcall sub_4091E0(__int64 a1, __int64 a2, void *a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  void *v6; // r12
  char *v7; // r13
  __int64 v8; // rax
  bool v9; // cl
  char *v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // r14
  void *v14; // rax
  size_t v15; // r13
  size_t v16; // rbp
  void *v17; // rax
  void *ptr; // [rsp+0h] [rbp-48h]
  void *v19; // [rsp+8h] [rbp-40h]
  void *v20; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 >= v5 )
  {
    v13 = 2 * v5;
    if ( 2 * v5 <= 0xAAAAAAAAAAAAAAALL )
    {
      v19 = a3;
      v14 = realloc(*(void **)a1, 32 * v5);
      if ( v14 )
      {
        *(_QWORD *)a1 = v14;
        v15 = 16 * v5;
        v16 = 48 * v5;
        v6 = realloc(*(void **)(a1 + 24), v15);
        ptr = realloc(*(void **)(a1 + 32), v15);
        v7 = (char *)realloc(*(void **)(a1 + 40), v16);
        v17 = realloc(*(void **)(a1 + 48), v16);
        if ( v6 )
        {
          if ( ptr )
          {
            if ( v7 )
            {
              a3 = v19;
              if ( v17 )
              {
                *(_QWORD *)(a1 + 24) = v6;
                v4 = *(_QWORD *)(a1 + 16);
                *(_QWORD *)(a1 + 32) = ptr;
                *(_QWORD *)(a1 + 40) = v7;
                *(_QWORD *)(a1 + 48) = v17;
                *(_QWORD *)(a1 + 8) = v13;
                goto LABEL_3;
              }
            }
          }
        }
        v20 = v17;
        free(v6);
        free(ptr);
        free(v7);
        free(v20);
      }
    }
    return -1LL;
  }
  v6 = *(void **)(a1 + 24);
  v7 = *(char **)(a1 + 40);
LABEL_3:
  v8 = *(_QWORD *)a1 + 16 * v4;
  *(_QWORD *)(v8 + 8) = a3;
  *(_QWORD *)v8 = a2;
  *(_DWORD *)(v8 + 8) = (unsigned int)a3 & 0xFFFC00FF;
  v9 = (_BYTE)a3 == 6;
  if ( (_BYTE)a3 == 5 )
    v9 = *(_DWORD *)(a1 + 180) > 1;
  *(_BYTE *)(v8 + 10) = (16 * v9) | *(_BYTE *)(v8 + 10) & 0xEF;
  *((_QWORD *)v6 + v4) = -1LL;
  v10 = &v7[24 * *(_QWORD *)(a1 + 16)];
  *(_OWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 2) = 0LL;
  v11 = *(_QWORD *)(a1 + 48) + 24LL * *(_QWORD *)(a1 + 16);
  *(_OWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = result + 1;
  return result;
}

__int64 __fastcall sub_4093B0(__int64 *a1, __int64 a2, __int16 a3)
{
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rsi
  unsigned int v9; // ecx
  unsigned int v10; // ecx

  v3 = 16 * a2;
  result = sub_4091E0((__int64)a1, *(_QWORD *)(*a1 + 16 * a2), *(void **)(*a1 + 16 * a2 + 8));
  if ( result != -1 )
  {
    v7 = *a1;
    v8 = *a1 + 16 * result;
    v9 = ((a3 & 0x3FF) << 8) | *(_DWORD *)(v8 + 8) & 0xFFFC00FF;
    *(_DWORD *)(v8 + 8) = v9;
    v10 = v9 & 0xFFFC00FF | ((a3 & 0x3FF | (*(_DWORD *)(v7 + v3 + 8) >> 8) & 0x3FF) << 8);
    *(_DWORD *)(v8 + 8) = v10;
    *(_BYTE *)(v8 + 10) = BYTE2(v10) | 4;
    *(_QWORD *)(a1[4] + 8 * result) = a2;
  }
  return result;
}

__int64 __fastcall sub_409450(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rbp
  _QWORD *v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  char v22; // al
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r13
  char v29; // dl
  __int64 v30; // [rsp+0h] [rbp-48h]

  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *a1;
      v10 = a1[5];
      v11 = a3;
      v12 = *a1 + 16 * a2;
      if ( *(_BYTE *)(v12 + 8) == 4 )
      {
        v25 = 8 * a2;
        v16 = 24 * a3;
        v26 = *(_QWORD *)(a1[3] + 8 * a2);
        *(_QWORD *)(v10 + 24 * a3 + 8) = 0LL;
        v30 = v26;
        a3 = sub_4093B0(a1, v26, a5);
        if ( a3 == -1 )
          return 12LL;
        *(_QWORD *)(a1[3] + 8 * v11) = *(_QWORD *)(a1[3] + v25);
        goto LABEL_13;
      }
      v13 = 24 * a2;
      v14 = v10 + 24 * a2;
      v15 = *(_QWORD *)(v14 + 8);
      if ( !v15 )
      {
        *(_QWORD *)(a1[3] + 8 * a3) = *(_QWORD *)(a1[3] + 8 * a2);
        return 0LL;
      }
      v16 = 24 * a3;
      v17 = (_QWORD *)(24 * a3 + v10);
      v18 = **(_QWORD **)(v14 + 16);
      v17[1] = 0LL;
      if ( v15 == 1 )
        break;
      v19 = a1[2];
      v20 = v19 - 1;
      v21 = v9 + 16 * (v19 - 1);
      if ( (*(_BYTE *)(v21 + 10) & 4) != 0 && v20 > 0 )
      {
        while ( *(_QWORD *)(a1[4] + 8 * v20) != v18 || a5 != ((*(_DWORD *)(v21 + 8) >> 8) & 0x3FF) )
        {
          v21 += -16 * (v19 - 1) + 16 * v19 - 32;
          --v20;
          if ( (*(_BYTE *)(v21 + 10) & 4) == 0 || v20 <= 0 )
            goto LABEL_23;
        }
        if ( !(unsigned __int8)sub_408500(v17, v20) )
          return 12LL;
      }
      else
      {
LABEL_23:
        v27 = sub_4093B0(a1, v18, a5);
        v28 = v27;
        if ( v27 == -1 || !(unsigned __int8)sub_408500((_QWORD *)(v16 + a1[5]), v27) )
          return 12LL;
        result = sub_409450(a1, v18, v28, a4, a5);
        if ( (_DWORD)result )
          return result;
      }
      v30 = *(_QWORD *)(*(_QWORD *)(a1[5] + v13 + 16) + 8LL);
      a3 = sub_4093B0(a1, v30, a5);
      if ( a3 == -1 )
        return 12LL;
LABEL_13:
      v22 = sub_408500((_QWORD *)(v16 + a1[5]), a3);
      a2 = v30;
      if ( !v22 )
        return 12LL;
    }
    if ( a2 == a4 && a2 != a3 )
      break;
    a5 |= (*(_DWORD *)(v12 + 8) >> 8) & 0x3FF;
    v24 = sub_4093B0(a1, v18, a5);
    a3 = v24;
    if ( v24 == -1 || !(unsigned __int8)sub_408500((_QWORD *)(v16 + a1[5]), v24) )
      return 12LL;
    a2 = v18;
  }
  v29 = sub_408500(v17, v18);
  result = 0LL;
  if ( !v29 )
    return 12LL;
  return result;
}

void __fastcall sub_4096E0(void **ptr)
{
  void **v1; // rax

  free(ptr[6]);
  free(ptr[9]);
  v1 = (void **)ptr[10];
  if ( v1 != ptr + 1 )
  {
    free(v1[2]);
    free(ptr[10]);
  }
  free(ptr[3]);
  free(ptr[12]);
  free(ptr[11]);
  free(ptr);
}

void __fastcall sub_409740(__int64 a1)
{
  free(*(void **)(a1 + 16));
  free(*(void **)(a1 + 24));
  if ( *(_BYTE *)(a1 + 139) )
    free(*(void **)(a1 + 8));
}

void __fastcall sub_409780(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // rbx
  void **v4; // rbp
  __int64 v5; // rax

  if ( (__int64)a1[29] > 0 )
  {
    v1 = 0LL;
    do
    {
      v2 = *(_QWORD *)(a1[31] + 8 * v1);
      if ( *(__int64 *)(v2 + 32) > 0 )
      {
        v3 = 0LL;
        do
        {
          v4 = *(void ***)(*(_QWORD *)(v2 + 40) + 8 * v3++);
          free(v4[4]);
          free(v4);
        }
        while ( *(_QWORD *)(v2 + 32) > v3 );
      }
      free(*(void **)(v2 + 40));
      v5 = *(_QWORD *)(v2 + 16);
      if ( v5 )
      {
        free(*(void **)(v5 + 16));
        free(*(void **)(v2 + 16));
      }
      ++v1;
      free((void *)v2);
    }
    while ( a1[29] > v1 );
  }
  a1[29] = 0LL;
  a1[25] = 0LL;
}

__int64 __fastcall sub_409840(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  _QWORD *v18; // rax

  v2 = *(_BYTE *)(a2 + 48);
  v3 = *(_QWORD *)(a2 + 56);
  switch ( v2 )
  {
    case 2:
      if ( *(_QWORD *)(a2 + 32) )
        __assert_fail("node->next == NULL", "lib/regcomp.c", 0x5A9u, "link_nfa_nodes");
      goto LABEL_4;
    case 4:
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 56LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v3) = v13;
      if ( *(_BYTE *)(a2 + 48) != 4 )
        goto LABEL_4;
      v14 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * v3);
      *v14 = 1LL;
      v14[1] = 1LL;
      v15 = malloc(8uLL);
      v14[2] = v15;
      if ( v15 )
      {
        *v15 = v13;
        result = 0LL;
      }
      else
      {
        v14[1] = 0LL;
        result = 12LL;
        *v14 = 0LL;
      }
      break;
    case 8:
    case 9:
    case 12:
      v16 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 56LL);
      v17 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * v3);
      *v17 = 1LL;
      v17[1] = 1LL;
      v18 = malloc(8uLL);
      v17[2] = v18;
      if ( v18 )
      {
        *v18 = v16;
        return 0LL;
      }
      else
      {
        v17[1] = 0LL;
        result = 12LL;
        *v17 = 0LL;
      }
      return result;
    case 10:
    case 11:
      *(_BYTE *)(a1 + 176) |= 1u;
      v5 = *(_QWORD *)(a2 + 8);
      if ( v5 )
        v6 = *(_QWORD *)(v5 + 24);
      else
        v6 = *(_QWORD *)(a2 + 32);
      v7 = *(_QWORD *)(v6 + 56);
      v8 = *(_QWORD *)(a2 + 16);
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 24);
      else
        v9 = *(_QWORD *)(a2 + 32);
      v10 = *(_QWORD *)(v9 + 56);
      if ( v7 < 0 )
        __assert_fail("left > -1", "lib/regcomp.c", 0x5B9u, "link_nfa_nodes");
      if ( v10 < 0 )
        __assert_fail("right > -1", "lib/regcomp.c", 0x5BAu, "link_nfa_nodes");
      v11 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * v3);
      *v11 = 2LL;
      v12 = malloc(0x10uLL);
      v11[2] = v12;
      if ( !v12 )
        return 12LL;
      if ( v7 == v10 )
      {
        v11[1] = 1LL;
        *v12 = v7;
        return 0LL;
      }
      else
      {
        v11[1] = 2LL;
        if ( v7 >= v10 )
        {
          *v12 = v10;
          v12[1] = v7;
        }
        else
        {
          *v12 = v7;
          v12[1] = v10;
        }
        return 0LL;
      }
    case 16:
      goto LABEL_4;
    default:
      if ( (v2 & 8) != 0 )
        __assert_fail("!IS_EPSILON_NODE (node->token.type)", "lib/regcomp.c", 0x5CCu, "link_nfa_nodes");
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v3) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 56LL);
LABEL_4:
      result = 0LL;
      break;
  }
  return result;
}

__int64 __fastcall sub_409AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v3 = a2 + 1;
  if ( a2 + 1 >= v2 )
    return 1LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v4 + 4 * v3) != -1 )
    return 1LL;
  v5 = v2 - a2;
  v6 = v4 + 4 * v3 - 4;
  v7 = 2LL;
  do
  {
    result = (unsigned int)v7;
    if ( v7 == v5 )
      break;
    ++v7;
  }
  while ( *(_DWORD *)(v6 + 4 * v7 - 4) == -1 );
  return result;
}

__int64 __fastcall sub_409B10(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  result = 0LL;
  if ( a1 > 0 )
  {
    v4 = *a2;
    v5 = a1 - 1;
    v6 = 0LL;
    while ( v6 < v5 )
    {
      v7 = (v6 + v5) >> 1;
      if ( a3 <= *(_QWORD *)(v4 + 8 * v7) )
      {
        while ( v6 < v7 )
        {
          v8 = (v6 + v7) >> 1;
          if ( *(_QWORD *)(v4 + 8 * v8) < a3 )
            goto LABEL_11;
          v7 = (v6 + v7) >> 1;
        }
        break;
      }
      v8 = (v6 + v5) >> 1;
      v7 = v5;
LABEL_11:
      v6 = v8 + 1;
      v5 = v7;
    }
    result = 0LL;
    if ( a3 == *(_QWORD *)(v4 + 8 * v6) )
      return v6 + 1;
  }
  return result;
}

__int64 __fastcall sub_409B80(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 result; // rax

  while ( !sub_409B10(a2[1], a2 + 2, a3) )
  {
    v8 = *a1 + 16 * a3;
    if ( *(unsigned __int8 *)(v8 + 8) == a5 && *(_QWORD *)v8 == a4 )
    {
      if ( a5 == 9 && !(unsigned __int8)sub_408500(a2, a3) )
        return 12LL;
      return 0LL;
    }
    if ( !(unsigned __int8)sub_408500(a2, a3) )
      return 12LL;
    v9 = 24 * a3;
    v10 = v9 + a1[5];
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 )
      return 0LL;
    v12 = *(__int64 **)(v10 + 16);
    if ( v11 == 2 )
    {
      result = sub_409B80(a1, a2, v12[1], a4, a5);
      if ( (_DWORD)result )
        return result;
      v12 = *(__int64 **)(a1[5] + v9 + 16);
    }
    a3 = *v12;
  }
  return 0LL;
}

void __fastcall sub_409C80(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax

  if ( a3 < *a1 )
  {
    v3 = *a2;
    do
    {
      *(_QWORD *)(v3 + 8 * a3) = *(_QWORD *)(v3 + 8 * a3 + 8);
      ++a3;
    }
    while ( a3 < *a1 );
  }
}

__int64 __fastcall sub_409CB0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = *(_BYTE *)(a2 + 48);
  if ( v2 != 4 )
  {
    if ( v2 == 17 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      if ( v4 )
      {
        if ( *(_BYTE *)(v4 + 48) == 17 )
        {
          v5 = *(_QWORD *)(v4 + 40);
          v6 = *(_QWORD **)(v4 + 8);
          *(_QWORD *)(a2 + 8) = v6;
          if ( v6 )
            *v6 = a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v5) = *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8LL * *(_QWORD *)(a2 + 40));
          if ( v5 <= 63 )
            *(_QWORD *)(a1 + 160) &= __ROL8__(-2LL, v5);
        }
      }
    }
    return 0LL;
  }
  v7 = *(_QWORD *)(a1 + 224);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 8LL * *(int *)(a2 + 40));
  *(_QWORD *)(a2 + 40) = v8;
  *(_QWORD *)(a1 + 160) |= 1 << v8;
  return 0LL;
}

__int64 __fastcall sub_409D40(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rax

  v2 = *(_BYTE *)(a2 + 48);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v2 == 11 )
  {
    *(_QWORD *)(v3 + 32) = a2;
    return 0LL;
  }
  else if ( v2 == 16 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v3 + 32) = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(a2 + 32);
    return 0LL;
  }
  else
  {
    if ( v3 )
      *(_QWORD *)(v3 + 32) = *(_QWORD *)(a2 + 32);
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 )
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(a2 + 32);
    return 0LL;
  }
}

__int64 __fastcall sub_409DA0(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 i; // rax
  __int64 v10; // rbp
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // r14
  __int64 v18; // rsi
  __int64 v19; // r12
  int v20; // ebx
  __int64 v22; // r13
  __int64 v23; // r14
  _QWORD *v24; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]

  v7 = 0LL;
  v8 = a1[25];
  v24 = (_QWORD *)a1[19];
  for ( i = v8; v7 < i; i = v11 )
  {
    v10 = a1[27];
    v11 = (v7 + i) / 2;
    if ( a5 <= *(_QWORD *)(v10 + 40 * v11 + 8) )
    {
      while ( v7 < v11 )
      {
        v22 = (v7 + v11) / 2;
        if ( *(_QWORD *)(v10 + 40 * v22 + 8) < a5 )
          goto LABEL_25;
        v11 = (v7 + v11) / 2;
      }
      break;
    }
    v22 = (v7 + i) / 2;
    v11 = i;
LABEL_25:
    v7 = v22 + 1;
  }
  if ( v8 <= v7 )
  {
    v7 = -1LL;
  }
  else if ( a5 != *(_QWORD *)(a1[27] + 40 * v7 + 8) )
  {
    v7 = -1LL;
  }
  v12 = a1[25];
  v13 = 0LL;
  while ( v13 < v12 )
  {
    v14 = a1[27];
    v15 = (v13 + v12) / 2;
    if ( a7 <= *(_QWORD *)(v14 + 40 * v15 + 8) )
    {
      while ( v13 < v15 )
      {
        v23 = (v13 + v15) / 2;
        if ( *(_QWORD *)(v14 + 40 * v23 + 8) < a7 )
          goto LABEL_26;
        v15 = (v13 + v15) / 2;
      }
      break;
    }
    v23 = (v13 + v12) / 2;
    v15 = v12;
LABEL_26:
    v13 = v23 + 1;
    v12 = v15;
  }
  if ( v8 <= v13 )
  {
    v13 = -1LL;
  }
  else if ( a7 != *(_QWORD *)(a1[27] + 40 * v13 + 8) )
  {
    v13 = -1LL;
  }
  if ( *a2 <= 0 )
    return 0LL;
  v16 = 0LL;
  v28 = v7;
  v29 = v13;
  while ( 1 )
  {
    v18 = *(_QWORD *)(*a3 + 8 * v16);
    v19 = *(_QWORD *)(*v24 + 16LL * *(_QWORD *)(a1[27] + 40 * v18));
    v20 = sub_408380((__int64)a1, v18, v19, a4, a5, v28);
    if ( v20 != (unsigned int)sub_408380((__int64)a1, *(_QWORD *)(*a3 + 8 * v16), v19, a6, a7, v29) )
      break;
    if ( ++v16 >= *a2 )
      return 0LL;
  }
  return 1LL;
}

__int64 __fastcall sub_409FF0(_QWORD *a1, __int64 (__fastcall *a2)(__int64, _QWORD *), __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx

  v4 = a1;
  for ( result = a2(a3, a1); !(_DWORD)result; result = a2(a3, v6) )
  {
    v6 = (_QWORD *)v4[1];
    v7 = 0LL;
    if ( !v6 )
    {
      while ( 1 )
      {
        v6 = (_QWORD *)v4[2];
        if ( v6 != v7 )
        {
          if ( v6 )
            break;
        }
        v7 = v4;
        if ( !*v4 )
          return result;
        v4 = (_QWORD *)*v4;
      }
    }
    v4 = v6;
  }
  return result;
}

__int64 __fastcall sub_40A050(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  _QWORD *v21; // r9
  __int64 v23; // rax
  __int64 v24; // rbp
  void *v25; // rax
  void *v26; // rdi
  const void *v27; // rsi

  if ( !a2 )
    return 0LL;
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 >= v4 + 2 * v2 )
  {
    if ( v4 )
      goto LABEL_5;
LABEL_26:
    v26 = *(void **)(a1 + 16);
    v27 = *(const void **)(a2 + 16);
    *(_QWORD *)(a1 + 8) = v2;
    memcpy(v26, v27, 8LL * *(_QWORD *)(a2 + 8));
    return 0LL;
  }
  v23 = *(_QWORD *)a1 + v2;
  v24 = 2 * v23;
  v25 = realloc(*(void **)(a1 + 16), 16 * v23);
  if ( !v25 )
    return 12LL;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v25;
  *(_QWORD *)a1 = v24;
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
    goto LABEL_26;
LABEL_5:
  v6 = v4 + 2 * v2;
  v7 = v2 - 1;
  v8 = v4 - 1;
  v9 = ~v7;
LABEL_6:
  if ( v9 < 0 )
  {
    while ( v8 >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * v7);
      if ( *(_QWORD *)(v10 + 8 * v8) == v11 )
      {
        --v7;
        --v8;
        v9 = ~v7;
        goto LABEL_6;
      }
      if ( *(_QWORD *)(v10 + 8 * v8) >= v11 )
      {
        --v8;
        goto LABEL_6;
      }
      --v7;
      --v6;
      *(_QWORD *)(v10 + 8 * v6) = v11;
      v9 = ~v7;
      if ( v7 < 0 )
        break;
    }
  }
  if ( v7 >= 0 )
  {
    v12 = v7 + 1;
    v6 -= v12;
    memcpy((void *)(*(_QWORD *)(a1 + 16) + 8 * v6), *(const void **)(a2 + 16), 8 * v12);
  }
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(_QWORD *)(a2 + 8);
  v15 = v13 + 2 * v14 - 1;
  v16 = v13 + 2 * v14 - v6;
  if ( !v16 )
    return 0LL;
  v17 = v13 - 1;
  v18 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v16 + v13;
  do
  {
    while ( 1 )
    {
      v19 = v18[v15];
      v20 = v18[v17];
      v21 = &v18[v17 + v16];
      if ( v19 <= v20 )
        break;
      --v15;
      *v21 = v19;
      if ( !--v16 )
        return 0LL;
    }
    *v21 = v20;
    --v17;
  }
  while ( v17 >= 0 );
  memcpy(v18, &v18[v6], 8 * v16);
  return 0LL;
}

__int64 __fastcall sub_40A220(__m128i *a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rsi
  __int64 v13; // rax
  char v14; // r13
  __int64 v15; // r14
  __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __m128i v21; // xmm1
  __m128i v23; // [rsp+10h] [rbp-78h] BYREF
  void *v24; // [rsp+20h] [rbp-68h]
  __m128i v25; // [rsp+30h] [rbp-58h] BYREF
  void *ptr; // [rsp+40h] [rbp-48h]

  v6 = 24 * a3;
  v7 = 24 * a3 + a2[5];
  v8 = *(_QWORD *)(v7 + 8);
  v23 = (__m128i)(unsigned __int64)(v8 + 1);
  v24 = malloc(8 * (v8 + 1));
  if ( !v24 )
    return 12LL;
  v9 = *a2;
  *(_QWORD *)(a2[6] + v6 + 8) = -1LL;
  v10 = v9 + 16 * a3;
  v11 = *(_DWORD *)(v10 + 8);
  if ( (v11 & 0x3FF00) == 0 )
    goto LABEL_3;
  if ( !*(_QWORD *)(v7 + 8) )
    goto LABEL_24;
  if ( (*(_BYTE *)(v9 + 16LL * **(_QWORD **)(v7 + 16) + 10) & 4) != 0 )
  {
LABEL_3:
    if ( (*(_BYTE *)(v10 + 8) & 8) != 0 )
    {
      v12 = a2[5];
      v13 = v12 + v6;
      if ( *(__int64 *)(v12 + v6 + 8) > 0 )
      {
        v14 = 0;
        v15 = 0LL;
        do
        {
          while ( 1 )
          {
            v17 = 24LL * *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8 * v15);
            v18 = v17 + a2[6];
            v19 = *(_QWORD *)(v18 + 8);
            if ( v19 != -1 )
              break;
            v13 = v12 + v6;
            v14 = 1;
            if ( *(_QWORD *)(v12 + v6 + 8) <= ++v15 )
              goto LABEL_16;
          }
          if ( v19 )
          {
            v25 = _mm_loadu_si128((const __m128i *)v18);
            ptr = *(void **)(v18 + 16);
          }
          else
          {
            result = sub_40A220(&v25, a2);
            if ( (_DWORD)result )
              return result;
          }
          result = sub_40A050((__int64)&v23, (__int64)&v25);
          if ( (_DWORD)result )
            return result;
          if ( !*(_QWORD *)(a2[6] + v17 + 8) )
          {
            v14 = 1;
            free(ptr);
          }
          v12 = a2[5];
          ++v15;
          v13 = v12 + v6;
        }
        while ( *(_QWORD *)(v12 + v6 + 8) > v15 );
LABEL_16:
        if ( (unsigned __int8)sub_408500(&v23, a3) )
        {
          v20 = a2[6];
          if ( a4 != 1 && v14 )
          {
            *(_QWORD *)(v20 + v6 + 8) = 0LL;
LABEL_27:
            v21 = _mm_load_si128(&v23);
            a1[1].m128i_i64[0] = (__int64)v24;
            result = 0LL;
            *a1 = v21;
            return result;
          }
LABEL_26:
          *(__m128i *)(v20 + v6) = _mm_load_si128(&v23);
          *(_QWORD *)(v20 + v6 + 16) = v24;
          goto LABEL_27;
        }
        return 12LL;
      }
    }
LABEL_24:
    if ( (unsigned __int8)sub_408500(&v23, a3) )
    {
      v20 = a2[6];
      goto LABEL_26;
    }
    return 12LL;
  }
  result = sub_409450(a2, a3, a3, a3, (v11 >> 8) & 0x3FF);
  if ( !(_DWORD)result )
  {
    v10 = 16 * a3 + *a2;
    goto LABEL_3;
  }
  return result;
}

__int64 __fastcall sub_40A480(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  __m128i v16; // xmm0
  __int64 result; // rax
  unsigned int v18; // [rsp+Ch] [rbp-4Ch]
  __m128i v19; // [rsp+10h] [rbp-48h] BYREF
  void *ptr; // [rsp+20h] [rbp-38h]

  v7 = *(_QWORD *)(a2 + 8);
  v19 = (__m128i)(unsigned __int64)v7;
  ptr = malloc(8 * v7);
  if ( ptr )
  {
    if ( v7 <= 0 )
    {
LABEL_12:
      free(*(void **)(a2 + 16));
      v16 = _mm_load_si128(&v19);
      *(_QWORD *)(a2 + 16) = ptr;
      result = 0LL;
      *(__m128i *)a2 = v16;
      return result;
    }
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * v8);
      v10 = a1[6] + 24 * v9;
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 <= 0 )
        goto LABEL_13;
      v12 = *(_QWORD *)(v10 + 16);
      v13 = 0LL;
      while ( 1 )
      {
        v14 = *a1 + 16LL * *(_QWORD *)(v12 + 8 * v13);
        if ( a4 == *(unsigned __int8 *)(v14 + 8) && a3 == *(_QWORD *)v14 )
          break;
        if ( v11 == ++v13 )
          goto LABEL_13;
      }
      if ( *(_QWORD *)(v12 + 8 * v13) == -1LL )
      {
LABEL_13:
        v15 = sub_40A050((__int64)&v19, v10);
        if ( v15 )
        {
LABEL_14:
          v18 = v15;
          free(ptr);
          return v18;
        }
      }
      else
      {
        v15 = sub_409B80(a1, &v19, v9, a3, a4);
        if ( v15 )
          goto LABEL_14;
      }
      if ( *(_QWORD *)(a2 + 8) <= ++v8 )
        goto LABEL_12;
    }
  }
  return 12LL;
}

__int64 __fastcall sub_40A5C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v9; // rcx
  __int64 v10; // r13
  char *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r11
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  bool v21; // cc
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  char *v30; // r10
  size_t v31; // rdx
  __int64 v32; // r13
  char *v33; // rax

  v3 = *(_QWORD *)(a2 + 8);
  result = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a3 + 8);
    if ( v5 )
    {
      v9 = a1[1];
      v10 = *a1;
      v11 = (char *)a1[2];
      if ( v3 + v5 + v9 > v10 )
      {
        v32 = v3 + v5 + v10;
        v33 = (char *)realloc(v11, 8 * v32);
        v11 = v33;
        if ( !v33 )
          return 12LL;
        v9 = a1[1];
        v3 = *(_QWORD *)(a2 + 8);
        a1[2] = (__int64)v33;
        *a1 = v32;
        v5 = *(_QWORD *)(a3 + 8);
      }
      v12 = *(_QWORD *)(a2 + 16);
      v13 = *(_QWORD *)(a3 + 16);
      v14 = v9 + v3;
      v15 = v5 - 1;
      v16 = v3 - 1;
      v17 = v5 + v14;
      v18 = v9 - 1;
      v19 = *(_QWORD *)(v12 + 8 * v16);
      v20 = *(_QWORD *)(v13 + 8 * v15);
      while ( 1 )
      {
        v21 = v19 < v20;
        if ( v19 == v20 )
          break;
LABEL_6:
        if ( v21 )
        {
          if ( --v15 >= 0 )
            goto LABEL_8;
          goto LABEL_21;
        }
        if ( --v16 < 0 )
          goto LABEL_21;
        v19 = *(_QWORD *)(v12 + 8 * v16);
      }
      while ( 1 )
      {
        if ( v18 < 0 )
          goto LABEL_14;
        while ( 1 )
        {
          v22 = *(_QWORD *)&v11[8 * v18];
          if ( v22 <= v19 )
            break;
          if ( --v18 == -1 )
            goto LABEL_14;
        }
        if ( v22 != v19 )
        {
LABEL_14:
          --v17;
          *(_QWORD *)&v11[8 * v17] = v19;
        }
        if ( --v16 < 0 )
          break;
        if ( --v15 < 0 )
          break;
        v19 = *(_QWORD *)(v12 + 8 * v16);
LABEL_8:
        v20 = *(_QWORD *)(v13 + 8 * v15);
        v21 = v19 < v20;
        if ( v19 != v20 )
          goto LABEL_6;
      }
LABEL_21:
      v23 = a1[1];
      v24 = *(_QWORD *)(a3 + 8) + v23 + *(_QWORD *)(a2 + 8);
      v25 = v23 - 1;
      v26 = v24 - 1;
      v27 = v24 - v17;
      a1[1] = v27 + v23;
      if ( v27 <= 0 || v25 < 0 )
      {
        v31 = 8 * v27;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v28 = *(_QWORD *)&v11[8 * v26];
            v29 = *(_QWORD *)&v11[8 * v25];
            v30 = &v11[8 * v25 + 8 * v27];
            if ( v28 <= v29 )
              break;
            --v26;
            *(_QWORD *)v30 = v28;
            if ( !--v27 )
            {
              v11 = (char *)a1[2];
              v31 = 0LL;
              goto LABEL_29;
            }
          }
          --v25;
          *(_QWORD *)v30 = v29;
        }
        while ( v25 != -1 );
        v31 = 8 * v27;
        v11 = (char *)a1[2];
      }
LABEL_29:
      memcpy(v11, &v11[8 * v17], v31);
      return 0LL;
    }
  }
  return result;
}

char *__fastcall sub_40A780(_QWORD *a1, int *a2, _QWORD *a3, _QWORD *a4, const __m128i *a5)
{
  __int64 v6; // rdi
  _QWORD *v7; // r10
  int v8; // eax
  __int64 v9; // r9
  char *result; // rax
  __m128i *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // [rsp+8h] [rbp-20h]
  _QWORD *v14; // [rsp+10h] [rbp-18h]
  const __m128i *v15; // [rsp+18h] [rbp-10h]

  v6 = *a2;
  if ( (_DWORD)v6 == 15 )
  {
    v15 = a5;
    v14 = a4;
    v13 = a3;
    v7 = malloc(0x3C8uLL);
    if ( !v7 )
      return 0LL;
    v12 = (_QWORD *)*a1;
    v9 = 8LL;
    *a1 = v7;
    v6 = 0LL;
    a5 = v15;
    a4 = v14;
    a3 = v13;
    *v7 = v12;
    v8 = 1;
  }
  else
  {
    v7 = (_QWORD *)*a1;
    v8 = v6 + 1;
    v9 = (v6 << 6) + 8;
  }
  *a2 = v8;
  result = (char *)v7 + v9;
  v11 = (__m128i *)&v7[8 * v6];
  v11->m128i_i64[1] = 0LL;
  v11[1].m128i_i64[0] = (__int64)a3;
  v11[1].m128i_i64[1] = (__int64)a4;
  v11[3] = _mm_loadu_si128(a5);
  v11[3].m128i_i8[10] &= 0xF3u;
  v11[2].m128i_i64[0] = 0LL;
  v11[2].m128i_i64[1] = 0LL;
  v11[4].m128i_i64[0] = -1LL;
  if ( a3 )
    *a3 = result;
  if ( a4 )
    *a4 = result;
  return result;
}

char *__fastcall sub_40A860(_QWORD **a1, __int64 a2)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rbp
  __int64 *v4; // r14
  char *result; // rax
  _QWORD **v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1;
  v3 = *a1;
  v4 = &v8;
  while ( 1 )
  {
    result = sub_40A780((_QWORD *)(a2 + 112), (int *)(a2 + 128), 0LL, 0LL, (const __m128i *)(v2 + 5));
    *v4 = (__int64)result;
    if ( !result )
      break;
    *(_QWORD *)result = v3;
    v3 = (_QWORD *)*v4;
    *(_BYTE *)(*v4 + 50) |= 4u;
    if ( v2[1] )
    {
      v4 = v3 + 1;
      v2 = (_QWORD **)v2[1];
    }
    else
    {
      v6 = 0LL;
      while ( 1 )
      {
        v7 = v2[2];
        if ( v7 )
        {
          if ( v7 != v6 )
            break;
        }
        v3 = (_QWORD *)*v3;
        v6 = v2;
        if ( !*v2 )
          return (char *)v8;
        v2 = (_QWORD **)*v2;
      }
      v4 = v3 + 2;
      v2 = (_QWORD **)v2[2];
    }
  }
  return result;
}

char *__fastcall sub_40A910(_DWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbx
  char *v5; // rbp
  signed __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r13
  int *v9; // rsi
  _QWORD *v10; // rdi
  char *v11; // rbx
  char *v12; // r15
  char *v13; // r11
  __int64 v14; // rax
  char v15; // cl
  int *v17; // rsi
  _QWORD *v18; // rdi
  int *v19; // rsi
  _QWORD *v20; // rdi
  int *v21; // [rsp+8h] [rbp-60h]
  char *v22; // [rsp+10h] [rbp-58h]
  __m128i v24[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *a2;
  v5 = *(char **)(a3 + 8);
  if ( (a2[7] & 0x10) != 0 )
  {
    if ( !v5 )
    {
      v8 = (_QWORD *)(v4 + 112);
      v24[0].m128i_i8[8] = 8;
      v21 = (int *)(v4 + 128);
      v17 = (int *)(v4 + 128);
      v18 = (_QWORD *)(v4 + 112);
      v11 = sub_40A780((_QWORD *)(v4 + 112), (int *)(v4 + 128), 0LL, 0LL, v24);
      v24[0].m128i_i8[8] = 9;
      v13 = sub_40A780(v18, v17, 0LL, 0LL, v24);
      v12 = v13;
      goto LABEL_7;
    }
    v6 = *(_QWORD *)(a3 + 40);
    if ( v6 > 63 )
      return v5;
    v7 = *(_QWORD *)(v4 + 160);
    if ( !_bittest64(&v7, v6) )
      return v5;
    v8 = (_QWORD *)(v4 + 112);
    v24[0].m128i_i8[8] = 8;
    v21 = (int *)(v4 + 128);
    v9 = (int *)(v4 + 128);
    v10 = (_QWORD *)(v4 + 112);
    v11 = sub_40A780((_QWORD *)(v4 + 112), (int *)(v4 + 128), 0LL, 0LL, v24);
    v24[0].m128i_i8[8] = 9;
    v12 = sub_40A780(v10, v9, 0LL, 0LL, v24);
  }
  else
  {
    v8 = (_QWORD *)(v4 + 112);
    v24[0].m128i_i8[8] = 8;
    v21 = (int *)(v4 + 128);
    v19 = (int *)(v4 + 128);
    v20 = (_QWORD *)(v4 + 112);
    v11 = sub_40A780((_QWORD *)(v4 + 112), (int *)(v4 + 128), 0LL, 0LL, v24);
    v24[0].m128i_i8[8] = 9;
    v12 = sub_40A780(v20, v19, 0LL, 0LL, v24);
    v13 = v12;
    if ( !v5 )
      goto LABEL_7;
  }
  v24[0].m128i_i8[8] = 16;
  v13 = sub_40A780(v8, v21, v5, v12, v24);
LABEL_7:
  v24[0].m128i_i8[8] = 16;
  v22 = v13;
  v5 = sub_40A780(v8, v21, v11, v13, v24);
  if ( v5 && v22 && v11 && v12 )
  {
    v14 = *(_QWORD *)(a3 + 40);
    *((_QWORD *)v12 + 5) = v14;
    *((_QWORD *)v11 + 5) = v14;
    v15 = *(_BYTE *)(a3 + 50) & 8;
    v12[50] = v15 | v12[50] & 0xF7;
    v11[50] = v15 | v11[50] & 0xF7;
  }
  else
  {
    v5 = 0LL;
    *a1 = 12;
  }
  return v5;
}

__int64 __fastcall sub_40AB30(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  char *v5; // rax
  char *v6; // rax
  int v7[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v7[0] = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 48) == 17 )
    {
      v5 = sub_40A910(v7, a1, v2);
      *(_QWORD *)(a2 + 8) = v5;
      if ( v5 )
        *(_QWORD *)v5 = a2;
    }
  }
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 48) == 17 )
    {
      v6 = sub_40A910(v7, a1, v3);
      *(_QWORD *)(a2 + 16) = v6;
      if ( v6 )
        *(_QWORD *)v6 = a2;
    }
  }
  return (unsigned int)v7[0];
}

__int64 __fastcall sub_40ABB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  size_t v3; // rbx
  void *v4; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = v2;
  if ( v2 <= 0 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = 0LL;
    *(_OWORD *)a1 = 0LL;
  }
  else
  {
    v3 = 8 * v2;
    *(_QWORD *)a1 = v2;
    v4 = malloc(8 * v2);
    *(_QWORD *)(a1 + 16) = v4;
    if ( v4 )
    {
      memcpy(v4, *(const void **)(a2 + 16), v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      result = 12LL;
      *(_QWORD *)a1 = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_40AC30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // r10
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rsi
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 result; // rax
  __int64 v19; // rdx
  char *v20; // rdi
  __int64 v21; // r12

  if ( !a2 )
    goto LABEL_13;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !a3 || v3 <= 0 )
  {
    if ( v3 > 0 )
      return sub_40ABB0(a1, a2);
LABEL_13:
    if ( !a3 || *(__int64 *)(a3 + 8) <= 0 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      result = 0LL;
      *(_OWORD *)a1 = 0LL;
      return result;
    }
    a2 = a3;
    return sub_40ABB0(a1, a2);
  }
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 <= 0 )
    return sub_40ABB0(a1, a2);
  v7 = a2;
  *(_QWORD *)a1 = v3 + v4;
  v8 = malloc(8 * (v3 + v4));
  *(_QWORD *)(a1 + 16) = v8;
  if ( !v8 )
    return 12LL;
  v9 = v8;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  do
  {
    v14 = (__int64 *)(v10 + 8 * v13);
    if ( v4 <= v12 )
    {
      v21 = v3 - v13;
      v11 += v21;
      memcpy(v9, v14, 8 * v21);
      goto LABEL_20;
    }
    v15 = *(_QWORD *)(a3 + 16);
    v16 = *v14;
    ++v11;
    v17 = *(_QWORD *)(v15 + 8 * v12);
    if ( v16 <= v17 )
    {
      *v9 = v16;
      ++v13;
      v12 += v16 == v17;
    }
    else
    {
      ++v12;
      *v9 = v17;
    }
    v3 = *(_QWORD *)(v7 + 8);
    ++v9;
  }
  while ( v13 < v3 );
  v19 = *(_QWORD *)(a3 + 8);
  if ( v12 < v19 )
  {
    v20 = (char *)&v8[v11];
    v11 += v19 - v12;
    memcpy(v20, (const void *)(v15 + 8 * v12), 8 * (v19 - v12));
  }
LABEL_20:
  *(_QWORD *)(a1 + 8) = v11;
  return 0LL;
}

__int64 *__fastcall sub_40ADC0(_DWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // r10
  char v9; // r15
  __int64 *v11; // rax
  __int64 v12; // r11
  __int64 v13; // rbx
  __int64 v14; // r10
  unsigned int v15; // r9d
  __int64 *v16; // r14
  _QWORD *v18; // rax
  char v19; // cl
  bool v20; // cc
  __int64 v21; // r10
  __int64 *v22; // r12
  __int64 v23; // r14
  __int64 v24; // r15
  char v25; // bp
  __int64 v26; // rax
  int v27; // esi
  char v28; // bl
  int v29; // edi
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rax
  void *v33; // rax
  char *v34; // [rsp+0h] [rbp-58h]
  __int64 *v35; // [rsp+8h] [rbp-50h]
  __int64 v36; // [rsp+10h] [rbp-48h]

  v4 = *(_QWORD *)(a3 + 8);
  if ( !v4 )
  {
    *a1 = 0;
    return 0LL;
  }
  v5 = a4 + v4;
  if ( v4 > 0 )
  {
    v6 = *(_QWORD **)(a3 + 16);
    v7 = &v6[v4];
    do
      v5 += *v6++;
    while ( v7 != v6 );
  }
  v9 = a4;
  v11 = (__int64 *)(a2[8] + 24 * (v5 & a2[17]));
  v12 = *v11;
  if ( *v11 <= 0 )
  {
LABEL_12:
    v18 = calloc(0x70uLL, 1uLL);
    v16 = v18;
    if ( !v18 )
      goto LABEL_38;
    v34 = (char *)(v18 + 1);
    if ( (unsigned int)sub_40ABB0((__int64)(v18 + 1), a3) )
    {
      free(v16);
LABEL_38:
      v16 = 0LL;
      *a1 = 12;
      return v16;
    }
    v19 = v9;
    v20 = *(_QWORD *)(a3 + 8) <= 0LL;
    *((_BYTE *)v16 + 104) = v9 & 0xF | v16[13] & 0xF0;
    v16[10] = (__int64)v34;
    if ( v20 )
    {
LABEL_36:
      if ( (unsigned int)sub_408630(a2, v16, v5) )
      {
        sub_4096E0((void **)v16);
        goto LABEL_38;
      }
      return v16;
    }
    v36 = v5;
    v21 = 0LL;
    v35 = v16 + 3;
    v22 = v16;
    v23 = 0LL;
    v24 = a3;
    v25 = v19;
    while ( 1 )
    {
      v26 = *a2 + 16LL * *(_QWORD *)(*(_QWORD *)(v24 + 16) + 8 * v23);
      v27 = *(unsigned __int8 *)(v26 + 8);
      v28 = BYTE1(*(_DWORD *)(v26 + 8));
      v29 = (*(_DWORD *)(v26 + 8) >> 8) & 0x3FF;
      if ( v27 == 1 && !v29 )
        goto LABEL_34;
      v30 = v22[13] & 0xDF | (32 * ((v22[13] & 0x20) != 0 || (*(_BYTE *)(v26 + 10) & 0x10) != 0));
      *((_BYTE *)v22 + 104) = v30;
      if ( v27 == 2 )
      {
        *((_BYTE *)v22 + 104) = v30 | 0x10;
      }
      else if ( v27 == 4 )
      {
        *((_BYTE *)v22 + 104) = v30 | 0x40;
      }
      if ( !v29 )
        goto LABEL_34;
      if ( v34 == (char *)v22[10] )
      {
        v33 = malloc(0x18uLL);
        v22[10] = (__int64)v33;
        if ( !v33 )
        {
          sub_4096E0((void **)v22);
          goto LABEL_38;
        }
        if ( (unsigned int)sub_40ABB0((__int64)v33, v24) )
          goto LABEL_38;
        *((_BYTE *)v22 + 104) |= 0x80u;
        v21 = 0LL;
      }
      if ( (v28 & 1) != 0 )
      {
        if ( (v25 & 1) == 0 || (v28 & 2) != 0 )
          goto LABEL_30;
      }
      else if ( (v28 & 2) != 0 && (v25 & 1) != 0 )
      {
        goto LABEL_30;
      }
      if ( (v28 & 0x10) != 0 && (v25 & 2) == 0 || (v28 & 0x40) != 0 && (v25 & 4) == 0 )
      {
LABEL_30:
        v31 = v23 - v21;
        if ( v23 - v21 >= 0 )
        {
          v32 = v22[2];
          if ( v31 < v32 )
          {
            v22[2] = v32 - 1;
            sub_409C80(v22 + 2, v35, v31);
          }
        }
        ++v21;
      }
LABEL_34:
      if ( ++v23 >= *(_QWORD *)(v24 + 8) )
      {
        v16 = v22;
        v5 = v36;
        goto LABEL_36;
      }
    }
  }
  v13 = v11[2];
  v14 = 0LL;
  v15 = a4;
  while ( 1 )
  {
    v16 = *(__int64 **)(v13 + 8 * v14);
    if ( *v16 == v5 && (v16[13] & 0xF) == v15 && sub_407F60(v16[10], a3) )
      return v16;
    if ( ++v14 == v12 )
      goto LABEL_12;
  }
}

_QWORD *__fastcall sub_40B0C0(_DWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r9
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  char *v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // r8
  _QWORD *v19; // r9
  char v20; // dl
  __int64 v21; // rax
  int v22; // edi

  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 )
  {
    *a1 = 0;
    return 0LL;
  }
  if ( v3 > 0 )
  {
    v4 = *(_QWORD **)(a3 + 16);
    v5 = &v4[v3];
    do
      v3 += *v4++;
    while ( v5 != v4 );
  }
  v9 = (__int64 *)(a2[8] + 24 * (v3 & a2[17]));
  v10 = *v9;
  if ( *v9 <= 0 )
  {
LABEL_10:
    v14 = calloc(0x70uLL, 1uLL);
    v13 = v14;
    if ( v14 )
    {
      v15 = (char *)(v14 + 1);
      if ( (unsigned int)sub_40ABB0((__int64)(v14 + 1), a3) )
      {
        free(v13);
      }
      else
      {
        v16 = *(_QWORD *)(a3 + 8);
        v13[10] = v15;
        if ( v16 > 0 )
        {
          v17 = *(_QWORD **)(a3 + 16);
          v18 = *a2;
          v19 = &v17[v16];
          do
          {
            while ( 1 )
            {
              v21 = v18 + 16LL * *v17;
              v22 = *(unsigned __int8 *)(v21 + 8);
              if ( v22 == 1 )
                break;
              v20 = v13[13] & 0xDF | (32 * ((v13[13] & 0x20) != 0 || (*(_BYTE *)(v21 + 10) & 0x10) != 0));
              *((_BYTE *)v13 + 104) = v20;
              if ( v22 == 2 )
              {
                *((_BYTE *)v13 + 104) = v20 | 0x10;
              }
              else if ( v22 == 4 )
              {
                *((_BYTE *)v13 + 104) = v20 | 0x40;
              }
              else if ( v22 == 12 || (*(_DWORD *)(v21 + 8) & 0x3FF00) != 0 )
              {
                goto LABEL_21;
              }
LABEL_17:
              if ( v19 == ++v17 )
                goto LABEL_22;
            }
            if ( (*(_DWORD *)(v21 + 8) & 0x3FF00) == 0 )
              goto LABEL_17;
            *((_BYTE *)v13 + 104) = v13[13] & 0xDF | (32 * ((v13[13] & 0x20) != 0 || (*(_BYTE *)(v21 + 10) & 0x10) != 0));
LABEL_21:
            ++v17;
            *((_BYTE *)v13 + 104) |= 0x80u;
          }
          while ( v19 != v17 );
        }
LABEL_22:
        if ( !(unsigned int)sub_408630(a2, v13, v3) )
          return v13;
        sub_4096E0((void **)v13);
      }
    }
    *a1 = 12;
    return 0LL;
  }
  v11 = v9[2];
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD **)(v11 + 8 * v12);
    if ( *v13 == v3 && sub_407F60((__int64)(v13 + 1), a3) )
      return v13;
    if ( v10 == ++v12 )
      goto LABEL_10;
  }
}

__int64 __fastcall sub_40B2B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  __int64 result; // rax
  _QWORD *v10; // rax
  void *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // [rsp+0h] [rbp-4Ch] BYREF
  char v15[16]; // [rsp+4h] [rbp-48h] BYREF
  void *ptr; // [rsp+14h] [rbp-38h]

  if ( a4 <= 0 )
    return 0LL;
  for ( i = 0LL; i != a4; ++i )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(a2 + 8 * i);
      v13 = *(_QWORD *)(a3 + 8 * i);
      if ( v12 )
        break;
      *(_QWORD *)(a2 + 8 * i++) = v13;
      if ( a4 == i )
        return 0LL;
    }
    if ( v13 )
    {
      result = sub_40AC30((__int64)v15, v12 + 8, v13 + 8);
      v14 = result;
      if ( (_DWORD)result )
        return result;
      v10 = sub_40B0C0(&v14, a1, (__int64)v15);
      v11 = ptr;
      *(_QWORD *)(a2 + 8 * i) = v10;
      free(v11);
      result = v14;
      if ( v14 )
        return result;
    }
  }
  return 0LL;
}

__int64 __fastcall sub_40B360(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r11
  __int64 i; // rax
  __int64 v7; // r12
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 *v11; // r13
  __int64 *v13; // r15
  __int64 v14; // r10
  __int64 v15; // r9
  char v16; // al
  __int64 v17; // r10
  _QWORD *v18; // rax
  void *v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r14
  __int64 v23; // r14
  _QWORD *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  __int64 result; // rax
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // [rsp+0h] [rbp-98h]
  __int64 v32; // [rsp+8h] [rbp-90h]
  _QWORD *v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+18h] [rbp-80h]
  unsigned int v38; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v39; // [rsp+40h] [rbp-58h] BYREF
  __int64 v40; // [rsp+48h] [rbp-50h]
  void *ptr; // [rsp+50h] [rbp-48h]

  v5 = 0LL;
  for ( i = a1[25]; v5 < i; i = v8 )
  {
    v7 = a1[27];
    v8 = (v5 + i) / 2;
    if ( a3 <= *(_QWORD *)(v7 + 40 * v8 + 8) )
    {
      while ( v8 > v5 )
      {
        v30 = (v8 + v5) / 2;
        if ( a3 > *(_QWORD *)(v7 + 40 * v30 + 8) )
          goto LABEL_29;
        v8 = (v8 + v5) / 2;
      }
      break;
    }
    v30 = (v5 + i) / 2;
    v8 = i;
LABEL_29:
    v5 = v30 + 1;
  }
  if ( a1[25] <= v5 )
    return 0LL;
  v9 = a1[27];
  v35 = 40 * v5;
  if ( *(_QWORD *)(v9 + 40 * v5 + 8) != a3 || v5 == -1 )
    return 0LL;
  v11 = (__int64 *)a1[19];
  v31 = (__int64 *)(a2 + 16);
  while ( 2 )
  {
    v13 = (__int64 *)(v9 + v35);
    while ( 1 )
    {
      if ( !sub_409B10(*(_QWORD *)(a2 + 8), v31, *v13) )
        goto LABEL_19;
      v22 = a3 + v13[3] - v13[2];
      if ( a3 == v22 )
        break;
      v14 = 8 * v22 + a1[23];
      v32 = *(_QWORD *)(v11[3] + 8 * v20);
      if ( *(_QWORD *)v14 )
      {
        if ( sub_409B10(
               *(_QWORD *)(*(_QWORD *)v14 + 16LL),
               (__int64 *)(*(_QWORD *)v14 + 24LL),
               *(_QWORD *)(v11[3] + 8 * v20)) )
        {
          goto LABEL_19;
        }
        v38 = sub_40ABB0((__int64)&v39, v15 + 8);
        v16 = sub_408500(&v39, v32);
        if ( v38 || v16 != 1 )
        {
          free(ptr);
          result = v38;
          if ( v38 )
            return result;
          return 12LL;
        }
        v17 = a1[23] + 8 * v22;
      }
      else
      {
        v34 = 8 * v22 + a1[23];
        v39 = 1LL;
        v40 = 1LL;
        v29 = malloc(8uLL);
        ptr = v29;
        if ( !v29 )
          return 12LL;
        v38 = 0;
        v17 = v34;
        *v29 = v32;
      }
      v33 = (_QWORD *)v17;
      v18 = sub_40B0C0(&v38, v11, (__int64)&v39);
      v19 = ptr;
      *v33 = v18;
      free(v19);
      if ( !*(_QWORD *)(a1[23] + 8 * v22) )
      {
        result = v38;
        if ( v38 )
          return result;
      }
LABEL_19:
      v13 += 5;
      if ( !*((_BYTE *)v13 - 8) )
        return 0LL;
    }
    v23 = **(_QWORD **)(v11[5] + 24 * v20 + 16);
    if ( sub_409B10(v21, v31, v23) )
      goto LABEL_19;
    v39 = 1LL;
    v40 = 1LL;
    v24 = malloc(8uLL);
    ptr = v24;
    if ( v24 )
    {
      *v24 = v23;
      v25 = 0;
    }
    else
    {
      v40 = 0LL;
      v25 = 12;
      v39 = 0LL;
    }
    v38 = v25;
    v26 = sub_40A480(v11, (__int64)&v39, a4, a5);
    v27 = sub_40A050(a2, (__int64)&v39);
    free(ptr);
    result = v38;
    if ( !(v38 | v27 | v26) )
    {
      v9 = a1[27];
      continue;
    }
    break;
  }
  if ( !v38 )
  {
    result = v27;
    if ( v26 )
      return v26;
  }
  return result;
}

__int64 __fastcall sub_40B6F0(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // r12
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  signed __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // r9
  _QWORD *v13; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-50h]
  _QWORD *v17; // [rsp+8h] [rbp-50h]
  _QWORD *v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  _QWORD *v20; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD **)(a1 + 152);
  if ( *a2 <= 0 )
    return 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*a3 + 8 * v6);
      v8 = *v4 + 16 * v7;
      if ( *(_BYTE *)(v8 + 8) == 8 )
      {
        v9 = *(_QWORD *)v8;
        if ( v9 <= 63 )
        {
          v10 = v4[20];
          if ( _bittest64(&v10, v9) )
            break;
        }
      }
      if ( ++v6 >= *a2 )
        return 0LL;
    }
    v11 = *(_QWORD *)(a1 + 232);
    v12 = *(_QWORD **)(a1 + 248);
    if ( v11 == *(_QWORD *)(a1 + 240) )
      break;
LABEL_8:
    v18 = v12;
    v16 = v11;
    v20 = a3;
    v13 = calloc(1uLL, 0x30uLL);
    v18[v16] = v13;
    if ( !v13 )
      return 12LL;
    *v13 = a4;
    a3 = v20;
    ++v6;
    v13[1] = v7;
    *(_QWORD *)(a1 + 232) = v16 + 1;
    if ( v6 >= *a2 )
      return 0LL;
  }
  v17 = a3;
  v19 = 2 * v11;
  v15 = realloc(*(void **)(a1 + 248), 16 * v11);
  a3 = v17;
  v12 = v15;
  if ( v15 )
  {
    *(_QWORD *)(a1 + 248) = v15;
    v11 = *(_QWORD *)(a1 + 232);
    *(_QWORD *)(a1 + 240) = v19;
    goto LABEL_8;
  }
  return 12LL;
}

__int64 __fastcall sub_40B840(__int64 a1, __int64 a2, char a3)
{
  wint_t v3; // ebx
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a2 < 0 )
    return *(unsigned int *)(a1 + 112);
  if ( *(_QWORD *)(a1 + 88) == a2 )
    return (a3 & 2) == 0 ? 10 : 8;
  if ( *(int *)(a1 + 144) <= 1 )
  {
    v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + a2);
    result = 1LL;
    if ( ((*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * (v5 >> 6)) >> v5) & 1) != 0 )
      return result;
    result = 0LL;
    if ( (_BYTE)v5 != 10 )
      return result;
    return 2 * (unsigned int)(*(_BYTE *)(a1 + 141) != 0);
  }
  while ( 1 )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * a2);
    if ( v3 != -1 )
      break;
    if ( --a2 == -1 )
      return *(unsigned int *)(a1 + 112);
  }
  if ( *(_BYTE *)(a1 + 142) && (iswalnum(v3) || v3 == 95) )
    return 1LL;
  result = 0LL;
  if ( v3 == 10 )
    return 2 * (unsigned int)(*(_BYTE *)(a1 + 141) != 0);
  return result;
}

__int64 __fastcall sub_40B930(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // cl
  unsigned __int8 v4; // al
  bool v5; // zf
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx

  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + a3);
  v4 = *(_BYTE *)(a2 + 8);
  if ( v4 == 3 )
  {
    result = 0LL;
    if ( ((*(_QWORD *)(*(_QWORD *)a2 + 8 * ((__int64)(unsigned __int8)v3 >> 6)) >> v3) & 1) == 0 )
      return result;
  }
  else if ( v4 <= 3u )
  {
    v5 = v4 == 1;
    result = 0LL;
    if ( !v5 || *(_BYTE *)a2 != v3 )
      return result;
  }
  else
  {
    if ( v4 != 5 )
    {
      v5 = v4 == 7;
      result = 0LL;
      if ( !v5 || v3 < 0 )
        return result;
    }
    if ( v3 == 10 )
    {
      result = 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 152) + 216LL) & 0x40) == 0 )
        return result;
    }
    else if ( !v3 )
    {
      result = 0LL;
      if ( *(char *)(*(_QWORD *)(a1 + 152) + 216LL) < 0 )
        return result;
    }
  }
  v7 = *(_DWORD *)(a2 + 8);
  result = 1LL;
  if ( (v7 & 0x3FF00) == 0 )
    return result;
  v8 = v7 >> 8;
  v9 = sub_40B840(a1, a3, *(_DWORD *)(a1 + 160));
  v10 = v9;
  if ( (v8 & 4) != 0 )
  {
    result = 0LL;
    if ( (v10 & 1) == 0 || (v8 & 8) != 0 )
      return result;
  }
  else if ( (v8 & 8) != 0 && (v9 & 1) != 0 )
  {
    return 0LL;
  }
  if ( (v8 & 0x20) == 0 || (result = 0LL, (v10 & 2) != 0) )
  {
    result = 1LL;
    v11 = (v10 >> 3) & 1;
    if ( (v8 & 0x80) != 0 )
      return v11;
  }
  return result;
}

__int64 __fastcall sub_40BA60(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  char v6; // al
  __int64 v7; // rsi
  int v8; // ebp
  int v9; // r11d
  int v10; // r10d
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // ecx

  v6 = sub_40B840(a1, a4, *(_DWORD *)(a1 + 160));
  if ( a2 > 0 )
  {
    v7 = 0LL;
    v8 = v6 & 8;
    v9 = v6 & 2;
    v10 = v6 & 1;
    do
    {
      result = *(_QWORD *)(*a3 + 8 * v7);
      v12 = **(_QWORD **)(a1 + 152) + 16 * result;
      v13 = *(_DWORD *)(v12 + 8) >> 8;
      if ( *(_BYTE *)(v12 + 8) == 2 )
      {
        if ( (v13 & 0x3FF) == 0 )
          return result;
        if ( (v13 & 4) != 0 )
        {
          if ( !v10 || (v13 & 8) != 0 )
            goto LABEL_15;
        }
        else if ( (v13 & 8) != 0 && v10 )
        {
          goto LABEL_15;
        }
        if ( ((v13 & 0x20) == 0 || v9) && ((v13 & 0x80) == 0 || v8) )
          return result;
      }
LABEL_15:
      ++v7;
    }
    while ( v7 != a2 );
  }
  return 0LL;
}

__int64 __fastcall sub_40BB30(__int64 a1, __int64 a2, int a3)
{
  int v3; // r10d
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // r14
  size_t v14; // r14
  int v15; // eax
  bool v16; // cc
  char v17; // dl
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r11
  __int64 v28; // r13
  size_t v29; // r12
  size_t v30; // rax
  wchar_t v31; // edx
  signed __int64 v32; // r12
  int v33; // eax
  __int64 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  signed __int64 v47; // rdx
  _DWORD *v48; // rax
  _DWORD *v49; // rcx
  unsigned __int64 v50; // rcx
  __int64 v51; // r13
  char *v52; // r12
  __int64 v53; // rcx
  char *v54; // rsi
  signed __int64 v55; // rdx
  size_t v56; // rax
  size_t v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  signed __int64 v60; // r13
  signed __int64 v61; // rax
  __int64 v62; // rdx
  _DWORD *v63; // rax
  _DWORD *v64; // rdx
  __int64 v65; // rsi
  int v66; // esi
  __int64 v67; // rax
  int v68; // [rsp+4h] [rbp-74h]
  int v69; // [rsp+4h] [rbp-74h]
  wchar_t v70; // [rsp+4h] [rbp-74h]
  __int64 v71; // [rsp+18h] [rbp-60h]
  wchar_t v72; // [rsp+2Ch] [rbp-4Ch] BYREF
  char v73[6]; // [rsp+32h] [rbp-46h] BYREF
  wint_t wc[2]; // [rsp+38h] [rbp-40h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = a2 - v6;
  if ( v6 <= a2 )
    goto LABEL_5;
  if ( *(int *)(a1 + 144) > 1 )
    *(_QWORD *)(a1 + 32) = 0LL;
  v8 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 48) = 0LL;
  v7 = a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 88) = v8;
  v9 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 104) = v9;
  *(_BYTE *)(a1 + 140) = 0;
  v10 = *(_BYTE *)(a1 + 139) == 0;
  *(_DWORD *)(a1 + 112) = (a3 & 1) == 0 ? 6 : 4;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
    if ( a2 )
    {
LABEL_6:
      v11 = *(_QWORD *)(a1 + 56);
      v12 = *(_BYTE *)(a1 + 140);
      v13 = *(_QWORD *)(a1 + 48);
      if ( v11 > v7 )
      {
        if ( !v12 )
        {
          v14 = v13 - v7;
          v15 = sub_40B840(a1, v7 - 1, v3);
          v16 = *(_DWORD *)(a1 + 144) <= 1;
          *(_DWORD *)(a1 + 112) = v15;
          if ( !v16 )
          {
            memmove(*(void **)(a1 + 16), (const void *)(*(_QWORD *)(a1 + 16) + 4 * v7), 4 * v14);
            v14 = *(_QWORD *)(a1 + 48) - v7;
          }
          v17 = *(_BYTE *)(a1 + 139);
          if ( v17 )
          {
            memmove(*(void **)(a1 + 8), (const void *)(*(_QWORD *)(a1 + 8) + v7), v14);
            v17 = *(_BYTE *)(a1 + 139);
            v14 = *(_QWORD *)(a1 + 48) - v7;
          }
          *(_QWORD *)(a1 + 56) -= v7;
          *(_QWORD *)(a1 + 48) = v14;
          goto LABEL_13;
        }
        v34 = *(_QWORD *)(a1 + 24);
        v35 = *(_QWORD *)(a1 + 48);
        v36 = 0LL;
        do
        {
          v37 = (v36 + v35) / 2;
          v38 = *(_QWORD *)(v34 + 8 * v37);
          v39 = v37;
          if ( v38 <= v7 )
          {
            if ( v38 >= v7 )
            {
              v40 = (v36 + v35) / 2;
              v39 = v37 - 1;
              goto LABEL_56;
            }
            v36 = v37 + 1;
          }
          else
          {
            v35 = (v36 + v35) / 2;
          }
        }
        while ( v36 < v35 );
        v40 = v37 + 1;
        if ( v38 >= v7 )
        {
          v40 = v37;
          v39 = v37 - 1;
        }
LABEL_56:
        *(_DWORD *)(a1 + 112) = sub_40B840(a1, v39, v3);
        if ( v7 == v40 && v7 < v13 && *(_QWORD *)(v34 + 8 * v40) == v7 )
        {
          memmove(*(void **)(a1 + 16), (const void *)(*(_QWORD *)(a1 + 16) + 4 * v7), 4 * (v13 - v7));
          memmove(*(void **)(a1 + 8), (const void *)(*(_QWORD *)(a1 + 8) + v7), *(_QWORD *)(a1 + 48) - v7);
          v41 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)(a1 + 56) -= v7;
          v42 = v41 - v7;
          *(_QWORD *)(a1 + 48) = v42;
          if ( v42 > 0 )
          {
            v43 = *(_QWORD *)(a1 + 24);
            v44 = 0LL;
            do
            {
              *(_QWORD *)(v43 + 8 * v44) = *(_QWORD *)(v43 + 8 * v7 + 8 * v44) - v7;
              ++v44;
            }
            while ( *(_QWORD *)(a1 + 48) > v44 );
          }
          LODWORD(v18) = *(_DWORD *)(a1 + 144);
          v17 = *(_BYTE *)(a1 + 139);
          v19 = *(_QWORD *)(a1 + 88) - v7;
          v20 = *(_QWORD *)(a1 + 104) - v7;
LABEL_14:
          if ( v17 )
            goto LABEL_16;
          goto LABEL_15;
        }
        v45 = *(_QWORD *)(a1 + 80);
        v46 = *(_QWORD *)(a1 + 96);
        *(_BYTE *)(a1 + 140) = 0;
        v19 = v45 - v4;
        v20 = v46 - v4;
        *(_QWORD *)(a1 + 88) = v19 + v7;
        *(_QWORD *)(a1 + 104) = v20 + v7;
        if ( v40 > 0 )
        {
          do
          {
            if ( *(_QWORD *)(v34 + 8 * v40 - 8) != v7 )
              break;
            --v40;
          }
          while ( v40 );
        }
        if ( v40 >= v13 )
        {
          if ( v40 == v13 )
          {
LABEL_98:
            *(_QWORD *)(a1 + 48) = 0LL;
            v47 = 0LL;
LABEL_76:
            *(_QWORD *)(a1 + 56) = v47;
            LODWORD(v18) = *(_DWORD *)(a1 + 144);
            v17 = *(_BYTE *)(a1 + 139);
            goto LABEL_14;
          }
        }
        else
        {
          while ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v40) == -1 )
          {
            if ( ++v40 == v13 )
              goto LABEL_98;
          }
        }
        v47 = *(_QWORD *)(v34 + 8 * v40) - v7;
        *(_QWORD *)(a1 + 48) = v47;
        if ( v47 )
        {
          if ( v47 > 0 )
          {
            v48 = *(_DWORD **)(a1 + 16);
            v49 = &v48[v47];
            do
              *v48++ = -1;
            while ( v49 != v48 );
          }
          memset(*(void **)(a1 + 8), 255, v47);
          v47 = *(_QWORD *)(a1 + 48);
          v19 = *(_QWORD *)(a1 + 88) - v7;
          v20 = *(_QWORD *)(a1 + 104) - v7;
        }
        goto LABEL_76;
      }
      if ( v12 )
      {
        v62 = *(_QWORD *)(a1 + 80);
        *(_BYTE *)(a1 + 140) = 0;
        *(_QWORD *)(a1 + 88) = v7 + v62 - a2;
        *(_QWORD *)(a1 + 104) = v7 + *(_QWORD *)(a1 + 96) - a2;
      }
      v18 = *(int *)(a1 + 144);
      v27 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 48) = 0LL;
      if ( (int)v18 <= 1 )
      {
        v22 = *(unsigned __int8 *)(v27 + v7 + *(_QWORD *)a1 - 1);
        v23 = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 56) = 0LL;
        if ( v23 )
          LOBYTE(v22) = *(_BYTE *)(v23 + v22);
        v24 = 1;
        if ( ((*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * ((__int64)(unsigned __int8)v22 >> 6)) >> v22) & 1) == 0 )
        {
          v24 = 0;
          if ( (_BYTE)v22 == 10 )
            v24 = 2 * (*(_BYTE *)(a1 + 141) != 0);
        }
        v25 = *(_QWORD *)(a1 + 88);
        v26 = *(_QWORD *)(a1 + 104);
        *(_DWORD *)(a1 + 112) = v24;
        v19 = v25 - v7;
        v20 = v26 - v7;
        if ( *(_BYTE *)(a1 + 139) )
        {
          *(_QWORD *)(a1 + 40) = v4;
          *(_QWORD *)(a1 + 88) = v19;
          *(_QWORD *)(a1 + 104) = v20;
LABEL_31:
          if ( *(_BYTE *)(a1 + 139) )
          {
            if ( *(_BYTE *)(a1 + 136) )
            {
              sub_408760((_QWORD *)a1);
            }
            else
            {
              v58 = *(_QWORD *)(a1 + 120);
              if ( v58 )
              {
                v59 = *(_QWORD *)(a1 + 48);
                if ( *(_QWORD *)(a1 + 64) <= v19 )
                  v19 = *(_QWORD *)(a1 + 64);
                if ( v19 > v59 )
                {
                  while ( 1 )
                  {
                    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v59) = *(_BYTE *)(v58
                                                                     + *(unsigned __int8 *)(v59 + *(_QWORD *)a1 + v4));
                    if ( v19 == ++v59 )
                      break;
                    v4 = *(_QWORD *)(a1 + 40);
                    v58 = *(_QWORD *)(a1 + 120);
                  }
                }
                else
                {
                  v19 = *(_QWORD *)(a1 + 48);
                }
                *(_QWORD *)(a1 + 48) = v19;
                *(_QWORD *)(a1 + 56) = v19;
              }
            }
          }
          else
          {
            *(_QWORD *)(a1 + 48) = v19;
          }
          goto LABEL_19;
        }
LABEL_15:
        *(_QWORD *)(a1 + 8) += v7;
        goto LABEL_16;
      }
      if ( *(_BYTE *)(a1 + 137) )
      {
        v50 = *(_QWORD *)a1;
        v51 = *(_QWORD *)a1 + v27;
        v52 = (char *)(v51 + v7 - 1);
        if ( *(_QWORD *)a1 < (unsigned __int64)(v51 + v7 - v18) )
          v50 = v51 + v7 - v18;
        if ( v50 <= (unsigned __int64)v52 )
        {
          while ( (*v52 & 0xC0) == 0x80 )
          {
            if ( v50 > (unsigned __int64)--v52 )
              goto LABEL_37;
          }
          v53 = *(_QWORD *)(a1 + 120);
          v54 = v52;
          v55 = v51 + *(_QWORD *)(a1 + 88) - (_QWORD)v52;
          if ( v53 )
          {
            LODWORD(v65) = 6;
            if ( v55 <= 6 )
              v65 = v51 + *(_QWORD *)(a1 + 88) - (_QWORD)v52;
            v66 = v65 - 1;
            v67 = v66;
            if ( v66 >= 0 )
            {
              do
              {
                v73[v67] = *(_BYTE *)(v53 + (unsigned __int8)v52[v67]);
                --v67;
              }
              while ( (int)v67 >= 0 );
            }
            v54 = v73;
          }
          v69 = v3;
          *(_QWORD *)wc = 0LL;
          v56 = sub_407DD0(&v72, v54, v55, (mbstate_t *)wc);
          v3 = v69;
          v57 = v51 + v7 - (_QWORD)v52;
          if ( v57 <= v56 && v56 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v61 = v56 - v57;
            v31 = v72;
            *(_QWORD *)(a1 + 32) = 0LL;
            v32 = v61;
            *(_QWORD *)(a1 + 48) = v61;
            if ( v31 != -1 )
              goto LABEL_41;
          }
          v27 = *(_QWORD *)(a1 + 40);
          v11 = *(_QWORD *)(a1 + 56);
        }
      }
LABEL_37:
      v28 = v27 + v11;
      if ( v4 <= v27 + v11 )
      {
        v60 = v28 - v4;
        *(_QWORD *)(a1 + 48) = v60;
        v32 = v60;
      }
      else
      {
        do
        {
          v68 = v3;
          v29 = *(_QWORD *)(a1 + 80) - v28;
          v71 = *(_QWORD *)(a1 + 32);
          v30 = sub_407DD0((wchar_t *)wc, (char *)(v28 + *(_QWORD *)a1), v29, (mbstate_t *)(a1 + 32));
          v31 = wc[0];
          v3 = v68;
          if ( v30 - 1 > 0xFFFFFFFFFFFFFFFCLL )
          {
            if ( v30 && v29 )
              v31 = *(unsigned __int8 *)(*(_QWORD *)a1 + v28);
            else
              v31 = 0;
            *(_QWORD *)(a1 + 32) = v71;
            v30 = 1LL;
          }
          v28 += v30;
        }
        while ( v4 > v28 );
        v32 = v28 - v4;
        *(_QWORD *)(a1 + 48) = v28 - v4;
        if ( v31 != -1 )
        {
LABEL_41:
          if ( *(_BYTE *)(a1 + 142) && ((v70 = v31, iswalnum(v31)) || (v31 = v70, v70 == 95)) )
          {
            v33 = 1;
          }
          else
          {
            v33 = 0;
            if ( v31 == 10 )
              v33 = 2 * (*(_BYTE *)(a1 + 141) != 0);
          }
          *(_DWORD *)(a1 + 112) = v33;
LABEL_45:
          if ( v32 )
          {
            if ( v32 > 0 )
            {
              v63 = *(_DWORD **)(a1 + 16);
              v64 = &v63[v32];
              do
                *v63++ = -1;
              while ( v64 != v63 );
            }
            v17 = *(_BYTE *)(a1 + 139);
            if ( !v17 )
              goto LABEL_47;
            memset(*(void **)(a1 + 8), 255, v32);
            v32 = *(_QWORD *)(a1 + 48);
          }
          v17 = *(_BYTE *)(a1 + 139);
LABEL_47:
          *(_QWORD *)(a1 + 56) = v32;
LABEL_13:
          LODWORD(v18) = *(_DWORD *)(a1 + 144);
          v19 = *(_QWORD *)(a1 + 88) - v7;
          v20 = *(_QWORD *)(a1 + 104) - v7;
          goto LABEL_14;
        }
      }
      *(_DWORD *)(a1 + 112) = sub_40B840(a1, v13 - 1, v3);
      goto LABEL_45;
    }
  }
  else
  {
LABEL_5:
    if ( v7 )
      goto LABEL_6;
  }
  LODWORD(v18) = *(_DWORD *)(a1 + 144);
  v19 = *(_QWORD *)(a1 + 88);
  v20 = *(_QWORD *)(a1 + 104);
LABEL_16:
  *(_QWORD *)(a1 + 40) = v4;
  *(_QWORD *)(a1 + 88) = v19;
  *(_QWORD *)(a1 + 104) = v20;
  if ( (int)v18 <= 1 )
    goto LABEL_31;
  if ( !*(_BYTE *)(a1 + 136) )
  {
    sub_4087E0(a1);
LABEL_19:
    *(_QWORD *)(a1 + 72) = 0LL;
    return 0LL;
  }
  result = sub_408990(a1);
  if ( !(_DWORD)result )
    goto LABEL_19;
  return result;
}

__int64 __fastcall sub_40C320(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 *v10; // r11
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r11
  void *v22; // rdi
  __int64 v24; // [rsp+0h] [rbp-70h]
  unsigned int v25; // [rsp+0h] [rbp-70h]
  __int64 v26; // [rsp+8h] [rbp-68h]
  __int128 v28; // [rsp+18h] [rbp-58h] BYREF
  void *ptr; // [rsp+28h] [rbp-48h] BYREF

  v5 = a1[7];
  v28 = 0LL;
  v6 = v5 + 24 * a2;
  ptr = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 > 0 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8 * v8);
      if ( a2 != v12 && (*(_BYTE *)(*a1 + 16 * v12 + 8) & 8) != 0 )
      {
        v13 = *(__int64 **)(24 * v12 + a1[5] + 16);
        v26 = 24 * v12 + a1[5];
        v24 = *v13;
        v14 = sub_409B10(v7, (__int64 *)(v6 + 16), *v13);
        if ( *(__int64 *)(v26 + 8) > 1 )
        {
          if ( !v14 && sub_409B10(*(_QWORD *)(a3 + 8), (__int64 *)(a3 + 16), v24)
            || (v15 = v13[1], v15 > 0)
            && !sub_409B10(v7, v10, v15)
            && sub_409B10(*(_QWORD *)(a3 + 8), (__int64 *)(a3 + 16), v16) )
          {
LABEL_5:
            v11 = sub_40A5C0((__int64 *)&v28, a4, v9 + a1[7]);
            if ( v11 )
            {
              v25 = v11;
              free(ptr);
              return v25;
            }
            v7 = *(_QWORD *)(v6 + 8);
          }
        }
        else if ( !v14 && sub_409B10(*(_QWORD *)(a3 + 8), (__int64 *)(a3 + 16), v24) )
        {
          goto LABEL_5;
        }
      }
      if ( v7 <= ++v8 )
      {
        v17 = 0LL;
        if ( v7 > 0 )
        {
          do
          {
            if ( !sub_409B10(*((__int64 *)&v28 + 1), (__int64 *)&ptr, *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8 * v17)) )
            {
              v20 = sub_409B10(*(_QWORD *)(a3 + 8), (__int64 *)(a3 + 16), v18) - 1;
              if ( v20 >= 0 && v20 < v21 )
              {
                *(_QWORD *)(a3 + 8) = v21 - 1;
                sub_409C80((_QWORD *)(a3 + 8), (__int64 *)(a3 + 16), v20);
              }
            }
            v17 = v19 + 1;
          }
          while ( *(_QWORD *)(v6 + 8) > v17 );
        }
        v22 = ptr;
        goto LABEL_25;
      }
    }
  }
  v22 = 0LL;
LABEL_25:
  free(v22);
  return 0LL;
}

bool __fastcall sub_40C550(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  bool v3; // cc
  __int64 v4; // r12
  unsigned __int8 *v6; // r15
  int v7; // ebp
  __int16 v8; // ax
  __int64 v9; // rbp
  void *v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r15
  char *v13; // r13
  __int64 v14; // r12
  __int64 *v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 mm; // rax
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 nn; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *i1; // rdi
  __int64 v26; // rax
  void **v27; // rbp
  void *v28; // rdi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 n; // rcx
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 m; // rdx
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rbp
  __m128i *v40; // r12
  __int64 v41; // rcx
  __int64 jj; // rax
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rdi
  __int64 kk; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  char *v50; // rdx
  __m128i *v51; // rax
  __m128i *v52; // rax
  __int64 v53; // rbp
  char *v54; // r13
  _QWORD *v55; // rax
  void **v56; // rbx
  void *v57; // rdi
  __int64 v58; // rsi
  __int64 j; // rdx
  __int64 v60; // rdx
  __int8 v61; // dh
  __int64 v62; // rcx
  __int64 k; // rdx
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 ii; // rdx
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 i; // rdx
  void **v70; // rbx
  void *v71; // rdi
  __int64 *v72; // rax
  char v73; // di
  __int64 *v74; // rax
  char *v75; // rsi
  __int64 v76; // r9
  __int64 v77; // r15
  __int64 v78; // r9
  __int64 v79; // rsi
  void *v80; // rax
  __int64 v81; // rax
  __m128i *v82; // rdx
  _QWORD *v83; // rbp
  __int64 *v84; // r11
  unsigned __int64 v85; // rax
  _QWORD *v86; // r8
  __int64 i2; // rcx
  __int64 *v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // r9
  __int64 v91; // r10
  char *ptr; // [rsp+8h] [rbp-E0h]
  _QWORD *ptra; // [rsp+8h] [rbp-E0h]
  __int64 v94; // [rsp+10h] [rbp-D8h]
  int v95; // [rsp+10h] [rbp-D8h]
  _QWORD *v96; // [rsp+10h] [rbp-D8h]
  __int64 v97; // [rsp+18h] [rbp-D0h]
  char *v98; // [rsp+18h] [rbp-D0h]
  char *v99; // [rsp+20h] [rbp-C8h]
  char *v100; // [rsp+28h] [rbp-C0h]
  char v101; // [rsp+30h] [rbp-B8h]
  _QWORD *v102; // [rsp+30h] [rbp-B8h]
  __int64 v103; // [rsp+30h] [rbp-B8h]
  __int64 v104; // [rsp+38h] [rbp-B0h]
  __int64 v105; // [rsp+40h] [rbp-A8h]
  __m128i v107; // [rsp+50h] [rbp-98h] BYREF
  __m128i v108; // [rsp+60h] [rbp-88h] BYREF
  __m128i v109; // [rsp+70h] [rbp-78h] BYREF
  void *v110[2]; // [rsp+80h] [rbp-68h] BYREF
  __m128i v111; // [rsp+90h] [rbp-58h] BYREF
  __m128i v112; // [rsp+A0h] [rbp-48h] BYREF
  char v113; // [rsp+B0h] [rbp-38h] BYREF

  v99 = (char *)malloc(0x3800uLL);
  if ( !v99 )
    return 0;
  v2 = a2;
  v107 = 0LL;
  v3 = a2[2] <= 0LL;
  v108 = 0LL;
  ptr = v99 + 6144;
  a2[11] = 0LL;
  a2[12] = 0LL;
  if ( v3 )
  {
    free(v99);
LABEL_133:
    v80 = calloc(8uLL, 0x100uLL);
    a2[11] = v80;
    return v80 != 0LL;
  }
  v4 = 0LL;
  v97 = 0LL;
  do
  {
    v6 = (unsigned __int8 *)(*(_QWORD *)a1 + 16LL * *(_QWORD *)(v2[3] + 8 * v97));
    v7 = v6[8];
    v8 = (*((_DWORD *)v6 + 2) >> 8) & 0x3FF;
    if ( v7 == 1 )
    {
      *(__int64 *)((char *)v107.m128i_i64 + (((unsigned __int64)*v6 >> 3) & 0x18)) |= 1LL << *v6;
    }
    else if ( v7 == 3 )
    {
      v68 = *(_QWORD *)v6;
      for ( i = 0LL; i != 4; ++i )
        v107.m128i_i64[i] |= *(_QWORD *)(v68 + i * 8);
    }
    else
    {
      if ( v7 == 5 )
      {
        if ( *(int *)(a1 + 180) <= 1 )
        {
          v107 = (__m128i)-1LL;
          v108 = (__m128i)-1LL;
        }
        else
        {
          v58 = *(_QWORD *)(a1 + 120);
          for ( j = 0LL; j != 4; ++j )
            v107.m128i_i64[j] |= *(_QWORD *)(v58 + j * 8);
        }
      }
      else
      {
        if ( v7 != 7 )
          goto LABEL_8;
        v107 = (__m128i)-1LL;
      }
      v60 = *(_QWORD *)(a1 + 216);
      if ( (v60 & 0x40) == 0 )
        v107.m128i_i64[0] &= ~0x400uLL;
      if ( (v60 & 0x80) != 0 )
        v107.m128i_i64[0] &= ~1uLL;
    }
    if ( v8 )
    {
      if ( (v8 & 0x20) != 0 )
      {
        v61 = v107.m128i_i8[1];
        v107 = 0LL;
        v108 = 0LL;
        if ( (v61 & 4) == 0 )
          goto LABEL_8;
        v107.m128i_i64[0] = 1024LL;
      }
      if ( (v8 & 0x80u) != 0 )
        goto LABEL_76;
      if ( (v8 & 4) == 0 )
      {
LABEL_51:
        if ( (v8 & 8) != 0 )
        {
          if ( v7 == 1 && (v6[10] & 0x40) != 0 )
            goto LABEL_76;
          if ( *(int *)(a1 + 180) <= 1 )
          {
            v62 = 0LL;
            for ( k = 0LL; k != 4; ++k )
            {
              v64 = v107.m128i_i64[k] & ~*(_QWORD *)(a1 + 8 * k + 184);
              v107.m128i_i64[k] = v64;
              v62 |= v64;
            }
            if ( !v62 )
              goto LABEL_8;
          }
          else
          {
            v34 = *(_QWORD *)(a1 + 120);
            v35 = 0LL;
            for ( m = 0LL; m != 4; ++m )
            {
              v37 = v107.m128i_i64[m] & ~(*(_QWORD *)(v34 + 8 * m) & *(_QWORD *)(a1 + 8 * m + 184));
              v107.m128i_i64[m] = v37;
              v35 |= v37;
            }
            if ( !v35 )
              goto LABEL_8;
          }
        }
        goto LABEL_57;
      }
      if ( v7 == 1 )
      {
        if ( (v6[10] & 0x40) == 0 )
          goto LABEL_76;
        if ( *(int *)(a1 + 180) > 1 )
        {
LABEL_48:
          v30 = *(_QWORD *)(a1 + 120);
          v31 = 0LL;
          for ( n = 0LL; n != 4; ++n )
          {
            v33 = v107.m128i_i64[n] & (*(_QWORD *)(a1 + 8 * n + 184) | ~*(_QWORD *)(v30 + 8 * n));
            v107.m128i_i64[n] = v33;
            v31 |= v33;
          }
          if ( !v31 )
            goto LABEL_8;
          goto LABEL_51;
        }
      }
      else if ( *(int *)(a1 + 180) > 1 )
      {
        goto LABEL_48;
      }
      v65 = 0LL;
      for ( ii = 0LL; ii != 4; ++ii )
      {
        v67 = *(_QWORD *)(a1 + 8 * ii + 184) & v107.m128i_i64[ii];
        v107.m128i_i64[ii] = v67;
        v65 |= v67;
      }
      if ( !v65 )
        goto LABEL_8;
      goto LABEL_51;
    }
LABEL_57:
    v38 = 0LL;
    if ( v4 > 0 )
    {
      v95 = v7;
      v39 = v4;
      v40 = (__m128i *)(v99 + 6144);
      v105 = a1;
      v102 = v2;
      while ( 1 )
      {
        if ( v95 != 1 || ((*(_QWORD *)&ptr[32 * v38 + (((unsigned __int64)*v6 >> 3) & 0x18)] >> *v6) & 1) != 0 )
        {
          v41 = 0LL;
          for ( jj = 0LL; jj != 4; ++jj )
          {
            v43 = v40->m128i_i64[jj] & v107.m128i_i64[jj];
            v109.m128i_i64[jj] = v43;
            v41 |= v43;
          }
          if ( v41 )
          {
            v44 = 0LL;
            v45 = 0LL;
            for ( kk = 0LL; kk != 4; ++kk )
            {
              v47 = v40->m128i_i64[kk];
              v48 = v47 & ~v107.m128i_i64[kk];
              v49 = v107.m128i_i64[kk] & ~v47;
              v111.m128i_i64[kk] = v48;
              v45 |= v48;
              v107.m128i_i64[kk] = v49;
              v44 |= v49;
            }
            v50 = &v99[24 * v38];
            if ( v45 )
            {
              v51 = (__m128i *)&ptr[32 * v39];
              *v51 = _mm_load_si128(&v111);
              v51[1] = _mm_load_si128(&v112);
              *v40 = _mm_load_si128(&v109);
              v40[1] = _mm_load_si128((const __m128i *)v110);
              if ( (unsigned int)sub_40ABB0((__int64)&v99[24 * v39], (__int64)v50) )
                goto LABEL_77;
              v50 = &v99[24 * v38];
              ++v39;
            }
            if ( !(unsigned __int8)sub_408500(v50, *(_QWORD *)(v102[3] + 8 * v97)) )
            {
LABEL_77:
              v4 = v39;
              goto LABEL_78;
            }
            if ( !v44 )
            {
LABEL_72:
              a1 = v105;
              v2 = v102;
              v4 = v39;
              break;
            }
          }
        }
        ++v38;
        v40 += 2;
        if ( v38 >= v39 )
          goto LABEL_72;
      }
    }
    if ( v4 == v38 )
    {
      v103 = a1;
      v52 = (__m128i *)&ptr[32 * v4];
      v96 = v2;
      *v52 = _mm_load_si128(&v107);
      v52[1] = _mm_load_si128(&v108);
      v53 = *(_QWORD *)(v2[3] + 8 * v97);
      v54 = &v99[24 * v4];
      *(_QWORD *)v54 = 1LL;
      *((_QWORD *)v54 + 1) = 1LL;
      v55 = malloc(8uLL);
      v2 = v96;
      a1 = v103;
      *((_QWORD *)v54 + 2) = v55;
      if ( !v55 )
      {
        *((_QWORD *)v54 + 1) = 0LL;
        *(_QWORD *)v54 = 0LL;
        if ( v4 )
        {
LABEL_78:
          v56 = (void **)(v99 + 16);
          do
          {
            v57 = *v56;
            v56 += 3;
            free(v57);
          }
          while ( &v99[24 * v4 + 16] != (char *)v56 );
        }
        goto LABEL_39;
      }
      *v55 = v53;
      ++v4;
LABEL_76:
      v107 = 0LL;
      v108 = 0LL;
    }
LABEL_8:
    ++v97;
  }
  while ( v97 < v2[2] );
  v9 = a1;
  if ( v4 <= 0 )
  {
    free(v99);
    if ( !v4 )
      goto LABEL_133;
    return 0;
  }
  v109 = (__m128i)(unsigned __int64)(v4 + 1);
  v10 = malloc(8 * (v4 + 1));
  v110[0] = v10;
  if ( !v10 || (v107.m128i_i32[0] = 0, v4 > 0xAAAAAAAAAAAA855LL) || (v104 = 24 * v4, (ptra = malloc(24 * v4)) == 0LL) )
  {
LABEL_111:
    free(v10);
    v70 = (void **)(v99 + 16);
    do
    {
      v71 = *v70;
      v70 += 3;
      free(v71);
    }
    while ( v70 != (void **)&v99[24 * v4 + 16] );
LABEL_39:
    free(v99);
    return 0;
  }
  v11 = 8 * (v4 + 1) - 8;
  v12 = 0LL;
  v13 = v99;
  v101 = 0;
  v94 = v4;
  v14 = v9;
  v98 = (char *)ptra + v11;
  v100 = (char *)ptra + v11 + v11;
  v15 = (__int64 *)(v99 + 8);
  v111 = 0LL;
  v112 = 0LL;
  do
  {
    v109.m128i_i64[1] = 0LL;
    v16 = 0LL;
    if ( *v15 > 0 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 8LL * *(_QWORD *)(v15[1] + 8 * v16));
        if ( v17 != -1 )
        {
          v107.m128i_i32[0] = sub_40A050((__int64)&v109, *(_QWORD *)(v14 + 48) + 24 * v17);
          if ( v107.m128i_i32[0] )
            break;
        }
        if ( *v15 <= ++v16 )
          goto LABEL_18;
      }
LABEL_109:
      v4 = v94;
      goto LABEL_110;
    }
LABEL_18:
    v18 = sub_40ADC0(&v107, (_QWORD *)v14, (__int64)&v109, 0);
    ptra[v12] = v18;
    if ( !v18 && v107.m128i_i32[0] )
      goto LABEL_109;
    if ( *((char *)v18 + 104) < 0 )
    {
      v72 = sub_40ADC0(&v107, (_QWORD *)v14, (__int64)&v109, 1u);
      *(_QWORD *)&v98[8 * v12] = v72;
      if ( !v72 && v107.m128i_i32[0] )
        goto LABEL_109;
      if ( v72 != (__int64 *)ptra[v12] )
      {
        v73 = v101;
        if ( *(int *)(v14 + 180) >= 2 )
          v73 = 1;
        v101 = v73;
      }
      v74 = sub_40ADC0(&v107, (_QWORD *)v14, (__int64)&v109, 2u);
      *(_QWORD *)&v100[8 * v12] = v74;
      if ( !v74 )
      {
        if ( v107.m128i_i32[0] )
          goto LABEL_109;
      }
    }
    else
    {
      *(_QWORD *)&v98[8 * v12] = v18;
      *(_QWORD *)&v100[8 * v12] = v18;
    }
    for ( mm = 0LL; mm != 4; ++mm )
      v111.m128i_i64[mm] |= *(_QWORD *)&v13[mm * 8 + 6144];
    ++v12;
    v15 += 3;
    v13 += 32;
  }
  while ( v12 != v94 );
  v20 = v14;
  v4 = v94;
  if ( !v101 )
  {
    v21 = calloc(8uLL, 0x100uLL);
    a2[11] = v21;
    if ( v21 )
    {
      for ( nn = 0LL; nn != 4; ++nn )
      {
        v23 = v111.m128i_u64[nn];
        v24 = 1LL;
        for ( i1 = &v21[1 * nn]; v23; v23 >>= 1 )
        {
          if ( (v23 & 1) != 0 )
          {
            if ( (v24 & *(_QWORD *)&v99[nn * 8 + 6144]) != 0 )
            {
              v78 = 0LL;
            }
            else
            {
              v75 = &v99[nn * 8 + 6176];
              v76 = 0LL;
              do
              {
                v77 = *(_QWORD *)v75;
                ++v76;
                v75 += 32;
              }
              while ( (v24 & v77) == 0 );
              v78 = v76;
            }
            if ( (v24 & *(_QWORD *)(v20 + nn * 8 + 184)) != 0 )
              v79 = *(_QWORD *)&v98[v78 * 8];
            else
              v79 = ptra[v78];
            *i1 = v79;
          }
          v24 *= 2LL;
          ++i1;
        }
      }
      goto LABEL_31;
    }
LABEL_110:
    free(ptra);
    v10 = v110[0];
    goto LABEL_111;
  }
  v21 = calloc(8uLL, 0x200uLL);
  a2[12] = v21;
  if ( !v21 )
    goto LABEL_110;
  v82 = &v111;
  v83 = v21;
  v84 = (__int64 *)(v99 + 6176);
  do
  {
    v85 = v82->m128i_i64[0];
    v86 = v83;
    for ( i2 = 1LL; v85; v85 >>= 1 )
    {
      if ( (v85 & 1) != 0 )
      {
        if ( (i2 & *(v84 - 4)) != 0 )
        {
          v91 = 0LL;
        }
        else
        {
          v88 = v84;
          v89 = 0LL;
          do
          {
            v90 = *v88;
            ++v89;
            v88 += 4;
            v91 = v89;
          }
          while ( (i2 & v90) == 0 );
        }
        *v86 = ptra[v91];
        v86[256] = *(_QWORD *)&v98[8 * v91];
      }
      i2 *= 2LL;
      ++v86;
    }
    v82 = (__m128i *)((char *)v82 + 8);
    v83 += 64;
    ++v84;
  }
  while ( &v113 != (char *)v82 );
LABEL_31:
  if ( (v111.m128i_i8[1] & 4) != 0 )
  {
    v26 = 0LL;
    while ( (v99[32 * v26 + 6145] & 4) == 0 )
    {
      if ( ++v26 == v94 )
        goto LABEL_35;
    }
    v81 = *(_QWORD *)&v100[8 * v26];
    v21[10] = v81;
    if ( v101 )
      v21[266] = v81;
  }
LABEL_35:
  free(ptra);
  free(v110[0]);
  v27 = (void **)(v99 + 16);
  do
  {
    v28 = *v27;
    v27 += 3;
    free(v28);
  }
  while ( &v99[v104 + 16] != (char *)v27 );
  free(v99);
  return 1;
}

__int64 __fastcall sub_40D060(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx

  if ( *(_BYTE *)(a2 + 48) == 16 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    v3 = *(_QWORD *)(v2 + 24);
    v4 = *(_QWORD *)(v2 + 56);
    *(_QWORD *)(a2 + 24) = v3;
    *(_QWORD *)(a2 + 56) = v4;
    return 0LL;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = a2;
    v6 = sub_4091E0((__int64)a1, *(_QWORD *)(a2 + 40), *(void **)(a2 + 48));
    *(_QWORD *)(a2 + 56) = v6;
    if ( v6 == -1 )
    {
      return 12LL;
    }
    else
    {
      result = 0LL;
      if ( *(_BYTE *)(a2 + 48) == 12 )
        *(_DWORD *)(*a1 + 16 * v6 + 8) = ((*(_DWORD *)(a2 + 40) & 0x3FF) << 8) | *(_DWORD *)(*a1 + 16 * v6 + 8) & 0xFFFC00FF;
    }
  }
  return result;
}

void __fastcall sub_40D0F0(__int64 *ptr)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  char *v10; // rdi
  __int64 v11; // rbx
  char *v12; // rbp
  void **v13; // rdi
  void *v14; // rdi

  v2 = *ptr;
  if ( v2 && ptr[2] )
  {
    v3 = 0LL;
    while ( 1 )
    {
      v4 = v3++;
      sub_409190(16 * v4 + v2);
      if ( ptr[2] <= v3 )
        break;
      v2 = *ptr;
    }
  }
  v5 = 0LL;
  free((void *)ptr[3]);
  if ( ptr[2] )
  {
    do
    {
      v6 = ptr[6];
      if ( v6 )
        free(*(void **)(v6 + 24 * v5 + 16));
      v7 = ptr[7];
      if ( v7 )
        free(*(void **)(v7 + 24 * v5 + 16));
      v8 = ptr[5];
      if ( v8 )
        free(*(void **)(v8 + 24 * v5 + 16));
      ++v5;
    }
    while ( ptr[2] > v5 );
  }
  v9 = 0LL;
  free((void *)ptr[5]);
  free((void *)ptr[6]);
  free((void *)ptr[7]);
  free((void *)*ptr);
  v10 = (char *)ptr[8];
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      v12 = &v10[24 * v9];
      if ( *(__int64 *)v12 > 0 )
      {
        do
        {
          v13 = *(void ***)(*((_QWORD *)v12 + 2) + 8 * v11++);
          sub_4096E0(v13);
        }
        while ( v11 < *(_QWORD *)v12 );
      }
      ++v9;
      free(*((void **)v12 + 2));
      if ( ptr[17] < v9 )
        break;
      v10 = (char *)ptr[8];
    }
    v10 = (char *)ptr[8];
  }
  free(v10);
  v14 = (void *)ptr[15];
  if ( v14 != &unk_4191C0 )
    free(v14);
  free((void *)ptr[28]);
  free(ptr);
}

void __fastcall sub_40D270(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp

  if ( *(__int64 *)a1 > 0 )
  {
    v1 = 0LL;
    do
    {
      v2 = 3 * v1++;
      v2 *= 16LL;
      free(*(void **)(*(_QWORD *)(a1 + 16) + v2 + 40));
      free(*(void **)(*(_QWORD *)(a1 + 16) + v2 + 16));
    }
    while ( v1 < *(_QWORD *)a1 );
  }
  free(*(void **)(a1 + 16));
}

__int64 __fastcall sub_40D2C0(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, void *a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx

  v6 = *a1 - 1;
  *a1 = v6;
  if ( v6 < 0 )
    __assert_fail("num >= 0", "lib/regexec.c", 0x54Fu, "pop_fail_stack");
  v7 = 48 * v6;
  v9 = 48 * v6 + *a2;
  *a3 = *(_QWORD *)v9;
  memcpy(a5, *(const void **)(v9 + 16), 16 * a4);
  free(*(void **)(a6 + 16));
  free(*(void **)(*a2 + v7 + 16));
  v10 = *a2 + v7;
  *(__m128i *)a6 = _mm_loadu_si128((const __m128i *)(v10 + 24));
  *(_QWORD *)(a6 + 16) = *(_QWORD *)(v10 + 40);
  return *(_QWORD *)(v10 + 8);
}

__int64 __fastcall sub_40D350(__int64 a1, const char *a2)
{
  if ( strlen(a2) != 1 )
    return 3LL;
  *(_QWORD *)(a1 + (((unsigned __int64)*(unsigned __int8 *)a2 >> 3) & 0x18)) |= 1LL << *a2;
  return 0LL;
}

__int64 __fastcall sub_40D3A0(__int64 a1, __int64 a2, void **a3, __int64 *a4, __int64 *a5, const char *a6, int a7)
{
  const char *v8; // r12
  __int64 v10; // rcx
  void *v11; // rax
  const unsigned __int16 **v12; // rax
  __int64 v13; // rcx
  const unsigned __int16 *v14; // rdx
  const unsigned __int16 **v16; // rax
  __int64 v17; // rcx
  const unsigned __int16 *v18; // rdx
  __int64 v19; // r14
  const unsigned __int16 **v20; // rax
  __int64 v21; // rcx
  const unsigned __int16 *v22; // rdx
  const unsigned __int16 **v23; // rax
  __int64 v24; // rcx
  const unsigned __int16 *v25; // rdx
  const unsigned __int16 **v26; // rax
  __int64 v27; // rcx
  const unsigned __int16 *v28; // rdx
  const unsigned __int16 **v29; // rax
  __int64 v30; // rcx
  const unsigned __int16 *v31; // rdx
  __int64 i; // rax
  __int64 j; // rax
  __int64 k; // rax
  const unsigned __int16 **v35; // rax
  __int64 v36; // rcx
  const unsigned __int16 *v37; // rdx
  const unsigned __int16 **v38; // rax
  __int64 v39; // rcx
  const unsigned __int16 *v40; // rax
  const unsigned __int16 **v41; // rax
  __int64 v42; // rcx
  const unsigned __int16 *v43; // rdx
  __int64 n; // rax
  __int64 m; // rax
  __int64 ii; // rax
  const unsigned __int16 **v47; // rax
  __int64 v48; // rcx
  const unsigned __int16 *v49; // rsi
  __int64 nn; // rax
  const unsigned __int16 **v51; // rax
  __int64 v52; // rcx
  const unsigned __int16 *v53; // rsi
  __int64 i1; // rax
  const unsigned __int16 **v55; // rax
  __int64 v56; // rcx
  const unsigned __int16 *v57; // rsi
  __int64 i2; // rax
  __int64 jj; // rax
  __int64 mm; // rax
  __int64 kk; // rdx

  v8 = a6;
  if ( (*(_QWORD *)&a7 & 0x400000LL) == 0 )
  {
LABEL_4:
    v10 = *a4;
    v11 = *a3;
    if ( *a5 != *a4 )
      goto LABEL_5;
    goto LABEL_20;
  }
  if ( !strcmp(a6, "upper") )
  {
    v8 = "alpha";
    goto LABEL_4;
  }
  v10 = *a4;
  if ( !strcmp(a6, "lower") )
    v8 = "alpha";
  v11 = *a3;
  if ( *a5 != v10 )
    goto LABEL_5;
LABEL_20:
  v19 = 2 * v10 + 1;
  v11 = realloc(v11, 8 * v19);
  if ( !v11 )
    return 12LL;
  *a3 = v11;
  *a5 = v19;
  v10 = *a4;
LABEL_5:
  *a4 = v10 + 1;
  *((_QWORD *)v11 + v10) = wctype(v8);
  if ( !strcmp(v8, "alnum") )
  {
    v16 = __ctype_b_loc();
    v17 = 0LL;
    v18 = *v16;
    if ( a1 )
    {
      for ( i = 0LL; i != 256; ++i )
      {
        if ( (v18[i] & 8) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + i) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + i);
      }
    }
    else
    {
      do
      {
        if ( (v18[v17] & 8) != 0 )
          *(_QWORD *)(a2 + 8 * (v17 >> 6)) |= 1LL << v17;
        ++v17;
      }
      while ( v17 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "cntrl") )
  {
    v12 = __ctype_b_loc();
    v13 = 0LL;
    v14 = *v12;
    if ( a1 )
    {
      for ( j = 0LL; j != 256; ++j )
      {
        if ( (v14[j] & 2) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + j) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + j);
      }
    }
    else
    {
      do
      {
        if ( (v14[v13] & 2) != 0 )
          *(_QWORD *)(a2 + 8 * (v13 >> 6)) |= 1LL << v13;
        ++v13;
      }
      while ( v13 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "lower") )
  {
    v23 = __ctype_b_loc();
    v24 = 0LL;
    v25 = *v23;
    if ( a1 )
    {
      for ( k = 0LL; k != 256; ++k )
      {
        if ( (v25[k] & 0x200) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + k) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + k);
      }
    }
    else
    {
      do
      {
        if ( (v25[v24] & 0x200) != 0 )
          *(_QWORD *)(a2 + 8 * (v24 >> 6)) |= 1LL << v24;
        ++v24;
      }
      while ( v24 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "space") )
  {
    v20 = __ctype_b_loc();
    v21 = 0LL;
    v22 = *v20;
    if ( a1 )
    {
      for ( m = 0LL; m != 256; ++m )
      {
        if ( (v22[m] & 0x2000) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + m) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + m);
      }
    }
    else
    {
      do
      {
        if ( (v22[v21] & 0x2000) != 0 )
          *(_QWORD *)(a2 + 8 * (v21 >> 6)) |= 1LL << v21;
        ++v21;
      }
      while ( v21 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "alpha") )
  {
    v29 = __ctype_b_loc();
    v30 = 0LL;
    v31 = *v29;
    if ( a1 )
    {
      for ( n = 0LL; n != 256; ++n )
      {
        if ( (v31[n] & 0x400) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + n) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + n);
      }
    }
    else
    {
      do
      {
        if ( (v31[v30] & 0x400) != 0 )
          *(_QWORD *)(a2 + 8 * (v30 >> 6)) |= 1LL << v30;
        ++v30;
      }
      while ( v30 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "digit") )
  {
    v26 = __ctype_b_loc();
    v27 = 0LL;
    v28 = *v26;
    if ( a1 )
    {
      for ( ii = 0LL; ii != 256; ++ii )
      {
        if ( (v28[ii] & 0x800) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + ii) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + ii);
      }
    }
    else
    {
      do
      {
        if ( (v28[v27] & 0x800) != 0 )
          *(_QWORD *)(a2 + 8 * (v27 >> 6)) |= 1LL << v27;
        ++v27;
      }
      while ( v27 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "print") )
  {
    v35 = __ctype_b_loc();
    v36 = 0LL;
    v37 = *v35;
    if ( a1 )
    {
      for ( jj = 0LL; jj != 256; ++jj )
      {
        if ( (v37[jj] & 0x4000) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + jj) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + jj);
      }
    }
    else
    {
      do
      {
        if ( (v37[v36] & 0x4000) != 0 )
          *(_QWORD *)(a2 + 8 * (v36 >> 6)) |= 1LL << v36;
        ++v36;
      }
      while ( v36 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "upper") )
  {
    v38 = __ctype_b_loc();
    v39 = 0LL;
    v40 = *v38;
    if ( a1 )
    {
      for ( kk = 0LL; kk != 256; ++kk )
      {
        if ( (v40[kk] & 0x100) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + kk) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + kk);
      }
    }
    else
    {
      do
      {
        if ( (v40[v39] & 0x100) != 0 )
          *(_QWORD *)(a2 + 8 * (v39 >> 6)) |= 1LL << v39;
        ++v39;
      }
      while ( v39 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "blank") )
  {
    v41 = __ctype_b_loc();
    v42 = 0LL;
    v43 = *v41;
    if ( a1 )
    {
      for ( mm = 0LL; mm != 256; ++mm )
      {
        if ( (v43[mm] & 1) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + mm) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + mm);
      }
    }
    else
    {
      do
      {
        if ( (v43[v42] & 1) != 0 )
          *(_QWORD *)(a2 + 8 * (v42 >> 6)) |= 1LL << v42;
        ++v42;
      }
      while ( v42 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "graph") )
  {
    v47 = __ctype_b_loc();
    v48 = 0LL;
    v49 = *v47;
    if ( a1 )
    {
      for ( nn = 0LL; nn != 256; ++nn )
      {
        if ( (v49[nn] & 0x8000u) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + nn) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + nn);
      }
    }
    else
    {
      do
      {
        if ( (v49[v48] & 0x8000u) != 0 )
          *(_QWORD *)(a2 + 8 * (v48 >> 6)) |= 1LL << v48;
        ++v48;
      }
      while ( v48 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "punct") )
  {
    v51 = __ctype_b_loc();
    v52 = 0LL;
    v53 = *v51;
    if ( a1 )
    {
      for ( i1 = 0LL; i1 != 256; ++i1 )
      {
        if ( (v53[i1] & 4) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + i1) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + i1);
      }
    }
    else
    {
      do
      {
        if ( (v53[v52] & 4) != 0 )
          *(_QWORD *)(a2 + 8 * (v52 >> 6)) |= 1LL << v52;
        ++v52;
      }
      while ( v52 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "xdigit") )
  {
    v55 = __ctype_b_loc();
    v56 = 0LL;
    v57 = *v55;
    if ( a1 )
    {
      for ( i2 = 0LL; i2 != 256; ++i2 )
      {
        if ( (v57[i2] & 0x1000) != 0 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + i2) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + i2);
      }
    }
    else
    {
      do
      {
        if ( (v57[v56] & 0x1000) != 0 )
          *(_QWORD *)(a2 + 8 * (v56 >> 6)) |= 1LL << v56;
        ++v56;
      }
      while ( v56 != 256 );
    }
    return 0LL;
  }
  return 4LL;
}

char *__fastcall sub_40DB70(__int64 a1, __int64 a2, const char *a3, char *a4, char a5, _DWORD *a6)
{
  char *v9; // rax
  char *v10; // rbx
  void *v11; // rax
  void **v12; // r15
  int v13; // eax
  __int64 i; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // rax
  __int64 v18; // rcx
  __int64 j; // rax
  char *v20; // r14
  char *v21; // rax
  int v23; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+18h] [rbp-60h] BYREF
  __m128i v26; // [rsp+20h] [rbp-58h] BYREF
  __m128i v27; // [rsp+30h] [rbp-48h] BYREF

  v25 = 0LL;
  v9 = (char *)calloc(0x20uLL, 1uLL);
  if ( !v9 )
    goto LABEL_20;
  v10 = v9;
  v11 = calloc(0x50uLL, 1uLL);
  v12 = (void **)v11;
  if ( !v11 )
  {
    v20 = 0LL;
    free(v10);
    *a6 = 12;
    return v20;
  }
  *((_BYTE *)v11 + 32) = a5 & 1 | *((_BYTE *)v11 + 32) & 0xFE;
  v13 = sub_40D3A0(a2, (__int64)v10, (void **)v11 + 3, (__int64 *)v11 + 9, &v25, a3, 0);
  if ( v13 )
  {
    v23 = v13;
    v20 = 0LL;
    free(v10);
    sub_409170(v12);
    *a6 = v23;
    return v20;
  }
  for ( i = *a4; (_BYTE)i; *(_QWORD *)&v10[8 * (v15 >> 6)] |= v16 )
  {
    v15 = i + 63;
    if ( i >= 0 )
      v15 = i;
    ++a4;
    v16 = 1LL << (i % 64);
    i = *a4;
  }
  if ( a5 )
  {
    v17 = v10;
    do
    {
      *(_QWORD *)v17 = ~*(_QWORD *)v17;
      v17 += 8;
    }
    while ( v10 + 32 != v17 );
  }
  if ( *(int *)(a1 + 180) > 1 )
  {
    v18 = *(_QWORD *)(a1 + 120);
    for ( j = 0LL; j != 32; j += 8LL )
      *(_QWORD *)&v10[j] &= *(_QWORD *)(v18 + j);
  }
  v26.m128i_i8[8] = 3;
  v26.m128i_i64[0] = (__int64)v10;
  v20 = sub_40A780((_QWORD *)(a1 + 112), (int *)(a1 + 128), 0LL, 0LL, &v26);
  if ( !v20 )
    goto LABEL_19;
  if ( *(int *)(a1 + 180) <= 1 )
  {
    sub_409170(v12);
    return v20;
  }
  *(_BYTE *)(a1 + 176) |= 2u;
  v26.m128i_i8[8] = 6;
  v26.m128i_i64[0] = (__int64)v12;
  v21 = sub_40A780((_QWORD *)(a1 + 112), (int *)(a1 + 128), 0LL, 0LL, &v26);
  if ( !v21 )
  {
LABEL_19:
    free(v10);
    sub_409170(v12);
LABEL_20:
    v20 = 0LL;
    *a6 = 12;
    return v20;
  }
  v27.m128i_i8[8] = 10;
  return sub_40A780((_QWORD *)(a1 + 112), (int *)(a1 + 128), v20, v21, &v27);
}

__int64 *__fastcall sub_40DDB0(__int64 a1, __int64 *a2, _QWORD *a3, __m128i *a4)
{
  _BOOL4 v4; // r12d
  __int64 *result; // rax
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned __int8 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  char *v15; // rsi
  size_t v16; // r13
  wchar_t v17; // eax
  __int64 v18; // r13
  __int64 i; // r14
  __int64 count_low; // rdx
  wchar_t v21; // eax
  unsigned __int64 v22; // r14
  __int64 v23; // rbp
  __int64 v24; // r13
  __int8 *v25; // rax
  __m128i v26; // xmm0
  __m128i si128; // xmm0
  __int64 *v28; // [rsp+0h] [rbp-178h]
  __int64 v29; // [rsp+8h] [rbp-170h]
  __int64 v30; // [rsp+10h] [rbp-168h]
  wint_t wc; // [rsp+34h] [rbp-144h] BYREF
  mbstate_t ps; // [rsp+38h] [rbp-140h] BYREF
  mbstate_t s; // [rsp+40h] [rbp-138h] BYREF

  v4 = 0;
  result = *(__int64 **)a1;
  v28 = *(__int64 **)a1;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 180LL) == 1 )
    v4 = (*(_QWORD *)(a1 + 24) & 0x400000LL) != 0;
  v6 = 0LL;
  if ( *a2 <= 0 )
    return result;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*a3 + 8 * v6);
      v9 = *v28;
      v10 = (unsigned __int8 *)(*v28 + 16 * v8);
      v30 = 16 * v8;
      result = (__int64 *)v10[8];
      if ( (_DWORD)result != 1 )
        break;
      v11 = *v10;
      a4->m128i_i8[v11] = 1;
      if ( v4 )
        a4->m128i_i8[(*__ctype_tolower_loc())[v11]] = 1;
      if ( (*(_BYTE *)(a1 + 26) & 0x40) == 0 || *((int *)v28 + 45) <= 1 )
        goto LABEL_9;
      v12 = *v28;
      LOBYTE(s.__count) = *(_BYTE *)(*v28 + 16 * v8);
      v13 = v8 + 1;
      if ( v28[2] > (unsigned __int64)(v8 + 1) && (v14 = v12 + v30 + 16, (*(_DWORD *)(v14 + 8) & 0x2000FF) == 2097153) )
      {
        v15 = (char *)&s + 1;
        do
        {
          ++v15;
          ++v13;
          *(v15 - 1) = *(_BYTE *)v14;
          if ( v28[2] <= v13 )
            break;
          v14 = *v28 + 16 * v13;
        }
        while ( (*(_DWORD *)(v14 + 8) & 0x2000FF) == 2097153 );
        v16 = v15 - (char *)&s;
      }
      else
      {
        v16 = 1LL;
      }
      ps = 0LL;
      if ( sub_407DD0((wchar_t *)&wc, (char *)&s, v16, &ps) != v16 )
        goto LABEL_9;
      v17 = towlower(wc);
      if ( wcrtomb((char *)&s, v17, &ps) == -1LL )
        goto LABEL_9;
      ++v6;
      a4->m128i_i8[LOBYTE(s.__count)] = 1;
      result = a2;
      if ( v6 >= *a2 )
        return result;
    }
    if ( (_DWORD)result == 3 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        v22 = 0LL;
        v23 = *(_QWORD *)(*(_QWORD *)(v9 + v30) + v29);
        v24 = 8 * v29;
        do
        {
          if ( _bittest64(&v23, v22) )
          {
            v25 = &a4->m128i_i8[v24];
            a4->m128i_i8[v24] = 1;
            if ( v4 )
            {
              if ( (unsigned int)(v24 + 128) <= 0x17F )
                v25 = &a4->m128i_i8[(*__ctype_tolower_loc())[v24]];
              *v25 = 1;
            }
          }
          v22 = (unsigned int)(v22 + 1);
          ++v24;
        }
        while ( (_DWORD)v22 != 64 );
        v29 += 8LL;
        if ( v29 == 32 )
          break;
        v9 = *v28;
      }
      goto LABEL_9;
    }
    if ( (_DWORD)result == 6 )
    {
      v18 = *(_QWORD *)v10;
      if ( *((int *)v28 + 45) > 1 && (*(_QWORD *)(v18 + 72) || (*(_BYTE *)(v18 + 32) & 1) != 0 || *(_QWORD *)(v18 + 64)) )
      {
        LOBYTE(ps.__count) = 0;
        do
        {
          s = 0LL;
          if ( sub_407DD0(0LL, (char *)&ps, 1uLL, &s) == -2LL )
            a4->m128i_i8[LOBYTE(ps.__count)] = 1;
          ++LOBYTE(ps.__count);
        }
        while ( LOBYTE(ps.__count) );
      }
      else
      {
        for ( i = 0LL; i < *(_QWORD *)(v18 + 40); ++i )
        {
          ps = 0LL;
          if ( wcrtomb((char *)&s, *(_DWORD *)(*(_QWORD *)v18 + 4 * i), &ps) != -1LL )
          {
            count_low = LOBYTE(s.__count);
            a4->m128i_i8[LOBYTE(s.__count)] = 1;
            if ( v4 )
              a4->m128i_i8[(*__ctype_tolower_loc())[count_low]] = 1;
          }
          if ( (*(_BYTE *)(a1 + 26) & 0x40) != 0 && *((int *)v28 + 45) > 1 )
          {
            v21 = towlower(*(_DWORD *)(*(_QWORD *)v18 + 4 * i));
            if ( wcrtomb((char *)&s, v21, &ps) != -1LL )
              a4->m128i_i8[LOBYTE(s.__count)] = 1;
          }
        }
      }
      goto LABEL_9;
    }
    if ( (v10[8] & 0xFD) == 5 )
      break;
    if ( (_DWORD)result == 2 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_419400);
      *a4 = si128;
      a4[1] = si128;
      a4[2] = si128;
      a4[3] = si128;
      a4[4] = si128;
      a4[5] = si128;
      a4[6] = si128;
      a4[7] = si128;
      a4[8] = si128;
      a4[9] = si128;
      a4[10] = si128;
      a4[11] = si128;
      a4[12] = si128;
      a4[13] = si128;
      a4[14] = si128;
      a4[15] = si128;
      goto LABEL_57;
    }
LABEL_9:
    result = a2;
    if ( ++v6 >= *a2 )
      return result;
  }
  v26 = _mm_load_si128((const __m128i *)&xmmword_419400);
  *a4 = v26;
  a4[1] = v26;
  a4[2] = v26;
  a4[3] = v26;
  a4[4] = v26;
  a4[5] = v26;
  a4[6] = v26;
  a4[7] = v26;
  a4[8] = v26;
  a4[9] = v26;
  a4[10] = v26;
  a4[11] = v26;
  a4[12] = v26;
  a4[13] = v26;
  a4[14] = v26;
  a4[15] = v26;
  if ( (_DWORD)result != 2 )
    return result;
LABEL_57:
  result = (__int64 *)a1;
  *(_BYTE *)(a1 + 56) |= 1u;
  return result;
}

__int64 __fastcall sub_40E290(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r10
  char v9; // r11
  unsigned int v10; // ebp
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdx
  signed int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int8 v19; // dl
  __int64 v20; // rcx
  unsigned __int8 v21; // di
  __int64 v22; // rdi
  _BYTE *v23; // rdx
  _BYTE *v24; // rax
  __int64 v25; // rax

  if ( *(_BYTE *)(a1 + 16 * a3 + 8) == 7 )
  {
    v18 = *(_QWORD *)(a4 + 8);
    v19 = *(_BYTE *)(v18 + a5);
    if ( v19 <= 0xC1u )
      return 0;
    v20 = *(_QWORD *)(a4 + 88);
    if ( a5 + 1 >= v20 )
      return 0;
    v21 = *(_BYTE *)(v18 + a5 + 1);
    if ( v19 <= 0xDFu )
    {
      v10 = 2;
      if ( (unsigned __int8)(v21 + 0x80) <= 0x3Fu )
        return v10;
      return 0;
    }
    if ( v19 > 0xEFu )
    {
      if ( v19 > 0xF7u )
      {
        if ( v19 > 0xFBu )
        {
          if ( v19 > 0xFDu || v19 == 0xFC && v21 <= 0x83u )
            return 0;
          v22 = 6LL;
          v10 = 6;
        }
        else
        {
          if ( v19 == 0xF8 && v21 <= 0x87u )
            return 0;
          v22 = 5LL;
          v10 = 5;
        }
      }
      else
      {
        if ( v19 == 0xF0 && v21 <= 0x8Fu )
          return 0;
        v22 = 4LL;
        v10 = 4;
      }
    }
    else
    {
      if ( v19 == 0xE0 && v21 <= 0x9Fu )
        return 0;
      v22 = 3LL;
      v10 = 3;
    }
    if ( v20 >= a5 + v22 )
    {
      v23 = (_BYTE *)(v18 + a5 + 1);
      v24 = (_BYTE *)(v22 + a5 + v18);
      while ( (unsigned __int8)(*v23 + 0x80) <= 0x3Fu )
      {
        if ( v24 == ++v23 )
          return v10;
      }
    }
    return 0;
  }
  if ( *(_DWORD *)(a4 + 144) == 1 )
    return 0;
  v5 = sub_409AC0(a4, a5);
  v10 = v5;
  if ( v9 != 5 )
  {
    if ( v9 != 6 || v5 <= 1 )
      return 0;
    v12 = *v8;
    v13 = *(_QWORD *)(*v8 + 64);
    v14 = *(_QWORD *)(*v8 + 40);
    if ( v13 || *(_QWORD *)(v12 + 72) | v14 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 4 * v6);
      if ( v14 > 0 )
      {
        if ( v15 == **(_DWORD **)v12 )
          goto LABEL_25;
        v16 = 0LL;
        while ( v14 != ++v16 )
        {
          if ( v15 == *(_DWORD *)(*(_QWORD *)v12 + 4 * v16) )
            goto LABEL_25;
        }
      }
      if ( *(__int64 *)(v12 + 72) > 0 )
      {
        v17 = 0LL;
        while ( !iswctype(v15, *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8 * v17)) )
        {
          if ( ++v17 >= *(_QWORD *)(v12 + 72) )
          {
            v13 = *(_QWORD *)(v12 + 64);
            goto LABEL_40;
          }
        }
LABEL_25:
        if ( (*(_BYTE *)(v12 + 32) & 1) == 0 )
          return v10;
        return 0;
      }
LABEL_40:
      if ( v13 > 0 )
      {
        v25 = 0LL;
        while ( v15 < *(_DWORD *)(*(_QWORD *)(v12 + 8) + 4 * v25) || v15 > *(_DWORD *)(*(_QWORD *)(v12 + 16) + 4 * v25) )
        {
          if ( ++v25 == v13 )
            goto LABEL_45;
        }
        goto LABEL_25;
      }
    }
LABEL_45:
    if ( (*(_BYTE *)(v12 + 32) & 1) != 0 )
      return v10;
    return 0;
  }
  if ( v5 <= 1
    || (*a2 & 0x40) == 0 && *(_BYTE *)(*(_QWORD *)(v7 + 8) + v6) == 10
    || (*a2 & 0x80u) != 0LL && !*(_BYTE *)(*(_QWORD *)(v7 + 8) + v6) )
  {
    return 0;
  }
  return v10;
}

__int64 __fastcall sub_40E520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 *v17; // r15
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rsi
  bool v21; // cc
  __int64 *v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned int v31; // eax
  _QWORD *v32; // r13
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 result; // rax
  void *v36; // rdi
  _QWORD *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r14
  char *v40; // rax
  unsigned int v41; // [rsp+0h] [rbp-F8h]
  __int64 v42; // [rsp+0h] [rbp-F8h]
  __int64 v43; // [rsp+8h] [rbp-F0h]
  __int64 v44; // [rsp+10h] [rbp-E8h]
  __int64 v45; // [rsp+18h] [rbp-E0h]
  _QWORD *v46; // [rsp+20h] [rbp-D8h]
  __int64 v48; // [rsp+38h] [rbp-C0h]
  __int64 v49; // [rsp+40h] [rbp-B8h]
  __int64 v50; // [rsp+48h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A0h]
  __int64 v53; // [rsp+60h] [rbp-98h]
  unsigned int v55; // [rsp+78h] [rbp-80h] BYREF
  unsigned int v56; // [rsp+7Ch] [rbp-7Ch] BYREF
  __int128 v57; // [rsp+80h] [rbp-78h] BYREF
  void *v58; // [rsp+90h] [rbp-68h]
  __int128 v59; // [rsp+A0h] [rbp-58h] BYREF
  void *ptr; // [rsp+B0h] [rbp-48h]

  v10 = *(_QWORD *)(a2 + 8);
  v46 = *(_QWORD **)(a1 + 152);
  v48 = *(_QWORD *)(*v46 + 16 * a3);
  v11 = *(int *)(a1 + 224);
  v55 = 0;
  v12 = a6 + v11;
  if ( v12 >= v10 )
  {
    v38 = v12 + 1;
    if ( 0x7FFFFFFFFFFFFFFFLL - v10 < v12 + 1 )
      return 12LL;
    v39 = v10 + v38;
    if ( (unsigned __int64)(v10 + v38) > 0x1FFFFFFFFFFFFFFFLL )
      return 12LL;
    v40 = (char *)realloc(*(void **)(a2 + 16), 8 * v39);
    if ( !v40 )
      return 12LL;
    *(_QWORD *)(a2 + 16) = v40;
    *(_QWORD *)(a2 + 8) = v39;
    memset(&v40[8 * v10], 0, 8 * v38);
  }
  v13 = *(_DWORD *)(a1 + 160);
  v14 = *(_QWORD *)a2;
  v15 = *(_QWORD *)(a2 + 16);
  v52 = *(_QWORD *)(a1 + 184);
  v16 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 184) = v15;
  v53 = v16;
  if ( v14 )
  {
    *(_QWORD *)(a1 + 72) = v14;
    v41 = sub_40B840(a1, v14 - 1, v13);
    if ( v14 != a4 )
    {
      v17 = *(__int64 **)(v15 + 8 * v14);
      if ( !v17 || (v17[13] & 0x40) == 0 )
      {
        v58 = 0LL;
        v57 = 0LL;
        goto LABEL_7;
      }
      result = sub_40ABB0((__int64)&v57, (__int64)(v17 + 1));
      v55 = result;
      if ( (_DWORD)result )
        return result;
      if ( (v17[13] & 0x40) == 0 )
        goto LABEL_7;
      goto LABEL_45;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 72) = a4;
    v41 = sub_40B840(a1, a4 - 1, v13);
  }
  *(_QWORD *)&v57 = 1LL;
  *((_QWORD *)&v57 + 1) = 1LL;
  v37 = malloc(8uLL);
  v58 = v37;
  if ( !v37 )
    return 12LL;
  *v37 = a3;
  v14 = a4;
  v55 = sub_40A480(v46, (__int64)&v57, v48, a7);
  if ( v55 )
  {
LABEL_41:
    free(v58);
    return v55;
  }
LABEL_45:
  if ( *((_QWORD *)&v57 + 1) )
  {
    v55 = sub_40B360((_QWORD *)a1, (__int64)&v57, v14, v48, a7);
    if ( v55 )
      goto LABEL_41;
  }
  v17 = sub_40ADC0(&v55, v46, (__int64)&v57, v41);
  if ( !v17 )
  {
    if ( v55 )
      goto LABEL_41;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v14) = v17;
LABEL_7:
  if ( v14 < a6 && *(int *)(a1 + 224) >= 0 )
  {
    v44 = 0LL;
    v18 = *(_QWORD *)(a1 + 184);
    v19 = v14 + 1;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v18 + 8 * v19);
      *((_QWORD *)&v57 + 1) = 0LL;
      v42 = v19 - 1;
      v45 = 8 * v19;
      if ( v20 )
      {
        v55 = sub_40A050((__int64)&v57, v20 + 8);
        if ( v55 )
          goto LABEL_41;
        if ( !v17 )
          goto LABEL_27;
      }
      else if ( !v17 )
      {
        v14 = v19;
        goto LABEL_30;
      }
      v21 = v17[5] <= 0;
      v22 = *(__int64 **)(a1 + 152);
      v56 = 0;
      v59 = 0LL;
      ptr = 0LL;
      if ( !v21 )
      {
        v50 = v19;
        v23 = 0LL;
        while ( 1 )
        {
          v24 = v17[6];
          v25 = *(_QWORD *)(v24 + 8 * v23);
          v26 = *v22 + 16 * v25;
          if ( (*(_BYTE *)(v26 + 10) & 0x10) != 0 )
          {
            v27 = sub_40E290(*v22, v22 + 27, *(_QWORD *)(v24 + 8 * v23), a1, v42);
            if ( v27 > 1 )
            {
              v43 = 8 * v25;
              v28 = v27 + v42;
              v29 = *(_QWORD *)(v22[3] + 8 * v25);
              v30 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v28);
              *((_QWORD *)&v59 + 1) = 0LL;
              if ( v30 )
              {
                v49 = v29;
                v31 = sub_40A050((__int64)&v59, v30 + 8);
                v29 = v49;
                v56 = v31;
                if ( v31 )
                  goto LABEL_26;
              }
              if ( !(unsigned __int8)sub_408500(&v59, v29) )
              {
LABEL_40:
                free(ptr);
                v55 = 12;
                goto LABEL_41;
              }
              v32 = (_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v28);
              *v32 = sub_40B0C0(&v56, v22, (__int64)&v59);
              if ( !*(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v28) )
              {
                if ( v56 )
                {
LABEL_26:
                  v19 = v50;
                  free(ptr);
                  v55 = v56;
                  if ( v56 )
                    goto LABEL_41;
                  goto LABEL_27;
                }
              }
              goto LABEL_17;
            }
            if ( v27 )
            {
LABEL_16:
              v43 = 8 * v25;
LABEL_17:
              if ( !(unsigned __int8)sub_408500(&v57, *(_QWORD *)(v22[3] + v43)) )
                goto LABEL_40;
              goto LABEL_18;
            }
            v26 = *v22 + 16 * v25;
          }
          if ( (unsigned __int8)sub_40B930(a1, v26, v42) )
            goto LABEL_16;
LABEL_18:
          if ( ++v23 >= v17[5] )
          {
            v19 = v50;
            v36 = ptr;
            goto LABEL_50;
          }
        }
      }
      v36 = 0LL;
LABEL_50:
      free(v36);
      v55 = 0;
LABEL_27:
      v14 = v19;
      if ( *((_QWORD *)&v57 + 1) )
      {
        v55 = sub_40A480(v46, (__int64)&v57, v48, a7);
        if ( v55 )
          goto LABEL_41;
        v55 = sub_40B360((_QWORD *)a1, (__int64)&v57, v19, v48, a7);
        if ( v55 )
          goto LABEL_41;
      }
LABEL_30:
      v33 = sub_40B840(a1, v42, *(_DWORD *)(a1 + 160));
      v17 = sub_40ADC0(&v55, v46, (__int64)&v57, v33);
      if ( v17 )
      {
        v18 = *(_QWORD *)(a1 + 184);
        v44 = 0LL;
        *(_QWORD *)(v18 + v45) = v17;
      }
      else
      {
        if ( v55 )
          goto LABEL_41;
        v18 = *(_QWORD *)(a1 + 184);
        ++v44;
        *(_QWORD *)(v18 + v45) = 0LL;
      }
      if ( a6 > v19 )
      {
        ++v19;
        if ( *(int *)(a1 + 224) >= v44 )
          continue;
      }
      break;
    }
  }
  free(v58);
  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * a6);
  *(_QWORD *)a2 = v14;
  *(_QWORD *)(a1 + 184) = v52;
  *(_QWORD *)(a1 + 72) = v53;
  return !v34 || sub_409B10(*(_QWORD *)(v34 + 16), (__int64 *)(v34 + 24), a5) == 0;
}

__int64 __fastcall sub_40EC40(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4, char a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rbx
  void *v9; // rsp
  __int64 v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r9
  __int64 v21; // rsi
  int v22; // edx
  __int64 v23; // rdx
  __int64 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // r11
  __int64 *v28; // rax
  __int64 v29; // r15
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 *v33; // r11
  __int64 v34; // r14
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 result; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 *v42; // rax
  int v43; // eax
  size_t v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r15
  int v49; // eax
  __int64 v50; // rdx
  __int64 *v51; // rcx
  __int64 v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rax
  char *v55; // rax
  __int64 *v56; // r15
  size_t v57; // r14
  void *v58; // rax
  __int64 *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 *v63; // rcx
  __int64 v64; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v65; // [rsp+8h] [rbp-C8h]
  char v66; // [rsp+17h] [rbp-B9h]
  __int64 *p_ptr; // [rsp+18h] [rbp-B8h]
  void *dest; // [rsp+20h] [rbp-B0h]
  size_t n; // [rsp+28h] [rbp-A8h]
  _QWORD *v70; // [rsp+30h] [rbp-A0h]
  __int64 v71; // [rsp+38h] [rbp-98h]
  _QWORD *v72; // [rsp+40h] [rbp-90h]
  __int64 *v73; // [rsp+48h] [rbp-88h]
  __int64 v74; // [rsp+58h] [rbp-78h] BYREF
  __int128 v75; // [rsp+60h] [rbp-70h] BYREF
  void *ptr; // [rsp+70h] [rbp-60h] BYREF
  __int64 v77[2]; // [rsp+80h] [rbp-50h] BYREF
  void *v78; // [rsp+90h] [rbp-40h]

  v7 = (_QWORD *)*a1;
  v71 = a3;
  v77[0] = 0LL;
  v72 = v7;
  v77[1] = 2LL;
  v78 = 0LL;
  if ( a5 )
  {
    v73 = v77;
    v78 = malloc(0x60uLL);
    if ( !v78 )
      return 12LL;
  }
  else
  {
    v73 = 0LL;
  }
  ptr = 0LL;
  v75 = 0LL;
  v8 = v72[18];
  n = 16 * v71;
  if ( (unsigned __int64)(16 * v71) > 0xFBF )
  {
    v66 = 1;
    dest = malloc(n);
    if ( dest )
      goto LABEL_5;
    if ( v73 )
      sub_40D270((__int64)v73);
    return 12LL;
  }
  v66 = 0;
  v9 = alloca(16 * v71 + 16);
  dest = &v64;
LABEL_5:
  memcpy(dest, a4, n);
  v10 = *a4;
  v74 = *a4;
  p_ptr = (__int64 *)&ptr;
  while ( 1 )
  {
    v18 = a4[1];
    if ( v18 < v10 )
    {
LABEL_37:
      free(ptr);
      if ( v66 )
      {
        free(dest);
        v38 = v73;
        if ( !v73 )
          return 0LL;
      }
      else
      {
        v38 = v73;
        if ( !v73 )
          return 0LL;
      }
      sub_40D270((__int64)v38);
      return 0LL;
    }
LABEL_23:
    v19 = v8;
    v20 = 16 * v8;
    v21 = 16 * v8 + *v72;
    v22 = *(unsigned __int8 *)(v21 + 8);
    if ( v22 == 8 )
    {
      v23 = *(_QWORD *)v21 + 1LL;
      if ( v71 > v23 )
      {
        v24 = &a4[2 * v23];
        v24[1] = -1LL;
        v18 = a4[1];
        *v24 = v10;
      }
    }
    else if ( v22 == 9 )
    {
      v40 = *(_QWORD *)v21 + 1LL;
      if ( v71 > v40 )
      {
        v41 = 2 * v40;
        v42 = &a4[v41];
        if ( a4[v41] < v10 )
        {
          v42[1] = v10;
          v65 = 16 * v8;
          v70 = (_QWORD *)v10;
          memcpy(dest, a4, n);
          v18 = a4[1];
          v10 = (__int64)v70;
          v20 = v65;
        }
        else if ( (*(_BYTE *)(v21 + 10) & 8) != 0 && *(_QWORD *)((char *)dest + v41 * 8) != -1LL )
        {
          v65 = v10;
          v70 = (_QWORD *)(16 * v8);
          memcpy(a4, dest, n);
          v18 = a4[1];
          v20 = (__int64)v70;
          v10 = v65;
        }
        else
        {
          v42[1] = v10;
          v18 = a4[1];
        }
      }
    }
    if ( v10 == v18 && a2[22] == v8 )
    {
      if ( !v73 )
      {
        free(ptr);
        if ( v66 )
        {
          free(dest);
          return 0LL;
        }
        return 0LL;
      }
      if ( !v71 )
        goto LABEL_71;
      v59 = a4;
      v60 = 0LL;
      while ( *v59 < 0 || v59[1] != -1 )
      {
        ++v60;
        v59 += 2;
        if ( v71 == v60 )
          goto LABEL_71;
      }
      if ( v71 == v60 )
      {
LABEL_71:
        free(ptr);
        if ( v66 )
          free(dest);
        sub_40D270((__int64)v73);
        return 0LL;
      }
      v8 = sub_40D2C0(v73, v73 + 2, &v74, v71, a4, (__int64)&v75);
      v19 = v8;
      v20 = 16 * v8;
    }
    v11 = (__int64 *)a2[19];
    v12 = *v11;
    v13 = *v11 + v20;
    v14 = *(_BYTE *)(v13 + 8);
    if ( (v14 & 8) != 0 )
      break;
    if ( (*(_BYTE *)(v13 + 10) & 0x10) == 0 )
    {
      if ( v14 != 4 )
      {
        v15 = v74;
        goto LABEL_13;
      }
      v45 = &a4[2 * *(_QWORD *)v13 + 2];
      v46 = *v45;
      v44 = v45[1] - *v45;
      if ( !v73 )
      {
        if ( v44 )
          goto LABEL_64;
LABEL_76:
        v70 = (_QWORD *)v20;
        if ( !(unsigned __int8)sub_408500(&v75, v8) )
        {
LABEL_80:
          free(ptr);
          if ( v66 )
LABEL_93:
            free(dest);
          if ( v73 )
            goto LABEL_62;
          return 12LL;
        }
        v61 = v11[5] + 24 * v8;
        v65 = v74;
        v8 = **(_QWORD **)(v61 + 16);
        v62 = *(_QWORD *)(a2[23] + 8 * v74);
        if ( sub_409B10(*(_QWORD *)(v62 + 16), (__int64 *)(v62 + 24), v8) )
          goto LABEL_20;
        v15 = v65;
        v13 = (__int64)v70 + *v11;
LABEL_13:
        v70 = (_QWORD *)v15;
        if ( !(unsigned __int8)sub_40B930((__int64)a2, v13, v15) )
          goto LABEL_35;
        v16 = (__int64)v70 + 1;
        v8 = *(_QWORD *)(v11[3] + 8 * v19);
        goto LABEL_15;
      }
      if ( v46 == -1 || v45[1] == -1 )
        goto LABEL_36;
      if ( !v44 )
        goto LABEL_76;
      v47 = a2[1];
      v48 = v74;
      v70 = (_QWORD *)v44;
      v49 = memcmp((const void *)(v47 + v46), (const void *)(v47 + v74), v44);
      v44 = (size_t)v70;
      if ( !v49 )
        goto LABEL_54;
LABEL_36:
      v37 = sub_40D2C0(v73, v73 + 2, &v74, v71, a4, (__int64)&v75);
      v10 = v74;
      v8 = v37;
      v18 = a4[1];
      if ( v18 < v74 )
        goto LABEL_37;
      goto LABEL_23;
    }
    v70 = (_QWORD *)v20;
    v43 = sub_40E290(v12, v11 + 27, v8, (__int64)a2, v74);
    v44 = v43;
    if ( !v43 )
    {
      v15 = v74;
      v13 = (__int64)v70 + *v11;
      goto LABEL_13;
    }
LABEL_64:
    v48 = v74;
LABEL_54:
    v16 = v48 + v44;
    v8 = *(_QWORD *)(v11[3] + 8 * v8);
LABEL_15:
    v74 = v16;
    if ( v73 )
    {
      if ( v16 > a2[21] )
        goto LABEL_36;
      v17 = *(_QWORD *)(a2[23] + 8 * v16);
      if ( !v17 || !sub_409B10(*(_QWORD *)(v17 + 16), (__int64 *)(v17 + 24), v8) )
        goto LABEL_36;
    }
    *((_QWORD *)&v75 + 1) = 0LL;
LABEL_20:
    if ( v8 < 0 )
    {
LABEL_34:
      if ( v8 == -2 )
        goto LABEL_80;
      goto LABEL_35;
    }
LABEL_21:
    v10 = v74;
  }
  v25 = v11[5];
  v70 = *(_QWORD **)(a2[23] + 8 * v74);
  v26 = v25 + 24 * v8;
  if ( !(unsigned __int8)sub_408500(&v75, v8) )
    goto LABEL_80;
  if ( *(__int64 *)(v26 + 8) <= 0 )
  {
LABEL_35:
    if ( !v73 )
    {
      free(ptr);
      result = 1LL;
      if ( v66 )
      {
        LODWORD(v73) = 1;
        free(dest);
        return (unsigned int)v73;
      }
      return result;
    }
    goto LABEL_36;
  }
  v27 = v70[2];
  v28 = v70 + 3;
  v29 = *(_QWORD *)(v26 + 16);
  v70 = a2;
  v30 = 0LL;
  v31 = -1LL;
  v32 = v27;
  v33 = v28;
  while ( 2 )
  {
    v34 = *(_QWORD *)(v29 + 8 * v30);
    if ( !sub_409B10(v32, v33, v34) )
    {
LABEL_32:
      v30 = v35 + 1;
      if ( v36 == v30 )
      {
        v8 = v31;
        a2 = v70;
        if ( v8 >= 0 )
          goto LABEL_21;
        goto LABEL_34;
      }
      continue;
    }
    break;
  }
  if ( v31 == -1 )
  {
    v31 = v34;
    goto LABEL_32;
  }
  v8 = v31;
  v50 = v31;
  a2 = v70;
  if ( sub_409B10(*((__int64 *)&v75 + 1), p_ptr, v50) )
  {
    v8 = v34;
    goto LABEL_20;
  }
  v51 = v73;
  if ( !v73 )
    goto LABEL_20;
  v52 = *v73;
  v53 = v74;
  v54 = *v73 + 1;
  *v73 = v54;
  if ( v54 != v51[1] )
  {
    v55 = (char *)v51[2];
    goto LABEL_59;
  }
  v70 = (_QWORD *)v53;
  v55 = (char *)realloc((void *)v73[2], 96 * v54);
  if ( v55 )
  {
    v63 = v73;
    v53 = (__int64)v70;
    v73[1] *= 2LL;
    v63[2] = (__int64)v55;
LABEL_59:
    v56 = (__int64 *)&v55[48 * v52];
    v56[1] = v34;
    v57 = n;
    *v56 = v53;
    v58 = malloc(v57);
    v56[2] = (__int64)v58;
    if ( v58 )
    {
      memcpy(v58, a4, v57);
      if ( !(unsigned int)sub_40ABB0((__int64)(v56 + 3), (__int64)&v75) )
        goto LABEL_20;
    }
  }
  free(ptr);
  if ( v66 )
    goto LABEL_93;
LABEL_62:
  sub_40D270((__int64)v73);
  return 12LL;
}

__int64 __fastcall sub_40F510(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  char *v19; // rdi
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // [rsp+10h] [rbp-40h]

  result = sub_40E520(a1, (__int64)(a3 + 2), *a3, a3[1], a4, a5, 8u);
  if ( !(_DWORD)result )
  {
    v11 = a3[1];
    v12 = *(_QWORD *)(a1 + 200);
    v13 = *(_QWORD *)(a1 + 208);
    v14 = *a2;
    v15 = *(char **)(a1 + 216);
    v16 = v11;
    if ( v12 >= v13 )
    {
      v23 = *a2;
      v20 = (char *)realloc(v15, 80 * v13);
      if ( !v20 )
      {
        free(*(void **)(a1 + 216));
        return 12LL;
      }
      v21 = *(_QWORD *)(a1 + 208);
      v22 = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 216) = v20;
      memset(&v20[40 * v22], 0, 40 * v21);
      *(_QWORD *)(a1 + 208) *= 2LL;
      v12 = *(_QWORD *)(a1 + 200);
      v15 = *(char **)(a1 + 216);
      v16 = a3[1];
      v14 = v23;
    }
    v17 = 40 * v12;
    if ( v12 > 0 )
    {
      v18 = (__int64)&v15[v17 - 40];
      if ( a5 == *(_QWORD *)(v18 + 8) )
        *(_BYTE *)(v18 + 32) = 1;
    }
    v19 = &v15[v17];
    *(_QWORD *)v19 = a4;
    *((_QWORD *)v19 + 1) = a5;
    *((_WORD *)v19 + 17) = -(v11 == v14);
    *((_QWORD *)v19 + 2) = v14;
    *((_QWORD *)v19 + 3) = v11;
    *(_QWORD *)(a1 + 200) = v12 + 1;
    v19[32] = 0;
    if ( *(int *)(a1 + 224) < v11 - v14 )
      *(_DWORD *)(a1 + 224) = v11 - v14;
    return sub_4090E0((_QWORD *)a1, a5 + v16 - *a2);
  }
  return result;
}

__int64 __fastcall sub_40F6B0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rax
  int v7; // ebx
  char v8; // al
  __int64 v9; // rcx
  __int64 i; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rbp
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 **v24; // r11
  __int64 v25; // rax
  __int64 *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 *v29; // rax
  void *v30; // rdi
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rax
  __int64 result; // rax
  __int64 v38; // r12
  __int64 v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rbp
  __int64 v42; // r12
  __int64 v43; // r8
  __int64 *v44; // r9
  __int64 v45; // r13
  size_t v46; // rdx
  __int64 v47; // r15
  int v48; // eax
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rbp
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 *v59; // rax
  __int64 v60; // rdx
  void *v61; // rax
  void *v62; // rax
  __int64 v63; // [rsp+8h] [rbp-E0h]
  __int64 v64; // [rsp+10h] [rbp-D8h]
  __int64 v65; // [rsp+10h] [rbp-D8h]
  __int64 v66; // [rsp+18h] [rbp-D0h]
  __int64 v67; // [rsp+18h] [rbp-D0h]
  __int64 v68; // [rsp+20h] [rbp-C8h]
  __int64 v69; // [rsp+20h] [rbp-C8h]
  __int64 v70; // [rsp+20h] [rbp-C8h]
  __int64 *v71; // [rsp+20h] [rbp-C8h]
  unsigned int v72; // [rsp+28h] [rbp-C0h]
  __int64 **v73; // [rsp+28h] [rbp-C0h]
  __int64 **v74; // [rsp+28h] [rbp-C0h]
  __int64 v75; // [rsp+28h] [rbp-C0h]
  size_t v76; // [rsp+28h] [rbp-C0h]
  __int64 v77; // [rsp+28h] [rbp-C0h]
  __int64 v78; // [rsp+28h] [rbp-C0h]
  __int64 *v79; // [rsp+30h] [rbp-B8h]
  __int64 v80; // [rsp+30h] [rbp-B8h]
  _QWORD *v81; // [rsp+38h] [rbp-B0h]
  __int64 v82; // [rsp+40h] [rbp-A8h]
  __int64 v83; // [rsp+40h] [rbp-A8h]
  __int64 v86; // [rsp+58h] [rbp-90h]
  __int64 v87; // [rsp+60h] [rbp-88h]
  __int64 *v88; // [rsp+68h] [rbp-80h]
  __int64 v89; // [rsp+70h] [rbp-78h]
  __int64 v90; // [rsp+78h] [rbp-70h]
  unsigned int v91; // [rsp+8Ch] [rbp-5Ch] BYREF
  char v92[16]; // [rsp+90h] [rbp-58h] BYREF
  void *ptr; // [rsp+A0h] [rbp-48h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 72);
  v81 = *(_QWORD **)(a1 + 152);
  v86 = 8 * v4;
  v63 = 0LL;
  if ( *a2 <= 0 )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)(*a3 + 8 * v63);
    v6 = 16 * v5 + *v81;
    if ( *(_BYTE *)(v6 + 8) == 4 )
      break;
LABEL_9:
    if ( ++v63 >= *a2 )
      return 0LL;
  }
  v7 = *(_DWORD *)(v6 + 8);
  if ( (v7 & 0x3FF00) != 0 )
  {
    v8 = sub_40B840(v3, v4, *(_DWORD *)(v3 + 160));
    if ( (v7 & 0x400) != 0 )
    {
      if ( (v8 & 1) == 0 || (v7 & 0x800) != 0 )
        goto LABEL_9;
    }
    else if ( (v7 & 0x800) != 0 && (v8 & 1) != 0 )
    {
      goto LABEL_9;
    }
    if ( (v7 & 0x2000) != 0 && (v8 & 2) == 0 || (v7 & 0x8000) != 0 && (v8 & 8) == 0 )
      goto LABEL_9;
  }
  v9 = 0LL;
  for ( i = *(_QWORD *)(v3 + 200); v9 < i; i = v12 )
  {
    v11 = *(_QWORD *)(v3 + 216);
    v12 = (v9 + i) / 2;
    if ( v4 <= *(_QWORD *)(v11 + 40 * v12 + 8) )
    {
      while ( v12 > v9 )
      {
        v14 = (v12 + v9) / 2;
        if ( v4 > *(_QWORD *)(v11 + 40 * v14 + 8) )
          goto LABEL_30;
        v12 = (v12 + v9) / 2;
      }
      break;
    }
    v14 = (v9 + i) / 2;
    v12 = i;
LABEL_30:
    v9 = v14 + 1;
  }
  if ( *(_QWORD *)(v3 + 200) > v9 )
  {
    v13 = (_QWORD *)(*(_QWORD *)(v3 + 216) + 40 * v9);
    if ( v13[1] == v4 && v9 != -1 )
    {
      while ( v5 != *v13 )
      {
        v13 += 5;
        if ( !*((_BYTE *)v13 - 8) )
          goto LABEL_31;
      }
      goto LABEL_29;
    }
  }
LABEL_31:
  v15 = **(_QWORD **)(v3 + 152);
  v88 = *(__int64 **)(v3 + 152);
  v87 = *(_QWORD *)(v15 + 16 * v5);
  if ( *(__int64 *)(v3 + 232) <= 0 )
  {
LABEL_29:
    v91 = 0;
    goto LABEL_9;
  }
  v66 = v4;
  v64 = 0LL;
  v68 = *(_QWORD *)(v3 + 8);
  v82 = v5;
  v89 = *(_QWORD *)(v3 + 200);
  while ( 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v3 + 248) + 8 * v64);
    if ( v87 != *(_QWORD *)(v15 + 16LL * *(_QWORD *)(v16 + 8)) )
      goto LABEL_34;
    v38 = *(_QWORD *)v16;
    v39 = v66;
    if ( *(__int64 *)(v16 + 32) > 0 )
      break;
LABEL_73:
    if ( v66 >= v38 )
    {
      v49 = v39;
      do
      {
        if ( v38 - *(_QWORD *)v16 > 0 )
        {
          if ( *(_QWORD *)(v3 + 48) <= v49 )
          {
            if ( *(_QWORD *)(v3 + 88) <= v49 )
              break;
            result = sub_408F90(v3, (unsigned int)(v49 + 1));
            if ( (_DWORD)result )
              return result;
            v68 = *(_QWORD *)(v3 + 8);
          }
          if ( *(_BYTE *)(v68 + v49) != *(_BYTE *)(v68 + v38 - 1) )
            break;
          ++v49;
        }
        v50 = *(_QWORD *)(*(_QWORD *)(v3 + 184) + 8 * v38);
        if ( v50 )
        {
          v51 = *(_QWORD *)(v50 + 16);
          if ( v51 > 0 )
          {
            v52 = *(_QWORD *)(v50 + 24);
            v53 = 0LL;
            while ( 1 )
            {
              v54 = *(_QWORD *)(v52 + 8 * v53);
              v55 = *v88 + 16 * v54;
              if ( *(_BYTE *)(v55 + 8) == 9 && v87 == *(_QWORD *)v55 )
                break;
              if ( v51 == ++v53 )
                goto LABEL_92;
            }
            if ( v54 != -1 )
            {
              v56 = *(_QWORD *)(v16 + 16);
              v57 = *(_QWORD *)v16;
              if ( !v56 )
              {
                v77 = *(_QWORD *)v16;
                v61 = calloc(0x18uLL, v38 - v57 + 1);
                v57 = v77;
                v56 = (__int64)v61;
                *(_QWORD *)(v16 + 16) = v61;
                if ( !v61 )
                  return 12LL;
              }
              result = sub_40E520(v3, v56, *(_QWORD *)(v16 + 8), v57, v54, v38, 9u);
              if ( (_DWORD)result != 1 )
              {
                if ( (_DWORD)result )
                  return result;
                v58 = *(_QWORD *)(v16 + 24);
                if ( *(_QWORD *)(v16 + 32) == v58 )
                {
                  v78 = 2 * v58 + 1;
                  v62 = realloc(*(void **)(v16 + 40), 8 * v78);
                  if ( !v62 )
                    return 12LL;
                  *(_QWORD *)(v16 + 40) = v62;
                  *(_QWORD *)(v16 + 24) = v78;
                }
                v59 = (__int64 *)calloc(1uLL, 0x28uLL);
                if ( !v59 )
                  return 12LL;
                v60 = *(_QWORD *)(v16 + 32);
                *(_QWORD *)(*(_QWORD *)(v16 + 40) + 8 * v60) = v59;
                *v59 = v54;
                v59[1] = v38;
                *(_QWORD *)(v16 + 32) = v60 + 1;
                sub_40F510(v3, (__int64 *)v16, v59, v82, v66);
              }
            }
          }
        }
LABEL_92:
        ++v38;
      }
      while ( v66 >= v38 );
    }
LABEL_34:
    if ( ++v64 >= *(_QWORD *)(v3 + 232) )
    {
      v4 = v66;
      v17 = v82;
      v91 = 0;
      if ( v89 < *(_QWORD *)(v3 + 200) )
      {
        v83 = 8 * v82;
        v18 = v3;
        v19 = v89;
        v20 = v18;
        while ( 1 )
        {
          v32 = (_QWORD *)(*(_QWORD *)(v20 + 216) + 40 * v19);
          if ( v17 != *v32 || v4 != v32[1] )
            goto LABEL_46;
          v33 = v32[3];
          v34 = v32[2];
          v35 = v81[6];
          v69 = v33 - v34;
          v67 = v33 == v34 ? v35 + 24LL * **(_QWORD **)(v81[5] + 24 * v17 + 16) : v35 + 24LL * *(_QWORD *)(v81[3] + v83);
          v21 = v4 + v33 - v34;
          v65 = 0LL;
          v22 = sub_40B840(v20, v21 - 1, *(_DWORD *)(v20 + 160));
          v23 = *(_QWORD *)(v20 + 184);
          v24 = (__int64 **)(v23 + 8 * v21);
          v25 = *(_QWORD *)(v23 + v86);
          v26 = *v24;
          if ( v25 )
            v65 = *(_QWORD *)(v25 + 16);
          if ( v26 )
            break;
          v74 = v24;
          v36 = sub_40ADC0(&v91, v81, v67, v22);
          v31 = *(_QWORD *)(v20 + 184);
          *v74 = v36;
          if ( !*(_QWORD *)(v31 + 8 * v21) )
            goto LABEL_52;
LABEL_44:
          if ( v69 || *(_QWORD *)(*(_QWORD *)(v31 + v86) + 16LL) <= v65 )
          {
LABEL_46:
            if ( ++v19 >= *(_QWORD *)(v20 + 200) )
              goto LABEL_65;
          }
          else
          {
            result = sub_40B6F0(v20, (__int64 *)(v67 + 8), (_QWORD *)(v67 + 16), v4);
            v91 = result;
            if ( (_DWORD)result )
              return result;
            result = sub_40F6B0(v20, v67 + 8, v67 + 16);
            v91 = result;
            if ( (_DWORD)result )
              return result;
            if ( ++v19 >= *(_QWORD *)(v20 + 200) )
            {
LABEL_65:
              v3 = v20;
              goto LABEL_9;
            }
          }
        }
        v72 = v22;
        v27 = sub_40AC30((__int64)v92, v26[10], v67);
        v28 = v72;
        v91 = v27;
        if ( v27 )
        {
          free(ptr);
          return v91;
        }
        v73 = (__int64 **)(*(_QWORD *)(v20 + 184) + 8 * v21);
        v29 = sub_40ADC0(&v91, v81, (__int64)v92, v28);
        v30 = ptr;
        *v73 = v29;
        free(v30);
        v31 = *(_QWORD *)(v20 + 184);
        if ( *(_QWORD *)(v31 + 8 * v21) )
          goto LABEL_44;
LABEL_52:
        result = v91;
        if ( v91 )
          return result;
        goto LABEL_44;
      }
      goto LABEL_9;
    }
    v15 = *v88;
  }
  v40 = *(_QWORD *)v16;
  v41 = 0LL;
  v42 = v68;
  v43 = v66;
  while ( 2 )
  {
    v44 = *(__int64 **)(*(_QWORD *)(v16 + 40) + 8 * v41);
    v45 = v44[1];
    v46 = v45 - v40;
    v47 = v45 - v40 + v43;
    if ( v45 - v40 <= 0 )
    {
LABEL_60:
      result = sub_40F510(v3, (__int64 *)v16, v44, v82, v66);
      v42 = *(_QWORD *)(v3 + 8);
      if ( (unsigned int)result > 1 )
        return result;
      ++v41;
      v40 = v45;
      v43 = v47;
      if ( v41 >= *(_QWORD *)(v16 + 32) )
      {
        v68 = *(_QWORD *)(v3 + 8);
        goto LABEL_72;
      }
      continue;
    }
    break;
  }
  if ( *(_QWORD *)(v3 + 48) >= v47 )
  {
LABEL_59:
    v79 = v44;
    v75 = v40;
    v70 = v43;
    v48 = memcmp((const void *)(v42 + v43), (const void *)(v42 + v40), v46);
    v43 = v70;
    v40 = v75;
    v44 = v79;
    if ( v48 )
      goto LABEL_96;
    goto LABEL_60;
  }
  v76 = v44[1] - v40;
  v71 = *(__int64 **)(*(_QWORD *)(v16 + 40) + 8 * v41);
  if ( *(_QWORD *)(v3 + 88) < v47 )
  {
LABEL_96:
    v68 = v42;
    v39 = v43;
    v38 = v40;
    if ( *(_QWORD *)(v16 + 32) > v41 )
      goto LABEL_34;
    if ( v41 > 0 )
    {
      v45 = v40;
      v47 = v43;
LABEL_72:
      v38 = v45 + 1;
      v39 = v47;
    }
    goto LABEL_73;
  }
  v90 = v43;
  v80 = v40;
  result = sub_4090E0((_QWORD *)v3, v46 + v43);
  if ( !(_DWORD)result )
  {
    v42 = *(_QWORD *)(v3 + 8);
    v46 = v76;
    v44 = v71;
    v43 = v90;
    v40 = v80;
    goto LABEL_59;
  }
  return result;
}

__int64 *__fastcall sub_40FF30(_DWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r12
  _QWORD *v4; // r15
  __int64 v5; // r14
  __int64 *v6; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // eax
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 **v16; // [rsp+8h] [rbp-60h]
  __m128i v17; // [rsp+10h] [rbp-58h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h]

  v3 = *(_QWORD *)(a2 + 72);
  v4 = *(_QWORD **)(a2 + 152);
  v5 = 8 * v3 + *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(a2 + 192) >= v3 )
  {
    if ( *(_QWORD *)v5 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)v5 + 80LL);
      if ( a3 )
      {
        v9 = a3[10];
        v10 = sub_40AC30((__int64)&v17, v9, v8);
        *a1 = v10;
        if ( v10 )
          return 0LL;
        v11 = sub_40B840(a2, *(_QWORD *)(a2 + 72) - 1LL, *(_DWORD *)(a2 + 160));
        v16 = (__int64 **)(8 * v3 + *(_QWORD *)(a2 + 184));
        v6 = sub_40ADC0(a1, v4, (__int64)&v17, v11);
        *v16 = v6;
        if ( v9 )
          free(ptr);
      }
      else
      {
        v12 = *(_DWORD *)(a2 + 160);
        v17 = _mm_loadu_si128((const __m128i *)v8);
        ptr = *(void **)(v8 + 16);
        v13 = sub_40B840(a2, v3 - 1, v12);
        v6 = sub_40ADC0(a1, v4, (__int64)&v17, v13);
        *(_QWORD *)v5 = v6;
      }
    }
    else
    {
      *(_QWORD *)v5 = a3;
      v6 = a3;
    }
  }
  else
  {
    *(_QWORD *)v5 = a3;
    v6 = a3;
    *(_QWORD *)(a2 + 192) = v3;
  }
  if ( v4[19] )
  {
    if ( v6 )
    {
      v14 = sub_40B6F0(a2, v6 + 2, v6 + 3, v3);
      *a1 = v14;
      if ( !v14 )
      {
        if ( (v6[13] & 0x40) == 0 )
          return v6;
        v15 = sub_40F6B0(a2, v6 + 2, v6 + 3);
        *a1 = v15;
        if ( !v15 )
          return *(__int64 **)(*(_QWORD *)(a2 + 184) + 8 * v3);
      }
    }
    return 0LL;
  }
  return v6;
}

__int64 __fastcall sub_4100F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // r12
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+8h] [rbp-90h]
  unsigned int v20; // [rsp+8h] [rbp-90h]
  __int64 n; // [rsp+10h] [rbp-88h]
  int v22; // [rsp+1Ch] [rbp-7Ch]
  __int64 v23; // [rsp+20h] [rbp-78h]
  __int64 v24; // [rsp+28h] [rbp-70h]
  __int64 *v25; // [rsp+30h] [rbp-68h]
  _QWORD *v26; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-50h]
  void *ptr; // [rsp+50h] [rbp-48h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 16);
  v27 = 1LL;
  v28 = 1LL;
  v5 = malloc(8uLL);
  ptr = v5;
  if ( !v5 )
    return 12LL;
  *v5 = v4;
  v6 = sub_411B80(a1, a2, v3, &v27);
  if ( v6 )
    goto LABEL_29;
  v22 = 0;
  v26 = (_QWORD *)(a2 + 48);
  if ( v3 <= 0 )
  {
LABEL_27:
    v6 = 0;
    goto LABEL_29;
  }
  while ( 1 )
  {
    n = 8 * v3;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8 * v3) )
    {
      v22 = 0;
      if ( *(int *)(a1 + 224) < 0 )
        goto LABEL_31;
    }
    else if ( *(_DWORD *)(a1 + 224) < ++v22 )
    {
LABEL_31:
      memset(*(void **)a2, 0, n);
      free(ptr);
      return 0LL;
    }
    v7 = *(_QWORD *)(a1 + 184);
    --v3;
    v28 = 0LL;
    v8 = *(_QWORD *)(v7 + n - 8);
    if ( v8 )
    {
      v9 = *(_QWORD **)(a1 + 152);
      if ( *(__int64 *)(v8 + 40) > 0 )
        break;
    }
LABEL_25:
    v6 = sub_411B80(a1, a2, v3, &v27);
    if ( v6 )
      goto LABEL_29;
    if ( !v3 )
      goto LABEL_27;
  }
  v19 = 0LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v8 + 48);
    v13 = *(_QWORD *)(v12 + 8 * v19);
    v14 = 16 * v13 + *v9;
    if ( (*(_BYTE *)(v14 + 10) & 0x10) != 0 )
    {
      v24 = 16LL * *(_QWORD *)(v12 + 8 * v19);
      v25 = *(__int64 **)(a1 + 152);
      v23 = *(_QWORD *)(a2 + 24);
      v15 = sub_40E290(*v25, v25 + 27, *(_QWORD *)(v12 + 8 * v19), a1, v3);
      v11 = v15;
      if ( v15 <= 0 )
      {
        if ( v15 )
          goto LABEL_13;
LABEL_24:
        v14 = v24 + *v9;
        goto LABEL_9;
      }
      v16 = v3 + v15;
      if ( v23 < v16 )
        goto LABEL_13;
      v17 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v16);
      if ( !v17 )
        goto LABEL_24;
      if ( sub_409B10(*(_QWORD *)(v17 + 16), (__int64 *)(v17 + 24), *(_QWORD *)(v25[3] + 8 * v13)) )
        goto LABEL_13;
      v14 = v24 + *v9;
    }
LABEL_9:
    if ( (unsigned __int8)sub_40B930(a1, v14, v3) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)a2 + n);
      if ( v10 )
      {
        if ( sub_409B10(*(_QWORD *)(v10 + 16), (__int64 *)(v10 + 24), *(_QWORD *)(v9[3] + 8 * v13)) )
          break;
      }
    }
LABEL_16:
    if ( ++v19 >= *(_QWORD *)(v8 + 40) )
      goto LABEL_25;
  }
  v11 = 1;
LABEL_13:
  if ( *(_QWORD *)(a2 + 40)
    && (unsigned __int8)sub_409DA0(
                          (_QWORD *)a1,
                          (__int64 *)(a2 + 40),
                          v26,
                          *(_QWORD *)(v9[3] + 8 * v13),
                          v11 + v3,
                          v13,
                          v3)
    || (unsigned __int8)sub_408500(&v27, v13) )
  {
    goto LABEL_16;
  }
  v6 = 12;
LABEL_29:
  v20 = v6;
  free(ptr);
  return v20;
}

__int64 __fastcall sub_410420(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 *a8,
        int a9)
{
  __int64 v10; // rbp
  __int64 v12; // rdx
  _BYTE *v13; // rax
  _BYTE *v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rax
  signed __int64 v23; // rsi
  char v24; // al
  bool v25; // cc
  __int64 v26; // rax
  unsigned __int8 v27; // al
  __int64 v28; // r15
  void *v29; // r14
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  int v34; // ecx
  __int64 *v35; // rdx
  int v36; // eax
  char v37; // cl
  __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rbx
  __int64 *v41; // r14
  unsigned int v42; // eax
  bool v43; // zf
  char v44; // al
  unsigned __int64 v45; // r12
  __int64 v46; // rbx
  __int64 v47; // rax
  char v48; // al
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 *v51; // rbp
  __int64 v52; // rax
  char v53; // cl
  __int64 v54; // rdx
  __int64 v55; // rbx
  void *v56; // r14
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 *v63; // rax
  int v64; // eax
  __int64 *v65; // rbp
  __int64 v66; // r12
  __int64 v67; // r8
  int v68; // eax
  __int64 v69; // rbx
  int v70; // eax
  __int64 v71; // rdx
  unsigned int v72; // eax
  __int64 **v73; // r15
  __int64 *v74; // rax
  void *v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // r15
  __int64 v79; // rax
  int v80; // ebx
  char v81; // al
  unsigned int v82; // eax
  __int64 *v83; // rax
  __int64 v84; // rbp
  unsigned int v85; // ebp
  __int64 v86; // rcx
  _BYTE *v87; // rax
  __int64 v88; // rdx
  unsigned int v89; // eax
  __int64 v90; // rbp
  _QWORD *v91; // r15
  _QWORD *v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // r14
  __int64 v96; // r12
  __int64 *v97; // rax
  bool v98; // r8
  unsigned int v99; // eax
  __int64 v100; // rdx
  char v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r11
  __int64 v105; // r10
  __int64 v106; // rdi
  __int64 *i; // rax
  __int64 v108; // rsi
  __int64 *v109; // rax
  __int64 v110; // rsi
  __int64 j; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // [rsp+8h] [rbp-230h]
  __int64 v116; // [rsp+8h] [rbp-230h]
  __int64 v117; // [rsp+8h] [rbp-230h]
  __int64 *v118; // [rsp+8h] [rbp-230h]
  __int64 v119; // [rsp+10h] [rbp-228h]
  unsigned int v120; // [rsp+10h] [rbp-228h]
  __int64 v121; // [rsp+18h] [rbp-220h]
  void *v122; // [rsp+20h] [rbp-218h]
  void *v123; // [rsp+20h] [rbp-218h]
  unsigned __int64 v124; // [rsp+28h] [rbp-210h]
  __int64 v125; // [rsp+30h] [rbp-208h]
  __int64 v126; // [rsp+30h] [rbp-208h]
  __int64 v127; // [rsp+38h] [rbp-200h]
  _BOOL4 v129; // [rsp+48h] [rbp-1F0h]
  unsigned int v130; // [rsp+4Ch] [rbp-1ECh]
  __int64 *v131; // [rsp+50h] [rbp-1E8h]
  _QWORD *v132; // [rsp+58h] [rbp-1E0h]
  _BYTE *v133; // [rsp+60h] [rbp-1D8h]
  __int64 v134; // [rsp+68h] [rbp-1D0h]
  __int64 v137; // [rsp+80h] [rbp-1B8h]
  __int64 v138; // [rsp+88h] [rbp-1B0h]
  __int64 v139; // [rsp+90h] [rbp-1A8h]
  unsigned int v140; // [rsp+98h] [rbp-1A0h]
  int v141; // [rsp+9Ch] [rbp-19Ch]
  __int64 *v142; // [rsp+A0h] [rbp-198h]
  int v143; // [rsp+A8h] [rbp-190h]
  unsigned __int8 v144; // [rsp+ADh] [rbp-18Bh]
  bool v145; // [rsp+AFh] [rbp-189h]
  int v146; // [rsp+B0h] [rbp-188h] BYREF
  int v147; // [rsp+B4h] [rbp-184h] BYREF
  __int64 v148; // [rsp+B8h] [rbp-180h] BYREF
  __m128i v149; // [rsp+C0h] [rbp-178h] BYREF
  void *v150; // [rsp+D0h] [rbp-168h]
  unsigned __int64 v151; // [rsp+D8h] [rbp-160h]
  __int128 v152; // [rsp+E0h] [rbp-158h]
  void *v153; // [rsp+F0h] [rbp-148h]
  __int64 v154[39]; // [rsp+100h] [rbp-138h] BYREF

  v10 = a5;
  v12 = *(_QWORD *)a1;
  v121 = *(_QWORD *)a1;
  v13 = 0LL;
  memset(v154, 0, 0x100uLL);
  v14 = *(_BYTE **)(a1 + 32);
  v154[19] = v12;
  v133 = v14;
  if ( v14 )
  {
    if ( (*(_BYTE *)(a1 + 56) & 8) == 0 || a4 == a5 )
    {
      v133 = 0LL;
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 56) & 1) == 0 )
        v13 = v14;
      v133 = v13;
    }
  }
  v139 = 0LL;
  v15 = *(_QWORD *)(a1 + 48);
  if ( v15 < a7 )
  {
    v16 = a7 - 1 - v15;
    a7 = v15 + 1;
    v139 = v16;
  }
  if ( !*(_QWORD *)(a1 + 16) )
    return 1;
  v17 = *(_QWORD *)(v121 + 72);
  if ( !v17 )
    return 1;
  v18 = *(_QWORD *)(v121 + 80);
  if ( !v18 )
    return 1;
  v19 = *(_QWORD *)(v121 + 88);
  if ( !v19 || !*(_QWORD *)(v121 + 96) )
    return 1;
  if ( !*(_QWORD *)(v17 + 16) && !*(_QWORD *)(v18 + 16) && (!*(_QWORD *)(v19 + 16) || *(char *)(a1 + 56) >= 0) )
  {
    if ( a4 )
    {
      v130 = 1;
      if ( a5 )
        return v130;
    }
    v10 = 0LL;
    a4 = 0LL;
  }
  v129 = 1;
  if ( !a7 )
    v129 = *(_QWORD *)(v121 + 152) != 0LL;
  v20 = *(_QWORD *)(a1 + 40);
  v21 = *(_DWORD *)(v121 + 180);
  v115 = *(_QWORD *)(a1 + 24);
  v22 = *(_QWORD *)(v121 + 16);
  LODWORD(v154[18]) = v21;
  v23 = v22 + 1;
  v138 = v20;
  if ( v22 + 1 < v21 )
    v23 = v21;
  v154[15] = v20;
  v154[11] = a3;
  v154[10] = a3;
  if ( v23 > a3 + 1 )
    v23 = a3 + 1;
  v154[13] = a3;
  v154[12] = a3;
  v154[0] = a2;
  LOBYTE(v154[17]) = (v115 & 0x400000) != 0;
  v24 = *(_BYTE *)(v121 + 176);
  BYTE3(v154[17]) = (v20 | v115 & 0x400000) != 0;
  BYTE2(v154[17]) = (v24 & 8) != 0;
  BYTE1(v154[17]) = (v24 & 4) != 0;
  v130 = sub_4083F0((__int64)v154, v23);
  if ( v130 )
    goto LABEL_132;
  v154[16] = v121 + 184;
  BYTE6(v154[17]) = (*(_BYTE *)(v121 + 176) & 0x10) != 0;
  if ( BYTE3(v154[17]) || (v25 = *(_DWORD *)(v121 + 180) <= 1, v154[1] = a2, v26 = a3, !v25) )
    v26 = 0LL;
  v154[6] = v26;
  v154[7] = v26;
  v154[13] = a6;
  v27 = *(_BYTE *)(a1 + 56);
  v154[12] = a6;
  BYTE5(v154[17]) = v27 >> 7;
  v28 = *(_QWORD *)(v121 + 152);
  v154[21] = -1LL;
  LODWORD(v154[20]) = a9;
  if ( 2 * v28 > 0 )
  {
    if ( 2 * v28 > 0x666666666666666LL )
      goto LABEL_206;
    v29 = malloc(80 * v28);
    v154[27] = (__int64)v29;
    v154[31] = (__int64)malloc(16 * v28);
    if ( !v154[31] || !v29 )
      goto LABEL_206;
  }
  v154[26] = 2 * v28;
  LODWORD(v154[28]) = 1;
  v154[30] = 2 * v28;
  if ( a7 > 1 || (*(_BYTE *)(v121 + 176) & 2) != 0 )
  {
    if ( v154[8] > 0x1FFFFFFFFFFFFFFEuLL )
      goto LABEL_206;
    v30 = malloc(8 * v154[8] + 8);
    v154[23] = (__int64)v30;
    if ( !v30 )
      goto LABEL_200;
  }
  else
  {
    v154[23] = 0LL;
  }
  v148 = a4;
  LODWORD(v154[14]) = (a9 & 1) == 0 ? 6 : 4;
  v141 = 2 * (a4 <= v10) - 1;
  v31 = v10;
  if ( a4 <= v10 )
    v31 = a4;
  v137 = v31;
  v32 = v10;
  if ( a4 >= v10 )
    v32 = a4;
  v134 = v32;
  v33 = 8;
  v143 = *(_DWORD *)(v121 + 180);
  if ( v133 )
  {
    v34 = 4;
    if ( *(_DWORD *)(v121 + 180) != 1 )
      v34 = 4 * ((v138 | *(_QWORD *)(a1 + 24) & 0x400000LL) == 0);
    v33 = (2 * (a4 <= v10)) | v34 | (v138 != 0);
  }
  if ( a4 < v137 || a4 > v134 )
    goto LABEL_123;
  v35 = 0LL;
  if ( a4 <= v10 )
    v35 = &v148;
  v142 = v35;
  v145 = v35 != 0LL;
  v36 = v33 - 4;
  v140 = v36;
LABEL_50:
  switch ( v36 )
  {
    case 0:
    case 1:
      if ( v137 > a4 )
        goto LABEL_123;
      v37 = 0;
      v38 = a4;
      do
      {
        v39 = 0LL;
        if ( a3 > v38 )
          v39 = *(unsigned __int8 *)(a2 + v38);
        if ( v138 )
          v39 = *(unsigned __int8 *)(v138 + v39);
        if ( v133[v39] )
        {
          if ( v37 )
          {
            v148 = v38;
            a4 = v38;
          }
          goto LABEL_62;
        }
        --v38;
        v37 = 1;
      }
      while ( v38 >= v137 );
      v148 = v38;
      v30 = (_QWORD *)v154[23];
      v130 = 1;
      goto LABEL_133;
    case 2:
      if ( v134 <= a4 )
        goto LABEL_117;
      v60 = a4 + 1;
      if ( v133[*(unsigned __int8 *)(a2 + a4)] )
        goto LABEL_62;
      while ( 1 )
      {
        a4 = v60;
        if ( v134 == v60 )
          break;
        v61 = *(unsigned __int8 *)(a2 + v60++);
        if ( v133[v61] )
          goto LABEL_229;
      }
      v148 = v134;
      goto LABEL_117;
    case 3:
      if ( v134 <= a4 )
        goto LABEL_117;
      v57 = a4 + 1;
      if ( v133[*(unsigned __int8 *)(v138 + *(unsigned __int8 *)(a2 + a4))] )
        goto LABEL_62;
      break;
    case 4:
      goto LABEL_62;
    default:
      goto LABEL_185;
  }
  while ( 1 )
  {
    a4 = v57;
    if ( v134 == v57 )
      break;
    v58 = *(unsigned __int8 *)(v138 + *(unsigned __int8 *)(a2 + v57++));
    if ( v133[v58] )
    {
LABEL_229:
      v148 = a4;
      goto LABEL_62;
    }
  }
  v148 = v134;
LABEL_117:
  if ( v134 == a4 )
  {
    v59 = 0LL;
    if ( a3 > v134 )
      v59 = *(unsigned __int8 *)(a2 + v134);
    if ( v138 )
      v59 = *(unsigned __int8 *)(v138 + v59);
    if ( !v133[v59] )
    {
LABEL_123:
      v30 = (_QWORD *)v154[23];
      v130 = 1;
      goto LABEL_133;
    }
  }
LABEL_62:
  v130 = sub_40BB30((__int64)v154, a4, a9);
  if ( v130 )
    goto LABEL_132;
  if ( v143 != 1 && v154[6] && *(_DWORD *)v154[2] == -1 )
    goto LABEL_182;
  v40 = (_QWORD *)v154[19];
  LODWORD(v154[28]) = 0;
  v154[25] = 0LL;
  v41 = *(__int64 **)(v154[19] + 72);
  v154[24] = 0LL;
  v146 = 0;
  v119 = v154[9];
  if ( *((char *)v41 + 104) < 0 )
  {
    v42 = sub_40B840((__int64)v154, v154[9] - 1, v154[20]);
    if ( (v42 & 1) != 0 )
    {
      v41 = (__int64 *)v40[10];
LABEL_226:
      if ( v41 )
        goto LABEL_72;
      v130 = v146;
      if ( v146 != 12 )
        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 0x431u, "check_matching");
LABEL_132:
      v30 = (_QWORD *)v154[23];
      goto LABEL_133;
    }
    if ( v42 )
    {
      if ( (v42 & 6) == 6 )
      {
        v41 = (__int64 *)v40[12];
      }
      else if ( (v42 & 2) != 0 )
      {
        v41 = (__int64 *)v40[11];
      }
      else
      {
        if ( (v42 & 4) == 0 )
          goto LABEL_72;
        v41 = sub_40ADC0(&v146, v40, v41[10], v42);
      }
      goto LABEL_226;
    }
  }
LABEL_72:
  if ( !v154[23] || (v43 = v40[19] == 0LL, *(_QWORD *)(v154[23] + 8 * v119) = v41, v43) )
  {
    v144 = v145;
    v44 = *((_BYTE *)v41 + 104);
    goto LABEL_75;
  }
  v114 = sub_40B6F0((__int64)v154, v41 + 2, v41 + 3, 0LL);
  v146 = v114;
  if ( v114 )
    goto LABEL_278;
  v44 = *((_BYTE *)v41 + 104);
  if ( (v44 & 0x40) != 0 )
  {
    v114 = sub_40F6B0((__int64)v154, v41 + 2, v41 + 3);
    v146 = v114;
    if ( !v114 )
    {
      v44 = *((_BYTE *)v41 + 104);
      goto LABEL_266;
    }
LABEL_278:
    v45 = v114;
    goto LABEL_104;
  }
LABEL_266:
  v144 = 0;
LABEL_75:
  LOBYTE(v122) = 0;
  v45 = -1LL;
  if ( (v44 & 0x10) != 0
    && (*((char *)v41 + 104) >= 0 || (v122 = (void *)sub_40BA60((__int64)v154, v41[2], v41 + 3, v119)) != 0LL) )
  {
    v45 = v119;
    LOBYTE(v122) = 1;
    if ( !v129 )
      goto LABEL_104;
  }
  v46 = v154[9];
  v124 = v45;
  v131 = v142;
LABEL_84:
  if ( v154[13] <= v46 )
    goto LABEL_141;
  v116 = v46 + 1;
  if ( (v46 + 1 < v154[8] || v154[8] >= v154[11]) && (v116 < v154[6] || v154[6] >= v154[11]) )
  {
    if ( (v41[13] & 0x20) == 0 )
      goto LABEL_88;
  }
  else
  {
    v64 = sub_408F90((__int64)v154, (unsigned int)(v46 + 2));
    v146 = v64;
    if ( v64 )
    {
      if ( v64 != 12 )
        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 0x468u, "check_matching");
      goto LABEL_206;
    }
    v46 = v154[9];
    if ( (v41[13] & 0x20) == 0 )
      goto LABEL_88;
  }
  v65 = (__int64 *)v154[19];
  if ( v41[2] <= 0 )
    goto LABEL_203;
  v66 = 0LL;
  v67 = v46;
  v132 = (_QWORD *)(v154[19] + 216);
  do
  {
    v77 = *v65;
    v78 = *(_QWORD *)(v41[3] + 8 * v66);
    v79 = *v65 + 16 * v78;
    if ( (*(_BYTE *)(v79 + 10) & 0x10) == 0 )
      goto LABEL_163;
    v80 = *(_DWORD *)(v79 + 8);
    if ( (v80 & 0x3FF00) == 0 )
      goto LABEL_155;
    v127 = *v65;
    v126 = v67;
    v81 = sub_40B840((__int64)v154, v67, v154[20]);
    v67 = v126;
    v77 = v127;
    if ( (v80 & 0x400) != 0 )
    {
      if ( (v81 & 1) == 0 || (v80 & 0x800) != 0 )
        goto LABEL_163;
    }
    else if ( (v80 & 0x800) != 0 && (v81 & 1) != 0 )
    {
      goto LABEL_163;
    }
    if ( ((v80 & 0x2000) == 0 || (v81 & 2) != 0) && ((v80 & 0x8000) == 0 || (v81 & 8) != 0) )
    {
LABEL_155:
      v68 = sub_40E290(v77, v132, v78, (__int64)v154, v67);
      if ( v68 )
      {
        v69 = v154[9] + v68;
        if ( SLODWORD(v154[28]) >= v68 )
          v68 = v154[28];
        LODWORD(v154[28]) = v68;
        v70 = sub_4090E0(v154, v69);
        v147 = v70;
        if ( v70 )
        {
LABEL_194:
          v76 = v154[23];
LABEL_195:
          v146 = v70;
          if ( !v76 )
            goto LABEL_199;
LABEL_196:
          v51 = 0LL;
LABEL_92:
          v51 = sub_40FF30(&v146, (__int64)v154, v51);
LABEL_93:
          if ( !v51 )
          {
            v30 = (_QWORD *)v154[23];
            if ( v146 )
              goto LABEL_200;
            if ( v154[23] && (!v129 & (unsigned __int8)v122) == 0 )
            {
              while ( 2 )
              {
                v52 = v154[9];
                v53 = 0;
                do
                {
                  v54 = v52 + 1;
                  if ( v154[24] < v52 + 1 )
                  {
                    v45 = v124;
                    if ( v53 )
                      v154[9] = v52;
                    goto LABEL_102;
                  }
                  ++v52;
                  v53 = 1;
                }
                while ( !v30[v54] );
                v154[9] = v54;
                v63 = sub_40FF30(&v146, (__int64)v154, 0LL);
                if ( !v146 )
                {
                  if ( !v63 )
                  {
                    v30 = (_QWORD *)v154[23];
                    continue;
                  }
                  v51 = v63;
                  goto LABEL_77;
                }
                break;
              }
              v51 = v63;
              if ( v63 )
                goto LABEL_77;
            }
LABEL_141:
            v45 = v124;
LABEL_102:
            if ( v131 )
              *v131 += v119;
LABEL_104:
            if ( v45 == -1LL )
              goto LABEL_181;
            if ( v45 != -2LL )
            {
              v154[21] = v45;
              if ( (*(_BYTE *)(a1 + 56) & 0x10) != 0 || a7 <= 1 )
              {
                if ( !*(_QWORD *)(v121 + 152) )
                  goto LABEL_131;
                v55 = v154[23];
                v154[22] = sub_40BA60(
                             (__int64)v154,
                             *(_QWORD *)(*(_QWORD *)(v154[23] + 8 * v45) + 16LL),
                             (_QWORD *)(*(_QWORD *)(v154[23] + 8 * v45) + 24LL),
                             v45);
                goto LABEL_208;
              }
              v55 = v154[23];
              v56 = (void *)sub_40BA60(
                              (__int64)v154,
                              *(_QWORD *)(*(_QWORD *)(v154[23] + 8 * v45) + 16LL),
                              (_QWORD *)(*(_QWORD *)(v154[23] + 8 * v45) + 24LL),
                              v45);
              v154[22] = (__int64)v56;
              if ( (*(_BYTE *)(v121 + 176) & 1) == 0 )
              {
                if ( !*(_QWORD *)(v121 + 152) )
                {
LABEL_131:
                  if ( !a7 )
                    goto LABEL_132;
                  v97 = a8 + 2;
                  if ( a7 <= 1 )
                  {
                    *a8 = 0LL;
                    a8[1] = v154[21];
                  }
                  else
                  {
                    do
                    {
                      v97[1] = -1LL;
                      v97 += 2;
                      *(v97 - 2) = -1LL;
                    }
                    while ( &a8[2 * a7] != v97 );
                    *a8 = 0LL;
                    a8[1] = v154[21];
                    if ( (*(_BYTE *)(a1 + 56) & 0x10) == 0 )
                    {
                      v98 = 0;
                      if ( (*(_BYTE *)(v121 + 176) & 1) != 0 )
                        v98 = *(_QWORD *)(v121 + 152) > 0LL;
                      v99 = sub_40EC40((_QWORD *)a1, v154, a7, a8, v98);
                      if ( !v99 )
                      {
                        v100 = *a8;
                        goto LABEL_248;
                      }
LABEL_270:
                      v30 = (_QWORD *)v154[23];
                      v130 = v99;
                      goto LABEL_133;
                    }
                  }
                  v100 = 0LL;
LABEL_248:
                  v101 = BYTE4(v154[17]);
                  v102 = v154[6];
                  v103 = 0LL;
                  v104 = v154[3];
                  v105 = v154[7];
                  v106 = v148;
                  for ( i = a8; ; v100 = *i )
                  {
                    if ( v100 != -1 )
                    {
                      v108 = i[1];
                      if ( v101 )
                      {
                        if ( v102 == v100 )
                          v100 = v105;
                        else
                          v100 = *(_QWORD *)(v104 + 8 * v100);
                        *i = v100;
                        if ( v102 == v108 )
                          v108 = v105;
                        else
                          v108 = *(_QWORD *)(v104 + 8 * v108);
                      }
                      *i = v106 + v100;
                      i[1] = v106 + v108;
                    }
                    ++v103;
                    i += 2;
                    if ( v103 == a7 )
                      break;
                  }
                  if ( v139 > 0 )
                  {
                    v109 = &a8[2 * a7];
                    do
                    {
                      *v109 = -1LL;
                      v109 += 2;
                      *(v109 - 1) = -1LL;
                    }
                    while ( &a8[2 * a7 + 2 * v139] != v109 );
                  }
                  v30 = (_QWORD *)v154[23];
                  v110 = *(_QWORD *)(v121 + 224);
                  if ( v110 )
                  {
                    for ( j = 0LL; j != a7 - 1; ++j )
                    {
                      v112 = *(_QWORD *)(v110 + 8 * j);
                      if ( v112 != j )
                      {
                        v113 = 2 * j;
                        a8[v113 + 2] = a8[2 * v112 + 2];
                        a8[v113 + 3] = a8[2 * *(_QWORD *)(v110 + 8 * j) + 3];
                      }
                    }
                  }
                  goto LABEL_133;
                }
LABEL_208:
                v56 = (void *)v154[22];
              }
              v118 = (__int64 *)v154[19];
              if ( v45 > 0x1FFFFFFFFFFFFFFELL )
              {
                v30 = (_QWORD *)v55;
                v130 = 12;
                goto LABEL_133;
              }
              v90 = v45 + 1;
              v91 = malloc(8 * (v45 + 1));
              if ( v91 )
              {
                if ( v118[19] )
                {
                  v92 = malloc(8 * (v45 + 1));
                  v123 = v92;
                  if ( !v92 )
                  {
                    free(v91);
                    v30 = (_QWORD *)v154[23];
                    v130 = 12;
                    goto LABEL_133;
                  }
LABEL_213:
                  memset(v92, 0, 8 * v90);
                  v152 = 0LL;
                  v149.m128i_i64[0] = (__int64)v91;
                  v149.m128i_i64[1] = (__int64)v92;
                  v150 = v56;
                  v151 = v45;
                  v153 = 0LL;
                  v120 = sub_4100F0((__int64)v154, (__int64)&v149);
                  free(v153);
                  if ( v120 )
                  {
                    v85 = v120;
                  }
                  else
                  {
                    if ( !*v91 && !*v92 )
                    {
                      while ( --v45 != -1LL )
                      {
                        v93 = *(_QWORD *)(v154[23] + 8 * v45);
                        if ( v93 && (*(_BYTE *)(v93 + 104) & 0x10) != 0 )
                        {
                          v90 = v45 + 1;
                          v56 = (void *)sub_40BA60((__int64)v154, *(_QWORD *)(v93 + 16), (_QWORD *)(v93 + 24), v45);
                          goto LABEL_213;
                        }
                      }
                      free(v91);
                      free(v92);
                      sub_409780(v154);
                      a4 = v148;
LABEL_182:
                      a4 += v141;
                      v148 = a4;
                      if ( a4 >= v137 && a4 <= v134 )
                      {
                        v36 = v140;
                        if ( v140 > 4 )
                        {
LABEL_185:
                          v86 = v134;
                          while ( 1 )
                          {
                            v88 = a4 - v154[5];
                            if ( v154[7] <= (unsigned __int64)(a4 - v154[5]) )
                            {
                              v117 = v86;
                              v89 = sub_40BB30((__int64)v154, a4, a9);
                              v86 = v117;
                              if ( v89 )
                              {
                                v130 = v89;
                                goto LABEL_132;
                              }
                              v88 = a4 - v154[5];
                            }
                            v87 = v133;
                            if ( a3 > a4 )
                              v87 = &v133[*(unsigned __int8 *)(v154[1] + v88)];
                            if ( *v87 )
                              goto LABEL_62;
                            a4 += v141;
                            v148 = a4;
                            if ( a4 < v137 || a4 > v86 )
                              goto LABEL_123;
                          }
                        }
                        goto LABEL_50;
                      }
                      goto LABEL_123;
                    }
                    v85 = sub_40B2B0(v118, (__int64)v91, (__int64)v92, v90);
                    free(v92);
                    if ( !v85 )
                    {
LABEL_221:
                      v94 = (__int64)v56;
                      v95 = v45;
                      v96 = v94;
                      free((void *)v154[23]);
                      v154[23] = (__int64)v91;
                      v154[22] = v96;
                      v154[21] = v95;
                      goto LABEL_131;
                    }
LABEL_272:
                    v123 = 0LL;
                  }
                  free(v91);
                  free(v123);
                  v99 = v85;
                  if ( v85 != 1 )
                    goto LABEL_270;
                }
                else
                {
                  v149 = (__m128i)(unsigned __int64)v91;
                  v150 = v56;
                  v151 = v45;
                  v152 = 0LL;
                  v153 = 0LL;
                  v85 = sub_4100F0((__int64)v154, (__int64)&v149);
                  free(v153);
                  if ( v85 )
                    goto LABEL_272;
                  if ( *v91 )
                    goto LABEL_221;
                  free(v91);
                }
LABEL_181:
                sub_409780(v154);
                a4 = v148;
                goto LABEL_182;
              }
            }
LABEL_206:
            v30 = (_QWORD *)v154[23];
            v130 = 12;
            goto LABEL_133;
          }
LABEL_77:
          v46 = v154[9];
          v43 = ((v41 == v51) & v144) == 0;
          v144 &= v41 == v51;
          v47 = v116;
          if ( v43 )
            v47 = v119;
          v119 = v47;
          v48 = *((_BYTE *)v51 + 104);
          if ( (v48 & 0x10) != 0 && (v48 >= 0 || sub_40BA60((__int64)v154, v51[2], v51 + 3, v154[9])) )
          {
            if ( !v129 )
            {
              v45 = v46;
              goto LABEL_104;
            }
            v124 = v46;
            LOBYTE(v122) = 1;
            v131 = 0LL;
          }
          v41 = v51;
          goto LABEL_84;
        }
        v125 = 8 * v69 + v154[23];
        v71 = v65[6] + 24LL * *(_QWORD *)(v65[3] + 8 * v78);
        if ( *(_QWORD *)v125 )
        {
          v70 = sub_40AC30((__int64)&v149, *(_QWORD *)(*(_QWORD *)v125 + 80LL), v71);
          v147 = v70;
          if ( v70 )
            goto LABEL_194;
          v72 = sub_40B840((__int64)v154, v69 - 1, v154[20]);
          v73 = (__int64 **)(v154[23] + 8 * v69);
          v74 = sub_40ADC0(&v147, v65, (__int64)&v149, v72);
          v75 = v150;
          *v73 = v74;
          free(v75);
          v76 = v154[23];
          if ( *(_QWORD *)(v154[23] + 8 * v69) )
            goto LABEL_162;
LABEL_171:
          v70 = v147;
          if ( v147 )
            goto LABEL_195;
          goto LABEL_162;
        }
        v149 = _mm_loadu_si128((const __m128i *)v71);
        v150 = *(void **)(v71 + 16);
        v82 = sub_40B840((__int64)v154, v69 - 1, v154[20]);
        v83 = sub_40ADC0(&v147, v65, (__int64)&v149, v82);
        v76 = v154[23];
        *(_QWORD *)v125 = v83;
        if ( !*(_QWORD *)(v76 + 8 * v69) )
          goto LABEL_171;
      }
LABEL_162:
      v67 = v154[9];
    }
LABEL_163:
    ++v66;
  }
  while ( v66 < v41[2] );
  v46 = v67;
LABEL_203:
  v146 = 0;
LABEL_88:
  v154[9] = v46 + 1;
  v49 = *(unsigned __int8 *)(v154[1] + v46);
  while ( 2 )
  {
    v50 = v41[11];
    if ( v50 )
    {
      v51 = *(__int64 **)(v50 + 8 * v49);
      goto LABEL_91;
    }
    v84 = v41[12];
    if ( v84 )
    {
      if ( (sub_40B840((__int64)v154, v154[9] - 1, v154[20]) & 1) != 0 )
        v51 = *(__int64 **)(v84 + 8 * v49 + 2048);
      else
        v51 = *(__int64 **)(v84 + 8 * v49);
LABEL_91:
      if ( !v154[23] )
        goto LABEL_93;
      goto LABEL_92;
    }
    if ( sub_40C550(v154[19], v41) )
      continue;
    break;
  }
  v146 = 12;
  if ( v154[23] )
    goto LABEL_196;
LABEL_199:
  v30 = 0LL;
LABEL_200:
  v130 = 12;
LABEL_133:
  free(v30);
  if ( *(_QWORD *)(v121 + 152) )
  {
    sub_409780(v154);
    free((void *)v154[31]);
    free((void *)v154[27]);
  }
  sub_409740((__int64)v154);
  return v130;
}

__int64 __fastcall sub_411B80(_QWORD *a1, const __m128i *a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rcx
  const __m128i *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 result; // rax
  _QWORD *v13; // r15
  __int64 v14; // r13
  __int64 v15; // rdi
  void *v16; // rax
  bool v17; // cc
  _QWORD *v18; // r13
  __int64 v19; // r12
  __int64 i; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 *v23; // r13
  __int64 v24; // r15
  const __m128i *v25; // r14
  __int64 v26; // rbp
  char v27; // al
  __int64 v28; // r12
  __int64 j; // rbx
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 *v40; // r10
  __int64 v41; // rax
  __int64 v42; // r10
  _QWORD *v43; // rbx
  __int64 v44; // r8
  __m128i si128; // xmm1
  __m128i v46; // xmm2
  void *v47; // rax
  __int64 v48; // r15
  _QWORD *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // r8
  __int64 v53; // r13
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 *v56; // r10
  __int64 v57; // r9
  __int64 *v58; // r11
  __int64 *v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rdx
  int v62; // r13d
  __int64 v63; // r13
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r10
  unsigned int v70; // [rsp+8h] [rbp-D0h]
  __int64 v71; // [rsp+10h] [rbp-C8h]
  __int64 v72; // [rsp+18h] [rbp-C0h]
  __int64 v73; // [rsp+20h] [rbp-B8h]
  __int64 v74; // [rsp+20h] [rbp-B8h]
  __int64 v75; // [rsp+28h] [rbp-B0h]
  __int64 v76; // [rsp+30h] [rbp-A8h]
  const __m128i *v77; // [rsp+30h] [rbp-A8h]
  __int64 v78; // [rsp+30h] [rbp-A8h]
  __int64 v79; // [rsp+38h] [rbp-A0h]
  const __m128i *v80; // [rsp+38h] [rbp-A0h]
  __int64 v81; // [rsp+40h] [rbp-98h]
  unsigned int v82; // [rsp+5Ch] [rbp-7Ch] BYREF
  __m128i v83; // [rsp+60h] [rbp-78h] BYREF
  __m128i v84; // [rsp+70h] [rbp-68h]
  __m128i v85; // [rsp+80h] [rbp-58h] BYREF
  void *ptr; // [rsp+90h] [rbp-48h] BYREF

  v6 = 8 * a3;
  v7 = a2;
  v8 = (__int64 *)a1[19];
  v9 = a4[1];
  v72 = v6;
  v10 = a1[23] + v6;
  v11 = *(_QWORD *)v10;
  v82 = 0;
  v71 = v11;
  if ( !v11 )
  {
    if ( v9 )
    {
      v43 = (_QWORD *)(a2->m128i_i64[0] + v72);
      *v43 = sub_40B0C0(&v82, v8, (__int64)a4);
      return v82;
    }
    else
    {
      *(_QWORD *)(a2->m128i_i64[0] + v72) = 0LL;
      return 0LL;
    }
  }
  if ( !v9 )
  {
    *(_QWORD *)(a2->m128i_i64[0] + 8 * a3) = 0LL;
    result = 0LL;
    if ( (*(_BYTE *)(*(_QWORD *)v10 + 104LL) & 0x40) == 0 )
      return result;
    goto LABEL_17;
  }
  v83.m128i_i32[0] = 0;
  v13 = sub_40B0C0(&v83, v8, (__int64)a4);
  result = v83.m128i_u32[0];
  if ( v83.m128i_i32[0] )
    return result;
  v14 = v13[7];
  v73 = (__int64)(v13 + 7);
  if ( !v14 )
  {
    v15 = a4[1];
    v13[8] = 0LL;
    v13[7] = v15;
    v16 = malloc(8 * v15);
    v13[9] = v16;
    if ( !v16 )
      return 12LL;
    v17 = a4[1] <= 0;
    v83.m128i_i32[0] = 0;
    if ( !v17 )
    {
      do
      {
        v83.m128i_i32[0] = sub_40A050(v73, v8[7] + 24LL * *(_QWORD *)(a4[2] + 8 * v14));
        if ( v83.m128i_i32[0] )
          return 12LL;
      }
      while ( ++v14 < a4[1] );
    }
  }
  v75 = v71 + 8;
  result = sub_40A5C0(a4, v71 + 8, v73);
  v82 = result;
  if ( (_DWORD)result )
    return result;
  if ( a2[2].m128i_i64[1] )
  {
    v74 = a1[27];
    if ( a2[2].m128i_i64[1] <= 0 )
    {
LABEL_80:
      v82 = 0;
      goto LABEL_15;
    }
    v48 = 0LL;
    while ( 1 )
    {
      v49 = (_QWORD *)(v74 + 40LL * *(_QWORD *)(v7[3].m128i_i64[0] + 8 * v48));
      if ( a3 <= v49[2] || a3 > v49[1] )
        goto LABEL_79;
      v50 = *v8;
      v51 = a4[1];
      v52 = *(_QWORD *)(*v8 + 16LL * *v49);
      if ( a3 != v49[3] )
      {
        v53 = 0LL;
        if ( v51 <= 0 )
          goto LABEL_79;
        v77 = v7;
        v54 = *(_QWORD *)(*v8 + 16LL * *v49);
        while ( 1 )
        {
          v55 = 16LL * *(_QWORD *)(a4[2] + 8 * v53) + v50;
          if ( (unsigned int)*(unsigned __int8 *)(v55 + 8) - 8 <= 1 && v54 == *(_QWORD *)v55 )
          {
            result = sub_40C320(v8, *(_QWORD *)(a4[2] + 8 * v53), (__int64)a4, v75);
            if ( (_DWORD)result )
              return result;
            if ( ++v53 >= a4[1] )
            {
LABEL_78:
              v7 = v77;
              goto LABEL_79;
            }
          }
          else if ( ++v53 >= a4[1] )
          {
            goto LABEL_78;
          }
          v50 = *v8;
        }
      }
      if ( v51 <= 0 )
        goto LABEL_79;
      v56 = (__int64 *)a4[2];
      v57 = -1LL;
      v58 = &v56[v51];
      v59 = v56;
      v60 = -1LL;
      do
      {
        while ( 1 )
        {
          v61 = v50 + 16 * *v59;
          v62 = *(unsigned __int8 *)(v61 + 8);
          if ( v62 != 8 )
            break;
          if ( v52 == *(_QWORD *)v61 )
            v60 = *v59;
          if ( v58 == ++v59 )
            goto LABEL_91;
        }
        if ( v62 == 9 && v52 == *(_QWORD *)v61 )
          v57 = *v59;
        ++v59;
      }
      while ( v58 != v59 );
LABEL_91:
      v63 = v57;
      v78 = v57;
      if ( v60 >= 0 )
      {
        result = sub_40C320(v8, v60, (__int64)a4, v75);
        if ( (_DWORD)result )
          return result;
        if ( v63 >= 0 && a4[1] > 0 )
        {
          v56 = (__int64 *)a4[2];
LABEL_93:
          v80 = v7;
          v64 = 0LL;
          while ( 1 )
          {
            v65 = 24 * v56[v64] + v8[7];
            if ( sub_409B10(*(_QWORD *)(v65 + 8), (__int64 *)(v65 + 16), v78)
              || sub_409B10(*(_QWORD *)(v8[6] + v67 + 8), (__int64 *)(v8[6] + v67 + 16), v66) )
            {
              ++v64;
            }
            else
            {
              result = sub_40C320(v8, v68, (__int64)a4, v75);
              if ( (_DWORD)result )
                return result;
            }
            if ( a4[1] <= v64 )
              break;
            v56 = (__int64 *)a4[2];
          }
          v7 = v80;
        }
      }
      else if ( v57 >= 0 )
      {
        goto LABEL_93;
      }
LABEL_79:
      if ( ++v48 >= v7[2].m128i_i64[1] )
        goto LABEL_80;
    }
  }
LABEL_15:
  v18 = (_QWORD *)(v7->m128i_i64[0] + v72);
  *v18 = sub_40B0C0(&v82, v8, (__int64)a4);
  result = v82;
  if ( v82 )
    return result;
  result = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1[23] + v72) + 104LL) & 0x40) == 0 )
    return result;
LABEL_17:
  v19 = 0LL;
  for ( i = a1[25]; v19 < i; i = v22 )
  {
    v21 = a1[27];
    v22 = (v19 + i) / 2;
    if ( a3 <= *(_QWORD *)(v21 + 40 * v22 + 8) )
    {
      while ( v19 < v22 )
      {
        v44 = (v19 + v22) / 2;
        if ( a3 > *(_QWORD *)(v21 + 40 * v44 + 8) )
          goto LABEL_60;
        v22 = (v19 + v22) / 2;
      }
      break;
    }
    v44 = (v19 + i) / 2;
    v22 = i;
LABEL_60:
    v19 = v44 + 1;
  }
  if ( a1[25] <= v19 )
    return 0LL;
  v79 = 40 * v19;
  if ( a3 != *(_QWORD *)(a1[27] + 40 * v19 + 8) )
    return 0LL;
  if ( v19 == -1 )
    return 0LL;
  v23 = (__int64 *)a1[19];
  v83.m128i_i64[0] = 0LL;
  if ( *(__int64 *)(v71 + 16) <= 0 )
    return 0LL;
  v76 = a3;
  v24 = 0LL;
  v25 = v7;
  v81 = v19;
  while ( 1 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(v71 + 24) + 8 * v24);
    v27 = *(_BYTE *)(*v23 + 16 * v26 + 8);
    if ( v26 != v25[1].m128i_i64[0] )
    {
      if ( v27 == 4 )
        break;
      goto LABEL_30;
    }
    if ( v76 != v25[1].m128i_i64[1] && v27 == 4 )
      break;
LABEL_30:
    if ( ++v24 >= *(_QWORD *)(v71 + 16) )
    {
      if ( v83.m128i_i64[0] )
      {
        LODWORD(result) = 0;
        goto LABEL_63;
      }
      return 0LL;
    }
  }
  v28 = v81;
  for ( j = a1[27] + v79; ; j += 40LL )
  {
    if ( v26 != *(_QWORD *)j )
      goto LABEL_50;
    v41 = *(_QWORD *)(j + 24) - *(_QWORD *)(j + 16);
    v42 = v76 + v41;
    v30 = v41 ? *(_QWORD *)(v23[3] + 8 * v26) : **(_QWORD **)(v23[5] + 24 * v26 + 16);
    if ( v42 > v25[1].m128i_i64[1] )
      goto LABEL_50;
    v31 = *(_QWORD *)(v25->m128i_i64[0] + 8 * v42);
    if ( !v31
      || !sub_409B10(*(_QWORD *)(v31 + 16), (__int64 *)(v31 + 24), v30)
      || (unsigned __int8)sub_409DA0(a1, &v25[2].m128i_i64[1], (const __m128i *)v25[3].m128i_i64, v26, v76, v32, v33) )
    {
      goto LABEL_50;
    }
    if ( !v83.m128i_i64[0] )
    {
      si128 = _mm_load_si128(v25 + 1);
      v46 = _mm_load_si128(v25 + 2);
      v47 = (void *)v25[3].m128i_i64[0];
      v83 = _mm_load_si128(v25);
      v84 = si128;
      v85 = v46;
      ptr = v47;
      result = sub_40ABB0((__int64)&v85, (__int64)v25[2].m128i_i64);
      if ( (_DWORD)result )
        goto LABEL_62;
    }
    v84.m128i_i64[0] = v26;
    v84.m128i_i64[1] = v76;
    if ( !(unsigned __int8)sub_408500(&v85, v28) )
      break;
    v34 = *(_QWORD *)(v83.m128i_i64[0] + v72);
    result = sub_4100F0((__int64)a1, (__int64)&v83);
    if ( (_DWORD)result )
      goto LABEL_62;
    v35 = v25->m128i_i64[1];
    v36 = v83.m128i_i64[0];
    if ( v35 )
    {
      result = sub_40B2B0(v23, v35, v83.m128i_i64[0], v76 + 1);
      if ( (_DWORD)result )
        goto LABEL_62;
      v36 = v83.m128i_i64[0];
    }
    v37 = v85.m128i_i64[1];
    *(_QWORD *)(v36 + v72) = v34;
    v38 = sub_409B10(v37, (__int64 *)&ptr, v28) - 1;
    if ( v38 >= 0 && v39 > v38 )
    {
      v85.m128i_i64[1] = v39 - 1;
      sub_409C80(&v85.m128i_i64[1], v40, v38);
    }
    j = a1[27] + 40 * v28;
LABEL_50:
    ++v28;
    if ( !*(_BYTE *)(j + 32) )
      goto LABEL_30;
  }
  result = 12LL;
LABEL_62:
  if ( v83.m128i_i64[0] )
  {
LABEL_63:
    v70 = result;
    free(ptr);
    return v70;
  }
  return result;
}

__int64 __fastcall sub_4123B0(_DWORD *a1, __int64 a2, char *a3, int a4, char a5, char a6)
{
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v9; // r12
  int v10; // eax
  char v11; // al
  __int64 v12; // r11
  char v13; // al
  __int64 result; // rax
  __int64 v15; // rdx
  char v16; // r9
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rax
  char v21; // r13
  char v22; // dl
  __int64 v23; // rax
  char *v24; // r11
  _BYTE v25[56]; // [rsp+0h] [rbp-38h] BYREF

  v6 = a2;
  v7 = a4;
  v9 = *(_QWORD *)(a2 + 72);
  if ( *(_DWORD *)(a2 + 144) != 1 )
  {
    v10 = sub_409AC0(a2, *(_QWORD *)(a2 + 72));
    if ( v10 > 1 )
    {
      v15 = *(_QWORD *)(v6 + 16);
      *a1 = 1;
      a1[2] = *(_DWORD *)(v15 + 4 * v9);
      *(_QWORD *)(v6 + 72) = v9 + v10;
      return 0LL;
    }
  }
  v11 = a3[8];
  v12 = v9 + v7;
  *(_QWORD *)(v6 + 72) = v12;
  if ( (v11 & 0xFB) != 26 && v11 != 28 )
  {
    if ( v11 != 22 || a6 || (sub_408020(v25, v6, a5), result = 11LL, v25[8] == 21) )
    {
      v13 = *a3;
      *a1 = 0;
      *((_BYTE *)a1 + 8) = v13;
      return 0LL;
    }
    return result;
  }
  if ( v12 >= *(_QWORD *)(v6 + 104) )
    return 7LL;
  v16 = *a3;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = (int)v17;
    if ( v11 != 30 || !*(_BYTE *)(v6 + 139) )
    {
LABEL_15:
      v19 = *(_QWORD *)(v6 + 8);
      v20 = v12 + 1;
      *(_QWORD *)(v6 + 72) = v12 + 1;
      v21 = *(_BYTE *)(v19 + v12);
      goto LABEL_16;
    }
    if ( *(_BYTE *)(v6 + 140) )
    {
      if ( v12 != *(_QWORD *)(v6 + 48) && *(_DWORD *)(*(_QWORD *)(v6 + 16) + 4 * v12) == -1 )
        goto LABEL_15;
      v21 = *(_BYTE *)(*(_QWORD *)(v6 + 40) + *(_QWORD *)v6 + *(_QWORD *)(*(_QWORD *)(v6 + 24) + 8 * v12));
      if ( v21 < 0 )
        goto LABEL_15;
      v23 = 1LL;
      if ( *(_DWORD *)(v6 + 144) != 1 )
        v23 = (int)sub_409AC0(v6, v12);
      v20 = v12 + v23;
      *(_QWORD *)(v6 + 72) = v20;
    }
    else
    {
      v20 = v12 + 1;
      v24 = (char *)(*(_QWORD *)(v6 + 40) + *(_QWORD *)v6 + v12);
      *(_QWORD *)(v6 + 72) = v20;
      v21 = *v24;
    }
LABEL_16:
    if ( *(_QWORD *)(v6 + 104) <= v20 )
      return 7LL;
    if ( v16 == v21 && *(_BYTE *)(*(_QWORD *)(v6 + 8) + v20) == 93 )
      break;
    *(_BYTE *)(*((_QWORD *)a1 + 1) + v17++) = v21;
    if ( v17 == 32 )
      return 7LL;
    v11 = a3[8];
    v12 = *(_QWORD *)(v6 + 72);
  }
  *(_QWORD *)(v6 + 72) = v20 + 1;
  *(_BYTE *)(*((_QWORD *)a1 + 1) + v18) = 0;
  v22 = a3[8];
  if ( v22 == 28 )
  {
    *a1 = 2;
    return 0LL;
  }
  else if ( v22 == 30 )
  {
    *a1 = 4;
    return 0LL;
  }
  else
  {
    result = 0LL;
    if ( v22 == 26 )
      *a1 = 3;
  }
  return result;
}

__int64 __fastcall sub_4125D0(unsigned __int8 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rdx
  int v7; // eax
  unsigned __int8 v9; // bp
  unsigned __int8 v10; // r14
  __int64 v11; // rax
  wint_t v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  int v16; // r14d
  wint_t v17; // ebp
  __int64 v18; // r12
  char v19; // al
  unsigned __int8 v20; // dl
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  int v27; // [rsp+8h] [rbp-50h]
  char v28[72]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2[9];
  if ( a2[13] <= v3 )
  {
    a1[8] = 2;
    return 0LL;
  }
  v5 = a2[1];
  v7 = *((_DWORD *)a2 + 36);
  v9 = *(_BYTE *)(v5 + v3);
  v10 = a1[10] & 0x9F;
  a1[10] = v10;
  *a1 = v9;
  if ( v7 <= 1 )
  {
    if ( v9 != 92 )
    {
      a1[8] = 1;
      v26 = v5;
      a1[10] = (((v9 == 95) | (((*__ctype_b_loc())[v9] & 8) != 0)) << 6) | v10;
      v13 = v26;
LABEL_7:
      switch ( v9 )
      {
        case 0xAu:
          result = 1LL;
          if ( (a3 & 0x800) != 0 )
            goto LABEL_41;
          break;
        case 0x24u:
          if ( (a3 & 8) != 0
            || (v18 = v3 + 1, v18 == a2[11])
            || (a2[9] = v18, sub_4125D0(v28, a2, a3), v19 = v28[8], --a2[9], v20 = v19 - 9, result = 1LL, v20 <= 1u) )
          {
            a1[8] = 12;
            result = 1LL;
            *(_DWORD *)a1 = 32;
          }
          break;
        case 0x28u:
          result = 1LL;
          if ( (a3 & 0x2000) != 0 )
            goto LABEL_23;
          break;
        case 0x29u:
          result = 1LL;
          if ( (a3 & 0x2000) != 0 )
            goto LABEL_25;
          break;
        case 0x2Au:
          a1[8] = 11;
          result = 1LL;
          break;
        case 0x2Bu:
          result = 1LL;
          if ( (a3 & 0x402) == 0 )
            goto LABEL_28;
          break;
        case 0x2Eu:
          a1[8] = 5;
          result = 1LL;
          break;
        case 0x3Fu:
          result = 1LL;
          if ( (a3 & 0x402) == 0 )
            goto LABEL_31;
          break;
        case 0x5Bu:
          a1[8] = 20;
          result = 1LL;
          break;
        case 0x5Eu:
          if ( (a3 & 0x800008) == 0 && v3 && (*(_BYTE *)(v13 + v3 - 1) != 10 || (a3 & 0x800) == 0) )
            goto LABEL_39;
          a1[8] = 12;
          result = 1LL;
          *(_DWORD *)a1 = 16;
          break;
        case 0x7Bu:
          result = 1LL;
          if ( (a3 & 0x1200) == 4608 )
            goto LABEL_37;
          break;
        case 0x7Cu:
          if ( (a3 & 0x8400) != 0x8000 )
            goto LABEL_39;
LABEL_41:
          a1[8] = 10;
          result = 1LL;
          break;
        case 0x7Du:
          result = 1LL;
          if ( (a3 & 0x1200) == 4608 )
            goto LABEL_47;
          break;
        default:
LABEL_39:
          result = 1LL;
          break;
      }
      return result;
    }
  }
  else
  {
    if ( v3 != a2[6] && *(_DWORD *)(a2[2] + 4 * v3) == -1 )
    {
      *((_DWORD *)a1 + 2) = *((_DWORD *)a1 + 2) & 0xFFDFFF00 | 0x200001;
      return 1LL;
    }
    if ( v9 != 92 )
    {
      v11 = a2[2];
      a1[8] = 1;
      v25 = v5;
      v12 = *(_DWORD *)(v11 + 4 * v3);
      a1[10] = (((v12 == 95) | (iswalnum(v12) != 0)) << 6) | a1[10] & 0xBF;
      v13 = v25;
      goto LABEL_7;
    }
  }
  v14 = v3 + 1;
  if ( v3 + 1 >= a2[11] )
  {
    a1[8] = 36;
    return 1LL;
  }
  if ( !*((_BYTE *)a2 + 139) )
    goto LABEL_15;
  if ( v7 > 1 )
  {
    v21 = a2[2];
    v17 = *(_DWORD *)(v21 + 4 * v14);
    if ( v17 == -1 || a2[6] != v3 + 2 && *(_DWORD *)(v21 + 4 * v14 + 4) == -1 )
    {
      v24 = *(unsigned __int8 *)(v5 + v3 + 1);
      a1[8] = 1;
      LOBYTE(v16) = v24;
      *a1 = v24;
      v27 = v24;
      goto LABEL_18;
    }
  }
  v22 = *a2;
  v23 = a2[5];
  if ( *((_BYTE *)a2 + 140) )
  {
    v16 = *(unsigned __int8 *)(*(_QWORD *)(a2[3] + 8 * v14) + v23 + v22);
    v27 = v16;
    if ( (v16 & 0x80) != 0 )
    {
LABEL_15:
      v27 = *(unsigned __int8 *)(v5 + v3 + 1);
      LOBYTE(v16) = *(_BYTE *)(v5 + v3 + 1);
    }
  }
  else
  {
    LOBYTE(v16) = *(_BYTE *)(v14 + v22 + v23);
    v27 = (unsigned __int8)v16;
  }
  *a1 = v16;
  a1[8] = 1;
  if ( v7 > 1 )
  {
    v17 = *(_DWORD *)(a2[2] + 4 * v14);
LABEL_18:
    a1[10] = (((v17 == 95) | (iswalnum(v17) != 0)) << 6) | a1[10] & 0xBF;
    goto LABEL_19;
  }
  a1[10] = a1[10] & 0xBF | ((((_BYTE)v16 == 95) | (((*__ctype_b_loc())[(unsigned __int8)v16] & 8) != 0)) << 6);
LABEL_19:
  switch ( (char)v16 )
  {
    case '\'':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
      {
        a1[8] = 12;
        *(_DWORD *)a1 = 128;
      }
      break;
    case '(':
      result = 2LL;
      if ( (a3 & 0x2000) == 0 )
LABEL_23:
        a1[8] = 8;
      break;
    case ')':
      result = 2LL;
      if ( (a3 & 0x2000) == 0 )
LABEL_25:
        a1[8] = 9;
      break;
    case '+':
      result = 2LL;
      if ( (a3 & 0x402) == 2 )
LABEL_28:
        a1[8] = 18;
      break;
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      result = 2LL;
      if ( (a3 & 0x4000) == 0 )
      {
        a1[8] = 4;
        *(_QWORD *)a1 = v27 - 49;
      }
      break;
    case '<':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
      {
        a1[8] = 12;
        *(_DWORD *)a1 = 6;
      }
      break;
    case '>':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
      {
        a1[8] = 12;
        *(_DWORD *)a1 = 9;
      }
      break;
    case '?':
      result = 2LL;
      if ( (a3 & 0x402) == 2 )
LABEL_31:
        a1[8] = 19;
      break;
    case 'B':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
      {
        a1[8] = 12;
        *(_DWORD *)a1 = 512;
      }
      break;
    case 'S':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
        a1[8] = 35;
      break;
    case 'W':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
        a1[8] = 33;
      break;
    case '`':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
      {
        a1[8] = 12;
        *(_DWORD *)a1 = 64;
      }
      break;
    case 'b':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
      {
        a1[8] = 12;
        *(_DWORD *)a1 = 256;
      }
      break;
    case 's':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
        a1[8] = 34;
      break;
    case 'w':
      result = 2LL;
      if ( (a3 & 0x80000) == 0 )
        a1[8] = 32;
      break;
    case '{':
      result = 2LL;
      if ( (a3 & 0x1200) == 512 )
LABEL_37:
        a1[8] = 23;
      break;
    case '|':
      result = 2LL;
      if ( (a3 & 0x8400) == 0 )
        a1[8] = 10;
      break;
    case '}':
      result = 2LL;
      if ( (a3 & 0x1200) == 512 )
LABEL_47:
        a1[8] = 24;
      break;
    default:
      result = 2LL;
      break;
  }
  return result;
}

__int64 __fastcall sub_412C80(__int64 *a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  __int64 v8; // rbx

  v4 = -1LL;
  while ( 1 )
  {
    v5 = sub_4125D0(a2, a1, a3);
    v6 = *a2;
    a1[9] += v5;
    v7 = a2[8];
    if ( v7 == 2 )
      break;
    if ( v7 == 24 || (_BYTE)v6 == 44 )
      return v4;
    if ( v7 != 1 || (unsigned __int8)(v6 - 48) > 9u || v4 == -2 )
    {
      v4 = -2LL;
    }
    else if ( v4 == -1 )
    {
      v4 = (unsigned __int8)v6 - 48;
    }
    else
    {
      v8 = v6 + 10 * v4;
      if ( v8 > 32816 )
        v8 = 32816LL;
      v4 = v8 - 48;
    }
  }
  return -2LL;
}

__int64 __fastcall sub_412D40(__int64 *a1, __int64 *a2, __m128i *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int8 v6; // al
  __m128i *v7; // r12
  __int64 *v8; // r15
  int v9; // eax
  unsigned __int64 v10; // rbp
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r13
  __m128i si128; // xmm0
  char *v18; // rbp
  __int8 v19; // al
  _QWORD *v20; // r13
  int *v21; // r14
  char *v22; // rax
  char *v23; // rdx
  __int64 v24; // rbx
  char *v25; // r12
  char *v26; // rbp
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // r14
  __int64 v31; // rbp
  char *v32; // r15
  char *v33; // rax
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int8 v36; // al
  __int64 v37; // rax
  char *v38; // r14
  char *v39; // rax
  __int64 v40; // rdx
  bool v41; // zf
  void **v42; // r13
  int v43; // ebx
  __int8 v44; // al
  char v45; // r9
  int v46; // eax
  int v47; // eax
  __int8 v48; // dl
  _DWORD *v49; // rbx
  __int64 v50; // rsi
  char *v51; // rcx
  const char *v52; // rdx
  _DWORD *v53; // r9
  bool v54; // r8
  char *v55; // rax
  _QWORD *v56; // rbx
  int *v57; // rbp
  char *v58; // r14
  __int64 v59; // rax
  char *v60; // r13
  __int64 v61; // rax
  __int32 v62; // r14d
  char v63; // al
  char v64; // al
  _QWORD *v65; // r13
  int *v66; // rbp
  char *v67; // rax
  char *v68; // rbx
  char *v69; // r14
  char *v70; // rcx
  char *v71; // rax
  int v72; // eax
  __int8 v73; // al
  void *v74; // rdx
  _DWORD *v75; // rax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  _DWORD *v79; // r9
  int v80; // eax
  char v81; // r10
  int v82; // eax
  void **v83; // rdx
  int v84; // esi
  unsigned __int8 v85; // di
  int v86; // ecx
  const char *v87; // r9
  unsigned int v88; // r8d
  unsigned int v89; // r9d
  void *v90; // rax
  _DWORD *v91; // rcx
  _DWORD *v92; // rcx
  __int64 j; // rax
  size_t v94; // rsi
  _QWORD *v95; // rax
  int v96; // edx
  __int64 v97; // rcx
  __int64 k; // rax
  _QWORD *v99; // rbp
  int *v100; // rbx
  _QWORD *v101; // rax
  char *v102; // rax
  wint_t v103; // eax
  int v104; // ebx
  int v105; // ebp
  const unsigned __int16 **v106; // rax
  __int64 v107; // rsi
  int v108; // r9d
  __int64 v109; // rdi
  __int64 i; // rax
  wint_t v111; // eax
  void *v112; // rdi
  void *v113; // rax
  __int64 ptra; // [rsp+0h] [rbp-118h]
  _QWORD *ptrb; // [rsp+0h] [rbp-118h]
  __int64 v119; // [rsp+10h] [rbp-108h]
  char *v120; // [rsp+18h] [rbp-100h]
  __int64 v121; // [rsp+18h] [rbp-100h]
  void *v122; // [rsp+18h] [rbp-100h]
  __m128i v123; // [rsp+20h] [rbp-F8h] BYREF
  _DWORD *v124; // [rsp+30h] [rbp-E8h]
  __m128i *v125; // [rsp+38h] [rbp-E0h]
  void **v126; // [rsp+40h] [rbp-D8h]
  void *v127; // [rsp+48h] [rbp-D0h]
  size_t size; // [rsp+50h] [rbp-C8h]
  unsigned int v129; // [rsp+58h] [rbp-C0h]
  unsigned int v130; // [rsp+5Ch] [rbp-BCh]
  __int64 v131; // [rsp+68h] [rbp-B0h] BYREF
  int v132; // [rsp+70h] [rbp-A8h] BYREF
  const char *v133; // [rsp+78h] [rbp-A0h]
  int v134; // [rsp+80h] [rbp-98h] BYREF
  const char *v135; // [rsp+88h] [rbp-90h]
  char v136[8]; // [rsp+90h] [rbp-88h] BYREF
  char v137; // [rsp+98h] [rbp-80h]
  __m128i v138[2]; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v139[5]; // [rsp+C0h] [rbp-58h] BYREF

  v119 = *a2;
  v6 = a3->m128i_i8[8];
  v7 = a3;
  v124 = a6;
  v8 = a1;
  switch ( v6 )
  {
    case 1:
      v56 = (_QWORD *)(v119 + 112);
      v57 = (int *)(v119 + 128);
      v120 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), 0LL, 0LL, a3);
      if ( !v120 )
        goto LABEL_118;
      v58 = v120;
      if ( *(int *)(v119 + 180) <= 1 )
        goto LABEL_7;
      while ( 1 )
      {
        v59 = a1[9];
        if ( a1[13] <= v59 || v59 == a1[6] || *(_DWORD *)(a1[2] + 4 * v59) != -1 )
          break;
        a1[9] += (int)sub_4125D0((unsigned __int8 *)v7, a1, a4);
        v60 = sub_40A780(v56, v57, 0LL, 0LL, v7);
        v139[0].m128i_i8[8] = 16;
        v58 = sub_40A780(v56, v57, v58, v60, v139);
        if ( v58 == 0LL || v60 == 0LL )
          goto LABEL_118;
      }
      v120 = v58;
      goto LABEL_7;
    case 4:
      v61 = 1 << a3->m128i_i64[0];
      if ( (v61 & *(_QWORD *)(v119 + 168)) == 0 )
      {
        v120 = 0LL;
        *v124 = 6;
        return (__int64)v120;
      }
      *(_QWORD *)(v119 + 160) |= v61;
      v120 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), 0LL, 0LL, a3);
      if ( !v120 )
        goto LABEL_118;
      ++*(_QWORD *)(v119 + 152);
      *(_BYTE *)(v119 + 176) |= 2u;
      goto LABEL_7;
    case 5:
      v120 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), 0LL, 0LL, a3);
      if ( !v120 )
        goto LABEL_118;
      if ( *(int *)(v119 + 180) > 1 )
        *(_BYTE *)(v119 + 176) |= 2u;
      goto LABEL_7;
    case 8:
      v12 = a2[6];
      a2[6] = v12 + 1;
      a1[9] += (int)sub_4125D0((unsigned __int8 *)a3, a1, a4 | 0x800000);
      v13 = 0LL;
      if ( v7->m128i_i8[8] == 9 )
        goto LABEL_138;
      v13 = (_QWORD *)sub_414370(a1, a2, v7, a4, a5 + 1, v124);
      if ( *v124 )
        return 0LL;
      if ( v7->m128i_i8[8] != 9 )
      {
        if ( v13 )
          sub_407FB0(v13, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4091C0, 0LL);
        *v124 = 8;
        return 0LL;
      }
LABEL_138:
      if ( v12 <= 8 )
        *(_QWORD *)(v119 + 168) |= 1 << v12;
      v139[0].m128i_i8[8] = 17;
      v71 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), v13, 0LL, v139);
      v120 = v71;
      if ( v71 )
      {
        *((_QWORD *)v71 + 5) = v12;
        goto LABEL_7;
      }
      goto LABEL_118;
    case 9:
      goto LABEL_136;
    case 11:
    case 18:
    case 19:
      goto LABEL_3;
    case 12:
      v62 = a3->m128i_i32[0];
      if ( (a3->m128i_i32[0] & 0x30F) == 0 )
        goto LABEL_130;
      v63 = *(_BYTE *)(v119 + 176);
      if ( (v63 & 0x10) != 0 )
        goto LABEL_130;
      v64 = v63 | 0x10;
      *(_BYTE *)(v119 + 176) = v64;
      if ( (v64 & 8) != 0 )
      {
        v104 = 0;
        v105 = 0;
      }
      else
      {
        *(_QWORD *)(v119 + 184) = 0x3FF000000000000LL;
        *(_QWORD *)(v119 + 192) = 0x7FFFFFE87FFFFFELL;
        if ( (v64 & 4) != 0 )
        {
          *(_OWORD *)(v119 + 200) = 0LL;
          v62 = a3->m128i_i32[0];
          goto LABEL_130;
        }
        v104 = 128;
        v105 = 2;
      }
      v106 = __ctype_b_loc();
      v107 = v119 + 8LL * v105;
      v108 = v104 + 256 - (v105 << 6);
      v109 = (__int64)&(*v106)[v104];
      do
      {
        for ( i = 0LL; i != 64; ++i )
        {
          if ( (*(_BYTE *)(v109 + 2 * i) & 8) != 0 || v104 + (_DWORD)i == 95 )
            *(_QWORD *)(v107 + 184) |= 1LL << i;
        }
        v104 += 64;
        v107 += 8LL;
        v109 += 128LL;
      }
      while ( v108 != v104 );
LABEL_130:
      v65 = (_QWORD *)(v119 + 112);
      v66 = (int *)(v119 + 128);
      if ( ((v62 - 256) & 0xFFFFFEFF) != 0 )
      {
        v120 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), 0LL, 0LL, v7);
        if ( v120 )
        {
LABEL_135:
          v8[9] += (int)sub_4125D0((unsigned __int8 *)v7, v8, a4);
          return (__int64)v120;
        }
      }
      else
      {
        if ( v62 == 256 )
        {
          v7->m128i_i32[0] = 6;
          v67 = sub_40A780(v65, v66, 0LL, 0LL, v7);
          v7->m128i_i32[0] = 9;
        }
        else
        {
          v7->m128i_i32[0] = 5;
          v67 = sub_40A780(v65, v66, 0LL, 0LL, v7);
          v7->m128i_i32[0] = 10;
        }
        v68 = v67;
        v69 = sub_40A780(v65, v66, 0LL, 0LL, v7);
        v139[0].m128i_i8[8] = 10;
        v70 = sub_40A780(v65, v66, v68, v69, v139);
        v120 = v70;
        if ( v69 != 0LL && v68 != 0LL && v70 )
          goto LABEL_135;
      }
LABEL_118:
      *v124 = 12;
      return 0LL;
    case 20:
      v131 = 0LL;
      ptrb = calloc(0x20uLL, 1uLL);
      v42 = (void **)calloc(0x50uLL, 1uLL);
      if ( v42 == 0LL || ptrb == 0LL )
      {
        free(ptrb);
        free(v42);
        goto LABEL_118;
      }
      v43 = sub_408020(v7, (__int64)a1, a4);
      v44 = v7->m128i_i8[8];
      if ( v44 == 2 )
        goto LABEL_197;
      LOBYTE(v125) = 0;
      if ( v44 != 25 )
        goto LABEL_98;
      *((_BYTE *)v42 + 32) |= 1u;
      if ( (a4 & 0x100) != 0 )
        *ptrb |= 0x400uLL;
      a1[9] += v43;
      v43 = sub_408020(v7, (__int64)a1, a4);
      v44 = v7->m128i_i8[8];
      if ( v44 == 2 )
      {
LABEL_197:
        *v124 = 2;
        goto LABEL_150;
      }
      LOBYTE(v125) = 1;
LABEL_98:
      if ( v44 == 21 )
        v7->m128i_i8[8] = 1;
      v123.m128i_i64[0] = 0LL;
      v45 = 1;
      v121 = 0LL;
      break;
    case 23:
      if ( (a4 & 0x1000000) != 0 )
        goto LABEL_43;
LABEL_3:
      if ( (a4 & 0x20) != 0 )
        goto LABEL_43;
      if ( (a4 & 0x10) != 0 )
      {
        v78 = sub_4125D0((unsigned __int8 *)a3, a1, a4);
        v79 = v124;
        a1[9] += v78;
        return sub_412D40(a1, a2, v7, a4, a5, v79);
      }
      if ( v6 == 9 )
      {
LABEL_136:
        if ( (a4 & 0x20000) == 0 )
        {
          v120 = 0LL;
          *v124 = 16;
          return (__int64)v120;
        }
      }
LABEL_6:
      a3->m128i_i8[8] = 1;
      v120 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), 0LL, 0LL, a3);
      if ( !v120 )
        goto LABEL_118;
      goto LABEL_7;
    case 24:
      goto LABEL_6;
    case 32:
    case 33:
      v49 = v124;
      v50 = a1[15];
      v51 = (_BYTE *)("en_" + 2);
      v52 = "alnum";
      v53 = v124;
      v54 = v6 == 33;
      goto LABEL_107;
    case 34:
    case 35:
      v49 = v124;
      v50 = a1[15];
      v51 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
      v52 = "space";
      v53 = v124;
      v54 = v6 == 35;
LABEL_107:
      v55 = sub_40DB70(v119, v50, v52, v51, v54, v53);
      v120 = v55;
      if ( *v49 && !v55 )
        return 0LL;
      goto LABEL_7;
    case 36:
      v120 = 0LL;
      *v124 = 5;
      return (__int64)v120;
    default:
      return 0LL;
  }
  while ( 1 )
  {
    v133 = (const char *)v138;
    v132 = 3;
    v46 = sub_4123B0(&v132, (__int64)v8, v7->m128i_i8, v43, a4, v45 & 1);
    if ( v46 )
    {
LABEL_162:
      *v124 = v46;
      goto LABEL_150;
    }
    v43 = sub_408020(v7, (__int64)v8, a4);
    v47 = v132;
    if ( ((v132 - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_105;
    v48 = v7->m128i_i8[8];
    if ( v48 == 2 )
      goto LABEL_160;
    if ( v48 != 22 )
      goto LABEL_105;
    v8[9] += v43;
    v80 = sub_408020(v136, (__int64)v8, a4);
    if ( v137 == 2 )
    {
LABEL_160:
      *v124 = 7;
LABEL_150:
      free(ptrb);
      sub_409170(v42);
      if ( *v124 )
        return 0LL;
      v120 = 0LL;
      goto LABEL_7;
    }
    if ( v137 == 21 )
    {
      v8[9] += -v43;
      v47 = v132;
      v7->m128i_i8[8] = 1;
LABEL_105:
      switch ( v47 )
      {
        case 0:
          *(_QWORD *)((char *)ptrb + (((unsigned __int64)(unsigned __int8)v133 >> 3) & 0x18)) |= 1LL << (char)v133;
          goto LABEL_143;
        case 1:
          v74 = v42[5];
          v75 = *v42;
          if ( v74 != (void *)v121 )
            goto LABEL_147;
          v94 = 4 * (2 * v121 + 1);
          v121 = 2 * v121 + 1;
          v75 = realloc(*v42, v94);
          if ( !v75 )
            goto LABEL_219;
          *v42 = v75;
          v74 = v42[5];
LABEL_147:
          v42[5] = (char *)v74 + 1;
          v75[(_QWORD)v74] = (_DWORD)v133;
          break;
        case 2:
          v72 = sub_40D350((__int64)ptrb, v133);
          *v124 = v72;
          if ( !v72 )
            goto LABEL_143;
          goto LABEL_150;
        case 3:
          v77 = sub_40D350((__int64)ptrb, v133);
          *v124 = v77;
          if ( v77 )
            goto LABEL_150;
          goto LABEL_143;
        case 4:
          v76 = sub_40D3A0(v8[15], (__int64)ptrb, v42 + 3, (__int64 *)v42 + 9, &v131, v133, a4);
          *v124 = v76;
          if ( v76 )
            goto LABEL_150;
          goto LABEL_143;
        default:
          __assert_fail("0", "lib/regcomp.c", 0xCF3u, "parse_bracket_exp");
      }
      goto LABEL_143;
    }
    v134 = 3;
    v135 = (const char *)v139;
    v46 = sub_4123B0(&v134, (__int64)v8, v136, v80, v81, 1);
    if ( v46 )
      goto LABEL_162;
    v82 = sub_408020(v7, (__int64)v8, a4);
    v83 = 0LL;
    v43 = v82;
    if ( *(int *)(v119 + 180) >= 2 )
      v83 = v42;
    if ( ((v132 - 2) & 0xFFFFFFFD) == 0 || (v84 = v134, ((v134 - 2) & 0xFFFFFFFD) == 0) )
    {
LABEL_243:
      *v124 = 11;
      goto LABEL_150;
    }
    LOBYTE(v126) = v132 == 3;
    if ( v132 == 3 )
    {
      if ( strlen(v133) > 1 || v134 == 3 && strlen(v135) > 1 )
        goto LABEL_228;
      v85 = *v133;
    }
    else
    {
      if ( v134 == 3 )
      {
        v87 = v135;
        if ( strlen(v135) > 1 )
          goto LABEL_228;
        v85 = 0;
        if ( v132 )
          goto LABEL_179;
      }
      else if ( v132 )
      {
        v85 = 0;
        v86 = 0;
        if ( v134 )
          goto LABEL_180;
        goto LABEL_242;
      }
      v85 = (unsigned __int8)v133;
    }
    if ( v134 )
    {
      v86 = 0;
      if ( v134 != 3 )
        goto LABEL_180;
      v87 = v135;
LABEL_179:
      v86 = *(unsigned __int8 *)v87;
      goto LABEL_180;
    }
LABEL_242:
    v86 = (unsigned __int8)v135;
LABEL_180:
    if ( !v132 || (v88 = (unsigned int)v133, (_BYTE)v126) )
    {
      LODWORD(v127) = v86;
      v126 = v83;
      v111 = sub_408730(v85, (__int64)v83);
      v84 = v134;
      LOBYTE(v86) = (_BYTE)v127;
      v88 = v111;
      v83 = v126;
    }
    if ( !v84 || (v89 = (unsigned int)v135, v84 == 3) )
    {
      LODWORD(v127) = v88;
      v126 = v83;
      v103 = sub_408730(v86, (__int64)v83);
      v88 = (unsigned int)v127;
      v83 = v126;
      v89 = v103;
    }
    if ( v88 == -1 || v89 == -1 )
    {
LABEL_228:
      *v124 = 3;
      goto LABEL_150;
    }
    if ( (a4 & 0x10000) != 0 && v88 > v89 )
      goto LABEL_243;
    if ( v83 )
    {
      v90 = v83[8];
      v91 = v83[1];
      if ( v90 == (void *)v123.m128i_i64[0] )
      {
        v112 = v83[1];
        v130 = v89;
        v129 = v88;
        v126 = v83;
        v123.m128i_i64[0] = 2 * v123.m128i_i64[0] + 1;
        size = 4 * v123.m128i_i64[0];
        v127 = realloc(v112, 4 * v123.m128i_i64[0]);
        v113 = realloc(v126[2], 4 * v123.m128i_i64[0]);
        v91 = v127;
        if ( !v127 || (v83 = v126, v88 = v129, v89 = v130, !v113) )
        {
          v122 = v113;
          free(v127);
          free(v122);
          *v124 = 12;
          goto LABEL_150;
        }
        v126[2] = v113;
        v90 = v83[8];
        v83[1] = v91;
      }
      v91[(_QWORD)v90] = v88;
      v92 = v83[2];
      v83[8] = (char *)v90 + 1;
      v92[(_QWORD)v90] = v89;
    }
    for ( j = 0LL; j != 256; ++j )
    {
      if ( v88 <= (unsigned int)j && v89 >= (unsigned int)j )
        ptrb[j >> 6] |= 1LL << j;
    }
    *v124 = 0;
LABEL_143:
    v73 = v7->m128i_i8[8];
    if ( v73 == 2 )
      goto LABEL_160;
    if ( v73 == 21 )
      break;
    v45 = 0;
  }
  v8[9] += v43;
  if ( (_BYTE)v125 )
  {
    v95 = ptrb;
    do
    {
      *v95 = ~*v95;
      ++v95;
    }
    while ( ptrb + 4 != v95 );
  }
  v96 = *(_DWORD *)(v119 + 180);
  if ( v96 > 1 )
  {
    v97 = *(_QWORD *)(v119 + 120);
    for ( k = 0LL; k != 4; ++k )
      ptrb[k] &= *(_QWORD *)(v97 + k * 8);
  }
  if ( !v42[5] && !v42[6] && !v42[7] && !v42[8] && (v96 <= 1 || !v42[9] && ((_BYTE)v42[4] & 1) == 0) )
  {
    sub_409170(v42);
    v138[0].m128i_i8[8] = 3;
    v138[0].m128i_i64[0] = (__int64)ptrb;
    v120 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), 0LL, 0LL, v138);
    if ( v120 )
      goto LABEL_7;
    goto LABEL_219;
  }
  *(_BYTE *)(v119 + 176) |= 2u;
  v99 = (_QWORD *)(v119 + 112);
  v100 = (int *)(v119 + 128);
  v138[0].m128i_i8[8] = 6;
  v138[0].m128i_i64[0] = (__int64)v42;
  v120 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), 0LL, 0LL, v138);
  v101 = ptrb;
  if ( !v120 )
    goto LABEL_219;
  while ( !*v101 )
  {
    if ( ptrb + 4 == ++v101 )
    {
      free(ptrb);
      goto LABEL_7;
    }
  }
  v138[0].m128i_i8[8] = 3;
  v138[0].m128i_i64[0] = (__int64)ptrb;
  v102 = sub_40A780(v99, v100, 0LL, 0LL, v138);
  if ( !v102 || (v139[0].m128i_i8[8] = 10, (v120 = sub_40A780(v99, v100, v102, v120, v139)) == 0LL) )
  {
LABEL_219:
    *v124 = 12;
    goto LABEL_150;
  }
LABEL_7:
  v9 = sub_4125D0((unsigned __int8 *)v7, v8, a4);
  v10 = v7->m128i_u8[8];
  v8[9] += v9;
  while ( 2 )
  {
    if ( (unsigned __int8)v10 > 0x17u )
      return (__int64)v120;
    v14 = 9177088LL;
    LOBYTE(v15) = (_BYTE)v10 == 18;
    if ( !_bittest64(&v14, v10) )
      return (__int64)v120;
    v16 = v8[9];
    si128 = _mm_load_si128(v7);
    if ( (_BYTE)v10 == 23 )
    {
      v123 = si128;
      v34 = sub_412C80(v8, (unsigned __int8 *)v7, a4);
      v35 = _mm_load_si128(&v123);
      ptra = v34;
      if ( v34 == -1 )
      {
        if ( v7->m128i_i8[8] != 1 || v7->m128i_i8[0] != 44 )
          goto LABEL_85;
        v15 = 0LL;
      }
      else
      {
        if ( v34 == -2 )
        {
LABEL_63:
          if ( (a4 & 0x200000) != 0 )
          {
LABEL_64:
            v8[9] = v16;
            v29 = v120;
            *v7 = v35;
            v7->m128i_i8[8] = 1;
            goto LABEL_35;
          }
          if ( v7->m128i_i8[8] == 2 )
            *v124 = 9;
          else
LABEL_85:
            *v124 = 10;
          goto LABEL_86;
        }
        v36 = v7->m128i_i8[8];
        if ( v36 == 24 )
        {
          v15 = ptra;
          goto LABEL_81;
        }
        if ( v36 != 1 )
          goto LABEL_63;
        if ( v7->m128i_i8[0] != 44 )
        {
          if ( (a4 & 0x200000) == 0 )
            goto LABEL_85;
          goto LABEL_64;
        }
        v15 = ptra;
      }
      v123 = v35;
      v37 = sub_412C80(v8, (unsigned __int8 *)v7, a4);
      v35 = _mm_load_si128(&v123);
      ptra = v37;
      if ( v37 == -2 )
        goto LABEL_63;
      if ( v37 != -1 && v37 < v15 || v7->m128i_i8[8] != 24 )
        goto LABEL_85;
      if ( v37 == -1 )
      {
        if ( v15 > 0x7FFF )
          goto LABEL_82;
        goto LABEL_76;
      }
LABEL_81:
      if ( ptra > 0x7FFF )
      {
LABEL_82:
        *v124 = 15;
LABEL_86:
        if ( !v120 )
          return 0LL;
        goto LABEL_51;
      }
LABEL_76:
      v8[9] += (int)sub_4125D0((unsigned __int8 *)v7, v8, a4);
      if ( !v120 )
        goto LABEL_65;
      if ( !(v15 | ptra) )
      {
        sub_407FB0(v120, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4091C0, 0LL);
        if ( *v124 )
          goto LABEL_51;
        goto LABEL_66;
      }
      if ( v15 <= 0 )
      {
        v18 = v120;
        v40 = 0LL;
        goto LABEL_93;
      }
      if ( v15 == 1 )
      {
        v38 = v120;
        v23 = v120;
LABEL_89:
        if ( v15 == ptra )
        {
LABEL_90:
          v120 = v23;
          goto LABEL_38;
        }
        goto LABEL_92;
      }
      v30 = v120;
      v123.m128i_i64[0] = (__int64)v8;
      v31 = 2LL;
      v125 = v7;
      v32 = v120;
      while ( 1 )
      {
        v32 = sub_40A860((_QWORD **)v32, v119);
        v139[0].m128i_i8[8] = 16;
        v33 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), v30, v32, v139);
        v30 = v33;
        if ( !v32 || !v33 )
          break;
        if ( v15 < ++v31 )
        {
          v38 = v32;
          v7 = v125;
          v8 = (__int64 *)v123.m128i_i64[0];
          v23 = v33;
          goto LABEL_89;
        }
      }
LABEL_50:
      *v124 = 12;
LABEL_51:
      sub_407FB0(v120, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4091C0, 0LL);
      return 0LL;
    }
    v15 = (unsigned __int8)v15;
    if ( (_BYTE)v10 == 19 )
    {
      v8[9] += (int)sub_4125D0((unsigned __int8 *)v7, v8, a4);
      if ( v120 )
      {
        v18 = v120;
        if ( v120[48] == 17 )
        {
          v18 = v120;
          ptra = 1LL;
          v123.m128i_i64[0] = 0LL;
          goto LABEL_56;
        }
        ptra = 1LL;
        v19 = 10;
        v123.m128i_i64[0] = 0LL;
        goto LABEL_25;
      }
      goto LABEL_65;
    }
    v8[9] += (int)sub_4125D0((unsigned __int8 *)v7, v8, a4);
    if ( !v120 )
    {
LABEL_65:
      if ( *v124 )
        return 0LL;
LABEL_66:
      v120 = 0LL;
      goto LABEL_38;
    }
    if ( (_BYTE)v10 == 18 )
    {
      v38 = v120;
      ptra = -1LL;
      v15 = 1LL;
      v23 = v120;
LABEL_92:
      v123.m128i_i64[0] = (__int64)v23;
      v39 = sub_40A860((_QWORD **)v38, v119);
      v40 = v123.m128i_i64[0];
      v18 = v39;
      if ( !v39 )
        goto LABEL_50;
LABEL_93:
      v41 = v18[48] == 17;
      v123.m128i_i64[0] = v40;
      if ( v41 )
        goto LABEL_56;
      goto LABEL_57;
    }
    v18 = v120;
    if ( v120[48] != 17 )
    {
      ptra = -1LL;
      v15 = 0LL;
      v123.m128i_i64[0] = 0LL;
      goto LABEL_24;
    }
    ptra = -1LL;
    v18 = v120;
    v15 = 0LL;
    v123.m128i_i64[0] = 0LL;
LABEL_56:
    sub_407FB0(v18, (__int64 (__fastcall *)(__int64, _QWORD *))sub_408150, *((_QWORD *)v18 + 5));
LABEL_57:
    if ( ptra == -1 )
LABEL_24:
      v19 = 11;
    else
      v19 = 10;
LABEL_25:
    v139[0].m128i_i8[8] = v19;
    v20 = (_QWORD *)(v119 + 112);
    v21 = (int *)(v119 + 128);
    v22 = sub_40A780((_QWORD *)(v119 + 112), (int *)(v119 + 128), v18, 0LL, v139);
    v23 = v22;
    if ( !v22 )
      goto LABEL_50;
    v24 = v15 + 2;
    if ( v24 <= ptra )
    {
      v125 = v7;
      v25 = v18;
      v26 = v22;
      while ( 1 )
      {
        v25 = sub_40A860((_QWORD **)v25, v119);
        v139[0].m128i_i8[8] = 16;
        v27 = sub_40A780(v20, v21, v26, v25, v139);
        if ( !v25 )
          goto LABEL_50;
        if ( !v27 )
          goto LABEL_50;
        v139[0].m128i_i8[8] = 10;
        v28 = sub_40A780(v20, v21, v27, 0LL, v139);
        v26 = v28;
        if ( !v28 )
          goto LABEL_50;
        if ( ++v24 > ptra )
        {
          v7 = v125;
          v23 = v28;
          break;
        }
      }
    }
    if ( !v123.m128i_i64[0] )
      goto LABEL_90;
    v139[0].m128i_i8[8] = 16;
    v29 = sub_40A780(v20, v21, v123.m128i_i64[0], v23, v139);
LABEL_35:
    if ( *v124 && !v29 )
      goto LABEL_86;
    v120 = v29;
LABEL_38:
    v10 = v7->m128i_u8[8];
    if ( (a4 & 0x1000000) == 0 || (_BYTE)v10 != 11 && (_BYTE)v10 != 23 )
      continue;
    break;
  }
  if ( v120 )
    sub_407FB0(v120, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4091C0, 0LL);
LABEL_43:
  v120 = 0LL;
  *v124 = 13;
  return (__int64)v120;
}

_QWORD *__fastcall sub_414230(__int64 *a1, __int64 *a2, __m128i *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int8 v12; // al
  _QWORD *v13; // r9
  char *v14; // rax
  _QWORD *v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __m128i v18; // [rsp+20h] [rbp-48h] BYREF

  v17 = *a2;
  v10 = sub_412D40(a1, a2, a3, a4, a5, a6);
  v11 = (_QWORD *)v10;
  if ( *a6 && !v10 )
    return 0LL;
LABEL_3:
  v12 = a3->m128i_i8[8];
  if ( (v12 & 0xF7) != 2 )
  {
    while ( v12 != 9 || !a5 )
    {
      v13 = (_QWORD *)sub_412D40(a1, a2, a3, a4, a5, a6);
      if ( *a6 && !v13 )
      {
        if ( v11 )
          sub_407FB0(v11, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4091C0, 0LL);
        return 0LL;
      }
      if ( !v11 || !v13 )
      {
        if ( !v11 )
          v11 = v13;
        goto LABEL_3;
      }
      v16 = v13;
      v18.m128i_i8[8] = 16;
      v14 = sub_40A780((_QWORD *)(v17 + 112), (int *)(v17 + 128), v11, v13, &v18);
      if ( !v14 )
      {
        sub_407FB0(v16, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4091C0, 0LL);
        sub_407FB0(v11, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4091C0, 0LL);
        v11 = 0LL;
        *a6 = 12;
        return v11;
      }
      v11 = v14;
      v12 = a3->m128i_i8[8];
      if ( (v12 & 0xF7) == 2 )
        return v11;
    }
  }
  return v11;
}

char *__fastcall sub_414370(__int64 *a1, __int64 *a2, __m128i *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // r15
  _QWORD *v13; // rcx
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+10h] [rbp-58h]
  __m128i v17; // [rsp+20h] [rbp-48h] BYREF

  v9 = *a2;
  v16 = *(_QWORD *)(*a2 + 168);
  v10 = (char *)sub_414230(a1, a2, a3, a4, a5, a6);
  v11 = v10;
  if ( *a6 && !v10 )
    return 0LL;
  while ( a3->m128i_i8[8] == 10 )
  {
    a1[9] += (int)sub_4125D0((unsigned __int8 *)a3, a1, a4 | 0x800000);
    if ( (a3->m128i_i8[8] & 0xF7) == 2 || a3->m128i_i8[8] == 9 && a5 )
    {
      v13 = 0LL;
    }
    else
    {
      v15 = *(_QWORD *)(v9 + 168);
      *(_QWORD *)(v9 + 168) = v16;
      v13 = sub_414230(a1, a2, a3, a4, a5, a6);
      if ( *a6 && !v13 )
      {
        if ( v11 )
          sub_407FB0(v11, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4091C0, 0LL);
        return 0LL;
      }
      *(_QWORD *)(v9 + 168) |= v15;
    }
    v17.m128i_i8[8] = 10;
    v11 = sub_40A780((_QWORD *)(v9 + 112), (int *)(v9 + 128), v11, v13, &v17);
    if ( !v11 )
    {
      *a6 = 12;
      return v11;
    }
  }
  return v11;
}

__int64 __fastcall sub_4144D0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  bool v8; // cc
  int *v9; // rbx
  size_t v10; // rsi
  size_t v11; // r15
  void *v12; // rax
  char *v13; // rax
  bool v14; // zf
  char v15; // al
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // rdx
  char v19; // al
  char v20; // si
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r12
  int v26; // eax
  char *v27; // rax
  _QWORD *v28; // r15
  int *v29; // r13
  char *v30; // rax
  _QWORD *v31; // r9
  char *v32; // r14
  char *v33; // rdx
  char *v34; // rax
  __int64 v35; // r15
  size_t v36; // r13
  void *v37; // rax
  void *v38; // r14
  void *v39; // rax
  void *v40; // rax
  void *v41; // rax
  __int64 v42; // r13
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 *v46; // rdi
  __int64 v47; // rax
  char v48; // r13
  __int64 v49; // r14
  char *v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  char *v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rsi
  size_t v58; // rcx
  unsigned __int8 v59; // al
  char v60; // al
  __int64 v61; // rax
  unsigned int v62; // r13d
  __int64 v63; // r10
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // r11
  unsigned int v69; // eax
  __int64 *v70; // rax
  __int64 v71; // r12
  _QWORD *v72; // rdi
  _QWORD *v73; // r13
  void *v74; // rdi
  __int64 result; // rax
  _QWORD *v76; // rdi
  _QWORD *v77; // r12
  void *v78; // rdi
  void *v79; // rax
  __int64 v80; // r15
  int v81; // edx
  int v82; // ecx
  wint_t v83; // eax
  unsigned int v84; // edi
  __int64 v85; // rdi
  char *v86; // r8
  char v87; // r9
  __int64 v88; // rcx
  char *v89; // rdx
  __int64 *v90; // rax
  int *v91; // rax
  char *v92; // rax
  char *v93; // rax
  char v94; // dl
  unsigned int v95; // esi
  bool v96; // sf
  char v97; // dl
  __int64 v98; // [rsp+0h] [rbp-138h]
  int v99; // [rsp+0h] [rbp-138h]
  size_t sized; // [rsp+8h] [rbp-130h]
  __int64 sizee; // [rsp+8h] [rbp-130h]
  size_t size; // [rsp+8h] [rbp-130h]
  size_t sizea; // [rsp+8h] [rbp-130h]
  size_t sizeb; // [rsp+8h] [rbp-130h]
  int sizec; // [rsp+8h] [rbp-130h]
  size_t sizef; // [rsp+8h] [rbp-130h]
  void *v107; // [rsp+10h] [rbp-128h]
  __int64 v108; // [rsp+10h] [rbp-128h]
  unsigned int v109; // [rsp+2Ch] [rbp-10Ch] BYREF
  __m128i v110; // [rsp+30h] [rbp-108h] BYREF
  __m128i v111; // [rsp+40h] [rbp-F8h] BYREF
  void *ptr; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v113[27]; // [rsp+60h] [rbp-D8h] BYREF

  *(_BYTE *)(a1 + 56) &= 0x90u;
  v8 = *(_QWORD *)(a1 + 8) <= 0xE7uLL;
  v109 = 0;
  v9 = *(int **)a1;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v8 )
  {
    v91 = (int *)realloc(v9, 0xE8uLL);
    v9 = v91;
    if ( !v91 )
      return 12LL;
    *(_QWORD *)(a1 + 8) = 232LL;
    *(_QWORD *)a1 = v91;
  }
  *(_QWORD *)(a1 + 16) = 232LL;
  *(_QWORD *)v9 = 0LL;
  *((_QWORD *)v9 + 28) = 0LL;
  memset(
    (void *)((unsigned __int64)(v9 + 2) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v9 - (((_DWORD)v9 + 8) & 0xFFFFFFF8) + 232) >> 3));
  v9[32] = 15;
  if ( a3 > 0x555555555555554LL )
    goto LABEL_112;
  *((_QWORD *)v9 + 1) = a3 + 1;
  *(_QWORD *)v9 = malloc(16 * (a3 + 1));
  if ( a3 )
  {
    v10 = 1LL;
    do
      v10 *= 2LL;
    while ( a3 >= v10 );
    v11 = v10 - 1;
  }
  else
  {
    v11 = 0LL;
    v10 = 1LL;
  }
  v12 = calloc(0x18uLL, v10);
  *((_QWORD *)v9 + 17) = v11;
  *((_QWORD *)v9 + 8) = v12;
  v9[45] = __ctype_get_mb_cur_max();
  v13 = nl_langinfo(14);
  if ( (*v13 & 0xDF) == 85 && (v13[1] & 0xDF) == 84 && (v13[2] & 0xDF) == 70 )
  {
    v14 = v13[3] == 45;
    if ( !strcmp(&v13[v14 + 3], "8") )
      *((_BYTE *)v9 + 176) |= 4u;
  }
  v15 = *((_BYTE *)v9 + 176);
  v8 = v9[45] <= 1;
  *((_BYTE *)v9 + 176) = v15 & 0xF7;
  if ( !v8 )
  {
    if ( (v15 & 4) != 0 )
    {
      *((_QWORD *)v9 + 15) = &unk_4191C0;
      goto LABEL_15;
    }
    v79 = calloc(0x20uLL, 1uLL);
    *((_QWORD *)v9 + 15) = v79;
    if ( !v79 )
    {
LABEL_112:
      v109 = 12;
LABEL_111:
      sub_40D0F0((__int64 *)v9);
      *(_QWORD *)a1 = 0LL;
      result = v109;
      *(_QWORD *)(a1 + 8) = 0LL;
      return result;
    }
    v80 = 0LL;
LABEL_115:
    v81 = 8 * v80;
    v82 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        sizec = v82;
        v99 = v81;
        v83 = btowc(v81);
        v84 = v99 & 0xFFFFFF80;
        if ( v83 != -1 )
          break;
        if ( !v84 )
          goto LABEL_117;
LABEL_118:
        v82 = sizec + 1;
        v81 = v99 + 1;
        if ( sizec == 63 )
          goto LABEL_123;
      }
      *(_QWORD *)(v80 + *((_QWORD *)v9 + 15)) |= 1LL << sizec;
      if ( v84 )
        goto LABEL_118;
      if ( v83 != v99 )
      {
LABEL_117:
        *((_BYTE *)v9 + 176) |= 8u;
        goto LABEL_118;
      }
      v82 = sizec + 1;
      v81 = v99 + 1;
      if ( sizec == 63 )
      {
LABEL_123:
        v80 += 8LL;
        if ( v80 == 32 )
          break;
        goto LABEL_115;
      }
    }
  }
LABEL_15:
  if ( !*(_QWORD *)v9 || !*((_QWORD *)v9 + 8) )
    goto LABEL_112;
  v16 = *(_QWORD *)(a1 + 40);
  v109 = 0;
  memset(&v113[1], 0, 0x90uLL);
  v113[15] = v16;
  v17 = v9[45];
  v113[0] = a2;
  v98 = a4 & 0x400000;
  LOBYTE(v113[17]) = (a4 & 0x400000) != 0;
  v18 = v98 | v16;
  v19 = *((_BYTE *)v9 + 176);
  v20 = v18 != 0;
  v113[11] = a3;
  v21 = v18;
  v113[10] = a3;
  BYTE3(v113[17]) = v18 != 0;
  LODWORD(v113[18]) = v17;
  BYTE1(v113[17]) = (v19 & 4) != 0;
  BYTE2(v113[17]) = (v19 & 8) != 0;
  v113[13] = a3;
  v113[12] = a3;
  if ( a3 )
  {
    v22 = sub_4083F0((__int64)v113, a3 + 1);
    if ( v22 )
    {
LABEL_83:
      v109 = v22;
      v35 = *(_QWORD *)a1;
LABEL_108:
      v76 = *(_QWORD **)(v35 + 112);
      if ( v76 )
      {
        do
        {
          v77 = (_QWORD *)*v76;
          free(v76);
          v76 = v77;
        }
        while ( v77 );
      }
      *(_QWORD *)(v35 + 112) = 0LL;
      v78 = *(void **)(v35 + 32);
      *(_DWORD *)(v35 + 128) = 15;
      *(_QWORD *)(v35 + 104) = 0LL;
      free(v78);
      *(_QWORD *)(v35 + 32) = 0LL;
      sub_409740((__int64)v113);
      goto LABEL_111;
    }
    v20 = BYTE3(v113[17]);
    v17 = v9[45];
  }
  if ( v20 )
    a2 = v113[1];
  v113[1] = a2;
  if ( (a4 & 0x400000) != 0 )
  {
    if ( v17 <= 1 )
    {
      sub_408760(v113);
      v109 = 0;
    }
    else
    {
      while ( 1 )
      {
        v22 = sub_408990((__int64)v113);
        if ( v22 )
          goto LABEL_83;
        if ( (__int64)a3 <= v113[7] || v113[8] > v113[6] + v9[45] )
          break;
        v22 = sub_4083F0((__int64)v113, 2 * v113[8]);
        if ( v22 )
          goto LABEL_83;
      }
      v109 = 0;
    }
  }
  else if ( v17 > 1 )
  {
    sub_4087E0((__int64)v113);
    v109 = 0;
  }
  else
  {
    v23 = v113[8];
    if ( v21 )
    {
      v24 = v113[6];
      if ( v113[11] <= v113[8] )
        v23 = v113[11];
      if ( v23 > v113[6] )
      {
        while ( 1 )
        {
          *(_BYTE *)(a2 + v24) = *(_BYTE *)(v113[15] + *(unsigned __int8 *)(v113[5] + v24 + v113[0]));
          if ( v23 == ++v24 )
            break;
          a2 = v113[1];
        }
      }
      else
      {
        v23 = v113[6];
      }
    }
    v113[6] = v23;
    v113[7] = v23;
    v109 = 0;
  }
  v25 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(v25 + 216) = a4;
  v26 = sub_4125D0((unsigned __int8 *)&v110, v113, a4 | 0x800000);
  v113[9] += v26;
  v27 = sub_414370(v113, (__int64 *)a1, &v110, a4, 0LL, &v109);
  if ( v109 )
  {
    if ( !v27 )
    {
      *((_QWORD *)v9 + 13) = 0LL;
      v35 = *(_QWORD *)a1;
      goto LABEL_108;
    }
    v28 = (_QWORD *)(v25 + 112);
    sizef = (size_t)v27;
    v29 = (int *)(v25 + 128);
    v111.m128i_i8[8] = 2;
    v92 = sub_40A780((_QWORD *)(v25 + 112), (int *)(v25 + 128), 0LL, 0LL, &v111);
    v31 = (_QWORD *)sizef;
    v32 = v92;
  }
  else
  {
    v28 = (_QWORD *)(v25 + 112);
    sized = (size_t)v27;
    v29 = (int *)(v25 + 128);
    v111.m128i_i8[8] = 2;
    v30 = sub_40A780((_QWORD *)(v25 + 112), (int *)(v25 + 128), 0LL, 0LL, &v111);
    v31 = (_QWORD *)sized;
    v32 = v30;
    v33 = v30;
    if ( !sized )
      goto LABEL_39;
  }
  v111.m128i_i8[8] = 16;
  v34 = sub_40A780(v28, v29, v31, v32, &v111);
  v33 = v32;
  v32 = v34;
LABEL_39:
  v35 = *(_QWORD *)a1;
  if ( v32 == 0LL || v33 == 0LL )
  {
    v109 = 12;
    *((_QWORD *)v9 + 13) = 0LL;
    goto LABEL_108;
  }
  v36 = *(_QWORD *)(v35 + 8);
  *((_QWORD *)v9 + 13) = v32;
  sizee = 8 * v36;
  v36 *= 24LL;
  v37 = malloc(sizee);
  *(_QWORD *)(v35 + 24) = v37;
  v38 = v37;
  v39 = malloc(sizee);
  *(_QWORD *)(v35 + 32) = v39;
  v107 = v39;
  v40 = malloc(v36);
  *(_QWORD *)(v35 + 40) = v40;
  size = (size_t)v40;
  v41 = malloc(v36);
  *(_QWORD *)(v35 + 48) = v41;
  if ( !v38 || !v107 || !size || !v41 )
  {
    v109 = 12;
    goto LABEL_108;
  }
  v42 = *(_QWORD *)(a1 + 48);
  v43 = malloc(8 * v42);
  *(_QWORD *)(v35 + 224) = v43;
  if ( v43 )
  {
    v44 = 0LL;
    if ( v42 )
    {
      do
      {
        v43[v44] = v44;
        ++v44;
      }
      while ( v44 != v42 );
    }
    sub_409FF0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_409CB0, v35);
    v45 = *(_QWORD *)(a1 + 48);
    if ( v45 )
    {
      v46 = *(__int64 **)(v35 + 224);
      v47 = *v46;
      if ( *v46 )
        goto LABEL_53;
      while ( ++v47 != v45 )
      {
        if ( v46[v47] != v47 )
          goto LABEL_53;
      }
    }
    else
    {
      v46 = *(__int64 **)(v35 + 224);
    }
    free(v46);
    *(_QWORD *)(v35 + 224) = 0LL;
  }
LABEL_53:
  v22 = sub_407FB0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_40AB30, a1);
  if ( v22 )
    goto LABEL_83;
  v22 = sub_407FB0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_40D060, v35);
  if ( v22 )
    goto LABEL_83;
  sub_409FF0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_409D40, v35);
  v22 = sub_409FF0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_409840, v35);
  if ( v22 )
    goto LABEL_83;
  v48 = 0;
  v49 = 0LL;
  while ( *(_QWORD *)(v35 + 16) != v49 )
  {
    while ( 1 )
    {
      while ( *(_QWORD *)(*(_QWORD *)(v35 + 48) + 24 * v49 + 8) )
      {
        if ( *(_QWORD *)(v35 + 16) == ++v49 )
          goto LABEL_60;
      }
      sizea = 24 * v49;
      v22 = sub_40A220(&v111, (__int64 *)v35, v49, 1);
      if ( v22 )
        goto LABEL_83;
      ++v49;
      if ( *(_QWORD *)(*(_QWORD *)(v35 + 48) + sizea + 8) )
        break;
      v48 = 1;
      free(ptr);
      if ( *(_QWORD *)(v35 + 16) == v49 )
      {
LABEL_61:
        v48 = 0;
        v49 = 0LL;
      }
    }
  }
LABEL_60:
  if ( v48 )
    goto LABEL_61;
  if ( (*(_BYTE *)(a1 + 56) & 0x10) == 0 && *(_QWORD *)(a1 + 48) && (*(_BYTE *)(v35 + 176) & 1) != 0
    || *(_QWORD *)(v35 + 152) )
  {
    v50 = (char *)malloc(24 * v49);
    *(_QWORD *)(v35 + 56) = v50;
    if ( !v50 )
    {
      v109 = 12;
      v35 = *(_QWORD *)a1;
      goto LABEL_108;
    }
    v51 = 0LL;
    if ( !v49 )
      goto LABEL_85;
    while ( 1 )
    {
      v52 = 3 * v51++;
      v53 = &v50[8 * v52];
      *(_OWORD *)v53 = 0LL;
      *((_QWORD *)v53 + 2) = 0LL;
      v54 = *(_QWORD *)(v35 + 16);
      if ( v54 <= v51 )
        break;
      v50 = *(char **)(v35 + 56);
    }
    if ( !v54 )
      goto LABEL_85;
    v108 = 0LL;
    v55 = *(_QWORD *)(v35 + 48);
    while ( 1 )
    {
      v56 = 0LL;
      v57 = v55 + 24 * v108;
      v58 = *(_QWORD *)(v57 + 16);
      if ( *(__int64 *)(v57 + 8) > 0 )
        break;
LABEL_138:
      if ( *(_QWORD *)(v35 + 16) <= (unsigned __int64)++v108 )
        goto LABEL_85;
    }
    while ( 1 )
    {
      sizeb = v58;
      if ( !(unsigned __int8)sub_408490((_QWORD *)(*(_QWORD *)(v35 + 56) + 24LL * *(_QWORD *)(v58 + 8 * v56)), v108) )
        break;
      v55 = *(_QWORD *)(v35 + 48);
      ++v56;
      v58 = sizeb;
      if ( v56 >= *(_QWORD *)(v55 + 24 * v108 + 8) )
        goto LABEL_138;
    }
    v22 = 12;
    goto LABEL_83;
  }
LABEL_85:
  v59 = *((_BYTE *)v9 + 176);
  v109 = 0;
  v60 = (v98 == 0) & (v59 >> 2);
  if ( v60 && !*(_QWORD *)(a1 + 40) )
  {
    v85 = *((_QWORD *)v9 + 2);
    if ( v85 )
    {
      v86 = *(char **)v9;
      v87 = 0;
      v88 = 0LL;
      v89 = *(char **)v9;
      while ( 2 )
      {
        switch ( v89[8] )
        {
          case 1:
            if ( *v89 < 0 )
              v48 = v60;
            goto LABEL_145;
          case 2:
          case 4:
          case 8:
          case 9:
          case 10:
          case 11:
            goto LABEL_145;
          case 3:
            if ( *(_QWORD *)(*(_QWORD *)v89 + 16LL) || *(_QWORD *)(*(_QWORD *)v89 + 24LL) )
              goto LABEL_86;
            goto LABEL_145;
          case 5:
            v87 = v60;
            goto LABEL_145;
          case 6:
            goto LABEL_86;
          case 12:
            v95 = *(_DWORD *)v89;
            if ( *(_DWORD *)v89 == 32 )
              goto LABEL_145;
            if ( v95 <= 0x20 )
            {
              if ( v95 != 16 )
                goto LABEL_86;
            }
            else if ( v95 != 64 && v95 != 128 )
            {
              goto LABEL_86;
            }
LABEL_145:
            ++v88;
            v89 += 16;
            if ( v88 != v85 )
              continue;
            if ( !((unsigned __int8)v87 | (unsigned __int8)v48) )
              goto LABEL_172;
            v93 = &v86[16 * v88];
            do
            {
              v94 = v86[8];
              if ( v94 == 1 )
              {
                if ( *v86 < 0 )
                  v86[10] &= ~0x20u;
              }
              else if ( v94 == 5 )
              {
                v86[8] = 7;
              }
              v86 += 16;
            }
            while ( v93 != v86 );
            break;
          default:
            abort();
        }
        break;
      }
    }
    else
    {
LABEL_172:
      v87 = 0;
    }
    v14 = *((_QWORD *)v9 + 19) == 0LL;
    v96 = *((__int64 *)v9 + 19) < 0;
    v97 = *((_BYTE *)v9 + 176);
    v9[45] = 1;
    *((_BYTE *)v9 + 176) = v97 & 0xF9 | (2 * (v87 & 1 | (!v96 && !v14)));
  }
LABEL_86:
  v61 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 13) + 24LL) + 56LL);
  *((_QWORD *)v9 + 18) = v61;
  v62 = sub_40ABB0((__int64)&v111, *((_QWORD *)v9 + 6) + 24 * v61);
  v110.m128i_i32[0] = v62;
  if ( !v62 )
  {
    if ( *((__int64 *)v9 + 19) > 0 )
    {
      v63 = v111.m128i_i64[1];
      if ( v111.m128i_i64[1] > 0 )
      {
        v64 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
            v65 = *(_QWORD *)v9 + 16LL * *((_QWORD *)ptr + v64);
            if ( *(_BYTE *)(v65 + 8) == 4 )
            {
              v66 = 0LL;
              while ( 1 )
              {
                v67 = *(_QWORD *)v9 + 16LL * *((_QWORD *)ptr + v66);
                if ( *(_BYTE *)(v67 + 8) == 9 && *(_QWORD *)v67 == *(_QWORD *)v65 )
                  break;
                if ( v63 == ++v66 )
                  goto LABEL_90;
              }
              if ( !sub_409B10(
                      v63,
                      (__int64 *)&ptr,
                      **(_QWORD **)(*((_QWORD *)v9 + 5) + 24LL * *((_QWORD *)ptr + v64) + 16)) )
                break;
            }
LABEL_90:
            if ( v63 <= ++v64 )
              goto LABEL_99;
          }
          v69 = sub_40A050((__int64)&v111, *((_QWORD *)v9 + 6) + 24 * v68);
          if ( v69 )
            break;
          v63 = v111.m128i_i64[1];
          v64 = 1LL;
          if ( v111.m128i_i64[1] <= 1 )
            goto LABEL_99;
        }
        v62 = v69;
        goto LABEL_103;
      }
    }
LABEL_99:
    v70 = sub_40ADC0(&v110, v9, (__int64)&v111, 0);
    *((_QWORD *)v9 + 9) = v70;
    if ( v70 )
    {
      if ( *((char *)v70 + 104) >= 0 )
      {
        *((_QWORD *)v9 + 12) = v70;
        *((_QWORD *)v9 + 11) = v70;
        *((_QWORD *)v9 + 10) = v70;
LABEL_102:
        free(ptr);
        goto LABEL_103;
      }
      *((_QWORD *)v9 + 10) = sub_40ADC0(&v110, v9, (__int64)&v111, 1u);
      *((_QWORD *)v9 + 11) = sub_40ADC0(&v110, v9, (__int64)&v111, 2u);
      v90 = sub_40ADC0(&v110, v9, (__int64)&v111, 6u);
      v14 = *((_QWORD *)v9 + 10) == 0LL;
      *((_QWORD *)v9 + 12) = v90;
      if ( !v14 && *((_QWORD *)v9 + 11) && v90 )
        goto LABEL_102;
    }
    v62 = v110.m128i_i32[0];
  }
LABEL_103:
  v71 = *(_QWORD *)a1;
  v109 = v62;
  v72 = *(_QWORD **)(v71 + 112);
  if ( v72 )
  {
    do
    {
      v73 = (_QWORD *)*v72;
      free(v72);
      v72 = v73;
    }
    while ( v73 );
  }
  *(_QWORD *)(v71 + 112) = 0LL;
  v74 = *(void **)(v71 + 32);
  *(_DWORD *)(v71 + 128) = 15;
  *(_QWORD *)(v71 + 104) = 0LL;
  free(v74);
  *(_QWORD *)(v71 + 32) = 0LL;
  sub_409740((__int64)v113);
  result = v109;
  if ( v109 )
    goto LABEL_111;
  return result;
}

__int64 __fastcall sub_4144D0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  bool v8; // cc
  int *v9; // rbx
  size_t v10; // rsi
  size_t v11; // r15
  void *v12; // rax
  char *v13; // rax
  bool v14; // zf
  char v15; // al
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // rdx
  char v19; // al
  char v20; // si
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r12
  int v26; // eax
  char *v27; // rax
  _QWORD *v28; // r15
  int *v29; // r13
  char *v30; // rax
  _QWORD *v31; // r9
  char *v32; // r14
  char *v33; // rdx
  char *v34; // rax
  __int64 v35; // r15
  size_t v36; // r13
  void *v37; // rax
  void *v38; // r14
  void *v39; // rax
  void *v40; // rax
  void *v41; // rax
  __int64 v42; // r13
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 *v46; // rdi
  __int64 v47; // rax
  char v48; // r13
  __int64 v49; // r14
  char *v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  char *v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rsi
  size_t v58; // rcx
  unsigned __int8 v59; // al
  char v60; // al
  __int64 v61; // rax
  unsigned int v62; // r13d
  __int64 v63; // r10
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // r11
  unsigned int v69; // eax
  __int64 *v70; // rax
  __int64 v71; // r12
  _QWORD *v72; // rdi
  _QWORD *v73; // r13
  void *v74; // rdi
  __int64 result; // rax
  _QWORD *v76; // rdi
  _QWORD *v77; // r12
  void *v78; // rdi
  void *v79; // rax
  __int64 v80; // r15
  int v81; // edx
  int v82; // ecx
  wint_t v83; // eax
  unsigned int v84; // edi
  __int64 v85; // rdi
  char *v86; // r8
  char v87; // r9
  __int64 v88; // rcx
  char *v89; // rdx
  __int64 *v90; // rax
  int *v91; // rax
  char *v92; // rax
  char *v93; // rax
  char v94; // dl
  unsigned int v95; // esi
  bool v96; // sf
  char v97; // dl
  __int64 v98; // [rsp+0h] [rbp-138h]
  int v99; // [rsp+0h] [rbp-138h]
  size_t sized; // [rsp+8h] [rbp-130h]
  __int64 sizee; // [rsp+8h] [rbp-130h]
  size_t size; // [rsp+8h] [rbp-130h]
  size_t sizea; // [rsp+8h] [rbp-130h]
  size_t sizeb; // [rsp+8h] [rbp-130h]
  int sizec; // [rsp+8h] [rbp-130h]
  size_t sizef; // [rsp+8h] [rbp-130h]
  void *v107; // [rsp+10h] [rbp-128h]
  __int64 v108; // [rsp+10h] [rbp-128h]
  unsigned int v109; // [rsp+2Ch] [rbp-10Ch] BYREF
  __m128i v110; // [rsp+30h] [rbp-108h] BYREF
  __m128i v111; // [rsp+40h] [rbp-F8h] BYREF
  void *ptr; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v113[27]; // [rsp+60h] [rbp-D8h] BYREF

  *(_BYTE *)(a1 + 56) &= 0x90u;
  v8 = *(_QWORD *)(a1 + 8) <= 0xE7uLL;
  v109 = 0;
  v9 = *(int **)a1;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v8 )
  {
    v91 = (int *)realloc(v9, 0xE8uLL);
    v9 = v91;
    if ( !v91 )
      return 12LL;
    *(_QWORD *)(a1 + 8) = 232LL;
    *(_QWORD *)a1 = v91;
  }
  *(_QWORD *)(a1 + 16) = 232LL;
  *(_QWORD *)v9 = 0LL;
  *((_QWORD *)v9 + 28) = 0LL;
  memset(
    (void *)((unsigned __int64)(v9 + 2) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v9 - (((_DWORD)v9 + 8) & 0xFFFFFFF8) + 232) >> 3));
  v9[32] = 15;
  if ( a3 > 0x555555555555554LL )
    goto LABEL_112;
  *((_QWORD *)v9 + 1) = a3 + 1;
  *(_QWORD *)v9 = malloc(16 * (a3 + 1));
  if ( a3 )
  {
    v10 = 1LL;
    do
      v10 *= 2LL;
    while ( a3 >= v10 );
    v11 = v10 - 1;
  }
  else
  {
    v11 = 0LL;
    v10 = 1LL;
  }
  v12 = calloc(0x18uLL, v10);
  *((_QWORD *)v9 + 17) = v11;
  *((_QWORD *)v9 + 8) = v12;
  v9[45] = __ctype_get_mb_cur_max();
  v13 = nl_langinfo(14);
  if ( (*v13 & 0xDF) == 85 && (v13[1] & 0xDF) == 84 && (v13[2] & 0xDF) == 70 )
  {
    v14 = v13[3] == 45;
    if ( !strcmp(&v13[v14 + 3], "8") )
      *((_BYTE *)v9 + 176) |= 4u;
  }
  v15 = *((_BYTE *)v9 + 176);
  v8 = v9[45] <= 1;
  *((_BYTE *)v9 + 176) = v15 & 0xF7;
  if ( !v8 )
  {
    if ( (v15 & 4) != 0 )
    {
      *((_QWORD *)v9 + 15) = &unk_4191C0;
      goto LABEL_15;
    }
    v79 = calloc(0x20uLL, 1uLL);
    *((_QWORD *)v9 + 15) = v79;
    if ( !v79 )
    {
LABEL_112:
      v109 = 12;
LABEL_111:
      sub_40D0F0((__int64 *)v9);
      *(_QWORD *)a1 = 0LL;
      result = v109;
      *(_QWORD *)(a1 + 8) = 0LL;
      return result;
    }
    v80 = 0LL;
LABEL_115:
    v81 = 8 * v80;
    v82 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        sizec = v82;
        v99 = v81;
        v83 = btowc(v81);
        v84 = v99 & 0xFFFFFF80;
        if ( v83 != -1 )
          break;
        if ( !v84 )
          goto LABEL_117;
LABEL_118:
        v82 = sizec + 1;
        v81 = v99 + 1;
        if ( sizec == 63 )
          goto LABEL_123;
      }
      *(_QWORD *)(v80 + *((_QWORD *)v9 + 15)) |= 1LL << sizec;
      if ( v84 )
        goto LABEL_118;
      if ( v83 != v99 )
      {
LABEL_117:
        *((_BYTE *)v9 + 176) |= 8u;
        goto LABEL_118;
      }
      v82 = sizec + 1;
      v81 = v99 + 1;
      if ( sizec == 63 )
      {
LABEL_123:
        v80 += 8LL;
        if ( v80 == 32 )
          break;
        goto LABEL_115;
      }
    }
  }
LABEL_15:
  if ( !*(_QWORD *)v9 || !*((_QWORD *)v9 + 8) )
    goto LABEL_112;
  v16 = *(_QWORD *)(a1 + 40);
  v109 = 0;
  memset(&v113[1], 0, 0x90uLL);
  v113[15] = v16;
  v17 = v9[45];
  v113[0] = a2;
  v98 = a4 & 0x400000;
  LOBYTE(v113[17]) = (a4 & 0x400000) != 0;
  v18 = v98 | v16;
  v19 = *((_BYTE *)v9 + 176);
  v20 = v18 != 0;
  v113[11] = a3;
  v21 = v18;
  v113[10] = a3;
  BYTE3(v113[17]) = v18 != 0;
  LODWORD(v113[18]) = v17;
  BYTE1(v113[17]) = (v19 & 4) != 0;
  BYTE2(v113[17]) = (v19 & 8) != 0;
  v113[13] = a3;
  v113[12] = a3;
  if ( a3 )
  {
    v22 = sub_4083F0((__int64)v113, a3 + 1);
    if ( v22 )
    {
LABEL_83:
      v109 = v22;
      v35 = *(_QWORD *)a1;
LABEL_108:
      v76 = *(_QWORD **)(v35 + 112);
      if ( v76 )
      {
        do
        {
          v77 = (_QWORD *)*v76;
          free(v76);
          v76 = v77;
        }
        while ( v77 );
      }
      *(_QWORD *)(v35 + 112) = 0LL;
      v78 = *(void **)(v35 + 32);
      *(_DWORD *)(v35 + 128) = 15;
      *(_QWORD *)(v35 + 104) = 0LL;
      free(v78);
      *(_QWORD *)(v35 + 32) = 0LL;
      sub_409740((__int64)v113);
      goto LABEL_111;
    }
    v20 = BYTE3(v113[17]);
    v17 = v9[45];
  }
  if ( v20 )
    a2 = v113[1];
  v113[1] = a2;
  if ( (a4 & 0x400000) != 0 )
  {
    if ( v17 <= 1 )
    {
      sub_408760(v113);
      v109 = 0;
    }
    else
    {
      while ( 1 )
      {
        v22 = sub_408990((__int64)v113);
        if ( v22 )
          goto LABEL_83;
        if ( (__int64)a3 <= v113[7] || v113[8] > v113[6] + v9[45] )
          break;
        v22 = sub_4083F0((__int64)v113, 2 * v113[8]);
        if ( v22 )
          goto LABEL_83;
      }
      v109 = 0;
    }
  }
  else if ( v17 > 1 )
  {
    sub_4087E0((__int64)v113);
    v109 = 0;
  }
  else
  {
    v23 = v113[8];
    if ( v21 )
    {
      v24 = v113[6];
      if ( v113[11] <= v113[8] )
        v23 = v113[11];
      if ( v23 > v113[6] )
      {
        while ( 1 )
        {
          *(_BYTE *)(a2 + v24) = *(_BYTE *)(v113[15] + *(unsigned __int8 *)(v113[5] + v24 + v113[0]));
          if ( v23 == ++v24 )
            break;
          a2 = v113[1];
        }
      }
      else
      {
        v23 = v113[6];
      }
    }
    v113[6] = v23;
    v113[7] = v23;
    v109 = 0;
  }
  v25 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(v25 + 216) = a4;
  v26 = sub_4125D0((unsigned __int8 *)&v110, v113, a4 | 0x800000);
  v113[9] += v26;
  v27 = sub_414370(v113, (__int64 *)a1, &v110, a4, 0LL, &v109);
  if ( v109 )
  {
    if ( !v27 )
    {
      *((_QWORD *)v9 + 13) = 0LL;
      v35 = *(_QWORD *)a1;
      goto LABEL_108;
    }
    v28 = (_QWORD *)(v25 + 112);
    sizef = (size_t)v27;
    v29 = (int *)(v25 + 128);
    v111.m128i_i8[8] = 2;
    v92 = sub_40A780((_QWORD *)(v25 + 112), (int *)(v25 + 128), 0LL, 0LL, &v111);
    v31 = (_QWORD *)sizef;
    v32 = v92;
  }
  else
  {
    v28 = (_QWORD *)(v25 + 112);
    sized = (size_t)v27;
    v29 = (int *)(v25 + 128);
    v111.m128i_i8[8] = 2;
    v30 = sub_40A780((_QWORD *)(v25 + 112), (int *)(v25 + 128), 0LL, 0LL, &v111);
    v31 = (_QWORD *)sized;
    v32 = v30;
    v33 = v30;
    if ( !sized )
      goto LABEL_39;
  }
  v111.m128i_i8[8] = 16;
  v34 = sub_40A780(v28, v29, v31, v32, &v111);
  v33 = v32;
  v32 = v34;
LABEL_39:
  v35 = *(_QWORD *)a1;
  if ( v32 == 0LL || v33 == 0LL )
  {
    v109 = 12;
    *((_QWORD *)v9 + 13) = 0LL;
    goto LABEL_108;
  }
  v36 = *(_QWORD *)(v35 + 8);
  *((_QWORD *)v9 + 13) = v32;
  sizee = 8 * v36;
  v36 *= 24LL;
  v37 = malloc(sizee);
  *(_QWORD *)(v35 + 24) = v37;
  v38 = v37;
  v39 = malloc(sizee);
  *(_QWORD *)(v35 + 32) = v39;
  v107 = v39;
  v40 = malloc(v36);
  *(_QWORD *)(v35 + 40) = v40;
  size = (size_t)v40;
  v41 = malloc(v36);
  *(_QWORD *)(v35 + 48) = v41;
  if ( !v38 || !v107 || !size || !v41 )
  {
    v109 = 12;
    goto LABEL_108;
  }
  v42 = *(_QWORD *)(a1 + 48);
  v43 = malloc(8 * v42);
  *(_QWORD *)(v35 + 224) = v43;
  if ( v43 )
  {
    v44 = 0LL;
    if ( v42 )
    {
      do
      {
        v43[v44] = v44;
        ++v44;
      }
      while ( v44 != v42 );
    }
    sub_409FF0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_409CB0, v35);
    v45 = *(_QWORD *)(a1 + 48);
    if ( v45 )
    {
      v46 = *(__int64 **)(v35 + 224);
      v47 = *v46;
      if ( *v46 )
        goto LABEL_53;
      while ( ++v47 != v45 )
      {
        if ( v46[v47] != v47 )
          goto LABEL_53;
      }
    }
    else
    {
      v46 = *(__int64 **)(v35 + 224);
    }
    free(v46);
    *(_QWORD *)(v35 + 224) = 0LL;
  }
LABEL_53:
  v22 = sub_407FB0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_40AB30, a1);
  if ( v22 )
    goto LABEL_83;
  v22 = sub_407FB0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_40D060, v35);
  if ( v22 )
    goto LABEL_83;
  sub_409FF0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_409D40, v35);
  v22 = sub_409FF0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_409840, v35);
  if ( v22 )
    goto LABEL_83;
  v48 = 0;
  v49 = 0LL;
  while ( *(_QWORD *)(v35 + 16) != v49 )
  {
    while ( 1 )
    {
      while ( *(_QWORD *)(*(_QWORD *)(v35 + 48) + 24 * v49 + 8) )
      {
        if ( *(_QWORD *)(v35 + 16) == ++v49 )
          goto LABEL_60;
      }
      sizea = 24 * v49;
      v22 = sub_40A220(&v111, (__int64 *)v35, v49, 1);
      if ( v22 )
        goto LABEL_83;
      ++v49;
      if ( *(_QWORD *)(*(_QWORD *)(v35 + 48) + sizea + 8) )
        break;
      v48 = 1;
      free(ptr);
      if ( *(_QWORD *)(v35 + 16) == v49 )
      {
LABEL_61:
        v48 = 0;
        v49 = 0LL;
      }
    }
  }
LABEL_60:
  if ( v48 )
    goto LABEL_61;
  if ( (*(_BYTE *)(a1 + 56) & 0x10) == 0 && *(_QWORD *)(a1 + 48) && (*(_BYTE *)(v35 + 176) & 1) != 0
    || *(_QWORD *)(v35 + 152) )
  {
    v50 = (char *)malloc(24 * v49);
    *(_QWORD *)(v35 + 56) = v50;
    if ( !v50 )
    {
      v109 = 12;
      v35 = *(_QWORD *)a1;
      goto LABEL_108;
    }
    v51 = 0LL;
    if ( !v49 )
      goto LABEL_85;
    while ( 1 )
    {
      v52 = 3 * v51++;
      v53 = &v50[8 * v52];
      *(_OWORD *)v53 = 0LL;
      *((_QWORD *)v53 + 2) = 0LL;
      v54 = *(_QWORD *)(v35 + 16);
      if ( v54 <= v51 )
        break;
      v50 = *(char **)(v35 + 56);
    }
    if ( !v54 )
      goto LABEL_85;
    v108 = 0LL;
    v55 = *(_QWORD *)(v35 + 48);
    while ( 1 )
    {
      v56 = 0LL;
      v57 = v55 + 24 * v108;
      v58 = *(_QWORD *)(v57 + 16);
      if ( *(__int64 *)(v57 + 8) > 0 )
        break;
LABEL_138:
      if ( *(_QWORD *)(v35 + 16) <= (unsigned __int64)++v108 )
        goto LABEL_85;
    }
    while ( 1 )
    {
      sizeb = v58;
      if ( !(unsigned __int8)sub_408490((_QWORD *)(*(_QWORD *)(v35 + 56) + 24LL * *(_QWORD *)(v58 + 8 * v56)), v108) )
        break;
      v55 = *(_QWORD *)(v35 + 48);
      ++v56;
      v58 = sizeb;
      if ( v56 >= *(_QWORD *)(v55 + 24 * v108 + 8) )
        goto LABEL_138;
    }
    v22 = 12;
    goto LABEL_83;
  }
LABEL_85:
  v59 = *((_BYTE *)v9 + 176);
  v109 = 0;
  v60 = (v98 == 0) & (v59 >> 2);
  if ( v60 && !*(_QWORD *)(a1 + 40) )
  {
    v85 = *((_QWORD *)v9 + 2);
    if ( v85 )
    {
      v86 = *(char **)v9;
      v87 = 0;
      v88 = 0LL;
      v89 = *(char **)v9;
      while ( 2 )
      {
        switch ( v89[8] )
        {
          case 1:
            if ( *v89 < 0 )
              v48 = v60;
            goto LABEL_145;
          case 2:
          case 4:
          case 8:
          case 9:
          case 10:
          case 11:
            goto LABEL_145;
          case 3:
            if ( *(_QWORD *)(*(_QWORD *)v89 + 16LL) || *(_QWORD *)(*(_QWORD *)v89 + 24LL) )
              goto LABEL_86;
            goto LABEL_145;
          case 5:
            v87 = v60;
            goto LABEL_145;
          case 6:
            goto LABEL_86;
          case 12:
            v95 = *(_DWORD *)v89;
            if ( *(_DWORD *)v89 == 32 )
              goto LABEL_145;
            if ( v95 <= 0x20 )
            {
              if ( v95 != 16 )
                goto LABEL_86;
            }
            else if ( v95 != 64 && v95 != 128 )
            {
              goto LABEL_86;
            }
LABEL_145:
            ++v88;
            v89 += 16;
            if ( v88 != v85 )
              continue;
            if ( !((unsigned __int8)v87 | (unsigned __int8)v48) )
              goto LABEL_172;
            v93 = &v86[16 * v88];
            do
            {
              v94 = v86[8];
              if ( v94 == 1 )
              {
                if ( *v86 < 0 )
                  v86[10] &= ~0x20u;
              }
              else if ( v94 == 5 )
              {
                v86[8] = 7;
              }
              v86 += 16;
            }
            while ( v93 != v86 );
            break;
          default:
            abort();
        }
        break;
      }
    }
    else
    {
LABEL_172:
      v87 = 0;
    }
    v14 = *((_QWORD *)v9 + 19) == 0LL;
    v96 = *((__int64 *)v9 + 19) < 0;
    v97 = *((_BYTE *)v9 + 176);
    v9[45] = 1;
    *((_BYTE *)v9 + 176) = v97 & 0xF9 | (2 * (v87 & 1 | (!v96 && !v14)));
  }
LABEL_86:
  v61 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 13) + 24LL) + 56LL);
  *((_QWORD *)v9 + 18) = v61;
  v62 = sub_40ABB0((__int64)&v111, *((_QWORD *)v9 + 6) + 24 * v61);
  v110.m128i_i32[0] = v62;
  if ( !v62 )
  {
    if ( *((__int64 *)v9 + 19) > 0 )
    {
      v63 = v111.m128i_i64[1];
      if ( v111.m128i_i64[1] > 0 )
      {
        v64 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
            v65 = *(_QWORD *)v9 + 16LL * *((_QWORD *)ptr + v64);
            if ( *(_BYTE *)(v65 + 8) == 4 )
            {
              v66 = 0LL;
              while ( 1 )
              {
                v67 = *(_QWORD *)v9 + 16LL * *((_QWORD *)ptr + v66);
                if ( *(_BYTE *)(v67 + 8) == 9 && *(_QWORD *)v67 == *(_QWORD *)v65 )
                  break;
                if ( v63 == ++v66 )
                  goto LABEL_90;
              }
              if ( !sub_409B10(
                      v63,
                      (__int64 *)&ptr,
                      **(_QWORD **)(*((_QWORD *)v9 + 5) + 24LL * *((_QWORD *)ptr + v64) + 16)) )
                break;
            }
LABEL_90:
            if ( v63 <= ++v64 )
              goto LABEL_99;
          }
          v69 = sub_40A050((__int64)&v111, *((_QWORD *)v9 + 6) + 24 * v68);
          if ( v69 )
            break;
          v63 = v111.m128i_i64[1];
          v64 = 1LL;
          if ( v111.m128i_i64[1] <= 1 )
            goto LABEL_99;
        }
        v62 = v69;
        goto LABEL_103;
      }
    }
LABEL_99:
    v70 = sub_40ADC0(&v110, v9, (__int64)&v111, 0);
    *((_QWORD *)v9 + 9) = v70;
    if ( v70 )
    {
      if ( *((char *)v70 + 104) >= 0 )
      {
        *((_QWORD *)v9 + 12) = v70;
        *((_QWORD *)v9 + 11) = v70;
        *((_QWORD *)v9 + 10) = v70;
LABEL_102:
        free(ptr);
        goto LABEL_103;
      }
      *((_QWORD *)v9 + 10) = sub_40ADC0(&v110, v9, (__int64)&v111, 1u);
      *((_QWORD *)v9 + 11) = sub_40ADC0(&v110, v9, (__int64)&v111, 2u);
      v90 = sub_40ADC0(&v110, v9, (__int64)&v111, 6u);
      v14 = *((_QWORD *)v9 + 10) == 0LL;
      *((_QWORD *)v9 + 12) = v90;
      if ( !v14 && *((_QWORD *)v9 + 11) && v90 )
        goto LABEL_102;
    }
    v62 = v110.m128i_i32[0];
  }
LABEL_103:
  v71 = *(_QWORD *)a1;
  v109 = v62;
  v72 = *(_QWORD **)(v71 + 112);
  if ( v72 )
  {
    do
    {
      v73 = (_QWORD *)*v72;
      free(v72);
      v72 = v73;
    }
    while ( v73 );
  }
  *(_QWORD *)(v71 + 112) = 0LL;
  v74 = *(void **)(v71 + 32);
  *(_DWORD *)(v71 + 128) = 15;
  *(_QWORD *)(v71 + 104) = 0LL;
  free(v74);
  *(_QWORD *)(v71 + 32) = 0LL;
  sub_409740((__int64)v113);
  result = v109;
  if ( v109 )
    goto LABEL_111;
  return result;
}

char *__fastcall sub_415280(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // eax

  v3 = qword_61D4A8;
  *(_BYTE *)(a3 + 56) = (16 * ((qword_61D4A8 & 0x2000000) != 0)) | *(_BYTE *)(a3 + 56) & 0xEF | 0x80;
  v4 = sub_4144D0(a3, a1, a2, v3);
  if ( v4 )
    return dcgettext(0LL, (const char *)(qword_4191E0[v4] + 4297344), 5);
  else
    return 0LL;
}

__int64 __fastcall sub_415300(__int64 a1)
{
  __m128i *v1; // rbp
  _QWORD *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rsi

  v1 = *(__m128i **)(a1 + 32);
  v2 = *(_QWORD **)a1;
  v1->m128i_i64[0] = 0LL;
  v1[15].m128i_i64[1] = 0LL;
  memset(
    (void *)((unsigned __int64)&v1->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v1 - (((_DWORD)v1 + 8) & 0xFFFFFFF8) + 256) >> 3));
  sub_40DDB0(a1, (__int64 *)(v2[9] + 16LL), (_QWORD *)(v2[9] + 24LL), v1);
  v3 = v2[10];
  if ( v2[9] != v3 )
  {
    sub_40DDB0(a1, (__int64 *)(v3 + 16), (_QWORD *)(v3 + 24), v1);
    v3 = v2[9];
  }
  v4 = v2[11];
  if ( v4 != v3 )
  {
    sub_40DDB0(a1, (__int64 *)(v4 + 16), (_QWORD *)(v4 + 24), v1);
    v3 = v2[9];
  }
  v5 = v2[12];
  if ( v5 != v3 )
    sub_40DDB0(a1, (__int64 *)(v5 + 16), (_QWORD *)(v5 + 24), v1);
  *(_BYTE *)(a1 + 56) |= 8u;
  return 0LL;
}

__int64 __fastcall sub_4153D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        signed __int64 *a7,
        char a8)
{
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rcx
  signed __int64 v15; // r14
  __int64 v16; // r13
  size_t v17; // rdi
  __int64 *v18; // rbp
  int v19; // eax
  __int64 v20; // r12
  unsigned __int64 v22; // rdx
  int v23; // eax
  char v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  char v31; // al
  size_t v32; // r14
  void *v33; // rax
  void *v34; // rax
  void *v35; // r14
  void *v36; // rax
  __int64 size; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h]
  void *ptrb; // [rsp+10h] [rbp-58h]
  void *ptra; // [rsp+10h] [rbp-58h]
  __int64 v41; // [rsp+18h] [rbp-50h]
  __int64 v42; // [rsp+18h] [rbp-50h]
  __int64 v43; // [rsp+20h] [rbp-48h]
  __int64 v44; // [rsp+20h] [rbp-48h]
  int v45; // [rsp+2Ch] [rbp-3Ch]

  v9 = a4 + a5;
  v10 = (__int64)a7;
  if ( a4 < 0 || a4 > a3 )
    return -1LL;
  if ( v9 > a3 || a5 >= 0 && a4 > v9 )
  {
    v9 = a3;
  }
  else if ( v9 < 0 || a5 < 0 && a4 <= v9 )
  {
    v13 = *(_BYTE *)(a1 + 56);
    v9 = 0LL;
    v45 = (v13 >> 5) & 3;
    goto LABEL_13;
  }
  v13 = *(_BYTE *)(a1 + 56);
  v45 = (v13 >> 5) & 3;
  if ( v9 > a4 && *(_QWORD *)(a1 + 32) && (v13 & 8) == 0 )
  {
    v44 = a6;
    v42 = a3;
    ptrb = (void *)v9;
    sub_415300(a1);
    v13 = *(_BYTE *)(a1 + 56);
    a6 = v44;
    a3 = v42;
    v9 = (__int64)ptrb;
  }
LABEL_13:
  if ( (v13 & 0x10) != 0 || !a7 )
    goto LABEL_42;
  v14 = *(_QWORD *)(a1 + 48);
  if ( (v13 & 6) != 4 || (v15 = *a7, *a7 > v14) )
  {
    v15 = v14 + 1;
    v16 = v14 + 1;
LABEL_17:
    v17 = 16 * v15;
    goto LABEL_18;
  }
  v16 = *a7;
  if ( v15 > 0 )
    goto LABEL_17;
LABEL_42:
  v17 = 16LL;
  v15 = 1LL;
  v16 = 1LL;
  v10 = 0LL;
LABEL_18:
  v43 = a6;
  v41 = a3;
  ptr = (void *)v9;
  v18 = (__int64 *)malloc(v17);
  if ( !v18 )
    return -2LL;
  v19 = sub_410420(a1, a2, v41, a4, (__int64)ptr, v43, v15, v18, v45);
  if ( !v19 )
  {
    if ( !v10 )
      goto LABEL_37;
    v22 = v16 + 1;
    v23 = (*(_BYTE *)(a1 + 56) >> 1) & 3;
    if ( ((*(_BYTE *)(a1 + 56) >> 1) & 3) != 0 )
    {
      if ( v23 != 1 )
      {
        if ( v23 != 2 )
          __assert_fail("regs_allocated == REGS_FIXED", "lib/regexec.c", 0x1F8u, "re_copy_regs");
        if ( (unsigned __int64)v15 > *(_QWORD *)v10 )
          __assert_fail("regs->num_regs >= nregs", "lib/regexec.c", 0x1FAu, "re_copy_regs");
        v24 = 2;
        goto LABEL_30;
      }
      v24 = 1;
      if ( *(_QWORD *)v10 >= v22 )
      {
LABEL_30:
        if ( v16 <= 0 )
        {
          v27 = 0LL;
          v16 = 0LL;
        }
        else
        {
          v25 = *(_QWORD *)(v10 + 8);
          v26 = *(_QWORD *)(v10 + 16);
          v27 = v16;
          v28 = 0LL;
          do
          {
            *(_QWORD *)(v25 + v28 * 4) = v18[v28];
            *(_QWORD *)(v26 + v28 * 4) = v18[v28 + 1];
            v28 += 2LL;
          }
          while ( v28 != 2 * v16 );
        }
        if ( *(_QWORD *)v10 > v27 )
        {
          v29 = *(_QWORD *)(v10 + 16);
          v30 = *(_QWORD *)(v10 + 8);
          do
          {
            ++v16;
            *(_QWORD *)(v29 + 8 * v27) = -1LL;
            *(_QWORD *)(v30 + 8 * v27) = -1LL;
            v27 = v16;
          }
          while ( *(_QWORD *)v10 > (unsigned __int64)v16 );
        }
LABEL_36:
        v31 = (2 * v24) | *(_BYTE *)(a1 + 56) & 0xF9;
        *(_BYTE *)(a1 + 56) = v31;
        if ( (v31 & 6) == 0 )
          goto LABEL_21;
LABEL_37:
        v20 = *v18;
        if ( a8 )
        {
          if ( a4 != v20 )
            __assert_fail("pmatch[0].rm_so == start", "lib/regexec.c", 0x1BDu, "re_search_stub");
          v20 = v18[1] - v20;
        }
        goto LABEL_22;
      }
      size = 8 * v22;
      v35 = realloc(*(void **)(v10 + 8), 8 * v22);
      if ( v35 )
      {
        v36 = realloc(*(void **)(v10 + 16), size);
        v24 = 1;
        if ( !v36 )
        {
          free(v35);
          v24 = 0;
          goto LABEL_36;
        }
        *(_QWORD *)(v10 + 8) = v35;
        *(_QWORD *)(v10 + 16) = v36;
        *(_QWORD *)v10 = v16 + 1;
        goto LABEL_30;
      }
    }
    else
    {
      v32 = 8 * v22;
      v33 = malloc(8 * v22);
      *(_QWORD *)(v10 + 8) = v33;
      if ( v33 )
      {
        ptra = v33;
        v34 = malloc(v32);
        *(_QWORD *)(v10 + 16) = v34;
        if ( v34 )
        {
          *(_QWORD *)v10 = v16 + 1;
          v24 = 1;
          goto LABEL_30;
        }
        free(ptra);
      }
    }
    v24 = 0;
    goto LABEL_36;
  }
  v20 = -1LL;
  if ( v19 != 1 )
LABEL_21:
    v20 = -2LL;
LABEL_22:
  free(v18);
  return v20;
}

__int64 __fastcall sub_415830(
        __int64 a1,
        const void *a2,
        signed __int64 a3,
        const void *a4,
        signed __int64 a5,
        __int64 a6,
        __int64 a7,
        signed __int64 *a8,
        __int64 a9,
        char a10)
{
  bool v15; // di
  __int64 v16; // r9
  char v17; // r8
  char *v18; // r13
  __int64 v19; // rbx
  char *v21; // rax
  __int64 v22; // [rsp+10h] [rbp-48h]

  v15 = a5 < 0;
  v16 = a9;
  v17 = a10;
  if ( a9 < 0 || v15 || a3 < 0 || __OFADD__(a5, a3) )
    return -2LL;
  if ( !a5 )
  {
    a4 = a2;
    v18 = 0LL;
    goto LABEL_6;
  }
  v18 = 0LL;
  if ( a3 )
  {
    v22 = a6;
    v21 = (char *)malloc(a5 + a3);
    v18 = v21;
    if ( v21 )
    {
      memcpy(v21, a2, a3);
      memcpy(&v18[a3], a4, a5);
      a4 = v18;
      a6 = v22;
      v16 = a9;
      v17 = a10;
      goto LABEL_6;
    }
    return -2LL;
  }
LABEL_6:
  v19 = sub_4153D0(a1, (__int64)a4, a5 + a3, a6, a7, v16, a8, v17);
  free(v18);
  return v19;
}

__int64 __fastcall sub_415960(__int64 a1, const char *a2, int a3)
{
  __int64 v4; // r14
  void *v5; // rax
  char v6; // al
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ebx

  *(_QWORD *)a1 = 0LL;
  v4 = (a3 & 1) == 0 ? 16843462LL : 242428LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = malloc(0x100uLL);
  *(_QWORD *)(a1 + 32) = v5;
  if ( v5 )
  {
    v6 = 0;
    v7 = v4 | (a3 << 21) & 0x400000;
    if ( (a3 & 4) != 0 )
    {
      v6 = 1;
      v7 = v4 & 0xFFFFFFFFFFFFFEBFLL | (a3 << 21) & 0x400000LL | 0x100;
    }
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_BYTE *)(a1 + 56) = (v6 << 7) | *(_BYTE *)(a1 + 56) & 0x6F | (16 * ((a3 & 8) != 0));
    v8 = strlen(a2);
    v9 = sub_4144D0(a1, (__int64)a2, v8, v7);
    v10 = v9;
    if ( v9 == 16 )
    {
      v10 = 8;
    }
    else if ( !v9 )
    {
      sub_415300(a1);
      return v10;
    }
    free(*(void **)(a1 + 32));
    *(_QWORD *)(a1 + 32) = 0LL;
    return v10;
  }
  return 12LL;
}

size_t __fastcall sub_415A70(unsigned int a1, __int64 a2, char *a3, size_t a4)
{
  char *v6; // r13
  size_t v7; // rax
  size_t v8; // rbx
  size_t v9; // rdx

  if ( a1 > 0x10 )
    abort();
  v6 = dcgettext(0LL, (const char *)(qword_4191E0[a1] + 4297344), 5);
  v7 = strlen(v6);
  v8 = v7 + 1;
  if ( a4 )
  {
    v9 = v7 + 1;
    if ( v8 > a4 )
    {
      v9 = a4 - 1;
      a3[a4 - 1] = 0;
    }
    memcpy(a3, v6, v9);
  }
  return v8;
}

size_t __fastcall sub_415A70(unsigned int a1, __int64 a2, char *a3, size_t a4)
{
  char *v6; // r13
  size_t v7; // rax
  size_t v8; // rbx
  size_t v9; // rdx

  if ( a1 > 0x10 )
    abort();
  v6 = dcgettext(0LL, (const char *)(qword_4191E0[a1] + 4297344), 5);
  v7 = strlen(v6);
  v8 = v7 + 1;
  if ( a4 )
  {
    v9 = v7 + 1;
    if ( v8 > a4 )
    {
      v9 = a4 - 1;
      a3[a4 - 1] = 0;
    }
    memcpy(a3, v6, v9);
  }
  return v8;
}

void __fastcall sub_415AF0(__int64 a1)
{
  __int64 *v2; // rdi
  void *v3; // rdi

  v2 = *(__int64 **)a1;
  if ( v2 )
    sub_40D0F0(v2);
  *(_QWORD *)a1 = 0LL;
  v3 = *(void **)(a1 + 32);
  *(_QWORD *)(a1 + 8) = 0LL;
  free(v3);
  *(_QWORD *)(a1 + 32) = 0LL;
  free(*(void **)(a1 + 40));
  *(_QWORD *)(a1 + 40) = 0LL;
}

__int64 __fastcall sub_415BE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, signed __int64 *a5)
{
  return sub_4153D0(a1, a2, a3, a4, 0LL, a3, a5, 1);
}

__int64 __fastcall sub_415C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, signed __int64 *a6)
{
  return sub_4153D0(a1, a2, a3, a4, a5, a3, a6, 0);
}

__int64 __fastcall sub_415C20(
        __int64 a1,
        const void *a2,
        signed __int64 a3,
        const void *a4,
        signed __int64 a5,
        __int64 a6,
        signed __int64 *a7,
        __int64 a8)
{
  return sub_415830(a1, a2, a3, a4, a5, a6, 0LL, a7, a8, 1);
}

__int64 __fastcall sub_415C40(
        __int64 a1,
        const void *a2,
        signed __int64 a3,
        const void *a4,
        signed __int64 a5,
        __int64 a6,
        __int64 a7,
        signed __int64 *a8,
        __int64 a9)
{
  return sub_415830(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0);
}

__int64 __fastcall sub_415CA0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4162D0(stream);
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

bool __fastcall sub_415D00(int a1)
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

const char *sub_415D60()
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
                sub_4162D0(v60);
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
            sub_4162D0(v39);
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

int __fastcall sub_4162D0(FILE *stream)
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
  if ( !(unsigned int)sub_416350(stream) )
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

int __fastcall sub_416350(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_416390(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_416390(FILE *a1, __off_t a2, int a3)
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_416460(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_61D248 )
    v1 = (void *)qword_61D248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_416478(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_61CE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
