__int64 __fastcall main(signed int a1, char **a2, char **a3)
{
  __int64 v3; // r15@1
  char **v4; // r12@1
  signed int v5; // ebp@1
  char *v6; // rdi@1
  __int64 v7; // rax@2
  signed __int64 v8; // rbx@3
  _BYTE *v9; // r13@3
  unsigned int v10; // er14@3
  int v11; // eax@4
  char v12; // dl@4
  __int64 v13; // rdx@6
  void *v14; // rdi@10
  char *v15; // rax@11
  int v16; // eax@11
  char *v17; // rax@19
  char *v18; // rax@23
  char *v19; // rax@30
  char *v20; // rax@34
  __int64 v21; // rdx@35
  char *v22; // rax@40
  signed __int64 v23; // rcx@47
  _BYTE *v24; // rax@48
  char *v25; // rax@56
  char v26; // di@58
  char **v27; // rax@67
  int v28; // esi@67
  char *v29; // rcx@68
  __int64 v30; // rdx@68
  signed __int64 v31; // rbx@72
  __int64 v32; // rsi@73
  __int64 result; // rax@75
  char *v34; // rbx@87
  int *v35; // rax@87
  const char *v36; // rax@90
  __int64 v37; // rax@96
  __int64 v38; // rbx@96
  char *v39; // rax@96
  char *v40; // rax@97
  char *v41; // rax@98
  char *v42; // rax@99
  signed __int64 v43; // [sp+0h] [bp-58h]@0
  __int64 v44; // [sp+8h] [bp-50h]@0
  unsigned int v45; // [sp+14h] [bp-44h]@4
  unsigned __int64 v46; // [sp+18h] [bp-40h]@1

  v3 = 0LL;
  v4 = a2;
  v5 = a1;
  v6 = *a2;
  v46 = 0LL;
  sub_407110(v6, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40CD90(
    sub_4053D0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  if ( v5 > 1 )
  {
    LODWORD(v7) = sub_409300(8LL * (v5 - 1));
    v3 = v7;
  }
  BYTE7(v44) = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  BYTE6(v44) = 0;
  BYTE5(v44) = 0;
  while ( 1 )
  {
    v45 = -1;
    v11 = sub_40B9D0((unsigned int)v5, a2, "-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:", &off_40EBE0, &v45);
    v12 = v11;
    if ( v11 == -1 )
      break;
    if ( (unsigned int)(v11 - 48) <= 9 )
    {
      v23 = v8 + 1;
      if ( v8 + 1 >= v46 )
      {
        LODWORD(v44) = v11;
        v43 = v8 + 1;
        LODWORD(v24) = sub_409460(v9, &v46);
        v12 = v44;
        v23 = v8 + 1;
        v9 = v24;
      }
      v9[v8] = v12;
      v8 = v23;
      v9[v23] = 0;
    }
    else
    {
      v13 = (unsigned int)(v11 + 131);
      switch ( (_DWORD)v13 )
      {
        case 0x104:
          if ( !nptr )
            goto LABEL_97;
          if ( (unsigned __int8)sub_402820(v45, 0LL, nptr) )
            goto LABEL_9;
          LODWORD(v37) = sub_408D30(nptr);
          v38 = v37;
          v39 = dcgettext(0LL, "invalid page range %s", 5);
          error(1, 0, v39, v38, v43, v44);
LABEL_97:
          v40 = dcgettext(0LL, "'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument", 5);
          error(1, 0, v40, v43, v44);
          goto LABEL_98;
        case 0x103:
          v8 = 0LL;
          sub_402950(nptr, a2, v13);
          v14 = v9;
          v9 = 0LL;
          free(v14);
          v46 = 0LL;
          continue;
        case 0xFA:
          v15 = dcgettext(0LL, "'-w PAGE_WIDTH' invalid number of characters", 5);
          v16 = sub_409680(nptr, 1LL, 0x7FFFFFFFLL, "", v15, 0LL);
          BYTE5(v44) = byte_61443D;
          BYTE6(v44) = byte_61443D;
          if ( byte_61443D )
            goto LABEL_9;
          dword_6142AC = v16;
          v8 = 0LL;
          BYTE6(v44) = 1;
          BYTE5(v44) = 1;
          continue;
        case 0xF9:
          byte_6143EA = 1;
          v8 = 0LL;
          continue;
        case 0xF7:
          byte_6142B5 = 0;
          v8 = 0LL;
          byte_61444A = 1;
          continue;
        case 0xF6:
          BYTE5(v44) = byte_6143E0;
          BYTE7(v44) = byte_6143E0;
          if ( byte_6143E0 )
            goto LABEL_9;
          if ( nptr )
          {
            sub_402920();
            v8 = 0LL;
            BYTE7(v44) = 1;
            BYTE5(v44) = 1;
          }
          else
          {
            BYTE7(v44) = 1;
            v8 = 0LL;
            BYTE5(v44) = 1;
          }
          continue;
        case 0xF5:
          byte_6143E1 = 1;
          v8 = 0LL;
          continue;
        case 0xF2:
          v8 = 0LL;
          v17 = dcgettext(0LL, "'-o MARGIN' invalid line offset", 5);
          dword_61442C = sub_409680(nptr, 0LL, 0x7FFFFFFFLL, "", v17, 0LL);
          continue;
        case 0xF1:
          byte_6143FC = 1;
          if ( !nptr )
            goto LABEL_9;
          v8 = 0LL;
          sub_4052E0(nptr);
          continue;
        case 0xF0:
          byte_61444F = 1;
          v8 = 0LL;
          byte_6142B4 = 0;
          continue;
        case 0xEF:
          v8 = 0LL;
          v18 = dcgettext(0LL, "'-l PAGE_LENGTH' invalid number of lines", 5);
          dword_6142B0 = sub_409680(nptr, 1LL, 0x7FFFFFFFLL, "", v18, 0LL);
          continue;
        case 0xEC:
          if ( nptr )
            sub_4052E0(nptr);
          byte_614434 = 1;
          v8 = 0LL;
          continue;
        case 0xEB:
          v8 = 0LL;
          qword_6143C8 = (__int64)nptr;
          continue;
        case 0xD6:
          byte_6143E0 = 1;
          off_614270 = "";
          dword_6143DC = 0;
          BYTE7(v44) = 0;
          if ( !nptr )
            goto LABEL_9;
          sub_402920();
          v8 = 0LL;
          continue;
        case 0xD1:
          v8 = 0LL;
          byte_614280 = 0;
          v19 = dcgettext(0LL, "'-N NUMBER' invalid starting line number", 5);
          dword_61427C = sub_409680(nptr, -2147483648LL, 0x7FFFFFFFLL, "", v19, 0LL);
          continue;
        case 0xCD:
          byte_61443C = 1;
          v8 = 0LL;
          continue;
        case 0xC9:
        case 0xE9:
          byte_614447 = 1;
          v8 = 0LL;
          continue;
        case 0xC7:
          v8 = 0LL;
          qword_6143C0 = (__int64)nptr;
          continue;
        case 0x84:
          v20 = nptr;
          if ( qword_614418 || *nptr != 43 )
            goto LABEL_35;
          if ( (unsigned __int8)sub_402820(4294967294LL, 43LL, nptr + 1) )
          {
LABEL_9:
            v8 = 0LL;
          }
          else
          {
            v20 = nptr;
LABEL_35:
            v21 = v10;
            v8 = 0LL;
            ++v10;
            *(_QWORD *)(v3 + 8 * v21) = v20;
          }
          break;
        case 0:
          sub_4091C0((char)stdout);
          exit(0);
          return result;
        case 0xE5:
          byte_614444 = 1;
          v8 = 0LL;
          break;
        case 0xE4:
          byte_614445 = 1;
          v8 = 0LL;
          byte_6142B4 = 0;
          break;
        case 0xDA:
          v8 = 0LL;
          byte_61443D = 1;
          v22 = dcgettext(0LL, "'-W PAGE_WIDTH' invalid number of characters", 5);
          BYTE6(v44) = 0;
          dword_6142AC = sub_409680(nptr, 1LL, 0x7FFFFFFFLL, "", v22, 0LL);
          break;
        case 0xD7:
          byte_6142B5 = 0;
          v8 = 0LL;
          byte_61444A = 0;
          break;
        case 0xE7:
          byte_6143E8 = 1;
          v8 = 0LL;
          break;
        case 0xE6:
          byte_6143E9 = 1;
          v8 = 0LL;
          break;
        case 0xE8:
          if ( nptr )
            sub_4052E0(nptr);
          byte_614435 = 1;
          v8 = 0LL;
          break;
        case 1:
          sub_404DE0(0);
          return result;
        default:
          sub_404DE0(1);
          return result;
      }
    }
  }
  if ( v9 )
  {
    sub_402950(v9, a2, (unsigned int)v11);
    free(v9);
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
      {
LABEL_98:
        v41 = dcgettext(0LL, "cannot specify number of columns when printing in parallel", 5);
        error(1, 0, v41, v43, v44);
LABEL_99:
        v42 = dcgettext(0LL, "cannot specify both printing across and printing in parallel", 5);
        error(1, 0, v42, v43, v44);
        start();
      }
      if ( byte_614445 )
        goto LABEL_99;
    }
    if ( BYTE5(v44) )
    {
      if ( BYTE6(v44) )
      {
        if ( byte_61444F || byte_61444B )
        {
          byte_61443D = 1;
          if ( !BYTE7(v44) )
            goto LABEL_66;
LABEL_83:
          byte_6143E0 = 1;
          goto LABEL_66;
        }
        byte_61443C = 1;
      }
      else if ( byte_6143E0 != 1 && BYTE7(v44) && (byte_61444F || byte_61444B) )
      {
        if ( byte_61443D )
          goto LABEL_83;
        byte_61443C = 1;
        if ( dword_6143DC > 0 )
          goto LABEL_83;
      }
    }
LABEL_66:
    if ( v5 > dword_61433C )
    {
      v27 = &v4[dword_61433C];
      v28 = v10 + v5 - dword_61433C;
      do
      {
        v29 = *v27;
        v30 = v10++;
        ++v27;
        *(_QWORD *)(v3 + 8 * v30) = v29;
      }
      while ( v10 != v28 );
      dword_61433C = v5;
    }
    if ( v10 )
    {
      if ( v26 )
      {
        sub_403E40(v10, v3);
      }
      else
      {
        v31 = v3 + 8LL * (v10 - 1) + 8;
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
    error(1, *v35, v34, v43, v44);
LABEL_88:
    if ( !getenv("POSIXLY_CORRECT") || (unsigned __int8)sub_405590(2LL) )
      v36 = "%Y-%m-%d %H:%M";
    else
      v36 = "%b %e %H:%M %Y";
    qword_6143C0 = (__int64)v36;
  }
}

int sub_4025FB()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_40261A()
{
  return 0;
}

int sub_402651()
{
  int result; // eax@4

  if ( !byte_614368 )
  {
    while ( qword_614370 < (unsigned __int64)(((&unk_613E48 - (_UNKNOWN *)&qword_613E40) >> 3) - 1) )
      (*(&qword_613E40 + ++qword_614370))();
    result = sub_4025FB();
    byte_614368 = 1;
  }
  return result;
}

int sub_4026A8()
{
  return sub_40261A();
}

__int64 sub_4026B0()
{
  __int64 result; // rax@1
  char *v1; // rdx@1
  __int64 v2; // rcx@2
  char *v3; // rcx@2

  result = (unsigned int)dword_614298;
  v1 = (char *)qword_614478;
  if ( dword_614298 )
  {
    v2 = (unsigned int)(result - 1);
    result = 0LL;
    v3 = (char *)qword_614478 + 64 * (v2 + 1);
    do
    {
      if ( *((_DWORD *)v1 + 4) <= 1u || byte_6142B4 && *((_DWORD *)v1 + 11) > 0 && *((_DWORD *)v1 + 12) > 0 )
        result = (unsigned int)(result + 1);
      v1 += 64;
    }
    while ( v1 != v3 );
  }
  return result;
}

char *sub_402710()
{
  char *result; // rax@1
  _DWORD *v1; // rdi@1
  __int64 v2; // rdx@2
  int v3; // ecx@2
  char v4; // si@2
  char *v5; // rdx@2

  result = (char *)(unsigned int)dword_614298;
  v1 = qword_614478;
  if ( dword_614298 )
  {
    v2 = (unsigned int)((_DWORD)result - 1);
    v3 = dword_614410;
    result = (char *)qword_614478;
    v4 = 0;
    v5 = (char *)qword_614478 + 64 * (v2 + 1);
    do
    {
      if ( *((_DWORD *)result + 4) == 2 )
      {
        *((_DWORD *)result + 4) = 0;
        ++v3;
        v4 = 1;
      }
      result += 64;
    }
    while ( result != v5 );
    if ( v4 )
      dword_614410 = v3;
  }
  if ( byte_6142B4 )
  {
    result = (char *)(v1[4] != 3);
    dword_614410 = v1[4] != 3;
  }
  return result;
}

int sub_4027F0()
{
  char *v0; // rax@1
  __int64 v1; // rdx@1

  v0 = dcgettext(0LL, "integer overflow", 5);
  error(1, 0, v0);
  return sub_402820(1LL, 0LL, v1);
}

signed __int64 __fastcall sub_402820(unsigned int a1, char a2, char *a3)
{
  char *v3; // rbx@1
  unsigned int v4; // eax@1
  char v5; // al@4
  __int64 v7; // [sp+8h] [bp-40h]@0
  unsigned __int64 v8; // [sp+10h] [bp-38h]@0

  v3 = a3;
  v4 = sub_40A5E0(a3);
  if ( v4 & 0xFFFFFFFD )
    goto LABEL_15;
  if ( (char *)v7 == v3 || !v8 )
    return 0LL;
  v5 = *(_BYTE *)v7;
  if ( *(_BYTE *)v7 != 58 )
    goto LABEL_5;
  v4 = sub_40A5E0((char *)(v7 + 1));
  if ( v4 )
LABEL_15:
    sub_40A550(v4, a1, (unsigned int)a2, &off_40EBE0, v3);
  if ( v7 == v7 + 1 || v8 > 0xFFFFFFFFFFFFFFFFLL )
    return 0LL;
  v5 = *(_BYTE *)v7;
LABEL_5:
  if ( !v5 )
  {
    qword_614418 = v8;
    qword_614290 = -1LL;
    return 1LL;
  }
  return 0LL;
}

int __fastcall sub_402920(const char *a1, __int64 a2)
{
  size_t v2; // rax@1
  __int64 v3; // rdx@3

  v2 = strlen(a1);
  if ( v2 > 0x7FFFFFFF )
  {
    sub_4027F0();
    LODWORD(v2) = sub_402950(a1, a2, v3);
  }
  else
  {
    off_614270 = (void *)a1;
    dword_6143DC = v2;
  }
  return v2;
}

int __fastcall sub_402950(__int64 a1)
{
  char *v1; // rax@1
  int result; // eax@1

  v1 = dcgettext(0LL, "invalid number of columns", 5);
  result = sub_409680(a1, 1LL, 0x7FFFFFFFLL, "", v1, 0LL);
  byte_61444B = 1;
  dword_614298 = result;
  return result;
}

void __usercall sub_4029A0(__int64 a1@<rbx>, __int64 a2@<rdi>)
{
  __int64 v2; // rbx@2
  FILE *v3; // rdi@2
  char *v4; // rax@5
  char *v5; // rdx@6
  int v6; // ecx@7
  __int64 v7; // rax@14
  __int64 v8; // rbx@14
  int *v9; // rax@14
  __int64 v10; // rax@16
  __int64 v11; // rbx@16
  int *v12; // rax@16
  __int64 v13; // [sp-8h] [bp-8h]@2

  if ( *(_DWORD *)(a2 + 16) == 3 )
    return;
  v13 = a1;
  v2 = a2;
  v3 = *(FILE **)a2;
  if ( v3->_flags & 0x20 )
  {
    LODWORD(v10) = sub_408BB0(0LL, 3LL, *(_QWORD *)(v2 + 8));
    v11 = v10;
    v12 = __errno_location();
    error(1, *v12, "%s", v11, v13);
    sub_402AB0();
    return;
  }
  if ( fileno(v3) && (unsigned int)sub_40AA20(*(FILE **)v2) )
  {
    LODWORD(v7) = sub_408BB0(0LL, 3LL, *(_QWORD *)(v2 + 8));
    v8 = v7;
    v9 = __errno_location();
    error(1, *v9, "%s", v8, v13);
    return;
  }
  if ( byte_61444F )
  {
    *(_DWORD *)(v2 + 16) = 3;
    *(_DWORD *)(v2 + 48) = 0;
    goto LABEL_12;
  }
  v4 = (char *)qword_614478;
  if ( !dword_614298 )
  {
LABEL_12:
    --dword_614410;
    return;
  }
  v5 = (char *)qword_614478 + 64 * ((unsigned int)(dword_614298 - 1) + 1LL);
  do
  {
    v6 = *((_DWORD *)v4 + 11);
    *((_DWORD *)v4 + 4) = 3;
    if ( !v6 )
      *((_DWORD *)v4 + 12) = 0;
    v4 += 64;
  }
  while ( v4 != v5 );
  --dword_614410;
}

__int64 __fastcall sub_402AB0(_BYTE *a1, int a2)
{
  signed __int64 v2; // rcx@1
  int v3; // er12@1
  _BYTE *v4; // rbx@1
  char *v5; // rdi@1
  _BYTE *v6; // rsi@1
  bool v7; // cf@1
  bool v8; // zf@1
  __int32 v9; // er14@7
  __int64 v10; // rax@8
  __int64 v11; // rax@9
  signed __int64 v12; // r13@9
  void *v13; // rax@9
  void *v14; // rbp@9
  char *v15; // rax@10
  int v16; // ebx@11
  int v17; // ebx@11
  __int64 result; // rax@11
  void *v19; // rax@19
  __int64 v20; // rax@19
  __m128i v21; // [sp+0h] [bp-128h]@7
  char v22; // [sp+10h] [bp-118h]@19
  char v23; // [sp+30h] [bp-F8h]@8
  struct stat stat_buf; // [sp+70h] [bp-B8h]@14

  v2 = 2LL;
  v3 = a2;
  v4 = a1;
  v5 = "-";
  v6 = v4;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( !v2 )
      break;
    v7 = *v6 < (unsigned __int8)*v5;
    v8 = *v6++ == *v5++;
    --v2;
  }
  while ( v8 );
  if ( (!v7 && !v8) == v7 )
  {
    v3 = -1;
    if ( tp.tv_sec )
      goto LABEL_7;
    goto LABEL_13;
  }
  if ( v3 < 0 || __fxstat(1, v3, &stat_buf) )
  {
    if ( tp.tv_sec )
    {
LABEL_7:
      v21 = _mm_load_si128((const __m128i *)&tp);
      v9 = v21.m128i_i32[2];
      goto LABEL_8;
    }
LABEL_13:
    sub_405550(&tp);
    goto LABEL_7;
  }
  v9 = stat_buf.st_mtim.tv_nsec;
  v21.m128i_i64[1] = stat_buf.st_mtim.tv_nsec;
  v21.m128i_i64[0] = stat_buf.st_mtim.tv_sec;
LABEL_8:
  LODWORD(v10) = sub_40BE80(qword_6143B8, &v21, &v23);
  if ( v10 )
  {
    LODWORD(v11) = sub_4070F0(0LL, -1LL, qword_6143C0, &v23, qword_6143B8, (unsigned int)v9);
    v12 = v11 + 1;
    LODWORD(v13) = sub_409300(v11 + 1);
    v14 = v13;
    sub_4070F0(v13, v12, qword_6143C0, &v23, qword_6143B8, (unsigned int)v9);
  }
  else
  {
    LODWORD(v19) = sub_409300(33LL);
    v14 = v19;
    LODWORD(v20) = sub_4055F0(v21.m128i_i64[0], &v22);
    __sprintf_chk(v14, 1LL, 33LL, "%s.%09d", v20, (unsigned int)v9);
  }
  free(qword_6143B0);
  v15 = (char *)qword_6143C8;
  qword_6143B0 = v14;
  if ( !qword_6143C8 )
  {
    v15 = "";
    if ( v3 >= 0 )
      v15 = v4;
  }
  v16 = dword_6142AC;
  qword_6143A8 = (__int64)v15;
  v17 = v16 - (unsigned __int64)sub_405850((char *)v14);
  result = sub_405850((char *)qword_6143A8);
  dword_6143A0 = v17 - result;
  return result;
}

void __fastcall sub_402CA0(int a1)
{
  int v1; // ebx@1
  char *v2; // rax@3

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
  signed int v0; // ebp@1
  int v1; // er12@1
  char *v2; // rax@2
  int v3; // ebx@3
  char v4; // si@4
  char *v5; // rax@4

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
  return (unsigned __int64)v2;
}

int sub_402DD0()
{
  int result; // eax@1
  char *v1; // r12@2
  int v2; // ebp@2
  char *v3; // rbx@3
  int v4; // er14@3
  int v5; // esi@5
  char *v6; // rax@8
  int v7; // edx@11

  result = dword_614430;
  if ( dword_6143D8 <= 0 )
  {
    if ( dword_614430 > 0 )
      result = sub_402D10();
  }
  else
  {
    v1 = (char *)off_614270;
    v2 = dword_6143DC;
    while ( 1 )
    {
      v3 = v1;
      v4 = v2 + (_DWORD)v1;
      while ( v4 - (signed int)v3 > 0 )
      {
        while ( 1 )
        {
          v5 = (unsigned __int8)*v3++;
          if ( (_BYTE)v5 == 32 )
            break;
          if ( result > 0 )
          {
            sub_402D10();
            v5 = (unsigned __int8)*(v3 - 1);
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
          if ( v4 - (signed int)v3 <= 0 )
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

int sub_402EE0()
{
  __int64 v0; // rbx@1
  char *v1; // rax@2
  __int64 v2; // r9@2
  int result; // eax@2
  char *v4; // rax@3
  __int64 v5; // [sp+0h] [bp-138h]@2

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

signed __int64 __fastcall sub_402FE0(char a1)
{
  char *v1; // rbx@1
  __int64 v2; // r9@3
  int v3; // eax@7
  int v4; // esi@7
  signed __int64 result; // rax@7
  unsigned int v6; // edx@8
  int v7; // ecx@14
  char *v8; // rdx@20
  int v9; // eax@23
  char v10; // [sp+Ch] [bp-1Ch]@25
  char v11; // [sp+Dh] [bp-1Bh]@25
  char v12; // [sp+Eh] [bp-1Ah]@25

  v1 = (char *)qword_614398;
  if ( byte_6142A8 == a1 )
  {
    v4 = dword_614424;
    v6 = dword_6142A4 - dword_614424 % dword_6142A4;
    if ( !byte_614435 )
    {
LABEL_9:
      *(_BYTE *)qword_614398 = a1;
      result = 1LL;
      goto LABEL_10;
    }
    if ( dword_6142A4 == dword_614424 % dword_6142A4 )
    {
      result = 0LL;
      goto LABEL_12;
    }
    result = (unsigned int)(dword_6142A4 - dword_614424 % dword_6142A4);
  }
  else
  {
    if ( a1 != 9 )
    {
      if ( HIBYTE((*__ctype_b_loc())[(unsigned __int8)a1]) & 0x40 )
      {
        v9 = dword_614424;
        *v1 = a1;
        v4 = v9 + 1;
        result = 1LL;
        goto LABEL_12;
      }
      if ( byte_6143EA )
        goto LABEL_25;
      if ( byte_6143E9 )
      {
        if ( a1 >= 0 )
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
        __sprintf_chk(&v10, 1LL, 4LL, "%03o", (unsigned __int8)a1, v2);
        v1[1] = v10;
        v1[2] = v11;
        v1[3] = v12;
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
  v8 = (char *)qword_614398 + (unsigned int)(result - 1) + 1;
  do
    *(++v1 - 1) = 32;
  while ( v1 != v8 );
  v6 = result;
LABEL_10:
  if ( (v6 & 0x80000000) == 0 )
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

int __fastcall sub_4031E0(char a1)
{
  char *v1; // rax@8

  if ( byte_614434 )
  {
    if ( a1 == 32 )
    {
      LODWORD(v1) = dword_614430++ + 1;
      return (unsigned __int64)v1;
    }
    if ( dword_614430 > 0 )
      sub_402D10();
    if ( HIBYTE((*__ctype_b_loc())[(unsigned __int8)a1]) & 0x40 )
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
    LODWORD(v1) = __overflow(stdout, (unsigned __int8)a1);
  }
  else
  {
    stdout->_IO_write_ptr = v1 + 1;
    *v1 = a1;
  }
  return (unsigned __int64)v1;
}

void __fastcall sub_403410(_DWORD *a1, _DWORD *a2)
{
  char *v2; // rax@2
  int v3; // ecx@3
  char *v4; // rdx@3

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
      v4 = (char *)qword_614478 + 64 * ((unsigned int)(dword_614298 - 1) + 1LL);
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
  __int64 v2; // r13@1
  _IO_FILE *v3; // rbx@1
  _BYTE *v4; // rax@1
  int v5; // eax@2
  char v6; // bp@4
  char *v7; // rax@17
  char *v8; // rax@20
  char v9; // al@25
  char *v10; // rax@28
  char *v11; // rdx@29
  char *v12; // rax@31
  int v13; // edi@32
  char *v14; // rax@41

  v2 = a1;
  v3 = *(_IO_FILE **)a1;
  v4 = *(_BYTE **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v5 = __uflow(*(_IO_FILE **)a1);
  }
  else
  {
    v3->_IO_read_ptr = v4 + 1;
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
        if ( v13 == 10 )
        {
          sub_403410((_DWORD *)(v2 + 16), (_DWORD *)(v2 + 48));
        }
        else
        {
          ungetc(v13, v3);
          sub_403410((_DWORD *)(v2 + 16), (_DWORD *)(v2 + 48));
        }
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
            v11 = (char *)qword_614478 + 64 * ((unsigned int)(dword_614298 - 1) + 1LL);
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
        sub_4029A0((__int64)v3, a1);
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

int __fastcall sub_4036C0(int (__fastcall **a1)(__int64, signed __int64))
{
  int (__fastcall **v1)(__int64, signed __int64); // rbp@1
  int v2; // eax@1
  char *v3; // rbx@1
  signed __int64 v4; // r12@1
  __int64 v5; // rdi@3
  int result; // eax@5
  int v7; // ebx@10
  int v8; // ebx@11
  int v9; // ecx@15

  v1 = a1;
  v2 = __sprintf_chk(ptr, 1LL, -1LL, "%*d", (unsigned int)dword_614278, (unsigned int)dword_614400);
  ++dword_614400;
  v3 = (char *)ptr + v2 - dword_614278;
  v4 = (signed __int64)&v3[dword_614278 - 1 + 1];
  if ( dword_614278 > 0 )
  {
    do
      (*a1)((unsigned int)*(++v3 - 1), 1LL);
    while ( v3 != (char *)v4 );
  }
  v5 = (unsigned int)byte_614288;
  if ( dword_614298 <= 1 )
  {
    result = (*v1)(v5, 1LL);
    if ( byte_614288 == 9 )
    {
      v9 = dword_61429C - dword_614428 % dword_61429C;
      result = v9 + dword_614428;
      dword_614428 += v9;
    }
  }
  else if ( byte_614288 == 9 )
  {
    result = dword_6143F8 - dword_614278;
    v7 = dword_6143F8 - dword_614278 - 1;
    if ( dword_6143F8 - dword_614278 > 0 )
    {
      do
      {
        v8 = v7 - 1;
        result = (*v1)(32LL, 1LL);
        if ( v8 == -1 )
          break;
        v7 = v8 - 1;
        result = ((int (__fastcall *)(signed __int64))*v1)(32LL);
      }
      while ( v7 != -1 );
    }
  }
  else
  {
    result = (*v1)(v5, 1LL);
  }
  if ( byte_61443D )
  {
    if ( !byte_61444F )
    {
      result = dword_6143F8;
      dword_614424 += dword_6143F8;
    }
  }
  return result;
}

void __fastcall sub_4037E0(__int64 a1)
{
  __int64 v1; // rbx@1
  int v2; // edi@1

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
      sub_4036C0((int (__fastcall **)(__int64, signed __int64))(v1 + 32));
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

signed __int64 __usercall sub_403840@<rax>(_IO_FILE **a1@<rdi>, int a2@<r12d>)
{
  __int64 v2; // rbp@1
  _IO_FILE *v3; // rdi@1
  char *v4; // rax@1
  char *v5; // rbx@2
  int v6; // er13@3
  int v7; // eax@16
  char *v8; // r13@16
  char *v9; // r14@17
  __int64 v10; // rdi@18
  int v11; // edi@19
  int v12; // eax@19
  signed __int64 result; // rax@22
  char *v14; // r13@32
  FILE *v15; // rdi@34
  _BYTE *v16; // rax@34
  int v17; // eax@35
  int v18; // ebx@39
  int v19; // eax@39
  char *v20; // r12@40
  _IO_FILE *v21; // rdi@43
  _BYTE *v22; // rax@43
  unsigned __int64 v23; // rdx@43
  _IO_FILE *v24; // rdi@47
  _BYTE *v25; // rax@47
  int v26; // edi@51
  FILE *v27; // rdi@64
  _BYTE *v28; // rax@64
  int v29; // edi@65

  v2 = (__int64)a1;
  v3 = *a1;
  v4 = v3->_IO_read_ptr;
  if ( v4 >= v3->_IO_read_end )
  {
    v5 = (char *)(unsigned int)__uflow(v3);
  }
  else
  {
    v3->_IO_read_ptr = v4 + 1;
    v5 = (char *)(unsigned __int8)*v4;
  }
  v6 = dword_614424;
  if ( (_DWORD)v5 == 12 )
  {
    v21 = *(_IO_FILE **)v2;
    v22 = *(_BYTE **)(*(_QWORD *)v2 + 8LL);
    v23 = *(_QWORD *)(*(_QWORD *)v2 + 16LL);
    if ( !*(_BYTE *)(v2 + 57) )
      goto LABEL_50;
    if ( (unsigned __int64)v22 >= v23 )
    {
      v5 = (char *)(unsigned int)__uflow(v21);
    }
    else
    {
      v21->_IO_read_ptr = v22 + 1;
      v5 = (char *)*v22;
    }
    if ( (_DWORD)v5 == 10 )
    {
      v24 = *(_IO_FILE **)v2;
      v25 = *(_BYTE **)(*(_QWORD *)v2 + 8LL);
      if ( (unsigned __int64)v25 >= *(_QWORD *)(*(_QWORD *)v2 + 16LL) )
      {
        v5 = (char *)(unsigned int)__uflow(v24);
      }
      else
      {
        v24->_IO_read_ptr = v25 + 1;
        v5 = (char *)*v25;
      }
    }
  }
  *(_BYTE *)(v2 + 57) = 0;
  if ( (_DWORD)v5 == 10 )
    goto LABEL_8;
  if ( (_DWORD)v5 == 12 )
  {
    v21 = *(_IO_FILE **)v2;
    v22 = *(_BYTE **)(*(_QWORD *)v2 + 8LL);
    v23 = *(_QWORD *)(*(_QWORD *)v2 + 16LL);
LABEL_50:
    if ( v23 <= (unsigned __int64)v22 )
    {
      v26 = __uflow(v21);
    }
    else
    {
      v21->_IO_read_ptr = v22 + 1;
      v26 = *v22;
    }
    if ( v26 == 10 )
    {
      byte_61444C = 1;
      if ( !byte_614448 )
        goto LABEL_55;
    }
    else
    {
      ungetc(v26, *(FILE **)v2);
      byte_61444C = 1;
      if ( !byte_614448 )
        goto LABEL_55;
    }
    if ( !byte_6142B4 )
    {
      byte_6143D0 = 1;
      sub_402EE0();
LABEL_57:
      sub_403410((_DWORD *)(v2 + 16), (_DWORD *)(v2 + 48));
      return 1LL;
    }
LABEL_55:
    if ( byte_61444A )
      byte_614449 = 1;
    goto LABEL_57;
  }
  if ( (_DWORD)v5 == -1 )
  {
LABEL_22:
    sub_4029A0((__int64)v5, v2);
    return 1LL;
  }
  a2 = sub_402FE0((char)v5);
LABEL_8:
  if ( byte_61443D && dword_614424 > dword_614438 )
  {
    dword_614424 = v6;
    result = 0LL;
  }
  else
  {
    if ( *(__int64 (__fastcall **)())(v2 + 32) != sub_402790 )
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
          v9 = (char *)qword_614478 + 64 * ((unsigned int)(v7 - 1) + 1LL);
          do
          {
            v10 = (__int64)v8;
            v8 += 64;
            sub_4037E0(v10);
            ++dword_6143D8;
          }
          while ( v9 != v8 );
        }
        v11 = *(_DWORD *)(v2 + 52);
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
    if ( *(_BYTE *)(v2 + 56) )
      sub_4036C0((int (__fastcall **)(__int64, signed __int64))(v2 + 32));
    byte_61444D = 0;
    result = 1LL;
    if ( (_DWORD)v5 != 10 )
    {
      v5 = (char *)qword_614398;
      v14 = (char *)qword_614398 + (unsigned int)(a2 - 1) + 1;
      if ( a2 )
      {
        do
          (*(void (__fastcall **)(_QWORD))(v2 + 32))((unsigned int)*(++v5 - 1));
        while ( v14 != v5 );
      }
      while ( 1 )
      {
        v15 = *(FILE **)v2;
        v16 = *(_BYTE **)(*(_QWORD *)v2 + 8LL);
        if ( (unsigned __int64)v16 >= *(_QWORD *)(*(_QWORD *)v2 + 16LL) )
        {
          v17 = __uflow(v15);
        }
        else
        {
          v15->_IO_read_ptr = v16 + 1;
          v17 = *v16;
        }
        if ( v17 == 10 )
          return 1LL;
        if ( v17 == 12 )
          break;
        if ( v17 == -1 )
          goto LABEL_22;
        v18 = dword_614424;
        v19 = sub_402FE0(v17);
        if ( byte_61443D && dword_614424 > dword_614438 )
        {
          dword_614424 = v18;
          return 0LL;
        }
        v5 = (char *)qword_614398;
        v20 = (char *)qword_614398 + (unsigned int)(v19 - 1) + 1;
        if ( v19 )
        {
          do
            (*(void (__fastcall **)(_QWORD))(v2 + 32))((unsigned int)*(++v5 - 1));
          while ( v5 != v20 );
        }
      }
      v27 = *(FILE **)v2;
      v28 = *(_BYTE **)(*(_QWORD *)v2 + 8LL);
      if ( (unsigned __int64)v28 >= *(_QWORD *)(*(_QWORD *)v2 + 16LL) )
      {
        v29 = __uflow(v27);
      }
      else
      {
        v27->_IO_read_ptr = v28 + 1;
        v29 = *v28;
      }
      if ( v29 != 10 )
        ungetc(v29, *(FILE **)v2);
      goto LABEL_55;
    }
  }
  return result;
}

signed __int64 __fastcall sub_403C80(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // rbp@1
  signed __int64 v3; // rcx@1
  char *v4; // rdi@1
  __int64 v5; // rbx@1
  _BYTE *v6; // rsi@1
  bool v7; // cf@1
  bool v8; // zf@1
  char *v9; // rax@5
  FILE *v10; // rdi@5
  signed __int64 result; // rax@6
  FILE *v12; // rax@7
  unsigned int v13; // ebx@8
  __int64 v14; // rax@10
  __int64 v15; // rbp@10
  int *v16; // rax@10

  v2 = a1;
  v3 = 2LL;
  v4 = "-";
  v5 = a2;
  v6 = v2;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( !v3 )
      break;
    v7 = *v6 < (unsigned __int8)*v4;
    v8 = *v6++ == *v4++;
    --v3;
  }
  while ( v8 );
  if ( (!v7 && !v8) == v7 )
  {
    v9 = dcgettext(0LL, "standard input", 5);
    v10 = stdin;
    byte_614446 = 1;
    *(_QWORD *)(v5 + 8) = v9;
    *(_QWORD *)v5 = v10;
    if ( v10 )
    {
LABEL_6:
      sub_405480(v10, 2LL);
      *(_DWORD *)(v5 + 16) = 0;
      *(_BYTE *)(v5 + 57) = 0;
      ++dword_6143E4;
      return 1LL;
    }
  }
  else
  {
    *(_QWORD *)(v5 + 8) = v2;
    LODWORD(v12) = sub_4054B0(v2, "r");
    v10 = v12;
    *(_QWORD *)v5 = v12;
    if ( v12 )
      goto LABEL_6;
  }
  v13 = (unsigned __int8)byte_6143E1;
  byte_614420 = 1;
  if ( byte_6143E1 )
  {
    result = 0LL;
  }
  else
  {
    LODWORD(v14) = sub_408BB0(v10, 3LL, v2);
    v15 = v14;
    v16 = __errno_location();
    error(0, *v16, "%s", v15);
    result = v13;
  }
  return result;
}

void __fastcall sub_403D80(_IO_FILE **a1)
{
  _IO_FILE **v1; // rbp@1
  _IO_FILE *v2; // rbx@1
  int v3; // eax@2
  char *v4; // rax@5
  char *v5; // rax@8
  int v6; // edi@9

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
  sub_4029A0((__int64)v2, (__int64)a1);
}

signed __int64 __fastcall sub_403E40(int a1, _BYTE **a2)
{
  int v2; // er12@1
  _BYTE **v3; // rbx@1
  signed int v4; // ecx@6
  char *v5; // rax@11
  unsigned int v6; // eax@13
  signed __int64 v7; // rsi@17
  int v8; // edi@18
  int v9; // edx@21
  signed int v10; // eax@23
  signed int v11; // edi@26
  void *v12; // rax@28
  __int64 v13; // rdx@28
  signed __int64 v14; // rdi@28
  void *v15; // rax@30
  __int64 v16; // rbp@30
  signed __int64 v17; // r12@32
  signed __int64 result; // rax@36
  FILE *v19; // rcx@37
  __int64 v20; // r13@39
  char v21; // bp@41
  int v22; // er8@41
  int v23; // er12@43
  char *v24; // r10@43
  signed int v25; // er9@43
  char v26; // r11@43
  int v27; // esi@43
  char *v28; // rdx@43
  signed int v29; // ebx@43
  char v30; // al@43
  unsigned int v31; // edi@44
  void *v32; // rax@44
  signed int v33; // edx@44
  int v34; // er14@44
  int v35; // er13@44
  char *v36; // rbx@71
  int v37; // ecx@73
  int v38; // edx@74
  int v39; // er9@77
  void *v40; // r10@77
  int v41; // ebp@80
  char v42; // r13@82
  void *v43; // rbx@84
  signed int v44; // er14@85
  int v45; // eax@86
  int v46; // eax@88
  int v47; // eax@90
  int v48; // ecx@97
  char *v49; // rax@103
  char *v50; // rax@109
  signed __int64 v51; // rax@115
  char *v52; // rax@124
  char v53; // r8@129
  char *v54; // rax@130
  signed __int64 v55; // rdx@130
  int v56; // eax@132
  int v57; // er13@133
  signed int v58; // ebp@133
  __int64 v59; // r15@133
  int v60; // er14@134
  int v61; // eax@141
  _DWORD *v62; // rsi@143
  _DWORD *v63; // rdx@143
  signed __int64 v64; // rsi@144
  char v65; // r9@147
  int v66; // edi@157
  char *v67; // rsi@157
  int v68; // ecx@157
  int v69; // er11@158
  char *v70; // rax@162
  __int64 v71; // rbx@162
  int v72; // ecx@163
  int j; // ebp@171
  char *v74; // rax@175
  signed __int64 v75; // rdi@179
  void *v76; // rax@181
  char *v77; // rax@182
  signed __int64 v78; // r12@186
  void *v79; // rbx@187
  signed int v80; // er14@187
  int i; // er9@187
  signed int v82; // ebp@189
  int v83; // esi@192
  __int64 v84; // rdi@192
  signed int v85; // ebp@196
  int v86; // esi@199
  __int64 v87; // rdi@199
  char *v88; // rax@201
  char *v89; // rdx@202
  unsigned int v90; // ebx@209
  int v91; // er12@210
  int v92; // ebp@212
  void *v93; // rax@215
  void *v94; // rax@217
  void *v95; // rax@219
  char *v96; // rax@220
  FILE *v97; // rax@220
  __int64 v98; // rax@221
  signed __int64 v99; // rdx@221
  signed __int64 v100; // rbp@222
  int v101; // eax@225
  char *v102; // rax@229
  char *v103; // rax@239
  signed int v104; // [sp+8h] [bp-40h]@133
  int v105; // [sp+Ch] [bp-3Ch]@129

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
    v103 = dcgettext(0LL, "page width too narrow", 5);
    v7 = 0LL;
    v14 = 1LL;
    error(1, 0, v103);
    goto LABEL_240;
  }
  if ( (_BYTE)v7 )
  {
    free(ptr);
    v75 = dword_614278 + 1LL;
    if ( (unsigned int)dword_614278 <= 0xB )
      v75 = 12LL;
    LODWORD(v76) = sub_409300(v75);
    ptr = v76;
  }
  free(qword_614398);
  v11 = 8;
  if ( dword_6142A4 >= 8 )
    v11 = dword_6142A4;
  LODWORD(v12) = sub_409300(v11);
  dword_6143E4 = 0;
  qword_614398 = v12;
  free(qword_614478);
  v14 = (signed __int64)dword_614298 << 6;
  if ( dword_614298 & 0x200000000000000LL || (unsigned __int64)dword_614298 >> 58 != 0 )
    goto LABEL_240;
  LODWORD(v15) = sub_409300(v14);
  v16 = (__int64)v15;
  qword_614478 = v15;
  if ( byte_61444F )
  {
    if ( v2 )
    {
      v17 = (signed __int64)&v3[(unsigned int)(v2 - 1) + 1];
      do
      {
        while ( (unsigned __int8)sub_403C80(*v3, v16) )
        {
          ++v3;
          v16 += 64LL;
          if ( v3 == (_BYTE **)v17 )
            goto LABEL_36;
        }
        ++v3;
        --dword_614298;
      }
      while ( v3 != (_BYTE **)v17 );
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
      v96 = dcgettext(0LL, "standard input", 5);
      *(_BYTE *)(v16 + 57) = 0;
      *(_QWORD *)(v16 + 8) = v96;
      v97 = stdin;
      *(_DWORD *)(v16 + 16) = 0;
      *(_QWORD *)v16 = v97;
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
      v101 = fileno(*(FILE **)v16);
      sub_402AB0(*v3, v101);
      *(_DWORD *)(v16 + 44) = 0;
    }
    v7 = (unsigned int)dword_614298;
    v98 = *(_QWORD *)(v16 + 8);
    v99 = v16 + 64;
    v19 = *(FILE **)v16;
    if ( dword_614298 != 1 )
    {
      v7 = ((unsigned int)(v7 - 2) + 2LL) << 6;
      v100 = v7 + v16;
      do
      {
        *(_QWORD *)(v99 + 8) = v98;
        v99 += 64LL;
        *(_QWORD *)(v99 - 64) = v19;
        *(_DWORD *)(v99 - 48) = 0;
        *(_BYTE *)(v99 - 7) = 0;
        *(_DWORD *)(v99 - 20) = 0;
      }
      while ( v99 != v100 );
    }
  }
  dword_614410 = dword_6143E4;
  if ( byte_6142B4 )
  {
    v90 = dword_614298 * dword_614440;
    if ( is_mul_ok(dword_614298, dword_614440) )
    {
      v91 = v90 + 1;
      if ( !__OFADD__(1, v90) && !__OFADD__(1, dword_614438) )
      {
        v92 = v90 * (dword_614438 + 1);
        if ( is_mul_ok(v90, dword_614438 + 1) )
        {
          free(qword_614458);
          v14 = 4LL * v91;
          if ( !(v91 & 0x2000000000000000LL) && (unsigned __int64)v91 >> 62 == 0 )
          {
            LODWORD(v93) = sub_409300(v14);
            qword_614458 = v93;
            free(qword_614450);
            v14 = 4LL * (signed int)v90;
            if ( !((signed int)v90 & 0x2000000000000000LL) && (unsigned __int64)(signed int)v90 >> 62 == 0 )
            {
              LODWORD(v94) = sub_409300(v14);
              qword_614450 = v94;
              free(qword_614470);
              v14 = (unsigned __int8)byte_6143E0 + 1LL;
              v13 = (unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)v92 >> 64 != 0;
              if ( v14 * v92 >= 0 && (unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)v92 >> 64 == 0 )
              {
                LODWORD(v95) = sub_409300(v14 * v92);
                qword_614470 = v95;
                qword_614460 = ((unsigned __int8)byte_6143E0 + 1LL) * v92;
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
  v78 = 1LL;
  while ( 1 )
  {
    v79 = qword_614478;
    v80 = 1;
    for ( i = dword_614298; v80 < dword_614440; ++v80 )
    {
      if ( i > 0 )
      {
        v82 = 1;
        do
        {
          while ( *((_DWORD *)v79 + 4) )
          {
            ++v82;
            v79 = (char *)v79 + 64;
            if ( v82 > i )
              goto LABEL_193;
          }
          v83 = v82;
          v84 = (__int64)v79;
          ++v82;
          v79 = (char *)v79 + 64;
          sub_403490(v84, v83);
          i = dword_614298;
        }
        while ( v82 <= dword_614298 );
LABEL_193:
        v79 = qword_614478;
      }
    }
    byte_614390 = 1;
    if ( i > 0 )
    {
      v85 = 1;
      do
      {
        while ( *((_DWORD *)v79 + 4) )
        {
          ++v85;
          v79 = (char *)v79 + 64;
          if ( v85 > i )
            goto LABEL_200;
        }
        v86 = v85;
        v87 = (__int64)v79;
        ++v85;
        v79 = (char *)v79 + 64;
        sub_403490(v87, v86);
        i = dword_614298;
      }
      while ( v85 <= dword_614298 );
LABEL_200:
      if ( byte_6142B4 )
      {
        v88 = (char *)qword_614478;
        if ( i > 0 )
        {
          v89 = (char *)qword_614478 + 64 * ((unsigned int)(i - 1) + 1LL);
          do
          {
            if ( *((_DWORD *)v88 + 4) != 3 )
              *((_DWORD *)v88 + 4) = 2;
            v88 += 64;
          }
          while ( v88 != v89 );
        }
      }
    }
    sub_402710();
    byte_614390 = 0;
    if ( dword_614410 <= 0 )
      break;
    if ( v20 == ++v78 )
      goto LABEL_208;
  }
  v102 = dcgettext(0LL, "starting page number %lu exceeds page count %lu", 5);
  error(0, 0, v102, v20, v78);
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
            *((_QWORD *)v32 + 4) = sub_402790;
            *((_QWORD *)v32 + 3) = sub_403280;
          }
          else
          {
            *((_QWORD *)v32 + 4) = sub_4031E0;
            *((_QWORD *)v32 + 3) = sub_403840;
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
          v32 = (char *)v32 + 64;
          v22 += v23 + v34;
          if ( v33 == v25 )
            goto LABEL_65;
        }
        ++v33;
        v22 = 0;
        v27 = 0;
        v32 = (char *)v32 + 64;
      }
      while ( v33 != v25 );
LABEL_65:
      v30 = v26;
      v28 = &v24[64 * ((unsigned int)(v25 - 2) + 1LL)];
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
      while ( &v24[64 * ((unsigned int)(v25 - 1) + 1LL)] != v36 );
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
          v43 = qword_614478;
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
            if ( !(unsigned __int8)(*((int (__fastcall **)(void *))v43 + 3))(v43) )
              sub_403D80((_IO_FILE **)v43);
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
                v40 = qword_614478;
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
        v43 = (char *)v43 + 64;
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
      v51 = (signed __int64)v40 + 64 * ((unsigned int)(v39 - 1) + 1LL);
      do
      {
        if ( !*((_DWORD *)v40 + 4) )
          *((_BYTE *)v40 + 57) = 1;
        v40 = (char *)v40 + 64;
      }
      while ( v40 != (void *)v51 );
      v41 = 0;
LABEL_120:
      byte_6143D0 = v42;
      if ( !v42 || !byte_6142B5 )
        break;
      if ( byte_614447 )
      {
        v77 = stdout->_IO_write_ptr;
        if ( v77 >= stdout->_IO_write_end )
        {
          __overflow(stdout, 12);
        }
        else
        {
          stdout->_IO_write_ptr = v77 + 1;
          *v77 = 12;
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
      result = qword_614408++ + 1;
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
      v105 = v25 - ((unsigned __int8)byte_614444 < 1u);
      if ( v25 - ((unsigned __int8)byte_614444 < 1u) <= 0 )
      {
        v56 = 0;
LABEL_185:
        v64 = 0LL;
        v58 = 0;
        goto LABEL_155;
      }
      v54 = v24;
      v55 = (signed __int64)&v24[64 * (v25 - (unsigned int)((unsigned __int8)byte_614444 < 1u) - 1 + 1LL)];
      do
      {
        *((_DWORD *)v54 + 11) = 0;
        v54 += 64;
      }
      while ( v54 != (char *)v55 );
      v56 = dword_614410;
      if ( !dword_614410 )
        goto LABEL_185;
      v104 = 1;
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
        ++v104;
        v36 += 64;
        v56 = v57;
        v64 = 4 * v59;
        if ( v105 < v104 || !dword_614410 )
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
          sub_403D80((_IO_FILE **)v36);
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
        while ( v70 != &v24[64 * (v71 + 1)] );
        v36 = &v24[64 * (v71 + 1)];
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
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  __int64 v5; // rcx@4
  __int64 v6; // r8@4
  FILE *v7; // rbp@4
  char *v8; // rax@4
  FILE *v9; // rbp@4
  char *v10; // rax@4
  FILE *v11; // rbp@4
  char *v12; // rax@4
  FILE *v13; // rbp@4
  char *v14; // rax@4
  FILE *v15; // rbp@4
  char *v16; // rax@4
  FILE *v17; // rbp@4
  char *v18; // rax@4
  FILE *v19; // rbp@4
  char *v20; // rax@4
  FILE *v21; // rbp@4
  char *v22; // rax@4
  FILE *v23; // rbp@4
  char *v24; // rax@4
  FILE *v25; // rbp@4
  char *v26; // rax@4
  FILE *v27; // rbp@4
  char *v28; // rax@4
  FILE *v29; // rbp@4
  char *v30; // rax@4
  FILE *v31; // rbp@4
  char *v32; // rax@4
  FILE *v33; // rbp@4
  char *v34; // rax@4
  FILE *v35; // rbp@4
  char *v36; // rax@4
  FILE *v37; // rbp@4
  char *v38; // rax@4
  FILE *v39; // rbp@4
  char *v40; // rax@4
  FILE *v41; // rbp@4
  char *v42; // rax@4
  __int64 *v43; // rax@4
  _BYTE *v44; // rdi@5
  bool v45; // cf@5
  bool v46; // zf@5
  const char *v47; // rsi@6
  signed __int64 v48; // rcx@6
  char *v49; // rbp@10
  char *v50; // rax@11
  __int64 v51; // r8@11
  char *v52; // rax@11
  signed __int64 v53; // r12@13
  char *v54; // rax@13
  __int64 v55; // r8@13
  char *v56; // rax@15
  __int64 v57; // r8@15
  char *v58; // rax@16
  __int64 v59; // r8@16
  char *v60; // rax@16
  char *v61; // rax@18
  __int64 v62; // r8@18
  char *v63; // rax@20
  __int64 v64; // rcx@20
  __int64 v65; // r8@20
  const char *v66; // [sp+0h] [bp-88h]@4
  const char *v67; // [sp+8h] [bp-80h]@4
  const char *v68; // [sp+10h] [bp-78h]@4
  const char *v69; // [sp+18h] [bp-70h]@4
  const char *v70; // [sp+20h] [bp-68h]@4
  const char *v71; // [sp+28h] [bp-60h]@4
  const char *v72; // [sp+30h] [bp-58h]@4
  const char *v73; // [sp+38h] [bp-50h]@4
  const char *v74; // [sp+40h] [bp-48h]@4
  const char *v75; // [sp+48h] [bp-40h]@4
  const char *v76; // [sp+50h] [bp-38h]@4
  const char *v77; // [sp+58h] [bp-30h]@4
  __int64 v78; // [sp+60h] [bp-28h]@4
  __int64 v79; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_614490;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v4, v2, v5, v6);
  v7 = stdout;
  v8 = dcgettext(0LL, "Paginate or columnate FILE(s) for printing.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "  +FIRST_PAGE[:LAST_PAGE], --pages=FIRST_PAGE[:LAST_PAGE]\n"
          "                    begin [stop] printing with page FIRST_[LAST_]PAGE\n"
          "  -COLUMN, --columns=COLUMN\n"
          "                    output COLUMN columns and print columns down,\n"
          "                    unless -a is used. Balance number of lines in the\n"
          "                    columns on each page\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "  -a, --across      print columns across rather than down, used together\n"
          "                    with -COLUMN\n"
          "  -c, --show-control-chars\n"
          "                    use hat notation (^G) and octal backslash notation\n"
          "  -d, --double-space\n"
          "                    double space the output\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
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
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "  -h, --header=HEADER\n"
          "                    use a centered HEADER instead of filename in page header,\n"
          "                    -h \"\" prints a blank line, don't use -h\"\"\n"
          "  -i[CHAR[WIDTH]], --output-tabs[=CHAR[WIDTH]]\n"
          "                    replace spaces with CHARs (TABs) to tab WIDTH (8)\n"
          "  -J, --join-lines  merge full lines, turns off -W line truncation, no column\n"
          "                    alignment, --sep-string[=STRING] sets separators\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "  -l, --length=PAGE_LENGTH\n"
          "                    set the page length to PAGE_LENGTH (66) lines\n"
          "                    (default number of lines of text 56, and with -F 63).\n"
          "                    implies -t if PAGE_LENGTH <= 10\n",
          5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "  -m, --merge       print all files in parallel, one in each column,\n"
          "                    truncate lines, but join lines of full length with -J\n",
          5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(
          0LL,
          "  -n[SEP[DIGITS]], --number-lines[=SEP[DIGITS]]\n"
          "                    number lines, use DIGITS (5) digits, then SEP (TAB),\n"
          "                    default counting starts with 1st line of input file\n"
          "  -N, --first-line-number=NUMBER\n"
          "                    start counting with NUMBER at 1st line of first\n"
          "                    page printed (see +FIRST_PAGE)\n",
          5);
  fputs_unlocked(v26, v25);
  v27 = stdout;
  v28 = dcgettext(
          0LL,
          "  -o, --indent=MARGIN\n"
          "                    offset each line with MARGIN (zero) spaces, do not\n"
          "                    affect -w or -W, MARGIN will be added to PAGE_WIDTH\n"
          "  -r, --no-file-warnings\n"
          "                    omit warning when a file cannot be opened\n",
          5);
  fputs_unlocked(v28, v27);
  v29 = stdout;
  v30 = dcgettext(
          0LL,
          "  -s[CHAR], --separator[=CHAR]\n"
          "                    separate columns by a single character, default for CHAR\n"
          "                    is the <TAB> character without -w and 'no char' with -w.\n"
          "                    -s[CHAR] turns off line truncation of all 3 column\n"
          "                    options (-COLUMN|-a -COLUMN|-m) except -w is set\n",
          5);
  fputs_unlocked(v30, v29);
  v31 = stdout;
  v32 = dcgettext(
          0LL,
          "  -S[STRING], --sep-string[=STRING]\n"
          "                    separate columns by STRING,\n"
          "                    without -S: Default separator <TAB> with -J and <space>\n"
          "                    otherwise (same as -S\" \"), no effect on column options\n",
          5);
  fputs_unlocked(v32, v31);
  v33 = stdout;
  v34 = dcgettext(
          0LL,
          "  -t, --omit-header  omit page headers and trailers;\n                     implied if PAGE_LENGTH <= 10\n",
          5);
  fputs_unlocked(v34, v33);
  v35 = stdout;
  v36 = dcgettext(
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
  fputs_unlocked(v36, v35);
  v37 = stdout;
  v38 = dcgettext(
          0LL,
          "  -W, --page-width=PAGE_WIDTH\n"
          "                    set page width to PAGE_WIDTH (72) characters always,\n"
          "                    truncate lines, except -J option is set, no interference\n"
          "                    with -S or -s\n",
          5);
  fputs_unlocked(v38, v37);
  v39 = stdout;
  v40 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v40, v39);
  v41 = stdout;
  v42 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v42, v41);
  v66 = "[";
  v43 = (__int64 *)&v66;
  v67 = "test invocation";
  v68 = "coreutils";
  v69 = "Multi-call invocation";
  v70 = "sha224sum";
  v71 = "sha2 utilities";
  v72 = "sha256sum";
  v73 = "sha2 utilities";
  v74 = "sha384sum";
  v75 = "sha2 utilities";
  v76 = "sha512sum";
  v77 = "sha2 utilities";
  v78 = 0LL;
  v79 = 0LL;
  do
  {
    v43 += 2;
    v44 = (_BYTE *)*v43;
    v45 = 0;
    v46 = *v43 == 0;
    if ( !*v43 )
      break;
    v47 = "pr";
    v48 = 3LL;
    do
    {
      if ( !v48 )
        break;
      v45 = (const unsigned __int8)*v47 < *v44;
      v46 = *v47++ == *v44++;
      --v48;
    }
    while ( v46 );
  }
  while ( (!v45 && !v46) != v45 );
  v49 = (char *)v43[1];
  if ( v49 )
  {
    v50 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v50, &unk_40CEF3, "https://www.gnu.org/software/coreutils/", v51);
    v52 = setlocale(5, 0LL);
    if ( !v52 || !strncmp(v52, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v58 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v58, &unk_40CEF3, "https://www.gnu.org/software/coreutils/", v59);
    v60 = setlocale(5, 0LL);
    if ( !v60 || !strncmp(v60, "en_", 3uLL) )
    {
      v49 = "pr";
      v61 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v53 = 4247193LL;
      __printf_chk(1LL, v61, "https://www.gnu.org/software/coreutils/", "pr", v62);
LABEL_15:
      v56 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v56, v49, v53, v57);
LABEL_3:
      exit(v1);
    }
    v49 = "pr";
  }
  v63 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v63, "pr", v64, v65);
LABEL_13:
  v53 = 4247193LL;
  v54 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v54, "https://www.gnu.org/software/coreutils/", "pr", v55);
  if ( v49 != "pr" )
    v53 = 4247139LL;
  goto LABEL_15;
}

__int64 __fastcall sub_4052E0(char *nptr, char a2, _BYTE *a3, _DWORD *a4)
{
  unsigned int v4; // er12@1
  _DWORD *v5; // rbp@1
  char *v6; // rbx@1
  unsigned int v7; // esi@1
  __int64 result; // rax@1
  __int64 v9; // rax@7
  __int64 v10; // rbp@7
  signed int v11; // esi@7
  char *v12; // rbx@7
  signed __int64 v13; // [sp+8h] [bp-20h]@0

  LOBYTE(v4) = a2;
  v5 = a4;
  v6 = nptr;
  v7 = *nptr;
  result = v7;
  if ( v7 - 48 > 9 )
  {
    *a3 = result;
    result = (unsigned __int8)nptr[1];
    v6 = nptr + 1;
  }
  if ( (_BYTE)result )
  {
    if ( (unsigned int)sub_409E00(v6) || (result = v13, (unsigned __int64)(v13 - 1) > 0x7FFFFFFE) )
    {
      v4 = (char)v4;
      LODWORD(v9) = sub_408D30(v6);
      v10 = v9;
      v11 = 75;
      v12 = dcgettext(0LL, "'-%c' extra characters or invalid number in the argument: %s", 5);
      if ( v13 <= 0x7FFFFFFF )
        v11 = *__errno_location();
      error(0, v11, v12, v4, v10);
      sub_404DE0(1);
    }
    *v5 = v13;
  }
  return result;
}

__int64 sub_4053D0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_408B80(qword_614488, "write error");
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
  int v2; // eax@2

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_4054B0(const char *a1, const char *a2)
{
  FILE *v2; // rax@1
  FILE *v3; // rbx@1
  int v4; // eax@2
  int v6; // er12@4
  int *v7; // rax@7
  int v8; // ebp@7
  int *v9; // rbx@7
  int *v10; // rax@8
  FILE *v11; // rdi@8
  int v12; // er12@8
  int *v13; // rbp@8

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( (unsigned int)v4 <= 2 )
    {
      v6 = sub_408D50((unsigned int)v4);
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
  int result; // eax@1
  __int64 v2; // [sp+0h] [bp-18h]@2
  __int64 v3; // [sp+8h] [bp-10h]@2

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

signed __int64 __fastcall sub_4055F0(signed __int64 a1, __int64 a2)
{
  _BYTE *v2; // rcx@1
  unsigned __int64 v3; // rdx@2
  signed __int64 result; // rax@3
  signed __int64 v5; // rdx@5
  int v6; // eax@5

  v2 = (_BYTE *)(a2 + 20);
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v5 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * a1) >> 64) >> 2) - (a1 >> 63);
      v6 = 10 * v5 + 48 - a1;
      a1 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * a1) >> 64) >> 2) - (a1 >> 63);
      *(v2 - 1) = v6;
      if ( !v5 )
        break;
      --v2;
    }
    *(v2 - 2) = 45;
    result = (signed __int64)(v2 - 2);
  }
  else
  {
    do
    {
      --v2;
      v3 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)a1 >> 64) >> 3;
      *v2 = a1 - 10 * v3 + 48;
      a1 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)a1 >> 64) >> 3;
    }
    while ( v3 );
    result = (signed __int64)v2;
  }
  return result;
}

__int64 __fastcall sub_405690(char *s, __int64 a2, char a3)
{
  char v3; // r15@1
  char *v4; // r13@1
  char *v5; // rbx@1
  unsigned int v6; // er12@2
  char v7; // al@8
  __int64 v8; // rax@16
  signed __int64 v9; // rbp@16
  int v10; // eax@20
  int v12; // er15@29
  const unsigned __int16 *v13; // rdx@29
  unsigned __int16 v14; // ax@30
  wchar_t c; // [sp+4h] [bp-44h]@16
  mbstate_t ps; // [sp+8h] [bp-40h]@12

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
      if ( HIBYTE(v14) & 0x40 )
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
              if ( (signed int)(0x7FFFFFFF - v6) < v10 )
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
  __int64 v2; // rax@1

  v2 = strlen(s);
  return sub_405690(s, v2, a2);
}

__int64 __fastcall sub_405880(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx@2
  const __int32_t **v4; // rax@2

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_tolower_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(_BYTE *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_4058D0(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx@2
  const __int32_t **v4; // rax@2

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_toupper_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(_BYTE *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __usercall sub_405920@<rax>(void *s@<rdi>, char *a2@<rdx>, __int64 a3@<rcx>, __int64 a4@<rsi>, char a5@<r8b>, __int64 a6, int a7)
{
  char *v7; // r15@1
  signed __int64 v8; // rbx@1
  signed __int64 v9; // r12@1
  signed int v10; // er11@1
  char v11; // al@5
  __int64 v12; // r14@5
  _BYTE *v13; // r8@11
  char v15; // r11@21
  signed __int64 v16; // r8@21
  signed int i; // er12@21
  signed int v18; // eax@22
  __int64 v19; // rcx@22
  __int64 v20; // r9@22
  bool v21; // zf@22
  bool v22; // sf@22
  unsigned __int8 v23; // of@22
  int v24; // ebp@28
  unsigned int v25; // eax@38
  int v26; // edi@39
  char *v27; // rax@51
  signed __int64 v28; // r8@51
  char v29; // r13@51
  size_t v30; // rax@52
  unsigned __int64 v31; // rcx@53
  unsigned __int64 v32; // rbx@55
  size_t v33; // rdx@61
  char *v34; // rdi@62
  char *v35; // rsi@63
  size_t v36; // rdx@63
  char *v37; // rdi@63
  unsigned __int64 v38; // rcx@65
  char v39; // ST50_1@72
  char *v40; // r13@72
  __m128i v41; // xmm4@72
  __m128i v42; // xmm2@72
  __int64 v43; // rax@72
  signed __int64 v44; // rax@72
  signed __int64 v45; // rsi@72
  signed __int64 v46; // rcx@72
  signed __int64 v47; // rdx@73
  signed __int64 v48; // rax@73
  unsigned int v49; // eax@73
  signed int v50; // er10@76
  char *v51; // rcx@79
  unsigned __int64 v52; // rax@79
  size_t v53; // r9@80
  unsigned __int64 v54; // r9@81
  size_t v55; // rdx@90
  char *v56; // rdi@91
  unsigned __int64 v57; // r10@94
  unsigned __int64 v58; // rax@94
  unsigned __int64 v59; // rsi@96
  size_t v60; // rdx@101
  char *v61; // rdi@102
  unsigned __int64 v62; // ST58_8@103
  int v63; // er10@108
  int v64; // er13@108
  signed int v65; // edi@108
  signed int v66; // er8@108
  int v67; // eax@109
  signed int v68; // er13@112
  int v69; // er13@114
  int v70; // edi@117
  int v71; // esi@117
  int v72; // edi@120
  unsigned int v73; // er8@120
  unsigned __int64 v74; // r13@127
  unsigned __int64 v75; // rax@127
  unsigned __int64 v76; // rsi@129
  char v77; // r11@133
  char v78; // r8@133
  size_t v79; // rdx@134
  char *v80; // rdi@135
  signed int v81; // esi@164
  unsigned __int64 v82; // r13@165
  size_t v83; // rdx@172
  char *v84; // rdi@173
  char *v85; // rcx@178
  signed __int64 v86; // rax@180
  unsigned __int64 v87; // rsi@193
  size_t v88; // rdx@201
  char *v89; // rdi@202
  char *v90; // ST68_8@205
  signed int v91; // ST60_4@205
  _BYTE *v92; // ST58_8@205
  char v93; // ST50_1@205
  size_t v94; // ST40_8@205
  size_t v95; // rdx@214
  char *v96; // rdi@215
  signed int v97; // esi@220
  signed int v98; // edi@226
  int v99; // edx@226
  int v100; // esi@229
  int v101; // edx@229
  signed __int64 v102; // rax@237
  _BYTE *v103; // r9@238
  unsigned __int64 v104; // rcx@238
  unsigned __int64 v105; // rax@239
  size_t v106; // rdx@246
  char *v107; // rdi@247
  unsigned __int64 v108; // rcx@249
  signed __int64 j; // r13@252
  __int64 v110; // rsi@254
  int v111; // eax@257
  int v112; // esi@257
  char v113; // cl@261
  signed int v114; // esi@273
  size_t v115; // rdx@282
  char *v116; // rdi@283
  int v117; // eax@287
  int v118; // eax@288
  char v119; // al@291
  char v120; // cl@298
  unsigned __int64 v121; // r12@299
  char v122; // ST68_1@307
  unsigned __int64 v123; // ST60_8@307
  char v124; // ST50_1@307
  char *v125; // rdi@312
  unsigned __int64 v126; // r8@313
  size_t v127; // rdx@321
  __int64 v128; // r12@326
  char *v129; // rdi@328
  int v130; // ST60_4@328
  signed int v131; // ST58_4@328
  char v132; // ST50_1@328
  int v133; // eax@329
  char *v134; // rdi@333
  char *v135; // rdi@335
  unsigned __int64 v136; // rcx@338
  char *v137; // rdi@344
  unsigned __int64 v138; // ST68_8@344
  char v139; // ST58_1@344
  char *v140; // rdi@347
  signed int v141; // esi@348
  int v142; // edx@348
  int v143; // er10@351
  int v144; // esi@351
  int v145; // edi@353
  int v146; // esi@357
  int v147; // eax@361
  int v148; // eax@361
  int v149; // esi@362
  int v150; // esi@365
  char *v151; // rdi@370
  char *v152; // rdi@371
  char *v153; // rdi@373
  char *v154; // rdi@374
  char *v155; // rdi@375
  __int64 v156; // [sp+0h] [bp-4C8h]@1
  struct tm *tp; // [sp+8h] [bp-4C0h]@1
  char *v158; // [sp+20h] [bp-4A8h]@6
  char v159; // [sp+2Bh] [bp-49Dh]@3
  int v160; // [sp+2Ch] [bp-49Ch]@6
  _BYTE *v161; // [sp+30h] [bp-498h]@52
  char v162; // [sp+30h] [bp-498h]@61
  unsigned __int64 v163; // [sp+30h] [bp-498h]@63
  char v164; // [sp+30h] [bp-498h]@90
  signed int v165; // [sp+30h] [bp-498h]@108
  char v166; // [sp+30h] [bp-498h]@120
  char v167; // [sp+30h] [bp-498h]@189
  char v168; // [sp+30h] [bp-498h]@246
  unsigned __int64 v169; // [sp+30h] [bp-498h]@248
  int v170; // [sp+30h] [bp-498h]@257
  char v171; // [sp+40h] [bp-488h]@52
  _BYTE *v172; // [sp+40h] [bp-488h]@61
  _BYTE *v173; // [sp+40h] [bp-488h]@63
  _BYTE *v174; // [sp+40h] [bp-488h]@90
  char v175; // [sp+40h] [bp-488h]@127
  char v176; // [sp+40h] [bp-488h]@201
  _BYTE *v177; // [sp+40h] [bp-488h]@246
  _BYTE *v178; // [sp+40h] [bp-488h]@248
  char *v179; // [sp+40h] [bp-488h]@321
  int v180; // [sp+48h] [bp-480h]@52
  unsigned __int64 v181; // [sp+48h] [bp-480h]@61
  char *v182; // [sp+48h] [bp-480h]@90
  char v183; // [sp+48h] [bp-480h]@125
  _BYTE *v184; // [sp+48h] [bp-480h]@246
  char v185; // [sp+48h] [bp-480h]@321
  unsigned __int64 v186; // [sp+50h] [bp-478h]@101
  unsigned __int64 v187; // [sp+50h] [bp-478h]@246
  size_t v188; // [sp+58h] [bp-470h]@201
  unsigned __int64 v189; // [sp+58h] [bp-470h]@321
  unsigned __int64 v190; // [sp+60h] [bp-468h]@321
  char format[2]; // [sp+70h] [bp-458h]@51
  char v192; // [sp+72h] [bp-456h]@51
  char v193; // [sp+73h] [bp-455h]@124
  char v194[9]; // [sp+87h] [bp-441h]@72
  char sa[16]; // [sp+90h] [bp-438h]@52
  __m128i v196; // [sp+A0h] [bp-428h]@72
  __m128i v197; // [sp+B0h] [bp-418h]@72
  __int64 v198; // [sp+C0h] [bp-408h]@72

  v7 = (char *)s;
  v8 = (signed __int64)a2;
  v9 = *(_QWORD *)(a3 + 48);
  v10 = *(_DWORD *)(a3 + 8);
  v156 = a4;
  tp = (struct tm *)a3;
  if ( !v9 )
    v9 = 4247139LL;
  v159 = a5;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = *a2;
  v12 = 0LL;
  if ( !*a2 )
  {
LABEL_13:
    if ( v7 && v156 )
      *v7 = 0;
    return v12;
  }
  v160 = v10;
  v158 = (char *)v9;
  while ( v11 != 37 )
  {
    a2 = (char *)(v156 - v12);
    if ( (unsigned __int64)(v156 - v12) <= 1 )
      return 0LL;
    if ( v7 )
      *v7++ = v11;
    ++v12;
    v13 = (_BYTE *)v8;
LABEL_12:
    v11 = v13[1];
    v8 = (signed __int64)(v13 + 1);
    if ( !v11 )
      goto LABEL_13;
  }
  v15 = v159;
  v16 = 0LL;
LABEL_22:
  for ( i = 0; ; i = v18 )
  {
    v18 = *(_BYTE *)++v8;
    v19 = (unsigned int)v18;
    v20 = (unsigned int)v18;
    v23 = __OFSUB__(*(_BYTE *)v8, 48);
    v21 = *(_BYTE *)v8 == 48;
    v22 = (char)(*(_BYTE *)v8 - 48) < 0;
    if ( *(_BYTE *)v8 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !((unsigned __int8)(v22 ^ v23) | v21) )
    {
      if ( (_BYTE)v18 == 94 )
      {
        v15 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v18 != 95 )
      {
        v24 = -1;
        if ( (unsigned int)(v18 - 48) > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v18 != 35 )
      break;
    v18 = *(_BYTE *)++v8;
    v16 = 1LL;
    v19 = (unsigned int)v18;
    v20 = (unsigned int)v18;
    v23 = __OFSUB__(*(_BYTE *)v8, 48);
    v21 = *(_BYTE *)v8 == 48;
    v22 = (char)(*(_BYTE *)v8 - 48) < 0;
    if ( *(_BYTE *)v8 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v18 == 45 )
    goto LABEL_26;
  v24 = -1;
  if ( (unsigned int)(v18 - 48) > 9 )
    goto LABEL_29;
LABEL_37:
  v24 = 0;
  while ( 1 )
  {
    v25 = *(_BYTE *)(v8 + 1);
    v19 = v25;
    a2 = (char *)(v25 - 48);
    if ( v24 > 214748364 )
      break;
    v26 = *(_BYTE *)v8;
    if ( v24 == 214748364 && (char)v26 > 55 )
      break;
    ++v8;
    v24 = v26 + 10 * v24 - 48;
LABEL_41:
    if ( (unsigned int)a2 > 9 )
    {
      v20 = v25;
      goto LABEL_29;
    }
  }
  if ( (unsigned int)a2 <= 9 )
  {
    v25 = *(_BYTE *)(v8 + 2);
    v24 = 0x7FFFFFFF;
    v8 += 2LL;
    v19 = v25;
    a2 = (char *)(v25 - 48);
    goto LABEL_41;
  }
  v20 = v25;
  ++v8;
  v24 = 0x7FFFFFFF;
LABEL_29:
  if ( (_BYTE)v19 == 69 || (_BYTE)v19 == 79 )
    v19 = *(_BYTE *)(v8++ + 1);
  else
    v20 = 0LL;
  switch ( (_BYTE)v19 )
  {
    case 0x41:
    case 0x42:
    case 0x61:
      if ( (_DWORD)v20 )
        goto LABEL_237;
      if ( (_BYTE)v16 )
        v15 = v16;
      goto LABEL_51;
    case 0x58:
    case 0x63:
    case 0x78:
      if ( (_DWORD)v20 != 79 )
        goto LABEL_69;
      goto LABEL_237;
    case 0x72:
LABEL_69:
      v29 = 0;
      goto LABEL_70;
    case 0x73:
      v39 = v15;
      v40 = v194;
      v41 = _mm_loadu_si128((const __m128i *)&tp->tm_isdst);
      v42 = _mm_loadu_si128((const __m128i *)&tp->tm_mon);
      v43 = (__int64)tp->tm_zone;
      *(__m128i *)sa = _mm_loadu_si128((const __m128i *)tp);
      v196 = v42;
      v197 = v41;
      v198 = v43;
      LODWORD(v44) = sub_40BF30(a6, sa, a2, v19, v16, v20);
      v15 = v39;
      v45 = v44;
      v46 = v44;
      do
      {
        v47 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * v46) >> 64) >> 2) - (v46 >> 63);
        v48 = v47;
        LODWORD(v47) = v46 - 10 * v47;
        v46 = v48;
        v49 = 48 - v47;
        a2 = (char *)(unsigned int)(v47 + 48);
        if ( v45 < 0 )
          a2 = (char *)v49;
        *--v40 = (char)a2;
      }
      while ( v46 );
      v50 = 1;
      if ( v24 > 0 )
        v50 = v24;
      if ( v45 >= 0 )
        goto LABEL_79;
      goto LABEL_298;
    case 0x44:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_237;
    case 0x46:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_237;
    case 0x47:
    case 0x56:
    case 0x67:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v63 = tp->tm_yday;
      v64 = tp->tm_wday;
      v165 = tp->tm_year;
      v65 = v165 + ((v165 >> 31) & 0x190) - 100;
      v66 = v63 - (v63 - v64 + 382) + 7 * ((v63 - v64 + 382) / 7) + 3;
      if ( v66 < 0 )
      {
        v141 = v165 + ((v165 >> 31) & 0x190) - 101;
        v142 = 365;
        if ( !(((_BYTE)v165 + ((v165 >> 31) & 0x90) - 101) & 3) )
        {
          v142 = 366;
          if ( v141 == 100 * (v141 / 100) )
            v142 = 366 - ((unsigned int)(v141 % 400) >= 1);
        }
        v143 = v142 + v63;
        v144 = v143 - v64;
        v69 = -1;
        v66 = v143 - (v144 + 382) + 7 * ((v144 + 382) / 7) + 3;
      }
      else
      {
        v67 = 365;
        if ( !(v65 & 3) )
        {
          v67 = 366;
          if ( v65 == 100 * (v65 / 100) )
            v67 = (v65 == 400 * (v65 / 400)) + 365;
        }
        v68 = v63 - v67 - (v63 - v67 - v64 + 382) + 7 * ((v63 - v67 - v64 + 382) / 7) + 3;
        if ( v68 >= 0 )
          v66 = v68;
        v69 = (v68 >> 31) + 1;
      }
      if ( (_BYTE)v19 == 71 )
      {
        v146 = tp->tm_year;
        v166 = 0;
        v50 = 4;
        v23 = __OFSUB__(v146, -1900 - v69);
        v22 = v146 - (-1900 - v69) < 0;
        v71 = v146 + v69 + 1900;
        LOBYTE(v73) = v22 ^ v23;
        v72 = 0;
        goto LABEL_121;
      }
      if ( (_BYTE)v19 == 103 )
      {
        v50 = 2;
        v70 = (v69 + v165 % 100) % 100;
        v71 = v70;
        if ( v70 < 0 )
        {
          v71 = v70 + 100;
          if ( v165 < -1900 - v69 )
            v71 = -v70;
        }
      }
      else
      {
        v50 = 2;
        v71 = v66 / 7 + 1;
      }
      goto LABEL_120;
    case 0x5A:
      v183 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
      v175 = v15;
      v74 = strlen(v158);
      LODWORD(v75) = 0;
      if ( v24 >= 0 )
        LODWORD(v75) = v24;
      v75 = (signed int)v75;
      v76 = (signed int)v75;
      if ( v74 >= (signed int)v75 )
        v76 = v74;
      a2 = (char *)(v156 - v12);
      if ( v156 - v12 <= v76 )
        return 0LL;
      if ( v7 )
      {
        v77 = v175;
        v78 = v183;
        if ( v74 < v75 )
        {
          v79 = v24 - v74;
          if ( i == 48 )
          {
            v154 = v7;
            v7 += v79;
            memset(v154, 48, v79);
            v77 = v175;
            v78 = v183;
          }
          else
          {
            v80 = v7;
            v7 += v79;
            memset(v80, 32, v79);
            v78 = v183;
            v77 = v175;
          }
        }
        if ( v78 )
        {
          sub_405880((__int64)v7, (__int64)v158, v74);
        }
        else if ( v77 )
        {
          sub_4058D0((__int64)v7, (__int64)v158, v74);
        }
        else
        {
          memcpy(v7, v158, v74);
        }
        v7 += v74;
      }
      v12 += v76;
      v13 = (_BYTE *)v8;
      goto LABEL_12;
    case 0x52:
    case 0x54:
LABEL_94:
      v57 = sub_405920(0LL, a6, a7);
      LODWORD(v58) = 0;
      if ( v24 >= 0 )
        LODWORD(v58) = v24;
      v58 = (signed int)v58;
      v59 = (signed int)v58;
      if ( v57 >= (signed int)v58 )
        v59 = v57;
      if ( v156 - v12 <= v59 )
        return 0LL;
      if ( v7 )
      {
        if ( v57 < v58 )
        {
          v186 = v57;
          v60 = v24 - v57;
          if ( i == 48 )
          {
            v140 = v7;
            v7 += v60;
            memset(v140, 48, v60);
            v57 = v186;
          }
          else
          {
            v61 = v7;
            v7 += v60;
            memset(v61, 32, v60);
            v57 = v186;
          }
        }
        v62 = v57;
        sub_405920(v7, a6, a7);
        v7 += v62;
      }
      v12 += v59;
      v13 = (_BYTE *)v8;
      goto LABEL_12;
    case 0x48:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_hour;
      goto LABEL_120;
    case 0x49:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = v160;
      v50 = 2;
      goto LABEL_120;
    case 0x4D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_min;
      goto LABEL_120;
    case 0x4E:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      if ( v24 == -1 )
      {
        v71 = a7;
        v24 = 9;
        v50 = 9;
      }
      else
      {
        if ( v24 > 8 )
        {
          v71 = a7;
        }
        else
        {
          v71 = a7;
          v145 = v24;
          do
          {
            ++v145;
            v71 /= 10;
          }
          while ( v145 != 9 );
        }
        v50 = v24;
      }
      goto LABEL_120;
    case 0x50:
      v29 = 1;
      goto LABEL_151;
    case 0x6B:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = tp->tm_hour;
      goto LABEL_158;
    case 0x6C:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = v160;
      goto LABEL_158;
    case 0x6D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v166 = 0;
      v50 = 2;
      v81 = tp->tm_mon;
      LOBYTE(v73) = v81 < -1;
      v71 = v81 + 1;
      v72 = 0;
      goto LABEL_121;
    case 0x6E:
      LODWORD(v82) = 0;
      if ( v24 >= 0 )
        LODWORD(v82) = v24;
      v82 = (signed int)v82;
      if ( !(_DWORD)v82 )
        v82 = 1LL;
      if ( v156 - v12 <= v82 )
        return 0LL;
      if ( v7 )
      {
        if ( v24 > 1 )
        {
          v83 = v24 - 1LL;
          if ( i == 48 )
          {
            v151 = v7;
            v7 += v83;
            memset(v151, 48, v83);
          }
          else
          {
            v84 = v7;
            v7 += v83;
            memset(v84, 32, v83);
          }
        }
        *v7++ = 10;
      }
      goto LABEL_175;
    case 0x71:
      v50 = 1;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_123;
      v166 = 0;
      LOBYTE(v73) = 0;
      v72 = 0;
      v71 = (11 * tp->tm_mon >> 5) + 1;
      goto LABEL_178;
    case 0x74:
      LODWORD(v82) = 0;
      if ( v24 >= 0 )
        LODWORD(v82) = v24;
      v82 = (signed int)v82;
      if ( !(_DWORD)v82 )
        v82 = 1LL;
      if ( v156 - v12 <= v82 )
        return 0LL;
      if ( v7 )
      {
        if ( v24 > 1 )
        {
          v95 = v24 - 1LL;
          if ( i == 48 )
          {
            v152 = v7;
            v7 += v95;
            memset(v152, 48, v95);
          }
          else
          {
            v96 = v7;
            v7 += v95;
            memset(v96, 32, v95);
          }
        }
        *v7++ = 9;
      }
      goto LABEL_175;
    case 0x75:
      v50 = 1;
      v71 = (tp->tm_wday + 6) % 7 + 1;
      goto LABEL_120;
    case 0x59:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_334;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_237;
      v166 = 0;
      v50 = 4;
      v97 = tp->tm_year;
      LOBYTE(v73) = v97 < -1900;
      v71 = v97 + 1900;
      v72 = 0;
      goto LABEL_221;
    case 0x53:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_sec;
      goto LABEL_120;
    case 0x55:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v98 = tp->tm_yday - tp->tm_wday + 7;
      v99 = (unsigned __int64)(-1840700269LL * v98) >> 32;
      goto LABEL_227;
    case 0x43:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_334;
      v166 = 0;
      v50 = 2;
      v100 = tp->tm_year / 100 + 19;
      v101 = tp->tm_year % 100;
      LOBYTE(v101) = v100 > 0;
      LOBYTE(v73) = tp->tm_year < -1900;
      v71 = v100 - (v101 & ((unsigned int)(tp->tm_year % 100) >> 31));
      v72 = 0;
      goto LABEL_121;
    case 0x57:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v98 = 7 * ((tp->tm_wday + 6) / 7) - (tp->tm_wday + 6) + tp->tm_yday + 7;
      v99 = (unsigned __int64)(-1840700269LL * v98) >> 32;
LABEL_227:
      v50 = 2;
      v71 = ((v99 + v98) >> 2) - (v98 >> 31);
      goto LABEL_120;
    case 0x77:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 1;
      v71 = tp->tm_wday;
      goto LABEL_120;
    case 0x62:
    case 0x68:
      if ( (_BYTE)v16 )
        v15 = v16;
      if ( (_DWORD)v20 )
        goto LABEL_237;
LABEL_51:
      v27 = &v192;
      v28 = v8;
      v29 = 0;
      *(_WORD *)format = 9504;
      LODWORD(v20) = 0;
      goto LABEL_52;
    default:
      goto LABEL_237;
    case 0x7A:
      j = 0LL;
      goto LABEL_253;
    case 0x64:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_mday;
      goto LABEL_120;
    case 0x65:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = tp->tm_mday;
LABEL_158:
      v50 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_120;
    case 0x6A:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v166 = 0;
      v50 = 3;
      v114 = tp->tm_yday;
      LOBYTE(v73) = v114 < -1;
      v71 = v114 + 1;
      v72 = 0;
      goto LABEL_121;
    case 0x25:
      LODWORD(v105) = 0;
      v82 = 1LL;
      a2 = (char *)(v156 - v12);
      if ( v24 >= 0 )
        LODWORD(v105) = v24;
      v105 = (signed int)v105;
      if ( (_DWORD)v105 )
        v82 = v105;
      if ( (_DWORD)v20 )
      {
        v13 = (_BYTE *)v8;
        v103 = (_BYTE *)v8;
        v104 = 1LL;
        goto LABEL_243;
      }
      if ( v82 < (unsigned __int64)a2 )
      {
        if ( v7 )
        {
          if ( v24 > 1 )
          {
            v115 = v24 - 1LL;
            if ( i == 48 )
            {
              v153 = v7;
              v7 += v115;
              memset(v153, 48, v115);
              LOBYTE(v19) = *(_BYTE *)v8;
            }
            else
            {
              v116 = v7;
              v7 += v115;
              memset(v116, 32, v115);
              LOBYTE(v19) = *(_BYTE *)v8;
            }
          }
          *v7++ = v19;
        }
LABEL_175:
        v12 += v82;
        v13 = (_BYTE *)v8;
        goto LABEL_12;
      }
      return 0LL;
    case 0:
      v103 = (_BYTE *)(v8 - 1);
      v113 = *(_BYTE *)(v8 - 1);
      goto LABEL_262;
    case 0x79:
      if ( (_DWORD)v20 == 69 )
      {
LABEL_334:
        v50 = 0;
        goto LABEL_123;
      }
      v50 = 2;
      v117 = tp->tm_year % 100;
      v71 = v117;
      if ( v117 < 0 )
      {
        v118 = -v117;
        v71 += 100;
        if ( tp->tm_year <= -1901 )
          v71 = v118;
      }
LABEL_120:
      v166 = 0;
      v72 = 0;
      v73 = (unsigned int)v71 >> 31;
LABEL_121:
      if ( (_DWORD)v20 == 79 )
      {
        if ( (_BYTE)v73 )
          goto LABEL_222;
LABEL_123:
        v29 = 0;
        *(_WORD *)format = 9504;
LABEL_124:
        v192 = v20;
        v28 = v8;
        LODWORD(v20) = v50;
        v27 = &v193;
LABEL_52:
        *v27 = v19;
        v27[1] = 0;
        v161 = (_BYTE *)v28;
        v180 = v20;
        v171 = v15;
        v30 = strftime(sa, 0x400uLL, format, tp);
        v13 = v161;
        if ( v30 )
        {
          v31 = v30 - 1;
          LODWORD(v30) = 0;
          if ( v24 >= 0 )
            LODWORD(v30) = v24;
          v30 = (signed int)v30;
          v32 = (signed int)v30;
          if ( v31 >= (signed int)v30 )
            v32 = v31;
          a2 = (char *)(v156 - v12);
          if ( v156 - v12 > v32 )
          {
            if ( v7 )
            {
              v15 = v171;
              if ( !v180 && v31 < v30 )
              {
                v181 = v31;
                v33 = v24 - v31;
                v172 = v161;
                v162 = v15;
                if ( i == 48 )
                {
                  v125 = v7;
                  v7 += v33;
                  memset(v125, 48, v33);
                  v15 = v162;
                  v13 = v172;
                  v31 = v181;
                }
                else
                {
                  v34 = v7;
                  v7 += v33;
                  memset(v34, 32, v33);
                  v31 = v181;
                  v13 = v172;
                  v15 = v162;
                }
              }
              v173 = v13;
              v35 = &sa[1];
              v36 = v31;
              v37 = v7;
              v163 = v31;
              if ( !v29 )
                goto LABEL_64;
              sub_405880((__int64)v7, (__int64)&sa[1], v31);
              v38 = v163;
              v13 = v173;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_221:
      if ( (_BYTE)v73 )
LABEL_222:
        v71 = -v71;
LABEL_178:
      v85 = v194;
      while ( 1 )
      {
        v40 = v85 - 1;
        if ( v72 & 1 )
        {
          v86 = (signed __int64)(v85 - 2);
          *(v85-- - 1) = 58;
          v40 = (char *)v86;
        }
        v72 >>= 1;
        a2 = (char *)(v71 / 0xAu);
        *(v85 - 1) = v71 % 0xAu + 48;
        v85 = v40;
        if ( (unsigned int)v71 <= 9 && !v72 )
          break;
        v71 /= 0xAu;
      }
      if ( v50 < v24 )
        v50 = v24;
      if ( (_BYTE)v73 )
      {
LABEL_298:
        v167 = 45;
        v120 = 45;
        if ( i == 45 )
          goto LABEL_299;
LABEL_190:
        v51 = (char *)(v194 - v40);
        LODWORD(v53) = v50 - 1 - ((unsigned __int64)v194 - (_DWORD)v40);
        v52 = v156 - v12;
        if ( (signed int)v53 <= 0 )
        {
          LODWORD(v54) = 0;
          v126 = 1LL;
          if ( v24 >= 0 )
            LODWORD(v54) = v24;
          v54 = (signed int)v54;
          if ( (_DWORD)v54 )
            v126 = v54;
          if ( v126 >= v52 )
            return 0LL;
          if ( v7 )
          {
            if ( !v50 && v54 > 1 )
            {
              v127 = v24 - 1LL;
              v190 = v126;
              v189 = v54;
              v179 = &v7[v127];
              v185 = v15;
              if ( i == 48 )
              {
                memset(v7, 48, v127);
                v7 = v179;
                v15 = v185;
                v50 = 0;
                v54 = v189;
                v126 = v190;
                v51 = (char *)(v194 - v40);
              }
              else
              {
                memset(v7, 32, v127);
                v7 = v179;
                v51 = (char *)(v194 - v40);
                v126 = v190;
                v54 = v189;
                v50 = 0;
                v15 = v185;
              }
            }
            *(++v7 - 1) = v167;
          }
          v12 += v126;
          v13 = (_BYTE *)v8;
          v52 = v156 - v12;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v50 >= v52 )
            return 0LL;
          LODWORD(a2) = 0;
          v87 = 1LL;
          if ( v24 >= 0 )
            LODWORD(a2) = v24;
          a2 = (char *)(signed int)a2;
          if ( (_DWORD)a2 )
            v87 = (unsigned __int64)a2;
          if ( v87 >= v52 )
            return 0LL;
          v12 += v87;
          v53 = (signed int)v53;
          v13 = (_BYTE *)v8;
          if ( !v7 )
            goto LABEL_206;
          if ( !v50 && (unsigned __int64)a2 > 1 )
          {
            v188 = v53;
            v88 = v24 - 1LL;
            v176 = v15;
            if ( i == 48 )
            {
              v155 = v7;
              v7 += v88;
              memset(v155, 48, v88);
              v15 = v176;
              v50 = 0;
              v51 = (char *)(v194 - v40);
              v53 = v188;
            }
            else
            {
              v89 = v7;
              v7 += v88;
              memset(v89, 32, v88);
              v53 = v188;
              v51 = (char *)(v194 - v40);
              v50 = 0;
              v15 = v176;
            }
          }
          ++v7;
          v13 = (_BYTE *)v8;
          *(v7 - 1) = v167;
LABEL_204:
          if ( v7 )
          {
            v90 = v51;
            v91 = v50;
            v92 = v13;
            v93 = v15;
            v94 = v53;
            memset(v7, 48, v53);
            v53 = v94;
            v51 = v90;
            v50 = v91;
            v13 = v92;
            v15 = v93;
            v7 += v94;
          }
LABEL_206:
          v12 += v53;
          v24 = 0;
          v54 = 0LL;
          v52 = v156 - v12;
          goto LABEL_84;
        }
LABEL_326:
        v128 = (signed int)v53;
        if ( (signed int)v53 >= v52 )
          return 0LL;
        if ( v7 )
        {
          v129 = v7;
          v130 = v53;
          v131 = v50;
          v7 += (signed int)v53;
          v132 = v15;
          memset(v129, 32, (signed int)v53);
          LODWORD(v53) = v130;
          v50 = v131;
          v15 = v132;
        }
        v12 += v128;
        v133 = v24 - v53;
        v23 = __OFSUB__((_DWORD)v53, v24);
        v22 = (signed int)v53 - v24 < 0;
        v24 = 0;
        if ( v22 ^ v23 )
          v24 = v133;
        v52 = v156 - v12;
        if ( v167 )
        {
          v54 = v24;
          v136 = 1LL;
          if ( v24 )
            v136 = v24;
          if ( v136 >= v52 )
            return 0LL;
          if ( v7 )
          {
            if ( !v50 && (unsigned __int64)v24 > 1 )
            {
              v137 = v7;
              v138 = v136;
              v7 += v24 - 1;
              v139 = v15;
              memset(v137, 32, v24 - 1LL);
              v136 = v138;
              v50 = 0;
              v15 = v139;
              v54 = v24;
            }
            *(++v7 - 1) = v167;
          }
          v12 += v136;
          v13 = (_BYTE *)v8;
          i = 95;
          v51 = (char *)(v194 - v40);
          v52 = v156 - v12;
        }
        else
        {
          v54 = v24;
          v13 = (_BYTE *)v8;
          i = 95;
          v51 = (char *)(v194 - v40);
        }
        goto LABEL_84;
      }
      if ( !v166 )
      {
LABEL_79:
        v51 = (char *)(v194 - v40);
        v52 = v156 - v12;
        if ( i == 45 || (LODWORD(v53) = v50 - (_DWORD)v51, v50 - (signed int)v51 <= 0) )
        {
          LODWORD(v54) = 0;
          v13 = (_BYTE *)v8;
          if ( v24 >= 0 )
            LODWORD(v54) = v24;
          v54 = (signed int)v54;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          a2 = (char *)v50;
          if ( v50 >= v52 )
            return 0LL;
          v53 = (signed int)v53;
          v13 = (_BYTE *)v8;
          goto LABEL_204;
        }
        v167 = 0;
        goto LABEL_326;
      }
      if ( i != 45 )
      {
        v167 = 43;
        goto LABEL_190;
      }
      v120 = 43;
LABEL_299:
      LODWORD(v54) = 0;
      v121 = 1LL;
      if ( v24 >= 0 )
        LODWORD(v54) = v24;
      v54 = (signed int)v54;
      if ( (_DWORD)v54 )
        v121 = v54;
      if ( v156 - v12 <= v121 )
        return 0LL;
      if ( v7 )
      {
        if ( !v50 && v54 > 1 )
        {
          v122 = v120;
          v123 = v54;
          v124 = v15;
          memset(v7, 32, v24 - 1LL);
          v120 = v122;
          v54 = v123;
          v50 = 0;
          v15 = v124;
          v7 += v24 - 1;
        }
        *v7++ = v120;
      }
      v12 += v121;
      v13 = (_BYTE *)v8;
      i = 45;
      v51 = (char *)(v194 - v40);
      v52 = v156 - v12;
LABEL_84:
      v32 = v54;
      if ( (unsigned __int64)v51 >= v54 )
        v32 = (unsigned __int64)v51;
      if ( v32 < v52 )
      {
        if ( v7 )
        {
          if ( !v50 && (unsigned __int64)v51 < v54 )
          {
            v182 = v51;
            v55 = v24 - (_QWORD)v51;
            v174 = v13;
            v164 = v15;
            if ( i == 48 )
            {
              v134 = v7;
              v7 += v55;
              memset(v134, 48, v55);
              v15 = v164;
              v13 = v174;
              v51 = v182;
            }
            else
            {
              v56 = v7;
              v7 += v55;
              memset(v56, 32, v55);
              v51 = v182;
              v13 = v174;
              v15 = v164;
            }
          }
          v173 = v13;
          v36 = (size_t)v51;
          v35 = v40;
          v37 = v7;
          v163 = (unsigned __int64)v51;
LABEL_64:
          if ( v15 )
          {
            sub_4058D0((__int64)v37, (__int64)v35, v36);
            v38 = v163;
            v13 = v173;
          }
          else
          {
            memcpy(v37, v35, v36);
            v13 = v173;
            v38 = v163;
          }
LABEL_66:
          v7 += v38;
        }
LABEL_67:
        v12 += v32;
        goto LABEL_12;
      }
      return 0LL;
    case 0x3A:
      v119 = *(_BYTE *)(v8 + 1);
      a2 = (char *)(v8 + 1);
      for ( j = 1LL; v119 == 58; a2 = (char *)(v8 + j) )
        v119 = *(_BYTE *)(v8 + ++j);
      if ( v119 != 122 )
        goto LABEL_237;
      v8 = (signed __int64)a2;
LABEL_253:
      if ( tp->tm_isdst < 0 )
      {
        v13 = (_BYTE *)v8;
        goto LABEL_12;
      }
      v110 = tp->tm_gmtoff;
      LOBYTE(v73) = 1;
      if ( (signed int)v110 >= 0 )
      {
        LOBYTE(v73) = 0;
        if ( !(_DWORD)v110 )
          LOBYTE(v73) = *v158 == 45;
      }
      v170 = (signed int)v110 / 3600;
      v111 = (signed int)v110 / 60 % 60;
      v72 = (signed int)v110 / 60 % 60;
      v112 = (signed int)v110 % 60;
      if ( j == 1 )
        goto LABEL_362;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_381;
        if ( j != 3 )
        {
          v113 = *(_BYTE *)v8;
          v103 = (_BYTE *)v8;
LABEL_262:
          LODWORD(v105) = 0;
          a2 = (char *)(v156 - v12);
          if ( v24 >= 0 )
            LODWORD(v105) = v24;
          v105 = (signed int)v105;
          if ( v113 == 37 )
          {
            v82 = 1LL;
            v13 = v103;
            v104 = 1LL;
            if ( v105 )
              v82 = v105;
          }
          else
          {
            v8 = (signed __int64)v103;
LABEL_237:
            v102 = v8 - 1;
            do
            {
              v103 = (_BYTE *)v102;
              LODWORD(v104) = v8 - 1 + 2 - v102--;
            }
            while ( *(_BYTE *)(v102 + 1) != 37 );
            LODWORD(v105) = 0;
            v104 = (signed int)v104;
            v13 = (_BYTE *)v8;
            a2 = (char *)(v156 - v12);
            if ( v24 >= 0 )
              LODWORD(v105) = v24;
            v105 = (signed int)v105;
            v82 = (signed int)v105;
            if ( v104 >= (signed int)v105 )
              v82 = v104;
          }
LABEL_243:
          if ( (unsigned __int64)a2 > v82 )
          {
            if ( v7 )
            {
              if ( v104 < v105 )
              {
                v187 = v104;
                v106 = v24 - v104;
                v184 = v13;
                v177 = v103;
                v168 = v15;
                if ( i == 48 )
                {
                  v135 = v7;
                  v7 += v106;
                  memset(v135, 48, v106);
                  v15 = v168;
                  v103 = v177;
                  v13 = v184;
                  v104 = v187;
                }
                else
                {
                  v107 = v7;
                  v7 += v106;
                  memset(v107, 32, v106);
                  v104 = v187;
                  v13 = v184;
                  v103 = v177;
                  v15 = v168;
                }
              }
              v178 = v13;
              v169 = v104;
              if ( v15 )
              {
                sub_4058D0((__int64)v7, (__int64)v103, v104);
                v108 = v169;
                v13 = v178;
              }
              else
              {
                memcpy(v7, v103, v104);
                v13 = v178;
                v108 = v169;
              }
              v7 += v108;
            }
            v12 += v82;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v112 )
        {
LABEL_381:
          v147 = 10000 * v170;
          v50 = 9;
          v166 = 1;
          v148 = 100 * v72 + v147;
          v72 = 20;
          v71 = v148 + v112;
        }
        else if ( v111 )
        {
LABEL_362:
          v149 = 100 * v170;
          v50 = 6;
          v166 = 1;
          v71 = v72 + v149;
          v72 = 4;
        }
        else
        {
          v71 = v170;
          v50 = 3;
          v166 = 1;
        }
      }
      else
      {
        v150 = 100 * v170;
        v72 = 0;
        v166 = 1;
        v50 = 5;
        v71 = v111 + v150;
      }
      goto LABEL_121;
    case 0x70:
      v29 = 0;
LABEL_151:
      LOBYTE(v19) = 112;
      if ( (_BYTE)v16 )
        v29 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !(_DWORD)v20 )
      {
        v28 = v8;
        v27 = &v192;
        goto LABEL_52;
      }
      v50 = 0;
      goto LABEL_124;
  }
}

__int64 __fastcall sub_4070F0(void *a1, __int64 a2, char *a3, __int64 a4, __int64 a5, int a6)
{
  return sub_405920(a1, a3, a4, a2, 0, a5, a6);
}

char *__fastcall sub_407110(const char *a1)
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
  qword_614490 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_4071B0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_40C0D0(0LL);
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
      return (char *)v2;
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
    return (char *)v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_4072B0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
  char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  char *v66; // rax@277
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
  char *s2; // [sp+50h] [bp-78h]@2
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
        s2 = "'";
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
        a8 = sub_4071B0("`", v11);
        v58 = sub_4071B0("'", v11);
        v14 = v67;
        a9 = v58;
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
      s2 = "'";
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
        s2 = "'";
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
        s2 = "'";
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
            return sub_4072B0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_4072B0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
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
                return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
          return sub_4072B0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_4072B0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40BA50((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_4072B0((__int64)v9, v10, s);
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
      return sub_4072B0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_4072B0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
  char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  char *v66; // rax@277
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
  char *s2; // [sp+50h] [bp-78h]@2
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
        s2 = "'";
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
        a8 = sub_4071B0("`", v11);
        v58 = sub_4071B0("'", v11);
        v14 = v67;
        a9 = v58;
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
      s2 = "'";
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
        s2 = "'";
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
        s2 = "'";
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
            return sub_4072B0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_4072B0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
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
                return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
            return sub_4072B0((__int64)v9, v10, s);
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
              return sub_4072B0((__int64)v9, v10, s);
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
          return sub_4072B0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_4072B0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40BA50((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_4072B0((__int64)v9, v10, s);
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
      return sub_4072B0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_4084E0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int64 v7; // rdx@1
  __int128 *v8; // rbx@1
  int *v9; // r13@1
  signed __int64 v10; // rsi@4
  __int128 *v11; // rax@5
  signed __int64 v12; // rbx@7
  _BYTE *v13; // r12@7
  unsigned __int64 v14; // ST30_8@7
  unsigned __int64 v15; // rax@7
  unsigned __int64 v16; // rsi@8
  __int64 v17; // ST30_8@9
  _BYTE *v18; // rax@10
  int v19; // er8@10
  __int128 *v21; // rax@12
  char *v22; // [sp+8h] [bp-50h]@1
  int v23; // [sp+18h] [bp-40h]@1
  int v24; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v22 = a2;
  v6 = __errno_location();
  v8 = off_614318;
  v9 = v6;
  v23 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_614330 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_409550(a1, a2, v7);
    v10 = 16LL * ((signed int)a1 + 1);
    if ( off_614318 == &xmmword_614320 )
    {
      LODWORD(v21) = sub_409360(0LL, v10);
      v8 = v21;
      off_614318 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      LODWORD(v11) = sub_409360(off_614318, v10);
      off_614318 = v11;
      v8 = v11;
    }
    memset(&v8[dword_614330], 0, 16LL * ((signed int)a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v12 = (signed __int64)&v8[(signed int)a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_4072B0(v13, *(_QWORD *)v12, v22, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_6144A0 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_409300(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_4072B0(v18, v16, v22, v4, v19, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v23;
  return v13;
}

_BYTE *__fastcall sub_4084E0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int64 v7; // rdx@1
  __int128 *v8; // rbx@1
  int *v9; // r13@1
  signed __int64 v10; // rsi@4
  __int128 *v11; // rax@5
  signed __int64 v12; // rbx@7
  _BYTE *v13; // r12@7
  unsigned __int64 v14; // ST30_8@7
  unsigned __int64 v15; // rax@7
  unsigned __int64 v16; // rsi@8
  __int64 v17; // ST30_8@9
  _BYTE *v18; // rax@10
  int v19; // er8@10
  __int128 *v21; // rax@12
  char *v22; // [sp+8h] [bp-50h]@1
  int v23; // [sp+18h] [bp-40h]@1
  int v24; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v22 = a2;
  v6 = __errno_location();
  v8 = off_614318;
  v9 = v6;
  v23 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_614330 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_409550(a1, a2, v7);
    v10 = 16LL * ((signed int)a1 + 1);
    if ( off_614318 == &xmmword_614320 )
    {
      LODWORD(v21) = sub_409360(0LL, v10);
      v8 = v21;
      off_614318 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      LODWORD(v11) = sub_409360(off_614318, v10);
      off_614318 = v11;
      v8 = v11;
    }
    memset(&v8[dword_614330], 0, 16LL * ((signed int)a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v12 = (signed __int64)&v8[(signed int)a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_4072B0(v13, *(_QWORD *)v12, v22, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_6144A0 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_409300(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_4072B0(v18, v16, v22, v4, v19, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v23;
  return v13;
}

_BYTE *__fastcall sub_408B00(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_6145D0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_6145A0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_6145B0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_6145C0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_4084E0(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_408B80(char *a1)
{
  return sub_408B00(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_408BB0(__int64 a1, int a2, char *a3)
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
  v6 = 0x400000000000000LL;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_4084E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408D30(char *a1)
{
  return sub_4084E0(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6142E0);
}

__int64 __fastcall sub_408D50(char a1)
{
  return sub_40AAA0(a1);
}

int __fastcall sub_408D60(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_408D60(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_4091C0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_408D60(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_408D60(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_409300(size_t a1, __int64 a2)
{
  void *result; // rax@1
  __int64 v3; // rdx@1

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
  void *result; // rax@3
  __int64 v3; // rdx@3

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

void *__fastcall sub_409460(void *a1, unsigned __int64 *a2, signed __int64 a3)
{
  unsigned __int64 v3; // rax@1

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

void *__fastcall sub_409500(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_409300(a2, a2);
  return memcpy(v2, a1, a2);
}

void __noreturn sub_409550()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

signed __int64 __fastcall sub_409590(char *a1, __int64 a2, signed __int64 a3, signed __int64 a4, __int64 a5, __int64 a6, int a7)
{
  signed __int64 v7; // r15@1
  signed __int64 v8; // r14@1
  __int64 v9; // r13@1
  int v10; // ebx@1
  int v11; // eax@1
  signed __int64 v12; // rbp@2
  int *v13; // r14@4
  _BYTE *v14; // rax@6
  int v15; // esi@6
  int v17; // ebp@12
  int *v18; // rax@12
  signed int v19; // eax@15
  signed __int64 v20; // [sp+8h] [bp-40h]@0

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

signed __int64 __fastcall sub_409680(char *a1, signed __int64 a2, signed __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_409590(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_4096B0(char *nptr, char **a2, unsigned int a3, signed __int64 *a4, const char *a5)
{
  char **v5; // rbx@2
  int v6; // ebp@2
  const char *v7; // r14@4
  int *v8; // rax@4
  int *v9; // r13@4
  __int64 v10; // rax@4
  char *v11; // r15@4
  signed __int64 v12; // rbp@4
  signed int v13; // er12@6
  int v14; // er13@8
  signed __int64 v16; // rsi@17
  signed int v17; // eax@17
  signed __int64 v18; // rax@19
  char v19; // al@21
  char *v20; // rsi@31
  signed __int64 v21; // rcx@37
  signed __int64 v22; // rax@37
  signed __int64 v23; // rax@39
  signed __int64 v24; // rdi@42
  signed __int64 v25; // rcx@52
  signed __int64 v26; // r9@52
  signed int v27; // edi@53
  signed int v28; // er10@53
  signed __int64 v29; // rcx@59
  signed __int64 v30; // r9@59
  signed int v31; // edi@60
  signed __int64 v32; // rcx@66
  signed __int64 v33; // r9@66
  signed int v34; // edi@67
  signed __int64 v35; // rcx@73
  signed __int64 v36; // r9@73
  signed int v37; // edi@74
  signed __int64 v38; // rcx@80
  signed __int64 v39; // r9@80
  signed int v40; // edi@81
  signed __int64 v41; // rcx@87
  signed __int64 v42; // r9@87
  signed int v43; // edi@88
  signed __int64 *v44; // [sp+0h] [bp-58h]@1
  char *endptr; // [sp+18h] [bp-40h]@3

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
      goto LABEL_117;
    v14 = (unsigned __int8)*v11;
    v13 = 4;
    if ( !(_BYTE)v14 )
      return (unsigned int)v13;
    v12 = 1LL;
    v13 = 0;
    if ( !strchr(v7, (char)v14) )
LABEL_117:
      return 4;
LABEL_16:
    if ( (unsigned __int8)(v14 - 69) <= 0x2Fu
      && (v18 = 142129060940101LL, _bittest64(&v18, (unsigned int)(v14 - 69)))
      && strchr(v7, 48) )
    {
      v19 = v11[1];
      if ( v19 != 68 )
      {
        if ( v19 == 105 )
        {
          v17 = 1024;
          LODWORD(v16) = 2 * (v11[2] == 66) + 1;
          goto LABEL_18;
        }
        if ( v19 != 66 )
        {
          switch ( (unsigned __int64)(unsigned __int8)(v14 - 69) )
          {
            case 0uLL:
              v16 = 1LL;
              v32 = 1024LL;
              v33 = -9007199254740992LL;
              goto LABEL_67;
            case 1uLL:
            case 3uLL:
            case 4uLL:
            case 5uLL:
            case 7uLL:
            case 9uLL:
            case 0xAuLL:
            case 0xCuLL:
            case 0xDuLL:
            case 0xEuLL:
            case 0x10uLL:
            case 0x11uLL:
            case 0x12uLL:
            case 0x13uLL:
            case 0x16uLL:
            case 0x17uLL:
            case 0x18uLL:
            case 0x19uLL:
            case 0x1AuLL:
            case 0x1BuLL:
            case 0x1CuLL:
            case 0x1FuLL:
            case 0x20uLL:
            case 0x21uLL:
            case 0x23uLL:
            case 0x24uLL:
            case 0x25uLL:
            case 0x27uLL:
            case 0x29uLL:
            case 0x2AuLL:
            case 0x2BuLL:
            case 0x2CuLL:
            case 0x2DuLL:
            case 0x2EuLL:
              goto LABEL_27;
            case 2uLL:
            case 0x22uLL:
              v16 = 1LL;
              v35 = 1024LL;
              v36 = -9007199254740992LL;
              goto LABEL_74;
            case 6uLL:
            case 0x26uLL:
              v16 = 1LL;
              v21 = 1024LL;
              v22 = -9007199254740992LL;
              goto LABEL_38;
            case 8uLL:
            case 0x28uLL:
              v16 = 1LL;
              v21 = 1024LL;
              v24 = -9007199254740992LL;
              goto LABEL_43;
            case 0xBuLL:
              v16 = 1LL;
              v25 = 1024LL;
              v26 = -9007199254740992LL;
              goto LABEL_53;
            case 0xFuLL:
            case 0x2FuLL:
              v16 = 1LL;
              v29 = 1024LL;
              v30 = -9007199254740992LL;
              goto LABEL_60;
            case 0x14uLL:
              v16 = 1LL;
              v38 = 1024LL;
              v39 = -9007199254740992LL;
              goto LABEL_81;
            case 0x15uLL:
              v16 = 1LL;
              v41 = 1024LL;
              v42 = -9007199254740992LL;
              goto LABEL_88;
            case 0x1DuLL:
              v16 = 1LL;
              goto LABEL_48;
            case 0x1EuLL:
              v16 = 1LL;
              break;
          }
LABEL_31:
          v20 = &v11[v16];
          *v5 = v20;
          if ( *v20 )
            v13 |= 2u;
          goto LABEL_9;
        }
      }
      LODWORD(v16) = 2;
      v17 = 1000;
    }
    else
    {
      LODWORD(v16) = 1;
      v17 = 1024;
    }
LABEL_18:
    switch ( (_BYTE)v14 )
    {
      default:
        goto LABEL_27;
      case 0x42:
        v16 = (signed int)v16;
        if ( v12 < -9007199254740992LL )
          goto LABEL_46;
        if ( v12 > 0x1FFFFFFFFFFFFFLL )
          goto LABEL_105;
        v12 <<= 10;
        goto LABEL_31;
      case 0x77:
        v16 = (signed int)v16;
        if ( v12 < -4611686018427387904LL )
          goto LABEL_46;
        if ( v12 > 0x3FFFFFFFFFFFFFFFLL )
          goto LABEL_105;
        v12 *= 2LL;
        goto LABEL_31;
      case 0x4B:
      case 0x6B:
        v21 = v17;
        v16 = (signed int)v16;
        v22 = (signed __int64)0x8000000000000000LL / v17;
LABEL_38:
        if ( v12 < v22 )
          goto LABEL_46;
        v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
        goto LABEL_40;
      case 0x4D:
      case 0x6D:
        v21 = v17;
        v16 = (signed int)v16;
        v24 = (signed __int64)0x8000000000000000LL / v17;
LABEL_43:
        if ( v12 < v24 )
          goto LABEL_46;
        v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
        if ( v12 > 0x7FFFFFFFFFFFFFFFLL / v21 )
          goto LABEL_105;
        v12 *= v21;
        if ( v12 < v24 )
          goto LABEL_46;
LABEL_40:
        if ( v23 < v12 )
          goto LABEL_105;
        v12 *= v21;
        goto LABEL_31;
      case 0x62:
        v16 = (signed int)v16;
LABEL_48:
        if ( v12 < -18014398509481984LL )
        {
LABEL_46:
          v12 = 0x8000000000000000LL;
          v13 = 1;
        }
        else if ( v12 > 0x3FFFFFFFFFFFFFLL )
        {
LABEL_105:
          v12 = 0x7FFFFFFFFFFFFFFFLL;
          v13 = 1;
        }
        else
        {
          v12 <<= 9;
        }
        goto LABEL_31;
      case 0x63:
        v16 = (signed int)v16;
        goto LABEL_31;
      case 0x50:
        v25 = v17;
        v16 = (signed int)v16;
        v26 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x54:
      case 0x74:
        v29 = v17;
        v16 = (signed int)v16;
        v30 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x45:
        v32 = v17;
        v16 = (signed int)v16;
        v33 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x47:
      case 0x67:
        v35 = v17;
        v16 = (signed int)v16;
        v36 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x59:
        v38 = v17;
        v16 = (signed int)v16;
        v39 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x5A:
        v41 = v17;
        v16 = (signed int)v16;
        v42 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
    }
    v13 |= v28;
    goto LABEL_31;
  }
  if ( *v9 )
  {
    v13 = 4;
    if ( *v9 != 34 )
      return (unsigned int)v13;
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
        return (unsigned int)v13;
      }
      goto LABEL_16;
    }
  }
LABEL_9:
  *v44 = v12;
  return (unsigned int)v13;
}

__int64 __fastcall sub_409E00(char *nptr, char **a2, unsigned int a3, signed __int64 *a4, const char *a5)
{
  char **v5; // rbx@2
  int v6; // ebp@2
  const char *v7; // r14@4
  int *v8; // rax@4
  int *v9; // r13@4
  __int64 v10; // rax@4
  char *v11; // r15@4
  signed __int64 v12; // rbp@4
  signed int v13; // er12@6
  int v14; // er13@8
  signed __int64 v16; // rsi@17
  signed int v17; // eax@17
  signed __int64 v18; // rax@19
  char v19; // al@21
  char *v20; // rsi@31
  signed __int64 v21; // rcx@37
  signed __int64 v22; // rax@37
  signed __int64 v23; // rax@39
  signed __int64 v24; // rdi@42
  signed __int64 v25; // rcx@52
  signed __int64 v26; // r9@52
  signed int v27; // edi@53
  signed int v28; // er10@53
  signed __int64 v29; // rcx@59
  signed __int64 v30; // r9@59
  signed int v31; // edi@60
  signed __int64 v32; // rcx@66
  signed __int64 v33; // r9@66
  signed int v34; // edi@67
  signed __int64 v35; // rcx@73
  signed __int64 v36; // r9@73
  signed int v37; // edi@74
  signed __int64 v38; // rcx@80
  signed __int64 v39; // r9@80
  signed int v40; // edi@81
  signed __int64 v41; // rcx@87
  signed __int64 v42; // r9@87
  signed int v43; // edi@88
  signed __int64 *v44; // [sp+0h] [bp-58h]@1
  char *endptr; // [sp+18h] [bp-40h]@3

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
      goto LABEL_117;
    v14 = (unsigned __int8)*v11;
    v13 = 4;
    if ( !(_BYTE)v14 )
      return (unsigned int)v13;
    v12 = 1LL;
    v13 = 0;
    if ( !strchr(v7, (char)v14) )
LABEL_117:
      return 4;
LABEL_16:
    if ( (unsigned __int8)(v14 - 69) <= 0x2Fu
      && (v18 = 142129060940101LL, _bittest64(&v18, (unsigned int)(v14 - 69)))
      && strchr(v7, 48) )
    {
      v19 = v11[1];
      if ( v19 != 68 )
      {
        if ( v19 == 105 )
        {
          v17 = 1024;
          LODWORD(v16) = 2 * (v11[2] == 66) + 1;
          goto LABEL_18;
        }
        if ( v19 != 66 )
        {
          switch ( (unsigned __int64)(unsigned __int8)(v14 - 69) )
          {
            case 0uLL:
              v16 = 1LL;
              v32 = 1024LL;
              v33 = -9007199254740992LL;
              goto LABEL_67;
            case 1uLL:
            case 3uLL:
            case 4uLL:
            case 5uLL:
            case 7uLL:
            case 9uLL:
            case 0xAuLL:
            case 0xCuLL:
            case 0xDuLL:
            case 0xEuLL:
            case 0x10uLL:
            case 0x11uLL:
            case 0x12uLL:
            case 0x13uLL:
            case 0x16uLL:
            case 0x17uLL:
            case 0x18uLL:
            case 0x19uLL:
            case 0x1AuLL:
            case 0x1BuLL:
            case 0x1CuLL:
            case 0x1FuLL:
            case 0x20uLL:
            case 0x21uLL:
            case 0x23uLL:
            case 0x24uLL:
            case 0x25uLL:
            case 0x27uLL:
            case 0x29uLL:
            case 0x2AuLL:
            case 0x2BuLL:
            case 0x2CuLL:
            case 0x2DuLL:
            case 0x2EuLL:
              goto LABEL_27;
            case 2uLL:
            case 0x22uLL:
              v16 = 1LL;
              v35 = 1024LL;
              v36 = -9007199254740992LL;
              goto LABEL_74;
            case 6uLL:
            case 0x26uLL:
              v16 = 1LL;
              v21 = 1024LL;
              v22 = -9007199254740992LL;
              goto LABEL_38;
            case 8uLL:
            case 0x28uLL:
              v16 = 1LL;
              v21 = 1024LL;
              v24 = -9007199254740992LL;
              goto LABEL_43;
            case 0xBuLL:
              v16 = 1LL;
              v25 = 1024LL;
              v26 = -9007199254740992LL;
              goto LABEL_53;
            case 0xFuLL:
            case 0x2FuLL:
              v16 = 1LL;
              v29 = 1024LL;
              v30 = -9007199254740992LL;
              goto LABEL_60;
            case 0x14uLL:
              v16 = 1LL;
              v38 = 1024LL;
              v39 = -9007199254740992LL;
              goto LABEL_81;
            case 0x15uLL:
              v16 = 1LL;
              v41 = 1024LL;
              v42 = -9007199254740992LL;
              goto LABEL_88;
            case 0x1DuLL:
              v16 = 1LL;
              goto LABEL_48;
            case 0x1EuLL:
              v16 = 1LL;
              break;
          }
LABEL_31:
          v20 = &v11[v16];
          *v5 = v20;
          if ( *v20 )
            v13 |= 2u;
          goto LABEL_9;
        }
      }
      LODWORD(v16) = 2;
      v17 = 1000;
    }
    else
    {
      LODWORD(v16) = 1;
      v17 = 1024;
    }
LABEL_18:
    switch ( (_BYTE)v14 )
    {
      default:
        goto LABEL_27;
      case 0x42:
        v16 = (signed int)v16;
        if ( v12 < -9007199254740992LL )
          goto LABEL_46;
        if ( v12 > 0x1FFFFFFFFFFFFFLL )
          goto LABEL_105;
        v12 <<= 10;
        goto LABEL_31;
      case 0x77:
        v16 = (signed int)v16;
        if ( v12 < -4611686018427387904LL )
          goto LABEL_46;
        if ( v12 > 0x3FFFFFFFFFFFFFFFLL )
          goto LABEL_105;
        v12 *= 2LL;
        goto LABEL_31;
      case 0x4B:
      case 0x6B:
        v21 = v17;
        v16 = (signed int)v16;
        v22 = (signed __int64)0x8000000000000000LL / v17;
LABEL_38:
        if ( v12 < v22 )
          goto LABEL_46;
        v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
        goto LABEL_40;
      case 0x4D:
      case 0x6D:
        v21 = v17;
        v16 = (signed int)v16;
        v24 = (signed __int64)0x8000000000000000LL / v17;
LABEL_43:
        if ( v12 < v24 )
          goto LABEL_46;
        v23 = 0x7FFFFFFFFFFFFFFFLL / v21;
        if ( v12 > 0x7FFFFFFFFFFFFFFFLL / v21 )
          goto LABEL_105;
        v12 *= v21;
        if ( v12 < v24 )
          goto LABEL_46;
LABEL_40:
        if ( v23 < v12 )
          goto LABEL_105;
        v12 *= v21;
        goto LABEL_31;
      case 0x62:
        v16 = (signed int)v16;
LABEL_48:
        if ( v12 < -18014398509481984LL )
        {
LABEL_46:
          v12 = 0x8000000000000000LL;
          v13 = 1;
        }
        else if ( v12 > 0x3FFFFFFFFFFFFFLL )
        {
LABEL_105:
          v12 = 0x7FFFFFFFFFFFFFFFLL;
          v13 = 1;
        }
        else
        {
          v12 <<= 9;
        }
        goto LABEL_31;
      case 0x63:
        v16 = (signed int)v16;
        goto LABEL_31;
      case 0x50:
        v25 = v17;
        v16 = (signed int)v16;
        v26 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x54:
      case 0x74:
        v29 = v17;
        v16 = (signed int)v16;
        v30 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x45:
        v32 = v17;
        v16 = (signed int)v16;
        v33 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x47:
      case 0x67:
        v35 = v17;
        v16 = (signed int)v16;
        v36 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x59:
        v38 = v17;
        v16 = (signed int)v16;
        v39 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
      case 0x5A:
        v41 = v17;
        v16 = (signed int)v16;
        v42 = (signed __int64)0x8000000000000000LL / v17;
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
        break;
    }
    v13 |= v28;
    goto LABEL_31;
  }
  if ( *v9 )
  {
    v13 = 4;
    if ( *v9 != 34 )
      return (unsigned int)v13;
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
        return (unsigned int)v13;
      }
      goto LABEL_16;
    }
  }
LABEL_9:
  *v44 = v12;
  return (unsigned int)v13;
}

void __fastcall __noreturn sub_40A550(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi@1
  int v6; // ebx@1
  int v7; // er10@2
  __int64 v8; // rbp@2
  const char *v9; // rsi@2
  char *v10; // r12@3
  char *v11; // r13@3
  char *v12; // rax@4
  char v13; // [sp+Eh] [bp-2Ah]@6
  char v14; // [sp+Fh] [bp-29h]@6

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v7 = a2;
    v8 = a5;
    v9 = (&off_410BE0)[8 * v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_410B70[-(signed __int64)v7];
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
  __int64 v5; // rdi@1
  int v6; // ebx@1
  int v7; // er10@2
  __int64 v8; // rbp@2
  const char *v9; // rsi@2
  char *v10; // r12@3
  char *v11; // r13@3
  char *v12; // rax@4
  char v13; // [sp+Eh] [bp-2Ah]@6
  char v14; // [sp+Fh] [bp-29h]@6

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v7 = a2;
    v8 = a5;
    v9 = (&off_410BE0)[8 * v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_410B70[-(signed __int64)v7];
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
  char **v5; // r15@2
  unsigned __int64 *v6; // r14@2
  const char *v7; // r13@2
  int *v8; // rax@4
  int *v9; // r12@4
  char v10; // bl@4
  const unsigned __int16 *v11; // rsi@4
  char *v12; // rax@4
  unsigned __int64 v13; // rbx@8
  signed int v14; // ebp@10
  int v15; // er12@12
  char *v17; // rax@19
  char *v18; // r8@19
  signed __int64 v19; // rax@21
  char *v20; // rax@22
  char v21; // al@23
  int v22; // esi@27
  unsigned __int64 v23; // rdx@27
  char *v24; // r8@33
  unsigned __int64 v25; // kr18_8@37
  char *v26; // ST00_8@39
  char *v27; // rax@39
  signed int v28; // edi@47
  signed int v29; // er9@47
  bool v30; // of@48
  signed int v31; // edi@53
  signed int v32; // edi@59
  signed int v33; // edi@65
  signed int v34; // edi@71
  int v35; // [sp+0h] [bp-58h]@2
  char *v36; // [sp+0h] [bp-58h]@17
  char *v37; // [sp+8h] [bp-50h]@22
  char *endptr; // [sp+18h] [bp-40h]@3

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  v5 = a2;
  v35 = a3;
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
  while ( HIBYTE(v11[(unsigned __int8)v10]) & 0x20 )
    v10 = *++v12;
  if ( v10 == 45 )
    goto LABEL_16;
  v13 = __strtoul_internal(nptr, v5, v35, 0);
  if ( *v5 == nptr )
  {
    v36 = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
        v18 = v36;
        if ( v17 )
          goto LABEL_20;
      }
    }
    goto LABEL_16;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
LABEL_16:
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      v26 = *v5;
      v27 = strchr(v7, (char)v15);
      v18 = v26;
      if ( !v27 )
      {
LABEL_40:
        *v6 = v13;
        v14 |= 2u;
        return (unsigned int)v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 142129060940101LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
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
          switch ( (_BYTE)v15 )
          {
            case 0x4D:
            case 0x6D:
LABEL_30:
              if ( !is_mul_ok((signed int)v23, v13) || !is_mul_ok((signed int)v23, (signed int)v23 * v13) )
                goto LABEL_38;
              v13 *= (signed int)v23 * (signed __int64)(signed int)v23;
              goto LABEL_33;
            case 0x63:
              goto LABEL_33;
            case 0x4B:
            case 0x6B:
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( !is_mul_ok(v23, v25) )
                goto LABEL_38;
              goto LABEL_33;
            default:
              goto LABEL_40;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_38;
              v13 *= 2LL;
              goto LABEL_33;
            case 0x62:
LABEL_44:
              if ( v13 >> 55 )
                goto LABEL_38;
              v13 <<= 9;
              goto LABEL_33;
            case 0x5A:
LABEL_47:
              v28 = 7;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v28;
              }
              while ( v28 );
              goto LABEL_51;
            case 0x59:
LABEL_53:
              v31 = 8;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 0x54:
            case 0x74:
LABEL_59:
              v32 = 4;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 0x50:
LABEL_65:
              v33 = 5;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 0x45:
LABEL_71:
              v34 = 6;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v34;
              }
              while ( v34 );
LABEL_51:
              v14 |= v29;
              break;
            case 0x47:
            case 0x67:
LABEL_77:
              if ( is_mul_ok((signed int)v23, v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * (signed int)v23 * v13) )
              {
                v13 *= (signed int)v23 * (signed int)v23 * (signed __int64)(signed int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              break;
            case 0x42:
              if ( v13 >> 54 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 10;
              }
              break;
          }
          goto LABEL_33;
        }
        if ( v21 != 66 )
        {
          switch ( (unsigned __int64)(unsigned __int8)(v15 - 69) )
          {
            case 0uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_71;
            case 1uLL:
            case 3uLL:
            case 4uLL:
            case 5uLL:
            case 7uLL:
            case 9uLL:
            case 0xAuLL:
            case 0xCuLL:
            case 0xDuLL:
            case 0xEuLL:
            case 0x10uLL:
            case 0x11uLL:
            case 0x12uLL:
            case 0x13uLL:
            case 0x16uLL:
            case 0x17uLL:
            case 0x18uLL:
            case 0x19uLL:
            case 0x1AuLL:
            case 0x1BuLL:
            case 0x1CuLL:
            case 0x1FuLL:
            case 0x20uLL:
            case 0x21uLL:
            case 0x23uLL:
            case 0x24uLL:
            case 0x25uLL:
            case 0x27uLL:
            case 0x29uLL:
            case 0x2AuLL:
            case 0x2BuLL:
            case 0x2CuLL:
            case 0x2DuLL:
            case 0x2EuLL:
              goto LABEL_40;
            case 2uLL:
            case 0x22uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_77;
            case 6uLL:
            case 0x26uLL:
              v22 = 1;
              v23 = 1024LL;
              goto LABEL_37;
            case 8uLL:
            case 0x28uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_30;
            case 0xBuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_65;
            case 0xFuLL:
            case 0x2FuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_59;
            case 0x14uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_53;
            case 0x15uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_47;
            case 0x1DuLL:
              v22 = 1;
              goto LABEL_44;
            case 0x1EuLL:
              v22 = 1;
              break;
          }
LABEL_33:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *v6 = v13;
  return (unsigned int)v14;
}

int __fastcall sub_40AA20(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_40ABE0(stream) )
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

__int64 __fastcall sub_40AAA0(char a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx@3
  int v6; // eax@8
  int *v7; // rax@10
  int v8; // edi@10
  int v9; // er12@10
  int *v10; // rbp@10
  __int64 v11; // [sp+30h] [bp-38h]@1
  __int64 v12; // [sp+38h] [bp-30h]@1

  v11 = a3;
  v12 = a4;
  if ( a2 == 1030 )
  {
    if ( dword_6145D8 < 0 )
    {
      v4 = sub_40AAA0(a1);
      if ( v4 >= 0 && dword_6145D8 == -1 )
      {
LABEL_8:
        v6 = fcntl((unsigned __int8)v4, 1);
        if ( v6 < 0 || fcntl((unsigned __int8)v4, 2, v6 | 1u) == -1 )
        {
          v7 = __errno_location();
          v8 = v4;
          v4 = -1;
          v9 = *v7;
          v10 = v7;
          close(v8);
          *v10 = v9;
        }
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = fcntl(a1, 1030, (unsigned int)v11);
      if ( v4 >= 0 || *__errno_location() != 22 )
      {
        dword_6145D8 = 1;
      }
      else
      {
        v4 = sub_40AAA0(a1);
        if ( v4 >= 0 )
        {
          dword_6145D8 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_40ABE0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_40AC20(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_40AC20(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_40AC80(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_40AD60(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_40B380(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_40AC80(a2, a7);
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
        sub_40AC80((__int64)v11, a7);
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
            v40 = sub_40AD60(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_40AD60(v10, v11, v12, v53, v54, a6, a7, v8, 4262769LL);
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
        v40 = sub_40AD60(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_40B950(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_6145E0 = dword_61433C;
  dword_6145E4 = dword_614338;
  result = sub_40B380(a1, a2, a3, a4, a5, a6, (__int64)&dword_6145E0, a7);
  dword_61433C = dword_6145E0;
  nptr = (char *)qword_6145F0;
  dword_614334 = dword_6145E8;
  return result;
}

__int64 __fastcall sub_40B9D0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_40B950(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_40BA50(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx@2
  wchar_t *v5; // r12@3
  char *v6; // rbp@3
  char v8; // [sp+Ch] [bp-1Ch]@7

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
  int v1; // eax@2
  signed int v2; // edx@3

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
  return (unsigned int)v2;
}

void __fastcall sub_40BB20(void *a1)
{
  void *v1; // rbx@2

  if ( a1 )
  {
    do
    {
      v1 = *(void **)a1;
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_40BB50(void *a1)
{
  int *v1; // rbx@1
  int v2; // er13@1
  unsigned int v3; // ebp@1

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_40BAD0((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_40BB20(a1);
  *v1 = v2;
  return v3;
}

_BYTE *__fastcall sub_40BBA0(void *src)
{
  void *v1; // r12@2
  size_t v2; // rax@2
  signed __int64 v3; // rdi@2
  size_t v4; // rbp@2
  void *v5; // rax@4
  _BYTE *v6; // rbx@4
  _BYTE *result; // rax@6

  if ( src )
  {
    v1 = src;
    v2 = strlen((const char *)src);
    v3 = 118LL;
    v4 = v2 + 1;
    if ( v2 + 1 >= 0x76 )
      v3 = v2 + 1;
    v5 = malloc((v3 + 17) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_WORD *)v5 + 4) = 1;
      memcpy((char *)v5 + 9, v1, v4);
      v6[v4 + 9] = 0;
    }
    return v6;
  }
  result = malloc(0x80uLL);
  v6 = result;
  if ( !result )
    return v6;
  *(_QWORD *)result = 0LL;
  *((_WORD *)result + 4) = 0;
  return result;
}

signed __int64 __fastcall sub_40BC30(__int64 a1, unsigned __int64 a2)
{
  const char *v2; // r12@1
  __int64 v3; // rbp@2
  signed __int64 result; // rax@3
  const char *v5; // rbx@4
  signed __int64 v6; // r14@7
  __int64 v7; // rax@10
  size_t v8; // r15@16
  const char *v9; // rax@16
  _BYTE *v10; // rax@21

  v2 = *(const char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (const char *)(a1 + 9);
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
        v6 = v3 + 9;
        if ( (const char *)(v3 + 9) != v5 )
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
            memcpy((void *)v5, v2, v8);
            v5[v8] = 0;
            goto LABEL_12;
          }
          v10 = sub_40BBA0((void *)v2);
          *(_QWORD *)v3 = v10;
          if ( v10 )
          {
            v10[8] = 0;
            v5 = v10 + 9;
LABEL_12:
            *(_QWORD *)(a2 + 48) = v5;
            result = 1LL;
          }
          else
          {
            result = 0LL;
          }
          return result;
        }
        if ( !*(_BYTE *)(v3 + 8) )
        {
          v8 = strlen(v2) + 1;
          v9 = 0LL;
          goto LABEL_19;
        }
      }
      v5 += strlen(v5) + 1;
      if ( *v5 )
        goto LABEL_5;
      v7 = *(_QWORD *)v3;
      if ( !*(_QWORD *)v3 )
        goto LABEL_5;
      v5 = (const char *)(v7 + 9);
      v3 = *(_QWORD *)v3;
      if ( !strcmp((const char *)(v7 + 9), v2) )
        goto LABEL_12;
    }
  }
  return result;
}

signed __int64 __fastcall sub_40BDB0(__int64 a1)
{
  char *v1; // rax@1
  char *v2; // rbp@1
  _BYTE *v3; // rbx@3
  signed __int64 result; // rax@5
  int *v5; // rbp@10
  int v6; // er12@10

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
  if ( v3 && !(unsigned __int8)sub_40BAD0(a1) )
  {
    v5 = __errno_location();
    v6 = *v5;
    if ( v3 != (_BYTE *)1 )
      sub_40BB20(v3);
    *v5 = v6;
    result = 0LL;
  }
  else
  {
    result = (signed __int64)v3;
  }
  return result;
}

struct tm *__fastcall sub_40BE80(__int64 a1, const time_t *a2, struct tm *a3)
{
  struct tm *v3; // rbx@2
  void *v4; // r13@2
  struct tm *result; // rax@6

  if ( a1 )
  {
    v3 = a3;
    v4 = (void *)sub_40BDB0(a1);
    if ( v4 )
    {
      if ( localtime_r(a2, v3) && (unsigned __int8)sub_40BC30(a1, (unsigned __int64)v3) )
      {
        if ( v4 == (void *)1 || (unsigned __int8)sub_40BB50(v4) )
          return v3;
      }
      else if ( v4 != (void *)1 )
      {
        sub_40BB50(v4);
      }
    }
    result = 0LL;
  }
  else
  {
    result = gmtime_r(a2, a3);
  }
  return result;
}

int __fastcall sub_40BF30(__int64 a1, unsigned __int64 a2)
{
  void *v2; // r12@2
  time_t v3; // rax@3
  int result; // eax@8
  int v5; // eax@11
  time_t timer; // [sp+8h] [bp-60h]@3
  struct tm tp; // [sp+10h] [bp-58h]@10

  if ( a1 )
  {
    v2 = (void *)sub_40BDB0(a1);
    if ( !v2 )
      goto LABEL_20;
    LODWORD(v3) = sub_40CD00(a2);
    timer = v3;
    if ( v3 != -1
      || localtime_r(&timer, &tp)
      && ((v5 = *(_DWORD *)(a2 + 32), (v5 == 0) == (tp.tm_isdst == 0)) || v5 < 0 || tp.tm_isdst < 0)
      && !(tp.tm_sec ^ *(_DWORD *)a2 | tp.tm_min ^ *(_DWORD *)(a2 + 4) | tp.tm_hour ^ *(_DWORD *)(a2 + 8) | tp.tm_mday ^ *(_DWORD *)(a2 + 12) | tp.tm_year ^ *(_DWORD *)(a2 + 20) | tp.tm_mon ^ *(_DWORD *)(a2 + 16)) )
    {
      if ( !(unsigned __int8)sub_40BC30(a1, a2) )
        timer = -1LL;
    }
    if ( v2 == (void *)1 || (unsigned __int8)sub_40BB50(v2) )
      result = timer;
    else
LABEL_20:
      result = -1;
  }
  else
  {
    result = sub_40C050(a2);
  }
  return result;
}

__int64 __fastcall sub_40C050(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_411100[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_614618;
  v12 = sub_40C640(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40C800(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40C760(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_40C800(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40C760(v6);
          sub_40C800(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_614618 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40C050(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_411100[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_614618;
  v12 = sub_40C640(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40C800(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40C760(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_40C800(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40C760(v6);
          sub_40C800(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_614618 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40C050(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_411100[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_614618;
  v12 = sub_40C640(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40C800(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40C760(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_40C800(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40C760(v6);
          sub_40C800(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_614618 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40C050(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_411100[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_614618;
  v12 = sub_40C640(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40C800(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40C760(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_40C800(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40C760(v6);
          sub_40C800(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_614618 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40C050(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_411100[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_614618;
  v12 = sub_40C640(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40C800(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40C760(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_40C800(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40C760(v6);
          sub_40C800(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_614618 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40C050(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_411100[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_614618;
  v12 = sub_40C640(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40C800(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40C760(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_40C800(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40C760(v6);
          sub_40C800(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_614618 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40C050(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_411100[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_614618;
  v12 = sub_40C640(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40C800(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40C760(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_40C800(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40C760(v6);
          sub_40C800(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_614618 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40C050(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_411100[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_614618;
  v12 = sub_40C640(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40C800(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40C760(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_40C800(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40C760(v6);
          sub_40C800(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_614618 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

int __fastcall sub_40C070(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

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
          v1 = "\t" + 1;
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
                v1 = "\t" + 1;
                v2 = v59;
                free(v60);
                sub_40AA20(v61);
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
            sub_40AA20(v40);
            if ( !v62 )
              goto LABEL_25;
            v1[v62] = 0;
            goto LABEL_26;
          }
          close(v18);
        }
LABEL_25:
        v1 = "\t" + 1;
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

signed __int64 __fastcall sub_40C640(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed int a6, int a7, int a8, int a9, int a10)
{
  signed int v10; // er10@1
  signed int v11; // er12@1

  v10 = (unsigned __int64)(a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (a6 >> 2) + 475 - ((a6 & 3) == 0);
  return a5
       + 60
       * (a4
        + 60
        * (a3
         + 24
         * ((signed int)(v10
                       - v11
                       - (v10 / 25
                        - ((unsigned int)(v10 % 25) >> 31)
                        - (v11 / 25
                         - ((unsigned int)(v11 % 25) >> 31)))
                       + ((signed int)(v10 / 25 - ((unsigned int)(v10 % 25) >> 31)) >> 2)
                       - ((signed int)(v11 / 25 - ((unsigned int)(v11 % 25) >> 31)) >> 2))
          + 365 * (a1 - a6)
          + a2
          - a7)
         - a8)
        - a9)
       - a10;
}

signed __int64 __fastcall sub_40C760(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed __int64 a6, __int64 a7)
{
  signed __int64 v7; // rbx@1
  signed __int64 v8; // rax@2
  unsigned __int8 v9; // of@2
  signed __int64 result; // rax@2

  v7 = a6;
  if ( !a7
    || (v8 = sub_40C640(
               a1,
               a2,
               a3,
               a4,
               a5,
               *(_DWORD *)(a7 + 20),
               *(_DWORD *)(a7 + 28),
               *(_DWORD *)(a7 + 8),
               *(_DWORD *)(a7 + 4),
               *(_DWORD *)a7),
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

int __fastcall sub_40C800(int (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 v3; // r13@1
  __int64 v4; // rax@1
  signed __int64 v5; // r14@3
  signed __int64 v6; // rbp@3
  signed __int64 v7; // rdx@6
  signed __int64 v8; // rbx@6
  __int64 v10; // [sp+8h] [bp-30h]@1

  v3 = a3;
  v10 = *a2;
  LODWORD(v4) = a1(&v10, a3);
  if ( !v4 )
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
        v10 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        LODWORD(v4) = a1(&v10, v3);
        if ( !v4 )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !v4 && v6 )
      {
        v10 = v6;
        LODWORD(v4) = a1(&v10, v3);
      }
    }
  }
  return v4;
}

void sub_40CD00()
{
  tzset();
  JUMPOUT(&loc_40C8C0);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40CD90(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_614268 )
    v1 = unk_614268;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40CDA8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_613E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
