__int64 __fastcall main(int a1, char **a2, char **a3)
{
  __int64 v3; // r15
  char **v4; // r12
  int v5; // ebp
  char *v6; // rdi
  __int64 v7; // rbx
  _BYTE *v8; // r13
  unsigned int v9; // er14
  unsigned int v10; // eax
  char v11; // dl
  __int64 v12; // rdx
  void *v13; // rdi
  char *v14; // rax
  int v15; // eax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  __int64 v20; // rdx
  char *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  char *v24; // rax
  char v25; // di
  char **v26; // rax
  int v27; // esi
  char *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rsi
  __int64 result; // rax
  char *v33; // rbx
  int *v34; // rax
  const char *v35; // rax
  __int64 v36; // rbx
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char v41; // [rsp+8h] [rbp-50h]
  char v42; // [rsp+Dh] [rbp-4Bh]
  char v43; // [rsp+Eh] [rbp-4Ah]
  char v44; // [rsp+Fh] [rbp-49h]
  unsigned int v45; // [rsp+14h] [rbp-44h]
  unsigned __int64 v46; // [rsp+18h] [rbp-40h]

  v3 = 0LL;
  v4 = a2;
  v5 = a1;
  v6 = *a2;
  v46 = 0LL;
  sub_407110(v6);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40CD90(sub_4053D0);
  if ( v5 > 1 )
    v3 = sub_409300(8LL * (v5 - 1));
  v44 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v43 = 0;
  v42 = 0;
  while ( 1 )
  {
    v45 = -1;
    v10 = sub_40B9D0((unsigned int)v5, a2, "-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:", &off_40EBE0, &v45);
    v11 = v10;
    if ( v10 == -1 )
      break;
    if ( v10 - 48 <= 9 )
    {
      v22 = v7 + 1;
      if ( v7 + 1 >= v46 )
      {
        v41 = v10;
        v23 = sub_409460(v8, &v46);
        v11 = v41;
        v22 = v7 + 1;
        v8 = (_BYTE *)v23;
      }
      v8[v7] = v11;
      v7 = v22;
      v8[v22] = 0;
    }
    else
    {
      v12 = v10 + 131;
      switch ( (_DWORD)v12 )
      {
        case 0:
          sub_4091C0((char)stdout);
          exit(0);
          return result;
        case 1:
          sub_404DE0(0);
          return result;
        case 0x84:
          v19 = nptr;
          if ( qword_614418 || *nptr != 43 )
            goto LABEL_36;
          if ( (unsigned __int8)sub_402820(4294967294LL, 43LL, nptr + 1) )
            goto LABEL_9;
          v19 = nptr;
LABEL_36:
          v20 = v9;
          v7 = 0LL;
          ++v9;
          *(_QWORD *)(v3 + 8 * v20) = v19;
          continue;
        case 0xC7:
          v7 = 0LL;
          qword_6143C0 = (__int64)nptr;
          continue;
        case 0xC9:
        case 0xE9:
          byte_614447 = 1;
          v7 = 0LL;
          continue;
        case 0xCD:
          byte_61443C = 1;
          v7 = 0LL;
          continue;
        case 0xD1:
          v7 = 0LL;
          byte_614280 = 0;
          v18 = dcgettext(0LL, "'-N NUMBER' invalid starting line number", 5);
          dword_61427C = sub_409680(nptr, -2147483648LL, 0x7FFFFFFFLL, "", v18, 0LL);
          continue;
        case 0xD6:
          byte_6143E0 = 1;
          off_614270 = "";
          dword_6143DC = 0;
          v44 = 0;
          if ( !nptr )
            goto LABEL_9;
          sub_402920();
          v7 = 0LL;
          continue;
        case 0xD7:
          byte_6142B5 = 0;
          v7 = 0LL;
          byte_61444A = 0;
          continue;
        case 0xDA:
          v7 = 0LL;
          byte_61443D = 1;
          v21 = dcgettext(0LL, "'-W PAGE_WIDTH' invalid number of characters", 5);
          v43 = 0;
          dword_6142AC = sub_409680(nptr, 1LL, 0x7FFFFFFFLL, "", v21, 0LL);
          continue;
        case 0xE4:
          byte_614445 = 1;
          v7 = 0LL;
          byte_6142B4 = 0;
          continue;
        case 0xE5:
          byte_614444 = 1;
          v7 = 0LL;
          continue;
        case 0xE6:
          byte_6143E9 = 1;
          v7 = 0LL;
          continue;
        case 0xE7:
          byte_6143E8 = 1;
          v7 = 0LL;
          continue;
        case 0xE8:
          if ( nptr )
            sub_4052E0(nptr);
          byte_614435 = 1;
          v7 = 0LL;
          continue;
        case 0xEB:
          v7 = 0LL;
          qword_6143C8 = (__int64)nptr;
          continue;
        case 0xEC:
          if ( nptr )
            sub_4052E0(nptr);
          byte_614434 = 1;
          v7 = 0LL;
          continue;
        case 0xEF:
          v7 = 0LL;
          v17 = dcgettext(0LL, "'-l PAGE_LENGTH' invalid number of lines", 5);
          dword_6142B0 = sub_409680(nptr, 1LL, 0x7FFFFFFFLL, "", v17, 0LL);
          continue;
        case 0xF0:
          byte_61444F = 1;
          v7 = 0LL;
          byte_6142B4 = 0;
          continue;
        case 0xF1:
          byte_6143FC = 1;
          if ( !nptr )
            goto LABEL_9;
          v7 = 0LL;
          sub_4052E0(nptr);
          continue;
        case 0xF2:
          v7 = 0LL;
          v16 = dcgettext(0LL, "'-o MARGIN' invalid line offset", 5);
          dword_61442C = sub_409680(nptr, 0LL, 0x7FFFFFFFLL, "", v16, 0LL);
          continue;
        case 0xF5:
          byte_6143E1 = 1;
          v7 = 0LL;
          continue;
        case 0xF6:
          v42 = byte_6143E0;
          v44 = byte_6143E0;
          if ( byte_6143E0 )
            goto LABEL_9;
          if ( nptr )
          {
            sub_402920();
            v7 = 0LL;
            v44 = 1;
          }
          else
          {
            v44 = 1;
            v7 = 0LL;
          }
          v42 = 1;
          continue;
        case 0xF7:
          byte_6142B5 = 0;
          v7 = 0LL;
          byte_61444A = 1;
          continue;
        case 0xF9:
          byte_6143EA = 1;
          v7 = 0LL;
          continue;
        case 0xFA:
          v14 = dcgettext(0LL, "'-w PAGE_WIDTH' invalid number of characters", 5);
          v15 = sub_409680(nptr, 1LL, 0x7FFFFFFFLL, "", v14, 0LL);
          v42 = byte_61443D;
          v43 = byte_61443D;
          if ( byte_61443D )
            goto LABEL_9;
          dword_6142AC = v15;
          v7 = 0LL;
          v43 = 1;
          v42 = 1;
          continue;
        case 0x103:
          v7 = 0LL;
          sub_402950(nptr, a2, v12);
          v13 = v8;
          v8 = 0LL;
          free(v13);
          v46 = 0LL;
          continue;
        case 0x104:
          if ( !nptr )
            goto LABEL_98;
          if ( !(unsigned __int8)sub_402820(v45, 0LL, nptr) )
          {
            v36 = sub_408D30(nptr);
            v37 = dcgettext(0LL, "invalid page range %s", 5);
            error(1, 0, v37, v36);
LABEL_98:
            v38 = dcgettext(0LL, "'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument", 5);
            error(1, 0, v38);
LABEL_99:
            v39 = dcgettext(0LL, "cannot specify number of columns when printing in parallel", 5);
            error(1, 0, v39);
LABEL_100:
            v40 = dcgettext(0LL, "cannot specify both printing across and printing in parallel", 5);
            error(1, 0, v40);
            start();
          }
LABEL_9:
          v7 = 0LL;
          break;
        default:
          sub_404DE0(1);
          return result;
      }
    }
  }
  if ( v8 )
  {
    sub_402950(v8, a2, v10);
    free(v8);
  }
  if ( !qword_6143C0 )
    goto LABEL_89;
  while ( 1 )
  {
    v24 = getenv("TZ");
    qword_6143B8 = sub_40BBA0(v24);
    if ( !qword_614418 )
      qword_614418 = 1LL;
    v25 = byte_61444F;
    if ( byte_61444F )
    {
      if ( byte_61444B )
        goto LABEL_99;
      if ( byte_614445 )
        goto LABEL_100;
    }
    if ( v42 )
    {
      if ( v43 )
      {
        if ( byte_61444F || byte_61444B )
        {
          byte_61443D = 1;
          if ( !v44 )
            goto LABEL_67;
LABEL_84:
          byte_6143E0 = 1;
          goto LABEL_67;
        }
        byte_61443C = 1;
      }
      else if ( byte_6143E0 != 1 && v44 && (byte_61444F || byte_61444B) )
      {
        if ( byte_61443D )
          goto LABEL_84;
        byte_61443C = 1;
        if ( dword_6143DC > 0 )
          goto LABEL_84;
      }
    }
LABEL_67:
    if ( v5 > dword_61433C )
    {
      v26 = &v4[dword_61433C];
      v27 = v9 + v5 - dword_61433C;
      do
      {
        v28 = *v26;
        v29 = v9++;
        ++v26;
        *(_QWORD *)(v3 + 8 * v29) = v28;
      }
      while ( v9 != v27 );
      dword_61433C = v5;
    }
    if ( v9 )
    {
      if ( v25 )
      {
        sub_403E40(v9, v3);
      }
      else
      {
        v30 = v3 + 8LL * (v9 - 1) + 8;
        do
        {
          v31 = v3;
          v3 += 8LL;
          sub_403E40(1LL, v31);
        }
        while ( v30 != v3 );
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
    v33 = dcgettext(0LL, "standard input", 5);
    v34 = __errno_location();
    error(1, *v34, v33);
LABEL_89:
    if ( !getenv("POSIXLY_CORRECT") || (unsigned __int8)sub_405590(2LL) )
      v35 = "%Y-%m-%d %H:%M";
    else
      v35 = "%b %e %H:%M %Y";
    qword_6143C0 = (__int64)v35;
  }
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

__int64 *sub_4025FB()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
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
      if ( v1[4] <= 1u || byte_6142B4 && v1[11] > 0 && v1[12] > 0 )
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
  char *v3; // rbx
  unsigned int v4; // eax
  char v5; // al
  char *v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]

  v3 = a3;
  v4 = sub_40A5E0(a3);
  if ( v4 & 0xFFFFFFFD )
    goto LABEL_14;
  if ( v7 == v3 || !v8 )
    return 0LL;
  v5 = *v7;
  if ( *v7 != 58 )
    goto LABEL_5;
  v4 = sub_40A5E0(v7 + 1);
  if ( v4 )
LABEL_14:
    sub_40A550(v4, a1, (unsigned int)a2, &off_40EBE0, v3);
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
    result = sub_402950(a1, a2, v3);
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
  __int64 v1; // rbx
  FILE *v2; // rdi
  char *v3; // rax
  char *v4; // rdx
  int v5; // ecx
  __int64 v6; // rbx
  int *v7; // rax
  __int64 v8; // rbx
  int *v9; // rax

  if ( *(_DWORD *)(a1 + 16) == 3 )
    return;
  v1 = a1;
  v2 = *(FILE **)a1;
  if ( v2->_flags & 0x20 )
  {
    v8 = sub_408BB0(0LL, 3LL, *(_QWORD *)(v1 + 8));
    v9 = __errno_location();
    error(1, *v9, "%s", v8);
    sub_402AB0();
    return;
  }
  if ( fileno(v2) && (unsigned int)sub_40AA20(*(FILE **)v1) )
  {
    v6 = sub_408BB0(0LL, 3LL, *(_QWORD *)(v1 + 8));
    v7 = __errno_location();
    error(1, *v7, "%s", v6);
    return;
  }
  if ( byte_61444F )
  {
    *(_DWORD *)(v1 + 16) = 3;
    *(_DWORD *)(v1 + 48) = 0;
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
  int v2; // er12
  unsigned int v3; // er14
  __int64 v4; // r13
  void *v5; // rbp
  char *v6; // rax
  int v7; // ebx
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rax
  timespec v11; // [rsp+0h] [rbp-128h]
  char v12; // [rsp+10h] [rbp-118h]
  char v13; // [rsp+30h] [rbp-F8h]
  struct stat stat_buf; // [rsp+70h] [rbp-B8h]

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
      v11 = (timespec)_mm_load_si128((const __m128i *)&tp);
      v3 = v11.tv_nsec;
      goto LABEL_5;
    }
LABEL_10:
    sub_405550(&tp);
    goto LABEL_4;
  }
  v3 = stat_buf.st_mtim.tv_nsec;
  v11 = stat_buf.st_mtim;
LABEL_5:
  if ( sub_40BE80(qword_6143B8, &v11, &v13) )
  {
    v4 = sub_4070F0(0LL, -1LL, qword_6143C0, &v13, qword_6143B8, v3) + 1;
    v5 = (void *)sub_409300(v4);
    sub_4070F0(v5, v4, qword_6143C0, &v13, qword_6143B8, v3);
  }
  else
  {
    v5 = (void *)sub_409300(33LL);
    v10 = sub_4055F0(v11.tv_sec, &v12);
    __sprintf_chk(v5, 1LL, 33LL, "%s.%09d", v10, v3);
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
  v8 = v7 - (unsigned __int64)sub_405850((char *)v5);
  result = sub_405850(qword_6143A8);
  dword_6143A0 = v8 - result;
  return result;
}

void __fastcall sub_402CA0(int a1)
{
  int v1; // ebx
  char *v2; // rax

  v1 = dword_614428;
  if ( byte_614434 )
  {
    dword_614430 = a1 - dword_614428;
  }
  else
  {
    while ( a1 >= ++v1 )
    {
      v2 = stdout->_IO_write_ptr;
      if ( v2 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 32);
      }
      else
      {
        stdout->_IO_write_ptr = v2 + 1;
        *v2 = 32;
      }
    }
    dword_614428 = a1;
  }
}

int sub_402D10()
{
  int v0; // ebp
  int v1; // er12
  char *v2; // rax
  int v3; // ebx
  char v4; // si
  char *v5; // rax

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
    v5 = stdout->_IO_write_ptr;
    if ( v5 >= stdout->_IO_write_end )
    {
      __overflow(stdout, (unsigned __int8)byte_6142A0);
      v0 = v3;
    }
    else
    {
      v0 += dword_61429C - v0 % dword_61429C;
      stdout->_IO_write_ptr = v5 + 1;
      *v5 = v4;
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
  int v4; // er14
  int v5; // esi
  char *v6; // rax
  int v7; // edx

  result = dword_614430;
  if ( dword_6143D8 <= 0 )
  {
    if ( dword_614430 > 0 )
      result = sub_402D10();
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
          v6 = stdout->_IO_write_ptr;
          if ( v6 >= stdout->_IO_write_end )
          {
            __overflow(stdout, v5);
          }
          else
          {
            stdout->_IO_write_ptr = v6 + 1;
            *v6 = v5;
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
  __int64 v2; // r9
  __int64 result; // rax
  char *v4; // rax
  __int64 v5; // [rsp+0h] [rbp-138h]

  dword_614428 = 0;
  sub_402CA0(dword_61442C);
  sub_402D10();
  v0 = qword_614408;
  if ( qword_614408 )
  {
    v1 = dcgettext(0LL, "Page %lu", 5);
    __sprintf_chk(&v5, 1LL, 276LL, v1, v0, v2);
    sub_405850((char *)&v5);
    result = __printf_chk(1LL, "\n\n%*s%s%*s%s%*s%s\n\n\n", (unsigned int)dword_61442C, "", qword_6143B0);
    byte_614448 = 0;
    dword_614428 = 0;
  }
  else
  {
    v4 = dcgettext(0LL, "page number overflow", 5);
    error(1, 0, v4);
    result = sub_402FE0();
  }
  return result;
}

__int64 __fastcall sub_402FE0(unsigned __int8 a1)
{
  unsigned __int8 *v1; // rbx
  __int64 v2; // r9
  int v3; // eax
  int v4; // esi
  __int64 result; // rax
  signed int v6; // edx
  int v7; // ecx
  unsigned int v8; // ecx
  char *v9; // rdx
  int v10; // eax
  unsigned __int8 v11; // [rsp+Ch] [rbp-1Ch]
  unsigned __int8 v12; // [rsp+Dh] [rbp-1Bh]
  unsigned __int8 v13; // [rsp+Eh] [rbp-1Ah]

  v1 = (unsigned __int8 *)qword_614398;
  if ( byte_6142A8 == a1 )
  {
    v4 = dword_614424;
    v8 = dword_6142A4 - dword_614424 % dword_6142A4;
    v6 = dword_6142A4 - dword_614424 % dword_6142A4;
    if ( !byte_614435 )
    {
LABEL_9:
      *(_BYTE *)qword_614398 = a1;
      result = 1LL;
      goto LABEL_10;
    }
    if ( !v8 )
    {
      result = 0LL;
      goto LABEL_12;
    }
    result = v8;
  }
  else
  {
    if ( a1 != 9 )
    {
      if ( (*__ctype_b_loc())[a1] & 0x4000 )
      {
        v10 = dword_614424;
        *v1 = a1;
        v4 = v10 + 1;
        result = 1LL;
        goto LABEL_12;
      }
      if ( byte_6143EA )
        goto LABEL_25;
      if ( byte_6143E9 )
      {
        if ( (a1 & 0x80u) == 0 )
        {
          v3 = dword_614424;
          *v1 = 94;
          v4 = v3 + 2;
          v1[1] = a1 ^ 0x40;
          result = 2LL;
LABEL_12:
          dword_614424 = v4;
          return result;
        }
LABEL_25:
        *v1 = 92;
        __sprintf_chk(&v11, 1LL, 4LL, "%03o", a1, v2);
        v1[1] = v11;
        v1[2] = v12;
        v1[3] = v13;
        v4 = dword_614424 + 4;
        result = 4LL;
        goto LABEL_12;
      }
      v4 = dword_614424;
      if ( a1 != 8 )
      {
        *v1 = a1;
        result = 1LL;
        goto LABEL_12;
      }
      *v1 = 8;
      if ( v4 )
      {
        v7 = 1;
        v6 = -1;
        result = 1LL;
LABEL_15:
        if ( v7 >= v4 )
        {
          dword_614424 = 0;
          return result;
        }
LABEL_11:
        v4 += v6;
        goto LABEL_12;
      }
      goto LABEL_24;
    }
    v4 = dword_614424;
    result = ((unsigned int)(dword_614424 >> 31) >> 29)
           - (((_BYTE)dword_614424 + ((unsigned int)(dword_614424 >> 31) >> 29)) & 7)
           + 8;
    v6 = ((unsigned int)(dword_614424 >> 31) >> 29)
       - (((_BYTE)dword_614424 + ((unsigned int)(dword_614424 >> 31) >> 29)) & 7)
       + 8;
    if ( !byte_614435 )
      goto LABEL_9;
  }
  v9 = (char *)qword_614398 + (unsigned int)(result - 1) + 1;
  do
    *(++v1 - 1) = 32;
  while ( v1 != (unsigned __int8 *)v9 );
  v6 = result;
LABEL_10:
  if ( v6 >= 0 )
    goto LABEL_11;
  if ( v4 )
  {
    v7 = -v6;
    goto LABEL_15;
  }
LABEL_24:
  dword_614424 = 0;
  return 0LL;
}

int __fastcall sub_4031E0(unsigned __int8 a1)
{
  char *v1; // rax

  if ( byte_614434 )
  {
    if ( a1 == 32 )
    {
      LODWORD(v1) = ++dword_614430;
      return (int)v1;
    }
    if ( dword_614430 > 0 )
      sub_402D10();
    if ( (*__ctype_b_loc())[a1] & 0x4000 )
    {
      ++dword_614428;
    }
    else if ( a1 == 8 )
    {
      --dword_614428;
    }
  }
  v1 = stdout->_IO_write_ptr;
  if ( v1 >= stdout->_IO_write_end )
  {
    LODWORD(v1) = __overflow(stdout, a1);
  }
  else
  {
    stdout->_IO_write_ptr = v1 + 1;
    *v1 = a1;
  }
  return (int)v1;
}

__int64 __fastcall sub_403280(_DWORD *a1)
{
  __int64 v1; // r12
  char *v2; // rbp
  char *v3; // rbx
  char *v4; // rbp
  int v5; // eax
  int v6; // edx
  __int64 result; // rax
  _DWORD *v8; // rcx
  char *v9; // rax
  char *v10; // rdx

  v1 = (int)a1[10];
  v2 = (char *)qword_614470;
  byte_6143D0 = 1;
  a1[10] = v1 + 1;
  v3 = &v2[*((int *)qword_614458 + v1)];
  v4 = &v2[*((int *)qword_614458 + v1 + 1)];
  if ( byte_614448 )
    sub_402EE0();
  if ( a1[4] == 1 )
  {
    v8 = qword_614478;
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
    sub_4031E0(*(++v3 - 1));
  if ( dword_614430 )
    return 1LL;
  v5 = a1[13];
  v6 = v5 + *((_DWORD *)qword_614450 + v1);
  dword_614428 = v5 + *((_DWORD *)qword_614450 + v1);
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
      v3 = 2 - ((unsigned __int8)byte_6142B4 >= 1u);
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
  __int64 v2; // r13
  _IO_FILE *v3; // rbx
  unsigned __int8 *v4; // rax
  int v5; // eax
  char v6; // bp
  char *v7; // rax
  char *v8; // rax
  char v9; // al
  char *v10; // rax
  char *v11; // rdx
  char *v12; // rax
  int v13; // edi
  char *v14; // rax

  v2 = a1;
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
        v12 = v3->_IO_read_ptr;
        if ( v12 >= v3->_IO_read_end )
        {
          v13 = __uflow(v3);
        }
        else
        {
          v3->_IO_read_ptr = v12 + 1;
          v13 = (unsigned __int8)*v12;
        }
        if ( v13 != 10 )
          ungetc(v13, v3);
        sub_403410((_DWORD *)(v2 + 16), (_DWORD *)(v2 + 48));
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

  v1 = __sprintf_chk(ptr, 1LL, -1LL, "%*d", (unsigned int)dword_614278, (unsigned int)dword_614400);
  ++dword_614400;
  v2 = (char *)ptr + v1 - dword_614278;
  v3 = (__int64)&v2[dword_614278 - 1 + 1];
  if ( dword_614278 > 0 )
  {
    do
      (*a1)((unsigned int)*(++v2 - 1));
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
  __int64 v1; // rbx
  int v2; // edi

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 52);
  dword_6143D4 = v2;
  if ( v2 > dword_6143DC )
  {
    sub_402CA0(v2 - dword_6143DC);
    dword_6143D4 = 0;
    if ( !byte_6143E0 )
    {
LABEL_3:
      if ( !*(_BYTE *)(v1 + 56) )
        return;
LABEL_7:
      sub_4036C0((void (__fastcall **)(_QWORD))(v1 + 32));
      return;
    }
  }
  else if ( !byte_6143E0 )
  {
    goto LABEL_3;
  }
  sub_402DD0();
  if ( *(_BYTE *)(v1 + 56) )
    goto LABEL_7;
}

__int64 __usercall sub_403840@<rax>(_IO_FILE **a1@<rdi>, int a2@<r12d>)
{
  _IO_FILE **v2; // rbp
  _IO_FILE *v3; // rdi
  char *v4; // rax
  int v5; // ebx
  int v6; // er13
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
  char *v17; // rax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  char *v21; // rbx
  char *v22; // r12
  _IO_FILE *v23; // rdi
  char *v24; // rax
  unsigned __int64 v25; // rdx
  _IO_FILE *v26; // rdi
  char *v27; // rax
  int v28; // edi
  FILE *v29; // rdi
  char *v30; // rax
  int v31; // edi

  v2 = a1;
  v3 = *a1;
  v4 = v3->_IO_read_ptr;
  if ( v4 >= v3->_IO_read_end )
  {
    v5 = __uflow(v3);
  }
  else
  {
    v3->_IO_read_ptr = v4 + 1;
    v5 = (unsigned __int8)*v4;
  }
  v6 = dword_614424;
  if ( v5 == 12 )
  {
    v23 = *v2;
    v24 = (*v2)->_IO_read_ptr;
    v25 = (unsigned __int64)(*v2)->_IO_read_end;
    if ( !*((_BYTE *)v2 + 57) )
      goto LABEL_50;
    if ( (unsigned __int64)v24 >= v25 )
    {
      v5 = __uflow(v23);
    }
    else
    {
      v23->_IO_read_ptr = v24 + 1;
      v5 = (unsigned __int8)*v24;
    }
    if ( v5 == 10 )
    {
      v26 = *v2;
      v27 = (*v2)->_IO_read_ptr;
      if ( v27 >= (*v2)->_IO_read_end )
      {
        v5 = __uflow(v26);
      }
      else
      {
        v26->_IO_read_ptr = v27 + 1;
        v5 = (unsigned __int8)*v27;
      }
    }
  }
  *((_BYTE *)v2 + 57) = 0;
  switch ( v5 )
  {
    case 10:
      goto LABEL_8;
    case 12:
      v23 = *v2;
      v24 = (*v2)->_IO_read_ptr;
      v25 = (unsigned __int64)(*v2)->_IO_read_end;
LABEL_50:
      if ( v25 <= (unsigned __int64)v24 )
      {
        v28 = __uflow(v23);
      }
      else
      {
        v23->_IO_read_ptr = v24 + 1;
        v28 = (unsigned __int8)*v24;
      }
      if ( v28 == 10 )
      {
        byte_61444C = 1;
        if ( !byte_614448 )
          goto LABEL_55;
      }
      else
      {
        ungetc(v28, *v2);
        byte_61444C = 1;
        if ( !byte_614448 )
          goto LABEL_55;
      }
      if ( !byte_6142B4 )
      {
        byte_6143D0 = 1;
        sub_402EE0();
LABEL_57:
        sub_403410((_DWORD *)v2 + 4, (_DWORD *)v2 + 12);
        return 1LL;
      }
LABEL_55:
      if ( byte_61444A )
        byte_614449 = 1;
      goto LABEL_57;
    case -1:
LABEL_22:
      sub_4029A0((__int64)v2);
      return 1LL;
  }
  a2 = sub_402FE0(v5);
LABEL_8:
  if ( byte_61443D && dword_614424 > dword_614438 )
  {
    dword_614424 = v6;
    result = 0LL;
  }
  else
  {
    if ( v2[4] != (_IO_FILE *)sub_402790 )
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
        v11 = *((_DWORD *)v2 + 13);
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
    if ( *((_BYTE *)v2 + 56) )
      sub_4036C0((void (__fastcall **)(_QWORD))v2 + 4);
    byte_61444D = 0;
    result = 1LL;
    if ( v5 != 10 )
    {
      v14 = (char *)qword_614398;
      v15 = (char *)qword_614398 + (unsigned int)(a2 - 1) + 1;
      if ( a2 )
      {
        do
          ((void (__fastcall *)(_QWORD))v2[4])((unsigned int)*(++v14 - 1));
        while ( v15 != v14 );
      }
      while ( 1 )
      {
        v16 = *v2;
        v17 = (*v2)->_IO_read_ptr;
        if ( v17 >= (*v2)->_IO_read_end )
        {
          v18 = __uflow(v16);
        }
        else
        {
          v16->_IO_read_ptr = v17 + 1;
          v18 = (unsigned __int8)*v17;
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
            ((void (__fastcall *)(_QWORD))v2[4])((unsigned int)*(++v21 - 1));
          while ( v21 != v22 );
        }
      }
      v29 = *v2;
      v30 = (*v2)->_IO_read_ptr;
      if ( v30 >= (*v2)->_IO_read_end )
      {
        v31 = __uflow(v29);
      }
      else
      {
        v29->_IO_read_ptr = v30 + 1;
        v31 = (unsigned __int8)*v30;
      }
      if ( v31 != 10 )
        ungetc(v31, *v2);
      goto LABEL_55;
    }
  }
  return result;
}

__int64 __fastcall sub_403C80(const char *a1, __int64 a2)
{
  const char *v2; // rbp
  char *v3; // rax
  FILE *v4; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rbp
  int *v8; // rax

  v2 = a1;
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
  v7 = sub_408BB0(v4, 3LL, v2);
  v8 = __errno_location();
  error(0, *v8, "%s", v7);
  return v6;
}

void __fastcall sub_403D80(FILE **a1)
{
  FILE **v1; // rbp
  FILE *v2; // rbx
  int v3; // eax
  char *v4; // rax
  char *v5; // rax
  int v6; // edi

  v1 = a1;
  v2 = *a1;
  do
  {
    v4 = v2->_IO_read_ptr;
    if ( v4 < v2->_IO_read_end )
    {
      v2->_IO_read_ptr = v4 + 1;
      v3 = (unsigned __int8)*v4;
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
          sub_403410((_DWORD *)v1 + 4, (_DWORD *)v1 + 12);
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
  sub_4029A0((__int64)a1);
}

__int64 __fastcall sub_403E40(int a1, const char **a2)
{
  int v2; // er12
  const char **v3; // rbx
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
  __int64 v14; // rdi
  void *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 result; // rax
  FILE *v19; // rcx
  __int64 v20; // r13
  char v21; // bp
  int v22; // er8
  int v23; // er12
  char *v24; // r10
  int v25; // er9
  char v26; // r11
  int v27; // esi
  char *v28; // rdx
  int v29; // ebx
  char v30; // al
  unsigned int v31; // edi
  _QWORD *v32; // rax
  int v33; // edx
  int v34; // er14
  int v35; // er13
  char *v36; // rbx
  int v37; // ecx
  int v38; // edx
  int v39; // er9
  char *v40; // r10
  int v41; // ebp
  char v42; // r13
  FILE **v43; // rbx
  int v44; // er14
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  char *v49; // rax
  char *v50; // rax
  __int64 v51; // rax
  char *v52; // rax
  char v53; // r8
  char *v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  int v57; // er13
  signed int v58; // ebp
  __int64 v59; // r15
  int v60; // er14
  int v61; // eax
  _DWORD *v62; // rsi
  _DWORD *v63; // rdx
  __int64 v64; // rsi
  char v65; // r9
  int v66; // edi
  char *v67; // rsi
  int v68; // ecx
  int v69; // er11
  char *v70; // rax
  __int64 v71; // rbx
  int v72; // ecx
  int j; // ebp
  char *v74; // rax
  __int64 v75; // rdi
  char *v76; // rax
  __int64 v77; // r12
  _DWORD *v78; // rbx
  int v79; // er14
  int i; // er9
  int v81; // ebp
  int v82; // esi
  __int64 v83; // rdi
  int v84; // ebp
  int v85; // esi
  __int64 v86; // rdi
  char *v87; // rax
  char *v88; // rdx
  signed int v89; // ebx
  int v90; // er12
  int v91; // ebp
  char *v92; // rax
  FILE *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rbp
  int v97; // eax
  char *v98; // rax
  char *v99; // rax
  int v100; // [rsp+8h] [rbp-40h]
  int v101; // [rsp+Ch] [rbp-3Ch]

  v2 = a1;
  v3 = a2;
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
    goto LABEL_244;
  dword_614284 = dword_61427C;
  v8 = dword_614278 + 1;
  if ( byte_614288 == 9 )
    v8 = dword_614278
       + ((unsigned int)(dword_614278 >> 31) >> 29)
       - (((_BYTE)dword_614278 + ((unsigned int)(dword_614278 >> 31) >> 29)) & 7)
       + 8;
  dword_6143F8 = v8;
  if ( !byte_61444F )
LABEL_244:
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
    v99 = dcgettext(0LL, "page width too narrow", 5);
    v7 = 0LL;
    v14 = 1LL;
    error(1, 0, v99);
    goto LABEL_240;
  }
  if ( byte_6143FC )
  {
    free(ptr);
    v75 = dword_614278 + 1LL;
    if ( (unsigned int)dword_614278 <= 0xB )
      v75 = 12LL;
    ptr = (void *)sub_409300(v75);
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
  if ( dword_614298 & 0x200000000000000LL || (unsigned __int64)dword_614298 >> 58 != 0 )
    goto LABEL_240;
  v15 = (void *)sub_409300(v14);
  v16 = (__int64)v15;
  qword_614478 = v15;
  if ( byte_61444F )
  {
    if ( v2 )
    {
      v17 = (__int64)&v3[(unsigned int)(v2 - 1) + 1];
      do
      {
        while ( (unsigned __int8)sub_403C80(*v3, v16) )
        {
          ++v3;
          v16 += 64LL;
          if ( v3 == (const char **)v17 )
            goto LABEL_36;
        }
        ++v3;
        --dword_614298;
      }
      while ( v3 != (const char **)v17 );
    }
LABEL_36:
    result = (unsigned int)dword_614298;
    if ( !dword_614298 )
      return result;
    v7 = 0xFFFFFFFFLL;
    sub_402AB0("", -1);
  }
  else
  {
    if ( v2 <= 0 )
    {
      v92 = dcgettext(0LL, "standard input", 5);
      *(_BYTE *)(v16 + 57) = 0;
      *(_QWORD *)(v16 + 8) = v92;
      v93 = stdin;
      *(_DWORD *)(v16 + 16) = 0;
      *(_QWORD *)v16 = v93;
      byte_614446 = 1;
      ++dword_6143E4;
      sub_402AB0("", -1);
      *(_DWORD *)(v16 + 44) = 0;
    }
    else
    {
      result = sub_403C80(*v3, (__int64)v15);
      if ( !(_BYTE)result )
        return result;
      v97 = fileno(*(FILE **)v16);
      sub_402AB0(*v3, v97);
      *(_DWORD *)(v16 + 44) = 0;
    }
    v7 = (unsigned int)dword_614298;
    v94 = *(_QWORD *)(v16 + 8);
    v95 = v16 + 64;
    v19 = *(FILE **)v16;
    if ( dword_614298 != 1 )
    {
      v7 = ((unsigned int)(dword_614298 - 2) + 2LL) << 6;
      v96 = v7 + v16;
      do
      {
        *(_QWORD *)(v95 + 8) = v94;
        v95 += 64LL;
        *(_QWORD *)(v95 - 64) = v19;
        *(_DWORD *)(v95 - 48) = 0;
        *(_BYTE *)(v95 - 7) = 0;
        *(_DWORD *)(v95 - 20) = 0;
      }
      while ( v95 != v96 );
    }
  }
  dword_614410 = dword_6143E4;
  if ( byte_6142B4 )
  {
    v89 = dword_614298 * dword_614440;
    if ( is_mul_ok(dword_614298, dword_614440) )
    {
      v90 = v89 + 1;
      if ( !__OFADD__(1, v89) && !__OFADD__(1, dword_614438) )
      {
        v91 = v89 * (dword_614438 + 1);
        if ( is_mul_ok(v89, dword_614438 + 1) )
        {
          free(qword_614458);
          v14 = 4LL * v90;
          if ( !(v90 & 0x2000000000000000LL) && (unsigned __int64)v90 >> 62 == 0 )
          {
            qword_614458 = (void *)sub_409300(v14);
            free(qword_614450);
            v14 = 4LL * v89;
            if ( !(v89 & 0x2000000000000000LL) && (unsigned __int64)v89 >> 62 == 0 )
            {
              qword_614450 = (void *)sub_409300(v14);
              free(qword_614470);
              v14 = (unsigned __int8)byte_6143E0 + 1LL;
              v13 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)v91) >> 64 != 0;
              if ( v14 * v91 >= 0 && ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)v91) >> 64 == 0 )
              {
                qword_614470 = (void *)sub_409300(v14 * v91);
                qword_614460 = ((unsigned __int8)byte_6143E0 + 1LL) * v91;
                goto LABEL_39;
              }
            }
          }
LABEL_240:
          sub_409550(v14, v7, v13);
        }
      }
    }
    sub_4027F0();
    goto LABEL_238;
  }
LABEL_39:
  v20 = qword_614418;
  if ( (unsigned __int64)qword_614418 <= 1 )
  {
    qword_614408 = 1LL;
    goto LABEL_41;
  }
  v77 = 1LL;
  while ( 1 )
  {
    v78 = qword_614478;
    v79 = 1;
    for ( i = dword_614298; v79 < dword_614440; ++v79 )
    {
      if ( i > 0 )
      {
        v81 = 1;
        do
        {
          while ( v78[4] )
          {
            ++v81;
            v78 += 16;
            if ( v81 > i )
              goto LABEL_193;
          }
          v82 = v81;
          v83 = (__int64)v78;
          ++v81;
          v78 += 16;
          sub_403490(v83, v82);
          i = dword_614298;
        }
        while ( v81 <= dword_614298 );
LABEL_193:
        v78 = qword_614478;
      }
    }
    byte_614390 = 1;
    if ( i > 0 )
    {
      v84 = 1;
      do
      {
        while ( v78[4] )
        {
          ++v84;
          v78 += 16;
          if ( v84 > i )
            goto LABEL_200;
        }
        v85 = v84;
        v86 = (__int64)v78;
        ++v84;
        v78 += 16;
        sub_403490(v86, v85);
        i = dword_614298;
      }
      while ( v84 <= dword_614298 );
LABEL_200:
      if ( byte_6142B4 )
      {
        v87 = (char *)qword_614478;
        if ( i > 0 )
        {
          v88 = (char *)qword_614478 + 64 * (unsigned int)(i - 1) + 64;
          do
          {
            if ( *((_DWORD *)v87 + 4) != 3 )
              *((_DWORD *)v87 + 4) = 2;
            v87 += 64;
          }
          while ( v87 != v88 );
        }
      }
    }
    sub_402710();
    byte_614390 = 0;
    if ( dword_614410 <= 0 )
      break;
    if ( v20 == ++v77 )
      goto LABEL_208;
  }
  v98 = dcgettext(0LL, "starting page number %lu exceeds page count %lu", 5);
  error(0, 0, v98, v20, v77);
  result = (unsigned int)dword_614410;
  if ( dword_614410 > 0 )
  {
LABEL_208:
    qword_614408 = qword_614418;
LABEL_41:
    v21 = byte_61443D;
    v22 = 0;
    if ( byte_61443D )
    {
      v22 = dword_61442C + dword_614438;
      if ( byte_61444F )
      {
        if ( byte_6143FC )
          v22 += dword_6143F8;
      }
    }
    v23 = dword_6143DC;
    v24 = (char *)qword_614478;
    v25 = dword_614298;
    v26 = byte_6142B4;
    v27 = dword_6143DC + dword_61442C;
    v28 = (char *)qword_614478;
    v29 = dword_614298;
    v30 = byte_6142B4;
    if ( dword_614298 <= 1 )
    {
      v29 = 1;
      LOBYTE(v31) = byte_6143FC;
    }
    else
    {
      LOBYTE(v31) = byte_6143FC;
      v32 = qword_614478;
      v33 = 1;
      v34 = dword_614438;
      v35 = (unsigned __int8)byte_61444F ^ 1;
      do
      {
        while ( 1 )
        {
          if ( v26 )
          {
            v32[4] = sub_402790;
            v32[3] = sub_403280;
          }
          else
          {
            v32[4] = sub_4031E0;
            v32[3] = sub_403840;
          }
          LODWORD(v19) = 0;
          if ( (_BYTE)v31 )
          {
            LOBYTE(v19) = v33 == 1;
            LODWORD(v19) = v35 | (unsigned int)v19;
          }
          *((_BYTE *)v32 + 56) = (_BYTE)v19;
          *((_DWORD *)v32 + 13) = v27;
          if ( !v21 )
            break;
          v27 = v23 + v22;
          ++v33;
          v32 += 8;
          v22 += v23 + v34;
          if ( v33 == v25 )
            goto LABEL_65;
        }
        ++v33;
        v22 = 0;
        v27 = 0;
        v32 += 8;
      }
      while ( v33 != v25 );
LABEL_65:
      v30 = v26;
      v28 = &v24[64 * (v25 - 2) + 64];
    }
    if ( v26 && byte_614444 )
    {
      *((_QWORD *)v28 + 4) = sub_402790;
      *((_QWORD *)v28 + 3) = sub_403280;
    }
    else
    {
      *((_QWORD *)v28 + 4) = sub_4031E0;
      *((_QWORD *)v28 + 3) = sub_403840;
    }
    if ( (_BYTE)v31 )
    {
      LOBYTE(v19) = v29 == 1;
      v31 = (unsigned int)v19 | (unsigned __int8)byte_61444F ^ 1;
    }
    v28[56] = v31;
    v36 = v24;
    *((_DWORD *)v28 + 13) = v27;
    dword_614400 = dword_614284;
    if ( v30 )
      goto LABEL_129;
LABEL_72:
    if ( v25 )
    {
      v37 = dword_614440;
      do
      {
        v38 = 0;
        if ( !*((_DWORD *)v36 + 4) )
          v38 = v37;
        v36 += 64;
        *((_DWORD *)v36 - 4) = v38;
      }
      while ( &v24[64 * (v25 - 1) + 64] != v36 );
    }
    while ( 1 )
    {
      result = sub_4026B0();
      if ( !(_DWORD)result )
        return result;
      if ( byte_6142B5 )
        byte_614448 = 1;
      v41 = dword_614440;
      byte_6143D0 = 0;
      if ( byte_6143E8 )
        v41 = 2 * dword_614440;
      v42 = 0;
      if ( v41 > 0 )
      {
        while ( 2 )
        {
          if ( !(unsigned int)sub_4026B0() )
            goto LABEL_120;
          dword_614428 = 0;
          dword_614430 = 0;
          v43 = (FILE **)qword_614478;
          dword_6143D8 = 0;
          byte_6143D0 = 0;
          byte_61444E = 0;
          byte_61444D = 1;
          if ( dword_614298 <= 0 )
            goto LABEL_106;
          v44 = 1;
LABEL_97:
          v48 = *((_DWORD *)v43 + 12);
          dword_614424 = 0;
          if ( v48 > 0 || *((_DWORD *)v43 + 4) == 1 )
          {
            v45 = *((_DWORD *)v43 + 13);
            byte_61444C = 0;
            dword_6143D4 = v45;
            if ( !((unsigned __int8 (__fastcall *)(FILE **))v43[3])(v43) )
              sub_403D80(v43);
            v46 = *((_DWORD *)v43 + 12) - 1;
            v42 |= byte_6143D0;
            *((_DWORD *)v43 + 12) = v46;
            if ( v46 <= 0 && !(unsigned int)sub_4026B0() )
            {
              if ( !v65 )
                goto LABEL_149;
LABEL_103:
              v49 = stdout->_IO_write_ptr;
              if ( v49 >= stdout->_IO_write_end )
              {
                __overflow(stdout, 10);
              }
              else
              {
                stdout->_IO_write_ptr = v49 + 1;
                *v49 = 10;
              }
              --v41;
LABEL_106:
              if ( !(unsigned int)sub_4026B0() )
              {
LABEL_149:
                if ( byte_6142B5 )
                  goto LABEL_107;
LABEL_113:
                if ( v41 )
                  goto LABEL_120;
                v39 = dword_614298;
                v40 = (char *)qword_614478;
                if ( dword_614298 <= 0 )
                  goto LABEL_120;
                goto LABEL_115;
              }
LABEL_107:
              if ( byte_6143E8 && v42 )
              {
                v50 = stdout->_IO_write_ptr;
                if ( v50 >= stdout->_IO_write_end )
                {
                  __overflow(stdout, 10);
                }
                else
                {
                  stdout->_IO_write_ptr = v50 + 1;
                  *v50 = 10;
                }
                --v41;
              }
              if ( v41 <= 0 )
                goto LABEL_113;
              continue;
            }
            if ( byte_61444F )
            {
              v47 = *((_DWORD *)v43 + 4);
              if ( v47 )
              {
                if ( byte_61444D )
                  goto LABEL_101;
                if ( v47 == 3 || v47 == 2 && byte_61444C )
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
            sub_4037E0((__int64)v43);
          }
          break;
        }
        if ( byte_6143E0 )
          ++dword_6143D8;
        ++v44;
        v43 += 8;
        if ( v44 > dword_614298 )
        {
          if ( !byte_6143D0 )
            goto LABEL_106;
          goto LABEL_103;
        }
        goto LABEL_97;
      }
      if ( v41 || v39 <= 0 )
        break;
LABEL_115:
      v51 = (__int64)&v40[64 * (v39 - 1) + 64];
      do
      {
        if ( !*((_DWORD *)v40 + 4) )
          v40[57] = 1;
        v40 += 64;
      }
      while ( v40 != (char *)v51 );
      v41 = 0;
LABEL_120:
      byte_6143D0 = v42;
      if ( !v42 || !byte_6142B5 )
        break;
      if ( byte_614447 )
      {
        v76 = stdout->_IO_write_ptr;
        if ( v76 >= stdout->_IO_write_end )
        {
          __overflow(stdout, 12);
        }
        else
        {
          stdout->_IO_write_ptr = v76 + 1;
          *v76 = 12;
        }
      }
      else
      {
        for ( j = v41 + 5; j; --j )
        {
          v74 = stdout->_IO_write_ptr;
          if ( v74 < stdout->_IO_write_end )
          {
            stdout->_IO_write_ptr = v74 + 1;
            *v74 = 10;
          }
          else
          {
            __overflow(stdout, 10);
          }
        }
      }
LABEL_127:
      result = ++qword_614408;
      if ( qword_614408 > (unsigned __int64)qword_614290 )
        return result;
      sub_402710();
      v24 = (char *)qword_614478;
      v25 = dword_614298;
      v36 = (char *)qword_614478;
      if ( !byte_6142B4 )
        goto LABEL_72;
LABEL_129:
      v53 = byte_614444;
      dword_614468 = 0;
      v101 = v25 - ((unsigned __int8)byte_614444 < 1u);
      if ( v25 - ((unsigned __int8)byte_614444 < 1u) <= 0 )
      {
        v56 = 0;
LABEL_185:
        v64 = 0LL;
        v58 = 0;
        goto LABEL_155;
      }
      v54 = v24;
      v55 = (__int64)&v24[64 * (v25 - ((unsigned __int8)byte_614444 < 1u) - 1) + 64];
      do
      {
        *((_DWORD *)v54 + 11) = 0;
        v54 += 64;
      }
      while ( v54 != (char *)v55 );
      v56 = dword_614410;
      if ( !dword_614410 )
        goto LABEL_185;
      v100 = 1;
      v57 = 0;
      v58 = 0;
      v59 = 0LL;
      while ( 1 )
      {
        v60 = dword_614440;
        *((_DWORD *)v36 + 10) = v58;
        if ( v60 )
          break;
LABEL_144:
        ++v100;
        v36 += 64;
        v56 = v57;
        v64 = 4 * v59;
        if ( v101 < v100 || !dword_614410 )
        {
          v36 = (char *)qword_614478;
          v25 = dword_614298;
          v53 = byte_614444;
          v24 = (char *)qword_614478;
          goto LABEL_155;
        }
      }
      while ( dword_614410 )
      {
        if ( *((_DWORD *)v36 + 4) )
          goto LABEL_245;
        dword_614424 = 0;
        if ( !(unsigned __int8)sub_403840((_IO_FILE **)v36, 0) )
          sub_403D80((FILE **)v36);
        v61 = dword_614468;
        if ( *((_DWORD *)v36 + 4) && dword_614468 == v57 )
        {
LABEL_245:
          if ( !--v60 )
            goto LABEL_144;
        }
        else
        {
          v62 = qword_614458;
          ++*((_DWORD *)v36 + 11);
          ++v58;
          v63 = qword_614450;
          v62[v59] = v57;
          v57 = v61;
          v63[v59] = dword_614424;
          v59 = (unsigned int)v58;
          if ( !--v60 )
            goto LABEL_144;
        }
      }
      v24 = (char *)qword_614478;
      v25 = dword_614298;
      v56 = v57;
      v64 = 4 * v59;
      v53 = byte_614444;
      v36 = (char *)qword_614478;
LABEL_155:
      *(_DWORD *)((char *)qword_614458 + v64) = v56;
      if ( !v53 )
      {
        if ( v25 == 1 )
          goto LABEL_168;
        goto LABEL_162;
      }
      if ( v25 > 0 )
      {
        v66 = 0;
        v67 = v24;
        v68 = 1;
        do
        {
          v69 = v58 / v25;
          *((_DWORD *)v67 + 10) = v66;
          if ( v58 % v25 >= v68 )
            v69 = v58 / v25 + 1;
          ++v68;
          v67 += 64;
          *((_DWORD *)v67 - 5) = v69;
          v66 += v69;
        }
        while ( v68 != v25 + 1 );
      }
      if ( v25 == 1 )
      {
LABEL_165:
        *((_DWORD *)v36 + 12) = *((_DWORD *)v36 + 11);
      }
      else
      {
LABEL_162:
        v70 = v24;
        v71 = (unsigned int)(v25 - 2);
        do
        {
          v72 = *((_DWORD *)v70 + 11);
          v70 += 64;
          *((_DWORD *)v70 - 4) = v72;
        }
        while ( v70 != &v24[64 * v71 + 64] );
        v36 = &v24[64 * v71 + 64];
        if ( v53 )
          goto LABEL_165;
LABEL_168:
        if ( *((_DWORD *)v36 + 4) )
          *((_DWORD *)v36 + 12) = 0;
        else
          *((_DWORD *)v36 + 12) = dword_614440;
      }
    }
    if ( byte_61444A && byte_614449 )
    {
      v52 = stdout->_IO_write_ptr;
      if ( v52 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 12);
      }
      else
      {
        stdout->_IO_write_ptr = v52 + 1;
        *v52 = 12;
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
  const char **v42; // rax
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
  const char *v60; // [rsp+0h] [rbp-88h]
  const char *v61; // [rsp+8h] [rbp-80h]
  const char *v62; // [rsp+10h] [rbp-78h]
  const char *v63; // [rsp+18h] [rbp-70h]
  const char *v64; // [rsp+20h] [rbp-68h]
  const char *v65; // [rsp+28h] [rbp-60h]
  const char *v66; // [rsp+30h] [rbp-58h]
  const char *v67; // [rsp+38h] [rbp-50h]
  const char *v68; // [rsp+40h] [rbp-48h]
  const char *v69; // [rsp+48h] [rbp-40h]
  const char *v70; // [rsp+50h] [rbp-38h]
  const char *v71; // [rsp+58h] [rbp-30h]
  __int64 v72; // [rsp+60h] [rbp-28h]
  __int64 v73; // [rsp+68h] [rbp-20h]

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
  v60 = "[";
  v42 = &v60;
  v61 = "test invocation";
  v62 = "coreutils";
  v63 = "Multi-call invocation";
  v64 = "sha224sum";
  v65 = "sha2 utilities";
  v66 = "sha256sum";
  v67 = "sha2 utilities";
  v68 = "sha384sum";
  v69 = "sha2 utilities";
  v70 = "sha512sum";
  v71 = "sha2 utilities";
  v72 = 0LL;
  v73 = 0LL;
  do
    v42 += 2;
  while ( *v42 && strcmp("pr", *v42) );
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
  char v4; // r12
  _DWORD *v5; // rbp
  char *v6; // rbx
  unsigned int v7; // esi
  __int64 result; // rax
  __int64 v9; // rbp
  int v10; // esi
  char *v11; // rbx
  __int64 v12; // [rsp+8h] [rbp-20h]

  v4 = a2;
  v5 = a4;
  v6 = nptr;
  v7 = *nptr;
  result = v7;
  if ( v7 - 48 > 9 )
  {
    *a3 = v7;
    result = (unsigned __int8)nptr[1];
    v6 = nptr + 1;
  }
  if ( (_BYTE)result )
  {
    if ( (unsigned int)sub_409E00(v6) || (result = v12, (unsigned __int64)(v12 - 1) > 0x7FFFFFFE) )
    {
      v9 = sub_408D30(v6);
      v10 = 75;
      v11 = dcgettext(0LL, "'-%c' extra characters or invalid number in the argument: %s", 5);
      if ( v12 <= 0x7FFFFFFF )
        v10 = *__errno_location();
      error(0, v10, v11, (unsigned int)v4, v9);
      sub_404DE0(1);
    }
    *v5 = v12;
  }
  return result;
}

__int64 sub_4053D0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

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
        v5 = sub_408B80();
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
  int v6; // er12
  int *v7; // rax
  int v8; // ebp
  int *v9; // rbx
  int *v10; // rax
  FILE *v11; // rdi
  int v12; // er12
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
        v3 = 0LL;
      }
    }
  }
  return v3;
}

int __fastcall sub_405550(struct timespec *tp)
{
  int result; // eax
  __time_t v2; // [rsp+0h] [rbp-18h]
  __int64 v3; // [rsp+8h] [rbp-10h]

  result = clock_gettime(0, tp);
  if ( result )
  {
    gettimeofday((struct timeval *)&v2, 0LL);
    tp->tv_sec = v2;
    result = 1000 * v3;
    tp->tv_nsec = 1000 * v3;
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
      result = strcmp(v1, "POSIX") != 0;
  }
  return result;
}

__int64 __fastcall sub_4055F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // eax

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v4 = 10 * (unsigned __int64)(a1 / 10) + 48 - a1;
      a1 /= 10LL;
      *(_BYTE *)(v2 - 1) = v4;
      if ( !a1 )
        break;
      --v2;
    }
    *(_BYTE *)(v2 - 2) = 45;
    result = v2 - 2;
  }
  else
  {
    do
    {
      *(_BYTE *)--v2 = a1 % 0xAuLL + 48;
      a1 /= 0xAuLL;
    }
    while ( a1 );
    result = v2;
  }
  return result;
}

__int64 __fastcall sub_405690(char *s, __int64 a2, char a3)
{
  char v3; // r15
  char *v4; // r13
  char *v5; // rbx
  unsigned int v6; // er12
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // eax
  int v12; // er15
  const unsigned __int16 *v13; // rdx
  unsigned __int16 v14; // ax
  wchar_t c; // [rsp+4h] [rbp-44h]
  mbstate_t ps; // [rsp+8h] [rbp-40h]

  v3 = a3;
  v4 = &s[a2];
  v5 = s;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    v6 = 0;
    if ( s >= v4 )
      return v6;
    v6 = 0;
    v12 = v3 & 2;
    v13 = *__ctype_b_loc();
    while ( 1 )
    {
      v14 = v13[(unsigned __int8)*(++v5 - 1)];
      if ( v14 & 0x4000 )
        goto LABEL_42;
      if ( v12 )
        return (unsigned int)-1;
      if ( !(v14 & 2) )
      {
LABEL_42:
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
              if ( !(v3 & 1) )
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
              if ( v3 & 2 )
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
          if ( v3 & 1 )
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

__int64 __usercall sub_405920@<rax>(void *s@<rdi>, unsigned __int64 a2@<rdx>, const __m128i *a3@<rcx>, __int64 a4@<rsi>, char a5@<r8b>, __int64 a6, int a7)
{
  char *v7; // r15
  char *v8; // rbx
  __int64 v9; // r12
  int v10; // er11
  char v11; // al
  __int64 v12; // r14
  char *v13; // r8
  char v15; // r11
  __int64 v16; // r8
  int i; // er12
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  bool v21; // cc
  int v22; // ebp
  unsigned int v23; // eax
  int v24; // edi
  char *v25; // rax
  char *v26; // r8
  char v27; // r13
  size_t v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rbx
  size_t v32; // rdx
  char *v33; // rdi
  char *v34; // rsi
  size_t v35; // rdx
  char *v36; // rdi
  unsigned __int64 v37; // rcx
  __int64 v38; // r13
  __m128i v39; // xmm4
  __m128i v40; // xmm2
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rcx
  int v45; // edx
  unsigned int v46; // eax
  int v47; // er10
  char *v48; // rcx
  unsigned __int64 v49; // rax
  size_t v50; // r9
  unsigned __int64 v51; // r9
  size_t v52; // rdx
  char *v53; // rdi
  unsigned __int64 v54; // r10
  int v55; // eax
  unsigned __int64 v56; // rsi
  size_t v57; // rdx
  char *v58; // rdi
  __int32 v59; // er10
  __int32 v60; // er13
  int v61; // edi
  int v62; // er8
  int v63; // eax
  int v64; // er13
  int v65; // er13
  int v66; // edi
  unsigned int v67; // esi
  int v68; // edi
  unsigned int v69; // er8
  unsigned __int64 v70; // r13
  int v71; // eax
  unsigned __int64 v72; // rsi
  char v73; // r11
  char v74; // r8
  size_t v75; // rdx
  char *v76; // rdi
  int v77; // esi
  unsigned __int64 v78; // r13
  size_t v79; // rdx
  char *v80; // rdi
  char *v81; // rcx
  __int64 v82; // rax
  unsigned __int64 v83; // rsi
  size_t v84; // rdx
  char *v85; // rdi
  size_t v86; // rdx
  char *v87; // rdi
  int v88; // esi
  int v89; // edi
  int v90; // edx
  __int64 v91; // rax
  char *v92; // r9
  size_t v93; // rcx
  size_t v94; // rax
  size_t v95; // rdx
  char *v96; // rdi
  size_t v97; // rcx
  __int64 j; // r13
  __int64 v99; // rsi
  int v100; // eax
  int v101; // esi
  char v102; // cl
  int v103; // esi
  size_t v104; // rdx
  char *v105; // rdi
  int v106; // eax
  int v107; // eax
  char v108; // al
  char v109; // cl
  unsigned __int64 v110; // r12
  unsigned __int64 v111; // r8
  size_t v112; // rdx
  __int64 v113; // r12
  char *v114; // rdi
  int v115; // eax
  unsigned __int64 v116; // rcx
  char *v117; // rdi
  int v118; // esi
  int v119; // edx
  int v120; // er10
  int v121; // esi
  int k; // edi
  __int32 v123; // esi
  bool v124; // sf
  bool v125; // of
  int v126; // eax
  int v127; // eax
  int v128; // esi
  int v129; // esi
  __int64 v130; // [rsp+0h] [rbp-4C8h]
  const __m128i *tp; // [rsp+8h] [rbp-4C0h]
  char *v132; // [rsp+20h] [rbp-4A8h]
  char v133; // [rsp+2Bh] [rbp-49Dh]
  int v134; // [rsp+2Ch] [rbp-49Ch]
  char *v135; // [rsp+30h] [rbp-498h]
  char v136; // [rsp+30h] [rbp-498h]
  unsigned __int64 v137; // [rsp+30h] [rbp-498h]
  char v138; // [rsp+30h] [rbp-498h]
  int v139; // [rsp+30h] [rbp-498h]
  char v140; // [rsp+30h] [rbp-498h]
  char v141; // [rsp+30h] [rbp-498h]
  size_t v142; // [rsp+30h] [rbp-498h]
  char v143; // [rsp+30h] [rbp-498h]
  size_t v144; // [rsp+30h] [rbp-498h]
  int v145; // [rsp+30h] [rbp-498h]
  char v146; // [rsp+40h] [rbp-488h]
  char *v147; // [rsp+40h] [rbp-488h]
  char *v148; // [rsp+40h] [rbp-488h]
  char v149; // [rsp+40h] [rbp-488h]
  char *v150; // [rsp+40h] [rbp-488h]
  char v151; // [rsp+40h] [rbp-488h]
  char v152; // [rsp+40h] [rbp-488h]
  char v153; // [rsp+40h] [rbp-488h]
  char *v154; // [rsp+40h] [rbp-488h]
  char *v155; // [rsp+40h] [rbp-488h]
  char v156; // [rsp+40h] [rbp-488h]
  char *v157; // [rsp+40h] [rbp-488h]
  char v158; // [rsp+40h] [rbp-488h]
  int v159; // [rsp+48h] [rbp-480h]
  unsigned __int64 v160; // [rsp+48h] [rbp-480h]
  char *v161; // [rsp+48h] [rbp-480h]
  unsigned __int64 v162; // [rsp+48h] [rbp-480h]
  char v163; // [rsp+48h] [rbp-480h]
  char *v164; // [rsp+48h] [rbp-480h]
  char *v165; // [rsp+48h] [rbp-480h]
  char v166; // [rsp+48h] [rbp-480h]
  int v167; // [rsp+48h] [rbp-480h]
  char v168; // [rsp+48h] [rbp-480h]
  unsigned __int64 v169; // [rsp+50h] [rbp-478h]
  int v170; // [rsp+50h] [rbp-478h]
  size_t v171; // [rsp+50h] [rbp-478h]
  unsigned __int64 v172; // [rsp+50h] [rbp-478h]
  int v173; // [rsp+50h] [rbp-478h]
  size_t v174; // [rsp+58h] [rbp-470h]
  char *v175; // [rsp+58h] [rbp-470h]
  char v176; // [rsp+58h] [rbp-470h]
  unsigned __int64 v177; // [rsp+58h] [rbp-470h]
  unsigned __int64 v178; // [rsp+58h] [rbp-470h]
  unsigned __int64 v179; // [rsp+60h] [rbp-468h]
  char format[2]; // [rsp+70h] [rbp-458h]
  char v181; // [rsp+72h] [rbp-456h]
  char v182; // [rsp+73h] [rbp-455h]
  char v183[9]; // [rsp+87h] [rbp-441h]
  char sa[16]; // [rsp+90h] [rbp-438h]
  __m128i v185; // [rsp+A0h] [rbp-428h]
  __m128i v186; // [rsp+B0h] [rbp-418h]
  __int64 v187; // [rsp+C0h] [rbp-408h]

  v7 = (char *)s;
  v8 = (char *)a2;
  v9 = a3[3].m128i_i64[0];
  v10 = a3->m128i_i64[1];
  v130 = a4;
  tp = a3;
  if ( !v9 )
    v9 = 4247139LL;
  v133 = a5;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = *(_BYTE *)a2;
  v12 = 0LL;
  if ( !*(_BYTE *)a2 )
  {
LABEL_13:
    if ( v7 && v130 )
      *v7 = 0;
    return v12;
  }
  v134 = v10;
  v132 = (char *)v9;
  while ( v11 != 37 )
  {
    a2 = v130 - v12;
    if ( (unsigned __int64)(v130 - v12) <= 1 )
      return 0LL;
    if ( v7 )
      *v7++ = v11;
    ++v12;
    v13 = v8;
LABEL_12:
    v11 = v13[1];
    v8 = v13 + 1;
    if ( !v11 )
      goto LABEL_13;
  }
  v15 = v133;
  v16 = 0LL;
LABEL_22:
  for ( i = 0; ; i = v18 )
  {
    v18 = *++v8;
    v19 = v18;
    v20 = v18;
    v21 = *v8 <= 48;
    if ( *v8 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !v21 )
    {
      if ( (_BYTE)v18 == 94 )
      {
        v15 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v18 != 95 )
      {
        v22 = -1;
        if ( v18 - 48 > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v18 != 35 )
      break;
    v18 = *++v8;
    v16 = 1LL;
    v19 = v18;
    v20 = v18;
    v21 = *v8 <= 48;
    if ( *v8 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v18 == 45 )
    goto LABEL_26;
  v22 = -1;
  if ( v18 - 48 > 9 )
    goto LABEL_29;
LABEL_37:
  v22 = 0;
  while ( 1 )
  {
    v23 = v8[1];
    v19 = v23;
    a2 = v23 - 48;
    if ( v22 > 214748364 )
      break;
    v24 = *v8;
    if ( v22 == 214748364 && (char)v24 > 55 )
      break;
    ++v8;
    v22 = v24 + 10 * v22 - 48;
LABEL_41:
    if ( (unsigned int)a2 > 9 )
    {
      v20 = v23;
      goto LABEL_29;
    }
  }
  if ( (unsigned int)a2 <= 9 )
  {
    v23 = v8[2];
    v22 = 0x7FFFFFFF;
    v8 += 2;
    v19 = v23;
    a2 = v23 - 48;
    goto LABEL_41;
  }
  v20 = v23;
  ++v8;
  v22 = 0x7FFFFFFF;
LABEL_29:
  if ( (_BYTE)v19 == 69 || (_BYTE)v19 == 79 )
    v19 = (unsigned __int8)*++v8;
  else
    v20 = 0LL;
  switch ( (_BYTE)v19 )
  {
    case 0:
      v92 = v8 - 1;
      v102 = *(v8 - 1);
      goto LABEL_263;
    case 0x25:
      LODWORD(v94) = 0;
      v78 = 1LL;
      a2 = v130 - v12;
      if ( v22 >= 0 )
        LODWORD(v94) = v22;
      v94 = (int)v94;
      if ( (_DWORD)v94 )
        v78 = (int)v94;
      if ( (_DWORD)v20 )
      {
        v13 = v8;
        v92 = v8;
        v93 = 1LL;
        goto LABEL_244;
      }
      if ( v78 < a2 )
      {
        if ( v7 )
        {
          if ( v22 > 1 )
          {
            v104 = v22 - 1LL;
            v105 = v7;
            v7 += v104;
            if ( i == 48 )
              memset(v105, 48, v104);
            else
              memset(v105, 32, v104);
            LOBYTE(v19) = *v8;
          }
          *v7++ = v19;
        }
LABEL_176:
        v12 += v78;
        v13 = v8;
        goto LABEL_12;
      }
      return 0LL;
    case 0x3A:
      v108 = v8[1];
      a2 = (unsigned __int64)(v8 + 1);
      for ( j = 1LL; v108 == 58; a2 = (unsigned __int64)&v8[j] )
        v108 = v8[++j];
      if ( v108 != 122 )
        goto LABEL_238;
      v8 = (char *)a2;
      goto LABEL_254;
    case 0x41:
    case 0x42:
    case 0x61:
      if ( (_DWORD)v20 )
        goto LABEL_238;
      if ( (_BYTE)v16 )
        v15 = v16;
      goto LABEL_51;
    case 0x43:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_336;
      v140 = 0;
      v47 = 2;
      LOBYTE(v69) = tp[1].m128i_i32[1] < -1900;
      v67 = tp[1].m128i_i32[1] / 100
          + 19
          - ((tp[1].m128i_i32[1] / 100 + 19 > 0) & ((unsigned int)(tp[1].m128i_i32[1] % 100) >> 31));
      v68 = 0;
      goto LABEL_122;
    case 0x44:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_238;
    case 0x46:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_238;
    case 0x47:
    case 0x56:
    case 0x67:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v59 = tp[1].m128i_i32[3];
      v60 = tp[1].m128i_i32[2];
      v139 = tp[1].m128i_i32[1];
      v61 = v139 + ((v139 >> 31) & 0x190) - 100;
      v62 = v60 - 382 + 7 * ((v59 - v60 + 382) / 7) + 3;
      if ( v62 < 0 )
      {
        v118 = v139 + ((v139 >> 31) & 0x190) - 101;
        v119 = 365;
        if ( !(((_BYTE)v139 + ((v139 >> 31) & 0x90) - 101) & 3) )
        {
          v119 = 366;
          if ( v118 == 100 * (v118 / 100) )
            v119 = 366 - ((unsigned int)(v118 % 400) >= 1);
        }
        v120 = v119 + v59;
        v121 = v120 - v60;
        v65 = -1;
        v62 = v120 - (v121 + 382) + 7 * ((v121 + 382) / 7) + 3;
      }
      else
      {
        v63 = 365;
        if ( !(v61 & 3) )
        {
          v63 = 366;
          if ( v61 == 100 * (v61 / 100) )
            v63 = (v61 == 400 * (v61 / 400)) + 365;
        }
        v64 = v60 - 382 + 7 * ((v59 - v63 - v60 + 382) / 7) + 3;
        if ( v64 >= 0 )
          v62 = v64;
        v65 = (v64 >> 31) + 1;
      }
      if ( (_BYTE)v19 == 71 )
      {
        v123 = tp[1].m128i_i32[1];
        v140 = 0;
        v47 = 4;
        v125 = __OFSUB__(v123, -1900 - v65);
        v124 = v123 - (-1900 - v65) < 0;
        v67 = v123 + v65 + 1900;
        LOBYTE(v69) = v124 ^ v125;
        v68 = 0;
        goto LABEL_122;
      }
      if ( (_BYTE)v19 == 103 )
      {
        v47 = 2;
        v66 = (v65 + v139 % 100) % 100;
        v67 = v66;
        if ( v66 < 0 )
        {
          v67 = v66 + 100;
          if ( v139 < -1900 - v65 )
            v67 = -v66;
        }
      }
      else
      {
        v47 = 2;
        v67 = v62 / 7 + 1;
      }
      goto LABEL_121;
    case 0x48:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = tp->m128i_i64[1];
      goto LABEL_121;
    case 0x49:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = v134;
      v47 = 2;
      goto LABEL_121;
    case 0x4D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = HIDWORD(tp->m128i_i64[0]);
      goto LABEL_121;
    case 0x4E:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      if ( v22 == -1 )
      {
        v67 = a7;
        v22 = 9;
        v47 = 9;
      }
      else
      {
        if ( v22 > 8 )
        {
          v67 = a7;
        }
        else
        {
          v67 = a7;
          for ( k = v22; k != 9; ++k )
            v67 = (int)v67 / 10;
        }
        v47 = v22;
      }
      goto LABEL_121;
    case 0x50:
      v27 = 1;
      goto LABEL_152;
    case 0x52:
    case 0x54:
LABEL_94:
      v54 = sub_405920(0LL, a6, a7);
      v55 = 0;
      if ( v22 >= 0 )
        v55 = v22;
      v56 = v55;
      if ( v54 >= v55 )
        v56 = v54;
      if ( v130 - v12 <= v56 )
        return 0LL;
      if ( v7 )
      {
        if ( v54 < v55 )
        {
          v169 = v54;
          v57 = v22 - v54;
          v58 = v7;
          v7 += v57;
          if ( i == 48 )
            memset(v58, 48, v57);
          else
            memset(v58, 32, v57);
          v54 = v169;
        }
        v162 = v54;
        sub_405920(v7, a6, a7);
        v7 += v162;
      }
      v12 += v56;
      v13 = v8;
      goto LABEL_12;
    case 0x53:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = tp->m128i_i64[0];
      goto LABEL_121;
    case 0x55:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v89 = tp[1].m128i_i32[3] - tp[1].m128i_i32[2] + 7;
      v90 = (unsigned __int64)(-1840700269LL * v89) >> 32;
      goto LABEL_228;
    case 0x57:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v89 = 7 * ((tp[1].m128i_i32[2] + 6) / 7) - (tp[1].m128i_i32[2] + 6) + tp[1].m128i_i32[3] + 7;
      v90 = (unsigned __int64)(-1840700269LL * v89) >> 32;
LABEL_228:
      v47 = 2;
      v67 = ((v90 + v89) >> 2) - (v89 >> 31);
      goto LABEL_121;
    case 0x58:
    case 0x63:
    case 0x78:
      if ( (_DWORD)v20 != 79 )
        goto LABEL_69;
      goto LABEL_238;
    case 0x59:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_336;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_238;
      v140 = 0;
      v47 = 4;
      v88 = tp[1].m128i_i32[1];
      LOBYTE(v69) = v88 < -1900;
      v67 = v88 + 1900;
      v68 = 0;
      goto LABEL_222;
    case 0x5A:
      v163 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
      v151 = v15;
      v70 = strlen(v132);
      v71 = 0;
      if ( v22 >= 0 )
        v71 = v22;
      v72 = v71;
      if ( v70 >= v71 )
        v72 = v70;
      a2 = v130 - v12;
      if ( v130 - v12 <= v72 )
        return 0LL;
      if ( v7 )
      {
        v73 = v151;
        v74 = v163;
        if ( v70 < v71 )
        {
          v75 = v22 - v70;
          v76 = v7;
          v7 += v75;
          if ( i == 48 )
          {
            memset(v76, 48, v75);
            v73 = v151;
            v74 = v163;
          }
          else
          {
            memset(v76, 32, v75);
            v74 = v163;
            v73 = v151;
          }
        }
        if ( v74 )
        {
          sub_405880((__int64)v7, (__int64)v132, v70);
        }
        else if ( v73 )
        {
          sub_4058D0((__int64)v7, (__int64)v132, v70);
        }
        else
        {
          memcpy(v7, v132, v70);
        }
        v7 += v70;
      }
      v12 += v72;
      v13 = v8;
      goto LABEL_12;
    case 0x62:
    case 0x68:
      if ( (_BYTE)v16 )
        v15 = v16;
      if ( (_DWORD)v20 )
        goto LABEL_238;
LABEL_51:
      v25 = &v181;
      v26 = v8;
      v27 = 0;
      *(_WORD *)format = 9504;
      LODWORD(v20) = 0;
      goto LABEL_52;
    case 0x64:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = HIDWORD(tp->m128i_i64[1]);
      goto LABEL_121;
    case 0x65:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = HIDWORD(tp->m128i_i64[1]);
      goto LABEL_159;
    case 0x6A:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v140 = 0;
      v47 = 3;
      v103 = tp[1].m128i_i32[3];
      LOBYTE(v69) = v103 < -1;
      v67 = v103 + 1;
      v68 = 0;
      goto LABEL_122;
    case 0x6B:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = tp->m128i_i64[1];
      goto LABEL_159;
    case 0x6C:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = v134;
LABEL_159:
      v47 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_121;
    case 0x6D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v140 = 0;
      v47 = 2;
      v77 = tp[1].m128i_i32[0];
      LOBYTE(v69) = v77 < -1;
      v67 = v77 + 1;
      v68 = 0;
      goto LABEL_122;
    case 0x6E:
      LODWORD(v78) = 0;
      if ( v22 >= 0 )
        LODWORD(v78) = v22;
      v78 = (int)v78;
      if ( !(_DWORD)v78 )
        v78 = 1LL;
      if ( v130 - v12 <= v78 )
        return 0LL;
      if ( v7 )
      {
        if ( v22 > 1 )
        {
          v79 = v22 - 1LL;
          v80 = v7;
          v7 += v79;
          if ( i == 48 )
            memset(v80, 48, v79);
          else
            memset(v80, 32, v79);
        }
        *v7++ = 10;
      }
      goto LABEL_176;
    case 0x70:
      v27 = 0;
LABEL_152:
      LOBYTE(v19) = 112;
      if ( (_BYTE)v16 )
        v27 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
      goto LABEL_70;
    case 0x71:
      v47 = 1;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_124;
      v140 = 0;
      LOBYTE(v69) = 0;
      v68 = 0;
      v67 = ((11 * tp[1].m128i_i32[0]) >> 5) + 1;
      goto LABEL_179;
    case 0x72:
LABEL_69:
      v27 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !(_DWORD)v20 )
      {
        v26 = v8;
        v25 = &v181;
        goto LABEL_52;
      }
      v47 = 0;
      goto LABEL_125;
    case 0x73:
      v149 = v15;
      v38 = (__int64)v183;
      v39 = _mm_loadu_si128(tp + 2);
      v40 = _mm_loadu_si128(tp + 1);
      v41 = tp[3].m128i_i64[0];
      *(__m128i *)sa = _mm_loadu_si128(tp);
      v185 = v40;
      v186 = v39;
      v187 = v41;
      v42 = sub_40BF30(a6, sa, a2, v19, v16, v20);
      v15 = v149;
      v43 = v42;
      v44 = v42;
      do
      {
        v45 = v44 % 10;
        v44 /= 10LL;
        v46 = 48 - v45;
        a2 = (unsigned int)(v45 + 48);
        if ( v43 < 0 )
          a2 = v46;
        *(_BYTE *)--v38 = a2;
      }
      while ( v44 );
      v47 = 1;
      if ( v22 > 0 )
        v47 = v22;
      if ( v43 >= 0 )
        goto LABEL_79;
      goto LABEL_300;
    case 0x74:
      LODWORD(v78) = 0;
      if ( v22 >= 0 )
        LODWORD(v78) = v22;
      v78 = (int)v78;
      if ( !(_DWORD)v78 )
        v78 = 1LL;
      if ( v130 - v12 <= v78 )
        return 0LL;
      if ( v7 )
      {
        if ( v22 > 1 )
        {
          v86 = v22 - 1LL;
          v87 = v7;
          v7 += v86;
          if ( i == 48 )
            memset(v87, 48, v86);
          else
            memset(v87, 32, v86);
        }
        *v7++ = 9;
      }
      goto LABEL_176;
    case 0x75:
      v47 = 1;
      v67 = (tp[1].m128i_i32[2] + 6) % 7 + 1;
      goto LABEL_121;
    case 0x77:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 1;
      v67 = tp[1].m128i_u32[2];
      goto LABEL_121;
    case 0x79:
      if ( (_DWORD)v20 == 69 )
      {
LABEL_336:
        v47 = 0;
        goto LABEL_124;
      }
      v47 = 2;
      v106 = tp[1].m128i_i32[1] % 100;
      v67 = v106;
      if ( v106 < 0 )
      {
        v107 = -v106;
        v67 += 100;
        if ( tp[1].m128i_i32[1] <= -1901 )
          v67 = v107;
      }
LABEL_121:
      v140 = 0;
      v68 = 0;
      v69 = v67 >> 31;
LABEL_122:
      if ( (_DWORD)v20 == 79 )
      {
        if ( (_BYTE)v69 )
          goto LABEL_223;
LABEL_124:
        v27 = 0;
        *(_WORD *)format = 9504;
LABEL_125:
        v181 = v20;
        v26 = v8;
        LODWORD(v20) = v47;
        v25 = &v182;
LABEL_52:
        *v25 = v19;
        v25[1] = 0;
        v135 = v26;
        v159 = v20;
        v146 = v15;
        v28 = strftime(sa, 0x400uLL, format, (const struct tm *)tp);
        v13 = v135;
        if ( v28 )
        {
          v29 = v28 - 1;
          v30 = 0;
          if ( v22 >= 0 )
            v30 = v22;
          v31 = v30;
          if ( v29 >= v30 )
            v31 = v29;
          a2 = v130 - v12;
          if ( v130 - v12 > v31 )
          {
            if ( v7 )
            {
              v15 = v146;
              if ( !v159 && v29 < v30 )
              {
                v160 = v29;
                v32 = v22 - v29;
                v147 = v135;
                v136 = v15;
                v33 = v7;
                v7 += v32;
                if ( i == 48 )
                {
                  memset(v33, 48, v32);
                  v15 = v136;
                  v13 = v147;
                  v29 = v160;
                }
                else
                {
                  memset(v33, 32, v32);
                  v29 = v160;
                  v13 = v147;
                  v15 = v136;
                }
              }
              v148 = v13;
              v34 = &sa[1];
              v35 = v29;
              v36 = v7;
              v137 = v29;
              if ( !v27 )
                goto LABEL_64;
              sub_405880((__int64)v7, (__int64)&sa[1], v29);
              v37 = v137;
              v13 = v148;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_222:
      if ( (_BYTE)v69 )
LABEL_223:
        v67 = -v67;
LABEL_179:
      v81 = v183;
      while ( 1 )
      {
        v38 = (__int64)(v81 - 1);
        if ( v68 & 1 )
        {
          v82 = (__int64)(v81 - 2);
          *--v81 = 58;
          v38 = v82;
        }
        v68 >>= 1;
        a2 = v67 / 0xA;
        *(v81 - 1) = v67 % 0xA + 48;
        v81 = (char *)v38;
        if ( v67 <= 9 && !v68 )
          break;
        v67 /= 0xAu;
      }
      if ( v47 < v22 )
        v47 = v22;
      if ( (_BYTE)v69 )
      {
LABEL_300:
        v141 = 45;
        v109 = 45;
        if ( i == 45 )
          goto LABEL_301;
LABEL_191:
        v48 = &v183[-v38];
        LODWORD(v50) = v47 - 1 - (unsigned __int64)&v183[-v38];
        v49 = v130 - v12;
        if ( (int)v50 <= 0 )
        {
          LODWORD(v51) = 0;
          v111 = 1LL;
          if ( v22 >= 0 )
            LODWORD(v51) = v22;
          v51 = (int)v51;
          if ( (_DWORD)v51 )
            v111 = (int)v51;
          if ( v111 >= v49 )
            return 0LL;
          if ( v7 )
          {
            if ( !v47 && (unsigned __int64)(int)v51 > 1 )
            {
              v112 = v22 - 1LL;
              v179 = v111;
              v177 = (int)v51;
              v157 = &v7[v112];
              v166 = v15;
              if ( i == 48 )
              {
                memset(v7, 48, v112);
                v7 = v157;
                v15 = v166;
                v47 = 0;
                v51 = v177;
                v111 = v179;
                v48 = &v183[-v38];
              }
              else
              {
                memset(v7, 32, v112);
                v7 = v157;
                v48 = &v183[-v38];
                v111 = v179;
                v51 = v177;
                v47 = 0;
                v15 = v166;
              }
            }
            *(++v7 - 1) = v141;
          }
          v12 += v111;
          v13 = v8;
          v49 = v130 - v12;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v47 >= v49 )
            return 0LL;
          LODWORD(a2) = 0;
          v83 = 1LL;
          if ( v22 >= 0 )
            LODWORD(a2) = v22;
          a2 = (int)a2;
          if ( (_DWORD)a2 )
            v83 = (int)a2;
          if ( v83 >= v49 )
            return 0LL;
          v12 += v83;
          v50 = (int)v50;
          v13 = v8;
          if ( !v7 )
            goto LABEL_207;
          if ( !v47 && (unsigned __int64)(int)a2 > 1 )
          {
            v174 = (int)v50;
            v84 = v22 - 1LL;
            v152 = v15;
            v85 = v7;
            v7 += v84;
            if ( i == 48 )
            {
              memset(v85, 48, v84);
              v15 = v152;
              v47 = 0;
              v48 = &v183[-v38];
              v50 = v174;
            }
            else
            {
              memset(v85, 32, v84);
              v50 = v174;
              v48 = &v183[-v38];
              v47 = 0;
              v15 = v152;
            }
          }
          ++v7;
          v13 = v8;
          *(v7 - 1) = v141;
LABEL_205:
          if ( v7 )
          {
            v175 = v48;
            v170 = v47;
            v164 = v13;
            v153 = v15;
            v142 = v50;
            memset(v7, 48, v50);
            v50 = v142;
            v48 = v175;
            v47 = v170;
            v13 = v164;
            v15 = v153;
            v7 += v142;
          }
LABEL_207:
          v12 += v50;
          v22 = 0;
          v51 = 0LL;
          v49 = v130 - v12;
          goto LABEL_84;
        }
LABEL_328:
        v113 = (int)v50;
        if ( (int)v50 >= v49 )
          return 0LL;
        if ( v7 )
        {
          v114 = v7;
          v173 = v50;
          v167 = v47;
          v7 += (int)v50;
          v158 = v15;
          memset(v114, 32, (int)v50);
          LODWORD(v50) = v173;
          v47 = v167;
          v15 = v158;
        }
        v12 += v113;
        v115 = v22 - v50;
        v21 = (int)v50 < v22;
        v22 = 0;
        if ( v21 )
          v22 = v115;
        v49 = v130 - v12;
        if ( v141 )
        {
          v51 = v22;
          v116 = 1LL;
          if ( v22 )
            v116 = v22;
          if ( v116 >= v49 )
            return 0LL;
          if ( v7 )
          {
            if ( !v47 && (unsigned __int64)v22 > 1 )
            {
              v117 = v7;
              v178 = v116;
              v7 += v22 - 1;
              v168 = v15;
              memset(v117, 32, v22 - 1LL);
              v116 = v178;
              v47 = 0;
              v15 = v168;
              v51 = v22;
            }
            *(++v7 - 1) = v141;
          }
          v12 += v116;
          v13 = v8;
          i = 95;
          v48 = &v183[-v38];
          v49 = v130 - v12;
        }
        else
        {
          v51 = v22;
          v13 = v8;
          i = 95;
          v48 = &v183[-v38];
        }
        goto LABEL_84;
      }
      if ( !v140 )
      {
LABEL_79:
        v48 = &v183[-v38];
        v49 = v130 - v12;
        if ( i == 45 || (LODWORD(v50) = v47 - (_DWORD)v48, v47 - (int)v48 <= 0) )
        {
          LODWORD(v51) = 0;
          v13 = v8;
          if ( v22 >= 0 )
            LODWORD(v51) = v22;
          v51 = (int)v51;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          a2 = v47;
          if ( v47 >= v49 )
            return 0LL;
          v50 = (int)v50;
          v13 = v8;
          goto LABEL_205;
        }
        v141 = 0;
        goto LABEL_328;
      }
      if ( i != 45 )
      {
        v141 = 43;
        goto LABEL_191;
      }
      v109 = 43;
LABEL_301:
      LODWORD(v51) = 0;
      v110 = 1LL;
      if ( v22 >= 0 )
        LODWORD(v51) = v22;
      v51 = (int)v51;
      if ( (_DWORD)v51 )
        v110 = (int)v51;
      if ( v130 - v12 <= v110 )
        return 0LL;
      if ( v7 )
      {
        if ( !v47 && (unsigned __int64)(int)v51 > 1 )
        {
          v176 = v109;
          v172 = (int)v51;
          v156 = v15;
          memset(v7, 32, v22 - 1LL);
          v109 = v176;
          v51 = v172;
          v47 = 0;
          v15 = v156;
          v7 += v22 - 1;
        }
        *v7++ = v109;
      }
      v12 += v110;
      v13 = v8;
      i = 45;
      v48 = &v183[-v38];
      v49 = v130 - v12;
LABEL_84:
      v31 = v51;
      if ( (unsigned __int64)v48 >= v51 )
        v31 = (unsigned __int64)v48;
      if ( v31 < v49 )
      {
        if ( v7 )
        {
          if ( !v47 && (unsigned __int64)v48 < v51 )
          {
            v161 = v48;
            v52 = v22 - (_QWORD)v48;
            v150 = v13;
            v138 = v15;
            v53 = v7;
            v7 += v52;
            if ( i == 48 )
            {
              memset(v53, 48, v52);
              v15 = v138;
              v13 = v150;
              v48 = v161;
            }
            else
            {
              memset(v53, 32, v52);
              v48 = v161;
              v13 = v150;
              v15 = v138;
            }
          }
          v148 = v13;
          v35 = (size_t)v48;
          v34 = (char *)v38;
          v36 = v7;
          v137 = (unsigned __int64)v48;
LABEL_64:
          if ( v15 )
          {
            sub_4058D0((__int64)v36, (__int64)v34, v35);
            v37 = v137;
            v13 = v148;
          }
          else
          {
            memcpy(v36, v34, v35);
            v13 = v148;
            v37 = v137;
          }
LABEL_66:
          v7 += v37;
        }
LABEL_67:
        v12 += v31;
        goto LABEL_12;
      }
      return 0LL;
    case 0x7A:
      j = 0LL;
LABEL_254:
      if ( tp[2].m128i_i32[0] < 0 )
      {
        v13 = v8;
        goto LABEL_12;
      }
      v99 = tp[2].m128i_i64[1];
      LOBYTE(v69) = 1;
      if ( (int)v99 >= 0 )
      {
        LOBYTE(v69) = 0;
        if ( !(_DWORD)v99 )
          LOBYTE(v69) = *v132 == 45;
      }
      v145 = (int)v99 / 3600;
      v100 = (int)v99 / 60 % 60;
      v68 = (int)v99 / 60 % 60;
      v101 = (int)v99 % 60;
      if ( j == 1 )
        goto LABEL_364;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_383;
        if ( j != 3 )
        {
          v102 = *v8;
          v92 = v8;
LABEL_263:
          LODWORD(v94) = 0;
          a2 = v130 - v12;
          if ( v22 >= 0 )
            LODWORD(v94) = v22;
          v94 = (int)v94;
          if ( v102 == 37 )
          {
            v78 = 1LL;
            v13 = v92;
            v93 = 1LL;
            if ( (_DWORD)v94 )
              v78 = (int)v94;
          }
          else
          {
            v8 = v92;
LABEL_238:
            v91 = (__int64)(v8 - 1);
            do
            {
              v92 = (char *)v91;
              LODWORD(v93) = (_DWORD)v8 - 1 + 2 - v91--;
            }
            while ( *(_BYTE *)(v91 + 1) != 37 );
            LODWORD(v94) = 0;
            v93 = (int)v93;
            v13 = v8;
            a2 = v130 - v12;
            if ( v22 >= 0 )
              LODWORD(v94) = v22;
            v94 = (int)v94;
            v78 = (int)v94;
            if ( (int)v93 >= (unsigned __int64)(int)v94 )
              v78 = (int)v93;
          }
LABEL_244:
          if ( a2 > v78 )
          {
            if ( v7 )
            {
              if ( v93 < v94 )
              {
                v171 = v93;
                v95 = v22 - v93;
                v165 = v13;
                v154 = v92;
                v143 = v15;
                v96 = v7;
                v7 += v95;
                if ( i == 48 )
                {
                  memset(v96, 48, v95);
                  v15 = v143;
                  v92 = v154;
                  v13 = v165;
                  v93 = v171;
                }
                else
                {
                  memset(v96, 32, v95);
                  v93 = v171;
                  v13 = v165;
                  v92 = v154;
                  v15 = v143;
                }
              }
              v155 = v13;
              v144 = v93;
              if ( v15 )
              {
                sub_4058D0((__int64)v7, (__int64)v92, v93);
                v97 = v144;
                v13 = v155;
              }
              else
              {
                memcpy(v7, v92, v93);
                v13 = v155;
                v97 = v144;
              }
              v7 += v97;
            }
            v12 += v78;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v101 )
        {
LABEL_383:
          v126 = 10000 * v145;
          v47 = 9;
          v140 = 1;
          v127 = 100 * v68 + v126;
          v68 = 20;
          v67 = v127 + v101;
        }
        else if ( v100 )
        {
LABEL_364:
          v128 = 100 * v145;
          v47 = 6;
          v140 = 1;
          v67 = v68 + v128;
          v68 = 4;
        }
        else
        {
          v67 = v145;
          v47 = 3;
          v140 = 1;
        }
      }
      else
      {
        v129 = 100 * v145;
        v68 = 0;
        v140 = 1;
        v47 = 5;
        v67 = v100 + v129;
      }
      goto LABEL_122;
    default:
      goto LABEL_238;
  }
}

__int64 __fastcall sub_4070F0(void *a1, __int64 a2, unsigned __int64 a3, const __m128i *a4, __int64 a5, int a6)
{
  return sub_405920(a1, a3, a4, a2, 0, a5, a6);
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
  char *v6; // rbx

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
        v2 = (char *)&unk_40F3CE;
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
      v2 = (char *)&unk_40F3D2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_4072B0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
  char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  char *v54; // rax
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
  char *s2; // [rsp+50h] [rbp-78h]
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
      s2 = "'";
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
      s2 = "'";
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
        s2 = "'";
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
      s2 = "'";
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
            return sub_4072B0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4072B0((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
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
              return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
          return sub_4072B0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40BA50((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4072B0((__int64)v9, v10, s);
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
      return sub_4072B0((__int64)v9, v10, s);
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
        a8 = sub_4071B0("`", v11);
        v47 = sub_4071B0("'", v11);
        v14 = v55;
        a9 = v47;
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

unsigned __int64 __fastcall sub_4072B0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
  char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  char *v54; // rax
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
  char *s2; // [rsp+50h] [rbp-78h]
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
      s2 = "'";
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
      s2 = "'";
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
        s2 = "'";
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
      s2 = "'";
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
            return sub_4072B0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4072B0((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
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
              return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
          return sub_4072B0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40BA50((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4072B0((__int64)v9, v10, s);
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
      return sub_4072B0((__int64)v9, v10, s);
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
        a8 = sub_4071B0("`", v11);
        v47 = sub_4071B0("'", v11);
        v14 = v55;
        a9 = v47;
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

_BYTE *__fastcall sub_4084E0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int64 v7; // rdx
  __int128 *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // er8
  char *v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v18 = a2;
  v6 = __errno_location();
  v8 = off_614318;
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
      v8 = (__int128 *)sub_409360(0LL, v10);
      off_614318 = v8;
      *v8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      off_614318 = (__int128 *)sub_409360(off_614318, v10);
      v8 = off_614318;
    }
    memset(&v8[dword_614330], 0, 16LL * ((int)a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v19 = *v11;
  v13 = sub_4072B0(v12, *v11, v18, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v16 = *(_DWORD *)v5;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_4072B0(v15, v14, v18, v4, v16, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_4084E0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int64 v7; // rdx
  __int128 *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // er8
  char *v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v18 = a2;
  v6 = __errno_location();
  v8 = off_614318;
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
      v8 = (__int128 *)sub_409360(0LL, v10);
      off_614318 = v8;
      *v8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      off_614318 = (__int128 *)sub_409360(off_614318, v10);
      v8 = off_614318;
    }
    memset(&v8[dword_614330], 0, 16LL * ((int)a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v19 = *v11;
  v13 = sub_4072B0(v12, *v11, v18, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v16 = *(_DWORD *)v5;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_4072B0(v15, v14, v18, v4, v16, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_408A00(__int64 a1, int a2, char *a3)
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
  return sub_4084E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408A00(__int64 a1, int a2, char *a3)
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
  return sub_4084E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408A70(__int64 a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_4084E0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_408A70(__int64 a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_4084E0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_408B00(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_6145D0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_6145A0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6145B0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_6145C0);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_4084E0(0LL, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_408B80(char *a1)
{
  return sub_408B00(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_408BB0(__int64 a1, int a2, char *a3)
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
  return sub_4084E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408BB0(__int64 a1, int a2, char *a3)
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
  return sub_4084E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408C20(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_6145A0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_6145B0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6145C0);
  v9 = qword_6145D0;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_4084E0(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_408D30(char *a1)
{
  return sub_4084E0(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6142E0);
}

__int64 __fastcall sub_408D50(char a1)
{
  return sub_40AAA0(a1);
}

__int64 __fastcall sub_408D60(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_408D60(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_409160(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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

void *__fastcall sub_409360(void *a1, size_t a2)
{
  void *result; // rax
  __int64 v3; // rdx

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
    a3 = 6148914691236517203LL;
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

void *__fastcall sub_409500(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_409300(n, n);
  return memcpy(v2, src, n);
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
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r13
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

  v7 = a4;
  v8 = a3;
  v9 = a6;
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
    if ( v20 >= v8 && v20 <= v7 )
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
  v14 = sub_408D30(a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", v9, v14);
  return v20;
}

__int64 __fastcall sub_409680(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_409590(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_4096B0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **v5; // rbx
  int v6; // ebp
  const char *v7; // r14
  int *v8; // rax
  int *v9; // r13
  __int64 v10; // rax
  char *v11; // r15
  __int64 v12; // rbp
  unsigned int v13; // er12
  int v14; // er13
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
  int v28; // er10
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
  __int64 *v44; // [rsp+0h] [rbp-58h]
  char *endptr; // [rsp+18h] [rbp-40h]

  v44 = a4;
  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoimax");
  v5 = a2;
  v6 = a3;
  if ( !a2 )
    v5 = &endptr;
  v7 = a5;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = __strtol_internal(nptr, v5, v6, 0);
  v11 = *v5;
  v12 = v10;
  if ( *v5 == nptr )
  {
    if ( !v7 )
      return 4;
    v14 = (unsigned __int8)*v11;
    v13 = 4;
    if ( !(_BYTE)v14 )
      return v13;
    v12 = 1LL;
    v13 = 0;
    if ( !strchr(v7, (char)v14) )
      return 4;
LABEL_19:
    v18 = 142129060940101LL;
    if ( !_bittest64(&v18, (unsigned int)(v14 - 69)) || !strchr(v7, 48) )
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
        switch ( (_BYTE)v14 )
        {
          case 0x42:
            v16 = (int)v16;
            if ( v12 < -9007199254740992LL )
              goto LABEL_46;
            if ( v12 > 0x1FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 10;
            break;
          case 0x45:
            v32 = v17;
            v16 = (int)v16;
            v33 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_67;
          case 0x47:
          case 0x67:
            v35 = v17;
            v16 = (int)v16;
            v36 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_74;
          case 0x4B:
          case 0x6B:
            v21 = v17;
            v16 = (int)v16;
            v22 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_38;
          case 0x4D:
          case 0x6D:
            v21 = v17;
            v16 = (int)v16;
            v24 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_43;
          case 0x50:
            v25 = v17;
            v16 = (int)v16;
            v26 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_53;
          case 0x54:
          case 0x74:
            v29 = v17;
            v16 = (int)v16;
            v30 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_60;
          case 0x59:
            v38 = v17;
            v16 = (int)v16;
            v39 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_81;
          case 0x5A:
            v41 = v17;
            v16 = (int)v16;
            v42 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_88;
          case 0x62:
            v16 = (int)v16;
            goto LABEL_48;
          case 0x63:
            v16 = (int)v16;
            break;
          case 0x77:
            v16 = (int)v16;
            if ( v12 < -4611686018427387904LL )
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
        *v5 = v20;
        if ( *v20 )
          v13 |= 2u;
        goto LABEL_9;
      }
      if ( v19 != 66 )
      {
        switch ( (_BYTE)v14 )
        {
          case 0x45:
            v16 = 1LL;
            v32 = 1024LL;
            v33 = -9007199254740992LL;
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
          case 0x46:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4C:
          case 0x4E:
          case 0x4F:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x5B:
          case 0x5C:
          case 0x5D:
          case 0x5E:
          case 0x5F:
          case 0x60:
          case 0x61:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6C:
          case 0x6E:
          case 0x6F:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
            goto LABEL_27;
          case 0x47:
          case 0x67:
            v16 = 1LL;
            v35 = 1024LL;
            v36 = -9007199254740992LL;
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
          case 0x4B:
          case 0x6B:
            v16 = 1LL;
            v21 = 1024LL;
            v22 = -9007199254740992LL;
LABEL_38:
            if ( v12 < v22 )
              goto LABEL_46;
            v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
            goto LABEL_40;
          case 0x4D:
          case 0x6D:
            v16 = 1LL;
            v21 = 1024LL;
            v24 = -9007199254740992LL;
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
          case 0x50:
            v16 = 1LL;
            v25 = 1024LL;
            v26 = -9007199254740992LL;
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
          case 0x54:
          case 0x74:
            v16 = 1LL;
            v29 = 1024LL;
            v30 = -9007199254740992LL;
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
          case 0x59:
            v16 = 1LL;
            v38 = 1024LL;
            v39 = -9007199254740992LL;
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
          case 0x5A:
            v16 = 1LL;
            v41 = 1024LL;
            v42 = -9007199254740992LL;
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
          case 0x62:
            v16 = 1LL;
LABEL_48:
            if ( v12 < -18014398509481984LL )
              goto LABEL_46;
            if ( v12 > 0x3FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 9;
            break;
          case 0x63:
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
  if ( v7 )
  {
    v14 = (unsigned __int8)*v11;
    if ( (_BYTE)v14 )
    {
      if ( !strchr(v7, (char)v14) )
      {
LABEL_27:
        v13 |= 2u;
        *v44 = v12;
        return v13;
      }
      goto LABEL_19;
    }
  }
LABEL_9:
  *v44 = v12;
  return v13;
}

__int64 __fastcall sub_409E00(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **v5; // rbx
  int v6; // ebp
  const char *v7; // r14
  int *v8; // rax
  int *v9; // r13
  __int64 v10; // rax
  char *v11; // r15
  __int64 v12; // rbp
  unsigned int v13; // er12
  int v14; // er13
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
  int v28; // er10
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
  __int64 *v44; // [rsp+0h] [rbp-58h]
  char *endptr; // [rsp+18h] [rbp-40h]

  v44 = a4;
  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtol");
  v5 = a2;
  v6 = a3;
  if ( !a2 )
    v5 = &endptr;
  v7 = a5;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = strtol(nptr, v5, v6);
  v11 = *v5;
  v12 = v10;
  if ( *v5 == nptr )
  {
    if ( !v7 )
      return 4;
    v14 = (unsigned __int8)*v11;
    v13 = 4;
    if ( !(_BYTE)v14 )
      return v13;
    v12 = 1LL;
    v13 = 0;
    if ( !strchr(v7, (char)v14) )
      return 4;
LABEL_19:
    v18 = 142129060940101LL;
    if ( !_bittest64(&v18, (unsigned int)(v14 - 69)) || !strchr(v7, 48) )
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
        switch ( (_BYTE)v14 )
        {
          case 0x42:
            v16 = (int)v16;
            if ( v12 < -9007199254740992LL )
              goto LABEL_46;
            if ( v12 > 0x1FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 10;
            break;
          case 0x45:
            v32 = v17;
            v16 = (int)v16;
            v33 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_67;
          case 0x47:
          case 0x67:
            v35 = v17;
            v16 = (int)v16;
            v36 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_74;
          case 0x4B:
          case 0x6B:
            v21 = v17;
            v16 = (int)v16;
            v22 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_38;
          case 0x4D:
          case 0x6D:
            v21 = v17;
            v16 = (int)v16;
            v24 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_43;
          case 0x50:
            v25 = v17;
            v16 = (int)v16;
            v26 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_53;
          case 0x54:
          case 0x74:
            v29 = v17;
            v16 = (int)v16;
            v30 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_60;
          case 0x59:
            v38 = v17;
            v16 = (int)v16;
            v39 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_81;
          case 0x5A:
            v41 = v17;
            v16 = (int)v16;
            v42 = (__int64)0x8000000000000000LL / v17;
            goto LABEL_88;
          case 0x62:
            v16 = (int)v16;
            goto LABEL_48;
          case 0x63:
            v16 = (int)v16;
            break;
          case 0x77:
            v16 = (int)v16;
            if ( v12 < -4611686018427387904LL )
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
        *v5 = v20;
        if ( *v20 )
          v13 |= 2u;
        goto LABEL_9;
      }
      if ( v19 != 66 )
      {
        switch ( (_BYTE)v14 )
        {
          case 0x45:
            v16 = 1LL;
            v32 = 1024LL;
            v33 = -9007199254740992LL;
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
          case 0x46:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4C:
          case 0x4E:
          case 0x4F:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x5B:
          case 0x5C:
          case 0x5D:
          case 0x5E:
          case 0x5F:
          case 0x60:
          case 0x61:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6C:
          case 0x6E:
          case 0x6F:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
            goto LABEL_27;
          case 0x47:
          case 0x67:
            v16 = 1LL;
            v35 = 1024LL;
            v36 = -9007199254740992LL;
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
          case 0x4B:
          case 0x6B:
            v16 = 1LL;
            v21 = 1024LL;
            v22 = -9007199254740992LL;
LABEL_38:
            if ( v12 < v22 )
              goto LABEL_46;
            v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
            goto LABEL_40;
          case 0x4D:
          case 0x6D:
            v16 = 1LL;
            v21 = 1024LL;
            v24 = -9007199254740992LL;
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
          case 0x50:
            v16 = 1LL;
            v25 = 1024LL;
            v26 = -9007199254740992LL;
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
          case 0x54:
          case 0x74:
            v16 = 1LL;
            v29 = 1024LL;
            v30 = -9007199254740992LL;
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
          case 0x59:
            v16 = 1LL;
            v38 = 1024LL;
            v39 = -9007199254740992LL;
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
          case 0x5A:
            v16 = 1LL;
            v41 = 1024LL;
            v42 = -9007199254740992LL;
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
          case 0x62:
            v16 = 1LL;
LABEL_48:
            if ( v12 < -18014398509481984LL )
              goto LABEL_46;
            if ( v12 > 0x3FFFFFFFFFFFFFLL )
              goto LABEL_105;
            v12 <<= 9;
            break;
          case 0x63:
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
  if ( v7 )
  {
    v14 = (unsigned __int8)*v11;
    if ( (_BYTE)v14 )
    {
      if ( !strchr(v7, (char)v14) )
      {
LABEL_27:
        v13 |= 2u;
        *v44 = v12;
        return v13;
      }
      goto LABEL_19;
    }
  }
LABEL_9:
  *v44 = v12;
  return v13;
}

void __fastcall __noreturn sub_40A550(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // er10
  __int64 v8; // rbp
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13; // [rsp+Eh] [rbp-2Ah]
  char v14; // [rsp+Fh] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v7 = a2;
    v8 = a5;
    v9 = (&off_410BE0)[v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_410B70[-v7];
      v14 = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * v7);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, v8);
    abort();
  }
  abort();
}

void __fastcall __noreturn sub_40A550(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // er10
  __int64 v8; // rbp
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13; // [rsp+Eh] [rbp-2Ah]
  char v14; // [rsp+Fh] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v7 = a2;
    v8 = a5;
    v9 = (&off_410BE0)[v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_410B70[-v7];
      v14 = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * v7);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, v8);
    abort();
  }
  abort();
}

__int64 __fastcall sub_40A5E0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15
  unsigned __int64 *v6; // r14
  const char *v7; // r13
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // er12
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
  int v28; // er9
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int base; // [rsp+0h] [rbp-58h]
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h]

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  v5 = a2;
  base = a3;
  v6 = a4;
  v7 = a5;
  if ( !a2 )
    v5 = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( v11[v10] & 0x2000 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = __strtoul_internal(nptr, v5, base, 0);
  if ( *v5 == nptr )
  {
    basea = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
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
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      baseb = *v5;
      v26 = strchr(v7, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_39:
        *v6 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      v19 = 142129060940101LL;
      if ( !_bittest64(&v19, (unsigned int)(v15 - 69)) || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
LABEL_26:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_27;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_27:
          switch ( (_BYTE)v15 )
          {
            case 0x42:
              if ( v13 >> 54 )
                goto LABEL_37;
              v13 <<= 10;
              break;
            case 0x45:
              goto LABEL_70;
            case 0x47:
            case 0x67:
              goto LABEL_76;
            case 0x4B:
            case 0x6B:
              goto LABEL_36;
            case 0x4D:
            case 0x6D:
              goto LABEL_29;
            case 0x50:
              goto LABEL_64;
            case 0x54:
            case 0x74:
              goto LABEL_58;
            case 0x59:
              goto LABEL_52;
            case 0x5A:
              goto LABEL_46;
            case 0x62:
              goto LABEL_43;
            case 0x63:
              break;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_37;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_39;
          }
LABEL_32:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (_BYTE)v15 )
          {
            case 0x45:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_70:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_50;
            case 0x46:
            case 0x48:
            case 0x49:
            case 0x4A:
            case 0x4C:
            case 0x4E:
            case 0x4F:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x5B:
            case 0x5C:
            case 0x5D:
            case 0x5E:
            case 0x5F:
            case 0x60:
            case 0x61:
            case 0x64:
            case 0x65:
            case 0x66:
            case 0x68:
            case 0x69:
            case 0x6A:
            case 0x6C:
            case 0x6E:
            case 0x6F:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
              goto LABEL_39;
            case 0x47:
            case 0x67:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_76:
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
              goto LABEL_32;
            case 0x4B:
            case 0x6B:
              v22 = 1;
              v23 = 1024LL;
LABEL_36:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_32;
              goto LABEL_37;
            case 0x4D:
            case 0x6D:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_29:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_37;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 0x50:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_64:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_50;
            case 0x54:
            case 0x74:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_58:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_50;
            case 0x59:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_52:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_50;
            case 0x5A:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_46:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_50:
              v14 |= v28;
              break;
            case 0x62:
              v22 = 1;
LABEL_43:
              if ( v13 >> 55 )
              {
LABEL_37:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 0x63:
              v22 = 1;
              goto LABEL_32;
            default:
              goto LABEL_26;
          }
          goto LABEL_32;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_27;
    }
  }
LABEL_13:
  *v6 = v13;
  return v14;
}

int __fastcall sub_40AA20(FILE *stream)
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
  if ( !(unsigned int)sub_40ABE0(stream) )
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

__int64 __fastcall sub_40AAA0(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_6145D8 < 0 )
    {
      v3 = sub_40AAA0(a1);
      if ( v3 >= 0 && dword_6145D8 == -1 )
      {
LABEL_8:
        v5 = fcntl((unsigned __int8)v3, 1);
        if ( v5 < 0 || fcntl((unsigned __int8)v3, 2, v5 | 1u) == -1 )
        {
          v6 = __errno_location();
          v7 = v3;
          v3 = -1;
          v8 = *v6;
          v9 = v6;
          close(v7);
          *v9 = v8;
        }
        return (unsigned int)v3;
      }
    }
    else
    {
      v3 = fcntl(a1, 1030, (unsigned int)a3);
      if ( v3 >= 0 || *__errno_location() != 22 )
      {
        dword_6145D8 = 1;
      }
      else
      {
        v3 = sub_40AAA0(a1);
        if ( v3 >= 0 )
        {
          dword_6145D8 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_40ABE0(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_40AC20(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_40AC20(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_40AC80(__int64 a1, int *a2)
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

__int64 __fastcall sub_40AD60(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_40B380(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_40AC80(a2, a7);
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
        sub_40AC80((__int64)v11, a7);
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
            return (unsigned int)sub_40AD60(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_40AD60(a1, v11, v12, v45, v46, a6, a7, v8, 4262769LL);
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
        return (unsigned int)sub_40AD60(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_40B950(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
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

__int64 __fastcall sub_40B9B0(int a1, __int64 a2, char *a3)
{
  return sub_40B950(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40B9D0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40B950(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40B9F0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40B380(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40BA10(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40B950(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40BA30(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40B380(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40BA50(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch]

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
    *v5 = (unsigned __int8)*v6;
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
    v2 = 1;
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
  int v2; // er13
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

_QWORD *__fastcall sub_40BBA0(void *src)
{
  void *v1; // r12
  size_t v2; // rax
  __int64 v3; // rdi
  size_t v4; // rbp
  char *v5; // rax
  _BYTE *v6; // rbx
  _QWORD *result; // rax

  if ( src )
  {
    v1 = src;
    v2 = strlen((const char *)src);
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
      memcpy(v5 + 9, v1, v4);
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
  char *v2; // r12
  __int64 *v3; // rbp
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rax
  size_t v8; // r15
  char *v9; // rax
  _QWORD *v10; // rax

  v2 = *(char **)(a2 + 48);
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
  char *v2; // rbp
  _QWORD *v3; // rbx
  int *v5; // rbp
  int v6; // er12

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
  struct tm *v3; // rbx
  _QWORD *v4; // r13

  if ( !a1 )
    return gmtime_r(a2, a3);
  v3 = a3;
  v4 = (_QWORD *)sub_40BDB0((__int64)a1);
  if ( v4 )
  {
    if ( localtime_r(a2, v3) && (unsigned __int8)sub_40BC30(a1, (unsigned __int64)v3) )
    {
      if ( v4 == (_QWORD *)1 || (unsigned __int8)sub_40BB50(v4) )
        return v3;
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
  time_t result; // rax
  int v4; // eax
  time_t timer; // [rsp+8h] [rbp-60h]
  struct tm tp; // [rsp+10h] [rbp-58h]

  if ( !a1 )
    return sub_40C050(a2);
  v2 = (_QWORD *)sub_40BDB0((__int64)a1);
  if ( !v2 )
    goto LABEL_20;
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
    result = timer;
  else
LABEL_20:
    result = -1LL;
  return result;
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

const char *sub_40C0D0()
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

__int64 __fastcall sub_40C640(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // er10
  int v11; // er12

  v10 = (unsigned __int64)(a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (a6 >> 2) + 475 - ((a6 & 3) == 0);
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

__int64 __fastcall sub_40C760(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int *a7)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // of
  __int64 result; // rax

  v7 = a6;
  if ( !a7
    || (v8 = sub_40C640(a1, a2, a3, a4, a5, a7[5], a7[7], a7[2], a7[1], *a7),
        v9 = __OFADD__(v7, v8),
        result = v7 + v8,
        v9) )
  {
    if ( v7 < 0 )
    {
      if ( v7 >= -9223372036854775806LL )
        result = 0x8000000000000000LL;
      else
        result = v7 + 1;
    }
    else
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      if ( v7 > 9223372036854775805LL )
        result = v7 - 1;
    }
  }
  return result;
}

__int64 __fastcall sub_40C800(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v9 = *a2;
  result = a1(&v9, a3);
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
        v9 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        result = a1(&v9, v3);
        if ( !result )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !result && v6 )
      {
        v9 = v6;
        result = a1(&v9, v3);
      }
    }
  }
  return result;
}

__int64 __fastcall sub_40C8C0(int *a1, __int64 (__fastcall *a2)(__int64 *, __int64), _QWORD *a3)
{
  int *v3; // r14
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edi
  _BOOL4 v7; // edx
  __int64 v8; // rbx
  int v9; // er12
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  int v14; // er12
  __int64 v15; // r14
  int *v16; // rax
  __int64 v17; // r15
  __int64 result; // rax
  bool v19; // dl
  __m128i *v20; // r14
  int v21; // esi
  __int64 v22; // rdx
  bool v23; // of
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rdx
  int i; // er13
  int v29; // er12
  int v30; // er15
  int v31; // [rsp+Ch] [rbp-10Ch]
  __int64 (__fastcall *v32)(__int64 *, __int64); // [rsp+10h] [rbp-108h]
  int v33; // [rsp+18h] [rbp-100h]
  int v34; // [rsp+1Ch] [rbp-FCh]
  int v35; // [rsp+28h] [rbp-F0h]
  _QWORD *v36; // [rsp+30h] [rbp-E8h]
  __int64 v37; // [rsp+38h] [rbp-E0h]
  int v38; // [rsp+40h] [rbp-D8h]
  int v39; // [rsp+44h] [rbp-D4h]
  __m128i *v40; // [rsp+48h] [rbp-D0h]
  __int64 v41; // [rsp+50h] [rbp-C8h]
  __int64 v42; // [rsp+58h] [rbp-C0h]
  __int128 v43; // [rsp+60h] [rbp-B8h]
  __int128 v44; // [rsp+70h] [rbp-A8h]
  __int128 v45; // [rsp+80h] [rbp-98h]
  __int64 v46; // [rsp+90h] [rbp-88h]
  __int64 v47; // [rsp+A0h] [rbp-78h]
  int v48; // [rsp+C0h] [rbp-58h]

  v3 = a1;
  v32 = a2;
  v4 = a1[3];
  v38 = *a1;
  v36 = a3;
  v31 = a1[1];
  v5 = a1[2];
  v6 = a1[4];
  v33 = v5;
  v35 = v3[8];
  v7 = 0;
  v8 = v3[5] + (__int64)(int)(v6 / 12 - ((unsigned int)(v6 % 12) >> 31));
  if ( !(v8 & 3) )
  {
    v7 = 1;
    if ( v8 == 100 * (v8 / 100) )
      v7 = ((v8 / 100) & 3) == 1;
  }
  v9 = 59;
  v10 = 6;
  v11 = (unsigned __int16)word_411100[13LL * v7 + (((v6 % 12) >> 31) & 0xC) + v6 % 12] - 1 + v4;
  if ( v38 <= 59 )
    v9 = v38;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v34 = v12;
  v39 = -(int)*v36;
  v13 = sub_40C640(v8, v11, v33, v31, v12, 70, 0, 0, 0, v39);
  v37 = v13;
  v41 = v13;
  v40 = (__m128i *)v3;
  v14 = 0;
  v15 = v13;
  while ( 1 )
  {
    v16 = (int *)sub_40C800(v32, &v41, (__int64)&v43);
    v17 = v41;
    result = sub_40C760(v8, v11, v33, v31, v34, v41, v16);
    if ( v17 == result )
      break;
    if ( v17 == v13 && v17 != v15 )
    {
      if ( (int)v45 < 0 )
        goto LABEL_17;
      v19 = (_DWORD)v45 != 0;
      if ( v35 < 0 )
      {
        if ( v19 >= v14 )
        {
LABEL_17:
          v20 = v40;
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
    v14 = v45 != 0;
  }
  v20 = v40;
  if ( (v35 == 0) != ((_DWORD)v45 == 0) && v35 >= 0 && (int)v45 >= 0 )
  {
    for ( i = 601200; i != 269337600; i += 601200 )
    {
      v29 = 2;
      v30 = -i;
      v42 = result + -i;
      if ( !__OFADD__(result, -i) )
      {
LABEL_35:
        sub_40C800(v32, &v42, (__int64)&v47);
        if ( (v35 == 0) == (v48 == 0) || v48 < 0 )
        {
          v41 = sub_40C760(v8, v11, v33, v31, v34, v42, (int *)&v47);
          sub_40C800(v32, &v41, (__int64)&v43);
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
          goto LABEL_35;
      }
    }
  }
LABEL_18:
  v21 = v43;
  *v36 = result - (v37 + v39);
  if ( v21 == v38 )
    goto LABEL_22;
  v22 = ((v38 <= 0) & (unsigned __int8)(v21 == 60)) - (__int64)v34 + v38;
  v23 = __OFADD__(v22, result);
  v24 = v22 + result;
  v41 = v24;
  if ( !v23 )
  {
    v47 = v24;
    if ( v32(&v47, (__int64)&v43) )
    {
      result = v41;
LABEL_22:
      v25 = _mm_load_si128((const __m128i *)&v44);
      v26 = _mm_load_si128((const __m128i *)&v45);
      v27 = v46;
      *v20 = _mm_load_si128((const __m128i *)&v43);
      v20[1] = v25;
      v20[2] = v26;
      v20[3].m128i_i64[0] = v27;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40CD00(int *a1)
{
  tzset();
  return sub_40C8C0(a1, (__int64 (__fastcall *)(__int64 *, __int64))localtime_r, &unk_614628);
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
  if ( &unk_614268 )
    v1 = (void *)unk_614268;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40CDA8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_613E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
