#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  __int64 v3; // r13@1
  int v4; // ebp@1
  int v5; // eax@2
  int v6; // er12@15
  char **v7; // rbx@15
  const char *v8; // rbx@19
  const char *v10; // rbx@24
  __int64 v11; // rax@25
  int v12; // er12@26
  const void *v13; // r12@29
  size_t v14; // rbx@29
  const char *v15; // r14@31
  char *v16; // rax@31
  const char *v17; // rdi@31
  char *v18; // rax@39
  const char *v19; // rax@41
  const char *v20; // r13@41
  __int64 v21; // rax@43
  __int64 v22; // rbx@43
  int *v23; // rax@43
  __int64 v24; // rax@46
  __int64 v25; // rbx@46
  char *v26; // rax@46
  char *v27; // rax@46
  char *v28; // rax@48
  char *v29; // rax@49
  __int64 v30; // rax@50
  __int64 v31; // rbx@50
  char *v32; // rax@50

  LODWORD(v3) = 2;
  LOBYTE(v4) = 0;
  sub_403110(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409580(
    sub_402DE0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  while ( 1 )
  {
    v5 = sub_4089A0(a1, a2, "bcp", &off_409D80, 0LL);
    if ( v5 == -1 )
      break;
    if ( v5 == 98 )
    {
      LODWORD(v3) = 0;
    }
    else
    {
      if ( v5 <= 98 )
      {
        if ( v5 == -131 )
        {
          sub_4051B0((char)stdout);
          exit(0);
        }
        if ( v5 == -130 )
          sub_402A50(0);
LABEL_47:
        sub_402A50(1);
      }
      if ( v5 == 99 )
      {
        LODWORD(v3) = 1;
      }
      else
      {
        if ( v5 != 112 )
          goto LABEL_47;
        LOBYTE(v4) = 1;
      }
    }
  }
  v6 = a1 - dword_60F2BC;
  v7 = &a2[dword_60F2BC];
  if ( (_DWORD)v3 != 2 && (_BYTE)v4 )
  {
    v28 = dcgettext(
            0LL,
            "the options to output dircolors' internal database and\nto select a shell syntax are mutually exclusive",
            5);
    error(0, 0, v28);
    goto LABEL_47;
  }
  if ( (unsigned __int8)(v4 ^ 1) < v6 )
  {
    if ( (_BYTE)v4 )
    {
      LODWORD(v24) = sub_404D30(*v7);
      v25 = v24;
      v26 = dcgettext(0LL, "extra operand %s", 5);
      error(0, 0, v26, v25);
      v27 = dcgettext(0LL, "file operands cannot be combined with --print-database (-p)", 5);
      __fprintf_chk(stderr, 1LL, "%s\n", v27);
      goto LABEL_47;
    }
    goto LABEL_50;
  }
  if ( (_BYTE)v4 )
  {
    v8 = "# Configuration file for dircolors, a utility to help you set the";
    do
    {
      puts(v8);
      v8 += strlen(v8) + 1;
    }
    while ( (unsigned __int64)(v8 - "# Configuration file for dircolors, a utility to help you set the") <= 0x104C );
    return (unsigned __int8)(v4 ^ 1);
  }
  if ( (_DWORD)v3 == 2 )
  {
    v18 = getenv("SHELL");
    if ( v18 && *v18 )
    {
      LODWORD(v19) = sub_402E80(v18);
      v20 = v19;
      if ( !strcmp(v19, "csh") )
        LODWORD(v3) = 1;
      else
        v3 = strcmp(v20, "tcsh") == 0;
      goto LABEL_23;
    }
    v29 = dcgettext(0LL, "no SHELL environment variable, and no shell type option given", 5);
    error(1, 0, v29);
LABEL_50:
    LODWORD(v30) = sub_404D30(v7[1]);
    v31 = v30;
    v32 = dcgettext(0LL, "extra operand %s", 5);
    error(0, 0, v32, v31);
    goto LABEL_47;
  }
LABEL_23:
  obstack_begin(&unk_60F320, 0LL, 0LL, malloc, free);
  if ( v6 )
  {
    v10 = *v7;
    if ( strcmp(v10, "-") && (LODWORD(v11) = sub_402F60(v10, "r", stdin), !v11)
      || (v12 = sub_402480(stdin), (unsigned int)sub_4055A0(stdin)) )
    {
      LODWORD(v21) = sub_404BB0(0LL, 3LL, v10);
      v22 = v21;
      v23 = __errno_location();
      error(0, *v23, "%s", v22);
      return (unsigned __int8)(v4 ^ 1);
    }
    LOBYTE(v4) = v12;
  }
  else
  {
    v4 = sub_402480(0LL);
  }
  if ( (_BYTE)v4 )
  {
    v13 = ptr;
    v14 = qword_60F338 - (_QWORD)ptr;
    if ( (void *)qword_60F338 == ptr )
      byte_60F370 |= 2u;
    v15 = "';\nexport LS_COLORS\n";
    v16 = (char *)(~qword_60F350 & (qword_60F350 + qword_60F338));
    v17 = "LS_COLORS='";
    if ( (unsigned __int64)&v16[-qword_60F328] > qword_60F340 - qword_60F328 )
      v16 = (char *)qword_60F340;
    qword_60F338 = (__int64)v16;
    ptr = v16;
    if ( (_DWORD)v3 )
      v15 = "'\n";
    if ( (_DWORD)v3 )
      v17 = "setenv LS_COLORS '";
    fputs_unlocked(v17, stdout);
    fwrite_unlocked(v13, 1uLL, v14, stdout);
    fputs_unlocked(v15, stdout);
  }
  return (unsigned __int8)(v4 ^ 1);
}

signed int sub_4021DB()
{
  return 6353608;
}

int sub_4021FA()
{
  return 0;
}

signed int sub_402231()
{
  signed int result; // eax@4

  if ( !byte_60F308 )
  {
    while ( qword_60F310 < (unsigned __int64)(((&unk_60EE48 - (_UNKNOWN *)&qword_60EE40) >> 3) - 1) )
      (*(&qword_60EE40 + ++qword_60F310))();
    result = sub_4021DB();
    byte_60F308 = 1;
  }
  return result;
}

int sub_402288()
{
  return sub_4021FA();
}

__int64 __fastcall sub_402290(_BYTE *a1)
{
  __int64 result; // rax@1
  char v2; // bp@2
  _BYTE *v3; // rbx@2
  _BYTE *v4; // rax@5
  signed __int64 v5; // rdx@7
  _BYTE *v6; // rax@7
  __int64 v7; // rcx@4
  _BYTE *v8; // rdx@4

  result = *a1;
  if ( (_BYTE)result )
  {
    v2 = 1;
    v3 = a1;
    do
    {
      v7 = qword_60F340;
      v8 = (_BYTE *)qword_60F338;
      if ( (_BYTE)result == 61 )
        goto LABEL_16;
      if ( (char)result > 61 )
      {
        if ( (_BYTE)result != 92 && (_BYTE)result != 94 )
          goto LABEL_21;
        v2 ^= 1u;
      }
      else
      {
        if ( (_BYTE)result != 39 )
        {
          if ( (_BYTE)result == 58 )
          {
LABEL_16:
            if ( v2 )
            {
              if ( qword_60F340 == qword_60F338 )
              {
                obstack_newchunk(&unk_60F320, 1LL, qword_60F338, qword_60F340);
                v8 = (_BYTE *)qword_60F338;
              }
              qword_60F338 = (__int64)(v8 + 1);
              *v8 = 92;
              v7 = qword_60F340;
              v8 = (_BYTE *)qword_60F338;
              if ( qword_60F340 != qword_60F338 )
                goto LABEL_11;
LABEL_20:
              obstack_newchunk(&unk_60F320, 1LL, v8, v7);
              v8 = (_BYTE *)qword_60F338;
              goto LABEL_11;
            }
          }
LABEL_21:
          v2 = 1;
          goto LABEL_10;
        }
        if ( qword_60F340 == qword_60F338 )
        {
          obstack_newchunk(&unk_60F320, 1LL, qword_60F338, qword_60F340);
          v8 = (_BYTE *)qword_60F338;
        }
        qword_60F338 = (__int64)(v8 + 1);
        *v8 = 39;
        v4 = (_BYTE *)qword_60F338;
        if ( qword_60F340 == qword_60F338 )
        {
          obstack_newchunk(&unk_60F320, 1LL, v8, v7);
          v4 = (_BYTE *)qword_60F338;
        }
        v5 = (signed __int64)(v4 + 1);
        qword_60F338 = (__int64)(v4 + 1);
        *v4 = 92;
        v6 = (_BYTE *)qword_60F338;
        if ( qword_60F340 == qword_60F338 )
        {
          obstack_newchunk(&unk_60F320, 1LL, v5, v7);
          v6 = (_BYTE *)qword_60F338;
        }
        v2 = 1;
        qword_60F338 = (__int64)(v6 + 1);
        *v6 = 39;
        v7 = qword_60F340;
        v8 = (_BYTE *)qword_60F338;
      }
LABEL_10:
      if ( (_BYTE *)v7 == v8 )
        goto LABEL_20;
LABEL_11:
      ++v3;
      qword_60F338 = (__int64)(v8 + 1);
      *v8 = *(v3 - 1);
      result = *v3;
    }
    while ( (_BYTE)result );
  }
  return result;
}

__int64 __fastcall sub_402480(FILE *stream, __int64 a2)
{
  FILE *v2; // r14@1
  char *v3; // rax@1
  char *v4; // rbx@2
  bool v5; // zf@2
  const char *v6; // rax@2
  signed int v7; // er15@5
  char *v8; // r12@5
  __int64 v9; // rbp@5
  char *v10; // rbx@8
  const unsigned __int16 **v11; // rax@9
  const unsigned __int16 *v12; // rsi@9
  __int64 v13; // rcx@10
  char *v14; // r13@13
  _BYTE *v15; // rax@15
  _BYTE *v16; // rbx@15
  const unsigned __int16 *v17; // rdi@16
  __int64 v18; // rax@17
  char *v19; // rax@19
  signed __int64 i; // rsi@22
  _BYTE *v21; // rax@24
  _BYTE *v22; // r13@24
  __int64 v23; // rdx@26
  __int64 v24; // rcx@26
  char v25; // al@29
  __int64 v26; // rax@39
  __int64 v27; // r13@39
  char *v28; // rax@39
  _BYTE *v29; // rax@44
  __int64 v30; // rdx@46
  __int64 v31; // rcx@46
  _BYTE *v32; // rax@46
  __int64 v33; // rdx@48
  __int64 v34; // rcx@48
  _BYTE *v35; // rax@48
  __int64 v37; // rdx@55
  __int64 v38; // rcx@55
  _BYTE *v39; // rax@56
  signed __int64 v40; // rdx@60
  const char *v41; // rsi@60
  __int64 v42; // rdx@62
  __int64 v43; // rcx@62
  char *v44; // rdx@65
  _BYTE *v45; // rax@65
  __int64 v46; // rcx@65
  _BYTE *v47; // rax@67
  char *v48; // rax@71
  char *v49; // rcx@71
  char *v50; // ST00_8@72
  char *v51; // rax@72
  char *v52; // ST00_8@66
  const unsigned __int16 **v53; // [sp+0h] [bp-68h]@15
  signed __int64 v54; // [sp+0h] [bp-68h]@62
  __int64 v55; // [sp+8h] [bp-60h]@1
  const char *v56; // [sp+10h] [bp-58h]@4
  char v57; // [sp+1Bh] [bp-4Dh]@5
  int v58; // [sp+1Ch] [bp-4Ch]@62
  char *lineptr; // [sp+20h] [bp-48h]@1
  size_t n; // [sp+28h] [bp-40h]@1

  v2 = stream;
  v55 = a2;
  lineptr = 0LL;
  n = 0LL;
  v3 = getenv("TERM");
  if ( v3 )
  {
    v4 = v3;
    v5 = *v3 == 0;
    v6 = "none";
    if ( !v5 )
      v6 = v4;
    v56 = v6;
  }
  else
  {
    v56 = "none";
  }
  v57 = 1;
  v7 = 3;
  v8 = "# Configuration file for dircolors, a utility to help you set the";
  v9 = 0LL;
LABEL_6:
  ++v9;
  if ( !v2 )
  {
    while ( 1 )
    {
      if ( v8 == "8.29" )
        return (unsigned __int8)v57;
      v10 = v8;
      v8 += strlen(v8) + 1;
LABEL_9:
      v11 = __ctype_b_loc();
      v12 = *v11;
      while ( 1 )
      {
        v13 = (unsigned __int8)*v10;
        if ( !(HIBYTE(v12[v13]) & 0x20) )
          break;
        ++v10;
      }
      if ( !(_BYTE)v13 || (_BYTE)v13 == 35 )
        goto LABEL_6;
      v14 = v10;
      do
        ++v14;
      while ( (unsigned __int8)((v12[(unsigned __int8)*v14] >> 13) ^ 1) & (*v14 != 0) );
      v53 = v11;
      LODWORD(v15) = sub_405580(v10, v14 - v10);
      v16 = v15;
      if ( !*v14 )
        goto LABEL_76;
      v17 = *v53;
      do
        v18 = (unsigned __int8)*++v14;
      while ( HIBYTE(v17[v18]) & 0x20 );
      if ( !(_BYTE)v18 || (v19 = v14, *v14 == 35) )
      {
LABEL_76:
        if ( !v16 )
          goto LABEL_6;
LABEL_39:
        LODWORD(v26) = sub_404BB0(0LL, 3LL, v55);
        v27 = v26;
        v28 = dcgettext(0LL, "%s:%lu: invalid line;  missing second token", 5);
        error(0, 0, v28, v27, v9, v53);
        free(v16);
        v57 = 0;
        goto LABEL_6;
      }
      while ( 1 )
      {
        i = (signed __int64)(v19 + 1);
        if ( v19[1] == 35 || v19[1] == 0 )
          break;
        ++v19;
      }
      if ( HIBYTE(v17[(unsigned __int8)*v19]) & 0x20 )
      {
        for ( i = (signed __int64)v19; HIBYTE(v17[*(_BYTE *)(i - 1)]) & 0x20; --i )
          ;
      }
      LODWORD(v21) = sub_405580(v14, i - (_QWORD)v14);
      v22 = v21;
      if ( !v16 )
        goto LABEL_6;
      if ( !v21 )
        goto LABEL_39;
      if ( !sub_402D60(v16, "TERM") )
      {
        if ( !sub_407910(v22, v56, 0LL) || (v5 = v7 == 2, v7 = 0, v5) )
          v7 = 2;
        goto LABEL_34;
      }
      if ( v7 == 2 )
        break;
      if ( v7 )
      {
        v25 = *v16;
        if ( *v16 != 46 )
          goto LABEL_30;
LABEL_44:
        v29 = (_BYTE *)qword_60F338;
        if ( qword_60F340 == qword_60F338 )
        {
          obstack_newchunk(&unk_60F320, 1LL, v23, v24);
          v29 = (_BYTE *)qword_60F338;
        }
        qword_60F338 = (__int64)(v29 + 1);
        *v29 = 42;
        sub_402290(v16);
        v32 = (_BYTE *)qword_60F338;
        if ( qword_60F340 == qword_60F338 )
        {
          obstack_newchunk(&unk_60F320, 1LL, v30, v31);
          v32 = (_BYTE *)qword_60F338;
        }
        qword_60F338 = (__int64)(v32 + 1);
        *v32 = 61;
        sub_402290(v22);
        v35 = (_BYTE *)qword_60F338;
        if ( qword_60F340 != qword_60F338 )
        {
LABEL_49:
          qword_60F338 = (__int64)(v35 + 1);
          *v35 = 58;
          goto LABEL_34;
        }
LABEL_58:
        obstack_newchunk(&unk_60F320, 1LL, v33, v34);
LABEL_57:
        v35 = (_BYTE *)qword_60F338;
        goto LABEL_49;
      }
LABEL_34:
      ++v9;
      free(v16);
      free(v22);
      if ( v2 )
        goto LABEL_7;
    }
    v25 = *v16;
    v7 = 1;
    if ( *v16 == 46 )
      goto LABEL_44;
LABEL_30:
    if ( v25 == 42 )
    {
      sub_402290(v16);
      if ( qword_60F340 != qword_60F338 )
        goto LABEL_56;
    }
    else
    {
      if ( !sub_402D60(v16, "OPTIONS") || !sub_402D60(v16, "COLOR") || !sub_402D60(v16, "EIGHTBIT") )
        goto LABEL_34;
      v40 = 0LL;
      v41 = "NORMAL";
      while ( 1 )
      {
        v58 = v40;
        v54 = v40;
        if ( !sub_402D60(v16, v41) )
          break;
        v40 = v54 + 1;
        v41 = off_409FC0[v54 + 1];
        if ( !v41 )
        {
          if ( v7 != 3 )
          {
            if ( v55 )
            {
              LODWORD(v48) = sub_404BB0(0LL, 3LL, v55);
              v49 = v48;
            }
            else
            {
              v49 = dcgettext(0LL, "<internal>", 5);
            }
            v50 = v49;
            v51 = dcgettext(0LL, "%s:%lu: unrecognized keyword %s", 5);
            error(0, 0, v51, v50, v9, v16, v50);
            v57 = 0;
          }
          goto LABEL_34;
        }
      }
      if ( qword_60F340 == qword_60F338 )
        obstack_newchunk(&unk_60F320, 1LL, v42, v43);
      v44 = off_409E80[v58];
      v45 = (_BYTE *)qword_60F338++;
      v46 = (unsigned __int8)*v44;
      *v45 = v46;
      if ( qword_60F340 == qword_60F338 )
      {
        v52 = v44;
        obstack_newchunk(&unk_60F320, 1LL, v44, v46);
        v44 = v52;
      }
      v47 = (_BYTE *)qword_60F338;
      v38 = qword_60F338++ + 1;
      v37 = (unsigned __int8)v44[1];
      *v47 = v37;
      if ( qword_60F340 != qword_60F338 )
        goto LABEL_56;
    }
    obstack_newchunk(&unk_60F320, 1LL, v37, v38);
LABEL_56:
    v39 = (_BYTE *)qword_60F338++;
    *v39 = 61;
    sub_402290(v22);
    if ( qword_60F340 == qword_60F338 )
      goto LABEL_58;
    goto LABEL_57;
  }
LABEL_7:
  if ( __getdelim(&lineptr, &n, 10, v2) > 0 )
  {
    v10 = lineptr;
    goto LABEL_9;
  }
  free(lineptr);
  return (unsigned __int8)v57;
}

noreturn void __fastcall  sub_402A50(int status)
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
  __int64 *v13; // rax@4
  _BYTE *v14; // rdi@5
  bool v15; // cf@5
  bool v16; // zf@5
  const char *v17; // rsi@6
  signed __int64 v18; // rcx@6
  const char *v19; // rbp@10
  char *v20; // rax@11
  char *v21; // rax@11
  char *v22; // rax@13
  char *v23; // rax@14
  char *v24; // rax@15
  char *v25; // rax@15
  char *v26; // rax@17
  char *v27; // rax@19
  const char *v28; // [sp+0h] [bp-88h]@4
  const char *v29; // [sp+8h] [bp-80h]@4
  const char *v30; // [sp+10h] [bp-78h]@4
  const char *v31; // [sp+18h] [bp-70h]@4
  const char *v32; // [sp+20h] [bp-68h]@4
  const char *v33; // [sp+28h] [bp-60h]@4
  const char *v34; // [sp+30h] [bp-58h]@4
  const char *v35; // [sp+38h] [bp-50h]@4
  const char *v36; // [sp+40h] [bp-48h]@4
  const char *v37; // [sp+48h] [bp-40h]@4
  const char *v38; // [sp+50h] [bp-38h]@4
  const char *v39; // [sp+58h] [bp-30h]@4
  __int64 v40; // [sp+60h] [bp-28h]@4
  __int64 v41; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_60F388;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]\n", 5);
  __printf_chk(1LL, v4, v2);
  v5 = stdout;
  v6 = dcgettext(
         0LL,
         "Output commands to set the LS_COLORS environment variable.\n"
         "\n"
         "Determine format of output:\n"
         "  -b, --sh, --bourne-shell    output Bourne shell code to set LS_COLORS\n"
         "  -c, --csh, --c-shell        output C shell code to set LS_COLORS\n"
         "  -p, --print-database        output defaults\n",
         5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "\n"
          "If FILE is specified, read it to determine which colors to use for which\n"
          "file types and extensions.  Otherwise, a precompiled database is used.\n"
          "For details on the format of these files, run 'dircolors --print-database'.\n",
          5);
  fputs_unlocked(v12, v11);
  v28 = "[";
  v13 = (__int64 *)&v28;
  v29 = "test invocation";
  v30 = "coreutils";
  v31 = "Multi-call invocation";
  v32 = "sha224sum";
  v33 = "sha2 utilities";
  v34 = "sha256sum";
  v35 = "sha2 utilities";
  v36 = "sha384sum";
  v37 = "sha2 utilities";
  v38 = "sha512sum";
  v39 = "sha2 utilities";
  v40 = 0LL;
  v41 = 0LL;
  do
  {
    v13 += 2;
    v14 = (_BYTE *)*v13;
    v15 = 0;
    v16 = *v13 == 0;
    if ( !*v13 )
      break;
    v17 = "dircolors";
    v18 = 10LL;
    do
    {
      if ( !v18 )
        break;
      v15 = (const unsigned __int8)*v17 < *v14;
      v16 = *v17++ == *v14++;
      --v18;
    }
    while ( v16 );
  }
  while ( (!v15 && !v16) != v15 );
  v19 = (const char *)v13[1];
  if ( v19 )
  {
    v20 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v20, &unk_4096B5);
    v21 = setlocale(5, 0LL);
    if ( !v21 || !strncmp(v21, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v24 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v24, &unk_4096B5);
    v25 = setlocale(5, 0LL);
    if ( !v25 || !strncmp(v25, "en_", 3uLL) )
    {
      v19 = "dircolors";
      v26 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v26, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v19 = "dircolors";
  }
  v27 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v27, "dircolors");
LABEL_13:
  v22 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v22, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v23 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v23, v19);
LABEL_3:
  exit(v1);
}

__int64 __fastcall sub_402D60(__int64 a1, __int64 a2)
{
  __int64 result; // rax@1
  __int64 v3; // rdx@2
  int v4; // er8@4
  char v5; // al@4
  int v6; // er9@6
  char v7; // cl@6

  result = 0LL;
  if ( a1 != a2 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_BYTE *)(a1 + v3);
      v5 = *(_BYTE *)(a1 + v3);
      if ( (unsigned int)(v4 - 65) <= 0x19 )
      {
        LOBYTE(v4) = v4 + 32;
        v5 += 32;
      }
      v6 = *(_BYTE *)(a2 + v3);
      v7 = *(_BYTE *)(a2 + v3);
      if ( (unsigned int)(v6 - 65) <= 0x19 )
      {
        LOBYTE(v6) = v6 + 32;
        v7 += 32;
      }
      if ( !v5 )
        break;
      ++v3;
    }
    while ( v5 == v7 );
    result = (unsigned __int8)v4 - (unsigned int)(unsigned __int8)v6;
  }
  return result;
}

__int64 sub_402DE0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_408EE0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60F378 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60F380 )
      {
        LODWORD(v5) = sub_404B80(qword_60F380, "write error");
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
  result = sub_408EE0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

_BYTE *__fastcall sub_402E80(_BYTE *a1)
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

__int64 __fastcall sub_402F10(int a1)
{
  signed int v1; // ebx@1
  int v2; // eax@1
  __int64 result; // rax@3

  v1 = 1;
  v2 = open("/dev/null", 0);
  if ( a1 != v2 && (v1 = 0, v2 >= 0) )
  {
    close(v2);
    *__errno_location() = 9;
    result = 0LL;
  }
  else
  {
    result = (unsigned int)v1;
  }
  return result;
}

__int64 __fastcall sub_402F60(__int64 a1, __int64 a2, FILE *a3)
{
  FILE *v3; // r12@1
  int v4; // ebx@1
  int *v5; // r14@1
  char v6; // bl@4
  char v7; // bp@5
  char v8; // r13@7
  __int64 v9; // rax@11
  __int64 v10; // r12@11
  int v11; // er15@12

  v3 = a3;
  v4 = fileno(a3);
  v5 = __errno_location();
  if ( v4 == 1 )
  {
    v6 = 0;
    v7 = 0;
  }
  else
  {
    if ( v4 == 2 )
    {
      v6 = 0;
    }
    else
    {
      if ( !v4 )
      {
        v6 = 0;
        v7 = 0;
        v8 = 0;
LABEL_11:
        LODWORD(v9) = sub_407B50(a1, a2, v3);
        v10 = v9;
        goto LABEL_12;
      }
      v6 = dup2(2, 2) != 2;
    }
    v7 = dup2(1, 1) != 1;
  }
  if ( !dup2(0, 0) )
  {
    v8 = 0;
    if ( !v7 )
      goto LABEL_9;
    goto LABEL_18;
  }
  v8 = sub_402F10(0);
  if ( !v8 )
  {
    v8 = 1;
    v10 = 0LL;
LABEL_12:
    v11 = *v5;
    if ( !v6 )
      goto LABEL_13;
    goto LABEL_27;
  }
  if ( v7 )
  {
LABEL_18:
    v7 = sub_402F10(1);
    if ( !v7 )
    {
      v11 = *v5;
      v10 = 0LL;
      if ( v6 )
        close(2);
      goto LABEL_21;
    }
  }
LABEL_9:
  if ( !v6 )
    goto LABEL_11;
  v6 = sub_402F10(2);
  if ( v6 )
    goto LABEL_11;
  v11 = *v5;
  v10 = 0LL;
LABEL_27:
  close(2);
LABEL_13:
  if ( !v7 )
  {
    if ( !v8 )
      goto LABEL_15;
LABEL_22:
    close(0);
    if ( v10 )
      return v10;
LABEL_23:
    *v5 = v11;
    return v10;
  }
LABEL_21:
  close(1);
  if ( v8 )
    goto LABEL_22;
LABEL_15:
  if ( !v10 )
    goto LABEL_23;
  return v10;
}

char *__fastcall sub_403110(const char *a1)
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
  qword_60F388 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_4031B0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  const char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  LODWORD(v4) = sub_408FA0(0LL);
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
      return v2;
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
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "setenv LS_COLORS '" + 17;
  return v6;
}

unsigned __int64 __fastcall sub_4032B0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  const char *v66; // rax@277
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
  const char *s2; // [sp+50h] [bp-78h]@2
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
        s2 = "setenv LS_COLORS '" + 17;
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
        a8 = sub_4031B0("`", v11);
        v58 = sub_4031B0("'", v11);
        v14 = v67;
        a9 = (char *)v58;
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
      s2 = "setenv LS_COLORS '" + 17;
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
        s2 = "setenv LS_COLORS '" + 17;
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
        s2 = "setenv LS_COLORS '" + 17;
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
            return sub_4032B0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_4032B0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "setenv LS_COLORS '" + 17;
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
                return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
          return sub_4032B0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_4032B0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_408A20((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_4032B0((__int64)v9, v10, s);
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
      return sub_4032B0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_4032B0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  const char *v66; // rax@277
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
  const char *s2; // [sp+50h] [bp-78h]@2
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
        s2 = "setenv LS_COLORS '" + 17;
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
        a8 = sub_4031B0("`", v11);
        v58 = sub_4031B0("'", v11);
        v14 = v67;
        a9 = (char *)v58;
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
      s2 = "setenv LS_COLORS '" + 17;
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
        s2 = "setenv LS_COLORS '" + 17;
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
        s2 = "setenv LS_COLORS '" + 17;
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
            return sub_4032B0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_4032B0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "setenv LS_COLORS '" + 17;
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
                return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
          return sub_4032B0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_4032B0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_408A20((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_4032B0((__int64)v9, v10, s);
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
      return sub_4032B0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_4044E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F298;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405540();
    v9 = 16LL * (a1 + 1);
    if ( off_60F298 == &xmmword_60F2A0 )
    {
      LODWORD(v20) = sub_405350(0LL, v9);
      v7 = v20;
      off_60F298 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F2A0);
    }
    else
    {
      LODWORD(v10) = sub_405350(off_60F298, v9);
      off_60F298 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60F2B0], 0, 16LL * (a1 + 1 - dword_60F2B0));
    dword_60F2B0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_4032B0(
          v12,
          *(_QWORD *)v11,
          v21,
          v4,
          *(_DWORD *)v5,
          v23,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60F3A0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4052F0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_4032B0(v17, v15, v21, v4, v18, v23, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4044E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F298;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405540();
    v9 = 16LL * (a1 + 1);
    if ( off_60F298 == &xmmword_60F2A0 )
    {
      LODWORD(v20) = sub_405350(0LL, v9);
      v7 = v20;
      off_60F298 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F2A0);
    }
    else
    {
      LODWORD(v10) = sub_405350(off_60F298, v9);
      off_60F298 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60F2B0], 0, 16LL * (a1 + 1 - dword_60F2B0));
    dword_60F2B0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_4032B0(
          v12,
          *(_QWORD *)v11,
          v21,
          v4,
          *(_DWORD *)v5,
          v23,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60F3A0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4052F0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_4032B0(v17, v15, v21, v4, v18, v23, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_404B00(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60F4D0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60F4A0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60F4B0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60F4C0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_4044E0(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_404B80(char *a1)
{
  return sub_404B00(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_404BB0(int a1, int a2, char *a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404BB0(int a1, int a2, char *a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404D30(char *a1)
{
  return sub_4044E0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60F260);
}

int __fastcall sub_404D50(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_404D50(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_4051B0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_404D50(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_404D50(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_4052F0(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405540();
  }
  return result;
}

void *__fastcall sub_405350(void *a1, size_t a2)
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
        sub_405540();
    }
  }
  return result;
}

void *__fastcall sub_4054F0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_4052F0(a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_405540()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

char *__fastcall sub_405580(const char *a1, size_t a2)
{
  char *result; // rax@1

  result = strndup(a1, a2);
  if ( !result )
    sub_405540();
  return result;
}

int __fastcall sub_4055A0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_405620(stream) )
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

int __fastcall sub_405620(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_407BF0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

signed __int64 __fastcall sub_405660(__int64 a1)
{
  signed __int64 v1; // r12@1
  __int64 v2; // rbx@1
  int v3; // edx@2
  unsigned __int64 v4; // rcx@4
  int v6; // edx@12
  __int64 v7; // rax@22

  v1 = 3221227009LL;
  v2 = a1;
LABEL_2:
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    if ( !v3 )
      return a1;
    while ( v3 != 91 )
    {
      v4 = (unsigned int)(v3 - 33);
      if ( (unsigned int)v4 <= 0x1F )
      {
        if ( _bittest64(&v1, v4) && *(_DWORD *)(v2 + 8) == 40 )
        {
          LODWORD(v7) = sub_405660(v2 + 8);
          v2 = v7;
          goto LABEL_2;
        }
        if ( v3 == 41 )
          return v2 + 8;
      }
      v2 += 4LL;
      v3 = *(_DWORD *)(v2 + 4);
      if ( !v3 )
        return a1;
    }
    if ( !dword_60F4D8 )
      dword_60F4D8 = -((unsigned __int64)getenv("POSIXLY_CORRECT") < 1) | 1;
    v6 = *(_DWORD *)(v2 + 8);
    if ( v6 == 33 || dword_60F4D8 < 0 && v6 == 94 )
    {
      v6 = *(_DWORD *)(v2 + 12);
      v2 += 12LL;
    }
    else
    {
      v2 += 8LL;
    }
    if ( v6 == 93 )
    {
      v6 = *(_DWORD *)(v2 + 4);
      v2 += 4LL;
    }
    while ( v6 != 93 )
    {
      if ( !v6 )
        return a1;
      v6 = *(_DWORD *)(v2 + 4);
      v2 += 4LL;
    }
  }
}

signed __int64 __fastcall sub_405760(__int64 a1)
{
  signed __int64 v1; // r12@1
  __int64 v2; // rbx@1
  int v3; // edx@2
  char v5; // dl@12
  __int64 v6; // rax@22

  v1 = 3221227009LL;
  v2 = a1;
LABEL_2:
  while ( 1 )
  {
    v3 = *(_BYTE *)(v2 + 1);
    if ( !(_BYTE)v3 )
      return a1;
    while ( (_BYTE)v3 != 91 )
    {
      if ( (unsigned __int8)(v3 - 33) <= 0x1Fu )
      {
        if ( _bittest64(&v1, (unsigned int)(v3 - 33)) && *(_BYTE *)(v2 + 2) == 40 )
        {
          LODWORD(v6) = sub_405760(v2 + 2);
          v2 = v6;
          goto LABEL_2;
        }
        if ( (_BYTE)v3 == 41 )
          return v2 + 2;
      }
      v3 = *(_BYTE *)(++v2 + 1);
      if ( !(_BYTE)v3 )
        return a1;
    }
    if ( !dword_60F4D8 )
      dword_60F4D8 = -((unsigned __int64)getenv("POSIXLY_CORRECT") < 1) | 1;
    v5 = *(_BYTE *)(v2 + 2);
    if ( v5 == 33 || dword_60F4D8 < 0 && v5 == 94 )
    {
      v5 = *(_BYTE *)(v2 + 3);
      v2 += 3LL;
    }
    else
    {
      v2 += 2LL;
    }
    if ( v5 == 93 )
      v5 = *(_BYTE *)(v2++ + 1);
    while ( v5 != 93 )
    {
      if ( !v5 )
        return a1;
      v5 = *(_BYTE *)(v2++ + 1);
    }
  }
}

signed __int64 __fastcall sub_405860(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned int v6; // er12@1
  signed int v7; // eax@1
  signed __int64 v8; // r14@2
  const wchar_t *v9; // rsi@2
  __int64 *v10; // rbx@2
  signed __int64 v11; // r15@2
  __int64 v12; // r13@2
  unsigned __int64 v13; // rdx@8
  signed __int64 result; // rax@14
  wchar_t v15; // eax@19
  signed __int64 v16; // rdx@22
  unsigned __int64 v17; // rdx@30
  unsigned __int64 v18; // rax@32
  void *v19; // rsp@34
  wchar_t *v20; // rax@34
  char *v21; // rax@18
  _QWORD *v22; // r13@35
  __int64 v23; // rbx@35
  unsigned __int64 v24; // rax@37
  void *v25; // rsp@39
  __int64 v26; // r13@39
  unsigned __int64 v27; // r14@43
  unsigned int v28; // er12@43
  signed __int64 v29; // rax@45
  unsigned __int64 v30; // rbx@45
  unsigned __int64 v31; // r15@47
  __int64 v32; // rcx@48
  __int64 v33; // rcx@51
  unsigned __int64 v34; // r15@61
  unsigned __int64 v35; // r14@61
  unsigned int v36; // ebx@61
  _QWORD *v37; // r13@63
  __int64 v38; // rcx@67
  unsigned __int64 v39; // r15@73
  unsigned int v40; // ebx@73
  wchar_t *v41; // rax@77
  const wchar_t *v42; // [sp+8h] [bp-78h]@18
  signed __int64 v43; // [sp+8h] [bp-78h]@45
  __int64 v44; // [sp+8h] [bp-78h]@53
  __int64 v45; // [sp+10h] [bp-70h]@2
  unsigned __int64 v46; // [sp+18h] [bp-68h]@1
  unsigned __int8 v47; // [sp+23h] [bp-5Dh]@1
  unsigned int v48; // [sp+24h] [bp-5Ch]@1
  unsigned __int64 v49; // [sp+28h] [bp-58h]@1
  __int64 v50; // [sp+30h] [bp-50h]@1
  size_t v51; // [sp+38h] [bp-48h]@1
  __int64 v52; // [sp+48h] [bp-38h]@1

  LOBYTE(v6) = a5;
  LODWORD(v50) = a1;
  v46 = a3;
  v49 = a4;
  v48 = a6;
  v47 = a5;
  v52 = 0LL;
  v51 = wcslen((const wchar_t *)a2);
  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 )
  {
    v8 = a2 + 4;
    v45 = a2;
    v9 = (const wchar_t *)(a2 + 4);
    v10 = &v52;
    v11 = 3221227009LL;
    v12 = 0LL;
    while ( 2 )
    {
      while ( v7 == 91 )
      {
        if ( !dword_60F4D8 )
        {
          v42 = v9;
          v21 = getenv("POSIXLY_CORRECT");
          v9 = v42;
          dword_60F4D8 = -((unsigned __int64)v21 < 1) | 1;
        }
        v15 = *(_DWORD *)(v8 + 4);
        if ( v15 == 33 || dword_60F4D8 < 0 && v15 == 94 )
        {
          v16 = v8 + 8;
          v15 = *(_DWORD *)(v8 + 8);
        }
        else
        {
          v16 = v8 + 4;
        }
        if ( v15 == 93 )
        {
          v15 = *(_DWORD *)(v16 + 4);
          v16 += 4LL;
        }
        while ( 1 )
        {
          v8 = v16 + 4;
          if ( v15 == 93 )
            break;
          if ( !v15 )
            goto LABEL_14;
          v15 = *(_DWORD *)v8;
          v16 += 4LL;
        }
        v7 = *(_DWORD *)(v16 + 4);
LABEL_6:
        if ( !v7 )
          goto LABEL_14;
      }
      while ( 1 )
      {
        v13 = (unsigned int)(v7 - 33);
        if ( (unsigned int)v13 > 0x1F )
        {
          if ( v7 != 124 || v12 )
          {
LABEL_5:
            v7 = *(_DWORD *)(v8 + 4);
            v8 += 4LL;
            goto LABEL_6;
          }
          v17 = v51;
          if ( (unsigned int)(v50 - 63) > 1 )
            v17 = ((v8 - (signed __int64)v9) >> 2) + 1;
          v18 = (4 * v17 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v18 - 8 <= 0x1F37 && v17 <= 0x3FFFFFFFFFFFFFFFLL )
          {
            v19 = alloca(v18 + 8);
            v20 = wmempcpy(
                    (wchar_t *)((((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8),
                    v9,
                    (v8 - (signed __int64)v9) >> 2);
            v9 = (const wchar_t *)(v8 + 4);
            *v20 = 0;
            v7 = *(_DWORD *)(v8 + 4);
            v8 += 4LL;
            *(_QWORD *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
            *v10 = ((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL;
            v10 = (__int64 *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL);
            v12 = 0LL;
            goto LABEL_6;
          }
          goto LABEL_14;
        }
        if ( !_bittest64(&v11, v13) || *(_DWORD *)(v8 + 4) != 40 )
          break;
        ++v12;
        v8 += 4LL;
        v7 = 40;
      }
      if ( v7 != 41 )
        goto LABEL_5;
      if ( v12 )
      {
        v7 = *(_DWORD *)(v8 + 4);
        --v12;
        v8 += 4LL;
        if ( !v7 )
          goto LABEL_14;
        continue;
      }
      break;
    }
    v22 = v10;
    v23 = v45;
    if ( (unsigned int)(v50 - 63) > 1 )
      v51 = ((v8 - (signed __int64)v9) >> 2) + 1;
    v24 = (4 * v51 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v24 - 8 > 0x1F37 || v51 > 0x3FFFFFFFFFFFFFFFLL )
      goto LABEL_14;
    v25 = alloca(v24 + 8);
    *wmempcpy(
       (wchar_t *)((((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8),
       v9,
       (v8 - (signed __int64)v9) >> 2) = 0;
    *v22 = ((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL;
    v26 = v52;
    *(_QWORD *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
    if ( !v26 )
      __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_wmatch");
    if ( *(_DWORD *)(v8 - 4) != 41 )
      __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_wmatch");
    switch ( (_DWORD)v50 )
    {
      case 0x2A:
        if ( sub_405DF0(v8, v46, v49, (unsigned __int8)v6, v48) )
          goto LABEL_43;
        return 0LL;
      case 0x2B:
LABEL_43:
        v45 = v8;
        v27 = v46;
        v28 = v48 & 0xFFFFFFFB;
        if ( v48 & 1 )
          v28 = v48;
        v29 = v23 - 4;
        LODWORD(v50) = v48 & 1;
        v30 = v49;
        v43 = v29;
        do
        {
          if ( v27 <= v30 )
          {
            v31 = v27;
            LODWORD(v51) = v47;
            do
            {
              if ( !sub_405DF0(v26 + 8, v27, v31, (unsigned int)v51, v28) )
              {
                if ( v27 == v31 )
                {
                  if ( !sub_405DF0(v45, v27, v30, (unsigned int)v51, v28) )
                    return 0LL;
                }
                else
                {
                  v32 = 0LL;
                  if ( *(_DWORD *)(v31 - 4) == 47 )
                    v32 = (v48 & 5) == 5;
                  if ( !sub_405DF0(v45, v31, v30, v32, v28) )
                    return 0LL;
                  v33 = 0LL;
                  if ( *(_DWORD *)(v31 - 4) == 47 )
                    v33 = (v48 & 5) == 5;
                  if ( !sub_405DF0(v44, v31, v30, v33, v28) )
                    return 0LL;
                }
                v26 = v52;
              }
              v31 += 4LL;
            }
            while ( v30 >= v31 );
          }
          v26 = *(_QWORD *)v26;
          v52 = v26;
        }
        while ( v26 );
        goto LABEL_71;
      case 0x21:
        if ( v46 > v49 )
          goto LABEL_71;
        v34 = v46;
        v51 = v26;
        v6 = (unsigned __int8)v6;
        v50 = v8;
        v35 = v46;
        v36 = v48 & 0xFFFFFFFB;
        if ( v48 & 1 )
          v36 = v48;
        break;
      case 0x40:
        v6 = (unsigned __int8)v6;
        goto LABEL_73;
      case 0x3F:
        v6 = (unsigned __int8)v6;
        if ( sub_405DF0(v8, v46, v49, (unsigned __int8)v6, v48) )
        {
LABEL_73:
          v39 = v46;
          v40 = v48 & 0xFFFFFFFB;
          if ( v48 & 1 )
            v40 = v48;
          while ( 1 )
          {
            v41 = wcscat((wchar_t *)(v26 + 8), (const wchar_t *)v8);
            if ( !sub_405DF0(v41, v39, v49, v6, v40) )
              break;
            v26 = *(_QWORD *)v26;
            v52 = v26;
            if ( !v26 )
              goto LABEL_71;
          }
          result = 0LL;
        }
        else
        {
          result = 0LL;
        }
        return result;
      default:
        __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_wmatch");
        return result;
    }
    do
    {
      v37 = (_QWORD *)v51;
      while ( sub_405DF0(v37 + 1, v34, v35, v6, v36) )
      {
        v37 = (_QWORD *)*v37;
        if ( !v37 )
        {
          if ( v34 == v35 )
          {
            v38 = v6;
          }
          else
          {
            v38 = 0LL;
            if ( *(_DWORD *)(v35 - 4) == 47 )
              v38 = (v48 & 5) == 5;
          }
          if ( !sub_405DF0(v50, v35, v49, v38, v36) )
            return 0LL;
          break;
        }
      }
      v35 += 4LL;
    }
    while ( v49 >= v35 );
LABEL_71:
    result = 1LL;
  }
  else
  {
LABEL_14:
    result = 0xFFFFFFFFLL;
  }
  return result;
}

signed __int64 __fastcall sub_405DF0(wint_t *a1, wint_t *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  wint_t *v5; // r14@1
  wint_t *v6; // rbx@1
  wint_t v7; // er15@1
  unsigned __int8 v8; // r10@2
  int v9; // er12@2
  int v10; // er13@2
  signed __int64 v11; // rbp@2
  unsigned __int8 v12; // ST1C_1@4
  wint_t v13; // eax@4
  wint_t v14; // eax@10
  wint_t v15; // er8@14
  int v16; // eax@17
  signed int *v17; // r14@20
  wint_t *v18; // r15@23
  signed int v19; // eax@23
  wint_t v20; // ebx@23
  signed int v21; // er14@31
  signed __int64 i; // rsi@34
  wint_t v23; // edx@35
  signed int *v24; // rsi@37
  bool v25; // di@41
  wint_t v26; // eax@50
  signed __int64 result; // rax@58
  signed __int64 v28; // rax@64
  int v29; // ebp@64
  wint_t *v30; // r14@64
  signed __int64 v31; // r13@64
  wint_t v32; // er11@68
  wint_t *v33; // r15@68
  bool v34; // dl@70
  wint_t *v35; // rax@74
  wchar_t *v36; // rax@78
  wint_t v37; // er11@78
  wchar_t *v38; // r9@78
  unsigned __int8 v39; // r10@78
  wchar_t *v40; // ST08_8@86
  wint_t v41; // eax@86
  signed __int64 v42; // r15@87
  wint_t v43; // er12@88
  unsigned int v44; // er14@88
  wint_t *v45; // r13@88
  unsigned __int64 v46; // rbx@88
  wint_t v47; // eax@90
  signed __int64 v48; // r14@104
  __int64 v49; // rdx@104
  int v50; // eax@107
  unsigned __int8 v51; // ST10_1@118
  bool v52; // ST08_1@118
  unsigned __int8 v53; // ST1C_1@12
  char *v54; // rax@12
  unsigned __int64 v55; // rax@132
  signed __int64 v56; // rdx@133
  unsigned int v57; // eax@135
  signed __int64 v58; // r15@137
  unsigned int v59; // ebp@137
  unsigned __int64 v60; // r12@138
  unsigned __int64 v61; // rcx@143
  unsigned __int8 v62; // ST1C_1@146
  signed int *v63; // r8@152
  signed int v64; // edx@152
  signed __int64 v65; // rbp@157
  int v66; // eax@161
  signed __int64 v67; // rax@176
  signed __int64 v68; // rbp@176
  char *v69; // rsi@182
  int *v70; // rdx@182
  int v71; // eax@182
  wctype_t v72; // rax@206
  signed __int64 v73; // r9@209
  __int64 v74; // [sp+8h] [bp-580h]@1
  wint_t *v75; // [sp+8h] [bp-580h]@88
  unsigned __int64 wc; // [sp+10h] [bp-578h]@2
  wint_t wca; // [sp+10h] [bp-578h]@78
  unsigned __int8 wcb; // [sp+10h] [bp-578h]@143
  unsigned int v79; // [sp+18h] [bp-570h]@1
  signed int v80; // [sp+1Ch] [bp-56Ch]@20
  unsigned __int8 v81; // [sp+1Ch] [bp-56Ch]@78
  wint_t v82; // [sp+1Ch] [bp-56Ch]@118
  int v83; // [sp+20h] [bp-568h]@2
  wint_t v84; // [sp+24h] [bp-564h]@23
  char property; // [sp+30h] [bp-558h]@182
  int v86; // [sp+13Ch] [bp-44Ch]@106
  int v87[274]; // [sp+140h] [bp-448h]@182
  int _540[274]; // [sp+540h] [bp-48h]@185

  v5 = (wint_t *)a3;
  v6 = a2;
  v7 = *a1;
  v79 = a5;
  v74 = (__int64)(a1 + 1);
  if ( !*a1 )
  {
LABEL_56:
    if ( v6 != v5 )
    {
      if ( !(v79 & 8) )
        return 1LL;
      return *v6 != 47;
    }
    return 0LL;
  }
  wc = a3;
  v83 = a5 & 5;
  v8 = a4;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  v11 = (signed __int64)a1;
LABEL_3:
  if ( v10 )
  {
    v12 = v8;
    v13 = towlower(v7);
    v8 = v12;
    v7 = v13;
  }
  switch ( v7 )
  {
    case 0x5Cu:
      if ( v9 )
      {
        if ( (wint_t *)wc == v6 )
          return 1LL;
        if ( v10 )
          goto LABEL_10;
      }
      else
      {
        v7 = *(_DWORD *)(v11 + 4);
        v74 = v11 + 8;
        if ( !v7 )
          return 1LL;
        if ( v10 )
        {
          v7 = towlower(v7);
          if ( (wint_t *)wc == v6 )
            return 1LL;
LABEL_10:
          v14 = towlower(*v6);
          v11 = v74;
          goto LABEL_98;
        }
        if ( (wint_t *)wc == v6 )
          return 1LL;
      }
      v14 = *v6;
      v11 = v74;
LABEL_98:
      if ( v14 != v7 )
        return 1LL;
      goto LABEL_99;
    case 0x5Bu:
      if ( !dword_60F4D8 )
      {
        v53 = v8;
        v54 = getenv("POSIXLY_CORRECT");
        v8 = v53;
        dword_60F4D8 = -((unsigned __int64)v54 < 1) | 1;
      }
      if ( (wint_t *)wc == v6 )
        return 1LL;
      v15 = *v6;
      if ( *v6 == 46 )
      {
        if ( v8 )
          return 1LL;
      }
      else if ( v15 == 47 && v79 & 1 )
      {
        return 1LL;
      }
      v16 = *(_DWORD *)(v11 + 4);
      if ( v16 == 33 || dword_60F4D8 < 0 && v16 == 94 )
      {
        v17 = (signed int *)(v11 + 8);
        v80 = 1;
      }
      else
      {
        v80 = 0;
        v17 = (signed int *)v74;
      }
      if ( v10 )
        v15 = towlower(v15);
      v84 = v7;
      v11 = (signed __int64)(v17 + 1);
      v18 = v6;
      v19 = *v17;
      v20 = v15;
      do
      {
        while ( 2 )
        {
          if ( !v9 && v19 == 92 )
          {
            v19 = *(_DWORD *)v11;
            if ( !*(_DWORD *)v11 )
              return 1LL;
            if ( v10 )
              v19 = towlower(v19);
            v21 = *(_DWORD *)(v11 + 4);
            v11 += 4LL;
            goto LABEL_34;
          }
          if ( v19 != 91 )
          {
            if ( v19 )
            {
              v21 = *(_DWORD *)v11;
              goto LABEL_32;
            }
            v6 = v18;
            v7 = v84;
LABEL_50:
            v26 = *v6;
            if ( v10 )
              v26 = towlower(v26);
            if ( v26 != v7 )
              return 1LL;
LABEL_53:
            v11 = v74;
            v8 = 0;
            goto LABEL_54;
          }
          v21 = *(_DWORD *)v11;
          if ( *(_DWORD *)v11 != 58 )
          {
            while ( 1 )
            {
LABEL_32:
              if ( v10 )
                v19 = towlower(v19);
LABEL_34:
              i = v11 + 4;
              if ( v21 != 45 )
              {
                if ( v19 == v20 )
                  goto LABEL_148;
                v19 = v21;
                v11 += 4LL;
                goto LABEL_26;
              }
              v23 = *(_DWORD *)(v11 + 4);
              if ( v23 != 93 && v23 )
                goto LABEL_213;
              if ( v19 == v20 )
              {
                v6 = v18;
                goto LABEL_152;
              }
              if ( v23 != 93 )
              {
LABEL_213:
                v24 = (signed int *)(v11 + 8);
                if ( v23 == 92 && !v9 )
                {
                  v24 = (signed int *)(v11 + 12);
                  v23 = *(_DWORD *)(v11 + 8);
                }
                if ( !v23 )
                  return 1LL;
                v21 = *v24;
                v11 = (signed __int64)(v24 + 1);
                v25 = v19 <= v20;
                v19 = *v24;
                if ( v23 >= v20 && v25 )
                {
                  v11 = (signed __int64)v24;
                  v6 = v18;
                  i = (signed __int64)(v24 + 1);
                  goto LABEL_152;
                }
                goto LABEL_26;
              }
              v21 = 93;
              v11 += 4LL;
              v19 = 45;
            }
          }
          v48 = v11;
          v49 = 0LL;
          while ( 1 )
          {
            v50 = *(_DWORD *)(v48 + 4);
            if ( v50 == 58 )
              break;
            if ( (unsigned int)(v50 - 97) > 0x18 )
              goto LABEL_109;
            ++v49;
            v48 += 4LL;
            *(&v86 + v49) = v50;
            if ( v49 == 256 )
              return 1LL;
          }
          if ( *(_DWORD *)(v48 + 8) != 93 )
          {
LABEL_109:
            i = v11 + 4;
            if ( v20 == 91 )
            {
LABEL_148:
              v6 = v18;
              v21 = *(_DWORD *)v11;
              goto LABEL_152;
            }
            v11 += 4LL;
            v19 = 58;
            continue;
          }
          break;
        }
        v87[v49] = 0;
        v69 = &property;
        v70 = v87;
        v71 = v87[0];
        do
        {
          if ( v71 <= 63 )
          {
            if ( v71 < 37 && (unsigned int)(v71 - 32) > 3 )
              return 1LL;
          }
          else if ( v71 < 65 || v71 > 95 && (unsigned int)(v71 - 97) > 0x1D )
          {
            return 1LL;
          }
          if ( v70 == _540 )
            return 1LL;
          ++v70;
          *(++v69 - 1) = v71;
          v71 = *v70;
        }
        while ( *v70 );
        *v69 = 0;
        v72 = wctype(&property);
        if ( !v72 )
          return 1LL;
        if ( iswctype(*v18, v72) )
        {
          v73 = v48;
          v11 = v48 + 12;
          v6 = v18;
          v21 = *(_DWORD *)(v48 + 12);
          for ( i = v73 + 16; ; i = v11 + 4 )
          {
LABEL_152:
            v63 = (signed int *)i;
            v64 = v21;
            if ( !v21 )
              return 1LL;
            v8 = v9 == 0 && v21 == 92;
            if ( v8 )
            {
              if ( *(_DWORD *)(v11 + 4) )
              {
                v21 = *(_DWORD *)(v11 + 8);
                v11 += 8LL;
                continue;
              }
              return 1LL;
            }
            if ( v21 != 91 )
              goto LABEL_149;
            v21 = *(_DWORD *)(v11 + 4);
            if ( v21 != 58 )
              break;
            v67 = v11 + 8;
            v21 = *(_DWORD *)(v11 + 8);
            v68 = v11 + 1028;
            while ( 1 )
            {
              if ( v21 == 58 )
              {
                if ( *(_DWORD *)(v67 + 4) != 93 )
                  goto LABEL_158;
                v63 = (signed int *)(v67 + 12);
                v64 = *(_DWORD *)(v67 + 8);
                goto LABEL_149;
              }
              if ( (unsigned int)(v21 - 97) > 0x18 )
                break;
              v67 += 4LL;
              v21 = *(_DWORD *)v67;
              if ( v68 == v67 )
                return 1LL;
            }
            v21 = 58;
            v11 = i;
LABEL_151:
            ;
          }
          if ( v21 == 61 )
          {
            if ( *(_DWORD *)(v11 + 8) && *(_DWORD *)(v11 + 12) == 61 && *(_DWORD *)(v11 + 16) == 93 )
            {
              v63 = (signed int *)(v11 + 24);
              v64 = *(_DWORD *)(v11 + 20);
              goto LABEL_149;
            }
            return 1LL;
          }
          v65 = v11 + 8;
          if ( v21 != 46 )
          {
LABEL_158:
            v11 = i;
            goto LABEL_151;
          }
          while ( 1 )
          {
            v66 = *(_DWORD *)(v65 + 4);
            if ( !v66 )
              return 1LL;
            if ( v66 == 46 && *(_DWORD *)(v65 + 8) == 93 )
              break;
            v65 += 4LL;
          }
          v63 = (signed int *)(v65 + 16);
          v64 = *(_DWORD *)(v65 + 12);
LABEL_149:
          if ( v64 != 93 )
          {
            v21 = *v63;
            v11 = (signed __int64)v63;
            goto LABEL_151;
          }
          if ( v80 )
            return 1LL;
          v11 = (signed __int64)v63;
LABEL_54:
          v7 = *(_DWORD *)v11;
          ++v6;
          v74 = v11 + 4;
          if ( !*(_DWORD *)v11 )
          {
            v5 = (wint_t *)wc;
            goto LABEL_56;
          }
          goto LABEL_3;
        }
        v11 = v48 + 16;
        v19 = *(_DWORD *)(v48 + 12);
LABEL_26:
        ;
      }
      while ( v19 != 93 );
      v6 = v18;
      if ( v80 )
      {
LABEL_99:
        v8 = 0;
        goto LABEL_54;
      }
      return 1LL;
    case 0x3Fu:
      if ( v79 & 0x20 )
      {
        if ( *(_DWORD *)(v11 + 4) == 40 )
        {
          v62 = v8;
          result = sub_405860(63, v74, (unsigned __int64)v6, wc, v8, v79);
          v8 = v62;
          if ( (_DWORD)result != -1 )
            return result;
        }
      }
      if ( (wint_t *)wc == v6 )
        return 1LL;
      if ( *v6 == 47 )
      {
        if ( v79 & 1 )
          return 1LL;
        goto LABEL_53;
      }
      v8 &= *v6 == 46;
      if ( !v8 )
      {
        v11 = v74;
        goto LABEL_54;
      }
      return 1LL;
    case 0x2Fu:
      if ( v83 != 5 )
        goto LABEL_49;
      if ( (wint_t *)wc == v6 || *v6 != 47 )
        return 1LL;
      v11 = v74;
      v8 = 1;
      goto LABEL_54;
    default:
      goto LABEL_49;
    case 0x21u:
    case 0x2Bu:
    case 0x40u:
      if ( v79 & 0x20 )
      {
        if ( *(_DWORD *)(v11 + 4) == 40 )
        {
          result = sub_405860(v7, v74, (unsigned __int64)v6, wc, v8, v79);
          if ( (_DWORD)result != -1 )
            return result;
        }
      }
LABEL_49:
      if ( (wint_t *)wc != v6 )
        goto LABEL_50;
      return 1LL;
    case 0x2Au:
      v28 = v11;
      v29 = v10;
      v30 = (wint_t *)wc;
      v31 = v28;
      if ( !(v79 & 0x20) || *(_DWORD *)(v28 + 4) != 40 )
        goto LABEL_65;
      v61 = wc;
      wcb = v8;
      result = sub_405860(42, v74, (unsigned __int64)v6, v61, v8, v79);
      if ( (_DWORD)result != -1 )
        return result;
      v8 = wcb;
LABEL_65:
      if ( v30 != v6 && *v6 == 46 && v8 )
        return 1LL;
      v32 = *(_DWORD *)(v31 + 4);
      v33 = (wint_t *)(v31 + 8);
      if ( v32 != 42 && v32 != 63 )
        goto LABEL_77;
      v34 = (v79 & 0x20) != 0;
      break;
  }
  while ( 1 )
  {
    if ( *v33 != 40 || !v34 )
      goto LABEL_73;
    v51 = v8;
    v52 = v34;
    v82 = v32;
    v35 = (wint_t *)sub_405660((__int64)v33);
    v34 = v52;
    v8 = v51;
    if ( v35 == v33 )
      break;
LABEL_75:
    v32 = *v35;
    v33 = v35 + 1;
    if ( *v35 != 63 && v32 != 42 )
    {
LABEL_77:
      if ( v32 )
      {
        v81 = v8;
        wca = v32;
        v36 = wmemchr((const wchar_t *)v6, -(v79 & 1) & 0x2F, v30 - v6);
        v37 = wca;
        v38 = v36;
        v39 = v81;
        if ( !v36 )
          v38 = (wchar_t *)v30;
        if ( wca == 91
          || v79 & 0x20
          && (v55 = wca - 33, (unsigned int)v55 <= 0x1F)
          && (v56 = 2147484673LL, _bittest64(&v56, v55))
          && *v33 == 40 )
        {
          v57 = v79 & 0xFFFFFFFB;
          if ( v79 & 1 )
            v57 = v79;
          v58 = (signed __int64)(v33 - 1);
          v59 = v57;
          if ( v38 <= (wchar_t *)v6 )
            return 1LL;
          v60 = (unsigned __int64)v38;
          while ( sub_405DF0(v58, v6, v30, v39, v59) )
          {
            ++v6;
            v39 = 0;
            if ( v60 <= (unsigned __int64)v6 )
              return 1LL;
          }
          return 0LL;
        }
        if ( wca == 47 )
        {
          if ( v79 & 1 )
          {
            if ( v30 <= v6 )
              return 1LL;
            while ( *v6 != 47 )
            {
              ++v6;
              if ( v30 <= v6 )
                return 1LL;
            }
            return sub_405DF0(v33, v6 + 1, v30, (v79 >> 2) & 1, v79) != 0;
          }
        }
        else if ( v79 & 1 )
        {
          goto LABEL_84;
        }
        v79 &= 0xFFFFFFFB;
LABEL_84:
        if ( wca == 92 && !v9 )
          v37 = *v33;
        if ( v29 )
        {
          v40 = v38;
          v41 = towlower(v37);
          v38 = v40;
          v37 = v41;
        }
        v42 = (signed __int64)(v33 - 1);
        if ( v38 <= (wchar_t *)v6 )
          return 1LL;
        v75 = v30;
        v43 = v37;
        v44 = v81;
        v45 = v6;
        v46 = (unsigned __int64)v38;
        while ( 1 )
        {
          v47 = *v45;
          if ( v29 )
            v47 = towlower(v47);
          if ( v43 == v47 && !sub_405DF0(v42, v45, v75, v44, v79) )
            break;
          ++v45;
          v44 = 0;
          if ( v46 <= (unsigned __int64)v45 )
            return 1LL;
        }
        return 0LL;
      }
      if ( v79 & 1 && !(v79 & 8) )
        return wmemchr((const wchar_t *)v6, 47, v30 - v6) != 0LL;
      return 0LL;
    }
  }
  v32 = v82;
LABEL_73:
  if ( v32 == 63 )
  {
    if ( v6 == v30 || *v6 == 47 && v79 & 1 )
      return 1LL;
    ++v6;
  }
  v35 = v33;
  goto LABEL_75;
}

signed __int64 __fastcall sub_4068D0(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned int v6; // er12@1
  signed int v7; // eax@1
  signed __int64 i; // r14@2
  const void *v9; // rsi@2
  __int64 *v10; // rbx@2
  signed __int64 v11; // r13@2
  __int64 v12; // r15@2
  signed __int64 result; // rax@14
  char v14; // al@19
  signed __int64 v15; // rcx@22
  signed __int64 v16; // rax@30
  unsigned __int64 v17; // rax@32
  void *v18; // rsp@33
  _BYTE *v19; // rax@33
  _QWORD *v20; // r15@34
  __int64 v21; // rbx@34
  signed __int64 v22; // rax@34
  unsigned __int64 v23; // rax@36
  void *v24; // rsp@37
  _BYTE *v25; // rax@37
  __int64 v26; // rax@37
  unsigned __int64 v27; // r15@41
  _QWORD *v28; // r14@41
  unsigned int v29; // er12@41
  signed __int64 v30; // rax@43
  unsigned __int64 v31; // rbx@43
  unsigned __int64 v32; // r13@45
  __int64 v33; // rcx@46
  __int64 v34; // rcx@49
  unsigned __int64 v35; // r15@59
  unsigned __int64 v36; // r13@59
  unsigned int v37; // ebx@59
  _QWORD *v38; // r14@61
  __int64 v39; // rcx@65
  __int64 v40; // r13@71
  unsigned __int64 v41; // r15@71
  unsigned int v42; // ebx@71
  char *v43; // rax@75
  __int64 v44; // [sp+8h] [bp-78h]@2
  unsigned __int8 v45; // [sp+13h] [bp-6Dh]@1
  unsigned int v46; // [sp+14h] [bp-6Ch]@1
  unsigned __int64 v47; // [sp+18h] [bp-68h]@1
  unsigned __int64 v48; // [sp+20h] [bp-60h]@1
  __int64 v49; // [sp+28h] [bp-58h]@2
  size_t v50; // [sp+30h] [bp-50h]@1
  __int64 v51; // [sp+38h] [bp-48h]@1
  _QWORD *v52; // [sp+48h] [bp-38h]@1

  LOBYTE(v6) = a5;
  LODWORD(v51) = a1;
  v48 = a3;
  v47 = a4;
  v46 = a6;
  v45 = a5;
  v52 = 0LL;
  v50 = strlen((const char *)a2);
  v7 = *(_BYTE *)(a2 + 1);
  if ( !(_BYTE)v7 )
    return 0xFFFFFFFFLL;
  i = a2 + 1;
  v44 = a2;
  v9 = (const void *)(a2 + 1);
  v10 = (__int64 *)&v52;
  v11 = 3221227009LL;
  v12 = 0LL;
  LODWORD(v49) = v51 - 63;
  while ( 2 )
  {
    while ( (_BYTE)v7 == 91 )
    {
      if ( !dword_60F4D8 )
        dword_60F4D8 = -((unsigned __int64)getenv("POSIXLY_CORRECT") < 1) | 1;
      v14 = *(_BYTE *)(i + 1);
      if ( v14 == 33 || dword_60F4D8 < 0 && v14 == 94 )
      {
        v15 = i + 2;
        v14 = *(_BYTE *)(i + 2);
      }
      else
      {
        v15 = i + 1;
      }
      if ( v14 != 93 )
        goto LABEL_27;
      v14 = *(_BYTE *)(v15++ + 1);
      for ( i = v15 + 1; v14 != 93; i = v15 + 1 )
      {
        if ( !v14 )
          return 0xFFFFFFFFLL;
        v14 = *(_BYTE *)i;
        v15 = i;
LABEL_27:
        ;
      }
      v7 = *(_BYTE *)(v15 + 1);
LABEL_6:
      if ( !(_BYTE)v7 )
        return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)(v7 - 33) > 0x1Fu )
      {
        if ( (_BYTE)v7 != 124 || v12 )
        {
LABEL_5:
          v7 = *(_BYTE *)(i++ + 1);
          goto LABEL_6;
        }
        v16 = i - (_QWORD)v9 + 1;
        if ( (unsigned int)v49 <= 1 )
          v16 = v50;
        v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v17 - 8 <= 0x1F37 )
        {
          v18 = alloca(v17 + 8);
          v19 = mempcpy((void *)((((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8), v9, i - (_QWORD)v9);
          v9 = (const void *)(i + 1);
          *v19 = 0;
          v7 = *(_BYTE *)(i++ + 1);
          *(_QWORD *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
          *v10 = ((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL;
          v10 = (__int64 *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL);
          v12 = 0LL;
          goto LABEL_6;
        }
        return 0xFFFFFFFFLL;
      }
      if ( !_bittest64(&v11, (unsigned int)(v7 - 33)) || *(_BYTE *)(i + 1) != 40 )
        break;
      ++v12;
      ++i;
      v7 = 40;
    }
    if ( (_BYTE)v7 != 41 )
      goto LABEL_5;
    if ( v12 )
    {
      v7 = *(_BYTE *)(i + 1);
      --v12;
      ++i;
      if ( !(_BYTE)v7 )
        return 0xFFFFFFFFLL;
      continue;
    }
    break;
  }
  v20 = v10;
  v21 = v44;
  v22 = i - (_QWORD)v9 + 1;
  if ( (unsigned int)(v51 - 63) <= 1 )
    v22 = v50;
  v23 = (v22 + 15) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v23 - 8 > 0x1F37 )
    return 0xFFFFFFFFLL;
  v24 = alloca(v23 + 8);
  v25 = mempcpy((void *)((((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8), v9, i - (_QWORD)v9);
  *v20 = ((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  *v25 = 0;
  v26 = (__int64)v52;
  *(_QWORD *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
  v50 = v26;
  if ( !v26 )
    __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_match");
  if ( *(_BYTE *)(i - 1) != 41 )
    __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_match");
  switch ( (_DWORD)v51 )
  {
    case 0x2A:
      if ( sub_406E20(i, v48, v47, (unsigned __int8)v6, v46) )
        goto LABEL_41;
      return 0LL;
    case 0x2B:
LABEL_41:
      v27 = v48;
      v49 = i;
      v28 = (_QWORD *)v50;
      v29 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v29 = v46;
      v30 = v21 - 1;
      LODWORD(v50) = v46 & 1;
      v31 = v47;
      v44 = v30;
      do
      {
        if ( v27 <= v31 )
        {
          v32 = v27;
          LODWORD(v51) = v45;
          do
          {
            if ( !sub_406E20(v28 + 1, v27, v32, (unsigned int)v51, v29) )
            {
              if ( v27 == v32 )
              {
                if ( !sub_406E20(v49, v27, v31, (unsigned int)v51, v29) )
                  return 0LL;
              }
              else
              {
                v33 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v33 = (v46 & 5) == 5;
                if ( !sub_406E20(v49, v32, v31, v33, v29) )
                  return 0LL;
                v34 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v34 = (v46 & 5) == 5;
                if ( !sub_406E20(v44, v32, v31, v34, v29) )
                  return 0LL;
              }
              v28 = v52;
            }
            ++v32;
          }
          while ( v31 >= v32 );
        }
        v28 = (_QWORD *)*v28;
        v52 = v28;
      }
      while ( v28 );
      return 1LL;
    case 0x21:
      if ( v48 > v47 )
        return 1LL;
      v35 = v48;
      v51 = i;
      v6 = (unsigned __int8)v6;
      v36 = v48;
      v37 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v37 = v46;
      break;
    case 0x40:
      v6 = (unsigned __int8)v6;
      goto LABEL_71;
    case 0x3F:
      v6 = (unsigned __int8)v6;
      if ( sub_406E20(i, v48, v47, (unsigned __int8)v6, v46) )
      {
LABEL_71:
        v40 = v50;
        v41 = v47;
        v42 = v46 & 0xFFFFFFFB;
        if ( v46 & 1 )
          v42 = v46;
        while ( 1 )
        {
          v43 = strcat((char *)(v40 + 8), (const char *)i);
          if ( !sub_406E20(v43, v48, v41, v6, v42) )
            break;
          v40 = *(_QWORD *)v40;
          v52 = (_QWORD *)v40;
          if ( !v40 )
            return 1LL;
        }
        result = 0LL;
      }
      else
      {
        result = 0LL;
      }
      return result;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_match");
      return result;
  }
  do
  {
    v38 = (_QWORD *)v50;
    while ( sub_406E20(v38 + 1, v35, v36, v6, v37) )
    {
      v38 = (_QWORD *)*v38;
      if ( !v38 )
      {
        if ( v35 == v36 )
        {
          v39 = v6;
        }
        else
        {
          v39 = 0LL;
          if ( *(_BYTE *)(v36 - 1) == 47 )
            v39 = (v46 & 5) == 5;
        }
        if ( !sub_406E20(v51, v36, v47, v39, v37) )
          return 0LL;
        break;
      }
    }
    ++v36;
  }
  while ( v47 >= v36 );
  return 1LL;
}

signed __int64 __fastcall sub_406E20(_BYTE *a1, char *a2, unsigned __int64 a3, char a4, unsigned int a5)
{
  char *v5; // r14@1
  __int64 v6; // r12@1
  signed __int64 v7; // r13@2
  unsigned int v8; // er15@2
  int v9; // ebp@2
  int v10; // ebx@2
  unsigned __int8 v11; // r12@7
  signed int v12; // eax@10
  __int32_t v13; // edx@11
  __int64 v14; // r12@17
  char v15; // al@20
  _BYTE *v16; // r15@23
  signed __int64 v17; // r15@26
  char v18; // si@34
  char *i; // rax@37
  unsigned __int8 v20; // dl@38
  signed int v21; // ecx@40
  char *v22; // r8@49
  char v23; // cl@49
  __int32_t v24; // eax@61
  __int64 v25; // r13@62
  signed __int64 result; // rax@68
  __int64 v27; // r8@78
  _BYTE *v28; // r9@78
  _BYTE *v29; // rax@83
  __int64 v30; // rcx@86
  char *v31; // rax@87
  unsigned __int8 v32; // r8@87
  char *v33; // r12@87
  _BYTE *v34; // r9@87
  unsigned __int8 v35; // ST18_1@95
  _BYTE *v36; // ST10_8@95
  const __int32_t **v37; // rax@95
  int v38; // ebp@97
  unsigned int v39; // er13@97
  __int32_t v40; // eax@99
  unsigned __int8 v41; // r15@100
  const __int32_t *v42; // rdx@106
  signed __int64 v43; // r15@112
  __int64 v44; // rdx@112
  char v45; // al@115
  _BYTE *v46; // ST10_8@126
  signed __int64 v47; // r13@132
  char v48; // al@136
  const __int32_t **v49; // rax@150
  signed __int64 v50; // rdx@153
  unsigned int v51; // eax@155
  unsigned int v52; // er13@157
  __int64 v53; // rax@176
  signed __int64 v54; // rdx@178
  signed __int64 v55; // r13@178
  wctype_t v56; // r13@184
  wint_t v57; // eax@185
  unsigned __int64 v58; // [sp+8h] [bp-170h]@1
  __int64 v59; // [sp+10h] [bp-168h]@1
  signed __int64 v60; // [sp+10h] [bp-168h]@96
  _BYTE *v61; // [sp+18h] [bp-160h]@87
  char v62; // [sp+18h] [bp-160h]@126
  unsigned int v63; // [sp+20h] [bp-158h]@1
  int v64; // [sp+28h] [bp-150h]@2
  unsigned __int8 v65; // [sp+28h] [bp-150h]@87
  int v66; // [sp+2Ch] [bp-14Ch]@23
  char property[328]; // [sp+30h] [bp-148h]@184

  v5 = a2;
  v6 = *a1;
  v58 = a3;
  v63 = a5;
  v59 = (__int64)(a1 + 1);
  if ( !(_BYTE)v6 )
    goto LABEL_66;
  v7 = (signed __int64)a1;
  v64 = a5 & 5;
  LOBYTE(v8) = a4;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  while ( 2 )
  {
    if ( v10 )
      v6 = LOBYTE((*__ctype_tolower_loc())[v6]);
    switch ( (_BYTE)v6 )
    {
      case 0x5C:
        if ( v9 )
        {
          if ( v5 == (char *)v58 )
            return 1LL;
          if ( !v10 )
          {
            v12 = 92;
LABEL_11:
            v13 = (unsigned __int8)*v5;
            v7 = v59;
            goto LABEL_12;
          }
          v7 = v59;
          v42 = *__ctype_tolower_loc();
          v12 = 92;
        }
        else
        {
          v11 = *(_BYTE *)(v7 + 1);
          v59 = v7 + 2;
          if ( !v11 )
            return 1LL;
          if ( !v10 )
          {
            if ( v5 == (char *)v58 )
              return 1LL;
            v12 = v11;
            goto LABEL_11;
          }
          v49 = __ctype_tolower_loc();
          v42 = *v49;
          v12 = (*v49)[v11];
          if ( v5 == (char *)v58 )
            return 1LL;
          v12 = (unsigned __int8)v12;
          v7 += 2LL;
        }
        v13 = v42[(unsigned __int8)*v5];
LABEL_12:
        if ( v13 != v12 )
          return 1LL;
        goto LABEL_13;
      case 0x5B:
        if ( !dword_60F4D8 )
          dword_60F4D8 = -((unsigned __int64)getenv("POSIXLY_CORRECT") < 1) | 1;
        if ( v5 == (char *)v58 )
          return 1LL;
        v14 = (unsigned __int8)*v5;
        if ( (_BYTE)v14 == 46 )
        {
          if ( (_BYTE)v8 )
            return 1LL;
        }
        else if ( (_BYTE)v14 == 47 && v63 & 1 )
        {
          return 1LL;
        }
        v15 = *(_BYTE *)(v7 + 1);
        if ( v15 == 33 || dword_60F4D8 < 0 && v15 == 94 )
        {
          v16 = (_BYTE *)(v7 + 2);
          v66 = 1;
        }
        else
        {
          v66 = 0;
          v16 = (_BYTE *)v59;
        }
        if ( v10 )
          LOBYTE(v14) = (*__ctype_tolower_loc())[v14];
        v7 = (signed __int64)(v16 + 1);
        v17 = *v16;
LABEL_30:
        while ( 2 )
        {
          if ( !v9 && (_BYTE)v17 == 92 )
          {
            v17 = *(_BYTE *)v7;
            if ( !(_BYTE)v17 )
              return 1LL;
            if ( v10 )
              v17 = LOBYTE((*__ctype_tolower_loc())[v17]);
            v18 = *(_BYTE *)(v7++ + 1);
            goto LABEL_37;
          }
          if ( (_BYTE)v17 != 91 )
          {
            if ( (_BYTE)v17 )
            {
              v18 = *(_BYTE *)v7;
              goto LABEL_35;
            }
            LODWORD(v6) = 91;
LABEL_61:
            v24 = (unsigned __int8)*v5;
            if ( v10 )
            {
              v25 = (unsigned __int8)*v5;
              v24 = (*__ctype_tolower_loc())[v25];
            }
            if ( v24 == (_DWORD)v6 )
            {
LABEL_64:
              v7 = v59;
              LOBYTE(v8) = 0;
              goto LABEL_65;
            }
            return 1LL;
          }
          v18 = *(_BYTE *)v7;
          if ( *(_BYTE *)v7 != 58 )
          {
            while ( 1 )
            {
LABEL_35:
              if ( v10 )
                v17 = LOBYTE((*__ctype_tolower_loc())[v17]);
LABEL_37:
              i = (char *)(v7 + 1);
              if ( v18 != 45 )
                break;
              v20 = *(_BYTE *)(v7 + 1);
              if ( v20 != 93 && v20 )
              {
                v21 = (char)v17;
LABEL_41:
                i = (char *)(v7 + 2);
                if ( !v9 && v20 == 92 )
                {
                  i = (char *)(v7 + 3);
                  v20 = *(_BYTE *)(v7 + 2);
                }
                if ( !v20 )
                  return 1LL;
                v18 = *i;
                v7 = (signed __int64)(i + 1);
                v17 = (unsigned __int8)*i;
                if ( v21 <= (unsigned __int8)v14 && (unsigned __int8)v14 <= v20 )
                  goto LABEL_47;
LABEL_29:
                if ( (_BYTE)v17 == 93 )
                {
                  if ( v66 )
                  {
LABEL_13:
                    LOBYTE(v8) = 0;
                    goto LABEL_65;
                  }
                  return 1LL;
                }
                goto LABEL_30;
              }
              if ( (_BYTE)v14 == (_BYTE)v17 )
                goto LABEL_49;
              v21 = (char)v17;
              if ( v20 != 93 )
                goto LABEL_41;
              v18 = 93;
              ++v7;
              v17 = 45LL;
            }
            if ( (_BYTE)v14 == (_BYTE)v17 )
              goto LABEL_177;
            v17 = (unsigned __int8)v18;
            ++v7;
            goto LABEL_29;
          }
          v43 = v7;
          v44 = 0LL;
          while ( 1 )
          {
            v45 = *(_BYTE *)(v43 + 1);
            if ( v45 == 58 )
              break;
            if ( (unsigned __int8)(v45 - 97) > 0x18u )
              goto LABEL_117;
            ++v44;
            ++v43;
            *((_BYTE *)&v66 + v44 + 3) = v45;
            if ( v44 == 256 )
              return 1LL;
          }
          if ( *(_BYTE *)(v43 + 2) != 93 )
          {
LABEL_117:
            i = (char *)(v7 + 1);
            if ( (_BYTE)v14 == 91 )
            {
LABEL_177:
              v18 = *(_BYTE *)v7;
              goto LABEL_49;
            }
            ++v7;
            v17 = 58LL;
            continue;
          }
          break;
        }
        property[v44] = 0;
        v56 = wctype(property);
        if ( !v56 )
          return 1LL;
        v57 = btowc((unsigned __int8)*v5);
        if ( !iswctype(v57, v56) )
        {
          v7 = v43 + 4;
          v17 = *(_BYTE *)(v43 + 3);
          goto LABEL_29;
        }
        v7 = v43 + 3;
        v18 = *(_BYTE *)(v43 + 3);
        for ( i = (char *)(v43 + 4); ; i = (char *)(v7 + 1) )
        {
LABEL_49:
          v22 = i;
          v23 = v18;
          if ( !v18 )
            return 1LL;
          LOBYTE(v8) = v9 == 0 && v18 == 92;
          if ( (_BYTE)v8 )
          {
            if ( *(_BYTE *)(v7 + 1) )
            {
              v18 = *(_BYTE *)(v7 + 2);
              v7 += 2LL;
              continue;
            }
            return 1LL;
          }
          if ( v18 != 91 )
            goto LABEL_52;
          v18 = *(_BYTE *)(v7 + 1);
          if ( v18 != 58 )
            break;
          v54 = v7 + 2;
          v18 = *(_BYTE *)(v7 + 2);
          v55 = v7 + 257;
          while ( 1 )
          {
            if ( v18 == 58 )
            {
              if ( *(_BYTE *)(v54 + 1) == 93 )
              {
                v22 = (char *)(v54 + 3);
                v23 = *(_BYTE *)(v54 + 2);
                goto LABEL_52;
              }
LABEL_47:
              v7 = (signed __int64)i;
              goto LABEL_48;
            }
            if ( (unsigned __int8)(v18 - 97) > 0x18u )
              break;
            v18 = *(_BYTE *)++v54;
            if ( v55 == v54 )
              return 1LL;
          }
          v18 = 58;
          v7 = (signed __int64)i;
LABEL_48:
          ;
        }
        if ( v18 == 61 )
        {
          if ( *(_BYTE *)(v7 + 2) && *(_BYTE *)(v7 + 3) == 61 && *(_BYTE *)(v7 + 4) == 93 )
          {
            v22 = (char *)(v7 + 6);
            v23 = *(_BYTE *)(v7 + 5);
            goto LABEL_52;
          }
          return 1LL;
        }
        v47 = v7 + 2;
        if ( v18 != 46 )
          goto LABEL_47;
        while ( 1 )
        {
          v48 = *(_BYTE *)(v47 + 1);
          if ( !v48 )
            return 1LL;
          if ( v48 == 46 && *(_BYTE *)(v47 + 2) == 93 )
            break;
          ++v47;
        }
        v22 = (char *)(v47 + 4);
        v23 = *(_BYTE *)(v47 + 3);
LABEL_52:
        if ( v23 != 93 )
        {
          v7 = (signed __int64)v22;
          v18 = *v22;
          i = v22 + 1;
          goto LABEL_49;
        }
        if ( v66 )
          return 1LL;
        v7 = (signed __int64)v22;
LABEL_65:
        v6 = *(_BYTE *)v7;
        ++v5;
        v59 = v7 + 1;
        if ( (_BYTE)v6 )
          continue;
LABEL_66:
        if ( (char *)v58 == v5 )
          return 0LL;
        if ( !(v63 & 8) )
          return 1LL;
        return *v5 != 47;
      case 0x3F:
        if ( v63 & 0x20 )
        {
          if ( *(_BYTE *)(v7 + 1) == 40 )
          {
            result = sub_4068D0(63, v59, (unsigned __int64)v5, v58, v8, v63);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( v5 == (char *)v58 )
          return 1LL;
        if ( *v5 != 47 )
        {
          LOBYTE(v8) = (*v5 == 46) & v8;
          if ( !(_BYTE)v8 )
          {
            v7 = v59;
            goto LABEL_65;
          }
          return 1LL;
        }
        if ( v63 & 1 )
          return 1LL;
        goto LABEL_64;
      case 0x2F:
        if ( v64 != 5 )
          goto LABEL_60;
        if ( v5 == (char *)v58 || *v5 != 47 )
          return 1LL;
        v7 = v59;
        LOBYTE(v8) = 1;
        goto LABEL_65;
      default:
        goto LABEL_60;
      case 0x21:
      case 0x2B:
      case 0x40:
        if ( v63 & 0x20 )
        {
          if ( *(_BYTE *)(v7 + 1) == 40 )
          {
            result = sub_4068D0((unsigned __int8)v6, v59, (unsigned __int64)v5, v58, v8, v63);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
LABEL_60:
        if ( v5 != (char *)v58 )
          goto LABEL_61;
        return 1LL;
      case 0x2A:
        if ( v63 & 0x20 )
        {
          if ( *(_BYTE *)(v7 + 1) == 40 )
          {
            result = sub_4068D0(42, v59, (unsigned __int64)v5, v58, v8, v63);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( v5 != (char *)v58 && *v5 == 46 && (_BYTE)v8 )
          return 1LL;
        v27 = *(_BYTE *)(v7 + 1);
        v28 = (_BYTE *)(v7 + 2);
        if ( (_BYTE)v27 != 42 && (_BYTE)v27 != 63 )
          goto LABEL_86;
        break;
    }
    break;
  }
  while ( 1 )
  {
    if ( *v28 != 40 || (v63 & 0x20) == 0 )
      goto LABEL_82;
    v46 = v28;
    v62 = v27;
    v29 = (_BYTE *)sub_405760((__int64)v28);
    v28 = v46;
    if ( v29 == v46 )
      break;
LABEL_84:
    v27 = *v29;
    v28 = v29 + 1;
    if ( (_BYTE)v27 != 63 && (_BYTE)v27 != 42 )
    {
LABEL_86:
      v30 = v63 & 1;
      if ( !(_BYTE)v27 )
      {
        if ( v63 & 1 && !(v63 & 8) )
        {
          LODWORD(v53) = sub_408AA0(v5, 47LL, v58 - (_QWORD)v5, v30, v27, v28);
          return v53 != 0;
        }
        return 0LL;
      }
      v65 = v27;
      v61 = v28;
      LODWORD(v31) = sub_408AA0(v5, -(signed int)v30 & 0x2F, v58 - (_QWORD)v5, v30, v27, v28);
      v32 = v65;
      v33 = v31;
      v34 = v61;
      if ( !v31 )
        v33 = (char *)v58;
      if ( v65 == 91
        || v63 & 0x20
        && (unsigned __int8)(v65 - 33) <= 0x1Fu
        && (v50 = 2147484673LL, _bittest64(&v50, (unsigned int)v65 - 33))
        && *v61 == 40 )
      {
        v51 = v63 & 0xFFFFFFFB;
        if ( v63 & 1 )
          v51 = v63;
        v52 = v51;
        if ( v33 > v5 )
        {
          while ( sub_406E20(v61 - 1, v5, v58, (unsigned __int8)v8, v52) )
          {
            ++v5;
            LOBYTE(v8) = 0;
            if ( v33 == v5 )
              return 1LL;
          }
          return 0LL;
        }
        return 1LL;
      }
      if ( v65 == 47 )
      {
        if ( v63 & 1 )
        {
          if ( v58 > (unsigned __int64)v5 )
          {
            do
            {
              if ( *v5 == 47 )
                return sub_406E20(v61, v5 + 1, v58, (v63 >> 2) & 1, v63) != 0;
              ++v5;
            }
            while ( (char *)v58 != v5 );
          }
          return 1LL;
        }
      }
      else if ( v63 & 1 )
      {
        goto LABEL_93;
      }
      v63 &= 0xFFFFFFFB;
LABEL_93:
      v8 = (unsigned __int8)v8;
      if ( v65 == 92 && !v9 )
        v32 = *v61;
      if ( v10 )
      {
        v35 = v32;
        v36 = v34;
        v37 = __ctype_tolower_loc();
        v34 = v36;
        v32 = (*v37)[v35];
      }
      v60 = (signed __int64)(v34 - 1);
      if ( v33 > v5 )
      {
        v38 = v32;
        v39 = v8;
        while ( 1 )
        {
          v40 = (unsigned __int8)*v5;
          if ( v10 )
          {
            v41 = *v5;
            v40 = (*__ctype_tolower_loc())[v41];
          }
          if ( v40 == v38 && !sub_406E20(v60, v5, v58, v39, v63) )
            break;
          ++v5;
          v39 = 0;
          if ( v33 == v5 )
            return 1LL;
        }
        return 0LL;
      }
      return 1LL;
    }
  }
  LOBYTE(v27) = v62;
LABEL_82:
  if ( (_BYTE)v27 == 63 )
  {
    if ( v5 == (char *)v58 || *v5 == 47 && v63 & 1 )
      return 1LL;
    ++v5;
  }
  v29 = v28;
  goto LABEL_84;
}

signed __int64 __fastcall sub_407910(char *a1, char *a2, unsigned int a3)
{
  unsigned int v3; // er12@1
  char *v4; // rbx@2
  size_t v5; // rax@2
  signed __int64 result; // rax@2
  size_t v7; // rax@4
  size_t v8; // rbx@4
  size_t v9; // rax@6
  size_t v10; // r13@6
  unsigned __int64 v11; // rax@8
  size_t v12; // rdi@10
  void *v13; // rsp@11
  wchar_t *v14; // rax@14
  wint_t *v15; // r14@14
  wchar_t *v16; // r15@15
  unsigned int v17; // [sp+Ch] [bp-54h]@16
  char *s; // [sp+10h] [bp-50h]@1
  char *src; // [sp+18h] [bp-48h]@1
  mbstate_t ps; // [sp+28h] [bp-38h]@4

  v3 = a3;
  src = a1;
  s = a2;
  if ( __ctype_get_mb_cur_max() == 1 )
    goto LABEL_22;
  ps = 0LL;
  v7 = mbsrtowcs(0LL, (const char **)&src, 0LL, &ps);
  v8 = v7 + 1;
  if ( v7 == -1LL )
    goto LABEL_22;
  if ( !mbsinit(&ps) )
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x129u, "gnu_fnmatch");
  v9 = mbsrtowcs(0LL, (const char **)&s, 0LL, &ps);
  v10 = v9 + 1;
  if ( v9 == -1LL )
  {
LABEL_22:
    v4 = s;
    v5 = strlen(s);
    return sub_406E20(src, v4, (unsigned __int64)&v4[v5], (v3 >> 2) & 1, v3);
  }
  if ( !mbsinit(&ps) )
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x12Du, "gnu_fnmatch");
  v11 = v10 + v8;
  if ( __CFADD__(v10, v8) || v11 > 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_23;
  v12 = 4 * v11;
  if ( v11 <= 0x7CF )
  {
    v13 = alloca(v12 + 8);
    mbsrtowcs((wchar_t *)(((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL), (const char **)&src, v8, &ps);
    if ( mbsinit(&ps) )
    {
      mbsrtowcs(
        (wchar_t *)((((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL) + 4 * v8),
        (const char **)&s,
        v10,
        &ps);
      return sub_405DF0(
               (wint_t *)(((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL),
               (wint_t *)((((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL) + 4 * v8),
               (((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL) + 4 * v8 + 4 * v10 - 4,
               (v3 >> 2) & 1,
               v3);
    }
LABEL_17:
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x147u, "gnu_fnmatch");
  }
  v14 = (wchar_t *)malloc(v12);
  v15 = (wint_t *)v14;
  if ( !v14 )
  {
LABEL_23:
    *__errno_location() = 12;
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v16 = &v14[v8];
    mbsrtowcs(v14, (const char **)&src, v8, &ps);
    if ( !mbsinit(&ps) )
      goto LABEL_17;
    mbsrtowcs(v16, (const char **)&s, v10, &ps);
    v17 = sub_405DF0(v15, (wint_t *)v16, (unsigned __int64)&v16[v10 - 1], (v3 >> 2) & 1, v3);
    free(v15);
    result = v17;
  }
  return result;
}

FILE *__fastcall sub_407B50(const char *a1, const char *a2, FILE *a3)
{
  FILE *v3; // rax@1
  FILE *v4; // rbx@1
  int v5; // er13@3
  int v7; // eax@6
  int v8; // er14@6

  v3 = freopen(a1, a2, a3);
  v4 = v3;
  if ( !v3 )
    return v4;
  if ( !a1 )
    return v4;
  v5 = fileno(v3);
  if ( dup2(v5, v5) >= 0 || *__errno_location() != 9 )
    return v4;
  v7 = open("/dev/null", 0x80000);
  v8 = v7;
  if ( v5 != v7 )
  {
    if ( dup2(v7, v5) >= 0 )
    {
      close(v8);
      return freopen(a1, a2, v4);
    }
    close(v8);
    return v4;
  }
  return freopen(a1, a2, v4);
}

int __fastcall sub_407BF0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_407C50(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_407D30(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_408350(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_407C50(a2, a7);
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
        sub_407C50((__int64)v11, a7);
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
            v40 = sub_407D30(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_407D30(v10, v11, v12, v53, v54, a6, a7, v8, 4246034LL);
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
        v40 = sub_407D30(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_408920(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60F4E0 = dword_60F2BC;
  dword_60F4E4 = dword_60F2B8;
  result = sub_408350(a1, a2, a3, a4, a5, a6, (__int64)&dword_60F4E0, a7);
  dword_60F2BC = dword_60F4E0;
  qword_60F520 = qword_60F4F0;
  dword_60F2B4 = dword_60F4E8;
  return result;
}

__int64 __fastcall sub_4089A0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_408920(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_408A20(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_408F40(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_408AA0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

noreturn void  sub_408BB0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  __fprintf_chk(stderr, 1LL, "%s\n", v0);
  exit(status);
}

int __fastcall sub_408BF0(__int64 a1, __int64 a2)
{
  int (__fastcall *v2)(__int64); // rax@1
  int result; // eax@2

  v2 = *(int (__fastcall **)(__int64))(a1 + 56);
  if ( *(_BYTE *)(a1 + 80) & 1 )
    result = v2(*(_QWORD *)(a1 + 72));
  else
    result = v2(a2);
  return result;
}

int __fastcall sub_408C10(__int64 a1, __int64 a2)
{
  int (__fastcall *v2)(__int64); // rax@1
  int result; // eax@2

  v2 = *(int (__fastcall **)(__int64))(a1 + 64);
  if ( *(_BYTE *)(a1 + 80) & 1 )
    result = v2(*(_QWORD *)(a1 + 72));
  else
    result = v2(a2);
  return result;
}

signed __int64 __fastcall obstack_begin(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  signed __int64 v5; // rbp@2
  signed __int64 v6; // r12@2
  __int64 v7; // rax@5
  signed __int64 v8; // rbp@6
  __int64 v9; // rdx@6
  __int64 v10; // rdx@6
  signed __int64 result; // rax@6

  *(_BYTE *)(a1 + 80) &= 0xFEu;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  if ( a3 )
  {
    v5 = a3;
    v6 = a3 - 1;
  }
  else
  {
    v6 = 15LL;
    v5 = 16LL;
  }
  *(_QWORD *)(a1 + 48) = v6;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  LODWORD(v7) = sub_408BF0(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = (v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(v7 + 8) = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

signed __int64 __fastcall obstack_begin(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  signed __int64 v5; // rbp@2
  signed __int64 v6; // r12@2
  __int64 v7; // rax@5
  signed __int64 v8; // rbp@6
  __int64 v9; // rdx@6
  __int64 v10; // rdx@6
  signed __int64 result; // rax@6

  *(_BYTE *)(a1 + 80) &= 0xFEu;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  if ( a3 )
  {
    v5 = a3;
    v6 = a3 - 1;
  }
  else
  {
    v6 = 15LL;
    v5 = 16LL;
  }
  *(_QWORD *)(a1 + 48) = v6;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  LODWORD(v7) = sub_408BF0(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = (v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(v7 + 8) = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

signed __int64 __fastcall obstack_begin(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  signed __int64 v5; // rbp@2
  signed __int64 v6; // r12@2
  __int64 v7; // rax@5
  signed __int64 v8; // rbp@6
  __int64 v9; // rdx@6
  __int64 v10; // rdx@6
  signed __int64 result; // rax@6

  *(_BYTE *)(a1 + 80) &= 0xFEu;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  if ( a3 )
  {
    v5 = a3;
    v6 = a3 - 1;
  }
  else
  {
    v6 = 15LL;
    v5 = 16LL;
  }
  *(_QWORD *)(a1 + 48) = v6;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  LODWORD(v7) = sub_408BF0(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = (v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(v7 + 8) = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

void __fastcall obstack_begin_1(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_BYTE *)(a1 + 80) |= 1u;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  JUMPOUT(&loc_408C30);
}

int __fastcall obstack_newchunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13@1
  __int64 v5; // rbp@1
  unsigned __int64 v6; // rsi@1
  __int64 v7; // rax@1
  unsigned __int8 v8; // cf@1
  unsigned __int64 v9; // rsi@1
  unsigned __int64 v10; // rdx@1
  unsigned __int64 v11; // rbx@1
  __int64 v12; // rax@7
  __int64 v13; // r14@7
  void *v14; // rbx@8
  signed __int64 v15; // rax@8

  v4 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  v8 = __CFADD__(v4, a2);
  v6 = v4 + a2;
  v7 = v8;
  v8 = __CFADD__(*(_QWORD *)(a1 + 48), v6);
  v9 = *(_QWORD *)(a1 + 48) + v6;
  LOBYTE(a4) = v8;
  v10 = v4 >> 3;
  v11 = v9 + (v4 >> 3) + 100;
  if ( *(_QWORD *)a1 >= v9 )
    v9 = *(_QWORD *)a1;
  if ( v9 >= v11 )
    v11 = v9;
  if ( v7 || (a4 = v8) != 0 || (v9 = v11, LODWORD(v12) = sub_408BF0(a1, v11), (v13 = v12) == 0) )
    obstack_alloc_failed_handler(a1, v9, v10, a4);
  *(_QWORD *)(a1 + 8) = v12;
  *(_QWORD *)(v12 + 8) = v5;
  *(_QWORD *)(a1 + 32) = v12 + v11;
  *(_QWORD *)v12 = v12 + v11;
  v14 = (void *)(~*(_QWORD *)(a1 + 48) & (v12 + *(_QWORD *)(a1 + 48) + 16));
  LODWORD(v15) = (unsigned __int64)memcpy(v14, *(const void **)(a1 + 16), v4);
  if ( !(*(_BYTE *)(a1 + 80) & 2) )
  {
    v15 = (v5 + *(_QWORD *)(a1 + 48) + 16) & ~*(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 16) == v15 )
    {
      *(_QWORD *)(v13 + 8) = *(_QWORD *)(v5 + 8);
      LODWORD(v15) = sub_408C10(a1, v5);
    }
  }
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = (char *)v14 + v4;
  *(_BYTE *)(a1 + 80) &= 0xFDu;
  return v15;
}

unsigned __int64 __fastcall obstack_allocated_p(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax@1

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    while ( a2 <= result || *(_QWORD *)result < a2 )
    {
      result = *(_QWORD *)(result + 8);
      if ( !result )
        return 0LL;
    }
    result = 1LL;
  }
  return result;
}

void obstack_free(struct obstack *obstack, void *block)
{
  char *v2; // rbp@1
  struct _obstack_chunk *v3; // rsi@1
  char *v4; // rax@3
  struct _obstack_chunk *v5; // r12@4

  v2 = (char *)block;
  v3 = obstack->chunk;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( v3 < (struct _obstack_chunk *)v2 )
      {
        v4 = v3->limit;
        if ( v3->limit >= v2 )
          break;
      }
      v5 = v3->prev;
      sub_408C10((__int64)obstack, (__int64)v3);
      *((_BYTE *)obstack + 80) |= 2u;
      v3 = v5;
      if ( !v5 )
        goto LABEL_5;
    }
    obstack->next_free = v2;
    obstack->object_base = v2;
    obstack->chunk_limit = v4;
    obstack->chunk = v3;
  }
  else
  {
LABEL_5:
    if ( v2 )
      abort();
  }
}

void obstack_free(struct obstack *obstack, void *block)
{
  char *v2; // rbp@1
  struct _obstack_chunk *v3; // rsi@1
  char *v4; // rax@3
  struct _obstack_chunk *v5; // r12@4

  v2 = (char *)block;
  v3 = obstack->chunk;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( v3 < (struct _obstack_chunk *)v2 )
      {
        v4 = v3->limit;
        if ( v3->limit >= v2 )
          break;
      }
      v5 = v3->prev;
      sub_408C10((__int64)obstack, (__int64)v3);
      *((_BYTE *)obstack + 80) |= 2u;
      v3 = v5;
      if ( !v5 )
        goto LABEL_5;
    }
    obstack->next_free = v2;
    obstack->object_base = v2;
    obstack->chunk_limit = v4;
    obstack->chunk = v3;
  }
  else
  {
LABEL_5:
    if ( v2 )
      abort();
  }
}

__int64 __fastcall obstack_memory_used(__int64 a1)
{
  __int64 v1; // rdx@1
  __int64 result; // rax@1
  __int64 v3; // rcx@2

  v1 = *(_QWORD *)(a1 + 8);
  for ( result = 0LL; v1; result += v3 )
  {
    v3 = *(_QWORD *)v1 - v1;
    v1 = *(_QWORD *)(v1 + 8);
  }
  return result;
}

int __fastcall sub_408EE0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4055A0(stream);
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

bool __fastcall sub_408F40(int a1)
{
  char *v1; // rdx@1
  bool result; // al@1
  bool v3; // cf@1
  bool v4; // zf@1
  signed __int64 v5; // rcx@2
  char *v6; // rdi@2
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
      v3 = (unsigned __int8)*v7 < (unsigned __int8)*v6;
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

const char *sub_408FA0()
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
  v1 = qword_60F518;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_60F518 )
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
          qword_60F518 = v1;
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
                sub_4055A0(v61);
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
            sub_4055A0(v40);
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409580(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60F248 )
    v1 = unk_60F248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409598(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60EE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
