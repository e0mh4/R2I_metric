#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  size_t v3; // r13@1
  int v4; // er12@1
  char **v5; // rbp@1
  signed int v6; // ebx@1
  int v7; // eax@2
  bool v8; // cf@13
  bool v9; // zf@13
  const char *v10; // r14@14
  const char *v11; // rdi@14
  signed __int64 v12; // rcx@14
  char *v13; // rsi@14
  __int64 v14; // rax@31
  const char *v15; // rsi@31
  __int64 v16; // rbx@31
  char *v17; // rax@32
  __int64 v18; // rax@32
  __int64 v19; // rax@34
  __int64 v20; // rax@36
  char *v21; // rax@37
  __int64 v22; // rcx@37
  char *v23; // rax@38
  char *v24; // rax@39
  __int64 v25; // rax@39
  char *v26; // rax@41
  __int64 v27; // rax@41
  unsigned __int64 v28; // rcx@46
  signed __int64 v29; // r13@46
  void *v30; // rax@46
  const char *v31; // r15@46
  char *v32; // rax@46
  char *v33; // rax@46
  void *v34; // rax@46
  const char *v35; // r15@46
  char *v36; // rax@46
  void *v37; // rax@46
  char *v38; // rsi@46
  unsigned __int64 v39; // kr08_8@46
  char *v40; // rax@46
  _BYTE *v41; // rax@46
  int v42; // eax@46
  int *v44; // rax@53
  __int64 v45; // rax@54

  v3 = 0x7FFFFFFFFFFFFFFFLL;
  v4 = a1;
  v5 = a2;
  v6 = 1;
  sub_402E00(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_414E30(
    sub_402BD0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  byte_61B368 = 0;
  while ( 1 )
  {
    v7 = sub_406950((unsigned int)v4, v5, "h:b:f:v:i:pl:s:w:n:d:", &off_415980, 0LL);
    if ( v7 == -1 )
      break;
    if ( v7 == 105 )
    {
      v24 = dcgettext(0LL, "invalid line number increment", 5);
      LODWORD(v25) = sub_405360(s, 1LL, v3, locale, v24, 0LL);
      qword_61B270 = v25;
    }
    else if ( v7 <= 105 )
    {
      if ( v7 == 98 )
      {
        if ( !(unsigned __int8)sub_4022E0(&off_61B2A0, &unk_61B760, &unk_61B5E0) )
        {
          LODWORD(v14) = sub_404A20(s);
          v15 = "invalid body numbering style: %s";
          v16 = v14;
          goto LABEL_37;
        }
      }
      else if ( v7 <= 98 )
      {
        if ( v7 == -131 )
        {
          sub_404EA0((char)stdout);
          exit(0);
        }
        v6 = 0;
        if ( v7 == -130 )
          sub_4027C0(0);
      }
      else
      {
        switch ( v7 )
        {
          case 102:
            if ( !(unsigned __int8)sub_4022E0(&off_61B290, &unk_61B6E0, &unk_61B3E0) )
            {
              LODWORD(v20) = sub_404A20(s);
              v15 = "invalid footer numbering style: %s";
              v16 = v20;
              goto LABEL_37;
            }
            break;
          case 104:
            if ( !(unsigned __int8)sub_4022E0(&off_61B298, &unk_61B720, &unk_61B4E0) )
            {
              LODWORD(v19) = sub_404A20(s);
              v15 = "invalid header numbering style: %s";
              v16 = v19;
              goto LABEL_37;
            }
            break;
          case 100:
            src = s;
            break;
          default:
LABEL_10:
            v6 = 0;
            break;
        }
      }
    }
    else if ( v7 == 112 )
    {
      byte_61B268 = 0;
    }
    else if ( v7 <= 112 )
    {
      if ( v7 == 108 )
      {
        v26 = dcgettext(0LL, "invalid line number of blank lines", 5);
        LODWORD(v27) = sub_405360(s, 1LL, v3, locale, v26, 0LL);
        qword_61B260 = v27;
      }
      else
      {
        v8 = (unsigned int)v7 < 0x6E;
        v9 = v7 == 110;
        if ( v7 != 110 )
          goto LABEL_10;
        v10 = s;
        v11 = "ln";
        v12 = 3LL;
        v13 = s;
        do
        {
          if ( !v12 )
            break;
          v8 = (unsigned __int8)*v13 < *v11;
          v9 = *v13++ == *v11++;
          --v12;
        }
        while ( v9 );
        if ( (!v8 && !v9) == v8 )
        {
          off_61B250 = "%-*ld%s";
        }
        else if ( !strcmp(s, "rn") )
        {
          off_61B250 = "%*ld%s";
        }
        else if ( !strcmp(v10, "rz") )
        {
          off_61B250 = "%0*ld%s";
        }
        else
        {
LABEL_54:
          LODWORD(v45) = sub_404A20(v10);
          v15 = "invalid line numbering format: %s";
          v16 = v45;
LABEL_37:
          v21 = dcgettext(0LL, v15, 5);
          v22 = v16;
          v6 = 0;
          error(0, 0, v21, v22);
        }
      }
    }
    else if ( v7 == 118 )
    {
      v17 = dcgettext(0LL, "invalid starting line number", 5);
      LODWORD(v18) = sub_405360(s, 0x8000000000000000LL, v3, locale, v17, 0LL);
      qword_61B278 = v18;
    }
    else if ( v7 == 119 )
    {
      v23 = dcgettext(0LL, "invalid line number field width", 5);
      dword_61B258 = sub_405360(s, 1LL, 0x7FFFFFFFLL, locale, v23, 0LL);
    }
    else
    {
      if ( v7 != 115 )
        goto LABEL_10;
      off_61B288 = s;
    }
  }
  if ( !(_BYTE)v6 )
    sub_4027C0(1);
  v28 = strlen(src) + 1;
  v29 = v28 - 1;
  v10 = (const char *)v28;
  qword_61B3B8 = 3 * (v28 - 1);
  LODWORD(v30) = sub_404FE0(qword_61B3B8 + 1);
  v31 = src;
  qword_61B3C0 = v30;
  v32 = stpcpy((char *)v30, src);
  v33 = stpcpy(v32, v31);
  strcpy(v33, v31);
  qword_61B3A8 = 2 * v29;
  LODWORD(v34) = sub_404FE0(2 * v29 + 1);
  v35 = src;
  qword_61B3B0 = v34;
  v36 = stpcpy((char *)v34, src);
  strcpy(v36, v35);
  qword_61B398 = v29;
  LODWORD(v37) = sub_404FE0(v10);
  v38 = src;
  qword_61B3A0 = v37;
  strcpy((char *)v37, src);
  sub_402CB0(&unk_61B380, v38);
  v39 = strlen((const char *)off_61B288) + 1;
  LODWORD(v40) = sub_404FE0(v39 - 1 + dword_61B258 + 1);
  qword_61B378 = v40;
  v3 = dword_61B258 + v39 - 1;
  v41 = memset(v40, 32, v3);
  qword_61B3C8 = (__int64)&unk_61B760;
  v41[v3] = 0;
  qword_61B370 = qword_61B278;
  qword_61B7A0 = (__int64)off_61B2A0;
  v42 = dword_61B31C;
  if ( dword_61B31C == v4 )
  {
    v6 = sub_402420("-");
  }
  else if ( dword_61B31C < v4 )
  {
    do
    {
      v6 &= sub_402420(v5[v42]);
      v42 = dword_61B31C + 1;
      dword_61B31C = v42;
    }
    while ( v42 < v4 );
  }
  if ( byte_61B368 && (unsigned int)sub_405AE0(stdin) == -1 )
  {
    v44 = __errno_location();
    error(1, *v44, "-");
    goto LABEL_54;
  }
  return (unsigned __int8)(v6 ^ 1);
}

int sub_40222B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_40224A()
{
  return 0;
}

int sub_402281()
{
  int result; // eax@4

  if ( !byte_61B348 )
  {
    while ( qword_61B350 < (unsigned __int64)(((&unk_61AE48 - (_UNKNOWN *)&qword_61AE40) >> 3) - 1) )
      (*(&qword_61AE40 + ++qword_61B350))();
    result = sub_40222B();
    byte_61B348 = 1;
  }
  return result;
}

int sub_4022D8()
{
  return sub_40224A();
}

int __fastcall sub_4022E0(char **a1, __int64 a2, __int64 a3)
{
  char *v3; // r8@1
  char v4; // cl@1
  const char *v5; // rbp@4
  size_t v6; // rax@4
  __int64 v7; // rax@4
  int result; // eax@5

  v3 = s;
  v4 = *s;
  if ( *s == 110 )
  {
LABEL_9:
    *a1 = s;
    return 1;
  }
  if ( v4 <= 110 )
  {
    if ( v4 != 97 )
      return 0;
    goto LABEL_9;
  }
  if ( v4 != 112 )
  {
    result = 0;
    if ( v4 != 116 )
      return result;
    goto LABEL_9;
  }
  ++s;
  *a1 = v3;
  v5 = s;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 32) = a3;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  qword_61B948 = 710LL;
  v6 = strlen(v5);
  LODWORD(v7) = sub_413D70(v5, v6, a2);
  if ( v7 )
  {
    error(1, 0, "%s", v7);
    result = sub_4023B0();
  }
  else
  {
    result = 1;
  }
  return result;
}

__int64 sub_4023B0()
{
  __int64 result; // rax@1
  char *v1; // rax@3

  __printf_chk(1LL, off_61B250, (unsigned int)dword_61B258, qword_61B370, off_61B288);
  result = qword_61B370;
  if ( qword_61B370 > qword_61B370 + qword_61B270 )
  {
    v1 = dcgettext(0LL, "line number overflow", 5);
    error(1, 0, v1);
    result = sub_402420((char *)1);
  }
  else
  {
    qword_61B370 += qword_61B270;
  }
  return result;
}

__int64 __fastcall sub_402420(char *filename)
{
  char *v1; // rsi@1
  signed __int64 v2; // rcx@1
  char *v3; // r14@1
  char *v4; // rdi@1
  bool v5; // cf@1
  bool v6; // zf@1
  FILE *v7; // r12@5
  __int64 v8; // rax@7
  size_t v9; // rbx@8
  size_t v10; // rbp@8
  const void *v11; // r15@9
  char v12; // al@13
  __int64 v13; // rax@20
  char *v14; // rax@31
  bool v15; // cf@40
  bool v16; // zf@40
  char *v17; // rdi@41
  signed __int64 v18; // rcx@41
  char *v19; // rsi@41
  int v20; // edx@45
  __int64 result; // rax@45
  __int64 v22; // rax@49
  __int64 v23; // rbx@49
  int *v24; // rax@49
  char *v25; // rbx@50
  int *v26; // rax@50

  v1 = filename;
  v2 = 2LL;
  v3 = filename;
  v4 = "-";
  v5 = 0;
  v6 = 0;
  do
  {
    if ( !v2 )
      break;
    v5 = (unsigned __int8)*v1 < (unsigned __int8)*v4;
    v6 = *v1++ == *v4++;
    --v2;
  }
  while ( v6 );
  if ( (!v5 && !v6) == v5 )
  {
    byte_61B368 = 1;
    v7 = stdin;
  }
  else
  {
    v7 = fopen(v3, "r");
    if ( !v7 )
      goto LABEL_49;
  }
  sub_402C80(v7, 2LL);
  while ( 1 )
  {
    LODWORD(v8) = sub_402DE0(&unk_61B380, v7);
    if ( !v8 )
      break;
    v9 = n;
    v10 = n - 1;
    if ( n - 1 <= 1 )
      goto LABEL_54;
    v11 = s1;
    if ( *(_WORD *)s1 != *(_WORD *)src )
      goto LABEL_54;
    if ( v10 == qword_61B3B8 && !memcmp(s1, qword_61B3C0, n - 1) )
    {
      qword_61B3C8 = (__int64)&unk_61B720;
      qword_61B7A0 = (__int64)off_61B298;
      if ( !byte_61B268 )
        goto LABEL_31;
      goto LABEL_30;
    }
    if ( v10 == qword_61B3A8 && !memcmp(v11, qword_61B3B0, v10) )
    {
      qword_61B3C8 = (__int64)&unk_61B760;
      qword_61B7A0 = (__int64)off_61B2A0;
      if ( !byte_61B268 )
        goto LABEL_31;
LABEL_30:
      qword_61B370 = qword_61B278;
      goto LABEL_31;
    }
    if ( v10 == qword_61B398 && !memcmp(v11, qword_61B3A0, v10) )
    {
      qword_61B3C8 = (__int64)&unk_61B6E0;
      qword_61B7A0 = (__int64)off_61B290;
      if ( byte_61B268 )
        goto LABEL_30;
LABEL_31:
      v14 = stdout->_IO_write_ptr;
      if ( v14 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 10);
      }
      else
      {
        stdout->_IO_write_ptr = v14 + 1;
        *v14 = 10;
      }
    }
    else
    {
LABEL_54:
      v12 = *(_BYTE *)qword_61B7A0;
      if ( *(_BYTE *)qword_61B7A0 == 110 )
        goto LABEL_22;
      if ( v12 > 110 )
      {
        if ( v12 == 112 )
        {
          LODWORD(v13) = sub_4146F0(qword_61B3C8, s1, v10, 0LL, v10, 0LL);
          if ( v13 == -2 )
          {
            v25 = dcgettext(0LL, "error in regular expression search", 5);
            v26 = __errno_location();
            error(1, *v26, v25);
            sub_4027C0(1);
          }
          if ( v13 != -1 )
            goto LABEL_18;
        }
        else
        {
          if ( v12 != 116 )
            goto LABEL_19;
          if ( v9 > 1 )
          {
LABEL_18:
            sub_4023B0();
            v9 = n;
            goto LABEL_19;
          }
        }
LABEL_22:
        fputs_unlocked(qword_61B378, stdout);
        v9 = n;
        goto LABEL_19;
      }
      if ( v12 == 97 )
      {
        if ( qword_61B260 <= 1 )
          goto LABEL_18;
        if ( v9 <= 1 && qword_61B260 != ++qword_61B360 )
          goto LABEL_22;
        sub_4023B0();
        v9 = n;
        qword_61B360 = 0LL;
      }
LABEL_19:
      fwrite_unlocked(s1, 1uLL, v9, stdout);
    }
  }
  v15 = 0;
  v16 = (v7->_flags & 0x20) == 0;
  if ( v7->_flags & 0x20 )
    goto LABEL_49;
  v17 = "-";
  v18 = 2LL;
  v19 = v3;
  do
  {
    if ( !v18 )
      break;
    v15 = (unsigned __int8)*v19 < (unsigned __int8)*v17;
    v16 = *v19++ == *v17++;
    --v18;
  }
  while ( v16 );
  if ( (!v15 && !v16) == v15 )
  {
    clearerr_unlocked(v7);
    return 1LL;
  }
  v20 = sub_405AE0(v7);
  result = 1LL;
  if ( v20 == -1 )
  {
LABEL_49:
    LODWORD(v22) = sub_4048A0(0LL, 3LL, v3);
    v23 = v22;
    v24 = __errno_location();
    error(0, *v24, "%s", v23);
    result = 0LL;
  }
  return result;
}

noreturn void __fastcall  sub_4027C0(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  __int64 v5; // rcx@4
  __int64 v6; // r8@4
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
  FILE *v25; // rbp@4
  char *v26; // rax@4
  __int64 *v27; // rax@4
  _BYTE *v28; // rdi@5
  bool v29; // cf@5
  bool v30; // zf@5
  const char *v31; // rsi@6
  signed __int64 v32; // rcx@6
  char *v33; // rbp@10
  char *v34; // rax@11
  __int64 v35; // r8@11
  char *v36; // rax@11
  char *v37; // r12@13
  char *v38; // rax@13
  __int64 v39; // r8@13
  char *v40; // rax@15
  __int64 v41; // r8@15
  char *v42; // rax@16
  __int64 v43; // r8@16
  char *v44; // rax@16
  char *v45; // rax@18
  __int64 v46; // r8@18
  char *v47; // rax@20
  __int64 v48; // rcx@20
  __int64 v49; // r8@20
  const char *v50; // [sp+0h] [bp-88h]@4
  const char *v51; // [sp+8h] [bp-80h]@4
  const char *v52; // [sp+10h] [bp-78h]@4
  const char *v53; // [sp+18h] [bp-70h]@4
  const char *v54; // [sp+20h] [bp-68h]@4
  const char *v55; // [sp+28h] [bp-60h]@4
  const char *v56; // [sp+30h] [bp-58h]@4
  const char *v57; // [sp+38h] [bp-50h]@4
  const char *v58; // [sp+40h] [bp-48h]@4
  const char *v59; // [sp+48h] [bp-40h]@4
  const char *v60; // [sp+50h] [bp-38h]@4
  const char *v61; // [sp+58h] [bp-30h]@4
  __int64 v62; // [sp+60h] [bp-28h]@4
  __int64 v63; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_61B7B8;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v4, v2, v5, v6);
  v7 = stdout;
  v8 = dcgettext(0LL, "Write each FILE to standard output, with line numbers added.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "  -b, --body-numbering=STYLE      use STYLE for numbering body lines\n"
          "  -d, --section-delimiter=CC      use CC for logical page delimiters\n"
          "  -f, --footer-numbering=STYLE    use STYLE for numbering footer lines\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "  -h, --header-numbering=STYLE    use STYLE for numbering header lines\n"
          "  -i, --line-increment=NUMBER     line number increment at each line\n"
          "  -l, --join-blank-lines=NUMBER   group of NUMBER empty lines counted as one\n"
          "  -n, --number-format=FORMAT      insert line numbers according to FORMAT\n"
          "  -p, --no-renumber               do not reset line numbers for each section\n"
          "  -s, --number-separator=STRING   add STRING after (possible) line number\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "  -v, --starting-line-number=NUMBER  first line number for each section\n"
          "  -w, --number-width=NUMBER       use NUMBER columns for line numbers\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "\n"
          "By default, selects -v1 -i1 -l1 -sTAB -w6 -nrn -hn -bt -fn.\n"
          "CC are two delimiter characters used to construct logical page delimiters,\n"
          "a missing second character implies :.  Type \\\\ for \\.  STYLE is one of:\n",
          5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(
          0LL,
          "\n"
          "  a         number all lines\n"
          "  t         number only nonempty lines\n"
          "  n         number no lines\n"
          "  pBRE      number only lines that contain a match for the basic regular\n"
          "            expression, BRE\n"
          "\n"
          "FORMAT is one of:\n"
          "\n"
          "  ln   left justified, no leading zeros\n"
          "  rn   right justified, no leading zeros\n"
          "  rz   right justified, leading zeros\n"
          "\n",
          5);
  fputs_unlocked(v26, v25);
  v50 = "[";
  v27 = (__int64 *)&v50;
  v51 = "test invocation";
  v52 = "coreutils";
  v53 = "Multi-call invocation";
  v54 = "sha224sum";
  v55 = "sha2 utilities";
  v56 = "sha256sum";
  v57 = "sha2 utilities";
  v58 = "sha384sum";
  v59 = "sha2 utilities";
  v60 = "sha512sum";
  v61 = "sha2 utilities";
  v62 = 0LL;
  v63 = 0LL;
  do
  {
    v27 += 2;
    v28 = (_BYTE *)*v27;
    v29 = 0;
    v30 = *v27 == 0;
    if ( !*v27 )
      break;
    v31 = "nl";
    v32 = 3LL;
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
    __printf_chk(1LL, v34, &unk_414F12, "https://www.gnu.org/software/coreutils/", v35);
    v36 = setlocale(5, 0LL);
    if ( !v36 || !strncmp(v36, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v42 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v42, &unk_414F12, "https://www.gnu.org/software/coreutils/", v43);
    v44 = setlocale(5, 0LL);
    if ( !v44 || !strncmp(v44, "en_", 3uLL) )
    {
      v33 = "nl";
      v45 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v37 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v45, "https://www.gnu.org/software/coreutils/", "nl", v46);
LABEL_15:
      v40 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v40, v33, v37, v41);
LABEL_3:
      exit(v1);
    }
    v33 = "nl";
  }
  v47 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v47, "nl", v48, v49);
LABEL_13:
  v37 = "Multi-call invocation" + 10;
  v38 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v38, "https://www.gnu.org/software/coreutils/", "nl", v39);
  if ( v33 != "nl" )
    v37 = locale;
  goto LABEL_15;
}

__int64 sub_402BD0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_414790(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_61B7A8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_61B7B0 )
      {
        LODWORD(v5) = sub_404870(qword_61B7B0, "write error");
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
  result = sub_414790(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void __fastcall sub_402C80(FILE *a1, int a2)
{
  int v2; // eax@2

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

void __fastcall sub_402CB0(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)a1 = 0LL;
}

__int64 __fastcall sub_402DE0(__int64 a1, _IO_FILE *a2)
{
  _IO_FILE *v2; // rbx@1
  char *v3; // r14@1
  char *v4; // rsi@1
  char *v5; // r15@1
  int v6; // ebp@3
  char v7; // dl@4
  char *v8; // rax@5
  char *v9; // rdx@7
  char v10; // ST00_1@14
  __int64 v11; // r15@14
  char *v12; // rax@14
  __int64 v13; // rsi@14
  signed __int64 v15; // rax@16

  v2 = a2;
  v3 = *(char **)(a1 + 16);
  v4 = &v3[*(_QWORD *)a1];
  v5 = *(char **)(a1 + 16);
  if ( v2->_flags & 0x10 )
    return 0LL;
  while ( 1 )
  {
    v9 = v2->_IO_read_ptr;
    if ( v9 < v2->_IO_read_end )
    {
      v2->_IO_read_ptr = v9 + 1;
      v6 = (unsigned __int8)*v9;
      goto LABEL_4;
    }
    v6 = __uflow(v2);
    if ( v6 == -1 )
      break;
LABEL_4:
    v7 = v6;
    if ( v5 == v4 )
      goto LABEL_14;
    v8 = v5;
LABEL_6:
    v5 = v8 + 1;
    *v8 = v7;
    if ( v6 == 10 )
      goto LABEL_18;
  }
  if ( v3 == v5 || v2->_flags & 0x20 )
    return 0LL;
  if ( *(v5 - 1) != 10 )
  {
    v6 = 10;
    if ( v5 != v4 )
    {
      v15 = (signed __int64)(v5 + 1);
      *v5 = 10;
      goto LABEL_17;
    }
    v7 = 10;
LABEL_14:
    v10 = v7;
    v11 = *(_QWORD *)a1;
    LODWORD(v12) = sub_405140(v3, a1);
    v13 = *(_QWORD *)a1;
    v7 = v10;
    v3 = v12;
    v8 = &v12[v11];
    *(_QWORD *)(a1 + 16) = v3;
    v4 = &v3[v13];
    goto LABEL_6;
  }
LABEL_18:
  v15 = (signed __int64)v5;
LABEL_17:
  *(_QWORD *)(a1 + 8) = v15 - (_QWORD)v3;
  return a1;
}

__int64 __fastcall sub_402DE0(__int64 a1, _IO_FILE *a2)
{
  _IO_FILE *v2; // rbx@1
  char *v3; // r14@1
  char *v4; // rsi@1
  char *v5; // r15@1
  int v6; // ebp@3
  char v7; // dl@4
  char *v8; // rax@5
  char *v9; // rdx@7
  char v10; // ST00_1@14
  __int64 v11; // r15@14
  char *v12; // rax@14
  __int64 v13; // rsi@14
  signed __int64 v15; // rax@16

  v2 = a2;
  v3 = *(char **)(a1 + 16);
  v4 = &v3[*(_QWORD *)a1];
  v5 = *(char **)(a1 + 16);
  if ( v2->_flags & 0x10 )
    return 0LL;
  while ( 1 )
  {
    v9 = v2->_IO_read_ptr;
    if ( v9 < v2->_IO_read_end )
    {
      v2->_IO_read_ptr = v9 + 1;
      v6 = (unsigned __int8)*v9;
      goto LABEL_4;
    }
    v6 = __uflow(v2);
    if ( v6 == -1 )
      break;
LABEL_4:
    v7 = v6;
    if ( v5 == v4 )
      goto LABEL_14;
    v8 = v5;
LABEL_6:
    v5 = v8 + 1;
    *v8 = v7;
    if ( v6 == 10 )
      goto LABEL_18;
  }
  if ( v3 == v5 || v2->_flags & 0x20 )
    return 0LL;
  if ( *(v5 - 1) != 10 )
  {
    v6 = 10;
    if ( v5 != v4 )
    {
      v15 = (signed __int64)(v5 + 1);
      *v5 = 10;
      goto LABEL_17;
    }
    v7 = 10;
LABEL_14:
    v10 = v7;
    v11 = *(_QWORD *)a1;
    LODWORD(v12) = sub_405140(v3, a1);
    v13 = *(_QWORD *)a1;
    v7 = v10;
    v3 = v12;
    v8 = &v12[v11];
    *(_QWORD *)(a1 + 16) = v3;
    v4 = &v3[v13];
    goto LABEL_6;
  }
LABEL_18:
  v15 = (signed __int64)v5;
LABEL_17:
  *(_QWORD *)(a1 + 8) = v15 - (_QWORD)v3;
  return a1;
}

__int64 __fastcall sub_402DE0(__int64 a1, _IO_FILE *a2)
{
  _IO_FILE *v2; // rbx@1
  char *v3; // r14@1
  char *v4; // rsi@1
  char *v5; // r15@1
  int v6; // ebp@3
  char v7; // dl@4
  char *v8; // rax@5
  char *v9; // rdx@7
  char v10; // ST00_1@14
  __int64 v11; // r15@14
  char *v12; // rax@14
  __int64 v13; // rsi@14
  signed __int64 v15; // rax@16

  v2 = a2;
  v3 = *(char **)(a1 + 16);
  v4 = &v3[*(_QWORD *)a1];
  v5 = *(char **)(a1 + 16);
  if ( v2->_flags & 0x10 )
    return 0LL;
  while ( 1 )
  {
    v9 = v2->_IO_read_ptr;
    if ( v9 < v2->_IO_read_end )
    {
      v2->_IO_read_ptr = v9 + 1;
      v6 = (unsigned __int8)*v9;
      goto LABEL_4;
    }
    v6 = __uflow(v2);
    if ( v6 == -1 )
      break;
LABEL_4:
    v7 = v6;
    if ( v5 == v4 )
      goto LABEL_14;
    v8 = v5;
LABEL_6:
    v5 = v8 + 1;
    *v8 = v7;
    if ( v6 == 10 )
      goto LABEL_18;
  }
  if ( v3 == v5 || v2->_flags & 0x20 )
    return 0LL;
  if ( *(v5 - 1) != 10 )
  {
    v6 = 10;
    if ( v5 != v4 )
    {
      v15 = (signed __int64)(v5 + 1);
      *v5 = 10;
      goto LABEL_17;
    }
    v7 = 10;
LABEL_14:
    v10 = v7;
    v11 = *(_QWORD *)a1;
    LODWORD(v12) = sub_405140(v3, a1);
    v13 = *(_QWORD *)a1;
    v7 = v10;
    v3 = v12;
    v8 = &v12[v11];
    *(_QWORD *)(a1 + 16) = v3;
    v4 = &v3[v13];
    goto LABEL_6;
  }
LABEL_18:
  v15 = (signed __int64)v5;
LABEL_17:
  *(_QWORD *)(a1 + 8) = v15 - (_QWORD)v3;
  return a1;
}

__int64 __fastcall sub_402DE0(__int64 a1, _IO_FILE *a2)
{
  _IO_FILE *v2; // rbx@1
  char *v3; // r14@1
  char *v4; // rsi@1
  char *v5; // r15@1
  int v6; // ebp@3
  char v7; // dl@4
  char *v8; // rax@5
  char *v9; // rdx@7
  char v10; // ST00_1@14
  __int64 v11; // r15@14
  char *v12; // rax@14
  __int64 v13; // rsi@14
  signed __int64 v15; // rax@16

  v2 = a2;
  v3 = *(char **)(a1 + 16);
  v4 = &v3[*(_QWORD *)a1];
  v5 = *(char **)(a1 + 16);
  if ( v2->_flags & 0x10 )
    return 0LL;
  while ( 1 )
  {
    v9 = v2->_IO_read_ptr;
    if ( v9 < v2->_IO_read_end )
    {
      v2->_IO_read_ptr = v9 + 1;
      v6 = (unsigned __int8)*v9;
      goto LABEL_4;
    }
    v6 = __uflow(v2);
    if ( v6 == -1 )
      break;
LABEL_4:
    v7 = v6;
    if ( v5 == v4 )
      goto LABEL_14;
    v8 = v5;
LABEL_6:
    v5 = v8 + 1;
    *v8 = v7;
    if ( v6 == 10 )
      goto LABEL_18;
  }
  if ( v3 == v5 || v2->_flags & 0x20 )
    return 0LL;
  if ( *(v5 - 1) != 10 )
  {
    v6 = 10;
    if ( v5 != v4 )
    {
      v15 = (signed __int64)(v5 + 1);
      *v5 = 10;
      goto LABEL_17;
    }
    v7 = 10;
LABEL_14:
    v10 = v7;
    v11 = *(_QWORD *)a1;
    LODWORD(v12) = sub_405140(v3, a1);
    v13 = *(_QWORD *)a1;
    v7 = v10;
    v3 = v12;
    v8 = &v12[v11];
    *(_QWORD *)(a1 + 16) = v3;
    v4 = &v3[v13];
    goto LABEL_6;
  }
LABEL_18:
  v15 = (signed __int64)v5;
LABEL_17:
  *(_QWORD *)(a1 + 8) = v15 - (_QWORD)v3;
  return a1;
}

__int64 __fastcall sub_402DE0(__int64 a1, _IO_FILE *a2)
{
  _IO_FILE *v2; // rbx@1
  char *v3; // r14@1
  char *v4; // rsi@1
  char *v5; // r15@1
  int v6; // ebp@3
  char v7; // dl@4
  char *v8; // rax@5
  char *v9; // rdx@7
  char v10; // ST00_1@14
  __int64 v11; // r15@14
  char *v12; // rax@14
  __int64 v13; // rsi@14
  signed __int64 v15; // rax@16

  v2 = a2;
  v3 = *(char **)(a1 + 16);
  v4 = &v3[*(_QWORD *)a1];
  v5 = *(char **)(a1 + 16);
  if ( v2->_flags & 0x10 )
    return 0LL;
  while ( 1 )
  {
    v9 = v2->_IO_read_ptr;
    if ( v9 < v2->_IO_read_end )
    {
      v2->_IO_read_ptr = v9 + 1;
      v6 = (unsigned __int8)*v9;
      goto LABEL_4;
    }
    v6 = __uflow(v2);
    if ( v6 == -1 )
      break;
LABEL_4:
    v7 = v6;
    if ( v5 == v4 )
      goto LABEL_14;
    v8 = v5;
LABEL_6:
    v5 = v8 + 1;
    *v8 = v7;
    if ( v6 == 10 )
      goto LABEL_18;
  }
  if ( v3 == v5 || v2->_flags & 0x20 )
    return 0LL;
  if ( *(v5 - 1) != 10 )
  {
    v6 = 10;
    if ( v5 != v4 )
    {
      v15 = (signed __int64)(v5 + 1);
      *v5 = 10;
      goto LABEL_17;
    }
    v7 = 10;
LABEL_14:
    v10 = v7;
    v11 = *(_QWORD *)a1;
    LODWORD(v12) = sub_405140(v3, a1);
    v13 = *(_QWORD *)a1;
    v7 = v10;
    v3 = v12;
    v8 = &v12[v11];
    *(_QWORD *)(a1 + 16) = v3;
    v4 = &v3[v13];
    goto LABEL_6;
  }
LABEL_18:
  v15 = (signed __int64)v5;
LABEL_17:
  *(_QWORD *)(a1 + 8) = v15 - (_QWORD)v3;
  return a1;
}

char *__fastcall sub_402E00(const char *a1)
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
  qword_61B7B8 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_402EA0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_414850(0LL);
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

unsigned __int64 __fastcall sub_402FA0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_402EA0("`", v11);
        v58 = sub_402EA0("'", v11);
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
            return sub_402FA0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_402FA0((__int64)v9, v79, s);
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
                return sub_402FA0((__int64)v9, v10, s);
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
              return sub_402FA0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_402FA0((__int64)v9, v10, s);
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
              return sub_402FA0((__int64)v9, v10, s);
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
              return sub_402FA0((__int64)v9, v10, s);
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
            return sub_402FA0((__int64)v9, v10, s);
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
            return sub_402FA0((__int64)v9, v10, s);
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
            return sub_402FA0((__int64)v9, v10, s);
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
              return sub_402FA0((__int64)v9, v10, s);
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
          return sub_402FA0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_402FA0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4069D0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_402FA0((__int64)v9, v10, s);
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
      return sub_402FA0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_402FA0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_402EA0("`", v11);
        v58 = sub_402EA0("'", v11);
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
            return sub_402FA0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_402FA0((__int64)v9, v79, s);
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
                return sub_402FA0((__int64)v9, v10, s);
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
              return sub_402FA0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_402FA0((__int64)v9, v10, s);
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
              return sub_402FA0((__int64)v9, v10, s);
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
              return sub_402FA0((__int64)v9, v10, s);
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
            return sub_402FA0((__int64)v9, v10, s);
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
            return sub_402FA0((__int64)v9, v10, s);
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
            return sub_402FA0((__int64)v9, v10, s);
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
              return sub_402FA0((__int64)v9, v10, s);
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
          return sub_402FA0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_402FA0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4069D0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_402FA0((__int64)v9, v10, s);
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
      return sub_402FA0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_4041D0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_61B2F8;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_61B310 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405230();
    v9 = 16LL * (a1 + 1);
    if ( off_61B2F8 == &xmmword_61B300 )
    {
      LODWORD(v20) = sub_405040(0LL, v9);
      v7 = v20;
      off_61B2F8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B300);
    }
    else
    {
      LODWORD(v10) = sub_405040(off_61B2F8, v9);
      off_61B2F8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61B310], 0, 16LL * (a1 + 1 - dword_61B310));
    dword_61B310 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_402FA0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_61B7C0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_404FE0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_402FA0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4041D0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_61B2F8;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_61B310 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405230();
    v9 = 16LL * (a1 + 1);
    if ( off_61B2F8 == &xmmword_61B300 )
    {
      LODWORD(v20) = sub_405040(0LL, v9);
      v7 = v20;
      off_61B2F8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B300);
    }
    else
    {
      LODWORD(v10) = sub_405040(off_61B2F8, v9);
      off_61B2F8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61B310], 0, 16LL * (a1 + 1 - dword_61B310));
    dword_61B310 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_402FA0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_61B7C0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_404FE0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_402FA0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4047F0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_61B8F0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_61B8C0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_61B8D0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_61B8E0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_4041D0(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_404870(char *a1)
{
  return sub_4047F0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4048A0(int a1, int a2, char *a3)
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
  return sub_4041D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4048A0(int a1, int a2, char *a3)
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
  return sub_4041D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404A20(char *a1)
{
  return sub_4041D0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61B2C0);
}

int __fastcall sub_404A40(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_404A40(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_404EA0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_404A40(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_404A40(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_404FE0(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405230();
  }
  return result;
}

void *__fastcall sub_405040(void *a1, size_t a2)
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
        sub_405230();
    }
  }
  return result;
}

void *__fastcall sub_405140(void *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax@1

  v2 = *a2;
  if ( a1 )
  {
    if ( v2 <= 0x5555555555555553LL )
    {
      v2 += (v2 >> 1) + 1;
LABEL_4:
      *a2 = v2;
      return sub_405040(a1, v2);
    }
LABEL_8:
    sub_405230(a1);
  }
  if ( v2 )
  {
    if ( (v2 & 0x8000000000000000LL) == 0LL )
      goto LABEL_4;
    goto LABEL_8;
  }
  *a2 = 128LL;
  return sub_405040(0LL, 0x80uLL);
}

void *__fastcall sub_4051E0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_404FE0(a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_405230()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

signed __int64 __fastcall sub_405270(char *a1, __int64 a2, signed __int64 a3, signed __int64 a4, __int64 a5, __int64 a6, int a7)
{
  signed __int64 v7; // r15@1
  signed __int64 v8; // r14@1
  __int64 v9; // r13@1
  int v10; // ebx@1
  int v11; // eax@1
  signed __int64 v12; // rbp@2
  int *v13; // r14@4
  _BYTE *v14; // rax@6
  int v15; // esi@6
  int v17; // ebp@12
  int *v18; // rax@12
  signed int v19; // eax@15
  signed __int64 v20; // [sp+8h] [bp-40h]@0

  v7 = a4;
  v8 = a3;
  v9 = a6;
  v10 = a7;
  v11 = sub_405390(a1);
  if ( v11 )
  {
    v17 = v11;
    v18 = __errno_location();
    v13 = v18;
    if ( v17 != 1 )
    {
      if ( v17 == 3 )
        *v18 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v12 = v20;
    if ( v20 >= v8 && v20 <= v7 )
      return v12;
    v13 = __errno_location();
    if ( v20 <= 0x3FFFFFFF )
    {
      v19 = 34;
      if ( v20 <= -1073741825 )
        v19 = 75;
      *v13 = v19;
      goto LABEL_6;
    }
  }
  *v13 = 75;
LABEL_6:
  v14 = sub_404A20(a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", v9, v14);
  return v20;
}

signed __int64 __fastcall sub_405360(char *a1, signed __int64 a2, signed __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_405270(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_405390(char *nptr, char **a2, unsigned int a3, signed __int64 *a4, const char *a5)
{
  char **v5; // rbx@2
  int v6; // ebp@2
  const char *v7; // r14@4
  int *v8; // rax@4
  int *v9; // r13@4
  __int64 v10; // rax@4
  char *v11; // r15@4
  signed __int64 v12; // rbp@4
  signed int v13; // er12@6
  int v14; // er13@8
  signed __int64 v16; // rsi@17
  signed int v17; // eax@17
  signed __int64 v18; // rax@19
  char v19; // al@21
  char *v20; // rsi@31
  signed __int64 v21; // rcx@37
  signed __int64 v22; // rax@37
  signed __int64 v23; // rax@39
  signed __int64 v24; // rdi@42
  signed __int64 v25; // rcx@52
  signed __int64 v26; // r9@52
  signed int v27; // edi@53
  signed int v28; // er10@53
  signed __int64 v29; // rcx@59
  signed __int64 v30; // r9@59
  signed int v31; // edi@60
  signed __int64 v32; // rcx@66
  signed __int64 v33; // r9@66
  signed int v34; // edi@67
  signed __int64 v35; // rcx@73
  signed __int64 v36; // r9@73
  signed int v37; // edi@74
  signed __int64 v38; // rcx@80
  signed __int64 v39; // r9@80
  signed int v40; // edi@81
  signed __int64 v41; // rcx@87
  signed __int64 v42; // r9@87
  signed int v43; // edi@88
  signed __int64 *v44; // [sp+0h] [bp-58h]@1
  char *endptr; // [sp+18h] [bp-40h]@3

  v44 = a4;
  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoimax");
  v5 = a2;
  v6 = a3;
  if ( !a2 )
    v5 = &endptr;
  v7 = a5;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = __strtol_internal(nptr, v5, v6, 0);
  v11 = *v5;
  v12 = v10;
  if ( *v5 == nptr )
  {
    if ( !v7 )
      goto LABEL_117;
    v14 = (unsigned __int8)*v11;
    v13 = 4;
    if ( !(_BYTE)v14 )
      return (unsigned int)v13;
    v12 = 1LL;
    v13 = 0;
    if ( !strchr(v7, (char)v14) )
LABEL_117:
      return 4;
LABEL_16:
    if ( (unsigned __int8)(v14 - 69) <= 0x2Fu
      && (v18 = 142129060940101LL, _bittest64(&v18, (unsigned int)(v14 - 69)))
      && strchr(v7, 48) )
    {
      v19 = v11[1];
      if ( v19 != 68 )
      {
        if ( v19 == 105 )
        {
          v17 = 1024;
          LODWORD(v16) = 2 * (v11[2] == 66) + 1;
          goto LABEL_18;
        }
        if ( v19 != 66 )
        {
          switch ( (unsigned __int64)(unsigned __int8)(v14 - 69) )
          {
            case 0uLL:
              v16 = 1LL;
              v32 = 1024LL;
              v33 = -9007199254740992LL;
              goto LABEL_67;
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
              goto LABEL_27;
            case 2uLL:
            case 0x22uLL:
              v16 = 1LL;
              v35 = 1024LL;
              v36 = -9007199254740992LL;
              goto LABEL_74;
            case 6uLL:
            case 0x26uLL:
              v16 = 1LL;
              v21 = 1024LL;
              v22 = -9007199254740992LL;
              goto LABEL_38;
            case 8uLL:
            case 0x28uLL:
              v16 = 1LL;
              v21 = 1024LL;
              v24 = -9007199254740992LL;
              goto LABEL_43;
            case 0xBuLL:
              v16 = 1LL;
              v25 = 1024LL;
              v26 = -9007199254740992LL;
              goto LABEL_53;
            case 0xFuLL:
            case 0x2FuLL:
              v16 = 1LL;
              v29 = 1024LL;
              v30 = -9007199254740992LL;
              goto LABEL_60;
            case 0x14uLL:
              v16 = 1LL;
              v38 = 1024LL;
              v39 = -9007199254740992LL;
              goto LABEL_81;
            case 0x15uLL:
              v16 = 1LL;
              v41 = 1024LL;
              v42 = -9007199254740992LL;
              goto LABEL_88;
            case 0x1DuLL:
              v16 = 1LL;
              goto LABEL_48;
            case 0x1EuLL:
              v16 = 1LL;
              break;
          }
LABEL_31:
          v20 = &v11[v16];
          *v5 = v20;
          if ( *v20 )
            v13 |= 2u;
          goto LABEL_9;
        }
      }
      LODWORD(v16) = 2;
      v17 = 1000;
    }
    else
    {
      LODWORD(v16) = 1;
      v17 = 1024;
    }
LABEL_18:
    switch ( (_BYTE)v14 )
    {
      default:
        goto LABEL_27;
      case 0x42:
        v16 = (signed int)v16;
        if ( v12 < -9007199254740992LL )
          goto LABEL_46;
        if ( v12 > 0x1FFFFFFFFFFFFFLL )
          goto LABEL_105;
        v12 <<= 10;
        goto LABEL_31;
      case 0x77:
        v16 = (signed int)v16;
        if ( v12 < -4611686018427387904LL )
          goto LABEL_46;
        if ( v12 > 0x3FFFFFFFFFFFFFFFLL )
          goto LABEL_105;
        v12 *= 2LL;
        goto LABEL_31;
      case 0x4B:
      case 0x6B:
        v21 = v17;
        v16 = (signed int)v16;
        v22 = (signed __int64)0x8000000000000000LL / v17;
LABEL_38:
        if ( v12 < v22 )
          goto LABEL_46;
        v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
        goto LABEL_40;
      case 0x4D:
      case 0x6D:
        v21 = v17;
        v16 = (signed int)v16;
        v24 = (signed __int64)0x8000000000000000LL / v17;
LABEL_43:
        if ( v12 < v24 )
          goto LABEL_46;
        v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
        if ( v12 > 0x7FFFFFFFFFFFFFFFLL / v21 )
          goto LABEL_105;
        v12 *= v21;
        if ( v12 < v24 )
          goto LABEL_46;
LABEL_40:
        if ( v23 < v12 )
          goto LABEL_105;
        v12 *= v21;
        goto LABEL_31;
      case 0x62:
        v16 = (signed int)v16;
LABEL_48:
        if ( v12 < -18014398509481984LL )
        {
LABEL_46:
          v12 = 0x8000000000000000LL;
          v13 = 1;
        }
        else if ( v12 > 0x3FFFFFFFFFFFFFLL )
        {
LABEL_105:
          v12 = 0x7FFFFFFFFFFFFFFFLL;
          v13 = 1;
        }
        else
        {
          v12 <<= 9;
        }
        goto LABEL_31;
      case 0x63:
        v16 = (signed int)v16;
        goto LABEL_31;
      case 0x50:
        v25 = v17;
        v16 = (signed int)v16;
        v26 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x54:
      case 0x74:
        v29 = v17;
        v16 = (signed int)v16;
        v30 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x45:
        v32 = v17;
        v16 = (signed int)v16;
        v33 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x47:
      case 0x67:
        v35 = v17;
        v16 = (signed int)v16;
        v36 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x59:
        v38 = v17;
        v16 = (signed int)v16;
        v39 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x5A:
        v41 = v17;
        v16 = (signed int)v16;
        v42 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
    }
    v13 |= v28;
    goto LABEL_31;
  }
  if ( *v9 )
  {
    v13 = 4;
    if ( *v9 != 34 )
      return (unsigned int)v13;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  if ( v7 )
  {
    v14 = (unsigned __int8)*v11;
    if ( (_BYTE)v14 )
    {
      if ( !strchr(v7, (char)v14) )
      {
LABEL_27:
        v13 |= 2u;
        *v44 = v12;
        return (unsigned int)v13;
      }
      goto LABEL_16;
    }
  }
LABEL_9:
  *v44 = v12;
  return (unsigned int)v13;
}

int __fastcall sub_405AE0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_405B60(stream) )
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

int __fastcall sub_405B60(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_405BA0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_405BA0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_405C00(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_405CE0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_406300(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_405C00(a2, a7);
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
        sub_405C00((__int64)v11, a7);
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
            v40 = sub_405CE0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_405CE0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_405CE0(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_4068D0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_61B900 = dword_61B31C;
  dword_61B904 = dword_61B318;
  result = sub_406300(a1, a2, a3, a4, a5, a6, (__int64)&dword_61B900, a7);
  dword_61B31C = dword_61B900;
  s = (char *)qword_61B910;
  dword_61B314 = dword_61B908;
  return result;
}

__int64 __fastcall sub_406950(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_4068D0(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_4069D0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx@2
  wchar_t *v5; // r12@3
  char *v6; // rbp@3
  char v8; // [sp+Ch] [bp-1Ch]@7

  if ( !s )
  {
    a3 = 1LL;
    v6 = locale;
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_4147F0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

bool __fastcall sub_406A50(__int64 a1, __int64 a2)
{
  bool result; // al@1
  __int64 v3; // rdx@2

  result = a2 == 0 || a1 == 0;
  if ( result )
  {
    result = 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 == *(_QWORD *)(a2 + 8) )
    {
      while ( --v3 >= 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v3) != *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * v3) )
          return result;
      }
      result = 1;
    }
  }
  return result;
}

int __fastcall sub_406AA0(__int64 a1, int (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v3; // rbp@1
  __int64 i; // rbx@1
  __int64 v5; // rax@3
  int result; // eax@5
  __int64 v7; // rdx@6
  bool v8; // zf@7

  v3 = a3;
  for ( i = a1; ; i = v5 )
  {
    v5 = *(_QWORD *)(i + 8);
    if ( !v5 )
    {
      v5 = *(_QWORD *)(i + 16);
      if ( !v5 )
        break;
    }
LABEL_2:
    ;
  }
  for ( result = a2(v3, i); !result; result = a2(v3, v7) )
  {
    v7 = *(_QWORD *)i;
    if ( !*(_QWORD *)i )
      break;
    v5 = *(_QWORD *)(v7 + 16);
    v8 = v5 == i;
    i = *(_QWORD *)i;
    if ( !v8 && v5 != 0 )
      goto LABEL_2;
  }
  return result;
}

signed __int64 __fastcall sub_406B10(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax@1
  __int64 v4; // r8@2
  bool v5; // zf@2
  bool v6; // sf@2
  unsigned __int8 v7; // of@2
  char v8; // cl@2
  signed __int64 result; // rax@9
  char v10; // al@17
  char v11; // al@22

  v3 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(a2 + 104) <= v3 )
  {
    *(_BYTE *)(a1 + 8) = 2;
    return 0LL;
  }
  v4 = *(_QWORD *)(a2 + 8);
  v7 = __OFSUB__(*(_DWORD *)(a2 + 144), 1);
  v5 = *(_DWORD *)(a2 + 144) == 1;
  v6 = *(_DWORD *)(a2 + 144) - 1 < 0;
  v8 = *(_BYTE *)(v4 + v3);
  *(_BYTE *)a1 = v8;
  if ( !((unsigned __int8)(v6 ^ v7) | v5)
    && v3 != *(_QWORD *)(a2 + 48)
    && *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v3) == -1 )
  {
    goto LABEL_12;
  }
  if ( v8 == 92 )
  {
    if ( !(a3 & 1) || v3 + 1 >= *(_QWORD *)(a2 + 88) )
      goto LABEL_12;
    *(_QWORD *)(a2 + 72) = v3 + 1;
    v11 = *(_BYTE *)(v4 + v3 + 1);
    *(_BYTE *)(a1 + 8) = 1;
    *(_BYTE *)a1 = v11;
    result = 1LL;
  }
  else
  {
    if ( v8 == 91 )
    {
      if ( v3 + 1 < *(_QWORD *)(a2 + 88) )
      {
        v10 = *(_BYTE *)(v4 + v3 + 1);
        *(_BYTE *)a1 = v10;
        if ( v10 == 58 )
        {
          if ( a3 & 4 )
          {
            *(_BYTE *)(a1 + 8) = 30;
            return 2LL;
          }
        }
        else
        {
          if ( v10 == 61 )
          {
            *(_BYTE *)(a1 + 8) = 28;
            return 2LL;
          }
          if ( v10 == 46 )
          {
            *(_BYTE *)(a1 + 8) = 26;
            return 2LL;
          }
        }
      }
      *(_BYTE *)(a1 + 8) = 1;
      result = 1LL;
      *(_BYTE *)a1 = 91;
      return result;
    }
    if ( v8 != 93 )
    {
      if ( v8 == 94 )
      {
        *(_BYTE *)(a1 + 8) = 25;
        return 1LL;
      }
      if ( v8 == 45 )
      {
        *(_BYTE *)(a1 + 8) = 22;
        return 1LL;
      }
LABEL_12:
      *(_BYTE *)(a1 + 8) = 1;
      return 1LL;
    }
    *(_BYTE *)(a1 + 8) = 21;
    result = 1LL;
  }
  return result;
}

signed __int64 __fastcall sub_406C60(__int64 a1, signed int a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  signed __int64 v5; // r13@1
  signed __int64 v6; // r14@2
  __int64 v7; // rbx@2
  __int64 v8; // r11@2
  __int64 v9; // r15@2
  __int64 v10; // rbp@5
  signed __int64 v11; // rax@5
  char v12; // dl@5
  __int64 v14; // r13@14
  signed __int64 v15; // r12@14
  __int64 v16; // rcx@18
  int v17; // eax@19
  __int64 v18; // [sp+10h] [bp-68h]@1
  signed __int64 v19; // [sp+18h] [bp-60h]@2
  __int16 v20; // [sp+26h] [bp-52h]@2
  signed __int64 v21; // [sp+28h] [bp-50h]@2
  signed __int64 v22; // [sp+30h] [bp-48h]@14
  __int64 v23; // [sp+38h] [bp-40h]@14

  v18 = a4;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 48LL) + 24 * a4;
  if ( *(_QWORD *)(v5 + 8) > 0LL )
  {
    v6 = a3;
    v7 = 0LL;
    v8 = a5;
    v9 = *(_QWORD *)(a1 + 152);
    v21 = 40 * a5;
    v19 = 1LL << a3;
    v20 = ~(unsigned __int16)(1LL << a3);
    do
    {
      while ( 2 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v7);
        v11 = *(_QWORD *)v9 + 16LL * *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v7);
        v12 = *(_BYTE *)(v11 + 8);
        if ( v12 == 8 )
        {
          if ( a2 & 1 && *(_QWORD *)v11 == v6 )
            return 0xFFFFFFFFLL;
        }
        else if ( v12 == 9 )
        {
          if ( a2 & 2 && *(_QWORD *)v11 == v6 )
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
            if ( *(_QWORD *)v15 == v10 && (v6 > 63 || *(_WORD *)(v15 + 34) & (unsigned __int16)v19) )
            {
              v16 = **(_QWORD **)(*(_QWORD *)(v9 + 40) + 24 * v10 + 16);
              if ( v18 == v16 )
                return -(a2 & 1);
              v17 = sub_406C60(a1, (unsigned int)a2, v6, v16, v14);
              if ( v17 == -1 )
                return 0xFFFFFFFFLL;
              if ( !v17 && a2 & 2 )
                return 0LL;
              if ( v6 <= 63 )
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

signed __int64 __fastcall sub_406E70(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int64 v6; // rax@1
  __int64 v7; // r10@1
  __int64 v8; // rax@2
  signed int v9; // esi@3
  signed __int64 result; // rax@4

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
    goto LABEL_7;
  }
  result = 0LL;
  if ( v7 == a5 )
LABEL_7:
    result = sub_406C60(a1, v9, a3, a4, a6);
  return result;
}

signed __int64 __fastcall sub_406EE0(__int64 a1, size_t a2)
{
  __int64 v2; // rbx@1
  void *v3; // rax@3
  void *v4; // rdi@4
  void *v5; // rax@5
  void *v7; // rax@9

  v2 = a1;
  if ( *(_DWORD *)(a1 + 144) > 1 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      return 12LL;
    v3 = realloc(*(void **)(a1 + 16), 4 * a2);
    if ( !v3 )
      return 12LL;
    v4 = *(void **)(a1 + 24);
    *(_QWORD *)(v2 + 16) = v3;
    if ( v4 )
    {
      v5 = realloc(v4, 8 * a2);
      if ( !v5 )
        return 12LL;
      *(_QWORD *)(v2 + 24) = v5;
    }
  }
  if ( !*(_BYTE *)(v2 + 139) )
  {
LABEL_8:
    *(_QWORD *)(v2 + 64) = a2;
    return 0LL;
  }
  v7 = realloc(*(void **)(v2 + 8), a2);
  if ( v7 )
  {
    *(_QWORD *)(v2 + 8) = v7;
    goto LABEL_8;
  }
  return 12LL;
}

signed __int64 __fastcall sub_406F80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 v3; // rsi@1
  void *v4; // rax@1
  signed __int64 v6; // rsi@4

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(void **)(a1 + 16);
  if ( *(_QWORD *)a1 != v3 )
    goto LABEL_2;
  v6 = v3 + 1;
  *(_QWORD *)a1 = 2 * v6;
  v4 = realloc(v4, 16 * v6);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = v4;
    v3 = *(_QWORD *)(a1 + 8);
LABEL_2:
    *(_QWORD *)(a1 + 8) = v3 + 1;
    *((_QWORD *)v4 + v3) = v2;
    return 1LL;
  }
  return 0LL;
}

_QWORD *__fastcall sub_406FF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 v3; // rsi@2
  char *v4; // rax@2
  _QWORD *result; // rax@3
  signed __int64 v6; // rdx@8
  char *v7; // rdx@10
  __int64 v8; // rcx@11
  __int64 i; // rcx@14

  v2 = a2;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(char **)(a1 + 16);
    if ( !v3 )
    {
      *(_QWORD *)v4 = v2;
      result = (_QWORD *)1;
      ++*(_QWORD *)(a1 + 8);
      return result;
    }
    if ( *(_QWORD *)a1 == v3 )
    {
      *(_QWORD *)a1 = 2 * v3;
      v4 = (char *)realloc(v4, 16 * v3);
      if ( !v4 )
        return 0LL;
      *(_QWORD *)(a1 + 16) = v4;
      v3 = *(_QWORD *)(a1 + 8);
    }
    v6 = 8 * v3;
    if ( *(_QWORD *)v4 <= v2 )
    {
      for ( i = *(_QWORD *)&v4[v6 - 8]; i > v2; i = *(_QWORD *)&v4[v6 - 8] )
      {
        *(_QWORD *)&v4[v6] = i;
        v6 -= 8LL;
      }
    }
    else if ( v3 > 0 )
    {
      v7 = &v4[v6];
      do
      {
        v8 = *((_QWORD *)v7 - 1);
        v7 -= 8;
        *((_QWORD *)v7 + 1) = v8;
      }
      while ( v7 != v4 );
      v6 = 0LL;
    }
    *(_QWORD *)&v4[v6] = v2;
    result = (_QWORD *)1;
    ++*(_QWORD *)(a1 + 8);
  }
  else
  {
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 8) = 1LL;
    result = malloc(8uLL);
    *(_QWORD *)(a1 + 16) = result;
    if ( result )
    {
      *result = a2;
      result = (_QWORD *)1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)a1 = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_407120(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13@1
  __int64 v4; // rbp@1
  __int64 v5; // r15@1
  void *v6; // rax@1
  __int64 v7; // rbx@2
  signed __int64 v9; // rbx@8
  __int64 v10; // rdx@8
  _QWORD *v11; // rax@8
  signed __int64 v12; // rsi@8

  v3 = a3;
  v4 = a2;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = a3;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 32) = v5;
  v6 = malloc(8 * v5);
  *(_QWORD *)(a2 + 48) = v6;
  if ( !v6 )
    return 12LL;
  v7 = 0LL;
  if ( v5 > 0 )
  {
    while ( *(_BYTE *)(*(_QWORD *)a1 + 16LL * *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v7) + 8) & 8
         || (unsigned __int8)sub_406F80(a2 + 32, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v7)) )
    {
      if ( *(_QWORD *)(a2 + 16) <= ++v7 )
        goto LABEL_8;
    }
    return 12LL;
  }
LABEL_8:
  v9 = *(_QWORD *)(a1 + 64) + 24 * (*(_QWORD *)(a1 + 136) & v3);
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
  v11[v10] = v4;
  return 0LL;
}

wint_t __fastcall sub_407220(unsigned __int8 a1, __int64 a2)
{
  wint_t result; // eax@1

  result = btowc(a1);
  if ( result == -1 && !a2 )
    result = a1;
  return result;
}

void __fastcall sub_407250(__int64 a1)
{
  __int64 v1; // r12@1
  __int64 v2; // rbx@3
  const __int32_t **v3; // rax@4
  __int64 v4; // rcx@5
  __int64 v5; // rdx@5
  __int64 v6; // r12@9

  v1 = *(_QWORD *)(a1 + 88);
  if ( *(_QWORD *)(a1 + 64) <= v1 )
    v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 48);
  if ( v1 <= v2 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = v6;
    *(_QWORD *)(a1 + 56) = v6;
  }
  else
  {
    v3 = __ctype_toupper_loc();
    do
    {
      v4 = *(_QWORD *)(a1 + 120);
      v5 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + v2 + *(_QWORD *)a1);
      if ( v4 )
        v5 = *(_BYTE *)(v4 + v5);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v2++) = (*v3)[v5];
    }
    while ( v1 != v2 );
    *(_QWORD *)(a1 + 48) = v1;
    *(_QWORD *)(a1 + 56) = v1;
  }
}

void __fastcall sub_4072D0(__int64 a1)
{
  __int64 v1; // rbx@1
  signed __int64 v2; // r12@1
  signed __int64 v3; // rbp@1
  mbstate_t *v4; // r13@4
  __int64 v5; // rdi@5
  __int64 v6; // r14@5
  signed __int64 v7; // rdx@5
  char *v8; // rsi@6
  size_t v9; // rax@7
  __int64 v10; // rdx@8
  __int64 v11; // rcx@9
  signed __int64 v12; // rsi@9
  signed __int64 v13; // rdi@9
  _DWORD *v14; // rdx@10
  signed __int64 v15; // rcx@10
  __int64 v16; // rcx@14
  _BYTE *v17; // rax@14
  __int64 v18; // rax@20
  char v19; // cl@24
  wchar_t pwc; // [sp+Ch] [bp-6Ch]@7
  char v21[104]; // [sp+10h] [bp-68h]@20

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 64) <= v2 )
    v2 = *(_QWORD *)(a1 + 64);
  if ( v2 > v3 )
  {
    v4 = (mbstate_t *)(a1 + 32);
    while ( 1 )
    {
      v5 = *(_QWORD *)(v1 + 120);
      v6 = *(_QWORD *)(v1 + 32);
      v7 = v2 - v3;
      if ( v5 )
      {
        if ( *(_DWORD *)(v1 + 144) > 0 && (v18 = 0LL, v8 = v21, v7 > 0) )
        {
          while ( 1 )
          {
            v19 = *(_BYTE *)(v5 + *(_BYTE *)(*(_QWORD *)(v1 + 40) + v18 + v3 + *(_QWORD *)v1));
            *(_BYTE *)(v3 + *(_QWORD *)(v1 + 8) + v18) = v19;
            v21[v18] = v19;
            if ( *(_DWORD *)(v1 + 144) <= (signed int)v18 + 1 )
              break;
            if ( v7 == ++v18 )
              break;
            v5 = *(_QWORD *)(v1 + 120);
          }
        }
        else
        {
          v8 = v21;
        }
      }
      else
      {
        v8 = (char *)(*(_QWORD *)v1 + v3 + *(_QWORD *)(v1 + 40));
      }
      v9 = sub_4069D0(&pwc, v8, v7, v4);
      if ( v9 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_14;
      LODWORD(v10) = pwc;
      if ( v9 == -2LL )
        break;
LABEL_9:
      v11 = *(_QWORD *)(v1 + 16);
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
        v15 = v11 + 4 * v3;
        do
        {
          *v14 = -1;
          ++v14;
        }
        while ( (_DWORD *)v15 != v14 );
        if ( v3 >= v2 )
          goto LABEL_13;
      }
    }
    if ( *(_QWORD *)(v1 + 64) < *(_QWORD *)(v1 + 88) )
    {
      *(_QWORD *)(v1 + 32) = v6;
      goto LABEL_13;
    }
LABEL_14:
    v16 = *(_QWORD *)(v1 + 120);
    v17 = (_BYTE *)(*(_QWORD *)(v1 + 40) + v3 + *(_QWORD *)v1);
    v10 = *v17;
    pwc = *v17;
    if ( v16 )
    {
      LODWORD(v10) = *(_BYTE *)(v16 + v10);
      pwc = v10;
    }
    *(_QWORD *)(v1 + 32) = v6;
    v9 = 1LL;
    goto LABEL_9;
  }
LABEL_13:
  *(_QWORD *)(v1 + 48) = v3;
  *(_QWORD *)(v1 + 56) = v3;
}

signed __int64 __fastcall sub_407480(__int64 a1)
{
  __int64 v1; // r14@1
  char *v2; // rbx@1
  signed __int64 v3; // r15@3
  signed __int64 v4; // r12@5
  __int64 v5; // rdx@8
  size_t v6; // rax@9
  size_t v7; // rbp@10
  wint_t v8; // ST00_4@11
  wchar_t v9; // eax@11
  signed __int64 v10; // r8@11
  wchar_t v11; // er13@11
  size_t v12; // rax@12
  char *v13; // rcx@12
  size_t v14; // r10@12
  signed __int64 v15; // r8@13
  size_t v16; // rax@15
  __int64 v17; // rax@16
  _DWORD *v18; // rdx@17
  signed __int64 result; // rax@21
  signed __int64 v20; // rbp@26
  char *v21; // r12@26
  __int64 v22; // r13@26
  size_t v23; // rax@28
  size_t v24; // r12@28
  wint_t v25; // ST08_4@29
  wchar_t v26; // eax@29
  wchar_t v27; // er13@29
  __int64 v28; // rax@32
  signed __int64 v29; // rdx@32
  signed __int64 v30; // rbp@32
  _DWORD *v31; // rcx@33
  signed __int64 v32; // rax@33
  int v33; // eax@42
  int v34; // eax@43
  int v35; // eax@44
  __int64 v36; // r10@46
  char *v37; // rcx@46
  __int64 v38; // rax@46
  signed __int64 v39; // rdi@46
  signed __int64 v40; // ST00_8@51
  __int64 v41; // rdx@54
  __int64 v42; // rax@54
  signed __int64 v43; // rcx@56
  signed __int64 v44; // rdx@61
  size_t v45; // rax@65
  size_t v46; // rsi@65
  size_t v47; // rax@65
  __int64 v48; // rdx@69
  __int64 v49; // rax@69
  wchar_t *v50; // rsi@72
  __int64 v51; // rax@72
  signed __int64 *v52; // rcx@72
  unsigned __int64 v53; // rax@72
  signed __int64 v54; // rdx@73
  void *v55; // ST08_8@82
  void *v56; // rax@82
  const mbstate_t *v57; // [sp+0h] [bp-A8h]@7
  signed __int64 v58; // [sp+0h] [bp-A8h]@65
  char *src; // [sp+8h] [bp-A0h]@9
  char *srca; // [sp+8h] [bp-A0h]@72
  signed __int64 v61; // [sp+10h] [bp-98h]@7
  wchar_t *pwc; // [sp+18h] [bp-90h]@7
  wint_t wc; // [sp+24h] [bp-84h]@7
  mbstate_t ps; // [sp+28h] [bp-80h]@8
  char s[120]; // [sp+30h] [bp-78h]@12

  v1 = a1;
  v2 = *(char **)(a1 + 88);
  if ( *(_QWORD *)(a1 + 64) <= (signed __int64)v2 )
    v2 = *(char **)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 138) || *(_QWORD *)(a1 + 120) || *(_BYTE *)(a1 + 140) )
  {
    v4 = *(_QWORD *)(a1 + 56);
    goto LABEL_6;
  }
  if ( v3 >= (signed __int64)v2 )
    goto LABEL_37;
  v57 = (const mbstate_t *)(a1 + 32);
  while ( 1 )
  {
    v20 = v3;
    v21 = (char *)(*(_QWORD *)a1 + v3 + *(_QWORD *)(a1 + 40));
    v22 = (unsigned __int8)*v21;
    if ( !(v22 & 0x80) && mbsinit(v57) )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3) = (*__ctype_toupper_loc())[v22];
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v3) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3);
      ++v3;
      goto LABEL_36;
    }
    ps = *(mbstate_t *)(a1 + 32);
    v61 = (signed __int64)&v2[-v3];
    pwc = (wchar_t *)&wc;
    v23 = sub_4069D0((wchar_t *)&wc, v21, (size_t)&v2[-v3], (mbstate_t *)v57);
    v24 = v23;
    if ( v23 <= 0xFFFFFFFFFFFFFFFDLL )
      break;
    if ( v23 == -2LL )
    {
      if ( *(_QWORD *)(a1 + 64) < *(_QWORD *)(a1 + 88) )
      {
        *(mbstate_t *)(a1 + 32) = ps;
LABEL_37:
        *(_QWORD *)(a1 + 48) = v3;
        result = 0LL;
        *(_QWORD *)(a1 + 56) = v3;
        return result;
      }
      v33 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + v3 + *(_QWORD *)a1);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3++) = v33;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v20) = v33;
    }
    else
    {
      v34 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + v3 + *(_QWORD *)a1);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3++) = v34;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v20) = v34;
      *(mbstate_t *)(a1 + 32) = ps;
    }
LABEL_36:
    if ( (signed __int64)v2 <= v3 )
      goto LABEL_37;
  }
  v25 = wc;
  v26 = towupper(wc);
  v27 = v26;
  if ( v25 == v26 )
  {
    memcpy((void *)(v3 + *(_QWORD *)(a1 + 8)), (const void *)(*(_QWORD *)a1 + v3 + *(_QWORD *)(a1 + 40)), v24);
LABEL_32:
    v28 = *(_QWORD *)(a1 + 16);
    v29 = 4 * v3++;
    *(_DWORD *)(v28 + 4 * v20) = v27;
    v30 = v24 + v20;
    if ( v3 < v30 )
    {
      v31 = (_DWORD *)(v28 + v29 + 4);
      v32 = v28 + 4 * v30;
      do
      {
        *v31 = -1;
        ++v31;
      }
      while ( (_DWORD *)v32 != v31 );
      v3 = v30;
    }
    goto LABEL_36;
  }
  if ( v24 == wcrtomb(s, v26, &ps) )
  {
    memcpy((void *)(v3 + *(_QWORD *)(a1 + 8)), s, v24);
    goto LABEL_32;
  }
  v4 = v3;
  while ( 2 )
  {
    v5 = *(_QWORD *)(v1 + 120);
    ps = *(mbstate_t *)(v1 + 32);
    if ( v5 )
    {
      v35 = *(_DWORD *)(v1 + 144);
      if ( v35 <= 0 || v61 <= 0 )
      {
        v37 = s;
      }
      else
      {
        v36 = (unsigned int)(v35 - 1);
        v37 = s;
        v38 = 0LL;
        v39 = *(_QWORD *)v1 + v4 + *(_QWORD *)(v1 + 40);
        do
        {
          s[v38] = *(_BYTE *)(v5 + *(_BYTE *)(v39 + v38));
          if ( v36 == v38 )
            break;
          ++v38;
        }
        while ( v61 != v38 );
      }
      src = v37;
      v6 = sub_4069D0(pwc, v37, v61, (mbstate_t *)v57);
    }
    else
    {
      src = (char *)(*(_QWORD *)v1 + v4 + *(_QWORD *)(v1 + 40));
      v6 = sub_4069D0(pwc, src, v61, (mbstate_t *)v57);
    }
    v7 = v6;
    if ( v6 > 0xFFFFFFFFFFFFFFFDLL )
    {
      if ( v6 == -2LL && *(_QWORD *)(v1 + 64) < *(_QWORD *)(v1 + 88) )
      {
LABEL_20:
        *(mbstate_t *)(v1 + 32) = ps;
LABEL_21:
        *(_QWORD *)(v1 + 48) = v3;
        result = 0LL;
        *(_QWORD *)(v1 + 56) = v4;
        return result;
      }
      v41 = *(_QWORD *)(v1 + 120);
      v42 = *(_BYTE *)(*(_QWORD *)(v1 + 40) + v4 + *(_QWORD *)v1);
      if ( v41 )
        LODWORD(v42) = *(_BYTE *)(v41 + v42);
      v43 = v3;
      *(_BYTE *)(*(_QWORD *)(v1 + 8) + v3) = v42;
      if ( *(_BYTE *)(v1 + 140) )
        *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8 * v3) = v4;
      ++v4;
      ++v3;
      *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4 * v43) = v42;
      if ( v7 == -1LL )
        *(mbstate_t *)(v1 + 32) = ps;
      goto LABEL_6;
    }
    v8 = wc;
    v9 = towupper(wc);
    v10 = v3;
    v11 = v9;
    if ( v8 == v9 )
      goto LABEL_87;
    v12 = wcrtomb(s, v9, &ps);
    v13 = s;
    v10 = v3;
    v14 = v12;
    if ( v7 == v12 )
    {
      memcpy((void *)(v3 + *(_QWORD *)(v1 + 8)), s, v7);
      v15 = v3;
      goto LABEL_14;
    }
    if ( v12 == -1LL )
    {
LABEL_87:
      v40 = v10;
      memcpy((void *)(v3 + *(_QWORD *)(v1 + 8)), src, v7);
      v15 = v40;
LABEL_14:
      if ( *(_BYTE *)(v1 + 140) )
      {
        v16 = v4;
        if ( v7 )
        {
          v16 = v7 + v4;
          v44 = *(_QWORD *)(v1 + 24) + 8 * (v3 - v4);
          do
          {
            *(_QWORD *)(v44 + 8 * v4) = v4;
            ++v4;
          }
          while ( v16 != v4 );
        }
      }
      else
      {
        v16 = v4 + v7;
      }
      v4 = v16;
      v17 = *(_QWORD *)(v1 + 16);
      ++v3;
      *(_DWORD *)(v17 + 4 * v15) = v11;
      if ( v3 < (signed __int64)(v15 + v7) )
      {
        v18 = (_DWORD *)(v17 + 4 * v15 + 4);
        do
        {
          *v18 = -1;
          ++v18;
        }
        while ( (_DWORD *)(v17 + 4 * (v15 + v7)) != v18 );
        v3 = v15 + v7;
      }
LABEL_6:
      if ( v3 >= (signed __int64)v2 )
        goto LABEL_21;
      v57 = (const mbstate_t *)(v1 + 32);
      v61 = (signed __int64)&v2[-v3];
      pwc = (wchar_t *)&wc;
      continue;
    }
    break;
  }
  v45 = v3 + v12;
  v46 = v45;
  v58 = v45;
  v47 = *(_QWORD *)(v1 + 64);
  if ( v46 > v47 )
    goto LABEL_20;
  if ( *(_QWORD *)(v1 + 24)
    || (v55 = (void *)v14, v56 = malloc(8 * v47), v14 = (size_t)v55, v13 = s, (*(_QWORD *)(v1 + 24) = v56) != 0LL) )
  {
    if ( !*(_BYTE *)(v1 + 140) )
    {
      if ( v3 )
      {
        v48 = *(_QWORD *)(v1 + 24);
        v49 = 0LL;
        do
        {
          *(_QWORD *)(v48 + 8 * v49) = v49;
          ++v49;
        }
        while ( v3 != v49 );
      }
      *(_BYTE *)(v1 + 140) = 1;
    }
    srca = (char *)v14;
    memcpy((void *)(v3 + *(_QWORD *)(v1 + 8)), v13, v14);
    v50 = (wchar_t *)(*(_QWORD *)(v1 + 16) + 4 * v3);
    v51 = *(_QWORD *)(v1 + 24);
    *v50 = v11;
    v52 = (signed __int64 *)(v51 + 8 * v3);
    v53 = 1LL;
    *v52 = v4;
    if ( (unsigned __int64)srca > 1 )
    {
      do
      {
        v54 = v53;
        if ( v53 >= v7 )
          v54 = v7 - 1;
        v52[v53] = v4 + v54;
        v50[v53++] = -1;
      }
      while ( (char *)v53 != srca );
    }
    v2 = &srca[*(_QWORD *)(v1 + 88)] - v7;
    *(_QWORD *)(v1 + 88) = v2;
    if ( v4 < *(_QWORD *)(v1 + 96) )
      *(_QWORD *)(v1 + 104) += &srca[-v7];
    v3 = v58;
    if ( *(_QWORD *)(v1 + 64) <= (signed __int64)v2 )
      v2 = *(char **)(v1 + 64);
    v4 += v7;
    goto LABEL_6;
  }
  return 12LL;
}

signed __int64 __fastcall sub_407A80(__int64 a1, signed __int64 a2)
{
  unsigned __int64 v2; // rax@1
  signed __int64 v3; // rax@2
  __int64 v4; // rbx@2
  unsigned int v5; // ebp@6
  void *v6; // rdi@7
  void *v7; // rax@8
  signed int v8; // eax@10
  signed __int64 result; // rax@12
  __int64 v10; // rcx@15
  __int64 v11; // rsi@16
  __int64 v12; // rax@16

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 > 0xFFFFFFFFFFFFFFELL )
    return 12LL;
  v3 = 2 * v2;
  a2 = (signed int)a2;
  v4 = a1;
  if ( v3 > *(_QWORD *)(a1 + 88) )
    v3 = *(_QWORD *)(a1 + 88);
  if ( v3 >= a2 )
    a2 = v3;
  v5 = sub_406EE0(a1, a2);
  if ( v5 )
    return v5;
  v6 = *(void **)(a1 + 184);
  if ( !v6 )
    goto LABEL_10;
  v7 = realloc(v6, 8LL * *(_QWORD *)(v4 + 64) + 8);
  if ( !v7 )
    return 12LL;
  *(_QWORD *)(v4 + 184) = v7;
LABEL_10:
  v8 = *(_DWORD *)(v4 + 144);
  if ( !*(_BYTE *)(v4 + 136) )
  {
    if ( v8 > 1 )
    {
      sub_4072D0(v4);
      return 0LL;
    }
    v10 = *(_QWORD *)(v4 + 120);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v4 + 88);
      v12 = *(_QWORD *)(v4 + 48);
      if ( *(_QWORD *)(v4 + 64) <= v11 )
        v11 = *(_QWORD *)(v4 + 64);
      if ( v11 > v12 )
      {
        while ( 1 )
        {
          *(_BYTE *)(*(_QWORD *)(v4 + 8) + v12) = *(_BYTE *)(v10 + *(_BYTE *)(*(_QWORD *)(v4 + 40) + v12 + *(_QWORD *)v4));
          if ( v11 == ++v12 )
            break;
          v10 = *(_QWORD *)(v4 + 120);
        }
        *(_QWORD *)(v4 + 48) = v11;
        *(_QWORD *)(v4 + 56) = v11;
      }
      else
      {
        *(_QWORD *)(v4 + 48) = v12;
        *(_QWORD *)(v4 + 56) = v12;
      }
    }
    return v5;
  }
  if ( v8 <= 1 )
  {
    sub_407250(v4);
    result = 0LL;
  }
  else
  {
    result = sub_407480(v4);
  }
  return result;
}

signed __int64 __fastcall sub_407BD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  __int64 v3; // r12@1
  signed __int64 result; // rax@3
  __int64 v5; // rax@8

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 192);
  if ( v2 > a2 || v2 >= *(_QWORD *)(a1 + 88) )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 <= a2 && v5 < *(_QWORD *)(a1 + 88) )
    {
      result = sub_407A80(a1, (unsigned int)(a2 + 1));
      if ( (_DWORD)result )
        return result;
    }
  }
  else
  {
    result = sub_407A80(a1, (unsigned int)(a2 + 1));
    if ( (_DWORD)result )
      return result;
  }
  if ( v3 < a2 )
  {
    memset((void *)(*(_QWORD *)(a1 + 184) + 8 * v3 + 8), 0, 8 * (a2 - v3));
    *(_QWORD *)(a1 + 192) = a2;
  }
  return 0LL;
}

void __fastcall sub_407C60(__int64 a1)
{
  free(*(void **)a1);
  free(*(void **)(a1 + 24));
  free((void *)a1);
}

void __fastcall sub_407C80(__int64 a1)
{
  int v1; // eax@1

  v1 = *(_DWORD *)(a1 + 8) & 0x400FF;
  if ( v1 == 6 )
  {
    sub_407C60(*(_QWORD *)a1);
  }
  else if ( v1 == 3 )
  {
    free(*(void **)a1);
  }
}

__int64 __fastcall sub_407CB0(__int64 a1, __int64 a2)
{
  sub_407C80(a2 + 40);
  return 0LL;
}

signed __int64 __fastcall sub_407CD0(__int64 a1, __int64 a2, void *a3)
{
  __int64 v3; // rbx@1
  unsigned __int64 v4; // rdi@1
  unsigned __int64 v5; // rbp@1
  void *v6; // r12@2
  void *v7; // r13@2
  signed __int64 v8; // rax@3
  bool v9; // cl@3
  signed __int64 v10; // rax@5
  signed __int64 v11; // rax@5
  signed __int64 result; // rax@5
  signed __int64 v13; // r14@7
  void *v14; // rax@8
  size_t v15; // r13@9
  size_t v16; // rbp@9
  void *v17; // rax@9
  void *v18; // ST08_8@14
  void *v19; // [sp+0h] [bp-48h]@9
  void *ptr; // [sp+8h] [bp-40h]@8

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  if ( v4 >= v5 )
  {
    v13 = 2 * v5;
    if ( 2 * v5 <= 0xAAAAAAAAAAAAAAALL )
    {
      ptr = a3;
      v14 = realloc(*(void **)v3, 32 * v5);
      if ( v14 )
      {
        *(_QWORD *)v3 = v14;
        v15 = 16 * v5;
        v16 = 48 * v5;
        v6 = realloc(*(void **)(v3 + 24), v15);
        v19 = realloc(*(void **)(v3 + 32), v15);
        v7 = realloc(*(void **)(v3 + 40), v16);
        v17 = realloc(*(void **)(v3 + 48), v16);
        if ( v6 )
        {
          if ( v19 )
          {
            if ( v7 )
            {
              a3 = ptr;
              if ( v17 )
              {
                *(_QWORD *)(v3 + 24) = v6;
                v4 = *(_QWORD *)(v3 + 16);
                *(_QWORD *)(v3 + 32) = v19;
                *(_QWORD *)(v3 + 40) = v7;
                *(_QWORD *)(v3 + 48) = v17;
                *(_QWORD *)(v3 + 8) = v13;
                goto LABEL_3;
              }
            }
          }
        }
        v18 = v17;
        free(v6);
        free(v19);
        free(v7);
        free(v18);
      }
    }
    return -1LL;
  }
  v6 = *(void **)(v3 + 24);
  v7 = *(void **)(v3 + 40);
LABEL_3:
  v8 = *(_QWORD *)v3 + 16 * v4;
  *(_QWORD *)(v8 + 8) = a3;
  *(_QWORD *)v8 = a2;
  *(_DWORD *)(v8 + 8) = (unsigned int)a3 & 0xFFFC00FF;
  v9 = (_BYTE)a3 == 6;
  if ( (_BYTE)a3 == 5 )
    v9 = *(_DWORD *)(v3 + 180) > 1;
  *(_BYTE *)(v8 + 10) = 16 * v9 | *(_BYTE *)(v8 + 10) & 0xEF;
  *((_QWORD *)v6 + v4) = -1LL;
  v10 = (signed __int64)v7 + 24 * *(_QWORD *)(v3 + 16);
  *(_OWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  v11 = *(_QWORD *)(v3 + 48) + 24LL * *(_QWORD *)(v3 + 16);
  *(_OWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  result = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = result + 1;
  return result;
}

signed __int64 __fastcall sub_407EA0(__int64 a1, __int64 a2, __int16 a3)
{
  signed __int64 v3; // r13@1
  __int16 v4; // r12@1
  __int64 v5; // rbp@1
  signed __int64 result; // rax@1
  __int64 v7; // r8@2
  signed __int64 v8; // rsi@2
  unsigned int v9; // ecx@2
  unsigned int v10; // edx@2

  v3 = 16 * a2;
  v4 = a3;
  v5 = a2;
  result = sub_407CD0(a1, *(_QWORD *)(*(_QWORD *)a1 + 16 * a2), *(void **)(*(_QWORD *)a1 + 16 * a2 + 8));
  if ( result != -1 )
  {
    v7 = *(_QWORD *)a1;
    v8 = *(_QWORD *)a1 + 16 * result;
    v9 = ((v4 & 0x3FF) << 8) | *(_DWORD *)(v8 + 8) & 0xFFFC00FF;
    *(_DWORD *)(v8 + 8) = v9;
    v10 = v9 & 0xFFFC00FF | (((v4 & 0x3FF | (unsigned __int16)(*(_DWORD *)(v7 + v3 + 8) >> 8)) & 0x3FF) << 8);
    *(_DWORD *)(v8 + 8) = v10;
    *(_BYTE *)(v8 + 10) = (v10 >> 16) | 4;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v5;
  }
  return result;
}

int __fastcall sub_407F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r9@1
  __int64 v6; // r13@1
  unsigned int v7; // er12@1
  __int64 v8; // rbx@1
  __int64 v9; // rcx@2
  __int64 v10; // rdi@2
  __int64 v11; // r14@2
  signed __int64 v12; // rax@2
  signed __int64 v13; // r14@3
  signed __int64 v14; // r8@3
  __int64 v15; // rsi@3
  signed __int64 v16; // rbp@4
  __int64 v17; // rdi@4
  __int64 v18; // r15@4
  __int64 v19; // rdx@5
  __int64 v20; // rsi@5
  signed __int64 v21; // rax@5
  char v22; // al@14
  int result; // eax@15
  __int64 v24; // rax@19
  signed __int64 v25; // r15@22
  __int64 v26; // r9@22
  __int64 v27; // rax@24
  __int64 v28; // r13@24
  char v29; // dl@29
  __int64 v30; // [sp+0h] [bp-48h]@13
  __int64 v31; // [sp+8h] [bp-40h]@1

  v5 = a2;
  v6 = a3;
  v7 = a5;
  v8 = a1;
  v31 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD *)(v8 + 40);
      v11 = v6;
      v12 = *(_QWORD *)v8 + 16 * v5;
      if ( *(_BYTE *)(v12 + 8) == 4 )
      {
        v25 = 8 * v5;
        v16 = 24 * v6;
        v26 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v5);
        *(_QWORD *)(v10 + 24 * v6 + 8) = 0LL;
        v30 = v26;
        v6 = sub_407EA0(v8, v26, v7);
        if ( v6 == -1 )
          goto LABEL_15;
        *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v11) = *(_QWORD *)(*(_QWORD *)(v8 + 24) + v25);
        goto LABEL_14;
      }
      v13 = 24 * v5;
      v14 = v10 + 24 * v5;
      v15 = *(_QWORD *)(v14 + 8);
      if ( !v15 )
      {
        *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v6) = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v5);
        return 0;
      }
      v16 = 24 * v6;
      v17 = 24 * v6 + v10;
      v18 = **(_QWORD **)(v14 + 16);
      *(_QWORD *)(v17 + 8) = 0LL;
      if ( v15 == 1 )
        break;
      v19 = *(_QWORD *)(v8 + 16);
      v20 = v19 - 1;
      v21 = v9 + 16 * (v19 - 1);
      if ( *(_BYTE *)(v21 + 10) & 4 && v20 > 0 )
      {
        while ( *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v20) != v18 || v7 != ((*(_DWORD *)(v21 + 8) >> 8) & 0x3FF) )
        {
          v21 += -16 * (v19 - 1) + 16 * v19 - 32;
          --v20;
          if ( !(*(_BYTE *)(v21 + 10) & 4) || v20 <= 0 )
            goto LABEL_24;
        }
        if ( !(unsigned __int8)sub_406FF0(v17, v20) )
          goto LABEL_15;
      }
      else
      {
LABEL_24:
        v27 = sub_407EA0(v8, v18, v7);
        v28 = v27;
        if ( v27 == -1 || !(unsigned __int8)sub_406FF0(v16 + *(_QWORD *)(v8 + 40), v27) )
          goto LABEL_15;
        result = sub_407F40(v8, v18, v28, v31, v7);
        if ( result )
          return result;
      }
      v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 40) + v13 + 16) + 8LL);
      v6 = sub_407EA0(v8, v30, v7);
      if ( v6 == -1 )
        goto LABEL_15;
LABEL_14:
      v22 = (unsigned __int64)sub_406FF0(v16 + *(_QWORD *)(v8 + 40), v6);
      v5 = v30;
      if ( !v22 )
        goto LABEL_15;
    }
    if ( v5 == v31 && v5 != v6 )
      break;
    v7 |= (*(_DWORD *)(v12 + 8) >> 8) & 0x3FF;
    v24 = sub_407EA0(v8, v18, v7);
    v6 = v24;
    if ( v24 == -1 || !(unsigned __int8)sub_406FF0(v16 + *(_QWORD *)(v8 + 40), v24) )
      goto LABEL_15;
    v5 = v18;
  }
  v29 = (unsigned __int64)sub_406FF0(v17, v18);
  result = 0;
  if ( !v29 )
LABEL_15:
    result = 12;
  return result;
}

void __fastcall sub_4081D0(__int64 a1)
{
  __int64 v1; // rax@1

  free(*(void **)(a1 + 48));
  free(*(void **)(a1 + 72));
  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 != a1 + 8 )
  {
    free(*(void **)(v1 + 16));
    free(*(void **)(a1 + 80));
  }
  free(*(void **)(a1 + 24));
  free(*(void **)(a1 + 96));
  free(*(void **)(a1 + 88));
  free((void *)a1);
}

void __fastcall sub_408230(__int64 a1)
{
  free(*(void **)(a1 + 16));
  free(*(void **)(a1 + 24));
  if ( *(_BYTE *)(a1 + 139) )
    free(*(void **)(a1 + 8));
}

void __fastcall sub_408270(__int64 a1)
{
  __int64 v1; // r13@2
  __int64 v2; // r12@3
  __int64 v3; // rbx@4
  __int64 v4; // rbp@5
  __int64 v5; // rax@6

  if ( *(_QWORD *)(a1 + 232) > 0LL )
  {
    v1 = 0LL;
    do
    {
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v1);
      if ( *(_QWORD *)(v2 + 32) > 0LL )
      {
        v3 = 0LL;
        do
        {
          v4 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * v3++);
          free(*(void **)(v4 + 32));
          free((void *)v4);
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
    while ( *(_QWORD *)(a1 + 232) > v1 );
  }
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
}

signed __int64 __fastcall sub_4085B0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx@1
  signed __int64 v3; // rax@1
  __int64 v4; // rdx@2
  signed __int64 v5; // rcx@3
  signed __int64 v6; // rsi@3
  signed __int64 v7; // rdx@3
  signed __int64 result; // rax@5

  v2 = *(_QWORD *)(a1 + 48);
  v3 = a2 + 1;
  if ( a2 + 1 >= v2 || (v4 = *(_QWORD *)(a1 + 16), *(_DWORD *)(v4 + 4 * v3) != -1) )
  {
    result = 1LL;
  }
  else
  {
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
  }
  return result;
}

signed __int64 __fastcall sub_408600(__int64 a1, __int64 *a2, __int64 a3)
{
  signed __int64 result; // rax@1
  __int64 v4; // r8@2
  unsigned __int64 v5; // rdi@2
  unsigned __int64 v6; // rsi@2
  unsigned __int64 v7; // rcx@4
  unsigned __int64 v8; // rax@5

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
      result = v6 + 1;
  }
  return result;
}

int __fastcall sub_408670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15@1
  unsigned int v6; // er13@1
  __int64 i; // rbx@1
  signed __int64 v8; // rax@3
  signed __int64 v9; // rbx@6
  signed __int64 v10; // rdx@6
  __int64 v11; // rax@6
  __int64 v12; // rdx@7
  int result; // eax@9

  v5 = a4;
  v6 = a5;
  for ( i = a3; !sub_408600(*(_QWORD *)(a2 + 8), (__int64 *)(a2 + 16), i); i = *(_QWORD *)v12 )
  {
    v8 = *(_QWORD *)a1 + 16 * i;
    if ( *(_BYTE *)(v8 + 8) == v6 && *(_QWORD *)v8 == v5 )
    {
      if ( v6 == 9 && !(unsigned __int8)sub_406FF0(a2, i) )
        return 12;
      return 0;
    }
    if ( !(unsigned __int8)sub_406FF0(a2, i) )
      return 12;
    v9 = 24 * i;
    v10 = v9 + *(_QWORD *)(a1 + 40);
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 )
      return 0;
    v12 = *(_QWORD *)(v10 + 16);
    if ( v11 == 2 )
    {
      result = sub_408670(a1, a2, *(_QWORD *)(v12 + 8), v5, v6);
      if ( result )
        return result;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + v9 + 16);
    }
  }
  return 0;
}

void __fastcall sub_408770(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax@2

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

signed __int64 __fastcall sub_408890(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  signed __int64 v7; // rbx@1
  signed __int64 v8; // r15@1
  signed __int64 i; // rax@1
  __int64 v10; // rbp@3
  signed __int64 v11; // r10@3
  signed __int64 v12; // rax@11
  signed __int64 v13; // rbp@11
  __int64 v14; // r11@13
  signed __int64 v15; // r10@13
  __int64 v16; // r14@22
  _QWORD *v17; // rbp@22
  __int64 v18; // rsi@23
  signed __int64 v19; // r12@23
  int v20; // ebx@23
  signed __int64 result; // rax@24
  signed __int64 v22; // r13@4
  signed __int64 v23; // r14@14
  _QWORD *v24; // [sp+8h] [bp-70h]@1
  __int64 v25; // [sp+10h] [bp-68h]@22
  __int64 v26; // [sp+18h] [bp-60h]@22
  __int64 v27; // [sp+20h] [bp-58h]@22
  __int64 v28; // [sp+28h] [bp-50h]@22
  __int64 v29; // [sp+30h] [bp-48h]@22
  _QWORD *v30; // [sp+38h] [bp-40h]@22

  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 200);
  v24 = *(_QWORD **)(a1 + 152);
  for ( i = *(_QWORD *)(a1 + 200); v7 < i; i = v11 )
  {
    v10 = *(_QWORD *)(a1 + 216);
    v11 = (v7 + i) / 2;
    if ( a5 <= *(_QWORD *)(v10 + 40 * v11 + 8) )
    {
      while ( v7 < v11 )
      {
        v22 = (v7 + v11) / 2;
        if ( *(_QWORD *)(v10 + 40 * v22 + 8) < a5 )
          goto LABEL_26;
        v11 = (v7 + v11) / 2;
      }
      break;
    }
    v22 = (v7 + i) / 2;
    v11 = i;
LABEL_26:
    v7 = v22 + 1;
  }
  if ( v8 <= v7 )
  {
    v7 = -1LL;
  }
  else if ( a5 != *(_QWORD *)(*(_QWORD *)(a1 + 216) + 40 * v7 + 8) )
  {
    v7 = -1LL;
  }
  v12 = *(_QWORD *)(a1 + 200);
  v13 = 0LL;
  while ( v13 < v12 )
  {
    v14 = *(_QWORD *)(a1 + 216);
    v15 = (v13 + v12) / 2;
    if ( a7 <= *(_QWORD *)(v14 + 40 * v15 + 8) )
    {
      while ( v13 < v15 )
      {
        v23 = (v13 + v15) / 2;
        if ( *(_QWORD *)(v14 + 40 * v23 + 8) < a7 )
          goto LABEL_27;
        v15 = (v13 + v15) / 2;
      }
      break;
    }
    v23 = (v13 + v12) / 2;
    v15 = v12;
LABEL_27:
    v13 = v23 + 1;
    v12 = v15;
  }
  if ( v8 <= v13 )
  {
    v13 = -1LL;
  }
  else if ( a7 != *(_QWORD *)(*(_QWORD *)(a1 + 216) + 40 * v13 + 8) )
  {
    v13 = -1LL;
  }
  if ( *a2 <= 0LL )
  {
LABEL_29:
    result = 0LL;
  }
  else
  {
    v27 = a6;
    v16 = 0LL;
    v26 = a5;
    v25 = a4;
    v30 = a2;
    v28 = v7;
    v29 = v13;
    v17 = a3;
    while ( 1 )
    {
      v18 = *(_QWORD *)(*v17 + 8 * v16);
      v19 = *(_QWORD *)(*v24 + 16LL * *(_QWORD *)(*(_QWORD *)(a1 + 216) + 40 * v18));
      v20 = sub_406E70(a1, v18, v19, v25, v26, v28);
      if ( v20 != (unsigned int)sub_406E70(a1, *(_QWORD *)(*v17 + 8 * v16), v19, v27, a7, v29) )
        break;
      if ( ++v16 >= *v30 )
        goto LABEL_29;
    }
    result = 1LL;
  }
  return result;
}

int __fastcall sub_408AE0(__int64 a1, int (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v3; // rbp@1
  __int64 i; // rbx@1
  int result; // eax@3
  __int64 v6; // rdx@4
  __int64 v7; // rcx@4

  v3 = a3;
  for ( i = a1; ; i = v6 )
  {
    result = a2(v3, i);
    if ( result )
      break;
    v6 = *(_QWORD *)(i + 8);
    v7 = 0LL;
    if ( !v6 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(i + 16);
        if ( v6 != v7 )
        {
          if ( v6 )
            break;
        }
        v7 = i;
        if ( !*(_QWORD *)i )
          return result;
        i = *(_QWORD *)i;
      }
    }
  }
  return result;
}

signed __int64 __fastcall sub_408B40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@2
  __int64 v3; // r12@3
  __int64 v4; // rdx@3
  __int64 v5; // rbx@3
  signed __int64 v6; // rbp@5
  signed __int64 v7; // rax@5
  signed __int64 v8; // rdx@5
  signed __int64 v9; // rdi@5
  __int64 v10; // rcx@8
  __int64 v11; // rsi@8
  signed __int64 v12; // rax@12
  __int64 v13; // rcx@13
  signed __int64 v14; // r8@13
  signed __int64 v15; // rdx@13
  signed __int64 v16; // rax@14
  _QWORD *v17; // rdi@14
  __int64 v18; // rsi@15
  __int64 v19; // rcx@15
  char *v20; // r9@15
  __int64 v22; // rax@24
  signed __int64 v23; // rbp@24
  void *v24; // rax@24
  void *v25; // rdi@26
  const void *v26; // rsi@26

  if ( !a2 )
    return 0LL;
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 0LL;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = a1;
  if ( *(_QWORD *)a1 >= v4 + 2 * v2 )
  {
    if ( v4 )
      goto LABEL_5;
LABEL_26:
    v25 = *(void **)(a1 + 16);
    v26 = *(const void **)(a2 + 16);
    *(_QWORD *)(v5 + 8) = v2;
    memcpy(v25, v26, 8LL * *(_QWORD *)(v3 + 8));
    return 0LL;
  }
  v22 = *(_QWORD *)a1 + v2;
  v23 = 2 * v22;
  v24 = realloc(*(void **)(a1 + 16), 16 * v22);
  if ( !v24 )
    return 12LL;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v24;
  *(_QWORD *)a1 = v23;
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
      v10 = *(_QWORD *)(v5 + 16);
      v11 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8 * v7);
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
      *(_QWORD *)(v10 + 8 * --v6) = v11;
      v9 = ~v7;
      if ( ~v7 >= 0 )
        break;
    }
  }
  if ( v7 >= 0 )
  {
    v12 = v7 + 1;
    v6 -= v12;
    memcpy((void *)(*(_QWORD *)(v5 + 16) + 8 * v6), *(const void **)(v3 + 16), 8 * v12);
  }
  v13 = *(_QWORD *)(v5 + 8);
  v14 = v13 + 2LL * *(_QWORD *)(v3 + 8) - 1;
  v15 = v14 - v6 + 1;
  if ( v14 - v6 == -1 )
    return 0LL;
  v16 = v13 - 1;
  v17 = *(_QWORD **)(v5 + 16);
  *(_QWORD *)(v5 + 8) = v15 + v13;
  do
  {
    while ( 1 )
    {
      v18 = v17[v14];
      v19 = v17[v16];
      v20 = (char *)&v17[v16 + v15];
      if ( v18 <= v19 )
        break;
      --v14;
      *(_QWORD *)v20 = v18;
      if ( !--v15 )
        return 0LL;
    }
    *(_QWORD *)v20 = v19;
    --v16;
  }
  while ( v16 >= 0 );
  memcpy(v17, &v17[v6], 8 * v15);
  return 0LL;
}

int __fastcall sub_408D10(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r15@1
  __int64 v5; // r12@1
  signed __int64 v6; // rbp@1
  signed __int64 v7; // rbx@1
  __int64 v8; // rax@1
  __int64 v9; // rdx@2
  signed __int64 v10; // rax@2
  unsigned int v11; // er8@2
  __int64 v12; // rsi@4
  signed __int64 v13; // rax@4
  char v14; // r13@5
  __int64 v15; // r14@5
  int result; // eax@7
  signed __int64 v17; // rbx@11
  signed __int64 v18; // rax@11
  __int64 v19; // rcx@11
  __int64 v20; // rax@17
  __m128i v21; // xmm1@27
  char v22; // [sp+Ch] [bp-7Ch]@1
  __int128 v23; // [sp+10h] [bp-78h]@1
  void *v24; // [sp+20h] [bp-68h]@1
  __m128i v25; // [sp+30h] [bp-58h]@6
  void *ptr; // [sp+40h] [bp-48h]@6

  v4 = a2;
  v5 = a3;
  v6 = 24 * a3;
  v7 = 24 * a3 + *(_QWORD *)(a2 + 40);
  v22 = a4;
  v8 = *(_QWORD *)(v7 + 8);
  *((_QWORD *)&v23 + 1) = 0LL;
  *(_QWORD *)&v23 = v8 + 1;
  v24 = malloc(8 * (v8 + 1));
  if ( !v24 )
    return 12;
  v9 = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)(a2 + 48) + v6 + 8) = -1LL;
  v10 = v9 + 16 * v5;
  v11 = *(_DWORD *)(v10 + 8);
  if ( !(v11 & 0x3FF00) )
    goto LABEL_3;
  if ( !*(_QWORD *)(v7 + 8) )
    goto LABEL_24;
  if ( *(_BYTE *)(v9 + 16LL * **(_QWORD **)(v7 + 16) + 10) & 4 )
  {
LABEL_3:
    if ( *(_BYTE *)(v10 + 8) & 8 )
    {
      v12 = *(_QWORD *)(a2 + 40);
      v13 = v12 + v6;
      if ( *(_QWORD *)(v12 + v6 + 8) > 0LL )
      {
        v14 = 0;
        v15 = 0LL;
        do
        {
          while ( 1 )
          {
            v17 = 24LL * *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8 * v15);
            v18 = v17 + *(_QWORD *)(v4 + 48);
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
            result = sub_408D10(&v25, v4);
            if ( result )
              return result;
          }
          result = sub_408B40((__int64)&v23, (__int64)&v25);
          if ( result )
            return result;
          if ( !*(_QWORD *)(*(_QWORD *)(v4 + 48) + v17 + 8) )
          {
            v14 = 1;
            free(ptr);
          }
          v12 = *(_QWORD *)(v4 + 40);
          ++v15;
          v13 = v12 + v6;
        }
        while ( *(_QWORD *)(v12 + v6 + 8) > v15 );
LABEL_16:
        if ( (unsigned __int8)sub_406FF0((__int64)&v23, v5) )
        {
          v20 = *(_QWORD *)(v4 + 48);
          if ( v22 != 1 && v14 )
          {
            *(_QWORD *)(v20 + v6 + 8) = 0LL;
LABEL_27:
            v21 = _mm_load_si128((const __m128i *)&v23);
            a1[1].m128i_i64[0] = (__int64)v24;
            result = 0;
            *a1 = v21;
            return result;
          }
LABEL_26:
          *(__m128i *)(v20 + v6) = _mm_load_si128((const __m128i *)&v23);
          *(_QWORD *)(v20 + v6 + 16) = v24;
          goto LABEL_27;
        }
        return 12;
      }
    }
LABEL_24:
    if ( (unsigned __int8)sub_406FF0((__int64)&v23, v5) )
    {
      v20 = *(_QWORD *)(v4 + 48);
      goto LABEL_26;
    }
    return 12;
  }
  result = sub_407F40(a2, v5, v5, v5, (v11 >> 8) & 0x3FF);
  if ( !result )
  {
    v10 = 16 * v5 + *(_QWORD *)a2;
    goto LABEL_3;
  }
  return result;
}

signed __int64 __fastcall sub_408F70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14@1
  __int64 v5; // rbp@1
  unsigned int v6; // ebx@1
  __int64 v7; // r12@1
  __int64 v8; // r12@3
  __int64 v9; // rdx@4
  __int64 v10; // rsi@4
  __int64 v11; // r9@4
  __int64 v12; // r11@5
  __int64 v13; // rcx@5
  signed __int64 v14; // rax@7
  unsigned int v15; // eax@10
  __m128i v16; // xmm0@12
  signed __int64 result; // rax@12
  unsigned int v18; // ST0C_4@14
  __int128 v19; // [sp+10h] [bp-48h]@1
  void *ptr; // [sp+20h] [bp-38h]@1

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = *(_QWORD *)(a2 + 8);
  *((_QWORD *)&v19 + 1) = 0LL;
  *(_QWORD *)&v19 = v7;
  ptr = malloc(8 * v7);
  if ( ptr )
  {
    if ( v7 <= 0 )
    {
LABEL_12:
      free(*(void **)(v4 + 16));
      v16 = _mm_load_si128((const __m128i *)&v19);
      *(_QWORD *)(v4 + 16) = ptr;
      result = 0LL;
      *(__m128i *)v4 = v16;
      return result;
    }
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8 * v8);
      v10 = *(_QWORD *)(a1 + 48) + 24 * v9;
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 <= 0 )
        goto LABEL_13;
      v12 = *(_QWORD *)(v10 + 16);
      v13 = 0LL;
      while ( 1 )
      {
        v14 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(v12 + 8 * v13);
        if ( v6 == *(_BYTE *)(v14 + 8) && v5 == *(_QWORD *)v14 )
          break;
        if ( v11 == ++v13 )
          goto LABEL_13;
      }
      if ( *(_QWORD *)(v12 + 8 * v13) == -1LL )
      {
LABEL_13:
        v15 = sub_408B40((__int64)&v19, v10);
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
        v15 = sub_408670(a1, (__int64)&v19, v9, v5, v6);
        if ( v15 )
          goto LABEL_14;
      }
      if ( *(_QWORD *)(v4 + 8) <= ++v8 )
        goto LABEL_12;
    }
  }
  return 12LL;
}

signed __int64 __fastcall sub_4090B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10@1
  signed __int64 result; // rax@1
  __int64 v5; // r8@2
  __int64 v6; // r12@3
  __int64 v7; // rbp@3
  __int64 v8; // rbx@3
  __int64 v9; // rcx@3
  __int64 v10; // r13@3
  void *v11; // rdi@3
  __int64 v12; // r13@4
  __int64 v13; // r11@4
  __int64 v14; // rsi@4
  signed __int64 v15; // rax@4
  signed __int64 v16; // r10@4
  __int64 v17; // rsi@4
  signed __int64 v18; // rcx@4
  __int64 v19; // r8@4
  __int64 v20; // rdx@4
  bool v21; // sf@5
  unsigned __int8 v22; // of@5
  __int64 v23; // r9@12
  __int64 v24; // rcx@21
  __int64 v25; // rdx@21
  signed __int64 v26; // rax@21
  signed __int64 v27; // r9@21
  __int64 v28; // rdx@21
  __int64 v29; // r8@23
  __int64 v30; // rcx@23
  char *v31; // r10@23
  size_t v32; // rdx@25
  __int64 v33; // r13@31
  void *v34; // rax@31

  v3 = *(_QWORD *)(a2 + 8);
  result = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a3 + 8);
    if ( v5 )
    {
      v6 = a3;
      v7 = a2;
      v8 = a1;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)a1;
      v11 = *(void **)(a1 + 16);
      if ( v3 + v5 + v9 > v10 )
      {
        v33 = v3 + v5 + v10;
        v34 = realloc(v11, 8 * v33);
        v11 = v34;
        if ( !v34 )
          return 12LL;
        v9 = *(_QWORD *)(v8 + 8);
        v3 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(v8 + 16) = v34;
        *(_QWORD *)v8 = v33;
        v5 = *(_QWORD *)(v6 + 8);
      }
      v12 = *(_QWORD *)(a2 + 16);
      v13 = *(_QWORD *)(v6 + 16);
      v14 = v9 + v3;
      v15 = v5 - 1;
      v16 = v3 - 1;
      v17 = v5 + v14;
      v18 = v9 - 1;
      v19 = *(_QWORD *)(v12 + 8 * v16);
      v20 = *(_QWORD *)(v13 + 8 * v15);
      while ( 1 )
      {
        v22 = __OFSUB__(v19, v20);
        v21 = v19 - v20 < 0;
        if ( v19 == v20 )
          break;
LABEL_6:
        if ( v21 ^ v22 )
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
          v23 = *((_QWORD *)v11 + v18);
          if ( v23 <= v19 )
            break;
          if ( --v18 == -1 )
            goto LABEL_14;
        }
        if ( v23 != v19 )
LABEL_14:
          *((_QWORD *)v11 + --v17) = v19;
        if ( --v16 < 0 )
          break;
        if ( --v15 < 0 )
          break;
        v19 = *(_QWORD *)(v12 + 8 * v16);
LABEL_8:
        v20 = *(_QWORD *)(v13 + 8 * v15);
        v22 = __OFSUB__(v19, v20);
        v21 = v19 - v20 < 0;
        if ( v19 != v20 )
          goto LABEL_6;
      }
LABEL_21:
      v24 = *(_QWORD *)(v8 + 8);
      v25 = *(_QWORD *)(v6 + 8) + v24 + *(_QWORD *)(v7 + 8);
      v26 = v24 - 1;
      v27 = v25 - 1;
      v28 = v25 - v17;
      *(_QWORD *)(v8 + 8) = v28 + v24;
      if ( v28 <= 0 || v26 < 0 )
      {
        v32 = 8 * v28;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v29 = *((_QWORD *)v11 + v27);
            v30 = *((_QWORD *)v11 + v26);
            v31 = (char *)v11 + 8 * (v26 + v28);
            if ( v29 <= v30 )
              break;
            --v27;
            *(_QWORD *)v31 = v29;
            if ( !--v28 )
            {
              v11 = *(void **)(v8 + 16);
              v32 = 0LL;
              goto LABEL_29;
            }
          }
          --v26;
          *(_QWORD *)v31 = v30;
        }
        while ( v26 != -1 );
        v32 = 8 * v28;
        v11 = *(void **)(v8 + 16);
      }
LABEL_29:
      memcpy(v11, (char *)v11 + 8 * v17, v32);
      result = 0LL;
    }
  }
  return result;
}

char *__fastcall sub_409270(char **a1, signed int *a2, char **a3, char **a4, const __m128i *a5)
{
  char **v5; // rbx@1
  __int64 v6; // rdi@1
  char *v7; // r10@2
  signed int v8; // eax@2
  signed __int64 v9; // r9@2
  char *result; // rax@3
  __m128i *v11; // rdi@3
  char *v12; // rax@9
  char **v13; // [sp+8h] [bp-20h]@8
  char **v14; // [sp+10h] [bp-18h]@8
  const __m128i *v15; // [sp+18h] [bp-10h]@8

  v5 = a1;
  v6 = *a2;
  if ( (_DWORD)v6 == 15 )
  {
    v15 = a5;
    v14 = a4;
    v13 = a3;
    v7 = (char *)malloc(0x3C8uLL);
    if ( !v7 )
      return 0LL;
    v12 = *v5;
    v9 = 8LL;
    *v5 = v7;
    v6 = 0LL;
    a5 = v15;
    a4 = v14;
    a3 = v13;
    *(_QWORD *)v7 = v12;
    v8 = 1;
  }
  else
  {
    v7 = *v5;
    v8 = v6 + 1;
    v9 = (v6 << 6) + 8;
  }
  *a2 = v8;
  result = &v7[v9];
  v11 = (__m128i *)&v7[64 * v6];
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

char *__fastcall sub_409350(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx@1
  __int64 v3; // rbp@1
  __int64 *v4; // r14@1
  char *result; // rax@3
  _QWORD *v6; // rdx@5
  _QWORD *v7; // rax@7
  __int64 v8; // [sp+8h] [bp-30h]@1

  v2 = a1;
  v3 = *a1;
  v4 = &v8;
  while ( 1 )
  {
    result = sub_409270((char **)(a2 + 112), (signed int *)(a2 + 128), 0LL, 0LL, (const __m128i *)(v2 + 5));
    *v4 = (__int64)result;
    if ( !result )
      break;
    *(_QWORD *)result = v3;
    v3 = *v4;
    *(_BYTE *)(v3 + 50) |= 4u;
    if ( v2[1] )
    {
      v4 = (__int64 *)(v3 + 8);
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      v6 = 0LL;
      while ( 1 )
      {
        v7 = (_QWORD *)v2[2];
        if ( v7 )
        {
          if ( v7 != v6 )
            break;
        }
        v3 = *(_QWORD *)v3;
        v6 = v2;
        if ( !*v2 )
          return (char *)v8;
        v2 = (_QWORD *)*v2;
      }
      v4 = (__int64 *)(v3 + 16);
      v2 = (_QWORD *)v2[2];
    }
  }
  return result;
}

char *__fastcall sub_409400(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12@1
  __int64 v4; // rbx@1
  char *v5; // rbp@1
  signed __int64 v6; // rax@3
  __int64 v7; // rdx@4
  char **v8; // r13@5
  const __m128i *v9; // r14@5
  signed int *v10; // rsi@5
  char **v11; // rdi@5
  char *v12; // rbx@5
  char *v13; // r15@5
  char *v14; // r11@6
  __int64 v15; // rax@11
  char v16; // cl@11
  signed int *v18; // rsi@13
  char **v19; // rdi@13
  signed int *v20; // rsi@14
  char **v21; // rdi@14
  signed int *v22; // [sp+8h] [bp-60h]@5
  char *v23; // [sp+10h] [bp-58h]@7
  _DWORD *v24; // [sp+18h] [bp-50h]@1
  char v25; // [sp+20h] [bp-48h]@5
  char v26; // [sp+28h] [bp-40h]@5

  v3 = a3;
  v4 = *(_QWORD *)a2;
  v5 = *(char **)(a3 + 8);
  v24 = a1;
  if ( *(_BYTE *)(a2 + 56) & 0x10 )
  {
    if ( !v5 )
    {
      v8 = (char **)(v4 + 112);
      v9 = (const __m128i *)&v25;
      v26 = 8;
      v22 = (signed int *)(v4 + 128);
      v18 = (signed int *)(v4 + 128);
      v19 = (char **)(v4 + 112);
      v12 = sub_409270((char **)(v4 + 112), (signed int *)(v4 + 128), 0LL, 0LL, (const __m128i *)&v25);
      v26 = 9;
      v14 = sub_409270(v19, v18, 0LL, 0LL, (const __m128i *)&v25);
      v13 = v14;
      goto LABEL_7;
    }
    v6 = *(_QWORD *)(a3 + 40);
    if ( v6 > 63 )
      return v5;
    v7 = *(_QWORD *)(v4 + 160);
    if ( !_bittest64(&v7, v6) )
      return v5;
    v8 = (char **)(v4 + 112);
    v9 = (const __m128i *)&v25;
    v26 = 8;
    v22 = (signed int *)(v4 + 128);
    v10 = (signed int *)(v4 + 128);
    v11 = (char **)(v4 + 112);
    v12 = sub_409270((char **)(v4 + 112), (signed int *)(v4 + 128), 0LL, 0LL, (const __m128i *)&v25);
    v26 = 9;
    v13 = sub_409270(v11, v10, 0LL, 0LL, (const __m128i *)&v25);
  }
  else
  {
    v8 = (char **)(v4 + 112);
    v9 = (const __m128i *)&v25;
    v26 = 8;
    v22 = (signed int *)(v4 + 128);
    v20 = (signed int *)(v4 + 128);
    v21 = (char **)(v4 + 112);
    v12 = sub_409270((char **)(v4 + 112), (signed int *)(v4 + 128), 0LL, 0LL, (const __m128i *)&v25);
    v26 = 9;
    v13 = sub_409270(v21, v20, 0LL, 0LL, (const __m128i *)&v25);
    v14 = v13;
    if ( !v5 )
      goto LABEL_7;
  }
  v26 = 16;
  v14 = sub_409270(v8, v22, (char **)v5, (char **)v13, v9);
LABEL_7:
  v26 = 16;
  v23 = v14;
  v5 = sub_409270(v8, v22, (char **)v12, (char **)v14, v9);
  if ( v5 && v23 && v12 && v13 )
  {
    v15 = *(_QWORD *)(v3 + 40);
    *((_QWORD *)v13 + 5) = v15;
    *((_QWORD *)v12 + 5) = v15;
    v16 = *(_BYTE *)(v3 + 50) & 8;
    v13[50] = v16 | v13[50] & 0xF7;
    v12[50] = v16 | v12[50] & 0xF7;
  }
  else
  {
    v5 = 0LL;
    *v24 = 12;
  }
  return v5;
}

__int64 __fastcall sub_409620(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx@1
  __int64 v3; // rdx@3
  char *v5; // rax@6
  char *v6; // rax@8
  unsigned int v7; // [sp+Ch] [bp-1Ch]@1

  v2 = *(_QWORD *)(a2 + 8);
  v7 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 48) == 17 )
    {
      v5 = sub_409400(&v7, a1, v2);
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
      v6 = sub_409400(&v7, a1, v3);
      *(_QWORD *)(a2 + 16) = v6;
      if ( v6 )
        *(_QWORD *)v6 = a2;
    }
  }
  return v7;
}

signed __int64 __fastcall sub_4096A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx@1
  size_t v3; // rbx@2
  void *v4; // rax@2
  signed __int64 result; // rax@3

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
      result = 0LL;
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

signed __int64 __fastcall sub_409720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12@2
  __int64 v4; // r15@4
  __int64 v5; // r13@5
  __int64 v6; // rbp@5
  __int64 v7; // rbx@5
  void *v8; // rax@5
  void *v9; // rdi@6
  __int64 v10; // r10@6
  __int64 v11; // r14@6
  __int64 v12; // rcx@6
  __int64 v13; // rdx@6
  const void *v14; // rsi@9
  __int64 v15; // r9@10
  __int64 v16; // rsi@10
  __int64 v17; // r8@10
  signed __int64 result; // rax@15
  __int64 v19; // rdx@19
  char *v20; // rdi@20
  __int64 v21; // r12@22

  if ( !a2 )
  {
LABEL_13:
    if ( !a3 || *(_QWORD *)(a3 + 8) <= 0LL )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      result = 0LL;
      *(_OWORD *)a1 = 0LL;
      return result;
    }
    a2 = a3;
    return sub_4096A0(a1, a2);
  }
  v3 = *(_QWORD *)(a2 + 8);
  if ( !a3 || v3 <= 0 )
  {
    if ( v3 > 0 )
      return sub_4096A0(a1, a2);
    goto LABEL_13;
  }
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 <= 0 )
    return sub_4096A0(a1, a2);
  v5 = a1;
  v6 = a3;
  v7 = a2;
  *(_QWORD *)a1 = v3 + v4;
  v8 = malloc(8 * (v3 + v4));
  *(_QWORD *)(a1 + 16) = v8;
  if ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)(a2 + 16);
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      v14 = (const void *)(v10 + 8 * v13);
      if ( v4 <= v12 )
      {
        v21 = v3 - v13;
        v11 += v21;
        memcpy(v9, v14, 8 * v21);
        goto LABEL_21;
      }
      v15 = *(_QWORD *)(v6 + 16);
      v16 = *(_QWORD *)v14;
      ++v11;
      v17 = *(_QWORD *)(v15 + 8 * v12);
      if ( v16 <= v17 )
      {
        *(_QWORD *)v9 = v16;
        ++v13;
        v12 += v16 == v17;
      }
      else
      {
        ++v12;
        *(_QWORD *)v9 = v17;
      }
      v3 = *(_QWORD *)(v7 + 8);
      v9 = (char *)v9 + 8;
    }
    while ( v13 < v3 );
    v19 = *(_QWORD *)(v6 + 8);
    if ( v12 < v19 )
    {
      v20 = (char *)v8 + 8 * v11;
      v11 += v19 - v12;
      memcpy(v20, (const void *)(v15 + 8 * v12), 8 * (v19 - v12));
    }
LABEL_21:
    *(_QWORD *)(v5 + 8) = v11;
    result = 0LL;
  }
  else
  {
    result = 12LL;
  }
  return result;
}

__int64 __fastcall sub_4098B0(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r10@1
  __int64 v5; // r12@2
  _QWORD *v6; // rax@3
  signed __int64 v7; // r10@3
  __int64 v8; // rbp@5
  char v9; // r15@5
  _QWORD *v10; // r13@5
  signed __int64 v11; // rax@5
  __int64 v12; // r11@5
  __int64 v13; // rbx@6
  __int64 v14; // r10@6
  unsigned int v15; // er9@6
  __int64 v16; // r14@8
  char *v18; // rax@12
  char v19; // cl@14
  bool v20; // zf@14
  bool v21; // sf@14
  __int64 v22; // r10@15
  __int64 v23; // r12@15
  __int64 v24; // r14@15
  __int64 v25; // r15@15
  char v26; // bp@15
  signed __int64 v27; // rax@16
  int v28; // esi@16
  __int16 v29; // bx@16
  int v30; // edi@16
  int v31; // eax@18
  __int64 v32; // rdx@30
  __int64 v33; // rax@31
  void *v34; // rax@43
  signed __int64 v35; // [sp+0h] [bp-58h]@13
  __int64 *v36; // [sp+8h] [bp-50h]@15
  __int64 v37; // [sp+10h] [bp-48h]@15
  _DWORD *v38; // [sp+18h] [bp-40h]@5

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
    v7 = (signed __int64)&v6[v4];
    do
    {
      v5 += *v6;
      ++v6;
    }
    while ( (_QWORD *)v7 != v6 );
  }
  v8 = a3;
  v9 = a4;
  v10 = (_QWORD *)a2;
  v38 = a1;
  v11 = *(_QWORD *)(a2 + 64) + 24 * (v5 & *(_QWORD *)(a2 + 136));
  v12 = *(_QWORD *)v11;
  if ( *(_QWORD *)v11 <= 0LL )
  {
LABEL_12:
    v18 = (char *)calloc(0x70uLL, 1uLL);
    v16 = (__int64)v18;
    if ( !v18 )
      goto LABEL_38;
    v35 = (signed __int64)(v18 + 8);
    if ( (unsigned int)sub_4096A0((__int64)(v18 + 8), v8) )
    {
      free((void *)v16);
LABEL_38:
      v16 = 0LL;
      *v38 = 12;
      return v16;
    }
    v19 = v9;
    v20 = *(_QWORD *)(v8 + 8) == 0LL;
    v21 = *(_QWORD *)(v8 + 8) < 0;
    *(_BYTE *)(v16 + 104) = v9 & 0xF | *(_BYTE *)(v16 + 104) & 0xF0;
    *(_QWORD *)(v16 + 80) = v35;
    if ( v21 || v20 )
    {
LABEL_36:
      if ( (unsigned int)sub_407120((__int64)v10, v16, v5) )
      {
        sub_4081D0(v16);
        goto LABEL_38;
      }
      return v16;
    }
    v37 = v5;
    v22 = 0LL;
    v36 = (__int64 *)(v16 + 24);
    v23 = v16;
    v24 = 0LL;
    v25 = v8;
    v26 = v19;
    while ( 1 )
    {
      v27 = *v10 + 16LL * *(_QWORD *)(*(_QWORD *)(v25 + 16) + 8 * v24);
      v28 = *(_BYTE *)(v27 + 8);
      v29 = (*(_DWORD *)(v27 + 8) >> 8) & 0x3FF;
      v30 = (*(_DWORD *)(v27 + 8) >> 8) & 0x3FF;
      if ( v28 == 1 && !v30 )
        goto LABEL_34;
      v31 = (unsigned __int8)(*(_BYTE *)(v23 + 104) & 0xDF) | 32
                                                            * (((unsigned __int8)(*(_BYTE *)(v23 + 104) >> 5) | (unsigned __int8)(*(_BYTE *)(v27 + 10) >> 4)) & 1);
      *(_BYTE *)(v23 + 104) = v31;
      if ( v28 == 2 )
      {
        *(_BYTE *)(v23 + 104) = v31 | 0x10;
      }
      else if ( v28 == 4 )
      {
        *(_BYTE *)(v23 + 104) = v31 | 0x40;
      }
      if ( !v30 )
        goto LABEL_34;
      if ( v35 == *(_QWORD *)(v23 + 80) )
      {
        v34 = malloc(0x18uLL);
        *(_QWORD *)(v23 + 80) = v34;
        if ( !v34 )
        {
          sub_4081D0(v23);
          goto LABEL_38;
        }
        if ( (unsigned int)sub_4096A0((__int64)v34, v25) )
          goto LABEL_38;
        *(_BYTE *)(v23 + 104) |= 0x80u;
        v22 = 0LL;
      }
      if ( v29 & 1 )
      {
        if ( !(v26 & 1) || v29 & 2 )
          goto LABEL_30;
      }
      else if ( v29 & 2 && v26 & 1 )
      {
        goto LABEL_30;
      }
      if ( v29 & 0x10 && !(v26 & 2) || v29 & 0x40 && !(v26 & 4) )
      {
LABEL_30:
        v32 = v24 - v22;
        if ( v24 - v22 >= 0 )
        {
          v33 = *(_QWORD *)(v23 + 16);
          if ( v32 < v33 )
          {
            *(_QWORD *)(v23 + 16) = v33 - 1;
            sub_408770((_QWORD *)(v23 + 16), v36, v32);
          }
        }
        ++v22;
      }
LABEL_34:
      if ( ++v24 >= *(_QWORD *)(v25 + 8) )
      {
        v16 = v23;
        v5 = v37;
        goto LABEL_36;
      }
    }
  }
  v13 = *(_QWORD *)(v11 + 16);
  v14 = 0LL;
  v15 = a4;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v13 + 8 * v14);
    if ( *(_QWORD *)v16 == v5 && (*(_BYTE *)(v16 + 104) & 0xF) == v15 && sub_406A50(*(_QWORD *)(v16 + 80), v8) )
      return v16;
    if ( ++v14 == v12 )
      goto LABEL_12;
  }
}

__int64 __fastcall sub_409BB0(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1
  _QWORD *v4; // rax@3
  signed __int64 v5; // rcx@3
  __int64 v6; // r14@5
  __int64 *v7; // r12@5
  _DWORD *v8; // r13@5
  signed __int64 v9; // rax@5
  __int64 v10; // r10@5
  __int64 v11; // r11@6
  __int64 v12; // r9@6
  __int64 v13; // rbx@7
  char *v14; // rax@10
  signed __int64 v15; // r15@11
  __int64 v16; // rax@12
  _QWORD *v17; // rsi@13
  __int64 v18; // r8@13
  signed __int64 v19; // r9@13
  unsigned __int8 v20; // r10@14
  int v21; // edx@14
  signed __int64 v22; // rax@18
  int v23; // edi@18

  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 )
  {
    *a1 = 0;
    return 0LL;
  }
  if ( v3 > 0 )
  {
    v4 = *(_QWORD **)(a3 + 16);
    v5 = (signed __int64)&v4[v3];
    do
    {
      v3 += *v4;
      ++v4;
    }
    while ( (_QWORD *)v5 != v4 );
  }
  v6 = a3;
  v7 = (__int64 *)a2;
  v8 = a1;
  v9 = *(_QWORD *)(a2 + 64) + 24 * (v3 & *(_QWORD *)(a2 + 136));
  v10 = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 <= 0LL )
  {
LABEL_10:
    v14 = (char *)calloc(0x70uLL, 1uLL);
    v13 = (__int64)v14;
    if ( v14 )
    {
      v15 = (signed __int64)(v14 + 8);
      if ( (unsigned int)sub_4096A0((__int64)(v14 + 8), v6) )
      {
        free((void *)v13);
      }
      else
      {
        v16 = *(_QWORD *)(v6 + 8);
        *(_QWORD *)(v13 + 80) = v15;
        if ( v16 > 0 )
        {
          v17 = *(_QWORD **)(v6 + 16);
          v18 = *v7;
          v19 = (signed __int64)&v17[v16];
          do
          {
            while ( 1 )
            {
              v22 = v18 + 16LL * *v17;
              v23 = *(_BYTE *)(v22 + 8);
              if ( v23 == 1 )
                break;
              v20 = *(_BYTE *)(v13 + 104) >> 5;
              v21 = (unsigned __int8)(*(_BYTE *)(v13 + 104) & 0xDF) | 32
                                                                    * ((v20 | (unsigned __int8)(*(_BYTE *)(v22 + 10) >> 4)) & 1);
              *(_BYTE *)(v13 + 104) = *(_BYTE *)(v13 + 104) & 0xDF | 32 * ((v20 | (*(_BYTE *)(v22 + 10) >> 4)) & 1);
              if ( v23 == 2 )
              {
                *(_BYTE *)(v13 + 104) = v21 | 0x10;
              }
              else if ( v23 == 4 )
              {
                *(_BYTE *)(v13 + 104) = v21 | 0x40;
              }
              else if ( v23 == 12 || *(_DWORD *)(v22 + 8) & 0x3FF00 )
              {
                goto LABEL_21;
              }
LABEL_17:
              ++v17;
              if ( (_QWORD *)v19 == v17 )
                goto LABEL_22;
            }
            if ( !(*(_DWORD *)(v22 + 8) & 0x3FF00) )
              goto LABEL_17;
            *(_BYTE *)(v13 + 104) = *(_BYTE *)(v13 + 104) & 0xDF | 32
                                                                 * (((*(_BYTE *)(v13 + 104) >> 5) | (*(_BYTE *)(v22 + 10) >> 4)) & 1);
LABEL_21:
            ++v17;
            *(_BYTE *)(v13 + 104) |= 0x80u;
          }
          while ( (_QWORD *)v19 != v17 );
        }
LABEL_22:
        if ( !(unsigned int)sub_407120((__int64)v7, v13, v3) )
          return v13;
        sub_4081D0(v13);
      }
    }
    *v8 = 12;
    return 0LL;
  }
  v11 = *(_QWORD *)(v9 + 16);
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v11 + 8 * v12);
    if ( *(_QWORD *)v13 == v3 && sub_406A50(v13 + 8, v6) )
      return v13;
    if ( v10 == ++v12 )
      goto LABEL_10;
  }
}

signed __int64 __fastcall sub_409DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14@2
  __int64 v5; // r13@2
  __int64 v6; // r12@2
  __int64 v7; // rbp@2
  __int64 v8; // rbx@2
  signed __int64 result; // rax@4
  __int64 v10; // rax@5
  void *v11; // rdi@5
  __int64 v12; // rsi@7
  __int64 v13; // rdx@7
  unsigned int v14; // [sp+0h] [bp-4Ch]@4
  char v15; // [sp+4h] [bp-48h]@4
  void *ptr; // [sp+14h] [bp-38h]@5

  if ( a4 <= 0 )
  {
    result = 0LL;
  }
  else
  {
    v4 = a1;
    v5 = a3;
    v6 = a4;
    v7 = a2;
    v8 = 0LL;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v7 + 8 * v8);
        v13 = *(_QWORD *)(v5 + 8 * v8);
        if ( v12 )
          break;
        *(_QWORD *)(v7 + 8 * v8++) = v13;
        if ( v6 == v8 )
          goto LABEL_9;
      }
      if ( v13 )
      {
        result = sub_409720((__int64)&v15, v12 + 8, v13 + 8);
        v14 = result;
        if ( (_DWORD)result )
          return result;
        v10 = sub_409BB0(&v14, v4, (__int64)&v15);
        v11 = ptr;
        *(_QWORD *)(v7 + 8 * v8) = v10;
        free(v11);
        result = v14;
        if ( v14 )
          return result;
      }
      ++v8;
    }
    while ( v6 != v8 );
LABEL_9:
    result = 0LL;
  }
  return result;
}

signed __int64 __fastcall sub_409E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  signed __int64 v5; // r11@1
  signed __int64 i; // rax@1
  __int64 v7; // r12@3
  signed __int64 v8; // r9@3
  __int64 v9; // rax@9
  __int64 v10; // rbx@11
  __int64 v11; // r13@11
  __int64 v12; // rbp@11
  signed __int64 v13; // r15@12
  signed __int64 v14; // r10@13
  __int64 v15; // r9@14
  char v16; // al@15
  signed __int64 v17; // r10@17
  _QWORD *v18; // ST08_8@18
  __int64 v19; // rax@18
  void *v20; // rdi@18
  __int64 v21; // r9@20
  __int64 v22; // r10@20
  __int64 v23; // r14@21
  __int64 v24; // r14@22
  void *v25; // rax@23
  signed int v26; // eax@24
  unsigned int v27; // er14@25
  unsigned int v28; // er15@25
  signed __int64 result; // rax@25
  void *v30; // rax@27
  signed __int64 v31; // rbx@4
  __int64 *v32; // [sp+0h] [bp-98h]@11
  __int64 v33; // [sp+8h] [bp-90h]@13
  signed __int64 v34; // [sp+10h] [bp-88h]@27
  signed __int64 v35; // [sp+18h] [bp-80h]@9
  __int64 v36; // [sp+20h] [bp-78h]@11
  unsigned int v37; // [sp+2Ch] [bp-6Ch]@11
  unsigned int v38; // [sp+3Ch] [bp-5Ch]@15
  __int64 v39; // [sp+40h] [bp-58h]@15
  __int64 v40; // [sp+48h] [bp-50h]@23
  void *ptr; // [sp+50h] [bp-48h]@18

  v5 = 0LL;
  for ( i = *(_QWORD *)(a1 + 200); v5 < i; i = v8 )
  {
    v7 = *(_QWORD *)(a1 + 216);
    v8 = (v5 + i) / 2;
    if ( a3 <= *(_QWORD *)(v7 + 40 * v8 + 8) )
    {
      while ( v8 > v5 )
      {
        v31 = (v8 + v5) / 2;
        if ( a3 > *(_QWORD *)(v7 + 40 * v31 + 8) )
          goto LABEL_29;
        v8 = (v8 + v5) / 2;
      }
      break;
    }
    v31 = (v5 + i) / 2;
    v8 = i;
LABEL_29:
    v5 = v31 + 1;
  }
  if ( *(_QWORD *)(a1 + 200) <= v5 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 216);
  v35 = 40 * v5;
  if ( *(_QWORD *)(v9 + 40 * v5 + 8) != a3 || v5 == -1 )
    return 0LL;
  v36 = a4;
  v10 = a3;
  v37 = a5;
  v11 = *(_QWORD *)(a1 + 152);
  v12 = a1;
  v32 = (__int64 *)(a2 + 16);
  while ( 2 )
  {
    v13 = v9 + v35;
    while ( 1 )
    {
      if ( !sub_408600(*(_QWORD *)(a2 + 8), v32, *(_QWORD *)v13) )
        goto LABEL_19;
      v23 = v10 + *(_QWORD *)(v13 + 24) - *(_QWORD *)(v13 + 16);
      if ( v10 == v23 )
        break;
      v14 = 8 * v23 + *(_QWORD *)(v12 + 184);
      v33 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v21);
      if ( *(_QWORD *)v14 )
      {
        if ( sub_408600(
               *(_QWORD *)(*(_QWORD *)v14 + 16LL),
               (__int64 *)(*(_QWORD *)v14 + 24LL),
               *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v21)) )
        {
          goto LABEL_19;
        }
        v38 = sub_4096A0((__int64)&v39, v15 + 8);
        v16 = (unsigned __int64)sub_406FF0((__int64)&v39, v33);
        if ( v38 || v16 != 1 )
        {
          free(ptr);
          result = v38;
          if ( v38 )
            return result;
          return 12LL;
        }
        v17 = *(_QWORD *)(v12 + 184) + 8 * v23;
      }
      else
      {
        v34 = 8 * v23 + *(_QWORD *)(v12 + 184);
        v39 = 1LL;
        v40 = 1LL;
        v30 = malloc(8uLL);
        ptr = v30;
        if ( !v30 )
          return 12LL;
        v38 = 0;
        v17 = v34;
        *(_QWORD *)v30 = v33;
      }
      v18 = (_QWORD *)v17;
      v19 = sub_409BB0(&v38, v11, (__int64)&v39);
      v20 = ptr;
      *v18 = v19;
      free(v20);
      if ( !*(_QWORD *)(*(_QWORD *)(v12 + 184) + 8 * v23) )
      {
        result = v38;
        if ( v38 )
          return result;
      }
LABEL_19:
      v13 += 40LL;
      if ( !*(_BYTE *)(v13 - 8) )
        return 0LL;
    }
    v24 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 24 * v21 + 16);
    if ( sub_408600(v22, v32, v24) )
      goto LABEL_19;
    v39 = 1LL;
    v40 = 1LL;
    v25 = malloc(8uLL);
    ptr = v25;
    if ( v25 )
    {
      *(_QWORD *)v25 = v24;
      v26 = 0;
    }
    else
    {
      v40 = 0LL;
      v26 = 12;
      v39 = 0LL;
    }
    v38 = v26;
    v27 = sub_408F70(v11, (__int64)&v39, v36, v37);
    v28 = sub_408B40(a2, (__int64)&v39);
    free(ptr);
    result = v38;
    if ( !(v38 | v28 | v27) )
    {
      v9 = *(_QWORD *)(v12 + 216);
      continue;
    }
    break;
  }
  if ( !v38 )
  {
    result = v28;
    if ( v27 )
      result = v27;
  }
  return result;
}

signed __int64 __fastcall sub_40A1E0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r12@1
  __int64 v5; // r13@2
  __int64 v6; // rbx@2
  __int64 v7; // rbp@4
  signed __int64 v8; // rax@4
  signed __int64 v9; // rax@5
  __int64 v10; // rcx@6
  __int64 v11; // rcx@7
  _QWORD *v12; // r9@7
  _QWORD *v13; // ST10_8@8
  _QWORD *v14; // rax@8
  _QWORD *v16; // ST08_8@13
  _QWORD *v17; // rax@13
  __int64 v18; // [sp+8h] [bp-50h]@8
  signed __int64 v19; // [sp+10h] [bp-48h]@13
  _QWORD *v20; // [sp+18h] [bp-40h]@8

  v4 = *(_QWORD *)(a1 + 152);
  if ( *a2 <= 0LL )
    return 0LL;
  v5 = a4;
  v6 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*a3 + 8 * v6);
      v8 = *(_QWORD *)v4 + 16LL * *(_QWORD *)(*a3 + 8 * v6);
      if ( *(_BYTE *)(v8 + 8) == 8 )
      {
        v9 = *(_QWORD *)v8;
        if ( v9 <= 63 )
        {
          v10 = *(_QWORD *)(v4 + 160);
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
    v13 = v12;
    v18 = v11;
    v20 = a3;
    v14 = calloc(1uLL, 0x30uLL);
    v13[v18] = v14;
    if ( !v14 )
      return 12LL;
    *v14 = v5;
    a3 = v20;
    ++v6;
    v14[1] = v7;
    *(_QWORD *)(a1 + 232) = v18 + 1;
    if ( v6 >= *a2 )
      return 0LL;
  }
  v16 = a3;
  v19 = 2 * v11;
  v17 = realloc(*(void **)(a1 + 248), 16 * v11);
  a3 = v16;
  v12 = v17;
  if ( v17 )
  {
    *(_QWORD *)(a1 + 248) = v17;
    v11 = *(_QWORD *)(a1 + 232);
    *(_QWORD *)(a1 + 240) = v19;
    goto LABEL_8;
  }
  return 12LL;
}

signed __int64 __fastcall sub_40A330(__int64 a1, __int64 a2, char a3)
{
  wint_t v3; // ebx@6
  signed __int64 result; // rax@8
  signed __int64 v5; // rax@10
  char v6; // dl@10

  if ( a2 < 0 )
    return *(_DWORD *)(a1 + 112);
  if ( *(_QWORD *)(a1 + 88) == a2 )
    return (a3 & 2u) < 1 ? 10 : 8;
  if ( *(_DWORD *)(a1 + 144) > 1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * a2);
      if ( v3 != -1 )
        break;
      if ( --a2 == -1 )
        return *(_DWORD *)(a1 + 112);
    }
    if ( *(_BYTE *)(a1 + 142) && (iswalnum(v3) || v3 == 95) )
      return 1LL;
    result = 0LL;
    if ( v3 != 10 )
      return result;
    return 2 * (unsigned int)(*(_BYTE *)(a1 + 141) != 0);
  }
  v5 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + a2);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * (v5 >> 6)) >> v5;
  result = 1LL;
  if ( !(v6 & 1) )
  {
    result = 0LL;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + a2) == 10 )
      return 2 * (unsigned int)(*(_BYTE *)(a1 + 141) != 0);
  }
  return result;
}

signed __int64 __fastcall sub_40A420(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // cl@1
  unsigned __int8 v4; // al@1
  bool v5; // zf@4
  signed __int64 result; // rax@4
  unsigned int v7; // ebx@9
  unsigned int v8; // ebx@10
  unsigned int v9; // eax@10
  unsigned int v10; // edx@10
  int v11; // edx@15

  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + a3);
  v4 = *(_BYTE *)(a2 + 8);
  if ( v4 == 3 )
  {
    result = 0LL;
    if ( !((*(_QWORD *)(*(_QWORD *)a2 + 8 * ((signed __int64)v3 >> 6)) >> v3) & 1) )
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
      if ( !v5 || (v3 & 0x80u) != 0 )
        return result;
    }
    if ( v3 == 10 )
    {
      result = 0LL;
      if ( !(*(_BYTE *)(*(_QWORD *)(a1 + 152) + 216LL) & 0x40) )
        return result;
    }
    else if ( !v3 )
    {
      result = 0LL;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 152) + 216LL) & 0x80 )
        return result;
    }
  }
  v7 = *(_DWORD *)(a2 + 8);
  result = 1LL;
  if ( !(v7 & 0x3FF00) )
    return result;
  v8 = v7 >> 8;
  v9 = sub_40A330(a1, a3, *(_DWORD *)(a1 + 160));
  v10 = v9;
  if ( v8 & 4 )
  {
    result = 0LL;
    if ( !(v10 & 1) || v8 & 8 )
      return result;
  }
  else if ( v8 & 8 && v9 & 1 )
  {
    return 0LL;
  }
  if ( !(v8 & 0x20) || (result = 0LL, v10 & 2) )
  {
    result = 1LL;
    v11 = (v10 >> 3) & 1;
    if ( v8 & 0x80 )
      result = (unsigned int)v11;
  }
  return result;
}

__int64 __fastcall sub_40A550(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 *v4; // r12@1
  __int64 v5; // rbx@1
  char v6; // al@1
  __int64 v7; // r9@2
  __int64 v8; // rsi@2
  int v9; // ebp@2
  int v10; // er11@2
  int v11; // er10@2
  __int64 result; // rax@3
  signed __int64 v13; // rdx@3
  int v14; // ecx@3

  v4 = a3;
  v5 = a2;
  v6 = sub_40A330(a1, a4, *(_DWORD *)(a1 + 160));
  if ( a2 > 0 )
  {
    v7 = *v4;
    v8 = 0LL;
    v9 = v6 & 8;
    v10 = v6 & 2;
    v11 = v6 & 1;
    do
    {
      result = *(_QWORD *)(v7 + 8 * v8);
      v13 = **(_QWORD **)(a1 + 152) + 16LL * *(_QWORD *)(v7 + 8 * v8);
      v14 = *(_DWORD *)(v13 + 8) >> 8;
      if ( *(_BYTE *)(v13 + 8) == 2 )
      {
        if ( !(v14 & 0x3FF) )
          return result;
        if ( v14 & 4 )
        {
          if ( !v11 || v14 & 8 )
            goto LABEL_15;
        }
        else if ( v14 & 8 && v11 )
        {
          goto LABEL_15;
        }
        if ( (!(v14 & 0x20) || v10) && (!(v14 & 0x80) || v9) )
          return result;
      }
LABEL_15:
      ++v8;
    }
    while ( v8 != v5 );
  }
  return 0LL;
}

signed __int64 __fastcall sub_40A620(__int64 a1, signed __int64 a2, int a3)
{
  int v3; // er10@1
  signed __int64 v4; // r15@1
  __int64 v5; // rbx@1
  signed __int64 v6; // rax@1
  signed __int64 v7; // rbp@1
  __int64 v8; // rax@4
  __int64 v9; // rax@4
  bool v10; // zf@4
  signed __int64 v11; // rax@6
  char v12; // dl@6
  signed __int64 v13; // r14@6
  size_t v14; // r14@8
  int v15; // eax@8
  bool v16; // sf@8
  unsigned __int8 v17; // of@8
  char v18; // dl@10
  __int64 v19; // rsi@13
  signed __int64 v20; // rax@13
  signed __int64 v21; // rcx@13
  signed __int64 result; // rax@19
  __int64 v23; // rcx@25
  __int64 v24; // rax@25
  int v25; // edx@27
  __int64 v26; // rax@30
  __int64 v27; // rcx@30
  __int64 v28; // r11@36
  signed __int64 v29; // r13@38
  int v30; // ST04_4@39
  size_t v31; // r12@39
  size_t v32; // rax@39
  wchar_t v33; // edx@39
  signed __int64 v34; // r12@41
  int v35; // eax@43
  __int64 v36; // r13@49
  signed __int64 v37; // rcx@49
  signed __int64 v38; // rdi@49
  signed __int64 v39; // rax@53
  signed __int64 v40; // rdx@53
  __int64 v41; // rsi@53
  signed __int64 v42; // r12@55
  __int64 v43; // rax@60
  signed __int64 v44; // rax@60
  __int64 v45; // rcx@61
  __int64 v46; // rax@61
  __int64 v47; // rax@64
  __int64 v48; // rcx@64
  signed __int64 v49; // rdx@72
  _DWORD *v50; // rax@74
  signed __int64 v51; // rcx@74
  unsigned __int64 v52; // rcx@78
  __int64 v53; // r13@78
  char *v54; // r12@78
  __int64 v55; // rcx@84
  char *v56; // rsi@84
  signed __int64 v57; // rdx@84
  int v58; // ST04_4@85
  size_t v59; // rax@85
  size_t v60; // rdx@85
  __int64 v61; // rcx@89
  signed __int64 v62; // rdx@90
  signed __int64 v63; // r13@100
  signed __int64 v64; // rax@102
  __int64 v65; // rdx@35
  _DWORD *v66; // rax@110
  signed __int64 v67; // rdx@110
  __int64 v68; // rsi@118
  int v69; // esi@120
  __int64 v70; // rax@120
  wchar_t v71; // [sp+4h] [bp-74h]@115
  __int64 v72; // [sp+18h] [bp-60h]@39
  wchar_t v73; // [sp+2Ch] [bp-4Ch]@85
  char v74[6]; // [sp+32h] [bp-46h]@121
  wint_t wc[2]; // [sp+38h] [bp-40h]@39

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = a2 - v6;
  if ( v6 <= a2 )
    goto LABEL_125;
  if ( *(_DWORD *)(a1 + 144) > 1 )
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
  *(_DWORD *)(a1 + 112) = (a3 & 1u) < 1 ? 6 : 4;
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
          v15 = sub_40A330(a1, v7 - 1, v3);
          v17 = __OFSUB__(*(_DWORD *)(a1 + 144), 1);
          v10 = *(_DWORD *)(a1 + 144) == 1;
          v16 = *(_DWORD *)(a1 + 144) - 1 < 0;
          *(_DWORD *)(a1 + 112) = v15;
          if ( !((unsigned __int8)(v16 ^ v17) | v10) )
          {
            memmove(*(void **)(a1 + 16), (const void *)(*(_QWORD *)(a1 + 16) + 4 * v7), 4 * v14);
            v14 = *(_QWORD *)(a1 + 48) - v7;
          }
          v18 = *(_BYTE *)(a1 + 139);
          if ( v18 )
          {
            memmove(*(void **)(a1 + 8), (const void *)(*(_QWORD *)(a1 + 8) + v7), v14);
            v18 = *(_BYTE *)(a1 + 139);
            v14 = *(_QWORD *)(a1 + 48) - v7;
          }
          *(_QWORD *)(a1 + 56) -= v7;
          *(_QWORD *)(a1 + 48) = v14;
          goto LABEL_13;
        }
        v36 = *(_QWORD *)(a1 + 24);
        v37 = *(_QWORD *)(a1 + 48);
        v38 = 0LL;
        do
        {
          v39 = (v38 + v37) / 2;
          v40 = *(_QWORD *)(v36 + 8 * v39);
          v41 = (v38 + v37) / 2;
          if ( v40 <= v7 )
          {
            if ( v40 >= v7 )
            {
              v42 = (v38 + v37) / 2;
              --v41;
              goto LABEL_57;
            }
            v38 = v39 + 1;
          }
          else
          {
            v37 = (v38 + v37) / 2;
          }
        }
        while ( v38 < v37 );
        v42 = v39 + 1;
        if ( v40 >= v7 )
        {
          v42 = v39;
          v41 = v39 - 1;
        }
LABEL_57:
        *(_DWORD *)(v5 + 112) = sub_40A330(v5, v41, v3);
        if ( v7 == v42 && v7 < v13 && *(_QWORD *)(v36 + 8 * v42) == v7 )
        {
          memmove(*(void **)(v5 + 16), (const void *)(*(_QWORD *)(v5 + 16) + 4 * v7), 4 * (v13 - v7));
          memmove(*(void **)(v5 + 8), (const void *)(*(_QWORD *)(v5 + 8) + v7), *(_QWORD *)(v5 + 48) - v7);
          v43 = *(_QWORD *)(v5 + 48);
          *(_QWORD *)(v5 + 56) -= v7;
          v44 = v43 - v7;
          *(_QWORD *)(v5 + 48) = v44;
          if ( v44 > 0 )
          {
            v45 = *(_QWORD *)(v5 + 24);
            v46 = 0LL;
            do
            {
              *(_QWORD *)(v45 + 8 * v46) = *(_QWORD *)(v45 + 8 * v7 + 8 * v46) - v7;
              ++v46;
            }
            while ( *(_QWORD *)(v5 + 48) > v46 );
          }
          LODWORD(v19) = *(_DWORD *)(v5 + 144);
          v18 = *(_BYTE *)(v5 + 139);
          v20 = *(_QWORD *)(v5 + 88) - v7;
          v21 = *(_QWORD *)(v5 + 104) - v7;
LABEL_14:
          if ( v18 )
            goto LABEL_16;
          goto LABEL_15;
        }
        v47 = *(_QWORD *)(v5 + 80);
        v48 = *(_QWORD *)(v5 + 96);
        *(_BYTE *)(v5 + 140) = 0;
        v20 = v47 - v4;
        v21 = v48 - v4;
        *(_QWORD *)(v5 + 88) = v20 + v7;
        *(_QWORD *)(v5 + 104) = v21 + v7;
        if ( v42 > 0 )
        {
          do
          {
            if ( *(_QWORD *)(v36 + 8 * v42 - 8) != v7 )
              break;
            --v42;
          }
          while ( v42 );
        }
        if ( v42 >= v13 )
        {
          if ( v42 == v13 )
          {
LABEL_99:
            *(_QWORD *)(v5 + 48) = 0LL;
            v49 = 0LL;
LABEL_77:
            *(_QWORD *)(v5 + 56) = v49;
            LODWORD(v19) = *(_DWORD *)(v5 + 144);
            v18 = *(_BYTE *)(v5 + 139);
            goto LABEL_14;
          }
        }
        else
        {
          while ( *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v42) == -1 )
          {
            if ( ++v42 == v13 )
              goto LABEL_99;
          }
        }
        v49 = *(_QWORD *)(v36 + 8 * v42) - v7;
        *(_QWORD *)(v5 + 48) = v49;
        if ( v49 )
        {
          if ( v49 > 0 )
          {
            v50 = *(_DWORD **)(v5 + 16);
            v51 = (signed __int64)&v50[v49];
            do
            {
              *v50 = -1;
              ++v50;
            }
            while ( (_DWORD *)v51 != v50 );
          }
          memset(*(void **)(v5 + 8), 255, v49);
          v49 = *(_QWORD *)(v5 + 48);
          v20 = *(_QWORD *)(v5 + 88) - v7;
          v21 = *(_QWORD *)(v5 + 104) - v7;
        }
        goto LABEL_77;
      }
      if ( v12 )
      {
        v65 = *(_QWORD *)(a1 + 80);
        *(_BYTE *)(a1 + 140) = 0;
        *(_QWORD *)(a1 + 88) = v7 + v65 - a2;
        *(_QWORD *)(a1 + 104) = v7 + *(_QWORD *)(a1 + 96) - a2;
      }
      v19 = *(_DWORD *)(a1 + 144);
      v28 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 48) = 0LL;
      if ( (signed int)v19 <= 1 )
      {
        v23 = *(_BYTE *)(v28 + v7 + *(_QWORD *)a1 - 1);
        v24 = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 56) = 0LL;
        if ( v24 )
          LOBYTE(v23) = *(_BYTE *)(v24 + v23);
        v25 = 1;
        if ( !((*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * ((signed __int64)(unsigned __int8)v23 >> 6)) >> v23) & 1) )
        {
          v25 = 0;
          if ( (_BYTE)v23 == 10 )
            v25 = 2 * (*(_BYTE *)(a1 + 141) != 0);
        }
        v26 = *(_QWORD *)(a1 + 88);
        v27 = *(_QWORD *)(a1 + 104);
        *(_DWORD *)(a1 + 112) = v25;
        v20 = v26 - v7;
        v21 = v27 - v7;
        if ( *(_BYTE *)(a1 + 139) )
        {
          *(_QWORD *)(a1 + 40) = v4;
          *(_QWORD *)(a1 + 88) = v20;
          *(_QWORD *)(a1 + 104) = v21;
LABEL_32:
          if ( *(_BYTE *)(v5 + 139) )
          {
            if ( *(_BYTE *)(v5 + 136) )
            {
              sub_407250(v5);
            }
            else
            {
              v61 = *(_QWORD *)(v5 + 120);
              if ( v61 )
              {
                v62 = *(_QWORD *)(v5 + 48);
                if ( *(_QWORD *)(v5 + 64) <= v20 )
                  v20 = *(_QWORD *)(v5 + 64);
                if ( v20 > v62 )
                {
                  while ( 1 )
                  {
                    *(_BYTE *)(*(_QWORD *)(v5 + 8) + v62) = *(_BYTE *)(v61 + *(_BYTE *)(v62 + *(_QWORD *)v5 + v4));
                    if ( v20 == ++v62 )
                      break;
                    v4 = *(_QWORD *)(v5 + 40);
                    v61 = *(_QWORD *)(v5 + 120);
                  }
                }
                else
                {
                  v20 = *(_QWORD *)(v5 + 48);
                }
                *(_QWORD *)(v5 + 48) = v20;
                *(_QWORD *)(v5 + 56) = v20;
              }
            }
          }
          else
          {
            *(_QWORD *)(v5 + 48) = v20;
          }
          goto LABEL_19;
        }
LABEL_15:
        *(_QWORD *)(v5 + 8) += v7;
        goto LABEL_16;
      }
      if ( *(_BYTE *)(a1 + 137) )
      {
        v52 = *(_QWORD *)a1;
        v53 = *(_QWORD *)a1 + v28;
        v54 = (char *)(v53 + v7 - 1);
        if ( *(_QWORD *)a1 < (unsigned __int64)(v53 + v7 - v19) )
          v52 = v53 + v7 - v19;
        if ( v52 <= (unsigned __int64)v54 )
        {
          while ( (*v54 & 0xC0) == -128 )
          {
            if ( v52 > (unsigned __int64)--v54 )
              goto LABEL_38;
          }
          v55 = *(_QWORD *)(a1 + 120);
          v56 = v54;
          v57 = v53 + *(_QWORD *)(a1 + 88) - (_QWORD)v54;
          if ( v55 )
          {
            LODWORD(v68) = 6;
            if ( v57 <= 6 )
              v68 = v53 + *(_QWORD *)(a1 + 88) - (_QWORD)v54;
            v69 = v68 - 1;
            v70 = v69;
            if ( v69 >= 0 )
            {
              do
              {
                v74[v70] = *(_BYTE *)(v55 + (unsigned __int8)v54[v70]);
                --v70;
              }
              while ( (signed int)v70 >= 0 );
            }
            v56 = v74;
          }
          v58 = v3;
          *(_QWORD *)wc = 0LL;
          v59 = sub_4069D0(&v73, v56, v57, (mbstate_t *)wc);
          v3 = v58;
          v60 = v53 + v7 - (_QWORD)v54;
          if ( v60 <= v59 && v59 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v64 = v59 - v60;
            v33 = v73;
            *(_QWORD *)(a1 + 32) = 0LL;
            v34 = v64;
            *(_QWORD *)(a1 + 48) = v64;
            if ( v33 != -1 )
              goto LABEL_42;
          }
          v28 = *(_QWORD *)(a1 + 40);
          v11 = *(_QWORD *)(a1 + 56);
        }
      }
LABEL_38:
      v29 = v28 + v11;
      if ( v4 <= v28 + v11 )
      {
        v63 = v29 - v4;
        *(_QWORD *)(a1 + 48) = v63;
        v34 = v63;
      }
      else
      {
        do
        {
          v30 = v3;
          v31 = *(_QWORD *)(a1 + 80) - v29;
          v72 = *(_QWORD *)(a1 + 32);
          v32 = sub_4069D0((wchar_t *)wc, (char *)(v29 + *(_QWORD *)a1), v31, (mbstate_t *)(a1 + 32));
          v33 = wc[0];
          v3 = v30;
          if ( v32 - 1 > 0xFFFFFFFFFFFFFFFCLL )
          {
            if ( v32 && v31 )
              v33 = *(_BYTE *)(*(_QWORD *)a1 + v29);
            else
              v33 = 0;
            *(_QWORD *)(a1 + 32) = v72;
            v32 = 1LL;
          }
          v29 += v32;
        }
        while ( v4 > v29 );
        v34 = v29 - v4;
        *(_QWORD *)(a1 + 48) = v29 - v4;
        if ( v33 != -1 )
        {
LABEL_42:
          if ( *(_BYTE *)(a1 + 142) && ((v71 = v33, iswalnum(v33)) || (v33 = v71, v71 == 95)) )
          {
            v35 = 1;
          }
          else
          {
            v35 = 0;
            if ( v33 == 10 )
              v35 = 2 * (*(_BYTE *)(a1 + 141) != 0);
          }
          *(_DWORD *)(a1 + 112) = v35;
LABEL_46:
          if ( v34 )
          {
            if ( v34 > 0 )
            {
              v66 = *(_DWORD **)(a1 + 16);
              v67 = (signed __int64)&v66[v34];
              do
              {
                *v66 = -1;
                ++v66;
              }
              while ( (_DWORD *)v67 != v66 );
            }
            v18 = *(_BYTE *)(a1 + 139);
            if ( !v18 )
              goto LABEL_48;
            memset(*(void **)(a1 + 8), 255, v34);
            v34 = *(_QWORD *)(a1 + 48);
          }
          v18 = *(_BYTE *)(a1 + 139);
LABEL_48:
          *(_QWORD *)(a1 + 56) = v34;
LABEL_13:
          LODWORD(v19) = *(_DWORD *)(a1 + 144);
          v20 = *(_QWORD *)(a1 + 88) - v7;
          v21 = *(_QWORD *)(a1 + 104) - v7;
          goto LABEL_14;
        }
      }
      *(_DWORD *)(a1 + 112) = sub_40A330(a1, v13 - 1, v3);
      goto LABEL_46;
    }
  }
  else
  {
LABEL_125:
    if ( v7 )
      goto LABEL_6;
  }
  LODWORD(v19) = *(_DWORD *)(a1 + 144);
  v20 = *(_QWORD *)(a1 + 88);
  v21 = *(_QWORD *)(a1 + 104);
LABEL_16:
  *(_QWORD *)(v5 + 40) = v4;
  *(_QWORD *)(v5 + 88) = v20;
  *(_QWORD *)(v5 + 104) = v21;
  if ( (signed int)v19 <= 1 )
    goto LABEL_32;
  if ( !*(_BYTE *)(v5 + 136) )
  {
    sub_4072D0(v5);
LABEL_19:
    *(_QWORD *)(v5 + 72) = 0LL;
    return 0LL;
  }
  result = sub_407480(v5);
  if ( !(_DWORD)result )
    goto LABEL_19;
  return result;
}

__int64 __fastcall sub_40AE10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13@1
  __int64 v5; // rax@1
  signed __int64 v6; // rbp@1
  __int64 v7; // r10@1
  __int64 v8; // rbx@2
  __int64 v9; // r9@4
  __int64 *v10; // r11@4
  unsigned int v11; // eax@5
  __int64 v12; // rax@8
  __int64 v13; // r15@10
  signed __int64 v14; // ST10_8@10
  signed __int64 v15; // rax@10
  __int64 v16; // r15@14
  __int64 v17; // rdx@15
  signed __int64 v18; // r9@18
  __int64 v19; // rdx@19
  __int64 v20; // r9@19
  __int64 v21; // rax@20
  __int64 v22; // r11@20
  void *v23; // rdi@24
  unsigned int v25; // ST08_4@26
  __int64 v26; // [sp+0h] [bp-70h]@10
  __int64 v27; // [sp+10h] [bp-60h]@1
  __int128 v28; // [sp+18h] [bp-58h]@1
  void *ptr; // [sp+28h] [bp-48h]@1

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 56);
  v28 = 0LL;
  v6 = v5 + 24 * a2;
  v27 = a4;
  ptr = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 > 0 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8 * v8);
      if ( a2 != v12 && *(_BYTE *)(*(_QWORD *)a1 + 16 * v12 + 8) & 8 )
      {
        v13 = *(_QWORD *)(24 * v12 + *(_QWORD *)(a1 + 40) + 16);
        v14 = 24 * v12 + *(_QWORD *)(a1 + 40);
        v26 = *(_QWORD *)v13;
        v15 = sub_408600(v7, (__int64 *)(v6 + 16), *(_QWORD *)v13);
        if ( *(_QWORD *)(v14 + 8) > 1LL )
        {
          if ( !v15 && sub_408600(*(_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v26)
            || (v16 = *(_QWORD *)(v13 + 8), v16 > 0)
            && !sub_408600(v7, v10, v16)
            && sub_408600(*(_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v17) )
          {
LABEL_5:
            v11 = sub_4090B0((__int64)&v28, v27, v9 + *(_QWORD *)(a1 + 56));
            if ( v11 )
            {
              v25 = v11;
              free(ptr);
              return v25;
            }
            v7 = *(_QWORD *)(v6 + 8);
            goto LABEL_7;
          }
        }
        else if ( !v15 && sub_408600(*(_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v26) )
        {
          goto LABEL_5;
        }
      }
LABEL_7:
      if ( v7 <= ++v8 )
      {
        v18 = 0LL;
        if ( v7 > 0 )
        {
          do
          {
            if ( !sub_408600(*((__int64 *)&v28 + 1), (__int64 *)&ptr, *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8 * v18)) )
            {
              v21 = sub_408600(*(_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v19) - 1;
              if ( v21 >= 0 && v21 < v22 )
              {
                *(_QWORD *)(v4 + 8) = v22 - 1;
                sub_408770((_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v21);
              }
            }
            v18 = v20 + 1;
          }
          while ( *(_QWORD *)(v6 + 8) > v18 );
        }
        v23 = ptr;
        goto LABEL_25;
      }
    }
  }
  v23 = 0LL;
LABEL_25:
  free(v23);
  return 0LL;
}

bool __fastcall sub_40B040(__int64 a1, __int64 a2)
{
  __int64 v2; // r9@2
  __m128i v3; // xmm0@2
  bool v4; // zf@2
  bool v5; // sf@2
  signed __int64 v6; // r12@3
  __int64 v7; // r8@3
  signed __int64 v8; // r15@4
  int v9; // ebp@4
  __int16 v10; // ax@4
  __int64 v11; // rbp@9
  void *v12; // r13@10
  signed __int64 v13; // rbx@13
  __int64 v14; // r15@13
  void *v15; // r13@13
  __int64 v16; // r12@13
  signed __int64 v17; // rbp@13
  __int64 v18; // r14@14
  __int64 v19; // rax@15
  __int64 v20; // rax@18
  __int64 v21; // rax@21
  __int64 v22; // rbp@24
  char *v23; // rbx@25
  __int64 v24; // r11@26
  unsigned __int64 v25; // rax@27
  signed __int64 v26; // rcx@27
  char *i; // rdi@27
  __int64 v28; // rax@32
  void **v29; // rbp@35
  void *v30; // rdi@36
  __int128 *v32; // rbx@42
  __int64 v33; // rdi@49
  __int64 v34; // rsi@49
  __int64 v35; // rcx@49
  __int64 v36; // rdx@50
  __int64 v37; // rsi@55
  __int64 v38; // rcx@55
  __int64 v39; // rdx@55
  __int64 v40; // rax@56
  signed __int64 v41; // r13@58
  signed __int64 v42; // rbp@59
  signed __int64 v43; // r12@59
  __int128 *v44; // r14@59
  __int64 v45; // rcx@63
  __int64 v46; // rax@63
  __int64 v47; // rdx@64
  __int64 v48; // rbx@66
  __int64 v49; // rdi@66
  __int64 v50; // rdx@66
  __int64 v51; // rax@67
  __int64 v52; // rcx@67
  __int64 v53; // rax@67
  __int64 v54; // rdx@68
  signed __int64 v55; // rax@69
  __int64 v56; // ST30_8@75
  signed __int64 v57; // rax@75
  __int64 v58; // ST10_8@75
  __int64 v59; // rbp@75
  signed __int64 v60; // r13@75
  _QWORD *v61; // rax@75
  void **v62; // rbx@79
  void *v63; // rdi@80
  __int64 v64; // rsi@83
  __int64 v65; // rdx@83
  __int64 v66; // rdx@85
  __int8 v67; // dh@89
  __int64 v68; // rcx@92
  __int64 v69; // rdx@92
  __int64 v70; // rax@93
  __int64 v71; // rsi@96
  __int64 v72; // rdx@96
  __int64 v73; // rcx@97
  __int64 v74; // rsi@104
  __int64 v75; // rdx@104
  void **v76; // rbx@112
  void *v77; // rdi@113
  __int64 v78; // rax@115
  char v79; // di@117
  __int64 v80; // rax@120
  char *v81; // rsi@126
  __int64 v82; // r9@126
  __int64 v83; // r15@127
  signed __int64 v84; // r9@128
  void *v85; // rax@133
  __int64 v86; // rax@135
  char *v87; // rdx@138
  char *v88; // rbp@138
  signed __int64 v89; // r11@138
  unsigned __int64 v90; // rax@139
  char *v91; // r8@139
  signed __int64 j; // rcx@139
  __int64 *v93; // rdi@145
  __int64 v94; // rsi@145
  __int64 v95; // r9@146
  __int64 v96; // r10@146
  char *ptr; // [sp+8h] [bp-E0h]@2
  char *ptra; // [sp+8h] [bp-E0h]@12
  signed __int64 v99; // [sp+10h] [bp-D8h]@13
  int v100; // [sp+10h] [bp-D8h]@59
  __int64 v101; // [sp+18h] [bp-D0h]@3
  char *v102; // [sp+18h] [bp-D0h]@13
  void *v103; // [sp+20h] [bp-C8h]@1
  signed __int64 v104; // [sp+28h] [bp-C0h]@4
  char *v105; // [sp+28h] [bp-C0h]@13
  char v106; // [sp+30h] [bp-B8h]@13
  __int64 v107; // [sp+30h] [bp-B8h]@59
  signed __int64 v108; // [sp+38h] [bp-B0h]@12
  __int64 v109; // [sp+40h] [bp-A8h]@59
  __int64 v110; // [sp+48h] [bp-A0h]@1
  __m128i v111; // [sp+50h] [bp-98h]@2
  __m128i v112; // [sp+60h] [bp-88h]@2
  __int128 v113; // [sp+70h] [bp-78h]@10
  void *v114[2]; // [sp+80h] [bp-68h]@10
  __int128 v115; // [sp+90h] [bp-58h]@13
  __int128 v116; // [sp+A0h] [bp-48h]@13
  char v117; // [sp+B0h] [bp-38h]@142

  v110 = a2;
  v103 = malloc(0x3800uLL);
  if ( !v103 )
    return 0;
  v2 = a2;
  v3 = 0LL;
  v111 = 0LL;
  v4 = *(_QWORD *)(a2 + 16) == 0LL;
  v5 = *(_QWORD *)(a2 + 16) < 0;
  v112 = 0LL;
  ptr = (char *)v103 + 6144;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_QWORD *)(a2 + 96) = 0LL;
  if ( v5 || v4 )
  {
    free(v103);
LABEL_133:
    v85 = calloc(8uLL, 0x100uLL);
    *(_QWORD *)(v110 + 88) = v85;
    return v85 != 0LL;
  }
  v6 = 0LL;
  v101 = 0LL;
  v7 = a1;
  do
  {
    v104 = 8 * v101;
    v8 = *(_QWORD *)v7 + 16LL * *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8 * v101);
    v9 = *(_BYTE *)(v8 + 8);
    v10 = (*(_DWORD *)(v8 + 8) >> 8) & 0x3FF;
    if ( v9 == 1 )
    {
      v32 = (__int128 *)&v111;
      *(_QWORD *)((char *)v32 + (((unsigned __int64)*(_BYTE *)v8 >> 3) & 0x18)) |= 1LL << *(_BYTE *)v8;
    }
    else if ( v9 == 3 )
    {
      v74 = *(_QWORD *)v8;
      v75 = 0LL;
      v32 = (__int128 *)&v111;
      do
      {
        v111.m128i_i64[v75] |= *(_QWORD *)(v74 + v75 * 8);
        ++v75;
      }
      while ( v75 != 4 );
    }
    else
    {
      if ( v9 == 5 )
      {
        if ( *(_DWORD *)(v7 + 180) <= 1 )
        {
          v3 = _mm_cmpeq_epi32(v3, v3);
          v32 = (__int128 *)&v111;
          v111 = v3;
          v112 = v3;
        }
        else
        {
          v64 = *(_QWORD *)(v7 + 120);
          v65 = 0LL;
          v32 = (__int128 *)&v111;
          do
          {
            v111.m128i_i64[v65] |= *(_QWORD *)(v64 + v65 * 8);
            ++v65;
          }
          while ( v65 != 4 );
        }
      }
      else
      {
        if ( v9 != 7 )
          goto LABEL_8;
        v3 = _mm_cmpeq_epi32(v3, v3);
        v32 = (__int128 *)&v111;
        v111 = v3;
      }
      v66 = *(_QWORD *)(v7 + 216);
      if ( !(v66 & 0x40) )
        v111.m128i_i64[0] &= 0xFFFFFFFFFFFFFBFFLL;
      if ( v66 & 0x80 )
        v111.m128i_i64[0] &= 0xFFFFFFFFFFFFFFFELL;
    }
    if ( v10 )
    {
      if ( v10 & 0x20 )
      {
        v67 = v111.m128i_i8[1];
        v3 = 0LL;
        *v32 = 0LL;
        v32[1] = 0LL;
        if ( !(v67 & 4) )
          goto LABEL_8;
        v111.m128i_i64[0] = 1024LL;
      }
      if ( v10 & 0x80 )
        goto LABEL_77;
      if ( !(v10 & 4) )
      {
LABEL_52:
        if ( v10 & 8 )
        {
          if ( v9 == 1 && *(_BYTE *)(v8 + 10) & 0x40 )
            goto LABEL_77;
          if ( *(_DWORD *)(v7 + 180) <= 1 )
          {
            v68 = 0LL;
            v69 = 0LL;
            do
            {
              v70 = *((_QWORD *)v32 + v69) & ~*(_QWORD *)(v7 + 8 * v69 + 184);
              *((_QWORD *)v32 + v69++) = v70;
              v68 |= v70;
            }
            while ( v69 != 4 );
            if ( !v68 )
              goto LABEL_8;
          }
          else
          {
            v37 = *(_QWORD *)(v7 + 120);
            v38 = 0LL;
            v39 = 0LL;
            do
            {
              v40 = *((_QWORD *)v32 + v39) & ~(*(_QWORD *)(v37 + 8 * v39) & *(_QWORD *)(v7 + 8 * v39 + 184));
              *((_QWORD *)v32 + v39++) = v40;
              v38 |= v40;
            }
            while ( v39 != 4 );
            if ( !v38 )
              goto LABEL_8;
          }
        }
        goto LABEL_58;
      }
      if ( v9 == 1 )
      {
        if ( !(*(_BYTE *)(v8 + 10) & 0x40) )
          goto LABEL_77;
        if ( *(_DWORD *)(v7 + 180) > 1 )
        {
LABEL_49:
          v33 = *(_QWORD *)(v7 + 120);
          v34 = 0LL;
          v35 = 0LL;
          do
          {
            v36 = *((_QWORD *)v32 + v35) & (*(_QWORD *)(v7 + 8 * v35 + 184) | ~*(_QWORD *)(v33 + 8 * v35));
            *((_QWORD *)v32 + v35++) = v36;
            v34 |= v36;
          }
          while ( v35 != 4 );
          if ( !v34 )
            goto LABEL_8;
          goto LABEL_52;
        }
      }
      else if ( *(_DWORD *)(v7 + 180) > 1 )
      {
        goto LABEL_49;
      }
      v71 = 0LL;
      v72 = 0LL;
      do
      {
        v73 = *(_QWORD *)(v7 + 8 * v72 + 184) & *((_QWORD *)v32 + v72);
        *((_QWORD *)v32 + v72++) = v73;
        v71 |= v73;
      }
      while ( v72 != 4 );
      if ( !v71 )
        goto LABEL_8;
      goto LABEL_52;
    }
LABEL_58:
    v41 = 0LL;
    if ( v6 > 0 )
    {
      v100 = v9;
      v42 = v6;
      v43 = (signed __int64)v103 + 6144;
      v44 = v32;
      v109 = v7;
      v107 = v2;
      while ( 1 )
      {
        if ( v100 != 1
          || (*(_QWORD *)(&ptr[32 * v41] + (((unsigned __int64)*(_BYTE *)v8 >> 3) & 0x18)) >> *(_BYTE *)v8) & 1 )
        {
          v45 = 0LL;
          v46 = 0LL;
          do
          {
            v47 = *(_QWORD *)(v43 + 8 * v46) & *((_QWORD *)v44 + v46);
            *((_QWORD *)&v113 + v46++) = v47;
            v45 |= v47;
          }
          while ( v46 != 4 );
          if ( v45 )
          {
            v48 = 0LL;
            v49 = 0LL;
            v50 = 0LL;
            do
            {
              v51 = *(_QWORD *)(v43 + 8 * v50);
              v52 = v51 & ~*((_QWORD *)v44 + v50);
              v53 = *((_QWORD *)v44 + v50) & ~v51;
              *((_QWORD *)&v115 + v50) = v52;
              v49 |= v52;
              *((_QWORD *)v44 + v50++) = v53;
              v48 |= v53;
            }
            while ( v50 != 4 );
            v54 = (__int64)v103 + 24 * v41;
            if ( v49 )
            {
              v55 = (signed __int64)&ptr[32 * v42];
              *(__m128i *)v55 = _mm_load_si128((const __m128i *)&v115);
              *(__m128i *)(v55 + 16) = _mm_load_si128((const __m128i *)&v116);
              *(__m128i *)v43 = _mm_load_si128((const __m128i *)&v113);
              *(__m128i *)(v43 + 16) = _mm_load_si128((const __m128i *)v114);
              if ( (unsigned int)sub_4096A0((__int64)v103 + 24 * v42, v54) )
                goto LABEL_78;
              v54 = (__int64)v103 + 24 * v41;
              ++v42;
            }
            if ( !(unsigned __int8)sub_406FF0(v54, *(_QWORD *)(*(_QWORD *)(v107 + 24) + v104)) )
            {
LABEL_78:
              v6 = v42;
              goto LABEL_79;
            }
            if ( !v48 )
            {
LABEL_73:
              v7 = v109;
              v2 = v107;
              v6 = v42;
              v32 = v44;
              break;
            }
          }
        }
        ++v41;
        v43 += 32LL;
        if ( v41 >= v42 )
          goto LABEL_73;
      }
    }
    if ( v6 == v41 )
    {
      v56 = v7;
      v57 = (signed __int64)&ptr[32 * v6];
      v58 = v2;
      *(__m128i *)v57 = _mm_load_si128(&v111);
      *(__m128i *)(v57 + 16) = _mm_load_si128(&v112);
      v59 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + v104);
      v60 = (signed __int64)v103 + 24 * v6;
      *(_QWORD *)v60 = 1LL;
      *(_QWORD *)(v60 + 8) = 1LL;
      v61 = malloc(8uLL);
      v2 = v58;
      v7 = v56;
      *(_QWORD *)(v60 + 16) = v61;
      if ( !v61 )
      {
        *(_QWORD *)(v60 + 8) = 0LL;
        *(_QWORD *)v60 = 0LL;
        if ( v6 )
        {
LABEL_79:
          v62 = (void **)((char *)v103 + 16);
          do
          {
            v63 = *v62;
            v62 += 3;
            free(v63);
          }
          while ( (void **)((char *)v103 + 24 * v6 + 16) != v62 );
          free(v103);
        }
        else
        {
          free(v103);
        }
        return 0;
      }
      *v61 = v59;
      ++v6;
LABEL_77:
      v3 = 0LL;
      *v32 = 0LL;
      v32[1] = 0LL;
    }
LABEL_8:
    ++v101;
  }
  while ( v101 < *(_QWORD *)(v2 + 16) );
  v11 = v7;
  if ( v6 <= 0 )
  {
    free(v103);
    if ( v6 )
      return 0;
    goto LABEL_133;
  }
  *((_QWORD *)&v113 + 1) = 0LL;
  *(_QWORD *)&v113 = v6 + 1;
  v12 = malloc(8 * (v6 + 1));
  v114[0] = v12;
  if ( !v12
    || (v111.m128i_i32[0] = 0, v6 > 768614336404564053LL)
    || (v108 = 24 * v6, (ptra = (char *)malloc(24 * v6)) == 0LL) )
  {
LABEL_112:
    free(v12);
    v76 = (void **)((char *)v103 + 16);
    do
    {
      v77 = *v76;
      v76 += 3;
      free(v77);
    }
    while ( (char *)v76 != (char *)v103 + 24 * v6 + 16 );
    free(v103);
    return 0;
  }
  v13 = 8 * (v6 + 1) - 8;
  v14 = 0LL;
  v15 = v103;
  v106 = 0;
  v99 = v6;
  v16 = v11;
  v102 = &ptra[v13];
  v105 = &ptra[v13] + v13;
  v17 = (signed __int64)v103 + 8;
  v115 = 0LL;
  v116 = 0LL;
  do
  {
    *((_QWORD *)&v113 + 1) = 0LL;
    v18 = 0LL;
    if ( *(_QWORD *)v17 > 0LL )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL * *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8 * v18));
        if ( v19 != -1 )
        {
          v111.m128i_i32[0] = sub_408B40((__int64)&v113, *(_QWORD *)(v16 + 48) + 24 * v19);
          if ( v111.m128i_i32[0] )
            break;
        }
        if ( *(_QWORD *)v17 <= ++v18 )
          goto LABEL_18;
      }
LABEL_110:
      v6 = v99;
      goto LABEL_111;
    }
LABEL_18:
    v20 = sub_4098B0(&v111, v16, (__int64)&v113, 0);
    *(_QWORD *)&ptra[8 * v14] = v20;
    if ( !v20 && v111.m128i_i32[0] )
      goto LABEL_110;
    if ( *(_BYTE *)(v20 + 104) < 0 )
    {
      v78 = sub_4098B0(&v111, v16, (__int64)&v113, 1u);
      *(_QWORD *)&v102[8 * v14] = v78;
      if ( !v78 && v111.m128i_i32[0] )
        goto LABEL_110;
      if ( v78 != *(_QWORD *)&ptra[8 * v14] )
      {
        v79 = v106;
        if ( *(_DWORD *)(v16 + 180) >= 2 )
          v79 = 1;
        v106 = v79;
      }
      v80 = sub_4098B0(&v111, v16, (__int64)&v113, 2u);
      *(_QWORD *)&v105[8 * v14] = v80;
      if ( !v80 )
      {
        if ( v111.m128i_i32[0] )
          goto LABEL_110;
      }
    }
    else
    {
      *(_QWORD *)&v102[8 * v14] = v20;
      *(_QWORD *)&v105[8 * v14] = v20;
    }
    v21 = 0LL;
    do
    {
      *(_QWORD *)((char *)&v115 + v21) |= *(_QWORD *)((char *)v15 + v21 + 6144);
      v21 += 8LL;
    }
    while ( v21 != 32 );
    ++v14;
    v17 += 24LL;
    v15 = (char *)v15 + 32;
  }
  while ( v14 != v99 );
  v22 = v16;
  v6 = v99;
  if ( !v106 )
  {
    v23 = (char *)calloc(8uLL, 0x100uLL);
    *(_QWORD *)(v110 + 88) = v23;
    if ( v23 )
    {
      v24 = 0LL;
      do
      {
        v25 = *(_QWORD *)((char *)&v115 + v24);
        v26 = 1LL;
        for ( i = &v23[64 * v24]; v25; v25 >>= 1 )
        {
          if ( v25 & 1 )
          {
            if ( v26 & *(_QWORD *)((char *)v103 + v24 + 6144) )
            {
              v84 = 0LL;
            }
            else
            {
              v81 = (char *)v103 + v24 + 6176;
              v82 = 0LL;
              do
              {
                v83 = *(_QWORD *)v81;
                ++v82;
                v81 += 32;
              }
              while ( !(v26 & v83) );
              v84 = 8 * v82;
            }
            if ( v26 & *(_QWORD *)(v22 + v24 + 184) )
              *(_QWORD *)i = *(_QWORD *)&v102[v84];
            else
              *(_QWORD *)i = *(_QWORD *)&ptra[v84];
          }
          v26 *= 2LL;
          i += 8;
        }
        v24 += 8LL;
      }
      while ( v24 != 32 );
      goto LABEL_31;
    }
LABEL_111:
    free(ptra);
    v12 = v114[0];
    goto LABEL_112;
  }
  v23 = (char *)calloc(8uLL, 0x200uLL);
  *(_QWORD *)(v110 + 96) = v23;
  if ( !v23 )
    goto LABEL_111;
  v87 = (char *)&v115;
  v88 = v23;
  v89 = (signed __int64)v103 + 6176;
  do
  {
    v90 = *(_QWORD *)v87;
    v91 = v88;
    for ( j = 1LL; v90; v90 >>= 1 )
    {
      if ( v90 & 1 )
      {
        if ( j & *(_QWORD *)(v89 - 32) )
        {
          v96 = 0LL;
        }
        else
        {
          v93 = (__int64 *)v89;
          v94 = 0LL;
          do
          {
            v95 = *v93;
            ++v94;
            v93 += 4;
            v96 = v94;
          }
          while ( !(j & v95) );
        }
        *(_QWORD *)v91 = *(_QWORD *)&ptra[8 * v96];
        *((_QWORD *)v91 + 256) = *(_QWORD *)&v102[8 * v96];
      }
      j *= 2LL;
      v91 += 8;
    }
    v87 += 8;
    v88 += 512;
    v89 += 8LL;
  }
  while ( &v117 != v87 );
LABEL_31:
  if ( BYTE1(v115) & 4 )
  {
    v28 = 0LL;
    while ( !(*((_BYTE *)v103 + 32 * v28 + 6145) & 4) )
    {
      if ( ++v28 == v99 )
        goto LABEL_35;
    }
    v86 = *(_QWORD *)&v105[8 * v28];
    *((_QWORD *)v23 + 10) = v86;
    if ( v106 )
      *((_QWORD *)v23 + 266) = v86;
  }
LABEL_35:
  free(ptra);
  free(v114[0]);
  v29 = (void **)((char *)v103 + 16);
  do
  {
    v30 = *v29;
    v29 += 3;
    free(v30);
  }
  while ( (void **)((char *)v103 + v108 + 16) != v29 );
  free(v103);
  return 1;
}

void __fastcall sub_40BBE0(void **a1)
{
  void **v1; // r12@1
  void *v2; // rdi@1
  unsigned __int64 v3; // rbx@3
  unsigned __int64 v4; // rax@5
  unsigned __int64 v5; // rbx@6
  void **v6; // rax@7
  void **v7; // rax@9
  void **v8; // rax@11
  unsigned __int64 v9; // r13@14
  char *v10; // rdi@14
  __int64 v11; // rbx@15
  signed __int64 v12; // rbp@15
  __int64 v13; // rdi@16
  void *v14; // rdi@20

  v1 = a1;
  v2 = *a1;
  if ( v2 && v1[2] )
  {
    v3 = 0LL;
    while ( 1 )
    {
      v4 = v3++;
      sub_407C80((__int64)v2 + 16 * v4);
      if ( (unsigned __int64)v1[2] <= v3 )
        break;
      v2 = *v1;
    }
  }
  v5 = 0LL;
  free(v1[3]);
  if ( v1[2] )
  {
    do
    {
      v6 = (void **)v1[6];
      if ( v6 )
        free(v6[3 * v5 + 2]);
      v7 = (void **)v1[7];
      if ( v7 )
        free(v7[3 * v5 + 2]);
      v8 = (void **)v1[5];
      if ( v8 )
        free(v8[3 * v5 + 2]);
      ++v5;
    }
    while ( (unsigned __int64)v1[2] > v5 );
  }
  v9 = 0LL;
  free(v1[5]);
  free(v1[6]);
  free(v1[7]);
  free(*v1);
  v10 = (char *)v1[8];
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      v12 = (signed __int64)&v10[24 * v9];
      if ( *(_QWORD *)v12 > 0LL )
      {
        do
        {
          v13 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 8 * v11++);
          sub_4081D0(v13);
        }
        while ( v11 < *(_QWORD *)v12 );
      }
      ++v9;
      free(*(void **)(v12 + 16));
      if ( (unsigned __int64)v1[17] < v9 )
        break;
      v10 = (char *)v1[8];
    }
    v10 = (char *)v1[8];
  }
  free(v10);
  v14 = v1[15];
  if ( v14 != &unk_417BA0 )
    free(v14);
  free(v1[28]);
  free(v1);
}

void __fastcall sub_40BD60(__int64 a1)
{
  __int64 v1; // rbx@2
  signed __int64 v2; // rbp@3

  if ( *(_QWORD *)a1 > 0LL )
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

__int64 __fastcall sub_40BDB0(signed __int64 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, void *a5, __int64 a6)
{
  bool v6; // sf@1
  signed __int64 v7; // rax@1
  signed __int64 v8; // rbx@2
  __int64 v9; // rbp@2
  signed __int64 v10; // rax@2
  signed __int64 v11; // rbx@2

  v7 = *a1 - 1;
  v6 = v7 < 0;
  *a1 = v7;
  if ( v6 )
    __assert_fail("num >= 0", "lib/regexec.c", 0x54Fu, "pop_fail_stack");
  v8 = 48 * v7;
  v9 = a6;
  v10 = 48 * v7 + *a2;
  *a3 = *(_QWORD *)v10;
  memcpy(a5, *(const void **)(v10 + 16), 16 * a4);
  free(*(void **)(v9 + 16));
  free(*(void **)(*a2 + v8 + 16));
  v11 = *a2 + v8;
  *(__m128i *)v9 = _mm_loadu_si128((const __m128i *)(v11 + 24));
  *(_QWORD *)(v9 + 16) = *(_QWORD *)(v11 + 40);
  return *(_QWORD *)(v11 + 8);
}

signed __int64 __fastcall sub_40BE40(__int64 a1, const char *a2)
{
  signed __int64 result; // rax@2

  if ( strlen(a2) == 1 )
  {
    *(_QWORD *)(a1 + (((unsigned __int64)*a2 >> 3) & 0x18)) |= 1LL << *a2;
    result = 0LL;
  }
  else
  {
    result = 3LL;
  }
  return result;
}

signed __int64 __fastcall sub_40BE90(__int64 a1, __int64 a2, void **a3, __int64 *a4, signed __int64 *a5, const char *a6, __int64 a7)
{
  __int64 *v7; // r13@1
  const char *v8; // r12@1
  __int64 v9; // rbp@1
  __int64 v10; // rbx@1
  bool v11; // cf@1
  bool v12; // zf@1
  const char *v13; // rdi@2
  signed __int64 v14; // rcx@2
  const char *v15; // rsi@2
  char v16; // al@5
  bool v17; // cf@5
  bool v18; // zf@5
  __int64 v19; // rcx@7
  void *v20; // rax@7
  wctype_t *v21; // r13@8
  bool v22; // cf@8
  bool v23; // zf@8
  wctype_t v24; // rax@8
  const char *v25; // rdi@8
  signed __int64 v26; // rcx@8
  const char *v27; // rsi@8
  char v28; // al@11
  bool v29; // cf@11
  bool v30; // zf@11
  const char *v31; // rdi@12
  signed __int64 v32; // rcx@12
  const char *v33; // rsi@12
  char v34; // al@15
  bool v35; // cf@15
  bool v36; // zf@15
  const unsigned __int16 **v37; // rax@16
  signed __int64 v38; // rcx@16
  const unsigned __int16 *v39; // rdx@16
  const unsigned __int16 **v41; // rax@22
  signed __int64 v42; // rcx@22
  const unsigned __int16 *v43; // rdx@22
  signed __int64 v44; // rcx@27
  const char *v45; // rdi@27
  const char *v46; // rsi@27
  signed __int64 v47; // r14@33
  const char *v48; // rdi@35
  signed __int64 v49; // rcx@35
  const char *v50; // rsi@35
  char v51; // al@38
  bool v52; // cf@38
  bool v53; // zf@38
  const char *v54; // rdi@39
  signed __int64 v55; // rcx@39
  const char *v56; // rsi@39
  char v57; // al@42
  bool v58; // cf@42
  bool v59; // zf@42
  const unsigned __int16 **v60; // rax@43
  signed __int64 v61; // rcx@43
  const unsigned __int16 *v62; // rdx@43
  const unsigned __int16 **v63; // rax@48
  signed __int64 v64; // rcx@48
  const unsigned __int16 *v65; // rdx@48
  const char *v66; // rdi@53
  signed __int64 v67; // rcx@53
  const char *v68; // rsi@53
  char v69; // al@56
  bool v70; // cf@56
  bool v71; // zf@56
  const char *v72; // rdi@57
  signed __int64 v73; // rcx@57
  const char *v74; // rsi@57
  char v75; // al@60
  bool v76; // cf@60
  bool v77; // zf@60
  const unsigned __int16 **v78; // rax@61
  signed __int64 v79; // rcx@61
  const unsigned __int16 *v80; // rdx@61
  const unsigned __int16 **v81; // rax@66
  signed __int64 v82; // rcx@66
  const unsigned __int16 *v83; // rdx@66
  __int64 v84; // rax@71
  __int64 v85; // rax@76
  __int64 v86; // rax@81
  const char *v87; // rdi@86
  signed __int64 v88; // rcx@86
  const char *v89; // rsi@86
  char v90; // al@89
  bool v91; // cf@89
  bool v92; // zf@89
  const unsigned __int16 **v93; // rax@90
  signed __int64 v94; // rcx@90
  const unsigned __int16 *v95; // rdx@90
  const char *v96; // rdi@95
  signed __int64 v97; // rcx@95
  const char *v98; // rsi@95
  char v99; // al@98
  bool v100; // cf@98
  bool v101; // zf@98
  const unsigned __int16 **v102; // rax@99
  signed __int64 v103; // rcx@99
  const unsigned __int16 *v104; // rax@99
  const char *v105; // rdi@105
  signed __int64 v106; // rcx@105
  const char *v107; // rsi@105
  char v108; // al@108
  bool v109; // cf@108
  bool v110; // zf@108
  const unsigned __int16 **v111; // rax@109
  signed __int64 v112; // rcx@109
  const unsigned __int16 *v113; // rdx@109
  __int64 v114; // rax@114
  __int64 v115; // rax@119
  __int64 v116; // rax@124
  const char *v117; // rdi@129
  signed __int64 v118; // rcx@129
  const char *v119; // rsi@129
  const unsigned __int16 **v120; // rax@133
  signed __int64 v121; // rcx@133
  const unsigned __int16 *v122; // rsi@133
  __int64 v123; // rax@138
  const unsigned __int16 **v124; // rax@144
  signed __int64 v125; // rcx@144
  const unsigned __int16 *v126; // rsi@144
  __int64 v127; // rax@149
  const unsigned __int16 **v128; // rax@155
  signed __int64 v129; // rcx@155
  const unsigned __int16 *v130; // rsi@155
  __int64 v131; // rax@160
  __int64 v132; // rax@166
  __int64 v133; // rax@171
  __int64 v134; // rdx@176
  void **v135; // [sp+0h] [bp-38h]@33
  signed __int64 *v136; // [sp+8h] [bp-30h]@33

  v7 = a4;
  v8 = a6;
  v9 = a1;
  v10 = a2;
  v11 = 0;
  v12 = (a7 & 0x400000) == 0;
  if ( !(a7 & 0x400000) )
  {
LABEL_7:
    v19 = *v7;
    v20 = *a3;
    if ( *a5 != *v7 )
      goto LABEL_8;
    goto LABEL_33;
  }
  v13 = "upper";
  v14 = 6LL;
  v15 = a6;
  do
  {
    if ( !v14 )
      break;
    v11 = (const unsigned __int8)*v15 < *v13;
    v12 = *v15++ == *v13++;
    --v14;
  }
  while ( v12 );
  v16 = (!v11 && !v12) - v11;
  v17 = 0;
  v18 = v16 == 0;
  if ( !v16 )
  {
    v8 = "alpha";
    goto LABEL_7;
  }
  v44 = 6LL;
  v45 = "lower";
  v46 = a6;
  do
  {
    if ( !v44 )
      break;
    v17 = (const unsigned __int8)*v46 < *v45;
    v18 = *v46++ == *v45++;
    --v44;
  }
  while ( v18 );
  v19 = *v7;
  if ( (!v17 && !v18) == v17 )
    v8 = "alpha";
  v20 = *a3;
  if ( *a5 != v19 )
    goto LABEL_8;
LABEL_33:
  v47 = 2 * v19 + 1;
  v136 = a5;
  v135 = a3;
  v20 = realloc(v20, 8 * v47);
  if ( !v20 )
    return 12LL;
  *v135 = v20;
  *v136 = v47;
  v19 = *v7;
LABEL_8:
  *v7 = v19 + 1;
  v21 = (wctype_t *)((char *)v20 + 8 * v19);
  v24 = wctype(v8);
  v25 = "alnum";
  v26 = 6LL;
  v27 = v8;
  *v21 = v24;
  do
  {
    if ( !v26 )
      break;
    v22 = (const unsigned __int8)*v27 < *v25;
    v23 = *v27++ == *v25++;
    --v26;
  }
  while ( v23 );
  v28 = (!v22 && !v23) - v22;
  v29 = 0;
  v30 = v28 == 0;
  if ( !v28 )
  {
    v41 = __ctype_b_loc();
    v42 = 0LL;
    v43 = *v41;
    if ( v9 )
    {
      v84 = 0LL;
      do
      {
        if ( v43[v84] & 8 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v84) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v84);
        ++v84;
      }
      while ( v84 != 256 );
    }
    else
    {
      do
      {
        if ( v43[v42] & 8 )
          *(_QWORD *)(v10 + 8 * (v42 >> 6)) |= 1LL << v42;
        ++v42;
      }
      while ( v42 != 256 );
    }
    return 0LL;
  }
  v31 = "cntrl";
  v32 = 6LL;
  v33 = v8;
  do
  {
    if ( !v32 )
      break;
    v29 = (const unsigned __int8)*v33 < *v31;
    v30 = *v33++ == *v31++;
    --v32;
  }
  while ( v30 );
  v34 = (!v29 && !v30) - v29;
  v35 = 0;
  v36 = v34 == 0;
  if ( !v34 )
  {
    v37 = __ctype_b_loc();
    v38 = 0LL;
    v39 = *v37;
    if ( v9 )
    {
      v85 = 0LL;
      do
      {
        if ( v39[v85] & 2 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v85) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v85);
        ++v85;
      }
      while ( v85 != 256 );
    }
    else
    {
      do
      {
        if ( v39[v38] & 2 )
          *(_QWORD *)(v10 + 8 * (v38 >> 6)) |= 1LL << v38;
        ++v38;
      }
      while ( v38 != 256 );
    }
    return 0LL;
  }
  v48 = "lower";
  v49 = 6LL;
  v50 = v8;
  do
  {
    if ( !v49 )
      break;
    v35 = (const unsigned __int8)*v50 < *v48;
    v36 = *v50++ == *v48++;
    --v49;
  }
  while ( v36 );
  v51 = (!v35 && !v36) - v35;
  v52 = 0;
  v53 = v51 == 0;
  if ( !v51 )
  {
    v63 = __ctype_b_loc();
    v64 = 0LL;
    v65 = *v63;
    if ( v9 )
    {
      v86 = 0LL;
      do
      {
        if ( HIBYTE(v65[v86]) & 2 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v86) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v86);
        ++v86;
      }
      while ( v86 != 256 );
    }
    else
    {
      do
      {
        if ( HIBYTE(v65[v64]) & 2 )
          *(_QWORD *)(v10 + 8 * (v64 >> 6)) |= 1LL << v64;
        ++v64;
      }
      while ( v64 != 256 );
    }
    return 0LL;
  }
  v54 = "space";
  v55 = 6LL;
  v56 = v8;
  do
  {
    if ( !v55 )
      break;
    v52 = (const unsigned __int8)*v56 < *v54;
    v53 = *v56++ == *v54++;
    --v55;
  }
  while ( v53 );
  v57 = (!v52 && !v53) - v52;
  v58 = 0;
  v59 = v57 == 0;
  if ( !v57 )
  {
    v60 = __ctype_b_loc();
    v61 = 0LL;
    v62 = *v60;
    if ( v9 )
    {
      v115 = 0LL;
      do
      {
        if ( HIBYTE(v62[v115]) & 0x20 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v115) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v115);
        ++v115;
      }
      while ( v115 != 256 );
    }
    else
    {
      do
      {
        if ( HIBYTE(v62[v61]) & 0x20 )
          *(_QWORD *)(v10 + 8 * (v61 >> 6)) |= 1LL << v61;
        ++v61;
      }
      while ( v61 != 256 );
    }
    return 0LL;
  }
  v66 = "alpha";
  v67 = 6LL;
  v68 = v8;
  do
  {
    if ( !v67 )
      break;
    v58 = (const unsigned __int8)*v68 < *v66;
    v59 = *v68++ == *v66++;
    --v67;
  }
  while ( v59 );
  v69 = (!v58 && !v59) - v58;
  v70 = 0;
  v71 = v69 == 0;
  if ( !v69 )
  {
    v81 = __ctype_b_loc();
    v82 = 0LL;
    v83 = *v81;
    if ( v9 )
    {
      v114 = 0LL;
      do
      {
        if ( HIBYTE(v83[v114]) & 4 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v114) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v114);
        ++v114;
      }
      while ( v114 != 256 );
    }
    else
    {
      do
      {
        if ( HIBYTE(v83[v82]) & 4 )
          *(_QWORD *)(v10 + 8 * (v82 >> 6)) |= 1LL << v82;
        ++v82;
      }
      while ( v82 != 256 );
    }
    return 0LL;
  }
  v72 = "digit";
  v73 = 6LL;
  v74 = v8;
  do
  {
    if ( !v73 )
      break;
    v70 = (const unsigned __int8)*v74 < *v72;
    v71 = *v74++ == *v72++;
    --v73;
  }
  while ( v71 );
  v75 = (!v70 && !v71) - v70;
  v76 = 0;
  v77 = v75 == 0;
  if ( !v75 )
  {
    v78 = __ctype_b_loc();
    v79 = 0LL;
    v80 = *v78;
    if ( v9 )
    {
      v116 = 0LL;
      do
      {
        if ( HIBYTE(v80[v116]) & 8 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v116) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v116);
        ++v116;
      }
      while ( v116 != 256 );
    }
    else
    {
      do
      {
        if ( HIBYTE(v80[v79]) & 8 )
          *(_QWORD *)(v10 + 8 * (v79 >> 6)) |= 1LL << v79;
        ++v79;
      }
      while ( v79 != 256 );
    }
    return 0LL;
  }
  v87 = "print";
  v88 = 6LL;
  v89 = v8;
  do
  {
    if ( !v88 )
      break;
    v76 = (const unsigned __int8)*v89 < *v87;
    v77 = *v89++ == *v87++;
    --v88;
  }
  while ( v77 );
  v90 = (!v76 && !v77) - v76;
  v91 = 0;
  v92 = v90 == 0;
  if ( !v90 )
  {
    v93 = __ctype_b_loc();
    v94 = 0LL;
    v95 = *v93;
    if ( v9 )
    {
      v132 = 0LL;
      do
      {
        if ( HIBYTE(v95[v132]) & 0x40 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v132) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v132);
        ++v132;
      }
      while ( v132 != 256 );
    }
    else
    {
      do
      {
        if ( HIBYTE(v95[v94]) & 0x40 )
          *(_QWORD *)(v10 + 8 * (v94 >> 6)) |= 1LL << v94;
        ++v94;
      }
      while ( v94 != 256 );
    }
    return 0LL;
  }
  v96 = "upper";
  v97 = 6LL;
  v98 = v8;
  do
  {
    if ( !v97 )
      break;
    v91 = (const unsigned __int8)*v98 < *v96;
    v92 = *v98++ == *v96++;
    --v97;
  }
  while ( v92 );
  v99 = (!v91 && !v92) - v91;
  v100 = 0;
  v101 = v99 == 0;
  if ( !v99 )
  {
    v102 = __ctype_b_loc();
    v103 = 0LL;
    v104 = *v102;
    if ( v9 )
    {
      v134 = 0LL;
      do
      {
        if ( HIBYTE(v104[v134]) & 1 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v134) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v134);
        ++v134;
      }
      while ( v134 != 256 );
    }
    else
    {
      do
      {
        if ( HIBYTE(v104[v103]) & 1 )
          *(_QWORD *)(v10 + 8 * (v103 >> 6)) |= 1LL << v103;
        ++v103;
      }
      while ( v103 != 256 );
    }
    return 0LL;
  }
  v105 = "blank";
  v106 = 6LL;
  v107 = v8;
  do
  {
    if ( !v106 )
      break;
    v100 = (const unsigned __int8)*v107 < *v105;
    v101 = *v107++ == *v105++;
    --v106;
  }
  while ( v101 );
  v108 = (!v100 && !v101) - v100;
  v109 = 0;
  v110 = v108 == 0;
  if ( !v108 )
  {
    v111 = __ctype_b_loc();
    v112 = 0LL;
    v113 = *v111;
    if ( v9 )
    {
      v133 = 0LL;
      do
      {
        if ( v113[v133] & 1 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v133) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v133);
        ++v133;
      }
      while ( v133 != 256 );
    }
    else
    {
      do
      {
        if ( v113[v112] & 1 )
          *(_QWORD *)(v10 + 8 * (v112 >> 6)) |= 1LL << v112;
        ++v112;
      }
      while ( v112 != 256 );
    }
    return 0LL;
  }
  v117 = "graph";
  v118 = 6LL;
  v119 = v8;
  do
  {
    if ( !v118 )
      break;
    v109 = (const unsigned __int8)*v119 < *v117;
    v110 = *v119++ == *v117++;
    --v118;
  }
  while ( v110 );
  if ( (!v109 && !v110) == v109 )
  {
    v120 = __ctype_b_loc();
    v121 = 0LL;
    v122 = *v120;
    if ( v9 )
    {
      v123 = 0LL;
      do
      {
        if ( (v122[v123] & 0x8000u) != 0 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v123) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v123);
        ++v123;
      }
      while ( v123 != 256 );
    }
    else
    {
      do
      {
        if ( (v122[v121] & 0x8000u) != 0 )
          *(_QWORD *)(v10 + 8 * (v121 >> 6)) |= 1LL << v121;
        ++v121;
      }
      while ( v121 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "punct") )
  {
    v124 = __ctype_b_loc();
    v125 = 0LL;
    v126 = *v124;
    if ( v9 )
    {
      v127 = 0LL;
      do
      {
        if ( v126[v127] & 4 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v127) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v127);
        ++v127;
      }
      while ( v127 != 256 );
    }
    else
    {
      do
      {
        if ( v126[v125] & 4 )
          *(_QWORD *)(v10 + 8 * (v125 >> 6)) |= 1LL << v125;
        ++v125;
      }
      while ( v125 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, "xdigit") )
  {
    v128 = __ctype_b_loc();
    v129 = 0LL;
    v130 = *v128;
    if ( v9 )
    {
      v131 = 0LL;
      do
      {
        if ( HIBYTE(v130[v131]) & 0x10 )
          *(_QWORD *)(v10 + (((unsigned __int64)*(_BYTE *)(v9 + v131) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(v9 + v131);
        ++v131;
      }
      while ( v131 != 256 );
    }
    else
    {
      do
      {
        if ( HIBYTE(v130[v129]) & 0x10 )
          *(_QWORD *)(v10 + 8 * (v129 >> 6)) |= 1LL << v129;
        ++v129;
      }
      while ( v129 != 256 );
    }
    return 0LL;
  }
  return 4LL;
}

char *__fastcall sub_40C660(__int64 a1, __int64 a2, const char *a3, _BYTE *a4, char a5, _DWORD *a6)
{
  const char *v6; // r14@1
  _BYTE *v7; // r13@1
  char v8; // r12@1
  void *v9; // rax@1
  void *v10; // rbx@2
  void *v11; // rax@2
  __int64 v12; // r15@2
  int v13; // eax@3
  signed __int64 i; // rcx@4
  signed __int64 v15; // rax@5
  signed __int64 v16; // rdx@7
  char *v17; // rax@9
  __int64 v18; // rcx@12
  __int64 v19; // rax@12
  char *v20; // r14@14
  char *v21; // rax@16
  int v23; // ST10_4@23
  _DWORD *v24; // [sp+8h] [bp-70h]@1
  __int64 v25; // [sp+18h] [bp-60h]@1
  __int64 v26; // [sp+20h] [bp-58h]@14
  char v27; // [sp+28h] [bp-50h]@14
  char v28; // [sp+30h] [bp-48h]@17
  char v29; // [sp+38h] [bp-40h]@17

  v6 = a3;
  v7 = a4;
  v8 = a5;
  v24 = a6;
  v25 = 0LL;
  v9 = calloc(0x20uLL, 1uLL);
  if ( !v9 )
    goto LABEL_20;
  v10 = v9;
  v11 = calloc(0x50uLL, 1uLL);
  v12 = (__int64)v11;
  if ( !v11 )
  {
    v20 = 0LL;
    free(v10);
    *v24 = 12;
    return v20;
  }
  *((_BYTE *)v11 + 32) = v8 & 1 | *((_BYTE *)v11 + 32) & 0xFE;
  v13 = sub_40BE90(a2, (__int64)v10, (void **)v11 + 3, (__int64 *)v11 + 9, &v25, v6, 0LL);
  if ( v13 )
  {
    v23 = v13;
    v20 = 0LL;
    free(v10);
    sub_407C60(v12);
    *v24 = v23;
    return v20;
  }
  for ( i = *v7; (_BYTE)i; *((_QWORD *)v10 + (v15 >> 6)) |= v16 )
  {
    v15 = i + 63;
    if ( i >= 0 )
      v15 = i;
    ++v7;
    v16 = 1LL << (char)i % 64;
    i = *v7;
  }
  if ( v8 )
  {
    v17 = (char *)v10;
    do
    {
      *(_QWORD *)v17 = ~*(_QWORD *)v17;
      v17 += 8;
    }
    while ( (char *)v10 + 32 != v17 );
  }
  if ( *(_DWORD *)(a1 + 180) > 1 )
  {
    v18 = *(_QWORD *)(a1 + 120);
    v19 = 0LL;
    do
    {
      *(_QWORD *)((char *)v10 + v19) &= *(_QWORD *)(v18 + v19);
      v19 += 8LL;
    }
    while ( v19 != 32 );
  }
  v27 = 3;
  v26 = (__int64)v10;
  v20 = sub_409270((char **)(a1 + 112), (signed int *)(a1 + 128), 0LL, 0LL, (const __m128i *)&v26);
  if ( !v20 )
    goto LABEL_26;
  if ( *(_DWORD *)(a1 + 180) <= 1 )
  {
    sub_407C60(v12);
    return v20;
  }
  *(_BYTE *)(a1 + 176) |= 2u;
  v27 = 6;
  v26 = v12;
  v21 = sub_409270((char **)(a1 + 112), (signed int *)(a1 + 128), 0LL, 0LL, (const __m128i *)&v26);
  if ( !v21 )
  {
LABEL_26:
    free(v10);
    sub_407C60(v12);
LABEL_20:
    v20 = 0LL;
    *v24 = 12;
    return v20;
  }
  v29 = 10;
  return sub_409270((char **)(a1 + 112), (signed int *)(a1 + 128), (char **)v20, (char **)v21, (const __m128i *)&v28);
}

_QWORD *__fastcall sub_40C8A0(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  signed __int64 v4; // r12@1
  _QWORD *result; // rax@1
  __int64 v6; // rbx@3
  __int64 v7; // r15@4
  __int64 v8; // r14@10
  __int64 v9; // rcx@10
  signed __int64 v10; // rsi@10
  __int64 v11; // rdx@11
  __int64 v12; // rax@15
  unsigned __int64 v13; // rdx@15
  signed __int64 v14; // rax@16
  char *v15; // rsi@17
  size_t v16; // r13@20
  wchar_t v17; // eax@22
  __int64 v18; // r13@25
  __int64 i; // r14@29
  __int64 v20; // rdx@33
  wchar_t v21; // eax@37
  unsigned __int64 v22; // r14@45
  __int64 v23; // rbp@45
  signed __int64 v24; // r13@45
  _BYTE *v25; // rax@47
  __m128i v26; // xmm0@54
  __m128i v27; // xmm0@56
  _QWORD *v28; // [sp+0h] [bp-178h]@1
  __int64 v29; // [sp+8h] [bp-170h]@44
  signed __int64 v30; // [sp+10h] [bp-168h]@10
  _QWORD *v31; // [sp+20h] [bp-158h]@4
  _QWORD *v32; // [sp+28h] [bp-150h]@4
  wint_t wc; // [sp+34h] [bp-144h]@21
  mbstate_t ps; // [sp+38h] [bp-140h]@21
  mbstate_t s; // [sp+40h] [bp-138h]@15

  LODWORD(v4) = 0;
  result = (_QWORD *)*a1;
  v28 = (_QWORD *)*a1;
  if ( *(_DWORD *)(*a1 + 180LL) == 1 )
    v4 = (a1[3] >> 22) & 1LL;
  v6 = 0LL;
  if ( *a2 <= 0LL )
    return result;
  v7 = a4;
  v31 = a3;
  v32 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*v31 + 8 * v6);
      v9 = *v28;
      v10 = *v28 + 16LL * *(_QWORD *)(*v31 + 8 * v6);
      v30 = 16LL * *(_QWORD *)(*v31 + 8 * v6);
      result = (_QWORD *)*(_BYTE *)(v10 + 8);
      if ( (_DWORD)result != 1 )
        break;
      v11 = *(_BYTE *)v10;
      *(_BYTE *)(v7 + v11) = 1;
      if ( (_DWORD)v4 )
        *(_BYTE *)(v7 + (*__ctype_tolower_loc())[v11]) = 1;
      if ( !(*((_BYTE *)a1 + 26) & 0x40) || *((_DWORD *)v28 + 45) <= 1 )
        goto LABEL_9;
      v12 = *v28;
      LOBYTE(s.__count) = *(_BYTE *)(*v28 + v30);
      v13 = v8 + 1;
      if ( v28[2] <= (unsigned __int64)(v8 + 1) || (v14 = v12 + v30 + 16, (*(_DWORD *)(v14 + 8) & 0x2000FF) != 2097153) )
      {
        v16 = 1LL;
      }
      else
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
      ps = 0LL;
      if ( sub_4069D0((wchar_t *)&wc, (char *)&s, v16, &ps) != v16 )
        goto LABEL_9;
      v17 = towlower(wc);
      if ( wcrtomb((char *)&s, v17, &ps) == -1LL )
        goto LABEL_9;
      ++v6;
      *(_BYTE *)(v7 + LOBYTE(s.__count)) = 1;
      result = v32;
      if ( v6 >= *v32 )
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
            v25 = (_BYTE *)(v7 + v24);
            *(_BYTE *)(v7 + v24) = 1;
            if ( (_DWORD)v4 )
            {
              if ( (unsigned int)(v24 + 128) <= 0x17F )
                v25 = (_BYTE *)(v7 + (*__ctype_tolower_loc())[v24]);
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
      if ( *((_DWORD *)v28 + 45) > 1 && (*(_QWORD *)(v18 + 72) || *(_BYTE *)(v18 + 32) & 1 || *(_QWORD *)(v18 + 64)) )
      {
        LOBYTE(ps.__count) = 0;
        do
        {
          s = 0LL;
          if ( sub_4069D0(0LL, (char *)&ps, 1uLL, &s) == -2LL )
            *(_BYTE *)(v7 + LOBYTE(ps.__count)) = 1;
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
            v20 = LOBYTE(s.__count);
            *(_BYTE *)(v7 + LOBYTE(s.__count)) = 1;
            if ( (_DWORD)v4 )
              *(_BYTE *)(v7 + (*__ctype_tolower_loc())[v20]) = 1;
          }
          if ( *((_BYTE *)a1 + 26) & 0x40 )
          {
            if ( *((_DWORD *)v28 + 45) > 1 )
            {
              v21 = towlower(*(_DWORD *)(*(_QWORD *)v18 + 4 * i));
              if ( wcrtomb((char *)&s, v21, &ps) != -1LL )
                *(_BYTE *)(v7 + LOBYTE(s.__count)) = 1;
            }
          }
        }
      }
      goto LABEL_9;
    }
    if ( (*(_BYTE *)(v10 + 8) & 0xFD) == 5 )
      break;
    if ( (_DWORD)result == 2 )
    {
      v27 = _mm_load_si128((const __m128i *)&xmmword_417DE0);
      *(__m128i *)v7 = v27;
      *(__m128i *)(v7 + 16) = v27;
      *(__m128i *)(v7 + 32) = v27;
      *(__m128i *)(v7 + 48) = v27;
      *(__m128i *)(v7 + 64) = v27;
      *(__m128i *)(v7 + 80) = v27;
      *(__m128i *)(v7 + 96) = v27;
      *(__m128i *)(v7 + 112) = v27;
      *(__m128i *)(v7 + 128) = v27;
      *(__m128i *)(v7 + 144) = v27;
      *(__m128i *)(v7 + 160) = v27;
      *(__m128i *)(v7 + 176) = v27;
      *(__m128i *)(v7 + 192) = v27;
      *(__m128i *)(v7 + 208) = v27;
      *(__m128i *)(v7 + 224) = v27;
      *(__m128i *)(v7 + 240) = v27;
      goto LABEL_57;
    }
LABEL_9:
    result = v32;
    if ( ++v6 >= *v32 )
      return result;
  }
  v26 = _mm_load_si128((const __m128i *)&xmmword_417DE0);
  *(__m128i *)v7 = v26;
  *(__m128i *)(v7 + 16) = v26;
  *(__m128i *)(v7 + 32) = v26;
  *(__m128i *)(v7 + 48) = v26;
  *(__m128i *)(v7 + 64) = v26;
  *(__m128i *)(v7 + 80) = v26;
  *(__m128i *)(v7 + 96) = v26;
  *(__m128i *)(v7 + 112) = v26;
  *(__m128i *)(v7 + 128) = v26;
  *(__m128i *)(v7 + 144) = v26;
  *(__m128i *)(v7 + 160) = v26;
  *(__m128i *)(v7 + 176) = v26;
  *(__m128i *)(v7 + 192) = v26;
  *(__m128i *)(v7 + 208) = v26;
  *(__m128i *)(v7 + 224) = v26;
  *(__m128i *)(v7 + 240) = v26;
  if ( (_DWORD)result != 2 )
    return result;
LABEL_57:
  result = a1;
  *((_BYTE *)result + 56) |= 1u;
  return result;
}

__int64 __fastcall sub_40CD80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  signed int v5; // eax@3
  __int64 v6; // r8@3
  __int64 v7; // r9@3
  __int64 v8; // r10@3
  char v9; // r11@3
  signed int v10; // ebp@3
  __int64 v12; // r13@14
  __int64 v13; // rsi@14
  __int64 v14; // rdx@14
  wint_t v15; // er12@16
  __int64 v16; // rax@18
  __int64 v17; // rbx@22
  __int64 v18; // rax@27
  unsigned __int8 v19; // dl@27
  signed __int64 v20; // rcx@28
  unsigned __int8 v21; // di@29
  signed __int64 v22; // rdi@33
  _BYTE *v23; // rdx@35
  _BYTE *v24; // rax@35
  __int64 v25; // rax@41

  if ( *(_BYTE *)(a1 + 16 * a3 + 8) == 7 )
  {
    v18 = *(_QWORD *)(a4 + 8);
    v19 = *(_BYTE *)(v18 + a5);
    if ( v19 <= 0xC1u )
      goto LABEL_6;
    v20 = *(_QWORD *)(a4 + 88);
    if ( a5 + 1 >= v20 )
      goto LABEL_6;
    v21 = *(_BYTE *)(v18 + a5 + 1);
    if ( v19 <= 0xDFu )
    {
      v10 = 2;
      if ( (unsigned __int8)(v21 + -128) <= 0x3Fu )
        return (unsigned int)v10;
      goto LABEL_6;
    }
    if ( v19 > 0xEFu )
    {
      if ( v19 > 0xF7u )
      {
        if ( v19 > 0xFBu )
        {
          if ( v19 > 0xFDu || v19 == -4 && v21 <= 0x83u )
            goto LABEL_6;
          v22 = 6LL;
          v10 = 6;
        }
        else
        {
          if ( v19 == -8 && v21 <= 0x87u )
            goto LABEL_6;
          v22 = 5LL;
          v10 = 5;
        }
      }
      else
      {
        if ( v19 == -16 && v21 <= 0x8Fu )
          goto LABEL_6;
        v22 = 4LL;
        v10 = 4;
      }
    }
    else
    {
      if ( v19 == -32 && v21 <= 0x9Fu )
        goto LABEL_6;
      v22 = 3LL;
      v10 = 3;
    }
    if ( v20 >= a5 + v22 )
    {
      v23 = (_BYTE *)(v18 + a5 + 1);
      v24 = (_BYTE *)(v22 + a5 + v18);
      while ( (unsigned __int8)(*v23 + -128) <= 0x3Fu )
      {
        if ( v24 == ++v23 )
          return (unsigned int)v10;
      }
    }
    goto LABEL_6;
  }
  if ( *(_DWORD *)(a4 + 144) == 1 )
LABEL_6:
    return 0;
  v5 = sub_4085B0(a4, a5);
  v10 = v5;
  if ( v9 != 5 )
  {
    if ( v9 != 6 || v5 <= 1 )
      goto LABEL_6;
    v12 = *(_QWORD *)v8;
    v13 = *(_QWORD *)(*(_QWORD *)v8 + 64LL);
    v14 = *(_QWORD *)(*(_QWORD *)v8 + 40LL);
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
      if ( *(_QWORD *)(v12 + 72) > 0LL )
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
        if ( !(*(_BYTE *)(v12 + 32) & 1) )
          return (unsigned int)v10;
        goto LABEL_6;
      }
LABEL_40:
      if ( v13 > 0 )
      {
        v25 = 0LL;
        while ( (signed int)v15 < *(_DWORD *)(*(_QWORD *)(v12 + 8) + 4 * v25)
             || (signed int)v15 > *(_DWORD *)(*(_QWORD *)(v12 + 16) + 4 * v25) )
        {
          if ( ++v25 == v13 )
            goto LABEL_45;
        }
        goto LABEL_25;
      }
    }
LABEL_45:
    if ( *(_BYTE *)(v12 + 32) & 1 )
      return (unsigned int)v10;
    goto LABEL_6;
  }
  if ( v5 <= 1
    || !(*a2 & 0x40) && *(_BYTE *)(*(_QWORD *)(v7 + 8) + v6) == 10
    || *a2 & 0x80 && !*(_BYTE *)(*(_QWORD *)(v7 + 8) + v6) )
  {
    goto LABEL_6;
  }
  return (unsigned int)v10;
}

signed __int64 __fastcall sub_40D010(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v7; // r13@1
  __int64 v8; // r12@1
  __int64 v9; // rbp@1
  __int64 v10; // r15@1
  __int64 v11; // rax@1
  __int64 v12; // rax@1
  int v13; // edx@2
  __int64 v14; // rbx@2
  __int64 v15; // r14@2
  __int64 v16; // rcx@2
  __int64 v17; // r15@4
  __int64 v18; // rax@9
  __int64 v19; // r14@9
  __int64 v20; // rsi@10
  bool v21; // zf@13
  bool v22; // sf@13
  __int64 v23; // rbp@13
  __int64 v24; // r14@14
  __int64 v25; // rax@19
  __int64 v26; // r13@19
  signed __int64 v27; // rbx@19
  __int64 v28; // rsi@19
  signed int v29; // eax@20
  __int64 v30; // rbx@21
  __int64 v31; // rdx@21
  __int64 v32; // rsi@21
  __int64 v33; // ST40_8@22
  int v34; // eax@22
  __int64 *v35; // r13@24
  unsigned int v36; // eax@30
  __int64 v37; // rax@34
  signed __int64 result; // rax@35
  __int128 *v39; // r13@43
  void *v40; // rdi@49
  void *v41; // rax@54
  signed __int64 v42; // rbx@57
  signed __int64 v43; // r14@58
  char *v44; // rax@59
  unsigned int v45; // [sp+0h] [bp-F8h]@3
  __int64 v46; // [sp+0h] [bp-F8h]@10
  signed __int64 v47; // [sp+8h] [bp-F0h]@16
  signed __int64 v48; // [sp+10h] [bp-E8h]@9
  signed __int64 v49; // [sp+18h] [bp-E0h]@10
  __int64 v50; // [sp+20h] [bp-D8h]@1
  __int64 v51; // [sp+30h] [bp-C8h]@1
  __int64 v52; // [sp+38h] [bp-C0h]@1
  __int64 v53; // [sp+48h] [bp-B0h]@14
  __int64 *v54; // [sp+50h] [bp-A8h]@1
  __int64 v55; // [sp+58h] [bp-A0h]@2
  __int64 v56; // [sp+60h] [bp-98h]@2
  __int64 v57; // [sp+68h] [bp-90h]@1
  unsigned int v58; // [sp+78h] [bp-80h]@1
  unsigned int v59; // [sp+7Ch] [bp-7Ch]@13
  __int128 v60; // [sp+80h] [bp-78h]@6
  void *v61; // [sp+90h] [bp-68h]@6
  __int128 v62; // [sp+A0h] [bp-58h]@13
  void *ptr; // [sp+B0h] [bp-48h]@13

  v7 = a3;
  v8 = a1;
  v9 = a4;
  v10 = *(_QWORD *)(a2 + 8);
  v54 = (__int64 *)a2;
  v57 = a5;
  v51 = a6;
  v50 = *(_QWORD *)(a1 + 152);
  v52 = *(_QWORD *)(**(_QWORD **)(a1 + 152) + 16 * a3);
  v11 = *(_DWORD *)(a1 + 224);
  v58 = 0;
  v12 = a6 + v11;
  if ( v12 >= v10 )
  {
    v42 = v12 + 1;
    if ( 0x7FFFFFFFFFFFFFFFLL - v10 < v12 + 1 )
      return 12LL;
    v43 = v10 + v42;
    if ( (unsigned __int64)(v10 + v42) > 0x1FFFFFFFFFFFFFFFLL )
      return 12LL;
    v44 = (char *)realloc(*(void **)(a2 + 16), 8 * v43);
    if ( !v44 )
      return 12LL;
    *(_QWORD *)(a2 + 16) = v44;
    *(_QWORD *)(a2 + 8) = v43;
    memset(&v44[8 * v10], 0, 8 * v42);
  }
  v13 = *(_DWORD *)(a1 + 160);
  v14 = *(_QWORD *)a2;
  v15 = *(_QWORD *)(a2 + 16);
  v55 = *(_QWORD *)(a1 + 184);
  v16 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 184) = v15;
  v56 = v16;
  if ( v14 )
  {
    *(_QWORD *)(a1 + 72) = v14;
    v45 = sub_40A330(a1, v14 - 1, v13);
    if ( v14 != v9 )
    {
      v17 = *(_QWORD *)(v15 + 8 * v14);
      if ( !v17 || !(*(_BYTE *)(v17 + 104) & 0x40) )
      {
        v61 = 0LL;
        v60 = 0LL;
        goto LABEL_7;
      }
      v39 = &v60;
      result = sub_4096A0((__int64)&v60, v17 + 8);
      v58 = result;
      if ( (_DWORD)result )
        return result;
      if ( !(*(_BYTE *)(v17 + 104) & 0x40) )
        goto LABEL_7;
      goto LABEL_45;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 72) = v9;
    v45 = sub_40A330(a1, v9 - 1, v13);
  }
  *(_QWORD *)&v60 = 1LL;
  *((_QWORD *)&v60 + 1) = 1LL;
  v41 = malloc(8uLL);
  v61 = v41;
  if ( !v41 )
    return 12LL;
  *(_QWORD *)v41 = v7;
  v14 = v9;
  v39 = &v60;
  v58 = sub_408F70(v50, (__int64)&v60, v52, a7);
  if ( v58 )
  {
LABEL_41:
    free(v61);
    return v58;
  }
LABEL_45:
  if ( *((_QWORD *)&v60 + 1) )
  {
    v58 = sub_409E50(a1, (__int64)v39, v14, v52, a7);
    if ( v58 )
      goto LABEL_41;
  }
  v17 = sub_4098B0(&v58, v50, (__int64)v39, v45);
  if ( !v17 )
  {
    if ( v58 )
      goto LABEL_41;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v14) = v17;
LABEL_7:
  if ( v14 < v51 && *(_DWORD *)(a1 + 224) >= 0 )
  {
    v48 = 0LL;
    v18 = *(_QWORD *)(a1 + 184);
    v19 = v14 + 1;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v18 + 8 * v19);
      *((_QWORD *)&v60 + 1) = 0LL;
      v46 = v19 - 1;
      v49 = 8 * v19;
      if ( v20 )
      {
        v58 = sub_408B40((__int64)&v60, v20 + 8);
        if ( v58 )
          goto LABEL_41;
        if ( !v17 )
          goto LABEL_27;
      }
      else if ( !v17 )
      {
        v14 = v19;
        goto LABEL_30;
      }
      v21 = *(_QWORD *)(v17 + 40) == 0LL;
      v22 = *(_QWORD *)(v17 + 40) < 0;
      v23 = *(_QWORD *)(v8 + 152);
      v59 = 0;
      v62 = 0LL;
      ptr = 0LL;
      if ( !v22 && !v21 )
      {
        v53 = v19;
        v24 = 0LL;
        while ( 1 )
        {
          v25 = *(_QWORD *)(v17 + 48);
          v26 = *(_QWORD *)(v25 + 8 * v24);
          v27 = 16LL * *(_QWORD *)(v25 + 8 * v24);
          v28 = *(_QWORD *)v23 + v27;
          if ( *(_BYTE *)(v28 + 10) & 0x10 )
          {
            v29 = sub_40CD80(*(_QWORD *)v23, (_QWORD *)(v23 + 216), *(_QWORD *)(v25 + 8 * v24), v8, v46);
            if ( v29 > 1 )
            {
              v47 = 8 * v26;
              v30 = v29 + v46;
              v31 = *(_QWORD *)(*(_QWORD *)(v23 + 24) + 8 * v26);
              v32 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8 * v30);
              *((_QWORD *)&v62 + 1) = 0LL;
              if ( v32 )
              {
                v33 = v31;
                v34 = sub_408B40((__int64)&v62, v32 + 8);
                v31 = v33;
                v59 = v34;
                if ( v34 )
                  goto LABEL_68;
              }
              if ( !(unsigned __int8)sub_406FF0((__int64)&v62, v31) )
              {
LABEL_40:
                free(ptr);
                v58 = 12;
                goto LABEL_41;
              }
              v35 = (__int64 *)(*(_QWORD *)(v8 + 184) + 8 * v30);
              *v35 = sub_409BB0(&v59, v23, (__int64)&v62);
              if ( !*(_QWORD *)(*(_QWORD *)(v8 + 184) + 8 * v30) )
              {
                if ( v59 )
                {
LABEL_68:
                  v19 = v53;
                  free(ptr);
                  v58 = v59;
                  if ( v59 )
                    goto LABEL_41;
                  goto LABEL_27;
                }
              }
              goto LABEL_17;
            }
            if ( v29 )
            {
LABEL_16:
              v47 = 8 * v26;
LABEL_17:
              if ( !(unsigned __int8)sub_406FF0((__int64)&v60, *(_QWORD *)(*(_QWORD *)(v23 + 24) + v47)) )
                goto LABEL_40;
              goto LABEL_18;
            }
            v28 = *(_QWORD *)v23 + v27;
          }
          if ( (unsigned __int8)sub_40A420(v8, v28, v46) )
            goto LABEL_16;
LABEL_18:
          if ( ++v24 >= *(_QWORD *)(v17 + 40) )
          {
            v19 = v53;
            v40 = ptr;
            goto LABEL_50;
          }
        }
      }
      v40 = 0LL;
LABEL_50:
      free(v40);
      v58 = 0;
LABEL_27:
      v14 = v19;
      if ( *((_QWORD *)&v60 + 1) )
      {
        v58 = sub_408F70(v50, (__int64)&v60, v52, a7);
        if ( v58 )
          goto LABEL_41;
        v58 = sub_409E50(v8, (__int64)&v60, v19, v52, a7);
        if ( v58 )
          goto LABEL_41;
      }
LABEL_30:
      v36 = sub_40A330(v8, v46, *(_DWORD *)(v8 + 160));
      v17 = sub_4098B0(&v58, v50, (__int64)&v60, v36);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v8 + 184);
        v48 = 0LL;
        *(_QWORD *)(v18 + v49) = v17;
      }
      else
      {
        if ( v58 )
          goto LABEL_41;
        v18 = *(_QWORD *)(v8 + 184);
        ++v48;
        *(_QWORD *)(v18 + v49) = 0LL;
      }
      if ( v51 > v19 )
      {
        ++v19;
        if ( *(_DWORD *)(v8 + 224) >= v48 )
          continue;
      }
      break;
    }
  }
  free(v61);
  v37 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8 * v51);
  if ( v37 )
  {
    *v54 = v14;
    *(_QWORD *)(v8 + 184) = v55;
    *(_QWORD *)(v8 + 72) = v56;
    result = sub_408600(*(_QWORD *)(v37 + 16), (__int64 *)(v37 + 24), v57) == 0;
  }
  else
  {
    *v54 = v14;
    *(_QWORD *)(v8 + 184) = v55;
    *(_QWORD *)(v8 + 72) = v56;
    result = 1LL;
  }
  return result;
}

signed __int64 __fastcall sub_40D730(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r13@1
  __int64 v6; // r12@1
  __int64 v7; // rax@1
  __int64 v8; // rbx@3
  void *v9; // rsp@4
  __int64 v10; // rcx@5
  __int64 v11; // r14@9
  __int64 v12; // rdi@9
  __int64 v13; // rsi@9
  char v14; // al@9
  __int64 v15; // rcx@12
  __int64 v16; // rdx@14
  __int64 v17; // rax@17
  __int64 v18; // rax@22
  __int64 v19; // r15@23
  signed __int64 v20; // r9@23
  signed __int64 v21; // rsi@23
  int v22; // edx@23
  signed __int64 v23; // rdx@24
  signed __int64 v24; // rdx@25
  __int64 v25; // rax@26
  signed __int64 v26; // r15@26
  __int64 v27; // r11@28
  __int64 v28; // rax@28
  __int64 v29; // r15@28
  signed __int64 v30; // r9@28
  signed __int64 v31; // r12@28
  __int64 v32; // rbx@28
  __int64 *v33; // r11@28
  signed __int64 v34; // r14@29
  __int64 v35; // r9@29
  __int64 v36; // r10@29
  __int64 v37; // rax@36
  __int64 *v38; // rdi@38
  signed __int64 result; // rax@40
  signed __int64 v40; // rdx@42
  signed __int64 v41; // rdx@43
  signed __int64 v42; // rax@43
  int v43; // eax@47
  size_t v44; // rcx@47
  signed __int64 v45; // rax@49
  __int64 v46; // rdi@49
  __int64 v47; // rax@53
  __int64 v48; // r15@53
  int v49; // eax@53
  __int64 v50; // rdx@55
  __int64 *v51; // rcx@56
  signed __int64 v52; // r15@57
  __int64 v53; // rdx@57
  signed __int64 v54; // rax@57
  char *v55; // rax@58
  signed __int64 v56; // r15@59
  size_t v57; // r14@59
  void *v58; // rax@59
  __int64 v59; // rax@67
  __int64 v60; // rdx@67
  signed __int64 v61; // rax@77
  __int64 v62; // rax@77
  __int64 *v63; // rcx@86
  __int64 v64; // [sp+8h] [bp-C8h]@77
  __int64 v65; // [sp+8h] [bp-C8h]@78
  signed __int64 v66; // [sp+8h] [bp-C8h]@83
  __int64 v67; // [sp+8h] [bp-C8h]@84
  char v68; // [sp+17h] [bp-B9h]@4
  __int64 *v69; // [sp+18h] [bp-B8h]@5
  void *dest; // [sp+20h] [bp-B0h]@4
  size_t n; // [sp+28h] [bp-A8h]@3
  __int64 v72; // [sp+30h] [bp-A0h]@13
  __int64 v73; // [sp+38h] [bp-98h]@1
  __int64 v74; // [sp+40h] [bp-90h]@1
  __int64 *v75; // [sp+48h] [bp-88h]@2
  __int64 v76; // [sp+58h] [bp-78h]@5
  __int128 v77; // [sp+60h] [bp-70h]@3
  void *ptr; // [sp+70h] [bp-60h]@3
  __int64 v79; // [sp+80h] [bp-50h]@1
  __int64 v80; // [sp+88h] [bp-48h]@1
  void *v81; // [sp+90h] [bp-40h]@1

  v5 = a4;
  v6 = a2;
  v7 = *a1;
  v73 = a3;
  v79 = 0LL;
  v74 = v7;
  v80 = 2LL;
  v81 = 0LL;
  if ( a5 )
  {
    v75 = &v79;
    v81 = malloc(0x60uLL);
    if ( !v81 )
      return 12LL;
  }
  else
  {
    v75 = 0LL;
  }
  ptr = 0LL;
  v77 = 0LL;
  v8 = *(_QWORD *)(v74 + 144);
  n = 16 * v73;
  if ( (unsigned __int64)(16 * v73) <= 0xFBF )
  {
    v68 = 0;
    v9 = alloca(16 * v73 + 16);
    dest = (void *)(((unsigned __int64)&v64 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_5;
  }
  v68 = 1;
  dest = malloc(n);
  if ( !dest )
  {
    if ( v75 )
      sub_40BD60((__int64)v75);
    return 12LL;
  }
LABEL_5:
  memcpy(dest, (const void *)v5, n);
  v10 = *(_QWORD *)v5;
  v76 = *(_QWORD *)v5;
  v69 = (__int64 *)&ptr;
LABEL_22:
  v18 = *(_QWORD *)(v5 + 8);
  if ( v18 < v10 )
  {
LABEL_37:
    free(ptr);
    if ( v68 )
    {
      free(dest);
      v38 = v75;
      if ( !v75 )
        return 0LL;
    }
    else
    {
      v38 = v75;
      if ( !v75 )
        return 0LL;
    }
    sub_40BD60((__int64)v38);
    return 0LL;
  }
  while ( 1 )
  {
    v19 = v8;
    v20 = 16 * v8;
    v21 = 16 * v8 + *(_QWORD *)v74;
    v22 = *(_BYTE *)(v21 + 8);
    if ( v22 == 8 )
    {
      v23 = *(_QWORD *)v21 + 1LL;
      if ( v73 > v23 )
      {
        v24 = v5 + 16 * v23;
        *(_QWORD *)(v24 + 8) = -1LL;
        v18 = *(_QWORD *)(v5 + 8);
        *(_QWORD *)v24 = v10;
      }
    }
    else if ( v22 == 9 )
    {
      v40 = *(_QWORD *)v21 + 1LL;
      if ( v73 > v40 )
      {
        v41 = 16 * v40;
        v42 = v5 + v41;
        if ( *(_QWORD *)(v5 + v41) < v10 )
        {
          *(_QWORD *)(v42 + 8) = v10;
          v66 = 16 * v8;
          v72 = v10;
          memcpy(dest, (const void *)v5, n);
          v18 = *(_QWORD *)(v5 + 8);
          v10 = v72;
          v20 = v66;
        }
        else if ( *(_BYTE *)(v21 + 10) & 8 && *(_QWORD *)((char *)dest + v41) != -1LL )
        {
          v67 = v10;
          v72 = 16 * v8;
          memcpy((void *)v5, dest, n);
          v18 = *(_QWORD *)(v5 + 8);
          v20 = v72;
          v10 = v67;
        }
        else
        {
          *(_QWORD *)(v42 + 8) = v10;
          v18 = *(_QWORD *)(v5 + 8);
        }
      }
    }
    if ( v10 == v18 && *(_QWORD *)(v6 + 176) == v8 )
    {
      if ( !v75 )
      {
        free(ptr);
        if ( v68 )
        {
          free(dest);
          return 0LL;
        }
        return 0LL;
      }
      if ( !v73 )
        goto LABEL_71;
      v59 = v5;
      v60 = 0LL;
      while ( *(_QWORD *)v59 < 0LL || *(_QWORD *)(v59 + 8) != -1LL )
      {
        ++v60;
        v59 += 16LL;
        if ( v73 == v60 )
          goto LABEL_71;
      }
      if ( v73 == v60 )
      {
LABEL_71:
        free(ptr);
        if ( v68 )
          free(dest);
        sub_40BD60((__int64)v75);
        return 0LL;
      }
      v8 = sub_40BDB0(v75, v75 + 2, &v76, v73, (void *)v5, (__int64)&v77);
      v19 = v8;
      v20 = 16 * v8;
    }
    v11 = *(_QWORD *)(v6 + 152);
    v12 = *(_QWORD *)v11;
    v13 = *(_QWORD *)v11 + v20;
    v14 = *(_BYTE *)(v13 + 8);
    if ( v14 & 8 )
      break;
    if ( *(_BYTE *)(v13 + 10) & 0x10 )
    {
      v72 = v20;
      v43 = sub_40CD80(v12, (_QWORD *)(v11 + 216), v8, v6, v76);
      v44 = v43;
      if ( v43 )
        goto LABEL_64;
      v15 = v76;
      v13 = v72 + *(_QWORD *)v11;
    }
    else if ( v14 == 4 )
    {
      v45 = v5 + 16 * (*(_QWORD *)v13 + 1LL);
      v46 = *(_QWORD *)v45;
      v44 = *(_QWORD *)(v45 + 8) - *(_QWORD *)v45;
      if ( v75 )
      {
        if ( v46 == -1 || *(_QWORD *)(v45 + 8) == -1LL )
          goto LABEL_36;
        if ( *(_QWORD *)(v45 + 8) != *(_QWORD *)v45 )
        {
          v47 = *(_QWORD *)(v6 + 8);
          v48 = v76;
          v72 = v44;
          v49 = memcmp((const void *)(v47 + v46), (const void *)(v47 + v76), v44);
          v44 = v72;
          if ( v49 )
            goto LABEL_36;
          goto LABEL_54;
        }
      }
      else if ( *(_QWORD *)(v45 + 8) != *(_QWORD *)v45 )
      {
LABEL_64:
        v48 = v76;
LABEL_54:
        v16 = v48 + v44;
        v8 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v8);
        goto LABEL_15;
      }
      v72 = v20;
      if ( !(unsigned __int8)sub_406FF0((__int64)&v77, v8) )
      {
LABEL_80:
        free(ptr);
        if ( v68 )
LABEL_93:
          free(dest);
        if ( v75 )
          goto LABEL_62;
        return 12LL;
      }
      v61 = *(_QWORD *)(v11 + 40) + 24 * v8;
      v64 = v76;
      v8 = **(_QWORD **)(v61 + 16);
      v62 = *(_QWORD *)(*(_QWORD *)(v6 + 184) + 8 * v76);
      if ( sub_408600(*(_QWORD *)(v62 + 16), (__int64 *)(v62 + 24), v8) )
        goto LABEL_20;
      v15 = v65;
      v13 = v72 + *(_QWORD *)v11;
    }
    else
    {
      v15 = v76;
    }
    v72 = v15;
    if ( !(unsigned __int8)sub_40A420(v6, v13, v15) )
      goto LABEL_35;
    v16 = v72 + 1;
    v8 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v19);
LABEL_15:
    v76 = v16;
    if ( !v75
      || v16 <= *(_QWORD *)(v6 + 168)
      && (v17 = *(_QWORD *)(*(_QWORD *)(v6 + 184) + 8 * v16)) != 0
      && sub_408600(*(_QWORD *)(v17 + 16), (__int64 *)(v17 + 24), v8) )
    {
      *((_QWORD *)&v77 + 1) = 0LL;
LABEL_20:
      if ( v8 < 0 )
      {
LABEL_34:
        if ( v8 == -2 )
          goto LABEL_80;
        goto LABEL_35;
      }
LABEL_21:
      v10 = v76;
      goto LABEL_22;
    }
LABEL_36:
    v37 = sub_40BDB0(v75, v75 + 2, &v76, v73, (void *)v5, (__int64)&v77);
    v10 = v76;
    v8 = v37;
    v18 = *(_QWORD *)(v5 + 8);
    if ( v18 < v76 )
      goto LABEL_37;
  }
  v25 = *(_QWORD *)(v11 + 40);
  v72 = *(_QWORD *)(*(_QWORD *)(v6 + 184) + 8 * v76);
  v26 = v25 + 24 * v8;
  if ( !(unsigned __int8)sub_406FF0((__int64)&v77, v8) )
    goto LABEL_80;
  if ( *(_QWORD *)(v26 + 8) <= 0LL )
  {
LABEL_35:
    if ( !v75 )
    {
      free(ptr);
      result = 1LL;
      if ( v68 )
      {
        LODWORD(v75) = 1;
        free(dest);
        result = (unsigned int)v75;
      }
      return result;
    }
    goto LABEL_36;
  }
  v27 = *(_QWORD *)(v72 + 16);
  v28 = v72 + 24;
  v29 = *(_QWORD *)(v26 + 16);
  v72 = v6;
  v30 = 0LL;
  v31 = -1LL;
  v32 = v27;
  v33 = (__int64 *)v28;
  while ( 2 )
  {
    v34 = *(_QWORD *)(v29 + 8 * v30);
    if ( !sub_408600(v32, v33, *(_QWORD *)(v29 + 8 * v30)) )
    {
LABEL_32:
      v30 = v35 + 1;
      if ( v36 == v30 )
      {
        v8 = v31;
        v6 = v72;
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
  v6 = v72;
  if ( sub_408600(*((__int64 *)&v77 + 1), v69, v50) )
  {
    v8 = v34;
    goto LABEL_20;
  }
  v51 = v75;
  if ( !v75 )
    goto LABEL_20;
  v52 = *v75;
  v53 = v76;
  v54 = *v75 + 1;
  *v75 = v54;
  if ( v54 != v51[1] )
  {
    v55 = (char *)v51[2];
    goto LABEL_59;
  }
  v72 = v53;
  v55 = (char *)realloc((void *)v75[2], 96 * v54);
  if ( v55 )
  {
    v63 = v75;
    v53 = v72;
    v63[1] *= 2LL;
    v63[2] = (__int64)v55;
LABEL_59:
    v56 = (signed __int64)&v55[48 * v52];
    *(_QWORD *)(v56 + 8) = v34;
    v57 = n;
    *(_QWORD *)v56 = v53;
    v58 = malloc(v57);
    *(_QWORD *)(v56 + 16) = v58;
    if ( v58 )
    {
      memcpy(v58, (const void *)v5, v57);
      if ( !(unsigned int)sub_4096A0(v56 + 24, (__int64)&v77) )
        goto LABEL_20;
    }
  }
  free(ptr);
  if ( v68 )
    goto LABEL_93;
LABEL_62:
  sub_40BD60((__int64)v75);
  return 12LL;
}

signed __int64 __fastcall sub_40E000(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14@1
  __int64 v6; // r13@1
  __int64 *v7; // r12@1
  __int64 v8; // rbp@1
  __int64 v9; // rbx@1
  signed __int64 result; // rax@1
  __int64 v11; // r15@3
  __int64 v12; // rax@3
  __int64 v13; // rdx@3
  __int64 v14; // rcx@3
  void *v15; // rdi@3
  __int64 v16; // rsi@3
  signed __int64 v17; // rdx@4
  signed __int64 v18; // r8@5
  char *v19; // rdi@7
  char *v20; // rax@10
  __int64 v21; // rdx@11
  __int64 v22; // rsi@11
  __int64 v23; // [sp+10h] [bp-40h]@10

  v5 = a3;
  v6 = a4;
  v7 = a2;
  v8 = a5;
  v9 = a1;
  result = sub_40D010(a1, a3 + 16, *(_QWORD *)a3, *(_QWORD *)(a3 + 8), a4, a5, 8u);
  if ( !(_DWORD)result )
  {
    v11 = *(_QWORD *)(v5 + 8);
    v12 = *(_QWORD *)(a1 + 200);
    v13 = *(_QWORD *)(a1 + 208);
    v14 = *a2;
    v15 = *(void **)(a1 + 216);
    v16 = *(_QWORD *)(v5 + 8);
    if ( v12 >= v13 )
    {
      v23 = *v7;
      v20 = (char *)realloc(v15, 80 * v13);
      if ( !v20 )
      {
        free(*(void **)(v9 + 216));
        return 12LL;
      }
      v21 = *(_QWORD *)(v9 + 208);
      v22 = *(_QWORD *)(v9 + 200);
      *(_QWORD *)(v9 + 216) = v20;
      memset(&v20[40 * v22], 0, 40 * v21);
      *(_QWORD *)(v9 + 208) *= 2LL;
      v12 = *(_QWORD *)(v9 + 200);
      v15 = *(void **)(v9 + 216);
      v16 = *(_QWORD *)(v5 + 8);
      v14 = v23;
    }
    v17 = 40 * v12;
    if ( v12 > 0 )
    {
      v18 = (signed __int64)v15 + v17 - 40;
      if ( v8 == *(_QWORD *)(v18 + 8) )
        *(_BYTE *)(v18 + 32) = 1;
    }
    v19 = (char *)v15 + v17;
    *(_QWORD *)v19 = v6;
    *((_QWORD *)v19 + 1) = v8;
    *((_WORD *)v19 + 17) = -(v11 == v14);
    *((_QWORD *)v19 + 2) = v14;
    *((_QWORD *)v19 + 3) = v11;
    *(_QWORD *)(v9 + 200) = v12 + 1;
    v19[32] = 0;
    if ( *(_DWORD *)(v9 + 224) < v11 - v14 )
      *(_DWORD *)(v9 + 224) = v11 - v14;
    result = sub_407BD0(v9, v8 + v16 - *v7);
  }
  return result;
}

int __fastcall sub_40E1A0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // r14@1
  __int64 v4; // r15@1
  __int64 v5; // r13@10
  signed __int64 v6; // rbp@10
  signed __int64 v7; // rax@10
  int v8; // ebx@11
  char v9; // al@12
  signed __int64 v10; // rcx@16
  signed __int64 i; // rax@16
  __int64 v12; // r8@18
  signed __int64 v13; // rdx@18
  signed __int64 v14; // rax@24
  signed __int64 v15; // rdi@19
  __int64 v16; // rdx@31
  __int64 v17; // rbx@33
  __int64 v18; // r13@36
  __int64 v19; // rax@37
  __int64 v20; // r14@37
  __int64 v21; // rbx@37
  __int64 v22; // rbp@39
  unsigned int v23; // ecx@39
  __int64 v24; // rax@39
  __int64 *v25; // r11@39
  __int64 v26; // rax@39
  __int64 v27; // rdx@39
  unsigned int v28; // ST38_4@42
  int v29; // eax@42
  unsigned int v30; // ecx@42
  __int64 *v31; // ST38_8@43
  __int64 v32; // rax@43
  void *v33; // rdi@43
  __int64 v34; // rdx@43
  signed __int64 v35; // rax@47
  __int64 v36; // rbp@49
  __int64 v37; // rax@49
  __int64 v38; // rdx@49
  __int64 *v39; // ST38_8@51
  __int64 v40; // rax@51
  int result; // eax@52
  signed __int64 v42; // r12@54
  __int64 v43; // r10@54
  signed __int64 v44; // rcx@55
  __int64 v45; // rbp@55
  __int64 v46; // r12@55
  __int64 v47; // r8@55
  __int64 v48; // r9@57
  signed __int64 v49; // r13@57
  signed __int64 v50; // rdx@57
  signed __int64 v51; // r15@57
  __int64 v52; // ST40_8@59
  signed __int64 v53; // ST38_8@59
  __int64 v54; // ST30_8@59
  int v55; // eax@59
  __int64 v56; // r15@74
  __int64 v57; // rax@79
  __int64 v58; // rcx@80
  __int64 v59; // rdi@81
  __int64 v60; // rdx@81
  __int64 v61; // rbp@83
  signed __int64 v62; // rax@83
  __int64 v63; // rsi@86
  __int64 v64; // rcx@86
  __int64 v65; // rax@89
  _QWORD *v66; // rax@90
  __int64 v67; // rdx@91
  __int64 v68; // ST38_8@94
  void *v69; // rax@94
  void *v70; // rax@102
  __int64 v71; // [sp+8h] [bp-E0h]@1
  __int64 v72; // [sp+10h] [bp-D8h]@32
  __int64 v73; // [sp+10h] [bp-D8h]@39
  __int64 v74; // [sp+18h] [bp-D0h]@32
  __int64 v75; // [sp+18h] [bp-D0h]@38
  __int64 v76; // [sp+20h] [bp-C8h]@32
  __int64 v77; // [sp+20h] [bp-C8h]@49
  __int64 v78; // [sp+20h] [bp-C8h]@66
  signed __int64 v79; // [sp+28h] [bp-C0h]@66
  signed __int64 v80; // [sp+28h] [bp-C0h]@102
  signed __int64 v81; // [sp+30h] [bp-B8h]@67
  __int64 v82; // [sp+38h] [bp-B0h]@1
  __int64 v83; // [sp+40h] [bp-A8h]@32
  signed __int64 v84; // [sp+40h] [bp-A8h]@37
  _QWORD *v85; // [sp+48h] [bp-A0h]@1
  _QWORD *v86; // [sp+50h] [bp-98h]@1
  signed __int64 v87; // [sp+58h] [bp-90h]@1
  __int64 v88; // [sp+60h] [bp-88h]@31
  __int64 *v89; // [sp+68h] [bp-80h]@31
  __int64 v90; // [sp+70h] [bp-78h]@32
  __int64 v91; // [sp+78h] [bp-70h]@67
  int v92; // [sp+8Ch] [bp-5Ch]@29
  char v93; // [sp+90h] [bp-58h]@42
  void *ptr; // [sp+A0h] [bp-48h]@43

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 72);
  v86 = a2;
  v85 = a3;
  v82 = *(_QWORD *)(a1 + 152);
  v87 = 8 * v4;
  v71 = 0LL;
  if ( *a2 <= 0LL )
    return 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)(*v85 + 8 * v71);
    v6 = 16LL * *(_QWORD *)(*v85 + 8 * v71);
    v7 = v6 + *(_QWORD *)v82;
    if ( *(_BYTE *)(v7 + 8) == 4 )
      break;
LABEL_9:
    if ( ++v71 >= *v86 )
      return 0;
  }
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 & 0x3FF00 )
  {
    v9 = sub_40A330(v3, v4, *(_DWORD *)(v3 + 160));
    if ( BYTE1(v8) & 4 )
    {
      if ( !(v9 & 1) || BYTE1(v8) & 8 )
        goto LABEL_9;
    }
    else if ( BYTE1(v8) & 8 && v9 & 1 )
    {
      goto LABEL_9;
    }
    if ( BYTE1(v8) & 0x20 && !(v9 & 2) || BYTE1(v8) & 0x80 && !(v9 & 8) )
      goto LABEL_9;
  }
  v10 = 0LL;
  for ( i = *(_QWORD *)(v3 + 200); v10 < i; i = v13 )
  {
    v12 = *(_QWORD *)(v3 + 216);
    v13 = (v10 + i) / 2;
    if ( v4 <= *(_QWORD *)(v12 + 40 * v13 + 8) )
    {
      while ( v13 > v10 )
      {
        v15 = (v13 + v10) / 2;
        if ( v4 > *(_QWORD *)(v12 + 40 * v15 + 8) )
          goto LABEL_30;
        v13 = (v13 + v10) / 2;
      }
      break;
    }
    v15 = (v10 + i) / 2;
    v13 = i;
LABEL_30:
    v10 = v15 + 1;
  }
  if ( *(_QWORD *)(v3 + 200) > v10 )
  {
    v14 = *(_QWORD *)(v3 + 216) + 40 * v10;
    if ( *(_QWORD *)(v14 + 8) == v4 && v10 != -1 )
    {
      while ( v5 != *(_QWORD *)v14 )
      {
        v14 += 40LL;
        if ( !*(_BYTE *)(v14 - 8) )
          goto LABEL_31;
      }
      goto LABEL_29;
    }
  }
LABEL_31:
  v16 = **(_QWORD **)(v3 + 152);
  v89 = *(__int64 **)(v3 + 152);
  v88 = *(_QWORD *)(v16 + v6);
  if ( *(_QWORD *)(v3 + 232) <= 0LL )
  {
LABEL_29:
    v92 = 0;
    goto LABEL_9;
  }
  v74 = v4;
  v72 = 0LL;
  v76 = *(_QWORD *)(v3 + 8);
  v83 = v5;
  v90 = *(_QWORD *)(v3 + 200);
LABEL_33:
  v17 = *(_QWORD *)(*(_QWORD *)(v3 + 248) + 8 * v72);
  if ( v88 != *(_QWORD *)(v16 + 16LL * *(_QWORD *)(v17 + 8)) )
    goto LABEL_34;
  v42 = *(_QWORD *)v17;
  v43 = v74;
  if ( *(_QWORD *)(v17 + 32) <= 0LL )
    goto LABEL_73;
  v44 = *(_QWORD *)v17;
  v45 = 0LL;
  v46 = v76;
  v47 = v74;
  while ( 1 )
  {
    v48 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 8 * v45);
    v49 = *(_QWORD *)(v48 + 8);
    v50 = *(_QWORD *)(v48 + 8) - v44;
    v51 = v50 + v47;
    if ( v50 <= 0 )
      goto LABEL_60;
    if ( *(_QWORD *)(v3 + 48) < v51 )
    {
      v79 = *(_QWORD *)(v48 + 8) - v44;
      v78 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 8 * v45);
      if ( *(_QWORD *)(v3 + 88) >= v51 )
      {
        v91 = v47;
        v81 = v44;
        result = sub_407BD0(v3, v50 + v47);
        if ( result )
          return result;
        v46 = *(_QWORD *)(v3 + 8);
        v50 = v79;
        v48 = v78;
        v47 = v91;
        v44 = v81;
        goto LABEL_59;
      }
LABEL_96:
      v76 = v46;
      v43 = v47;
      v42 = v44;
      if ( *(_QWORD *)(v17 + 32) <= v45 )
      {
        if ( v45 > 0 )
        {
          v49 = v44;
          v51 = v47;
LABEL_72:
          v42 = v49 + 1;
          v43 = v51;
        }
LABEL_73:
        if ( v74 >= v42 )
        {
          v56 = v43;
          do
          {
            if ( v42 - *(_QWORD *)v17 > 0 )
            {
              if ( *(_QWORD *)(v3 + 48) <= v56 )
              {
                if ( *(_QWORD *)(v3 + 88) <= v56 )
                  break;
                result = sub_407A80(v3, (unsigned int)(v56 + 1));
                if ( result )
                  return result;
                v76 = *(_QWORD *)(v3 + 8);
              }
              if ( *(_BYTE *)(v76 + v56) != *(_BYTE *)(v76 + v42 - 1) )
                break;
              ++v56;
            }
            v57 = *(_QWORD *)(*(_QWORD *)(v3 + 184) + 8 * v42);
            if ( v57 )
            {
              v58 = *(_QWORD *)(v57 + 16);
              if ( v58 > 0 )
              {
                v59 = *(_QWORD *)(v57 + 24);
                v60 = 0LL;
                while ( 1 )
                {
                  v61 = *(_QWORD *)(v59 + 8 * v60);
                  v62 = *v89 + 16LL * *(_QWORD *)(v59 + 8 * v60);
                  if ( *(_BYTE *)(v62 + 8) == 9 && v88 == *(_QWORD *)v62 )
                    break;
                  if ( v58 == ++v60 )
                    goto LABEL_92;
                }
                if ( v61 != -1 )
                {
                  v63 = *(_QWORD *)(v17 + 16);
                  v64 = *(_QWORD *)v17;
                  if ( !v63 )
                  {
                    v68 = *(_QWORD *)v17;
                    v69 = calloc(0x18uLL, v42 - v64 + 1);
                    v64 = v68;
                    v63 = (__int64)v69;
                    *(_QWORD *)(v17 + 16) = v69;
                    if ( !v69 )
                      return 12;
                  }
                  result = sub_40D010(v3, v63, *(_QWORD *)(v17 + 8), v64, v61, v42, 9u);
                  if ( result != 1 )
                  {
                    if ( result )
                      return result;
                    v65 = *(_QWORD *)(v17 + 24);
                    if ( *(_QWORD *)(v17 + 32) == v65 )
                    {
                      v80 = 2 * v65 + 1;
                      v70 = realloc(*(void **)(v17 + 40), 8 * v80);
                      if ( !v70 )
                        return 12;
                      *(_QWORD *)(v17 + 40) = v70;
                      *(_QWORD *)(v17 + 24) = v80;
                    }
                    v66 = calloc(1uLL, 0x28uLL);
                    if ( !v66 )
                      return 12;
                    v67 = *(_QWORD *)(v17 + 32);
                    *(_QWORD *)(*(_QWORD *)(v17 + 40) + 8 * v67) = v66;
                    *v66 = v61;
                    v66[1] = v42;
                    *(_QWORD *)(v17 + 32) = v67 + 1;
                    sub_40E000(v3, (__int64 *)v17, (__int64)v66, v83, v74);
                  }
                }
              }
            }
LABEL_92:
            ++v42;
          }
          while ( v74 >= v42 );
        }
      }
LABEL_34:
      if ( ++v72 < *(_QWORD *)(v3 + 232) )
      {
        v16 = *v89;
        goto LABEL_33;
      }
      v4 = v74;
      v18 = v83;
      v92 = 0;
      if ( v90 < *(_QWORD *)(v3 + 200) )
      {
        v84 = 8 * v83;
        v19 = v3;
        v20 = v90;
        v21 = v19;
        while ( 2 )
        {
          v35 = *(_QWORD *)(v21 + 216) + 40 * v20;
          if ( v18 != *(_QWORD *)v35 || v4 != *(_QWORD *)(v35 + 8) )
            goto LABEL_46;
          v36 = *(_QWORD *)(v35 + 24);
          v37 = *(_QWORD *)(v35 + 16);
          v38 = *(_QWORD *)(v82 + 48);
          v77 = v36 - v37;
          if ( v36 == v37 )
            v75 = v38 + 24LL * **(_QWORD **)(*(_QWORD *)(v82 + 40) + 24 * v18 + 16);
          else
            v75 = v38 + 24LL * *(_QWORD *)(*(_QWORD *)(v82 + 24) + v84);
          v22 = v4 + v36 - v37;
          v73 = 0LL;
          v23 = sub_40A330(v21, v22 - 1, *(_DWORD *)(v21 + 160));
          v24 = *(_QWORD *)(v21 + 184);
          v25 = (__int64 *)(v24 + 8 * v22);
          v26 = *(_QWORD *)(v24 + v87);
          v27 = *v25;
          if ( v26 )
            v73 = *(_QWORD *)(v26 + 16);
          if ( v27 )
          {
            v28 = v23;
            v29 = sub_409720((__int64)&v93, *(_QWORD *)(v27 + 80), v75);
            v30 = v28;
            v92 = v29;
            if ( v29 )
            {
              free(ptr);
              return v92;
            }
            v31 = (__int64 *)(*(_QWORD *)(v21 + 184) + 8 * v22);
            v32 = sub_4098B0(&v92, v82, (__int64)&v93, v30);
            v33 = ptr;
            *v31 = v32;
            free(v33);
            v34 = *(_QWORD *)(v21 + 184);
            if ( *(_QWORD *)(v34 + 8 * v22) )
            {
LABEL_44:
              if ( v77 || *(_QWORD *)(*(_QWORD *)(v34 + v87) + 16LL) <= v73 )
              {
LABEL_46:
                if ( ++v20 >= *(_QWORD *)(v21 + 200) )
                  goto LABEL_65;
              }
              else
              {
                result = sub_40A1E0(v21, (_QWORD *)(v75 + 8), (_QWORD *)(v75 + 16), v4);
                v92 = result;
                if ( result )
                  return result;
                result = sub_40E1A0(v21, v75 + 8, v75 + 16);
                v92 = result;
                if ( result )
                  return result;
                if ( ++v20 >= *(_QWORD *)(v21 + 200) )
                {
LABEL_65:
                  v3 = v21;
                  goto LABEL_9;
                }
              }
              continue;
            }
          }
          else
          {
            v39 = v25;
            v40 = sub_4098B0(&v92, v82, v75, v23);
            v34 = *(_QWORD *)(v21 + 184);
            *v39 = v40;
            if ( *(_QWORD *)(v34 + 8 * v22) )
              goto LABEL_44;
          }
          break;
        }
        result = v92;
        if ( v92 )
          return result;
        goto LABEL_44;
      }
      goto LABEL_9;
    }
LABEL_59:
    v52 = v48;
    v53 = v44;
    v54 = v47;
    v55 = memcmp((const void *)(v46 + v47), (const void *)(v46 + v44), v50);
    v47 = v54;
    v44 = v53;
    v48 = v52;
    if ( v55 )
      goto LABEL_96;
LABEL_60:
    result = sub_40E000(v3, (__int64 *)v17, v48, v83, v74);
    v46 = *(_QWORD *)(v3 + 8);
    if ( (unsigned int)result > 1 )
      return result;
    ++v45;
    v44 = v49;
    v47 = v51;
    if ( v45 >= *(_QWORD *)(v17 + 32) )
    {
      v76 = *(_QWORD *)(v3 + 8);
      goto LABEL_72;
    }
  }
}

__int64 __fastcall sub_40EA20(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12@1
  __int64 v4; // r15@1
  signed __int64 v5; // r14@1
  __int64 v6; // rbp@2
  __int64 v8; // rax@6
  __int64 v9; // r14@7
  int v10; // eax@7
  unsigned int v11; // eax@8
  __int64 *v12; // ST08_8@8
  int v13; // edx@10
  unsigned int v14; // eax@10
  int v15; // eax@13
  int v16; // eax@15
  __m128i v17; // [sp+10h] [bp-58h]@7
  void *ptr; // [sp+20h] [bp-48h]@9

  v3 = *(_QWORD *)(a2 + 72);
  v4 = *(_QWORD *)(a2 + 152);
  v5 = 8 * v3 + *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(a2 + 192) >= v3 )
  {
    if ( *(_QWORD *)v5 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)v5 + 80LL);
      if ( a3 )
      {
        v9 = *(_QWORD *)(a3 + 80);
        v10 = sub_409720((__int64)&v17, v9, v8);
        *a1 = v10;
        if ( v10 )
          goto LABEL_17;
        v11 = sub_40A330(a2, *(_QWORD *)(a2 + 72) - 1LL, *(_DWORD *)(a2 + 160));
        v12 = (__int64 *)(8 * v3 + *(_QWORD *)(a2 + 184));
        v6 = sub_4098B0(a1, v4, (__int64)&v17, v11);
        *v12 = v6;
        if ( v9 )
          free(ptr);
      }
      else
      {
        v13 = *(_DWORD *)(a2 + 160);
        v17 = _mm_loadu_si128((const __m128i *)v8);
        ptr = *(void **)(v8 + 16);
        v14 = sub_40A330(a2, v3 - 1, v13);
        v6 = sub_4098B0(a1, v4, (__int64)&v17, v14);
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
  if ( *(_QWORD *)(v4 + 152) )
  {
    if ( v6 )
    {
      v15 = sub_40A1E0(a2, (_QWORD *)(v6 + 16), (_QWORD *)(v6 + 24), v3);
      *a1 = v15;
      if ( !v15 )
      {
        if ( !(*(_BYTE *)(v6 + 104) & 0x40) )
          return v6;
        v16 = sub_40E1A0(a2, (_QWORD *)(v6 + 16), (_QWORD *)(v6 + 24));
        *a1 = v16;
        if ( !v16 )
          return *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8 * v3);
      }
    }
LABEL_17:
    v6 = 0LL;
  }
  return v6;
}

signed __int64 __fastcall sub_40EBE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15@1
  __int64 v3; // rbx@1
  __int64 v4; // rbp@1
  void *v5; // rax@1
  int v6; // eax@2
  __int64 v7; // rax@6
  __int64 v8; // r14@6
  __int64 v9; // r12@7
  __int64 v10; // rax@10
  signed int v11; // er9@12
  __int64 v12; // rax@17
  __int64 v13; // rbp@17
  __int64 v14; // rsi@17
  signed int v15; // eax@18
  __int64 v16; // rax@19
  __int64 v17; // rax@20
  int v18; // ST18_4@29
  __int64 v20; // [sp+8h] [bp-90h]@8
  signed __int64 n; // [sp+10h] [bp-88h]@4
  int v22; // [sp+1Ch] [bp-7Ch]@3
  __int64 v23; // [sp+20h] [bp-78h]@18
  signed __int64 v24; // [sp+28h] [bp-70h]@18
  __int64 v25; // [sp+30h] [bp-68h]@18
  _QWORD *v26; // [sp+38h] [bp-60h]@3
  __int64 v27; // [sp+40h] [bp-58h]@1
  __int64 v28; // [sp+48h] [bp-50h]@1
  void *ptr; // [sp+50h] [bp-48h]@1

  v2 = a2;
  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 16);
  v27 = 1LL;
  v28 = 1LL;
  v5 = malloc(8uLL);
  ptr = v5;
  if ( !v5 )
    return 12LL;
  *(_QWORD *)v5 = v4;
  v6 = sub_410670(a1, a2, v3, &v27);
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
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8 * v3) )
    {
      v22 = 0;
      if ( *(_DWORD *)(a1 + 224) < 0 )
        goto LABEL_31;
    }
    else if ( *(_DWORD *)(a1 + 224) < ++v22 )
    {
LABEL_31:
      memset(*(void **)v2, 0, n);
      free(ptr);
      return 0LL;
    }
    v7 = *(_QWORD *)(a1 + 184);
    --v3;
    v28 = 0LL;
    v8 = *(_QWORD *)(v7 + n - 8);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 152);
      if ( *(_QWORD *)(v8 + 40) > 0LL )
        break;
    }
LABEL_25:
    v6 = sub_410670(a1, v2, v3, &v27);
    if ( v6 )
      goto LABEL_29;
    if ( !v3 )
      goto LABEL_27;
  }
  v20 = 0LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v8 + 48);
    v13 = *(_QWORD *)(v12 + 8 * v20);
    v14 = 16LL * *(_QWORD *)(v12 + 8 * v20) + *(_QWORD *)v9;
    if ( *(_BYTE *)(v14 + 10) & 0x10 )
    {
      v24 = 16LL * *(_QWORD *)(v12 + 8 * v20);
      v25 = *(_QWORD *)(a1 + 152);
      v23 = *(_QWORD *)(v2 + 24);
      v15 = sub_40CD80(
              **(_QWORD **)(a1 + 152),
              (_QWORD *)(*(_QWORD *)(a1 + 152) + 216LL),
              *(_QWORD *)(v12 + 8 * v20),
              a1,
              v3);
      v11 = v15;
      if ( v15 <= 0 )
      {
        if ( v15 )
          goto LABEL_13;
LABEL_24:
        v14 = v24 + *(_QWORD *)v9;
        goto LABEL_9;
      }
      v16 = v3 + v15;
      if ( v23 < v16 )
        goto LABEL_13;
      v17 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v16);
      if ( !v17 )
        goto LABEL_24;
      if ( sub_408600(*(_QWORD *)(v17 + 16), (__int64 *)(v17 + 24), *(_QWORD *)(*(_QWORD *)(v25 + 24) + 8 * v13)) )
        goto LABEL_13;
      v14 = v24 + *(_QWORD *)v9;
    }
LABEL_9:
    if ( (unsigned __int8)sub_40A420(a1, v14, v3) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)v2 + n);
      if ( v10 )
      {
        if ( sub_408600(*(_QWORD *)(v10 + 16), (__int64 *)(v10 + 24), *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8 * v13)) )
          break;
      }
    }
LABEL_16:
    if ( ++v20 >= *(_QWORD *)(v8 + 40) )
      goto LABEL_25;
  }
  v11 = 1;
LABEL_13:
  if ( *(_QWORD *)(v2 + 40)
    && (unsigned __int8)sub_408890(
                          a1,
                          (_QWORD *)(v2 + 40),
                          v26,
                          *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8 * v13),
                          v11 + v3,
                          v13,
                          v3)
    || (unsigned __int8)sub_406FF0((__int64)&v27, v13) )
  {
    goto LABEL_16;
  }
  v6 = 12;
LABEL_29:
  v18 = v6;
  free(ptr);
  return (unsigned int)v18;
}

__int64 __fastcall sub_40EF10(__int64 a1, __int64 a2, __int64 a3, signed __int64 a4, signed __int64 a5, __int64 a6, unsigned __int64 a7, __int64 a8, int a9)
{
  __int64 v9; // r12@1
  signed __int64 v10; // rbp@1
  signed __int64 v11; // rbx@1
  __int64 v12; // rdx@1
  _BYTE *v13; // rax@1
  _BYTE *v14; // rcx@1
  unsigned __int64 v15; // rax@7
  signed __int64 v16; // rsi@8
  __int64 v17; // rax@10
  __int64 v18; // rdx@11
  __int64 v19; // rcx@12
  __int64 v20; // rdi@23
  int v21; // edx@23
  __int64 v22; // rax@23
  signed __int64 v23; // rsi@23
  unsigned __int8 v24; // al@27
  bool v25; // zf@29
  bool v26; // sf@29
  unsigned __int8 v27; // of@29
  unsigned __int64 v28; // rax@29
  unsigned __int8 v29; // al@31
  __int64 v30; // r15@31
  void *v31; // r14@33
  void *v32; // rdi@37
  signed __int64 v33; // rax@38
  __int64 v34; // rax@40
  int v35; // eax@42
  int v36; // ecx@43
  __int64 *v37; // rdx@47
  int v38; // eax@49
  char v39; // cl@53
  __int64 v40; // rax@53
  __int64 v41; // rdx@55
  __int64 v42; // rbx@66
  __int64 v43; // r14@66
  unsigned int v44; // eax@67
  char v45; // al@74
  unsigned __int64 v46; // r12@75
  __int64 v47; // rbx@76
  __int64 v48; // rax@77
  char v49; // al@79
  __int64 v50; // rbx@88
  __int64 v51; // rax@89
  __int64 v52; // rbp@90
  __int64 v53; // rax@97
  char v54; // cl@97
  signed __int64 v55; // rdx@99
  void *v56; // rbx@108
  void *v57; // r14@108
  signed __int64 v58; // rax@112
  __int64 v59; // rdx@114
  __int64 v60; // rax@118
  signed __int64 v61; // rax@125
  __int64 v62; // rdx@127
  __int64 v64; // rax@137
  int v65; // eax@145
  __int64 v66; // rbp@147
  __int64 v67; // r12@148
  __int64 v68; // r8@148
  int v69; // eax@155
  __int64 v70; // rbx@156
  int v71; // eax@158
  __int64 v72; // rdx@159
  unsigned int v73; // eax@161
  char *v74; // r15@161
  __int64 v75; // rax@161
  void *v76; // rdi@161
  _QWORD *v77; // rdx@161
  __int64 v78; // r9@164
  __int64 v79; // r15@164
  signed __int64 v80; // rax@164
  int v81; // ebx@165
  __int64 v82; // ST38_8@166
  __int64 v83; // ST30_8@166
  char v84; // al@166
  unsigned int v85; // eax@170
  __int64 v86; // rax@170
  __int64 v87; // rbp@173
  signed int v88; // ebp@178
  __int64 v89; // rcx@185
  _BYTE *v90; // rax@186
  __int64 v91; // rdx@191
  __int64 v92; // ST08_8@192
  signed int v93; // eax@192
  __int64 v94; // rbp@210
  void *v95; // r15@210
  void *v96; // rbx@212
  __int64 v97; // rax@217
  __int64 v98; // rax@221
  __int64 v99; // r14@221
  __int64 v100; // r12@221
  signed __int64 v101; // rax@241
  bool v102; // r8@245
  signed int v103; // eax@247
  unsigned __int64 v104; // rdx@248
  char v105; // r8@249
  __int64 v106; // r9@249
  __int64 v107; // rcx@249
  __int64 v108; // r11@249
  unsigned __int64 v109; // r10@249
  __int64 v110; // rdi@249
  __int64 i; // rax@249
  unsigned __int64 v112; // rsi@252
  _QWORD *v113; // rax@256
  __int64 v114; // rsi@258
  __int64 j; // rax@259
  __int64 v116; // rdx@260
  signed __int64 v117; // rcx@261
  int v118; // eax@265
  __int64 v119; // [sp+8h] [bp-230h]@23
  signed __int64 v120; // [sp+8h] [bp-230h]@85
  __int64 v121; // [sp+8h] [bp-230h]@209
  __int64 v122; // [sp+10h] [bp-228h]@66
  signed int v123; // [sp+10h] [bp-228h]@213
  __int64 v124; // [sp+18h] [bp-220h]@1
  void *v125; // [sp+20h] [bp-218h]@75
  void *v126; // [sp+20h] [bp-218h]@212
  unsigned __int64 v127; // [sp+28h] [bp-210h]@76
  char *v128; // [sp+30h] [bp-208h]@159
  __int64 v129; // [sp+40h] [bp-1F8h]@1
  signed int v130; // [sp+48h] [bp-1F0h]@21
  signed int v131; // [sp+4Ch] [bp-1ECh]@19
  __int64 *v132; // [sp+50h] [bp-1E8h]@76
  _QWORD *v133; // [sp+58h] [bp-1E0h]@148
  _BYTE *v134; // [sp+60h] [bp-1D8h]@1
  __int64 v135; // [sp+68h] [bp-1D0h]@42
  __int64 v136; // [sp+70h] [bp-1C8h]@1
  __int64 v137; // [sp+78h] [bp-1C0h]@1
  signed __int64 v138; // [sp+80h] [bp-1B8h]@40
  __int64 v139; // [sp+88h] [bp-1B0h]@23
  signed __int64 v140; // [sp+90h] [bp-1A8h]@7
  unsigned int v141; // [sp+98h] [bp-1A0h]@49
  int v142; // [sp+9Ch] [bp-19Ch]@38
  __int64 *v143; // [sp+A0h] [bp-198h]@49
  int v144; // [sp+A8h] [bp-190h]@42
  unsigned __int8 v145; // [sp+ADh] [bp-18Bh]@74
  bool v146; // [sp+AFh] [bp-189h]@49
  int v147; // [sp+B0h] [bp-188h]@66
  int v148; // [sp+B4h] [bp-184h]@158
  __int64 v149; // [sp+B8h] [bp-180h]@38
  __m128i v150; // [sp+C0h] [bp-178h]@160
  void *v151; // [sp+D0h] [bp-168h]@161
  unsigned __int64 v152; // [sp+D8h] [bp-160h]@178
  __int128 v153; // [sp+E0h] [bp-158h]@178
  void *v154; // [sp+F0h] [bp-148h]@178
  __int64 v155; // [sp+100h] [bp-138h]@1
  __int64 v156; // [sp+108h] [bp-130h]@29
  _DWORD *v157; // [sp+110h] [bp-128h]@65
  __int64 v158; // [sp+118h] [bp-120h]@249
  __int64 v159; // [sp+128h] [bp-110h]@191
  __int64 v160; // [sp+130h] [bp-108h]@31
  unsigned __int64 v161; // [sp+138h] [bp-100h]@31
  __int64 v162; // [sp+140h] [bp-F8h]@36
  __int64 v163; // [sp+148h] [bp-F0h]@66
  __int64 v164; // [sp+150h] [bp-E8h]@25
  __int64 v165; // [sp+158h] [bp-E0h]@25
  __int64 v166; // [sp+160h] [bp-D8h]@27
  __int64 v167; // [sp+168h] [bp-D0h]@27
  int v168; // [sp+170h] [bp-C8h]@38
  __int64 v169; // [sp+178h] [bp-C0h]@25
  __int64 v170; // [sp+180h] [bp-B8h]@28
  bool v171; // [sp+188h] [bp-B0h]@27
  char v172; // [sp+189h] [bp-AFh]@27
  char v173; // [sp+18Ah] [bp-AEh]@27
  bool v174; // [sp+18Bh] [bp-ADh]@27
  char v175; // [sp+18Ch] [bp-ACh]@249
  char v176; // [sp+18Dh] [bp-ABh]@31
  char v177; // [sp+18Eh] [bp-AAh]@28
  int v178; // [sp+190h] [bp-A8h]@23
  __int64 v179; // [sp+198h] [bp-A0h]@1
  int v180; // [sp+1A0h] [bp-98h]@31
  __int64 v181; // [sp+1A8h] [bp-90h]@31
  void *v182; // [sp+1B0h] [bp-88h]@108
  void *ptr; // [sp+1B8h] [bp-80h]@37
  __int64 v184; // [sp+1C0h] [bp-78h]@66
  __int64 v185; // [sp+1C8h] [bp-70h]@66
  __int64 v186; // [sp+1D0h] [bp-68h]@35
  void *v187; // [sp+1D8h] [bp-60h]@33
  int v188; // [sp+1E0h] [bp-58h]@35
  __int64 v189; // [sp+1F0h] [bp-48h]@35
  void *v190; // [sp+1F8h] [bp-40h]@33

  v9 = a6;
  v10 = a5;
  v11 = a4;
  v129 = a1;
  v136 = a2;
  v137 = a3;
  v12 = *(_QWORD *)a1;
  v124 = *(_QWORD *)a1;
  v13 = 0LL;
  memset(&v155, 0, 0x100uLL);
  v14 = *(_BYTE **)(a1 + 32);
  v179 = v12;
  v134 = v14;
  if ( v14 )
  {
    if ( *(_BYTE *)(a1 + 56) & 8 && v11 != a5 )
    {
      if ( !(*(_BYTE *)(a1 + 56) & 1) )
        v13 = v14;
      v134 = v13;
    }
    else
    {
      v134 = 0LL;
    }
  }
  v140 = 0LL;
  v15 = *(_QWORD *)(a1 + 48);
  if ( v15 < a7 )
  {
    v16 = a7 - 1 - v15;
    a7 += v15 - (a7 - 1);
    v140 = v16;
  }
  if ( !*(_QWORD *)(a1 + 16)
    || (v17 = *(_QWORD *)(v124 + 72)) == 0
    || (v18 = *(_QWORD *)(v124 + 80)) == 0
    || (v19 = *(_QWORD *)(v124 + 88)) == 0
    || !*(_QWORD *)(v124 + 96) )
  {
    return 1;
  }
  if ( !*(_QWORD *)(v17 + 16) && !*(_QWORD *)(v18 + 16) && (!*(_QWORD *)(v19 + 16) || *(_BYTE *)(a1 + 56) >= 0) )
  {
    if ( v11 )
    {
      v131 = 1;
      if ( a5 )
        return (unsigned int)v131;
    }
    v10 = 0LL;
    v11 = 0LL;
  }
  v130 = 1;
  if ( !a7 )
    v130 = *(_QWORD *)(v124 + 152) != 0LL;
  v20 = *(_QWORD *)(a1 + 40);
  v21 = *(_DWORD *)(v124 + 180);
  v119 = *(_QWORD *)(v129 + 24);
  v22 = *(_QWORD *)(v124 + 16);
  v178 = v21;
  v23 = v22 + 1;
  v139 = v20;
  if ( v22 + 1 < v21 )
    v23 = v21;
  v169 = v20;
  v165 = v137;
  v164 = v137;
  if ( v23 > v137 + 1 )
    v23 = v137 + 1;
  v167 = v137;
  v166 = v137;
  v155 = v136;
  v171 = (v119 & 0x400000) != 0;
  v24 = *(_BYTE *)(v124 + 176);
  v174 = (v20 | v119 & 0x400000) != 0;
  v173 = (v24 >> 3) & 1;
  v172 = (v24 >> 2) & 1;
  v131 = sub_406EE0((__int64)&v155, v23);
  if ( v131 )
  {
LABEL_132:
    v32 = ptr;
    goto LABEL_133;
  }
  v170 = v124 + 184;
  v177 = (*(_BYTE *)(v124 + 176) >> 4) & 1;
  if ( v174
    || (v27 = __OFSUB__(*(_DWORD *)(v124 + 180), 1),
        v25 = *(_DWORD *)(v124 + 180) == 1,
        v26 = *(_DWORD *)(v124 + 180) - 1 < 0,
        v156 = v136,
        v28 = v137,
        !((unsigned __int8)(v26 ^ v27) | v25)) )
  {
    v28 = 0LL;
  }
  v160 = v28;
  v161 = v28;
  v167 = v9;
  v29 = *(_BYTE *)(v129 + 56);
  v166 = v9;
  v176 = v29 >> 7;
  v30 = *(_QWORD *)(v124 + 152);
  v181 = -1LL;
  v180 = a9;
  if ( 2 * v30 > 0 )
  {
    if ( 2 * v30 > 461168601842738790LL )
      goto LABEL_206;
    v31 = malloc(80 * v30);
    v187 = v31;
    v190 = malloc(16 * v30);
    if ( !v190 || !v31 )
      goto LABEL_206;
  }
  v186 = 2 * v30;
  v188 = 1;
  v189 = 2 * v30;
  if ( a7 > 1 || *(_BYTE *)(v124 + 176) & 2 )
  {
    if ( (unsigned __int64)v162 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v32 = malloc(8 * v162 + 8);
      ptr = v32;
      if ( !v32 )
      {
LABEL_200:
        v131 = 12;
        goto LABEL_133;
      }
      goto LABEL_38;
    }
LABEL_206:
    v32 = ptr;
    v131 = 12;
    goto LABEL_133;
  }
  ptr = 0LL;
LABEL_38:
  v149 = v11;
  v168 = (a9 & 1u) < 1 ? 6 : 4;
  v142 = 2 * (v11 <= v10) - 1;
  v33 = v10;
  if ( v11 <= v10 )
    v33 = v11;
  v138 = v33;
  v34 = v10;
  if ( v11 >= v10 )
    v34 = v11;
  v135 = v34;
  v35 = 8;
  v144 = *(_DWORD *)(v124 + 180);
  if ( v134 )
  {
    v36 = 4;
    if ( *(_DWORD *)(v124 + 180) != 1 )
      v36 = 4 * ((v139 | *(_QWORD *)(v129 + 24) & 0x400000LL) == 0);
    v35 = 2 * (v11 <= v10) | v36 | (v139 != 0);
  }
  if ( v11 < v138 || v11 > v135 )
  {
LABEL_123:
    v32 = ptr;
    v131 = 1;
    goto LABEL_133;
  }
  v37 = 0LL;
  if ( v11 <= v10 )
    v37 = &v149;
  v143 = v37;
  v146 = v37 != 0LL;
  v38 = v35 - 4;
  v141 = v38;
  while ( 1 )
  {
    switch ( v38 )
    {
      case 0:
      case 1:
        if ( v138 > v11 )
          goto LABEL_123;
        v39 = 0;
        v40 = v11;
        do
        {
          v41 = 0LL;
          if ( v137 > v40 )
            v41 = *(_BYTE *)(v136 + v40);
          if ( v139 )
            v41 = *(_BYTE *)(v139 + v41);
          if ( v134[v41] )
          {
            if ( v39 )
            {
              v149 = v40;
              v11 = v40;
            }
            goto LABEL_62;
          }
          --v40;
          v39 = 1;
        }
        while ( v40 >= v138 );
        v149 = v40;
        v32 = ptr;
        v131 = 1;
        goto LABEL_133;
      case 4:
        goto LABEL_62;
      case 3:
        if ( v135 <= v11 )
          goto LABEL_117;
        v58 = v11 + 1;
        if ( v134[*(_BYTE *)(v139 + *(_BYTE *)(v136 + v11))] )
          goto LABEL_62;
        while ( 1 )
        {
          v11 = v58;
          if ( v135 == v58 )
            break;
          v59 = *(_BYTE *)(v139 + *(_BYTE *)(v136 + v58++));
          if ( v134[v59] )
            goto LABEL_229;
        }
        v149 = v135;
        goto LABEL_117;
      case 2:
        if ( v135 <= v11 )
          goto LABEL_117;
        v61 = v11 + 1;
        if ( v134[*(_BYTE *)(v136 + v11)] )
          goto LABEL_62;
        break;
      default:
        goto LABEL_185;
    }
    while ( 1 )
    {
      v11 = v61;
      if ( v135 == v61 )
        break;
      v62 = *(_BYTE *)(v136 + v61++);
      if ( v134[v62] )
      {
LABEL_229:
        v149 = v11;
        goto LABEL_62;
      }
    }
    v149 = v135;
LABEL_117:
    if ( v135 == v11 )
    {
      v60 = 0LL;
      if ( v137 > v135 )
        v60 = *(_BYTE *)(v136 + v135);
      if ( v139 )
        v60 = *(_BYTE *)(v139 + v60);
      if ( !v134[v60] )
        goto LABEL_123;
    }
LABEL_62:
    v131 = sub_40A620((__int64)&v155, v11, a9);
    if ( v131 )
      goto LABEL_132;
    if ( v144 == 1 || !v160 || *v157 != -1 )
      break;
LABEL_182:
    v11 += v142;
    v149 = v11;
    if ( v11 < v138 || v11 > v135 )
      goto LABEL_123;
    v38 = v141;
    if ( v141 > 4 )
    {
LABEL_185:
      v89 = v135;
      while ( 1 )
      {
        v91 = v11 - v159;
        if ( v161 <= v11 - v159 )
        {
          v92 = v89;
          v93 = sub_40A620((__int64)&v155, v11, a9);
          v89 = v92;
          if ( v93 )
          {
            v131 = v93;
            goto LABEL_132;
          }
          v91 = v11 - v159;
        }
        v90 = v134;
        if ( v137 > v11 )
          v90 = &v134[*(_BYTE *)(v156 + v91)];
        if ( *v90 )
          goto LABEL_62;
        v11 += v142;
        v149 = v11;
        if ( v11 < v138 || v11 > v89 )
          goto LABEL_123;
      }
    }
  }
  v42 = v179;
  v188 = 0;
  v185 = 0LL;
  v43 = *(_QWORD *)(v179 + 72);
  v184 = 0LL;
  v147 = 0;
  v122 = v163;
  if ( *(_BYTE *)(v43 + 104) >= 0 )
    goto LABEL_72;
  v44 = sub_40A330((__int64)&v155, v163 - 1, v180);
  if ( v44 & 1 )
  {
    v43 = *(_QWORD *)(v42 + 80);
  }
  else
  {
    if ( !v44 )
      goto LABEL_72;
    if ( (v44 & 6) == 6 )
    {
      v43 = *(_QWORD *)(v42 + 96);
    }
    else if ( v44 & 2 )
    {
      v43 = *(_QWORD *)(v42 + 88);
    }
    else
    {
      if ( !(v44 & 4) )
        goto LABEL_72;
      v43 = sub_4098B0(&v147, v42, *(_QWORD *)(v43 + 80), v44);
    }
  }
  if ( !v43 )
  {
    v131 = v147;
    if ( v147 != 12 )
      __assert_fail("err == REG_ESPACE", "lib/regexec.c", 0x431u, "check_matching");
    goto LABEL_132;
  }
LABEL_72:
  if ( ptr && (v25 = *(_QWORD *)(v42 + 152) == 0LL, *((_QWORD *)ptr + v122) = v43, !v25) )
  {
    v118 = sub_40A1E0((__int64)&v155, (_QWORD *)(v43 + 16), (_QWORD *)(v43 + 24), 0LL);
    v147 = v118;
    if ( v118 )
      goto LABEL_279;
    v45 = *(_BYTE *)(v43 + 104);
    if ( v45 & 0x40 )
    {
      v118 = sub_40E1A0((__int64)&v155, (_QWORD *)(v43 + 16), (_QWORD *)(v43 + 24));
      v147 = v118;
      if ( v118 )
      {
LABEL_279:
        v46 = v118;
        goto LABEL_104;
      }
      v45 = *(_BYTE *)(v43 + 104);
    }
    v145 = 0;
  }
  else
  {
    v145 = v146;
    v45 = *(_BYTE *)(v43 + 104);
  }
  LOBYTE(v125) = 0;
  v46 = -1LL;
  if ( v45 & 0x10 )
  {
    if ( *(_BYTE *)(v43 + 104) >= 0
      || (v125 = (void *)sub_40A550((__int64)&v155, *(_QWORD *)(v43 + 16), (__int64 *)(v43 + 24), v122)) != 0LL )
    {
      v46 = v122;
      LOBYTE(v125) = 1;
      if ( !v130 )
        goto LABEL_104;
    }
  }
  v47 = v163;
  v127 = v46;
  v132 = v143;
  while ( 2 )
  {
    if ( v167 <= v47 )
      goto LABEL_141;
    v120 = v47 + 1;
    if ( (v47 + 1 < v162 || v162 >= v165) && (v120 < v160 || v160 >= v165) )
    {
      if ( !(*(_BYTE *)(v43 + 104) & 0x20) )
        goto LABEL_88;
    }
    else
    {
      v65 = sub_407A80((__int64)&v155, (unsigned int)(v47 + 2));
      v147 = v65;
      if ( v65 )
      {
        if ( v65 != 12 )
          __assert_fail("err == REG_ESPACE", "lib/regexec.c", 0x468u, "check_matching");
        goto LABEL_206;
      }
      v47 = v163;
      if ( !(*(_BYTE *)(v43 + 104) & 0x20) )
        goto LABEL_88;
    }
    v66 = v179;
    if ( *(_QWORD *)(v43 + 16) <= 0LL )
    {
LABEL_203:
      v147 = 0;
LABEL_88:
      v163 = v47 + 1;
      v50 = *(_BYTE *)(v156 + v47);
      while ( 1 )
      {
        v51 = *(_QWORD *)(v43 + 88);
        if ( v51 )
        {
          v52 = *(_QWORD *)(v51 + 8 * v50);
          goto LABEL_91;
        }
        v87 = *(_QWORD *)(v43 + 96);
        if ( v87 )
          break;
        if ( !sub_40B040(v179, v43) )
        {
          v147 = 12;
          if ( !ptr )
          {
LABEL_199:
            v32 = 0LL;
            goto LABEL_200;
          }
          goto LABEL_196;
        }
      }
      if ( sub_40A330((__int64)&v155, v163 - 1, v180) & 1 )
        v52 = *(_QWORD *)(v87 + 8 * v50 + 2048);
      else
        v52 = *(_QWORD *)(v87 + 8 * v50);
LABEL_91:
      if ( !ptr )
        goto LABEL_93;
      goto LABEL_92;
    }
    v67 = 0LL;
    v68 = v47;
    v133 = (_QWORD *)(v179 + 216);
    while ( 1 )
    {
      v78 = *(_QWORD *)v66;
      v79 = *(_QWORD *)(*(_QWORD *)(v43 + 24) + 8 * v67);
      v80 = *(_QWORD *)v66 + 16LL * *(_QWORD *)(*(_QWORD *)(v43 + 24) + 8 * v67);
      if ( !(*(_BYTE *)(v80 + 10) & 0x10) )
        goto LABEL_163;
      v81 = *(_DWORD *)(v80 + 8);
      if ( v81 & 0x3FF00 )
      {
        v82 = *(_QWORD *)v66;
        v83 = v68;
        v84 = sub_40A330((__int64)&v155, v68, v180);
        v68 = v83;
        v78 = v82;
        if ( BYTE1(v81) & 4 )
        {
          if ( !(v84 & 1) || BYTE1(v81) & 8 )
            goto LABEL_163;
        }
        else if ( BYTE1(v81) & 8 && v84 & 1 )
        {
          goto LABEL_163;
        }
        if ( BYTE1(v81) & 0x20 && !(v84 & 2) || BYTE1(v81) & 0x80 && !(v84 & 8) )
          goto LABEL_163;
      }
      v69 = sub_40CD80(v78, v133, v79, (__int64)&v155, v68);
      if ( !v69 )
        goto LABEL_162;
      v70 = v163 + v69;
      if ( v188 >= v69 )
        v69 = v188;
      v188 = v69;
      v71 = sub_407BD0((__int64)&v155, v70);
      v148 = v71;
      if ( v71 )
        break;
      v128 = (char *)ptr + 8 * v70;
      v72 = *(_QWORD *)(v66 + 48) + 24LL * *(_QWORD *)(*(_QWORD *)(v66 + 24) + 8 * v79);
      if ( *(_QWORD *)v128 )
      {
        v71 = sub_409720((__int64)&v150, *(_QWORD *)(*(_QWORD *)v128 + 80LL), v72);
        v148 = v71;
        if ( v71 )
          break;
        v73 = sub_40A330((__int64)&v155, v70 - 1, v180);
        v74 = (char *)ptr + 8 * v70;
        v75 = sub_4098B0(&v148, v66, (__int64)&v150, v73);
        v76 = v151;
        *(_QWORD *)v74 = v75;
        free(v76);
        v77 = ptr;
        if ( *((_QWORD *)ptr + v70) )
          goto LABEL_162;
LABEL_171:
        v71 = v148;
        if ( v148 )
          goto LABEL_195;
        goto LABEL_162;
      }
      v150 = _mm_loadu_si128((const __m128i *)v72);
      v151 = *(void **)(v72 + 16);
      v85 = sub_40A330((__int64)&v155, v70 - 1, v180);
      v86 = sub_4098B0(&v148, v66, (__int64)&v150, v85);
      v77 = ptr;
      *(_QWORD *)v128 = v86;
      if ( !v77[v70] )
        goto LABEL_171;
LABEL_162:
      v68 = v163;
LABEL_163:
      if ( ++v67 >= *(_QWORD *)(v43 + 16) )
      {
        v47 = v68;
        goto LABEL_203;
      }
    }
    v77 = ptr;
LABEL_195:
    v147 = v71;
    if ( !v77 )
      goto LABEL_199;
LABEL_196:
    v52 = 0LL;
LABEL_92:
    v52 = sub_40EA20(&v147, (__int64)&v155, v52);
LABEL_93:
    if ( v52 )
      goto LABEL_77;
    v32 = ptr;
    if ( v147 )
      goto LABEL_200;
    if ( !ptr || (unsigned __int8)(v130 & 1 ^ 1) & (unsigned __int8)v125 )
      goto LABEL_141;
    while ( 2 )
    {
      v53 = v163;
      v54 = 0;
      while ( 2 )
      {
        v55 = v53 + 1;
        if ( v184 < v53 + 1 )
        {
          v46 = v127;
          if ( v54 )
            v163 = v53;
          goto LABEL_102;
        }
        ++v53;
        v54 = 1;
        if ( !*((_QWORD *)v32 + v55) )
          continue;
        break;
      }
      v163 = v55;
      v64 = sub_40EA20(&v147, (__int64)&v155, 0LL);
      if ( v147 )
      {
        v52 = v64;
        if ( v64 )
          goto LABEL_77;
LABEL_141:
        v46 = v127;
LABEL_102:
        if ( v132 )
          *v132 += v122;
        goto LABEL_104;
      }
      if ( !v64 )
      {
        v32 = ptr;
        continue;
      }
      break;
    }
    v52 = v64;
LABEL_77:
    v47 = v163;
    v25 = ((v43 == v52) & v145) == 0;
    v145 &= v43 == v52;
    v48 = v120;
    if ( v25 )
      v48 = v122;
    v122 = v48;
    v49 = *(_BYTE *)(v52 + 104);
    if ( !(v49 & 0x10) || v49 < 0 && !sub_40A550((__int64)&v155, *(_QWORD *)(v52 + 16), (__int64 *)(v52 + 24), v163) )
    {
LABEL_83:
      v43 = v52;
      continue;
    }
    break;
  }
  if ( v130 )
  {
    v127 = v47;
    LOBYTE(v125) = 1;
    v132 = 0LL;
    goto LABEL_83;
  }
  v46 = v47;
LABEL_104:
  if ( v46 == -1LL )
    goto LABEL_181;
  if ( v46 == -2LL )
    goto LABEL_206;
  v181 = v46;
  if ( *(_BYTE *)(v129 + 56) & 0x10 || a7 <= 1 )
  {
    if ( !*(_QWORD *)(v124 + 152) )
      goto LABEL_131;
    v56 = ptr;
    v182 = (void *)sub_40A550(
                     (__int64)&v155,
                     *(_QWORD *)(*((_QWORD *)ptr + v46) + 16LL),
                     (__int64 *)(*((_QWORD *)ptr + v46) + 24LL),
                     v46);
LABEL_208:
    v57 = v182;
LABEL_209:
    v121 = v179;
    if ( v46 > 0x1FFFFFFFFFFFFFFELL )
    {
      v32 = v56;
      v131 = 12;
      goto LABEL_133;
    }
    v94 = v46 + 1;
    v95 = malloc(8 * (v46 + 1));
    if ( !v95 )
      goto LABEL_206;
    if ( *(_QWORD *)(v121 + 152) )
    {
      v96 = malloc(8 * (v46 + 1));
      v126 = v96;
      if ( !v96 )
      {
        free(v95);
        v32 = ptr;
        v131 = 12;
        goto LABEL_133;
      }
      while ( 1 )
      {
        memset(v96, 0, 8 * v94);
        v153 = 0LL;
        v150.m128i_i64[0] = (__int64)v95;
        v150.m128i_i64[1] = (__int64)v96;
        v151 = v57;
        v152 = v46;
        v154 = 0LL;
        v123 = sub_40EBE0((__int64)&v155, (__int64)&v150);
        free(v154);
        if ( v123 )
        {
          v88 = v123;
          goto LABEL_270;
        }
        if ( *(_QWORD *)v95 || *(_QWORD *)v96 )
          break;
        do
        {
          if ( --v46 == -1LL )
          {
            free(v95);
            free(v96);
            sub_408270((__int64)&v155);
            v11 = v149;
            goto LABEL_182;
          }
          v97 = *((_QWORD *)ptr + v46);
        }
        while ( !v97 || !(*(_BYTE *)(v97 + 104) & 0x10) );
        v94 = v46 + 1;
        v57 = (void *)sub_40A550((__int64)&v155, *(_QWORD *)(v97 + 16), (__int64 *)(v97 + 24), v46);
      }
      v88 = sub_409DA0(v121, (__int64)v95, (__int64)v96, v94);
      free(v96);
      if ( !v88 )
      {
LABEL_221:
        v98 = (__int64)v57;
        v99 = v46;
        v100 = v98;
        free(ptr);
        ptr = v95;
        v182 = (void *)v100;
        v181 = v99;
        goto LABEL_131;
      }
LABEL_273:
      v126 = 0LL;
LABEL_270:
      free(v95);
      free(v126);
      v103 = v88;
      if ( v88 != 1 )
        goto LABEL_271;
    }
    else
    {
      v150.m128i_i64[0] = (__int64)v95;
      v150.m128i_i64[1] = 0LL;
      v151 = v57;
      v152 = v46;
      v153 = 0LL;
      v154 = 0LL;
      v88 = sub_40EBE0((__int64)&v155, (__int64)&v150);
      free(v154);
      if ( v88 )
        goto LABEL_273;
      if ( *(_QWORD *)v95 )
        goto LABEL_221;
      free(v95);
    }
LABEL_181:
    sub_408270((__int64)&v155);
    v11 = v149;
    goto LABEL_182;
  }
  v56 = ptr;
  v57 = (void *)sub_40A550(
                  (__int64)&v155,
                  *(_QWORD *)(*((_QWORD *)ptr + v46) + 16LL),
                  (__int64 *)(*((_QWORD *)ptr + v46) + 24LL),
                  v46);
  v182 = v57;
  if ( *(_BYTE *)(v124 + 176) & 1 )
    goto LABEL_209;
  if ( *(_QWORD *)(v124 + 152) )
    goto LABEL_208;
LABEL_131:
  if ( !a7 )
    goto LABEL_132;
  v101 = a8 + 16;
  if ( a7 <= 1 )
  {
    *(_QWORD *)a8 = 0LL;
    *(_QWORD *)(a8 + 8) = v181;
LABEL_278:
    v104 = 0LL;
    goto LABEL_249;
  }
  do
  {
    *(_QWORD *)(v101 + 8) = -1LL;
    v101 += 16LL;
    *(_QWORD *)(v101 - 16) = -1LL;
  }
  while ( a8 + 16 * a7 != v101 );
  *(_QWORD *)a8 = 0LL;
  *(_QWORD *)(a8 + 8) = v181;
  if ( *(_BYTE *)(v129 + 56) & 0x10 || a7 == 1 )
    goto LABEL_278;
  v102 = 0;
  if ( *(_BYTE *)(v124 + 176) & 1 )
    v102 = *(_QWORD *)(v124 + 152) > 0LL;
  v103 = sub_40D730((__int64 *)v129, (__int64)&v155, a7, a8, v102);
  if ( v103 )
  {
LABEL_271:
    v32 = ptr;
    v131 = v103;
    goto LABEL_133;
  }
  v104 = *(_QWORD *)a8;
LABEL_249:
  v105 = v175;
  v106 = v160;
  v107 = 0LL;
  v108 = v158;
  v109 = v161;
  v110 = v149;
  for ( i = a8; ; v104 = *(_QWORD *)i )
  {
    if ( v104 != -1LL )
    {
      v112 = *(_QWORD *)(i + 8);
      if ( v105 )
      {
        if ( v106 == v104 )
          v104 = v109;
        else
          v104 = *(_QWORD *)(v108 + 8 * v104);
        *(_QWORD *)i = v104;
        if ( v106 == v112 )
          v112 = v109;
        else
          v112 = *(_QWORD *)(v108 + 8 * v112);
      }
      *(_QWORD *)i = v110 + v104;
      *(_QWORD *)(i + 8) = v110 + v112;
    }
    ++v107;
    i += 16LL;
    if ( v107 == a7 )
      break;
  }
  if ( v140 > 0 )
  {
    v113 = (_QWORD *)(a8 + 16 * a7);
    do
    {
      *v113 = -1LL;
      v113 += 2;
      *(v113 - 1) = -1LL;
    }
    while ( (_QWORD *)(a8 + 16 * (a7 + v140)) != v113 );
  }
  v32 = ptr;
  v114 = *(_QWORD *)(v124 + 224);
  if ( v114 )
  {
    for ( j = 0LL; j != a7 - 1; ++j )
    {
      v116 = *(_QWORD *)(v114 + 8 * j);
      if ( v116 != j )
      {
        v117 = 16 * j;
        *(_QWORD *)(a8 + v117 + 16) = *(_QWORD *)(a8 + 16 * (v116 + 1));
        *(_QWORD *)(a8 + v117 + 24) = *(_QWORD *)(a8 + 16 * (*(_QWORD *)(v114 + 8 * j) + 1LL) + 8);
      }
    }
  }
LABEL_133:
  free(v32);
  if ( *(_QWORD *)(v124 + 152) )
  {
    sub_408270((__int64)&v155);
    free(v190);
    free(v187);
  }
  sub_408230((__int64)&v155);
  return (unsigned int)v131;
}

signed __int64 __fastcall sub_410670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14@1
  __int64 v5; // rbp@1
  signed __int64 v6; // rcx@1
  __int64 v7; // rbx@1
  __int64 v8; // r12@1
  __int64 v9; // rdx@1
  signed __int64 v10; // rcx@1
  __int64 v11; // rdi@1
  signed __int64 result; // rax@3
  __int64 v13; // r15@5
  __int64 v14; // r13@6
  __int64 v15; // rdi@7
  void *v16; // rax@7
  bool v17; // zf@8
  bool v18; // sf@8
  __int64 *v19; // r13@15
  signed __int64 v20; // r12@17
  signed __int64 i; // rax@17
  __int64 v22; // rdi@19
  signed __int64 v23; // rdx@19
  __int64 v24; // r13@27
  __int64 v25; // r15@28
  __int64 v26; // r14@28
  __int64 v27; // rbp@31
  char v28; // al@31
  __int64 v29; // r12@34
  signed __int64 j; // rbx@34
  __int64 v31; // r9@35
  __int64 v32; // rax@37
  __int64 v33; // r9@38
  __int64 v34; // r10@38
  __int64 v35; // rbx@42
  __int64 v36; // rsi@43
  __int64 v37; // rdx@43
  __int64 v38; // r9@46
  __int64 v39; // rax@46
  __int64 v40; // r9@46
  __int64 *v41; // r10@46
  __int64 v42; // r10@53
  __int64 *v43; // rbx@57
  signed __int64 v44; // r8@20
  __m128i v45; // xmm1@61
  __m128i v46; // xmm2@61
  void *v47; // rax@61
  unsigned int v48; // ST18_4@63
  __int64 v49; // r15@66
  signed __int64 v50; // rdx@67
  __int64 v51; // rax@69
  __int64 v52; // rsi@69
  __int64 v53; // r8@69
  __int64 v54; // r13@70
  __int64 v55; // rbx@71
  signed __int64 v56; // rax@74
  __int64 v57; // r10@82
  signed __int64 v58; // r9@82
  signed __int64 v59; // r11@82
  __int64 *v60; // rcx@82
  __int64 v61; // rsi@82
  signed __int64 v62; // rdx@87
  int v63; // er13@87
  signed __int64 v64; // r13@91
  __int64 v65; // rbx@93
  signed __int64 v66; // rax@97
  __int64 v67; // rdx@97
  __int64 v68; // r9@97
  __int64 v69; // r10@98
  __int64 v70; // [sp+8h] [bp-D0h]@1
  __int64 v71; // [sp+10h] [bp-C8h]@1
  signed __int64 v72; // [sp+18h] [bp-C0h]@1
  __int64 v73; // [sp+20h] [bp-B8h]@6
  __int64 v74; // [sp+20h] [bp-B8h]@65
  __int64 v75; // [sp+28h] [bp-B0h]@13
  __int64 v76; // [sp+30h] [bp-A8h]@28
  __int64 v77; // [sp+30h] [bp-A8h]@71
  __int64 v78; // [sp+30h] [bp-A8h]@91
  signed __int64 v79; // [sp+38h] [bp-A0h]@25
  __int64 v80; // [sp+38h] [bp-A0h]@93
  __int64 v81; // [sp+40h] [bp-98h]@28
  unsigned int v82; // [sp+5Ch] [bp-7Ch]@1
  __m128i v83; // [sp+60h] [bp-78h]@5
  __m128i v84; // [sp+70h] [bp-68h]@41
  __m128i v85; // [sp+80h] [bp-58h]@41
  void *ptr; // [sp+90h] [bp-48h]@46

  v4 = a3;
  v5 = a4;
  v6 = 8 * a3;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 152);
  v9 = *(_QWORD *)(v5 + 8);
  v72 = v6;
  v10 = *(_QWORD *)(a1 + 184) + v6;
  v70 = a1;
  v11 = *(_QWORD *)v10;
  v82 = 0;
  v71 = v11;
  if ( !v11 )
  {
    if ( v9 )
    {
      v43 = (__int64 *)(*(_QWORD *)a2 + v72);
      *v43 = sub_409BB0(&v82, v8, v5);
      result = v82;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)a2 + v72) = 0LL;
      result = 0LL;
    }
    return result;
  }
  if ( !v9 )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v4) = 0LL;
    result = 0LL;
    if ( !(*(_BYTE *)(*(_QWORD *)v10 + 104LL) & 0x40) )
      return result;
    goto LABEL_17;
  }
  v83.m128i_i32[0] = 0;
  v13 = sub_409BB0(&v83, v8, v5);
  result = v83.m128i_u32[0];
  if ( v83.m128i_i32[0] )
    return result;
  v14 = *(_QWORD *)(v13 + 56);
  v73 = v13 + 56;
  if ( !v14 )
  {
    v15 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v13 + 64) = 0LL;
    *(_QWORD *)(v13 + 56) = v15;
    v16 = malloc(8 * v15);
    *(_QWORD *)(v13 + 72) = v16;
    if ( !v16 )
      return 12LL;
    v17 = *(_QWORD *)(v5 + 8) == 0LL;
    v18 = *(_QWORD *)(v5 + 8) < 0;
    v83.m128i_i32[0] = 0;
    if ( !v18 && !v17 )
    {
      do
      {
        v83.m128i_i32[0] = sub_408B40(v73, *(_QWORD *)(v8 + 56) + 24LL * *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v14));
        if ( v83.m128i_i32[0] )
          return 12LL;
      }
      while ( ++v14 < *(_QWORD *)(v5 + 8) );
    }
  }
  v75 = v71 + 8;
  result = sub_4090B0(v5, v71 + 8, v73);
  v82 = result;
  if ( (_DWORD)result )
    return result;
  if ( *(_QWORD *)(a2 + 40) )
  {
    v74 = *(_QWORD *)(v70 + 216);
    if ( *(_QWORD *)(a2 + 40) <= 0LL )
    {
LABEL_80:
      v82 = 0;
      goto LABEL_15;
    }
    v49 = 0LL;
    while ( 1 )
    {
      v50 = v74 + 40LL * *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8 * v49);
      if ( v4 <= *(_QWORD *)(v50 + 16) || v4 > *(_QWORD *)(v50 + 8) )
        goto LABEL_79;
      v51 = *(_QWORD *)v8;
      v52 = *(_QWORD *)(v5 + 8);
      v53 = *(_QWORD *)(*(_QWORD *)v8 + 16LL * *(_QWORD *)v50);
      if ( v4 != *(_QWORD *)(v50 + 24) )
      {
        v54 = 0LL;
        if ( v52 <= 0 )
          goto LABEL_79;
        v77 = v7;
        v55 = *(_QWORD *)(*(_QWORD *)v8 + 16LL * *(_QWORD *)v50);
        while ( 1 )
        {
          v56 = 16LL * *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v54) + v51;
          if ( (unsigned int)*(_BYTE *)(v56 + 8) - 8 > 1 || v55 != *(_QWORD *)v56 )
          {
            if ( ++v54 >= *(_QWORD *)(v5 + 8) )
              goto LABEL_78;
          }
          else
          {
            result = sub_40AE10(v8, *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v54), v5, v75);
            if ( (_DWORD)result )
              return result;
            if ( ++v54 >= *(_QWORD *)(v5 + 8) )
            {
LABEL_78:
              v7 = v77;
              goto LABEL_79;
            }
          }
          v51 = *(_QWORD *)v8;
        }
      }
      if ( v52 <= 0 )
        goto LABEL_79;
      v57 = *(_QWORD *)(v5 + 16);
      v58 = -1LL;
      v59 = v57 + 8 * v52;
      v60 = *(__int64 **)(v5 + 16);
      v61 = -1LL;
      do
      {
        while ( 1 )
        {
          v62 = v51 + 16 * *v60;
          v63 = *(_BYTE *)(v62 + 8);
          if ( v63 != 8 )
            break;
          if ( v53 == *(_QWORD *)v62 )
            v61 = *v60;
          ++v60;
          if ( (__int64 *)v59 == v60 )
            goto LABEL_91;
        }
        if ( v63 == 9 && v53 == *(_QWORD *)v62 )
          v58 = *v60;
        ++v60;
      }
      while ( (__int64 *)v59 != v60 );
LABEL_91:
      v64 = v58;
      v78 = v58;
      if ( v61 >= 0 )
      {
        result = sub_40AE10(v8, v61, v5, v75);
        if ( (_DWORD)result )
          return result;
        if ( v64 >= 0 && *(_QWORD *)(v5 + 8) > 0LL )
        {
          v57 = *(_QWORD *)(v5 + 16);
LABEL_93:
          v80 = v7;
          v65 = 0LL;
          while ( 1 )
          {
            v66 = 24LL * *(_QWORD *)(v57 + 8 * v65) + *(_QWORD *)(v8 + 56);
            if ( sub_408600(*(_QWORD *)(v66 + 8), (__int64 *)(v66 + 16), v78)
              || sub_408600(
                   *(_QWORD *)(*(_QWORD *)(v8 + 48) + v68 + 8),
                   (__int64 *)(*(_QWORD *)(v8 + 48) + v68 + 16),
                   v67) )
            {
              ++v65;
            }
            else
            {
              result = sub_40AE10(v8, v69, v5, v75);
              if ( (_DWORD)result )
                return result;
            }
            if ( *(_QWORD *)(v5 + 8) <= v65 )
              break;
            v57 = *(_QWORD *)(v5 + 16);
          }
          v7 = v80;
          goto LABEL_79;
        }
      }
      else if ( v58 >= 0 )
      {
        goto LABEL_93;
      }
LABEL_79:
      if ( ++v49 >= *(_QWORD *)(v7 + 40) )
        goto LABEL_80;
    }
  }
LABEL_15:
  v19 = (__int64 *)(*(_QWORD *)v7 + v72);
  *v19 = sub_409BB0(&v82, v8, v5);
  result = v82;
  if ( v82 )
    return result;
  result = 0LL;
  if ( !(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v70 + 184) + v72) + 104LL) & 0x40) )
    return result;
LABEL_17:
  v20 = 0LL;
  for ( i = *(_QWORD *)(v70 + 200); v20 < i; i = v23 )
  {
    v22 = *(_QWORD *)(v70 + 216);
    v23 = (v20 + i) / 2;
    if ( v4 <= *(_QWORD *)(v22 + 40 * v23 + 8) )
    {
      while ( v20 < v23 )
      {
        v44 = (v20 + v23) / 2;
        if ( v4 > *(_QWORD *)(v22 + 40 * v44 + 8) )
          goto LABEL_60;
        v23 = (v20 + v23) / 2;
      }
      break;
    }
    v44 = (v20 + i) / 2;
    v23 = i;
LABEL_60:
    v20 = v44 + 1;
  }
  if ( *(_QWORD *)(v70 + 200) <= v20 )
    return 0LL;
  v79 = 40 * v20;
  if ( v4 != *(_QWORD *)(*(_QWORD *)(v70 + 216) + 40 * v20 + 8) )
    return 0LL;
  if ( v20 == -1 )
    return 0LL;
  v24 = *(_QWORD *)(v70 + 152);
  v83.m128i_i64[0] = 0LL;
  if ( *(_QWORD *)(v71 + 16) <= 0LL )
    return 0LL;
  v76 = v4;
  v25 = 0LL;
  v26 = v7;
  v81 = v20;
  while ( 1 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(v71 + 24) + 8 * v25);
    v28 = *(_BYTE *)(*(_QWORD *)v24 + 16LL * *(_QWORD *)(*(_QWORD *)(v71 + 24) + 8 * v25) + 8);
    if ( v27 != *(_QWORD *)(v26 + 16) )
    {
      if ( v28 == 4 )
        break;
      goto LABEL_30;
    }
    if ( v76 != *(_QWORD *)(v26 + 24) && v28 == 4 )
      break;
LABEL_30:
    if ( ++v25 >= *(_QWORD *)(v71 + 16) )
    {
      if ( v83.m128i_i64[0] )
      {
        LODWORD(result) = 0;
        goto LABEL_63;
      }
      return 0LL;
    }
  }
  v29 = v81;
  for ( j = *(_QWORD *)(v70 + 216) + v79; ; j += 40LL )
  {
    if ( v27 != *(_QWORD *)j )
      goto LABEL_50;
    v42 = v76 + *(_QWORD *)(j + 24) - *(_QWORD *)(j + 16);
    v31 = *(_QWORD *)(j + 24) == *(_QWORD *)(j + 16) ? **(_QWORD **)(*(_QWORD *)(v24 + 40) + 24 * v27 + 16) : *(_QWORD *)(*(_QWORD *)(v24 + 24) + 8 * v27);
    if ( v42 > *(_QWORD *)(v26 + 24) )
      goto LABEL_50;
    v32 = *(_QWORD *)(*(_QWORD *)v26 + 8 * v42);
    if ( !v32
      || !sub_408600(*(_QWORD *)(v32 + 16), (__int64 *)(v32 + 24), v31)
      || (unsigned __int8)sub_408890(v70, (_QWORD *)(v26 + 40), (_QWORD *)(v26 + 48), v27, v76, v33, v34) )
    {
      goto LABEL_50;
    }
    if ( !v83.m128i_i64[0] )
    {
      v45 = _mm_load_si128((const __m128i *)(v26 + 16));
      v46 = _mm_load_si128((const __m128i *)(v26 + 32));
      v47 = *(void **)(v26 + 48);
      v83 = _mm_load_si128((const __m128i *)v26);
      v84 = v45;
      v85 = v46;
      ptr = v47;
      result = sub_4096A0((__int64)&v85, v26 + 32);
      if ( (_DWORD)result )
        goto LABEL_62;
    }
    v84.m128i_i64[0] = v27;
    v84.m128i_i64[1] = v76;
    if ( !(unsigned __int8)sub_406FF0((__int64)&v85, v29) )
      break;
    v35 = *(_QWORD *)(v83.m128i_i64[0] + v72);
    result = sub_40EBE0(v70, (__int64)&v83);
    if ( (_DWORD)result )
      goto LABEL_62;
    v36 = *(_QWORD *)(v26 + 8);
    v37 = v83.m128i_i64[0];
    if ( v36 )
    {
      result = sub_409DA0(v24, v36, v83.m128i_i64[0], v76 + 1);
      if ( (_DWORD)result )
        goto LABEL_62;
      v37 = v83.m128i_i64[0];
    }
    v38 = v85.m128i_i64[1];
    *(_QWORD *)(v37 + v72) = v35;
    v39 = sub_408600(v38, (__int64 *)&ptr, v29) - 1;
    if ( v39 >= 0 && v40 > v39 )
    {
      v85.m128i_i64[1] = v40 - 1;
      sub_408770(&v85.m128i_i64[1], v41, v39);
    }
    j = *(_QWORD *)(v70 + 216) + 40 * v29;
LABEL_50:
    ++v29;
    if ( !*(_BYTE *)(j + 32) )
      goto LABEL_30;
  }
  result = 12LL;
LABEL_62:
  if ( v83.m128i_i64[0] )
  {
LABEL_63:
    v48 = result;
    free(ptr);
    result = v48;
  }
  return result;
}

signed __int64 __fastcall sub_410EA0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  __int64 v6; // r10@1
  __int64 v7; // r11@1
  __int64 v8; // rbp@1
  __int64 v9; // r12@1
  signed int v10; // eax@2
  char v11; // al@3
  __int64 v12; // r11@3
  char v13; // al@7
  signed __int64 result; // rax@7
  __int64 v15; // rdx@9
  char v16; // r9@11
  __int64 v17; // r8@11
  __int64 v18; // r12@14
  __int64 v19; // rdx@15
  signed __int64 v20; // rax@15
  char v21; // r13@15
  char v22; // dl@19
  signed __int64 v23; // rax@29
  char *v24; // r11@32
  __int64 v25; // [sp+0h] [bp-38h]@33
  char v26; // [sp+8h] [bp-30h]@33

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = *(_QWORD *)(a2 + 72);
  if ( *(_DWORD *)(a2 + 144) != 1 )
  {
    v10 = sub_4085B0(a2, *(_QWORD *)(a2 + 72));
    if ( v10 > 1 )
    {
      v15 = *(_QWORD *)(v6 + 16);
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(v15 + 4 * v9);
      *(_QWORD *)(v6 + 72) = v9 + v10;
      return 0LL;
    }
  }
  v11 = *(_BYTE *)(v8 + 8);
  v12 = v9 + v7;
  *(_QWORD *)(v6 + 72) = v12;
  if ( (v11 & 0xFB) != 26 && v11 != 28 )
  {
    if ( v11 != 22 || a6 || (sub_406B10((__int64)&v25, v6, a5), result = 11LL, v26 == 21) )
    {
      v13 = *(_BYTE *)v8;
      *(_DWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = v13;
      result = 0LL;
    }
    return result;
  }
  if ( v12 >= *(_QWORD *)(v6 + 104) )
    return 7LL;
  v16 = *(_BYTE *)v8;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = (signed int)v17;
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
      if ( v21 & 0x80 )
        goto LABEL_15;
      v23 = 1LL;
      if ( *(_DWORD *)(v6 + 144) != 1 )
        v23 = (signed int)sub_4085B0(v6, v12);
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
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v17++) = v21;
    if ( v17 == 32 )
      return 7LL;
    v11 = *(_BYTE *)(v8 + 8);
    v12 = *(_QWORD *)(v6 + 72);
  }
  *(_QWORD *)(v6 + 72) = v20 + 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + v18) = 0;
  v22 = *(_BYTE *)(v8 + 8);
  if ( v22 == 28 )
  {
    *(_DWORD *)a1 = 2;
    result = 0LL;
  }
  else if ( v22 == 30 )
  {
    *(_DWORD *)a1 = 4;
    result = 0LL;
  }
  else
  {
    result = 0LL;
    if ( v22 == 26 )
      *(_DWORD *)a1 = 3;
  }
  return result;
}

signed __int64 __fastcall sub_4110C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12@1
  __int64 v4; // r15@2
  __int64 v5; // rdx@2
  __int64 v6; // r13@2
  signed int v7; // eax@2
  __int64 v8; // rbx@2
  unsigned __int8 v9; // bp@2
  char v10; // r14@2
  __int64 v11; // rax@6
  __int64 v12; // ST08_8@6
  int v13; // er14@6
  __int64 v14; // rdx@6
  __int64 v15; // ST08_8@9
  signed __int64 v16; // rcx@10
  signed __int64 result; // rax@11
  unsigned __int8 v18; // r14@15
  wint_t v19; // ebp@17
  signed __int64 v20; // r12@43
  char v21; // al@44
  unsigned __int8 v22; // dl@44
  __int64 v23; // rdi@86
  __int64 v24; // rsi@89
  __int64 v25; // rdi@89
  int v26; // eax@96
  int v27; // [sp+8h] [bp-50h]@15
  char v28; // [sp+10h] [bp-48h]@44
  char v29; // [sp+18h] [bp-40h]@44

  v3 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(a2 + 104) <= v3 )
  {
    *(_BYTE *)(a1 + 8) = 2;
    return 0LL;
  }
  v4 = a3;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = a2;
  v7 = *(_DWORD *)(a2 + 144);
  v8 = a1;
  v9 = *(_BYTE *)(v5 + v3);
  v10 = *(_BYTE *)(a1 + 10) & 0x9F;
  *(_BYTE *)(a1 + 10) = v10;
  *(_BYTE *)a1 = v9;
  if ( v7 <= 1 )
  {
    if ( v9 != 92 )
    {
      *(_BYTE *)(a1 + 8) = 1;
      v15 = v5;
      *(_BYTE *)(a1 + 10) = (((v9 == 95) | ((*__ctype_b_loc())[v9] >> 3) & 1) << 6) | v10;
      v14 = v15;
LABEL_7:
      switch ( v9 )
      {
        case 0x28u:
          result = 1LL;
          if ( v4 & 0x2000 )
            goto LABEL_23;
          break;
        case 0x29u:
          result = 1LL;
          if ( v4 & 0x2000 )
            goto LABEL_25;
          break;
        case 0x2Au:
          *(_BYTE *)(a1 + 8) = 11;
          result = 1LL;
          break;
        case 0x2Bu:
          result = 1LL;
          if ( !(v4 & 0x402) )
            goto LABEL_28;
          break;
        case 0x2Eu:
          *(_BYTE *)(a1 + 8) = 5;
          result = 1LL;
          break;
        case 0x3Fu:
          result = 1LL;
          if ( !(v4 & 0x402) )
            goto LABEL_31;
          break;
        case 0x5Bu:
          *(_BYTE *)(a1 + 8) = 20;
          result = 1LL;
          break;
        case 0x5Eu:
          if ( !(v4 & 0x800008) && v3 && (*(_BYTE *)(v14 + v3 - 1) != 10 || !(v4 & 0x800)) )
            goto LABEL_39;
          *(_BYTE *)(a1 + 8) = 12;
          result = 1LL;
          *(_DWORD *)a1 = 16;
          break;
        case 0x7Bu:
          result = 1LL;
          if ( (v4 & 0x1200) == 4608 )
            goto LABEL_37;
          break;
        case 0x7Cu:
          if ( (v4 & 0x8400) == 0x8000 )
            goto LABEL_41;
          goto LABEL_39;
        default:
LABEL_39:
          result = 1LL;
          break;
        case 0xAu:
          result = 1LL;
          if ( v4 & 0x800 )
          {
LABEL_41:
            *(_BYTE *)(a1 + 8) = 10;
            result = 1LL;
          }
          break;
        case 0x24u:
          if ( v4 & 8
            || (v20 = v3 + 1, v20 == *(_QWORD *)(a2 + 88))
            || (*(_QWORD *)(a2 + 72) = v20,
                sub_4110C0(&v28, a2, v4),
                v21 = v29,
                --*(_QWORD *)(a2 + 72),
                v22 = v21 - 9,
                result = 1LL,
                v22 <= 1u) )
          {
            *(_BYTE *)(a1 + 8) = 12;
            result = 1LL;
            *(_DWORD *)a1 = 32;
          }
          break;
        case 0x7Du:
          result = 1LL;
          if ( (v4 & 0x1200) == 4608 )
            goto LABEL_47;
          break;
      }
      return result;
    }
  }
  else
  {
    if ( v3 != *(_QWORD *)(a2 + 48) && *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v3) == -1 )
    {
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 8) & 0xFFDFFF00 | 0x200001;
      return 1LL;
    }
    if ( v9 != 92 )
    {
      v11 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a1 + 8) = 1;
      v12 = v5;
      v13 = *(_DWORD *)(v11 + 4 * v3);
      *(_BYTE *)(a1 + 10) = (((v13 == 95) | (iswalnum(*(_DWORD *)(v11 + 4 * v3)) != 0)) << 6) | *(_BYTE *)(a1 + 10) & 0xBF;
      v14 = v12;
      goto LABEL_7;
    }
  }
  v16 = v3 + 1;
  if ( v3 + 1 >= *(_QWORD *)(a2 + 88) )
  {
    *(_BYTE *)(a1 + 8) = 36;
    return 1LL;
  }
  if ( !*(_BYTE *)(a2 + 139) )
    goto LABEL_15;
  if ( v7 > 1 )
  {
    v23 = *(_QWORD *)(a2 + 16);
    v19 = *(_DWORD *)(v23 + 4 * v16);
    if ( v19 == -1 || *(_QWORD *)(a2 + 48) != v3 + 2 && *(_DWORD *)(v23 + 4 * v16 + 4) == -1 )
    {
      v26 = *(_BYTE *)(v5 + v3 + 1);
      *(_BYTE *)(v8 + 8) = 1;
      v18 = v26;
      *(_BYTE *)v8 = v26;
      v27 = v26;
      goto LABEL_18;
    }
  }
  v24 = *(_QWORD *)a2;
  v25 = *(_QWORD *)(v6 + 40);
  if ( *(_BYTE *)(v6 + 140) )
  {
    v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8 * v16) + v25 + v24);
    v27 = v18;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8 * v16) + v25 + v24) & 0x80 )
    {
LABEL_15:
      v27 = *(_BYTE *)(v5 + v3 + 1);
      v18 = *(_BYTE *)(v5 + v3 + 1);
      goto LABEL_16;
    }
  }
  else
  {
    v18 = *(_BYTE *)(v16 + v24 + v25);
    v27 = *(_BYTE *)(v16 + v24 + v25);
  }
LABEL_16:
  *(_BYTE *)v8 = v18;
  *(_BYTE *)(v8 + 8) = 1;
  if ( v7 > 1 )
  {
    v19 = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 4 * v16);
LABEL_18:
    *(_BYTE *)(v8 + 10) = (((v19 == 95) | (iswalnum(v19) != 0)) << 6) | *(_BYTE *)(v8 + 10) & 0xBF;
    goto LABEL_19;
  }
  *(_BYTE *)(v8 + 10) = *(_BYTE *)(v8 + 10) & 0xBF | (((v18 == 95) | ((*__ctype_b_loc())[v18] >> 3) & 1) << 6);
LABEL_19:
  switch ( v18 )
  {
    case 0x7Du:
      result = 2LL;
      if ( (v4 & 0x1200) == 512 )
LABEL_47:
        *(_BYTE *)(v8 + 8) = 24;
      break;
    case 0x7Cu:
      result = 2LL;
      if ( !(v4 & 0x8400) )
        *(_BYTE *)(v8 + 8) = 10;
      break;
    case 0x7Bu:
      result = 2LL;
      if ( (v4 & 0x1200) == 512 )
LABEL_37:
        *(_BYTE *)(v8 + 8) = 23;
      break;
    case 0x77u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
        *(_BYTE *)(v8 + 8) = 32;
      break;
    case 0x73u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
        *(_BYTE *)(v8 + 8) = 34;
      break;
    case 0x62u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        *(_BYTE *)(v8 + 8) = 12;
        *(_DWORD *)v8 = 256;
      }
      break;
    case 0x60u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        *(_BYTE *)(v8 + 8) = 12;
        *(_DWORD *)v8 = 64;
      }
      break;
    case 0x57u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
        *(_BYTE *)(v8 + 8) = 33;
      break;
    case 0x53u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
        *(_BYTE *)(v8 + 8) = 35;
      break;
    case 0x42u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        *(_BYTE *)(v8 + 8) = 12;
        *(_DWORD *)v8 = 512;
      }
      break;
    case 0x3Fu:
      result = 2LL;
      if ( (v4 & 0x402) == 2 )
LABEL_31:
        *(_BYTE *)(v8 + 8) = 19;
      break;
    case 0x3Eu:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        *(_BYTE *)(v8 + 8) = 12;
        *(_DWORD *)v8 = 9;
      }
      break;
    case 0x3Cu:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        *(_BYTE *)(v8 + 8) = 12;
        *(_DWORD *)v8 = 6;
      }
      break;
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x38u:
    case 0x39u:
      result = 2LL;
      if ( !(v4 & 0x4000) )
      {
        *(_BYTE *)(v8 + 8) = 4;
        *(_QWORD *)v8 = v27 - 49;
      }
      break;
    case 0x2Bu:
      result = 2LL;
      if ( (v4 & 0x402) == 2 )
LABEL_28:
        *(_BYTE *)(v8 + 8) = 18;
      break;
    case 0x29u:
      result = 2LL;
      if ( !(v4 & 0x2000) )
LABEL_25:
        *(_BYTE *)(v8 + 8) = 9;
      break;
    case 0x28u:
      result = 2LL;
      if ( !(v4 & 0x2000) )
LABEL_23:
        *(_BYTE *)(v8 + 8) = 8;
      break;
    case 0x27u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        *(_BYTE *)(v8 + 8) = 12;
        *(_DWORD *)v8 = 128;
      }
      break;
    default:
      result = 2LL;
      break;
  }
  return result;
}

signed __int64 __fastcall sub_411770(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1
  signed __int64 v4; // rbx@1
  int v5; // eax@2
  __int64 v6; // rdx@2
  char v7; // al@2
  signed __int64 v8; // rbx@10

  v3 = a3;
  v4 = -1LL;
  while ( 1 )
  {
    v5 = sub_4110C0(a2, a1, v3);
    v6 = *(_BYTE *)a2;
    *(_QWORD *)(a1 + 72) += v5;
    v7 = *(_BYTE *)(a2 + 8);
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

char *__fastcall sub_411830(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  char v6; // al@1
  const __m128i *v7; // r12@1
  __int64 v8; // r15@1
  int v9; // eax@7
  unsigned __int64 v10; // rbp@7
  char *result; // rax@9
  unsigned __int64 v12; // rbx@10
  char **v13; // rax@10
  signed __int64 v14; // rax@17
  signed __int64 v15; // rbx@17
  __int64 v16; // r13@18
  __m128i v17; // xmm0@18
  __int64 v18; // rbp@22
  char v19; // al@24
  char **v20; // r13@25
  signed int *v21; // r14@25
  char *v22; // rax@25
  char **v23; // rdx@25
  signed __int64 v24; // rbx@26
  char *v25; // r12@27
  char **v26; // rbp@27
  char *v27; // rax@28
  char *v28; // rax@30
  char *v29; // rax@34
  char **v30; // r14@46
  signed __int64 v31; // rbp@46
  char *v32; // r15@46
  char *v33; // rax@49
  char *v34; // rax@49
  signed __int64 v35; // rax@59
  __m128i v36; // xmm0@59
  char v37; // al@61
  signed __int64 v38; // rax@70
  char *v39; // r14@88
  char *v40; // rax@92
  __int64 v41; // rdx@92
  bool v42; // zf@93
  void *v43; // r13@95
  int v44; // ebx@96
  char v45; // al@96
  char v46; // r9@100
  int v47; // eax@101
  int v48; // eax@102
  char v49; // dl@103
  _DWORD *v50; // rbx@106
  __int64 v51; // rsi@106
  char *v52; // rcx@106
  const char *v53; // rdx@106
  _DWORD *v54; // r9@106
  bool v55; // r8@106
  char *v56; // rax@107
  char **v57; // rbx@112
  signed int *v58; // rbp@112
  char *v59; // r14@113
  __int64 v60; // rax@114
  char *v61; // r13@117
  __int64 v62; // rax@119
  __int64 v63; // rbx@120
  int v64; // er14@125
  char v65; // al@126
  char v66; // al@127
  char **v67; // r13@130
  signed int *v68; // rbp@130
  char *v69; // rax@132
  char **v70; // rbx@132
  char *v71; // r14@133
  char *v72; // rcx@133
  char *v73; // rax@140
  int v74; // eax@142
  char v75; // al@143
  __int64 v76; // rdx@146
  _DWORD *v77; // rax@146
  int v78; // eax@149
  int v79; // eax@152
  __int64 v80; // ST10_8@161
  int v81; // eax@161
  _DWORD *v82; // r9@161
  __int64 v83; // rax@161
  char *v84; // rax@164
  int v85; // eax@165
  char v86; // r10@165
  int v87; // eax@168
  __int64 v88; // rdx@168
  int v89; // esi@171
  unsigned __int8 v90; // di@175
  int v91; // ecx@177
  const char *v92; // r9@178
  unsigned int v93; // er8@181
  unsigned int v94; // er9@183
  __int64 v95; // rax@189
  _DWORD *v96; // rcx@189
  __int64 v97; // rcx@190
  signed __int64 v98; // rax@191
  size_t v99; // rsi@203
  char *v100; // rax@206
  signed int v101; // edx@208
  __int64 v102; // rcx@209
  __int64 v103; // rax@209
  __int64 v104; // rax@220
  char **v105; // rbp@220
  signed int *v106; // rbx@220
  char *v107; // rax@220
  char *v108; // rsi@220
  char *v109; // rax@220
  char *v110; // rax@224
  wint_t v111; // eax@229
  signed int v112; // ebx@230
  signed int v113; // ebp@230
  const unsigned __int16 **v114; // rax@231
  signed __int64 v115; // rsi@231
  int v116; // er9@231
  signed __int64 v117; // rdi@231
  __int64 v118; // rax@232
  wint_t v119; // eax@240
  void *v120; // rdi@250
  void *v121; // rax@250
  void *v122; // ST28_8@254
  __int64 v123; // [sp+0h] [bp-118h]@10
  signed __int64 v124; // [sp+0h] [bp-118h]@23
  void *v125; // [sp+0h] [bp-118h]@95
  __int64 v126; // [sp+8h] [bp-110h]@1
  __int64 v127; // [sp+10h] [bp-108h]@1
  char *v128; // [sp+18h] [bp-100h]@6
  signed __int64 v129; // [sp+18h] [bp-100h]@100
  __m128i v130; // [sp+20h] [bp-F8h]@23
  _DWORD *v131; // [sp+30h] [bp-E8h]@1
  const __m128i *v132; // [sp+38h] [bp-E0h]@27
  __int64 v133; // [sp+40h] [bp-D8h]@172
  void *ptr; // [sp+48h] [bp-D0h]@229
  size_t size; // [sp+50h] [bp-C8h]@250
  unsigned int v136; // [sp+58h] [bp-C0h]@250
  unsigned int v137; // [sp+5Ch] [bp-BCh]@250
  __int64 v138; // [sp+68h] [bp-B0h]@95
  int v139; // [sp+70h] [bp-A8h]@101
  const char *v140; // [sp+78h] [bp-A0h]@101
  int v141; // [sp+80h] [bp-98h]@167
  const char *v142; // [sp+88h] [bp-90h]@167
  char v143; // [sp+90h] [bp-88h]@165
  char v144; // [sp+98h] [bp-80h]@165
  void *v145; // [sp+A0h] [bp-78h]@101
  char v146; // [sp+A8h] [bp-70h]@218
  char v147; // [sp+C0h] [bp-58h]@25
  char v148; // [sp+C8h] [bp-50h]@25

  v127 = *(_QWORD *)a2;
  v6 = a3->m128i_i64[1];
  v7 = a3;
  v131 = a6;
  v126 = a4;
  v8 = a1;
  switch ( v6 )
  {
    case 23:
      if ( a4 & 0x1000000 )
        goto LABEL_43;
      goto LABEL_3;
    case 11:
    case 18:
    case 19:
LABEL_3:
      if ( a4 & 0x20 )
        goto LABEL_43;
      if ( a4 & 0x10 )
      {
        v80 = a5;
        v81 = sub_4110C0((__int64)a3, a1, a4);
        v82 = v131;
        *(_QWORD *)(a1 + 72) += v81;
        LODWORD(v83) = sub_411830(a1, a2, v7, v126, v80, v82);
        return (char *)v83;
      }
      if ( v6 == 9 )
      {
LABEL_136:
        if ( !(a4 & 0x20000) )
        {
          v128 = 0LL;
          *v131 = 16;
          return v128;
        }
      }
LABEL_6:
      LOBYTE(a3->m128i_i64[1]) = 1;
      v128 = sub_409270((char **)(v127 + 112), (signed int *)(v127 + 128), 0LL, 0LL, a3);
      if ( !v128 )
        goto LABEL_118;
      goto LABEL_7;
    case 24:
      goto LABEL_6;
    case 8:
      v12 = *(_QWORD *)(a2 + 48);
      v123 = a5;
      *(_QWORD *)(a2 + 48) = v12 + 1;
      *(_QWORD *)(a1 + 72) += (signed int)sub_4110C0((__int64)a3, a1, a4 | 0x800000);
      v13 = 0LL;
      if ( LOBYTE(v7->m128i_i64[1]) == 9 )
        goto LABEL_138;
      LODWORD(v13) = sub_412E60(a1, a2, v7, v126, v123 + 1, v131);
      if ( *v131 )
        return 0LL;
      if ( LOBYTE(v7->m128i_i64[1]) != 9 )
      {
        if ( v13 )
          sub_406AA0((__int64)v13, (int (__fastcall *)(__int64, __int64))sub_407CB0, 0LL);
        *v131 = 8;
        return 0LL;
      }
LABEL_138:
      if ( v12 <= 8 )
        *(_QWORD *)(v127 + 168) |= 1 << v12;
      v148 = 17;
      v73 = sub_409270((char **)(v127 + 112), (signed int *)(v127 + 128), v13, 0LL, (const __m128i *)&v147);
      v128 = v73;
      if ( v73 )
      {
        *((_QWORD *)v73 + 5) = v12;
        goto LABEL_7;
      }
      goto LABEL_118;
    default:
      return 0LL;
    case 20:
      v138 = 0LL;
      v125 = calloc(0x20uLL, 1uLL);
      v43 = calloc(0x50uLL, 1uLL);
      if ( v43 == 0LL || v125 == 0LL )
      {
        free(v125);
        free(v43);
        goto LABEL_118;
      }
      v44 = sub_406B10((__int64)v7, a1, v126);
      v45 = v7->m128i_i64[1];
      if ( v45 == 2 )
        goto LABEL_197;
      LOBYTE(v132) = 0;
      if ( v45 != 25 )
        goto LABEL_98;
      *((_BYTE *)v43 + 32) |= 1u;
      if ( v126 & 0x100 )
        *(_QWORD *)v125 |= 0x400uLL;
      *(_QWORD *)(a1 + 72) += v44;
      v44 = sub_406B10((__int64)v7, a1, v126);
      v45 = v7->m128i_i64[1];
      if ( v45 == 2 )
      {
LABEL_197:
        *v131 = 2;
        goto LABEL_150;
      }
      LOBYTE(v132) = 1;
LABEL_98:
      if ( v45 == 21 )
        LOBYTE(v7->m128i_i64[1]) = 1;
      v130.m128i_i64[0] = 0LL;
      v46 = 1;
      v129 = 0LL;
      while ( 2 )
      {
        v140 = (const char *)&v145;
        v139 = 3;
        v47 = sub_410EA0((__int64)&v139, v8, (__int64)v7, v44, v126, v46 & 1);
        if ( v47 )
        {
LABEL_162:
          *v131 = v47;
          goto LABEL_150;
        }
        v44 = sub_406B10((__int64)v7, v8, v126);
        v48 = v139;
        if ( !((v139 - 2) & 0xFFFFFFFD) )
          goto LABEL_105;
        v49 = v7->m128i_i64[1];
        if ( v49 == 2 )
          goto LABEL_160;
        if ( v49 != 22 )
          goto LABEL_105;
        *(_QWORD *)(v8 + 72) += v44;
        v85 = sub_406B10((__int64)&v143, v8, v126);
        if ( v144 == 2 )
        {
LABEL_160:
          *v131 = 7;
LABEL_150:
          free(v125);
          sub_407C60((__int64)v43);
          if ( *v131 )
            return 0LL;
          v128 = 0LL;
          goto LABEL_7;
        }
        if ( v144 == 21 )
        {
          *(_QWORD *)(v8 + 72) += -v44;
          v48 = v139;
          LOBYTE(v7->m128i_i64[1]) = 1;
LABEL_105:
          switch ( v48 )
          {
            case 2:
              v74 = sub_40BE40((__int64)v125, v140);
              *v131 = v74;
              if ( !v74 )
                goto LABEL_143;
              goto LABEL_150;
            case 1:
              v76 = *((_QWORD *)v43 + 5);
              v77 = *(_DWORD **)v43;
              if ( v76 != v129 )
                goto LABEL_147;
              v99 = 4 * (2 * v129 + 1);
              v129 = 2 * v129 + 1;
              v77 = realloc(*(void **)v43, v99);
              if ( !v77 )
                goto LABEL_219;
              *(_QWORD *)v43 = v77;
              v76 = *((_QWORD *)v43 + 5);
LABEL_147:
              *((_QWORD *)v43 + 5) = v76 + 1;
              v77[v76] = (_DWORD)v140;
              goto LABEL_143;
            case 0:
              *(_QWORD *)((char *)v125 + (((unsigned __int64)(unsigned __int8)v140 >> 3) & 0x18)) |= 1LL << (char)v140;
              goto LABEL_143;
            case 4:
              v78 = sub_40BE90(
                      *(_QWORD *)(v8 + 120),
                      (__int64)v125,
                      (void **)v43 + 3,
                      (__int64 *)v43 + 9,
                      &v138,
                      v140,
                      v126);
              *v131 = v78;
              if ( v78 )
                goto LABEL_150;
              goto LABEL_143;
            case 3:
              v79 = sub_40BE40((__int64)v125, v140);
              *v131 = v79;
              if ( v79 )
                goto LABEL_150;
              break;
            default:
              __assert_fail("0", "lib/regcomp.c", 0xCF3u, "parse_bracket_exp");
              return result;
          }
          goto LABEL_143;
        }
        v141 = 3;
        v142 = &v147;
        v47 = sub_410EA0((__int64)&v141, v8, (__int64)&v143, v85, v86, 1);
        if ( v47 )
          goto LABEL_162;
        v87 = sub_406B10((__int64)v7, v8, v126);
        v88 = 0LL;
        v44 = v87;
        if ( *(_DWORD *)(v127 + 180) >= 2 )
          v88 = (__int64)v43;
        if ( !((v139 - 2) & 0xFFFFFFFD) || (v89 = v141, !((v141 - 2) & 0xFFFFFFFD)) )
        {
LABEL_243:
          *v131 = 11;
          goto LABEL_150;
        }
        LOBYTE(v133) = v139 == 3;
        if ( v139 == 3 )
        {
          if ( strlen(v140) > 1 || v141 == 3 && strlen(v142) > 1 )
            goto LABEL_228;
          v90 = *v140;
        }
        else
        {
          if ( v141 == 3 )
          {
            v92 = v142;
            if ( strlen(v142) > 1 )
              goto LABEL_228;
            v90 = 0;
            if ( v139 )
            {
LABEL_179:
              v91 = *v92;
              goto LABEL_180;
            }
          }
          else if ( v139 )
          {
            v90 = 0;
            v91 = 0;
            if ( v141 )
              goto LABEL_180;
            goto LABEL_242;
          }
          v90 = (unsigned __int8)v140;
        }
        if ( v141 )
        {
          v91 = 0;
          if ( v141 != 3 )
            goto LABEL_180;
          v92 = v142;
          goto LABEL_179;
        }
LABEL_242:
        v91 = (unsigned __int8)v142;
LABEL_180:
        if ( !v139 || (v93 = (unsigned int)v140, (_BYTE)v133) )
        {
          LODWORD(ptr) = v91;
          v133 = v88;
          v119 = sub_407220(v90, v88);
          v89 = v141;
          LOBYTE(v91) = (_BYTE)ptr;
          v93 = v119;
          v88 = v133;
        }
        if ( !v89 || (v94 = (unsigned int)v142, v89 == 3) )
        {
          LODWORD(ptr) = v93;
          v133 = v88;
          v111 = sub_407220(v91, v88);
          v93 = (unsigned int)ptr;
          v88 = v133;
          v94 = v111;
        }
        if ( v93 == -1 || v94 == -1 )
        {
LABEL_228:
          *v131 = 3;
          goto LABEL_150;
        }
        if ( v126 & 0x10000 && v93 > v94 )
          goto LABEL_243;
        if ( v88 )
        {
          v95 = *(_QWORD *)(v88 + 64);
          v96 = *(_DWORD **)(v88 + 8);
          if ( v95 == v130.m128i_i64[0] )
          {
            v120 = *(void **)(v88 + 8);
            v137 = v94;
            v136 = v93;
            v133 = v88;
            v130.m128i_i64[0] = 2 * v130.m128i_i64[0] + 1;
            size = 4 * v130.m128i_i64[0];
            ptr = realloc(v120, 4 * v130.m128i_i64[0]);
            v121 = realloc(*(void **)(v133 + 16), 4 * v130.m128i_i64[0]);
            v96 = ptr;
            if ( !ptr || (v88 = v133, v93 = v136, v94 = v137, !v121) )
            {
              v122 = v121;
              free(ptr);
              free(v122);
              *v131 = 12;
              goto LABEL_150;
            }
            *(_QWORD *)(v133 + 16) = v121;
            v95 = *(_QWORD *)(v88 + 64);
            *(_QWORD *)(v88 + 8) = v96;
          }
          v96[v95] = v93;
          v97 = *(_QWORD *)(v88 + 16);
          *(_QWORD *)(v88 + 64) = v95 + 1;
          *(_DWORD *)(v97 + 4 * v95) = v94;
        }
        v98 = 0LL;
        do
        {
          if ( v93 <= (unsigned int)v98 && v94 >= (unsigned int)v98 )
            *((_QWORD *)v125 + (v98 >> 6)) |= 1LL << v98;
          ++v98;
        }
        while ( v98 != 256 );
        *v131 = 0;
LABEL_143:
        v75 = v7->m128i_i64[1];
        if ( v75 == 2 )
          goto LABEL_160;
        if ( v75 != 21 )
        {
          v46 = 0;
          continue;
        }
        break;
      }
      *(_QWORD *)(v8 + 72) += v44;
      if ( (_BYTE)v132 )
      {
        v100 = (char *)v125;
        do
        {
          *(_QWORD *)v100 = ~*(_QWORD *)v100;
          v100 += 8;
        }
        while ( (char *)v125 + 32 != v100 );
      }
      v101 = *(_DWORD *)(v127 + 180);
      if ( v101 > 1 )
      {
        v102 = *(_QWORD *)(v127 + 120);
        v103 = 0LL;
        do
        {
          *(_QWORD *)((char *)v125 + v103) &= *(_QWORD *)(v102 + v103);
          v103 += 8LL;
        }
        while ( v103 != 32 );
      }
      if ( !*((_QWORD *)v43 + 5)
        && !*((_QWORD *)v43 + 6)
        && !*((_QWORD *)v43 + 7)
        && !*((_QWORD *)v43 + 8)
        && (v101 <= 1 || !*((_QWORD *)v43 + 9) && !(*((_BYTE *)v43 + 32) & 1)) )
      {
        sub_407C60((__int64)v43);
        v146 = 3;
        v145 = v125;
        v128 = sub_409270((char **)(v127 + 112), (signed int *)(v127 + 128), 0LL, 0LL, (const __m128i *)&v145);
        if ( v128 )
          goto LABEL_7;
        goto LABEL_219;
      }
      v104 = v127;
      *(_BYTE *)(v104 + 176) |= 2u;
      v105 = (char **)(v127 + 112);
      v106 = (signed int *)(v127 + 128);
      v146 = 6;
      v145 = v43;
      v107 = sub_409270((char **)(v104 + 112), (signed int *)(v104 + 128), 0LL, 0LL, (const __m128i *)&v145);
      v108 = v107;
      v128 = v107;
      v109 = (char *)v125;
      if ( !v108 )
        goto LABEL_219;
      while ( !*(_QWORD *)v109 )
      {
        v109 += 8;
        if ( (char *)v125 + 32 == v109 )
        {
          free(v125);
          goto LABEL_7;
        }
      }
      v146 = 3;
      v145 = v125;
      v110 = sub_409270(v105, v106, 0LL, 0LL, (const __m128i *)&v145);
      if ( !v110
        || (v148 = 10, (v128 = sub_409270(v105, v106, (char **)v110, (char **)v128, (const __m128i *)&v147)) == 0LL) )
      {
LABEL_219:
        *v131 = 12;
        goto LABEL_150;
      }
LABEL_7:
      v9 = sub_4110C0((__int64)v7, v8, v126);
      v10 = LOBYTE(v7->m128i_i64[1]);
      *(_QWORD *)(v8 + 72) += v9;
      while ( 2 )
      {
        if ( (unsigned __int8)v10 > 0x17u )
          return v128;
        v14 = 9177088LL;
        LOBYTE(v15) = (_BYTE)v10 == 18;
        if ( !_bittest64(&v14, v10) )
          return v128;
        v16 = *(_QWORD *)(v8 + 72);
        v17 = _mm_load_si128(v7);
        if ( (_BYTE)v10 == 23 )
        {
          v130 = v17;
          v35 = sub_411770(v8, (__int64)v7, v126);
          v36 = _mm_load_si128(&v130);
          v124 = v35;
          if ( v35 == -1 )
          {
            if ( LOBYTE(v7->m128i_i64[1]) != 1 || LOBYTE(v7->m128i_i64[0]) != 44 )
              goto LABEL_85;
            v15 = 0LL;
          }
          else
          {
            if ( v35 == -2 )
            {
LABEL_63:
              if ( v126 & 0x200000 )
              {
LABEL_64:
                *(_QWORD *)(v8 + 72) = v16;
                v29 = v128;
                *v7 = v36;
                LOBYTE(v7->m128i_i64[1]) = 1;
                goto LABEL_35;
              }
              if ( LOBYTE(v7->m128i_i64[1]) == 2 )
                *v131 = 9;
              else
LABEL_85:
                *v131 = 10;
LABEL_86:
              if ( v128 )
                goto LABEL_51;
              return 0LL;
            }
            v37 = v7->m128i_i64[1];
            if ( v37 == 24 )
            {
              v15 = v124;
              goto LABEL_81;
            }
            if ( v37 != 1 )
              goto LABEL_63;
            if ( LOBYTE(v7->m128i_i64[0]) != 44 )
            {
              if ( !(v126 & 0x200000) )
                goto LABEL_85;
              goto LABEL_64;
            }
            v15 = v124;
          }
          v130 = v36;
          v38 = sub_411770(v8, (__int64)v7, v126);
          v36 = _mm_load_si128(&v130);
          v124 = v38;
          if ( v38 == -2 )
            goto LABEL_63;
          if ( v38 != -1 && v38 < v15 || LOBYTE(v7->m128i_i64[1]) != 24 )
            goto LABEL_85;
          if ( v38 == -1 )
          {
            if ( v15 > 0x7FFF )
              goto LABEL_82;
            goto LABEL_76;
          }
LABEL_81:
          if ( v124 > 0x7FFF )
          {
LABEL_82:
            *v131 = 15;
            goto LABEL_86;
          }
LABEL_76:
          *(_QWORD *)(v8 + 72) += (signed int)sub_4110C0((__int64)v7, v8, v126);
          if ( !v128 )
            goto LABEL_65;
          if ( !(v15 | v124) )
          {
            sub_406AA0((__int64)v128, (int (__fastcall *)(__int64, __int64))sub_407CB0, 0LL);
            if ( *v131 )
              goto LABEL_51;
            goto LABEL_66;
          }
          if ( v15 <= 0 )
          {
            v18 = (__int64)v128;
            v41 = 0LL;
            goto LABEL_93;
          }
          if ( v15 == 1 )
          {
            v39 = v128;
            v23 = (char **)v128;
LABEL_89:
            if ( v15 == v124 )
            {
LABEL_90:
              v128 = (char *)v23;
              goto LABEL_38;
            }
            goto LABEL_92;
          }
          v30 = (char **)v128;
          v130.m128i_i64[0] = v8;
          v31 = 2LL;
          v132 = v7;
          v32 = v128;
          while ( 1 )
          {
            v33 = sub_409350(v32, v127);
            v32 = v33;
            v148 = 16;
            v34 = sub_409270(
                    (char **)(v127 + 112),
                    (signed int *)(v127 + 128),
                    v30,
                    (char **)v33,
                    (const __m128i *)&v147);
            v30 = (char **)v34;
            if ( !v32 || !v34 )
              break;
            if ( v15 < ++v31 )
            {
              v39 = v32;
              v7 = v132;
              v8 = v130.m128i_i64[0];
              v23 = (char **)v34;
              goto LABEL_89;
            }
          }
LABEL_50:
          *v131 = 12;
LABEL_51:
          sub_406AA0((__int64)v128, (int (__fastcall *)(__int64, __int64))sub_407CB0, 0LL);
          return 0LL;
        }
        v15 = (unsigned __int8)v15;
        if ( (_BYTE)v10 == 19 )
        {
          *(_QWORD *)(v8 + 72) += (signed int)sub_4110C0((__int64)v7, v8, v126);
          if ( v128 )
          {
            v18 = (__int64)v128;
            if ( v128[48] == 17 )
            {
              v18 = (__int64)v128;
              v124 = 1LL;
              v130.m128i_i64[0] = 0LL;
              goto LABEL_56;
            }
            v124 = 1LL;
            v19 = 10;
            v130.m128i_i64[0] = 0LL;
            goto LABEL_25;
          }
          goto LABEL_65;
        }
        *(_QWORD *)(v8 + 72) += (signed int)sub_4110C0((__int64)v7, v8, v126);
        if ( !v128 )
        {
LABEL_65:
          if ( *v131 )
            return 0LL;
LABEL_66:
          v128 = 0LL;
          goto LABEL_38;
        }
        if ( (_BYTE)v10 == 18 )
        {
          v39 = v128;
          v124 = -1LL;
          v15 = 1LL;
          v23 = (char **)v128;
LABEL_92:
          v130.m128i_i64[0] = (__int64)v23;
          v40 = sub_409350(v39, v127);
          v41 = v130.m128i_i64[0];
          v18 = (__int64)v40;
          if ( !v40 )
            goto LABEL_50;
LABEL_93:
          v42 = *(_BYTE *)(v18 + 48) == 17;
          v130.m128i_i64[0] = v41;
          if ( v42 )
            goto LABEL_56;
          goto LABEL_57;
        }
        v18 = (__int64)v128;
        if ( v128[48] != 17 )
        {
          v124 = -1LL;
          v15 = 0LL;
          v130.m128i_i64[0] = 0LL;
          goto LABEL_24;
        }
        v124 = -1LL;
        v18 = (__int64)v128;
        v15 = 0LL;
        v130.m128i_i64[0] = 0LL;
LABEL_56:
        sub_406AA0(v18, (int (__fastcall *)(__int64, __int64))sub_406C40, *(_QWORD *)(v18 + 40));
LABEL_57:
        if ( v124 == -1 )
LABEL_24:
          v19 = 11;
        else
          v19 = 10;
LABEL_25:
        v148 = v19;
        v20 = (char **)(v127 + 112);
        v21 = (signed int *)(v127 + 128);
        v22 = sub_409270((char **)(v127 + 112), (signed int *)(v127 + 128), (char **)v18, 0LL, (const __m128i *)&v147);
        v23 = (char **)v22;
        if ( !v22 )
          goto LABEL_50;
        v24 = v15 + 2;
        if ( v24 <= v124 )
        {
          v132 = v7;
          v25 = (char *)v18;
          v26 = (char **)v22;
          while ( 1 )
          {
            v25 = sub_409350(v25, v127);
            v148 = 16;
            v27 = sub_409270(v20, v21, v26, (char **)v25, (const __m128i *)&v147);
            if ( !v25 )
              goto LABEL_50;
            if ( !v27 )
              goto LABEL_50;
            v148 = 10;
            v28 = sub_409270(v20, v21, (char **)v27, 0LL, (const __m128i *)&v147);
            v26 = (char **)v28;
            if ( !v28 )
              goto LABEL_50;
            if ( ++v24 > v124 )
            {
              v7 = v132;
              v23 = (char **)v28;
              break;
            }
          }
        }
        if ( !v130.m128i_i64[0] )
          goto LABEL_90;
        v148 = 16;
        v29 = sub_409270(v20, v21, (char **)v130.m128i_i64[0], v23, (const __m128i *)&v147);
LABEL_35:
        if ( *v131 && !v29 )
          goto LABEL_86;
        v128 = v29;
LABEL_38:
        v10 = LOBYTE(v7->m128i_i64[1]);
        if ( !(v126 & 0x1000000) || (_BYTE)v10 != 11 && (_BYTE)v10 != 23 )
          continue;
        break;
      }
      if ( v128 )
        sub_406AA0((__int64)v128, (int (__fastcall *)(__int64, __int64))sub_407CB0, 0LL);
LABEL_43:
      v128 = 0LL;
      *v131 = 13;
      return v128;
    case 32:
    case 33:
      v50 = v131;
      v51 = *(_QWORD *)(a1 + 120);
      v52 = "en_" + 2;
      v53 = "alnum";
      v54 = v131;
      v55 = v6 == 33;
      goto LABEL_107;
    case 34:
    case 35:
      v50 = v131;
      v51 = *(_QWORD *)(a1 + 120);
      v52 = locale;
      v53 = "space";
      v54 = v131;
      v55 = v6 == 35;
LABEL_107:
      v56 = sub_40C660(v127, v51, v53, v52, v55, v54);
      v128 = v56;
      if ( *v50 && !v56 )
        return 0LL;
      goto LABEL_7;
    case 36:
      v128 = 0LL;
      *v131 = 5;
      return v128;
    case 1:
      v57 = (char **)(v127 + 112);
      v58 = (signed int *)(v127 + 128);
      v128 = sub_409270((char **)(v127 + 112), (signed int *)(v127 + 128), 0LL, 0LL, a3);
      if ( !v128 )
        goto LABEL_118;
      v59 = v128;
      if ( *(_DWORD *)(v127 + 180) <= 1 )
        goto LABEL_7;
      do
      {
        v60 = *(_QWORD *)(a1 + 72);
        if ( *(_QWORD *)(a1 + 104) <= v60
          || v60 == *(_QWORD *)(a1 + 48)
          || *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v60) != -1 )
        {
          v128 = v59;
          goto LABEL_7;
        }
        *(_QWORD *)(a1 + 72) += (signed int)sub_4110C0((__int64)v7, a1, v126);
        v61 = sub_409270(v57, v58, 0LL, 0LL, v7);
        v148 = 16;
        v59 = sub_409270(v57, v58, (char **)v59, (char **)v61, (const __m128i *)&v147);
      }
      while ( v59 != 0LL && v61 != 0LL );
      goto LABEL_118;
    case 4:
      v62 = 1 << a3->m128i_i64[0];
      if ( !(v62 & *(_QWORD *)(v127 + 168)) )
      {
        v128 = 0LL;
        *v131 = 6;
        return v128;
      }
      v63 = v127;
      *(_QWORD *)(v63 + 160) |= v62;
      v128 = sub_409270((char **)(v63 + 112), (signed int *)(v63 + 128), 0LL, 0LL, a3);
      if ( !v128 )
        goto LABEL_118;
      ++*(_QWORD *)(v127 + 152);
      *(_BYTE *)(v127 + 176) |= 2u;
      goto LABEL_7;
    case 5:
      v128 = sub_409270((char **)(v127 + 112), (signed int *)(v127 + 128), 0LL, 0LL, a3);
      if ( !v128 )
        goto LABEL_118;
      if ( *(_DWORD *)(v127 + 180) > 1 )
        *(_BYTE *)(v127 + 176) |= 2u;
      goto LABEL_7;
    case 12:
      v64 = a3->m128i_i64[0];
      if ( !(a3->m128i_i64[0] & 0x30F) )
        goto LABEL_130;
      v65 = *(_BYTE *)(v127 + 176);
      if ( v65 & 0x10 )
        goto LABEL_130;
      v66 = v65 | 0x10;
      *(_BYTE *)(v127 + 176) = v66;
      if ( v66 & 8 )
      {
        v112 = 0;
        v113 = 0;
      }
      else
      {
        *(_QWORD *)(v127 + 184) = 287948901175001088LL;
        *(_QWORD *)(v127 + 192) = 576460745995190270LL;
        if ( v66 & 4 )
        {
          *(_OWORD *)(v127 + 200) = 0LL;
          v64 = a3->m128i_i64[0];
          goto LABEL_130;
        }
        v112 = 128;
        v113 = 2;
      }
      v114 = __ctype_b_loc();
      v115 = v127 + 8LL * v113;
      v116 = v112 + 256 - (v113 << 6);
      v117 = (signed __int64)&(*v114)[v112];
      do
      {
        v118 = 0LL;
        do
        {
          if ( *(_BYTE *)(v117 + 2 * v118) & 8 || v112 + (_DWORD)v118 == 95 )
            *(_QWORD *)(v115 + 184) |= 1LL << v118;
          ++v118;
        }
        while ( v118 != 64 );
        v112 += 64;
        v115 += 8LL;
        v117 += 128LL;
      }
      while ( v116 != v112 );
LABEL_130:
      v67 = (char **)(v127 + 112);
      v68 = (signed int *)(v127 + 128);
      if ( (v64 - 256) & 0xFFFFFEFF )
      {
        v128 = sub_409270((char **)(v127 + 112), (signed int *)(v127 + 128), 0LL, 0LL, v7);
        if ( v128 )
        {
LABEL_135:
          *(_QWORD *)(v8 + 72) += (signed int)sub_4110C0((__int64)v7, v8, v126);
          return v128;
        }
      }
      else
      {
        if ( v64 == 256 )
        {
          LODWORD(v7->m128i_i64[0]) = 6;
          v84 = sub_409270(v67, v68, 0LL, 0LL, v7);
          LODWORD(v7->m128i_i64[0]) = 9;
          v70 = (char **)v84;
        }
        else
        {
          LODWORD(v7->m128i_i64[0]) = 5;
          v69 = sub_409270(v67, v68, 0LL, 0LL, v7);
          LODWORD(v7->m128i_i64[0]) = 10;
          v70 = (char **)v69;
        }
        v71 = sub_409270(v67, v68, 0LL, 0LL, v7);
        v148 = 10;
        v72 = sub_409270(v67, v68, v70, (char **)v71, (const __m128i *)&v147);
        v128 = v72;
        if ( v71 != 0LL && v70 != 0LL && v72 )
          goto LABEL_135;
      }
LABEL_118:
      *v131 = 12;
      return 0LL;
    case 9:
      goto LABEL_136;
  }
}

char **__fastcall sub_412D20(__int64 a1, __int64 *a2, const __m128i *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // r15@1
  __int64 v7; // r12@1
  const __m128i *v8; // rbp@1
  _DWORD *v9; // rbx@1
  char *v10; // rax@1
  char **v11; // r14@1
  char v12; // al@3
  char *v13; // r9@6
  char *v14; // rax@10
  __int64 v16; // [sp+10h] [bp-58h]@10
  __int64 v17; // [sp+18h] [bp-50h]@1
  char v18; // [sp+20h] [bp-48h]@10
  char v19; // [sp+28h] [bp-40h]@10

  v6 = a4;
  v7 = a5;
  v8 = a3;
  v9 = a6;
  v17 = *a2;
  v10 = sub_411830(a1, (__int64)a2, a3, a4, a5, a6);
  v11 = (char **)v10;
  if ( *v9 && !v10 )
  {
LABEL_18:
    v11 = 0LL;
  }
  else
  {
LABEL_3:
    v12 = v8->m128i_i64[1];
    if ( (v8->m128i_i64[1] & 0xF7) != 2 )
    {
      while ( v12 != 9 || !v7 )
      {
        v13 = sub_411830(a1, (__int64)a2, v8, v6, v7, v9);
        if ( *v9 && !v13 )
        {
          if ( v11 )
            sub_406AA0((__int64)v11, (int (__fastcall *)(__int64, __int64))sub_407CB0, 0LL);
          goto LABEL_18;
        }
        if ( !v11 || !v13 )
        {
          if ( !v11 )
            v11 = (char **)v13;
          goto LABEL_3;
        }
        v16 = (__int64)v13;
        v19 = 16;
        v14 = sub_409270((char **)(v17 + 112), (signed int *)(v17 + 128), v11, (char **)v13, (const __m128i *)&v18);
        if ( !v14 )
        {
          sub_406AA0(v16, (int (__fastcall *)(__int64, __int64))sub_407CB0, 0LL);
          sub_406AA0((__int64)v11, (int (__fastcall *)(__int64, __int64))sub_407CB0, 0LL);
          v11 = 0LL;
          *v9 = 12;
          return v11;
        }
        v11 = (char **)v14;
        v12 = v8->m128i_i64[1];
        if ( (v8->m128i_i64[1] & 0xF7) == 2 )
          return v11;
      }
    }
  }
  return v11;
}

char *__fastcall sub_412E60(__int64 a1, __int64 *a2, const __m128i *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // r14@1
  __int64 v7; // r13@1
  const __m128i *v8; // rbp@1
  __int64 v9; // rbx@1
  char **v10; // rax@1
  char *v11; // r15@1
  char **v13; // rcx@7
  __int64 v14; // [sp+0h] [bp-68h]@1
  __int64 v15; // [sp+8h] [bp-60h]@7
  __int64 v16; // [sp+10h] [bp-58h]@1
  char v17; // [sp+20h] [bp-48h]@10
  char v18; // [sp+28h] [bp-40h]@10

  v6 = a6;
  v7 = a4;
  v8 = a3;
  v9 = *a2;
  v14 = a5;
  v16 = *(_QWORD *)(*a2 + 168);
  v10 = sub_412D20(a1, a2, a3, a4, a5, a6);
  v11 = (char *)v10;
  if ( !*v6 || v10 )
  {
    while ( LOBYTE(v8->m128i_i64[1]) == 10 )
    {
      *(_QWORD *)(a1 + 72) += (signed int)sub_4110C0((__int64)v8, a1, v7 | 0x800000);
      if ( (v8->m128i_i64[1] & 0xF7) == 2 || LOBYTE(v8->m128i_i64[1]) == 9 && v14 )
      {
        v13 = 0LL;
      }
      else
      {
        v15 = *(_QWORD *)(v9 + 168);
        *(_QWORD *)(v9 + 168) = v16;
        v13 = sub_412D20(a1, a2, v8, v7, v14, v6);
        if ( *v6 && !v13 )
        {
          if ( v11 )
            sub_406AA0((__int64)v11, (int (__fastcall *)(__int64, __int64))sub_407CB0, 0LL);
          goto LABEL_3;
        }
        *(_QWORD *)(v9 + 168) |= v15;
      }
      v18 = 10;
      v11 = sub_409270((char **)(v9 + 112), (signed int *)(v9 + 128), (char **)v11, v13, (const __m128i *)&v17);
      if ( !v11 )
      {
        *v6 = 12;
        return v11;
      }
    }
  }
  else
  {
LABEL_3:
    v11 = 0LL;
  }
  return v11;
}

signed __int64 __fastcall sub_412FC0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r14@1
  __int64 v5; // r13@1
  unsigned __int64 v6; // r12@1
  __int64 v7; // rbp@1
  __int64 v8; // rbx@1
  size_t v9; // rsi@4
  signed __int64 v10; // r15@6
  void *v11; // rax@7
  char *v12; // rax@7
  bool v13; // cf@10
  bool v14; // zf@10
  const char *v15; // rdi@10
  signed __int64 v16; // rcx@10
  char *v17; // rsi@10
  char v18; // al@15
  bool v19; // sf@15
  unsigned __int8 v20; // of@15
  __int64 v21; // rdx@20
  signed int v22; // edi@20
  __int64 v23; // rdx@20
  unsigned __int8 v24; // al@20
  char v25; // si@20
  __int64 v26; // r15@20
  signed int v27; // eax@25
  __int64 v28; // rcx@31
  __int64 v29; // rax@32
  __int64 v30; // r12@39
  int v31; // eax@39
  char *v32; // rax@39
  char **v33; // r15@40
  size_t v34; // ST08_8@40
  signed int *v35; // r13@40
  const __m128i *v36; // r12@40
  char *v37; // rax@40
  char **v38; // r9@40
  char **v39; // r14@40
  void *v40; // rdx@40
  char *v41; // rax@41
  __int64 v42; // r15@42
  size_t v43; // r13@43
  signed __int64 v44; // ST08_8@43
  void *v45; // rax@43
  void *v46; // r14@43
  void *v47; // rax@43
  void *v48; // rax@43
  void *v49; // rax@43
  __int64 v50; // r13@47
  _QWORD *v51; // rax@47
  __int64 v52; // rdx@48
  __int64 v53; // rdx@50
  _QWORD *v54; // rdi@51
  __int64 v55; // rax@51
  char v56; // r13@59
  __int64 v57; // r14@59
  char *v58; // rax@74
  unsigned __int64 v59; // rdx@75
  signed __int64 v60; // rcx@78
  signed __int64 v61; // rax@78
  unsigned __int64 v62; // rax@78
  __int64 v63; // rax@80
  __int64 v64; // r14@81
  signed __int64 v65; // rsi@81
  size_t v66; // rcx@81
  unsigned __int8 v67; // al@88
  char v68; // al@88
  __int64 v69; // rax@89
  unsigned int v70; // er13@89
  __int64 v71; // r10@91
  signed __int64 v72; // r9@92
  signed __int64 v73; // rcx@94
  __int64 v74; // rdx@95
  signed __int64 v75; // rax@97
  __int64 v76; // r11@99
  unsigned int v77; // eax@100
  __int64 v78; // rax@102
  __int64 v79; // r12@106
  void *v80; // rdi@106
  void *v81; // r13@107
  void *v82; // rdi@108
  signed __int64 result; // rax@108
  void *v84; // rdi@111
  void *v85; // r12@112
  void *v86; // rdi@113
  void *v87; // rax@116
  __int64 v88; // r15@117
  int v89; // edx@118
  int v90; // ecx@118
  wint_t v91; // eax@122
  unsigned int v92; // edi@122
  __int64 v93; // rdi@130
  __int64 v94; // r8@131
  char v95; // r9@131
  __int64 v96; // rcx@131
  __int64 v97; // rdx@131
  __int64 v98; // rax@133
  void *v99; // rax@138
  size_t v100; // ST08_8@144
  char *v101; // rax@144
  signed __int64 v102; // rax@150
  char v103; // dl@154
  unsigned int v104; // esi@160
  char v105; // dl@176
  __int64 v106; // [sp+0h] [bp-138h]@20
  int v107; // [sp+0h] [bp-138h]@122
  size_t size; // [sp+8h] [bp-130h]@43
  size_t sizea; // [sp+8h] [bp-130h]@65
  size_t sizeb; // [sp+8h] [bp-130h]@84
  int sizec; // [sp+8h] [bp-130h]@122
  void *v112; // [sp+10h] [bp-128h]@43
  __int64 v113; // [sp+10h] [bp-128h]@80
  unsigned int v114; // [sp+2Ch] [bp-10Ch]@1
  const __m128i v115; // [sp+30h] [bp-108h]@39
  char v116; // [sp+40h] [bp-F8h]@40
  __int64 v117; // [sp+48h] [bp-F0h]@40
  void *ptr; // [sp+50h] [bp-E8h]@67
  __int64 v119; // [sp+60h] [bp-D8h]@20
  __int64 v120; // [sp+68h] [bp-D0h]@20
  __int64 v121; // [sp+88h] [bp-B0h]@37
  __int64 v122; // [sp+90h] [bp-A8h]@27
  __int64 v123; // [sp+98h] [bp-A0h]@26
  __int64 v124; // [sp+A0h] [bp-98h]@27
  __int64 v125; // [sp+A8h] [bp-90h]@39
  unsigned __int64 v126; // [sp+B0h] [bp-88h]@20
  __int64 v127; // [sp+B8h] [bp-80h]@20
  unsigned __int64 v128; // [sp+C0h] [bp-78h]@20
  unsigned __int64 v129; // [sp+C8h] [bp-70h]@20
  __int64 v130; // [sp+D8h] [bp-60h]@20
  bool v131; // [sp+E8h] [bp-50h]@20
  char v132; // [sp+E9h] [bp-4Fh]@20
  char v133; // [sp+EAh] [bp-4Eh]@20
  bool v134; // [sp+EBh] [bp-4Dh]@20
  int v135; // [sp+F0h] [bp-48h]@20

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  *(_BYTE *)(a1 + 56) &= 0x90u;
  v13 = *(_QWORD *)(a1 + 8) < 0xE7uLL;
  v14 = *(_QWORD *)(a1 + 8) == 231LL;
  v114 = 0;
  v8 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v13 || v14 )
  {
    v99 = realloc((void *)v8, 0xE8uLL);
    v8 = (__int64)v99;
    if ( !v99 )
      return 12LL;
    *(_QWORD *)(a1 + 8) = 232LL;
    *(_QWORD *)a1 = v99;
  }
  *(_QWORD *)(a1 + 16) = 232LL;
  *(_QWORD *)v8 = 0LL;
  *(_QWORD *)(v8 + 224) = 0LL;
  memset(
    (void *)((v8 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v8 - (((_DWORD)v8 + 8) & 0xFFFFFFF8) + 232) >> 3));
  *(_DWORD *)(v8 + 128) = 15;
  if ( v6 > 0x555555555555554LL )
    goto LABEL_115;
  *(_QWORD *)(v8 + 8) = v6 + 1;
  *(_QWORD *)v8 = malloc(16 * (v6 + 1));
  if ( v6 )
  {
    v9 = 1LL;
    do
      v9 *= 2LL;
    while ( v6 >= v9 );
    v10 = v9 - 1;
  }
  else
  {
    v10 = 0LL;
    v9 = 1LL;
  }
  v11 = calloc(0x18uLL, v9);
  *(_QWORD *)(v8 + 136) = v10;
  *(_QWORD *)(v8 + 64) = v11;
  *(_DWORD *)(v8 + 180) = __ctype_get_mb_cur_max();
  v12 = nl_langinfo(14);
  if ( (*v12 & 0xDF) == 85 && (v12[1] & 0xDF) == 84 && (v12[2] & 0xDF) == 70 )
  {
    v13 = (unsigned __int8)v12[3] < 0x2Du;
    v14 = v12[3] == 45;
    v15 = "8";
    v16 = 2LL;
    v17 = &v12[v14 + 3];
    do
    {
      if ( !v16 )
        break;
      v13 = (unsigned __int8)*v17 < *v15;
      v14 = *v17++ == *v15++;
      --v16;
    }
    while ( v14 );
    if ( (!v13 && !v14) == v13 )
      *(_BYTE *)(v8 + 176) |= 4u;
  }
  v18 = *(_BYTE *)(v8 + 176);
  v20 = __OFSUB__(*(_DWORD *)(v8 + 180), 1);
  v14 = *(_DWORD *)(v8 + 180) == 1;
  v19 = *(_DWORD *)(v8 + 180) - 1 < 0;
  *(_BYTE *)(v8 + 176) &= 0xF7u;
  if ( !((unsigned __int8)(v19 ^ v20) | v14) )
  {
    if ( v18 & 4 )
    {
      *(_QWORD *)(v8 + 120) = &unk_417BA0;
      goto LABEL_18;
    }
    v87 = calloc(0x20uLL, 1uLL);
    *(_QWORD *)(v8 + 120) = v87;
    if ( !v87 )
    {
LABEL_115:
      v114 = 12;
LABEL_114:
      sub_40BBE0((void **)v8);
      *(_QWORD *)v7 = 0LL;
      result = v114;
      *(_QWORD *)(v7 + 8) = 0LL;
      return result;
    }
    v88 = 0LL;
LABEL_118:
    v89 = 8 * v88;
    v90 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        sizec = v90;
        v107 = v89;
        v91 = btowc(v89);
        v92 = v107 & 0xFFFFFF80;
        if ( v91 != -1 )
          break;
        if ( !v92 )
          goto LABEL_120;
LABEL_121:
        v90 = sizec + 1;
        v89 = v107 + 1;
        if ( sizec == 63 )
          goto LABEL_126;
      }
      *(_QWORD *)(v88 + *(_QWORD *)(v8 + 120)) |= 1LL << sizec;
      if ( v92 )
        goto LABEL_121;
      if ( v91 != v107 )
      {
LABEL_120:
        *(_BYTE *)(v8 + 176) |= 8u;
        goto LABEL_121;
      }
      v90 = sizec + 1;
      v89 = v107 + 1;
      if ( sizec == 63 )
      {
LABEL_126:
        v88 += 8LL;
        if ( v88 == 32 )
          break;
        goto LABEL_118;
      }
    }
  }
LABEL_18:
  if ( !*(_QWORD *)v8 || !*(_QWORD *)(v8 + 64) )
    goto LABEL_115;
  v21 = *(_QWORD *)(v7 + 40);
  v114 = 0;
  memset(&v120, 0, 0x90uLL);
  v130 = v21;
  v22 = *(_DWORD *)(v8 + 180);
  v119 = v4;
  v106 = v5 & 0x400000;
  v131 = (v5 & 0x400000) != 0;
  v23 = v106 | v21;
  v24 = *(_BYTE *)(v8 + 176);
  v25 = v23 != 0;
  v127 = v6;
  v26 = v23;
  v126 = v6;
  v134 = v23 != 0;
  v135 = v22;
  v132 = (v24 >> 2) & 1;
  v133 = (v24 >> 3) & 1;
  v129 = v6;
  v128 = v6;
  if ( v6 )
  {
    v27 = sub_406EE0((__int64)&v119, v6 + 1);
    if ( v27 )
    {
LABEL_86:
      v114 = v27;
      v42 = *(_QWORD *)v7;
LABEL_111:
      v84 = *(void **)(v42 + 112);
      if ( v84 )
      {
        do
        {
          v85 = *(void **)v84;
          free(v84);
          v84 = v85;
        }
        while ( v85 );
      }
      *(_QWORD *)(v42 + 112) = 0LL;
      v86 = *(void **)(v42 + 32);
      *(_DWORD *)(v42 + 128) = 15;
      *(_QWORD *)(v42 + 104) = 0LL;
      free(v86);
      *(_QWORD *)(v42 + 32) = 0LL;
      sub_408230((__int64)&v119);
      goto LABEL_114;
    }
    v25 = v134;
    v22 = *(_DWORD *)(v8 + 180);
  }
  if ( v25 )
    v4 = v120;
  v120 = v4;
  if ( v5 & 0x400000 )
  {
    if ( v22 <= 1 )
    {
      sub_407250((__int64)&v119);
      v114 = 0;
    }
    else
    {
      while ( 1 )
      {
        v27 = sub_407480((__int64)&v119);
        if ( v27 )
          goto LABEL_86;
        if ( (signed __int64)v6 <= v123 || v124 > v122 + *(_DWORD *)(v8 + 180) )
          break;
        v27 = sub_406EE0((__int64)&v119, 2 * v124);
        if ( v27 )
          goto LABEL_86;
      }
      v114 = 0;
    }
  }
  else if ( v22 > 1 )
  {
    sub_4072D0((__int64)&v119);
    v114 = 0;
  }
  else
  {
    v28 = v124;
    if ( v26 )
    {
      v29 = v122;
      if ( v127 <= v124 )
        v28 = v127;
      if ( v28 > v122 )
      {
        while ( 1 )
        {
          *(_BYTE *)(v4 + v29) = *(_BYTE *)(v130 + *(_BYTE *)(v121 + v29 + v119));
          if ( v28 == ++v29 )
            break;
          v4 = v120;
        }
      }
      else
      {
        v28 = v122;
      }
    }
    v122 = v28;
    v123 = v28;
    v114 = 0;
  }
  v30 = *(_QWORD *)v7;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v30 + 216) = v5;
  v31 = sub_4110C0((__int64)&v115, (__int64)&v119, v5 | 0x800000);
  v125 += v31;
  v32 = sub_412E60((__int64)&v119, (__int64 *)v7, &v115, v5, 0LL, &v114);
  if ( v114 )
  {
    if ( !v32 )
    {
      *(_QWORD *)(v8 + 104) = 0LL;
      v42 = *(_QWORD *)v7;
      goto LABEL_111;
    }
    v33 = (char **)(v30 + 112);
    v100 = (size_t)v32;
    v35 = (signed int *)(v30 + 128);
    v36 = (const __m128i *)&v116;
    LOBYTE(v117) = 2;
    v101 = sub_409270(v33, v35, 0LL, 0LL, (const __m128i *)&v116);
    v38 = (char **)v100;
    v39 = (char **)v101;
  }
  else
  {
    v33 = (char **)(v30 + 112);
    v34 = (size_t)v32;
    v35 = (signed int *)(v30 + 128);
    v36 = (const __m128i *)&v116;
    LOBYTE(v117) = 2;
    v37 = sub_409270(v33, v35, 0LL, 0LL, (const __m128i *)&v116);
    v38 = (char **)v34;
    v39 = (char **)v37;
    v40 = v37;
    if ( !v34 )
      goto LABEL_42;
  }
  LOBYTE(v117) = 16;
  v41 = sub_409270(v33, v35, v38, v39, v36);
  v40 = v39;
  v39 = (char **)v41;
LABEL_42:
  v42 = *(_QWORD *)v7;
  if ( v39 == 0LL || v40 == 0LL )
  {
    v114 = 12;
    *(_QWORD *)(v8 + 104) = 0LL;
    goto LABEL_111;
  }
  v43 = *(_QWORD *)(v42 + 8);
  *(_QWORD *)(v8 + 104) = v39;
  v44 = 8 * v43;
  v43 *= 24LL;
  v45 = malloc(v44);
  *(_QWORD *)(v42 + 24) = v45;
  v46 = v45;
  v47 = malloc(v44);
  *(_QWORD *)(v42 + 32) = v47;
  v112 = v47;
  v48 = malloc(v43);
  *(_QWORD *)(v42 + 40) = v48;
  size = (size_t)v48;
  v49 = malloc(v43);
  *(_QWORD *)(v42 + 48) = v49;
  if ( !v46 || !v112 || !size || !v49 )
  {
    v114 = 12;
    goto LABEL_111;
  }
  v50 = *(_QWORD *)(v7 + 48);
  v51 = malloc(8 * v50);
  *(_QWORD *)(v42 + 224) = v51;
  if ( v51 )
  {
    v52 = 0LL;
    if ( v50 )
    {
      do
      {
        v51[v52] = v52;
        ++v52;
      }
      while ( v52 != v50 );
    }
    sub_408AE0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_4087A0, v42);
    v53 = *(_QWORD *)(v7 + 48);
    if ( v53 )
    {
      v54 = *(_QWORD **)(v42 + 224);
      v55 = *v54;
      if ( *v54 )
        goto LABEL_56;
      while ( ++v55 != v53 )
      {
        if ( v54[v55] != v55 )
          goto LABEL_56;
      }
    }
    else
    {
      v54 = *(_QWORD **)(v42 + 224);
    }
    free(v54);
    *(_QWORD *)(v42 + 224) = 0LL;
  }
LABEL_56:
  v27 = sub_406AA0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_409620, v7);
  if ( v27 )
    goto LABEL_86;
  v27 = sub_406AA0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_40BB50, v42);
  if ( v27 )
    goto LABEL_86;
  sub_408AE0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_408830, v42);
  v27 = sub_408AE0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_408330, v42);
  if ( v27 )
    goto LABEL_86;
  v56 = 0;
  v57 = 0LL;
  while ( *(_QWORD *)(v42 + 16) != v57 )
  {
    while ( 1 )
    {
      while ( *(_QWORD *)(*(_QWORD *)(v42 + 48) + 24 * v57 + 8) )
      {
        if ( *(_QWORD *)(v42 + 16) == ++v57 )
          goto LABEL_63;
      }
      sizea = 24 * v57;
      v27 = sub_408D10((__m128i *)v36, v42, v57, 1);
      if ( v27 )
        goto LABEL_86;
      ++v57;
      if ( *(_QWORD *)(*(_QWORD *)(v42 + 48) + sizea + 8) )
        break;
      v56 = 1;
      free(ptr);
      if ( *(_QWORD *)(v42 + 16) == v57 )
      {
LABEL_64:
        v56 = 0;
        v57 = 0LL;
      }
    }
  }
LABEL_63:
  if ( v56 )
    goto LABEL_64;
  if ( !(*(_BYTE *)(v7 + 56) & 0x10) && *(_QWORD *)(v7 + 48) && *(_BYTE *)(v42 + 176) & 1 || *(_QWORD *)(v42 + 152) )
  {
    v58 = (char *)malloc(24 * v57);
    *(_QWORD *)(v42 + 56) = v58;
    if ( !v58 )
    {
      v114 = 12;
      v42 = *(_QWORD *)v7;
      goto LABEL_111;
    }
    v59 = 0LL;
    if ( !v57 )
      goto LABEL_88;
    while ( 1 )
    {
      v60 = 3 * v59++;
      v61 = (signed __int64)&v58[8 * v60];
      *(_OWORD *)v61 = 0LL;
      *(_QWORD *)(v61 + 16) = 0LL;
      v62 = *(_QWORD *)(v42 + 16);
      if ( v62 <= v59 )
        break;
      v58 = *(char **)(v42 + 56);
    }
    if ( !v62 )
      goto LABEL_88;
    v113 = 0LL;
    v63 = *(_QWORD *)(v42 + 48);
    while ( 1 )
    {
      v64 = 0LL;
      v65 = v63 + 24 * v113;
      v66 = *(_QWORD *)(v65 + 16);
      if ( *(_QWORD *)(v65 + 8) > 0LL )
        break;
LABEL_141:
      if ( *(_QWORD *)(v42 + 16) <= (unsigned __int64)++v113 )
        goto LABEL_88;
    }
    while ( 1 )
    {
      sizeb = v66;
      if ( !(unsigned __int8)sub_406F80(*(_QWORD *)(v42 + 56) + 24LL * *(_QWORD *)(v66 + 8 * v64), v113) )
        break;
      v63 = *(_QWORD *)(v42 + 48);
      ++v64;
      v66 = sizeb;
      if ( v64 >= *(_QWORD *)(v63 + 24 * v113 + 8) )
        goto LABEL_141;
    }
    v27 = 12;
    goto LABEL_86;
  }
LABEL_88:
  v67 = *(_BYTE *)(v8 + 176);
  v114 = 0;
  v68 = (v106 == 0) & (v67 >> 2);
  if ( v68 && !*(_QWORD *)(v7 + 40) )
  {
    v93 = *(_QWORD *)(v8 + 16);
    if ( v93 )
    {
      v94 = *(_QWORD *)v8;
      v95 = 0;
      v96 = 0LL;
      v97 = *(_QWORD *)v8;
      while ( 2 )
      {
        switch ( *(_BYTE *)(v97 + 8) )
        {
          default:
            abort();
            return result;
          case 6:
            goto LABEL_89;
          case 5:
            v95 = v68;
            goto LABEL_148;
          case 2:
          case 4:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
            goto LABEL_148;
          case 1:
            if ( *(_BYTE *)v97 < 0 )
              v56 = v68;
            goto LABEL_148;
          case 0xC:
            v104 = *(_DWORD *)v97;
            if ( *(_DWORD *)v97 == 32 )
              goto LABEL_148;
            if ( v104 <= 0x20 )
            {
              if ( v104 != 16 )
                goto LABEL_89;
            }
            else if ( v104 != 64 && v104 != 128 )
            {
              goto LABEL_89;
            }
LABEL_148:
            ++v96;
            v97 += 16LL;
            if ( v96 != v93 )
              continue;
            if ( !((unsigned __int8)v95 | (unsigned __int8)v56) )
              goto LABEL_175;
            v102 = v94 + 16 * v96;
            do
            {
              v103 = *(_BYTE *)(v94 + 8);
              if ( v103 == 1 )
              {
                if ( *(_BYTE *)v94 < 0 )
                  *(_BYTE *)(v94 + 10) &= 0xDFu;
              }
              else if ( v103 == 5 )
              {
                *(_BYTE *)(v94 + 8) = 7;
              }
              v94 += 16LL;
            }
            while ( v102 != v94 );
            break;
          case 3:
            if ( *(_QWORD *)(*(_QWORD *)v97 + 16LL) || *(_QWORD *)(*(_QWORD *)v97 + 24LL) )
              goto LABEL_89;
            goto LABEL_148;
        }
        break;
      }
    }
    else
    {
LABEL_175:
      v95 = 0;
    }
    v14 = *(_QWORD *)(v8 + 152) == 0LL;
    v19 = *(_QWORD *)(v8 + 152) < 0;
    v105 = *(_BYTE *)(v8 + 176);
    *(_DWORD *)(v8 + 180) = 1;
    *(_BYTE *)(v8 + 176) = v105 & 0xF9 | 2 * ((v95 | (!v19 && !v14)) & 1);
  }
LABEL_89:
  v69 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 24LL) + 56LL);
  *(_QWORD *)(v8 + 144) = v69;
  v70 = sub_4096A0((__int64)v36, *(_QWORD *)(v8 + 48) + 24 * v69);
  v115.m128i_i32[0] = v70;
  if ( !v70 )
  {
    if ( *(_QWORD *)(v8 + 152) > 0LL )
    {
      v71 = v117;
      if ( v117 > 0 )
      {
        v72 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
            v73 = *(_QWORD *)v8 + 16LL * *((_QWORD *)ptr + v72);
            if ( *(_BYTE *)(v73 + 8) == 4 )
            {
              v74 = 0LL;
              while ( 1 )
              {
                v75 = *(_QWORD *)v8 + 16LL * *((_QWORD *)ptr + v74);
                if ( *(_BYTE *)(v75 + 8) == 9 && *(_QWORD *)v75 == *(_QWORD *)v73 )
                  break;
                if ( v71 == ++v74 )
                  goto LABEL_93;
              }
              if ( !sub_408600(
                      v71,
                      (__int64 *)&v36[1],
                      **(_QWORD **)(*(_QWORD *)(v8 + 40) + 24LL * *((_QWORD *)ptr + v72) + 16)) )
                break;
            }
LABEL_93:
            if ( v71 <= ++v72 )
              goto LABEL_102;
          }
          v77 = sub_408B40((__int64)v36, *(_QWORD *)(v8 + 48) + 24 * v76);
          if ( v77 )
            break;
          v71 = v117;
          v72 = 1LL;
          if ( v117 <= 1 )
            goto LABEL_102;
        }
        v70 = v77;
        goto LABEL_106;
      }
    }
LABEL_102:
    v78 = sub_4098B0(&v115, v8, (__int64)v36, 0);
    *(_QWORD *)(v8 + 72) = v78;
    if ( v78 )
    {
      if ( *(_BYTE *)(v78 + 104) >= 0 )
      {
        *(_QWORD *)(v8 + 96) = v78;
        *(_QWORD *)(v8 + 88) = v78;
        *(_QWORD *)(v8 + 80) = v78;
LABEL_105:
        free(ptr);
        goto LABEL_106;
      }
      *(_QWORD *)(v8 + 80) = sub_4098B0(&v115, v8, (__int64)v36, 1u);
      *(_QWORD *)(v8 + 88) = sub_4098B0(&v115, v8, (__int64)v36, 2u);
      v98 = sub_4098B0(&v115, v8, (__int64)v36, 6u);
      v14 = *(_QWORD *)(v8 + 80) == 0LL;
      *(_QWORD *)(v8 + 96) = v98;
      if ( !v14 && *(_QWORD *)(v8 + 88) && v98 )
        goto LABEL_105;
    }
    v70 = v115.m128i_i32[0];
  }
LABEL_106:
  v79 = *(_QWORD *)v7;
  v114 = v70;
  v80 = *(void **)(v79 + 112);
  if ( v80 )
  {
    do
    {
      v81 = *(void **)v80;
      free(v80);
      v80 = v81;
    }
    while ( v81 );
  }
  *(_QWORD *)(v79 + 112) = 0LL;
  v82 = *(void **)(v79 + 32);
  *(_DWORD *)(v79 + 128) = 15;
  *(_QWORD *)(v79 + 104) = 0LL;
  free(v82);
  *(_QWORD *)(v79 + 32) = 0LL;
  sub_408230((__int64)&v119);
  result = v114;
  if ( v114 )
    goto LABEL_114;
  return result;
}

signed __int64 __fastcall sub_412FC0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r14@1
  __int64 v5; // r13@1
  unsigned __int64 v6; // r12@1
  __int64 v7; // rbp@1
  __int64 v8; // rbx@1
  size_t v9; // rsi@4
  signed __int64 v10; // r15@6
  void *v11; // rax@7
  char *v12; // rax@7
  bool v13; // cf@10
  bool v14; // zf@10
  const char *v15; // rdi@10
  signed __int64 v16; // rcx@10
  char *v17; // rsi@10
  char v18; // al@15
  bool v19; // sf@15
  unsigned __int8 v20; // of@15
  __int64 v21; // rdx@20
  signed int v22; // edi@20
  __int64 v23; // rdx@20
  unsigned __int8 v24; // al@20
  char v25; // si@20
  __int64 v26; // r15@20
  signed int v27; // eax@25
  __int64 v28; // rcx@31
  __int64 v29; // rax@32
  __int64 v30; // r12@39
  int v31; // eax@39
  char *v32; // rax@39
  char **v33; // r15@40
  size_t v34; // ST08_8@40
  signed int *v35; // r13@40
  const __m128i *v36; // r12@40
  char *v37; // rax@40
  char **v38; // r9@40
  char **v39; // r14@40
  void *v40; // rdx@40
  char *v41; // rax@41
  __int64 v42; // r15@42
  size_t v43; // r13@43
  signed __int64 v44; // ST08_8@43
  void *v45; // rax@43
  void *v46; // r14@43
  void *v47; // rax@43
  void *v48; // rax@43
  void *v49; // rax@43
  __int64 v50; // r13@47
  _QWORD *v51; // rax@47
  __int64 v52; // rdx@48
  __int64 v53; // rdx@50
  _QWORD *v54; // rdi@51
  __int64 v55; // rax@51
  char v56; // r13@59
  __int64 v57; // r14@59
  char *v58; // rax@74
  unsigned __int64 v59; // rdx@75
  signed __int64 v60; // rcx@78
  signed __int64 v61; // rax@78
  unsigned __int64 v62; // rax@78
  __int64 v63; // rax@80
  __int64 v64; // r14@81
  signed __int64 v65; // rsi@81
  size_t v66; // rcx@81
  unsigned __int8 v67; // al@88
  char v68; // al@88
  __int64 v69; // rax@89
  unsigned int v70; // er13@89
  __int64 v71; // r10@91
  signed __int64 v72; // r9@92
  signed __int64 v73; // rcx@94
  __int64 v74; // rdx@95
  signed __int64 v75; // rax@97
  __int64 v76; // r11@99
  unsigned int v77; // eax@100
  __int64 v78; // rax@102
  __int64 v79; // r12@106
  void *v80; // rdi@106
  void *v81; // r13@107
  void *v82; // rdi@108
  signed __int64 result; // rax@108
  void *v84; // rdi@111
  void *v85; // r12@112
  void *v86; // rdi@113
  void *v87; // rax@116
  __int64 v88; // r15@117
  int v89; // edx@118
  int v90; // ecx@118
  wint_t v91; // eax@122
  unsigned int v92; // edi@122
  __int64 v93; // rdi@130
  __int64 v94; // r8@131
  char v95; // r9@131
  __int64 v96; // rcx@131
  __int64 v97; // rdx@131
  __int64 v98; // rax@133
  void *v99; // rax@138
  size_t v100; // ST08_8@144
  char *v101; // rax@144
  signed __int64 v102; // rax@150
  char v103; // dl@154
  unsigned int v104; // esi@160
  char v105; // dl@176
  __int64 v106; // [sp+0h] [bp-138h]@20
  int v107; // [sp+0h] [bp-138h]@122
  size_t size; // [sp+8h] [bp-130h]@43
  size_t sizea; // [sp+8h] [bp-130h]@65
  size_t sizeb; // [sp+8h] [bp-130h]@84
  int sizec; // [sp+8h] [bp-130h]@122
  void *v112; // [sp+10h] [bp-128h]@43
  __int64 v113; // [sp+10h] [bp-128h]@80
  unsigned int v114; // [sp+2Ch] [bp-10Ch]@1
  const __m128i v115; // [sp+30h] [bp-108h]@39
  char v116; // [sp+40h] [bp-F8h]@40
  __int64 v117; // [sp+48h] [bp-F0h]@40
  void *ptr; // [sp+50h] [bp-E8h]@67
  __int64 v119; // [sp+60h] [bp-D8h]@20
  __int64 v120; // [sp+68h] [bp-D0h]@20
  __int64 v121; // [sp+88h] [bp-B0h]@37
  __int64 v122; // [sp+90h] [bp-A8h]@27
  __int64 v123; // [sp+98h] [bp-A0h]@26
  __int64 v124; // [sp+A0h] [bp-98h]@27
  __int64 v125; // [sp+A8h] [bp-90h]@39
  unsigned __int64 v126; // [sp+B0h] [bp-88h]@20
  __int64 v127; // [sp+B8h] [bp-80h]@20
  unsigned __int64 v128; // [sp+C0h] [bp-78h]@20
  unsigned __int64 v129; // [sp+C8h] [bp-70h]@20
  __int64 v130; // [sp+D8h] [bp-60h]@20
  bool v131; // [sp+E8h] [bp-50h]@20
  char v132; // [sp+E9h] [bp-4Fh]@20
  char v133; // [sp+EAh] [bp-4Eh]@20
  bool v134; // [sp+EBh] [bp-4Dh]@20
  int v135; // [sp+F0h] [bp-48h]@20

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  *(_BYTE *)(a1 + 56) &= 0x90u;
  v13 = *(_QWORD *)(a1 + 8) < 0xE7uLL;
  v14 = *(_QWORD *)(a1 + 8) == 231LL;
  v114 = 0;
  v8 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v13 || v14 )
  {
    v99 = realloc((void *)v8, 0xE8uLL);
    v8 = (__int64)v99;
    if ( !v99 )
      return 12LL;
    *(_QWORD *)(a1 + 8) = 232LL;
    *(_QWORD *)a1 = v99;
  }
  *(_QWORD *)(a1 + 16) = 232LL;
  *(_QWORD *)v8 = 0LL;
  *(_QWORD *)(v8 + 224) = 0LL;
  memset(
    (void *)((v8 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v8 - (((_DWORD)v8 + 8) & 0xFFFFFFF8) + 232) >> 3));
  *(_DWORD *)(v8 + 128) = 15;
  if ( v6 > 0x555555555555554LL )
    goto LABEL_115;
  *(_QWORD *)(v8 + 8) = v6 + 1;
  *(_QWORD *)v8 = malloc(16 * (v6 + 1));
  if ( v6 )
  {
    v9 = 1LL;
    do
      v9 *= 2LL;
    while ( v6 >= v9 );
    v10 = v9 - 1;
  }
  else
  {
    v10 = 0LL;
    v9 = 1LL;
  }
  v11 = calloc(0x18uLL, v9);
  *(_QWORD *)(v8 + 136) = v10;
  *(_QWORD *)(v8 + 64) = v11;
  *(_DWORD *)(v8 + 180) = __ctype_get_mb_cur_max();
  v12 = nl_langinfo(14);
  if ( (*v12 & 0xDF) == 85 && (v12[1] & 0xDF) == 84 && (v12[2] & 0xDF) == 70 )
  {
    v13 = (unsigned __int8)v12[3] < 0x2Du;
    v14 = v12[3] == 45;
    v15 = "8";
    v16 = 2LL;
    v17 = &v12[v14 + 3];
    do
    {
      if ( !v16 )
        break;
      v13 = (unsigned __int8)*v17 < *v15;
      v14 = *v17++ == *v15++;
      --v16;
    }
    while ( v14 );
    if ( (!v13 && !v14) == v13 )
      *(_BYTE *)(v8 + 176) |= 4u;
  }
  v18 = *(_BYTE *)(v8 + 176);
  v20 = __OFSUB__(*(_DWORD *)(v8 + 180), 1);
  v14 = *(_DWORD *)(v8 + 180) == 1;
  v19 = *(_DWORD *)(v8 + 180) - 1 < 0;
  *(_BYTE *)(v8 + 176) &= 0xF7u;
  if ( !((unsigned __int8)(v19 ^ v20) | v14) )
  {
    if ( v18 & 4 )
    {
      *(_QWORD *)(v8 + 120) = &unk_417BA0;
      goto LABEL_18;
    }
    v87 = calloc(0x20uLL, 1uLL);
    *(_QWORD *)(v8 + 120) = v87;
    if ( !v87 )
    {
LABEL_115:
      v114 = 12;
LABEL_114:
      sub_40BBE0((void **)v8);
      *(_QWORD *)v7 = 0LL;
      result = v114;
      *(_QWORD *)(v7 + 8) = 0LL;
      return result;
    }
    v88 = 0LL;
LABEL_118:
    v89 = 8 * v88;
    v90 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        sizec = v90;
        v107 = v89;
        v91 = btowc(v89);
        v92 = v107 & 0xFFFFFF80;
        if ( v91 != -1 )
          break;
        if ( !v92 )
          goto LABEL_120;
LABEL_121:
        v90 = sizec + 1;
        v89 = v107 + 1;
        if ( sizec == 63 )
          goto LABEL_126;
      }
      *(_QWORD *)(v88 + *(_QWORD *)(v8 + 120)) |= 1LL << sizec;
      if ( v92 )
        goto LABEL_121;
      if ( v91 != v107 )
      {
LABEL_120:
        *(_BYTE *)(v8 + 176) |= 8u;
        goto LABEL_121;
      }
      v90 = sizec + 1;
      v89 = v107 + 1;
      if ( sizec == 63 )
      {
LABEL_126:
        v88 += 8LL;
        if ( v88 == 32 )
          break;
        goto LABEL_118;
      }
    }
  }
LABEL_18:
  if ( !*(_QWORD *)v8 || !*(_QWORD *)(v8 + 64) )
    goto LABEL_115;
  v21 = *(_QWORD *)(v7 + 40);
  v114 = 0;
  memset(&v120, 0, 0x90uLL);
  v130 = v21;
  v22 = *(_DWORD *)(v8 + 180);
  v119 = v4;
  v106 = v5 & 0x400000;
  v131 = (v5 & 0x400000) != 0;
  v23 = v106 | v21;
  v24 = *(_BYTE *)(v8 + 176);
  v25 = v23 != 0;
  v127 = v6;
  v26 = v23;
  v126 = v6;
  v134 = v23 != 0;
  v135 = v22;
  v132 = (v24 >> 2) & 1;
  v133 = (v24 >> 3) & 1;
  v129 = v6;
  v128 = v6;
  if ( v6 )
  {
    v27 = sub_406EE0((__int64)&v119, v6 + 1);
    if ( v27 )
    {
LABEL_86:
      v114 = v27;
      v42 = *(_QWORD *)v7;
LABEL_111:
      v84 = *(void **)(v42 + 112);
      if ( v84 )
      {
        do
        {
          v85 = *(void **)v84;
          free(v84);
          v84 = v85;
        }
        while ( v85 );
      }
      *(_QWORD *)(v42 + 112) = 0LL;
      v86 = *(void **)(v42 + 32);
      *(_DWORD *)(v42 + 128) = 15;
      *(_QWORD *)(v42 + 104) = 0LL;
      free(v86);
      *(_QWORD *)(v42 + 32) = 0LL;
      sub_408230((__int64)&v119);
      goto LABEL_114;
    }
    v25 = v134;
    v22 = *(_DWORD *)(v8 + 180);
  }
  if ( v25 )
    v4 = v120;
  v120 = v4;
  if ( v5 & 0x400000 )
  {
    if ( v22 <= 1 )
    {
      sub_407250((__int64)&v119);
      v114 = 0;
    }
    else
    {
      while ( 1 )
      {
        v27 = sub_407480((__int64)&v119);
        if ( v27 )
          goto LABEL_86;
        if ( (signed __int64)v6 <= v123 || v124 > v122 + *(_DWORD *)(v8 + 180) )
          break;
        v27 = sub_406EE0((__int64)&v119, 2 * v124);
        if ( v27 )
          goto LABEL_86;
      }
      v114 = 0;
    }
  }
  else if ( v22 > 1 )
  {
    sub_4072D0((__int64)&v119);
    v114 = 0;
  }
  else
  {
    v28 = v124;
    if ( v26 )
    {
      v29 = v122;
      if ( v127 <= v124 )
        v28 = v127;
      if ( v28 > v122 )
      {
        while ( 1 )
        {
          *(_BYTE *)(v4 + v29) = *(_BYTE *)(v130 + *(_BYTE *)(v121 + v29 + v119));
          if ( v28 == ++v29 )
            break;
          v4 = v120;
        }
      }
      else
      {
        v28 = v122;
      }
    }
    v122 = v28;
    v123 = v28;
    v114 = 0;
  }
  v30 = *(_QWORD *)v7;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v30 + 216) = v5;
  v31 = sub_4110C0((__int64)&v115, (__int64)&v119, v5 | 0x800000);
  v125 += v31;
  v32 = sub_412E60((__int64)&v119, (__int64 *)v7, &v115, v5, 0LL, &v114);
  if ( v114 )
  {
    if ( !v32 )
    {
      *(_QWORD *)(v8 + 104) = 0LL;
      v42 = *(_QWORD *)v7;
      goto LABEL_111;
    }
    v33 = (char **)(v30 + 112);
    v100 = (size_t)v32;
    v35 = (signed int *)(v30 + 128);
    v36 = (const __m128i *)&v116;
    LOBYTE(v117) = 2;
    v101 = sub_409270(v33, v35, 0LL, 0LL, (const __m128i *)&v116);
    v38 = (char **)v100;
    v39 = (char **)v101;
  }
  else
  {
    v33 = (char **)(v30 + 112);
    v34 = (size_t)v32;
    v35 = (signed int *)(v30 + 128);
    v36 = (const __m128i *)&v116;
    LOBYTE(v117) = 2;
    v37 = sub_409270(v33, v35, 0LL, 0LL, (const __m128i *)&v116);
    v38 = (char **)v34;
    v39 = (char **)v37;
    v40 = v37;
    if ( !v34 )
      goto LABEL_42;
  }
  LOBYTE(v117) = 16;
  v41 = sub_409270(v33, v35, v38, v39, v36);
  v40 = v39;
  v39 = (char **)v41;
LABEL_42:
  v42 = *(_QWORD *)v7;
  if ( v39 == 0LL || v40 == 0LL )
  {
    v114 = 12;
    *(_QWORD *)(v8 + 104) = 0LL;
    goto LABEL_111;
  }
  v43 = *(_QWORD *)(v42 + 8);
  *(_QWORD *)(v8 + 104) = v39;
  v44 = 8 * v43;
  v43 *= 24LL;
  v45 = malloc(v44);
  *(_QWORD *)(v42 + 24) = v45;
  v46 = v45;
  v47 = malloc(v44);
  *(_QWORD *)(v42 + 32) = v47;
  v112 = v47;
  v48 = malloc(v43);
  *(_QWORD *)(v42 + 40) = v48;
  size = (size_t)v48;
  v49 = malloc(v43);
  *(_QWORD *)(v42 + 48) = v49;
  if ( !v46 || !v112 || !size || !v49 )
  {
    v114 = 12;
    goto LABEL_111;
  }
  v50 = *(_QWORD *)(v7 + 48);
  v51 = malloc(8 * v50);
  *(_QWORD *)(v42 + 224) = v51;
  if ( v51 )
  {
    v52 = 0LL;
    if ( v50 )
    {
      do
      {
        v51[v52] = v52;
        ++v52;
      }
      while ( v52 != v50 );
    }
    sub_408AE0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_4087A0, v42);
    v53 = *(_QWORD *)(v7 + 48);
    if ( v53 )
    {
      v54 = *(_QWORD **)(v42 + 224);
      v55 = *v54;
      if ( *v54 )
        goto LABEL_56;
      while ( ++v55 != v53 )
      {
        if ( v54[v55] != v55 )
          goto LABEL_56;
      }
    }
    else
    {
      v54 = *(_QWORD **)(v42 + 224);
    }
    free(v54);
    *(_QWORD *)(v42 + 224) = 0LL;
  }
LABEL_56:
  v27 = sub_406AA0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_409620, v7);
  if ( v27 )
    goto LABEL_86;
  v27 = sub_406AA0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_40BB50, v42);
  if ( v27 )
    goto LABEL_86;
  sub_408AE0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_408830, v42);
  v27 = sub_408AE0(*(_QWORD *)(v42 + 104), (int (__fastcall *)(__int64, __int64))sub_408330, v42);
  if ( v27 )
    goto LABEL_86;
  v56 = 0;
  v57 = 0LL;
  while ( *(_QWORD *)(v42 + 16) != v57 )
  {
    while ( 1 )
    {
      while ( *(_QWORD *)(*(_QWORD *)(v42 + 48) + 24 * v57 + 8) )
      {
        if ( *(_QWORD *)(v42 + 16) == ++v57 )
          goto LABEL_63;
      }
      sizea = 24 * v57;
      v27 = sub_408D10((__m128i *)v36, v42, v57, 1);
      if ( v27 )
        goto LABEL_86;
      ++v57;
      if ( *(_QWORD *)(*(_QWORD *)(v42 + 48) + sizea + 8) )
        break;
      v56 = 1;
      free(ptr);
      if ( *(_QWORD *)(v42 + 16) == v57 )
      {
LABEL_64:
        v56 = 0;
        v57 = 0LL;
      }
    }
  }
LABEL_63:
  if ( v56 )
    goto LABEL_64;
  if ( !(*(_BYTE *)(v7 + 56) & 0x10) && *(_QWORD *)(v7 + 48) && *(_BYTE *)(v42 + 176) & 1 || *(_QWORD *)(v42 + 152) )
  {
    v58 = (char *)malloc(24 * v57);
    *(_QWORD *)(v42 + 56) = v58;
    if ( !v58 )
    {
      v114 = 12;
      v42 = *(_QWORD *)v7;
      goto LABEL_111;
    }
    v59 = 0LL;
    if ( !v57 )
      goto LABEL_88;
    while ( 1 )
    {
      v60 = 3 * v59++;
      v61 = (signed __int64)&v58[8 * v60];
      *(_OWORD *)v61 = 0LL;
      *(_QWORD *)(v61 + 16) = 0LL;
      v62 = *(_QWORD *)(v42 + 16);
      if ( v62 <= v59 )
        break;
      v58 = *(char **)(v42 + 56);
    }
    if ( !v62 )
      goto LABEL_88;
    v113 = 0LL;
    v63 = *(_QWORD *)(v42 + 48);
    while ( 1 )
    {
      v64 = 0LL;
      v65 = v63 + 24 * v113;
      v66 = *(_QWORD *)(v65 + 16);
      if ( *(_QWORD *)(v65 + 8) > 0LL )
        break;
LABEL_141:
      if ( *(_QWORD *)(v42 + 16) <= (unsigned __int64)++v113 )
        goto LABEL_88;
    }
    while ( 1 )
    {
      sizeb = v66;
      if ( !(unsigned __int8)sub_406F80(*(_QWORD *)(v42 + 56) + 24LL * *(_QWORD *)(v66 + 8 * v64), v113) )
        break;
      v63 = *(_QWORD *)(v42 + 48);
      ++v64;
      v66 = sizeb;
      if ( v64 >= *(_QWORD *)(v63 + 24 * v113 + 8) )
        goto LABEL_141;
    }
    v27 = 12;
    goto LABEL_86;
  }
LABEL_88:
  v67 = *(_BYTE *)(v8 + 176);
  v114 = 0;
  v68 = (v106 == 0) & (v67 >> 2);
  if ( v68 && !*(_QWORD *)(v7 + 40) )
  {
    v93 = *(_QWORD *)(v8 + 16);
    if ( v93 )
    {
      v94 = *(_QWORD *)v8;
      v95 = 0;
      v96 = 0LL;
      v97 = *(_QWORD *)v8;
      while ( 2 )
      {
        switch ( *(_BYTE *)(v97 + 8) )
        {
          default:
            abort();
            return result;
          case 6:
            goto LABEL_89;
          case 5:
            v95 = v68;
            goto LABEL_148;
          case 2:
          case 4:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
            goto LABEL_148;
          case 1:
            if ( *(_BYTE *)v97 < 0 )
              v56 = v68;
            goto LABEL_148;
          case 0xC:
            v104 = *(_DWORD *)v97;
            if ( *(_DWORD *)v97 == 32 )
              goto LABEL_148;
            if ( v104 <= 0x20 )
            {
              if ( v104 != 16 )
                goto LABEL_89;
            }
            else if ( v104 != 64 && v104 != 128 )
            {
              goto LABEL_89;
            }
LABEL_148:
            ++v96;
            v97 += 16LL;
            if ( v96 != v93 )
              continue;
            if ( !((unsigned __int8)v95 | (unsigned __int8)v56) )
              goto LABEL_175;
            v102 = v94 + 16 * v96;
            do
            {
              v103 = *(_BYTE *)(v94 + 8);
              if ( v103 == 1 )
              {
                if ( *(_BYTE *)v94 < 0 )
                  *(_BYTE *)(v94 + 10) &= 0xDFu;
              }
              else if ( v103 == 5 )
              {
                *(_BYTE *)(v94 + 8) = 7;
              }
              v94 += 16LL;
            }
            while ( v102 != v94 );
            break;
          case 3:
            if ( *(_QWORD *)(*(_QWORD *)v97 + 16LL) || *(_QWORD *)(*(_QWORD *)v97 + 24LL) )
              goto LABEL_89;
            goto LABEL_148;
        }
        break;
      }
    }
    else
    {
LABEL_175:
      v95 = 0;
    }
    v14 = *(_QWORD *)(v8 + 152) == 0LL;
    v19 = *(_QWORD *)(v8 + 152) < 0;
    v105 = *(_BYTE *)(v8 + 176);
    *(_DWORD *)(v8 + 180) = 1;
    *(_BYTE *)(v8 + 176) = v105 & 0xF9 | 2 * ((v95 | (!v19 && !v14)) & 1);
  }
LABEL_89:
  v69 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 24LL) + 56LL);
  *(_QWORD *)(v8 + 144) = v69;
  v70 = sub_4096A0((__int64)v36, *(_QWORD *)(v8 + 48) + 24 * v69);
  v115.m128i_i32[0] = v70;
  if ( !v70 )
  {
    if ( *(_QWORD *)(v8 + 152) > 0LL )
    {
      v71 = v117;
      if ( v117 > 0 )
      {
        v72 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
            v73 = *(_QWORD *)v8 + 16LL * *((_QWORD *)ptr + v72);
            if ( *(_BYTE *)(v73 + 8) == 4 )
            {
              v74 = 0LL;
              while ( 1 )
              {
                v75 = *(_QWORD *)v8 + 16LL * *((_QWORD *)ptr + v74);
                if ( *(_BYTE *)(v75 + 8) == 9 && *(_QWORD *)v75 == *(_QWORD *)v73 )
                  break;
                if ( v71 == ++v74 )
                  goto LABEL_93;
              }
              if ( !sub_408600(
                      v71,
                      (__int64 *)&v36[1],
                      **(_QWORD **)(*(_QWORD *)(v8 + 40) + 24LL * *((_QWORD *)ptr + v72) + 16)) )
                break;
            }
LABEL_93:
            if ( v71 <= ++v72 )
              goto LABEL_102;
          }
          v77 = sub_408B40((__int64)v36, *(_QWORD *)(v8 + 48) + 24 * v76);
          if ( v77 )
            break;
          v71 = v117;
          v72 = 1LL;
          if ( v117 <= 1 )
            goto LABEL_102;
        }
        v70 = v77;
        goto LABEL_106;
      }
    }
LABEL_102:
    v78 = sub_4098B0(&v115, v8, (__int64)v36, 0);
    *(_QWORD *)(v8 + 72) = v78;
    if ( v78 )
    {
      if ( *(_BYTE *)(v78 + 104) >= 0 )
      {
        *(_QWORD *)(v8 + 96) = v78;
        *(_QWORD *)(v8 + 88) = v78;
        *(_QWORD *)(v8 + 80) = v78;
LABEL_105:
        free(ptr);
        goto LABEL_106;
      }
      *(_QWORD *)(v8 + 80) = sub_4098B0(&v115, v8, (__int64)v36, 1u);
      *(_QWORD *)(v8 + 88) = sub_4098B0(&v115, v8, (__int64)v36, 2u);
      v98 = sub_4098B0(&v115, v8, (__int64)v36, 6u);
      v14 = *(_QWORD *)(v8 + 80) == 0LL;
      *(_QWORD *)(v8 + 96) = v98;
      if ( !v14 && *(_QWORD *)(v8 + 88) && v98 )
        goto LABEL_105;
    }
    v70 = v115.m128i_i32[0];
  }
LABEL_106:
  v79 = *(_QWORD *)v7;
  v114 = v70;
  v80 = *(void **)(v79 + 112);
  if ( v80 )
  {
    do
    {
      v81 = *(void **)v80;
      free(v80);
      v80 = v81;
    }
    while ( v81 );
  }
  *(_QWORD *)(v79 + 112) = 0LL;
  v82 = *(void **)(v79 + 32);
  *(_DWORD *)(v79 + 128) = 15;
  *(_QWORD *)(v79 + 104) = 0LL;
  free(v82);
  *(_QWORD *)(v79 + 32) = 0LL;
  sub_408230((__int64)&v119);
  result = v114;
  if ( v114 )
    goto LABEL_114;
  return result;
}

char *__fastcall sub_413D70(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rcx@1
  int v4; // eax@1
  char *result; // rax@2

  v3 = qword_61B948;
  *(_BYTE *)(a3 + 56) = 16 * (((unsigned __int64)qword_61B948 >> 25) & 1) | *(_BYTE *)(a3 + 56) & 0xEF | 0x80;
  v4 = sub_412FC0(a3, a1, a2, v3);
  if ( v4 )
    result = dcgettext(0LL, (const char *)(qword_417BC0[v4] + 4291680), 5);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_413DF0(__int64 a1)
{
  __int64 v1; // rbp@1
  __int64 v2; // r12@1
  __int64 v3; // rax@1
  __int64 v4; // rsi@3
  __int64 v5; // rsi@5

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)a1;
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  memset(
    (void *)((v1 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v1 - (((_DWORD)v1 + 8) & 0xFFFFFFF8) + 256) >> 3));
  sub_40C8A0((_QWORD *)a1, (_QWORD *)(*(_QWORD *)(v2 + 72) + 16LL), (_QWORD *)(*(_QWORD *)(v2 + 72) + 24LL), v1);
  v3 = *(_QWORD *)(v2 + 80);
  if ( *(_QWORD *)(v2 + 72) != v3 )
  {
    sub_40C8A0((_QWORD *)a1, (_QWORD *)(v3 + 16), (_QWORD *)(v3 + 24), v1);
    v3 = *(_QWORD *)(v2 + 72);
  }
  v4 = *(_QWORD *)(v2 + 88);
  if ( v4 != v3 )
  {
    sub_40C8A0((_QWORD *)a1, (_QWORD *)(v4 + 16), (_QWORD *)(v4 + 24), v1);
    v3 = *(_QWORD *)(v2 + 72);
  }
  v5 = *(_QWORD *)(v2 + 96);
  if ( v5 != v3 )
    sub_40C8A0((_QWORD *)a1, (_QWORD *)(v5 + 16), (_QWORD *)(v5 + 24), v1);
  *(_BYTE *)(a1 + 56) |= 8u;
  return 0LL;
}

signed __int64 __fastcall sub_413EC0(__int64 a1, __int64 a2, __int64 a3, signed __int64 a4, __int64 a5, __int64 a6, unsigned __int64 *a7, char a8)
{
  __int64 v8; // rax@1
  void *v9; // r8@1
  unsigned __int64 *v10; // r12@1
  signed __int64 v11; // rbx@3
  __int64 v12; // r15@3
  char v13; // al@9
  unsigned __int64 v14; // rcx@15
  unsigned __int64 v15; // r14@16
  signed __int64 v16; // r13@16
  size_t v17; // rdi@17
  char *v18; // rbp@18
  int v19; // eax@19
  signed __int64 v20; // r12@20
  unsigned __int64 v22; // rdx@25
  int v23; // eax@25
  signed int v24; // er9@29
  unsigned __int64 v25; // r8@31
  unsigned __int64 v26; // rdi@31
  unsigned __int64 v27; // rdx@31
  __int64 v28; // rax@31
  unsigned __int64 v29; // rsi@34
  unsigned __int64 v30; // rcx@34
  int v31; // eax@36
  __int64 v32; // ST40_8@12
  __int64 v33; // ST38_8@12
  void *v34; // ST30_8@12
  size_t v35; // r14@44
  void *v36; // rax@44
  void *v37; // rax@45
  void *v38; // r14@51
  void *v39; // rax@52
  signed __int64 size; // [sp+8h] [bp-60h]@51
  void *ptr; // [sp+10h] [bp-58h]@18
  void *ptra; // [sp+10h] [bp-58h]@45
  __int64 v43; // [sp+18h] [bp-50h]@18
  __int64 v44; // [sp+20h] [bp-48h]@18
  int v45; // [sp+2Ch] [bp-3Ch]@9

  v8 = a5;
  v9 = (void *)(a4 + a5);
  v10 = a7;
  if ( a4 < 0 || a4 > a3 )
    return -1LL;
  v11 = a4;
  v12 = a1;
  if ( (signed __int64)v9 > a3 || v8 >= 0 && a4 > (signed __int64)v9 )
  {
    v9 = (void *)a3;
  }
  else if ( (signed __int64)v9 < 0 || v8 < 0 && a4 <= (signed __int64)v9 )
  {
    v13 = *(_BYTE *)(a1 + 56);
    v9 = 0LL;
    v45 = (*(_BYTE *)(a1 + 56) >> 5) & 3;
    goto LABEL_13;
  }
  v13 = *(_BYTE *)(a1 + 56);
  v45 = (*(_BYTE *)(a1 + 56) >> 5) & 3;
  if ( (signed __int64)v9 > a4 && *(_QWORD *)(a1 + 32) && !(v13 & 8) )
  {
    v32 = a6;
    v33 = a3;
    v34 = v9;
    sub_413DF0(a1);
    v13 = *(_BYTE *)(a1 + 56);
    a6 = v32;
    a3 = v33;
    v9 = v34;
  }
LABEL_13:
  if ( v13 & 0x10 || !a7 )
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
  if ( (signed __int64)v15 > 0 )
    goto LABEL_17;
LABEL_42:
  v17 = 16LL;
  v15 = 1LL;
  v16 = 1LL;
  v10 = 0LL;
LABEL_18:
  v44 = a6;
  v43 = a3;
  ptr = v9;
  v18 = (char *)malloc(v17);
  if ( !v18 )
    return -2LL;
  v19 = sub_40EF10(v12, a2, v43, v11, (signed __int64)ptr, v44, v15, (__int64)v18, v45);
  if ( !v19 )
  {
    if ( !v10 )
      goto LABEL_37;
    v22 = v16 + 1;
    v23 = (*(_BYTE *)(v12 + 56) >> 1) & 3;
    if ( (*(_BYTE *)(v12 + 56) >> 1) & 3 )
    {
      if ( v23 != 1 )
      {
        if ( v23 != 2 )
          __assert_fail("regs_allocated == REGS_FIXED", "lib/regexec.c", 0x1F8u, "re_copy_regs");
        if ( v15 > *v10 )
          __assert_fail("regs->num_regs >= nregs", "lib/regexec.c", 0x1FAu, "re_copy_regs");
        v24 = 2;
        goto LABEL_30;
      }
      v24 = 1;
      if ( *v10 >= v22 )
      {
LABEL_30:
        if ( v16 <= 0 )
        {
          v27 = 0LL;
          v16 = 0LL;
        }
        else
        {
          v25 = v10[1];
          v26 = v10[2];
          v27 = v16;
          v28 = 0LL;
          do
          {
            *(_QWORD *)(v25 + v28) = *(_QWORD *)&v18[2 * v28];
            *(_QWORD *)(v26 + v28) = *(_QWORD *)&v18[2 * v28 + 8];
            v28 += 8LL;
          }
          while ( v28 != 8 * v16 );
        }
        if ( *v10 > v27 )
        {
          v29 = v10[2];
          v30 = v10[1];
          do
          {
            ++v16;
            *(_QWORD *)(v29 + 8 * v27) = -1LL;
            *(_QWORD *)(v30 + 8 * v27) = -1LL;
            v27 = v16;
          }
          while ( *v10 > v16 );
        }
LABEL_36:
        v31 = 2 * v24 | (unsigned __int8)(*(_BYTE *)(v12 + 56) & 0xF9);
        *(_BYTE *)(v12 + 56) = 2 * v24 | *(_BYTE *)(v12 + 56) & 0xF9;
        if ( !(v31 & 6) )
          goto LABEL_21;
LABEL_37:
        v20 = *(_QWORD *)v18;
        if ( a8 )
        {
          if ( v11 != v20 )
            __assert_fail("pmatch[0].rm_so == start", "lib/regexec.c", 0x1BDu, "re_search_stub");
          v20 = *((_QWORD *)v18 + 1) - v20;
        }
        goto LABEL_22;
      }
      size = 8 * v22;
      v38 = realloc((void *)v10[1], 8 * v22);
      if ( v38 )
      {
        v39 = realloc((void *)v10[2], size);
        v24 = 1;
        if ( !v39 )
        {
          free(v38);
          v24 = 0;
          goto LABEL_36;
        }
        v10[1] = (unsigned __int64)v38;
        v10[2] = (unsigned __int64)v39;
        *v10 = v16 + 1;
        goto LABEL_30;
      }
    }
    else
    {
      v35 = 8 * v22;
      v36 = malloc(8 * v22);
      v10[1] = (unsigned __int64)v36;
      if ( v36 )
      {
        ptra = v36;
        v37 = malloc(v35);
        v10[2] = (unsigned __int64)v37;
        if ( v37 )
        {
          *v10 = v16 + 1;
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

signed __int64 __fastcall sub_414320(__int64 a1, char *a2, signed __int64 a3, char *a4, unsigned __int64 a5, signed __int64 a6, __int64 a7, unsigned __int64 *a8, unsigned __int64 a9, char a10)
{
  char *v10; // r14@1
  signed __int64 v11; // rcx@1
  __int64 v12; // r12@1
  size_t v13; // rbp@1
  size_t v14; // rbx@1
  int v15; // edi@1
  __int64 v16; // r9@1
  char v17; // r8@1
  char *v18; // r13@5
  signed __int64 v19; // rbx@6
  char *v21; // rax@8
  signed __int64 v22; // [sp+10h] [bp-48h]@8

  v10 = a4;
  v11 = a6;
  v12 = a1;
  v13 = a5;
  v14 = a3;
  v15 = a5 >> 63;
  v16 = a9;
  v17 = a10;
  if ( (a9 >> 63) | (unsigned __int8)v15 || a3 < 0 || __OFADD__(v13, a3) )
    return -2LL;
  if ( !v13 )
  {
    v10 = a2;
    v18 = 0LL;
    goto LABEL_6;
  }
  v18 = 0LL;
  if ( a3 )
  {
    v22 = v11;
    v21 = (char *)malloc(v13 + a3);
    v18 = v21;
    if ( v21 )
    {
      memcpy(v21, a2, v14);
      memcpy(&v18[v14], v10, v13);
      v10 = v18;
      v11 = v22;
      v16 = a9;
      v17 = a10;
      goto LABEL_6;
    }
    return -2LL;
  }
LABEL_6:
  v19 = sub_413EC0(v12, (__int64)v10, v13 + v14, v11, a7, v16, a8, v17);
  free(v18);
  return v19;
}

signed __int64 __fastcall sub_4146F0(__int64 a1, __int64 a2, __int64 a3, signed __int64 a4, __int64 a5, unsigned __int64 *a6)
{
  return sub_413EC0(a1, a2, a3, a4, a5, a3, a6, 0);
}

int __fastcall sub_414790(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_405AE0(stream);
  if ( v2 )
  {
    if ( !result )
    {
      *__errno_location() = 0;
      return -1;
    }
  }
  else
  {
    if ( !result )
      return result;
    if ( !v1 )
      return -(*__errno_location() != 9);
  }
  return -1;
}

bool __fastcall sub_4147F0(int a1)
{
  char *v1; // rdx@1
  bool result; // al@1
  bool v3; // cf@1
  bool v4; // zf@1
  signed __int64 v5; // rcx@2
  _BYTE *v6; // rdi@2
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
    v6 = &unk_417DF0;
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

const char *sub_414850()
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
  v1 = qword_61B938;
  v2 = v0;
  if ( !v0 )
    v2 = locale;
  if ( !qword_61B938 )
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
          v1 = locale;
LABEL_20:
          qword_61B938 = v1;
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
                v1 = locale;
                v2 = v59;
                free(v60);
                sub_405AE0(v61);
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
            sub_405AE0(v40);
            if ( !v62 )
              goto LABEL_25;
            v1[v62] = 0;
            goto LABEL_26;
          }
          close(v18);
        }
LABEL_25:
        v1 = locale;
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_414E30(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_61B248 )
    v1 = unk_61B248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_414E48(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_61AE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
