#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char *v3; // rbx
  char *v4; // rax
  int v5; // eax
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // dl
  __int64 v12; // r13
  char *v13; // rax
  bool v14; // zf
  const char *v15; // r14
  const char *v16; // r13
  const char *v17; // r15
  const char *v18; // rax
  _BOOL4 v19; // eax
  int v20; // eax
  __int64 v21; // rax
  int i; // ebx
  char *v24; // rdi
  char *v25; // rcx
  __ssize_t v26; // rax
  char *v28; // rax
  char v29; // r15
  const char *v30; // rcx
  size_t v31; // rax
  char v32; // dl
  int *v33; // rax
  __int64 v34; // rax
  char *v35; // r8
  __int64 v36; // r9
  size_t v37; // rax
  size_t v38; // rax
  char *v39; // r13
  char v40; // dl
  size_t v41; // rcx
  char *v42; // rax
  char *v43; // rax
  char *v44; // rax
  char *v45; // rbp
  int *v46; // rax
  char *v47; // rax
  const char *v48; // r15
  __int64 v49; // rax
  const unsigned __int16 **v50; // rax
  __int64 v51; // rcx
  char *v52; // rax
  char *v53; // rax
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  __int64 v59; // rbx
  char *v60; // rax
  __int64 v61; // rbx
  char *v62; // rax
  char *v63; // rax
  char *v64; // rax
  char *nptr; // [rsp+0h] [rbp-58h]
  char *nptra; // [rsp+0h] [rbp-58h]
  char *nptrb; // [rsp+0h] [rbp-58h]
  const char *v68; // [rsp+8h] [rbp-50h]
  int *v69; // [rsp+8h] [rbp-50h]
  __int64 v70; // [rsp+8h] [rbp-50h]
  char *s; // [rsp+10h] [rbp-48h] BYREF
  size_t n[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_405970(*a2);
  v3 = setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  v4 = nl_langinfo(0x10000);
  s2 = v4;
  if ( !v4 || !*v4 )
    s2 = ".";
  dword_61033C = strlen(s2);
  sub_409FA0(sub_405490);
  while ( 1 )
  {
    v5 = sub_4096E0((unsigned int)a1, a2, "d:z", &off_40BD80, 0LL);
    if ( v5 == -1 )
      break;
    if ( v5 == 132 )
      goto LABEL_51;
    if ( v5 <= 132 )
    {
      if ( v5 == 122 )
      {
        byte_610250 = 0;
      }
      else if ( v5 <= 122 )
      {
        if ( v5 == -130 )
          sub_404360(0);
        if ( v5 != 100 )
        {
          if ( v5 == -131 )
          {
            sub_407A10(
              (_DWORD)stdout,
              (unsigned int)"numfmt",
              (unsigned int)&unk_40A199,
              (_DWORD)off_610280,
              (unsigned int)"Assaf Gordon",
              0);
            exit(0);
          }
LABEL_40:
          sub_404360(1);
        }
        if ( *nptr && nptr[1] )
          goto LABEL_170;
        dword_610254 = *nptr;
      }
      else if ( v5 == 129 )
      {
        qword_610270 = sub_4029B0(nptr);
      }
      else if ( v5 <= 129 )
      {
        if ( v5 != 128 )
          goto LABEL_40;
        HIDWORD(qword_6103AC) = dword_40C0D0[sub_4053B0("--from", nptr, off_40C100, dword_40C0D0, 4LL, off_610288)];
      }
      else if ( v5 == 130 )
      {
        LODWORD(qword_6103AC) = dword_40C090[sub_4053B0("--to", nptr, off_40C0A0, dword_40C090, 4LL, off_610288)];
      }
      else
      {
        qword_610268 = sub_4029B0(nptr);
      }
    }
    else
    {
      if ( v5 == 137 )
        goto LABEL_42;
      if ( v5 > 137 )
      {
        if ( v5 == 139 )
        {
          if ( nptr )
          {
            if ( (unsigned int)sub_408550(nptr) || !qword_610350 )
            {
              v3 = (char *)sub_407590(nptr);
              v6 = dcgettext(0LL, "invalid header value %s", 5);
              error(1, 0, v6, v3);
LABEL_51:
              dword_610278 = dword_40C030[sub_4053B0("--round", nptr, off_40C060, dword_40C030, 4LL, off_610288)];
            }
          }
          else
          {
            qword_610350 = 1LL;
          }
        }
        else if ( v5 < 139 )
        {
          byte_610338 = 1;
LABEL_42:
          byte_610348 = 1;
        }
        else if ( v5 == 140 )
        {
          qword_610370 = (__int64)nptr;
        }
        else
        {
          if ( v5 != 141 )
            goto LABEL_40;
          dword_6103A8 = dword_40BFE0[sub_4053B0("--invalid", nptr, off_40C000, dword_40BFE0, 4LL, off_610288)];
        }
      }
      else if ( v5 == 134 )
      {
        dword_610398 = 1;
      }
      else if ( v5 < 134 )
      {
        s1 = nptr;
      }
      else if ( v5 == 135 )
      {
        if ( (unsigned int)sub_407E00(nptr) || !qword_610380 )
          goto LABEL_168;
        if ( qword_610380 < 0 )
        {
          dword_610258 = 0;
          qword_610380 = -qword_610380;
        }
      }
      else
      {
        if ( nmemb )
          goto LABEL_169;
        sub_404B00(nptr, 1LL);
      }
    }
  }
  if ( qword_610370 && dword_610398 )
    goto LABEL_162;
  if ( !v3 && byte_610348 )
  {
    v43 = dcgettext(0LL, "failed to set locale", 5);
    error(0, 0, v43);
  }
  if ( !byte_610348 || qword_6103AC )
    goto LABEL_65;
  v3 = (char *)qword_610370;
  if ( dword_610398 )
  {
    if ( qword_610370 )
      goto LABEL_66;
LABEL_109:
    if ( byte_610348 && !*nl_langinfo(65537) )
    {
      v28 = dcgettext(0LL, "grouping has no effect in this locale", 5);
      error(0, 0, v28);
    }
    goto LABEL_82;
  }
  if ( qword_610380 )
  {
    if ( !qword_610370 )
      goto LABEL_82;
  }
  else if ( !qword_610370 )
  {
    v7 = dcgettext(0LL, "no conversion option specified", 5);
    error(0, 0, v7);
LABEL_65:
    v3 = (char *)qword_610370;
    if ( !qword_610370 )
      goto LABEL_81;
  }
LABEL_66:
  n[0] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  while ( 2 )
  {
    v11 = v3[v9];
    if ( v11 != 37 )
    {
      if ( v11 )
      {
        v10 = 1LL;
LABEL_69:
        v9 += v10;
        ++v8;
        continue;
      }
      v3 = (char *)sub_407590(v3);
      v52 = dcgettext(0LL, "format %s has no %% directive", 5);
      error(1, 0, v52, v3);
      goto LABEL_161;
    }
    break;
  }
  v12 = v9 + 1;
  if ( v3[v9 + 1] == 37 )
  {
    v10 = 2LL;
    goto LABEL_69;
  }
  v29 = 0;
  v30 = &v3[v12];
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v31 = strspn(v30, " ");
        v12 += v31;
        v30 = &v3[v12];
        v32 = v3[v12];
        if ( v32 != 39 )
          break;
        dword_610398 = 1;
        v30 = &v3[++v12];
      }
      if ( v32 != 48 )
        break;
      ++v12;
      v29 = 1;
      v30 = &v3[v12];
    }
  }
  while ( v31 );
  v33 = __errno_location();
  *v33 = 0;
  v69 = v33;
  v34 = strtol(&v3[v12], (char **)n, 10);
  v35 = (char *)v69;
  v36 = v34;
  if ( *v69 == 34 )
  {
LABEL_161:
    v3 = (char *)sub_407590(v3);
    v53 = dcgettext(0LL, "invalid format %s (width overflow)", 5);
    error(1, 0, v53, v3);
LABEL_162:
    v54 = dcgettext(0LL, "--grouping cannot be combined with --format", 5);
    error(1, 0, v54);
LABEL_163:
    v55 = dcgettext(0LL, "grouping cannot be combined with --to", 5);
    error(1, 0, v55);
LABEL_164:
    v3 = (char *)sub_407590(v3);
    v56 = dcgettext(0LL, "format %s has too many %% directives", 5);
    error(1, 0, v56, v3);
    goto LABEL_165;
  }
  if ( (char *)n[0] != &v3[v12] && v34 )
  {
    if ( byte_610348 && qword_610380 )
    {
      if ( v29 && v34 > 0 )
      {
LABEL_123:
        qword_610378 = v36;
        goto LABEL_124;
      }
      nptra = (char *)v69;
      v70 = v34;
      v47 = dcgettext(0LL, "--format padding overriding --padding", 5);
      error(0, 0, v47);
      v36 = v70;
      v35 = nptra;
    }
    if ( v36 < 0 )
    {
      dword_610258 = 0;
      qword_610380 = -v36;
    }
    else
    {
      if ( v29 )
        goto LABEL_123;
      qword_610380 = v36;
    }
  }
LABEL_124:
  v37 = n[0] - (_QWORD)v3;
  if ( !*(_BYTE *)n[0] )
    goto LABEL_166;
  if ( *(_BYTE *)n[0] != 46 )
    goto LABEL_126;
  *(_DWORD *)v35 = 0;
  v48 = &v3[v37 + 1];
  nptrb = v35;
  v49 = strtol(v48, (char **)n, 10);
  qword_610260 = v49;
  if ( *(_DWORD *)nptrb == 34
    || v49 < 0
    || (v50 = __ctype_b_loc(), v51 = *v48, ((*v50)[v51] & 1) != 0)
    || (_BYTE)v51 == 43 )
  {
LABEL_167:
    v59 = sub_407590(v3);
    v60 = dcgettext(0LL, "invalid precision in format %s", 5);
    error(1, 0, v60, v59);
LABEL_168:
    v61 = sub_407590(nptr);
    v62 = dcgettext(0LL, "invalid padding value %s", 5);
    error(1, 0, v62, v61);
LABEL_169:
    v63 = dcgettext(0LL, "multiple field specifications", 5);
    error(1, 0, v63);
LABEL_170:
    v64 = dcgettext(0LL, "the delimiter must be a single character", 5);
    error(1, 0, v64);
    start();
  }
  v37 = n[0] - (_QWORD)v3;
LABEL_126:
  if ( v3[v37] != 102 )
  {
LABEL_165:
    v3 = (char *)sub_407590(v3);
    v57 = dcgettext(0LL, "invalid format %s, directive must be %%[0]['][-][N][.][N]f", 5);
    error(1, 0, v57, v3);
LABEL_166:
    v3 = (char *)sub_407590(v3);
    v58 = dcgettext(0LL, "format %s ends in %%", 5);
    error(1, 0, v58, v3);
    goto LABEL_167;
  }
  v38 = v37 + 1;
  v39 = &v3[v38];
  v40 = v3[v38];
  if ( v40 )
  {
    do
    {
      v41 = v38 + 1;
      if ( v40 == 37 )
      {
        if ( v3[v38 + 1] != 37 )
          goto LABEL_164;
        v41 = v38 + 2;
        v40 = v3[v38 + 2];
      }
      else
      {
        v40 = v3[v38 + 1];
      }
      v38 = v41;
    }
    while ( v40 );
    if ( v8 )
    {
LABEL_74:
      v13 = (char *)sub_407DE0(v3, v8);
      v14 = *v39 == 0;
      qword_610368 = v13;
      if ( v14 )
        goto LABEL_75;
    }
    qword_610360 = (char *)sub_407D80(v39);
    goto LABEL_75;
  }
  if ( v8 )
    goto LABEL_74;
LABEL_75:
  if ( byte_610338 )
  {
    v68 = (const char *)sub_407570(2LL);
    v15 = "Left";
    v16 = "yes";
    v17 = (const char *)sub_407570(1LL);
    if ( dword_610258 )
      v15 = "Right";
    nptr = (char *)qword_610380;
    if ( !dword_610398 )
      v16 = "no";
    v18 = (const char *)sub_407570(0LL);
    __fprintf_chk(
      stderr,
      1LL,
      "format String:\n  input: %s\n  grouping: %s\n  padding width: %ld\n  alignment: %s\n  prefix: %s\n  suffix: %s\n",
      v18,
      v16,
      nptr,
      v15,
      v17,
      v68);
  }
LABEL_81:
  if ( dword_610398 )
  {
    if ( !(_DWORD)qword_6103AC )
      goto LABEL_109;
    goto LABEL_163;
  }
LABEL_82:
  if ( qword_610380 >= (unsigned __int64)qword_610388 )
    sub_402BD0();
  v19 = 0;
  if ( !qword_610380 )
    v19 = dword_610254 == 128;
  dword_610358 = v19;
  if ( dword_6103A8 )
    status = 0;
  v20 = dword_6102FC;
  if ( dword_6102FC < a1 )
  {
    if ( !byte_610348
      || !qword_610350
      || (v44 = dcgettext(0LL, "--header ignored with command-line input", 5),
          error(0, 0, v44),
          v20 = dword_6102FC,
          a1 > dword_6102FC) )
    {
      i = 1;
      do
      {
        i &= sub_4041A0(a2[v20]);
        v20 = dword_6102FC + 1;
        dword_6102FC = v20;
      }
      while ( v20 < a1 );
      goto LABEL_100;
    }
    return 0LL;
  }
  v21 = qword_610350;
  s = 0LL;
  n[0] = 0LL;
  --qword_610350;
  if ( v21 )
  {
    do
    {
      if ( getdelim(&s, n, (unsigned __int8)byte_610250, stdin) <= 0 )
        break;
      fputs_unlocked(s, stdout);
    }
    while ( qword_610350-- );
  }
  for ( i = 1; ; i &= sub_4041A0(v24) )
  {
    v26 = getdelim(&s, n, (unsigned __int8)byte_610250, stdin);
    if ( v26 <= 0 )
      break;
    v24 = s;
    v25 = &s[v26 - 1];
    if ( *v25 == (unsigned __int8)byte_610250 )
    {
      *v25 = 0;
      v24 = s;
    }
  }
  if ( (stdin->_flags & 0x20) != 0 )
  {
    v45 = dcgettext(0LL, "error reading input", 5);
    v46 = __errno_location();
    error(0, *v46, v45);
  }
LABEL_100:
  if ( !byte_610348 )
  {
    if ( !i )
      goto LABEL_137;
    return 0LL;
  }
  if ( i )
    return 0LL;
  v42 = dcgettext(0LL, "failed to convert some of the input numbers", 5);
  error(0, 0, v42);
LABEL_137:
  if ( (unsigned int)(dword_6103A8 - 2) <= 1 )
    return 0LL;
  return 2LL;
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

__int64 *sub_4028FB()
{
  return &program_invocation_short_name;
}

__int64 sub_40291A()
{
  return 0LL;
}

__int64 *sub_402951()
{
  __int64 *result; // rax

  if ( !byte_610328 )
  {
    while ( qword_610330 < (unsigned __int64)(&qword_60FE48 - qword_60FE40 - 1) )
      ((void (*)(void))qword_60FE40[++qword_610330])();
    result = sub_4028FB();
    byte_610328 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_4029A8()
{
  return sub_40291A();
}

__int64 __fastcall sub_4029B0(char *nptr)
{
  size_t v1; // rax
  size_t v2; // rbx
  size_t v3; // r12
  char *v4; // r9
  char *v5; // r12
  char *v7; // rax
  char *v8; // r12
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // [rsp+0h] [rbp-28h]
  __int64 v12; // [rsp+8h] [rbp-20h]

  v1 = strlen(nptr);
  v11 = 0LL;
  if ( v1 && (v2 = v1, v3 = v1 - 1, (unsigned int)(nptr[v1 - 1] - 48) > 9) )
  {
    v7 = (char *)sub_407B50(v1 + 2);
    v8 = &v7[v3];
    v11 = v8;
    v4 = (char *)memcpy(v7, nptr, v2);
    if ( *v8 != 105 || v2 == 1 || (unsigned int)(*(v8 - 1) - 48) <= 9 )
    {
      v11 = v8 + 2;
      *(_WORD *)(v8 + 1) = 66;
      v5 = v4;
    }
    else
    {
      *v8 = 0;
      v5 = v4;
    }
  }
  else
  {
    v4 = nptr;
    v5 = 0LL;
  }
  if ( (unsigned int)sub_408550(v4) || *v11 || !v12 )
  {
    free(v5);
    v9 = sub_407590(nptr);
    v10 = dcgettext(0LL, "invalid unit size: %s", 5);
    error(1, 0, v10, v9);
    return sub_402AF0();
  }
  else
  {
    free(v5);
    return v12;
  }
}

__int64 __fastcall sub_402AF0(const char **a1, long double *a2, _BYTE *a3)
{
  const char *v4; // rcx
  unsigned int v5; // edx
  const char *v6; // rcx
  __int64 result; // rax
  unsigned int v8; // r8d
  long double v9; // fst7
  int v10; // edx
  int v11; // edx

  v4 = *a1;
  if ( *a1 )
  {
    v5 = *v4 - 48;
    if ( v5 <= 9 )
    {
      v6 = v4 + 1;
      result = 0LL;
      v8 = 0;
      v9 = 0.0;
      while ( 1 )
      {
        if ( 0.0 != v9 || v5 )
          ++v8;
        if ( v8 > 0x12 )
        {
          if ( v8 > 0x1B )
            return 2LL;
          result = 1LL;
        }
        *a1 = v6;
        v9 = v9 * 10.0 + (long double)(int)v5;
        if ( v6 )
        {
          v10 = *v6++;
          v5 = v10 - 48;
          if ( v5 <= 9 )
            continue;
        }
        goto LABEL_14;
      }
    }
  }
  v11 = strncmp(*a1, s2, dword_61033C);
  result = 3LL;
  if ( !v11 )
  {
    result = 0LL;
    v9 = 0.0;
LABEL_14:
    if ( *a3 )
      v9 = -v9;
    *a2 = v9;
  }
  return result;
}

char *__fastcall sub_402BD0(__int64 a1)
{
  char *result; // rax

  qword_610388 = a1 + 1;
  result = (char *)sub_407BB0(dest);
  dest = result;
  return result;
}

__int64 __fastcall sub_402C00(char *s, __int64 a2)
{
  const char *v2; // r12
  _QWORD *v3; // rax
  unsigned int v4; // ebx
  const char *v6; // r13
  size_t v7; // rbx
  size_t v8; // rax
  const char *v9; // rbx
  int v10; // eax
  char v11; // dl
  __int64 v12; // rbx
  char *v13; // r13
  const unsigned __int16 *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  char v17; // dl
  char *v18; // rax
  char *v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r15
  char *v22; // r14
  int v23; // eax
  unsigned __int64 v24; // r14
  char *v25; // r15
  const unsigned __int16 **v26; // rax
  char v27; // dl
  const unsigned __int16 *v28; // rsi
  char *v29; // rax
  char *v30; // r15
  char v31; // dl
  int v32; // eax
  __int64 v33; // r15
  __int64 v34; // rbx
  char *v35; // rax
  const char *v36; // r14
  const char *v37; // rax
  char *v38; // r14
  unsigned int v39; // eax
  int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rbx
  char *v43; // rax
  unsigned int v46; // eax
  char *v47; // rax
  unsigned int v48; // ebp
  char *v49; // r12
  int v50; // r13d
  char v51; // cl
  unsigned int v52; // r13d
  __int64 v53; // rsi
  __int64 v54; // rax
  int v55; // edi
  int v56; // eax
  int v57; // edx
  __int16 v58; // dx
  unsigned int v59; // kr00_4
  const char *v60; // rbx
  __int64 v61; // r13
  char *v62; // rax
  int v63; // eax
  int v64; // edx
  __int16 v65; // dx
  const char *v66; // rax
  int v67; // ebx
  char *v68; // rax
  __int64 v69; // r9
  const char *v70; // rdx
  unsigned int v71; // eax
  char v72; // bl
  char *v73; // rsi
  char *v74; // rdx
  int v75; // ecx
  unsigned int v76; // eax
  const char *v77; // rax
  unsigned __int64 v78; // rcx
  FILE *v79; // rsi
  __int64 v81; // r9
  const char *v82; // rax
  unsigned int v83; // eax
  __int16 v84; // ax
  unsigned int v85; // kr04_4
  const char *v86; // rax
  __int16 v87; // ax
  unsigned int v88; // kr08_4
  const char *v89; // rax
  char *v90; // rax
  char *v91; // rax
  char *v92; // rax
  long double v93; // [rsp+0h] [rbp-188h]
  long double v94; // [rsp+0h] [rbp-188h]
  long double v96; // [rsp+10h] [rbp-178h]
  long double v97; // [rsp+10h] [rbp-178h]
  long double v99; // [rsp+10h] [rbp-178h]
  long double v100; // [rsp+10h] [rbp-178h]
  long double v101; // [rsp+10h] [rbp-178h]
  long double v102; // [rsp+10h] [rbp-178h]
  long double v103; // [rsp+10h] [rbp-178h]
  int v107; // [rsp+20h] [rbp-168h]
  int v108; // [rsp+20h] [rbp-168h]
  __int64 v116; // [rsp+20h] [rbp-168h]
  __int64 v117; // [rsp+20h] [rbp-168h]
  __int64 v118; // [rsp+20h] [rbp-168h]
  __int64 v119; // [rsp+20h] [rbp-168h]
  int v127; // [rsp+30h] [rbp-158h]
  unsigned int v128; // [rsp+30h] [rbp-158h]
  __int64 v129; // [rsp+30h] [rbp-158h]
  __int64 v130; // [rsp+30h] [rbp-158h]
  __int128 v131; // [rsp+30h] [rbp-158h]
  unsigned int v138; // [rsp+30h] [rbp-158h]
  unsigned int v140; // [rsp+30h] [rbp-158h]
  char v142; // [rsp+40h] [rbp-148h]
  char v143; // [rsp+40h] [rbp-148h]
  int v144; // [rsp+40h] [rbp-148h]
  __int64 v146; // [rsp+40h] [rbp-148h]
  __int64 v147; // [rsp+40h] [rbp-148h]
  __int64 v148; // [rsp+40h] [rbp-148h]
  __int64 v149; // [rsp+40h] [rbp-148h]
  unsigned int v159; // [rsp+50h] [rbp-138h]
  __int64 v161; // [rsp+60h] [rbp-128h]
  __int64 v162; // [rsp+60h] [rbp-128h]
  __int16 v163; // [rsp+6Ch] [rbp-11Ch]
  __int16 v164; // [rsp+6Ch] [rbp-11Ch]
  __int16 v165; // [rsp+6Eh] [rbp-11Ah]
  unsigned __int16 v166; // [rsp+6Eh] [rbp-11Ah]
  char v167; // [rsp+7Eh] [rbp-10Ah] BYREF
  char v168; // [rsp+7Fh] [rbp-109h] BYREF
  char *s1; // [rsp+80h] [rbp-108h] BYREF
  char *v170; // [rsp+88h] [rbp-100h] BYREF
  long double v171[4]; // [rsp+90h] [rbp-F8h] BYREF
  char src[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v2 = s;
  v3 = ptr;
  if ( ptr )
  {
    while ( *v3 != -1LL )
    {
      if ( (unsigned __int64)a2 >= *v3 && (unsigned __int64)a2 <= v3[1] )
        goto LABEL_10;
      v3 += 2;
    }
LABEL_7:
    v4 = 1;
    fputs_unlocked(s, stdout);
    return v4;
  }
  if ( a2 != 1 )
    goto LABEL_7;
LABEL_10:
  v6 = s1;
  if ( s1 )
  {
    v7 = strlen(s);
    v8 = strlen(v6);
    if ( v7 > v8 )
    {
      v9 = &s[v7 - v8];
      v10 = strcmp(v6, v9);
      v11 = byte_610338;
      if ( v10 )
      {
        if ( byte_610338 )
          fwrite("no valid suffix found\n", 1uLL, 0x16uLL, stderr);
      }
      else
      {
        *v9 = 0;
        if ( v11 )
        {
          v66 = (const char *)sub_407590(v6);
          __fprintf_chk(stderr, 1LL, "trimming suffix %s\n", v66);
        }
      }
    }
  }
  v12 = (unsigned __int8)*s;
  if ( (_BYTE)v12 )
  {
    v13 = s;
    v14 = *__ctype_b_loc();
    do
    {
      if ( (v14[v12] & 1) == 0 )
        break;
      v12 = (unsigned __int8)*++v13;
    }
    while ( (_BYTE)v12 );
    v15 = (_DWORD)s - (_DWORD)v13;
  }
  else
  {
    v13 = s;
    v15 = 0;
  }
  if ( dword_610358 )
  {
    if ( v15 || a2 > 1 )
    {
      v41 = strlen(s);
      qword_610380 = v41;
      if ( v41 >= qword_610388 )
        sub_402BD0(v41);
    }
    else
    {
      qword_610380 = 0LL;
    }
    if ( !byte_610338 )
    {
      v107 = 0;
      __asm (" fld     dword ptr [rsp+168h+var_168] ");
      v127 = HIDWORD(qword_6103AC);
      __asm (" fstp    [rsp+168h+var_F8] ");
      v16 = (unsigned int)(HIDWORD(qword_6103AC) - 3) < 2 ? 1024 : 1000;
      goto LABEL_26;
    }
    __fprintf_chk(stderr, 1LL, "setting Auto-Padding to %ld characters\n", qword_610380);
  }
  s1 = 0LL;
  v108 = 0;
  __asm (" fld     dword ptr [rsp+168h+var_168] ");
  v127 = HIDWORD(qword_6103AC);
  __asm (" fstp    [rsp+168h+var_F8] ");
  v16 = (unsigned int)(HIDWORD(qword_6103AC) - 3) < 2 ? 1024 : 1000;
  if ( byte_610338 )
  {
    v36 = (const char *)sub_407570(1LL);
    v37 = (const char *)sub_407570(0LL);
    __fprintf_chk(
      stderr,
      1LL,
      "simple_strtod_human:\n  input string: %s\n  locale decimal-point: %s\n  MAX_UNSCALED_DIGITS: %d\n",
      v37,
      v36,
      18LL);
  }
LABEL_26:
  v17 = 0;
  v18 = v13;
  if ( *v13 == 45 )
  {
    v18 = v13 + 1;
    v17 = 1;
  }
  v167 = v17;
  s1 = v18;
  LODWORD(v19) = sub_402AF0((const char **)&s1, v171, &v167);
  if ( (unsigned int)v19 > 1 )
    goto LABEL_88;
  v21 = dword_61033C;
  v22 = s1;
  v23 = strncmp(s1, s2, dword_61033C);
  if ( v23 )
  {
    v24 = 0LL;
    goto LABEL_31;
  }
  __asm (" fld     dword ptr [rsp+168h+var_168] ");
  v38 = &v22[v21];
  s1 = v38;
  __asm (" fstp    tbyte ptr [rsp+168h+src] ");
  if ( *v38 == 45 )
  {
    ++v38;
    LOBYTE(v23) = 1;
  }
  v168 = v23;
  v170 = v38;
  v39 = sub_402AF0((const char **)&v170, (long double *)src, &v168);
  if ( v39 > 1 )
  {
    LODWORD(v19) = v39;
LABEL_88:
    switch ( (int)v19 )
    {
      case 2:
        v24 = 0LL;
        v60 = "value too large to be converted: %s";
        break;
      case 3:
        goto LABEL_159;
      case 4:
        v24 = 0LL;
        v60 = "rejecting suffix in input: %s (consider using --from)";
        break;
      case 5:
        v24 = 0LL;
        v60 = "invalid suffix in input: %s";
        break;
      case 6:
        v24 = 0LL;
        v60 = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
        break;
      default:
        v24 = 0LL;
        v60 = 0LL;
        break;
    }
    goto LABEL_137;
  }
  if ( v39 == 1 )
    LODWORD(v19) = 1;
  if ( v168 )
  {
LABEL_159:
    v24 = 0LL;
    LODWORD(v19) = 3;
    v60 = "invalid number: %s";
    goto LABEL_137;
  }
  __asm (" fld     tbyte ptr [rsp+168h+src] ");
  v24 = v170 - s1;
  if ( (_DWORD)v170 != (_DWORD)s1 )
  {
    v40 = v24 - 1;
    if ( (_DWORD)v24 == 1 )
    {
      __asm (" fdiv    cs:flt_40C130 ");
    }
    else
    {
__asm ("");
      __asm__
      (
        "fld     cs:flt_40C130"
        "fld     st"
      )
      do
      {
        __asm (" fmul    st, st(1) ");
        --v40;
      }
      while ( v40 );
__asm ("");
      __asm__
      (
        "fstp    st(1)"
        "fdivp   st(1), st"
      )
    }
  }
  __asm (" fld     [rsp+168h+var_F8] ");
  if ( v167 )
    __asm (" fsubrp  st(1), st ");
  else
    __asm (" faddp   st(1), st ");
  __asm (" fstp    [rsp+168h+var_F8] ");
  s1 = v170;
LABEL_31:
  if ( byte_610338 )
    __fprintf_chk(stderr, 1LL, "  parsed numeric value: %Lf\n  input precision = %d\n", v171[0], (unsigned int)v24);
  v25 = s1;
  v142 = *s1;
  if ( !*s1 )
  {
    if ( v127 != 4 )
    {
      v31 = byte_610338;
      v20 = 0LL;
      __asm (" fld1 ");
      goto LABEL_48;
    }
    LODWORD(v19) = 6;
    v60 = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
    goto LABEL_137;
  }
  v26 = __ctype_b_loc();
  v27 = v142;
  v28 = *v26;
  v29 = v25;
  while ( 1 )
  {
    v30 = v29++;
    if ( (v28[(unsigned __int8)v27] & 1) == 0 )
      break;
    s1 = v29;
    v27 = v30[1];
  }
  v143 = v27;
  if ( !strchr("KMGTPEZY", v27) )
  {
    LODWORD(v19) = 5;
    v60 = "invalid suffix in input: %s";
    goto LABEL_137;
  }
  if ( !v127 )
  {
    LODWORD(v19) = 4;
    v60 = "rejecting suffix in input: %s (consider using --from)";
    goto LABEL_137;
  }
  v20 = 0LL;
  if ( (unsigned __int8)(v143 - 69) <= 0x15u )
    v20 = (unsigned int)dword_40BD20[(unsigned __int8)(v143 - 69)];
  s1 = v30 + 1;
  if ( v127 == 1 )
  {
    v31 = byte_610338;
    if ( v30[1] == 105 )
    {
      s1 = v30 + 2;
      if ( byte_610338 )
      {
        v140 = v20;
        v16 = 1024;
        __fprintf_chk(stderr, 1LL, "  Auto-scaling, found 'i', switching to base %d\n", 1024LL);
        v20 = v140;
        v31 = byte_610338;
        __asm (" fld     cs:flt_40C134 ");
      }
      else
      {
        __asm (" fld     cs:flt_40C134 ");
        v16 = 1024;
      }
    }
    else
    {
      v138 = v16;
      __asm (" fild    dword ptr [rsp+168h+var_158] ");
    }
    goto LABEL_44;
  }
  if ( v127 == 4 )
  {
    if ( v30[1] == 105 )
    {
      s1 = v30 + 2;
      goto LABEL_43;
    }
    v24 = 0LL;
    LODWORD(v19) = 6;
    v60 = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
LABEL_137:
    if ( dword_6103A8 != 3 )
    {
      v61 = sub_407590(v13);
      v62 = dcgettext(0LL, v60, 5);
      error(status, 0, v62, v61);
    }
    goto LABEL_55;
  }
LABEL_43:
  v128 = v16;
  __asm (" fild    dword ptr [rsp+168h+var_158] ");
  v31 = byte_610338;
LABEL_44:
  if ( !(_DWORD)v20 )
    goto LABEL_289;
  __asm (" fld     st ");
  v32 = v20 - 1;
  if ( (_DWORD)v20 == 1 )
  {
    __asm (" fstp    st(1) ");
    v24 = 0LL;
    v20 = 1LL;
  }
  else
  {
    do
    {
      __asm (" fmul    st, st(1) ");
      --v32;
    }
    while ( v32 );
    __asm (" fstp    st(1) ");
    v24 = 0LL;
  }
  while ( 1 )
  {
LABEL_48:
    if ( v31 )
    {
__asm ("");
      __asm__
      (
        "fld     st"
        "fstp    [rsp+178h+var_178]"
        "fstp    tbyte ptr [rsp+178h+var_158]"
      )
      __fprintf_chk(stderr, 1LL, "  suffix power=%d^%d = %Lf\n", v16, v20, v96);
__asm ("");
      __asm__
      (
        "fld     [rsp+178h+var_F8]"
        "fld     tbyte ptr [rsp+178h+var_158]"
        "fmulp   st(1), st"
        "fld     st"
        "fstp    [rsp+178h+var_F8]"
      )
      if ( byte_610338 )
      {
__asm ("");
        __asm__
        (
          "fld     st"
          "fstp    [rsp+188h+var_178]"
          "fstp    [rsp+188h+var_188.value]"
        )
        __fprintf_chk(stderr, 1LL, "  returning value: %Lf (%LG)\n", v93, v97);
      }
      else
      {
        __asm (" fstp    st ");
      }
    }
    else
    {
__asm ("");
      __asm__
      (
        "fld     [rsp+168h+var_F8]"
        "fmulp   st(1), st"
        "fstp    [rsp+168h+var_F8]"
      )
    }
    if ( s1 && *s1 )
    {
      LODWORD(v19) = 5;
      if ( dword_6103A8 != 3 )
      {
        v33 = sub_407570(1LL);
        v34 = sub_407570(0LL);
        v35 = dcgettext(0LL, "invalid suffix in input %s: %s", 5);
        error(status, 0, v35, v34, v33);
      }
    }
    else if ( (_DWORD)v19 == 1 && byte_610348 )
    {
      v42 = sub_407590(v13);
      v43 = dcgettext(0LL, "large input value %s: possible precision loss", 5);
      error(0, 0, v43, v42);
    }
LABEL_55:
    __asm (" fld     [rsp+168h+var_F8] ");
    if ( qword_610270 != 1 || qword_610268 != 1 )
    {
      v129 = qword_610270;
      __asm (" fild    qword ptr [rsp+168h+var_158] ");
      if ( qword_610270 < 0 )
        __asm (" fadd    cs:flt_40C138 ");
      __asm (" fmulp   st(1), st ");
      v130 = qword_610268;
      __asm (" fild    qword ptr [rsp+168h+var_158] ");
      if ( qword_610268 < 0 )
        __asm (" fadd    cs:flt_40C138 ");
      __asm (" fdivp   st(1), st ");
    }
    if ( (unsigned int)v19 > 1 )
    {
      __asm (" fstp    st ");
LABEL_64:
      v4 = 0;
      fputs_unlocked(v2, stdout);
      return v4;
    }
__asm ("");
    __asm__
    (
      "fld     cs:tbyte_40C150"
      "fxch    st(1)"
    )
    if ( qword_610260 != -1 )
      v24 = qword_610260;
__asm ("");
    __asm__
    (
      "fcomi   st, st(1)"
      "fstp    st(1)"
    )
    if ( _CF )
      goto LABEL_103;
__asm ("");
    __asm__
    (
      "fld     cs:tbyte_40C160"
      "fcomip  st, st(1)"
    )
    if ( _CF )
    {
LABEL_103:
      v16 = qword_6103AC;
      if ( !(_DWORD)qword_6103AC && v24 > 0x12 )
      {
LABEL_156:
        if ( dword_6103A8 == 3 )
        {
          __asm (" fstp    st ");
        }
        else
        {
          v67 = status;
          __asm (" fstp    [rsp+168h+var_168] ");
          if ( v24 )
          {
            v68 = dcgettext(0LL, "value/precision too large to be printed: '%Lg/%lu' (consider using --to)", 5);
__asm ("");
            __asm__
            (
              "fld     [rsp+168h+var_168]"
              "fstp    [rsp+178h+var_178]"
            )
            error(v67, 0, v68, v24);
          }
          else
          {
            v90 = dcgettext(0LL, "value too large to be printed: '%Lg' (consider using --to)", 5);
__asm ("");
            __asm__
            (
              "fld     [rsp+168h+var_168]"
              "fstp    [rsp+178h+var_178]"
            )
            error(v67, 0, v90);
          }
        }
        goto LABEL_64;
      }
    }
    else
    {
      __asm (" fld     st ");
      v46 = 0;
      __asm (" fld     cs:flt_40C130 ");
      while ( 1 )
      {
__asm ("");
        __asm__
        (
          "fldz"
          "fld     st(2)"
          "fchs"
          "fxch    st(1)"
          "fcomip  st, st(3)"
          "fcmovbe st, st(2)"
          "fld     st(1)"
          "fxch    st(1)"
          "fcomip  st, st(1)"
        )
        if ( _CF )
          break;
        __asm (" fdivp   st(2), st ");
        ++v46;
      }
__asm ("");
      __asm__
      (
        "fstp    st"
        "fstp    st"
        "fstp    st"
      )
      v16 = qword_6103AC;
      if ( !(_DWORD)qword_6103AC && v24 + v46 > 0x12 )
        goto LABEL_156;
      if ( v46 > 0x1A )
      {
        __asm (" fstp    [rsp+168h+var_168] ");
        if ( dword_6103A8 != 3 )
        {
          v47 = dcgettext(0LL, "value too large to be printed: '%Lg' (cannot handle values > 999Y)", 5);
__asm ("");
          __asm__
          (
            "fld     [rsp+168h+var_168]"
            "fstp    [rsp+178h+var_178]"
          )
          error(status, 0, v47);
        }
        goto LABEL_64;
      }
    }
    v48 = dword_610278;
    LOBYTE(v171[0]) = 37;
    v49 = (char *)v171 + 1;
    v50 = dword_610398;
    if ( dword_610398 )
    {
      BYTE1(v171[0]) = 39;
      v49 = (char *)v171 + 2;
    }
    if ( qword_610378 )
    {
__asm ("");
      __asm__
      (
        "fstp    tbyte ptr [rsp+168h+var_158]"
        "fld     tbyte ptr [rsp+168h+var_158]"
      )
      v49 += (int)__snprintf_chk(v49, 62LL, 1LL, 63LL, "0%ld", qword_610378);
    }
    v51 = byte_610338;
    if ( byte_610338 )
    {
      __asm (" fstp    tbyte ptr [rsp+168h+var_158] ");
      fwrite("double_to_human:\n", 1uLL, 0x11uLL, stderr);
      v51 = byte_610338;
      __asm (" fld     tbyte ptr [rsp+168h+var_158] ");
    }
    if ( v16 )
      break;
    if ( (_DWORD)v24 )
    {
      v63 = v24 - 1;
      if ( (_DWORD)v24 == 1 )
      {
__asm ("");
        __asm__
        (
          "fnstcw  [rsp+168h+var_11A]"
          "fld     cs:tbyte_40C170"
        )
        v63 = v166;
__asm ("");
        __asm__
        (
          "fld     st(1)"
          "fmul    cs:flt_40C130"
        )
        BYTE1(v63) = HIBYTE(v166) | 0xC;
        v164 = v63;
__asm ("");
        __asm__
        (
          "fld     st"
          "fdiv    st, st(2)"
          "fldcw   [rsp+168h+var_11C]"
          "fistp   qword ptr [rsp+168h+var_158]"
          "fldcw   [rsp+168h+var_11A]"
          "fild    qword ptr [rsp+168h+var_158]"
          "fmulp   st(2), st"
          "fsub    st, st(1)"
        )
        if ( v48 > 4 )
        {
__asm ("");
          __asm__
          (
            "fstp    st"
            "fstp    st"
            "fldz"
          )
          goto LABEL_166;
        }
        __asm (" fxch    st(1) ");
      }
      else
      {
        __asm (" fld     cs:flt_40C130 ");
        v64 = v24 - 1;
        __asm (" fld     st ");
        do
        {
          __asm (" fmul    st, st(1) ");
          --v64;
        }
        while ( v64 );
__asm ("");
        __asm__
        (
          "fnstcw  [rsp+168h+var_11A]"
          "fmul    st, st(2)"
          "fld     cs:tbyte_40C170"
        )
        LOBYTE(v65) = v166;
        __asm (" fld     st(1) ");
        HIBYTE(v65) = HIBYTE(v166) | 0xC;
        __asm (" fdiv    st, st(1) ");
        v164 = v65;
__asm ("");
        __asm__
        (
          "fldcw   [rsp+168h+var_11C]"
          "fistp   qword ptr [rsp+168h+var_158]"
          "fldcw   [rsp+168h+var_11A]"
          "fild    qword ptr [rsp+168h+var_158]"
          "fmulp   st(1), st"
          "fsub    st(1), st"
          "fstp    st(2)"
          "fxch    st(1)"
        )
      }
    }
    else
    {
__asm ("");
      __asm__
      (
        "fnstcw  [rsp+168h+var_11A]"
        "fld     cs:tbyte_40C170"
      )
      v63 = v166;
__asm ("");
      __asm__
      (
        "fld     st(1)"
        "fdiv    st, st(1)"
      )
      BYTE1(v63) = HIBYTE(v166) | 0xC;
      v164 = v63;
__asm ("");
      __asm__
      (
        "fldcw   [rsp+168h+var_11C]"
        "fistp   qword ptr [rsp+168h+var_158]"
        "fldcw   [rsp+168h+var_11A]"
        "fild    qword ptr [rsp+168h+var_158]"
        "fmulp   st(1), st"
        "fld     st(1)"
        "fsub    st, st(1)"
      )
      if ( v48 > 4 )
      {
__asm ("");
        __asm__
        (
          "fstp    st"
          "fstp    st"
          "fldz"
        )
        goto LABEL_166;
      }
      __asm (" fxch    st(1) ");
    }
    switch ( v48 )
    {
      case 0u:
__asm ("");
        __asm__
        (
          "fxch    st(1); jumptable 00000000004035CD case 0"
          "fld     st"
          "fldcw   [rsp+168h+var_11C]"
          "fistp   qword ptr [rsp+168h+var_168]"
          "fldcw   [rsp+168h+var_11A]"
          "fild    qword ptr [rsp+168h+var_168]"
          "fxch    st(1)"
          "fcomip  st, st(1)"
        )
        if ( _CF | _ZF )
          goto LABEL_161;
        __asm (" fstp    st ");
        goto LABEL_194;
      case 1u:
__asm ("");
        __asm__
        (
          "fxch    st(1); jumptable 00000000004035CD case 1"
          "fchs"
          "fld     st"
          "fldcw   [rsp+168h+var_11C]"
          "fistp   [rsp+168h+var_128]"
          "fldcw   [rsp+168h+var_11A]"
        )
        goto LABEL_196;
      case 2u:
__asm ("");
        __asm__
        (
          "fldz; jumptable 00000000004035CD case 2"
          "fcomip  st, st(2)"
        )
        if ( _CF | _ZF )
        {
__asm ("");
          __asm__
          (
            "fxch    st(1)"
            "fld     st"
            "fldcw   [rsp+168h+var_11C]"
            "fistp   qword ptr [rsp+168h+var_168]"
            "fldcw   [rsp+168h+var_11A]"
            "fild    qword ptr [rsp+168h+var_168]"
            "fxch    st(1)"
            "fcomip  st, st(1)"
          )
          if ( !(_CF | _ZF) )
          {
            __asm (" fstp    st ");
LABEL_194:
            v117 = v116 + 1;
            __asm (" fild    qword ptr [rsp+168h+var_168] ");
          }
        }
        else
        {
__asm ("");
          __asm__
          (
            "fxch    st(1)"
            "fchs"
            "fld     st"
            "fldcw   [rsp+168h+var_11C]"
            "fistp   [rsp+168h+var_128]"
            "fldcw   [rsp+168h+var_11A]"
          )
LABEL_196:
          v118 = v161;
__asm ("");
          __asm__
          (
            "fild    qword ptr [rsp+168h+var_168]"
            "fxch    st(1)"
            "fcomip  st, st(1)"
            "fstp    st"
          )
          v119 = -(!(_CF | _ZF) + v161);
          __asm (" fild    qword ptr [rsp+168h+var_168] ");
        }
LABEL_161:
        __asm (" faddp   st(1), st ");
        if ( (_DWORD)v24 )
        {
          __asm (" fld     cs:flt_40C130 ");
          v63 = v24 - 1;
          if ( (_DWORD)v24 == 1 )
          {
            __asm (" fdivp   st(1), st ");
          }
          else
          {
LABEL_163:
            __asm (" fld     st ");
            do
            {
              __asm (" fmul    st, st(1) ");
              --v63;
            }
            while ( v63 );
__asm ("");
            __asm__
            (
              "fstp    st(1)"
              "fdivp   st(1), st"
            )
          }
        }
        break;
      case 3u:
__asm ("");
        __asm__
        (
          "fxch    st(1); jumptable 00000000004035CD case 3"
          "fldcw   [rsp+168h+var_11C]"
          "fistp   qword ptr [rsp+168h+var_168]"
          "fldcw   [rsp+168h+var_11A]"
          "fild    qword ptr [rsp+168h+var_168]"
        )
        goto LABEL_161;
      case 4u:
__asm ("");
        __asm__
        (
          "fldz; jumptable 00000000004035CD case 4"
          "fcomip  st, st(2)"
        )
        if ( _CF | _ZF )
        {
__asm ("");
          __asm__
          (
            "fxch    st(1)"
            "fadd    cs:flt_40C13C"
            "fldcw   [rsp+168h+var_11C]"
            "fistp   qword ptr [rsp+168h+var_168]"
            "fldcw   [rsp+168h+var_11A]"
            "fild    qword ptr [rsp+168h+var_168]"
          )
        }
        else
        {
__asm ("");
          __asm__
          (
            "fxch    st(1)"
            "fsub    cs:flt_40C13C"
            "fldcw   [rsp+168h+var_11C]"
            "fistp   qword ptr [rsp+168h+var_168]"
            "fldcw   [rsp+168h+var_11A]"
            "fild    qword ptr [rsp+168h+var_168]"
          )
        }
        goto LABEL_161;
      default:
__asm ("");
        __asm__
        (
          "fstp    st; jumptable 00000000004035CD default case"
          "fstp    st"
          "fldz"
          "fxch    st(1)"
        )
        goto LABEL_163;
    }
LABEL_166:
    v69 = (unsigned int)v24;
    if ( v51 )
    {
__asm ("");
      __asm__
      (
        "fxch    st(1)"
        "fstp    tbyte ptr [rsp+168h+var_158]"
      )
      v70 = "  no scaling, returning (grouped) value: %'.*Lf\n";
      if ( !v50 )
        v70 = "  no scaling, returning value: %.*Lf\n";
__asm ("");
      __asm__
      (
        "fld     st"
        "fstp    [rsp+178h+var_178]"
        "fstp    [rsp+178h+var_168]"
      )
      __fprintf_chk(stderr, 1LL, v70, (unsigned int)v24, v20, (unsigned int)v24, *(_QWORD *)&v99);
__asm ("");
      __asm__
      (
        "fld     [rsp+168h+var_168]"
        "fld     tbyte ptr [rsp+168h+var_158]"
      )
      v69 = (unsigned int)v24;
    }
    else
    {
      __asm (" fxch    st(1) ");
    }
    __asm (" fstp    tbyte ptr [rsp+168h+var_158] ");
    v19 = src;
    strcpy(v49, ".*Lf");
__asm ("");
    __asm__
    (
      "fld     st"
      "fstp    [rsp+178h+var_178]"
      "fstp    [rsp+178h+var_168]"
    )
    v71 = __snprintf_chk(src, 128LL, 1LL, 128LL, (const char *)v171, v69, *(_QWORD *)&v100);
    v13 = (char *)*((_QWORD *)&v100 + 1);
    v2 = *(const char **)&v100;
    __asm (" fld     [rsp+168h+var_168] ");
    if ( v71 <= 0x7F )
    {
__asm ("");
      __asm__
      (
        "fstp    st"
        "fld     tbyte ptr [rsp+168h+var_158]"
      )
      v72 = byte_610338;
      goto LABEL_173;
    }
    __asm (" fstp    [rsp+168h+var_168] ");
    v91 = dcgettext(0LL, "failed to prepare value '%Lf' for printing", 5);
__asm ("");
    __asm__
    (
      "fld     [rsp+168h+var_168]"
      "fstp    [rsp+178h+var_178]"
    )
    error(1, 0, v91);
LABEL_289:
    __asm (" fstp    st ");
    v24 = 0LL;
    __asm (" fld1 ");
  }
  if ( v16 - 3 <= 1 )
  {
    v144 = 1024;
    *(_QWORD *)&v131 = 0x4090000000000000LL;
  }
  else
  {
    v144 = 1000;
    *(_QWORD *)&v131 = 0x408F400000000000LL;
  }
__asm ("");
  __asm__
  (
    "fld     cs:tbyte_40C150"
    "fxch    st(1)"
    "fcomi   st, st(1)"
    "fstp    st(1)"
  )
  if ( _CF )
    goto LABEL_253;
__asm ("");
  __asm__
  (
    "fld     cs:tbyte_40C160"
    "fcomip  st, st(1)"
  )
  if ( _CF )
  {
LABEL_253:
    __asm (" fld     st ");
    v52 = 0;
  }
  else
  {
    __asm (" fild    dword ptr [rsp+168h+var_148] ");
    v52 = 0;
    __asm (" fld     st(1) ");
    while ( 1 )
    {
__asm ("");
      __asm__
      (
        "fldz"
        "fld     st(1)"
        "fchs"
        "fxch    st(1)"
        "fcomip  st, st(2)"
        "fcmovbe st, st(1)"
        "fcomip  st, st(2)"
      )
      if ( _CF )
        break;
      __asm (" fdiv    st, st(1) ");
      ++v52;
    }
    __asm (" fstp    st(1) ");
  }
  if ( v51 )
  {
__asm ("");
    __asm__
    (
      "fxch    st(1)"
      "fstp    tbyte ptr [rsp+168h+var_138]"
      "fld     st"
      "fstp    [rsp+178h+var_178]"
      "fstp    [rsp+178h+var_148]"
    )
    __fprintf_chk(stderr, 1LL, "  scaled value to %Lf * %0.f ^ %u\n", v103, *(double *)&v131, v52);
    v51 = byte_610338;
__asm ("");
    __asm__
    (
      "fld     tbyte ptr [rsp+168h+var_138]"
      "fld     [rsp+168h+var_148]"
    )
  }
  v53 = qword_610260;
  if ( qword_610260 == -1 )
  {
__asm ("");
    __asm__
    (
      "fldz"
      "fld     st(1)"
      "fchs"
      "fxch    st(1)"
      "fcomip  st, st(2)"
      "fcmovbe st, st(1)"
      "fld     cs:flt_40C130"
      "fld     st"
      "fcomip  st, st(2)"
      "fstp    st(1)"
    )
    if ( !(_CF | _ZF) )
      goto LABEL_273;
    __asm (" fstp    st ");
  }
  else
  {
    v54 = 3 * v52;
    if ( v54 > qword_610260 )
      LODWORD(v54) = qword_610260;
    v55 = v54;
    if ( (_DWORD)v54 )
    {
      v56 = v54 - 1;
      if ( v56 )
      {
        __asm (" fld     cs:flt_40C130 ");
        v57 = v56;
        __asm (" fld     st ");
        do
        {
          __asm (" fmul    st, st(1) ");
          --v57;
        }
        while ( v57 );
__asm ("");
        __asm__
        (
          "fnstcw  [rsp+168h+var_11A]"
          "fmulp   st(2), st"
          "fld     cs:tbyte_40C170"
        )
        LOBYTE(v58) = v165;
        __asm (" fld     st(2) ");
        HIBYTE(v58) = HIBYTE(v165) | 0xC;
        v163 = v58;
__asm ("");
        __asm__
        (
          "fdiv    st, st(1)"
          "fldcw   [rsp+168h+var_11C]"
          "fistp   qword ptr [rsp+168h+var_148]"
          "fldcw   [rsp+168h+var_11A]"
          "fild    qword ptr [rsp+168h+var_148]"
          "fmulp   st(1), st"
          "fsub    st(2), st"
          "fld     qword ptr [rsp+168h+var_158]"
        )
        v59 = v48;
        switch ( v59 )
        {
          case 0u:
__asm ("");
            __asm__
            (
              "fstp    st(2); jumptable 00000000004033ED case 0"
              "fxch    st(1)"
              "fxch    st(2)"
            )
            goto LABEL_204;
          case 1u:
__asm ("");
            __asm__
            (
              "fstp    st(2); jumptable 00000000004033ED case 1"
              "fxch    st(1)"
              "fxch    st(2)"
            )
            goto LABEL_245;
          case 2u:
__asm ("");
            __asm__
            (
              "fstp    st(2); jumptable 00000000004033ED case 2"
              "fxch    st(1)"
            )
            goto LABEL_236;
          case 3u:
__asm ("");
            __asm__
            (
              "fxch    st(3); jumptable 00000000004033ED case 3"
              "fldcw   [rsp+168h+var_11C]"
              "fistp   qword ptr [rsp+168h+var_148]"
              "fldcw   [rsp+168h+var_11A]"
              "fild    qword ptr [rsp+168h+var_148]"
              "faddp   st(1), st"
              "fxch    st(1)"
            )
            goto LABEL_208;
          case 4u:
__asm ("");
            __asm__
            (
              "fstp    st(2); jumptable 00000000004033ED case 4"
              "fxch    st(1)"
            )
            goto LABEL_241;
          default:
            goto LABEL_293;
        }
      }
      __asm (" fld     cs:flt_40C130 ");
LABEL_273:
__asm ("");
      __asm__
      (
        "fnstcw  [rsp+168h+var_11A]"
        "fmul    st(1), st"
        "fld     cs:tbyte_40C170"
      )
      LOBYTE(v87) = v165;
      __asm (" fld     st(2) ");
      HIBYTE(v87) = HIBYTE(v165) | 0xC;
      __asm (" fdiv    st, st(1) ");
      v163 = v87;
__asm ("");
      __asm__
      (
        "fldcw   [rsp+168h+var_11C]"
        "fistp   qword ptr [rsp+168h+var_148]"
        "fldcw   [rsp+168h+var_11A]"
        "fild    qword ptr [rsp+168h+var_148]"
        "fmulp   st(1), st"
        "fsub    st(2), st"
        "fld     qword ptr [rsp+168h+var_158]"
      )
      v88 = v48;
      switch ( v88 )
      {
        case 0u:
__asm ("");
          __asm__
          (
            "fstp    st(2); jumptable 0000000000403EBD case 0"
            "fxch    st(1)"
            "fxch    st(2)"
          )
          v55 = 1;
          goto LABEL_204;
        case 1u:
__asm ("");
          __asm__
          (
            "fstp    st(2); jumptable 0000000000403EBD case 1"
            "fxch    st(1)"
            "fxch    st(2)"
          )
          v55 = 1;
          goto LABEL_245;
        case 2u:
__asm ("");
          __asm__
          (
            "fstp    st(2); jumptable 0000000000403EBD case 2"
            "fxch    st(1)"
          )
          v55 = 1;
          goto LABEL_236;
        case 3u:
__asm ("");
          __asm__
          (
            "fxch    st(3); jumptable 0000000000403EBD case 3"
            "fldcw   [rsp+168h+var_11C]"
            "fistp   qword ptr [rsp+168h+var_148]"
            "fldcw   [rsp+168h+var_11A]"
            "fild    qword ptr [rsp+168h+var_148]"
            "faddp   st(1), st"
            "fxch    st(1)"
          )
          goto LABEL_249;
        case 4u:
__asm ("");
          __asm__
          (
            "fstp    st(2); jumptable 0000000000403EBD case 4"
            "fxch    st(1)"
          )
          v55 = 1;
          goto LABEL_241;
        default:
__asm ("");
          __asm__
          (
            "fstp    st(3); jumptable 0000000000403EBD default case"
            "fstp    st"
            "fstp    st"
          )
          goto LABEL_296;
      }
    }
  }
__asm ("");
  __asm__
  (
    "fnstcw  [rsp+168h+var_11A]"
    "fld     cs:tbyte_40C170"
  )
  LOBYTE(v84) = v165;
__asm ("");
  __asm__
  (
    "fld     st(1)"
    "fdiv    st, st(1)"
  )
  HIBYTE(v84) = HIBYTE(v165) | 0xC;
  v163 = v84;
__asm ("");
  __asm__
  (
    "fldcw   [rsp+168h+var_11C]"
    "fistp   qword ptr [rsp+168h+var_148]"
    "fldcw   [rsp+168h+var_11A]"
    "fild    qword ptr [rsp+168h+var_148]"
    "fmulp   st(1), st"
    "fsub    st(1), st"
    "fld     qword ptr [rsp+168h+var_158]"
  )
  v85 = v48;
  switch ( v85 )
  {
    case 0u:
      __asm (" fxch    st(2); jumptable 0000000000403D49 case 0 ");
      v55 = 0;
      goto LABEL_204;
    case 1u:
      __asm (" fxch    st(2); jumptable 0000000000403D49 case 1 ");
      v55 = 0;
LABEL_245:
__asm ("");
      __asm__
      (
        "fchs"
        "fld     st"
        "fldcw   [rsp+168h+var_11C]"
        "fistp   [rsp+168h+var_128]"
        "fldcw   [rsp+168h+var_11A]"
      )
      goto LABEL_238;
    case 2u:
      v55 = 0;
LABEL_236:
__asm ("");
      __asm__
      (
        "fldz"
        "fcomip  st, st(3)"
      )
      if ( _CF | _ZF )
      {
        __asm (" fxch    st(2) ");
LABEL_204:
__asm ("");
        __asm__
        (
          "fld     st"
          "fldcw   [rsp+168h+var_11C]"
          "fistp   qword ptr [rsp+168h+var_148]"
          "fldcw   [rsp+168h+var_11A]"
          "fild    qword ptr [rsp+168h+var_148]"
          "fxch    st(1)"
          "fcomip  st, st(1)"
        )
        if ( !(_CF | _ZF) )
        {
          __asm (" fstp    st ");
          v147 = v146 + 1;
          __asm (" fild    qword ptr [rsp+168h+var_148] ");
        }
      }
      else
      {
__asm ("");
        __asm__
        (
          "fxch    st(2)"
          "fchs"
          "fld     st"
          "fldcw   [rsp+168h+var_11C]"
          "fistp   [rsp+168h+var_128]"
          "fldcw   [rsp+168h+var_11A]"
        )
LABEL_238:
        v148 = v162;
__asm ("");
        __asm__
        (
          "fild    qword ptr [rsp+168h+var_148]"
          "fxch    st(1)"
          "fcomip  st, st(1)"
          "fstp    st"
        )
        v149 = -(!(_CF | _ZF) + v162);
        __asm (" fild    qword ptr [rsp+168h+var_148] ");
      }
LABEL_206:
      __asm (" faddp   st(1), st ");
      if ( !v55 )
        break;
      __asm (" fld     cs:flt_40C130 ");
      v56 = v55 - 1;
      if ( v55 != 1 )
        goto LABEL_208;
LABEL_249:
      __asm (" fdivp   st(1), st ");
      break;
    case 3u:
__asm ("");
      __asm__
      (
        "fxch    st(2); jumptable 0000000000403D49 case 3"
        "fldcw   [rsp+168h+var_11C]"
        "fistp   qword ptr [rsp+168h+var_148]"
        "fldcw   [rsp+168h+var_11A]"
        "fild    qword ptr [rsp+168h+var_148]"
        "faddp   st(1), st"
      )
      break;
    case 4u:
      v55 = 0;
LABEL_241:
__asm ("");
      __asm__
      (
        "fldz"
        "fcomip  st, st(3)"
      )
      if ( _CF | _ZF )
      {
__asm ("");
        __asm__
        (
          "fxch    st(2)"
          "fadd    cs:flt_40C13C"
          "fldcw   [rsp+168h+var_11C]"
          "fistp   qword ptr [rsp+168h+var_148]"
          "fldcw   [rsp+168h+var_11A]"
          "fild    qword ptr [rsp+168h+var_148]"
        )
      }
      else
      {
__asm ("");
        __asm__
        (
          "fxch    st(2)"
          "fsub    cs:flt_40C13C"
          "fldcw   [rsp+168h+var_11C]"
          "fistp   qword ptr [rsp+168h+var_148]"
          "fldcw   [rsp+168h+var_11A]"
          "fild    qword ptr [rsp+168h+var_148]"
        )
      }
      goto LABEL_206;
    default:
__asm ("");
      __asm__
      (
        "fstp    st(2); jumptable 0000000000403D49 default case"
        "fstp    st"
      )
LABEL_296:
      __asm (" fldz ");
      goto LABEL_212;
  }
  while ( 2 )
  {
__asm ("");
    __asm__
    (
      "fldz"
      "fcomip  st, st(1)"
    )
    if ( _CF | _ZF )
    {
LABEL_212:
      __asm (" fcomi   st, st(1) ");
      if ( _CF )
      {
        __asm (" fstp    st(1) ");
      }
      else
      {
LABEL_215:
        ++v52;
        __asm (" fdivrp  st(1), st ");
      }
__asm ("");
      __asm__
      (
        "fldz"
        "fxch    st(1)"
        "fucomi  st, st(1)"
        "fstp    st(1)"
      )
      if ( !_PF && _ZF )
      {
        v81 = 0LL;
        goto LABEL_220;
      }
__asm ("");
      __asm__
      (
        "fldz"
        "fcomip  st, st(1)"
      )
      if ( _CF | _ZF )
      {
        __asm (" fld     st ");
        goto LABEL_260;
      }
__asm ("");
      __asm__
      (
        "fld     st"
        "fchs"
      )
    }
    else
    {
__asm ("");
      __asm__
      (
        "fld     st"
        "fchs"
        "fcomi   st, st(2)"
      )
      if ( !_CF )
      {
        __asm (" fstp    st ");
        goto LABEL_215;
      }
__asm ("");
      __asm__
      (
        "fstp    st(2)"
        "fxch    st(1)"
      )
    }
    __asm (" fxch    st(1) ");
LABEL_260:
__asm ("");
    __asm__
    (
      "fld     cs:flt_40C130"
      "fcomip  st, st(2)"
      "fstp    st(1)"
    )
    v81 = (v52 != 0) & (unsigned __int8)!(_CF | _ZF);
LABEL_220:
    if ( v51 )
    {
__asm ("");
      __asm__
      (
        "fxch    st(1)"
        "fstp    [rsp+168h+var_148]"
      )
      v159 = v81;
__asm ("");
      __asm__
      (
        "fld     st"
        "fstp    [rsp+178h+var_178]"
        "fstp    [rsp+178h+var_168]"
      )
      __fprintf_chk(stderr, 1LL, "  after rounding, value=%Lf * %0.f ^ %u\n", v102, *(double *)&v131, v52);
      v53 = qword_610260;
      v81 = v159;
__asm ("");
      __asm__
      (
        "fld     [rsp+168h+var_148]"
        "fld     [rsp+168h+var_168]"
      )
    }
    v82 = "(error)";
    *(_DWORD *)v49 = 1716267566;
    *((_WORD *)v49 + 2) = 29477;
    if ( v53 != -1 )
      v81 = (unsigned int)v53;
    v49[6] = 0;
    if ( v52 > 8 )
    {
      __asm (" fxch    st(1) ");
    }
    else
    {
      __asm (" fxch    st(1) ");
      v82 = (const char *)*(&off_40BCC0 + v52);
    }
__asm ("");
    __asm__
    (
      "fstp    tbyte ptr [rsp+168h+var_158]"
      "fld     st"
      "fstp    [rsp+188h+var_188.value]"
      "fstp    [rsp+188h+var_168]"
    )
    v83 = __snprintf_chk(src, 127LL, 1LL, 128LL, (const char *)v171, v81, *(_OWORD *)&v94, v82);
    __asm (" fld     tbyte ptr [rsp+188h+var_158] ");
    if ( v83 > 0x7E )
    {
      __asm (" fstp    st ");
      v92 = dcgettext(0LL, "failed to prepare value '%Lf' for printing", 5);
      __asm (" fld     [rsp+168h+var_168] ");
      v53 = 0LL;
      __asm (" fstp    [rsp+178h+var_178] ");
      error(1, 0, v92);
LABEL_293:
__asm ("");
      __asm__
      (
        "fstp    st(3); jumptable 00000000004033ED default case"
        "fstp    st"
        "fxch    st(1)"
        "fldz"
        "fxch    st(1)"
        "fxch    st(2)"
      )
LABEL_208:
      __asm (" fld     st ");
      do
      {
        __asm (" fmul    st, st(1) ");
        --v56;
      }
      while ( v56 );
__asm ("");
      __asm__
      (
        "fstp    st(1)"
        "fdivp   st(1), st"
      )
      continue;
    }
    break;
  }
  if ( v52 && v16 == 4 )
  {
    __asm (" fstp    [rsp+168h+var_168] ");
    __strncat_chk(src, "i", 127LL - (int)v83, 128LL);
    __asm (" fld     [rsp+168h+var_168] ");
  }
  v72 = byte_610338;
  if ( byte_610338 )
  {
    __asm (" fstp    [rsp+168h+var_168] ");
    v89 = (const char *)sub_407590(src);
    __fprintf_chk(stderr, 1LL, "  returning value: %s\n", v89);
    v72 = byte_610338;
    __asm (" fld     [rsp+168h+var_168] ");
LABEL_173:
    v73 = s1;
    if ( s1 )
      goto LABEL_174;
    goto LABEL_179;
  }
  v73 = s1;
  if ( !s1 )
  {
    __asm (" fstp    st ");
    goto LABEL_182;
  }
LABEL_174:
  v74 = src;
  do
  {
    v75 = *(_DWORD *)v74;
    v74 += 4;
    v76 = ~v75 & (v75 - 16843009) & 0x80808080;
  }
  while ( !v76 );
  __asm (" fstp    [rsp+168h+var_168] ");
  if ( (~v75 & (v75 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v76) = (~v75 & (v75 - 16843009) & 0x80808080) >> 16;
    v74 += 2;
  }
  __strncat_chk(src, v73, src - &v74[-__CFADD__((_BYTE)v76, (_BYTE)v76) - 3] + 127, 128LL);
  __asm (" fld     [rsp+168h+var_168] ");
LABEL_179:
  if ( v72 )
  {
    __asm (" fstp    [rsp+168h+var_168] ");
    v77 = (const char *)sub_407590(src);
__asm ("");
    __asm__
    (
      "fld     [rsp+168h+var_168]"
      "fstp    [rsp+178h+var_178]"
    )
    __fprintf_chk(stderr, 1LL, "formatting output:\n  value: %Lf\n  humanized: %s\n", v101, v77);
  }
  else
  {
    __asm (" fstp    st ");
  }
LABEL_182:
  v78 = strlen(src);
  if ( qword_610380 && qword_610380 > v78 )
  {
    *(_QWORD *)&v171[0] = qword_610380;
    sub_405530(src, dest, qword_610388, v171, (unsigned int)dword_610258, 2LL);
    if ( byte_610338 )
    {
      v86 = (const char *)sub_407590(dest);
      __fprintf_chk(stderr, 1LL, "  After padding: %s\n", v86);
    }
  }
  else
  {
    if ( v78 + 1 >= qword_610388 )
      sub_402BD0(v78 + 1);
    strcpy(dest, src);
  }
  v79 = stdout;
  if ( qword_610368 )
  {
    fputs_unlocked(qword_610368, stdout);
    v79 = stdout;
  }
  v4 = 1;
  fputs_unlocked(dest, v79);
  if ( qword_610360 )
    fputs_unlocked(qword_610360, stdout);
  return v4;
}

__int64 __fastcall sub_4041A0(char *s, char a2)
{
  __int64 v3; // r14
  unsigned int v4; // r12d
  int v5; // eax
  char v6; // bp
  char *v7; // rbx
  char v8; // dl
  char *v9; // rax
  const unsigned __int16 *v11; // rax
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // si
  bool v14; // zf
  char *IO_write_ptr; // rdx

  v3 = 0LL;
  v4 = 1;
  v5 = dword_610254;
  while ( 1 )
  {
    ++v3;
    v6 = *s;
    if ( v5 != 128 )
      break;
    if ( !v6 )
      goto LABEL_8;
    v7 = s;
    v11 = *__ctype_b_loc();
    while ( (v11[(unsigned __int8)v6] & 1) != 0 || v6 == 10 )
    {
      v6 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    v12 = *v7;
    if ( !*v7 )
      goto LABEL_8;
    while ( (v11[v12] & 1) == 0 && v12 != 10 )
    {
      v12 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    v6 = *v7;
LABEL_22:
    if ( !v6 )
      goto LABEL_8;
LABEL_23:
    *v7 = 0;
    v13 = 32;
    v14 = (unsigned __int8)sub_402C00(s, v3) == 0;
    v5 = dword_610254;
    if ( v14 )
      v4 = 0;
    IO_write_ptr = stdout->_IO_write_ptr;
    if ( dword_610254 != 128 )
      v13 = dword_610254;
    if ( IO_write_ptr >= stdout->_IO_write_end )
    {
      __overflow(stdout, v13);
      v5 = dword_610254;
    }
    else
    {
      stdout->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = v13;
    }
    s = v7 + 1;
  }
  if ( v6 == v5 )
  {
    v7 = s;
    goto LABEL_22;
  }
  if ( v6 )
  {
    v7 = s;
    while ( *++v7 )
    {
      if ( *v7 == v5 )
        goto LABEL_23;
    }
  }
LABEL_8:
  if ( !(unsigned __int8)sub_402C00(s, v3) )
    v4 = 0;
  if ( a2 )
  {
    v8 = byte_610250;
    v9 = stdout->_IO_write_ptr;
    if ( v9 >= stdout->_IO_write_end )
    {
      __overflow(stdout, (unsigned __int8)byte_610250);
    }
    else
    {
      stdout->_IO_write_ptr = v9 + 1;
      *v9 = v8;
    }
  }
  return v4;
}

noreturn void __fastcall  sub_404360(int status)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rbx
  char *v9; // rax
  FILE *v10; // rbx
  char *v11; // rax
  FILE *v12; // rbx
  char *v13; // rax
  FILE *v14; // rbx
  char *v15; // rax
  FILE *v16; // rbx
  char *v17; // rax
  FILE *v18; // rbx
  char *v19; // rax
  FILE *v20; // rbx
  char *v21; // rax
  FILE *v22; // rbx
  char *v23; // rax
  FILE *v24; // rbx
  char *v25; // rax
  FILE *v26; // rbx
  char *v27; // rax
  FILE *v28; // rbx
  char *v29; // rax
  FILE *v30; // rbx
  char *v31; // rax
  FILE *v32; // rbx
  char *v33; // rax
  FILE *v34; // rbx
  char *v35; // rax
  FILE *v36; // rbx
  char *v37; // rax
  FILE *v38; // rbx
  char *v39; // rax
  FILE *v40; // rbx
  char *v41; // rax
  FILE *v42; // rbx
  char *v43; // rax
  FILE *v44; // rbx
  char *v45; // rax
  FILE *v46; // rbx
  char *v47; // rax
  FILE *v48; // rbx
  char *v49; // rax
  FILE *v50; // rbx
  char *v51; // rax
  FILE *v52; // rbx
  char *v53; // rax
  FILE *v54; // rbx
  char *v55; // rax
  FILE *v56; // rbx
  char *v57; // rax
  __int64 v58; // rbx
  char *v59; // rax
  __int64 v60; // rbx
  char *v61; // rax
  __int64 *v62; // rax
  const char *v63; // rbx
  char *v64; // rax
  char *v65; // rax
  char *v66; // rax
  char *v67; // rax
  char *v68; // rax
  char *v69; // rax
  char *v70; // rax
  char *v71; // rax
  __int64 v72[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_6103D8;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [NUMBER]...\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(0LL, "Reformat NUMBER(s), or the numbers from standard input if none are specified.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "      --debug          print warnings about invalid input\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(0LL, "  -d, --delimiter=X    use X instead of whitespace for field delimiter\n", 5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "      --field=FIELDS   replace the numbers in these input fields (default=1)\n"
          "                         see FIELDS below\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "      --format=FORMAT  use printf style floating-point FORMAT;\n"
          "                         see FORMAT below for details\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "      --from=UNIT      auto-scale input numbers to UNITs; default is 'none';\n"
          "                         see UNIT below\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "      --from-unit=N    specify the input unit size (instead of the default 1)\n", 5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
          0LL,
          "      --grouping       use locale-defined grouping of digits, e.g. 1,000,000\n"
          "                         (which means it has no effect in the C/POSIX locale)\n",
          5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(
          0LL,
          "      --header[=N]     print (without converting) the first N header lines;\n"
          "                         N defaults to 1 if not specified\n",
          5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(
          0LL,
          "      --invalid=MODE   failure mode for invalid numbers: MODE can be:\n"
          "                         abort (default), fail, warn, ignore\n",
          5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "      --padding=N      pad the output to N characters; positive N will\n"
          "                         right-align; negative N will left-align;\n"
          "                         padding is ignored if the output is wider than N;\n"
          "                         the default is to automatically pad if a whitespace\n"
          "                         is found\n",
          5);
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(
          0LL,
          "      --round=METHOD   use METHOD for rounding when scaling; METHOD can be:\n"
          "                         up, down, from-zero (default), towards-zero, nearest\n",
          5);
  fputs_unlocked(v29, v28);
  v30 = stdout;
  v31 = dcgettext(
          0LL,
          "      --suffix=SUFFIX  add SUFFIX to output numbers, and accept optional\n"
          "                         SUFFIX in input numbers\n",
          5);
  fputs_unlocked(v31, v30);
  v32 = stdout;
  v33 = dcgettext(0LL, "      --to=UNIT        auto-scale output numbers to UNITs; see UNIT below\n", 5);
  fputs_unlocked(v33, v32);
  v34 = stdout;
  v35 = dcgettext(0LL, "      --to-unit=N      the output unit size (instead of the default 1)\n", 5);
  fputs_unlocked(v35, v34);
  v36 = stdout;
  v37 = dcgettext(0LL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5);
  fputs_unlocked(v37, v36);
  v38 = stdout;
  v39 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v39, v38);
  v40 = stdout;
  v41 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v41, v40);
  v42 = stdout;
  v43 = dcgettext(0LL, "\nUNIT options:\n", 5);
  fputs_unlocked(v43, v42);
  v44 = stdout;
  v45 = dcgettext(0LL, "  none       no auto-scaling is done; suffixes will trigger an error\n", 5);
  fputs_unlocked(v45, v44);
  v46 = stdout;
  v47 = dcgettext(
          0LL,
          "  auto       accept optional single/two letter suffix:\n"
          "               1K = 1000,\n"
          "               1Ki = 1024,\n"
          "               1M = 1000000,\n"
          "               1Mi = 1048576,\n",
          5);
  fputs_unlocked(v47, v46);
  v48 = stdout;
  v49 = dcgettext(
          0LL,
          "  si         accept optional single letter suffix:\n"
          "               1K = 1000,\n"
          "               1M = 1000000,\n"
          "               ...\n",
          5);
  fputs_unlocked(v49, v48);
  v50 = stdout;
  v51 = dcgettext(
          0LL,
          "  iec        accept optional single letter suffix:\n"
          "               1K = 1024,\n"
          "               1M = 1048576,\n"
          "               ...\n",
          5);
  fputs_unlocked(v51, v50);
  v52 = stdout;
  v53 = dcgettext(
          0LL,
          "  iec-i      accept optional two-letter suffix:\n"
          "               1Ki = 1024,\n"
          "               1Mi = 1048576,\n"
          "               ...\n",
          5);
  fputs_unlocked(v53, v52);
  v54 = stdout;
  v55 = dcgettext(
          0LL,
          "\n"
          "FIELDS supports cut(1) style field ranges:\n"
          "  N    N'th field, counted from 1\n"
          "  N-   from N'th field, to end of line\n"
          "  N-M  from N'th to M'th field (inclusive)\n"
          "  -M   from first to M'th field (inclusive)\n"
          "  -    all fields\n"
          "Multiple fields/ranges can be separated with commas\n",
          5);
  fputs_unlocked(v55, v54);
  v56 = stdout;
  v57 = dcgettext(
          0LL,
          "\n"
          "FORMAT must be suitable for printing one floating-point argument '%f'.\n"
          "Optional quote (%'f) will enable --grouping (if supported by current locale).\n"
          "Optional width value (%10f) will pad output. Optional zero (%010f) width\n"
          "will zero pad the number. Optional negative values (%-10f) will left align.\n"
          "Optional precision (%f) will override the input determined precision.\n",
          5);
  fputs_unlocked(v57, v56);
  v58 = qword_6103D8;
  v59 = dcgettext(
          0LL,
          "\n"
          "Exit status is 0 if all input numbers were successfully converted.\n"
          "By default, %s will stop at the first conversion error with exit status 2.\n"
          "With --invalid='fail' a warning is printed for each conversion error\n"
          "and the exit status is 2.  With --invalid='warn' each conversion error is\n"
          "diagnosed, but the exit status is 0.  With --invalid='ignore' conversion\n"
          "errors are not diagnosed and the exit status is 0.\n",
          5);
  __printf_chk(1LL, v59, v58);
  v60 = qword_6103D8;
  v61 = dcgettext(
          0LL,
          "\n"
          "Examples:\n"
          "  $ %s --to=si 1000\n"
          "            -> \"1.0K\"\n"
          "  $ %s --to=iec 2048\n"
          "           -> \"2.0K\"\n"
          "  $ %s --to=iec-i 4096\n"
          "           -> \"4.0Ki\"\n"
          "  $ echo 1K | %s --from=si\n"
          "           -> \"1000\"\n"
          "  $ echo 1K | %s --from=iec\n"
          "           -> \"1024\"\n"
          "  $ df -B1 | %s --header --field 2-4 --to=si\n"
          "  $ ls -l  | %s --header --field 5 --to=iec\n"
          "  $ ls -lh | %s --header --field 5 --from=iec --padding=10\n"
          "  $ ls -lh | %s --header --field 5 --from=iec --format %%10f\n",
          5);
  __printf_chk(1LL, v61, v60);
  v72[0] = (__int64)"[";
  v72[1] = (__int64)"test invocation";
  v72[2] = (__int64)"coreutils";
  v72[3] = (__int64)"Multi-call invocation";
  v72[4] = (__int64)"sha224sum";
  v72[5] = (__int64)"sha2 utilities";
  v72[6] = (__int64)"sha256sum";
  v72[7] = (__int64)"sha2 utilities";
  v72[8] = (__int64)"sha384sum";
  v72[9] = (__int64)"sha2 utilities";
  v72[10] = (__int64)"sha512sum";
  v72[11] = (__int64)"sha2 utilities";
  v72[12] = 0LL;
  v72[13] = 0LL;
  v62 = v72;
  do
    v62 += 2;
  while ( *v62 && strcmp("numfmt", (const char *)*v62) );
  v63 = (const char *)v62[1];
  if ( v63 )
  {
    v64 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v64, &unk_40A199);
    v65 = setlocale(5, 0LL);
    if ( !v65 || !strncmp(v65, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v68 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v68, &unk_40A199);
    v69 = setlocale(5, 0LL);
    if ( !v69 || !strncmp(v69, "en_", 3uLL) )
    {
      v63 = "numfmt";
      v70 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v70, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v63 = "numfmt";
  }
  v71 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v71, "numfmt");
LABEL_10:
  v66 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v66, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v67 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v67, v63);
LABEL_3:
  exit(status);
}

__int64 __fastcall compar(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  return result;
}

char *__fastcall sub_404A30(__int64 a1, __int64 a2)
{
  size_t v2; // rdx
  unsigned __int64 v3; // rcx
  char *v4; // rax
  char *result; // rax

  v2 = nmemb;
  v3 = qword_6103C0;
  v4 = (char *)ptr;
  if ( nmemb == qword_6103C0 )
  {
    if ( ptr )
    {
      if ( (unsigned __int64)qword_6103C0 <= 0x555555555555554LL )
      {
        v3 = qword_6103C0 + ((unsigned __int64)qword_6103C0 >> 1) + 1;
LABEL_6:
        qword_6103C0 = v3;
        v4 = (char *)sub_407BB0(ptr);
        v2 = nmemb;
        ptr = v4;
        goto LABEL_2;
      }
    }
    else
    {
      if ( !qword_6103C0 )
      {
        v3 = 8LL;
        goto LABEL_6;
      }
      if ( (qword_6103C0 & 0x800000000000000LL) == 0 && !((unsigned __int64)qword_6103C0 >> 60) )
        goto LABEL_6;
    }
    sub_407DA0();
  }
LABEL_2:
  result = &v4[16 * v2];
  *(_QWORD *)result = a1;
  *((_QWORD *)result + 1) = a2;
  nmemb = v2 + 1;
  return result;
}

_QWORD *__fastcall sub_404B00(const char *a1, char a2)
{
  char *v2; // r15
  unsigned __int64 v3; // rdi
  char v4; // bl
  char v5; // bp
  char v6; // r12
  char v7; // r14
  char v8; // r13
  size_t v9; // r15
  size_t v10; // rbx
  unsigned __int64 *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // r12
  unsigned __int64 *v14; // rdi
  char *v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *result; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rbp
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  const char *v23; // rsi
  char *v24; // rax
  char *v25; // rbx
  size_t v26; // rax
  void *v27; // rbx
  __int64 v28; // rbp
  char *v29; // rax
  __int64 v30; // rbx
  char *v31; // rax
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]

  v2 = (char *)a1;
  if ( (a2 & 1) != 0 && !strcmp(a1, "-") )
  {
    v2 = (char *)(a1 + 1);
    v3 = 1LL;
    v4 = 1;
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
  }
  v5 = v4;
  v6 = 0;
  v7 = 0;
  v32 = 1LL;
  while ( 1 )
  {
    v8 = *v2;
    if ( *v2 == 45 )
    {
      if ( !v5 )
      {
        v6 = v4 & (v3 == 0);
        if ( !v6 )
        {
          if ( v4 )
          {
            v32 = v3;
            v5 = v4;
            v3 = 0LL;
          }
          else
          {
            v6 = 0;
            v3 = 0LL;
            v5 = 1;
            v32 = 1LL;
          }
          goto LABEL_16;
        }
        if ( (a2 & 4) != 0 )
          goto LABEL_69;
LABEL_72:
        v24 = dcgettext(0LL, "fields are numbered from 1", 5);
        goto LABEL_63;
      }
      if ( (a2 & 4) != 0 )
        v24 = dcgettext(0LL, "invalid byte or character range", 5);
      else
        v24 = dcgettext(0LL, "invalid field range", 5);
LABEL_63:
      error(0, 0, v24);
      sub_404360(1);
    }
    if ( v8 == 44 || ((*__ctype_b_loc())[(unsigned __int8)v8] & 1) != 0 || !v8 )
      break;
    if ( (unsigned int)(v8 - 48) > 9 )
    {
      v30 = sub_407590(v2);
      if ( (a2 & 4) != 0 )
        v31 = dcgettext(0LL, "invalid byte/character position %s", 5);
      else
        v31 = dcgettext(0LL, "invalid field value %s", 5);
      error(0, 0, v31, v30);
      sub_404360(1);
    }
    if ( !v6 || !qword_6103B8 )
      qword_6103B8 = v2;
    if ( v5 )
      v7 = v5;
    else
      v4 = 1;
    if ( v3 > 0x1999999999999999LL || (v18 = v8 - 48 + 10 * v3, v18 < v3) || v18 == -1LL )
    {
      v25 = qword_6103B8;
      v26 = strspn(qword_6103B8, "0123456789");
      v27 = (void *)sub_407DE0(v25, v26);
      v28 = sub_407590(v27);
      if ( (a2 & 4) != 0 )
        v29 = dcgettext(0LL, "byte/character offset %s is too large", 5);
      else
        v29 = dcgettext(0LL, "field number %s is too large", 5);
      error(0, 0, v29, v28);
      free(v27);
      sub_404360(1);
    }
    v3 = v8 - 48 + 10 * v3;
    v6 = 1;
LABEL_16:
    ++v2;
  }
  if ( v5 )
  {
    if ( v4 )
    {
      if ( !v7 )
        goto LABEL_13;
    }
    else if ( !v7 )
    {
      if ( (a2 & 1) == 0 )
      {
        v23 = "invalid range with no endpoint: -";
        goto LABEL_62;
      }
      v32 = 1LL;
LABEL_13:
      sub_404A30(v32, -1LL);
LABEL_14:
      if ( !*v2 )
        goto LABEL_24;
LABEL_15:
      v3 = 0LL;
      v6 = 0;
      v5 = 0;
      v7 = 0;
      v4 = 0;
      goto LABEL_16;
    }
    if ( v32 > v3 )
    {
      v23 = "invalid decreasing range";
      goto LABEL_62;
    }
    sub_404A30(v32, v3);
    goto LABEL_14;
  }
  if ( !v3 )
  {
    if ( (a2 & 4) != 0 )
    {
LABEL_69:
      v24 = dcgettext(0LL, "byte/character positions are numbered from 1", 5);
      goto LABEL_63;
    }
    goto LABEL_72;
  }
  sub_404A30(v3, v3);
  if ( *v2 )
    goto LABEL_15;
LABEL_24:
  if ( !nmemb )
  {
    if ( (a2 & 4) != 0 )
    {
      v24 = dcgettext(0LL, "missing list of byte/character positions", 5);
    }
    else
    {
      v23 = "missing list of fields";
LABEL_62:
      v24 = dcgettext(0LL, v23, 5);
    }
    goto LABEL_63;
  }
  v9 = 0LL;
  qsort(ptr, nmemb, 0x10uLL, (__compar_fn_t)compar);
  v10 = nmemb;
  v11 = (unsigned __int64 *)ptr;
  while ( v9 < v10 )
  {
LABEL_27:
    if ( ++v9 < v10 )
    {
      v12 = 2 * v9;
      v13 = 16 * v9 - 16;
      v14 = &v11[2 * v9];
      v15 = (char *)v11 + v13;
      v16 = *(unsigned __int64 *)((char *)v11 + v13 + 8);
      if ( v16 >= *v14 )
      {
        while ( 1 )
        {
          if ( v14[1] >= v16 )
            v16 = v14[1];
          *((_QWORD *)v15 + 1) = v16;
          memmove(v14, &v11[v12 + 2], 16 * (v10 - v9) - 16);
          v11 = (unsigned __int64 *)ptr;
          v10 = nmemb - 1;
          nmemb = v10;
          if ( v10 <= v9 )
            break;
          v15 = (char *)ptr + v13;
          v14 = (unsigned __int64 *)((char *)ptr + v12 * 8);
          v16 = *(_QWORD *)((char *)ptr + v13 + 8);
          if ( *((_QWORD *)ptr + 2 * v9) > v16 )
          {
            if ( v9 < v10 )
              goto LABEL_27;
            goto LABEL_34;
          }
        }
      }
    }
  }
LABEL_34:
  if ( (a2 & 2) != 0 )
  {
    ptr = 0LL;
    v19 = *v11;
    nmemb = 0LL;
    qword_6103C0 = 0LL;
    if ( v19 > 1 )
      sub_404A30(1LL, v19 - 1);
    v20 = v11 + 2;
    if ( v10 > 1 )
    {
      do
      {
        v21 = *(v20 - 1) + 1;
        if ( v21 != *v20 )
          sub_404A30(v21, *v20 - 1);
        v20 += 2;
      }
      while ( &v11[2 * v10] != v20 );
    }
    v22 = v11[2 * v10 - 1];
    if ( v22 != -1LL )
      sub_404A30(v22 + 1, -1LL);
    free(v11);
    v10 = nmemb;
    v11 = (unsigned __int64 *)ptr;
  }
  nmemb = v10 + 1;
  ptr = (void *)sub_407BB0(v11);
  result = (char *)ptr + 16 * nmemb - 16;
  result[1] = -1LL;
  *result = -1LL;
  return result;
}

void sub_4050A0()
{
  nmemb = 0LL;
  qword_6103C0 = 0LL;
  free(ptr);
  ptr = 0LL;
}

noreturn void  sub_4050E0()
{
  sub_404360(1);
}

__int64 __fastcall sub_4050F0(const char *a1, const char **a2, char *a3, size_t a4)
{
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

  v5 = a3;
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
      v5 += a4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( a3 )
      {
        v10 = memcmp(&a3[a4 * v14], v5, a4) == 0;
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
    v5 += a4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    return v14;
  return v12;
}

void __fastcall sub_405210(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_407570(1LL);
  v5 = sub_407260(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_405290(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  const char *v11; // rax
  const char *v12; // rax
  char *IO_write_ptr; // rax

  v3 = 0LL;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( !v9 || memcmp(v3, a2, a3) )
    {
      ++v9;
      v3 = a2;
      a2 += a3;
      v11 = (const char *)sub_407590(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = (const char *)sub_407590(i);
    __fprintf_chk(stderr, 1LL, ", %s", v12);
  }
LABEL_7:
  IO_write_ptr = stderr->_IO_write_ptr;
  if ( IO_write_ptr >= stderr->_IO_write_end )
  {
    LODWORD(IO_write_ptr) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 10;
  }
  return (int)IO_write_ptr;
}

__int64 __fastcall sub_4053B0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_4050F0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_405210(a1, (__int64)a2, result);
    sub_405290((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_405420(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  __int64 *v6; // rbx

  v4 = *a2;
  if ( *a2 )
  {
    v6 = a2 + 1;
    do
    {
      if ( !memcmp(s1, a3, a4) )
        break;
      v4 = *v6;
      a3 += a4;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

__int64 sub_405490()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_4097E0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_6103C8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_6103D0 )
      {
        v5 = (const char *)sub_4073E0();
        error(0, *v1, "%s: %s", v5, v4);
      }
      else
      {
        error(0, *v1, "%s", v3);
      }
LABEL_8:
      _exit(dword_610290);
    }
  }
  result = sub_4097E0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_405530(const char *a1, _BYTE *a2, __int64 a3, size_t *a4, int a5, char a6)
{
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r15
  char *v12; // r12
  size_t v13; // rdx
  size_t v14; // rax
  int v15; // esi
  size_t v16; // r13
  size_t v17; // r15
  unsigned __int64 v18; // rbp
  _BYTE *v19; // rdi
  size_t v20; // rdx
  _BYTE *v21; // rax
  _BYTE *v22; // rdx
  __int64 v23; // r13
  size_t v25; // r12
  size_t v26; // rax
  size_t v27; // r15
  wint_t v28; // edi
  wchar_t *v29; // rdx
  char *v30; // rax
  wchar_t *v31; // r14
  wchar_t v32; // edi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  wchar_t *ptr; // [rsp+0h] [rbp-68h]
  void *src; // [rsp+18h] [rbp-50h]
  void *srca; // [rsp+18h] [rbp-50h]
  __int64 size; // [rsp+20h] [rbp-48h]
  char sizea; // [rsp+20h] [rbp-48h]
  size_t sizeb; // [rsp+20h] [rbp-48h]
  wchar_t *v43; // [rsp+28h] [rbp-40h]

  src = (void *)a1;
  v9 = strlen(a1);
  v10 = v9;
  if ( (a6 & 2) != 0 || (v25 = v9, __ctype_get_mb_cur_max() <= 1) )
  {
LABEL_2:
    ptr = 0LL;
    v11 = v10;
    v12 = 0LL;
    goto LABEL_3;
  }
  v26 = mbstowcs(0LL, a1, 0LL);
  if ( v26 == -1LL )
  {
    if ( (a6 & 1) == 0 )
    {
LABEL_36:
      v12 = 0LL;
      v23 = -1LL;
      free(0LL);
      goto LABEL_28;
    }
    goto LABEL_2;
  }
  v27 = v26 + 1;
  size = v26 + 1;
  ptr = (wchar_t *)malloc(size * 4);
  if ( !ptr )
  {
    v11 = v10;
    v12 = 0LL;
    if ( (a6 & 1) == 0 )
      goto LABEL_36;
LABEL_3:
    v13 = *a4;
    if ( *a4 < v11 )
    {
      v10 = *a4;
      v14 = 0LL;
      goto LABEL_5;
    }
LABEL_30:
    if ( v11 < v13 )
    {
      v15 = a5;
      v14 = v13 - v11;
      *a4 = v11;
      if ( a5 )
      {
LABEL_6:
        v16 = 0LL;
        if ( v15 != 1 )
        {
          v16 = v14 >> 1;
          v14 = (v14 >> 1) + (v14 & 1);
        }
        goto LABEL_8;
      }
LABEL_32:
      v16 = v14;
      v14 = 0LL;
LABEL_8:
      v17 = v14 + v10;
      if ( (a6 & 4) != 0 )
      {
        v17 = v10;
        v14 = 0LL;
      }
      if ( (a6 & 8) != 0 )
        v16 = 0LL;
      if ( a3 )
      {
        v18 = (unsigned __int64)&a2[a3 - 1];
        v19 = a2;
        if ( (unsigned __int64)a2 < v18 && v14 )
        {
          do
            *v19++ = 32;
          while ( v14 + a2 - v19 && v18 > (unsigned __int64)v19 );
        }
        *v19 = 0;
        v20 = v18 - (_QWORD)v19;
        if ( v18 - (unsigned __int64)v19 > v10 )
          v20 = v10;
        v21 = mempcpy(v19, src, v20);
        v22 = v21;
        if ( v18 > (unsigned __int64)v21 && v16 )
        {
          do
            *v22++ = 32;
          while ( &v21[v16 - (_QWORD)v22] && v18 > (unsigned __int64)v22 );
        }
        *v22 = 0;
      }
      v23 = v17 + v16;
      goto LABEL_27;
    }
    v13 = v11;
    v14 = 0LL;
LABEL_5:
    v15 = a5;
    *a4 = v13;
    if ( a5 )
      goto LABEL_6;
    goto LABEL_32;
  }
  if ( !mbstowcs(ptr, a1, v27) )
  {
    v11 = v10;
    v12 = 0LL;
    goto LABEL_3;
  }
  ptr[size - 1] = 0;
  v28 = *ptr;
  v29 = ptr;
  if ( *ptr )
  {
    sizea = 0;
    do
    {
      v43 = v29;
      if ( !iswprint(v28) )
      {
        *v43 = 65533;
        sizea = 1;
      }
      v29 = v43 + 1;
      v28 = v43[1];
    }
    while ( v28 );
    v11 = wcswidth(ptr, v27);
    if ( sizea )
    {
      sizeb = wcstombs(0LL, ptr, 0LL) + 1;
      v30 = (char *)malloc(sizeb);
      goto LABEL_46;
    }
  }
  else
  {
    v11 = wcswidth(ptr, v27);
  }
  v13 = *a4;
  if ( *a4 >= v11 )
  {
    v12 = 0LL;
    goto LABEL_30;
  }
  sizeb = v25 + 1;
  v30 = (char *)malloc(v25 + 1);
LABEL_46:
  v12 = v30;
  if ( v30 )
  {
    v31 = ptr;
    v32 = *ptr;
    srca = (void *)*a4;
    if ( *ptr )
    {
      v11 = 0LL;
      do
      {
        LODWORD(v33) = wcwidth(v32);
        if ( (_DWORD)v33 == -1 )
        {
          *v31 = 65533;
          v33 = 1LL;
        }
        else
        {
          v33 = (int)v33;
        }
        v34 = v11 + v33;
        if ( (unsigned __int64)srca < v34 )
          break;
        v32 = *++v31;
        v11 = v34;
      }
      while ( *v31 );
    }
    else
    {
      v31 = ptr;
      v11 = 0LL;
    }
    *v31 = 0;
    src = v12;
    v10 = wcstombs(v12, ptr, sizeb);
    goto LABEL_3;
  }
  if ( (a6 & 1) != 0 )
    goto LABEL_3;
  v23 = -1LL;
LABEL_27:
  free(ptr);
LABEL_28:
  free(v12);
  return v23;
}

_BYTE *__fastcall sub_4058D0(const char *a1, size_t *a2, int a3, char a4)
{
  void *v4; // r12
  size_t v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  void *v11; // rdi

  v4 = 0LL;
  v5 = *a2;
  v6 = *a2;
  while ( 1 )
  {
    v7 = v6 + 1;
    v8 = realloc(v4, v6 + 1);
    v9 = v8;
    if ( !v8 )
    {
      free(v4);
      return v9;
    }
    *a2 = v5;
    v6 = sub_405530(a1, v8, v7, a2, a3, a4);
    if ( v6 == -1LL )
      break;
    v4 = v9;
    if ( v7 > v6 )
      return v9;
  }
  v11 = v9;
  v9 = 0LL;
  free(v11);
  return v9;
}

char *__fastcall sub_405970(const char *a1)
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
  qword_6103D8 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_405A10(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_4098A0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40C3D9;
      if ( !v5 )
        return (char *)&unk_40C3CE;
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
    v2 = (char *)&unk_40C3D5;
    if ( !v5 )
      return (char *)&unk_40C3D2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_405B10(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
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
  char *v58; // rax
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
  char *s2; // [rsp+50h] [rbp-78h]
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
                return sub_405B10((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_405B10((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_409760((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_405B10((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_405A10("`", a5);
        v51 = sub_405A10("'", a5);
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

unsigned __int64 __fastcall sub_405B10(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
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
  char *v58; // rax
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
  char *s2; // [rsp+50h] [rbp-78h]
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
                return sub_405B10((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_405B10((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_409760((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_405B10((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_405A10("`", a5);
        v51 = sub_405A10("'", a5);
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

_BYTE *__fastcall sub_406D40(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  unsigned __int64 *v9; // rbx
  _BYTE *v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rax
  int v14; // r8d
  unsigned __int64 v17; // [rsp+10h] [rbp-48h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  int v19; // [rsp+18h] [rbp-40h]
  int v20; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)off_6102D8;
  v8 = v6;
  v19 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6102F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_407DA0();
    if ( off_6102D8 == &xmmword_6102E0 )
    {
      v7 = (__m128i *)sub_407BB0(0LL);
      off_6102D8 = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      off_6102D8 = (void *)sub_407BB0(off_6102D8);
      v7 = (__m128i *)off_6102D8;
    }
    memset(&v7[dword_6102F0], 0, 16LL * (a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v9 = (unsigned __int64 *)&v7[a1];
  v10 = (_BYTE *)v9[1];
  v20 = *(_DWORD *)(a4 + 4) | 1;
  v17 = *v9;
  v11 = sub_405B10(v10, *v9, a2, a3, *(_DWORD *)a4, v20, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v17 <= v11 )
  {
    v12 = v11 + 1;
    *v9 = v11 + 1;
    if ( v10 != (_BYTE *)&unk_6103E0 )
    {
      v18 = v11 + 1;
      free(v10);
      v12 = v18;
    }
    v13 = (_BYTE *)sub_407B50(v12);
    v14 = *(_DWORD *)a4;
    v9[1] = (unsigned __int64)v13;
    v10 = v13;
    sub_405B10(v13, v12, a2, a3, v14, v20, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v19;
  return v10;
}

_BYTE *__fastcall sub_406D40(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  unsigned __int64 *v9; // rbx
  _BYTE *v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rax
  int v14; // r8d
  unsigned __int64 v17; // [rsp+10h] [rbp-48h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  int v19; // [rsp+18h] [rbp-40h]
  int v20; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)off_6102D8;
  v8 = v6;
  v19 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6102F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_407DA0();
    if ( off_6102D8 == &xmmword_6102E0 )
    {
      v7 = (__m128i *)sub_407BB0(0LL);
      off_6102D8 = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      off_6102D8 = (void *)sub_407BB0(off_6102D8);
      v7 = (__m128i *)off_6102D8;
    }
    memset(&v7[dword_6102F0], 0, 16LL * (a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v9 = (unsigned __int64 *)&v7[a1];
  v10 = (_BYTE *)v9[1];
  v20 = *(_DWORD *)(a4 + 4) | 1;
  v17 = *v9;
  v11 = sub_405B10(v10, *v9, a2, a3, *(_DWORD *)a4, v20, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v17 <= v11 )
  {
    v12 = v11 + 1;
    *v9 = v11 + 1;
    if ( v10 != (_BYTE *)&unk_6103E0 )
    {
      v18 = v11 + 1;
      free(v10);
      v12 = v18;
    }
    v13 = (_BYTE *)sub_407B50(v12);
    v14 = *(_DWORD *)a4;
    v9[1] = (unsigned __int64)v13;
    v10 = v13;
    sub_405B10(v13, v12, a2, a3, v14, v20, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v19;
  return v10;
}

__int64 __fastcall sub_406EE0(__int128 *a1)
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
    v1 = &xmmword_6104E0;
  result = sub_407D50(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_406FD0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_6104E0;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_405B10(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_407050(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_6104E0;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_405B10(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_407B50(v11 + 1);
  sub_405B10(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_407150()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)off_6102D8;
  if ( dword_6102F0 > 1 )
  {
    v1 = (void **)((char *)off_6102D8 + 24);
    v2 = (void **)((char *)off_6102D8 + 16 * (unsigned int)(dword_6102F0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_6103E0 )
  {
    free(v4);
    *(_QWORD *)&xmmword_6102E0 = 256LL;
    *((_QWORD *)&xmmword_6102E0 + 1) = &unk_6103E0;
  }
  if ( v0 != &xmmword_6102E0 )
  {
    free(v0);
    off_6102D8 = &xmmword_6102E0;
  }
  dword_6102F0 = 1;
}

_BYTE *__fastcall sub_407260(int a1, int a2, __int64 a3)
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
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407260(int a1, int a2, __int64 a3)
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
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4072D0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_406D40(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_4072D0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_406D40(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_407360(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_610510;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6104E0);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6104F0);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_610500);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_406D40(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_4073E0(__int64 a1)
{
  return sub_407360(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407410(int a1, int a2, __int64 a3)
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
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407410(int a1, int a2, __int64 a3)
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
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407480(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6104E0);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6104F0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_610500);
  v8 = qword_610510;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_406D40(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_407570(int a1, __int64 a2)
{
  return sub_406D40(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

_BYTE *__fastcall sub_407590(__int64 a1)
{
  return sub_406D40(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

__int64 __fastcall sub_4075B0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4075B0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4079B0(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_4075B0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_4075B0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_407A10(
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
        return sub_4075B0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_4075B0(a1, a2, a3, a4, v15, i);
}

int sub_407AD0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40A199);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_407B50(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_407DA0();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_407BA0(size_t a1)
{
  return sub_407B50(a1);
}

void *__fastcall sub_407BB0(void *a1, size_t a2)
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
        sub_407DA0();
    }
  }
  return result;
}

void *__fastcall sub_407D00(size_t n)
{
  void *v1; // rax

  v1 = sub_407B50(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_407D20(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_407DA0(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_407D50(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_407B50(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_407D80(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_407D50(src, v1 + 1);
}

noreturn void  sub_407DA0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(dword_610290, 0, "%s", v0);
  abort();
}

char *__fastcall sub_407DE0(const char *a1, size_t a2)
{
  char *result; // rax

  result = strndup(a1, a2);
  if ( !result )
    sub_407DA0();
  return result;
}

__int64 __fastcall sub_407E00(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtol");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = strtol(nptr, p_endptr, a3);
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

__int64 __fastcall sub_408550(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
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
  v13 = __strtoul_internal(nptr, p_endptr, a3, 0);
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

__int64 __fastcall sub_408990(__int64 a1, int *a2)
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

__int64 __fastcall sub_408A70(
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

__int64 __fastcall sub_409090(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_408990((__int64)a2, a7);
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
        sub_408990((__int64)a2, a7);
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
            return (unsigned int)sub_408A70(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408A70(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_408A70(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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

__int64 __fastcall sub_409660(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_610520 = dword_6102FC;
  dword_610524 = dword_6102F8;
  result = sub_409090(a1, a2, a3, a4, a5, a6, &dword_610520, a7);
  dword_6102FC = dword_610520;
  nptr = (char *)qword_610530;
  dword_6102F4 = dword_610528;
  return result;
}

__int64 __fastcall sub_4096C0(int a1, __int64 *a2, const char *a3)
{
  return sub_409660(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_4096E0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_409660(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_409700(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409090(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_409720(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_409660(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_409740(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409090(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409760(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409840(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

__int64 __fastcall sub_4097E0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_409E10(stream);
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

bool __fastcall sub_409840(int a1)
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

const char *sub_4098A0()
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
  v1 = qword_610558;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_610558 )
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
          qword_610558 = v1;
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
                sub_409E10(v60);
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
            sub_409E10(v39);
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

int __fastcall sub_409E10(FILE *stream)
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
  if ( !(unsigned int)sub_409E90(stream) )
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

int __fastcall sub_409E90(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_409ED0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_409ED0(FILE *a1, __off_t a2, int a3)
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

int __fastcall sub_409FA0(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_610248 )
    v1 = (void *)qword_610248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409FB8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_60FE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
