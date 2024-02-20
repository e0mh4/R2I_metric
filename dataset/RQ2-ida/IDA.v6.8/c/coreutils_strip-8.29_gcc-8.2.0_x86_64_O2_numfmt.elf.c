signed __int64 __fastcall main(int a1, char **a2, char **a3)
{
  char **v3; // rbp@1
  char *v4; // rbx@1
  char *v5; // rax@1
  int v6; // eax@4
  __int64 v7; // rax@29
  __int64 v8; // rax@31
  __int64 v9; // rax@35
  char *v10; // rax@52
  char *v11; // rax@52
  __int64 v12; // rax@53
  char *v13; // rax@67
  __int64 v14; // r14@69
  __int64 v15; // rax@69
  signed __int64 v16; // rdx@71
  char v17; // dl@73
  signed __int64 v18; // r13@74
  __int64 v19; // rsi@77
  char *v20; // rax@77
  __int64 v21; // rdx@77
  signed __int64 v22; // rcx@77
  char *v23; // r8@77
  __int64 v24; // r9@77
  bool v25; // zf@77
  const char *v26; // r13@79
  __int64 v27; // rax@81
  int v28; // eax@85
  int v29; // eax@89
  __int64 v30; // rax@90
  __int64 v31; // rax@92
  signed int i; // ebx@94
  char *v33; // rdi@95
  char *v34; // rcx@95
  __ssize_t v35; // rax@98
  char *v37; // rax@113
  char v38; // r15@114
  const char *v39; // rcx@114
  size_t v40; // rax@115
  char v41; // dl@115
  int *v42; // rax@118
  __int64 v43; // rax@118
  size_t v44; // rax@126
  signed __int64 v45; // rax@129
  char *v46; // r13@129
  char *v47; // rax@141
  char *v48; // rax@61
  char *v49; // rax@142
  char *v50; // rax@146
  char *v51; // rbp@100
  int *v52; // rax@100
  int *v53; // ST20_8@147
  __int64 v54; // ST28_8@147
  char *v55; // rax@147
  const char *v56; // r15@151
  __int64 v57; // rax@151
  const unsigned __int16 **v58; // rax@153
  __int64 v59; // rcx@153
  char *v60; // rax@162
  char *v61; // rax@162
  char *v62; // rax@163
  char *v63; // rax@163
  char *v64; // rax@164
  char *v65; // rax@165
  char *v66; // rax@166
  char *v67; // rax@166
  char *v68; // rax@167
  char *v69; // rax@167
  char *v70; // rax@168
  char *v71; // rax@168
  __int64 v72; // rax@169
  __int64 v73; // rbx@169
  char *v74; // rax@169
  __int64 v75; // rax@170
  __int64 v76; // rbx@170
  char *v77; // rax@170
  char *v78; // rax@171
  char *v79; // rax@172
  char *v80; // [sp+0h] [bp-58h]@0
  int *v81; // [sp+8h] [bp-50h]@118
  char *s; // [sp+10h] [bp-48h]@90
  size_t n; // [sp+18h] [bp-40h]@69

  v3 = a2;
  sub_405970(*a2, a2, a3);
  v4 = setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  v5 = nl_langinfo(0x10000);
  s2 = v5;
  if ( !v5 || !*v5 )
    s2 = ".";
  dword_61033C = strlen(s2);
  sub_409FA0(
    sub_405490,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  while ( 1 )
  {
    v6 = sub_4096E0((unsigned int)a1, a2, "d:z", &off_40BD80, 0LL);
    if ( v6 == -1 )
      break;
    if ( v6 == 132 )
      goto LABEL_53;
    if ( v6 <= 132 )
    {
      if ( v6 == 122 )
      {
        byte_610250 = 0;
      }
      else if ( v6 <= 122 )
      {
        if ( v6 == -130 )
          sub_404360(0);
        if ( v6 != 100 )
        {
          if ( v6 == -131 )
          {
            sub_407A10((char)stdout);
            exit(0);
          }
LABEL_42:
          sub_404360(1);
        }
        if ( *nptr && nptr[1] )
          goto LABEL_172;
        dword_610254 = *nptr;
      }
      else if ( v6 == 129 )
      {
        qword_610270 = sub_4029B0(nptr);
      }
      else if ( v6 <= 129 )
      {
        if ( v6 != 128 )
          goto LABEL_42;
        LODWORD(v9) = sub_4053B0("--from", nptr, off_40C100, dword_40C0D0, 4LL, off_610288);
        HIDWORD(qword_6103AC) = dword_40C0D0[v9];
      }
      else if ( v6 == 130 )
      {
        LODWORD(v7) = sub_4053B0("--to", nptr, off_40C0A0, dword_40C090, 4LL, off_610288);
        LODWORD(qword_6103AC) = dword_40C090[v7];
      }
      else
      {
        if ( v6 != 131 )
          goto LABEL_42;
        qword_610268 = sub_4029B0(nptr);
      }
    }
    else
    {
      if ( v6 == 137 )
        goto LABEL_44;
      if ( v6 > 137 )
      {
        if ( v6 == 139 )
        {
          if ( nptr )
          {
            if ( (unsigned int)sub_408550(nptr) || !qword_610350 )
            {
              LODWORD(v10) = sub_407590(nptr);
              v4 = v10;
              v11 = dcgettext(0LL, "invalid header value %s", 5);
              error(1, 0, v11, v4);
LABEL_53:
              LODWORD(v12) = sub_4053B0("--round", nptr, off_40C060, dword_40C030, 4LL, off_610288);
              dword_610278 = dword_40C030[v12];
            }
          }
          else
          {
            qword_610350 = 1LL;
          }
        }
        else if ( v6 < 139 )
        {
          byte_610338 = 1;
LABEL_44:
          byte_610348 = 1;
        }
        else if ( v6 == 140 )
        {
          qword_610370 = (__int64)nptr;
        }
        else
        {
          if ( v6 != 141 )
            goto LABEL_42;
          LODWORD(v8) = sub_4053B0("--invalid", nptr, off_40C000, dword_40BFE0, 4LL, off_610288);
          dword_6103A8 = dword_40BFE0[v8];
        }
      }
      else if ( v6 == 134 )
      {
        dword_610398 = 1;
      }
      else if ( v6 < 134 )
      {
        s1 = nptr;
      }
      else if ( v6 == 135 )
      {
        if ( (unsigned int)sub_407E00(nptr) || !qword_610380 )
          goto LABEL_170;
        if ( qword_610380 < 0 )
        {
          dword_610258 = 0;
          qword_610380 = -qword_610380;
        }
      }
      else
      {
        if ( v6 != 136 )
          goto LABEL_42;
        if ( nmemb )
          goto LABEL_171;
        sub_404B00(nptr, 1LL);
      }
    }
  }
  if ( qword_610370 && dword_610398 )
    goto LABEL_164;
  if ( !v4 && byte_610348 )
  {
    v48 = dcgettext(0LL, "failed to set locale", 5);
    error(0, 0, v48);
  }
  if ( !byte_610348 || qword_6103AC )
    goto LABEL_68;
  v4 = (char *)qword_610370;
  if ( dword_610398 )
  {
    if ( qword_610370 )
      goto LABEL_69;
LABEL_111:
    if ( byte_610348 && !*nl_langinfo(65537) )
    {
      v37 = dcgettext(0LL, "grouping has no effect in this locale", 5);
      error(0, 0, v37, v80);
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
    v13 = dcgettext(0LL, "no conversion option specified", 5);
    error(0, 0, v13);
LABEL_68:
    v4 = (char *)qword_610370;
    if ( !qword_610370 )
      goto LABEL_82;
  }
LABEL_69:
  n = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  while ( 2 )
  {
    v17 = v4[v15];
    if ( v17 != 37 )
    {
      if ( v17 )
      {
        v16 = 1LL;
LABEL_72:
        v15 += v16;
        ++v14;
        continue;
      }
      LODWORD(v60) = sub_407590(v4);
      v4 = v60;
      v61 = dcgettext(0LL, "format %s has no %% directive", 5);
      error(1, 0, v61, v4);
      goto LABEL_163;
    }
    break;
  }
  v18 = v15 + 1;
  if ( v4[v15 + 1] == 37 )
  {
    v16 = 2LL;
    goto LABEL_72;
  }
  v38 = 0;
  v39 = &v4[v18];
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v40 = strspn(v39, " ");
        v18 += v40;
        v39 = &v4[v18];
        v41 = v4[v18];
        if ( v41 != 39 )
          break;
        dword_610398 = 1;
        v39 = &v4[++v18];
      }
      if ( v41 != 48 )
        break;
      ++v18;
      v38 = 1;
      v39 = &v4[v18];
    }
  }
  while ( v40 );
  v80 = &v4[v18];
  v42 = __errno_location();
  *v42 = 0;
  v81 = v42;
  v43 = strtol(&v4[v18], (char **)&n, 10);
  v23 = (char *)v81;
  v24 = v43;
  if ( *v81 == 34 )
  {
LABEL_163:
    LODWORD(v62) = sub_407590(v4);
    v4 = v62;
    v63 = dcgettext(0LL, "invalid format %s (width overflow)", 5);
    error(1, 0, v63, v4, v80);
LABEL_164:
    v64 = dcgettext(0LL, "--grouping cannot be combined with --format", 5);
    error(1, 0, v64);
LABEL_165:
    v65 = dcgettext(0LL, "grouping cannot be combined with --to", 5);
    error(1, 0, v65, v80);
LABEL_166:
    LODWORD(v66) = sub_407590(v4);
    v4 = v66;
    v67 = dcgettext(0LL, "format %s has too many %% directives", 5);
    error(1, 0, v67, v4, v80);
    goto LABEL_167;
  }
  if ( (char *)n != v80 && v43 )
  {
    if ( byte_610348 && qword_610380 )
    {
      if ( v38 && v43 > 0 )
      {
LABEL_125:
        qword_610378 = v24;
        goto LABEL_126;
      }
      v53 = v81;
      v54 = v43;
      v55 = dcgettext(0LL, "--format padding overriding --padding", 5);
      error(0, 0, v55, v53);
      v24 = v54;
      v23 = v80;
    }
    if ( v24 < 0 )
    {
      dword_610258 = 0;
      v24 = -v24;
      qword_610380 = v24;
    }
    else
    {
      if ( v38 )
        goto LABEL_125;
      qword_610380 = v24;
    }
  }
LABEL_126:
  v44 = n - (_QWORD)v4;
  if ( !*(_BYTE *)n )
    goto LABEL_168;
  if ( *(_BYTE *)n != 46 )
    goto LABEL_128;
  *(_DWORD *)v23 = 0;
  v56 = &v4[v44 + 1];
  v80 = v23;
  v57 = strtol(v56, (char **)&n, 10);
  qword_610260 = v57;
  if ( *(_DWORD *)v80 == 34 )
    goto LABEL_169;
  if ( v57 < 0 )
    goto LABEL_169;
  v58 = __ctype_b_loc();
  v59 = *v56;
  if ( (*v58)[v59] & 1 || (_BYTE)v59 == 43 )
    goto LABEL_169;
  v44 = n - (_QWORD)v4;
LABEL_128:
  if ( v4[v44] != 102 )
  {
LABEL_167:
    LODWORD(v68) = sub_407590(v4);
    v4 = v68;
    v69 = dcgettext(0LL, "invalid format %s, directive must be %%[0]['][-][N][.][N]f", 5);
    error(1, 0, v69, v4, v80);
LABEL_168:
    LODWORD(v70) = sub_407590(v4);
    v4 = v70;
    v71 = dcgettext(0LL, "format %s ends in %%", 5);
    error(1, 0, v71, v4, v80);
LABEL_169:
    LODWORD(v72) = sub_407590(v4);
    v73 = v72;
    v74 = dcgettext(0LL, "invalid precision in format %s", 5);
    error(1, 0, v74, v73, v80);
LABEL_170:
    LODWORD(v75) = sub_407590(nptr);
    v76 = v75;
    v77 = dcgettext(0LL, "invalid padding value %s", 5);
    error(1, 0, v77, v76);
LABEL_171:
    v78 = dcgettext(0LL, "multiple field specifications", 5);
    error(1, 0, v78);
LABEL_172:
    v79 = dcgettext(0LL, "the delimiter must be a single character", 5);
    error(1, 0, v79);
    start();
  }
  v45 = v44 + 1;
  v46 = &v4[v45];
  LOBYTE(v21) = v4[v45];
  if ( (_BYTE)v21 )
  {
    do
    {
      v22 = v45 + 1;
      v19 = (unsigned __int8)v4[v45 + 1];
      if ( (_BYTE)v21 == 37 )
      {
        if ( (_BYTE)v19 != 37 )
          goto LABEL_166;
        v22 = v45 + 2;
        v21 = (unsigned __int8)v4[v45 + 2];
      }
      else
      {
        v21 = (unsigned __int8)v4[v45 + 1];
      }
      v45 = v22;
    }
    while ( (_BYTE)v21 );
    if ( v14 )
    {
LABEL_77:
      v19 = v14;
      LODWORD(v20) = sub_407DE0(v4, v14);
      v25 = *v46 == 0;
      qword_610368 = v20;
      if ( v25 )
        goto LABEL_78;
    }
    LODWORD(v50) = sub_407D80(v46, v19, v21, v22, v23, v24);
    qword_610360 = v50;
    goto LABEL_78;
  }
  if ( v14 )
    goto LABEL_77;
LABEL_78:
  if ( byte_610338 )
  {
    sub_407570(2LL);
    v26 = "yes";
    sub_407570(1LL);
    v80 = (char *)qword_610380;
    if ( !dword_610398 )
      v26 = "no";
    LODWORD(v27) = sub_407570(0LL);
    __fprintf_chk(
      stderr,
      1LL,
      "format String:\n  input: %s\n  grouping: %s\n  padding width: %ld\n  alignment: %s\n  prefix: %s\n  suffix: %s\n",
      v27,
      v26,
      v80);
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
  v28 = 0;
  if ( !qword_610380 )
    v28 = dword_610254 == 128;
  dword_610358 = v28;
  if ( dword_6103A8 )
    status = 0;
  v29 = dword_6102FC;
  if ( dword_6102FC < a1 )
  {
    if ( !byte_610348
      || !qword_610350
      || (v49 = dcgettext(0LL, "--header ignored with command-line input", 5),
          error(0, 0, v49, v80),
          v29 = dword_6102FC,
          a1 > dword_6102FC) )
    {
      i = 1;
      do
      {
        i &= sub_4041A0(v3[v29]);
        v29 = dword_6102FC + 1;
        dword_6102FC = v29;
      }
      while ( v29 < a1 );
      goto LABEL_101;
    }
    return 0LL;
  }
  v30 = qword_610350;
  s = 0LL;
  n = 0LL;
  --qword_610350;
  if ( v30 )
  {
    do
    {
      if ( getdelim(&s, &n, (unsigned __int8)byte_610250, stdin) <= 0 )
        break;
      fputs_unlocked(s, stdout);
      v31 = qword_610350--;
    }
    while ( v31 );
  }
  for ( i = 1; ; i &= sub_4041A0(v33) )
  {
    v35 = getdelim(&s, &n, (unsigned __int8)byte_610250, stdin);
    if ( v35 <= 0 )
      break;
    v33 = s;
    v34 = &s[v35 - 1];
    if ( *v34 == (unsigned __int8)byte_610250 )
    {
      *v34 = 0;
      v33 = s;
    }
  }
  if ( stdin->_flags & 0x20 )
  {
    v51 = dcgettext(0LL, "error reading input", 5);
    v52 = __errno_location();
    error(0, *v52, v51, v80);
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
  v47 = dcgettext(0LL, "failed to convert some of the input numbers", 5);
  error(0, 0, v47, v80);
LABEL_139:
  if ( (unsigned int)(dword_6103A8 - 2) <= 1 )
    return 0LL;
  return 2LL;
}

int sub_4028FB()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_40291A()
{
  return 0;
}

int sub_402951()
{
  int result; // eax@4

  if ( !byte_610328 )
  {
    while ( qword_610330 < (unsigned __int64)(((&unk_60FE48 - (_UNKNOWN *)&qword_60FE40) >> 3) - 1) )
      (*(&qword_60FE40 + ++qword_610330))();
    result = sub_4028FB();
    byte_610328 = 1;
  }
  return result;
}

int sub_4029A8()
{
  return sub_40291A();
}

int __fastcall sub_4029B0(char *nptr)
{
  size_t v1; // rax@1
  size_t v2; // rbx@2
  signed __int64 v3; // r12@2
  char *v4; // r9@3
  char *v5; // r12@3
  int result; // eax@7
  char *v7; // rax@8
  char *v8; // r12@8
  __int64 v9; // rax@13
  __int64 v10; // rbx@13
  char *v11; // rax@13
  char *v12; // [sp+0h] [bp-28h]@1
  __int64 v13; // [sp+8h] [bp-20h]@0

  v1 = strlen(nptr);
  v12 = 0LL;
  if ( v1 && (v2 = v1, v3 = v1 - 1, (unsigned int)(nptr[v1 - 1] - 48) > 9) )
  {
    LODWORD(v7) = sub_407B50(v1 + 2);
    v8 = &v7[v3];
    v12 = v8;
    v4 = (char *)memcpy(v7, nptr, v2);
    if ( *v8 != 105 || v2 == 1 || (unsigned int)(*(v8 - 1) - 48) <= 9 )
    {
      v12 = v8 + 2;
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
  if ( (unsigned int)sub_408550(v4) || *v12 || !v13 )
  {
    free(v5);
    LODWORD(v9) = sub_407590(nptr);
    v10 = v9;
    v11 = dcgettext(0LL, "invalid unit size: %s", 5);
    error(1, 0, v11, v10, v12);
    result = sub_402AF0();
  }
  else
  {
    free(v5);
    result = v13;
  }
  return result;
}

signed __int64 __fastcall sub_402AF0(const char **a1, long double *a2, _BYTE *a3)
{
  long double *v3; // rbp@1
  _BYTE *v4; // rbx@1
  const char *v5; // rcx@1
  int v6; // edx@2
  const char *v7; // rcx@3
  signed __int64 result; // rax@3
  unsigned int v9; // er8@3
  long double v10; // fst7@3
  char v11; // si@4
  int v12; // edx@12
  int v13; // edx@14

  v3 = a2;
  v4 = a3;
  v5 = *a1;
  if ( *a1 )
  {
    v6 = *v5 - 48;
    if ( (unsigned int)v6 <= 9 )
    {
      v7 = v5 + 1;
      result = 0LL;
      v9 = 0;
      v10 = 0.0;
      while ( 1 )
      {
        v11 = 0;
        if ( 0.0 != v10 )
          v11 = 1;
        if ( v11 || v6 )
          ++v9;
        if ( v9 > 0x12 )
        {
          if ( v9 > 0x1B )
            return 2LL;
          result = 1LL;
        }
        *a1 = v7;
        v10 = v10 * 10.0 + (long double)v6;
        if ( v7 )
        {
          v12 = *v7++;
          v6 = v12 - 48;
          if ( (unsigned int)v6 <= 9 )
            continue;
        }
        goto LABEL_16;
      }
    }
  }
  v13 = strncmp(*a1, s2, dword_61033C);
  result = 3LL;
  if ( !v13 )
  {
    result = 0LL;
    v10 = 0.0;
LABEL_16:
    if ( *v4 )
      v10 = -v10;
    *v3 = v10;
  }
  return result;
}

int __fastcall sub_402BD0(__int64 a1)
{
  char *v1; // rax@1

  qword_610388 = a1 + 1;
  LODWORD(v1) = sub_407BB0(dest);
  dest = v1;
  return (unsigned __int64)v1;
}

__int64 __fastcall sub_402C00(char *s, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r12@1
  void *v7; // rax@1
  signed int v8; // ebx@7
  const char *v10; // r13@10
  size_t v11; // rbx@11
  size_t v12; // rax@11
  const char *v13; // rbx@12
  int v14; // eax@12
  char v15; // dl@12
  __int64 v16; // rbx@15
  char *v17; // r13@16
  const unsigned __int16 *v18; // rax@16
  int v19; // eax@19
  signed int v20; // ebx@25
  char v21; // dl@26
  char *v22; // rax@26
  const char *v23; // rbp@28
  signed __int64 v24; // r8@28
  __int64 v25; // r15@29
  char *v26; // r14@29
  int v27; // eax@29
  __int64 v28; // r9@29
  unsigned __int64 v29; // r14@30
  char *v30; // r15@33
  const unsigned __int16 **v31; // rax@34
  char v32; // dl@34
  const unsigned __int16 *v33; // rsi@34
  char *v34; // rax@34
  char *v35; // r15@36
  signed int v36; // ST30_4@43
  char v37; // dl@43
  int v38; // eax@45
  __int64 v39; // rax@54
  __int64 v40; // r15@54
  __int64 v41; // rax@54
  __int64 v42; // rbx@54
  char *v43; // rax@54
  __int64 v44; // ST30_8@56
  __int64 v45; // ST30_8@58
  __int64 v46; // rax@67
  __int64 v47; // r14@67
  __int64 v48; // rax@67
  char *v49; // r14@68
  unsigned int v50; // eax@70
  int v51; // eax@75
  unsigned __int64 v52; // rax@82
  __int64 v53; // rax@86
  __int64 v54; // rbx@86
  char *v55; // rax@86
  unsigned int v59; // eax@95
  char *v60; // rax@102
  long double v61; // ST10_16@102
  unsigned int v62; // ebp@105
  char *v63; // r12@105
  int v64; // er13@105
  __int64 v65; // r9@107
  char v66; // cl@109
  unsigned int v67; // er13@116
  __int64 v68; // rax@123
  signed int v69; // edi@125
  int v70; // edx@127
  long double v72; // ST10_16@134
  __int64 v74; // rcx@134
  __int64 v75; // r9@134
  const char *v78; // rbx@136
  __int64 v79; // rax@138
  __int64 v80; // r13@138
  char *v81; // rax@138
  int v82; // eax@144
  int v83; // edx@145
  __int64 v85; // rax@14
  __int64 v86; // r8@14
  __int64 v87; // r9@14
  int v90; // ebx@157
  char *v91; // rax@158
  long double v92; // ST10_16@158
  const char *v94; // rdx@167
  long double v97; // ST10_16@171
  char v99; // bl@172
  char *v100; // rsi@173
  const char *v101; // rdx@174
  int v102; // ecx@175
  unsigned int v103; // eax@175
  __int64 v105; // rax@182
  __int64 v107; // r8@182
  __int64 v108; // r9@182
  unsigned __int64 v109; // rcx@184
  FILE *v110; // rsi@189
  signed __int64 v111; // ST20_8@196
  __int64 v112; // ST20_8@198
  __int64 v113; // ST20_8@198
  signed __int64 v115; // ST40_8@207
  unsigned __int8 v116; // pf@208
  __int64 v118; // r9@221
  __int64 v119; // rax@225
  int v122; // eax@227
  __int64 v123; // ST40_8@238
  __int64 v124; // rdx@238
  __int64 v125; // ST40_8@238
  signed int v129; // ST30_4@251
  int v130; // er9@260
  __int64 v136; // rax@271
  __int64 v137; // r8@271
  __int64 v138; // r9@271
  __int64 v144; // rax@274
  __int64 v145; // r8@274
  __int64 v146; // r9@274
  char *v148; // rax@279
  long double v149; // ST10_16@279
  unsigned int v151; // ST30_4@281
  char *v155; // rax@288
  long double v156; // ST10_16@288
  char *v157; // rax@292
  long double v158; // ST10_16@292
  __int128 v159; // [sp+20h] [bp-168h]@0
  __int64 v163; // [sp+20h] [bp-168h]@194
  int v165; // [sp+30h] [bp-158h]@25
  signed __int64 v166[2]; // [sp+30h] [bp-158h]@113
  char v169; // [sp+40h] [bp-148h]@33
  char v170; // [sp+40h] [bp-148h]@37
  signed int v171[4]; // [sp+40h] [bp-148h]@113
  __int64 v172; // [sp+40h] [bp-148h]@206
  __int64 v173; // [sp+60h] [bp-128h]@197
  __int64 v174; // [sp+60h] [bp-128h]@237
  __int16 v175; // [sp+6Ch] [bp-11Ch]@129
  __int16 v176; // [sp+6Ch] [bp-11Ch]@147
  unsigned __int16 v177; // [sp+6Eh] [bp-11Ah]@129
  unsigned __int16 v178; // [sp+6Eh] [bp-11Ah]@147
  char v179; // [sp+7Eh] [bp-10Ah]@28
  char v180; // [sp+7Fh] [bp-109h]@70
  char *s1; // [sp+80h] [bp-108h]@28
  char *v182; // [sp+88h] [bp-100h]@70
  __int128 v183; // [sp+90h] [bp-F8h]@25
  __int128 src; // [sp+D0h] [bp-B8h]@68

  v6 = s;
  v7 = ptr;
  if ( ptr )
  {
    while ( *(_QWORD *)v7 != -1LL )
    {
      if ( a2 >= *(_QWORD *)v7 && a2 <= *((_QWORD *)v7 + 1) )
        goto LABEL_10;
      v7 = (char *)v7 + 16;
    }
LABEL_7:
    v8 = 1;
    fputs_unlocked(s, stdout);
    return (unsigned int)v8;
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
          LODWORD(v85) = sub_407590(v10);
          __fprintf_chk(stderr, 1LL, "trimming suffix %s\n", v85, v86, v87);
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
    if ( v19 || (signed __int64)a2 > 1 )
    {
      v52 = strlen(s);
      qword_610380 = v52;
      if ( v52 >= qword_610388 )
        sub_402BD0(v52);
    }
    else
    {
      qword_610380 = 0LL;
    }
    if ( !byte_610338 )
    {
      LODWORD(v159) = 0;
      __asm { fld     dword ptr [rsp+168h+var_168] }
      v165 = HIDWORD(qword_6103AC);
      __asm { fstp    tbyte ptr [rsp+168h+var_F8] }
      v20 = (unsigned int)(HIDWORD(qword_6103AC) - 3) < 2 ? 1024 : 1000;
      goto LABEL_26;
    }
    __fprintf_chk(stderr, 1LL, "setting Auto-Padding to %ld characters\n", qword_610380, a5, a6);
  }
  s1 = 0LL;
  LODWORD(v159) = 0;
  __asm { fld     dword ptr [rsp+168h+var_168] }
  v165 = HIDWORD(qword_6103AC);
  __asm { fstp    tbyte ptr [rsp+168h+var_F8] }
  v20 = (unsigned int)(HIDWORD(qword_6103AC) - 3) < 2 ? 1024 : 1000;
  if ( byte_610338 )
  {
    LODWORD(v46) = sub_407570(1LL);
    v47 = v46;
    LODWORD(v48) = sub_407570(0LL);
    __fprintf_chk(
      stderr,
      1LL,
      "simple_strtod_human:\n  input string: %s\n  locale decimal-point: %s\n  MAX_UNSCALED_DIGITS: %d\n",
      v48,
      v47,
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
  v179 = v21;
  s1 = v22;
  LODWORD(v23) = sub_402AF0((const char **)&s1, (long double *)&v183, &v179);
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
  v49 = &v26[v25];
  s1 = v49;
  __asm { fstp    tbyte ptr [rsp+168h+src] }
  if ( *v49 == 45 )
  {
    ++v49;
    LOBYTE(v27) = 1;
  }
  v180 = v27;
  v182 = v49;
  v50 = sub_402AF0((const char **)&v182, (long double *)&src, &v180);
  if ( v50 > 1 )
  {
    LODWORD(v23) = v50;
LABEL_88:
    switch ( (_DWORD)v23 )
    {
      case 2:
        v29 = 0LL;
        v78 = "value too large to be converted: %s";
        break;
      case 5:
        v29 = 0LL;
        v78 = "invalid suffix in input: %s";
        break;
      case 4:
        v29 = 0LL;
        v78 = "rejecting suffix in input: %s (consider using --from)";
        break;
      case 6:
        v29 = 0LL;
        v78 = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
        break;
      default:
        v29 = 0LL;
        v78 = 0LL;
        break;
      case 3:
        goto LABEL_159;
    }
    goto LABEL_137;
  }
  if ( v50 == 1 )
    LODWORD(v23) = 1;
  if ( v180 )
  {
LABEL_159:
    v29 = 0LL;
    LODWORD(v23) = 3;
    v78 = "invalid number: %s";
    goto LABEL_137;
  }
  __asm { fld     tbyte ptr [rsp+168h+src] }
  v29 = v182 - s1;
  if ( (_DWORD)v182 != (_DWORD)s1 )
  {
    v51 = v29 - 1;
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
        --v51;
      }
      while ( v51 );
      __asm
      {
        fstp    st(1)
        fdivp   st(1), st
      }
    }
  }
  __asm { fld     tbyte ptr [rsp+168h+var_F8] }
  if ( v179 )
    __asm { fsubrp  st(1), st }
  else
    __asm { faddp   st(1), st }
  __asm { fstp    tbyte ptr [rsp+168h+var_F8] }
  s1 = v182;
LABEL_31:
  if ( byte_610338 )
    __fprintf_chk(stderr, 1LL, "  parsed numeric value: %Lf\n  input precision = %d\n", (unsigned int)v29, v24, v28);
  v30 = s1;
  v169 = *s1;
  if ( !*s1 )
  {
    if ( v165 != 4 )
    {
      v37 = byte_610338;
      v24 = 0LL;
      __asm { fld1 }
      goto LABEL_48;
    }
    LODWORD(v23) = 6;
    v78 = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
    goto LABEL_137;
  }
  v31 = __ctype_b_loc();
  v32 = v169;
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
  v170 = v32;
  if ( !strchr("KMGTPEZY", v32) )
  {
    LODWORD(v23) = 5;
    v78 = "invalid suffix in input: %s";
    goto LABEL_137;
  }
  if ( !v165 )
  {
    LODWORD(v23) = 4;
    v78 = "rejecting suffix in input: %s (consider using --from)";
    goto LABEL_137;
  }
  v24 = 0LL;
  if ( (unsigned __int8)(v170 - 69) <= 0x15u )
    v24 = (unsigned int)dword_40BD20[(unsigned __int64)(unsigned __int8)(v170 - 69)];
  s1 = v35 + 1;
  if ( v165 == 1 )
  {
    v37 = byte_610338;
    if ( v35[1] == 105 )
    {
      s1 = v35 + 2;
      if ( byte_610338 )
      {
        v151 = v24;
        v20 = 1024;
        __fprintf_chk(stderr, 1LL, "  Auto-scaling, found 'i', switching to base %d\n", 1024LL, v24, v28);
        v24 = v151;
        v37 = byte_610338;
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
      v129 = v20;
      __asm { fild    dword ptr [rsp+168h+var_158] }
    }
    goto LABEL_44;
  }
  if ( v165 == 4 )
  {
    if ( v35[1] == 105 )
    {
      s1 = v35 + 2;
      goto LABEL_43;
    }
    v29 = 0LL;
    LODWORD(v23) = 6;
    v78 = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
LABEL_137:
    if ( dword_6103A8 != 3 )
    {
      LODWORD(v79) = sub_407590(v17);
      v80 = v79;
      v81 = dcgettext(0LL, v78, 5);
      error(status, 0, v81, v80, (_QWORD)v159);
    }
    goto LABEL_55;
  }
LABEL_43:
  v36 = v20;
  __asm { fild    dword ptr [rsp+168h+var_158] }
  v37 = byte_610338;
LABEL_44:
  if ( !(_DWORD)v24 )
    goto LABEL_289;
  __asm { fld     st }
  v38 = v24 - 1;
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
      --v38;
    }
    while ( v38 );
    __asm { fstp    st(1) }
    v29 = 0LL;
  }
  while ( 1 )
  {
LABEL_48:
    if ( v37 )
    {
      __asm
      {
        fld     st
        fstp    [rsp+178h+var_178]
        fstp    tbyte ptr [rsp+178h+var_158]
      }
      __fprintf_chk(stderr, 1LL, "  suffix power=%d^%d = %Lf\n", (unsigned int)v20, v24, v28);
      __asm
      {
        fld     tbyte ptr [rsp+178h+var_F8]
        fld     tbyte ptr [rsp+178h+var_158]
        fmulp   st(1), st
        fld     st
        fstp    tbyte ptr [rsp+178h+var_F8]
      }
      v75 = *(_QWORD *)&v72;
      if ( byte_610338 )
      {
        __asm
        {
          fld     st
          fstp    [rsp+188h+var_178]
          fstp    [rsp+188h+var_188]
        }
        __fprintf_chk(stderr, 1LL, "  returning value: %Lf (%LG)\n", v74, v24, v75);
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
        fld     tbyte ptr [rsp+168h+var_F8]
        fmulp   st(1), st
        fstp    tbyte ptr [rsp+168h+var_F8]
      }
    }
    if ( s1 && *s1 )
    {
      LODWORD(v23) = 5;
      if ( dword_6103A8 != 3 )
      {
        LODWORD(v39) = sub_407570(1LL);
        v40 = v39;
        LODWORD(v41) = sub_407570(0LL);
        v42 = v41;
        v43 = dcgettext(0LL, "invalid suffix in input %s: %s", 5);
        error(status, 0, v43, v42, v40, (_QWORD)v159);
      }
    }
    else if ( (_DWORD)v23 == 1 && byte_610348 )
    {
      LODWORD(v53) = sub_407590(v17);
      v54 = v53;
      v55 = dcgettext(0LL, "large input value %s: possible precision loss", 5);
      error(0, 0, v55, v54, (_QWORD)v159);
    }
LABEL_55:
    __asm { fld     tbyte ptr [rsp+168h+var_F8] }
    if ( qword_610270 != 1 || qword_610268 != 1 )
    {
      v44 = qword_610270;
      __asm { fild    [rsp+168h+var_158] }
      if ( qword_610270 < 0 )
        __asm { fadd    cs:flt_40C138 }
      __asm { fmulp   st(1), st }
      v45 = qword_610268;
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
      return (unsigned int)v8;
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
          v90 = status;
          __asm { fstp    tbyte ptr [rsp+168h+var_168] }
          if ( v29 )
          {
            v91 = dcgettext(0LL, "value/precision too large to be printed: '%Lg/%lu' (consider using --to)", 5);
            __asm
            {
              fld     tbyte ptr [rsp+168h+var_168]
              fstp    [rsp+178h+var_178]
            }
            error(v90, 0, v91, v29, *(_QWORD *)&v92, *((_QWORD *)&v92 + 1));
          }
          else
          {
            v148 = dcgettext(0LL, "value too large to be printed: '%Lg' (consider using --to)", 5);
            __asm
            {
              fld     tbyte ptr [rsp+168h+var_168]
              fstp    [rsp+178h+var_178]
            }
            error(v90, 0, v148, *(_QWORD *)&v149);
          }
        }
        goto LABEL_64;
      }
    }
    else
    {
      __asm { fld     st }
      v59 = 0;
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
        ++v59;
      }
      __asm
      {
        fstp    st
        fstp    st
        fstp    st
      }
      v20 = qword_6103AC;
      if ( !(_DWORD)qword_6103AC && v29 + v59 > 0x12 )
        goto LABEL_156;
      if ( v59 > 0x1A )
      {
        __asm { fstp    tbyte ptr [rsp+168h+var_168] }
        if ( dword_6103A8 != 3 )
        {
          v60 = dcgettext(0LL, "value too large to be printed: '%Lg' (cannot handle values > 999Y)", 5);
          __asm
          {
            fld     tbyte ptr [rsp+168h+var_168]
            fstp    [rsp+178h+var_178]
          }
          error(status, 0, v60, *(_QWORD *)&v61, *((_QWORD *)&v61 + 1));
        }
        goto LABEL_64;
      }
    }
    v62 = dword_610278;
    LOBYTE(v183) = 37;
    v63 = (char *)&v183 + 1;
    v64 = dword_610398;
    if ( dword_610398 )
    {
      BYTE1(v183) = 39;
      v63 = (char *)&v183 + 2;
    }
    v65 = qword_610378;
    if ( qword_610378 )
    {
      __asm
      {
        fstp    tbyte ptr [rsp+168h+var_158]
        fld     tbyte ptr [rsp+168h+var_158]
      }
      v63 += __snprintf_chk(v63, 62LL, 1LL, 63LL, "0%ld");
    }
    v66 = byte_610338;
    if ( byte_610338 )
    {
      __asm { fstp    tbyte ptr [rsp+168h+var_158] }
      fwrite("double_to_human:\n", 1uLL, 0x11uLL, stderr);
      v66 = byte_610338;
      __asm { fld     tbyte ptr [rsp+168h+var_158] }
    }
    if ( v20 )
      break;
    if ( (_DWORD)v29 )
    {
      v82 = v29 - 1;
      if ( (_DWORD)v29 == 1 )
      {
        __asm
        {
          fnstcw  [rsp+168h+var_11A]
          fld     cs:tbyte_40C170
        }
        v82 = v178;
        __asm
        {
          fld     st(1)
          fmul    cs:flt_40C130
        }
        BYTE1(v82) |= 0xCu;
        v176 = v82;
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
        if ( v62 > 4 )
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
        v83 = v29 - 1;
        __asm { fld     st }
        do
        {
          __asm { fmul    st, st(1) }
          --v83;
        }
        while ( v83 );
        __asm
        {
          fnstcw  [rsp+168h+var_11A]
          fmul    st, st(2)
          fld     cs:tbyte_40C170
          fld     st(1)
          fdiv    st, st(1)
        }
        v176 = v178 | 0xC00;
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
      v82 = v178;
      __asm
      {
        fld     st(1)
        fdiv    st, st(1)
      }
      BYTE1(v82) |= 0xCu;
      v176 = v82;
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
      if ( v62 > 4 )
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
    switch ( v62 )
    {
      case 3u:
        __asm
        {
          fxch    st(1)           ; jumptable 00000000004035CD case 3
          fldcw   [rsp+168h+var_11C]
          fistp   qword ptr [rsp+168h+var_168]
          fldcw   [rsp+168h+var_11A]
          fild    qword ptr [rsp+168h+var_168]
        }
        goto LABEL_161;
      case 2u:
        __asm
        {
          fldz                    ; jumptable 00000000004035CD case 2
          fcomip  st, st(2)
        }
        if ( _CF | _ZF )
        {
          __asm
          {
            fxch    st(1)
            fld     st
            fldcw   [rsp+168h+var_11C]
            fistp   qword ptr [rsp+168h+var_168]
            fldcw   [rsp+168h+var_11A]
            fild    qword ptr [rsp+168h+var_168]
            fxch    st(1)
            fcomip  st, st(1)
          }
          if ( !(_CF | _ZF) )
          {
            __asm { fstp    st }
LABEL_196:
            v111 = v163 + 1;
            __asm { fild    qword ptr [rsp+168h+var_168] }
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
          v112 = v173;
          __asm
          {
            fild    qword ptr [rsp+168h+var_168]
            fxch    st(1)
            fcomip  st, st(1)
            fstp    st
          }
          v113 = -(!(_CF | _ZF) + v173);
          __asm { fild    qword ptr [rsp+168h+var_168] }
        }
LABEL_161:
        __asm { faddp   st(1), st }
        if ( !(_DWORD)v29 )
          break;
        __asm { fld     cs:flt_40C130 }
        v82 = v29 - 1;
        if ( (_DWORD)v29 != 1 )
          goto LABEL_163;
        __asm { fdivp   st(1), st }
        break;
      case 1u:
        __asm
        {
          fxch    st(1)           ; jumptable 00000000004035CD case 1
          fchs
          fld     st
          fldcw   [rsp+168h+var_11C]
          fistp   [rsp+168h+var_128]
          fldcw   [rsp+168h+var_11A]
        }
        goto LABEL_198;
      case 4u:
        __asm
        {
          fldz                    ; jumptable 00000000004035CD case 4
          fcomip  st, st(2)
        }
        if ( _CF | _ZF )
        {
          __asm
          {
            fxch    st(1)
            fadd    cs:flt_40C13C
            fldcw   [rsp+168h+var_11C]
            fistp   qword ptr [rsp+168h+var_168]
            fldcw   [rsp+168h+var_11A]
            fild    qword ptr [rsp+168h+var_168]
          }
        }
        else
        {
          __asm
          {
            fxch    st(1)
            fsub    cs:flt_40C13C
            fldcw   [rsp+168h+var_11C]
            fistp   qword ptr [rsp+168h+var_168]
            fldcw   [rsp+168h+var_11A]
            fild    qword ptr [rsp+168h+var_168]
          }
        }
        goto LABEL_161;
      case 0u:
        __asm
        {
          fxch    st(1)           ; jumptable 00000000004035CD case 0
          fld     st
          fldcw   [rsp+168h+var_11C]
          fistp   qword ptr [rsp+168h+var_168]
          fldcw   [rsp+168h+var_11A]
          fild    qword ptr [rsp+168h+var_168]
          fxch    st(1)
          fcomip  st, st(1)
        }
        if ( _CF | _ZF )
          goto LABEL_161;
        __asm { fstp    st }
        goto LABEL_196;
      default:
        __asm
        {
          fstp    st              ; jumptable 00000000004035CD default case
          fstp    st
          fldz
          fxch    st(1)
        }
LABEL_163:
        __asm { fld     st }
        do
        {
          __asm { fmul    st, st(1) }
          --v82;
        }
        while ( v82 );
        __asm
        {
          fstp    st(1)
          fdivp   st(1), st
        }
        break;
    }
LABEL_166:
    if ( v66 )
    {
      __asm
      {
        fxch    st(1)
        fstp    tbyte ptr [rsp+168h+var_158]
      }
      v94 = "  no scaling, returning (grouped) value: %'.*Lf\n";
      if ( !v64 )
        v94 = "  no scaling, returning value: %.*Lf\n";
      __asm
      {
        fld     st
        fstp    [rsp+178h+var_178]
        fstp    tbyte ptr [rsp+178h+var_168]
      }
      __fprintf_chk(stderr, 1LL, v94, (unsigned int)v29, v24, (unsigned int)v29);
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
    v23 = (const char *)&src;
    *(_DWORD *)v63 = 1716267566;
    v63[4] = 0;
    __asm
    {
      fld     st
      fstp    [rsp+178h+var_178]
      fstp    tbyte ptr [rsp+178h+var_168]
    }
    v6 = *(char **)&v97;
    v17 = (char *)*((_QWORD *)&v97 + 1);
    __asm { fld     tbyte ptr [rsp+168h+var_168] }
    if ( (unsigned int)__snprintf_chk(&src, 128LL, 1LL, 128LL, &v183) <= 0x7F )
    {
      __asm
      {
        fstp    st
        fld     tbyte ptr [rsp+168h+var_158]
      }
      v99 = byte_610338;
      goto LABEL_173;
    }
    __asm { fstp    tbyte ptr [rsp+168h+var_168] }
    v155 = dcgettext(0LL, "failed to prepare value '%Lf' for printing", 5);
    __asm
    {
      fld     tbyte ptr [rsp+168h+var_168]
      fstp    [rsp+178h+var_178]
    }
    error(1, 0, v155, *(_QWORD *)&v156, *((_QWORD *)&v156 + 1));
LABEL_289:
    __asm { fstp    st }
    v29 = 0LL;
    __asm { fld1 }
  }
  if ( (unsigned int)(v20 - 3) <= 1 )
  {
    v171[0] = 1024;
    v166[0] = 4652218415073722368LL;
  }
  else
  {
    v171[0] = 1000;
    v166[0] = 4652007308841189376LL;
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
    v67 = 0;
  }
  else
  {
    __asm { fild    [rsp+168h+var_148] }
    v67 = 0;
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
      ++v67;
    }
    __asm { fstp    st(1) }
  }
  if ( v66 )
  {
    __asm
    {
      fxch    st(1)
      fstp    [rsp+168h+var_138]
      fld     st
      fstp    [rsp+178h+var_178]
      fstp    tbyte ptr [rsp+178h+var_148]
    }
    __fprintf_chk(stderr, 1LL, "  scaled value to %Lf * %0.f ^ %u\n", v67, v24, v65);
    v66 = byte_610338;
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
LABEL_262:
    __asm
    {
      fnstcw  [rsp+168h+var_11A]
      fld     cs:tbyte_40C170
    }
    LODWORD(v68) = v177;
    __asm
    {
      fld     st(1)
      fdiv    st, st(1)
    }
    BYTE1(v68) |= 0xCu;
    v116 = __SETP__(BYTE1(v68), 0);
    v175 = v68;
    __asm
    {
      fldcw   [rsp+168h+var_11C]
      fistp   qword ptr [rsp+168h+var_148]
      fldcw   [rsp+168h+var_11A]
      fild    qword ptr [rsp+168h+var_148]
      fmulp   st(1), st
      fsub    st(1), st
      fld     [rsp+168h+var_158]
    }
    switch ( v62 )
    {
      case 2u:
        v69 = 0;
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
            fistp   qword ptr [rsp+168h+var_148]
            fldcw   [rsp+168h+var_11A]
            fild    qword ptr [rsp+168h+var_148]
            fxch    st(1)
            fcomip  st, st(1)
          }
          if ( !(_CF | _ZF) )
          {
            __asm { fstp    st }
            LODWORD(v68) = v172 + 1;
            v115 = v172 + 1;
            __asm { fild    qword ptr [rsp+168h+var_148] }
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
          v123 = v174;
          __asm
          {
            fild    qword ptr [rsp+168h+var_148]
            fxch    st(1)
            fcomip  st, st(1)
            fstp    st
          }
          v124 = !(_CF | _ZF);
          v68 = -(v124 + v174);
          v125 = -(v124 + v174);
          __asm { fild    qword ptr [rsp+168h+var_148] }
        }
        goto LABEL_208;
      case 1u:
        __asm { fxch    st(2)           ; jumptable 0000000000403D49 case 1 }
        v69 = 0;
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
      case 0u:
        __asm { fxch    st(2)           ; jumptable 0000000000403D49 case 0 }
        v69 = 0;
        goto LABEL_206;
      case 4u:
        v69 = 0;
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
            fistp   qword ptr [rsp+168h+var_148]
            fldcw   [rsp+168h+var_11A]
            fild    qword ptr [rsp+168h+var_148]
          }
        }
        else
        {
          __asm
          {
            fxch    st(2)
            fsub    cs:flt_40C13C
            fldcw   [rsp+168h+var_11C]
            fistp   qword ptr [rsp+168h+var_148]
            fldcw   [rsp+168h+var_11A]
            fild    qword ptr [rsp+168h+var_148]
          }
        }
LABEL_208:
        __asm { faddp   st(1), st }
        v116 = __SETP__(v69, 0);
        if ( !v69 )
          goto LABEL_213;
        __asm { fld     cs:flt_40C130 }
        v116 = __SETP__(v69, 1);
        LODWORD(v68) = v69 - 1;
        if ( v69 != 1 )
          goto LABEL_210;
LABEL_249:
        __asm { fdivp   st(1), st }
        goto LABEL_213;
      case 3u:
        __asm
        {
          fxch    st(2)           ; jumptable 0000000000403D49 case 3
          fldcw   [rsp+168h+var_11C]
          fistp   qword ptr [rsp+168h+var_148]
          fldcw   [rsp+168h+var_11A]
          fild    qword ptr [rsp+168h+var_148]
          faddp   st(1), st
        }
        goto LABEL_213;
      default:
        __asm
        {
          fstp    st(2)           ; jumptable 0000000000403D49 default case
          fstp    st
        }
        break;
    }
    goto LABEL_296;
  }
  v68 = 3 * v67;
  if ( v68 > qword_610260 )
    LODWORD(v68) = qword_610260;
  v69 = v68;
  if ( !(_DWORD)v68 )
    goto LABEL_262;
  LODWORD(v68) = v68 - 1;
  if ( !(_DWORD)v68 )
  {
    __asm { fld     cs:flt_40C130 }
LABEL_273:
    __asm
    {
      fnstcw  [rsp+168h+var_11A]
      fmul    st(1), st
      fld     cs:tbyte_40C170
    }
    LODWORD(v68) = v177;
    __asm { fld     st(2) }
    BYTE1(v68) |= 0xCu;
    v116 = __SETP__(BYTE1(v68), 0);
    __asm { fdiv    st, st(1) }
    v175 = v68;
    __asm
    {
      fldcw   [rsp+168h+var_11C]
      fistp   qword ptr [rsp+168h+var_148]
      fldcw   [rsp+168h+var_11A]
      fild    qword ptr [rsp+168h+var_148]
      fmulp   st(1), st
      fsub    st(2), st
      fld     [rsp+168h+var_158]
    }
    switch ( v62 )
    {
      case 0u:
        __asm
        {
          fstp    st(2)           ; jumptable 0000000000403EBD case 0
          fxch    st(1)
          fxch    st(2)
        }
        v69 = 1;
        goto LABEL_206;
      case 2u:
        __asm
        {
          fstp    st(2)           ; jumptable 0000000000403EBD case 2
          fxch    st(1)
        }
        v69 = 1;
        goto LABEL_236;
      case 4u:
        __asm
        {
          fstp    st(2)           ; jumptable 0000000000403EBD case 4
          fxch    st(1)
        }
        v69 = 1;
        goto LABEL_241;
      case 1u:
        __asm
        {
          fstp    st(2)           ; jumptable 0000000000403EBD case 1
          fxch    st(1)
          fxch    st(2)
        }
        v69 = 1;
        goto LABEL_245;
      case 3u:
        __asm
        {
          fxch    st(3)           ; jumptable 0000000000403EBD case 3
          fldcw   [rsp+168h+var_11C]
          fistp   qword ptr [rsp+168h+var_148]
          fldcw   [rsp+168h+var_11A]
          fild    qword ptr [rsp+168h+var_148]
          faddp   st(1), st
          fxch    st(1)
        }
        goto LABEL_249;
      default:
        __asm
        {
          fstp    st(3)           ; jumptable 0000000000403EBD default case
          fstp    st
          fstp    st
        }
        break;
    }
LABEL_296:
    __asm { fldz }
    goto LABEL_214;
  }
  __asm { fld     cs:flt_40C130 }
  v70 = v68;
  __asm { fld     st }
  do
  {
    __asm { fmul    st, st(1) }
    --v70;
  }
  while ( v70 );
  __asm
  {
    fnstcw  [rsp+168h+var_11A]
    fmulp   st(2), st
    fld     cs:tbyte_40C170
    fld     st(2)
  }
  v175 = v177 | 0xC00;
  __asm
  {
    fdiv    st, st(1)
    fldcw   [rsp+168h+var_11C]
    fistp   qword ptr [rsp+168h+var_148]
    fldcw   [rsp+168h+var_11A]
    fild    qword ptr [rsp+168h+var_148]
    fmulp   st(1), st
    fsub    st(2), st
    fld     [rsp+168h+var_158]
  }
  switch ( v62 )
  {
    case 0u:
      __asm
      {
        fstp    st(2)           ; jumptable 00000000004033ED case 0
        fxch    st(1)
        fxch    st(2)
      }
      goto LABEL_206;
    case 2u:
      __asm
      {
        fstp    st(2)           ; jumptable 00000000004033ED case 2
        fxch    st(1)
      }
      goto LABEL_236;
    case 4u:
      __asm
      {
        fstp    st(2)           ; jumptable 00000000004033ED case 4
        fxch    st(1)
      }
      goto LABEL_241;
    case 1u:
      __asm
      {
        fstp    st(2)           ; jumptable 00000000004033ED case 1
        fxch    st(1)
        fxch    st(2)
      }
      goto LABEL_245;
    case 3u:
      __asm
      {
        fxch    st(3)           ; jumptable 00000000004033ED case 3
        fldcw   [rsp+168h+var_11C]
        fistp   qword ptr [rsp+168h+var_148]
        fldcw   [rsp+168h+var_11A]
        fild    qword ptr [rsp+168h+var_148]
        faddp   st(1), st
        fxch    st(1)
      }
      goto LABEL_210;
    default:
      break;
  }
  while ( 2 )
  {
    __asm
    {
      fstp    st(3)           ; jumptable 00000000004033ED default case
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
      LODWORD(v68) = v68 - 1;
      v116 = __SETP__(v68, 0);
    }
    while ( (_DWORD)v68 );
    __asm
    {
      fstp    st(1)
      fdivp   st(1), st
    }
LABEL_213:
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
        v116 = __SETP__(v67++ + 1, 0);
        __asm { fdivrp  st(1), st }
      }
      __asm
      {
        fldz
        fxch    st(1)
        fucomi  st, st(1)
        fstp    st(1)
      }
      if ( !v116 && _ZF )
      {
        v118 = 0LL;
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
    __asm { fld     cs:flt_40C130 }
    LOBYTE(v68) = v67 != 0;
    __asm
    {
      fcomip  st, st(2)
      fstp    st(1)
    }
    v130 = (unsigned __int8)(_CF | _ZF);
    LOBYTE(v130) = !(_CF | _ZF);
    v118 = (unsigned int)v68 & v130;
LABEL_222:
    if ( v66 )
    {
      __asm
      {
        fxch    st(1)
        fstp    tbyte ptr [rsp+168h+var_148]
        fld     st
        fstp    [rsp+178h+var_178]
        fstp    tbyte ptr [rsp+178h+var_168]
      }
      __fprintf_chk(stderr, 1LL, "  after rounding, value=%Lf * %0.f ^ %u\n", v67, v24, v118);
      __asm
      {
        fld     tbyte ptr [rsp+168h+var_148]
        fld     tbyte ptr [rsp+168h+var_168]
      }
    }
    *(_DWORD *)v63 = 1716267566;
    *((_WORD *)v63 + 2) = 29477;
    v63[6] = 0;
    if ( v67 > 8 )
    {
      __asm { fxch    st(1) }
    }
    else
    {
      __asm { fxch    st(1) }
      v119 = (__int64)*(&off_40BCC0 + v67);
    }
    __asm { fstp    tbyte ptr [rsp+168h+var_158] }
    v23 = (const char *)&src;
    __asm
    {
      fld     st
      fstp    [rsp+188h+var_188]
      fstp    tbyte ptr [rsp+188h+var_168]
    }
    v122 = __snprintf_chk(&src, 127LL, 1LL, 128LL, &v183);
    __asm { fld     tbyte ptr [rsp+188h+var_158] }
    if ( (unsigned int)v122 > 0x7E )
    {
      __asm { fstp    st }
      v157 = dcgettext(0LL, "failed to prepare value '%Lf' for printing", 5);
      __asm
      {
        fld     tbyte ptr [rsp+168h+var_168]
        fstp    [rsp+178h+var_178]
      }
      error(1, 0, v157, *(_QWORD *)&v158, *((_QWORD *)&v158 + 1));
      continue;
    }
    break;
  }
  if ( v67 && v20 == 4 )
  {
    __asm { fstp    tbyte ptr [rsp+168h+var_168] }
    __strncat_chk(&src, "i", 127LL - v122, 128LL);
    __asm { fld     tbyte ptr [rsp+168h+var_168] }
  }
  v99 = byte_610338;
  if ( byte_610338 )
  {
    __asm { fstp    tbyte ptr [rsp+168h+var_168] }
    LODWORD(v144) = sub_407590(&src);
    __fprintf_chk(stderr, 1LL, "  returning value: %s\n", v144, v145, v146);
    v99 = byte_610338;
    __asm { fld     tbyte ptr [rsp+168h+var_168] }
LABEL_173:
    v100 = ::s1;
    if ( ::s1 )
      goto LABEL_174;
    goto LABEL_181;
  }
  v100 = ::s1;
  if ( !::s1 )
  {
    __asm { fstp    st }
    goto LABEL_184;
  }
LABEL_174:
  v101 = v23;
  do
  {
    v102 = *(_DWORD *)v101;
    v101 += 4;
    v103 = ~v102 & (v102 - 16843009) & 0x80808080;
  }
  while ( !v103 );
  __asm { fstp    tbyte ptr [rsp+168h+var_168] }
  if ( !((unsigned __int16)~(_WORD)v102 & (unsigned __int16)(v102 - 257) & 0x8080) )
    LOBYTE(v103) = v103 >> 16;
  if ( !((unsigned __int16)~(_WORD)v102 & (unsigned __int16)(v102 - 257) & 0x8080) )
    v101 += 2;
  __strncat_chk(v23, v100, v23 - &v101[-__CFADD__((_BYTE)v103, (_BYTE)v103) - 3] + 127, 128LL);
  __asm { fld     tbyte ptr [rsp+168h+var_168] }
LABEL_181:
  if ( v99 )
  {
    __asm { fstp    tbyte ptr [rsp+168h+var_168] }
    LODWORD(v105) = sub_407590(v23);
    __asm
    {
      fld     tbyte ptr [rsp+168h+var_168]
      fstp    [rsp+178h+var_178]
    }
    __fprintf_chk(stderr, 1LL, "formatting output:\n  value: %Lf\n  humanized: %s\n", v105, v107, v108);
  }
  else
  {
    __asm { fstp    st }
  }
LABEL_184:
  v109 = strlen(v23);
  if ( qword_610380 && qword_610380 > v109 )
  {
    *(_QWORD *)&v183 = qword_610380;
    sub_405530(v23, dest, qword_610388, &v183, (unsigned int)dword_610258, 2LL);
    if ( byte_610338 )
    {
      LODWORD(v136) = sub_407590(dest);
      __fprintf_chk(stderr, 1LL, "  After padding: %s\n", v136, v137, v138);
    }
  }
  else
  {
    if ( v109 + 1 >= qword_610388 )
      sub_402BD0(v109 + 1);
    strcpy(dest, v23);
  }
  v110 = stdout;
  if ( qword_610368 )
  {
    fputs_unlocked(qword_610368, stdout);
    v110 = stdout;
  }
  v8 = 1;
  fputs_unlocked(dest, v110);
  if ( qword_610360 )
    fputs_unlocked(qword_610360, stdout);
  return (unsigned int)v8;
}

__int64 __fastcall sub_4041A0(char *s, char a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r15@1
  unsigned __int64 v7; // r14@1
  signed int v8; // er12@1
  int v9; // eax@1
  char v10; // bp@2
  char *v11; // rbx@5
  char v12; // dl@11
  char *v13; // rax@11
  const unsigned __int16 *v15; // rax@15
  char v16; // si@23
  bool v17; // zf@23
  char v18; // [sp+Ch] [bp-3Ch]@1

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
      a3 = (char *)(unsigned __int8)v10;
      if ( !(v15[(unsigned __int8)v10] & 1) && v10 != 10 )
        break;
      v10 = *++v11;
      if ( !*v11 )
        goto LABEL_8;
    }
    a3 = (char *)(unsigned __int8)*v11;
    if ( !(_BYTE)a3 )
      goto LABEL_8;
    while ( !(v15[(unsigned __int8)a3] & 1) && (_BYTE)a3 != 10 )
    {
      a3 = (char *)(unsigned __int8)*++v11;
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
    v17 = (unsigned __int8)sub_402C00(v6, v7, (__int64)a3, a4, a5, a6) == 0;
    v9 = dword_610254;
    if ( v17 )
      v8 = 0;
    a3 = stdout->_IO_write_ptr;
    if ( dword_610254 != 128 )
      v16 = dword_610254;
    if ( a3 >= stdout->_IO_write_end )
    {
      __overflow(stdout, (unsigned __int8)v16);
      v9 = dword_610254;
    }
    else
    {
      a5 = (__int64)(a3 + 1);
      stdout->_IO_write_ptr = a3 + 1;
      *a3 = v16;
    }
    v6 = v11 + 1;
  }
  a3 = (char *)(unsigned int)v10;
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
      a3 = (char *)(unsigned int)*++v11;
      if ( !*v11 )
        break;
      if ( (_DWORD)a3 == v9 )
        goto LABEL_23;
    }
  }
LABEL_8:
  if ( !(unsigned __int8)sub_402C00(v6, v7, (__int64)a3, a4, a5, a6) )
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
  return (unsigned int)v8;
}

void __fastcall __noreturn sub_404360(int status)
{
  int v1; // ebp@1
  __int64 v2; // rbx@1
  char *v3; // rax@2
  __int64 v4; // r8@2
  __int64 v5; // r9@2
  char *v6; // rax@4
  FILE *v7; // rbx@4
  char *v8; // rax@4
  FILE *v9; // rbx@4
  char *v10; // rax@4
  FILE *v11; // rbx@4
  char *v12; // rax@4
  FILE *v13; // rbx@4
  char *v14; // rax@4
  FILE *v15; // rbx@4
  char *v16; // rax@4
  FILE *v17; // rbx@4
  char *v18; // rax@4
  FILE *v19; // rbx@4
  char *v20; // rax@4
  FILE *v21; // rbx@4
  char *v22; // rax@4
  FILE *v23; // rbx@4
  char *v24; // rax@4
  FILE *v25; // rbx@4
  char *v26; // rax@4
  FILE *v27; // rbx@4
  char *v28; // rax@4
  FILE *v29; // rbx@4
  char *v30; // rax@4
  FILE *v31; // rbx@4
  char *v32; // rax@4
  FILE *v33; // rbx@4
  char *v34; // rax@4
  FILE *v35; // rbx@4
  char *v36; // rax@4
  FILE *v37; // rbx@4
  char *v38; // rax@4
  FILE *v39; // rbx@4
  char *v40; // rax@4
  FILE *v41; // rbx@4
  char *v42; // rax@4
  FILE *v43; // rbx@4
  char *v44; // rax@4
  FILE *v45; // rbx@4
  char *v46; // rax@4
  FILE *v47; // rbx@4
  char *v48; // rax@4
  FILE *v49; // rbx@4
  char *v50; // rax@4
  FILE *v51; // rbx@4
  char *v52; // rax@4
  FILE *v53; // rbx@4
  char *v54; // rax@4
  FILE *v55; // rbx@4
  char *v56; // rax@4
  FILE *v57; // rbx@4
  char *v58; // rax@4
  FILE *v59; // rbx@4
  char *v60; // rax@4
  __int64 v61; // rbx@4
  char *v62; // rax@4
  __int64 v63; // rbx@4
  char *v64; // rax@4
  __int64 *v65; // rax@4
  _BYTE *v66; // rdi@5
  bool v67; // cf@5
  bool v68; // zf@5
  const char *v69; // rsi@6
  signed __int64 v70; // rcx@6
  const char *v71; // rbx@10
  char *v72; // rax@11
  char *v73; // rax@11
  char *v74; // rax@13
  char *v75; // rax@14
  char *v76; // rax@15
  char *v77; // rax@15
  char *v78; // rax@17
  char *v79; // rax@19
  const char *v80; // [sp+0h] [bp-88h]@4
  const char *v81; // [sp+8h] [bp-80h]@4
  const char *v82; // [sp+10h] [bp-78h]@4
  const char *v83; // [sp+18h] [bp-70h]@4
  const char *v84; // [sp+20h] [bp-68h]@4
  const char *v85; // [sp+28h] [bp-60h]@4
  const char *v86; // [sp+30h] [bp-58h]@4
  const char *v87; // [sp+38h] [bp-50h]@4
  const char *v88; // [sp+40h] [bp-48h]@4
  const char *v89; // [sp+48h] [bp-40h]@4
  const char *v90; // [sp+50h] [bp-38h]@4
  const char *v91; // [sp+58h] [bp-30h]@4
  __int64 v92; // [sp+60h] [bp-28h]@4
  __int64 v93; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_6103D8;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2, v4, v5);
    goto LABEL_3;
  }
  v6 = dcgettext(0LL, "Usage: %s [OPTION]... [NUMBER]...\n", 5);
  __printf_chk(1LL, v6, v2);
  v7 = stdout;
  v8 = dcgettext(0LL, "Reformat NUMBER(s), or the numbers from standard input if none are specified.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(0LL, "      --debug          print warnings about invalid input\n", 5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "  -d, --delimiter=X    use X instead of whitespace for field delimiter\n", 5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "      --field=FIELDS   replace the numbers in these input fields (default=1)\n"
          "                         see FIELDS below\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "      --format=FORMAT  use printf style floating-point FORMAT;\n"
          "                         see FORMAT below for details\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "      --from=UNIT      auto-scale input numbers to UNITs; default is 'none';\n"
          "                         see UNIT below\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(0LL, "      --from-unit=N    specify the input unit size (instead of the default 1)\n", 5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "      --grouping       use locale-defined grouping of digits, e.g. 1,000,000\n"
          "                         (which means it has no effect in the C/POSIX locale)\n",
          5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(
          0LL,
          "      --header[=N]     print (without converting) the first N header lines;\n"
          "                         N defaults to 1 if not specified\n",
          5);
  fputs_unlocked(v26, v25);
  v27 = stdout;
  v28 = dcgettext(
          0LL,
          "      --invalid=MODE   failure mode for invalid numbers: MODE can be:\n"
          "                         abort (default), fail, warn, ignore\n",
          5);
  fputs_unlocked(v28, v27);
  v29 = stdout;
  v30 = dcgettext(
          0LL,
          "      --padding=N      pad the output to N characters; positive N will\n"
          "                         right-align; negative N will left-align;\n"
          "                         padding is ignored if the output is wider than N;\n"
          "                         the default is to automatically pad if a whitespace\n"
          "                         is found\n",
          5);
  fputs_unlocked(v30, v29);
  v31 = stdout;
  v32 = dcgettext(
          0LL,
          "      --round=METHOD   use METHOD for rounding when scaling; METHOD can be:\n"
          "                         up, down, from-zero (default), towards-zero, nearest\n",
          5);
  fputs_unlocked(v32, v31);
  v33 = stdout;
  v34 = dcgettext(
          0LL,
          "      --suffix=SUFFIX  add SUFFIX to output numbers, and accept optional\n"
          "                         SUFFIX in input numbers\n",
          5);
  fputs_unlocked(v34, v33);
  v35 = stdout;
  v36 = dcgettext(0LL, "      --to=UNIT        auto-scale output numbers to UNITs; see UNIT below\n", 5);
  fputs_unlocked(v36, v35);
  v37 = stdout;
  v38 = dcgettext(0LL, "      --to-unit=N      the output unit size (instead of the default 1)\n", 5);
  fputs_unlocked(v38, v37);
  v39 = stdout;
  v40 = dcgettext(0LL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5);
  fputs_unlocked(v40, v39);
  v41 = stdout;
  v42 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v42, v41);
  v43 = stdout;
  v44 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v44, v43);
  v45 = stdout;
  v46 = dcgettext(0LL, "\nUNIT options:\n", 5);
  fputs_unlocked(v46, v45);
  v47 = stdout;
  v48 = dcgettext(0LL, "  none       no auto-scaling is done; suffixes will trigger an error\n", 5);
  fputs_unlocked(v48, v47);
  v49 = stdout;
  v50 = dcgettext(
          0LL,
          "  auto       accept optional single/two letter suffix:\n"
          "               1K = 1000,\n"
          "               1Ki = 1024,\n"
          "               1M = 1000000,\n"
          "               1Mi = 1048576,\n",
          5);
  fputs_unlocked(v50, v49);
  v51 = stdout;
  v52 = dcgettext(
          0LL,
          "  si         accept optional single letter suffix:\n"
          "               1K = 1000,\n"
          "               1M = 1000000,\n"
          "               ...\n",
          5);
  fputs_unlocked(v52, v51);
  v53 = stdout;
  v54 = dcgettext(
          0LL,
          "  iec        accept optional single letter suffix:\n"
          "               1K = 1024,\n"
          "               1M = 1048576,\n"
          "               ...\n",
          5);
  fputs_unlocked(v54, v53);
  v55 = stdout;
  v56 = dcgettext(
          0LL,
          "  iec-i      accept optional two-letter suffix:\n"
          "               1Ki = 1024,\n"
          "               1Mi = 1048576,\n"
          "               ...\n",
          5);
  fputs_unlocked(v56, v55);
  v57 = stdout;
  v58 = dcgettext(
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
  fputs_unlocked(v58, v57);
  v59 = stdout;
  v60 = dcgettext(
          0LL,
          "\n"
          "FORMAT must be suitable for printing one floating-point argument '%f'.\n"
          "Optional quote (%'f) will enable --grouping (if supported by current locale).\n"
          "Optional width value (%10f) will pad output. Optional zero (%010f) width\n"
          "will zero pad the number. Optional negative values (%-10f) will left align.\n"
          "Optional precision (%.1f) will override the input determined precision.\n",
          5);
  fputs_unlocked(v60, v59);
  v61 = qword_6103D8;
  v62 = dcgettext(
          0LL,
          "\n"
          "Exit status is 0 if all input numbers were successfully converted.\n"
          "By default, %s will stop at the first conversion error with exit status 2.\n"
          "With --invalid='fail' a warning is printed for each conversion error\n"
          "and the exit status is 2.  With --invalid='warn' each conversion error is\n"
          "diagnosed, but the exit status is 0.  With --invalid='ignore' conversion\n"
          "errors are not diagnosed and the exit status is 0.\n",
          5);
  __printf_chk(1LL, v62, v61);
  v63 = qword_6103D8;
  v64 = dcgettext(
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
  __printf_chk(1LL, v64, v63);
  v80 = "[";
  v81 = "test invocation";
  v82 = "coreutils";
  v83 = "Multi-call invocation";
  v84 = "sha224sum";
  v85 = "sha2 utilities";
  v86 = "sha256sum";
  v87 = "sha2 utilities";
  v88 = "sha384sum";
  v89 = "sha2 utilities";
  v90 = "sha512sum";
  v91 = "sha2 utilities";
  v92 = 0LL;
  v93 = 0LL;
  v65 = (__int64 *)&v80;
  do
  {
    v65 += 2;
    v66 = (_BYTE *)*v65;
    v67 = 0;
    v68 = *v65 == 0;
    if ( !*v65 )
      break;
    v69 = "numfmt";
    v70 = 7LL;
    do
    {
      if ( !v70 )
        break;
      v67 = (const unsigned __int8)*v69 < *v66;
      v68 = *v69++ == *v66++;
      --v70;
    }
    while ( v68 );
  }
  while ( (!v67 && !v68) != v67 );
  v71 = (const char *)v65[1];
  if ( v71 )
  {
    v72 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v72, &unk_40A199);
    v73 = setlocale(5, 0LL);
    if ( !v73 || !strncmp(v73, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v76 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v76, &unk_40A199);
    v77 = setlocale(5, 0LL);
    if ( !v77 || !strncmp(v77, "en_", 3uLL) )
    {
      v71 = "numfmt";
      v78 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v78, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v71 = "numfmt";
  }
  v79 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v79, "numfmt");
LABEL_13:
  v74 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v74, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v75 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v75, v71);
LABEL_3:
  exit(v1);
}

signed __int64 __fastcall compar(const void *a1, const void *a2)
{
  signed __int64 result; // rax@1

  result = 0xFFFFFFFFLL;
  if ( *(_DWORD *)a1 >= *(_DWORD *)a2 )
    result = *(_DWORD *)a1 > *(_DWORD *)a2;
  return result;
}

signed __int64 __fastcall sub_404A30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  size_t v3; // rdx@1
  unsigned __int64 v4; // rcx@1
  void *v5; // rax@1
  signed __int64 result; // rax@2

  v2 = a2;
  v3 = nmemb;
  v4 = qword_6103C0;
  v5 = ptr;
  if ( nmemb == qword_6103C0 )
  {
    if ( ptr )
    {
      if ( (unsigned __int64)qword_6103C0 <= 0x555555555555554LL )
      {
        v4 = qword_6103C0 + ((unsigned __int64)qword_6103C0 >> 1) + 1;
LABEL_6:
        qword_6103C0 = v4;
        LODWORD(v5) = sub_407BB0(ptr);
        v3 = nmemb;
        ptr = v5;
        goto LABEL_2;
      }
    }
    else
    {
      if ( !qword_6103C0 )
      {
        v4 = 8LL;
        goto LABEL_6;
      }
      a2 = 16 * qword_6103C0;
      if ( !(qword_6103C0 & 0x800000000000000LL) && (unsigned __int64)qword_6103C0 >> 60 == 0 )
        goto LABEL_6;
    }
    sub_407DA0(a1, a2);
  }
LABEL_2:
  result = (signed __int64)v5 + 16 * v3;
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = v2;
  nmemb = v3 + 1;
  return result;
}

size_t __fastcall sub_404B00(char *a1, char a2)
{
  char *v2; // r15@1
  bool v3; // cf@1
  bool v4; // zf@1
  char *v5; // rdi@2
  signed __int64 v6; // rcx@2
  char *v7; // rsi@2
  unsigned __int64 v8; // rdi@6
  char v9; // bl@6
  char v10; // bp@7
  char v11; // r12@7
  char v12; // r14@7
  char v13; // r13@20
  size_t v14; // r15@28
  size_t v15; // rbx@28
  void *v16; // r14@28
  signed __int64 v17; // rbp@31
  signed __int64 v18; // r12@31
  char *v19; // rdi@31
  char *v20; // rdx@31
  unsigned __int64 v21; // rax@31
  void *v22; // rax@38
  size_t result; // rax@38
  unsigned __int64 v24; // rax@51
  unsigned __int64 v25; // rax@56
  char *v26; // rbp@58
  __int64 v27; // rdi@59
  __int64 v28; // rax@62
  const char *v29; // rsi@65
  char *v30; // rax@66
  char *v31; // rbx@69
  size_t v32; // rax@69
  void *v33; // rax@69
  void *v34; // rbx@69
  __int64 v35; // rax@69
  __int64 v36; // rbp@69
  char *v37; // rax@70
  __int64 v38; // rax@85
  __int64 v39; // rbx@85
  char *v40; // rax@86
  unsigned __int64 v41; // [sp+8h] [bp-50h]@7
  int v42; // [sp+18h] [bp-40h]@1
  char v43; // [sp+1Ch] [bp-3Ch]@1

  v2 = a1;
  v3 = 0;
  v4 = (a2 & 1) == 0;
  v43 = a2;
  v42 = a2 & 1;
  if ( !(a2 & 1) )
    goto LABEL_93;
  v5 = "-";
  v6 = 2LL;
  v7 = v2;
  do
  {
    if ( !v6 )
      break;
    v3 = (unsigned __int8)*v7 < (unsigned __int8)*v5;
    v4 = *v7++ == *v5++;
    --v6;
  }
  while ( v4 );
  if ( (!v3 && !v4) == v3 )
  {
    ++v2;
    v8 = 1LL;
    v9 = 1;
  }
  else
  {
LABEL_93:
    v8 = 0LL;
    v9 = 0;
  }
  v10 = v9;
  v11 = 0;
  v12 = 0;
  v41 = 1LL;
  while ( 1 )
  {
    v13 = *v2;
    if ( *v2 == 45 )
    {
      if ( !v10 )
      {
        v11 = v9 & (v8 == 0);
        if ( !((unsigned __int8)v9 & (v8 == 0)) )
        {
          if ( v9 )
          {
            v41 = v8;
            v10 = v9;
            v8 = 0LL;
          }
          else
          {
            v11 = 0;
            v8 = 0LL;
            v10 = 1;
            v41 = 1LL;
          }
          goto LABEL_19;
        }
        if ( v43 & 4 )
        {
          v30 = dcgettext(0LL, "byte/character positions are numbered from 1", 5);
          goto LABEL_67;
        }
LABEL_78:
        v30 = dcgettext(0LL, "fields are numbered from 1", 5);
        goto LABEL_67;
      }
      if ( v43 & 4 )
        v30 = dcgettext(0LL, "invalid byte or character range", 5);
      else
        v30 = dcgettext(0LL, "invalid field range", 5);
LABEL_67:
      error(0, 0, v30);
      sub_404360(1);
    }
    if ( v13 == 44 || (*__ctype_b_loc())[(unsigned __int8)v13] & 1 || !v13 )
      break;
    if ( (unsigned int)(v13 - 48) > 9 )
    {
      LODWORD(v38) = sub_407590(v2);
      v39 = v38;
      if ( v43 & 4 )
        v40 = dcgettext(0LL, "invalid byte/character position %s", 5);
      else
        v40 = dcgettext(0LL, "invalid field value %s", 5);
      error(0, 0, v40, v39);
      sub_404360(1);
    }
    if ( !v11 || !qword_6103B8 )
      qword_6103B8 = v2;
    if ( !v10 )
      v9 = 1;
    if ( v10 )
      v12 = v10;
    if ( v8 > 0x1999999999999999LL || (v24 = v13 - 48 + 10 * v8, v24 < v8) || v24 == -1LL )
    {
      v31 = qword_6103B8;
      v32 = strspn(qword_6103B8, "0123456789");
      LODWORD(v33) = sub_407DE0(v31, v32);
      v34 = v33;
      LODWORD(v35) = sub_407590(v33);
      v36 = v35;
      if ( v43 & 4 )
        v37 = dcgettext(0LL, "byte/character offset %s is too large", 5);
      else
        v37 = dcgettext(0LL, "field number %s is too large", 5);
      error(0, 0, v37, v36);
      free(v34);
      sub_404360(1);
    }
    v8 = v13 - 48 + 10 * v8;
    v11 = 1;
LABEL_19:
    ++v2;
  }
  if ( v10 )
  {
    if ( v9 )
    {
      if ( !v12 )
        goto LABEL_16;
    }
    else if ( !v12 )
    {
      if ( !v42 )
      {
        v29 = "invalid range with no endpoint: -";
        goto LABEL_66;
      }
      v41 = 1LL;
LABEL_16:
      sub_404A30(v41, -1LL);
LABEL_17:
      if ( !*v2 )
        goto LABEL_27;
LABEL_18:
      v8 = 0LL;
      v11 = 0;
      v10 = 0;
      v12 = 0;
      v9 = 0;
      goto LABEL_19;
    }
    if ( v41 > v8 )
    {
      v29 = "invalid decreasing range";
      goto LABEL_66;
    }
    sub_404A30(v41, v8);
    goto LABEL_17;
  }
  if ( !v8 )
  {
    if ( v43 & 4 )
    {
      v30 = dcgettext(0LL, "byte/character positions are numbered from 1", 5);
      goto LABEL_67;
    }
    goto LABEL_78;
  }
  sub_404A30(v8, v8);
  if ( *v2 )
    goto LABEL_18;
LABEL_27:
  if ( !nmemb )
  {
    if ( v43 & 4 )
    {
      v30 = dcgettext(0LL, "missing list of byte/character positions", 5);
    }
    else
    {
      v29 = "missing list of fields";
LABEL_66:
      v30 = dcgettext(0LL, v29, 5);
    }
    goto LABEL_67;
  }
  v14 = 0LL;
  qsort(ptr, nmemb, 0x10uLL, (__compar_fn_t)compar);
  v15 = nmemb;
  v16 = ptr;
  while ( v14 < v15 )
  {
LABEL_30:
    if ( ++v14 < v15 )
    {
      v17 = 16 * v14;
      v18 = 16 * v14 - 16;
      v19 = (char *)v16 + 16 * v14;
      v20 = (char *)v16 + v18;
      v21 = *(_QWORD *)((char *)v16 + v18 + 8);
      if ( v21 >= *(_QWORD *)v19 )
      {
        while ( 1 )
        {
          if ( *((_QWORD *)v19 + 1) >= v21 )
            v21 = *((_QWORD *)v19 + 1);
          *((_QWORD *)v20 + 1) = v21;
          memmove(v19, (char *)v16 + v17 + 16, 16 * (v15 - v14) - 16);
          v16 = ptr;
          v15 = nmemb - 1;
          nmemb = v15;
          if ( v15 <= v14 )
            break;
          v20 = (char *)ptr + v18;
          v19 = (char *)ptr + v17;
          v21 = *(_QWORD *)((char *)ptr + v18 + 8);
          if ( *(_QWORD *)((char *)ptr + v17) > v21 )
          {
            if ( v14 < v15 )
              goto LABEL_30;
            goto LABEL_37;
          }
        }
      }
    }
  }
LABEL_37:
  if ( v43 & 2 )
  {
    ptr = 0LL;
    v25 = *(_QWORD *)v16;
    nmemb = 0LL;
    qword_6103C0 = 0LL;
    if ( v25 > 1 )
      sub_404A30(1LL, v25 - 1);
    v26 = (char *)v16 + 16;
    if ( v15 > 1 )
    {
      do
      {
        v27 = *((_QWORD *)v26 - 1) + 1LL;
        if ( v27 != *(_QWORD *)v26 )
          sub_404A30(v27, *(_QWORD *)v26 - 1LL);
        v26 += 16;
      }
      while ( (char *)v16 + 16 * v15 != v26 );
    }
    v28 = *((_QWORD *)v16 + 2 * v15 - 1);
    if ( v28 != -1 )
      sub_404A30(v28 + 1, -1LL);
    free(v16);
    v15 = nmemb;
    v16 = ptr;
  }
  nmemb = v15 + 1;
  LODWORD(v22) = sub_407BB0(v16);
  ptr = v22;
  result = (size_t)v22 + 16 * nmemb - 16;
  *(_QWORD *)(result + 8) = -1LL;
  *(_QWORD *)result = -1LL;
  return result;
}

void __noreturn sub_4050E0()
{
  sub_404360(1);
}

signed __int64 __fastcall sub_4050F0(const char *a1, const char **a2, char *a3, size_t a4)
{
  size_t v4; // r13@1
  char *v5; // rbp@1
  size_t v6; // rax@1
  const char *v7; // r14@1
  size_t v8; // r12@2
  signed __int64 v9; // rbx@2
  bool v10; // zf@4
  char v11; // al@4
  signed __int64 v12; // rax@12
  signed __int64 v14; // [sp+0h] [bp-58h]@1
  char v15; // [sp+17h] [bp-41h]@2
  char *v16; // [sp+18h] [bp-40h]@1

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
  char *v3; // rbx@2
  __int64 v4; // rax@3
  __int64 v5; // rbp@3
  __int64 v6; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  LODWORD(v4) = sub_407570(1LL);
  v5 = v4;
  LODWORD(v6) = sub_407260(0LL, 8LL, a2);
  error(0, 0, v3, v6, v5);
}

int __fastcall sub_405290(__int64 *a1, char *a2, size_t a3)
{
  char *v3; // r14@1
  size_t v4; // r13@1
  char *v5; // rbp@1
  FILE *v6; // rbx@1
  char *v7; // rax@1
  FILE *v8; // rsi@1
  __int64 v9; // rbx@1
  __int64 i; // r12@1
  __int64 v11; // rax@3
  __int64 v12; // r8@3
  __int64 v13; // r9@3
  __int64 v14; // rax@6
  __int64 v15; // r8@6
  __int64 v16; // r9@6
  char *v17; // rax@7

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
      LODWORD(v11) = sub_407590(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11, v12, v13);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    LODWORD(v14) = sub_407590(i);
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
  return (unsigned __int64)v17;
}

__int64 __fastcall sub_4053B0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(__int64 *, char *))
{
  size_t v6; // r15@1
  void (__fastcall *v7)(__int64 *, char *); // r13@1
  char *v8; // rbp@1
  __int64 *v9; // rbx@1
  __int64 result; // rax@1

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (__int64 *)a3;
  result = sub_4050F0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_405210(a1, (__int64)a2, result);
    sub_405290(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

__int64 sub_405490()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_4073E0(qword_6103D0, "write error");
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

signed __int64 __fastcall sub_405530(const char *a1, char *a2, __int64 a3, size_t *a4, int a5, char a6)
{
  size_t *v6; // r13@1
  char v7; // bp@1
  char *v8; // rbx@1
  size_t v9; // rax@1
  size_t v10; // r14@1
  size_t v11; // r15@2
  char *v12; // r12@2
  size_t v13; // rdx@3
  unsigned __int64 v14; // rax@4
  int v15; // esi@5
  unsigned __int64 v16; // r13@6
  size_t v17; // r15@8
  unsigned __int64 v18; // rbp@13
  unsigned __int64 v19; // rdi@13
  size_t v20; // rdx@18
  _BYTE *v21; // rax@20
  _BYTE *v22; // rdx@20
  signed __int64 v23; // r13@26
  size_t v25; // r12@33
  size_t v26; // rax@34
  size_t v27; // r15@37
  wint_t v28; // edi@39
  signed __int64 v29; // rdx@39
  char *v30; // rax@45
  wchar_t *v31; // r14@47
  wchar_t v32; // edi@47
  signed __int64 v33; // rax@49
  unsigned __int64 v34; // rax@50
  wchar_t *v35; // [sp+0h] [bp-68h]@2
  __int64 v36; // [sp+8h] [bp-60h]@1
  int v37; // [sp+14h] [bp-54h]@1
  void *src; // [sp+18h] [bp-50h]@1
  void *srca; // [sp+18h] [bp-50h]@47
  signed __int64 size; // [sp+20h] [bp-48h]@37
  char sizea; // [sp+20h] [bp-48h]@40
  signed __int64 sizeb; // [sp+20h] [bp-48h]@45
  signed __int64 v43; // [sp+28h] [bp-40h]@41

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
    v35 = 0LL;
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
  v35 = (wchar_t *)malloc(size * 4);
  if ( !v35 )
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
        v19 = (unsigned __int64)v8;
        if ( (unsigned __int64)v8 < v18 && v14 )
        {
          do
            *(_BYTE *)(++v19 - 1) = 32;
          while ( &v8[v14] - v19 && v18 > v19 );
        }
        *(_BYTE *)v19 = 0;
        v20 = v18 - v19;
        if ( v18 - v19 > v10 )
          v20 = v10;
        v21 = mempcpy((void *)v19, src, v20);
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
  if ( !mbstowcs(v35, a1, v27) )
  {
    v11 = v10;
    v12 = 0LL;
    goto LABEL_3;
  }
  v35[size - 1] = 0;
  v28 = *v35;
  v29 = (signed __int64)v35;
  if ( *v35 )
  {
    sizea = 0;
    do
    {
      v43 = v29;
      if ( !iswprint(v28) )
      {
        *(_DWORD *)v43 = 65533;
        sizea = 1;
      }
      v29 = v43 + 4;
      v28 = *(_DWORD *)(v43 + 4);
    }
    while ( *(_DWORD *)(v43 + 4) );
    v11 = wcswidth(v35, v27);
    if ( sizea )
    {
      sizeb = wcstombs(0LL, v35, 0LL) + 1;
      v30 = (char *)malloc(sizeb);
      goto LABEL_46;
    }
  }
  else
  {
    v11 = wcswidth(v35, v27);
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
    v31 = v35;
    v32 = *v35;
    srca = (void *)*v6;
    if ( *v35 )
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
          v33 = (signed int)v33;
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
      v31 = v35;
      v11 = 0LL;
    }
    *v31 = 0;
    src = v12;
    v10 = wcstombs(v12, v35, sizeb);
    goto LABEL_3;
  }
  if ( v7 & 1 )
    goto LABEL_3;
  v23 = -1LL;
LABEL_27:
  free(v35);
LABEL_28:
  free(v12);
  return v23;
}

char *__fastcall sub_405970(const char *a1)
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
  qword_6103D8 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_405A10(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_4098A0(0LL);
  if ( (*(_BYTE *)v4 & 0xDF) == 85 )
  {
    if ( (*(_BYTE *)(v4 + 1) & 0xDF) == 84
      && (*(_BYTE *)(v4 + 2) & 0xDF) == 70
      && *(_BYTE *)(v4 + 3) == 45
      && *(_BYTE *)(v4 + 4) == 56
      && !*(_BYTE *)(v4 + 5) )
    {
      v5 = *v2 == 96;
      v2 = "â€˜";
      if ( !v5 )
        v2 = "â€™";
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
    v2 = "¡\ae";
    if ( !v5 )
      v2 = "¡¯";
    return (char *)v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_405B10(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_405A10("`", v11);
        v58 = sub_405A10("'", v11);
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
            return sub_405B10((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_405B10((__int64)v9, v79, s);
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
                return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
          return sub_405B10((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_405B10((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_409760((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_405B10((__int64)v9, v10, s);
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
      return sub_405B10((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_405B10(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_405A10("`", v11);
        v58 = sub_405A10("'", v11);
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
            return sub_405B10((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_405B10((__int64)v9, v79, s);
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
                return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
            return sub_405B10((__int64)v9, v10, s);
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
              return sub_405B10((__int64)v9, v10, s);
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
          return sub_405B10((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_405B10((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_409760((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_405B10((__int64)v9, v10, s);
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
      return sub_405B10((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_406D40(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  __int128 *v9; // rax@5
  signed __int64 v10; // rbx@7
  _BYTE *v11; // r12@7
  unsigned __int64 v12; // ST30_8@7
  unsigned __int64 v13; // rax@7
  unsigned __int64 v14; // rsi@8
  __int64 v15; // ST30_8@9
  _BYTE *v16; // rax@10
  int v17; // er8@10
  __int128 *v19; // rax@12
  char *v20; // [sp+8h] [bp-50h]@1
  int v21; // [sp+18h] [bp-40h]@1
  int v22; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v20 = a2;
  v6 = __errno_location();
  v7 = off_6102D8;
  v8 = v6;
  v21 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_6102F0 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_407DA0(a1, a2);
    if ( off_6102D8 == &xmmword_6102E0 )
    {
      LODWORD(v19) = sub_407BB0(0LL);
      v7 = v19;
      off_6102D8 = v19;
      *v19 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      LODWORD(v9) = sub_407BB0(off_6102D8);
      off_6102D8 = v9;
      v7 = v9;
    }
    memset(&v7[dword_6102F0], 0, 16LL * ((signed int)a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v10 = (signed __int64)&v7[(signed int)a1];
  v11 = *(_BYTE **)(v10 + 8);
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v12 = *(_QWORD *)v10;
  v13 = sub_405B10(v11, *(_QWORD *)v10, a2, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v12 <= v13 )
  {
    v14 = v13 + 1;
    *(_QWORD *)v10 = v13 + 1;
    if ( (_UNKNOWN *)v11 != &unk_6103E0 )
    {
      v15 = v13 + 1;
      free(v11);
      v14 = v15;
    }
    LODWORD(v16) = sub_407B50(v14);
    v17 = *(_DWORD *)v5;
    *(_QWORD *)(v10 + 8) = v16;
    v11 = v16;
    sub_405B10(v16, v14, v20, v4, v17, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v21;
  return v11;
}

_BYTE *__fastcall sub_406D40(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  __int128 *v9; // rax@5
  signed __int64 v10; // rbx@7
  _BYTE *v11; // r12@7
  unsigned __int64 v12; // ST30_8@7
  unsigned __int64 v13; // rax@7
  unsigned __int64 v14; // rsi@8
  __int64 v15; // ST30_8@9
  _BYTE *v16; // rax@10
  int v17; // er8@10
  __int128 *v19; // rax@12
  char *v20; // [sp+8h] [bp-50h]@1
  int v21; // [sp+18h] [bp-40h]@1
  int v22; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v20 = a2;
  v6 = __errno_location();
  v7 = off_6102D8;
  v8 = v6;
  v21 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_6102F0 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_407DA0(a1, a2);
    if ( off_6102D8 == &xmmword_6102E0 )
    {
      LODWORD(v19) = sub_407BB0(0LL);
      v7 = v19;
      off_6102D8 = v19;
      *v19 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6102E0);
    }
    else
    {
      LODWORD(v9) = sub_407BB0(off_6102D8);
      off_6102D8 = v9;
      v7 = v9;
    }
    memset(&v7[dword_6102F0], 0, 16LL * ((signed int)a1 + 1 - dword_6102F0));
    dword_6102F0 = a1 + 1;
  }
  v10 = (signed __int64)&v7[(signed int)a1];
  v11 = *(_BYTE **)(v10 + 8);
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v12 = *(_QWORD *)v10;
  v13 = sub_405B10(v11, *(_QWORD *)v10, a2, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v12 <= v13 )
  {
    v14 = v13 + 1;
    *(_QWORD *)v10 = v13 + 1;
    if ( (_UNKNOWN *)v11 != &unk_6103E0 )
    {
      v15 = v13 + 1;
      free(v11);
      v14 = v15;
    }
    LODWORD(v16) = sub_407B50(v14);
    v17 = *(_DWORD *)v5;
    *(_QWORD *)(v10 + 8) = v16;
    v11 = v16;
    sub_405B10(v16, v14, v20, v4, v17, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v21;
  return v11;
}

_BYTE *__fastcall sub_407260(__int64 a1, int a2, char *a3)
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
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407260(__int64 a1, int a2, char *a3)
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
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_406D40(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407360(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_610510;
  v4 = _mm_load_si128((const __m128i *)&xmmword_6104E0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_6104F0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_610500);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_406D40(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_4073E0(char *a1)
{
  return sub_407360(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407570(__int64 a1, char *a2)
{
  return sub_406D40(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

_BYTE *__fastcall sub_407590(char *a1)
{
  return sub_406D40(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6102A0);
}

int __fastcall sub_4075B0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  __int64 v9; // r9@3
  char *v10; // rax@3
  __int64 v11; // rax@5
  __int64 v12; // r8@5
  __int64 v13; // r13@5
  __int64 v14; // r12@5
  __int64 v15; // r15@5
  __int64 v16; // ST40_8@5
  __int64 v17; // r14@5
  __int64 v18; // rbx@5
  char *v19; // rax@5
  int result; // eax@6
  const char *v21; // rsi@7
  __int64 v22; // r8@7
  __int64 v23; // r13@7
  __int64 v24; // r12@7
  __int64 v25; // ST48_8@7
  __int64 v26; // r15@7
  __int64 v27; // r14@7
  __int64 v28; // ST40_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r8@9
  __int64 v32; // r9@9
  __int64 v33; // r12@10
  __int64 v34; // rbx@10
  char *v35; // rax@10
  __int64 v36; // r9@10
  __int64 v37; // r13@11
  __int64 v38; // r12@11
  __int64 v39; // rbx@11
  char *v40; // rax@11
  __int64 v41; // r14@12
  __int64 v42; // r13@12
  __int64 v43; // r12@12
  __int64 v44; // rbx@12
  char *v45; // rax@12
  __int64 v46; // r15@14
  __int64 v47; // r12@15
  __int64 v48; // r15@15
  __int64 v49; // r14@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r9@15
  __int64 v54; // r13@17
  __int64 v55; // r12@17
  __int64 v56; // r15@17
  __int64 v57; // r14@17
  __int64 v58; // r8@17
  __int64 v59; // ST38_8@17
  __int64 v60; // r8@18
  __int64 v61; // r13@18
  __int64 v62; // r12@18
  __int64 v63; // ST48_8@18
  __int64 v64; // r15@18
  __int64 v65; // r14@18
  __int64 v66; // ST40_8@18
  __int64 v67; // [sp+0h] [bp-58h]@5
  __int64 v68; // [sp+0h] [bp-58h]@15
  __int64 v69; // [sp+8h] [bp-50h]@5

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
    case 8LL:
      v11 = *(_QWORD *)(v7 + 16);
      v12 = *(_QWORD *)(v7 + 8);
      v13 = *(_QWORD *)(v7 + 48);
      v14 = *(_QWORD *)(v7 + 40);
      v15 = *(_QWORD *)(v7 + 32);
      v16 = *(_QWORD *)(v7 + 56);
      v17 = *(_QWORD *)(v7 + 24);
      v18 = *(_QWORD *)v7;
      v67 = v11;
      v69 = v12;
      v19 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v22 = *(_QWORD *)(v7 + 8);
      v23 = *(_QWORD *)(v7 + 48);
      v24 = *(_QWORD *)(v7 + 40);
      v25 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 32);
      v27 = *(_QWORD *)(v7 + 24);
      v28 = *(_QWORD *)(v7 + 56);
      v67 = *(_QWORD *)(v7 + 16);
      v18 = *(_QWORD *)v7;
      v69 = v22;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v31, v32);
    case 2LL:
      v33 = *(_QWORD *)(v7 + 8);
      v34 = *(_QWORD *)v7;
      v35 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v36);
    case 3LL:
      v37 = *(_QWORD *)(v7 + 16);
      v38 = *(_QWORD *)(v7 + 8);
      v39 = *(_QWORD *)v7;
      v40 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v40, v39, v38, v37);
    case 4LL:
      v41 = *(_QWORD *)(v7 + 24);
      v42 = *(_QWORD *)(v7 + 16);
      v43 = *(_QWORD *)(v7 + 8);
      v44 = *(_QWORD *)v7;
      v45 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v46 = *(_QWORD *)(v7 + 32);
      v41 = *(_QWORD *)(v7 + 24);
      v42 = *(_QWORD *)(v7 + 16);
      v43 = *(_QWORD *)(v7 + 8);
      v44 = *(_QWORD *)v7;
      v45 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v45, v44, v43, v42);
      return v41;
    case 6LL:
      v47 = *(_QWORD *)(v7 + 40);
      v48 = *(_QWORD *)(v7 + 32);
      v49 = *(_QWORD *)(v7 + 24);
      v68 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      v53 = v50;
      goto LABEL_16;
    case 7LL:
      v54 = *(_QWORD *)(v7 + 48);
      v55 = *(_QWORD *)(v7 + 40);
      v56 = *(_QWORD *)(v7 + 32);
      v57 = *(_QWORD *)(v7 + 24);
      v58 = *(_QWORD *)(v7 + 8);
      v59 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v68 = v58;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      v53 = v59;
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51, v68, v53);
      break;
    default:
      v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v60 = *(_QWORD *)(v7 + 8);
      v61 = *(_QWORD *)(v7 + 48);
      v62 = *(_QWORD *)(v7 + 40);
      v63 = *(_QWORD *)(v7 + 64);
      v64 = *(_QWORD *)(v7 + 32);
      v65 = *(_QWORD *)(v7 + 24);
      v66 = *(_QWORD *)(v7 + 56);
      v67 = *(_QWORD *)(v7 + 16);
      v18 = *(_QWORD *)v7;
      v69 = v60;
LABEL_8:
      v19 = dcgettext(0LL, v21, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v19, v18, v69, v67);
      break;
  }
  return result;
}

int __fastcall sub_4075B0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  __int64 v9; // r9@3
  char *v10; // rax@3
  __int64 v11; // rax@5
  __int64 v12; // r8@5
  __int64 v13; // r13@5
  __int64 v14; // r12@5
  __int64 v15; // r15@5
  __int64 v16; // ST40_8@5
  __int64 v17; // r14@5
  __int64 v18; // rbx@5
  char *v19; // rax@5
  int result; // eax@6
  const char *v21; // rsi@7
  __int64 v22; // r8@7
  __int64 v23; // r13@7
  __int64 v24; // r12@7
  __int64 v25; // ST48_8@7
  __int64 v26; // r15@7
  __int64 v27; // r14@7
  __int64 v28; // ST40_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r8@9
  __int64 v32; // r9@9
  __int64 v33; // r12@10
  __int64 v34; // rbx@10
  char *v35; // rax@10
  __int64 v36; // r9@10
  __int64 v37; // r13@11
  __int64 v38; // r12@11
  __int64 v39; // rbx@11
  char *v40; // rax@11
  __int64 v41; // r14@12
  __int64 v42; // r13@12
  __int64 v43; // r12@12
  __int64 v44; // rbx@12
  char *v45; // rax@12
  __int64 v46; // r15@14
  __int64 v47; // r12@15
  __int64 v48; // r15@15
  __int64 v49; // r14@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r9@15
  __int64 v54; // r13@17
  __int64 v55; // r12@17
  __int64 v56; // r15@17
  __int64 v57; // r14@17
  __int64 v58; // r8@17
  __int64 v59; // ST38_8@17
  __int64 v60; // r8@18
  __int64 v61; // r13@18
  __int64 v62; // r12@18
  __int64 v63; // ST48_8@18
  __int64 v64; // r15@18
  __int64 v65; // r14@18
  __int64 v66; // ST40_8@18
  __int64 v67; // [sp+0h] [bp-58h]@5
  __int64 v68; // [sp+0h] [bp-58h]@15
  __int64 v69; // [sp+8h] [bp-50h]@5

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
    case 8LL:
      v11 = *(_QWORD *)(v7 + 16);
      v12 = *(_QWORD *)(v7 + 8);
      v13 = *(_QWORD *)(v7 + 48);
      v14 = *(_QWORD *)(v7 + 40);
      v15 = *(_QWORD *)(v7 + 32);
      v16 = *(_QWORD *)(v7 + 56);
      v17 = *(_QWORD *)(v7 + 24);
      v18 = *(_QWORD *)v7;
      v67 = v11;
      v69 = v12;
      v19 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v22 = *(_QWORD *)(v7 + 8);
      v23 = *(_QWORD *)(v7 + 48);
      v24 = *(_QWORD *)(v7 + 40);
      v25 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 32);
      v27 = *(_QWORD *)(v7 + 24);
      v28 = *(_QWORD *)(v7 + 56);
      v67 = *(_QWORD *)(v7 + 16);
      v18 = *(_QWORD *)v7;
      v69 = v22;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v31, v32);
    case 2LL:
      v33 = *(_QWORD *)(v7 + 8);
      v34 = *(_QWORD *)v7;
      v35 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v36);
    case 3LL:
      v37 = *(_QWORD *)(v7 + 16);
      v38 = *(_QWORD *)(v7 + 8);
      v39 = *(_QWORD *)v7;
      v40 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v40, v39, v38, v37);
    case 4LL:
      v41 = *(_QWORD *)(v7 + 24);
      v42 = *(_QWORD *)(v7 + 16);
      v43 = *(_QWORD *)(v7 + 8);
      v44 = *(_QWORD *)v7;
      v45 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v46 = *(_QWORD *)(v7 + 32);
      v41 = *(_QWORD *)(v7 + 24);
      v42 = *(_QWORD *)(v7 + 16);
      v43 = *(_QWORD *)(v7 + 8);
      v44 = *(_QWORD *)v7;
      v45 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v45, v44, v43, v42);
      return v41;
    case 6LL:
      v47 = *(_QWORD *)(v7 + 40);
      v48 = *(_QWORD *)(v7 + 32);
      v49 = *(_QWORD *)(v7 + 24);
      v68 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      v53 = v50;
      goto LABEL_16;
    case 7LL:
      v54 = *(_QWORD *)(v7 + 48);
      v55 = *(_QWORD *)(v7 + 40);
      v56 = *(_QWORD *)(v7 + 32);
      v57 = *(_QWORD *)(v7 + 24);
      v58 = *(_QWORD *)(v7 + 8);
      v59 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v68 = v58;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      v53 = v59;
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51, v68, v53);
      break;
    default:
      v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v60 = *(_QWORD *)(v7 + 8);
      v61 = *(_QWORD *)(v7 + 48);
      v62 = *(_QWORD *)(v7 + 40);
      v63 = *(_QWORD *)(v7 + 64);
      v64 = *(_QWORD *)(v7 + 32);
      v65 = *(_QWORD *)(v7 + 24);
      v66 = *(_QWORD *)(v7 + 56);
      v67 = *(_QWORD *)(v7 + 16);
      v18 = *(_QWORD *)v7;
      v69 = v60;
LABEL_8:
      v19 = dcgettext(0LL, v21, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v19, v18, v69, v67);
      break;
  }
  return result;
}

int __fastcall sub_407A10(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4075B0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_4075B0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_407B50(size_t a1, __int64 a2)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_407DA0(a1, a2);
  }
  return result;
}

void *__fastcall sub_407BB0(void *a1, size_t a2)
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
        sub_407DA0(a1, a2);
    }
  }
  return result;
}

void *__fastcall sub_407D50(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_407B50(a2, a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_407D80(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_407D50(a1, v1 + 1);
}

void __noreturn sub_407DA0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(dword_610290, 0, "%s", v0);
  abort();
}

char *__fastcall sub_407DE0(const char *a1, size_t a2)
{
  char *result; // rax@1

  result = strndup(a1, a2);
  if ( !result )
    sub_407DA0();
  return result;
}

__int64 __fastcall sub_407E00(char *nptr, char **a2, unsigned int a3, signed __int64 *a4, const char *a5)
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

__int64 __fastcall sub_408550(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15@2
  unsigned __int64 *v6; // r14@2
  const char *v7; // r13@2
  int *v8; // rax@4
  int *v9; // r12@4
  char v10; // bl@4
  const unsigned __int16 *v11; // rsi@4
  char *v12; // rax@4
  unsigned __int64 v13; // rbx@8
  signed int v14; // ebp@10
  int v15; // er12@12
  char *v17; // rax@19
  char *v18; // r8@19
  signed __int64 v19; // rax@21
  char *v20; // rax@22
  char v21; // al@23
  int v22; // esi@27
  unsigned __int64 v23; // rdx@27
  char *v24; // r8@33
  unsigned __int64 v25; // kr18_8@37
  char *v26; // ST00_8@39
  char *v27; // rax@39
  signed int v28; // edi@47
  signed int v29; // er9@47
  bool v30; // of@48
  signed int v31; // edi@53
  signed int v32; // edi@59
  signed int v33; // edi@65
  signed int v34; // edi@71
  int v35; // [sp+0h] [bp-58h]@2
  char *v36; // [sp+0h] [bp-58h]@17
  char *v37; // [sp+8h] [bp-50h]@22
  char *endptr; // [sp+18h] [bp-40h]@3

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  v5 = a2;
  v35 = a3;
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
  while ( HIBYTE(v11[(unsigned __int8)v10]) & 0x20 )
    v10 = *++v12;
  if ( v10 == 45 )
    goto LABEL_16;
  v13 = __strtoul_internal(nptr, v5, v35, 0);
  if ( *v5 == nptr )
  {
    v36 = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
        v18 = v36;
        if ( v17 )
          goto LABEL_20;
      }
    }
    goto LABEL_16;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
LABEL_16:
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      v26 = *v5;
      v27 = strchr(v7, (char)v15);
      v18 = v26;
      if ( !v27 )
      {
LABEL_40:
        *v6 = v13;
        v14 |= 2u;
        return (unsigned int)v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 142129060940101LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
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
          switch ( (_BYTE)v15 )
          {
            case 0x4D:
            case 0x6D:
LABEL_30:
              if ( !is_mul_ok((signed int)v23, v13) || !is_mul_ok((signed int)v23, (signed int)v23 * v13) )
                goto LABEL_38;
              v13 *= (signed int)v23 * (signed __int64)(signed int)v23;
              goto LABEL_33;
            case 0x63:
              goto LABEL_33;
            case 0x4B:
            case 0x6B:
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( !is_mul_ok(v23, v25) )
                goto LABEL_38;
              goto LABEL_33;
            default:
              goto LABEL_40;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_38;
              v13 *= 2LL;
              goto LABEL_33;
            case 0x62:
LABEL_44:
              if ( v13 >> 55 )
                goto LABEL_38;
              v13 <<= 9;
              goto LABEL_33;
            case 0x5A:
LABEL_47:
              v28 = 7;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v28;
              }
              while ( v28 );
              goto LABEL_51;
            case 0x59:
LABEL_53:
              v31 = 8;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 0x54:
            case 0x74:
LABEL_59:
              v32 = 4;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 0x50:
LABEL_65:
              v33 = 5;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 0x45:
LABEL_71:
              v34 = 6;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v34;
              }
              while ( v34 );
LABEL_51:
              v14 |= v29;
              break;
            case 0x47:
            case 0x67:
LABEL_77:
              if ( is_mul_ok((signed int)v23, v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * (signed int)v23 * v13) )
              {
                v13 *= (signed int)v23 * (signed int)v23 * (signed __int64)(signed int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              break;
            case 0x42:
              if ( v13 >> 54 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 10;
              }
              break;
          }
          goto LABEL_33;
        }
        if ( v21 != 66 )
        {
          switch ( (unsigned __int64)(unsigned __int8)(v15 - 69) )
          {
            case 0uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_71;
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
              goto LABEL_40;
            case 2uLL:
            case 0x22uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_77;
            case 6uLL:
            case 0x26uLL:
              v22 = 1;
              v23 = 1024LL;
              goto LABEL_37;
            case 8uLL:
            case 0x28uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_30;
            case 0xBuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_65;
            case 0xFuLL:
            case 0x2FuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_59;
            case 0x14uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_53;
            case 0x15uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_47;
            case 0x1DuLL:
              v22 = 1;
              goto LABEL_44;
            case 0x1EuLL:
              v22 = 1;
              break;
          }
LABEL_33:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *v6 = v13;
  return (unsigned int)v14;
}

__int64 __fastcall sub_408990(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_408A70(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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
  __int64 v34; // r9@64
  FILE *v35; // rdi@64
  char **v36; // rbx@64
  _BYTE *v37; // rbp@64
  signed __int64 v38; // r12@64
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
        __fprintf_chk(stderr, 1LL, v25, v24, a9, v9);
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
        __fprintf_chk(stderr, 1LL, v27, v26, a9, v9);
        v9 = *(const char **)(a7 + 32);
      }
      else
      {
        flockfile(stderr);
        v31 = *(_QWORD *)(a7 + 32);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32, a9, v31);
        v35 = stderr;
        v36 = v42;
        v37 = ptr;
        v38 = (signed __int64)&ptr[v13 + 1];
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
        __fprintf_chk(stderr, 1LL, v30, v29, a9, v28);
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
          __fprintf_chk(stderr, 1LL, v41, v40, a9, v39);
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

__int64 __fastcall sub_409090(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
  __int64 v49; // r9@85
  __int64 v50; // rbp@94
  char *v51; // rax@94
  __int64 v52; // r9@94
  __int64 v53; // rbp@98
  char *v54; // rax@98
  __int64 v55; // r9@98
  char **v56; // [sp+8h] [bp-60h]@1
  _DWORD *v57; // [sp+10h] [bp-58h]@1
  char v58; // [sp+1Ch] [bp-4Ch]@32
  _BYTE *v59; // [sp+20h] [bp-48h]@32
  signed __int64 v60; // [sp+28h] [bp-40h]@32

  v56 = a4;
  v57 = a5;
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
        sub_408990(a2, a7);
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
        sub_408990((__int64)v11, a7);
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
        if ( v56 )
        {
          if ( v36 == 45 )
          {
            *(_QWORD *)(a7 + 32) = v21 + 2;
            v40 = sub_408A70(v10, v11, v12, v56, v57, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_408A70(v10, v11, v12, v56, v57, a6, a7, v8, (__int64)"-");
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
  v59 = v13;
  *(_QWORD *)(a7 + 32) = v13 + 1;
  v26 = *v13;
  v60 = (signed __int64)(v13 + 1);
  v58 = *v13;
  v27 = strchr(v12, v26);
  v28 = v60;
  if ( !v59[1] )
    ++*(_DWORD *)a7;
  if ( (unsigned __int8)(v58 - 58) > 1u && v27 )
  {
    v29 = v27[1];
    if ( *v27 == 87 && v56 && v29 == 59 )
    {
      if ( v59[1] )
      {
LABEL_71:
        *(_QWORD *)(a7 + 32) = v28;
        *(_QWORD *)(a7 + 16) = 0LL;
        v40 = sub_408A70(v10, v11, v12, v56, v57, 0, a7, v8, (__int64)&unk_40DC98);
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
        v53 = *v11;
        v54 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v54, v53, (unsigned int)v26, v55);
      }
      *(_DWORD *)(a7 + 8) = v26;
      v26 = 5 * (*v12 != 58) + 58;
    }
    else if ( v29 == 58 )
    {
      v43 = v59[1];
      if ( v27[2] == 58 )
      {
        if ( v43 )
        {
          *(_QWORD *)(a7 + 16) = v60;
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
          *(_QWORD *)(a7 + 16) = v60;
          *(_DWORD *)a7 = v44 + 1;
        }
        else if ( v10 == (_DWORD)v44 )
        {
          if ( v8 )
          {
            v50 = *v11;
            v51 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v51, v50, (unsigned int)v26, v52);
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
      __fprintf_chk(stderr, 1LL, v48, v47, (unsigned int)v26, v49);
    }
    *(_DWORD *)(a7 + 8) = v26;
    v26 = 63;
  }
  return (unsigned int)v26;
}

__int64 __fastcall sub_409660(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_610520 = dword_6102FC;
  dword_610524 = dword_6102F8;
  result = sub_409090(a1, a2, a3, a4, a5, a6, (__int64)&dword_610520, a7);
  dword_6102FC = dword_610520;
  nptr = (char *)qword_610530;
  dword_6102F4 = dword_610528;
  return result;
}

__int64 __fastcall sub_4096E0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_409660(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_409760(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409840(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_4097E0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

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
  char *v1; // rdx@1
  bool result; // al@1
  bool v3; // cf@1
  bool v4; // zf@1
  signed __int64 v5; // rcx@2
  const char *v6; // rdi@2
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

const char *sub_4098A0()
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
                sub_409E10(v61);
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
            sub_409E10(v40);
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

int __fastcall sub_409E10(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_409E90(stream) )
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

int __fastcall sub_409E90(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_409ED0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_409ED0(FILE *a1, __off_t a2, int a3)
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409FA0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_610248 )
    v1 = unk_610248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409FB8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60FE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
