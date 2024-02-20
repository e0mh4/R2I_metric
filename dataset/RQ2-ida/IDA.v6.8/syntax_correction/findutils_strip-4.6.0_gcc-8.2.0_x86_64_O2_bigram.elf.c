#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(__int64 a1, char **a2, char **a3)
{
  char *v3; // rdi@1
  size_t v4; // r12@5
  char *v5; // rax@5
  char *v6; // rax@5
  char *v7; // rbp@5
  int v8; // eax@6
  char *v9; // rdx@7
  int v10; // edi@7
  char *v11; // rcx@9
  char *v12; // rax@9
  __int64 v13; // rbx@12
  __int64 v14; // rax@12
  signed __int64 v15; // r13@14
  signed __int64 v16; // rbx@15
  size_t v17; // rax@18
  char *v19; // rbx@4
  int *v20; // rax@4
  char *v21; // [sp+0h] [bp-38h]@5
  size_t n; // [sp+8h] [bp-30h]@5

  v3 = *a2;
  if ( !*a2 )
    v3 = "bigram";
  sub_4015B0(v3, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "findutils",
    "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("findutils");
  if ( sub_4038B0(
         sub_401510,
         "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale") )
  {
    v19 = dcgettext(0LL, "The atexit library function failed", 5);
    v20 = __errno_location();
    error(1, *v20, v19);
  }
  v4 = 1026LL;
  n = 1026LL;
  LODWORD(v5) = sub_402FD0(1026LL);
  v21 = v5;
  LODWORD(v6) = sub_402FD0(1026LL);
  *v6 = 0;
  v7 = v6;
  while ( 1 )
  {
    v8 = __getdelim(&v21, &n, 10, stdin);
    if ( v8 <= 0 )
      break;
    v21[v8 - 1] = 0;
    v9 = v21;
    v10 = *v21;
    if ( *v7 && *v7 == (_BYTE)v10 )
    {
      v11 = v21;
      v12 = v7;
      do
      {
        ++v12;
        ++v11;
      }
      while ( *v11 == *v12 && *v12 );
      LODWORD(v14) = (_DWORD)v12 - (_DWORD)v7;
      v13 = (signed int)v14;
      v14 = (signed int)v14;
      v10 = v21[(signed int)v14];
    }
    else
    {
      v14 = 0LL;
      v13 = 0LL;
    }
    if ( (_BYTE)v10 )
    {
      v15 = v14 + 1;
      if ( v21[v14 + 1] )
      {
        v16 = v13 + 2;
        do
        {
          _IO_putc(v10, stdout);
          _IO_putc(v21[v15], stdout);
          _IO_putc(10, stdout);
          v9 = v21;
          v10 = v21[v16];
          if ( !v21[v16] )
            break;
          v15 = v16 + 1;
          v16 += 2LL;
        }
        while ( v21[v15] );
      }
    }
    v17 = n;
    v21 = v7;
    v7 = v9;
    n = v4;
    v4 = v17;
  }
  free(v21);
  free(v7);
  return 0LL;
}

signed int sub_40143B()
{
  return 6316504;
}

int sub_40145A()
{
  return 0;
}

signed int sub_401491()
{
  signed int result; // eax@4

  if ( !byte_606208 )
  {
    while ( qword_606210 < (unsigned __int64)(((&unk_605E48 - (_UNKNOWN *)&qword_605E40) >> 3) - 1) )
      (*(&qword_605E40 + ++qword_606210))();
    result = sub_40143B();
    byte_606208 = 1;
  }
  return result;
}

int sub_4014E8()
{
  return sub_40145A();
}

__int64 sub_401510()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_402E00(qword_606220, "write error");
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
  qword_606228 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_401650(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  const char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  LODWORD(v4) = sub_4032D0(0LL);
  if ( (*(_BYTE *)v4 & 0xDF) == 85 )
  {
    if ( (*(_BYTE *)(v4 + 1) & 0xDF) == 84
      && (*(_BYTE *)(v4 + 2) & 0xDF) == 70
      && *(_BYTE *)(v4 + 3) == 45
      && *(_BYTE *)(v4 + 4) == 56
      && !*(_BYTE *)(v4 + 5) )
    {
      v5 = *v2 == 96;
      v2 = "‘";
      if ( !v5 )
        v2 = "’";
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
    v2 = "�\ae";
    if ( !v5 )
      v2 = "��";
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_401750(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
        a8 = sub_401650("`", v68);
        v33 = sub_401650("'", v68);
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
        return sub_401750(v9, v10, s);
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
              return sub_401750(v9, v10, s);
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
          goto LABEL_118;
        case 39:
LABEL_73:
          v14 = 0;
          LOBYTE(v31) = 39;
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
            return sub_401750(v9, v10, s);
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
              return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
        case 13:
          LOBYTE(v31) = 13;
          v39 = 114;
LABEL_130:
          LOBYTE(v14) = v20 == 2;
          v71 = v20 == 2 && v82;
          if ( v71 )
            return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
        return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
    LODWORD(v59) = sub_403230(&wc, &s[v21] + v57, v75 - (v21 + v57), &ps);
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
  return sub_401750(v9, v10, s);
}

unsigned __int64 __fastcall sub_401750(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
        a8 = sub_401650("`", v68);
        v33 = sub_401650("'", v68);
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
        return sub_401750(v9, v10, s);
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
              return sub_401750(v9, v10, s);
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
          goto LABEL_118;
        case 39:
LABEL_73:
          v14 = 0;
          LOBYTE(v31) = 39;
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
            return sub_401750(v9, v10, s);
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
              return sub_401750(v9, v10, s);
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
          return sub_401750(v9, v10, s);
        case 13:
          LOBYTE(v31) = 13;
          v39 = 114;
LABEL_130:
          LOBYTE(v14) = v20 == 2;
          v71 = v20 == 2 && v82;
          if ( v71 )
            return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
        return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
            return sub_401750(v9, v10, s);
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
    LODWORD(v59) = sub_403230(&wc, &s[v21] + v57, v75 - (v21 + v57), &ps);
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
  return sub_401750(v9, v10, s);
}

_BYTE *__fastcall sub_402760(unsigned int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6061B8;
  v8 = v6;
  v23 = *v6;
  if ( (a1 & 0x80000000) != 0 )
    abort();
  if ( dword_6061D0 <= a1 )
  {
    v9 = 16LL * (a1 + 1);
    if ( off_6061B8 == &xmmword_6061C0 )
    {
      LODWORD(v21) = sub_403020(0LL, v9);
      v11 = a1 + 1;
      v7 = v21;
      off_6061B8 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6061C0);
    }
    else
    {
      LODWORD(v10) = sub_403020(off_6061B8, v9);
      v11 = a1 + 1;
      off_6061B8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_6061D0], 0, 16 * (v11 - (unsigned int)dword_6061D0));
    dword_6061D0 = a1 + 1;
  }
  v12 = (signed __int64)&v7[a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_401750(
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
    if ( (_UNKNOWN *)v13 != &unk_606240 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_402FD0(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_401750(v18, v16, v22, v4, v19, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_402760(unsigned int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_6061B8;
  v8 = v6;
  v23 = *v6;
  if ( (a1 & 0x80000000) != 0 )
    abort();
  if ( dword_6061D0 <= a1 )
  {
    v9 = 16LL * (a1 + 1);
    if ( off_6061B8 == &xmmword_6061C0 )
    {
      LODWORD(v21) = sub_403020(0LL, v9);
      v11 = a1 + 1;
      v7 = v21;
      off_6061B8 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6061C0);
    }
    else
    {
      LODWORD(v10) = sub_403020(off_6061B8, v9);
      v11 = a1 + 1;
      off_6061B8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_6061D0], 0, 16 * (v11 - (unsigned int)dword_6061D0));
    dword_6061D0 = a1 + 1;
  }
  v12 = (signed __int64)&v7[a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_401750(
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
    if ( (_UNKNOWN *)v13 != &unk_606240 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_402FD0(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_401750(v18, v16, v22, v4, v19, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_402D80(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_606370;
  v4 = _mm_load_si128((const __m128i *)&xmmword_606340);
  v5 = _mm_load_si128((const __m128i *)&xmmword_606350);
  v6 = _mm_load_si128((const __m128i *)&xmmword_606360);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_402760(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_402E00(char *a1)
{
  return sub_402D80(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

void *__fastcall sub_402FD0(size_t a1)
{
  void *result; // rax@1

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
        sub_4031F0();
    }
  }
  return result;
}

void *__fastcall sub_403190(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_402FD0(a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_4031F0()
{
  char *v0; // rax@1

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
    a2 = "\"" + 1;
    a1 = 0LL;
  }
  return mbrtowc(a1, a2, a3, a4);
}

int __fastcall sub_403260(FILE *stream)
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

const char *sub_4032D0()
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
          v1 = "\"" + 1;
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
                v1 = "\"" + 1;
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
        v1 = "\"" + 1;
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

int __fastcall sub_4038B0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_606168 )
    v1 = unk_606168;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_4038C8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_605E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
