#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, const char **a2, char **a3)
{
  const char *v3; // rdi
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
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  size_t n[6]; // [rsp+8h] [rbp-30h] BYREF

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
  n[0] = 1026LL;
  ptr = (void *)sub_402FD0(1026LL);
  v5 = (_BYTE *)sub_402FD0(1026LL);
  *v5 = 0;
  v6 = v5;
  while ( 1 )
  {
    v7 = __getdelim((char **)&ptr, n, 10, stdin);
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
    v16 = n[0];
    ptr = v6;
    v6 = v8;
    n[0] = v4;
    v4 = v16;
  }
  free(ptr);
  free(v6);
  return 0LL;
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

void *sub_40143B()
{
  return &unk_6061D8;
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

// attributes: thunk
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
  const char *v4; // rbp
  const char *v5; // rax

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
        v5 = (const char *)sub_402E00();
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
        return (const char *)&unk_403A06;
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
      return (const char *)&unk_403A0A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return v6;
}

unsigned __int64 __fastcall sub_401750(
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
        a8 = sub_401650("`", a5);
        v28 = (char *)sub_401650("'", a5);
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
            return sub_401750((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
            v51 = sub_403230(&wc, a3 + v21 + v49, v76 - (v21 + v49), &ps);
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
  return sub_401750((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
}

unsigned __int64 __fastcall sub_401750(
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
        a8 = sub_401650("`", a5);
        v28 = (char *)sub_401650("'", a5);
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
            return sub_401750((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
            v51 = sub_403230(&wc, a3 + v21 + v49, v76 - (v21 + v49), &ps);
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
  return sub_401750((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
}

_BYTE *__fastcall sub_402760(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_6061D0 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( ptr == &xmmword_6061C0 )
    {
      v19 = (__m128i *)sub_403020(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      ptr = v19;
      *v19 = _mm_load_si128((const __m128i *)&xmmword_6061C0);
    }
    else
    {
      v10 = (__m128i *)sub_403020(ptr, v9);
      v11 = (unsigned int)(a1 + 1);
      ptr = v10;
      v7 = v10;
    }
    memset(&v7[dword_6061D0], 0, 16 * (v11 - (unsigned int)dword_6061D0));
    dword_6061D0 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(a4 + 4) | 1;
  v21 = *v12;
  v14 = sub_401750(v13, *v12, a2, a3, *(_DWORD *)a4, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
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
    v17 = *(_DWORD *)a4;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_401750(v16, v15, a2, a3, v17, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_402760(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_6061D0 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( ptr == &xmmword_6061C0 )
    {
      v19 = (__m128i *)sub_403020(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      ptr = v19;
      *v19 = _mm_load_si128((const __m128i *)&xmmword_6061C0);
    }
    else
    {
      v10 = (__m128i *)sub_403020(ptr, v9);
      v11 = (unsigned int)(a1 + 1);
      ptr = v10;
      v7 = v10;
    }
    memset(&v7[dword_6061D0], 0, 16 * (v11 - (unsigned int)dword_6061D0));
    dword_6061D0 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(a4 + 4) | 1;
  v21 = *v12;
  v14 = sub_401750(v13, *v12, a2, a3, *(_DWORD *)a4, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
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
    v17 = *(_DWORD *)a4;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_401750(v16, v15, a2, a3, v17, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v23;
  return v13;
}

__int64 __fastcall sub_402900(__int128 *a1)
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
    v1 = &xmmword_606340;
  result = sub_403190(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_4029F0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_606340;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_401750(
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

_BYTE *__fastcall sub_402A70(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_606340;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_401750(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_402FD0(v11 + 1);
  sub_401750(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_402B70()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( (unsigned int)dword_6061D0 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_6061D0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_606240 )
  {
    free(v4);
    *(_QWORD *)&xmmword_6061C0 = 256LL;
    *((_QWORD *)&xmmword_6061C0 + 1) = &unk_606240;
  }
  if ( v0 != &xmmword_6061C0 )
  {
    free(v0);
    ptr = &xmmword_6061C0;
  }
  dword_6061D0 = 1;
}

_BYTE *__fastcall sub_402C80(int a1, int a2, __int64 a3)
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
  return sub_402760(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_402C80(int a1, int a2, __int64 a3)
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
  return sub_402760(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_402CF0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_402760(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_402CF0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_402760(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_402D80(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_606370;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_606340);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_606350);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_606360);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_402760(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_402E00(__int64 a1)
{
  return sub_402D80(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_402E30(int a1, int a2, __int64 a3)
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
  return sub_402760(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_402E30(int a1, int a2, __int64 a3)
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
  return sub_402760(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_402EA0(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_606340);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_606350);
  si128 = _mm_load_si128((const __m128i *)&xmmword_606360);
  v8 = qword_606370;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_402760(a1, a4, a5, (__int64)v6);
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

// attributes: thunk
void *__fastcall sub_403010(size_t a1)
{
  return sub_402FD0(a1);
}

void *__fastcall sub_403020(void *a1, size_t a2)
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
        sub_4031F0();
    }
  }
  return result;
}

void *__fastcall sub_403150(size_t n)
{
  void *v1; // rax

  v1 = sub_402FD0(n);
  return memset(v1, 0, n);
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

void *__fastcall sub_4031C0(const char *src)
{
  size_t v1; // rbx
  void *v2; // rax

  v1 = strlen(src) + 1;
  v2 = sub_402FD0(v1);
  return memcpy(v2, src, v1);
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
    return -1;
  }
  if ( !result )
    return result;
  if ( v1 )
    return -1;
  return -(*__errno_location() != 9);
}

const char *sub_4032D0()
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

int __fastcall sub_4038B0(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_606168 )
    v1 = (void *)qword_606168;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_4038C8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_605E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
