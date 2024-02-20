__int64 __fastcall main(signed int a1, char **a2, char **a3)
{
  int v3; // eax@4
  void *v4; // rax@2
  __int64 v5; // r12@12
  signed int v6; // er13@13
  __int64 v8; // [sp+0h] [bp-38h]@18
  void *ptr; // [sp+8h] [bp-30h]@21

  sub_404760(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  if ( !buf )
  {
    LODWORD(v4) = sub_407EE0(
                    1024LL,
                    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    buf = v4;
    qword_613308 = (__int64)v4;
  }
  sub_40BC60(
    sub_4045F0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  sub_40BC60(
    sub_4023D0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
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
      sub_405150("Niels Moller", "Niels MÃ¶ller");
      sub_405150("Torbjorn Granlund", "TorbjÃ¶rn Granlund");
      sub_407DA0((char)stdout);
      exit(0);
    }
    byte_613310 = 1;
  }
  v5 = dword_6132BC;
  if ( dword_6132BC >= a1 )
  {
    v6 = 1;
    sub_406F70(&v8);
    while ( sub_406F80(stdin) != -1 )
      v6 &= ((int (*)(void))sub_404170)();
    free(ptr);
  }
  else
  {
    LOBYTE(v6) = 1;
    do
    {
      if ( !(unsigned __int8)sub_404170(a2[v5]) )
        LOBYTE(v6) = 0;
      ++v5;
    }
    while ( a1 > (signed int)v5 );
  }
  return (unsigned __int8)(v6 ^ 1);
}

int sub_401C6B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_401C8A()
{
  return 0;
}

int sub_401CC1()
{
  int result; // eax@4

  if ( !byte_6132E8 )
  {
    while ( qword_6132F0 < (unsigned __int64)(((&unk_612E48 - (_UNKNOWN *)&qword_612E40) >> 3) - 1) )
      (*(&qword_612E40 + ++qword_6132F0))();
    result = sub_401C6B();
    byte_6132E8 = 1;
  }
  return result;
}

int sub_401D18()
{
  return sub_401C8A();
}

unsigned __int64 __fastcall sub_401D20(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax@1
  unsigned __int64 v3; // rax@4
  signed __int64 v4; // rdx@5
  signed __int64 v5; // rdx@8

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
        v4 = ((v5 >> 63) ^ v5) - (v5 >> 63);
      }
      a1 = v4;
    }
  }
  return result;
}

void __fastcall sub_401D80(__int64 a1, unsigned __int64 a2, char a3)
{
  _BYTE *v3; // r13@1
  unsigned __int64 *v4; // r12@1
  char v5; // bp@1
  int v6; // ebx@1
  signed __int64 v7; // r8@2
  unsigned __int64 v8; // r11@2
  signed __int64 v9; // rcx@3
  int v10; // eax@3
  signed __int64 i; // r10@3
  signed __int64 v12; // r10@12

  v3 = (_BYTE *)(a1 + 224);
  v4 = (unsigned __int64 *)(a1 + 16);
  v5 = *(_BYTE *)(a1 + 250);
  v6 = *(_BYTE *)(a1 + 250) - 1;
  if ( !*(_BYTE *)(a1 + 250) )
    goto LABEL_10;
  v7 = v6;
  v8 = v4[v6];
  if ( a2 < v8 )
  {
    v9 = v6 - 1LL;
    v10 = *(_BYTE *)(a1 + 250) - 1;
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
        if ( v10 >= (signed int)v9 )
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

unsigned __int64 __fastcall sub_401E60(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r9@1
  unsigned __int64 v6; // r10@3
  unsigned __int64 v7; // rdx@3
  unsigned __int64 v8; // r10@6
  unsigned __int64 v9; // rdx@6

  v5 = a3;
  if ( !(a2 & 1) )
    goto LABEL_9;
  a5 = a1;
  do
  {
    while ( 1 )
    {
      v6 = a1 * (unsigned __int128)a1 >> 64;
      v7 = v5 * (unsigned __int128)(a4 * a1 * a1) >> 64;
      a1 = v6 - v7;
      if ( v6 < v7 )
        a1 += v5;
      a2 >>= 1;
      if ( !(a2 & 1) )
        break;
      v8 = a1 * (unsigned __int128)a5 >> 64;
      v9 = v5 * (unsigned __int128)(a4 * a1 * a5) >> 64;
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

__int64 __fastcall sub_401ED0(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned int a5, unsigned __int64 a6)
{
  unsigned __int64 v6; // r12@1
  unsigned int v7; // ebp@1
  __int64 v8; // rbx@1
  unsigned __int64 v9; // rax@1
  unsigned __int64 v10; // r11@1
  signed int v11; // er8@1
  signed int v12; // esi@3
  unsigned __int64 v13; // rcx@6
  unsigned __int64 v14; // rdx@6

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
      v13 = v9 * (unsigned __int128)v9 >> 64;
      v14 = v10 * (unsigned __int128)(v8 * v9 * v9) >> 64;
      v9 = v13 - v14;
      if ( v13 < v14 )
        v9 += v10;
      if ( v10 - v6 == v9 )
        break;
      if ( v6 != v9 && v7 != ++v12 )
        continue;
      return (unsigned int)v11;
    }
    v11 = 1;
  }
  return (unsigned int)v11;
}

__int64 __fastcall sub_401F60(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6, unsigned __int64 a7, __int64 a8)
{
  __int64 v8; // rbx@1
  unsigned __int64 v9; // rbp@4
  unsigned __int128 v10; // ax@4
  __int64 v11; // r12@4
  unsigned __int64 v12; // r13@4
  unsigned __int64 v13; // r14@4
  unsigned __int128 v14; // t2@4
  unsigned __int128 v15; // kr10_16@4
  unsigned __int128 v16; // kr20_16@4
  unsigned __int128 v17; // kr50_16@4
  unsigned __int128 v18; // ax@4

  v8 = -a8;
  if ( a2 < 0 )
    __assert_fail("(a1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 0x3E7u, "mulredc2");
  if ( a4 < 0 )
    __assert_fail("(b1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 0x3E8u, "mulredc2");
  if ( a6 < 0 )
    __assert_fail("(m1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 0x3E9u, "mulredc2");
  v9 = a3;
  v10 = a5 * (unsigned __int128)a3;
  v11 = v10;
  v12 = *((_QWORD *)&v10 + 1);
  v13 = a7 * (unsigned __int128)(unsigned __int64)(v10 * v8) >> 64;
  v14 = (unsigned __int64)a6 * (unsigned __int128)(unsigned __int64)(v10 * v8);
  *(_QWORD *)&v10 = a6 * v10 * v8;
  *((_QWORD *)&v10 + 1) = *((_QWORD *)&v14 + 1);
  v15 = v10 + __PAIR__((unsigned __int64)a4 * (unsigned __int128)v9 >> 64, v13) + (v11 != 0) + a4 * v9 + v12;
  v16 = (unsigned __int64)v15 + a5 * (unsigned __int128)(unsigned __int64)a2;
  v17 = (unsigned __int64)a6 * (unsigned __int128)(unsigned __int64)(v16 * v8)
      + __PAIR__(
          (*((unsigned __int64 *)&v15 + 1) + (unsigned __int64)a4 * (unsigned __int128)(unsigned __int64)a2) >> 64,
          (unsigned __int64)(a7 * (unsigned __int128)(unsigned __int64)(v16 * v8) >> 64))
      + *((_QWORD *)&v15 + 1)
      + a4 * a2
      + (unsigned __int64)((_QWORD)v16 != 0LL)
      + (v16 >> 64);
  *((_QWORD *)&v18 + 1) = ((unsigned __int64)a6 * (unsigned __int128)(unsigned __int64)(v16 * v8)
                         + __PAIR__(
                             (*((unsigned __int64 *)&v15 + 1)
                            + (unsigned __int64)a4 * (unsigned __int128)(unsigned __int64)a2) >> 64,
                             (unsigned __int64)(a7 * (unsigned __int128)(unsigned __int64)(v16 * v8) >> 64))
                         + *((_QWORD *)&v15 + 1)
                         + a4 * a2
                         + (unsigned __int64)((_QWORD)v16 != 0LL)
                         + (v16 >> 64)) >> 64;
  *(_QWORD *)&v18 = a6 * v16 * v8
                  + (a7 * (unsigned __int128)(unsigned __int64)(v16 * v8) >> 64)
                  + *((_QWORD *)&v15 + 1)
                  + a4 * a2
                  + ((_QWORD)v16 != 0LL)
                  + (v16 >> 64);
  if ( (unsigned __int64)a6 < *((_QWORD *)&v17 + 1) || a6 == *((_QWORD *)&v17 + 1) && a7 <= (unsigned __int64)v17 )
    v18 = v17 - __PAIR__(a6, a7);
  *a1 = *((_QWORD *)&v18 + 1);
  return v18;
}

__int64 __fastcall sub_4020D0(__int64 *a1, __int64 a2, unsigned __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15@1
  signed int v7; // ebp@1
  unsigned __int64 v8; // r10@1
  __int64 v9; // r11@1
  unsigned __int64 v10; // r13@1
  __int64 v11; // r14@1
  unsigned __int64 v12; // r12@1
  __int64 v13; // rax@2
  __int64 v14; // ST28_8@4
  unsigned __int64 v15; // ST30_8@4
  unsigned __int64 i; // rbp@5
  __int64 v17; // rax@7
  unsigned __int64 v18; // ST30_8@9
  __int64 v19; // ST28_8@9
  __int64 v21; // [sp+8h] [bp-60h]@1
  __int64 v22; // [sp+10h] [bp-58h]@1
  unsigned __int64 *v23; // [sp+28h] [bp-40h]@1

  v6 = a5;
  v7 = 64;
  v8 = *(_QWORD *)a2;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)a4;
  v23 = a3;
  v11 = *(_QWORD *)(a4 + 8);
  v12 = *a3;
  v22 = *(_QWORD *)a6;
  v21 = *(_QWORD *)(a6 + 8);
  do
  {
    if ( v12 & 1 )
    {
      v14 = v9;
      v15 = v8;
      v22 = sub_401F60(a1, v21, v22, v9, v8, v11, v10, v6);
      v21 = *a1;
      v8 = v15;
      v9 = v14;
    }
    v12 >>= 1;
    v13 = sub_401F60(a1, v9, v8, v9, v8, v11, v10, v6);
    v9 = *a1;
    v8 = v13;
    --v7;
  }
  while ( v7 );
  for ( i = v23[1]; i; v8 = v17 )
  {
    if ( i & 1 )
    {
      v18 = v8;
      v19 = v9;
      v22 = sub_401F60(a1, v21, v22, v9, v8, v11, v10, v6);
      v21 = *a1;
      v8 = v18;
      v9 = v19;
    }
    v17 = sub_401F60(a1, v9, v8, v9, v8, v11, v10, v6);
    i >>= 1;
    v9 = *a1;
  }
  *a1 = v21;
  return v22;
}

__int64 __fastcall sub_402240(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // er13@1
  __int64 v7; // r12@1
  __int64 v8; // rbx@1
  __int64 v9; // rax@1
  __int64 v10; // rsi@1
  __int64 v11; // r9@2
  unsigned __int64 v12; // rdx@2
  __int128 v13; // kr00_16@2
  signed int v14; // er15@3
  bool v16; // [sp+Fh] [bp-49h]@2
  __int64 v17; // [sp+18h] [bp-40h]@1

  v6 = a5;
  v7 = a2;
  v8 = a6;
  v9 = sub_4020D0(&v17, a3, a4, a1, a2, a6);
  v10 = v17;
  if ( *(_QWORD *)v8 != v9 || *(_QWORD *)(v8 + 8) != v17 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)a1;
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
        if ( (_QWORD)v13 == v9 && *((_QWORD *)&v13 + 1) == v17 )
          break;
        if ( *(_QWORD *)v8 == v9 && *(_QWORD *)(v8 + 8) == v17 )
          return v16;
        if ( v6 == ++v14 )
          return v16;
        v12 = *(_QWORD *)a1;
        v11 = *(_QWORD *)(a1 + 8);
      }
    }
  }
  return 1;
}

char *__fastcall sub_402340(__int64 a1, size_t a2)
{
  _BYTE *v2; // rax@1
  size_t v3; // rbx@1
  __int64 v4; // rdi@2
  signed __int64 v5; // r8@2
  _BYTE *v6; // rdx@2
  __int64 v7; // rcx@2
  void *v8; // r8@4
  char *result; // rax@5
  __int64 v10; // [sp+0h] [bp-38h]@1

  LODWORD(v2) = sub_404710(a1, &v10);
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

int sub_4023D0()
{
  __int64 v0; // rbx@1
  int result; // eax@2
  char *v2; // rbx@3
  int *v3; // rax@3

  v0 = qword_613308 - (_QWORD)buf;
  if ( sub_404690(1, buf, qword_613308 - (_QWORD)buf) == v0 )
  {
    result = (signed int)buf;
    qword_613308 = (__int64)buf;
  }
  else
  {
    v2 = dcgettext(0LL, "write error", 5);
    v3 = __errno_location();
    error(1, *v3, "%s", v2);
    result = sub_402440();
  }
  return result;
}

void __fastcall sub_402440(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      __assert_fail("factors->plarge[1] == 0", "src/factor.c", 0x235u, "factor_insert_large");
    *(_QWORD *)a1 = a3;
    *(_QWORD *)(a1 + 8) = a2;
  }
  else
  {
    sub_401D80(a1, a3, 1);
  }
}

unsigned __int64 __fastcall sub_402490(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r9@2
  unsigned __int64 v6; // rax@4
  bool v7; // al@8
  unsigned __int64 v8; // rax@14
  unsigned __int64 v9; // rax@18
  unsigned __int64 result; // rax@3

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
        a4 = (__PAIR__(a4, a5) - __PAIR__(v5, a3)) >> 64;
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
      v5 = (__PAIR__(v5, a3) - __PAIR__(a4, a5)) >> 64;
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

unsigned __int64 __usercall sub_402590@<rax>(unsigned __int64 a1@<rdx>, unsigned __int64 a2@<rcx>, unsigned __int64 *a3@<rdi>, unsigned __int64 a4@<rsi>, unsigned __int64 a5@<r8>, __int64 a6@<r10>)
{
  unsigned __int64 result; // rax@2
  int v7; // er10@3
  unsigned __int64 v8; // r9@3
  unsigned __int64 v9; // r8@3
  int v10; // edx@4
  unsigned __int64 v11; // rcx@9

  if ( !a2 )
    __assert_fail("d1 != 0", "src/factor.c", 0x1A3u, "mod2");
  result = a1;
  if ( a4 )
  {
    _BitScanReverse64((unsigned __int64 *)&a6, a2);
    _BitScanReverse64(&a1, a4);
    v7 = (a6 ^ 0x3F) - (a1 ^ 0x3F);
    v8 = (a2 << v7) | (a5 >> (64 - (unsigned __int8)v7));
    v9 = a5 << v7;
    if ( v7 > 0 )
    {
      v10 = 0;
      do
      {
        if ( v8 < a4 || v8 == a4 && result >= v9 )
        {
          a4 = (__PAIR__(a4, result) - __PAIR__(v8, v9)) >> 64;
          result -= v9;
        }
        ++v10;
        v11 = v8 << 63;
        v8 >>= 1;
        v9 = v11 | (v9 >> 1);
      }
      while ( v7 != v10 );
    }
    *a3 = a4;
  }
  else
  {
    *a3 = 0LL;
  }
  return result;
}

char *__fastcall sub_402640(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8@1
  signed int v3; // er9@2
  __int64 v4; // rsi@2
  unsigned __int64 v5; // rcx@2
  unsigned __int64 v6; // rdx@2
  unsigned __int64 v7; // rdi@2
  unsigned __int64 v8; // rax@2
  unsigned __int64 v9; // r10@3
  __int64 v10; // ST08_8@8
  char *result; // rax@8

  v2 = a2;
  if ( a1 )
  {
    v3 = 64;
    v4 = 0LL;
    v5 = 1000000000LL;
    v6 = (unsigned __int64)(19342813113834067LL * (unsigned __int128)(a1 >> 9) >> 64) >> 11;
    v7 = a1 - 1000000000 * v6;
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
        v7 = (__PAIR__(v7, v2) - __PAIR__(v5, v8)) >> 64;
        v2 -= v8;
      }
      --v3;
    }
    while ( v3 );
    v10 = v2;
    sub_402640(v6, v4);
    result = sub_402340(v10, 9uLL);
  }
  else
  {
    result = sub_402340(a2, 0LL);
  }
  return result;
}

int __fastcall sub_4026F0(char a1)
{
  char *v1; // rax@1
  __int64 v2; // rbp@1
  int v3; // eax@2
  void *v4; // rbx@2
  char *v5; // rbx@5
  size_t v6; // rbp@9

  LODWORD(v1) = qword_613308;
  v2 = qword_613308 + 1;
  *(_BYTE *)qword_613308 = a1;
  qword_613308 = v2;
  if ( a1 == 10 )
  {
    v3 = dword_613230;
    v4 = buf;
    if ( dword_613230 == -1 )
    {
      v3 = isatty(0);
      dword_613230 = v3;
    }
    if ( v3 )
    {
      LODWORD(v1) = sub_4023D0();
    }
    else
    {
      v1 = (char *)(v2 - (_QWORD)v4);
      v5 = (char *)v4 + 512;
      if ( (unsigned __int64)v1 > 0x1FF )
      {
        while ( *(v5 - 1) != 10 )
          --v5;
        qword_613308 = (__int64)v5;
        v6 = v2 - (_QWORD)v5;
        sub_4023D0();
        v1 = (char *)memcpy(buf, v5, v6);
        qword_613308 = (__int64)&v1[v6];
      }
    }
  }
  return (unsigned __int64)v1;
}

void __fastcall sub_4027D0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12@2
  unsigned __int64 v4; // rcx@3
  signed int v5; // esi@3
  unsigned __int64 v6; // rax@3
  unsigned __int64 v7; // rdx@3
  unsigned __int64 v8; // rdi@3
  unsigned __int128 v9; // kr20_16@4
  unsigned __int64 v10; // r13@9
  __int64 v11; // rbp@9
  unsigned __int64 v12; // rbp@9
  unsigned __int64 v13; // rbx@10
  unsigned __int64 v14; // r15@10
  signed __int64 v15; // rcx@10
  signed __int64 v16; // r14@10
  signed __int64 v17; // r11@11
  __int64 v18; // rax@11
  signed __int64 v19; // rdx@11
  signed __int64 v20; // r8@11
  unsigned __int64 v21; // r10@11
  unsigned __int64 v22; // r9@11
  unsigned __int64 v23; // rdx@12
  __int64 v24; // rsi@12
  unsigned __int64 v25; // rcx@14
  unsigned __int64 v26; // rdx@14
  signed __int64 v27; // rax@19
  unsigned __int64 v28; // rsi@20
  unsigned __int64 v29; // rdx@20
  unsigned __int64 v30; // rdi@20
  unsigned __int64 v31; // rdx@26
  __int64 v32; // rsi@26
  unsigned __int64 v33; // rsi@28
  unsigned __int64 v34; // rax@28
  signed __int64 v35; // r11@28
  signed __int64 v36; // rcx@29
  unsigned __int64 v37; // r11@29
  unsigned __int64 v38; // rax@30
  unsigned __int64 v39; // rdx@30
  unsigned __int64 v40; // r8@30
  signed __int64 v41; // ST18_8@32
  unsigned __int64 v42; // ST10_8@32
  unsigned __int64 v43; // ST20_8@32
  char v44; // al@32
  unsigned __int64 v45; // rsi@33
  unsigned __int64 v46; // ST18_8@33
  signed __int64 v47; // ST10_8@33
  __int64 v48; // rdx@33
  unsigned __int64 v49; // r8@33
  bool v50; // zf@33
  signed __int64 v51; // ST18_8@35
  char v52; // al@35
  unsigned __int64 v53; // ST18_8@40
  signed __int64 v54; // ST10_8@40
  unsigned __int64 v55; // [sp+0h] [bp-68h]@1
  __int64 v56; // [sp+8h] [bp-60h]@1
  unsigned __int64 v57; // [sp+10h] [bp-58h]@35
  signed __int64 v58; // [sp+28h] [bp-40h]@2

  v55 = a2;
  v56 = a3;
  if ( a1 <= 1 )
LABEL_45:
    __assert_fail("(1) < (n)", "src/factor.c", 0x5C2u, "factor_using_pollard_rho");
  v3 = a1;
  v58 = a2 + 1;
  while ( 2 )
  {
    v4 = v3;
    v5 = 64;
    v6 = 1LL;
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      v9 = __PAIR__(v4, v7) >> 1;
      v4 = v9 >> 64;
      v7 = v9;
      if ( v4 < v6 || v4 == v6 && v7 <= v8 )
      {
        v6 = (__PAIR__(v6, v8) - __PAIR__(v4, v7)) >> 64;
        v8 -= v7;
      }
      --v5;
    }
    while ( v5 );
    v10 = v8;
    v11 = v3 - v8 <= v8;
    LOBYTE(v11) = v3 - v8 > v8;
    v12 = 2 * v8 - v3 + (v3 & -v11);
    if ( v3 <= v55 )
LABEL_38:
      __assert_fail("a < n", "src/factor.c", 0x5C8u, "factor_using_pollard_rho");
    v13 = v12;
    v14 = v12;
    v15 = 1LL;
    v16 = 1LL;
LABEL_11:
    v17 = v15;
    v18 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v3 >> 1)];
    v19 = 2 * v18 - v3 * v18 * v18;
    v20 = 2 * (2 * v19 - v3 * v19 * v19) - v3 * (2 * v19 - v3 * v19 * v19) * (2 * v19 - v3 * v19 * v19);
    v21 = v3 - v55;
    v22 = v55 - v3;
    while ( 1 )
    {
      v23 = v3 * (unsigned __int128)(v20 * v12 * v12) >> 64;
      v24 = (v12 * (unsigned __int128)v12 >> 64) - v23;
      if ( v12 * (unsigned __int128)v12 >> 64 < v23 )
        v24 += v3;
      v12 = v22 + v24 + (v3 & -(signed __int64)(v24 < v21));
      v25 = (v14 - v12 + (v3 & -(signed __int64)(v14 < v12))) * (unsigned __int128)v10 >> 64;
      v26 = v3 * (unsigned __int128)(v20 * (v14 - v12 + (v3 & -(signed __int64)(v14 < v12))) * v10) >> 64;
      v10 = v25 - v26;
      if ( v25 < v26 )
        v10 += v3;
      if ( (v16 & 0x1F) == 1 )
        break;
LABEL_17:
      if ( !--v16 )
      {
        if ( v17 )
        {
          v27 = v12;
          do
          {
            v28 = (unsigned __int64)v27 * (unsigned __int128)(unsigned __int64)v27 >> 64;
            v29 = v3 * (unsigned __int128)(unsigned __int64)(v20 * v27 * v27) >> 64;
            v30 = v28 - v29;
            if ( v28 < v29 )
              v30 = v28 - v29 + v3;
            ++v16;
            v27 = v22 + v30 + (v3 & -(signed __int64)(v30 < v21));
          }
          while ( v17 != v16 );
          v14 = v12;
          v13 = v22 + v30 + (v3 & -(signed __int64)(v30 < v21));
          v17 *= 2LL;
          v12 = v22 + v30 + (v3 & -(signed __int64)(v30 < v21));
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
      goto LABEL_17;
    }
    do
    {
      v31 = v3 * (unsigned __int128)(v20 * v13 * v13) >> 64;
      v32 = (v13 * (unsigned __int128)v13 >> 64) - v31;
      if ( v13 * (unsigned __int128)v13 >> 64 < v31 )
        v32 += v3;
      v13 = (v3 & -(signed __int64)(v32 < v21)) + v22 + v32;
      v33 = v3;
      v34 = sub_401D20(v14 - v13 + (v3 & -(signed __int64)(v14 < v13)), v3);
    }
    while ( v34 == 1 );
    v36 = v35;
    v37 = v34;
    if ( v3 == v34 )
    {
      ++v55;
      ++v58;
      if ( v3 <= 1 )
        goto LABEL_45;
      continue;
    }
    break;
  }
  v38 = v3 / v34;
  v39 = v3 % v37;
  v40 = v3 / v37;
  v3 /= v37;
  if ( v37 <= 1
    || v37 > 0x17DED78
    && (v41 = v36, v42 = v37,
                   v43 = v38,
                   v44 = sub_403840(v37, v33, v39, v36, v40),
                   v37 = v42,
                   v36 = v41,
                   v40 = v43,
                   !v44) )
  {
    v45 = v58;
    v53 = v40;
    v54 = v36;
    sub_4027D0(v37, v58, v56);
    v49 = v53;
    v15 = v54;
    v50 = v53 == 1;
    if ( v53 > 1 )
      goto LABEL_34;
LABEL_41:
    if ( v50 )
      return;
    v13 = 0LL;
    v14 = 0LL;
    v12 = 0LL;
LABEL_37:
    if ( v55 >= v49 )
      goto LABEL_38;
    goto LABEL_11;
  }
  v45 = v37;
  v46 = v40;
  v47 = v36;
  sub_401D80(v56, v37, 1);
  v49 = v46;
  v15 = v47;
  v50 = v46 == 1;
  if ( v46 <= 1 )
    goto LABEL_41;
LABEL_34:
  if ( v49 > 0x17DED78 )
  {
    v51 = v15;
    v57 = v49;
    v52 = sub_403840(v49, v45, v48, v15, v49);
    v49 = v57;
    v15 = v51;
    if ( !v52 )
    {
      v12 %= v57;
      v14 %= v57;
      v13 %= v57;
      goto LABEL_37;
    }
  }
  sub_401D80(v56, v49, 1);
}

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_402BF0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12@1
  unsigned __int64 v5; // rbp@1
  signed __int64 v6; // rcx@1
  unsigned __int64 v7; // rdx@1
  unsigned __int64 v8; // rax@1
  unsigned __int64 v9; // rsi@2
  unsigned __int8 v10; // cf@7
  unsigned __int64 v11; // rdx@7
  unsigned __int64 v12; // rax@7
  unsigned __int64 v13; // rbx@7
  __int64 v14; // rsi@7
  unsigned __int64 v15; // r15@13
  signed __int64 v16; // r13@13
  __int64 v17; // rax@14
  signed __int64 v18; // rax@14
  __int64 v19; // r14@14
  __int64 v20; // rax@15 OVERLAPPED
  unsigned __int64 v21; // rdx@15
  __int128 v22; // ax@15
  unsigned __int64 v23; // rsi@15
  unsigned __int128 v24; // ax@18
  __int64 v25; // rcx@19
  unsigned __int64 v26; // r8@19
  unsigned __int64 v27; // rdx@25
  __int64 v28; // r15@25
  __int64 v29; // rax@26
  signed __int128 v30; // kr40_16@26
  unsigned __int64 v31; // rax@33
  __int64 v32; // rax@38 OVERLAPPED
  unsigned __int64 v33; // rdx@38
  __int128 v34; // ax@38
  unsigned __int64 v35; // rcx@38
  unsigned __int128 v36; // ax@41
  unsigned __int64 v37; // rdx@42
  signed __int64 v38; // rsi@42
  unsigned __int64 v39; // rax@44
  unsigned __int64 v40; // r8@45
  unsigned __int64 v41; // rsi@47
  __int64 v42; // rax@47
  signed __int64 v43; // rax@47
  signed __int64 v44; // rsi@48
  __int64 v45; // rdx@48
  __int64 v46; // rcx@48
  __int64 v47; // r8@48
  unsigned __int64 v48; // r8@54
  __int64 v49; // rax@54
  signed __int64 v50; // rdx@54
  unsigned __int128 v51; // ax@54
  signed __int64 v52; // rcx@54
  unsigned __int64 v53; // ST38_8@58
  char v54; // al@58
  __int64 v55; // r10@61
  __int64 v56; // r10@62
  __int64 v57; // r10@62
  unsigned __int64 v58; // rax@62
  __int64 v59; // [sp+0h] [bp-A8h]@7
  unsigned __int64 v60; // [sp+0h] [bp-A8h]@47
  __int64 v61; // [sp+8h] [bp-A0h]@7
  unsigned __int64 v62; // [sp+10h] [bp-98h]@13
  unsigned __int64 v63; // [sp+18h] [bp-90h]@1
  signed __int64 v64; // [sp+20h] [bp-88h]@13
  __int64 v65; // [sp+30h] [bp-78h]@1
  unsigned __int64 v66; // [sp+48h] [bp-60h]@7
  unsigned __int64 v67; // [sp+50h] [bp-58h]@11
  unsigned __int64 v68; // [sp+58h] [bp-50h]@11
  __int64 v69; // [sp+60h] [bp-48h]@33
  unsigned __int64 v70; // [sp+68h] [bp-40h]@15

  v4 = a2;
  v5 = a1;
  v65 = a4;
  v63 = a3;
  v6 = a1 < 2 ? 127LL : 63LL;
  v7 = a1 < 2;
  v8 = a1 >= 2;
  do
  {
    v9 = v7;
    v7 *= 2LL;
    v8 = (v9 >> 63) | 2 * v8;
    if ( a1 < v8 || a1 == v8 && v7 >= v4 )
    {
      v8 = (__PAIR__(v8, v7) - __PAIR__(a1, v4)) >> 64;
      v7 -= v4;
    }
    --v6;
  }
  while ( v6 != -1 );
  v59 = v8;
  v61 = v7;
  v10 = __CFADD__(v7, v7);
  v11 = 2 * v7;
  v12 = v8 + v10 + v8;
  v66 = v12;
  v13 = v11;
  v14 = v12;
  if ( v12 > a1 || v12 == a1 && v4 <= v11 )
  {
    v66 = (__PAIR__(v12, v11) - __PAIR__(a1, v4)) >> 64;
    v13 = v11 - v4;
    v14 = (__PAIR__(v12, v11) - __PAIR__(a1, v4)) >> 64;
  }
  v67 = v14;
  v68 = v14;
  if ( v4 == 1 && !a1 )
    return;
  v62 = v13;
  v15 = v13;
  v16 = 1LL;
  v64 = 1LL;
  while ( 2 )
  {
    v17 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v4 >> 1)];
    v18 = 2 * (2 * v17 - v4 * v17 * v17) - v4 * (2 * v17 - v4 * v17 * v17) * (2 * v17 - v4 * v17 * v17);
    v19 = 2 * v18 - v4 * v18 * v18;
    while ( 1 )
    {
      v20 = sub_401F60(&v70, v14, v13, v14, v13, v5, v4, v19);
      v21 = v70;
      v22 = v63 + *(_OWORD *)&v20;
      v66 = *((_QWORD *)&v22 + 1);
      v13 = v22;
      v23 = *((_QWORD *)&v22 + 1);
      if ( v5 < *((_QWORD *)&v22 + 1) || v5 == *((_QWORD *)&v22 + 1) && v4 <= (unsigned __int64)v22 )
      {
        v24 = v22 - __PAIR__(v5, v4);
        v66 = *((_QWORD *)&v24 + 1);
        v13 = v24;
        v23 = *((_QWORD *)&v24 + 1);
      }
      v25 = (__PAIR__(v67, v62) - __PAIR__(v23, v13)) >> 64;
      v26 = v62 - v13;
      if ( v25 < 0 )
      {
        v25 = (__PAIR__(v25, v4) + __PAIR__(v5, v26)) >> 64;
        v26 += v4;
      }
      v61 = sub_401F60(&v70, v59, v61, v25, v26, v5, v4, v19);
      v59 = v70;
      if ( (v16 & 0x1F) == 1 )
        break;
      v14 = v66;
LABEL_23:
      if ( !--v16 )
      {
        v67 = v14;
        v15 = v13;
        if ( v64 )
        {
          v27 = v13;
          v28 = 0LL;
          do
          {
            v29 = sub_401F60(&v70, v14, v27, v14, v27, v5, v4, v19);
            v30 = __PAIR__(v70, v63) + (unsigned __int64)v29;
            v66 = (__PAIR__(v70, v63) + (unsigned __int64)v29) >> 64;
            v27 = v63 + v29;
            v14 = *((_QWORD *)&v30 + 1);
            if ( v5 < *((_QWORD *)&v30 + 1) || v5 == *((_QWORD *)&v30 + 1) && v4 <= (unsigned __int64)v30 )
            {
              v66 = (v30 - __PAIR__(v5, v4)) >> 64;
              v27 = v30 - v4;
              v14 = (v30 - __PAIR__(v5, v4)) >> 64;
            }
            ++v28;
          }
          while ( v64 != v28 );
          v15 = v27;
        }
        v16 = v64;
        v62 = v13;
        v13 = v15;
        v68 = v14;
        v64 *= 2LL;
      }
    }
    v31 = sub_402490((unsigned __int64 *)&v69, v70, v61, v5, v4);
    if ( !v69 && v31 == 1 )
    {
      v14 = v66;
      v15 = v13;
      v68 = v66;
      goto LABEL_23;
    }
    do
    {
      v32 = sub_401F60(&v70, v68, v15, v68, v15, v5, v4, v19);
      v33 = v70;
      v34 = v63 + *(_OWORD *)&v32;
      v68 = *((_QWORD *)&v34 + 1);
      v15 = v34;
      v35 = *((_QWORD *)&v34 + 1);
      if ( v5 < *((_QWORD *)&v34 + 1) || v5 == *((_QWORD *)&v34 + 1) && v4 <= (unsigned __int64)v34 )
      {
        v36 = v34 - __PAIR__(v5, v4);
        v68 = *((_QWORD *)&v36 + 1);
        v15 = v36;
        v35 = *((_QWORD *)&v36 + 1);
      }
      v38 = (__PAIR__(v67, v62) - __PAIR__(v35, v15)) >> 64;
      v37 = v62 - v15;
      if ( v38 < 0 )
      {
        v38 = (__PAIR__(v38, v4) + __PAIR__(v5, v37)) >> 64;
        v37 += v4;
      }
      v39 = sub_402490((unsigned __int64 *)&v69, v38, v37, v5, v4);
      if ( v69 )
      {
        v40 = v39;
        if ( v4 == v39 && v5 == v69 )
        {
          sub_402BF0(v5, v4, v63 + 1, v65, v39);
          return;
        }
        v41 = v39;
        v60 = v39;
        v42 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v39 >> 1)];
        v43 = 2 * (2 * v42 - v40 * v42 * v42) - v40 * (2 * v42 - v40 * v42 * v42) * (2 * v42 - v40 * v42 * v42);
        v4 *= 2 * v43 - v40 * v43 * v43;
        if ( (unsigned __int8)sub_404050(v69, v41) )
        {
          v44 = v69;
          sub_402440(v65, v69, v60);
        }
        else
        {
          v44 = v60;
          sub_402BF0(v69, v60, v63 + 1, v65, v60);
        }
        goto LABEL_49;
      }
    }
    while ( v39 == 1 );
    v48 = v39;
    v49 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v39 >> 1)];
    v50 = 2 * v49 - v48 * v49 * v49;
    *(_QWORD *)&v51 = 2 * v50;
    *((_QWORD *)&v51 + 1) *= v48 * *((_QWORD *)&v51 + 1);
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
      && (v48 <= 0x17DED78 || (v53 = v48, v54 = sub_403840(v48, v38, *((_QWORD *)&v51 + 1), v52, v48), v48 = v53, v54)) )
    {
      v44 = v48;
      sub_401D80(v65, v48, 1);
    }
    else
    {
      v44 = v63 + 1;
      sub_4027D0(v48, v63 + 1, v65);
    }
    if ( !v5 )
    {
LABEL_49:
      if ( v4 > 1 && (v4 <= 0x17DED78 || (unsigned __int8)sub_403840(v4, v44, v45, v46, v47)) )
        sub_401D80(v65, v4, 1);
      else
        sub_4027D0(v4, v63, v65);
      return;
    }
    if ( !(unsigned __int8)sub_404050(v5, v4) )
    {
      v13 = sub_402590(v13, v5, &v66, v66, v4, v55);
      v62 = sub_402590(v62, v5, &v67, v67, v4, v56);
      v58 = sub_402590(v15, v5, &v68, v68, v4, v57);
      v14 = v66;
      v15 = v58;
      continue;
    }
    break;
  }
  sub_402440(v65, v5, v4);
}

void __fastcall sub_403210(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  signed __int64 v5; // r13@7
  unsigned __int64 v6; // r12@7
  unsigned int v7; // ebp@7
  __int64 v8; // rbx@7
  unsigned __int64 v9; // r15@7
  __int64 v10; // r8@7
  signed __int64 v11; // rbx@10
  signed __int64 v12; // r13@10
  __int64 v13; // r15@10
  unsigned __int64 v14; // rsi@14
  unsigned __int128 v15; // ax@14
  unsigned __int64 v16; // rax@15
  unsigned __int64 i; // rbp@15
  unsigned __int128 v18; // ax@16
  unsigned __int64 v19; // rdx@21
  unsigned __int64 v20; // rdx@22
  unsigned __int64 v21; // rdx@23
  unsigned __int64 v22; // rdx@24
  signed __int64 v23; // rdx@30
  unsigned __int64 v24; // rdx@31
  signed __int64 v25; // rbx@31
  __int64 v26; // ST18_8@32
  unsigned __int64 v27; // r15@34
  unsigned __int64 v28; // r15@37
  unsigned __int64 v29; // r15@40
  int v30; // er8@43
  int v31; // edx@44
  unsigned __int64 v32; // rsi@44
  __int64 v33; // rdi@45
  int v34; // ST18_4@46
  int v35; // er8@52
  int v36; // edx@53
  unsigned __int64 v37; // rsi@53
  __int64 v38; // rdi@54
  int v39; // ST18_4@55
  int v40; // er8@57
  int v41; // edx@58
  unsigned __int64 v42; // rsi@58
  __int64 v43; // rdi@59
  int v44; // ST18_4@60
  int v45; // er8@62
  int v46; // edx@63
  unsigned __int64 v47; // rsi@63
  __int64 v48; // rdi@64
  int v49; // ST18_4@65
  unsigned __int64 v50; // [sp+8h] [bp-50h]@1
  __int64 v51; // [sp+10h] [bp-48h]@1

  v4 = a2;
  *(_BYTE *)(a3 + 250) = 0;
  v50 = a1;
  v51 = a3;
  *(_QWORD *)(a3 + 8) = 0LL;
  if ( a1 || a2 > 1 )
  {
    if ( !(a2 & 1) )
    {
      if ( !a2 )
      {
        _BitScanForward64((unsigned __int64 *)&a4, a1);
        v4 = a1 >> a4;
        sub_401D80(a3, 2uLL, a4 + 64);
        v50 = 0LL;
LABEL_7:
        v5 = 26LL;
        v6 = 3LL;
        v7 = 0;
        v8 = 0LL;
        v9 = 6148914691236517205LL;
        v10 = -6148914691236517205LL;
        while ( 1 )
        {
          v24 = v10 * v4;
          v25 = 16 * v8 + 4244128;
          if ( v10 * v4 > v9 )
          {
            v19 = v4 * *(_QWORD *)(v25 + 16);
            if ( v19 > *(_QWORD *)(v25 + 24) )
              goto LABEL_22;
          }
          else
          {
            do
            {
              v4 = v24;
              v26 = v10;
              sub_401D80(v51, v6, 1);
              v10 = v26;
              v24 = v26 * v4;
            }
            while ( v26 * v4 <= v9 );
            v19 = v4 * *(_QWORD *)(v25 + 16);
            if ( v19 > *(_QWORD *)(v25 + 24) )
            {
LABEL_22:
              v20 = v4 * *(_QWORD *)(v25 + 32);
              if ( v20 > *(_QWORD *)(v25 + 40) )
                goto LABEL_23;
              goto LABEL_37;
            }
          }
          v27 = v6 + (unsigned __int8)byte_40EFA0[(unsigned __int64)(v7 + 1)];
          do
          {
            v4 = v19;
            sub_401D80(v51, v27, 1);
            v19 = v4 * *(_QWORD *)(v25 + 16);
          }
          while ( v19 <= *(_QWORD *)(v25 + 24) );
          v20 = v4 * *(_QWORD *)(v25 + 32);
          if ( v20 > *(_QWORD *)(v25 + 40) )
          {
LABEL_23:
            v21 = v4 * *(_QWORD *)(v25 + 48);
            if ( *(_QWORD *)(v25 + 56) >= v21 )
              goto LABEL_40;
            goto LABEL_24;
          }
LABEL_37:
          v28 = v6
              + (unsigned __int8)byte_40EFA0[(unsigned __int64)(v7 + 2)]
              + (unsigned __int64)(unsigned __int8)byte_40EFA0[(unsigned __int64)(v7 + 1)];
          do
          {
            v4 = v20;
            sub_401D80(v51, v28, 1);
            v20 = v4 * *(_QWORD *)(v25 + 32);
          }
          while ( v20 <= *(_QWORD *)(v25 + 40) );
          v21 = v4 * *(_QWORD *)(v25 + 48);
          if ( *(_QWORD *)(v25 + 56) >= v21 )
          {
LABEL_40:
            v29 = (unsigned __int8)byte_40EFA0[(unsigned __int64)(v7 + 2)]
                + v6
                + (unsigned __int8)byte_40EFA0[(unsigned __int64)(v7 + 3)]
                + (unsigned __int64)(unsigned __int8)byte_40EFA0[(unsigned __int64)(v7 + 1)];
            do
            {
              v4 = v21;
              sub_401D80(v51, v29, 1);
              v21 = v4 * *(_QWORD *)(v25 + 48);
            }
            while ( v21 <= *(_QWORD *)(v25 + 56) );
            v22 = v4 * *(_QWORD *)(v25 + 64);
            if ( *(_QWORD *)(v25 + 72) < v22 )
              goto LABEL_25;
            goto LABEL_43;
          }
LABEL_24:
          v22 = v4 * *(_QWORD *)(v25 + 64);
          if ( *(_QWORD *)(v25 + 72) < v22 )
            goto LABEL_25;
LABEL_43:
          v4 = v22;
          v30 = v7 + 5;
          while ( 1 )
          {
            v31 = v7 + 1;
            v32 = v6;
            do
            {
              v33 = (unsigned int)v31++;
              v32 += (unsigned __int8)byte_40EFA0[v33];
            }
            while ( v30 != v31 );
            v34 = v30;
            sub_401D80(v51, v32, 1);
            v30 = v34;
            if ( v4 * *(_QWORD *)(v25 + 64) > *(_QWORD *)(v25 + 72) )
              break;
            v4 *= *(_QWORD *)(v25 + 64);
          }
LABEL_25:
          if ( v4 * *(_QWORD *)(v25 + 80) <= *(_QWORD *)(v25 + 88) )
          {
            v4 *= *(_QWORD *)(v25 + 80);
            v45 = v7 + 6;
            while ( 1 )
            {
              v46 = v7 + 1;
              v47 = v6;
              do
              {
                v48 = (unsigned int)v46++;
                v47 += (unsigned __int8)byte_40EFA0[v48];
              }
              while ( v45 != v46 );
              v49 = v45;
              sub_401D80(v51, v47, 1);
              v45 = v49;
              if ( v4 * *(_QWORD *)(v25 + 80) > *(_QWORD *)(v25 + 88) )
                break;
              v4 *= *(_QWORD *)(v25 + 80);
            }
          }
          if ( *(_QWORD *)(v25 + 104) >= v4 * *(_QWORD *)(v25 + 96) )
          {
            v4 *= *(_QWORD *)(v25 + 96);
            v40 = v7 + 7;
            while ( 1 )
            {
              v41 = v7 + 1;
              v42 = v6;
              do
              {
                v43 = (unsigned int)v41++;
                v42 += (unsigned __int8)byte_40EFA0[v43];
              }
              while ( v40 != v41 );
              v44 = v40;
              sub_401D80(v51, v42, 1);
              v40 = v44;
              if ( v4 * *(_QWORD *)(v25 + 96) > *(_QWORD *)(v25 + 104) )
                break;
              v4 *= *(_QWORD *)(v25 + 96);
            }
          }
          if ( v4 * *(_QWORD *)(v25 + 112) <= *(_QWORD *)(v25 + 120) )
          {
            v4 *= *(_QWORD *)(v25 + 112);
            v35 = v7 + 8;
            while ( 1 )
            {
              v36 = v7 + 1;
              v37 = v6;
              do
              {
                v38 = (unsigned int)v36++;
                v37 += (unsigned __int8)byte_40EFA0[v38];
              }
              while ( v35 != v36 );
              v39 = v35;
              sub_401D80(v51, v37, 1);
              v35 = v39;
              if ( v4 * *(_QWORD *)(v25 + 112) > *(_QWORD *)(v25 + 120) )
                break;
              v4 *= *(_QWORD *)(v25 + 112);
            }
          }
          v6 += v5;
          if ( v4 < v6 * v6 )
            goto LABEL_48;
          v7 += 8;
          if ( v7 > 0x29B )
            goto LABEL_48;
LABEL_30:
          v8 = v7;
          v5 = (unsigned __int8)byte_40ECE0[(unsigned __int64)v7];
          v23 = 2LL * v7;
          v10 = qword_40C2A0[v23];
          v9 = qword_40C2A8[v23];
        }
      }
      _BitScanForward64((unsigned __int64 *)&a3, a2);
      v50 = a1 >> a3;
      v4 = (a1 << (64 - (unsigned __int8)a3)) | (a2 >> a3);
      sub_401D80(v51, 2uLL, a3);
    }
    if ( v50 )
    {
      v11 = 1LL;
      v12 = 2LL;
      v13 = -6148914691236517205LL;
      v6 = 3LL;
      while ( 1 )
      {
        v14 = v4 * v13;
        v15 = v6 * (unsigned __int128)(v4 * v13);
        if ( v50 >= *((_QWORD *)&v15 + 1) )
        {
          v16 = v13 * (v50 - *((_QWORD *)&v15 + 1));
          for ( i = qword_40C298[2 * v11]; v16 <= i; v16 = v13 * (v50 - *((_QWORD *)&v18 + 1)) )
          {
            v4 = v14;
            v50 = v16;
            sub_401D80(v51, v6, 1);
            v14 *= v13;
            v18 = v6 * (unsigned __int128)v14;
            if ( *((_QWORD *)&v18 + 1) > v50 )
              break;
          }
        }
        v7 = v11;
        v6 += v12;
        ++v11;
        if ( !v50 || v7 > 0x29B )
          break;
        v12 = (unsigned __int8)byte_40EFA0[v11];
        v13 = qword_40C290[2 * v11];
      }
      if ( v7 <= 0x29B )
        goto LABEL_30;
LABEL_48:
      if ( v50 )
      {
        if ( !(unsigned __int8)sub_404050(v50, v4) )
        {
          sub_402BF0(v50, v4, 1uLL, v51);
          return;
        }
      }
      else
      {
        if ( v4 <= 1 )
          return;
        if ( !(unsigned __int8)sub_404050(0LL, v4) )
        {
          sub_4027D0(v4, 1uLL, v51);
          return;
        }
      }
      sub_402440(v51, v50, v4);
      return;
    }
    goto LABEL_7;
  }
}

__int64 __fastcall sub_403840(unsigned __int64 a1)
{
  unsigned __int64 v1; // r14@1
  unsigned __int64 v2; // rbx@1
  unsigned int v3; // eax@2
  unsigned __int64 v4; // rcx@5
  signed int v5; // esi@5
  unsigned __int64 v6; // r15@5
  __int64 v7; // rax@5
  signed __int64 v8; // rax@5
  unsigned __int64 v9; // rdx@5
  __int64 v10; // r13@5
  unsigned __int64 v11; // rax@5
  unsigned __int128 v12; // kr30_16@6
  unsigned __int64 v13; // rbp@11
  __int64 v14; // rcx@11
  char *v15; // r12@12
  unsigned __int64 v16; // r14@12
  char *v17; // r11@14
  unsigned __int64 v18; // rax@15
  __int64 v19; // r11@15
  unsigned __int128 v20; // ax@17
  char *v21; // rax@21
  unsigned __int64 v23; // rsi@26
  signed int v24; // eax@26
  unsigned __int64 v25; // rcx@26
  unsigned __int64 v26; // rdi@27
  unsigned __int64 v27; // [sp+8h] [bp-160h]@1
  char *v28; // [sp+10h] [bp-158h]@12
  unsigned int v29; // [sp+1Ch] [bp-14Ch]@4
  unsigned __int64 v30; // [sp+20h] [bp-148h]@12
  int v31; // [sp+28h] [bp-140h]@12
  unsigned __int8 v32; // [sp+2Fh] [bp-139h]@11
  char v33; // [sp+30h] [bp-138h]@12
  char v34[234]; // [sp+40h] [bp-128h]@12
  unsigned __int8 v35; // [sp+12Ah] [bp-3Eh]@12

  v1 = a1 - 1;
  v2 = a1;
  v27 = a1 - 1;
  if ( ((_BYTE)a1 - 1) & 1 )
  {
    v1 = a1 - 1;
    v29 = 0;
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
    v29 = v3;
  }
  v4 = a1;
  v5 = 64;
  v6 = 0LL;
  v7 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)a1 >> 1)];
  v8 = 2 * (2 * v7 - a1 * v7 * v7) - a1 * (2 * v7 - a1 * v7 * v7) * (2 * v7 - a1 * v7 * v7);
  v9 = 0LL;
  v10 = 2 * v8 - a1 * v8 * v8;
  v11 = 1LL;
  do
  {
    v12 = __PAIR__(v4, v9) >> 1;
    v4 = v12 >> 64;
    v9 = v12;
    if ( v4 < v11 || v4 == v11 && v9 <= v6 )
    {
      v11 = (__PAIR__(v11, v6) - __PAIR__(v4, v9)) >> 64;
      v6 -= v9;
    }
    --v5;
  }
  while ( v5 );
  v13 = (a1 & -(signed __int64)(a1 - v6 > v6)) + 2 * v6 - a1;
  v32 = sub_401ED0(a1, v10, v13, v1, v29, v6);
  if ( v32 )
  {
    v15 = byte_40EFA0;
    sub_403210(0LL, v27, (__int64)&v33, v14);
    v30 = v1;
    v31 = v35;
    v28 = &v34[8 * (v35 - 1)];
    v16 = 2LL;
    while ( v31 )
    {
      v17 = v34;
      while ( 1 )
      {
        v18 = sub_401E60(v13, v27 / *(_QWORD *)v17, v2, v10, v6);
        if ( v28 == (char *)v19 )
          break;
        v17 = (char *)(v19 + 8);
        if ( v18 == v6 )
          goto LABEL_17;
      }
      if ( v18 != v6 )
        return v32;
LABEL_17:
      v16 += (unsigned __int8)*v15;
      v20 = v16 * (unsigned __int128)v6;
      v13 = v16 * v6;
      if ( is_mul_ok(v16, v6) )
      {
        v13 = (unsigned __int64)v20 % v2;
      }
      else
      {
        if ( v2 <= *((_QWORD *)&v20 + 1) )
          __assert_fail("(s1) < (n)", "src/factor.c", 0x4F4u, "prime_p");
        v23 = v2;
        v24 = 64;
        v25 = 0LL;
        do
        {
          v26 = v23 << 63;
          v23 >>= 1;
          v25 = v26 | (v25 >> 1);
          if ( v23 < *((_QWORD *)&v20 + 1) || v23 == *((_QWORD *)&v20 + 1) && v25 <= v13 )
          {
            *((_QWORD *)&v20 + 1) = (__PAIR__(*((unsigned __int64 *)&v20 + 1), v13) - __PAIR__(v23, v25)) >> 64;
            v13 -= v25;
          }
          --v24;
        }
        while ( v24 );
      }
      if ( !(unsigned __int8)sub_401ED0(v2, v10, v13, v30, v29, v6) )
        goto LABEL_33;
      if ( (char *)&unk_40F23C == ++v15 )
      {
        v21 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v21);
        abort();
      }
    }
  }
  else
  {
LABEL_33:
    v32 = 0;
  }
  return v32;
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15@7
  unsigned __int64 v5; // rax@7
  __int64 v6; // rax@9
  signed __int64 v7; // rax@9
  __int64 v8; // r13@9
  signed __int64 v9; // rcx@9
  unsigned __int64 v10; // rdx@9
  unsigned __int64 v11; // rax@9
  unsigned __int64 v12; // rsi@10
  unsigned __int8 v13; // cf@15
  unsigned __int64 v14; // rdx@15
  unsigned __int64 v15; // rax@15
  __int64 v16; // rcx@17
  char *v17; // r12@18
  unsigned __int64 v18; // rbp@18
  signed __int64 i; // r12@21
  __int64 v20; // rax@22
  signed __int64 v21; // rax@22
  signed __int64 v22; // rcx@22
  unsigned __int64 v23; // rdx@27
  unsigned __int64 v24; // rax@32
  unsigned __int64 v25; // rdx@32
  unsigned __int64 v26; // rcx@34
  unsigned __int64 v27; // rsi@36
  char *v28; // rax@43
  __int64 v29; // rax@48
  signed __int64 v30; // rax@48
  bool v31; // al@49
  __int64 result; // rax@4
  unsigned __int128 v33; // [sp+10h] [bp-1D0h]@7
  char *v34; // [sp+28h] [bp-1B8h]@21
  unsigned int v35; // [sp+38h] [bp-1A8h]@8
  unsigned __int8 v36; // [sp+3Fh] [bp-1A1h]@17
  unsigned __int64 v37; // [sp+48h] [bp-198h]@8
  __int64 v38; // [sp+50h] [bp-190h]@8
  unsigned __int128 v39; // [sp+58h] [bp-188h]@15
  unsigned __int64 v40; // [sp+68h] [bp-178h]@15
  unsigned __int64 v41; // [sp+70h] [bp-170h]@15
  unsigned __int64 v42; // [sp+78h] [bp-168h]@17
  unsigned __int64 v43; // [sp+80h] [bp-160h]@17
  unsigned __int128 v44; // [sp+88h] [bp-158h]@23
  __int64 v45; // [sp+98h] [bp-148h]@24
  __int64 v46; // [sp+A0h] [bp-140h]@24
  __int64 v47; // [sp+A8h] [bp-138h]@18
  __int64 v48[30]; // [sp+B0h] [bp-130h]@19
  unsigned __int8 v49; // [sp+1A2h] [bp-3Eh]@20

  if ( a1 )
  {
    v4 = a2;
    v5 = a1 - (a2 == 0);
    *((_QWORD *)&v33 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v33 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&a4, v5);
      v38 = 0LL;
      v37 = v5 >> a4;
      v35 = a4 + 64;
    }
    else
    {
      _BitScanForward64(&v5, v33);
      v35 = v5;
      v37 = ((unsigned __int64)v33 >> v5) | (*((_QWORD *)&v33 + 1) << (64 - (unsigned __int8)v5));
      v38 = *((_QWORD *)&v33 + 1) >> v5;
    }
    v6 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)a2 >> 1)];
    v7 = 2 * (2 * v6 - a2 * v6 * v6) - a2 * (2 * v6 - a2 * v6 * v6) * (2 * v6 - a2 * v6 * v6);
    v8 = 2 * v7 - a2 * v7 * v7;
    v9 = a1 < 2 ? 127LL : 63LL;
    v10 = a1 < 2;
    v11 = a1 >= 2;
    do
    {
      v12 = v10;
      v10 *= 2LL;
      v11 = (v12 >> 63) | 2 * v11;
      if ( a1 < v11 || a1 == v11 && v4 <= v10 )
      {
        v11 = (__PAIR__(v11, v10) - __PAIR__(a1, v4)) >> 64;
        v10 -= v4;
      }
      --v9;
    }
    while ( v9 != -1 );
    v41 = v11;
    v40 = v10;
    v13 = __CFADD__(v10, v10);
    v14 = 2 * v10;
    v15 = v11 + v13 + v11;
    *((_QWORD *)&v39 + 1) = v15;
    *(_QWORD *)&v39 = v14;
    if ( a1 < v15 || a1 == v15 && v4 <= v14 )
      v39 = __PAIR__(v15, v14) - __PAIR__(a1, v4);
    v42 = v4;
    v43 = a1;
    v36 = sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40);
    if ( !v36 )
      return v36;
    v17 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v33 + 1), v33, (__int64)&v47, v16);
    v18 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (*((_QWORD *)&v44 + 1) = 0LL,
            v29 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v47 >> 1)],
            v30 = 2 * (2 * v29 - v47 * v29 * v29) - v47 * (2 * v29 - v47 * v29 * v29) * (2 * v29 - v47 * v29 * v29),
            *(_QWORD *)&v44 = (2 * v30 - v47 * v30 * v30) * v33,
            v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40),
            v45 == v40) )
      {
        v31 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v36;
      }
      v34 = v17;
      for ( i = 1LL; ; ++i )
      {
        v23 = v48[i];
        if ( v23 == 2 )
        {
          v44 = v33 >> 1;
        }
        else
        {
          v20 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v23 >> 1)];
          v21 = 2 * (2 * v20 - v23 * v20 * v20) - v23 * (2 * v20 - v23 * v20 * v20) * (2 * v20 - v23 * v20 * v20);
          v22 = 2 * v21 - v23 * v21 * v21;
          if ( *((_QWORD *)&v33 + 1) < v23 )
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = 0LL;
          }
          else
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v33 + 1)
                                   - (v23 * (unsigned __int128)(unsigned __int64)(v22 * v33) >> 64))
                                  * v22;
          }
        }
        v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v36;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v17 = v34;
          goto LABEL_32;
        }
      }
      v17 = v34;
      v31 = v46 != v41;
LABEL_56:
      if ( v31 )
        return v36;
LABEL_32:
      v18 += (unsigned __int8)*v17;
      v24 = 0LL;
      v25 = 0LL;
      if ( a1 <= v18 )
        v25 = v18;
      v26 = (-(signed __int64)(v18 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v18 )
        v24 = v18;
      do
      {
        v27 = v25;
        v25 *= 2LL;
        v24 = (v27 >> 63) | 2 * v24;
        if ( a1 < v24 || a1 == v24 && v4 <= v25 )
        {
          v24 = (__PAIR__(v24, v25) - __PAIR__(a1, v4)) >> 64;
          v25 -= v4;
        }
        --v26;
      }
      while ( v26 != -1LL );
      *(_QWORD *)&v39 = v25;
      *((_QWORD *)&v39 + 1) = v24;
      if ( !(unsigned __int8)sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40) )
        return 0;
      if ( (char *)&unk_40F23C == ++v17 )
      {
        v28 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v28);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
  {
    result = 0LL;
  }
  else if ( a2 <= 0x17DED78 )
  {
    result = 1LL;
  }
  else
  {
    result = sub_403840(a2);
  }
  return result;
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15@7
  unsigned __int64 v5; // rax@7
  __int64 v6; // rax@9
  signed __int64 v7; // rax@9
  __int64 v8; // r13@9
  signed __int64 v9; // rcx@9
  unsigned __int64 v10; // rdx@9
  unsigned __int64 v11; // rax@9
  unsigned __int64 v12; // rsi@10
  unsigned __int8 v13; // cf@15
  unsigned __int64 v14; // rdx@15
  unsigned __int64 v15; // rax@15
  __int64 v16; // rcx@17
  char *v17; // r12@18
  unsigned __int64 v18; // rbp@18
  signed __int64 i; // r12@21
  __int64 v20; // rax@22
  signed __int64 v21; // rax@22
  signed __int64 v22; // rcx@22
  unsigned __int64 v23; // rdx@27
  unsigned __int64 v24; // rax@32
  unsigned __int64 v25; // rdx@32
  unsigned __int64 v26; // rcx@34
  unsigned __int64 v27; // rsi@36
  char *v28; // rax@43
  __int64 v29; // rax@48
  signed __int64 v30; // rax@48
  bool v31; // al@49
  __int64 result; // rax@4
  unsigned __int128 v33; // [sp+10h] [bp-1D0h]@7
  char *v34; // [sp+28h] [bp-1B8h]@21
  unsigned int v35; // [sp+38h] [bp-1A8h]@8
  unsigned __int8 v36; // [sp+3Fh] [bp-1A1h]@17
  unsigned __int64 v37; // [sp+48h] [bp-198h]@8
  __int64 v38; // [sp+50h] [bp-190h]@8
  unsigned __int128 v39; // [sp+58h] [bp-188h]@15
  unsigned __int64 v40; // [sp+68h] [bp-178h]@15
  unsigned __int64 v41; // [sp+70h] [bp-170h]@15
  unsigned __int64 v42; // [sp+78h] [bp-168h]@17
  unsigned __int64 v43; // [sp+80h] [bp-160h]@17
  unsigned __int128 v44; // [sp+88h] [bp-158h]@23
  __int64 v45; // [sp+98h] [bp-148h]@24
  __int64 v46; // [sp+A0h] [bp-140h]@24
  __int64 v47; // [sp+A8h] [bp-138h]@18
  __int64 v48[30]; // [sp+B0h] [bp-130h]@19
  unsigned __int8 v49; // [sp+1A2h] [bp-3Eh]@20

  if ( a1 )
  {
    v4 = a2;
    v5 = a1 - (a2 == 0);
    *((_QWORD *)&v33 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v33 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&a4, v5);
      v38 = 0LL;
      v37 = v5 >> a4;
      v35 = a4 + 64;
    }
    else
    {
      _BitScanForward64(&v5, v33);
      v35 = v5;
      v37 = ((unsigned __int64)v33 >> v5) | (*((_QWORD *)&v33 + 1) << (64 - (unsigned __int8)v5));
      v38 = *((_QWORD *)&v33 + 1) >> v5;
    }
    v6 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)a2 >> 1)];
    v7 = 2 * (2 * v6 - a2 * v6 * v6) - a2 * (2 * v6 - a2 * v6 * v6) * (2 * v6 - a2 * v6 * v6);
    v8 = 2 * v7 - a2 * v7 * v7;
    v9 = a1 < 2 ? 127LL : 63LL;
    v10 = a1 < 2;
    v11 = a1 >= 2;
    do
    {
      v12 = v10;
      v10 *= 2LL;
      v11 = (v12 >> 63) | 2 * v11;
      if ( a1 < v11 || a1 == v11 && v4 <= v10 )
      {
        v11 = (__PAIR__(v11, v10) - __PAIR__(a1, v4)) >> 64;
        v10 -= v4;
      }
      --v9;
    }
    while ( v9 != -1 );
    v41 = v11;
    v40 = v10;
    v13 = __CFADD__(v10, v10);
    v14 = 2 * v10;
    v15 = v11 + v13 + v11;
    *((_QWORD *)&v39 + 1) = v15;
    *(_QWORD *)&v39 = v14;
    if ( a1 < v15 || a1 == v15 && v4 <= v14 )
      v39 = __PAIR__(v15, v14) - __PAIR__(a1, v4);
    v42 = v4;
    v43 = a1;
    v36 = sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40);
    if ( !v36 )
      return v36;
    v17 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v33 + 1), v33, (__int64)&v47, v16);
    v18 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (*((_QWORD *)&v44 + 1) = 0LL,
            v29 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v47 >> 1)],
            v30 = 2 * (2 * v29 - v47 * v29 * v29) - v47 * (2 * v29 - v47 * v29 * v29) * (2 * v29 - v47 * v29 * v29),
            *(_QWORD *)&v44 = (2 * v30 - v47 * v30 * v30) * v33,
            v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40),
            v45 == v40) )
      {
        v31 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v36;
      }
      v34 = v17;
      for ( i = 1LL; ; ++i )
      {
        v23 = v48[i];
        if ( v23 == 2 )
        {
          v44 = v33 >> 1;
        }
        else
        {
          v20 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v23 >> 1)];
          v21 = 2 * (2 * v20 - v23 * v20 * v20) - v23 * (2 * v20 - v23 * v20 * v20) * (2 * v20 - v23 * v20 * v20);
          v22 = 2 * v21 - v23 * v21 * v21;
          if ( *((_QWORD *)&v33 + 1) < v23 )
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = 0LL;
          }
          else
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v33 + 1)
                                   - (v23 * (unsigned __int128)(unsigned __int64)(v22 * v33) >> 64))
                                  * v22;
          }
        }
        v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v36;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v17 = v34;
          goto LABEL_32;
        }
      }
      v17 = v34;
      v31 = v46 != v41;
LABEL_56:
      if ( v31 )
        return v36;
LABEL_32:
      v18 += (unsigned __int8)*v17;
      v24 = 0LL;
      v25 = 0LL;
      if ( a1 <= v18 )
        v25 = v18;
      v26 = (-(signed __int64)(v18 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v18 )
        v24 = v18;
      do
      {
        v27 = v25;
        v25 *= 2LL;
        v24 = (v27 >> 63) | 2 * v24;
        if ( a1 < v24 || a1 == v24 && v4 <= v25 )
        {
          v24 = (__PAIR__(v24, v25) - __PAIR__(a1, v4)) >> 64;
          v25 -= v4;
        }
        --v26;
      }
      while ( v26 != -1LL );
      *(_QWORD *)&v39 = v25;
      *((_QWORD *)&v39 + 1) = v24;
      if ( !(unsigned __int8)sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40) )
        return 0;
      if ( (char *)&unk_40F23C == ++v17 )
      {
        v28 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v28);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
  {
    result = 0LL;
  }
  else if ( a2 <= 0x17DED78 )
  {
    result = 1LL;
  }
  else
  {
    result = sub_403840(a2);
  }
  return result;
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15@7
  unsigned __int64 v5; // rax@7
  __int64 v6; // rax@9
  signed __int64 v7; // rax@9
  __int64 v8; // r13@9
  signed __int64 v9; // rcx@9
  unsigned __int64 v10; // rdx@9
  unsigned __int64 v11; // rax@9
  unsigned __int64 v12; // rsi@10
  unsigned __int8 v13; // cf@15
  unsigned __int64 v14; // rdx@15
  unsigned __int64 v15; // rax@15
  __int64 v16; // rcx@17
  char *v17; // r12@18
  unsigned __int64 v18; // rbp@18
  signed __int64 i; // r12@21
  __int64 v20; // rax@22
  signed __int64 v21; // rax@22
  signed __int64 v22; // rcx@22
  unsigned __int64 v23; // rdx@27
  unsigned __int64 v24; // rax@32
  unsigned __int64 v25; // rdx@32
  unsigned __int64 v26; // rcx@34
  unsigned __int64 v27; // rsi@36
  char *v28; // rax@43
  __int64 v29; // rax@48
  signed __int64 v30; // rax@48
  bool v31; // al@49
  __int64 result; // rax@4
  unsigned __int128 v33; // [sp+10h] [bp-1D0h]@7
  char *v34; // [sp+28h] [bp-1B8h]@21
  unsigned int v35; // [sp+38h] [bp-1A8h]@8
  unsigned __int8 v36; // [sp+3Fh] [bp-1A1h]@17
  unsigned __int64 v37; // [sp+48h] [bp-198h]@8
  __int64 v38; // [sp+50h] [bp-190h]@8
  unsigned __int128 v39; // [sp+58h] [bp-188h]@15
  unsigned __int64 v40; // [sp+68h] [bp-178h]@15
  unsigned __int64 v41; // [sp+70h] [bp-170h]@15
  unsigned __int64 v42; // [sp+78h] [bp-168h]@17
  unsigned __int64 v43; // [sp+80h] [bp-160h]@17
  unsigned __int128 v44; // [sp+88h] [bp-158h]@23
  __int64 v45; // [sp+98h] [bp-148h]@24
  __int64 v46; // [sp+A0h] [bp-140h]@24
  __int64 v47; // [sp+A8h] [bp-138h]@18
  __int64 v48[30]; // [sp+B0h] [bp-130h]@19
  unsigned __int8 v49; // [sp+1A2h] [bp-3Eh]@20

  if ( a1 )
  {
    v4 = a2;
    v5 = a1 - (a2 == 0);
    *((_QWORD *)&v33 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v33 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&a4, v5);
      v38 = 0LL;
      v37 = v5 >> a4;
      v35 = a4 + 64;
    }
    else
    {
      _BitScanForward64(&v5, v33);
      v35 = v5;
      v37 = ((unsigned __int64)v33 >> v5) | (*((_QWORD *)&v33 + 1) << (64 - (unsigned __int8)v5));
      v38 = *((_QWORD *)&v33 + 1) >> v5;
    }
    v6 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)a2 >> 1)];
    v7 = 2 * (2 * v6 - a2 * v6 * v6) - a2 * (2 * v6 - a2 * v6 * v6) * (2 * v6 - a2 * v6 * v6);
    v8 = 2 * v7 - a2 * v7 * v7;
    v9 = a1 < 2 ? 127LL : 63LL;
    v10 = a1 < 2;
    v11 = a1 >= 2;
    do
    {
      v12 = v10;
      v10 *= 2LL;
      v11 = (v12 >> 63) | 2 * v11;
      if ( a1 < v11 || a1 == v11 && v4 <= v10 )
      {
        v11 = (__PAIR__(v11, v10) - __PAIR__(a1, v4)) >> 64;
        v10 -= v4;
      }
      --v9;
    }
    while ( v9 != -1 );
    v41 = v11;
    v40 = v10;
    v13 = __CFADD__(v10, v10);
    v14 = 2 * v10;
    v15 = v11 + v13 + v11;
    *((_QWORD *)&v39 + 1) = v15;
    *(_QWORD *)&v39 = v14;
    if ( a1 < v15 || a1 == v15 && v4 <= v14 )
      v39 = __PAIR__(v15, v14) - __PAIR__(a1, v4);
    v42 = v4;
    v43 = a1;
    v36 = sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40);
    if ( !v36 )
      return v36;
    v17 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v33 + 1), v33, (__int64)&v47, v16);
    v18 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (*((_QWORD *)&v44 + 1) = 0LL,
            v29 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v47 >> 1)],
            v30 = 2 * (2 * v29 - v47 * v29 * v29) - v47 * (2 * v29 - v47 * v29 * v29) * (2 * v29 - v47 * v29 * v29),
            *(_QWORD *)&v44 = (2 * v30 - v47 * v30 * v30) * v33,
            v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40),
            v45 == v40) )
      {
        v31 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v36;
      }
      v34 = v17;
      for ( i = 1LL; ; ++i )
      {
        v23 = v48[i];
        if ( v23 == 2 )
        {
          v44 = v33 >> 1;
        }
        else
        {
          v20 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v23 >> 1)];
          v21 = 2 * (2 * v20 - v23 * v20 * v20) - v23 * (2 * v20 - v23 * v20 * v20) * (2 * v20 - v23 * v20 * v20);
          v22 = 2 * v21 - v23 * v21 * v21;
          if ( *((_QWORD *)&v33 + 1) < v23 )
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = 0LL;
          }
          else
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v33 + 1)
                                   - (v23 * (unsigned __int128)(unsigned __int64)(v22 * v33) >> 64))
                                  * v22;
          }
        }
        v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v36;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v17 = v34;
          goto LABEL_32;
        }
      }
      v17 = v34;
      v31 = v46 != v41;
LABEL_56:
      if ( v31 )
        return v36;
LABEL_32:
      v18 += (unsigned __int8)*v17;
      v24 = 0LL;
      v25 = 0LL;
      if ( a1 <= v18 )
        v25 = v18;
      v26 = (-(signed __int64)(v18 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v18 )
        v24 = v18;
      do
      {
        v27 = v25;
        v25 *= 2LL;
        v24 = (v27 >> 63) | 2 * v24;
        if ( a1 < v24 || a1 == v24 && v4 <= v25 )
        {
          v24 = (__PAIR__(v24, v25) - __PAIR__(a1, v4)) >> 64;
          v25 -= v4;
        }
        --v26;
      }
      while ( v26 != -1LL );
      *(_QWORD *)&v39 = v25;
      *((_QWORD *)&v39 + 1) = v24;
      if ( !(unsigned __int8)sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40) )
        return 0;
      if ( (char *)&unk_40F23C == ++v17 )
      {
        v28 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v28);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
  {
    result = 0LL;
  }
  else if ( a2 <= 0x17DED78 )
  {
    result = 1LL;
  }
  else
  {
    result = sub_403840(a2);
  }
  return result;
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15@7
  unsigned __int64 v5; // rax@7
  __int64 v6; // rax@9
  signed __int64 v7; // rax@9
  __int64 v8; // r13@9
  signed __int64 v9; // rcx@9
  unsigned __int64 v10; // rdx@9
  unsigned __int64 v11; // rax@9
  unsigned __int64 v12; // rsi@10
  unsigned __int8 v13; // cf@15
  unsigned __int64 v14; // rdx@15
  unsigned __int64 v15; // rax@15
  __int64 v16; // rcx@17
  char *v17; // r12@18
  unsigned __int64 v18; // rbp@18
  signed __int64 i; // r12@21
  __int64 v20; // rax@22
  signed __int64 v21; // rax@22
  signed __int64 v22; // rcx@22
  unsigned __int64 v23; // rdx@27
  unsigned __int64 v24; // rax@32
  unsigned __int64 v25; // rdx@32
  unsigned __int64 v26; // rcx@34
  unsigned __int64 v27; // rsi@36
  char *v28; // rax@43
  __int64 v29; // rax@48
  signed __int64 v30; // rax@48
  bool v31; // al@49
  __int64 result; // rax@4
  unsigned __int128 v33; // [sp+10h] [bp-1D0h]@7
  char *v34; // [sp+28h] [bp-1B8h]@21
  unsigned int v35; // [sp+38h] [bp-1A8h]@8
  unsigned __int8 v36; // [sp+3Fh] [bp-1A1h]@17
  unsigned __int64 v37; // [sp+48h] [bp-198h]@8
  __int64 v38; // [sp+50h] [bp-190h]@8
  unsigned __int128 v39; // [sp+58h] [bp-188h]@15
  unsigned __int64 v40; // [sp+68h] [bp-178h]@15
  unsigned __int64 v41; // [sp+70h] [bp-170h]@15
  unsigned __int64 v42; // [sp+78h] [bp-168h]@17
  unsigned __int64 v43; // [sp+80h] [bp-160h]@17
  unsigned __int128 v44; // [sp+88h] [bp-158h]@23
  __int64 v45; // [sp+98h] [bp-148h]@24
  __int64 v46; // [sp+A0h] [bp-140h]@24
  __int64 v47; // [sp+A8h] [bp-138h]@18
  __int64 v48[30]; // [sp+B0h] [bp-130h]@19
  unsigned __int8 v49; // [sp+1A2h] [bp-3Eh]@20

  if ( a1 )
  {
    v4 = a2;
    v5 = a1 - (a2 == 0);
    *((_QWORD *)&v33 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v33 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&a4, v5);
      v38 = 0LL;
      v37 = v5 >> a4;
      v35 = a4 + 64;
    }
    else
    {
      _BitScanForward64(&v5, v33);
      v35 = v5;
      v37 = ((unsigned __int64)v33 >> v5) | (*((_QWORD *)&v33 + 1) << (64 - (unsigned __int8)v5));
      v38 = *((_QWORD *)&v33 + 1) >> v5;
    }
    v6 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)a2 >> 1)];
    v7 = 2 * (2 * v6 - a2 * v6 * v6) - a2 * (2 * v6 - a2 * v6 * v6) * (2 * v6 - a2 * v6 * v6);
    v8 = 2 * v7 - a2 * v7 * v7;
    v9 = a1 < 2 ? 127LL : 63LL;
    v10 = a1 < 2;
    v11 = a1 >= 2;
    do
    {
      v12 = v10;
      v10 *= 2LL;
      v11 = (v12 >> 63) | 2 * v11;
      if ( a1 < v11 || a1 == v11 && v4 <= v10 )
      {
        v11 = (__PAIR__(v11, v10) - __PAIR__(a1, v4)) >> 64;
        v10 -= v4;
      }
      --v9;
    }
    while ( v9 != -1 );
    v41 = v11;
    v40 = v10;
    v13 = __CFADD__(v10, v10);
    v14 = 2 * v10;
    v15 = v11 + v13 + v11;
    *((_QWORD *)&v39 + 1) = v15;
    *(_QWORD *)&v39 = v14;
    if ( a1 < v15 || a1 == v15 && v4 <= v14 )
      v39 = __PAIR__(v15, v14) - __PAIR__(a1, v4);
    v42 = v4;
    v43 = a1;
    v36 = sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40);
    if ( !v36 )
      return v36;
    v17 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v33 + 1), v33, (__int64)&v47, v16);
    v18 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (*((_QWORD *)&v44 + 1) = 0LL,
            v29 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v47 >> 1)],
            v30 = 2 * (2 * v29 - v47 * v29 * v29) - v47 * (2 * v29 - v47 * v29 * v29) * (2 * v29 - v47 * v29 * v29),
            *(_QWORD *)&v44 = (2 * v30 - v47 * v30 * v30) * v33,
            v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40),
            v45 == v40) )
      {
        v31 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v36;
      }
      v34 = v17;
      for ( i = 1LL; ; ++i )
      {
        v23 = v48[i];
        if ( v23 == 2 )
        {
          v44 = v33 >> 1;
        }
        else
        {
          v20 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v23 >> 1)];
          v21 = 2 * (2 * v20 - v23 * v20 * v20) - v23 * (2 * v20 - v23 * v20 * v20) * (2 * v20 - v23 * v20 * v20);
          v22 = 2 * v21 - v23 * v21 * v21;
          if ( *((_QWORD *)&v33 + 1) < v23 )
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = 0LL;
          }
          else
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v33 + 1)
                                   - (v23 * (unsigned __int128)(unsigned __int64)(v22 * v33) >> 64))
                                  * v22;
          }
        }
        v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v36;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v17 = v34;
          goto LABEL_32;
        }
      }
      v17 = v34;
      v31 = v46 != v41;
LABEL_56:
      if ( v31 )
        return v36;
LABEL_32:
      v18 += (unsigned __int8)*v17;
      v24 = 0LL;
      v25 = 0LL;
      if ( a1 <= v18 )
        v25 = v18;
      v26 = (-(signed __int64)(v18 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v18 )
        v24 = v18;
      do
      {
        v27 = v25;
        v25 *= 2LL;
        v24 = (v27 >> 63) | 2 * v24;
        if ( a1 < v24 || a1 == v24 && v4 <= v25 )
        {
          v24 = (__PAIR__(v24, v25) - __PAIR__(a1, v4)) >> 64;
          v25 -= v4;
        }
        --v26;
      }
      while ( v26 != -1LL );
      *(_QWORD *)&v39 = v25;
      *((_QWORD *)&v39 + 1) = v24;
      if ( !(unsigned __int8)sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40) )
        return 0;
      if ( (char *)&unk_40F23C == ++v17 )
      {
        v28 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v28);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
  {
    result = 0LL;
  }
  else if ( a2 <= 0x17DED78 )
  {
    result = 1LL;
  }
  else
  {
    result = sub_403840(a2);
  }
  return result;
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15@7
  unsigned __int64 v5; // rax@7
  __int64 v6; // rax@9
  signed __int64 v7; // rax@9
  __int64 v8; // r13@9
  signed __int64 v9; // rcx@9
  unsigned __int64 v10; // rdx@9
  unsigned __int64 v11; // rax@9
  unsigned __int64 v12; // rsi@10
  unsigned __int8 v13; // cf@15
  unsigned __int64 v14; // rdx@15
  unsigned __int64 v15; // rax@15
  __int64 v16; // rcx@17
  char *v17; // r12@18
  unsigned __int64 v18; // rbp@18
  signed __int64 i; // r12@21
  __int64 v20; // rax@22
  signed __int64 v21; // rax@22
  signed __int64 v22; // rcx@22
  unsigned __int64 v23; // rdx@27
  unsigned __int64 v24; // rax@32
  unsigned __int64 v25; // rdx@32
  unsigned __int64 v26; // rcx@34
  unsigned __int64 v27; // rsi@36
  char *v28; // rax@43
  __int64 v29; // rax@48
  signed __int64 v30; // rax@48
  bool v31; // al@49
  __int64 result; // rax@4
  unsigned __int128 v33; // [sp+10h] [bp-1D0h]@7
  char *v34; // [sp+28h] [bp-1B8h]@21
  unsigned int v35; // [sp+38h] [bp-1A8h]@8
  unsigned __int8 v36; // [sp+3Fh] [bp-1A1h]@17
  unsigned __int64 v37; // [sp+48h] [bp-198h]@8
  __int64 v38; // [sp+50h] [bp-190h]@8
  unsigned __int128 v39; // [sp+58h] [bp-188h]@15
  unsigned __int64 v40; // [sp+68h] [bp-178h]@15
  unsigned __int64 v41; // [sp+70h] [bp-170h]@15
  unsigned __int64 v42; // [sp+78h] [bp-168h]@17
  unsigned __int64 v43; // [sp+80h] [bp-160h]@17
  unsigned __int128 v44; // [sp+88h] [bp-158h]@23
  __int64 v45; // [sp+98h] [bp-148h]@24
  __int64 v46; // [sp+A0h] [bp-140h]@24
  __int64 v47; // [sp+A8h] [bp-138h]@18
  __int64 v48[30]; // [sp+B0h] [bp-130h]@19
  unsigned __int8 v49; // [sp+1A2h] [bp-3Eh]@20

  if ( a1 )
  {
    v4 = a2;
    v5 = a1 - (a2 == 0);
    *((_QWORD *)&v33 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v33 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&a4, v5);
      v38 = 0LL;
      v37 = v5 >> a4;
      v35 = a4 + 64;
    }
    else
    {
      _BitScanForward64(&v5, v33);
      v35 = v5;
      v37 = ((unsigned __int64)v33 >> v5) | (*((_QWORD *)&v33 + 1) << (64 - (unsigned __int8)v5));
      v38 = *((_QWORD *)&v33 + 1) >> v5;
    }
    v6 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)a2 >> 1)];
    v7 = 2 * (2 * v6 - a2 * v6 * v6) - a2 * (2 * v6 - a2 * v6 * v6) * (2 * v6 - a2 * v6 * v6);
    v8 = 2 * v7 - a2 * v7 * v7;
    v9 = a1 < 2 ? 127LL : 63LL;
    v10 = a1 < 2;
    v11 = a1 >= 2;
    do
    {
      v12 = v10;
      v10 *= 2LL;
      v11 = (v12 >> 63) | 2 * v11;
      if ( a1 < v11 || a1 == v11 && v4 <= v10 )
      {
        v11 = (__PAIR__(v11, v10) - __PAIR__(a1, v4)) >> 64;
        v10 -= v4;
      }
      --v9;
    }
    while ( v9 != -1 );
    v41 = v11;
    v40 = v10;
    v13 = __CFADD__(v10, v10);
    v14 = 2 * v10;
    v15 = v11 + v13 + v11;
    *((_QWORD *)&v39 + 1) = v15;
    *(_QWORD *)&v39 = v14;
    if ( a1 < v15 || a1 == v15 && v4 <= v14 )
      v39 = __PAIR__(v15, v14) - __PAIR__(a1, v4);
    v42 = v4;
    v43 = a1;
    v36 = sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40);
    if ( !v36 )
      return v36;
    v17 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v33 + 1), v33, (__int64)&v47, v16);
    v18 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (*((_QWORD *)&v44 + 1) = 0LL,
            v29 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v47 >> 1)],
            v30 = 2 * (2 * v29 - v47 * v29 * v29) - v47 * (2 * v29 - v47 * v29 * v29) * (2 * v29 - v47 * v29 * v29),
            *(_QWORD *)&v44 = (2 * v30 - v47 * v30 * v30) * v33,
            v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40),
            v45 == v40) )
      {
        v31 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v36;
      }
      v34 = v17;
      for ( i = 1LL; ; ++i )
      {
        v23 = v48[i];
        if ( v23 == 2 )
        {
          v44 = v33 >> 1;
        }
        else
        {
          v20 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v23 >> 1)];
          v21 = 2 * (2 * v20 - v23 * v20 * v20) - v23 * (2 * v20 - v23 * v20 * v20) * (2 * v20 - v23 * v20 * v20);
          v22 = 2 * v21 - v23 * v21 * v21;
          if ( *((_QWORD *)&v33 + 1) < v23 )
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = 0LL;
          }
          else
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v33 + 1)
                                   - (v23 * (unsigned __int128)(unsigned __int64)(v22 * v33) >> 64))
                                  * v22;
          }
        }
        v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v36;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v17 = v34;
          goto LABEL_32;
        }
      }
      v17 = v34;
      v31 = v46 != v41;
LABEL_56:
      if ( v31 )
        return v36;
LABEL_32:
      v18 += (unsigned __int8)*v17;
      v24 = 0LL;
      v25 = 0LL;
      if ( a1 <= v18 )
        v25 = v18;
      v26 = (-(signed __int64)(v18 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v18 )
        v24 = v18;
      do
      {
        v27 = v25;
        v25 *= 2LL;
        v24 = (v27 >> 63) | 2 * v24;
        if ( a1 < v24 || a1 == v24 && v4 <= v25 )
        {
          v24 = (__PAIR__(v24, v25) - __PAIR__(a1, v4)) >> 64;
          v25 -= v4;
        }
        --v26;
      }
      while ( v26 != -1LL );
      *(_QWORD *)&v39 = v25;
      *((_QWORD *)&v39 + 1) = v24;
      if ( !(unsigned __int8)sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40) )
        return 0;
      if ( (char *)&unk_40F23C == ++v17 )
      {
        v28 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v28);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
  {
    result = 0LL;
  }
  else if ( a2 <= 0x17DED78 )
  {
    result = 1LL;
  }
  else
  {
    result = sub_403840(a2);
  }
  return result;
}

__int64 __fastcall sub_404050(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15@7
  unsigned __int64 v5; // rax@7
  __int64 v6; // rax@9
  signed __int64 v7; // rax@9
  __int64 v8; // r13@9
  signed __int64 v9; // rcx@9
  unsigned __int64 v10; // rdx@9
  unsigned __int64 v11; // rax@9
  unsigned __int64 v12; // rsi@10
  unsigned __int8 v13; // cf@15
  unsigned __int64 v14; // rdx@15
  unsigned __int64 v15; // rax@15
  __int64 v16; // rcx@17
  char *v17; // r12@18
  unsigned __int64 v18; // rbp@18
  signed __int64 i; // r12@21
  __int64 v20; // rax@22
  signed __int64 v21; // rax@22
  signed __int64 v22; // rcx@22
  unsigned __int64 v23; // rdx@27
  unsigned __int64 v24; // rax@32
  unsigned __int64 v25; // rdx@32
  unsigned __int64 v26; // rcx@34
  unsigned __int64 v27; // rsi@36
  char *v28; // rax@43
  __int64 v29; // rax@48
  signed __int64 v30; // rax@48
  bool v31; // al@49
  __int64 result; // rax@4
  unsigned __int128 v33; // [sp+10h] [bp-1D0h]@7
  char *v34; // [sp+28h] [bp-1B8h]@21
  unsigned int v35; // [sp+38h] [bp-1A8h]@8
  unsigned __int8 v36; // [sp+3Fh] [bp-1A1h]@17
  unsigned __int64 v37; // [sp+48h] [bp-198h]@8
  __int64 v38; // [sp+50h] [bp-190h]@8
  unsigned __int128 v39; // [sp+58h] [bp-188h]@15
  unsigned __int64 v40; // [sp+68h] [bp-178h]@15
  unsigned __int64 v41; // [sp+70h] [bp-170h]@15
  unsigned __int64 v42; // [sp+78h] [bp-168h]@17
  unsigned __int64 v43; // [sp+80h] [bp-160h]@17
  unsigned __int128 v44; // [sp+88h] [bp-158h]@23
  __int64 v45; // [sp+98h] [bp-148h]@24
  __int64 v46; // [sp+A0h] [bp-140h]@24
  __int64 v47; // [sp+A8h] [bp-138h]@18
  __int64 v48[30]; // [sp+B0h] [bp-130h]@19
  unsigned __int8 v49; // [sp+1A2h] [bp-3Eh]@20

  if ( a1 )
  {
    v4 = a2;
    v5 = a1 - (a2 == 0);
    *((_QWORD *)&v33 + 1) = a1 - (a2 == 0);
    *(_QWORD *)&v33 = a2 - 1;
    if ( a2 == 1 )
    {
      _BitScanForward64((unsigned __int64 *)&a4, v5);
      v38 = 0LL;
      v37 = v5 >> a4;
      v35 = a4 + 64;
    }
    else
    {
      _BitScanForward64(&v5, v33);
      v35 = v5;
      v37 = ((unsigned __int64)v33 >> v5) | (*((_QWORD *)&v33 + 1) << (64 - (unsigned __int8)v5));
      v38 = *((_QWORD *)&v33 + 1) >> v5;
    }
    v6 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)a2 >> 1)];
    v7 = 2 * (2 * v6 - a2 * v6 * v6) - a2 * (2 * v6 - a2 * v6 * v6) * (2 * v6 - a2 * v6 * v6);
    v8 = 2 * v7 - a2 * v7 * v7;
    v9 = a1 < 2 ? 127LL : 63LL;
    v10 = a1 < 2;
    v11 = a1 >= 2;
    do
    {
      v12 = v10;
      v10 *= 2LL;
      v11 = (v12 >> 63) | 2 * v11;
      if ( a1 < v11 || a1 == v11 && v4 <= v10 )
      {
        v11 = (__PAIR__(v11, v10) - __PAIR__(a1, v4)) >> 64;
        v10 -= v4;
      }
      --v9;
    }
    while ( v9 != -1 );
    v41 = v11;
    v40 = v10;
    v13 = __CFADD__(v10, v10);
    v14 = 2 * v10;
    v15 = v11 + v13 + v11;
    *((_QWORD *)&v39 + 1) = v15;
    *(_QWORD *)&v39 = v14;
    if ( a1 < v15 || a1 == v15 && v4 <= v14 )
      v39 = __PAIR__(v15, v14) - __PAIR__(a1, v4);
    v42 = v4;
    v43 = a1;
    v36 = sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40);
    if ( !v36 )
      return v36;
    v17 = byte_40EFA0;
    sub_403210(*((unsigned __int64 *)&v33 + 1), v33, (__int64)&v47, v16);
    v18 = 2LL;
    while ( 1 )
    {
      if ( v48[0]
        && (*((_QWORD *)&v44 + 1) = 0LL,
            v29 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v47 >> 1)],
            v30 = 2 * (2 * v29 - v47 * v29 * v29) - v47 * (2 * v29 - v47 * v29 * v29) * (2 * v29 - v47 * v29 * v29),
            *(_QWORD *)&v44 = (2 * v30 - v47 * v30 * v30) * v33,
            v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40),
            v45 == v40) )
      {
        v31 = v46 != v41;
        if ( !v49 )
          goto LABEL_56;
        if ( v46 == v41 )
          goto LABEL_32;
      }
      else if ( !v49 )
      {
        return v36;
      }
      v34 = v17;
      for ( i = 1LL; ; ++i )
      {
        v23 = v48[i];
        if ( v23 == 2 )
        {
          v44 = v33 >> 1;
        }
        else
        {
          v20 = (unsigned __int8)byte_40C220[(unsigned __int64)((unsigned __int8)v23 >> 1)];
          v21 = 2 * (2 * v20 - v23 * v20 * v20) - v23 * (2 * v20 - v23 * v20 * v20) * (2 * v20 - v23 * v20 * v20);
          v22 = 2 * v21 - v23 * v21 * v21;
          if ( *((_QWORD *)&v33 + 1) < v23 )
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = 0LL;
          }
          else
          {
            *(_QWORD *)&v44 = v22 * v33;
            *((_QWORD *)&v44 + 1) = (*((_QWORD *)&v33 + 1)
                                   - (v23 * (unsigned __int128)(unsigned __int64)(v22 * v33) >> 64))
                                  * v22;
          }
        }
        v45 = sub_4020D0(&v46, (__int64)&v39, (unsigned __int64 *)&v44, (__int64)&v42, v8, (__int64)&v40);
        if ( v45 != v40 )
        {
          if ( v49 <= (unsigned int)i )
            return v36;
          continue;
        }
        if ( v49 <= (unsigned int)i )
          break;
        if ( v46 == v41 )
        {
          v17 = v34;
          goto LABEL_32;
        }
      }
      v17 = v34;
      v31 = v46 != v41;
LABEL_56:
      if ( v31 )
        return v36;
LABEL_32:
      v18 += (unsigned __int8)*v17;
      v24 = 0LL;
      v25 = 0LL;
      if ( a1 <= v18 )
        v25 = v18;
      v26 = (-(signed __int64)(v18 < a1) & 0xFFFFFFFFFFFFFFC0LL) + 127;
      if ( a1 > v18 )
        v24 = v18;
      do
      {
        v27 = v25;
        v25 *= 2LL;
        v24 = (v27 >> 63) | 2 * v24;
        if ( a1 < v24 || a1 == v24 && v4 <= v25 )
        {
          v24 = (__PAIR__(v24, v25) - __PAIR__(a1, v4)) >> 64;
          v25 -= v4;
        }
        --v26;
      }
      while ( v26 != -1LL );
      *(_QWORD *)&v39 = v25;
      *((_QWORD *)&v39 + 1) = v24;
      if ( !(unsigned __int8)sub_402240((__int64)&v42, v8, (__int64)&v39, &v37, v35, (__int64)&v40) )
        return 0;
      if ( (char *)&unk_40F23C == ++v17 )
      {
        v28 = dcgettext(0LL, "Lucas prime test failure.  This should not happen", 5);
        error(0, 0, v28);
        abort();
      }
    }
  }
  if ( a2 <= 1 )
  {
    result = 0LL;
  }
  else if ( a2 <= 0x17DED78 )
  {
    result = 1LL;
  }
  else
  {
    result = sub_403840(a2);
  }
  return result;
}

int __fastcall sub_4040A0(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx@1
  __int64 *v3; // r12@2
  __int64 *v4; // rbp@2
  unsigned int v5; // ebx@3
  __int64 v7; // [sp+0h] [bp-128h]@1
  unsigned __int64 v8; // [sp+8h] [bp-120h]@6
  __int64 v9; // [sp+10h] [bp-118h]@2
  unsigned __int8 v10; // [sp+FAh] [bp-2Eh]@1

  sub_402640(a1, a2);
  sub_4026F0(58);
  sub_403210(a1, a2, (__int64)&v7, v2);
  if ( v10 )
  {
    v3 = &v9;
    v4 = &v7;
    do
    {
      v5 = 0;
      if ( *((_BYTE *)v4 + 224) )
      {
        do
        {
          ++v5;
          sub_4026F0(32);
          sub_402340(*v3, 0LL);
        }
        while ( *((_BYTE *)v4 + 224) > v5 );
      }
      v4 = (__int64 *)((char *)v4 + 1);
      ++v3;
    }
    while ( v10 > (unsigned int)v4 - (unsigned int)&v7 );
  }
  if ( v8 )
  {
    sub_4026F0(32);
    sub_402640(v8, v7);
  }
  return sub_4026F0(10);
}

signed __int64 __fastcall sub_404170(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rax@1
  char i; // dl@1
  signed __int64 v8; // r8@3
  signed __int64 v9; // rdx@4
  _BYTE *v10; // rcx@5
  signed __int64 v11; // rsi@5
  __int64 v12; // rdx@6
  __int64 v13; // rax@8
  const char *v14; // rsi@8
  __int64 v15; // rbx@8
  char *v16; // rax@9
  int v18; // eax@12
  __int64 v19; // rdx@13
  unsigned __int64 v20; // rbp@13
  unsigned __int64 v21; // rbx@13
  signed __int64 v22; // rsi@14
  __int64 v23; // rax@14
  unsigned __int64 v24; // rcx@14
  signed __int64 v25; // rax@14
  __int64 v26; // rbx@14
  unsigned __int8 v27; // cf@14
  __int64 v28; // rax@17

  v6 = a1;
  for ( i = *a1; *v6 == 32; i = *v6 )
    ++v6;
  v8 = (signed __int64)(v6 + 1);
  if ( i == 43 )
  {
    v9 = (signed __int64)(v6++ + 2);
    v8 = v9;
  }
  v10 = v6;
  v11 = 4LL;
  while ( 1 )
  {
    v12 = *(++v10 - 1);
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
    LODWORD(v13) = sub_406F50(a1, v11, v12, v10, v8, a6);
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
      v19 = (unsigned int)(*(_BYTE *)(v8 - 1) - 48);
      if ( v21 > 0x1999999999999999LL )
        goto LABEL_17;
    }
    if ( (v21 & 0x8000000000000000LL) != 0LL )
    {
LABEL_17:
      LODWORD(v28) = sub_406F50(a1, v22, v19, v24, v8, 1844674407370955161LL);
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

void __fastcall __noreturn sub_4042E0(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  FILE *v5; // rbp@4
  char *v6; // rax@4
  FILE *v7; // rbp@4
  char *v8; // rax@4
  FILE *v9; // rbp@4
  char *v10; // rax@4
  __int64 *v11; // rax@4
  _BYTE *v12; // rdi@5
  bool v13; // cf@5
  bool v14; // zf@5
  const char *v15; // rsi@6
  signed __int64 v16; // rcx@6
  char *v17; // rbp@10
  char *v18; // rax@11
  char *v19; // rax@11
  char *v20; // r12@13
  char *v21; // rax@13
  char *v22; // rax@15
  char *v23; // rax@16
  char *v24; // rax@16
  char *v25; // rax@18
  char *v26; // rax@20
  __int64 v27; // rcx@20
  const char *v28; // [sp+0h] [bp-88h]@4
  const char *v29; // [sp+8h] [bp-80h]@4
  const char *v30; // [sp+10h] [bp-78h]@4
  const char *v31; // [sp+18h] [bp-70h]@4
  const char *v32; // [sp+20h] [bp-68h]@4
  const char *v33; // [sp+28h] [bp-60h]@4
  const char *v34; // [sp+30h] [bp-58h]@4
  const char *v35; // [sp+38h] [bp-50h]@4
  const char *v36; // [sp+40h] [bp-48h]@4
  const char *v37; // [sp+48h] [bp-40h]@4
  const char *v38; // [sp+50h] [bp-38h]@4
  const char *v39; // [sp+58h] [bp-30h]@4
  __int64 v40; // [sp+60h] [bp-28h]@4
  __int64 v41; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_613328;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [NUMBER]...\n  or:  %s OPTION\n", 5);
  __printf_chk(1LL, v4, v2, v2);
  v5 = stdout;
  v6 = dcgettext(
         0LL,
         "Print the prime factors of each specified integer NUMBER.  If none\n"
         "are specified on the command line, read them from standard input.\n"
         "\n",
         5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v10, v9);
  v28 = "[";
  v11 = (__int64 *)&v28;
  v29 = "test invocation";
  v30 = "coreutils";
  v31 = "Multi-call invocation";
  v32 = "sha224sum";
  v33 = "sha2 utilities";
  v34 = "sha256sum";
  v35 = "sha2 utilities";
  v36 = "sha384sum";
  v37 = "sha2 utilities";
  v38 = "sha512sum";
  v39 = "sha2 utilities";
  v40 = 0LL;
  v41 = 0LL;
  do
  {
    v11 += 2;
    v12 = (_BYTE *)*v11;
    v13 = 0;
    v14 = *v11 == 0;
    if ( !*v11 )
      break;
    v15 = "factor";
    v16 = 7LL;
    do
    {
      if ( !v16 )
        break;
      v13 = (const unsigned __int8)*v15 < *v12;
      v14 = *v15++ == *v12++;
      --v16;
    }
    while ( v14 );
  }
  while ( (!v13 && !v14) != v13 );
  v17 = (char *)v11[1];
  if ( v17 )
  {
    v18 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v18, &unk_40BDAC, "https://www.gnu.org/software/coreutils/");
    v19 = setlocale(5, 0LL);
    if ( !v19 || !strncmp(v19, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v23 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v23, &unk_40BDAC, "https://www.gnu.org/software/coreutils/");
    v24 = setlocale(5, 0LL);
    if ( !v24 || !strncmp(v24, "en_", 3uLL) )
    {
      v17 = "factor";
      v25 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v20 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v25, "https://www.gnu.org/software/coreutils/", "factor");
LABEL_15:
      v22 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v22, v17, v20);
LABEL_3:
      exit(v1);
    }
    v17 = "factor";
  }
  v26 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v26, "factor", v27);
LABEL_13:
  v20 = "Multi-call invocation" + 10;
  v21 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v21, "https://www.gnu.org/software/coreutils/", "factor");
  if ( v17 != "factor" )
    v20 = "";
  goto LABEL_15;
}

__int64 sub_4045F0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_406DA0(qword_613320, "write error");
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
  char *v3; // rbp@2
  size_t v4; // rbx@2
  __int64 v5; // r12@2
  __int64 v6; // rax@5

  if ( n )
  {
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
  }
  else
  {
    v5 = 0LL;
  }
  return v5;
}

signed __int64 __fastcall sub_404710(unsigned __int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx@1

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  while ( 1 )
  {
    *(_BYTE *)--v2 = a1 - 10 * ((unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)a1 >> 64) >> 3) + 48;
    if ( a1 <= 9 )
      break;
    a1 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)a1 >> 64) >> 3;
  }
  return v2;
}

char *__fastcall sub_404760(const char *a1)
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
  qword_613328 = v1;
  program_invocation_name = v1;
  return result;
}

void __noreturn sub_404800()
{
  __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
}

__int64 __fastcall sub_404820(char *a1, __int64 a2)
{
  char *v2; // rbx@1
  char *v3; // rax@1
  unsigned __int64 v4; // rax@3
  unsigned __int64 v5; // rbp@3
  _BYTE *v6; // r13@5
  __int64 v7; // rbx@7
  mbstate_t *v8; // r13@11
  wchar_t v10; // er15@16
  char *v11; // rbx@18
  size_t v12; // rax@21
  char *v13; // rbx@21
  __int64 v14; // rax@21
  size_t v15; // rax@32
  wchar_t v16; // eax@38
  wchar_t v17; // eax@42
  size_t v18; // rax@46
  char *v19; // r15@46
  __int64 v20; // rax@46
  wint_t v21; // ebx@57
  wchar_t v22; // eax@63
  size_t v23; // rax@68
  char *v24; // r15@68
  __int64 v25; // rax@68
  size_t v26; // rax@82
  size_t v27; // rax@83
  size_t v28; // rax@86
  char *v29; // rbx@86
  __int64 v30; // rax@86
  size_t v31; // rax@94
  char *v32; // r13@94
  __int64 v33; // rax@94
  size_t v34; // rax@106
  char *s; // [sp+8h] [bp-C0h]@1
  char v36; // [sp+10h] [bp-B8h]@13
  char v37; // [sp+10h] [bp-B8h]@36
  mbstate_t ps; // [sp+14h] [bp-B4h]@13
  char v39; // [sp+1Ch] [bp-ACh]@13
  char *v40; // [sp+20h] [bp-A8h]@13
  size_t v41; // [sp+28h] [bp-A0h]@16
  char v42; // [sp+30h] [bp-98h]@16
  wchar_t pwc; // [sp+34h] [bp-94h]@16
  char v44; // [sp+50h] [bp-78h]@36
  mbstate_t v45; // [sp+54h] [bp-74h]@36
  char v46; // [sp+5Ch] [bp-6Ch]@36
  char *v47; // [sp+60h] [bp-68h]@36
  __int64 v48; // [sp+68h] [bp-60h]@38
  char v49; // [sp+70h] [bp-58h]@38
  wchar_t v50; // [sp+74h] [bp-54h]@38

  v2 = a1;
  LODWORD(v3) = sub_4073A0(a2, 2LL);
  s = v3;
  while ( 2 )
  {
    if ( !*v2 )
    {
LABEL_11:
      LODWORD(v8) = 0;
      goto LABEL_12;
    }
    while ( 1 )
    {
      LODWORD(v4) = sub_40A420(v2, s);
      v5 = v4;
      if ( !v4 )
        goto LABEL_11;
      if ( __ctype_get_mb_cur_max() > 1 )
        break;
      v6 = (_BYTE *)(v5 + strlen(s));
      if ( (unsigned __int64)v2 >= v5 || !((*__ctype_b_loc())[*(_BYTE *)(v5 - 1)] & 8) )
      {
        v7 = *v6;
        if ( !(_BYTE)v7 || !((*__ctype_b_loc())[v7] & 8) )
        {
          LODWORD(v8) = 1;
          goto LABEL_12;
        }
      }
      if ( *(_BYTE *)v5 )
      {
        v2 = (char *)(v5 + 1);
        if ( *(_BYTE *)(v5 + 1) )
          continue;
      }
      goto LABEL_11;
    }
    v40 = v2;
    v8 = &ps;
    v36 = 0;
    ps = 0LL;
    v39 = 0;
    if ( (unsigned __int64)v2 >= v5 )
      goto LABEL_84;
    do
    {
      if ( !v36 )
      {
        if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v40 >> 5) & 7)] >> *v40) & 1 )
        {
          v41 = 1LL;
          v10 = *v40;
          v42 = 1;
          pwc = v10;
          v39 = 1;
          goto LABEL_17;
        }
        if ( !mbsinit(&ps) )
          goto LABEL_108;
        v36 = 1;
      }
      v12 = __ctype_get_mb_cur_max();
      v13 = v40;
      sub_407340(v40, v12);
      v14 = sub_408FC0(&pwc, v13);
      v41 = v14;
      if ( v14 == -1 )
      {
        v10 = pwc;
        v11 = v40;
        v42 = 0;
        v41 = 1LL;
        goto LABEL_19;
      }
      if ( v14 == -2 )
      {
        v11 = v40;
        v15 = strlen(v40);
        v42 = 0;
        v10 = pwc;
        v41 = v15;
        goto LABEL_19;
      }
      if ( v14 )
      {
        v10 = pwc;
      }
      else
      {
        v41 = 1LL;
        if ( *v40 )
          goto LABEL_109;
        v10 = pwc;
        if ( pwc )
LABEL_110:
          __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
      }
      v42 = 1;
      if ( mbsinit(&ps) )
        v36 = 0;
      v39 = 1;
LABEL_17:
      if ( !v10 )
LABEL_111:
        abort();
      v11 = v40;
LABEL_19:
      v39 = 0;
      v40 = &v11[v41];
    }
    while ( (unsigned __int64)&v11[v41] < v5 );
    if ( v42 )
    {
      LOBYTE(v8) = iswalnum(v10) == 0;
      goto LABEL_36;
    }
LABEL_84:
    LODWORD(v8) = 1;
LABEL_36:
    v40 = (char *)v5;
    v37 = 0;
    ps = 0LL;
    v39 = 0;
    v47 = s;
    v44 = 0;
    v45 = 0LL;
    v46 = 0;
    while ( 2 )
    {
      if ( !v44 )
      {
        if ( !(((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v47 >> 5) & 7)] >> *v47) & 1) )
        {
          if ( !mbsinit(&v45) )
            goto LABEL_108;
          v44 = 1;
          goto LABEL_46;
        }
        v48 = 1LL;
        v16 = *v47;
        v49 = 1;
        v50 = v16;
        v46 = 1;
        if ( !v16 )
          break;
        goto LABEL_39;
      }
LABEL_46:
      v18 = __ctype_get_mb_cur_max();
      v19 = v47;
      sub_407340(v47, v18);
      v20 = sub_408FC0(&v50, v19);
      v48 = v20;
      if ( v20 == -1 )
      {
        v48 = 1LL;
        v49 = 0;
        v46 = 1;
        goto LABEL_39;
      }
      if ( v20 == -2 )
      {
        v26 = strlen(v47);
        v49 = 0;
        v48 = v26;
        v46 = 1;
        goto LABEL_39;
      }
      if ( !v20 )
      {
        v48 = 1LL;
        if ( *v47 )
          goto LABEL_109;
        if ( v50 )
          goto LABEL_110;
      }
      v49 = 1;
      if ( mbsinit(&v45) )
        v44 = 0;
      v46 = 1;
      if ( v50 )
      {
LABEL_39:
        if ( v39 )
        {
          if ( v42 )
          {
LABEL_43:
            if ( !pwc )
              goto LABEL_111;
            goto LABEL_44;
          }
        }
        else
        {
          if ( !v37 )
          {
            if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v40 >> 5) & 7)] >> *v40) & 1 )
            {
              v41 = 1LL;
              v17 = *v40;
              v42 = 1;
              pwc = v17;
              v39 = 1;
              goto LABEL_43;
            }
            if ( !mbsinit(&ps) )
              goto LABEL_108;
            v37 = 1;
          }
          v23 = __ctype_get_mb_cur_max();
          v24 = v40;
          sub_407340(v40, v23);
          v25 = sub_408FC0(&pwc, v24);
          v41 = v25;
          if ( v25 == -1 )
          {
            v41 = 1LL;
            v42 = 0;
          }
          else
          {
            if ( v25 != -2 )
            {
              if ( !v25 )
              {
                v41 = 1LL;
                if ( *v40 )
                  goto LABEL_109;
                if ( pwc )
                  goto LABEL_110;
              }
              v42 = 1;
              if ( mbsinit(&ps) )
                v37 = 0;
              v39 = 1;
              goto LABEL_43;
            }
            v27 = strlen(v40);
            v42 = 0;
            v41 = v27;
          }
        }
LABEL_44:
        v40 += v41;
        v47 += v48;
        v39 = 0;
        v46 = 0;
        continue;
      }
      break;
    }
    if ( v39 )
    {
      v21 = pwc;
      if ( v42 )
        goto LABEL_58;
      goto LABEL_59;
    }
    if ( !v37 )
    {
      if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v40 >> 5) & 7)] >> *v40) & 1 )
      {
        v41 = 1LL;
        v21 = *v40;
        v42 = 1;
        pwc = v21;
        v39 = 1;
        goto LABEL_58;
      }
      if ( !mbsinit(&ps) )
        goto LABEL_108;
    }
    v28 = __ctype_get_mb_cur_max();
    v29 = v40;
    sub_407340(v40, v28);
    v30 = sub_408FC0(&pwc, v29);
    v41 = v30;
    if ( v30 == -1 )
    {
      v41 = 1LL;
      v21 = pwc;
      v42 = 0;
      v39 = 1;
      goto LABEL_59;
    }
    if ( v30 == -2 )
    {
      v34 = strlen(v40);
      v42 = 0;
      v21 = pwc;
      v41 = v34;
      v39 = 1;
      goto LABEL_59;
    }
    if ( v30 )
    {
      v21 = pwc;
      goto LABEL_90;
    }
    v41 = 1LL;
    if ( *v40 )
      goto LABEL_109;
    v21 = pwc;
    if ( pwc )
LABEL_104:
      sub_404800();
LABEL_90:
    v42 = 1;
    mbsinit(&ps);
    v39 = 1;
LABEL_58:
    if ( v21 )
    {
LABEL_59:
      if ( !v42 || !iswalnum(v21) )
        break;
LABEL_62:
      v40 = (char *)v5;
      ps = 0LL;
      v39 = 0;
      if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)v5 >> 5) & 7)] >> *(_BYTE *)v5) & 1 )
      {
        v41 = 1LL;
        v22 = *(_BYTE *)v5;
        v42 = 1;
        pwc = v22;
        v39 = 1;
        goto LABEL_64;
      }
      if ( mbsinit(&ps) )
      {
        v31 = __ctype_get_mb_cur_max();
        v32 = v40;
        sub_407340(v40, v31);
        v33 = sub_408FC0(&pwc, v32);
        v41 = v33;
        if ( v33 == -1 )
        {
          v41 = 1LL;
          goto LABEL_65;
        }
        if ( v33 == -2 )
        {
          v41 = strlen(v40);
          goto LABEL_65;
        }
        if ( !v33 )
        {
          v41 = 1LL;
          if ( !*v40 )
          {
            if ( pwc )
              goto LABEL_104;
            goto LABEL_99;
          }
LABEL_109:
          __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
        }
LABEL_99:
        v42 = 1;
        mbsinit(&ps);
        v39 = 1;
LABEL_64:
        if ( pwc )
        {
LABEL_65:
          v2 = (char *)(v5 + v41);
          continue;
        }
        goto LABEL_11;
      }
LABEL_108:
      __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
    }
    break;
  }
  if ( !(_BYTE)v8 )
    goto LABEL_62;
LABEL_12:
  free(s);
  return (unsigned int)v8;
}

__int64 __fastcall sub_404820(char *a1, __int64 a2)
{
  char *v2; // rbx@1
  char *v3; // rax@1
  unsigned __int64 v4; // rax@3
  unsigned __int64 v5; // rbp@3
  _BYTE *v6; // r13@5
  __int64 v7; // rbx@7
  mbstate_t *v8; // r13@11
  wchar_t v10; // er15@16
  char *v11; // rbx@18
  size_t v12; // rax@21
  char *v13; // rbx@21
  __int64 v14; // rax@21
  size_t v15; // rax@32
  wchar_t v16; // eax@38
  wchar_t v17; // eax@42
  size_t v18; // rax@46
  char *v19; // r15@46
  __int64 v20; // rax@46
  wint_t v21; // ebx@57
  wchar_t v22; // eax@63
  size_t v23; // rax@68
  char *v24; // r15@68
  __int64 v25; // rax@68
  size_t v26; // rax@82
  size_t v27; // rax@83
  size_t v28; // rax@86
  char *v29; // rbx@86
  __int64 v30; // rax@86
  size_t v31; // rax@94
  char *v32; // r13@94
  __int64 v33; // rax@94
  size_t v34; // rax@106
  char *s; // [sp+8h] [bp-C0h]@1
  char v36; // [sp+10h] [bp-B8h]@13
  char v37; // [sp+10h] [bp-B8h]@36
  mbstate_t ps; // [sp+14h] [bp-B4h]@13
  char v39; // [sp+1Ch] [bp-ACh]@13
  char *v40; // [sp+20h] [bp-A8h]@13
  size_t v41; // [sp+28h] [bp-A0h]@16
  char v42; // [sp+30h] [bp-98h]@16
  wchar_t pwc; // [sp+34h] [bp-94h]@16
  char v44; // [sp+50h] [bp-78h]@36
  mbstate_t v45; // [sp+54h] [bp-74h]@36
  char v46; // [sp+5Ch] [bp-6Ch]@36
  char *v47; // [sp+60h] [bp-68h]@36
  __int64 v48; // [sp+68h] [bp-60h]@38
  char v49; // [sp+70h] [bp-58h]@38
  wchar_t v50; // [sp+74h] [bp-54h]@38

  v2 = a1;
  LODWORD(v3) = sub_4073A0(a2, 2LL);
  s = v3;
  while ( 2 )
  {
    if ( !*v2 )
    {
LABEL_11:
      LODWORD(v8) = 0;
      goto LABEL_12;
    }
    while ( 1 )
    {
      LODWORD(v4) = sub_40A420(v2, s);
      v5 = v4;
      if ( !v4 )
        goto LABEL_11;
      if ( __ctype_get_mb_cur_max() > 1 )
        break;
      v6 = (_BYTE *)(v5 + strlen(s));
      if ( (unsigned __int64)v2 >= v5 || !((*__ctype_b_loc())[*(_BYTE *)(v5 - 1)] & 8) )
      {
        v7 = *v6;
        if ( !(_BYTE)v7 || !((*__ctype_b_loc())[v7] & 8) )
        {
          LODWORD(v8) = 1;
          goto LABEL_12;
        }
      }
      if ( *(_BYTE *)v5 )
      {
        v2 = (char *)(v5 + 1);
        if ( *(_BYTE *)(v5 + 1) )
          continue;
      }
      goto LABEL_11;
    }
    v40 = v2;
    v8 = &ps;
    v36 = 0;
    ps = 0LL;
    v39 = 0;
    if ( (unsigned __int64)v2 >= v5 )
      goto LABEL_84;
    do
    {
      if ( !v36 )
      {
        if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v40 >> 5) & 7)] >> *v40) & 1 )
        {
          v41 = 1LL;
          v10 = *v40;
          v42 = 1;
          pwc = v10;
          v39 = 1;
          goto LABEL_17;
        }
        if ( !mbsinit(&ps) )
          goto LABEL_108;
        v36 = 1;
      }
      v12 = __ctype_get_mb_cur_max();
      v13 = v40;
      sub_407340(v40, v12);
      v14 = sub_408FC0(&pwc, v13);
      v41 = v14;
      if ( v14 == -1 )
      {
        v10 = pwc;
        v11 = v40;
        v42 = 0;
        v41 = 1LL;
        goto LABEL_19;
      }
      if ( v14 == -2 )
      {
        v11 = v40;
        v15 = strlen(v40);
        v42 = 0;
        v10 = pwc;
        v41 = v15;
        goto LABEL_19;
      }
      if ( v14 )
      {
        v10 = pwc;
      }
      else
      {
        v41 = 1LL;
        if ( *v40 )
          goto LABEL_109;
        v10 = pwc;
        if ( pwc )
LABEL_110:
          __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
      }
      v42 = 1;
      if ( mbsinit(&ps) )
        v36 = 0;
      v39 = 1;
LABEL_17:
      if ( !v10 )
LABEL_111:
        abort();
      v11 = v40;
LABEL_19:
      v39 = 0;
      v40 = &v11[v41];
    }
    while ( (unsigned __int64)&v11[v41] < v5 );
    if ( v42 )
    {
      LOBYTE(v8) = iswalnum(v10) == 0;
      goto LABEL_36;
    }
LABEL_84:
    LODWORD(v8) = 1;
LABEL_36:
    v40 = (char *)v5;
    v37 = 0;
    ps = 0LL;
    v39 = 0;
    v47 = s;
    v44 = 0;
    v45 = 0LL;
    v46 = 0;
    while ( 2 )
    {
      if ( !v44 )
      {
        if ( !(((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v47 >> 5) & 7)] >> *v47) & 1) )
        {
          if ( !mbsinit(&v45) )
            goto LABEL_108;
          v44 = 1;
          goto LABEL_46;
        }
        v48 = 1LL;
        v16 = *v47;
        v49 = 1;
        v50 = v16;
        v46 = 1;
        if ( !v16 )
          break;
        goto LABEL_39;
      }
LABEL_46:
      v18 = __ctype_get_mb_cur_max();
      v19 = v47;
      sub_407340(v47, v18);
      v20 = sub_408FC0(&v50, v19);
      v48 = v20;
      if ( v20 == -1 )
      {
        v48 = 1LL;
        v49 = 0;
        v46 = 1;
        goto LABEL_39;
      }
      if ( v20 == -2 )
      {
        v26 = strlen(v47);
        v49 = 0;
        v48 = v26;
        v46 = 1;
        goto LABEL_39;
      }
      if ( !v20 )
      {
        v48 = 1LL;
        if ( *v47 )
          goto LABEL_109;
        if ( v50 )
          goto LABEL_110;
      }
      v49 = 1;
      if ( mbsinit(&v45) )
        v44 = 0;
      v46 = 1;
      if ( v50 )
      {
LABEL_39:
        if ( v39 )
        {
          if ( v42 )
          {
LABEL_43:
            if ( !pwc )
              goto LABEL_111;
            goto LABEL_44;
          }
        }
        else
        {
          if ( !v37 )
          {
            if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v40 >> 5) & 7)] >> *v40) & 1 )
            {
              v41 = 1LL;
              v17 = *v40;
              v42 = 1;
              pwc = v17;
              v39 = 1;
              goto LABEL_43;
            }
            if ( !mbsinit(&ps) )
              goto LABEL_108;
            v37 = 1;
          }
          v23 = __ctype_get_mb_cur_max();
          v24 = v40;
          sub_407340(v40, v23);
          v25 = sub_408FC0(&pwc, v24);
          v41 = v25;
          if ( v25 == -1 )
          {
            v41 = 1LL;
            v42 = 0;
          }
          else
          {
            if ( v25 != -2 )
            {
              if ( !v25 )
              {
                v41 = 1LL;
                if ( *v40 )
                  goto LABEL_109;
                if ( pwc )
                  goto LABEL_110;
              }
              v42 = 1;
              if ( mbsinit(&ps) )
                v37 = 0;
              v39 = 1;
              goto LABEL_43;
            }
            v27 = strlen(v40);
            v42 = 0;
            v41 = v27;
          }
        }
LABEL_44:
        v40 += v41;
        v47 += v48;
        v39 = 0;
        v46 = 0;
        continue;
      }
      break;
    }
    if ( v39 )
    {
      v21 = pwc;
      if ( v42 )
        goto LABEL_58;
      goto LABEL_59;
    }
    if ( !v37 )
    {
      if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v40 >> 5) & 7)] >> *v40) & 1 )
      {
        v41 = 1LL;
        v21 = *v40;
        v42 = 1;
        pwc = v21;
        v39 = 1;
        goto LABEL_58;
      }
      if ( !mbsinit(&ps) )
        goto LABEL_108;
    }
    v28 = __ctype_get_mb_cur_max();
    v29 = v40;
    sub_407340(v40, v28);
    v30 = sub_408FC0(&pwc, v29);
    v41 = v30;
    if ( v30 == -1 )
    {
      v41 = 1LL;
      v21 = pwc;
      v42 = 0;
      v39 = 1;
      goto LABEL_59;
    }
    if ( v30 == -2 )
    {
      v34 = strlen(v40);
      v42 = 0;
      v21 = pwc;
      v41 = v34;
      v39 = 1;
      goto LABEL_59;
    }
    if ( v30 )
    {
      v21 = pwc;
      goto LABEL_90;
    }
    v41 = 1LL;
    if ( *v40 )
      goto LABEL_109;
    v21 = pwc;
    if ( pwc )
LABEL_104:
      sub_404800();
LABEL_90:
    v42 = 1;
    mbsinit(&ps);
    v39 = 1;
LABEL_58:
    if ( v21 )
    {
LABEL_59:
      if ( !v42 || !iswalnum(v21) )
        break;
LABEL_62:
      v40 = (char *)v5;
      ps = 0LL;
      v39 = 0;
      if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)v5 >> 5) & 7)] >> *(_BYTE *)v5) & 1 )
      {
        v41 = 1LL;
        v22 = *(_BYTE *)v5;
        v42 = 1;
        pwc = v22;
        v39 = 1;
        goto LABEL_64;
      }
      if ( mbsinit(&ps) )
      {
        v31 = __ctype_get_mb_cur_max();
        v32 = v40;
        sub_407340(v40, v31);
        v33 = sub_408FC0(&pwc, v32);
        v41 = v33;
        if ( v33 == -1 )
        {
          v41 = 1LL;
          goto LABEL_65;
        }
        if ( v33 == -2 )
        {
          v41 = strlen(v40);
          goto LABEL_65;
        }
        if ( !v33 )
        {
          v41 = 1LL;
          if ( !*v40 )
          {
            if ( pwc )
              goto LABEL_104;
            goto LABEL_99;
          }
LABEL_109:
          __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
        }
LABEL_99:
        v42 = 1;
        mbsinit(&ps);
        v39 = 1;
LABEL_64:
        if ( pwc )
        {
LABEL_65:
          v2 = (char *)(v5 + v41);
          continue;
        }
        goto LABEL_11;
      }
LABEL_108:
      __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
    }
    break;
  }
  if ( !(_BYTE)v8 )
    goto LABEL_62;
LABEL_12:
  free(s);
  return (unsigned int)v8;
}

char *__fastcall sub_405150(char *s2, char *s)
{
  char *v2; // rbx@1
  char *v3; // r13@1
  const char *v4; // rax@1
  const char *v5; // r14@1
  char *v6; // r15@3
  char *v7; // r12@3
  char *v8; // r14@3
  char *v9; // rsi@5
  char *v10; // rbp@5
  size_t v12; // rbx@16
  size_t v13; // rax@16
  char *v14; // rax@16
  char *v15; // rbx@16
  char *v16; // rax@20
  size_t v17; // rax@20
  size_t v18; // r15@20
  void *v19; // rax@20
  char *v20; // rax@20
  char *v21; // r15@20
  char *ptr; // ST08_8@20
  char *v23; // rax@20

  v2 = s;
  v3 = dcgettext(0LL, s2, 5);
  LODWORD(v4) = sub_409270(0LL);
  v5 = v4;
  if ( !sub_409150(v4, "UTF-8") )
  {
    if ( s )
    {
      v6 = s;
      v7 = s;
      v8 = 0LL;
    }
    else
    {
      v6 = 0LL;
      v7 = s2;
      v8 = 0LL;
    }
LABEL_4:
    if ( !strcmp(v3, s2) )
      return v7;
    v9 = s2;
    v10 = 0LL;
    if ( (unsigned __int8)sub_404820(v3, (__int64)s2) )
      goto LABEL_10;
    goto LABEL_6;
  }
  LODWORD(v16) = sub_4081C0(s, "UTF-8", v5);
  v7 = v16;
  v17 = strlen(v5);
  v18 = v17;
  LODWORD(v19) = sub_407EE0(v17 + 11, "UTF-8");
  v20 = (char *)memcpy(v19, v5, v18);
  v21 = &v20[v18];
  *(_QWORD *)v21 = 5499825612410597167LL;
  *((_WORD *)v21 + 4) = 21577;
  v21[10] = 0;
  ptr = v20;
  LODWORD(v23) = sub_4081C0(s, "UTF-8", v20);
  v8 = v23;
  free(ptr);
  if ( !v8 )
  {
    if ( v7 )
      goto LABEL_23;
    goto LABEL_32;
  }
  if ( strchr(v8, 63) )
  {
    free(v8);
    if ( v7 )
    {
LABEL_23:
      if ( !strcmp(v3, s2) )
        return v7;
      v6 = 0LL;
      v8 = 0LL;
      goto LABEL_25;
    }
LABEL_32:
    v7 = s2;
    v6 = 0LL;
    v2 = 0LL;
    v8 = 0LL;
    goto LABEL_4;
  }
  if ( !v7 )
  {
    v6 = v8;
    v2 = 0LL;
    v7 = v8;
    goto LABEL_4;
  }
  v6 = v8;
  if ( strcmp(v3, s2) )
  {
LABEL_25:
    v9 = s2;
    if ( (unsigned __int8)sub_404820(v3, (__int64)s2) )
    {
      v10 = v7;
      goto LABEL_9;
    }
    v2 = v7;
    v10 = v7;
LABEL_6:
    if ( !v2 || (v9 = v2, !(unsigned __int8)sub_404820(v3, (__int64)v2)) )
    {
      if ( !v6 || (v9 = v6, !(unsigned __int8)sub_404820(v3, (__int64)v6)) )
      {
        v12 = strlen(v3);
        v13 = strlen(v7);
        LODWORD(v14) = sub_407EE0(v12 + v13 + 4, v9);
        v15 = v14;
        __sprintf_chk(v14, 1LL, -1LL, "%s (%s)", v3, v7);
        if ( v10 )
          free(v10);
        v7 = v15;
        if ( !v8 )
          return v7;
LABEL_11:
        free(v8);
        return v7;
      }
    }
    if ( !v10 )
    {
LABEL_10:
      v7 = v3;
      if ( !v8 )
        return v7;
      goto LABEL_11;
    }
LABEL_9:
    free(v10);
    goto LABEL_10;
  }
  if ( v7 != v8 )
    free(v8);
  return v7;
}

const char *__fastcall sub_4053D0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  const char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  LODWORD(v4) = sub_409270(0LL);
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
    v6 = "*iter->cur.ptr == '\\0'" + 21;
  return v6;
}

unsigned __int64 __fastcall sub_4054D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  const char *v66; // rax@277
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
  const char *s2; // [sp+50h] [bp-78h]@2
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
        s2 = "*iter->cur.ptr == '\\0'" + 21;
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
        a8 = sub_4053D0("`", v11);
        v58 = sub_4053D0("'", v11);
        v14 = v67;
        a9 = (char *)v58;
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
      s2 = "*iter->cur.ptr == '\\0'" + 21;
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
        s2 = "*iter->cur.ptr == '\\0'" + 21;
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
        s2 = "*iter->cur.ptr == '\\0'" + 21;
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
            return sub_4054D0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_4054D0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "*iter->cur.ptr == '\\0'" + 21;
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
                return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
          return sub_4054D0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_4054D0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_408FC0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_4054D0((__int64)v9, v10, s);
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
      return sub_4054D0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_4054D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  const char *v66; // rax@277
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
  const char *s2; // [sp+50h] [bp-78h]@2
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
        s2 = "*iter->cur.ptr == '\\0'" + 21;
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
        a8 = sub_4053D0("`", v11);
        v58 = sub_4053D0("'", v11);
        v14 = v67;
        a9 = (char *)v58;
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
      s2 = "*iter->cur.ptr == '\\0'" + 21;
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
        s2 = "*iter->cur.ptr == '\\0'" + 21;
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
        s2 = "*iter->cur.ptr == '\\0'" + 21;
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
            return sub_4054D0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_4054D0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "*iter->cur.ptr == '\\0'" + 21;
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
                return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
            return sub_4054D0((__int64)v9, v10, s);
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
              return sub_4054D0((__int64)v9, v10, s);
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
          return sub_4054D0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_4054D0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_408FC0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_4054D0((__int64)v9, v10, s);
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
      return sub_4054D0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_406700(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@4
  __int128 *v10; // rax@5
  signed __int64 v11; // rbx@7
  _BYTE *v12; // r12@7
  unsigned __int64 v13; // ST30_8@7
  unsigned __int64 v14; // rax@7
  unsigned __int64 v15; // rsi@8
  __int64 v16; // ST30_8@9
  _BYTE *v17; // rax@10
  int v18; // er8@10
  __int128 *v20; // rax@12
  char *v21; // [sp+8h] [bp-50h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v21 = a2;
  v6 = __errno_location();
  v7 = off_613298;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6132B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408130();
    v9 = 16LL * (a1 + 1);
    if ( off_613298 == &xmmword_6132A0 )
    {
      LODWORD(v20) = sub_407F40(0LL, v9);
      v7 = v20;
      off_613298 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6132A0);
    }
    else
    {
      LODWORD(v10) = sub_407F40(off_613298, v9);
      off_613298 = v10;
      v7 = v10;
    }
    memset(&v7[dword_6132B0], 0, 16LL * (a1 + 1 - dword_6132B0));
    dword_6132B0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_4054D0(
          v12,
          *(_QWORD *)v11,
          v21,
          v4,
          *(_DWORD *)v5,
          v23,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_613340 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_407EE0(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_4054D0(v17, v15, v21, v4, v18, v23, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_406700(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@4
  __int128 *v10; // rax@5
  signed __int64 v11; // rbx@7
  _BYTE *v12; // r12@7
  unsigned __int64 v13; // ST30_8@7
  unsigned __int64 v14; // rax@7
  unsigned __int64 v15; // rsi@8
  __int64 v16; // ST30_8@9
  _BYTE *v17; // rax@10
  int v18; // er8@10
  __int128 *v20; // rax@12
  char *v21; // [sp+8h] [bp-50h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v21 = a2;
  v6 = __errno_location();
  v7 = off_613298;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_6132B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408130();
    v9 = 16LL * (a1 + 1);
    if ( off_613298 == &xmmword_6132A0 )
    {
      LODWORD(v20) = sub_407F40(0LL, v9);
      v7 = v20;
      off_613298 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_6132A0);
    }
    else
    {
      LODWORD(v10) = sub_407F40(off_613298, v9);
      off_613298 = v10;
      v7 = v10;
    }
    memset(&v7[dword_6132B0], 0, 16LL * (a1 + 1 - dword_6132B0));
    dword_6132B0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_4054D0(
          v12,
          *(_QWORD *)v11,
          v21,
          v4,
          *(_DWORD *)v5,
          v23,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_613340 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_407EE0(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_4054D0(v17, v15, v21, v4, v18, v23, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_406D20(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_613470;
  v4 = _mm_load_si128((const __m128i *)&xmmword_613440);
  v5 = _mm_load_si128((const __m128i *)&xmmword_613450);
  v6 = _mm_load_si128((const __m128i *)&xmmword_613460);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_406700(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_406DA0(char *a1)
{
  return sub_406D20(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_406F50(char *a1)
{
  return sub_406700(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_613260);
}

void __fastcall sub_406F70(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
}

unsigned __int64 __fastcall sub_406F80(_IO_FILE *a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13@1
  _IO_FILE *v5; // rbp@1
  _BYTE *v6; // rdx@2
  unsigned __int64 v7; // rcx@3
  char *v8; // rax@4
  unsigned __int64 v9; // rbx@5
  __int64 v10; // rax@6
  int v11; // eax@8
  _IO_FILE *v12; // r15@9
  signed __int64 v13; // r14@9
  unsigned __int64 v14; // r12@9
  char *v15; // rdx@10
  __int64 v16; // rax@11
  char *v17; // rax@12
  _IO_FILE *v18; // rax@20
  __int128 v20; // [sp+0h] [bp-58h]@1
  __int128 v21; // [sp+10h] [bp-48h]@1

  v4 = a4;
  v5 = a1;
  v20 = 0LL;
  v21 = 0LL;
  if ( !a3 )
    goto LABEL_7;
  v6 = &a2[a3];
  a1 = (_IO_FILE *)1;
  do
  {
    v7 = *a2++;
    *(_QWORD *)((char *)&v20 + ((v7 >> 3) & 0x18)) |= 1LL << v7;
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
    v10 = *((_QWORD *)&v20 + ((unsigned __int64)(signed int)v9 >> 6));
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
  v12 = *(_IO_FILE **)(v4 + 8);
  v13 = *(_QWORD *)v4;
  v14 = 0LL;
  while ( (v9 & 0x80000000) == 0LL || v14 )
  {
    if ( v14 == v13 )
    {
      if ( v12 )
      {
        if ( v14 > 0x5555555555555553LL )
          goto LABEL_27;
        v13 = v14 + (v14 >> 1) + 1;
      }
      else if ( v14 )
      {
        if ( (v14 & 0x8000000000000000LL) != 0LL )
LABEL_27:
          sub_408130(a1);
      }
      else
      {
        v13 = 128LL;
      }
      a1 = v12;
      LODWORD(v18) = sub_407F40(v12, v13);
      v12 = v18;
      v15 = (char *)v18 + v14;
      if ( (v9 & 0x80000000) != 0LL )
      {
LABEL_21:
        *v15 = 0;
        *(_QWORD *)(v4 + 8) = v12;
        *(_QWORD *)v4 = v13;
        return v14;
      }
    }
    else
    {
      v15 = (char *)v12 + v14;
      if ( (v9 & 0x80000000) != 0LL )
        goto LABEL_21;
    }
    v16 = *((_QWORD *)&v20 + ((unsigned __int64)(signed int)v9 >> 6));
    if ( _bittest64(&v16, v9) )
      goto LABEL_21;
    *v15 = v9;
    ++v14;
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

__int64 __fastcall sub_4072E0(int fd, void *buf, size_t n)
{
  unsigned __int64 v3; // rbx@1
  ssize_t v4; // rbp@2
  int v5; // eax@3

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

signed __int64 __fastcall sub_407340(__int64 a1, signed __int64 a2)
{
  signed __int64 v2; // rbx@1
  __int64 v3; // rax@1
  signed __int64 v4; // rsi@1
  bool v5; // zf@1
  signed __int64 result; // rax@1

  v2 = a2;
  LODWORD(v3) = sub_409040(a1, 0LL, a2);
  v4 = v3 - a1 + 1;
  v5 = v3 == 0;
  result = v2;
  if ( !v5 )
    result = v4;
  return result;
}

void __noreturn sub_407380()
{
  __assert_fail("iter->cur.wc == 0", "lib/mbiter.h", 0xAAu, "mbiter_multi_next");
}

char *__usercall sub_4073A0@<rax>(const char *a1@<rdi>, int a2@<esi>, char *a3@<r13>)
{
  char *v3; // rax@1
  char *v4; // r12@2
  char *v5; // rbp@4
  int v6; // edx@5
  unsigned int v7; // eax@5
  char *v8; // rbx@6
  signed int v9; // er14@10
  wint_t v10; // eax@17
  char *v11; // r15@17
  unsigned __int64 v12; // rbp@17
  int v13; // eax@22
  __int64 v15; // rax@30
  signed __int64 v16; // rbx@30
  int v17; // eax@39
  __int64 v18; // rbx@44
  const char *v19; // r13@45
  const unsigned __int16 *v20; // rax@45
  size_t v21; // rax@48
  char *v22; // rbx@49
  const unsigned __int16 *v23; // rdx@50
  char *v24; // rbx@57
  int v25; // edx@58
  unsigned int v26; // eax@58
  char *v27; // r14@59
  bool v28; // zf@59
  wint_t v29; // eax@66
  __int64 v30; // rax@70
  size_t v31; // rax@81
  unsigned __int64 v32; // [sp+0h] [bp-88h]@10
  unsigned __int64 v33; // [sp+0h] [bp-88h]@63
  char v34; // [sp+8h] [bp-80h]@6
  char v35; // [sp+8h] [bp-80h]@59
  mbstate_t ps; // [sp+Ch] [bp-7Ch]@6
  char v37; // [sp+14h] [bp-74h]@6
  char *v38; // [sp+18h] [bp-70h]@4
  __int64 v39; // [sp+20h] [bp-68h]@17
  char v40; // [sp+28h] [bp-60h]@12
  wint_t wc; // [sp+2Ch] [bp-5Ch]@13

  v3 = strdup(a1);
  if ( !v3 )
    sub_408130(a1);
  v4 = v3;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    if ( !a2 )
      goto LABEL_91;
    v18 = (unsigned __int8)*v4;
    if ( (_BYTE)v18 )
    {
      v19 = v4;
      v20 = *__ctype_b_loc();
      do
      {
        if ( !(HIBYTE(v20[v18]) & 0x20) )
          break;
        v18 = *++v19;
      }
      while ( (_BYTE)v18 );
    }
    else
    {
      v19 = v4;
    }
    v21 = strlen(v19);
    memmove(v4, v19, v21 + 1);
    if ( a2 != 1 )
    {
LABEL_91:
      v22 = &v4[strlen(v4) - 1];
      if ( v4 <= v22 )
      {
        v23 = *__ctype_b_loc();
        do
        {
          if ( !(HIBYTE(v23[(unsigned __int8)*v22]) & 0x20) )
            break;
          *v22-- = 0;
        }
        while ( v4 <= v22 );
      }
    }
    return v4;
  }
  if ( !a2 )
    goto LABEL_4;
  v38 = v4;
  v24 = v4;
  do
  {
    v25 = *(_DWORD *)v24;
    v24 += 4;
    v26 = ~v25 & (v25 - 16843009) & 0x80808080;
  }
  while ( !v26 );
  v35 = 0;
  v27 = v4;
  v28 = (unsigned __int16)(v26 & 0x8080) == 0;
  v37 = 0;
  ps = 0LL;
  if ( !(v26 & 0x8080) )
    LOBYTE(v26) = v26 >> 16;
  if ( v28 )
    v24 += 2;
  v33 = (unsigned __int64)&v24[-__CFADD__((_BYTE)v26, (_BYTE)v26) - 3];
  if ( v33 <= (unsigned __int64)v4 )
    goto LABEL_81;
  while ( !v35 )
  {
    if ( !(((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v27 >> 5) & 7)] >> *v27) & 1) )
    {
      if ( !mbsinit(&ps) )
LABEL_86:
        __assert_fail("mbsinit (&iter->state)", "lib/mbiter.h", 0x8Eu, "mbiter_multi_next");
      v35 = 1;
      break;
    }
    v39 = 1LL;
    v29 = *v27;
    v40 = 1;
    v27 = v38;
    wc = v29;
    v37 = 1;
LABEL_67:
    if ( iswspace(wc) )
    {
      v27 += v39;
      v37 = 0;
      v38 = v27;
      if ( (unsigned __int64)v27 < v33 )
        continue;
    }
    goto LABEL_81;
  }
  v30 = sub_408FC0((wchar_t *)&wc, v27);
  v39 = v30;
  if ( v30 == -1 )
  {
    v39 = 1LL;
    v27 = v38;
    v40 = 0;
    v37 = 1;
    goto LABEL_81;
  }
  v27 = v38;
  if ( v30 != -2 )
  {
    if ( !v30 )
    {
      v39 = 1LL;
      if ( *v38 )
LABEL_87:
        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbiter.h", 0xA9u, "mbiter_multi_next");
      if ( wc )
LABEL_88:
        sub_407380();
    }
    v40 = 1;
    if ( mbsinit(&ps) )
      v35 = 0;
    v37 = 1;
    goto LABEL_67;
  }
  v40 = 0;
  v37 = 1;
  v39 = v33 - (_QWORD)v38;
LABEL_81:
  v31 = strlen(v27);
  memmove(v4, v27, v31 + 1);
  if ( a2 == 1 )
    return v4;
LABEL_4:
  v38 = v4;
  v5 = v4;
  do
  {
    v6 = *(_DWORD *)v5;
    v5 += 4;
    v7 = ~v6 & (v6 - 16843009) & 0x80808080;
  }
  while ( !v7 );
  v34 = 0;
  v8 = v4;
  v37 = 0;
  ps = 0LL;
  if ( !((unsigned __int16)~(_WORD)v6 & (unsigned __int16)(v6 - 257) & 0x8080) )
    LOBYTE(v7) = v7 >> 16;
  if ( !((unsigned __int16)~(_WORD)v6 & (unsigned __int16)(v6 - 257) & 0x8080) )
    v5 += 2;
  v9 = 0;
  v32 = (unsigned __int64)&v5[-__CFADD__((_BYTE)v7, (_BYTE)v7) - 3];
  if ( v32 > (unsigned __int64)v4 )
  {
    while ( 1 )
    {
      if ( !v34 )
      {
        if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*v8 >> 5) & 7)] >> *v8) & 1 )
        {
          v39 = 1LL;
          v10 = *v8;
          v11 = v38;
          v12 = v32;
          v40 = 1;
          wc = v10;
          v8 = v38 + 1;
          goto LABEL_18;
        }
        if ( !mbsinit(&ps) )
          goto LABEL_86;
        v34 = 1;
      }
      v15 = sub_408FC0((wchar_t *)&wc, v8);
      v16 = v15;
      v39 = v15;
      if ( v15 == -1 )
      {
        v11 = v38;
        v12 = v32;
        v40 = 0;
        v39 = 1LL;
        v8 = v38 + 1;
      }
      else
      {
        v11 = v38;
        if ( v15 == -2 )
        {
          v8 = (char *)v32;
          v40 = 0;
          v12 = v32;
          v39 = v32 - (_QWORD)v38;
        }
        else
        {
          if ( !v15 )
          {
            v39 = 1LL;
            if ( *v38 )
              goto LABEL_87;
            if ( wc )
              goto LABEL_88;
            v16 = 1LL;
          }
          v40 = 1;
          v8 = &v38[v16];
          v12 = v32;
          if ( mbsinit(&ps) )
            v34 = 0;
        }
      }
LABEL_18:
      v37 = 1;
      if ( !v9 )
      {
        v9 = 1;
        if ( v40 )
          v9 = iswspace(wc) == 0;
        goto LABEL_14;
      }
      if ( v9 == 1 )
      {
        if ( v40 )
        {
          v17 = iswspace(wc);
          if ( v17 )
          {
            a3 = v11;
            if ( v17 )
              v9 = 2;
          }
        }
        goto LABEL_14;
      }
      if ( v9 == 2 && v40 )
      {
        v13 = iswspace(wc);
        v38 = v8;
        v37 = 0;
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
        v38 = v8;
        v37 = 0;
        if ( (unsigned __int64)v8 >= v12 )
          goto LABEL_25;
      }
    }
  }
  return v4;
}

int __fastcall sub_407940(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // rax@5
  __int64 v11; // r8@5
  __int64 v12; // r13@5
  __int64 v13; // r12@5
  __int64 v14; // r15@5
  __int64 v15; // ST40_8@5
  __int64 v16; // r14@5
  __int64 v17; // rbx@5
  char *v18; // rax@5
  int result; // eax@6
  const char *v20; // rsi@7
  __int64 v21; // r8@7
  __int64 v22; // r13@7
  __int64 v23; // r12@7
  __int64 v24; // ST48_8@7
  __int64 v25; // r15@7
  __int64 v26; // r14@7
  __int64 v27; // ST40_8@7
  __int64 v28; // ST30_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r12@10
  __int64 v32; // rbx@10
  char *v33; // rax@10
  __int64 v34; // r13@11
  __int64 v35; // r12@11
  __int64 v36; // rbx@11
  char *v37; // rax@11
  __int64 v38; // r14@12
  __int64 v39; // r13@12
  __int64 v40; // r12@12
  __int64 v41; // rbx@12
  char *v42; // rax@12
  __int64 v43; // r15@14
  __int64 v44; // r13@14
  __int64 v45; // r12@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // ST30_8@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r13@17
  __int64 v54; // r12@17
  __int64 v55; // r15@17
  __int64 v56; // r14@17
  __int64 v57; // r8@17
  __int64 v58; // ST38_8@17
  __int64 v59; // r8@18
  __int64 v60; // r13@18
  __int64 v61; // r12@18
  __int64 v62; // ST48_8@18
  __int64 v63; // r15@18
  __int64 v64; // r14@18
  __int64 v65; // ST40_8@18
  __int64 v66; // ST30_8@18

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
    case 8LL:
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 48);
      v13 = *(_QWORD *)(v7 + 40);
      v14 = *(_QWORD *)(v7 + 32);
      v15 = *(_QWORD *)(v7 + 56);
      v16 = *(_QWORD *)(v7 + 24);
      v17 = *(_QWORD *)v7;
      v18 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v21 = *(_QWORD *)(v7 + 8);
      v22 = *(_QWORD *)(v7 + 48);
      v23 = *(_QWORD *)(v7 + 40);
      v24 = *(_QWORD *)(v7 + 64);
      v25 = *(_QWORD *)(v7 + 32);
      v26 = *(_QWORD *)(v7 + 24);
      v27 = *(_QWORD *)(v7 + 56);
      v28 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29);
    case 2LL:
      v31 = *(_QWORD *)(v7 + 8);
      v32 = *(_QWORD *)v7;
      v33 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v33, v32);
    case 3LL:
      v34 = *(_QWORD *)(v7 + 16);
      v35 = *(_QWORD *)(v7 + 8);
      v36 = *(_QWORD *)v7;
      v37 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v37, v36);
    case 4LL:
      v38 = *(_QWORD *)(v7 + 24);
      v39 = *(_QWORD *)(v7 + 16);
      v40 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v43 = *(_QWORD *)(v7 + 32);
      v38 = *(_QWORD *)(v7 + 24);
      v44 = *(_QWORD *)(v7 + 16);
      v45 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v42, v41);
      return v38;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v49 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v53 = *(_QWORD *)(v7 + 48);
      v54 = *(_QWORD *)(v7 + 40);
      v55 = *(_QWORD *)(v7 + 32);
      v56 = *(_QWORD *)(v7 + 24);
      v57 = *(_QWORD *)(v7 + 8);
      v58 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = *(_QWORD *)(v7 + 8);
      v60 = *(_QWORD *)(v7 + 48);
      v61 = *(_QWORD *)(v7 + 40);
      v62 = *(_QWORD *)(v7 + 64);
      v63 = *(_QWORD *)(v7 + 32);
      v64 = *(_QWORD *)(v7 + 24);
      v65 = *(_QWORD *)(v7 + 56);
      v66 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17);
      break;
  }
  return result;
}

int __fastcall sub_407940(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // rax@5
  __int64 v11; // r8@5
  __int64 v12; // r13@5
  __int64 v13; // r12@5
  __int64 v14; // r15@5
  __int64 v15; // ST40_8@5
  __int64 v16; // r14@5
  __int64 v17; // rbx@5
  char *v18; // rax@5
  int result; // eax@6
  const char *v20; // rsi@7
  __int64 v21; // r8@7
  __int64 v22; // r13@7
  __int64 v23; // r12@7
  __int64 v24; // ST48_8@7
  __int64 v25; // r15@7
  __int64 v26; // r14@7
  __int64 v27; // ST40_8@7
  __int64 v28; // ST30_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r12@10
  __int64 v32; // rbx@10
  char *v33; // rax@10
  __int64 v34; // r13@11
  __int64 v35; // r12@11
  __int64 v36; // rbx@11
  char *v37; // rax@11
  __int64 v38; // r14@12
  __int64 v39; // r13@12
  __int64 v40; // r12@12
  __int64 v41; // rbx@12
  char *v42; // rax@12
  __int64 v43; // r15@14
  __int64 v44; // r13@14
  __int64 v45; // r12@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // ST30_8@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r13@17
  __int64 v54; // r12@17
  __int64 v55; // r15@17
  __int64 v56; // r14@17
  __int64 v57; // r8@17
  __int64 v58; // ST38_8@17
  __int64 v59; // r8@18
  __int64 v60; // r13@18
  __int64 v61; // r12@18
  __int64 v62; // ST48_8@18
  __int64 v63; // r15@18
  __int64 v64; // r14@18
  __int64 v65; // ST40_8@18
  __int64 v66; // ST30_8@18

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
    case 8LL:
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 48);
      v13 = *(_QWORD *)(v7 + 40);
      v14 = *(_QWORD *)(v7 + 32);
      v15 = *(_QWORD *)(v7 + 56);
      v16 = *(_QWORD *)(v7 + 24);
      v17 = *(_QWORD *)v7;
      v18 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v21 = *(_QWORD *)(v7 + 8);
      v22 = *(_QWORD *)(v7 + 48);
      v23 = *(_QWORD *)(v7 + 40);
      v24 = *(_QWORD *)(v7 + 64);
      v25 = *(_QWORD *)(v7 + 32);
      v26 = *(_QWORD *)(v7 + 24);
      v27 = *(_QWORD *)(v7 + 56);
      v28 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29);
    case 2LL:
      v31 = *(_QWORD *)(v7 + 8);
      v32 = *(_QWORD *)v7;
      v33 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v33, v32);
    case 3LL:
      v34 = *(_QWORD *)(v7 + 16);
      v35 = *(_QWORD *)(v7 + 8);
      v36 = *(_QWORD *)v7;
      v37 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v37, v36);
    case 4LL:
      v38 = *(_QWORD *)(v7 + 24);
      v39 = *(_QWORD *)(v7 + 16);
      v40 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v43 = *(_QWORD *)(v7 + 32);
      v38 = *(_QWORD *)(v7 + 24);
      v44 = *(_QWORD *)(v7 + 16);
      v45 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v42, v41);
      return v38;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v49 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v53 = *(_QWORD *)(v7 + 48);
      v54 = *(_QWORD *)(v7 + 40);
      v55 = *(_QWORD *)(v7 + 32);
      v56 = *(_QWORD *)(v7 + 24);
      v57 = *(_QWORD *)(v7 + 8);
      v58 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = *(_QWORD *)(v7 + 8);
      v60 = *(_QWORD *)(v7 + 48);
      v61 = *(_QWORD *)(v7 + 40);
      v62 = *(_QWORD *)(v7 + 64);
      v63 = *(_QWORD *)(v7 + 32);
      v64 = *(_QWORD *)(v7 + 24);
      v65 = *(_QWORD *)(v7 + 56);
      v66 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17);
      break;
  }
  return result;
}

int __fastcall sub_407DA0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_407940(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_407940(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_407EE0(size_t a1)
{
  void *result; // rax@1

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
        sub_408130(a1);
    }
  }
  return result;
}

void *__fastcall sub_4080E0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_407EE0(a2);
  return memcpy(v2, a1, a2);
}

void __noreturn sub_408130()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_4081C0(char *a1, char *a2, char *a3)
{
  __int64 v3; // rbx@1

  v3 = sub_40B710(a1, a2, a3);
  if ( !v3 && *__errno_location() == 12 )
    sub_408130();
  return v3;
}

__int64 __fastcall sub_4081F0(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_4082D0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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
  FILE *v34; // rdi@64
  char **v35; // rbx@64
  _BYTE *v36; // rbp@64
  signed __int64 v37; // r12@64
  char *v38; // r8@67
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
        __fprintf_chk(stderr, 1LL, v25, v24);
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
        __fprintf_chk(stderr, 1LL, v27, v26);
        v9 = *(const char **)(a7 + 32);
      }
      else
      {
        flockfile(stderr);
        v31 = *(_QWORD *)(a7 + 32);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32);
        v34 = stderr;
        v35 = v42;
        v36 = ptr;
        v37 = (signed __int64)&ptr[v13 + 1];
        do
        {
          if ( *v36 )
          {
            v38 = *v35;
            __fprintf_chk(v34, 1LL, " '%s%s'", a9);
            v34 = stderr;
          }
          ++v36;
          v35 += 4;
        }
        while ( (_BYTE *)v37 != v36 );
        fputc(10, v34);
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
        __fprintf_chk(stderr, 1LL, v30, v29);
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
          __fprintf_chk(stderr, 1LL, v41, v40);
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

__int64 __fastcall sub_4088F0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
  __int64 v49; // rbp@94
  char *v50; // rax@94
  __int64 v51; // rbp@98
  char *v52; // rax@98
  char **v53; // [sp+8h] [bp-60h]@1
  _DWORD *v54; // [sp+10h] [bp-58h]@1
  char v55; // [sp+1Ch] [bp-4Ch]@32
  _BYTE *v56; // [sp+20h] [bp-48h]@32
  signed __int64 v57; // [sp+28h] [bp-40h]@32

  v53 = a4;
  v54 = a5;
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
        sub_4081F0(a2, a7);
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
        sub_4081F0((__int64)v11, a7);
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
        if ( v53 )
        {
          if ( v36 == 45 )
          {
            *(_QWORD *)(a7 + 32) = v21 + 2;
            v40 = sub_4082D0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_4082D0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
  v56 = v13;
  *(_QWORD *)(a7 + 32) = v13 + 1;
  v26 = *v13;
  v57 = (signed __int64)(v13 + 1);
  v55 = *v13;
  v27 = strchr(v12, v26);
  v28 = v57;
  if ( !v56[1] )
    ++*(_DWORD *)a7;
  if ( (unsigned __int8)(v55 - 58) > 1u && v27 )
  {
    v29 = v27[1];
    if ( *v27 == 87 && v53 && v29 == 59 )
    {
      if ( v56[1] )
      {
LABEL_71:
        *(_QWORD *)(a7 + 32) = v28;
        *(_QWORD *)(a7 + 16) = 0LL;
        v40 = sub_4082D0(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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
        v51 = *v11;
        v52 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v52, v51);
      }
      *(_DWORD *)(a7 + 8) = v26;
      v26 = 5 * (*v12 != 58) + 58;
    }
    else if ( v29 == 58 )
    {
      v43 = v56[1];
      if ( v27[2] == 58 )
      {
        if ( v43 )
        {
          *(_QWORD *)(a7 + 16) = v57;
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
          *(_QWORD *)(a7 + 16) = v57;
          *(_DWORD *)a7 = v44 + 1;
        }
        else if ( v10 == (_DWORD)v44 )
        {
          if ( v8 )
          {
            v49 = *v11;
            v50 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v50, v49);
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
      __fprintf_chk(stderr, 1LL, v48, v47);
    }
    *(_DWORD *)(a7 + 8) = v26;
    v26 = 63;
  }
  return (unsigned int)v26;
}

__int64 __fastcall sub_408EC0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_613480 = dword_6132BC;
  dword_613484 = dword_6132B8;
  result = sub_4088F0(a1, a2, a3, a4, a5, a6, (__int64)&dword_613480, a7);
  dword_6132BC = dword_613480;
  qword_613CC8 = qword_613490;
  dword_6132B4 = dword_613488;
  return result;
}

__int64 __fastcall sub_408F40(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_408EC0(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_408FC0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409210(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_409040(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax@8
  signed __int64 v4; // r9@9
  signed __int64 v5; // rcx@16
  _BYTE *v6; // rdi@16

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
  v4 = ((((signed __int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((signed __int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
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
    v5 = (signed __int64)(a1 + 1);
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
  __int64 result; // rax@1
  __int64 v3; // rdx@2
  int v4; // er8@4
  char v5; // al@4
  int v6; // er9@6
  char v7; // cl@6

  result = 0LL;
  if ( a1 != a2 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_BYTE *)(a1 + v3);
      v5 = *(_BYTE *)(a1 + v3);
      if ( (unsigned int)(v4 - 65) <= 0x19 )
      {
        LOBYTE(v4) = v4 + 32;
        v5 += 32;
      }
      v6 = *(_BYTE *)(a2 + v3);
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
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

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

const char *sub_409270()
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
                sub_40B800(v61);
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
            sub_40B800(v40);
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

signed __int64 __fastcall sub_409890(_BYTE *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  _BYTE *v4; // rbx@1
  unsigned __int64 v5; // rdi@1
  void *v6; // rsp@4
  unsigned __int64 v7; // rdi@4
  __int64 v8; // r8@5
  signed __int64 v9; // r9@5
  char v10; // al@6
  __int64 v11; // r8@12
  _BYTE *v12; // r9@12
  __int64 v13; // rax@12
  __int64 v14; // r10@16
  unsigned __int64 v16; // rax@18
  _QWORD *v17; // [sp+8h] [bp-28h]@18
  unsigned __int64 v18; // [sp+10h] [bp-20h]@18
  __int64 v19; // [sp+18h] [bp-18h]@18

  v4 = a1;
  v5 = 8 * a3;
  if ( a3 & 0x1000000000000000LL || a3 >> 61 != 0 )
    return 0LL;
  if ( v5 > 0xFAF )
  {
    v17 = a4;
    v18 = a3;
    v19 = a2;
    LODWORD(v16) = sub_40B920();
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
        if ( !(_BYTE)v11 )
          goto LABEL_17;
      }
      if ( a3 != ++v13 )
      {
        v11 = (v12++)[1];
        continue;
      }
      *a4 = v4;
    }
    break;
  }
LABEL_17:
  sub_40B990(v7, a2, a3, a4, v11, v12);
  return 1LL;
}

void __noreturn sub_409A20()
{
  __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
}

signed __int64 __fastcall sub_409A40(mbstate_t *a1, char *a2, char **a3)
{
  __int64 v3; // r9@1
  void *v4; // rsp@4
  unsigned __int64 v5; // r12@4
  unsigned __int64 v6; // rbx@6
  __int64 v7; // r13@6
  __int64 v8; // rcx@7
  unsigned int v9; // eax@8
  __int64 v10; // r8@8
  char v11; // al@9
  size_t v12; // rdx@10
  signed __int64 v13; // rax@16
  char *v14; // r14@16
  signed __int64 v15; // rax@16
  size_t v16; // rax@16
  __int64 v17; // r15@24
  signed __int64 v18; // r14@24
  bool v19; // cf@24
  bool v20; // zf@24
  char v21; // bl@25
  signed __int64 v22; // rax@30
  size_t v23; // rdx@31
  __int64 v24; // r15@35
  char *v25; // rax@35
  char v26; // al@35
  signed __int64 v27; // rax@38
  size_t v28; // rdx@39
  unsigned int v29; // eax@44
  unsigned int v30; // eax@49
  __int64 v31; // rdx@50
  unsigned __int64 v33; // rax@57
  void *v34; // rax@60
  size_t v35; // rax@62
  signed __int64 v36; // rax@65
  char *v37; // rbx@65
  signed __int64 v38; // rax@65
  size_t v39; // rax@65
  __int64 v40; // rbx@75
  __int64 v41; // r14@75
  unsigned int v42; // eax@81
  signed __int64 v43; // rax@86
  char *v44; // r15@86
  signed __int64 v45; // rax@86
  size_t v46; // rax@86
  size_t v47; // rax@95
  signed __int64 v48; // rax@100
  char *v49; // rbx@100
  signed __int64 v50; // rax@100
  size_t v51; // rax@100
  size_t v52; // rax@109
  size_t v53; // rax@113
  char **v54; // [sp+0h] [bp-110h]@1
  mbstate_t *ps; // [sp+8h] [bp-108h]@1
  unsigned __int64 v56; // [sp+10h] [bp-100h]@1
  mbstate_t *v57; // [sp+18h] [bp-F8h]@24
  char v58; // [sp+20h] [bp-F0h]@6
  __int64 v59; // [sp+24h] [bp-ECh]@6
  char v60; // [sp+2Ch] [bp-E4h]@6
  void *src; // [sp+30h] [bp-E0h]@6
  size_t n; // [sp+38h] [bp-D8h]@8
  char v63; // [sp+40h] [bp-D0h]@8
  unsigned int v64; // [sp+44h] [bp-CCh]@8
  __int64 v65; // [sp+48h] [bp-C8h]@10
  char v66; // [sp+60h] [bp-B0h]@35
  __int64 v67; // [sp+64h] [bp-ACh]@35
  char v68; // [sp+6Ch] [bp-A4h]@35
  char *s; // [sp+70h] [bp-A0h]@35
  size_t v70; // [sp+78h] [bp-98h]@44
  char v71; // [sp+80h] [bp-90h]@44
  unsigned int v72; // [sp+84h] [bp-8Ch]@44
  char v73; // [sp+A0h] [bp-70h]@35
  __int64 v74; // [sp+A4h] [bp-6Ch]@35
  char v75; // [sp+ACh] [bp-64h]@35
  void *s2; // [sp+B0h] [bp-60h]@35
  size_t v77; // [sp+B8h] [bp-58h]@39
  char v78; // [sp+C0h] [bp-50h]@37
  unsigned int v79; // [sp+C4h] [bp-4Ch]@49

  ps = a1;
  v54 = a3;
  v56 = sub_40BA20(a2);
  if ( (56 * v56 & 0x8000000000000000LL) != 0LL || 56 * (unsigned __int128)v56 >> 64 != 0 )
    return 0LL;
  if ( 56 * v56 > 0xFAF )
  {
    LODWORD(v33) = sub_40B920();
    v5 = v33;
  }
  else
  {
    v4 = alloca(56 * v56 + 24);
    v5 = (((unsigned __int64)&ps + 7) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( !v5 )
    return 0LL;
  src = a2;
  v6 = v5;
  v58 = 0;
  v60 = 0;
  v59 = 0LL;
  v7 = v5 + 48 * v56;
  while ( 1 )
  {
    if ( !v58 )
    {
      v8 = *(_BYTE *)src;
      if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)src >> 5) & 7)] >> v8) & 1 )
      {
        n = 1LL;
        v9 = *(_BYTE *)src;
        v63 = 1;
        v64 = v9;
        v10 = v9;
        v60 = 1;
        if ( !v9 )
          goto LABEL_24;
        goto LABEL_9;
      }
      if ( !mbsinit((const mbstate_t *)&v59) )
        goto LABEL_115;
      v58 = 1;
    }
    v13 = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    v15 = sub_407340((__int64)src, v13);
    a2 = v14;
    v16 = sub_408FC0((wchar_t *)&v64, v14, v15, (mbstate_t *)&v59);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v63 = 0;
      v60 = 1;
      goto LABEL_10;
    }
    if ( v16 != -2LL )
      break;
    v35 = strlen((const char *)src);
    v63 = 0;
    n = v35;
    v11 = 0;
    v60 = 1;
LABEL_10:
    a2 = (char *)src;
    v12 = n;
    if ( src == &v65 )
    {
      v34 = memcpy((void *)(v6 + 24), src, n);
      v12 = n;
      *(_QWORD *)v6 = v34;
      v11 = v63;
    }
    else
    {
      *(_QWORD *)v6 = src;
    }
    *(_QWORD *)(v6 + 8) = v12;
    *(_BYTE *)(v6 + 16) = v11;
    if ( v11 )
      *(_DWORD *)(v6 + 20) = v64;
    src = (char *)src + v12;
    v6 += 48LL;
    v60 = 0;
  }
  if ( !v16 )
  {
    n = 1LL;
    if ( *(_BYTE *)src )
      goto LABEL_114;
    if ( v64 )
      goto LABEL_116;
  }
  v63 = 1;
  if ( mbsinit((const mbstate_t *)&v59) )
    v58 = 0;
  v10 = v64;
  v60 = 1;
  if ( v64 )
  {
LABEL_9:
    v11 = 1;
    goto LABEL_10;
  }
LABEL_24:
  v17 = 0LL;
  v18 = v5 + 48;
  v19 = v56 < 2;
  v20 = v56 == 2;
  *(_QWORD *)(v7 + 8) = 1LL;
  v57 = (mbstate_t *)2;
  if ( !v19 && !v20 )
  {
    do
    {
      v21 = *(_BYTE *)(v18 + 16);
      while ( 1 )
      {
        v22 = v5 + 48 * v17;
        if ( v21 && *(_BYTE *)(v22 + 16) )
        {
          if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v22 + 20) )
            goto LABEL_33;
        }
        else
        {
          v23 = *(_QWORD *)(v18 + 8);
          if ( v23 == *(_QWORD *)(v22 + 8) )
          {
            a2 = *(char **)v22;
            if ( !memcmp(*(const void **)v18, *(const void **)v22, v23) )
            {
LABEL_33:
              *(_QWORD *)(v7 + 8LL * (_QWORD)v57) = (char *)v57 - ++v17;
              goto LABEL_34;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= *(_QWORD *)(v7 + 8 * v17);
      }
      *(_QWORD *)(v7 + 8LL * (_QWORD)v57) = v57;
LABEL_34:
      v57 = (mbstate_t *)((char *)v57 + 1);
      v18 += 48LL;
    }
    while ( (mbstate_t *)v56 != v57 );
  }
  v66 = 0;
  v24 = 0LL;
  v68 = 0;
  *v54 = 0LL;
  v25 = (char *)ps;
  ps = (mbstate_t *)&v74;
  v73 = 0;
  v67 = 0LL;
  v74 = 0LL;
  v75 = 0;
  v57 = (mbstate_t *)&v67;
  s = v25;
  s2 = v25;
  v26 = 0;
LABEL_36:
  if ( v26 )
  {
    if ( !v78 )
      goto LABEL_38;
    goto LABEL_50;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v73 )
      {
        v8 = *(_BYTE *)s2;
        if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)s2 >> 5) & 7)] >> v8) & 1 )
        {
          v77 = 1LL;
          v30 = *(_BYTE *)s2;
          v78 = 1;
          v79 = v30;
          v75 = 1;
          goto LABEL_50;
        }
        if ( !mbsinit(ps) )
          goto LABEL_115;
        v73 = 1;
      }
      v36 = __ctype_get_mb_cur_max();
      v37 = (char *)s2;
      v38 = sub_407340((__int64)s2, v36);
      a2 = v37;
      v39 = sub_408FC0((wchar_t *)&v79, v37, v38, (mbstate_t *)&v74);
      v77 = v39;
      if ( v39 == -1LL )
      {
        v77 = 1LL;
        v78 = 0;
        v75 = 1;
LABEL_38:
        v27 = v5 + 48 * v24;
        goto LABEL_39;
      }
      if ( v39 == -2LL )
      {
        v52 = strlen((const char *)s2);
        v78 = 0;
        v77 = v52;
        v75 = 1;
        goto LABEL_38;
      }
      if ( !v39 )
      {
        v77 = 1LL;
        if ( *(_BYTE *)s2 )
          goto LABEL_114;
        if ( v79 )
          goto LABEL_116;
      }
      v78 = 1;
      if ( mbsinit((const mbstate_t *)&v74) )
        v73 = 0;
      v75 = 1;
LABEL_50:
      v31 = v79;
      if ( !v79 )
        goto LABEL_55;
      v27 = v5 + 48 * v24;
      if ( *(_BYTE *)(v27 + 16) )
      {
        if ( *(_DWORD *)(v27 + 20) != v79 )
        {
LABEL_40:
          if ( !v24 )
            goto LABEL_41;
          goto LABEL_75;
        }
      }
      else
      {
LABEL_39:
        v28 = *(_QWORD *)(v27 + 8);
        if ( v28 != v77 )
          goto LABEL_40;
        a2 = (char *)s2;
        if ( memcmp(*(const void **)v27, s2, v28) )
        {
          if ( !v24 )
          {
LABEL_41:
            if ( v68 )
            {
              if ( v71 )
                goto LABEL_45;
              goto LABEL_46;
            }
            if ( !v66 )
            {
              if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
              {
                v70 = 1LL;
                v29 = *s;
                v71 = 1;
                v72 = v29;
                v68 = 1;
LABEL_45:
                if ( !v72 )
LABEL_118:
                  abort();
LABEL_46:
                s += v70;
                s2 = (char *)s2 + v77;
                v68 = 0;
                v75 = 0;
                continue;
              }
              if ( mbsinit(v57) )
              {
                v66 = 1;
                goto LABEL_100;
              }
LABEL_115:
              __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_100:
            v48 = __ctype_get_mb_cur_max();
            v49 = s;
            v50 = sub_407340((__int64)s, v48);
            a2 = v49;
            v51 = sub_408FC0((wchar_t *)&v72, v49, v50, (mbstate_t *)&v67);
            v70 = v51;
            if ( v51 == -1LL )
            {
              v70 = 1LL;
              v71 = 0;
              goto LABEL_46;
            }
            if ( v51 == -2LL )
            {
              v53 = strlen(s);
              v71 = 0;
              v70 = v53;
              goto LABEL_46;
            }
            if ( v51 )
            {
LABEL_105:
              v71 = 1;
              if ( mbsinit((const mbstate_t *)&v67) )
                v66 = 0;
              v68 = 1;
              goto LABEL_45;
            }
            v70 = 1LL;
            if ( !*s )
            {
              if ( !v72 )
                goto LABEL_105;
LABEL_116:
              sub_409A20();
            }
LABEL_114:
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_75:
          v40 = *(_QWORD *)(v7 + 8 * v24);
          v26 = v75;
          v41 = v24 - v40;
          if ( !v40 )
            goto LABEL_36;
          if ( !v68 )
            goto LABEL_79;
          if ( v71 )
            goto LABEL_82;
          while ( 2 )
          {
            while ( 2 )
            {
              while ( 2 )
              {
                v68 = 0;
                s += v70;
                if ( !--v40 )
                {
                  v26 = v75;
                  v24 = v41;
                  goto LABEL_36;
                }
LABEL_79:
                if ( !v66 )
                {
                  v8 = (unsigned __int8)*s;
                  if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> v8) & 1 )
                  {
                    v70 = 1LL;
                    v42 = *s;
                    v71 = 1;
                    v72 = v42;
                    v68 = 1;
LABEL_82:
                    a2 = (char *)v72;
                    if ( !v72 )
                      goto LABEL_118;
                    continue;
                  }
                  if ( !mbsinit(v57) )
                    goto LABEL_115;
                  v66 = 1;
                }
                break;
              }
              v43 = __ctype_get_mb_cur_max();
              v44 = s;
              v45 = sub_407340((__int64)s, v43);
              a2 = v44;
              v46 = sub_408FC0((wchar_t *)&v72, v44, v45, (mbstate_t *)&v67);
              v70 = v46;
              if ( v46 == -1LL )
              {
                v70 = 1LL;
                v71 = 0;
                continue;
              }
              break;
            }
            if ( v46 == -2LL )
            {
              v47 = strlen(s);
              v71 = 0;
              v70 = v47;
              continue;
            }
            break;
          }
          if ( !v46 )
          {
            v70 = 1LL;
            if ( *s )
              goto LABEL_114;
            if ( v72 )
              __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
          }
          v71 = 1;
          if ( mbsinit((const mbstate_t *)&v67) )
            v66 = 0;
          v68 = 1;
          goto LABEL_82;
        }
      }
      break;
    }
    ++v24;
    s2 = (char *)s2 + v77;
    v75 = 0;
    if ( v56 != v24 )
      continue;
    break;
  }
  *v54 = s;
LABEL_55:
  sub_40B990(v5, a2, v31, v8, v10, v3);
  return 1LL;
}

signed __int64 __fastcall sub_409A40(mbstate_t *a1, char *a2, char **a3)
{
  __int64 v3; // r9@1
  void *v4; // rsp@4
  unsigned __int64 v5; // r12@4
  unsigned __int64 v6; // rbx@6
  __int64 v7; // r13@6
  __int64 v8; // rcx@7
  unsigned int v9; // eax@8
  __int64 v10; // r8@8
  char v11; // al@9
  size_t v12; // rdx@10
  signed __int64 v13; // rax@16
  char *v14; // r14@16
  signed __int64 v15; // rax@16
  size_t v16; // rax@16
  __int64 v17; // r15@24
  signed __int64 v18; // r14@24
  bool v19; // cf@24
  bool v20; // zf@24
  char v21; // bl@25
  signed __int64 v22; // rax@30
  size_t v23; // rdx@31
  __int64 v24; // r15@35
  char *v25; // rax@35
  char v26; // al@35
  signed __int64 v27; // rax@38
  size_t v28; // rdx@39
  unsigned int v29; // eax@44
  unsigned int v30; // eax@49
  __int64 v31; // rdx@50
  unsigned __int64 v33; // rax@57
  void *v34; // rax@60
  size_t v35; // rax@62
  signed __int64 v36; // rax@65
  char *v37; // rbx@65
  signed __int64 v38; // rax@65
  size_t v39; // rax@65
  __int64 v40; // rbx@75
  __int64 v41; // r14@75
  unsigned int v42; // eax@81
  signed __int64 v43; // rax@86
  char *v44; // r15@86
  signed __int64 v45; // rax@86
  size_t v46; // rax@86
  size_t v47; // rax@95
  signed __int64 v48; // rax@100
  char *v49; // rbx@100
  signed __int64 v50; // rax@100
  size_t v51; // rax@100
  size_t v52; // rax@109
  size_t v53; // rax@113
  char **v54; // [sp+0h] [bp-110h]@1
  mbstate_t *ps; // [sp+8h] [bp-108h]@1
  unsigned __int64 v56; // [sp+10h] [bp-100h]@1
  mbstate_t *v57; // [sp+18h] [bp-F8h]@24
  char v58; // [sp+20h] [bp-F0h]@6
  __int64 v59; // [sp+24h] [bp-ECh]@6
  char v60; // [sp+2Ch] [bp-E4h]@6
  void *src; // [sp+30h] [bp-E0h]@6
  size_t n; // [sp+38h] [bp-D8h]@8
  char v63; // [sp+40h] [bp-D0h]@8
  unsigned int v64; // [sp+44h] [bp-CCh]@8
  __int64 v65; // [sp+48h] [bp-C8h]@10
  char v66; // [sp+60h] [bp-B0h]@35
  __int64 v67; // [sp+64h] [bp-ACh]@35
  char v68; // [sp+6Ch] [bp-A4h]@35
  char *s; // [sp+70h] [bp-A0h]@35
  size_t v70; // [sp+78h] [bp-98h]@44
  char v71; // [sp+80h] [bp-90h]@44
  unsigned int v72; // [sp+84h] [bp-8Ch]@44
  char v73; // [sp+A0h] [bp-70h]@35
  __int64 v74; // [sp+A4h] [bp-6Ch]@35
  char v75; // [sp+ACh] [bp-64h]@35
  void *s2; // [sp+B0h] [bp-60h]@35
  size_t v77; // [sp+B8h] [bp-58h]@39
  char v78; // [sp+C0h] [bp-50h]@37
  unsigned int v79; // [sp+C4h] [bp-4Ch]@49

  ps = a1;
  v54 = a3;
  v56 = sub_40BA20(a2);
  if ( (56 * v56 & 0x8000000000000000LL) != 0LL || 56 * (unsigned __int128)v56 >> 64 != 0 )
    return 0LL;
  if ( 56 * v56 > 0xFAF )
  {
    LODWORD(v33) = sub_40B920();
    v5 = v33;
  }
  else
  {
    v4 = alloca(56 * v56 + 24);
    v5 = (((unsigned __int64)&ps + 7) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( !v5 )
    return 0LL;
  src = a2;
  v6 = v5;
  v58 = 0;
  v60 = 0;
  v59 = 0LL;
  v7 = v5 + 48 * v56;
  while ( 1 )
  {
    if ( !v58 )
    {
      v8 = *(_BYTE *)src;
      if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)src >> 5) & 7)] >> v8) & 1 )
      {
        n = 1LL;
        v9 = *(_BYTE *)src;
        v63 = 1;
        v64 = v9;
        v10 = v9;
        v60 = 1;
        if ( !v9 )
          goto LABEL_24;
        goto LABEL_9;
      }
      if ( !mbsinit((const mbstate_t *)&v59) )
        goto LABEL_115;
      v58 = 1;
    }
    v13 = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    v15 = sub_407340((__int64)src, v13);
    a2 = v14;
    v16 = sub_408FC0((wchar_t *)&v64, v14, v15, (mbstate_t *)&v59);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v63 = 0;
      v60 = 1;
      goto LABEL_10;
    }
    if ( v16 != -2LL )
      break;
    v35 = strlen((const char *)src);
    v63 = 0;
    n = v35;
    v11 = 0;
    v60 = 1;
LABEL_10:
    a2 = (char *)src;
    v12 = n;
    if ( src == &v65 )
    {
      v34 = memcpy((void *)(v6 + 24), src, n);
      v12 = n;
      *(_QWORD *)v6 = v34;
      v11 = v63;
    }
    else
    {
      *(_QWORD *)v6 = src;
    }
    *(_QWORD *)(v6 + 8) = v12;
    *(_BYTE *)(v6 + 16) = v11;
    if ( v11 )
      *(_DWORD *)(v6 + 20) = v64;
    src = (char *)src + v12;
    v6 += 48LL;
    v60 = 0;
  }
  if ( !v16 )
  {
    n = 1LL;
    if ( *(_BYTE *)src )
      goto LABEL_114;
    if ( v64 )
      goto LABEL_116;
  }
  v63 = 1;
  if ( mbsinit((const mbstate_t *)&v59) )
    v58 = 0;
  v10 = v64;
  v60 = 1;
  if ( v64 )
  {
LABEL_9:
    v11 = 1;
    goto LABEL_10;
  }
LABEL_24:
  v17 = 0LL;
  v18 = v5 + 48;
  v19 = v56 < 2;
  v20 = v56 == 2;
  *(_QWORD *)(v7 + 8) = 1LL;
  v57 = (mbstate_t *)2;
  if ( !v19 && !v20 )
  {
    do
    {
      v21 = *(_BYTE *)(v18 + 16);
      while ( 1 )
      {
        v22 = v5 + 48 * v17;
        if ( v21 && *(_BYTE *)(v22 + 16) )
        {
          if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v22 + 20) )
            goto LABEL_33;
        }
        else
        {
          v23 = *(_QWORD *)(v18 + 8);
          if ( v23 == *(_QWORD *)(v22 + 8) )
          {
            a2 = *(char **)v22;
            if ( !memcmp(*(const void **)v18, *(const void **)v22, v23) )
            {
LABEL_33:
              *(_QWORD *)(v7 + 8LL * (_QWORD)v57) = (char *)v57 - ++v17;
              goto LABEL_34;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= *(_QWORD *)(v7 + 8 * v17);
      }
      *(_QWORD *)(v7 + 8LL * (_QWORD)v57) = v57;
LABEL_34:
      v57 = (mbstate_t *)((char *)v57 + 1);
      v18 += 48LL;
    }
    while ( (mbstate_t *)v56 != v57 );
  }
  v66 = 0;
  v24 = 0LL;
  v68 = 0;
  *v54 = 0LL;
  v25 = (char *)ps;
  ps = (mbstate_t *)&v74;
  v73 = 0;
  v67 = 0LL;
  v74 = 0LL;
  v75 = 0;
  v57 = (mbstate_t *)&v67;
  s = v25;
  s2 = v25;
  v26 = 0;
LABEL_36:
  if ( v26 )
  {
    if ( !v78 )
      goto LABEL_38;
    goto LABEL_50;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v73 )
      {
        v8 = *(_BYTE *)s2;
        if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)s2 >> 5) & 7)] >> v8) & 1 )
        {
          v77 = 1LL;
          v30 = *(_BYTE *)s2;
          v78 = 1;
          v79 = v30;
          v75 = 1;
          goto LABEL_50;
        }
        if ( !mbsinit(ps) )
          goto LABEL_115;
        v73 = 1;
      }
      v36 = __ctype_get_mb_cur_max();
      v37 = (char *)s2;
      v38 = sub_407340((__int64)s2, v36);
      a2 = v37;
      v39 = sub_408FC0((wchar_t *)&v79, v37, v38, (mbstate_t *)&v74);
      v77 = v39;
      if ( v39 == -1LL )
      {
        v77 = 1LL;
        v78 = 0;
        v75 = 1;
LABEL_38:
        v27 = v5 + 48 * v24;
        goto LABEL_39;
      }
      if ( v39 == -2LL )
      {
        v52 = strlen((const char *)s2);
        v78 = 0;
        v77 = v52;
        v75 = 1;
        goto LABEL_38;
      }
      if ( !v39 )
      {
        v77 = 1LL;
        if ( *(_BYTE *)s2 )
          goto LABEL_114;
        if ( v79 )
          goto LABEL_116;
      }
      v78 = 1;
      if ( mbsinit((const mbstate_t *)&v74) )
        v73 = 0;
      v75 = 1;
LABEL_50:
      v31 = v79;
      if ( !v79 )
        goto LABEL_55;
      v27 = v5 + 48 * v24;
      if ( *(_BYTE *)(v27 + 16) )
      {
        if ( *(_DWORD *)(v27 + 20) != v79 )
        {
LABEL_40:
          if ( !v24 )
            goto LABEL_41;
          goto LABEL_75;
        }
      }
      else
      {
LABEL_39:
        v28 = *(_QWORD *)(v27 + 8);
        if ( v28 != v77 )
          goto LABEL_40;
        a2 = (char *)s2;
        if ( memcmp(*(const void **)v27, s2, v28) )
        {
          if ( !v24 )
          {
LABEL_41:
            if ( v68 )
            {
              if ( v71 )
                goto LABEL_45;
              goto LABEL_46;
            }
            if ( !v66 )
            {
              if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
              {
                v70 = 1LL;
                v29 = *s;
                v71 = 1;
                v72 = v29;
                v68 = 1;
LABEL_45:
                if ( !v72 )
LABEL_118:
                  abort();
LABEL_46:
                s += v70;
                s2 = (char *)s2 + v77;
                v68 = 0;
                v75 = 0;
                continue;
              }
              if ( mbsinit(v57) )
              {
                v66 = 1;
                goto LABEL_100;
              }
LABEL_115:
              __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_100:
            v48 = __ctype_get_mb_cur_max();
            v49 = s;
            v50 = sub_407340((__int64)s, v48);
            a2 = v49;
            v51 = sub_408FC0((wchar_t *)&v72, v49, v50, (mbstate_t *)&v67);
            v70 = v51;
            if ( v51 == -1LL )
            {
              v70 = 1LL;
              v71 = 0;
              goto LABEL_46;
            }
            if ( v51 == -2LL )
            {
              v53 = strlen(s);
              v71 = 0;
              v70 = v53;
              goto LABEL_46;
            }
            if ( v51 )
            {
LABEL_105:
              v71 = 1;
              if ( mbsinit((const mbstate_t *)&v67) )
                v66 = 0;
              v68 = 1;
              goto LABEL_45;
            }
            v70 = 1LL;
            if ( !*s )
            {
              if ( !v72 )
                goto LABEL_105;
LABEL_116:
              sub_409A20();
            }
LABEL_114:
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_75:
          v40 = *(_QWORD *)(v7 + 8 * v24);
          v26 = v75;
          v41 = v24 - v40;
          if ( !v40 )
            goto LABEL_36;
          if ( !v68 )
            goto LABEL_79;
          if ( v71 )
            goto LABEL_82;
          while ( 2 )
          {
            while ( 2 )
            {
              while ( 2 )
              {
                v68 = 0;
                s += v70;
                if ( !--v40 )
                {
                  v26 = v75;
                  v24 = v41;
                  goto LABEL_36;
                }
LABEL_79:
                if ( !v66 )
                {
                  v8 = (unsigned __int8)*s;
                  if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> v8) & 1 )
                  {
                    v70 = 1LL;
                    v42 = *s;
                    v71 = 1;
                    v72 = v42;
                    v68 = 1;
LABEL_82:
                    a2 = (char *)v72;
                    if ( !v72 )
                      goto LABEL_118;
                    continue;
                  }
                  if ( !mbsinit(v57) )
                    goto LABEL_115;
                  v66 = 1;
                }
                break;
              }
              v43 = __ctype_get_mb_cur_max();
              v44 = s;
              v45 = sub_407340((__int64)s, v43);
              a2 = v44;
              v46 = sub_408FC0((wchar_t *)&v72, v44, v45, (mbstate_t *)&v67);
              v70 = v46;
              if ( v46 == -1LL )
              {
                v70 = 1LL;
                v71 = 0;
                continue;
              }
              break;
            }
            if ( v46 == -2LL )
            {
              v47 = strlen(s);
              v71 = 0;
              v70 = v47;
              continue;
            }
            break;
          }
          if ( !v46 )
          {
            v70 = 1LL;
            if ( *s )
              goto LABEL_114;
            if ( v72 )
              __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
          }
          v71 = 1;
          if ( mbsinit((const mbstate_t *)&v67) )
            v66 = 0;
          v68 = 1;
          goto LABEL_82;
        }
      }
      break;
    }
    ++v24;
    s2 = (char *)s2 + v77;
    v75 = 0;
    if ( v56 != v24 )
      continue;
    break;
  }
  *v54 = s;
LABEL_55:
  sub_40B990(v5, a2, v31, v8, v10, v3);
  return 1LL;
}

mbstate_t __fastcall sub_40A420(mbstate_t *a1, char *a2)
{
  __int64 v2; // r13@1
  mbstate_t *v3; // rbp@1
  char v4; // r15@2
  mbstate_t result; // rax@2
  char v6; // cl@3
  const char *v7; // r9@4
  unsigned __int64 v8; // r12@4
  unsigned __int64 v9; // rdx@4
  unsigned __int64 v10; // r8@4
  char v11; // al@4
  const char *v12; // ST00_8@6
  size_t v13; // rax@6
  unsigned __int64 v14; // ST00_8@7
  unsigned __int64 v15; // rax@7
  unsigned __int64 v16; // rbx@10
  mbstate_t *v17; // r14@10
  char v18; // bp@12
  wchar_t v19; // ecx@15
  char v20; // cl@20
  signed __int64 v21; // rdx@23
  __int64 v22; // rdi@23
  char *v23; // rdx@23
  char v24; // si@24
  char v25; // cl@26
  unsigned __int64 v26; // r12@29
  unsigned __int64 v27; // rbx@29
  char v28; // r14@29
  __int128 *v29; // r15@30
  int v30; // eax@32
  wchar_t v31; // ecx@39
  __m128i v32; // xmm1@39
  __m128i v33; // xmm0@39
  __m128i v34; // xmm2@39
  __m128i v35; // xmm3@39
  unsigned int v36; // eax@39
  wchar_t v37; // eax@44
  __int32 v38; // eax@48
  __int32 v39; // eax@49
  bool v40; // al@51
  signed __int64 v41; // rax@55
  char *v42; // r15@55
  signed __int64 v43; // rax@55
  void *v44; // rax@55
  size_t v45; // r15@66
  signed __int64 v46; // rax@70
  char *v47; // r15@70
  signed __int64 v48; // rax@70
  void *v49; // rax@70
  signed __int64 v50; // rax@94
  char *v51; // ST00_8@94
  signed __int64 v52; // rax@94
  size_t v53; // rax@94
  void *v54; // rax@102
  void *v55; // rax@103
  unsigned __int64 v56; // r14@106
  int v57; // eax@112
  char v58; // dl@116
  signed __int64 v59; // rax@119
  char *v60; // r15@119
  signed __int64 v61; // rax@119
  size_t v62; // rax@119
  size_t v63; // rax@128
  size_t v64; // rax@129
  int v65; // eax@132
  signed __int64 v66; // rax@138
  char *v67; // ST00_8@138
  signed __int64 v68; // rax@138
  void *v69; // rax@138
  signed __int64 v70; // rax@148
  char *v71; // r14@148
  signed __int64 v72; // rax@148
  size_t v73; // rax@148
  signed __int64 v74; // rax@157
  char *v75; // r12@157
  signed __int64 v76; // rax@157
  size_t v77; // rax@157
  void *v78; // rax@165
  size_t v79; // rax@166
  size_t v80; // rax@168
  unsigned __int64 v81; // [sp+8h] [bp-180h]@29
  mbstate_t v82; // [sp+14h] [bp-174h]@15
  char v83; // [sp+1Ch] [bp-16Ch]@15
  char *v84; // [sp+20h] [bp-168h]@15
  size_t v85; // [sp+28h] [bp-160h]@16
  char v86; // [sp+30h] [bp-158h]@16
  wchar_t v87; // [sp+34h] [bp-154h]@16
  char v88; // [sp+50h] [bp-138h]@29
  mbstate_t v89; // [sp+54h] [bp-134h]@29
  char v90; // [sp+5Ch] [bp-12Ch]@29
  char *s; // [sp+60h] [bp-128h]@29
  size_t v92; // [sp+68h] [bp-120h]@109
  char v93; // [sp+70h] [bp-118h]@108
  int v94; // [sp+74h] [bp-114h]@112
  __int128 v95; // [sp+90h] [bp-F8h]@29
  size_t n[2]; // [sp+A0h] [bp-E8h]@29
  __int128 v97; // [sp+B0h] [bp-D8h]@32
  __int128 v98; // [sp+C0h] [bp-C8h]@39
  mbstate_t v99[2]; // [sp+D0h] [bp-B8h]@39
  void *s1[2]; // [sp+E0h] [bp-A8h]@39
  __m128i v101; // [sp+F0h] [bp-98h]@39
  __m128i v102; // [sp+100h] [bp-88h]@39
  mbstate_t ps; // [sp+110h] [bp-78h]@7
  char v104; // [sp+11Ch] [bp-6Ch]@39
  void *s2; // [sp+120h] [bp-68h]@39
  void *v106; // [sp+128h] [bp-60h]@40
  char v107; // [sp+130h] [bp-58h]@40
  wchar_t pwc; // [sp+134h] [bp-54h]@40

  v2 = (__int64)a2;
  v3 = a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v19 = *a2;
    v84 = a2;
    v83 = 0;
    v82 = 0LL;
    if ( ((unsigned int)dword_410680[(unsigned __int64)((unsigned __int8)v19 >> 5)] >> v19) & 1 )
    {
      v85 = 1LL;
      v87 = v19;
      v86 = 1;
      v83 = 1;
LABEL_17:
      if ( !v87 )
        return (mbstate_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v82) )
      goto LABEL_173;
    v74 = __ctype_get_mb_cur_max();
    v75 = v84;
    v76 = sub_407340((__int64)v84, v74);
    v77 = sub_408FC0(&v87, v75, v76, &v82);
    v85 = v77;
    if ( v77 == -1LL )
    {
      v85 = 1LL;
      v86 = 0;
      v83 = 1;
    }
    else
    {
      if ( v77 != -2LL )
      {
        if ( !v77 )
        {
          v85 = 1LL;
          if ( *v84 )
            goto LABEL_174;
          if ( v87 )
            goto LABEL_162;
        }
        v86 = 1;
        mbsinit(&v82);
        v83 = 1;
        goto LABEL_17;
      }
      v80 = strlen(v84);
      v86 = 0;
      v85 = v80;
      v83 = 1;
    }
LABEL_29:
    s = a2;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 1;
    v88 = 0;
    v89 = 0LL;
    v90 = 0;
    n[0] = (size_t)a1;
    LOBYTE(v95) = 0;
    *(_QWORD *)((char *)&v95 + 4) = 0LL;
    BYTE12(v95) = 0;
    v81 = 0LL;
    while ( 1 )
    {
      v29 = &v95;
      if ( !(_BYTE)v95 )
      {
        if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)n[0] >> 5) & 7)] >> *(_BYTE *)n[0]) & 1 )
        {
          n[1] = 1LL;
          v30 = *(_BYTE *)n[0];
          LOBYTE(v97) = 1;
          DWORD1(v97) = v30;
          BYTE12(v95) = 1;
          goto LABEL_33;
        }
        v29 = &v95;
        if ( !mbsinit((const mbstate_t *)((char *)&v95 + 4)) )
          goto LABEL_173;
        LOBYTE(v95) = 1;
      }
      v50 = __ctype_get_mb_cur_max();
      v51 = (char *)n[0];
      v52 = sub_407340(n[0], v50);
      v53 = sub_408FC0((wchar_t *)v29 + 9, v51, v52, (mbstate_t *)((char *)v29 + 4));
      n[1] = v53;
      if ( v53 == -1LL )
      {
        n[1] = 1LL;
        LOBYTE(v97) = 0;
        BYTE12(v95) = 1;
        goto LABEL_85;
      }
      if ( v53 == -2LL )
      {
        v64 = strlen((const char *)n[0]);
        LOBYTE(v97) = 0;
        n[1] = v64;
        BYTE12(v95) = 1;
LABEL_85:
        if ( !((unsigned __int8)v28 & (v26 > 9)) )
        {
          ++v27;
          goto LABEL_88;
        }
        if ( v27 < 5 * v26 )
        {
          ++v27;
          v28 &= v26 > 9;
          goto LABEL_88;
        }
LABEL_106:
        v56 = v27 - v81;
        if ( v27 == v81 )
        {
          if ( !v90 )
            goto LABEL_130;
          if ( !v93 )
            goto LABEL_134;
LABEL_133:
          if ( v94 )
            goto LABEL_134;
LABEL_115:
          v28 = sub_409A40(a1, a2, (char **)&ps);
          if ( v28 )
            return ps;
          v58 = v97;
LABEL_135:
          v81 = v27++;
          if ( !v58 )
            goto LABEL_88;
          goto LABEL_37;
        }
        if ( !v90 )
          goto LABEL_110;
        if ( v93 )
          goto LABEL_113;
        while ( 2 )
        {
          while ( 2 )
          {
            while ( 2 )
            {
              v90 = 0;
              s += v92;
              if ( !--v56 )
                goto LABEL_130;
LABEL_110:
              if ( !v88 )
              {
                if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
                {
                  v92 = 1LL;
                  v57 = *s;
                  v93 = 1;
                  v94 = v57;
                  v90 = 1;
LABEL_113:
                  if ( !v94 )
                  {
                    if ( v90 )
                      goto LABEL_115;
LABEL_130:
                    if ( !v88 )
                    {
                      if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
                      {
                        v92 = 1LL;
                        v65 = *s;
                        v93 = 1;
                        v94 = v65;
                        v90 = 1;
                        goto LABEL_133;
                      }
                      if ( !mbsinit(&v89) )
                        goto LABEL_173;
                      v88 = 1;
                    }
                    v70 = __ctype_get_mb_cur_max();
                    v71 = s;
                    v72 = sub_407340((__int64)s, v70);
                    v73 = sub_408FC0(&v94, v71, v72, &v89);
                    v92 = v73;
                    if ( v73 == -1LL )
                    {
                      v92 = 1LL;
                      v93 = 0;
                      v90 = 1;
                    }
                    else
                    {
                      if ( v73 != -2LL )
                      {
                        if ( !v73 )
                        {
                          v92 = 1LL;
                          if ( *s )
                            goto LABEL_174;
                          if ( v94 )
                            goto LABEL_162;
                        }
                        v93 = 1;
                        if ( mbsinit(&v89) )
                          v88 = 0;
                        v90 = 1;
                        goto LABEL_133;
                      }
                      v79 = strlen(s);
                      v93 = 0;
                      v92 = v79;
                      v90 = 1;
                    }
LABEL_134:
                    v58 = v97;
                    v28 = 1;
                    goto LABEL_135;
                  }
                  continue;
                }
                if ( !mbsinit(&v89) )
                  goto LABEL_173;
                v88 = 1;
              }
              break;
            }
            v59 = __ctype_get_mb_cur_max();
            v60 = s;
            v61 = sub_407340((__int64)s, v59);
            v62 = sub_408FC0(&v94, v60, v61, &v89);
            v92 = v62;
            if ( v62 == -1LL )
            {
              v92 = 1LL;
              v93 = 0;
              continue;
            }
            break;
          }
          if ( v62 == -2LL )
          {
            v63 = strlen(s);
            v93 = 0;
            v92 = v63;
            continue;
          }
          break;
        }
        if ( !v62 )
        {
          v92 = 1LL;
          if ( *s )
            goto LABEL_174;
          if ( v94 )
            goto LABEL_162;
        }
        v93 = 1;
        if ( mbsinit(&v89) )
          v88 = 0;
        v90 = 1;
        goto LABEL_113;
      }
      if ( !v53 )
      {
        n[1] = 1LL;
        if ( *(_BYTE *)n[0] )
          goto LABEL_174;
        if ( DWORD1(v97) )
          goto LABEL_162;
      }
      LOBYTE(v97) = 1;
      if ( mbsinit((const mbstate_t *)((char *)v29 + 4)) )
        LOBYTE(v95) = 0;
      BYTE12(v95) = 1;
LABEL_33:
      if ( !DWORD1(v97) )
        return 0LL;
      if ( (unsigned __int8)v28 & (v26 > 9) )
      {
        if ( v27 >= 5 * v26 )
          goto LABEL_106;
        ++v27;
        v28 &= v26 > 9;
      }
      else
      {
        ++v27;
      }
LABEL_37:
      if ( v86 )
      {
        if ( DWORD1(v97) == v87 )
          goto LABEL_39;
LABEL_66:
        v45 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v45 = n[1];
      if ( n[1] == v85 && !memcmp((const void *)n[0], v84, n[1]) )
      {
LABEL_39:
        v31 = *a2;
        v32 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v33 = _mm_load_si128((const __m128i *)&v95);
        LOBYTE(ps.__count) = 0;
        *(__m128i *)s1 = v32;
        v34 = _mm_load_si128((const __m128i *)&v97);
        s1[0] = (void *)(v32.m128i_i64[1] + v32.m128i_i64[0]);
        v35 = _mm_load_si128((const __m128i *)&v98);
        *(__m128i *)&v99[0].__count = v33;
        v101 = v34;
        v36 = dword_410680[(unsigned __int64)((unsigned __int8)v31 >> 5)];
        v102 = v35;
        v99[1].__wchb[0] = 0;
        v104 = 0;
        *(mbstate_t *)((char *)&ps + 4) = 0LL;
        if ( (v36 >> v31) & 1 )
        {
          v106 = (void *)1;
          pwc = v31;
          v107 = 1;
          v104 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
        {
          LOBYTE(ps.__count) = 1;
          v66 = __ctype_get_mb_cur_max();
          v67 = (char *)s2;
          v68 = sub_407340((__int64)s2, v66);
          v69 = (void *)sub_408FC0(&pwc, v67, v68, (mbstate_t *)((char *)&ps + 4));
          v106 = v69;
          if ( v69 == (void *)-1 )
          {
            v106 = (void *)1;
            v107 = 0;
          }
          else if ( v69 == (void *)-2 )
          {
            v78 = (void *)strlen((const char *)s2);
            v107 = 0;
            v106 = v78;
          }
          else
          {
            if ( !v69 )
            {
              v106 = (void *)1;
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
            v107 = 1;
            if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
              LOBYTE(ps.__count) = 0;
            v104 = 1;
LABEL_41:
            if ( !pwc )
              abort();
          }
          v104 = 0;
          ++v27;
          s2 = (char *)s2 + (_QWORD)v106;
          while ( 2 )
          {
            if ( LOBYTE(ps.__count) )
            {
LABEL_55:
              v41 = __ctype_get_mb_cur_max();
              v42 = (char *)s2;
              v43 = sub_407340((__int64)s2, v41);
              v44 = (void *)sub_408FC0(&pwc, v42, v43, (mbstate_t *)((char *)&ps + 4));
              v106 = v44;
              if ( v44 == (void *)-1 )
              {
                v106 = (void *)1;
                v107 = 0;
                v104 = 1;
              }
              else if ( v44 == (void *)-2 )
              {
                v54 = (void *)strlen((const char *)s2);
                v107 = 0;
                v106 = v54;
                v104 = 1;
              }
              else
              {
                if ( !v44 )
                {
                  v106 = (void *)1;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_174;
                  if ( pwc )
                    goto LABEL_162;
                }
                v107 = 1;
                if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  LOBYTE(ps.__count) = 0;
                v104 = 1;
                if ( !pwc )
                  return (mbstate_t)n[0];
              }
            }
            else
            {
              if ( !(((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)s2 >> 5) & 7)] >> *(_BYTE *)s2) & 1) )
              {
                if ( !mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  break;
                LOBYTE(ps.__count) = 1;
                goto LABEL_55;
              }
              v106 = (void *)1;
              v37 = *(_BYTE *)s2;
              v107 = 1;
              pwc = v37;
              v104 = 1;
              if ( !v37 )
                return (mbstate_t)n[0];
            }
            if ( !v99[1].__wchb[0] )
            {
              if ( !LOBYTE(v99[0].__count) )
              {
                if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)s1[0] >> 5) & 7)] >> *(_BYTE *)s1[0]) & 1 )
                {
                  s1[1] = (void *)1;
                  v38 = *(_BYTE *)s1[0];
                  v101.m128i_i8[0] = 1;
                  v101.m128i_i32[1] = v38;
                  v99[1].__wchb[0] = 1;
LABEL_49:
                  v39 = v101.m128i_i32[1];
                  if ( !v101.m128i_i32[1] )
                    return 0LL;
LABEL_50:
                  if ( v107 )
                  {
                    v40 = pwc != v39;
LABEL_52:
                    if ( v40 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned int)s1[1];
                    ++v27;
                    s2 = (char *)s2 + (_QWORD)v106;
                    v99[1].__wchb[0] = 0;
                    v104 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != v106 )
                    goto LABEL_66;
                  v40 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((mbstate_t *)((char *)v99 + 4)) )
                  break;
                LOBYTE(v99[0].__count) = 1;
              }
              v46 = __ctype_get_mb_cur_max();
              v47 = (char *)s1[0];
              v48 = sub_407340((__int64)s1[0], v46);
              v49 = (void *)sub_408FC0((wchar_t *)&v101.m128i_i32[1], v47, v48, (mbstate_t *)((char *)v99 + 4));
              s1[1] = v49;
              if ( v49 == (void *)-1 )
              {
                s1[1] = (void *)1;
                v101.m128i_i8[0] = 0;
                v99[1].__wchb[0] = 1;
              }
              else
              {
                if ( v49 != (void *)-2 )
                {
                  if ( !v49 )
                  {
                    s1[1] = (void *)1;
                    if ( *(_BYTE *)s1[0] )
                      goto LABEL_174;
                    if ( v101.m128i_i32[1] )
                      goto LABEL_162;
                  }
                  v101.m128i_i8[0] = 1;
                  if ( mbsinit((mbstate_t *)((char *)v99 + 4)) )
                    LOBYTE(v99[0].__count) = 0;
                  v39 = v101.m128i_i32[1];
                  v99[1].__wchb[0] = 1;
                  if ( !v101.m128i_i32[1] )
                    return 0LL;
                  goto LABEL_50;
                }
                v55 = (void *)strlen((const char *)s1[0]);
                v101.m128i_i8[0] = 0;
                s1[1] = v55;
                v99[1].__wchb[0] = 1;
              }
              goto LABEL_65;
            }
            break;
          }
          if ( v101.m128i_i8[0] )
            goto LABEL_49;
          goto LABEL_65;
        }
LABEL_173:
        __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v45;
      ++v26;
      BYTE12(v95) = 0;
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
    v16 = v9 + 1;
    v17 = (mbstate_t *)((char *)v3 + 1);
    if ( v4 != v6 )
    {
      if ( !BYTE1(v3->__count) )
        return 0LL;
      goto LABEL_12;
    }
    v20 = *(_BYTE *)(v2 + 1);
    if ( !v20 )
      return (mbstate_t)v3;
    if ( !LOBYTE(v17->__count) )
      return 0LL;
    v16 = v9 + 2;
    if ( v20 == LOBYTE(v17->__count) )
      break;
LABEL_12:
    v18 = v11 & (v8 > 9);
    if ( (unsigned __int8)v11 & (v8 > 9) )
    {
      if ( v16 < 5 * v8 || v7 && (v12 = v7, v13 = strnlen(v7, v16 - v10), v10 = v16, v7 = &v12[v13], v12[v13]) )
      {
        v11 = v18;
      }
      else
      {
        v14 = v10;
        v15 = strlen((const char *)v2);
        v11 = sub_409890(v17, v2, v15, &ps);
        v10 = v14;
        if ( v11 )
          return ps;
        v7 = 0LL;
      }
    }
    v6 = v17->__count;
    v3 = v17;
    v9 = v16;
  }
  v21 = -(signed __int64)v9;
  v22 = v2 + v21;
  v23 = (char *)v3 + v21;
  while ( 1 )
  {
    v25 = *(_BYTE *)(v22 + v16);
    if ( !v25 )
      return (mbstate_t)v3;
    v24 = v23[v16];
    if ( !v24 )
      return 0LL;
    ++v16;
    if ( v25 != v24 )
      goto LABEL_12;
  }
}

mbstate_t __fastcall sub_40A420(mbstate_t *a1, char *a2)
{
  __int64 v2; // r13@1
  mbstate_t *v3; // rbp@1
  char v4; // r15@2
  mbstate_t result; // rax@2
  char v6; // cl@3
  const char *v7; // r9@4
  unsigned __int64 v8; // r12@4
  unsigned __int64 v9; // rdx@4
  unsigned __int64 v10; // r8@4
  char v11; // al@4
  const char *v12; // ST00_8@6
  size_t v13; // rax@6
  unsigned __int64 v14; // ST00_8@7
  unsigned __int64 v15; // rax@7
  unsigned __int64 v16; // rbx@10
  mbstate_t *v17; // r14@10
  char v18; // bp@12
  wchar_t v19; // ecx@15
  char v20; // cl@20
  signed __int64 v21; // rdx@23
  __int64 v22; // rdi@23
  char *v23; // rdx@23
  char v24; // si@24
  char v25; // cl@26
  unsigned __int64 v26; // r12@29
  unsigned __int64 v27; // rbx@29
  char v28; // r14@29
  __int128 *v29; // r15@30
  int v30; // eax@32
  wchar_t v31; // ecx@39
  __m128i v32; // xmm1@39
  __m128i v33; // xmm0@39
  __m128i v34; // xmm2@39
  __m128i v35; // xmm3@39
  unsigned int v36; // eax@39
  wchar_t v37; // eax@44
  __int32 v38; // eax@48
  __int32 v39; // eax@49
  bool v40; // al@51
  signed __int64 v41; // rax@55
  char *v42; // r15@55
  signed __int64 v43; // rax@55
  void *v44; // rax@55
  size_t v45; // r15@66
  signed __int64 v46; // rax@70
  char *v47; // r15@70
  signed __int64 v48; // rax@70
  void *v49; // rax@70
  signed __int64 v50; // rax@94
  char *v51; // ST00_8@94
  signed __int64 v52; // rax@94
  size_t v53; // rax@94
  void *v54; // rax@102
  void *v55; // rax@103
  unsigned __int64 v56; // r14@106
  int v57; // eax@112
  char v58; // dl@116
  signed __int64 v59; // rax@119
  char *v60; // r15@119
  signed __int64 v61; // rax@119
  size_t v62; // rax@119
  size_t v63; // rax@128
  size_t v64; // rax@129
  int v65; // eax@132
  signed __int64 v66; // rax@138
  char *v67; // ST00_8@138
  signed __int64 v68; // rax@138
  void *v69; // rax@138
  signed __int64 v70; // rax@148
  char *v71; // r14@148
  signed __int64 v72; // rax@148
  size_t v73; // rax@148
  signed __int64 v74; // rax@157
  char *v75; // r12@157
  signed __int64 v76; // rax@157
  size_t v77; // rax@157
  void *v78; // rax@165
  size_t v79; // rax@166
  size_t v80; // rax@168
  unsigned __int64 v81; // [sp+8h] [bp-180h]@29
  mbstate_t v82; // [sp+14h] [bp-174h]@15
  char v83; // [sp+1Ch] [bp-16Ch]@15
  char *v84; // [sp+20h] [bp-168h]@15
  size_t v85; // [sp+28h] [bp-160h]@16
  char v86; // [sp+30h] [bp-158h]@16
  wchar_t v87; // [sp+34h] [bp-154h]@16
  char v88; // [sp+50h] [bp-138h]@29
  mbstate_t v89; // [sp+54h] [bp-134h]@29
  char v90; // [sp+5Ch] [bp-12Ch]@29
  char *s; // [sp+60h] [bp-128h]@29
  size_t v92; // [sp+68h] [bp-120h]@109
  char v93; // [sp+70h] [bp-118h]@108
  int v94; // [sp+74h] [bp-114h]@112
  __int128 v95; // [sp+90h] [bp-F8h]@29
  size_t n[2]; // [sp+A0h] [bp-E8h]@29
  __int128 v97; // [sp+B0h] [bp-D8h]@32
  __int128 v98; // [sp+C0h] [bp-C8h]@39
  mbstate_t v99[2]; // [sp+D0h] [bp-B8h]@39
  void *s1[2]; // [sp+E0h] [bp-A8h]@39
  __m128i v101; // [sp+F0h] [bp-98h]@39
  __m128i v102; // [sp+100h] [bp-88h]@39
  mbstate_t ps; // [sp+110h] [bp-78h]@7
  char v104; // [sp+11Ch] [bp-6Ch]@39
  void *s2; // [sp+120h] [bp-68h]@39
  void *v106; // [sp+128h] [bp-60h]@40
  char v107; // [sp+130h] [bp-58h]@40
  wchar_t pwc; // [sp+134h] [bp-54h]@40

  v2 = (__int64)a2;
  v3 = a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v19 = *a2;
    v84 = a2;
    v83 = 0;
    v82 = 0LL;
    if ( ((unsigned int)dword_410680[(unsigned __int64)((unsigned __int8)v19 >> 5)] >> v19) & 1 )
    {
      v85 = 1LL;
      v87 = v19;
      v86 = 1;
      v83 = 1;
LABEL_17:
      if ( !v87 )
        return (mbstate_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v82) )
      goto LABEL_173;
    v74 = __ctype_get_mb_cur_max();
    v75 = v84;
    v76 = sub_407340((__int64)v84, v74);
    v77 = sub_408FC0(&v87, v75, v76, &v82);
    v85 = v77;
    if ( v77 == -1LL )
    {
      v85 = 1LL;
      v86 = 0;
      v83 = 1;
    }
    else
    {
      if ( v77 != -2LL )
      {
        if ( !v77 )
        {
          v85 = 1LL;
          if ( *v84 )
            goto LABEL_174;
          if ( v87 )
            goto LABEL_162;
        }
        v86 = 1;
        mbsinit(&v82);
        v83 = 1;
        goto LABEL_17;
      }
      v80 = strlen(v84);
      v86 = 0;
      v85 = v80;
      v83 = 1;
    }
LABEL_29:
    s = a2;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 1;
    v88 = 0;
    v89 = 0LL;
    v90 = 0;
    n[0] = (size_t)a1;
    LOBYTE(v95) = 0;
    *(_QWORD *)((char *)&v95 + 4) = 0LL;
    BYTE12(v95) = 0;
    v81 = 0LL;
    while ( 1 )
    {
      v29 = &v95;
      if ( !(_BYTE)v95 )
      {
        if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)n[0] >> 5) & 7)] >> *(_BYTE *)n[0]) & 1 )
        {
          n[1] = 1LL;
          v30 = *(_BYTE *)n[0];
          LOBYTE(v97) = 1;
          DWORD1(v97) = v30;
          BYTE12(v95) = 1;
          goto LABEL_33;
        }
        v29 = &v95;
        if ( !mbsinit((const mbstate_t *)((char *)&v95 + 4)) )
          goto LABEL_173;
        LOBYTE(v95) = 1;
      }
      v50 = __ctype_get_mb_cur_max();
      v51 = (char *)n[0];
      v52 = sub_407340(n[0], v50);
      v53 = sub_408FC0((wchar_t *)v29 + 9, v51, v52, (mbstate_t *)((char *)v29 + 4));
      n[1] = v53;
      if ( v53 == -1LL )
      {
        n[1] = 1LL;
        LOBYTE(v97) = 0;
        BYTE12(v95) = 1;
        goto LABEL_85;
      }
      if ( v53 == -2LL )
      {
        v64 = strlen((const char *)n[0]);
        LOBYTE(v97) = 0;
        n[1] = v64;
        BYTE12(v95) = 1;
LABEL_85:
        if ( !((unsigned __int8)v28 & (v26 > 9)) )
        {
          ++v27;
          goto LABEL_88;
        }
        if ( v27 < 5 * v26 )
        {
          ++v27;
          v28 &= v26 > 9;
          goto LABEL_88;
        }
LABEL_106:
        v56 = v27 - v81;
        if ( v27 == v81 )
        {
          if ( !v90 )
            goto LABEL_130;
          if ( !v93 )
            goto LABEL_134;
LABEL_133:
          if ( v94 )
            goto LABEL_134;
LABEL_115:
          v28 = sub_409A40(a1, a2, (char **)&ps);
          if ( v28 )
            return ps;
          v58 = v97;
LABEL_135:
          v81 = v27++;
          if ( !v58 )
            goto LABEL_88;
          goto LABEL_37;
        }
        if ( !v90 )
          goto LABEL_110;
        if ( v93 )
          goto LABEL_113;
        while ( 2 )
        {
          while ( 2 )
          {
            while ( 2 )
            {
              v90 = 0;
              s += v92;
              if ( !--v56 )
                goto LABEL_130;
LABEL_110:
              if ( !v88 )
              {
                if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
                {
                  v92 = 1LL;
                  v57 = *s;
                  v93 = 1;
                  v94 = v57;
                  v90 = 1;
LABEL_113:
                  if ( !v94 )
                  {
                    if ( v90 )
                      goto LABEL_115;
LABEL_130:
                    if ( !v88 )
                    {
                      if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
                      {
                        v92 = 1LL;
                        v65 = *s;
                        v93 = 1;
                        v94 = v65;
                        v90 = 1;
                        goto LABEL_133;
                      }
                      if ( !mbsinit(&v89) )
                        goto LABEL_173;
                      v88 = 1;
                    }
                    v70 = __ctype_get_mb_cur_max();
                    v71 = s;
                    v72 = sub_407340((__int64)s, v70);
                    v73 = sub_408FC0(&v94, v71, v72, &v89);
                    v92 = v73;
                    if ( v73 == -1LL )
                    {
                      v92 = 1LL;
                      v93 = 0;
                      v90 = 1;
                    }
                    else
                    {
                      if ( v73 != -2LL )
                      {
                        if ( !v73 )
                        {
                          v92 = 1LL;
                          if ( *s )
                            goto LABEL_174;
                          if ( v94 )
                            goto LABEL_162;
                        }
                        v93 = 1;
                        if ( mbsinit(&v89) )
                          v88 = 0;
                        v90 = 1;
                        goto LABEL_133;
                      }
                      v79 = strlen(s);
                      v93 = 0;
                      v92 = v79;
                      v90 = 1;
                    }
LABEL_134:
                    v58 = v97;
                    v28 = 1;
                    goto LABEL_135;
                  }
                  continue;
                }
                if ( !mbsinit(&v89) )
                  goto LABEL_173;
                v88 = 1;
              }
              break;
            }
            v59 = __ctype_get_mb_cur_max();
            v60 = s;
            v61 = sub_407340((__int64)s, v59);
            v62 = sub_408FC0(&v94, v60, v61, &v89);
            v92 = v62;
            if ( v62 == -1LL )
            {
              v92 = 1LL;
              v93 = 0;
              continue;
            }
            break;
          }
          if ( v62 == -2LL )
          {
            v63 = strlen(s);
            v93 = 0;
            v92 = v63;
            continue;
          }
          break;
        }
        if ( !v62 )
        {
          v92 = 1LL;
          if ( *s )
            goto LABEL_174;
          if ( v94 )
            goto LABEL_162;
        }
        v93 = 1;
        if ( mbsinit(&v89) )
          v88 = 0;
        v90 = 1;
        goto LABEL_113;
      }
      if ( !v53 )
      {
        n[1] = 1LL;
        if ( *(_BYTE *)n[0] )
          goto LABEL_174;
        if ( DWORD1(v97) )
          goto LABEL_162;
      }
      LOBYTE(v97) = 1;
      if ( mbsinit((const mbstate_t *)((char *)v29 + 4)) )
        LOBYTE(v95) = 0;
      BYTE12(v95) = 1;
LABEL_33:
      if ( !DWORD1(v97) )
        return 0LL;
      if ( (unsigned __int8)v28 & (v26 > 9) )
      {
        if ( v27 >= 5 * v26 )
          goto LABEL_106;
        ++v27;
        v28 &= v26 > 9;
      }
      else
      {
        ++v27;
      }
LABEL_37:
      if ( v86 )
      {
        if ( DWORD1(v97) == v87 )
          goto LABEL_39;
LABEL_66:
        v45 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v45 = n[1];
      if ( n[1] == v85 && !memcmp((const void *)n[0], v84, n[1]) )
      {
LABEL_39:
        v31 = *a2;
        v32 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v33 = _mm_load_si128((const __m128i *)&v95);
        LOBYTE(ps.__count) = 0;
        *(__m128i *)s1 = v32;
        v34 = _mm_load_si128((const __m128i *)&v97);
        s1[0] = (void *)(v32.m128i_i64[1] + v32.m128i_i64[0]);
        v35 = _mm_load_si128((const __m128i *)&v98);
        *(__m128i *)&v99[0].__count = v33;
        v101 = v34;
        v36 = dword_410680[(unsigned __int64)((unsigned __int8)v31 >> 5)];
        v102 = v35;
        v99[1].__wchb[0] = 0;
        v104 = 0;
        *(mbstate_t *)((char *)&ps + 4) = 0LL;
        if ( (v36 >> v31) & 1 )
        {
          v106 = (void *)1;
          pwc = v31;
          v107 = 1;
          v104 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
        {
          LOBYTE(ps.__count) = 1;
          v66 = __ctype_get_mb_cur_max();
          v67 = (char *)s2;
          v68 = sub_407340((__int64)s2, v66);
          v69 = (void *)sub_408FC0(&pwc, v67, v68, (mbstate_t *)((char *)&ps + 4));
          v106 = v69;
          if ( v69 == (void *)-1 )
          {
            v106 = (void *)1;
            v107 = 0;
          }
          else if ( v69 == (void *)-2 )
          {
            v78 = (void *)strlen((const char *)s2);
            v107 = 0;
            v106 = v78;
          }
          else
          {
            if ( !v69 )
            {
              v106 = (void *)1;
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
            v107 = 1;
            if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
              LOBYTE(ps.__count) = 0;
            v104 = 1;
LABEL_41:
            if ( !pwc )
              abort();
          }
          v104 = 0;
          ++v27;
          s2 = (char *)s2 + (_QWORD)v106;
          while ( 2 )
          {
            if ( LOBYTE(ps.__count) )
            {
LABEL_55:
              v41 = __ctype_get_mb_cur_max();
              v42 = (char *)s2;
              v43 = sub_407340((__int64)s2, v41);
              v44 = (void *)sub_408FC0(&pwc, v42, v43, (mbstate_t *)((char *)&ps + 4));
              v106 = v44;
              if ( v44 == (void *)-1 )
              {
                v106 = (void *)1;
                v107 = 0;
                v104 = 1;
              }
              else if ( v44 == (void *)-2 )
              {
                v54 = (void *)strlen((const char *)s2);
                v107 = 0;
                v106 = v54;
                v104 = 1;
              }
              else
              {
                if ( !v44 )
                {
                  v106 = (void *)1;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_174;
                  if ( pwc )
                    goto LABEL_162;
                }
                v107 = 1;
                if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  LOBYTE(ps.__count) = 0;
                v104 = 1;
                if ( !pwc )
                  return (mbstate_t)n[0];
              }
            }
            else
            {
              if ( !(((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)s2 >> 5) & 7)] >> *(_BYTE *)s2) & 1) )
              {
                if ( !mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  break;
                LOBYTE(ps.__count) = 1;
                goto LABEL_55;
              }
              v106 = (void *)1;
              v37 = *(_BYTE *)s2;
              v107 = 1;
              pwc = v37;
              v104 = 1;
              if ( !v37 )
                return (mbstate_t)n[0];
            }
            if ( !v99[1].__wchb[0] )
            {
              if ( !LOBYTE(v99[0].__count) )
              {
                if ( ((unsigned int)dword_410680[(unsigned __int64)((*(_BYTE *)s1[0] >> 5) & 7)] >> *(_BYTE *)s1[0]) & 1 )
                {
                  s1[1] = (void *)1;
                  v38 = *(_BYTE *)s1[0];
                  v101.m128i_i8[0] = 1;
                  v101.m128i_i32[1] = v38;
                  v99[1].__wchb[0] = 1;
LABEL_49:
                  v39 = v101.m128i_i32[1];
                  if ( !v101.m128i_i32[1] )
                    return 0LL;
LABEL_50:
                  if ( v107 )
                  {
                    v40 = pwc != v39;
LABEL_52:
                    if ( v40 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned int)s1[1];
                    ++v27;
                    s2 = (char *)s2 + (_QWORD)v106;
                    v99[1].__wchb[0] = 0;
                    v104 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != v106 )
                    goto LABEL_66;
                  v40 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((mbstate_t *)((char *)v99 + 4)) )
                  break;
                LOBYTE(v99[0].__count) = 1;
              }
              v46 = __ctype_get_mb_cur_max();
              v47 = (char *)s1[0];
              v48 = sub_407340((__int64)s1[0], v46);
              v49 = (void *)sub_408FC0((wchar_t *)&v101.m128i_i32[1], v47, v48, (mbstate_t *)((char *)v99 + 4));
              s1[1] = v49;
              if ( v49 == (void *)-1 )
              {
                s1[1] = (void *)1;
                v101.m128i_i8[0] = 0;
                v99[1].__wchb[0] = 1;
              }
              else
              {
                if ( v49 != (void *)-2 )
                {
                  if ( !v49 )
                  {
                    s1[1] = (void *)1;
                    if ( *(_BYTE *)s1[0] )
                      goto LABEL_174;
                    if ( v101.m128i_i32[1] )
                      goto LABEL_162;
                  }
                  v101.m128i_i8[0] = 1;
                  if ( mbsinit((mbstate_t *)((char *)v99 + 4)) )
                    LOBYTE(v99[0].__count) = 0;
                  v39 = v101.m128i_i32[1];
                  v99[1].__wchb[0] = 1;
                  if ( !v101.m128i_i32[1] )
                    return 0LL;
                  goto LABEL_50;
                }
                v55 = (void *)strlen((const char *)s1[0]);
                v101.m128i_i8[0] = 0;
                s1[1] = v55;
                v99[1].__wchb[0] = 1;
              }
              goto LABEL_65;
            }
            break;
          }
          if ( v101.m128i_i8[0] )
            goto LABEL_49;
          goto LABEL_65;
        }
LABEL_173:
        __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v45;
      ++v26;
      BYTE12(v95) = 0;
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
    v16 = v9 + 1;
    v17 = (mbstate_t *)((char *)v3 + 1);
    if ( v4 != v6 )
    {
      if ( !BYTE1(v3->__count) )
        return 0LL;
      goto LABEL_12;
    }
    v20 = *(_BYTE *)(v2 + 1);
    if ( !v20 )
      return (mbstate_t)v3;
    if ( !LOBYTE(v17->__count) )
      return 0LL;
    v16 = v9 + 2;
    if ( v20 == LOBYTE(v17->__count) )
      break;
LABEL_12:
    v18 = v11 & (v8 > 9);
    if ( (unsigned __int8)v11 & (v8 > 9) )
    {
      if ( v16 < 5 * v8 || v7 && (v12 = v7, v13 = strnlen(v7, v16 - v10), v10 = v16, v7 = &v12[v13], v12[v13]) )
      {
        v11 = v18;
      }
      else
      {
        v14 = v10;
        v15 = strlen((const char *)v2);
        v11 = sub_409890(v17, v2, v15, &ps);
        v10 = v14;
        if ( v11 )
          return ps;
        v7 = 0LL;
      }
    }
    v6 = v17->__count;
    v3 = v17;
    v9 = v16;
  }
  v21 = -(signed __int64)v9;
  v22 = v2 + v21;
  v23 = (char *)v3 + v21;
  while ( 1 )
  {
    v25 = *(_BYTE *)(v22 + v16);
    if ( !v25 )
      return (mbstate_t)v3;
    v24 = v23[v16];
    if ( !v24 )
      return 0LL;
    ++v16;
    if ( v25 != v24 )
      goto LABEL_12;
  }
}

__int64 __fastcall sub_40B2F0(char *a1, char *a2, void *a3, void **a4, size_t *a5)
{
  char *v5; // r13@1
  void *v6; // rbx@1
  __int64 v7; // r14@1
  int v8; // eax@5
  void *v9; // r14@9
  signed int v10; // ebx@17
  int *v12; // rax@25
  int v13; // er12@25
  int *v14; // rbp@25
  size_t v15; // [sp+0h] [bp-1078h]@8
  void **v16; // [sp+8h] [bp-1070h]@1
  size_t *v17; // [sp+10h] [bp-1068h]@1
  char *inbuf; // [sp+20h] [bp-1058h]@1
  size_t inbytesleft; // [sp+28h] [bp-1050h]@1
  char *outbuf; // [sp+30h] [bp-1048h]@3
  size_t outbytesleft; // [sp+38h] [bp-1040h]@4
  size_t v22; // [sp+40h] [bp-1038h]@3

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
      goto LABEL_21;
  }
LABEL_7:
  outbuf = (char *)&v22;
  outbytesleft = 4096LL;
  if ( iconv(v6, 0LL, 0LL, &outbuf, &outbytesleft) == -1LL )
LABEL_21:
    return (unsigned int)-1;
  v15 = v7 + outbuf - (char *)&v22;
  if ( !(v7 + outbuf - (char *)&v22) )
  {
    v10 = 0;
    *v17 = 0LL;
    return (unsigned int)v10;
  }
  v9 = *v16;
  if ( !*v16 || *v17 < v15 )
  {
    v9 = malloc(v15);
    if ( !v9 )
    {
      *__errno_location() = 12;
      goto LABEL_21;
    }
  }
  iconv(v6, 0LL, 0LL, 0LL, 0LL);
  outbuf = a2;
  outbytesleft = (size_t)v9;
  inbytesleft = (size_t)a1;
  v22 = v15;
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
    *v17 = v15;
    return (unsigned int)v10;
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
  return (unsigned int)v10;
}

__int64 __fastcall sub_40B2F0(char *a1, char *a2, void *a3, void **a4, size_t *a5)
{
  char *v5; // r13@1
  void *v6; // rbx@1
  __int64 v7; // r14@1
  int v8; // eax@5
  void *v9; // r14@9
  signed int v10; // ebx@17
  int *v12; // rax@25
  int v13; // er12@25
  int *v14; // rbp@25
  size_t v15; // [sp+0h] [bp-1078h]@8
  void **v16; // [sp+8h] [bp-1070h]@1
  size_t *v17; // [sp+10h] [bp-1068h]@1
  char *inbuf; // [sp+20h] [bp-1058h]@1
  size_t inbytesleft; // [sp+28h] [bp-1050h]@1
  char *outbuf; // [sp+30h] [bp-1048h]@3
  size_t outbytesleft; // [sp+38h] [bp-1040h]@4
  size_t v22; // [sp+40h] [bp-1038h]@3

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
      goto LABEL_21;
  }
LABEL_7:
  outbuf = (char *)&v22;
  outbytesleft = 4096LL;
  if ( iconv(v6, 0LL, 0LL, &outbuf, &outbytesleft) == -1LL )
LABEL_21:
    return (unsigned int)-1;
  v15 = v7 + outbuf - (char *)&v22;
  if ( !(v7 + outbuf - (char *)&v22) )
  {
    v10 = 0;
    *v17 = 0LL;
    return (unsigned int)v10;
  }
  v9 = *v16;
  if ( !*v16 || *v17 < v15 )
  {
    v9 = malloc(v15);
    if ( !v9 )
    {
      *__errno_location() = 12;
      goto LABEL_21;
    }
  }
  iconv(v6, 0LL, 0LL, 0LL, 0LL);
  outbuf = a2;
  outbytesleft = (size_t)v9;
  inbytesleft = (size_t)a1;
  v22 = v15;
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
    *v17 = v15;
    return (unsigned int)v10;
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
  return (unsigned int)v10;
}

char *__fastcall sub_40B540(const char *a1, void *a2)
{
  unsigned __int64 v2; // rax@1
  size_t v3; // rbx@1
  unsigned __int64 v4; // r13@3
  char *v5; // r12@3
  int *v6; // rax@5
  int *v7; // r15@5
  int v8; // eax@5
  signed __int64 v9; // rbp@7
  char *v10; // rbx@7
  char *v11; // rax@8
  signed __int64 v12; // rbp@13
  char *v13; // rbx@13
  char *v14; // rax@14
  char *v15; // rax@17
  char *v16; // rax@18
  char *v17; // rdi@22
  const char *v19; // [sp+0h] [bp-58h]@1
  size_t inbytesleft; // [sp+8h] [bp-50h]@1
  char *outbuf; // [sp+10h] [bp-48h]@4
  size_t outbytesleft; // [sp+18h] [bp-40h]@4

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
  char *v3; // rbp@2
  char *v4; // rbx@3
  iconv_t v6; // rax@5
  void *v7; // rbp@5
  int *v8; // rax@8
  char *v9; // rdi@8
  int v10; // er12@8
  int *v11; // rbp@8
  int *v12; // rax@11
  int v13; // er13@11
  int *v14; // r12@11

  if ( *s )
  {
    v3 = tocode;
    if ( (unsigned int)sub_409150((__int64)fromcode, (__int64)tocode) )
    {
      v6 = iconv_open(v3, fromcode);
      v7 = v6;
      if ( v6 == (iconv_t)-1 )
      {
        v4 = 0LL;
      }
      else
      {
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
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_40B880(stream) )
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

int __fastcall sub_40B880(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_40B8C0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_40B8C0(FILE *a1, __off_t a2, int a3)
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

signed __int64 __fastcall sub_40B920(__int64 a1)
{
  unsigned __int8 v1; // cf@1
  size_t v2; // rdi@1
  __int64 *v3; // rax@2
  signed __int64 v4; // rcx@2
  __int64 *v5; // rsi@2
  unsigned __int64 v6; // rax@3
  unsigned __int64 v7; // rdx@3
  __int64 v8; // rax@3
  signed __int64 result; // rax@4

  v1 = __CFADD__(a1, 16LL);
  v2 = a1 + 16;
  if ( v1 )
  {
    result = 0LL;
  }
  else
  {
    v3 = (__int64 *)malloc(v2);
    v4 = 0LL;
    v5 = v3;
    if ( v3 )
    {
      *((_DWORD *)v3 + 3) = 336984906;
      v4 = (signed __int64)(v3 + 2);
      v6 = (unsigned __int64)v3
         + -257 * ((unsigned __int64)(0x0FF00FF00FF00FF01LL * (unsigned __int128)(unsigned __int64)(v3 + 2) >> 64) >> 8)
         + 16;
      v7 = v6;
      v8 = qword_6134C0[v6];
      qword_6134C0[v7] = v4;
      *v5 = v8;
    }
    result = v4;
  }
  return result;
}

void __fastcall sub_40B990(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax@4
  __int64 v2; // rcx@4
  __int64 v3; // rax@9
  __int64 *v4; // rcx@6

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 - 4) == 336984906 )
    {
      v1 = a1 - 257 * ((unsigned __int64)(0x0FF00FF00FF00FF01LL * (unsigned __int128)a1 >> 64) >> 8);
      v2 = qword_6134C0[v1];
      if ( v2 )
      {
        if ( v2 == a1 )
        {
          v4 = &qword_6134C0[v1];
LABEL_12:
          *v4 = *(_QWORD *)(a1 - 16);
          free((void *)(a1 - 16));
        }
        else
        {
          while ( 1 )
          {
            v3 = *(_QWORD *)(v2 - 16);
            if ( !v3 )
              break;
            if ( a1 == v3 )
            {
              v4 = (__int64 *)(v2 - 16);
              goto LABEL_12;
            }
            v2 = *(_QWORD *)(v2 - 16);
          }
        }
      }
    }
  }
}

size_t __fastcall sub_40BA20(char *s)
{
  __int64 v1; // rbx@2
  wchar_t v3; // eax@6
  signed __int64 v4; // rax@10
  char *v5; // rbp@10
  signed __int64 v6; // rax@10
  size_t v7; // rax@10
  size_t v8; // rax@20
  char v9; // [sp+0h] [bp-58h]@4
  mbstate_t ps; // [sp+4h] [bp-54h]@4
  char i; // [sp+Ch] [bp-4Ch]@4
  char *sa; // [sp+10h] [bp-48h]@4
  size_t v13; // [sp+18h] [bp-40h]@6
  char v14; // [sp+20h] [bp-38h]@6
  wchar_t pwc; // [sp+24h] [bp-34h]@6

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
        if ( ((unsigned int)dword_410680[(unsigned __int64)(((unsigned __int8)*sa >> 5) & 7)] >> *sa) & 1 )
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
      if ( v7 == -1LL )
      {
        v13 = 1LL;
        v14 = 0;
        goto LABEL_8;
      }
      if ( v7 == -2LL )
      {
        v8 = strlen(sa);
        v14 = 0;
        v13 = v8;
        goto LABEL_8;
      }
      if ( !v7 )
      {
        v13 = 1LL;
        if ( *sa )
          __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 0xB2u, "mbuiter_multi_next");
        if ( pwc )
          __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 0xB3u, "mbuiter_multi_next");
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

int __fastcall sub_40BC60(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_613228 )
    v1 = unk_613228;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40BC78(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_612E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
