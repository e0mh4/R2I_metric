signed __int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  unsigned int v3; // er13@1
  char *v4; // rdi@1
  unsigned __int64 v5; // r14@5
  signed int v6; // er15@5
  int v7; // er12@5
  char *v8; // rax@5
  char *v9; // rax@5
  char *v10; // rbp@5
  int v11; // eax@6
  char *v13; // rbp@4
  int *v14; // rax@4
  const char *v15; // r14@15
  int *v16; // rax@15
  int *v17; // r15@15
  __int64 v18; // rax@15
  char *v19; // r8@18
  char *v20; // rax@19
  char *v21; // ST08_8@24
  char *v22; // rax@24
  int v23; // er13@29
  int v24; // eax@30
  char *v25; // rsi@31
  char *v26; // rax@31
  char *v27; // rdi@33
  int v28; // er14@37
  int v29; // ebx@37
  _IO_FILE *v30; // r15@43
  __int64 v31; // rdi@45
  const char *v32; // rdi@48
  char *v33; // rax@50
  size_t v34; // rcx@50
  char *v35; // rbx@57
  int *v36; // rax@57
  char *v37; // rax@58
  char *v38; // rax@59
  char *v39; // [sp+0h] [bp-68h]@0
  size_t v40; // [sp+0h] [bp-68h]@29
  char *lineptr; // [sp+18h] [bp-50h]@5
  size_t n; // [sp+20h] [bp-48h]@5
  char *endptr; // [sp+28h] [bp-40h]@15

  v3 = a1;
  v4 = *a2;
  if ( !*a2 )
    v4 = "frcode";
  sub_401CB0(v4, a2, a3);
  if ( sub_405810(sub_401C10) )
  {
    v13 = dcgettext(0LL, "The atexit library function failed", 5);
    v14 = __errno_location();
    error(1, *v14, v13);
  }
  v5 = 0LL;
  v6 = 0;
  v7 = 10;
  n = 1026LL;
  LODWORD(v8) = sub_403C70(1026LL);
  lineptr = v8;
  LODWORD(v9) = sub_403C70(1026LL);
  *v9 = 0;
  v10 = v9;
  while ( 1 )
  {
    v11 = sub_405110(v3, a2, "hv0S:", &off_405A60, 0LL);
    if ( v11 == -1 )
      break;
    if ( v11 == 83 )
    {
      v15 = nptr;
      v39 = nptr;
      v16 = __errno_location();
      *v16 = 0;
      v17 = v16;
      v18 = strtol(v15, &endptr, 10);
      v5 = v18;
      if ( v18 )
      {
        if ( (unsigned __int64)(v18 + 0x7FFFFFFFFFFFFFFFLL) > 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( *v17 )
          {
            v37 = dcgettext(0LL, "Security level %s is outside the convertible range.", 5);
            error(1, 0, v37, v39, v39);
            goto LABEL_25;
          }
          v19 = endptr;
          if ( *endptr )
          {
LABEL_24:
            v21 = v19;
            v22 = dcgettext(0LL, "Security level %s has unexpected suffix %s.", 5);
            error(1, 0, v22, v39, v21, v39);
            goto LABEL_25;
          }
LABEL_19:
          v20 = dcgettext(0LL, "slocate security level %ld is unsupported.", 5);
          error(1, 0, v20, v5, v39);
          goto LABEL_20;
        }
        v19 = endptr;
        if ( *endptr )
          goto LABEL_24;
        if ( v18 != 1 )
          goto LABEL_19;
      }
      else
      {
        v19 = endptr;
        if ( endptr == nptr )
        {
          v38 = dcgettext(0LL, "You need to specify a security level as a decimal integer.", 5);
          error(1, 0, v38, v39);
LABEL_25:
          v5 = -1LL;
          goto LABEL_19;
        }
        if ( *endptr )
          goto LABEL_24;
      }
LABEL_20:
      v6 = 1;
    }
    else
    {
      if ( v11 > 83 )
      {
        if ( v11 == 104 )
        {
          sub_401B10(stdout);
          return 0LL;
        }
        if ( v11 == 118 )
        {
          sub_401B70("frcode");
          return 0LL;
        }
LABEL_14:
        sub_401B10(stderr);
        return 1LL;
      }
      v7 = 0;
      if ( v11 != 48 )
        goto LABEL_14;
    }
  }
  if ( dword_60821C != v3 )
    goto LABEL_14;
  if ( v6 )
  {
    fputc(49 - (v5 < 1), stdout);
    fputc(0, stdout);
  }
  else if ( fwrite(&unk_405A40, 1uLL, 0xAuLL, stdout) != 10 )
  {
    v35 = dcgettext(0LL, "Failed to write to standard output", 5);
    v36 = __errno_location();
    error(1, *v36, v35, v39);
  }
  v40 = 1026LL;
  v23 = 0;
  while ( 2 )
  {
    v24 = getdelim(&lineptr, &n, v7, stdin);
    if ( v24 > 0 )
    {
      lineptr[v24 - 1] = 0;
      v25 = lineptr;
      v26 = lineptr;
      if ( *lineptr == *v10 && *v10 )
      {
        v27 = v10;
        do
        {
          ++v27;
          ++v26;
        }
        while ( *v26 == *v27 && *v27 && v27 != v10 + 2147483646 );
      }
      else
      {
        LODWORD(v27) = (_DWORD)v10;
      }
      v28 = (_DWORD)v27 - (_DWORD)v10;
      v29 = (_DWORD)v27 - (_DWORD)v10 - v23;
      if ( (unsigned int)(v29 + 0x8000) > 0xFFFF )
      {
        v28 = 0;
        v29 = -v23;
      }
      if ( v6 )
        goto LABEL_48;
      if ( (unsigned int)(v29 + 127) <= 0xFE )
      {
        v31 = (unsigned int)v29;
        if ( _IO_putc(v29, stdout) != -1 )
          goto LABEL_47;
      }
      else
      {
        if ( _IO_putc(128, stdout) == -1 )
          sub_401AE0(128LL);
        v30 = stdout;
        if ( v29 > 0x7FFF )
          __assert_fail("c <= SHRT_MAX", "frcode.c", 0x7Bu, "put_short");
        if ( v29 < -32768 )
          __assert_fail("c >= SHRT_MIN", "frcode.c", 0x7Cu, "put_short");
        v31 = (unsigned int)(v29 >> 8);
        if ( _IO_putc(v31, stdout) != -1 )
        {
          v31 = (unsigned int)v29;
          if ( _IO_putc(v29, v30) != -1 )
          {
LABEL_47:
            v25 = lineptr;
            goto LABEL_48;
          }
        }
      }
      sub_401AE0(v31);
      v25 = lineptr;
LABEL_48:
      v32 = &v25[v28];
      if ( fputs(v32, stdout) == -1 || (v32 = 0LL, _IO_putc(0, stdout) == -1) )
        sub_401AE0(v32);
      v33 = lineptr;
      v6 = 0;
      v23 = v28;
      v34 = v40;
      lineptr = v10;
      v40 = n;
      v10 = v33;
      n = v34;
      continue;
    }
    break;
  }
  free(lineptr);
  free(v10);
  return 0LL;
}

int sub_401A2B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_401A4A()
{
  return 0;
}

int sub_401A81()
{
  int result; // eax@4

  if ( !byte_608248 )
  {
    while ( qword_608250 < (unsigned __int64)(((&unk_607E48 - (_UNKNOWN *)&qword_607E40) >> 3) - 1) )
      (*(&qword_607E40 + ++qword_608250))();
    result = sub_401A2B();
    byte_608248 = 1;
  }
  return result;
}

int sub_401AD8()
{
  return sub_401A4A();
}

void sub_401AE0()
{
  char *v0; // rbx@1
  int *v1; // rax@1

  v0 = dcgettext(0LL, "write error", 5);
  v1 = __errno_location();
  error(1, *v1, v0);
}

int __fastcall sub_401B10(FILE *stream)
{
  __int64 v1; // rbp@1
  char *v2; // rax@1
  char *v3; // rax@1

  v1 = qword_608268;
  v2 = dcgettext(0LL, "Usage: %s [-0 | --null] [--version] [--help]\n", 5);
  fprintf(stream, v2, v1);
  v3 = dcgettext(0LL, "\nReport bugs to <bug-findutils@gnu.org>.\n", 5);
  return fputs(v3, stream);
}

char *sub_401B70()
{
  char *v0; // r12@1

  sub_403ED0(stderr);
  v0 = dcgettext(0LL, "Kevin Dalley", 5);
  dcgettext(0LL, "James Youngman", 5);
  dcgettext(0LL, "Eric B. Decker", 5);
  sub_403B40((char)stdout);
  return v0;
}

__int64 sub_401C10()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_4051C0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_608258 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_608260 )
      {
        LODWORD(v5) = sub_403500(qword_608260, "write error");
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
  result = sub_4051C0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

char *__fastcall sub_401CB0(const char *a1)
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
  qword_608268 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_401D50(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_405230(0LL);
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

unsigned __int64 __fastcall sub_401E50(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  __int64 v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // ebp@1
  char v12; // zf@1
  size_t v13; // rax@1
  int v14; // edx@1
  signed int v15; // er11@1
  unsigned __int64 v16; // r10@1
  unsigned __int64 v17; // rbx@2
  signed int v18; // eax@3
  unsigned __int64 v19; // r11@3
  signed int v20; // er10@3
  unsigned __int64 v21; // r13@3
  int v22; // er8@3
  char *v23; // r9@7
  signed int v24; // ST58_4@11
  unsigned __int8 v25; // ST50_1@11
  size_t v26; // rax@11
  signed int v27; // ST60_4@13
  unsigned __int64 v28; // ST58_8@13
  unsigned __int8 v29; // ST50_1@13
  int v30; // eax@13
  unsigned __int64 v31; // r12@15
  bool v32; // al@19
  char *v33; // rax@50
  char i; // al@52
  signed int v35; // ST48_4@56
  unsigned __int64 v36; // ST30_8@56
  size_t v37; // rax@56
  bool v38; // al@60
  char v39; // cl@87
  int v40; // eax@105
  signed __int64 v41; // rcx@112
  unsigned __int64 v42; // rax@115
  signed int v43; // ST58_4@125
  unsigned __int64 v44; // ST50_8@125
  unsigned __int8 v45; // ST48_1@125
  const unsigned __int16 **v46; // rax@125
  unsigned __int64 v47; // rcx@125
  int v48; // edx@125
  unsigned __int64 result; // rax@132
  signed __int64 v50; // rsi@161
  char v51; // dl@177
  char *v52; // rax@178
  signed int v53; // ST58_4@185
  char v54; // ST50_1@185
  char *v55; // ST48_8@185
  size_t v56; // rax@185
  unsigned __int64 v57; // rbx@186
  unsigned __int64 v58; // r14@190
  __int64 v59; // rax@190
  __int64 v60; // r15@190
  char *v61; // rdx@195
  unsigned __int64 v62; // rcx@206
  int v63; // eax@206
  char v64; // si@206
  unsigned __int64 v65; // rsi@255
  char *v66; // rdi@255
  unsigned __int64 v67; // rax@255
  int v68; // [sp+Ch] [bp-ACh]@1
  char v69; // [sp+Ch] [bp-ACh]@2
  unsigned __int64 v70; // [sp+10h] [bp-A8h]@1
  char v71; // [sp+10h] [bp-A8h]@7
  char *s; // [sp+18h] [bp-A0h]@1
  unsigned __int64 n; // [sp+20h] [bp-98h]@2
  char *v74; // [sp+28h] [bp-90h]@13
  unsigned __int64 v75; // [sp+28h] [bp-90h]@186
  signed int v76; // [sp+30h] [bp-88h]@186
  __int64 v77; // [sp+38h] [bp-80h]@186
  unsigned __int64 v78; // [sp+40h] [bp-78h]@186
  char *s2; // [sp+48h] [bp-70h]@2
  size_t v80; // [sp+50h] [bp-68h]@1
  char v81; // [sp+58h] [bp-60h]@1
  bool v82; // [sp+5Dh] [bp-5Bh]@2
  unsigned __int8 v83; // [sp+5Eh] [bp-5Ah]@186
  unsigned __int64 v84; // [sp+60h] [bp-58h]@186
  char *v85; // [sp+68h] [bp-50h]@186
  wint_t wc; // [sp+74h] [bp-44h]@187
  mbstate_t ps; // [sp+78h] [bp-40h]@184

  v9 = (__int64)a1;
  v10 = a2;
  v11 = a6 & 2;
  s = a3;
  v70 = a4;
  v68 = a5;
  v81 = a6;
  v13 = __ctype_get_mb_cur_max();
  v15 = v68;
  v80 = v13;
  v16 = v70;
  switch ( v68 )
  {
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v69 = 0;
        goto LABEL_38;
      }
      v82 = 1;
      v17 = 0LL;
      v69 = 0;
      n = 1LL;
      s2 = "'";
      break;
    case 4:
      if ( v11 )
      {
LABEL_2:
        v82 = 1;
        v17 = 0LL;
        v15 = 2;
        v69 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v69 = 1;
LABEL_38:
        if ( a2 )
          *a1 = 39;
        v82 = 0;
        v17 = 1LL;
        v15 = 2;
        n = 1LL;
        s2 = "'";
      }
      break;
    case 5:
      if ( v11 )
      {
        v82 = 1;
        v17 = 0LL;
        v69 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v82 = 0;
        v17 = 1LL;
        v69 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v82 = 1;
      v17 = 0LL;
      v15 = 5;
      v69 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v82 = 0;
      v17 = 0LL;
      v69 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_401D50("`", v68);
        v33 = sub_401D50("'", v68);
        v16 = v70;
        v15 = v68;
        a9 = v33;
      }
      v17 = 0LL;
      if ( !v11 )
      {
        for ( i = *a8; i; i = a8[v17] )
        {
          if ( a2 > v17 )
            a1[v17] = i;
          ++v17;
        }
      }
      v35 = v15;
      v36 = v16;
      v82 = v11 != 0;
      v37 = strlen(a9);
      v69 = 1;
      v16 = v36;
      n = v37;
      v15 = v35;
      s2 = a9;
      break;
    case 0:
      v82 = 0;
      v17 = 0LL;
      v69 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 3:
      v82 = 1;
      v17 = 0LL;
      v15 = 2;
      v69 = 1;
      n = 1LL;
      s2 = "'";
      break;
    default:
      abort();
      return result;
  }
  v18 = v15;
  v19 = v16;
  v20 = v18;
  v21 = 0LL;
  v22 = 0;
  while ( 1 )
  {
    LOBYTE(v11) = v19 != v21;
    if ( v19 == -1LL )
      LOBYTE(v11) = s[v21] != 0;
    if ( !(_BYTE)v11 )
    {
      if ( v17 == 0 && v82 && v20 == 2 )
        return sub_401E50(v9, v10, s);
      if ( s2 )
      {
        if ( !v82 )
        {
          v51 = *s2;
          if ( *s2 )
          {
            v52 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                *(_BYTE *)(v9 + v17) = v51;
              v51 = v52[++v17];
            }
            while ( v51 );
          }
        }
      }
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 0;
      return v17;
    }
    v23 = &s[v21];
    v71 = v69 & (v20 != 2);
    if ( !((unsigned __int8)v69 & (v20 != 2)) )
    {
      LOBYTE(v31) = *v23;
      switch ( *v23 )
      {
        case 123:
        case 125:
LABEL_60:
          v38 = v19 != 1;
          if ( v19 == -1LL )
            v38 = s[1] != 0;
          LOBYTE(v14) = v20 == 2;
          if ( v38 )
            goto LABEL_65;
          goto LABEL_63;
        case 63:
LABEL_69:
          if ( v20 == 2 )
          {
            if ( v82 )
              return sub_401E50(v9, v10, s);
            v11 = 0;
            LOBYTE(v31) = 63;
            goto LABEL_66;
          }
          if ( v20 != 5 )
          {
            LOBYTE(v31) = 63;
            LOBYTE(v14) = v20 == 2;
            goto LABEL_65;
          }
          if ( !(v81 & 4) )
          {
            v14 = 0;
            LOBYTE(v31) = 63;
            goto LABEL_65;
          }
          v14 = 0;
          LOBYTE(v31) = 63;
          if ( v21 + 2 >= v19 || s[v21 + 1] != 63 )
            goto LABEL_65;
          v31 = (unsigned __int8)s[v21 + 2];
          if ( (unsigned __int8)v31 > 0x3Eu || (v50 = 8070630310989004800LL, !_bittest64(&v50, v31)) )
          {
            LOBYTE(v31) = 63;
            goto LABEL_65;
          }
          if ( v82 )
            return sub_401E50(v9, v10, s);
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 63;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 34;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 34;
          if ( v10 > v17 + 3 )
            *(_BYTE *)(v9 + v17 + 3) = 63;
          v17 += 4LL;
          v14 = 0;
          v11 = 0;
          v21 += 2LL;
          goto LABEL_118;
        case 39:
LABEL_73:
          v14 = 0;
          LOBYTE(v31) = 39;
          if ( v20 != 2 )
            goto LABEL_65;
          if ( v82 )
            return sub_401E50(v9, v10, s);
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 92;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v17 += 3LL;
          ++v21;
          v22 = 0;
          LOBYTE(v31) = 39;
          goto LABEL_82;
        default:
          goto LABEL_124;
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
          goto LABEL_127;
        case 10:
          LOBYTE(v31) = 10;
          v39 = 110;
          goto LABEL_130;
        case 9:
          LOBYTE(v31) = 9;
          v39 = 116;
          goto LABEL_130;
        case 7:
          LOBYTE(v31) = 7;
          v39 = 97;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 0:
          if ( !v69 )
          {
            if ( v81 & 1 )
            {
              ++v21;
              continue;
            }
            if ( !v82 )
            {
              ++v21;
              v11 = v22;
              LOBYTE(v31) = 0;
              goto LABEL_144;
            }
            v11 = 0;
            if ( a7 )
            {
              v71 = 0;
              LOBYTE(v31) = 0;
              goto LABEL_18;
            }
            LOBYTE(v31) = 0;
            goto LABEL_122;
          }
LABEL_103:
          if ( v82 )
            return sub_401E50(v9, v10, s);
          v71 = 0;
LABEL_105:
          LOBYTE(v14) = v20 == 2;
          v40 = v22 ^ 1;
          LOBYTE(v40) = (v20 == 2) & (v22 ^ 1);
          if ( (_BYTE)v40 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v41 = v17 + 3;
            if ( v10 <= v17 + 3 )
            {
              v17 += 4LL;
              ++v21;
              v22 = v40;
              LOBYTE(v31) = 48;
              goto LABEL_82;
            }
            v22 = v40;
LABEL_114:
            *(_BYTE *)(v9 + v41) = 92;
            goto LABEL_115;
          }
          v41 = v17;
          if ( v17 < v10 )
            goto LABEL_114;
LABEL_115:
          v17 = v41 + 1;
          v42 = v21 + 1;
          if ( v20 == 2 )
          {
            ++v21;
            LOBYTE(v31) = 48;
LABEL_82:
            if ( v71 )
              goto LABEL_67;
            goto LABEL_33;
          }
          LOBYTE(v31) = 48;
          if ( v42 < v19 && (unsigned __int8)(s[v42] - 48) <= 9u )
          {
            if ( v10 > v17 )
              *(_BYTE *)(v9 + v17) = 48;
            if ( v10 > v41 + 2 )
              *(_BYTE *)(v9 + v41 + 2) = 48;
            v17 = v41 + 3;
            LOBYTE(v31) = 48;
          }
LABEL_118:
          if ( !v69 || (_BYTE)v14 )
            goto LABEL_66;
          if ( a7 )
            goto LABEL_18;
          break;
        case 8:
          LOBYTE(v31) = 8;
          v39 = 98;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 92:
          if ( v20 == 2 )
          {
            if ( v82 )
              return sub_401E50(v9, v10, s);
            ++v21;
            v11 = v22;
            LOBYTE(v31) = 92;
            goto LABEL_144;
          }
LABEL_87:
          v11 = v82 & (unsigned __int8)v69;
          LOBYTE(v31) = 92;
          v39 = 92;
          v14 = v82 & (unsigned __int8)v69;
          LOBYTE(v14) = (n != 0) & v14;
          if ( (_BYTE)v14 )
          {
            ++v21;
            v11 = v22;
            goto LABEL_144;
          }
LABEL_88:
          if ( !v69 )
            goto LABEL_65;
          v32 = v14;
          LOBYTE(v31) = v39;
          goto LABEL_20;
        case 35:
        case 126:
          LOBYTE(v14) = v20 == 2;
LABEL_63:
          if ( !v21 )
            goto LABEL_64;
          goto LABEL_65;
        case 32:
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
          LOBYTE(v14) = v20 == 2;
LABEL_64:
          if ( !((unsigned __int8)v14 & v82) )
            goto LABEL_65;
          return sub_401E50(v9, v10, s);
        case 13:
          LOBYTE(v31) = 13;
          v39 = 114;
LABEL_130:
          LOBYTE(v14) = v20 == 2;
          v71 = v20 == 2 && v82;
          if ( v71 )
            return sub_401E50(v9, v10, s);
          goto LABEL_88;
        case 12:
          LOBYTE(v31) = 12;
          v39 = 102;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 11:
          LOBYTE(v31) = 11;
          v39 = 118;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
      }
LABEL_121:
      v32 = v20 == 2;
      if ( v71 )
        goto LABEL_20;
LABEL_122:
      ++v21;
      v11 = v22 & (v11 ^ 1);
      goto LABEL_144;
    }
    if ( !n )
      goto LABEL_271;
    if ( v19 == -1LL && n > 1 )
    {
      v24 = v20;
      v25 = v22;
      v26 = strlen(s);
      v20 = v24;
      v22 = v25;
      v23 = &s[v21];
      v19 = v26;
    }
    if ( v21 + n > v19
      || (v27 = v20,
          v28 = v19,
          v29 = v22,
          v74 = v23,
          v30 = memcmp(v23, s2, n),
          v23 = v74,
          v22 = v29,
          v19 = v28,
          v20 = v27,
          v30) )
    {
LABEL_271:
      LOBYTE(v31) = *v23;
      switch ( *v23 )
      {
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
          v71 = 0;
          goto LABEL_17;
        case 123:
        case 125:
          v71 = 0;
          goto LABEL_60;
        case 63:
          v71 = 0;
          goto LABEL_69;
        case 39:
          v71 = 0;
          goto LABEL_73;
        case 32:
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
          v71 = 0;
LABEL_85:
          v14 = 0;
          goto LABEL_65;
        case 92:
          v71 = 0;
          goto LABEL_87;
        case 10:
LABEL_90:
          LOBYTE(v31) = 110;
          v32 = 0;
          goto LABEL_91;
        case 8:
LABEL_93:
          LOBYTE(v31) = 98;
          v32 = 0;
          goto LABEL_91;
        case 7:
LABEL_94:
          LOBYTE(v31) = 97;
          v32 = 0;
          goto LABEL_91;
        case 13:
          v71 = 0;
LABEL_96:
          LOBYTE(v31) = 13;
          v39 = 114;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 35:
        case 126:
          v71 = 0;
LABEL_98:
          if ( v21 )
            goto LABEL_17;
          v14 = 0;
          goto LABEL_65;
        case 12:
LABEL_100:
          LOBYTE(v31) = 102;
          v32 = 0;
          goto LABEL_91;
        case 11:
LABEL_101:
          LOBYTE(v31) = 118;
          v32 = 0;
          goto LABEL_91;
        case 9:
LABEL_102:
          LOBYTE(v31) = 116;
          v32 = 0;
LABEL_91:
          if ( v82 )
            return sub_401E50(v9, v10, s);
          goto LABEL_21;
        case 0:
          goto LABEL_103;
        default:
          v71 = 0;
          break;
      }
    }
    else
    {
      if ( v82 )
        return sub_401E50(v9, v10, s);
      LOBYTE(v31) = *v74;
      switch ( *v74 )
      {
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
          goto LABEL_17;
        case 123:
        case 125:
          goto LABEL_60;
        case 63:
          goto LABEL_69;
        case 39:
          goto LABEL_73;
        case 32:
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
          goto LABEL_85;
        case 92:
          goto LABEL_87;
        case 10:
          goto LABEL_90;
        case 8:
          goto LABEL_93;
        case 7:
          goto LABEL_94;
        case 13:
          goto LABEL_96;
        case 35:
        case 126:
          goto LABEL_98;
        case 12:
          goto LABEL_100;
        case 11:
          goto LABEL_101;
        case 9:
          goto LABEL_102;
        case 0:
          goto LABEL_105;
        default:
          break;
      }
    }
LABEL_124:
    if ( v80 != 1 )
      break;
    v43 = v20;
    v44 = v19;
    v45 = v22;
    v46 = __ctype_b_loc();
    v22 = v45;
    v19 = v44;
    v20 = v43;
    v47 = 1LL;
    v48 = (*v46)[(unsigned __int8)v31];
    LOWORD(v48) = (unsigned __int16)v48 >> 14;
    v14 = v48 ^ 1;
    LOBYTE(v14) = v69 & v14;
LABEL_126:
    if ( (_BYTE)v14 )
    {
      v14 = (unsigned __int8)v69;
LABEL_206:
      v62 = v21 + v47;
      v63 = 0;
      v64 = v71;
      while ( 1 )
      {
        if ( (_BYTE)v14 )
        {
          if ( v82 )
            return sub_401E50(v9, v10, s);
          if ( (v20 == 2) & (unsigned __int8)(v22 ^ 1) )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v17 += 3LL;
            v22 ^= 1u;
          }
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 92;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = ((unsigned __int8)v31 >> 6) + 48;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = (((unsigned __int8)v31 >> 3) & 7) + 48;
          ++v21;
          v17 += 3LL;
          LOBYTE(v31) = (v31 & 7) + 48;
          if ( v62 <= v21 )
            goto LABEL_33;
          v63 = v14;
        }
        else
        {
          v11 = v22 & (v63 ^ 1);
          if ( v64 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 92;
            ++v17;
          }
          if ( ++v21 >= v62 )
            goto LABEL_144;
          if ( (_BYTE)v11 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 39;
            v17 += 2LL;
            v64 = 0;
            v22 = 0;
          }
          else
          {
            v64 = 0;
          }
        }
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = v31;
        LOBYTE(v31) = s[v21];
        ++v17;
      }
    }
LABEL_127:
    LOBYTE(v14) = v20 == 2;
LABEL_65:
    v11 = (v14 | (unsigned __int8)v69 ^ 1) ^ 1;
    LOBYTE(v11) = v82 | (v14 | v69 ^ 1) ^ 1;
    if ( v82 | (unsigned __int8)((v14 | v69 ^ 1) ^ 1) )
    {
LABEL_17:
      v11 = 0;
      if ( a7 )
      {
LABEL_18:
        if ( (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v31 >> 5)) >> v31) & 1 )
        {
          v32 = v20 == 2;
LABEL_20:
          if ( v82 )
            return sub_401E50(v9, v10, s);
LABEL_21:
          ++v21;
LABEL_22:
          v14 = v22 ^ 1;
          if ( v32 & (unsigned __int8)(v22 ^ 1) )
          {
            if ( v10 > v17 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v17 += 3LL;
            LOBYTE(v14) = v32 & (v22 ^ 1);
            v22 = v14;
          }
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 92;
          ++v17;
          goto LABEL_33;
        }
      }
      goto LABEL_121;
    }
LABEL_66:
    ++v21;
    if ( v71 )
    {
LABEL_67:
      v32 = v20 == 2;
      goto LABEL_22;
    }
    v11 = v22 & (v11 ^ 1);
LABEL_144:
    if ( (_BYTE)v11 )
    {
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 39;
      if ( v10 > v17 + 1 )
        *(_BYTE *)(v9 + v17 + 1) = 39;
      v17 += 2LL;
      v22 = 0;
    }
LABEL_33:
    if ( v17 < v10 )
      *(_BYTE *)(v9 + v17) = v31;
    ++v17;
  }
  ps = 0LL;
  if ( v19 == -1LL )
  {
    v53 = v20;
    v54 = v22;
    v55 = v23;
    v56 = strlen(s);
    v20 = v53;
    LOBYTE(v22) = v54;
    v23 = v55;
    v19 = v56;
  }
  v84 = v17;
  v83 = v22;
  v57 = 0LL;
  v85 = v23;
  v77 = v9;
  v78 = v10;
  v75 = v19;
  v76 = v20;
  while ( 1 )
  {
    v58 = v21 + v57;
    LODWORD(v59) = sub_405190(&wc, &s[v21] + v57, v75 - (v21 + v57), &ps);
    v60 = v59;
    if ( !v59 )
    {
      v11 ^= 1u;
      v47 = v57;
      v9 = v77;
      v22 = v83;
      v17 = v84;
      v10 = v78;
      v14 = (unsigned __int8)(v11 & v69);
      v19 = v75;
      v20 = v76;
      goto LABEL_252;
    }
    if ( v59 == -1 )
    {
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v9 = v77;
      v10 = v78;
      v19 = v75;
      v20 = v76;
      v14 = (unsigned __int8)v69;
      goto LABEL_252;
    }
    if ( v59 == -2 )
    {
      v19 = v75;
      v65 = v21 + v57;
      v66 = &s[v21] + v57;
      v67 = v57;
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v9 = v77;
      v10 = v78;
      v20 = v76;
      if ( v65 < v75 && *v66 )
      {
        do
          ++v67;
        while ( v75 > v21 + v67 && v85[v67] );
        v47 = v67;
      }
      v14 = (unsigned __int8)v69;
LABEL_252:
      if ( v47 > 1 )
        goto LABEL_206;
      goto LABEL_126;
    }
    if ( v82 && v76 == 2 && v59 != 1 )
      break;
LABEL_187:
    if ( !iswprint(wc) )
      v11 = 0;
    v57 += v60;
    if ( mbsinit(&ps) )
    {
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v14 = v11 ^ 1;
      v9 = v77;
      v10 = v78;
      v19 = v75;
      v20 = v76;
      LOBYTE(v14) = v69 & (v11 ^ 1);
      goto LABEL_252;
    }
  }
  v61 = &s[v58 + 1];
  while ( (unsigned __int8)(*v61 - 91) > 0x21u || !((1LL << (*v61 - 91)) & 0x20000002BLL) )
  {
    if ( &s[v59] + v58 == ++v61 )
      goto LABEL_187;
  }
  v9 = v77;
  v10 = v78;
  return sub_401E50(v9, v10, s);
}

unsigned __int64 __fastcall sub_401E50(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  __int64 v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // ebp@1
  char v12; // zf@1
  size_t v13; // rax@1
  int v14; // edx@1
  signed int v15; // er11@1
  unsigned __int64 v16; // r10@1
  unsigned __int64 v17; // rbx@2
  signed int v18; // eax@3
  unsigned __int64 v19; // r11@3
  signed int v20; // er10@3
  unsigned __int64 v21; // r13@3
  int v22; // er8@3
  char *v23; // r9@7
  signed int v24; // ST58_4@11
  unsigned __int8 v25; // ST50_1@11
  size_t v26; // rax@11
  signed int v27; // ST60_4@13
  unsigned __int64 v28; // ST58_8@13
  unsigned __int8 v29; // ST50_1@13
  int v30; // eax@13
  unsigned __int64 v31; // r12@15
  bool v32; // al@19
  char *v33; // rax@50
  char i; // al@52
  signed int v35; // ST48_4@56
  unsigned __int64 v36; // ST30_8@56
  size_t v37; // rax@56
  bool v38; // al@60
  char v39; // cl@87
  int v40; // eax@105
  signed __int64 v41; // rcx@112
  unsigned __int64 v42; // rax@115
  signed int v43; // ST58_4@125
  unsigned __int64 v44; // ST50_8@125
  unsigned __int8 v45; // ST48_1@125
  const unsigned __int16 **v46; // rax@125
  unsigned __int64 v47; // rcx@125
  int v48; // edx@125
  unsigned __int64 result; // rax@132
  signed __int64 v50; // rsi@161
  char v51; // dl@177
  char *v52; // rax@178
  signed int v53; // ST58_4@185
  char v54; // ST50_1@185
  char *v55; // ST48_8@185
  size_t v56; // rax@185
  unsigned __int64 v57; // rbx@186
  unsigned __int64 v58; // r14@190
  __int64 v59; // rax@190
  __int64 v60; // r15@190
  char *v61; // rdx@195
  unsigned __int64 v62; // rcx@206
  int v63; // eax@206
  char v64; // si@206
  unsigned __int64 v65; // rsi@255
  char *v66; // rdi@255
  unsigned __int64 v67; // rax@255
  int v68; // [sp+Ch] [bp-ACh]@1
  char v69; // [sp+Ch] [bp-ACh]@2
  unsigned __int64 v70; // [sp+10h] [bp-A8h]@1
  char v71; // [sp+10h] [bp-A8h]@7
  char *s; // [sp+18h] [bp-A0h]@1
  unsigned __int64 n; // [sp+20h] [bp-98h]@2
  char *v74; // [sp+28h] [bp-90h]@13
  unsigned __int64 v75; // [sp+28h] [bp-90h]@186
  signed int v76; // [sp+30h] [bp-88h]@186
  __int64 v77; // [sp+38h] [bp-80h]@186
  unsigned __int64 v78; // [sp+40h] [bp-78h]@186
  char *s2; // [sp+48h] [bp-70h]@2
  size_t v80; // [sp+50h] [bp-68h]@1
  char v81; // [sp+58h] [bp-60h]@1
  bool v82; // [sp+5Dh] [bp-5Bh]@2
  unsigned __int8 v83; // [sp+5Eh] [bp-5Ah]@186
  unsigned __int64 v84; // [sp+60h] [bp-58h]@186
  char *v85; // [sp+68h] [bp-50h]@186
  wint_t wc; // [sp+74h] [bp-44h]@187
  mbstate_t ps; // [sp+78h] [bp-40h]@184

  v9 = (__int64)a1;
  v10 = a2;
  v11 = a6 & 2;
  s = a3;
  v70 = a4;
  v68 = a5;
  v81 = a6;
  v13 = __ctype_get_mb_cur_max();
  v15 = v68;
  v80 = v13;
  v16 = v70;
  switch ( v68 )
  {
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v69 = 0;
        goto LABEL_38;
      }
      v82 = 1;
      v17 = 0LL;
      v69 = 0;
      n = 1LL;
      s2 = "'";
      break;
    case 4:
      if ( v11 )
      {
LABEL_2:
        v82 = 1;
        v17 = 0LL;
        v15 = 2;
        v69 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v69 = 1;
LABEL_38:
        if ( a2 )
          *a1 = 39;
        v82 = 0;
        v17 = 1LL;
        v15 = 2;
        n = 1LL;
        s2 = "'";
      }
      break;
    case 5:
      if ( v11 )
      {
        v82 = 1;
        v17 = 0LL;
        v69 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v82 = 0;
        v17 = 1LL;
        v69 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v82 = 1;
      v17 = 0LL;
      v15 = 5;
      v69 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v82 = 0;
      v17 = 0LL;
      v69 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_401D50("`", v68);
        v33 = sub_401D50("'", v68);
        v16 = v70;
        v15 = v68;
        a9 = v33;
      }
      v17 = 0LL;
      if ( !v11 )
      {
        for ( i = *a8; i; i = a8[v17] )
        {
          if ( a2 > v17 )
            a1[v17] = i;
          ++v17;
        }
      }
      v35 = v15;
      v36 = v16;
      v82 = v11 != 0;
      v37 = strlen(a9);
      v69 = 1;
      v16 = v36;
      n = v37;
      v15 = v35;
      s2 = a9;
      break;
    case 0:
      v82 = 0;
      v17 = 0LL;
      v69 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 3:
      v82 = 1;
      v17 = 0LL;
      v15 = 2;
      v69 = 1;
      n = 1LL;
      s2 = "'";
      break;
    default:
      abort();
      return result;
  }
  v18 = v15;
  v19 = v16;
  v20 = v18;
  v21 = 0LL;
  v22 = 0;
  while ( 1 )
  {
    LOBYTE(v11) = v19 != v21;
    if ( v19 == -1LL )
      LOBYTE(v11) = s[v21] != 0;
    if ( !(_BYTE)v11 )
    {
      if ( v17 == 0 && v82 && v20 == 2 )
        return sub_401E50(v9, v10, s);
      if ( s2 )
      {
        if ( !v82 )
        {
          v51 = *s2;
          if ( *s2 )
          {
            v52 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                *(_BYTE *)(v9 + v17) = v51;
              v51 = v52[++v17];
            }
            while ( v51 );
          }
        }
      }
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 0;
      return v17;
    }
    v23 = &s[v21];
    v71 = v69 & (v20 != 2);
    if ( !((unsigned __int8)v69 & (v20 != 2)) )
    {
      LOBYTE(v31) = *v23;
      switch ( *v23 )
      {
        case 123:
        case 125:
LABEL_60:
          v38 = v19 != 1;
          if ( v19 == -1LL )
            v38 = s[1] != 0;
          LOBYTE(v14) = v20 == 2;
          if ( v38 )
            goto LABEL_65;
          goto LABEL_63;
        case 63:
LABEL_69:
          if ( v20 == 2 )
          {
            if ( v82 )
              return sub_401E50(v9, v10, s);
            v11 = 0;
            LOBYTE(v31) = 63;
            goto LABEL_66;
          }
          if ( v20 != 5 )
          {
            LOBYTE(v31) = 63;
            LOBYTE(v14) = v20 == 2;
            goto LABEL_65;
          }
          if ( !(v81 & 4) )
          {
            v14 = 0;
            LOBYTE(v31) = 63;
            goto LABEL_65;
          }
          v14 = 0;
          LOBYTE(v31) = 63;
          if ( v21 + 2 >= v19 || s[v21 + 1] != 63 )
            goto LABEL_65;
          v31 = (unsigned __int8)s[v21 + 2];
          if ( (unsigned __int8)v31 > 0x3Eu || (v50 = 8070630310989004800LL, !_bittest64(&v50, v31)) )
          {
            LOBYTE(v31) = 63;
            goto LABEL_65;
          }
          if ( v82 )
            return sub_401E50(v9, v10, s);
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 63;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 34;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 34;
          if ( v10 > v17 + 3 )
            *(_BYTE *)(v9 + v17 + 3) = 63;
          v17 += 4LL;
          v14 = 0;
          v11 = 0;
          v21 += 2LL;
          goto LABEL_118;
        case 39:
LABEL_73:
          v14 = 0;
          LOBYTE(v31) = 39;
          if ( v20 != 2 )
            goto LABEL_65;
          if ( v82 )
            return sub_401E50(v9, v10, s);
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 92;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v17 += 3LL;
          ++v21;
          v22 = 0;
          LOBYTE(v31) = 39;
          goto LABEL_82;
        default:
          goto LABEL_124;
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
          goto LABEL_127;
        case 10:
          LOBYTE(v31) = 10;
          v39 = 110;
          goto LABEL_130;
        case 9:
          LOBYTE(v31) = 9;
          v39 = 116;
          goto LABEL_130;
        case 7:
          LOBYTE(v31) = 7;
          v39 = 97;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 0:
          if ( !v69 )
          {
            if ( v81 & 1 )
            {
              ++v21;
              continue;
            }
            if ( !v82 )
            {
              ++v21;
              v11 = v22;
              LOBYTE(v31) = 0;
              goto LABEL_144;
            }
            v11 = 0;
            if ( a7 )
            {
              v71 = 0;
              LOBYTE(v31) = 0;
              goto LABEL_18;
            }
            LOBYTE(v31) = 0;
            goto LABEL_122;
          }
LABEL_103:
          if ( v82 )
            return sub_401E50(v9, v10, s);
          v71 = 0;
LABEL_105:
          LOBYTE(v14) = v20 == 2;
          v40 = v22 ^ 1;
          LOBYTE(v40) = (v20 == 2) & (v22 ^ 1);
          if ( (_BYTE)v40 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v41 = v17 + 3;
            if ( v10 <= v17 + 3 )
            {
              v17 += 4LL;
              ++v21;
              v22 = v40;
              LOBYTE(v31) = 48;
              goto LABEL_82;
            }
            v22 = v40;
LABEL_114:
            *(_BYTE *)(v9 + v41) = 92;
            goto LABEL_115;
          }
          v41 = v17;
          if ( v17 < v10 )
            goto LABEL_114;
LABEL_115:
          v17 = v41 + 1;
          v42 = v21 + 1;
          if ( v20 == 2 )
          {
            ++v21;
            LOBYTE(v31) = 48;
LABEL_82:
            if ( v71 )
              goto LABEL_67;
            goto LABEL_33;
          }
          LOBYTE(v31) = 48;
          if ( v42 < v19 && (unsigned __int8)(s[v42] - 48) <= 9u )
          {
            if ( v10 > v17 )
              *(_BYTE *)(v9 + v17) = 48;
            if ( v10 > v41 + 2 )
              *(_BYTE *)(v9 + v41 + 2) = 48;
            v17 = v41 + 3;
            LOBYTE(v31) = 48;
          }
LABEL_118:
          if ( !v69 || (_BYTE)v14 )
            goto LABEL_66;
          if ( a7 )
            goto LABEL_18;
          break;
        case 8:
          LOBYTE(v31) = 8;
          v39 = 98;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 92:
          if ( v20 == 2 )
          {
            if ( v82 )
              return sub_401E50(v9, v10, s);
            ++v21;
            v11 = v22;
            LOBYTE(v31) = 92;
            goto LABEL_144;
          }
LABEL_87:
          v11 = v82 & (unsigned __int8)v69;
          LOBYTE(v31) = 92;
          v39 = 92;
          v14 = v82 & (unsigned __int8)v69;
          LOBYTE(v14) = (n != 0) & v14;
          if ( (_BYTE)v14 )
          {
            ++v21;
            v11 = v22;
            goto LABEL_144;
          }
LABEL_88:
          if ( !v69 )
            goto LABEL_65;
          v32 = v14;
          LOBYTE(v31) = v39;
          goto LABEL_20;
        case 35:
        case 126:
          LOBYTE(v14) = v20 == 2;
LABEL_63:
          if ( !v21 )
            goto LABEL_64;
          goto LABEL_65;
        case 32:
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
          LOBYTE(v14) = v20 == 2;
LABEL_64:
          if ( !((unsigned __int8)v14 & v82) )
            goto LABEL_65;
          return sub_401E50(v9, v10, s);
        case 13:
          LOBYTE(v31) = 13;
          v39 = 114;
LABEL_130:
          LOBYTE(v14) = v20 == 2;
          v71 = v20 == 2 && v82;
          if ( v71 )
            return sub_401E50(v9, v10, s);
          goto LABEL_88;
        case 12:
          LOBYTE(v31) = 12;
          v39 = 102;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 11:
          LOBYTE(v31) = 11;
          v39 = 118;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
      }
LABEL_121:
      v32 = v20 == 2;
      if ( v71 )
        goto LABEL_20;
LABEL_122:
      ++v21;
      v11 = v22 & (v11 ^ 1);
      goto LABEL_144;
    }
    if ( !n )
      goto LABEL_271;
    if ( v19 == -1LL && n > 1 )
    {
      v24 = v20;
      v25 = v22;
      v26 = strlen(s);
      v20 = v24;
      v22 = v25;
      v23 = &s[v21];
      v19 = v26;
    }
    if ( v21 + n > v19
      || (v27 = v20,
          v28 = v19,
          v29 = v22,
          v74 = v23,
          v30 = memcmp(v23, s2, n),
          v23 = v74,
          v22 = v29,
          v19 = v28,
          v20 = v27,
          v30) )
    {
LABEL_271:
      LOBYTE(v31) = *v23;
      switch ( *v23 )
      {
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
          v71 = 0;
          goto LABEL_17;
        case 123:
        case 125:
          v71 = 0;
          goto LABEL_60;
        case 63:
          v71 = 0;
          goto LABEL_69;
        case 39:
          v71 = 0;
          goto LABEL_73;
        case 32:
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
          v71 = 0;
LABEL_85:
          v14 = 0;
          goto LABEL_65;
        case 92:
          v71 = 0;
          goto LABEL_87;
        case 10:
LABEL_90:
          LOBYTE(v31) = 110;
          v32 = 0;
          goto LABEL_91;
        case 8:
LABEL_93:
          LOBYTE(v31) = 98;
          v32 = 0;
          goto LABEL_91;
        case 7:
LABEL_94:
          LOBYTE(v31) = 97;
          v32 = 0;
          goto LABEL_91;
        case 13:
          v71 = 0;
LABEL_96:
          LOBYTE(v31) = 13;
          v39 = 114;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 35:
        case 126:
          v71 = 0;
LABEL_98:
          if ( v21 )
            goto LABEL_17;
          v14 = 0;
          goto LABEL_65;
        case 12:
LABEL_100:
          LOBYTE(v31) = 102;
          v32 = 0;
          goto LABEL_91;
        case 11:
LABEL_101:
          LOBYTE(v31) = 118;
          v32 = 0;
          goto LABEL_91;
        case 9:
LABEL_102:
          LOBYTE(v31) = 116;
          v32 = 0;
LABEL_91:
          if ( v82 )
            return sub_401E50(v9, v10, s);
          goto LABEL_21;
        case 0:
          goto LABEL_103;
        default:
          v71 = 0;
          break;
      }
    }
    else
    {
      if ( v82 )
        return sub_401E50(v9, v10, s);
      LOBYTE(v31) = *v74;
      switch ( *v74 )
      {
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
          goto LABEL_17;
        case 123:
        case 125:
          goto LABEL_60;
        case 63:
          goto LABEL_69;
        case 39:
          goto LABEL_73;
        case 32:
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
          goto LABEL_85;
        case 92:
          goto LABEL_87;
        case 10:
          goto LABEL_90;
        case 8:
          goto LABEL_93;
        case 7:
          goto LABEL_94;
        case 13:
          goto LABEL_96;
        case 35:
        case 126:
          goto LABEL_98;
        case 12:
          goto LABEL_100;
        case 11:
          goto LABEL_101;
        case 9:
          goto LABEL_102;
        case 0:
          goto LABEL_105;
        default:
          break;
      }
    }
LABEL_124:
    if ( v80 != 1 )
      break;
    v43 = v20;
    v44 = v19;
    v45 = v22;
    v46 = __ctype_b_loc();
    v22 = v45;
    v19 = v44;
    v20 = v43;
    v47 = 1LL;
    v48 = (*v46)[(unsigned __int8)v31];
    LOWORD(v48) = (unsigned __int16)v48 >> 14;
    v14 = v48 ^ 1;
    LOBYTE(v14) = v69 & v14;
LABEL_126:
    if ( (_BYTE)v14 )
    {
      v14 = (unsigned __int8)v69;
LABEL_206:
      v62 = v21 + v47;
      v63 = 0;
      v64 = v71;
      while ( 1 )
      {
        if ( (_BYTE)v14 )
        {
          if ( v82 )
            return sub_401E50(v9, v10, s);
          if ( (v20 == 2) & (unsigned __int8)(v22 ^ 1) )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v17 += 3LL;
            v22 ^= 1u;
          }
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 92;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = ((unsigned __int8)v31 >> 6) + 48;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = (((unsigned __int8)v31 >> 3) & 7) + 48;
          ++v21;
          v17 += 3LL;
          LOBYTE(v31) = (v31 & 7) + 48;
          if ( v62 <= v21 )
            goto LABEL_33;
          v63 = v14;
        }
        else
        {
          v11 = v22 & (v63 ^ 1);
          if ( v64 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 92;
            ++v17;
          }
          if ( ++v21 >= v62 )
            goto LABEL_144;
          if ( (_BYTE)v11 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 39;
            v17 += 2LL;
            v64 = 0;
            v22 = 0;
          }
          else
          {
            v64 = 0;
          }
        }
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = v31;
        LOBYTE(v31) = s[v21];
        ++v17;
      }
    }
LABEL_127:
    LOBYTE(v14) = v20 == 2;
LABEL_65:
    v11 = (v14 | (unsigned __int8)v69 ^ 1) ^ 1;
    LOBYTE(v11) = v82 | (v14 | v69 ^ 1) ^ 1;
    if ( v82 | (unsigned __int8)((v14 | v69 ^ 1) ^ 1) )
    {
LABEL_17:
      v11 = 0;
      if ( a7 )
      {
LABEL_18:
        if ( (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v31 >> 5)) >> v31) & 1 )
        {
          v32 = v20 == 2;
LABEL_20:
          if ( v82 )
            return sub_401E50(v9, v10, s);
LABEL_21:
          ++v21;
LABEL_22:
          v14 = v22 ^ 1;
          if ( v32 & (unsigned __int8)(v22 ^ 1) )
          {
            if ( v10 > v17 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v17 += 3LL;
            LOBYTE(v14) = v32 & (v22 ^ 1);
            v22 = v14;
          }
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 92;
          ++v17;
          goto LABEL_33;
        }
      }
      goto LABEL_121;
    }
LABEL_66:
    ++v21;
    if ( v71 )
    {
LABEL_67:
      v32 = v20 == 2;
      goto LABEL_22;
    }
    v11 = v22 & (v11 ^ 1);
LABEL_144:
    if ( (_BYTE)v11 )
    {
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 39;
      if ( v10 > v17 + 1 )
        *(_BYTE *)(v9 + v17 + 1) = 39;
      v17 += 2LL;
      v22 = 0;
    }
LABEL_33:
    if ( v17 < v10 )
      *(_BYTE *)(v9 + v17) = v31;
    ++v17;
  }
  ps = 0LL;
  if ( v19 == -1LL )
  {
    v53 = v20;
    v54 = v22;
    v55 = v23;
    v56 = strlen(s);
    v20 = v53;
    LOBYTE(v22) = v54;
    v23 = v55;
    v19 = v56;
  }
  v84 = v17;
  v83 = v22;
  v57 = 0LL;
  v85 = v23;
  v77 = v9;
  v78 = v10;
  v75 = v19;
  v76 = v20;
  while ( 1 )
  {
    v58 = v21 + v57;
    LODWORD(v59) = sub_405190(&wc, &s[v21] + v57, v75 - (v21 + v57), &ps);
    v60 = v59;
    if ( !v59 )
    {
      v11 ^= 1u;
      v47 = v57;
      v9 = v77;
      v22 = v83;
      v17 = v84;
      v10 = v78;
      v14 = (unsigned __int8)(v11 & v69);
      v19 = v75;
      v20 = v76;
      goto LABEL_252;
    }
    if ( v59 == -1 )
    {
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v9 = v77;
      v10 = v78;
      v19 = v75;
      v20 = v76;
      v14 = (unsigned __int8)v69;
      goto LABEL_252;
    }
    if ( v59 == -2 )
    {
      v19 = v75;
      v65 = v21 + v57;
      v66 = &s[v21] + v57;
      v67 = v57;
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v9 = v77;
      v10 = v78;
      v20 = v76;
      if ( v65 < v75 && *v66 )
      {
        do
          ++v67;
        while ( v75 > v21 + v67 && v85[v67] );
        v47 = v67;
      }
      v14 = (unsigned __int8)v69;
LABEL_252:
      if ( v47 > 1 )
        goto LABEL_206;
      goto LABEL_126;
    }
    if ( v82 && v76 == 2 && v59 != 1 )
      break;
LABEL_187:
    if ( !iswprint(wc) )
      v11 = 0;
    v57 += v60;
    if ( mbsinit(&ps) )
    {
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v14 = v11 ^ 1;
      v9 = v77;
      v10 = v78;
      v19 = v75;
      v20 = v76;
      LOBYTE(v14) = v69 & (v11 ^ 1);
      goto LABEL_252;
    }
  }
  v61 = &s[v58 + 1];
  while ( (unsigned __int8)(*v61 - 91) > 0x21u || !((1LL << (*v61 - 91)) & 0x20000002BLL) )
  {
    if ( &s[v59] + v58 == ++v61 )
      goto LABEL_187;
  }
  v9 = v77;
  v10 = v78;
  return sub_401E50(v9, v10, s);
}

_BYTE *__fastcall sub_402E60(unsigned int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@3
  __int128 *v10; // rax@4
  __int64 v11; // rdx@4
  signed __int64 v12; // rbx@6
  _BYTE *v13; // r12@6
  unsigned __int64 v14; // ST30_8@6
  unsigned __int64 v15; // rax@6
  unsigned __int64 v16; // rsi@7
  __int64 v17; // ST30_8@8
  _BYTE *v18; // rax@9
  int v19; // er8@9
  __int128 *v21; // rax@11
  char *v22; // [sp+8h] [bp-50h]@1
  int v23; // [sp+18h] [bp-40h]@1
  int v24; // [sp+1Ch] [bp-3Ch]@6

  v4 = a3;
  v5 = a4;
  v22 = a2;
  v6 = __errno_location();
  v7 = off_6081F8;
  v8 = v6;
  v23 = *v6;
  if ( (a1 & 0x80000000) != 0 )
    abort();
  if ( dword_608210 <= a1 )
  {
    v9 = 16LL * (a1 + 1);
    if ( off_6081F8 == &xmmword_608200 )
    {
      LODWORD(v21) = sub_403CC0(0LL, v9);
      v11 = a1 + 1;
      v7 = v21;
      off_6081F8 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_608200);
    }
    else
    {
      LODWORD(v10) = sub_403CC0(off_6081F8, v9);
      v11 = a1 + 1;
      off_6081F8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_608210], 0, 16 * (v11 - (unsigned int)dword_608210));
    dword_608210 = a1 + 1;
  }
  v12 = (signed __int64)&v7[a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_401E50(v13, *(_QWORD *)v12, v22, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_608280 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_403C70(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_401E50(v18, v16, v22, v4, v19, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_402E60(unsigned int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@3
  __int128 *v10; // rax@4
  __int64 v11; // rdx@4
  signed __int64 v12; // rbx@6
  _BYTE *v13; // r12@6
  unsigned __int64 v14; // ST30_8@6
  unsigned __int64 v15; // rax@6
  unsigned __int64 v16; // rsi@7
  __int64 v17; // ST30_8@8
  _BYTE *v18; // rax@9
  int v19; // er8@9
  __int128 *v21; // rax@11
  char *v22; // [sp+8h] [bp-50h]@1
  int v23; // [sp+18h] [bp-40h]@1
  int v24; // [sp+1Ch] [bp-3Ch]@6

  v4 = a3;
  v5 = a4;
  v22 = a2;
  v6 = __errno_location();
  v7 = off_6081F8;
  v8 = v6;
  v23 = *v6;
  if ( (a1 & 0x80000000) != 0 )
    abort();
  if ( dword_608210 <= a1 )
  {
    v9 = 16LL * (a1 + 1);
    if ( off_6081F8 == &xmmword_608200 )
    {
      LODWORD(v21) = sub_403CC0(0LL, v9);
      v11 = a1 + 1;
      v7 = v21;
      off_6081F8 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_608200);
    }
    else
    {
      LODWORD(v10) = sub_403CC0(off_6081F8, v9);
      v11 = a1 + 1;
      off_6081F8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_608210], 0, 16 * (v11 - (unsigned int)dword_608210));
    dword_608210 = a1 + 1;
  }
  v12 = (signed __int64)&v7[a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_401E50(v13, *(_QWORD *)v12, v22, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_608280 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_403C70(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_401E50(v18, v16, v22, v4, v19, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_403480(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_6083B0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_608380);
  v5 = _mm_load_si128((const __m128i *)&xmmword_608390);
  v6 = _mm_load_si128((const __m128i *)&xmmword_6083A0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_402E60(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_403500(char *a1)
{
  return sub_403480(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

int __fastcall sub_4036D0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // r14@5
  __int64 v11; // r13@5
  __int64 v12; // r12@5
  __int64 v13; // r15@5
  __int64 v14; // r8@5
  __int64 v15; // ST40_8@5
  __int64 v16; // rcx@5
  __int64 v17; // rbx@5
  __int64 v18; // ST38_8@5
  __int64 v19; // ST30_8@5
  char *v20; // rax@5
  int result; // eax@5
  const char *v22; // rsi@7
  __int64 v23; // rcx@7
  __int64 v24; // r14@7
  __int64 v25; // r13@7
  __int64 v26; // r12@7
  __int64 v27; // r15@7
  __int64 v28; // rbx@7
  char *v29; // rax@8
  __int64 v30; // rbx@9
  char *v31; // rax@9
  __int64 v32; // r12@10
  __int64 v33; // rbx@10
  char *v34; // rax@10
  __int64 v35; // r13@11
  __int64 v36; // r12@11
  __int64 v37; // rbx@11
  char *v38; // rax@11
  __int64 v39; // r14@12
  __int64 v40; // r13@12
  __int64 v41; // r12@12
  __int64 v42; // rbx@12
  char *v43; // rax@12
  __int64 v44; // r15@13
  __int64 v45; // r14@13
  __int64 v46; // r13@13
  __int64 v47; // r12@13
  __int64 v48; // rbx@13
  char *v49; // rax@13
  __int64 v50; // rcx@15
  __int64 v51; // r12@15
  __int64 v52; // r15@15
  __int64 v53; // r14@15
  __int64 v54; // r13@15
  __int64 v55; // rbx@15
  __int64 v56; // ST30_8@15
  char *v57; // rax@15
  __int64 v58; // r13@16
  __int64 v59; // r12@16
  __int64 v60; // r15@16
  __int64 v61; // r14@16
  __int64 v62; // ST38_8@16
  __int64 v63; // ST30_8@16
  __int64 v64; // rbx@16
  char *v65; // rax@16
  __int64 v66; // rcx@17
  int v67; // [sp-10h] [bp-68h]@13
  __int64 v68; // [sp-8h] [bp-60h]@0
  __int64 v69; // [sp+0h] [bp-58h]@7
  __int64 v70; // [sp+8h] [bp-50h]@7
  __int64 v71; // [sp+10h] [bp-48h]@7
  __int64 v72; // [sp+18h] [bp-40h]@7

  v6 = a6;
  v7 = a5;
  if ( a2 )
    fprintf(stream, "%s (%s) %s\n", a2, a3, a4);
  else
    fprintf(stream, "%s %s\n");
  v8 = dcgettext(0LL, "(C)", 5);
  fprintf(stream, "Copyright %s %d Free Software Foundation, Inc.", v8, 2015LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 56);
      v11 = *(_QWORD *)(v7 + 48);
      v12 = *(_QWORD *)(v7 + 40);
      v13 = *(_QWORD *)(v7 + 32);
      v14 = *(_QWORD *)(v7 + 16);
      v15 = *(_QWORD *)(v7 + 24);
      v16 = *(_QWORD *)(v7 + 8);
      v17 = *(_QWORD *)v7;
      v18 = v14;
      v19 = v16;
      v20 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v20, v17, v19, v18, v15, v13, v12, v11, v10);
    case 9LL:
      v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v23 = *(_QWORD *)(v7 + 8);
      v24 = *(_QWORD *)(v7 + 56);
      v25 = *(_QWORD *)(v7 + 48);
      v72 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 40);
      v27 = *(_QWORD *)(v7 + 32);
      v71 = *(_QWORD *)(v7 + 24);
      v70 = *(_QWORD *)(v7 + 16);
      v28 = *(_QWORD *)v7;
      v69 = v23;
      goto LABEL_8;
    case 1LL:
      v30 = *(_QWORD *)v7;
      v31 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v31, v30);
    case 2LL:
      v32 = *(_QWORD *)(v7 + 8);
      v33 = *(_QWORD *)v7;
      v34 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v34, v33, v32);
    case 3LL:
      v35 = *(_QWORD *)(v7 + 16);
      v36 = *(_QWORD *)(v7 + 8);
      v37 = *(_QWORD *)v7;
      v38 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v38, v37, v36, v35);
    case 4LL:
      v39 = *(_QWORD *)(v7 + 24);
      v40 = *(_QWORD *)(v7 + 16);
      v41 = *(_QWORD *)(v7 + 8);
      v42 = *(_QWORD *)v7;
      v43 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v43, v42, v41, v40, v39);
    case 5LL:
      v44 = *(_QWORD *)(v7 + 32);
      v45 = *(_QWORD *)(v7 + 24);
      v46 = *(_QWORD *)(v7 + 16);
      v47 = *(_QWORD *)(v7 + 8);
      v48 = *(_QWORD *)v7;
      v49 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v49, v48, v47, v46, v45, v44);
      goto LABEL_14;
    case 6LL:
      v50 = *(_QWORD *)(v7 + 8);
      v51 = *(_QWORD *)(v7 + 40);
      v52 = *(_QWORD *)(v7 + 32);
      v53 = *(_QWORD *)(v7 + 24);
      v54 = *(_QWORD *)(v7 + 16);
      v55 = *(_QWORD *)v7;
      v56 = v50;
      v57 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v57, v55, v56, v54, v53, v52);
LABEL_14:
      result = v67;
      break;
    case 7LL:
      v58 = *(_QWORD *)(v7 + 48);
      v59 = *(_QWORD *)(v7 + 40);
      v60 = *(_QWORD *)(v7 + 32);
      v61 = *(_QWORD *)(v7 + 24);
      v62 = *(_QWORD *)(v7 + 16);
      v63 = *(_QWORD *)(v7 + 8);
      v64 = *(_QWORD *)v7;
      v65 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      result = fprintf(stream, v65, v64, v63, v62, v61, v60, v59, v58, v68);
      break;
    default:
      v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v66 = *(_QWORD *)(v7 + 8);
      v24 = *(_QWORD *)(v7 + 56);
      v25 = *(_QWORD *)(v7 + 48);
      v72 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 40);
      v27 = *(_QWORD *)(v7 + 32);
      v71 = *(_QWORD *)(v7 + 24);
      v70 = *(_QWORD *)(v7 + 16);
      v28 = *(_QWORD *)v7;
      v69 = v66;
LABEL_8:
      v29 = dcgettext(0LL, v22, 5);
      result = fprintf(stream, v29, v28, v69, v70, v71, v27, v26, v25, v24, v72);
      break;
  }
  return result;
}

int __fastcall sub_4036D0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // r14@5
  __int64 v11; // r13@5
  __int64 v12; // r12@5
  __int64 v13; // r15@5
  __int64 v14; // r8@5
  __int64 v15; // ST40_8@5
  __int64 v16; // rcx@5
  __int64 v17; // rbx@5
  __int64 v18; // ST38_8@5
  __int64 v19; // ST30_8@5
  char *v20; // rax@5
  int result; // eax@5
  const char *v22; // rsi@7
  __int64 v23; // rcx@7
  __int64 v24; // r14@7
  __int64 v25; // r13@7
  __int64 v26; // r12@7
  __int64 v27; // r15@7
  __int64 v28; // rbx@7
  char *v29; // rax@8
  __int64 v30; // rbx@9
  char *v31; // rax@9
  __int64 v32; // r12@10
  __int64 v33; // rbx@10
  char *v34; // rax@10
  __int64 v35; // r13@11
  __int64 v36; // r12@11
  __int64 v37; // rbx@11
  char *v38; // rax@11
  __int64 v39; // r14@12
  __int64 v40; // r13@12
  __int64 v41; // r12@12
  __int64 v42; // rbx@12
  char *v43; // rax@12
  __int64 v44; // r15@13
  __int64 v45; // r14@13
  __int64 v46; // r13@13
  __int64 v47; // r12@13
  __int64 v48; // rbx@13
  char *v49; // rax@13
  __int64 v50; // rcx@15
  __int64 v51; // r12@15
  __int64 v52; // r15@15
  __int64 v53; // r14@15
  __int64 v54; // r13@15
  __int64 v55; // rbx@15
  __int64 v56; // ST30_8@15
  char *v57; // rax@15
  __int64 v58; // r13@16
  __int64 v59; // r12@16
  __int64 v60; // r15@16
  __int64 v61; // r14@16
  __int64 v62; // ST38_8@16
  __int64 v63; // ST30_8@16
  __int64 v64; // rbx@16
  char *v65; // rax@16
  __int64 v66; // rcx@17
  int v67; // [sp-10h] [bp-68h]@13
  __int64 v68; // [sp-8h] [bp-60h]@0
  __int64 v69; // [sp+0h] [bp-58h]@7
  __int64 v70; // [sp+8h] [bp-50h]@7
  __int64 v71; // [sp+10h] [bp-48h]@7
  __int64 v72; // [sp+18h] [bp-40h]@7

  v6 = a6;
  v7 = a5;
  if ( a2 )
    fprintf(stream, "%s (%s) %s\n", a2, a3, a4);
  else
    fprintf(stream, "%s %s\n");
  v8 = dcgettext(0LL, "(C)", 5);
  fprintf(stream, "Copyright %s %d Free Software Foundation, Inc.", v8, 2015LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 56);
      v11 = *(_QWORD *)(v7 + 48);
      v12 = *(_QWORD *)(v7 + 40);
      v13 = *(_QWORD *)(v7 + 32);
      v14 = *(_QWORD *)(v7 + 16);
      v15 = *(_QWORD *)(v7 + 24);
      v16 = *(_QWORD *)(v7 + 8);
      v17 = *(_QWORD *)v7;
      v18 = v14;
      v19 = v16;
      v20 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v20, v17, v19, v18, v15, v13, v12, v11, v10);
    case 9LL:
      v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v23 = *(_QWORD *)(v7 + 8);
      v24 = *(_QWORD *)(v7 + 56);
      v25 = *(_QWORD *)(v7 + 48);
      v72 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 40);
      v27 = *(_QWORD *)(v7 + 32);
      v71 = *(_QWORD *)(v7 + 24);
      v70 = *(_QWORD *)(v7 + 16);
      v28 = *(_QWORD *)v7;
      v69 = v23;
      goto LABEL_8;
    case 1LL:
      v30 = *(_QWORD *)v7;
      v31 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v31, v30);
    case 2LL:
      v32 = *(_QWORD *)(v7 + 8);
      v33 = *(_QWORD *)v7;
      v34 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v34, v33, v32);
    case 3LL:
      v35 = *(_QWORD *)(v7 + 16);
      v36 = *(_QWORD *)(v7 + 8);
      v37 = *(_QWORD *)v7;
      v38 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v38, v37, v36, v35);
    case 4LL:
      v39 = *(_QWORD *)(v7 + 24);
      v40 = *(_QWORD *)(v7 + 16);
      v41 = *(_QWORD *)(v7 + 8);
      v42 = *(_QWORD *)v7;
      v43 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v43, v42, v41, v40, v39);
    case 5LL:
      v44 = *(_QWORD *)(v7 + 32);
      v45 = *(_QWORD *)(v7 + 24);
      v46 = *(_QWORD *)(v7 + 16);
      v47 = *(_QWORD *)(v7 + 8);
      v48 = *(_QWORD *)v7;
      v49 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v49, v48, v47, v46, v45, v44);
      goto LABEL_14;
    case 6LL:
      v50 = *(_QWORD *)(v7 + 8);
      v51 = *(_QWORD *)(v7 + 40);
      v52 = *(_QWORD *)(v7 + 32);
      v53 = *(_QWORD *)(v7 + 24);
      v54 = *(_QWORD *)(v7 + 16);
      v55 = *(_QWORD *)v7;
      v56 = v50;
      v57 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v57, v55, v56, v54, v53, v52);
LABEL_14:
      result = v67;
      break;
    case 7LL:
      v58 = *(_QWORD *)(v7 + 48);
      v59 = *(_QWORD *)(v7 + 40);
      v60 = *(_QWORD *)(v7 + 32);
      v61 = *(_QWORD *)(v7 + 24);
      v62 = *(_QWORD *)(v7 + 16);
      v63 = *(_QWORD *)(v7 + 8);
      v64 = *(_QWORD *)v7;
      v65 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      result = fprintf(stream, v65, v64, v63, v62, v61, v60, v59, v58, v68);
      break;
    default:
      v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v66 = *(_QWORD *)(v7 + 8);
      v24 = *(_QWORD *)(v7 + 56);
      v25 = *(_QWORD *)(v7 + 48);
      v72 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 40);
      v27 = *(_QWORD *)(v7 + 32);
      v71 = *(_QWORD *)(v7 + 24);
      v70 = *(_QWORD *)(v7 + 16);
      v28 = *(_QWORD *)v7;
      v69 = v66;
LABEL_8:
      v29 = dcgettext(0LL, v22, 5);
      result = fprintf(stream, v29, v28, v69, v70, v71, v27, v26, v25, v24, v72);
      break;
  }
  return result;
}

int __fastcall sub_403B40(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4036D0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_4036D0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_403C70(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_403E90();
  }
  return result;
}

void *__fastcall sub_403CC0(void *a1, size_t a2)
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
        sub_403E90();
    }
  }
  return result;
}

void *__fastcall sub_403E30(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_403C70(a2);
  return memcpy(v2, a1, a2);
}

void __noreturn sub_403E90()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_403ED0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_403F10(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_403F10(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_403F70(__int64 a1, __int64 a2)
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
  v3 = *(_DWORD *)(a2 + 48);
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 52);
  v6 = *(_DWORD *)(a2 + 48);
  v7 = *(_DWORD *)a2;
  v8 = *(_DWORD *)(a2 + 52);
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
  *(_DWORD *)(a2 + 52) = v4;
  result = (unsigned int)(v4 - v8);
  *(_DWORD *)(a2 + 48) = result + v3;
  return result;
}

__int64 __fastcall sub_404050(signed int a1, __int64 a2, __int64 a3, const char **a4, signed int *a5, int a6, __int64 a7, int a8)
{
  __int64 v8; // r12@1
  signed int v9; // eax@2
  signed int v10; // ebp@2
  _BYTE *v11; // r8@5
  char v12; // al@8
  int v13; // eax@9
  __int64 v14; // rax@14
  __int64 v15; // rdx@14
  __int64 v16; // rax@14
  int v17; // ST2C_4@17
  _BYTE *v18; // ST18_8@17
  char *v19; // rax@17
  const char *v20; // rbx@18
  int v21; // er13@18
  char v22; // r14@18
  char *v23; // rax@18
  char v24; // dl@22
  char v25; // dl@24
  __int64 v26; // rax@25
  unsigned int v27; // eax@31
  bool v28; // cf@36
  bool v29; // zf@36
  signed __int64 v30; // rcx@37
  const char *v31; // rdi@37
  __int64 v32; // rdx@37
  _BYTE *v33; // rsi@37
  int v34; // edx@41
  int v35; // ecx@41
  int v36; // eax@41
  signed int v38; // edx@57
  __int64 v39; // rax@61
  __int64 v40; // rcx@63
  int v41; // esi@63
  char v42; // cl@67
  __int64 v43; // rax@76
  char v44; // r13@78
  const char *i; // r14@78
  signed int v46; // er13@83
  size_t v47; // r14@83
  const char **v48; // rbp@83
  const char *v49; // r12@83
  const char **v50; // r15@83
  _BYTE *v51; // r13@92
  int v52; // eax@96
  const char **v53; // rbx@97
  const char *v54; // r15@97
  __int64 v55; // r14@98
  const char *v56; // rsi@98
  size_t v57; // r13@98
  signed int v58; // ebp@98
  _QWORD *v59; // rax@102
  _BYTE *v60; // r13@110
  bool v61; // si@110
  signed int v62; // eax@113
  int v63; // ecx@113
  __int64 v64; // rbx@116
  int *v65; // rax@118
  signed int v66; // er15@127
  __int64 v67; // rdi@128
  __int64 v68; // r14@129
  __int64 v69; // rbx@138
  int v70; // ST2C_4@139
  _BYTE *v71; // ST18_8@139
  char *v72; // rax@139
  unsigned int v73; // ebp@141
  _BYTE *v74; // ST00_8@141
  __int64 v75; // rbx@141
  char *v76; // rax@141
  __int64 v77; // rax@148
  const char *v78; // rbp@148
  __int64 v79; // rbx@148
  unsigned int v80; // er13@149
  char *v81; // rax@149
  __int64 v82; // rbx@150
  void *v83; // rdi@152
  __int64 v84; // rbx@122
  char *v85; // rax@122
  __int64 v86; // rbp@160
  __int64 v87; // rbx@160
  char *v88; // rax@160
  char *v89; // rbx@160
  const char **j; // rax@160
  __int64 v91; // rbx@164
  size_t v92; // rax@164
  __int64 v93; // rbx@166
  signed int v94; // ST00_4@166
  size_t v95; // rax@166
  __int64 v96; // rdi@167
  __int64 v97; // rbx@168
  signed int v98; // eax@172
  char v99; // r13@175
  const char *v100; // r14@175
  signed int v101; // ebp@175
  int v102; // eax@177
  __int64 v103; // rbp@188
  __int64 v104; // rbx@189
  char *v105; // rax@189
  signed int v106; // eax@195
  const char **v107; // rsi@195
  __int64 v108; // rbp@197
  __int64 v109; // rbx@197
  char *v110; // rax@197
  __int64 v111; // rbx@200
  size_t v112; // rax@206
  __int64 v113; // rbx@191
  char *v114; // rax@191
  __int64 v115; // rax@211
  char *v116; // rax@213
  const char *v117; // rbp@199
  __int64 v118; // rbx@199
  char *v119; // rax@199
  __int64 v120; // rbp@205
  char *v121; // rax@205
  __int64 v122; // rbx@209
  char *v123; // rax@209
  const char *v124; // rbp@215
  __int64 v125; // rbx@215
  char *v126; // rax@215
  const char *v127; // rbp@218
  __int64 v128; // rbx@218
  char *v129; // rax@218
  const char *v130; // [sp+0h] [bp-98h]@1
  int v131; // [sp+Ch] [bp-8Ch]@1
  int v132; // [sp+Ch] [bp-8Ch]@11
  __int64 *v133; // [sp+10h] [bp-88h]@1
  _BYTE *v134; // [sp+18h] [bp-80h]@18
  const char **v135; // [sp+18h] [bp-80h]@98
  const char **v136; // [sp+20h] [bp-78h]@1
  signed int v137; // [sp+20h] [bp-78h]@83
  int v138; // [sp+28h] [bp-70h]@1
  signed int v139; // [sp+2Ch] [bp-6Ch]@83
  int v140; // [sp+2Ch] [bp-6Ch]@96
  signed int *v141; // [sp+30h] [bp-68h]@1
  const char *v142; // [sp+38h] [bp-60h]@83
  signed int v143; // [sp+38h] [bp-60h]@98
  signed int v144; // [sp+40h] [bp-58h]@83
  _BYTE *v145; // [sp+40h] [bp-58h]@98
  char v146; // [sp+48h] [bp-50h]@83
  signed int v147; // [sp+48h] [bp-50h]@98
  signed int v148; // [sp+4Ch] [bp-4Ch]@98
  char v149; // [sp+50h] [bp-48h]@160
  __int64 v150; // [sp+58h] [bp-40h]@160

  v8 = a7;
  v133 = (__int64 *)a2;
  v130 = (const char *)a3;
  v136 = a4;
  v141 = a5;
  v138 = a6;
  v131 = *(_DWORD *)(a7 + 4);
  if ( a1 <= 0 )
    goto LABEL_56;
  *(_QWORD *)(a7 + 16) = 0LL;
  v9 = *(_DWORD *)a7;
  v10 = a1;
  if ( !*(_DWORD *)a7 )
  {
    *(_DWORD *)a7 = 1;
    v9 = 1;
    goto LABEL_4;
  }
  if ( !*(_DWORD *)(a7 + 24) )
  {
LABEL_4:
    *(_DWORD *)(a7 + 52) = v9;
    *(_DWORD *)(a7 + 48) = v9;
    *(_QWORD *)(a7 + 32) = 0LL;
    if ( a8 )
    {
      *(_DWORD *)(a7 + 44) = 1;
      v11 = 0LL;
      if ( *(_BYTE *)a3 != 45 )
      {
        if ( *(_BYTE *)a3 != 43 )
        {
LABEL_7:
          *(_DWORD *)(a7 + 40) = 0;
LABEL_8:
          *(_DWORD *)(a7 + 24) = 1;
          v12 = *v130;
          goto LABEL_9;
        }
LABEL_71:
        *(_DWORD *)(a7 + 40) = 0;
        ++v130;
        goto LABEL_8;
      }
    }
    else if ( getenv("POSIXLY_CORRECT") )
    {
      v11 = *(_BYTE **)(a7 + 32);
      *(_DWORD *)(a7 + 44) = 1;
      if ( *v130 != 45 )
      {
        if ( *v130 != 43 )
          goto LABEL_7;
        goto LABEL_71;
      }
    }
    else
    {
      *(_DWORD *)(a7 + 44) = 0;
      if ( *v130 != 45 )
      {
        if ( *v130 != 43 )
        {
          *(_DWORD *)(a7 + 40) = 1;
          v11 = *(_BYTE **)(a7 + 32);
          goto LABEL_8;
        }
        v11 = *(_BYTE **)(a7 + 32);
        goto LABEL_71;
      }
      v11 = *(_BYTE **)(a7 + 32);
    }
    *(_DWORD *)(a7 + 40) = 2;
    ++v130;
    goto LABEL_8;
  }
  v11 = *(_BYTE **)(a7 + 32);
  v12 = *(_BYTE *)a3;
  if ( !((*(_BYTE *)a3 - 43) & 0xFD) )
  {
    v12 = *(_BYTE *)(a3 + 1);
    v130 = (const char *)(a3 + 1);
  }
LABEL_9:
  v29 = v12 == 58;
  v13 = 0;
  if ( !v29 )
    v13 = v131;
  v132 = v13;
  if ( !v11 || !*v11 )
  {
    v27 = *(_DWORD *)a7;
    if ( *(_DWORD *)(a7 + 52) > *(_DWORD *)a7 )
      *(_DWORD *)(a7 + 52) = v27;
    if ( (signed int)v27 < *(_DWORD *)(a7 + 48) )
      *(_DWORD *)(a7 + 48) = v27;
    if ( *(_DWORD *)(a7 + 40) == 1 )
    {
      v38 = *(_DWORD *)(a7 + 52);
      if ( *(_DWORD *)(a7 + 48) == v38 )
      {
        if ( v27 != v38 )
        {
          *(_DWORD *)(a7 + 48) = v27;
          v38 = v27;
        }
      }
      else if ( v27 != v38 )
      {
        sub_403F70(a2, a7);
        v38 = *(_DWORD *)a7;
      }
      if ( a1 <= v38 )
      {
LABEL_120:
        v27 = v38;
      }
      else
      {
        v39 = v38;
        while ( 1 )
        {
          v40 = v133[v39];
          v41 = v39;
          v38 = v39;
          if ( *(_BYTE *)v40 == 45 )
          {
            if ( *(_BYTE *)(v40 + 1) )
              break;
          }
          v38 = v39++ + 1;
          *(_DWORD *)a7 = v41 + 1;
          if ( a1 <= (signed int)v39 )
            goto LABEL_120;
        }
        v27 = *(_DWORD *)a7;
      }
      *(_DWORD *)(a7 + 52) = v38;
    }
    v28 = a1 < v27;
    v29 = a1 == v27;
    if ( a1 == v27 )
    {
      v10 = *(_DWORD *)(a7 + 52);
      v34 = *(_DWORD *)(a7 + 48);
LABEL_54:
      if ( v34 != v10 )
        *(_DWORD *)a7 = v34;
      goto LABEL_56;
    }
    v30 = 3LL;
    v31 = "--";
    v32 = v133[v27];
    v33 = (_BYTE *)v133[v27];
    do
    {
      if ( !v30 )
        break;
      v28 = *v33 < (const unsigned __int8)*v31;
      v29 = *v33++ == *v31++;
      --v30;
    }
    while ( v29 );
    if ( (!v28 && !v29) == v28 )
    {
      v34 = *(_DWORD *)(a7 + 48);
      v35 = *(_DWORD *)(a7 + 52);
      v36 = v27 + 1;
      *(_DWORD *)a7 = v36;
      if ( v34 == v35 )
      {
        *(_DWORD *)(a7 + 48) = v36;
        v34 = v36;
      }
      else if ( v36 != v35 )
      {
        sub_403F70((__int64)v133, a7);
        v34 = *(_DWORD *)(a7 + 48);
      }
      *(_DWORD *)(a7 + 52) = v10;
      *(_DWORD *)a7 = v10;
      goto LABEL_54;
    }
    if ( *(_BYTE *)v32 == 45 )
    {
      v42 = *(_BYTE *)(v32 + 1);
      if ( v42 )
      {
        v11 = (_BYTE *)(v32 + ((v136 != 0LL) & (unsigned __int8)(v42 == 45)) + 1);
        *(_QWORD *)(a7 + 32) = v11;
        goto LABEL_13;
      }
    }
    if ( *(_DWORD *)(a7 + 40) )
    {
      *(_QWORD *)(a7 + 16) = v32;
      v21 = 1;
      *(_DWORD *)a7 = v27 + 1;
      return (unsigned int)v21;
    }
LABEL_56:
    return (unsigned int)-1;
  }
LABEL_13:
  if ( !v136 )
    goto LABEL_18;
  v14 = *(_DWORD *)a7;
  v15 = v14;
  v16 = v133[v14];
  if ( *(_BYTE *)(v16 + 1) != 45 )
  {
    if ( !v138 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v16 + 2) )
    {
      v17 = v15;
      v18 = v11;
      v19 = strchr(v130, *(_BYTE *)(v16 + 1));
      v11 = v18;
      v15 = v17;
      if ( v19 )
        goto LABEL_18;
    }
  }
  v51 = v11;
  if ( *v11 && *v11 != 61 )
  {
    do
      ++v51;
    while ( *v51 && *v51 != 61 );
    v52 = (_DWORD)v51 - (_DWORD)v11;
    v140 = (_DWORD)v51 - (_DWORD)v11;
  }
  else
  {
    v140 = 0;
    v52 = 0;
  }
  v53 = v136;
  v54 = *v136;
  if ( !*v136 )
  {
LABEL_137:
    if ( v138 )
    {
      v69 = v133[(signed int)v15];
      if ( *(_BYTE *)(v69 + 1) != 45 )
      {
        v70 = v15;
        v71 = *(_BYTE **)(a7 + 32);
        v72 = strchr(v130, **(_BYTE **)(a7 + 32));
        v11 = v71;
        LODWORD(v15) = v70;
        if ( v72 )
        {
LABEL_18:
          v20 = v11 + 1;
          v134 = v11;
          *(_QWORD *)(a7 + 32) = v11 + 1;
          v21 = *v11;
          v22 = *v11;
          v23 = strchr(v130, v21);
          if ( !v134[1] )
            ++*(_DWORD *)a7;
          if ( (unsigned __int8)(v22 - 58) <= 1u || !v23 )
          {
            if ( v132 )
            {
              v84 = *v133;
              v85 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
              fprintf(stderr, v85, v84, (unsigned int)v21, v130);
            }
            *(_DWORD *)(a7 + 8) = v21;
            return 63;
          }
          v24 = v23[1];
          if ( *v23 != 87 || v24 != 59 )
          {
            if ( v24 == 58 )
            {
              v25 = v134[1];
              if ( v23[2] == 58 )
              {
                if ( v25 )
                {
                  *(_QWORD *)(a7 + 16) = v20;
                  ++*(_DWORD *)a7;
                }
                else
                {
                  *(_QWORD *)(a7 + 16) = 0LL;
                }
              }
              else
              {
                v26 = *(_DWORD *)a7;
                if ( v25 )
                {
                  *(_QWORD *)(a7 + 16) = v20;
                  *(_DWORD *)a7 = v26 + 1;
                }
                else if ( v10 == (_DWORD)v26 )
                {
                  if ( v132 )
                  {
                    v113 = *v133;
                    v114 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                    fprintf(stderr, v114, v113, (unsigned int)v21, v130);
                  }
                  *(_DWORD *)(a7 + 8) = v21;
                  v21 = 5 * (*v130 != 58) + 58;
                }
                else
                {
                  *(_DWORD *)a7 = v26 + 1;
                  *(_QWORD *)(a7 + 16) = v133[v26];
                }
              }
              *(_QWORD *)(a7 + 32) = 0LL;
            }
            return (unsigned int)v21;
          }
          if ( !v136 )
            goto LABEL_207;
          v43 = *(_DWORD *)a7;
          if ( v134[1] )
          {
            *(_QWORD *)(a7 + 16) = v20;
            *(_DWORD *)a7 = v43 + 1;
          }
          else
          {
            if ( v10 == (_DWORD)v43 )
            {
              if ( v132 )
              {
                v122 = *v133;
                v123 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                fprintf(stderr, v123, v122, (unsigned int)v21, v130);
              }
              *(_DWORD *)(a7 + 8) = v21;
              return (unsigned int)(5 * (*v130 != 58) + 58);
            }
            *(_DWORD *)a7 = v43 + 1;
            v20 = (const char *)v133[v43];
            *(_QWORD *)(a7 + 16) = v20;
          }
          *(_QWORD *)(a7 + 32) = v20;
          v44 = *v20;
          for ( i = v20; *i; v44 = *++i )
          {
            if ( v44 == 61 )
              break;
          }
          if ( !*v136 )
          {
LABEL_207:
            *(_QWORD *)(v8 + 32) = 0LL;
            return 87;
          }
          v146 = v44;
          v142 = i;
          v46 = 0;
          v144 = v10;
          v47 = i - v20;
          v48 = v136;
          v49 = *v136;
          v50 = 0LL;
          v139 = 0;
          v137 = 0;
          do
          {
            if ( !strncmp(v49, v20, v47) )
            {
              if ( (unsigned int)v47 == strlen(v49) )
              {
                v106 = v46;
                v107 = v48;
                v100 = v142;
                v99 = v146;
                v101 = v144;
                v8 = a7;
                v139 = v106;
                v50 = v107;
                goto LABEL_177;
              }
              if ( v50 )
              {
                if ( v138 || *((_DWORD *)v50 + 2) != *((_DWORD *)v48 + 2) || v50[2] != v48[2] )
                {
                  v137 = 1;
                }
                else
                {
                  v98 = 1;
                  if ( *((_DWORD *)v50 + 6) == *((_DWORD *)v48 + 6) )
                    v98 = v137;
                  v137 = v98;
                }
              }
              else
              {
                v139 = v46;
                v50 = v48;
              }
            }
            v48 += 4;
            v49 = *v48;
            ++v46;
          }
          while ( *v48 );
          v99 = v146;
          v100 = v142;
          v101 = v144;
          v8 = a7;
          if ( v137 )
          {
            if ( v132 )
            {
              v120 = *v133;
              v121 = dcgettext(0LL, "%s: option '-W %s' is ambiguous\n", 5);
              fprintf(stderr, v121, v120, v20, v130);
              v20 = *(const char **)(a7 + 32);
            }
            v21 = 63;
            v112 = strlen(v20);
            ++*(_DWORD *)a7;
            *(_QWORD *)(a7 + 32) = &v20[v112];
            return (unsigned int)v21;
          }
          if ( !v50 )
            goto LABEL_207;
LABEL_177:
          v102 = *((_DWORD *)v50 + 2);
          if ( v99 )
          {
            if ( !v102 )
            {
              if ( v132 )
              {
                v124 = *v50;
                v125 = *v133;
                v126 = dcgettext(0LL, "%s: option '-W %s' doesn't allow an argument\n", 5);
                fprintf(stderr, v126, v125, v124, v130);
                v20 = *(const char **)(v8 + 32);
              }
              v21 = 63;
              *(_QWORD *)(v8 + 32) = &v20[strlen(v20)];
              return (unsigned int)v21;
            }
            *(_QWORD *)(v8 + 16) = v100 + 1;
            goto LABEL_180;
          }
          if ( v102 != 1 )
          {
            *(_QWORD *)(v8 + 16) = 0LL;
            goto LABEL_180;
          }
          v115 = *(_DWORD *)v8;
          if ( (signed int)v115 < v101 )
          {
            *(_DWORD *)v8 = v115 + 1;
            *(_QWORD *)(v8 + 16) = v133[v115];
LABEL_180:
            *(_QWORD *)(v8 + 32) = &v20[strlen(v20)];
            if ( v141 )
              *v141 = v139;
            v65 = (int *)v50[2];
            v21 = *((_DWORD *)v50 + 6);
            if ( v65 )
              goto LABEL_119;
            return (unsigned int)v21;
          }
          if ( v132 )
          {
            v127 = *v50;
            v128 = *v133;
            v129 = dcgettext(0LL, "%s: option '-W %s' requires an argument\n", 5);
            fprintf(stderr, v129, v128, v127, v130);
          }
          *(_QWORD *)(v8 + 32) = *(_QWORD *)(v8 + 32) + strlen(*(const char **)(v8 + 32)) + 1 - 1;
          if ( *v130 != 58 )
            goto LABEL_165;
LABEL_201:
          return 58;
        }
        if ( !v132 )
        {
LABEL_142:
          v21 = 63;
          *(_QWORD *)(a7 + 32) = "";
          *(_DWORD *)a7 = v15 + 1;
          *(_DWORD *)(a7 + 8) = 0;
          return (unsigned int)v21;
        }
LABEL_141:
        v73 = *(_BYTE *)v69;
        v74 = v11;
        v75 = *v133;
        v76 = dcgettext(0LL, "%s: unrecognized option '%c%s'\n", 5);
        fprintf(stderr, v76, v75, v73, v74, v74);
        LODWORD(v15) = *(_DWORD *)a7;
        goto LABEL_142;
      }
      if ( !v132 )
        goto LABEL_142;
      v103 = *(_QWORD *)(a7 + 32);
    }
    else
    {
      if ( !v132 )
        goto LABEL_142;
      v103 = *(_QWORD *)(a7 + 32);
      v69 = v133[v15];
      v11 = *(_BYTE **)(a7 + 32);
      if ( *(_BYTE *)(v69 + 1) != 45 )
        goto LABEL_141;
    }
    v104 = *v133;
    v105 = dcgettext(0LL, "%s: unrecognized option '--%s'\n", 5);
    fprintf(stderr, v105, v104, v103, v130);
    LODWORD(v15) = *(_DWORD *)a7;
    goto LABEL_142;
  }
  v145 = v51;
  v55 = 0LL;
  v148 = v10;
  v56 = v11;
  v57 = (unsigned int)v52;
  v58 = 0;
  v143 = -1;
  v147 = 0;
  v135 = 0LL;
  while ( 1 )
  {
    if ( strncmp(v54, v56, v57) )
      goto LABEL_104;
    if ( v140 == (unsigned int)strlen(v54) )
    {
      v66 = v58;
      v60 = v145;
      v10 = v148;
      if ( v147 || v55 )
      {
        v67 = v55;
        if ( v55 )
        {
          do
          {
            v68 = *(_QWORD *)(v67 + 8);
            free((void *)v67);
            v67 = v68;
          }
          while ( v68 );
        }
      }
      LODWORD(v15) = *(_DWORD *)a7;
      v143 = v66;
      v135 = v53;
      goto LABEL_113;
    }
    if ( !v135 )
      break;
    if ( !v147 )
    {
      if ( v138
        || *((_DWORD *)v135 + 2) != *((_DWORD *)v53 + 2)
        || v135[2] != v53[2]
        || *((_DWORD *)v135 + 6) != *((_DWORD *)v53 + 6) )
      {
        v59 = malloc(0x10uLL);
        if ( v59 )
        {
          *v59 = v53;
          v59[1] = v55;
          v55 = (__int64)v59;
        }
        else
        {
          if ( v55 )
          {
            v83 = (void *)v55;
            do
            {
              v55 = *(_QWORD *)(v55 + 8);
              free(v83);
              v83 = (void *)v55;
            }
            while ( v55 );
          }
          v147 = 1;
        }
      }
      else
      {
        v147 = 0;
      }
    }
LABEL_104:
    v53 += 4;
    v54 = *v53;
    ++v58;
    if ( !*v53 )
      goto LABEL_110;
LABEL_105:
    v56 = *(const char **)(a7 + 32);
  }
  v135 = v53;
  v53 += 4;
  v54 = *v53;
  v143 = v58++;
  if ( *v53 )
    goto LABEL_105;
LABEL_110:
  v60 = v145;
  v10 = v148;
  v61 = v55 != 0;
  v15 = *(_DWORD *)a7;
  if ( (_BYTE)v147 || v61 )
  {
    if ( v132 )
    {
      if ( v61 )
      {
        v150 = v55;
        v86 = v133[v15];
        v87 = *v133;
        v88 = dcgettext(0LL, "%s: option '%s' is ambiguous; possibilities:", 5);
        fprintf(stderr, v88, v87, v86, v130);
        v89 = &v149;
        for ( j = v135; ; j = *(const char ***)v89 )
        {
          fprintf(stderr, " '--%s'", *j);
          v89 = (char *)*((_QWORD *)v89 + 1);
          if ( !v89 )
            break;
        }
        fputc(10, stderr);
        goto LABEL_164;
      }
      if ( (_BYTE)v147 )
      {
        v108 = v133[v15];
        v109 = *v133;
        v110 = dcgettext(0LL, "%s: option '%s' is ambiguous\n", 5);
        fprintf(stderr, v110, v109, v108, v130);
LABEL_164:
        v91 = *(_QWORD *)(a7 + 32);
        v92 = strlen(*(const char **)(a7 + 32));
        ++*(_DWORD *)a7;
        *(_DWORD *)(a7 + 8) = 0;
        *(_QWORD *)(a7 + 32) = v92 + v91;
        goto LABEL_165;
      }
    }
    v93 = *(_QWORD *)(a7 + 32);
    v94 = *(_DWORD *)a7;
    v95 = strlen(*(const char **)(a7 + 32));
    *(_DWORD *)(a7 + 8) = 0;
    *(_QWORD *)(a7 + 32) = v95 + v93;
    *(_DWORD *)a7 = v94 + 1;
    if ( v55 )
    {
      v96 = v55;
      do
      {
        v97 = *(_QWORD *)(v96 + 8);
        free((void *)v96);
        v96 = v97;
      }
      while ( v97 );
    }
    goto LABEL_165;
  }
  if ( !v135 )
    goto LABEL_137;
LABEL_113:
  v62 = v15 + 1;
  *(_DWORD *)a7 = v15 + 1;
  v63 = *((_DWORD *)v135 + 2);
  if ( !*v60 )
  {
    if ( v63 != 1 )
      goto LABEL_116;
    if ( v62 < v10 )
    {
      *(_DWORD *)a7 = v15 + 2;
      *(_QWORD *)(a7 + 16) = v133[v62];
      goto LABEL_116;
    }
    if ( v132 )
    {
      v117 = *v135;
      v118 = *v133;
      v119 = dcgettext(0LL, "%s: option '--%s' requires an argument\n", 5);
      fprintf(stderr, v119, v118, v117, v130);
    }
    v111 = *(_QWORD *)(a7 + 32);
    *(_QWORD *)(a7 + 32) = strlen(*(const char **)(a7 + 32)) + v111;
    *(_DWORD *)(a7 + 8) = *((_DWORD *)v135 + 6);
    if ( *v130 == 58 )
      goto LABEL_201;
LABEL_165:
    return 63;
  }
  if ( v63 )
  {
    *(_QWORD *)(a7 + 16) = v60 + 1;
LABEL_116:
    v64 = *(_QWORD *)(a7 + 32);
    *(_QWORD *)(a7 + 32) = strlen(*(const char **)(a7 + 32)) + v64;
    if ( v141 )
      *v141 = v143;
    v65 = (int *)v135[2];
    v21 = *((_DWORD *)v135 + 6);
    if ( v65 )
    {
LABEL_119:
      *v65 = v21;
      v21 = 0;
    }
  }
  else
  {
    if ( v132 )
    {
      v77 = v133[v62 - 1];
      v78 = *v135;
      v79 = *v133;
      if ( *(_BYTE *)(v77 + 1) == 45 )
      {
        v116 = dcgettext(0LL, "%s: option '--%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v116, v79, v78, v130);
      }
      else
      {
        v80 = *(_BYTE *)v77;
        v81 = dcgettext(0LL, "%s: option '%c%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v81, v79, v80, v78, v130);
      }
    }
    v82 = *(_QWORD *)(a7 + 32);
    v21 = 63;
    *(_QWORD *)(a7 + 32) = strlen(*(const char **)(a7 + 32)) + v82;
    *(_DWORD *)(a7 + 8) = *((_DWORD *)v135 + 6);
  }
  return (unsigned int)v21;
}

__int64 __fastcall sub_405090(signed int a1, __int64 a2, __int64 a3, const char **a4, signed int *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_6083C0 = dword_60821C;
  dword_6083C4 = dword_608218;
  result = sub_404050(a1, a2, a3, a4, a5, a6, (__int64)&dword_6083C0, a7);
  dword_60821C = dword_6083C0;
  nptr = (char *)qword_6083D0;
  dword_608214 = dword_6083C8;
  return result;
}

__int64 __fastcall sub_405110(signed int a1, __int64 a2, __int64 a3, const char **a4, signed int *a5)
{
  return sub_405090(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_405190(wchar_t *a1, const char *a2, size_t a3, mbstate_t *a4)
{
  if ( a2 )
  {
    if ( !a3 )
      return -2LL;
  }
  else
  {
    a3 = 1LL;
    a2 = "%s: invalid option -- '%c'\n" + 27;
    a1 = 0LL;
  }
  return mbrtowc(a1, a2, a3, a4);
}

int __fastcall sub_4051C0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebp@1
  int result; // eax@1

  v1 = __fpending(stream);
  v2 = ferror(stream);
  result = fclose(stream);
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

const char *sub_405230()
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
                fclose(v61);
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
            fclose(v40);
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
      v14 = 116LL;
      v9 = 102LL;
      v10 = 101LL;
      v7 = "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
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

int __fastcall sub_405810(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_6081A8 )
    v1 = unk_6081A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_405828(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_607E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
