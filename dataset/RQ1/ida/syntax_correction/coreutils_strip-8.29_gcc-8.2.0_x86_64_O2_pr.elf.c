
#include "decompile_idapro.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  __int64 v3; // r15
  char *v6; // rdi
  __int64 v7; // rbx
  _BYTE *v8; // r13
  unsigned int v9; // r14d
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  void *v14; // rdi
  char *v15; // rax
  int v16; // eax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  __int64 v21; // rdx
  char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  char *v25; // rax
  char v26; // di
  char **v27; // rax
  unsigned int v28; // esi
  char *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rsi
  char *v34; // rbx
  int *v35; // rax
  const char *v36; // rax
  __int64 v37; // rbx
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char v42; // [rsp+8h] [rbp-50h]
  char v43; // [rsp+Dh] [rbp-4Bh]
  char v44; // [rsp+Eh] [rbp-4Ah]
  char v45; // [rsp+Fh] [rbp-49h]
  unsigned int v46; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v47[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = 0LL;
  v6 = *a2;
  v47[0] = 0LL;
  sub_407110(v6);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40CD90(sub_4053D0);
  if ( a1 > 1 )
    v3 = sub_409300(8LL * (a1 - 1));
  v45 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v44 = 0;
  v43 = 0;
  while ( 1 )
  {
    v46 = -1;
    v10 = sub_40B9D0((unsigned int)a1, a2, "-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:", &off_40EBE0, &v46);
    v11 = v10;
    if ( v10 == -1 )
      break;
    v12 = v10 - 48;
    if ( (unsigned int)v12 <= 9 )
    {
      v23 = v7 + 1;
      if ( v7 + 1 >= v47[0] )
      {
        v42 = v11;
        v24 = sub_409460(v8, v47);
        LOBYTE(v11) = v42;
        v23 = v7 + 1;
        v8 = (_BYTE *)v24;
      }
      v8[v7] = v11;
      v7 = v23;
      v8[v23] = 0;
    }
    else
    {
      v13 = v11 + 131;
      switch ( v13 )
      {
        case 0LL:
          sub_4091C0(
            (_DWORD)stdout,
            (unsigned int)"pr",
            (unsigned int)&unk_40CEF3,
            (_DWORD)off_6142B8,
            (unsigned int)"Pete TerMaat",
            (unsigned int)"Roland Huebner",
            0LL,
            v12);
          exit(0);
        case 1LL:
          sub_404DE0(0);
        case 132LL:
          v20 = nptr;
          if ( qword_614418 || *nptr != 43 )
            goto LABEL_36;
          if ( (unsigned __int8)sub_402820(4294967294LL, 43LL, nptr + 1) )
            goto LABEL_9;
          v20 = nptr;
LABEL_36:
          v21 = v9;
          v7 = 0LL;
          ++v9;
          *(_QWORD *)(v3 + 8 * v21) = v20;
          continue;
        case 199LL:
          v7 = 0LL;
          qword_6143C0 = (__int64)nptr;
          continue;
        case 201LL:
        case 233LL:
          byte_614447 = 1;
          v7 = 0LL;
          continue;
        case 205LL:
          byte_61443C = 1;
          v7 = 0LL;
          continue;
        case 209LL:
          v7 = 0LL;
          byte_614280 = 0;
          v19 = dcgettext(0LL, "'-N NUMBER' invalid starting line number", 5);
          dword_61427C = sub_409680(nptr, 0xFFFFFFFF80000000LL, 0x7FFFFFFFLL, "", v19, 0LL);
          continue;
        case 214LL:
          byte_6143E0 = 1;
          off_614270 = "";
          dword_6143DC = 0;
          v45 = 0;
          if ( !nptr )
            goto LABEL_9;
          sub_402920();
          v7 = 0LL;
          continue;
        case 215LL:
          byte_6142B5 = 0;
          v7 = 0LL;
          byte_61444A = 0;
          continue;
        case 218LL:
          v7 = 0LL;
          byte_61443D = 1;
          v22 = dcgettext(0LL, "'-W PAGE_WIDTH' invalid number of characters", 5);
          v44 = 0;
          dword_6142AC = sub_409680(nptr, 1LL, 0x7FFFFFFFLL, "", v22, 0LL);
          continue;
        case 228LL:
          byte_614445 = 1;
          v7 = 0LL;
          byte_6142B4 = 0;
          continue;
        case 229LL:
          byte_614444 = 1;
          v7 = 0LL;
          continue;
        case 230LL:
          byte_6143E9 = 1;
          v7 = 0LL;
          continue;
        case 231LL:
          byte_6143E8 = 1;
          v7 = 0LL;
          continue;
        case 232LL:
          if ( nptr )
            sub_4052E0(nptr);
          byte_614435 = 1;
          v7 = 0LL;
          continue;
        case 235LL:
          v7 = 0LL;
          qword_6143C8 = (__int64)nptr;
          continue;
        case 236LL:
          if ( nptr )
            sub_4052E0(nptr);
          byte_614434 = 1;
          v7 = 0LL;
          continue;
        case 239LL:
          v7 = 0LL;
          v18 = dcgettext(0LL, "'-l PAGE_LENGTH' invalid number of lines", 5);
          dword_6142B0 = sub_409680(nptr, 1LL, 0x7FFFFFFFLL, "", v18, 0LL);
          continue;
        case 240LL:
          byte_61444F = 1;
          v7 = 0LL;
          byte_6142B4 = 0;
          continue;
        case 241LL:
          byte_6143FC = 1;
          if ( !nptr )
            goto LABEL_9;
          v7 = 0LL;
          sub_4052E0(nptr);
          continue;
        case 242LL:
          v7 = 0LL;
          v17 = dcgettext(0LL, "'-o MARGIN' invalid line offset", 5);
          dword_61442C = sub_409680(nptr, 0LL, 0x7FFFFFFFLL, "", v17, 0LL);
          continue;
        case 245LL:
          byte_6143E1 = 1;
          v7 = 0LL;
          continue;
        case 246LL:
          v43 = byte_6143E0;
          v45 = byte_6143E0;
          if ( byte_6143E0 )
            goto LABEL_9;
          if ( nptr )
          {
            sub_402920();
            v7 = 0LL;
            v45 = 1;
          }
          else
          {
            v45 = 1;
            v7 = 0LL;
          }
          v43 = 1;
          continue;
        case 247LL:
          byte_6142B5 = 0;
          v7 = 0LL;
          byte_61444A = 1;
          continue;
        case 249LL:
          byte_6143EA = 1;
          v7 = 0LL;
          continue;
        case 250LL:
          v15 = dcgettext(0LL, "'-w PAGE_WIDTH' invalid number of characters", 5);
          v16 = sub_409680(nptr, 1LL, 0x7FFFFFFFLL, "", v15, 0LL);
          v43 = byte_61443D;
          v44 = byte_61443D;
          if ( byte_61443D )
            goto LABEL_9;
          dword_6142AC = v16;
          v7 = 0LL;
          v44 = 1;
          v43 = 1;
          continue;
        case 259LL:
          v7 = 0LL;
          sub_402950(nptr, a2, v13);
          v14 = v8;
          v8 = 0LL;
          free(v14);
          v47[0] = 0LL;
          continue;
        case 260LL:
          if ( !nptr )
            goto LABEL_97;
          if ( !(unsigned __int8)sub_402820(v46, 0LL, nptr) )
          {
            v37 = sub_408D30(nptr);
            v38 = dcgettext(0LL, "invalid page range %s", 5);
            error(1, 0, v38, v37);
LABEL_97:
            v39 = dcgettext(0LL, "'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument", 5);
            error(1, 0, v39);
LABEL_98:
            v40 = dcgettext(0LL, "cannot specify number of columns when printing in parallel", 5);
            error(1, 0, v40);
LABEL_99:
            v41 = dcgettext(0LL, "cannot specify both printing across and printing in parallel", 5);
            error(1, 0, v41);
            start();
          }
LABEL_9:
          v7 = 0LL;
          break;
        default:
          sub_404DE0(1);
      }
    }
  }
  if ( v8 )
  {
    sub_402950(v8, a2, v10);
    free(v8);
  }
  if ( !qword_6143C0 )
    goto LABEL_88;
  while ( 1 )
  {
    v25 = getenv("TZ");
    qword_6143B8 = sub_40BBA0(v25);
    if ( !qword_614418 )
      qword_614418 = 1LL;
    v26 = byte_61444F;
    if ( byte_61444F )
    {
      if ( byte_61444B )
        goto LABEL_98;
      if ( byte_614445 )
        goto LABEL_99;
    }
    if ( v43 )
    {
      if ( v44 )
      {
        if ( byte_61444F || byte_61444B )
        {
          byte_61443D = 1;
          if ( !v45 )
            goto LABEL_66;
LABEL_83:
          byte_6143E0 = 1;
          goto LABEL_66;
        }
        byte_61443C = 1;
      }
      else if ( byte_6143E0 != 1 && v45 && (byte_61444F || byte_61444B) )
      {
        if ( byte_61443D )
          goto LABEL_83;
        byte_61443C = 1;
        if ( dword_6143DC > 0 )
          goto LABEL_83;
      }
    }
LABEL_66:
    if ( a1 > dword_61433C )
    {
      v27 = &a2[dword_61433C];
      v28 = v9 + a1 - dword_61433C;
      do
      {
        v29 = *v27;
        v30 = v9++;
        ++v27;
        *(_QWORD *)(v3 + 8 * v30) = v29;
      }
      while ( v9 != v28 );
      dword_61433C = a1;
    }
    if ( v9 )
    {
      if ( v26 )
      {
        sub_403E40(v9, v3);
      }
      else
      {
        v31 = v3 + 8LL * (v9 - 1) + 8;
        do
        {
          v32 = v3;
          v3 += 8LL;
          sub_403E40(1LL, v32);
        }
        while ( v31 != v3 );
      }
    }
    else
    {
      sub_403E40(0LL, 0LL);
    }
    free(ptr);
    free(qword_614398);
    free(qword_614478);
    free(qword_614458);
    free(qword_614450);
    free(qword_614470);
    if ( !byte_614446 || (unsigned int)sub_40AA20(stdin) != -1 )
      return (unsigned __int8)byte_614420;
    v34 = dcgettext(0LL, "standard input", 5);
    v35 = __errno_location();
    error(1, *v35, v34);
LABEL_88:
    if ( !getenv("POSIXLY_CORRECT") || (unsigned __int8)sub_405590(2LL) )
      v36 = "%Y-%m-%d %H:%M";
    else
      v36 = "%b %e %H:%M %Y";
    qword_6143C0 = (__int64)v36;
  }
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

__int64 *sub_4025FB()
{
  return &program_invocation_short_name;
}

__int64 sub_40261A()
{
  return 0LL;
}

__int64 *sub_402651()
{
  __int64 *result; // rax

  if ( !byte_614368 )
  {
    while ( qword_614370 < (unsigned __int64)(&qword_613E48 - qword_613E40 - 1) )
      ((void (*)(void))qword_613E40[++qword_614370])();
    result = sub_4025FB();
    byte_614368 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_4026A8()
{
  return sub_40261A();
}

__int64 sub_4026B0()
{
  __int64 result; // rax
  _DWORD *v1; // rdx

  result = (unsigned int)dword_614298;
  v1 = qword_614478;
  if ( dword_614298 )
  {
    result = 0LL;
    do
    {
      if ( v1[4] <= 1u || byte_6142B4 && (int)v1[11] > 0 && (int)v1[12] > 0 )
        result = (unsigned int)(result + 1);
      v1 += 16;
    }
    while ( v1 != (_DWORD *)((char *)qword_614478 + 64 * (unsigned int)(dword_614298 - 1) + 64) );
  }
  return result;
}

unsigned __int64 sub_402710()
{
  unsigned __int64 result; // rax
  _DWORD *v1; // rdi
  int v2; // ecx
  char v3; // si
  char *v4; // rdx

  result = (unsigned int)dword_614298;
  v1 = qword_614478;
  if ( dword_614298 )
  {
    v2 = dword_614410;
    result = (unsigned __int64)qword_614478;
    v3 = 0;
    v4 = (char *)qword_614478 + 64 * (unsigned int)(dword_614298 - 1) + 64;
    do
    {
      if ( *(_DWORD *)(result + 16) == 2 )
      {
        *(_DWORD *)(result + 16) = 0;
        ++v2;
        v3 = 1;
      }
      result += 64LL;
    }
    while ( (char *)result != v4 );
    if ( v3 )
      dword_614410 = v2;
  }
  if ( byte_6142B4 )
  {
    result = v1[4] != 3;
    dword_614410 = v1[4] != 3;
  }
  return result;
}

void *__fastcall sub_402790(char a1)
{
  void *result; // rax
  int v2; // edx

  result = qword_614470;
  v2 = dword_614468;
  if ( (unsigned int)dword_614468 >= (unsigned __int64)qword_614460 )
  {
    result = (void *)sub_409460(qword_614470, &qword_614460);
    qword_614470 = result;
    v2 = dword_614468;
    *((_BYTE *)result + (unsigned int)dword_614468) = a1;
  }
  else
  {
    *((_BYTE *)qword_614470 + (unsigned int)dword_614468) = a1;
  }
  dword_614468 = v2 + 1;
  return result;
}

__int64 sub_4027F0()
{
  char *v0; // rax
  __int64 v1; // rdx

  v0 = dcgettext(0LL, "integer overflow", 5);
  error(1, 0, v0);
  return sub_402820(1LL, 0LL, v1);
}

__int64 __fastcall sub_402820(unsigned int a1, char a2, char *a3)
{
  unsigned int v4; // eax
  char v5; // al
  char *v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]

  v4 = sub_40A5E0(a3);
  if ( (v4 & 0xFFFFFFFD) != 0 )
    goto LABEL_11;
  if ( v7 == a3 || !v8 )
    return 0LL;
  v5 = *v7;
  if ( *v7 != 58 )
    goto LABEL_5;
  v4 = sub_40A5E0(v7 + 1);
  if ( v4 )
LABEL_11:
    sub_40A550(v4, a1, (unsigned int)a2, &off_40EBE0, a3);
  if ( v7 == v7 + 1 )
    return 0LL;
  v5 = *v7;
LABEL_5:
  if ( !v5 )
  {
    qword_614418 = v8;
    qword_614290 = -1LL;
    return 1LL;
  }
  return 0LL;
}

size_t __fastcall sub_402920(const char *a1, __int64 a2)
{
  size_t result; // rax
  __int64 v3; // rdx

  result = strlen(a1);
  if ( result > 0x7FFFFFFF )
  {
    sub_4027F0();
    return sub_402950(a1, a2, v3);
  }
  else
  {
    off_614270 = (void *)a1;
    dword_6143DC = result;
  }
  return result;
}

__int64 __fastcall sub_402950(__int64 a1)
{
  char *v1; // rax
  __int64 result; // rax

  v1 = dcgettext(0LL, "invalid number of columns", 5);
  result = sub_409680(a1, 1LL, 0x7FFFFFFFLL, "", v1, 0LL);
  byte_61444B = 1;
  dword_614298 = result;
  return result;
}

void __fastcall sub_4029A0(__int64 a1)
{
  FILE *v2; // rdi
  char *v3; // rax
  char *v4; // rdx
  int v5; // ecx
  const char *v6; // rbx
  int *v7; // rax
  const char *v8; // rbx
  int *v9; // rax

  if ( *(_DWORD *)(a1 + 16) == 3 )
    return;
  v2 = *(FILE **)a1;
  if ( (v2->_flags & 0x20) != 0 )
  {
    v8 = (const char *)sub_408BB0(0LL, 3LL, *(_QWORD *)(a1 + 8));
    v9 = __errno_location();
    error(1, *v9, "%s", v8);
    sub_402AB0();
    return;
  }
  if ( fileno(v2) && (unsigned int)sub_40AA20(*(FILE **)a1) )
  {
    v6 = (const char *)sub_408BB0(0LL, 3LL, *(_QWORD *)(a1 + 8));
    v7 = __errno_location();
    error(1, *v7, "%s", v6);
    return;
  }
  if ( byte_61444F )
  {
    *(_DWORD *)(a1 + 16) = 3;
    *(_DWORD *)(a1 + 48) = 0;
    goto LABEL_12;
  }
  v3 = (char *)qword_614478;
  if ( !dword_614298 )
  {
LABEL_12:
    --dword_614410;
    return;
  }
  v4 = (char *)qword_614478 + 64 * (unsigned int)(dword_614298 - 1) + 64;
  do
  {
    v5 = *((_DWORD *)v3 + 11);
    *((_DWORD *)v3 + 4) = 3;
    if ( !v5 )
      *((_DWORD *)v3 + 12) = 0;
    v3 += 64;
  }
  while ( v3 != v4 );
  --dword_614410;
}

__int64 __fastcall sub_402AB0(const char *a1, int a2)
{
  int v2; // r12d
  unsigned int tv_nsec; // r14d
  __int64 v4; // r13
  void *v5; // rbp
  char *v6; // rax
  int v7; // ebx
  int v8; // ebx
  __int64 result; // rax
  const char *v10; // rax
  struct timespec si128; // [rsp+0h] [rbp-128h] BYREF
  char v12[32]; // [rsp+10h] [rbp-118h] BYREF
  char v13[64]; // [rsp+30h] [rbp-F8h] BYREF
  struct stat stat_buf; // [rsp+70h] [rbp-B8h] BYREF

  v2 = a2;
  if ( !strcmp(a1, "-") )
  {
    v2 = -1;
    if ( tp.tv_sec )
      goto LABEL_4;
    goto LABEL_10;
  }
  if ( a2 < 0 || __fxstat(1, a2, &stat_buf) )
  {
    if ( tp.tv_sec )
    {
LABEL_4:
      si128 = (struct timespec)_mm_load_si128((const __m128i *)&tp);
      tv_nsec = si128.tv_nsec;
      goto LABEL_5;
    }
LABEL_10:
    sub_405550(&tp);
    goto LABEL_4;
  }
  tv_nsec = stat_buf.st_mtim.tv_nsec;
  si128 = stat_buf.st_mtim;
LABEL_5:
  if ( sub_40BE80(qword_6143B8, &si128, v13) )
  {
    v4 = sub_4070F0(0LL, -1LL, qword_6143C0, v13, qword_6143B8, tv_nsec) + 1;
    v5 = (void *)sub_409300(v4);
    sub_4070F0(v5, v4, qword_6143C0, v13, qword_6143B8, tv_nsec);
  }
  else
  {
    v5 = (void *)sub_409300(33LL);
    v10 = (const char *)sub_4055F0(si128.tv_sec, v12);
    __sprintf_chk(v5, 1LL, 33LL, "%s.%09d", v10, tv_nsec);
  }
  free(qword_6143B0);
  v6 = (char *)qword_6143C8;
  qword_6143B0 = v5;
  if ( !qword_6143C8 )
  {
    v6 = "";
    if ( v2 >= 0 )
      v6 = (char *)a1;
  }
  v7 = dword_6142AC;
  qword_6143A8 = v6;
  v8 = v7 - sub_405850((char *)v5);
  result = sub_405850(qword_6143A8);
  dword_6143A0 = v8 - result;
  return result;
}

void __fastcall sub_402CA0(int a1)
{
  int v1; // ebx
  char *IO_write_ptr; // rax

  v1 = dword_614428;
  if ( byte_614434 )
  {
    dword_614430 = a1 - dword_614428;
  }
  else
  {
    while ( a1 >= ++v1 )
    {
      IO_write_ptr = stdout->_IO_write_ptr;
      if ( IO_write_ptr >= stdout->_IO_write_end )
      {
        __overflow(stdout, 32);
      }
      else
      {
        stdout->_IO_write_ptr = IO_write_ptr + 1;
        *IO_write_ptr = 32;
      }
    }
    dword_614428 = a1;
  }
}

int sub_402D10()
{
  int v0; // ebp
  int v1; // r12d
  char *v2; // rax
  int v3; // ebx
  char v4; // si
  char *IO_write_ptr; // rax

  v0 = dword_614428;
  v1 = dword_614428 + dword_614430;
  while ( 1 )
  {
    LODWORD(v2) = v1 - v0;
    if ( v1 - v0 <= 1 )
      break;
    LODWORD(v2) = v0 / dword_61429C;
    v3 = dword_61429C - v0 % dword_61429C + v0;
    if ( v1 < v3 )
      break;
    v4 = byte_6142A0;
    IO_write_ptr = stdout->_IO_write_ptr;
    if ( IO_write_ptr >= stdout->_IO_write_end )
    {
      __overflow(stdout, (unsigned __int8)byte_6142A0);
      v0 = v3;
    }
    else
    {
      v0 += dword_61429C - v0 % dword_61429C;
      stdout->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = v4;
    }
  }
  while ( v1 >= ++v0 )
  {
    v2 = stdout->_IO_write_ptr;
    if ( v2 >= stdout->_IO_write_end )
    {
      LODWORD(v2) = __overflow(stdout, 32);
    }
    else
    {
      stdout->_IO_write_ptr = v2 + 1;
      *v2 = 32;
    }
  }
  dword_614428 = v1;
  dword_614430 = 0;
  return (int)v2;
}

int sub_402DD0()
{
  int result; // eax
  unsigned __int8 *v1; // r12
  int v2; // ebp
  unsigned __int8 *v3; // rbx
  int v4; // r14d
  int v5; // esi
  char *IO_write_ptr; // rax
  int v7; // edx

  result = dword_614430;
  if ( dword_6143D8 <= 0 )
  {
    if ( dword_614430 > 0 )
      return sub_402D10();
  }
  else
  {
    v1 = (unsigned __int8 *)off_614270;
    v2 = dword_6143DC;
    while ( 1 )
    {
      v3 = v1;
      v4 = v2 + (_DWORD)v1;
      while ( v4 - (int)v3 > 0 )
      {
        while ( 1 )
        {
          v5 = *v3++;
          if ( (_BYTE)v5 == 32 )
            break;
          if ( result > 0 )
          {
            sub_402D10();
            v5 = *(v3 - 1);
          }
          IO_write_ptr = stdout->_IO_write_ptr;
          if ( IO_write_ptr >= stdout->_IO_write_end )
          {
            __overflow(stdout, v5);
          }
          else
          {
            stdout->_IO_write_ptr = IO_write_ptr + 1;
            *IO_write_ptr = v5;
          }
          ++dword_614428;
          result = dword_614430;
          if ( v4 - (int)v3 <= 0 )
            goto LABEL_11;
        }
        dword_614430 = ++result;
      }
LABEL_11:
      v7 = 0;
      if ( v2 >= 0 )
        v7 = v2;
      v2 = v2 - 1 - v7;
      v1 += v7;
      if ( result > 0 )
        sub_402D10();
      result = dword_6143D8 - 1;
      dword_6143D8 = result;
      if ( result <= 0 )
        break;
      result = dword_614430;
    }
  }
  return result;
}

__int64 sub_402EE0()
{
  __int64 v0; // rbx
  char *v1; // rax
  __int64 result; // rax
  char *v3; // rax
  char v4[312]; // [rsp+0h] [rbp-138h] BYREF

  dword_614428 = 0;
  sub_402CA0(dword_61442C);
  sub_402D10();
  v0 = qword_614408;
  if ( qword_614408 )
  {
    v1 = dcgettext(0LL, "Page %lu", 5);
    __sprintf_chk(v4, 1LL, 276LL, v1, v0);
    sub_405850(v4);
    result = __printf_chk(1LL, "\n\n%*s%s%*s%s%*s%s\n\n\n", (unsigned int)dword_61442C, "", qword_6143B0);
    byte_614448 = 0;
    dword_614428 = 0;
  }
  else
  {
    v3 = dcgettext(0LL, "page number overflow", 5);
    error(1, 0, v3);
    return sub_402FE0();
  }
  return result;
}

__int64 __fastcall sub_402FE0(unsigned __int8 a1)
{
  unsigned __int8 *v1; // rbx
  int v2; // eax
  int v3; // esi
  __int64 result; // rax
  signed int v5; // edx
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned __int8 *v8; // rdx
  int v9; // eax
  char v10[28]; // [rsp+Ch] [rbp-1Ch] BYREF

  v1 = (unsigned __int8 *)qword_614398;
  if ( byte_6142A8 == a1 )
  {
    v3 = dword_614424;
    v7 = dword_6142A4 - dword_614424 % dword_6142A4;
    v5 = v7;
    if ( !byte_614435 )
    {
LABEL_9:
      *(_BYTE *)qword_614398 = a1;
      result = 1LL;
      goto LABEL_10;
    }
    if ( !v7 )
    {
      result = 0LL;
      goto LABEL_12;
    }
    result = v7;
  }
  else
  {
    if ( a1 != 9 )
    {
      if ( ((*__ctype_b_loc())[a1] & 0x4000) != 0 )
      {
        v9 = dword_614424;
        *v1 = a1;
        v3 = v9 + 1;
        result = 1LL;
        goto LABEL_12;
      }
      if ( byte_6143EA )
        goto LABEL_25;
      if ( byte_6143E9 )
      {
        if ( (a1 & 0x80u) == 0 )
        {
          v2 = dword_614424;
          *v1 = 94;
          v3 = v2 + 2;
          v1[1] = a1 ^ 0x40;
          result = 2LL;
LABEL_12:
          dword_614424 = v3;
          return result;
        }
LABEL_25:
        *v1 = 92;
        __sprintf_chk(v10, 1LL, 4LL, "%03o", a1);
        v1[1] = v10[0];
        v1[2] = v10[1];
        v1[3] = v10[2];
        v3 = dword_614424 + 4;
        result = 4LL;
        goto LABEL_12;
      }
      v3 = dword_614424;
      if ( a1 != 8 )
      {
        *v1 = a1;
        result = 1LL;
        goto LABEL_12;
      }
      *v1 = 8;
      if ( v3 )
      {
        v6 = 1;
        v5 = -1;
        result = 1LL;
LABEL_15:
        if ( v6 >= v3 )
        {
          dword_614424 = 0;
          return result;
        }
LABEL_11:
        v3 += v5;
        goto LABEL_12;
      }
      goto LABEL_24;
    }
    v3 = dword_614424;
    result = ((unsigned int)(dword_614424 >> 31) >> 29)
           - (((_BYTE)dword_614424 + ((unsigned int)(dword_614424 >> 31) >> 29)) & 7)
           + 8;
    v5 = ((unsigned int)(dword_614424 >> 31) >> 29)
       - (((_BYTE)dword_614424 + ((unsigned int)(dword_614424 >> 31) >> 29)) & 7)
       + 8;
    if ( !byte_614435 )
      goto LABEL_9;
  }
  v8 = (unsigned __int8 *)qword_614398 + (unsigned int)(result - 1) + 1;
  do
    *v1++ = 32;
  while ( v1 != v8 );
  v5 = result;
LABEL_10:
  if ( v5 >= 0 )
    goto LABEL_11;
  if ( v3 )
  {
    v6 = -v5;
    goto LABEL_15;
  }
LABEL_24:
  dword_614424 = 0;
  return 0LL;
}

int __fastcall sub_4031E0(unsigned __int8 a1)
{
  char *IO_write_ptr; // rax

  if ( byte_614434 )
  {
    if ( a1 == 32 )
    {
      LODWORD(IO_write_ptr) = ++dword_614430;
      return (int)IO_write_ptr;
    }
    if ( dword_614430 > 0 )
      sub_402D10();
    if ( ((*__ctype_b_loc())[a1] & 0x4000) != 0 )
    {
      ++dword_614428;
    }
    else if ( a1 == 8 )
    {
      --dword_614428;
    }
  }
  IO_write_ptr = stdout->_IO_write_ptr;
  if ( IO_write_ptr >= stdout->_IO_write_end )
  {
    LODWORD(IO_write_ptr) = __overflow(stdout, a1);
  }
  else
  {
    stdout->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = a1;
  }
  return (int)IO_write_ptr;
}

__int64 __fastcall sub_403280(_DWORD *a1)
{
  __int64 v1; // r12
  char *v2; // rbp
  unsigned __int8 *v3; // rbx
  unsigned __int8 *v4; // rbp
  int v5; // eax
  int v6; // edx
  __int64 result; // rax
  int *v8; // rcx
  char *v9; // rax
  char *v10; // rdx

  v1 = (int)a1[10];
  v2 = (char *)qword_614470;
  byte_6143D0 = 1;
  a1[10] = v1 + 1;
  v3 = (unsigned __int8 *)&v2[*((int *)qword_614458 + v1)];
  v4 = (unsigned __int8 *)&v2[*((int *)qword_614458 + v1 + 1)];
  if ( byte_614448 )
    sub_402EE0();
  if ( a1[4] == 1 )
  {
    v8 = (int *)qword_614478;
    if ( dword_614298 > 0 )
    {
      v9 = (char *)qword_614478;
      v10 = (char *)qword_614478 + 64 * (unsigned int)(dword_614298 - 1) + 64;
      do
      {
        *((_DWORD *)v9 + 4) = 2;
        v9 += 64;
      }
      while ( v9 != v10 );
    }
    if ( v8[12] <= 0 )
    {
      if ( !byte_6142B5 )
        byte_6143D0 = 0;
      return 1LL;
    }
  }
  if ( dword_6143DC < dword_6143D4 )
  {
    sub_402CA0(dword_6143D4 - dword_6143DC);
    dword_6143D4 = 0;
  }
  if ( byte_6143E0 )
    sub_402DD0();
  while ( v4 != v3 )
    sub_4031E0(*v3++);
  if ( dword_614430 )
    return 1LL;
  v5 = a1[13];
  v6 = v5 + *((_DWORD *)qword_614450 + v1);
  dword_614428 = v6;
  if ( v5 - dword_6143DC != dword_61442C )
    return 1LL;
  result = 1LL;
  dword_614428 = v6 - dword_6143DC;
  return result;
}

void __fastcall sub_403410(_DWORD *a1, _DWORD *a2)
{
  char *v2; // rax
  int v3; // ecx
  char *v4; // rdx

  if ( byte_61444F )
  {
    *a1 = 2;
    --dword_614410;
    *a2 = 0;
  }
  else
  {
    v2 = (char *)qword_614478;
    if ( dword_614298 )
    {
      v3 = 2 - (byte_6142B4 != 0);
      v4 = (char *)qword_614478 + 64 * (unsigned int)(dword_614298 - 1) + 64;
      do
      {
        *((_DWORD *)v2 + 4) = v3;
        v2 += 64;
      }
      while ( v2 != v4 );
    }
    *a2 = 0;
    --dword_614410;
  }
}

void __fastcall sub_403490(__int64 a1, int a2)
{
  _IO_FILE *v3; // rbx
  unsigned __int8 *v4; // rax
  int v5; // eax
  char v6; // bp
  char *v7; // rax
  char *v8; // rax
  char v9; // al
  char *v10; // rax
  char *v11; // rdx
  char *IO_read_ptr; // rax
  int v13; // edi
  char *v14; // rax

  v3 = *(_IO_FILE **)a1;
  v4 = *(unsigned __int8 **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v5 = __uflow(*(_IO_FILE **)a1);
  }
  else
  {
    v3->_IO_read_ptr = (char *)(v4 + 1);
    v5 = *v4;
  }
  if ( v5 == 12 )
  {
    if ( !*(_BYTE *)(a1 + 57) )
    {
      v6 = byte_614390;
      v9 = byte_614390;
      if ( !byte_614390 )
      {
        v6 = 1;
LABEL_31:
        IO_read_ptr = v3->_IO_read_ptr;
        if ( IO_read_ptr >= v3->_IO_read_end )
        {
          v13 = __uflow(v3);
        }
        else
        {
          v3->_IO_read_ptr = IO_read_ptr + 1;
          v13 = (unsigned __int8)*IO_read_ptr;
        }
        if ( v13 != 10 )
          ungetc(v13, v3);
        sub_403410((_DWORD *)(a1 + 16), (_DWORD *)(a1 + 48));
        goto LABEL_7;
      }
      *(_BYTE *)(a1 + 57) = 1;
LABEL_26:
      if ( v9 )
      {
        if ( byte_61444F )
        {
          *(_BYTE *)(a1 + 57) = 0;
        }
        else
        {
          v10 = (char *)qword_614478;
          if ( dword_614298 )
          {
            v11 = (char *)qword_614478 + 64 * (unsigned int)(dword_614298 - 1) + 64;
            do
            {
              v10[57] = 0;
              v10 += 64;
            }
            while ( v10 != v11 );
          }
        }
      }
      goto LABEL_31;
    }
    v8 = v3->_IO_read_ptr;
    if ( v8 >= v3->_IO_read_end )
    {
      v5 = __uflow(v3);
    }
    else
    {
      v3->_IO_read_ptr = v8 + 1;
      v5 = (unsigned __int8)*v8;
    }
    if ( v5 == 10 )
    {
      v14 = v3->_IO_read_ptr;
      if ( v14 >= v3->_IO_read_end )
      {
        v5 = __uflow(v3);
      }
      else
      {
        v3->_IO_read_ptr = v14 + 1;
        v5 = (unsigned __int8)*v14;
      }
    }
    *(_BYTE *)(a1 + 57) = 0;
    v6 = v5 == 12;
  }
  else
  {
    *(_BYTE *)(a1 + 57) = 0;
    v6 = 0;
  }
  if ( !byte_614390 )
    goto LABEL_14;
  *(_BYTE *)(a1 + 57) = 1;
  if ( v5 != 10 )
  {
    while ( v5 != 12 )
    {
      if ( v5 == -1 )
      {
        sub_4029A0(a1);
        goto LABEL_7;
      }
      v7 = v3->_IO_read_ptr;
      if ( v7 < v3->_IO_read_end )
      {
        v3->_IO_read_ptr = v7 + 1;
        v5 = (unsigned __int8)*v7;
      }
      else
      {
        v5 = __uflow(v3);
      }
LABEL_14:
      if ( v5 == 10 )
        goto LABEL_7;
    }
    v9 = byte_614390;
    goto LABEL_26;
  }
LABEL_7:
  if ( byte_614280 && (byte_61444F != 1 || a2 == 1) && !v6 )
    ++dword_614284;
}

__int64 __fastcall sub_4036C0(void (__fastcall **a1)(_QWORD))
{
  int v1; // eax
  char *v2; // rbx
  __int64 v3; // r12
  __int64 result; // rax
  int v5; // ebx
  int v6; // ebx
  int v7; // ecx

  v1 = __sprintf_chk(ptr, 1LL, -1LL, "%*d", dword_614278, (unsigned int)dword_614400);
  ++dword_614400;
  v2 = (char *)ptr + v1 - dword_614278;
  v3 = (__int64)&v2[dword_614278 - 1 + 1];
  if ( dword_614278 > 0 )
  {
    do
      (*a1)((unsigned int)*v2++);
    while ( v2 != (char *)v3 );
  }
  if ( dword_614298 <= 1 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))*a1)((unsigned int)byte_614288);
    if ( byte_614288 == 9 )
    {
      v7 = dword_61429C - dword_614428 % dword_61429C;
      result = (unsigned int)(v7 + dword_614428);
      dword_614428 += v7;
    }
  }
  else if ( byte_614288 == 9 )
  {
    result = (unsigned int)(dword_6143F8 - dword_614278);
    v5 = result - 1;
    if ( dword_6143F8 - dword_614278 > 0 )
    {
      do
      {
        v6 = v5 - 1;
        result = ((__int64 (__fastcall *)(__int64))*a1)(32LL);
        if ( v6 == -1 )
          break;
        v5 = v6 - 1;
        result = ((__int64 (__fastcall *)(__int64))*a1)(32LL);
      }
      while ( v5 != -1 );
    }
  }
  else
  {
    result = ((__int64 (*)(void))*a1)();
  }
  if ( byte_61443D )
  {
    if ( !byte_61444F )
    {
      result = (unsigned int)dword_6143F8;
      dword_614424 += dword_6143F8;
    }
  }
  return result;
}

void __fastcall sub_4037E0(__int64 a1)
{
  int v2; // edi

  v2 = *(_DWORD *)(a1 + 52);
  dword_6143D4 = v2;
  if ( v2 > dword_6143DC )
  {
    sub_402CA0(v2 - dword_6143DC);
    dword_6143D4 = 0;
    if ( !byte_6143E0 )
    {
LABEL_3:
      if ( !*(_BYTE *)(a1 + 56) )
        return;
LABEL_7:
      sub_4036C0((void (__fastcall **)(_QWORD))(a1 + 32));
      return;
    }
  }
  else if ( !byte_6143E0 )
  {
    goto LABEL_3;
  }
  sub_402DD0();
  if ( *(_BYTE *)(a1 + 56) )
    goto LABEL_7;
}

__int64 __fastcall sub_403840(_BYTE *a1)
{
  int v1; // r12d
  _IO_FILE *v3; // rdi
  char *IO_read_ptr; // rax
  int v5; // ebx
  int v6; // r13d
  int v7; // eax
  char *v8; // r13
  char *v9; // r14
  __int64 v10; // rdi
  int v11; // edi
  int v12; // eax
  __int64 result; // rax
  char *v14; // rbx
  char *v15; // r13
  FILE *v16; // rdi
  unsigned __int8 *v17; // rax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  char *v21; // rbx
  char *v22; // r12
  _IO_FILE *v23; // rdi
  unsigned __int8 *v24; // rax
  unsigned __int64 v25; // rdx
  _IO_FILE *v26; // rdi
  unsigned __int8 *v27; // rax
  int v28; // edi
  FILE *v29; // rdi
  unsigned __int8 *v30; // rax
  int v31; // edi

  v3 = *(_IO_FILE **)a1;
  IO_read_ptr = v3->_IO_read_ptr;
  if ( IO_read_ptr >= v3->_IO_read_end )
  {
    v5 = __uflow(v3);
  }
  else
  {
    v3->_IO_read_ptr = IO_read_ptr + 1;
    v5 = (unsigned __int8)*IO_read_ptr;
  }
  v6 = dword_614424;
  if ( v5 == 12 )
  {
    v23 = *(_IO_FILE **)a1;
    v24 = *(unsigned __int8 **)(*(_QWORD *)a1 + 8LL);
    v25 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    if ( !a1[57] )
      goto LABEL_50;
    if ( (unsigned __int64)v24 >= v25 )
    {
      v5 = __uflow(v23);
    }
    else
    {
      v23->_IO_read_ptr = (char *)(v24 + 1);
      v5 = *v24;
    }
    if ( v5 == 10 )
    {
      v26 = *(_IO_FILE **)a1;
      v27 = *(unsigned __int8 **)(*(_QWORD *)a1 + 8LL);
      if ( (unsigned __int64)v27 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
      {
        v5 = __uflow(v26);
      }
      else
      {
        v26->_IO_read_ptr = (char *)(v27 + 1);
        v5 = *v27;
      }
    }
  }
  a1[57] = 0;
  switch ( v5 )
  {
    case 10:
      goto LABEL_8;
    case 12:
      v23 = *(_IO_FILE **)a1;
      v24 = *(unsigned __int8 **)(*(_QWORD *)a1 + 8LL);
      v25 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
LABEL_50:
      if ( v25 <= (unsigned __int64)v24 )
      {
        v28 = __uflow(v23);
      }
      else
      {
        v23->_IO_read_ptr = (char *)(v24 + 1);
        v28 = *v24;
      }
      if ( v28 == 10 )
      {
        byte_61444C = 1;
        if ( !byte_614448 )
          goto LABEL_55;
      }
      else
      {
        ungetc(v28, *(FILE **)a1);
        byte_61444C = 1;
        if ( !byte_614448 )
          goto LABEL_55;
      }
      if ( !byte_6142B4 )
      {
        byte_6143D0 = 1;
        sub_402EE0();
LABEL_57:
        sub_403410((_DWORD *)a1 + 4, (_DWORD *)a1 + 12);
        return 1LL;
      }
LABEL_55:
      if ( byte_61444A )
        byte_614449 = 1;
      goto LABEL_57;
    case -1:
LABEL_22:
      sub_4029A0((__int64)a1);
      return 1LL;
  }
  v1 = sub_402FE0(v5);
LABEL_8:
  if ( byte_61443D && dword_614424 > dword_614438 )
  {
    dword_614424 = v6;
    return 0LL;
  }
  else
  {
    if ( *((void *(__fastcall **)(char))a1 + 4) != sub_402790 )
    {
      byte_6143D0 = 1;
      if ( byte_614448 && !byte_6142B4 )
        sub_402EE0();
      if ( byte_61444F && byte_61444E )
      {
        v7 = dword_6143D8;
        v8 = (char *)qword_614478;
        dword_6143D8 = 0;
        if ( v7 > 0 )
        {
          v9 = (char *)qword_614478 + 64 * (unsigned int)(v7 - 1) + 64;
          do
          {
            v10 = (__int64)v8;
            v8 += 64;
            sub_4037E0(v10);
            ++dword_6143D8;
          }
          while ( v9 != v8 );
        }
        v11 = *((_DWORD *)a1 + 13);
        v12 = 0;
        byte_61444E = 0;
        if ( byte_61443D )
          v12 = dword_614438;
        dword_6143D4 = v11;
        dword_614430 = v12;
      }
      else
      {
        v11 = dword_6143D4;
      }
      if ( dword_6143DC < v11 )
      {
        sub_402CA0(v11 - dword_6143DC);
        dword_6143D4 = 0;
      }
      if ( byte_6143E0 )
        sub_402DD0();
    }
    if ( a1[56] )
      sub_4036C0((void (__fastcall **)(_QWORD))a1 + 4);
    byte_61444D = 0;
    result = 1LL;
    if ( v5 != 10 )
    {
      v14 = (char *)qword_614398;
      v15 = (char *)qword_614398 + (unsigned int)(v1 - 1) + 1;
      if ( v1 )
      {
        do
          (*((void (__fastcall **)(_QWORD))a1 + 4))((unsigned int)*v14++);
        while ( v15 != v14 );
      }
      while ( 1 )
      {
        v16 = *(FILE **)a1;
        v17 = *(unsigned __int8 **)(*(_QWORD *)a1 + 8LL);
        if ( (unsigned __int64)v17 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
        {
          v18 = __uflow(v16);
        }
        else
        {
          v16->_IO_read_ptr = (char *)(v17 + 1);
          v18 = *v17;
        }
        if ( v18 == 10 )
          return 1LL;
        if ( v18 == 12 )
          break;
        if ( v18 == -1 )
          goto LABEL_22;
        v19 = dword_614424;
        v20 = sub_402FE0(v18);
        if ( byte_61443D && dword_614424 > dword_614438 )
        {
          dword_614424 = v19;
          return 0LL;
        }
        v21 = (char *)qword_614398;
        v22 = (char *)qword_614398 + (unsigned int)(v20 - 1) + 1;
        if ( v20 )
        {
          do
            (*((void (__fastcall **)(_QWORD))a1 + 4))((unsigned int)*v21++);
          while ( v21 != v22 );
        }
      }
      v29 = *(FILE **)a1;
      v30 = *(unsigned __int8 **)(*(_QWORD *)a1 + 8LL);
      if ( (unsigned __int64)v30 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
      {
        v31 = __uflow(v29);
      }
      else
      {
        v29->_IO_read_ptr = (char *)(v30 + 1);
        v31 = *v30;
      }
      if ( v31 != 10 )
        ungetc(v31, *(FILE **)a1);
      goto LABEL_55;
    }
  }
  return result;
}

__int64 __fastcall sub_403C80(const char *a1, __int64 a2)
{
  char *v3; // rax
  FILE *v4; // rdi
  unsigned int v6; // ebx
  const char *v7; // rbp
  int *v8; // rax

  if ( !strcmp(a1, "-") )
  {
    v3 = dcgettext(0LL, "standard input", 5);
    v4 = stdin;
    byte_614446 = 1;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)a2 = v4;
    if ( v4 )
    {
LABEL_3:
      sub_405480(v4, 2LL);
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 57) = 0;
      ++dword_6143E4;
      return 1LL;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = a1;
    v4 = (FILE *)sub_4054B0(a1, "r");
    *(_QWORD *)a2 = v4;
    if ( v4 )
      goto LABEL_3;
  }
  v6 = (unsigned __int8)byte_6143E1;
  byte_614420 = 1;
  if ( byte_6143E1 )
    return 0LL;
  v7 = (const char *)sub_408BB0(v4, 3LL, a1);
  v8 = __errno_location();
  error(0, *v8, "%s", v7);
  return v6;
}

void __fastcall sub_403D80(__int64 a1)
{
  FILE *v2; // rbx
  int v3; // eax
  char *IO_read_ptr; // rax
  char *v5; // rax
  int v6; // edi

  v2 = *(FILE **)a1;
  do
  {
    IO_read_ptr = v2->_IO_read_ptr;
    if ( IO_read_ptr < v2->_IO_read_end )
    {
      v2->_IO_read_ptr = IO_read_ptr + 1;
      v3 = (unsigned __int8)*IO_read_ptr;
      if ( v3 == 10 )
        return;
    }
    else
    {
      v3 = __uflow(v2);
      if ( v3 == 10 )
        return;
    }
    if ( v3 == 12 )
    {
      v5 = v2->_IO_read_ptr;
      if ( v5 >= v2->_IO_read_end )
      {
        v6 = __uflow(v2);
      }
      else
      {
        v2->_IO_read_ptr = v5 + 1;
        v6 = (unsigned __int8)*v5;
      }
      if ( v6 == 10 )
      {
        if ( !byte_61444A )
        {
LABEL_13:
          sub_403410((_DWORD *)(a1 + 16), (_DWORD *)(a1 + 48));
          return;
        }
      }
      else
      {
        ungetc(v6, v2);
        if ( !byte_61444A )
          goto LABEL_13;
      }
      byte_614449 = 1;
      goto LABEL_13;
    }
  }
  while ( v3 != -1 );
  sub_4029A0(a1);
}

__int64 __fastcall sub_403E40(int a1, const char **a2)
{
  int v4; // ecx
  char *v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rsi
  int v8; // edi
  int v9; // edx
  int v10; // eax
  int v11; // edi
  void *v12; // rax
  _BOOL8 v13; // rdx
  unsigned __int64 v14; // rdi
  void *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 result; // rax
  const char *v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 IO_write_ptr_high; // rcx
  __int64 v22; // r13
  char v23; // bp
  __int64 v24; // r8
  int v25; // r12d
  _IO_FILE *v26; // r10
  int v27; // r9d
  char v28; // r11
  __int64 v29; // rsi
  char *v30; // rdx
  int v31; // ebx
  char v32; // al
  unsigned __int64 IO_read_end_low; // rdi
  _QWORD *v34; // rax
  int v35; // edx
  int v36; // r14d
  int v37; // r13d
  _IO_FILE *v38; // rbx
  unsigned __int64 v39; // rdx
  char *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  char *v44; // r10
  int v45; // ebp
  char v46; // r13
  unsigned __int8 (__fastcall **v47)(unsigned int *); // rbx
  int v48; // r14d
  int v49; // eax
  int v50; // eax
  unsigned int v51; // eax
  char *IO_write_ptr; // rax
  char *v53; // rax
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  char *v57; // rdx
  int v58; // eax
  int v59; // r13d
  int v60; // ebp
  __int64 v61; // r15
  int v62; // r14d
  int v63; // eax
  _DWORD *v64; // rsi
  _DWORD *v65; // rdx
  char v66; // r9
  int v67; // r11d
  _IO_FILE *v68; // rax
  __int64 v69; // rbx
  int j; // ebp
  char *v71; // rax
  __int64 v72; // rdi
  char *v73; // rax
  __int64 v74; // r12
  _DWORD *v75; // rbx
  int v76; // r14d
  int i; // r9d
  int v78; // ebp
  int v79; // esi
  __int64 v80; // rdi
  int v81; // ebp
  int v82; // esi
  __int64 v83; // rdi
  char *v84; // rax
  char *v85; // rdx
  signed int v86; // ebx
  int v87; // r12d
  int v88; // ebp
  char *v89; // rax
  FILE *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rbp
  int v93; // eax
  char *v94; // rax
  char *v95; // rax
  int v96; // [rsp+8h] [rbp-40h]
  int v97; // [rsp+Ch] [rbp-3Ch]

  dword_614440 = dword_6142B0 - 10;
  if ( dword_6142B0 - 10 <= 0 )
  {
    byte_6142B5 = 0;
    byte_61444A = 1;
  }
  else if ( byte_6142B5 )
  {
    goto LABEL_3;
  }
  dword_614440 = dword_6142B0;
LABEL_3:
  if ( byte_6143E8 )
    dword_614440 /= 2;
  if ( a1 )
  {
    if ( byte_61444F )
    {
      dword_614298 = a1;
      v4 = a1;
    }
    else
    {
      v4 = dword_614298;
    }
  }
  else
  {
    byte_61444F = 0;
    v4 = dword_614298;
  }
  if ( byte_6142B4 )
    byte_614444 = 1;
  if ( v4 <= 1 )
  {
    byte_6142B4 = 0;
    v6 = dword_6143DC;
  }
  else
  {
    if ( byte_6143E0 )
    {
      v6 = dword_6143DC;
      if ( !byte_61443C && dword_6143DC == 1 && *(_BYTE *)off_614270 == 9 )
        off_614270 = " ";
    }
    else
    {
      v5 = " ";
      dword_6143DC = 1;
      if ( byte_61443C )
        v5 = "\t";
      byte_6143E0 = 1;
      off_614270 = v5;
      v6 = 1;
    }
    byte_61443D = 1;
    byte_614434 = 1;
  }
  if ( byte_61443C )
    byte_61443D = 0;
  v7 = (unsigned __int8)byte_6143FC;
  if ( !byte_6143FC )
    goto LABEL_58;
  dword_614284 = dword_61427C;
  v8 = dword_614278 + 1;
  if ( byte_614288 == 9 )
    v8 = dword_614278
       + ((unsigned int)(dword_614278 >> 31) >> 29)
       - (((_BYTE)dword_614278 + ((unsigned int)(dword_614278 >> 31) >> 29)) & 7)
       + 8;
  dword_6143F8 = v8;
  if ( !byte_61444F )
LABEL_58:
    v8 = 0;
  v9 = v6 * (v4 - 1);
  if ( !is_mul_ok(v6, v4 - 1) )
    v9 = 0x7FFFFFFF;
  v10 = dword_6142AC - v8 - v9;
  if ( __OFSUB__(dword_6142AC - v8, v9) )
  {
LABEL_238:
    dword_614438 = 0;
    goto LABEL_239;
  }
  dword_614438 = v10 / v4;
  if ( v10 / v4 <= 0 )
  {
LABEL_239:
    v95 = dcgettext(0LL, "page width too narrow", 5);
    v7 = 0LL;
    v14 = 1LL;
    error(1, 0, v95);
    goto LABEL_240;
  }
  if ( byte_6143FC )
  {
    free(ptr);
    v72 = dword_614278 + 1LL;
    if ( (unsigned int)dword_614278 <= 0xB )
      v72 = 12LL;
    ptr = (void *)sub_409300(v72);
  }
  free(qword_614398);
  v11 = 8;
  if ( dword_6142A4 >= 8 )
    v11 = dword_6142A4;
  v12 = (void *)sub_409300(v11);
  dword_6143E4 = 0;
  qword_614398 = v12;
  free(qword_614478);
  v14 = (__int64)dword_614298 << 6;
  if ( (dword_614298 & 0x200000000000000LL) != 0 || (unsigned __int64)dword_614298 >> 58 )
    goto LABEL_240;
  v15 = (void *)sub_409300(v14);
  v16 = (__int64)v15;
  qword_614478 = v15;
  if ( byte_61444F )
  {
    if ( a1 )
    {
      v17 = (__int64)&a2[(unsigned int)(a1 - 1) + 1];
      do
      {
        while ( (unsigned __int8)sub_403C80(*a2, v16) )
        {
          ++a2;
          v16 += 64LL;
          if ( a2 == (const char **)v17 )
            goto LABEL_36;
        }
        ++a2;
        --dword_614298;
      }
      while ( a2 != (const char **)v17 );
    }
LABEL_36:
    result = (unsigned int)dword_614298;
    if ( !dword_614298 )
      return result;
    v7 = 0xFFFFFFFFLL;
    v19 = "\t" + 1;
    sub_402AB0("", -1);
  }
  else
  {
    if ( a1 <= 0 )
    {
      v89 = dcgettext(0LL, "standard input", 5);
      *(_BYTE *)(v16 + 57) = 0;
      v19 = "\t" + 1;
      *(_QWORD *)(v16 + 8) = v89;
      v90 = stdin;
      *(_DWORD *)(v16 + 16) = 0;
      *(_QWORD *)v16 = v90;
      byte_614446 = 1;
      ++dword_6143E4;
      sub_402AB0("", -1);
      *(_DWORD *)(v16 + 44) = 0;
    }
    else
    {
      result = sub_403C80(*a2, (__int64)v15);
      if ( !(_BYTE)result )
        return result;
      v93 = fileno(*(FILE **)v16);
      v19 = *a2;
      sub_402AB0(*a2, v93);
      *(_DWORD *)(v16 + 44) = 0;
    }
    v7 = (unsigned int)dword_614298;
    v91 = *(_QWORD *)(v16 + 8);
    v20 = v16 + 64;
    IO_write_ptr_high = *(_QWORD *)v16;
    if ( dword_614298 != 1 )
    {
      v7 = ((unsigned int)(dword_614298 - 2) + 2LL) << 6;
      v92 = v7 + v16;
      do
      {
        *(_QWORD *)(v20 + 8) = v91;
        v20 += 64LL;
        *(_QWORD *)(v20 - 64) = IO_write_ptr_high;
        *(_DWORD *)(v20 - 48) = 0;
        *(_BYTE *)(v20 - 7) = 0;
        *(_DWORD *)(v20 - 20) = 0;
      }
      while ( v20 != v92 );
    }
  }
  dword_614410 = dword_6143E4;
  if ( byte_6142B4 )
  {
    v86 = dword_614298 * dword_614440;
    if ( is_mul_ok(dword_614298, dword_614440) )
    {
      v87 = v86 + 1;
      if ( !__OFADD__(1, v86) && !__OFADD__(1, dword_614438) )
      {
        v88 = v86 * (dword_614438 + 1);
        if ( is_mul_ok(v86, dword_614438 + 1) )
        {
          free(qword_614458);
          v14 = 4LL * v87;
          if ( (v87 & 0x2000000000000000LL) == 0 && !((unsigned __int64)v87 >> 62) )
          {
            qword_614458 = (void *)sub_409300(v14);
            free(qword_614450);
            v14 = 4LL * v86;
            if ( (v86 & 0x2000000000000000LL) == 0 && !((unsigned __int64)v86 >> 62) )
            {
              qword_614450 = (void *)sub_409300(v14);
              free(qword_614470);
              v14 = (unsigned __int8)byte_6143E0 + 1LL;
              v13 = (v14 * (unsigned __int128)(unsigned __int64)v88) >> 64 != 0;
              if ( ((v14 * v88) & 0x8000000000000000LL) == 0LL && is_mul_ok(v14, v88) )
              {
                qword_614470 = (void *)sub_409300(v14 * v88);
                qword_614460 = ((unsigned __int8)byte_6143E0 + 1LL) * v88;
                goto LABEL_39;
              }
            }
          }
LABEL_240:
          sub_409550(v14, v7, v13);
        }
      }
    }
    sub_4027F0(v19, v7, v20, IO_write_ptr_high);
    goto LABEL_238;
  }
LABEL_39:
  v22 = qword_614418;
  if ( (unsigned __int64)qword_614418 <= 1 )
  {
    qword_614408 = 1LL;
    goto LABEL_41;
  }
  v74 = 1LL;
  while ( 1 )
  {
    v75 = qword_614478;
    v76 = 1;
    for ( i = dword_614298; v76 < dword_614440; ++v76 )
    {
      if ( i > 0 )
      {
        v78 = 1;
        do
        {
          while ( v75[4] )
          {
            ++v78;
            v75 += 16;
            if ( v78 > i )
              goto LABEL_193;
          }
          v79 = v78;
          v80 = (__int64)v75;
          ++v78;
          v75 += 16;
          sub_403490(v80, v79);
          i = dword_614298;
        }
        while ( v78 <= dword_614298 );
LABEL_193:
        v75 = qword_614478;
      }
    }
    byte_614390 = 1;
    if ( i > 0 )
    {
      v81 = 1;
      do
      {
        while ( v75[4] )
        {
          ++v81;
          v75 += 16;
          if ( v81 > i )
            goto LABEL_200;
        }
        v82 = v81;
        v83 = (__int64)v75;
        ++v81;
        v75 += 16;
        sub_403490(v83, v82);
        i = dword_614298;
      }
      while ( v81 <= dword_614298 );
LABEL_200:
      if ( byte_6142B4 )
      {
        v84 = (char *)qword_614478;
        if ( i > 0 )
        {
          v85 = (char *)qword_614478 + 64 * (unsigned int)(i - 1) + 64;
          do
          {
            if ( *((_DWORD *)v84 + 4) != 3 )
              *((_DWORD *)v84 + 4) = 2;
            v84 += 64;
          }
          while ( v84 != v85 );
        }
      }
    }
    sub_402710();
    byte_614390 = 0;
    if ( dword_614410 <= 0 )
      break;
    if ( v22 == ++v74 )
      goto LABEL_208;
  }
  v94 = dcgettext(0LL, "starting page number %lu exceeds page count %lu", 5);
  error(0, 0, v94, v22, v74);
  result = (unsigned int)dword_614410;
  if ( dword_614410 > 0 )
  {
LABEL_208:
    qword_614408 = qword_614418;
LABEL_41:
    v23 = byte_61443D;
    v24 = 0LL;
    if ( byte_61443D )
    {
      v24 = (unsigned int)(dword_61442C + dword_614438);
      if ( byte_61444F )
      {
        if ( byte_6143FC )
          v24 = (unsigned int)(dword_6143F8 + v24);
      }
    }
    v25 = dword_6143DC;
    v26 = (_IO_FILE *)qword_614478;
    v27 = dword_614298;
    v28 = byte_6142B4;
    v29 = (unsigned int)(dword_6143DC + dword_61442C);
    v30 = (char *)qword_614478;
    v31 = dword_614298;
    v32 = byte_6142B4;
    if ( dword_614298 <= 1 )
    {
      v31 = 1;
      IO_read_end_low = (unsigned __int8)byte_6143FC;
    }
    else
    {
      IO_read_end_low = (unsigned __int8)byte_6143FC;
      v34 = qword_614478;
      v35 = 1;
      v36 = dword_614438;
      v37 = (unsigned __int8)byte_61444F ^ 1;
      do
      {
        while ( 1 )
        {
          if ( v28 )
          {
            v34[4] = sub_402790;
            v34[3] = sub_403280;
          }
          else
          {
            v34[4] = sub_4031E0;
            v34[3] = sub_403840;
          }
          IO_write_ptr_high = 0LL;
          if ( (_BYTE)IO_read_end_low )
          {
            LOBYTE(IO_write_ptr_high) = v35 == 1;
            IO_write_ptr_high = v37 | (unsigned int)IO_write_ptr_high;
          }
          *((_BYTE *)v34 + 56) = IO_write_ptr_high;
          *((_DWORD *)v34 + 13) = v29;
          if ( !v23 )
            break;
          v29 = (unsigned int)(v25 + v24);
          ++v35;
          v34 += 8;
          v24 = (unsigned int)(v29 + v36);
          if ( v35 == v27 )
            goto LABEL_65;
        }
        ++v35;
        v24 = 0LL;
        v29 = 0LL;
        v34 += 8;
      }
      while ( v35 != v27 );
LABEL_65:
      v32 = v28;
      v30 = (char *)(&v26->_flags + 16 * (unsigned int)(v27 - 2) + 16);
    }
    if ( v28 && byte_614444 )
    {
      *((_QWORD *)v30 + 4) = sub_402790;
      *((_QWORD *)v30 + 3) = sub_403280;
    }
    else
    {
      *((_QWORD *)v30 + 4) = sub_4031E0;
      *((_QWORD *)v30 + 3) = sub_403840;
    }
    if ( (_BYTE)IO_read_end_low )
    {
      LOBYTE(IO_write_ptr_high) = v31 == 1;
      IO_read_end_low = (unsigned int)IO_write_ptr_high | (unsigned __int8)byte_61444F ^ 1;
    }
    v30[56] = IO_read_end_low;
    v38 = v26;
    *((_DWORD *)v30 + 13) = v29;
    v39 = (unsigned int)dword_614284;
    dword_614400 = dword_614284;
    if ( v32 )
      goto LABEL_129;
LABEL_72:
    if ( v27 )
    {
      IO_write_ptr_high = (unsigned int)dword_614440;
      do
      {
        IO_read_end_low = LODWORD(v38->_IO_read_end);
        v39 = 0LL;
        if ( !(_DWORD)IO_read_end_low )
          v39 = (unsigned int)IO_write_ptr_high;
        v38 = (_IO_FILE *)((char *)v38 + 64);
        *(_DWORD *)&v38[-1]._unused2[4] = v39;
      }
      while ( &v26->_flags + 16 * (unsigned int)(v27 - 1) + 16 != (int *)v38 );
    }
    while ( 1 )
    {
      result = sub_4026B0(IO_read_end_low, v29, v39, IO_write_ptr_high, v24);
      if ( !(_DWORD)result )
        return result;
      if ( byte_6142B5 )
        byte_614448 = 1;
      v45 = dword_614440;
      byte_6143D0 = 0;
      if ( byte_6143E8 )
        v45 = 2 * dword_614440;
      v46 = 0;
      if ( v45 > 0 )
      {
        while ( 2 )
        {
          if ( !(unsigned int)sub_4026B0(IO_read_end_low, v29, v40, v41, v42) )
            goto LABEL_120;
          v29 = (unsigned int)dword_614298;
          dword_614428 = 0;
          dword_614430 = 0;
          v47 = (unsigned __int8 (__fastcall **)(unsigned int *))qword_614478;
          dword_6143D8 = 0;
          byte_6143D0 = 0;
          byte_61444E = 0;
          byte_61444D = 1;
          if ( dword_614298 <= 0 )
            goto LABEL_106;
          v48 = 1;
LABEL_97:
          v41 = *((unsigned int *)v47 + 12);
          dword_614424 = 0;
          if ( (int)v41 > 0 || *((_DWORD *)v47 + 4) == 1 )
          {
            v49 = *((_DWORD *)v47 + 13);
            byte_61444C = 0;
            IO_read_end_low = (unsigned __int64)v47;
            dword_6143D4 = v49;
            if ( !v47[3]((unsigned int *)v47) )
            {
              IO_read_end_low = (unsigned __int64)v47;
              sub_403D80((__int64)v47);
            }
            v50 = *((_DWORD *)v47 + 12) - 1;
            v46 |= byte_6143D0;
            *((_DWORD *)v47 + 12) = v50;
            if ( v50 <= 0 && !(unsigned int)sub_4026B0(IO_read_end_low, v29, v40, v41, v42) )
            {
              if ( !v66 )
                goto LABEL_149;
LABEL_103:
              IO_read_end_low = (unsigned __int64)stdout;
              IO_write_ptr = stdout->_IO_write_ptr;
              if ( IO_write_ptr >= stdout->_IO_write_end )
              {
                v29 = 10LL;
                __overflow(stdout, 10);
              }
              else
              {
                v40 = IO_write_ptr + 1;
                stdout->_IO_write_ptr = IO_write_ptr + 1;
                *IO_write_ptr = 10;
              }
              --v45;
LABEL_106:
              if ( !(unsigned int)sub_4026B0(IO_read_end_low, v29, v40, v41, v42) )
              {
LABEL_149:
                if ( byte_6142B5 )
                  goto LABEL_107;
LABEL_113:
                if ( v45 )
                  goto LABEL_120;
                v43 = dword_614298;
                v44 = (char *)qword_614478;
                if ( dword_614298 <= 0 )
                  goto LABEL_120;
                goto LABEL_115;
              }
LABEL_107:
              if ( byte_6143E8 && v46 )
              {
                IO_read_end_low = (unsigned __int64)stdout;
                v53 = stdout->_IO_write_ptr;
                if ( v53 >= stdout->_IO_write_end )
                {
                  v29 = 10LL;
                  __overflow(stdout, 10);
                }
                else
                {
                  v40 = v53 + 1;
                  stdout->_IO_write_ptr = v53 + 1;
                  *v53 = 10;
                }
                --v45;
              }
              if ( v45 <= 0 )
                goto LABEL_113;
              continue;
            }
            if ( byte_61444F )
            {
              v51 = *((_DWORD *)v47 + 4);
              if ( v51 )
              {
                if ( byte_61444D )
                  goto LABEL_101;
                if ( v51 == 3 || v51 == 2 && byte_61444C )
                  goto LABEL_152;
              }
            }
          }
          else
          {
            if ( !byte_61444F )
              break;
            if ( byte_61444D )
            {
LABEL_101:
              byte_61444E = 1;
              break;
            }
LABEL_152:
            IO_read_end_low = (unsigned __int64)v47;
            sub_4037E0((__int64)v47);
          }
          break;
        }
        if ( byte_6143E0 )
          ++dword_6143D8;
        ++v48;
        v47 += 8;
        if ( v48 > dword_614298 )
        {
          if ( !byte_6143D0 )
            goto LABEL_106;
          goto LABEL_103;
        }
        goto LABEL_97;
      }
      if ( v45 || v43 <= 0 )
        break;
LABEL_115:
      v54 = &v44[64 * (v43 - 1) + 64];
      do
      {
        if ( !*((_DWORD *)v44 + 4) )
          v44[57] = 1;
        v44 += 64;
      }
      while ( v44 != v54 );
      v45 = 0;
LABEL_120:
      byte_6143D0 = v46;
      if ( !v46 || !byte_6142B5 )
        break;
      if ( byte_614447 )
      {
        IO_read_end_low = (unsigned __int64)stdout;
        v73 = stdout->_IO_write_ptr;
        if ( v73 >= stdout->_IO_write_end )
        {
          v29 = 12LL;
          __overflow(stdout, 12);
        }
        else
        {
          stdout->_IO_write_ptr = v73 + 1;
          *v73 = 12;
        }
      }
      else
      {
        for ( j = v45 + 5; j; --j )
        {
          IO_read_end_low = (unsigned __int64)stdout;
          v71 = stdout->_IO_write_ptr;
          if ( v71 < stdout->_IO_write_end )
          {
            stdout->_IO_write_ptr = v71 + 1;
            *v71 = 10;
          }
          else
          {
            v29 = 10LL;
            __overflow(stdout, 10);
          }
        }
      }
LABEL_127:
      result = ++qword_614408;
      if ( qword_614408 > (unsigned __int64)qword_614290 )
        return result;
      sub_402710();
      v26 = (_IO_FILE *)qword_614478;
      v27 = dword_614298;
      v38 = (_IO_FILE *)qword_614478;
      if ( !byte_6142B4 )
        goto LABEL_72;
LABEL_129:
      v24 = (unsigned __int8)byte_614444;
      dword_614468 = 0;
      v97 = v27 - (byte_614444 == 0);
      if ( v97 <= 0 )
      {
        v58 = 0;
LABEL_185:
        v29 = 0LL;
        v60 = 0;
        goto LABEL_155;
      }
      v56 = (char *)v26;
      v57 = (char *)(&v26->_flags + 16 * (v27 - (unsigned int)(byte_614444 == 0) - 1) + 16);
      do
      {
        *((_DWORD *)v56 + 11) = 0;
        v56 += 64;
      }
      while ( v56 != v57 );
      v58 = dword_614410;
      if ( !dword_614410 )
        goto LABEL_185;
      v96 = 1;
      v59 = 0;
      v60 = 0;
      v61 = 0LL;
      while ( 1 )
      {
        v62 = dword_614440;
        LODWORD(v38->_IO_write_ptr) = v60;
        if ( v62 )
          break;
LABEL_144:
        ++v96;
        v38 = (_IO_FILE *)((char *)v38 + 64);
        IO_write_ptr_high = (unsigned int)v96;
        v58 = v59;
        v29 = 4 * v61;
        if ( v97 < v96 || !dword_614410 )
        {
          v38 = (_IO_FILE *)qword_614478;
          v27 = dword_614298;
          v24 = (unsigned __int8)byte_614444;
          v26 = (_IO_FILE *)qword_614478;
          goto LABEL_155;
        }
      }
      while ( dword_614410 )
      {
        if ( LODWORD(v38->_IO_read_end) )
          goto LABEL_136;
        IO_read_end_low = (unsigned __int64)v38;
        dword_614424 = 0;
        if ( !(unsigned __int8)sub_403840(v38) )
        {
          IO_read_end_low = (unsigned __int64)v38;
          sub_403D80((__int64)v38);
        }
        v63 = dword_614468;
        if ( LODWORD(v38->_IO_read_end) && dword_614468 == v59 )
        {
LABEL_136:
          if ( !--v62 )
            goto LABEL_144;
        }
        else
        {
          v64 = qword_614458;
          ++HIDWORD(v38->_IO_write_ptr);
          ++v60;
          v65 = qword_614450;
          v64[v61] = v59;
          v59 = v63;
          v65[v61] = dword_614424;
          v61 = (unsigned int)v60;
          if ( !--v62 )
            goto LABEL_144;
        }
      }
      v26 = (_IO_FILE *)qword_614478;
      v27 = dword_614298;
      v58 = v59;
      v29 = 4 * v61;
      v24 = (unsigned __int8)byte_614444;
      v38 = (_IO_FILE *)qword_614478;
LABEL_155:
      v39 = (unsigned __int64)qword_614458;
      *(_DWORD *)((char *)qword_614458 + v29) = v58;
      if ( !(_BYTE)v24 )
      {
        if ( v27 == 1 )
          goto LABEL_168;
        goto LABEL_162;
      }
      if ( v27 > 0 )
      {
        LODWORD(IO_read_end_low) = 0;
        v29 = (__int64)v26;
        v39 = (unsigned int)(v60 >> 31);
        LODWORD(IO_write_ptr_high) = 1;
        LODWORD(v39) = v60 % v27;
        do
        {
          v67 = v60 / v27;
          *(_DWORD *)(v29 + 40) = IO_read_end_low;
          if ( (int)v39 >= (int)IO_write_ptr_high )
            v67 = v60 / v27 + 1;
          IO_write_ptr_high = (unsigned int)(IO_write_ptr_high + 1);
          v29 += 64LL;
          *(_DWORD *)(v29 - 20) = v67;
          IO_read_end_low = (unsigned int)(v67 + IO_read_end_low);
        }
        while ( (_DWORD)IO_write_ptr_high != v27 + 1 );
      }
      if ( v27 == 1 )
      {
LABEL_165:
        LODWORD(v38->_IO_write_end) = HIDWORD(v38->_IO_write_ptr);
      }
      else
      {
LABEL_162:
        v68 = v26;
        v69 = (unsigned int)(v27 - 2);
        v39 = (unsigned __int64)(&v26->_flags + 16 * v69 + 16);
        do
        {
          IO_write_ptr_high = HIDWORD(v68->_IO_write_ptr);
          v68 = (_IO_FILE *)((char *)v68 + 64);
          *(_DWORD *)&v68[-1]._unused2[4] = IO_write_ptr_high;
        }
        while ( v68 != (_IO_FILE *)v39 );
        v38 = (_IO_FILE *)(&v26->_flags + 16 * v69 + 16);
        if ( (_BYTE)v24 )
          goto LABEL_165;
LABEL_168:
        v24 = LODWORD(v38->_IO_read_end);
        if ( (_DWORD)v24 )
          LODWORD(v38->_IO_write_end) = 0;
        else
          LODWORD(v38->_IO_write_end) = dword_614440;
      }
    }
    if ( byte_61444A && byte_614449 )
    {
      IO_read_end_low = (unsigned __int64)stdout;
      v55 = stdout->_IO_write_ptr;
      if ( v55 >= stdout->_IO_write_end )
      {
        v29 = 12LL;
        __overflow(stdout, 12);
      }
      else
      {
        stdout->_IO_write_ptr = v55 + 1;
        *v55 = 12;
      }
      byte_614449 = 0;
    }
    goto LABEL_127;
  }
  return result;
}

void __fastcall __noreturn sub_404DE0(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  FILE *v6; // rbp
  char *v7; // rax
  FILE *v8; // rbp
  char *v9; // rax
  FILE *v10; // rbp
  char *v11; // rax
  FILE *v12; // rbp
  char *v13; // rax
  FILE *v14; // rbp
  char *v15; // rax
  FILE *v16; // rbp
  char *v17; // rax
  FILE *v18; // rbp
  char *v19; // rax
  FILE *v20; // rbp
  char *v21; // rax
  FILE *v22; // rbp
  char *v23; // rax
  FILE *v24; // rbp
  char *v25; // rax
  FILE *v26; // rbp
  char *v27; // rax
  FILE *v28; // rbp
  char *v29; // rax
  FILE *v30; // rbp
  char *v31; // rax
  FILE *v32; // rbp
  char *v33; // rax
  FILE *v34; // rbp
  char *v35; // rax
  FILE *v36; // rbp
  char *v37; // rax
  FILE *v38; // rbp
  char *v39; // rax
  FILE *v40; // rbp
  char *v41; // rax
  __int64 *v42; // rax
  char *v43; // rbp
  char *v44; // rax
  __int64 v45; // r8
  char *v46; // rax
  __int64 v47; // r12
  char *v48; // rax
  __int64 v49; // r8
  char *v50; // rax
  __int64 v51; // r8
  char *v52; // rax
  __int64 v53; // r8
  char *v54; // rax
  char *v55; // rax
  __int64 v56; // r8
  char *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_614490;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v3, v1, v4, v5);
  v6 = stdout;
  v7 = dcgettext(0LL, "Paginate or columnate FILE(s) for printing.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  +FIRST_PAGE[:LAST_PAGE], --pages=FIRST_PAGE[:LAST_PAGE]\n"
          "                    begin [stop] printing with page FIRST_[LAST_]PAGE\n"
          "  -COLUMN, --columns=COLUMN\n"
          "                    output COLUMN columns and print columns down,\n"
          "                    unless -a is used. Balance number of lines in the\n"
          "                    columns on each page\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "  -a, --across      print columns across rather than down, used together\n"
          "                    with -COLUMN\n"
          "  -c, --show-control-chars\n"
          "                    use hat notation (^G) and octal backslash notation\n"
          "  -d, --double-space\n"
          "                    double space the output\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "  -D, --date-format=FORMAT\n"
          "                    use FORMAT for the header date\n"
          "  -e[CHAR[WIDTH]], --expand-tabs[=CHAR[WIDTH]]\n"
          "                    expand input CHARs (TABs) to tab WIDTH (8)\n"
          "  -F, -f, --form-feed\n"
          "                    use form feeds instead of newlines to separate pages\n"
          "                    (by a 3-line page header with -F or a 5-line header\n"
          "                    and trailer without -F)\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(
          0LL,
          "  -h, --header=HEADER\n"
          "                    use a centered HEADER instead of filename in page header,\n"
          "                    -h \"\" prints a blank line, don't use -h\"\"\n"
          "  -i[CHAR[WIDTH]], --output-tabs[=CHAR[WIDTH]]\n"
          "                    replace spaces with CHARs (TABs) to tab WIDTH (8)\n"
          "  -J, --join-lines  merge full lines, turns off -W line truncation, no column\n"
          "                    alignment, --sep-string[=STRING] sets separators\n",
          5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
          0LL,
          "  -l, --length=PAGE_LENGTH\n"
          "                    set the page length to PAGE_LENGTH (66) lines\n"
          "                    (default number of lines of text 56, and with -F 63).\n"
          "                    implies -t if PAGE_LENGTH <= 10\n",
          5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(
          0LL,
          "  -m, --merge       print all files in parallel, one in each column,\n"
          "                    truncate lines, but join lines of full length with -J\n",
          5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(
          0LL,
          "  -n[SEP[DIGITS]], --number-lines[=SEP[DIGITS]]\n"
          "                    number lines, use DIGITS (5) digits, then SEP (TAB),\n"
          "                    default counting starts with 1st line of input file\n"
          "  -N, --first-line-number=NUMBER\n"
          "                    start counting with NUMBER at 1st line of first\n"
          "                    page printed (see +FIRST_PAGE)\n",
          5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "  -o, --indent=MARGIN\n"
          "                    offset each line with MARGIN (zero) spaces, do not\n"
          "                    affect -w or -W, MARGIN will be added to PAGE_WIDTH\n"
          "  -r, --no-file-warnings\n"
          "                    omit warning when a file cannot be opened\n",
          5);
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(
          0LL,
          "  -s[CHAR], --separator[=CHAR]\n"
          "                    separate columns by a single character, default for CHAR\n"
          "                    is the <TAB> character without -w and 'no char' with -w.\n"
          "                    -s[CHAR] turns off line truncation of all 3 column\n"
          "                    options (-COLUMN|-a -COLUMN|-m) except -w is set\n",
          5);
  fputs_unlocked(v29, v28);
  v30 = stdout;
  v31 = dcgettext(
          0LL,
          "  -S[STRING], --sep-string[=STRING]\n"
          "                    separate columns by STRING,\n"
          "                    without -S: Default separator <TAB> with -J and <space>\n"
          "                    otherwise (same as -S\" \"), no effect on column options\n",
          5);
  fputs_unlocked(v31, v30);
  v32 = stdout;
  v33 = dcgettext(
          0LL,
          "  -t, --omit-header  omit page headers and trailers;\n                     implied if PAGE_LENGTH <= 10\n",
          5);
  fputs_unlocked(v33, v32);
  v34 = stdout;
  v35 = dcgettext(
          0LL,
          "  -T, --omit-pagination\n"
          "                    omit page headers and trailers, eliminate any pagination\n"
          "                    by form feeds set in input files\n"
          "  -v, --show-nonprinting\n"
          "                    use octal backslash notation\n"
          "  -w, --width=PAGE_WIDTH\n"
          "                    set page width to PAGE_WIDTH (72) characters for\n"
          "                    multiple text-column output only, -s[char] turns off (72)\n",
          5);
  fputs_unlocked(v35, v34);
  v36 = stdout;
  v37 = dcgettext(
          0LL,
          "  -W, --page-width=PAGE_WIDTH\n"
          "                    set page width to PAGE_WIDTH (72) characters always,\n"
          "                    truncate lines, except -J option is set, no interference\n"
          "                    with -S or -s\n",
          5);
  fputs_unlocked(v37, v36);
  v38 = stdout;
  v39 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v39, v38);
  v40 = stdout;
  v41 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v41, v40);
  v60[0] = (__int64)"[";
  v42 = v60;
  v60[1] = (__int64)"test invocation";
  v60[2] = (__int64)"coreutils";
  v60[3] = (__int64)"Multi-call invocation";
  v60[4] = (__int64)"sha224sum";
  v60[5] = (__int64)"sha2 utilities";
  v60[6] = (__int64)"sha256sum";
  v60[7] = (__int64)"sha2 utilities";
  v60[8] = (__int64)"sha384sum";
  v60[9] = (__int64)"sha2 utilities";
  v60[10] = (__int64)"sha512sum";
  v60[11] = (__int64)"sha2 utilities";
  v60[12] = 0LL;
  v60[13] = 0LL;
  do
    v42 += 2;
  while ( *v42 && strcmp("pr", (const char *)*v42) );
  v43 = (char *)v42[1];
  if ( v43 )
  {
    v44 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v44, &unk_40CEF3, "https://www.gnu.org/software/coreutils/", v45);
    v46 = setlocale(5, 0LL);
    if ( !v46 || !strncmp(v46, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v52 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v52, &unk_40CEF3, "https://www.gnu.org/software/coreutils/", v53);
    v54 = setlocale(5, 0LL);
    if ( !v54 || !strncmp(v54, "en_", 3uLL) )
    {
      v43 = "pr";
      v55 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v47 = 4247193LL;
      __printf_chk(1LL, v55, "https://www.gnu.org/software/coreutils/", "pr", v56);
LABEL_12:
      v50 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v50, v43, v47, v51);
LABEL_3:
      exit(status);
    }
    v43 = "pr";
  }
  v57 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v57, "pr", v58, v59);
LABEL_10:
  v47 = 4247193LL;
  v48 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v48, "https://www.gnu.org/software/coreutils/", "pr", v49);
  if ( v43 != "pr" )
    v47 = 4247139LL;
  goto LABEL_12;
}

__int64 __fastcall sub_4052E0(char *nptr, char a2, _BYTE *a3, _DWORD *a4)
{
  char *v5; // rbx
  __int64 result; // rax
  unsigned int v7; // r12d
  __int64 v8; // rbp
  int v9; // esi
  char *v10; // rbx
  __int64 v11; // [rsp+8h] [rbp-20h]

  v5 = nptr;
  result = (unsigned int)*nptr;
  if ( (unsigned int)(result - 48) > 9 )
  {
    *a3 = *nptr;
    result = (unsigned __int8)nptr[1];
    v5 = nptr + 1;
  }
  if ( (_BYTE)result )
  {
    if ( (unsigned int)sub_409E00(v5) || (result = v11, (unsigned __int64)(v11 - 1) > 0x7FFFFFFE) )
    {
      v7 = a2;
      v8 = sub_408D30(v5);
      v9 = 75;
      v10 = dcgettext(0LL, "'-%c' extra characters or invalid number in the argument: %s", 5);
      if ( v11 <= 0x7FFFFFFF )
        v9 = *__errno_location();
      error(0, v9, v10, v7, v8);
      sub_404DE0(1);
    }
    *a4 = v11;
  }
  return result;
}

void __fastcall sub_4053B0(__int64 a1)
{
  qword_614488 = a1;
}

__int64 sub_4053D0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_40C070(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_614480 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_614488 )
      {
        v5 = (const char *)sub_408B80();
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
  result = sub_40C070(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void __fastcall sub_405480(FILE *a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_4054B0(const char *a1, const char *a2)
{
  FILE *v2; // rax
  FILE *v3; // rbx
  unsigned int v4; // eax
  int v6; // r12d
  int *v7; // rax
  int v8; // ebp
  int *v9; // rbx
  int *v10; // rax
  FILE *v11; // rdi
  int v12; // r12d
  int *v13; // rbp

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( v4 <= 2 )
    {
      v6 = sub_408D50(v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_40AA20(v11);
        *v13 = v12;
      }
      else if ( (unsigned int)sub_40AA20(v3) || (v3 = fdopen(v6, a2)) == 0LL )
      {
        v7 = __errno_location();
        v8 = *v7;
        v9 = v7;
        close(v6);
        *v9 = v8;
        return 0LL;
      }
    }
  }
  return v3;
}

int __fastcall sub_405550(struct timespec *tp)
{
  int result; // eax
  struct timeval v2; // [rsp+0h] [rbp-18h] BYREF

  result = clock_gettime(0, tp);
  if ( result )
  {
    gettimeofday(&v2, 0LL);
    tp->tv_sec = v2.tv_sec;
    result = 1000 * LODWORD(v2.tv_usec);
    tp->tv_nsec = 1000 * v2.tv_usec;
  }
  return result;
}

bool __fastcall sub_405590(int a1)
{
  char *v1; // rdx
  bool result; // al

  v1 = setlocale(a1, 0LL);
  result = 1;
  if ( v1 )
  {
    result = 0;
    if ( strcmp(v1, "C") )
      return strcmp(v1, "POSIX") != 0;
  }
  return result;
}

__int64 __fastcall sub_4055F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // eax

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v4 = 10 * (a1 / 10) + 48 - a1;
      a1 /= 10LL;
      *(_BYTE *)(v2 - 1) = v4;
      if ( !a1 )
        break;
      --v2;
    }
    *(_BYTE *)(v2 - 2) = 45;
    return v2 - 2;
  }
  else
  {
    do
    {
      *(_BYTE *)--v2 = a1 % 0xAuLL + 48;
      a1 /= 0xAuLL;
    }
    while ( a1 );
    return v2;
  }
}

__int64 __fastcall sub_405690(char *s, __int64 a2, char a3)
{
  char *v4; // r13
  char *v5; // rbx
  unsigned int v6; // r12d
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // eax
  int v12; // r15d
  const unsigned __int16 *v13; // rdx
  unsigned __int16 v14; // ax
  wchar_t c; // [rsp+4h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+8h] [rbp-40h] BYREF

  v4 = &s[a2];
  v5 = s;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    v6 = 0;
    if ( s >= v4 )
      return v6;
    v6 = 0;
    v12 = a3 & 2;
    v13 = *__ctype_b_loc();
    while ( 1 )
    {
      v14 = v13[(unsigned __int8)*v5++];
      if ( (v14 & 0x4000) != 0 )
        goto LABEL_33;
      if ( v12 )
        return (unsigned int)-1;
      if ( (v14 & 2) == 0 )
      {
LABEL_33:
        if ( v6 == 0x7FFFFFFF )
          return v6;
        ++v6;
      }
      if ( v4 == v5 )
        return v6;
    }
  }
  v6 = 0;
  if ( s < v4 )
  {
    do
    {
      v7 = *v5;
      if ( *v5 <= 63 )
      {
        if ( v7 < 37 && (unsigned __int8)(v7 - 32) > 3u )
        {
LABEL_12:
          ps = 0LL;
          while ( 1 )
          {
            v8 = sub_40BA50(&c, v5);
            v9 = v8;
            if ( v8 == -1 )
            {
              if ( (a3 & 1) == 0 )
                goto LABEL_6;
              return (unsigned int)-1;
            }
            if ( v8 == -2 )
              break;
            if ( !v8 )
              v9 = 1LL;
            v10 = wcwidth(c);
            if ( v10 >= 0 )
            {
              if ( (int)(0x7FFFFFFF - v6) < v10 )
                return 0x7FFFFFFF;
              v6 += v10;
            }
            else
            {
              if ( (a3 & 2) != 0 )
                return (unsigned int)-1;
              if ( !iswcntrl(c) )
              {
                if ( v6 == 0x7FFFFFFF )
                  return 0x7FFFFFFF;
                ++v6;
              }
            }
            v5 += v9;
            if ( mbsinit(&ps) )
              goto LABEL_7;
          }
          if ( (a3 & 1) != 0 )
            return (unsigned int)-1;
          ++v6;
          v5 = &s[a2];
          continue;
        }
      }
      else if ( v7 < 65 || v7 > 95 && (unsigned __int8)(v7 - 97) > 0x1Du )
      {
        goto LABEL_12;
      }
LABEL_6:
      ++v5;
      ++v6;
LABEL_7:
      ;
    }
    while ( v5 < v4 );
  }
  return v6;
}

__int64 __fastcall sub_405850(char *s, char a2)
{
  __int64 v2; // rax

  v2 = strlen(s);
  return sub_405690(s, v2, a2);
}

__int64 __fastcall sub_405880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_tolower_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_4058D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_toupper_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_405920(
        char *s,
        __int64 a2,
        unsigned __int64 a3,
        const __m128i *a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  char *v9; // rbx
  __int64 v10; // r12
  int v11; // r11d
  char v12; // al
  __int64 v13; // r14
  char *v14; // r8
  char v16; // r11
  __int64 v17; // r8
  int i; // r12d
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  bool v22; // cc
  int v23; // ebp
  unsigned int v24; // eax
  int v25; // edi
  char *v26; // rax
  char *v27; // r8
  char v28; // r13
  size_t v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rbx
  size_t v33; // rdx
  char *v34; // rdi
  char *v35; // rsi
  size_t v36; // rdx
  char *v37; // rdi
  unsigned __int64 v38; // rcx
  char *v39; // r13
  __m128i v40; // xmm4
  __m128i v41; // xmm2
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rcx
  int v46; // edx
  unsigned int v47; // eax
  int v48; // r10d
  char *v49; // rcx
  unsigned __int64 v50; // rax
  size_t v51; // r9
  unsigned __int64 v52; // r9
  size_t v53; // rdx
  char *v54; // rdi
  unsigned __int64 v55; // r10
  int v56; // eax
  unsigned __int64 v57; // rsi
  size_t v58; // rdx
  char *v59; // rdi
  __int32 v60; // r10d
  __int32 v61; // r13d
  int v62; // edi
  int v63; // r8d
  int v64; // eax
  int v65; // r13d
  int v66; // r13d
  int v67; // edi
  unsigned int v68; // esi
  int v69; // edi
  unsigned int v70; // r8d
  unsigned __int64 v71; // r13
  int v72; // eax
  unsigned __int64 v73; // rsi
  char v74; // r11
  char v75; // r8
  size_t v76; // rdx
  char *v77; // rdi
  int v78; // esi
  unsigned __int64 v79; // r13
  size_t v80; // rdx
  char *v81; // rdi
  char *v82; // rcx
  char *v83; // rax
  unsigned __int64 v84; // rsi
  size_t v85; // rdx
  char *v86; // rdi
  size_t v87; // rdx
  char *v88; // rdi
  int v89; // esi
  int v90; // edi
  int v91; // edx
  char *v92; // rax
  char *v93; // r9
  size_t v94; // rcx
  size_t v95; // rax
  size_t v96; // rdx
  char *v97; // rdi
  size_t v98; // rcx
  __int64 j; // r13
  __int64 v100; // rsi
  int v101; // eax
  int v102; // esi
  char v103; // cl
  int v104; // esi
  size_t v105; // rdx
  char *v106; // rdi
  char v107; // al
  char v108; // cl
  unsigned __int64 v109; // r12
  unsigned __int64 v110; // r8
  size_t v111; // rdx
  __int64 v112; // r12
  char *v113; // rdi
  int v114; // eax
  unsigned __int64 v115; // rcx
  char *v116; // rdi
  int v117; // esi
  int v118; // edx
  __int32 v119; // r10d
  __int32 v120; // esi
  int k; // edi
  __int32 v122; // esi
  bool v123; // sf
  bool v124; // of
  int v125; // eax
  int v126; // eax
  int v127; // esi
  int v128; // esi
  char *v131; // [rsp+20h] [rbp-4A8h]
  int v133; // [rsp+2Ch] [rbp-49Ch]
  char *v134; // [rsp+30h] [rbp-498h]
  char v135; // [rsp+30h] [rbp-498h]
  unsigned __int64 v136; // [rsp+30h] [rbp-498h]
  char v137; // [rsp+30h] [rbp-498h]
  int v138; // [rsp+30h] [rbp-498h]
  char v139; // [rsp+30h] [rbp-498h]
  char v140; // [rsp+30h] [rbp-498h]
  size_t v141; // [rsp+30h] [rbp-498h]
  char v142; // [rsp+30h] [rbp-498h]
  size_t v143; // [rsp+30h] [rbp-498h]
  int v144; // [rsp+30h] [rbp-498h]
  char v145; // [rsp+40h] [rbp-488h]
  char *v146; // [rsp+40h] [rbp-488h]
  char *v147; // [rsp+40h] [rbp-488h]
  char v148; // [rsp+40h] [rbp-488h]
  char *v149; // [rsp+40h] [rbp-488h]
  char v150; // [rsp+40h] [rbp-488h]
  char v151; // [rsp+40h] [rbp-488h]
  char v152; // [rsp+40h] [rbp-488h]
  char *v153; // [rsp+40h] [rbp-488h]
  char *v154; // [rsp+40h] [rbp-488h]
  char v155; // [rsp+40h] [rbp-488h]
  char *v156; // [rsp+40h] [rbp-488h]
  char v157; // [rsp+40h] [rbp-488h]
  int v158; // [rsp+48h] [rbp-480h]
  unsigned __int64 v159; // [rsp+48h] [rbp-480h]
  char *v160; // [rsp+48h] [rbp-480h]
  unsigned __int64 v161; // [rsp+48h] [rbp-480h]
  char v162; // [rsp+48h] [rbp-480h]
  char *v163; // [rsp+48h] [rbp-480h]
  char *v164; // [rsp+48h] [rbp-480h]
  char v165; // [rsp+48h] [rbp-480h]
  int v166; // [rsp+48h] [rbp-480h]
  char v167; // [rsp+48h] [rbp-480h]
  unsigned __int64 v168; // [rsp+50h] [rbp-478h]
  int v169; // [rsp+50h] [rbp-478h]
  size_t v170; // [rsp+50h] [rbp-478h]
  unsigned __int64 v171; // [rsp+50h] [rbp-478h]
  int v172; // [rsp+50h] [rbp-478h]
  size_t v173; // [rsp+58h] [rbp-470h]
  char *v174; // [rsp+58h] [rbp-470h]
  char v175; // [rsp+58h] [rbp-470h]
  unsigned __int64 v176; // [rsp+58h] [rbp-470h]
  unsigned __int64 v177; // [rsp+58h] [rbp-470h]
  unsigned __int64 v178; // [rsp+60h] [rbp-468h]
  char format[2]; // [rsp+70h] [rbp-458h] BYREF
  char v180; // [rsp+72h] [rbp-456h] BYREF
  char v181; // [rsp+73h] [rbp-455h] BYREF
  char v182[9]; // [rsp+87h] [rbp-441h] BYREF
  char sa[16]; // [rsp+90h] [rbp-438h] BYREF
  __m128i v184; // [rsp+A0h] [rbp-428h]
  __m128i v185; // [rsp+B0h] [rbp-418h]
  __int64 v186; // [rsp+C0h] [rbp-408h]

  v9 = (char *)a3;
  v10 = a4[3].m128i_i64[0];
  v11 = a4->m128i_i32[2];
  if ( !v10 )
    v10 = 4247139LL;
  if ( v11 <= 12 )
  {
    if ( !v11 )
      v11 = 12;
  }
  else
  {
    v11 -= 12;
  }
  v12 = *(_BYTE *)a3;
  v13 = 0LL;
  if ( !*(_BYTE *)a3 )
  {
LABEL_13:
    if ( s && a2 )
      *s = 0;
    return v13;
  }
  v133 = v11;
  v131 = (char *)v10;
  while ( v12 != 37 )
  {
    a3 = a2 - v13;
    if ( (unsigned __int64)(a2 - v13) <= 1 )
      return 0LL;
    if ( s )
      *s++ = v12;
    ++v13;
    v14 = v9;
LABEL_12:
    v12 = v14[1];
    v9 = v14 + 1;
    if ( !v12 )
      goto LABEL_13;
  }
  v16 = a5;
  v17 = 0LL;
LABEL_22:
  for ( i = 0; ; i = v19 )
  {
    v19 = *++v9;
    v20 = v19;
    v21 = v19;
    v22 = *v9 <= 48;
    if ( *v9 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !v22 )
    {
      if ( (_BYTE)v19 == 94 )
      {
        v16 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v19 != 95 )
      {
        v23 = -1;
        if ( v19 - 48 > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v19 != 35 )
      break;
    v19 = *++v9;
    v17 = 1LL;
    v20 = v19;
    v21 = v19;
    v22 = *v9 <= 48;
    if ( *v9 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v19 == 45 )
    goto LABEL_26;
  v23 = -1;
  if ( v19 - 48 > 9 )
    goto LABEL_29;
LABEL_37:
  v23 = 0;
  while ( 1 )
  {
    v24 = v9[1];
    v20 = v24;
    a3 = v24 - 48;
    if ( v23 > 214748364 )
      break;
    v25 = *v9;
    if ( v23 == 214748364 && (char)v25 > 55 )
      break;
    ++v9;
    v23 = v25 + 10 * v23 - 48;
LABEL_41:
    if ( (unsigned int)a3 > 9 )
    {
      v21 = v24;
      goto LABEL_29;
    }
  }
  if ( (unsigned int)a3 <= 9 )
  {
    v24 = v9[2];
    v23 = 0x7FFFFFFF;
    v9 += 2;
    v20 = v24;
    a3 = v24 - 48;
    goto LABEL_41;
  }
  v21 = v24;
  ++v9;
  v23 = 0x7FFFFFFF;
LABEL_29:
  if ( (_BYTE)v20 == 69 || (_BYTE)v20 == 79 )
    v20 = (unsigned __int8)*++v9;
  else
    v21 = 0LL;
  switch ( (char)v20 )
  {
    case 0:
      v93 = v9 - 1;
      v103 = *(v9 - 1);
      goto LABEL_261;
    case 37:
      LODWORD(v95) = 0;
      v79 = 1LL;
      a3 = a2 - v13;
      if ( v23 >= 0 )
        LODWORD(v95) = v23;
      v95 = (int)v95;
      if ( (_DWORD)v95 )
        v79 = (int)v95;
      if ( (_DWORD)v21 )
      {
        v14 = v9;
        v93 = v9;
        v94 = 1LL;
        goto LABEL_242;
      }
      if ( v79 < a3 )
      {
        if ( s )
        {
          if ( v23 > 1 )
          {
            v105 = v23 - 1LL;
            v106 = s;
            s += v105;
            if ( i == 48 )
              memset(v106, 48, v105);
            else
              memset(v106, 32, v105);
            LOBYTE(v20) = *v9;
          }
          *s++ = v20;
        }
LABEL_174:
        v13 += v79;
        v14 = v9;
        goto LABEL_12;
      }
      return 0LL;
    case 58:
      v107 = v9[1];
      a3 = (unsigned __int64)(v9 + 1);
      for ( j = 1LL; v107 == 58; a3 = (unsigned __int64)&v9[j] )
        v107 = v9[++j];
      if ( v107 != 122 )
        goto LABEL_236;
      v9 = (char *)a3;
      goto LABEL_252;
    case 65:
    case 66:
    case 97:
      if ( (_DWORD)v21 )
        goto LABEL_236;
      if ( (_BYTE)v17 )
        v16 = v17;
      goto LABEL_51;
    case 67:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_334;
      v139 = 0;
      v48 = 2;
      LOBYTE(v70) = a4[1].m128i_i32[1] < -1900;
      v68 = a4[1].m128i_i32[1] / 100
          + 19
          - ((a4[1].m128i_i32[1] / 100 + 19 > 0) & ((unsigned int)(a4[1].m128i_i32[1] % 100) >> 31));
      v69 = 0;
      goto LABEL_122;
    case 68:
      if ( !(_DWORD)v21 )
        goto LABEL_94;
      goto LABEL_236;
    case 70:
      if ( !(_DWORD)v21 )
        goto LABEL_94;
      goto LABEL_236;
    case 71:
    case 86:
    case 103:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v60 = a4[1].m128i_i32[3];
      v61 = a4[1].m128i_i32[2];
      v138 = a4[1].m128i_i32[1];
      v62 = v138 + ((v138 >> 31) & 0x190) - 100;
      v63 = v61 - 382 + 7 * ((v60 - v61 + 382) / 7) + 3;
      if ( v63 < 0 )
      {
        v117 = v138 + ((v138 >> 31) & 0x190) - 101;
        v118 = 365;
        if ( (((_BYTE)v138 + ((v138 >> 31) & 0x90) - 101) & 3) == 0 )
        {
          v118 = 366;
          if ( v117 == 100 * (v117 / 100) )
            v118 = 366 - (v117 % 400 != 0);
        }
        v119 = v118 + v60;
        v120 = v119 - v61;
        v66 = -1;
        v63 = v119 - (v120 + 382) + 7 * ((v120 + 382) / 7) + 3;
      }
      else
      {
        v64 = 365;
        if ( (v62 & 3) == 0 )
        {
          v64 = 366;
          if ( v62 == 100 * (v62 / 100) )
            v64 = (v62 == 400 * (v62 / 400)) + 365;
        }
        v65 = v61 - 382 + 7 * ((v60 - v64 - v61 + 382) / 7) + 3;
        if ( v65 >= 0 )
          v63 = v65;
        v66 = (v65 >> 31) + 1;
      }
      if ( (_BYTE)v20 == 71 )
      {
        v122 = a4[1].m128i_i32[1];
        v139 = 0;
        v48 = 4;
        v124 = __OFSUB__(v122, -1900 - v66);
        v123 = v122 - (-1900 - v66) < 0;
        v68 = v122 + v66 + 1900;
        LOBYTE(v70) = v123 ^ v124;
        v69 = 0;
        goto LABEL_122;
      }
      if ( (_BYTE)v20 == 103 )
      {
        v48 = 2;
        v67 = (v66 + v138 % 100) % 100;
        v68 = v67;
        if ( v67 < 0 )
        {
          v68 = v67 + 100;
          if ( v138 < -1900 - v66 )
            v68 = -v67;
        }
      }
      else
      {
        v48 = 2;
        v68 = v63 / 7 + 1;
      }
      goto LABEL_121;
    case 72:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 2;
      v68 = a4->m128i_u32[2];
      goto LABEL_121;
    case 73:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v68 = v133;
      v48 = 2;
      goto LABEL_121;
    case 77:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 2;
      v68 = a4->m128i_u32[1];
      goto LABEL_121;
    case 78:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      if ( v23 == -1 )
      {
        v68 = a8;
        v23 = 9;
        v48 = 9;
      }
      else
      {
        if ( v23 > 8 )
        {
          v68 = a8;
        }
        else
        {
          v68 = a8;
          for ( k = v23; k != 9; ++k )
            v68 = (int)v68 / 10;
        }
        v48 = v23;
      }
      goto LABEL_121;
    case 80:
      v28 = 1;
      goto LABEL_152;
    case 82:
    case 84:
LABEL_94:
      v55 = sub_405920(0LL, a7, a8);
      v56 = 0;
      if ( v23 >= 0 )
        v56 = v23;
      v57 = v56;
      if ( v55 >= v56 )
        v57 = v55;
      if ( a2 - v13 <= v57 )
        return 0LL;
      if ( s )
      {
        if ( v55 < v56 )
        {
          v168 = v55;
          v58 = v23 - v55;
          v59 = s;
          s += v58;
          if ( i == 48 )
            memset(v59, 48, v58);
          else
            memset(v59, 32, v58);
          v55 = v168;
        }
        v161 = v55;
        sub_405920(s, a7, a8);
        s += v161;
      }
      v13 += v57;
      v14 = v9;
      goto LABEL_12;
    case 83:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 2;
      v68 = a4->m128i_i32[0];
      goto LABEL_121;
    case 85:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v90 = a4[1].m128i_i32[3] - a4[1].m128i_i32[2] + 7;
      v91 = (unsigned __int64)(-1840700269LL * v90) >> 32;
      goto LABEL_226;
    case 87:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v90 = 7 * ((a4[1].m128i_i32[2] + 6) / 7) - (a4[1].m128i_i32[2] + 6) + a4[1].m128i_i32[3] + 7;
      v91 = (unsigned __int64)(-1840700269LL * v90) >> 32;
LABEL_226:
      v48 = 2;
      v68 = ((v91 + v90) >> 2) - (v90 >> 31);
      goto LABEL_121;
    case 88:
    case 99:
    case 120:
      if ( (_DWORD)v21 != 79 )
        goto LABEL_69;
      goto LABEL_236;
    case 89:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_334;
      if ( (_DWORD)v21 == 79 )
        goto LABEL_236;
      v139 = 0;
      v48 = 4;
      v89 = a4[1].m128i_i32[1];
      LOBYTE(v70) = v89 < -1900;
      v68 = v89 + 1900;
      v69 = 0;
      goto LABEL_220;
    case 90:
      v162 = v17;
      if ( (_BYTE)v17 )
        v16 = 0;
      v150 = v16;
      v71 = strlen(v131);
      v72 = 0;
      if ( v23 >= 0 )
        v72 = v23;
      v73 = v72;
      if ( v71 >= v72 )
        v73 = v71;
      a3 = a2 - v13;
      if ( a2 - v13 <= v73 )
        return 0LL;
      if ( s )
      {
        v74 = v150;
        v75 = v162;
        if ( v71 < v72 )
        {
          v76 = v23 - v71;
          v77 = s;
          s += v76;
          if ( i == 48 )
          {
            memset(v77, 48, v76);
            v74 = v150;
            v75 = v162;
          }
          else
          {
            memset(v77, 32, v76);
            v75 = v162;
            v74 = v150;
          }
        }
        if ( v75 )
        {
          sub_405880((__int64)s, (__int64)v131, v71);
        }
        else if ( v74 )
        {
          sub_4058D0((__int64)s, (__int64)v131, v71);
        }
        else
        {
          memcpy(s, v131, v71);
        }
        s += v71;
      }
      v13 += v73;
      v14 = v9;
      goto LABEL_12;
    case 98:
    case 104:
      if ( (_BYTE)v17 )
        v16 = v17;
      if ( (_DWORD)v21 )
        goto LABEL_236;
LABEL_51:
      v26 = &v180;
      v27 = v9;
      v28 = 0;
      *(_WORD *)format = 9504;
      LODWORD(v21) = 0;
      goto LABEL_52;
    case 100:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 2;
      v68 = a4->m128i_u32[3];
      goto LABEL_121;
    case 101:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v68 = a4->m128i_u32[3];
      goto LABEL_157;
    case 106:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v139 = 0;
      v48 = 3;
      v104 = a4[1].m128i_i32[3];
      LOBYTE(v70) = v104 < -1;
      v68 = v104 + 1;
      v69 = 0;
      goto LABEL_122;
    case 107:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v68 = a4->m128i_u32[2];
      goto LABEL_157;
    case 108:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v68 = v133;
LABEL_157:
      v48 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_121;
    case 109:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v139 = 0;
      v48 = 2;
      v78 = a4[1].m128i_i32[0];
      LOBYTE(v70) = v78 < -1;
      v68 = v78 + 1;
      v69 = 0;
      goto LABEL_122;
    case 110:
      LODWORD(v79) = 0;
      if ( v23 >= 0 )
        LODWORD(v79) = v23;
      v79 = (int)v79;
      if ( !(_DWORD)v79 )
        v79 = 1LL;
      if ( a2 - v13 <= v79 )
        return 0LL;
      if ( s )
      {
        if ( v23 > 1 )
        {
          v80 = v23 - 1LL;
          v81 = s;
          s += v80;
          if ( i == 48 )
            memset(v81, 48, v80);
          else
            memset(v81, 32, v80);
        }
        *s++ = 10;
      }
      goto LABEL_174;
    case 112:
      v28 = 0;
LABEL_152:
      LOBYTE(v20) = 112;
      if ( (_BYTE)v17 )
      {
        v28 = v17;
        v16 = 0;
      }
      goto LABEL_70;
    case 113:
      v48 = 1;
      if ( (_DWORD)v21 == 79 )
        goto LABEL_124;
      v139 = 0;
      LOBYTE(v70) = 0;
      v69 = 0;
      v68 = ((11 * a4[1].m128i_i32[0]) >> 5) + 1;
      goto LABEL_177;
    case 114:
LABEL_69:
      v28 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !(_DWORD)v21 )
      {
        v27 = v9;
        v26 = &v180;
        goto LABEL_52;
      }
      v48 = 0;
      goto LABEL_125;
    case 115:
      v148 = v16;
      v39 = v182;
      v40 = _mm_loadu_si128(a4 + 2);
      v41 = _mm_loadu_si128(a4 + 1);
      v42 = a4[3].m128i_i64[0];
      *(__m128i *)sa = _mm_loadu_si128(a4);
      v184 = v41;
      v185 = v40;
      v186 = v42;
      v43 = sub_40BF30(a7, sa, a3, v20, v17, v21);
      v16 = v148;
      v44 = v43;
      v45 = v43;
      do
      {
        v46 = v45 % 10;
        v45 /= 10LL;
        v47 = 48 - v46;
        a3 = (unsigned int)(v46 + 48);
        if ( v44 < 0 )
          a3 = v47;
        *--v39 = a3;
      }
      while ( v45 );
      v48 = 1;
      if ( v23 > 0 )
        v48 = v23;
      if ( v44 >= 0 )
        goto LABEL_79;
      goto LABEL_298;
    case 116:
      LODWORD(v79) = 0;
      if ( v23 >= 0 )
        LODWORD(v79) = v23;
      v79 = (int)v79;
      if ( !(_DWORD)v79 )
        v79 = 1LL;
      if ( a2 - v13 <= v79 )
        return 0LL;
      if ( s )
      {
        if ( v23 > 1 )
        {
          v87 = v23 - 1LL;
          v88 = s;
          s += v87;
          if ( i == 48 )
            memset(v88, 48, v87);
          else
            memset(v88, 32, v87);
        }
        *s++ = 9;
      }
      goto LABEL_174;
    case 117:
      v48 = 1;
      v68 = (a4[1].m128i_i32[2] + 6) % 7 + 1;
      goto LABEL_121;
    case 119:
      if ( (_DWORD)v21 == 69 )
        goto LABEL_236;
      v48 = 1;
      v68 = a4[1].m128i_u32[2];
      goto LABEL_121;
    case 121:
      if ( (_DWORD)v21 == 69 )
      {
LABEL_334:
        v48 = 0;
        goto LABEL_124;
      }
      v48 = 2;
      v68 = a4[1].m128i_i32[1] % 100;
      if ( (v68 & 0x80000000) != 0 )
      {
        v68 += 100;
        if ( a4[1].m128i_i32[1] <= -1901 )
          v68 = -(a4[1].m128i_i32[1] % 100);
      }
LABEL_121:
      v139 = 0;
      v69 = 0;
      v70 = v68 >> 31;
LABEL_122:
      if ( (_DWORD)v21 == 79 )
      {
        if ( (_BYTE)v70 )
          goto LABEL_221;
LABEL_124:
        v28 = 0;
        *(_WORD *)format = 9504;
LABEL_125:
        v180 = v21;
        v27 = v9;
        LODWORD(v21) = v48;
        v26 = &v181;
LABEL_52:
        *v26 = v20;
        v26[1] = 0;
        v134 = v27;
        v158 = v21;
        v145 = v16;
        v29 = strftime(sa, 0x400uLL, format, (const struct tm *)a4);
        v14 = v134;
        if ( v29 )
        {
          v30 = v29 - 1;
          v31 = 0;
          if ( v23 >= 0 )
            v31 = v23;
          v32 = v31;
          if ( v30 >= v31 )
            v32 = v30;
          a3 = a2 - v13;
          if ( a2 - v13 > v32 )
          {
            if ( s )
            {
              v16 = v145;
              if ( !v158 && v30 < v31 )
              {
                v159 = v30;
                v33 = v23 - v30;
                v146 = v134;
                v135 = v16;
                v34 = s;
                s += v33;
                if ( i == 48 )
                {
                  memset(v34, 48, v33);
                  v16 = v135;
                  v14 = v146;
                  v30 = v159;
                }
                else
                {
                  memset(v34, 32, v33);
                  v30 = v159;
                  v14 = v146;
                  v16 = v135;
                }
              }
              v147 = v14;
              v35 = &sa[1];
              v36 = v30;
              v37 = s;
              v136 = v30;
              if ( !v28 )
                goto LABEL_64;
              sub_405880((__int64)s, (__int64)&sa[1], v30);
              v38 = v136;
              v14 = v147;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_220:
      if ( (_BYTE)v70 )
LABEL_221:
        v68 = -v68;
LABEL_177:
      v82 = v182;
      while ( 1 )
      {
        v39 = v82 - 1;
        if ( (v69 & 1) != 0 )
        {
          v83 = v82 - 2;
          *--v82 = 58;
          v39 = v83;
        }
        v69 >>= 1;
        a3 = v68 / 0xA;
        *(v82 - 1) = v68 % 0xA + 48;
        v82 = v39;
        if ( v68 <= 9 && !v69 )
          break;
        v68 /= 0xAu;
      }
      if ( v48 < v23 )
        v48 = v23;
      if ( (_BYTE)v70 )
      {
LABEL_298:
        v140 = 45;
        v108 = 45;
        if ( i == 45 )
          goto LABEL_299;
LABEL_189:
        v49 = (char *)(v182 - v39);
        LODWORD(v51) = v48 - 1 - (v182 - v39);
        v50 = a2 - v13;
        if ( (int)v51 <= 0 )
        {
          LODWORD(v52) = 0;
          v110 = 1LL;
          if ( v23 >= 0 )
            LODWORD(v52) = v23;
          v52 = (int)v52;
          if ( (_DWORD)v52 )
            v110 = (int)v52;
          if ( v110 >= v50 )
            return 0LL;
          if ( s )
          {
            if ( !v48 && (unsigned __int64)(int)v52 > 1 )
            {
              v111 = v23 - 1LL;
              v178 = v110;
              v176 = (int)v52;
              v156 = &s[v111];
              v165 = v16;
              if ( i == 48 )
              {
                memset(s, 48, v111);
                s = v156;
                v16 = v165;
                v48 = 0;
                v52 = v176;
                v110 = v178;
                v49 = (char *)(v182 - v39);
              }
              else
              {
                memset(s, 32, v111);
                s = v156;
                v49 = (char *)(v182 - v39);
                v110 = v178;
                v52 = v176;
                v48 = 0;
                v16 = v165;
              }
            }
            *s++ = v140;
          }
          v13 += v110;
          v14 = v9;
          v50 = a2 - v13;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v48 >= v50 )
            return 0LL;
          LODWORD(a3) = 0;
          v84 = 1LL;
          if ( v23 >= 0 )
            LODWORD(a3) = v23;
          a3 = (int)a3;
          if ( (_DWORD)a3 )
            v84 = (int)a3;
          if ( v84 >= v50 )
            return 0LL;
          v13 += v84;
          v51 = (int)v51;
          v14 = v9;
          if ( !s )
            goto LABEL_205;
          if ( !v48 && (unsigned __int64)(int)a3 > 1 )
          {
            v173 = (int)v51;
            v85 = v23 - 1LL;
            v151 = v16;
            v86 = s;
            s += v85;
            if ( i == 48 )
            {
              memset(v86, 48, v85);
              v16 = v151;
              v48 = 0;
              v49 = (char *)(v182 - v39);
              v51 = v173;
            }
            else
            {
              memset(v86, 32, v85);
              v51 = v173;
              v49 = (char *)(v182 - v39);
              v48 = 0;
              v16 = v151;
            }
          }
          ++s;
          v14 = v9;
          *(s - 1) = v140;
LABEL_203:
          if ( s )
          {
            v174 = v49;
            v169 = v48;
            v163 = v14;
            v152 = v16;
            v141 = v51;
            memset(s, 48, v51);
            v51 = v141;
            v49 = v174;
            v48 = v169;
            v14 = v163;
            v16 = v152;
            s += v141;
          }
LABEL_205:
          v13 += v51;
          v23 = 0;
          v52 = 0LL;
          v50 = a2 - v13;
          goto LABEL_84;
        }
LABEL_326:
        v112 = (int)v51;
        if ( (int)v51 >= v50 )
          return 0LL;
        if ( s )
        {
          v113 = s;
          v172 = v51;
          v166 = v48;
          s += (int)v51;
          v157 = v16;
          memset(v113, 32, (int)v51);
          LODWORD(v51) = v172;
          v48 = v166;
          v16 = v157;
        }
        v13 += v112;
        v114 = v23 - v51;
        v22 = (int)v51 < v23;
        v23 = 0;
        if ( v22 )
          v23 = v114;
        v50 = a2 - v13;
        if ( v140 )
        {
          v52 = v23;
          v115 = 1LL;
          if ( v23 )
            v115 = v23;
          if ( v115 >= v50 )
            return 0LL;
          if ( s )
          {
            if ( !v48 && (unsigned __int64)v23 > 1 )
            {
              v116 = s;
              v177 = v115;
              s += v23 - 1;
              v167 = v16;
              memset(v116, 32, v23 - 1LL);
              v115 = v177;
              v48 = 0;
              v16 = v167;
              v52 = v23;
            }
            *s++ = v140;
          }
          v13 += v115;
          v14 = v9;
          i = 95;
          v49 = (char *)(v182 - v39);
          v50 = a2 - v13;
        }
        else
        {
          v52 = v23;
          v14 = v9;
          i = 95;
          v49 = (char *)(v182 - v39);
        }
        goto LABEL_84;
      }
      if ( !v139 )
      {
LABEL_79:
        v49 = (char *)(v182 - v39);
        v50 = a2 - v13;
        if ( i == 45 || (LODWORD(v51) = v48 - (_DWORD)v49, v48 - (int)v49 <= 0) )
        {
          LODWORD(v52) = 0;
          v14 = v9;
          if ( v23 >= 0 )
            LODWORD(v52) = v23;
          v52 = (int)v52;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          a3 = v48;
          if ( v48 >= v50 )
            return 0LL;
          v51 = (int)v51;
          v14 = v9;
          goto LABEL_203;
        }
        v140 = 0;
        goto LABEL_326;
      }
      if ( i != 45 )
      {
        v140 = 43;
        goto LABEL_189;
      }
      v108 = 43;
LABEL_299:
      LODWORD(v52) = 0;
      v109 = 1LL;
      if ( v23 >= 0 )
        LODWORD(v52) = v23;
      v52 = (int)v52;
      if ( (_DWORD)v52 )
        v109 = (int)v52;
      if ( a2 - v13 <= v109 )
        return 0LL;
      if ( s )
      {
        if ( !v48 && (unsigned __int64)(int)v52 > 1 )
        {
          v175 = v108;
          v171 = (int)v52;
          v155 = v16;
          memset(s, 32, v23 - 1LL);
          v108 = v175;
          v52 = v171;
          v48 = 0;
          v16 = v155;
          s += v23 - 1;
        }
        *s++ = v108;
      }
      v13 += v109;
      v14 = v9;
      i = 45;
      v49 = (char *)(v182 - v39);
      v50 = a2 - v13;
LABEL_84:
      v32 = v52;
      if ( (unsigned __int64)v49 >= v52 )
        v32 = (unsigned __int64)v49;
      if ( v32 < v50 )
      {
        if ( s )
        {
          if ( !v48 && (unsigned __int64)v49 < v52 )
          {
            v160 = v49;
            v53 = v23 - (_QWORD)v49;
            v149 = v14;
            v137 = v16;
            v54 = s;
            s += v53;
            if ( i == 48 )
            {
              memset(v54, 48, v53);
              v16 = v137;
              v14 = v149;
              v49 = v160;
            }
            else
            {
              memset(v54, 32, v53);
              v49 = v160;
              v14 = v149;
              v16 = v137;
            }
          }
          v147 = v14;
          v36 = (size_t)v49;
          v35 = v39;
          v37 = s;
          v136 = (unsigned __int64)v49;
LABEL_64:
          if ( v16 )
          {
            sub_4058D0((__int64)v37, (__int64)v35, v36);
            v38 = v136;
            v14 = v147;
          }
          else
          {
            memcpy(v37, v35, v36);
            v14 = v147;
            v38 = v136;
          }
LABEL_66:
          s += v38;
        }
LABEL_67:
        v13 += v32;
        goto LABEL_12;
      }
      return 0LL;
    case 122:
      j = 0LL;
LABEL_252:
      if ( a4[2].m128i_i32[0] < 0 )
      {
        v14 = v9;
        goto LABEL_12;
      }
      v100 = a4[2].m128i_i64[1];
      LOBYTE(v70) = 1;
      if ( (int)v100 >= 0 )
      {
        LOBYTE(v70) = 0;
        if ( !(_DWORD)v100 )
          LOBYTE(v70) = *v131 == 45;
      }
      v144 = (int)v100 / 3600;
      v101 = (int)v100 / 60 % 60;
      v69 = v101;
      v102 = (int)v100 % 60;
      if ( j == 1 )
        goto LABEL_362;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_361;
        if ( j != 3 )
        {
          v103 = *v9;
          v93 = v9;
LABEL_261:
          LODWORD(v95) = 0;
          a3 = a2 - v13;
          if ( v23 >= 0 )
            LODWORD(v95) = v23;
          v95 = (int)v95;
          if ( v103 == 37 )
          {
            v79 = 1LL;
            v14 = v93;
            v94 = 1LL;
            if ( (_DWORD)v95 )
              v79 = (int)v95;
          }
          else
          {
            v9 = v93;
LABEL_236:
            v92 = v9 - 1;
            do
            {
              v93 = v92;
              LODWORD(v94) = (_DWORD)v9 - 1 + 2 - (_DWORD)v92--;
            }
            while ( v92[1] != 37 );
            LODWORD(v95) = 0;
            v94 = (int)v94;
            v14 = v9;
            a3 = a2 - v13;
            if ( v23 >= 0 )
              LODWORD(v95) = v23;
            v95 = (int)v95;
            v79 = (int)v95;
            if ( (int)v94 >= (unsigned __int64)(int)v95 )
              v79 = (int)v94;
          }
LABEL_242:
          if ( a3 > v79 )
          {
            if ( s )
            {
              if ( v94 < v95 )
              {
                v170 = v94;
                v96 = v23 - v94;
                v164 = v14;
                v153 = v93;
                v142 = v16;
                v97 = s;
                s += v96;
                if ( i == 48 )
                {
                  memset(v97, 48, v96);
                  v16 = v142;
                  v93 = v153;
                  v14 = v164;
                  v94 = v170;
                }
                else
                {
                  memset(v97, 32, v96);
                  v94 = v170;
                  v14 = v164;
                  v93 = v153;
                  v16 = v142;
                }
              }
              v154 = v14;
              v143 = v94;
              if ( v16 )
              {
                sub_4058D0((__int64)s, (__int64)v93, v94);
                v98 = v143;
                v14 = v154;
              }
              else
              {
                memcpy(s, v93, v94);
                v14 = v154;
                v98 = v143;
              }
              s += v98;
            }
            v13 += v79;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v102 )
        {
LABEL_361:
          v125 = 10000 * v144;
          v48 = 9;
          v139 = 1;
          v126 = 100 * v69 + v125;
          v69 = 20;
          v68 = v126 + v102;
        }
        else if ( v101 )
        {
LABEL_362:
          v127 = 100 * v144;
          v48 = 6;
          v139 = 1;
          v68 = v101 + v127;
          v69 = 4;
        }
        else
        {
          v68 = v144;
          v48 = 3;
          v139 = 1;
        }
      }
      else
      {
        v128 = 100 * v144;
        v69 = 0;
        v139 = 1;
        v48 = 5;
        v68 = v101 + v128;
      }
      goto LABEL_122;
    default:
      goto LABEL_236;
  }
}

__int64 __fastcall sub_4070F0(char *a1, __int64 a2, unsigned __int64 a3, const __m128i *a4, __int64 a5, int a6)
{
  char v7[9]; // [rsp+Fh] [rbp-9h] BYREF

  v7[0] = 0;
  return sub_405920(a1, a2, a3, a4, 0, (__int64)v7, a5, a6);
}

char *__fastcall sub_407110(const char *a1)
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
  qword_614490 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_4071B0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40C0D0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40F3D9;
      if ( !v5 )
        return (char *)&unk_40F3CE;
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
    v2 = (char *)&unk_40F3D5;
    if ( !v5 )
      return (char *)&unk_40F3D2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_4072B0(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_4072B0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
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
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
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
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_4072B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
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
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
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
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
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
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
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
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_40BA50((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_4072B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_4071B0("`", a5);
        v51 = sub_4071B0("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

unsigned __int64 __fastcall sub_4072B0(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_4072B0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
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
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
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
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_4072B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
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
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
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
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
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
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
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
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_40BA50((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_4072B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_4071B0("`", a5);
        v51 = sub_4071B0("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

_BYTE *__fastcall sub_4084E0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // r8d
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  unsigned __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v8 = (__m128i *)off_614318;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_614330 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_409550(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_614318 == &xmmword_614320 )
    {
      v8 = (__m128i *)sub_409360(0LL, v10);
      off_614318 = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      off_614318 = (void *)sub_409360(off_614318, v10);
      v8 = (__m128i *)off_614318;
    }
    memset(&v8[dword_614330], 0, 16LL * ((int)a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_4072B0(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_6144A0 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_409300(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_4072B0(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_4084E0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // r8d
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  unsigned __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v8 = (__m128i *)off_614318;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_614330 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_409550(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_614318 == &xmmword_614320 )
    {
      v8 = (__m128i *)sub_409360(0LL, v10);
      off_614318 = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      off_614318 = (void *)sub_409360(off_614318, v10);
      v8 = (__m128i *)off_614318;
    }
    memset(&v8[dword_614330], 0, 16LL * ((int)a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_4072B0(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_6144A0 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_409300(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_4072B0(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

__int64 __fastcall sub_408680(__int128 *a1)
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
    v1 = &xmmword_6145A0;
  result = sub_409500(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_408770(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_6145A0;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_4072B0(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_4087F0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_6145A0;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_4072B0(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_409300(v11 + 1);
  sub_4072B0(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_4088F0()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)off_614318;
  if ( dword_614330 > 1 )
  {
    v1 = (void **)((char *)off_614318 + 24);
    v2 = (void **)((char *)off_614318 + 16 * (unsigned int)(dword_614330 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_6144A0 )
  {
    free(v4);
    *(_QWORD *)&xmmword_614320 = 256LL;
    *((_QWORD *)&xmmword_614320 + 1) = &unk_6144A0;
  }
  if ( v0 != &xmmword_614320 )
  {
    free(v0);
    off_614318 = &xmmword_614320;
  }
  dword_614330 = 1;
}

_BYTE *__fastcall sub_408A00(__int64 a1, int a2, __int64 a3)
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
  return sub_4084E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408A00(__int64 a1, int a2, __int64 a3)
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
  return sub_4084E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408A70(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_4084E0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_408A70(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_4084E0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_408B00(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_6145D0;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6145A0);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6145B0);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6145C0);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_4084E0(0LL, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_408B80(__int64 a1)
{
  return sub_408B00(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_408BB0(__int64 a1, int a2, __int64 a3)
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
  return sub_4084E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408BB0(__int64 a1, int a2, __int64 a3)
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
  return sub_4084E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6145A0);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6145B0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_6145C0);
  v8 = qword_6145D0;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_4084E0(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_408D30(__int64 a1)
{
  return sub_4084E0(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6142E0);
}

__int64 __fastcall sub_408D50(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  return sub_40AAA0(a1, 0, 3, a4, a5, a6, a7);
}

__int64 __fastcall sub_408D60(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_408D60(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_409160(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_408D60(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_408D60(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_4091C0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_408D60(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_408D60(a1, a2, a3, a4, v15, i);
}

int sub_409280()
{
  char *v0; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  char *v3; // rax
  __int64 v4; // r8
  FILE *v5; // rbx
  char *v6; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1, v2);
  v3 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v3, &unk_40CEF3, "https://www.gnu.org/software/coreutils/", v4);
  v5 = stdout;
  v6 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v6, v5);
}

void *__fastcall sub_409300(size_t a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // rdx

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_409550(a1, a2, v3);
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_409350(size_t a1, __int64 a2)
{
  return sub_409300(a1, a2);
}

void *__fastcall sub_409360(void *a1, size_t a2)
{
  void *result; // rax
  __int64 v3; // rdx

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
        sub_409550(a1, a2, v3);
    }
  }
  return result;
}

void *__fastcall sub_409460(void *a1, size_t *a2, __int64 a3)
{
  size_t v3; // rax

  v3 = *a2;
  if ( a1 )
  {
    a3 = 0x5555555555555553LL;
    if ( v3 <= 0x5555555555555553LL )
    {
      v3 += (v3 >> 1) + 1;
LABEL_4:
      *a2 = v3;
      return sub_409360(a1, v3);
    }
LABEL_8:
    sub_409550(a1, a2, a3);
  }
  if ( v3 )
  {
    if ( (v3 & 0x8000000000000000LL) == 0LL )
      goto LABEL_4;
    goto LABEL_8;
  }
  *a2 = 128LL;
  return sub_409360(0LL, 0x80uLL);
}

void *__fastcall sub_4094B0(size_t n, __int64 a2)
{
  void *v2; // rax

  v2 = sub_409300(n, a2);
  return memset(v2, 0, n);
}

__int64 __fastcall sub_4094D0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_409550(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_409500(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_409300(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_409530(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_409500(src, v1 + 1);
}

void __noreturn sub_409550()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_409590(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rbp
  int *v13; // r14
  _BYTE *v14; // rax
  int v15; // esi
  int v17; // ebp
  int *v18; // rax
  int v19; // eax
  __int64 v20; // [rsp+8h] [rbp-40h]

  v10 = a7;
  v11 = sub_4096B0(a1);
  if ( v11 )
  {
    v17 = v11;
    v18 = __errno_location();
    v13 = v18;
    if ( v17 != 1 )
    {
      if ( v17 == 3 )
        *v18 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v12 = v20;
    if ( v20 >= a3 && v20 <= a4 )
      return v12;
    v13 = __errno_location();
    if ( v20 <= 0x3FFFFFFF )
    {
      v19 = 34;
      if ( v20 <= -1073741825 )
        v19 = 75;
      *v13 = v19;
      goto LABEL_6;
    }
  }
  *v13 = 75;
LABEL_6:
  v14 = sub_408D30((__int64)a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", a6, v14);
  return v20;
}

__int64 __fastcall sub_409680(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_409590(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_4096B0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **p_endptr; // rbx
  int *v8; // rax
  int *v9; // r13
  __int64 v10; // rax
  char *v11; // r15
  __int64 v12; // rbp
  unsigned int v13; // r12d
  int v14; // r13d
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  char v19; // al
  char *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // edi
  int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // edi
  __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // r9
  int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // r9
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // r9
  int v43; // edi
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoimax");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = __strtol_internal(nptr, p_endptr, a3, 0);
  v11 = *p_endptr;
  v12 = v10;
  if ( *p_endptr == nptr )
  {
    if ( !a5 )
      return 4;
    v14 = (unsigned __int8)*v11;
    v13 = 4;
    if ( !(_BYTE)v14 )
      return v13;
    v12 = 1LL;
    v13 = 0;
    if ( !strchr(a5, (char)v14) )
      return 4;
LABEL_16:
    if ( (unsigned __int8)(v14 - 69) > 0x2Fu
      || (v18 = 0x814400308945LL, !_bittest64(&v18, (unsigned int)(v14 - 69)))
      || !strchr(a5, 48) )
    {
LABEL_17:
      LODWORD(v16) = 1;
      v17 = 1024;
      goto LABEL_18;
    }
    v19 = v11[1];
    if ( v19 != 68 )
    {
      if ( v19 == 105 )
      {
        v17 = 1024;
        LODWORD(v16) = 2 * (v11[2] == 66) + 1;
LABEL_18:
        switch ( (char)v14 )
        {
          case 'B':
            v16 = (int)v16;
            if ( v12 < (__int64)0xFFE0000000000000LL )
              goto LABEL_46;
            if ( v12 > 0x1FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 10;
            break;
          case 'E':
            v32 = v17;
            v16 = (int)v16;
            v33 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_67;
          case 'G':
          case 'g':
            v35 = v17;
            v16 = (int)v16;
            v36 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_74;
          case 'K':
          case 'k':
            v21 = v17;
            v16 = (int)v16;
            v22 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_38;
          case 'M':
          case 'm':
            v21 = v17;
            v16 = (int)v16;
            v24 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_43;
          case 'P':
            v25 = v17;
            v16 = (int)v16;
            v26 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_53;
          case 'T':
          case 't':
            v29 = v17;
            v16 = (int)v16;
            v30 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_60;
          case 'Y':
            v38 = v17;
            v16 = (int)v16;
            v39 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_81;
          case 'Z':
            v41 = v17;
            v16 = (int)v16;
            v42 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_88;
          case 'b':
            v16 = (int)v16;
            goto LABEL_48;
          case 'c':
            v16 = (int)v16;
            break;
          case 'w':
            v16 = (int)v16;
            if ( v12 < (__int64)0xC000000000000000LL )
              goto LABEL_46;
            if ( v12 > 0x3FFFFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 *= 2LL;
            break;
          default:
            goto LABEL_27;
        }
LABEL_31:
        v20 = &v11[v16];
        *p_endptr = v20;
        if ( *v20 )
          v13 |= 2u;
        goto LABEL_9;
      }
      if ( v19 != 66 )
      {
        switch ( (char)v14 )
        {
          case 'E':
            v16 = 1LL;
            v32 = 1024LL;
            v33 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'F':
          case 'H':
          case 'I':
          case 'J':
          case 'L':
          case 'N':
          case 'O':
          case 'Q':
          case 'R':
          case 'S':
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case '[':
          case '\\':
          case ']':
          case '^':
          case '_':
          case '`':
          case 'a':
          case 'd':
          case 'e':
          case 'f':
          case 'h':
          case 'i':
          case 'j':
          case 'l':
          case 'n':
          case 'o':
          case 'p':
          case 'q':
          case 'r':
          case 's':
            goto LABEL_27;
          case 'G':
          case 'g':
            v16 = 1LL;
            v35 = 1024LL;
            v36 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'K':
          case 'k':
            v16 = 1LL;
            v21 = 1024LL;
            v22 = 0xFFE0000000000000LL;
LABEL_38:
            if ( v12 < v22 )
              goto LABEL_46;
            v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
            goto LABEL_40;
          case 'M':
          case 'm':
            v16 = 1LL;
            v21 = 1024LL;
            v24 = 0xFFE0000000000000LL;
LABEL_43:
            if ( v12 < v24 )
              goto LABEL_46;
            v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
            if ( v12 > 0x7FFFFFFFFFFFFFFFLL / v21 )
              goto LABEL_105;
            v12 *= v21;
            if ( v12 >= v24 )
            {
LABEL_40:
              if ( v23 < v12 )
              {
LABEL_105:
                v12 = 0x7FFFFFFFFFFFFFFFLL;
                v13 = 1;
              }
              else
              {
                v12 *= v21;
              }
            }
            else
            {
LABEL_46:
              v12 = 0x8000000000000000LL;
              v13 = 1;
            }
            break;
          case 'P':
            v16 = 1LL;
            v25 = 1024LL;
            v26 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'T':
          case 't':
            v16 = 1LL;
            v29 = 1024LL;
            v30 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'Y':
            v16 = 1LL;
            v38 = 1024LL;
            v39 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'Z':
            v16 = 1LL;
            v41 = 1024LL;
            v42 = 0xFFE0000000000000LL;
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
LABEL_104:
            v13 |= v28;
            goto LABEL_31;
          case 'b':
            v16 = 1LL;
LABEL_48:
            if ( v12 < (__int64)0xFFC0000000000000LL )
              goto LABEL_46;
            if ( v12 > 0x3FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 9;
            break;
          case 'c':
            v16 = 1LL;
            goto LABEL_31;
          default:
            goto LABEL_17;
        }
        goto LABEL_31;
      }
    }
    LODWORD(v16) = 2;
    v17 = 1000;
    goto LABEL_18;
  }
  if ( *v9 )
  {
    v13 = 4;
    if ( *v9 != 34 )
      return v13;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  if ( a5 )
  {
    v14 = (unsigned __int8)*v11;
    if ( (_BYTE)v14 )
    {
      if ( !strchr(a5, (char)v14) )
      {
LABEL_27:
        v13 |= 2u;
        *a4 = v12;
        return v13;
      }
      goto LABEL_16;
    }
  }
LABEL_9:
  *a4 = v12;
  return v13;
}

__int64 __fastcall sub_409E00(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **p_endptr; // rbx
  int *v8; // rax
  int *v9; // r13
  __int64 v10; // rax
  char *v11; // r15
  __int64 v12; // rbp
  unsigned int v13; // r12d
  int v14; // r13d
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  char v19; // al
  char *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // edi
  int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // edi
  __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // r9
  int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // r9
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // r9
  int v43; // edi
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtol");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = strtol(nptr, p_endptr, a3);
  v11 = *p_endptr;
  v12 = v10;
  if ( *p_endptr == nptr )
  {
    if ( !a5 )
      return 4;
    v14 = (unsigned __int8)*v11;
    v13 = 4;
    if ( !(_BYTE)v14 )
      return v13;
    v12 = 1LL;
    v13 = 0;
    if ( !strchr(a5, (char)v14) )
      return 4;
LABEL_16:
    if ( (unsigned __int8)(v14 - 69) > 0x2Fu
      || (v18 = 0x814400308945LL, !_bittest64(&v18, (unsigned int)(v14 - 69)))
      || !strchr(a5, 48) )
    {
LABEL_17:
      LODWORD(v16) = 1;
      v17 = 1024;
      goto LABEL_18;
    }
    v19 = v11[1];
    if ( v19 != 68 )
    {
      if ( v19 == 105 )
      {
        v17 = 1024;
        LODWORD(v16) = 2 * (v11[2] == 66) + 1;
LABEL_18:
        switch ( (char)v14 )
        {
          case 'B':
            v16 = (int)v16;
            if ( v12 < (__int64)0xFFE0000000000000LL )
              goto LABEL_46;
            if ( v12 > 0x1FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 10;
            break;
          case 'E':
            v32 = v17;
            v16 = (int)v16;
            v33 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_67;
          case 'G':
          case 'g':
            v35 = v17;
            v16 = (int)v16;
            v36 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_74;
          case 'K':
          case 'k':
            v21 = v17;
            v16 = (int)v16;
            v22 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_38;
          case 'M':
          case 'm':
            v21 = v17;
            v16 = (int)v16;
            v24 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_43;
          case 'P':
            v25 = v17;
            v16 = (int)v16;
            v26 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_53;
          case 'T':
          case 't':
            v29 = v17;
            v16 = (int)v16;
            v30 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_60;
          case 'Y':
            v38 = v17;
            v16 = (int)v16;
            v39 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_81;
          case 'Z':
            v41 = v17;
            v16 = (int)v16;
            v42 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_88;
          case 'b':
            v16 = (int)v16;
            goto LABEL_48;
          case 'c':
            v16 = (int)v16;
            break;
          case 'w':
            v16 = (int)v16;
            if ( v12 < (__int64)0xC000000000000000LL )
              goto LABEL_46;
            if ( v12 > 0x3FFFFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 *= 2LL;
            break;
          default:
            goto LABEL_27;
        }
LABEL_31:
        v20 = &v11[v16];
        *p_endptr = v20;
        if ( *v20 )
          v13 |= 2u;
        goto LABEL_9;
      }
      if ( v19 != 66 )
      {
        switch ( (char)v14 )
        {
          case 'E':
            v16 = 1LL;
            v32 = 1024LL;
            v33 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'F':
          case 'H':
          case 'I':
          case 'J':
          case 'L':
          case 'N':
          case 'O':
          case 'Q':
          case 'R':
          case 'S':
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case '[':
          case '\\':
          case ']':
          case '^':
          case '_':
          case '`':
          case 'a':
          case 'd':
          case 'e':
          case 'f':
          case 'h':
          case 'i':
          case 'j':
          case 'l':
          case 'n':
          case 'o':
          case 'p':
          case 'q':
          case 'r':
          case 's':
            goto LABEL_27;
          case 'G':
          case 'g':
            v16 = 1LL;
            v35 = 1024LL;
            v36 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'K':
          case 'k':
            v16 = 1LL;
            v21 = 1024LL;
            v22 = 0xFFE0000000000000LL;
LABEL_38:
            if ( v12 < v22 )
              goto LABEL_46;
            v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
            goto LABEL_40;
          case 'M':
          case 'm':
            v16 = 1LL;
            v21 = 1024LL;
            v24 = 0xFFE0000000000000LL;
LABEL_43:
            if ( v12 < v24 )
              goto LABEL_46;
            v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
            if ( v12 > 0x7FFFFFFFFFFFFFFFLL / v21 )
              goto LABEL_105;
            v12 *= v21;
            if ( v12 >= v24 )
            {
LABEL_40:
              if ( v23 < v12 )
              {
LABEL_105:
                v12 = 0x7FFFFFFFFFFFFFFFLL;
                v13 = 1;
              }
              else
              {
                v12 *= v21;
              }
            }
            else
            {
LABEL_46:
              v12 = 0x8000000000000000LL;
              v13 = 1;
            }
            break;
          case 'P':
            v16 = 1LL;
            v25 = 1024LL;
            v26 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'T':
          case 't':
            v16 = 1LL;
            v29 = 1024LL;
            v30 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'Y':
            v16 = 1LL;
            v38 = 1024LL;
            v39 = 0xFFE0000000000000LL;
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
            goto LABEL_104;
          case 'Z':
            v16 = 1LL;
            v41 = 1024LL;
            v42 = 0xFFE0000000000000LL;
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
LABEL_104:
            v13 |= v28;
            goto LABEL_31;
          case 'b':
            v16 = 1LL;
LABEL_48:
            if ( v12 < (__int64)0xFFC0000000000000LL )
              goto LABEL_46;
            if ( v12 > 0x3FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 9;
            break;
          case 'c':
            v16 = 1LL;
            goto LABEL_31;
          default:
            goto LABEL_17;
        }
        goto LABEL_31;
      }
    }
    LODWORD(v16) = 2;
    v17 = 1000;
    goto LABEL_18;
  }
  if ( *v9 )
  {
    v13 = 4;
    if ( *v9 != 34 )
      return v13;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  if ( a5 )
  {
    v14 = (unsigned __int8)*v11;
    if ( (_BYTE)v14 )
    {
      if ( !strchr(a5, (char)v14) )
      {
LABEL_27:
        v13 |= 2u;
        *a4 = v12;
        return v13;
      }
      goto LABEL_16;
    }
  }
LABEL_9:
  *a4 = v12;
  return v13;
}

void __fastcall __noreturn sub_40A550(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13[42]; // [rsp+Eh] [rbp-2Ah] BYREF

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v9 = (&off_410BE0)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_410B70[-a2];
      v13[1] = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * a2);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, a5);
    abort();
  }
  abort();
}

void __fastcall __noreturn sub_40A550(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13[42]; // [rsp+Eh] [rbp-2Ah] BYREF

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v9 = (&off_410BE0)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_410B70[-a2];
      v13[1] = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * a2);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, a5);
    abort();
  }
  abort();
}

__int64 __fastcall sub_40A5E0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **p_endptr; // r15
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // r12d
  char *v17; // rax
  char *v18; // r8
  __int64 v19; // rax
  char *v20; // rax
  char v21; // al
  int v22; // esi
  unsigned __int64 v23; // rdx
  char *v24; // r8
  unsigned __int64 v25; // kr30_8
  char *v26; // rax
  int v27; // edi
  int v28; // r9d
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( (v11[v10] & 0x2000) != 0 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = __strtoul_internal(nptr, p_endptr, a3, 0);
  if ( *p_endptr == nptr )
  {
    basea = *p_endptr;
    if ( a5 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(a5, (char)v15);
        v18 = basea;
        if ( v17 )
          goto LABEL_20;
      }
    }
    return 4;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( a5 )
  {
    v15 = (unsigned __int8)**p_endptr;
    if ( (_BYTE)v15 )
    {
      baseb = *p_endptr;
      v26 = strchr(a5, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_40:
        *a4 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 0x814400308945LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(a5, 48), v18 = v37, !v20) )
      {
LABEL_27:
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
          switch ( (char)v15 )
          {
            case 'B':
              if ( (unsigned __int64)v13 >> 54 )
                goto LABEL_38;
              v13 <<= 10;
              break;
            case 'E':
              goto LABEL_71;
            case 'G':
            case 'g':
              goto LABEL_77;
            case 'K':
            case 'k':
              goto LABEL_37;
            case 'M':
            case 'm':
              goto LABEL_30;
            case 'P':
              goto LABEL_65;
            case 'T':
            case 't':
              goto LABEL_59;
            case 'Y':
              goto LABEL_53;
            case 'Z':
              goto LABEL_47;
            case 'b':
              goto LABEL_44;
            case 'c':
              break;
            case 'w':
              if ( v13 < 0 )
                goto LABEL_38;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_40;
          }
LABEL_33:
          v24 = &v18[v22];
          *p_endptr = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (char)v15 )
          {
            case 'E':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_71:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 'F':
            case 'H':
            case 'I':
            case 'J':
            case 'L':
            case 'N':
            case 'O':
            case 'Q':
            case 'R':
            case 'S':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case '[':
            case '\\':
            case ']':
            case '^':
            case '_':
            case '`':
            case 'a':
            case 'd':
            case 'e':
            case 'f':
            case 'h':
            case 'i':
            case 'j':
            case 'l':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
              goto LABEL_40;
            case 'G':
            case 'g':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_77:
              if ( is_mul_ok((int)v23, v13)
                && is_mul_ok((int)v23, (int)v23 * v13)
                && is_mul_ok((int)v23, (int)v23 * (int)v23 * v13) )
              {
                v13 *= (int)v23 * (int)v23 * (__int64)(int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              goto LABEL_33;
            case 'K':
            case 'k':
              v22 = 1;
              v23 = 1024LL;
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_33;
              goto LABEL_38;
            case 'M':
            case 'm':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_30:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_38;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 'P':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_65:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 'T':
            case 't':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_59:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 'Y':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_53:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_51;
            case 'Z':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_47:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_51:
              v14 |= v28;
              break;
            case 'b':
              v22 = 1;
LABEL_44:
              if ( (unsigned __int64)v13 >> 55 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 'c':
              v22 = 1;
              goto LABEL_33;
            default:
              goto LABEL_27;
          }
          goto LABEL_33;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *a4 = v13;
  return v14;
}

int __fastcall sub_40AA20(FILE *stream)
{
  int *v1; // rax
  int v2; // r12d
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
  if ( !(unsigned int)sub_40ABE0(stream) )
    return fclose(stream);
  v1 = __errno_location();
  v2 = *v1;
  v3 = v1;
  result = fclose(stream);
  if ( v2 )
  {
    *v3 = v2;
    return -1;
  }
  return result;
}

__int64 __fastcall sub_40AAA0(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // eax
  int *v9; // rax
  int v10; // edi
  int v11; // r12d
  int *v12; // rbp
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+30h] [rbp-38h]

  v16 = a3;
  if ( a2 == 1030 )
  {
    if ( dword_6145D8 < 0 )
    {
      v6 = sub_40AAA0(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_6145D8 == -1 )
      {
LABEL_8:
        v8 = fcntl(v6, 1);
        if ( v8 < 0 || fcntl(v6, 2, v8 | 1u) == -1 )
        {
          v9 = __errno_location();
          v10 = v6;
          v6 = -1;
          v11 = *v9;
          v12 = v9;
          close(v10);
          *v12 = v11;
        }
      }
    }
    else
    {
      v6 = fcntl(a1, 1030, (unsigned int)a3);
      if ( v6 < 0 && *__errno_location() == 22 )
      {
        v6 = sub_40AAA0(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_6145D8 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_6145D8 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_40ABE0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_40AC20(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_40AC20(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_40AC80(__int64 a1, int *a2)
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
  v3 = a2[11];
  v4 = *a2;
  v5 = a2[12];
  v6 = v3;
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
  a2[12] = v4;
  result = (unsigned int)(v4 - v8);
  a2[11] = result + v3;
  return result;
}

__int64 __fastcall sub_40AD60(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        __int64 a9)
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
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-49h]
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v46 = *v9;
  if ( *v9 == 61 || !*v9 )
  {
    v11 = 0LL;
  }
  else
  {
    do
      ++v10;
    while ( *v10 && *v10 != 61 );
    v11 = v10 - v9;
  }
  v12 = a4;
  v13 = 0LL;
  s1 = *a4;
  v14 = *a4;
  if ( !*a4 )
  {
LABEL_24:
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v46), result = 0xFFFFFFFFLL, !v18) )
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
      return 63LL;
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
  v17 = a4;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (a6
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
        v33 = a4;
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
    return 63LL;
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
      return 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= a1 )
      {
        if ( a8 )
        {
          v36 = *a2;
          v37 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v37, v36);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        return 5 * (unsigned int)(*a3 != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( a5 )
          *a5 = v13;
        v23 = v12[2];
        result = *((unsigned int *)v12 + 6);
        if ( v23 )
        {
          *(_DWORD *)v23 = result;
          return 0LL;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_40B380(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
{
  int v8; // r13d
  int v9; // eax
  int v10; // ebp
  const char *v12; // r15
  _BYTE *v13; // rdx
  char v14; // al
  char v15; // al
  int v16; // eax
  __int64 v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // r14d
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
  char v47; // [rsp+1Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+1Ch] [rbp-4Ch]
  int v50; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v51; // [rsp+20h] [rbp-48h]
  _BYTE *v52; // [rsp+28h] [rbp-40h]

  v8 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  v9 = *a7;
  v10 = a1;
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
  if ( ((v14 - 43) & 0xFD) == 0 )
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
        sub_40AC80((__int64)a2, a7);
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
          v28 = (_BYTE *)a2[v27];
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
    v17 = a2[v16];
    if ( !strcmp((const char *)v17, "--") )
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
        sub_40AC80((__int64)a2, a7);
        v18 = a7[11];
      }
      a7[12] = a1;
      *a7 = a1;
      goto LABEL_41;
    }
    if ( *(_BYTE *)v17 == 45 )
    {
      v30 = *(_BYTE *)(v17 + 1);
      if ( v30 )
      {
        if ( a4 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_40AD60(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_40AD60(a1, a2, v12, a4, a5, a6, a7, v8, 4262769LL);
              if ( v21 != -1 )
                return v21;
              v17 = a2[*a7];
            }
          }
        }
        v13 = (_BYTE *)(v17 + 1);
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
  v52 = v13 + 1;
  v47 = *v13;
  v22 = strchr(v12, v21);
  v23 = (__int64)v52;
  if ( !v51[1] )
    ++*a7;
  if ( (unsigned __int8)(v47 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && a4 && v24 == 59 )
    {
      if ( v51[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_40AD60(a1, a2, v12, a4, a5, 0, a7, v8, (__int64)"-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = a2[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *a2;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43);
      }
      a7[2] = v21;
      return 5 * (unsigned int)(*v12 != 58) + 58;
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
            v41 = *a2;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41);
          }
          a7[2] = v21;
          v21 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v37 = v36 + 1;
          v38 = a2[v36];
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
      v39 = *a2;
      v40 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v40, v39);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_40B950(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_6145E0 = dword_61433C;
  dword_6145E4 = dword_614338;
  result = sub_40B380(a1, a2, a3, a4, a5, a6, &dword_6145E0, a7);
  dword_61433C = dword_6145E0;
  nptr = (char *)qword_6145F0;
  dword_614334 = dword_6145E8;
  return result;
}

__int64 __fastcall sub_40B9B0(int a1, __int64 *a2, const char *a3)
{
  return sub_40B950(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40B9D0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40B950(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40B9F0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40B380(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40BA10(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40B950(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40BA30(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40B380(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40BA50(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  const char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( !s )
  {
    a3 = 1LL;
    v6 = "\t" + 1;
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !sub_405590(0) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

__int64 __fastcall sub_40BAD0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  if ( *(_BYTE *)(a1 + 8) )
    v1 = setenv("TZ", (const char *)(a1 + 9), 1);
  else
    v1 = unsetenv("TZ");
  v2 = 0;
  if ( !v1 )
  {
    tzset();
    return 1;
  }
  return v2;
}

void __fastcall sub_40BB20(_QWORD *a1)
{
  _QWORD *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_40BB50(_QWORD *a1)
{
  int *v1; // rbx
  int v2; // r13d
  unsigned int v3; // ebp

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_40BAD0((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_40BB20(a1);
  *v1 = v2;
  return v3;
}

_QWORD *__fastcall sub_40BBA0(const char *src)
{
  size_t v2; // rax
  __int64 v3; // rdi
  size_t v4; // rbp
  char *v5; // rax
  _BYTE *v6; // rbx
  _QWORD *result; // rax

  if ( src )
  {
    v2 = strlen(src);
    v3 = 118LL;
    v4 = v2 + 1;
    if ( v2 + 1 >= 0x76 )
      v3 = v2 + 1;
    v5 = (char *)malloc((v3 + 17) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_WORD *)v5 + 4) = 1;
      memcpy(v5 + 9, src, v4);
      v6[v4 + 9] = 0;
    }
    return v6;
  }
  result = malloc(0x80uLL);
  v6 = result;
  if ( !result )
    return v6;
  *result = 0LL;
  *((_WORD *)result + 4) = 0;
  return result;
}

__int64 __fastcall sub_40BC30(__int64 *a1, unsigned __int64 a2)
{
  const char *v2; // r12
  __int64 *v3; // rbp
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rax
  size_t v8; // r15
  char *v9; // rax
  _QWORD *v10; // rax

  v2 = *(const char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (char *)a1 + 9;
    if ( !*v2 )
    {
      v5 = "\t" + 1;
      goto LABEL_12;
    }
LABEL_5:
    if ( !strcmp(v5, v2) )
      goto LABEL_12;
    while ( 1 )
    {
      if ( !*v5 )
      {
        v6 = (__int64)v3 + 9;
        if ( (char *)v3 + 9 != v5 )
        {
          v8 = strlen(v2) + 1;
          v9 = &v5[-v6];
          if ( ~(unsigned __int64)&v5[-v6] < v8 )
          {
            *__errno_location() = 12;
            return 0LL;
          }
LABEL_19:
          if ( (unsigned __int64)&v9[v8] <= 0x76 )
          {
            memcpy(v5, v2, v8);
            v5[v8] = 0;
            goto LABEL_12;
          }
          v10 = sub_40BBA0(v2);
          *v3 = (__int64)v10;
          if ( !v10 )
            return 0LL;
          *((_BYTE *)v10 + 8) = 0;
          v5 = (char *)v10 + 9;
LABEL_12:
          *(_QWORD *)(a2 + 48) = v5;
          return 1LL;
        }
        if ( !*((_BYTE *)v3 + 8) )
        {
          v8 = strlen(v2) + 1;
          v9 = 0LL;
          goto LABEL_19;
        }
      }
      v5 += strlen(v5) + 1;
      if ( *v5 )
        goto LABEL_5;
      v7 = (__int64 *)*v3;
      if ( !*v3 )
        goto LABEL_5;
      v5 = (char *)v7 + 9;
      v3 = (__int64 *)*v3;
      if ( !strcmp((const char *)v7 + 9, v2) )
        goto LABEL_12;
    }
  }
  return result;
}

__int64 __fastcall sub_40BDB0(__int64 a1)
{
  char *v1; // rax
  const char *v2; // rbp
  _QWORD *v3; // rbx
  int *v5; // rbp
  int v6; // r12d

  v1 = getenv("TZ");
  v2 = v1;
  if ( v1 )
  {
    if ( *(_BYTE *)(a1 + 8) && !strcmp((const char *)(a1 + 9), v1) )
      return 1LL;
  }
  else if ( !*(_BYTE *)(a1 + 8) )
  {
    return 1LL;
  }
  v3 = sub_40BBA0(v2);
  if ( !v3 || (unsigned __int8)sub_40BAD0(a1) )
    return (__int64)v3;
  v5 = __errno_location();
  v6 = *v5;
  if ( v3 != (_QWORD *)1 )
    sub_40BB20(v3);
  *v5 = v6;
  return 0LL;
}

struct tm *__fastcall sub_40BE80(__int64 *a1, const time_t *a2, struct tm *a3)
{
  _QWORD *v4; // r13

  if ( !a1 )
    return gmtime_r(a2, a3);
  v4 = (_QWORD *)sub_40BDB0((__int64)a1);
  if ( v4 )
  {
    if ( localtime_r(a2, a3) && (unsigned __int8)sub_40BC30(a1, (unsigned __int64)a3) )
    {
      if ( v4 == (_QWORD *)1 || (unsigned __int8)sub_40BB50(v4) )
        return a3;
    }
    else if ( v4 != (_QWORD *)1 )
    {
      sub_40BB50(v4);
    }
  }
  return 0LL;
}

time_t __fastcall sub_40BF30(__int64 *a1, _DWORD *a2)
{
  _QWORD *v2; // r12
  int v4; // eax
  time_t timer; // [rsp+8h] [rbp-60h] BYREF
  struct tm tp; // [rsp+10h] [rbp-58h] BYREF

  if ( !a1 )
    return sub_40C050(a2);
  v2 = (_QWORD *)sub_40BDB0((__int64)a1);
  if ( !v2 )
    return -1LL;
  timer = sub_40CD00(a2);
  if ( timer != -1
    || localtime_r(&timer, &tp)
    && ((v4 = a2[8], (v4 == 0) == (tp.tm_isdst == 0)) || v4 < 0 || tp.tm_isdst < 0)
    && !(tp.tm_sec ^ *a2 | tp.tm_min ^ a2[1] | tp.tm_hour ^ a2[2] | tp.tm_mday ^ a2[3] | tp.tm_year ^ a2[5] | tp.tm_mon ^ a2[4]) )
  {
    if ( !(unsigned __int8)sub_40BC30(a1, (unsigned __int64)a2) )
      timer = -1LL;
  }
  if ( v2 == (_QWORD *)1 || (unsigned __int8)sub_40BB50(v2) )
    return timer;
  else
    return -1LL;
}

__int64 __fastcall sub_40C050(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 0;
  return sub_40C8C0(a1, gmtime_r, &unk_614618);
}

int __fastcall sub_40C070(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40AA20(stream);
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

const char *sub_40C0D0()
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
          v1 = "\t" + 1;
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
                v1 = "\t" + 1;
                v2 = v58;
                free(v59);
                sub_40AA20(v60);
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
            sub_40AA20(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = "\t" + 1;
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

__int64 __fastcall sub_40C640(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r10d
  int v11; // r12d

  v10 = (a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (__PAIR64__((a6 >> 2) + 475, a6 & 3) - 1) >> 32;
  return a5
       + 60
       * (a4
        + 60
        * (a3
         + 24
         * ((int)(v10
                - v11
                - (v10 / 25
                 - ((unsigned int)(v10 % 25) >> 31)
                 - (v11 / 25
                  - ((unsigned int)(v11 % 25) >> 31)))
                + ((int)(v10 / 25 - ((unsigned int)(v10 % 25) >> 31)) >> 2)
                - ((int)(v11 / 25 - ((unsigned int)(v11 % 25) >> 31)) >> 2))
          + 365 * (a1 - a6)
          + a2
          - a7)
         - a8)
        - a9)
       - a10;
}

unsigned __int64 __fastcall sub_40C760(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int *a7)
{
  __int64 v8; // rax
  bool v9; // of
  unsigned __int64 result; // rax

  if ( !a7
    || (v8 = sub_40C640(a1, a2, a3, a4, a5, a7[5], a7[7], a7[2], a7[1], *a7),
        v9 = __OFADD__(a6, v8),
        result = a6 + v8,
        v9) )
  {
    if ( a6 < 0 )
    {
      if ( a6 >= (__int64)0x8000000000000002LL )
        return 0x8000000000000000LL;
      else
        return a6 + 1;
    }
    else
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      if ( a6 > 0x7FFFFFFFFFFFFFFDLL )
        return a6 - 1;
    }
  }
  return result;
}

__int64 __fastcall sub_40C800(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[0] = *a2;
  result = a1(v9, a3);
  if ( !result )
  {
    v5 = *a2;
    v6 = 0LL;
    if ( *a2 )
    {
      while ( 1 )
      {
        v7 = (v6 >> 1) + (v5 >> 1);
        v8 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        if ( v6 != v8 && v5 != v8 )
          break;
        v9[0] = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        result = a1(v9, a3);
        if ( !result )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !result && v6 )
      {
        v9[0] = v6;
        return a1(v9, a3);
      }
    }
  }
  return result;
}

unsigned __int64 __fastcall sub_40C8C0(int *a1, __int64 (__fastcall *a2)(__int64 *, __int64), _QWORD *a3)
{
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edi
  _BOOL4 v7; // edx
  __int64 v8; // rbx
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  _BOOL4 v14; // r12d
  __int64 v15; // r14
  int *v16; // rax
  __int64 v17; // r15
  unsigned __int64 result; // rax
  bool v19; // dl
  __m128i *v20; // r14
  __int32 v21; // esi
  __int64 v22; // rdx
  bool v23; // of
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rdx
  int i; // r13d
  int v29; // r12d
  int v30; // r15d
  int v31; // [rsp+Ch] [rbp-10Ch]
  int v33; // [rsp+18h] [rbp-100h]
  int v34; // [rsp+1Ch] [rbp-FCh]
  int v35; // [rsp+28h] [rbp-F0h]
  __int64 v37; // [rsp+38h] [rbp-E0h]
  int v38; // [rsp+40h] [rbp-D8h]
  int v39; // [rsp+44h] [rbp-D4h]
  int *v40; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-C0h] BYREF
  __m128i v43; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v44; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v45; // [rsp+80h] [rbp-98h] BYREF
  __int64 v46; // [rsp+90h] [rbp-88h]
  __int64 v47[4]; // [rsp+A0h] [rbp-78h] BYREF
  int v48; // [rsp+C0h] [rbp-58h]

  v4 = a1[3];
  v38 = *a1;
  v31 = a1[1];
  v5 = a1[2];
  v6 = a1[4];
  v33 = v5;
  v35 = a1[8];
  v7 = 0;
  v8 = a1[5] + (__int64)(int)(v6 / 12 - ((unsigned int)(v6 % 12) >> 31));
  if ( (v8 & 3) == 0 )
  {
    v7 = 1;
    if ( v8 == 100 * (v8 / 100) )
      v7 = ((v8 / 100) & 3) == 1;
  }
  v9 = 59;
  v10 = 6;
  v11 = (unsigned __int16)word_411100[13 * v7 + (((v6 % 12) >> 31) & 0xC) + v6 % 12] - 1 + v4;
  if ( v38 <= 59 )
    v9 = v38;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v34 = v12;
  v39 = -(int)*a3;
  v13 = sub_40C640(v8, v11, v33, v31, v12, 70, 0, 0, 0, v39);
  v37 = v13;
  v41 = v13;
  v40 = a1;
  v14 = 0;
  v15 = v13;
  while ( 1 )
  {
    v16 = (int *)sub_40C800(a2, (__int64 *)&v41, (__int64)&v43);
    v17 = v41;
    result = sub_40C760(v8, v11, v33, v31, v34, v41, v16);
    if ( v17 == result )
      break;
    if ( v17 == v13 && v17 != v15 )
    {
      if ( v45.m128i_i32[0] < 0 )
        goto LABEL_17;
      v19 = v45.m128i_i32[0] != 0;
      if ( v35 < 0 )
      {
        if ( (unsigned __int8)v19 >= v14 )
        {
LABEL_17:
          v20 = (__m128i *)v40;
          result = v17;
          goto LABEL_18;
        }
      }
      else if ( (v35 != 0) != v19 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v10 )
      return -1LL;
    v41 = result;
    v13 = v15;
    v15 = v17;
    v14 = v45.m128i_i32[0] != 0;
  }
  v20 = (__m128i *)v40;
  if ( (v35 == 0) != (v45.m128i_i32[0] == 0) && v35 >= 0 && v45.m128i_i32[0] >= 0 )
  {
    for ( i = 601200; i != 269337600; i += 601200 )
    {
      v29 = 2;
      v30 = -i;
      v42 = result + -i;
      if ( !__OFADD__(result, -i) )
      {
LABEL_34:
        sub_40C800(a2, &v42, (__int64)v47);
        if ( (v35 == 0) == (v48 == 0) || v48 < 0 )
        {
          v41 = sub_40C760(v8, v11, v33, v31, v34, v42, (int *)v47);
          sub_40C800(a2, (__int64 *)&v41, (__int64)&v43);
          result = v41;
          break;
        }
        result = v41;
      }
      while ( 1 )
      {
        v30 += 2 * i;
        if ( v29 == 1 )
          break;
        v29 = 1;
        v42 = result + v30;
        if ( !__OFADD__(result, v30) )
          goto LABEL_34;
      }
    }
  }
LABEL_18:
  v21 = v43.m128i_i32[0];
  *a3 = result - (v37 + v39);
  if ( v21 == v38 )
    goto LABEL_22;
  v22 = ((v38 <= 0) & (unsigned __int8)(v21 == 60)) - (__int64)v34 + v38;
  v23 = __OFADD__(v22, result);
  v24 = v22 + result;
  v41 = v24;
  if ( !v23 )
  {
    v47[0] = v24;
    if ( a2(v47, (__int64)&v43) )
    {
      result = v41;
LABEL_22:
      v25 = _mm_load_si128(&v44);
      v26 = _mm_load_si128(&v45);
      v27 = v46;
      *v20 = _mm_load_si128(&v43);
      v20[1] = v25;
      v20[2] = v26;
      v20[3].m128i_i64[0] = v27;
      return result;
    }
  }
  return -1LL;
}

unsigned __int64 __fastcall sub_40CD00(int *a1)
{
  tzset();
  return sub_40C8C0(a1, (__int64 (__fastcall *)(__int64 *, __int64))localtime_r, &qword_614628);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40CD90(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_614268 )
    v1 = (void *)qword_614268;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40CDA8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_613E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
