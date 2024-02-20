#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(__int64 a1, char **a2, char **a3)
{
  char *v3; // rdi
  size_t v4; // r12
  _BYTE *v5; // rax
  _BYTE *v6; // rbp
  int v7; // eax
  _BYTE *v8; // rdx
  int v9; // edi
  _BYTE *v10; // rcx
  _BYTE *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rbx
  size_t v16; // rax
  char *v18; // rbx
  int *v19; // rax
  void *ptr; // [rsp+0h] [rbp-38h]
  size_t n; // [rsp+8h] [rbp-30h]

  v3 = *a2;
  if ( !*a2 )
    v3 = "bigram";
  sub_4015B0(v3, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "findutils",
    "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("findutils");
  if ( (unsigned int)sub_4038B0(sub_401510) )
  {
    v18 = dcgettext(0LL, "The atexit library function failed", 5);
    v19 = __errno_location();
    error(1, *v19, v18);
  }
  v4 = 1026LL;
  n = 1026LL;
  ptr = (void *)sub_402FD0(1026LL);
  v5 = (_BYTE *)sub_402FD0(1026LL);
  *v5 = 0;
  v6 = v5;
  while ( 1 )
  {
    v7 = __getdelim((char **)&ptr, &n, 10, stdin);
    if ( v7 <= 0 )
      break;
    *((char *)ptr + v7 - 1) = 0;
    v8 = ptr;
    v9 = *(char *)ptr;
    if ( *v6 && *v6 == (_BYTE)v9 )
    {
      v10 = ptr;
      v11 = v6;
      do
      {
        ++v11;
        ++v10;
      }
      while ( *v10 == *v11 && *v11 );
      LODWORD(v13) = (_DWORD)v11 - (_DWORD)v6;
      v12 = (int)v13;
      v13 = (int)v13;
      v9 = *((char *)ptr + (int)v13);
    }
    else
    {
      v13 = 0LL;
      v12 = 0LL;
    }
    if ( (_BYTE)v9 )
    {
      v14 = v13 + 1;
      if ( *((_BYTE *)ptr + v13 + 1) )
      {
        v15 = v12 + 2;
        do
        {
          _IO_putc(v9, stdout);
          _IO_putc(*((char *)ptr + v14), stdout);
          _IO_putc(10, stdout);
          v8 = ptr;
          v9 = *((char *)ptr + v15);
          if ( !*((_BYTE *)ptr + v15) )
            break;
          v14 = v15 + 1;
          v15 += 2LL;
        }
        while ( *((_BYTE *)ptr + v14) );
      }
    }
    v16 = n;
    ptr = v6;
    v6 = v8;
    n = v4;
    v4 = v16;
  }
  free(ptr);
  free(v6);
  return 0LL;
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

void *sub_40143B()
{
  void *result; // rax

  result = &unk_6061D8;
  if ( &unk_6061D8 != &unk_6061D8 )
    result = 0LL;
  return result;
}

__int64 sub_40145A()
{
  return 0LL;
}

void *sub_401491()
{
  void *result; // rax

  if ( !byte_606208 )
  {
    while ( qword_606210 < (unsigned __int64)(&qword_605E48 - qword_605E40 - 1) )
      ((void (*)(void))qword_605E40[++qword_606210])();
    result = sub_40143B();
    byte_606208 = 1;
  }
  return result;
}

__int64 sub_4014E8()
{
  return sub_40145A();
}

__int64 sub_401510()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_403260(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_606218 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_606220 )
      {
        v5 = sub_402E00();
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
  result = sub_403260(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

char *__fastcall sub_4015B0(const char *a1)
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
  qword_606228 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_401650(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_4032D0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_403A11;
      if ( !v5 )
        v2 = (char *)&unk_403A06;
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
    v2 = (char *)&unk_403A0D;
    if ( !v5 )
      v2 = (char *)&unk_403A0A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_401750(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v28; // rax
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
  const char *v42; // rax
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
  const char *s2; // [rsp+48h] [rbp-70h]
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
        a8 = sub_401650("`", v55);
        v28 = sub_401650("'", v55);
        v16 = v57;
        v15 = v55;
        a9 = (char *)v28;
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
        return sub_401750(v9, v10, s);
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
              return sub_401750(v9, v10, s);
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
      return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
        return sub_401750(v9, v10, s);
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
    v46 = sub_403230(&wc, &s[v21 + v44], v66 - (v21 + v44), &ps);
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
                return sub_401750(v9, v10, s);
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
                return sub_401750(v9, v10, s);
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
  return sub_401750(v9, v10, s);
}

unsigned __int64 __fastcall sub_401750(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v28; // rax
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
  const char *v42; // rax
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
  const char *s2; // [rsp+48h] [rbp-70h]
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
        a8 = sub_401650("`", v55);
        v28 = sub_401650("'", v55);
        v16 = v57;
        v15 = v55;
        a9 = (char *)v28;
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
        return sub_401750(v9, v10, s);
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
              return sub_401750(v9, v10, s);
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
      return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
        return sub_401750(v9, v10, s);
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
    v46 = sub_403230(&wc, &s[v21 + v44], v66 - (v21 + v44), &ps);
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
                return sub_401750(v9, v10, s);
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
                return sub_401750(v9, v10, s);
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
  return sub_401750(v9, v10, s);
}

_BYTE *__fastcall sub_402760(signed int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6061B8;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6061D0 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( off_6061B8 == &xmmword_6061C0 )
    {
      v19 = (__int128 *)sub_403020(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      off_6061B8 = v19;
      *v19 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6061C0);
    }
    else
    {
      v10 = (__int128 *)sub_403020(off_6061B8, v9);
      v11 = (unsigned int)(a1 + 1);
      off_6061B8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_6061D0], 0, 16 * (v11 - (unsigned int)dword_6061D0));
    dword_6061D0 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v21 = *v12;
  v14 = sub_401750(v13, *v12, v20, v4, *(_DWORD *)v5, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v21 <= v14 )
  {
    v15 = v14 + 1;
    *v12 = v14 + 1;
    if ( v13 != (_BYTE *)&unk_606240 )
    {
      v22 = v14 + 1;
      free(v13);
      v15 = v22;
    }
    v16 = (_BYTE *)sub_402FD0(v15);
    v17 = *(_DWORD *)v5;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_401750(v16, v15, v20, v4, v17, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_402760(signed int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6061B8;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6061D0 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( off_6061B8 == &xmmword_6061C0 )
    {
      v19 = (__int128 *)sub_403020(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      off_6061B8 = v19;
      *v19 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6061C0);
    }
    else
    {
      v10 = (__int128 *)sub_403020(off_6061B8, v9);
      v11 = (unsigned int)(a1 + 1);
      off_6061B8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_6061D0], 0, 16 * (v11 - (unsigned int)dword_6061D0));
    dword_6061D0 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v21 = *v12;
  v14 = sub_401750(v13, *v12, v20, v4, *(_DWORD *)v5, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v21 <= v14 )
  {
    v15 = v14 + 1;
    *v12 = v14 + 1;
    if ( v13 != (_BYTE *)&unk_606240 )
    {
      v22 = v14 + 1;
      free(v13);
      v15 = v22;
    }
    v16 = (_BYTE *)sub_402FD0(v15);
    v17 = *(_DWORD *)v5;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_401750(v16, v15, v20, v4, v17, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_402C80(signed int a1, int a2, char *a3)
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
  return sub_402760(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_402C80(signed int a1, int a2, char *a3)
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
  return sub_402760(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_402CF0(signed int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_402760(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_402CF0(signed int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_402760(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_402D80(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_606370;
  v7 = _mm_load_si128((const __m128i *)&xmmword_606340);
  v8 = _mm_load_si128((const __m128i *)&xmmword_606350);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_606360);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_402760(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_402E00(char *a1)
{
  return sub_402D80(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_402E30(signed int a1, int a2, char *a3)
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
  return sub_402760(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_402E30(signed int a1, int a2, char *a3)
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
  return sub_402760(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_402EA0(signed int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_606340);
  v7 = _mm_load_si128((const __m128i *)&xmmword_606350);
  v8 = _mm_load_si128((const __m128i *)&xmmword_606360);
  v9 = qword_606370;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_402760(a1, a4, a5, (__int64)&v6);
}

void *__fastcall sub_402FD0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_4031F0();
  }
  return result;
}

void *__fastcall sub_403020(void *a1, size_t a2)
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
        sub_4031F0();
    }
  }
  return result;
}

void *__fastcall sub_403170(size_t a1, size_t a2)
{
  void *result; // rax

  result = calloc(a1, a2);
  if ( !result )
    sub_4031F0();
  return result;
}

void *__fastcall sub_403190(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_402FD0(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_4031C0(void *src)
{
  size_t v1; // rax
  size_t v2; // rbx
  void *v3; // rax

  v1 = strlen((const char *)src);
  v2 = v1 + 1;
  v3 = sub_402FD0(v1 + 1);
  return memcpy(v3, src, v2);
}

noreturn void  sub_4031F0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

size_t __fastcall sub_403230(wchar_t *a1, const char *a2, size_t a3, mbstate_t *a4)
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

int __fastcall sub_403260(FILE *stream)
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

const char *sub_4032D0()
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
          v1 = "\"" + 1;
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
                v1 = "\"" + 1;
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
        v1 = "\"" + 1;
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

int __fastcall sub_4038B0(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_606168 )
    v1 = (void *)unk_606168;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_4038C8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_605E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
