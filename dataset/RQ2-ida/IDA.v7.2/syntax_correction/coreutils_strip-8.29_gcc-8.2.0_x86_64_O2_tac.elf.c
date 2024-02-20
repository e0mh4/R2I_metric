#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __usercall main(char **a1, char **a2, int a3, _BOOL4 a4, char *a5)
{
  int v5; // ebp
  int v6; // eax
  char v7; // dl
  __int64 v8; // rax
  int v9; // edx
  size_t v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r12
  char **v14; // r15
  unsigned __int64 v15; // rax
  bool v16; // zf
  __off_t v17; // rbx
  FILE *v18; // rbx
  int v19; // eax
  FILE *v20; // r13
  __int64 v21; // rbx
  size_t v22; // rax
  size_t v23; // r15
  unsigned int v24; // eax
  char v25; // bl
  const char *v27; // rsi
  __int64 v28; // rbp
  char *v29; // rbx
  int *v30; // rax
  const char *v31; // rdx
  const char *v32; // rsi
  __int64 v33; // rbx
  char *v34; // r13
  int *v35; // rax
  __int64 v36; // rcx
  char *v37; // rbx
  char *v38; // rax
  int v39; // eax
  int v40; // er13
  int *v41; // rax
  __int64 v42; // rbx
  char *v43; // r13
  int *v44; // rax
  __int64 v45; // rbx
  int *v46; // rax
  char *v47; // rax
  __int64 v48; // [rsp+0h] [rbp-58h]
  char v49; // [rsp+Fh] [rbp-49h]
  char *v50; // [rsp+10h] [rbp-48h]
  char *format; // [rsp+18h] [rbp-40h]
  const char *formata; // [rsp+18h] [rbp-40h]

  v5 = a3;
  sub_403070(*a1);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_414B70(sub_402EF0);
  byte_61D4C8 = 1;
  src = "\n";
  qword_61D4C0 = 1LL;
  while ( 1 )
  {
    v6 = sub_406380((unsigned int)a3, a1, "brs:", &off_415180, 0LL);
    if ( v6 == -1 )
      break;
    if ( v6 == 98 )
    {
      byte_61D4C8 = 0;
    }
    else
    {
      if ( v6 <= 98 )
      {
        if ( v6 == -131 )
        {
          sub_405200((char)stdout);
          exit(0);
        }
        if ( v6 == -130 )
          sub_402B70(0);
LABEL_75:
        sub_402B70(1);
      }
      if ( v6 == 114 )
      {
        qword_61D4C0 = 0LL;
      }
      else
      {
        if ( v6 != 115 )
          goto LABEL_75;
        src = (void *)qword_61D688;
      }
    }
  }
  v7 = *(_BYTE *)src;
  if ( !qword_61D4C0 )
  {
    if ( v7 )
    {
      qword_61D460 = 0LL;
      qword_61D468 = 0LL;
      qword_61D480 = (__int64)&unk_61D360;
      qword_61D488 = 0LL;
      v8 = sub_4137A0(src, strlen((const char *)src), &qword_61D460);
      if ( !v8 )
        goto LABEL_18;
    }
    else
    {
      v47 = dcgettext(0LL, "separator cannot be empty", 5);
      error(1, 0, v47);
    }
    error(1, 0, "%s", v8);
LABEL_79:
    v25 = 0;
    goto LABEL_49;
  }
  v15 = 1LL;
  if ( v7 )
    v15 = strlen((const char *)src);
  qword_61D4C0 = v15;
  qword_61D4B8 = v15;
LABEL_18:
  v9 = 50;
  v10 = 0x2000LL;
  nbytes = 0x2000LL;
  if ( (unsigned __int64)qword_61D4C0 > 0xFFF )
  {
    while ( 1 )
    {
      v10 *= 2LL;
      if ( v10 >> 1 > qword_61D4C0 )
        break;
      if ( !--v9 )
      {
        nbytes = v10;
        sub_405590();
      }
    }
    nbytes = v10;
  }
  v11 = v10 + qword_61D4C0 + 1;
  qword_61D4A0 = 2 * v11;
  if ( 2 * v11 <= v11 || v11 <= v10 )
    sub_405590();
  v12 = sub_405340();
  v13 = qword_61D4C0;
  buf = (void *)v12;
  if ( qword_61D4C0 )
    buf = (char *)memcpy((void *)v12, src, qword_61D4C0 + 1) + v13;
  else
    buf = (void *)(v12 + 1);
  if ( dword_61B2DC >= a3 )
  {
    v50 = "-";
    v14 = (char **)&off_415160;
    a5 = "-";
    goto LABEL_33;
  }
  v14 = &a1[dword_61B2DC];
  a5 = *v14;
  if ( *v14 )
  {
    v50 = "-";
LABEL_33:
    v49 = 1;
    v48 = (__int64)(v14 + 1);
    while ( 1 )
    {
      v16 = memcmp(a5, v50, 2uLL) == 0;
      a4 = !v16;
      if ( v16 )
      {
        v5 = 0;
        byte_61D4C9 = 1;
        a5 = dcgettext(0LL, "standard input", 5);
      }
      else
      {
        v5 = open(a5, 0);
        if ( v5 < 0 )
        {
          v27 = "failed to open %s for reading";
          v28 = sub_404A40(4LL, a5);
          goto LABEL_55;
        }
      }
      v17 = lseek(v5, 0LL, 2);
      if ( v17 < 0 || isatty(v5) )
      {
        if ( ptr )
        {
          v18 = stream;
          clearerr_unlocked(stream);
          if ( (int)sub_4055D0(v18, 0LL, 0LL) >= 0 )
          {
            v19 = fileno(stream);
            if ( ftruncate(v19, 0LL) >= 0 )
              goto LABEL_41;
          }
          v32 = "failed to rewind stream for %s";
          v33 = sub_404A40(4LL, ptr);
LABEL_59:
          v34 = dcgettext(0LL, v32, 5);
          v35 = __errno_location();
          v36 = v33;
          v25 = 0;
          error(0, *v35, v34, v36);
        }
        else
        {
          v37 = getenv("TMPDIR");
          if ( !v37 )
            v37 = "/tmp";
          v38 = (char *)sub_402F90(v37, "tacXXXXXX");
          ptr = v38;
          v39 = sub_404D10(v38);
          v40 = v39;
          if ( v39 < 0 )
          {
            v42 = sub_404A40(4LL, v37);
            v43 = dcgettext(0LL, "failed to create temporary file in %s", 5);
            v44 = __errno_location();
            error(0, *v44, v43, v42);
          }
          else
          {
            stream = fdopen(v39, "w+");
            if ( stream )
            {
              unlink(ptr);
LABEL_41:
              v20 = stream;
              v21 = 0LL;
              format = ptr;
              while ( 1 )
              {
                v22 = sub_404CB0(v5, buf, nbytes);
                v23 = v22;
                if ( !v22 )
                  break;
                if ( v22 == -1LL )
                {
                  v32 = "%s: read error";
                  v33 = sub_404B10(0LL, 3LL, a5);
                  goto LABEL_59;
                }
                if ( v22 != fwrite_unlocked(buf, 1uLL, v22, v20) )
                  goto LABEL_61;
                v21 += v23;
              }
              if ( fflush_unlocked(v20) )
              {
LABEL_61:
                v32 = "%s: write error";
                v33 = sub_404B10(0LL, 3LL, format);
                goto LABEL_59;
              }
              if ( v21 < 0 )
                goto LABEL_79;
              v24 = fileno(v20);
              v25 = sub_4025F0(v24, format, v21);
              goto LABEL_49;
            }
            v45 = sub_404A40(4LL, ptr);
            formata = dcgettext(0LL, "failed to open %s for writing", 5);
            v46 = __errno_location();
            error(0, *v46, formata, v45);
            close(v40);
            unlink(ptr);
          }
          v25 = 0;
          free(ptr);
          ptr = 0LL;
        }
      }
      else
      {
        v25 = sub_4025F0((unsigned int)v5, a5, v17);
      }
LABEL_49:
      if ( !a4 || !close(v5) )
        goto LABEL_50;
      v27 = "%s: read error";
      v28 = sub_404B10(0LL, 3LL, a5);
LABEL_55:
      v29 = dcgettext(0LL, v27, 5);
      v30 = __errno_location();
      v31 = v29;
      v25 = 0;
      error(0, *v30, v31, v28);
LABEL_50:
      v48 += 8LL;
      v49 &= v25;
      a5 = *(char **)(v48 - 8);
      if ( !a5 )
        goto LABEL_51;
    }
  }
  v49 = 1;
LABEL_51:
  sub_402510(0LL);
  if ( byte_61D4C9 && close(0) < 0 )
  {
    v41 = __errno_location();
    error(0, *v41, "-");
    v49 = 0;
  }
  return (unsigned __int8)v49 ^ 1u;
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

__int64 *sub_40245B()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_40247A()
{
  return 0LL;
}

__int64 *sub_4024B1()
{
  __int64 *result; // rax

  if ( !byte_61B308 )
  {
    while ( qword_61B310 < (unsigned __int64)(&qword_61AE48 - qword_61AE40 - 1) )
      ((void (*)(void))qword_61AE40[++qword_61B310])();
    result = sub_40245B();
    byte_61B308 = 1;
  }
  return result;
}

__int64 sub_402508()
{
  return sub_40247A();
}

__int64 __fastcall sub_402510(void *src, __int64 a2)
{
  size_t v2; // rdx
  size_t v3; // rsi
  size_t v4; // rbx
  char *v5; // r12
  size_t v6; // rbp
  size_t v7; // rbx
  char *v8; // rdi
  __int64 result; // rax

  v2 = n;
  v3 = a2 - (_QWORD)src;
  v4 = 0x2000 - n;
  if ( src )
  {
    v5 = (char *)src;
    v6 = v3;
    if ( v3 < v4 )
    {
      v8 = (char *)&unk_61B320 + n;
      v7 = n + v3;
    }
    else
    {
      do
      {
        v6 -= v4;
        memcpy((char *)&unk_61B320 + v2, v5, v4);
        v5 += v4;
        v4 = 0x2000LL;
        fwrite_unlocked(&unk_61B320, 1uLL, 0x2000uLL, stdout);
        v2 = 0LL;
        n = 0LL;
      }
      while ( v6 > 0x1FFF );
      v7 = v6;
      v8 = (char *)&unk_61B320;
    }
    result = (__int64)memcpy(v8, v5, v6);
    n = v7;
  }
  else
  {
    result = fwrite_unlocked(&unk_61B320, 1uLL, n, stdout);
    n = 0LL;
  }
  return result;
}

__int64 __fastcall sub_4025F0(int a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  size_t v4; // rbp
  char v5; // bl
  __int64 v6; // r15
  size_t v7; // r13
  size_t v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbp
  char *v11; // r12
  int *v12; // rax
  char *v13; // r12
  __int64 v14; // rax
  char *v15; // rbp
  const char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // r15
  size_t v20; // rax
  size_t v21; // rbp
  unsigned __int64 v22; // rdi
  __int64 v23; // r15
  void *v24; // r12
  size_t v25; // r15
  size_t v26; // rdx
  char *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r12
  char *v32; // r15
  int *v33; // rax
  __int64 v34; // rbp
  char *v35; // rbx
  int *v36; // rax
  __int64 v38; // rbp
  char *v39; // r12
  int *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *s2; // [rsp+8h] [rbp-60h]
  char *s1; // [rsp+10h] [rbp-58h]
  char *s1a; // [rsp+10h] [rbp-58h]
  int fd; // [rsp+18h] [rbp-50h]
  char v47; // [rsp+1Fh] [rbp-49h]
  __int64 v48; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v4 = nbytes;
  fd = a1;
  v5 = *(_BYTE *)src;
  v48 = a2;
  s2 = (char *)src + 1;
  v6 = qword_61D4B8;
  v7 = qword_61D4B8 - 1;
  v8 = a3 % nbytes;
  if ( v8 )
  {
    v3 -= v8;
    if ( lseek(a1, v3, 0) < 0 )
    {
      v38 = sub_404B10(0LL, 3LL, a2);
      v39 = dcgettext(0LL, "%s: seek failed", 5);
      v40 = __errno_location();
      error(0, *v40, v39, v38);
      v4 = nbytes;
    }
  }
  while ( 1 )
  {
    v9 = sub_404CB0(a1, buf, v4);
    v4 = nbytes;
    if ( v9 )
    {
      if ( v9 == nbytes )
        goto LABEL_47;
      v4 = v9;
      goto LABEL_10;
    }
    if ( !v3 )
      break;
    if ( lseek(a1, -(__int64)nbytes, 1) < 0 )
    {
      v10 = sub_404B10(0LL, 3LL, a2);
      v11 = dcgettext(0LL, "%s: seek failed", 5);
      v12 = __errno_location();
      error(0, *v12, v11, v10);
      v4 = nbytes;
    }
    v3 -= v4;
  }
  if ( nbytes )
  {
    v4 = 0LL;
    goto LABEL_11;
  }
LABEL_47:
  while ( 1 )
  {
    v29 = sub_404CB0(a1, buf, v4);
    if ( !v29 )
      break;
    if ( v29 == -1 )
      goto LABEL_54;
    v3 += v29;
    v4 = v29;
    if ( nbytes != v29 )
      goto LABEL_11;
  }
LABEL_10:
  if ( v4 == -1LL )
  {
LABEL_54:
    v34 = sub_404B10(0LL, 3LL, v48);
    v35 = dcgettext(0LL, "%s: read error", 5);
    v36 = __errno_location();
    error(0, *v36, v35, v34);
    return 0LL;
  }
LABEL_11:
  v13 = (char *)buf;
  v14 = qword_61D4C0;
  v47 = 1;
  v15 = (char *)buf + v4;
  v16 = &v15[-v6 + 1];
  if ( !qword_61D4C0 )
    v16 = v15;
LABEL_13:
  if ( !v14 )
  {
LABEL_14:
    v17 = 1 - (v16 - v13);
    if ( v17 > 1 )
    {
      v41 = dcgettext(0LL, "record too large", 5);
      error(1, 0, v41);
LABEL_61:
      sub_405590();
    }
    if ( v17 == 1 )
      goto LABEL_50;
    v18 = sub_414120(&qword_61D460, v13, v16 - v13, v16 - v13 - 1, v17, &unk_61D340);
    if ( v18 == -1 )
    {
      v13 = (char *)buf;
LABEL_50:
      v19 = v13 - 1;
      goto LABEL_19;
    }
    if ( v18 == -2 )
    {
      v42 = dcgettext(0LL, "error in regular expression search", 5);
      error(1, 0, v42);
      sub_402B70(1);
    }
    v13 = (char *)buf;
    v19 = (char *)buf + *(_QWORD *)qword_61D348;
    qword_61D4B8 = *(_QWORD *)qword_61D350 - *(_QWORD *)qword_61D348;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v19 = (char *)(v16 - 1);
    if ( *(v16 - 1) == v5 )
      break;
LABEL_35:
    v16 = v19;
  }
  while ( 1 )
  {
    if ( v7 )
    {
      if ( strncmp(v16, s2, v7) )
        goto LABEL_35;
      if ( v19 >= v13 )
      {
LABEL_40:
        if ( byte_61D4C8 )
        {
          v47 = (v15 != &v19[qword_61D4B8]) | v47 ^ 1;
          if ( v47 )
          {
            s1a = &v19[qword_61D4B8];
            sub_402510(&v19[qword_61D4B8], (__int64)v15);
            v47 = 0;
            v13 = (char *)buf;
            v15 = s1a;
          }
          else
          {
            v15 = &v19[qword_61D4B8];
          }
        }
        else
        {
          v30 = (__int64)v15;
          v15 = v19;
          sub_402510(v19, v30);
          v13 = (char *)buf;
        }
        v14 = qword_61D4C0;
        v16 = v19;
        if ( qword_61D4C0 )
        {
          v16 = &v19[1 - qword_61D4B8];
          goto LABEL_13;
        }
        goto LABEL_14;
      }
    }
    else
    {
LABEL_19:
      if ( v19 >= v13 )
        goto LABEL_40;
    }
    if ( !v3 )
      break;
    v20 = nbytes;
    v21 = v15 - v13;
    if ( nbytes < v21 )
    {
      v22 = qword_61D4A0;
      v23 = 1LL;
      nbytes *= 2LL;
      if ( qword_61D4C0 )
        v23 = qword_61D4C0;
      qword_61D4A0 = qword_61D4C0 + 4 * v20 + 2;
      if ( qword_61D4C0 + 4 * v20 + 2 < v22 )
        goto LABEL_61;
      buf = (void *)(v23 + sub_4053A0(&v13[-v23]));
      v20 = nbytes;
    }
    if ( v3 < v20 )
    {
      nbytes = v3;
      v3 = 0LL;
    }
    else
    {
      v3 -= v20;
    }
    if ( lseek(fd, v3, 0) < 0 )
    {
      v31 = sub_404B10(0LL, 3LL, v48);
      v32 = dcgettext(0LL, "%s: seek failed", 5);
      v33 = __errno_location();
      error(0, *v33, v32, v31);
    }
    v24 = buf;
    v25 = nbytes;
    v26 = v21;
    v15 = (char *)buf + nbytes + v21;
    v27 = (char *)memmove((char *)buf + nbytes, buf, v26);
    if ( !qword_61D4C0 )
      v27 = v15;
    s1 = v27;
    v28 = sub_404CB0(fd, v24, v25);
    v16 = s1;
    if ( v28 != nbytes )
      goto LABEL_54;
    v13 = (char *)buf;
    if ( !qword_61D4C0 )
      goto LABEL_14;
    v19 = s1 - 1;
    if ( *(s1 - 1) != v5 )
      goto LABEL_35;
  }
  sub_402510(v13, (__int64)v15);
  return 1LL;
}

noreturn void __fastcall  sub_402B70(int status)
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

  v1 = qword_61D4E8;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(0LL, "Write each FILE to standard output, last line first.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "  -b, --before             attach the separator before instead of after\n"
          "  -r, --regex              interpret the separator as a regular expression\n"
          "  -s, --separator=STRING   use STRING as the separator instead of newline\n",
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
  while ( *v16 && strcmp("tac", *v16) );
  v17 = v16[1];
  if ( v17 )
  {
    v18 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v18, &unk_414C6E);
    v19 = setlocale(5, 0LL);
    if ( !v19 || !strncmp(v19, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v22 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v22, &unk_414C6E);
    v23 = setlocale(5, 0LL);
    if ( !v23 || !strncmp(v23, "en_", 3uLL) )
    {
      v17 = "tac";
      v24 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v24, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v17 = "tac";
  }
  v25 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v25, "tac");
LABEL_10:
  v20 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v20, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v21 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v21, v17);
LABEL_3:
  exit(status);
}

__int64 sub_402EF0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_4141C0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_61D4D8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_61D4E0 )
      {
        v5 = sub_404AE0();
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
  result = sub_4141C0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void *__fastcall sub_402F90(void *src, void *a2, _QWORD *a3)
{
  const char *v3; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  _BOOL8 v7; // rbx
  size_t v8; // rbp
  size_t v9; // rax
  size_t v10; // r14
  void *v11; // rax
  void *v12; // r15
  _BYTE *v13; // rax
  char *v14; // rdi
  _QWORD *v16; // [rsp+0h] [rbp-48h]
  char v17; // [rsp+Fh] [rbp-39h]

  v3 = (const char *)a2;
  v16 = a3;
  v4 = sub_414220();
  v5 = v4;
  v6 = sub_414280(v4);
  v7 = v6;
  v8 = v6 + v5 - (_QWORD)src;
  if ( v6 )
    v7 = *(_BYTE *)(v5 + v6 - 1) != 47;
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

char *__fastcall sub_403070(const char *a1)
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
  qword_61D4E8 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_403110(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_414380();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_4152A1;
      if ( !v5 )
        v2 = (char *)&unk_415296;
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
    v2 = (char *)&unk_41529D;
    if ( !v5 )
      v2 = (char *)&unk_41529A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_403210(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_403210((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_403210((__int64)v9, v79, s);
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
              return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
            return sub_403210((__int64)v9, v10, s);
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
            return sub_403210((__int64)v9, v10, s);
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
            return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
            return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
          return sub_403210((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_406400((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_403210((__int64)v9, v10, s);
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
      return sub_403210((__int64)v9, v10, s);
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
        a8 = sub_403110("`", v11);
        v47 = sub_403110("'", v11);
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

unsigned __int64 __fastcall sub_403210(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_403210((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_403210((__int64)v9, v79, s);
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
              return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
            return sub_403210((__int64)v9, v10, s);
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
            return sub_403210((__int64)v9, v10, s);
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
            return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
            return sub_403210((__int64)v9, v10, s);
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
              return sub_403210((__int64)v9, v10, s);
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
          return sub_403210((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_406400((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_403210((__int64)v9, v10, s);
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
      return sub_403210((__int64)v9, v10, s);
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
        a8 = sub_403110("`", v11);
        v47 = sub_403110("'", v11);
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

_BYTE *__fastcall sub_404440(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  unsigned __int64 *v9; // rbx
  _BYTE *v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rax
  int v14; // er8
  char *v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+10h] [rbp-48h]
  int v19; // [rsp+18h] [rbp-40h]
  int v20; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v16 = a2;
  v6 = __errno_location();
  v7 = off_61B2B8;
  v8 = v6;
  v19 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_61B2D0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405590();
    if ( off_61B2B8 == &xmmword_61B2C0 )
    {
      v7 = (__int128 *)sub_4053A0(0LL);
      off_61B2B8 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B2C0);
    }
    else
    {
      off_61B2B8 = (__int128 *)sub_4053A0(off_61B2B8);
      v7 = off_61B2B8;
    }
    memset(&v7[dword_61B2D0], 0, 16LL * (a1 + 1 - dword_61B2D0));
    dword_61B2D0 = a1 + 1;
  }
  v9 = (unsigned __int64 *)&v7[a1];
  v10 = (_BYTE *)v9[1];
  v20 = *(_DWORD *)(v5 + 4) | 1;
  v17 = *v9;
  v11 = sub_403210(v10, *v9, a2, v4, *(_DWORD *)v5, v20, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v17 <= v11 )
  {
    v12 = v11 + 1;
    *v9 = v11 + 1;
    if ( v10 != (_BYTE *)&unk_61D500 )
    {
      v18 = v11 + 1;
      free(v10);
      v12 = v18;
    }
    v13 = (_BYTE *)sub_405340(v12);
    v14 = *(_DWORD *)v5;
    v9[1] = (unsigned __int64)v13;
    v10 = v13;
    sub_403210(v13, v12, v16, v4, v14, v20, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v19;
  return v10;
}

_BYTE *__fastcall sub_404440(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  unsigned __int64 *v9; // rbx
  _BYTE *v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rax
  int v14; // er8
  char *v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+10h] [rbp-48h]
  int v19; // [rsp+18h] [rbp-40h]
  int v20; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v16 = a2;
  v6 = __errno_location();
  v7 = off_61B2B8;
  v8 = v6;
  v19 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_61B2D0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405590();
    if ( off_61B2B8 == &xmmword_61B2C0 )
    {
      v7 = (__int128 *)sub_4053A0(0LL);
      off_61B2B8 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B2C0);
    }
    else
    {
      off_61B2B8 = (__int128 *)sub_4053A0(off_61B2B8);
      v7 = off_61B2B8;
    }
    memset(&v7[dword_61B2D0], 0, 16LL * (a1 + 1 - dword_61B2D0));
    dword_61B2D0 = a1 + 1;
  }
  v9 = (unsigned __int64 *)&v7[a1];
  v10 = (_BYTE *)v9[1];
  v20 = *(_DWORD *)(v5 + 4) | 1;
  v17 = *v9;
  v11 = sub_403210(v10, *v9, a2, v4, *(_DWORD *)v5, v20, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v17 <= v11 )
  {
    v12 = v11 + 1;
    *v9 = v11 + 1;
    if ( v10 != (_BYTE *)&unk_61D500 )
    {
      v18 = v11 + 1;
      free(v10);
      v12 = v18;
    }
    v13 = (_BYTE *)sub_405340(v12);
    v14 = *(_DWORD *)v5;
    v9[1] = (unsigned __int64)v13;
    v10 = v13;
    sub_403210(v13, v12, v16, v4, v14, v20, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v19;
  return v10;
}

_BYTE *__fastcall sub_404960(int a1, int a2, char *a3)
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
  return sub_404440(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404960(int a1, int a2, char *a3)
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
  return sub_404440(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4049D0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_404440(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_4049D0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_404440(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_404A40(int a1, char *a2)
{
  return sub_404960(0, a1, a2);
}

_BYTE *__fastcall sub_404A60(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_61D630;
  v7 = _mm_load_si128((const __m128i *)&xmmword_61D600);
  v8 = _mm_load_si128((const __m128i *)&xmmword_61D610);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_61D620);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_404440(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_404AE0(char *a1)
{
  return sub_404A60(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_404B10(int a1, int a2, char *a3)
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
  return sub_404440(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404B10(int a1, int a2, char *a3)
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
  return sub_404440(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404B80(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_61D600);
  v7 = _mm_load_si128((const __m128i *)&xmmword_61D610);
  v8 = _mm_load_si128((const __m128i *)&xmmword_61D620);
  v9 = qword_61D630;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_404440(a1, a4, a5, (__int64)&v6);
}

ssize_t __fastcall sub_404CB0(int fd, void *buf, size_t nbytes)
{
  size_t v3; // rbx
  ssize_t v4; // rbp
  int v5; // eax

  v3 = nbytes;
  while ( 1 )
  {
    v4 = read(fd, buf, v3);
    if ( v4 >= 0 )
      break;
    v5 = *__errno_location();
    if ( v5 != 4 )
    {
      if ( v3 <= 0x7FFFE000 || v5 != 22 )
        return v4;
      v3 = 2147475456LL;
    }
  }
  return v4;
}

__int64 __fastcall sub_404D10(char *a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned int v3; // er12
  int *v4; // rax
  int v5; // er13
  int *v6; // rbp

  v1 = mkstemp(a1);
  if ( v1 > 2 )
    return v1;
  v3 = sub_4148F0();
  v4 = __errno_location();
  v5 = *v4;
  v6 = v4;
  close(v1);
  result = v3;
  *v6 = v5;
  return result;
}

__int64 __fastcall sub_404D10(char *a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned int v3; // er12
  int *v4; // rax
  int v5; // er13
  int *v6; // rbp

  v1 = mkstemp(a1);
  if ( v1 > 2 )
    return v1;
  v3 = sub_4148F0();
  v4 = __errno_location();
  v5 = *v4;
  v6 = v4;
  close(v1);
  result = v3;
  *v6 = v5;
  return result;
}

__int64 __fastcall sub_404D10(char *a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned int v3; // er12
  int *v4; // rax
  int v5; // er13
  int *v6; // rbp

  v1 = mkstemp(a1);
  if ( v1 > 2 )
    return v1;
  v3 = sub_4148F0();
  v4 = __errno_location();
  v5 = *v4;
  v6 = v4;
  close(v1);
  result = v3;
  *v6 = v5;
  return result;
}

__int64 __fastcall sub_404DA0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_404DA0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4051A0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_404DA0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_404DA0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_405200(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_404DA0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_404DA0(a1, a2, a3, a4, v15, i);
}

int sub_4052C0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_414C6E);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_405340(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405590();
  }
  return result;
}

void *__fastcall sub_4053A0(void *a1, size_t a2)
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
        sub_405590();
    }
  }
  return result;
}

void *__fastcall sub_405540(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_405340(n);
  return memcpy(v2, src, n);
}

noreturn void  sub_405590()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_4055D0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_405630(__int64 a1, int *a2)
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

__int64 __fastcall sub_405710(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_405D30(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_405630(a2, a7);
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
        sub_405630((__int64)v11, a7);
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
            return (unsigned int)sub_405710(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_405710(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_405710(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_406300(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_61D640 = dword_61B2DC;
  dword_61D644 = dword_61B2D8;
  result = sub_405D30(a1, a2, a3, a4, a5, a6, &dword_61D640, a7);
  dword_61B2DC = dword_61D640;
  qword_61D688 = qword_61D650;
  dword_61B2D4 = dword_61D648;
  return result;
}

__int64 __fastcall sub_406360(int a1, __int64 a2, char *a3)
{
  return sub_406300(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_406380(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_406300(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_4063A0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_405D30(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4063C0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_406300(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_4063E0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_405D30(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_406400(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_414320(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

bool __fastcall sub_406480(__int64 a1, __int64 a2)
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
    result = 1;
  }
  return result;
}

__int64 __fastcall sub_4064D0(_QWORD *a1, __int64 (__fastcall *a2)(__int64, _QWORD *), __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *i; // rbx
  _QWORD *v5; // rax
  __int64 result; // rax
  _QWORD *v7; // rdx
  bool v8; // zf

  v3 = a3;
  for ( i = a1; ; i = v5 )
  {
    v5 = (_QWORD *)i[1];
    if ( !v5 )
    {
      v5 = (_QWORD *)i[2];
      if ( !v5 )
        break;
    }
LABEL_2:
    ;
  }
  for ( result = a2(v3, i); !(_DWORD)result; result = a2(v3, v7) )
  {
    v7 = (_QWORD *)*i;
    if ( !*i )
      break;
    v5 = (_QWORD *)v7[2];
    v8 = v5 == i;
    i = (_QWORD *)*i;
    if ( !v8 && v5 != 0LL )
      goto LABEL_2;
  }
  return result;
}

__int64 __fastcall sub_406540(_BYTE *a1, __int64 a2, char a3)
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
    case 92:
      if ( !(a3 & 1) || v3 + 1 >= *(_QWORD *)(a2 + 88) )
        goto LABEL_12;
      *(_QWORD *)(a2 + 72) = v3 + 1;
      v9 = *(_BYTE *)(v4 + v3 + 1);
      a1[8] = 1;
      *a1 = v9;
      result = 1LL;
      break;
    case 91:
      if ( v3 + 1 < *(_QWORD *)(a2 + 88) )
      {
        v8 = *(_BYTE *)(v4 + v3 + 1);
        *a1 = v8;
        switch ( v8 )
        {
          case 58:
            if ( a3 & 4 )
            {
              a1[8] = 30;
              return 2LL;
            }
            break;
          case 61:
            a1[8] = 28;
            return 2LL;
          case 46:
            a1[8] = 26;
            return 2LL;
        }
      }
      a1[8] = 1;
      result = 1LL;
      *a1 = 91;
      return result;
    case 93:
      a1[8] = 21;
      result = 1LL;
      break;
    case 94:
      a1[8] = 25;
      return 1LL;
    case 45:
      a1[8] = 22;
      return 1LL;
    default:
LABEL_12:
      a1[8] = 1;
      return 1LL;
  }
  return result;
}

__int64 __fastcall sub_406670(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 48) != 17 || a1 != *(_QWORD *)(a2 + 40) )
    return 0LL;
  *(_BYTE *)(a2 + 50) |= 8u;
  return 0LL;
}

__int64 __fastcall sub_406690(__int64 a1, signed int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
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
  __int64 v18; // [rsp+10h] [rbp-68h]
  __int64 v19; // [rsp+18h] [rbp-60h]
  __int16 v20; // [rsp+26h] [rbp-52h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]

  v18 = a4;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 48LL) + 24 * a4;
  if ( *(_QWORD *)(v5 + 8) > 0LL )
  {
    v6 = a3;
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
        v11 = *v9 + 16LL * *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v7);
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
              v16 = **(_QWORD **)(v9[5] + 24 * v10 + 16);
              if ( v18 == v16 )
                return -(a2 & 1);
              v17 = sub_406690(a1, (unsigned int)a2, v6, v16, v14);
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

__int64 __fastcall sub_4068A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  signed int v9; // esi
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
    return sub_406690(a1, v9, a3, a4, a6);
  }
  result = 0LL;
  if ( v7 == a5 )
    return sub_406690(a1, v9, a3, a4, a6);
  return result;
}

__int64 __fastcall sub_406910(__int64 a1, size_t a2)
{
  __int64 v2; // rbx
  void *v3; // rax
  void *v4; // rdi
  void *v5; // rax
  void *v7; // rax

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

__int64 __fastcall sub_4069B0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  void *v4; // rax
  __int64 v6; // rsi

  v2 = a2;
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
    *((_QWORD *)v4 + v3) = v2;
    return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_406A20(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rcx

  v2 = a2;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = (_QWORD *)a1[2];
    if ( !v3 )
    {
      *v4 = v2;
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
    if ( *v4 <= v2 )
    {
      for ( i = v4[v6 - 1]; i > v2; i = v4[v6 - 1] )
      {
        v4[v6] = i;
        --v6;
      }
    }
    else if ( v3 > 0 )
    {
      v7 = &v4[v6];
      do
      {
        v8 = *(v7 - 1);
        --v7;
        v7[1] = v8;
      }
      while ( v7 != v4 );
      v6 = 0LL;
    }
    v4[v6] = v2;
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
      result = 1LL;
    }
    else
    {
      a1[1] = 0LL;
      *a1 = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_406B50(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rbp
  __int64 v5; // r15
  void *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rsi

  v3 = a3;
  v4 = a2;
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
    while ( *(_BYTE *)(*a1 + 16LL * *(_QWORD *)(a2[3] + 8 * v7) + 8) & 8
         || (unsigned __int8)sub_4069B0(a2 + 4, *(_QWORD *)(a2[3] + 8 * v7)) )
    {
      if ( a2[2] <= ++v7 )
        goto LABEL_8;
    }
    return 12LL;
  }
LABEL_8:
  v9 = a1[8] + 24 * (a1[17] & v3);
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

wint_t __fastcall sub_406C50(unsigned __int8 a1, __int64 a2)
{
  wint_t result; // eax

  result = btowc(a1);
  if ( result == -1 && !a2 )
    result = a1;
  return result;
}

void __fastcall sub_406C80(_QWORD *a1)
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

void __fastcall sub_406D00(mbstate_t *a1)
{
  mbstate_t *v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rbp
  mbstate_t *v4; // r13
  mbstate_t v5; // rdi
  mbstate_t v6; // r14
  signed __int64 v7; // rdx
  char *v8; // rsi
  size_t v9; // rax
  __int64 v10; // rdx
  mbstate_t v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _DWORD *v14; // rdx
  __int64 v15; // rcx
  mbstate_t v16; // rcx
  unsigned __int8 *v17; // rax
  __int64 v18; // rax
  char v19; // cl
  wchar_t pwc; // [rsp+Ch] [rbp-6Ch]
  char v21[104]; // [rsp+10h] [rbp-68h]

  v1 = a1;
  v2 = (__int64)a1[11];
  v3 = (__int64)a1[6];
  if ( *(_QWORD *)&a1[8] <= v2 )
    v2 = (__int64)a1[8];
  if ( v2 > v3 )
  {
    v4 = a1 + 4;
    while ( 1 )
    {
      v5 = v1[15];
      v6 = v1[4];
      v7 = v2 - v3;
      if ( v5 )
      {
        if ( v1[18].__count > 0 && (v18 = 0LL, v8 = v21, v7 > 0) )
        {
          while ( 1 )
          {
            v19 = *(_BYTE *)(*(_QWORD *)&v5 + *(unsigned __int8 *)(*(_QWORD *)&v1[5] + v18 + v3 + *(_QWORD *)v1));
            *(_BYTE *)(v3 + *(_QWORD *)&v1[1] + v18) = v19;
            v21[v18] = v19;
            if ( v1[18].__count <= (int)v18 + 1 )
              break;
            if ( v7 == ++v18 )
              break;
            v5 = v1[15];
          }
        }
        else
        {
          v8 = v21;
        }
      }
      else
      {
        v8 = (char *)(*(_QWORD *)v1 + v3 + *(_QWORD *)&v1[5]);
      }
      v9 = sub_406400(&pwc, v8, v7, v4);
      if ( v9 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_14;
      LODWORD(v10) = pwc;
      if ( v9 == -2LL )
        break;
LABEL_9:
      v11 = v1[2];
      v12 = v3 + 1;
      v13 = 4 * v3;
      *(_DWORD *)(*(_QWORD *)&v11 + 4 * v3) = v10;
      v3 += v9;
      if ( v12 >= v3 )
      {
        v3 = v12;
        if ( v12 >= v2 )
          goto LABEL_13;
      }
      else
      {
        v14 = (_DWORD *)(*(_QWORD *)&v11 + v13 + 4);
        v15 = *(_QWORD *)&v11 + 4 * v3;
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
    if ( *(_QWORD *)&v1[8] < *(_QWORD *)&v1[11] )
    {
      v1[4] = v6;
      goto LABEL_13;
    }
LABEL_14:
    v16 = v1[15];
    v17 = (unsigned __int8 *)(*(_QWORD *)&v1[5] + v3 + *(_QWORD *)v1);
    v10 = *v17;
    pwc = *v17;
    if ( v16 )
    {
      LODWORD(v10) = *(unsigned __int8 *)(*(_QWORD *)&v16 + v10);
      pwc = v10;
    }
    v1[4] = v6;
    v9 = 1LL;
    goto LABEL_9;
  }
LABEL_13:
  v1[6] = (mbstate_t)v3;
  v1[7] = (mbstate_t)v3;
}

__int64 __fastcall sub_406EB0(__int64 a1)
{
  __int64 v1; // r14
  char *v2; // rbx
  signed __int64 v3; // r15
  signed __int64 v4; // r12
  __int64 v5; // rdx
  size_t v6; // rax
  size_t v7; // rbp
  wchar_t v8; // eax
  void *v9; // r8
  wchar_t v10; // er13
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
  wchar_t v24; // er13
  __int64 v25; // rax
  __int64 v26; // rdx
  signed __int64 v27; // rbp
  _DWORD *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // r10
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  signed __int64 v38; // rcx
  __int64 v39; // rdx
  void *v40; // rax
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 i; // rax
  wchar_t *v45; // rsi
  __int64 v46; // rax
  signed __int64 *v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  void *v50; // rax
  mbstate_t *src; // [rsp+0h] [rbp-A8h]
  wint_t srcb; // [rsp+0h] [rbp-A8h]
  void *srcc; // [rsp+0h] [rbp-A8h]
  void *srca; // [rsp+0h] [rbp-A8h]
  char *v55; // [rsp+8h] [rbp-A0h]
  wint_t v56; // [rsp+8h] [rbp-A0h]
  char *v57; // [rsp+8h] [rbp-A0h]
  char *v58; // [rsp+8h] [rbp-A0h]
  signed __int64 v59; // [rsp+10h] [rbp-98h]
  wint_t wc; // [rsp+24h] [rbp-84h]
  mbstate_t ps; // [rsp+28h] [rbp-80h]
  char s[120]; // [rsp+30h] [rbp-78h]

  v1 = a1;
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
    goto LABEL_37;
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
      goto LABEL_36;
    }
    ps = *(mbstate_t *)(a1 + 32);
    v59 = (signed __int64)&v2[-v3];
    v21 = sub_406400((wchar_t *)&wc, v19, (size_t)&v2[-v3], src);
    v22 = v21;
    if ( v21 <= 0xFFFFFFFFFFFFFFFDLL )
      break;
    if ( v21 == -2LL )
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
LABEL_36:
    if ( (__int64)v2 <= v3 )
      goto LABEL_37;
  }
  v56 = wc;
  v23 = towupper(wc);
  v24 = v23;
  if ( v56 == v23 )
  {
    memcpy((void *)(v3 + *(_QWORD *)(a1 + 8)), (const void *)(*(_QWORD *)a1 + v3 + *(_QWORD *)(a1 + 40)), v22);
LABEL_32:
    v25 = *(_QWORD *)(a1 + 16);
    v26 = 4 * v3++;
    *(_DWORD *)(v25 + 4 * v18) = v24;
    v27 = v22 + v18;
    if ( v3 < v27 )
    {
      v28 = (_DWORD *)(v25 + v26 + 4);
      v29 = v25 + 4 * v27;
      do
      {
        *v28 = -1;
        ++v28;
      }
      while ( (_DWORD *)v29 != v28 );
      v3 = v27;
    }
    goto LABEL_36;
  }
  if ( v22 == wcrtomb(s, v23, &ps) )
  {
    memcpy((void *)(v3 + *(_QWORD *)(a1 + 8)), s, v22);
    goto LABEL_32;
  }
  v4 = v3;
  while ( 2 )
  {
    v5 = *(_QWORD *)(v1 + 120);
    ps = *(mbstate_t *)(v1 + 32);
    if ( v5 )
    {
      v32 = *(_DWORD *)(v1 + 144);
      if ( v32 > 0 && v59 > 0 )
      {
        v33 = (unsigned int)(v32 - 1);
        v34 = 0LL;
        v35 = *(_QWORD *)v1 + v4 + *(_QWORD *)(v1 + 40);
        do
        {
          s[v34] = *(_BYTE *)(v5 + *(unsigned __int8 *)(v35 + v34));
          if ( v33 == v34 )
            break;
          ++v34;
        }
        while ( v59 != v34 );
      }
      v55 = s;
      v6 = sub_406400((wchar_t *)&wc, s, v59, src);
    }
    else
    {
      v55 = (char *)(*(_QWORD *)v1 + v4 + *(_QWORD *)(v1 + 40));
      v6 = sub_406400((wchar_t *)&wc, v55, v59, src);
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
      v36 = *(_QWORD *)(v1 + 120);
      v37 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 40) + v4 + *(_QWORD *)v1);
      if ( v36 )
        LODWORD(v37) = *(unsigned __int8 *)(v36 + v37);
      v38 = v3;
      *(_BYTE *)(*(_QWORD *)(v1 + 8) + v3) = v37;
      if ( *(_BYTE *)(v1 + 140) )
        *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8 * v3) = v4;
      ++v4;
      ++v3;
      *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4 * v38) = v37;
      if ( v7 == -1LL )
        *(mbstate_t *)(v1 + 32) = ps;
      goto LABEL_6;
    }
    srcb = wc;
    v8 = towupper(wc);
    v9 = (void *)v3;
    v10 = v8;
    if ( srcb == v8 )
      goto LABEL_87;
    v11 = wcrtomb(s, v8, &ps);
    v9 = (void *)v3;
    v12 = v11;
    if ( v7 == v11 )
    {
      memcpy((void *)(v3 + *(_QWORD *)(v1 + 8)), s, v7);
      v13 = v3;
      goto LABEL_14;
    }
    if ( v11 == -1LL )
    {
LABEL_87:
      srcc = v9;
      memcpy((void *)(v3 + *(_QWORD *)(v1 + 8)), v55, v7);
      v13 = (signed __int64)srcc;
LABEL_14:
      if ( *(_BYTE *)(v1 + 140) )
      {
        v14 = v4;
        if ( v7 )
        {
          v14 = v7 + v4;
          v39 = *(_QWORD *)(v1 + 24) + 8 * (v3 - v4);
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
      v15 = *(_QWORD *)(v1 + 16);
      ++v3;
      *(_DWORD *)(v15 + 4 * v13) = v10;
      if ( v3 < (__int64)(v13 + v7) )
      {
        v16 = (_DWORD *)(v15 + 4 * v13 + 4);
        do
        {
          *v16 = -1;
          ++v16;
        }
        while ( (_DWORD *)(v15 + 4 * (v13 + v7)) != v16 );
        v3 = v13 + v7;
      }
LABEL_6:
      if ( v3 >= (__int64)v2 )
        goto LABEL_21;
      src = (mbstate_t *)(v1 + 32);
      v59 = (signed __int64)&v2[-v3];
      continue;
    }
    break;
  }
  v40 = (void *)(v3 + v11);
  v41 = (unsigned __int64)v40;
  srca = v40;
  v42 = *(_QWORD *)(v1 + 64);
  if ( v41 > v42 )
    goto LABEL_20;
  if ( *(_QWORD *)(v1 + 24)
    || (v58 = (char *)v12, v50 = malloc(8 * v42), v12 = (size_t)v58, (*(_QWORD *)(v1 + 24) = v50) != 0LL) )
  {
    if ( !*(_BYTE *)(v1 + 140) )
    {
      if ( v3 )
      {
        v43 = *(_QWORD *)(v1 + 24);
        for ( i = 0LL; i != v3; ++i )
          *(_QWORD *)(v43 + 8 * i) = i;
      }
      *(_BYTE *)(v1 + 140) = 1;
    }
    v57 = (char *)v12;
    memcpy((void *)(v3 + *(_QWORD *)(v1 + 8)), s, v12);
    v45 = (wchar_t *)(*(_QWORD *)(v1 + 16) + 4 * v3);
    v46 = *(_QWORD *)(v1 + 24);
    *v45 = v10;
    v47 = (signed __int64 *)(v46 + 8 * v3);
    v48 = 1LL;
    *v47 = v4;
    if ( (unsigned __int64)v57 > 1 )
    {
      do
      {
        v49 = v48;
        if ( v48 >= v7 )
          v49 = v7 - 1;
        v47[v48] = v4 + v49;
        v45[v48++] = -1;
      }
      while ( (char *)v48 != v57 );
    }
    v2 = &v57[*(_QWORD *)(v1 + 88) - v7];
    *(_QWORD *)(v1 + 88) = v2;
    if ( v4 < *(_QWORD *)(v1 + 96) )
      *(_QWORD *)(v1 + 104) += &v57[-v7];
    v3 = (signed __int64)srca;
    if ( *(_QWORD *)(v1 + 64) <= (__int64)v2 )
      v2 = *(char **)(v1 + 64);
    v4 += v7;
    goto LABEL_6;
  }
  return 12LL;
}

__int64 __fastcall sub_4074B0(_QWORD *a1, size_t a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // ebp
  void *v6; // rdi
  void *v7; // rax
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax

  v2 = a1[8];
  if ( v2 > 0xFFFFFFFFFFFFFFELL )
    return 12LL;
  v3 = 2 * v2;
  a2 = (int)a2;
  v4 = (__int64)a1;
  if ( v3 > a1[11] )
    v3 = a1[11];
  if ( v3 >= (int)a2 )
    a2 = v3;
  v5 = sub_406910((__int64)a1, a2);
  if ( v5 )
    return v5;
  v6 = (void *)a1[23];
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
      sub_406D00((mbstate_t *)v4);
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
          *(_BYTE *)(*(_QWORD *)(v4 + 8) + v12) = *(_BYTE *)(v10
                                                           + *(unsigned __int8 *)(*(_QWORD *)(v4 + 40)
                                                                                + v12
                                                                                + *(_QWORD *)v4));
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
  if ( v8 > 1 )
    return sub_406EB0(v4);
  sub_406C80((_QWORD *)v4);
  return 0LL;
}

__int64 __fastcall sub_407600(_QWORD *a1, __int64 a2)
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
      result = sub_4074B0(a1, (unsigned int)(a2 + 1));
      if ( (_DWORD)result )
        return result;
    }
  }
  else
  {
    result = sub_4074B0(a1, (unsigned int)(a2 + 1));
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

void __fastcall sub_407690(void *ptr)
{
  free(*(void **)ptr);
  free(*((void **)ptr + 3));
  free(ptr);
}

void __fastcall sub_4076B0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8) & 0x400FF;
  if ( v1 == 6 )
  {
    sub_407690(*(void **)a1);
  }
  else if ( v1 == 3 )
  {
    free(*(void **)a1);
  }
}

__int64 __fastcall sub_4076E0(__int64 a1, __int64 a2)
{
  sub_4076B0(a2 + 40);
  return 0LL;
}

__int64 __fastcall sub_407700(__int64 a1, __int64 a2, void *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  void *v6; // r12
  char *v7; // r13
  __int64 v8; // rax
  bool v9; // cl
  __int64 v10; // rax
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

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  if ( v4 >= v5 )
  {
    v13 = 2 * v5;
    if ( 2 * v5 <= 0xAAAAAAAAAAAAAAALL )
    {
      v19 = a3;
      v14 = realloc(*(void **)v3, 32 * v5);
      if ( v14 )
      {
        *(_QWORD *)v3 = v14;
        v15 = 16 * v5;
        v16 = 48 * v5;
        v6 = realloc(*(void **)(v3 + 24), v15);
        ptr = realloc(*(void **)(v3 + 32), v15);
        v7 = (char *)realloc(*(void **)(v3 + 40), v16);
        v17 = realloc(*(void **)(v3 + 48), v16);
        if ( v6 )
        {
          if ( ptr )
          {
            if ( v7 )
            {
              a3 = v19;
              if ( v17 )
              {
                *(_QWORD *)(v3 + 24) = v6;
                v4 = *(_QWORD *)(v3 + 16);
                *(_QWORD *)(v3 + 32) = ptr;
                *(_QWORD *)(v3 + 40) = v7;
                *(_QWORD *)(v3 + 48) = v17;
                *(_QWORD *)(v3 + 8) = v13;
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
  v6 = *(void **)(v3 + 24);
  v7 = *(char **)(v3 + 40);
LABEL_3:
  v8 = *(_QWORD *)v3 + 16 * v4;
  *(_QWORD *)(v8 + 8) = a3;
  *(_QWORD *)v8 = a2;
  *(_DWORD *)(v8 + 8) = (unsigned int)a3 & 0xFFFC00FF;
  v9 = (_BYTE)a3 == 6;
  if ( (_BYTE)a3 == 5 )
    v9 = *(_DWORD *)(v3 + 180) > 1;
  *(_BYTE *)(v8 + 10) = (16 * v9) | *(_BYTE *)(v8 + 10) & 0xEF;
  *((_QWORD *)v6 + v4) = -1LL;
  v10 = (__int64)&v7[24 * *(_QWORD *)(v3 + 16)];
  *(_OWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  v11 = *(_QWORD *)(v3 + 48) + 24LL * *(_QWORD *)(v3 + 16);
  *(_OWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  result = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = result + 1;
  return result;
}

__int64 __fastcall sub_4078D0(__int64 *a1, __int64 a2, __int16 a3)
{
  __int64 v3; // r13
  __int16 v4; // r12
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rsi
  unsigned int v9; // ecx
  unsigned int v10; // edx

  v3 = 16 * a2;
  v4 = a3;
  v5 = a2;
  result = sub_407700((__int64)a1, *(_QWORD *)(*a1 + 16 * a2), *(void **)(*a1 + 16 * a2 + 8));
  if ( result != -1 )
  {
    v7 = *a1;
    v8 = *a1 + 16 * result;
    v9 = ((v4 & 0x3FF) << 8) | *(_DWORD *)(v8 + 8) & 0xFFFC00FF;
    *(_DWORD *)(v8 + 8) = v9;
    v10 = v9 & 0xFFFC00FF | (((v4 & 0x3FF | (unsigned __int16)(*(_DWORD *)(v7 + v3 + 8) >> 8)) & 0x3FF) << 8);
    *(_DWORD *)(v8 + 8) = v10;
    *(_BYTE *)(v8 + 10) = BYTE2(v10) | 4;
    *(_QWORD *)(a1[4] + 8 * result) = v5;
  }
  return result;
}

__int64 __fastcall sub_407970(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r9
  __int64 v6; // r13
  unsigned int v7; // er12
  __int64 *v8; // rbx
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
  __int64 v31; // [rsp+8h] [rbp-40h]

  v5 = a2;
  v6 = a3;
  v7 = a5;
  v8 = a1;
  v31 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *v8;
      v10 = v8[5];
      v11 = v6;
      v12 = *v8 + 16 * v5;
      if ( *(_BYTE *)(v12 + 8) == 4 )
      {
        v25 = 8 * v5;
        v16 = 24 * v6;
        v26 = *(_QWORD *)(v8[3] + 8 * v5);
        *(_QWORD *)(v10 + 24 * v6 + 8) = 0LL;
        v30 = v26;
        v6 = sub_4078D0(v8, v26, v7);
        if ( v6 == -1 )
          return 12LL;
        *(_QWORD *)(v8[3] + 8 * v11) = *(_QWORD *)(v8[3] + v25);
        goto LABEL_14;
      }
      v13 = 24 * v5;
      v14 = v10 + 24 * v5;
      v15 = *(_QWORD *)(v14 + 8);
      if ( !v15 )
      {
        *(_QWORD *)(v8[3] + 8 * v6) = *(_QWORD *)(v8[3] + 8 * v5);
        return 0LL;
      }
      v16 = 24 * v6;
      v17 = (_QWORD *)(24 * v6 + v10);
      v18 = **(_QWORD **)(v14 + 16);
      v17[1] = 0LL;
      if ( v15 == 1 )
        break;
      v19 = v8[2];
      v20 = v19 - 1;
      v21 = v9 + 16 * (v19 - 1);
      if ( *(_BYTE *)(v21 + 10) & 4 && v20 > 0 )
      {
        while ( *(_QWORD *)(v8[4] + 8 * v20) != v18 || v7 != ((*(_DWORD *)(v21 + 8) >> 8) & 0x3FF) )
        {
          v21 += -16 * (v19 - 1) + 16 * v19 - 32;
          --v20;
          if ( !(*(_BYTE *)(v21 + 10) & 4) || v20 <= 0 )
            goto LABEL_24;
        }
        if ( !(unsigned __int8)sub_406A20(v17, v20) )
          return 12LL;
      }
      else
      {
LABEL_24:
        v27 = sub_4078D0(v8, v18, v7);
        v28 = v27;
        if ( v27 == -1 || !(unsigned __int8)sub_406A20((_QWORD *)(v16 + v8[5]), v27) )
          return 12LL;
        result = sub_407970(v8, v18, v28, v31, v7);
        if ( (_DWORD)result )
          return result;
      }
      v30 = *(_QWORD *)(*(_QWORD *)(v8[5] + v13 + 16) + 8LL);
      v6 = sub_4078D0(v8, v30, v7);
      if ( v6 == -1 )
        return 12LL;
LABEL_14:
      v22 = sub_406A20((_QWORD *)(v16 + v8[5]), v6);
      v5 = v30;
      if ( !v22 )
        return 12LL;
    }
    if ( v5 == v31 && v5 != v6 )
      break;
    v7 |= (*(_DWORD *)(v12 + 8) >> 8) & 0x3FF;
    v24 = sub_4078D0(v8, v18, v7);
    v6 = v24;
    if ( v24 == -1 || !(unsigned __int8)sub_406A20((_QWORD *)(v16 + v8[5]), v24) )
      return 12LL;
    v5 = v18;
  }
  v29 = sub_406A20(v17, v18);
  result = 0LL;
  if ( !v29 )
    return 12LL;
  return result;
}

void __fastcall sub_407C00(void *ptr)
{
  void **v1; // rax

  free(*((void **)ptr + 6));
  free(*((void **)ptr + 9));
  v1 = (void **)*((_QWORD *)ptr + 10);
  if ( v1 != (void **)((char *)ptr + 8) )
  {
    free(v1[2]);
    free(*((void **)ptr + 10));
  }
  free(*((void **)ptr + 3));
  free(*((void **)ptr + 12));
  free(*((void **)ptr + 11));
  free(ptr);
}

void __fastcall sub_407C60(__int64 a1)
{
  free(*(void **)(a1 + 16));
  free(*(void **)(a1 + 24));
  if ( *(_BYTE *)(a1 + 139) )
    free(*(void **)(a1 + 8));
}

void __fastcall sub_407CA0(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // rbx
  void **v4; // rbp
  __int64 v5; // rax

  if ( a1[29] > 0LL )
  {
    v1 = 0LL;
    do
    {
      v2 = *(_QWORD *)(a1[31] + 8 * v1);
      if ( *(_QWORD *)(v2 + 32) > 0LL )
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

__int64 __fastcall sub_407D60(__int64 a1, __int64 a2)
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
        result = 0LL;
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
        result = 0LL;
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
        result = 0LL;
      }
      return result;
    case 16:
      goto LABEL_4;
    default:
      if ( v2 & 8 )
        __assert_fail("!IS_EPSILON_NODE (node->token.type)", "lib/regcomp.c", 0x5CCu, "link_nfa_nodes");
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v3) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 56LL);
LABEL_4:
      result = 0LL;
      break;
  }
  return result;
}

__int64 __fastcall sub_407FE0(__int64 a1, __int64 a2)
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

__int64 __fastcall sub_408030(__int64 a1, __int64 *a2, __int64 a3)
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
      result = v6 + 1;
  }
  return result;
}

__int64 __fastcall sub_4080A0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  unsigned int v6; // er13
  __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 result; // rax

  v5 = a4;
  v6 = a5;
  for ( i = a3; !sub_408030(a2[1], a2 + 2, i); i = *v12 )
  {
    v8 = *a1 + 16 * i;
    if ( *(unsigned __int8 *)(v8 + 8) == v6 && *(_QWORD *)v8 == v5 )
    {
      if ( v6 == 9 && !(unsigned __int8)sub_406A20(a2, i) )
        return 12LL;
      return 0LL;
    }
    if ( !(unsigned __int8)sub_406A20(a2, i) )
      return 12LL;
    v9 = 24 * i;
    v10 = v9 + a1[5];
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 )
      return 0LL;
    v12 = *(__int64 **)(v10 + 16);
    if ( v11 == 2 )
    {
      result = sub_4080A0(a1, a2, v12[1], v5, v6);
      if ( (_DWORD)result )
        return result;
      v12 = *(__int64 **)(a1[5] + v9 + 16);
    }
  }
  return 0LL;
}

void __fastcall sub_4081A0(_QWORD *a1, __int64 *a2, __int64 a3)
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

__int64 __fastcall sub_4081D0(__int64 a1, __int64 a2)
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

__int64 __fastcall sub_408260(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax

  v2 = *(_BYTE *)(a2 + 48);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v2 == 11 )
  {
    *(_QWORD *)(v3 + 32) = a2;
    result = 0LL;
  }
  else if ( v2 == 16 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v3 + 32) = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(a2 + 32);
    result = 0LL;
  }
  else
  {
    if ( v3 )
      *(_QWORD *)(v3 + 32) = *(_QWORD *)(a2 + 32);
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 )
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(a2 + 32);
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_4082C0(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
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
  _QWORD *v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // r12
  int v20; // ebx
  __int64 v22; // r13
  __int64 v23; // r14
  _QWORD *v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+10h] [rbp-68h]
  __int64 v26; // [rsp+18h] [rbp-60h]
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  _QWORD *v30; // [rsp+38h] [rbp-40h]

  v7 = 0LL;
  v8 = a1[25];
  v24 = (_QWORD *)a1[19];
  for ( i = a1[25]; v7 < i; i = v11 )
  {
    v10 = a1[27];
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
  else if ( a7 != *(_QWORD *)(a1[27] + 40 * v13 + 8) )
  {
    v13 = -1LL;
  }
  if ( *a2 <= 0LL )
    return 0LL;
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
    v19 = *(_QWORD *)(*v24 + 16LL * *(_QWORD *)(a1[27] + 40 * v18));
    v20 = sub_4068A0((__int64)a1, v18, v19, v25, v26, v28);
    if ( v20 != (unsigned int)sub_4068A0((__int64)a1, *(_QWORD *)(*v17 + 8 * v16), v19, v27, a7, v29) )
      break;
    if ( ++v16 >= *v30 )
      return 0LL;
  }
  return 1LL;
}

__int64 __fastcall sub_408510(_QWORD *a1, __int64 (__fastcall *a2)(__int64, _QWORD *), __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *i; // rbx
  __int64 result; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx

  v3 = a3;
  for ( i = a1; ; i = v6 )
  {
    result = a2(v3, i);
    if ( (_DWORD)result )
      break;
    v6 = (_QWORD *)i[1];
    v7 = 0LL;
    if ( !v6 )
    {
      while ( 1 )
      {
        v6 = (_QWORD *)i[2];
        if ( v6 != v7 )
        {
          if ( v6 )
            break;
        }
        v7 = i;
        if ( !*i )
          return result;
        i = (_QWORD *)*i;
      }
    }
  }
  return result;
}

__int64 __fastcall sub_408570(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rbx
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
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = a1;
  if ( *(_QWORD *)a1 >= v4 + 2 * v2 )
  {
    if ( v4 )
      goto LABEL_5;
LABEL_26:
    v26 = *(void **)(a1 + 16);
    v27 = *(const void **)(a2 + 16);
    *(_QWORD *)(v5 + 8) = v2;
    memcpy(v26, v27, 8LL * *(_QWORD *)(v3 + 8));
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
      if ( v7 < 0 )
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
  v14 = *(_QWORD *)(v3 + 8);
  v15 = v13 + 2 * v14 - 1;
  v16 = v13 + 2 * v14 - v6;
  if ( !v16 )
    return 0LL;
  v17 = v13 - 1;
  v18 = *(_QWORD **)(v5 + 16);
  *(_QWORD *)(v5 + 8) = v16 + v13;
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

__int64 __fastcall sub_408740(__m128i *a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 *v4; // r15
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // er8
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
  char v22; // [rsp+Ch] [rbp-7Ch]
  __int128 v23; // [rsp+10h] [rbp-78h]
  void *v24; // [rsp+20h] [rbp-68h]
  __m128i v25; // [rsp+30h] [rbp-58h]
  void *ptr; // [rsp+40h] [rbp-48h]

  v4 = a2;
  v5 = a3;
  v6 = 24 * a3;
  v7 = 24 * a3 + a2[5];
  v22 = a4;
  v8 = *(_QWORD *)(v7 + 8);
  v23 = (unsigned __int64)(v8 + 1);
  v24 = malloc(8 * (v8 + 1));
  if ( !v24 )
    return 12LL;
  v9 = *a2;
  *(_QWORD *)(a2[6] + v6 + 8) = -1LL;
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
      v12 = a2[5];
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
            v18 = v17 + v4[6];
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
            result = sub_408740(&v25, v4);
            if ( (_DWORD)result )
              return result;
          }
          result = sub_408570((__int64)&v23, (__int64)&v25);
          if ( (_DWORD)result )
            return result;
          if ( !*(_QWORD *)(v4[6] + v17 + 8) )
          {
            v14 = 1;
            free(ptr);
          }
          v12 = v4[5];
          ++v15;
          v13 = v12 + v6;
        }
        while ( *(_QWORD *)(v12 + v6 + 8) > v15 );
LABEL_16:
        if ( (unsigned __int8)sub_406A20(&v23, v5) )
        {
          v20 = v4[6];
          if ( v22 != 1 && v14 )
          {
            *(_QWORD *)(v20 + v6 + 8) = 0LL;
LABEL_27:
            v21 = _mm_load_si128((const __m128i *)&v23);
            a1[1].m128i_i64[0] = (__int64)v24;
            result = 0LL;
            *a1 = v21;
            return result;
          }
LABEL_26:
          *(__m128i *)(v20 + v6) = _mm_load_si128((const __m128i *)&v23);
          *(_QWORD *)(v20 + v6 + 16) = v24;
          goto LABEL_27;
        }
        return 12LL;
      }
    }
LABEL_24:
    if ( (unsigned __int8)sub_406A20(&v23, v5) )
    {
      v20 = v4[6];
      goto LABEL_26;
    }
    return 12LL;
  }
  result = sub_407970(a2, v5, v5, v5, (v11 >> 8) & 0x3FF);
  if ( !(_DWORD)result )
  {
    v10 = 16 * v5 + *a2;
    goto LABEL_3;
  }
  return result;
}

__int64 __fastcall sub_4089A0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // ebx
  signed __int64 v7; // r12
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
  __int128 v19; // [rsp+10h] [rbp-48h]
  void *ptr; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = *(_QWORD *)(a2 + 8);
  v19 = (unsigned __int64)v7;
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
      v10 = a1[6] + 24 * v9;
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 <= 0 )
        goto LABEL_13;
      v12 = *(_QWORD *)(v10 + 16);
      v13 = 0LL;
      while ( 1 )
      {
        v14 = *a1 + 16LL * *(_QWORD *)(v12 + 8 * v13);
        if ( v6 == *(unsigned __int8 *)(v14 + 8) && v5 == *(_QWORD *)v14 )
          break;
        if ( v11 == ++v13 )
          goto LABEL_13;
      }
      if ( *(_QWORD *)(v12 + 8 * v13) == -1LL )
      {
LABEL_13:
        v15 = sub_408570((__int64)&v19, v10);
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
        v15 = sub_4080A0(a1, &v19, v9, v5, v6);
        if ( v15 )
          goto LABEL_14;
      }
      if ( *(_QWORD *)(v4 + 8) <= ++v8 )
        goto LABEL_12;
    }
  }
  return 12LL;
}

__int64 __fastcall sub_408AE0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 *v8; // rbx
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
      v6 = a3;
      v7 = a2;
      v8 = a1;
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
        v9 = v8[1];
        v3 = *(_QWORD *)(a2 + 8);
        v8[2] = (__int64)v33;
        *v8 = v32;
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
LABEL_14:
          *(_QWORD *)&v11[8 * --v17] = v19;
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
      v23 = v8[1];
      v24 = *(_QWORD *)(v6 + 8) + v23 + *(_QWORD *)(v7 + 8);
      v25 = v23 - 1;
      v26 = v24 - 1;
      v27 = v24 - v17;
      v8[1] = v27 + v23;
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
            v30 = &v11[8 * (v25 + v27)];
            if ( v28 <= v29 )
              break;
            --v26;
            *(_QWORD *)v30 = v28;
            if ( !--v27 )
            {
              v11 = (char *)v8[2];
              v31 = 0LL;
              goto LABEL_29;
            }
          }
          --v25;
          *(_QWORD *)v30 = v29;
        }
        while ( v25 != -1 );
        v31 = 8 * v27;
        v11 = (char *)v8[2];
      }
LABEL_29:
      memcpy(v11, &v11[8 * v17], v31);
      result = 0LL;
    }
  }
  return result;
}

char *__fastcall sub_408CA0(_QWORD *a1, int *a2, _QWORD *a3, _QWORD *a4, const __m128i *a5)
{
  _QWORD *v5; // rbx
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

  v5 = a1;
  v6 = *a2;
  if ( (_DWORD)v6 == 15 )
  {
    v15 = a5;
    v14 = a4;
    v13 = a3;
    v7 = malloc(0x3C8uLL);
    if ( !v7 )
      return 0LL;
    v12 = (_QWORD *)*v5;
    v9 = 8LL;
    *v5 = v7;
    v6 = 0LL;
    a5 = v15;
    a4 = v14;
    a3 = v13;
    *v7 = v12;
    v8 = 1;
  }
  else
  {
    v7 = (_QWORD *)*v5;
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

char *__fastcall sub_408D80(_QWORD **a1, __int64 a2)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rbp
  __int64 *v4; // r14
  char *result; // rax
  _QWORD **v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+8h] [rbp-30h]

  v2 = a1;
  v3 = *a1;
  v4 = &v8;
  while ( 1 )
  {
    result = sub_408CA0((_QWORD *)(a2 + 112), (int *)(a2 + 128), 0LL, 0LL, (const __m128i *)(v2 + 5));
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

char *__fastcall sub_408E30(_DWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
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
  _DWORD *v23; // [rsp+18h] [rbp-50h]
  char v24; // [rsp+20h] [rbp-48h]
  char v25; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v4 = *a2;
  v5 = *(char **)(a3 + 8);
  v23 = a1;
  if ( a2[7] & 0x10 )
  {
    if ( !v5 )
    {
      v8 = (_QWORD *)(v4 + 112);
      v25 = 8;
      v21 = (int *)(v4 + 128);
      v17 = (int *)(v4 + 128);
      v18 = (_QWORD *)(v4 + 112);
      v11 = sub_408CA0((_QWORD *)(v4 + 112), (int *)(v4 + 128), 0LL, 0LL, (const __m128i *)&v24);
      v25 = 9;
      v13 = sub_408CA0(v18, v17, 0LL, 0LL, (const __m128i *)&v24);
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
    v25 = 8;
    v21 = (int *)(v4 + 128);
    v9 = (int *)(v4 + 128);
    v10 = (_QWORD *)(v4 + 112);
    v11 = sub_408CA0((_QWORD *)(v4 + 112), (int *)(v4 + 128), 0LL, 0LL, (const __m128i *)&v24);
    v25 = 9;
    v12 = sub_408CA0(v10, v9, 0LL, 0LL, (const __m128i *)&v24);
  }
  else
  {
    v8 = (_QWORD *)(v4 + 112);
    v25 = 8;
    v21 = (int *)(v4 + 128);
    v19 = (int *)(v4 + 128);
    v20 = (_QWORD *)(v4 + 112);
    v11 = sub_408CA0((_QWORD *)(v4 + 112), (int *)(v4 + 128), 0LL, 0LL, (const __m128i *)&v24);
    v25 = 9;
    v12 = sub_408CA0(v20, v19, 0LL, 0LL, (const __m128i *)&v24);
    v13 = v12;
    if ( !v5 )
      goto LABEL_7;
  }
  v25 = 16;
  v13 = sub_408CA0(v8, v21, v5, v12, (const __m128i *)&v24);
LABEL_7:
  v25 = 16;
  v22 = v13;
  v5 = sub_408CA0(v8, v21, v11, v13, (const __m128i *)&v24);
  if ( v5 && v22 && v11 && v12 )
  {
    v14 = *(_QWORD *)(v3 + 40);
    *((_QWORD *)v12 + 5) = v14;
    *((_QWORD *)v11 + 5) = v14;
    v15 = *(_BYTE *)(v3 + 50) & 8;
    v12[50] = v15 | v12[50] & 0xF7;
    v11[50] = v15 | v11[50] & 0xF7;
  }
  else
  {
    v5 = 0LL;
    *v23 = 12;
  }
  return v5;
}

__int64 __fastcall sub_409050(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  char *v5; // rax
  char *v6; // rax
  unsigned int v7; // [rsp+Ch] [rbp-1Ch]

  v2 = *(_QWORD *)(a2 + 8);
  v7 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 48) == 17 )
    {
      v5 = sub_408E30(&v7, a1, v2);
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
      v6 = sub_408E30(&v7, a1, v3);
      *(_QWORD *)(a2 + 16) = v6;
      if ( v6 )
        *(_QWORD *)v6 = a2;
    }
  }
  return v7;
}

__int64 __fastcall sub_4090D0(__int64 a1, __int64 a2)
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

__int64 __fastcall sub_409150(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbp
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
    return sub_4090D0(a1, a2);
  }
  v3 = *(_QWORD *)(a2 + 8);
  if ( !a3 || v3 <= 0 )
  {
    if ( v3 > 0 )
      return sub_4090D0(a1, a2);
    goto LABEL_13;
  }
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 <= 0 )
    return sub_4090D0(a1, a2);
  v5 = a1;
  v6 = a3;
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
      goto LABEL_21;
    }
    v15 = *(_QWORD *)(v6 + 16);
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
  v19 = *(_QWORD *)(v6 + 8);
  if ( v12 < v19 )
  {
    v20 = (char *)&v8[v11];
    v11 += v19 - v12;
    memcpy(v20, (const void *)(v15 + 8 * v12), 8 * (v19 - v12));
  }
LABEL_21:
  *(_QWORD *)(v5 + 8) = v11;
  return 0LL;
}

__int64 *__fastcall sub_4092E0(_DWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // r12
  _QWORD *v6; // rax
  __int64 v7; // r10
  __int64 v8; // rbp
  char v9; // r15
  _QWORD *v10; // r13
  __int64 *v11; // rax
  __int64 v12; // r11
  __int64 v13; // rbx
  __int64 v14; // r10
  unsigned int v15; // er9
  __int64 *v16; // r14
  __int64 *v18; // rax
  char v19; // cl
  bool v20; // cc
  __int64 v21; // r10
  __int64 *v22; // r12
  __int64 v23; // r14
  __int64 v24; // r15
  char v25; // bp
  __int64 v26; // rax
  int v27; // esi
  __int16 v28; // bx
  int v29; // edi
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  void *v33; // rax
  __int64 v34; // [rsp+0h] [rbp-58h]
  __int64 *v35; // [rsp+8h] [rbp-50h]
  __int64 v36; // [rsp+10h] [rbp-48h]
  _DWORD *v37; // [rsp+18h] [rbp-40h]

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
    v7 = (__int64)&v6[v4];
    do
    {
      v5 += *v6;
      ++v6;
    }
    while ( (_QWORD *)v7 != v6 );
  }
  v8 = a3;
  v9 = a4;
  v10 = a2;
  v37 = a1;
  v11 = (__int64 *)(a2[8] + 24 * (v5 & a2[17]));
  v12 = *v11;
  if ( *v11 <= 0 )
  {
LABEL_12:
    v18 = (__int64 *)calloc(0x70uLL, 1uLL);
    v16 = v18;
    if ( !v18 )
      goto LABEL_38;
    v34 = (__int64)(v18 + 1);
    if ( (unsigned int)sub_4090D0((__int64)(v18 + 1), v8) )
    {
      free(v16);
LABEL_38:
      v16 = 0LL;
      *v37 = 12;
      return v16;
    }
    v19 = v9;
    v20 = *(_QWORD *)(v8 + 8) <= 0LL;
    *((_BYTE *)v16 + 104) = v9 & 0xF | v16[13] & 0xF0;
    v16[10] = v34;
    if ( v20 )
    {
LABEL_36:
      if ( (unsigned int)sub_406B50(v10, v16, v5) )
      {
        sub_407C00(v16);
        goto LABEL_38;
      }
      return v16;
    }
    v36 = v5;
    v21 = 0LL;
    v35 = v16 + 3;
    v22 = v16;
    v23 = 0LL;
    v24 = v8;
    v25 = v19;
    while ( 1 )
    {
      v26 = *v10 + 16LL * *(_QWORD *)(*(_QWORD *)(v24 + 16) + 8 * v23);
      v27 = *(unsigned __int8 *)(v26 + 8);
      v28 = (*(_DWORD *)(v26 + 8) >> 8) & 0x3FF;
      v29 = (*(_DWORD *)(v26 + 8) >> 8) & 0x3FF;
      if ( v27 == 1 && !v29 )
        goto LABEL_34;
      v30 = v22[13] & 0xDF | (32 * (((*((_BYTE *)v22 + 104) >> 5) | (*(_BYTE *)(v26 + 10) >> 4)) & 1));
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
      if ( v34 == v22[10] )
      {
        v33 = malloc(0x18uLL);
        v22[10] = (__int64)v33;
        if ( !v33 )
        {
          sub_407C00(v22);
          goto LABEL_38;
        }
        if ( (unsigned int)sub_4090D0((__int64)v33, v24) )
          goto LABEL_38;
        *((_BYTE *)v22 + 104) |= 0x80u;
        v21 = 0LL;
      }
      if ( v28 & 1 )
      {
        if ( !(v25 & 1) || v28 & 2 )
          goto LABEL_30;
      }
      else if ( v28 & 2 && v25 & 1 )
      {
        goto LABEL_30;
      }
      if ( v28 & 0x10 && !(v25 & 2) || v28 & 0x40 && !(v25 & 4) )
      {
LABEL_30:
        v31 = v23 - v21;
        if ( v23 - v21 >= 0 )
        {
          v32 = v22[2];
          if ( v31 < v32 )
          {
            v22[2] = v32 - 1;
            sub_4081A0(v22 + 2, v35, v31);
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
    if ( *v16 == v5 && (v16[13] & 0xF) == v15 && sub_406480(v16[10], v8) )
      return v16;
    if ( ++v14 == v12 )
      goto LABEL_12;
  }
}

_QWORD *__fastcall sub_4095E0(_DWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 *v7; // r12
  _DWORD *v8; // r13
  __int64 *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r9
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // r10
  int v21; // edx
  __int64 v22; // rax
  int v23; // edi

  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 )
  {
    *a1 = 0;
    return 0LL;
  }
  if ( v3 > 0 )
  {
    v4 = *(_QWORD **)(a3 + 16);
    v5 = (__int64)&v4[v3];
    do
    {
      v3 += *v4;
      ++v4;
    }
    while ( (_QWORD *)v5 != v4 );
  }
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = (__int64 *)(a2[8] + 24 * (v3 & a2[17]));
  v10 = *v9;
  if ( *v9 <= 0 )
  {
LABEL_10:
    v14 = calloc(0x70uLL, 1uLL);
    v13 = v14;
    if ( v14 )
    {
      v15 = (__int64)(v14 + 1);
      if ( (unsigned int)sub_4090D0((__int64)(v14 + 1), v6) )
      {
        free(v13);
      }
      else
      {
        v16 = *(_QWORD *)(v6 + 8);
        v13[10] = v15;
        if ( v16 > 0 )
        {
          v17 = *(_QWORD **)(v6 + 16);
          v18 = *v7;
          v19 = (__int64)&v17[v16];
          do
          {
            while ( 1 )
            {
              v22 = v18 + 16LL * *v17;
              v23 = *(unsigned __int8 *)(v22 + 8);
              if ( v23 == 1 )
                break;
              v20 = *((_BYTE *)v13 + 104) >> 5;
              v21 = v13[13] & 0xDF | (32 * ((v20 | (*(_BYTE *)(v22 + 10) >> 4)) & 1));
              *((_BYTE *)v13 + 104) = v13[13] & 0xDF | (32 * ((v20 | (*(_BYTE *)(v22 + 10) >> 4)) & 1));
              if ( v23 == 2 )
              {
                *((_BYTE *)v13 + 104) = v21 | 0x10;
              }
              else if ( v23 == 4 )
              {
                *((_BYTE *)v13 + 104) = v21 | 0x40;
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
            *((_BYTE *)v13 + 104) = v13[13] & 0xDF | (32
                                                    * (((*((_BYTE *)v13 + 104) >> 5) | (*(_BYTE *)(v22 + 10) >> 4)) & 1));
LABEL_21:
            ++v17;
            *((_BYTE *)v13 + 104) |= 0x80u;
          }
          while ( (_QWORD *)v19 != v17 );
        }
LABEL_22:
        if ( !(unsigned int)sub_406B50(v7, v13, v3) )
          return v13;
        sub_407C00(v13);
      }
    }
    *v8 = 12;
    return 0LL;
  }
  v11 = v9[2];
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD **)(v11 + 8 * v12);
    if ( *v13 == v3 && sub_406480((__int64)(v13 + 1), v6) )
      return v13;
    if ( v10 == ++v12 )
      goto LABEL_10;
  }
}

__int64 __fastcall sub_4097D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 result; // rax
  _QWORD *v10; // rax
  void *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // [rsp+0h] [rbp-4Ch]
  char v15; // [rsp+4h] [rbp-48h]
  void *ptr; // [rsp+14h] [rbp-38h]

  if ( a4 <= 0 )
    return 0LL;
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
        return 0LL;
    }
    if ( v13 )
    {
      result = sub_409150((__int64)&v15, v12 + 8, v13 + 8);
      v14 = result;
      if ( (_DWORD)result )
        return result;
      v10 = sub_4095E0(&v14, v4, (__int64)&v15);
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
  return 0LL;
}

__int64 __fastcall sub_409880(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r11
  __int64 i; // rax
  __int64 v7; // r12
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // r13
  _QWORD *v12; // rbp
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
  unsigned int v26; // er14
  unsigned int v27; // er15
  __int64 result; // rax
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // [rsp+0h] [rbp-98h]
  __int64 v32; // [rsp+8h] [rbp-90h]
  _QWORD *v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+18h] [rbp-80h]
  __int64 v36; // [rsp+20h] [rbp-78h]
  unsigned int v37; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v38; // [rsp+3Ch] [rbp-5Ch]
  __int64 v39; // [rsp+40h] [rbp-58h]
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
  v36 = a4;
  v10 = a3;
  v37 = a5;
  v11 = (__int64 *)a1[19];
  v12 = a1;
  v31 = (__int64 *)(a2 + 16);
  while ( 2 )
  {
    v13 = (__int64 *)(v9 + v35);
    while ( 1 )
    {
      if ( !sub_408030(*(_QWORD *)(a2 + 8), v31, *v13) )
        goto LABEL_19;
      v22 = v10 + v13[3] - v13[2];
      if ( v10 == v22 )
        break;
      v14 = 8 * v22 + v12[23];
      v32 = *(_QWORD *)(v11[3] + 8 * v20);
      if ( *(_QWORD *)v14 )
      {
        if ( sub_408030(
               *(_QWORD *)(*(_QWORD *)v14 + 16LL),
               (__int64 *)(*(_QWORD *)v14 + 24LL),
               *(_QWORD *)(v11[3] + 8 * v20)) )
        {
          goto LABEL_19;
        }
        v38 = sub_4090D0((__int64)&v39, v15 + 8);
        v16 = sub_406A20(&v39, v32);
        if ( v38 || v16 != 1 )
        {
          free(ptr);
          result = v38;
          if ( v38 )
            return result;
          return 12LL;
        }
        v17 = v12[23] + 8 * v22;
      }
      else
      {
        v34 = 8 * v22 + v12[23];
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
      v18 = sub_4095E0(&v38, v11, (__int64)&v39);
      v19 = ptr;
      *v33 = v18;
      free(v19);
      if ( !*(_QWORD *)(v12[23] + 8 * v22) )
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
    if ( sub_408030(v21, v31, v23) )
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
    v26 = sub_4089A0(v11, (__int64)&v39, v36, v37);
    v27 = sub_408570(a2, (__int64)&v39);
    free(ptr);
    result = v38;
    if ( !(v38 | v27 | v26) )
    {
      v9 = v12[27];
      continue;
    }
    break;
  }
  if ( !v38 )
  {
    result = v27;
    if ( v26 )
      result = v26;
  }
  return result;
}

__int64 __fastcall sub_409C10(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // r12
  __int64 v5; // r13
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
  if ( *a2 <= 0LL )
    return 0LL;
  v5 = a4;
  v6 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*a3 + 8 * v6);
      v8 = *v4 + 16LL * *(_QWORD *)(*a3 + 8 * v6);
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
    *v13 = v5;
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

__int64 __fastcall sub_409D60(__int64 a1, __int64 a2, char a3)
{
  wint_t v3; // ebx
  __int64 result; // rax
  __int64 v5; // rax
  char v6; // dl

  if ( a2 < 0 )
    return *(unsigned int *)(a1 + 112);
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
        return *(unsigned int *)(a1 + 112);
    }
    if ( *(_BYTE *)(a1 + 142) && (iswalnum(v3) || v3 == 95) )
      return 1LL;
    result = 0LL;
    if ( v3 != 10 )
      return result;
    return 2 * (unsigned int)(*(_BYTE *)(a1 + 141) != 0);
  }
  v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + a2);
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

__int64 __fastcall sub_409E50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // cl
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
    if ( !((*(_QWORD *)(*(_QWORD *)a2 + 8 * ((__int64)v3 >> 6)) >> v3) & 1) )
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
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 152) + 216LL) < 0 )
        return result;
    }
  }
  v7 = *(_DWORD *)(a2 + 8);
  result = 1LL;
  if ( !(v7 & 0x3FF00) )
    return result;
  v8 = v7 >> 8;
  v9 = sub_409D60(a1, a3, *(_DWORD *)(a1 + 160));
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
      result = v11;
  }
  return result;
}

__int64 __fastcall sub_409F80(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // r9
  __int64 v8; // rsi
  int v9; // ebp
  int v10; // er11
  int v11; // er10
  __int64 result; // rax
  __int64 v13; // rdx
  int v14; // ecx

  v4 = a3;
  v5 = a2;
  v6 = sub_409D60(a1, a4, *(_DWORD *)(a1 + 160));
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

__int64 __fastcall sub_40A050(__int64 a1, __int64 a2, int a3)
{
  int v3; // er10
  __int64 v4; // r15
  __int64 v5; // rbx
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
  __int64 v49; // rcx
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
  __int64 v64; // rdx
  __int64 v65; // rsi
  int v66; // esi
  __int64 v67; // rax
  int v68; // [rsp+4h] [rbp-74h]
  int v69; // [rsp+4h] [rbp-74h]
  wchar_t v70; // [rsp+4h] [rbp-74h]
  __int64 v71; // [rsp+18h] [rbp-60h]
  wchar_t v72; // [rsp+2Ch] [rbp-4Ch]
  char v73[6]; // [rsp+32h] [rbp-46h]
  wint_t wc[2]; // [rsp+38h] [rbp-40h]

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
          v15 = sub_409D60(a1, v7 - 1, v3);
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
          v39 = (v36 + v35) / 2;
          if ( v38 <= v7 )
          {
            if ( v38 >= v7 )
            {
              v40 = (v36 + v35) / 2;
              --v39;
              goto LABEL_57;
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
LABEL_57:
        *(_DWORD *)(v5 + 112) = sub_409D60(v5, v39, v3);
        if ( v7 == v40 && v7 < v13 && *(_QWORD *)(v34 + 8 * v40) == v7 )
        {
          memmove(*(void **)(v5 + 16), (const void *)(*(_QWORD *)(v5 + 16) + 4 * v7), 4 * (v13 - v7));
          memmove(*(void **)(v5 + 8), (const void *)(*(_QWORD *)(v5 + 8) + v7), *(_QWORD *)(v5 + 48) - v7);
          v41 = *(_QWORD *)(v5 + 48);
          *(_QWORD *)(v5 + 56) -= v7;
          v42 = v41 - v7;
          *(_QWORD *)(v5 + 48) = v42;
          if ( v42 > 0 )
          {
            v43 = *(_QWORD *)(v5 + 24);
            v44 = 0LL;
            do
            {
              *(_QWORD *)(v43 + 8 * v44) = *(_QWORD *)(v43 + 8 * v7 + 8 * v44) - v7;
              ++v44;
            }
            while ( *(_QWORD *)(v5 + 48) > v44 );
          }
          LODWORD(v18) = *(_DWORD *)(v5 + 144);
          v17 = *(_BYTE *)(v5 + 139);
          v19 = *(_QWORD *)(v5 + 88) - v7;
          v20 = *(_QWORD *)(v5 + 104) - v7;
LABEL_14:
          if ( v17 )
            goto LABEL_16;
          goto LABEL_15;
        }
        v45 = *(_QWORD *)(v5 + 80);
        v46 = *(_QWORD *)(v5 + 96);
        *(_BYTE *)(v5 + 140) = 0;
        v19 = v45 - v4;
        v20 = v46 - v4;
        *(_QWORD *)(v5 + 88) = v19 + v7;
        *(_QWORD *)(v5 + 104) = v20 + v7;
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
LABEL_99:
            *(_QWORD *)(v5 + 48) = 0LL;
            v47 = 0LL;
LABEL_77:
            *(_QWORD *)(v5 + 56) = v47;
            LODWORD(v18) = *(_DWORD *)(v5 + 144);
            v17 = *(_BYTE *)(v5 + 139);
            goto LABEL_14;
          }
        }
        else
        {
          while ( *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v40) == -1 )
          {
            if ( ++v40 == v13 )
              goto LABEL_99;
          }
        }
        v47 = *(_QWORD *)(v34 + 8 * v40) - v7;
        *(_QWORD *)(v5 + 48) = v47;
        if ( v47 )
        {
          if ( v47 > 0 )
          {
            v48 = *(_DWORD **)(v5 + 16);
            v49 = (__int64)&v48[v47];
            do
            {
              *v48 = -1;
              ++v48;
            }
            while ( (_DWORD *)v49 != v48 );
          }
          memset(*(void **)(v5 + 8), 255, v47);
          v47 = *(_QWORD *)(v5 + 48);
          v19 = *(_QWORD *)(v5 + 88) - v7;
          v20 = *(_QWORD *)(v5 + 104) - v7;
        }
        goto LABEL_77;
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
        if ( !((*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * ((__int64)(unsigned __int8)v22 >> 6)) >> v22) & 1) )
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
LABEL_32:
          if ( *(_BYTE *)(v5 + 139) )
          {
            if ( *(_BYTE *)(v5 + 136) )
            {
              sub_406C80((_QWORD *)v5);
            }
            else
            {
              v58 = *(_QWORD *)(v5 + 120);
              if ( v58 )
              {
                v59 = *(_QWORD *)(v5 + 48);
                if ( *(_QWORD *)(v5 + 64) <= v19 )
                  v19 = *(_QWORD *)(v5 + 64);
                if ( v19 > v59 )
                {
                  while ( 1 )
                  {
                    *(_BYTE *)(*(_QWORD *)(v5 + 8) + v59) = *(_BYTE *)(v58
                                                                     + *(unsigned __int8 *)(v59 + *(_QWORD *)v5 + v4));
                    if ( v19 == ++v59 )
                      break;
                    v4 = *(_QWORD *)(v5 + 40);
                    v58 = *(_QWORD *)(v5 + 120);
                  }
                }
                else
                {
                  v19 = *(_QWORD *)(v5 + 48);
                }
                *(_QWORD *)(v5 + 48) = v19;
                *(_QWORD *)(v5 + 56) = v19;
              }
            }
          }
          else
          {
            *(_QWORD *)(v5 + 48) = v19;
          }
          goto LABEL_19;
        }
LABEL_15:
        *(_QWORD *)(v5 + 8) += v7;
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
          while ( (*v52 & 0xC0) == -128 )
          {
            if ( v50 > (unsigned __int64)--v52 )
              goto LABEL_38;
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
          v56 = sub_406400(&v72, v54, v55, (mbstate_t *)wc);
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
              goto LABEL_42;
          }
          v27 = *(_QWORD *)(a1 + 40);
          v11 = *(_QWORD *)(a1 + 56);
        }
      }
LABEL_38:
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
          v30 = sub_406400((wchar_t *)wc, (char *)(v28 + *(_QWORD *)a1), v29, (mbstate_t *)(a1 + 32));
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
LABEL_42:
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
LABEL_46:
          if ( v32 )
          {
            if ( v32 > 0 )
            {
              v63 = *(_DWORD **)(a1 + 16);
              v64 = (__int64)&v63[v32];
              do
              {
                *v63 = -1;
                ++v63;
              }
              while ( (_DWORD *)v64 != v63 );
            }
            v17 = *(_BYTE *)(a1 + 139);
            if ( !v17 )
              goto LABEL_48;
            memset(*(void **)(a1 + 8), 255, v32);
            v32 = *(_QWORD *)(a1 + 48);
          }
          v17 = *(_BYTE *)(a1 + 139);
LABEL_48:
          *(_QWORD *)(a1 + 56) = v32;
LABEL_13:
          LODWORD(v18) = *(_DWORD *)(a1 + 144);
          v19 = *(_QWORD *)(a1 + 88) - v7;
          v20 = *(_QWORD *)(a1 + 104) - v7;
          goto LABEL_14;
        }
      }
      *(_DWORD *)(a1 + 112) = sub_409D60(a1, v13 - 1, v3);
      goto LABEL_46;
    }
  }
  else
  {
LABEL_125:
    if ( v7 )
      goto LABEL_6;
  }
  LODWORD(v18) = *(_DWORD *)(a1 + 144);
  v19 = *(_QWORD *)(a1 + 88);
  v20 = *(_QWORD *)(a1 + 104);
LABEL_16:
  *(_QWORD *)(v5 + 40) = v4;
  *(_QWORD *)(v5 + 88) = v19;
  *(_QWORD *)(v5 + 104) = v20;
  if ( (int)v18 <= 1 )
    goto LABEL_32;
  if ( !*(_BYTE *)(v5 + 136) )
  {
    sub_406D00((mbstate_t *)v5);
LABEL_19:
    *(_QWORD *)(v5 + 72) = 0LL;
    return 0LL;
  }
  result = sub_406EB0(v5);
  if ( !(_DWORD)result )
    goto LABEL_19;
  return result;
}

__int64 __fastcall sub_40A840(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
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
  __int64 v27; // [rsp+10h] [rbp-60h]
  __int128 v28; // [rsp+18h] [rbp-58h]
  void *ptr; // [rsp+28h] [rbp-48h]

  v4 = a3;
  v5 = a1[7];
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
      if ( a2 != v12 && *(_BYTE *)(*a1 + 16 * v12 + 8) & 8 )
      {
        v13 = *(__int64 **)(24 * v12 + a1[5] + 16);
        v26 = 24 * v12 + a1[5];
        v24 = *v13;
        v14 = sub_408030(v7, (__int64 *)(v6 + 16), *v13);
        if ( *(_QWORD *)(v26 + 8) > 1LL )
        {
          if ( !v14 && sub_408030(*(_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v24)
            || (v15 = v13[1], v15 > 0)
            && !sub_408030(v7, v10, v15)
            && sub_408030(*(_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v16) )
          {
LABEL_5:
            v11 = sub_408AE0((__int64 *)&v28, v27, v9 + a1[7]);
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
        else if ( !v14 && sub_408030(*(_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v24) )
        {
          goto LABEL_5;
        }
      }
LABEL_7:
      if ( v7 <= ++v8 )
      {
        v17 = 0LL;
        if ( v7 > 0 )
        {
          do
          {
            if ( !sub_408030(*((__int64 *)&v28 + 1), (__int64 *)&ptr, *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8 * v17)) )
            {
              v20 = sub_408030(*(_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v18) - 1;
              if ( v20 >= 0 && v20 < v21 )
              {
                *(_QWORD *)(v4 + 8) = v21 - 1;
                sub_4081A0((_QWORD *)(v4 + 8), (__int64 *)(v4 + 16), v20);
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

bool __fastcall sub_40AA70(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  __m128i v3; // xmm0
  bool v4; // cc
  __int64 v5; // r12
  __int64 v6; // r8
  unsigned __int8 *v7; // r15
  int v8; // ebp
  __int16 v9; // ax
  __int64 v10; // rbp
  void *v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r15
  char *v14; // r13
  __int64 v15; // r12
  _QWORD *v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 kk; // rax
  __int64 v21; // rbp
  _QWORD *v22; // rbx
  __int64 ll; // r11
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *mm; // rdi
  __int64 v27; // rax
  void **v28; // rbp
  void *v29; // rdi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 m; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 l; // rdx
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rbp
  __m128i *v41; // r12
  __int64 v42; // rcx
  __int64 ii; // rax
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rdi
  __int64 jj; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  char *v51; // rdx
  __m128i *v52; // rax
  __m128i *v53; // rax
  __int64 v54; // rbp
  char *v55; // r13
  _QWORD *v56; // rax
  void **v57; // rbx
  void *v58; // rdi
  __int64 v59; // rsi
  __int64 j; // rdx
  __int64 v61; // rdx
  __int8 v62; // dh
  __int64 v63; // rcx
  __int64 k; // rdx
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 n; // rdx
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 i; // rdx
  void **v71; // rbx
  void *v72; // rdi
  __int64 *v73; // rax
  char v74; // di
  __int64 *v75; // rax
  char *v76; // rsi
  __int64 v77; // r9
  __int64 v78; // r15
  __int64 v79; // r9
  __int64 v80; // rsi
  void *v81; // rax
  __int64 v82; // rax
  char *v83; // rdx
  _QWORD *v84; // rbp
  __int64 v85; // r11
  unsigned __int64 v86; // rax
  _QWORD *v87; // r8
  __int64 nn; // rcx
  __int64 *v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // r9
  __int64 v92; // r10
  char *ptr; // [rsp+8h] [rbp-E0h]
  _QWORD *ptra; // [rsp+8h] [rbp-E0h]
  __int64 v95; // [rsp+10h] [rbp-D8h]
  int v96; // [rsp+10h] [rbp-D8h]
  _QWORD *v97; // [rsp+10h] [rbp-D8h]
  __int64 v98; // [rsp+18h] [rbp-D0h]
  char *v99; // [rsp+18h] [rbp-D0h]
  char *v100; // [rsp+20h] [rbp-C8h]
  char *v101; // [rsp+28h] [rbp-C0h]
  char v102; // [rsp+30h] [rbp-B8h]
  _QWORD *v103; // [rsp+30h] [rbp-B8h]
  __int64 v104; // [rsp+30h] [rbp-B8h]
  __int64 v105; // [rsp+38h] [rbp-B0h]
  __int64 v106; // [rsp+40h] [rbp-A8h]
  _QWORD *v107; // [rsp+48h] [rbp-A0h]
  __m128i v108; // [rsp+50h] [rbp-98h]
  __m128i v109; // [rsp+60h] [rbp-88h]
  __int128 v110; // [rsp+70h] [rbp-78h]
  void *v111[2]; // [rsp+80h] [rbp-68h]
  __int128 v112; // [rsp+90h] [rbp-58h]
  __int128 v113; // [rsp+A0h] [rbp-48h]
  char v114; // [rsp+B0h] [rbp-38h]

  v107 = a2;
  v100 = (char *)malloc(0x3800uLL);
  if ( !v100 )
    return 0;
  v2 = a2;
  v3 = 0LL;
  v108 = 0LL;
  v4 = a2[2] <= 0LL;
  v109 = 0LL;
  ptr = v100 + 6144;
  a2[11] = 0LL;
  a2[12] = 0LL;
  if ( v4 )
  {
    free(v100);
LABEL_134:
    v81 = calloc(8uLL, 0x100uLL);
    v107[11] = v81;
    return v81 != 0LL;
  }
  v5 = 0LL;
  v98 = 0LL;
  v6 = a1;
  do
  {
    v7 = (unsigned __int8 *)(*(_QWORD *)v6 + 16LL * *(_QWORD *)(v2[3] + 8 * v98));
    v8 = v7[8];
    v9 = (*((_DWORD *)v7 + 2) >> 8) & 0x3FF;
    if ( v8 == 1 )
    {
      *(__int64 *)((char *)v108.m128i_i64 + (((unsigned __int64)*v7 >> 3) & 0x18)) |= 1LL << *v7;
    }
    else if ( v8 == 3 )
    {
      v69 = *(_QWORD *)v7;
      for ( i = 0LL; i != 4; ++i )
        v108.m128i_i64[i] |= *(_QWORD *)(v69 + i * 8);
    }
    else
    {
      if ( v8 == 5 )
      {
        if ( *(_DWORD *)(v6 + 180) <= 1 )
        {
          v3 = _mm_cmpeq_epi32(v3, v3);
          v108 = v3;
          v109 = v3;
        }
        else
        {
          v59 = *(_QWORD *)(v6 + 120);
          for ( j = 0LL; j != 4; ++j )
            v108.m128i_i64[j] |= *(_QWORD *)(v59 + j * 8);
        }
      }
      else
      {
        if ( v8 != 7 )
          goto LABEL_8;
        v3 = _mm_cmpeq_epi32(v3, v3);
        v108 = v3;
      }
      v61 = *(_QWORD *)(v6 + 216);
      if ( !(v61 & 0x40) )
        v108.m128i_i64[0] &= 0xFFFFFFFFFFFFFBFFLL;
      if ( v61 & 0x80 )
        v108.m128i_i64[0] &= 0xFFFFFFFFFFFFFFFELL;
    }
    if ( v9 )
    {
      if ( v9 & 0x20 )
      {
        v62 = v108.m128i_i8[1];
        v3 = 0LL;
        v108 = 0LL;
        v109 = 0LL;
        if ( !(v62 & 4) )
          goto LABEL_8;
        v108.m128i_i64[0] = 1024LL;
      }
      if ( (v9 & 0x80u) != 0 )
        goto LABEL_77;
      if ( !(v9 & 4) )
      {
LABEL_52:
        if ( v9 & 8 )
        {
          if ( v8 == 1 && v7[10] & 0x40 )
            goto LABEL_77;
          if ( *(_DWORD *)(v6 + 180) <= 1 )
          {
            v63 = 0LL;
            for ( k = 0LL; k != 4; ++k )
            {
              v65 = v108.m128i_i64[k] & ~*(_QWORD *)(v6 + 8 * k + 184);
              v108.m128i_i64[k] = v65;
              v63 |= v65;
            }
            if ( !v63 )
              goto LABEL_8;
          }
          else
          {
            v35 = *(_QWORD *)(v6 + 120);
            v36 = 0LL;
            for ( l = 0LL; l != 4; ++l )
            {
              v38 = v108.m128i_i64[l] & ~(*(_QWORD *)(v35 + 8 * l) & *(_QWORD *)(v6 + 8 * l + 184));
              v108.m128i_i64[l] = v38;
              v36 |= v38;
            }
            if ( !v36 )
              goto LABEL_8;
          }
        }
        goto LABEL_58;
      }
      if ( v8 == 1 )
      {
        if ( !(v7[10] & 0x40) )
          goto LABEL_77;
        if ( *(_DWORD *)(v6 + 180) > 1 )
        {
LABEL_49:
          v31 = *(_QWORD *)(v6 + 120);
          v32 = 0LL;
          for ( m = 0LL; m != 4; ++m )
          {
            v34 = v108.m128i_i64[m] & (*(_QWORD *)(v6 + 8 * m + 184) | ~*(_QWORD *)(v31 + 8 * m));
            v108.m128i_i64[m] = v34;
            v32 |= v34;
          }
          if ( !v32 )
            goto LABEL_8;
          goto LABEL_52;
        }
      }
      else if ( *(_DWORD *)(v6 + 180) > 1 )
      {
        goto LABEL_49;
      }
      v66 = 0LL;
      for ( n = 0LL; n != 4; ++n )
      {
        v68 = *(_QWORD *)(v6 + 8 * n + 184) & v108.m128i_i64[n];
        v108.m128i_i64[n] = v68;
        v66 |= v68;
      }
      if ( !v66 )
        goto LABEL_8;
      goto LABEL_52;
    }
LABEL_58:
    v39 = 0LL;
    if ( v5 > 0 )
    {
      v96 = v8;
      v40 = v5;
      v41 = (__m128i *)(v100 + 6144);
      v106 = v6;
      v103 = v2;
      while ( 1 )
      {
        if ( v96 != 1 || (*(_QWORD *)&ptr[32 * v39 + (((unsigned __int64)*v7 >> 3) & 0x18)] >> *v7) & 1 )
        {
          v42 = 0LL;
          for ( ii = 0LL; ii != 4; ++ii )
          {
            v44 = v41->m128i_i64[ii] & v108.m128i_i64[ii];
            *((_QWORD *)&v110 + ii) = v44;
            v42 |= v44;
          }
          if ( v42 )
          {
            v45 = 0LL;
            v46 = 0LL;
            for ( jj = 0LL; jj != 4; ++jj )
            {
              v48 = v41->m128i_i64[jj];
              v49 = v48 & ~v108.m128i_i64[jj];
              v50 = v108.m128i_i64[jj] & ~v48;
              *((_QWORD *)&v112 + jj) = v49;
              v46 |= v49;
              v108.m128i_i64[jj] = v50;
              v45 |= v50;
            }
            v51 = &v100[24 * v39];
            if ( v46 )
            {
              v52 = (__m128i *)&ptr[32 * v40];
              *v52 = _mm_load_si128((const __m128i *)&v112);
              v52[1] = _mm_load_si128((const __m128i *)&v113);
              *v41 = _mm_load_si128((const __m128i *)&v110);
              v41[1] = _mm_load_si128((const __m128i *)v111);
              if ( (unsigned int)sub_4090D0((__int64)&v100[24 * v40], (__int64)v51) )
                goto LABEL_78;
              v51 = &v100[24 * v39];
              ++v40;
            }
            if ( !(unsigned __int8)sub_406A20(v51, *(_QWORD *)(v103[3] + 8 * v98)) )
            {
LABEL_78:
              v5 = v40;
              goto LABEL_79;
            }
            if ( !v45 )
            {
LABEL_73:
              v6 = v106;
              v2 = v103;
              v5 = v40;
              break;
            }
          }
        }
        ++v39;
        v41 += 2;
        if ( v39 >= v40 )
          goto LABEL_73;
      }
    }
    if ( v5 == v39 )
    {
      v104 = v6;
      v53 = (__m128i *)&ptr[32 * v5];
      v97 = v2;
      *v53 = _mm_load_si128(&v108);
      v53[1] = _mm_load_si128(&v109);
      v54 = *(_QWORD *)(v2[3] + 8 * v98);
      v55 = &v100[24 * v5];
      *(_QWORD *)v55 = 1LL;
      *((_QWORD *)v55 + 1) = 1LL;
      v56 = malloc(8uLL);
      v2 = v97;
      v6 = v104;
      *((_QWORD *)v55 + 2) = v56;
      if ( !v56 )
      {
        *((_QWORD *)v55 + 1) = 0LL;
        *(_QWORD *)v55 = 0LL;
        if ( v5 )
        {
LABEL_79:
          v57 = (void **)(v100 + 16);
          do
          {
            v58 = *v57;
            v57 += 3;
            free(v58);
          }
          while ( &v100[24 * v5 + 16] != (char *)v57 );
          free(v100);
        }
        else
        {
          free(v100);
        }
        return 0;
      }
      *v56 = v54;
      ++v5;
LABEL_77:
      v3 = 0LL;
      v108 = 0LL;
      v109 = 0LL;
    }
LABEL_8:
    ++v98;
  }
  while ( v98 < v2[2] );
  v10 = v6;
  if ( v5 <= 0 )
  {
    free(v100);
    if ( v5 )
      return 0;
    goto LABEL_134;
  }
  v110 = (unsigned __int64)(v5 + 1);
  v11 = malloc(8 * (v5 + 1));
  v111[0] = v11;
  if ( !v11 || (v108.m128i_i32[0] = 0, v5 > 768614336404564053LL) || (v105 = 24 * v5, (ptra = malloc(24 * v5)) == 0LL) )
  {
LABEL_112:
    free(v11);
    v71 = (void **)(v100 + 16);
    do
    {
      v72 = *v71;
      v71 += 3;
      free(v72);
    }
    while ( v71 != (void **)&v100[24 * v5 + 16] );
    free(v100);
    return 0;
  }
  v12 = 8 * (v5 + 1) - 8;
  v13 = 0LL;
  v14 = v100;
  v102 = 0;
  v95 = v5;
  v15 = v10;
  v99 = (char *)ptra + v12;
  v101 = (char *)ptra + v12 + v12;
  v16 = v100 + 8;
  v112 = 0LL;
  v113 = 0LL;
  do
  {
    *((_QWORD *)&v110 + 1) = 0LL;
    v17 = 0LL;
    if ( *v16 > 0LL )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v15 + 24) + 8LL * *(_QWORD *)(v16[1] + 8 * v17));
        if ( v18 != -1 )
        {
          v108.m128i_i32[0] = sub_408570((__int64)&v110, *(_QWORD *)(v15 + 48) + 24 * v18);
          if ( v108.m128i_i32[0] )
            break;
        }
        if ( *v16 <= ++v17 )
          goto LABEL_18;
      }
LABEL_110:
      v5 = v95;
      goto LABEL_111;
    }
LABEL_18:
    v19 = sub_4092E0(&v108, (_QWORD *)v15, (__int64)&v110, 0);
    ptra[v13] = v19;
    if ( !v19 && v108.m128i_i32[0] )
      goto LABEL_110;
    if ( *((_BYTE *)v19 + 104) < 0 )
    {
      v73 = sub_4092E0(&v108, (_QWORD *)v15, (__int64)&v110, 1u);
      *(_QWORD *)&v99[8 * v13] = v73;
      if ( !v73 && v108.m128i_i32[0] )
        goto LABEL_110;
      if ( v73 != (__int64 *)ptra[v13] )
      {
        v74 = v102;
        if ( *(_DWORD *)(v15 + 180) >= 2 )
          v74 = 1;
        v102 = v74;
      }
      v75 = sub_4092E0(&v108, (_QWORD *)v15, (__int64)&v110, 2u);
      *(_QWORD *)&v101[8 * v13] = v75;
      if ( !v75 )
      {
        if ( v108.m128i_i32[0] )
          goto LABEL_110;
      }
    }
    else
    {
      *(_QWORD *)&v99[8 * v13] = v19;
      *(_QWORD *)&v101[8 * v13] = v19;
    }
    for ( kk = 0LL; kk != 32; kk += 8LL )
      *(_QWORD *)((char *)&v112 + kk) |= *(_QWORD *)&v14[kk + 6144];
    ++v13;
    v16 += 3;
    v14 += 32;
  }
  while ( v13 != v95 );
  v21 = v15;
  v5 = v95;
  if ( !v102 )
  {
    v22 = calloc(8uLL, 0x100uLL);
    v107[11] = v22;
    if ( v22 )
    {
      for ( ll = 0LL; ll != 32; ll += 8LL )
      {
        v24 = *(_QWORD *)((char *)&v112 + ll);
        v25 = 1LL;
        for ( mm = &v22[8 * ll]; v24; v24 >>= 1 )
        {
          if ( v24 & 1 )
          {
            if ( v25 & *(_QWORD *)&v100[ll + 6144] )
            {
              v79 = 0LL;
            }
            else
            {
              v76 = &v100[ll + 6176];
              v77 = 0LL;
              do
              {
                v78 = *(_QWORD *)v76;
                ++v77;
                v76 += 32;
              }
              while ( !(v25 & v78) );
              v79 = v77;
            }
            if ( v25 & *(_QWORD *)(v21 + ll + 184) )
              v80 = *(_QWORD *)&v99[v79 * 8];
            else
              v80 = ptra[v79];
            *mm = v80;
          }
          v25 *= 2LL;
          ++mm;
        }
      }
      goto LABEL_31;
    }
LABEL_111:
    free(ptra);
    v11 = v111[0];
    goto LABEL_112;
  }
  v22 = calloc(8uLL, 0x200uLL);
  v107[12] = v22;
  if ( !v22 )
    goto LABEL_111;
  v83 = (char *)&v112;
  v84 = v22;
  v85 = (__int64)(v100 + 6176);
  do
  {
    v86 = *(_QWORD *)v83;
    v87 = v84;
    for ( nn = 1LL; v86; v86 >>= 1 )
    {
      if ( v86 & 1 )
      {
        if ( nn & *(_QWORD *)(v85 - 32) )
        {
          v92 = 0LL;
        }
        else
        {
          v89 = (__int64 *)v85;
          v90 = 0LL;
          do
          {
            v91 = *v89;
            ++v90;
            v89 += 4;
            v92 = v90;
          }
          while ( !(nn & v91) );
        }
        *v87 = ptra[v92];
        v87[256] = *(_QWORD *)&v99[8 * v92];
      }
      nn *= 2LL;
      ++v87;
    }
    v83 += 8;
    v84 += 64;
    v85 += 8LL;
  }
  while ( &v114 != v83 );
LABEL_31:
  if ( BYTE1(v112) & 4 )
  {
    v27 = 0LL;
    while ( !(v100[32 * v27 + 6145] & 4) )
    {
      if ( ++v27 == v95 )
        goto LABEL_35;
    }
    v82 = *(_QWORD *)&v101[8 * v27];
    v22[10] = v82;
    if ( v102 )
      v22[266] = v82;
  }
LABEL_35:
  free(ptra);
  free(v111[0]);
  v28 = (void **)(v100 + 16);
  do
  {
    v29 = *v28;
    v28 += 3;
    free(v29);
  }
  while ( &v100[v105 + 16] != (char *)v28 );
  free(v100);
  return 1;
}

__int64 __fastcall sub_40B580(_QWORD *a1, __int64 a2)
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
    result = 0LL;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = a2;
    v6 = sub_407700((__int64)a1, *(_QWORD *)(a2 + 40), *(void **)(a2 + 48));
    *(_QWORD *)(a2 + 56) = v6;
    if ( v6 == -1 )
    {
      result = 12LL;
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

void __fastcall sub_40B610(void *ptr)
{
  void *v1; // r12
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
  __int64 v12; // rbp
  void *v13; // rdi
  void *v14; // rdi

  v1 = ptr;
  v2 = *(_QWORD *)ptr;
  if ( v2 && *((_QWORD *)v1 + 2) )
  {
    v3 = 0LL;
    while ( 1 )
    {
      v4 = v3++;
      sub_4076B0(16 * v4 + v2);
      if ( *((_QWORD *)v1 + 2) <= v3 )
        break;
      v2 = *(_QWORD *)v1;
    }
  }
  v5 = 0LL;
  free(*((void **)v1 + 3));
  if ( *((_QWORD *)v1 + 2) )
  {
    do
    {
      v6 = *((_QWORD *)v1 + 6);
      if ( v6 )
        free(*(void **)(v6 + 24 * v5 + 16));
      v7 = *((_QWORD *)v1 + 7);
      if ( v7 )
        free(*(void **)(v7 + 24 * v5 + 16));
      v8 = *((_QWORD *)v1 + 5);
      if ( v8 )
        free(*(void **)(v8 + 24 * v5 + 16));
      ++v5;
    }
    while ( *((_QWORD *)v1 + 2) > v5 );
  }
  v9 = 0LL;
  free(*((void **)v1 + 5));
  free(*((void **)v1 + 6));
  free(*((void **)v1 + 7));
  free(*(void **)v1);
  v10 = (char *)*((_QWORD *)v1 + 8);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      v12 = (__int64)&v10[24 * v9];
      if ( *(_QWORD *)v12 > 0LL )
      {
        do
        {
          v13 = *(void **)(*(_QWORD *)(v12 + 16) + 8 * v11++);
          sub_407C00(v13);
        }
        while ( v11 < *(_QWORD *)v12 );
      }
      ++v9;
      free(*(void **)(v12 + 16));
      if ( *((_QWORD *)v1 + 17) < v9 )
        break;
      v10 = (char *)*((_QWORD *)v1 + 8);
    }
    v10 = (char *)*((_QWORD *)v1 + 8);
  }
  free(v10);
  v14 = (void *)*((_QWORD *)v1 + 15);
  if ( v14 != &unk_416F20 )
    free(v14);
  free(*((void **)v1 + 28));
  free(v1);
}

void __fastcall sub_40B790(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp

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

__int64 __fastcall sub_40B7E0(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, void *a5, __int64 a6)
{
  bool v6; // sf
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbx

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

__int64 __fastcall sub_40B870(__int64 a1, const char *a2)
{
  if ( strlen(a2) != 1 )
    return 3LL;
  *(_QWORD *)(a1 + (((unsigned __int64)*(unsigned __int8 *)a2 >> 3) & 0x18)) |= 1LL << *a2;
  return 0LL;
}

__int64 __fastcall sub_40B8C0(__int64 a1, __int64 a2, void **a3, __int64 *a4, __int64 *a5, const char *a6, __int64 a7)
{
  __int64 *v7; // r13
  const char *v8; // r12
  __int64 v9; // rbx
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
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  const unsigned __int16 **v35; // rax
  __int64 v36; // rcx
  const unsigned __int16 *v37; // rdx
  const unsigned __int16 **v38; // rax
  __int64 v39; // rcx
  const unsigned __int16 *v40; // rax
  const unsigned __int16 **v41; // rax
  __int64 v42; // rcx
  const unsigned __int16 *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  const unsigned __int16 **v47; // rax
  __int64 v48; // rcx
  const unsigned __int16 *v49; // rsi
  __int64 i; // rax
  const unsigned __int16 **v51; // rax
  __int64 v52; // rcx
  const unsigned __int16 *v53; // rsi
  __int64 v54; // rax
  const unsigned __int16 **v55; // rax
  __int64 v56; // rcx
  const unsigned __int16 *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  void **v62; // [rsp+0h] [rbp-38h]
  __int64 *v63; // [rsp+8h] [rbp-30h]

  v7 = a4;
  v8 = a6;
  v9 = a2;
  if ( !(a7 & 0x400000) )
  {
LABEL_4:
    v10 = *a4;
    v11 = *a3;
    if ( *a5 != *v7 )
      goto LABEL_5;
    goto LABEL_21;
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
LABEL_21:
  v19 = 2 * v10 + 1;
  v63 = a5;
  v62 = a3;
  v11 = realloc(v11, 8 * v19);
  if ( !v11 )
    return 12LL;
  *v62 = v11;
  *v63 = v19;
  v10 = *v7;
LABEL_5:
  *v7 = v10 + 1;
  *((_QWORD *)v11 + v10) = wctype(v8);
  if ( !strcmp(v8, "alnum") )
  {
    v16 = __ctype_b_loc();
    v17 = 0LL;
    v18 = *v16;
    if ( a1 )
    {
      v32 = 0LL;
      do
      {
        if ( v18[v32] & 8 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v32) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v32);
        ++v32;
      }
      while ( v32 != 256 );
    }
    else
    {
      do
      {
        if ( v18[v17] & 8 )
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
      v33 = 0LL;
      do
      {
        if ( v14[v33] & 2 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v33) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v33);
        ++v33;
      }
      while ( v33 != 256 );
    }
    else
    {
      do
      {
        if ( v14[v13] & 2 )
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
      v34 = 0LL;
      do
      {
        if ( v25[v34] & 0x200 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v34) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v34);
        ++v34;
      }
      while ( v34 != 256 );
    }
    else
    {
      do
      {
        if ( v25[v24] & 0x200 )
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
      v45 = 0LL;
      do
      {
        if ( v22[v45] & 0x2000 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v45) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v45);
        ++v45;
      }
      while ( v45 != 256 );
    }
    else
    {
      do
      {
        if ( v22[v21] & 0x2000 )
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
      v44 = 0LL;
      do
      {
        if ( v31[v44] & 0x400 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v44) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v44);
        ++v44;
      }
      while ( v44 != 256 );
    }
    else
    {
      do
      {
        if ( v31[v30] & 0x400 )
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
      v46 = 0LL;
      do
      {
        if ( v28[v46] & 0x800 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v46) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v46);
        ++v46;
      }
      while ( v46 != 256 );
    }
    else
    {
      do
      {
        if ( v28[v27] & 0x800 )
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
      v59 = 0LL;
      do
      {
        if ( v37[v59] & 0x4000 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v59) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v59);
        ++v59;
      }
      while ( v59 != 256 );
    }
    else
    {
      do
      {
        if ( v37[v36] & 0x4000 )
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
      v61 = 0LL;
      do
      {
        if ( v40[v61] & 0x100 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v61) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v61);
        ++v61;
      }
      while ( v61 != 256 );
    }
    else
    {
      do
      {
        if ( v40[v39] & 0x100 )
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
      v60 = 0LL;
      do
      {
        if ( v43[v60] & 1 )
          *(_QWORD *)(a2 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v60) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v60);
        ++v60;
      }
      while ( v60 != 256 );
    }
    else
    {
      do
      {
        if ( v43[v42] & 1 )
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
      for ( i = 0LL; i != 256; ++i )
      {
        if ( (v49[i] & 0x8000u) != 0 )
          *(_QWORD *)(v9 + (((unsigned __int64)*(unsigned __int8 *)(a1 + i) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + i);
      }
    }
    else
    {
      do
      {
        if ( (v49[v48] & 0x8000u) != 0 )
          *(_QWORD *)(v9 + 8 * (v48 >> 6)) |= 1LL << v48;
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
      v54 = 0LL;
      do
      {
        if ( v53[v54] & 4 )
          *(_QWORD *)(v9 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v54) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v54);
        ++v54;
      }
      while ( v54 != 256 );
    }
    else
    {
      do
      {
        if ( v53[v52] & 4 )
          *(_QWORD *)(v9 + 8 * (v52 >> 6)) |= 1LL << v52;
        ++v52;
      }
      while ( v52 != 256 );
    }
    return 0LL;
  }
  if ( !strcmp(v8, asc_416535) )
  {
    v55 = __ctype_b_loc();
    v56 = 0LL;
    v57 = *v55;
    if ( a1 )
    {
      v58 = 0LL;
      do
      {
        if ( v57[v58] & 0x1000 )
          *(_QWORD *)(v9 + (((unsigned __int64)*(unsigned __int8 *)(a1 + v58) >> 3) & 0x18)) |= 1LL << *(_BYTE *)(a1 + v58);
        ++v58;
      }
      while ( v58 != 256 );
    }
    else
    {
      do
      {
        if ( v57[v56] & 0x1000 )
          *(_QWORD *)(v9 + 8 * (v56 >> 6)) |= 1LL << v56;
        ++v56;
      }
      while ( v56 != 256 );
    }
    return 0LL;
  }
  return 4LL;
}

char *__fastcall sub_40C090(__int64 a1, __int64 a2, const char *a3, char *a4, char a5, _DWORD *a6)
{
  const char *v6; // r14
  char *v7; // r13
  char v8; // r12
  char *v9; // rax
  char *v10; // rbx
  char *v11; // rax
  char *v12; // r15
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
  _DWORD *v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  char *v26; // [rsp+20h] [rbp-58h]
  char v27; // [rsp+28h] [rbp-50h]
  char v28; // [rsp+30h] [rbp-48h]
  char v29; // [rsp+38h] [rbp-40h]

  v6 = a3;
  v7 = a4;
  v8 = a5;
  v24 = a6;
  v25 = 0LL;
  v9 = (char *)calloc(0x20uLL, 1uLL);
  if ( !v9 )
    goto LABEL_20;
  v10 = v9;
  v11 = (char *)calloc(0x50uLL, 1uLL);
  v12 = v11;
  if ( !v11 )
  {
    v20 = 0LL;
    free(v10);
    *v24 = 12;
    return v20;
  }
  v11[32] = v8 & 1 | v11[32] & 0xFE;
  v13 = sub_40B8C0(a2, (__int64)v10, (void **)v11 + 3, (__int64 *)v11 + 9, &v25, v6, 0LL);
  if ( v13 )
  {
    v23 = v13;
    v20 = 0LL;
    free(v10);
    sub_407690(v12);
    *v24 = v23;
    return v20;
  }
  for ( i = *v7; (_BYTE)i; *(_QWORD *)&v10[8 * (v15 >> 6)] |= v16 )
  {
    v15 = i + 63;
    if ( i >= 0 )
      v15 = i;
    ++v7;
    v16 = 1LL << (i % 64);
    i = *v7;
  }
  if ( v8 )
  {
    v17 = v10;
    do
    {
      *(_QWORD *)v17 = ~*(_QWORD *)v17;
      v17 += 8;
    }
    while ( v10 + 32 != v17 );
  }
  if ( *(_DWORD *)(a1 + 180) > 1 )
  {
    v18 = *(_QWORD *)(a1 + 120);
    for ( j = 0LL; j != 32; j += 8LL )
      *(_QWORD *)&v10[j] &= *(_QWORD *)(v18 + j);
  }
  v27 = 3;
  v26 = v10;
  v20 = sub_408CA0((_QWORD *)(a1 + 112), (int *)(a1 + 128), 0LL, 0LL, (const __m128i *)&v26);
  if ( !v20 )
    goto LABEL_26;
  if ( *(_DWORD *)(a1 + 180) <= 1 )
  {
    sub_407690(v12);
    return v20;
  }
  *(_BYTE *)(a1 + 176) |= 2u;
  v27 = 6;
  v26 = v12;
  v21 = sub_408CA0((_QWORD *)(a1 + 112), (int *)(a1 + 128), 0LL, 0LL, (const __m128i *)&v26);
  if ( !v21 )
  {
LABEL_26:
    free(v10);
    sub_407690(v12);
LABEL_20:
    v20 = 0LL;
    *v24 = 12;
    return v20;
  }
  v29 = 10;
  return sub_408CA0((_QWORD *)(a1 + 112), (int *)(a1 + 128), v20, v21, (const __m128i *)&v28);
}

_QWORD *__fastcall sub_40C2D0(__int64 a1, _QWORD *a2, _QWORD *a3, __m128i *a4)
{
  __int64 v4; // r12
  _QWORD *result; // rax
  __int64 v6; // rbx
  __m128i *v7; // r15
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
  __int64 v20; // rdx
  wchar_t v21; // eax
  unsigned __int64 v22; // r14
  __int64 v23; // rbp
  __int64 v24; // r13
  _BYTE *v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  _QWORD *v28; // [rsp+0h] [rbp-178h]
  __int64 v29; // [rsp+8h] [rbp-170h]
  __int64 v30; // [rsp+10h] [rbp-168h]
  _QWORD *v31; // [rsp+20h] [rbp-158h]
  _QWORD *v32; // [rsp+28h] [rbp-150h]
  wint_t wc; // [rsp+34h] [rbp-144h]
  mbstate_t ps; // [rsp+38h] [rbp-140h]
  mbstate_t s; // [rsp+40h] [rbp-138h]

  LODWORD(v4) = 0;
  result = *(_QWORD **)a1;
  v28 = *(_QWORD **)a1;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 180LL) == 1 )
    v4 = (*(_QWORD *)(a1 + 24) >> 22) & 1LL;
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
      v10 = (unsigned __int8 *)(*v28 + 16LL * *(_QWORD *)(*v31 + 8 * v6));
      v30 = 16LL * *(_QWORD *)(*v31 + 8 * v6);
      result = (_QWORD *)v10[8];
      if ( (_DWORD)result != 1 )
        break;
      v11 = *v10;
      *((_BYTE *)v7->m128i_i64 + v11) = 1;
      if ( (_DWORD)v4 )
        *((_BYTE *)v7->m128i_i64 + (*__ctype_tolower_loc())[v11]) = 1;
      if ( !(*(_BYTE *)(a1 + 26) & 0x40) || *((_DWORD *)v28 + 45) <= 1 )
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
      if ( sub_406400((wchar_t *)&wc, (char *)&s, v16, &ps) != v16 )
        goto LABEL_9;
      v17 = towlower(wc);
      if ( wcrtomb((char *)&s, v17, &ps) == -1LL )
        goto LABEL_9;
      ++v6;
      *((_BYTE *)v7->m128i_i64 + LOBYTE(s.__count)) = 1;
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
            v25 = (char *)v7->m128i_i64 + v24;
            *((_BYTE *)v7->m128i_i64 + v24) = 1;
            if ( (_DWORD)v4 )
            {
              if ( (unsigned int)(v24 + 128) <= 0x17F )
                v25 = (char *)v7->m128i_i64 + (*__ctype_tolower_loc())[v24];
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
          if ( sub_406400(0LL, (char *)&ps, 1uLL, &s) == -2LL )
            *((_BYTE *)v7->m128i_i64 + LOBYTE(ps.__count)) = 1;
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
            *((_BYTE *)v7->m128i_i64 + LOBYTE(s.__count)) = 1;
            if ( (_DWORD)v4 )
              *((_BYTE *)v7->m128i_i64 + (*__ctype_tolower_loc())[v20]) = 1;
          }
          if ( *(_BYTE *)(a1 + 26) & 0x40 )
          {
            if ( *((_DWORD *)v28 + 45) > 1 )
            {
              v21 = towlower(*(_DWORD *)(*(_QWORD *)v18 + 4 * i));
              if ( wcrtomb((char *)&s, v21, &ps) != -1LL )
                *((_BYTE *)v7->m128i_i64 + LOBYTE(s.__count)) = 1;
            }
          }
        }
      }
      goto LABEL_9;
    }
    if ( (v10[8] & 0xFD) == 5 )
      break;
    if ( (_DWORD)result == 2 )
    {
      v27 = _mm_load_si128((const __m128i *)&xmmword_417160);
      *v7 = v27;
      v7[1] = v27;
      v7[2] = v27;
      v7[3] = v27;
      v7[4] = v27;
      v7[5] = v27;
      v7[6] = v27;
      v7[7] = v27;
      v7[8] = v27;
      v7[9] = v27;
      v7[10] = v27;
      v7[11] = v27;
      v7[12] = v27;
      v7[13] = v27;
      v7[14] = v27;
      v7[15] = v27;
      goto LABEL_57;
    }
LABEL_9:
    result = v32;
    if ( ++v6 >= *v32 )
      return result;
  }
  v26 = _mm_load_si128((const __m128i *)&xmmword_417160);
  *v7 = v26;
  v7[1] = v26;
  v7[2] = v26;
  v7[3] = v26;
  v7[4] = v26;
  v7[5] = v26;
  v7[6] = v26;
  v7[7] = v26;
  v7[8] = v26;
  v7[9] = v26;
  v7[10] = v26;
  v7[11] = v26;
  v7[12] = v26;
  v7[13] = v26;
  v7[14] = v26;
  v7[15] = v26;
  if ( (_DWORD)result != 2 )
    return result;
LABEL_57:
  result = (_QWORD *)a1;
  *(_BYTE *)(a1 + 56) |= 1u;
  return result;
}

__int64 __fastcall sub_40C7B0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
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
  signed int v15; // er12
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
      if ( (unsigned __int8)(v21 + -128) <= 0x3Fu )
        return v10;
      return 0;
    }
    if ( v19 > 0xEFu )
    {
      if ( v19 > 0xF7u )
      {
        if ( v19 > 0xFBu )
        {
          if ( v19 > 0xFDu || v19 == -4 && v21 <= 0x83u )
            return 0;
          v22 = 6LL;
          v10 = 6;
        }
        else
        {
          if ( v19 == -8 && v21 <= 0x87u )
            return 0;
          v22 = 5LL;
          v10 = 5;
        }
      }
      else
      {
        if ( v19 == -16 && v21 <= 0x8Fu )
          return 0;
        v22 = 4LL;
        v10 = 4;
      }
    }
    else
    {
      if ( v19 == -32 && v21 <= 0x9Fu )
        return 0;
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
          return v10;
      }
    }
    return 0;
  }
  if ( *(_DWORD *)(a4 + 144) == 1 )
    return 0;
  v5 = sub_407FE0(a4, a5);
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
    if ( *(_BYTE *)(v12 + 32) & 1 )
      return v10;
    return 0;
  }
  if ( v5 <= 1
    || !(*a2 & 0x40) && *(_BYTE *)(*(_QWORD *)(v7 + 8) + v6) == 10
    || (*a2 & 0x80u) != 0LL && !*(_BYTE *)(*(_QWORD *)(v7 + 8) + v6) )
  {
    return 0;
  }
  return v10;
}

__int64 __fastcall sub_40CA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbp
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
  __int64 v26; // rbx
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned int v32; // eax
  _QWORD *v33; // r13
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 result; // rax
  void *v37; // rdi
  _QWORD *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r14
  char *v41; // rax
  unsigned int v42; // [rsp+0h] [rbp-F8h]
  __int64 v43; // [rsp+0h] [rbp-F8h]
  __int64 v44; // [rsp+8h] [rbp-F0h]
  __int64 v45; // [rsp+10h] [rbp-E8h]
  __int64 v46; // [rsp+18h] [rbp-E0h]
  _QWORD *v47; // [rsp+20h] [rbp-D8h]
  __int64 v48; // [rsp+30h] [rbp-C8h]
  __int64 v49; // [rsp+38h] [rbp-C0h]
  __int64 v50; // [rsp+40h] [rbp-B8h]
  __int64 v51; // [rsp+48h] [rbp-B0h]
  __int64 *v52; // [rsp+50h] [rbp-A8h]
  __int64 v53; // [rsp+58h] [rbp-A0h]
  __int64 v54; // [rsp+60h] [rbp-98h]
  __int64 v55; // [rsp+68h] [rbp-90h]
  unsigned int v56; // [rsp+78h] [rbp-80h]
  unsigned int v57; // [rsp+7Ch] [rbp-7Ch]
  __int128 v58; // [rsp+80h] [rbp-78h]
  void *v59; // [rsp+90h] [rbp-68h]
  __int128 v60; // [rsp+A0h] [rbp-58h]
  void *ptr; // [rsp+B0h] [rbp-48h]

  v7 = a3;
  v8 = a1;
  v9 = a4;
  v10 = *(_QWORD *)(a2 + 8);
  v52 = (__int64 *)a2;
  v55 = a5;
  v48 = a6;
  v47 = *(_QWORD **)(a1 + 152);
  v49 = *(_QWORD *)(**(_QWORD **)(a1 + 152) + 16 * a3);
  v11 = *(int *)(a1 + 224);
  v56 = 0;
  v12 = a6 + v11;
  if ( v12 >= v10 )
  {
    v39 = v12 + 1;
    if ( 0x7FFFFFFFFFFFFFFFLL - v10 < v12 + 1 )
      return 12LL;
    v40 = v10 + v39;
    if ( (unsigned __int64)(v10 + v39) > 0x1FFFFFFFFFFFFFFFLL )
      return 12LL;
    v41 = (char *)realloc(*(void **)(a2 + 16), 8 * v40);
    if ( !v41 )
      return 12LL;
    *(_QWORD *)(a2 + 16) = v41;
    *(_QWORD *)(a2 + 8) = v40;
    memset(&v41[8 * v10], 0, 8 * v39);
  }
  v13 = *(_DWORD *)(a1 + 160);
  v14 = *(_QWORD *)a2;
  v15 = *(_QWORD *)(a2 + 16);
  v53 = *(_QWORD *)(a1 + 184);
  v16 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 184) = v15;
  v54 = v16;
  if ( v14 )
  {
    *(_QWORD *)(a1 + 72) = v14;
    v42 = sub_409D60(a1, v14 - 1, v13);
    if ( v14 != v9 )
    {
      v17 = *(__int64 **)(v15 + 8 * v14);
      if ( !v17 || !(v17[13] & 0x40) )
      {
        v59 = 0LL;
        v58 = 0LL;
        goto LABEL_7;
      }
      result = sub_4090D0((__int64)&v58, (__int64)(v17 + 1));
      v56 = result;
      if ( (_DWORD)result )
        return result;
      if ( !(v17[13] & 0x40) )
        goto LABEL_7;
      goto LABEL_45;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 72) = v9;
    v42 = sub_409D60(a1, v9 - 1, v13);
  }
  *(_QWORD *)&v58 = 1LL;
  *((_QWORD *)&v58 + 1) = 1LL;
  v38 = malloc(8uLL);
  v59 = v38;
  if ( !v38 )
    return 12LL;
  *v38 = v7;
  v14 = v9;
  v56 = sub_4089A0(v47, (__int64)&v58, v49, a7);
  if ( v56 )
  {
LABEL_41:
    free(v59);
    return v56;
  }
LABEL_45:
  if ( *((_QWORD *)&v58 + 1) )
  {
    v56 = sub_409880((_QWORD *)a1, (__int64)&v58, v14, v49, a7);
    if ( v56 )
      goto LABEL_41;
  }
  v17 = sub_4092E0(&v56, v47, (__int64)&v58, v42);
  if ( !v17 )
  {
    if ( v56 )
      goto LABEL_41;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v14) = v17;
LABEL_7:
  if ( v14 < v48 && *(_DWORD *)(a1 + 224) >= 0 )
  {
    v45 = 0LL;
    v18 = *(_QWORD *)(a1 + 184);
    v19 = v14 + 1;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v18 + 8 * v19);
      *((_QWORD *)&v58 + 1) = 0LL;
      v43 = v19 - 1;
      v46 = 8 * v19;
      if ( v20 )
      {
        v56 = sub_408570((__int64)&v58, v20 + 8);
        if ( v56 )
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
      v22 = *(__int64 **)(v8 + 152);
      v57 = 0;
      v60 = 0LL;
      ptr = 0LL;
      if ( !v21 )
      {
        v51 = v19;
        v23 = 0LL;
        while ( 1 )
        {
          v24 = v17[6];
          v25 = *(_QWORD *)(v24 + 8 * v23);
          v26 = 16LL * *(_QWORD *)(v24 + 8 * v23);
          v27 = *v22 + v26;
          if ( *(_BYTE *)(v27 + 10) & 0x10 )
          {
            v28 = sub_40C7B0(*v22, v22 + 27, *(_QWORD *)(v24 + 8 * v23), v8, v43);
            if ( v28 > 1 )
            {
              v44 = 8 * v25;
              v29 = v28 + v43;
              v30 = *(_QWORD *)(v22[3] + 8 * v25);
              v31 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8 * v29);
              *((_QWORD *)&v60 + 1) = 0LL;
              if ( v31 )
              {
                v50 = v30;
                v32 = sub_408570((__int64)&v60, v31 + 8);
                v30 = v50;
                v57 = v32;
                if ( v32 )
                  goto LABEL_68;
              }
              if ( !(unsigned __int8)sub_406A20(&v60, v30) )
              {
LABEL_40:
                free(ptr);
                v56 = 12;
                goto LABEL_41;
              }
              v33 = (_QWORD *)(*(_QWORD *)(v8 + 184) + 8 * v29);
              *v33 = sub_4095E0(&v57, v22, (__int64)&v60);
              if ( !*(_QWORD *)(*(_QWORD *)(v8 + 184) + 8 * v29) )
              {
                if ( v57 )
                {
LABEL_68:
                  v19 = v51;
                  free(ptr);
                  v56 = v57;
                  if ( v57 )
                    goto LABEL_41;
                  goto LABEL_27;
                }
              }
              goto LABEL_17;
            }
            if ( v28 )
            {
LABEL_16:
              v44 = 8 * v25;
LABEL_17:
              if ( !(unsigned __int8)sub_406A20(&v58, *(_QWORD *)(v22[3] + v44)) )
                goto LABEL_40;
              goto LABEL_18;
            }
            v27 = *v22 + v26;
          }
          if ( (unsigned __int8)sub_409E50(v8, v27, v43) )
            goto LABEL_16;
LABEL_18:
          if ( ++v23 >= v17[5] )
          {
            v19 = v51;
            v37 = ptr;
            goto LABEL_50;
          }
        }
      }
      v37 = 0LL;
LABEL_50:
      free(v37);
      v56 = 0;
LABEL_27:
      v14 = v19;
      if ( *((_QWORD *)&v58 + 1) )
      {
        v56 = sub_4089A0(v47, (__int64)&v58, v49, a7);
        if ( v56 )
          goto LABEL_41;
        v56 = sub_409880((_QWORD *)v8, (__int64)&v58, v19, v49, a7);
        if ( v56 )
          goto LABEL_41;
      }
LABEL_30:
      v34 = sub_409D60(v8, v43, *(_DWORD *)(v8 + 160));
      v17 = sub_4092E0(&v56, v47, (__int64)&v58, v34);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v8 + 184);
        v45 = 0LL;
        *(_QWORD *)(v18 + v46) = v17;
      }
      else
      {
        if ( v56 )
          goto LABEL_41;
        v18 = *(_QWORD *)(v8 + 184);
        ++v45;
        *(_QWORD *)(v18 + v46) = 0LL;
      }
      if ( v48 > v19 )
      {
        ++v19;
        if ( *(int *)(v8 + 224) >= v45 )
          continue;
      }
      break;
    }
  }
  free(v59);
  v35 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8 * v48);
  *v52 = v14;
  *(_QWORD *)(v8 + 184) = v53;
  *(_QWORD *)(v8 + 72) = v54;
  if ( v35 )
    result = sub_408030(*(_QWORD *)(v35 + 16), (__int64 *)(v35 + 24), v55) == 0;
  else
    result = 1LL;
  return result;
}

__int64 __fastcall sub_40D160(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4, char a5)
{
  __int64 *v5; // r13
  _QWORD *v6; // r12
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
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 *v33; // r11
  __int64 v34; // r14
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // rdi
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
  __int64 v51; // rcx
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
  __int64 v63; // rcx
  __int64 v64; // [rsp+8h] [rbp-C8h]
  __int64 v65; // [rsp+8h] [rbp-C8h]
  __int64 v66; // [rsp+8h] [rbp-C8h]
  char v67; // [rsp+17h] [rbp-B9h]
  __int64 *v68; // [rsp+18h] [rbp-B8h]
  void *dest; // [rsp+20h] [rbp-B0h]
  size_t n; // [rsp+28h] [rbp-A8h]
  _QWORD *v71; // [rsp+30h] [rbp-A0h]
  __int64 v72; // [rsp+38h] [rbp-98h]
  _QWORD *v73; // [rsp+40h] [rbp-90h]
  __int64 *v74; // [rsp+48h] [rbp-88h]
  __int64 v75; // [rsp+58h] [rbp-78h]
  __int128 v76; // [rsp+60h] [rbp-70h]
  void *ptr; // [rsp+70h] [rbp-60h]
  __int64 v78; // [rsp+80h] [rbp-50h]
  __int64 v79; // [rsp+88h] [rbp-48h]
  void *v80; // [rsp+90h] [rbp-40h]

  v5 = a4;
  v6 = a2;
  v7 = (_QWORD *)*a1;
  v72 = a3;
  v78 = 0LL;
  v73 = v7;
  v79 = 2LL;
  v80 = 0LL;
  if ( a5 )
  {
    v74 = &v78;
    v80 = malloc(0x60uLL);
    if ( !v80 )
      return 12LL;
  }
  else
  {
    v74 = 0LL;
  }
  ptr = 0LL;
  v76 = 0LL;
  v8 = v73[18];
  n = 16 * v72;
  if ( (unsigned __int64)(16 * v72) <= 0xFBF )
  {
    v67 = 0;
    v9 = alloca(16 * v72 + 16);
    dest = (void *)(((unsigned __int64)&v64 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_5;
  }
  v67 = 1;
  dest = malloc(n);
  if ( !dest )
  {
    if ( v74 )
      sub_40B790((__int64)v74);
    return 12LL;
  }
LABEL_5:
  memcpy(dest, v5, n);
  v10 = *v5;
  v75 = *v5;
  v68 = (__int64 *)&ptr;
LABEL_22:
  v18 = v5[1];
  if ( v18 < v10 )
  {
LABEL_37:
    free(ptr);
    if ( v67 )
    {
      free(dest);
      v38 = (__int64)v74;
      if ( !v74 )
        return 0LL;
    }
    else
    {
      v38 = (__int64)v74;
      if ( !v74 )
        return 0LL;
    }
    sub_40B790(v38);
    return 0LL;
  }
  while ( 1 )
  {
    v19 = v8;
    v20 = 16 * v8;
    v21 = 16 * v8 + *v73;
    v22 = *(unsigned __int8 *)(v21 + 8);
    if ( v22 == 8 )
    {
      v23 = *(_QWORD *)v21 + 1LL;
      if ( v72 > v23 )
      {
        v24 = &v5[2 * v23];
        v24[1] = -1LL;
        v18 = v5[1];
        *v24 = v10;
      }
    }
    else if ( v22 == 9 )
    {
      v40 = *(_QWORD *)v21 + 1LL;
      if ( v72 > v40 )
      {
        v41 = 2 * v40;
        v42 = &v5[v41];
        if ( v5[v41] < v10 )
        {
          v42[1] = v10;
          v65 = 16 * v8;
          v71 = (_QWORD *)v10;
          memcpy(dest, v5, n);
          v18 = v5[1];
          v10 = (__int64)v71;
          v20 = v65;
        }
        else if ( *(_BYTE *)(v21 + 10) & 8 && *(_QWORD *)((char *)dest + v41 * 8) != -1LL )
        {
          v66 = v10;
          v71 = (_QWORD *)(16 * v8);
          memcpy(v5, dest, n);
          v18 = v5[1];
          v20 = (__int64)v71;
          v10 = v66;
        }
        else
        {
          v42[1] = v10;
          v18 = v5[1];
        }
      }
    }
    if ( v10 == v18 && v6[22] == v8 )
    {
      if ( !v74 )
      {
        free(ptr);
        if ( v67 )
        {
          free(dest);
          return 0LL;
        }
        return 0LL;
      }
      if ( !v72 )
        goto LABEL_71;
      v59 = v5;
      v60 = 0LL;
      while ( *v59 < 0 || v59[1] != -1 )
      {
        ++v60;
        v59 += 2;
        if ( v72 == v60 )
          goto LABEL_71;
      }
      if ( v72 == v60 )
      {
LABEL_71:
        free(ptr);
        if ( v67 )
          free(dest);
        sub_40B790((__int64)v74);
        return 0LL;
      }
      v8 = sub_40B7E0(v74, v74 + 2, &v75, v72, v5, (__int64)&v76);
      v19 = v8;
      v20 = 16 * v8;
    }
    v11 = (__int64 *)v6[19];
    v12 = *v11;
    v13 = *v11 + v20;
    v14 = *(_BYTE *)(v13 + 8);
    if ( v14 & 8 )
      break;
    if ( *(_BYTE *)(v13 + 10) & 0x10 )
    {
      v71 = (_QWORD *)v20;
      v43 = sub_40C7B0(v12, v11 + 27, v8, (__int64)v6, v75);
      v44 = v43;
      if ( v43 )
        goto LABEL_64;
      v15 = v75;
      v13 = (__int64)v71 + *v11;
    }
    else if ( v14 == 4 )
    {
      v45 = &v5[2 * *(_QWORD *)v13 + 2];
      v46 = *v45;
      v44 = v45[1] - *v45;
      if ( v74 )
      {
        if ( v46 == -1 || v45[1] == -1 )
          goto LABEL_36;
        if ( v44 )
        {
          v47 = v6[1];
          v48 = v75;
          v71 = (_QWORD *)v44;
          v49 = memcmp((const void *)(v47 + v46), (const void *)(v47 + v75), v44);
          v44 = (size_t)v71;
          if ( v49 )
            goto LABEL_36;
          goto LABEL_54;
        }
      }
      else if ( v44 )
      {
LABEL_64:
        v48 = v75;
LABEL_54:
        v16 = v48 + v44;
        v8 = *(_QWORD *)(v11[3] + 8 * v8);
        goto LABEL_15;
      }
      v71 = (_QWORD *)v20;
      if ( !(unsigned __int8)sub_406A20(&v76, v8) )
      {
LABEL_80:
        free(ptr);
        if ( v67 )
LABEL_93:
          free(dest);
        if ( v74 )
          goto LABEL_62;
        return 12LL;
      }
      v61 = v11[5] + 24 * v8;
      v64 = v75;
      v8 = **(_QWORD **)(v61 + 16);
      v62 = *(_QWORD *)(v6[23] + 8 * v75);
      if ( sub_408030(*(_QWORD *)(v62 + 16), (__int64 *)(v62 + 24), v8) )
        goto LABEL_20;
      v15 = v64;
      v13 = (__int64)v71 + *v11;
    }
    else
    {
      v15 = v75;
    }
    v71 = (_QWORD *)v15;
    if ( !(unsigned __int8)sub_409E50((__int64)v6, v13, v15) )
      goto LABEL_35;
    v16 = (__int64)v71 + 1;
    v8 = *(_QWORD *)(v11[3] + 8 * v19);
LABEL_15:
    v75 = v16;
    if ( !v74
      || v16 <= v6[21]
      && (v17 = *(_QWORD *)(v6[23] + 8 * v16)) != 0
      && sub_408030(*(_QWORD *)(v17 + 16), (__int64 *)(v17 + 24), v8) )
    {
      *((_QWORD *)&v76 + 1) = 0LL;
LABEL_20:
      if ( v8 < 0 )
      {
LABEL_34:
        if ( v8 == -2 )
          goto LABEL_80;
        goto LABEL_35;
      }
LABEL_21:
      v10 = v75;
      goto LABEL_22;
    }
LABEL_36:
    v37 = sub_40B7E0(v74, v74 + 2, &v75, v72, v5, (__int64)&v76);
    v10 = v75;
    v8 = v37;
    v18 = v5[1];
    if ( v18 < v75 )
      goto LABEL_37;
  }
  v25 = v11[5];
  v71 = *(_QWORD **)(v6[23] + 8 * v75);
  v26 = v25 + 24 * v8;
  if ( !(unsigned __int8)sub_406A20(&v76, v8) )
    goto LABEL_80;
  if ( *(_QWORD *)(v26 + 8) <= 0LL )
  {
LABEL_35:
    if ( !v74 )
    {
      free(ptr);
      result = 1LL;
      if ( v67 )
      {
        LODWORD(v74) = 1;
        free(dest);
        result = (unsigned int)v74;
      }
      return result;
    }
    goto LABEL_36;
  }
  v27 = v71[2];
  v28 = (__int64)(v71 + 3);
  v29 = *(_QWORD *)(v26 + 16);
  v71 = v6;
  v30 = 0LL;
  v31 = -1LL;
  v32 = v27;
  v33 = (__int64 *)v28;
  while ( 2 )
  {
    v34 = *(_QWORD *)(v29 + 8 * v30);
    if ( !sub_408030(v32, v33, *(_QWORD *)(v29 + 8 * v30)) )
    {
LABEL_32:
      v30 = v35 + 1;
      if ( v36 == v30 )
      {
        v8 = v31;
        v6 = v71;
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
  v6 = v71;
  if ( sub_408030(*((__int64 *)&v76 + 1), v68, v50) )
  {
    v8 = v34;
    goto LABEL_20;
  }
  v51 = (__int64)v74;
  if ( !v74 )
    goto LABEL_20;
  v52 = *v74;
  v53 = v75;
  v54 = *v74 + 1;
  *v74 = v54;
  if ( v54 != *(_QWORD *)(v51 + 8) )
  {
    v55 = *(char **)(v51 + 16);
    goto LABEL_59;
  }
  v71 = (_QWORD *)v53;
  v55 = (char *)realloc((void *)v74[2], 96 * v54);
  if ( v55 )
  {
    v63 = (__int64)v74;
    v53 = (__int64)v71;
    v74[1] *= 2LL;
    *(_QWORD *)(v63 + 16) = v55;
LABEL_59:
    v56 = (__int64 *)&v55[48 * v52];
    v56[1] = v34;
    v57 = n;
    *v56 = v53;
    v58 = malloc(v57);
    v56[2] = (__int64)v58;
    if ( v58 )
    {
      memcpy(v58, v5, v57);
      if ( !(unsigned int)sub_4090D0((__int64)(v56 + 3), (__int64)&v76) )
        goto LABEL_20;
    }
  }
  free(ptr);
  if ( v67 )
    goto LABEL_93;
LABEL_62:
  sub_40B790((__int64)v74);
  return 12LL;
}

__int64 __fastcall sub_40DA30(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r14
  __int64 v6; // r13
  __int64 *v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rbx
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

  v5 = a3;
  v6 = a4;
  v7 = a2;
  v8 = a5;
  v9 = a1;
  result = sub_40CA40((__int64)a1, (__int64)(a3 + 2), *a3, a3[1], a4, a5, 8u);
  if ( !(_DWORD)result )
  {
    v11 = v5[1];
    v12 = a1[25];
    v13 = a1[26];
    v14 = *a2;
    v15 = (char *)a1[27];
    v16 = v5[1];
    if ( v12 >= v13 )
    {
      v23 = *v7;
      v20 = (char *)realloc(v15, 80 * v13);
      if ( !v20 )
      {
        free((void *)v9[27]);
        return 12LL;
      }
      v21 = v9[26];
      v22 = v9[25];
      v9[27] = v20;
      memset(&v20[40 * v22], 0, 40 * v21);
      v9[26] *= 2LL;
      v12 = v9[25];
      v15 = (char *)v9[27];
      v16 = v5[1];
      v14 = v23;
    }
    v17 = 40 * v12;
    if ( v12 > 0 )
    {
      v18 = (__int64)&v15[v17 - 40];
      if ( v8 == *(_QWORD *)(v18 + 8) )
        *(_BYTE *)(v18 + 32) = 1;
    }
    v19 = &v15[v17];
    *(_QWORD *)v19 = v6;
    *((_QWORD *)v19 + 1) = v8;
    *((_WORD *)v19 + 17) = -(v11 == v14);
    *((_QWORD *)v19 + 2) = v14;
    *((_QWORD *)v19 + 3) = v11;
    v9[25] = v12 + 1;
    v19[32] = 0;
    if ( *((int *)v9 + 56) < v11 - v14 )
      *((_DWORD *)v9 + 56) = v11 - v14;
    result = sub_407600(v9, v8 + v16 - *v7);
  }
  return result;
}

__int64 __fastcall sub_40DBD0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // ebx
  char v9; // al
  __int64 v10; // rcx
  __int64 i; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rbp
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 **v25; // r11
  __int64 v26; // rax
  __int64 *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 *v30; // rax
  void *v31; // rdi
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 result; // rax
  __int64 v39; // r12
  __int64 v40; // r10
  __int64 v41; // rcx
  __int64 v42; // rbp
  __int64 v43; // r12
  __int64 v44; // r8
  __int64 *v45; // r9
  __int64 v46; // r13
  signed __int64 v47; // rdx
  signed __int64 v48; // r15
  int v49; // eax
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rbp
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rdx
  void *v62; // rax
  void *v63; // rax
  __int64 v64; // [rsp+8h] [rbp-E0h]
  __int64 v65; // [rsp+10h] [rbp-D8h]
  __int64 v66; // [rsp+10h] [rbp-D8h]
  __int64 v67; // [rsp+18h] [rbp-D0h]
  __int64 v68; // [rsp+18h] [rbp-D0h]
  __int64 v69; // [rsp+20h] [rbp-C8h]
  __int64 v70; // [rsp+20h] [rbp-C8h]
  __int64 v71; // [rsp+20h] [rbp-C8h]
  __int64 *v72; // [rsp+20h] [rbp-C8h]
  unsigned int v73; // [rsp+28h] [rbp-C0h]
  __int64 **v74; // [rsp+28h] [rbp-C0h]
  __int64 **v75; // [rsp+28h] [rbp-C0h]
  __int64 v76; // [rsp+28h] [rbp-C0h]
  signed __int64 v77; // [rsp+28h] [rbp-C0h]
  __int64 v78; // [rsp+28h] [rbp-C0h]
  __int64 v79; // [rsp+28h] [rbp-C0h]
  __int64 *v80; // [rsp+30h] [rbp-B8h]
  __int64 v81; // [rsp+30h] [rbp-B8h]
  _QWORD *v82; // [rsp+38h] [rbp-B0h]
  __int64 v83; // [rsp+40h] [rbp-A8h]
  __int64 v84; // [rsp+40h] [rbp-A8h]
  _QWORD *v85; // [rsp+48h] [rbp-A0h]
  _QWORD *v86; // [rsp+50h] [rbp-98h]
  __int64 v87; // [rsp+58h] [rbp-90h]
  __int64 v88; // [rsp+60h] [rbp-88h]
  __int64 *v89; // [rsp+68h] [rbp-80h]
  __int64 v90; // [rsp+70h] [rbp-78h]
  __int64 v91; // [rsp+78h] [rbp-70h]
  unsigned int v92; // [rsp+8Ch] [rbp-5Ch]
  char v93; // [rsp+90h] [rbp-58h]
  void *ptr; // [rsp+A0h] [rbp-48h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 72);
  v86 = a2;
  v85 = a3;
  v82 = *(_QWORD **)(a1 + 152);
  v87 = 8 * v4;
  v64 = 0LL;
  if ( *a2 <= 0LL )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)(*v85 + 8 * v64);
    v6 = 16LL * *(_QWORD *)(*v85 + 8 * v64);
    v7 = v6 + *v82;
    if ( *(_BYTE *)(v7 + 8) == 4 )
      break;
LABEL_9:
    if ( ++v64 >= *v86 )
      return 0LL;
  }
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 & 0x3FF00 )
  {
    v9 = sub_409D60(v3, v4, *(_DWORD *)(v3 + 160));
    if ( v8 & 0x400 )
    {
      if ( !(v9 & 1) || v8 & 0x800 )
        goto LABEL_9;
    }
    else if ( v8 & 0x800 && v9 & 1 )
    {
      goto LABEL_9;
    }
    if ( v8 & 0x2000 && !(v9 & 2) || v8 & 0x8000 && !(v9 & 8) )
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
    v14 = (_QWORD *)(*(_QWORD *)(v3 + 216) + 40 * v10);
    if ( v14[1] == v4 && v10 != -1 )
    {
      while ( v5 != *v14 )
      {
        v14 += 5;
        if ( !*((_BYTE *)v14 - 8) )
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
  v67 = v4;
  v65 = 0LL;
  v69 = *(_QWORD *)(v3 + 8);
  v83 = v5;
  v90 = *(_QWORD *)(v3 + 200);
LABEL_33:
  v17 = *(_QWORD *)(*(_QWORD *)(v3 + 248) + 8 * v65);
  if ( v88 != *(_QWORD *)(v16 + 16LL * *(_QWORD *)(v17 + 8)) )
    goto LABEL_34;
  v39 = *(_QWORD *)v17;
  v40 = v67;
  if ( *(_QWORD *)(v17 + 32) <= 0LL )
    goto LABEL_73;
  v41 = *(_QWORD *)v17;
  v42 = 0LL;
  v43 = v69;
  v44 = v67;
  while ( 1 )
  {
    v45 = *(__int64 **)(*(_QWORD *)(v17 + 40) + 8 * v42);
    v46 = v45[1];
    v47 = v45[1] - v41;
    v48 = v47 + v44;
    if ( v47 <= 0 )
      goto LABEL_60;
    if ( *(_QWORD *)(v3 + 48) < v48 )
    {
      v77 = v45[1] - v41;
      v72 = *(__int64 **)(*(_QWORD *)(v17 + 40) + 8 * v42);
      if ( *(_QWORD *)(v3 + 88) >= v48 )
      {
        v91 = v44;
        v81 = v41;
        result = sub_407600((_QWORD *)v3, v47 + v44);
        if ( (_DWORD)result )
          return result;
        v43 = *(_QWORD *)(v3 + 8);
        v47 = v77;
        v45 = v72;
        v44 = v91;
        v41 = v81;
        goto LABEL_59;
      }
LABEL_96:
      v69 = v43;
      v40 = v44;
      v39 = v41;
      if ( *(_QWORD *)(v17 + 32) <= v42 )
      {
        if ( v42 > 0 )
        {
          v46 = v41;
          v48 = v44;
LABEL_72:
          v39 = v46 + 1;
          v40 = v48;
        }
LABEL_73:
        if ( v67 >= v39 )
        {
          v50 = v40;
          do
          {
            if ( v39 - *(_QWORD *)v17 > 0 )
            {
              if ( *(_QWORD *)(v3 + 48) <= v50 )
              {
                if ( *(_QWORD *)(v3 + 88) <= v50 )
                  break;
                result = sub_4074B0((_QWORD *)v3, (unsigned int)(v50 + 1));
                if ( (_DWORD)result )
                  return result;
                v69 = *(_QWORD *)(v3 + 8);
              }
              if ( *(_BYTE *)(v69 + v50) != *(_BYTE *)(v69 + v39 - 1) )
                break;
              ++v50;
            }
            v51 = *(_QWORD *)(*(_QWORD *)(v3 + 184) + 8 * v39);
            if ( v51 )
            {
              v52 = *(_QWORD *)(v51 + 16);
              if ( v52 > 0 )
              {
                v53 = *(_QWORD *)(v51 + 24);
                v54 = 0LL;
                while ( 1 )
                {
                  v55 = *(_QWORD *)(v53 + 8 * v54);
                  v56 = *v89 + 16LL * *(_QWORD *)(v53 + 8 * v54);
                  if ( *(_BYTE *)(v56 + 8) == 9 && v88 == *(_QWORD *)v56 )
                    break;
                  if ( v52 == ++v54 )
                    goto LABEL_92;
                }
                if ( v55 != -1 )
                {
                  v57 = *(_QWORD *)(v17 + 16);
                  v58 = *(_QWORD *)v17;
                  if ( !v57 )
                  {
                    v78 = *(_QWORD *)v17;
                    v62 = calloc(0x18uLL, v39 - v58 + 1);
                    v58 = v78;
                    v57 = (__int64)v62;
                    *(_QWORD *)(v17 + 16) = v62;
                    if ( !v62 )
                      return 12LL;
                  }
                  result = sub_40CA40(v3, v57, *(_QWORD *)(v17 + 8), v58, v55, v39, 9u);
                  if ( (_DWORD)result != 1 )
                  {
                    if ( (_DWORD)result )
                      return result;
                    v59 = *(_QWORD *)(v17 + 24);
                    if ( *(_QWORD *)(v17 + 32) == v59 )
                    {
                      v79 = 2 * v59 + 1;
                      v63 = realloc(*(void **)(v17 + 40), 8 * v79);
                      if ( !v63 )
                        return 12LL;
                      *(_QWORD *)(v17 + 40) = v63;
                      *(_QWORD *)(v17 + 24) = v79;
                    }
                    v60 = (__int64 *)calloc(1uLL, 0x28uLL);
                    if ( !v60 )
                      return 12LL;
                    v61 = *(_QWORD *)(v17 + 32);
                    *(_QWORD *)(*(_QWORD *)(v17 + 40) + 8 * v61) = v60;
                    *v60 = v55;
                    v60[1] = v39;
                    *(_QWORD *)(v17 + 32) = v61 + 1;
                    sub_40DA30((_QWORD *)v3, (__int64 *)v17, v60, v83, v67);
                  }
                }
              }
            }
LABEL_92:
            ++v39;
          }
          while ( v67 >= v39 );
        }
      }
LABEL_34:
      if ( ++v65 < *(_QWORD *)(v3 + 232) )
      {
        v16 = *v89;
        goto LABEL_33;
      }
      v4 = v67;
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
          v33 = (_QWORD *)(*(_QWORD *)(v21 + 216) + 40 * v20);
          if ( v18 != *v33 || v4 != v33[1] )
            goto LABEL_46;
          v34 = v33[3];
          v35 = v33[2];
          v36 = v82[6];
          v70 = v34 - v35;
          if ( v34 == v35 )
            v68 = v36 + 24LL * **(_QWORD **)(v82[5] + 24 * v18 + 16);
          else
            v68 = v36 + 24LL * *(_QWORD *)(v82[3] + v84);
          v22 = v4 + v34 - v35;
          v66 = 0LL;
          v23 = sub_409D60(v21, v22 - 1, *(_DWORD *)(v21 + 160));
          v24 = *(_QWORD *)(v21 + 184);
          v25 = (__int64 **)(v24 + 8 * v22);
          v26 = *(_QWORD *)(v24 + v87);
          v27 = *v25;
          if ( v26 )
            v66 = *(_QWORD *)(v26 + 16);
          if ( v27 )
          {
            v73 = v23;
            v28 = sub_409150((__int64)&v93, v27[10], v68);
            v29 = v73;
            v92 = v28;
            if ( v28 )
            {
              free(ptr);
              return v92;
            }
            v74 = (__int64 **)(*(_QWORD *)(v21 + 184) + 8 * v22);
            v30 = sub_4092E0(&v92, v82, (__int64)&v93, v29);
            v31 = ptr;
            *v74 = v30;
            free(v31);
            v32 = *(_QWORD *)(v21 + 184);
            if ( *(_QWORD *)(v32 + 8 * v22) )
            {
LABEL_44:
              if ( v70 || *(_QWORD *)(*(_QWORD *)(v32 + v87) + 16LL) <= v66 )
              {
LABEL_46:
                if ( ++v20 >= *(_QWORD *)(v21 + 200) )
                  goto LABEL_65;
              }
              else
              {
                result = sub_409C10(v21, (_QWORD *)(v68 + 8), (_QWORD *)(v68 + 16), v4);
                v92 = result;
                if ( (_DWORD)result )
                  return result;
                result = sub_40DBD0(v21, v68 + 8, v68 + 16);
                v92 = result;
                if ( (_DWORD)result )
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
            v75 = v25;
            v37 = sub_4092E0(&v92, v82, v68, v23);
            v32 = *(_QWORD *)(v21 + 184);
            *v75 = v37;
            if ( *(_QWORD *)(v32 + 8 * v22) )
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
    v80 = v45;
    v76 = v41;
    v71 = v44;
    v49 = memcmp((const void *)(v43 + v44), (const void *)(v43 + v41), v47);
    v44 = v71;
    v41 = v76;
    v45 = v80;
    if ( v49 )
      goto LABEL_96;
LABEL_60:
    result = sub_40DA30((_QWORD *)v3, (__int64 *)v17, v45, v83, v67);
    v43 = *(_QWORD *)(v3 + 8);
    if ( (unsigned int)result > 1 )
      return result;
    ++v42;
    v41 = v46;
    v44 = v48;
    if ( v42 >= *(_QWORD *)(v17 + 32) )
    {
      v69 = *(_QWORD *)(v3 + 8);
      goto LABEL_72;
    }
  }
}

__int64 *__fastcall sub_40E450(_DWORD *a1, __int64 a2, __int64 *a3)
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
  __m128i v17; // [rsp+10h] [rbp-58h]
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
        v10 = sub_409150((__int64)&v17, v9, v8);
        *a1 = v10;
        if ( v10 )
          goto LABEL_17;
        v11 = sub_409D60(a2, *(_QWORD *)(a2 + 72) - 1LL, *(_DWORD *)(a2 + 160));
        v16 = (__int64 **)(8 * v3 + *(_QWORD *)(a2 + 184));
        v6 = sub_4092E0(a1, v4, (__int64)&v17, v11);
        *v16 = v6;
        if ( v9 )
          free(ptr);
      }
      else
      {
        v12 = *(_DWORD *)(a2 + 160);
        v17 = _mm_loadu_si128((const __m128i *)v8);
        ptr = *(void **)(v8 + 16);
        v13 = sub_409D60(a2, v3 - 1, v12);
        v6 = sub_4092E0(a1, v4, (__int64)&v17, v13);
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
      v14 = sub_409C10(a2, v6 + 2, v6 + 3, v3);
      *a1 = v14;
      if ( !v14 )
      {
        if ( !(v6[13] & 0x40) )
          return v6;
        v15 = sub_40DBD0(a2, v6 + 2, v6 + 3);
        *a1 = v15;
        if ( !v15 )
          return *(__int64 **)(*(_QWORD *)(a2 + 184) + 8 * v3);
      }
    }
LABEL_17:
    v6 = 0LL;
  }
  return v6;
}

__int64 __fastcall sub_40E610(__int64 a1, _QWORD *a2)
{
  void **v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // r12
  __int64 v10; // rax
  int v11; // er9
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
  __int64 v25; // [rsp+30h] [rbp-68h]
  _QWORD *v26; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  void *ptr; // [rsp+50h] [rbp-48h]

  v2 = (void **)a2;
  v3 = a2[3];
  v4 = a2[2];
  v27 = 1LL;
  v28 = 1LL;
  v5 = malloc(8uLL);
  ptr = v5;
  if ( !v5 )
    return 12LL;
  *v5 = v4;
  v6 = sub_4100A0(a1, a2, v3, &v27);
  if ( v6 )
    goto LABEL_29;
  v22 = 0;
  v26 = a2 + 6;
  if ( v3 <= 0 )
  {
LABEL_27:
    v6 = 0;
    goto LABEL_29;
  }
  while ( 1 )
  {
    n = 8 * v3;
    if ( *((_QWORD *)*v2 + v3) )
    {
      v22 = 0;
      if ( *(_DWORD *)(a1 + 224) < 0 )
        goto LABEL_31;
    }
    else if ( *(_DWORD *)(a1 + 224) < ++v22 )
    {
LABEL_31:
      memset(*v2, 0, n);
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
      if ( *(_QWORD *)(v8 + 40) > 0LL )
        break;
    }
LABEL_25:
    v6 = sub_4100A0(a1, v2, v3, &v27);
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
    v14 = 16LL * *(_QWORD *)(v12 + 8 * v19) + *v9;
    if ( *(_BYTE *)(v14 + 10) & 0x10 )
    {
      v24 = 16LL * *(_QWORD *)(v12 + 8 * v19);
      v25 = *(_QWORD *)(a1 + 152);
      v23 = (__int64)v2[3];
      v15 = sub_40C7B0(
              **(_QWORD **)(a1 + 152),
              (_QWORD *)(*(_QWORD *)(a1 + 152) + 216LL),
              *(_QWORD *)(v12 + 8 * v19),
              a1,
              v3);
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
      v17 = *((_QWORD *)*v2 + v16);
      if ( !v17 )
        goto LABEL_24;
      if ( sub_408030(*(_QWORD *)(v17 + 16), (__int64 *)(v17 + 24), *(_QWORD *)(*(_QWORD *)(v25 + 24) + 8 * v13)) )
        goto LABEL_13;
      v14 = v24 + *v9;
    }
LABEL_9:
    if ( (unsigned __int8)sub_409E50(a1, v14, v3) )
    {
      v10 = *(_QWORD *)((char *)*v2 + n);
      if ( v10 )
      {
        if ( sub_408030(*(_QWORD *)(v10 + 16), (__int64 *)(v10 + 24), *(_QWORD *)(v9[3] + 8 * v13)) )
          break;
      }
    }
LABEL_16:
    if ( ++v19 >= *(_QWORD *)(v8 + 40) )
      goto LABEL_25;
  }
  v11 = 1;
LABEL_13:
  if ( v2[5] && (unsigned __int8)sub_4082C0((_QWORD *)a1, v2 + 5, v26, *(_QWORD *)(v9[3] + 8 * v13), v11 + v3, v13, v3)
    || (unsigned __int8)sub_406A20(&v27, v13) )
  {
    goto LABEL_16;
  }
  v6 = 12;
LABEL_29:
  v20 = v6;
  free(ptr);
  return v20;
}

__int64 __fastcall sub_40E940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned __int64 a7, __int64 *a8, int a9)
{
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rbx
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
  unsigned __int8 v24; // al
  bool v25; // cc
  unsigned __int64 v26; // rax
  unsigned __int8 v27; // al
  __int64 v28; // r15
  void *v29; // r14
  void *v30; // rdi
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
  void *v55; // rbx
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
  _QWORD *v76; // rdx
  __int64 v77; // r9
  __int64 v78; // r15
  __int64 v79; // rax
  unsigned int v80; // ebx
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
  __int64 v97; // rax
  bool v98; // r8
  unsigned int v99; // eax
  __int64 v100; // rdx
  char v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r11
  unsigned __int64 v105; // r10
  __int64 v106; // rdi
  __int64 *i; // rax
  unsigned __int64 v108; // rsi
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
  char *v125; // [rsp+30h] [rbp-208h]
  __int64 v126; // [rsp+30h] [rbp-208h]
  __int64 v127; // [rsp+38h] [rbp-200h]
  __int64 v128; // [rsp+40h] [rbp-1F8h]
  _BOOL4 v129; // [rsp+48h] [rbp-1F0h]
  unsigned int v130; // [rsp+4Ch] [rbp-1ECh]
  __int64 *v131; // [rsp+50h] [rbp-1E8h]
  _QWORD *v132; // [rsp+58h] [rbp-1E0h]
  _BYTE *v133; // [rsp+60h] [rbp-1D8h]
  __int64 v134; // [rsp+68h] [rbp-1D0h]
  __int64 v135; // [rsp+70h] [rbp-1C8h]
  __int64 v136; // [rsp+78h] [rbp-1C0h]
  __int64 v137; // [rsp+80h] [rbp-1B8h]
  __int64 v138; // [rsp+88h] [rbp-1B0h]
  __int64 v139; // [rsp+90h] [rbp-1A8h]
  unsigned int v140; // [rsp+98h] [rbp-1A0h]
  int v141; // [rsp+9Ch] [rbp-19Ch]
  __int64 *v142; // [rsp+A0h] [rbp-198h]
  int v143; // [rsp+A8h] [rbp-190h]
  unsigned __int8 v144; // [rsp+ADh] [rbp-18Bh]
  bool v145; // [rsp+AFh] [rbp-189h]
  int v146; // [rsp+B0h] [rbp-188h]
  int v147; // [rsp+B4h] [rbp-184h]
  __int64 v148; // [rsp+B8h] [rbp-180h]
  __m128i v149; // [rsp+C0h] [rbp-178h]
  void *v150; // [rsp+D0h] [rbp-168h]
  unsigned __int64 v151; // [rsp+D8h] [rbp-160h]
  __int128 v152; // [rsp+E0h] [rbp-158h]
  void *v153; // [rsp+F0h] [rbp-148h]
  __int64 v154; // [rsp+100h] [rbp-138h]
  __int64 v155; // [rsp+108h] [rbp-130h]
  _DWORD *v156; // [rsp+110h] [rbp-128h]
  __int64 v157; // [rsp+118h] [rbp-120h]
  __int64 v158; // [rsp+128h] [rbp-110h]
  __int64 v159; // [rsp+130h] [rbp-108h]
  unsigned __int64 v160; // [rsp+138h] [rbp-100h]
  __int64 v161; // [rsp+140h] [rbp-F8h]
  __int64 v162; // [rsp+148h] [rbp-F0h]
  __int64 v163; // [rsp+150h] [rbp-E8h]
  __int64 v164; // [rsp+158h] [rbp-E0h]
  __int64 v165; // [rsp+160h] [rbp-D8h]
  __int64 v166; // [rsp+168h] [rbp-D0h]
  int v167; // [rsp+170h] [rbp-C8h]
  __int64 v168; // [rsp+178h] [rbp-C0h]
  __int64 v169; // [rsp+180h] [rbp-B8h]
  bool v170; // [rsp+188h] [rbp-B0h]
  char v171; // [rsp+189h] [rbp-AFh]
  char v172; // [rsp+18Ah] [rbp-AEh]
  bool v173; // [rsp+18Bh] [rbp-ADh]
  char v174; // [rsp+18Ch] [rbp-ACh]
  char v175; // [rsp+18Dh] [rbp-ABh]
  char v176; // [rsp+18Eh] [rbp-AAh]
  int v177; // [rsp+190h] [rbp-A8h]
  __int64 v178; // [rsp+198h] [rbp-A0h]
  int v179; // [rsp+1A0h] [rbp-98h]
  __int64 v180; // [rsp+1A8h] [rbp-90h]
  void *v181; // [rsp+1B0h] [rbp-88h]
  void *ptr; // [rsp+1B8h] [rbp-80h]
  __int64 v183; // [rsp+1C0h] [rbp-78h]
  __int64 v184; // [rsp+1C8h] [rbp-70h]
  __int64 v185; // [rsp+1D0h] [rbp-68h]
  void *v186; // [rsp+1D8h] [rbp-60h]
  int v187; // [rsp+1E0h] [rbp-58h]
  __int64 v188; // [rsp+1F0h] [rbp-48h]
  void *v189; // [rsp+1F8h] [rbp-40h]

  v9 = a6;
  v10 = a5;
  v11 = a4;
  v128 = a1;
  v135 = a2;
  v136 = a3;
  v12 = *(_QWORD *)a1;
  v121 = *(_QWORD *)a1;
  v13 = 0LL;
  memset(&v154, 0, 0x100uLL);
  v14 = *(_BYTE **)(a1 + 32);
  v178 = v12;
  v133 = v14;
  if ( v14 )
  {
    if ( *(_BYTE *)(a1 + 56) & 8 && v11 != a5 )
    {
      if ( !(*(_BYTE *)(a1 + 56) & 1) )
        v13 = v14;
      v133 = v13;
    }
    else
    {
      v133 = 0LL;
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
  if ( !*(_QWORD *)(v17 + 16) && !*(_QWORD *)(v18 + 16) && (!*(_QWORD *)(v19 + 16) || *(_BYTE *)(a1 + 56) >= 0) )
  {
    if ( v11 )
    {
      v130 = 1;
      if ( a5 )
        return v130;
    }
    v10 = 0LL;
    v11 = 0LL;
  }
  v129 = 1;
  if ( !a7 )
    v129 = *(_QWORD *)(v121 + 152) != 0LL;
  v20 = *(_QWORD *)(a1 + 40);
  v21 = *(_DWORD *)(v121 + 180);
  v115 = *(_QWORD *)(v128 + 24);
  v22 = *(_QWORD *)(v121 + 16);
  v177 = v21;
  v23 = v22 + 1;
  v138 = v20;
  if ( v22 + 1 < v21 )
    v23 = v21;
  v168 = v20;
  v164 = v136;
  v163 = v136;
  if ( v23 > v136 + 1 )
    v23 = v136 + 1;
  v166 = v136;
  v165 = v136;
  v154 = v135;
  v170 = (v115 & 0x400000) != 0;
  v24 = *(_BYTE *)(v121 + 176);
  v173 = (v20 | v115 & 0x400000) != 0;
  v172 = (v24 >> 3) & 1;
  v171 = (v24 >> 2) & 1;
  v130 = sub_406910((__int64)&v154, v23);
  if ( v130 )
    goto LABEL_132;
  v169 = v121 + 184;
  v176 = (*(_BYTE *)(v121 + 176) >> 4) & 1;
  if ( v173 || (v25 = *(_DWORD *)(v121 + 180) <= 1, v155 = v135, v26 = v136, !v25) )
    v26 = 0LL;
  v159 = v26;
  v160 = v26;
  v166 = v9;
  v27 = *(_BYTE *)(v128 + 56);
  v165 = v9;
  v175 = v27 >> 7;
  v28 = *(_QWORD *)(v121 + 152);
  v180 = -1LL;
  v179 = a9;
  if ( 2 * v28 > 0 )
  {
    if ( 2 * v28 > 461168601842738790LL )
      goto LABEL_206;
    v29 = malloc(80 * v28);
    v186 = v29;
    v189 = malloc(16 * v28);
    if ( !v189 || !v29 )
      goto LABEL_206;
  }
  v185 = 2 * v28;
  v187 = 1;
  v188 = 2 * v28;
  if ( a7 > 1 || *(_BYTE *)(v121 + 176) & 2 )
  {
    if ( (unsigned __int64)v161 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_206;
    v30 = malloc(8 * v161 + 8);
    ptr = v30;
    if ( !v30 )
      goto LABEL_200;
  }
  else
  {
    ptr = 0LL;
  }
  v148 = v11;
  v167 = (a9 & 1u) < 1 ? 6 : 4;
  v141 = 2 * (v11 <= v10) - 1;
  v31 = v10;
  if ( v11 <= v10 )
    v31 = v11;
  v137 = v31;
  v32 = v10;
  if ( v11 >= v10 )
    v32 = v11;
  v134 = v32;
  v33 = 8;
  v143 = *(_DWORD *)(v121 + 180);
  if ( v133 )
  {
    v34 = 4;
    if ( *(_DWORD *)(v121 + 180) != 1 )
      v34 = 4 * ((v138 | *(_QWORD *)(v128 + 24) & 0x400000LL) == 0);
    v33 = (2 * (v11 <= v10)) | v34 | (v138 != 0);
  }
  if ( v11 < v137 || v11 > v134 )
    goto LABEL_123;
  v35 = 0LL;
  if ( v11 <= v10 )
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
      if ( v137 > v11 )
        goto LABEL_123;
      v37 = 0;
      v38 = v11;
      do
      {
        v39 = 0LL;
        if ( v136 > v38 )
          v39 = *(unsigned __int8 *)(v135 + v38);
        if ( v138 )
          v39 = *(unsigned __int8 *)(v138 + v39);
        if ( v133[v39] )
        {
          if ( v37 )
          {
            v148 = v38;
            v11 = v38;
          }
          goto LABEL_62;
        }
        --v38;
        v37 = 1;
      }
      while ( v38 >= v137 );
      v148 = v38;
      v30 = ptr;
      v130 = 1;
      goto LABEL_133;
    case 2:
      if ( v134 <= v11 )
        goto LABEL_117;
      v60 = v11 + 1;
      if ( v133[*(unsigned __int8 *)(v135 + v11)] )
        goto LABEL_62;
      while ( 1 )
      {
        v11 = v60;
        if ( v134 == v60 )
          break;
        v61 = *(unsigned __int8 *)(v135 + v60++);
        if ( v133[v61] )
          goto LABEL_229;
      }
      v148 = v134;
      goto LABEL_117;
    case 3:
      if ( v134 <= v11 )
        goto LABEL_117;
      v57 = v11 + 1;
      if ( v133[*(unsigned __int8 *)(v138 + *(unsigned __int8 *)(v135 + v11))] )
        goto LABEL_62;
      break;
    case 4:
      goto LABEL_62;
    default:
      goto LABEL_185;
  }
  while ( 1 )
  {
    v11 = v57;
    if ( v134 == v57 )
      break;
    v58 = *(unsigned __int8 *)(v138 + *(unsigned __int8 *)(v135 + v57++));
    if ( v133[v58] )
    {
LABEL_229:
      v148 = v11;
      goto LABEL_62;
    }
  }
  v148 = v134;
LABEL_117:
  if ( v134 == v11 )
  {
    v59 = 0LL;
    if ( v136 > v134 )
      v59 = *(unsigned __int8 *)(v135 + v134);
    if ( v138 )
      v59 = *(unsigned __int8 *)(v138 + v59);
    if ( !v133[v59] )
    {
LABEL_123:
      v30 = ptr;
      v130 = 1;
      goto LABEL_133;
    }
  }
LABEL_62:
  v130 = sub_40A050((__int64)&v154, v11, a9);
  if ( v130 )
    goto LABEL_132;
  if ( v143 != 1 && v159 && *v156 == -1 )
    goto LABEL_182;
  v40 = (_QWORD *)v178;
  v187 = 0;
  v184 = 0LL;
  v41 = *(__int64 **)(v178 + 72);
  v183 = 0LL;
  v146 = 0;
  v119 = v162;
  if ( *((_BYTE *)v41 + 104) < 0 )
  {
    v42 = sub_409D60((__int64)&v154, v162 - 1, v179);
    if ( v42 & 1 )
    {
      v41 = (__int64 *)v40[10];
LABEL_226:
      if ( v41 )
        goto LABEL_72;
      v130 = v146;
      if ( v146 != 12 )
        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 0x431u, "check_matching");
LABEL_132:
      v30 = ptr;
      goto LABEL_133;
    }
    if ( v42 )
    {
      if ( (v42 & 6) == 6 )
      {
        v41 = (__int64 *)v40[12];
      }
      else if ( v42 & 2 )
      {
        v41 = (__int64 *)v40[11];
      }
      else
      {
        if ( !(v42 & 4) )
          goto LABEL_72;
        v41 = sub_4092E0(&v146, v40, v41[10], v42);
      }
      goto LABEL_226;
    }
  }
LABEL_72:
  if ( !ptr || (v43 = v40[19] == 0LL, *((_QWORD *)ptr + v119) = v41, v43) )
  {
    v144 = v145;
    v44 = *((_BYTE *)v41 + 104);
    goto LABEL_75;
  }
  v114 = sub_409C10((__int64)&v154, v41 + 2, v41 + 3, 0LL);
  v146 = v114;
  if ( v114 )
    goto LABEL_278;
  v44 = *((_BYTE *)v41 + 104);
  if ( v44 & 0x40 )
  {
    v114 = sub_40DBD0((__int64)&v154, v41 + 2, v41 + 3);
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
  if ( v44 & 0x10 )
  {
    if ( *((_BYTE *)v41 + 104) >= 0 || (v122 = (void *)sub_409F80((__int64)&v154, v41[2], v41 + 3, v119)) != 0LL )
    {
      v45 = v119;
      LOBYTE(v122) = 1;
      if ( !v129 )
        goto LABEL_104;
    }
  }
  v46 = v162;
  v124 = v45;
  v131 = v142;
LABEL_84:
  if ( v166 <= v46 )
    goto LABEL_141;
  v116 = v46 + 1;
  if ( (v46 + 1 < v161 || v161 >= v164) && (v116 < v159 || v159 >= v164) )
  {
    if ( !(v41[13] & 0x20) )
      goto LABEL_88;
  }
  else
  {
    v64 = sub_4074B0(&v154, (unsigned int)(v46 + 2));
    v146 = v64;
    if ( v64 )
    {
      if ( v64 != 12 )
        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 0x468u, "check_matching");
      goto LABEL_206;
    }
    v46 = v162;
    if ( !(v41[13] & 0x20) )
      goto LABEL_88;
  }
  v65 = (__int64 *)v178;
  if ( v41[2] <= 0 )
    goto LABEL_203;
  v66 = 0LL;
  v67 = v46;
  v132 = (_QWORD *)(v178 + 216);
  do
  {
    v77 = *v65;
    v78 = *(_QWORD *)(v41[3] + 8 * v66);
    v79 = *v65 + 16LL * *(_QWORD *)(v41[3] + 8 * v66);
    if ( !(*(_BYTE *)(v79 + 10) & 0x10) )
      goto LABEL_163;
    v80 = *(_DWORD *)(v79 + 8);
    if ( !(v80 & 0x3FF00) )
      goto LABEL_155;
    v127 = *v65;
    v126 = v67;
    v81 = sub_409D60((__int64)&v154, v67, v179);
    v67 = v126;
    v77 = v127;
    if ( v80 & 0x400 )
    {
      if ( !(v81 & 1) || v80 & 0x800 )
        goto LABEL_163;
    }
    else if ( v80 & 0x800 && v81 & 1 )
    {
      goto LABEL_163;
    }
    if ( (!(v80 & 0x2000) || v81 & 2) && (!((v80 >> 8) & 0x80) || v81 & 8) )
    {
LABEL_155:
      v68 = sub_40C7B0(v77, v132, v78, (__int64)&v154, v67);
      if ( v68 )
      {
        v69 = v162 + v68;
        if ( v187 >= v68 )
          v68 = v187;
        v187 = v68;
        v70 = sub_407600(&v154, v69);
        v147 = v70;
        if ( v70 )
        {
LABEL_194:
          v76 = ptr;
LABEL_195:
          v146 = v70;
          if ( !v76 )
            goto LABEL_199;
LABEL_196:
          v51 = 0LL;
LABEL_92:
          v51 = sub_40E450(&v146, (__int64)&v154, v51);
LABEL_93:
          if ( !v51 )
          {
            v30 = ptr;
            if ( v146 )
              goto LABEL_200;
            if ( ptr && !(!v129 & (unsigned __int8)v122) )
            {
              while ( 2 )
              {
                v52 = v162;
                v53 = 0;
                do
                {
                  v54 = v52 + 1;
                  if ( v183 < v52 + 1 )
                  {
                    v45 = v124;
                    if ( v53 )
                      v162 = v52;
                    goto LABEL_102;
                  }
                  ++v52;
                  v53 = 1;
                }
                while ( !*((_QWORD *)v30 + v54) );
                v162 = v54;
                v63 = sub_40E450(&v146, (__int64)&v154, 0LL);
                if ( !v146 )
                {
                  if ( !v63 )
                  {
                    v30 = ptr;
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
              v180 = v45;
              if ( *(_BYTE *)(v128 + 56) & 0x10 || a7 <= 1 )
              {
                if ( !*(_QWORD *)(v121 + 152) )
                  goto LABEL_131;
                v55 = ptr;
                v181 = (void *)sub_409F80(
                                 (__int64)&v154,
                                 *(_QWORD *)(*((_QWORD *)ptr + v45) + 16LL),
                                 (__int64 *)(*((_QWORD *)ptr + v45) + 24LL),
                                 v45);
                goto LABEL_208;
              }
              v55 = ptr;
              v56 = (void *)sub_409F80(
                              (__int64)&v154,
                              *(_QWORD *)(*((_QWORD *)ptr + v45) + 16LL),
                              (__int64 *)(*((_QWORD *)ptr + v45) + 24LL),
                              v45);
              v181 = v56;
              if ( !(*(_BYTE *)(v121 + 176) & 1) )
              {
                if ( !*(_QWORD *)(v121 + 152) )
                {
LABEL_131:
                  if ( !a7 )
                    goto LABEL_132;
                  v97 = (__int64)(a8 + 2);
                  if ( a7 <= 1 )
                  {
                    *a8 = 0LL;
                    a8[1] = v180;
                  }
                  else
                  {
                    do
                    {
                      *(_QWORD *)(v97 + 8) = -1LL;
                      v97 += 16LL;
                      *(_QWORD *)(v97 - 16) = -1LL;
                    }
                    while ( &a8[2 * a7] != (__int64 *)v97 );
                    *a8 = 0LL;
                    a8[1] = v180;
                    if ( !(*(_BYTE *)(v128 + 56) & 0x10) )
                    {
                      v98 = 0;
                      if ( *(_BYTE *)(v121 + 176) & 1 )
                        v98 = *(_QWORD *)(v121 + 152) > 0LL;
                      v99 = sub_40D160((_QWORD *)v128, &v154, a7, a8, v98);
                      if ( !v99 )
                      {
                        v100 = *a8;
                        goto LABEL_248;
                      }
LABEL_270:
                      v30 = ptr;
                      v130 = v99;
                      goto LABEL_133;
                    }
                  }
                  v100 = 0LL;
LABEL_248:
                  v101 = v174;
                  v102 = v159;
                  v103 = 0LL;
                  v104 = v157;
                  v105 = v160;
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
                    while ( &a8[2 * (a7 + v139)] != v109 );
                  }
                  v30 = ptr;
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
                v56 = v181;
              }
              v118 = (__int64 *)v178;
              if ( v45 > 0x1FFFFFFFFFFFFFFELL )
              {
                v30 = v55;
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
                    v30 = ptr;
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
                  v120 = sub_40E610((__int64)&v154, &v149);
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
                        v93 = *((_QWORD *)ptr + v45);
                        if ( v93 && *(_BYTE *)(v93 + 104) & 0x10 )
                        {
                          v90 = v45 + 1;
                          v56 = (void *)sub_409F80((__int64)&v154, *(_QWORD *)(v93 + 16), (__int64 *)(v93 + 24), v45);
                          goto LABEL_213;
                        }
                      }
                      free(v91);
                      free(v92);
                      sub_407CA0(&v154);
                      v11 = v148;
LABEL_182:
                      v11 += v141;
                      v148 = v11;
                      if ( v11 >= v137 && v11 <= v134 )
                      {
                        v36 = v140;
                        if ( v140 > 4 )
                        {
LABEL_185:
                          v86 = v134;
                          while ( 1 )
                          {
                            v88 = v11 - v158;
                            if ( v160 <= v11 - v158 )
                            {
                              v117 = v86;
                              v89 = sub_40A050((__int64)&v154, v11, a9);
                              v86 = v117;
                              if ( v89 )
                              {
                                v130 = v89;
                                goto LABEL_132;
                              }
                              v88 = v11 - v158;
                            }
                            v87 = v133;
                            if ( v136 > v11 )
                              v87 = &v133[*(unsigned __int8 *)(v155 + v88)];
                            if ( *v87 )
                              goto LABEL_62;
                            v11 += v141;
                            v148 = v11;
                            if ( v11 < v137 || v11 > v86 )
                              goto LABEL_123;
                          }
                        }
                        goto LABEL_50;
                      }
                      goto LABEL_123;
                    }
                    v85 = sub_4097D0(v118, (__int64)v91, (__int64)v92, v90);
                    free(v92);
                    if ( !v85 )
                    {
LABEL_221:
                      v94 = (__int64)v56;
                      v95 = v45;
                      v96 = v94;
                      free(ptr);
                      ptr = v91;
                      v181 = (void *)v96;
                      v180 = v95;
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
                  v85 = sub_40E610((__int64)&v154, &v149);
                  free(v153);
                  if ( v85 )
                    goto LABEL_272;
                  if ( *v91 )
                    goto LABEL_221;
                  free(v91);
                }
LABEL_181:
                sub_407CA0(&v154);
                v11 = v148;
                goto LABEL_182;
              }
            }
LABEL_206:
            v30 = ptr;
            v130 = 12;
            goto LABEL_133;
          }
LABEL_77:
          v46 = v162;
          v43 = ((v41 == v51) & v144) == 0;
          v144 &= v41 == v51;
          v47 = v116;
          if ( v43 )
            v47 = v119;
          v119 = v47;
          v48 = *((_BYTE *)v51 + 104);
          if ( v48 & 0x10 && (v48 >= 0 || sub_409F80((__int64)&v154, v51[2], v51 + 3, v162)) )
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
        v125 = (char *)ptr + 8 * v69;
        v71 = v65[6] + 24LL * *(_QWORD *)(v65[3] + 8 * v78);
        if ( *(_QWORD *)v125 )
        {
          v70 = sub_409150((__int64)&v149, *(_QWORD *)(*(_QWORD *)v125 + 80LL), v71);
          v147 = v70;
          if ( v70 )
            goto LABEL_194;
          v72 = sub_409D60((__int64)&v154, v69 - 1, v179);
          v73 = (__int64 **)((char *)ptr + 8 * v69);
          v74 = sub_4092E0(&v147, v65, (__int64)&v149, v72);
          v75 = v150;
          *v73 = v74;
          free(v75);
          v76 = ptr;
          if ( *((_QWORD *)ptr + v69) )
            goto LABEL_162;
LABEL_171:
          v70 = v147;
          if ( v147 )
            goto LABEL_195;
          goto LABEL_162;
        }
        v149 = _mm_loadu_si128((const __m128i *)v71);
        v150 = *(void **)(v71 + 16);
        v82 = sub_409D60((__int64)&v154, v69 - 1, v179);
        v83 = sub_4092E0(&v147, v65, (__int64)&v149, v82);
        v76 = ptr;
        *(_QWORD *)v125 = v83;
        if ( !v76[v69] )
          goto LABEL_171;
      }
LABEL_162:
      v67 = v162;
    }
LABEL_163:
    ++v66;
  }
  while ( v66 < v41[2] );
  v46 = v67;
LABEL_203:
  v146 = 0;
LABEL_88:
  v162 = v46 + 1;
  v49 = *(unsigned __int8 *)(v155 + v46);
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
      if ( sub_409D60((__int64)&v154, v162 - 1, v179) & 1 )
        v51 = *(__int64 **)(v84 + 8 * v49 + 2048);
      else
        v51 = *(__int64 **)(v84 + 8 * v49);
LABEL_91:
      if ( !ptr )
        goto LABEL_93;
      goto LABEL_92;
    }
    if ( sub_40AA70(v178, v41) )
      continue;
    break;
  }
  v146 = 12;
  if ( ptr )
    goto LABEL_196;
LABEL_199:
  v30 = 0LL;
LABEL_200:
  v130 = 12;
LABEL_133:
  free(v30);
  if ( *(_QWORD *)(v121 + 152) )
  {
    sub_407CA0(&v154);
    free(v189);
    free(v186);
  }
  sub_407C60((__int64)&v154);
  return v130;
}

__int64 __fastcall sub_4100A0(__int64 a1, const __m128i *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r14
  __int64 *v5; // rbp
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
  __m128i v45; // xmm1
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
  __int64 v56; // r10
  __int64 v57; // r9
  __int64 v58; // r11
  __int64 *v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rdx
  int v62; // er13
  __int64 v63; // r13
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r10
  _QWORD *v69; // [rsp+8h] [rbp-D0h]
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
  unsigned int v82; // [rsp+5Ch] [rbp-7Ch]
  __m128i v83; // [rsp+60h] [rbp-78h]
  __m128i v84; // [rsp+70h] [rbp-68h]
  __m128i v85; // [rsp+80h] [rbp-58h]
  void *ptr; // [rsp+90h] [rbp-48h]

  v4 = a3;
  v5 = a4;
  v6 = 8 * a3;
  v7 = a2;
  v8 = *(__int64 **)(a1 + 152);
  v9 = v5[1];
  v72 = v6;
  v10 = *(_QWORD *)(a1 + 184) + v6;
  v69 = (_QWORD *)a1;
  v11 = *(_QWORD *)v10;
  v82 = 0;
  v71 = v11;
  if ( !v11 )
  {
    if ( v9 )
    {
      v43 = (_QWORD *)(a2->m128i_i64[0] + v72);
      *v43 = sub_4095E0(&v82, v8, (__int64)v5);
      result = v82;
    }
    else
    {
      *(_QWORD *)(a2->m128i_i64[0] + v72) = 0LL;
      result = 0LL;
    }
    return result;
  }
  if ( !v9 )
  {
    *(_QWORD *)(a2->m128i_i64[0] + 8 * v4) = 0LL;
    result = 0LL;
    if ( !(*(_BYTE *)(*(_QWORD *)v10 + 104LL) & 0x40) )
      return result;
    goto LABEL_17;
  }
  v83.m128i_i32[0] = 0;
  v13 = sub_4095E0(&v83, v8, (__int64)v5);
  result = v83.m128i_u32[0];
  if ( v83.m128i_i32[0] )
    return result;
  v14 = v13[7];
  v73 = (__int64)(v13 + 7);
  if ( !v14 )
  {
    v15 = v5[1];
    v13[8] = 0LL;
    v13[7] = v15;
    v16 = malloc(8 * v15);
    v13[9] = v16;
    if ( !v16 )
      return 12LL;
    v17 = v5[1] <= 0;
    v83.m128i_i32[0] = 0;
    if ( !v17 )
    {
      do
      {
        v83.m128i_i32[0] = sub_408570(v73, v8[7] + 24LL * *(_QWORD *)(v5[2] + 8 * v14));
        if ( v83.m128i_i32[0] )
          return 12LL;
      }
      while ( ++v14 < v5[1] );
    }
  }
  v75 = v71 + 8;
  result = sub_408AE0(v5, v71 + 8, v73);
  v82 = result;
  if ( (_DWORD)result )
    return result;
  if ( a2[2].m128i_i64[1] )
  {
    v74 = v69[27];
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
      if ( v4 <= v49[2] || v4 > v49[1] )
        goto LABEL_79;
      v50 = *v8;
      v51 = v5[1];
      v52 = *(_QWORD *)(*v8 + 16LL * *v49);
      if ( v4 != v49[3] )
      {
        v53 = 0LL;
        if ( v51 <= 0 )
          goto LABEL_79;
        v77 = v7;
        v54 = *(_QWORD *)(*v8 + 16LL * *v49);
        while ( 1 )
        {
          v55 = 16LL * *(_QWORD *)(v5[2] + 8 * v53) + v50;
          if ( (unsigned int)*(unsigned __int8 *)(v55 + 8) - 8 > 1 || v54 != *(_QWORD *)v55 )
          {
            if ( ++v53 >= v5[1] )
              goto LABEL_78;
          }
          else
          {
            result = sub_40A840(v8, *(_QWORD *)(v5[2] + 8 * v53), (__int64)v5, v75);
            if ( (_DWORD)result )
              return result;
            if ( ++v53 >= v5[1] )
            {
LABEL_78:
              v7 = v77;
              goto LABEL_79;
            }
          }
          v50 = *v8;
        }
      }
      if ( v51 <= 0 )
        goto LABEL_79;
      v56 = v5[2];
      v57 = -1LL;
      v58 = v56 + 8 * v51;
      v59 = (__int64 *)v5[2];
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
          ++v59;
          if ( (__int64 *)v58 == v59 )
            goto LABEL_91;
        }
        if ( v62 == 9 && v52 == *(_QWORD *)v61 )
          v57 = *v59;
        ++v59;
      }
      while ( (__int64 *)v58 != v59 );
LABEL_91:
      v63 = v57;
      v78 = v57;
      if ( v60 >= 0 )
      {
        result = sub_40A840(v8, v60, (__int64)v5, v75);
        if ( (_DWORD)result )
          return result;
        if ( v63 >= 0 && v5[1] > 0 )
        {
          v56 = v5[2];
LABEL_93:
          v80 = v7;
          v64 = 0LL;
          while ( 1 )
          {
            v65 = 24LL * *(_QWORD *)(v56 + 8 * v64) + v8[7];
            if ( sub_408030(*(_QWORD *)(v65 + 8), (__int64 *)(v65 + 16), v78)
              || sub_408030(*(_QWORD *)(v8[6] + v67 + 8), (__int64 *)(v8[6] + v67 + 16), v66) )
            {
              ++v64;
            }
            else
            {
              result = sub_40A840(v8, v68, (__int64)v5, v75);
              if ( (_DWORD)result )
                return result;
            }
            if ( v5[1] <= v64 )
              break;
            v56 = v5[2];
          }
          v7 = v80;
          goto LABEL_79;
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
  *v18 = sub_4095E0(&v82, v8, (__int64)v5);
  result = v82;
  if ( v82 )
    return result;
  result = 0LL;
  if ( !(*(_BYTE *)(*(_QWORD *)(v69[23] + v72) + 104LL) & 0x40) )
    return result;
LABEL_17:
  v19 = 0LL;
  for ( i = v69[25]; v19 < i; i = v22 )
  {
    v21 = v69[27];
    v22 = (v19 + i) / 2;
    if ( v4 <= *(_QWORD *)(v21 + 40 * v22 + 8) )
    {
      while ( v19 < v22 )
      {
        v44 = (v19 + v22) / 2;
        if ( v4 > *(_QWORD *)(v21 + 40 * v44 + 8) )
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
  if ( v69[25] <= v19 )
    return 0LL;
  v79 = 40 * v19;
  if ( v4 != *(_QWORD *)(v69[27] + 40 * v19 + 8) )
    return 0LL;
  if ( v19 == -1 )
    return 0LL;
  v23 = (__int64 *)v69[19];
  v83.m128i_i64[0] = 0LL;
  if ( *(_QWORD *)(v71 + 16) <= 0LL )
    return 0LL;
  v76 = v4;
  v24 = 0LL;
  v25 = v7;
  v81 = v19;
  while ( 1 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(v71 + 24) + 8 * v24);
    v27 = *(_BYTE *)(*v23 + 16LL * *(_QWORD *)(*(_QWORD *)(v71 + 24) + 8 * v24) + 8);
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
  for ( j = v69[27] + v79; ; j += 40LL )
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
      || !sub_408030(*(_QWORD *)(v31 + 16), (__int64 *)(v31 + 24), v30)
      || (unsigned __int8)sub_4082C0(v69, &v25[2].m128i_i64[1], (const __m128i *)v25[3].m128i_i64, v26, v76, v32, v33) )
    {
      goto LABEL_50;
    }
    if ( !v83.m128i_i64[0] )
    {
      v45 = _mm_load_si128(v25 + 1);
      v46 = _mm_load_si128(v25 + 2);
      v47 = (void *)v25[3].m128i_i64[0];
      v83 = _mm_load_si128(v25);
      v84 = v45;
      v85 = v46;
      ptr = v47;
      result = sub_4090D0((__int64)&v85, (__int64)v25[2].m128i_i64);
      if ( (_DWORD)result )
        goto LABEL_62;
    }
    v84.m128i_i64[0] = v26;
    v84.m128i_i64[1] = v76;
    if ( !(unsigned __int8)sub_406A20(&v85, v28) )
      break;
    v34 = *(_QWORD *)(v83.m128i_i64[0] + v72);
    result = sub_40E610((__int64)v69, &v83);
    if ( (_DWORD)result )
      goto LABEL_62;
    v35 = v25->m128i_i64[1];
    v36 = v83.m128i_i64[0];
    if ( v35 )
    {
      result = sub_4097D0(v23, v35, v83.m128i_i64[0], v76 + 1);
      if ( (_DWORD)result )
        goto LABEL_62;
      v36 = v83.m128i_i64[0];
    }
    v37 = v85.m128i_i64[1];
    *(_QWORD *)(v36 + v72) = v34;
    v38 = sub_408030(v37, (__int64 *)&ptr, v28) - 1;
    if ( v38 >= 0 && v39 > v38 )
    {
      v85.m128i_i64[1] = v39 - 1;
      sub_4081A0(&v85.m128i_i64[1], v40, v38);
    }
    j = v69[27] + 40 * v28;
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
    result = v70;
  }
  return result;
}

__int64 __fastcall sub_4108D0(_DWORD *a1, __int64 a2, char *a3, int a4, char a5, char a6)
{
  __int64 v6; // r10
  __int64 v7; // r11
  char *v8; // rbp
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
  __int64 v25; // [rsp+0h] [rbp-38h]
  char v26; // [rsp+8h] [rbp-30h]

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = *(_QWORD *)(a2 + 72);
  if ( *(_DWORD *)(a2 + 144) != 1 )
  {
    v10 = sub_407FE0(a2, *(_QWORD *)(a2 + 72));
    if ( v10 > 1 )
    {
      v15 = *(_QWORD *)(v6 + 16);
      *a1 = 1;
      a1[2] = *(_DWORD *)(v15 + 4 * v9);
      *(_QWORD *)(v6 + 72) = v9 + v10;
      return 0LL;
    }
  }
  v11 = v8[8];
  v12 = v9 + v7;
  *(_QWORD *)(v6 + 72) = v12;
  if ( (v11 & 0xFB) != 26 && v11 != 28 )
  {
    if ( v11 != 22 || a6 || (sub_406540(&v25, v6, a5), result = 11LL, v26 == 21) )
    {
      v13 = *v8;
      *a1 = 0;
      *((_BYTE *)a1 + 8) = v13;
      result = 0LL;
    }
    return result;
  }
  if ( v12 >= *(_QWORD *)(v6 + 104) )
    return 7LL;
  v16 = *v8;
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
        v23 = (int)sub_407FE0(v6, v12);
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
    v11 = v8[8];
    v12 = *(_QWORD *)(v6 + 72);
  }
  *(_QWORD *)(v6 + 72) = v20 + 1;
  *(_BYTE *)(*((_QWORD *)a1 + 1) + v18) = 0;
  v22 = v8[8];
  if ( v22 == 28 )
  {
    *a1 = 2;
    result = 0LL;
  }
  else if ( v22 == 30 )
  {
    *a1 = 4;
    result = 0LL;
  }
  else
  {
    result = 0LL;
    if ( v22 == 26 )
      *a1 = 3;
  }
  return result;
}

__int64 __fastcall sub_410AF0(unsigned __int8 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 *v6; // r13
  int v7; // eax
  unsigned __int8 *v8; // rbx
  unsigned __int8 v9; // bp
  unsigned __int8 v10; // r14
  __int64 v11; // rax
  int v12; // er14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned __int8 v16; // r14
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
  char v28; // [rsp+10h] [rbp-48h]
  char v29; // [rsp+18h] [rbp-40h]

  v3 = a2[9];
  if ( a2[13] <= v3 )
  {
    a1[8] = 2;
    return 0LL;
  }
  v4 = a3;
  v5 = a2[1];
  v6 = a2;
  v7 = *((_DWORD *)a2 + 36);
  v8 = a1;
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
      a1[10] = (((v9 == 95) | ((*__ctype_b_loc())[v9] >> 3) & 1) << 6) | v10;
      v13 = v26;
LABEL_7:
      switch ( v9 )
      {
        case 0xAu:
          result = 1LL;
          if ( v4 & 0x800 )
            goto LABEL_41;
          break;
        case 0x24u:
          if ( v4 & 8
            || (v18 = v3 + 1, v18 == a2[11])
            || (a2[9] = v18, sub_410AF0(&v28, a2, v4), v19 = v29, --a2[9], v20 = v19 - 9, result = 1LL, v20 <= 1u) )
          {
            a1[8] = 12;
            result = 1LL;
            *(_DWORD *)a1 = 32;
          }
          break;
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
          a1[8] = 11;
          result = 1LL;
          break;
        case 0x2Bu:
          result = 1LL;
          if ( !(v4 & 0x402) )
            goto LABEL_28;
          break;
        case 0x2Eu:
          a1[8] = 5;
          result = 1LL;
          break;
        case 0x3Fu:
          result = 1LL;
          if ( !(v4 & 0x402) )
            goto LABEL_31;
          break;
        case 0x5Bu:
          a1[8] = 20;
          result = 1LL;
          break;
        case 0x5Eu:
          if ( !(v4 & 0x800008) && v3 && (*(_BYTE *)(v13 + v3 - 1) != 10 || !(v4 & 0x800)) )
            goto LABEL_39;
          a1[8] = 12;
          result = 1LL;
          *(_DWORD *)a1 = 16;
          break;
        case 0x7Bu:
          result = 1LL;
          if ( (v4 & 0x1200) == 4608 )
            goto LABEL_37;
          break;
        case 0x7Cu:
          if ( (v4 & 0x8400) != 0x8000 )
            goto LABEL_39;
LABEL_41:
          a1[8] = 10;
          result = 1LL;
          break;
        case 0x7Du:
          result = 1LL;
          if ( (v4 & 0x1200) == 4608 )
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
      a1[10] = (((v12 == 95) | (iswalnum(*(_DWORD *)(v11 + 4 * v3)) != 0)) << 6) | a1[10] & 0xBF;
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
      v8[8] = 1;
      v16 = v24;
      *v8 = v24;
      v27 = v24;
      goto LABEL_18;
    }
  }
  v22 = *a2;
  v23 = v6[5];
  if ( *((_BYTE *)v6 + 140) )
  {
    v16 = *(_BYTE *)(*(_QWORD *)(v6[3] + 8 * v14) + v23 + v22);
    v27 = v16;
    if ( *(_BYTE *)(*(_QWORD *)(v6[3] + 8 * v14) + v23 + v22) & 0x80 )
    {
LABEL_15:
      v27 = *(unsigned __int8 *)(v5 + v3 + 1);
      v16 = *(_BYTE *)(v5 + v3 + 1);
      goto LABEL_16;
    }
  }
  else
  {
    v16 = *(_BYTE *)(v14 + v22 + v23);
    v27 = *(unsigned __int8 *)(v14 + v22 + v23);
  }
LABEL_16:
  *v8 = v16;
  v8[8] = 1;
  if ( v7 > 1 )
  {
    v17 = *(_DWORD *)(v6[2] + 4 * v14);
LABEL_18:
    v8[10] = (((v17 == 95) | (iswalnum(v17) != 0)) << 6) | v8[10] & 0xBF;
    goto LABEL_19;
  }
  v8[10] = v8[10] & 0xBF | (((v16 == 95) | ((*__ctype_b_loc())[v16] >> 3) & 1) << 6);
LABEL_19:
  switch ( v16 )
  {
    case 0x27u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        v8[8] = 12;
        *(_DWORD *)v8 = 128;
      }
      break;
    case 0x28u:
      result = 2LL;
      if ( !(v4 & 0x2000) )
LABEL_23:
        v8[8] = 8;
      break;
    case 0x29u:
      result = 2LL;
      if ( !(v4 & 0x2000) )
LABEL_25:
        v8[8] = 9;
      break;
    case 0x2Bu:
      result = 2LL;
      if ( (v4 & 0x402) == 2 )
LABEL_28:
        v8[8] = 18;
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
        v8[8] = 4;
        *(_QWORD *)v8 = v27 - 49;
      }
      break;
    case 0x3Cu:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        v8[8] = 12;
        *(_DWORD *)v8 = 6;
      }
      break;
    case 0x3Eu:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        v8[8] = 12;
        *(_DWORD *)v8 = 9;
      }
      break;
    case 0x3Fu:
      result = 2LL;
      if ( (v4 & 0x402) == 2 )
LABEL_31:
        v8[8] = 19;
      break;
    case 0x42u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        v8[8] = 12;
        *(_DWORD *)v8 = 512;
      }
      break;
    case 0x53u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
        v8[8] = 35;
      break;
    case 0x57u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
        v8[8] = 33;
      break;
    case 0x60u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        v8[8] = 12;
        *(_DWORD *)v8 = 64;
      }
      break;
    case 0x62u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
      {
        v8[8] = 12;
        *(_DWORD *)v8 = 256;
      }
      break;
    case 0x73u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
        v8[8] = 34;
      break;
    case 0x77u:
      result = 2LL;
      if ( !(v4 & 0x80000) )
        v8[8] = 32;
      break;
    case 0x7Bu:
      result = 2LL;
      if ( (v4 & 0x1200) == 512 )
LABEL_37:
        v8[8] = 23;
      break;
    case 0x7Cu:
      result = 2LL;
      if ( !(v4 & 0x8400) )
        v8[8] = 10;
      break;
    case 0x7Du:
      result = 2LL;
      if ( (v4 & 0x1200) == 512 )
LABEL_47:
        v8[8] = 24;
      break;
    default:
      result = 2LL;
      break;
  }
  return result;
}

__int64 __fastcall sub_4111A0(__int64 *a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  __int64 v8; // rbx

  v3 = a3;
  v4 = -1LL;
  while ( 1 )
  {
    v5 = sub_410AF0(a2, a1, v3);
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

__int64 __fastcall sub_411260(__int64 *a1, __int64 *a2, __m128i *a3, __int64 a4, char *a5, _DWORD *a6)
{
  char v6; // al
  __m128i *v7; // r12
  __int64 *v8; // r15
  int v9; // eax
  unsigned __int64 v10; // rbp
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r13
  __m128i v17; // xmm0
  char *v18; // rbp
  char v19; // al
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
  char *v34; // rax
  __int64 v35; // rax
  __m128i v36; // xmm0
  char v37; // al
  __int64 v38; // rax
  char *v39; // r14
  char *v40; // rax
  __int64 v41; // rdx
  bool v42; // zf
  void **v43; // r13
  int v44; // ebx
  char v45; // al
  char v46; // r9
  int v47; // eax
  int v48; // eax
  char v49; // dl
  _DWORD *v50; // rbx
  __int64 v51; // rsi
  char *v52; // rcx
  const char *v53; // rdx
  _DWORD *v54; // r9
  bool v55; // r8
  char *v56; // rax
  _QWORD *v57; // rbx
  int *v58; // rbp
  char *v59; // r14
  __int64 v60; // rax
  char *v61; // r13
  __int64 v62; // rax
  int v63; // er14
  char v64; // al
  char v65; // al
  _QWORD *v66; // r13
  int *v67; // rbp
  char *v68; // rax
  char *v69; // rbx
  char *v70; // r14
  char *v71; // rcx
  char *v72; // rax
  int v73; // eax
  char v74; // al
  void *v75; // rdx
  _DWORD *v76; // rax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  _DWORD *v80; // r9
  int v81; // eax
  char v82; // r10
  int v83; // eax
  void **v84; // rdx
  int v85; // esi
  unsigned __int8 v86; // di
  int v87; // ecx
  const char *v88; // r9
  unsigned int v89; // er8
  unsigned int v90; // er9
  void *v91; // rax
  _DWORD *v92; // rcx
  _DWORD *v93; // rcx
  __int64 v94; // rax
  size_t v95; // rsi
  _QWORD *v96; // rax
  int v97; // edx
  __int64 v98; // rcx
  __int64 j; // rax
  _QWORD *v100; // rbp
  int *v101; // rbx
  char *v102; // rax
  char *v103; // rsi
  _QWORD *v104; // rax
  char *v105; // rax
  wint_t v106; // eax
  int v107; // ebx
  int v108; // ebp
  const unsigned __int16 **v109; // rax
  __int64 v110; // rsi
  int v111; // er9
  __int64 v112; // rdi
  __int64 i; // rax
  wint_t v114; // eax
  void *v115; // rdi
  void *v116; // rax
  char *ptr; // [rsp+0h] [rbp-118h]
  __int64 ptra; // [rsp+0h] [rbp-118h]
  _QWORD *ptrb; // [rsp+0h] [rbp-118h]
  char *ptrc; // [rsp+0h] [rbp-118h]
  __int64 v121; // [rsp+8h] [rbp-110h]
  __int64 v122; // [rsp+10h] [rbp-108h]
  char *v123; // [rsp+18h] [rbp-100h]
  __int64 v124; // [rsp+18h] [rbp-100h]
  void *v125; // [rsp+18h] [rbp-100h]
  __m128i v126; // [rsp+20h] [rbp-F8h]
  _DWORD *v127; // [rsp+30h] [rbp-E8h]
  __m128i *v128; // [rsp+38h] [rbp-E0h]
  void **v129; // [rsp+40h] [rbp-D8h]
  void *v130; // [rsp+48h] [rbp-D0h]
  size_t size; // [rsp+50h] [rbp-C8h]
  unsigned int v132; // [rsp+58h] [rbp-C0h]
  unsigned int v133; // [rsp+5Ch] [rbp-BCh]
  __int64 v134; // [rsp+68h] [rbp-B0h]
  int v135; // [rsp+70h] [rbp-A8h]
  void ***v136; // [rsp+78h] [rbp-A0h]
  int v137; // [rsp+80h] [rbp-98h]
  const char *v138; // [rsp+88h] [rbp-90h]
  char v139; // [rsp+90h] [rbp-88h]
  char v140; // [rsp+98h] [rbp-80h]
  void **v141; // [rsp+A0h] [rbp-78h]
  char v142; // [rsp+A8h] [rbp-70h]
  char v143; // [rsp+C0h] [rbp-58h]
  char v144; // [rsp+C8h] [rbp-50h]

  v122 = *a2;
  v6 = a3->m128i_i64[1];
  v7 = a3;
  v127 = a6;
  v121 = a4;
  v8 = a1;
  switch ( v6 )
  {
    case 1:
      v57 = (_QWORD *)(v122 + 112);
      v58 = (int *)(v122 + 128);
      v123 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), 0LL, 0LL, a3);
      if ( !v123 )
        goto LABEL_118;
      v59 = v123;
      if ( *(_DWORD *)(v122 + 180) <= 1 )
        goto LABEL_7;
      while ( 1 )
      {
        v60 = a1[9];
        if ( a1[13] <= v60 || v60 == a1[6] || *(_DWORD *)(a1[2] + 4 * v60) != -1 )
          break;
        a1[9] += (int)sub_410AF0((unsigned __int8 *)v7, a1, v121);
        v61 = sub_408CA0(v57, v58, 0LL, 0LL, v7);
        v144 = 16;
        v59 = sub_408CA0(v57, v58, v59, v61, (const __m128i *)&v143);
        if ( v59 == 0LL || v61 == 0LL )
          goto LABEL_118;
      }
      v123 = v59;
      goto LABEL_7;
    case 4:
      v62 = 1 << a3->m128i_i64[0];
      if ( !(v62 & *(_QWORD *)(v122 + 168)) )
      {
        v123 = 0LL;
        *v127 = 6;
        return (__int64)v123;
      }
      *(_QWORD *)(v122 + 160) |= v62;
      v123 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), 0LL, 0LL, a3);
      if ( !v123 )
        goto LABEL_118;
      ++*(_QWORD *)(v122 + 152);
      *(_BYTE *)(v122 + 176) |= 2u;
      goto LABEL_7;
    case 5:
      v123 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), 0LL, 0LL, a3);
      if ( !v123 )
        goto LABEL_118;
      if ( *(_DWORD *)(v122 + 180) > 1 )
        *(_BYTE *)(v122 + 176) |= 2u;
      goto LABEL_7;
    case 8:
      v12 = a2[6];
      ptr = a5;
      a2[6] = v12 + 1;
      a1[9] += (int)sub_410AF0((unsigned __int8 *)a3, a1, a4 | 0x800000);
      v13 = 0LL;
      if ( LOBYTE(v7->m128i_i64[1]) == 9 )
        goto LABEL_138;
      v13 = (_QWORD *)sub_412890(a1, a2, v7, v121, ptr + 1, v127);
      if ( *v127 )
        return 0LL;
      if ( LOBYTE(v7->m128i_i64[1]) != 9 )
      {
        if ( v13 )
          sub_4064D0(v13, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4076E0, 0LL);
        *v127 = 8;
        return 0LL;
      }
LABEL_138:
      if ( v12 <= 8 )
        *(_QWORD *)(v122 + 168) |= 1 << v12;
      v144 = 17;
      v72 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), v13, 0LL, (const __m128i *)&v143);
      v123 = v72;
      if ( v72 )
      {
        *((_QWORD *)v72 + 5) = v12;
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
      v63 = a3->m128i_i64[0];
      if ( !(a3->m128i_i64[0] & 0x30F) )
        goto LABEL_130;
      v64 = *(_BYTE *)(v122 + 176);
      if ( v64 & 0x10 )
        goto LABEL_130;
      v65 = v64 | 0x10;
      *(_BYTE *)(v122 + 176) = v65;
      if ( v65 & 8 )
      {
        v107 = 0;
        v108 = 0;
      }
      else
      {
        *(_QWORD *)(v122 + 184) = 287948901175001088LL;
        *(_QWORD *)(v122 + 192) = 576460745995190270LL;
        if ( v65 & 4 )
        {
          *(_OWORD *)(v122 + 200) = 0LL;
          v63 = a3->m128i_i64[0];
          goto LABEL_130;
        }
        v107 = 128;
        v108 = 2;
      }
      v109 = __ctype_b_loc();
      v110 = v122 + 8LL * v108;
      v111 = v107 + 256 - (v108 << 6);
      v112 = (__int64)&(*v109)[v107];
      do
      {
        for ( i = 0LL; i != 64; ++i )
        {
          if ( *(_BYTE *)(v112 + 2 * i) & 8 || v107 + (_DWORD)i == 95 )
            *(_QWORD *)(v110 + 184) |= 1LL << i;
        }
        v107 += 64;
        v110 += 8LL;
        v112 += 128LL;
      }
      while ( v111 != v107 );
LABEL_130:
      v66 = (_QWORD *)(v122 + 112);
      v67 = (int *)(v122 + 128);
      if ( (v63 - 256) & 0xFFFFFEFF )
      {
        v123 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), 0LL, 0LL, v7);
        if ( v123 )
        {
LABEL_135:
          v8[9] += (int)sub_410AF0((unsigned __int8 *)v7, v8, v121);
          return (__int64)v123;
        }
      }
      else
      {
        if ( v63 == 256 )
        {
          LODWORD(v7->m128i_i64[0]) = 6;
          v68 = sub_408CA0(v66, v67, 0LL, 0LL, v7);
          LODWORD(v7->m128i_i64[0]) = 9;
        }
        else
        {
          LODWORD(v7->m128i_i64[0]) = 5;
          v68 = sub_408CA0(v66, v67, 0LL, 0LL, v7);
          LODWORD(v7->m128i_i64[0]) = 10;
        }
        v69 = v68;
        v70 = sub_408CA0(v66, v67, 0LL, 0LL, v7);
        v144 = 10;
        v71 = sub_408CA0(v66, v67, v69, v70, (const __m128i *)&v143);
        v123 = v71;
        if ( v70 != 0LL && v69 != 0LL && v71 )
          goto LABEL_135;
      }
LABEL_118:
      *v127 = 12;
      return 0LL;
    case 20:
      v134 = 0LL;
      ptrb = calloc(0x20uLL, 1uLL);
      v43 = (void **)calloc(0x50uLL, 1uLL);
      if ( v43 == 0LL || ptrb == 0LL )
      {
        free(ptrb);
        free(v43);
        goto LABEL_118;
      }
      v44 = sub_406540(v7, (__int64)a1, v121);
      v45 = v7->m128i_i64[1];
      if ( v45 == 2 )
        goto LABEL_197;
      LOBYTE(v128) = 0;
      if ( v45 != 25 )
        goto LABEL_98;
      *((_BYTE *)v43 + 32) |= 1u;
      if ( v121 & 0x100 )
        *ptrb |= 0x400uLL;
      a1[9] += v44;
      v44 = sub_406540(v7, (__int64)a1, v121);
      v45 = v7->m128i_i64[1];
      if ( v45 == 2 )
      {
LABEL_197:
        *v127 = 2;
        goto LABEL_150;
      }
      LOBYTE(v128) = 1;
LABEL_98:
      if ( v45 == 21 )
        LOBYTE(v7->m128i_i64[1]) = 1;
      v126.m128i_i64[0] = 0LL;
      v46 = 1;
      v124 = 0LL;
      break;
    case 23:
      if ( a4 & 0x1000000 )
        goto LABEL_43;
LABEL_3:
      if ( a4 & 0x20 )
        goto LABEL_43;
      if ( a4 & 0x10 )
      {
        ptrc = a5;
        v79 = sub_410AF0((unsigned __int8 *)a3, a1, a4);
        v80 = v127;
        a1[9] += v79;
        return sub_411260(a1, a2, v7, v121, ptrc, v80);
      }
      if ( v6 == 9 )
      {
LABEL_136:
        if ( !(a4 & 0x20000) )
        {
          v123 = 0LL;
          *v127 = 16;
          return (__int64)v123;
        }
      }
LABEL_6:
      LOBYTE(a3->m128i_i64[1]) = 1;
      v123 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), 0LL, 0LL, a3);
      if ( !v123 )
        goto LABEL_118;
      goto LABEL_7;
    case 24:
      goto LABEL_6;
    case 32:
    case 33:
      v50 = v127;
      v51 = a1[15];
      v52 = "en_" + 2;
      v53 = "alnum";
      v54 = v127;
      v55 = v6 == 33;
      goto LABEL_107;
    case 34:
    case 35:
      v50 = v127;
      v51 = a1[15];
      v52 = "%s: invalid option -- '%c'\n" + 27;
      v53 = "space";
      v54 = v127;
      v55 = v6 == 35;
LABEL_107:
      v56 = sub_40C090(v122, v51, v53, v52, v55, v54);
      v123 = v56;
      if ( *v50 && !v56 )
        return 0LL;
      goto LABEL_7;
    case 36:
      v123 = 0LL;
      *v127 = 5;
      return (__int64)v123;
    default:
      return 0LL;
  }
  while ( 1 )
  {
    v136 = &v141;
    v135 = 3;
    v47 = sub_4108D0(&v135, (__int64)v8, (char *)v7->m128i_i64, v44, v121, v46 & 1);
    if ( v47 )
    {
LABEL_162:
      *v127 = v47;
      goto LABEL_150;
    }
    v44 = sub_406540(v7, (__int64)v8, v121);
    v48 = v135;
    if ( !((v135 - 2) & 0xFFFFFFFD) )
      goto LABEL_105;
    v49 = v7->m128i_i64[1];
    if ( v49 == 2 )
      goto LABEL_160;
    if ( v49 != 22 )
      goto LABEL_105;
    v8[9] += v44;
    v81 = sub_406540(&v139, (__int64)v8, v121);
    if ( v140 == 2 )
    {
LABEL_160:
      *v127 = 7;
LABEL_150:
      free(ptrb);
      sub_407690(v43);
      if ( *v127 )
        return 0LL;
      v123 = 0LL;
      goto LABEL_7;
    }
    if ( v140 == 21 )
    {
      v8[9] += -v44;
      v48 = v135;
      LOBYTE(v7->m128i_i64[1]) = 1;
LABEL_105:
      switch ( v48 )
      {
        case 0:
          *(_QWORD *)((char *)ptrb + (((unsigned __int64)(unsigned __int8)v136 >> 3) & 0x18)) |= 1LL << (char)v136;
          goto LABEL_143;
        case 1:
          v75 = v43[5];
          v76 = *v43;
          if ( v75 != (void *)v124 )
            goto LABEL_147;
          v95 = 4 * (2 * v124 + 1);
          v124 = 2 * v124 + 1;
          v76 = realloc(*v43, v95);
          if ( !v76 )
            goto LABEL_219;
          *v43 = v76;
          v75 = v43[5];
LABEL_147:
          v43[5] = (char *)v75 + 1;
          v76[(_QWORD)v75] = (_DWORD)v136;
          break;
        case 2:
          v73 = sub_40B870((__int64)ptrb, (const char *)v136);
          *v127 = v73;
          if ( !v73 )
            goto LABEL_143;
          goto LABEL_150;
        case 3:
          v78 = sub_40B870((__int64)ptrb, (const char *)v136);
          *v127 = v78;
          if ( v78 )
            goto LABEL_150;
          goto LABEL_143;
        case 4:
          v77 = sub_40B8C0(v8[15], (__int64)ptrb, v43 + 3, (__int64 *)v43 + 9, &v134, (const char *)v136, v121);
          *v127 = v77;
          if ( v77 )
            goto LABEL_150;
          goto LABEL_143;
        default:
          __assert_fail("0", "lib/regcomp.c", 0xCF3u, "parse_bracket_exp");
          return result;
      }
      goto LABEL_143;
    }
    v137 = 3;
    v138 = &v143;
    v47 = sub_4108D0(&v137, (__int64)v8, &v139, v81, v82, 1);
    if ( v47 )
      goto LABEL_162;
    v83 = sub_406540(v7, (__int64)v8, v121);
    v84 = 0LL;
    v44 = v83;
    if ( *(_DWORD *)(v122 + 180) >= 2 )
      v84 = v43;
    if ( !((v135 - 2) & 0xFFFFFFFD) || (v85 = v137, !((v137 - 2) & 0xFFFFFFFD)) )
    {
LABEL_243:
      *v127 = 11;
      goto LABEL_150;
    }
    LOBYTE(v129) = v135 == 3;
    if ( v135 == 3 )
    {
      if ( strlen((const char *)v136) > 1 || v137 == 3 && strlen(v138) > 1 )
        goto LABEL_228;
      v86 = *(_BYTE *)v136;
    }
    else
    {
      if ( v137 == 3 )
      {
        v88 = v138;
        if ( strlen(v138) > 1 )
          goto LABEL_228;
        v86 = 0;
        if ( v135 )
          goto LABEL_179;
      }
      else if ( v135 )
      {
        v86 = 0;
        v87 = 0;
        if ( v137 )
          goto LABEL_180;
        goto LABEL_242;
      }
      v86 = (unsigned __int8)v136;
    }
    if ( v137 )
    {
      v87 = 0;
      if ( v137 != 3 )
        goto LABEL_180;
      v88 = v138;
LABEL_179:
      v87 = *(unsigned __int8 *)v88;
      goto LABEL_180;
    }
LABEL_242:
    v87 = (unsigned __int8)v138;
LABEL_180:
    if ( !v135 || (v89 = (unsigned int)v136, (_BYTE)v129) )
    {
      LODWORD(v130) = v87;
      v129 = v84;
      v114 = sub_406C50(v86, (__int64)v84);
      v85 = v137;
      LOBYTE(v87) = (_BYTE)v130;
      v89 = v114;
      v84 = v129;
    }
    if ( !v85 || (v90 = (unsigned int)v138, v85 == 3) )
    {
      LODWORD(v130) = v89;
      v129 = v84;
      v106 = sub_406C50(v87, (__int64)v84);
      v89 = (unsigned int)v130;
      v84 = v129;
      v90 = v106;
    }
    if ( v89 == -1 || v90 == -1 )
    {
LABEL_228:
      *v127 = 3;
      goto LABEL_150;
    }
    if ( v121 & 0x10000 && v89 > v90 )
      goto LABEL_243;
    if ( v84 )
    {
      v91 = v84[8];
      v92 = v84[1];
      if ( v91 == (void *)v126.m128i_i64[0] )
      {
        v115 = v84[1];
        v133 = v90;
        v132 = v89;
        v129 = v84;
        v126.m128i_i64[0] = 2 * v126.m128i_i64[0] + 1;
        size = 4 * v126.m128i_i64[0];
        v130 = realloc(v115, 4 * v126.m128i_i64[0]);
        v116 = realloc(v129[2], 4 * v126.m128i_i64[0]);
        v92 = v130;
        if ( !v130 || (v84 = v129, v89 = v132, v90 = v133, !v116) )
        {
          v125 = v116;
          free(v130);
          free(v125);
          *v127 = 12;
          goto LABEL_150;
        }
        v129[2] = v116;
        v91 = v84[8];
        v84[1] = v92;
      }
      v92[(_QWORD)v91] = v89;
      v93 = v84[2];
      v84[8] = (char *)v91 + 1;
      v93[(_QWORD)v91] = v90;
    }
    v94 = 0LL;
    do
    {
      if ( v89 <= (unsigned int)v94 && v90 >= (unsigned int)v94 )
        ptrb[v94 >> 6] |= 1LL << v94;
      ++v94;
    }
    while ( v94 != 256 );
    *v127 = 0;
LABEL_143:
    v74 = v7->m128i_i64[1];
    if ( v74 == 2 )
      goto LABEL_160;
    if ( v74 == 21 )
      break;
    v46 = 0;
  }
  v8[9] += v44;
  if ( (_BYTE)v128 )
  {
    v96 = ptrb;
    do
    {
      *v96 = ~*v96;
      ++v96;
    }
    while ( ptrb + 4 != v96 );
  }
  v97 = *(_DWORD *)(v122 + 180);
  if ( v97 > 1 )
  {
    v98 = *(_QWORD *)(v122 + 120);
    for ( j = 0LL; j != 4; ++j )
      ptrb[j] &= *(_QWORD *)(v98 + j * 8);
  }
  if ( !v43[5] && !v43[6] && !v43[7] && !v43[8] && (v97 <= 1 || !v43[9] && !((_BYTE)v43[4] & 1)) )
  {
    sub_407690(v43);
    v142 = 3;
    v141 = (void **)ptrb;
    v123 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), 0LL, 0LL, (const __m128i *)&v141);
    if ( v123 )
      goto LABEL_7;
    goto LABEL_219;
  }
  *(_BYTE *)(v122 + 176) |= 2u;
  v100 = (_QWORD *)(v122 + 112);
  v101 = (int *)(v122 + 128);
  v142 = 6;
  v141 = v43;
  v102 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), 0LL, 0LL, (const __m128i *)&v141);
  v103 = v102;
  v123 = v102;
  v104 = ptrb;
  if ( !v103 )
    goto LABEL_219;
  while ( !*v104 )
  {
    ++v104;
    if ( ptrb + 4 == v104 )
    {
      free(ptrb);
      goto LABEL_7;
    }
  }
  v142 = 3;
  v141 = (void **)ptrb;
  v105 = sub_408CA0(v100, v101, 0LL, 0LL, (const __m128i *)&v141);
  if ( !v105 || (v144 = 10, (v123 = sub_408CA0(v100, v101, v105, v123, (const __m128i *)&v143)) == 0LL) )
  {
LABEL_219:
    *v127 = 12;
    goto LABEL_150;
  }
LABEL_7:
  v9 = sub_410AF0((unsigned __int8 *)v7, v8, v121);
  v10 = LOBYTE(v7->m128i_i64[1]);
  v8[9] += v9;
  while ( 2 )
  {
    if ( (unsigned __int8)v10 > 0x17u )
      return (__int64)v123;
    v14 = 9177088LL;
    LOBYTE(v15) = (_BYTE)v10 == 18;
    if ( !_bittest64(&v14, v10) )
      return (__int64)v123;
    v16 = v8[9];
    v17 = _mm_load_si128(v7);
    if ( (_BYTE)v10 == 23 )
    {
      v126 = v17;
      v35 = sub_4111A0(v8, (unsigned __int8 *)v7, v121);
      v36 = _mm_load_si128(&v126);
      ptra = v35;
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
          if ( v121 & 0x200000 )
          {
LABEL_64:
            v8[9] = v16;
            v29 = v123;
            *v7 = v36;
            LOBYTE(v7->m128i_i64[1]) = 1;
            goto LABEL_35;
          }
          if ( LOBYTE(v7->m128i_i64[1]) == 2 )
            *v127 = 9;
          else
LABEL_85:
            *v127 = 10;
          goto LABEL_86;
        }
        v37 = v7->m128i_i64[1];
        if ( v37 == 24 )
        {
          v15 = ptra;
          goto LABEL_81;
        }
        if ( v37 != 1 )
          goto LABEL_63;
        if ( LOBYTE(v7->m128i_i64[0]) != 44 )
        {
          if ( !(v121 & 0x200000) )
            goto LABEL_85;
          goto LABEL_64;
        }
        v15 = ptra;
      }
      v126 = v36;
      v38 = sub_4111A0(v8, (unsigned __int8 *)v7, v121);
      v36 = _mm_load_si128(&v126);
      ptra = v38;
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
      if ( ptra > 0x7FFF )
      {
LABEL_82:
        *v127 = 15;
LABEL_86:
        if ( !v123 )
          return 0LL;
        goto LABEL_51;
      }
LABEL_76:
      v8[9] += (int)sub_410AF0((unsigned __int8 *)v7, v8, v121);
      if ( !v123 )
        goto LABEL_65;
      if ( !(v15 | ptra) )
      {
        sub_4064D0(v123, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4076E0, 0LL);
        if ( *v127 )
          goto LABEL_51;
        goto LABEL_66;
      }
      if ( v15 <= 0 )
      {
        v18 = v123;
        v41 = 0LL;
        goto LABEL_93;
      }
      if ( v15 == 1 )
      {
        v39 = v123;
        v23 = v123;
LABEL_89:
        if ( v15 == ptra )
        {
LABEL_90:
          v123 = v23;
          goto LABEL_38;
        }
        goto LABEL_92;
      }
      v30 = v123;
      v126.m128i_i64[0] = (__int64)v8;
      v31 = 2LL;
      v128 = v7;
      v32 = v123;
      while ( 1 )
      {
        v33 = sub_408D80((_QWORD **)v32, v122);
        v32 = v33;
        v144 = 16;
        v34 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), v30, v33, (const __m128i *)&v143);
        v30 = v34;
        if ( !v32 || !v34 )
          break;
        if ( v15 < ++v31 )
        {
          v39 = v32;
          v7 = v128;
          v8 = (__int64 *)v126.m128i_i64[0];
          v23 = v34;
          goto LABEL_89;
        }
      }
LABEL_50:
      *v127 = 12;
LABEL_51:
      sub_4064D0(v123, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4076E0, 0LL);
      return 0LL;
    }
    v15 = (unsigned __int8)v15;
    if ( (_BYTE)v10 == 19 )
    {
      v8[9] += (int)sub_410AF0((unsigned __int8 *)v7, v8, v121);
      if ( v123 )
      {
        v18 = v123;
        if ( v123[48] == 17 )
        {
          v18 = v123;
          ptra = 1LL;
          v126.m128i_i64[0] = 0LL;
          goto LABEL_56;
        }
        ptra = 1LL;
        v19 = 10;
        v126.m128i_i64[0] = 0LL;
        goto LABEL_25;
      }
      goto LABEL_65;
    }
    v8[9] += (int)sub_410AF0((unsigned __int8 *)v7, v8, v121);
    if ( !v123 )
    {
LABEL_65:
      if ( *v127 )
        return 0LL;
LABEL_66:
      v123 = 0LL;
      goto LABEL_38;
    }
    if ( (_BYTE)v10 == 18 )
    {
      v39 = v123;
      ptra = -1LL;
      v15 = 1LL;
      v23 = v123;
LABEL_92:
      v126.m128i_i64[0] = (__int64)v23;
      v40 = sub_408D80((_QWORD **)v39, v122);
      v41 = v126.m128i_i64[0];
      v18 = v40;
      if ( !v40 )
        goto LABEL_50;
LABEL_93:
      v42 = v18[48] == 17;
      v126.m128i_i64[0] = v41;
      if ( v42 )
        goto LABEL_56;
      goto LABEL_57;
    }
    v18 = v123;
    if ( v123[48] != 17 )
    {
      ptra = -1LL;
      v15 = 0LL;
      v126.m128i_i64[0] = 0LL;
      goto LABEL_24;
    }
    ptra = -1LL;
    v18 = v123;
    v15 = 0LL;
    v126.m128i_i64[0] = 0LL;
LABEL_56:
    sub_4064D0(v18, (__int64 (__fastcall *)(__int64, _QWORD *))sub_406670, *((_QWORD *)v18 + 5));
LABEL_57:
    if ( ptra == -1 )
LABEL_24:
      v19 = 11;
    else
      v19 = 10;
LABEL_25:
    v144 = v19;
    v20 = (_QWORD *)(v122 + 112);
    v21 = (int *)(v122 + 128);
    v22 = sub_408CA0((_QWORD *)(v122 + 112), (int *)(v122 + 128), v18, 0LL, (const __m128i *)&v143);
    v23 = v22;
    if ( !v22 )
      goto LABEL_50;
    v24 = v15 + 2;
    if ( v24 <= ptra )
    {
      v128 = v7;
      v25 = v18;
      v26 = v22;
      while ( 1 )
      {
        v25 = sub_408D80((_QWORD **)v25, v122);
        v144 = 16;
        v27 = sub_408CA0(v20, v21, v26, v25, (const __m128i *)&v143);
        if ( !v25 )
          goto LABEL_50;
        if ( !v27 )
          goto LABEL_50;
        v144 = 10;
        v28 = sub_408CA0(v20, v21, v27, 0LL, (const __m128i *)&v143);
        v26 = v28;
        if ( !v28 )
          goto LABEL_50;
        if ( ++v24 > ptra )
        {
          v7 = v128;
          v23 = v28;
          break;
        }
      }
    }
    if ( !v126.m128i_i64[0] )
      goto LABEL_90;
    v144 = 16;
    v29 = sub_408CA0(v20, v21, v126.m128i_i64[0], v23, (const __m128i *)&v143);
LABEL_35:
    if ( *v127 && !v29 )
      goto LABEL_86;
    v123 = v29;
LABEL_38:
    v10 = LOBYTE(v7->m128i_i64[1]);
    if ( !(v121 & 0x1000000) || (_BYTE)v10 != 11 && (_BYTE)v10 != 23 )
      continue;
    break;
  }
  if ( v123 )
    sub_4064D0(v123, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4076E0, 0LL);
LABEL_43:
  v123 = 0LL;
  *v127 = 13;
  return (__int64)v123;
}

_QWORD *__fastcall sub_412750(__int64 *a1, __int64 *a2, __m128i *a3, __int64 a4, char *a5, _DWORD *a6)
{
  __int64 v6; // r15
  char *v7; // r12
  __m128i *v8; // rbp
  _DWORD *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // r14
  char v12; // al
  _QWORD *v13; // r9
  char *v14; // rax
  _QWORD *v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  char v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+28h] [rbp-40h]

  v6 = a4;
  v7 = a5;
  v8 = a3;
  v9 = a6;
  v17 = *a2;
  v10 = sub_411260(a1, a2, a3, a4, a5, a6);
  v11 = (_QWORD *)v10;
  if ( *v9 && !v10 )
    return 0LL;
LABEL_3:
  v12 = v8->m128i_i64[1];
  if ( (v8->m128i_i64[1] & 0xF7) != 2 )
  {
    while ( v12 != 9 || !v7 )
    {
      v13 = (_QWORD *)sub_411260(a1, a2, v8, v6, v7, v9);
      if ( *v9 && !v13 )
      {
        if ( v11 )
          sub_4064D0(v11, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4076E0, 0LL);
        return 0LL;
      }
      if ( !v11 || !v13 )
      {
        if ( !v11 )
          v11 = v13;
        goto LABEL_3;
      }
      v16 = v13;
      v19 = 16;
      v14 = sub_408CA0((_QWORD *)(v17 + 112), (int *)(v17 + 128), v11, v13, (const __m128i *)&v18);
      if ( !v14 )
      {
        sub_4064D0(v16, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4076E0, 0LL);
        sub_4064D0(v11, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4076E0, 0LL);
        v11 = 0LL;
        *v9 = 12;
        return v11;
      }
      v11 = v14;
      v12 = v8->m128i_i64[1];
      if ( (v8->m128i_i64[1] & 0xF7) == 2 )
        return v11;
    }
  }
  return v11;
}

char *__fastcall sub_412890(__int64 *a1, __int64 *a2, __m128i *a3, __int64 a4, char *a5, _DWORD *a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r13
  __m128i *v8; // rbp
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // r15
  _QWORD *v13; // rcx
  char *v14; // [rsp+0h] [rbp-68h]
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+10h] [rbp-58h]
  char v17; // [rsp+20h] [rbp-48h]
  char v18; // [rsp+28h] [rbp-40h]

  v6 = a6;
  v7 = a4;
  v8 = a3;
  v9 = *a2;
  v14 = a5;
  v16 = *(_QWORD *)(*a2 + 168);
  v10 = (char *)sub_412750(a1, a2, a3, a4, a5, a6);
  v11 = v10;
  if ( *v6 && !v10 )
    return 0LL;
  while ( LOBYTE(v8->m128i_i64[1]) == 10 )
  {
    a1[9] += (int)sub_410AF0((unsigned __int8 *)v8, a1, v7 | 0x800000);
    if ( (v8->m128i_i64[1] & 0xF7) == 2 || LOBYTE(v8->m128i_i64[1]) == 9 && v14 )
    {
      v13 = 0LL;
    }
    else
    {
      v15 = *(_QWORD *)(v9 + 168);
      *(_QWORD *)(v9 + 168) = v16;
      v13 = sub_412750(a1, a2, v8, v7, v14, v6);
      if ( *v6 && !v13 )
      {
        if ( v11 )
          sub_4064D0(v11, (__int64 (__fastcall *)(__int64, _QWORD *))sub_4076E0, 0LL);
        return 0LL;
      }
      *(_QWORD *)(v9 + 168) |= v15;
    }
    v18 = 10;
    v11 = sub_408CA0((_QWORD *)(v9 + 112), (int *)(v9 + 128), v11, v13, (const __m128i *)&v17);
    if ( !v11 )
    {
      *v6 = 12;
      return v11;
    }
  }
  return v11;
}

__int64 __fastcall sub_4129F0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // rbp
  bool v8; // cc
  int *v9; // rbx
  size_t i; // rsi
  __int64 v11; // r15
  void *v12; // rax
  char *v13; // rax
  bool v14; // zf
  char v15; // al
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // rdx
  unsigned __int8 v19; // al
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
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rsi
  size_t v58; // rcx
  unsigned __int8 v59; // al
  char v60; // al
  __int64 v61; // rax
  unsigned int v62; // er13
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
  unsigned __int8 *v86; // r8
  char v87; // r9
  __int64 v88; // rcx
  unsigned __int8 *v89; // rdx
  __int64 *v90; // rax
  int *v91; // rax
  char *v92; // rax
  __int64 v93; // rax
  unsigned __int8 v94; // dl
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
  unsigned int v109; // [rsp+2Ch] [rbp-10Ch]
  __m128i v110; // [rsp+30h] [rbp-108h]
  char v111; // [rsp+40h] [rbp-F8h]
  __int64 v112; // [rsp+48h] [rbp-F0h]
  void *ptr; // [rsp+50h] [rbp-E8h]
  __int64 v114; // [rsp+60h] [rbp-D8h]
  __int64 v115; // [rsp+68h] [rbp-D0h]
  __int64 v116; // [rsp+88h] [rbp-B0h]
  __int64 v117; // [rsp+90h] [rbp-A8h]
  __int64 v118; // [rsp+98h] [rbp-A0h]
  __int64 v119; // [rsp+A0h] [rbp-98h]
  __int64 v120; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v121; // [rsp+B0h] [rbp-88h]
  __int64 v122; // [rsp+B8h] [rbp-80h]
  unsigned __int64 v123; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v124; // [rsp+C8h] [rbp-70h]
  __int64 v125; // [rsp+D8h] [rbp-60h]
  bool v126; // [rsp+E8h] [rbp-50h]
  char v127; // [rsp+E9h] [rbp-4Fh]
  char v128; // [rsp+EAh] [rbp-4Eh]
  bool v129; // [rsp+EBh] [rbp-4Dh]
  int v130; // [rsp+F0h] [rbp-48h]

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
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
  if ( v6 > 0x555555555555554LL )
    goto LABEL_112;
  *((_QWORD *)v9 + 1) = v6 + 1;
  *(_QWORD *)v9 = malloc(16 * (v6 + 1));
  if ( v6 )
  {
    for ( i = 1LL; i <= v6; i *= 2LL )
      ;
    v11 = i - 1;
  }
  else
  {
    v11 = 0LL;
    i = 1LL;
  }
  v12 = calloc(0x18uLL, i);
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
  *((_BYTE *)v9 + 176) &= 0xF7u;
  if ( !v8 )
  {
    if ( v15 & 4 )
    {
      *((_QWORD *)v9 + 15) = &unk_416F20;
      goto LABEL_15;
    }
    v79 = calloc(0x20uLL, 1uLL);
    *((_QWORD *)v9 + 15) = v79;
    if ( !v79 )
    {
LABEL_112:
      v109 = 12;
LABEL_111:
      sub_40B610(v9);
      *(_QWORD *)v7 = 0LL;
      result = v109;
      *(_QWORD *)(v7 + 8) = 0LL;
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
  v16 = *(_QWORD *)(v7 + 40);
  v109 = 0;
  memset(&v115, 0, 0x90uLL);
  v125 = v16;
  v17 = v9[45];
  v114 = v4;
  v98 = v5 & 0x400000;
  v126 = (v5 & 0x400000) != 0;
  v18 = v98 | v16;
  v19 = *((_BYTE *)v9 + 176);
  v20 = v18 != 0;
  v122 = v6;
  v21 = v18;
  v121 = v6;
  v129 = v18 != 0;
  v130 = v17;
  v127 = (v19 >> 2) & 1;
  v128 = (v19 >> 3) & 1;
  v124 = v6;
  v123 = v6;
  if ( v6 )
  {
    v22 = sub_406910((__int64)&v114, v6 + 1);
    if ( v22 )
    {
LABEL_83:
      v109 = v22;
      v35 = *(_QWORD *)v7;
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
      sub_407C60((__int64)&v114);
      goto LABEL_111;
    }
    v20 = v129;
    v17 = v9[45];
  }
  if ( v20 )
    v4 = v115;
  v115 = v4;
  if ( v5 & 0x400000 )
  {
    if ( v17 <= 1 )
    {
      sub_406C80(&v114);
      v109 = 0;
    }
    else
    {
      while ( 1 )
      {
        v22 = sub_406EB0((__int64)&v114);
        if ( v22 )
          goto LABEL_83;
        if ( (__int64)v6 <= v118 || v119 > v117 + v9[45] )
          break;
        v22 = sub_406910((__int64)&v114, 2 * v119);
        if ( v22 )
          goto LABEL_83;
      }
      v109 = 0;
    }
  }
  else if ( v17 > 1 )
  {
    sub_406D00((mbstate_t *)&v114);
    v109 = 0;
  }
  else
  {
    v23 = v119;
    if ( v21 )
    {
      v24 = v117;
      if ( v122 <= v119 )
        v23 = v122;
      if ( v23 > v117 )
      {
        while ( 1 )
        {
          *(_BYTE *)(v4 + v24) = *(_BYTE *)(v125 + *(unsigned __int8 *)(v116 + v24 + v114));
          if ( v23 == ++v24 )
            break;
          v4 = v115;
        }
      }
      else
      {
        v23 = v117;
      }
    }
    v117 = v23;
    v118 = v23;
    v109 = 0;
  }
  v25 = *(_QWORD *)v7;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v25 + 216) = v5;
  v26 = sub_410AF0((unsigned __int8 *)&v110, &v114, v5 | 0x800000);
  v120 += v26;
  v27 = sub_412890(&v114, (__int64 *)v7, &v110, v5, 0LL, &v109);
  if ( v109 )
  {
    if ( !v27 )
    {
      *((_QWORD *)v9 + 13) = 0LL;
      v35 = *(_QWORD *)v7;
      goto LABEL_108;
    }
    v28 = (_QWORD *)(v25 + 112);
    sizef = (size_t)v27;
    v29 = (int *)(v25 + 128);
    LOBYTE(v112) = 2;
    v92 = sub_408CA0((_QWORD *)(v25 + 112), (int *)(v25 + 128), 0LL, 0LL, (const __m128i *)&v111);
    v31 = (_QWORD *)sizef;
    v32 = v92;
  }
  else
  {
    v28 = (_QWORD *)(v25 + 112);
    sized = (size_t)v27;
    v29 = (int *)(v25 + 128);
    LOBYTE(v112) = 2;
    v30 = sub_408CA0((_QWORD *)(v25 + 112), (int *)(v25 + 128), 0LL, 0LL, (const __m128i *)&v111);
    v31 = (_QWORD *)sized;
    v32 = v30;
    v33 = v30;
    if ( !sized )
      goto LABEL_39;
  }
  LOBYTE(v112) = 16;
  v34 = sub_408CA0(v28, v29, v31, v32, (const __m128i *)&v111);
  v33 = v32;
  v32 = v34;
LABEL_39:
  v35 = *(_QWORD *)v7;
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
  v42 = *(_QWORD *)(v7 + 48);
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
    sub_408510(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_4081D0, v35);
    v45 = *(_QWORD *)(v7 + 48);
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
  v22 = sub_4064D0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_409050, v7);
  if ( v22 )
    goto LABEL_83;
  v22 = sub_4064D0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_40B580, v35);
  if ( v22 )
    goto LABEL_83;
  sub_408510(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_408260, v35);
  v22 = sub_408510(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_407D60, v35);
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
      v22 = sub_408740((__m128i *)&v111, (__int64 *)v35, v49, 1);
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
  if ( !(*(_BYTE *)(v7 + 56) & 0x10) && *(_QWORD *)(v7 + 48) && *(_BYTE *)(v35 + 176) & 1 || *(_QWORD *)(v35 + 152) )
  {
    v50 = (char *)malloc(24 * v49);
    *(_QWORD *)(v35 + 56) = v50;
    if ( !v50 )
    {
      v109 = 12;
      v35 = *(_QWORD *)v7;
      goto LABEL_108;
    }
    v51 = 0LL;
    if ( !v49 )
      goto LABEL_85;
    while ( 1 )
    {
      v52 = 3 * v51++;
      v53 = (__int64)&v50[8 * v52];
      *(_OWORD *)v53 = 0LL;
      *(_QWORD *)(v53 + 16) = 0LL;
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
      if ( *(_QWORD *)(v57 + 8) > 0LL )
        break;
LABEL_138:
      if ( *(_QWORD *)(v35 + 16) <= (unsigned __int64)++v108 )
        goto LABEL_85;
    }
    while ( 1 )
    {
      sizeb = v58;
      if ( !(unsigned __int8)sub_4069B0((_QWORD *)(*(_QWORD *)(v35 + 56) + 24LL * *(_QWORD *)(v58 + 8 * v56)), v108) )
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
  if ( v60 && !*(_QWORD *)(v7 + 40) )
  {
    v85 = *((_QWORD *)v9 + 2);
    if ( v85 )
    {
      v86 = *(unsigned __int8 **)v9;
      v87 = 0;
      v88 = 0LL;
      v89 = *(unsigned __int8 **)v9;
      while ( 2 )
      {
        switch ( (unsigned __int64)v89[8] )
        {
          case 1uLL:
            if ( (*v89 & 0x80u) != 0 )
              v48 = v60;
            goto LABEL_145;
          case 2uLL:
          case 4uLL:
          case 8uLL:
          case 9uLL:
          case 0xAuLL:
          case 0xBuLL:
            goto LABEL_145;
          case 3uLL:
            if ( *(_QWORD *)(*(_QWORD *)v89 + 16LL) || *(_QWORD *)(*(_QWORD *)v89 + 24LL) )
              goto LABEL_86;
            goto LABEL_145;
          case 5uLL:
            v87 = v60;
            goto LABEL_145;
          case 6uLL:
            goto LABEL_86;
          case 0xCuLL:
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
            v93 = (__int64)&v86[16 * v88];
            do
            {
              v94 = v86[8];
              if ( v94 == 1 )
              {
                if ( (*v86 & 0x80u) != 0 )
                  v86[10] &= 0xDFu;
              }
              else if ( v94 == 5 )
              {
                v86[8] = 7;
              }
              v86 += 16;
            }
            while ( (unsigned __int8 *)v93 != v86 );
            break;
          default:
            abort();
            return result;
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
    v96 = *((_QWORD *)v9 + 19) < 0;
    v97 = *((_BYTE *)v9 + 176);
    v9[45] = 1;
    *((_BYTE *)v9 + 176) = v97 & 0xF9 | (2 * ((v87 | (!v96 && !v14)) & 1));
  }
LABEL_86:
  v61 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 13) + 24LL) + 56LL);
  *((_QWORD *)v9 + 18) = v61;
  v62 = sub_4090D0((__int64)&v111, *((_QWORD *)v9 + 6) + 24 * v61);
  v110.m128i_i32[0] = v62;
  if ( !v62 )
  {
    if ( *((_QWORD *)v9 + 19) > 0LL )
    {
      v63 = v112;
      if ( v112 > 0 )
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
              if ( !sub_408030(
                      v63,
                      (__int64 *)&ptr,
                      **(_QWORD **)(*((_QWORD *)v9 + 5) + 24LL * *((_QWORD *)ptr + v64) + 16)) )
                break;
            }
LABEL_90:
            if ( v63 <= ++v64 )
              goto LABEL_99;
          }
          v69 = sub_408570((__int64)&v111, *((_QWORD *)v9 + 6) + 24 * v68);
          if ( v69 )
            break;
          v63 = v112;
          v64 = 1LL;
          if ( v112 <= 1 )
            goto LABEL_99;
        }
        v62 = v69;
        goto LABEL_103;
      }
    }
LABEL_99:
    v70 = sub_4092E0(&v110, v9, (__int64)&v111, 0);
    *((_QWORD *)v9 + 9) = v70;
    if ( v70 )
    {
      if ( *((_BYTE *)v70 + 104) >= 0 )
      {
        *((_QWORD *)v9 + 12) = v70;
        *((_QWORD *)v9 + 11) = v70;
        *((_QWORD *)v9 + 10) = v70;
LABEL_102:
        free(ptr);
        goto LABEL_103;
      }
      *((_QWORD *)v9 + 10) = sub_4092E0(&v110, v9, (__int64)&v111, 1u);
      *((_QWORD *)v9 + 11) = sub_4092E0(&v110, v9, (__int64)&v111, 2u);
      v90 = sub_4092E0(&v110, v9, (__int64)&v111, 6u);
      v14 = *((_QWORD *)v9 + 10) == 0LL;
      *((_QWORD *)v9 + 12) = v90;
      if ( !v14 && *((_QWORD *)v9 + 11) && v90 )
        goto LABEL_102;
    }
    v62 = v110.m128i_i32[0];
  }
LABEL_103:
  v71 = *(_QWORD *)v7;
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
  sub_407C60((__int64)&v114);
  result = v109;
  if ( v109 )
    goto LABEL_111;
  return result;
}

__int64 __fastcall sub_4129F0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // rbp
  bool v8; // cc
  int *v9; // rbx
  size_t i; // rsi
  __int64 v11; // r15
  void *v12; // rax
  char *v13; // rax
  bool v14; // zf
  char v15; // al
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // rdx
  unsigned __int8 v19; // al
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
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rsi
  size_t v58; // rcx
  unsigned __int8 v59; // al
  char v60; // al
  __int64 v61; // rax
  unsigned int v62; // er13
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
  unsigned __int8 *v86; // r8
  char v87; // r9
  __int64 v88; // rcx
  unsigned __int8 *v89; // rdx
  __int64 *v90; // rax
  int *v91; // rax
  char *v92; // rax
  __int64 v93; // rax
  unsigned __int8 v94; // dl
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
  unsigned int v109; // [rsp+2Ch] [rbp-10Ch]
  __m128i v110; // [rsp+30h] [rbp-108h]
  char v111; // [rsp+40h] [rbp-F8h]
  __int64 v112; // [rsp+48h] [rbp-F0h]
  void *ptr; // [rsp+50h] [rbp-E8h]
  __int64 v114; // [rsp+60h] [rbp-D8h]
  __int64 v115; // [rsp+68h] [rbp-D0h]
  __int64 v116; // [rsp+88h] [rbp-B0h]
  __int64 v117; // [rsp+90h] [rbp-A8h]
  __int64 v118; // [rsp+98h] [rbp-A0h]
  __int64 v119; // [rsp+A0h] [rbp-98h]
  __int64 v120; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v121; // [rsp+B0h] [rbp-88h]
  __int64 v122; // [rsp+B8h] [rbp-80h]
  unsigned __int64 v123; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v124; // [rsp+C8h] [rbp-70h]
  __int64 v125; // [rsp+D8h] [rbp-60h]
  bool v126; // [rsp+E8h] [rbp-50h]
  char v127; // [rsp+E9h] [rbp-4Fh]
  char v128; // [rsp+EAh] [rbp-4Eh]
  bool v129; // [rsp+EBh] [rbp-4Dh]
  int v130; // [rsp+F0h] [rbp-48h]

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
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
  if ( v6 > 0x555555555555554LL )
    goto LABEL_112;
  *((_QWORD *)v9 + 1) = v6 + 1;
  *(_QWORD *)v9 = malloc(16 * (v6 + 1));
  if ( v6 )
  {
    for ( i = 1LL; i <= v6; i *= 2LL )
      ;
    v11 = i - 1;
  }
  else
  {
    v11 = 0LL;
    i = 1LL;
  }
  v12 = calloc(0x18uLL, i);
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
  *((_BYTE *)v9 + 176) &= 0xF7u;
  if ( !v8 )
  {
    if ( v15 & 4 )
    {
      *((_QWORD *)v9 + 15) = &unk_416F20;
      goto LABEL_15;
    }
    v79 = calloc(0x20uLL, 1uLL);
    *((_QWORD *)v9 + 15) = v79;
    if ( !v79 )
    {
LABEL_112:
      v109 = 12;
LABEL_111:
      sub_40B610(v9);
      *(_QWORD *)v7 = 0LL;
      result = v109;
      *(_QWORD *)(v7 + 8) = 0LL;
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
  v16 = *(_QWORD *)(v7 + 40);
  v109 = 0;
  memset(&v115, 0, 0x90uLL);
  v125 = v16;
  v17 = v9[45];
  v114 = v4;
  v98 = v5 & 0x400000;
  v126 = (v5 & 0x400000) != 0;
  v18 = v98 | v16;
  v19 = *((_BYTE *)v9 + 176);
  v20 = v18 != 0;
  v122 = v6;
  v21 = v18;
  v121 = v6;
  v129 = v18 != 0;
  v130 = v17;
  v127 = (v19 >> 2) & 1;
  v128 = (v19 >> 3) & 1;
  v124 = v6;
  v123 = v6;
  if ( v6 )
  {
    v22 = sub_406910((__int64)&v114, v6 + 1);
    if ( v22 )
    {
LABEL_83:
      v109 = v22;
      v35 = *(_QWORD *)v7;
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
      sub_407C60((__int64)&v114);
      goto LABEL_111;
    }
    v20 = v129;
    v17 = v9[45];
  }
  if ( v20 )
    v4 = v115;
  v115 = v4;
  if ( v5 & 0x400000 )
  {
    if ( v17 <= 1 )
    {
      sub_406C80(&v114);
      v109 = 0;
    }
    else
    {
      while ( 1 )
      {
        v22 = sub_406EB0((__int64)&v114);
        if ( v22 )
          goto LABEL_83;
        if ( (__int64)v6 <= v118 || v119 > v117 + v9[45] )
          break;
        v22 = sub_406910((__int64)&v114, 2 * v119);
        if ( v22 )
          goto LABEL_83;
      }
      v109 = 0;
    }
  }
  else if ( v17 > 1 )
  {
    sub_406D00((mbstate_t *)&v114);
    v109 = 0;
  }
  else
  {
    v23 = v119;
    if ( v21 )
    {
      v24 = v117;
      if ( v122 <= v119 )
        v23 = v122;
      if ( v23 > v117 )
      {
        while ( 1 )
        {
          *(_BYTE *)(v4 + v24) = *(_BYTE *)(v125 + *(unsigned __int8 *)(v116 + v24 + v114));
          if ( v23 == ++v24 )
            break;
          v4 = v115;
        }
      }
      else
      {
        v23 = v117;
      }
    }
    v117 = v23;
    v118 = v23;
    v109 = 0;
  }
  v25 = *(_QWORD *)v7;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v25 + 216) = v5;
  v26 = sub_410AF0((unsigned __int8 *)&v110, &v114, v5 | 0x800000);
  v120 += v26;
  v27 = sub_412890(&v114, (__int64 *)v7, &v110, v5, 0LL, &v109);
  if ( v109 )
  {
    if ( !v27 )
    {
      *((_QWORD *)v9 + 13) = 0LL;
      v35 = *(_QWORD *)v7;
      goto LABEL_108;
    }
    v28 = (_QWORD *)(v25 + 112);
    sizef = (size_t)v27;
    v29 = (int *)(v25 + 128);
    LOBYTE(v112) = 2;
    v92 = sub_408CA0((_QWORD *)(v25 + 112), (int *)(v25 + 128), 0LL, 0LL, (const __m128i *)&v111);
    v31 = (_QWORD *)sizef;
    v32 = v92;
  }
  else
  {
    v28 = (_QWORD *)(v25 + 112);
    sized = (size_t)v27;
    v29 = (int *)(v25 + 128);
    LOBYTE(v112) = 2;
    v30 = sub_408CA0((_QWORD *)(v25 + 112), (int *)(v25 + 128), 0LL, 0LL, (const __m128i *)&v111);
    v31 = (_QWORD *)sized;
    v32 = v30;
    v33 = v30;
    if ( !sized )
      goto LABEL_39;
  }
  LOBYTE(v112) = 16;
  v34 = sub_408CA0(v28, v29, v31, v32, (const __m128i *)&v111);
  v33 = v32;
  v32 = v34;
LABEL_39:
  v35 = *(_QWORD *)v7;
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
  v42 = *(_QWORD *)(v7 + 48);
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
    sub_408510(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_4081D0, v35);
    v45 = *(_QWORD *)(v7 + 48);
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
  v22 = sub_4064D0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_409050, v7);
  if ( v22 )
    goto LABEL_83;
  v22 = sub_4064D0(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_40B580, v35);
  if ( v22 )
    goto LABEL_83;
  sub_408510(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_408260, v35);
  v22 = sub_408510(*(_QWORD **)(v35 + 104), (__int64 (__fastcall *)(__int64, _QWORD *))sub_407D60, v35);
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
      v22 = sub_408740((__m128i *)&v111, (__int64 *)v35, v49, 1);
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
  if ( !(*(_BYTE *)(v7 + 56) & 0x10) && *(_QWORD *)(v7 + 48) && *(_BYTE *)(v35 + 176) & 1 || *(_QWORD *)(v35 + 152) )
  {
    v50 = (char *)malloc(24 * v49);
    *(_QWORD *)(v35 + 56) = v50;
    if ( !v50 )
    {
      v109 = 12;
      v35 = *(_QWORD *)v7;
      goto LABEL_108;
    }
    v51 = 0LL;
    if ( !v49 )
      goto LABEL_85;
    while ( 1 )
    {
      v52 = 3 * v51++;
      v53 = (__int64)&v50[8 * v52];
      *(_OWORD *)v53 = 0LL;
      *(_QWORD *)(v53 + 16) = 0LL;
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
      if ( *(_QWORD *)(v57 + 8) > 0LL )
        break;
LABEL_138:
      if ( *(_QWORD *)(v35 + 16) <= (unsigned __int64)++v108 )
        goto LABEL_85;
    }
    while ( 1 )
    {
      sizeb = v58;
      if ( !(unsigned __int8)sub_4069B0((_QWORD *)(*(_QWORD *)(v35 + 56) + 24LL * *(_QWORD *)(v58 + 8 * v56)), v108) )
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
  if ( v60 && !*(_QWORD *)(v7 + 40) )
  {
    v85 = *((_QWORD *)v9 + 2);
    if ( v85 )
    {
      v86 = *(unsigned __int8 **)v9;
      v87 = 0;
      v88 = 0LL;
      v89 = *(unsigned __int8 **)v9;
      while ( 2 )
      {
        switch ( (unsigned __int64)v89[8] )
        {
          case 1uLL:
            if ( (*v89 & 0x80u) != 0 )
              v48 = v60;
            goto LABEL_145;
          case 2uLL:
          case 4uLL:
          case 8uLL:
          case 9uLL:
          case 0xAuLL:
          case 0xBuLL:
            goto LABEL_145;
          case 3uLL:
            if ( *(_QWORD *)(*(_QWORD *)v89 + 16LL) || *(_QWORD *)(*(_QWORD *)v89 + 24LL) )
              goto LABEL_86;
            goto LABEL_145;
          case 5uLL:
            v87 = v60;
            goto LABEL_145;
          case 6uLL:
            goto LABEL_86;
          case 0xCuLL:
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
            v93 = (__int64)&v86[16 * v88];
            do
            {
              v94 = v86[8];
              if ( v94 == 1 )
              {
                if ( (*v86 & 0x80u) != 0 )
                  v86[10] &= 0xDFu;
              }
              else if ( v94 == 5 )
              {
                v86[8] = 7;
              }
              v86 += 16;
            }
            while ( (unsigned __int8 *)v93 != v86 );
            break;
          default:
            abort();
            return result;
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
    v96 = *((_QWORD *)v9 + 19) < 0;
    v97 = *((_BYTE *)v9 + 176);
    v9[45] = 1;
    *((_BYTE *)v9 + 176) = v97 & 0xF9 | (2 * ((v87 | (!v96 && !v14)) & 1));
  }
LABEL_86:
  v61 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 13) + 24LL) + 56LL);
  *((_QWORD *)v9 + 18) = v61;
  v62 = sub_4090D0((__int64)&v111, *((_QWORD *)v9 + 6) + 24 * v61);
  v110.m128i_i32[0] = v62;
  if ( !v62 )
  {
    if ( *((_QWORD *)v9 + 19) > 0LL )
    {
      v63 = v112;
      if ( v112 > 0 )
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
              if ( !sub_408030(
                      v63,
                      (__int64 *)&ptr,
                      **(_QWORD **)(*((_QWORD *)v9 + 5) + 24LL * *((_QWORD *)ptr + v64) + 16)) )
                break;
            }
LABEL_90:
            if ( v63 <= ++v64 )
              goto LABEL_99;
          }
          v69 = sub_408570((__int64)&v111, *((_QWORD *)v9 + 6) + 24 * v68);
          if ( v69 )
            break;
          v63 = v112;
          v64 = 1LL;
          if ( v112 <= 1 )
            goto LABEL_99;
        }
        v62 = v69;
        goto LABEL_103;
      }
    }
LABEL_99:
    v70 = sub_4092E0(&v110, v9, (__int64)&v111, 0);
    *((_QWORD *)v9 + 9) = v70;
    if ( v70 )
    {
      if ( *((_BYTE *)v70 + 104) >= 0 )
      {
        *((_QWORD *)v9 + 12) = v70;
        *((_QWORD *)v9 + 11) = v70;
        *((_QWORD *)v9 + 10) = v70;
LABEL_102:
        free(ptr);
        goto LABEL_103;
      }
      *((_QWORD *)v9 + 10) = sub_4092E0(&v110, v9, (__int64)&v111, 1u);
      *((_QWORD *)v9 + 11) = sub_4092E0(&v110, v9, (__int64)&v111, 2u);
      v90 = sub_4092E0(&v110, v9, (__int64)&v111, 6u);
      v14 = *((_QWORD *)v9 + 10) == 0LL;
      *((_QWORD *)v9 + 12) = v90;
      if ( !v14 && *((_QWORD *)v9 + 11) && v90 )
        goto LABEL_102;
    }
    v62 = v110.m128i_i32[0];
  }
LABEL_103:
  v71 = *(_QWORD *)v7;
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
  sub_407C60((__int64)&v114);
  result = v109;
  if ( v109 )
    goto LABEL_111;
  return result;
}

char *__fastcall sub_4137A0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // eax
  char *result; // rax

  v3 = qword_61D690;
  *(_BYTE *)(a3 + 56) = (16 * (((unsigned __int64)qword_61D690 >> 25) & 1)) | *(_BYTE *)(a3 + 56) & 0xEF | 0x80;
  v4 = sub_4129F0(a3, a1, a2, v3);
  if ( v4 )
    result = dcgettext(0LL, (const char *)(qword_416F40[v4] + 4288480), 5);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_413820(__int64 a1)
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
  sub_40C2D0(a1, (_QWORD *)(v2[9] + 16LL), (_QWORD *)(v2[9] + 24LL), v1);
  v3 = v2[10];
  if ( v2[9] != v3 )
  {
    sub_40C2D0(a1, (_QWORD *)(v3 + 16), (_QWORD *)(v3 + 24), v1);
    v3 = v2[9];
  }
  v4 = v2[11];
  if ( v4 != v3 )
  {
    sub_40C2D0(a1, (_QWORD *)(v4 + 16), (_QWORD *)(v4 + 24), v1);
    v3 = v2[9];
  }
  v5 = v2[12];
  if ( v5 != v3 )
    sub_40C2D0(a1, (_QWORD *)(v5 + 16), (_QWORD *)(v5 + 24), v1);
  *(_BYTE *)(a1 + 56) |= 8u;
  return 0LL;
}

__int64 __fastcall sub_4138F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned __int64 *a7, char a8)
{
  __int64 v8; // rax
  void *v9; // r8
  unsigned __int64 *v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r15
  char v13; // al
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // r13
  size_t v17; // rdi
  __int64 *v18; // rbp
  int v19; // eax
  __int64 v20; // r12
  unsigned __int64 v22; // rdx
  int v23; // eax
  int v24; // er9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  int v31; // eax
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

  v8 = a5;
  v9 = (void *)(a4 + a5);
  v10 = a7;
  if ( a4 < 0 || a4 > a3 )
    return -1LL;
  v11 = a4;
  v12 = a1;
  if ( (__int64)v9 > a3 || v8 >= 0 && a4 > (__int64)v9 )
  {
    v9 = (void *)a3;
  }
  else if ( (__int64)v9 < 0 || v8 < 0 && a4 <= (__int64)v9 )
  {
    v13 = *(_BYTE *)(a1 + 56);
    v9 = 0LL;
    v45 = (*(_BYTE *)(a1 + 56) >> 5) & 3;
    goto LABEL_13;
  }
  v13 = *(_BYTE *)(a1 + 56);
  v45 = (*(_BYTE *)(a1 + 56) >> 5) & 3;
  if ( (__int64)v9 > a4 && *(_QWORD *)(a1 + 32) && !(v13 & 8) )
  {
    v44 = a6;
    v42 = a3;
    ptrb = v9;
    sub_413820(a1);
    v13 = *(_BYTE *)(a1 + 56);
    a6 = v44;
    a3 = v42;
    v9 = ptrb;
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
  if ( (__int64)v15 > 0 )
    goto LABEL_17;
LABEL_42:
  v17 = 16LL;
  v15 = 1LL;
  v16 = 1LL;
  v10 = 0LL;
LABEL_18:
  v43 = a6;
  v41 = a3;
  ptr = v9;
  v18 = (__int64 *)malloc(v17);
  if ( !v18 )
    return -2LL;
  v19 = sub_40E940(v12, a2, v41, v11, (__int64)ptr, v43, v15, v18, v45);
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
            *(_QWORD *)(v25 + v28 * 4) = v18[v28];
            *(_QWORD *)(v26 + v28 * 4) = v18[v28 + 1];
            v28 += 2LL;
          }
          while ( v28 != 2 * v16 );
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
        v31 = (2 * v24) | *(_BYTE *)(v12 + 56) & 0xF9;
        *(_BYTE *)(v12 + 56) = (2 * v24) | *(_BYTE *)(v12 + 56) & 0xF9;
        if ( !(v31 & 6) )
          goto LABEL_21;
LABEL_37:
        v20 = *v18;
        if ( a8 )
        {
          if ( v11 != v20 )
            __assert_fail("pmatch[0].rm_so == start", "lib/regexec.c", 0x1BDu, "re_search_stub");
          v20 = v18[1] - v20;
        }
        goto LABEL_22;
      }
      size = 8 * v22;
      v35 = realloc((void *)v10[1], 8 * v22);
      if ( v35 )
      {
        v36 = realloc((void *)v10[2], size);
        v24 = 1;
        if ( !v36 )
        {
          free(v35);
          v24 = 0;
          goto LABEL_36;
        }
        v10[1] = (unsigned __int64)v35;
        v10[2] = (unsigned __int64)v36;
        *v10 = v16 + 1;
        goto LABEL_30;
      }
    }
    else
    {
      v32 = 8 * v22;
      v33 = malloc(8 * v22);
      v10[1] = (unsigned __int64)v33;
      if ( v33 )
      {
        ptra = v33;
        v34 = malloc(v32);
        v10[2] = (unsigned __int64)v34;
        if ( v34 )
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

__int64 __fastcall sub_413D50(__int64 a1, const void *a2, signed __int64 a3, const void *a4, size_t a5, __int64 a6, __int64 a7, unsigned __int64 *a8, __int64 a9, char a10)
{
  const void *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r12
  size_t v13; // rbp
  size_t v14; // rbx
  int v15; // edi
  __int64 v16; // r9
  char v17; // r8
  char *v18; // r13
  __int64 v19; // rbx
  char *v21; // rax
  __int64 v22; // [rsp+10h] [rbp-48h]

  v10 = a4;
  v11 = a6;
  v12 = a1;
  v13 = a5;
  v14 = a3;
  v15 = a5 >> 63;
  v16 = a9;
  v17 = a10;
  if ( (a9 < 0) | (unsigned __int8)v15 || a3 < 0 || __OFADD__(v13, a3) )
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
  v19 = sub_4138F0(v12, (__int64)v10, v13 + v14, v11, a7, v16, a8, v17);
  free(v18);
  return v19;
}

void __fastcall sub_414010(void **a1)
{
  void **v1; // rbx
  void *v2; // rdi
  void *v3; // rdi

  v1 = a1;
  v2 = *a1;
  if ( v2 )
    sub_40B610(v2);
  *v1 = 0LL;
  v3 = v1[4];
  v1[1] = 0LL;
  free(v3);
  v1[4] = 0LL;
  free(v1[5]);
  v1[5] = 0LL;
}

__int64 __fastcall sub_414100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  return sub_4138F0(a1, a2, a3, a4, 0LL, a3, a5, 1);
}

__int64 __fastcall sub_414120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 *a6)
{
  return sub_4138F0(a1, a2, a3, a4, a5, a3, a6, 0);
}

__int64 __fastcall sub_414140(__int64 a1, const void *a2, signed __int64 a3, const void *a4, size_t a5, __int64 a6, unsigned __int64 *a7, __int64 a8)
{
  return sub_413D50(a1, a2, a3, a4, a5, a6, 0LL, a7, a8, 1);
}

__int64 __fastcall sub_414160(__int64 a1, const void *a2, signed __int64 a3, const void *a4, size_t a5, __int64 a6, __int64 a7, unsigned __int64 *a8, __int64 a9)
{
  return sub_413D50(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0);
}

__int64 __fastcall sub_4141C0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_414900(stream);
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

_BYTE *__fastcall sub_414220(_BYTE *a1)
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

size_t __fastcall sub_414280(const char *a1)
{
  size_t result; // rax
  __int64 v2; // rdx

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

__int64 __fastcall sub_414300(char a1)
{
  return sub_414980(a1);
}

bool __fastcall sub_414320(int a1)
{
  char *v1; // rdx
  bool result; // al

  v1 = setlocale(a1, 0LL);
  result = 1;
  if ( v1 )
  {
    result = 0;
    if ( strcmp(v1, (const char *)&unk_417170) )
      result = strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_414380()
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
                sub_414900(v60);
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
            sub_414900(v39);
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

__int64 __fastcall sub_4148F0(char a1)
{
  return sub_414980(a1);
}

int __fastcall sub_414900(FILE *stream)
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
  if ( !(unsigned int)sub_414AC0(stream) )
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

__int64 __fastcall sub_414980(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_61D680 < 0 )
    {
      v3 = sub_414980(a1);
      if ( v3 >= 0 && dword_61D680 == -1 )
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
        dword_61D680 = 1;
      }
      else
      {
        v3 = sub_414980(a1);
        if ( v3 >= 0 )
        {
          dword_61D680 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_414AC0(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_4055D0(stream, 0LL, 1);
  return fflush(stream);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_414B70(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_61B268 )
    v1 = (void *)unk_61B268;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_414B88(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_61AE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
