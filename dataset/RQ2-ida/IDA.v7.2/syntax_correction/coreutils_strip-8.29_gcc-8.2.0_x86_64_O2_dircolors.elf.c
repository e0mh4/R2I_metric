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
  int v6; // er12
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
  __int64 v19; // rbx
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
    goto LABEL_47;
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
      goto LABEL_47;
    }
    goto LABEL_50;
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
      goto LABEL_23;
    }
    v25 = dcgettext(0LL, "no SHELL environment variable, and no shell type option given", 5);
    error(1, 0, v25);
LABEL_50:
    v26 = sub_404D30(v7[1]);
    v27 = dcgettext(0LL, "extra operand %s", 5);
    error(0, 0, v27, v26);
    goto LABEL_47;
  }
LABEL_23:
  obstack_begin(&unk_60F320, 0LL, 0LL, malloc, free);
  if ( v6 )
  {
    v10 = *v7;
    if ( strcmp(v10, "-") && !sub_402F60(v10, "r", stdin) || (v11 = sub_402480(stdin), (unsigned int)sub_4055A0(stdin)) )
    {
      v19 = sub_404BB0(0LL, 3LL, v10);
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
      v14 = "'\n";
    if ( (_DWORD)v3 )
      v16 = "setenv LS_COLORS '";
    fputs_unlocked(v16, stdout);
    fwrite_unlocked(v12, 1uLL, v13, stdout);
    fputs_unlocked(v14, stdout);
  }
  return (unsigned __int8)v4 ^ 1u;
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

void *sub_4021DB()
{
  void *result; // rax

  result = &unk_60F2C8;
  if ( &unk_60F2C8 != &unk_60F2C8 )
    result = 0LL;
  return result;
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
  __int64 v5; // rdx
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
        v5 = (__int64)(v4 + 1);
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
  FILE *v2; // r14
  char *v3; // rax
  char *v4; // rbx
  bool v5; // zf
  const char *v6; // rax
  int v7; // er15
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
  char *v18; // rax
  __int64 i; // rsi
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
  __int64 v52; // [rsp+8h] [rbp-60h]
  const char *v53; // [rsp+10h] [rbp-58h]
  unsigned __int8 v54; // [rsp+1Bh] [rbp-4Dh]
  int v55; // [rsp+1Ch] [rbp-4Ch]
  char *lineptr; // [rsp+20h] [rbp-48h]
  size_t n; // [rsp+28h] [rbp-40h]

  v2 = stream;
  v52 = a2;
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
  if ( !v2 )
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
        if ( !(v12[v13] & 0x2000) )
          break;
        ++v10;
      }
      if ( !(_BYTE)v13 || (_BYTE)v13 == 35 )
        goto LABEL_6;
      v14 = v10;
      do
        ++v14;
      while ( ((v12[(unsigned __int8)*v14] >> 13) ^ 1) & (*v14 != 0) );
      v48 = v11;
      v15 = (char *)sub_405580(v10, v14 - v10);
      if ( !*v14 )
        goto LABEL_76;
      v16 = *v48;
      do
        v17 = (unsigned __int8)*++v14;
      while ( v16[v17] & 0x2000 );
      if ( !(_BYTE)v17 || (v18 = v14, *v14 == 35) )
      {
LABEL_76:
        if ( !v15 )
          goto LABEL_6;
LABEL_39:
        v25 = sub_404BB0(0LL, 3LL, v52);
        v26 = dcgettext(0LL, "%s:%lu: invalid line;  missing second token", 5);
        error(0, 0, v26, v25, v9);
        free(v15);
        v54 = 0;
        goto LABEL_6;
      }
      while ( 1 )
      {
        i = (__int64)(v18 + 1);
        if ( v18[1] == 35 || v18[1] == 0 )
          break;
        ++v18;
      }
      if ( v16[(unsigned __int8)*v18] & 0x2000 )
      {
        for ( i = (__int64)v18; v16[*(unsigned __int8 *)(i - 1)] & 0x2000; --i )
          ;
      }
      v20 = sub_405580(v14, i - (_QWORD)v14);
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
      if ( v2 )
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
            if ( v52 )
              v46 = (char *)sub_404BB0(0LL, 3LL, v52);
            else
              v46 = dcgettext(0LL, "<internal>", 5);
            v50 = v46;
            v47 = dcgettext(0LL, "%s:%lu: unrecognized keyword %s", 5);
            error(0, 0, v47, v50, v9, v15, v50);
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
  if ( __getdelim(&lineptr, &n, 10, v2) > 0 )
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
  const char **v12; // rax
  const char *v13; // rbp
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  const char *v22; // [rsp+0h] [rbp-88h]
  const char *v23; // [rsp+8h] [rbp-80h]
  const char *v24; // [rsp+10h] [rbp-78h]
  const char *v25; // [rsp+18h] [rbp-70h]
  const char *v26; // [rsp+20h] [rbp-68h]
  const char *v27; // [rsp+28h] [rbp-60h]
  const char *v28; // [rsp+30h] [rbp-58h]
  const char *v29; // [rsp+38h] [rbp-50h]
  const char *v30; // [rsp+40h] [rbp-48h]
  const char *v31; // [rsp+48h] [rbp-40h]
  const char *v32; // [rsp+50h] [rbp-38h]
  const char *v33; // [rsp+58h] [rbp-30h]
  __int64 v34; // [rsp+60h] [rbp-28h]
  __int64 v35; // [rsp+68h] [rbp-20h]

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
  v22 = "[";
  v12 = &v22;
  v23 = "test invocation";
  v24 = "coreutils";
  v25 = "Multi-call invocation";
  v26 = "sha224sum";
  v27 = "sha2 utilities";
  v28 = "sha256sum";
  v29 = "sha2 utilities";
  v30 = "sha384sum";
  v31 = "sha2 utilities";
  v32 = "sha512sum";
  v33 = "sha2 utilities";
  v34 = 0LL;
  v35 = 0LL;
  do
    v12 += 2;
  while ( *v12 && strcmp("dircolors", *v12) );
  v13 = v12[1];
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
  int v4; // er8
  char v5; // al
  int v6; // er9
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
    result = (unsigned __int8)v4 - (unsigned int)(unsigned __int8)v6;
  }
  return result;
}

__int64 sub_402DE0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

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
        v5 = sub_404B80();
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
  int v9; // er15

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
        v2 = (char *)&unk_40B1B6;
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
      v2 = (char *)&unk_40B1BA;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "setenv LS_COLORS '" + 17;
  return v6;
}

unsigned __int64 __fastcall sub_4032B0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  const char *v54; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
      s2 = "setenv LS_COLORS '" + 17;
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
      s2 = "setenv LS_COLORS '" + 17;
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
        s2 = "setenv LS_COLORS '" + 17;
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
      s2 = "setenv LS_COLORS '" + 17;
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
            return sub_4032B0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4032B0((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "setenv LS_COLORS '" + 17;
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
              return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_4032B0((__int64)v9, v10, s);
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
          return sub_4032B0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_408A20((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4032B0((__int64)v9, v10, s);
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
      return sub_4032B0((__int64)v9, v10, s);
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
        a8 = sub_4031B0("`", v11);
        v47 = sub_4031B0("'", v11);
        v14 = v55;
        a9 = (char *)v47;
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

unsigned __int64 __fastcall sub_4032B0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  const char *v54; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
      s2 = "setenv LS_COLORS '" + 17;
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
      s2 = "setenv LS_COLORS '" + 17;
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
        s2 = "setenv LS_COLORS '" + 17;
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
      s2 = "setenv LS_COLORS '" + 17;
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
            return sub_4032B0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4032B0((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "setenv LS_COLORS '" + 17;
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
              return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
            return sub_4032B0((__int64)v9, v10, s);
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
              return sub_4032B0((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_4032B0((__int64)v9, v10, s);
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
          return sub_4032B0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_408A20((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4032B0((__int64)v9, v10, s);
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
      return sub_4032B0((__int64)v9, v10, s);
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
        a8 = sub_4031B0("`", v11);
        v47 = sub_4031B0("'", v11);
        v14 = v55;
        a9 = (char *)v47;
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

_BYTE *__fastcall sub_4044E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F298;
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
      v7 = (__int128 *)sub_405350(0LL, v9);
      off_60F298 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F2A0);
    }
    else
    {
      off_60F298 = (__int128 *)sub_405350(off_60F298, v9);
      v7 = off_60F298;
    }
    memset(&v7[dword_60F2B0], 0, 16LL * (a1 + 1 - dword_60F2B0));
    dword_60F2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_4032B0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
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
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4032B0(v14, v13, v17, v4, v15, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_4044E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F298;
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
      v7 = (__int128 *)sub_405350(0LL, v9);
      off_60F298 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F2A0);
    }
    else
    {
      off_60F298 = (__int128 *)sub_405350(off_60F298, v9);
      v7 = off_60F298;
    }
    memset(&v7[dword_60F2B0], 0, 16LL * (a1 + 1 - dword_60F2B0));
    dword_60F2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_4032B0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
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
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4032B0(v14, v13, v17, v4, v15, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_404A00(int a1, int a2, char *a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404A00(int a1, int a2, char *a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404A70(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_4044E0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_404A70(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_4044E0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_404B00(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_60F4D0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_60F4A0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60F4B0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_60F4C0);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_4044E0(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_404B80(char *a1)
{
  return sub_404B00(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_404BB0(int a1, int a2, char *a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404BB0(int a1, int a2, char *a3)
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
  return sub_4044E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404C20(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_60F4A0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_60F4B0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60F4C0);
  v9 = qword_60F4D0;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_4044E0(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_404D30(char *a1)
{
  return sub_4044E0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60F260);
}

__int64 __fastcall sub_404D50(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_404D50(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_405150(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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

__int64 __fastcall sub_4051B0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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

void *__fastcall sub_405350(void *a1, size_t a2)
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
        sub_405540();
    }
  }
  return result;
}

void *__fastcall sub_4054F0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4052F0(n);
  return memcpy(v2, src, n);
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
  if ( !(unsigned int)sub_405620(stream) )
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

int __fastcall sub_405620(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_407BF0(stream, 0LL, 1LL);
  return fflush(stream);
}

__int64 __fastcall sub_405660(_DWORD *a1)
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
      return (__int64)a1;
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
          return (__int64)(v2 + 2);
      }
      ++v2;
      v3 = v2[1];
      if ( !v3 )
        return (__int64)a1;
    }
    if ( !dword_60F4D8 )
      dword_60F4D8 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? -1 : 1;
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
        return (__int64)a1;
      v6 = v2[1];
      ++v2;
    }
  }
}

__int64 __fastcall sub_405760(unsigned __int8 *a1)
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
      return (__int64)a1;
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
          return (__int64)(v2 + 2);
      }
      v3 = (++v2)[1];
      if ( !(_BYTE)v3 )
        return (__int64)a1;
    }
    if ( !dword_60F4D8 )
      dword_60F4D8 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? -1 : 1;
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
        return (__int64)a1;
      v5 = *++v2;
    }
  }
}

__int64 __fastcall sub_405860(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned int v6; // er12
  int v7; // eax
  __int64 v8; // r14
  const wchar_t *v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  wchar_t v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  void *v19; // rsp
  wchar_t *v20; // rax
  char *v21; // rax
  _QWORD *v22; // r13
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  void *v25; // rsp
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  unsigned int v28; // er12
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
  const wchar_t *v42; // [rsp+8h] [rbp-78h]
  __int64 v43; // [rsp+10h] [rbp-70h]
  unsigned __int64 v44; // [rsp+18h] [rbp-68h]
  unsigned __int8 v45; // [rsp+23h] [rbp-5Dh]
  unsigned int v46; // [rsp+24h] [rbp-5Ch]
  unsigned __int64 v47; // [rsp+28h] [rbp-58h]
  __int64 v48; // [rsp+30h] [rbp-50h]
  size_t v49; // [rsp+38h] [rbp-48h]
  __int64 v50; // [rsp+48h] [rbp-38h]

  LOBYTE(v6) = a5;
  LODWORD(v48) = a1;
  v44 = a3;
  v47 = a4;
  v46 = a6;
  v45 = a5;
  v50 = 0LL;
  v49 = wcslen((const wchar_t *)a2);
  v7 = *(_DWORD *)(a2 + 4);
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = a2 + 4;
  v43 = a2;
  v9 = (const wchar_t *)(a2 + 4);
  v10 = &v50;
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
        dword_60F4D8 = (unsigned __int64)v21 < 1 ? -1 : 1;
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
        if ( v7 != 124 || v12 )
        {
LABEL_5:
          v7 = *(_DWORD *)(v8 + 4);
          v8 += 4LL;
        }
        else
        {
          v17 = v49;
          if ( (unsigned int)(v48 - 63) > 1 )
            v17 = ((v8 - (__int64)v9) >> 2) + 1;
          v18 = (4 * v17 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v18 - 8 > 0x1F37 || v17 > 0x3FFFFFFFFFFFFFFFLL )
            return 0xFFFFFFFFLL;
          v19 = alloca(v18 + 8);
          v20 = wmempcpy(
                  (wchar_t *)((((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8),
                  v9,
                  (v8 - (__int64)v9) >> 2);
          v9 = (const wchar_t *)(v8 + 4);
          *v20 = 0;
          v7 = *(_DWORD *)(v8 + 4);
          v8 += 4LL;
          *(_QWORD *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
          *v10 = ((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL;
          v10 = (__int64 *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL);
          v12 = 0LL;
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
  v23 = v43;
  if ( (unsigned int)(v48 - 63) > 1 )
    v49 = ((v8 - (__int64)v9) >> 2) + 1;
  v24 = (4 * v49 + 15) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v24 - 8 > 0x1F37 || v49 > 0x3FFFFFFFFFFFFFFFLL )
    return 0xFFFFFFFFLL;
  v25 = alloca(v24 + 8);
  *wmempcpy((wchar_t *)((((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8), v9, (v8 - (__int64)v9) >> 2) = 0;
  *v22 = ((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  v26 = v50;
  *(_QWORD *)(((unsigned __int64)&v42 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
  if ( !v26 )
    __assert_fail("list != NULL", "lib/fnmatch_loop.c", 0x454u, "ext_wmatch");
  if ( *(_DWORD *)(v8 - 4) != 41 )
    __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455u, "ext_wmatch");
  switch ( (_DWORD)v48 )
  {
    case 0x21:
      if ( v44 > v47 )
        return 1LL;
      v34 = v44;
      v49 = v26;
      v48 = v8;
      v35 = v44;
      v36 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v36 = v46;
      while ( 2 )
      {
        v37 = (_QWORD *)v49;
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
                v38 = (v46 & 5) == 5;
            }
            if ( !(unsigned int)sub_405DF0(v48, v35, v47, v38, v36) )
              return 0LL;
            break;
          }
        }
        v35 += 4LL;
        if ( v47 >= v35 )
          continue;
        break;
      }
      return 1LL;
    case 0x2A:
      if ( (unsigned int)sub_405DF0(v8, v44, v47, (unsigned __int8)v6, v46) )
        goto LABEL_43;
      return 0LL;
    case 0x2B:
LABEL_43:
      v43 = v8;
      v27 = v44;
      v28 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v28 = v46;
      v29 = v23 - 4;
      LODWORD(v48) = v46 & 1;
      v30 = v47;
      v42 = (const wchar_t *)v29;
      do
      {
        if ( v27 <= v30 )
        {
          v31 = v27;
          LODWORD(v49) = v45;
          do
          {
            if ( !(unsigned int)sub_405DF0(v26 + 8, v27, v31, (unsigned int)v49, v28) )
            {
              if ( v27 == v31 )
              {
                if ( !(unsigned int)sub_405DF0(v43, v27, v30, (unsigned int)v49, v28) )
                  return 0LL;
              }
              else
              {
                v32 = 0LL;
                if ( *(_DWORD *)(v31 - 4) == 47 )
                  v32 = (v46 & 5) == 5;
                if ( !(unsigned int)sub_405DF0(v43, v31, v30, v32, v28) )
                  return 0LL;
                v33 = 0LL;
                if ( *(_DWORD *)(v31 - 4) == 47 )
                  v33 = (v46 & 5) == 5;
                if ( !(unsigned int)sub_405DF0(v42, v31, v30, v33, v28) )
                  return 0LL;
              }
              v26 = v50;
            }
            v31 += 4LL;
          }
          while ( v30 >= v31 );
        }
        v26 = *(_QWORD *)v26;
        v50 = v26;
      }
      while ( v26 );
      return 1LL;
    case 0x3F:
      v6 = (unsigned __int8)v6;
      if ( (unsigned int)sub_405DF0(v8, v44, v47, (unsigned __int8)v6, v46) )
        goto LABEL_73;
      return 0LL;
    case 0x40:
      v6 = (unsigned __int8)v6;
LABEL_73:
      v39 = v44;
      v40 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v40 = v46;
      break;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_wmatch");
      return result;
  }
  while ( 1 )
  {
    v41 = wcscat((wchar_t *)(v26 + 8), (const wchar_t *)v8);
    if ( !(unsigned int)sub_405DF0(v41, v39, v47, v6, v40) )
      break;
    v26 = *(_QWORD *)v26;
    v50 = v26;
    if ( !v26 )
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_405DF0(wint_t *a1, const wchar_t *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  const wchar_t *v5; // r14
  const wchar_t *v6; // rbx
  wint_t v7; // er15
  unsigned __int8 v8; // r10
  int v9; // er12
  int v10; // er13
  wint_t *v11; // rbp
  wint_t v12; // eax
  wint_t v13; // eax
  wint_t v14; // er8
  wint_t v15; // eax
  wint_t *v16; // r14
  wint_t *v17; // r15
  wint_t v18; // eax
  wint_t v19; // ebx
  int v20; // er14
  __int64 i; // rsi
  wint_t v22; // edx
  _DWORD *v23; // rsi
  bool v24; // di
  wint_t v25; // eax
  __int64 result; // rax
  wint_t *v27; // rax
  int v28; // ebp
  const wchar_t *v29; // r14
  wint_t *v30; // r13
  wint_t v31; // er11
  wint_t *v32; // r15
  bool v33; // dl
  wint_t *v34; // rax
  wchar_t *v35; // rax
  wint_t v36; // er11
  wchar_t *v37; // r9
  unsigned __int8 v38; // r10
  wint_t v39; // eax
  __int64 v40; // r15
  wint_t v41; // er12
  unsigned int v42; // er14
  wint_t *v43; // r13
  unsigned __int64 v44; // rbx
  wint_t v45; // eax
  wint_t *v46; // r14
  __int64 v47; // rdx
  int v48; // eax
  char *v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // r15
  unsigned int v54; // ebp
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rcx
  int *v57; // r8
  int v58; // edx
  _DWORD *v59; // rbp
  int v60; // eax
  int *v61; // rax
  __int64 v62; // rbp
  char *v63; // rsi
  int *v64; // rdx
  int v65; // eax
  wctype_t v66; // rax
  wint_t *v67; // r9
  __int64 v68; // [rsp+8h] [rbp-580h]
  wchar_t *v69; // [rsp+8h] [rbp-580h]
  const wchar_t *v70; // [rsp+8h] [rbp-580h]
  bool v71; // [rsp+8h] [rbp-580h]
  unsigned __int64 wc; // [rsp+10h] [rbp-578h]
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
  char property; // [rsp+30h] [rbp-558h]
  int v86; // [rsp+13Ch] [rbp-44Ch]
  int v87[274]; // [rsp+140h] [rbp-448h]
  int _540[274]; // [rsp+540h] [rbp-48h]

  v5 = (const wchar_t *)a3;
  v6 = a2;
  v7 = *a1;
  v76 = a5;
  v68 = (__int64)(a1 + 1);
  if ( !*a1 )
    goto LABEL_56;
  wc = a3;
  v83 = a5 & 5;
  v8 = a4;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  v11 = a1;
  while ( 2 )
  {
    if ( v10 )
    {
      v77 = v8;
      v12 = towlower(v7);
      v8 = v77;
      v7 = v12;
    }
    switch ( v7 )
    {
      case 0x21u:
      case 0x2Bu:
      case 0x40u:
        if ( !(v76 & 0x20) )
          goto LABEL_49;
        if ( v11[1] != 40 )
          goto LABEL_49;
        result = sub_405860(v7, v68, (unsigned __int64)v6, wc, v8, v76);
        if ( (_DWORD)result == -1 )
          goto LABEL_49;
        return result;
      case 0x2Au:
        v27 = v11;
        v28 = v10;
        v29 = (const wchar_t *)wc;
        v30 = v27;
        if ( !(v76 & 0x20) || v27[1] != 40 )
          goto LABEL_65;
        v56 = wc;
        wcb = v8;
        result = sub_405860(42, v68, (unsigned __int64)v6, v56, v8, v76);
        if ( (_DWORD)result != -1 )
          return result;
        v8 = wcb;
LABEL_65:
        if ( v29 != v6 && *v6 == 46 && v8 )
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
            wcc = v8;
            v71 = v33;
            v80 = v31;
            v34 = (wint_t *)sub_405660(v32);
            v33 = v71;
            v8 = wcc;
            if ( v34 != v32 )
              goto LABEL_75;
            v31 = v80;
          }
          if ( v31 == 63 )
          {
            if ( v6 == v29 || *v6 == 47 && v76 & 1 )
              return 1LL;
            ++v6;
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
          v79 = v8;
          wca = v31;
          v35 = wmemchr(v6, -(v76 & 1) & 0x2F, v29 - v6);
          v36 = wca;
          v37 = v35;
          v38 = v79;
          if ( !v35 )
            v37 = (wchar_t *)v29;
          if ( wca == 91
            || v76 & 0x20
            && (v50 = wca - 33, (unsigned int)v50 <= 0x1F)
            && (v51 = 2147484673LL, _bittest64(&v51, v50))
            && *v32 == 40 )
          {
            v52 = v76 & 0xFFFFFFFB;
            if ( v76 & 1 )
              v52 = v76;
            v53 = (__int64)(v32 - 1);
            v54 = v52;
            if ( v37 > v6 )
            {
              v55 = (unsigned __int64)v37;
              do
              {
                if ( !(unsigned int)sub_405DF0(v53, v6, v29, v38, v54) )
                  return 0LL;
                ++v6;
                v38 = 0;
              }
              while ( v55 > (unsigned __int64)v6 );
            }
            return 1LL;
          }
          if ( wca != 47 )
          {
            if ( v76 & 1 )
              goto LABEL_84;
            goto LABEL_192;
          }
          if ( !(v76 & 1) )
          {
LABEL_192:
            v76 &= 0xFFFFFFFB;
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
            v40 = (__int64)(v32 - 1);
            if ( v37 <= v6 )
              return 1LL;
            v70 = v29;
            v41 = v36;
            v42 = v79;
            v43 = (wint_t *)v6;
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
          if ( v29 <= v6 )
            return 1LL;
          while ( *v6 != 47 )
          {
            ++v6;
            if ( v29 <= v6 )
              return 1LL;
          }
          result = (unsigned int)sub_405DF0(v32, v6 + 1, v29, (v76 >> 2) & 1, v76) != 0;
        }
        else
        {
          if ( !(v76 & 1) || v76 & 8 )
            return 0LL;
          result = wmemchr(v6, 47, v29 - v6) != 0LL;
        }
        return result;
      case 0x2Fu:
        if ( v83 != 5 )
          goto LABEL_49;
        if ( (const wchar_t *)wc == v6 || *v6 != 47 )
          return 1LL;
        v11 = (wint_t *)v68;
        v8 = 1;
        goto LABEL_54;
      case 0x3Fu:
        if ( v76 & 0x20 )
        {
          if ( v11[1] == 40 )
          {
            v82 = v8;
            result = sub_405860(63, v68, (unsigned __int64)v6, wc, v8, v76);
            v8 = v82;
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( (const wchar_t *)wc == v6 )
          return 1LL;
        if ( *v6 != 47 )
        {
          v8 &= *v6 == 46;
          if ( !v8 )
          {
            v11 = (wint_t *)v68;
            goto LABEL_54;
          }
          return 1LL;
        }
        if ( v76 & 1 )
          return 1LL;
        goto LABEL_53;
      case 0x5Bu:
        if ( !dword_60F4D8 )
        {
          v81 = v8;
          v49 = getenv("POSIXLY_CORRECT");
          v8 = v81;
          dword_60F4D8 = (unsigned __int64)v49 < 1 ? -1 : 1;
        }
        if ( (const wchar_t *)wc == v6 )
          return 1LL;
        v14 = *v6;
        if ( *v6 == 46 )
        {
          if ( v8 )
            return 1LL;
        }
        else if ( v14 == 47 && v76 & 1 )
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
        v17 = (wint_t *)v6;
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
              v6 = (const wchar_t *)v17;
              v7 = v84;
LABEL_50:
              v25 = *v6;
              if ( v10 )
                v25 = towlower(v25);
              if ( v25 != v7 )
                return 1LL;
LABEL_53:
              v11 = (wint_t *)v68;
              v8 = 0;
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
                i = (__int64)(v11 + 1);
                if ( v20 != 45 )
                  break;
                v22 = v11[1];
                if ( v22 != 93 && v22 )
                  goto LABEL_213;
                if ( v18 == v19 )
                {
                  v6 = (const wchar_t *)v17;
                  goto LABEL_152;
                }
                if ( v22 != 93 )
                {
LABEL_213:
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
                    v6 = (const wchar_t *)v17;
                    i = (__int64)(v23 + 1);
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
                v6 = (const wchar_t *)v17;
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
            if ( (unsigned int)(v48 - 97) > 0x18 )
              goto LABEL_109;
            ++v47;
            ++v46;
            *(&v86 + v47) = v48;
            if ( v47 == 256 )
              return 1LL;
          }
          if ( v46[2] != 93 )
          {
LABEL_109:
            i = (__int64)(v11 + 1);
            if ( v19 != 91 )
            {
              ++v11;
              v18 = 58;
              continue;
            }
LABEL_148:
            v6 = (const wchar_t *)v17;
            v20 = *v11;
            goto LABEL_152;
          }
          break;
        }
        v87[v47] = 0;
        v63 = &property;
        v64 = v87;
        v65 = v87[0];
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
          if ( v64 == _540 )
            return 1LL;
          ++v64;
          *(++v63 - 1) = v65;
          v65 = *v64;
        }
        while ( *v64 );
        *v63 = 0;
        v66 = wctype(&property);
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
        v6 = (const wchar_t *)v17;
        v20 = v46[3];
        for ( i = (__int64)(v67 + 4); ; i = (__int64)(v11 + 1) )
        {
LABEL_152:
          v57 = (int *)i;
          v58 = v20;
          if ( !v20 )
            return 1LL;
          v8 = v9 == 0 && v20 == 92;
          if ( v8 )
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
          v61 = (int *)(v11 + 2);
          v20 = v11[2];
          v62 = (__int64)(v11 + 257);
          while ( 1 )
          {
            if ( v20 == 58 )
            {
              if ( v61[1] != 93 )
                goto LABEL_158;
              v57 = v61 + 3;
              v58 = v61[2];
              goto LABEL_149;
            }
            if ( (unsigned int)(v20 - 97) > 0x18 )
              break;
            ++v61;
            v20 = *v61;
            if ( (int *)v62 == v61 )
              return 1LL;
          }
          v20 = 58;
          v11 = (wint_t *)i;
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
          v11 = (wint_t *)i;
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
        ++v6;
        v68 = (__int64)(v11 + 1);
        if ( !*v11 )
        {
          v5 = (const wchar_t *)wc;
LABEL_56:
          if ( v6 == v5 )
            return 0LL;
          if ( v76 & 8 )
            return *v6 != 47;
          return 1LL;
        }
        continue;
      case 0x5Cu:
        if ( v9 )
        {
          if ( (const wchar_t *)wc == v6 )
            return 1LL;
          if ( v10 )
          {
LABEL_10:
            v13 = towlower(*v6);
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
            if ( (const wchar_t *)wc == v6 )
              return 1LL;
            goto LABEL_10;
          }
          if ( (const wchar_t *)wc == v6 )
            return 1LL;
        }
        v13 = *v6;
        v11 = (wint_t *)v68;
LABEL_98:
        if ( v13 != v7 )
          return 1LL;
LABEL_99:
        v8 = 0;
        goto LABEL_54;
      default:
LABEL_49:
        if ( (const wchar_t *)wc != v6 )
          goto LABEL_50;
        return 1LL;
    }
  }
}

__int64 __fastcall sub_4068D0(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned int v6; // er12
  int v7; // eax
  __int64 i; // r14
  const void *v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 result; // rax
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  void *v18; // rsp
  _BYTE *v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  void *v24; // rsp
  _BYTE *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  _QWORD *v28; // r14
  unsigned int v29; // er12
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
  __int64 v44; // [rsp+8h] [rbp-78h]
  unsigned __int8 v45; // [rsp+13h] [rbp-6Dh]
  unsigned int v46; // [rsp+14h] [rbp-6Ch]
  unsigned __int64 v47; // [rsp+18h] [rbp-68h]
  unsigned __int64 v48; // [rsp+20h] [rbp-60h]
  __int64 v49; // [rsp+28h] [rbp-58h]
  size_t v50; // [rsp+30h] [rbp-50h]
  __int64 v51; // [rsp+38h] [rbp-48h]
  _QWORD *v52; // [rsp+48h] [rbp-38h]

  LOBYTE(v6) = a5;
  LODWORD(v51) = a1;
  v48 = a3;
  v47 = a4;
  v46 = a6;
  v45 = a5;
  v52 = 0LL;
  v50 = strlen((const char *)a2);
  v7 = *(unsigned __int8 *)(a2 + 1);
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
        dword_60F4D8 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? -1 : 1;
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
      v14 = *(_BYTE *)++v15;
      for ( i = v15 + 1; v14 != 93; i = v15 + 1 )
      {
        if ( !v14 )
          return 0xFFFFFFFFLL;
        v14 = *(_BYTE *)i;
        v15 = i;
LABEL_27:
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
        if ( (_BYTE)v7 != 124 || v12 )
        {
LABEL_5:
          v7 = *(unsigned __int8 *)++i;
        }
        else
        {
          v16 = i - (_QWORD)v9 + 1;
          if ( (unsigned int)v49 <= 1 )
            v16 = v50;
          v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v17 - 8 > 0x1F37 )
            return 0xFFFFFFFFLL;
          v18 = alloca(v17 + 8);
          v19 = mempcpy((void *)((((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 8), v9, i - (_QWORD)v9);
          v9 = (const void *)(i + 1);
          *v19 = 0;
          v7 = *(unsigned __int8 *)++i;
          *(_QWORD *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL) = 0LL;
          *v10 = ((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL;
          v10 = (__int64 *)(((unsigned __int64)&v44 + 7) & 0xFFFFFFFFFFFFFFF0LL);
          v12 = 0LL;
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
    case 0x21:
      if ( v48 > v47 )
        return 1LL;
      v35 = v48;
      v51 = i;
      v36 = v48;
      v37 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v37 = v46;
      while ( 2 )
      {
        v38 = (_QWORD *)v50;
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
                v39 = (v46 & 5) == 5;
            }
            if ( !(unsigned int)sub_406E20(v51, v36, v47, v39, v37) )
              return 0LL;
            break;
          }
        }
        if ( v47 >= ++v36 )
          continue;
        break;
      }
      return 1LL;
    case 0x2A:
      if ( (unsigned int)sub_406E20(i, v48, v47, (unsigned __int8)v6, v46) )
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
            if ( !(unsigned int)sub_406E20(v28 + 1, v27, v32, (unsigned int)v51, v29) )
            {
              if ( v27 == v32 )
              {
                if ( !(unsigned int)sub_406E20(v49, v27, v31, (unsigned int)v51, v29) )
                  return 0LL;
              }
              else
              {
                v33 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v33 = (v46 & 5) == 5;
                if ( !(unsigned int)sub_406E20(v49, v32, v31, v33, v29) )
                  return 0LL;
                v34 = 0LL;
                if ( *(_BYTE *)(v32 - 1) == 47 )
                  v34 = (v46 & 5) == 5;
                if ( !(unsigned int)sub_406E20(v44, v32, v31, v34, v29) )
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
    case 0x3F:
      v6 = (unsigned __int8)v6;
      if ( (unsigned int)sub_406E20(i, v48, v47, (unsigned __int8)v6, v46) )
        goto LABEL_71;
      return 0LL;
    case 0x40:
      v6 = (unsigned __int8)v6;
LABEL_71:
      v40 = v50;
      v41 = v47;
      v42 = v46 & 0xFFFFFFFB;
      if ( v46 & 1 )
        v42 = v46;
      break;
    default:
      __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ADu, "ext_match");
      return result;
  }
  while ( 1 )
  {
    v43 = strcat((char *)(v40 + 8), (const char *)i);
    if ( !(unsigned int)sub_406E20(v43, v48, v41, v6, v42) )
      break;
    v40 = *(_QWORD *)v40;
    v52 = (_QWORD *)v40;
    if ( !v40 )
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_406E20(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  unsigned __int8 *v5; // r14
  __int64 v6; // r12
  unsigned __int8 *v7; // r13
  unsigned __int8 v8; // r15
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
  unsigned int i; // er13
  __int32_t v38; // eax
  unsigned __int8 v39; // r15
  const __int32_t *v40; // rdx
  unsigned __int8 *v41; // r15
  __int64 v42; // rdx
  unsigned __int8 v43; // al
  _BYTE *v44; // r13
  char v45; // al
  const __int32_t **v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // er13
  __int64 v50; // rdx
  __int64 v51; // r13
  wctype_t v52; // r13
  wint_t v53; // eax
  unsigned __int64 v54; // [rsp+8h] [rbp-170h]
  __int64 v55; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v56; // [rsp+10h] [rbp-168h]
  __int64 v57; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v58; // [rsp+10h] [rbp-168h]
  unsigned __int8 *v59; // [rsp+18h] [rbp-160h]
  unsigned __int8 v60; // [rsp+18h] [rbp-160h]
  char v61; // [rsp+18h] [rbp-160h]
  unsigned int v62; // [rsp+20h] [rbp-158h]
  int v63; // [rsp+28h] [rbp-150h]
  unsigned __int8 v64; // [rsp+28h] [rbp-150h]
  int v65; // [rsp+2Ch] [rbp-14Ch]
  char property[328]; // [rsp+30h] [rbp-148h]

  v5 = a2;
  v6 = *a1;
  v54 = a3;
  v62 = a5;
  v55 = (__int64)(a1 + 1);
  if ( !(_BYTE)v6 )
    goto LABEL_66;
  v7 = a1;
  v63 = a5 & 5;
  v8 = a4;
  v9 = a5 & 2;
  v10 = a5 & 0x10;
  while ( 2 )
  {
    if ( v10 )
      LODWORD(v6) = LOBYTE((*__ctype_tolower_loc())[v6]);
    switch ( (_BYTE)v6 )
    {
      case 0x21:
      case 0x2B:
      case 0x40:
        if ( !(v62 & 0x20) )
          goto LABEL_60;
        if ( v7[1] != 40 )
          goto LABEL_60;
        result = sub_4068D0((unsigned __int8)v6, v55, (unsigned __int64)v5, v54, v8, v62);
        if ( (_DWORD)result == -1 )
          goto LABEL_60;
        return result;
      case 0x2A:
        if ( v62 & 0x20 )
        {
          if ( v7[1] == 40 )
          {
            result = sub_4068D0(42, v55, (unsigned __int64)v5, v54, v8, v62);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( v5 != (unsigned __int8 *)v54 && *v5 == 46 && v8 )
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
            v29 = (unsigned __int8 *)sub_405760(v28);
            v28 = v58;
            if ( v29 != v58 )
              goto LABEL_84;
            LOBYTE(v27) = v61;
          }
          if ( (_BYTE)v27 == 63 )
          {
            if ( v5 == (unsigned __int8 *)v54 || *v5 == 47 && v62 & 1 )
              return 1LL;
            ++v5;
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
          v31 = sub_408AA0(v5, -(int)v30 & 0x2F, v54 - (_QWORD)v5, v30, v27, v28);
          v32 = v64;
          v33 = (unsigned __int8 *)v31;
          v34 = v59;
          if ( !v31 )
            v33 = (unsigned __int8 *)v54;
          if ( v64 == 91
            || v62 & 0x20
            && (unsigned __int8)(v64 - 33) <= 0x1Fu
            && (v47 = 2147484673LL, _bittest64(&v47, (unsigned int)v64 - 33))
            && *v59 == 40 )
          {
            v48 = v62 & 0xFFFFFFFB;
            if ( v62 & 1 )
              v48 = v62;
            v49 = v48;
            if ( v33 > v5 )
            {
              do
              {
                if ( !(unsigned int)sub_406E20(v59 - 1, v5, v54, v8, v49) )
                  return 0LL;
                ++v5;
                v8 = 0;
              }
              while ( v33 != v5 );
            }
            return 1LL;
          }
          if ( v64 != 47 )
          {
            if ( v62 & 1 )
              goto LABEL_93;
            goto LABEL_187;
          }
          if ( !(v62 & 1) )
          {
LABEL_187:
            v62 &= 0xFFFFFFFB;
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
            v57 = (__int64)(v34 - 1);
            if ( v33 <= v5 )
              return 1LL;
            v36 = v32;
            for ( i = v8; ; i = 0 )
            {
              v38 = *v5;
              if ( v10 )
              {
                v39 = *v5;
                v38 = (*__ctype_tolower_loc())[v39];
              }
              if ( v38 == v36 && !(unsigned int)sub_406E20(v57, v5, v54, i, v62) )
                break;
              if ( v33 == ++v5 )
                return 1LL;
            }
            return 0LL;
          }
          if ( v54 <= (unsigned __int64)v5 )
            return 1LL;
          while ( *v5 != 47 )
          {
            if ( (unsigned __int8 *)v54 == ++v5 )
              return 1LL;
          }
          result = (unsigned int)sub_406E20(v59, v5 + 1, v54, (v62 >> 2) & 1, v62) != 0;
        }
        else
        {
          if ( !(v62 & 1) || v62 & 8 )
            return 0LL;
          result = sub_408AA0(v5, 47LL, v54 - (_QWORD)v5, v30, v27, v28) != 0;
        }
        return result;
      case 0x2F:
        if ( v63 != 5 )
          goto LABEL_60;
        if ( v5 == (unsigned __int8 *)v54 || *v5 != 47 )
          return 1LL;
        v7 = (unsigned __int8 *)v55;
        v8 = 1;
        goto LABEL_65;
      case 0x3F:
        if ( v62 & 0x20 )
        {
          if ( v7[1] == 40 )
          {
            result = sub_4068D0(63, v55, (unsigned __int64)v5, v54, v8, v62);
            if ( (_DWORD)result != -1 )
              return result;
          }
        }
        if ( v5 == (unsigned __int8 *)v54 )
          return 1LL;
        if ( *v5 != 47 )
        {
          v8 &= *v5 == 46;
          if ( !v8 )
          {
            v7 = (unsigned __int8 *)v55;
            goto LABEL_65;
          }
          return 1LL;
        }
        if ( v62 & 1 )
          return 1LL;
        goto LABEL_64;
      case 0x5B:
        if ( !dword_60F4D8 )
          dword_60F4D8 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? -1 : 1;
        if ( v5 == (unsigned __int8 *)v54 )
          return 1LL;
        v14 = *v5;
        if ( (_BYTE)v14 == 46 )
        {
          if ( v8 )
            return 1LL;
        }
        else if ( (_BYTE)v14 == 47 && v62 & 1 )
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
            v24 = *v5;
            if ( v10 )
            {
              v25 = *v5;
              v24 = (*__ctype_tolower_loc())[v25];
            }
            if ( v24 != (_DWORD)v6 )
              return 1LL;
LABEL_64:
            v7 = (unsigned __int8 *)v55;
            v8 = 0;
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
            *((_BYTE *)&v65 + v42 + 3) = v43;
            if ( v42 == 256 )
              return 1LL;
          }
          if ( v41[2] != 93 )
          {
LABEL_117:
            j = v7 + 1;
            if ( (_BYTE)v14 != 91 )
            {
              ++v7;
              v17 = 58LL;
              continue;
            }
LABEL_177:
            v18 = *v7;
            goto LABEL_49;
          }
          break;
        }
        property[v42] = 0;
        v52 = wctype(property);
        if ( !v52 )
          return 1LL;
        v53 = btowc(*v5);
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
          v8 = v9 == 0 && v18 == 92;
          if ( v8 )
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
          v50 = (__int64)(v7 + 2);
          v18 = v7[2];
          v51 = (__int64)(v7 + 257);
          while ( 1 )
          {
            if ( v18 == 58 )
            {
              if ( *(_BYTE *)(v50 + 1) == 93 )
              {
                v22 = (unsigned __int8 *)(v50 + 3);
                v23 = *(_BYTE *)(v50 + 2);
                goto LABEL_52;
              }
LABEL_47:
              v7 = j;
              goto LABEL_48;
            }
            if ( (unsigned __int8)(v18 - 97) > 0x18u )
              break;
            v18 = *(_BYTE *)++v50;
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
        ++v5;
        v55 = (__int64)(v7 + 1);
        if ( !(_BYTE)v6 )
        {
LABEL_66:
          if ( (unsigned __int8 *)v54 == v5 )
            return 0LL;
          if ( v62 & 8 )
            return *v5 != 47;
          return 1LL;
        }
        continue;
      case 0x5C:
        if ( v9 )
        {
          if ( v5 == (unsigned __int8 *)v54 )
            return 1LL;
          if ( !v10 )
          {
            v12 = 92;
LABEL_11:
            v13 = *v5;
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
            if ( v5 == (unsigned __int8 *)v54 )
              return 1LL;
            v12 = v11;
            goto LABEL_11;
          }
          v46 = __ctype_tolower_loc();
          v40 = *v46;
          v12 = (*v46)[v11];
          if ( v5 == (unsigned __int8 *)v54 )
            return 1LL;
          v12 = (unsigned __int8)v12;
          v7 += 2;
        }
        v13 = v40[*v5];
LABEL_12:
        if ( v13 != v12 )
          return 1LL;
LABEL_13:
        v8 = 0;
        goto LABEL_65;
      default:
LABEL_60:
        if ( v5 != (unsigned __int8 *)v54 )
          goto LABEL_61;
        return 1LL;
    }
  }
}

__int64 __fastcall sub_407910(char *a1, char *a2, unsigned int a3)
{
  unsigned int v3; // er12
  unsigned __int8 *v4; // rbx
  size_t v5; // rax
  __int64 result; // rax
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
  unsigned int v17; // [rsp+Ch] [rbp-54h]
  char *s; // [rsp+10h] [rbp-50h]
  char *src; // [rsp+18h] [rbp-48h]
  mbstate_t ps; // [rsp+28h] [rbp-38h]

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
    v4 = (unsigned __int8 *)s;
    v5 = strlen(s);
    return sub_406E20((unsigned __int8 *)src, v4, (unsigned __int64)&v4[v5], (v3 >> 2) & 1, v3);
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
               (const wchar_t *)((((unsigned __int64)&v17 + 3) & 0xFFFFFFFFFFFFFFF0LL) + 4 * v8),
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
    v17 = sub_405DF0(v15, v16, (unsigned __int64)&v16[v10 - 1], (v3 >> 2) & 1, v3);
    free(v15);
    result = v17;
  }
  return result;
}

FILE *__fastcall sub_407B50(char *filename, char *modes, FILE *a3)
{
  FILE *v3; // rax
  FILE *v4; // rbx
  int v5; // er13
  int v7; // eax
  int v8; // er14

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

__int64 __fastcall sub_407C50(__int64 a1, int *a2)
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

__int64 __fastcall sub_407D30(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_408350(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_407C50(a2, a7);
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
        sub_407C50((__int64)v11, a7);
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
            return (unsigned int)sub_407D30(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_407D30(a1, v11, v12, v45, v46, a6, a7, v8, 4246034LL);
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
        return (unsigned int)sub_407D30(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_408920(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
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

__int64 __fastcall sub_408980(int a1, __int64 a2, char *a3)
{
  return sub_408920(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_4089A0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_408920(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_4089C0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408350(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4089E0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_408920(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_408A00(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408350(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_408A20(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_408F40(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_408AA0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  _BYTE *v6; // rdi

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
  v4 = ((((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
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
    v5 = (__int64)(a1 + 1);
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
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  __fprintf_chk(stderr, 1LL, 4243200LL, v0);
  exit(status);
}

__int64 __fastcall sub_408BF0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 result; // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 56);
  if ( *(_BYTE *)(a1 + 80) & 1 )
    result = v2(*(_QWORD *)(a1 + 72));
  else
    result = v2(a2);
  return result;
}

__int64 __fastcall sub_408C10(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 result; // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 64);
  if ( *(_BYTE *)(a1 + 80) & 1 )
    result = v2(*(_QWORD *)(a1 + 72));
  else
    result = v2(a2);
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  char *v10; // rdx
  __int64 result; // rax

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
  v7 = (_QWORD *)sub_408BF0(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = ((unsigned __int64)v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = (char *)v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  v7[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  char *v10; // rdx
  __int64 result; // rax

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
  v7 = (_QWORD *)sub_408BF0(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = ((unsigned __int64)v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = (char *)v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  v7[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  char *v10; // rdx
  __int64 result; // rax

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
  v7 = (_QWORD *)sub_408BF0(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = ((unsigned __int64)v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = (char *)v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  v7[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin_1(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  char *v11; // rdx
  __int64 result; // rax

  *(_BYTE *)(a1 + 80) |= 1u;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  if ( !a3 )
    JUMPOUT(0x408CA0LL);
  v6 = a3;
  v7 = a3 - 1;
  *(_QWORD *)(a1 + 48) = a3 - 1;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  v8 = (_QWORD *)sub_408BF0(a1, a2);
  *(_QWORD *)(a1 + 8) = v8;
  if ( !v8 )
    JUMPOUT(0x408CADLL);
  v9 = ((unsigned __int64)v8 + v7 + 16) & -v6;
  v10 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v9;
  v11 = (char *)v8 + v10;
  *(_QWORD *)(a1 + 24) = v9;
  *v8 = v11;
  *(_QWORD *)(a1 + 32) = v11;
  v8[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  char *v10; // rdx
  __int64 result; // rax

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
  v7 = (_QWORD *)sub_408BF0(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = ((unsigned __int64)v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = (char *)v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  v7[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
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
  if ( !(*(_BYTE *)(a1 + 80) & 2) )
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
  *(_BYTE *)(a1 + 80) &= 0xFDu;
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
    result = 1LL;
  }
  return result;
}

void obstack_free(struct obstack *obstack, void *block)
{
  char *v2; // rbp
  struct _obstack_chunk *v3; // rsi
  char *v4; // rax
  struct _obstack_chunk *v5; // r12

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
  char *v2; // rbp
  struct _obstack_chunk *v3; // rsi
  char *v4; // rax
  struct _obstack_chunk *v5; // r12

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

const char *sub_408FA0()
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
            sub_4055A0(v39);
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
  if ( &unk_60F248 )
    v1 = (void *)unk_60F248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409598(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_60EE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
