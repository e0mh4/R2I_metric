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
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  _BOOL4 v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  int i; // ebx
  char *v25; // rdi
  char *v26; // rcx
  __ssize_t v27; // rax
  char *v29; // rax
  char v30; // r15
  const char *v31; // rcx
  size_t v32; // rax
  char v33; // dl
  int *v34; // rax
  __int64 v35; // rax
  char *v36; // r8
  __int64 v37; // r9
  size_t v38; // rax
  __int64 v39; // rax
  char *v40; // r13
  char v41; // dl
  __int64 v42; // rcx
  char *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char *v46; // rbp
  int *v47; // rax
  char *v48; // rax
  const char *v49; // r15
  __int64 v50; // rax
  const unsigned __int16 **v51; // rax
  __int64 v52; // rcx
  char *v53; // rax
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  char *v59; // rax
  __int64 v60; // rbx
  char *v61; // rax
  __int64 v62; // rbx
  char *v63; // rax
  char *v64; // rax
  char *v65; // rax
  char *nptr; // [rsp+0h] [rbp-58h]
  char *nptra; // [rsp+0h] [rbp-58h]
  char *nptrb; // [rsp+0h] [rbp-58h]
  __int64 v69; // [rsp+8h] [rbp-50h]
  int *v70; // [rsp+8h] [rbp-50h]
  __int64 v71; // [rsp+8h] [rbp-50h]
  char *s; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

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
            sub_407A10((char)stdout);
            exit(0);
          }
LABEL_40:
          sub_404360(1);
        }
        if ( *::nptr && ::nptr[1] )
          goto LABEL_172;
        dword_610254 = *::nptr;
      }
      else if ( v5 == 129 )
      {
        qword_610270 = sub_4029B0(::nptr);
      }
      else if ( v5 <= 129 )
      {
        if ( v5 != 128 )
          goto LABEL_40;
        HIDWORD(qword_6103AC) = dword_40C0D0[sub_4053B0("--from", ::nptr, off_40C100, dword_40C0D0, 4LL, off_610288)];
      }
      else if ( v5 == 130 )
      {
        LODWORD(qword_6103AC) = dword_40C090[sub_4053B0("--to", ::nptr, off_40C0A0, dword_40C090, 4LL, off_610288)];
      }
      else
      {
        qword_610268 = sub_4029B0(::nptr);
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
          if ( ::nptr )
          {
            if ( (unsigned int)sub_408550(::nptr) || !qword_610350 )
            {
              v3 = (char *)sub_407590(::nptr);
              v6 = dcgettext(0LL, "invalid header value %s", 5);
              error(1, 0, v6, v3);
LABEL_51:
              dword_610278 = dword_40C030[sub_4053B0("--round", ::nptr, off_40C060, dword_40C030, 4LL, off_610288)];
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
          qword_610370 = (__int64)::nptr;
        }
        else
        {
          if ( v5 != 141 )
            goto LABEL_40;
          dword_6103A8 = dword_40BFE0[sub_4053B0("--invalid", ::nptr, off_40C000, dword_40BFE0, 4LL, off_610288)];
        }
      }
      else if ( v5 == 134 )
      {
        dword_610398 = 1;
      }
      else if ( v5 < 134 )
      {
        s1 = ::nptr;
      }
      else if ( v5 == 135 )
      {
        if ( (unsigned int)sub_407E00(::nptr) || !qword_610380 )
          goto LABEL_170;
        if ( qword_610380 < 0 )
        {
          dword_610258 = 0;
          qword_610380 = -qword_610380;
        }
      }
      else
      {
        if ( nmemb )
          goto LABEL_171;
        sub_404B00(::nptr, 1LL);
      }
    }
  }
  if ( qword_610370 && dword_610398 )
    goto LABEL_164;
  if ( !v3 && byte_610348 )
  {
    v44 = dcgettext(0LL, "failed to set locale", 5);
    error(0, 0, v44);
  }
  if ( !byte_610348 || qword_6103AC )
    goto LABEL_66;
  v3 = (char *)qword_610370;
  if ( dword_610398 )
  {
    if ( qword_610370 )
      goto LABEL_67;
LABEL_111:
    if ( byte_610348 && !*nl_langinfo(65537) )
    {
      v29 = dcgettext(0LL, "grouping has no effect in this locale", 5);
      error(0, 0, v29);
    }
    goto LABEL_83;
  }
  if ( qword_610380 )
  {
    if ( !qword_610370 )
      goto LABEL_83;
  }
  else if ( !qword_610370 )
  {
    v7 = dcgettext(0LL, "no conversion option specified", 5);
    error(0, 0, v7);
LABEL_66:
    v3 = (char *)qword_610370;
    if ( !qword_610370 )
      goto LABEL_82;
  }
LABEL_67:
  n = 0LL;
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
LABEL_70:
        v9 += v10;
        ++v8;
        continue;
      }
      v3 = (char *)sub_407590(v3);
      v53 = dcgettext(0LL, "format %s has no %% directive", 5);
      error(1, 0, v53, v3);
      goto LABEL_163;
    }
    break;
  }
  v12 = v9 + 1;
  if ( v3[v9 + 1] == 37 )
  {
    v10 = 2LL;
    goto LABEL_70;
  }
  v30 = 0;
  v31 = &v3[v12];
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v32 = strspn(v31, " ");
        v12 += v32;
        v31 = &v3[v12];
        v33 = v3[v12];
        if ( v33 != 39 )
          break;
        dword_610398 = 1;
        v31 = &v3[++v12];
      }
      if ( v33 != 48 )
        break;
      ++v12;
      v30 = 1;
      v31 = &v3[v12];
    }
  }
  while ( v32 );
  v34 = __errno_location();
  *v34 = 0;
  v70 = v34;
  v35 = strtol(&v3[v12], (char **)&n, 10);
  v36 = (char *)v70;
  v37 = v35;
  if ( *v70 == 34 )
  {
LABEL_163:
    v3 = (char *)sub_407590(v3);
    v54 = dcgettext(0LL, "invalid format %s (width overflow)", 5);
    error(1, 0, v54, v3);
LABEL_164:
    v55 = dcgettext(0LL, "--grouping cannot be combined with --format", 5);
    error(1, 0, v55);
LABEL_165:
    v56 = dcgettext(0LL, "grouping cannot be combined with --to", 5);
    error(1, 0, v56);
LABEL_166:
    v3 = (char *)sub_407590(v3);
    v57 = dcgettext(0LL, "format %s has too many %% directives", 5);
    error(1, 0, v57, v3);
    goto LABEL_167;
  }
  if ( (char *)n != &v3[v12] && v35 )
  {
    if ( byte_610348 && qword_610380 )
    {
      if ( v30 && v35 > 0 )
      {
LABEL_125:
        qword_610378 = v37;
        goto LABEL_126;
      }
      nptra = (char *)v70;
      v71 = v35;
      v48 = dcgettext(0LL, "--format padding overriding --padding", 5);
      error(0, 0, v48);
      v37 = v71;
      v36 = nptra;
    }
    if ( v37 < 0 )
    {
      dword_610258 = 0;
      qword_610380 = -v37;
    }
    else
    {
      if ( v30 )
        goto LABEL_125;
      qword_610380 = v37;
    }
  }
LABEL_126:
  v38 = n - (_QWORD)v3;
  if ( !*(_BYTE *)n )
    goto LABEL_168;
  if ( *(_BYTE *)n != 46 )
    goto LABEL_128;
  *(_DWORD *)v36 = 0;
  v49 = &v3[v38 + 1];
  nptrb = v36;
  v50 = strtol(v49, (char **)&n, 10);
  qword_610260 = v50;
  if ( *(_DWORD *)nptrb == 34 || v50 < 0 || (v51 = __ctype_b_loc(), v52 = *v49, (*v51)[v52] & 1) || (_BYTE)v52 == 43 )
  {
LABEL_169:
    v60 = sub_407590(v3);
    v61 = dcgettext(0LL, "invalid precision in format %s", 5);
    error(1, 0, v61, v60);
LABEL_170:
    v62 = sub_407590(::nptr);
    v63 = dcgettext(0LL, "invalid padding value %s", 5);
    error(1, 0, v63, v62);
LABEL_171:
    v64 = dcgettext(0LL, "multiple field specifications", 5);
    error(1, 0, v64);
LABEL_172:
    v65 = dcgettext(0LL, "the delimiter must be a single character", 5);
    error(1, 0, v65);
    start();
  }
  v38 = n - (_QWORD)v3;
LABEL_128:
  if ( v3[v38] != 102 )
  {
LABEL_167:
    v3 = (char *)sub_407590(v3);
    v58 = dcgettext(0LL, "invalid format %s, directive must be %%[0]['][-][N][.][N]f", 5);
    error(1, 0, v58, v3);
LABEL_168:
    v3 = (char *)sub_407590(v3);
    v59 = dcgettext(0LL, "format %s ends in %%", 5);
    error(1, 0, v59, v3);
    goto LABEL_169;
  }
  v39 = v38 + 1;
  v40 = &v3[v39];
  v41 = v3[v39];
  if ( v41 )
  {
    do
    {
      v42 = v39 + 1;
      if ( v41 == 37 )
      {
        if ( v3[v39 + 1] != 37 )
          goto LABEL_166;
        v42 = v39 + 2;
        v41 = v3[v39 + 2];
      }
      else
      {
        v41 = v3[v39 + 1];
      }
      v39 = v42;
    }
    while ( v41 );
    if ( v8 )
    {
LABEL_75:
      v13 = (char *)sub_407DE0(v3, v8);
      v14 = *v40 == 0;
      qword_610368 = v13;
      if ( v14 )
        goto LABEL_76;
    }
    qword_610360 = (char *)sub_407D80(v40);
    goto LABEL_76;
  }
  if ( v8 )
    goto LABEL_75;
LABEL_76:
  if ( byte_610338 )
  {
    v69 = sub_407570(2LL);
    v15 = "Left";
    v16 = "yes";
    v17 = sub_407570(1LL);
    if ( dword_610258 )
      v15 = "Right";
    nptr = (char *)qword_610380;
    if ( !dword_610398 )
      v16 = "no";
    v18 = sub_407570(0LL);
    __fprintf_chk(
      stderr,
      1LL,
      "format String:\n  input: %s\n  grouping: %s\n  padding width: %ld\n  alignment: %s\n  prefix: %s\n  suffix: %s\n",
      v18,
      v16,
      nptr,
      v15,
      v17,
      v69,
      v19);
  }
LABEL_82:
  if ( dword_610398 )
  {
    if ( !(_DWORD)qword_6103AC )
      goto LABEL_111;
    goto LABEL_165;
  }
LABEL_83:
  if ( qword_610380 >= (unsigned __int64)qword_610388 )
    sub_402BD0();
  v20 = 0;
  if ( !qword_610380 )
    v20 = dword_610254 == 128;
  dword_610358 = v20;
  if ( dword_6103A8 )
    status = 0;
  v21 = dword_6102FC;
  if ( dword_6102FC < a1 )
  {
    if ( !byte_610348
      || !qword_610350
      || (v45 = dcgettext(0LL, "--header ignored with command-line input", 5),
          error(0, 0, v45),
          v21 = dword_6102FC,
          a1 > dword_6102FC) )
    {
      i = 1;
      do
      {
        i &= sub_4041A0(a2[v21]);
        v21 = dword_6102FC + 1;
        dword_6102FC = v21;
      }
      while ( v21 < a1 );
      goto LABEL_101;
    }
    return 0LL;
  }
  v22 = qword_610350;
  s = 0LL;
  n = 0LL;
  --qword_610350;
  if ( v22 )
  {
    do
    {
      if ( getdelim(&s, &n, (unsigned __int8)byte_610250, stdin) <= 0 )
        break;
      fputs_unlocked(s, stdout);
      v23 = qword_610350--;
    }
    while ( v23 );
  }
  for ( i = 1; ; i &= sub_4041A0(v25) )
  {
    v27 = getdelim(&s, &n, (unsigned __int8)byte_610250, stdin);
    if ( v27 <= 0 )
      break;
    v25 = s;
    v26 = &s[v27 - 1];
    if ( *v26 == (unsigned __int8)byte_610250 )
    {
      *v26 = 0;
      v25 = s;
    }
  }
  if ( stdin->_flags & 0x20 )
  {
    v46 = dcgettext(0LL, "error reading input", 5);
    v47 = __errno_location();
    error(0, *v47, v46);
  }
LABEL_101:
  if ( !byte_610348 )
  {
    if ( !i )
      goto LABEL_139;
    return 0LL;
  }
  if ( i )
    return 0LL;
  v43 = dcgettext(0LL, "failed to convert some of the input numbers", 5);
  error(0, 0, v43);
LABEL_139:
  if ( (unsigned int)(dword_6103A8 - 2) <= 1 )
    return 0LL;
  return 2LL;
}

// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(__int64 a1@<rax>, void (*a2)(void)@<rdx>)
{
  int v2; // esi
  int v3; // [rsp-8h] [rbp-8h]
  __int64 _0; // [rsp+0h] [rbp+0h]

  v2 = v3;
  *(_QWORD *)&v3 = a1;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v2, (char **)&_0, init, fini, a2, &v3);
  __halt();
}

__int64 *sub_4028FB()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
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

__int64 sub_4029A8()
{
  return sub_40291A();
}

__int64 __fastcall sub_4029B0(char *nptr)
{
  size_t v1; // rax
  size_t v2; // rbx
  __int64 v3; // r12
  char *v4; // r9
  char *v5; // r12
  __int64 result; // rax
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
    result = sub_402AF0();
  }
  else
  {
    free(v5);
    result = v12;
  }
  return result;
}

__int64 __fastcall sub_402AF0(const char **a1, long double *a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  const char *v4; // rcx
  unsigned int v5; // edx
  const char *v6; // rcx
  __int64 result; // rax
  unsigned int v8; // er8
  long double v9; // fst7
  int v10; // edx
  int v11; // edx

  v3 = a3;
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
    if ( *v3 )
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

__int64 __fastcall sub_402C00(char *s, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r12
  unsigned __int64 *v7; // rax
  unsigned int v8; // ebx
  const char *v10; // r13
  size_t v11; // rbx
  size_t v12; // rax
  const char *v13; // rbx
  int v14; // eax
  char v15; // dl
  __int64 v16; // rbx
  char *v17; // r13
  const unsigned __int16 *v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  char v21; // dl
  char *v22; // rax
  __int128 *v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r15
  char *v26; // r14
  int v27; // eax
  __int64 v28; // r9
  unsigned __int64 v29; // r14
  char *v30; // r15
  const unsigned __int16 **v31; // rax
  char v32; // dl
  const unsigned __int16 *v33; // rsi
  char *v34; // rax
  char *v35; // r15
  char v36; // dl
  int v37; // eax
  __int64 v38; // r15
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  char *v43; // r14
  unsigned int v44; // eax
  int v45; // eax
  unsigned __int64 v46; // rax
  __int64 v47; // rbx
  char *v48; // rax
  unsigned int v52; // eax
  char *v53; // rax
  unsigned int v54; // ebp
  char *v55; // r12
  int v56; // er13
  __int64 v57; // r9
  char v58; // cl
  unsigned int v59; // er13
  __int64 v60; // rax
  int v61; // edi
  int v62; // eax
  int v63; // edx
  __int16 v64; // dx
  __int64 v65; // rcx
  __int64 v66; // r9
  const char *v67; // rbx
  __int64 v68; // r13
  char *v69; // rax
  int v70; // eax
  int v71; // edx
  __int16 v72; // dx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  int v76; // ebx
  char *v77; // rax
  const char *v78; // rdx
  char v79; // bl
  char *v80; // rsi
  __int128 *v81; // rdx
  int v82; // ecx
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r9
  unsigned __int64 v87; // rcx
  FILE *v88; // rsi
  bool v89; // pf
  __int64 v91; // r9
  unsigned int v92; // eax
  __int16 v93; // ax
  __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // r9
  __int16 v97; // ax
  __int64 v98; // rax
  __int64 v99; // r8
  __int64 v100; // r9
  char *v101; // rax
  char *v102; // rax
  char *v103; // rax
  long double v107; // [rsp+10h] [rbp-178h]
  long double v111; // [rsp+10h] [rbp-178h]
  int v118; // [rsp+20h] [rbp-168h]
  int v119; // [rsp+20h] [rbp-168h]
  __int64 v127; // [rsp+20h] [rbp-168h]
  __int64 v128; // [rsp+20h] [rbp-168h]
  __int64 v129; // [rsp+20h] [rbp-168h]
  __int64 v130; // [rsp+20h] [rbp-168h]
  int v138; // [rsp+30h] [rbp-158h]
  unsigned int v139; // [rsp+30h] [rbp-158h]
  __int64 v140; // [rsp+30h] [rbp-158h]
  __int64 v141; // [rsp+30h] [rbp-158h]
  __int64 v142; // [rsp+30h] [rbp-158h]
  unsigned int v150; // [rsp+30h] [rbp-158h]
  unsigned int v152; // [rsp+30h] [rbp-158h]
  char v154; // [rsp+40h] [rbp-148h]
  char v155; // [rsp+40h] [rbp-148h]
  int v156; // [rsp+40h] [rbp-148h]
  __int64 v158; // [rsp+40h] [rbp-148h]
  __int64 v159; // [rsp+40h] [rbp-148h]
  __int64 v160; // [rsp+40h] [rbp-148h]
  __int64 v161; // [rsp+40h] [rbp-148h]
  __int64 v172; // [rsp+60h] [rbp-128h]
  __int64 v173; // [rsp+60h] [rbp-128h]
  __int16 v174; // [rsp+6Ch] [rbp-11Ch]
  __int16 v175; // [rsp+6Ch] [rbp-11Ch]
  __int16 v176; // [rsp+6Eh] [rbp-11Ah]
  unsigned __int16 v177; // [rsp+6Eh] [rbp-11Ah]
  char v178; // [rsp+7Eh] [rbp-10Ah]
  char v179; // [rsp+7Fh] [rbp-109h]
  char *s1; // [rsp+80h] [rbp-108h]
  char *v181; // [rsp+88h] [rbp-100h]
  __int128 v182; // [rsp+90h] [rbp-F8h]
  __int128 src; // [rsp+D0h] [rbp-B8h]

  v6 = s;
  v7 = (unsigned __int64 *)ptr;
  if ( ptr )
  {
    while ( *v7 != -1LL )
    {
      if ( a2 >= *v7 && a2 <= v7[1] )
        goto LABEL_10;
      v7 += 2;
    }
LABEL_7:
    v8 = 1;
    fputs_unlocked(s, stdout);
    return v8;
  }
  if ( a2 != 1 )
    goto LABEL_7;
LABEL_10:
  v10 = ::s1;
  if ( ::s1 )
  {
    v11 = strlen(s);
    v12 = strlen(v10);
    if ( v11 > v12 )
    {
      v13 = &s[v11 - v12];
      v14 = strcmp(v10, v13);
      v15 = byte_610338;
      if ( v14 )
      {
        if ( byte_610338 )
          fwrite("no valid suffix found\n", 1uLL, 0x16uLL, stderr);
      }
      else
      {
        *v13 = 0;
        if ( v15 )
        {
          v73 = sub_407590(v10);
          __fprintf_chk(stderr, 1LL, "trimming suffix %s\n", v73, v74, v75);
        }
      }
    }
  }
  v16 = (unsigned __int8)*s;
  if ( (_BYTE)v16 )
  {
    v17 = s;
    v18 = *__ctype_b_loc();
    do
    {
      if ( !(v18[v16] & 1) )
        break;
      v16 = (unsigned __int8)*++v17;
    }
    while ( (_BYTE)v16 );
    v19 = (_DWORD)s - (_DWORD)v17;
  }
  else
  {
    v17 = s;
    v19 = 0;
  }
  if ( dword_610358 )
  {
    if ( v19 || (__int64)a2 > 1 )
    {
      v46 = strlen(s);
      qword_610380 = v46;
      if ( v46 >= qword_610388 )
        sub_402BD0(v46);
    }
    else
    {
      qword_610380 = 0LL;
    }
    if ( !byte_610338 )
    {
      v118 = 0;
      __asm { fld     dword ptr [rsp+168h+var_168] }
      v138 = HIDWORD(qword_6103AC);
      __asm { fstp    [rsp+168h+var_F8] }
      v20 = (unsigned int)(HIDWORD(qword_6103AC) - 3) < 2 ? 1024 : 1000;
      goto LABEL_26;
    }
    __fprintf_chk(stderr, 1LL, "setting Auto-Padding to %ld characters\n", qword_610380, a5, a6);
  }
  s1 = 0LL;
  v119 = 0;
  __asm { fld     dword ptr [rsp+168h+var_168] }
  v138 = HIDWORD(qword_6103AC);
  __asm { fstp    [rsp+168h+var_F8] }
  v20 = (unsigned int)(HIDWORD(qword_6103AC) - 3) < 2 ? 1024 : 1000;
  if ( byte_610338 )
  {
    v41 = sub_407570(1LL);
    v42 = sub_407570(0LL);
    __fprintf_chk(
      stderr,
      1LL,
      "simple_strtod_human:\n  input string: %s\n  locale decimal-point: %s\n  MAX_UNSCALED_DIGITS: %d\n",
      v42,
      v41,
      18LL);
  }
LABEL_26:
  v21 = 0;
  v22 = v17;
  if ( *v17 == 45 )
  {
    v22 = v17 + 1;
    v21 = 1;
  }
  v178 = v21;
  s1 = v22;
  LODWORD(v23) = sub_402AF0((const char **)&s1, (long double *)&v182, &v178);
  if ( (unsigned int)v23 > 1 )
    goto LABEL_88;
  v25 = dword_61033C;
  v26 = s1;
  v27 = strncmp(s1, s2, dword_61033C);
  if ( v27 )
  {
    v29 = 0LL;
    goto LABEL_31;
  }
  __asm { fld     dword ptr [rsp+168h+var_168] }
  v43 = &v26[v25];
  s1 = v43;
  __asm { fstp    tbyte ptr [rsp+168h+src] }
  if ( *v43 == 45 )
  {
    ++v43;
    LOBYTE(v27) = 1;
  }
  v179 = v27;
  v181 = v43;
  v44 = sub_402AF0((const char **)&v181, (long double *)&src, &v179);
  if ( v44 > 1 )
  {
    LODWORD(v23) = v44;
LABEL_88:
    switch ( (_DWORD)v23 )
    {
      case 2:
        v29 = 0LL;
        v67 = "value too large to be converted: %s";
        break;
      case 3:
        goto LABEL_159;
      case 4:
        v29 = 0LL;
        v67 = "rejecting suffix in input: %s (consider using --from)";
        break;
      case 5:
        v29 = 0LL;
        v67 = "invalid suffix in input: %s";
        break;
      case 6:
        v29 = 0LL;
        v67 = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
        break;
      default:
        v29 = 0LL;
        v67 = 0LL;
        break;
    }
    goto LABEL_137;
  }
  if ( v44 == 1 )
    LODWORD(v23) = 1;
  if ( v179 )
  {
LABEL_159:
    v29 = 0LL;
    LODWORD(v23) = 3;
    v67 = "invalid number: %s";
    goto LABEL_137;
  }
  __asm { fld     tbyte ptr [rsp+168h+src] }
  v29 = v181 - s1;
  if ( (_DWORD)v181 != (_DWORD)s1 )
  {
    v45 = v29 - 1;
    if ( (_DWORD)v29 == 1 )
    {
      __asm { fdiv    cs:flt_40C130 }
    }
    else
    {
      __asm
      {
        fld     cs:flt_40C130
        fld     st
      }
      do
      {
        __asm { fmul    st, st(1) }
        --v45;
      }
      while ( v45 );
      __asm
      {
        fstp    st(1)
        fdivp   st(1), st
      }
    }
  }
  __asm { fld     [rsp+168h+var_F8] }
  if ( v178 )
    __asm { fsubrp  st(1), st }
  else
    __asm { faddp   st(1), st }
  __asm { fstp    [rsp+168h+var_F8] }
  s1 = v181;
LABEL_31:
  if ( byte_610338 )
    __fprintf_chk(stderr, 1LL, "  parsed numeric value: %Lf\n  input precision = %d\n", (unsigned int)v29, v24, v28);
  v30 = s1;
  v154 = *s1;
  if ( !*s1 )
  {
    if ( v138 != 4 )
    {
      v36 = byte_610338;
      v24 = 0LL;
      __asm { fld1 }
      goto LABEL_48;
    }
    LODWORD(v23) = 6;
    v67 = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
    goto LABEL_137;
  }
  v31 = __ctype_b_loc();
  v32 = v154;
  v33 = *v31;
  v34 = v30;
  while ( 1 )
  {
    v35 = v34++;
    if ( !(v33[(unsigned __int8)v32] & 1) )
      break;
    s1 = v34;
    v32 = v35[1];
  }
  v155 = v32;
  if ( !strchr("KMGTPEZY", v32) )
  {
    LODWORD(v23) = 5;
    v67 = "invalid suffix in input: %s";
    goto LABEL_137;
  }
  if ( !v138 )
  {
    LODWORD(v23) = 4;
    v67 = "rejecting suffix in input: %s (consider using --from)";
    goto LABEL_137;
  }
  v24 = 0LL;
  if ( (unsigned __int8)(v155 - 69) <= 0x15u )
    v24 = (unsigned int)dword_40BD20[(unsigned __int8)(v155 - 69)];
  s1 = v35 + 1;
  if ( v138 == 1 )
  {
    v36 = byte_610338;
    if ( v35[1] == 105 )
    {
      s1 = v35 + 2;
      if ( byte_610338 )
      {
        v152 = v24;
        v20 = 1024;
        __fprintf_chk(stderr, 1LL, "  Auto-scaling, found 'i', switching to base %d\n", 1024LL, v24, v28);
        v24 = v152;
        v36 = byte_610338;
        __asm { fld     cs:flt_40C134 }
      }
      else
      {
        __asm { fld     cs:flt_40C134 }
        v20 = 1024;
      }
    }
    else
    {
      v150 = v20;
      __asm { fild    dword ptr [rsp+168h+var_158] }
    }
    goto LABEL_44;
  }
  if ( v138 == 4 )
  {
    if ( v35[1] == 105 )
    {
      s1 = v35 + 2;
      goto LABEL_43;
    }
    v29 = 0LL;
    LODWORD(v23) = 6;
    v67 = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
LABEL_137:
    if ( dword_6103A8 != 3 )
    {
      v68 = sub_407590(v17);
      v69 = dcgettext(0LL, v67, 5);
      error(status, 0, v69, v68);
    }
    goto LABEL_55;
  }
LABEL_43:
  v139 = v20;
  __asm { fild    dword ptr [rsp+168h+var_158] }
  v36 = byte_610338;
LABEL_44:
  if ( !(_DWORD)v24 )
    goto LABEL_289;
  __asm { fld     st }
  v37 = v24 - 1;
  if ( (_DWORD)v24 == 1 )
  {
    __asm { fstp    st(1) }
    v29 = 0LL;
    v24 = 1LL;
  }
  else
  {
    do
    {
      __asm { fmul    st, st(1) }
      --v37;
    }
    while ( v37 );
    __asm { fstp    st(1) }
    v29 = 0LL;
  }
  while ( 1 )
  {
LABEL_48:
    if ( v36 )
    {
      __asm
      {
        fld     st
        fstp    tbyte ptr [rsp+178h+var_178]
        fstp    tbyte ptr [rsp+178h+var_158]
      }
      __fprintf_chk(stderr, 1LL, "  suffix power=%d^%d = %Lf\n", v20, v24, v28);
      __asm
      {
        fld     [rsp+178h+var_F8]
        fld     tbyte ptr [rsp+178h+var_158]
        fmulp   st(1), st
        fld     st
        fstp    [rsp+178h+var_F8]
      }
      v66 = *(_QWORD *)&v107;
      if ( byte_610338 )
      {
        __asm
        {
          fld     st
          fstp    tbyte ptr [rsp+188h+var_178]
          fstp    [rsp+188h+var_188]
        }
        __fprintf_chk(stderr, 1LL, "  returning value: %Lf (%LG)\n", v65, v24, v66);
      }
      else
      {
        __asm { fstp    st }
      }
    }
    else
    {
      __asm
      {
        fld     [rsp+168h+var_F8]
        fmulp   st(1), st
        fstp    [rsp+168h+var_F8]
      }
    }
    if ( s1 && *s1 )
    {
      LODWORD(v23) = 5;
      if ( dword_6103A8 != 3 )
      {
        v38 = sub_407570(1LL);
        v39 = sub_407570(0LL);
        v40 = dcgettext(0LL, "invalid suffix in input %s: %s", 5);
        error(status, 0, v40, v39, v38);
      }
    }
    else if ( (_DWORD)v23 == 1 && byte_610348 )
    {
      v47 = sub_407590(v17);
      v48 = dcgettext(0LL, "large input value %s: possible precision loss", 5);
      error(0, 0, v48, v47);
    }
LABEL_55:
    __asm { fld     [rsp+168h+var_F8] }
    if ( qword_610270 != 1 || qword_610268 != 1 )
    {
      v140 = qword_610270;
      __asm { fild    [rsp+168h+var_158] }
      if ( qword_610270 < 0 )
        __asm { fadd    cs:flt_40C138 }
      __asm { fmulp   st(1), st }
      v141 = qword_610268;
      __asm { fild    [rsp+168h+var_158] }
      if ( qword_610268 < 0 )
        __asm { fadd    cs:flt_40C138 }
      __asm { fdivp   st(1), st }
    }
    if ( (unsigned int)v23 > 1 )
    {
      __asm { fstp    st }
LABEL_64:
      v8 = 0;
      fputs_unlocked(v6, stdout);
      return v8;
    }
    __asm
    {
      fld     cs:tbyte_40C150
      fxch    st(1)
    }
    if ( qword_610260 != -1 )
      v29 = qword_610260;
    __asm
    {
      fcomi   st, st(1)
      fstp    st(1)
    }
    if ( _CF )
      goto LABEL_300;
    __asm
    {
      fld     cs:tbyte_40C160
      fcomip  st, st(1)
    }
    if ( _CF )
    {
LABEL_300:
      v20 = qword_6103AC;
      if ( !(_DWORD)qword_6103AC && v29 > 0x12 )
      {
LABEL_156:
        if ( dword_6103A8 == 3 )
        {
          __asm { fstp    st }
        }
        else
        {
          v76 = status;
          __asm { fstp    tbyte ptr [rsp+168h+var_168] }
          if ( v29 )
          {
            v77 = dcgettext(0LL, "value/precision too large to be printed: '%Lg/%lu' (consider using --to)", 5);
            __asm
            {
              fld     tbyte ptr [rsp+168h+var_168]
              fstp    tbyte ptr [rsp+178h+var_178]
            }
            error(v76, 0, v77, v29);
          }
          else
          {
            v101 = dcgettext(0LL, "value too large to be printed: '%Lg' (consider using --to)", 5);
            __asm
            {
              fld     tbyte ptr [rsp+168h+var_168]
              fstp    tbyte ptr [rsp+178h+var_178]
            }
            error(v76, 0, v101);
          }
        }
        goto LABEL_64;
      }
    }
    else
    {
      __asm { fld     st }
      v52 = 0;
      __asm { fld     cs:flt_40C130 }
      while ( 1 )
      {
        __asm
        {
          fldz
          fld     st(2)
          fchs
          fxch    st(1)
          fcomip  st, st(3)
          fcmovbe st, st(2)
          fld     st(1)
          fxch    st(1)
          fcomip  st, st(1)
        }
        if ( _CF )
          break;
        __asm { fdivp   st(2), st }
        ++v52;
      }
      __asm
      {
        fstp    st
        fstp    st
        fstp    st
      }
      v20 = qword_6103AC;
      if ( !(_DWORD)qword_6103AC && v29 + v52 > 0x12 )
        goto LABEL_156;
      if ( v52 > 0x1A )
      {
        __asm { fstp    tbyte ptr [rsp+168h+var_168] }
        if ( dword_6103A8 != 3 )
        {
          v53 = dcgettext(0LL, "value too large to be printed: '%Lg' (cannot handle values > 999Y)", 5);
          __asm
          {
            fld     tbyte ptr [rsp+168h+var_168]
            fstp    tbyte ptr [rsp+178h+var_178]
          }
          error(status, 0, v53);
        }
        goto LABEL_64;
      }
    }
    v54 = dword_610278;
    LOBYTE(v182) = 37;
    v55 = (char *)&v182 + 1;
    v56 = dword_610398;
    if ( dword_610398 )
    {
      BYTE1(v182) = 39;
      v55 = (char *)&v182 + 2;
    }
    v57 = qword_610378;
    if ( qword_610378 )
    {
      __asm
      {
        fstp    tbyte ptr [rsp+168h+var_158]
        fld     tbyte ptr [rsp+168h+var_158]
      }
      v55 += (int)__snprintf_chk(v55, 62LL, 1LL, 63LL, "0%ld");
    }
    v58 = byte_610338;
    if ( byte_610338 )
    {
      __asm { fstp    tbyte ptr [rsp+168h+var_158] }
      fwrite("double_to_human:\n", 1uLL, 0x11uLL, stderr);
      v58 = byte_610338;
      __asm { fld     tbyte ptr [rsp+168h+var_158] }
    }
    if ( v20 )
      break;
    if ( (_DWORD)v29 )
    {
      v70 = v29 - 1;
      if ( (_DWORD)v29 == 1 )
      {
        __asm
        {
          fnstcw  [rsp+168h+var_11A]
          fld     cs:tbyte_40C170
        }
        v70 = v177;
        __asm
        {
          fld     st(1)
          fmul    cs:flt_40C130
        }
        BYTE1(v70) |= 0xCu;
        v175 = v70;
        __asm
        {
          fld     st
          fdiv    st, st(2)
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_158]
          fldcw   [rsp+168h+var_11A]
          fild    [rsp+168h+var_158]
          fmulp   st(2), st
          fsub    st, st(1)
        }
        if ( v54 > 4 )
        {
          __asm
          {
            fstp    st
            fstp    st
            fldz
          }
          goto LABEL_166;
        }
        __asm { fxch    st(1) }
      }
      else
      {
        __asm { fld     cs:flt_40C130 }
        v71 = v29 - 1;
        __asm { fld     st }
        do
        {
          __asm { fmul    st, st(1) }
          --v71;
        }
        while ( v71 );
        __asm
        {
          fnstcw  [rsp+168h+var_11A]
          fmul    st, st(2)
          fld     cs:tbyte_40C170
        }
        LOBYTE(v72) = v177;
        __asm { fld     st(1) }
        HIBYTE(v72) = HIBYTE(v177) | 0xC;
        __asm { fdiv    st, st(1) }
        v175 = v72;
        __asm
        {
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_158]
          fldcw   [rsp+168h+var_11A]
          fild    [rsp+168h+var_158]
          fmulp   st(1), st
          fsub    st(1), st
          fstp    st(2)
          fxch    st(1)
        }
      }
    }
    else
    {
      __asm
      {
        fnstcw  [rsp+168h+var_11A]
        fld     cs:tbyte_40C170
      }
      v70 = v177;
      __asm
      {
        fld     st(1)
        fdiv    st, st(1)
      }
      BYTE1(v70) |= 0xCu;
      v175 = v70;
      __asm
      {
        fldcw   [rsp+168h+var_11C]
        fistp   [rsp+168h+var_158]
        fldcw   [rsp+168h+var_11A]
        fild    [rsp+168h+var_158]
        fmulp   st(1), st
        fld     st(1)
        fsub    st, st(1)
      }
      if ( v54 > 4 )
      {
        __asm
        {
          fstp    st
          fstp    st
          fldz
        }
        goto LABEL_166;
      }
      __asm { fxch    st(1) }
    }
    switch ( v54 )
    {
      case 0u:
        __asm
        {
          fxch    st(1); jumptable 00000000004035CD case 0
          fld     st
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_168]
          fldcw   [rsp+168h+var_11A]
          fild    [rsp+168h+var_168]
          fxch    st(1)
          fcomip  st, st(1)
        }
        if ( _CF | _ZF )
          goto LABEL_161;
        __asm { fstp    st }
        goto LABEL_196;
      case 1u:
        __asm
        {
          fxch    st(1); jumptable 00000000004035CD case 1
          fchs
          fld     st
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_128]
          fldcw   [rsp+168h+var_11A]
        }
        goto LABEL_198;
      case 2u:
        __asm
        {
          fldz; jumptable 00000000004035CD case 2
          fcomip  st, st(2)
        }
        if ( _CF | _ZF )
        {
          __asm
          {
            fxch    st(1)
            fld     st
            fldcw   [rsp+168h+var_11C]
            fistp   [rsp+168h+var_168]
            fldcw   [rsp+168h+var_11A]
            fild    [rsp+168h+var_168]
            fxch    st(1)
            fcomip  st, st(1)
          }
          if ( !(_CF | _ZF) )
          {
            __asm { fstp    st }
LABEL_196:
            v128 = v127 + 1;
            __asm { fild    [rsp+168h+var_168] }
          }
        }
        else
        {
          __asm
          {
            fxch    st(1)
            fchs
            fld     st
            fldcw   [rsp+168h+var_11C]
            fistp   [rsp+168h+var_128]
            fldcw   [rsp+168h+var_11A]
          }
LABEL_198:
          v129 = v172;
          __asm
          {
            fild    [rsp+168h+var_168]
            fxch    st(1)
            fcomip  st, st(1)
            fstp    st
          }
          v130 = -(!(_CF | _ZF) + v172);
          __asm { fild    [rsp+168h+var_168] }
        }
LABEL_161:
        __asm { faddp   st(1), st }
        if ( (_DWORD)v29 )
        {
          __asm { fld     cs:flt_40C130 }
          v70 = v29 - 1;
          if ( (_DWORD)v29 == 1 )
          {
            __asm { fdivp   st(1), st }
          }
          else
          {
LABEL_163:
            __asm { fld     st }
            do
            {
              __asm { fmul    st, st(1) }
              --v70;
            }
            while ( v70 );
            __asm
            {
              fstp    st(1)
              fdivp   st(1), st
            }
          }
        }
        break;
      case 3u:
        __asm
        {
          fxch    st(1); jumptable 00000000004035CD case 3
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_168]
          fldcw   [rsp+168h+var_11A]
          fild    [rsp+168h+var_168]
        }
        goto LABEL_161;
      case 4u:
        __asm
        {
          fldz; jumptable 00000000004035CD case 4
          fcomip  st, st(2)
        }
        if ( _CF | _ZF )
        {
          __asm
          {
            fxch    st(1)
            fadd    cs:flt_40C13C
            fldcw   [rsp+168h+var_11C]
            fistp   [rsp+168h+var_168]
            fldcw   [rsp+168h+var_11A]
            fild    [rsp+168h+var_168]
          }
        }
        else
        {
          __asm
          {
            fxch    st(1)
            fsub    cs:flt_40C13C
            fldcw   [rsp+168h+var_11C]
            fistp   [rsp+168h+var_168]
            fldcw   [rsp+168h+var_11A]
            fild    [rsp+168h+var_168]
          }
        }
        goto LABEL_161;
      default:
        __asm
        {
          fstp    st; jumptable 00000000004035CD default case
          fstp    st
          fldz
          fxch    st(1)
        }
        goto LABEL_163;
    }
LABEL_166:
    if ( v58 )
    {
      __asm
      {
        fxch    st(1)
        fstp    tbyte ptr [rsp+168h+var_158]
      }
      v78 = "  no scaling, returning (grouped) value: %'.*Lf\n";
      if ( !v56 )
        v78 = "  no scaling, returning value: %.*Lf\n";
      __asm
      {
        fld     st
        fstp    tbyte ptr [rsp+178h+var_178]
        fstp    tbyte ptr [rsp+178h+var_168]
      }
      __fprintf_chk(stderr, 1LL, v78, (unsigned int)v29, v24, (unsigned int)v29);
      __asm
      {
        fld     tbyte ptr [rsp+168h+var_168]
        fld     tbyte ptr [rsp+168h+var_158]
      }
    }
    else
    {
      __asm { fxch    st(1) }
    }
    __asm { fstp    tbyte ptr [rsp+168h+var_158] }
    v23 = &src;
    strcpy(v55, ".*Lf");
    __asm
    {
      fld     st
      fstp    tbyte ptr [rsp+178h+var_178]
      fstp    tbyte ptr [rsp+178h+var_168]
    }
    v17 = (char *)*((_QWORD *)&v111 + 1);
    v6 = *(char **)&v111;
    __asm { fld     tbyte ptr [rsp+168h+var_168] }
    if ( (unsigned int)__snprintf_chk(&src, 128LL, 1LL, 128LL, &v182) <= 0x7F )
    {
      __asm
      {
        fstp    st
        fld     tbyte ptr [rsp+168h+var_158]
      }
      v79 = byte_610338;
      goto LABEL_173;
    }
    __asm { fstp    tbyte ptr [rsp+168h+var_168] }
    v102 = dcgettext(0LL, "failed to prepare value '%Lf' for printing", 5);
    __asm
    {
      fld     tbyte ptr [rsp+168h+var_168]
      fstp    tbyte ptr [rsp+178h+var_178]
    }
    error(1, 0, v102);
LABEL_289:
    __asm { fstp    st }
    v29 = 0LL;
    __asm { fld1 }
  }
  if ( v20 - 3 <= 1 )
  {
    v156 = 1024;
    v142 = 4652218415073722368LL;
  }
  else
  {
    v156 = 1000;
    v142 = 4652007308841189376LL;
  }
  __asm
  {
    fld     cs:tbyte_40C150
    fxch    st(1)
    fcomi   st, st(1)
    fstp    st(1)
  }
  if ( _CF )
    goto LABEL_301;
  __asm
  {
    fld     cs:tbyte_40C160
    fcomip  st, st(1)
  }
  if ( _CF )
  {
LABEL_301:
    __asm { fld     st }
    v59 = 0;
  }
  else
  {
    __asm { fild    dword ptr [rsp+168h+var_148] }
    v59 = 0;
    __asm { fld     st(1) }
    while ( 1 )
    {
      __asm
      {
        fldz
        fld     st(1)
        fchs
        fxch    st(1)
        fcomip  st, st(2)
        fcmovbe st, st(1)
        fcomip  st, st(2)
      }
      if ( _CF )
        break;
      __asm { fdiv    st, st(1) }
      ++v59;
    }
    __asm { fstp    st(1) }
  }
  if ( v58 )
  {
    __asm
    {
      fxch    st(1)
      fstp    [rsp+168h+var_138]
      fld     st
      fstp    tbyte ptr [rsp+178h+var_178]
      fstp    tbyte ptr [rsp+178h+var_148]
    }
    __fprintf_chk(stderr, 1LL, "  scaled value to %Lf * %0.f ^ %u\n", v59, v24, v57);
    v58 = byte_610338;
    __asm
    {
      fld     [rsp+168h+var_138]
      fld     tbyte ptr [rsp+168h+var_148]
    }
  }
  if ( qword_610260 == -1 )
  {
    __asm
    {
      fldz
      fld     st(1)
      fchs
      fxch    st(1)
      fcomip  st, st(2)
      fcmovbe st, st(1)
      fld     cs:flt_40C130
      fld     st
      fcomip  st, st(2)
      fstp    st(1)
    }
    if ( !(_CF | _ZF) )
      goto LABEL_273;
    __asm { fstp    st }
  }
  else
  {
    v60 = 3 * v59;
    if ( v60 > qword_610260 )
      LODWORD(v60) = qword_610260;
    v61 = v60;
    if ( (_DWORD)v60 )
    {
      v62 = v60 - 1;
      if ( v62 )
      {
        __asm { fld     cs:flt_40C130 }
        v63 = v62;
        __asm { fld     st }
        do
        {
          __asm { fmul    st, st(1) }
          --v63;
        }
        while ( v63 );
        __asm
        {
          fnstcw  [rsp+168h+var_11A]
          fmulp   st(2), st
          fld     cs:tbyte_40C170
        }
        LOBYTE(v64) = v176;
        __asm { fld     st(2) }
        HIBYTE(v64) = HIBYTE(v176) | 0xC;
        v174 = v64;
        __asm
        {
          fdiv    st, st(1)
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_148]
          fldcw   [rsp+168h+var_11A]
          fild    [rsp+168h+var_148]
          fmulp   st(1), st
          fsub    st(2), st
          fld     [rsp+168h+var_158]
        }
        switch ( v54 )
        {
          case 0u:
            __asm
            {
              fstp    st(2); jumptable 00000000004033ED case 0
              fxch    st(1)
              fxch    st(2)
            }
            goto LABEL_206;
          case 1u:
            __asm
            {
              fstp    st(2); jumptable 00000000004033ED case 1
              fxch    st(1)
              fxch    st(2)
            }
            goto LABEL_245;
          case 2u:
            __asm
            {
              fstp    st(2); jumptable 00000000004033ED case 2
              fxch    st(1)
            }
            goto LABEL_236;
          case 3u:
            __asm
            {
              fxch    st(3); jumptable 00000000004033ED case 3
              fldcw   [rsp+168h+var_11C]
              fistp   [rsp+168h+var_148]
              fldcw   [rsp+168h+var_11A]
              fild    [rsp+168h+var_148]
              faddp   st(1), st
              fxch    st(1)
            }
            goto LABEL_210;
          case 4u:
            __asm
            {
              fstp    st(2); jumptable 00000000004033ED case 4
              fxch    st(1)
            }
            goto LABEL_241;
          default:
            goto LABEL_293;
        }
      }
      __asm { fld     cs:flt_40C130 }
LABEL_273:
      __asm
      {
        fnstcw  [rsp+168h+var_11A]
        fmul    st(1), st
        fld     cs:tbyte_40C170
      }
      LOBYTE(v97) = v176;
      __asm { fld     st(2) }
      HIBYTE(v97) = HIBYTE(v176) | 0xC;
      v89 = __SETP__(HIBYTE(v176) | 0xC, 0);
      __asm { fdiv    st, st(1) }
      v174 = v97;
      __asm
      {
        fldcw   [rsp+168h+var_11C]
        fistp   [rsp+168h+var_148]
        fldcw   [rsp+168h+var_11A]
        fild    [rsp+168h+var_148]
        fmulp   st(1), st
        fsub    st(2), st
        fld     [rsp+168h+var_158]
      }
      switch ( v54 )
      {
        case 0u:
          __asm
          {
            fstp    st(2); jumptable 0000000000403EBD case 0
            fxch    st(1)
            fxch    st(2)
          }
          v61 = 1;
          goto LABEL_206;
        case 1u:
          __asm
          {
            fstp    st(2); jumptable 0000000000403EBD case 1
            fxch    st(1)
            fxch    st(2)
          }
          v61 = 1;
          goto LABEL_245;
        case 2u:
          __asm
          {
            fstp    st(2); jumptable 0000000000403EBD case 2
            fxch    st(1)
          }
          v61 = 1;
          goto LABEL_236;
        case 3u:
          __asm
          {
            fxch    st(3); jumptable 0000000000403EBD case 3
            fldcw   [rsp+168h+var_11C]
            fistp   [rsp+168h+var_148]
            fldcw   [rsp+168h+var_11A]
            fild    [rsp+168h+var_148]
            faddp   st(1), st
            fxch    st(1)
          }
          goto LABEL_249;
        case 4u:
          __asm
          {
            fstp    st(2); jumptable 0000000000403EBD case 4
            fxch    st(1)
          }
          v61 = 1;
          goto LABEL_241;
        default:
          __asm
          {
            fstp    st(3); jumptable 0000000000403EBD default case
            fstp    st
            fstp    st
          }
          goto LABEL_296;
      }
    }
  }
  __asm
  {
    fnstcw  [rsp+168h+var_11A]
    fld     cs:tbyte_40C170
  }
  LOBYTE(v93) = v176;
  __asm
  {
    fld     st(1)
    fdiv    st, st(1)
  }
  HIBYTE(v93) = HIBYTE(v176) | 0xC;
  v89 = __SETP__(HIBYTE(v176) | 0xC, 0);
  v174 = v93;
  __asm
  {
    fldcw   [rsp+168h+var_11C]
    fistp   [rsp+168h+var_148]
    fldcw   [rsp+168h+var_11A]
    fild    [rsp+168h+var_148]
    fmulp   st(1), st
    fsub    st(1), st
    fld     [rsp+168h+var_158]
  }
  switch ( v54 )
  {
    case 0u:
      __asm { fxch    st(2); jumptable 0000000000403D49 case 0 }
      v61 = 0;
      goto LABEL_206;
    case 1u:
      __asm { fxch    st(2); jumptable 0000000000403D49 case 1 }
      v61 = 0;
LABEL_245:
      __asm
      {
        fchs
        fld     st
        fldcw   [rsp+168h+var_11C]
        fistp   [rsp+168h+var_128]
        fldcw   [rsp+168h+var_11A]
      }
      goto LABEL_238;
    case 2u:
      v61 = 0;
LABEL_236:
      __asm
      {
        fldz
        fcomip  st, st(3)
      }
      if ( _CF | _ZF )
      {
        __asm { fxch    st(2) }
LABEL_206:
        __asm
        {
          fld     st
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_148]
          fldcw   [rsp+168h+var_11A]
          fild    [rsp+168h+var_148]
          fxch    st(1)
          fcomip  st, st(1)
        }
        if ( !(_CF | _ZF) )
        {
          __asm { fstp    st }
          v159 = v158 + 1;
          __asm { fild    [rsp+168h+var_148] }
        }
      }
      else
      {
        __asm
        {
          fxch    st(2)
          fchs
          fld     st
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_128]
          fldcw   [rsp+168h+var_11A]
        }
LABEL_238:
        v160 = v173;
        __asm
        {
          fild    [rsp+168h+var_148]
          fxch    st(1)
          fcomip  st, st(1)
          fstp    st
        }
        v161 = -(!(_CF | _ZF) + v173);
        __asm { fild    [rsp+168h+var_148] }
      }
LABEL_208:
      __asm { faddp   st(1), st }
      v89 = __SETP__(v61, 0);
      if ( !v61 )
        break;
      __asm { fld     cs:flt_40C130 }
      v89 = __SETP__(v61, 1);
      v62 = v61 - 1;
      if ( v61 != 1 )
        goto LABEL_210;
LABEL_249:
      __asm { fdivp   st(1), st }
      break;
    case 3u:
      __asm
      {
        fxch    st(2); jumptable 0000000000403D49 case 3
        fldcw   [rsp+168h+var_11C]
        fistp   [rsp+168h+var_148]
        fldcw   [rsp+168h+var_11A]
        fild    [rsp+168h+var_148]
        faddp   st(1), st
      }
      break;
    case 4u:
      v61 = 0;
LABEL_241:
      __asm
      {
        fldz
        fcomip  st, st(3)
      }
      if ( _CF | _ZF )
      {
        __asm
        {
          fxch    st(2)
          fadd    cs:flt_40C13C
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_148]
          fldcw   [rsp+168h+var_11A]
          fild    [rsp+168h+var_148]
        }
      }
      else
      {
        __asm
        {
          fxch    st(2)
          fsub    cs:flt_40C13C
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_148]
          fldcw   [rsp+168h+var_11A]
          fild    [rsp+168h+var_148]
        }
      }
      goto LABEL_208;
    default:
      __asm
      {
        fstp    st(2); jumptable 0000000000403D49 default case
        fstp    st
      }
LABEL_296:
      __asm { fldz }
      goto LABEL_214;
  }
  while ( 2 )
  {
    __asm
    {
      fldz
      fcomip  st, st(1)
    }
    if ( _CF | _ZF )
    {
LABEL_214:
      __asm { fcomi   st, st(1) }
      if ( _CF )
      {
        __asm { fstp    st(1) }
      }
      else
      {
LABEL_217:
        v89 = __SETP__(++v59, 0);
        __asm { fdivrp  st(1), st }
      }
      __asm
      {
        fldz
        fxch    st(1)
        fucomi  st, st(1)
        fstp    st(1)
      }
      if ( !v89 && _ZF )
      {
        v91 = 0LL;
        goto LABEL_222;
      }
      __asm
      {
        fldz
        fcomip  st, st(1)
      }
      if ( _CF | _ZF )
      {
        __asm { fld     st }
        goto LABEL_260;
      }
      __asm
      {
        fld     st
        fchs
      }
    }
    else
    {
      __asm
      {
        fld     st
        fchs
        fcomi   st, st(2)
      }
      if ( !_CF )
      {
        __asm { fstp    st }
        goto LABEL_217;
      }
      __asm
      {
        fstp    st(2)
        fxch    st(1)
      }
    }
    __asm { fxch    st(1) }
LABEL_260:
    __asm
    {
      fld     cs:flt_40C130
      fcomip  st, st(2)
      fstp    st(1)
    }
    v91 = (v59 != 0) & (unsigned __int8)!(_CF | _ZF);
LABEL_222:
    if ( v58 )
    {
      __asm
      {
        fxch    st(1)
        fstp    tbyte ptr [rsp+168h+var_148]
        fld     st
        fstp    tbyte ptr [rsp+178h+var_178]
        fstp    tbyte ptr [rsp+178h+var_168]
      }
      __fprintf_chk(stderr, 1LL, "  after rounding, value=%Lf * %0.f ^ %u\n", v59, v24, v91);
      __asm
      {
        fld     tbyte ptr [rsp+168h+var_148]
        fld     tbyte ptr [rsp+168h+var_168]
      }
    }
    strcpy(v55, ".*Lf%s");
    if ( v59 > 8 )
      __asm { fxch    st(1) }
    else
      __asm { fxch    st(1) }
    __asm
    {
      fstp    tbyte ptr [rsp+168h+var_158]
      fld     st
      fstp    [rsp+188h+var_188]
      fstp    tbyte ptr [rsp+188h+var_168]
    }
    v92 = __snprintf_chk(&src, 127LL, 1LL, 128LL, &v182);
    __asm { fld     tbyte ptr [rsp+188h+var_158] }
    if ( v92 > 0x7E )
    {
      __asm { fstp    st }
      v103 = dcgettext(0LL, "failed to prepare value '%Lf' for printing", 5);
      __asm
      {
        fld     tbyte ptr [rsp+168h+var_168]
        fstp    tbyte ptr [rsp+178h+var_178]
      }
      error(1, 0, v103);
LABEL_293:
      __asm
      {
        fstp    st(3); jumptable 00000000004033ED default case
        fstp    st
        fxch    st(1)
        fldz
        fxch    st(1)
        fxch    st(2)
      }
LABEL_210:
      __asm { fld     st }
      do
      {
        __asm { fmul    st, st(1) }
        v89 = __SETP__(--v62, 0);
      }
      while ( v62 );
      __asm
      {
        fstp    st(1)
        fdivp   st(1), st
      }
      continue;
    }
    break;
  }
  if ( v59 && v20 == 4 )
  {
    __asm { fstp    tbyte ptr [rsp+168h+var_168] }
    __strncat_chk(&src, "i", 127LL - (int)v92, 128LL);
    __asm { fld     tbyte ptr [rsp+168h+var_168] }
  }
  v79 = byte_610338;
  if ( byte_610338 )
  {
    __asm { fstp    tbyte ptr [rsp+168h+var_168] }
    v98 = sub_407590(&src);
    __fprintf_chk(stderr, 1LL, "  returning value: %s\n", v98, v99, v100);
    v79 = byte_610338;
    __asm { fld     tbyte ptr [rsp+168h+var_168] }
LABEL_173:
    v80 = ::s1;
    if ( ::s1 )
      goto LABEL_174;
    goto LABEL_181;
  }
  v80 = ::s1;
  if ( !::s1 )
  {
    __asm { fstp    st }
    goto LABEL_184;
  }
LABEL_174:
  v81 = &src;
  do
  {
    v82 = *(_DWORD *)v81;
    v81 = (__int128 *)((char *)v81 + 4);
    v83 = ~v82 & (v82 - 16843009) & 0x80808080;
  }
  while ( !v83 );
  __asm { fstp    tbyte ptr [rsp+168h+var_168] }
  if ( !(~v82 & (v82 - 16843009) & 0x8080) )
    LOBYTE(v83) = (~v82 & (v82 - 16843009) & 0x80808080) >> 16;
  if ( !(~v82 & (v82 - 16843009) & 0x8080) )
    v81 = (__int128 *)((char *)v81 + 2);
  __strncat_chk(&src, v80, (char *)&src - ((char *)v81 - __CFADD__((_BYTE)v83, (_BYTE)v83) - 3) + 127, 128LL);
  __asm { fld     tbyte ptr [rsp+168h+var_168] }
LABEL_181:
  if ( v79 )
  {
    __asm { fstp    tbyte ptr [rsp+168h+var_168] }
    v84 = sub_407590(&src);
    __asm
    {
      fld     tbyte ptr [rsp+168h+var_168]
      fstp    tbyte ptr [rsp+178h+var_178]
    }
    __fprintf_chk(stderr, 1LL, "formatting output:\n  value: %Lf\n  humanized: %s\n", v84, v85, v86);
  }
  else
  {
    __asm { fstp    st }
  }
LABEL_184:
  v87 = strlen((const char *)&src);
  if ( qword_610380 && qword_610380 > v87 )
  {
    *(_QWORD *)&v182 = qword_610380;
    sub_405530(&src, dest, qword_610388, &v182, (unsigned int)dword_610258, 2LL);
    if ( byte_610338 )
    {
      v94 = sub_407590(dest);
      __fprintf_chk(stderr, 1LL, "  After padding: %s\n", v94, v95, v96);
    }
  }
  else
  {
    if ( v87 + 1 >= qword_610388 )
      sub_402BD0(v87 + 1);
    strcpy(dest, (const char *)&src);
  }
  v88 = stdout;
  if ( qword_610368 )
  {
    fputs_unlocked(qword_610368, stdout);
    v88 = stdout;
  }
  v8 = 1;
  fputs_unlocked(dest, v88);
  if ( qword_610360 )
    fputs_unlocked(qword_610360, stdout);
  return v8;
}

__int64 __fastcall sub_4041A0(char *s, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r15
  unsigned __int64 v7; // r14
  unsigned int v8; // er12
  int v9; // eax
  unsigned __int8 v10; // bp
  char *v11; // rbx
  char v12; // dl
  char *v13; // rax
  const unsigned __int16 *v15; // rax
  unsigned __int8 v16; // si
  bool v17; // zf
  char v18; // [rsp+Ch] [rbp-3Ch]

  v6 = s;
  v7 = 0LL;
  v8 = 1;
  v9 = dword_610254;
  v18 = a2;
  while ( 1 )
  {
    ++v7;
    v10 = *v6;
    if ( v9 != 128 )
      break;
    if ( !v10 )
      goto LABEL_8;
    v11 = v6;
    v15 = *__ctype_b_loc();
    while ( 1 )
    {
      a3 = v10;
      if ( !(v15[v10] & 1) && v10 != 10 )
        break;
      v10 = *++v11;
      if ( !*v11 )
        goto LABEL_8;
    }
    a3 = (unsigned __int8)*v11;
    if ( !(_BYTE)a3 )
      goto LABEL_8;
    while ( !(v15[(unsigned __int8)a3] & 1) && (_BYTE)a3 != 10 )
    {
      a3 = (unsigned __int8)*++v11;
      if ( !(_BYTE)a3 )
        goto LABEL_8;
    }
    v10 = *v11;
LABEL_22:
    if ( !v10 )
      goto LABEL_8;
LABEL_23:
    *v11 = 0;
    v16 = 32;
    v17 = (unsigned __int8)sub_402C00(v6, v7, a3, a4, a5, a6) == 0;
    v9 = dword_610254;
    if ( v17 )
      v8 = 0;
    a3 = (__int64)stdout->_IO_write_ptr;
    if ( dword_610254 != 128 )
      v16 = dword_610254;
    if ( (char *)a3 >= stdout->_IO_write_end )
    {
      __overflow(stdout, v16);
      v9 = dword_610254;
    }
    else
    {
      a5 = a3 + 1;
      stdout->_IO_write_ptr = (char *)(a3 + 1);
      *(_BYTE *)a3 = v16;
    }
    v6 = v11 + 1;
  }
  a3 = (unsigned int)(char)v10;
  if ( (_DWORD)a3 == v9 )
  {
    v11 = v6;
    goto LABEL_22;
  }
  if ( v10 )
  {
    v11 = v6;
    while ( 1 )
    {
      a3 = (unsigned int)*++v11;
      if ( !*v11 )
        break;
      if ( (_DWORD)a3 == v9 )
        goto LABEL_23;
    }
  }
LABEL_8:
  if ( !(unsigned __int8)sub_402C00(v6, v7, a3, a4, a5, a6) )
    v8 = 0;
  if ( v18 )
  {
    v12 = byte_610250;
    v13 = stdout->_IO_write_ptr;
    if ( v13 >= stdout->_IO_write_end )
    {
      __overflow(stdout, (unsigned __int8)byte_610250);
    }
    else
    {
      stdout->_IO_write_ptr = v13 + 1;
      *v13 = v12;
    }
  }
  return v8;
}

void __fastcall __noreturn sub_404360(int status)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
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
  FILE *v58; // rbx
  char *v59; // rax
  __int64 v60; // rbx
  char *v61; // rax
  __int64 v62; // rbx
  char *v63; // rax
  const char **v64; // rax
  const char *v65; // rbx
  char *v66; // rax
  char *v67; // rax
  char *v68; // rax
  char *v69; // rax
  char *v70; // rax
  char *v71; // rax
  char *v72; // rax
  char *v73; // rax
  const char *v74; // [rsp+0h] [rbp-88h]
  const char *v75; // [rsp+8h] [rbp-80h]
  const char *v76; // [rsp+10h] [rbp-78h]
  const char *v77; // [rsp+18h] [rbp-70h]
  const char *v78; // [rsp+20h] [rbp-68h]
  const char *v79; // [rsp+28h] [rbp-60h]
  const char *v80; // [rsp+30h] [rbp-58h]
  const char *v81; // [rsp+38h] [rbp-50h]
  const char *v82; // [rsp+40h] [rbp-48h]
  const char *v83; // [rsp+48h] [rbp-40h]
  const char *v84; // [rsp+50h] [rbp-38h]
  const char *v85; // [rsp+58h] [rbp-30h]
  __int64 v86; // [rsp+60h] [rbp-28h]
  __int64 v87; // [rsp+68h] [rbp-20h]

  v1 = qword_6103D8;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1, v3, v4);
    goto LABEL_3;
  }
  v5 = dcgettext(0LL, "Usage: %s [OPTION]... [NUMBER]...\n", 5);
  __printf_chk(1LL, v5, v1);
  v6 = stdout;
  v7 = dcgettext(0LL, "Reformat NUMBER(s), or the numbers from standard input if none are specified.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(0LL, "      --debug          print warnings about invalid input\n", 5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(0LL, "  -d, --delimiter=X    use X instead of whitespace for field delimiter\n", 5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "      --field=FIELDS   replace the numbers in these input fields (default=1)\n"
          "                         see FIELDS below\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "      --format=FORMAT  use printf style floating-point FORMAT;\n"
          "                         see FORMAT below for details\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(
          0LL,
          "      --from=UNIT      auto-scale input numbers to UNITs; default is 'none';\n"
          "                         see UNIT below\n",
          5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(0LL, "      --from-unit=N    specify the input unit size (instead of the default 1)\n", 5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(
          0LL,
          "      --grouping       use locale-defined grouping of digits, e.g. 1,000,000\n"
          "                         (which means it has no effect in the C/POSIX locale)\n",
          5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(
          0LL,
          "      --header[=N]     print (without converting) the first N header lines;\n"
          "                         N defaults to 1 if not specified\n",
          5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "      --invalid=MODE   failure mode for invalid numbers: MODE can be:\n"
          "                         abort (default), fail, warn, ignore\n",
          5);
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(
          0LL,
          "      --padding=N      pad the output to N characters; positive N will\n"
          "                         right-align; negative N will left-align;\n"
          "                         padding is ignored if the output is wider than N;\n"
          "                         the default is to automatically pad if a whitespace\n"
          "                         is found\n",
          5);
  fputs_unlocked(v29, v28);
  v30 = stdout;
  v31 = dcgettext(
          0LL,
          "      --round=METHOD   use METHOD for rounding when scaling; METHOD can be:\n"
          "                         up, down, from-zero (default), towards-zero, nearest\n",
          5);
  fputs_unlocked(v31, v30);
  v32 = stdout;
  v33 = dcgettext(
          0LL,
          "      --suffix=SUFFIX  add SUFFIX to output numbers, and accept optional\n"
          "                         SUFFIX in input numbers\n",
          5);
  fputs_unlocked(v33, v32);
  v34 = stdout;
  v35 = dcgettext(0LL, "      --to=UNIT        auto-scale output numbers to UNITs; see UNIT below\n", 5);
  fputs_unlocked(v35, v34);
  v36 = stdout;
  v37 = dcgettext(0LL, "      --to-unit=N      the output unit size (instead of the default 1)\n", 5);
  fputs_unlocked(v37, v36);
  v38 = stdout;
  v39 = dcgettext(0LL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5);
  fputs_unlocked(v39, v38);
  v40 = stdout;
  v41 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v41, v40);
  v42 = stdout;
  v43 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v43, v42);
  v44 = stdout;
  v45 = dcgettext(0LL, "\nUNIT options:\n", 5);
  fputs_unlocked(v45, v44);
  v46 = stdout;
  v47 = dcgettext(0LL, "  none       no auto-scaling is done; suffixes will trigger an error\n", 5);
  fputs_unlocked(v47, v46);
  v48 = stdout;
  v49 = dcgettext(
          0LL,
          "  auto       accept optional single/two letter suffix:\n"
          "               1K = 1000,\n"
          "               1Ki = 1024,\n"
          "               1M = 1000000,\n"
          "               1Mi = 1048576,\n",
          5);
  fputs_unlocked(v49, v48);
  v50 = stdout;
  v51 = dcgettext(
          0LL,
          "  si         accept optional single letter suffix:\n"
          "               1K = 1000,\n"
          "               1M = 1000000,\n"
          "               ...\n",
          5);
  fputs_unlocked(v51, v50);
  v52 = stdout;
  v53 = dcgettext(
          0LL,
          "  iec        accept optional single letter suffix:\n"
          "               1K = 1024,\n"
          "               1M = 1048576,\n"
          "               ...\n",
          5);
  fputs_unlocked(v53, v52);
  v54 = stdout;
  v55 = dcgettext(
          0LL,
          "  iec-i      accept optional two-letter suffix:\n"
          "               1Ki = 1024,\n"
          "               1Mi = 1048576,\n"
          "               ...\n",
          5);
  fputs_unlocked(v55, v54);
  v56 = stdout;
  v57 = dcgettext(
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
  fputs_unlocked(v57, v56);
  v58 = stdout;
  v59 = dcgettext(
          0LL,
          "\n"
          "FORMAT must be suitable for printing one floating-point argument '%f'.\n"
          "Optional quote (%'f) will enable --grouping (if supported by current locale).\n"
          "Optional width value (%10f) will pad output. Optional zero (%010f) width\n"
          "will zero pad the number. Optional negative values (%-10f) will left align.\n"
          "Optional precision (%.1f) will override the input determined precision.\n",
          5);
  fputs_unlocked(v59, v58);
  v60 = qword_6103D8;
  v61 = dcgettext(
          0LL,
          "\n"
          "Exit status is 0 if all input numbers were successfully converted.\n"
          "By default, %s will stop at the first conversion error with exit status 2.\n"
          "With --invalid='fail' a warning is printed for each conversion error\n"
          "and the exit status is 2.  With --invalid='warn' each conversion error is\n"
          "diagnosed, but the exit status is 0.  With --invalid='ignore' conversion\n"
          "errors are not diagnosed and the exit status is 0.\n",
          5);
  __printf_chk(1LL, v61, v60);
  v62 = qword_6103D8;
  v63 = dcgettext(
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
  __printf_chk(1LL, v63, v62);
  v74 = "[";
  v75 = "test invocation";
  v76 = "coreutils";
  v77 = "Multi-call invocation";
  v78 = "sha224sum";
  v79 = "sha2 utilities";
  v80 = "sha256sum";
  v81 = "sha2 utilities";
  v82 = "sha384sum";
  v83 = "sha2 utilities";
  v84 = "sha512sum";
  v85 = "sha2 utilities";
  v86 = 0LL;
  v87 = 0LL;
  v64 = &v74;
  do
    v64 += 2;
  while ( *v64 && strcmp("numfmt", *v64) );
  v65 = v64[1];
  if ( v65 )
  {
    v66 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v66, &unk_40A199);
    v67 = setlocale(5, 0LL);
    if ( !v67 || !strncmp(v67, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v70 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v70, &unk_40A199);
    v71 = setlocale(5, 0LL);
    if ( !v71 || !strncmp(v71, "en_", 3uLL) )
    {
      v65 = "numfmt";
      v72 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v72, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v65 = "numfmt";
  }
  v73 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v73, "numfmt");
LABEL_10:
  v68 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v68, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v69 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v69, v65);
LABEL_3:
  exit(status);
}

__int64 __fastcall compar(const void *a1, const void *a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( *(_DWORD *)a1 >= *(_DWORD *)a2 )
    result = *(_DWORD *)a1 > *(_DWORD *)a2;
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
      if ( !(qword_6103C0 & 0x800000000000000LL) && (unsigned __int64)qword_6103C0 >> 60 == 0 )
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

char *__fastcall sub_404B00(const char *a1, char a2)
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
  char *v17; // rax
  char *result; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // rbp
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  const char *v24; // rsi
  char *v25; // rax
  char *v26; // rbx
  size_t v27; // rax
  void *v28; // rbx
  __int64 v29; // rbp
  char *v30; // rax
  __int64 v31; // rbx
  char *v32; // rax
  unsigned __int64 v33; // [rsp+8h] [rbp-50h]

  v2 = (char *)a1;
  if ( a2 & 1 && !strcmp(a1, "-") )
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
  v33 = 1LL;
  while ( 1 )
  {
    v8 = *v2;
    if ( *v2 == 45 )
    {
      if ( !v5 )
      {
        v6 = v4 & (v3 == 0);
        if ( !((unsigned __int8)v4 & (v3 == 0)) )
        {
          if ( v4 )
          {
            v33 = v3;
            v5 = v4;
            v3 = 0LL;
          }
          else
          {
            v6 = 0;
            v3 = 0LL;
            v5 = 1;
            v33 = 1LL;
          }
          goto LABEL_16;
        }
        if ( a2 & 4 )
        {
          v25 = dcgettext(0LL, "byte/character positions are numbered from 1", 5);
          goto LABEL_64;
        }
LABEL_75:
        v25 = dcgettext(0LL, "fields are numbered from 1", 5);
        goto LABEL_64;
      }
      if ( a2 & 4 )
        v25 = dcgettext(0LL, "invalid byte or character range", 5);
      else
        v25 = dcgettext(0LL, "invalid field range", 5);
LABEL_64:
      error(0, 0, v25);
      sub_404360(1);
    }
    if ( v8 == 44 || (*__ctype_b_loc())[(unsigned __int8)v8] & 1 || !v8 )
      break;
    if ( (unsigned int)(v8 - 48) > 9 )
    {
      v31 = sub_407590(v2);
      if ( a2 & 4 )
        v32 = dcgettext(0LL, "invalid byte/character position %s", 5);
      else
        v32 = dcgettext(0LL, "invalid field value %s", 5);
      error(0, 0, v32, v31);
      sub_404360(1);
    }
    if ( !v6 || !qword_6103B8 )
      qword_6103B8 = v2;
    if ( !v5 )
      v4 = 1;
    if ( v5 )
      v7 = v5;
    if ( v3 > 0x1999999999999999LL || (v19 = v8 - 48 + 10 * v3, v19 < v3) || v19 == -1LL )
    {
      v26 = qword_6103B8;
      v27 = strspn(qword_6103B8, "0123456789");
      v28 = (void *)sub_407DE0(v26, v27);
      v29 = sub_407590(v28);
      if ( a2 & 4 )
        v30 = dcgettext(0LL, "byte/character offset %s is too large", 5);
      else
        v30 = dcgettext(0LL, "field number %s is too large", 5);
      error(0, 0, v30, v29);
      free(v28);
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
      if ( !(a2 & 1) )
      {
        v24 = "invalid range with no endpoint: -";
        goto LABEL_63;
      }
      v33 = 1LL;
LABEL_13:
      sub_404A30(v33, -1LL);
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
    if ( v33 > v3 )
    {
      v24 = "invalid decreasing range";
      goto LABEL_63;
    }
    sub_404A30(v33, v3);
    goto LABEL_14;
  }
  if ( !v3 )
  {
    if ( a2 & 4 )
    {
      v25 = dcgettext(0LL, "byte/character positions are numbered from 1", 5);
      goto LABEL_64;
    }
    goto LABEL_75;
  }
  sub_404A30(v3, v3);
  if ( *v2 )
    goto LABEL_15;
LABEL_24:
  if ( !nmemb )
  {
    if ( a2 & 4 )
    {
      v25 = dcgettext(0LL, "missing list of byte/character positions", 5);
    }
    else
    {
      v24 = "missing list of fields";
LABEL_63:
      v25 = dcgettext(0LL, v24, 5);
    }
    goto LABEL_64;
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
  if ( a2 & 2 )
  {
    ptr = 0LL;
    v20 = *v11;
    nmemb = 0LL;
    qword_6103C0 = 0LL;
    if ( v20 > 1 )
      sub_404A30(1LL, v20 - 1);
    v21 = v11 + 2;
    if ( v10 > 1 )
    {
      do
      {
        v22 = *(v21 - 1) + 1;
        if ( v22 != *v21 )
          sub_404A30(v22, *v21 - 1);
        v21 += 2;
      }
      while ( &v11[2 * v10] != v21 );
    }
    v23 = v11[2 * v10 - 1];
    if ( v23 != -1LL )
      sub_404A30(v23 + 1, -1LL);
    free(v11);
    v10 = nmemb;
    v11 = (unsigned __int64 *)ptr;
  }
  nmemb = v10 + 1;
  v17 = (char *)sub_407BB0(v11);
  ptr = v17;
  result = &v17[16 * nmemb - 16];
  *((_QWORD *)result + 1) = -1LL;
  *(_QWORD *)result = -1LL;
  return result;
}

void sub_4050A0()
{
  nmemb = 0LL;
  qword_6103C0 = 0LL;
  free(ptr);
  ptr = 0LL;
}

void __noreturn sub_4050E0()
{
  sub_404360(1);
}

__int64 __fastcall sub_4050F0(const char *a1, const char **a2, char *a3, size_t a4)
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
  size_t v4; // r13
  char *v5; // rbp
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rax

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
      v11 = sub_407590(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11, v12, v13);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v14 = sub_407590(i);
    __fprintf_chk(stderr, 1LL, ", %s", v14, v15, v16);
  }
LABEL_7:
  v17 = stderr->_IO_write_ptr;
  if ( v17 >= stderr->_IO_write_end )
  {
    LODWORD(v17) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = v17 + 1;
    *v17 = 10;
  }
  return (int)v17;
}

__int64 __fastcall sub_4053B0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
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
  result = sub_4050F0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_405210(a1, (__int64)a2, result);
    sub_405290(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_405420(void *s1, __int64 *a2, char *a3, size_t a4)
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

__int64 sub_405490()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

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
        v5 = sub_4073E0();
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
  size_t *v6; // r13
  char v7; // bp
  _BYTE *v8; // rbx
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
  __int64 v29; // rdx
  char *v30; // rax
  wchar_t *v31; // r14
  wchar_t v32; // edi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  wchar_t *ptr; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  int v37; // [rsp+14h] [rbp-54h]
  void *src; // [rsp+18h] [rbp-50h]
  void *srca; // [rsp+18h] [rbp-50h]
  __int64 size; // [rsp+20h] [rbp-48h]
  char sizea; // [rsp+20h] [rbp-48h]
  __int64 sizeb; // [rsp+20h] [rbp-48h]
  _DWORD *v43; // [rsp+28h] [rbp-40h]

  v6 = a4;
  v7 = a6;
  v8 = a2;
  src = (void *)a1;
  v36 = a3;
  v37 = a5;
  v9 = strlen(a1);
  v10 = v9;
  if ( v7 & 2 || (v25 = v9, __ctype_get_mb_cur_max() <= 1) )
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
    if ( !(v7 & 1) )
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
    if ( !(v7 & 1) )
      goto LABEL_36;
LABEL_3:
    v13 = *v6;
    if ( *v6 < v11 )
    {
      v10 = *v6;
      v14 = 0LL;
      goto LABEL_5;
    }
LABEL_30:
    if ( v11 < v13 )
    {
      v15 = v37;
      v14 = v13 - v11;
      *v6 = v11;
      if ( v37 )
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
      if ( v7 & 4 )
      {
        v17 = v10;
        v14 = 0LL;
      }
      if ( v7 & 8 )
        v16 = 0LL;
      if ( v36 )
      {
        v18 = (unsigned __int64)&v8[v36 - 1];
        v19 = v8;
        if ( (unsigned __int64)v8 < v18 && v14 )
        {
          do
            *(++v19 - 1) = 32;
          while ( v14 + v8 - v19 && v18 > (unsigned __int64)v19 );
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
            *(++v22 - 1) = 32;
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
    v15 = v37;
    *v6 = v13;
    if ( v37 )
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
  v29 = (__int64)ptr;
  if ( *ptr )
  {
    sizea = 0;
    do
    {
      v43 = (_DWORD *)v29;
      if ( !iswprint(v28) )
      {
        *v43 = 65533;
        sizea = 1;
      }
      v29 = (__int64)(v43 + 1);
      v28 = v43[1];
    }
    while ( v43[1] );
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
  v13 = *v6;
  if ( *v6 >= v11 )
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
    srca = (void *)*v6;
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
        ++v31;
        v32 = *v31;
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
  if ( v7 & 1 )
    goto LABEL_3;
  v23 = -1LL;
LABEL_27:
  free(ptr);
LABEL_28:
  free(v12);
  return v23;
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
  char *v6; // rbx

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
        v2 = (char *)&unk_40C3CE;
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
      v2 = (char *)&unk_40C3D2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_405B10(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_405B10((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_405B10((__int64)v9, v79, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
          return sub_405B10((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_409760((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_405B10((__int64)v9, v10, s);
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
      return sub_405B10((__int64)v9, v10, s);
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
        a8 = sub_405A10("`", v11);
        v47 = sub_405A10("'", v11);
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

unsigned __int64 __fastcall sub_405B10(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_405B10((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_405B10((__int64)v9, v79, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
          return sub_405B10((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_409760((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_405B10((__int64)v9, v10, s);
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
      return sub_405B10((__int64)v9, v10, s);
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
        a8 = sub_405A10("`", v11);
        v47 = sub_405A10("'", v11);
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

_BYTE *__fastcall sub_406D40(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6102D8;
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
      v7 = (__int128 *)sub_407BB0(0LL);
      off_6102D8 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      off_6102D8 = (__int128 *)sub_407BB0(off_6102D8);
      v7 = off_6102D8;
    }
    memset(&v7[dword_6102F0], 0, 16LL * (a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v9 = (unsigned __int64 *)&v7[a1];
  v10 = (_BYTE *)v9[1];
  v20 = *(_DWORD *)(v5 + 4) | 1;
  v17 = *v9;
  v11 = sub_405B10(v10, *v9, a2, v4, *(_DWORD *)v5, v20, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v14 = *(_DWORD *)v5;
    v9[1] = (unsigned __int64)v13;
    v10 = v13;
    sub_405B10(v13, v12, v16, v4, v14, v20, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v19;
  return v10;
}

_BYTE *__fastcall sub_406D40(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6102D8;
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
      v7 = (__int128 *)sub_407BB0(0LL);
      off_6102D8 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      off_6102D8 = (__int128 *)sub_407BB0(off_6102D8);
      v7 = off_6102D8;
    }
    memset(&v7[dword_6102F0], 0, 16LL * (a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v9 = (unsigned __int64 *)&v7[a1];
  v10 = (_BYTE *)v9[1];
  v20 = *(_DWORD *)(v5 + 4) | 1;
  v17 = *v9;
  v11 = sub_405B10(v10, *v9, a2, v4, *(_DWORD *)v5, v20, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v14 = *(_DWORD *)v5;
    v9[1] = (unsigned __int64)v13;
    v10 = v13;
    sub_405B10(v13, v12, v16, v4, v14, v20, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v19;
  return v10;
}

_BYTE *__fastcall sub_407260(int a1, int a2, char *a3)
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
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407260(int a1, int a2, char *a3)
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
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4072D0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_406D40(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_4072D0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_406D40(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_407360(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_610510;
  v7 = _mm_load_si128((const __m128i *)&xmmword_6104E0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6104F0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_610500);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_406D40(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_4073E0(char *a1)
{
  return sub_407360(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407410(int a1, int a2, char *a3)
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
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407410(int a1, int a2, char *a3)
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
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407480(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_6104E0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_6104F0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_610500);
  v9 = qword_610510;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_406D40(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_407570(int a1, char *a2)
{
  return sub_406D40(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

_BYTE *__fastcall sub_407590(char *a1)
{
  return sub_406D40(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

__int64 __fastcall sub_4075B0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  __int64 v9; // r9
  char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  char *v14; // rax
  __int64 result; // rax
  const char *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // rbx
  char *v24; // rax
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rbx
  char *v29; // rax
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rbx
  char *v34; // rax
  __int64 v35; // r13
  __int64 v36; // rbx
  char *v37; // rax
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // [rsp+0h] [rbp-58h]
  __int64 v42; // [rsp+0h] [rbp-58h]
  __int64 v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+8h] [rbp-50h]

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4, a6);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL, v9);
  v10 = dcgettext(
          0LL,
          "\n"
          "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
          "This is free software: you are free to change and redistribute it.\n"
          "There is NO WARRANTY, to the extent permitted by law.\n"
          "\n",
          5);
  fputs_unlocked(v10, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 1LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18, v20, v21);
    case 2LL:
      v22 = v7[1];
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23, v22, v25);
    case 3LL:
      v26 = v7[2];
      v27 = v7[1];
      v28 = *v7;
      v29 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v29, v28, v27, v26);
    case 4LL:
      v30 = v7[3];
      v31 = v7[2];
      v32 = v7[1];
      v33 = *v7;
      v34 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v30 = v7[3];
      v31 = v7[2];
      v32 = v7[1];
      v33 = *v7;
      v34 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v34, v33, v32, v31);
      return v30;
    case 6LL:
      v42 = v7[1];
      v35 = v7[2];
      v36 = *v7;
      v37 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      v38 = v35;
      return __fprintf_chk(stream, 1LL, v37, v36, v42, v38);
    case 7LL:
      v39 = v7[1];
      v44 = v7[2];
      v36 = *v7;
      v42 = v39;
      v37 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      v38 = v44;
      return __fprintf_chk(stream, 1LL, v37, v36, v42, v38);
    case 8LL:
      v11 = v7[2];
      v12 = v7[1];
      v13 = *v7;
      v41 = v11;
      v43 = v12;
      v14 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v14, v13, v43, v41);
    case 9LL:
      v16 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v17 = v7[1];
      v41 = v7[2];
      v13 = *v7;
      v43 = v17;
      goto LABEL_8;
    default:
      v16 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v40 = v7[1];
      v41 = v7[2];
      v13 = *v7;
      v43 = v40;
LABEL_8:
      v14 = dcgettext(0LL, v16, 5);
      return __fprintf_chk(stream, 1LL, v14, v13, v43, v41);
  }
}

__int64 __fastcall sub_4075B0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  __int64 v9; // r9
  char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  char *v14; // rax
  __int64 result; // rax
  const char *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // rbx
  char *v24; // rax
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rbx
  char *v29; // rax
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rbx
  char *v34; // rax
  __int64 v35; // r13
  __int64 v36; // rbx
  char *v37; // rax
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // [rsp+0h] [rbp-58h]
  __int64 v42; // [rsp+0h] [rbp-58h]
  __int64 v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+8h] [rbp-50h]

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4, a6);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL, v9);
  v10 = dcgettext(
          0LL,
          "\n"
          "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
          "This is free software: you are free to change and redistribute it.\n"
          "There is NO WARRANTY, to the extent permitted by law.\n"
          "\n",
          5);
  fputs_unlocked(v10, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 1LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18, v20, v21);
    case 2LL:
      v22 = v7[1];
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23, v22, v25);
    case 3LL:
      v26 = v7[2];
      v27 = v7[1];
      v28 = *v7;
      v29 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v29, v28, v27, v26);
    case 4LL:
      v30 = v7[3];
      v31 = v7[2];
      v32 = v7[1];
      v33 = *v7;
      v34 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v30 = v7[3];
      v31 = v7[2];
      v32 = v7[1];
      v33 = *v7;
      v34 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v34, v33, v32, v31);
      return v30;
    case 6LL:
      v42 = v7[1];
      v35 = v7[2];
      v36 = *v7;
      v37 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      v38 = v35;
      return __fprintf_chk(stream, 1LL, v37, v36, v42, v38);
    case 7LL:
      v39 = v7[1];
      v44 = v7[2];
      v36 = *v7;
      v42 = v39;
      v37 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      v38 = v44;
      return __fprintf_chk(stream, 1LL, v37, v36, v42, v38);
    case 8LL:
      v11 = v7[2];
      v12 = v7[1];
      v13 = *v7;
      v41 = v11;
      v43 = v12;
      v14 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v14, v13, v43, v41);
    case 9LL:
      v16 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v17 = v7[1];
      v41 = v7[2];
      v13 = *v7;
      v43 = v17;
      goto LABEL_8;
    default:
      v16 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v40 = v7[1];
      v41 = v7[2];
      v13 = *v7;
      v43 = v40;
LABEL_8:
      v14 = dcgettext(0LL, v16, 5);
      return __fprintf_chk(stream, 1LL, v14, v13, v43, v41);
  }
}

__int64 __fastcall sub_4079B0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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

__int64 __fastcall sub_407A10(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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

void *__fastcall sub_407BB0(void *a1, size_t a2)
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
        sub_407DA0();
    }
  }
  return result;
}

void *__fastcall sub_407D50(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_407B50(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_407D80(void *src)
{
  size_t v1; // rax

  v1 = strlen((const char *)src);
  return sub_407D50(src, v1 + 1);
}

void __noreturn sub_407DA0()
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
  char **v5; // rbx
  int v6; // ebp
  const char *v7; // r14
  int *v8; // rax
  int *v9; // r13
  __int64 v10; // rax
  char *v11; // r15
  __int64 v12; // rbp
  unsigned int v13; // er12
  int v14; // er13
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
  int v28; // er10
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
  __int64 *v44; // [rsp+0h] [rbp-58h]
  char *endptr; // [rsp+18h] [rbp-40h]

  v44 = a4;
  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtol");
  v5 = a2;
  v6 = a3;
  if ( !a2 )
    v5 = &endptr;
  v7 = a5;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = strtol(nptr, v5, v6);
  v11 = *v5;
  v12 = v10;
  if ( *v5 == nptr )
  {
    if ( !v7 )
      return 4;
    v14 = (unsigned __int8)*v11;
    v13 = 4;
    if ( !(_BYTE)v14 )
      return v13;
    v12 = 1LL;
    v13 = 0;
    if ( !strchr(v7, (char)v14) )
      return 4;
LABEL_19:
    v18 = 142129060940101LL;
    if ( !_bittest64(&v18, (unsigned int)(v14 - 69)) || !strchr(v7, 48) )
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
        switch ( (_BYTE)v14 )
        {
          case 0x42:
            v16 = (int)v16;
            if ( v12 < -9007199254740992LL )
              goto LABEL_46;
            if ( v12 > 0x1FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 10;
            break;
          case 0x45:
            v32 = v17;
            v16 = (int)v16;
            v33 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_67;
          case 0x47:
          case 0x67:
            v35 = v17;
            v16 = (int)v16;
            v36 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_74;
          case 0x4B:
          case 0x6B:
            v21 = v17;
            v16 = (int)v16;
            v22 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_38;
          case 0x4D:
          case 0x6D:
            v21 = v17;
            v16 = (int)v16;
            v24 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_43;
          case 0x50:
            v25 = v17;
            v16 = (int)v16;
            v26 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_53;
          case 0x54:
          case 0x74:
            v29 = v17;
            v16 = (int)v16;
            v30 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_60;
          case 0x59:
            v38 = v17;
            v16 = (int)v16;
            v39 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_81;
          case 0x5A:
            v41 = v17;
            v16 = (int)v16;
            v42 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_88;
          case 0x62:
            v16 = (int)v16;
            goto LABEL_48;
          case 0x63:
            v16 = (int)v16;
            break;
          case 0x77:
            v16 = (int)v16;
            if ( v12 < -4611686018427387904LL )
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
        *v5 = v20;
        if ( *v20 )
          v13 |= 2u;
        goto LABEL_9;
      }
      if ( v19 != 66 )
      {
        switch ( (_BYTE)v14 )
        {
          case 0x45:
            v16 = 1LL;
            v32 = 1024LL;
            v33 = -9007199254740992LL;
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
          case 0x46:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4C:
          case 0x4E:
          case 0x4F:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x5B:
          case 0x5C:
          case 0x5D:
          case 0x5E:
          case 0x5F:
          case 0x60:
          case 0x61:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6C:
          case 0x6E:
          case 0x6F:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
            goto LABEL_27;
          case 0x47:
          case 0x67:
            v16 = 1LL;
            v35 = 1024LL;
            v36 = -9007199254740992LL;
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
          case 0x4B:
          case 0x6B:
            v16 = 1LL;
            v21 = 1024LL;
            v22 = -9007199254740992LL;
LABEL_38:
            if ( v12 < v22 )
              goto LABEL_46;
            v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
            goto LABEL_40;
          case 0x4D:
          case 0x6D:
            v16 = 1LL;
            v21 = 1024LL;
            v24 = -9007199254740992LL;
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
          case 0x50:
            v16 = 1LL;
            v25 = 1024LL;
            v26 = -9007199254740992LL;
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
          case 0x54:
          case 0x74:
            v16 = 1LL;
            v29 = 1024LL;
            v30 = -9007199254740992LL;
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
          case 0x59:
            v16 = 1LL;
            v38 = 1024LL;
            v39 = -9007199254740992LL;
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
          case 0x5A:
            v16 = 1LL;
            v41 = 1024LL;
            v42 = -9007199254740992LL;
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
          case 0x62:
            v16 = 1LL;
LABEL_48:
            if ( v12 < -18014398509481984LL )
              goto LABEL_46;
            if ( v12 > 0x3FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 9;
            break;
          case 0x63:
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
        return v13;
      }
      goto LABEL_19;
    }
  }
LABEL_9:
  *v44 = v12;
  return v13;
}

__int64 __fastcall sub_408550(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15
  unsigned __int64 *v6; // r14
  const char *v7; // r13
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // er12
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
  int v28; // er9
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int base; // [rsp+0h] [rbp-58h]
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h]

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  v5 = a2;
  base = a3;
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
  while ( v11[v10] & 0x2000 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = __strtoul_internal(nptr, v5, base, 0);
  if ( *v5 == nptr )
  {
    basea = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
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
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      baseb = *v5;
      v26 = strchr(v7, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_39:
        *v6 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      v19 = 142129060940101LL;
      if ( !_bittest64(&v19, (unsigned int)(v15 - 69)) || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
LABEL_26:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_27;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_27:
          switch ( (_BYTE)v15 )
          {
            case 0x42:
              if ( v13 >> 54 )
                goto LABEL_37;
              v13 <<= 10;
              break;
            case 0x45:
              goto LABEL_70;
            case 0x47:
            case 0x67:
              goto LABEL_76;
            case 0x4B:
            case 0x6B:
              goto LABEL_36;
            case 0x4D:
            case 0x6D:
              goto LABEL_29;
            case 0x50:
              goto LABEL_64;
            case 0x54:
            case 0x74:
              goto LABEL_58;
            case 0x59:
              goto LABEL_52;
            case 0x5A:
              goto LABEL_46;
            case 0x62:
              goto LABEL_43;
            case 0x63:
              break;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_37;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_39;
          }
LABEL_32:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (_BYTE)v15 )
          {
            case 0x45:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_70:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_50;
            case 0x46:
            case 0x48:
            case 0x49:
            case 0x4A:
            case 0x4C:
            case 0x4E:
            case 0x4F:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x5B:
            case 0x5C:
            case 0x5D:
            case 0x5E:
            case 0x5F:
            case 0x60:
            case 0x61:
            case 0x64:
            case 0x65:
            case 0x66:
            case 0x68:
            case 0x69:
            case 0x6A:
            case 0x6C:
            case 0x6E:
            case 0x6F:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
              goto LABEL_39;
            case 0x47:
            case 0x67:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_76:
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
              goto LABEL_32;
            case 0x4B:
            case 0x6B:
              v22 = 1;
              v23 = 1024LL;
LABEL_36:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_32;
              goto LABEL_37;
            case 0x4D:
            case 0x6D:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_29:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_37;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 0x50:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_64:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_50;
            case 0x54:
            case 0x74:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_58:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_50;
            case 0x59:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_52:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_50;
            case 0x5A:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_46:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_50:
              v14 |= v28;
              break;
            case 0x62:
              v22 = 1;
LABEL_43:
              if ( v13 >> 55 )
              {
LABEL_37:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 0x63:
              v22 = 1;
              goto LABEL_32;
            default:
              goto LABEL_26;
          }
          goto LABEL_32;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_27;
    }
  }
LABEL_13:
  *v6 = v13;
  return v14;
}

__int64 __fastcall sub_408990(__int64 a1, int *a2)
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

__int64 __fastcall sub_408A70(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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
  __int64 v34; // r9
  FILE *v35; // rdi
  char **v36; // rbx
  _BYTE *v37; // rbp
  __int64 v38; // r12
  const char *v39; // r12
  __int64 v40; // rbp
  char *v41; // rax
  char **v42; // [rsp+0h] [rbp-88h]
  int v43; // [rsp+Ch] [rbp-7Ch]
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  _DWORD *v47; // [rsp+20h] [rbp-68h]
  char *s; // [rsp+30h] [rbp-58h]
  int v49; // [rsp+38h] [rbp-50h]
  char v50; // [rsp+3Fh] [rbp-49h]
  int v51; // [rsp+40h] [rbp-48h]
  int v52; // [rsp+44h] [rbp-44h]
  int v53; // [rsp+48h] [rbp-40h]

  v51 = a1;
  v9 = (const char *)*((_QWORD *)a7 + 4);
  s = a3;
  v42 = a4;
  v47 = a5;
  v10 = (char *)*((_QWORD *)a7 + 4);
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
    if ( !v43 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(s, v50), result = 0xFFFFFFFFLL, !v18) )
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
          ptr = calloc((int)v13 + 1, 1uLL);
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
        v35 = stderr;
        v36 = v42;
        v37 = ptr;
        v38 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v37 )
          {
            __fprintf_chk(v35, 1LL, " '%s%s'", a9, *v36, v34);
            v35 = stderr;
          }
          ++v37;
          v36 += 4;
        }
        while ( (_BYTE *)v38 != v37 );
        fputc(10, v35);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v53 )
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
    LODWORD(v13) = v52;
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
          __fprintf_chk(stderr, 1LL, v41, v40, a9, v39);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( v47 )
          *v47 = v13;
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

__int64 __fastcall sub_409090(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
  __int64 v41; // r9
  __int64 v42; // rbp
  char *v43; // rax
  __int64 v44; // r9
  __int64 v45; // rbp
  char *v46; // rax
  __int64 v47; // r9
  char **v48; // [rsp+8h] [rbp-60h]
  _DWORD *v49; // [rsp+10h] [rbp-58h]
  char v50; // [rsp+1Ch] [rbp-4Ch]
  int v51; // [rsp+1Ch] [rbp-4Ch]
  int v52; // [rsp+1Ch] [rbp-4Ch]
  int v53; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v54; // [rsp+20h] [rbp-48h]
  __int64 v55; // [rsp+28h] [rbp-40h]

  v48 = a4;
  v49 = a5;
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
        v53 = a6;
        v34 = getenv("POSIXLY_CORRECT");
        a6 = v53;
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
        v51 = a6;
        sub_408990(a2, a7);
        v26 = *a7;
        a6 = v51;
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
        sub_408990((__int64)v11, a7);
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
        if ( v48 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_408A70(a1, v11, v12, v48, v49, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v52 = a6, v31 = strchr(v12, v30), a6 = v52, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408A70(a1, v11, v12, v48, v49, a6, a7, v8, (__int64)"-");
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
  v54 = v13;
  *((_QWORD *)a7 + 4) = v13 + 1;
  v21 = (char)*v13;
  v55 = (__int64)(v13 + 1);
  v50 = *v13;
  v22 = strchr(v12, v21);
  v23 = v55;
  if ( !v54[1] )
    ++*a7;
  if ( (unsigned __int8)(v50 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && v48 && v24 == 59 )
    {
      if ( v54[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_408A70(a1, v11, v12, v48, v49, 0, a7, v8, (__int64)&unk_40DC98);
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = v11[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v45 = *v11;
        v46 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v46, v45, v21, v47);
      }
      a7[2] = v21;
      v21 = 5 * (*v12 != 58) + 58;
    }
    else if ( v24 == 58 )
    {
      v35 = v54[1];
      if ( v22[2] == 58 )
      {
        if ( v35 )
        {
          *((_QWORD *)a7 + 2) = v55;
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
          *((_QWORD *)a7 + 2) = v55;
          *a7 = v36 + 1;
        }
        else if ( a1 == (_DWORD)v36 )
        {
          if ( v8 )
          {
            v42 = *v11;
            v43 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v43, v42, v21, v44);
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
      __fprintf_chk(stderr, 1LL, v40, v39, v21, v41);
    }
    a7[2] = v21;
    v21 = 63;
  }
  return v21;
}

__int64 __fastcall sub_409660(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
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

__int64 __fastcall sub_4096C0(int a1, __int64 a2, char *a3)
{
  return sub_409660(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_4096E0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409660(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_409700(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409090(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_409720(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409660(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_409740(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409090(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409760(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409840(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
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
      result = strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_4098A0()
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
          v1 = "%s: invalid option -- '%c'\n" + 27;
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
            sub_409E10(v39);
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

int __fastcall sub_409E10(FILE *stream)
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
  if ( !(unsigned int)sub_409E90(stream) )
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

int __fastcall sub_409E90(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_409ED0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_409ED0(FILE *a1, __off_t a2, int a3)
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
  if ( &unk_610248 )
    v1 = (void *)unk_610248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409FB8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_60FE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
