__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  unsigned int v3; // er13
  char *v4; // rdi
  unsigned __int64 v5; // r14
  int v6; // er15
  int v7; // er12
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
  int v20; // er13
  int v21; // eax
  char *v22; // rsi
  char *v23; // rax
  char *v24; // rdi
  int v25; // er14
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
  char *lineptr; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+20h] [rbp-48h]
  char *endptr; // [rsp+28h] [rbp-40h]

  v3 = a1;
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
    v10 = sub_405110(v3, a2, "hv0S:", &off_405A60, 0LL);
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
        if ( v5 + 0x7FFFFFFFFFFFFFFFLL > 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( *v16 )
          {
            v32 = dcgettext(0LL, "Security level %s is outside the convertible range.", 5);
            error(1, 0, v32, v34);
            goto LABEL_25;
          }
          v17 = endptr;
          if ( *endptr )
          {
LABEL_24:
            v36 = v17;
            v19 = dcgettext(0LL, "Security level %s has unexpected suffix %s.", 5);
            error(1, 0, v19, v34, v36);
            goto LABEL_25;
          }
LABEL_19:
          v18 = dcgettext(0LL, "slocate security level %ld is unsupported.", 5);
          error(1, 0, v18, v5);
          goto LABEL_20;
        }
        v17 = endptr;
        if ( *endptr )
          goto LABEL_24;
        if ( v5 != 1 )
          goto LABEL_19;
      }
      else
      {
        v17 = endptr;
        if ( endptr == nptr )
        {
          v33 = dcgettext(0LL, "You need to specify a security level as a decimal integer.", 5);
          error(1, 0, v33);
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
LABEL_14:
        sub_401B10(stderr);
        return 1LL;
      }
      v7 = 0;
      if ( v10 != 48 )
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
        goto LABEL_48;
      if ( (unsigned int)(v26 + 127) <= 0xFE )
      {
        if ( _IO_putc(v26, stdout) != -1 )
          goto LABEL_47;
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
LABEL_47:
          v22 = lineptr;
          goto LABEL_48;
        }
      }
      sub_401AE0();
      v22 = lineptr;
LABEL_48:
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

__int64 *sub_401A2B()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
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

char *sub_401B70()
{
  char *v0; // r12

  sub_403ED0(stderr);
  v0 = dcgettext(0LL, "Kevin Dalley", 5);
  dcgettext(0LL, "James Youngman", 5);
  dcgettext(0LL, "Eric B. Decker", 5);
  sub_403B40((char)stdout);
  return v0;
}

__int64 sub_401C10()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

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
        v5 = sub_403500();
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

char *__fastcall sub_401D50(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

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
        v2 = (char *)&unk_405B6E;
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
      v2 = (char *)&unk_405B72;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_401E50(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  int v11; // ebp
  char v12; // zf
  size_t v13; // rax
  int v14; // edx
  int v15; // er11
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // r11
  int v20; // er10
  unsigned __int64 v21; // r13
  int v22; // er8
  char *v23; // r9
  size_t v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r12
  bool v27; // al
  char *v28; // rax
  char i; // al
  size_t v30; // rax
  bool v31; // al
  char v32; // cl
  int v33; // eax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  const unsigned __int16 **v36; // rax
  unsigned __int64 v37; // rcx
  int v38; // edx
  unsigned __int64 result; // rax
  __int64 v40; // rsi
  char v41; // dl
  char *v42; // rax
  size_t v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // r15
  char *v48; // rdx
  unsigned __int64 v49; // rcx
  int v50; // eax
  char v51; // si
  unsigned __int64 v52; // rsi
  char *v53; // rdi
  unsigned __int64 v54; // rax
  int v55; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 v56; // [rsp+Ch] [rbp-ACh]
  unsigned __int64 v57; // [rsp+10h] [rbp-A8h]
  char v58; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+10h] [rbp-A8h]
  char *s; // [rsp+18h] [rbp-A0h]
  size_t n; // [rsp+20h] [rbp-98h]
  char *v62; // [rsp+28h] [rbp-90h]
  int v63; // [rsp+28h] [rbp-90h]
  unsigned __int8 v64; // [rsp+28h] [rbp-90h]
  char *v65; // [rsp+28h] [rbp-90h]
  unsigned __int64 v66; // [rsp+28h] [rbp-90h]
  unsigned __int8 v67; // [rsp+30h] [rbp-88h]
  unsigned __int8 v68; // [rsp+30h] [rbp-88h]
  unsigned __int64 v69; // [rsp+30h] [rbp-88h]
  char v70; // [rsp+30h] [rbp-88h]
  int v71; // [rsp+30h] [rbp-88h]
  int v72; // [rsp+38h] [rbp-80h]
  unsigned __int64 v73; // [rsp+38h] [rbp-80h]
  int v74; // [rsp+38h] [rbp-80h]
  int v75; // [rsp+38h] [rbp-80h]
  __int64 v76; // [rsp+38h] [rbp-80h]
  int v77; // [rsp+40h] [rbp-78h]
  unsigned __int64 v78; // [rsp+40h] [rbp-78h]
  char *s2; // [rsp+48h] [rbp-70h]
  size_t v80; // [rsp+50h] [rbp-68h]
  char v81; // [rsp+58h] [rbp-60h]
  bool v82; // [rsp+5Dh] [rbp-5Bh]
  unsigned __int8 v83; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int64 v84; // [rsp+60h] [rbp-58h]
  char *v85; // [rsp+68h] [rbp-50h]
  wint_t wc; // [rsp+74h] [rbp-44h]
  mbstate_t ps; // [rsp+78h] [rbp-40h]

  v9 = (__int64)a1;
  v10 = a2;
  v11 = a6 & 2;
  s = a3;
  v57 = a4;
  v55 = a5;
  v81 = a6;
  v13 = __ctype_get_mb_cur_max();
  v15 = v55;
  v80 = v13;
  v16 = v57;
  switch ( v55 )
  {
    case 0:
      v82 = 0;
      v17 = 0LL;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v56 = 0;
        goto LABEL_38;
      }
      v82 = 1;
      v17 = 0LL;
      v56 = 0;
      n = 1LL;
      s2 = "'";
      break;
    case 3:
      v82 = 1;
      v17 = 0LL;
      v15 = 2;
      v56 = 1;
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
        v56 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v56 = 1;
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
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v82 = 0;
        v17 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v82 = 1;
      v17 = 0LL;
      v15 = 5;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v82 = 0;
      v17 = 0LL;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_401D50("`", v55);
        v28 = sub_401D50("'", v55);
        v16 = v57;
        v15 = v55;
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
      v63 = v15;
      v59 = v16;
      v82 = v11 != 0;
      v30 = strlen(a9);
      v56 = 1;
      v16 = v59;
      n = v30;
      v15 = v63;
      s2 = a9;
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
LABEL_4:
  while ( 2 )
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
          v41 = *s2;
          if ( *s2 )
          {
            v42 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                *(_BYTE *)(v9 + v17) = v41;
              v41 = v42[++v17];
            }
            while ( v41 );
          }
        }
      }
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 0;
      return v17;
    }
    v23 = &s[v21];
    v58 = v56 & (v20 != 2);
    if ( v56 & (v20 != 2) )
    {
      if ( !n )
        goto LABEL_271;
      if ( v19 == -1LL && n > 1 )
      {
        v72 = v20;
        v67 = v22;
        v24 = strlen(s);
        v20 = v72;
        v22 = v67;
        v23 = &s[v21];
        v19 = v24;
      }
      if ( v21 + n > v19 )
        goto LABEL_271;
      v77 = v20;
      v73 = v19;
      v68 = v22;
      v62 = v23;
      v25 = memcmp(v23, s2, n);
      v23 = v62;
      v22 = v68;
      v19 = v73;
      v20 = v77;
      if ( v25 )
      {
LABEL_271:
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
          case 10:
LABEL_90:
            LOBYTE(v26) = 110;
            v27 = 0;
            goto LABEL_91;
          case 11:
LABEL_101:
            LOBYTE(v26) = 118;
            v27 = 0;
            goto LABEL_91;
          case 12:
LABEL_100:
            LOBYTE(v26) = 102;
            v27 = 0;
LABEL_91:
            if ( v82 )
              return sub_401E50(v9, v10, s);
            goto LABEL_21;
          case 13:
            v58 = 0;
LABEL_96:
            LOBYTE(v26) = 13;
            v32 = 114;
            LOBYTE(v14) = v20 == 2;
            goto LABEL_88;
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
            v58 = 0;
LABEL_85:
            v14 = 0;
            goto LABEL_65;
          case 35:
          case 126:
            v58 = 0;
LABEL_98:
            if ( v21 )
              goto LABEL_17;
            v14 = 0;
            goto LABEL_65;
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
            v58 = 0;
            goto LABEL_17;
          case 39:
            v58 = 0;
            goto LABEL_73;
          case 63:
            v58 = 0;
            goto LABEL_69;
          case 92:
            v58 = 0;
            goto LABEL_87;
          case 123:
          case 125:
            v58 = 0;
            goto LABEL_60;
          default:
            v58 = 0;
            goto LABEL_124;
        }
      }
      if ( !v82 )
      {
        LOBYTE(v26) = *v62;
        switch ( *v62 )
        {
          case 0:
            goto LABEL_105;
          case 7:
            goto LABEL_94;
          case 8:
            goto LABEL_93;
          case 9:
            goto LABEL_102;
          case 10:
            goto LABEL_90;
          case 11:
            goto LABEL_101;
          case 12:
            goto LABEL_100;
          case 13:
            goto LABEL_96;
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
          case 35:
          case 126:
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
            goto LABEL_17;
          case 39:
            goto LABEL_73;
          case 63:
            goto LABEL_69;
          case 92:
            goto LABEL_87;
          case 123:
          case 125:
            goto LABEL_60;
          default:
            goto LABEL_124;
        }
      }
      return sub_401E50(v9, v10, s);
    }
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        if ( !v56 )
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
            LOBYTE(v26) = 0;
            goto LABEL_144;
          }
          v11 = 0;
          if ( a7 )
          {
            v58 = 0;
            LOBYTE(v26) = 0;
            goto LABEL_18;
          }
          LOBYTE(v26) = 0;
          goto LABEL_122;
        }
LABEL_103:
        if ( v82 )
          return sub_401E50(v9, v10, s);
        v58 = 0;
LABEL_105:
        LOBYTE(v14) = v20 == 2;
        v33 = v22 ^ 1;
        LOBYTE(v33) = (v20 == 2) & (v22 ^ 1);
        if ( (_BYTE)v33 )
        {
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 36;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v34 = v17 + 3;
          if ( v10 <= v17 + 3 )
          {
            v17 += 4LL;
            ++v21;
            v22 = v33;
            LOBYTE(v26) = 48;
            goto LABEL_82;
          }
          v22 = v33;
        }
        else
        {
          v34 = v17;
          if ( v17 >= v10 )
            goto LABEL_115;
        }
        *(_BYTE *)(v9 + v34) = 92;
LABEL_115:
        v17 = v34 + 1;
        v35 = v21 + 1;
        if ( v20 == 2 )
        {
          ++v21;
          LOBYTE(v26) = 48;
          goto LABEL_82;
        }
        LOBYTE(v26) = 48;
        if ( v35 < v19 && (unsigned __int8)(s[v35] - 48) <= 9u )
        {
          if ( v10 > v17 )
            *(_BYTE *)(v9 + v17) = 48;
          if ( v10 > v34 + 2 )
            *(_BYTE *)(v9 + v34 + 2) = 48;
          v17 = v34 + 3;
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
      case 10:
        LOBYTE(v26) = 10;
        v32 = 110;
        goto LABEL_130;
      case 11:
        LOBYTE(v26) = 11;
        v32 = 118;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 12:
        LOBYTE(v26) = 12;
        v32 = 102;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 13:
        LOBYTE(v26) = 13;
        v32 = 114;
LABEL_130:
        LOBYTE(v14) = v20 == 2;
        v58 = v20 == 2 && v82;
        if ( v58 )
          return sub_401E50(v9, v10, s);
        goto LABEL_88;
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
        goto LABEL_64;
      case 35:
      case 126:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_63;
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
      case 39:
LABEL_73:
        v14 = 0;
        LOBYTE(v26) = 39;
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
        LOBYTE(v26) = 39;
LABEL_82:
        if ( !v58 )
          goto LABEL_33;
        goto LABEL_67;
      case 63:
LABEL_69:
        if ( v20 == 2 )
        {
          if ( v82 )
            return sub_401E50(v9, v10, s);
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
        if ( !(v81 & 4) )
        {
          v14 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_65;
        }
        v14 = 0;
        LOBYTE(v26) = 63;
        if ( v21 + 2 >= v19 || s[v21 + 1] != 63 )
          goto LABEL_65;
        v26 = (unsigned __int8)s[v21 + 2];
        if ( (unsigned __int8)v26 > 0x3Eu || (v40 = 8070630310989004800LL, !_bittest64(&v40, v26)) )
        {
          LOBYTE(v26) = 63;
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
LABEL_118:
        if ( !v56 || (_BYTE)v14 )
          goto LABEL_66;
        if ( a7 )
          goto LABEL_18;
        goto LABEL_121;
      case 92:
        if ( v20 == 2 )
        {
          if ( v82 )
            return sub_401E50(v9, v10, s);
          ++v21;
          v11 = v22;
          LOBYTE(v26) = 92;
          goto LABEL_144;
        }
LABEL_87:
        v11 = v82 & v56;
        LOBYTE(v26) = 92;
        v32 = 92;
        v14 = v82 & v56;
        LOBYTE(v14) = (n != 0) & v14;
        if ( (_BYTE)v14 )
        {
          ++v21;
          v11 = v22;
          goto LABEL_144;
        }
LABEL_88:
        if ( !v56 )
          goto LABEL_65;
        v27 = v14;
        LOBYTE(v26) = v32;
        goto LABEL_20;
      case 123:
      case 125:
LABEL_60:
        v31 = v19 != 1;
        if ( v19 == -1LL )
          v31 = s[1] != 0;
        LOBYTE(v14) = v20 == 2;
        if ( v31 )
          goto LABEL_65;
LABEL_63:
        if ( v21 )
          goto LABEL_65;
LABEL_64:
        if ( !((unsigned __int8)v14 & v82) )
          goto LABEL_65;
        return sub_401E50(v9, v10, s);
      default:
LABEL_124:
        if ( v80 == 1 )
        {
          v74 = v20;
          v69 = v19;
          v64 = v22;
          v36 = __ctype_b_loc();
          v22 = v64;
          v19 = v69;
          v20 = v74;
          v37 = 1LL;
          v38 = (*v36)[(unsigned __int8)v26];
          LOWORD(v38) = (unsigned __int16)v38 >> 14;
          v14 = v38 ^ 1;
          LOBYTE(v14) = v56 & v14;
          goto LABEL_126;
        }
        ps = 0LL;
        if ( v19 == -1LL )
        {
          v75 = v20;
          v70 = v22;
          v65 = v23;
          v43 = strlen(s);
          v20 = v75;
          LOBYTE(v22) = v70;
          v23 = v65;
          v19 = v43;
        }
        v84 = v17;
        v83 = v22;
        v44 = 0LL;
        v85 = v23;
        v76 = v9;
        v78 = v10;
        v66 = v19;
        v71 = v20;
        break;
    }
    break;
  }
  while ( 1 )
  {
    v45 = v21 + v44;
    v46 = sub_405190(&wc, &s[v21 + v44], v66 - (v21 + v44), &ps);
    v47 = v46;
    switch ( v46 )
    {
      case 0LL:
        v11 ^= 1u;
        v37 = v44;
        v9 = v76;
        v22 = v83;
        v17 = v84;
        v10 = v78;
        v14 = (unsigned __int8)(v11 & v56);
        v19 = v66;
        v20 = v71;
        goto LABEL_252;
      case -1LL:
        v37 = v44;
        v22 = v83;
        v17 = v84;
        v9 = v76;
        v10 = v78;
        v19 = v66;
        v20 = v71;
        v14 = v56;
        goto LABEL_252;
      case -2LL:
        v19 = v66;
        v52 = v21 + v44;
        v53 = &s[v21 + v44];
        v54 = v44;
        v37 = v44;
        v22 = v83;
        v17 = v84;
        v9 = v76;
        v10 = v78;
        v20 = v71;
        if ( v52 < v66 && *v53 )
        {
          do
            ++v54;
          while ( v66 > v21 + v54 && v85[v54] );
          v37 = v54;
        }
        v14 = v56;
LABEL_252:
        if ( v37 > 1 )
          goto LABEL_206;
LABEL_126:
        if ( (_BYTE)v14 )
        {
          v14 = v56;
LABEL_206:
          v49 = v21 + v37;
          v50 = 0;
          v51 = v58;
          while ( 1 )
          {
            if ( (_BYTE)v14 )
            {
              if ( v82 )
                return sub_401E50(v9, v10, s);
              if ( (v20 == 2) & ((unsigned __int8)v22 ^ 1) )
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
                *(_BYTE *)(v9 + v17 + 1) = ((unsigned __int8)v26 >> 6) + 48;
              if ( v10 > v17 + 2 )
                *(_BYTE *)(v9 + v17 + 2) = (((unsigned __int8)v26 >> 3) & 7) + 48;
              ++v21;
              v17 += 3LL;
              LOBYTE(v26) = (v26 & 7) + 48;
              if ( v49 <= v21 )
                goto LABEL_33;
              v50 = v14;
            }
            else
            {
              v11 = v22 & (v50 ^ 1);
              if ( v51 )
              {
                if ( v17 < v10 )
                  *(_BYTE *)(v9 + v17) = 92;
                ++v17;
              }
              if ( ++v21 >= v49 )
                goto LABEL_144;
              if ( (_BYTE)v11 )
              {
                if ( v17 < v10 )
                  *(_BYTE *)(v9 + v17) = 39;
                if ( v10 > v17 + 1 )
                  *(_BYTE *)(v9 + v17 + 1) = 39;
                v17 += 2LL;
                v51 = 0;
                v22 = 0;
              }
              else
              {
                v51 = 0;
              }
            }
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = v26;
            LOBYTE(v26) = s[v21];
            ++v17;
          }
        }
LABEL_127:
        LOBYTE(v14) = v20 == 2;
LABEL_65:
        v11 = (v14 | v56 ^ 1) ^ 1;
        LOBYTE(v11) = v82 | (v14 | v56 ^ 1) ^ 1;
        if ( v82 | (unsigned __int8)(v14 | v56 ^ 1) ^ 1 )
        {
LABEL_17:
          v11 = 0;
          if ( a7 )
          {
LABEL_18:
            if ( (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v26 >> 5)) >> v26) & 1 )
            {
              v27 = v20 == 2;
LABEL_20:
              if ( v82 )
                return sub_401E50(v9, v10, s);
LABEL_21:
              ++v21;
              goto LABEL_22;
            }
          }
LABEL_121:
          v27 = v20 == 2;
          if ( v58 )
            goto LABEL_20;
LABEL_122:
          ++v21;
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
          goto LABEL_33;
        }
LABEL_66:
        ++v21;
        if ( !v58 )
        {
          v11 = v22 & (v11 ^ 1);
          goto LABEL_144;
        }
LABEL_67:
        v27 = v20 == 2;
LABEL_22:
        v14 = v22 ^ 1;
        if ( v27 & ((unsigned __int8)v22 ^ 1) )
        {
          if ( v10 > v17 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 36;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v17 += 3LL;
          LOBYTE(v14) = v27 & (v22 ^ 1);
          v22 = v14;
        }
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = 92;
        ++v17;
LABEL_33:
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = v26;
        ++v17;
        goto LABEL_4;
    }
    if ( v82 && v71 == 2 && v46 != 1 )
      break;
LABEL_187:
    if ( !iswprint(wc) )
      v11 = 0;
    v44 += v47;
    if ( mbsinit(&ps) )
    {
      v37 = v44;
      v22 = v83;
      v17 = v84;
      v14 = v11 ^ 1;
      v9 = v76;
      v10 = v78;
      v19 = v66;
      v20 = v71;
      LOBYTE(v14) = v56 & (v11 ^ 1);
      goto LABEL_252;
    }
  }
  v48 = &s[v45 + 1];
  while ( (unsigned __int8)(*v48 - 91) > 0x21u || !((1LL << (*v48 - 91)) & 0x20000002BLL) )
  {
    if ( &s[v46 + v45] == ++v48 )
      goto LABEL_187;
  }
  v9 = v76;
  v10 = v78;
  return sub_401E50(v9, v10, s);
}

unsigned __int64 __fastcall sub_401E50(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  int v11; // ebp
  char v12; // zf
  size_t v13; // rax
  int v14; // edx
  int v15; // er11
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // r11
  int v20; // er10
  unsigned __int64 v21; // r13
  int v22; // er8
  char *v23; // r9
  size_t v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r12
  bool v27; // al
  char *v28; // rax
  char i; // al
  size_t v30; // rax
  bool v31; // al
  char v32; // cl
  int v33; // eax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  const unsigned __int16 **v36; // rax
  unsigned __int64 v37; // rcx
  int v38; // edx
  unsigned __int64 result; // rax
  __int64 v40; // rsi
  char v41; // dl
  char *v42; // rax
  size_t v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // r15
  char *v48; // rdx
  unsigned __int64 v49; // rcx
  int v50; // eax
  char v51; // si
  unsigned __int64 v52; // rsi
  char *v53; // rdi
  unsigned __int64 v54; // rax
  int v55; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 v56; // [rsp+Ch] [rbp-ACh]
  unsigned __int64 v57; // [rsp+10h] [rbp-A8h]
  char v58; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+10h] [rbp-A8h]
  char *s; // [rsp+18h] [rbp-A0h]
  size_t n; // [rsp+20h] [rbp-98h]
  char *v62; // [rsp+28h] [rbp-90h]
  int v63; // [rsp+28h] [rbp-90h]
  unsigned __int8 v64; // [rsp+28h] [rbp-90h]
  char *v65; // [rsp+28h] [rbp-90h]
  unsigned __int64 v66; // [rsp+28h] [rbp-90h]
  unsigned __int8 v67; // [rsp+30h] [rbp-88h]
  unsigned __int8 v68; // [rsp+30h] [rbp-88h]
  unsigned __int64 v69; // [rsp+30h] [rbp-88h]
  char v70; // [rsp+30h] [rbp-88h]
  int v71; // [rsp+30h] [rbp-88h]
  int v72; // [rsp+38h] [rbp-80h]
  unsigned __int64 v73; // [rsp+38h] [rbp-80h]
  int v74; // [rsp+38h] [rbp-80h]
  int v75; // [rsp+38h] [rbp-80h]
  __int64 v76; // [rsp+38h] [rbp-80h]
  int v77; // [rsp+40h] [rbp-78h]
  unsigned __int64 v78; // [rsp+40h] [rbp-78h]
  char *s2; // [rsp+48h] [rbp-70h]
  size_t v80; // [rsp+50h] [rbp-68h]
  char v81; // [rsp+58h] [rbp-60h]
  bool v82; // [rsp+5Dh] [rbp-5Bh]
  unsigned __int8 v83; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int64 v84; // [rsp+60h] [rbp-58h]
  char *v85; // [rsp+68h] [rbp-50h]
  wint_t wc; // [rsp+74h] [rbp-44h]
  mbstate_t ps; // [rsp+78h] [rbp-40h]

  v9 = (__int64)a1;
  v10 = a2;
  v11 = a6 & 2;
  s = a3;
  v57 = a4;
  v55 = a5;
  v81 = a6;
  v13 = __ctype_get_mb_cur_max();
  v15 = v55;
  v80 = v13;
  v16 = v57;
  switch ( v55 )
  {
    case 0:
      v82 = 0;
      v17 = 0LL;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v56 = 0;
        goto LABEL_38;
      }
      v82 = 1;
      v17 = 0LL;
      v56 = 0;
      n = 1LL;
      s2 = "'";
      break;
    case 3:
      v82 = 1;
      v17 = 0LL;
      v15 = 2;
      v56 = 1;
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
        v56 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v56 = 1;
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
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v82 = 0;
        v17 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v82 = 1;
      v17 = 0LL;
      v15 = 5;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v82 = 0;
      v17 = 0LL;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_401D50("`", v55);
        v28 = sub_401D50("'", v55);
        v16 = v57;
        v15 = v55;
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
      v63 = v15;
      v59 = v16;
      v82 = v11 != 0;
      v30 = strlen(a9);
      v56 = 1;
      v16 = v59;
      n = v30;
      v15 = v63;
      s2 = a9;
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
LABEL_4:
  while ( 2 )
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
          v41 = *s2;
          if ( *s2 )
          {
            v42 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                *(_BYTE *)(v9 + v17) = v41;
              v41 = v42[++v17];
            }
            while ( v41 );
          }
        }
      }
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 0;
      return v17;
    }
    v23 = &s[v21];
    v58 = v56 & (v20 != 2);
    if ( v56 & (v20 != 2) )
    {
      if ( !n )
        goto LABEL_271;
      if ( v19 == -1LL && n > 1 )
      {
        v72 = v20;
        v67 = v22;
        v24 = strlen(s);
        v20 = v72;
        v22 = v67;
        v23 = &s[v21];
        v19 = v24;
      }
      if ( v21 + n > v19 )
        goto LABEL_271;
      v77 = v20;
      v73 = v19;
      v68 = v22;
      v62 = v23;
      v25 = memcmp(v23, s2, n);
      v23 = v62;
      v22 = v68;
      v19 = v73;
      v20 = v77;
      if ( v25 )
      {
LABEL_271:
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
          case 10:
LABEL_90:
            LOBYTE(v26) = 110;
            v27 = 0;
            goto LABEL_91;
          case 11:
LABEL_101:
            LOBYTE(v26) = 118;
            v27 = 0;
            goto LABEL_91;
          case 12:
LABEL_100:
            LOBYTE(v26) = 102;
            v27 = 0;
LABEL_91:
            if ( v82 )
              return sub_401E50(v9, v10, s);
            goto LABEL_21;
          case 13:
            v58 = 0;
LABEL_96:
            LOBYTE(v26) = 13;
            v32 = 114;
            LOBYTE(v14) = v20 == 2;
            goto LABEL_88;
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
            v58 = 0;
LABEL_85:
            v14 = 0;
            goto LABEL_65;
          case 35:
          case 126:
            v58 = 0;
LABEL_98:
            if ( v21 )
              goto LABEL_17;
            v14 = 0;
            goto LABEL_65;
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
            v58 = 0;
            goto LABEL_17;
          case 39:
            v58 = 0;
            goto LABEL_73;
          case 63:
            v58 = 0;
            goto LABEL_69;
          case 92:
            v58 = 0;
            goto LABEL_87;
          case 123:
          case 125:
            v58 = 0;
            goto LABEL_60;
          default:
            v58 = 0;
            goto LABEL_124;
        }
      }
      if ( !v82 )
      {
        LOBYTE(v26) = *v62;
        switch ( *v62 )
        {
          case 0:
            goto LABEL_105;
          case 7:
            goto LABEL_94;
          case 8:
            goto LABEL_93;
          case 9:
            goto LABEL_102;
          case 10:
            goto LABEL_90;
          case 11:
            goto LABEL_101;
          case 12:
            goto LABEL_100;
          case 13:
            goto LABEL_96;
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
          case 35:
          case 126:
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
            goto LABEL_17;
          case 39:
            goto LABEL_73;
          case 63:
            goto LABEL_69;
          case 92:
            goto LABEL_87;
          case 123:
          case 125:
            goto LABEL_60;
          default:
            goto LABEL_124;
        }
      }
      return sub_401E50(v9, v10, s);
    }
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        if ( !v56 )
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
            LOBYTE(v26) = 0;
            goto LABEL_144;
          }
          v11 = 0;
          if ( a7 )
          {
            v58 = 0;
            LOBYTE(v26) = 0;
            goto LABEL_18;
          }
          LOBYTE(v26) = 0;
          goto LABEL_122;
        }
LABEL_103:
        if ( v82 )
          return sub_401E50(v9, v10, s);
        v58 = 0;
LABEL_105:
        LOBYTE(v14) = v20 == 2;
        v33 = v22 ^ 1;
        LOBYTE(v33) = (v20 == 2) & (v22 ^ 1);
        if ( (_BYTE)v33 )
        {
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 36;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v34 = v17 + 3;
          if ( v10 <= v17 + 3 )
          {
            v17 += 4LL;
            ++v21;
            v22 = v33;
            LOBYTE(v26) = 48;
            goto LABEL_82;
          }
          v22 = v33;
        }
        else
        {
          v34 = v17;
          if ( v17 >= v10 )
            goto LABEL_115;
        }
        *(_BYTE *)(v9 + v34) = 92;
LABEL_115:
        v17 = v34 + 1;
        v35 = v21 + 1;
        if ( v20 == 2 )
        {
          ++v21;
          LOBYTE(v26) = 48;
          goto LABEL_82;
        }
        LOBYTE(v26) = 48;
        if ( v35 < v19 && (unsigned __int8)(s[v35] - 48) <= 9u )
        {
          if ( v10 > v17 )
            *(_BYTE *)(v9 + v17) = 48;
          if ( v10 > v34 + 2 )
            *(_BYTE *)(v9 + v34 + 2) = 48;
          v17 = v34 + 3;
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
      case 10:
        LOBYTE(v26) = 10;
        v32 = 110;
        goto LABEL_130;
      case 11:
        LOBYTE(v26) = 11;
        v32 = 118;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 12:
        LOBYTE(v26) = 12;
        v32 = 102;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 13:
        LOBYTE(v26) = 13;
        v32 = 114;
LABEL_130:
        LOBYTE(v14) = v20 == 2;
        v58 = v20 == 2 && v82;
        if ( v58 )
          return sub_401E50(v9, v10, s);
        goto LABEL_88;
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
        goto LABEL_64;
      case 35:
      case 126:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_63;
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
      case 39:
LABEL_73:
        v14 = 0;
        LOBYTE(v26) = 39;
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
        LOBYTE(v26) = 39;
LABEL_82:
        if ( !v58 )
          goto LABEL_33;
        goto LABEL_67;
      case 63:
LABEL_69:
        if ( v20 == 2 )
        {
          if ( v82 )
            return sub_401E50(v9, v10, s);
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
        if ( !(v81 & 4) )
        {
          v14 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_65;
        }
        v14 = 0;
        LOBYTE(v26) = 63;
        if ( v21 + 2 >= v19 || s[v21 + 1] != 63 )
          goto LABEL_65;
        v26 = (unsigned __int8)s[v21 + 2];
        if ( (unsigned __int8)v26 > 0x3Eu || (v40 = 8070630310989004800LL, !_bittest64(&v40, v26)) )
        {
          LOBYTE(v26) = 63;
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
LABEL_118:
        if ( !v56 || (_BYTE)v14 )
          goto LABEL_66;
        if ( a7 )
          goto LABEL_18;
        goto LABEL_121;
      case 92:
        if ( v20 == 2 )
        {
          if ( v82 )
            return sub_401E50(v9, v10, s);
          ++v21;
          v11 = v22;
          LOBYTE(v26) = 92;
          goto LABEL_144;
        }
LABEL_87:
        v11 = v82 & v56;
        LOBYTE(v26) = 92;
        v32 = 92;
        v14 = v82 & v56;
        LOBYTE(v14) = (n != 0) & v14;
        if ( (_BYTE)v14 )
        {
          ++v21;
          v11 = v22;
          goto LABEL_144;
        }
LABEL_88:
        if ( !v56 )
          goto LABEL_65;
        v27 = v14;
        LOBYTE(v26) = v32;
        goto LABEL_20;
      case 123:
      case 125:
LABEL_60:
        v31 = v19 != 1;
        if ( v19 == -1LL )
          v31 = s[1] != 0;
        LOBYTE(v14) = v20 == 2;
        if ( v31 )
          goto LABEL_65;
LABEL_63:
        if ( v21 )
          goto LABEL_65;
LABEL_64:
        if ( !((unsigned __int8)v14 & v82) )
          goto LABEL_65;
        return sub_401E50(v9, v10, s);
      default:
LABEL_124:
        if ( v80 == 1 )
        {
          v74 = v20;
          v69 = v19;
          v64 = v22;
          v36 = __ctype_b_loc();
          v22 = v64;
          v19 = v69;
          v20 = v74;
          v37 = 1LL;
          v38 = (*v36)[(unsigned __int8)v26];
          LOWORD(v38) = (unsigned __int16)v38 >> 14;
          v14 = v38 ^ 1;
          LOBYTE(v14) = v56 & v14;
          goto LABEL_126;
        }
        ps = 0LL;
        if ( v19 == -1LL )
        {
          v75 = v20;
          v70 = v22;
          v65 = v23;
          v43 = strlen(s);
          v20 = v75;
          LOBYTE(v22) = v70;
          v23 = v65;
          v19 = v43;
        }
        v84 = v17;
        v83 = v22;
        v44 = 0LL;
        v85 = v23;
        v76 = v9;
        v78 = v10;
        v66 = v19;
        v71 = v20;
        break;
    }
    break;
  }
  while ( 1 )
  {
    v45 = v21 + v44;
    v46 = sub_405190(&wc, &s[v21 + v44], v66 - (v21 + v44), &ps);
    v47 = v46;
    switch ( v46 )
    {
      case 0LL:
        v11 ^= 1u;
        v37 = v44;
        v9 = v76;
        v22 = v83;
        v17 = v84;
        v10 = v78;
        v14 = (unsigned __int8)(v11 & v56);
        v19 = v66;
        v20 = v71;
        goto LABEL_252;
      case -1LL:
        v37 = v44;
        v22 = v83;
        v17 = v84;
        v9 = v76;
        v10 = v78;
        v19 = v66;
        v20 = v71;
        v14 = v56;
        goto LABEL_252;
      case -2LL:
        v19 = v66;
        v52 = v21 + v44;
        v53 = &s[v21 + v44];
        v54 = v44;
        v37 = v44;
        v22 = v83;
        v17 = v84;
        v9 = v76;
        v10 = v78;
        v20 = v71;
        if ( v52 < v66 && *v53 )
        {
          do
            ++v54;
          while ( v66 > v21 + v54 && v85[v54] );
          v37 = v54;
        }
        v14 = v56;
LABEL_252:
        if ( v37 > 1 )
          goto LABEL_206;
LABEL_126:
        if ( (_BYTE)v14 )
        {
          v14 = v56;
LABEL_206:
          v49 = v21 + v37;
          v50 = 0;
          v51 = v58;
          while ( 1 )
          {
            if ( (_BYTE)v14 )
            {
              if ( v82 )
                return sub_401E50(v9, v10, s);
              if ( (v20 == 2) & ((unsigned __int8)v22 ^ 1) )
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
                *(_BYTE *)(v9 + v17 + 1) = ((unsigned __int8)v26 >> 6) + 48;
              if ( v10 > v17 + 2 )
                *(_BYTE *)(v9 + v17 + 2) = (((unsigned __int8)v26 >> 3) & 7) + 48;
              ++v21;
              v17 += 3LL;
              LOBYTE(v26) = (v26 & 7) + 48;
              if ( v49 <= v21 )
                goto LABEL_33;
              v50 = v14;
            }
            else
            {
              v11 = v22 & (v50 ^ 1);
              if ( v51 )
              {
                if ( v17 < v10 )
                  *(_BYTE *)(v9 + v17) = 92;
                ++v17;
              }
              if ( ++v21 >= v49 )
                goto LABEL_144;
              if ( (_BYTE)v11 )
              {
                if ( v17 < v10 )
                  *(_BYTE *)(v9 + v17) = 39;
                if ( v10 > v17 + 1 )
                  *(_BYTE *)(v9 + v17 + 1) = 39;
                v17 += 2LL;
                v51 = 0;
                v22 = 0;
              }
              else
              {
                v51 = 0;
              }
            }
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = v26;
            LOBYTE(v26) = s[v21];
            ++v17;
          }
        }
LABEL_127:
        LOBYTE(v14) = v20 == 2;
LABEL_65:
        v11 = (v14 | v56 ^ 1) ^ 1;
        LOBYTE(v11) = v82 | (v14 | v56 ^ 1) ^ 1;
        if ( v82 | (unsigned __int8)(v14 | v56 ^ 1) ^ 1 )
        {
LABEL_17:
          v11 = 0;
          if ( a7 )
          {
LABEL_18:
            if ( (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v26 >> 5)) >> v26) & 1 )
            {
              v27 = v20 == 2;
LABEL_20:
              if ( v82 )
                return sub_401E50(v9, v10, s);
LABEL_21:
              ++v21;
              goto LABEL_22;
            }
          }
LABEL_121:
          v27 = v20 == 2;
          if ( v58 )
            goto LABEL_20;
LABEL_122:
          ++v21;
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
          goto LABEL_33;
        }
LABEL_66:
        ++v21;
        if ( !v58 )
        {
          v11 = v22 & (v11 ^ 1);
          goto LABEL_144;
        }
LABEL_67:
        v27 = v20 == 2;
LABEL_22:
        v14 = v22 ^ 1;
        if ( v27 & ((unsigned __int8)v22 ^ 1) )
        {
          if ( v10 > v17 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 36;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v17 += 3LL;
          LOBYTE(v14) = v27 & (v22 ^ 1);
          v22 = v14;
        }
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = 92;
        ++v17;
LABEL_33:
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = v26;
        ++v17;
        goto LABEL_4;
    }
    if ( v82 && v71 == 2 && v46 != 1 )
      break;
LABEL_187:
    if ( !iswprint(wc) )
      v11 = 0;
    v44 += v47;
    if ( mbsinit(&ps) )
    {
      v37 = v44;
      v22 = v83;
      v17 = v84;
      v14 = v11 ^ 1;
      v9 = v76;
      v10 = v78;
      v19 = v66;
      v20 = v71;
      LOBYTE(v14) = v56 & (v11 ^ 1);
      goto LABEL_252;
    }
  }
  v48 = &s[v45 + 1];
  while ( (unsigned __int8)(*v48 - 91) > 0x21u || !((1LL << (*v48 - 91)) & 0x20000002BLL) )
  {
    if ( &s[v46 + v45] == ++v48 )
      goto LABEL_187;
  }
  v9 = v76;
  v10 = v78;
  return sub_401E50(v9, v10, s);
}

_BYTE *__fastcall sub_402E60(signed int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  __int128 *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  _BYTE *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rax
  int v17; // er8
  __int128 *v19; // rax
  char *v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v20 = a2;
  v6 = __errno_location();
  v7 = off_6081F8;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_608210 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( off_6081F8 == &xmmword_608200 )
    {
      v19 = (__int128 *)sub_403CC0(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      off_6081F8 = v19;
      *v19 = (__int128)_mm_load_si128((const __m128i *)&xmmword_608200);
    }
    else
    {
      v10 = (__int128 *)sub_403CC0(off_6081F8, v9);
      v11 = (unsigned int)(a1 + 1);
      off_6081F8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_608210], 0, 16 * (v11 - (unsigned int)dword_608210));
    dword_608210 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v21 = *v12;
  v14 = sub_401E50(v13, *v12, v20, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v17 = *(_DWORD *)v5;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_401E50(v16, v15, v20, v4, v17, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_402E60(signed int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  __int128 *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  _BYTE *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rax
  int v17; // er8
  __int128 *v19; // rax
  char *v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v20 = a2;
  v6 = __errno_location();
  v7 = off_6081F8;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_608210 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( off_6081F8 == &xmmword_608200 )
    {
      v19 = (__int128 *)sub_403CC0(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      off_6081F8 = v19;
      *v19 = (__int128)_mm_load_si128((const __m128i *)&xmmword_608200);
    }
    else
    {
      v10 = (__int128 *)sub_403CC0(off_6081F8, v9);
      v11 = (unsigned int)(a1 + 1);
      off_6081F8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_608210], 0, 16 * (v11 - (unsigned int)dword_608210));
    dword_608210 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v21 = *v12;
  v14 = sub_401E50(v13, *v12, v20, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v17 = *(_DWORD *)v5;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_401E50(v16, v15, v20, v4, v17, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_403380(signed int a1, int a2, char *a3)
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
  return sub_402E60(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_403380(signed int a1, int a2, char *a3)
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
  return sub_402E60(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4033F0(signed int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_402E60(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_4033F0(signed int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_402E60(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_403480(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_6083B0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_608380);
  v8 = _mm_load_si128((const __m128i *)&xmmword_608390);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_6083A0);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_402E60(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_403500(char *a1)
{
  return sub_403480(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_403530(signed int a1, int a2, char *a3)
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
  return sub_402E60(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_403530(signed int a1, int a2, char *a3)
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
  return sub_402E60(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4035A0(signed int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_608380);
  v7 = _mm_load_si128((const __m128i *)&xmmword_608390);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6083A0);
  v9 = qword_6083B0;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_402E60(a1, a4, a5, (__int64)&v6);
}

int __fastcall sub_4036D0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
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
  int result; // eax
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
    case 1LL:
      v27 = *v7;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v28, v27);
    case 2LL:
      v29 = v7[1];
      v30 = *v7;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v31, v30, v29);
    case 3LL:
      v32 = v7[2];
      v33 = v7[1];
      v34 = *v7;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v35, v34, v33, v32);
    case 4LL:
      v36 = v7[3];
      v37 = v7[2];
      v38 = v7[1];
      v39 = *v7;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v40, v39, v38, v37, v36);
    case 5LL:
      v41 = v7[4];
      v42 = v7[3];
      v43 = v7[2];
      v44 = v7[1];
      v45 = *v7;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v46, v45, v44, v43, v42, v41);
      return v60;
    case 6LL:
      v47 = v7[1];
      v48 = v7[4];
      v49 = v7[3];
      v50 = v7[2];
      v51 = *v7;
      v63 = v47;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v52, v51, v63, v50, v49, v48);
      return v60;
    case 7LL:
      v53 = v7[6];
      v54 = v7[5];
      v55 = v7[4];
      v56 = v7[3];
      v67 = v7[2];
      v64 = v7[1];
      v57 = *v7;
      v58 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return fprintf(stream, v58, v57, v64, v67, v56, v55, v54, v53);
    case 8LL:
      v10 = v7[7];
      v11 = v7[6];
      v12 = v7[5];
      v13 = v7[4];
      v14 = v7[2];
      v68 = v7[3];
      v15 = v7[1];
      v16 = *v7;
      v65 = v14;
      v61 = v15;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v17, v16, v61, v65, v68, v13, v12, v11, v10);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = v7[1];
      v21 = v7[7];
      v22 = v7[6];
      v70 = v7[8];
      v23 = v7[5];
      v24 = v7[4];
      v69 = v7[3];
      v66 = v7[2];
      v25 = *v7;
      v62 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = v7[1];
      v21 = v7[7];
      v22 = v7[6];
      v70 = v7[8];
      v23 = v7[5];
      v24 = v7[4];
      v69 = v7[3];
      v66 = v7[2];
      v25 = *v7;
      v62 = v59;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return fprintf(stream, v26, v25, v62, v66, v69, v24, v23, v22, v21, v70);
  }
}

int __fastcall sub_4036D0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
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
  int result; // eax
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
    case 1LL:
      v27 = *v7;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v28, v27);
    case 2LL:
      v29 = v7[1];
      v30 = *v7;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v31, v30, v29);
    case 3LL:
      v32 = v7[2];
      v33 = v7[1];
      v34 = *v7;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v35, v34, v33, v32);
    case 4LL:
      v36 = v7[3];
      v37 = v7[2];
      v38 = v7[1];
      v39 = *v7;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v40, v39, v38, v37, v36);
    case 5LL:
      v41 = v7[4];
      v42 = v7[3];
      v43 = v7[2];
      v44 = v7[1];
      v45 = *v7;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v46, v45, v44, v43, v42, v41);
      return v60;
    case 6LL:
      v47 = v7[1];
      v48 = v7[4];
      v49 = v7[3];
      v50 = v7[2];
      v51 = *v7;
      v63 = v47;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v52, v51, v63, v50, v49, v48);
      return v60;
    case 7LL:
      v53 = v7[6];
      v54 = v7[5];
      v55 = v7[4];
      v56 = v7[3];
      v67 = v7[2];
      v64 = v7[1];
      v57 = *v7;
      v58 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return fprintf(stream, v58, v57, v64, v67, v56, v55, v54, v53);
    case 8LL:
      v10 = v7[7];
      v11 = v7[6];
      v12 = v7[5];
      v13 = v7[4];
      v14 = v7[2];
      v68 = v7[3];
      v15 = v7[1];
      v16 = *v7;
      v65 = v14;
      v61 = v15;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v17, v16, v61, v65, v68, v13, v12, v11, v10);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = v7[1];
      v21 = v7[7];
      v22 = v7[6];
      v70 = v7[8];
      v23 = v7[5];
      v24 = v7[4];
      v69 = v7[3];
      v66 = v7[2];
      v25 = *v7;
      v62 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = v7[1];
      v21 = v7[7];
      v22 = v7[6];
      v70 = v7[8];
      v23 = v7[5];
      v24 = v7[4];
      v69 = v7[3];
      v66 = v7[2];
      v25 = *v7;
      v62 = v59;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return fprintf(stream, v26, v25, v62, v66, v69, v24, v23, v22, v21, v70);
  }
}

int __fastcall sub_403AE0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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

int __fastcall sub_403B40(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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

void *__fastcall sub_403CC0(void *a1, size_t a2)
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
        sub_403E90();
    }
  }
  return result;
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

void *__fastcall sub_403E60(void *src)
{
  size_t v1; // rax
  size_t v2; // rbx
  void *v3; // rax

  v1 = strlen((const char *)src);
  v2 = v1 + 1;
  v3 = sub_403C70(v1 + 1);
  return memcpy(v3, src, v2);
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
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_403F10(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_403F10(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_403F70(__int64 a1, int *a2)
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
  v3 = a2[12];
  v4 = *a2;
  v5 = a2[13];
  v6 = a2[12];
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
  a2[13] = v4;
  result = (unsigned int)(v4 - v8);
  a2[12] = result + v3;
  return result;
}

__int64 __fastcall sub_404050(int a1, __int64 a2, char *a3, const char **a4, int *a5, int a6, int *a7, int a8)
{
  int *v8; // r12
  int v9; // eax
  int v10; // ebp
  _BYTE *v11; // r8
  char v12; // al
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // rax
  const char *v19; // rbx
  unsigned int v20; // er13
  char v21; // r14
  char *v22; // rax
  char v23; // dl
  char v24; // dl
  __int64 v25; // rax
  int v26; // eax
  _BYTE *v27; // rdx
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  int v32; // edx
  __int64 v33; // rax
  _BYTE *v34; // rcx
  int v35; // esi
  char v36; // cl
  __int64 v37; // rax
  char v38; // r13
  const char *i; // r14
  int v40; // er13
  size_t v41; // r14
  const char **v42; // rbp
  const char *v43; // r12
  const char **v44; // r15
  _BYTE *v45; // r13
  unsigned int v46; // eax
  const char **v47; // rbx
  const char *v48; // r15
  __int64 v49; // r14
  const char *v50; // rsi
  size_t v51; // r13
  int v52; // ebp
  _QWORD *v53; // rax
  _BYTE *v54; // r13
  bool v55; // si
  int v56; // eax
  int v57; // ecx
  __int64 v58; // rbx
  unsigned int *v59; // rax
  int v60; // er15
  _QWORD *v61; // rdi
  _QWORD *v62; // r14
  char *v63; // rbx
  char *v64; // rax
  unsigned int v65; // ebp
  __int64 v66; // rbx
  char *v67; // rax
  char *v68; // rax
  const char *v69; // rbp
  __int64 v70; // rbx
  unsigned int v71; // er13
  char *v72; // rax
  __int64 v73; // rbx
  void *v74; // rdi
  __int64 v75; // rbx
  char *v76; // rax
  __int64 v77; // rbp
  __int64 v78; // rbx
  char *v79; // rax
  char *v80; // rbx
  const char **j; // rax
  __int64 v82; // rbx
  size_t v83; // rax
  __int64 v84; // rbx
  size_t v85; // rax
  _QWORD *v86; // rdi
  _QWORD *v87; // rbx
  int v88; // eax
  char v89; // r13
  const char *v90; // r14
  int v91; // ebp
  int v92; // eax
  __int64 v93; // rbp
  __int64 v94; // rbx
  char *v95; // rax
  int v96; // eax
  const char **v97; // rsi
  __int64 v98; // rbp
  __int64 v99; // rbx
  char *v100; // rax
  __int64 v101; // rbx
  size_t v102; // rax
  __int64 v103; // rbx
  char *v104; // rax
  __int64 v105; // rax
  char *v106; // rax
  const char *v107; // rbp
  __int64 v108; // rbx
  char *v109; // rax
  __int64 v110; // rbp
  char *v111; // rax
  __int64 v112; // rbx
  char *v113; // rax
  const char *v114; // rbp
  __int64 v115; // rbx
  char *v116; // rax
  const char *v117; // rbp
  __int64 v118; // rbx
  char *v119; // rax
  char *s; // [rsp+0h] [rbp-98h]
  char *sa; // [rsp+0h] [rbp-98h]
  int sb; // [rsp+0h] [rbp-98h]
  int v123; // [rsp+Ch] [rbp-8Ch]
  int v124; // [rsp+Ch] [rbp-8Ch]
  __int64 *v125; // [rsp+10h] [rbp-88h]
  _BYTE *v126; // [rsp+18h] [rbp-80h]
  _BYTE *v127; // [rsp+18h] [rbp-80h]
  const char **v128; // [rsp+18h] [rbp-80h]
  _BYTE *v129; // [rsp+18h] [rbp-80h]
  const char **v130; // [rsp+20h] [rbp-78h]
  int v131; // [rsp+20h] [rbp-78h]
  int v132; // [rsp+28h] [rbp-70h]
  int v133; // [rsp+2Ch] [rbp-6Ch]
  int v134; // [rsp+2Ch] [rbp-6Ch]
  int v135; // [rsp+2Ch] [rbp-6Ch]
  int v136; // [rsp+2Ch] [rbp-6Ch]
  int *v137; // [rsp+30h] [rbp-68h]
  const char *v138; // [rsp+38h] [rbp-60h]
  int v139; // [rsp+38h] [rbp-60h]
  int v140; // [rsp+40h] [rbp-58h]
  _BYTE *v141; // [rsp+40h] [rbp-58h]
  char v142; // [rsp+48h] [rbp-50h]
  int v143; // [rsp+48h] [rbp-50h]
  int v144; // [rsp+4Ch] [rbp-4Ch]
  char v145; // [rsp+50h] [rbp-48h]
  __int64 v146; // [rsp+58h] [rbp-40h]

  v8 = a7;
  v125 = (__int64 *)a2;
  s = a3;
  v130 = a4;
  v137 = a5;
  v132 = a6;
  v123 = a7[1];
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
  if ( !((*a3 - 43) & 0xFD) )
  {
    v12 = a3[1];
    s = a3 + 1;
  }
LABEL_9:
  v13 = v12 == 58;
  v14 = 0;
  if ( !v13 )
    v14 = v123;
  v124 = v14;
  if ( !v11 || !*v11 )
  {
    v26 = *a7;
    if ( a7[13] > *a7 )
      a7[13] = v26;
    if ( v26 < a7[12] )
      a7[12] = v26;
    if ( a7[10] == 1 )
    {
      v32 = a7[13];
      if ( a7[12] == v32 )
      {
        if ( v26 != v32 )
        {
          a7[12] = v26;
          v32 = v26;
        }
      }
      else if ( v26 != v32 )
      {
        sub_403F70(a2, a7);
        v32 = *a7;
      }
      if ( a1 <= v32 )
      {
LABEL_117:
        v26 = v32;
      }
      else
      {
        v33 = v32;
        while ( 1 )
        {
          v34 = (_BYTE *)v125[v33];
          v35 = v33;
          v32 = v33;
          if ( *v34 == 45 )
          {
            if ( v34[1] )
              break;
          }
          v32 = ++v33;
          *a7 = v35 + 1;
          if ( a1 <= (int)v33 )
            goto LABEL_117;
        }
        v26 = *a7;
      }
      a7[13] = v32;
    }
    if ( a1 == v26 )
    {
      v10 = a7[13];
      v28 = a7[12];
LABEL_51:
      if ( v28 != v10 )
        *a7 = v28;
      return (unsigned int)-1;
    }
    v27 = (_BYTE *)v125[v26];
    if ( !strcmp((const char *)v125[v26], "--") )
    {
      v28 = a7[12];
      v29 = a7[13];
      v30 = v26 + 1;
      *a7 = v30;
      if ( v28 == v29 )
      {
        a7[12] = v30;
        v28 = v30;
      }
      else if ( v30 != v29 )
      {
        sub_403F70((__int64)v125, a7);
        v28 = a7[12];
      }
      a7[13] = a1;
      *a7 = a1;
      goto LABEL_51;
    }
    if ( *v27 == 45 )
    {
      v36 = v27[1];
      if ( v36 )
      {
        v11 = &v27[(v130 != 0LL && v36 == 45) + 1];
        *((_QWORD *)a7 + 4) = v11;
        goto LABEL_13;
      }
    }
    if ( a7[10] )
    {
      *((_QWORD *)a7 + 2) = v27;
      v20 = 1;
      *a7 = v26 + 1;
      return v20;
    }
    return (unsigned int)-1;
  }
LABEL_13:
  if ( !v130 )
    goto LABEL_18;
  v15 = *a7;
  v16 = v15;
  v17 = v125[v15];
  if ( *(_BYTE *)(v17 + 1) != 45 )
  {
    if ( !v132 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v17 + 2) )
    {
      v133 = v16;
      v126 = v11;
      v18 = strchr(s, *(char *)(v17 + 1));
      v11 = v126;
      v16 = v133;
      if ( v18 )
        goto LABEL_18;
    }
  }
  v45 = v11;
  if ( *v11 && *v11 != 61 )
  {
    do
      ++v45;
    while ( *v45 && *v45 != 61 );
    v46 = (_DWORD)v45 - (_DWORD)v11;
    v135 = (_DWORD)v45 - (_DWORD)v11;
  }
  else
  {
    v135 = 0;
    v46 = 0;
  }
  v47 = v130;
  v48 = *v130;
  if ( !*v130 )
  {
LABEL_134:
    if ( v132 )
    {
      v63 = (char *)v125[(int)v16];
      if ( v63[1] != 45 )
      {
        v136 = v16;
        v129 = (_BYTE *)*((_QWORD *)a7 + 4);
        v64 = strchr(s, **((char **)a7 + 4));
        v11 = v129;
        LODWORD(v16) = v136;
        if ( v64 )
        {
LABEL_18:
          v19 = v11 + 1;
          v127 = v11;
          *((_QWORD *)a7 + 4) = v11 + 1;
          v20 = (char)*v11;
          v21 = *v11;
          v22 = strchr(s, v20);
          if ( !v127[1] )
            ++*a7;
          if ( (unsigned __int8)(v21 - 58) <= 1u || !v22 )
          {
            if ( v124 )
            {
              v75 = *v125;
              v76 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
              fprintf(stderr, v76, v75, v20);
            }
            a7[2] = v20;
            return 63;
          }
          v23 = v22[1];
          if ( *v22 != 87 || v23 != 59 )
          {
            if ( v23 == 58 )
            {
              v24 = v127[1];
              if ( v22[2] == 58 )
              {
                if ( v24 )
                {
                  *((_QWORD *)a7 + 2) = v19;
                  ++*a7;
                }
                else
                {
                  *((_QWORD *)a7 + 2) = 0LL;
                }
              }
              else
              {
                v25 = *a7;
                if ( v24 )
                {
                  *((_QWORD *)a7 + 2) = v19;
                  *a7 = v25 + 1;
                }
                else if ( v10 == (_DWORD)v25 )
                {
                  if ( v124 )
                  {
                    v103 = *v125;
                    v104 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                    fprintf(stderr, v104, v103, v20);
                  }
                  a7[2] = v20;
                  v20 = 5 * (*s != 58) + 58;
                }
                else
                {
                  *a7 = v25 + 1;
                  *((_QWORD *)a7 + 2) = v125[v25];
                }
              }
              *((_QWORD *)a7 + 4) = 0LL;
            }
            return v20;
          }
          if ( !v130 )
            goto LABEL_204;
          v37 = *a7;
          if ( v127[1] )
          {
            *((_QWORD *)a7 + 2) = v19;
            *a7 = v37 + 1;
          }
          else
          {
            if ( v10 == (_DWORD)v37 )
            {
              if ( v124 )
              {
                v112 = *v125;
                v113 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                fprintf(stderr, v113, v112, v20);
              }
              a7[2] = v20;
              return 5 * (unsigned int)(*s != 58) + 58;
            }
            *a7 = v37 + 1;
            v19 = (const char *)v125[v37];
            *((_QWORD *)a7 + 2) = v19;
          }
          *((_QWORD *)a7 + 4) = v19;
          v38 = *v19;
          for ( i = v19; *i; v38 = *++i )
          {
            if ( v38 == 61 )
              break;
          }
          if ( !*v130 )
          {
LABEL_204:
            *((_QWORD *)v8 + 4) = 0LL;
            return 87;
          }
          v142 = v38;
          v138 = i;
          v40 = 0;
          v140 = v10;
          v41 = i - v19;
          v42 = v130;
          v43 = *v130;
          v44 = 0LL;
          v134 = 0;
          v131 = 0;
          do
          {
            if ( !strncmp(v43, v19, v41) )
            {
              if ( (unsigned int)v41 == strlen(v43) )
              {
                v96 = v40;
                v97 = v42;
                v90 = v138;
                v89 = v142;
                v91 = v140;
                v8 = a7;
                v134 = v96;
                v44 = v97;
                goto LABEL_174;
              }
              if ( v44 )
              {
                if ( v132 || *((_DWORD *)v44 + 2) != *((_DWORD *)v42 + 2) || v44[2] != v42[2] )
                {
                  v131 = 1;
                }
                else
                {
                  v88 = 1;
                  if ( *((_DWORD *)v44 + 6) == *((_DWORD *)v42 + 6) )
                    v88 = v131;
                  v131 = v88;
                }
              }
              else
              {
                v134 = v40;
                v44 = v42;
              }
            }
            v42 += 4;
            v43 = *v42;
            ++v40;
          }
          while ( *v42 );
          v89 = v142;
          v90 = v138;
          v91 = v140;
          v8 = a7;
          if ( v131 )
          {
            if ( v124 )
            {
              v110 = *v125;
              v111 = dcgettext(0LL, "%s: option '-W %s' is ambiguous\n", 5);
              fprintf(stderr, v111, v110, v19);
              v19 = (const char *)*((_QWORD *)a7 + 4);
            }
            v20 = 63;
            v102 = strlen(v19);
            ++*a7;
            *((_QWORD *)a7 + 4) = &v19[v102];
            return v20;
          }
          if ( !v44 )
            goto LABEL_204;
LABEL_174:
          v92 = *((_DWORD *)v44 + 2);
          if ( v89 )
          {
            if ( !v92 )
            {
              if ( v124 )
              {
                v114 = *v44;
                v115 = *v125;
                v116 = dcgettext(0LL, "%s: option '-W %s' doesn't allow an argument\n", 5);
                fprintf(stderr, v116, v115, v114);
                v19 = (const char *)*((_QWORD *)v8 + 4);
              }
              v20 = 63;
              *((_QWORD *)v8 + 4) = &v19[strlen(v19)];
              return v20;
            }
            *((_QWORD *)v8 + 2) = v90 + 1;
            goto LABEL_177;
          }
          if ( v92 != 1 )
          {
            *((_QWORD *)v8 + 2) = 0LL;
            goto LABEL_177;
          }
          v105 = *v8;
          if ( (int)v105 < v91 )
          {
            *v8 = v105 + 1;
            *((_QWORD *)v8 + 2) = v125[v105];
LABEL_177:
            *((_QWORD *)v8 + 4) = &v19[strlen(v19)];
            if ( v137 )
              *v137 = v134;
            v59 = (unsigned int *)v44[2];
            v20 = *((_DWORD *)v44 + 6);
            if ( v59 )
              goto LABEL_116;
            return v20;
          }
          if ( v124 )
          {
            v117 = *v44;
            v118 = *v125;
            v119 = dcgettext(0LL, "%s: option '-W %s' requires an argument\n", 5);
            fprintf(stderr, v119, v118, v117);
          }
          *((_QWORD *)v8 + 4) += strlen(*((const char **)v8 + 4));
          if ( *s != 58 )
            return 63;
          return 58;
        }
        if ( !v124 )
        {
LABEL_139:
          v20 = 63;
          *((_QWORD *)a7 + 4) = "";
          *a7 = v16 + 1;
          a7[2] = 0;
          return v20;
        }
LABEL_138:
        v65 = *v63;
        sa = v11;
        v66 = *v125;
        v67 = dcgettext(0LL, "%s: unrecognized option '%c%s'\n", 5);
        fprintf(stderr, v67, v66, v65, sa);
        LODWORD(v16) = *a7;
        goto LABEL_139;
      }
      if ( !v124 )
        goto LABEL_139;
      v93 = *((_QWORD *)a7 + 4);
    }
    else
    {
      if ( !v124 )
        goto LABEL_139;
      v93 = *((_QWORD *)a7 + 4);
      v63 = (char *)v125[v16];
      v11 = (_BYTE *)*((_QWORD *)a7 + 4);
      if ( v63[1] != 45 )
        goto LABEL_138;
    }
    v94 = *v125;
    v95 = dcgettext(0LL, "%s: unrecognized option '--%s'\n", 5);
    fprintf(stderr, v95, v94, v93);
    LODWORD(v16) = *a7;
    goto LABEL_139;
  }
  v141 = v45;
  v49 = 0LL;
  v144 = a1;
  v50 = v11;
  v51 = v46;
  v52 = 0;
  v139 = -1;
  v143 = 0;
  v128 = 0LL;
  while ( 1 )
  {
    if ( strncmp(v48, v50, v51) )
      goto LABEL_101;
    if ( v135 == (unsigned int)strlen(v48) )
    {
      v60 = v52;
      v54 = v141;
      v10 = v144;
      if ( v143 || v49 )
      {
        v61 = (_QWORD *)v49;
        if ( v49 )
        {
          do
          {
            v62 = (_QWORD *)v61[1];
            free(v61);
            v61 = v62;
          }
          while ( v62 );
        }
      }
      LODWORD(v16) = *a7;
      v139 = v60;
      v128 = v47;
      goto LABEL_110;
    }
    if ( !v128 )
      break;
    if ( !v143 )
    {
      if ( v132
        || *((_DWORD *)v128 + 2) != *((_DWORD *)v47 + 2)
        || v128[2] != v47[2]
        || *((_DWORD *)v128 + 6) != *((_DWORD *)v47 + 6) )
      {
        v53 = malloc(0x10uLL);
        if ( v53 )
        {
          *v53 = v47;
          v53[1] = v49;
          v49 = (__int64)v53;
        }
        else
        {
          if ( v49 )
          {
            v74 = (void *)v49;
            do
            {
              v49 = *(_QWORD *)(v49 + 8);
              free(v74);
              v74 = (void *)v49;
            }
            while ( v49 );
          }
          v143 = 1;
        }
      }
      else
      {
        v143 = 0;
      }
    }
LABEL_101:
    v47 += 4;
    v48 = *v47;
    ++v52;
    if ( !*v47 )
      goto LABEL_107;
LABEL_102:
    v50 = (const char *)*((_QWORD *)a7 + 4);
  }
  v128 = v47;
  v47 += 4;
  v48 = *v47;
  v139 = v52++;
  if ( *v47 )
    goto LABEL_102;
LABEL_107:
  v54 = v141;
  v10 = v144;
  v55 = v49 != 0;
  v16 = *a7;
  if ( (_BYTE)v143 || v55 )
  {
    if ( v124 )
    {
      if ( v55 )
      {
        v146 = v49;
        v77 = v125[v16];
        v78 = *v125;
        v79 = dcgettext(0LL, "%s: option '%s' is ambiguous; possibilities:", 5);
        fprintf(stderr, v79, v78, v77);
        v80 = &v145;
        for ( j = v128; ; j = *(const char ***)v80 )
        {
          fprintf(stderr, " '--%s'", *j);
          v80 = (char *)*((_QWORD *)v80 + 1);
          if ( !v80 )
            break;
        }
        fputc(10, stderr);
        goto LABEL_161;
      }
      if ( (_BYTE)v143 )
      {
        v98 = v125[v16];
        v99 = *v125;
        v100 = dcgettext(0LL, "%s: option '%s' is ambiguous\n", 5);
        fprintf(stderr, v100, v99, v98);
LABEL_161:
        v82 = *((_QWORD *)a7 + 4);
        v83 = strlen(*((const char **)a7 + 4));
        ++*a7;
        a7[2] = 0;
        *((_QWORD *)a7 + 4) = v83 + v82;
        return 63;
      }
    }
    v84 = *((_QWORD *)a7 + 4);
    sb = *a7;
    v85 = strlen(*((const char **)a7 + 4));
    a7[2] = 0;
    *((_QWORD *)a7 + 4) = v85 + v84;
    *a7 = sb + 1;
    if ( v49 )
    {
      v86 = (_QWORD *)v49;
      do
      {
        v87 = (_QWORD *)v86[1];
        free(v86);
        v86 = v87;
      }
      while ( v87 );
    }
    return 63;
  }
  if ( !v128 )
    goto LABEL_134;
LABEL_110:
  v56 = v16 + 1;
  *a7 = v16 + 1;
  v57 = *((_DWORD *)v128 + 2);
  if ( !*v54 )
  {
    if ( v57 != 1 )
      goto LABEL_113;
    if ( v56 < v10 )
    {
      *a7 = v16 + 2;
      *((_QWORD *)a7 + 2) = v125[v56];
      goto LABEL_113;
    }
    if ( v124 )
    {
      v107 = *v128;
      v108 = *v125;
      v109 = dcgettext(0LL, "%s: option '--%s' requires an argument\n", 5);
      fprintf(stderr, v109, v108, v107);
    }
    v101 = *((_QWORD *)a7 + 4);
    *((_QWORD *)a7 + 4) = strlen(*((const char **)a7 + 4)) + v101;
    a7[2] = *((_DWORD *)v128 + 6);
    if ( *s == 58 )
      return 58;
    return 63;
  }
  if ( v57 )
  {
    *((_QWORD *)a7 + 2) = v54 + 1;
LABEL_113:
    v58 = *((_QWORD *)a7 + 4);
    *((_QWORD *)a7 + 4) = strlen(*((const char **)a7 + 4)) + v58;
    if ( v137 )
      *v137 = v139;
    v59 = (unsigned int *)v128[2];
    v20 = *((_DWORD *)v128 + 6);
    if ( v59 )
    {
LABEL_116:
      *v59 = v20;
      v20 = 0;
    }
  }
  else
  {
    if ( v124 )
    {
      v68 = (char *)v125[v56 - 1];
      v69 = *v128;
      v70 = *v125;
      if ( v68[1] == 45 )
      {
        v106 = dcgettext(0LL, "%s: option '--%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v106, v70, v69);
      }
      else
      {
        v71 = *v68;
        v72 = dcgettext(0LL, "%s: option '%c%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v72, v70, v71, v69);
      }
    }
    v73 = *((_QWORD *)a7 + 4);
    v20 = 63;
    *((_QWORD *)a7 + 4) = strlen(*((const char **)a7 + 4)) + v73;
    a7[2] = *((_DWORD *)v128 + 6);
  }
  return v20;
}

__int64 __fastcall sub_405090(int a1, __int64 a2, char *a3, const char **a4, int *a5, int a6, int a7)
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

__int64 __fastcall sub_4050F0(int a1, __int64 a2, char *a3)
{
  return sub_405090(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_405110(int a1, __int64 a2, char *a3, const char **a4, int *a5)
{
  return sub_405090(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_405130(int a1, __int64 a2, char *a3, const char **a4, int *a5, int *a6)
{
  return sub_404050(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_405150(int a1, __int64 a2, char *a3, const char **a4, int *a5)
{
  return sub_405090(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_405170(int a1, __int64 a2, char *a3, const char **a4, int *a5, int *a6)
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
            fclose(v39);
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

int __fastcall sub_405810(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_6081A8 )
    v1 = (void *)unk_6081A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_405828(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_607E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
