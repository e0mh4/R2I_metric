signed __int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char **v3; // rbx@1
  bool v4; // cf@3
  bool v5; // zf@3
  const char *v6; // rbp@4
  const char *v7; // rdi@4
  signed __int64 v8; // rcx@4
  char *v9; // rsi@4
  FILE *v10; // rbp@9
  char *v11; // rax@10
  char *v12; // rax@10
  FILE *v13; // rsi@10
  char *v14; // r12@10
  char *v15; // rdi@11
  int v16; // ebx@13
  size_t i; // r13@13
  int v18; // eax@14
  char *v19; // rdx@15
  char v20; // al@15
  char *v21; // rax@19
  char *v22; // rbp@21
  int v23; // ebp@24
  int v24; // ebx@25
  char *v25; // rax@28
  char *v26; // r14@28
  int v27; // edi@28
  char v28; // si@29
  char v29; // al@30
  char *v30; // rdx@30
  char *v31; // rbx@34
  char *v32; // rcx@34
  size_t v33; // rbx@37
  int v34; // edi@38
  size_t v35; // rdx@41
  signed __int64 result; // rax@42
  char *v37; // r12@2
  int *v38; // rax@2
  char s; // [sp+1Dh] [bp-3Bh]@30
  char v40; // [sp+1Eh] [bp-3Ah]@30
  char v41; // [sp+1Fh] [bp-39h]@3
  char *lineptr; // [sp+20h] [bp-38h]@10
  size_t n; // [sp+28h] [bp-30h]@10

  v3 = a2;
  sub_401EF0(*a2, a2, a3);
  if ( sub_4049A0(sub_401E50) )
  {
    v37 = dcgettext(0LL, "The atexit library function failed", 5);
    v38 = __errno_location();
    error(1, *v38, v37);
  }
  v41 = 0;
  v4 = a1 < 2;
  v5 = a1 == 2;
  if ( a1 == 2 )
  {
    v6 = a2[1];
    v7 = "--help";
    v8 = 7LL;
    v9 = a2[1];
    do
    {
      if ( !v8 )
        break;
      v4 = (unsigned __int8)*v9 < *v7;
      v5 = *v9++ == *v7++;
      --v8;
    }
    while ( v5 );
    if ( (!v4 && !v5) == v4 )
    {
      sub_401B50(stdout);
      result = 0LL;
    }
    else if ( !strcmp(v3[1], "--version") )
    {
      sub_401DB0("code", "--version");
      result = 0LL;
    }
    else
    {
      v10 = fopen(v6, "r");
      if ( v10 )
      {
        n = 1026LL;
        LODWORD(v11) = sub_403EB0(1026LL, "r");
        lineptr = v11;
        LODWORD(v12) = sub_403EB0(1026LL, "r");
        v13 = (FILE *)257;
        *v12 = 0;
        v14 = v12;
        if ( !fgets(&ptr, 257, v10) )
          goto LABEL_56;
        v13 = (FILE *)1;
        v15 = &ptr;
        if ( fwrite(&ptr, 1uLL, 0x100uLL, stdout) != 256 )
LABEL_46:
          sub_401BE0(v15, v13);
        if ( fclose(v10) == -1 )
LABEL_56:
          sub_401BB0(v3[1], v13);
        v16 = 0;
        for ( i = 1026LL; ; i = v35 )
        {
          v18 = __getdelim(&lineptr, &n, 10, stdin);
          if ( v18 <= 0 )
            break;
          lineptr[v18 - 1] = 0;
          v19 = lineptr;
          v20 = *lineptr;
          if ( !*lineptr )
            goto LABEL_57;
          do
          {
            if ( (unsigned __int8)(v20 - 32) > 0x5Eu )
              *v19 = 63;
            v20 = *++v19;
          }
          while ( *v19 );
          v21 = lineptr;
          if ( *lineptr == *v14 && *v14 )
          {
            v22 = v14;
            do
            {
              ++v22;
              ++v21;
            }
            while ( *v21 == *v22 && *v22 );
            v23 = (_DWORD)v22 - (_DWORD)v14;
          }
          else
          {
LABEL_57:
            v23 = 0;
          }
          v13 = stdout;
          v24 = v23 - v16 + 14;
          if ( (unsigned int)v24 <= 0x1C )
          {
            v15 = (char *)(unsigned int)v24;
            if ( _IO_putc(v24, stdout) == -1 )
              goto LABEL_46;
          }
          else
          {
            v15 = (char *)30;
            if ( _IO_putc(30, stdout) == 1 )
              goto LABEL_46;
            v15 = (char *)stdout;
            v13 = (FILE *)(unsigned int)v24;
            if ( !(unsigned __int8)sub_401D50(stdout) )
              goto LABEL_46;
          }
          v25 = lineptr;
          v26 = &lineptr[v23];
          v27 = *v26;
          if ( *v26 )
          {
            while ( 1 )
            {
              v28 = v26[1];
              if ( !v28 )
                break;
              s = v27;
              v29 = ptr;
              v30 = &ptr;
              v40 = v28;
              while ( v29 )
              {
LABEL_32:
                ++v30;
                v5 = v29 == (_BYTE)v27;
                v29 = *v30;
                if ( v5 && v28 == v29 )
                {
                  v31 = v30;
                  v32 = &v40;
                  while ( 1 )
                  {
                    ++v32;
                    ++v31;
                    if ( !*v32 )
                      break;
                    if ( *v32 != *v31 )
                      goto LABEL_32;
                  }
                  v33 = &v31[-strlen(&s)] - &ptr;
                  if ( !(v33 & 1) )
                  {
                    v34 = (signed int)v33 / 2;
                    LOBYTE(v34) = (signed int)v33 / 2 | 0x80;
                    _IO_putc(v34, stdout);
                    goto LABEL_39;
                  }
                  break;
                }
              }
              fputs(&s, stdout);
LABEL_39:
              v26 += 2;
              v27 = *v26;
              if ( !*v26 )
              {
                v25 = lineptr;
                goto LABEL_41;
              }
            }
            _IO_putc(v27, stdout);
            v25 = lineptr;
          }
LABEL_41:
          v35 = n;
          lineptr = v14;
          v16 = v23;
          v14 = v25;
          n = i;
        }
        free(lineptr);
        free(v14);
        result = 0LL;
      }
      else
      {
        fprintf(stderr, "%s: ", *v3);
        sub_4041E0(v3[1]);
        result = 1LL;
      }
    }
  }
  else
  {
    sub_401B50(stderr);
    result = 2LL;
  }
  return result;
}

signed int sub_401A9B()
{
  return 6320696;
}

int sub_401ABA()
{
  return 0;
}

signed int sub_401AF1()
{
  signed int result; // eax@4

  if ( !byte_607268 )
  {
    while ( qword_607270 < (unsigned __int64)(((&unk_606E48 - (_UNKNOWN *)&qword_606E40) >> 3) - 1) )
      (*(&qword_606E40 + ++qword_607270))();
    result = sub_401A9B();
    byte_607268 = 1;
  }
  return result;
}

int sub_401B48()
{
  return sub_401ABA();
}

int __fastcall sub_401B50(FILE *stream)
{
  __int64 v1; // rbp@1
  char *v2; // rax@1
  char *v3; // rax@1

  v1 = qword_607398;
  v2 = dcgettext(
         0LL,
         "Usage: %s [--version | --help]\nor     %s most_common_bigrams < file-list > locate-database\n",
         5);
  fprintf(stream, v2, v1, v1);
  v3 = dcgettext(0LL, "\nReport bugs to <bug-findutils@gnu.org>.\n", 5);
  return fputs(v3, stream);
}

void __fastcall __noreturn sub_401BB0(__int64 a1)
{
  int *v1; // rax@1

  v1 = __errno_location();
  error(1, *v1, "%s", a1);
  abort();
}

void __noreturn sub_401BE0()
{
  char *v0; // rbx@1
  int *v1; // rax@1

  v0 = dcgettext(0LL, "write error", 5);
  v1 = __errno_location();
  error(1, *v1, v0);
  abort();
}

bool __fastcall sub_401D50(FILE *s, unsigned int a2, int a3)
{
  unsigned int ptr; // [sp+Ch] [bp-Ch]@1

  ptr = a2;
  if ( !a3 )
    __assert_fail("endian_state_flag != GetwordEndianStateInitial", "word_io.c", 0xA7u, "putword");
  if ( a3 == 2 )
    ptr = _byteswap_ulong(ptr);
  return fwrite(&ptr, 4uLL, 1uLL, s) == 1;
}

char *sub_401DB0()
{
  char *v0; // r12@1

  sub_404110(stderr);
  v0 = dcgettext(0LL, "Kevin Dalley", 5);
  dcgettext(0LL, "James Youngman", 5);
  dcgettext(0LL, "Eric B. Decker", 5);
  sub_403D80((char)stdout);
  return v0;
}

__int64 sub_401E50()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_404350(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_607388 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_607390 )
      {
        LODWORD(v5) = sub_403740(qword_607390, "write error");
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
  result = sub_404350(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

char *__fastcall sub_401EF0(const char *a1)
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
  qword_607398 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_401F90(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  const char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  LODWORD(v4) = sub_4043C0(0LL);
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
    v2 = "¡\ae";
    if ( !v5 )
      v2 = "¡¯";
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_402090(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v33; // rax@50
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
  const char *v52; // rax@178
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
  const char *s2; // [sp+48h] [bp-70h]@2
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
        a8 = sub_401F90("`", v68);
        v33 = sub_401F90("'", v68);
        v16 = v70;
        v15 = v68;
        a9 = (char *)v33;
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
        return sub_402090(v9, v10, s);
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
              return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
              return sub_402090(v9, v10, s);
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
          return sub_402090(v9, v10, s);
        case 13:
          LOBYTE(v31) = 13;
          v39 = 114;
LABEL_130:
          LOBYTE(v14) = v20 == 2;
          v71 = v20 == 2 && v82;
          if ( v71 )
            return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
        return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
    LODWORD(v59) = sub_4041B0(&wc, &s[v21] + v57, v75 - (v21 + v57), &ps);
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
  return sub_402090(v9, v10, s);
}

unsigned __int64 __fastcall sub_402090(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v33; // rax@50
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
  const char *v52; // rax@178
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
  const char *s2; // [sp+48h] [bp-70h]@2
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
        a8 = sub_401F90("`", v68);
        v33 = sub_401F90("'", v68);
        v16 = v70;
        v15 = v68;
        a9 = (char *)v33;
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
        return sub_402090(v9, v10, s);
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
              return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
              return sub_402090(v9, v10, s);
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
          return sub_402090(v9, v10, s);
        case 13:
          LOBYTE(v31) = 13;
          v39 = 114;
LABEL_130:
          LOBYTE(v14) = v20 == 2;
          v71 = v20 == 2 && v82;
          if ( v71 )
            return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
        return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
            return sub_402090(v9, v10, s);
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
    LODWORD(v59) = sub_4041B0(&wc, &s[v21] + v57, v75 - (v21 + v57), &ps);
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
  return sub_402090(v9, v10, s);
}

_BYTE *__fastcall sub_4030A0(unsigned int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_607218;
  v8 = v6;
  v23 = *v6;
  if ( (a1 & 0x80000000) != 0 )
    abort();
  if ( dword_607230 <= a1 )
  {
    v9 = 16LL * (a1 + 1);
    if ( off_607218 == &xmmword_607220 )
    {
      LODWORD(v21) = sub_403F00(0LL, v9);
      v11 = a1 + 1;
      v7 = v21;
      off_607218 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_607220);
    }
    else
    {
      LODWORD(v10) = sub_403F00(off_607218, v9);
      v11 = a1 + 1;
      off_607218 = v10;
      v7 = v10;
    }
    memset(&v7[dword_607230], 0, 16 * (v11 - (unsigned int)dword_607230));
    dword_607230 = a1 + 1;
  }
  v12 = (signed __int64)&v7[a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_402090(
          v13,
          *(_QWORD *)v12,
          v22,
          v4,
          *(_DWORD *)v5,
          v24,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_6073A0 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_403EB0(v16, v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_402090(v18, v16, v22, v4, v19, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_4030A0(unsigned int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_607218;
  v8 = v6;
  v23 = *v6;
  if ( (a1 & 0x80000000) != 0 )
    abort();
  if ( dword_607230 <= a1 )
  {
    v9 = 16LL * (a1 + 1);
    if ( off_607218 == &xmmword_607220 )
    {
      LODWORD(v21) = sub_403F00(0LL, v9);
      v11 = a1 + 1;
      v7 = v21;
      off_607218 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_607220);
    }
    else
    {
      LODWORD(v10) = sub_403F00(off_607218, v9);
      v11 = a1 + 1;
      off_607218 = v10;
      v7 = v10;
    }
    memset(&v7[dword_607230], 0, 16 * (v11 - (unsigned int)dword_607230));
    dword_607230 = a1 + 1;
  }
  v12 = (signed __int64)&v7[a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_402090(
          v13,
          *(_QWORD *)v12,
          v22,
          v4,
          *(_DWORD *)v5,
          v24,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_6073A0 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_403EB0(v16, v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_402090(v18, v16, v22, v4, v19, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_4035C0(unsigned int a1, int a2, char *a3)
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
  return sub_4030A0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4035C0(unsigned int a1, int a2, char *a3)
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
  return sub_4030A0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4036C0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_6074D0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_6074A0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_6074B0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_6074C0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_4030A0(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_403740(char *a1)
{
  return sub_4036C0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

int __fastcall sub_403910(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_403910(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_403D80(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_403910(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_403910(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_403EB0(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_4040D0();
  }
  return result;
}

void *__fastcall sub_403F00(void *a1, size_t a2)
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
        sub_4040D0();
    }
  }
  return result;
}

void *__fastcall sub_404070(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_403EB0(a2);
  return memcpy(v2, a1, a2);
}

void __noreturn sub_4040D0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_404110(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_404150(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_404150(FILE *a1, __off_t a2, int a3)
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

size_t __fastcall sub_4041B0(wchar_t *a1, const char *a2, size_t a3, mbstate_t *a4)
{
  if ( a2 )
  {
    if ( !a3 )
      return -2LL;
  }
  else
  {
    a3 = 1LL;
    a2 = "Written by %s, %s, and %s.\n" + 27;
    a1 = 0LL;
  }
  return mbrtowc(a1, a2, a3, a4);
}

int __fastcall sub_4041E0(_BYTE *a1)
{
  int *v1; // rax@1
  int result; // eax@4
  __int64 v3; // [sp+0h] [bp-108h]@1

  v1 = __errno_location();
  if ( (unsigned int)sub_404260(*v1, &v3, 0x100uLL) == 34 )
    abort();
  if ( a1 && *a1 )
    result = fprintf(stderr, "%s: %s\n", a1, &v3);
  else
    result = fprintf(stderr, "%s\n", &v3);
  return result;
}

int __fastcall sub_4041E0(_BYTE *a1)
{
  int *v1; // rax@1
  int result; // eax@4
  __int64 v3; // [sp+0h] [bp-108h]@1

  v1 = __errno_location();
  if ( (unsigned int)sub_404260(*v1, &v3, 0x100uLL) == 34 )
    abort();
  if ( a1 && *a1 )
    result = fprintf(stderr, "%s: %s\n", a1, &v3);
  else
    result = fprintf(stderr, "%s\n", &v3);
  return result;
}

__int64 __fastcall sub_404260(int errnum, void *dest, size_t maxlen)
{
  size_t v3; // r14@2
  int *v4; // r13@2
  int v5; // er15@2
  int v6; // er12@2
  char *v8; // rax@7
  size_t v9; // rax@7
  char *src; // [sp+8h] [bp-40h]@7

  if ( maxlen > 1 )
  {
    *(_BYTE *)dest = 0;
    v3 = maxlen;
    v4 = __errno_location();
    v5 = *v4;
    v6 = __xpg_strerror_r((unsigned int)errnum, dest, v3);
    if ( v6 < 0 )
    {
      v6 = *v4;
      if ( *(_BYTE *)dest )
        goto LABEL_4;
    }
    else if ( *(_BYTE *)dest )
    {
LABEL_4:
      *v4 = v5;
      return (unsigned int)v6;
    }
    v8 = strerror_r(errnum, (char *)dest, v3);
    src = v8;
    v9 = strlen(v8);
    if ( v3 <= v9 )
    {
      memcpy(dest, src, v3 - 1);
      *((char *)dest + v3 - 1) = 0;
    }
    else
    {
      memcpy(dest, src, v9 + 1);
    }
    if ( v6 == 22 && !*(_BYTE *)dest )
      snprintf((char *)dest, v3, "Unknown error %d", (unsigned int)errnum);
    goto LABEL_4;
  }
  v6 = 34;
  if ( maxlen )
    *(_BYTE *)dest = 0;
  return (unsigned int)v6;
}

int __fastcall sub_404350(FILE *stream)
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

const char *sub_4043C0()
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
          v1 = "Written by %s, %s, and %s.\n" + 27;
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
                v1 = "Written by %s, %s, and %s.\n" + 27;
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
        v1 = "Written by %s, %s, and %s.\n" + 27;
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

int __fastcall sub_4049A0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_6071C8 )
    v1 = unk_6071C8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_4049B8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_606E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
