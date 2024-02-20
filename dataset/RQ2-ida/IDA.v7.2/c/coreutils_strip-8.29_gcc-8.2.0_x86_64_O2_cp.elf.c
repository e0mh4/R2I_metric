__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char **v3; // rbx
  char *v4; // rax
  char *v5; // r12
  char *v6; // r14
  char *v7; // r15
  char v8; // r13
  int v9; // eax
  char *v10; // rax
  char *v11; // rax
  const char *v12; // rsi
  char *v13; // rax
  int v14; // eax
  __int64 result; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  int *v19; // rax
  int *v20; // rbx
  __int64 v21; // rbp
  char *v22; // rax
  char *v23; // rax
  __int64 v24; // rbp
  char *v25; // rbx
  int *v26; // rax
  char *v27; // rax
  unsigned __int8 v28; // [rsp+6h] [rbp-122h]
  char v29; // [rsp+7h] [rbp-121h]
  char *v30; // [rsp+8h] [rbp-120h]
  int v31; // [rsp+10h] [rbp-118h]
  int v32; // [rsp+14h] [rbp-114h]
  __int64 v33; // [rsp+18h] [rbp-110h]
  __int64 v34; // [rsp+20h] [rbp-108h]
  __int16 v35; // [rsp+28h] [rbp-100h]
  int v36; // [rsp+2Ch] [rbp-FCh]
  __int64 v37; // [rsp+30h] [rbp-F8h]
  __int64 v38; // [rsp+38h] [rbp-F0h]
  bool v39; // [rsp+40h] [rbp-E8h]
  int v40; // [rsp+44h] [rbp-E4h]
  __int64 v41; // [rsp+48h] [rbp-E0h]
  __int64 v42; // [rsp+50h] [rbp-D8h]
  struct stat stat_buf; // [rsp+60h] [rbp-C8h]

  v3 = a2;
  sub_40C3A0(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_4128F0(sub_40A800);
  byte_61B4CA = 0;
  sub_405170(&v31);
  v33 = 8589934596LL;
  v40 = 0;
  v32 = 1;
  v34 = 0x100000000LL;
  v35 = 0;
  v36 = 0;
  v37 = 0x1000000LL;
  v38 = 0LL;
  v4 = getenv("POSIXLY_CORRECT");
  v28 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v30 = 0LL;
  v29 = 0;
  v39 = v4 != 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  while ( 1 )
  {
    v9 = sub_411340(a1, v3, "abdfHilLnprst:uvxPRS:TZ", &off_413540, 0LL);
    if ( v9 == -1 )
      break;
    switch ( v9 + 131 )
    {
      case 0:
        sub_40FF60((char)stdout);
        exit(0);
        return result;
      case 1:
        sub_403C80(0);
        return result;
      case 203:
        v32 = 3;
        continue;
      case 207:
        v32 = 4;
        continue;
      case 211:
        v32 = 2;
        continue;
      case 213:
      case 245:
        BYTE2(v38) = 1;
        continue;
      case 214:
        v7 = filename;
        v8 = 1;
        continue;
      case 215:
        v28 = 1;
        continue;
      case 221:
        if ( byte_61B4CA )
        {
          if ( filename )
            v30 = filename;
          else
            BYTE1(v37) = 1;
        }
        else if ( filename )
        {
          v11 = dcgettext(0LL, "warning: ignoring --context; it requires an SELinux-enabled kernel", 5);
          error(0, 0, v11);
        }
        continue;
      case 228:
        v32 = 2;
        BYTE2(v37) = 1;
        BYTE1(v36) = 1;
        HIWORD(v36) = 257;
        BYTE4(v37) = 1;
        if ( byte_61B4CA )
          BYTE5(v37) = 1;
        HIBYTE(v37) = 1;
        *(_WORD *)((char *)&v38 + 1) = 257;
        continue;
      case 229:
        v8 = 1;
        if ( filename )
          v6 = filename;
        continue;
      case 231:
        BYTE2(v37) = 1;
        v32 = 2;
        continue;
      case 233:
        BYTE6(v34) = 1;
        continue;
      case 236:
        LODWORD(v33) = 3;
        continue;
      case 239:
        HIBYTE(v34) = 1;
        continue;
      case 241:
        LODWORD(v33) = 2;
        continue;
      case 243:
        goto LABEL_5;
      case 246:
        goto LABEL_44;
      case 247:
        if ( v5 )
          goto LABEL_90;
        if ( __xstat(1, filename, &stat_buf) )
          goto LABEL_89;
        v5 = filename;
        if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
        {
          v3 = (char **)sub_40DDD0(4LL, filename);
          v10 = dcgettext(0LL, "target %s is not a directory", 5);
          error(1, 0, v10, v3);
LABEL_44:
          BYTE4(v38) = 1;
        }
        break;
      case 248:
        BYTE5(v38) = 1;
        continue;
      case 249:
        BYTE6(v38) = 1;
        continue;
      case 251:
        LOBYTE(v36) = 1;
        continue;
      case 259:
        BYTE3(v37) = 0;
        continue;
      case 260:
        v29 = 1;
        continue;
      case 261:
        sub_403280(filename, &v31, 0LL);
        continue;
      case 262:
        byte_61B4C9 = 1;
        continue;
      case 263:
        if ( filename )
        {
          sub_403280(filename, &v31, 1LL);
          BYTE4(v37) = 1;
        }
        else
        {
LABEL_5:
          BYTE1(v36) = 1;
          HIWORD(v36) = 257;
          BYTE4(v37) = 1;
        }
        continue;
      case 264:
        if ( filename )
          v40 = dword_413900[sub_409FF0("--reflink", filename, off_413910, dword_413900, 4LL, off_61B3C8)];
        else
          v40 = 2;
        continue;
      case 265:
        HIDWORD(v33) = dword_413928[sub_409FF0("--sparse", filename, off_413940, dword_413928, 4LL, off_61B3C8)];
        continue;
      case 266:
        byte_61B4C8 = 1;
        continue;
      case 267:
        BYTE5(v34) = 1;
        continue;
      default:
        goto LABEL_86;
    }
  }
  if ( HIBYTE(v34) && BYTE4(v38) )
  {
    v12 = "cannot make both hard and symbolic links";
    goto LABEL_85;
  }
  if ( v8 )
  {
    v12 = "options --backup and --no-clobber are mutually exclusive";
    if ( (_DWORD)v33 == 2 )
    {
LABEL_85:
      v18 = dcgettext(0LL, v12, 5);
      error(0, 0, v18);
LABEL_86:
      sub_403C80(1);
    }
    if ( v40 == 2 && HIDWORD(v33) != 2 )
    {
LABEL_82:
      v12 = "--reflink can be used only with --sparse=auto";
      goto LABEL_85;
    }
    v13 = dcgettext(0LL, "backup type", 5);
    v14 = sub_40A730(v13, v6);
  }
  else if ( v40 == 2 )
  {
    if ( HIDWORD(v33) != 2 )
      goto LABEL_82;
    v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  v31 = v14;
  sub_40A180(v7);
  if ( v32 == 1 )
    goto LABEL_71;
LABEL_56:
  if ( BYTE2(v38) )
    goto LABEL_74;
  while ( 1 )
  {
    if ( !BYTE1(v37) && !v30 )
    {
      if ( !BYTE6(v37) || byte_61B4CA )
        goto LABEL_62;
      goto LABEL_70;
    }
    if ( !BYTE6(v37) )
      break;
    if ( BYTE5(v37) )
    {
      v17 = dcgettext(0LL, "cannot set target context and preserve it", 5);
      error(1, 0, v17);
      goto LABEL_77;
    }
    if ( byte_61B4CA )
      goto LABEL_61;
LABEL_70:
    v16 = dcgettext(0LL, "cannot preserve security context without an SELinux-enabled kernel", 5);
    error(1, 0, v16);
LABEL_71:
    if ( !BYTE2(v38) || HIBYTE(v34) )
    {
LABEL_77:
      v32 = 4;
      goto LABEL_56;
    }
    v32 = 2;
LABEL_74:
    BYTE4(v34) = v29;
  }
  BYTE5(v37) = 0;
LABEL_61:
  if ( v30 )
  {
    v19 = __errno_location();
    *v19 = 95;
    v20 = v19;
    v21 = sub_40E020(v30);
    v22 = dcgettext(0LL, "failed to set default file creation context to %s", 5);
    error(1, *v20, v22, v21);
    goto LABEL_88;
  }
LABEL_62:
  if ( (_BYTE)v38 )
  {
LABEL_88:
    v23 = dcgettext(0LL, "cannot preserve extended attributes, cp is built without xattr support", 5);
    error(1, 0, v23);
LABEL_89:
    v24 = sub_40DDD0(4LL, filename);
    v25 = dcgettext(0LL, "failed to access %s", 5);
    v26 = __errno_location();
    error(1, *v26, v25, v24);
LABEL_90:
    v27 = dcgettext(0LL, "multiple target directories specified", 5);
    error(1, 0, v27);
    start();
  }
  sub_409500();
  return (unsigned __int8)sub_4041B0(a1 - dword_61B43C, &v3[dword_61B43C], v5, v28, &v31) ^ 1u;
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

__int64 *sub_4031CB()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_4031EA()
{
  return 0LL;
}

__int64 *sub_403221()
{
  __int64 *result; // rax

  if ( !byte_61B468 )
  {
    while ( qword_61B470 < (unsigned __int64)(&qword_61AE48 - qword_61AE40 - 1) )
      ((void (*)(void))qword_61AE40[++qword_61B470])();
    result = sub_4031CB();
    byte_61B468 = 1;
  }
  return result;
}

__int64 sub_403278()
{
  return sub_4031EA();
}

void __fastcall sub_403280(void *a1, _BYTE *a2, char a3)
{
  const char *v3; // r13
  char v4; // bp
  char v5; // bl
  char *v6; // r14
  const char *v7; // rbx
  __int64 v8; // r15
  char *v9; // rax
  bool v10; // zf

  v3 = "--preserve";
  v4 = a3;
  v5 = a3;
  v6 = (char *)sub_410310(a1);
  if ( !v5 )
    v3 = "--no-preserve";
  v7 = v6;
  do
  {
    v8 = 0LL;
    v9 = strchr(v7, 44);
    if ( v9 )
    {
      *v9 = 0;
      v8 = (__int64)(v9 + 1);
    }
    switch ( sub_409FF0(v3, v7, off_413500, &dword_4134E0, 4LL, off_61B3C8) )
    {
      case 0LL:
      case 7LL:
        a2[30] = v4;
        a2[32] = v4 ^ 1;
        break;
      case 1LL:
        a2[31] = v4;
        break;
      case 2LL:
        a2[29] = v4;
        break;
      case 3LL:
        a2[34] = v4;
        break;
      case 4LL:
        a2[38] = v4;
        a2[37] = v4;
        break;
      case 5LL:
        a2[39] = v4;
        a2[40] = v4;
        break;
      case 6LL:
        a2[30] = v4;
        v10 = byte_61B4CA == 0;
        a2[31] = v4;
        a2[29] = v4;
        a2[34] = v4;
        a2[32] = v4 ^ 1;
        if ( !v10 )
          a2[37] = v4;
        a2[39] = v4;
        break;
      default:
        abort();
        return;
    }
    v7 = (const char *)v8;
  }
  while ( v8 );
  free(v6);
}

void __fastcall sub_403280(void *a1, _BYTE *a2, char a3)
{
  const char *v3; // r13
  char v4; // bp
  char v5; // bl
  char *v6; // r14
  const char *v7; // rbx
  __int64 v8; // r15
  char *v9; // rax
  bool v10; // zf

  v3 = "--preserve";
  v4 = a3;
  v5 = a3;
  v6 = (char *)sub_410310(a1);
  if ( !v5 )
    v3 = "--no-preserve";
  v7 = v6;
  do
  {
    v8 = 0LL;
    v9 = strchr(v7, 44);
    if ( v9 )
    {
      *v9 = 0;
      v8 = (__int64)(v9 + 1);
    }
    switch ( sub_409FF0(v3, v7, off_413500, &dword_4134E0, 4LL, off_61B3C8) )
    {
      case 0LL:
      case 7LL:
        a2[30] = v4;
        a2[32] = v4 ^ 1;
        break;
      case 1LL:
        a2[31] = v4;
        break;
      case 2LL:
        a2[29] = v4;
        break;
      case 3LL:
        a2[34] = v4;
        break;
      case 4LL:
        a2[38] = v4;
        a2[37] = v4;
        break;
      case 5LL:
        a2[39] = v4;
        a2[40] = v4;
        break;
      case 6LL:
        a2[30] = v4;
        v10 = byte_61B4CA == 0;
        a2[31] = v4;
        a2[29] = v4;
        a2[34] = v4;
        a2[32] = v4 ^ 1;
        if ( !v10 )
          a2[37] = v4;
        a2[39] = v4;
        break;
      default:
        abort();
        return;
    }
    v7 = (const char *)v8;
  }
  while ( v8 );
  free(v6);
}

__int64 __fastcall sub_4033E0(char *filename, struct stat *stat_buf, _BYTE *a3)
{
  _BYTE *v3; // r13
  int v4; // eax
  __int64 result; // rax
  int v6; // er12
  __int64 v7; // rbx
  char *v8; // rax

  v3 = a3;
  v4 = __xstat(1, filename, stat_buf);
  if ( v4 )
  {
    v6 = *__errno_location();
    if ( !v6 )
    {
      LOBYTE(v4) = (stat_buf->st_mode & 0xF000) == 0x4000;
      return v4 & 1;
    }
    if ( v6 == 2 )
    {
      *v3 = 1;
      result = 0LL;
    }
    else
    {
      v7 = sub_40DDD0(4LL, filename);
      v8 = dcgettext(0LL, "failed to access %s", 5);
      error(1, v6, v8, v7);
      result = sub_4034A0((void *)1);
    }
  }
  else
  {
    if ( (stat_buf->st_mode & 0xF000) != 0x4000 )
      return v4 & 1;
    result = 1LL;
  }
  return result;
}

__int64 __fastcall sub_4034A0(void *src, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  size_t v7; // rax
  void *v8; // rsp
  char *v9; // r12
  size_t v10; // r14
  void *v11; // rsp
  _QWORD *v12; // rax
  char *v13; // rdi
  bool v14; // zf
  char *v15; // rax
  char *v16; // rbx
  int v17; // er14
  int v18; // er8
  __int64 v19; // rax
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __int64 v23; // r15
  __m128i v24; // xmm4
  __m128i v25; // xmm5
  __m128i v26; // xmm6
  __m128i v27; // xmm7
  __m128i v28; // xmm0
  __int64 *v29; // rcx
  __int64 v30; // rax
  int v31; // esi
  int v32; // er14
  __int16 v33; // ax
  __mode_t v34; // esi
  __int64 v35; // rbx
  char *v36; // rax
  __int64 result; // rax
  int v38; // eax
  __mode_t v39; // eax
  unsigned __int64 v40; // rsi
  __int64 v41; // rbx
  char *v42; // rax
  const char *v43; // rsi
  __int64 v44; // r12
  char *v45; // rbx
  int *v46; // rax
  __int64 v47; // [rsp+0h] [rbp-170h]
  _QWORD *v48; // [rsp+8h] [rbp-168h]
  int errnum[2]; // [rsp+10h] [rbp-160h]
  char *filename; // [rsp+18h] [rbp-158h]
  struct stat stat_buf; // [rsp+20h] [rbp-150h]
  struct stat v52; // [rsp+B0h] [rbp-C0h]

  v6 = a6;
  v48 = (_QWORD *)a4;
  *(_QWORD *)errnum = a5;
  v47 = a3;
  v7 = strlen((const char *)src);
  v8 = alloca(v7 + 9);
  v9 = (char *)memcpy((void *)(((unsigned __int64)&v48 + 7) & 0xFFFFFFFFFFFFFFF0LL), src, v7 + 1);
  v10 = sub_40AA80(v9);
  v11 = alloca(v10 + 9);
  memcpy((void *)(((unsigned __int64)&v48 + 7) & 0xFFFFFFFFFFFFFFF0LL), v9, v10);
  v12 = v48;
  *(_BYTE *)((((unsigned __int64)&v48 + 7) & 0xFFFFFFFFFFFFFFF0LL) + v10) = 0;
  *v12 = 0LL;
  if ( __xstat(1, (const char *)(((unsigned __int64)&v48 + 7) & 0xFFFFFFFFFFFFFFF0LL), &stat_buf) )
  {
    v13 = &v9[a2];
    v14 = v9[a2] == 47;
    filename = &v9[a2];
    if ( v14 )
    {
      do
        ++v13;
      while ( *v13 == 47 );
    }
    else
    {
      v13 = filename;
    }
    while ( 1 )
    {
      v15 = strchr(v13, 47);
      v16 = v15;
      if ( !v15 )
        goto LABEL_47;
      *v15 = 0;
      v17 = __xstat(1, v9, &stat_buf);
      if ( v17 || *(_DWORD *)(v6 + 28) & 0xFFFFFF00 )
      {
        if ( __xstat(1, filename, &v52) )
        {
          v18 = *__errno_location();
          if ( v18 )
            goto LABEL_36;
        }
        else if ( (v52.st_mode & 0xF000) != 0x4000 )
        {
          v18 = 20;
LABEL_36:
          errnum[0] = v18;
          v35 = sub_40DDD0(4LL, filename);
          v36 = dcgettext(0LL, "failed to get attributes of %s", 5);
          error(0, errnum[0], v36, v35);
          return 0LL;
        }
        v19 = sub_4100E0(168LL);
        v20 = _mm_load_si128((const __m128i *)&v52.st_nlink);
        v21 = _mm_load_si128((const __m128i *)&v52.st_gid);
        v22 = _mm_load_si128((const __m128i *)&v52.st_size);
        v23 = v19;
        *(__m128i *)v19 = _mm_load_si128((const __m128i *)&v52);
        v24 = _mm_load_si128((const __m128i *)&v52.st_blocks);
        v25 = _mm_load_si128((const __m128i *)&v52.st_atim.tv_nsec);
        v26 = _mm_load_si128((const __m128i *)&v52.st_mtim.tv_nsec);
        v27 = _mm_load_si128((const __m128i *)&v52.st_ctim.tv_nsec);
        *(__m128i *)(v19 + 16) = v20;
        v28 = _mm_load_si128((const __m128i *)&v52.__unused[1]);
        *(__m128i *)(v19 + 32) = v21;
        v29 = v48;
        *(__m128i *)(v19 + 48) = v22;
        *(__m128i *)(v19 + 64) = v24;
        *(__m128i *)(v19 + 80) = v25;
        *(__m128i *)(v19 + 96) = v26;
        *(__m128i *)(v19 + 112) = v27;
        *(__m128i *)(v19 + 128) = v28;
        *(_BYTE *)(v19 + 144) = 0;
        *(_QWORD *)(v19 + 152) = v16 - v9;
        v30 = *v29;
        *v29 = v23;
        *(_QWORD *)(v23 + 160) = v30;
        if ( v17 )
          break;
      }
      if ( !(unsigned __int8)sub_404FC0(filename, v9, 0LL, 0LL, v6) )
        return 0LL;
      if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      {
        v40 = (unsigned __int64)v9;
        goto LABEL_50;
      }
      **(_BYTE **)errnum = 0;
LABEL_10:
      if ( *(_QWORD *)(v6 + 32) & 0xFF000000FF00LL
        && !(unsigned __int8)sub_405090(v9, *(unsigned __int8 *)(v6 + 37), 0LL, v6)
        && *(_BYTE *)(v6 + 38) )
      {
        return 0LL;
      }
LABEL_11:
      v14 = v16[1] == 47;
      v13 = v16 + 1;
      *v16 = 47;
      if ( v14 )
      {
        do
          ++v13;
        while ( *v13 == 47 );
      }
    }
    if ( !(unsigned __int8)sub_404FC0(filename, v9, *(unsigned int *)(v23 + 24), 1LL, v6) )
      return 0LL;
    v31 = *(_DWORD *)(v23 + 24);
    **(_BYTE **)errnum = 1;
    if ( *(_BYTE *)(v6 + 29) )
    {
      v32 = v31 & 0x3F;
      v33 = ~(v31 & 0x3F);
    }
    else
    {
      v32 = 0;
      v33 = -1;
      if ( *(_BYTE *)(v6 + 30) )
      {
        v32 = v31 & 0x12;
        v33 = ~(v31 & 0x12);
      }
    }
    if ( *(_BYTE *)(v6 + 32) )
      LOWORD(v31) = 511;
    if ( mkdir(v9, (unsigned __int16)v33 & (unsigned __int16)v31 & 0xFFF) )
    {
      v43 = "cannot make directory %s";
      v44 = sub_40DDD0(4LL, v9);
      goto LABEL_54;
    }
    if ( v47 )
      __printf_chk(1LL, v47, filename, v9);
    if ( __lxstat(1, v9, &stat_buf) )
    {
      v43 = "failed to get attributes of %s";
      v44 = sub_40DDD0(4LL, v9);
LABEL_54:
      v45 = dcgettext(0LL, v43, 5);
      v46 = __errno_location();
      error(0, *v46, v45, v44);
      return 0LL;
    }
    v34 = stat_buf.st_mode;
    if ( !*(_BYTE *)(v6 + 30) )
    {
      if ( v32 & ~stat_buf.st_mode
        && (v38 = sub_4053D0(), v34 = stat_buf.st_mode, v32 &= ~v38, v39 = stat_buf.st_mode, v32 & ~stat_buf.st_mode) )
      {
        *(_BYTE *)(v23 + 144) = 1;
        *(_DWORD *)(v23 + 24) = v39 | v32;
      }
      else
      {
        if ( (v34 & 0x1C0) == 448 )
          goto LABEL_32;
        *(_BYTE *)(v23 + 144) = 1;
        *(_DWORD *)(v23 + 24) = v34 | v32;
      }
    }
    if ( (v34 & 0x1C0) != 448 && chmod(v9, v34 | 0x1C0) )
    {
      v43 = "setting permissions for %s";
      v44 = sub_40DDD0(4LL, v9);
      goto LABEL_54;
    }
LABEL_32:
    if ( **(_BYTE **)errnum )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (stat_buf.st_mode & 0xF000) == 0x4000 )
  {
    **(_BYTE **)errnum = 0;
LABEL_47:
    result = 1LL;
  }
  else
  {
    v40 = ((unsigned __int64)&v48 + 7) & 0xFFFFFFFFFFFFFFF0LL;
LABEL_50:
    v41 = sub_40DDD0(4LL, v40);
    v42 = dcgettext(0LL, "%s exists but is not a directory", 5);
    error(0, 0, v42, v41);
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_403A50(void *src, __int64 a2, __int64 a3, _BYTE *a4)
{
  _BYTE *v4; // r13
  __int64 v5; // rbx
  size_t v6; // rax
  void *v7; // rsp
  char *v8; // rax
  char *v9; // r15
  char *v10; // r12
  unsigned int v11; // er14
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  char *v16; // rbx
  int *v17; // rax
  const char *v18; // rsi
  __int64 v19; // r12
  char *v20; // rbx
  int *v21; // rax
  __int64 v23; // [rsp+8h] [rbp-48h]
  __int64 v24; // [rsp+10h] [rbp-40h]
  __int64 v25; // [rsp+18h] [rbp-38h]

  v4 = a4;
  v5 = a3;
  v6 = strlen((const char *)src);
  v7 = alloca(v6 + 9);
  v8 = (char *)memcpy((void *)(((unsigned __int64)&v23 + 7) & 0xFFFFFFFFFFFFFFF0LL), src, v6 + 1);
  v9 = &v8[a2];
  if ( !v5 )
    return 1;
  v10 = v8;
  while ( 1 )
  {
    v12 = v4[31] == 0;
    v10[*(_QWORD *)(v5 + 152)] = 0;
    if ( !v12 )
    {
      v13 = *(_QWORD *)(v5 + 88);
      v23 = *(_QWORD *)(v5 + 80);
      v14 = *(_QWORD *)(v5 + 96);
      v24 = v13;
      v25 = v14;
      if ( (unsigned int)sub_40F8A0(v10) )
      {
        v11 = 0;
        v15 = sub_40DDD0(4LL, v10);
        v16 = dcgettext(0LL, "failed to preserve times for %s", 5);
        v17 = __errno_location();
        error(0, *v17, v16, v15);
        return v11;
      }
    }
    if ( !v4[29] || !lchown(v10, *(_DWORD *)(v5 + 28), *(_DWORD *)(v5 + 32)) )
    {
      v11 = (unsigned __int8)v4[30];
      if ( (_BYTE)v11 )
        goto LABEL_13;
      goto LABEL_5;
    }
    v11 = sub_4051B0(v4);
    if ( !(_BYTE)v11 )
      break;
    lchown(v10, 0xFFFFFFFF, *(_DWORD *)(v5 + 32));
    v11 = (unsigned __int8)v4[30];
    if ( (_BYTE)v11 )
    {
LABEL_13:
      if ( (unsigned int)sub_409B40(v9, 0xFFFFFFFFLL, v10, 0xFFFFFFFFLL, *(unsigned int *)(v5 + 24)) )
        return 0;
      goto LABEL_6;
    }
LABEL_5:
    if ( *(_BYTE *)(v5 + 144) && chmod(v10, *(_DWORD *)(v5 + 24)) )
    {
      v18 = "failed to preserve permissions for %s";
      v19 = sub_40DDD0(4LL, v10);
      goto LABEL_17;
    }
LABEL_6:
    v10[*(_QWORD *)(v5 + 152)] = 47;
    v5 = *(_QWORD *)(v5 + 160);
    if ( !v5 )
      return 1;
  }
  v18 = "failed to preserve ownership for %s";
  v19 = sub_40DDD0(4LL, v10);
LABEL_17:
  v20 = dcgettext(0LL, v18, 5);
  v21 = __errno_location();
  error(0, *v21, v20, v19);
  return v11;
}

void __fastcall __noreturn sub_403C80(int status)
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
  char *v45; // rax
  char *v46; // r12
  char *v47; // rax
  char *v48; // rax
  char *v49; // rax
  char *v50; // rax
  char *v51; // rax
  char *v52; // rax
  __int64 v53; // rcx
  const char *v54; // [rsp+0h] [rbp-88h]
  const char *v55; // [rsp+8h] [rbp-80h]
  const char *v56; // [rsp+10h] [rbp-78h]
  const char *v57; // [rsp+18h] [rbp-70h]
  const char *v58; // [rsp+20h] [rbp-68h]
  const char *v59; // [rsp+28h] [rbp-60h]
  const char *v60; // [rsp+30h] [rbp-58h]
  const char *v61; // [rsp+38h] [rbp-50h]
  const char *v62; // [rsp+40h] [rbp-48h]
  const char *v63; // [rsp+48h] [rbp-40h]
  const char *v64; // [rsp+50h] [rbp-38h]
  const char *v65; // [rsp+58h] [rbp-30h]
  __int64 v66; // [rsp+60h] [rbp-28h]
  __int64 v67; // [rsp+68h] [rbp-20h]

  v1 = qword_61B920;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(
         0LL,
         "Usage: %s [OPTION]... [-T] SOURCE DEST\n"
         "  or:  %s [OPTION]... SOURCE... DIRECTORY\n"
         "  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n",
         5);
  __printf_chk(1LL, v3, v1, v1);
  v4 = stdout;
  v5 = dcgettext(0LL, "Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "  -a, --archive                same as -dR --preserve=all\n"
         "      --attributes-only        don't copy the file data, just the attributes\n"
         "      --backup[=CONTROL]       make a backup of each existing destination file\n"
         "  -b                           like --backup but does not accept an argument\n"
         "      --copy-contents          copy contents of special files when recursive\n"
         "  -d                           same as --no-dereference --preserve=links\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "  -f, --force                  if an existing destination file cannot be\n"
          "                                 opened, remove it and try again (this option\n"
          "                                 is ignored when the -n option is also used)\n"
          "  -i, --interactive            prompt before overwrite (overrides a previous -n\n"
          "                                  option)\n"
          "  -H                           follow command-line symbolic links in SOURCE\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  -l, --link                   hard link files instead of copying\n"
          "  -L, --dereference            always follow symbolic links in SOURCE\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "  -n, --no-clobber             do not overwrite an existing file (overrides\n"
          "                                 a previous -i option)\n"
          "  -P, --no-dereference         never follow symbolic links in SOURCE\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "  -p                           same as --preserve=mode,ownership,timestamps\n"
          "      --preserve[=ATTR_LIST]   preserve the specified attributes (default:\n"
          "                                 mode,ownership,timestamps), if possible\n"
          "                                 additional attributes: context, links, xattr,\n"
          "                                 all\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(
          0LL,
          "      --no-preserve=ATTR_LIST  don't preserve the specified attributes\n"
          "      --parents                use full source file name under DIRECTORY\n",
          5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
          0LL,
          "  -R, -r, --recursive          copy directories recursively\n"
          "      --reflink[=WHEN]         control clone/CoW copies. See below\n"
          "      --remove-destination     remove each existing destination file before\n"
          "                                 attempting to open it (contrast with --force)\n",
          5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(
          0LL,
          "      --sparse=WHEN            control creation of sparse files. See below\n"
          "      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n"
          "                                 argument\n",
          5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(
          0LL,
          "  -s, --symbolic-link          make symbolic links instead of copying\n"
          "  -S, --suffix=SUFFIX          override the usual backup suffix\n"
          "  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n"
          "  -T, --no-target-directory    treat DEST as a normal file\n",
          5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "  -u, --update                 copy only when the SOURCE file is newer\n"
          "                                 than the destination file or when the\n"
          "                                 destination file is missing\n"
          "  -v, --verbose                explain what is being done\n"
          "  -x, --one-file-system        stay on this file system\n",
          5);
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(
          0LL,
          "  -Z                           set SELinux security context of destination\n"
          "                                 file to default type\n"
          "      --context[=CTX]          like -Z, or if CTX is specified then set the\n"
          "                                 SELinux or SMACK security context to CTX\n",
          5);
  fputs_unlocked(v29, v28);
  v30 = stdout;
  v31 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v31, v30);
  v32 = stdout;
  v33 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v33, v32);
  v34 = stdout;
  v35 = dcgettext(
          0LL,
          "\n"
          "By default, sparse SOURCE files are detected by a crude heuristic and the\n"
          "corresponding DEST file is made sparse as well.  That is the behavior\n"
          "selected by --sparse=auto.  Specify --sparse=always to create a sparse DEST\n"
          "file whenever the SOURCE file contains a long enough sequence of zero bytes.\n"
          "Use --sparse=never to inhibit creation of sparse files.\n"
          "\n"
          "When --reflink[=always] is specified, perform a lightweight copy, where the\n"
          "data blocks are copied only when modified.  If this is not possible the copy\n"
          "fails, or if --reflink=auto is specified, fall back to a standard copy.\n",
          5);
  fputs_unlocked(v35, v34);
  v36 = stdout;
  v37 = dcgettext(
          0LL,
          "\n"
          "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
          "The version control method may be selected via the --backup option or through\n"
          "the VERSION_CONTROL environment variable.  Here are the values:\n"
          "\n",
          5);
  fputs_unlocked(v37, v36);
  v38 = stdout;
  v39 = dcgettext(
          0LL,
          "  none, off       never make backups (even if --backup is given)\n"
          "  numbered, t     make numbered backups\n"
          "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
          "  simple, never   always make simple backups\n",
          5);
  fputs_unlocked(v39, v38);
  v40 = stdout;
  v41 = dcgettext(
          0LL,
          "\n"
          "As a special case, cp makes a backup of SOURCE when the force and backup\n"
          "options are given and SOURCE and DEST are the same name for an existing,\n"
          "regular file.\n",
          5);
  fputs_unlocked(v41, v40);
  v54 = "[";
  v42 = &v54;
  v55 = "test invocation";
  v56 = "coreutils";
  v57 = "Multi-call invocation";
  v58 = "sha224sum";
  v59 = "sha2 utilities";
  v60 = "sha256sum";
  v61 = "sha2 utilities";
  v62 = "sha384sum";
  v63 = "sha2 utilities";
  v64 = "sha512sum";
  v65 = "sha2 utilities";
  v66 = 0LL;
  v67 = 0LL;
  do
    v42 += 2;
  while ( *v42 && strcmp("cp", *v42) );
  v43 = (char *)v42[1];
  if ( v43 )
  {
    v44 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v44, &unk_412A1E, "https://www.gnu.org/software/coreutils/");
    v45 = setlocale(5, 0LL);
    if ( !v45 || !strncmp(v45, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v49 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v49, &unk_412A1E, "https://www.gnu.org/software/coreutils/");
    v50 = setlocale(5, 0LL);
    if ( !v50 || !strncmp(v50, "en_", 3uLL) )
    {
      v43 = "cp";
      v51 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v46 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v51, "https://www.gnu.org/software/coreutils/", "cp");
LABEL_12:
      v48 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v48, v43, v46);
LABEL_3:
      exit(status);
    }
    v43 = "cp";
  }
  v52 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v52, "cp", v53);
LABEL_10:
  v46 = "Multi-call invocation" + 10;
  v47 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v47, "https://www.gnu.org/software/coreutils/", "cp");
  if ( v43 != "cp" )
    v46 = "";
  goto LABEL_12;
}

__int64 __fastcall sub_4041B0(int a1, _QWORD *a2, void *a3, char a4, int *a5)
{
  int v5; // er12
  __int64 v6; // rbx
  int *v7; // r14
  unsigned int v8; // er15
  void *v9; // rsp
  void *v10; // r13
  void *v11; // rax
  const char *v12; // rdx
  void *v13; // r13
  char v14; // al
  const char *v15; // r12
  size_t v16; // rax
  size_t v17; // rdx
  signed __int64 v18; // rax
  void *v19; // rsp
  void *v20; // rax
  const char *v21; // r13
  const char *v22; // r12
  const char *v23; // rbx
  unsigned int v24; // er13
  __int64 v25; // rax
  int *v26; // rsi
  int *v27; // rdi
  __int64 j; // rcx
  void **i; // rdi
  char **v31; // r13
  char *v32; // rax
  char *v33; // rax
  __int64 v34; // rax
  const char *v35; // rsi
  __int64 v36; // rbx
  char *v37; // rax
  __int64 v38; // rax
  const char *v39; // rsi
  char *v40; // rax
  __int64 v41; // [rsp+0h] [rbp-F0h]
  void *src; // [rsp+8h] [rbp-E8h]
  unsigned __int8 v43; // [rsp+1Eh] [rbp-D2h]
  char v44; // [rsp+1Fh] [rbp-D1h]
  void *ptr; // [rsp+20h] [rbp-D0h]
  __int64 v46; // [rsp+28h] [rbp-C8h]
  struct stat stat_buf; // [rsp+30h] [rbp-C0h]

  v5 = a1;
  v6 = (__int64)a2;
  src = a3;
  v43 = 0;
  if ( (a3 == 0LL) >= a1 )
  {
    if ( a1 != 1 )
    {
      v39 = "missing file operand";
      goto LABEL_52;
    }
    v38 = sub_40DDD0(4LL, *a2);
    v35 = "missing destination file operand after %s";
    v36 = v38;
    goto LABEL_47;
  }
  v7 = a5;
  if ( a4 )
  {
    if ( src )
    {
      v33 = dcgettext(0LL, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5);
      a2 = 0LL;
      error(1, 0, v33);
    }
    else if ( a1 <= 2 )
    {
      sub_4033E0((char *)a2[a1 - 1], &stat_buf, &v43);
      goto LABEL_23;
    }
    v34 = sub_40DDD0(4LL, a2[2]);
    v35 = "extra operand %s";
    v36 = v34;
LABEL_47:
    v37 = dcgettext(0LL, v35, 5);
    error(0, 0, v37, v36);
    goto LABEL_48;
  }
  if ( src )
  {
LABEL_4:
    if ( v5 != 1 )
    {
      sub_405110(v7);
      sub_405140(v7);
    }
    v8 = 1;
    v41 = v6 + 8LL * (unsigned int)(v5 - 1) + 8;
    while ( 1 )
    {
      v15 = *(const char **)v6;
      v46 = 0LL;
      if ( byte_61B4C8 )
        sub_40ABD0(v15);
      v16 = strlen(v15);
      v17 = v16 + 1;
      v18 = (v16 + 24) & 0xFFFFFFFFFFFFFFF0LL;
      if ( byte_61B4C9 )
      {
        v9 = alloca(v18);
        v10 = memcpy((void *)(((unsigned __int64)&src + 7) & 0xFFFFFFFFFFFFFFF0LL), v15, v17);
        sub_40ABD0(v10);
        v11 = (void *)sub_40AF00(src, v10, &v46);
        v12 = "%s -> %s\n";
        v13 = v11;
        if ( !*((_BYTE *)v7 + 46) )
          v12 = 0LL;
        if ( !(unsigned __int8)sub_4034A0(
                                 v11,
                                 v46 - (_QWORD)v11,
                                 (__int64)v12,
                                 (__int64)&ptr,
                                 (__int64)&v43,
                                 (__int64)v7) )
        {
          v14 = byte_61B4C9;
          v8 = 0;
LABEL_11:
          if ( v14 )
          {
            for ( i = (void **)ptr; ptr; i = (void **)ptr )
            {
              ptr = i[20];
              free(i);
            }
          }
          goto LABEL_12;
        }
      }
      else
      {
        v19 = alloca(v18);
        v20 = memcpy((void *)(((unsigned __int64)&src + 7) & 0xFFFFFFFFFFFFFFF0LL), v15, v17);
        v21 = (const char *)sub_40AB40(v20);
        sub_40ABD0(v21);
        if ( !strcmp(v21, "..") )
          v13 = (void *)sub_410310(src);
        else
          v13 = (void *)sub_40AF00(src, v21, 0LL);
      }
      v8 &= sub_409280(v15, v13, v43, v7, &v44, 0LL);
      if ( byte_61B4C9 )
      {
        v8 &= sub_403A50(v13, v46 - (_QWORD)v13, (__int64)ptr, v7);
        v14 = byte_61B4C9;
        goto LABEL_11;
      }
LABEL_12:
      v6 += 8LL;
      free(v13);
      if ( v41 == v6 )
        return v8;
    }
  }
  if ( a1 != 1 )
  {
    v31 = (char **)&a2[a1 - 1];
    if ( !(unsigned __int8)sub_4033E0(*v31, &stat_buf, &v43) )
    {
      if ( a1 == 2 )
        goto LABEL_23;
      v6 = sub_40DDD0(4LL, *v31);
      v32 = dcgettext(0LL, "target %s is not a directory", 5);
      error(1, 0, v32, v6);
    }
    v5 = a1 - 1;
    src = *(void **)(v6 + 8LL * (a1 - 1));
    if ( src )
      goto LABEL_4;
  }
LABEL_23:
  v22 = *(const char **)v6;
  v23 = *(const char **)(v6 + 8);
  if ( byte_61B4C9 )
  {
    v39 = "with --parents, the destination must be a directory";
LABEL_52:
    v40 = dcgettext(0LL, v39, 5);
    error(0, 0, v40);
LABEL_48:
    sub_403C80(1);
  }
  if ( *((_BYTE *)v7 + 22) )
  {
    v24 = *v7;
    if ( *v7 )
    {
      if ( !strcmp(v22, v23) && !v43 && (stat_buf.st_mode & 0xF000) == 0x8000 )
      {
        v25 = sub_40A6F0(v23, v24);
        v26 = v7;
        v27 = &dword_61B480;
        for ( j = 18LL; j; --j )
        {
          *v27 = *v26;
          ++v26;
          ++v27;
        }
        v23 = (const char *)v25;
        v7 = &dword_61B480;
        dword_61B480 = 0;
      }
    }
  }
  return (unsigned int)sub_409280(v22, v23, 0LL, v7, &v46, 0LL);
}

bool __fastcall sub_404640(char *name, __int16 a2)
{
  if ( (a2 & 0xF000) == 40960 )
    return 1;
  if ( (unsigned __int8)sub_4100A0() )
    return 1;
  return euidaccess(name, 2) == 0;
}

__int64 __fastcall sub_404690(int fd, size_t a2)
{
  size_t v2; // rbx
  size_t v3; // rbp
  __int64 v4; // rax
  void *v6; // rax

  v2 = a2;
  if ( !buf )
  {
    v6 = calloc(n, 1uLL);
    if ( v6 )
    {
      buf = v6;
    }
    else
    {
      buf = &unk_61B4E0;
      n = 1024LL;
    }
  }
  if ( !a2 )
    return 1LL;
  while ( 1 )
  {
    v3 = v2;
    if ( n <= v2 )
      v3 = n;
    v4 = sub_40B000(fd, buf, v3);
    if ( v4 != v3 )
      break;
    v2 -= v4;
    if ( !v2 )
      return 1LL;
  }
  return 0LL;
}

__int64 __fastcall sub_404740(int a1, __off_t a2, __off_t a3)
{
  int v3; // ebx
  __int64 result; // rax
  int v5; // eax

  v3 = fallocate(a1, 3, a2, a3);
  if ( v3 >= 0 || (v5 = *__errno_location(), v5 != 38) && v5 != 95 )
    result = (unsigned int)v3;
  else
    result = 0LL;
  return result;
}

int __fastcall sub_404780(int a1, const char *a2, __mode_t a3)
{
  int result; // eax

  if ( a1 >= 0 )
    result = fchmod(a1, a3);
  else
    result = chmod(a2, a3);
  return result;
}

__int64 sub_4047A0()
{
  int *v0; // rax
  int *v1; // rbx
  char *v2; // rax

  v0 = __errno_location();
  *v0 = 95;
  v1 = v0;
  v2 = dcgettext(0LL, "failed to restore the default file creation context", 5);
  error(1, *v1, v2);
  return sub_4047E0();
}

int __fastcall sub_4047E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  __int64 v8; // rcx
  char *v9; // rax

  v3 = a3;
  v4 = sub_40DCF0(1LL, 4LL, a2);
  v5 = sub_40DCF0(0LL, 4LL, a1);
  __printf_chk(1LL, "%s -> %s", v5, v4);
  if ( v3 )
  {
    v6 = sub_40DDD0(4LL, v3);
    v7 = dcgettext(0LL, " (backup: %s)", 5);
    __printf_chk(1LL, v7, v6, v8);
  }
  v9 = stdout->_IO_write_ptr;
  if ( v9 >= stdout->_IO_write_end )
  {
    LODWORD(v9) = __overflow(stdout, 10);
  }
  else
  {
    stdout->_IO_write_ptr = v9 + 1;
    *v9 = 10;
  }
  return (int)v9;
}

__int64 __fastcall sub_404890(__int64 a1, char *a2, unsigned int *a3)
{
  unsigned int *v3; // rbp
  __int64 v4; // rbx
  char *v5; // rdx
  FILE *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rbx
  char *v9; // rax
  char v10; // [rsp+4h] [rbp-34h]
  char v11; // [rsp+Eh] [rbp-2Ah]

  v3 = a3;
  if ( sub_404640(a2, *a3) )
  {
    sub_40DDD0(4LL, a2);
    v8 = qword_61B920;
    v9 = dcgettext(0LL, "%s: overwrite %s? ", 5);
    __fprintf_chk(stderr, 1LL, v9, v8);
    result = ((__int64 (*)(void))sub_410370)();
  }
  else
  {
    sub_40AD70(*v3, &v10);
    v11 = 0;
    sub_40DDD0(4LL, a2);
    v4 = qword_61B920;
    if ( *(_BYTE *)(a1 + 24) || *(_DWORD *)(a1 + 20) & 0xFFFF00 )
      v5 = dcgettext(0LL, "%s: replace %s, overriding mode %04lo (%s)? ", 5);
    else
      v5 = dcgettext(0LL, "%s: unwritable %s (mode %04lo, %s); try anyway? ", 5);
    v6 = stderr;
    __fprintf_chk(stderr, 1LL, v5, v4);
    result = ((__int64 (__fastcall *)(FILE *, __int64))sub_410370)(v6, 1LL);
  }
  return result;
}

__int64 __fastcall sub_4049C0(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5)
{
  char v5; // bp
  unsigned int v6; // ebx
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rbp
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rbp
  char *v14; // rbx
  int *v15; // rax

  v5 = a4;
  v6 = a1;
  v7 = sub_409900(4294967196LL, a1, 4294967196LL, a2, (unsigned __int8)(a5 != 0) << 10, a3);
  if ( v7 < 0 )
  {
    v12 = sub_40DCF0(1LL, 4LL, a1);
    v13 = sub_40DCF0(0LL, 4LL, a2);
    v14 = dcgettext(0LL, "cannot create hard link %s to %s", 5);
    v15 = __errno_location();
    error(0, *v15, v14, v13, v12);
    result = 0LL;
  }
  else
  {
    LOBYTE(v6) = v5 & (v7 > 0);
    if ( (_BYTE)v6 )
    {
      v9 = sub_40DDD0(4LL, a2);
      v10 = dcgettext(0LL, "removed %s\n", 5);
      __printf_chk(1LL, v10, v9, v11);
      result = v6;
    }
    else
    {
      result = 1LL;
    }
  }
  return result;
}

__int64 __fastcall sub_404AD0(int a1, __int64 a2, char a3, __off_t a4)
{
  char v4; // r12
  __off_t v5; // rbx
  __off_t v6; // rax
  __int64 v8; // rax
  const char *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  char *v12; // rbx
  int *v13; // rax

  v4 = a3;
  v5 = a4;
  v6 = lseek(a1, a4, 1);
  if ( v6 < 0 )
  {
    v11 = sub_40DDD0(4LL, a2);
    v9 = "cannot lseek %s";
    v10 = v11;
  }
  else
  {
    if ( !v4 || (int)sub_404740(a1, v6 - v5, v5) >= 0 )
      return 1LL;
    v8 = sub_40DDD0(4LL, a2);
    v9 = "error deallocating %s";
    v10 = v8;
  }
  v12 = dcgettext(0LL, v9, 5);
  v13 = __errno_location();
  error(0, *v13, v12, v10);
  return 0LL;
}

__int64 __usercall sub_404B90@<rax>(char *a1@<rdx>, size_t a2@<rcx>, unsigned int a3@<ebp>, int a4@<edi>, int a5@<esi>, size_t a6@<r8>, char a7@<r9b>, __int64 a8, __int64 a9, size_t a10, _QWORD *a11, _BYTE *a12)
{
  unsigned int v12; // er14
  unsigned __int64 v13; // r15
  size_t v14; // rdx
  ssize_t v15; // rax
  int *v16; // rax
  int *v17; // rbx
  unsigned int v18; // er15
  __int64 v19; // rbp
  char *v20; // rax
  int v22; // eax
  char *v23; // r13
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  void *v26; // r11
  _BYTE *v27; // rsi
  size_t v28; // rdx
  int v29; // eax
  char v30; // dl
  bool v31; // al
  int v32; // er9
  __int64 v33; // rax
  char v34; // r9
  unsigned int v35; // eax
  bool v36; // zf
  __int64 v37; // rbx
  char *v38; // rax
  __int64 v39; // rbp
  char *v40; // rbx
  int *v41; // rax
  __off_t v42; // r13
  void *v43; // [rsp+8h] [rbp-A0h]
  int v44; // [rsp+8h] [rbp-A0h]
  int v45; // [rsp+18h] [rbp-90h]
  bool v46; // [rsp+1Dh] [rbp-8Bh]
  char v47; // [rsp+1Eh] [rbp-8Ah]
  char v48; // [rsp+1Fh] [rbp-89h]
  char *buf; // [rsp+20h] [rbp-88h]
  size_t v50; // [rsp+28h] [rbp-80h]
  ssize_t v51; // [rsp+30h] [rbp-78h]
  size_t nbytes; // [rsp+38h] [rbp-70h]
  unsigned __int64 v53; // [rsp+50h] [rbp-58h]
  size_t v54; // [rsp+58h] [rbp-50h]
  char v55; // [rsp+6Ch] [rbp-3Ch]

  v48 = a7;
  *a12 = 0;
  v50 = a10;
  *a11 = 0LL;
  if ( !a10 )
    return 1;
  v54 = a6;
  if ( !a6 )
    a6 = a2;
  v55 = a7;
  nbytes = a2;
  v12 = 0;
  v13 = 0LL;
  buf = a1;
  v45 = a5;
  v53 = a6;
  while ( 1 )
  {
LABEL_5:
    v14 = v50;
    if ( nbytes <= v50 )
      v14 = nbytes;
    v15 = read(a4, buf, v14);
    v51 = v15;
    if ( v15 >= 0 )
      break;
    v16 = __errno_location();
    if ( *v16 != 4 )
    {
      v17 = v16;
      v18 = 0;
      v19 = sub_40DDD0(4LL, a8);
      v20 = dcgettext(0LL, "error reading %s", 5);
      error(0, *v17, v20, v19);
      return v18;
    }
  }
  if ( !v15 )
  {
    v42 = v13;
    LOBYTE(a3) = v12;
    goto LABEL_51;
  }
  v22 = (int)a11;
  v23 = buf;
  v24 = v51;
  v25 = v53;
  *a11 += v51;
  v26 = buf;
  v46 = v54 != 0;
  while ( 1 )
  {
    if ( v25 > v24 )
      v25 = v24;
    LOBYTE(a3) = v46 && v25 != 0;
    if ( v46 && v25 != 0 )
      break;
    a3 = v12;
    if ( !(((unsigned __int8)v12 ^ 1) & (v25 == v24)) && v25 )
    {
LABEL_38:
      v22 = -1 - v25;
      if ( 0x7FFFFFFFFFFFFFFFLL - v25 < v13 )
      {
        v18 = 0;
        v37 = sub_40DDD0(4LL, a8);
        v38 = dcgettext(0LL, "overflow reading %s", 5);
        error(0, 0, v38, v37);
        return v18;
      }
      v13 += v25;
      v24 -= v25;
      v23 += v25;
      v12 = a3;
      goto LABEL_40;
    }
LABEL_33:
    v13 += v25;
    v44 = 1;
    v47 = 0;
    if ( !(_BYTE)v12 )
      goto LABEL_26;
LABEL_34:
    v35 = sub_404AD0(v45, a9, v48, v13);
    v34 = v47;
    if ( !(_BYTE)v35 )
      return v35;
LABEL_27:
    v22 = v44;
    if ( v44 )
    {
      if ( !v25 )
      {
        v13 = 0LL;
LABEL_44:
        v36 = v50 == v51;
        v50 -= v51;
        *a12 = a3;
        if ( !v36 )
        {
          v12 = a3;
          goto LABEL_5;
        }
        v42 = v13;
LABEL_51:
        if ( (_BYTE)a3 )
          return sub_404AD0(v45, a9, v55, v42);
        return 1;
      }
      if ( !v34 )
      {
        v26 = v23;
        v24 -= v25;
        v12 = a3;
        v23 += v25;
        v13 = 0LL;
        goto LABEL_40;
      }
      v13 = v25;
      v26 = v23;
      v12 = a3;
      v25 = 0LL;
    }
    else
    {
      v26 = v23;
      v24 -= v25;
      v12 = a3;
      v23 += v25;
      v13 = v25;
LABEL_40:
      if ( !v24 )
        goto LABEL_44;
    }
  }
  v27 = v23;
  v28 = v25;
  do
  {
    if ( *v27 )
    {
      v31 = v46 && v25 != 0;
      v30 = v12;
      a3 = 0;
      goto LABEL_21;
    }
    ++v27;
    if ( !--v28 )
    {
      LOBYTE(v22) = v13 != 0;
      v32 = v22 & (v12 ^ 1);
      goto LABEL_37;
    }
  }
  while ( v28 & 0xF );
  v43 = v26;
  v29 = memcmp(v23, v27, v28);
  v26 = v43;
  LOBYTE(a3) = v29 == 0;
  v30 = v12 ^ (v29 == 0);
  v31 = v29 != 0;
LABEL_21:
  LOBYTE(v32) = v30 & (v13 != 0);
  if ( v25 != v24 || !v31 )
  {
LABEL_37:
    if ( !(_BYTE)v32 )
      goto LABEL_38;
    v44 = 0;
    goto LABEL_25;
  }
  if ( !(_BYTE)v32 )
  {
    a3 = 0;
    goto LABEL_33;
  }
  v44 = 1;
  a3 = 0;
LABEL_25:
  v47 = v32;
  if ( (_BYTE)v12 )
    goto LABEL_34;
LABEL_26:
  v33 = sub_40B000(v45, v26, v13);
  v34 = v47;
  if ( v13 == v33 )
    goto LABEL_27;
  v18 = v12;
  v39 = sub_40DDD0(4LL, a9);
  v40 = dcgettext(0LL, "error writing %s", 5);
  v41 = __errno_location();
  error(0, *v41, v40, v39);
  return v18;
}

__int64 __fastcall sub_404FC0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbp
  int *v6; // rax
  int *v7; // r13
  __int64 v8; // rbx
  char *v9; // rax
  int v10; // ebx
  __int64 result; // rax
  unsigned int v12; // ebx

  v5 = a5;
  if ( *(_BYTE *)(a5 + 37) )
  {
    v6 = __errno_location();
    v7 = v6;
    if ( !*(_BYTE *)(v5 + 35) || (v10 = *(unsigned __int8 *)(v5 + 38), (_BYTE)v10) )
    {
      *v6 = 95;
      v8 = sub_40DDD0(4LL, a1);
      v9 = dcgettext(0LL, "failed to get security context of %s", 5);
      error(0, *v7, v9, v8);
      v10 = *(unsigned __int8 *)(v5 + 38);
    }
    else
    {
      *v6 = 95;
    }
    result = v10 ^ 1u;
  }
  else
  {
    v12 = a4;
    LOBYTE(v12) = *(_BYTE *)(a5 + 33) & a4;
    if ( (_BYTE)v12 )
    {
      *__errno_location() = 95;
      result = v12;
    }
    else
    {
      result = 1LL;
    }
  }
  return result;
}

__int64 __fastcall sub_405090(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int *v5; // rax
  int *v6; // rbp
  __int64 v7; // rbx
  char *v8; // rax
  __int64 result; // rax

  v4 = a4;
  v5 = __errno_location();
  v6 = v5;
  if ( !*(_BYTE *)(v4 + 35) || *(_BYTE *)(v4 + 38) )
  {
    *v5 = 95;
    v7 = sub_40DCF0(0LL, 4LL, a1);
    v8 = dcgettext(0LL, "failed to set the security context of %s", 5);
    error(0, *v6, v8, v7);
    result = 0LL;
  }
  else
  {
    *v5 = 95;
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_405110(__int64 a1)
{
  __int64 result; // rax

  result = sub_40B910(61LL, 0LL, sub_40C2D0, sub_40C310, sub_40C380);
  *(_QWORD *)(a1 + 56) = result;
  return result;
}

__int64 __fastcall sub_405140(__int64 a1)
{
  __int64 result; // rax

  result = sub_40B910(61LL, 0LL, sub_40C300, sub_40C310, sub_40C380);
  *(_QWORD *)(a1 + 64) = result;
  return result;
}

bool __fastcall sub_405170(__int64 a1)
{
  bool result; // al

  *(_QWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  result = geteuid() == 0;
  *(_BYTE *)(a1 + 27) = result;
  *(_BYTE *)(a1 + 26) = result;
  return result;
}

char __fastcall sub_4051B0(__int64 a1)
{
  int *v1; // rax
  char result; // al

  v1 = __errno_location();
  result = *v1 == 22 || *v1 == 1;
  if ( result )
    result = *(_BYTE *)(a1 + 26) ^ 1;
  return result;
}

__int64 __fastcall sub_4051E0(__int64 a1, const char *a2, unsigned int a3, _DWORD *a4, char a5, __int64 a6)
{
  const char *v6; // r12
  unsigned int v7; // ebx
  __uid_t v8; // er14
  __gid_t v9; // er13
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int *v13; // rax
  int v14; // er14
  int *v15; // r15
  char v16; // al
  unsigned int v17; // edx
  int *v19; // rax
  int v20; // ebx
  int *v21; // r14
  __int64 v22; // r12
  char *v23; // rbx
  int *v24; // rax
  int *v25; // rax
  int *v26; // rbx
  int v27; // eax
  __int64 v28; // r12
  char *v29; // rax

  v6 = a2;
  v7 = a3;
  v8 = a4[7];
  v9 = a4[8];
  if ( !a5 )
  {
    if ( *(_QWORD *)(a1 + 24) & 0xFF0000000000FFLL )
    {
      v10 = *(_DWORD *)(a6 + 24);
      v11 = a4[6];
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 43) )
        goto LABEL_6;
      v10 = *(_DWORD *)(a6 + 24);
      v11 = *(_DWORD *)(a1 + 16);
    }
    v12 = ~v11;
    BYTE1(v12) |= 0xEu;
    if ( v10 & v12 & 0xFFF && (unsigned int)sub_40C480(v6, v7, (unsigned __int16)v10 & (unsigned __int16)v11 & 0x1C0) )
    {
      v25 = __errno_location();
      v26 = v25;
      v27 = *v25;
      if ( v27 != 1 && v27 != 22 || *(_BYTE *)(a1 + 27) )
      {
        v28 = sub_40DDD0(4LL, v6);
        v29 = dcgettext(0LL, "clearing permissions for %s", 5);
        error(0, *v26, v29, v28);
      }
      goto LABEL_20;
    }
  }
LABEL_6:
  if ( v7 != -1 )
  {
    if ( fchown(v7, v8, v9) )
    {
      v13 = __errno_location();
      v14 = *v13;
      v15 = v13;
      if ( *v13 == 1 || v14 == 22 )
      {
        fchown(v7, 0xFFFFFFFF, v9);
        *v15 = v14;
      }
      goto LABEL_10;
    }
    return 1;
  }
  if ( !lchown(v6, v8, v9) )
    return 1;
  v19 = __errno_location();
  v20 = *v19;
  v21 = v19;
  if ( *v19 == 1 || v20 == 22 )
  {
    lchown(v6, 0xFFFFFFFF, v9);
    *v21 = v20;
  }
LABEL_10:
  v16 = sub_4051B0(a1);
  v17 = 0;
  if ( !v16 )
  {
    v22 = sub_40DDD0(4LL, v6);
    v23 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
    v24 = __errno_location();
    error(0, *v24, v23, v22);
LABEL_20:
    v17 = -*(unsigned __int8 *)(a1 + 36);
  }
  return v17;
}

__int64 sub_4053D0()
{
  __mode_t v0; // ebx

  v0 = dword_61B3B0;
  if ( dword_61B3B0 == -1 )
  {
    v0 = umask(0);
    dword_61B3B0 = v0;
    umask(v0);
  }
  return v0;
}

__int64 __usercall sub_405400@<rax>(unsigned int a1@<edx>, __off_t a2@<rcx>, const char *a3@<rdi>, char *a4@<rsi>, __int64 a5@<r8>, const __m128i *a6@<r9>, unsigned int a7@<r15d>, unsigned int a8, _BYTE *a9, _BYTE *a10, _BYTE *a11)
{
  char *v11; // r14
  const __m128i *v12; // r13
  unsigned int v13; // er12
  bool v14; // zf
  __int64 v15; // rbx
  int v16; // eax
  char *v17; // rsi
  __int64 v18; // rdi
  int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  __int16 v23; // ax
  __int64 v24; // rcx
  int v25; // er12
  __int64 v26; // rdi
  char v27; // al
  char v28; // al
  int v29; // eax
  int *v30; // rax
  int *v31; // r12
  struct stat *v32; // rdx
  __int64 v33; // r12
  const char *v34; // rsi
  __int64 v35; // rbx
  char *v36; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  const char *v39; // rdx
  int v40; // er12
  char v41; // al
  void *v42; // r12
  char v43; // r8
  bool v44; // r12
  __int64 v45; // rsi
  char v46; // al
  int v47; // eax
  __int64 v48; // r12
  char *v49; // rbx
  int *v50; // rax
  int v51; // eax
  __mode_t v52; // edx
  __int64 v53; // r12
  char *v54; // rbx
  int *v55; // rax
  unsigned int v56; // eax
  int v57; // eax
  __int64 v58; // r12
  char *v59; // rbx
  int *v60; // rax
  __dev_t v62; // rdx
  __ino_t v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // eax
  __int64 v73; // r12
  char *v74; // rax
  __int64 v75; // r12
  __int64 v76; // rbx
  char *v77; // rax
  int *v78; // rax
  int *v79; // r12
  int v80; // eax
  int v81; // eax
  int *v82; // rax
  __int64 v83; // rbx
  char *v84; // rax
  int v85; // eax
  char v86; // al
  __ino_t v87; // rdx
  __dev_t v88; // rcx
  _QWORD *v89; // rax
  const char *v90; // rsi
  char *v91; // rax
  int v92; // eax
  const char *v93; // rsi
  char *v94; // r12
  int *v95; // rax
  _QWORD *v96; // rax
  __mode_t v97; // er12
  int v98; // eax
  __int64 v99; // r12
  char *v100; // rax
  __int64 v101; // rcx
  __m128i v102; // xmm1
  __m128i v103; // xmm2
  __m128i v104; // xmm3
  __blkcnt_t v105; // rax
  char *v106; // r12
  char v107; // r15
  void *v108; // rbx
  __int64 v109; // rax
  void *v110; // r14
  char v111; // al
  char v112; // r12
  __int64 v113; // rax
  int v114; // edx
  const char *v115; // rsi
  char *v116; // rax
  _BOOL8 v117; // rcx
  int v118; // eax
  __int64 v119; // rax
  char v120; // r12
  __int64 v121; // rcx
  __m128i *v122; // r9
  __m128i *v123; // rdx
  char v124; // al
  __int64 v125; // r13
  const char *v126; // rsi
  __int64 v127; // rbx
  char *v128; // rax
  int v129; // eax
  int v130; // eax
  bool v131; // al
  char v132; // al
  __int64 v133; // r12
  char *v134; // rbx
  int *v135; // rax
  char *v136; // r12
  int v137; // ecx
  int *v138; // rax
  int *v139; // r12
  int *v140; // rax
  int v141; // er12
  char *v142; // rax
  void *v143; // rcx
  int v144; // esi
  const char *v145; // rdx
  char v146; // r8
  __int64 v147; // rcx
  __int64 v148; // rbx
  char *v149; // rax
  __int64 v150; // r12
  char *v151; // rax
  __int64 v152; // rcx
  char *v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  _BYTE *v156; // rax
  __int64 v157; // rdx
  _BYTE *v158; // r8
  size_t v159; // r12
  size_t v160; // rax
  int v161; // eax
  int v162; // eax
  size_t v163; // rax
  char *v164; // rax
  char *v165; // r12
  char *v166; // rax
  __int64 v167; // rsi
  char *v168; // rax
  char *v169; // r12
  size_t v170; // rax
  void *v171; // rsp
  char *v172; // r12
  char v173; // al
  int v174; // er12
  char *v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r12
  __int64 v179; // rbx
  char *v180; // rax
  __int64 v181; // r12
  char *v182; // r14
  int *v183; // rax
  __int64 v184; // rax
  char *v185; // r12
  __int64 v186; // r12
  char *v187; // rax
  __int64 v188; // rdx
  unsigned int v189; // eax
  _BYTE *v190; // rax
  __int64 v191; // rbx
  char *v192; // rax
  char v193; // al
  int v194; // er12
  int v195; // eax
  __int64 v196; // rcx
  char v197; // al
  char *v198; // r12
  int *v199; // rax
  int *v200; // rax
  const char *v201; // rsi
  __int64 v202; // rbx
  char *v203; // rax
  char *v204; // r12
  int *v205; // rax
  char *v206; // r12
  int *v207; // rax
  char *v208; // rax
  __int64 v209; // rcx
  int v210; // eax
  __int64 v211; // r12
  char *v212; // rax
  __int64 v213; // r12
  char *v214; // rax
  __int64 v215; // rcx
  unsigned __int64 v216; // r12
  __blksize_t v217; // rax
  __blksize_t v218; // rdi
  unsigned __int64 v219; // rcx
  char *v220; // rsi
  unsigned __int64 v221; // rdx
  bool v222; // r9
  int v223; // eax
  char v224; // r8
  int v225; // eax
  char *v226; // r12
  int *v227; // rax
  char *v228; // r12
  int *v229; // rax
  int v230; // eax
  int v231; // eax
  char *v232; // r12
  int *v233; // rax
  int v234; // eax
  __off_t v235; // r12
  char *v236; // rcx
  __off_t v237; // rbx
  char v238; // r15
  size_t v239; // r14
  char v240; // al
  size_t v241; // rdx
  __off_t v242; // rsi
  unsigned int v243; // er13
  __int64 v244; // rax
  size_t v245; // r8
  __off_t *v246; // rax
  __int64 v247; // rcx
  bool v248; // r12
  const char *v249; // rsi
  char *v250; // r12
  int *v251; // rax
  __int64 v252; // rdx
  char *v253; // rbx
  __int64 v254; // r12
  __int64 v255; // rax
  int v256; // eax
  __int64 v257; // r12
  int *v258; // rax
  char *v259; // r12
  int *v260; // rax
  __int64 v261; // rcx
  char *v262; // rdi
  void *v263; // rax
  __int64 v264; // r12
  char *v265; // rax
  __int64 v266; // rcx
  const char *v267; // rsi
  char *v268; // r12
  int *v269; // rax
  char *v270; // rax
  int v271; // eax
  int v272; // eax
  char *v273; // r12
  int *v274; // rax
  __blksize_t v275; // rax
  __int64 v276; // r12
  char *v277; // rax
  char v278; // [rsp+1h] [rbp-381h]
  unsigned __int64 v279; // [rsp+Ah] [rbp-378h]
  __off_t v280; // [rsp+1Ah] [rbp-368h]
  const __m128i *v281; // [rsp+22h] [rbp-360h]
  unsigned int v282; // [rsp+2Ah] [rbp-358h]
  unsigned int v283; // [rsp+2Eh] [rbp-354h]
  char *v284; // [rsp+32h] [rbp-350h]
  int v285; // [rsp+3Ah] [rbp-348h]
  __mode_t v286; // [rsp+3Eh] [rbp-344h]
  __blksize_t v287; // [rsp+42h] [rbp-340h]
  char *v288; // [rsp+4Ah] [rbp-338h]
  char *s; // [rsp+52h] [rbp-330h]
  unsigned int v290; // [rsp+5Ah] [rbp-328h]
  char v291; // [rsp+5Fh] [rbp-323h]
  unsigned __int8 v292; // [rsp+60h] [rbp-322h]
  char v293; // [rsp+61h] [rbp-321h]
  struct stat *v294; // [rsp+62h] [rbp-320h]
  __int64 v295; // [rsp+6Ah] [rbp-318h]
  char *s2; // [rsp+72h] [rbp-310h]
  void *s1; // [rsp+7Ah] [rbp-308h]
  char *old; // [rsp+82h] [rbp-300h]
  __off_t v299; // [rsp+8Ah] [rbp-2F8h]
  size_t n; // [rsp+92h] [rbp-2F0h]
  int fd[2]; // [rsp+9Ah] [rbp-2E8h]
  void *ptr; // [rsp+A2h] [rbp-2E0h]
  struct stat *v303; // [rsp+AAh] [rbp-2D8h]
  char *src; // [rsp+B2h] [rbp-2D0h]
  __mode_t v305; // [rsp+BAh] [rbp-2C8h]
  int v306; // [rsp+BEh] [rbp-2C4h]
  int fildes[2]; // [rsp+C2h] [rbp-2C0h]
  char *filename; // [rsp+CAh] [rbp-2B8h]
  char v309; // [rsp+D9h] [rbp-2A9h]
  __int64 v310; // [rsp+DAh] [rbp-2A8h]
  __int128 length; // [rsp+E2h] [rbp-2A0h]
  timespec v312; // [rsp+F2h] [rbp-290h]
  char v313; // [rsp+102h] [rbp-280h]
  char v314; // [rsp+103h] [rbp-27Fh]
  void *v315; // [rsp+10Ah] [rbp-278h]
  struct stat stat_buf; // [rsp+112h] [rbp-270h]
  struct stat v317; // [rsp+1A2h] [rbp-1E0h]
  struct stat v318; // [rsp+232h] [rbp-150h]
  struct stat v319; // [rsp+2C2h] [rbp-C0h]
  __int64 savedregs; // [rsp+382h] [rbp+0h]

  v11 = (char *)a3;
  v12 = a6;
  v13 = a1;
  filename = a4;
  LOBYTE(fildes[0]) = a11 != 0LL;
  v14 = a6[1].m128i_i8[8] == 0;
  v15 = a8;
  v299 = a2;
  *(_QWORD *)fd = a5;
  if ( !v14 && a11 != 0LL )
    *a11 = 0;
  v14 = HIDWORD(a6->m128i_i64[0]) == 2;
  *a10 = 0;
  v303 = &stat_buf;
  if ( !v14 )
  {
    v16 = __xstat(1, a3, &stat_buf);
    v17 = (char *)a3;
    LOBYTE(a7) = v16 != 0;
    if ( !v16 )
      goto LABEL_6;
LABEL_118:
    a7 = 0;
    v58 = sub_40DDD0(4LL, v17);
    v59 = dcgettext(0LL, "cannot stat %s", 5);
    v60 = __errno_location();
    error(0, *v60, v59, v58);
    return a7;
  }
  v57 = __lxstat(1, a3, &stat_buf);
  v17 = (char *)a3;
  LOBYTE(a7) = v57 != 0;
  if ( v57 )
    goto LABEL_118;
LABEL_6:
  v305 = stat_buf.st_mode;
  v306 = stat_buf.st_mode & 0xF000;
  if ( v306 != 0x4000 )
  {
    if ( !(_BYTE)a8 )
      goto LABEL_10;
    v18 = v12[4].m128i_i64[0];
    if ( LODWORD(v12->m128i_i64[0]) )
    {
      sub_40ACA0(v18, v11, v303);
      goto LABEL_10;
    }
    v86 = sub_40AD30(v18, v11, v303);
    if ( v86 )
    {
      LOBYTE(filename) = v86;
      v148 = sub_40DDD0(4LL, v11);
      v149 = dcgettext(0LL, "warning: source file %s specified more than once", 5);
      error(0, 0, v149, v148);
      return (unsigned __int8)filename;
    }
    goto LABEL_170;
  }
  if ( !v12[2].m128i_i8[10] )
  {
    v113 = sub_40DDD0(4LL, v17);
    v114 = 5;
    v15 = v113;
    if ( !v12[1].m128i_i8[9] )
    {
LABEL_241:
      v116 = dcgettext(0LL, "-r not specified; omitting directory %s", v114);
      goto LABEL_227;
    }
    v115 = "omitting directory %s";
    goto LABEL_226;
  }
  if ( (_BYTE)a8 )
LABEL_170:
    sub_40ACA0(v12[4].m128i_i64[0], v11, v303);
LABEL_10:
  LODWORD(ptr) = 1;
  v19 = HIDWORD(v12->m128i_i64[0]);
  if ( v19 != 4 )
    LODWORD(ptr) = (unsigned __int8)a8 & (v19 == 3);
  if ( (_BYTE)v13 )
  {
LABEL_59:
    LOBYTE(src) = 1;
    LOBYTE(v24) = 0;
    old = 0LL;
    goto LABEL_60;
  }
  if ( v306 != 0x8000 && (!v12[1].m128i_i8[4] || v306 == 0x4000 || v306 == 40960)
    || v12[1].m128i_i8[8]
    || v12[2].m128i_i8[12]
    || v12[1].m128i_i8[7]
    || LODWORD(v12->m128i_i64[0])
    || v12[1].m128i_i8[5] )
  {
    n = (size_t)&v317;
    v81 = __lxstat(1, filename, &v317);
    v21 = v13;
    LOBYTE(src) = v81 != 0;
    if ( !v81 )
      goto LABEL_23;
    goto LABEL_158;
  }
  n = (size_t)&v317;
  v20 = __xstat(1, filename, &v317);
  v21 = 1LL;
  LOBYTE(src) = v20 != 0;
  if ( v20 )
  {
LABEL_158:
    v82 = __errno_location();
    if ( *v82 != 2 )
    {
      *(_QWORD *)fildes = v82;
      a7 = v13;
      v83 = sub_40DDD0(4LL, filename);
      v84 = dcgettext(0LL, "cannot stat %s", 5);
      error(0, **(_DWORD **)fildes, v84, v83);
      return a7;
    }
    goto LABEL_59;
  }
LABEL_23:
  if ( stat_buf.st_ino != v317.st_ino || stat_buf.st_dev != v317.st_dev )
  {
    if ( HIDWORD(v12->m128i_i64[0]) != 2 )
      goto LABEL_25;
    v120 = 0;
    v121 = 0LL;
  }
  else
  {
    v120 = v12[1].m128i_i8[7];
    if ( v120 )
      goto LABEL_325;
    if ( HIDWORD(v12->m128i_i64[0]) != 2 )
    {
      LOBYTE(old) = v21;
      s2 = (char *)&v318;
      v129 = __lxstat(1, filename, &v318);
      LODWORD(v21) = (unsigned __int8)old;
      if ( v129 )
        goto LABEL_25;
      v294 = &v319;
      v130 = __lxstat(1, v11, &v319);
      v21 = (unsigned __int8)old;
      if ( v130 )
        goto LABEL_25;
      if ( v319.st_ino == v318.st_ino )
        v120 = v319.st_dev == v318.st_dev;
      v122 = (__m128i *)s2;
      v123 = (__m128i *)v294;
      if ( (v319.st_mode & 0xF000) == 40960 && (v318.st_mode & 0xF000) == 40960 && v12[1].m128i_i8[5] )
        goto LABEL_25;
      goto LABEL_244;
    }
    v120 = 1;
    v121 = 1LL;
  }
  v122 = (__m128i *)n;
  v123 = (__m128i *)v303;
  if ( (stat_buf.st_mode & 0xF000) == 40960 && (v317.st_mode & 0xF000) == 40960 )
  {
    LODWORD(s1) = v121;
    LOBYTE(old) = v21;
    if ( (unsigned __int8)sub_40E2F0(v11, filename, v303, v121, v21, n) )
      goto LABEL_250;
    LODWORD(v21) = (unsigned __int8)old;
    if ( LODWORD(v12->m128i_i64[0]) || !(_DWORD)s1 )
      goto LABEL_25;
    v173 = 1;
    LOBYTE(v174) = v12[1].m128i_i8[8] ^ 1;
    goto LABEL_369;
  }
LABEL_244:
  if ( LODWORD(v12->m128i_i64[0]) )
  {
    if ( !v120 )
    {
      if ( v12[1].m128i_i8[8]
        || HIDWORD(v12->m128i_i64[0]) == 2
        || (v123[1].m128i_i32[2] & 0xF000) != 40960
        || (v122[1].m128i_i32[2] & 0xF000) == 40960 )
      {
        goto LABEL_25;
      }
LABEL_250:
      v33 = sub_40DCF0(1LL, 4LL, filename);
      v34 = "%s and %s are the same file";
      v35 = sub_40DCF0(0LL, 4LL, v11);
LABEL_56:
      v36 = dcgettext(0LL, v34, 5);
      v37 = v33;
      v38 = v35;
      v39 = v36;
LABEL_57:
      error(0, 0, v39, v38, v37);
      return 0;
    }
    LOBYTE(src) = v21;
    v197 = sub_40E2F0(v11, filename, v123, v121, v21, v122);
    LODWORD(v21) = (unsigned __int8)src;
    LOBYTE(v174) = v197 ^ 1;
    v173 = 0;
LABEL_369:
    if ( (_BYTE)v174 )
    {
      LOBYTE(src) = v173;
      goto LABEL_25;
    }
    goto LABEL_250;
  }
  v147 = v12[1].m128i_u8[8];
  if ( (_BYTE)v147 || v12[1].m128i_i8[5] )
  {
    if ( (v122[1].m128i_i32[2] & 0xF000) == 40960 )
      goto LABEL_25;
    if ( !v120 || v122[1].m128i_i64[0] <= 1uLL )
    {
      if ( (v123[1].m128i_i32[2] & 0xF000) == 40960 )
        goto LABEL_312;
      goto LABEL_342;
    }
    LOBYTE(s2) = v21;
    s1 = v122;
    old = (char *)v123;
    v173 = sub_40E2F0(v11, filename, v123, v147, v21, v122);
    v123 = (__m128i *)old;
    v122 = (__m128i *)s1;
    LODWORD(v21) = (unsigned __int8)s2;
    if ( !v173 )
    {
      LOBYTE(v174) = v12[1].m128i_i8[8] ^ 1;
      goto LABEL_369;
    }
    if ( (*((_DWORD *)old + 6) & 0xF000) == 40960 )
      goto LABEL_311;
  }
  else if ( (v123[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    goto LABEL_314;
  }
  if ( (v122[1].m128i_i32[2] & 0xF000) != 40960 )
  {
LABEL_342:
    if ( v123->m128i_i64[1] != v122->m128i_i64[1] || v123->m128i_i64[0] != v122->m128i_i64[0] )
      goto LABEL_25;
    if ( v12[1].m128i_i8[7] )
      goto LABEL_325;
  }
LABEL_311:
  LOBYTE(v147) = v12[1].m128i_i8[8];
LABEL_312:
  if ( (_BYTE)v147 )
  {
    if ( (stat_buf.st_mode & 0xF000) == 40960 && v122[1].m128i_i64[0] > 1uLL )
    {
      LOBYTE(s2) = v21;
      s1 = v122;
      old = (char *)v123;
      v208 = canonicalize_file_name(v11);
      v123 = (__m128i *)old;
      v122 = (__m128i *)s1;
      LODWORD(v21) = (unsigned __int8)s2;
      if ( v208 )
      {
        LOBYTE(old) = (_BYTE)s2;
        src = v208;
        v174 = (unsigned __int64)sub_40E2F0(v208, filename, v123, v209, (unsigned __int8)s2, s1) ^ 1;
        free(src);
        v173 = 0;
        LODWORD(v21) = (unsigned __int8)s2;
        goto LABEL_369;
      }
    }
  }
LABEL_314:
  if ( v12[2].m128i_i8[12] || v12[1].m128i_i32[1] & 0xFF00FF00 && (v122[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    LOBYTE(v174) = v122->m128i_i64[0] == v123->m128i_i64[0];
    v173 = 0;
    goto LABEL_369;
  }
  if ( HIDWORD(v12->m128i_i64[0]) != 2 )
    goto LABEL_250;
  if ( (v123[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    LOBYTE(s1) = v21;
    old = (char *)v122;
    v231 = __xstat(1, v11, &v319);
    v122 = (__m128i *)old;
    LODWORD(v21) = (unsigned __int8)s1;
    if ( v231 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v319.st_dev = _mm_load_si128(v123);
    *(__m128i *)&v319.st_nlink = _mm_load_si128(v123 + 1);
    *(__m128i *)&v319.st_gid = _mm_load_si128(v123 + 2);
    *(__m128i *)&v319.st_size = _mm_load_si128(v123 + 3);
    *(__m128i *)&v319.st_blocks = _mm_load_si128(v123 + 4);
    *(__m128i *)&v319.st_atim.tv_nsec = _mm_load_si128(v123 + 5);
    *(__m128i *)&v319.st_mtim.tv_nsec = _mm_load_si128(v123 + 6);
    *(__m128i *)&v319.st_ctim.tv_nsec = _mm_load_si128(v123 + 7);
    *(__m128i *)&v319.__unused[1] = _mm_load_si128(v123 + 8);
  }
  if ( (v122[1].m128i_i32[2] & 0xF000) == 40960 )
  {
    LOBYTE(old) = v21;
    v230 = __xstat(1, filename, &v318);
    LODWORD(v21) = (unsigned __int8)old;
    if ( v230 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v318.st_dev = _mm_load_si128(v122);
    *(__m128i *)&v318.st_nlink = _mm_load_si128(v122 + 1);
    *(__m128i *)&v318.st_gid = _mm_load_si128(v122 + 2);
    *(__m128i *)&v318.st_size = _mm_load_si128(v122 + 3);
    *(__m128i *)&v318.st_blocks = _mm_load_si128(v122 + 4);
    *(__m128i *)&v318.st_atim.tv_nsec = _mm_load_si128(v122 + 5);
    *(__m128i *)&v318.st_mtim.tv_nsec = _mm_load_si128(v122 + 6);
    *(__m128i *)&v318.st_ctim.tv_nsec = _mm_load_si128(v122 + 7);
    *(__m128i *)&v318.__unused[1] = _mm_load_si128(v122 + 8);
  }
  if ( v319.st_ino == v318.st_ino && v319.st_dev == v318.st_dev )
  {
    if ( !v12[1].m128i_i8[7] )
      goto LABEL_250;
LABEL_325:
    LOBYTE(src) = 1;
  }
LABEL_25:
  if ( v306 == 0x4000 )
  {
    if ( !v12[1].m128i_i8[8] )
      goto LABEL_30;
    v22 = v12->m128i_i64[1];
  }
  else
  {
    if ( v12[2].m128i_i8[13] )
    {
      v117 = 0LL;
      if ( v12[1].m128i_i8[15] )
      {
        v117 = 1LL;
        if ( v12[1].m128i_i8[8] )
          v117 = v317.st_dev != stat_buf.st_dev;
      }
      LOBYTE(old) = v21;
      v118 = sub_40EB60(filename, n, v303, v117);
      LODWORD(v21) = (unsigned __int8)old;
      if ( v118 >= 0 )
      {
        if ( a11 )
          *a11 = 1;
        v119 = sub_409480(filename);
        if ( v119 && !(unsigned __int8)sub_4049C0(v119, (__int64)filename, 1u, v12[2].m128i_i8[14], (char)ptr) )
        {
          if ( !v12[2].m128i_i8[5] )
            return a7;
          goto LABEL_240;
        }
        return 1;
      }
    }
    v22 = v12->m128i_i64[1];
    if ( !v12[1].m128i_i8[8] )
    {
      if ( v22 == 2 )
        return 1;
      if ( v22 == 3 )
      {
        LOBYTE(old) = v21;
        v193 = sub_404890((__int64)v12, filename, (unsigned int *)(n + 24));
        LODWORD(v21) = (unsigned __int8)old;
        if ( !v193 )
          return 1;
      }
      goto LABEL_30;
    }
  }
  if ( v22 == 2
    || (v22 == 3
     || v22 == 4
     && v12[2].m128i_i8[15]
     && (LOBYTE(old) = v21, v131 = sub_404640(filename, v317.st_mode), LODWORD(v21) = (unsigned __int8)old, !v131))
    && (LOBYTE(old) = v21,
        v132 = sub_404890((__int64)v12, filename, (unsigned int *)(n + 24)),
        LODWORD(v21) = (unsigned __int8)old,
        !v132) )
  {
    if ( !a11 )
      return 1;
LABEL_285:
    a7 = 1;
    *a11 = 1;
    return a7;
  }
LABEL_30:
  if ( (_BYTE)src )
    return 1;
  v23 = v317.st_mode;
  v24 = (unsigned int)v21 ^ 1;
  if ( (v317.st_mode & 0xF000) != 0x4000 )
  {
    if ( v306 == 0x4000 )
    {
      if ( !v12[1].m128i_i8[8] || (v25 = v12->m128i_i64[0]) == 0 )
      {
        v33 = sub_40DCF0(1LL, 4LL, v11);
        v34 = "cannot overwrite non-directory %s with directory %s";
        v35 = sub_40DCF0(0LL, 4LL, filename);
        goto LABEL_56;
      }
      if ( !(_BYTE)a8 )
        goto LABEL_350;
    }
    else
    {
      v25 = v12->m128i_i64[0];
      if ( !(_BYTE)a8 )
        goto LABEL_39;
    }
    if ( v25 != 3 )
    {
      v26 = v12[3].m128i_i64[1];
      LOBYTE(old) = v21 ^ 1;
      v27 = sub_40AD30(v26, filename, n);
      v24 = (unsigned __int8)old;
      if ( v27 )
      {
        v33 = sub_40DCF0(1LL, 4LL, v11);
        v34 = "will not overwrite just-created %s with %s";
        v35 = sub_40DCF0(0LL, 4LL, filename);
        goto LABEL_56;
      }
      if ( v306 == 0x4000 )
        goto LABEL_38;
      v23 = v317.st_mode;
      if ( (v317.st_mode & 0xF000) != 0x4000 )
        goto LABEL_38;
      goto LABEL_348;
    }
    if ( !v12[1].m128i_i8[8] )
      goto LABEL_391;
LABEL_350:
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      goto LABEL_351;
    goto LABEL_409;
  }
  if ( v306 != 0x4000 )
  {
LABEL_348:
    if ( v12[1].m128i_i8[8] )
    {
      v25 = v12->m128i_i64[0];
      if ( LODWORD(v12->m128i_i64[0]) )
        goto LABEL_350;
    }
    v115 = "cannot overwrite directory %s with non-directory";
    v15 = sub_40DDD0(4LL, filename);
LABEL_226:
    v116 = dcgettext(0LL, v115, 5);
LABEL_227:
    a7 = 0;
    error(0, 0, v116, v15);
    return a7;
  }
LABEL_38:
  v25 = v12->m128i_i64[0];
LABEL_39:
  v28 = v12[1].m128i_i8[8];
  if ( v28 )
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      goto LABEL_395;
    v23 = v317.st_mode;
LABEL_409:
    if ( (v23 & 0xF000) == 0x4000 )
    {
LABEL_395:
      if ( !v25 )
        goto LABEL_393;
      goto LABEL_351;
    }
    if ( !v25 )
    {
      v33 = sub_40DEA0(0LL, 3LL, filename, v24);
      v34 = "cannot move directory onto non-directory: %s -> %s";
      v35 = sub_40DEA0(0LL, 3LL, v11, v196);
      goto LABEL_56;
    }
LABEL_351:
    LOBYTE(n) = v24;
    v156 = (_BYTE *)sub_40AB40(v11);
    v24 = (unsigned __int8)n;
    v158 = v156;
    if ( *v156 != 46 )
      goto LABEL_352;
    v28 = 1;
    goto LABEL_431;
  }
  if ( v25 )
  {
LABEL_391:
    LOBYTE(n) = v24;
    v190 = (_BYTE *)sub_40AB40(v11);
    v24 = (unsigned __int8)n;
    v158 = v190;
    if ( *v190 != 46 )
    {
LABEL_392:
      if ( (v317.st_mode & 0xF000) == 0x4000 )
      {
LABEL_393:
        old = 0LL;
        goto LABEL_60;
      }
LABEL_352:
      if ( v25 != 3 )
      {
        LOBYTE(n) = v24;
        s1 = v158;
        src = (char *)strlen(v158);
        old = (char *)sub_40AB40(filename);
        v159 = strlen(old);
        s2 = ::src;
        v160 = strlen(::src);
        v24 = (unsigned __int8)n;
        v295 = v160;
        if ( src == (char *)(v159 + v160) )
        {
          LOBYTE(src) = n;
          n = (size_t)s1;
          v161 = memcmp(s1, old, v159);
          v24 = (unsigned __int8)src;
          if ( !v161 )
          {
            v162 = strcmp((const char *)(n + v159), s2);
            v24 = (unsigned __int8)src;
            if ( !v162 )
            {
              LOBYTE(old) = (_BYTE)src;
              v163 = strlen(filename);
              n = v163;
              v164 = (char *)sub_4100E0(v295 + v163 + 1);
              v165 = v164;
              src = ::src;
              v166 = (char *)mempcpy(v164, filename, n);
              strcpy(v166, src);
              LODWORD(src) = __xstat(1, v165, &v319);
              free(v165);
              v24 = (unsigned __int8)old;
              if ( !(_DWORD)src && stat_buf.st_ino == v319.st_ino && stat_buf.st_dev == v319.st_dev )
              {
                if ( v12[1].m128i_i8[8] )
                  v253 = dcgettext(0LL, "backing up %s might destroy source;  %s not moved", 5);
                else
                  v253 = dcgettext(0LL, "backing up %s might destroy source;  %s not copied", 5);
                v254 = sub_40DCF0(1LL, 4LL, v11);
                v255 = sub_40DCF0(0LL, 4LL, filename);
                v37 = v254;
                v39 = v253;
                v38 = v255;
                goto LABEL_57;
              }
            }
          }
        }
      }
      v167 = LODWORD(v12->m128i_i64[0]);
      LOBYTE(src) = v24;
      v168 = (char *)sub_40A6B0(filename, v167, v157, v24, v158);
      v169 = v168;
      old = v168;
      LOBYTE(n) = (_BYTE)src;
      if ( v168 )
      {
        v170 = strlen(v168);
        v171 = alloca(v170 + 9);
        v172 = (char *)memcpy((void *)(((unsigned __int64)&v280 + 7) & 0xFFFFFFFFFFFFFFF0LL), v169, v170 + 1);
        free(old);
        old = v172;
        LOBYTE(v24) = n;
        LOBYTE(src) = 1;
        goto LABEL_60;
      }
      v200 = __errno_location();
      LOBYTE(src) = 1;
      LOBYTE(v24) = n;
      v31 = v200;
      if ( *v200 == 2 )
        goto LABEL_60;
      v201 = "cannot backup %s";
      v202 = sub_40DDD0(4LL, filename);
LABEL_422:
      a7 = 0;
      v203 = dcgettext(0LL, v201, 5);
      error(0, *v31, v203, v202);
      return a7;
    }
    v28 = 0;
LABEL_431:
    v157 = (unsigned __int8)v158[(v158[1] == 46) + 1];
    if ( !(_BYTE)v157 || (_BYTE)v157 == 47 )
      goto LABEL_41;
    if ( v28 )
      goto LABEL_352;
    goto LABEL_392;
  }
LABEL_41:
  old = 0LL;
  if ( (unsigned __int8)v28 | ((v317.st_mode & 0xF000) == 0x4000)
    || (LOBYTE(src) = v12[1].m128i_i8[5], !(_BYTE)src)
    && (!v12[2].m128i_i8[2] || v317.st_nlink <= 1)
    && ((old = 0LL, HIDWORD(v12->m128i_i64[0]) != 2) || (stat_buf.st_mode & 0xF000) == 0x8000) )
  {
LABEL_60:
    if ( !(_BYTE)a8 || !v12[3].m128i_i64[1] )
      goto LABEL_61;
    goto LABEL_50;
  }
  LOBYTE(src) = v24;
  v29 = unlink(filename);
  LOBYTE(v24) = (_BYTE)src;
  if ( v29 )
  {
    v30 = __errno_location();
    LOBYTE(v24) = (_BYTE)src;
    v31 = v30;
    if ( *v30 != 2 )
    {
      v201 = "cannot remove %s";
      v202 = sub_40DDD0(4LL, filename);
      goto LABEL_422;
    }
  }
  LOBYTE(src) = v12[2].m128i_i8[14];
  if ( (_BYTE)src )
  {
    LOBYTE(n) = v24;
    v213 = sub_40DDD0(4LL, filename);
    v214 = dcgettext(0LL, "removed %s\n", 5);
    __printf_chk(1LL, v214, v213, v215);
    LOBYTE(v24) = n;
    old = 0LL;
    goto LABEL_60;
  }
  if ( !(_BYTE)a8 )
  {
    LOBYTE(src) = v12[2].m128i_i8[10] & (v306 == 0x4000);
    if ( (_BYTE)src )
    {
      v62 = stat_buf.st_dev;
      v63 = stat_buf.st_ino;
      old = 0LL;
      goto LABEL_229;
    }
    LOBYTE(src) = 1;
    old = 0LL;
    goto LABEL_65;
  }
  v14 = v12[3].m128i_i64[1] == 0;
  LOBYTE(src) = a8;
  old = 0LL;
  if ( !v14 )
  {
LABEL_50:
    if ( v12[1].m128i_i8[8] )
    {
      if ( v12[2].m128i_i8[14] )
      {
LABEL_144:
        if ( v306 != 0x4000 || !v12[2].m128i_i8[10] )
          goto LABEL_146;
LABEL_126:
        v62 = stat_buf.st_dev;
        v63 = stat_buf.st_ino;
        if ( (_BYTE)a8 )
        {
          n = sub_409480(filename);
          goto LABEL_128;
        }
LABEL_229:
        n = sub_409440(v63, v62);
LABEL_128:
        if ( !n )
          goto LABEL_142;
        goto LABEL_129;
      }
      goto LABEL_124;
    }
    if ( LODWORD(v12->m128i_i64[0]) )
    {
      if ( !v12[2].m128i_i8[14] )
      {
        if ( v306 != 0x4000 )
          goto LABEL_66;
        goto LABEL_187;
      }
LABEL_63:
      if ( v306 != 0x4000 )
      {
        sub_4047E0((__int64)v11, (__int64)filename, (__int64)old);
        goto LABEL_65;
      }
LABEL_187:
      if ( v12[2].m128i_i8[10] )
        goto LABEL_126;
LABEL_66:
      if ( !v12[2].m128i_i8[2] )
      {
        n = 0LL;
        fildes[0] = (unsigned __int8)src;
        goto LABEL_68;
      }
LABEL_140:
      if ( v12[1].m128i_i8[7] )
      {
        n = 0LL;
        goto LABEL_142;
      }
      if ( stat_buf.st_nlink <= 1 )
      {
        v85 = HIDWORD(v12->m128i_i64[0]);
        if ( !(_BYTE)a8 || v85 != 3 )
        {
          n = 0LL;
          if ( v85 != 4 )
            goto LABEL_142;
        }
      }
      n = sub_409480(filename);
      goto LABEL_165;
    }
    v32 = &v317;
    if ( !(_BYTE)v24 )
    {
      if ( __lxstat(1, filename, &v319) )
        goto LABEL_61;
      v32 = &v319;
    }
    if ( (v32->st_mode & 0xF000) != 40960 || !(unsigned __int8)sub_40AD30(v12[3].m128i_i64[1], filename, v32) )
    {
LABEL_61:
      if ( v12[2].m128i_i8[14] )
      {
        if ( !v12[1].m128i_i8[8] )
          goto LABEL_63;
        goto LABEL_144;
      }
      goto LABEL_124;
    }
    v33 = sub_40DCF0(1LL, 4LL, filename);
    v34 = "will not copy %s through just-created symlink %s";
    v35 = sub_40DCF0(0LL, 4LL, v11);
    goto LABEL_56;
  }
LABEL_124:
  if ( v12[2].m128i_i8[10] && v306 == 0x4000 )
    goto LABEL_126;
LABEL_65:
  if ( !v12[1].m128i_i8[8] )
    goto LABEL_66;
LABEL_146:
  if ( stat_buf.st_nlink != 1 )
  {
    if ( !v12[2].m128i_i8[2] )
    {
      n = 0LL;
      goto LABEL_149;
    }
    goto LABEL_140;
  }
  n = sub_409440(stat_buf.st_ino, stat_buf.st_dev);
LABEL_165:
  if ( !n )
    goto LABEL_142;
  if ( v306 != 0x4000 )
  {
    if ( (unsigned __int8)sub_4049C0(n, (__int64)filename, 1u, v12[2].m128i_i8[14], (char)ptr) )
      return 1;
    goto LABEL_135;
  }
LABEL_129:
  if ( (unsigned __int8)sub_40E2F0(v11, n, v64, v65, v66, v67) )
  {
    v15 = sub_40DCF0(1LL, 4LL, qword_61B8E8);
    v150 = sub_40DCF0(0LL, 4LL, qword_61B8F0);
    v151 = dcgettext(0LL, "cannot copy a directory, %s, into itself, %s", 5);
    error(0, 0, v151, v150, v15);
    *a10 = 1;
LABEL_135:
    if ( !v12[2].m128i_i8[5] )
      goto LABEL_136;
    goto LABEL_240;
  }
  if ( (unsigned __int8)sub_40E2F0(filename, n, v68, v69, v70, v71) )
  {
    v191 = sub_40DDD0(4LL, qword_61B8F0);
    v192 = dcgettext(0LL, "warning: source directory %s specified more than once", 5);
    error(0, 0, v192, v191);
    if ( !v12[1].m128i_i8[8] || !LOBYTE(fildes[0]) )
      return 1;
    goto LABEL_285;
  }
  v72 = HIDWORD(v12->m128i_i64[0]);
  if ( v72 != 4 && (v72 != 3 || !(_BYTE)a8) )
  {
    v73 = sub_40DCF0(1LL, 4LL, n);
    v15 = sub_40DCF0(0LL, 4LL, filename);
    v74 = dcgettext(0LL, "will not create hard link %s to directory %s", 5);
    error(0, 0, v74, v15, v73);
    goto LABEL_135;
  }
LABEL_142:
  if ( !v12[1].m128i_i8[8] )
  {
    fildes[0] = (unsigned __int8)src;
    goto LABEL_68;
  }
LABEL_149:
  if ( !rename(v11, filename) )
  {
    if ( v12[2].m128i_i8[14] )
    {
      v153 = dcgettext(0LL, "renamed ", 5);
      __printf_chk(1LL, v153, v154, v155);
      sub_4047E0((__int64)v11, (__int64)filename, (__int64)old);
    }
    if ( v12[2].m128i_i8[1] )
      sub_405090((__int64)filename, 0LL, 1LL, (__int64)v12);
    if ( a11 )
      *a11 = 1;
    if ( (_BYTE)a8 )
    {
      a7 = a8;
      sub_40ACA0(v12[3].m128i_i64[1], filename, v303);
      return a7;
    }
    return 1;
  }
  v78 = __errno_location();
  v79 = v78;
  v80 = *v78;
  if ( v80 == 22 )
  {
    a7 = 1;
    v178 = sub_40DCF0(1LL, 4LL, qword_61B8E8);
    v179 = sub_40DCF0(0LL, 4LL, qword_61B8F0);
    v180 = dcgettext(0LL, "cannot move %s to a subdirectory of itself, %s", 5);
    error(0, 0, v180, v179, v178);
    *a10 = 1;
    return a7;
  }
  if ( v80 != 18 )
  {
    v125 = sub_40DCF0(1LL, 4LL, filename);
    v126 = "cannot move %s to %s";
    v127 = sub_40DCF0(0LL, 4LL, v11);
    goto LABEL_256;
  }
  if ( v306 == 0x4000 )
  {
    if ( !rmdir(filename) || *v79 == 2 )
      goto LABEL_156;
    goto LABEL_255;
  }
  if ( unlink(filename) && *v79 != 2 )
  {
LABEL_255:
    v125 = sub_40DCF0(1LL, 4LL, filename);
    v126 = "inter-device move failed: %s to %s; unable to remove target";
    v127 = sub_40DCF0(0LL, 4LL, v11);
LABEL_256:
    v128 = dcgettext(0LL, v126, 5);
    error(0, *v79, v128, v127, v125);
    sub_4093F0(stat_buf.st_ino, stat_buf.st_dev);
    return a7;
  }
  LOBYTE(src) = v12[2].m128i_i8[14] & (v306 != 0x4000);
  if ( !(_BYTE)src )
  {
LABEL_156:
    fildes[0] = 1;
    LOBYTE(src) = 1;
    goto LABEL_68;
  }
  v175 = dcgettext(0LL, "copied ", 5);
  __printf_chk(1LL, v175, v176, v177);
  sub_4047E0((__int64)v11, (__int64)filename, (__int64)old);
  fildes[0] = 1;
LABEL_68:
  v40 = v305 & 0xFFF;
  if ( v12[2].m128i_i8[11] )
    v40 = v12[1].m128i_i32[0] & 0xFFF;
  if ( v12[1].m128i_i8[13] )
  {
    if ( !(unsigned __int8)sub_404FC0((__int64)v11, (__int64)filename, v305, fildes[0], (__int64)v12) )
      return a7;
    LODWORD(s1) = v40 & 0x3F;
    if ( v306 != 0x4000 )
      goto LABEL_73;
LABEL_178:
    v87 = stat_buf.st_ino;
    v88 = stat_buf.st_dev;
    v89 = *(_QWORD **)fd;
    if ( *(_QWORD *)fd )
    {
      while ( v89[1] != stat_buf.st_ino || v89[2] != stat_buf.st_dev )
      {
        v89 = (_QWORD *)*v89;
        if ( !v89 )
          goto LABEL_200;
      }
      v90 = "cannot copy cyclic symbolic link %s";
      v15 = sub_40DDD0(4LL, v11);
      goto LABEL_184;
    }
LABEL_200:
    v96 = (_QWORD *)((unsigned __int64)&v278 & 0xFFFFFFFFFFFFFFF0LL);
    v14 = (_BYTE)src == 0;
    v295 = (__int64)v96;
    *v96 = *(_QWORD *)fd;
    v96[1] = v87;
    v96[2] = v88;
    if ( v14 && (v317.st_mode & 0xF000) == 0x4000 )
    {
      if ( v12[2].m128i_i64[0] & 0xFF000000FF00LL
        && !(unsigned __int8)sub_405090((__int64)filename, v12[2].m128i_u8[5], 0LL, (__int64)v12)
        && v12[2].m128i_i8[6] )
      {
        goto LABEL_197;
      }
      v293 = 0;
      LODWORD(s1) = 0;
    }
    else
    {
      if ( mkdir(filename, v40 & ~(_DWORD)s1) )
      {
        v93 = "cannot create directory %s";
        v15 = sub_40DDD0(4LL, filename);
        goto LABEL_196;
      }
      if ( __lxstat(1, filename, &v317) )
      {
        v93 = "cannot stat %s";
        v15 = sub_40DDD0(4LL, filename);
        goto LABEL_196;
      }
      v97 = v317.st_mode;
      v293 = 0;
      if ( (v317.st_mode & 0x1C0) != 448 )
      {
        v98 = chmod(filename, v317.st_mode | 0x1C0);
        v286 = v97;
        v293 = 1;
        if ( v98 )
        {
          v93 = "setting permissions for %s";
          v15 = sub_40DDD0(4LL, filename);
          goto LABEL_196;
        }
      }
      if ( !*a9 )
      {
        sub_409480(filename);
        *a9 = 1;
      }
      if ( v12[2].m128i_i8[14] )
      {
        if ( v12[1].m128i_i8[8] )
        {
          v99 = sub_40DDD0(4LL, filename);
          v100 = dcgettext(0LL, "created directory %s\n", 5);
          __printf_chk(1LL, v100, v99, v101);
        }
        else
        {
          sub_4047E0((__int64)v11, (__int64)filename, 0LL);
        }
      }
    }
    LOBYTE(ptr) = v12[1].m128i_i8[12] & (v299 != 0);
    if ( !(_BYTE)ptr || (LOBYTE(fd[0]) = 0, v43 = 0, *(_QWORD *)v299 == stat_buf.st_dev) )
    {
      v102 = _mm_loadu_si128(v12 + 1);
      v103 = _mm_loadu_si128(v12 + 2);
      v104 = _mm_loadu_si128(v12 + 3);
      v105 = v12[4].m128i_i64[0];
      *(__m128i *)&v319.st_dev = _mm_loadu_si128(v12);
      *(__m128i *)&v319.st_nlink = v102;
      *(__m128i *)&v319.st_gid = v103;
      *(__m128i *)&v319.st_size = v104;
      v319.st_blocks = v105;
      s = (char *)sub_40E7F0(v11, 2LL);
      if ( s )
      {
        if ( HIDWORD(v12->m128i_i64[0]) == 3 )
          HIDWORD(v319.st_dev) = 2;
        if ( *s )
        {
          LOBYTE(v288) = a7;
          v106 = s;
          s2 = (char *)&v318;
          v107 = 0;
          v294 = &v319;
          v287 = (__blksize_t)v12;
          LOBYTE(ptr) = 1;
          v299 = (__off_t)&length;
          *(_QWORD *)fd = v11;
          v290 = a8;
          do
          {
            v108 = (void *)sub_40AF00(*(_QWORD *)fd, v106, 0LL);
            v109 = sub_40AF00(filename, v106, 0LL);
            v110 = (void *)v109;
            LOBYTE(v318.st_dev) = *a9;
            v111 = sub_405400((_DWORD)v108, v109, (unsigned int)fildes[0], (__int64)v303, v295);
            LOBYTE(ptr) = v111 & (unsigned __int8)ptr;
            *a10 |= length;
            free(v110);
            free(v108);
            if ( (_BYTE)length )
              break;
            v107 |= LOBYTE(v318.st_dev);
            v106 += strlen(v106) + 1;
          }
          while ( *v106 );
          v112 = v107;
          v11 = *(char **)fd;
          a7 = (unsigned __int8)v288;
          v12 = (const __m128i *)v287;
          v15 = v290;
        }
        else
        {
          v112 = 0;
          LOBYTE(ptr) = 1;
        }
        free(s);
        *a9 = v112;
      }
      else
      {
        *(_QWORD *)fildes = sub_40DDD0(4LL, v11);
        v206 = dcgettext(0LL, "cannot access %s", 5);
        v207 = __errno_location();
        error(0, *v207, v206, *(_QWORD *)fildes);
        LOBYTE(ptr) = 0;
      }
      LOBYTE(fd[0]) = 0;
      v43 = 0;
    }
    goto LABEL_79;
  }
  if ( v306 == 0x4000 )
  {
    if ( !(unsigned __int8)sub_404FC0((__int64)v11, (__int64)filename, v305, fildes[0], (__int64)v12) )
      return a7;
    LODWORD(s1) = v40 & 0x12;
    goto LABEL_178;
  }
  v41 = sub_404FC0((__int64)v11, (__int64)filename, v305, fildes[0], (__int64)v12);
  LODWORD(s1) = 0;
  if ( !v41 )
    return a7;
LABEL_73:
  LOBYTE(fd[0]) = v12[2].m128i_i8[12];
  if ( LOBYTE(fd[0]) )
  {
    if ( *v11 == 47 )
    {
LABEL_77:
      if ( (int)sub_409A40(v11, 4294967196LL, filename, v12[1].m128i_u8[6]) < 0 )
      {
        v15 = sub_40DCF0(1LL, 4LL, v11);
        v181 = sub_40DCF0(0LL, 4LL, filename);
        v182 = dcgettext(0LL, "cannot create symbolic link %s to %s", 5);
        v183 = __errno_location();
        error(0, *v183, v182, v181, v15);
        goto LABEL_197;
      }
      v293 = 0;
      v43 = 0;
      LOBYTE(ptr) = fd[0];
      goto LABEL_79;
    }
    v42 = (void *)sub_40AA60(filename);
    if ( !memcmp(".", v42, 2uLL)
      || __xstat(1, ".", &v318)
      || __xstat(1, (const char *)v42, &v319)
      || v318.st_ino == v319.st_ino && v318.st_dev == v319.st_dev )
    {
      free(v42);
      goto LABEL_77;
    }
    free(v42);
    v90 = "%s: can make relative symbolic links only in current directory";
    v15 = sub_40DEA0(0LL, 3LL, filename, v152);
LABEL_184:
    v91 = dcgettext(0LL, v90, 5);
    error(0, 0, v91, v15);
    goto LABEL_197;
  }
  v293 = v12[1].m128i_i8[7];
  if ( v293 )
  {
    v124 = sub_4049C0((__int64)v11, (__int64)filename, v12[1].m128i_u8[6], 0, (char)ptr);
    v43 = 0;
    v293 = 0;
    LOBYTE(ptr) = v124;
    if ( !v124 )
      goto LABEL_197;
LABEL_79:
    v44 = v306 != 0x4000;
    if ( !(_BYTE)src && v12[1].m128i_i8[4] != 1 && v44 )
    {
      if ( v12[2].m128i_i64[0] & 0xFF000000FF00LL )
      {
        v45 = v12[2].m128i_u8[5];
        LOBYTE(fildes[0]) = v43;
        v46 = sub_405090((__int64)filename, v45, 0LL, (__int64)v12);
        v43 = fildes[0];
        if ( !v46 )
        {
          if ( v12[2].m128i_i8[6] )
            goto LABEL_197;
        }
      }
    }
    if ( (_BYTE)v15 )
    {
      if ( v12[3].m128i_i64[1] )
      {
        LOBYTE(fildes[0]) = v43;
        v47 = __lxstat(1, filename, &v319);
        v43 = fildes[0];
        if ( !v47 )
        {
          sub_40ACA0(v12[3].m128i_i64[1], filename, &v319);
          v43 = fildes[0];
        }
      }
    }
    if ( v12[1].m128i_i8[7] && v44 || v43 )
      return (unsigned __int8)ptr;
    if ( v12[1].m128i_i8[15] )
    {
      v319.st_dev = stat_buf.st_atim.tv_sec;
      v319.st_ino = stat_buf.st_atim.tv_nsec;
      *(timespec *)&v319.st_nlink = stat_buf.st_mtim;
      if ( !LOBYTE(fd[0]) )
      {
        if ( !(unsigned int)sub_40F8A0(filename) )
        {
LABEL_98:
          if ( !v12[1].m128i_i8[13] || !(_BYTE)src && stat_buf.st_uid == v317.st_uid && stat_buf.st_gid == v317.st_gid )
            goto LABEL_105;
          v51 = sub_4051E0((__int64)v12, filename, 0xFFFFFFFF, v303, (char)src, (__int64)&v317);
          if ( v51 != -1 )
          {
            v52 = v305;
            BYTE1(v52) &= 0xF1u;
            if ( v51 )
              v52 = v305;
            v305 = v52;
LABEL_105:
            if ( !(v12[1].m128i_i64[1] & 0xFF0000000000FFLL) )
            {
              if ( v12[2].m128i_i8[11] )
              {
                v188 = v12[1].m128i_u32[0];
              }
              else
              {
                if ( !v12[2].m128i_i8[0] )
                {
                  if ( (_DWORD)s1 && (LODWORD(s1) = ~(unsigned int)sub_4053D0() & (unsigned int)s1, (_DWORD)s1) )
                  {
                    if ( v293 != 1 )
                    {
                      if ( (_BYTE)src && __lxstat(1, filename, &v317) )
                      {
                        v17 = filename;
                        goto LABEL_118;
                      }
                      v286 = v317.st_mode;
                      if ( !(~v317.st_mode & (unsigned int)s1) )
                        return (unsigned __int8)ptr;
                    }
                  }
                  else if ( !v293 )
                  {
                    return (unsigned __int8)ptr;
                  }
                  if ( !chmod(filename, (unsigned int)s1 | v286) )
                    return (unsigned __int8)ptr;
                  v53 = sub_40DDD0(4LL, filename);
                  v54 = dcgettext(0LL, "preserving permissions for %s", 5);
                  v55 = __errno_location();
                  error(0, *v55, v54, v53);
LABEL_112:
                  v56 = (unsigned __int8)ptr;
                  if ( v12[2].m128i_i8[4] )
                    v56 = a7;
                  return v56;
                }
                v188 = ~(unsigned __int16)sub_4053D0() & 0x1FF;
              }
              v14 = (unsigned int)sub_409BD0(filename, 0xFFFFFFFFLL, v188) == 0;
              v189 = (unsigned __int8)ptr;
              if ( !v14 )
                v189 = a7;
              return v189;
            }
            if ( !(unsigned int)sub_409B40(v11, 0xFFFFFFFFLL, filename, 0xFFFFFFFFLL, v305) )
              return (unsigned __int8)ptr;
            goto LABEL_112;
          }
          return 0;
        }
        goto LABEL_96;
      }
      if ( (unsigned int)sub_40F8B0(filename) && *__errno_location() != 38 )
      {
LABEL_96:
        v48 = sub_40DDD0(4LL, filename);
        v49 = dcgettext(0LL, "preserving times for %s", 5);
        v50 = __errno_location();
        error(0, *v50, v49, v48);
        if ( v12[2].m128i_i8[4] )
          return 0;
        goto LABEL_97;
      }
    }
LABEL_97:
    if ( LOBYTE(fd[0]) )
      return (unsigned __int8)ptr;
    goto LABEL_98;
  }
  if ( v306 != 0x8000 && !(v12[1].m128i_i8[4] & (v306 != 40960)) )
  {
    LOBYTE(fildes[0]) = 0;
    if ( v306 == 4096 )
    {
      v319.st_dev = 0LL;
      v194 = v305 & ~(_DWORD)s1;
      v195 = __xmknod(0, filename, v305 & ~(_DWORD)s1, &v319.st_dev);
      v43 = fildes[0];
      if ( !v195 || (v210 = mkfifo(filename, v194 & 0xFFFFEFFF), v43 = fildes[0], !v210) )
      {
        LOBYTE(fd[0]) = v43;
        v293 = v43;
        LOBYTE(ptr) = 1;
        goto LABEL_79;
      }
      v93 = "cannot create fifo %s";
      v15 = sub_40DDD0(4LL, filename);
      goto LABEL_196;
    }
    LOBYTE(ptr) = v306 == 49152 || (v305 & 0xB000) == 0x2000;
    if ( (_BYTE)ptr )
    {
      v319.st_dev = stat_buf.st_rdev;
      v92 = __xmknod(0, filename, v305 & ~(_DWORD)s1, &v319.st_dev);
      v43 = fildes[0];
      LOBYTE(fd[0]) = fildes[0];
      v293 = fildes[0];
      if ( !v92 )
        goto LABEL_79;
      v93 = "cannot create special file %s";
      v15 = sub_40DDD0(4LL, filename);
LABEL_196:
      v94 = dcgettext(0LL, v93, 5);
      v95 = __errno_location();
      error(0, *v95, v94, v15);
      goto LABEL_197;
    }
    if ( v306 != 40960 )
    {
      v90 = "%s has unknown file type";
      v15 = sub_40DDD0(4LL, v11);
      goto LABEL_184;
    }
    v184 = sub_409C30(v11);
    v185 = (char *)v184;
    if ( !v184 )
    {
      v93 = "cannot read symbolic link %s";
      v15 = sub_40DDD0(4LL, v11);
      goto LABEL_196;
    }
    if ( (int)sub_409A40(v184, 4294967196LL, filename, v12[1].m128i_u8[6]) < 0 )
    {
      fildes[0] = *__errno_location();
      if ( fildes[0] )
      {
        if ( v12[2].m128i_i8[13] == 1 && !(_BYTE)src && (v317.st_mode & 0xF000) == 40960 )
        {
          v261 = -1LL;
          v262 = v185;
          do
          {
            if ( !v261 )
              break;
            v14 = *v262++ == (_BYTE)src;
            --v261;
          }
          while ( !v14 );
          if ( v317.st_size == -v261 - 2 )
          {
            v263 = (void *)sub_409C30(filename);
            if ( v263 )
            {
              ptr = v263;
              if ( !strcmp((const char *)v263, v185) )
              {
                free(ptr);
                goto LABEL_377;
              }
              free(ptr);
            }
          }
        }
        free(v185);
        v211 = sub_40DDD0(4LL, filename);
        v212 = dcgettext(0LL, "cannot create symbolic link %s", 5);
        error(0, fildes[0], v212, v211);
        goto LABEL_197;
      }
    }
LABEL_377:
    free(v185);
    v293 = v12[2].m128i_i8[5];
    if ( !v293 )
    {
      v43 = v12[1].m128i_i8[13];
      if ( v43 )
      {
        LOBYTE(fildes[0]) = v12[1].m128i_i8[13];
        if ( lchown(filename, stat_buf.st_uid, stat_buf.st_gid) )
        {
          LOBYTE(fd[0]) = sub_4051B0((__int64)v12);
          if ( LOBYTE(fd[0]) )
          {
            v43 = 0;
            LOBYTE(ptr) = fd[0];
          }
          else
          {
            v259 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
            v260 = __errno_location();
            error(0, *v260, v259, filename);
            v293 = v12[2].m128i_i8[4];
            if ( v293 )
              goto LABEL_197;
            LOBYTE(fd[0]) = fildes[0];
            LOBYTE(ptr) = fildes[0];
            v43 = 0;
          }
        }
        else
        {
          LOBYTE(fd[0]) = fildes[0];
          LOBYTE(ptr) = fildes[0];
          v43 = 0;
        }
      }
      else
      {
        v293 = 0;
        LOBYTE(fd[0]) = 1;
        LOBYTE(ptr) = 1;
      }
      goto LABEL_79;
    }
LABEL_240:
    sub_4047A0();
    goto LABEL_241;
  }
  LODWORD(v295) = stat_buf.st_mode;
  LOBYTE(s2) = v12[2].m128i_i8[3];
  fildes[0] = sub_40AC50((char)v11);
  if ( fildes[0] < 0 )
  {
    v93 = "cannot open %s for reading";
    v15 = sub_40DDD0(4LL, v11);
    goto LABEL_196;
  }
  if ( __fxstat(1, fildes[0], &v318) )
  {
    ptr = (void *)sub_40DDD0(4LL, v11);
    v204 = dcgettext(0LL, "cannot fstat %s", 5);
    v205 = __errno_location();
    v143 = ptr;
    v145 = v204;
    v144 = *v205;
    goto LABEL_303;
  }
  if ( stat_buf.st_ino != v318.st_ino || stat_buf.st_dev != v318.st_dev )
  {
    v186 = sub_40DDD0(4LL, v11);
    v187 = dcgettext(0LL, "skipping file %s, as it was replaced while being copied", 5);
    v143 = (void *)v186;
    v144 = 0;
    v145 = v187;
    goto LABEL_303;
  }
  v283 = v40 & 0x1FF;
  if ( (_BYTE)src )
    goto LABEL_441;
  v136 = filename;
  v137 = sub_40AC50((char)filename);
  fd[0] = v137;
  if ( v12[2].m128i_i64[0] & 0xFF000000FF00LL )
  {
    if ( v137 < 0 )
    {
LABEL_295:
      v138 = __errno_location();
      v139 = v138;
      if ( !v12[1].m128i_i8[6] )
      {
        v141 = *v138;
        if ( *v138 != 2 || v12[1].m128i_i8[8] )
        {
          LOBYTE(src) = 0;
          goto LABEL_302;
        }
        v285 = 0;
        goto LABEL_300;
      }
      if ( unlink(filename) )
      {
        ptr = (void *)sub_40DDD0(4LL, filename);
        v270 = dcgettext(0LL, "cannot remove %s", 5);
        v143 = ptr;
        v144 = *v139;
        v145 = v270;
        goto LABEL_303;
      }
      if ( v12[2].m128i_i8[14] )
      {
        v264 = sub_40DDD0(4LL, filename);
        v265 = dcgettext(0LL, "removed %s\n", 5);
        __printf_chk(1LL, v265, v264, v266);
      }
      LOBYTE(src) = v12[2].m128i_i8[1];
      v285 = (int)s1;
      if ( !(_BYTE)src )
      {
LABEL_300:
        LODWORD(ptr) = v283 & ~v285;
        fd[0] = sub_40AC50((char)filename);
        v140 = __errno_location();
        v141 = *v140;
        v299 = (__off_t)v140;
        LOBYTE(v294) = fd[0] < 0 && v141 == 17;
        if ( (_BYTE)v294 )
        {
          v141 = 17;
          LOBYTE(src) = v12[1].m128i_i8[8];
          if ( (_BYTE)src )
            goto LABEL_302;
          if ( !__lxstat(1, filename, &v319) && (v319.st_mode & 0xF000) == 40960 )
          {
            if ( !v12[3].m128i_i8[0] )
            {
              LOBYTE(fd[0]) = 0;
              v276 = sub_40DDD0(4LL, filename);
              v277 = dcgettext(0LL, "not writing through dangling symlink %s", 5);
              error(0, 0, v277, v276);
              ptr = 0LL;
              v146 = fd[0];
              LOBYTE(src) = (_BYTE)v294;
              goto LABEL_304;
            }
            fd[0] = sub_40AC50((char)filename);
            v141 = *(_DWORD *)v299;
          }
        }
        LOBYTE(src) = fd[0] < 0 && v141 == 21;
        if ( (_BYTE)src )
        {
          v141 = 21;
          if ( *filename )
            v141 = (filename[strlen(filename) - 1] != 47) + 20;
          goto LABEL_302;
        }
        LOBYTE(src) = 1;
        if ( fd[0] < 0 )
        {
LABEL_302:
          ptr = (void *)sub_40DDD0(4LL, filename);
          v142 = dcgettext(0LL, "cannot create regular file %s", 5);
          v143 = ptr;
          v144 = v141;
          v145 = v142;
LABEL_303:
          error(0, v144, v145, v143);
          v146 = 0;
          ptr = 0LL;
          goto LABEL_304;
        }
        goto LABEL_458;
      }
      v146 = sub_404FC0((__int64)v11, (__int64)filename, v283, 1u, (__int64)v12);
      if ( !v146 )
      {
        ptr = 0LL;
        goto LABEL_304;
      }
LABEL_441:
      v285 = (int)s1;
      goto LABEL_300;
    }
    v224 = sub_405090((__int64)v136, v12[2].m128i_u8[5], 0LL, (__int64)v12);
    if ( !v224 )
    {
      LOBYTE(src) = v12[2].m128i_i8[6];
      if ( (_BYTE)src )
      {
        LOBYTE(src) = 0;
        ptr = 0LL;
        goto LABEL_490;
      }
    }
  }
  else if ( fd[0] < 0 )
  {
    goto LABEL_295;
  }
  v285 = 0;
LABEL_458:
  v294 = &v319;
  LODWORD(v299) = __fxstat(1, fd[0], &v319);
  if ( (_DWORD)v299 )
  {
    ptr = (void *)sub_40DDD0(4LL, filename);
    v232 = dcgettext(0LL, "cannot fstat %s", 5);
    v233 = __errno_location();
    error(0, *v233, v232, ptr);
    v224 = 0;
    ptr = 0LL;
    goto LABEL_490;
  }
  if ( !(_BYTE)s2 )
    goto LABEL_623;
  if ( !v12[3].m128i_i32[1] )
    goto LABEL_461;
  if ( !ioctl(fd[0], 0x40049409uLL, (unsigned int)fildes[0]) )
  {
LABEL_623:
    ptr = 0LL;
    goto LABEL_477;
  }
  if ( v12[3].m128i_i32[1] == 2 )
  {
    v299 = sub_40DCF0(1LL, 4LL, v11);
    v257 = sub_40DCF0(0LL, 4LL, filename);
    ptr = dcgettext(0LL, "failed to clone %s from %s", 5);
    v258 = __errno_location();
    error(0, *v258, (const char *)ptr, v257, v299);
    v224 = 0;
    ptr = 0LL;
    goto LABEL_490;
  }
LABEL_461:
  v216 = getpagesize();
  v287 = v319.st_blksize;
  s = (char *)v319.st_blksize;
  if ( (unsigned __int64)(v319.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
  {
    s = (char *)0x20000;
    v217 = 512LL;
    if ( (unsigned __int64)(v287 - 1) <= 0x1FFFFFFFFFFFFFFFLL )
      v217 = v287;
    v287 = v217;
  }
  j__posix_fadvise(fildes[0], 0LL, 0LL, 2);
  if ( (v318.st_mode & 0xF000) == 0x8000 )
    LODWORD(v299) = v318.st_blocks < v318.st_size / 512;
  ptr = (void *)(v216 - 1);
  if ( (v319.st_mode & 0xF000) != 0x8000 )
    goto LABEL_468;
  v256 = HIDWORD(v12->m128i_i64[1]);
  if ( v256 == 3 )
  {
    ptr = (void *)sub_4100E0(&s[v216]);
    v221 = ((unsigned __int64)ptr + v216 - 1) % v216;
    v284 = (char *)ptr + v216 - v221 - 1;
    if ( !(_DWORD)v299 )
    {
      v222 = HIDWORD(v12->m128i_i64[1]) == 3;
      v299 = (__off_t)&length;
      goto LABEL_475;
    }
  }
  else
  {
    if ( v256 != 2 || !(v299 & 1) )
    {
LABEL_468:
      v218 = v318.st_blksize;
      LODWORD(v288) = v318.st_mode & 0xF000;
      ptr = (void *)(0x7FFFFFFFFFFFFFFFLL - v216);
      if ( (unsigned __int64)(v318.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
        v218 = 0x20000LL;
      v219 = sub_40A780(v218, s, 0x7FFFFFFFFFFFFFFFLL - v216);
      if ( (_DWORD)v288 == 0x8000 && (unsigned __int64)s > v318.st_size )
        s = (char *)(v318.st_size + 1);
      v220 = &s[v219 - 1 - (unsigned __int64)&s[v219 - 1] % v219];
      s = v220;
      if ( !v220 || ptr < v220 )
        s = (char *)v219;
      ptr = (void *)sub_4100E0(&s[v216]);
      v221 = ((unsigned __int64)ptr + v216 - 1) % v216;
      v284 = (char *)ptr + v216 - v221 - 1;
      if ( !(_DWORD)v299 )
      {
        v14 = HIDWORD(v12->m128i_i64[1]) == 3;
        v287 = 0LL;
        v299 = (__off_t)&length;
        v222 = v14;
LABEL_475:
        v279 = v221;
        if ( !(unsigned __int8)sub_404B90(
                                 v284,
                                 (size_t)s,
                                 (unsigned __int64)&savedregs,
                                 fildes[0],
                                 fd[0],
                                 v287,
                                 v222,
                                 (__int64)v11,
                                 (__int64)filename,
                                 0xFFFFFFFFFFFFFFFFLL,
                                 (_QWORD *)v299,
                                 &v310) )
          goto LABEL_513;
        if ( !(_BYTE)v310 || ftruncate(fd[0], length) >= 0 )
          goto LABEL_477;
        goto LABEL_602;
      }
      v291 = 0;
      v290 = 1;
      goto LABEL_529;
    }
    ptr = (void *)sub_4100E0(&s[v216]);
    v284 = (char *)ptr + v216 - ((unsigned __int64)ptr + v216 - 1) % v216 - 1;
  }
  v290 = HIDWORD(v12->m128i_i64[1]);
  v291 = (char)s2;
LABEL_529:
  v235 = 0LL;
  v299 = (__off_t)&length;
  v280 = v318.st_size;
  sub_409550((unsigned int)fildes[0], &length);
  v282 = a8;
  v236 = 0LL;
  v281 = v12;
  v237 = v280;
  v292 = a7;
  v238 = (char)s2;
  v288 = v11;
  v239 = 0LL;
  do
  {
    s2 = v236;
    v240 = sub_409580(v299);
    v236 = s2;
    if ( !v240 )
    {
      LOBYTE(s2) = v238;
      v11 = v288;
      a7 = v292;
      v12 = v281;
      v15 = v282;
      if ( v314 )
        goto LABEL_555;
      if ( !v313 )
      {
        v249 = "%s: failed to get extents info";
        v299 = sub_40DEA0(0LL, 3LL, v288, v236);
        goto LABEL_563;
      }
      v275 = 0LL;
      v222 = HIDWORD(v281->m128i_i64[1]) == 3;
      if ( v291 )
        v275 = v287;
      v287 = v275;
      goto LABEL_475;
    }
    if ( !v312.tv_nsec )
      goto LABEL_553;
    v241 = v239;
    v242 = v235;
    v243 = 0;
    v244 = 0LL;
    while ( 1 )
    {
      v246 = (__off_t *)((char *)v315 + 24 * v244);
      v235 = *v246;
      v239 = v246[1];
      if ( v237 < (__int64)(*v246 + v239) )
      {
        if ( v235 > v237 )
          v235 = v237;
        v239 = v237 - v235;
      }
      v238 = 0;
      if ( v235 - v242 != v241 )
      {
        s2 = (char *)(v235 - v242 - v241);
        if ( lseek(fildes[0], v235, 0) < 0 )
        {
          v11 = v288;
          a7 = v292;
          v12 = v281;
          v15 = v282;
          v267 = "cannot lseek %s";
          v299 = sub_40DDD0(4LL, v288);
        }
        else
        {
          if ( v290 != 1 )
          {
            v238 = sub_404AD0(fd[0], (__int64)filename, v290 == 3, (__off_t)s2);
            if ( !v238 )
            {
LABEL_548:
              a7 = v292;
              v11 = v288;
              v12 = v281;
              v15 = v282;
LABEL_549:
              free(v315);
              goto LABEL_513;
            }
            goto LABEL_533;
          }
          if ( (unsigned __int8)sub_404690(fd[0], (size_t)s2) )
          {
            v245 = 0LL;
            goto LABEL_535;
          }
          a7 = v292;
          v11 = v288;
          v12 = v281;
          v15 = v282;
          v267 = "%s: write failed";
          v299 = sub_40DEA0(0LL, 3LL, filename, v247);
        }
        v268 = dcgettext(0LL, v267, 5);
        v269 = __errno_location();
        error(0, *v269, v268, v299);
        goto LABEL_549;
      }
LABEL_533:
      v245 = 0LL;
      if ( v290 == 3 )
        v245 = v287;
LABEL_535:
      if ( !(unsigned __int8)sub_404B90(
                               v284,
                               (size_t)s,
                               (unsigned __int64)&savedregs,
                               fildes[0],
                               fd[0],
                               v245,
                               1,
                               (__int64)v288,
                               (__int64)filename,
                               v239,
                               &v310,
                               &v309) )
        goto LABEL_548;
      v236 = (char *)(v235 + v310);
      if ( v310 )
        v238 = v309;
      if ( (char *)v237 == v236 )
        break;
      v242 = v235;
      v241 = v239;
      v244 = ++v243;
      if ( (unsigned __int64)v243 >= v312.tv_nsec )
        goto LABEL_553;
    }
    v314 = 1;
LABEL_553:
    s2 = v236;
    free(v315);
    v315 = 0LL;
    v312.tv_nsec = 0LL;
    v236 = s2;
  }
  while ( !v314 );
  LOBYTE(s2) = v238;
  v11 = v288;
  a7 = v292;
  v12 = v281;
  v15 = v282;
LABEL_555:
  v248 = v280 > (__int64)v236;
  if ( v280 <= (__int64)v236 && !(_BYTE)s2 )
    goto LABEL_477;
  if ( v290 == 1 )
  {
    if ( (unsigned __int8)sub_404690(fd[0], v280 - (_QWORD)v236) )
      goto LABEL_477;
    goto LABEL_602;
  }
  v299 = (__off_t)v236;
  if ( ftruncate(fd[0], v280) )
  {
LABEL_602:
    v249 = "failed to extend %s";
    v299 = sub_40DDD0(4LL, filename);
LABEL_563:
    v250 = dcgettext(0LL, v249, 5);
    v251 = __errno_location();
    error(0, *v251, v250, v299);
    goto LABEL_513;
  }
  if ( v290 == 3 && v248 && (int)sub_404740(fd[0], v299, v280 - v299) < 0 )
  {
    v249 = "error deallocating %s";
    v299 = sub_40DDD0(4LL, filename);
    goto LABEL_563;
  }
LABEL_477:
  if ( !v12[1].m128i_i8[15]
    || (length = (__int128)stat_buf.st_atim, v312 = stat_buf.st_mtim, !(unsigned int)sub_40F460(fd[0], filename))
    || (v299 = sub_40DDD0(4LL, filename),
        v228 = dcgettext(0LL, "preserving times for %s", 5),
        v229 = __errno_location(),
        error(0, *v229, v228, v299),
        !v12[2].m128i_i8[4]) )
  {
    if ( v12[1].m128i_i8[13] && (stat_buf.st_uid != v319.st_uid || stat_buf.st_gid != v319.st_gid) )
    {
      v223 = sub_4051E0((__int64)v12, filename, fd[0], v303, (char)src, (__int64)v294);
      if ( v223 == -1 )
        goto LABEL_513;
      if ( !v223 )
        LODWORD(v295) = v295 & 0xFFFFF1FF;
    }
    if ( v12[2].m128i_i8[7] && SLOBYTE(v319.st_mode) >= 0 && geteuid() && !sub_404780(fd[0], filename, 0x180u) )
      sub_404780(fd[0], filename, v283 & ~v285);
    if ( !(v12[1].m128i_i64[1] & 0xFF0000000000FFLL) )
    {
      if ( v12[2].m128i_i8[11] )
      {
        v252 = v12[1].m128i_u32[0];
      }
      else
      {
        if ( !v12[2].m128i_i8[0] )
        {
          v224 = 1;
          if ( !v285 )
            goto LABEL_490;
          LOBYTE(v299) = 1;
          v271 = sub_4053D0();
          v224 = v299;
          if ( !(~v271 & v285) )
            goto LABEL_490;
          v272 = sub_404780(fd[0], filename, v283);
          v224 = v299;
          if ( !v272 )
            goto LABEL_490;
          v299 = sub_40DDD0(4LL, filename);
          v273 = dcgettext(0LL, "preserving permissions for %s", 5);
          v274 = __errno_location();
          error(0, *v274, v273, v299);
          goto LABEL_523;
        }
        v252 = ~(unsigned __int16)sub_4053D0() & 0x1B6;
      }
      v224 = (unsigned int)sub_409BD0(filename, (unsigned int)fd[0], v252) == 0;
      goto LABEL_490;
    }
    v234 = sub_409B40(v11, (unsigned int)fildes[0], filename, (unsigned int)fd[0], (unsigned int)v295);
    v224 = 1;
    if ( !v234 )
      goto LABEL_490;
LABEL_523:
    v224 = v12[2].m128i_i8[4] ^ 1;
    goto LABEL_490;
  }
LABEL_513:
  v224 = 0;
LABEL_490:
  LOBYTE(v299) = v224;
  v225 = close(fd[0]);
  v146 = v299;
  if ( v225 < 0 )
  {
    *(_QWORD *)fd = sub_40DDD0(4LL, filename);
    v226 = dcgettext(0LL, "failed to close %s", 5);
    v227 = __errno_location();
    error(0, *v227, v226, *(_QWORD *)fd);
    v146 = 0;
  }
LABEL_304:
  LOBYTE(fd[0]) = v146;
  if ( close(fildes[0]) < 0 )
  {
    v15 = sub_40DDD0(4LL, v11);
    v198 = dcgettext(0LL, "failed to close %s", 5);
    v199 = __errno_location();
    error(0, *v199, v198, v15);
    free(ptr);
    goto LABEL_197;
  }
  LOBYTE(fildes[0]) = fd[0];
  free(ptr);
  v43 = fildes[0];
  LOBYTE(fd[0]) = 0;
  LOBYTE(ptr) = fildes[0];
  if ( LOBYTE(fildes[0]) )
    goto LABEL_79;
LABEL_197:
  if ( v12[2].m128i_i8[5] )
    goto LABEL_240;
  if ( !n )
    sub_4093F0(stat_buf.st_ino, stat_buf.st_dev);
LABEL_136:
  if ( old )
  {
    if ( rename(old, filename) )
    {
      v133 = sub_40DDD0(4LL, filename);
      v134 = dcgettext(0LL, "cannot un-backup %s", 5);
      v135 = __errno_location();
      error(0, *v135, v134, v133);
    }
    else if ( v12[2].m128i_i8[14] )
    {
      v75 = sub_40DCF0(1LL, 4LL, filename);
      v76 = sub_40DCF0(0LL, 4LL, old);
      v77 = dcgettext(0LL, "%s -> %s (unbackup)\n", 5);
      __printf_chk(1LL, v77, v76, v75);
    }
  }
  return a7;
}

__int64 __usercall sub_409280@<rax>(unsigned __int8 a1@<dl>, const __m128i *a2@<rcx>, const char *a3@<rdi>, char *a4@<rsi>, _BYTE *a5@<r8>, _BYTE *a6@<r9>, unsigned int a7@<r15d>)
{
  int v7; // eax
  unsigned int v8; // er10
  char v10; // [rsp+Fh] [rbp-9h]

  if ( !a2 )
    __assert_fail("co != NULL", "src/copy.c", 0xB60u, "valid_options");
  if ( LODWORD(a2->m128i_i64[0]) > 3 )
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 0xB61u, "valid_options");
  v7 = HIDWORD(a2->m128i_i64[1]);
  if ( (unsigned int)(v7 - 1) > 2 )
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 0xB62u, "valid_options");
  v8 = a2[3].m128i_u32[1];
  if ( v8 > 2 )
    __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 0xB63u, "valid_options");
  if ( a2[1].m128i_i8[7] && a2[2].m128i_i8[12] )
    __assert_fail("!(co->hard_link && co->symbolic_link)", "src/copy.c", 0xB64u, "valid_options");
  if ( v7 != 2 && v8 == 2 )
    __assert_fail(
      "! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
      "src/copy.c",
      0xB67u,
      "valid_options");
  v10 = 0;
  qword_61B8F0 = (__int64)a3;
  qword_61B8E8 = (__int64)a4;
  return sub_405400(a1, 0LL, a3, a4, 0LL, a2, a7, 1u, &v10, a5, a6);
}

unsigned __int64 __fastcall sub_4093A0(_QWORD *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_4093B0(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( *a1 == *a2 )
    result = a1[1] == a2[1];
  return result;
}

void __fastcall sub_4093D0(void *ptr)
{
  free(*((void **)ptr + 2));
  free(ptr);
}

void __fastcall sub_4093F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rbx
  __int64 v4; // [rsp+0h] [rbp-28h]
  __int64 v5; // [rsp+8h] [rbp-20h]
  __int64 v6; // [rsp+10h] [rbp-18h]

  v4 = a1;
  v5 = a2;
  v6 = 0LL;
  v2 = sub_40C0F0(qword_61B8F8, &v4);
  if ( v2 )
  {
    v3 = (void *)v2;
    free(*(void **)(v2 + 16));
    free(v3);
  }
}

__int64 __fastcall sub_409440(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-28h]
  __int64 v5; // [rsp+8h] [rbp-20h]

  v4 = a1;
  v5 = a2;
  v2 = sub_40B6A0(qword_61B8F8, &v4);
  if ( v2 )
    result = *(_QWORD *)(v2 + 16);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_409480(void *src, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int64 result; // rax

  v3 = a3;
  v4 = (_QWORD *)sub_4100E0(24LL);
  v5 = sub_410310(src);
  v6 = qword_61B8F8;
  *v4 = a2;
  v4[2] = v5;
  v4[1] = v3;
  v7 = sub_40C0B0(v6, v4);
  if ( !v7 )
    sub_410330();
  v8 = (_QWORD *)v7;
  result = 0LL;
  if ( v4 != v8 )
  {
    free((void *)v4[2]);
    free(v4);
    result = v8[2];
  }
  return result;
}

__int64 sub_409500()
{
  __int64 result; // rax

  result = sub_40B910(103LL, 0LL, sub_4093A0, sub_4093B0, sub_4093D0);
  qword_61B8F8 = result;
  if ( !result )
    sub_410330();
  return result;
}

__int64 __fastcall sub_409550(int a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a2 = a1;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_WORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 16) = 1;
  return result;
}

bool __fastcall sub_409580(__int64 a1)
{
  unsigned int v1; // er13
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // er8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 *v16; // rcx
  int v17; // er9
  __int64 v18; // r10
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  bool result; // al
  bool v25; // zf
  __int64 vars0; // [rsp+0h] [rbp+0h]
  __int64 vars8; // [rsp+8h] [rbp+8h]
  int vars10; // [rsp+10h] [rbp+10h]
  unsigned int vars14; // [rsp+14h] [rbp+14h]
  int vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20[2]; // [rsp+20h] [rbp+20h]
  unsigned __int64 vars30; // [rsp+30h] [rbp+30h]

  v1 = 0;
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    memset(&vars0, 0, 0x1000uLL);
    v5 = *(_DWORD *)(v2 + 16);
    v6 = *(_DWORD *)v2;
    vars0 = v4;
    vars18 = 72;
    vars10 = v5;
    vars8 = ~v4;
    if ( ioctl(v6, 0xC020660BuLL, &vars0) < 0 )
      break;
    if ( !vars14 )
    {
      v25 = *(_QWORD *)(v2 + 8) == 0LL;
      *(_BYTE *)(v2 + 33) = 1;
      return !v25;
    }
    v7 = *(_QWORD *)(v2 + 24);
    if ( v7 > ~(unsigned __int64)vars14 )
      __assert_fail(
        "scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents",
        "src/extent-scan.c",
        0x7Eu,
        "extent_scan_read");
    v8 = *(_QWORD *)(v2 + 40);
    v9 = vars14 + v7;
    *(_QWORD *)(v2 + 24) = v9;
    v10 = v3 - v8;
    if ( ((24 * v9) & 0x8000000000000000LL) != 0LL || (v9 * (unsigned __int128)0x18uLL) >> 64 != 0 )
      sub_410330(v8, 3223348747LL, (v9 * (unsigned __int128)0x18uLL) >> 64 != 0);
    v11 = sub_410140(v8, 24 * v9);
    v12 = vars14;
    *(_QWORD *)(v2 + 40) = v11;
    v3 = v11 + v10;
    if ( v12 )
    {
      v13 = vars30;
      v14 = vars20[0];
      if ( vars20[0] > 0x7FFFFFFFFFFFFFFFLL - vars30 )
LABEL_17:
        __assert_fail(
          "fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length",
          "src/extent-scan.c",
          0x8Du,
          "extent_scan_read");
      v15 = 0;
      v16 = vars20;
      while ( 2 )
      {
        if ( v1 )
        {
          v17 = *((_DWORD *)v16 + 10);
          v18 = *(_QWORD *)(v3 + 8);
          v19 = v18 + *(_QWORD *)v3;
          if ( *(_DWORD *)(v3 + 16) == (v16[5] & 0xFFFFFFFE) && v14 == v19 )
          {
            *(_DWORD *)(v3 + 16) = v17;
            ++v15;
            *(_QWORD *)(v3 + 8) = v18 + v13;
LABEL_15:
            if ( v15 >= v12 )
              goto LABEL_21;
LABEL_16:
            v16 = &vars20[7 * v15];
            v13 = v16[2];
            v14 = *v16;
            if ( *v16 > 0x7FFFFFFFFFFFFFFFLL - v13 )
              goto LABEL_17;
            continue;
          }
          if ( v19 > v14 )
          {
LABEL_13:
            if ( v19 - v14 < v13 )
              goto LABEL_27;
            *v16 = v19;
            v16[2] = v13 + v14 - v19;
            goto LABEL_15;
          }
        }
        else
        {
          v19 = *(_QWORD *)(v2 + 8);
          if ( v19 > v14 )
            goto LABEL_13;
          v17 = *((_DWORD *)v16 + 10);
        }
        break;
      }
      v20 = v1;
      ++v15;
      ++v1;
      v3 = *(_QWORD *)(v2 + 40) + 24 * v20;
      *(_QWORD *)v3 = v14;
      *(_QWORD *)(v3 + 8) = v13;
      *(_DWORD *)(v3 + 16) = v17;
      if ( v15 >= v12 )
        goto LABEL_21;
      goto LABEL_16;
    }
LABEL_21:
    if ( *(_BYTE *)(v3 + 16) & 1 )
    {
      *(_BYTE *)(v2 + 33) = 1;
LABEL_35:
      *(_QWORD *)(v2 + 24) = v1;
      return 1;
    }
    v21 = *(_BYTE *)(v2 + 33);
    if ( v1 > 0x48 )
    {
      if ( v21 )
        goto LABEL_35;
      v22 = v1 - 1;
      v23 = *(_QWORD *)(v2 + 40);
      *(_QWORD *)(v2 + 24) = v22;
      *(_QWORD *)(v2 + 8) = *(_QWORD *)(v23 + 24 * v22 - 24) + *(_QWORD *)(v23 + 24 * v22 - 16);
      return 1;
    }
    *(_QWORD *)(v2 + 24) = v1;
    if ( !v21 )
    {
      v4 = *(_QWORD *)v3 + *(_QWORD *)(v3 + 8);
      *(_QWORD *)(v2 + 8) = v4;
      if ( v1 != 72 )
        continue;
    }
    return 1;
  }
LABEL_27:
  result = 0;
  if ( !*(_QWORD *)(v2 + 8) )
  {
    *(_BYTE *)(v2 + 32) = 1;
    result = 0;
  }
  return result;
}

int __fastcall sub_409850(char *to, __int64 a2)
{
  return linkat(*(_DWORD *)a2, *(const char **)(a2 + 8), *(_DWORD *)(a2 + 16), to, *(_DWORD *)(a2 + 20));
}

void *__fastcall sub_409870(void *src, void *dest)
{
  void *v2; // rbx
  __int64 v3; // rax
  size_t v4; // rbp

  v2 = dest;
  v3 = sub_40AB40(src) - (_QWORD)src;
  v4 = v3;
  if ( (unsigned __int64)(v3 + 9) > 0x100 )
  {
    v2 = malloc(v3 + 9);
    if ( !v2 )
      return 0LL;
  }
  strcpy((char *)mempcpy(v2, src, v4), "CuXXXXXX");
  return v2;
}

int __fastcall sub_4098E0(char *to, __int64 a2)
{
  return symlinkat(*(const char **)a2, *(_DWORD *)(a2 + 8), to);
}

__int64 __fastcall sub_409900(int a1, const char *a2, int a3, const char *a4, int a5, char a6)
{
  char *v6; // r12
  int v7; // ebp
  int v8; // eax
  unsigned int v9; // ebx
  int *v10; // rax
  char *v12; // rax
  char *v13; // rbx
  int v14; // eax
  int *v15; // r9
  int v16; // er12
  char v17; // [rsp+8h] [rbp-160h]
  int *v18; // [rsp+8h] [rbp-160h]
  int *v19; // [rsp+8h] [rbp-160h]
  char dest; // [rsp+30h] [rbp-138h]

  v6 = (char *)a4;
  v7 = a3;
  v17 = a6;
  v8 = linkat(a1, a2, a3, a4, a5);
  v9 = v8;
  if ( v17 == 1 )
  {
    if ( v8 )
    {
      v10 = __errno_location();
      if ( *v10 == 17 )
      {
        v18 = v10;
        v12 = (char *)sub_409870(v6, &dest);
        v13 = v12;
        if ( v12 )
        {
          v14 = sub_40E910(v12);
          v15 = v18;
          if ( v14 )
          {
            v16 = *v18;
          }
          else
          {
            v16 = renameat(v7, v13, v7, v6);
            if ( v16 )
              v16 = *v18;
            unlinkat(v7, v13, 0);
            v15 = v18;
          }
          if ( v13 != &dest )
          {
            v19 = v15;
            free(v13);
            v15 = v19;
          }
          v9 = 1;
          if ( v16 )
          {
            *v15 = v16;
            v9 = -1;
          }
        }
        else
        {
          v9 = -1;
        }
      }
    }
  }
  return v9;
}

__int64 __fastcall sub_409A40(const char *a1, int a2, const char *a3, char a4)
{
  char v4; // r14
  char *v5; // r12
  int v6; // eax
  unsigned int v7; // ebx
  int *v8; // r14
  char *v10; // rax
  char *v11; // rbx
  int v12; // er12
  char dest; // [rsp+10h] [rbp-138h]

  v4 = a4;
  v5 = (char *)a3;
  v6 = symlinkat(a1, a2, a3);
  v7 = v6;
  if ( v4 == 1 )
  {
    if ( v6 )
    {
      v8 = __errno_location();
      if ( *v8 == 17 )
      {
        v10 = (char *)sub_409870(v5, &dest);
        v11 = v10;
        if ( !v10 )
          return (unsigned int)-1;
        if ( (unsigned int)sub_40E910(v10) )
        {
          v12 = *v8;
        }
        else
        {
          if ( !renameat(a2, v11, a2, v5) )
          {
            if ( v11 != &dest )
              free(v11);
            return 1;
          }
          v12 = *v8;
          unlinkat(a2, v11, 0);
        }
        if ( v11 != &dest )
          free(v11);
        if ( v12 )
        {
          *v8 = v12;
          return (unsigned int)-1;
        }
        return 1;
      }
    }
  }
  return v7;
}

__int64 __fastcall sub_409B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r12
  char *v7; // rbp
  int *v8; // rax
  __int64 result; // rax
  __int64 v10; // rbp
  int *v11; // rax

  v3 = a3;
  v4 = sub_40C440();
  v5 = v4;
  if ( v4 == -2 )
  {
    v10 = sub_40E020(a1);
    v11 = __errno_location();
    error(0, *v11, "%s", v10);
    result = 4294967294LL;
  }
  else
  {
    if ( v4 == -1 )
    {
      v6 = sub_40E020(v3);
      v7 = dcgettext(0LL, "preserving permissions for %s", 5);
      v8 = __errno_location();
      error(0, *v8, v7, v6);
    }
    result = v5;
  }
  return result;
}

__int64 __fastcall sub_409BD0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r12
  char *v6; // rbp
  int *v7; // rax

  v3 = sub_40C480(a1, a2, a3);
  if ( v3 )
  {
    v5 = sub_40E020(a1);
    v6 = dcgettext(0LL, "setting permissions for %s", 5);
    v7 = __errno_location();
    error(0, *v7, v6, v5);
  }
  return v3;
}

char *__fastcall sub_409C30(char *path, unsigned __int64 a2)
{
  size_t v2; // rbx
  char *v3; // rax
  char *v4; // rbp
  ssize_t v5; // r12
  char *v7; // rdi

  v2 = a2 + 1;
  if ( a2 >= 0x401 )
    v2 = 1025LL;
  while ( 2 )
  {
    v3 = (char *)malloc(v2);
    v4 = v3;
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = readlink(path, v3, v2);
        if ( v5 < 0 && *__errno_location() != 34 )
        {
          v7 = v4;
          v4 = 0LL;
          free(v7);
          return v4;
        }
        if ( v2 > v5 )
        {
          v4[v5] = 0;
          return v4;
        }
        free(v4);
        if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
          break;
        v2 *= 2LL;
        v3 = (char *)malloc(v2);
        v4 = v3;
        if ( !v3 )
          return v4;
      }
      if ( v2 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v2 = 0x7FFFFFFFFFFFFFFFLL;
        continue;
      }
      v4 = 0LL;
      *__errno_location() = 12;
    }
    break;
  }
  return v4;
}

void __noreturn sub_409D20()
{
  sub_403C80(1);
}

__int64 __fastcall sub_409D30(const char *a1, const char **a2, char *a3, size_t a4)
{
  size_t v4; // r13
  char *v5; // rbp
  size_t v6; // rax
  const char *v7; // r14
  size_t v8; // r12
  __int64 v9; // rbx
  bool v10; // zf
  char v11; // al
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-58h]
  char v15; // [rsp+17h] [rbp-41h]
  char *v16; // [rsp+18h] [rbp-40h]

  v4 = a4;
  v5 = a3;
  v16 = a3;
  v6 = strlen(a1);
  v7 = *a2;
  v14 = -1LL;
  if ( !*a2 )
    return v14;
  v8 = v6;
  v15 = 0;
  v9 = 0LL;
  do
  {
    while ( strncmp(v7, a1, v8) )
    {
LABEL_7:
      ++v9;
      v5 += v4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( v16 )
      {
        v10 = memcmp(&v16[v4 * v14], v5, v4) == 0;
        v11 = v15;
        if ( !v10 )
          v11 = 1;
        v15 = v11;
      }
      else
      {
        v15 = 1;
      }
      goto LABEL_7;
    }
    v14 = v9++;
    v5 += v4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    v12 = v14;
  return v12;
}

void __fastcall sub_409E50(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_40E000(1LL, a1);
  v5 = sub_40DCF0(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_409ED0(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  size_t v4; // r13
  char *v5; // rbp
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rax

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( !v9 || memcmp(v3, v5, v4) )
    {
      ++v9;
      v3 = v5;
      v5 += v4;
      v11 = sub_40E020(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v12 = sub_40E020(i);
    __fprintf_chk(stderr, 1LL, ", %s", v12);
  }
LABEL_7:
  v13 = stderr->_IO_write_ptr;
  if ( v13 >= stderr->_IO_write_end )
  {
    LODWORD(v13) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = v13 + 1;
    *v13 = 10;
  }
  return (int)v13;
}

__int64 __fastcall sub_409FF0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  size_t v6; // r15
  void (*v7)(void); // r13
  char *v8; // rbp
  __int64 *v9; // rbx
  __int64 result; // rax

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (__int64 *)a3;
  result = sub_409D30(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_409E50(a1, (__int64)a2, result);
    sub_409ED0(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_40A060(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  size_t v5; // r12
  __int64 *v6; // rbx
  char *v7; // rbp

  v4 = *a2;
  if ( *a2 )
  {
    v5 = a4;
    v6 = a2 + 1;
    v7 = a3;
    do
    {
      if ( !memcmp(s1, v7, v5) )
        break;
      v4 = *v6;
      v7 += v5;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

char *__fastcall sub_40A0B0(char *path, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  char *v4; // rbp
  char *result; // rax
  __int16 v6; // r14
  char *v7; // r12
  int *v8; // rax
  int *v9; // r15
  unsigned __int64 v10; // rdx
  char *v11; // rsi

  v2 = a2;
  v3 = sub_40AB40(path);
  v4 = (char *)v3;
  result = (char *)sub_40ABA0(v3);
  if ( (unsigned __int64)result > 0xE )
  {
    v6 = *(_WORD *)v4;
    v7 = result;
    *(_WORD *)v4 = 46;
    v8 = __errno_location();
    *v8 = 0;
    v9 = v8;
    result = (char *)pathconf(path, 3);
    if ( (__int64)result >= 0 || (v10 = 255LL, !*v9) )
      v10 = (unsigned __int64)result;
    *(_WORD *)v4 = v6;
    if ( (unsigned __int64)v7 > v10 )
    {
      v11 = &path[a2];
      result = (char *)(&path[v2] - v4);
      if ( (unsigned __int64)result >= v10 )
        v11 = &v4[v10 - 1];
      else
        v10 = (unsigned __int64)(result + 1);
      *v11 = 126;
      v4[v10] = 0;
    }
  }
  return result;
}

void __fastcall sub_40A180(char *a1)
{
  char *v1; // rbx

  v1 = a1;
  if ( (a1 || (v1 = getenv("SIMPLE_BACKUP_SUFFIX")) != 0LL) && *v1 && (char *)sub_40AB40(v1) == v1 )
    src = v1;
  else
    src = "~";
}

char *__fastcall sub_40A1E0(void *a1, int a2, char a3)
{
  const char *v3; // rax
  const char *v4; // r14
  size_t v5; // rax
  signed __int64 v6; // r14
  const char *v7; // rdi
  size_t v8; // rax
  bool v9; // cf
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  char *v13; // r15
  DIR *v14; // r12
  char *v15; // rbx
  __int64 v16; // r13
  int v17; // ebp
  struct dirent *v18; // rax
  char *v19; // rbx
  char *v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // r8
  int i; // eax
  int v24; // eax
  __int64 v25; // rdx
  size_t v26; // rax
  __int64 v27; // rax
  char *v28; // rax
  char *v29; // r8
  __int64 v30; // rax
  char *v31; // rax
  char v32; // dl
  char *v33; // rax
  int v34; // eax
  char *v35; // rcx
  int v36; // edx
  int *v37; // rax
  int v38; // ebp
  int *v39; // rbx
  void *v40; // rdi
  __int16 v42; // ax
  void *v43; // rdi
  _BOOL4 v44; // ebp
  __int64 v45; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+10h] [rbp-88h]
  unsigned __int8 v47; // [rsp+18h] [rbp-80h]
  unsigned __int64 v48; // [rsp+18h] [rbp-80h]
  unsigned __int64 v49; // [rsp+18h] [rbp-80h]
  __int16 v50; // [rsp+18h] [rbp-80h]
  size_t v51; // [rsp+20h] [rbp-78h]
  unsigned __int64 size; // [rsp+28h] [rbp-70h]
  int v53; // [rsp+40h] [rbp-58h]
  char v54; // [rsp+47h] [rbp-51h]
  unsigned __int64 v55; // [rsp+48h] [rbp-50h]
  unsigned __int64 v56; // [rsp+50h] [rbp-48h]
  __int64 v57; // [rsp+50h] [rbp-48h]
  char *v58; // [rsp+50h] [rbp-48h]
  size_t v59; // [rsp+58h] [rbp-40h]

  src = a1;
  v53 = a2;
  v54 = a3;
  v3 = (const char *)sub_40AB40(a1);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = ::src;
  v45 = v6 + v5;
  if ( !::src )
  {
    sub_40A180(::src);
    v7 = ::src;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v45 + 1;
  v59 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v55 = v10 + v12;
  v13 = (char *)malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v45 + 1);
      if ( v53 == 1 )
      {
        memcpy(&v13[v45], ::src, v59);
        goto LABEL_33;
      }
      v15 = &v13[v6];
      v16 = sub_40ABA0(&v13[v6]);
      if ( v14 )
        break;
      v42 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v50 = v42;
      v14 = (DIR *)sub_40A9C0(v13);
      if ( v14 )
      {
        *(_WORD *)v15 = v50;
        strcpy(&v15[v16], ".~1~");
LABEL_10:
        v17 = 2;
        v51 = 1LL;
        size = v55;
        while ( 1 )
        {
          v18 = readdir(v14);
          if ( !v18 )
            goto LABEL_30;
          while ( 1 )
          {
            v19 = v18->d_name;
            if ( strlen(v18->d_name) < v16 + 4 )
              break;
            if ( memcmp(&v13[v6], v19, v16 + 2) )
              break;
            v20 = &v19[v16 + 2];
            if ( (unsigned __int8)(*v20 - 49) > 8u )
              break;
            v21 = 1LL;
            v22 = *v20 == 57;
            for ( i = v20[1]; (unsigned int)(i - 48) <= 9; i = v20[v21] )
            {
              ++v21;
              v22 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( v20[v21 + 1] )
              break;
            if ( v51 >= v21 )
            {
              v56 = v21;
              v47 = v22;
              if ( v51 != v21 )
                break;
              v24 = memcmp(&v13[v45 + 2], v20, v51);
              v22 = v47;
              v21 = v56;
              if ( v24 > 0 )
                break;
            }
            v25 = v22;
            v17 = v22;
            v26 = v22 + v21;
            v51 = v26;
            v27 = v45 + v26 + 4;
            if ( v27 <= size )
            {
              v29 = v13;
            }
            else
            {
              if ( v27 & 0x4000000000000000LL || v27 < 0 )
                size = v27;
              else
                size = 2 * v27;
              v57 = v22;
              v48 = v21;
              v28 = (char *)realloc(v13, size);
              v21 = v48;
              v25 = v57;
              v29 = v28;
              if ( !v28 )
                goto LABEL_49;
            }
            v58 = v29;
            v49 = v21;
            v30 = (__int64)&v29[v45];
            *(_WORD *)v30 = 32302;
            *(_BYTE *)(v30 + 2) = 48;
            v31 = (char *)memcpy(&v29[v45 + 2 + v25], v20, v21 + 2);
            v32 = v31[v49 - 1];
            v33 = &v31[v49 - 1];
            if ( v32 == 57 )
            {
              do
              {
                *v33-- = 48;
                v32 = *v33;
              }
              while ( *v33 == 57 );
            }
            v13 = v58;
            *v33 = v32 + 1;
            v18 = readdir(v14);
            if ( !v18 )
              goto LABEL_30;
          }
        }
      }
      v44 = *__errno_location() == 12;
      *(_WORD *)v15 = v50;
      v17 = v44 + 2;
      strcpy(&v15[v16], ".~1~");
LABEL_30:
      switch ( v17 )
      {
        case 2:
          if ( v53 == 2 )
          {
            memcpy(&v13[v45], ::src, v59);
            v53 = 1;
          }
LABEL_46:
          sub_40A0B0(v13, v45);
          break;
        case 3:
LABEL_49:
          v43 = v13;
          v13 = 0LL;
          free(v43);
          *__errno_location() = 12;
          return v13;
        case 1:
          goto LABEL_46;
      }
LABEL_33:
      if ( !v54 )
        goto LABEL_57;
      if ( !v14 || (v34 = dirfd(v14), v35 = &v13[v6], v36 = v34, v34 < 0) )
      {
        v35 = v13;
        v36 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40E040(-100, (char *)src, v36, v35) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v37 = __errno_location();
      v38 = *v37;
      if ( *v37 != 17 )
      {
        v39 = v37;
        if ( v14 )
          closedir(v14);
        v40 = v13;
        v13 = 0LL;
        free(v40);
        *v39 = v38;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

char *__fastcall sub_40A6B0(void *a1, int a2)
{
  return sub_40A1E0(a1, a2, 1);
}

__int64 __fastcall sub_40A6C0(__int64 a1, const char *a2)
{
  return (unsigned int)dword_415B00[sub_409FF0(
                                      a1,
                                      a2,
                                      (const char **)off_415B20,
                                      (char *)dword_415B00,
                                      4uLL,
                                      (void (*)(void))off_61B3C8)];
}

char *__fastcall sub_40A6F0(void *a1, __int64 a2)
{
  char *result; // rax
  __int64 v3; // rdx

  result = sub_40A1E0(a1, a2, 0);
  if ( !result )
    sub_410330(a1, a2, v3);
  return result;
}

__int64 __fastcall sub_40A730(void *a1, const char *a2)
{
  char *v2; // rax

  if ( !a2 || !*a2 )
  {
    v2 = getenv("VERSION_CONTROL");
    if ( !v2 || !*v2 )
      return 2LL;
    a2 = v2;
    a1 = &unk_415AB7;
  }
  return sub_40A6C0((__int64)a1, a2);
}

unsigned __int64 __fastcall sub_40A780(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

  v3 = a3;
  if ( a1 )
  {
    if ( a2 )
    {
      v6 = a2;
      v7 = a1;
      while ( 1 )
      {
        v8 = v7 % v6;
        if ( !(v7 % v6) )
          break;
        v7 = v6;
        v6 = v8;
      }
      v9 = a1 / v6;
      v4 = a1 / v6 * a2;
      if ( v9 * a2 <= v3 && v4 / a2 == v9 )
        return v4;
    }
  }
  else
  {
    a1 = 0x2000LL;
    if ( a2 )
      a1 = a2;
  }
  if ( a1 <= v3 )
    v3 = a1;
  return v3;
}

__int64 sub_40A800()
{
  FILE *v0; // rbx
  int v2; // eax
  FILE *v3; // rdi
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // r12
  int *v7; // rax
  int *v8; // rbp
  __int64 v9; // rax
  int v10; // eax

  v0 = stdin;
  if ( !sub_410560(stdin) )
  {
    if ( !(unsigned int)sub_4114A0(v0) )
      return sub_40A920();
    goto LABEL_6;
  }
  v10 = sub_410590(v0, 0LL, 1LL);
  v3 = stdin;
  if ( !v10 )
  {
    v2 = sub_410520(stdin);
    v3 = stdin;
    if ( v2 )
    {
      sub_4114A0(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_4114A0(v3) )
  {
LABEL_6:
    v4 = dcgettext(0LL, "error closing file", 5);
    v5 = qword_61B908;
    v6 = v4;
    v7 = __errno_location();
    v8 = v7;
    if ( v5 )
    {
      v9 = sub_40DE70(v5);
      error(0, *v8, "%s: %s", v9, v6);
    }
    else
    {
      error(0, *v7, "%s", v6);
    }
    sub_40A920();
    _exit(status);
  }
  return sub_40A920();
}

__int64 sub_40A920()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_4114A0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_61B910 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_61B918 )
      {
        v5 = sub_40DE70(qword_61B918);
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
  result = sub_4114A0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

DIR *__fastcall sub_40A9C0(const char *a1)
{
  DIR *v1; // rax
  DIR *v2; // rbx
  unsigned int v3; // eax
  int v5; // er12
  int *v6; // rax
  int *v7; // rbp
  int v8; // er14
  DIR *v9; // r13
  DIR *v10; // rax

  v1 = opendir(a1);
  v2 = v1;
  if ( !v1 )
    return v2;
  v3 = dirfd(v1);
  if ( v3 > 2 )
    return v2;
  v5 = sub_4103E0(v3);
  v6 = __errno_location();
  v7 = v6;
  if ( v5 >= 0 )
  {
    v10 = fdopendir(v5);
    v8 = *v7;
    v9 = v10;
    if ( !v10 )
      close(v5);
  }
  else
  {
    v8 = *v6;
    v9 = 0LL;
  }
  closedir(v2);
  *v7 = v8;
  return v9;
}

__int64 __fastcall sub_40AA60(void *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = sub_40AAE0(a1);
  if ( !result )
    sub_410330(a1, a2, v3);
  return result;
}

__int64 __fastcall sub_40AA80(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *a1 == 47;
  v2 = sub_40AB40(a1);
  if ( v2 - (__int64)a1 <= v1 )
    return v2 - (_QWORD)a1;
  v3 = v2 - (_QWORD)a1 - 1;
  if ( *(_BYTE *)(v2 - 1) != 47 )
    return v2 - (_QWORD)a1;
  while ( v1 != v3 && a1[v3 - 1] == 47 )
    --v3;
  return v3;
}

_BYTE *__fastcall sub_40AAE0(void *src)
{
  __int64 v1; // rax
  size_t v2; // rbx
  _BYTE *v3; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // rax

  v1 = sub_40AA80(src);
  v2 = v1;
  v3 = malloc(v1 + (v1 == 0) + 1);
  v4 = v3;
  if ( v3 )
  {
    v5 = memcpy(v3, src, v2);
    v4 = v5;
    if ( !v2 )
    {
      *v5 = 46;
      v2 = 1LL;
    }
    v5[v2] = 0;
  }
  return v4;
}

_BYTE *__fastcall sub_40AB40(_BYTE *a1)
{
  char v1; // dl
  _BYTE *result; // rax
  _BYTE *v3; // rcx
  char v4; // si

  v1 = *a1;
  for ( result = a1; *result == 47; v1 = *result )
    ++result;
  if ( v1 )
  {
    v3 = result;
    v4 = 0;
    do
    {
      while ( v1 == 47 )
      {
        v1 = *++v3;
        v4 = 1;
        if ( !*v3 )
          return result;
      }
      if ( v4 )
      {
        result = v3;
        v4 = 0;
      }
      v1 = *++v3;
    }
    while ( *v3 );
  }
  return result;
}

size_t __fastcall sub_40ABA0(const char *a1)
{
  size_t result; // rax
  __int64 v2; // rdx

  result = strlen(a1);
  if ( result > 1 )
  {
    do
    {
      v2 = result - 1;
      if ( a1[result - 1] != 47 )
        break;
      --result;
    }
    while ( v2 != 1 );
  }
  return result;
}

bool __fastcall sub_40ABD0(char *a1)
{
  const char *v1; // rbx
  const char *v2; // rbx
  bool v3; // zf

  v1 = sub_40AB40(a1);
  if ( !*v1 )
    v1 = a1;
  v2 = &v1[sub_40ABA0(v1)];
  v3 = *v2 == 0;
  *v2 = 0;
  return !v3;
}

int j__posix_fadvise(int fd, off_t offset, off_t len, int advise)
{
  return posix_fadvise(fd, offset, len, advise);
}

__int64 __fastcall sub_40AC50(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp-28h]

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = v6;
  v4 = open(a1, a2, v3);
  return sub_40EAF0(v4);
}

void __fastcall sub_40ACA0(__int64 a1, void *a2, _QWORD *a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( a1 )
  {
    v3 = a3;
    v4 = (_QWORD *)sub_4100E0(24LL);
    *v4 = sub_410310(a2);
    v4[1] = v3[1];
    v4[2] = *v3;
    v5 = sub_40C0B0(a1, v4);
    if ( !v5 )
      sub_410330(a1, v4, v6);
    if ( v4 != (_QWORD *)v5 )
      sub_40C380(v4);
  }
}

bool __fastcall sub_40AD30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-28h]
  __int64 v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]

  if ( !a1 )
    return 0;
  v3 = a3[1];
  v5 = a2;
  v6 = v3;
  v7 = *a3;
  return sub_40B6A0(a1, &v5) != 0;
}

__int64 __fastcall sub_40AD70(__int16 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  __int64 result; // rax

  v2 = 45;
  v3 = a1 & 0xF000;
  if ( v3 != 0x8000 )
  {
    v2 = 100;
    if ( v3 != 0x4000 )
    {
      v2 = 98;
      if ( v3 != 24576 )
      {
        v2 = 99;
        if ( v3 != 0x2000 )
        {
          v2 = 108;
          if ( v3 != 40960 )
          {
            v2 = 112;
            if ( v3 != 4096 )
            {
              v2 = 115;
              if ( v3 != 49152 )
                v2 = 63;
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a2 = v2;
  *(_BYTE *)(a2 + 1) = (a1 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (a1 & 0x80u) < 1 ? 45 : 119;
  v4 = -((a1 & 0x40u) < 1);
  if ( a1 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (a1 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (a1 & 0x10u) < 1 ? 45 : 119;
  v6 = -((a1 & 8u) < 1);
  if ( a1 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (a1 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (a1 & 2u) < 1 ? 45 : 119;
  v8 = -((a1 & 1u) < 1);
  if ( a1 & 0x200 )
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_40AF00(void *a1, void *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = sub_40AF20(a1, a2);
  if ( !result )
    sub_410330(a1, a2, v3);
  return result;
}

void *__fastcall sub_40AF20(void *src, void *a2, _QWORD *a3)
{
  const char *v3; // r12
  const char *v4; // rax
  const char *v5; // r14
  size_t v6; // rax
  _BOOL8 v7; // rbx
  size_t v8; // rbp
  size_t v9; // rax
  size_t v10; // r14
  void *v11; // rax
  void *v12; // r15
  _BYTE *v13; // rax
  char *v14; // rdi
  _QWORD *v16; // [rsp+0h] [rbp-48h]
  char v17; // [rsp+Fh] [rbp-39h]

  v3 = (const char *)a2;
  v16 = a3;
  v4 = sub_40AB40(src);
  v5 = v4;
  v6 = sub_40ABA0(v4);
  v7 = v6;
  v8 = v6 + v5 - (_BYTE *)src;
  if ( v6 )
    v7 = v5[v6 - 1] != 47;
  v17 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 47 )
  {
    do
      ++v3;
    while ( *v3 == 47 );
  }
  v9 = strlen(v3);
  v10 = v9;
  v11 = malloc(v9 + v7 + v8 + 1);
  v12 = v11;
  if ( v11 )
  {
    v13 = mempcpy(v11, src, v8);
    *v13 = 47;
    v14 = &v13[v7];
    if ( v16 )
      *v16 = &v14[-(v17 == 47)];
    *(_BYTE *)mempcpy(v14, v3, v10) = 0;
  }
  return v12;
}

__int64 __fastcall sub_40B000(int fd, void *buf, size_t n)
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
    v6 = sub_40E290(fd, v3, v4);
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

unsigned __int64 __fastcall sub_40B080(unsigned __int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx

  v1 = 10LL;
  if ( a1 >= 0xA )
    v1 = a1;
  v2 = v1 | 1;
  if ( v2 != -1LL )
  {
    while ( 1 )
    {
      v3 = v2 % 3;
      if ( v2 <= 9 )
        goto LABEL_9;
      if ( v2 % 3 )
        break;
LABEL_10:
      v2 += 2LL;
      if ( v2 == -1LL )
        return v2;
    }
    v4 = 16LL;
    v5 = 9LL;
    v6 = 3LL;
    while ( 1 )
    {
      v6 += 2LL;
      v5 += v4;
      v3 = v2 % v6;
      if ( v5 >= v2 )
        break;
      v4 += 8LL;
      if ( !(v2 % v6) )
        goto LABEL_10;
    }
LABEL_9:
    if ( v3 )
      return v2;
    goto LABEL_10;
  }
  return v2;
}

unsigned __int64 __fastcall sub_40B120(__int64 a1, unsigned __int64 a2)
{
  return __ROR8__(a1, 3) % a2;
}

bool __fastcall sub_40B130(__int64 a1, __int64 a2)
{
  return a1 == a2;
}

__int64 __fastcall sub_40B140(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40B140(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40B170(__int64 a1, __int64 a2, __m128i **a3, char a4)
{
  __m128i **v4; // r14
  char v5; // r13
  __int64 v6; // rbp
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 *v10; // rax
  const __m128i *v12; // rax

  v4 = a3;
  v5 = a4;
  v6 = a2;
  v7 = (__m128i *)sub_40B140(a1, a2);
  *v4 = v7;
  v8 = v7->m128i_i64[0];
  if ( v7->m128i_i64[0] )
  {
    v9 = v7;
    if ( v8 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(v6) )
      {
        v10 = (__int64 *)v9->m128i_i64[1];
        if ( v10 )
        {
          v8 = *v10;
          if ( v6 != *v10 )
          {
            while ( !(*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(v6) )
            {
              v9 = (__m128i *)v9->m128i_i64[1];
              v10 = (__int64 *)v9->m128i_i64[1];
              if ( !v10 )
                return 0LL;
              v8 = *v10;
              if ( *v10 == v6 )
                goto LABEL_11;
            }
            v10 = (__int64 *)v9->m128i_i64[1];
            v8 = *v10;
          }
LABEL_11:
          if ( v5 )
          {
            v9->m128i_i64[1] = v10[1];
            *v10 = 0LL;
            v10[1] = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v10;
          }
          return v8;
        }
        return 0LL;
      }
      v8 = v9->m128i_i64[0];
    }
    if ( v5 )
    {
      v12 = (const __m128i *)v9->m128i_i64[1];
      if ( v12 )
      {
        *v9 = _mm_loadu_si128(v12);
        v12->m128i_i64[0] = 0LL;
        v12->m128i_i64[1] = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v12;
        return v8;
      }
      v9->m128i_i64[0] = 0LL;
    }
    return v8;
  }
  return 0LL;
}

__int64 __fastcall sub_40B290(float **a1)
{
  float *v1; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == (float *)&unk_415C00 )
    return 1LL;
  v2 = v1[2];
  if ( v2 <= 0.1
    || v2 >= 0.89999998
    || v1[3] <= 1.1
    || *v1 < 0.0
    || (v3 = *v1 + 0.1, v4 = v1[1], v4 <= v3)
    || v4 > 1.0
    || (result = 1LL, v2 <= v3) )
  {
    *a1 = (float *)&unk_415C00;
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_40B310(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  __int64 *v4; // r12
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx

  v3 = a3;
  v4 = *(__int64 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    return 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = (__int64 *)v4[1];
        if ( v6 )
        {
          do
          {
            while ( 1 )
            {
              v7 = *v6;
              v8 = (_QWORD *)sub_40B140(a1, *v6);
              v9 = (__int64 *)v6[1];
              if ( !*v8 )
                break;
              v6[1] = v8[1];
              v8[1] = v6;
              v6 = v9;
              if ( !v9 )
                goto LABEL_10;
            }
            *v8 = v7;
            ++*(_QWORD *)(a1 + 24);
            *v6 = 0LL;
            v6[1] = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v6;
            v6 = v9;
          }
          while ( v9 );
LABEL_10:
          v5 = *v4;
        }
        v4[1] = 0LL;
        if ( !v3 )
          break;
      }
      v4 += 2;
      if ( *(_QWORD *)(a2 + 8) <= (unsigned __int64)v4 )
        return 1LL;
    }
    v10 = (_QWORD *)sub_40B140(a1, v5);
    v11 = v10;
    if ( !*v10 )
    {
      *v10 = v5;
      ++*(_QWORD *)(a1 + 24);
      goto LABEL_16;
    }
    v12 = *(_QWORD **)(a1 + 72);
    if ( !v12 )
      break;
    *(_QWORD *)(a1 + 72) = v12[1];
LABEL_15:
    v13 = v11[1];
    *v12 = v5;
    v12[1] = v13;
    v11[1] = v12;
LABEL_16:
    *v4 = 0LL;
    v4 += 2;
    --*(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 8) <= (unsigned __int64)v4 )
      return 1LL;
  }
  v12 = malloc(0x10uLL);
  if ( v12 )
    goto LABEL_15;
  return 0LL;
}

__int64 __fastcall sub_40B6A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = (_QWORD *)sub_40B140(a1, a2);
  v4 = *v3;
  if ( !*v3 )
    return 0LL;
  v5 = v3;
  while ( v4 != v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(v2) )
      return *v5;
    v5 = (_QWORD *)v5[1];
    if ( !v5 )
      return 0LL;
    v4 = *v5;
  }
  return v2;
}

__int64 __fastcall sub_40B750(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)sub_40B140(a1, a2);
  v3 = v2;
  while ( 1 )
  {
    v4 = *v3;
    v3 = (_QWORD *)v3[1];
    if ( v4 == a2 )
      break;
    if ( !v3 )
      goto LABEL_7;
  }
  if ( v3 )
    return *v3;
LABEL_7:
  while ( 1 )
  {
    v2 += 2;
    if ( *(_QWORD *)(a1 + 8) <= (unsigned __int64)v2 )
      break;
    result = *v2;
    if ( *v2 )
      return result;
  }
  return 0LL;
}

__int64 __fastcall sub_40B830(__int64 a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 *v3; // r14
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v9; // rbx

  v3 = *(__int64 **)a1;
  if ( *(_QWORD *)(a1 + 8) <= *(_QWORD *)a1 )
    return 0LL;
  v4 = a3;
  v5 = a1;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *v3;
    if ( *v3 )
      break;
LABEL_4:
    v3 += 2;
    if ( *(_QWORD *)(v5 + 8) <= (unsigned __int64)v3 )
      return v6;
  }
  v9 = v3;
  while ( a2(v7, v4) )
  {
    v9 = (__int64 *)v9[1];
    ++v6;
    if ( !v9 )
      goto LABEL_4;
    v7 = *v9;
  }
  return v6;
}

_QWORD *__fastcall sub_40B910(unsigned __int64 a1, __int64 a2, unsigned __int64 (__fastcall *a3)(__int64 a1, unsigned __int64 a2), bool (__fastcall *a4)(__int64 a1, __int64 a2), __int64 a5)
{
  __int64 v5; // r14
  bool (__fastcall *v6)(__int64, __int64); // r13
  unsigned __int64 (__fastcall *v7)(__int64, unsigned __int64); // r12
  unsigned __int64 v8; // rbp
  char *v9; // rax
  _QWORD *v10; // rbx
  float **v11; // rdi
  unsigned __int64 v12; // rbp
  char *v13; // rax
  void *v14; // rdi
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4

  v5 = a5;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  if ( !a3 )
    v7 = sub_40B120;
  if ( !a4 )
    v6 = sub_40B130;
  v9 = (char *)malloc(0x50uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = (float **)(v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40B290(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40B080(v8);
        if ( !_bittest64((const __int64 *)&v12, 0x3Cu) && v12 >> 61 == 0 )
        {
          v10[2] = v12;
          if ( v12 )
          {
            v13 = (char *)calloc(v12, 0x10uLL);
            *v10 = v13;
            if ( v13 )
            {
              v10[3] = 0LL;
              v10[4] = 0LL;
              v10[1] = &v13[16 * v12];
              v10[6] = v7;
              v10[7] = v6;
              v10[8] = v5;
              v10[9] = 0LL;
              return v10;
            }
          }
        }
LABEL_14:
        v14 = v10;
        v10 = 0LL;
        free(v14);
        return v10;
      }
      v16 = *(float *)(a2 + 8);
      if ( (v8 & 0x8000000000000000LL) != 0LL )
        goto LABEL_23;
    }
    else
    {
      *((_QWORD *)v9 + 5) = &unk_415C00;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40B290(v11) )
        goto LABEL_14;
      if ( (v8 & 0x8000000000000000LL) != 0LL )
      {
LABEL_23:
        v17 = (float)(int)(v8 & 1 | (v8 >> 1)) + (float)(int)(v8 & 1 | (v8 >> 1));
        goto LABEL_19;
      }
    }
    v17 = (float)(int)v8;
LABEL_19:
    v18 = v17 / v16;
    if ( v18 >= 1.8446744e19 )
      goto LABEL_14;
    if ( v18 < 9.223372e18 )
      v8 = (unsigned int)(int)v18;
    else
      v8 = (unsigned int)(int)(float)(v18 - 9.223372e18) ^ 0x8000000000000000LL;
    goto LABEL_9;
  }
  return v10;
}

__int64 __fastcall sub_40BC30(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  size_t v6; // rbx
  bool v7; // sf
  _BOOL8 v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx
  void *ptr; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  size_t v18; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+40h] [rbp-28h]
  __int64 v25; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( (a2 & 0x8000000000000000LL) != 0LL )
      v3 = (float)(int)(a2 & 1 | (a2 >> 1)) + (float)(int)(a2 & 1 | (a2 >> 1));
    else
      v3 = (float)(int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(int)v4;
    else
      a2 = (unsigned int)(int)(float)(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_40B080(a2);
  v6 = v5;
  v7 = ((8 * v5) & 0x8000000000000000LL) != 0LL;
  v8 = v5 >> 61 != 0;
  if ( v7 )
    v8 = 1LL;
  if ( !v6 || v8 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v6 )
    return 1LL;
  v9 = (char *)calloc(v6, 0x10uLL);
  ptr = v9;
  if ( !v9 )
    return 0;
  v18 = v6;
  v10 = (__int64)&v9[16 * v6];
  v11 = *(_QWORD *)(a1 + 48);
  v19 = 0LL;
  v17 = v10;
  v22 = v11;
  v12 = *(_QWORD *)(a1 + 56);
  v20 = 0LL;
  v23 = v12;
  v13 = *(_QWORD *)(a1 + 64);
  v21 = v2;
  v24 = v13;
  v25 = *(_QWORD *)(a1 + 72);
  v14 = sub_40B310((__int64)&ptr, a1, 0);
  if ( (_BYTE)v14 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = ptr;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 72) = v25;
    return v14;
  }
  *(_QWORD *)(a1 + 72) = v25;
  if ( !(unsigned __int8)sub_40B310(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40B310(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_40BC30(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  size_t v6; // rbx
  bool v7; // sf
  _BOOL8 v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx
  void *ptr; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  size_t v18; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+40h] [rbp-28h]
  __int64 v25; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( (a2 & 0x8000000000000000LL) != 0LL )
      v3 = (float)(int)(a2 & 1 | (a2 >> 1)) + (float)(int)(a2 & 1 | (a2 >> 1));
    else
      v3 = (float)(int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(int)v4;
    else
      a2 = (unsigned int)(int)(float)(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_40B080(a2);
  v6 = v5;
  v7 = ((8 * v5) & 0x8000000000000000LL) != 0LL;
  v8 = v5 >> 61 != 0;
  if ( v7 )
    v8 = 1LL;
  if ( !v6 || v8 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v6 )
    return 1LL;
  v9 = (char *)calloc(v6, 0x10uLL);
  ptr = v9;
  if ( !v9 )
    return 0;
  v18 = v6;
  v10 = (__int64)&v9[16 * v6];
  v11 = *(_QWORD *)(a1 + 48);
  v19 = 0LL;
  v17 = v10;
  v22 = v11;
  v12 = *(_QWORD *)(a1 + 56);
  v20 = 0LL;
  v23 = v12;
  v13 = *(_QWORD *)(a1 + 64);
  v21 = v2;
  v24 = v13;
  v25 = *(_QWORD *)(a1 + 72);
  v14 = sub_40B310((__int64)&ptr, a1, 0);
  if ( (_BYTE)v14 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = ptr;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 72) = v25;
    return v14;
  }
  *(_QWORD *)(a1 + 72) = v25;
  if ( !(unsigned __int8)sub_40B310(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40B310(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v14;
}

__int64 __fastcall sub_40BE30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  float v9; // xmm1_4
  unsigned __int64 v10; // rax
  __int64 *v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  float v15; // xmm1_4
  __int64 v16; // rdx
  __int64 v17; // rax
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 *v26; // [rsp+8h] [rbp-20h]

  if ( !a2 )
    goto LABEL_35;
  v3 = a3;
  v4 = a2;
  v5 = sub_40B170(a1, a2, (__m128i **)&v26, 0);
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v7 & 0x8000000000000000LL) != 0LL )
    {
      v14 = v7 & 1 | (v7 >> 1);
      v10 = *(_QWORD *)(a1 + 16);
      v15 = (float)v14;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v15 + v15;
      if ( (v10 & 0x8000000000000000LL) == 0LL )
      {
LABEL_8:
        if ( v9 <= (float)((float)(int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_40B290((float **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(int)v24 + (float)(int)v24;
        }
        else
        {
          v19 = (float)(int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(int)v23 + (float)(int)v23;
        }
        else
        {
          v21 = (float)(int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18 ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_40BC30(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B170(a1, v4, (__m128i **)&v26, 0) )
        {
LABEL_9:
          v11 = v26;
          if ( !*v26 )
          {
            *v26 = v4;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            ++*(_QWORD *)(a1 + 24);
            return result;
          }
          v12 = *(_QWORD **)(a1 + 72);
          if ( v12 )
          {
            *(_QWORD *)(a1 + 72) = v12[1];
LABEL_12:
            v13 = v11[1];
            *v12 = v4;
            v12[1] = v13;
            v11[1] = (__int64)v12;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            return result;
          }
          v12 = malloc(0x10uLL);
          if ( v12 )
            goto LABEL_12;
          return 0xFFFFFFFFLL;
        }
LABEL_35:
        abort();
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      v9 = (float)(int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( (v10 & 0x8000000000000000LL) == 0LL )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(int)(v10 & 1 | (v10 >> 1)) + (float)(int)(v10 & 1 | (v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( v3 )
    *v3 = v5;
  return result;
}

__int64 __fastcall sub_40BE30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  float v9; // xmm1_4
  unsigned __int64 v10; // rax
  __int64 *v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  float v15; // xmm1_4
  __int64 v16; // rdx
  __int64 v17; // rax
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 *v26; // [rsp+8h] [rbp-20h]

  if ( !a2 )
    goto LABEL_35;
  v3 = a3;
  v4 = a2;
  v5 = sub_40B170(a1, a2, (__m128i **)&v26, 0);
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v7 & 0x8000000000000000LL) != 0LL )
    {
      v14 = v7 & 1 | (v7 >> 1);
      v10 = *(_QWORD *)(a1 + 16);
      v15 = (float)v14;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v15 + v15;
      if ( (v10 & 0x8000000000000000LL) == 0LL )
      {
LABEL_8:
        if ( v9 <= (float)((float)(int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_40B290((float **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(int)v24 + (float)(int)v24;
        }
        else
        {
          v19 = (float)(int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(int)v23 + (float)(int)v23;
        }
        else
        {
          v21 = (float)(int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18 ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_40BC30(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B170(a1, v4, (__m128i **)&v26, 0) )
        {
LABEL_9:
          v11 = v26;
          if ( !*v26 )
          {
            *v26 = v4;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            ++*(_QWORD *)(a1 + 24);
            return result;
          }
          v12 = *(_QWORD **)(a1 + 72);
          if ( v12 )
          {
            *(_QWORD *)(a1 + 72) = v12[1];
LABEL_12:
            v13 = v11[1];
            *v12 = v4;
            v12[1] = v13;
            v11[1] = (__int64)v12;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            return result;
          }
          v12 = malloc(0x10uLL);
          if ( v12 )
            goto LABEL_12;
          return 0xFFFFFFFFLL;
        }
LABEL_35:
        abort();
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      v9 = (float)(int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( (v10 & 0x8000000000000000LL) == 0LL )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(int)(v10 & 1 | (v10 >> 1)) + (float)(int)(v10 & 1 | (v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( v3 )
    *v3 = v5;
  return result;
}

__int64 __fastcall sub_40C0B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h]

  v2 = a2;
  v3 = sub_40BE30(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    v2 = v5;
  return v2;
}

__int64 __fastcall sub_40C0F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // rax
  __int64 v6; // rax
  float *v7; // rdx
  float v8; // xmm0_4
  unsigned __int64 v9; // rax
  float v10; // xmm1_4
  __int64 v11; // rax
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rdi
  _QWORD *v19; // r12
  int v20; // edx
  float v21; // xmm0_4
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // [rsp+8h] [rbp-20h]

  v2 = a1;
  v3 = sub_40B170(a1, a2, (__m128i **)&v24, 1);
  if ( !v3 )
    return v3;
  v4 = v24;
  --*(_QWORD *)(a1 + 32);
  if ( *v4 )
    return v3;
  v6 = *(_QWORD *)(a1 + 24) - 1LL;
  *(_QWORD *)(a1 + 24) = v6;
  if ( v6 < 0 )
  {
    v20 = v6 & 1 | ((unsigned __int64)v6 >> 1);
    v9 = *(_QWORD *)(a1 + 16);
    v21 = (float)v20;
    v7 = *(float **)(a1 + 40);
    v8 = v21 + v21;
    if ( (v9 & 0x8000000000000000LL) == 0LL )
      goto LABEL_6;
LABEL_22:
    v10 = (float)(int)(v9 & 1 | (v9 >> 1)) + (float)(int)(v9 & 1 | (v9 >> 1));
    goto LABEL_7;
  }
  v7 = *(float **)(a1 + 40);
  v8 = (float)(int)v6;
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 0x8000000000000000LL) != 0LL )
    goto LABEL_22;
LABEL_6:
  v10 = (float)(int)v9;
LABEL_7:
  if ( (float)(v10 * *v7) > v8 )
  {
    sub_40B290((float **)(a1 + 40));
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 40);
    if ( v11 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
      v13 = (float)(int)v23 + (float)(int)v23;
    }
    else
    {
      v13 = (float)(int)v11;
    }
    v14 = *(_QWORD *)(a1 + 24);
    if ( v14 < 0 )
    {
      v22 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
      v15 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    if ( (float)(*(float *)v12 * v13) > v15 )
    {
      v16 = v13 * *(float *)(v12 + 4);
      if ( !*(_BYTE *)(v12 + 16) )
        v16 = v16 * *(float *)(v12 + 8);
      if ( v16 >= 9.223372e18 )
        v17 = (unsigned int)(int)(float)(v16 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v17 = (unsigned int)(int)v16;
      if ( !(unsigned __int8)sub_40BC30(a1, v17) )
      {
        v18 = *(_QWORD **)(a1 + 72);
        if ( v18 )
        {
          do
          {
            v19 = (_QWORD *)v18[1];
            free(v18);
            v18 = v19;
          }
          while ( v19 );
        }
        *(_QWORD *)(v2 + 72) = 0LL;
      }
    }
  }
  return v3;
}

unsigned __int64 __fastcall sub_40C2D0(_QWORD *a1, unsigned __int64 a2)
{
  return (a1[1] ^ (unsigned __int64)sub_4115A0(*a1)) % a2;
}

unsigned __int64 __fastcall sub_40C300(__int64 a1, unsigned __int64 a2)
{
  return *(_QWORD *)(a1 + 8) % a2;
}

__int64 __fastcall sub_40C310(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( a1[1] != a2[1] || a1[2] != a2[2] )
    result = 0LL;
  else
    result = sub_40E2F0(*a1, *a2, a3, a4, a5, a6);
  return result;
}

void __fastcall sub_40C380(void *ptr)
{
  free(*(void **)ptr);
  free(ptr);
}

char *__fastcall sub_40C3A0(const char *a1)
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
  qword_61B920 = v1;
  program_invocation_name = v1;
  return result;
}

__int64 __fastcall sub_40C440(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 result; // rax
  char v8; // [rsp+Ch] [rbp-1Ch]

  v5 = a4;
  v6 = a3;
  if ( (unsigned int)sub_411440(a1, a2, a5, &v8) )
    result = 4294967294LL;
  else
    result = sub_411470(&v8, v6, v5);
  return result;
}

__int64 __fastcall sub_40C480(__int64 a1, unsigned int a2, int a3)
{
  int v4; // [rsp+Ch] [rbp-Ch]

  v4 = a3;
  return sub_411470(&v4, a1, a2);
}

char *__fastcall sub_40C4A0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_4115E0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_415C91;
      if ( !v5 )
        v2 = (char *)&unk_415C86;
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
    v2 = (char *)&unk_415C8D;
    if ( !v5 )
      v2 = (char *)&unk_415C8A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_40C5A0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_40C5A0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_40C5A0((__int64)v9, v79, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
          return sub_40C5A0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_4113C0((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_40C5A0((__int64)v9, v10, s);
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
      return sub_40C5A0((__int64)v9, v10, s);
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
        a8 = sub_40C4A0("`", v11);
        v47 = sub_40C4A0("'", v11);
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

unsigned __int64 __fastcall sub_40C5A0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_40C5A0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_40C5A0((__int64)v9, v79, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
          return sub_40C5A0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_4113C0((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_40C5A0((__int64)v9, v10, s);
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
      return sub_40C5A0((__int64)v9, v10, s);
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
        a8 = sub_40C4A0("`", v11);
        v47 = sub_40C4A0("'", v11);
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

_BYTE *__fastcall sub_40D7D0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v8 = off_61B418;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_61B430 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_410330(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_61B418 == &xmmword_61B420 )
    {
      v8 = (__int128 *)sub_410140(0LL, v10);
      off_61B418 = v8;
      *v8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B420);
    }
    else
    {
      off_61B418 = (__int128 *)sub_410140(off_61B418, v10);
      v8 = off_61B418;
    }
    memset(&v8[dword_61B430], 0, 16LL * ((int)a1 + 1 - dword_61B430));
    dword_61B430 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v19 = *v11;
  v13 = sub_40C5A0(v12, *v11, v18, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_61B940 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_4100E0(v14);
    v16 = *(_DWORD *)v5;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_40C5A0(v15, v14, v18, v4, v16, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_40D7D0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v8 = off_61B418;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_61B430 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_410330(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_61B418 == &xmmword_61B420 )
    {
      v8 = (__int128 *)sub_410140(0LL, v10);
      off_61B418 = v8;
      *v8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B420);
    }
    else
    {
      off_61B418 = (__int128 *)sub_410140(off_61B418, v10);
      v8 = off_61B418;
    }
    memset(&v8[dword_61B430], 0, 16LL * ((int)a1 + 1 - dword_61B430));
    dword_61B430 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(v5 + 4) | 1;
  v19 = *v11;
  v13 = sub_40C5A0(v12, *v11, v18, v4, *(_DWORD *)v5, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_61B940 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_4100E0(v14);
    v16 = *(_DWORD *)v5;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_40C5A0(v15, v14, v18, v4, v16, v22, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_40DCF0(__int64 a1, int a2, char *a3)
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
  return sub_40D7D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DCF0(__int64 a1, int a2, char *a3)
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
  return sub_40D7D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DD60(__int64 a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_40D7D0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_40DD60(__int64 a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_40D7D0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_40DDD0(int a1, char *a2)
{
  return sub_40DCF0(0LL, a1, a2);
}

_BYTE *__fastcall sub_40DDF0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_61BA70;
  v7 = _mm_load_si128((const __m128i *)&xmmword_61BA40);
  v8 = _mm_load_si128((const __m128i *)&xmmword_61BA50);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_61BA60);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_40D7D0(0LL, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_40DE70(char *a1)
{
  return sub_40DDF0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40DEA0(__int64 a1, int a2, char *a3)
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
  return sub_40D7D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DEA0(__int64 a1, int a2, char *a3)
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
  return sub_40D7D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DF10(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_61BA40);
  v7 = _mm_load_si128((const __m128i *)&xmmword_61BA50);
  v8 = _mm_load_si128((const __m128i *)&xmmword_61BA60);
  v9 = qword_61BA70;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_40D7D0(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_40E000(__int64 a1, char *a2)
{
  return sub_40D7D0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61B3E0);
}

_BYTE *__fastcall sub_40E020(char *a1)
{
  return sub_40D7D0(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61B3E0);
}

__int64 __fastcall sub_40E040(int oldfd, char *old, int newfd, char *a4, unsigned int a5)
{
  int v5; // er13
  char *v6; // r12
  unsigned int v7; // ebp
  int v8; // eax
  unsigned int v9; // edx
  int *v10; // rax
  int *v11; // r9
  bool v12; // r15
  int v14; // eax
  size_t v15; // rbp
  size_t v16; // rax
  unsigned int v17; // [rsp+8h] [rbp-160h]
  int *v18; // [rsp+8h] [rbp-160h]
  int *v19; // [rsp+8h] [rbp-160h]
  struct stat v20; // [rsp+10h] [rbp-158h]
  struct stat stat_buf; // [rsp+A0h] [rbp-C8h]

  v5 = newfd;
  v6 = a4;
  v7 = a5;
  v8 = syscall(316LL, (unsigned int)oldfd, old, (unsigned int)newfd, a4, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = v8;
    v10 = __errno_location();
    v9 = v17;
    v11 = v10;
    v12 = *v10 != 95 && ((*v10 - 22) & 0xFFFFFFEF) != 0;
    if ( !v12 )
    {
      if ( v7 )
      {
        if ( v7 & 0xFFFFFFFE )
        {
          *v10 = 95;
          return (unsigned int)-1;
        }
        v18 = v10;
        v14 = __fxstatat(1, v5, v6, &stat_buf, 256);
        v11 = v18;
        if ( !v14 || *v18 == 75 )
        {
          *v18 = 17;
          return (unsigned int)-1;
        }
        if ( *v18 != 2 )
          return (unsigned int)-1;
        v12 = 1;
      }
      v19 = v11;
      v15 = strlen(old);
      v16 = strlen(v6);
      if ( !v15 || !v16 || old[v15 - 1] != 47 && v6[v16 - 1] != 47 )
        return (unsigned int)renameat(oldfd, old, v5, v6);
      if ( !__fxstatat(1, oldfd, old, &v20, 256) )
      {
        if ( v12 )
        {
          if ( (v20.st_mode & 0xF000) != 0x4000 )
          {
            *v19 = 2;
            return (unsigned int)-1;
          }
          return (unsigned int)renameat(oldfd, old, v5, v6);
        }
        if ( __fxstatat(1, v5, v6, &stat_buf, 256) )
        {
          if ( *v19 == 2 && (v20.st_mode & 0xF000) == 0x4000 )
            return (unsigned int)renameat(oldfd, old, v5, v6);
        }
        else
        {
          if ( (stat_buf.st_mode & 0xF000) == 0x4000 )
          {
            if ( (v20.st_mode & 0xF000) != 0x4000 )
            {
              *v19 = 21;
              return (unsigned int)-1;
            }
            return (unsigned int)renameat(oldfd, old, v5, v6);
          }
          *v19 = 20;
        }
      }
      return (unsigned int)-1;
    }
  }
  return v9;
}

ssize_t __fastcall sub_40E290(int fd, void *buf, size_t n)
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

__int64 __fastcall sub_40E2F0(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  const char *v3; // rbp
  const char *v4; // r12
  size_t v5; // r13
  char *v7; // rbp
  char *v8; // r12
  int *v9; // rax
  int *v10; // rax
  __int64 v11; // [rsp+0h] [rbp-158h]
  __int64 v12; // [rsp+8h] [rbp-150h]
  struct stat stat_buf; // [rsp+90h] [rbp-C8h]

  v2 = 0;
  v3 = sub_40AB40(a1);
  v4 = sub_40AB40(a2);
  v5 = sub_40ABA0(v3);
  if ( v5 == sub_40ABA0(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (char *)sub_40AA60(a1, (__int64)v4);
    v8 = (char *)sub_40AA60(a2, (__int64)v4);
    if ( __xstat(1, v7, (struct stat *)&v11) )
    {
      v10 = __errno_location();
      error(1, *v10, "%s", v7);
    }
    if ( __xstat(1, v8, &stat_buf) )
    {
      v9 = __errno_location();
      error(1, *v9, "%s", v8);
    }
    v2 = 0;
    if ( v12 == stat_buf.st_ino )
      LOBYTE(v2) = v11 == stat_buf.st_dev;
    free(v7);
    free(v8);
  }
  return v2;
}

__int64 __fastcall sub_40E420(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a1 + 8) >= v3 )
    result = *(_QWORD *)(a1 + 8) > v3;
  return result;
}

int __fastcall sub_40E440(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}

__int64 __fastcall sub_40E450(DIR *dirp, __int64 a2)
{
  DIR *v2; // rbx
  unsigned __int64 v3; // r15
  size_t v4; // r12
  char *v5; // r14
  __int64 v6; // r13
  int *v7; // rbp
  struct dirent *v8; // rax
  struct dirent *v9; // rcx
  const char *v10; // r8
  char v11; // al
  const char *v12; // rdi
  size_t v13; // rax
  void *v14; // r8
  size_t v15; // rdx
  struct dirent *v16; // rcx
  char *v17; // r12
  int v18; // ebx
  char *v19; // rbp
  char *v20; // rbp
  __int64 v21; // r12
  const char **v22; // rbx
  const char *v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rdi
  int (*compar)(const void *, const void *); // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h]
  const char *srcb; // [rsp+18h] [rbp-60h]
  __int64 src; // [rsp+18h] [rbp-60h]
  unsigned __int64 srca; // [rsp+18h] [rbp-60h]
  __int64 v34; // [rsp+20h] [rbp-58h]
  struct dirent *v35; // [rsp+28h] [rbp-50h]
  struct dirent *v36; // [rsp+28h] [rbp-50h]
  void *v37; // [rsp+28h] [rbp-50h]
  size_t n; // [rsp+30h] [rbp-48h]
  size_t na; // [rsp+30h] [rbp-48h]
  size_t nb; // [rsp+30h] [rbp-48h]
  __int64 v41; // [rsp+38h] [rbp-40h]

  a2 = (unsigned int)a2;
  compar = (int (*)(const void *, const void *))qword_4169E0[(unsigned int)a2];
  if ( !dirp )
    return 0LL;
  v2 = dirp;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v7 = __errno_location();
  while ( 1 )
  {
    *v7 = 0;
    v8 = readdir(v2);
    v9 = v8;
    if ( !v8 )
      break;
    v10 = v8->d_name;
    v11 = v8->d_name[0];
    if ( v11 == 46 )
    {
      if ( v9->d_name[1] == 46 )
      {
        v11 = v9->d_name[2];
        goto LABEL_3;
      }
      if ( v9->d_name[1] )
        goto LABEL_8;
    }
    else
    {
LABEL_3:
      if ( v11 )
      {
LABEL_8:
        v12 = v10;
        srcb = v10;
        v35 = v9;
        v13 = strlen(v10);
        v14 = (void *)srcb;
        v15 = v13 + 1;
        if ( compar )
        {
          v16 = v35;
          src = v4 + 1;
          if ( v4 == v34 )
          {
            if ( v5 )
            {
              if ( v4 > 0x555555555555554LL )
                goto LABEL_41;
              v34 = src + (v4 >> 1);
              a2 = 16 * (src + (v4 >> 1));
            }
            else if ( v4 )
            {
              a2 = 16 * v4;
              if ( v4 & 0x800000000000000LL || v4 >> 60 != 0 )
LABEL_41:
                sub_410330(v12, a2, v15);
            }
            else
            {
              v34 = 8LL;
              a2 = 128LL;
              src = 1LL;
            }
            v41 = v13 + 1;
            nb = (size_t)v14;
            v27 = sub_410140(v5, a2);
            v15 = v41;
            v14 = (void *)nb;
            v5 = (char *)v27;
            v16 = v35;
          }
          n = v15;
          v36 = v16;
          v17 = &v5[16 * v4];
          *(_QWORD *)v17 = sub_410310(v14);
          v3 += n;
          *((_QWORD *)v17 + 1) = v36->d_ino;
          v4 = src;
        }
        else
        {
          a2 = v15 + v3;
          srca = v15 + v3;
          if ( v30 - v3 > v15 )
            goto LABEL_29;
          if ( __CFADD__(v15, v3) )
            goto LABEL_41;
          if ( v6 )
          {
            a2 = v15 + v3;
            if ( srca > 0x5555555555555553LL )
              goto LABEL_41;
            v25 = srca + (srca >> 1) + 1;
          }
          else
          {
            v25 = v15 + v3;
            if ( !a2 )
            {
              v30 = 128LL;
              goto LABEL_28;
            }
            if ( a2 < 0 )
              goto LABEL_41;
          }
          v30 = v25;
LABEL_28:
          na = v15;
          v37 = v14;
          v26 = sub_410140(v6, v30);
          v15 = na;
          v14 = v37;
          v6 = v26;
LABEL_29:
          a2 = (__int64)v14;
          memcpy((void *)(v6 + v3), v14, v15);
          v3 = srca;
        }
      }
    }
  }
  v18 = *v7;
  if ( *v7 )
  {
    free(v5);
    v28 = (void *)v6;
    v6 = 0LL;
    free(v28);
    *v7 = v18;
  }
  else
  {
    if ( compar )
    {
      if ( v4 )
      {
        v20 = 0LL;
        qsort(v5, v4, 0x10uLL, compar);
        v21 = (__int64)&v5[16 * v4];
        v22 = (const char **)v5;
        v6 = sub_4100E0(v3 + 1);
        do
        {
          v23 = *v22;
          v22 += 2;
          v20 = &stpcpy(&v20[v6], v23)[-v6 + 1];
          free((void *)*(v22 - 2));
        }
        while ( v22 != (const char **)v21 );
        v19 = &v20[v6];
      }
      else
      {
        v6 = sub_4100E0(v3 + 1);
        v19 = (char *)v6;
      }
      free(v5);
    }
    else if ( v30 == v3 )
    {
      v6 = sub_410140(v6, v30 + 1);
      v19 = (char *)(v6 + v30);
    }
    else
    {
      v19 = (char *)(v6 + v3);
    }
    *v19 = 0;
  }
  return v6;
}

void *__fastcall sub_40E7F0(const char *a1, unsigned int a2)
{
  DIR *v2; // rax
  DIR *v3; // rbx
  void *v4; // rbp
  void *result; // rax
  int *v6; // rax
  int v7; // er12
  int *v8; // rbx

  v2 = sub_40A9C0(a1);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  v4 = (void *)sub_40E450(v2, a2);
  if ( !closedir(v3) )
    return v4;
  v6 = __errno_location();
  v7 = *v6;
  v8 = v6;
  free(v4);
  result = 0LL;
  *v8 = v7;
  return result;
}

__int64 __fastcall sub_40E860(char *filename)
{
  int v1; // ebx
  int *v2; // rax
  __int64 v4; // [rsp+0h] [rbp-98h]

  v1 = __lxstat(1, filename, (struct stat *)&v4);
  v2 = __errno_location();
  if ( v1 && *v2 != 75 )
    return (unsigned int)-(*v2 != 2);
  *v2 = 17;
  return 0xFFFFFFFFLL;
}

int __fastcall sub_40E8C0(const char *a1)
{
  return mkdir(a1, 0x1C0u);
}

int __fastcall sub_40E8D0(const char *a1, int *a2)
{
  int v2; // esi

  v2 = *a2;
  LOBYTE(v2) = v2 & 0x3C | 0xC2;
  return open(a1, v2, 384LL);
}

void __noreturn sub_40E8F0()
{
  __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147u, "gen_tempname_len");
}

__int64 __fastcall sub_40E910(char *s, int a2, __int64 a3, __int64 (__fastcall *a4)(char *, __int64), size_t a5)
{
  size_t v5; // r13
  int *v6; // rax
  int *v7; // r15
  size_t v8; // rax
  size_t v9; // rdx
  size_t v10; // rbx
  void *v11; // rbp
  int v12; // er12
  char *v13; // rbx
  char *v14; // r14
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // edx
  int v19; // [rsp+8h] [rbp-60h]
  char *v20; // [rsp+10h] [rbp-58h]
  int v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 (__fastcall *v23)(char *, __int64); // [rsp+20h] [rbp-48h]
  int v24; // [rsp+2Ch] [rbp-3Ch]

  v5 = a5;
  v22 = a3;
  v23 = a4;
  v6 = __errno_location();
  v7 = v6;
  v24 = *v6;
  v8 = strlen(s);
  v9 = v5 + a2;
  if ( v9 > v8 || (v10 = v8 - v9, v20 = &s[v8 - v9], v5 > strspn(&s[v8 - v9], "X")) )
  {
    *v7 = 22;
    v17 = -1;
  }
  else
  {
    v11 = (void *)sub_411B80(0LL, v5);
    if ( v11 )
    {
      v12 = 238328;
      v13 = &s[v5 + v10];
      while ( 1 )
      {
        v14 = v20;
        if ( v5 )
        {
          do
            *(++v14 - 1) = byte_416A80[sub_411BC0(v11, 61LL)];
          while ( v14 != v13 );
        }
        v15 = v23(s, v22);
        if ( v15 >= 0 )
        {
          *v7 = v24;
          v16 = v24;
          goto LABEL_12;
        }
        v16 = *v7;
        if ( *v7 != 17 )
          break;
        if ( !--v12 )
        {
          sub_411CE0(v11);
          *v7 = 17;
          return (unsigned int)-1;
        }
      }
      v15 = -1;
LABEL_12:
      v21 = v15;
      v19 = v16;
      sub_411CE0(v11);
      v17 = v21;
      *v7 = v19;
    }
    else
    {
      v17 = -1;
    }
  }
  return v17;
}

__int64 __fastcall sub_40EA70(char *a1, int a2, int a3, unsigned int a4, size_t a5)
{
  int v6; // [rsp+Ch] [rbp-Ch]

  v6 = a3;
  if ( a4 > 2 )
    sub_40E8F0();
  return sub_40E910(a1, a2, (__int64)&v6, (__int64 (__fastcall *)(char *, __int64))off_416A40[a4], a5);
}

__int64 __fastcall sub_40EAA0(char *a1, int a2, int a3, unsigned int a4)
{
  int v5; // [rsp+Ch] [rbp-Ch]

  v5 = a3;
  if ( a4 > 2 )
    sub_40E8F0();
  return sub_40E910(a1, a2, (__int64)&v5, (__int64 (__fastcall *)(char *, __int64))off_416A40[a4], 6uLL);
}

__int64 __fastcall sub_40EAF0(int fd)
{
  __int64 result; // rax
  unsigned int v2; // er12
  int *v3; // rax
  int v4; // er13
  int *v5; // rbp

  if ( (unsigned int)fd > 2 )
    return (unsigned int)fd;
  v2 = sub_412750();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

unsigned __int64 __fastcall sub_40EB40(_QWORD *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_40EB50(_QWORD *a1, _QWORD *a2)
{
  return *a1 == *a2;
}

__int64 __fastcall sub_40EB60(char *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r14
  int v8; // er15
  unsigned int v9; // ebx
  _QWORD *v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // r9
  int v14; // edi
  __int64 v16; // rcx
  int v17; // er10
  int v18; // edi
  int v19; // ecx
  int v20; // esi
  int v21; // er8
  int v22; // er15
  int v23; // er11
  signed __int64 v24; // rax
  int v25; // eax
  int v26; // er8
  __int64 *v27; // r9
  int v28; // eax
  int v29; // er8
  int v30; // er10
  char v31; // al
  int v32; // ecx
  int v33; // eax
  int v34; // er10
  int v35; // ecx
  int v36; // esi
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdi
  __int64 *v40; // [rsp+0h] [rbp-148h]
  __int64 *v41; // [rsp+0h] [rbp-148h]
  __int64 *v42; // [rsp+0h] [rbp-148h]
  bool v43; // [rsp+8h] [rbp-140h]
  __int64 v44; // [rsp+10h] [rbp-138h]
  int v45; // [rsp+10h] [rbp-138h]
  int v46; // [rsp+18h] [rbp-130h]
  int v47; // [rsp+18h] [rbp-130h]
  int v48; // [rsp+18h] [rbp-130h]
  int v49; // [rsp+18h] [rbp-130h]
  _QWORD *v50; // [rsp+18h] [rbp-130h]
  char *filename; // [rsp+20h] [rbp-128h]
  __int64 v52; // [rsp+30h] [rbp-118h]
  int v53; // [rsp+3Ch] [rbp-10Ch]
  __int64 v54; // [rsp+48h] [rbp-100h]
  __int64 v55; // [rsp+50h] [rbp-F8h]
  int v56; // [rsp+58h] [rbp-F0h]
  char v57; // [rsp+5Ch] [rbp-ECh]
  __int64 v58; // [rsp+60h] [rbp-E8h]
  __int64 v59; // [rsp+68h] [rbp-E0h]
  __int64 v60; // [rsp+70h] [rbp-D8h]
  __int64 v61; // [rsp+78h] [rbp-D0h]
  struct stat stat_buf; // [rsp+80h] [rbp-C8h]

  v4 = *(_QWORD *)(a3 + 96);
  v5 = *(_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(a3 + 88);
  v7 = *(_QWORD *)(a2 + 96);
  v8 = *(_QWORD *)(a3 + 96);
  v9 = a4 & 1;
  if ( !(a4 & 1) )
  {
LABEL_12:
    if ( v6 > v5 )
      return (unsigned int)-1;
    v9 = 1;
    if ( v6 == v5 )
    {
      if ( v8 <= (int)v7 )
        return v8 < (int)v7;
      return (unsigned int)-1;
    }
    return v9;
  }
  v43 = v5 == v6 && (_DWORD)v7 == (_DWORD)v4;
  if ( v43 )
    return 0;
  if ( v6 - 1 > v5 )
    return (unsigned int)-1;
  if ( v5 - 1 <= v6 )
  {
    v10 = (_QWORD *)qword_61BA80;
    v44 = a2;
    filename = a1;
    if ( !qword_61BA80 )
    {
      v10 = sub_40B910(
              0x10uLL,
              0LL,
              (unsigned __int64 (__fastcall *)(__int64, unsigned __int64))sub_40EB40,
              (bool (__fastcall *)(__int64, __int64))sub_40EB50,
              (__int64)free);
      qword_61BA80 = (__int64)v10;
      if ( !v10 )
        goto LABEL_21;
    }
    v11 = (_QWORD *)qword_61BA78;
    if ( !qword_61BA78 )
    {
      v50 = v10;
      v38 = malloc(0x10uLL);
      v11 = v38;
      qword_61BA78 = (__int64)v38;
      if ( !v38 )
      {
        v39 = qword_61BA80;
        goto LABEL_59;
      }
      *((_DWORD *)v38 + 2) = 2000000000;
      v10 = v50;
      *((_BYTE *)v38 + 12) = 0;
    }
    *v11 = *(_QWORD *)v44;
    v12 = sub_40C0B0((__int64)v10, (__int64)v11);
    v13 = (__int64 *)v12;
    if ( v12 )
    {
      if ( qword_61BA78 == v12 )
        qword_61BA78 = 0LL;
LABEL_10:
      v14 = *((_DWORD *)v13 + 2);
      v46 = *((_DWORD *)v13 + 2);
      if ( *((_BYTE *)v13 + 12) )
      {
        v6 = ~(v14 == 2000000000) & (unsigned __int64)v6;
        v8 = v4 - v8 % v14;
        goto LABEL_12;
      }
LABEL_22:
      v16 = *(_QWORD *)(v44 + 112);
      v52 = *(_QWORD *)(v44 + 80);
      v17 = (int)v16 / 10;
      v18 = (int)v7 / 10;
      if ( ((int)v7 % 10) | ((int)v52 % 10) | ((int)v16 % 10) )
      {
LABEL_55:
        *((_DWORD *)v13 + 2) = v9;
        *((_BYTE *)v13 + 12) = 1;
        goto LABEL_12;
      }
      v19 = (int)v52 / 10;
      v20 = v17;
      v54 = *(_QWORD *)(v44 + 72);
      if ( v46 <= 10 )
      {
        *((_DWORD *)v13 + 2) = 10;
        v24 = v6;
        v21 = 10;
      }
      else
      {
        v21 = 10;
        if ( ((int)v7 / 10 % 10) | (v17 % 10) | ((int)v52 / 10 % 10) )
        {
          *((_DWORD *)v13 + 2) = 10;
          v24 = v6;
        }
        else
        {
          v53 = v8;
          v22 = 8;
          do
          {
            v23 = 10 * v21;
            v21 = v23;
            v19 /= 10;
            v20 /= 10;
            v18 /= 10;
            if ( v23 >= v46 || (v18 % 10) | (v20 % 10) | (v19 % 10) )
            {
              v43 = v23 == 2000000000;
              v8 = v53;
              *((_DWORD *)v13 + 2) = v23;
              v24 = v6 & ~(v23 == 2000000000);
              goto LABEL_31;
            }
            --v22;
          }
          while ( v22 );
          v8 = v53;
          if ( (*(_BYTE *)(v44 + 104) | (unsigned __int8)(v5 | v54)) & 1 )
          {
            *((_DWORD *)v13 + 2) = 1000000000;
            v24 = v6;
            v21 = 1000000000;
          }
          else
          {
            *((_DWORD *)v13 + 2) = 2000000000;
            v21 = 2000000000;
            v24 = v6 & 0xFFFFFFFFFFFFFFFELL;
            v43 = 1;
          }
        }
      }
LABEL_31:
      if ( v5 > v6 || (int)v7 >= (int)v4 && v5 == v6 )
        return v9;
      if ( v5 < v24 || v5 == v24 && (int)v4 - v8 % v21 > (int)v7 )
        return (unsigned int)-1;
      v47 = v21;
      v58 = v54;
      v59 = (int)v52;
      v60 = v5 | v43;
      v61 = (int)(v21 / 9u + v7);
      v40 = v13;
      if ( (*(_DWORD *)(v44 + 24) & 0xF000) == 40960 )
      {
        v25 = sub_40F8B0(filename);
        v27 = v40;
        v26 = v47;
      }
      else
      {
        v25 = sub_40F8A0(filename);
        v26 = v47;
        v27 = v40;
      }
      if ( v25 != 0 )
        return (unsigned int)-2;
      v48 = v26;
      v41 = v27;
      if ( (*(_DWORD *)(v44 + 24) & 0xF000) == 40960 )
      {
        v28 = __lxstat(1, filename, &stat_buf);
        v13 = v41;
        v29 = v48;
      }
      else
      {
        v28 = __xstat(1, filename, &stat_buf);
        v29 = v48;
        v13 = v41;
      }
      v30 = v28;
      v31 = stat_buf.st_mtim.tv_sec;
      v32 = stat_buf.st_mtim.tv_nsec;
      if ( v30 | v5 ^ stat_buf.st_mtim.tv_sec | stat_buf.st_mtim.tv_nsec ^ (int)v7 )
      {
        v61 = (int)v7;
        v60 = v5;
        v33 = *(_DWORD *)(v44 + 24);
        v49 = v29;
        v45 = v30;
        v42 = v13;
        if ( (v33 & 0xF000) == 40960 )
        {
          sub_40F8B0(filename);
          v13 = v42;
          v34 = v45;
          v29 = v49;
        }
        else
        {
          sub_40F8A0(filename);
          v29 = v49;
          v34 = v45;
          v13 = v42;
        }
        if ( v34 )
          return (unsigned int)-2;
        v31 = stat_buf.st_mtim.tv_sec;
        v32 = stat_buf.st_mtim.tv_nsec;
      }
      v35 = 1000000000 * (v31 & 1) + v32;
      if ( v35 == 10 * (v35 / 10) )
      {
        if ( v29 != 10 )
        {
          v36 = 9;
          v9 = 10;
          do
          {
            v35 /= 10;
            if ( v35 != 10 * (v35 / 10) )
              break;
            if ( !--v36 )
            {
              v37 = -2LL;
              v9 = 2000000000;
              goto LABEL_54;
            }
            v9 *= 10;
          }
          while ( v9 != v29 );
          v37 = ~(v9 == 2000000000);
          goto LABEL_54;
        }
        v9 = 10;
      }
      v37 = -1LL;
LABEL_54:
      v6 &= v37;
      v8 = v4 - v8 % (int)v9;
      goto LABEL_55;
    }
    v39 = qword_61BA80;
    if ( !qword_61BA80 )
    {
LABEL_21:
      v56 = 2000000000;
      v13 = &v55;
      v57 = 0;
      v46 = 2000000000;
      goto LABEL_22;
    }
LABEL_59:
    v55 = *(_QWORD *)v44;
    v13 = (__int64 *)sub_40B6A0(v39, (__int64)&v55);
    if ( v13 )
      goto LABEL_10;
    goto LABEL_21;
  }
  return v9;
}

__int64 __fastcall sub_40F2D0(_QWORD *a1, struct timespec **a2)
{
  struct timespec *v2; // rbx
  __syscall_slong_t v3; // rax
  __syscall_slong_t v4; // rdx
  __syscall_slong_t v5; // rax
  __int64 result; // rax
  __syscall_slong_t v7; // rax

  v2 = *a2;
  v3 = (*a2)->tv_nsec;
  v4 = (*a2)[1].tv_nsec;
  if ( v3 == 1073741822 )
  {
    result = 1LL;
    if ( v4 == 1073741822 )
      return result;
    v7 = a1[10];
    v2->tv_sec = a1[9];
    v2->tv_nsec = v7;
  }
  else if ( v3 == 0x3FFFFFFF )
  {
    if ( v4 == 0x3FFFFFFF )
    {
      *a2 = 0LL;
      return 0LL;
    }
    sub_411500(*a2);
    v4 = v2[1].tv_nsec;
    if ( v4 == 1073741822 )
      goto LABEL_4;
  }
  else if ( v4 == 1073741822 )
  {
LABEL_4:
    v5 = a1[12];
    v2[1].tv_sec = a1[11];
    v2[1].tv_nsec = v5;
    return 0LL;
  }
  result = 0LL;
  if ( v4 == 0x3FFFFFFF )
  {
    sub_411500(v2 + 1);
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_40F3A0(_QWORD *a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // rdx
  int v3; // ecx
  int v4; // er10
  __int64 result; // rax

  v1 = a1[1];
  if ( v1 - 1073741822 > 1 && v1 > 0x3B9AC9FF || (v2 = a1[3], v2 - 1073741822 > 1) && v2 > 0x3B9AC9FF )
  {
    *__errno_location() = 22;
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    if ( v1 - 1073741822 <= 1 )
    {
      *a1 = 0LL;
      v4 = 1;
      v3 = v1 == 1073741822;
    }
    if ( v2 - 1073741822 <= 1 )
    {
      a1[2] = 0LL;
      v4 = 1;
      v3 += v2 == 1073741822;
    }
    result = v4 + (unsigned int)(v3 == 1);
  }
  return result;
}

__int64 __fastcall sub_40F460(int fd, char *filename, const __m128i *a3)
{
  char *v3; // rbp
  int v4; // ebx
  __m128i v5; // xmm1
  int v6; // er13
  struct timespec *v7; // rsi
  unsigned int v8; // er12
  bool v9; // zf
  char v10; // al
  __syscall_slong_t v11; // rdi
  const __m128i *v12; // r13
  __syscall_slong_t v13; // rsi
  struct timeval *v14; // rdx
  struct utimbuf *v15; // rsi
  __time_t v16; // rax
  bool v18; // al
  __time_t v19; // rdx
  bool v20; // bp
  bool v21; // r14
  __time_t v22; // rax
  __m128i v23; // xmm3
  bool v24; // dl
  bool v25; // r14
  __syscall_slong_t v26; // rax
  struct timespec *times; // [rsp+8h] [rbp-120h]
  __m128i v28; // [rsp+10h] [rbp-118h]
  __m128i v29; // [rsp+20h] [rbp-108h]
  struct timeval tvp; // [rsp+30h] [rbp-F8h]
  __time_t v31; // [rsp+40h] [rbp-E8h]
  __syscall_slong_t v32; // [rsp+48h] [rbp-E0h]
  struct utimbuf file_times; // [rsp+50h] [rbp-D8h]
  __m128i v34; // [rsp+60h] [rbp-C8h]
  struct stat stat_buf; // [rsp+70h] [rbp-B8h]

  v3 = filename;
  v4 = fd;
  if ( a3 )
  {
    v5 = _mm_loadu_si128(a3 + 1);
    times = (struct timespec *)&v28;
    v28 = _mm_loadu_si128(a3);
    v29 = v5;
    v6 = sub_40F3A0(&v28);
    if ( v6 < 0 )
      return (unsigned int)-1;
  }
  else
  {
    times = 0LL;
    v6 = 0;
  }
  if ( fd < 0 && !filename )
  {
    *__errno_location() = 9;
    return (unsigned int)-1;
  }
  if ( dword_61BA8C < 0 )
    goto LABEL_11;
  if ( v6 == 2 )
  {
    if ( fd < 0 )
      v18 = __xstat(1, filename, &stat_buf) != 0;
    else
      v18 = __fxstat(1, fd, &stat_buf) != 0;
    if ( v18 )
      return (unsigned int)-1;
    v7 = times;
    if ( times->tv_nsec == 1073741822 )
    {
      v26 = stat_buf.st_atim.tv_nsec;
      v6 = 3;
      times->tv_sec = stat_buf.st_atim.tv_sec;
      v7->tv_nsec = v26;
    }
    else
    {
      v6 = 3;
      if ( times[1].tv_nsec == 1073741822 )
      {
        v19 = stat_buf.st_mtim.tv_sec;
        times[1].tv_nsec = stat_buf.st_mtim.tv_nsec;
        v7[1].tv_sec = v19;
      }
    }
  }
  else
  {
    v7 = times;
  }
  if ( fd < 0 )
  {
    v8 = utimensat(-100, v3, v7, 0);
    v9 = v8 == 0;
    if ( (int)v8 > 0 )
      goto LABEL_10;
  }
  else
  {
    v8 = futimens(fd, v7);
    v9 = v8 == 0;
    if ( (int)v8 > 0 )
    {
LABEL_10:
      *__errno_location() = 38;
      goto LABEL_11;
    }
  }
  if ( v9 || *__errno_location() != 38 )
  {
    dword_61BA8C = 1;
    return v8;
  }
LABEL_11:
  dword_61BA8C = -1;
  dword_61BA88 = -1;
  if ( !v6 )
    goto LABEL_18;
  if ( v6 != 3 )
  {
    v10 = fd < 0 ? __xstat(1, v3, &stat_buf) != 0 : __fxstat(1, fd, &stat_buf) != 0;
    if ( v10 )
      return (unsigned int)-1;
  }
  if ( !times )
    goto LABEL_26;
  v8 = 0;
  if ( (unsigned __int8)sub_40F2D0(&stat_buf, &times) )
    return v8;
LABEL_18:
  if ( times )
  {
    v11 = times->tv_nsec;
    v12 = (const __m128i *)&tvp;
    tvp.tv_sec = times->tv_sec;
    v13 = times[1].tv_nsec;
    v31 = times[1].tv_sec;
    tvp.tv_usec = v11 / 1000;
    v14 = &tvp;
    v32 = v13 / 1000;
    if ( v4 >= 0 )
      goto LABEL_20;
    return (unsigned int)futimesat(-100, v3, v14);
  }
LABEL_26:
  v12 = 0LL;
  v14 = 0LL;
  if ( fd < 0 )
    return (unsigned int)futimesat(-100, v3, v14);
LABEL_20:
  v8 = futimesat(v4, 0LL, v14);
  if ( !v8 )
  {
    if ( !v12 )
      return v8;
    v20 = v12->m128i_i64[1] > 499999;
    v21 = v12[1].m128i_i64[1] > 499999;
    if ( v12->m128i_i64[1] <= 499999 && !v21 )
      return v8;
    if ( __fxstat(1, v4, &stat_buf) )
      return v8;
    v22 = stat_buf.st_atim.tv_sec - v12->m128i_i64[0];
    v23 = _mm_load_si128(v12 + 1);
    v24 = stat_buf.st_mtim.tv_sec - v12[1].m128i_i64[0] == 1;
    file_times = (struct utimbuf)_mm_load_si128(v12);
    v34 = v23;
    v25 = v24 && v21;
    if ( v22 != 1 || !v20 || stat_buf.st_atim.tv_nsec )
    {
      if ( !v25 || stat_buf.st_mtim.tv_nsec )
        return 0;
    }
    else
    {
      file_times.modtime = 0LL;
      if ( !v25 || stat_buf.st_mtim.tv_nsec )
        goto LABEL_48;
    }
    v34.m128i_i64[1] = 0LL;
LABEL_48:
    futimesat(v4, 0LL, (const struct timeval *)&file_times);
    return 0;
  }
  v8 = -1;
  if ( v3 )
  {
    v15 = 0LL;
    if ( times )
    {
      v16 = times[1].tv_sec;
      v15 = &file_times;
      file_times.actime = times->tv_sec;
      file_times.modtime = v16;
    }
    v8 = utime(v3, v15);
  }
  return v8;
}

__int64 __fastcall sub_40F8A0(char *filename, const __m128i *a2)
{
  return sub_40F460(-1, filename, a2);
}

__int64 __fastcall sub_40F8B0(char *filename, const __m128i *a2)
{
  __m128i v2; // xmm1
  int v3; // ebx
  struct timespec *v4; // rdx
  int v5; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ebp
  __int64 result; // rax
  __time_t v9; // rcx
  __syscall_slong_t v10; // rax
  struct timespec *times; // [rsp+8h] [rbp-D0h]
  __m128i v12; // [rsp+10h] [rbp-C8h]
  __m128i v13; // [rsp+20h] [rbp-B8h]
  struct stat stat_buf; // [rsp+30h] [rbp-A8h]

  if ( a2 )
  {
    v2 = _mm_loadu_si128(a2 + 1);
    times = (struct timespec *)&v12;
    v12 = _mm_loadu_si128(a2);
    v13 = v2;
    v3 = sub_40F3A0(&v12);
    if ( v3 < 0 )
      return (unsigned int)-1;
    if ( dword_61BA88 < 0 )
      goto LABEL_8;
    if ( v3 == 2 )
    {
      if ( __lxstat(1, filename, &stat_buf) )
        return (unsigned int)-1;
      v4 = times;
      if ( times->tv_nsec == 1073741822 )
      {
        v10 = stat_buf.st_atim.tv_nsec;
        v3 = 3;
        times->tv_sec = stat_buf.st_atim.tv_sec;
        v4->tv_nsec = v10;
      }
      else
      {
        v3 = 3;
        if ( times[1].tv_nsec == 1073741822 )
        {
          v9 = stat_buf.st_mtim.tv_sec;
          times[1].tv_nsec = stat_buf.st_mtim.tv_nsec;
          v4[1].tv_sec = v9;
        }
      }
    }
    else
    {
      v4 = times;
    }
  }
  else
  {
    v4 = 0LL;
    v3 = 0;
    times = 0LL;
    if ( dword_61BA88 < 0 )
    {
      dword_61BA88 = -1;
      goto LABEL_17;
    }
  }
  v5 = utimensat(-100, filename, v4, 256);
  v6 = v5;
  if ( v5 > 0 )
  {
    *__errno_location() = 38;
    goto LABEL_8;
  }
  if ( v5 && *__errno_location() == 38 )
  {
LABEL_8:
    dword_61BA88 = -1;
    if ( v3 )
    {
      if ( v3 == 3 )
      {
        if ( !times )
        {
LABEL_12:
          if ( (stat_buf.st_mode & 0xF000) != 40960 )
            return (unsigned int)sub_40F460(-1, filename, (const __m128i *)times);
          *__errno_location() = 38;
          return (unsigned int)-1;
        }
      }
      else
      {
        if ( __lxstat(1, filename, &stat_buf) )
          return (unsigned int)-1;
        if ( !times )
          goto LABEL_12;
      }
      v7 = 0;
      if ( (unsigned __int8)sub_40F2D0(&stat_buf, &times) )
        return v7;
      goto LABEL_12;
    }
LABEL_17:
    if ( __lxstat(1, filename, &stat_buf) )
      return (unsigned int)-1;
    goto LABEL_12;
  }
  dword_61BA8C = 1;
  result = v6;
  dword_61BA88 = 1;
  return result;
}

__int64 __fastcall sub_40FB00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_40FB00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_40FF00(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_40FB00(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_40FB00(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_40FF60(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_40FB00(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_40FB00(a1, a2, a3, a4, v15, i);
}

int sub_410020()
{
  char *v0; // rax
  __int64 v1; // rcx
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1);
  v2 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v2, &unk_412A1E, "https://www.gnu.org/software/coreutils/");
  v3 = stdout;
  v4 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v4, v3);
}

char sub_4100A0()
{
  char result; // al
  __uid_t v1; // eax

  if ( byte_61BA91 )
    return byte_61BA90;
  v1 = geteuid();
  byte_61BA91 = 1;
  result = v1 == 0;
  byte_61BA90 = result;
  return result;
}

void *__fastcall sub_4100E0(size_t a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // rdx

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_410330(a1, a2, v3);
  }
  return result;
}

void *__fastcall sub_410140(void *a1, size_t a2)
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
        sub_410330(a1, a2, v3);
    }
  }
  return result;
}

void *__fastcall sub_4102E0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4100E0(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_410310(void *src)
{
  size_t v1; // rax

  v1 = strlen((const char *)src);
  return sub_4102E0(src, v1 + 1);
}

void __noreturn sub_410330()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_410370()
{
  unsigned int v0; // ebx
  __ssize_t v1; // rax
  char *v2; // rdi
  char *v3; // rax
  char *response; // [rsp+0h] [rbp-18h]
  size_t n; // [rsp+8h] [rbp-10h]

  v0 = 0;
  response = 0LL;
  n = 0LL;
  v1 = __getdelim(&response, &n, 10, stdin);
  if ( v1 > 0 )
  {
    v2 = response;
    v3 = &response[v1 - 1];
    if ( *v3 == 10 )
    {
      *v3 = 0;
      v2 = response;
    }
    LOBYTE(v0) = rpmatch(v2) > 0;
  }
  free(response);
  return v0;
}

__int64 __fastcall sub_4103E0(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_61BA94 < 0 )
    {
      v3 = sub_4103E0(a1);
      if ( v3 >= 0 && dword_61BA94 == -1 )
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
        dword_61BA94 = 1;
      }
      else
      {
        v3 = sub_4103E0(a1);
        if ( v3 >= 0 )
        {
          dword_61BA94 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_410520(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_410590(stream, 0LL, 1LL);
  return fflush(stream);
}

__int64 __fastcall sub_410560(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 40) <= *(_QWORD *)(a1 + 32) )
  {
    result = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)a1 & 0x100 )
      result += *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 72);
  }
  return result;
}

int __fastcall sub_410590(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_4105F0(__int64 a1, int *a2)
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

__int64 __fastcall sub_4106D0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_410CF0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_4105F0(a2, a7);
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
        sub_4105F0((__int64)v11, a7);
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
            return (unsigned int)sub_4106D0(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_4106D0(a1, v11, v12, v45, v46, a6, a7, v8, 4288346LL);
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
        return (unsigned int)sub_4106D0(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_4112C0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_61BAA0 = dword_61B43C;
  dword_61BAA4 = dword_61B438;
  result = sub_410CF0(a1, a2, a3, a4, a5, a6, &dword_61BAA0, a7);
  dword_61B43C = dword_61BAA0;
  filename = (char *)qword_61BAB0;
  dword_61B434 = dword_61BAA8;
  return result;
}

__int64 __fastcall sub_411320(int a1, __int64 a2, char *a3)
{
  return sub_4112C0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_411340(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_4112C0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_411360(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_410CF0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_411380(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_4112C0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_4113A0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_410CF0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_4113C0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_411540(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_411440(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  *a4 = a3;
  return 0LL;
}

int __fastcall sub_411450(const char *a1, int a2, __mode_t a3)
{
  int result; // eax

  if ( a2 == -1 )
    result = chmod(a1, a3);
  else
    result = fchmod(a2, a3);
  return result;
}

__int64 __fastcall sub_411470(__mode_t *a1, const char *a2, int a3)
{
  return (unsigned int)-(sub_411450(a2, a3, *a1) != 0);
}

__int64 __fastcall sub_4114A0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_412760(stream);
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

int __fastcall sub_411500(struct timespec *tp)
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

bool __fastcall sub_411540(int a1)
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

unsigned __int64 __fastcall sub_4115A0(char *a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax

  v2 = *a1;
  if ( !(_BYTE)v2 )
    return 0LL;
  v3 = 0LL;
  do
  {
    ++a1;
    v3 = v2 + __ROL8__(v3, 9);
    v2 = *a1;
  }
  while ( (_BYTE)v2 );
  return v3 % a2;
}

const char *sub_4115E0()
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
                sub_412760(v60);
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
            sub_412760(v39);
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

_QWORD *__fastcall sub_411B50(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = sub_4100E0(0x18uLL, a2);
  *result = a1;
  result[2] = 0LL;
  result[1] = 0LL;
  return result;
}

_QWORD *__fastcall sub_411B80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  v2 = sub_411DA0();
  result = 0LL;
  if ( v2 )
  {
    result = sub_4100E0(0x18uLL, a2);
    *result = v2;
    result[2] = 0LL;
    result[1] = 0LL;
  }
  return result;
}

unsigned __int64 __fastcall sub_411BC0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx
  char v13; // [rsp+8h] [rbp-40h]

  v2 = a2 + 1;
  v3 = a2;
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  while ( 1 )
  {
    if ( v6 >= v3 )
    {
      if ( v6 == v3 )
        goto LABEL_11;
    }
    else
    {
      v8 = v6;
      v9 = 0LL;
      do
      {
        ++v9;
        v8 = (v8 << 8) + 255;
      }
      while ( v3 > v8 );
      sub_4120B0(v4, &v13, v9);
      v10 = &v13;
      do
      {
        v11 = (unsigned __int8)*v10++;
        v6 = (v6 << 8) + 255;
        v5 = v11 + (v5 << 8);
      }
      while ( v3 > v6 );
      if ( v6 == v3 )
      {
LABEL_11:
        a1[2] = 0LL;
        a1[1] = 0LL;
        return v5;
      }
    }
    v7 = (v6 - v3) % v2;
    if ( v5 <= v6 - v7 )
      break;
    v6 = v7 - 1;
    v5 %= v2;
  }
  a1[1] = v5 / v2;
  v5 %= v2;
  a1[2] = (v6 - v3) / v2;
  return v5;
}

void __fastcall sub_411CC0(void *ptr)
{
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
}

__int64 __fastcall sub_411CE0(void *ptr)
{
  unsigned int v1; // er12
  int *v2; // rax
  int v3; // er13
  int *v4; // rbp

  v1 = sub_412210(*(void **)ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
  *v4 = v3;
  return v1;
}

void __fastcall __noreturn sub_411D40(char *a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

  if ( a1 )
  {
    v1 = sub_40E020(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

void __fastcall __noreturn sub_411D40(char *a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

  if ( a1 )
  {
    v1 = sub_40E020(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

__m128i *__fastcall sub_411DA0(__int64 a1, unsigned __int64 a2)
{
  FILE *v2; // r13
  __m128i *v3; // rax
  size_t v4; // rcx
  __m128i *v5; // rbx
  __m128i *v7; // rax
  __int64 v8; // r13
  int v9; // eax
  int v10; // er15
  __int64 v11; // rdx
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  __int64 v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct timeval *v27; // r15
  __int64 v28; // rbp
  __int64 v29; // r14
  unsigned __int64 v30; // rcx
  unsigned int v31; // [rsp+8h] [rbp-50h]
  struct timeval tv; // [rsp+10h] [rbp-48h]

  if ( !a2 )
  {
    v5 = (__m128i *)sub_4100E0(0x1038uLL, 0LL);
    v5->m128i_i64[0] = 0LL;
    v5->m128i_i64[1] = (__int64)sub_411D40;
    v5[1].m128i_i64[0] = 0LL;
    return v5;
  }
  if ( !a1 )
  {
    v7 = (__m128i *)sub_4100E0(0x1038uLL, a2);
    v7->m128i_i64[0] = 0LL;
    v5 = v7;
    v8 = (__int64)v7[2].m128i_i64;
    v7->m128i_i64[1] = (__int64)sub_411D40;
    v7[1].m128i_i64[0] = 0LL;
    v7[1].m128i_i64[1] = 0LL;
    v9 = open("/dev/urandom", 0);
    v10 = v9;
    if ( v9 < 0 )
    {
      v13 = 20LL;
      gettimeofday(&tv, 0LL);
      v5[2] = _mm_load_si128((const __m128i *)&tv);
      LODWORD(tv.tv_sec) = getpid();
      v5[3].m128i_i32[0] = tv.tv_sec;
    }
    else
    {
      v11 = a2;
      if ( a2 > 0x800 )
        v11 = 2048LL;
      v12 = __read_chk((unsigned int)v9, v8, v11, 4120LL);
      close(v10);
      if ( v12 > 2047 )
        goto LABEL_12;
      if ( v12 < 0 )
        v12 = 0LL;
      v26 = 2048 - v12;
      v27 = (struct timeval *)(v8 + v12);
      if ( (unsigned __int64)(2048 - v12) > 0x10 )
        v26 = 16LL;
      v28 = v26 + v12;
      v31 = v26;
      gettimeofday(&tv, 0LL);
      qmemcpy(v27, &tv, v31);
      if ( v28 > 2047 )
        goto LABEL_12;
      v29 = 2048 - v28;
      if ( (unsigned __int64)(2048 - v28) > 4 )
        v29 = 4LL;
      LODWORD(tv.tv_sec) = getpid();
      v30 = (unsigned int)v29;
      v13 = v28 + v29;
      qmemcpy((void *)(v8 + v28), &tv, v30);
      if ( v13 > 0x7FF )
        goto LABEL_12;
    }
    v14 = 2048 - v13;
    if ( 2048 - v13 > 4 )
      v14 = 4LL;
    LODWORD(tv.tv_sec) = getppid();
    if ( (_DWORD)v14 )
    {
      v15 = 0;
      do
      {
        v16 = v15++;
        *(_BYTE *)(v8 + v13 + v16) = *((_BYTE *)&tv.tv_sec + v16);
      }
      while ( v15 < (unsigned int)v14 );
    }
    v17 = v13 + v14;
    if ( v17 <= 0x7FF )
    {
      v18 = 2048 - v17;
      if ( 2048 - v17 > 4 )
        v18 = 4LL;
      LODWORD(tv.tv_sec) = getuid();
      if ( (_DWORD)v18 )
      {
        v19 = 0;
        do
        {
          v20 = v19++;
          *(_BYTE *)(v8 + v17 + v20) = *((_BYTE *)&tv.tv_sec + v20);
        }
        while ( v19 < (unsigned int)v18 );
      }
      v21 = v18 + v17;
      if ( v21 <= 0x7FF )
      {
        LODWORD(tv.tv_sec) = getgid();
        v22 = 2048 - v21;
        if ( 2048 - v21 > 4 )
          v22 = 4;
        v23 = v22;
        if ( v22 )
        {
          v24 = 0;
          do
          {
            v25 = v24++;
            *(_BYTE *)(v8 + v21 + v25) = *((_BYTE *)&tv.tv_sec + v25);
          }
          while ( v24 < v23 );
        }
      }
    }
LABEL_12:
    sub_412510(v8);
    return v5;
  }
  v2 = (FILE *)sub_4127E0(a1, "rb");
  if ( !v2 )
    return 0LL;
  v3 = (__m128i *)sub_4100E0(0x1038uLL, (__int64)"rb");
  v4 = 4096LL;
  v3->m128i_i64[0] = (__int64)v2;
  if ( a2 <= 0x1000 )
    v4 = a2;
  v3->m128i_i64[1] = (__int64)sub_411D40;
  v5 = v3;
  v3[1].m128i_i64[0] = a1;
  setvbuf(v2, &v3[1].m128i_i8[8], 0, v4);
  return v5;
}

__int64 __fastcall sub_4120B0(__int64 a1, char *a2, size_t a3)
{
  __int64 v3; // r12
  char *v4; // rbp
  size_t v5; // rbx
  FILE *v6; // r13
  int *v7; // r14
  __int64 v8; // rdi
  int v9; // edx
  __int64 result; // rax
  size_t v11; // r15
  char *v12; // r13
  __int64 v13; // r14
  void *v14; // rdi
  char *v15; // rsi

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *(FILE **)a1;
  if ( *(_QWORD *)a1 )
  {
    v7 = __errno_location();
    while ( 1 )
    {
      result = fread_unlocked(v4, 1uLL, v5, v6);
      v9 = *v7;
      v4 += result;
      v5 -= result;
      if ( !v5 )
        break;
      v8 = *(_QWORD *)(v3 + 16);
      if ( !(**(_BYTE **)v3 & 0x20) )
        v9 = 0;
      *v7 = v9;
      (*(void (__fastcall **)(__int64))(v3 + 8))(v8);
      v6 = *(FILE **)v3;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = (char *)(a1 + 2104);
    v13 = a1 + 32;
    if ( a3 <= v11 )
    {
      v12 = &v12[-v11 + 2048];
LABEL_16:
      result = (__int64)memcpy(v4, v12, v5);
      *(_QWORD *)(v3 + 24) = v11 - v5;
    }
    else
    {
      while ( 1 )
      {
        v14 = v4;
        v4 += v11;
        v5 -= v11;
        memcpy(v14, &v12[2048 - v11], v11);
        if ( !((unsigned __int8)v4 & 7) )
          break;
        v11 = 2048LL;
        sub_412260(v13, v12);
        if ( v5 <= 0x800 )
        {
LABEL_15:
          v11 = 2048LL;
          goto LABEL_16;
        }
      }
      do
      {
        if ( v5 <= 0x7FF )
        {
          sub_412260(v13, v12);
          goto LABEL_15;
        }
        v15 = v4;
        v4 += 2048;
        result = sub_412260(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_412210(void *ptr)
{
  FILE *v1; // rbp
  __int64 result; // rax

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_412760(v1);
  else
    result = 0LL;
  return result;
}

unsigned __int64 *__fastcall sub_412260(unsigned __int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // rdx
  __int64 *v4; // r9
  __int64 v5; // r8
  unsigned __int64 *result; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 *v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r10
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r11
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx

  v2 = a1[257];
  v3 = a1[256];
  v4 = a2;
  v5 = a1[258] + 1;
  result = a1;
  a1[258] = v5;
  v7 = v5 + v2;
  do
  {
    v8 = *result;
    v9 = result[128] + ~((v3 << 21) ^ v3);
    v10 = v7 + v9 + *(unsigned __int64 *)((char *)a1 + (*result & 0x7F8));
    *result = v10;
    v11 = v8 + *(unsigned __int64 *)((char *)a1 + ((v10 >> 8) & 0x7F8));
    *v4 = v11;
    v12 = result[1];
    v13 = result[129] + ((v9 >> 5) ^ v9);
    v14 = v13 ^ (v13 << 12);
    v15 = v11 + v13 + *(unsigned __int64 *)((char *)a1 + (result[1] & 0x7F8));
    result[1] = v15;
    v16 = v12 + *(unsigned __int64 *)((char *)a1 + ((v15 >> 8) & 0x7F8));
    v4[1] = v16;
    v17 = result[2];
    v18 = result[130] + v14;
    v19 = v16 + v18 + *(unsigned __int64 *)((char *)a1 + (result[2] & 0x7F8));
    result[2] = v19;
    v20 = *(unsigned __int64 *)((char *)a1 + ((v19 >> 8) & 0x7F8)) + v17;
    v4[2] = v20;
    v21 = result[3];
    v3 = result[131] + ((v18 >> 33) ^ v18);
    v22 = v20 + v3 + *(unsigned __int64 *)((char *)a1 + (result[3] & 0x7F8));
    result += 4;
    v4 += 4;
    *(result - 1) = v22;
    v7 = v21 + *(unsigned __int64 *)((char *)a1 + ((v22 >> 8) & 0x7F8));
    *(v4 - 1) = v7;
  }
  while ( result != a1 + 128 );
  v23 = a2 + 128;
  do
  {
    v24 = *result;
    v25 = *(result - 128) + ~((v3 << 21) ^ v3);
    v26 = v25 + *(unsigned __int64 *)((char *)a1 + (*result & 0x7F8));
    *result = v7 + v26;
    v27 = *(unsigned __int64 *)((char *)a1 + (((unsigned __int64)(v7 + v26) >> 8) & 0x7F8)) + v24;
    *v23 = v27;
    v28 = result[1];
    v29 = *(result - 127) + ((v25 >> 5) ^ v25);
    v30 = v29 ^ (v29 << 12);
    v31 = v27 + v29 + *(unsigned __int64 *)((char *)a1 + (result[1] & 0x7F8));
    result[1] = v31;
    v32 = v28 + *(unsigned __int64 *)((char *)a1 + ((v31 >> 8) & 0x7F8));
    v23[1] = v32;
    v33 = result[2];
    v34 = *(result - 126) + v30;
    v35 = v32 + v34 + *(unsigned __int64 *)((char *)a1 + (result[2] & 0x7F8));
    result[2] = v35;
    v36 = *(unsigned __int64 *)((char *)a1 + ((v35 >> 8) & 0x7F8)) + v33;
    v23[2] = v36;
    v37 = result[3];
    v3 = *(result - 125) + ((v34 >> 33) ^ v34);
    v38 = v36 + v3 + *(unsigned __int64 *)((char *)a1 + (result[3] & 0x7F8));
    result += 4;
    v23 += 4;
    *(result - 1) = v38;
    v7 = v37 + *(unsigned __int64 *)((char *)a1 + ((v38 >> 8) & 0x7F8));
    *(v23 - 1) = v7;
  }
  while ( result != a1 + 256 );
  a1[256] = v3;
  a1[257] = v7;
  return result;
}

unsigned __int64 __fastcall sub_412510(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // r11
  __int64 v6; // r12
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r11
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rbx
  unsigned __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // r10
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r11
  __int64 v34; // rsi
  unsigned __int64 v35; // rbx
  unsigned __int64 result; // rax
  __int64 v37; // r12

  v1 = a1;
  v2 = a1;
  v3 = -7424904924229222229LL;
  v4 = -9011610652101975858LL;
  v5 = -5576812576440232668LL;
  v6 = -5865837416287532563LL;
  v7 = -8354558816804203872LL;
  v8 = -5046086420515862430LL;
  v9 = (__int64)(a1 + 256);
  v10 = 7240739780546808700LL;
  v11 = 5259722845879046933LL;
  do
  {
    v12 = v2[4] + v4;
    v13 = v2[7] + v3;
    v14 = *v2 - v12 + v10;
    v15 = (v13 >> 9) ^ (v2[5] + v11);
    v16 = v2[1] - v15 + v8;
    v17 = (v14 << 9) ^ (v2[6] + v6);
    v18 = v2[2] - v17 + v7;
    v19 = (v16 >> 23) ^ (v14 + v13);
    v20 = v2[3] - v19 + v5;
    v10 = (v18 << 15) ^ (v16 + v14);
    v21 = v12 - v10;
    *v2 = v10;
    v8 = (v20 >> 14) ^ (v18 + v16);
    v22 = v15 - v8;
    v2[1] = v8;
    v7 = (v21 << 20) ^ (v20 + v18);
    v23 = v21 + v22;
    v24 = v17 - v7;
    v2[2] = v7;
    v2 += 8;
    v5 = (v22 >> 17) ^ (v21 + v20);
    v11 = v24 + v22;
    v3 = v19 - v5;
    *(v2 - 5) = v5;
    v4 = v23 ^ (v24 << 14);
    v6 = v3 + v24;
    *(v2 - 3) = v11;
    *(v2 - 4) = v4;
    *(v2 - 2) = v6;
    *(v2 - 1) = v3;
  }
  while ( (__int64 *)v9 != v2 );
  do
  {
    v25 = v1[7] + v3;
    v26 = v1[4] + v4;
    v27 = *v1 + v10 - v26;
    v28 = (v25 >> 9) ^ (v1[5] + v11);
    v29 = v1[1] + v8 - v28;
    v30 = (v27 << 9) ^ (v1[6] + v6);
    v31 = v1[2] + v7 - v30;
    v32 = (v29 >> 23) ^ (v27 + v25);
    v33 = v1[3] + v5 - v32;
    v10 = (v31 << 15) ^ (v29 + v27);
    v34 = v26 - v10;
    *v1 = v10;
    v8 = (v33 >> 14) ^ (v31 + v29);
    v35 = v28 - v8;
    v1[1] = v8;
    v7 = (v34 << 20) ^ (v33 + v31);
    result = v34 + v35;
    v37 = v30 - v7;
    v1[2] = v7;
    v1 += 8;
    v5 = (v35 >> 17) ^ (v34 + v33);
    v11 = v37 + v35;
    v3 = v32 - v5;
    *(v1 - 5) = v5;
    v4 = result ^ (v37 << 14);
    v6 = v3 + v37;
    *(v1 - 3) = v11;
    *(v1 - 4) = v4;
    *(v1 - 2) = v6;
    *(v1 - 1) = v3;
  }
  while ( (_QWORD *)v9 != v1 );
  a1[258] = 0LL;
  a1[257] = 0LL;
  a1[256] = 0LL;
  return result;
}

__int64 __fastcall sub_412750(char a1)
{
  return sub_4103E0(a1, 0, 3LL);
}

int __fastcall sub_412760(FILE *stream)
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
  if ( !sub_410520(stream) )
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

FILE *__fastcall sub_4127E0(const char *a1, const char *a2)
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
      v6 = sub_412750(v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_412760(v11);
        *v13 = v12;
      }
      else if ( sub_412760(v3) || (v3 = fdopen(v6, a2)) == 0LL )
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_4128F0(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_61B3A8 )
    v1 = (void *)unk_61B3A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_412908(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_61AE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
