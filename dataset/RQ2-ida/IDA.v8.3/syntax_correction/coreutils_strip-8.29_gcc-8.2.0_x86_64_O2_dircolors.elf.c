#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  __int64 v3; // r13
  char v4; // bp
  int v5; // eax
  int v6; // r12d
  char **v7; // rbx
  const char *v8; // rbx
  const char *v10; // rbx
  char v11; // r12
  const void *v12; // r12
  size_t v13; // rbx
  const char *v14; // r14
  char *v15; // rax
  const char *v16; // rdi
  char *v17; // rax
  const char *v18; // r13
  const char *v19; // rbx
  int *v20; // rax
  __int64 v21; // rbx
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  __int64 v26; // rbx
  char *v27; // rax

  LODWORD(v3) = 2;
  v4 = 0;
  sub_403110(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409580(sub_402DE0);
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
          sub_4051B0(
            (_DWORD)stdout,
            (unsigned int)"dircolors",
            (unsigned int)&unk_4096B5,
            (_DWORD)off_60F250,
            (unsigned int)"H. Peter Anvin",
            0);
          exit(0);
        }
        if ( v5 == -130 )
          sub_402A50(0);
LABEL_44:
        sub_402A50(1);
      }
      if ( v5 == 99 )
      {
        LODWORD(v3) = 1;
      }
      else
      {
        if ( v5 != 112 )
          goto LABEL_44;
        v4 = 1;
      }
    }
  }
  v6 = a1 - dword_60F2BC;
  v7 = &a2[dword_60F2BC];
  if ( (_DWORD)v3 != 2 && v4 )
  {
    v24 = dcgettext(
            0LL,
            "the options to output dircolors' internal database and\nto select a shell syntax are mutually exclusive",
            5);
    error(0, 0, v24);
    goto LABEL_44;
  }
  if ( (unsigned __int8)(v4 ^ 1) < v6 )
  {
    if ( v4 )
    {
      v21 = sub_404D30(*v7);
      v22 = dcgettext(0LL, "extra operand %s", 5);
      error(0, 0, v22, v21);
      v23 = dcgettext(0LL, "file operands cannot be combined with --print-database (-p)", 5);
      __fprintf_chk(stderr, 1LL, "%s\n", v23);
      goto LABEL_44;
    }
    goto LABEL_47;
  }
  if ( v4 )
  {
    v8 = "# Configuration file for dircolors, a utility to help you set the";
    do
    {
      puts(v8);
      v8 += strlen(v8) + 1;
    }
    while ( (unsigned __int64)(v8 - "# Configuration file for dircolors, a utility to help you set the") <= 0x104C );
    return (unsigned __int8)v4 ^ 1u;
  }
  if ( (_DWORD)v3 == 2 )
  {
    v17 = getenv("SHELL");
    if ( v17 && *v17 )
    {
      v18 = (const char *)sub_402E80(v17);
      if ( !strcmp(v18, "csh") )
        LODWORD(v3) = 1;
      else
        v3 = strcmp(v18, "tcsh") == 0;
      goto LABEL_22;
    }
    v25 = dcgettext(0LL, "no SHELL environment variable, and no shell type option given", 5);
    error(1, 0, v25);
LABEL_47:
    v26 = sub_404D30(v7[1]);
    v27 = dcgettext(0LL, "extra operand %s", 5);
    error(0, 0, v27, v26);
    goto LABEL_44;
  }
LABEL_22:
  obstack_begin(&unk_60F320, 0LL, 0LL, malloc, free);
  if ( v6 )
  {
    v10 = *v7;
    if ( strcmp(v10, "-") && !sub_402F60(v10, "r", stdin) || (v11 = sub_402480(stdin), (unsigned int)sub_4055A0(stdin)) )
    {
      v19 = (const char *)sub_404BB0(0LL, 3LL, v10);
      v20 = __errno_location();
      error(0, *v20, "%s", v19);
      return (unsigned __int8)v4 ^ 1u;
    }
    v4 = v11;
  }
  else
  {
    v4 = sub_402480(0LL);
  }
  if ( v4 )
  {
    v12 = ptr;
    v13 = qword_60F338 - (_QWORD)ptr;
    if ( (void *)qword_60F338 == ptr )
      byte_60F370 |= 2u;
    v14 = "';\nexport LS_COLORS\n";
    v15 = (char *)(~qword_60F350 & (qword_60F350 + qword_60F338));
    v16 = "LS_COLORS='";
    if ( (unsigned __int64)&v15[-qword_60F328] > qword_60F340 - qword_60F328 )
      v15 = (char *)qword_60F340;
    qword_60F338 = (__int64)v15;
    ptr = v15;
    if ( (_DWORD)v3 )
    {
      v14 = "'\n";
      v16 = "setenv LS_COLORS '";
    }
    fputs_unlocked(v16, stdout);
    fwrite_unlocked(v12, 1uLL, v13, stdout);
    fputs_unlocked(v14, stdout);
  }
  return (unsigned __int8)v4 ^ 1u;
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

void *sub_4021DB()
{
  return &unk_60F2C8;
}

__int64 sub_4021FA()
{
  return 0LL;
}

void *sub_402231()
{
  void *result; // rax

  if ( !byte_60F308 )
  {
    while ( qword_60F310 < (unsigned __int64)(&qword_60EE48 - qword_60EE40 - 1) )
      ((void (*)(void))qword_60EE40[++qword_60F310])();
    result = sub_4021DB();
    byte_60F308 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_402288()
{
  return sub_4021FA();
}

__int64 __fastcall sub_402290(unsigned __int8 *a1)
{
  __int64 result; // rax
  char v2; // bp
  unsigned __int8 *v3; // rbx
  _BYTE *v4; // rax
  _BYTE *v5; // rdx
  _BYTE *v6; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rdx

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
        v5 = v4 + 1;
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
  char *v3; // rax
  char *v4; // rbx
  bool v5; // zf
  const char *v6; // rax
  int v7; // r15d
  char *v8; // r12
  __int64 v9; // rbp
  char *v10; // rbx
  const unsigned __int16 **v11; // rax
  const unsigned __int16 *v12; // rsi
  __int64 v13; // rcx
  char *v14; // r13
  char *v15; // rbx
  const unsigned __int16 *v16; // rdi
  __int64 v17; // rax
  unsigned __int8 *v18; // rax
  unsigned __int8 *i; // rsi
  __int64 v20; // rax
  unsigned __int8 *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // r13
  char *v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _BYTE *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _BYTE *v33; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _BYTE *v37; // rax
  __int64 v38; // rdx
  const char *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  char *v42; // rdx
  _BYTE *v43; // rax
  __int64 v44; // rcx
  _BYTE *v45; // rax
  char *v46; // rcx
  char *v47; // rax
  const unsigned __int16 **v48; // [rsp+0h] [rbp-68h]
  __int64 v49; // [rsp+0h] [rbp-68h]
  char *v50; // [rsp+0h] [rbp-68h]
  char *v51; // [rsp+0h] [rbp-68h]
  const char *v53; // [rsp+10h] [rbp-58h]
  unsigned __int8 v54; // [rsp+1Bh] [rbp-4Dh]
  int v55; // [rsp+1Ch] [rbp-4Ch]
  char *lineptr; // [rsp+20h] [rbp-48h] BYREF
  size_t n[8]; // [rsp+28h] [rbp-40h] BYREF

  lineptr = 0LL;
  n[0] = 0LL;
  v3 = getenv("TERM");
  if ( v3 )
  {
    v4 = v3;
    v5 = *v3 == 0;
    v6 = "none";
    if ( !v5 )
      v6 = v4;
    v53 = v6;
  }
  else
  {
    v53 = "none";
  }
  v54 = 1;
  v7 = 3;
  v8 = "# Configuration file for dircolors, a utility to help you set the";
  v9 = 0LL;
LABEL_6:
  ++v9;
  if ( !stream )
  {
    while ( 1 )
    {
      if ( v8 == "8.29" )
        return v54;
      v10 = v8;
      v8 += strlen(v8) + 1;
LABEL_9:
      v11 = __ctype_b_loc();
      v12 = *v11;
      while ( 1 )
      {
        v13 = (unsigned __int8)*v10;
        if ( (v12[v13] & 0x2000) == 0 )
          break;
        ++v10;
      }
      if ( !(_BYTE)v13 || (_BYTE)v13 == 35 )
        goto LABEL_6;
      v14 = v10;
      do
        ++v14;
      while ( (((v12[(unsigned __int8)*v14] >> 13) ^ 1) & (*v14 != 0)) != 0 );
      v48 = v11;
      v15 = (char *)sub_405580(v10, v14 - v10);
      if ( !*v14 )
        goto LABEL_38;
      v16 = *v48;
      do
        v17 = (unsigned __int8)*++v14;
      while ( (v16[v17] & 0x2000) != 0 );
      if ( !(_BYTE)v17 || (v18 = (unsigned __int8 *)v14, *v14 == 35) )
      {
LABEL_38:
        if ( !v15 )
          goto LABEL_6;
LABEL_39:
        v25 = sub_404BB0(0LL, 3LL, a2);
        v26 = dcgettext(0LL, "%s:%lu: invalid line;  missing second token", 5);
        error(0, 0, v26, v25, v9);
        free(v15);
        v54 = 0;
        goto LABEL_6;
      }
      while ( 1 )
      {
        i = v18 + 1;
        if ( v18[1] == 35 || v18[1] == 0 )
          break;
        ++v18;
      }
      if ( (v16[*v18] & 0x2000) != 0 )
      {
        for ( i = v18; (v16[*(i - 1)] & 0x2000) != 0; --i )
          ;
      }
      v20 = sub_405580(v14, i - (unsigned __int8 *)v14);
      v21 = (unsigned __int8 *)v20;
      if ( !v15 )
        goto LABEL_6;
      if ( !v20 )
        goto LABEL_39;
      if ( !(unsigned int)sub_402D60(v15, "TERM") )
      {
        if ( !(unsigned int)sub_407910(v21, v53, 0LL) || (v5 = v7 == 2, v7 = 0, v5) )
          v7 = 2;
        goto LABEL_34;
      }
      if ( v7 == 2 )
        break;
      if ( v7 )
      {
        v24 = *v15;
        if ( *v15 != 46 )
          goto LABEL_30;
LABEL_44:
        v27 = (_BYTE *)qword_60F338;
        if ( qword_60F340 == qword_60F338 )
        {
          obstack_newchunk(&unk_60F320, 1LL, v22, v23);
          v27 = (_BYTE *)qword_60F338;
        }
        qword_60F338 = (__int64)(v27 + 1);
        *v27 = 42;
        sub_402290((unsigned __int8 *)v15);
        v30 = (_BYTE *)qword_60F338;
        if ( qword_60F340 == qword_60F338 )
        {
          obstack_newchunk(&unk_60F320, 1LL, v28, v29);
          v30 = (_BYTE *)qword_60F338;
        }
        qword_60F338 = (__int64)(v30 + 1);
        *v30 = 61;
        sub_402290(v21);
        v33 = (_BYTE *)qword_60F338;
        if ( qword_60F340 != qword_60F338 )
        {
LABEL_49:
          qword_60F338 = (__int64)(v33 + 1);
          *v33 = 58;
          goto LABEL_34;
        }
LABEL_58:
        obstack_newchunk(&unk_60F320, 1LL, v31, v32);
LABEL_57:
        v33 = (_BYTE *)qword_60F338;
        goto LABEL_49;
      }
LABEL_34:
      ++v9;
      free(v15);
      free(v21);
      if ( stream )
        goto LABEL_7;
    }
    v24 = *v15;
    v7 = 1;
    if ( *v15 == 46 )
      goto LABEL_44;
LABEL_30:
    if ( v24 == 42 )
    {
      sub_402290((unsigned __int8 *)v15);
      if ( qword_60F340 != qword_60F338 )
        goto LABEL_56;
    }
    else
    {
      if ( !(unsigned int)sub_402D60(v15, "OPTIONS")
        || !(unsigned int)sub_402D60(v15, "COLOR")
        || !(unsigned int)sub_402D60(v15, "EIGHTBIT") )
      {
        goto LABEL_34;
      }
      v38 = 0LL;
      v39 = "NORMAL";
      while ( 1 )
      {
        v55 = v38;
        v49 = v38;
        if ( !(unsigned int)sub_402D60(v15, v39) )
          break;
        v38 = v49 + 1;
        v39 = off_409FC0[v49 + 1];
        if ( !v39 )
        {
          if ( v7 != 3 )
          {
            if ( a2 )
              v46 = (char *)sub_404BB0(0LL, 3LL, a2);
            else
              v46 = dcgettext(0LL, "<internal>", 5);
            v50 = v46;
            v47 = dcgettext(0LL, "%s:%lu: unrecognized keyword %s", 5);
            error(0, 0, v47, v50, v9, v15);
            v54 = 0;
          }
          goto LABEL_34;
        }
      }
      if ( qword_60F340 == qword_60F338 )
        obstack_newchunk(&unk_60F320, 1LL, v40, v41);
      v42 = off_409E80[v55];
      v43 = (_BYTE *)qword_60F338++;
      v44 = (unsigned __int8)*v42;
      *v43 = v44;
      if ( qword_60F340 == qword_60F338 )
      {
        v51 = v42;
        obstack_newchunk(&unk_60F320, 1LL, v42, v44);
        v42 = v51;
      }
      v45 = (_BYTE *)qword_60F338;
      v36 = ++qword_60F338;
      v35 = (unsigned __int8)v42[1];
      *v45 = v35;
      if ( qword_60F340 != qword_60F338 )
        goto LABEL_56;
    }
    obstack_newchunk(&unk_60F320, 1LL, v35, v36);
LABEL_56:
    v37 = (_BYTE *)qword_60F338++;
    *v37 = 61;
    sub_402290(v21);
    if ( qword_60F340 == qword_60F338 )
      goto LABEL_58;
    goto LABEL_57;
  }
LABEL_7:
  if ( __getdelim(&lineptr, n, 10, stream) > 0 )
  {
    v10 = lineptr;
    goto LABEL_9;
  }
  free(lineptr);
  return v54;
}

noreturn void __fastcall  sub_402A50(int status)
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
  __int64 *v12; // rax
  const char *v13; // rbp
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  __int64 v22[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_60F388;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "Output commands to set the LS_COLORS environment variable.\n"
         "\n"
         "Determine format of output:\n"
         "  -b, --sh, --bourne-shell    output Bourne shell code to set LS_COLORS\n"
         "  -c, --csh, --c-shell        output C shell code to set LS_COLORS\n"
         "  -p, --print-database        output defaults\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "\n"
          "If FILE is specified, read it to determine which colors to use for which\n"
          "file types and extensions.  Otherwise, a precompiled database is used.\n"
          "For details on the format of these files, run 'dircolors --print-database'.\n",
          5);
  fputs_unlocked(v11, v10);
  v22[0] = (__int64)"[";
  v12 = v22;
  v22[1] = (__int64)"test invocation";
  v22[2] = (__int64)"coreutils";
  v22[3] = (__int64)"Multi-call invocation";
  v22[4] = (__int64)"sha224sum";
  v22[5] = (__int64)"sha2 utilities";
  v22[6] = (__int64)"sha256sum";
  v22[7] = (__int64)"sha2 utilities";
  v22[8] = (__int64)"sha384sum";
  v22[9] = (__int64)"sha2 utilities";
  v22[10] = (__int64)"sha512sum";
  v22[11] = (__int64)"sha2 utilities";
  v22[12] = 0LL;
  v22[13] = 0LL;
  do
    v12 += 2;
  while ( *v12 && strcmp("dircolors", (const char *)*v12) );
  v13 = (const char *)v12[1];
  if ( v13 )
  {
    v14 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v14, &unk_4096B5);
    v15 = setlocale(5, 0LL);
    if ( !v15 || !strncmp(v15, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v18 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v18, &unk_4096B5);
    v19 = setlocale(5, 0LL);
    if ( !v19 || !strncmp(v19, "en_", 3uLL) )
    {
      v13 = "dircolors";
      v20 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v20, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v13 = "dircolors";
  }
  v21 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v21, "dircolors");
LABEL_10:
  v16 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v16, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v17 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v17, v13);
LABEL_3:
  exit(status);
}

__int64 __fastcall sub_402D60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // r8d
  char v5; // al
  int v6; // r9d
  char v7; // cl

  result = 0LL;
  if ( a1 != a2 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(unsigned __int8 *)(a1 + v3);
      v5 = *(_BYTE *)(a1 + v3);
      if ( (unsigned int)(v4 - 65) <= 0x19 )
      {
        LOBYTE(v4) = v4 + 32;
        v5 += 32;
      }
      v6 = *(unsigned __int8 *)(a2 + v3);
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
    return (unsigned __int8)v4 - (unsigned int)(unsigned __int8)v6;
  }
  return result;
}

__int64 sub_402DE0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

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
        v5 = (const char *)sub_404B80();
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
  char v1; // dl
  _BYTE *result; // rax
  _BYTE *v3; // rcx
  char v4; // si

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

size_t __fastcall sub_402EE0(const char *a1)
{
  size_t result; // rax
  size_t v2; // rdx

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

__int64 __fastcall sub_402F10(int a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 1;
  v2 = open("/dev/null", 0);
  if ( a1 == v2 )
    return v1;
  v1 = 0;
  if ( v2 < 0 )
    return v1;
  close(v2);
  *__errno_location() = 9;
  return 0LL;
}

__int64 __fastcall sub_402F60(char *a1, char *a2, FILE *a3)
{
  int v3; // ebx
  int *v4; // r14
  char v5; // bl
  char v6; // bp
  char v7; // r13
  __int64 v8; // r12
  int v9; // r15d

  v3 = fileno(a3);
  v4 = __errno_location();
  if ( v3 == 1 )
  {
    v5 = 0;
    v6 = 0;
  }
  else
  {
    if ( v3 == 2 )
    {
      v5 = 0;
    }
    else
    {
      if ( !v3 )
      {
        v5 = 0;
        v6 = 0;
        v7 = 0;
LABEL_11:
        v8 = sub_407B50(a1, a2);
        goto LABEL_12;
      }
      v5 = dup2(2, 2) != 2;
    }
    v6 = dup2(1, 1) != 1;
  }
  if ( !dup2(0, 0) )
  {
    v7 = 0;
    if ( !v6 )
      goto LABEL_9;
    goto LABEL_18;
  }
  v7 = sub_402F10(0);
  if ( !v7 )
  {
    v7 = 1;
    v8 = 0LL;
LABEL_12:
    v9 = *v4;
    if ( !v5 )
      goto LABEL_13;
    goto LABEL_27;
  }
  if ( v6 )
  {
LABEL_18:
    v6 = sub_402F10(1);
    if ( !v6 )
    {
      v9 = *v4;
      v8 = 0LL;
      if ( v5 )
        close(2);
      goto LABEL_21;
    }
  }
LABEL_9:
  if ( !v5 )
    goto LABEL_11;
  v5 = sub_402F10(2);
  if ( v5 )
    goto LABEL_11;
  v9 = *v4;
  v8 = 0LL;
LABEL_27:
  close(2);
LABEL_13:
  if ( !v6 )
  {
    if ( !v7 )
      goto LABEL_15;
LABEL_22:
    close(0);
    if ( v8 )
      return v8;
LABEL_23:
    *v4 = v9;
    return v8;
  }
LABEL_21:
  close(1);
  if ( v7 )
    goto LABEL_22;
LABEL_15:
  if ( !v8 )
    goto LABEL_23;
  return v8;
}

char *__fastcall sub_403110(const char *a1)
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
  qword_60F388 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_4031B0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_408FA0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40B1C1;
      if ( !v5 )
        return (const char *)&unk_40B1B6;
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
    v2 = (char *)&unk_40B1BD;
    if ( !v5 )
      return (const char *)&unk_40B1BA;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "setenv LS_COLORS '" + 17;
  return v6;
}

unsigned __int64 __fastcall sub_4032B0(
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
      s2 = "setenv LS_COLORS '" + 17;
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
      s2 = "setenv LS_COLORS '" + 17;
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
        s2 = "setenv LS_COLORS '" + 17;
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
      s2 = "setenv LS_COLORS '" + 17;
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
                return sub_4032B0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "setenv LS_COLORS '" + 17;
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
              return sub_4032B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_408A20((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_4032B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_4031B0("`", a5);
        v51 = (char *)sub_4031B0((char *)"'", a5);
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

unsigned __int64 __fastcall sub_4032B0(
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
      s2 = "setenv LS_COLORS '" + 17;
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
      s2 = "setenv LS_COLORS '" + 17;
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
        s2 = "setenv LS_COLORS '" + 17;
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
      s2 = "setenv LS_COLORS '" + 17;
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
                return sub_4032B0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "setenv LS_COLORS '" + 17;
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
              return sub_4032B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_408A20((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_4032B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_4031B0("`", a5);
        v51 = (char *)sub_4031B0((char *)"'", a5);
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

_BYTE *__fastcall sub_4044E0(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  v7 = (__m128i *)off_60F298;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405540();
    v9 = 16LL * (a1 + 1);
    if ( off_60F298 == &xmmword_60F2A0 )
    {
      v7 = (__m128i *)sub_405350(0LL, v9);
      off_60F298 = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60F2A0);
    }
    else
    {
      off_60F298 = (void *)sub_405350(off_60F298, v9);
      v7 = (__m128i *)off_60F298;
    }
    memset(&v7[dword_60F2B0], 0, 16LL * (a1 + 1 - dword_60F2B0));
    dword_60F2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_4032B0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60F3A0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4052F0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4032B0(v14, v13, a2, a3, v15, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_4044E0(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  v7 = (__m128i *)off_60F298;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405540();
    v9 = 16LL * (a1 + 1);
    if ( off_60F298 == &xmmword_60F2A0 )
    {
      v7 = (__m128i *)sub_405350(0LL, v9);
      off_60F298 = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60F2A0);
    }
    else
    {
      off_60F298 = (void *)sub_405350(off_60F298, v9);
      v7 = (__m128i *)off_60F298;
    }
    memset(&v7[dword_60F2B0], 0, 16LL * (a1 + 1 - dword_60F2B0));
    dword_60F2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_4032B0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60F3A0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4052F0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4032B0(v14, v13, a2, a3, v15, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_404680(__int128 *a1)
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
    v1 = &xmmword_60F4A0;
  result = sub_4054F0(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_404770(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_60F4A0;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_4032B0(
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

_BYTE *__fastcall sub_4047F0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_60F4A0;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_4032B0(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_4052F0(v11 + 1);
  sub_4032B0(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_4048F0()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)off_60F298;
  if ( dword_60F2B0 > 1 )
  {
    v1 = (void **)((char *)off_60F298 + 24);
    v2 = (void **)((char *)off_60F298 + 16 * (unsigned int)(dword_60F2B0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_60F3A0 )
  {
    free(v4);
    *(_QWORD *)&xmmword_60F2A0 = 256LL;
    *((_QWORD *)&xmmword_60F2A0 + 1) = &unk_60F3A0;
  }
  if ( v0 != &xmmword_60F2A0 )
  {
    free(v0);
    off_60F298 = &xmmword_60F2A0;
  }
  dword_60F2B0 = 1;
}

_BYTE *__fastcall sub_404A00(int a1, int a2, __int64 a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_404A00(int a1, int a2, __int64 a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_404A70(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_4044E0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_404A70(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_4044E0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_404B00(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_60F4D0;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F4A0);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F4B0);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F4C0);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_4044E0(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_404B80(__int64 a1)
{
  return sub_404B00(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_404BB0(int a1, int a2, __int64 a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_404BB0(int a1, int a2, __int64 a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_404C20(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F4A0);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F4B0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_60F4C0);
  v8 = qword_60F4D0;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_4044E0(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_404D30(__int64 a1)
{
  return sub_4044E0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60F260);
}

__int64 __fastcall sub_404D50(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_404D50(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_405150(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_404D50(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_404D50(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_4051B0(
        FILE *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
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
        return sub_404D50(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_404D50(a1, a2, a3, a4, v15, i);
}

int sub_405270()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_4096B5);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_4052F0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405540();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_405340(size_t a1)
{
  return sub_4052F0(a1);
}

void *__fastcall sub_405350(void *a1, size_t a2)
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
        sub_405540();
    }
  }
  return result;
}

void *__fastcall sub_4054A0(size_t n)
{
  void *v1; // rax

  v1 = sub_4052F0(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_4054C0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_405540(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_4054F0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4052F0(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_405520(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_4054F0(src, v1 + 1);
}

noreturn void  sub_405540()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

char *__fastcall sub_405580(const char *a1, size_t a2)
{
  char *result; // rax

  result = strndup(a1, a2);
  if ( !result )
    sub_405540();
  return result;
}

int __fastcall sub_4055A0(FILE *stream)
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
  if ( !(unsigned int)sub_405620(stream) )
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

int __fastcall sub_405620(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_407BF0(stream, 0LL, 1LL);
  return fflush(stream);
}

_DWORD *__fastcall sub_405660(_DWORD *a1)
{
  __int64 v1; // r12
  _DWORD *v2; // rbx
  int v3; // edx
  unsigned __int64 v4; // rcx
  int v6; // edx

  v1 = 3221227009LL;
  v2 = a1;
LABEL_2:
  while ( 1 )
  {
    v3 = v2[1];
    if ( !v3 )
      return a1;
    while ( v3 != 91 )
    {
      v4 = (unsigned int)(v3 - 33);
      if ( (unsigned int)v4 <= 0x1F )
      {
        if ( _bittest64(&v1, v4) && v2[2] == 40 )
        {
          v2 = (_DWORD *)sub_405660(v2 + 2);
          goto LABEL_2;
        }
        if ( v3 == 41 )
          return v2 + 2;
      }
      ++v2;
      v3 = v2[1];
      if ( !v3 )
        return a1;
    }
    if ( !dword_60F4D8 )
      dword_60F4D8 = getenv("POSIXLY_CORRECT") == 0LL ? -1 : 1;
    v6 = v2[2];
    if ( v6 == 33 || dword_60F4D8 < 0 && v6 == 94 )
    {
      v6 = v2[3];
      v2 += 3;
    }
    else
    {
      v2 += 2;
    }
    if ( v6 == 93 )
    {
      v6 = v2[1];
      ++v2;
    }
    while ( v6 != 93 )
    {
      if ( !v6 )
        return a1;
      v6 = v2[1];
      ++v2;
    }
  }
}

unsigned __int8 *__fastcall sub_405760(unsigned __int8 *a1)
{
  __int64 v1; // r12
  unsigned __int8 *v2; // rbx
  int v3; // edx
  unsigned __int8 v5; // dl

  v1 = 3221227009LL;
  v2 = a1;
LABEL_2:
  while ( 1 )
  {
    v3 = v2[1];
    if ( !(_BYTE)v3 )
      return a1;
    while ( (_BYTE)v3 != 91 )
    {
      if ( (unsigned __int8)(v3 - 33) <= 0x1Fu )
      {
        if ( _bittest64(&v1, (unsigned int)(v3 - 33)) && v2[2] == 40 )
        {
          v2 = (unsigned __int8 *)sub_405760(v2 + 2);
          goto LABEL_2;
        }
        if ( (_BYTE)v3 == 41 )
          return v2 + 2;
      }
      v3 = (++v2)[1];
      if ( !(_BYTE)v3 )
        return a1;
    }
    if ( !dword_60F4D8 )
      dword_60F4D8 = getenv("POSIXLY_CORRECT") == 0LL ? -1 : 1;
    v5 = v2[2];
    if ( v5 == 33 || dword_60F4D8 < 0 && v5 == 94 )
    {
      v5 = v2[3];
      v2 += 3;
    }
    else
    {
      v2 += 2;
    }
    if ( v5 == 93 )
      v5 = *++v2;
    while ( v5 != 93 )
    {
      if ( !v5 )
        return a1;
      v5 = *++v2;
    }
  }
}

__int64 __fastcall sub_405860(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned int v6; // r12d
  int v7; // eax
  __int64 v8; // r14
  const wchar_t *v9; // rsi
  size_t *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  wchar_t v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  void *v19; // rsp
  wchar_t *v20; // rax
  char *v21; // rax
  size_t *v22; // r13
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  void *v25; // rsp
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  unsigned int v28; // r12d
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r15
  _BOOL8 v32; // rcx
  _BOOL8 v33; // rcx
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r14
  unsigned int v36; // ebx
  _QWORD *v37; // r13
  __int64 v38; // rcx
  unsigned __int64 v39; // r15
  unsigned int v40; // ebx
  wchar_t *v41; // rax
  __int64 v42; // [rsp+0h] [rbp-80h] BYREF
  const wchar_t *v43; // [rsp+8h] [rbp-78h] BYREF
  __int64 v44; // [rsp+10h] [rbp-70h]
  unsigned __int64 v45; // [rsp+18h] [rbp-68h]
  unsigned __int8 v46; // [rsp+23h] [rbp-5Dh]
  unsigned int v47; // [rsp+24h] [rbp-5Ch]
  unsigned __int64 v48; // [rsp+28h] [rbp-58h]
  __int64 v49; // [rsp+30h] [rbp-50h]
  size_t v50; // [rsp+38h] [rbp-48h]
  size_t v51; // [rsp+48h] [rbp-38h] BYREF

  LOBYTE(v6) = a5;
  LODWORD(v49) = a1;
  v45 = a3;
  v48 = a4;
  v47 = a6;
  v46 = a5;
  v51 = 0LL;
  v50 = wcslen((const wchar_t *)a2);
  v7 = *(_DWORD *)(a2 + 4);
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = a2 + 4;
  v44 = a2;
  v9 = (const wchar_t *)(a2 + 4);
  v10 = &v51;
  v11 = 3221227009LL;
  v12 = 0LL;
  while ( 2 )
  {
    while ( v7 == 91 )
    {
      if ( !dword_60F4D8 )
      {
        v43 = v9;
        v21 = getenv("POSIXLY_CORRECT");
        v9 = v43;
        dword_60F4D8 = v21 == 0LL ? -1 : 1;
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
          return 0xFFFFFFFFLL;
        v15 = *(_DWORD *)v8;
        v16 += 4LL;
      }
      v7 = *(_DWORD *)(v16 + 4);
LABEL_6:
      if ( !v7 )
        return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      v13 = (unsigned int)(v7 - 33);
      if ( (unsigned int)v13 > 0x1F )
      {
        if ( v7 == 124 && !v12 )
        {
          v17 = v50;
          if ( (unsigned int)(v49 - 63) > 1 )
            v17 = ((v8 - (__int64)v9) >> 2) + 1;
          v18 = (4 * v17 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v18 - 8 > 0x1F37 || v17 > 0x3FFFFFFFFFFFFFFFLL )
            return 0xFFFFFFFFLL;
          v19 = alloca(v18 + 8);
          v20 = wmempcpy((wchar_t *)&v43, v9, (v8 - (__int64)v9) >> 2);
          v9 = (const wchar_t *)(v8 + 4);
          *v20 = 0;
          v7 = *(_DWORD *)(v8 + 4);
          v8 += 4LL;
          v42 = 0LL;
          *v10 = (size_t)&v42;
          v10 = (size_t *)&v42;
          v12 = 0LL;
        }
        else
        {
LABEL_5:
          v7 = *(_DWORD *)(v8 + 4);
          v8 += 4LL;
        }
        goto LABEL_6;
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
        return 0xFFFFFFFFLL;
      continue;
    }
    break;
  }
  v22 = v10;
  v23 = v44;
  if ( (unsigned int)(v49 - 63) > 1 )
    v50 = ((v8 - (__int64)v9) >> 2) + 1;
  v24 = (4 * v50 + 15) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v24 - 8 > 0x1F37 || v50 > 0x3FFFFFFFFFFFFFFFLL )
    return 0xFFFFFFFFLL;
  v25 = alloca(v24 + 8);
  *wmempcpy((wchar_t *)&v43, v9, (v8 - (__int64)v9) >> 2) = 0;
  *v22 = (size_t)&v42;
  v26 = v51;
  v42 = 0LL;
  if ( !v51 )
    __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_wmatch");
  if ( *(_DWORD *)(v8 - 4) != 41 )
    __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_wmatch");
  switch ( (int)v49 )
  {
    case '!':
      if ( v45 > v48 )
        return 1LL;
      v34 = v45;
      v50 = v51;
      v49 = v8;
      v35 = v45;
      v36 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v36 = v47;
      while ( 2 )
      {
        v37 = (_QWORD *)v50;
        while ( (unsigned int)sub_405DF0(v37 + 1, v34, v35, (unsigned __int8)v6, v36) )
        {
          v37 = (_QWORD *)*v37;
          if ( !v37 )
          {
            if ( v34 == v35 )
            {
              v38 = (unsigned __int8)v6;
            }
            else
            {
              v38 = 0LL;
              if ( *(_DWORD *)(v35 - 4) == 47 )
                v38 = (v47 & 5) == 5;
            }
            if ( !(unsigned int)sub_405DF0(v49, v35, v48, v38, v36) )
              return 0LL;
            break;
          }
        }
        v35 += 4LL;
        if ( v48 >= v35 )
          continue;
        break;
      }
      return 1LL;
    case '*':
      if ( (unsigned int)sub_405DF0(v8, v45, v48, (unsigned __int8)v6, v47) )
        goto LABEL_42;
      return 0LL;
    case '+':
LABEL_42:
      v44 = v8;
      v27 = v45;
      v28 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v28 = v47;
      v29 = v23 - 4;
      LODWORD(v49) = v47 & 1;
      v30 = v48;
      v43 = (const wchar_t *)v29;
      do
      {
        if ( v27 <= v30 )
        {
          v31 = v27;
          LODWORD(v50) = v46;
          do
          {
            if ( !(unsigned int)sub_405DF0(v26 + 8, v27, v31, (unsigned int)v50, v28) )
            {
              if ( v27 == v31 )
              {
                if ( !(unsigned int)sub_405DF0(v44, v27, v30, (unsigned int)v50, v28) )
                  return 0LL;
              }
              else
              {
                v32 = 0LL;
                if ( *(_DWORD *)(v31 - 4) == 47 )
                  v32 = (v47 & 5) == 5;
                if ( !(unsigned int)sub_405DF0(v44, v31, v30, v32, v28) )
                  return 0LL;
                v33 = 0LL;
                if ( *(_DWORD *)(v31 - 4) == 47 )
                  v33 = (v47 & 5) == 5;
                if ( !(unsigned int)sub_405DF0(v43, v31, v30, v33, v28) )
                  return 0LL;
              }
              v26 = v51;
            }
            v31 += 4LL;
          }
          while ( v30 >= v31 );
        }
        v26 = *(_QWORD *)v26;
        v51 = v26;
      }
      while ( v26 );
      return 1LL;
    case '?':
      v6 = (unsigned __int8)v6;
      if ( (unsigned int)sub_405DF0(v8, v45, v48, (unsigned __int8)v6, v47) )
        goto LABEL_72;
      return 0LL;
    case '@':
      v6 = (unsigned __int8)v6;
LABEL_72:
      v39 = v45;
      v40 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v40 = v47;
      break;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_wmatch");
  }
  while ( 1 )
  {
    v41 = wcscat((wchar_t *)(v26 + 8), (const wchar_t *)v8);
    if ( !(unsigned int)sub_405DF0(v41, v39, v48, v6, v40) )
      break;
    v26 = *(_QWORD *)v26;
    v51 = v26;
    if ( !v26 )
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_405DF0(wint_t *a1, const wchar_t *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  const wchar_t *v5; // r14
  wint_t v7; // r15d
  int v9; // r12d
  int v10; // r13d
  wint_t *v11; // rbp
  wint_t v12; // eax
  wint_t v13; // eax
  wint_t v14; // r8d
  wint_t v15; // eax
  wint_t *v16; // r14
  wint_t *v17; // r15
  wint_t v18; // eax
  wint_t v19; // ebx
  int v20; // r14d
  wint_t *i; // rsi
  wint_t v22; // edx
  _DWORD *v23; // rsi
  bool v24; // di
  wint_t v25; // eax
  __int64 result; // rax
  wint_t *v27; // rax
  int v28; // ebp
  const wchar_t *v29; // r14
  wint_t *v30; // r13
  wint_t v31; // r11d
  wint_t *v32; // r15
  bool v33; // dl
  wint_t *v34; // rax
  wchar_t *v35; // rax
  wint_t v36; // r11d
  wchar_t *v37; // r9
  unsigned __int8 v38; // r10
  wint_t v39; // eax
  wint_t *v40; // r15
  wint_t v41; // r12d
  unsigned int v42; // r14d
  wint_t *v43; // r13
  unsigned __int64 v44; // rbx
  wint_t v45; // eax
  wint_t *v46; // r14
  __int64 v47; // rdx
  wint_t v48; // eax
  char *v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // eax
  wint_t *v53; // r15
  unsigned int v54; // ebp
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rcx
  int *v57; // r8
  int v58; // edx
  _DWORD *v59; // rbp
  int v60; // eax
  wint_t *v61; // rax
  wint_t *v62; // rbp
  char *v63; // rsi
  int *v64; // rdx
  int v65; // eax
  wctype_t v66; // rax
  wint_t *v67; // r9
  __int64 v68; // [rsp+8h] [rbp-580h]
  wchar_t *v69; // [rsp+8h] [rbp-580h]
  const wchar_t *v70; // [rsp+8h] [rbp-580h]
  bool v71; // [rsp+8h] [rbp-580h]
  wint_t wca; // [rsp+10h] [rbp-578h]
  unsigned __int8 wcc; // [rsp+10h] [rbp-578h]
  unsigned __int8 wcb; // [rsp+10h] [rbp-578h]
  unsigned int v76; // [rsp+18h] [rbp-570h]
  unsigned __int8 v77; // [rsp+1Ch] [rbp-56Ch]
  int v78; // [rsp+1Ch] [rbp-56Ch]
  unsigned __int8 v79; // [rsp+1Ch] [rbp-56Ch]
  wint_t v80; // [rsp+1Ch] [rbp-56Ch]
  unsigned __int8 v81; // [rsp+1Ch] [rbp-56Ch]
  unsigned __int8 v82; // [rsp+1Ch] [rbp-56Ch]
  int v83; // [rsp+20h] [rbp-568h]
  wint_t v84; // [rsp+24h] [rbp-564h]
  char property[272]; // [rsp+30h] [rbp-558h] BYREF
  int v86[256]; // [rsp+140h] [rbp-448h] BYREF
  __int64 v87; // [rsp+540h] [rbp-48h] BYREF

  v5 = (const wchar_t *)a3;
  v7 = *a1;
  v76 = a5;
  v68 = (__int64)(a1 + 1);
  if ( !*a1 )
    goto LABEL_56;
  v83 = a5 & 5;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  v11 = a1;
  while ( 2 )
  {
    if ( v10 )
    {
      v77 = a4;
      v12 = towlower(v7);
      a4 = v77;
      v7 = v12;
    }
    switch ( v7 )
    {
      case '!':
      case '+':
      case '@':
        if ( (v76 & 0x20) == 0 )
          goto LABEL_49;
        if ( v11[1] != 40 )
          goto LABEL_49;
        result = sub_405860(v7, v68, (unsigned __int64)a2, a3, a4, v76);
        if ( (_DWORD)result == -1 )
          goto LABEL_49;
        return result;
      case '*':
        v27 = v11;
        v28 = v10;
        v29 = (const wchar_t *)a3;
        v30 = v27;
        if ( (v76 & 0x20) == 0 || v27[1] != 40 )
          goto LABEL_65;
        v56 = a3;
        wcb = a4;
        result = sub_405860(42, v68, (unsigned __int64)a2, v56, a4, v76);
        if ( (_DWORD)result != -1 )
          return result;
        a4 = wcb;
LABEL_65:
        if ( v29 != a2 && *a2 == 46 && a4 )
          return 1LL;
        v31 = v30[1];
        v32 = v30 + 2;
        if ( v31 != 42 && v31 != 63 )
          goto LABEL_77;
        v33 = (v76 & 0x20) != 0;
        do
        {
          if ( *v32 == 40 && v33 )
          {
            wcc = a4;
            v71 = v33;
            v80 = v31;
            v34 = sub_405660(v32);
            v33 = v71;
            a4 = wcc;
            if ( v34 != v32 )
              goto LABEL_75;
            v31 = v80;
          }
          if ( v31 == 63 )
          {
            if ( a2 == v29 || *a2 == 47 && (v76 & 1) != 0 )
              return 1LL;
            ++a2;
          }
          v34 = v32;
LABEL_75:
          v31 = *v34;
          v32 = v34 + 1;
        }
        while ( *v34 == 63 || v31 == 42 );
LABEL_77:
        if ( v31 )
        {
          v79 = a4;
          wca = v31;
          v35 = wmemchr(a2, -(v76 & 1) & 0x2F, v29 - a2);
          v36 = wca;
          v37 = v35;
          v38 = v79;
          if ( !v35 )
            v37 = (wchar_t *)v29;
          if ( wca == 91
            || (v76 & 0x20) != 0
            && (v50 = wca - 33, (unsigned int)v50 <= 0x1F)
            && (v51 = 2147484673LL, _bittest64(&v51, v50))
            && *v32 == 40 )
          {
            v52 = v76 & 0xFFFFFFFB;
            if ( (v76 & 1) != 0 )
              v52 = v76;
            v53 = v32 - 1;
            v54 = v52;
            if ( v37 > a2 )
            {
              v55 = (unsigned __int64)v37;
              do
              {
                if ( !(unsigned int)sub_405DF0(v53, a2, v29, v38, v54) )
                  return 0LL;
                ++a2;
                v38 = 0;
              }
              while ( v55 > (unsigned __int64)a2 );
            }
            return 1LL;
          }
          if ( wca != 47 )
          {
            if ( (v76 & 1) != 0 )
              goto LABEL_84;
            goto LABEL_192;
          }
          if ( (v76 & 1) == 0 )
          {
LABEL_192:
            v76 &= ~4u;
LABEL_84:
            if ( wca == 92 && !v9 )
              v36 = *v32;
            if ( v28 )
            {
              v69 = v37;
              v39 = towlower(v36);
              v37 = v69;
              v36 = v39;
            }
            v40 = v32 - 1;
            if ( v37 <= a2 )
              return 1LL;
            v70 = v29;
            v41 = v36;
            v42 = v79;
            v43 = (wint_t *)a2;
            v44 = (unsigned __int64)v37;
            while ( 1 )
            {
              v45 = *v43;
              if ( v28 )
                v45 = towlower(v45);
              if ( v41 == v45 && !(unsigned int)sub_405DF0(v40, v43, v70, v42, v76) )
                break;
              ++v43;
              v42 = 0;
              if ( v44 <= (unsigned __int64)v43 )
                return 1LL;
            }
            return 0LL;
          }
          if ( v29 <= a2 )
            return 1LL;
          while ( *a2 != 47 )
          {
            if ( v29 <= ++a2 )
              return 1LL;
          }
          return (unsigned int)sub_405DF0(v32, a2 + 1, v29, (v76 >> 2) & 1, v76) != 0;
        }
        else
        {
          if ( (v76 & 1) == 0 || (v76 & 8) != 0 )
            return 0LL;
          return wmemchr(a2, 47, v29 - a2) != 0LL;
        }
      case '/':
        if ( v83 != 5 )
          goto LABEL_49;
        if ( (const wchar_t *)a3 == a2 || *a2 != 47 )
          return 1LL;
        v11 = (wint_t *)v68;
        a4 = 1;
        goto LABEL_54;
      case '?':
        if ( (v76 & 0x20) != 0 && v11[1] == 40 )
        {
          v82 = a4;
          result = sub_405860(63, v68, (unsigned __int64)a2, a3, a4, v76);
          a4 = v82;
          if ( (_DWORD)result != -1 )
            return result;
        }
        if ( (const wchar_t *)a3 == a2 )
          return 1LL;
        if ( *a2 != 47 )
        {
          a4 &= *a2 == 46;
          if ( !a4 )
          {
            v11 = (wint_t *)v68;
            goto LABEL_54;
          }
          return 1LL;
        }
        if ( (v76 & 1) != 0 )
          return 1LL;
        goto LABEL_53;
      case '[':
        if ( !dword_60F4D8 )
        {
          v81 = a4;
          v49 = getenv("POSIXLY_CORRECT");
          a4 = v81;
          dword_60F4D8 = v49 == 0LL ? -1 : 1;
        }
        if ( (const wchar_t *)a3 == a2 )
          return 1LL;
        v14 = *a2;
        if ( *a2 == 46 )
        {
          if ( a4 )
            return 1LL;
        }
        else if ( v14 == 47 && (v76 & 1) != 0 )
        {
          return 1LL;
        }
        v15 = v11[1];
        if ( v15 == 33 || dword_60F4D8 < 0 && v15 == 94 )
        {
          v16 = v11 + 2;
          v78 = 1;
        }
        else
        {
          v78 = 0;
          v16 = (wint_t *)v68;
        }
        if ( v10 )
          v14 = towlower(v14);
        v84 = v7;
        v11 = v16 + 1;
        v17 = (wint_t *)a2;
        v18 = *v16;
        v19 = v14;
        while ( 2 )
        {
          while ( 2 )
          {
            if ( !v9 && v18 == 92 )
            {
              v18 = *v11;
              if ( !*v11 )
                return 1LL;
              if ( v10 )
                v18 = towlower(v18);
              v20 = v11[1];
              ++v11;
              goto LABEL_34;
            }
            if ( v18 != 91 )
            {
              if ( v18 )
              {
                v20 = *v11;
                goto LABEL_32;
              }
              a2 = (const wchar_t *)v17;
              v7 = v84;
LABEL_50:
              v25 = *a2;
              if ( v10 )
                v25 = towlower(v25);
              if ( v25 != v7 )
                return 1LL;
LABEL_53:
              v11 = (wint_t *)v68;
              a4 = 0;
              goto LABEL_54;
            }
            v20 = *v11;
            if ( *v11 != 58 )
            {
              while ( 1 )
              {
LABEL_32:
                if ( v10 )
                  v18 = towlower(v18);
LABEL_34:
                i = v11 + 1;
                if ( v20 != 45 )
                  break;
                v22 = v11[1];
                if ( v22 != 93 && v22 )
                  goto LABEL_37;
                if ( v18 == v19 )
                {
                  a2 = (const wchar_t *)v17;
                  goto LABEL_152;
                }
                if ( v22 != 93 )
                {
LABEL_37:
                  v23 = v11 + 2;
                  if ( v22 == 92 && !v9 )
                  {
                    v23 = v11 + 3;
                    v22 = v11[2];
                  }
                  if ( !v22 )
                    return 1LL;
                  v20 = *v23;
                  v11 = v23 + 1;
                  v24 = v18 <= v19;
                  v18 = *v23;
                  if ( v22 >= v19 && v24 )
                  {
                    v11 = v23;
                    a2 = (const wchar_t *)v17;
                    i = v23 + 1;
                    goto LABEL_152;
                  }
                  goto LABEL_26;
                }
                v20 = 93;
                ++v11;
                v18 = 45;
              }
              if ( v18 == v19 )
                goto LABEL_148;
              v18 = v20;
              ++v11;
LABEL_26:
              if ( v18 == 93 )
              {
                a2 = (const wchar_t *)v17;
                if ( !v78 )
                  return 1LL;
                goto LABEL_99;
              }
              continue;
            }
            break;
          }
          v46 = v11;
          v47 = 0LL;
          while ( 1 )
          {
            v48 = v46[1];
            if ( v48 == 58 )
              break;
            if ( v48 - 97 > 0x18 )
              goto LABEL_109;
            ++v47;
            ++v46;
            *(_DWORD *)&property[4 * v47 + 268] = v48;
            if ( v47 == 256 )
              return 1LL;
          }
          if ( v46[2] != 93 )
          {
LABEL_109:
            i = v11 + 1;
            if ( v19 != 91 )
            {
              ++v11;
              v18 = 58;
              continue;
            }
LABEL_148:
            a2 = (const wchar_t *)v17;
            v20 = *v11;
            goto LABEL_152;
          }
          break;
        }
        v86[v47] = 0;
        v63 = property;
        v64 = v86;
        v65 = v86[0];
        do
        {
          if ( v65 <= 63 )
          {
            if ( v65 < 37 && (unsigned int)(v65 - 32) > 3 )
              return 1LL;
          }
          else if ( v65 < 65 || v65 > 95 && (unsigned int)(v65 - 97) > 0x1D )
          {
            return 1LL;
          }
          if ( v64 == (int *)&v87 )
            return 1LL;
          ++v64;
          *v63++ = v65;
          v65 = *v64;
        }
        while ( *v64 );
        *v63 = 0;
        v66 = wctype(property);
        if ( !v66 )
          return 1LL;
        if ( !iswctype(*v17, v66) )
        {
          v11 = v46 + 4;
          v18 = v46[3];
          goto LABEL_26;
        }
        v67 = v46;
        v11 = v46 + 3;
        a2 = (const wchar_t *)v17;
        v20 = v46[3];
        for ( i = v67 + 4; ; i = v11 + 1 )
        {
LABEL_152:
          v57 = (int *)i;
          v58 = v20;
          if ( !v20 )
            return 1LL;
          a4 = v9 == 0 && v20 == 92;
          if ( a4 )
          {
            if ( v11[1] )
            {
              v20 = v11[2];
              v11 += 2;
              continue;
            }
            return 1LL;
          }
          if ( v20 != 91 )
            goto LABEL_149;
          v20 = v11[1];
          if ( v20 != 58 )
            break;
          v61 = v11 + 2;
          v20 = v11[2];
          v62 = v11 + 257;
          while ( 1 )
          {
            if ( v20 == 58 )
            {
              if ( v61[1] != 93 )
                goto LABEL_158;
              v57 = (int *)(v61 + 3);
              v58 = v61[2];
              goto LABEL_149;
            }
            if ( (unsigned int)(v20 - 97) > 0x18 )
              break;
            v20 = *++v61;
            if ( v62 == v61 )
              return 1LL;
          }
          v20 = 58;
          v11 = i;
LABEL_151:
          ;
        }
        if ( v20 == 61 )
        {
          if ( v11[2] && v11[3] == 61 && v11[4] == 93 )
          {
            v57 = (int *)(v11 + 6);
            v58 = v11[5];
            goto LABEL_149;
          }
          return 1LL;
        }
        v59 = v11 + 2;
        if ( v20 != 46 )
        {
LABEL_158:
          v11 = i;
          goto LABEL_151;
        }
        while ( 1 )
        {
          v60 = v59[1];
          if ( !v60 )
            return 1LL;
          if ( v60 == 46 && v59[2] == 93 )
            break;
          ++v59;
        }
        v57 = v59 + 4;
        v58 = v59[3];
LABEL_149:
        if ( v58 != 93 )
        {
          v20 = *v57;
          v11 = (wint_t *)v57;
          goto LABEL_151;
        }
        if ( v78 )
          return 1LL;
        v11 = (wint_t *)v57;
LABEL_54:
        v7 = *v11;
        ++a2;
        v68 = (__int64)(v11 + 1);
        if ( !*v11 )
        {
          v5 = (const wchar_t *)a3;
LABEL_56:
          if ( a2 == v5 )
            return 0LL;
          if ( (v76 & 8) != 0 )
            return *a2 != 47;
          return 1LL;
        }
        continue;
      case '\\':
        if ( v9 )
        {
          if ( (const wchar_t *)a3 == a2 )
            return 1LL;
          if ( v10 )
          {
LABEL_10:
            v13 = towlower(*a2);
            v11 = (wint_t *)v68;
            goto LABEL_98;
          }
        }
        else
        {
          v7 = v11[1];
          v68 = (__int64)(v11 + 2);
          if ( !v7 )
            return 1LL;
          if ( v10 )
          {
            v7 = towlower(v7);
            if ( (const wchar_t *)a3 == a2 )
              return 1LL;
            goto LABEL_10;
          }
          if ( (const wchar_t *)a3 == a2 )
            return 1LL;
        }
        v13 = *a2;
        v11 = (wint_t *)v68;
LABEL_98:
        if ( v13 != v7 )
          return 1LL;
LABEL_99:
        a4 = 0;
        goto LABEL_54;
      default:
LABEL_49:
        if ( (const wchar_t *)a3 != a2 )
          goto LABEL_50;
        return 1LL;
    }
  }
}

__int64 __fastcall sub_4068D0(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned int v6; // r12d
  int v7; // eax
  __int64 i; // r14
  void *v9; // rsi
  void **p_src; // rbx
  __int64 v11; // r13
  __int64 v12; // r15
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  void *v18; // rsp
  _BYTE *v19; // rax
  char *v20; // rax
  _QWORD *v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  void *v25; // rsp
  _BYTE *v26; // rax
  unsigned __int64 v27; // r15
  _QWORD *v28; // r14
  unsigned int v29; // r12d
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r13
  _BOOL8 v33; // rcx
  _BOOL8 v34; // rcx
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // r13
  unsigned int v37; // ebx
  _QWORD *v38; // r14
  __int64 v39; // rcx
  __int64 v40; // r13
  unsigned __int64 v41; // r15
  unsigned int v42; // ebx
  char *v43; // rax
  void *src; // [rsp+0h] [rbp-80h] BYREF
  __int64 v45; // [rsp+8h] [rbp-78h] BYREF
  unsigned __int8 v46; // [rsp+13h] [rbp-6Dh]
  unsigned int v47; // [rsp+14h] [rbp-6Ch]
  unsigned __int64 v48; // [rsp+18h] [rbp-68h]
  unsigned __int64 v49; // [rsp+20h] [rbp-60h]
  __int64 v50; // [rsp+28h] [rbp-58h]
  size_t v51; // [rsp+30h] [rbp-50h]
  __int64 v52; // [rsp+38h] [rbp-48h]
  size_t v53; // [rsp+48h] [rbp-38h] BYREF

  LOBYTE(v6) = a5;
  LODWORD(v52) = a1;
  v49 = a3;
  v48 = a4;
  v47 = a6;
  v46 = a5;
  v53 = 0LL;
  v51 = strlen((const char *)a2);
  v7 = *(unsigned __int8 *)(a2 + 1);
  if ( !(_BYTE)v7 )
    return 0xFFFFFFFFLL;
  i = a2 + 1;
  v45 = a2;
  v9 = (void *)(a2 + 1);
  p_src = (void **)&v53;
  v11 = 3221227009LL;
  v12 = 0LL;
  LODWORD(v50) = v52 - 63;
  while ( 2 )
  {
    while ( (_BYTE)v7 == 91 )
    {
      if ( !dword_60F4D8 )
      {
        src = v9;
        v20 = getenv("POSIXLY_CORRECT");
        v9 = src;
        dword_60F4D8 = v20 == 0LL ? -1 : 1;
      }
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
        goto LABEL_26;
      v14 = *(_BYTE *)++v15;
      for ( i = v15 + 1; v14 != 93; i = v15 + 1 )
      {
        if ( !v14 )
          return 0xFFFFFFFFLL;
        v14 = *(_BYTE *)i;
        v15 = i;
LABEL_26:
        ;
      }
      v7 = *(unsigned __int8 *)(v15 + 1);
LABEL_6:
      if ( !(_BYTE)v7 )
        return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)(v7 - 33) > 0x1Fu )
      {
        if ( (_BYTE)v7 == 124 && !v12 )
        {
          v16 = i - (_QWORD)v9 + 1;
          if ( (unsigned int)v50 <= 1 )
            v16 = v51;
          v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v17 - 8 > 0x1F37 )
            return 0xFFFFFFFFLL;
          v18 = alloca(v17 + 8);
          v19 = mempcpy(&v45, v9, i - (_QWORD)v9);
          v9 = (void *)(i + 1);
          *v19 = 0;
          v7 = *(unsigned __int8 *)++i;
          src = 0LL;
          *p_src = &src;
          p_src = &src;
          v12 = 0LL;
        }
        else
        {
LABEL_5:
          v7 = *(unsigned __int8 *)++i;
        }
        goto LABEL_6;
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
      v7 = *(unsigned __int8 *)(i + 1);
      --v12;
      ++i;
      if ( !(_BYTE)v7 )
        return 0xFFFFFFFFLL;
      continue;
    }
    break;
  }
  v21 = p_src;
  v22 = v45;
  v23 = i - (_QWORD)v9 + 1;
  if ( (unsigned int)(v52 - 63) <= 1 )
    v23 = v51;
  v24 = (v23 + 15) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v24 - 8 > 0x1F37 )
    return 0xFFFFFFFFLL;
  v25 = alloca(v24 + 8);
  v26 = mempcpy(&v45, v9, i - (_QWORD)v9);
  *v21 = &src;
  *v26 = 0;
  src = 0LL;
  v51 = v53;
  if ( !v53 )
    __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_match");
  if ( *(_BYTE *)(i - 1) != 41 )
    __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_match");
  switch ( (int)v52 )
  {
    case '!':
      if ( v49 > v48 )
        return 1LL;
      v35 = v49;
      v52 = i;
      v36 = v49;
      v37 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v37 = v47;
      while ( 2 )
      {
        v38 = (_QWORD *)v51;
        while ( (unsigned int)sub_406E20(v38 + 1, v35, v36, (unsigned __int8)v6, v37) )
        {
          v38 = (_QWORD *)*v38;
          if ( !v38 )
          {
            if ( v35 == v36 )
            {
              v39 = (unsigned __int8)v6;
            }
            else
            {
              v39 = 0LL;
              if ( *(_BYTE *)(v36 - 1) == 47 )
                v39 = (v47 & 5) == 5;
            }
            if ( !(unsigned int)sub_406E20(v52, v36, v48, v39, v37) )
              return 0LL;
            break;
          }
        }
        if ( v48 >= ++v36 )
          continue;
        break;
      }
      return 1LL;
    case '*':
      if ( (unsigned int)sub_406E20(i, v49, v48, (unsigned __int8)v6, v47) )
        goto LABEL_40;
      return 0LL;
    case '+':
LABEL_40:
      v27 = v49;
      v50 = i;
      v28 = (_QWORD *)v51;
      v29 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v29 = v47;
      v30 = v22 - 1;
      LODWORD(v51) = v47 & 1;
      v31 = v48;
      v45 = v30;
      do
      {
        if ( v27 <= v31 )
        {
          v32 = v27;
          LODWORD(v52) = v46;
          do
          {
            if ( !(unsigned int)sub_406E20(v28 + 1, v27, v32, (unsigned int)v52, v29) )
            {
              if ( v27 == v32 )
              {
                if ( !(unsigned int)sub_406E20(v50, v27, v31, (unsigned int)v52, v29) )
                  return 0LL;
              }
              else
              {
                v33 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v33 = (v47 & 5) == 5;
                if ( !(unsigned int)sub_406E20(v50, v32, v31, v33, v29) )
                  return 0LL;
                v34 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v34 = (v47 & 5) == 5;
                if ( !(unsigned int)sub_406E20(v45, v32, v31, v34, v29) )
                  return 0LL;
              }
              v28 = (_QWORD *)v53;
            }
            ++v32;
          }
          while ( v31 >= v32 );
        }
        v28 = (_QWORD *)*v28;
        v53 = (size_t)v28;
      }
      while ( v28 );
      return 1LL;
    case '?':
      v6 = (unsigned __int8)v6;
      if ( (unsigned int)sub_406E20(i, v49, v48, (unsigned __int8)v6, v47) )
        goto LABEL_70;
      return 0LL;
    case '@':
      v6 = (unsigned __int8)v6;
LABEL_70:
      v40 = v51;
      v41 = v48;
      v42 = v47 & 0xFFFFFFFB;
      if ( (v47 & 1) != 0 )
        v42 = v47;
      break;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_match");
  }
  while ( 1 )
  {
    v43 = strcat((char *)(v40 + 8), (const char *)i);
    if ( !(unsigned int)sub_406E20(v43, v49, v41, v6, v42) )
      break;
    v40 = *(_QWORD *)v40;
    v53 = v40;
    if ( !v40 )
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_406E20(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v6; // r12
  unsigned __int8 *v7; // r13
  int v9; // ebp
  int v10; // ebx
  unsigned __int8 v11; // r12
  int v12; // eax
  __int32_t v13; // edx
  __int64 v14; // r12
  unsigned __int8 v15; // al
  unsigned __int8 *v16; // r15
  __int64 v17; // r15
  unsigned __int8 v18; // si
  unsigned __int8 *j; // rax
  unsigned __int8 v20; // dl
  int v21; // ecx
  unsigned __int8 *v22; // r8
  unsigned __int8 v23; // cl
  __int32_t v24; // eax
  __int64 v25; // r13
  __int64 result; // rax
  __int64 v27; // r8
  unsigned __int8 *v28; // r9
  unsigned __int8 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int8 v32; // r8
  unsigned __int8 *v33; // r12
  unsigned __int8 *v34; // r9
  const __int32_t **v35; // rax
  int v36; // ebp
  unsigned int i; // r13d
  __int32_t v38; // eax
  unsigned __int8 v39; // r15
  const __int32_t *v40; // rdx
  unsigned __int8 *v41; // r15
  __int64 v42; // rdx
  char v43; // al
  _BYTE *v44; // r13
  char v45; // al
  const __int32_t **v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // r13d
  unsigned __int8 *v50; // rdx
  unsigned __int8 *v51; // r13
  wctype_t v52; // r13
  wint_t v53; // eax
  __int64 v55; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v56; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v57; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v58; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v59; // [rsp+18h] [rbp-160h]
  unsigned __int8 v60; // [rsp+18h] [rbp-160h]
  char v61; // [rsp+18h] [rbp-160h]
  unsigned int v62; // [rsp+20h] [rbp-158h]
  int v63; // [rsp+28h] [rbp-150h]
  unsigned __int8 v64; // [rsp+28h] [rbp-150h]
  int v65; // [rsp+2Ch] [rbp-14Ch]
  char property[328]; // [rsp+30h] [rbp-148h] BYREF

  v6 = *a1;
  v62 = a5;
  v55 = (__int64)(a1 + 1);
  if ( !(_BYTE)v6 )
    goto LABEL_66;
  v7 = a1;
  v63 = a5 & 5;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  while ( 2 )
  {
    if ( v10 )
      LODWORD(v6) = LOBYTE((*__ctype_tolower_loc())[v6]);
    switch ( (char)v6 )
    {
      case '!':
      case '+':
      case '@':
        if ( (v62 & 0x20) == 0 )
          goto LABEL_60;
        if ( v7[1] != 40 )
          goto LABEL_60;
        result = sub_4068D0((unsigned __int8)v6, v55, (unsigned __int64)a2, a3, a4, v62);
        if ( (_DWORD)result == -1 )
          goto LABEL_60;
        return result;
      case '*':
        if ( (v62 & 0x20) != 0 && v7[1] == 40 )
        {
          result = sub_4068D0(42, v55, (unsigned __int64)a2, a3, a4, v62);
          if ( (_DWORD)result != -1 )
            return result;
        }
        if ( a2 != (unsigned __int8 *)a3 && *a2 == 46 && a4 )
          return 1LL;
        v27 = v7[1];
        v28 = v7 + 2;
        if ( (_BYTE)v27 != 42 && (_BYTE)v27 != 63 )
          goto LABEL_86;
        do
        {
          if ( *v28 == 40 && (v62 & 0x20) != 0 )
          {
            v58 = v28;
            v61 = v27;
            v29 = sub_405760(v28);
            v28 = v58;
            if ( v29 != v58 )
              goto LABEL_84;
            LOBYTE(v27) = v61;
          }
          if ( (_BYTE)v27 == 63 )
          {
            if ( a2 == (unsigned __int8 *)a3 || *a2 == 47 && (v62 & 1) != 0 )
              return 1LL;
            ++a2;
          }
          v29 = v28;
LABEL_84:
          v27 = *v29;
          v28 = v29 + 1;
        }
        while ( (_BYTE)v27 == 63 || (_BYTE)v27 == 42 );
LABEL_86:
        v30 = v62 & 1;
        if ( (_BYTE)v27 )
        {
          v64 = v27;
          v59 = v28;
          v31 = sub_408AA0(a2, -(int)v30 & 0x2F, a3 - (_QWORD)a2, v30, v27, v28);
          v32 = v64;
          v33 = (unsigned __int8 *)v31;
          v34 = v59;
          if ( !v31 )
            v33 = (unsigned __int8 *)a3;
          if ( v64 == 91
            || (v62 & 0x20) != 0
            && (unsigned __int8)(v64 - 33) <= 0x1Fu
            && (v47 = 2147484673LL, _bittest64(&v47, (unsigned int)v64 - 33))
            && *v59 == 40 )
          {
            v48 = v62 & 0xFFFFFFFB;
            if ( (v62 & 1) != 0 )
              v48 = v62;
            v49 = v48;
            if ( v33 > a2 )
            {
              do
              {
                if ( !(unsigned int)sub_406E20(v59 - 1, a2, a3, a4, v49) )
                  return 0LL;
                ++a2;
                a4 = 0;
              }
              while ( v33 != a2 );
            }
            return 1LL;
          }
          if ( v64 != 47 )
          {
            if ( (v62 & 1) != 0 )
              goto LABEL_93;
            goto LABEL_187;
          }
          if ( (v62 & 1) == 0 )
          {
LABEL_187:
            v62 &= ~4u;
LABEL_93:
            if ( v64 == 92 && !v9 )
              v32 = *v59;
            if ( v10 )
            {
              v60 = v32;
              v56 = v34;
              v35 = __ctype_tolower_loc();
              v34 = v56;
              v32 = (*v35)[v60];
            }
            v57 = v34 - 1;
            if ( v33 <= a2 )
              return 1LL;
            v36 = v32;
            for ( i = a4; ; i = 0 )
            {
              v38 = *a2;
              if ( v10 )
              {
                v39 = *a2;
                v38 = (*__ctype_tolower_loc())[v39];
              }
              if ( v38 == v36 && !(unsigned int)sub_406E20(v57, a2, a3, i, v62) )
                break;
              if ( v33 == ++a2 )
                return 1LL;
            }
            return 0LL;
          }
          if ( a3 <= (unsigned __int64)a2 )
            return 1LL;
          while ( *a2 != 47 )
          {
            if ( (unsigned __int8 *)a3 == ++a2 )
              return 1LL;
          }
          return (unsigned int)sub_406E20(v59, a2 + 1, a3, (v62 >> 2) & 1, v62) != 0;
        }
        else
        {
          if ( (v62 & 1) == 0 || (v62 & 8) != 0 )
            return 0LL;
          return sub_408AA0(a2, 47LL, a3 - (_QWORD)a2, v30, v27, v28) != 0;
        }
      case '/':
        if ( v63 != 5 )
          goto LABEL_60;
        if ( a2 == (unsigned __int8 *)a3 || *a2 != 47 )
          return 1LL;
        v7 = (unsigned __int8 *)v55;
        a4 = 1;
        goto LABEL_65;
      case '?':
        if ( (v62 & 0x20) != 0 && v7[1] == 40 )
        {
          result = sub_4068D0(63, v55, (unsigned __int64)a2, a3, a4, v62);
          if ( (_DWORD)result != -1 )
            return result;
        }
        if ( a2 == (unsigned __int8 *)a3 )
          return 1LL;
        if ( *a2 != 47 )
        {
          a4 &= *a2 == 46;
          if ( !a4 )
          {
            v7 = (unsigned __int8 *)v55;
            goto LABEL_65;
          }
          return 1LL;
        }
        if ( (v62 & 1) != 0 )
          return 1LL;
        goto LABEL_64;
      case '[':
        if ( !dword_60F4D8 )
          dword_60F4D8 = getenv("POSIXLY_CORRECT") == 0LL ? -1 : 1;
        if ( a2 == (unsigned __int8 *)a3 )
          return 1LL;
        v14 = *a2;
        if ( (_BYTE)v14 == 46 )
        {
          if ( a4 )
            return 1LL;
        }
        else if ( (_BYTE)v14 == 47 && (v62 & 1) != 0 )
        {
          return 1LL;
        }
        v15 = v7[1];
        if ( v15 == 33 || dword_60F4D8 < 0 && v15 == 94 )
        {
          v16 = v7 + 2;
          v65 = 1;
        }
        else
        {
          v65 = 0;
          v16 = (unsigned __int8 *)v55;
        }
        if ( v10 )
          LOBYTE(v14) = (*__ctype_tolower_loc())[v14];
        v7 = v16 + 1;
        v17 = *v16;
LABEL_30:
        while ( 2 )
        {
          if ( !v9 && (_BYTE)v17 == 92 )
          {
            v17 = *v7;
            if ( !(_BYTE)v17 )
              return 1LL;
            if ( v10 )
              LOBYTE(v17) = (*__ctype_tolower_loc())[v17];
            v18 = *++v7;
            goto LABEL_37;
          }
          if ( (_BYTE)v17 != 91 )
          {
            if ( (_BYTE)v17 )
            {
              v18 = *v7;
              goto LABEL_35;
            }
            LODWORD(v6) = 91;
LABEL_61:
            v24 = *a2;
            if ( v10 )
            {
              v25 = *a2;
              v24 = (*__ctype_tolower_loc())[v25];
            }
            if ( v24 != (_DWORD)v6 )
              return 1LL;
LABEL_64:
            v7 = (unsigned __int8 *)v55;
            a4 = 0;
            goto LABEL_65;
          }
          v18 = *v7;
          if ( *v7 != 58 )
          {
            while ( 1 )
            {
LABEL_35:
              if ( v10 )
                LOBYTE(v17) = (*__ctype_tolower_loc())[v17];
LABEL_37:
              j = v7 + 1;
              if ( v18 != 45 )
                break;
              v20 = v7[1];
              if ( v20 != 93 && v20 )
              {
                v21 = (char)v17;
LABEL_41:
                j = v7 + 2;
                if ( !v9 && v20 == 92 )
                {
                  j = v7 + 3;
                  v20 = v7[2];
                }
                if ( !v20 )
                  return 1LL;
                v18 = *j;
                v7 = j + 1;
                v17 = *j;
                if ( v21 <= (unsigned __int8)v14 && (unsigned __int8)v14 <= v20 )
                  goto LABEL_47;
LABEL_29:
                if ( (_BYTE)v17 == 93 )
                {
                  if ( !v65 )
                    return 1LL;
                  goto LABEL_13;
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
            v17 = v18;
            ++v7;
            goto LABEL_29;
          }
          v41 = v7;
          v42 = 0LL;
          while ( 1 )
          {
            v43 = v41[1];
            if ( v43 == 58 )
              break;
            if ( (unsigned __int8)(v43 - 97) > 0x18u )
              goto LABEL_117;
            ++v42;
            ++v41;
            property[v42 - 1] = v43;
            if ( v42 == 256 )
              return 1LL;
          }
          if ( v41[2] != 93 )
          {
LABEL_117:
            j = v7 + 1;
            if ( (_BYTE)v14 == 91 )
            {
LABEL_177:
              v18 = *v7;
              goto LABEL_49;
            }
            ++v7;
            v17 = 58LL;
            continue;
          }
          break;
        }
        property[v42] = 0;
        v52 = wctype(property);
        if ( !v52 )
          return 1LL;
        v53 = btowc(*a2);
        if ( !iswctype(v53, v52) )
        {
          v7 = v41 + 4;
          v17 = v41[3];
          goto LABEL_29;
        }
        v7 = v41 + 3;
        v18 = v41[3];
        for ( j = v41 + 4; ; j = v7 + 1 )
        {
LABEL_49:
          v22 = j;
          v23 = v18;
          if ( !v18 )
            return 1LL;
          a4 = v9 == 0 && v18 == 92;
          if ( a4 )
          {
            if ( v7[1] )
            {
              v18 = v7[2];
              v7 += 2;
              continue;
            }
            return 1LL;
          }
          if ( v18 != 91 )
            goto LABEL_52;
          v18 = v7[1];
          if ( v18 != 58 )
            break;
          v50 = v7 + 2;
          v18 = v7[2];
          v51 = v7 + 257;
          while ( 1 )
          {
            if ( v18 == 58 )
            {
              if ( v50[1] == 93 )
              {
                v22 = v50 + 3;
                v23 = v50[2];
                goto LABEL_52;
              }
LABEL_47:
              v7 = j;
              goto LABEL_48;
            }
            if ( (unsigned __int8)(v18 - 97) > 0x18u )
              break;
            v18 = *++v50;
            if ( v51 == v50 )
              return 1LL;
          }
          v18 = 58;
          v7 = j;
LABEL_48:
          ;
        }
        if ( v18 == 61 )
        {
          if ( v7[2] && v7[3] == 61 && v7[4] == 93 )
          {
            v22 = v7 + 6;
            v23 = v7[5];
            goto LABEL_52;
          }
          return 1LL;
        }
        v44 = v7 + 2;
        if ( v18 != 46 )
          goto LABEL_47;
        while ( 1 )
        {
          v45 = v44[1];
          if ( !v45 )
            return 1LL;
          if ( v45 == 46 && v44[2] == 93 )
            break;
          ++v44;
        }
        v22 = v44 + 4;
        v23 = v44[3];
LABEL_52:
        if ( v23 != 93 )
        {
          v7 = v22;
          v18 = *v22;
          j = v22 + 1;
          goto LABEL_49;
        }
        if ( v65 )
          return 1LL;
        v7 = v22;
LABEL_65:
        v6 = *v7;
        ++a2;
        v55 = (__int64)(v7 + 1);
        if ( !(_BYTE)v6 )
        {
LABEL_66:
          if ( (unsigned __int8 *)a3 == a2 )
            return 0LL;
          if ( (v62 & 8) != 0 )
            return *a2 != 47;
          return 1LL;
        }
        continue;
      case '\\':
        if ( v9 )
        {
          if ( a2 == (unsigned __int8 *)a3 )
            return 1LL;
          if ( !v10 )
          {
            v12 = 92;
LABEL_11:
            v13 = *a2;
            v7 = (unsigned __int8 *)v55;
            goto LABEL_12;
          }
          v7 = (unsigned __int8 *)v55;
          v40 = *__ctype_tolower_loc();
          v12 = 92;
        }
        else
        {
          v11 = v7[1];
          v55 = (__int64)(v7 + 2);
          if ( !v11 )
            return 1LL;
          if ( !v10 )
          {
            if ( a2 == (unsigned __int8 *)a3 )
              return 1LL;
            v12 = v11;
            goto LABEL_11;
          }
          v46 = __ctype_tolower_loc();
          v40 = *v46;
          v12 = (*v46)[v11];
          if ( a2 == (unsigned __int8 *)a3 )
            return 1LL;
          v12 = (unsigned __int8)v12;
          v7 += 2;
        }
        v13 = v40[*a2];
LABEL_12:
        if ( v13 != v12 )
          return 1LL;
LABEL_13:
        a4 = 0;
        goto LABEL_65;
      default:
LABEL_60:
        if ( a2 != (unsigned __int8 *)a3 )
          goto LABEL_61;
        return 1LL;
    }
  }
}

__int64 __fastcall sub_407910(char *a1, char *a2, unsigned int a3)
{
  unsigned __int8 *v4; // rbx
  size_t v5; // rax
  size_t v7; // rax
  size_t v8; // rbx
  size_t v9; // rax
  size_t v10; // r13
  unsigned __int64 v11; // rax
  size_t v12; // rdi
  void *v13; // rsp
  wchar_t *v14; // rax
  wint_t *v15; // r14
  wchar_t *v16; // r15
  wchar_t v17[3]; // [rsp+0h] [rbp-60h] BYREF
  unsigned int v18; // [rsp+Ch] [rbp-54h]
  char *s; // [rsp+10h] [rbp-50h] BYREF
  char *src[2]; // [rsp+18h] [rbp-48h] BYREF
  mbstate_t ps; // [rsp+28h] [rbp-38h] BYREF

  src[0] = a1;
  s = a2;
  if ( __ctype_get_mb_cur_max() == 1 )
    goto LABEL_2;
  ps = 0LL;
  v7 = mbsrtowcs(0LL, (const char **)src, 0LL, &ps);
  v8 = v7 + 1;
  if ( v7 == -1LL )
    goto LABEL_2;
  if ( !mbsinit(&ps) )
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x129u, "gnu_fnmatch");
  v9 = mbsrtowcs(0LL, (const char **)&s, 0LL, &ps);
  v10 = v9 + 1;
  if ( v9 == -1LL )
  {
LABEL_2:
    v4 = (unsigned __int8 *)s;
    v5 = strlen(s);
    return sub_406E20((unsigned __int8 *)src[0], v4, (unsigned __int64)&v4[v5], (a3 & 4) != 0, a3);
  }
  if ( !mbsinit(&ps) )
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x12Du, "gnu_fnmatch");
  v11 = v10 + v8;
  if ( __CFADD__(v10, v8) || v11 > 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_12;
  v12 = 4 * v11;
  if ( v11 <= 0x7CF )
  {
    v13 = alloca(v12 + 8);
    mbsrtowcs(v17, (const char **)src, v8, &ps);
    if ( mbsinit(&ps) )
    {
      mbsrtowcs(&v17[v8], (const char **)&s, v10, &ps);
      return sub_405DF0((wint_t *)v17, &v17[v8], (unsigned __int64)&v17[v8 - 1 + v10], (a3 & 4) != 0, a3);
    }
LABEL_16:
    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 0x147u, "gnu_fnmatch");
  }
  v14 = (wchar_t *)malloc(v12);
  v15 = (wint_t *)v14;
  if ( !v14 )
  {
LABEL_12:
    *__errno_location() = 12;
    return 0xFFFFFFFFLL;
  }
  else
  {
    v16 = &v14[v8];
    mbsrtowcs(v14, (const char **)src, v8, &ps);
    if ( !mbsinit(&ps) )
      goto LABEL_16;
    mbsrtowcs(v16, (const char **)&s, v10, &ps);
    v18 = sub_405DF0(v15, v16, (unsigned __int64)&v16[v10 - 1], (a3 & 4) != 0, a3);
    free(v15);
    return v18;
  }
}

FILE *__fastcall sub_407B50(char *filename, char *modes, FILE *a3)
{
  FILE *v3; // rax
  FILE *v4; // rbx
  int v5; // r13d
  int v7; // eax
  int v8; // r14d

  v3 = freopen(filename, modes, a3);
  v4 = v3;
  if ( !v3 )
    return v4;
  if ( !filename )
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
      return freopen(filename, modes, v4);
    }
    close(v8);
    return v4;
  }
  return freopen(filename, modes, v4);
}

int __fastcall sub_407BF0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_407C50(__int64 a1, int *a2)
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

__int64 __fastcall sub_407D30(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        const char *a9)
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
  const char *v28; // r12
  __int64 v29; // rbp
  char *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rbp
  char *v33; // rax
  FILE *v34; // rdi
  const char **v35; // rbx
  _BYTE *v36; // rbp
  __int64 v37; // r12
  const char *v38; // r12
  __int64 v39; // rbp
  char *v40; // rax
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v48; // [rsp+38h] [rbp-50h]
  char v49; // [rsp+3Fh] [rbp-49h]
  int v51; // [rsp+44h] [rbp-44h]
  int v52; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v49 = *v9;
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
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v49), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24, a9, v9);
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
  v51 = -1;
  v15 = s1;
  v16 = 0LL;
  v48 = 0;
  v52 = 0;
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
        && !v48 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
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
        __fprintf_chk(stderr, 1LL, v27, v26, a9, v9);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v31 = *((_QWORD *)a7 + 4);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32, a9, v31);
        v34 = stderr;
        v35 = (const char **)a4;
        v36 = ptr;
        v37 = (__int64)&ptr[v13 + 1];
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
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v52 )
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
    LODWORD(v13) = v51;
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
        v28 = *v12;
        v29 = *a2;
        v30 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v29, a9, v28);
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
          v38 = *v12;
          v39 = *a2;
          v40 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v40, v39, a9, v38);
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

__int64 __fastcall sub_408350(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_407C50((__int64)a2, a7);
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
        sub_407C50((__int64)a2, a7);
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
            return (unsigned int)sub_407D30(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_407D30(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_407D30(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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
        __fprintf_chk(stderr, 1LL, v44, v43, v21);
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
            __fprintf_chk(stderr, 1LL, v42, v41, v21);
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
      __fprintf_chk(stderr, 1LL, v40, v39, v21);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_408920(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60F4E0 = dword_60F2BC;
  dword_60F4E4 = dword_60F2B8;
  result = sub_408350(a1, a2, a3, a4, a5, a6, &dword_60F4E0, a7);
  dword_60F2BC = dword_60F4E0;
  qword_60F520 = qword_60F4F0;
  dword_60F2B4 = dword_60F4E8;
  return result;
}

__int64 __fastcall sub_408980(int a1, __int64 *a2, const char *a3)
{
  return sub_408920(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_4089A0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_408920(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_4089C0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408350(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4089E0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_408920(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_408A00(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408350(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_408A20(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_408F40(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

_BYTE *__fastcall sub_408AA0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

noreturn void  sub_408BB0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  __fprintf_chk(stderr, 1LL, "%s\n", v0);
  exit(status);
}

__int64 __fastcall sub_408BF0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 56);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    return v2(*(_QWORD *)(a1 + 72));
  else
    return v2(a2);
}

__int64 __fastcall sub_408C10(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 64);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    return v2(*(_QWORD *)(a1 + 72));
  else
    return v2(a2);
}

__int64 __fastcall sub_408C30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  char *v8; // rdx
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a3;
    v4 = a3 - 1;
  }
  else
  {
    v4 = 15LL;
    v3 = 16LL;
  }
  *(_QWORD *)(a1 + 48) = v4;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  v5 = (_QWORD *)sub_408BF0(a1, a2);
  *(_QWORD *)(a1 + 8) = v5;
  if ( !v5 )
    obstack_alloc_failed_handler();
  v6 = ((unsigned __int64)v5 + v4 + 16) & -v3;
  v7 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v6;
  v8 = (char *)v5 + v7;
  *(_QWORD *)(a1 + 24) = v6;
  *v5 = v8;
  *(_QWORD *)(a1 + 32) = v8;
  v5[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  *(_BYTE *)(a1 + 80) &= ~1u;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  return sub_408C30(a1, a2, a3);
}

__int64 __fastcall obstack_begin_1(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_BYTE *)(a1 + 80) |= 1u;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  return sub_408C30(a1, a2, a3);
}

__int64 __fastcall obstack_newchunk(__int64 a1, __int64 a2, __int64 a3, _BOOL8 a4)
{
  size_t v4; // r13
  __int64 v5; // rbp
  size_t v6; // rsi
  _BOOL8 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rsi
  size_t v10; // rdx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  char *v14; // rbx
  __int64 result; // rax

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
  if ( v7 || (a4 = v8) || (v9 = v11, v12 = (_QWORD *)sub_408BF0(a1, v11), (v13 = v12) == 0LL) )
    obstack_alloc_failed_handler(a1, v9, v10, a4);
  *(_QWORD *)(a1 + 8) = v12;
  v12[1] = v5;
  *(_QWORD *)(a1 + 32) = (char *)v12 + v11;
  *v12 = (char *)v12 + v11;
  v14 = (char *)(~*(_QWORD *)(a1 + 48) & ((unsigned __int64)v12 + *(_QWORD *)(a1 + 48) + 16));
  result = (__int64)memcpy(v14, *(const void **)(a1 + 16), v4);
  if ( (*(_BYTE *)(a1 + 80) & 2) == 0 )
  {
    result = (v5 + *(_QWORD *)(a1 + 48) + 16) & ~*(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 16) == result )
    {
      v13[1] = *(_QWORD *)(v5 + 8);
      result = sub_408C10(a1, v5);
    }
  }
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = &v14[v4];
  *(_BYTE *)(a1 + 80) &= ~2u;
  return result;
}

unsigned __int64 __fastcall obstack_allocated_p(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    while ( a2 <= result || *(_QWORD *)result < a2 )
    {
      result = *(_QWORD *)(result + 8);
      if ( !result )
        return 0LL;
    }
    return 1LL;
  }
  return result;
}

void obstack_free(struct obstack *obstack, void *block)
{
  struct _obstack_chunk *chunk; // rsi
  char *limit; // rax
  struct _obstack_chunk *prev; // r12

  chunk = obstack->chunk;
  if ( chunk )
  {
    while ( 1 )
    {
      if ( chunk < block )
      {
        limit = chunk->limit;
        if ( chunk->limit >= block )
          break;
      }
      prev = chunk->prev;
      sub_408C10((__int64)obstack, (__int64)chunk);
      *((_BYTE *)obstack + 80) |= 2u;
      chunk = prev;
      if ( !prev )
        goto LABEL_5;
    }
    obstack->next_free = (char *)block;
    obstack->object_base = (char *)block;
    obstack->chunk_limit = limit;
    obstack->chunk = chunk;
  }
  else
  {
LABEL_5:
    if ( block )
      abort();
  }
}

void obstack_free(struct obstack *obstack, void *block)
{
  struct _obstack_chunk *chunk; // rsi
  char *limit; // rax
  struct _obstack_chunk *prev; // r12

  chunk = obstack->chunk;
  if ( chunk )
  {
    while ( 1 )
    {
      if ( chunk < block )
      {
        limit = chunk->limit;
        if ( chunk->limit >= block )
          break;
      }
      prev = chunk->prev;
      sub_408C10((__int64)obstack, (__int64)chunk);
      *((_BYTE *)obstack + 80) |= 2u;
      chunk = prev;
      if ( !prev )
        goto LABEL_5;
    }
    obstack->next_free = (char *)block;
    obstack->object_base = (char *)block;
    obstack->chunk_limit = limit;
    obstack->chunk = chunk;
  }
  else
  {
LABEL_5:
    if ( block )
      abort();
  }
}

__int64 __fastcall obstack_memory_used(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD **)(a1 + 8);
  for ( result = 0LL; v1; result += v3 )
  {
    v3 = *v1 - (_QWORD)v1;
    v1 = (_QWORD *)v1[1];
  }
  return result;
}

int __fastcall sub_408EE0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

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
    return -1;
  }
  if ( !result )
    return result;
  if ( v1 )
    return -1;
  return -(*__errno_location() != 9);
}

bool __fastcall sub_408F40(int a1)
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

const char *sub_408FA0()
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
          v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_20:
          qword_60F518 = v1;
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
                sub_4055A0(v60);
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
            sub_4055A0(v39);
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409580(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_60F248 )
    v1 = (void *)qword_60F248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409598(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_60EE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
