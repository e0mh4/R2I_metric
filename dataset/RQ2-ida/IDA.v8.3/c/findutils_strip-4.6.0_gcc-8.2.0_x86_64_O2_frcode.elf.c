__int64 __fastcall main(unsigned int a1, const char **a2, char **a3)
{
  const char *v4; // rdi
  __int64 v5; // r14
  int v6; // r15d
  int v7; // r12d
  char *v8; // rax
  char *v9; // rbp
  int v10; // eax
  char *v12; // rbp
  int *v13; // rax
  const char *v14; // r14
  int *v15; // rax
  int *v16; // r15
  char *v17; // r8
  char *v18; // rax
  char *v19; // rax
  int v20; // r13d
  int v21; // eax
  char *v22; // rsi
  char *v23; // rax
  char *v24; // rdi
  int v25; // r14d
  int v26; // ebx
  _IO_FILE *v27; // r15
  char *v28; // rax
  size_t v29; // rcx
  char *v30; // rbx
  int *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // [rsp+0h] [rbp-68h]
  size_t v35; // [rsp+0h] [rbp-68h]
  char *v36; // [rsp+8h] [rbp-60h]
  char *lineptr; // [rsp+18h] [rbp-50h] BYREF
  size_t n; // [rsp+20h] [rbp-48h] BYREF
  char *endptr; // [rsp+28h] [rbp-40h] BYREF

  v4 = *a2;
  if ( !*a2 )
    v4 = "frcode";
  sub_401CB0(v4, a2, a3);
  if ( (unsigned int)sub_405810(sub_401C10) )
  {
    v12 = dcgettext(0LL, "The atexit library function failed", 5);
    v13 = __errno_location();
    error(1, *v13, v12);
  }
  v5 = 0LL;
  v6 = 0;
  v7 = 10;
  n = 1026LL;
  lineptr = (char *)sub_403C70(1026LL);
  v8 = (char *)sub_403C70(1026LL);
  *v8 = 0;
  v9 = v8;
  while ( 1 )
  {
    v10 = sub_405110(a1, a2, "hv0S:", &off_405A60, 0LL);
    if ( v10 == -1 )
      break;
    if ( v10 == 83 )
    {
      v14 = nptr;
      v34 = nptr;
      v15 = __errno_location();
      *v15 = 0;
      v16 = v15;
      v5 = strtol(v14, &endptr, 10);
      if ( v5 )
      {
        if ( (unsigned __int64)(v5 + 0x7FFFFFFFFFFFFFFFLL) > 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( *v16 )
          {
            v32 = dcgettext(0LL, "Security level %s is outside the convertible range.", 5);
            error(1, 0, v32, v34);
            goto LABEL_24;
          }
          v17 = endptr;
          if ( *endptr )
          {
LABEL_23:
            v36 = v17;
            v19 = dcgettext(0LL, "Security level %s has unexpected suffix %s.", 5);
            error(1, 0, v19, v34, v36);
            goto LABEL_24;
          }
LABEL_18:
          v18 = dcgettext(0LL, "slocate security level %ld is unsupported.", 5);
          error(1, 0, v18, v5);
          goto LABEL_19;
        }
        v17 = endptr;
        if ( *endptr )
          goto LABEL_23;
        if ( v5 != 1 )
          goto LABEL_18;
      }
      else
      {
        v17 = endptr;
        if ( endptr == nptr )
        {
          v33 = dcgettext(0LL, "You need to specify a security level as a decimal integer.", 5);
          error(1, 0, v33);
LABEL_24:
          v5 = -1LL;
          goto LABEL_18;
        }
        if ( *endptr )
          goto LABEL_23;
      }
LABEL_19:
      v6 = 1;
    }
    else
    {
      if ( v10 > 83 )
      {
        if ( v10 == 104 )
        {
          sub_401B10(stdout);
          return 0LL;
        }
        if ( v10 == 118 )
        {
          sub_401B70("frcode");
          return 0LL;
        }
LABEL_13:
        sub_401B10(stderr);
        return 1LL;
      }
      v7 = 0;
      if ( v10 != 48 )
        goto LABEL_13;
    }
  }
  if ( dword_60821C != a1 )
    goto LABEL_13;
  if ( v6 )
  {
    fputc(49 - (v5 == 0), stdout);
    fputc(0, stdout);
  }
  else if ( fwrite(&unk_405A40, 1uLL, 0xAuLL, stdout) != 10 )
  {
    v30 = dcgettext(0LL, "Failed to write to standard output", 5);
    v31 = __errno_location();
    error(1, *v31, v30);
  }
  v35 = 1026LL;
  v20 = 0;
  while ( 2 )
  {
    v21 = getdelim(&lineptr, &n, v7, stdin);
    if ( v21 > 0 )
    {
      lineptr[v21 - 1] = 0;
      v22 = lineptr;
      v23 = lineptr;
      if ( *lineptr == *v9 && *v9 )
      {
        v24 = v9;
        do
        {
          ++v24;
          ++v23;
        }
        while ( *v23 == *v24 && *v24 && v24 != v9 + 2147483646 );
      }
      else
      {
        LODWORD(v24) = (_DWORD)v9;
      }
      v25 = (_DWORD)v24 - (_DWORD)v9;
      v26 = (_DWORD)v24 - (_DWORD)v9 - v20;
      if ( (unsigned int)(v26 + 0x8000) > 0xFFFF )
      {
        v25 = 0;
        v26 = -v20;
      }
      if ( v6 )
        goto LABEL_47;
      if ( (unsigned int)(v26 + 127) <= 0xFE )
      {
        if ( _IO_putc(v26, stdout) != -1 )
          goto LABEL_46;
      }
      else
      {
        if ( _IO_putc(128, stdout) == -1 )
          sub_401AE0();
        v27 = stdout;
        if ( v26 > 0x7FFF )
          __assert_fail("c <= SHRT_MAX", "frcode.c", 0x7Bu, "put_short");
        if ( v26 < -32768 )
          __assert_fail("c >= SHRT_MIN", "frcode.c", 0x7Cu, "put_short");
        if ( _IO_putc(v26 >> 8, stdout) != -1 && _IO_putc(v26, v27) != -1 )
        {
LABEL_46:
          v22 = lineptr;
          goto LABEL_47;
        }
      }
      sub_401AE0();
      v22 = lineptr;
LABEL_47:
      if ( fputs(&v22[v25], stdout) == -1 || _IO_putc(0, stdout) == -1 )
        sub_401AE0();
      v28 = lineptr;
      v6 = 0;
      v20 = v25;
      v29 = v35;
      lineptr = v9;
      v35 = n;
      v9 = v28;
      n = v29;
      continue;
    }
    break;
  }
  free(lineptr);
  free(v9);
  return 0LL;
}

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
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

__int64 *sub_401A2B()
{
  return &program_invocation_short_name;
}

__int64 sub_401A4A()
{
  return 0LL;
}

__int64 *sub_401A81()
{
  __int64 *result; // rax

  if ( !byte_608248 )
  {
    while ( qword_608250 < (unsigned __int64)(&qword_607E48 - qword_607E40 - 1) )
      ((void (*)(void))qword_607E40[++qword_608250])();
    result = sub_401A2B();
    byte_608248 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_401AD8()
{
  return sub_401A4A();
}

void sub_401AE0()
{
  char *v0; // rbx
  int *v1; // rax

  v0 = dcgettext(0LL, "write error", 5);
  v1 = __errno_location();
  error(1, *v1, v0);
}

int __fastcall sub_401B10(FILE *stream)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax

  v1 = qword_608268;
  v2 = dcgettext(0LL, "Usage: %s [-0 | --null] [--version] [--help]\n", 5);
  fprintf(stream, v2, v1);
  v3 = dcgettext(0LL, "\nReport bugs to <bug-findutils@gnu.org>.\n", 5);
  return fputs(v3, stream);
}

__int64 __fastcall sub_401B70(int a1)
{
  char *v1; // r12
  unsigned int v2; // ebp
  unsigned int v3; // eax
  __int64 v5; // [rsp-10h] [rbp-28h]

  sub_403ED0(stderr);
  v1 = dcgettext(0LL, "Kevin Dalley", 5);
  v2 = (unsigned int)dcgettext(0LL, "James Youngman", 5);
  v3 = (unsigned int)dcgettext(0LL, "Eric B. Decker", 5);
  sub_403B40((_DWORD)stdout, a1, (unsigned int)"GNU findutils", (_DWORD)off_6081B0, v3, v2, v1, 0LL);
  return v5;
}

__int64 sub_401C10()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

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
        v5 = (const char *)sub_403500();
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
  qword_608268 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_401D50(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_405230();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_405B79;
      if ( !v5 )
        return (const char *)&unk_405B6E;
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
    v2 = (char *)&unk_405B75;
    if ( !v5 )
      return (const char *)&unk_405B72;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return v6;
}

unsigned __int64 __fastcall sub_401E50(
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
  int v11; // ebp
  char v12; // zf
  size_t mb_cur_max; // rax
  int v14; // edx
  int v15; // r11d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // r11
  int v20; // r10d
  unsigned __int64 v21; // r13
  int v22; // r8d
  _BYTE *v23; // r9
  size_t v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r12
  unsigned __int8 v27; // al
  char *v28; // rax
  char i; // al
  size_t v30; // rax
  bool v31; // al
  char v32; // cl
  int v33; // esi
  int v34; // r10d
  int v35; // r11d
  int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  const unsigned __int16 **v39; // rax
  unsigned __int64 v40; // rcx
  int v41; // edx
  int v42; // eax
  __int64 v44; // rsi
  int v45; // eax
  char v46; // dl
  const char *v47; // rax
  size_t v48; // rax
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // r15
  _BYTE *v53; // rdx
  int v54; // edi
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int8 v57; // si
  bool v58; // bp
  int v59; // eax
  unsigned __int64 v60; // rsi
  _BYTE *v61; // rdi
  unsigned __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  unsigned __int8 v66; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 v68; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v69; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+20h] [rbp-98h]
  _BYTE *v72; // [rsp+28h] [rbp-90h]
  int v73; // [rsp+28h] [rbp-90h]
  unsigned __int8 v74; // [rsp+28h] [rbp-90h]
  _BYTE *v75; // [rsp+28h] [rbp-90h]
  unsigned __int64 v76; // [rsp+28h] [rbp-90h]
  unsigned __int8 v77; // [rsp+30h] [rbp-88h]
  unsigned __int8 v78; // [rsp+30h] [rbp-88h]
  unsigned __int64 v79; // [rsp+30h] [rbp-88h]
  char v80; // [rsp+30h] [rbp-88h]
  int v81; // [rsp+30h] [rbp-88h]
  int v82; // [rsp+38h] [rbp-80h]
  unsigned __int64 v83; // [rsp+38h] [rbp-80h]
  int v84; // [rsp+38h] [rbp-80h]
  int v85; // [rsp+38h] [rbp-80h]
  _BYTE *v86; // [rsp+38h] [rbp-80h]
  int v87; // [rsp+40h] [rbp-78h]
  unsigned __int64 v88; // [rsp+40h] [rbp-78h]
  const char *s2; // [rsp+48h] [rbp-70h]
  size_t v90; // [rsp+50h] [rbp-68h]
  bool v92; // [rsp+5Dh] [rbp-5Bh]
  unsigned __int8 v93; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int64 v94; // [rsp+60h] [rbp-58h]
  _BYTE *v95; // [rsp+68h] [rbp-50h]
  wint_t wc; // [rsp+74h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+78h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v11 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v15 = a5;
  v90 = mb_cur_max;
  v16 = a4;
  switch ( a5 )
  {
    case 0:
      v92 = 0;
      v17 = 0LL;
      v66 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v66 = 0;
        goto LABEL_38;
      }
      v92 = 1;
      v17 = 0LL;
      v66 = 0;
      n = 1LL;
      s2 = "'";
      break;
    case 3:
      v92 = 1;
      v17 = 0LL;
      v15 = 2;
      v66 = 1;
      n = 1LL;
      s2 = "'";
      break;
    case 4:
      if ( v11 )
      {
LABEL_2:
        v92 = 1;
        v17 = 0LL;
        v15 = 2;
        v66 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v66 = 1;
LABEL_38:
        if ( a2 )
          *a1 = 39;
        v92 = 0;
        v17 = 1LL;
        v15 = 2;
        n = 1LL;
        s2 = "'";
      }
      break;
    case 5:
      if ( v11 )
      {
        v92 = 1;
        v17 = 0LL;
        v66 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v92 = 0;
        v17 = 1LL;
        v66 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v92 = 1;
      v17 = 0LL;
      v15 = 5;
      v66 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v92 = 0;
      v17 = 0LL;
      v66 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_401D50("`", a5);
        v28 = (char *)sub_401D50((char *)"'", a5);
        v16 = a4;
        v15 = a5;
        a9 = v28;
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
      v73 = v15;
      v69 = v16;
      v92 = v11 != 0;
      v30 = strlen(a9);
      v66 = 1;
      v16 = v69;
      n = v30;
      v15 = v73;
      s2 = a9;
      break;
    default:
      abort();
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
      LOBYTE(v11) = *(_BYTE *)(a3 + v21) != 0;
    if ( !(_BYTE)v11 )
    {
      v45 = v20;
      v34 = v19;
      v35 = v45;
      v27 = v17 == 0 && v92 && v45 == 2;
      if ( v27 )
        goto LABEL_132;
      if ( s2 )
      {
        if ( !v92 )
        {
          v46 = *s2;
          if ( *s2 )
          {
            v47 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                v9[v17] = v46;
              v46 = v47[++v17];
            }
            while ( v46 );
          }
        }
      }
      if ( v17 < v10 )
        v9[v17] = 0;
      return v17;
    }
    v23 = (_BYTE *)(a3 + v21);
    v68 = v66 & (v20 != 2);
    if ( v68 )
      break;
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        if ( !v66 )
        {
          if ( (a6 & 1) != 0 )
          {
            ++v21;
            continue;
          }
          if ( !v92 )
          {
            ++v21;
            v11 = v22;
            LOBYTE(v26) = 0;
            goto LABEL_148;
          }
          v11 = 0;
          if ( a7 )
          {
            v68 = 0;
            LOBYTE(v26) = 0;
            goto LABEL_18;
          }
          LOBYTE(v26) = 0;
          goto LABEL_122;
        }
LABEL_103:
        if ( v92 )
        {
          v64 = v20;
          v34 = v19;
          v35 = v64;
          v27 = v64 == 2;
          goto LABEL_132;
        }
        v68 = 0;
LABEL_105:
        LOBYTE(v14) = v20 == 2;
        v36 = v22 ^ 1;
        LOBYTE(v36) = (v20 == 2) & (v22 ^ 1);
        if ( (_BYTE)v36 )
        {
          if ( v17 < v10 )
            v9[v17] = 39;
          if ( v10 > v17 + 1 )
            v9[v17 + 1] = 36;
          if ( v10 > v17 + 2 )
            v9[v17 + 2] = 39;
          v37 = v17 + 3;
          if ( v10 <= v17 + 3 )
          {
            v17 += 4LL;
            ++v21;
            v22 = v36;
            LOBYTE(v26) = 48;
            goto LABEL_82;
          }
          v22 = v36;
LABEL_114:
          v9[v37] = 92;
        }
        else
        {
          v37 = v17;
          if ( v17 < v10 )
            goto LABEL_114;
        }
        v17 = v37 + 1;
        v38 = v21 + 1;
        if ( v20 == 2 )
        {
          ++v21;
          LOBYTE(v26) = 48;
          goto LABEL_82;
        }
        LOBYTE(v26) = 48;
        if ( v38 < v19 && (unsigned __int8)(*(_BYTE *)(a3 + v38) - 48) <= 9u )
        {
          if ( v10 > v17 )
            v9[v17] = 48;
          if ( v10 > v37 + 2 )
            v9[v37 + 2] = 48;
          v17 = v37 + 3;
          LOBYTE(v26) = 48;
        }
        goto LABEL_118;
      case 7:
        LOBYTE(v26) = 7;
        v32 = 97;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 8:
        LOBYTE(v26) = 8;
        v32 = 98;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 9:
        LOBYTE(v26) = 9;
        v32 = 116;
        goto LABEL_130;
      case 0xA:
        LOBYTE(v26) = 10;
        v32 = 110;
        goto LABEL_130;
      case 0xB:
        LOBYTE(v26) = 11;
        v32 = 118;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0xC:
        LOBYTE(v26) = 12;
        v32 = 102;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0xD:
        LOBYTE(v26) = 13;
        v32 = 114;
LABEL_130:
        LOBYTE(v14) = v20 == 2;
        v68 = v20 == 2 && v92;
        if ( !v68 )
          goto LABEL_88;
        v42 = v20;
        v34 = v19;
        v35 = v42;
        v27 = v68;
        goto LABEL_132;
      case 0x20:
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
        LOBYTE(v14) = v20 == 2;
        goto LABEL_64;
      case 0x23:
      case 0x7E:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_63;
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
        goto LABEL_127;
      case 0x27:
LABEL_73:
        v14 = 0;
        LOBYTE(v26) = 39;
        if ( v20 != 2 )
          goto LABEL_65;
        if ( v92 )
          goto LABEL_270;
        if ( v17 < v10 )
          v9[v17] = 39;
        if ( v10 > v17 + 1 )
          v9[v17 + 1] = 92;
        if ( v10 > v17 + 2 )
          v9[v17 + 2] = 39;
        v17 += 3LL;
        ++v21;
        v22 = 0;
        LOBYTE(v26) = 39;
LABEL_82:
        if ( !v68 )
          goto LABEL_33;
        goto LABEL_67;
      case 0x3F:
LABEL_69:
        if ( v20 == 2 )
        {
          if ( v92 )
          {
LABEL_270:
            v34 = v19;
            v35 = 2;
            v27 = v92;
LABEL_132:
            if ( v66 && v27 )
              v35 = 4;
            return sub_401E50((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
          }
          v11 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_66;
        }
        if ( v20 != 5 )
        {
          LOBYTE(v26) = 63;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_65;
        }
        if ( (a6 & 4) == 0 )
        {
          v14 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_65;
        }
        v14 = 0;
        LOBYTE(v26) = 63;
        if ( v21 + 2 >= v19 || *(_BYTE *)(a3 + v21 + 1) != 63 )
          goto LABEL_65;
        v26 = *(unsigned __int8 *)(a3 + v21 + 2);
        if ( (unsigned __int8)v26 > 0x3Eu || (v44 = 0x7000A38200000000LL, !_bittest64(&v44, v26)) )
        {
          LOBYTE(v26) = 63;
LABEL_65:
          v11 = (v14 | v66 ^ 1) ^ 1;
          LOBYTE(v11) = v92 | (v14 | v66 ^ 1) ^ 1;
          if ( (_BYTE)v11 )
          {
LABEL_17:
            v11 = 0;
            if ( !a7 )
              goto LABEL_121;
            goto LABEL_18;
          }
          goto LABEL_66;
        }
        if ( v92 )
          goto LABEL_269;
        if ( v17 < v10 )
          v9[v17] = 63;
        if ( v10 > v17 + 1 )
          v9[v17 + 1] = 34;
        if ( v10 > v17 + 2 )
          v9[v17 + 2] = 34;
        if ( v10 > v17 + 3 )
          v9[v17 + 3] = 63;
        v17 += 4LL;
        v14 = 0;
        v11 = 0;
        v21 += 2LL;
LABEL_118:
        if ( v66 && !(_BYTE)v14 )
        {
          if ( !a7 )
          {
LABEL_121:
            v27 = v20 == 2;
            if ( !v68 )
            {
LABEL_122:
              ++v21;
              v11 = v22 & (v11 ^ 1);
              goto LABEL_148;
            }
LABEL_20:
            if ( v92 )
            {
LABEL_92:
              v33 = v20;
              v34 = v19;
              v35 = v33;
              goto LABEL_132;
            }
LABEL_21:
            ++v21;
            goto LABEL_22;
          }
LABEL_18:
          if ( ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v26 >> 5)) >> v26) & 1) == 0 )
            goto LABEL_121;
          v27 = v20 == 2;
          goto LABEL_20;
        }
LABEL_66:
        ++v21;
        if ( !v68 )
        {
          v11 = v22 & (v11 ^ 1);
LABEL_148:
          if ( (_BYTE)v11 )
          {
            if ( v17 < v10 )
              v9[v17] = 39;
            if ( v10 > v17 + 1 )
              v9[v17 + 1] = 39;
            v17 += 2LL;
            v22 = 0;
          }
          goto LABEL_33;
        }
LABEL_67:
        v27 = v20 == 2;
LABEL_22:
        v14 = v22 ^ 1;
        if ( (v27 & ((unsigned __int8)v22 ^ 1)) != 0 )
        {
          if ( v10 > v17 )
            v9[v17] = 39;
          if ( v10 > v17 + 1 )
            v9[v17 + 1] = 36;
          if ( v10 > v17 + 2 )
            v9[v17 + 2] = 39;
          v17 += 3LL;
          LOBYTE(v14) = v27 & (v22 ^ 1);
          v22 = v14;
        }
        if ( v17 < v10 )
          v9[v17] = 92;
        ++v17;
LABEL_33:
        if ( v17 < v10 )
          v9[v17] = v26;
        ++v17;
        break;
      case 0x5C:
        if ( v20 == 2 )
        {
          if ( v92 )
            goto LABEL_270;
          ++v21;
          v11 = v22;
          LOBYTE(v26) = 92;
          goto LABEL_148;
        }
LABEL_87:
        v11 = v92 & v66;
        LOBYTE(v26) = 92;
        v32 = 92;
        v14 = v11;
        LOBYTE(v14) = (n != 0) & v11;
        if ( (_BYTE)v14 )
        {
          ++v21;
          v11 = v22;
          goto LABEL_148;
        }
LABEL_88:
        if ( !v66 )
          goto LABEL_65;
        v27 = v14;
        LOBYTE(v26) = v32;
        goto LABEL_20;
      case 0x7B:
      case 0x7D:
LABEL_60:
        v31 = v19 != 1;
        if ( v19 == -1LL )
          v31 = *(_BYTE *)(a3 + 1) != 0;
        LOBYTE(v14) = v20 == 2;
        if ( v31 )
          goto LABEL_65;
LABEL_63:
        if ( v21 )
          goto LABEL_65;
LABEL_64:
        v27 = v14 & v92;
        if ( ((unsigned __int8)v14 & v92) == 0 )
          goto LABEL_65;
        goto LABEL_206;
      default:
LABEL_124:
        if ( v90 == 1 )
        {
          v84 = v20;
          v79 = v19;
          v74 = v22;
          v39 = __ctype_b_loc();
          v22 = v74;
          v19 = v79;
          v20 = v84;
          v40 = 1LL;
          v41 = (*v39)[(unsigned __int8)v26];
          LOWORD(v41) = (unsigned __int16)v41 >> 14;
          v14 = v41 ^ 1;
          LOBYTE(v14) = v66 & v14;
        }
        else
        {
          ps = 0LL;
          if ( v19 == -1LL )
          {
            v85 = v20;
            v80 = v22;
            v75 = v23;
            v48 = strlen((const char *)a3);
            v20 = v85;
            LOBYTE(v22) = v80;
            v23 = v75;
            v19 = v48;
          }
          v94 = v17;
          v93 = v22;
          v49 = 0LL;
          v95 = v23;
          v86 = v9;
          v88 = v10;
          v76 = v19;
          v81 = v20;
          while ( 1 )
          {
            v50 = v21 + v49;
            v51 = sub_405190(&wc, a3 + v21 + v49, v76 - (v21 + v49), &ps);
            v52 = v51;
            if ( !v51 )
            {
              v11 ^= 1u;
              v40 = v49;
              v9 = v86;
              v22 = v93;
              v17 = v94;
              v10 = v88;
              v14 = (unsigned __int8)(v11 & v66);
              v19 = v76;
              v20 = v81;
              goto LABEL_256;
            }
            if ( v51 == -1 )
            {
              v40 = v49;
              v22 = v93;
              v17 = v94;
              v9 = v86;
              v10 = v88;
              v19 = v76;
              v20 = v81;
              v14 = v66;
              goto LABEL_256;
            }
            if ( v51 == -2 )
              break;
            v27 = v92 && v81 == 2;
            if ( v27 && v52 != 1 )
            {
              v53 = (_BYTE *)(a3 + v50 + 1);
              do
              {
                if ( (unsigned __int8)(*v53 - 91) <= 0x21u && ((1LL << (*v53 - 91)) & 0x20000002BLL) != 0 )
                {
                  LODWORD(v9) = (_DWORD)v86;
                  LODWORD(v10) = v88;
                  v34 = v76;
                  v35 = v81;
                  goto LABEL_132;
                }
                ++v53;
              }
              while ( (_BYTE *)(a3 + v52 + v50) != v53 );
            }
            if ( !iswprint(wc) )
              v11 = 0;
            v49 += v52;
            if ( mbsinit(&ps) )
            {
              v40 = v49;
              v22 = v93;
              v17 = v94;
              v14 = v11 ^ 1;
              v9 = v86;
              v10 = v88;
              v19 = v76;
              v20 = v81;
              LOBYTE(v14) = v66 & (v11 ^ 1);
              goto LABEL_256;
            }
          }
          v19 = v76;
          v60 = v21 + v49;
          v61 = (_BYTE *)(a3 + v21 + v49);
          v62 = v49;
          v40 = v49;
          v22 = v93;
          v17 = v94;
          v9 = v86;
          v10 = v88;
          v20 = v81;
          if ( v60 < v76 && *v61 )
          {
            do
              ++v62;
            while ( v76 > v21 + v62 && v95[v62] );
            v40 = v62;
          }
          v14 = v66;
LABEL_256:
          if ( v40 > 1 )
            goto LABEL_210;
        }
        if ( (_BYTE)v14 )
        {
          v14 = v66;
LABEL_210:
          v55 = v21 + v40;
          v56 = 0;
          v57 = v68;
          while ( 1 )
          {
            if ( (_BYTE)v14 )
            {
              v58 = v20 == 2;
              v27 = v20 == 2;
              if ( v92 )
              {
LABEL_206:
                v54 = v20;
                v34 = v19;
                v35 = v54;
                goto LABEL_132;
              }
              v59 = v22 ^ 1;
              if ( (v58 & ((unsigned __int8)v22 ^ 1)) != 0 )
              {
                if ( v17 < v10 )
                  v9[v17] = 39;
                if ( v10 > v17 + 1 )
                  v9[v17 + 1] = 36;
                if ( v10 > v17 + 2 )
                  v9[v17 + 2] = 39;
                v17 += 3LL;
                LOBYTE(v59) = v58 & (v22 ^ 1);
                v22 = v59;
              }
              if ( v17 < v10 )
                v9[v17] = 92;
              if ( v10 > v17 + 1 )
                v9[v17 + 1] = ((unsigned __int8)v26 >> 6) + 48;
              if ( v10 > v17 + 2 )
                v9[v17 + 2] = (((unsigned __int8)v26 >> 3) & 7) + 48;
              ++v21;
              v17 += 3LL;
              LOBYTE(v26) = (v26 & 7) + 48;
              if ( v55 <= v21 )
                goto LABEL_33;
              v56 = v14;
            }
            else
            {
              v11 = v22 & (v56 ^ 1);
              if ( v57 )
              {
                if ( v17 < v10 )
                  v9[v17] = 92;
                ++v17;
              }
              if ( ++v21 >= v55 )
                goto LABEL_148;
              if ( (_BYTE)v11 )
              {
                if ( v17 < v10 )
                  v9[v17] = 39;
                if ( v10 > v17 + 1 )
                  v9[v17 + 1] = 39;
                v17 += 2LL;
                v57 = 0;
                v22 = 0;
              }
              else
              {
                v57 = 0;
              }
            }
            if ( v17 < v10 )
              v9[v17] = v26;
            LOBYTE(v26) = *(_BYTE *)(a3 + v21);
            ++v17;
          }
        }
LABEL_127:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_65;
    }
  }
  if ( !n )
    goto LABEL_275;
  if ( v19 == -1LL && n > 1 )
  {
    v82 = v20;
    v77 = v22;
    v24 = strlen((const char *)a3);
    v20 = v82;
    v22 = v77;
    v23 = (_BYTE *)(a3 + v21);
    v19 = v24;
  }
  if ( v21 + n > v19 )
    goto LABEL_275;
  v87 = v20;
  v83 = v19;
  v78 = v22;
  v72 = v23;
  v25 = memcmp(v23, s2, n);
  v23 = v72;
  v22 = v78;
  v19 = v83;
  v20 = v87;
  if ( v25 )
  {
LABEL_275:
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        goto LABEL_103;
      case 7:
LABEL_94:
        LOBYTE(v26) = 97;
        v27 = 0;
        goto LABEL_91;
      case 8:
LABEL_93:
        LOBYTE(v26) = 98;
        v27 = 0;
        goto LABEL_91;
      case 9:
LABEL_102:
        LOBYTE(v26) = 116;
        v27 = 0;
        goto LABEL_91;
      case 0xA:
LABEL_90:
        LOBYTE(v26) = 110;
        v27 = 0;
        goto LABEL_91;
      case 0xB:
LABEL_101:
        LOBYTE(v26) = 118;
        v27 = 0;
        goto LABEL_91;
      case 0xC:
LABEL_100:
        LOBYTE(v26) = 102;
        v27 = 0;
LABEL_91:
        if ( v92 )
          goto LABEL_92;
        goto LABEL_21;
      case 0xD:
        v68 = 0;
LABEL_96:
        LOBYTE(v26) = 13;
        v32 = 114;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0x20:
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
        v68 = 0;
LABEL_85:
        v14 = 0;
        goto LABEL_65;
      case 0x23:
      case 0x7E:
        v68 = 0;
LABEL_98:
        if ( v21 )
          goto LABEL_17;
        v14 = 0;
        goto LABEL_65;
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
        v68 = 0;
        goto LABEL_17;
      case 0x27:
        v68 = 0;
        goto LABEL_73;
      case 0x3F:
        v68 = 0;
        goto LABEL_69;
      case 0x5C:
        v68 = 0;
        goto LABEL_87;
      case 0x7B:
      case 0x7D:
        v68 = 0;
        goto LABEL_60;
      default:
        v68 = 0;
        goto LABEL_124;
    }
  }
  if ( !v92 )
  {
    LOBYTE(v26) = *v72;
    switch ( *v72 )
    {
      case 0:
        goto LABEL_105;
      case 7:
        goto LABEL_94;
      case 8:
        goto LABEL_93;
      case 9:
        goto LABEL_102;
      case 0xA:
        goto LABEL_90;
      case 0xB:
        goto LABEL_101;
      case 0xC:
        goto LABEL_100;
      case 0xD:
        goto LABEL_96;
      case 0x20:
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
        goto LABEL_85;
      case 0x23:
      case 0x7E:
        goto LABEL_98;
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
        goto LABEL_17;
      case 0x27:
        goto LABEL_73;
      case 0x3F:
        goto LABEL_69;
      case 0x5C:
        goto LABEL_87;
      case 0x7B:
      case 0x7D:
        goto LABEL_60;
      default:
        goto LABEL_124;
    }
  }
LABEL_269:
  v63 = v20;
  v34 = v19;
  v35 = v63;
  return sub_401E50((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
}

unsigned __int64 __fastcall sub_401E50(
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
  int v11; // ebp
  char v12; // zf
  size_t mb_cur_max; // rax
  int v14; // edx
  int v15; // r11d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // r11
  int v20; // r10d
  unsigned __int64 v21; // r13
  int v22; // r8d
  _BYTE *v23; // r9
  size_t v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r12
  unsigned __int8 v27; // al
  char *v28; // rax
  char i; // al
  size_t v30; // rax
  bool v31; // al
  char v32; // cl
  int v33; // esi
  int v34; // r10d
  int v35; // r11d
  int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  const unsigned __int16 **v39; // rax
  unsigned __int64 v40; // rcx
  int v41; // edx
  int v42; // eax
  __int64 v44; // rsi
  int v45; // eax
  char v46; // dl
  const char *v47; // rax
  size_t v48; // rax
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // r15
  _BYTE *v53; // rdx
  int v54; // edi
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int8 v57; // si
  bool v58; // bp
  int v59; // eax
  unsigned __int64 v60; // rsi
  _BYTE *v61; // rdi
  unsigned __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  unsigned __int8 v66; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 v68; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v69; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+20h] [rbp-98h]
  _BYTE *v72; // [rsp+28h] [rbp-90h]
  int v73; // [rsp+28h] [rbp-90h]
  unsigned __int8 v74; // [rsp+28h] [rbp-90h]
  _BYTE *v75; // [rsp+28h] [rbp-90h]
  unsigned __int64 v76; // [rsp+28h] [rbp-90h]
  unsigned __int8 v77; // [rsp+30h] [rbp-88h]
  unsigned __int8 v78; // [rsp+30h] [rbp-88h]
  unsigned __int64 v79; // [rsp+30h] [rbp-88h]
  char v80; // [rsp+30h] [rbp-88h]
  int v81; // [rsp+30h] [rbp-88h]
  int v82; // [rsp+38h] [rbp-80h]
  unsigned __int64 v83; // [rsp+38h] [rbp-80h]
  int v84; // [rsp+38h] [rbp-80h]
  int v85; // [rsp+38h] [rbp-80h]
  _BYTE *v86; // [rsp+38h] [rbp-80h]
  int v87; // [rsp+40h] [rbp-78h]
  unsigned __int64 v88; // [rsp+40h] [rbp-78h]
  const char *s2; // [rsp+48h] [rbp-70h]
  size_t v90; // [rsp+50h] [rbp-68h]
  bool v92; // [rsp+5Dh] [rbp-5Bh]
  unsigned __int8 v93; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int64 v94; // [rsp+60h] [rbp-58h]
  _BYTE *v95; // [rsp+68h] [rbp-50h]
  wint_t wc; // [rsp+74h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+78h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v11 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v15 = a5;
  v90 = mb_cur_max;
  v16 = a4;
  switch ( a5 )
  {
    case 0:
      v92 = 0;
      v17 = 0LL;
      v66 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v66 = 0;
        goto LABEL_38;
      }
      v92 = 1;
      v17 = 0LL;
      v66 = 0;
      n = 1LL;
      s2 = "'";
      break;
    case 3:
      v92 = 1;
      v17 = 0LL;
      v15 = 2;
      v66 = 1;
      n = 1LL;
      s2 = "'";
      break;
    case 4:
      if ( v11 )
      {
LABEL_2:
        v92 = 1;
        v17 = 0LL;
        v15 = 2;
        v66 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v66 = 1;
LABEL_38:
        if ( a2 )
          *a1 = 39;
        v92 = 0;
        v17 = 1LL;
        v15 = 2;
        n = 1LL;
        s2 = "'";
      }
      break;
    case 5:
      if ( v11 )
      {
        v92 = 1;
        v17 = 0LL;
        v66 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v92 = 0;
        v17 = 1LL;
        v66 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v92 = 1;
      v17 = 0LL;
      v15 = 5;
      v66 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v92 = 0;
      v17 = 0LL;
      v66 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_401D50("`", a5);
        v28 = (char *)sub_401D50((char *)"'", a5);
        v16 = a4;
        v15 = a5;
        a9 = v28;
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
      v73 = v15;
      v69 = v16;
      v92 = v11 != 0;
      v30 = strlen(a9);
      v66 = 1;
      v16 = v69;
      n = v30;
      v15 = v73;
      s2 = a9;
      break;
    default:
      abort();
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
      LOBYTE(v11) = *(_BYTE *)(a3 + v21) != 0;
    if ( !(_BYTE)v11 )
    {
      v45 = v20;
      v34 = v19;
      v35 = v45;
      v27 = v17 == 0 && v92 && v45 == 2;
      if ( v27 )
        goto LABEL_132;
      if ( s2 )
      {
        if ( !v92 )
        {
          v46 = *s2;
          if ( *s2 )
          {
            v47 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                v9[v17] = v46;
              v46 = v47[++v17];
            }
            while ( v46 );
          }
        }
      }
      if ( v17 < v10 )
        v9[v17] = 0;
      return v17;
    }
    v23 = (_BYTE *)(a3 + v21);
    v68 = v66 & (v20 != 2);
    if ( v68 )
      break;
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        if ( !v66 )
        {
          if ( (a6 & 1) != 0 )
          {
            ++v21;
            continue;
          }
          if ( !v92 )
          {
            ++v21;
            v11 = v22;
            LOBYTE(v26) = 0;
            goto LABEL_148;
          }
          v11 = 0;
          if ( a7 )
          {
            v68 = 0;
            LOBYTE(v26) = 0;
            goto LABEL_18;
          }
          LOBYTE(v26) = 0;
          goto LABEL_122;
        }
LABEL_103:
        if ( v92 )
        {
          v64 = v20;
          v34 = v19;
          v35 = v64;
          v27 = v64 == 2;
          goto LABEL_132;
        }
        v68 = 0;
LABEL_105:
        LOBYTE(v14) = v20 == 2;
        v36 = v22 ^ 1;
        LOBYTE(v36) = (v20 == 2) & (v22 ^ 1);
        if ( (_BYTE)v36 )
        {
          if ( v17 < v10 )
            v9[v17] = 39;
          if ( v10 > v17 + 1 )
            v9[v17 + 1] = 36;
          if ( v10 > v17 + 2 )
            v9[v17 + 2] = 39;
          v37 = v17 + 3;
          if ( v10 <= v17 + 3 )
          {
            v17 += 4LL;
            ++v21;
            v22 = v36;
            LOBYTE(v26) = 48;
            goto LABEL_82;
          }
          v22 = v36;
LABEL_114:
          v9[v37] = 92;
        }
        else
        {
          v37 = v17;
          if ( v17 < v10 )
            goto LABEL_114;
        }
        v17 = v37 + 1;
        v38 = v21 + 1;
        if ( v20 == 2 )
        {
          ++v21;
          LOBYTE(v26) = 48;
          goto LABEL_82;
        }
        LOBYTE(v26) = 48;
        if ( v38 < v19 && (unsigned __int8)(*(_BYTE *)(a3 + v38) - 48) <= 9u )
        {
          if ( v10 > v17 )
            v9[v17] = 48;
          if ( v10 > v37 + 2 )
            v9[v37 + 2] = 48;
          v17 = v37 + 3;
          LOBYTE(v26) = 48;
        }
        goto LABEL_118;
      case 7:
        LOBYTE(v26) = 7;
        v32 = 97;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 8:
        LOBYTE(v26) = 8;
        v32 = 98;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 9:
        LOBYTE(v26) = 9;
        v32 = 116;
        goto LABEL_130;
      case 0xA:
        LOBYTE(v26) = 10;
        v32 = 110;
        goto LABEL_130;
      case 0xB:
        LOBYTE(v26) = 11;
        v32 = 118;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0xC:
        LOBYTE(v26) = 12;
        v32 = 102;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0xD:
        LOBYTE(v26) = 13;
        v32 = 114;
LABEL_130:
        LOBYTE(v14) = v20 == 2;
        v68 = v20 == 2 && v92;
        if ( !v68 )
          goto LABEL_88;
        v42 = v20;
        v34 = v19;
        v35 = v42;
        v27 = v68;
        goto LABEL_132;
      case 0x20:
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
        LOBYTE(v14) = v20 == 2;
        goto LABEL_64;
      case 0x23:
      case 0x7E:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_63;
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
        goto LABEL_127;
      case 0x27:
LABEL_73:
        v14 = 0;
        LOBYTE(v26) = 39;
        if ( v20 != 2 )
          goto LABEL_65;
        if ( v92 )
          goto LABEL_270;
        if ( v17 < v10 )
          v9[v17] = 39;
        if ( v10 > v17 + 1 )
          v9[v17 + 1] = 92;
        if ( v10 > v17 + 2 )
          v9[v17 + 2] = 39;
        v17 += 3LL;
        ++v21;
        v22 = 0;
        LOBYTE(v26) = 39;
LABEL_82:
        if ( !v68 )
          goto LABEL_33;
        goto LABEL_67;
      case 0x3F:
LABEL_69:
        if ( v20 == 2 )
        {
          if ( v92 )
          {
LABEL_270:
            v34 = v19;
            v35 = 2;
            v27 = v92;
LABEL_132:
            if ( v66 && v27 )
              v35 = 4;
            return sub_401E50((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
          }
          v11 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_66;
        }
        if ( v20 != 5 )
        {
          LOBYTE(v26) = 63;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_65;
        }
        if ( (a6 & 4) == 0 )
        {
          v14 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_65;
        }
        v14 = 0;
        LOBYTE(v26) = 63;
        if ( v21 + 2 >= v19 || *(_BYTE *)(a3 + v21 + 1) != 63 )
          goto LABEL_65;
        v26 = *(unsigned __int8 *)(a3 + v21 + 2);
        if ( (unsigned __int8)v26 > 0x3Eu || (v44 = 0x7000A38200000000LL, !_bittest64(&v44, v26)) )
        {
          LOBYTE(v26) = 63;
LABEL_65:
          v11 = (v14 | v66 ^ 1) ^ 1;
          LOBYTE(v11) = v92 | (v14 | v66 ^ 1) ^ 1;
          if ( (_BYTE)v11 )
          {
LABEL_17:
            v11 = 0;
            if ( !a7 )
              goto LABEL_121;
            goto LABEL_18;
          }
          goto LABEL_66;
        }
        if ( v92 )
          goto LABEL_269;
        if ( v17 < v10 )
          v9[v17] = 63;
        if ( v10 > v17 + 1 )
          v9[v17 + 1] = 34;
        if ( v10 > v17 + 2 )
          v9[v17 + 2] = 34;
        if ( v10 > v17 + 3 )
          v9[v17 + 3] = 63;
        v17 += 4LL;
        v14 = 0;
        v11 = 0;
        v21 += 2LL;
LABEL_118:
        if ( v66 && !(_BYTE)v14 )
        {
          if ( !a7 )
          {
LABEL_121:
            v27 = v20 == 2;
            if ( !v68 )
            {
LABEL_122:
              ++v21;
              v11 = v22 & (v11 ^ 1);
              goto LABEL_148;
            }
LABEL_20:
            if ( v92 )
            {
LABEL_92:
              v33 = v20;
              v34 = v19;
              v35 = v33;
              goto LABEL_132;
            }
LABEL_21:
            ++v21;
            goto LABEL_22;
          }
LABEL_18:
          if ( ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v26 >> 5)) >> v26) & 1) == 0 )
            goto LABEL_121;
          v27 = v20 == 2;
          goto LABEL_20;
        }
LABEL_66:
        ++v21;
        if ( !v68 )
        {
          v11 = v22 & (v11 ^ 1);
LABEL_148:
          if ( (_BYTE)v11 )
          {
            if ( v17 < v10 )
              v9[v17] = 39;
            if ( v10 > v17 + 1 )
              v9[v17 + 1] = 39;
            v17 += 2LL;
            v22 = 0;
          }
          goto LABEL_33;
        }
LABEL_67:
        v27 = v20 == 2;
LABEL_22:
        v14 = v22 ^ 1;
        if ( (v27 & ((unsigned __int8)v22 ^ 1)) != 0 )
        {
          if ( v10 > v17 )
            v9[v17] = 39;
          if ( v10 > v17 + 1 )
            v9[v17 + 1] = 36;
          if ( v10 > v17 + 2 )
            v9[v17 + 2] = 39;
          v17 += 3LL;
          LOBYTE(v14) = v27 & (v22 ^ 1);
          v22 = v14;
        }
        if ( v17 < v10 )
          v9[v17] = 92;
        ++v17;
LABEL_33:
        if ( v17 < v10 )
          v9[v17] = v26;
        ++v17;
        break;
      case 0x5C:
        if ( v20 == 2 )
        {
          if ( v92 )
            goto LABEL_270;
          ++v21;
          v11 = v22;
          LOBYTE(v26) = 92;
          goto LABEL_148;
        }
LABEL_87:
        v11 = v92 & v66;
        LOBYTE(v26) = 92;
        v32 = 92;
        v14 = v11;
        LOBYTE(v14) = (n != 0) & v11;
        if ( (_BYTE)v14 )
        {
          ++v21;
          v11 = v22;
          goto LABEL_148;
        }
LABEL_88:
        if ( !v66 )
          goto LABEL_65;
        v27 = v14;
        LOBYTE(v26) = v32;
        goto LABEL_20;
      case 0x7B:
      case 0x7D:
LABEL_60:
        v31 = v19 != 1;
        if ( v19 == -1LL )
          v31 = *(_BYTE *)(a3 + 1) != 0;
        LOBYTE(v14) = v20 == 2;
        if ( v31 )
          goto LABEL_65;
LABEL_63:
        if ( v21 )
          goto LABEL_65;
LABEL_64:
        v27 = v14 & v92;
        if ( ((unsigned __int8)v14 & v92) == 0 )
          goto LABEL_65;
        goto LABEL_206;
      default:
LABEL_124:
        if ( v90 == 1 )
        {
          v84 = v20;
          v79 = v19;
          v74 = v22;
          v39 = __ctype_b_loc();
          v22 = v74;
          v19 = v79;
          v20 = v84;
          v40 = 1LL;
          v41 = (*v39)[(unsigned __int8)v26];
          LOWORD(v41) = (unsigned __int16)v41 >> 14;
          v14 = v41 ^ 1;
          LOBYTE(v14) = v66 & v14;
        }
        else
        {
          ps = 0LL;
          if ( v19 == -1LL )
          {
            v85 = v20;
            v80 = v22;
            v75 = v23;
            v48 = strlen((const char *)a3);
            v20 = v85;
            LOBYTE(v22) = v80;
            v23 = v75;
            v19 = v48;
          }
          v94 = v17;
          v93 = v22;
          v49 = 0LL;
          v95 = v23;
          v86 = v9;
          v88 = v10;
          v76 = v19;
          v81 = v20;
          while ( 1 )
          {
            v50 = v21 + v49;
            v51 = sub_405190(&wc, a3 + v21 + v49, v76 - (v21 + v49), &ps);
            v52 = v51;
            if ( !v51 )
            {
              v11 ^= 1u;
              v40 = v49;
              v9 = v86;
              v22 = v93;
              v17 = v94;
              v10 = v88;
              v14 = (unsigned __int8)(v11 & v66);
              v19 = v76;
              v20 = v81;
              goto LABEL_256;
            }
            if ( v51 == -1 )
            {
              v40 = v49;
              v22 = v93;
              v17 = v94;
              v9 = v86;
              v10 = v88;
              v19 = v76;
              v20 = v81;
              v14 = v66;
              goto LABEL_256;
            }
            if ( v51 == -2 )
              break;
            v27 = v92 && v81 == 2;
            if ( v27 && v52 != 1 )
            {
              v53 = (_BYTE *)(a3 + v50 + 1);
              do
              {
                if ( (unsigned __int8)(*v53 - 91) <= 0x21u && ((1LL << (*v53 - 91)) & 0x20000002BLL) != 0 )
                {
                  LODWORD(v9) = (_DWORD)v86;
                  LODWORD(v10) = v88;
                  v34 = v76;
                  v35 = v81;
                  goto LABEL_132;
                }
                ++v53;
              }
              while ( (_BYTE *)(a3 + v52 + v50) != v53 );
            }
            if ( !iswprint(wc) )
              v11 = 0;
            v49 += v52;
            if ( mbsinit(&ps) )
            {
              v40 = v49;
              v22 = v93;
              v17 = v94;
              v14 = v11 ^ 1;
              v9 = v86;
              v10 = v88;
              v19 = v76;
              v20 = v81;
              LOBYTE(v14) = v66 & (v11 ^ 1);
              goto LABEL_256;
            }
          }
          v19 = v76;
          v60 = v21 + v49;
          v61 = (_BYTE *)(a3 + v21 + v49);
          v62 = v49;
          v40 = v49;
          v22 = v93;
          v17 = v94;
          v9 = v86;
          v10 = v88;
          v20 = v81;
          if ( v60 < v76 && *v61 )
          {
            do
              ++v62;
            while ( v76 > v21 + v62 && v95[v62] );
            v40 = v62;
          }
          v14 = v66;
LABEL_256:
          if ( v40 > 1 )
            goto LABEL_210;
        }
        if ( (_BYTE)v14 )
        {
          v14 = v66;
LABEL_210:
          v55 = v21 + v40;
          v56 = 0;
          v57 = v68;
          while ( 1 )
          {
            if ( (_BYTE)v14 )
            {
              v58 = v20 == 2;
              v27 = v20 == 2;
              if ( v92 )
              {
LABEL_206:
                v54 = v20;
                v34 = v19;
                v35 = v54;
                goto LABEL_132;
              }
              v59 = v22 ^ 1;
              if ( (v58 & ((unsigned __int8)v22 ^ 1)) != 0 )
              {
                if ( v17 < v10 )
                  v9[v17] = 39;
                if ( v10 > v17 + 1 )
                  v9[v17 + 1] = 36;
                if ( v10 > v17 + 2 )
                  v9[v17 + 2] = 39;
                v17 += 3LL;
                LOBYTE(v59) = v58 & (v22 ^ 1);
                v22 = v59;
              }
              if ( v17 < v10 )
                v9[v17] = 92;
              if ( v10 > v17 + 1 )
                v9[v17 + 1] = ((unsigned __int8)v26 >> 6) + 48;
              if ( v10 > v17 + 2 )
                v9[v17 + 2] = (((unsigned __int8)v26 >> 3) & 7) + 48;
              ++v21;
              v17 += 3LL;
              LOBYTE(v26) = (v26 & 7) + 48;
              if ( v55 <= v21 )
                goto LABEL_33;
              v56 = v14;
            }
            else
            {
              v11 = v22 & (v56 ^ 1);
              if ( v57 )
              {
                if ( v17 < v10 )
                  v9[v17] = 92;
                ++v17;
              }
              if ( ++v21 >= v55 )
                goto LABEL_148;
              if ( (_BYTE)v11 )
              {
                if ( v17 < v10 )
                  v9[v17] = 39;
                if ( v10 > v17 + 1 )
                  v9[v17 + 1] = 39;
                v17 += 2LL;
                v57 = 0;
                v22 = 0;
              }
              else
              {
                v57 = 0;
              }
            }
            if ( v17 < v10 )
              v9[v17] = v26;
            LOBYTE(v26) = *(_BYTE *)(a3 + v21);
            ++v17;
          }
        }
LABEL_127:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_65;
    }
  }
  if ( !n )
    goto LABEL_275;
  if ( v19 == -1LL && n > 1 )
  {
    v82 = v20;
    v77 = v22;
    v24 = strlen((const char *)a3);
    v20 = v82;
    v22 = v77;
    v23 = (_BYTE *)(a3 + v21);
    v19 = v24;
  }
  if ( v21 + n > v19 )
    goto LABEL_275;
  v87 = v20;
  v83 = v19;
  v78 = v22;
  v72 = v23;
  v25 = memcmp(v23, s2, n);
  v23 = v72;
  v22 = v78;
  v19 = v83;
  v20 = v87;
  if ( v25 )
  {
LABEL_275:
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        goto LABEL_103;
      case 7:
LABEL_94:
        LOBYTE(v26) = 97;
        v27 = 0;
        goto LABEL_91;
      case 8:
LABEL_93:
        LOBYTE(v26) = 98;
        v27 = 0;
        goto LABEL_91;
      case 9:
LABEL_102:
        LOBYTE(v26) = 116;
        v27 = 0;
        goto LABEL_91;
      case 0xA:
LABEL_90:
        LOBYTE(v26) = 110;
        v27 = 0;
        goto LABEL_91;
      case 0xB:
LABEL_101:
        LOBYTE(v26) = 118;
        v27 = 0;
        goto LABEL_91;
      case 0xC:
LABEL_100:
        LOBYTE(v26) = 102;
        v27 = 0;
LABEL_91:
        if ( v92 )
          goto LABEL_92;
        goto LABEL_21;
      case 0xD:
        v68 = 0;
LABEL_96:
        LOBYTE(v26) = 13;
        v32 = 114;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0x20:
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
        v68 = 0;
LABEL_85:
        v14 = 0;
        goto LABEL_65;
      case 0x23:
      case 0x7E:
        v68 = 0;
LABEL_98:
        if ( v21 )
          goto LABEL_17;
        v14 = 0;
        goto LABEL_65;
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
        v68 = 0;
        goto LABEL_17;
      case 0x27:
        v68 = 0;
        goto LABEL_73;
      case 0x3F:
        v68 = 0;
        goto LABEL_69;
      case 0x5C:
        v68 = 0;
        goto LABEL_87;
      case 0x7B:
      case 0x7D:
        v68 = 0;
        goto LABEL_60;
      default:
        v68 = 0;
        goto LABEL_124;
    }
  }
  if ( !v92 )
  {
    LOBYTE(v26) = *v72;
    switch ( *v72 )
    {
      case 0:
        goto LABEL_105;
      case 7:
        goto LABEL_94;
      case 8:
        goto LABEL_93;
      case 9:
        goto LABEL_102;
      case 0xA:
        goto LABEL_90;
      case 0xB:
        goto LABEL_101;
      case 0xC:
        goto LABEL_100;
      case 0xD:
        goto LABEL_96;
      case 0x20:
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
        goto LABEL_85;
      case 0x23:
      case 0x7E:
        goto LABEL_98;
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
        goto LABEL_17;
      case 0x27:
        goto LABEL_73;
      case 0x3F:
        goto LABEL_69;
      case 0x5C:
        goto LABEL_87;
      case 0x7B:
      case 0x7D:
        goto LABEL_60;
      default:
        goto LABEL_124;
    }
  }
LABEL_269:
  v63 = v20;
  v34 = v19;
  v35 = v63;
  return sub_401E50((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
}

_BYTE *__fastcall sub_402E60(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  __m128i *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  _BYTE *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rax
  int v17; // r8d
  __m128i *v19; // rax
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_608210 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( ptr == &xmmword_608200 )
    {
      v19 = (__m128i *)sub_403CC0(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      ptr = v19;
      *v19 = _mm_load_si128((const __m128i *)&xmmword_608200);
    }
    else
    {
      v10 = (__m128i *)sub_403CC0(ptr, v9);
      v11 = (unsigned int)(a1 + 1);
      ptr = v10;
      v7 = v10;
    }
    memset(&v7[dword_608210], 0, 16 * (v11 - (unsigned int)dword_608210));
    dword_608210 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(a4 + 4) | 1;
  v21 = *v12;
  v14 = sub_401E50(v13, *v12, a2, a3, *(_DWORD *)a4, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v21 <= v14 )
  {
    v15 = v14 + 1;
    *v12 = v14 + 1;
    if ( v13 != (_BYTE *)&unk_608280 )
    {
      v22 = v14 + 1;
      free(v13);
      v15 = v22;
    }
    v16 = (_BYTE *)sub_403C70(v15);
    v17 = *(_DWORD *)a4;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_401E50(v16, v15, a2, a3, v17, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_402E60(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  __m128i *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  _BYTE *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rax
  int v17; // r8d
  __m128i *v19; // rax
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_608210 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( ptr == &xmmword_608200 )
    {
      v19 = (__m128i *)sub_403CC0(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      ptr = v19;
      *v19 = _mm_load_si128((const __m128i *)&xmmword_608200);
    }
    else
    {
      v10 = (__m128i *)sub_403CC0(ptr, v9);
      v11 = (unsigned int)(a1 + 1);
      ptr = v10;
      v7 = v10;
    }
    memset(&v7[dword_608210], 0, 16 * (v11 - (unsigned int)dword_608210));
    dword_608210 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(a4 + 4) | 1;
  v21 = *v12;
  v14 = sub_401E50(v13, *v12, a2, a3, *(_DWORD *)a4, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v21 <= v14 )
  {
    v15 = v14 + 1;
    *v12 = v14 + 1;
    if ( v13 != (_BYTE *)&unk_608280 )
    {
      v22 = v14 + 1;
      free(v13);
      v15 = v22;
    }
    v16 = (_BYTE *)sub_403C70(v15);
    v17 = *(_DWORD *)a4;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_401E50(v16, v15, a2, a3, v17, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v23;
  return v13;
}

__int64 __fastcall sub_403000(__int128 *a1)
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
    v1 = &xmmword_608380;
  result = sub_403E30(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_4030F0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_608380;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_401E50(
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

_BYTE *__fastcall sub_403170(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_608380;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_401E50(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_403C70(v11 + 1);
  sub_401E50(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_403270()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( (unsigned int)dword_608210 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_608210 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_608280 )
  {
    free(v4);
    *(_QWORD *)&xmmword_608200 = 256LL;
    *((_QWORD *)&xmmword_608200 + 1) = &unk_608280;
  }
  if ( v0 != &xmmword_608200 )
  {
    free(v0);
    ptr = &xmmword_608200;
  }
  dword_608210 = 1;
}

_BYTE *__fastcall sub_403380(int a1, int a2, __int64 a3)
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
  return sub_402E60(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_403380(int a1, int a2, __int64 a3)
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
  return sub_402E60(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4033F0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_402E60(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_4033F0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_402E60(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_403480(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_6083B0;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_608380);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_608390);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6083A0);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_402E60(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_403500(__int64 a1)
{
  return sub_403480(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_403530(int a1, int a2, __int64 a3)
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
  return sub_402E60(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_403530(int a1, int a2, __int64 a3)
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
  return sub_402E60(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4035A0(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_608380);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_608390);
  si128 = _mm_load_si128((const __m128i *)&xmmword_6083A0);
  v8 = qword_6083B0;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_402E60(a1, a4, a5, (__int64)v6);
}

int __fastcall sub_4036D0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // r15
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
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // r12
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // r13
  __int64 v51; // rbx
  char *v52; // rax
  __int64 v53; // r13
  __int64 v54; // r12
  __int64 v55; // r15
  __int64 v56; // r14
  __int64 v57; // rbx
  char *v58; // rax
  __int64 v59; // rcx
  int v60; // [rsp-10h] [rbp-68h]
  __int64 v61; // [rsp+0h] [rbp-58h]
  __int64 v62; // [rsp+0h] [rbp-58h]
  __int64 v63; // [rsp+0h] [rbp-58h]
  __int64 v64; // [rsp+0h] [rbp-58h]
  __int64 v65; // [rsp+8h] [rbp-50h]
  __int64 v66; // [rsp+8h] [rbp-50h]
  __int64 v67; // [rsp+8h] [rbp-50h]
  __int64 v68; // [rsp+10h] [rbp-48h]
  __int64 v69; // [rsp+10h] [rbp-48h]
  __int64 v70; // [rsp+18h] [rbp-40h]

  if ( a2 )
    fprintf(stream, "%s (%s) %s\n", a2, a3, a4);
  else
    fprintf(stream, "%s %s\n", a3, a4);
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v40, v39, v38, v37, v36);
    case 5LL:
      v41 = a5[4];
      v42 = a5[3];
      v43 = a5[2];
      v44 = a5[1];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v46, v45, v44, v43, v42, v41);
      return v60;
    case 6LL:
      v47 = a5[1];
      v48 = a5[4];
      v49 = a5[3];
      v50 = a5[2];
      v51 = *a5;
      v63 = v47;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v52, v51, v63, v50, v49, v48);
      return v60;
    case 7LL:
      v53 = a5[6];
      v54 = a5[5];
      v55 = a5[4];
      v56 = a5[3];
      v67 = a5[2];
      v64 = a5[1];
      v57 = *a5;
      v58 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return fprintf(stream, v58, v57, v64, v67, v56, v55, v54, v53);
    case 8LL:
      v10 = a5[7];
      v11 = a5[6];
      v12 = a5[5];
      v13 = a5[4];
      v14 = a5[2];
      v68 = a5[3];
      v15 = a5[1];
      v16 = *a5;
      v65 = v14;
      v61 = v15;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v17, v16, v61, v65, v68, v13, v12, v11, v10);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[7];
      v22 = a5[6];
      v70 = a5[8];
      v23 = a5[5];
      v24 = a5[4];
      v69 = a5[3];
      v66 = a5[2];
      v25 = *a5;
      v62 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = a5[1];
      v21 = a5[7];
      v22 = a5[6];
      v70 = a5[8];
      v23 = a5[5];
      v24 = a5[4];
      v69 = a5[3];
      v66 = a5[2];
      v25 = *a5;
      v62 = v59;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return fprintf(stream, v26, v25, v62, v66, v69, v24, v23, v22, v21, v70);
  }
}

int __fastcall sub_4036D0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // r15
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
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // r12
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // r13
  __int64 v51; // rbx
  char *v52; // rax
  __int64 v53; // r13
  __int64 v54; // r12
  __int64 v55; // r15
  __int64 v56; // r14
  __int64 v57; // rbx
  char *v58; // rax
  __int64 v59; // rcx
  int v60; // [rsp-10h] [rbp-68h]
  __int64 v61; // [rsp+0h] [rbp-58h]
  __int64 v62; // [rsp+0h] [rbp-58h]
  __int64 v63; // [rsp+0h] [rbp-58h]
  __int64 v64; // [rsp+0h] [rbp-58h]
  __int64 v65; // [rsp+8h] [rbp-50h]
  __int64 v66; // [rsp+8h] [rbp-50h]
  __int64 v67; // [rsp+8h] [rbp-50h]
  __int64 v68; // [rsp+10h] [rbp-48h]
  __int64 v69; // [rsp+10h] [rbp-48h]
  __int64 v70; // [rsp+18h] [rbp-40h]

  if ( a2 )
    fprintf(stream, "%s (%s) %s\n", a2, a3, a4);
  else
    fprintf(stream, "%s %s\n", a3, a4);
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v40, v39, v38, v37, v36);
    case 5LL:
      v41 = a5[4];
      v42 = a5[3];
      v43 = a5[2];
      v44 = a5[1];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v46, v45, v44, v43, v42, v41);
      return v60;
    case 6LL:
      v47 = a5[1];
      v48 = a5[4];
      v49 = a5[3];
      v50 = a5[2];
      v51 = *a5;
      v63 = v47;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v52, v51, v63, v50, v49, v48);
      return v60;
    case 7LL:
      v53 = a5[6];
      v54 = a5[5];
      v55 = a5[4];
      v56 = a5[3];
      v67 = a5[2];
      v64 = a5[1];
      v57 = *a5;
      v58 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return fprintf(stream, v58, v57, v64, v67, v56, v55, v54, v53);
    case 8LL:
      v10 = a5[7];
      v11 = a5[6];
      v12 = a5[5];
      v13 = a5[4];
      v14 = a5[2];
      v68 = a5[3];
      v15 = a5[1];
      v16 = *a5;
      v65 = v14;
      v61 = v15;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v17, v16, v61, v65, v68, v13, v12, v11, v10);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[7];
      v22 = a5[6];
      v70 = a5[8];
      v23 = a5[5];
      v24 = a5[4];
      v69 = a5[3];
      v66 = a5[2];
      v25 = *a5;
      v62 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = a5[1];
      v21 = a5[7];
      v22 = a5[6];
      v70 = a5[8];
      v23 = a5[5];
      v24 = a5[4];
      v69 = a5[3];
      v66 = a5[2];
      v25 = *a5;
      v62 = v59;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return fprintf(stream, v26, v25, v62, v66, v69, v24, v23, v22, v21, v70);
  }
}

int __fastcall sub_403AE0(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_4036D0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_4036D0(a1, a2, a3, a4, v12, i);
}

int __fastcall sub_403B40(FILE *a1, const char *a2, const char *a3, const char *a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4036D0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_4036D0(a1, a2, a3, a4, v15, i);
}

int sub_403C00()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  printf(v0, "bug-findutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  printf(v1, "GNU findutils", "http://www.gnu.org/software/findutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <http://www.gnu.org/gethelp/>\n", 5);
  return fputs(v3, v2);
}

void *__fastcall sub_403C70(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_403E90();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_403CB0(size_t a1)
{
  return sub_403C70(a1);
}

void *__fastcall sub_403CC0(void *a1, size_t a2)
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
        sub_403E90();
    }
  }
  return result;
}

void *__fastcall sub_403DF0(size_t n)
{
  void *v1; // rax

  v1 = sub_403C70(n);
  return memset(v1, 0, n);
}

void *__fastcall sub_403E10(size_t a1, size_t a2)
{
  void *result; // rax

  result = calloc(a1, a2);
  if ( !result )
    sub_403E90();
  return result;
}

void *__fastcall sub_403E30(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_403C70(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_403E60(const char *src)
{
  size_t v1; // rbx
  void *v2; // rax

  v1 = strlen(src) + 1;
  v2 = sub_403C70(v1);
  return memcpy(v2, src, v1);
}

void __noreturn sub_403E90()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_403ED0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_403F10(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_403F10(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_403F70(__int64 a1, int *a2)
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
  v3 = a2[12];
  v4 = *a2;
  v5 = a2[13];
  v6 = v3;
  v7 = *a2;
  v8 = a2[13];
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
  a2[13] = v4;
  result = (unsigned int)(v4 - v8);
  a2[12] = result + v3;
  return result;
}

__int64 __fastcall sub_404050(int a1, __int64 *a2, char *a3, const char **a4, int *a5, int a6, int *a7, int a8)
{
  int *v8; // r12
  int v9; // eax
  int v10; // ebp
  _BYTE *v11; // r8
  char v12; // al
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // rax
  const char *v18; // rbx
  unsigned int v19; // r13d
  char v20; // r14
  char *v21; // rax
  char v22; // dl
  char v23; // dl
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  int v31; // edx
  __int64 v32; // rax
  _BYTE *v33; // rcx
  int v34; // esi
  char v35; // cl
  __int64 v36; // rax
  char v37; // r13
  const char *i; // r14
  int v39; // r13d
  size_t v40; // r14
  const char **v41; // rbp
  const char *v42; // r12
  const char **v43; // r15
  _BYTE *v44; // r13
  unsigned int v45; // eax
  const char **v46; // rbx
  const char *v47; // r15
  __int64 v48; // r14
  const char *v49; // rsi
  size_t v50; // r13
  int v51; // ebp
  _QWORD *v52; // rax
  _BYTE *v53; // r13
  int v54; // eax
  int v55; // ecx
  const char *v56; // rbx
  unsigned int *v57; // rax
  int v58; // r15d
  _QWORD *v59; // rdi
  _QWORD *v60; // r14
  char *v61; // rbx
  char *v62; // rax
  unsigned int v63; // ebp
  __int64 v64; // rbx
  char *v65; // rax
  char *v66; // rax
  const char *v67; // rbp
  __int64 v68; // rbx
  unsigned int v69; // r13d
  char *v70; // rax
  const char *v71; // rbx
  void *v72; // rdi
  __int64 v73; // rbx
  char *v74; // rax
  __int64 v75; // rbp
  __int64 v76; // rbx
  char *v77; // rax
  char *v78; // rbx
  const char **j; // rax
  const char *v80; // rbx
  size_t v81; // rax
  const char *v82; // rbx
  size_t v83; // rax
  _QWORD *v84; // rdi
  _QWORD *v85; // rbx
  int v86; // eax
  char v87; // r13
  const char *v88; // r14
  int v89; // ebp
  int v90; // eax
  _BYTE *v91; // rbp
  __int64 v92; // rbx
  char *v93; // rax
  int v94; // eax
  const char **v95; // rsi
  __int64 v96; // rbp
  __int64 v97; // rbx
  char *v98; // rax
  const char *v99; // rbx
  size_t v100; // rax
  __int64 v101; // rbx
  char *v102; // rax
  __int64 v103; // rax
  char *v104; // rax
  const char *v105; // rbp
  __int64 v106; // rbx
  char *v107; // rax
  __int64 v108; // rbp
  char *v109; // rax
  __int64 v110; // rbx
  char *v111; // rax
  const char *v112; // rbp
  __int64 v113; // rbx
  char *v114; // rax
  const char *v115; // rbp
  __int64 v116; // rbx
  char *v117; // rax
  char *s; // [rsp+0h] [rbp-98h]
  char *sa; // [rsp+0h] [rbp-98h]
  int sb; // [rsp+0h] [rbp-98h]
  int v121; // [rsp+Ch] [rbp-8Ch]
  int v122; // [rsp+Ch] [rbp-8Ch]
  _BYTE *v124; // [rsp+18h] [rbp-80h]
  _BYTE *v125; // [rsp+18h] [rbp-80h]
  const char **v126; // [rsp+18h] [rbp-80h]
  char *v127; // [rsp+18h] [rbp-80h]
  int v129; // [rsp+20h] [rbp-78h]
  int v131; // [rsp+2Ch] [rbp-6Ch]
  int v132; // [rsp+2Ch] [rbp-6Ch]
  int v133; // [rsp+2Ch] [rbp-6Ch]
  int v134; // [rsp+2Ch] [rbp-6Ch]
  const char *v136; // [rsp+38h] [rbp-60h]
  int v137; // [rsp+38h] [rbp-60h]
  int v138; // [rsp+40h] [rbp-58h]
  _BYTE *v139; // [rsp+40h] [rbp-58h]
  char v140; // [rsp+48h] [rbp-50h]
  int v141; // [rsp+48h] [rbp-50h]
  char v143; // [rsp+50h] [rbp-48h] BYREF
  __int64 v144; // [rsp+58h] [rbp-40h]

  v8 = a7;
  s = a3;
  v121 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  *((_QWORD *)a7 + 2) = 0LL;
  v9 = *a7;
  v10 = a1;
  if ( !*a7 )
  {
    *a7 = 1;
    v9 = 1;
    goto LABEL_4;
  }
  if ( !a7[6] )
  {
LABEL_4:
    a7[13] = v9;
    a7[12] = v9;
    *((_QWORD *)a7 + 4) = 0LL;
    if ( a8 )
    {
      a7[11] = 1;
      v11 = 0LL;
      if ( *a3 != 45 )
      {
        if ( *a3 != 43 )
        {
LABEL_7:
          a7[10] = 0;
LABEL_8:
          a7[6] = 1;
          v12 = *s;
          goto LABEL_9;
        }
LABEL_68:
        a7[10] = 0;
        ++s;
        goto LABEL_8;
      }
    }
    else if ( getenv("POSIXLY_CORRECT") )
    {
      v11 = (_BYTE *)*((_QWORD *)a7 + 4);
      a7[11] = 1;
      if ( *s != 45 )
      {
        if ( *s != 43 )
          goto LABEL_7;
        goto LABEL_68;
      }
    }
    else
    {
      a7[11] = 0;
      if ( *s != 45 )
      {
        if ( *s != 43 )
        {
          a7[10] = 1;
          v11 = (_BYTE *)*((_QWORD *)a7 + 4);
          goto LABEL_8;
        }
        v11 = (_BYTE *)*((_QWORD *)a7 + 4);
        goto LABEL_68;
      }
      v11 = (_BYTE *)*((_QWORD *)a7 + 4);
    }
    a7[10] = 2;
    ++s;
    goto LABEL_8;
  }
  v11 = (_BYTE *)*((_QWORD *)a7 + 4);
  v12 = *a3;
  if ( ((*a3 - 43) & 0xFD) == 0 )
  {
    v12 = a3[1];
    s = a3 + 1;
  }
LABEL_9:
  v13 = v12 == 58;
  v14 = 0;
  if ( !v13 )
    v14 = v121;
  v122 = v14;
  if ( !v11 || !*v11 )
  {
    v25 = *a7;
    if ( a7[13] > *a7 )
      a7[13] = v25;
    if ( v25 < a7[12] )
      a7[12] = v25;
    if ( a7[10] == 1 )
    {
      v31 = a7[13];
      if ( a7[12] == v31 )
      {
        if ( v25 != v31 )
        {
          a7[12] = v25;
          v31 = v25;
        }
      }
      else if ( v25 != v31 )
      {
        sub_403F70((__int64)a2, a7);
        v31 = *a7;
      }
      if ( a1 <= v31 )
      {
LABEL_117:
        v25 = v31;
      }
      else
      {
        v32 = v31;
        while ( 1 )
        {
          v33 = (_BYTE *)a2[v32];
          v34 = v32;
          v31 = v32;
          if ( *v33 == 45 )
          {
            if ( v33[1] )
              break;
          }
          v31 = ++v32;
          *a7 = v34 + 1;
          if ( a1 <= (int)v32 )
            goto LABEL_117;
        }
        v25 = *a7;
      }
      a7[13] = v31;
    }
    if ( a1 == v25 )
    {
      v10 = a7[13];
      v27 = a7[12];
LABEL_51:
      if ( v27 != v10 )
        *a7 = v27;
      return (unsigned int)-1;
    }
    v26 = a2[v25];
    if ( !strcmp((const char *)v26, "--") )
    {
      v27 = a7[12];
      v28 = a7[13];
      v29 = v25 + 1;
      *a7 = v29;
      if ( v27 == v28 )
      {
        a7[12] = v29;
        v27 = v29;
      }
      else if ( v29 != v28 )
      {
        sub_403F70((__int64)a2, a7);
        v27 = a7[12];
      }
      a7[13] = a1;
      *a7 = a1;
      goto LABEL_51;
    }
    if ( *(_BYTE *)v26 == 45 )
    {
      v35 = *(_BYTE *)(v26 + 1);
      if ( v35 )
      {
        v11 = (_BYTE *)(v26 + ((a4 != 0LL) & (unsigned __int8)(v35 == 45)) + 1);
        *((_QWORD *)a7 + 4) = v11;
        goto LABEL_13;
      }
    }
    if ( a7[10] )
    {
      *((_QWORD *)a7 + 2) = v26;
      v19 = 1;
      *a7 = v25 + 1;
      return v19;
    }
    return (unsigned int)-1;
  }
LABEL_13:
  if ( !a4 )
    goto LABEL_18;
  v15 = *a7;
  v16 = a2[v15];
  if ( *(_BYTE *)(v16 + 1) != 45 )
  {
    if ( !a6 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v16 + 2) )
    {
      v131 = *a7;
      v124 = v11;
      v17 = strchr(s, *(char *)(v16 + 1));
      v11 = v124;
      v15 = v131;
      if ( v17 )
        goto LABEL_18;
    }
  }
  v44 = v11;
  if ( !*v11 || *v11 == 61 )
  {
    v133 = 0;
    v45 = 0;
  }
  else
  {
    do
      ++v44;
    while ( *v44 && *v44 != 61 );
    v45 = (_DWORD)v44 - (_DWORD)v11;
    v133 = (_DWORD)v44 - (_DWORD)v11;
  }
  v46 = a4;
  v47 = *a4;
  if ( !*a4 )
  {
LABEL_134:
    if ( a6 )
    {
      v61 = (char *)a2[(int)v15];
      if ( v61[1] != 45 )
      {
        v134 = v15;
        v127 = (char *)*((_QWORD *)a7 + 4);
        v62 = strchr(s, *v127);
        v11 = v127;
        LODWORD(v15) = v134;
        if ( v62 )
        {
LABEL_18:
          v18 = v11 + 1;
          v125 = v11;
          *((_QWORD *)a7 + 4) = v11 + 1;
          v19 = (char)*v11;
          v20 = *v11;
          v21 = strchr(s, v19);
          if ( !v125[1] )
            ++*a7;
          if ( (unsigned __int8)(v20 - 58) <= 1u || !v21 )
          {
            if ( v122 )
            {
              v73 = *a2;
              v74 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
              fprintf(stderr, v74, v73, v19);
            }
            a7[2] = v19;
            return 63;
          }
          v22 = v21[1];
          if ( *v21 != 87 || v22 != 59 )
          {
            if ( v22 == 58 )
            {
              v23 = v125[1];
              if ( v21[2] == 58 )
              {
                if ( v23 )
                {
                  *((_QWORD *)a7 + 2) = v18;
                  ++*a7;
                }
                else
                {
                  *((_QWORD *)a7 + 2) = 0LL;
                }
              }
              else
              {
                v24 = *a7;
                if ( v23 )
                {
                  *((_QWORD *)a7 + 2) = v18;
                  *a7 = v24 + 1;
                }
                else if ( v10 == (_DWORD)v24 )
                {
                  if ( v122 )
                  {
                    v101 = *a2;
                    v102 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                    fprintf(stderr, v102, v101, v19);
                  }
                  a7[2] = v19;
                  v19 = 5 * (*s != 58) + 58;
                }
                else
                {
                  *a7 = v24 + 1;
                  *((_QWORD *)a7 + 2) = a2[v24];
                }
              }
              *((_QWORD *)a7 + 4) = 0LL;
            }
            return v19;
          }
          if ( !a4 )
            goto LABEL_204;
          v36 = *a7;
          if ( v125[1] )
          {
            *((_QWORD *)a7 + 2) = v18;
            *a7 = v36 + 1;
          }
          else
          {
            if ( v10 == (_DWORD)v36 )
            {
              if ( v122 )
              {
                v110 = *a2;
                v111 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                fprintf(stderr, v111, v110, v19);
              }
              a7[2] = v19;
              return 5 * (unsigned int)(*s != 58) + 58;
            }
            *a7 = v36 + 1;
            v18 = (const char *)a2[v36];
            *((_QWORD *)a7 + 2) = v18;
          }
          *((_QWORD *)a7 + 4) = v18;
          v37 = *v18;
          for ( i = v18; *i; v37 = *++i )
          {
            if ( v37 == 61 )
              break;
          }
          if ( !*a4 )
          {
LABEL_204:
            *((_QWORD *)v8 + 4) = 0LL;
            return 87;
          }
          v140 = v37;
          v136 = i;
          v39 = 0;
          v138 = v10;
          v40 = i - v18;
          v41 = a4;
          v42 = *a4;
          v43 = 0LL;
          v132 = 0;
          v129 = 0;
          do
          {
            if ( !strncmp(v42, v18, v40) )
            {
              if ( (unsigned int)v40 == strlen(v42) )
              {
                v94 = v39;
                v95 = v41;
                v88 = v136;
                v87 = v140;
                v89 = v138;
                v8 = a7;
                v132 = v94;
                v43 = v95;
                goto LABEL_174;
              }
              if ( v43 )
              {
                if ( !a6 && *((_DWORD *)v43 + 2) == *((_DWORD *)v41 + 2) && v43[2] == v41[2] )
                {
                  v86 = 1;
                  if ( *((_DWORD *)v43 + 6) == *((_DWORD *)v41 + 6) )
                    v86 = v129;
                  v129 = v86;
                }
                else
                {
                  v129 = 1;
                }
              }
              else
              {
                v132 = v39;
                v43 = v41;
              }
            }
            v41 += 4;
            v42 = *v41;
            ++v39;
          }
          while ( *v41 );
          v87 = v140;
          v88 = v136;
          v89 = v138;
          v8 = a7;
          if ( v129 )
          {
            if ( v122 )
            {
              v108 = *a2;
              v109 = dcgettext(0LL, "%s: option '-W %s' is ambiguous\n", 5);
              fprintf(stderr, v109, v108, v18);
              v18 = (const char *)*((_QWORD *)a7 + 4);
            }
            v19 = 63;
            v100 = strlen(v18);
            ++*a7;
            *((_QWORD *)a7 + 4) = &v18[v100];
            return v19;
          }
          if ( !v43 )
            goto LABEL_204;
LABEL_174:
          v90 = *((_DWORD *)v43 + 2);
          if ( v87 )
          {
            if ( !v90 )
            {
              if ( v122 )
              {
                v112 = *v43;
                v113 = *a2;
                v114 = dcgettext(0LL, "%s: option '-W %s' doesn't allow an argument\n", 5);
                fprintf(stderr, v114, v113, v112);
                v18 = (const char *)*((_QWORD *)v8 + 4);
              }
              v19 = 63;
              *((_QWORD *)v8 + 4) = &v18[strlen(v18)];
              return v19;
            }
            *((_QWORD *)v8 + 2) = v88 + 1;
            goto LABEL_177;
          }
          if ( v90 != 1 )
          {
            *((_QWORD *)v8 + 2) = 0LL;
            goto LABEL_177;
          }
          v103 = *v8;
          if ( (int)v103 < v89 )
          {
            *v8 = v103 + 1;
            *((_QWORD *)v8 + 2) = a2[v103];
LABEL_177:
            *((_QWORD *)v8 + 4) = &v18[strlen(v18)];
            if ( a5 )
              *a5 = v132;
            v57 = (unsigned int *)v43[2];
            v19 = *((_DWORD *)v43 + 6);
            if ( v57 )
              goto LABEL_116;
            return v19;
          }
          if ( v122 )
          {
            v115 = *v43;
            v116 = *a2;
            v117 = dcgettext(0LL, "%s: option '-W %s' requires an argument\n", 5);
            fprintf(stderr, v117, v116, v115);
          }
          *((_QWORD *)v8 + 4) += strlen(*((const char **)v8 + 4));
          if ( *s != 58 )
            return 63;
          return 58;
        }
        if ( !v122 )
        {
LABEL_139:
          v19 = 63;
          *((_QWORD *)a7 + 4) = "";
          *a7 = v15 + 1;
          a7[2] = 0;
          return v19;
        }
LABEL_138:
        v63 = *v61;
        sa = v11;
        v64 = *a2;
        v65 = dcgettext(0LL, "%s: unrecognized option '%c%s'\n", 5);
        fprintf(stderr, v65, v64, v63, sa);
        LODWORD(v15) = *a7;
        goto LABEL_139;
      }
      if ( !v122 )
        goto LABEL_139;
      v91 = (_BYTE *)*((_QWORD *)a7 + 4);
    }
    else
    {
      if ( !v122 )
        goto LABEL_139;
      v91 = (_BYTE *)*((_QWORD *)a7 + 4);
      v61 = (char *)a2[v15];
      v11 = v91;
      if ( v61[1] != 45 )
        goto LABEL_138;
    }
    v92 = *a2;
    v93 = dcgettext(0LL, "%s: unrecognized option '--%s'\n", 5);
    fprintf(stderr, v93, v92, v91);
    LODWORD(v15) = *a7;
    goto LABEL_139;
  }
  v139 = v44;
  v48 = 0LL;
  v49 = v11;
  v50 = v45;
  v51 = 0;
  v137 = -1;
  v141 = 0;
  v126 = 0LL;
  while ( 1 )
  {
    if ( strncmp(v47, v49, v50) )
      goto LABEL_101;
    if ( v133 == (unsigned int)strlen(v47) )
    {
      v58 = v51;
      v53 = v139;
      v10 = a1;
      if ( v141 || v48 )
      {
        v59 = (_QWORD *)v48;
        if ( v48 )
        {
          do
          {
            v60 = (_QWORD *)v59[1];
            free(v59);
            v59 = v60;
          }
          while ( v60 );
        }
      }
      LODWORD(v15) = *a7;
      v137 = v58;
      v126 = v46;
      goto LABEL_110;
    }
    if ( !v126 )
      break;
    if ( !v141 )
    {
      if ( !a6
        && *((_DWORD *)v126 + 2) == *((_DWORD *)v46 + 2)
        && v126[2] == v46[2]
        && *((_DWORD *)v126 + 6) == *((_DWORD *)v46 + 6) )
      {
        v141 = 0;
      }
      else
      {
        v52 = malloc(0x10uLL);
        if ( v52 )
        {
          *v52 = v46;
          v52[1] = v48;
          v48 = (__int64)v52;
        }
        else
        {
          if ( v48 )
          {
            v72 = (void *)v48;
            do
            {
              v48 = *(_QWORD *)(v48 + 8);
              free(v72);
              v72 = (void *)v48;
            }
            while ( v48 );
          }
          v141 = 1;
        }
      }
    }
LABEL_101:
    v46 += 4;
    v47 = *v46;
    ++v51;
    if ( !*v46 )
      goto LABEL_107;
LABEL_102:
    v49 = (const char *)*((_QWORD *)a7 + 4);
  }
  v126 = v46;
  v46 += 4;
  v47 = *v46;
  v137 = v51++;
  if ( *v46 )
    goto LABEL_102;
LABEL_107:
  v53 = v139;
  v10 = a1;
  v15 = *a7;
  if ( (_BYTE)v141 || v48 )
  {
    if ( v122 )
    {
      if ( v48 )
      {
        v144 = v48;
        v75 = a2[v15];
        v76 = *a2;
        v77 = dcgettext(0LL, "%s: option '%s' is ambiguous; possibilities:", 5);
        fprintf(stderr, v77, v76, v75);
        v78 = &v143;
        for ( j = v126; ; j = *(const char ***)v78 )
        {
          fprintf(stderr, " '--%s'", *j);
          v78 = (char *)*((_QWORD *)v78 + 1);
          if ( !v78 )
            break;
        }
        fputc(10, stderr);
        goto LABEL_161;
      }
      if ( (_BYTE)v141 )
      {
        v96 = a2[v15];
        v97 = *a2;
        v98 = dcgettext(0LL, "%s: option '%s' is ambiguous\n", 5);
        fprintf(stderr, v98, v97, v96);
LABEL_161:
        v80 = (const char *)*((_QWORD *)a7 + 4);
        v81 = strlen(v80);
        ++*a7;
        a7[2] = 0;
        *((_QWORD *)a7 + 4) = &v80[v81];
        return 63;
      }
    }
    v82 = (const char *)*((_QWORD *)a7 + 4);
    sb = *a7;
    v83 = strlen(v82);
    a7[2] = 0;
    *((_QWORD *)a7 + 4) = &v82[v83];
    *a7 = sb + 1;
    if ( v48 )
    {
      v84 = (_QWORD *)v48;
      do
      {
        v85 = (_QWORD *)v84[1];
        free(v84);
        v84 = v85;
      }
      while ( v85 );
    }
    return 63;
  }
  if ( !v126 )
    goto LABEL_134;
LABEL_110:
  v54 = v15 + 1;
  *a7 = v15 + 1;
  v55 = *((_DWORD *)v126 + 2);
  if ( !*v53 )
  {
    if ( v55 != 1 )
      goto LABEL_113;
    if ( v54 < v10 )
    {
      *a7 = v15 + 2;
      *((_QWORD *)a7 + 2) = a2[v54];
      goto LABEL_113;
    }
    if ( v122 )
    {
      v105 = *v126;
      v106 = *a2;
      v107 = dcgettext(0LL, "%s: option '--%s' requires an argument\n", 5);
      fprintf(stderr, v107, v106, v105);
    }
    v99 = (const char *)*((_QWORD *)a7 + 4);
    *((_QWORD *)a7 + 4) = &v99[strlen(v99)];
    a7[2] = *((_DWORD *)v126 + 6);
    if ( *s == 58 )
      return 58;
    return 63;
  }
  if ( v55 )
  {
    *((_QWORD *)a7 + 2) = v53 + 1;
LABEL_113:
    v56 = (const char *)*((_QWORD *)a7 + 4);
    *((_QWORD *)a7 + 4) = &v56[strlen(v56)];
    if ( a5 )
      *a5 = v137;
    v57 = (unsigned int *)v126[2];
    v19 = *((_DWORD *)v126 + 6);
    if ( v57 )
    {
LABEL_116:
      *v57 = v19;
      return 0;
    }
  }
  else
  {
    if ( v122 )
    {
      v66 = (char *)a2[v54 - 1];
      v67 = *v126;
      v68 = *a2;
      if ( v66[1] == 45 )
      {
        v104 = dcgettext(0LL, "%s: option '--%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v104, v68, v67);
      }
      else
      {
        v69 = *v66;
        v70 = dcgettext(0LL, "%s: option '%c%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v70, v68, v69, v67);
      }
    }
    v71 = (const char *)*((_QWORD *)a7 + 4);
    v19 = 63;
    *((_QWORD *)a7 + 4) = &v71[strlen(v71)];
    a7[2] = *((_DWORD *)v126 + 6);
  }
  return v19;
}

__int64 __fastcall sub_405090(int a1, __int64 *a2, char *a3, const char **a4, int *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_6083C0 = dword_60821C;
  dword_6083C4 = dword_608218;
  result = sub_404050(a1, a2, a3, a4, a5, a6, &dword_6083C0, a7);
  dword_60821C = dword_6083C0;
  nptr = (char *)qword_6083D0;
  dword_608214 = dword_6083C8;
  return result;
}

__int64 __fastcall sub_4050F0(int a1, __int64 *a2, char *a3)
{
  return sub_405090(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_405110(int a1, __int64 *a2, char *a3, const char **a4, int *a5)
{
  return sub_405090(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_405130(int a1, __int64 *a2, char *a3, const char **a4, int *a5, int *a6)
{
  return sub_404050(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_405150(int a1, __int64 *a2, char *a3, const char **a4, int *a5)
{
  return sub_405090(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_405170(int a1, __int64 *a2, char *a3, const char **a4, int *a5, int *a6)
{
  return sub_404050(a1, a2, a3, a4, a5, 1, a6, 0);
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
    a2 = "";
    a1 = 0LL;
  }
  return mbrtowc(a1, a2, a3, a4);
}

int __fastcall sub_4051C0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebp
  int result; // eax

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
    return -1;
  }
  if ( !result )
    return result;
  if ( v1 )
    return -1;
  return -(*__errno_location() != 9);
}

const char *sub_405230()
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
                fclose(v60);
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
            fclose(v39);
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

int __fastcall sub_405810(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_6081A8 )
    v1 = (void *)qword_6081A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_405828(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_607E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
