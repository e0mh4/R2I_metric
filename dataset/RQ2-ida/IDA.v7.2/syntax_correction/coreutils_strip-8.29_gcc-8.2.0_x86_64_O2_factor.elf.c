#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // eax
  __int64 v4; // r12
  int v5; // er13
  __int64 v7; // [rsp+0h] [rbp-38h]
  void *ptr; // [rsp+8h] [rbp-30h]

  sub_404760(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  if ( !buf )
  {
    buf = (void *)sub_407EE0(1024LL);
    qword_613308 = (__int64)buf;
  }
  sub_40BC60(sub_4045F0);
  sub_40BC60(sub_4023D0);
  while ( 1 )
  {
    v3 = sub_408F40((unsigned int)a1, a2, "", &off_40F260, 0LL);
    if ( v3 == -1 )
      break;
    if ( v3 == -130 )
      sub_4042E0(0);
    if ( v3 != 128 )
    {
      if ( v3 != -131 )
        sub_4042E0(1);
      sub_405150("Niels Moller", aNielsM);
      sub_405150("Torbjorn Granlund", aTorbj);
      sub_407DA0((char)stdout);
      exit(0);
    }
    byte_613310 = 1;
  }
  v4 = dword_6132BC;
  if ( dword_6132BC >= a1 )
  {
    v5 = 1;
    sub_406F70(&v7);
    while ( sub_406F80(stdin) != -1 )
      v5 &= sub_404170(ptr);
    free(ptr);
  }
  else
  {
    LOBYTE(v5) = 1;
    do
    {
      if ( !(unsigned __int8)sub_404170(a2[v4]) )
        LOBYTE(v5) = 0;
      ++v4;
    }
    while ( a1 > (int)v4 );
  }
  return (unsigned __int8)v5 ^ 1u;
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

__int64 *sub_401C6B()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_401C8A()
{
  return 0LL;
}

__int64 *sub_401CC1()
{
  __int64 *result; // rax

  if ( !byte_6132E8 )
  {
    while ( qword_6132F0 < (unsigned __int64)(&qword_612E48 - qword_612E40 - 1) )
      ((void (*)(void))qword_612E40[++qword_6132F0])();
    result = sub_401C6B();
    byte_6132E8 = 1;
  }
  return result;
}

__int64 sub_401D18()
{
  return sub_401C8A();
}

unsigned __int64 __fastcall sub_401D20(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = a2;
  if ( !(a2 & 1) )
  {
    result = a1;
    a1 = a2;
  }
  if ( a1 )
  {
    v3 = result >> 1;
    while ( 1 )
    {
      v4 = a1 >> 1;
      if ( a1 & 1 )
      {
        v5 = v4 - v3;
        if ( !v5 )
          return a1 | 1;
        v3 += (v5 >> 63) & v5;
        v4 = abs64(v5);
      }
      a1 = v4;
    }
  }
  return result;
}

void __fastcall sub_401D80(__int64 a1, unsigned __int64 a2, char a3)
{
  _BYTE *v3; // r13
  unsigned __int64 *v4; // r12
  char v5; // bp
  int v6; // ebx
  __int64 v7; // r8
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  int v10; // eax
  __int64 i; // r10
  __int64 v12; // r10

  v3 = (_BYTE *)(a1 + 224);
  v4 = (unsigned __int64 *)(a1 + 16);
  v5 = *(_BYTE *)(a1 + 250);
  v6 = *(unsigned __int8 *)(a1 + 250) - 1;
  if ( !*(_BYTE *)(a1 + 250) )
    goto LABEL_10;
  v7 = v6;
  v8 = v4[v6];
  if ( a2 < v8 )
  {
    v9 = v6 - 1LL;
    v10 = *(unsigned __int8 *)(a1 + 250) - 1;
    for ( i = v6 - 1LL; ; --i )
    {
      if ( --v10 == -1 )
        goto LABEL_9;
      if ( *(_QWORD *)(a1 + 8 * (i - 1) + 24) <= a2 )
        break;
    }
    if ( *(_QWORD *)(a1 + 8 * (i - 1) + 24) == a2 )
      goto LABEL_16;
    v12 = i + 1;
    v4 += v12;
    v3 += v12;
    if ( v6 > v10 )
    {
LABEL_9:
      while ( 1 )
      {
        *(_QWORD *)(a1 + 8 * v7 + 24) = v8;
        *(_BYTE *)(a1 + v7 + 225) = *(_BYTE *)(a1 + v7 + 224);
        v7 = v9;
        if ( v10 >= (int)v9 )
          break;
        v8 = *(_QWORD *)(a1 + 8 * v9-- + 16);
      }
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  if ( a2 != v8 )
  {
    v4 += v6 + 1;
    v3 += v6 + 1;
LABEL_10:
    *v4 = a2;
    *v3 = a3;
    *(_BYTE *)(a1 + 250) = v5 + 1;
    return;
  }
  i = v6;
LABEL_16:
  v3[i] += a3;
}

__int64 __fastcall sub_401E60(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx

  v5 = a3;
  if ( !(a2 & 1) )
    goto LABEL_9;
  a5 = a1;
  do
  {
    while ( 1 )
    {
      v6 = ((unsigned __int64)a1 * (unsigned __int128)(unsigned __int64)a1) >> 64;
      v7 = (v5 * (unsigned __int128)(unsigned __int64)(a4 * a1 * a1)) >> 64;
      a1 = v6 - v7;
      if ( v6 < v7 )
        a1 += v5;
      a2 >>= 1;
      if ( !(a2 & 1) )
        break;
      v8 = ((unsigned __int64)a1 * (unsigned __int128)(unsigned __int64)a5) >> 64;
      v9 = (v5 * (unsigned __int128)(unsigned __int64)(a4 * a1 * a5)) >> 64;
      a5 = v8 - v9;
      if ( v8 < v9 )
        a5 += v5;
    }
LABEL_9:
    ;
  }
  while ( a2 );
  return a5;
}

__int64 __fastcall sub_401ED0(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r12
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r11
  unsigned int v11; // er8
  int v12; // esi
  unsigned __int128 v13; // ax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx

  v6 = a6;
  v7 = a5;
  v8 = a2;
  v9 = sub_401E60(a3, a4, a1, a2, a6);
  LOBYTE(v11) = v9 == v10 - v6 || v6 == v9;
  if ( !(_BYTE)v11 && v7 > 1 )
  {
    v12 = 1;
    while ( 1 )
    {
      v13 = (unsigned __int64)v9 * (unsigned __int128)(unsigned __int64)v9;
      v14 = *((_QWORD *)&v13 + 1);
      v15 = (v10 * (unsigned __int128)(unsigned __int64)(v8 * v13)) >> 64;
      v9 = v14 - v15;
      if ( v14 < v15 )
        v9 = v14 - v15 + v10;
      if ( v10 - v6 == v9 )
        break;
      if ( v6 != v9 && v7 != ++v12 )
        continue;
      return v11;
    }
    v11 = 1;
  }
  return v11;
}

__int64 __fastcall sub_401F60(_QWORD *a1, signed __int64 a2, unsigned __int64 a3, signed __int64 a4, unsigned __int64 a5, signed __int64 a6, unsigned __int64 a7, __int64 a8)
{
  __int64 v8; // rbx
  unsigned __int128 v9; // kr10_16
  unsigned __int128 v10; // kr20_16
  unsigned __int64 v11; // rbx
  unsigned __int128 v12; // ax

  v8 = -a8;
  if ( a2 < 0 )
    __assert_fail("(a1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 0x3E7u, "mulredc2");
  if ( a4 < 0 )
    __assert_fail("(b1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 0x3E8u, "mulredc2");
  if ( a6 < 0 )
    __assert_fail("(m1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 0x3E9u, "mulredc2");
  v9 = (unsigned __int64)a6 * (unsigned __int128)(a5 * a3 * v8)
     + __PAIR128__(((unsigned __int64)a4 * (unsigned __int128)a3) >> 64, (a7 * (unsigned __int128)(a5 * a3 * v8)) >> 64)
     + (a5 * a3 != 0)
     + a4 * a3
     + ((a5 * (unsigned __int128)a3) >> 64);
  v10 = (unsigned __int64)v9 + a5 * (unsigned __int128)(unsigned __int64)a2;
  v11 = v10 * v8;
  v12 = (unsigned __int64)a6 * (unsigned __int128)v11
      + __PAIR128__(
          (*((unsigned __int64 *)&v9 + 1) + (unsigned __int64)a4 * (unsigned __int128)(unsigned __int64)a2) >> 64,
          (a7 * (unsigned __int128)v11) >> 64)
      + *((_QWORD *)&v9 + 1)
      + a4 * a2
      + (unsigned __int64)((_QWORD)v10 != 0LL)
      + *((unsigned __int64 *)&v10 + 1);
  if ( __PAIR128__(a6, a7) <= (unsigned __int64)a6 * (unsigned __int128)v11
                            + __PAIR128__(
                                (*((unsigned __int64 *)&v9 + 1)
                               + (unsigned __int64)a4 * (unsigned __int128)(unsigned __int64)a2) >> 64,
                                (a7 * (unsigned __int128)v11) >> 64)
                            + *((_QWORD *)&v9 + 1)
                            + a4 * a2
                            + (unsigned __int64)((_QWORD)v10 != 0LL)
                            + *((unsigned __int64 *)&v10 + 1) )
    v12 = (unsigned __int64)a6 * (unsigned __int128)v11
        + __PAIR128__(
            (*((unsigned __int64 *)&v9 + 1) + (unsigned __int64)a4 * (unsigned __int128)(unsigned __int64)a2) >> 64,
            (a7 * (unsigned __int128)v11) >> 64)
        + *((_QWORD *)&v9 + 1)
        + a4 * a2
        + (unsigned __int64)((_QWORD)v10 != 0LL)
        + *((unsigned __int64 *)&v10 + 1)
        - __PAIR128__(a6, a7);
  *a1 = *((_QWORD *)&v12 + 1);
  return v12;
}

__int64 __fastcall sub_4020D0(signed __int64 *a1, unsigned __int64 *a2, _QWORD *a3, unsigned __int64 *a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // r15
  int v7; // ebp
  unsigned __int64 v8; // r10
  signed __int64 v9; // r11
  unsigned __int64 v10; // r13
  signed __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 i; // rbp
  __int64 v15; // rax
  signed __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  signed __int64 v19; // [rsp+18h] [rbp-50h]
  signed __int64 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+20h] [rbp-48h]
  _QWORD *v23; // [rsp+28h] [rbp-40h]

  v6 = a5;
  v7 = 64;
  v8 = *a2;
  v9 = a2[1];
  v10 = *a4;
  v23 = a3;
  v11 = a4[1];
  v12 = *a3;
  v18 = *a6;
  v17 = a6[1];
  do
  {
    if ( v12 & 1 )
    {
      v19 = v9;
      v21 = v8;
      v18 = sub_401F60(a1, v17, v18, v9, v8, v11, v10, v6);
      v17 = *a1;
      v8 = v21;
      v9 = v19;
    }
    v12 >>= 1;
    v13 = sub_401F60(a1, v9, v8, v9, v8, v11, v10, v6);
    v9 = *a1;
    v8 = v13;
    --v7;
  }
  while ( v7 );
  for ( i = v23[1]; i; v8 = v15 )
  {
    if ( i & 1 )
    {
      v22 = v8;
      v20 = v9;
      v18 = sub_401F60(a1, v17, v18, v9, v8, v11, v10, v6);
      v17 = *a1;
      v8 = v22;
      v9 = v20;
    }
    v15 = sub_401F60(a1, v9, v8, v9, v8, v11, v10, v6);
    i >>= 1;
    v9 = *a1;
  }
  *a1 = v17;
  return v18;
}

_BOOL8 __fastcall sub_402240(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3, _QWORD *a4, unsigned int a5, __int64 *a6)
{
  unsigned int v6; // er13
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // rax
  signed __int64 v10; // rsi
  signed __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int128 v13; // kr00_16
  int v14; // er15
  bool v16; // [rsp+Fh] [rbp-49h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v6 = a5;
  v7 = a2;
  v8 = a6;
  v9 = sub_4020D0((signed __int64 *)&v17, a3, a4, a1, a2, a6);
  v10 = v17;
  if ( *v8 != v9 || v8[1] != v17 )
  {
    v11 = a1[1];
    v12 = *a1;
    v13 = *(_OWORD *)a1 - *(_OWORD *)v8;
    v16 = v17 == *((_QWORD *)&v13 + 1) && v9 == (_QWORD)v13;
    if ( !v16 )
    {
      v14 = 1;
      if ( v6 <= 1 )
        return v16;
      while ( 1 )
      {
        v9 = sub_401F60(&v17, v10, v9, v10, v9, v11, v12, v7);
        v10 = v17;
        if ( v13 == __PAIR128__(v17, v9) )
          break;
        if ( *v8 == v9 && v8[1] == v17 )
          return v16;
        if ( v6 == ++v14 )
          return v16;
        v12 = *a1;
        v11 = a1[1];
      }
    }
  }
  return 1;
}

char *__fastcall sub_402340(__int64 a1, size_t a2)
{
  _BYTE *v2; // rax
  size_t v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  _BYTE *v6; // rdx
  __int64 v7; // rcx
  void *v8; // r8
  char *result; // rax
  __int64 v10; // [rsp+0h] [rbp-38h]

  v2 = (_BYTE *)sub_404710(a1, &v10);
  v3 = 20 - (v2 - (_BYTE *)&v10);
  if ( v3 >= a2 )
  {
    v8 = (void *)qword_613308;
  }
  else
  {
    v4 = qword_613308;
    v5 = v2 - (_BYTE *)&v10 - 20;
    v6 = (_BYTE *)qword_613308;
    v7 = v5 + a2 + qword_613308;
    do
      *v6++ = 48;
    while ( v6 != (_BYTE *)v7 );
    v8 = (void *)(v4 + a2 + v5);
  }
  result = (char *)memcpy(v8, v2, v3);
  qword_613308 = (__int64)&result[v3];
  return result;
}

void *sub_4023D0()
{
  __int64 v0; // rbx
  void *result; // rax
  char *v2; // rbx
  int *v3; // rax

  v0 = qword_613308 - (_QWORD)buf;
  if ( sub_404690(1, buf, qword_613308 - (_QWORD)buf) == v0 )
  {
    result = buf;
    qword_613308 = (__int64)buf;
  }
  else
  {
    v2 = dcgettext(0LL, "write error", 5);
    v3 = __errno_location();
    error(1, *v3, "%s", v2);
    result = (void *)sub_402440();
  }
  return result;
}

void __fastcall sub_402440(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( a2 )
  {
    if ( a1[1] )
      __assert_fail("factors->plarge[1] == 0", "src/factor.c", 0x235u, "factor_insert_large");
    *a1 = a3;
    a1[1] = a2;
  }
  else
  {
    sub_401D80((__int64)a1, a3, 1);
  }
}

unsigned __int64 __fastcall sub_402490(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  bool v7; // al
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 result; // rax

  if ( !(a5 & 1) )
    __assert_fail("b0 & 1", "src/factor.c", 0x1E3u, "gcd2_odd");
  v5 = a2;
  if ( a2 | a3 )
  {
    while ( !(a3 & 1) )
    {
      v6 = v5 << 63;
      v5 >>= 1;
      a3 = v6 | (a3 >> 1);
    }
    while ( a4 | v5 )
    {
      while ( v5 <= a4 )
      {
        v7 = v5 == a4;
        if ( a3 > a5 && v7 )
          break;
        if ( v5 >= a4 && (a3 >= a5 || !v7) )
        {
          *a1 = v5;
          return a3;
        }
        a4 = (__PAIR128__(a4, a5) - __PAIR128__(v5, a3)) >> 64;
        a5 -= a3;
        do
        {
          v8 = a4 << 63;
          a4 >>= 1;
          a5 = v8 | (a5 >> 1);
        }
        while ( !(a5 & 1) );
        if ( !(a4 | v5) )
          goto LABEL_16;
      }
      v5 = (__PAIR128__(v5, a3) - __PAIR128__(a4, a5)) >> 64;
      a3 -= a5;
      do
      {
        v9 = v5 << 63;
        v5 >>= 1;
        a3 = v9 | (a3 >> 1);
      }
      while ( !(a3 & 1) );
    }
LABEL_16:
    *a1 = 0LL;
    result = sub_401D20(a5, a3);
  }
  else
  {
    *a1 = a4;
    result = a5;
  }
  return result;
}

unsigned __int64 __fastcall sub_402590(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  int v8; // er10
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  int v11; // edx
  unsigned __int64 v12; // rcx

  if ( !a4 )
    __assert_fail("d1 != 0", "src/factor.c", 0x1A3u, "mod2");
  result = a3;
  if ( a2 )
  {
    _BitScanReverse64((unsigned __int64 *)&v6, a4);
    _BitScanReverse64((unsigned __int64 *)&v7, a2);
    v8 = (v6 ^ 0x3F) - (v7 ^ 0x3F);
    v9 = (a4 << v8) | (a5 >> (64 - (unsigned __int8)v8));
    v10 = a5 << v8;
    if ( v8 > 0 )
    {
      v11 = 0;
      do
      {
        if ( v9 < a2 || v9 == a2 && result >= v10 )
        {
          a2 = (__PAIR128__(a2, result) - __PAIR128__(v9, v10)) >> 64;
          result -= v10;
        }
        ++v11;
        v12 = v9 << 63;
        v9 >>= 1;
        v10 = v12 | (v10 >> 1);
      }
      while ( v8 != v11 );
    }
    *a1 = a2;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}

char *__fastcall sub_402640(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  int v3; // er9
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r10
  __int64 v11; // [rsp+0h] [rbp-10h]

  v2 = a2;
  if ( !a1 )
    return sub_402340(a2, 0LL);
  v3 = 64;
  v4 = 0LL;
  v5 = 1000000000LL;
  v6 = a1 / 0x3B9ACA00;
  v7 = a1 % 0x3B9ACA00;
  v8 = 0LL;
  do
  {
    v4 *= 2LL;
    v9 = v5 << 63;
    v5 >>= 1;
    v8 = v9 | (v8 >> 1);
    if ( v5 < v7 || v5 == v7 && v8 <= v2 )
    {
      ++v4;
      v7 = (__PAIR128__(v7, v2) - __PAIR128__(v5, v8)) >> 64;
      v2 -= v8;
    }
    --v3;
  }
  while ( v3 );
  v11 = v2;
  sub_402640(v6, v4);
  return sub_402340(v11, 9uLL);
}

char *__fastcall sub_4026F0(char a1)
{
  char *result; // rax
  __int64 v2; // rbp
  int v3; // eax
  char *v4; // rbx
  char *v5; // rbx
  size_t v6; // rbp

  result = (char *)qword_613308;
  v2 = qword_613308 + 1;
  *(_BYTE *)qword_613308 = a1;
  qword_613308 = v2;
  if ( a1 == 10 )
  {
    v3 = dword_613230;
    v4 = (char *)buf;
    if ( dword_613230 == -1 )
    {
      v3 = isatty(0);
      dword_613230 = v3;
    }
    if ( v3 )
    {
      result = (char *)sub_4023D0();
    }
    else
    {
      result = (char *)(v2 - (_QWORD)v4);
      v5 = v4 + 512;
      if ( (unsigned __int64)result > 0x1FF )
      {
        while ( *(v5 - 1) != 10 )
          --v5;
        qword_613308 = (__int64)v5;
        v6 = v2 - (_QWORD)v5;
        sub_4023D0();
        result = (char *)memcpy(buf, v5, v6);
        qword_613308 = (__int64)&result[v6];
      }
    }
  }
  return result;
}

void __fastcall sub_4027D0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int128 v28; // ax
  unsigned __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // r11
  __int64 v37; // rcx
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  char v42; // al
  unsigned __int64 v43; // rsi
  __int64 v44; // rdx
  unsigned __int64 v45; // r8
  bool v46; // zf
  char v47; // al
  unsigned __int64 v48; // [rsp+0h] [rbp-68h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  unsigned __int64 v50; // [rsp+10h] [rbp-58h]
  __int64 v51; // [rsp+10h] [rbp-58h]
  unsigned __int64 v52; // [rsp+10h] [rbp-58h]
  __int64 v53; // [rsp+10h] [rbp-58h]
  __int64 v54; // [rsp+18h] [rbp-50h]
  unsigned __int64 v55; // [rsp+18h] [rbp-50h]
  __int64 v56; // [rsp+18h] [rbp-50h]
  unsigned __int64 v57; // [rsp+18h] [rbp-50h]
  unsigned __int64 v58; // [rsp+20h] [rbp-48h]
  __int64 v59; // [rsp+28h] [rbp-40h]

  v48 = a2;
  v49 = a3;
  if ( a1 <= 1 )
LABEL_43:
    __assert_fail("(1) < (n)", "src/factor.c", 0x5C2u, "factor_using_pollard_rho");
  v3 = a1;
  v59 = a2 + 1;
  while ( 2 )
  {
    v4 = v3;
    v5 = 64;
    v6 = 1LL;
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      v9 = v4 << 63;
      v4 >>= 1;
      v7 = v9 | (v7 >> 1);
      if ( __PAIR128__(v4, v7) <= __PAIR128__(v6, v8) )
      {
        v6 = (__PAIR128__(v6, v8) - __PAIR128__(v4, v7)) >> 64;
        v8 -= v7;
      }
      --v5;
    }
    while ( v5 );
    v10 = v8;
    v11 = 2 * v8 - v3;
    v12 = v11 + (v3 & -(__int64)(v3 - v8 > v8));
    if ( v3 <= v48 )
LABEL_36:
      __assert_fail("a < n", "src/factor.c", 0x5C8u, "factor_using_pollard_rho");
    v13 = v11 + (v3 & -(__int64)(v3 - v8 > v8));
    v14 = v11 + (v3 & -(__int64)(v3 - v8 > v8));
    v15 = 1LL;
    v16 = 1LL;
LABEL_9:
    v17 = v15;
    v18 = (unsigned __int8)byte_40C220[(unsigned __int8)v3 >> 1];
    v19 = 2 * v18 - v3 * v18 * v18;
    v20 = 2 * (2 * v19 - v3 * v19 * v19) - v3 * (2 * v19 - v3 * v19 * v19) * (2 * v19 - v3 * v19 * v19);
    v21 = v3 - v48;
    v22 = v48 - v3;
    while ( 1 )
    {
      v23 = (v3 * (unsigned __int128)(v20 * v12 * v12)) >> 64;
      v24 = ((v12 * (unsigned __int128)v12) >> 64) - v23;
      if ( (v12 * (unsigned __int128)v12) >> 64 < v23 )
        v24 += v3;
      v12 = v22 + v24 + (v3 & -(__int64)(v24 < v21));
      v25 = ((v14 - v12 + (v3 & -(__int64)(v14 < v12))) * (unsigned __int128)v10) >> 64;
      v26 = (v3 * (unsigned __int128)(v20 * (v14 - v12 + (v3 & -(__int64)(v14 < v12))) * v10)) >> 64;
      v10 = v25 - v26;
      if ( v25 < v26 )
        v10 += v3;
      if ( (v16 & 0x1F) == 1 )
        break;
LABEL_15:
      if ( !--v16 )
      {
        if ( v17 )
        {
          v27 = v12;
          do
          {
            v28 = (unsigned __int64)v27 * (unsigned __int128)(unsigned __int64)v27;
            v29 = *((_QWORD *)&v28 + 1);
            v30 = *((_QWORD *)&v28 + 1);
            *((_QWORD *)&v28 + 1) = (v3 * (unsigned __int128)(unsigned __int64)(v20 * v28)) >> 64;
            v31 = v30 - *((_QWORD *)&v28 + 1);
            if ( v29 < *((_QWORD *)&v28 + 1) )
              v31 += v3;
            ++v16;
            v27 = v22 + v31 + (v3 & -(__int64)(v31 < v21));
          }
          while ( v17 != v16 );
          v14 = v12;
          v13 = v22 + v31 + (v3 & -(__int64)(v31 < v21));
          v17 *= 2LL;
          v12 = v22 + v31 + (v3 & -(__int64)(v31 < v21));
        }
        else
        {
          v16 = 0LL;
          v13 = v12;
          v17 = 0LL;
          v14 = v12;
        }
      }
    }
    if ( sub_401D20(v10, v3) == 1 )
    {
      v13 = v12;
      goto LABEL_15;
    }
    do
    {
      v32 = (v3 * (unsigned __int128)(v20 * v13 * v13)) >> 64;
      v33 = ((v13 * (unsigned __int128)v13) >> 64) - v32;
      if ( (v13 * (unsigned __int128)v13) >> 64 < v32 )
        v33 += v3;
      v13 = (v3 & -(__int64)(v33 < v21)) + v22 + v33;
      v34 = v3;
      v35 = sub_401D20(v14 - v13 + (v3 & -(__int64)(v14 < v13)), v3);
    }
    while ( v35 == 1 );
    v37 = v36;
    v38 = v35;
    if ( v3 == v35 )
    {
      ++v48;
      ++v59;
      if ( v3 <= 1 )
        goto LABEL_43;
      continue;
    }
    break;
  }
  v39 = v3 / v35;
  v40 = v3 % v38;
  v41 = v3 / v38;
  v3 /= v38;
  if ( v38 <= 1
    || v38 > 0x17DED78
    && (v54 = v37, v50 = v38,
                   v58 = v39,
                   v42 = sub_403840(v38, v34, v40, v37, v41),
                   v38 = v50,
                   v41 = v58,
                   v37 = v54,
                   !v42) )
  {
    v43 = v59;
    v57 = v41;
    v53 = v37;
    sub_4027D0(v38, v59, v49);
    v45 = v57;
    v15 = v53;
    v46 = v57 == 1;
    if ( v57 > 1 )
      goto LABEL_32;
LABEL_39:
    if ( v46 )
      return;
    v13 = 0LL;
    v14 = 0LL;
    v12 = 0LL;
LABEL_35:
    if ( v48 >= v45 )
      goto LABEL_36;
    goto LABEL_9;
  }
  v43 = v38;
  v55 = v41;
  v51 = v37;
  sub_401D80(v49, v38, 1);
  v45 = v55;
  v15 = v51;
  v46 = v55 == 1;
  if ( v55 <= 1 )
    goto LABEL_39;
LABEL_32:
  if ( v45 > 0x17DED78 )
  {
    v56 = v15;
    v52 = v45;
    v47 = sub_403840(v45, v43, v44, v15, v45);
    v15 = v56;
    v45 = v52;
    if ( !v47 )
    {
      v12 %= v52;
      v14 %= v52;
      v13 %= v52;
      goto LABEL_35;
    }
  }
  sub_401D80(v49, v45, 1);
}

void __fastcall sub_402BF0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  bool v10; // cf
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  signed __int64 v14; // rsi
  unsigned __int128 v15; // kr10_16
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int128 v21; // ax
  unsigned __int128 v22; // ax
  unsigned __int64 v23; // rsi
  unsigned __int128 v24; // ax
  signed __int64 v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdx
  __int64 i; // r15
  __int64 v29; // rax
  unsigned __int128 v30; // kr40_16
  unsigned __int128 v31; // kr20_16
  unsigned __int64 v32; // rax
  __int128 v33; // ax
  unsigned __int128 v34; // ax
  unsigned __int64 v35; // rcx
  unsigned __int128 v36; // ax
  unsigned __int64 v37; // rdx
  signed __int64 v38; // rsi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int128 v51; // ax
  __int64 v52; // rcx
  char v53; // al
  unsigned __int64 v54; // rax
  signed __int64 v55; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v56; // [rsp+0h] [rbp-A8h]
  __int64 v57; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v58; // [rsp+10h] [rbp-98h]
  unsigned __int64 v59; // [rsp+18h] [rbp-90h]
  __int64 v60; // [rsp+20h] [rbp-88h]
  unsigned __int64 v61; // [rsp+28h] [rbp-80h]
  unsigned __int64 *v62; // [rsp+30h] [rbp-78h]
  unsigned __int64 v63; // [rsp+48h] [rbp-60h]
  unsigned __int64 v64; // [rsp+50h] [rbp-58h]
  unsigned __int64 v65; // [rsp+58h] [rbp-50h]
  unsigned __int64 v66; // [rsp+60h] [rbp-48h]
  unsigned __int64 v67; // [rsp+68h] [rbp-40h]

  v4 = a2;
  v5 = a1;
  v62 = a4;
  v59 = a3;
  v6 = a1 < 2 ? 127LL : 63LL;
  v7 = a1 < 2;
  v8 = a1 >= 2;
  do
  {
    v9 = v7;
    v7 *= 2LL;
    v8 = (v9 >> 63) | (2 * v8);
    if ( a1 < v8 || a1 == v8 && v7 >= v4 )
    {
      v8 = (__PAIR128__(v8, v7) - __PAIR128__(a1, v4)) >> 64;
      v7 -= v4;
    }
    --v6;
  }
  while ( v6 != -1 );
  v55 = v8;
  v57 = v7;
  v10 = __CFADD__(v7, v7);
  v11 = 2 * v7;
  v12 = v8 + v10 + v8;
  v63 = v12;
  v13 = v11;
  v14 = v12;
  if ( v12 > a1 || v12 == a1 && v4 <= v11 )
  {
    v63 = (__PAIR128__(v12, v11) - __PAIR128__(a1, v4)) >> 64;
    v15 = __PAIR128__(v12, v11) - __PAIR128__(a1, v4);
    v14 = v15 >> 64;
    v13 = v15;
  }
  v64 = v14;
  v65 = v14;
  if ( v4 == 1 && !a1 )
    return;
  v58 = v13;
  v16 = v13;
  v17 = 1LL;
  v60 = 1LL;
  while ( 2 )
  {
    v18 = (unsigned __int8)byte_40C220[(unsigned __int8)v4 >> 1];
    v19 = 2 * (2 * v18 - v4 * v18 * v18) - v4 * (2 * v18 - v4 * v18 * v18) * (2 * v18 - v4 * v18 * v18);
    v20 = 2 * v19 - v4 * v19 * v19;
    while ( 1 )
    {
      *(_QWORD *)&v21 = sub_401F60(&v67, v14, v13, v14, v13, v5, v4, v20);
      *((_QWORD *)&v21 + 1) = v67;
      v22 = v59 + v21;
      v63 = *((_QWORD *)&v22 + 1);
      v23 = *((_QWORD *)&v22 + 1);
      v13 = v22;
      if ( __PAIR128__(v5, v4) <= v22 )
      {
        v24 = v22 - __PAIR128__(v5, v4);
        v63 = *((_QWORD *)&v24 + 1);
        v23 = *((_QWORD *)&v24 + 1);
        v13 = v24;
      }
      v25 = (__PAIR128__(v64, v58) - __PAIR128__(v23, v13)) >> 64;
      v26 = v58 - v13;
      if ( v25 < 0 )
      {
        v25 = (__PAIR128__(v5, v4) + __PAIR128__(v25, v26)) >> 64;
        v26 += v4;
      }
      v57 = sub_401F60(&v67, v55, v57, v25, v26, v5, v4, v20);
      v55 = v67;
      if ( (v17 & 0x1F) == 1 )
        break;
      v14 = v63;
LABEL_21:
      if ( !--v17 )
      {
        v64 = v14;
        v16 = v13;
        if ( v60 )
        {
          v27 = v13;
          for ( i = 0LL; i != v60; ++i )
          {
            v29 = sub_401F60(&v67, v14, v27, v14, v27, v5, v4, v20);
            v30 = __PAIR128__(v67, v59) + (unsigned __int64)v29;
            v63 = (__PAIR128__(v67, v59) + (unsigned __int64)v29) >> 64;
            v14 = v30 >> 64;
            v27 = v30;
            if ( __PAIR128__(v5, v4) <= v30 )
            {
              v63 = (v30 - __PAIR128__(v5, v4)) >> 64;
              v31 = v30 - __PAIR128__(v5, v4);
              v14 = v31 >> 64;
              v27 = v31;
            }
          }
          v16 = v27;
        }
        v17 = v60;
        v58 = v13;
        v13 = v16;
        v65 = v14;
        v60 *= 2LL;
      }
    }
    v32 = sub_402490(&v66, v67, v57, v5, v4);
    if ( !v66 && v32 == 1 )
    {
      v14 = v63;
      v16 = v13;
      v65 = v63;
      goto LABEL_21;
    }
    do
    {
      *(_QWORD *)&v33 = sub_401F60(&v67, v65, v16, v65, v16, v5, v4, v20);
      *((_QWORD *)&v33 + 1) = v67;
      v34 = v59 + v33;
      v65 = *((_QWORD *)&v34 + 1);
      v35 = *((_QWORD *)&v34 + 1);
      v16 = v34;
      if ( __PAIR128__(v5, v4) <= v34 )
      {
        v36 = v34 - __PAIR128__(v5, v4);
        v65 = *((_QWORD *)&v36 + 1);
        v35 = *((_QWORD *)&v36 + 1);
        v16 = v36;
      }
      v38 = (__PAIR128__(v64, v58) - __PAIR128__(v35, v16)) >> 64;
      v37 = v58 - v16;
      if ( v38 < 0 )
      {
        v38 = (__PAIR128__(v5, v4) + __PAIR128__(v38, v37)) >> 64;
        v37 += v4;
      }
      v39 = sub_402490(&v66, v38, v37, v5, v4);
      if ( v66 )
      {
        v40 = v39;
        if ( v4 == v39 && v5 == v66 )
        {
          sub_402BF0(v5, v4, v59 + 1, v62, v39);
          return;
        }
        v41 = v39;
        v56 = v39;
        v42 = (unsigned __int8)byte_40C220[(unsigned __int8)v39 >> 1];
        v43 = 2 * (2 * v42 - v40 * v42 * v42) - v40 * (2 * v42 - v40 * v42 * v42) * (2 * v42 - v40 * v42 * v42);
        v4 *= 2 * v43 - v40 * v43 * v43;
        if ( (unsigned __int8)sub_404050(v66, v41) )
        {
          v44 = v66;
          sub_402440(v62, v66, v56);
        }
        else
        {
          v44 = v56;
          sub_402BF0(v66, v56, v59 + 1, v62, v56);
        }
        goto LABEL_43;
      }
    }
    while ( v39 == 1 );
    v48 = v39;
    v49 = (unsigned __int8)byte_40C220[(unsigned __int8)v39 >> 1];
    v50 = 2 * v49 - v48 * v49 * v49;
    *(_QWORD *)&v51 = 2 * v50;
    *((_QWORD *)&v51 + 1) = v48 * v50 * v50;
    v52 = 2 * (v51 - *((_QWORD *)&v51 + 1)) - v48 * (v51 - *((_QWORD *)&v51 + 1)) * (v51 - *((_QWORD *)&v51 + 1));
    v4 *= v52;
    if ( v5 < v48 )
    {
      v5 = 0LL;
    }
    else
    {
      v51 = v48 * (unsigned __int128)v4;
      v5 = v52 * (v5 - *((_QWORD *)&v51 + 1));
    }
    if ( v48 > 1
      && (v48 <= 0x17DED78 || (v61 = v48, v53 = sub_403840(v48, v38, *((_QWORD *)&v51 + 1), v52, v48), v48 = v61, v53)) )
    {
      v44 = v48;
      sub_401D80((__int64)v62, v48, 1);
    }
    else
    {
      v44 = v59 + 1;
      sub_4027D0(v48, v59 + 1, (__int64)v62);
    }
    if ( !v5 )
    {
LABEL_43:
      if ( v4 > 1 && (v4 <= 0x17DED78 || (unsigned __int8)sub_403840(v4, v44, v45, v46, v47)) )
        sub_401D80((__int64)v62, v4, 1);
      else
        sub_4027D0(v4, v59, (__int64)v62);
      return;
    }
    if ( !(unsigned __int8)sub_404050(v5, v4) )
    {
      v13 = sub_402590(&v63, v63, v13, v5, v4);
      v58 = sub_402590(&v64, v64, v58, v5, v4);
      v54 = sub_402590(&v65, v65, v16, v5, v4);
      v14 = v63;
      v16 = v54;
      continue;
    }
    break;
  }
  sub_402440(v62, v5, v4);
}

void __fastcall sub_403210(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  unsigned int v7; // ebp
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int128 v16; // ax
  unsigned __int64 v17; // rax
  unsigned __int64 i; // rbp
  unsigned __int128 v19; // ax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rbx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r15
  int v30; // er8
  unsigned int v31; // edx
  unsigned __int64 v32; // rsi
  __int64 v33; // rdi
  int v34; // er8
  unsigned int v35; // edx
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  int v38; // er8
  unsigned int v39; // edx
  unsigned __int64 v40; // rsi
  __int64 v41; // rdi
  int v42; // er8
  unsigned int v43; // edx
  unsigned __int64 v44; // rsi
  __int64 v45; // rdi
  unsigned __int64 v46; // [rsp+8h] [rbp-50h]
  unsigned __int64 *v47; // [rsp+10h] [rbp-48h]
  __int64 v48; // [rsp+18h] [rbp-40h]
  int v49; // [rsp+18h] [rbp-40h]
  int v50; // [rsp+18h] [rbp-40h]
  int v51; // [rsp+18h] [rbp-40h]
  int v52; // [rsp+18h] [rbp-40h]

  v3 = a2;
  *(_BYTE *)(a3 + 250) = 0;
  v46 = a1;
  v47 = (unsigned __int64 *)a3;
  *(_QWORD *)(a3 + 8) = 0LL;
  if ( a1 || a2 > 1 )
  {
    if ( !(a2 & 1) )
    {
      if ( !a2 )
      {
        _BitScanForward64((unsigned __int64 *)&v4, a1);
        v3 = a1 >> v4;
        sub_401D80(a3, 2uLL, v4 + 64);
        v46 = 0LL;
LABEL_7:
        v5 = 26LL;
        v6 = 3LL;
        v7 = 0;
        v8 = 0LL;
        v9 = 6148914691236517205LL;
        v10 = -6148914691236517205LL;
        while ( 1 )
        {
          v25 = v10 * v3;
          v26 = (_QWORD *)(16 * v8 + 4244128);
          if ( v10 * v3 > v9 )
          {
            v20 = v3 * v26[2];
            if ( v20 > v26[3] )
              goto LABEL_22;
          }
          else
          {
            do
            {
              v3 = v25;
              v48 = v10;
              sub_401D80((__int64)v47, v6, 1);
              v10 = v48;
              v25 = v48 * v3;
            }
            while ( v48 * v3 <= v9 );
            v20 = v3 * v26[2];
            if ( v20 > v26[3] )
            {
LABEL_22:
              v21 = v3 * v26[4];
              if ( v21 > v26[5] )
                goto LABEL_23;
              goto LABEL_37;
            }
          }
          v27 = v6 + (unsigned __int8)byte_40EFA0[v7 + 1];
          do
          {
            v3 = v20;
            sub_401D80((__int64)v47, v27, 1);
            v20 = v3 * v26[2];
          }
          while ( v20 <= v26[3] );
          v21 = v3 * v26[4];
          if ( v21 > v26[5] )
          {
LABEL_23:
            v22 = v3 * v26[6];
            if ( v26[7] >= v22 )
              goto LABEL_40;
            goto LABEL_24;
          }
LABEL_37:
          v28 = v6 + (unsigned __int8)byte_40EFA0[v7 + 2] + (unsigned __int64)(unsigned __int8)byte_40EFA0[v7 + 1];
          do
          {
            v3 = v21;
            sub_401D80((__int64)v47, v28, 1);
            v21 = v3 * v26[4];
          }
          while ( v21 <= v26[5] );
          v22 = v3 * v26[6];
          if ( v26[7] >= v22 )
          {
LABEL_40:
            v29 = (unsigned __int8)byte_40EFA0[v7 + 2]
                + v6
                + (unsigned __int8)byte_40EFA0[v7 + 3]
                + (unsigned __int64)(unsigned __int8)byte_40EFA0[v7 + 1];
            do
            {
              v3 = v22;
              sub_401D80((__int64)v47, v29, 1);
              v22 = v3 * v26[6];
            }
            while ( v22 <= v26[7] );
            v23 = v3 * v26[8];
            if ( v26[9] < v23 )
              goto LABEL_25;
            goto LABEL_43;
          }
LABEL_24:
          v23 = v3 * v26[8];
          if ( v26[9] < v23 )
            goto LABEL_25;
LABEL_43:
          v3 = v23;
          v30 = v7 + 5;
          while ( 1 )
          {
            v31 = v7 + 1;
            v32 = v6;
            do
            {
              v33 = v31++;
              v32 += (unsigned __int8)byte_40EFA0[v33];
            }
            while ( v30 != v31 );
            v49 = v30;
            sub_401D80((__int64)v47, v32, 1);
            v30 = v49;
            if ( v3 * v26[8] > v26[9] )
              break;
            v3 *= v26[8];
          }
LABEL_25:
          if ( v3 * v26[10] <= v26[11] )
          {
            v3 *= v26[10];
            v42 = v7 + 6;
            while ( 1 )
            {
              v43 = v7 + 1;
              v44 = v6;
              do
              {
                v45 = v43++;
                v44 += (unsigned __int8)byte_40EFA0[v45];
              }
              while ( v42 != v43 );
              v52 = v42;
              sub_401D80((__int64)v47, v44, 1);
              v42 = v52;
              if ( v3 * v26[10] > v26[11] )
                break;
              v3 *= v26[10];
            }
          }
          if ( v26[13] >= v3 * v26[12] )
          {
            v3 *= v26[12];
            v38 = v7 + 7;
            while ( 1 )
            {
              v39 = v7 + 1;
              v40 = v6;
              do
              {
                v41 = v39++;
                v40 += (unsigned __int8)byte_40EFA0[v41];
              }
              while ( v38 != v39 );
              v51 = v38;
              sub_401D80((__int64)v47, v40, 1);
              v38 = v51;
              if ( v3 * v26[12] > v26[13] )
                break;
              v3 *= v26[12];
            }
          }
          if ( v3 * v26[14] <= v26[15] )
          {
            v3 *= v26[14];
            v34 = v7 + 8;
            while ( 1 )
            {
              v35 = v7 + 1;
              v36 = v6;
              do
              {
                v37 = v35++;
                v36 += (unsigned __int8)byte_40EFA0[v37];
              }
              while ( v34 != v35 );
              v50 = v34;
              sub_401D80((__int64)v47, v36, 1);
              v34 = v50;
              if ( v3 * v26[14] > v26[15] )
                break;
              v3 *= v26[14];
            }
          }
          v6 += v5;
          if ( v3 < v6 * v6 )
            goto LABEL_48;
          v7 += 8;
          if ( v7 > 0x29B )
            goto LABEL_48;
LABEL_30:
          v8 = v7;
          v5 = (unsigned __int8)byte_40ECE0[v7];
          v24 = 2LL * v7;
          v10 = qword_40C2A0[v24];
          v9 = qword_40C2A8[v24];
        }
      }
      _BitScanForward64((unsigned __int64 *)&v11, a2);
      v46 = a1 >> v11;
      v3 = (a1 << (64 - (unsigned __int8)v11)) | (a2 >> v11);
      sub_401D80((__int64)v47, 2uLL, v11);
    }
    if ( v46 )
    {
      v12 = 1LL;
      v13 = 2LL;
      v14 = -6148914691236517205LL;
      v6 = 3LL;
      while ( 1 )
      {
        v15 = v3 * v14;
        v16 = v6 * (unsigned __int128)(v3 * v14);
        if ( v46 >= *((_QWORD *)&v16 + 1) )
        {
          v17 = v14 * (v46 - *((_QWORD *)&v16 + 1));
          for ( i = qword_40C298[2 * v12]; v17 <= i; v17 = v14 * (v46 - *((_QWORD *)&v19 + 1)) )
          {
            v3 = v15;
            v46 = v17;
            sub_401D80((__int64)v47, v6, 1);
            v15 *= v14;
            v19 = v6 * (unsigned __int128)v15;
            if ( *((_QWORD *)&v19 + 1) > v46 )
              break;
          }
        }
        v7 = v12;
        v6 += v13;
        ++v12;
        if ( !v46 || v7 > 0x29B )
          break;
        v13 = (unsigned __int8)byte_40EFA0[v12];
        v14 = qword_40C290[2 * v12];
      }
      if ( v7 <= 0x29B )
        goto LABEL_30;
LABEL_48:
      if ( v46 )
      {
        if ( !(unsigned __int8)sub_404050(v46, v3) )
        {
          sub_402BF0(v46, v3, 1uLL, v47);
          return;
        }
      }
      else
      {
        if ( v3 <= 1 )
          return;
        if ( !(unsigned __int8)sub_404050(0LL, v3) )
        {
          sub_4027D0(v3, 1uLL, (__int64)v47);
          return;
        }
      }
      sub_402440(v47, v46, v3);
      return;
    }
    goto LABEL_7;
  }
}

__int64 __fastcall sub_403840(unsigned __int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned __int64 v4; // rcx
  int v5; // esi
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  char *v14; // r12
  unsigned __int64 v15; // r14
  char *v16; // r11
  __int64 v17; // rax
  char *v18; // r11
  unsigned __int128 v19; // ax
  char *v20; // rax
  unsigned __int64 v22; // rsi
  int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // [rsp+8h] [rbp-160h]
  char *v27; // [rsp+10h] [rbp-158h]
  unsigned int v28; // [rsp+1Ch] [rbp-14Ch]
  unsigned __int64 v29; // [rsp+20h] [rbp-148h]
  int v30; // [rsp+28h] [rbp-140h]
  unsigned __int8 v31; // [rsp+2Fh] [rbp-139h]
  char v32; // [rsp+30h] [rbp-138h]
  char v33[234]; // [rsp+40h] [rbp-128h]
  unsigned __int8 v34; // [rsp+12Ah] [rbp-3Eh]

  v1 = a1 - 1;
  v2 = a1;
  v26 = a1 - 1;
  if ( ((_BYTE)a1 - 1) & 1 )
  {
    v1 = a1 - 1;
    v28 = 0;
  }
  else
  {
    v3 = 0;
    do
    {
      v1 >>= 1;
      ++v3;
    }
    while ( !(v1 & 1) );
    v28 = v3;
  }
  v4 = a1;
  v5 = 64;
  v6 = 0LL;
  v7 = (unsigned __int8)byte_40C220[(unsigned __int8)a1 >> 1];
  v8 = 2 * (2 * v7 - a1 * v7 * v7) - a1 * (2 * v7 - a1 * v7 * v7) * (2 * v7 - a1 * v7 * v7);
  v9 = 0LL;
  v10 = 2 * v8 - a1 * v8 * v8;
  v11 = 1LL;
  do
  {
    v12 = v4 << 63;
    v4 >>= 1;
    v9 = v12 | (v9 >> 1);
    if ( __PAIR128__(v4, v9) <= __PAIR128__(v11, v6) )
    {
      v11 = (__PAIR128__(v11, v6) - __PAIR128__(v4, v9)) >> 64;
      v6 -= v9;
    }
    --v5;
  }
  while ( v5 );
  v13 = (v2 & -(__int64)(v2 - v6 > v6)) + 2 * v6 - v2;
  v31 = sub_401ED0(v2, v10, v13, v1, v28, v6);
  if ( v31 )
  {
    v14 = byte_40EFA0;
    sub_403210(0LL, v26, (__int64)&v32);
    v29 = v1;
    v30 = v34;
    v27 = &v33[8 * v34 - 8];
    v15 = 2LL;
    while ( v30 )
    {
      v16 = v33;
      while ( 1 )
      {
        v17 = sub_401E60(v13, v26 / *(_QWORD *)v16, v2, v10, v6);
        if ( v27 == v18 )
          break;
        v16 = v18 + 8;
        if ( v17 == v6 )
          goto LABEL_15;
      }
      if ( v17 != v6 )
        return v31;
LABEL_15:
      v15 += (unsigned __int8)*v14;
      v19 = v15 * (unsigned __int128)v6;
      v13 = v15 * v6;
      if ( is_mul_ok(v15, v6) )
      {
        v13 = (unsigned __int64)v19 % v2;
      }
      else
      {
        if ( v2 <= *((_QWORD *)&v19 + 1) )
          __assert_fail("(s1) < (n)", "src/factor.c", 0x4F4u, "prime_p");
        v22 = v2;
        v23 = 64;
        v24 = 0LL;
        do
        {
          v25 = v22 << 63;
          v22 >>= 1;
          v24 = v25 | (v24 >> 1);
          if ( v22 < *((_QWORD *)&v19 + 1) || v22 == *((_QWORD *)&v19 + 1) && v24 <= v13 )
          {
            *((_QWORD *)&v19 + 1) = (__PAIR128__(*((unsigned __int64 *)&v19 + 1), v13) - __PAIR128__(v22, v24)) >> 64;
            v13 -= v24;
          }
          --v23;
        }
        while ( v23 );
      }
      if ( !(unsigned __int8)sub_401ED0(v2, v10, v13, v29, v28, v6) )
        goto LABEL_31;
      if ( &unk_40F23C == (_UNKNOWN *)++v14 )
      {
        v20 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v20);
        abort();
      }
    }
  }
  else
  {
LABEL_31:
    v31 = 0;
  }
  return v31;
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  bool v12; // cf
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  char *v15; // r12
  unsigned __int64 v16; // rbp
  __int64 i; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // al
  __int64 v30; // rax
  unsigned __int128 v32; // [rsp+10h] [rbp-1D0h]
  char *v33; // [rsp+28h] [rbp-1B8h]
  unsigned int v34; // [rsp+38h] [rbp-1A8h]
  bool v35; // [rsp+3Fh] [rbp-1A1h]
  unsigned __int64 v36; // [rsp+48h] [rbp-198h]
  __int64 v37; // [rsp+50h] [rbp-190h]
  unsigned __int64 v38; // [rsp+58h] [rbp-188h]
  unsigned __int64 v39; // [rsp+60h] [rbp-180h]
  unsigned __int64 v40; // [rsp+68h] [rbp-178h]
  unsigned __int64 v41; // [rsp+70h] [rbp-170h]
  unsigned __int64 v42; // [rsp+78h] [rbp-168h]
  unsigned __int64 v43; // [rsp+80h] [rbp-160h]
  unsigned __int128 v44; // [rsp+88h] [rbp-158h]
  __int64 v45; // [rsp+98h] [rbp-148h]
  __int64 v46; // [rsp+A0h] [rbp-140h]
  __int64 v47; // [rsp+A8h] [rbp-138h]
  __int64 v48[30]; // [rsp+B0h] [rbp-130h]
  unsigned __int8 v49; // [rsp+1A2h] [rbp-3Eh]

  if ( a1 )
  {
    v2 = a2;
    v3 = a1 - (a2 == 0);
    *((_QWORD *)&v32 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v32 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v4, v3);
      v37 = 0LL;
      v36 = v3 >> v4;
      v34 = v4 + 64;
    }
    else
    {
      _BitScanForward64((unsigned __int64 *)&v30, v32);
      v34 = v30;
      v36 = ((unsigned __int64)v32 >> v30) | (*((_QWORD *)&v32 + 1) << (64 - (unsigned __int8)v30));
      v37 = *((_QWORD *)&v32 + 1) >> v30;
    }
    v5 = (unsigned __int8)byte_40C220[(unsigned __int8)a2 >> 1];
    v6 = 2 * (2 * v5 - a2 * v5 * v5) - a2 * (2 * v5 - a2 * v5 * v5) * (2 * v5 - a2 * v5 * v5);
    v7 = 2 * v6 - a2 * v6 * v6;
    v8 = a1 < 2 ? 127LL : 63LL;
    v9 = a1 < 2;
    v10 = a1 >= 2;
    do
    {
      v11 = v9;
      v9 *= 2LL;
      v10 = (v11 >> 63) | (2 * v10);
      if ( a1 < v10 || a1 == v10 && v2 <= v9 )
      {
        v10 = (__PAIR128__(v10, v9) - __PAIR128__(a1, v2)) >> 64;
        v9 -= v2;
      }
      --v8;
    }
    while ( v8 != -1 );
    v41 = v10;
    v40 = v9;
    v12 = __CFADD__(v9, v9);
    v13 = 2 * v9;
    v14 = v10 + v12 + v10;
    v39 = v14;
    v38 = v13;
    if ( a1 < v14 || a1 == v14 && v2 <= v13 )
      *(_OWORD *)&v38 = __PAIR128__(v14, v13) - __PAIR128__(a1, v2);
    v42 = v2;
    v43 = a1;
    v35 = sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40);
    if ( !v35 )
      return v35;
    v15 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v32 + 1), v32, (__int64)&v47);
    v16 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (v27 = (unsigned __int8)byte_40C220[(unsigned __int8)v47 >> 1],
            v28 = 2 * (2 * v27 - v47 * v27 * v27) - v47 * (2 * v27 - v47 * v27 * v27) * (2 * v27 - v47 * v27 * v27),
            v44 = (unsigned __int64)((2 * v28 - v47 * v28 * v28) * v32),
            v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40),
            v45 == v40) )
      {
        v29 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v35;
      }
      v33 = v15;
      for ( i = 1LL; ; ++i )
      {
        v21 = v48[i];
        if ( v21 == 2 )
        {
          v44 = v32 >> 1;
        }
        else
        {
          v18 = (unsigned __int8)byte_40C220[(unsigned __int8)v21 >> 1];
          v19 = 2 * (2 * v18 - v21 * v18 * v18) - v21 * (2 * v18 - v21 * v18 * v18) * (2 * v18 - v21 * v18 * v18);
          v20 = 2 * v19 - v21 * v19 * v19;
          *(_QWORD *)&v44 = v20 * v32;
          if ( *((_QWORD *)&v32 + 1) < v21 )
            *((_QWORD *)&v44 + 1) = 0LL;
          else
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v32 + 1)
                                   - ((v21 * (unsigned __int128)(unsigned __int64)(v20 * v32)) >> 64))
                                  * v20;
        }
        v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v35;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v15 = v33;
          goto LABEL_32;
        }
      }
      v15 = v33;
      v29 = v46 != v41;
LABEL_56:
      if ( v29 )
        return v35;
LABEL_32:
      v16 += (unsigned __int8)*v15;
      v22 = 0LL;
      v23 = 0LL;
      if ( a1 <= v16 )
        v23 = v16;
      v24 = (-(__int64)(v16 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v16 )
        v22 = v16;
      do
      {
        v25 = v23;
        v23 *= 2LL;
        v22 = (v25 >> 63) | (2 * v22);
        if ( a1 < v22 || a1 == v22 && v2 <= v23 )
        {
          v22 = (__PAIR128__(v22, v23) - __PAIR128__(a1, v2)) >> 64;
          v23 -= v2;
        }
        --v24;
      }
      while ( v24 != -1LL );
      v38 = v23;
      v39 = v22;
      if ( !sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40) )
        return 0;
      if ( &unk_40F23C == (_UNKNOWN *)++v15 )
      {
        v26 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v26);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
    return 0LL;
  if ( a2 <= 0x17DED78 )
    return 1LL;
  return sub_403840(a2);
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  bool v12; // cf
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  char *v15; // r12
  unsigned __int64 v16; // rbp
  __int64 i; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // al
  __int64 v30; // rax
  unsigned __int128 v32; // [rsp+10h] [rbp-1D0h]
  char *v33; // [rsp+28h] [rbp-1B8h]
  unsigned int v34; // [rsp+38h] [rbp-1A8h]
  bool v35; // [rsp+3Fh] [rbp-1A1h]
  unsigned __int64 v36; // [rsp+48h] [rbp-198h]
  __int64 v37; // [rsp+50h] [rbp-190h]
  unsigned __int64 v38; // [rsp+58h] [rbp-188h]
  unsigned __int64 v39; // [rsp+60h] [rbp-180h]
  unsigned __int64 v40; // [rsp+68h] [rbp-178h]
  unsigned __int64 v41; // [rsp+70h] [rbp-170h]
  unsigned __int64 v42; // [rsp+78h] [rbp-168h]
  unsigned __int64 v43; // [rsp+80h] [rbp-160h]
  unsigned __int128 v44; // [rsp+88h] [rbp-158h]
  __int64 v45; // [rsp+98h] [rbp-148h]
  __int64 v46; // [rsp+A0h] [rbp-140h]
  __int64 v47; // [rsp+A8h] [rbp-138h]
  __int64 v48[30]; // [rsp+B0h] [rbp-130h]
  unsigned __int8 v49; // [rsp+1A2h] [rbp-3Eh]

  if ( a1 )
  {
    v2 = a2;
    v3 = a1 - (a2 == 0);
    *((_QWORD *)&v32 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v32 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v4, v3);
      v37 = 0LL;
      v36 = v3 >> v4;
      v34 = v4 + 64;
    }
    else
    {
      _BitScanForward64((unsigned __int64 *)&v30, v32);
      v34 = v30;
      v36 = ((unsigned __int64)v32 >> v30) | (*((_QWORD *)&v32 + 1) << (64 - (unsigned __int8)v30));
      v37 = *((_QWORD *)&v32 + 1) >> v30;
    }
    v5 = (unsigned __int8)byte_40C220[(unsigned __int8)a2 >> 1];
    v6 = 2 * (2 * v5 - a2 * v5 * v5) - a2 * (2 * v5 - a2 * v5 * v5) * (2 * v5 - a2 * v5 * v5);
    v7 = 2 * v6 - a2 * v6 * v6;
    v8 = a1 < 2 ? 127LL : 63LL;
    v9 = a1 < 2;
    v10 = a1 >= 2;
    do
    {
      v11 = v9;
      v9 *= 2LL;
      v10 = (v11 >> 63) | (2 * v10);
      if ( a1 < v10 || a1 == v10 && v2 <= v9 )
      {
        v10 = (__PAIR128__(v10, v9) - __PAIR128__(a1, v2)) >> 64;
        v9 -= v2;
      }
      --v8;
    }
    while ( v8 != -1 );
    v41 = v10;
    v40 = v9;
    v12 = __CFADD__(v9, v9);
    v13 = 2 * v9;
    v14 = v10 + v12 + v10;
    v39 = v14;
    v38 = v13;
    if ( a1 < v14 || a1 == v14 && v2 <= v13 )
      *(_OWORD *)&v38 = __PAIR128__(v14, v13) - __PAIR128__(a1, v2);
    v42 = v2;
    v43 = a1;
    v35 = sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40);
    if ( !v35 )
      return v35;
    v15 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v32 + 1), v32, (__int64)&v47);
    v16 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (v27 = (unsigned __int8)byte_40C220[(unsigned __int8)v47 >> 1],
            v28 = 2 * (2 * v27 - v47 * v27 * v27) - v47 * (2 * v27 - v47 * v27 * v27) * (2 * v27 - v47 * v27 * v27),
            v44 = (unsigned __int64)((2 * v28 - v47 * v28 * v28) * v32),
            v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40),
            v45 == v40) )
      {
        v29 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v35;
      }
      v33 = v15;
      for ( i = 1LL; ; ++i )
      {
        v21 = v48[i];
        if ( v21 == 2 )
        {
          v44 = v32 >> 1;
        }
        else
        {
          v18 = (unsigned __int8)byte_40C220[(unsigned __int8)v21 >> 1];
          v19 = 2 * (2 * v18 - v21 * v18 * v18) - v21 * (2 * v18 - v21 * v18 * v18) * (2 * v18 - v21 * v18 * v18);
          v20 = 2 * v19 - v21 * v19 * v19;
          *(_QWORD *)&v44 = v20 * v32;
          if ( *((_QWORD *)&v32 + 1) < v21 )
            *((_QWORD *)&v44 + 1) = 0LL;
          else
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v32 + 1)
                                   - ((v21 * (unsigned __int128)(unsigned __int64)(v20 * v32)) >> 64))
                                  * v20;
        }
        v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v35;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v15 = v33;
          goto LABEL_32;
        }
      }
      v15 = v33;
      v29 = v46 != v41;
LABEL_56:
      if ( v29 )
        return v35;
LABEL_32:
      v16 += (unsigned __int8)*v15;
      v22 = 0LL;
      v23 = 0LL;
      if ( a1 <= v16 )
        v23 = v16;
      v24 = (-(__int64)(v16 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v16 )
        v22 = v16;
      do
      {
        v25 = v23;
        v23 *= 2LL;
        v22 = (v25 >> 63) | (2 * v22);
        if ( a1 < v22 || a1 == v22 && v2 <= v23 )
        {
          v22 = (__PAIR128__(v22, v23) - __PAIR128__(a1, v2)) >> 64;
          v23 -= v2;
        }
        --v24;
      }
      while ( v24 != -1LL );
      v38 = v23;
      v39 = v22;
      if ( !sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40) )
        return 0;
      if ( &unk_40F23C == (_UNKNOWN *)++v15 )
      {
        v26 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v26);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
    return 0LL;
  if ( a2 <= 0x17DED78 )
    return 1LL;
  return sub_403840(a2);
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  bool v12; // cf
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  char *v15; // r12
  unsigned __int64 v16; // rbp
  __int64 i; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // al
  __int64 v30; // rax
  unsigned __int128 v32; // [rsp+10h] [rbp-1D0h]
  char *v33; // [rsp+28h] [rbp-1B8h]
  unsigned int v34; // [rsp+38h] [rbp-1A8h]
  bool v35; // [rsp+3Fh] [rbp-1A1h]
  unsigned __int64 v36; // [rsp+48h] [rbp-198h]
  __int64 v37; // [rsp+50h] [rbp-190h]
  unsigned __int64 v38; // [rsp+58h] [rbp-188h]
  unsigned __int64 v39; // [rsp+60h] [rbp-180h]
  unsigned __int64 v40; // [rsp+68h] [rbp-178h]
  unsigned __int64 v41; // [rsp+70h] [rbp-170h]
  unsigned __int64 v42; // [rsp+78h] [rbp-168h]
  unsigned __int64 v43; // [rsp+80h] [rbp-160h]
  unsigned __int128 v44; // [rsp+88h] [rbp-158h]
  __int64 v45; // [rsp+98h] [rbp-148h]
  __int64 v46; // [rsp+A0h] [rbp-140h]
  __int64 v47; // [rsp+A8h] [rbp-138h]
  __int64 v48[30]; // [rsp+B0h] [rbp-130h]
  unsigned __int8 v49; // [rsp+1A2h] [rbp-3Eh]

  if ( a1 )
  {
    v2 = a2;
    v3 = a1 - (a2 == 0);
    *((_QWORD *)&v32 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v32 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v4, v3);
      v37 = 0LL;
      v36 = v3 >> v4;
      v34 = v4 + 64;
    }
    else
    {
      _BitScanForward64((unsigned __int64 *)&v30, v32);
      v34 = v30;
      v36 = ((unsigned __int64)v32 >> v30) | (*((_QWORD *)&v32 + 1) << (64 - (unsigned __int8)v30));
      v37 = *((_QWORD *)&v32 + 1) >> v30;
    }
    v5 = (unsigned __int8)byte_40C220[(unsigned __int8)a2 >> 1];
    v6 = 2 * (2 * v5 - a2 * v5 * v5) - a2 * (2 * v5 - a2 * v5 * v5) * (2 * v5 - a2 * v5 * v5);
    v7 = 2 * v6 - a2 * v6 * v6;
    v8 = a1 < 2 ? 127LL : 63LL;
    v9 = a1 < 2;
    v10 = a1 >= 2;
    do
    {
      v11 = v9;
      v9 *= 2LL;
      v10 = (v11 >> 63) | (2 * v10);
      if ( a1 < v10 || a1 == v10 && v2 <= v9 )
      {
        v10 = (__PAIR128__(v10, v9) - __PAIR128__(a1, v2)) >> 64;
        v9 -= v2;
      }
      --v8;
    }
    while ( v8 != -1 );
    v41 = v10;
    v40 = v9;
    v12 = __CFADD__(v9, v9);
    v13 = 2 * v9;
    v14 = v10 + v12 + v10;
    v39 = v14;
    v38 = v13;
    if ( a1 < v14 || a1 == v14 && v2 <= v13 )
      *(_OWORD *)&v38 = __PAIR128__(v14, v13) - __PAIR128__(a1, v2);
    v42 = v2;
    v43 = a1;
    v35 = sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40);
    if ( !v35 )
      return v35;
    v15 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v32 + 1), v32, (__int64)&v47);
    v16 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (v27 = (unsigned __int8)byte_40C220[(unsigned __int8)v47 >> 1],
            v28 = 2 * (2 * v27 - v47 * v27 * v27) - v47 * (2 * v27 - v47 * v27 * v27) * (2 * v27 - v47 * v27 * v27),
            v44 = (unsigned __int64)((2 * v28 - v47 * v28 * v28) * v32),
            v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40),
            v45 == v40) )
      {
        v29 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v35;
      }
      v33 = v15;
      for ( i = 1LL; ; ++i )
      {
        v21 = v48[i];
        if ( v21 == 2 )
        {
          v44 = v32 >> 1;
        }
        else
        {
          v18 = (unsigned __int8)byte_40C220[(unsigned __int8)v21 >> 1];
          v19 = 2 * (2 * v18 - v21 * v18 * v18) - v21 * (2 * v18 - v21 * v18 * v18) * (2 * v18 - v21 * v18 * v18);
          v20 = 2 * v19 - v21 * v19 * v19;
          *(_QWORD *)&v44 = v20 * v32;
          if ( *((_QWORD *)&v32 + 1) < v21 )
            *((_QWORD *)&v44 + 1) = 0LL;
          else
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v32 + 1)
                                   - ((v21 * (unsigned __int128)(unsigned __int64)(v20 * v32)) >> 64))
                                  * v20;
        }
        v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v35;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v15 = v33;
          goto LABEL_32;
        }
      }
      v15 = v33;
      v29 = v46 != v41;
LABEL_56:
      if ( v29 )
        return v35;
LABEL_32:
      v16 += (unsigned __int8)*v15;
      v22 = 0LL;
      v23 = 0LL;
      if ( a1 <= v16 )
        v23 = v16;
      v24 = (-(__int64)(v16 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v16 )
        v22 = v16;
      do
      {
        v25 = v23;
        v23 *= 2LL;
        v22 = (v25 >> 63) | (2 * v22);
        if ( a1 < v22 || a1 == v22 && v2 <= v23 )
        {
          v22 = (__PAIR128__(v22, v23) - __PAIR128__(a1, v2)) >> 64;
          v23 -= v2;
        }
        --v24;
      }
      while ( v24 != -1LL );
      v38 = v23;
      v39 = v22;
      if ( !sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40) )
        return 0;
      if ( &unk_40F23C == (_UNKNOWN *)++v15 )
      {
        v26 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v26);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
    return 0LL;
  if ( a2 <= 0x17DED78 )
    return 1LL;
  return sub_403840(a2);
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  bool v12; // cf
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  char *v15; // r12
  unsigned __int64 v16; // rbp
  __int64 i; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // al
  __int64 v30; // rax
  unsigned __int128 v32; // [rsp+10h] [rbp-1D0h]
  char *v33; // [rsp+28h] [rbp-1B8h]
  unsigned int v34; // [rsp+38h] [rbp-1A8h]
  bool v35; // [rsp+3Fh] [rbp-1A1h]
  unsigned __int64 v36; // [rsp+48h] [rbp-198h]
  __int64 v37; // [rsp+50h] [rbp-190h]
  unsigned __int64 v38; // [rsp+58h] [rbp-188h]
  unsigned __int64 v39; // [rsp+60h] [rbp-180h]
  unsigned __int64 v40; // [rsp+68h] [rbp-178h]
  unsigned __int64 v41; // [rsp+70h] [rbp-170h]
  unsigned __int64 v42; // [rsp+78h] [rbp-168h]
  unsigned __int64 v43; // [rsp+80h] [rbp-160h]
  unsigned __int128 v44; // [rsp+88h] [rbp-158h]
  __int64 v45; // [rsp+98h] [rbp-148h]
  __int64 v46; // [rsp+A0h] [rbp-140h]
  __int64 v47; // [rsp+A8h] [rbp-138h]
  __int64 v48[30]; // [rsp+B0h] [rbp-130h]
  unsigned __int8 v49; // [rsp+1A2h] [rbp-3Eh]

  if ( a1 )
  {
    v2 = a2;
    v3 = a1 - (a2 == 0);
    *((_QWORD *)&v32 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v32 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v4, v3);
      v37 = 0LL;
      v36 = v3 >> v4;
      v34 = v4 + 64;
    }
    else
    {
      _BitScanForward64((unsigned __int64 *)&v30, v32);
      v34 = v30;
      v36 = ((unsigned __int64)v32 >> v30) | (*((_QWORD *)&v32 + 1) << (64 - (unsigned __int8)v30));
      v37 = *((_QWORD *)&v32 + 1) >> v30;
    }
    v5 = (unsigned __int8)byte_40C220[(unsigned __int8)a2 >> 1];
    v6 = 2 * (2 * v5 - a2 * v5 * v5) - a2 * (2 * v5 - a2 * v5 * v5) * (2 * v5 - a2 * v5 * v5);
    v7 = 2 * v6 - a2 * v6 * v6;
    v8 = a1 < 2 ? 127LL : 63LL;
    v9 = a1 < 2;
    v10 = a1 >= 2;
    do
    {
      v11 = v9;
      v9 *= 2LL;
      v10 = (v11 >> 63) | (2 * v10);
      if ( a1 < v10 || a1 == v10 && v2 <= v9 )
      {
        v10 = (__PAIR128__(v10, v9) - __PAIR128__(a1, v2)) >> 64;
        v9 -= v2;
      }
      --v8;
    }
    while ( v8 != -1 );
    v41 = v10;
    v40 = v9;
    v12 = __CFADD__(v9, v9);
    v13 = 2 * v9;
    v14 = v10 + v12 + v10;
    v39 = v14;
    v38 = v13;
    if ( a1 < v14 || a1 == v14 && v2 <= v13 )
      *(_OWORD *)&v38 = __PAIR128__(v14, v13) - __PAIR128__(a1, v2);
    v42 = v2;
    v43 = a1;
    v35 = sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40);
    if ( !v35 )
      return v35;
    v15 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v32 + 1), v32, (__int64)&v47);
    v16 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (v27 = (unsigned __int8)byte_40C220[(unsigned __int8)v47 >> 1],
            v28 = 2 * (2 * v27 - v47 * v27 * v27) - v47 * (2 * v27 - v47 * v27 * v27) * (2 * v27 - v47 * v27 * v27),
            v44 = (unsigned __int64)((2 * v28 - v47 * v28 * v28) * v32),
            v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40),
            v45 == v40) )
      {
        v29 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v35;
      }
      v33 = v15;
      for ( i = 1LL; ; ++i )
      {
        v21 = v48[i];
        if ( v21 == 2 )
        {
          v44 = v32 >> 1;
        }
        else
        {
          v18 = (unsigned __int8)byte_40C220[(unsigned __int8)v21 >> 1];
          v19 = 2 * (2 * v18 - v21 * v18 * v18) - v21 * (2 * v18 - v21 * v18 * v18) * (2 * v18 - v21 * v18 * v18);
          v20 = 2 * v19 - v21 * v19 * v19;
          *(_QWORD *)&v44 = v20 * v32;
          if ( *((_QWORD *)&v32 + 1) < v21 )
            *((_QWORD *)&v44 + 1) = 0LL;
          else
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v32 + 1)
                                   - ((v21 * (unsigned __int128)(unsigned __int64)(v20 * v32)) >> 64))
                                  * v20;
        }
        v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v35;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v15 = v33;
          goto LABEL_32;
        }
      }
      v15 = v33;
      v29 = v46 != v41;
LABEL_56:
      if ( v29 )
        return v35;
LABEL_32:
      v16 += (unsigned __int8)*v15;
      v22 = 0LL;
      v23 = 0LL;
      if ( a1 <= v16 )
        v23 = v16;
      v24 = (-(__int64)(v16 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v16 )
        v22 = v16;
      do
      {
        v25 = v23;
        v23 *= 2LL;
        v22 = (v25 >> 63) | (2 * v22);
        if ( a1 < v22 || a1 == v22 && v2 <= v23 )
        {
          v22 = (__PAIR128__(v22, v23) - __PAIR128__(a1, v2)) >> 64;
          v23 -= v2;
        }
        --v24;
      }
      while ( v24 != -1LL );
      v38 = v23;
      v39 = v22;
      if ( !sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40) )
        return 0;
      if ( &unk_40F23C == (_UNKNOWN *)++v15 )
      {
        v26 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v26);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
    return 0LL;
  if ( a2 <= 0x17DED78 )
    return 1LL;
  return sub_403840(a2);
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  bool v12; // cf
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  char *v15; // r12
  unsigned __int64 v16; // rbp
  __int64 i; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // al
  __int64 v30; // rax
  unsigned __int128 v32; // [rsp+10h] [rbp-1D0h]
  char *v33; // [rsp+28h] [rbp-1B8h]
  unsigned int v34; // [rsp+38h] [rbp-1A8h]
  bool v35; // [rsp+3Fh] [rbp-1A1h]
  unsigned __int64 v36; // [rsp+48h] [rbp-198h]
  __int64 v37; // [rsp+50h] [rbp-190h]
  unsigned __int64 v38; // [rsp+58h] [rbp-188h]
  unsigned __int64 v39; // [rsp+60h] [rbp-180h]
  unsigned __int64 v40; // [rsp+68h] [rbp-178h]
  unsigned __int64 v41; // [rsp+70h] [rbp-170h]
  unsigned __int64 v42; // [rsp+78h] [rbp-168h]
  unsigned __int64 v43; // [rsp+80h] [rbp-160h]
  unsigned __int128 v44; // [rsp+88h] [rbp-158h]
  __int64 v45; // [rsp+98h] [rbp-148h]
  __int64 v46; // [rsp+A0h] [rbp-140h]
  __int64 v47; // [rsp+A8h] [rbp-138h]
  __int64 v48[30]; // [rsp+B0h] [rbp-130h]
  unsigned __int8 v49; // [rsp+1A2h] [rbp-3Eh]

  if ( a1 )
  {
    v2 = a2;
    v3 = a1 - (a2 == 0);
    *((_QWORD *)&v32 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v32 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v4, v3);
      v37 = 0LL;
      v36 = v3 >> v4;
      v34 = v4 + 64;
    }
    else
    {
      _BitScanForward64((unsigned __int64 *)&v30, v32);
      v34 = v30;
      v36 = ((unsigned __int64)v32 >> v30) | (*((_QWORD *)&v32 + 1) << (64 - (unsigned __int8)v30));
      v37 = *((_QWORD *)&v32 + 1) >> v30;
    }
    v5 = (unsigned __int8)byte_40C220[(unsigned __int8)a2 >> 1];
    v6 = 2 * (2 * v5 - a2 * v5 * v5) - a2 * (2 * v5 - a2 * v5 * v5) * (2 * v5 - a2 * v5 * v5);
    v7 = 2 * v6 - a2 * v6 * v6;
    v8 = a1 < 2 ? 127LL : 63LL;
    v9 = a1 < 2;
    v10 = a1 >= 2;
    do
    {
      v11 = v9;
      v9 *= 2LL;
      v10 = (v11 >> 63) | (2 * v10);
      if ( a1 < v10 || a1 == v10 && v2 <= v9 )
      {
        v10 = (__PAIR128__(v10, v9) - __PAIR128__(a1, v2)) >> 64;
        v9 -= v2;
      }
      --v8;
    }
    while ( v8 != -1 );
    v41 = v10;
    v40 = v9;
    v12 = __CFADD__(v9, v9);
    v13 = 2 * v9;
    v14 = v10 + v12 + v10;
    v39 = v14;
    v38 = v13;
    if ( a1 < v14 || a1 == v14 && v2 <= v13 )
      *(_OWORD *)&v38 = __PAIR128__(v14, v13) - __PAIR128__(a1, v2);
    v42 = v2;
    v43 = a1;
    v35 = sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40);
    if ( !v35 )
      return v35;
    v15 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v32 + 1), v32, (__int64)&v47);
    v16 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (v27 = (unsigned __int8)byte_40C220[(unsigned __int8)v47 >> 1],
            v28 = 2 * (2 * v27 - v47 * v27 * v27) - v47 * (2 * v27 - v47 * v27 * v27) * (2 * v27 - v47 * v27 * v27),
            v44 = (unsigned __int64)((2 * v28 - v47 * v28 * v28) * v32),
            v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40),
            v45 == v40) )
      {
        v29 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v35;
      }
      v33 = v15;
      for ( i = 1LL; ; ++i )
      {
        v21 = v48[i];
        if ( v21 == 2 )
        {
          v44 = v32 >> 1;
        }
        else
        {
          v18 = (unsigned __int8)byte_40C220[(unsigned __int8)v21 >> 1];
          v19 = 2 * (2 * v18 - v21 * v18 * v18) - v21 * (2 * v18 - v21 * v18 * v18) * (2 * v18 - v21 * v18 * v18);
          v20 = 2 * v19 - v21 * v19 * v19;
          *(_QWORD *)&v44 = v20 * v32;
          if ( *((_QWORD *)&v32 + 1) < v21 )
            *((_QWORD *)&v44 + 1) = 0LL;
          else
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v32 + 1)
                                   - ((v21 * (unsigned __int128)(unsigned __int64)(v20 * v32)) >> 64))
                                  * v20;
        }
        v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v35;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v15 = v33;
          goto LABEL_32;
        }
      }
      v15 = v33;
      v29 = v46 != v41;
LABEL_56:
      if ( v29 )
        return v35;
LABEL_32:
      v16 += (unsigned __int8)*v15;
      v22 = 0LL;
      v23 = 0LL;
      if ( a1 <= v16 )
        v23 = v16;
      v24 = (-(__int64)(v16 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v16 )
        v22 = v16;
      do
      {
        v25 = v23;
        v23 *= 2LL;
        v22 = (v25 >> 63) | (2 * v22);
        if ( a1 < v22 || a1 == v22 && v2 <= v23 )
        {
          v22 = (__PAIR128__(v22, v23) - __PAIR128__(a1, v2)) >> 64;
          v23 -= v2;
        }
        --v24;
      }
      while ( v24 != -1LL );
      v38 = v23;
      v39 = v22;
      if ( !sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40) )
        return 0;
      if ( &unk_40F23C == (_UNKNOWN *)++v15 )
      {
        v26 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v26);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
    return 0LL;
  if ( a2 <= 0x17DED78 )
    return 1LL;
  return sub_403840(a2);
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  bool v12; // cf
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  char *v15; // r12
  unsigned __int64 v16; // rbp
  __int64 i; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // al
  __int64 v30; // rax
  unsigned __int128 v32; // [rsp+10h] [rbp-1D0h]
  char *v33; // [rsp+28h] [rbp-1B8h]
  unsigned int v34; // [rsp+38h] [rbp-1A8h]
  bool v35; // [rsp+3Fh] [rbp-1A1h]
  unsigned __int64 v36; // [rsp+48h] [rbp-198h]
  __int64 v37; // [rsp+50h] [rbp-190h]
  unsigned __int64 v38; // [rsp+58h] [rbp-188h]
  unsigned __int64 v39; // [rsp+60h] [rbp-180h]
  unsigned __int64 v40; // [rsp+68h] [rbp-178h]
  unsigned __int64 v41; // [rsp+70h] [rbp-170h]
  unsigned __int64 v42; // [rsp+78h] [rbp-168h]
  unsigned __int64 v43; // [rsp+80h] [rbp-160h]
  unsigned __int128 v44; // [rsp+88h] [rbp-158h]
  __int64 v45; // [rsp+98h] [rbp-148h]
  __int64 v46; // [rsp+A0h] [rbp-140h]
  __int64 v47; // [rsp+A8h] [rbp-138h]
  __int64 v48[30]; // [rsp+B0h] [rbp-130h]
  unsigned __int8 v49; // [rsp+1A2h] [rbp-3Eh]

  if ( a1 )
  {
    v2 = a2;
    v3 = a1 - (a2 == 0);
    *((_QWORD *)&v32 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v32 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v4, v3);
      v37 = 0LL;
      v36 = v3 >> v4;
      v34 = v4 + 64;
    }
    else
    {
      _BitScanForward64((unsigned __int64 *)&v30, v32);
      v34 = v30;
      v36 = ((unsigned __int64)v32 >> v30) | (*((_QWORD *)&v32 + 1) << (64 - (unsigned __int8)v30));
      v37 = *((_QWORD *)&v32 + 1) >> v30;
    }
    v5 = (unsigned __int8)byte_40C220[(unsigned __int8)a2 >> 1];
    v6 = 2 * (2 * v5 - a2 * v5 * v5) - a2 * (2 * v5 - a2 * v5 * v5) * (2 * v5 - a2 * v5 * v5);
    v7 = 2 * v6 - a2 * v6 * v6;
    v8 = a1 < 2 ? 127LL : 63LL;
    v9 = a1 < 2;
    v10 = a1 >= 2;
    do
    {
      v11 = v9;
      v9 *= 2LL;
      v10 = (v11 >> 63) | (2 * v10);
      if ( a1 < v10 || a1 == v10 && v2 <= v9 )
      {
        v10 = (__PAIR128__(v10, v9) - __PAIR128__(a1, v2)) >> 64;
        v9 -= v2;
      }
      --v8;
    }
    while ( v8 != -1 );
    v41 = v10;
    v40 = v9;
    v12 = __CFADD__(v9, v9);
    v13 = 2 * v9;
    v14 = v10 + v12 + v10;
    v39 = v14;
    v38 = v13;
    if ( a1 < v14 || a1 == v14 && v2 <= v13 )
      *(_OWORD *)&v38 = __PAIR128__(v14, v13) - __PAIR128__(a1, v2);
    v42 = v2;
    v43 = a1;
    v35 = sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40);
    if ( !v35 )
      return v35;
    v15 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v32 + 1), v32, (__int64)&v47);
    v16 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (v27 = (unsigned __int8)byte_40C220[(unsigned __int8)v47 >> 1],
            v28 = 2 * (2 * v27 - v47 * v27 * v27) - v47 * (2 * v27 - v47 * v27 * v27) * (2 * v27 - v47 * v27 * v27),
            v44 = (unsigned __int64)((2 * v28 - v47 * v28 * v28) * v32),
            v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40),
            v45 == v40) )
      {
        v29 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v35;
      }
      v33 = v15;
      for ( i = 1LL; ; ++i )
      {
        v21 = v48[i];
        if ( v21 == 2 )
        {
          v44 = v32 >> 1;
        }
        else
        {
          v18 = (unsigned __int8)byte_40C220[(unsigned __int8)v21 >> 1];
          v19 = 2 * (2 * v18 - v21 * v18 * v18) - v21 * (2 * v18 - v21 * v18 * v18) * (2 * v18 - v21 * v18 * v18);
          v20 = 2 * v19 - v21 * v19 * v19;
          *(_QWORD *)&v44 = v20 * v32;
          if ( *((_QWORD *)&v32 + 1) < v21 )
            *((_QWORD *)&v44 + 1) = 0LL;
          else
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v32 + 1)
                                   - ((v21 * (unsigned __int128)(unsigned __int64)(v20 * v32)) >> 64))
                                  * v20;
        }
        v45 = sub_4020D0(&v46, &v38, &v44, &v42, v7, (__int64 *)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v35;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v15 = v33;
          goto LABEL_32;
        }
      }
      v15 = v33;
      v29 = v46 != v41;
LABEL_56:
      if ( v29 )
        return v35;
LABEL_32:
      v16 += (unsigned __int8)*v15;
      v22 = 0LL;
      v23 = 0LL;
      if ( a1 <= v16 )
        v23 = v16;
      v24 = (-(__int64)(v16 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v16 )
        v22 = v16;
      do
      {
        v25 = v23;
        v23 *= 2LL;
        v22 = (v25 >> 63) | (2 * v22);
        if ( a1 < v22 || a1 == v22 && v2 <= v23 )
        {
          v22 = (__PAIR128__(v22, v23) - __PAIR128__(a1, v2)) >> 64;
          v23 -= v2;
        }
        --v24;
      }
      while ( v24 != -1LL );
      v38 = v23;
      v39 = v22;
      if ( !sub_402240(&v42, v7, &v38, &v36, v34, (__int64 *)&v40) )
        return 0;
      if ( &unk_40F23C == (_UNKNOWN *)++v15 )
      {
        v26 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v26);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
    return 0LL;
  if ( a2 <= 0x17DED78 )
    return 1LL;
  return sub_403840(a2);
}

char *__fastcall sub_4040A0(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // r12
  __int64 *v3; // rbp
  unsigned int i; // ebx
  __int64 v6; // [rsp+0h] [rbp-128h]
  unsigned __int64 v7; // [rsp+8h] [rbp-120h]
  __int64 v8; // [rsp+10h] [rbp-118h]
  unsigned __int8 v9; // [rsp+FAh] [rbp-2Eh]

  sub_402640(a1, a2);
  sub_4026F0(58);
  sub_403210(a1, a2, (__int64)&v6);
  if ( v9 )
  {
    v2 = &v8;
    v3 = &v6;
    do
    {
      for ( i = 0; *((unsigned __int8 *)v3 + 224) > i; ++i )
      {
        sub_4026F0(32);
        sub_402340(*v2, 0LL);
      }
      v3 = (__int64 *)((char *)v3 + 1);
      ++v2;
    }
    while ( v9 > (unsigned int)v3 - (unsigned int)&v6 );
  }
  if ( v7 )
  {
    sub_4026F0(32);
    sub_402640(v7, v6);
  }
  return sub_4026F0(10);
}

__int64 __fastcall sub_404170(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rax
  char i; // dl
  __int64 v8; // r8
  __int64 v9; // rdx
  char *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  const char *v14; // rsi
  __int64 v15; // rbx
  char *v16; // rax
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  bool v27; // cf
  __int64 v28; // rax

  v6 = a1;
  for ( i = *a1; *v6 == 32; i = *v6 )
    ++v6;
  v8 = (__int64)(v6 + 1);
  if ( i == 43 )
  {
    v9 = (__int64)(v6++ + 2);
    v8 = v9;
  }
  v10 = v6;
  v11 = 4LL;
  while ( 1 )
  {
    v12 = (unsigned int)*(++v10 - 1);
    if ( !*(v10 - 1) )
      break;
    v12 = (unsigned int)(v12 - 48);
    v11 = 0LL;
    if ( (unsigned int)v12 > 9 )
      goto LABEL_8;
  }
  if ( (_DWORD)v11 )
  {
LABEL_8:
    v13 = sub_406F50(a1, v11, v12, v10, v8, a6);
    v14 = "%s is not a valid positive integer";
    v15 = v13;
LABEL_9:
    v16 = dcgettext(0LL, v14, 5);
    error(0, 0, v16, v15);
    return 0LL;
  }
  v18 = *v6;
  if ( v18 )
  {
    LODWORD(v19) = v18 - 48;
    v20 = 0LL;
    v21 = 0LL;
    while ( 1 )
    {
      v22 = 10 * v20;
      v23 = (unsigned int)v19;
      v24 = (v20 >> 61) + (10 * v20 < 2 * v20) + (unsigned int)(v20 >> 63);
      v19 = __CFADD__(10 * v20, (unsigned int)v19);
      v20 = 10 * v20 + v23;
      v25 = 10 * v21;
      v26 = (unsigned int)(v19 + v24);
      v27 = __CFADD__(v25, v26);
      v21 = v25 + v26;
      if ( v27 )
        goto LABEL_17;
      if ( !*(_BYTE *)(++v8 - 1) )
        break;
      v19 = (unsigned int)(*(char *)(v8 - 1) - 48);
      if ( v21 > 0x1999999999999999LL )
        goto LABEL_17;
    }
    if ( (v21 & 0x8000000000000000LL) != 0LL )
    {
LABEL_17:
      v28 = sub_406F50(a1, v22, v19, v24, v8, 1844674407370955161LL);
      v14 = "%s is too large";
      v15 = v28;
      goto LABEL_9;
    }
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  if ( byte_613310 )
    fwrite("[using single-precision arithmetic] ", 1uLL, 0x24uLL, stderr);
  sub_4040A0(v21, v20);
  return 1LL;
}

noreturn void __fastcall  sub_4042E0(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbp
  char *v5; // rax
  FILE *v6; // rbp
  char *v7; // rax
  FILE *v8; // rbp
  char *v9; // rax
  const char **v10; // rax
  char *v11; // rbp
  char *v12; // rax
  char *v13; // rax
  char *v14; // r12
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  __int64 v21; // rcx
  const char *v22; // [rsp+0h] [rbp-88h]
  const char *v23; // [rsp+8h] [rbp-80h]
  const char *v24; // [rsp+10h] [rbp-78h]
  const char *v25; // [rsp+18h] [rbp-70h]
  const char *v26; // [rsp+20h] [rbp-68h]
  const char *v27; // [rsp+28h] [rbp-60h]
  const char *v28; // [rsp+30h] [rbp-58h]
  const char *v29; // [rsp+38h] [rbp-50h]
  const char *v30; // [rsp+40h] [rbp-48h]
  const char *v31; // [rsp+48h] [rbp-40h]
  const char *v32; // [rsp+50h] [rbp-38h]
  const char *v33; // [rsp+58h] [rbp-30h]
  __int64 v34; // [rsp+60h] [rbp-28h]
  __int64 v35; // [rsp+68h] [rbp-20h]

  v1 = qword_613328;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [NUMBER]...\n  or:  %s OPTION\n", 5);
  __printf_chk(1LL, v3, v1, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "Print the prime factors of each specified integer NUMBER.  If none\n"
         "are specified on the command line, read them from standard input.\n"
         "\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v9, v8);
  v22 = "[";
  v10 = &v22;
  v23 = "test invocation";
  v24 = "coreutils";
  v25 = "Multi-call invocation";
  v26 = "sha224sum";
  v27 = "sha2 utilities";
  v28 = "sha256sum";
  v29 = "sha2 utilities";
  v30 = "sha384sum";
  v31 = "sha2 utilities";
  v32 = "sha512sum";
  v33 = "sha2 utilities";
  v34 = 0LL;
  v35 = 0LL;
  do
    v10 += 2;
  while ( *v10 && strcmp("factor", *v10) );
  v11 = (char *)v10[1];
  if ( v11 )
  {
    v12 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v12, &unk_40BDAC, "https://www.gnu.org/software/coreutils/");
    v13 = setlocale(5, 0LL);
    if ( !v13 || !strncmp(v13, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v17 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v17, &unk_40BDAC, "https://www.gnu.org/software/coreutils/");
    v18 = setlocale(5, 0LL);
    if ( !v18 || !strncmp(v18, "en_", 3uLL) )
    {
      v11 = "factor";
      v19 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v14 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v19, "https://www.gnu.org/software/coreutils/", "factor");
LABEL_12:
      v16 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v16, v11, v14);
LABEL_3:
      exit(status);
    }
    v11 = "factor";
  }
  v20 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v20, "factor", v21);
LABEL_10:
  v14 = "Multi-call invocation" + 10;
  v15 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v15, "https://www.gnu.org/software/coreutils/", "factor");
  if ( v11 != "factor" )
    v14 = "";
  goto LABEL_12;
}

__int64 sub_4045F0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_4091B0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_613318 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_613320 )
      {
        v5 = sub_406DA0();
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
  result = sub_4091B0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_404690(int fd, void *buf, size_t n)
{
  char *v3; // rbp
  size_t v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax

  if ( !n )
    return 0LL;
  v3 = (char *)buf;
  v4 = n;
  v5 = 0LL;
  do
  {
    v6 = sub_4072E0(fd, v3, v4);
    if ( v6 == -1 )
      break;
    if ( !v6 )
    {
      *__errno_location() = 28;
      return v5;
    }
    v5 += v6;
    v3 += v6;
    v4 -= v6;
  }
  while ( v4 );
  return v5;
}

__int64 __fastcall sub_404710(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  while ( 1 )
  {
    *(_BYTE *)--v2 = a1 % 0xA + 48;
    if ( a1 <= 9 )
      break;
    a1 /= 0xAuLL;
  }
  return v2;
}

char *__fastcall sub_404760(const char *a1)
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
  qword_613328 = v1;
  program_invocation_name = v1;
  return result;
}

noreturn void  sub_404800()
{
  __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
}

__int64 __fastcall sub_404820(char *a1, __int64 a2)
{
  char *v2; // rbx
  char *v3; // rbp
  char *v4; // r13
  __int64 v5; // rbx
  mbstate_t *v6; // r13
  wchar_t v8; // er15
  char *v9; // rbx
  size_t v10; // rax
  char *v11; // rbx
  __int64 v12; // rax
  size_t v13; // rax
  wchar_t v14; // eax
  wchar_t v15; // eax
  size_t v16; // rax
  char *v17; // r15
  __int64 v18; // rax
  wint_t v19; // ebx
  wchar_t v20; // eax
  size_t v21; // rax
  char *v22; // r15
  __int64 v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  char *v27; // rbx
  __int64 v28; // rax
  size_t v29; // rax
  char *v30; // r13
  __int64 v31; // rax
  size_t v32; // rax
  char *s; // [rsp+8h] [rbp-C0h]
  char v34; // [rsp+10h] [rbp-B8h]
  char v35; // [rsp+10h] [rbp-B8h]
  mbstate_t ps; // [rsp+14h] [rbp-B4h]
  char v37; // [rsp+1Ch] [rbp-ACh]
  char *v38; // [rsp+20h] [rbp-A8h]
  size_t v39; // [rsp+28h] [rbp-A0h]
  char v40; // [rsp+30h] [rbp-98h]
  wchar_t pwc; // [rsp+34h] [rbp-94h]
  char v42; // [rsp+50h] [rbp-78h]
  mbstate_t v43; // [rsp+54h] [rbp-74h]
  char v44; // [rsp+5Ch] [rbp-6Ch]
  char *v45; // [rsp+60h] [rbp-68h]
  size_t v46; // [rsp+68h] [rbp-60h]
  char v47; // [rsp+70h] [rbp-58h]
  wchar_t v48; // [rsp+74h] [rbp-54h]

  v2 = a1;
  s = (char *)sub_4073A0(a2, 2LL);
  while ( 2 )
  {
    if ( !*v2 )
    {
LABEL_11:
      LODWORD(v6) = 0;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v3 = (char *)sub_40A420(v2, s);
      if ( !v3 )
        goto LABEL_11;
      if ( __ctype_get_mb_cur_max() > 1 )
        break;
      v4 = &v3[strlen(s)];
      if ( v2 >= v3 || !((*__ctype_b_loc())[(unsigned __int8)*(v3 - 1)] & 8) )
      {
        v5 = (unsigned __int8)*v4;
        if ( !(_BYTE)v5 || !((*__ctype_b_loc())[v5] & 8) )
        {
          LODWORD(v6) = 1;
          goto LABEL_12;
        }
      }
      if ( *v3 )
      {
        v2 = v3 + 1;
        if ( v3[1] )
          continue;
      }
      goto LABEL_11;
    }
    v38 = v2;
    v6 = &ps;
    v34 = 0;
    ps = 0LL;
    v37 = 0;
    if ( v2 >= v3 )
      goto LABEL_84;
    do
    {
      if ( !v34 )
      {
        if ( ((unsigned int)dword_410680[((unsigned __int8)*v38 >> 5) & 7] >> *v38) & 1 )
        {
          v39 = 1LL;
          v8 = *v38;
          v40 = 1;
          pwc = v8;
          v37 = 1;
          goto LABEL_17;
        }
        if ( !mbsinit(&ps) )
          goto LABEL_108;
        v34 = 1;
      }
      v10 = __ctype_get_mb_cur_max();
      v11 = v38;
      sub_407340(v38, v10);
      v12 = sub_408FC0(&pwc, v11);
      v39 = v12;
      if ( v12 == -1 )
      {
        v8 = pwc;
        v9 = v38;
        v40 = 0;
        v39 = 1LL;
        goto LABEL_19;
      }
      if ( v12 == -2 )
      {
        v9 = v38;
        v13 = strlen(v38);
        v40 = 0;
        v8 = pwc;
        v39 = v13;
        goto LABEL_19;
      }
      if ( v12 )
      {
        v8 = pwc;
      }
      else
      {
        v39 = 1LL;
        if ( *v38 )
          goto LABEL_109;
        v8 = pwc;
        if ( pwc )
LABEL_110:
          __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
      }
      v40 = 1;
      if ( mbsinit(&ps) )
        v34 = 0;
      v37 = 1;
LABEL_17:
      if ( !v8 )
LABEL_111:
        abort();
      v9 = v38;
LABEL_19:
      v37 = 0;
      v38 = &v9[v39];
    }
    while ( &v9[v39] < v3 );
    if ( v40 )
    {
      LOBYTE(v6) = iswalnum(v8) == 0;
      goto LABEL_36;
    }
LABEL_84:
    LODWORD(v6) = 1;
LABEL_36:
    v38 = v3;
    v35 = 0;
    ps = 0LL;
    v37 = 0;
    v45 = s;
    v42 = 0;
    v43 = 0LL;
    v44 = 0;
    while ( 2 )
    {
      if ( !v42 )
      {
        if ( !(((unsigned int)dword_410680[((unsigned __int8)*v45 >> 5) & 7] >> *v45) & 1) )
        {
          if ( !mbsinit(&v43) )
            goto LABEL_108;
          v42 = 1;
          goto LABEL_46;
        }
        v46 = 1LL;
        v14 = *v45;
        v47 = 1;
        v48 = v14;
        v44 = 1;
        if ( !v14 )
          break;
        goto LABEL_39;
      }
LABEL_46:
      v16 = __ctype_get_mb_cur_max();
      v17 = v45;
      sub_407340(v45, v16);
      v18 = sub_408FC0(&v48, v17);
      v46 = v18;
      switch ( v18 )
      {
        case -1LL:
          v46 = 1LL;
          v47 = 0;
          v44 = 1;
          goto LABEL_39;
        case -2LL:
          v24 = strlen(v45);
          v47 = 0;
          v46 = v24;
          v44 = 1;
          goto LABEL_39;
        case 0LL:
          v46 = 1LL;
          if ( *v45 )
            goto LABEL_109;
          if ( v48 )
            goto LABEL_110;
          break;
      }
      v47 = 1;
      if ( mbsinit(&v43) )
        v42 = 0;
      v44 = 1;
      if ( v48 )
      {
LABEL_39:
        if ( v37 )
        {
          if ( v40 )
          {
LABEL_43:
            if ( !pwc )
              goto LABEL_111;
            goto LABEL_44;
          }
        }
        else
        {
          if ( !v35 )
          {
            if ( ((unsigned int)dword_410680[((unsigned __int8)*v38 >> 5) & 7] >> *v38) & 1 )
            {
              v39 = 1LL;
              v15 = *v38;
              v40 = 1;
              pwc = v15;
              v37 = 1;
              goto LABEL_43;
            }
            if ( !mbsinit(&ps) )
              goto LABEL_108;
            v35 = 1;
          }
          v21 = __ctype_get_mb_cur_max();
          v22 = v38;
          sub_407340(v38, v21);
          v23 = sub_408FC0(&pwc, v22);
          v39 = v23;
          if ( v23 == -1 )
          {
            v39 = 1LL;
            v40 = 0;
          }
          else
          {
            if ( v23 != -2 )
            {
              if ( !v23 )
              {
                v39 = 1LL;
                if ( *v38 )
                  goto LABEL_109;
                if ( pwc )
                  goto LABEL_110;
              }
              v40 = 1;
              if ( mbsinit(&ps) )
                v35 = 0;
              v37 = 1;
              goto LABEL_43;
            }
            v25 = strlen(v38);
            v40 = 0;
            v39 = v25;
          }
        }
LABEL_44:
        v38 += v39;
        v45 += v46;
        v37 = 0;
        v44 = 0;
        continue;
      }
      break;
    }
    if ( v37 )
    {
      v19 = pwc;
      if ( v40 )
        goto LABEL_58;
      goto LABEL_59;
    }
    if ( !v35 )
    {
      if ( ((unsigned int)dword_410680[((unsigned __int8)*v38 >> 5) & 7] >> *v38) & 1 )
      {
        v39 = 1LL;
        v19 = *v38;
        v40 = 1;
        pwc = v19;
        v37 = 1;
        goto LABEL_58;
      }
      if ( !mbsinit(&ps) )
        goto LABEL_108;
    }
    v26 = __ctype_get_mb_cur_max();
    v27 = v38;
    sub_407340(v38, v26);
    v28 = sub_408FC0(&pwc, v27);
    v39 = v28;
    if ( v28 == -1 )
    {
      v39 = 1LL;
      v19 = pwc;
      v40 = 0;
      v37 = 1;
      goto LABEL_59;
    }
    if ( v28 == -2 )
    {
      v32 = strlen(v38);
      v40 = 0;
      v19 = pwc;
      v39 = v32;
      v37 = 1;
      goto LABEL_59;
    }
    if ( v28 )
    {
      v19 = pwc;
      goto LABEL_90;
    }
    v39 = 1LL;
    if ( *v38 )
      goto LABEL_109;
    v19 = pwc;
    if ( pwc )
LABEL_104:
      sub_404800();
LABEL_90:
    v40 = 1;
    mbsinit(&ps);
    v37 = 1;
LABEL_58:
    if ( v19 )
    {
LABEL_59:
      if ( !v40 || !iswalnum(v19) )
        break;
LABEL_62:
      v38 = v3;
      ps = 0LL;
      v37 = 0;
      if ( ((unsigned int)dword_410680[((unsigned __int8)*v3 >> 5) & 7] >> *v3) & 1 )
      {
        v39 = 1LL;
        v20 = *v3;
        v40 = 1;
        pwc = v20;
        v37 = 1;
        goto LABEL_64;
      }
      if ( mbsinit(&ps) )
      {
        v29 = __ctype_get_mb_cur_max();
        v30 = v38;
        sub_407340(v38, v29);
        v31 = sub_408FC0(&pwc, v30);
        v39 = v31;
        switch ( v31 )
        {
          case -1LL:
            v39 = 1LL;
            goto LABEL_65;
          case -2LL:
            v39 = strlen(v38);
            goto LABEL_65;
          case 0LL:
            v39 = 1LL;
            if ( !*v38 )
            {
              if ( pwc )
                goto LABEL_104;
              break;
            }
LABEL_109:
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
            break;
        }
        v40 = 1;
        mbsinit(&ps);
        v37 = 1;
LABEL_64:
        if ( pwc )
        {
LABEL_65:
          v2 = &v3[v39];
          continue;
        }
        goto LABEL_11;
      }
LABEL_108:
      __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
    }
    break;
  }
  if ( !(_BYTE)v6 )
    goto LABEL_62;
LABEL_12:
  free(s);
  return (unsigned int)v6;
}

__int64 __fastcall sub_404820(char *a1, __int64 a2)
{
  char *v2; // rbx
  char *v3; // rbp
  char *v4; // r13
  __int64 v5; // rbx
  mbstate_t *v6; // r13
  wchar_t v8; // er15
  char *v9; // rbx
  size_t v10; // rax
  char *v11; // rbx
  __int64 v12; // rax
  size_t v13; // rax
  wchar_t v14; // eax
  wchar_t v15; // eax
  size_t v16; // rax
  char *v17; // r15
  __int64 v18; // rax
  wint_t v19; // ebx
  wchar_t v20; // eax
  size_t v21; // rax
  char *v22; // r15
  __int64 v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  char *v27; // rbx
  __int64 v28; // rax
  size_t v29; // rax
  char *v30; // r13
  __int64 v31; // rax
  size_t v32; // rax
  char *s; // [rsp+8h] [rbp-C0h]
  char v34; // [rsp+10h] [rbp-B8h]
  char v35; // [rsp+10h] [rbp-B8h]
  mbstate_t ps; // [rsp+14h] [rbp-B4h]
  char v37; // [rsp+1Ch] [rbp-ACh]
  char *v38; // [rsp+20h] [rbp-A8h]
  size_t v39; // [rsp+28h] [rbp-A0h]
  char v40; // [rsp+30h] [rbp-98h]
  wchar_t pwc; // [rsp+34h] [rbp-94h]
  char v42; // [rsp+50h] [rbp-78h]
  mbstate_t v43; // [rsp+54h] [rbp-74h]
  char v44; // [rsp+5Ch] [rbp-6Ch]
  char *v45; // [rsp+60h] [rbp-68h]
  size_t v46; // [rsp+68h] [rbp-60h]
  char v47; // [rsp+70h] [rbp-58h]
  wchar_t v48; // [rsp+74h] [rbp-54h]

  v2 = a1;
  s = (char *)sub_4073A0(a2, 2LL);
  while ( 2 )
  {
    if ( !*v2 )
    {
LABEL_11:
      LODWORD(v6) = 0;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v3 = (char *)sub_40A420(v2, s);
      if ( !v3 )
        goto LABEL_11;
      if ( __ctype_get_mb_cur_max() > 1 )
        break;
      v4 = &v3[strlen(s)];
      if ( v2 >= v3 || !((*__ctype_b_loc())[(unsigned __int8)*(v3 - 1)] & 8) )
      {
        v5 = (unsigned __int8)*v4;
        if ( !(_BYTE)v5 || !((*__ctype_b_loc())[v5] & 8) )
        {
          LODWORD(v6) = 1;
          goto LABEL_12;
        }
      }
      if ( *v3 )
      {
        v2 = v3 + 1;
        if ( v3[1] )
          continue;
      }
      goto LABEL_11;
    }
    v38 = v2;
    v6 = &ps;
    v34 = 0;
    ps = 0LL;
    v37 = 0;
    if ( v2 >= v3 )
      goto LABEL_84;
    do
    {
      if ( !v34 )
      {
        if ( ((unsigned int)dword_410680[((unsigned __int8)*v38 >> 5) & 7] >> *v38) & 1 )
        {
          v39 = 1LL;
          v8 = *v38;
          v40 = 1;
          pwc = v8;
          v37 = 1;
          goto LABEL_17;
        }
        if ( !mbsinit(&ps) )
          goto LABEL_108;
        v34 = 1;
      }
      v10 = __ctype_get_mb_cur_max();
      v11 = v38;
      sub_407340(v38, v10);
      v12 = sub_408FC0(&pwc, v11);
      v39 = v12;
      if ( v12 == -1 )
      {
        v8 = pwc;
        v9 = v38;
        v40 = 0;
        v39 = 1LL;
        goto LABEL_19;
      }
      if ( v12 == -2 )
      {
        v9 = v38;
        v13 = strlen(v38);
        v40 = 0;
        v8 = pwc;
        v39 = v13;
        goto LABEL_19;
      }
      if ( v12 )
      {
        v8 = pwc;
      }
      else
      {
        v39 = 1LL;
        if ( *v38 )
          goto LABEL_109;
        v8 = pwc;
        if ( pwc )
LABEL_110:
          __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
      }
      v40 = 1;
      if ( mbsinit(&ps) )
        v34 = 0;
      v37 = 1;
LABEL_17:
      if ( !v8 )
LABEL_111:
        abort();
      v9 = v38;
LABEL_19:
      v37 = 0;
      v38 = &v9[v39];
    }
    while ( &v9[v39] < v3 );
    if ( v40 )
    {
      LOBYTE(v6) = iswalnum(v8) == 0;
      goto LABEL_36;
    }
LABEL_84:
    LODWORD(v6) = 1;
LABEL_36:
    v38 = v3;
    v35 = 0;
    ps = 0LL;
    v37 = 0;
    v45 = s;
    v42 = 0;
    v43 = 0LL;
    v44 = 0;
    while ( 2 )
    {
      if ( !v42 )
      {
        if ( !(((unsigned int)dword_410680[((unsigned __int8)*v45 >> 5) & 7] >> *v45) & 1) )
        {
          if ( !mbsinit(&v43) )
            goto LABEL_108;
          v42 = 1;
          goto LABEL_46;
        }
        v46 = 1LL;
        v14 = *v45;
        v47 = 1;
        v48 = v14;
        v44 = 1;
        if ( !v14 )
          break;
        goto LABEL_39;
      }
LABEL_46:
      v16 = __ctype_get_mb_cur_max();
      v17 = v45;
      sub_407340(v45, v16);
      v18 = sub_408FC0(&v48, v17);
      v46 = v18;
      switch ( v18 )
      {
        case -1LL:
          v46 = 1LL;
          v47 = 0;
          v44 = 1;
          goto LABEL_39;
        case -2LL:
          v24 = strlen(v45);
          v47 = 0;
          v46 = v24;
          v44 = 1;
          goto LABEL_39;
        case 0LL:
          v46 = 1LL;
          if ( *v45 )
            goto LABEL_109;
          if ( v48 )
            goto LABEL_110;
          break;
      }
      v47 = 1;
      if ( mbsinit(&v43) )
        v42 = 0;
      v44 = 1;
      if ( v48 )
      {
LABEL_39:
        if ( v37 )
        {
          if ( v40 )
          {
LABEL_43:
            if ( !pwc )
              goto LABEL_111;
            goto LABEL_44;
          }
        }
        else
        {
          if ( !v35 )
          {
            if ( ((unsigned int)dword_410680[((unsigned __int8)*v38 >> 5) & 7] >> *v38) & 1 )
            {
              v39 = 1LL;
              v15 = *v38;
              v40 = 1;
              pwc = v15;
              v37 = 1;
              goto LABEL_43;
            }
            if ( !mbsinit(&ps) )
              goto LABEL_108;
            v35 = 1;
          }
          v21 = __ctype_get_mb_cur_max();
          v22 = v38;
          sub_407340(v38, v21);
          v23 = sub_408FC0(&pwc, v22);
          v39 = v23;
          if ( v23 == -1 )
          {
            v39 = 1LL;
            v40 = 0;
          }
          else
          {
            if ( v23 != -2 )
            {
              if ( !v23 )
              {
                v39 = 1LL;
                if ( *v38 )
                  goto LABEL_109;
                if ( pwc )
                  goto LABEL_110;
              }
              v40 = 1;
              if ( mbsinit(&ps) )
                v35 = 0;
              v37 = 1;
              goto LABEL_43;
            }
            v25 = strlen(v38);
            v40 = 0;
            v39 = v25;
          }
        }
LABEL_44:
        v38 += v39;
        v45 += v46;
        v37 = 0;
        v44 = 0;
        continue;
      }
      break;
    }
    if ( v37 )
    {
      v19 = pwc;
      if ( v40 )
        goto LABEL_58;
      goto LABEL_59;
    }
    if ( !v35 )
    {
      if ( ((unsigned int)dword_410680[((unsigned __int8)*v38 >> 5) & 7] >> *v38) & 1 )
      {
        v39 = 1LL;
        v19 = *v38;
        v40 = 1;
        pwc = v19;
        v37 = 1;
        goto LABEL_58;
      }
      if ( !mbsinit(&ps) )
        goto LABEL_108;
    }
    v26 = __ctype_get_mb_cur_max();
    v27 = v38;
    sub_407340(v38, v26);
    v28 = sub_408FC0(&pwc, v27);
    v39 = v28;
    if ( v28 == -1 )
    {
      v39 = 1LL;
      v19 = pwc;
      v40 = 0;
      v37 = 1;
      goto LABEL_59;
    }
    if ( v28 == -2 )
    {
      v32 = strlen(v38);
      v40 = 0;
      v19 = pwc;
      v39 = v32;
      v37 = 1;
      goto LABEL_59;
    }
    if ( v28 )
    {
      v19 = pwc;
      goto LABEL_90;
    }
    v39 = 1LL;
    if ( *v38 )
      goto LABEL_109;
    v19 = pwc;
    if ( pwc )
LABEL_104:
      sub_404800();
LABEL_90:
    v40 = 1;
    mbsinit(&ps);
    v37 = 1;
LABEL_58:
    if ( v19 )
    {
LABEL_59:
      if ( !v40 || !iswalnum(v19) )
        break;
LABEL_62:
      v38 = v3;
      ps = 0LL;
      v37 = 0;
      if ( ((unsigned int)dword_410680[((unsigned __int8)*v3 >> 5) & 7] >> *v3) & 1 )
      {
        v39 = 1LL;
        v20 = *v3;
        v40 = 1;
        pwc = v20;
        v37 = 1;
        goto LABEL_64;
      }
      if ( mbsinit(&ps) )
      {
        v29 = __ctype_get_mb_cur_max();
        v30 = v38;
        sub_407340(v38, v29);
        v31 = sub_408FC0(&pwc, v30);
        v39 = v31;
        switch ( v31 )
        {
          case -1LL:
            v39 = 1LL;
            goto LABEL_65;
          case -2LL:
            v39 = strlen(v38);
            goto LABEL_65;
          case 0LL:
            v39 = 1LL;
            if ( !*v38 )
            {
              if ( pwc )
                goto LABEL_104;
              break;
            }
LABEL_109:
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
            break;
        }
        v40 = 1;
        mbsinit(&ps);
        v37 = 1;
LABEL_64:
        if ( pwc )
        {
LABEL_65:
          v2 = &v3[v39];
          continue;
        }
        goto LABEL_11;
      }
LABEL_108:
      __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
    }
    break;
  }
  if ( !(_BYTE)v6 )
    goto LABEL_62;
LABEL_12:
  free(s);
  return (unsigned int)v6;
}

char *__fastcall sub_405150(char *s2, char *s)
{
  char *v2; // rbx
  char *v3; // r13
  const char *v4; // r14
  char *v5; // r15
  char *v6; // r12
  char *v7; // r14
  char *v8; // rbp
  size_t v10; // rbx
  size_t v11; // rax
  __int64 v12; // rbx
  size_t v13; // rax
  size_t v14; // r15
  void *v15; // rax
  char *v16; // rax
  char *ptr; // [rsp+8h] [rbp-40h]

  v2 = s;
  v3 = dcgettext(0LL, s2, 5);
  v4 = (const char *)sub_409270();
  if ( !(unsigned int)sub_409150(v4, "UTF-8") )
  {
    if ( s )
    {
      v5 = s;
      v6 = s;
    }
    else
    {
      v5 = 0LL;
      v6 = s2;
    }
    v7 = 0LL;
LABEL_5:
    if ( !strcmp(v3, s2) )
      return v6;
    v8 = 0LL;
    if ( (unsigned __int8)sub_404820(v3, (__int64)s2) )
      goto LABEL_11;
    goto LABEL_7;
  }
  v6 = (char *)sub_4081C0(s, "UTF-8", v4);
  v13 = strlen(v4);
  v14 = v13;
  v15 = (void *)sub_407EE0(v13 + 11);
  v16 = (char *)memcpy(v15, v4, v14);
  strcpy(&v16[v14], "//TRANSLIT");
  ptr = v16;
  v7 = (char *)sub_4081C0(s, "UTF-8", v16);
  free(ptr);
  if ( !v7 )
  {
    if ( v6 )
      goto LABEL_24;
    goto LABEL_33;
  }
  if ( strchr(v7, 63) )
  {
    free(v7);
    if ( v6 )
    {
LABEL_24:
      if ( !strcmp(v3, s2) )
        return v6;
      v5 = 0LL;
      v7 = 0LL;
      goto LABEL_26;
    }
LABEL_33:
    v6 = s2;
    v5 = 0LL;
    v2 = 0LL;
    v7 = 0LL;
    goto LABEL_5;
  }
  if ( !v6 )
  {
    v5 = v7;
    v2 = 0LL;
    v6 = v7;
    goto LABEL_5;
  }
  v5 = v7;
  if ( strcmp(v3, s2) )
  {
LABEL_26:
    if ( (unsigned __int8)sub_404820(v3, (__int64)s2) )
    {
      v8 = v6;
      goto LABEL_10;
    }
    v2 = v6;
    v8 = v6;
LABEL_7:
    if ( (!v2 || !(unsigned __int8)sub_404820(v3, (__int64)v2))
      && (!v5 || !(unsigned __int8)sub_404820(v3, (__int64)v5)) )
    {
      v10 = strlen(v3);
      v11 = strlen(v6);
      v12 = sub_407EE0(v10 + v11 + 4);
      __sprintf_chk(v12, 1LL, -1LL, "%s (%s)", v3, v6);
      if ( v8 )
        free(v8);
      v6 = (char *)v12;
      if ( !v7 )
        return v6;
LABEL_12:
      free(v7);
      return v6;
    }
    if ( !v8 )
    {
LABEL_11:
      v6 = v3;
      if ( !v7 )
        return v6;
      goto LABEL_12;
    }
LABEL_10:
    free(v8);
    goto LABEL_11;
  }
  if ( v6 != v7 )
    free(v7);
  return v6;
}

const char *__fastcall sub_4053D0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_409270();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40F3B0;
      if ( !v5 )
        v2 = (char *)&unk_40F3A5;
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
    v2 = (char *)&unk_40F3AC;
    if ( !v5 )
      v2 = (char *)&unk_40F3A9;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "*iter->cur.ptr == '\\0'" + 21;
  return v6;
}

unsigned __int64 __fastcall sub_4054D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  const char *v54; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
      s2 = "*iter->cur.ptr == '\\0'" + 21;
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
      s2 = "*iter->cur.ptr == '\\0'" + 21;
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
        s2 = "*iter->cur.ptr == '\\0'" + 21;
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
      s2 = "*iter->cur.ptr == '\\0'" + 21;
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
            return sub_4054D0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4054D0((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "*iter->cur.ptr == '\\0'" + 21;
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
              return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
          return sub_4054D0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_408FC0((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4054D0((__int64)v9, v10, s);
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
      return sub_4054D0((__int64)v9, v10, s);
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
        a8 = sub_4053D0("`", v11);
        v47 = sub_4053D0("'", v11);
        v14 = v55;
        a9 = (char *)v47;
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

unsigned __int64 __fastcall sub_4054D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  const char *v54; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
      s2 = "*iter->cur.ptr == '\\0'" + 21;
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
      s2 = "*iter->cur.ptr == '\\0'" + 21;
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
        s2 = "*iter->cur.ptr == '\\0'" + 21;
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
      s2 = "*iter->cur.ptr == '\\0'" + 21;
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
            return sub_4054D0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4054D0((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "*iter->cur.ptr == '\\0'" + 21;
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
              return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
          return sub_4054D0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_408FC0((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4054D0((__int64)v9, v10, s);
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
      return sub_4054D0((__int64)v9, v10, s);
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
        a8 = sub_4053D0("`", v11);
        v47 = sub_4053D0("'", v11);
        v14 = v55;
        a9 = (char *)v47;
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

_BYTE *__fastcall sub_406700(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // er8
  char *v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v17 = a2;
  v6 = __errno_location();
  v7 = off_613298;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6132B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408130();
    v9 = 16LL * (a1 + 1);
    if ( off_613298 == &xmmword_6132A0 )
    {
      v7 = (__int128 *)sub_407F40(0LL, v9);
      off_613298 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6132A0);
    }
    else
    {
      off_613298 = (__int128 *)sub_407F40(off_613298, v9);
      v7 = off_613298;
    }
    memset(&v7[dword_6132B0], 0, 16LL * (a1 + 1 - dword_6132B0));
    dword_6132B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_4054D0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_613340 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_407EE0(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4054D0(v14, v13, v17, v4, v15, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_406700(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // er8
  char *v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v17 = a2;
  v6 = __errno_location();
  v7 = off_613298;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6132B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408130();
    v9 = 16LL * (a1 + 1);
    if ( off_613298 == &xmmword_6132A0 )
    {
      v7 = (__int128 *)sub_407F40(0LL, v9);
      off_613298 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6132A0);
    }
    else
    {
      off_613298 = (__int128 *)sub_407F40(off_613298, v9);
      v7 = off_613298;
    }
    memset(&v7[dword_6132B0], 0, 16LL * (a1 + 1 - dword_6132B0));
    dword_6132B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_4054D0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_613340 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_407EE0(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4054D0(v14, v13, v17, v4, v15, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_406C20(int a1, int a2, char *a3)
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
  return sub_406700(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406C20(int a1, int a2, char *a3)
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
  return sub_406700(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406C90(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_406700(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_406C90(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_406700(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_406D20(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_613470;
  v7 = _mm_load_si128((const __m128i *)&xmmword_613440);
  v8 = _mm_load_si128((const __m128i *)&xmmword_613450);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_613460);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_406700(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_406DA0(char *a1)
{
  return sub_406D20(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_406DD0(int a1, int a2, char *a3)
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
  return sub_406700(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406DD0(int a1, int a2, char *a3)
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
  return sub_406700(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406E40(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_613440);
  v7 = _mm_load_si128((const __m128i *)&xmmword_613450);
  v8 = _mm_load_si128((const __m128i *)&xmmword_613460);
  v9 = qword_613470;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_406700(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_406F50(char *a1)
{
  return sub_406700(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_613260);
}

void __fastcall sub_406F70(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
}

unsigned __int64 __fastcall sub_406F80(_IO_FILE *a1, unsigned __int8 *a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // r13
  _IO_FILE *v5; // rbp
  unsigned __int8 *v6; // rdx
  unsigned __int64 v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  _IO_FILE *v12; // r15
  __int64 v13; // r14
  unsigned __int64 i; // r12
  _BYTE *v15; // rdx
  __int64 v16; // rax
  char *v17; // rax
  __int128 v19; // [rsp+0h] [rbp-58h]
  __int128 v20; // [rsp+10h] [rbp-48h]

  v4 = a4;
  v5 = a1;
  v19 = 0LL;
  v20 = 0LL;
  if ( !a3 )
    goto LABEL_7;
  v6 = &a2[a3];
  a1 = (_IO_FILE *)1;
  do
  {
    v7 = *a2++;
    *(_QWORD *)((char *)&v19 + ((v7 >> 3) & 0x18)) |= 1LL << v7;
  }
  while ( v6 != a2 );
  v8 = v5->_IO_read_ptr;
  if ( v8 >= v5->_IO_read_end )
    goto LABEL_8;
LABEL_5:
  v5->_IO_read_ptr = v8 + 1;
  v9 = (unsigned __int8)*v8;
  do
  {
    v10 = *((_QWORD *)&v19 + ((unsigned __int64)(int)v9 >> 6));
    if ( !_bittest64(&v10, v9) )
      break;
LABEL_7:
    v8 = v5->_IO_read_ptr;
    if ( v8 < v5->_IO_read_end )
      goto LABEL_5;
LABEL_8:
    a1 = v5;
    v11 = __uflow(v5);
    v9 = (unsigned int)v11;
  }
  while ( v11 >= 0 );
  v12 = (_IO_FILE *)v4[1];
  v13 = *v4;
  for ( i = 0LL; (v9 & 0x80000000) == 0LL || i; ++i )
  {
    if ( i == v13 )
    {
      if ( v12 )
      {
        if ( i > 0x5555555555555553LL )
          goto LABEL_27;
        v13 = i + (i >> 1) + 1;
      }
      else if ( i )
      {
        if ( (i & 0x8000000000000000LL) != 0LL )
LABEL_27:
          sub_408130(a1);
      }
      else
      {
        v13 = 128LL;
      }
      a1 = v12;
      v12 = (_IO_FILE *)sub_407F40(v12, v13);
      v15 = (char *)v12 + i;
      if ( (v9 & 0x80000000) != 0LL )
      {
LABEL_21:
        *v15 = 0;
        v4[1] = (__int64)v12;
        *v4 = v13;
        return i;
      }
    }
    else
    {
      v15 = (char *)v12 + i;
      if ( (v9 & 0x80000000) != 0LL )
        goto LABEL_21;
    }
    v16 = *((_QWORD *)&v19 + ((unsigned __int64)(int)v9 >> 6));
    if ( _bittest64(&v16, v9) )
      goto LABEL_21;
    *v15 = v9;
    v17 = v5->_IO_read_ptr;
    if ( v17 >= v5->_IO_read_end )
    {
      a1 = v5;
      v9 = (unsigned int)__uflow(v5);
    }
    else
    {
      v5->_IO_read_ptr = v17 + 1;
      v9 = (unsigned __int8)*v17;
    }
  }
  return -1LL;
}

unsigned __int64 __fastcall sub_407100(_IO_FILE *a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 *a5, _IO_FILE **a6)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  _IO_FILE *v12; // r13
  void *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  void *v17; // rdi
  _IO_FILE *v19; // [rsp+0h] [rbp-78h]
  unsigned __int8 *v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+10h] [rbp-68h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  _IO_FILE **v23; // [rsp+20h] [rbp-58h]
  __int64 *v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  void *src; // [rsp+38h] [rbp-40h]

  v19 = a1;
  v20 = a3;
  v21 = a4;
  v24 = a5;
  v23 = a6;
  if ( a2 )
  {
    v6 = a2 + 1;
    v7 = 8 * (a2 + 1);
    if ( (a2 + 1) & 0x1000000000000000LL || (unsigned __int64)(a2 + 1) >> 61 != 0 )
LABEL_4:
      sub_408130(a1);
  }
  else
  {
    v7 = 512LL;
    v6 = 64LL;
  }
  v8 = sub_407EE0(v7);
  v9 = v7;
  v10 = 0LL;
  v11 = v8;
  v25 = 0LL;
  src = 0LL;
  v12 = (_IO_FILE *)sub_407EE0(v9);
  while ( 1 )
  {
    a1 = v19;
    v14 = sub_406F80(v19, v20, v21, &v25);
    v15 = v14;
    if ( v10 < v6 )
    {
      if ( v14 == -1LL )
        break;
      goto LABEL_8;
    }
    if ( v11 )
    {
      if ( v6 > 0xAAAAAAAAAAAAAA9LL )
        goto LABEL_4;
      v6 += (v6 >> 1) + 1;
      v16 = 8 * v6;
    }
    else if ( v6 )
    {
      v16 = 8 * v6;
      if ( v6 & 0x1000000000000000LL || v6 >> 61 != 0 )
        goto LABEL_4;
    }
    else
    {
      v16 = 128LL;
      v6 = 16LL;
    }
    v22 = v16;
    a1 = v12;
    v11 = sub_407F40(v11, v16);
    v12 = (_IO_FILE *)sub_407F40(v12, v22);
    if ( v15 == -1LL )
      break;
LABEL_8:
    if ( (__int64)(v15 + 1) < 0 )
      goto LABEL_4;
    v13 = (void *)sub_407EE0(v15 + 1);
    *((_QWORD *)&v12->_flags + v10) = v15;
    *(_QWORD *)(v11 + 8 * v10++) = memcpy(v13, src, v15 + 1);
  }
  *(_QWORD *)(v11 + 8 * v10) = 0LL;
  v17 = src;
  *((_QWORD *)&v12->_flags + v10) = 0LL;
  free(v17);
  *v24 = v11;
  if ( v23 )
    *v23 = v12;
  else
    free(v12);
  return v10;
}

ssize_t __fastcall sub_4072E0(int fd, void *buf, size_t n)
{
  size_t v3; // rbx
  ssize_t v4; // rbp
  int v5; // eax

  v3 = n;
  while ( 1 )
  {
    v4 = write(fd, buf, v3);
    if ( v4 >= 0 )
      break;
    v5 = *__errno_location();
    if ( v5 != 4 )
    {
      if ( v5 != 22 || v3 <= 0x7FFFE000 )
        return v4;
      v3 = 2147475456LL;
    }
  }
  return v4;
}

__int64 __fastcall sub_407340(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  bool v5; // zf
  __int64 result; // rax

  v2 = a2;
  v3 = sub_409040(a1, 0LL, a2);
  v4 = v3 - a1 + 1;
  v5 = v3 == 0;
  result = v2;
  if ( !v5 )
    result = v4;
  return result;
}

noreturn void  sub_407380()
{
  __assert_fail("iter->cur.wc == 0", "lib/mbiter.h", 0xAAu, "mbiter_multi_next");
}

char *__usercall sub_4073A0(const char *a1, int a2, char *a3)
{
  char *v3; // rax
  char *v4; // r12
  int *v5; // rbp
  int v6; // edx
  unsigned int v7; // eax
  char *v8; // rbx
  int v9; // er14
  wint_t v10; // eax
  char *v11; // r15
  unsigned __int64 v12; // rbp
  int v13; // eax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  const char *v18; // r13
  const unsigned __int16 *v19; // rax
  size_t v20; // rax
  unsigned __int8 *v21; // rbx
  const unsigned __int16 *v22; // rdx
  int *v23; // rbx
  int v24; // edx
  unsigned int v25; // eax
  char *v26; // r14
  wint_t v27; // eax
  __int64 v28; // rax
  size_t v29; // rax
  unsigned __int64 v30; // [rsp+0h] [rbp-88h]
  unsigned __int64 v31; // [rsp+0h] [rbp-88h]
  char v32; // [rsp+8h] [rbp-80h]
  char v33; // [rsp+8h] [rbp-80h]
  mbstate_t ps; // [rsp+Ch] [rbp-7Ch]
  char v35; // [rsp+14h] [rbp-74h]
  char *v36; // [rsp+18h] [rbp-70h]
  __int64 v37; // [rsp+20h] [rbp-68h]
  char v38; // [rsp+28h] [rbp-60h]
  wint_t wc; // [rsp+2Ch] [rbp-5Ch]

  v3 = strdup(a1);
  if ( !v3 )
    sub_408130(a1);
  v4 = v3;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    if ( !a2 )
      goto LABEL_91;
    v17 = (unsigned __int8)*v4;
    if ( (_BYTE)v17 )
    {
      v18 = v4;
      v19 = *__ctype_b_loc();
      do
      {
        if ( !(v19[v17] & 0x2000) )
          break;
        v17 = *(unsigned __int8 *)++v18;
      }
      while ( (_BYTE)v17 );
    }
    else
    {
      v18 = v4;
    }
    v20 = strlen(v18);
    memmove(v4, v18, v20 + 1);
    if ( a2 != 1 )
    {
LABEL_91:
      v21 = (unsigned __int8 *)&v4[strlen(v4) - 1];
      if ( v4 <= (char *)v21 )
      {
        v22 = *__ctype_b_loc();
        do
        {
          if ( !(v22[*v21] & 0x2000) )
            break;
          *v21-- = 0;
        }
        while ( v4 <= (char *)v21 );
      }
    }
    return v4;
  }
  if ( !a2 )
    goto LABEL_4;
  v36 = v4;
  v23 = (int *)v4;
  do
  {
    v24 = *v23;
    ++v23;
    v25 = ~v24 & (v24 - 16843009) & 0x80808080;
  }
  while ( !v25 );
  v33 = 0;
  v26 = v4;
  v35 = 0;
  ps = 0LL;
  if ( !(~v24 & (v24 - 16843009) & 0x8080) )
    LOBYTE(v25) = (~v24 & (v24 - 16843009) & 0x80808080) >> 16;
  if ( !(~v24 & (v24 - 16843009) & 0x8080) )
    v23 = (int *)((char *)v23 + 2);
  v31 = (unsigned __int64)((char *)v23 - __CFADD__((_BYTE)v25, (_BYTE)v25) - 3);
  if ( v31 <= (unsigned __int64)v4 )
    goto LABEL_81;
  while ( !v33 )
  {
    if ( !(((unsigned int)dword_410680[((unsigned __int8)*v26 >> 5) & 7] >> *v26) & 1) )
    {
      if ( !mbsinit(&ps) )
LABEL_86:
        __assert_fail("mbsinit (&iter->state)", "lib/mbiter.h", 0x8Eu, "mbiter_multi_next");
      v33 = 1;
      break;
    }
    v37 = 1LL;
    v27 = *v26;
    v38 = 1;
    v26 = v36;
    wc = v27;
    v35 = 1;
LABEL_67:
    if ( iswspace(wc) )
    {
      v26 += v37;
      v35 = 0;
      v36 = v26;
      if ( (unsigned __int64)v26 < v31 )
        continue;
    }
    goto LABEL_81;
  }
  v28 = sub_408FC0((wchar_t *)&wc, v26);
  v37 = v28;
  if ( v28 == -1 )
  {
    v37 = 1LL;
    v26 = v36;
    v38 = 0;
    v35 = 1;
    goto LABEL_81;
  }
  v26 = v36;
  if ( v28 != -2 )
  {
    if ( !v28 )
    {
      v37 = 1LL;
      if ( *v36 )
LABEL_87:
        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbiter.h", 0xA9u, "mbiter_multi_next");
      if ( wc )
LABEL_88:
        sub_407380();
    }
    v38 = 1;
    if ( mbsinit(&ps) )
      v33 = 0;
    v35 = 1;
    goto LABEL_67;
  }
  v38 = 0;
  v35 = 1;
  v37 = v31 - (_QWORD)v36;
LABEL_81:
  v29 = strlen(v26);
  memmove(v4, v26, v29 + 1);
  if ( a2 == 1 )
    return v4;
LABEL_4:
  v36 = v4;
  v5 = (int *)v4;
  do
  {
    v6 = *v5;
    ++v5;
    v7 = ~v6 & (v6 - 16843009) & 0x80808080;
  }
  while ( !v7 );
  v32 = 0;
  v8 = v4;
  v35 = 0;
  ps = 0LL;
  if ( !(~v6 & (v6 - 16843009) & 0x8080) )
    LOBYTE(v7) = (~v6 & (v6 - 16843009) & 0x80808080) >> 16;
  if ( !(~v6 & (v6 - 16843009) & 0x8080) )
    v5 = (int *)((char *)v5 + 2);
  v9 = 0;
  v30 = (unsigned __int64)((char *)v5 - __CFADD__((_BYTE)v7, (_BYTE)v7) - 3);
  if ( v30 > (unsigned __int64)v4 )
  {
    while ( 1 )
    {
      if ( !v32 )
      {
        if ( ((unsigned int)dword_410680[((unsigned __int8)*v8 >> 5) & 7] >> *v8) & 1 )
        {
          v37 = 1LL;
          v10 = *v8;
          v11 = v36;
          v12 = v30;
          v38 = 1;
          wc = v10;
          v8 = v36 + 1;
          goto LABEL_18;
        }
        if ( !mbsinit(&ps) )
          goto LABEL_86;
        v32 = 1;
      }
      v15 = sub_408FC0((wchar_t *)&wc, v8);
      v16 = v15;
      v37 = v15;
      if ( v15 == -1 )
      {
        v11 = v36;
        v12 = v30;
        v38 = 0;
        v37 = 1LL;
        v8 = v36 + 1;
      }
      else
      {
        v11 = v36;
        if ( v15 == -2 )
        {
          v8 = (char *)v30;
          v38 = 0;
          v12 = v30;
          v37 = v30 - (_QWORD)v36;
        }
        else
        {
          if ( !v15 )
          {
            v37 = 1LL;
            if ( *v36 )
              goto LABEL_87;
            if ( wc )
              goto LABEL_88;
            v16 = 1LL;
          }
          v38 = 1;
          v8 = &v36[v16];
          v12 = v30;
          if ( mbsinit(&ps) )
            v32 = 0;
        }
      }
LABEL_18:
      v35 = 1;
      if ( !v9 )
      {
        v9 = 1;
        if ( v38 )
          v9 = iswspace(wc) == 0;
        goto LABEL_14;
      }
      if ( v9 == 1 )
      {
        if ( v38 && iswspace(wc) )
        {
          a3 = v11;
          v9 = 2;
        }
        goto LABEL_14;
      }
      if ( v9 == 2 && v38 )
      {
        v13 = iswspace(wc);
        v36 = v8;
        v35 = 0;
        if ( !v13 )
          v9 = 1;
        if ( (unsigned __int64)v8 >= v12 )
        {
LABEL_25:
          if ( v9 == 2 )
            *a3 = 0;
          return v4;
        }
      }
      else
      {
        v9 = 1;
LABEL_14:
        v36 = v8;
        v35 = 0;
        if ( (unsigned __int64)v8 >= v12 )
          goto LABEL_25;
      }
    }
  }
  return v4;
}

__int64 __fastcall sub_407940(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 result; // rax
  const char *v13; // rsi
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rbx
  char *v24; // rax

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 1LL:
      v14 = *v7;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 7LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 8LL:
      v10 = *v7;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *v7;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *v7;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_407940(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 result; // rax
  const char *v13; // rsi
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rbx
  char *v24; // rax

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 1LL:
      v14 = *v7;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 7LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 8LL:
      v10 = *v7;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *v7;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *v7;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_407D40(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_407940(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_407940(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_407DA0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_407940(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_407940(a1, a2, a3, a4, v15, i);
}

int sub_407E60()
{
  char *v0; // rax
  __int64 v1; // rcx
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1);
  v2 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v2, &unk_40BDAC, "https://www.gnu.org/software/coreutils/");
  v3 = stdout;
  v4 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v4, v3);
}

void *__fastcall sub_407EE0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_408130(a1);
  }
  return result;
}

void *__fastcall sub_407F40(void *a1, size_t a2)
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
        sub_408130(a1);
    }
  }
  return result;
}

void *__fastcall sub_4080E0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_407EE0(n);
  return memcpy(v2, src, n);
}

noreturn void  sub_408130()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_4081C0(char *a1, char *a2, char *a3)
{
  __int64 v3; // rbx

  v3 = sub_40B710(a1, a2, a3);
  if ( !v3 && *__errno_location() == 12 )
    sub_408130();
  return v3;
}

__int64 __fastcall sub_4081F0(__int64 a1, int *a2)
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

__int64 __fastcall sub_4082D0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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
  __int64 v28; // rbp
  char *v29; // rax
  __int64 v30; // rbp
  char *v31; // rax
  FILE *v32; // rdi
  char **v33; // rbx
  _BYTE *v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rbp
  char *v37; // rax
  char **v38; // [rsp+0h] [rbp-88h]
  int v39; // [rsp+Ch] [rbp-7Ch]
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  _DWORD *v43; // [rsp+20h] [rbp-68h]
  char *s; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-49h]
  int v47; // [rsp+40h] [rbp-48h]
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]

  v47 = a1;
  v9 = (const char *)*((_QWORD *)a7 + 4);
  s = a3;
  v38 = a4;
  v43 = a5;
  v10 = (char *)*((_QWORD *)a7 + 4);
  v39 = a6;
  v46 = *v9;
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
    if ( !v39 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(s, v46), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24);
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
  v48 = -1;
  v15 = s1;
  v16 = 0LL;
  v45 = 0;
  v49 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = v38;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (v39
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v45 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v49 = 1;
            ptr[v48] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v45 = 1;
        }
        else
        {
          v45 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v48 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v45 )
  {
    if ( a8 )
    {
      if ( v45 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v30 = *a2;
        v31 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v31, v30);
        v32 = stderr;
        v33 = v38;
        v34 = ptr;
        v35 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v34 )
          {
            __fprintf_chk(v32, 1LL, " '%s%s'", a9);
            v32 = stderr;
          }
          ++v34;
          v33 += 4;
        }
        while ( (_BYTE *)v35 != v34 );
        fputc(10, v32);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v49 )
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
    LODWORD(v13) = v48;
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
        v28 = *a2;
        v29 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v29, v28);
      }
      a7[2] = *((_DWORD *)v12 + 6);
      result = 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= v47 )
      {
        if ( a8 )
        {
          v36 = *a2;
          v37 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v37, v36);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( v43 )
          *v43 = v13;
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

__int64 __fastcall sub_4088F0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
  __int64 v41; // rbp
  char *v42; // rax
  __int64 v43; // rbp
  char *v44; // rax
  char **v45; // [rsp+8h] [rbp-60h]
  _DWORD *v46; // [rsp+10h] [rbp-58h]
  char v47; // [rsp+1Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+1Ch] [rbp-4Ch]
  int v50; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v51; // [rsp+20h] [rbp-48h]
  __int64 v52; // [rsp+28h] [rbp-40h]

  v45 = a4;
  v46 = a5;
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
        v48 = a6;
        sub_4081F0(a2, a7);
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
        sub_4081F0((__int64)v11, a7);
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
        if ( v45 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_4082D0(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_4082D0(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
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
  v51 = v13;
  *((_QWORD *)a7 + 4) = v13 + 1;
  v21 = (char)*v13;
  v52 = (__int64)(v13 + 1);
  v47 = *v13;
  v22 = strchr(v12, v21);
  v23 = v52;
  if ( !v51[1] )
    ++*a7;
  if ( (unsigned __int8)(v47 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && v45 && v24 == 59 )
    {
      if ( v51[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_4082D0(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = v11[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *v11;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43);
      }
      a7[2] = v21;
      v21 = 5 * (*v12 != 58) + 58;
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
            v41 = *v11;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41);
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
      __fprintf_chk(stderr, 1LL, v40, v39);
    }
    a7[2] = v21;
    v21 = 63;
  }
  return v21;
}

__int64 __fastcall sub_408EC0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_613480 = dword_6132BC;
  dword_613484 = dword_6132B8;
  result = sub_4088F0(a1, a2, a3, a4, a5, a6, &dword_613480, a7);
  dword_6132BC = dword_613480;
  qword_613CC8 = qword_613490;
  dword_6132B4 = dword_613488;
  return result;
}

__int64 __fastcall sub_408F20(int a1, __int64 a2, char *a3)
{
  return sub_408EC0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_408F40(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_408EC0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_408F60(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4088F0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_408F80(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_408EC0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_408FA0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4088F0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_408FC0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409210(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_409040(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  _BYTE *v6; // rdi

  if ( !a3 )
    return 0LL;
  if ( (unsigned __int8)a1 & 7 )
  {
    if ( (_BYTE)a2 == *a1 )
      return a1;
    while ( 1 )
    {
      ++a1;
      if ( !--a3 )
        return 0LL;
      if ( !((unsigned __int8)a1 & 7) )
        break;
      if ( *a1 == (_BYTE)a2 )
        return a1;
    }
  }
  v4 = ((((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
  if ( a3 > 7 && !(((v4 ^ *(_QWORD *)a1) - 72340172838076673LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) )
  {
    while ( 1 )
    {
      a3 -= 8LL;
      a1 += 8;
      if ( a3 <= 7 )
        break;
      if ( ((v4 ^ *(_QWORD *)a1) - 72340172838076673LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL )
        goto LABEL_15;
    }
    if ( !a3 )
      return 0LL;
  }
LABEL_15:
  if ( (_BYTE)a2 != *a1 )
  {
    v5 = (__int64)(a1 + 1);
    v6 = &a1[a3];
    while ( 1 )
    {
      result = (_BYTE *)v5;
      if ( (_BYTE *)v5 == v6 )
        break;
      if ( *(_BYTE *)(++v5 - 1) == (_BYTE)a2 )
        return result;
    }
    return 0LL;
  }
  return a1;
}

__int64 __fastcall sub_409150(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // er8
  char v5; // al
  int v6; // er9
  char v7; // cl

  result = 0LL;
  if ( a1 != a2 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(unsigned __int8 *)(a1 + v3);
      v5 = *(_BYTE *)(a1 + v3);
      if ( (unsigned int)(v4 - 65) <= 0x19 )
      {
        LOBYTE(v4) = v4 + 32;
        v5 += 32;
      }
      v6 = *(unsigned __int8 *)(a2 + v3);
      v7 = *(_BYTE *)(a2 + v3);
      if ( (unsigned int)(v6 - 65) <= 0x19 )
      {
        LOBYTE(v6) = v6 + 32;
        v7 += 32;
      }
      if ( !v5 )
        break;
      ++v3;
    }
    while ( v5 == v7 );
    result = (unsigned __int8)v4 - (unsigned int)(unsigned __int8)v6;
  }
  return result;
}

__int64 __fastcall sub_4091B0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40B800(stream);
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

bool __fastcall sub_409210(int a1)
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

const char *sub_409270()
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
                sub_40B800(v60);
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
            sub_40B800(v39);
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

__int64 __fastcall sub_409810(__int64 a1, const void **a2)
{
  const void **v2; // rbx
  __int64 v3; // rax
  const void *v4; // rsi
  size_t v5; // rdx
  __int64 result; // rax
  void *v7; // rax

  v2 = a2;
  v3 = (__int64)(a2 + 3);
  v4 = *a2;
  v5 = (size_t)v2[1];
  if ( v4 == (const void *)v3 )
  {
    v7 = memcpy((void *)(a1 + 24), v4, v5);
    v5 = (size_t)v2[1];
    *(_QWORD *)a1 = v7;
  }
  else
  {
    *(_QWORD *)a1 = v4;
  }
  result = *((unsigned __int8 *)v2 + 16);
  *(_QWORD *)(a1 + 8) = v5;
  *(_BYTE *)(a1 + 16) = result;
  if ( (_BYTE)result )
  {
    result = *((unsigned int *)v2 + 5);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}

__int64 __fastcall sub_409890(unsigned __int8 *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int8 *v4; // rbx
  unsigned __int64 v5; // rdi
  void *v6; // rsp
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // r8
  unsigned __int8 *v12; // r9
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v16; // rax
  _QWORD *v17; // [rsp+8h] [rbp-28h]
  unsigned __int64 v18; // [rsp+10h] [rbp-20h]
  __int64 v19; // [rsp+18h] [rbp-18h]

  v4 = a1;
  v5 = 8 * a3;
  if ( a3 & 0x1000000000000000LL || a3 >> 61 != 0 )
    return 0LL;
  if ( v5 > 0xFAF )
  {
    v17 = a4;
    v18 = a3;
    v19 = a2;
    v16 = sub_40B920();
    a4 = v17;
    a3 = v18;
    v7 = v16;
    if ( v16 )
      goto LABEL_5;
    return 0LL;
  }
  v6 = alloca(v5 + 24);
  v7 = (((unsigned __int64)&v17 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  if ( (((unsigned __int64)&v17 + 7) & 0xFFFFFFFFFFFFFFF0LL) == -16LL )
    return 0LL;
LABEL_5:
  *(_QWORD *)(v7 + 8) = 1LL;
  v8 = 0LL;
  v9 = 2LL;
  if ( a3 > 2 )
  {
    do
    {
      v10 = *(_BYTE *)(a2 + v9 - 1);
      if ( v10 == *(_BYTE *)(a2 + v8) )
      {
LABEL_23:
        *(_QWORD *)(v7 + 8 * v9) = v9 - ++v8;
      }
      else
      {
        while ( v8 )
        {
          v8 -= *(_QWORD *)(v7 + 8 * v8);
          if ( *(_BYTE *)(a2 + v8) == v10 )
            goto LABEL_23;
        }
        *(_QWORD *)(v7 + 8 * v9) = v9;
        v8 = 0LL;
      }
      ++v9;
    }
    while ( a3 != v9 );
  }
  *a4 = 0LL;
  v11 = *v4;
  v12 = v4;
  v13 = 0LL;
LABEL_13:
  while ( 2 )
  {
    if ( (_BYTE)v11 )
    {
      while ( *(_BYTE *)(a2 + v13) != (_BYTE)v11 )
      {
        if ( !v13 )
        {
          v11 = v12[1];
          ++v4;
          ++v12;
          goto LABEL_13;
        }
        v14 = *(_QWORD *)(v7 + 8 * v13);
        v4 += v14;
        v13 -= v14;
      }
      if ( a3 != ++v13 )
      {
        v11 = *++v12;
        continue;
      }
      *a4 = v4;
    }
    break;
  }
  sub_40B990(v7, a2, a3, a4, v11, v12);
  return 1LL;
}

noreturn void  sub_409A20()
{
  __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
}

__int64 __fastcall sub_409A40(mbstate_t *a1, char *a2, char **a3)
{
  __int64 v3; // r9
  void *v4; // rsp
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  char v11; // al
  size_t v12; // rdx
  __int64 v13; // rax
  char *v14; // r14
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r15
  __int64 v18; // r14
  bool v19; // cc
  char v20; // bl
  __int64 v21; // rax
  size_t v22; // rdx
  __int64 v23; // r15
  char *v24; // rax
  char v25; // al
  __int64 v26; // rax
  size_t v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  void *v32; // rax
  size_t v33; // rax
  __int64 v34; // rax
  char *v35; // rbx
  __int64 v36; // rax
  size_t v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r14
  unsigned int v40; // eax
  __int64 v41; // rax
  char *v42; // r15
  __int64 v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  __int64 v46; // rax
  char *v47; // rbx
  __int64 v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  char **v52; // [rsp+0h] [rbp-110h]
  mbstate_t *ps; // [rsp+8h] [rbp-108h]
  unsigned __int64 v54; // [rsp+10h] [rbp-100h]
  mbstate_t *v55; // [rsp+18h] [rbp-F8h]
  char v56; // [rsp+20h] [rbp-F0h]
  __int64 v57; // [rsp+24h] [rbp-ECh]
  char v58; // [rsp+2Ch] [rbp-E4h]
  void *src; // [rsp+30h] [rbp-E0h]
  size_t n; // [rsp+38h] [rbp-D8h]
  char v61; // [rsp+40h] [rbp-D0h]
  unsigned int v62; // [rsp+44h] [rbp-CCh]
  __int64 v63; // [rsp+48h] [rbp-C8h]
  char v64; // [rsp+60h] [rbp-B0h]
  __int64 v65; // [rsp+64h] [rbp-ACh]
  char v66; // [rsp+6Ch] [rbp-A4h]
  char *s; // [rsp+70h] [rbp-A0h]
  size_t v68; // [rsp+78h] [rbp-98h]
  char v69; // [rsp+80h] [rbp-90h]
  unsigned int v70; // [rsp+84h] [rbp-8Ch]
  char v71; // [rsp+A0h] [rbp-70h]
  __int64 v72; // [rsp+A4h] [rbp-6Ch]
  char v73; // [rsp+ACh] [rbp-64h]
  void *s2; // [rsp+B0h] [rbp-60h]
  size_t v75; // [rsp+B8h] [rbp-58h]
  char v76; // [rsp+C0h] [rbp-50h]
  unsigned int v77; // [rsp+C4h] [rbp-4Ch]

  ps = a1;
  v52 = a3;
  v54 = sub_40BA20(a2);
  if ( ((56 * v54) & 0x8000000000000000LL) != 0LL || (v54 * (unsigned __int128)0x38uLL) >> 64 != 0 )
    return 0LL;
  if ( 56 * v54 > 0xFAF )
  {
    v5 = sub_40B920();
  }
  else
  {
    v4 = alloca(56 * v54 + 24);
    v5 = (((unsigned __int64)&ps + 7) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( !v5 )
    return 0LL;
  src = a2;
  v6 = v5;
  v56 = 0;
  v58 = 0;
  v57 = 0LL;
  v7 = v5 + 48 * v54;
  while ( 1 )
  {
    if ( !v56 )
    {
      v8 = *(unsigned __int8 *)src;
      if ( ((unsigned int)dword_410680[(*(_BYTE *)src >> 5) & 7] >> v8) & 1 )
      {
        n = 1LL;
        v9 = *(char *)src;
        v61 = 1;
        v62 = v9;
        v10 = v9;
        v58 = 1;
        if ( !v9 )
          goto LABEL_24;
        goto LABEL_9;
      }
      if ( !mbsinit((const mbstate_t *)&v57) )
        goto LABEL_115;
      v56 = 1;
    }
    v13 = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    v15 = sub_407340((__int64)src, v13);
    a2 = v14;
    v16 = sub_408FC0((wchar_t *)&v62, v14, v15, (mbstate_t *)&v57);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v61 = 0;
      v58 = 1;
      goto LABEL_10;
    }
    if ( v16 != -2LL )
      break;
    v33 = strlen((const char *)src);
    v61 = 0;
    n = v33;
    v11 = 0;
    v58 = 1;
LABEL_10:
    a2 = (char *)src;
    v12 = n;
    if ( src == &v63 )
    {
      v32 = memcpy((void *)(v6 + 24), src, n);
      v12 = n;
      *(_QWORD *)v6 = v32;
      v11 = v61;
    }
    else
    {
      *(_QWORD *)v6 = src;
    }
    *(_QWORD *)(v6 + 8) = v12;
    *(_BYTE *)(v6 + 16) = v11;
    if ( v11 )
      *(_DWORD *)(v6 + 20) = v62;
    src = (char *)src + v12;
    v6 += 48LL;
    v58 = 0;
  }
  if ( !v16 )
  {
    n = 1LL;
    if ( *(_BYTE *)src )
      goto LABEL_114;
    if ( v62 )
      goto LABEL_116;
  }
  v61 = 1;
  if ( mbsinit((const mbstate_t *)&v57) )
    v56 = 0;
  v10 = v62;
  v58 = 1;
  if ( v62 )
  {
LABEL_9:
    v11 = 1;
    goto LABEL_10;
  }
LABEL_24:
  v17 = 0LL;
  v18 = v5 + 48;
  v19 = v54 <= 2;
  *(_QWORD *)(v7 + 8) = 1LL;
  v55 = (mbstate_t *)2;
  if ( !v19 )
  {
    do
    {
      v20 = *(_BYTE *)(v18 + 16);
      while ( 1 )
      {
        v21 = v5 + 48 * v17;
        if ( v20 && *(_BYTE *)(v21 + 16) )
        {
          if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v21 + 20) )
            goto LABEL_33;
        }
        else
        {
          v22 = *(_QWORD *)(v18 + 8);
          if ( v22 == *(_QWORD *)(v21 + 8) )
          {
            a2 = *(char **)v21;
            if ( !memcmp(*(const void **)v18, *(const void **)v21, v22) )
            {
LABEL_33:
              *(_QWORD *)(v7 + 8LL * (_QWORD)v55) = (char *)v55 - ++v17;
              goto LABEL_34;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= *(_QWORD *)(v7 + 8 * v17);
      }
      *(_QWORD *)(v7 + 8LL * (_QWORD)v55) = v55;
LABEL_34:
      v55 = (mbstate_t *)((char *)v55 + 1);
      v18 += 48LL;
    }
    while ( (mbstate_t *)v54 != v55 );
  }
  v64 = 0;
  v23 = 0LL;
  v66 = 0;
  *v52 = 0LL;
  v24 = (char *)ps;
  ps = (mbstate_t *)&v72;
  v71 = 0;
  v65 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v55 = (mbstate_t *)&v65;
  s = v24;
  s2 = v24;
  v25 = 0;
LABEL_36:
  if ( v25 )
  {
    if ( !v76 )
      goto LABEL_38;
    goto LABEL_50;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v71 )
      {
        v8 = *(unsigned __int8 *)s2;
        if ( ((unsigned int)dword_410680[(*(_BYTE *)s2 >> 5) & 7] >> v8) & 1 )
        {
          v75 = 1LL;
          v29 = *(char *)s2;
          v76 = 1;
          v77 = v29;
          v73 = 1;
          goto LABEL_50;
        }
        if ( !mbsinit(ps) )
          goto LABEL_115;
        v71 = 1;
      }
      v34 = __ctype_get_mb_cur_max();
      v35 = (char *)s2;
      v36 = sub_407340((__int64)s2, v34);
      a2 = v35;
      v37 = sub_408FC0((wchar_t *)&v77, v35, v36, (mbstate_t *)&v72);
      v75 = v37;
      switch ( v37 )
      {
        case 0xFFFFFFFFFFFFFFFFLL:
          v75 = 1LL;
          v76 = 0;
          v73 = 1;
LABEL_38:
          v26 = v5 + 48 * v23;
          goto LABEL_39;
        case 0xFFFFFFFFFFFFFFFELL:
          v50 = strlen((const char *)s2);
          v76 = 0;
          v75 = v50;
          v73 = 1;
          goto LABEL_38;
        case 0uLL:
          v75 = 1LL;
          if ( *(_BYTE *)s2 )
            goto LABEL_114;
          if ( v77 )
            goto LABEL_116;
          break;
      }
      v76 = 1;
      if ( mbsinit((const mbstate_t *)&v72) )
        v71 = 0;
      v73 = 1;
LABEL_50:
      v30 = v77;
      if ( !v77 )
        goto LABEL_55;
      v26 = v5 + 48 * v23;
      if ( *(_BYTE *)(v26 + 16) )
      {
        if ( *(_DWORD *)(v26 + 20) != v77 )
        {
LABEL_40:
          if ( !v23 )
            goto LABEL_41;
          goto LABEL_75;
        }
      }
      else
      {
LABEL_39:
        v27 = *(_QWORD *)(v26 + 8);
        if ( v27 != v75 )
          goto LABEL_40;
        a2 = (char *)s2;
        if ( memcmp(*(const void **)v26, s2, v27) )
        {
          if ( !v23 )
          {
LABEL_41:
            if ( v66 )
            {
              if ( v69 )
                goto LABEL_45;
              goto LABEL_46;
            }
            if ( !v64 )
            {
              if ( ((unsigned int)dword_410680[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
              {
                v68 = 1LL;
                v28 = *s;
                v69 = 1;
                v70 = v28;
                v66 = 1;
LABEL_45:
                if ( !v70 )
LABEL_118:
                  abort();
LABEL_46:
                s += v68;
                s2 = (char *)s2 + v75;
                v66 = 0;
                v73 = 0;
                continue;
              }
              if ( mbsinit(v55) )
              {
                v64 = 1;
                goto LABEL_100;
              }
LABEL_115:
              __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_100:
            v46 = __ctype_get_mb_cur_max();
            v47 = s;
            v48 = sub_407340((__int64)s, v46);
            a2 = v47;
            v49 = sub_408FC0((wchar_t *)&v70, v47, v48, (mbstate_t *)&v65);
            v68 = v49;
            if ( v49 == -1LL )
            {
              v68 = 1LL;
              v69 = 0;
              goto LABEL_46;
            }
            if ( v49 == -2LL )
            {
              v51 = strlen(s);
              v69 = 0;
              v68 = v51;
              goto LABEL_46;
            }
            if ( v49 )
            {
LABEL_105:
              v69 = 1;
              if ( mbsinit((const mbstate_t *)&v65) )
                v64 = 0;
              v66 = 1;
              goto LABEL_45;
            }
            v68 = 1LL;
            if ( !*s )
            {
              if ( !v70 )
                goto LABEL_105;
LABEL_116:
              sub_409A20();
            }
LABEL_114:
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_75:
          v38 = *(_QWORD *)(v7 + 8 * v23);
          v25 = v73;
          v39 = v23 - v38;
          if ( !v38 )
            goto LABEL_36;
          if ( !v66 )
            goto LABEL_79;
          if ( v69 )
            goto LABEL_82;
          while ( 2 )
          {
            while ( 2 )
            {
              v66 = 0;
              s += v68;
              if ( !--v38 )
              {
                v25 = v73;
                v23 = v39;
                goto LABEL_36;
              }
LABEL_79:
              if ( !v64 )
              {
                v8 = (unsigned __int8)*s;
                if ( ((unsigned int)dword_410680[((unsigned __int8)*s >> 5) & 7] >> v8) & 1 )
                {
                  v68 = 1LL;
                  v40 = *s;
                  v69 = 1;
                  v70 = v40;
                  v66 = 1;
LABEL_82:
                  a2 = (char *)v70;
                  if ( !v70 )
                    goto LABEL_118;
                  continue;
                }
                if ( !mbsinit(v55) )
                  goto LABEL_115;
                v64 = 1;
              }
              break;
            }
            v41 = __ctype_get_mb_cur_max();
            v42 = s;
            v43 = sub_407340((__int64)s, v41);
            a2 = v42;
            v44 = sub_408FC0((wchar_t *)&v70, v42, v43, (mbstate_t *)&v65);
            v68 = v44;
            switch ( v44 )
            {
              case 0xFFFFFFFFFFFFFFFFLL:
                v68 = 1LL;
                v69 = 0;
                continue;
              case 0xFFFFFFFFFFFFFFFELL:
                v45 = strlen(s);
                v69 = 0;
                v68 = v45;
                continue;
              case 0uLL:
                v68 = 1LL;
                if ( *s )
                  goto LABEL_114;
                if ( v70 )
                  __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
                break;
            }
            break;
          }
          v69 = 1;
          if ( mbsinit((const mbstate_t *)&v65) )
            v64 = 0;
          v66 = 1;
          goto LABEL_82;
        }
      }
      break;
    }
    ++v23;
    s2 = (char *)s2 + v75;
    v73 = 0;
    if ( v54 != v23 )
      continue;
    break;
  }
  *v52 = s;
LABEL_55:
  sub_40B990(v5, a2, v30, v8, v10, v3);
  return 1LL;
}

__int64 __fastcall sub_409A40(mbstate_t *a1, char *a2, char **a3)
{
  __int64 v3; // r9
  void *v4; // rsp
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  char v11; // al
  size_t v12; // rdx
  __int64 v13; // rax
  char *v14; // r14
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r15
  __int64 v18; // r14
  bool v19; // cc
  char v20; // bl
  __int64 v21; // rax
  size_t v22; // rdx
  __int64 v23; // r15
  char *v24; // rax
  char v25; // al
  __int64 v26; // rax
  size_t v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  void *v32; // rax
  size_t v33; // rax
  __int64 v34; // rax
  char *v35; // rbx
  __int64 v36; // rax
  size_t v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r14
  unsigned int v40; // eax
  __int64 v41; // rax
  char *v42; // r15
  __int64 v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  __int64 v46; // rax
  char *v47; // rbx
  __int64 v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  char **v52; // [rsp+0h] [rbp-110h]
  mbstate_t *ps; // [rsp+8h] [rbp-108h]
  unsigned __int64 v54; // [rsp+10h] [rbp-100h]
  mbstate_t *v55; // [rsp+18h] [rbp-F8h]
  char v56; // [rsp+20h] [rbp-F0h]
  __int64 v57; // [rsp+24h] [rbp-ECh]
  char v58; // [rsp+2Ch] [rbp-E4h]
  void *src; // [rsp+30h] [rbp-E0h]
  size_t n; // [rsp+38h] [rbp-D8h]
  char v61; // [rsp+40h] [rbp-D0h]
  unsigned int v62; // [rsp+44h] [rbp-CCh]
  __int64 v63; // [rsp+48h] [rbp-C8h]
  char v64; // [rsp+60h] [rbp-B0h]
  __int64 v65; // [rsp+64h] [rbp-ACh]
  char v66; // [rsp+6Ch] [rbp-A4h]
  char *s; // [rsp+70h] [rbp-A0h]
  size_t v68; // [rsp+78h] [rbp-98h]
  char v69; // [rsp+80h] [rbp-90h]
  unsigned int v70; // [rsp+84h] [rbp-8Ch]
  char v71; // [rsp+A0h] [rbp-70h]
  __int64 v72; // [rsp+A4h] [rbp-6Ch]
  char v73; // [rsp+ACh] [rbp-64h]
  void *s2; // [rsp+B0h] [rbp-60h]
  size_t v75; // [rsp+B8h] [rbp-58h]
  char v76; // [rsp+C0h] [rbp-50h]
  unsigned int v77; // [rsp+C4h] [rbp-4Ch]

  ps = a1;
  v52 = a3;
  v54 = sub_40BA20(a2);
  if ( ((56 * v54) & 0x8000000000000000LL) != 0LL || (v54 * (unsigned __int128)0x38uLL) >> 64 != 0 )
    return 0LL;
  if ( 56 * v54 > 0xFAF )
  {
    v5 = sub_40B920();
  }
  else
  {
    v4 = alloca(56 * v54 + 24);
    v5 = (((unsigned __int64)&ps + 7) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( !v5 )
    return 0LL;
  src = a2;
  v6 = v5;
  v56 = 0;
  v58 = 0;
  v57 = 0LL;
  v7 = v5 + 48 * v54;
  while ( 1 )
  {
    if ( !v56 )
    {
      v8 = *(unsigned __int8 *)src;
      if ( ((unsigned int)dword_410680[(*(_BYTE *)src >> 5) & 7] >> v8) & 1 )
      {
        n = 1LL;
        v9 = *(char *)src;
        v61 = 1;
        v62 = v9;
        v10 = v9;
        v58 = 1;
        if ( !v9 )
          goto LABEL_24;
        goto LABEL_9;
      }
      if ( !mbsinit((const mbstate_t *)&v57) )
        goto LABEL_115;
      v56 = 1;
    }
    v13 = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    v15 = sub_407340((__int64)src, v13);
    a2 = v14;
    v16 = sub_408FC0((wchar_t *)&v62, v14, v15, (mbstate_t *)&v57);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v61 = 0;
      v58 = 1;
      goto LABEL_10;
    }
    if ( v16 != -2LL )
      break;
    v33 = strlen((const char *)src);
    v61 = 0;
    n = v33;
    v11 = 0;
    v58 = 1;
LABEL_10:
    a2 = (char *)src;
    v12 = n;
    if ( src == &v63 )
    {
      v32 = memcpy((void *)(v6 + 24), src, n);
      v12 = n;
      *(_QWORD *)v6 = v32;
      v11 = v61;
    }
    else
    {
      *(_QWORD *)v6 = src;
    }
    *(_QWORD *)(v6 + 8) = v12;
    *(_BYTE *)(v6 + 16) = v11;
    if ( v11 )
      *(_DWORD *)(v6 + 20) = v62;
    src = (char *)src + v12;
    v6 += 48LL;
    v58 = 0;
  }
  if ( !v16 )
  {
    n = 1LL;
    if ( *(_BYTE *)src )
      goto LABEL_114;
    if ( v62 )
      goto LABEL_116;
  }
  v61 = 1;
  if ( mbsinit((const mbstate_t *)&v57) )
    v56 = 0;
  v10 = v62;
  v58 = 1;
  if ( v62 )
  {
LABEL_9:
    v11 = 1;
    goto LABEL_10;
  }
LABEL_24:
  v17 = 0LL;
  v18 = v5 + 48;
  v19 = v54 <= 2;
  *(_QWORD *)(v7 + 8) = 1LL;
  v55 = (mbstate_t *)2;
  if ( !v19 )
  {
    do
    {
      v20 = *(_BYTE *)(v18 + 16);
      while ( 1 )
      {
        v21 = v5 + 48 * v17;
        if ( v20 && *(_BYTE *)(v21 + 16) )
        {
          if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v21 + 20) )
            goto LABEL_33;
        }
        else
        {
          v22 = *(_QWORD *)(v18 + 8);
          if ( v22 == *(_QWORD *)(v21 + 8) )
          {
            a2 = *(char **)v21;
            if ( !memcmp(*(const void **)v18, *(const void **)v21, v22) )
            {
LABEL_33:
              *(_QWORD *)(v7 + 8LL * (_QWORD)v55) = (char *)v55 - ++v17;
              goto LABEL_34;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= *(_QWORD *)(v7 + 8 * v17);
      }
      *(_QWORD *)(v7 + 8LL * (_QWORD)v55) = v55;
LABEL_34:
      v55 = (mbstate_t *)((char *)v55 + 1);
      v18 += 48LL;
    }
    while ( (mbstate_t *)v54 != v55 );
  }
  v64 = 0;
  v23 = 0LL;
  v66 = 0;
  *v52 = 0LL;
  v24 = (char *)ps;
  ps = (mbstate_t *)&v72;
  v71 = 0;
  v65 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v55 = (mbstate_t *)&v65;
  s = v24;
  s2 = v24;
  v25 = 0;
LABEL_36:
  if ( v25 )
  {
    if ( !v76 )
      goto LABEL_38;
    goto LABEL_50;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v71 )
      {
        v8 = *(unsigned __int8 *)s2;
        if ( ((unsigned int)dword_410680[(*(_BYTE *)s2 >> 5) & 7] >> v8) & 1 )
        {
          v75 = 1LL;
          v29 = *(char *)s2;
          v76 = 1;
          v77 = v29;
          v73 = 1;
          goto LABEL_50;
        }
        if ( !mbsinit(ps) )
          goto LABEL_115;
        v71 = 1;
      }
      v34 = __ctype_get_mb_cur_max();
      v35 = (char *)s2;
      v36 = sub_407340((__int64)s2, v34);
      a2 = v35;
      v37 = sub_408FC0((wchar_t *)&v77, v35, v36, (mbstate_t *)&v72);
      v75 = v37;
      switch ( v37 )
      {
        case 0xFFFFFFFFFFFFFFFFLL:
          v75 = 1LL;
          v76 = 0;
          v73 = 1;
LABEL_38:
          v26 = v5 + 48 * v23;
          goto LABEL_39;
        case 0xFFFFFFFFFFFFFFFELL:
          v50 = strlen((const char *)s2);
          v76 = 0;
          v75 = v50;
          v73 = 1;
          goto LABEL_38;
        case 0uLL:
          v75 = 1LL;
          if ( *(_BYTE *)s2 )
            goto LABEL_114;
          if ( v77 )
            goto LABEL_116;
          break;
      }
      v76 = 1;
      if ( mbsinit((const mbstate_t *)&v72) )
        v71 = 0;
      v73 = 1;
LABEL_50:
      v30 = v77;
      if ( !v77 )
        goto LABEL_55;
      v26 = v5 + 48 * v23;
      if ( *(_BYTE *)(v26 + 16) )
      {
        if ( *(_DWORD *)(v26 + 20) != v77 )
        {
LABEL_40:
          if ( !v23 )
            goto LABEL_41;
          goto LABEL_75;
        }
      }
      else
      {
LABEL_39:
        v27 = *(_QWORD *)(v26 + 8);
        if ( v27 != v75 )
          goto LABEL_40;
        a2 = (char *)s2;
        if ( memcmp(*(const void **)v26, s2, v27) )
        {
          if ( !v23 )
          {
LABEL_41:
            if ( v66 )
            {
              if ( v69 )
                goto LABEL_45;
              goto LABEL_46;
            }
            if ( !v64 )
            {
              if ( ((unsigned int)dword_410680[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
              {
                v68 = 1LL;
                v28 = *s;
                v69 = 1;
                v70 = v28;
                v66 = 1;
LABEL_45:
                if ( !v70 )
LABEL_118:
                  abort();
LABEL_46:
                s += v68;
                s2 = (char *)s2 + v75;
                v66 = 0;
                v73 = 0;
                continue;
              }
              if ( mbsinit(v55) )
              {
                v64 = 1;
                goto LABEL_100;
              }
LABEL_115:
              __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_100:
            v46 = __ctype_get_mb_cur_max();
            v47 = s;
            v48 = sub_407340((__int64)s, v46);
            a2 = v47;
            v49 = sub_408FC0((wchar_t *)&v70, v47, v48, (mbstate_t *)&v65);
            v68 = v49;
            if ( v49 == -1LL )
            {
              v68 = 1LL;
              v69 = 0;
              goto LABEL_46;
            }
            if ( v49 == -2LL )
            {
              v51 = strlen(s);
              v69 = 0;
              v68 = v51;
              goto LABEL_46;
            }
            if ( v49 )
            {
LABEL_105:
              v69 = 1;
              if ( mbsinit((const mbstate_t *)&v65) )
                v64 = 0;
              v66 = 1;
              goto LABEL_45;
            }
            v68 = 1LL;
            if ( !*s )
            {
              if ( !v70 )
                goto LABEL_105;
LABEL_116:
              sub_409A20();
            }
LABEL_114:
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_75:
          v38 = *(_QWORD *)(v7 + 8 * v23);
          v25 = v73;
          v39 = v23 - v38;
          if ( !v38 )
            goto LABEL_36;
          if ( !v66 )
            goto LABEL_79;
          if ( v69 )
            goto LABEL_82;
          while ( 2 )
          {
            while ( 2 )
            {
              v66 = 0;
              s += v68;
              if ( !--v38 )
              {
                v25 = v73;
                v23 = v39;
                goto LABEL_36;
              }
LABEL_79:
              if ( !v64 )
              {
                v8 = (unsigned __int8)*s;
                if ( ((unsigned int)dword_410680[((unsigned __int8)*s >> 5) & 7] >> v8) & 1 )
                {
                  v68 = 1LL;
                  v40 = *s;
                  v69 = 1;
                  v70 = v40;
                  v66 = 1;
LABEL_82:
                  a2 = (char *)v70;
                  if ( !v70 )
                    goto LABEL_118;
                  continue;
                }
                if ( !mbsinit(v55) )
                  goto LABEL_115;
                v64 = 1;
              }
              break;
            }
            v41 = __ctype_get_mb_cur_max();
            v42 = s;
            v43 = sub_407340((__int64)s, v41);
            a2 = v42;
            v44 = sub_408FC0((wchar_t *)&v70, v42, v43, (mbstate_t *)&v65);
            v68 = v44;
            switch ( v44 )
            {
              case 0xFFFFFFFFFFFFFFFFLL:
                v68 = 1LL;
                v69 = 0;
                continue;
              case 0xFFFFFFFFFFFFFFFELL:
                v45 = strlen(s);
                v69 = 0;
                v68 = v45;
                continue;
              case 0uLL:
                v68 = 1LL;
                if ( *s )
                  goto LABEL_114;
                if ( v70 )
                  __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
                break;
            }
            break;
          }
          v69 = 1;
          if ( mbsinit((const mbstate_t *)&v65) )
            v64 = 0;
          v66 = 1;
          goto LABEL_82;
        }
      }
      break;
    }
    ++v23;
    s2 = (char *)s2 + v75;
    v73 = 0;
    if ( v54 != v23 )
      continue;
    break;
  }
  *v52 = s;
LABEL_55:
  sub_40B990(v5, a2, v30, v8, v10, v3);
  return 1LL;
}

mbstate_t __fastcall sub_40A420(mbstate_t *a1, char *a2)
{
  __int64 v2; // r13
  char *v3; // rbp
  char v4; // r15
  mbstate_t result; // rax
  unsigned __int8 v6; // cl
  const char *v7; // r9
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  char *v10; // r8
  char v11; // al
  size_t v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int8 *v15; // r14
  char v16; // bp
  wchar_t v17; // ecx
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rdi
  char *v21; // rdx
  char v22; // si
  char v23; // cl
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  char v26; // r14
  int v27; // eax
  wchar_t v28; // ecx
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  unsigned int v33; // eax
  wchar_t v34; // eax
  __int32 v35; // eax
  __int32 v36; // eax
  bool v37; // al
  __int64 v38; // rax
  char *v39; // r15
  __int64 v40; // rax
  size_t v41; // rax
  size_t v42; // r15
  __int64 v43; // rax
  char *v44; // r15
  __int64 v45; // rax
  void *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  void *v51; // rax
  unsigned __int64 v52; // r14
  int v53; // eax
  char v54; // dl
  __int64 v55; // rax
  char *v56; // r15
  __int64 v57; // rax
  size_t v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  size_t v64; // rax
  __int64 v65; // rax
  char *v66; // r14
  __int64 v67; // rax
  size_t v68; // rax
  __int64 v69; // rax
  char *v70; // r12
  __int64 v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  char *v76; // [rsp+0h] [rbp-188h]
  char *v77; // [rsp+0h] [rbp-188h]
  char *v78; // [rsp+0h] [rbp-188h]
  char *v79; // [rsp+0h] [rbp-188h]
  unsigned __int64 v80; // [rsp+8h] [rbp-180h]
  mbstate_t v81; // [rsp+14h] [rbp-174h]
  char v82; // [rsp+1Ch] [rbp-16Ch]
  char *v83; // [rsp+20h] [rbp-168h]
  size_t v84; // [rsp+28h] [rbp-160h]
  char v85; // [rsp+30h] [rbp-158h]
  wchar_t v86; // [rsp+34h] [rbp-154h]
  char v87; // [rsp+50h] [rbp-138h]
  mbstate_t v88; // [rsp+54h] [rbp-134h]
  char v89; // [rsp+5Ch] [rbp-12Ch]
  char *s; // [rsp+60h] [rbp-128h]
  size_t v91; // [rsp+68h] [rbp-120h]
  char v92; // [rsp+70h] [rbp-118h]
  int v93; // [rsp+74h] [rbp-114h]
  __int128 v94; // [rsp+90h] [rbp-F8h]
  size_t n[2]; // [rsp+A0h] [rbp-E8h]
  __int128 v96; // [rsp+B0h] [rbp-D8h]
  __int128 v97; // [rsp+C0h] [rbp-C8h]
  mbstate_t v98[2]; // [rsp+D0h] [rbp-B8h]
  void *s1[2]; // [rsp+E0h] [rbp-A8h]
  __m128i v100; // [rsp+F0h] [rbp-98h]
  __m128i v101; // [rsp+100h] [rbp-88h]
  mbstate_t ps; // [rsp+110h] [rbp-78h]
  char v103; // [rsp+11Ch] [rbp-6Ch]
  void *s2; // [rsp+120h] [rbp-68h]
  size_t v105; // [rsp+128h] [rbp-60h]
  char v106; // [rsp+130h] [rbp-58h]
  wchar_t pwc; // [rsp+134h] [rbp-54h]

  v2 = (__int64)a2;
  v3 = (char *)a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v17 = *a2;
    v83 = a2;
    v82 = 0;
    v81 = 0LL;
    if ( ((unsigned int)dword_410680[(unsigned __int8)v17 >> 5] >> v17) & 1 )
    {
      v84 = 1LL;
      v86 = v17;
      v85 = 1;
      v82 = 1;
LABEL_17:
      if ( !v86 )
        return (mbstate_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v81) )
      goto LABEL_173;
    v69 = __ctype_get_mb_cur_max();
    v70 = v83;
    v71 = sub_407340((__int64)v83, v69);
    v72 = sub_408FC0(&v86, v70, v71, &v81);
    v84 = v72;
    if ( v72 == -1LL )
    {
      v84 = 1LL;
      v85 = 0;
      v82 = 1;
    }
    else
    {
      if ( v72 != -2LL )
      {
        if ( !v72 )
        {
          v84 = 1LL;
          if ( *v83 )
            goto LABEL_174;
          if ( v86 )
            goto LABEL_162;
        }
        v85 = 1;
        mbsinit(&v81);
        v82 = 1;
        goto LABEL_17;
      }
      v75 = strlen(v83);
      v85 = 0;
      v84 = v75;
      v82 = 1;
    }
LABEL_29:
    s = a2;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 1;
    v87 = 0;
    v88 = 0LL;
    v89 = 0;
    n[0] = (size_t)a1;
    LOBYTE(v94) = 0;
    *(_QWORD *)((char *)&v94 + 4) = 0LL;
    BYTE12(v94) = 0;
    v80 = 0LL;
    while ( 1 )
    {
      if ( !(_BYTE)v94 )
      {
        if ( ((unsigned int)dword_410680[(*(_BYTE *)n[0] >> 5) & 7] >> *(_BYTE *)n[0]) & 1 )
        {
          n[1] = 1LL;
          v27 = *(char *)n[0];
          LOBYTE(v96) = 1;
          DWORD1(v96) = v27;
          BYTE12(v94) = 1;
          goto LABEL_33;
        }
        if ( !mbsinit((const mbstate_t *)((char *)&v94 + 4)) )
          goto LABEL_173;
        LOBYTE(v94) = 1;
      }
      v47 = __ctype_get_mb_cur_max();
      v78 = (char *)n[0];
      v48 = sub_407340(n[0], v47);
      v49 = sub_408FC0((wchar_t *)&v96 + 1, v78, v48, (mbstate_t *)((char *)&v94 + 4));
      n[1] = v49;
      switch ( v49 )
      {
        case 0xFFFFFFFFFFFFFFFFLL:
          n[1] = 1LL;
          LOBYTE(v96) = 0;
          BYTE12(v94) = 1;
          goto LABEL_85;
        case 0xFFFFFFFFFFFFFFFELL:
          v60 = strlen((const char *)n[0]);
          LOBYTE(v96) = 0;
          n[1] = v60;
          BYTE12(v94) = 1;
LABEL_85:
          if ( !((unsigned __int8)v26 & (v24 > 9)) )
          {
            ++v25;
            goto LABEL_88;
          }
          if ( v25 < 5 * v24 )
          {
            ++v25;
            v26 &= v24 > 9;
            goto LABEL_88;
          }
LABEL_106:
          v52 = v25 - v80;
          if ( v25 == v80 )
          {
            if ( !v89 )
              goto LABEL_130;
            if ( !v92 )
              goto LABEL_134;
LABEL_133:
            if ( v93 )
              goto LABEL_134;
LABEL_115:
            v26 = sub_409A40(a1, a2, (char **)&ps);
            if ( v26 )
              return ps;
            v54 = v96;
LABEL_135:
            v80 = v25++;
            if ( !v54 )
              goto LABEL_88;
            goto LABEL_37;
          }
          if ( !v89 )
            goto LABEL_110;
          if ( v92 )
            goto LABEL_113;
          while ( 2 )
          {
            while ( 2 )
            {
              v89 = 0;
              s += v91;
              if ( !--v52 )
                goto LABEL_130;
LABEL_110:
              if ( !v87 )
              {
                if ( ((unsigned int)dword_410680[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
                {
                  v91 = 1LL;
                  v53 = *s;
                  v92 = 1;
                  v93 = v53;
                  v89 = 1;
LABEL_113:
                  if ( !v93 )
                  {
                    if ( v89 )
                      goto LABEL_115;
LABEL_130:
                    if ( !v87 )
                    {
                      if ( ((unsigned int)dword_410680[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
                      {
                        v91 = 1LL;
                        v61 = *s;
                        v92 = 1;
                        v93 = v61;
                        v89 = 1;
                        goto LABEL_133;
                      }
                      if ( !mbsinit(&v88) )
                        goto LABEL_173;
                      v87 = 1;
                    }
                    v65 = __ctype_get_mb_cur_max();
                    v66 = s;
                    v67 = sub_407340((__int64)s, v65);
                    v68 = sub_408FC0(&v93, v66, v67, &v88);
                    v91 = v68;
                    if ( v68 == -1LL )
                    {
                      v91 = 1LL;
                      v92 = 0;
                      v89 = 1;
                    }
                    else
                    {
                      if ( v68 != -2LL )
                      {
                        if ( !v68 )
                        {
                          v91 = 1LL;
                          if ( *s )
                            goto LABEL_174;
                          if ( v93 )
                            goto LABEL_162;
                        }
                        v92 = 1;
                        if ( mbsinit(&v88) )
                          v87 = 0;
                        v89 = 1;
                        goto LABEL_133;
                      }
                      v74 = strlen(s);
                      v92 = 0;
                      v91 = v74;
                      v89 = 1;
                    }
LABEL_134:
                    v54 = v96;
                    v26 = 1;
                    goto LABEL_135;
                  }
                  continue;
                }
                if ( !mbsinit(&v88) )
                  goto LABEL_173;
                v87 = 1;
              }
              break;
            }
            v55 = __ctype_get_mb_cur_max();
            v56 = s;
            v57 = sub_407340((__int64)s, v55);
            v58 = sub_408FC0(&v93, v56, v57, &v88);
            v91 = v58;
            switch ( v58 )
            {
              case 0xFFFFFFFFFFFFFFFFLL:
                v91 = 1LL;
                v92 = 0;
                continue;
              case 0xFFFFFFFFFFFFFFFELL:
                v59 = strlen(s);
                v92 = 0;
                v91 = v59;
                continue;
              case 0uLL:
                v91 = 1LL;
                if ( *s )
                  goto LABEL_174;
                if ( v93 )
                  goto LABEL_162;
                break;
            }
            break;
          }
          v92 = 1;
          if ( mbsinit(&v88) )
            v87 = 0;
          v89 = 1;
          goto LABEL_113;
        case 0uLL:
          n[1] = 1LL;
          if ( *(_BYTE *)n[0] )
            goto LABEL_174;
          if ( DWORD1(v96) )
            goto LABEL_162;
          break;
      }
      LOBYTE(v96) = 1;
      if ( mbsinit((const mbstate_t *)((char *)&v94 + 4)) )
        LOBYTE(v94) = 0;
      BYTE12(v94) = 1;
LABEL_33:
      if ( !DWORD1(v96) )
        return 0LL;
      if ( (unsigned __int8)v26 & (v24 > 9) )
      {
        if ( v25 >= 5 * v24 )
          goto LABEL_106;
        ++v25;
        v26 &= v24 > 9;
      }
      else
      {
        ++v25;
      }
LABEL_37:
      if ( v85 )
      {
        if ( DWORD1(v96) == v86 )
          goto LABEL_39;
LABEL_66:
        v42 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v42 = n[1];
      if ( n[1] == v84 && !memcmp((const void *)n[0], v83, n[1]) )
      {
LABEL_39:
        v28 = *a2;
        v29 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v30 = _mm_load_si128((const __m128i *)&v94);
        LOBYTE(ps.__count) = 0;
        *(__m128i *)s1 = v29;
        v31 = _mm_load_si128((const __m128i *)&v96);
        s1[0] = (void *)(v29.m128i_i64[1] + v29.m128i_i64[0]);
        v32 = _mm_load_si128((const __m128i *)&v97);
        *(__m128i *)&v98[0].__count = v30;
        v100 = v31;
        v33 = dword_410680[(unsigned __int8)v28 >> 5];
        v101 = v32;
        v98[1].__wchb[0] = 0;
        v103 = 0;
        *(mbstate_t *)((char *)&ps + 4) = 0LL;
        if ( (v33 >> v28) & 1 )
        {
          v105 = 1LL;
          pwc = v28;
          v106 = 1;
          v103 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
        {
          LOBYTE(ps.__count) = 1;
          v62 = __ctype_get_mb_cur_max();
          v79 = (char *)s2;
          v63 = sub_407340((__int64)s2, v62);
          v64 = sub_408FC0(&pwc, v79, v63, (mbstate_t *)((char *)&ps + 4));
          v105 = v64;
          if ( v64 == -1LL )
          {
            v105 = 1LL;
            v106 = 0;
          }
          else if ( v64 == -2LL )
          {
            v73 = strlen((const char *)s2);
            v106 = 0;
            v105 = v73;
          }
          else
          {
            if ( !v64 )
            {
              v105 = 1LL;
              if ( !*(_BYTE *)s2 )
              {
                if ( !pwc )
                  goto LABEL_143;
LABEL_162:
                sub_409A20();
              }
LABEL_174:
              __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
            }
LABEL_143:
            v106 = 1;
            if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
              LOBYTE(ps.__count) = 0;
            v103 = 1;
LABEL_41:
            if ( !pwc )
              abort();
          }
          v103 = 0;
          ++v25;
          s2 = (char *)s2 + v105;
          while ( 2 )
          {
            if ( LOBYTE(ps.__count) )
            {
LABEL_55:
              v38 = __ctype_get_mb_cur_max();
              v39 = (char *)s2;
              v40 = sub_407340((__int64)s2, v38);
              v41 = sub_408FC0(&pwc, v39, v40, (mbstate_t *)((char *)&ps + 4));
              v105 = v41;
              if ( v41 == -1LL )
              {
                v105 = 1LL;
                v106 = 0;
                v103 = 1;
              }
              else if ( v41 == -2LL )
              {
                v50 = strlen((const char *)s2);
                v106 = 0;
                v105 = v50;
                v103 = 1;
              }
              else
              {
                if ( !v41 )
                {
                  v105 = 1LL;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_174;
                  if ( pwc )
                    goto LABEL_162;
                }
                v106 = 1;
                if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  LOBYTE(ps.__count) = 0;
                v103 = 1;
                if ( !pwc )
                  return (mbstate_t)n[0];
              }
            }
            else
            {
              if ( !(((unsigned int)dword_410680[(*(_BYTE *)s2 >> 5) & 7] >> *(_BYTE *)s2) & 1) )
              {
                if ( !mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  goto LABEL_173;
                LOBYTE(ps.__count) = 1;
                goto LABEL_55;
              }
              v105 = 1LL;
              v34 = *(char *)s2;
              v106 = 1;
              pwc = v34;
              v103 = 1;
              if ( !v34 )
                return (mbstate_t)n[0];
            }
            if ( !v98[1].__wchb[0] )
            {
              if ( !LOBYTE(v98[0].__count) )
              {
                if ( ((unsigned int)dword_410680[(*(_BYTE *)s1[0] >> 5) & 7] >> *(_BYTE *)s1[0]) & 1 )
                {
                  s1[1] = (void *)1;
                  v35 = *(char *)s1[0];
                  v100.m128i_i8[0] = 1;
                  v100.m128i_i32[1] = v35;
                  v98[1].__wchb[0] = 1;
LABEL_49:
                  v36 = v100.m128i_i32[1];
                  if ( !v100.m128i_i32[1] )
                    return 0LL;
LABEL_50:
                  if ( v106 )
                  {
                    v37 = pwc != v36;
LABEL_52:
                    if ( v37 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned __int64)s1[1];
                    ++v25;
                    s2 = (char *)s2 + v105;
                    v98[1].__wchb[0] = 0;
                    v103 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != (void *)v105 )
                    goto LABEL_66;
                  v37 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((mbstate_t *)((char *)v98 + 4)) )
                  goto LABEL_173;
                LOBYTE(v98[0].__count) = 1;
              }
              v43 = __ctype_get_mb_cur_max();
              v44 = (char *)s1[0];
              v45 = sub_407340((__int64)s1[0], v43);
              v46 = (void *)sub_408FC0(&v100.m128i_i32[1], v44, v45, (mbstate_t *)((char *)v98 + 4));
              s1[1] = v46;
              if ( v46 == (void *)-1LL )
              {
                s1[1] = (void *)1;
                v100.m128i_i8[0] = 0;
                v98[1].__wchb[0] = 1;
              }
              else
              {
                if ( v46 != (void *)-2LL )
                {
                  if ( !v46 )
                  {
                    s1[1] = (void *)1;
                    if ( *(_BYTE *)s1[0] )
                      goto LABEL_174;
                    if ( v100.m128i_i32[1] )
                      goto LABEL_162;
                  }
                  v100.m128i_i8[0] = 1;
                  if ( mbsinit((mbstate_t *)((char *)v98 + 4)) )
                    LOBYTE(v98[0].__count) = 0;
                  v36 = v100.m128i_i32[1];
                  v98[1].__wchb[0] = 1;
                  if ( !v100.m128i_i32[1] )
                    return 0LL;
                  goto LABEL_50;
                }
                v51 = (void *)strlen((const char *)s1[0]);
                v100.m128i_i8[0] = 0;
                s1[1] = v51;
                v98[1].__wchb[0] = 1;
              }
              goto LABEL_65;
            }
            break;
          }
          if ( v100.m128i_i8[0] )
            goto LABEL_49;
          goto LABEL_65;
        }
LABEL_173:
        __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v42;
      ++v24;
      BYTE12(v94) = 0;
    }
  }
  v4 = *a2;
  result = (mbstate_t)a1;
  if ( !*a2 )
    return result;
  v6 = a1->__count;
  if ( !LOBYTE(a1->__count) )
    return 0LL;
  v7 = a2;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 1;
  while ( 1 )
  {
    ++v8;
    v14 = v9 + 1;
    v15 = (unsigned __int8 *)(v3 + 1);
    if ( v4 != v6 )
    {
      if ( !v3[1] )
        return 0LL;
      goto LABEL_12;
    }
    v18 = *(_BYTE *)(v2 + 1);
    if ( !v18 )
      return (mbstate_t)v3;
    if ( !*v15 )
      return 0LL;
    v14 = v9 + 2;
    if ( v18 == *v15 )
      break;
LABEL_12:
    v16 = v11 & (v8 > 9);
    if ( (unsigned __int8)v11 & (v8 > 9) )
    {
      if ( v14 < 5 * v8
        || v7 && (v76 = (char *)v7, v12 = strnlen(v7, v14 - (_QWORD)v10), v10 = (char *)v14, v7 = &v76[v12], v76[v12]) )
      {
        v11 = v16;
      }
      else
      {
        v77 = v10;
        v13 = strlen((const char *)v2);
        v11 = sub_409890(v15, v2, v13, &ps);
        v10 = v77;
        if ( v11 )
          return ps;
        v7 = 0LL;
      }
    }
    v6 = *v15;
    v3 = (char *)v15;
    v9 = v14;
  }
  v19 = -(__int64)v9;
  v20 = v2 + v19;
  v21 = &v3[v19];
  while ( 1 )
  {
    v23 = *(_BYTE *)(v20 + v14);
    if ( !v23 )
      return (mbstate_t)v3;
    v22 = v21[v14];
    if ( !v22 )
      return 0LL;
    ++v14;
    if ( v23 != v22 )
      goto LABEL_12;
  }
}

mbstate_t __fastcall sub_40A420(mbstate_t *a1, char *a2)
{
  __int64 v2; // r13
  char *v3; // rbp
  char v4; // r15
  mbstate_t result; // rax
  unsigned __int8 v6; // cl
  const char *v7; // r9
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  char *v10; // r8
  char v11; // al
  size_t v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int8 *v15; // r14
  char v16; // bp
  wchar_t v17; // ecx
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rdi
  char *v21; // rdx
  char v22; // si
  char v23; // cl
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  char v26; // r14
  int v27; // eax
  wchar_t v28; // ecx
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  unsigned int v33; // eax
  wchar_t v34; // eax
  __int32 v35; // eax
  __int32 v36; // eax
  bool v37; // al
  __int64 v38; // rax
  char *v39; // r15
  __int64 v40; // rax
  size_t v41; // rax
  size_t v42; // r15
  __int64 v43; // rax
  char *v44; // r15
  __int64 v45; // rax
  void *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  void *v51; // rax
  unsigned __int64 v52; // r14
  int v53; // eax
  char v54; // dl
  __int64 v55; // rax
  char *v56; // r15
  __int64 v57; // rax
  size_t v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  size_t v64; // rax
  __int64 v65; // rax
  char *v66; // r14
  __int64 v67; // rax
  size_t v68; // rax
  __int64 v69; // rax
  char *v70; // r12
  __int64 v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  char *v76; // [rsp+0h] [rbp-188h]
  char *v77; // [rsp+0h] [rbp-188h]
  char *v78; // [rsp+0h] [rbp-188h]
  char *v79; // [rsp+0h] [rbp-188h]
  unsigned __int64 v80; // [rsp+8h] [rbp-180h]
  mbstate_t v81; // [rsp+14h] [rbp-174h]
  char v82; // [rsp+1Ch] [rbp-16Ch]
  char *v83; // [rsp+20h] [rbp-168h]
  size_t v84; // [rsp+28h] [rbp-160h]
  char v85; // [rsp+30h] [rbp-158h]
  wchar_t v86; // [rsp+34h] [rbp-154h]
  char v87; // [rsp+50h] [rbp-138h]
  mbstate_t v88; // [rsp+54h] [rbp-134h]
  char v89; // [rsp+5Ch] [rbp-12Ch]
  char *s; // [rsp+60h] [rbp-128h]
  size_t v91; // [rsp+68h] [rbp-120h]
  char v92; // [rsp+70h] [rbp-118h]
  int v93; // [rsp+74h] [rbp-114h]
  __int128 v94; // [rsp+90h] [rbp-F8h]
  size_t n[2]; // [rsp+A0h] [rbp-E8h]
  __int128 v96; // [rsp+B0h] [rbp-D8h]
  __int128 v97; // [rsp+C0h] [rbp-C8h]
  mbstate_t v98[2]; // [rsp+D0h] [rbp-B8h]
  void *s1[2]; // [rsp+E0h] [rbp-A8h]
  __m128i v100; // [rsp+F0h] [rbp-98h]
  __m128i v101; // [rsp+100h] [rbp-88h]
  mbstate_t ps; // [rsp+110h] [rbp-78h]
  char v103; // [rsp+11Ch] [rbp-6Ch]
  void *s2; // [rsp+120h] [rbp-68h]
  size_t v105; // [rsp+128h] [rbp-60h]
  char v106; // [rsp+130h] [rbp-58h]
  wchar_t pwc; // [rsp+134h] [rbp-54h]

  v2 = (__int64)a2;
  v3 = (char *)a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v17 = *a2;
    v83 = a2;
    v82 = 0;
    v81 = 0LL;
    if ( ((unsigned int)dword_410680[(unsigned __int8)v17 >> 5] >> v17) & 1 )
    {
      v84 = 1LL;
      v86 = v17;
      v85 = 1;
      v82 = 1;
LABEL_17:
      if ( !v86 )
        return (mbstate_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v81) )
      goto LABEL_173;
    v69 = __ctype_get_mb_cur_max();
    v70 = v83;
    v71 = sub_407340((__int64)v83, v69);
    v72 = sub_408FC0(&v86, v70, v71, &v81);
    v84 = v72;
    if ( v72 == -1LL )
    {
      v84 = 1LL;
      v85 = 0;
      v82 = 1;
    }
    else
    {
      if ( v72 != -2LL )
      {
        if ( !v72 )
        {
          v84 = 1LL;
          if ( *v83 )
            goto LABEL_174;
          if ( v86 )
            goto LABEL_162;
        }
        v85 = 1;
        mbsinit(&v81);
        v82 = 1;
        goto LABEL_17;
      }
      v75 = strlen(v83);
      v85 = 0;
      v84 = v75;
      v82 = 1;
    }
LABEL_29:
    s = a2;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 1;
    v87 = 0;
    v88 = 0LL;
    v89 = 0;
    n[0] = (size_t)a1;
    LOBYTE(v94) = 0;
    *(_QWORD *)((char *)&v94 + 4) = 0LL;
    BYTE12(v94) = 0;
    v80 = 0LL;
    while ( 1 )
    {
      if ( !(_BYTE)v94 )
      {
        if ( ((unsigned int)dword_410680[(*(_BYTE *)n[0] >> 5) & 7] >> *(_BYTE *)n[0]) & 1 )
        {
          n[1] = 1LL;
          v27 = *(char *)n[0];
          LOBYTE(v96) = 1;
          DWORD1(v96) = v27;
          BYTE12(v94) = 1;
          goto LABEL_33;
        }
        if ( !mbsinit((const mbstate_t *)((char *)&v94 + 4)) )
          goto LABEL_173;
        LOBYTE(v94) = 1;
      }
      v47 = __ctype_get_mb_cur_max();
      v78 = (char *)n[0];
      v48 = sub_407340(n[0], v47);
      v49 = sub_408FC0((wchar_t *)&v96 + 1, v78, v48, (mbstate_t *)((char *)&v94 + 4));
      n[1] = v49;
      switch ( v49 )
      {
        case 0xFFFFFFFFFFFFFFFFLL:
          n[1] = 1LL;
          LOBYTE(v96) = 0;
          BYTE12(v94) = 1;
          goto LABEL_85;
        case 0xFFFFFFFFFFFFFFFELL:
          v60 = strlen((const char *)n[0]);
          LOBYTE(v96) = 0;
          n[1] = v60;
          BYTE12(v94) = 1;
LABEL_85:
          if ( !((unsigned __int8)v26 & (v24 > 9)) )
          {
            ++v25;
            goto LABEL_88;
          }
          if ( v25 < 5 * v24 )
          {
            ++v25;
            v26 &= v24 > 9;
            goto LABEL_88;
          }
LABEL_106:
          v52 = v25 - v80;
          if ( v25 == v80 )
          {
            if ( !v89 )
              goto LABEL_130;
            if ( !v92 )
              goto LABEL_134;
LABEL_133:
            if ( v93 )
              goto LABEL_134;
LABEL_115:
            v26 = sub_409A40(a1, a2, (char **)&ps);
            if ( v26 )
              return ps;
            v54 = v96;
LABEL_135:
            v80 = v25++;
            if ( !v54 )
              goto LABEL_88;
            goto LABEL_37;
          }
          if ( !v89 )
            goto LABEL_110;
          if ( v92 )
            goto LABEL_113;
          while ( 2 )
          {
            while ( 2 )
            {
              v89 = 0;
              s += v91;
              if ( !--v52 )
                goto LABEL_130;
LABEL_110:
              if ( !v87 )
              {
                if ( ((unsigned int)dword_410680[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
                {
                  v91 = 1LL;
                  v53 = *s;
                  v92 = 1;
                  v93 = v53;
                  v89 = 1;
LABEL_113:
                  if ( !v93 )
                  {
                    if ( v89 )
                      goto LABEL_115;
LABEL_130:
                    if ( !v87 )
                    {
                      if ( ((unsigned int)dword_410680[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
                      {
                        v91 = 1LL;
                        v61 = *s;
                        v92 = 1;
                        v93 = v61;
                        v89 = 1;
                        goto LABEL_133;
                      }
                      if ( !mbsinit(&v88) )
                        goto LABEL_173;
                      v87 = 1;
                    }
                    v65 = __ctype_get_mb_cur_max();
                    v66 = s;
                    v67 = sub_407340((__int64)s, v65);
                    v68 = sub_408FC0(&v93, v66, v67, &v88);
                    v91 = v68;
                    if ( v68 == -1LL )
                    {
                      v91 = 1LL;
                      v92 = 0;
                      v89 = 1;
                    }
                    else
                    {
                      if ( v68 != -2LL )
                      {
                        if ( !v68 )
                        {
                          v91 = 1LL;
                          if ( *s )
                            goto LABEL_174;
                          if ( v93 )
                            goto LABEL_162;
                        }
                        v92 = 1;
                        if ( mbsinit(&v88) )
                          v87 = 0;
                        v89 = 1;
                        goto LABEL_133;
                      }
                      v74 = strlen(s);
                      v92 = 0;
                      v91 = v74;
                      v89 = 1;
                    }
LABEL_134:
                    v54 = v96;
                    v26 = 1;
                    goto LABEL_135;
                  }
                  continue;
                }
                if ( !mbsinit(&v88) )
                  goto LABEL_173;
                v87 = 1;
              }
              break;
            }
            v55 = __ctype_get_mb_cur_max();
            v56 = s;
            v57 = sub_407340((__int64)s, v55);
            v58 = sub_408FC0(&v93, v56, v57, &v88);
            v91 = v58;
            switch ( v58 )
            {
              case 0xFFFFFFFFFFFFFFFFLL:
                v91 = 1LL;
                v92 = 0;
                continue;
              case 0xFFFFFFFFFFFFFFFELL:
                v59 = strlen(s);
                v92 = 0;
                v91 = v59;
                continue;
              case 0uLL:
                v91 = 1LL;
                if ( *s )
                  goto LABEL_174;
                if ( v93 )
                  goto LABEL_162;
                break;
            }
            break;
          }
          v92 = 1;
          if ( mbsinit(&v88) )
            v87 = 0;
          v89 = 1;
          goto LABEL_113;
        case 0uLL:
          n[1] = 1LL;
          if ( *(_BYTE *)n[0] )
            goto LABEL_174;
          if ( DWORD1(v96) )
            goto LABEL_162;
          break;
      }
      LOBYTE(v96) = 1;
      if ( mbsinit((const mbstate_t *)((char *)&v94 + 4)) )
        LOBYTE(v94) = 0;
      BYTE12(v94) = 1;
LABEL_33:
      if ( !DWORD1(v96) )
        return 0LL;
      if ( (unsigned __int8)v26 & (v24 > 9) )
      {
        if ( v25 >= 5 * v24 )
          goto LABEL_106;
        ++v25;
        v26 &= v24 > 9;
      }
      else
      {
        ++v25;
      }
LABEL_37:
      if ( v85 )
      {
        if ( DWORD1(v96) == v86 )
          goto LABEL_39;
LABEL_66:
        v42 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v42 = n[1];
      if ( n[1] == v84 && !memcmp((const void *)n[0], v83, n[1]) )
      {
LABEL_39:
        v28 = *a2;
        v29 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v30 = _mm_load_si128((const __m128i *)&v94);
        LOBYTE(ps.__count) = 0;
        *(__m128i *)s1 = v29;
        v31 = _mm_load_si128((const __m128i *)&v96);
        s1[0] = (void *)(v29.m128i_i64[1] + v29.m128i_i64[0]);
        v32 = _mm_load_si128((const __m128i *)&v97);
        *(__m128i *)&v98[0].__count = v30;
        v100 = v31;
        v33 = dword_410680[(unsigned __int8)v28 >> 5];
        v101 = v32;
        v98[1].__wchb[0] = 0;
        v103 = 0;
        *(mbstate_t *)((char *)&ps + 4) = 0LL;
        if ( (v33 >> v28) & 1 )
        {
          v105 = 1LL;
          pwc = v28;
          v106 = 1;
          v103 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
        {
          LOBYTE(ps.__count) = 1;
          v62 = __ctype_get_mb_cur_max();
          v79 = (char *)s2;
          v63 = sub_407340((__int64)s2, v62);
          v64 = sub_408FC0(&pwc, v79, v63, (mbstate_t *)((char *)&ps + 4));
          v105 = v64;
          if ( v64 == -1LL )
          {
            v105 = 1LL;
            v106 = 0;
          }
          else if ( v64 == -2LL )
          {
            v73 = strlen((const char *)s2);
            v106 = 0;
            v105 = v73;
          }
          else
          {
            if ( !v64 )
            {
              v105 = 1LL;
              if ( !*(_BYTE *)s2 )
              {
                if ( !pwc )
                  goto LABEL_143;
LABEL_162:
                sub_409A20();
              }
LABEL_174:
              __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
            }
LABEL_143:
            v106 = 1;
            if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
              LOBYTE(ps.__count) = 0;
            v103 = 1;
LABEL_41:
            if ( !pwc )
              abort();
          }
          v103 = 0;
          ++v25;
          s2 = (char *)s2 + v105;
          while ( 2 )
          {
            if ( LOBYTE(ps.__count) )
            {
LABEL_55:
              v38 = __ctype_get_mb_cur_max();
              v39 = (char *)s2;
              v40 = sub_407340((__int64)s2, v38);
              v41 = sub_408FC0(&pwc, v39, v40, (mbstate_t *)((char *)&ps + 4));
              v105 = v41;
              if ( v41 == -1LL )
              {
                v105 = 1LL;
                v106 = 0;
                v103 = 1;
              }
              else if ( v41 == -2LL )
              {
                v50 = strlen((const char *)s2);
                v106 = 0;
                v105 = v50;
                v103 = 1;
              }
              else
              {
                if ( !v41 )
                {
                  v105 = 1LL;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_174;
                  if ( pwc )
                    goto LABEL_162;
                }
                v106 = 1;
                if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  LOBYTE(ps.__count) = 0;
                v103 = 1;
                if ( !pwc )
                  return (mbstate_t)n[0];
              }
            }
            else
            {
              if ( !(((unsigned int)dword_410680[(*(_BYTE *)s2 >> 5) & 7] >> *(_BYTE *)s2) & 1) )
              {
                if ( !mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  goto LABEL_173;
                LOBYTE(ps.__count) = 1;
                goto LABEL_55;
              }
              v105 = 1LL;
              v34 = *(char *)s2;
              v106 = 1;
              pwc = v34;
              v103 = 1;
              if ( !v34 )
                return (mbstate_t)n[0];
            }
            if ( !v98[1].__wchb[0] )
            {
              if ( !LOBYTE(v98[0].__count) )
              {
                if ( ((unsigned int)dword_410680[(*(_BYTE *)s1[0] >> 5) & 7] >> *(_BYTE *)s1[0]) & 1 )
                {
                  s1[1] = (void *)1;
                  v35 = *(char *)s1[0];
                  v100.m128i_i8[0] = 1;
                  v100.m128i_i32[1] = v35;
                  v98[1].__wchb[0] = 1;
LABEL_49:
                  v36 = v100.m128i_i32[1];
                  if ( !v100.m128i_i32[1] )
                    return 0LL;
LABEL_50:
                  if ( v106 )
                  {
                    v37 = pwc != v36;
LABEL_52:
                    if ( v37 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned __int64)s1[1];
                    ++v25;
                    s2 = (char *)s2 + v105;
                    v98[1].__wchb[0] = 0;
                    v103 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != (void *)v105 )
                    goto LABEL_66;
                  v37 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((mbstate_t *)((char *)v98 + 4)) )
                  goto LABEL_173;
                LOBYTE(v98[0].__count) = 1;
              }
              v43 = __ctype_get_mb_cur_max();
              v44 = (char *)s1[0];
              v45 = sub_407340((__int64)s1[0], v43);
              v46 = (void *)sub_408FC0(&v100.m128i_i32[1], v44, v45, (mbstate_t *)((char *)v98 + 4));
              s1[1] = v46;
              if ( v46 == (void *)-1LL )
              {
                s1[1] = (void *)1;
                v100.m128i_i8[0] = 0;
                v98[1].__wchb[0] = 1;
              }
              else
              {
                if ( v46 != (void *)-2LL )
                {
                  if ( !v46 )
                  {
                    s1[1] = (void *)1;
                    if ( *(_BYTE *)s1[0] )
                      goto LABEL_174;
                    if ( v100.m128i_i32[1] )
                      goto LABEL_162;
                  }
                  v100.m128i_i8[0] = 1;
                  if ( mbsinit((mbstate_t *)((char *)v98 + 4)) )
                    LOBYTE(v98[0].__count) = 0;
                  v36 = v100.m128i_i32[1];
                  v98[1].__wchb[0] = 1;
                  if ( !v100.m128i_i32[1] )
                    return 0LL;
                  goto LABEL_50;
                }
                v51 = (void *)strlen((const char *)s1[0]);
                v100.m128i_i8[0] = 0;
                s1[1] = v51;
                v98[1].__wchb[0] = 1;
              }
              goto LABEL_65;
            }
            break;
          }
          if ( v100.m128i_i8[0] )
            goto LABEL_49;
          goto LABEL_65;
        }
LABEL_173:
        __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v42;
      ++v24;
      BYTE12(v94) = 0;
    }
  }
  v4 = *a2;
  result = (mbstate_t)a1;
  if ( !*a2 )
    return result;
  v6 = a1->__count;
  if ( !LOBYTE(a1->__count) )
    return 0LL;
  v7 = a2;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 1;
  while ( 1 )
  {
    ++v8;
    v14 = v9 + 1;
    v15 = (unsigned __int8 *)(v3 + 1);
    if ( v4 != v6 )
    {
      if ( !v3[1] )
        return 0LL;
      goto LABEL_12;
    }
    v18 = *(_BYTE *)(v2 + 1);
    if ( !v18 )
      return (mbstate_t)v3;
    if ( !*v15 )
      return 0LL;
    v14 = v9 + 2;
    if ( v18 == *v15 )
      break;
LABEL_12:
    v16 = v11 & (v8 > 9);
    if ( (unsigned __int8)v11 & (v8 > 9) )
    {
      if ( v14 < 5 * v8
        || v7 && (v76 = (char *)v7, v12 = strnlen(v7, v14 - (_QWORD)v10), v10 = (char *)v14, v7 = &v76[v12], v76[v12]) )
      {
        v11 = v16;
      }
      else
      {
        v77 = v10;
        v13 = strlen((const char *)v2);
        v11 = sub_409890(v15, v2, v13, &ps);
        v10 = v77;
        if ( v11 )
          return ps;
        v7 = 0LL;
      }
    }
    v6 = *v15;
    v3 = (char *)v15;
    v9 = v14;
  }
  v19 = -(__int64)v9;
  v20 = v2 + v19;
  v21 = &v3[v19];
  while ( 1 )
  {
    v23 = *(_BYTE *)(v20 + v14);
    if ( !v23 )
      return (mbstate_t)v3;
    v22 = v21[v14];
    if ( !v22 )
      return 0LL;
    ++v14;
    if ( v23 != v22 )
      goto LABEL_12;
  }
}

__int64 __fastcall sub_40B2F0(char *a1, char *a2, void *a3, void **a4, unsigned __int64 *a5)
{
  char *v5; // r13
  void *v6; // rbx
  __int64 v7; // r14
  int v8; // eax
  void *v9; // r14
  unsigned int v10; // ebx
  int *v12; // rax
  int v13; // er12
  int *v14; // rbp
  unsigned __int64 size; // [rsp+0h] [rbp-1078h]
  void **v16; // [rsp+8h] [rbp-1070h]
  unsigned __int64 *v17; // [rsp+10h] [rbp-1068h]
  char *inbuf; // [rsp+20h] [rbp-1058h]
  size_t inbytesleft; // [rsp+28h] [rbp-1050h]
  char *outbuf; // [rsp+30h] [rbp-1048h]
  size_t outbytesleft; // [rsp+38h] [rbp-1040h]
  size_t v22; // [rsp+40h] [rbp-1038h]

  v5 = a2;
  v6 = a3;
  v16 = a4;
  v17 = a5;
  iconv(a3, 0LL, 0LL, 0LL, 0LL);
  inbuf = a1;
  v7 = 0LL;
  inbytesleft = (size_t)a2;
  if ( a2 )
  {
    while ( 1 )
    {
      outbuf = (char *)&v22;
      outbytesleft = 4096LL;
      if ( iconv(v6, &inbuf, &inbytesleft, &outbuf, &outbytesleft) == -1LL )
      {
        v8 = *__errno_location();
        if ( v8 != 7 )
          break;
      }
      v7 += outbuf - (char *)&v22;
      if ( !inbytesleft )
        goto LABEL_7;
    }
    if ( v8 != 22 )
      return (unsigned int)-1;
  }
LABEL_7:
  outbuf = (char *)&v22;
  outbytesleft = 4096LL;
  if ( iconv(v6, 0LL, 0LL, &outbuf, &outbytesleft) == -1LL )
    return (unsigned int)-1;
  size = v7 + outbuf - (char *)&v22;
  if ( !(v7 + outbuf - (char *)&v22) )
  {
    v10 = 0;
    *v17 = 0LL;
    return v10;
  }
  v9 = *v16;
  if ( !*v16 || *v17 < size )
  {
    v9 = malloc(size);
    if ( !v9 )
    {
      *__errno_location() = 12;
      return (unsigned int)-1;
    }
  }
  iconv(v6, 0LL, 0LL, 0LL, 0LL);
  outbuf = a2;
  outbytesleft = (size_t)v9;
  inbytesleft = (size_t)a1;
  v22 = size;
  while ( v5 )
  {
    if ( iconv(v6, (char **)&inbytesleft, (size_t *)&outbuf, (char **)&outbytesleft, &v22) == -1LL )
    {
      if ( *__errno_location() != 22 )
        goto LABEL_24;
      break;
    }
    v5 = outbuf;
  }
  if ( iconv(v6, 0LL, 0LL, (char **)&outbytesleft, &v22) != -1LL )
  {
    if ( v22 )
      abort();
    v10 = 0;
    *v16 = v9;
    *v17 = size;
    return v10;
  }
LABEL_24:
  v10 = -1;
  if ( *v16 != v9 )
  {
    v12 = __errno_location();
    v13 = *v12;
    v14 = v12;
    free(v9);
    *v14 = v13;
  }
  return v10;
}

__int64 __fastcall sub_40B2F0(char *a1, char *a2, void *a3, void **a4, unsigned __int64 *a5)
{
  char *v5; // r13
  void *v6; // rbx
  __int64 v7; // r14
  int v8; // eax
  void *v9; // r14
  unsigned int v10; // ebx
  int *v12; // rax
  int v13; // er12
  int *v14; // rbp
  unsigned __int64 size; // [rsp+0h] [rbp-1078h]
  void **v16; // [rsp+8h] [rbp-1070h]
  unsigned __int64 *v17; // [rsp+10h] [rbp-1068h]
  char *inbuf; // [rsp+20h] [rbp-1058h]
  size_t inbytesleft; // [rsp+28h] [rbp-1050h]
  char *outbuf; // [rsp+30h] [rbp-1048h]
  size_t outbytesleft; // [rsp+38h] [rbp-1040h]
  size_t v22; // [rsp+40h] [rbp-1038h]

  v5 = a2;
  v6 = a3;
  v16 = a4;
  v17 = a5;
  iconv(a3, 0LL, 0LL, 0LL, 0LL);
  inbuf = a1;
  v7 = 0LL;
  inbytesleft = (size_t)a2;
  if ( a2 )
  {
    while ( 1 )
    {
      outbuf = (char *)&v22;
      outbytesleft = 4096LL;
      if ( iconv(v6, &inbuf, &inbytesleft, &outbuf, &outbytesleft) == -1LL )
      {
        v8 = *__errno_location();
        if ( v8 != 7 )
          break;
      }
      v7 += outbuf - (char *)&v22;
      if ( !inbytesleft )
        goto LABEL_7;
    }
    if ( v8 != 22 )
      return (unsigned int)-1;
  }
LABEL_7:
  outbuf = (char *)&v22;
  outbytesleft = 4096LL;
  if ( iconv(v6, 0LL, 0LL, &outbuf, &outbytesleft) == -1LL )
    return (unsigned int)-1;
  size = v7 + outbuf - (char *)&v22;
  if ( !(v7 + outbuf - (char *)&v22) )
  {
    v10 = 0;
    *v17 = 0LL;
    return v10;
  }
  v9 = *v16;
  if ( !*v16 || *v17 < size )
  {
    v9 = malloc(size);
    if ( !v9 )
    {
      *__errno_location() = 12;
      return (unsigned int)-1;
    }
  }
  iconv(v6, 0LL, 0LL, 0LL, 0LL);
  outbuf = a2;
  outbytesleft = (size_t)v9;
  inbytesleft = (size_t)a1;
  v22 = size;
  while ( v5 )
  {
    if ( iconv(v6, (char **)&inbytesleft, (size_t *)&outbuf, (char **)&outbytesleft, &v22) == -1LL )
    {
      if ( *__errno_location() != 22 )
        goto LABEL_24;
      break;
    }
    v5 = outbuf;
  }
  if ( iconv(v6, 0LL, 0LL, (char **)&outbytesleft, &v22) != -1LL )
  {
    if ( v22 )
      abort();
    v10 = 0;
    *v16 = v9;
    *v17 = size;
    return v10;
  }
LABEL_24:
  v10 = -1;
  if ( *v16 != v9 )
  {
    v12 = __errno_location();
    v13 = *v12;
    v14 = v12;
    free(v9);
    *v14 = v13;
  }
  return v10;
}

char *__fastcall sub_40B540(const char *a1, void *a2)
{
  size_t v2; // rax
  size_t v3; // rbx
  unsigned __int64 v4; // r13
  char *v5; // r12
  int *v6; // rax
  int *v7; // r15
  int v8; // eax
  __int64 v9; // rbp
  char *v10; // rbx
  char *v11; // rax
  __int64 v12; // rbp
  char *v13; // rbx
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  void *v17; // rdi
  const char *v19; // [rsp+0h] [rbp-58h]
  size_t inbytesleft; // [rsp+8h] [rbp-50h]
  char *outbuf; // [rsp+10h] [rbp-48h]
  size_t outbytesleft; // [rsp+18h] [rbp-40h]

  v19 = a1;
  v2 = strlen(a1);
  inbytesleft = v2;
  v3 = 16 * v2;
  if ( v2 >= 0x10000000 )
    v3 = v2;
  v4 = v3 + 1;
  v5 = (char *)malloc(v3 + 1);
  if ( v5 )
  {
    iconv(a2, 0LL, 0LL, 0LL, 0LL);
    outbuf = v5;
    for ( outbytesleft = v3;
          iconv(a2, (char **)&v19, &inbytesleft, &outbuf, &outbytesleft) == -1LL;
          outbytesleft = v9 - 1 - (_QWORD)v10 )
    {
      v6 = __errno_location();
      v7 = v6;
      v8 = *v6;
      if ( v8 == 22 )
        break;
      if ( v8 != 7 )
        goto LABEL_22;
      v9 = 2 * v4;
      v10 = (char *)(outbuf - v5);
      if ( v4 >= 2 * v4 || (v11 = (char *)realloc(v5, 2 * v4)) == 0LL )
      {
LABEL_21:
        *v7 = 12;
LABEL_22:
        v17 = v5;
        v5 = 0LL;
        free(v17);
        return v5;
      }
      v5 = v11;
      v4 *= 2LL;
      outbuf = &v10[(_QWORD)v11];
    }
    while ( iconv(a2, 0LL, 0LL, &outbuf, &outbytesleft) == -1LL )
    {
      v7 = __errno_location();
      if ( *v7 != 7 )
        goto LABEL_22;
      v12 = 2 * v4;
      v13 = (char *)(outbuf - v5);
      if ( v4 >= 2 * v4 )
        goto LABEL_21;
      v14 = (char *)realloc(v5, 2 * v4);
      if ( !v14 )
        goto LABEL_21;
      v4 *= 2LL;
      v5 = v14;
      outbuf = &v13[(_QWORD)v14];
      outbytesleft = v12 - 1 - (_QWORD)v13;
    }
    v15 = outbuf++;
    *v15 = 0;
    if ( v4 > outbuf - v5 )
    {
      v16 = (char *)realloc(v5, outbuf - v5);
      if ( v16 )
        v5 = v16;
    }
  }
  else
  {
    *__errno_location() = 12;
  }
  return v5;
}

char *__fastcall sub_40B710(char *s, char *fromcode, char *tocode)
{
  char *v3; // rbp
  char *v4; // rbx
  iconv_t v6; // rax
  void *v7; // rbp
  int *v8; // rax
  char *v9; // rdi
  int v10; // er12
  int *v11; // rbp
  int *v12; // rax
  int v13; // er13
  int *v14; // r12

  if ( *s )
  {
    v3 = tocode;
    if ( (unsigned int)sub_409150((__int64)fromcode, (__int64)tocode) )
    {
      v6 = iconv_open(v3, fromcode);
      v7 = v6;
      if ( v6 == (iconv_t)-1LL )
        return 0LL;
      v4 = sub_40B540(s, v6);
      if ( v4 )
      {
        if ( iconv_close(v7) < 0 )
        {
          v8 = __errno_location();
          v9 = v4;
          v4 = 0LL;
          v10 = *v8;
          v11 = v8;
          free(v9);
          *v11 = v10;
        }
      }
      else
      {
        v12 = __errno_location();
        v13 = *v12;
        v14 = v12;
        iconv_close(v7);
        *v14 = v13;
      }
      return v4;
    }
  }
  v4 = strdup(s);
  if ( v4 )
    return v4;
  *__errno_location() = 12;
  return 0LL;
}

int __fastcall sub_40B800(FILE *stream)
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
  if ( !(unsigned int)sub_40B880(stream) )
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

int __fastcall sub_40B880(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_40B8C0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_40B8C0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_40B920(__int64 a1)
{
  bool v1; // cf
  size_t v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rax

  v1 = __CFADD__(a1, 16LL);
  v2 = a1 + 16;
  if ( v1 )
    return 0LL;
  v3 = (__int64 *)malloc(v2);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 3) = 336984906;
    v4 = (__int64)(v3 + 2);
    v6 = (unsigned __int64)(v3 + 2) % 0x101;
    v7 = v6;
    v8 = qword_6134C0[v6];
    qword_6134C0[v7] = v4;
    *v5 = v8;
  }
  return v4;
}

void __fastcall sub_40B990(unsigned __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 *v3; // rcx

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 - 4) == 336984906 )
    {
      v1 = qword_6134C0[a1 % 0x101];
      if ( v1 )
      {
        if ( v1 == a1 )
        {
          v3 = &qword_6134C0[a1 % 0x101];
LABEL_12:
          *v3 = *(_QWORD *)(a1 - 16);
          free((void *)(a1 - 16));
        }
        else
        {
          while ( 1 )
          {
            v2 = *(_QWORD *)(v1 - 16);
            if ( !v2 )
              break;
            if ( a1 == v2 )
            {
              v3 = (__int64 *)(v1 - 16);
              goto LABEL_12;
            }
            v1 = *(_QWORD *)(v1 - 16);
          }
        }
      }
    }
  }
}

size_t __fastcall sub_40BA20(char *s)
{
  __int64 v1; // rbx
  wchar_t v3; // eax
  __int64 v4; // rax
  char *v5; // rbp
  __int64 v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  char v9; // [rsp+0h] [rbp-58h]
  mbstate_t ps; // [rsp+4h] [rbp-54h]
  char i; // [rsp+Ch] [rbp-4Ch]
  char *sa; // [rsp+10h] [rbp-48h]
  size_t v13; // [rsp+18h] [rbp-40h]
  char v14; // [rsp+20h] [rbp-38h]
  wchar_t pwc; // [rsp+24h] [rbp-34h]

  if ( __ctype_get_mb_cur_max() > 1 )
  {
    sa = s;
    v1 = 0LL;
    v9 = 0;
    ps = 0LL;
    for ( i = 0; ; i = 0 )
    {
      if ( !v9 )
      {
        if ( ((unsigned int)dword_410680[((unsigned __int8)*sa >> 5) & 7] >> *sa) & 1 )
        {
          v13 = 1LL;
          v3 = *sa;
          v14 = 1;
          pwc = v3;
          goto LABEL_7;
        }
        if ( !mbsinit(&ps) )
          __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
        v9 = 1;
      }
      v4 = __ctype_get_mb_cur_max();
      v5 = sa;
      v6 = sub_407340((__int64)sa, v4);
      v7 = sub_408FC0(&pwc, v5, v6, &ps);
      v13 = v7;
      switch ( v7 )
      {
        case 0xFFFFFFFFFFFFFFFFLL:
          v13 = 1LL;
          v14 = 0;
          goto LABEL_8;
        case 0xFFFFFFFFFFFFFFFELL:
          v8 = strlen(sa);
          v14 = 0;
          v13 = v8;
          goto LABEL_8;
        case 0uLL:
          v13 = 1LL;
          if ( *sa )
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
          if ( pwc )
            __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
          break;
      }
      v14 = 1;
      if ( mbsinit(&ps) )
        v9 = 0;
LABEL_7:
      if ( !pwc )
        return v1;
LABEL_8:
      sa += v13;
      ++v1;
    }
  }
  return strlen(s);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40BC60(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_613228 )
    v1 = (void *)unk_613228;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40BC78(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_612E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
