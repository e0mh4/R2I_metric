#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char **v3; // rbx@1
  char *v4; // rax@1
  char *v5; // r12@1
  char *v6; // r14@1
  char *v7; // r15@1
  char v8; // r13@1
  int v9; // eax@2
  __int64 v10; // rax@30
  __int64 v11; // rax@32
  char **v12; // rax@43
  char *v13; // rax@43
  char *v14; // rax@47
  const char *v15; // rsi@52
  char *v16; // rax@54
  int v17; // eax@54
  __int64 result; // rax@63
  char *v19; // rax@70
  char *v20; // rax@76
  char *v21; // rax@85
  int *v22; // rax@87
  int *v23; // rbx@87
  __int64 v24; // rax@87
  __int64 v25; // rbp@87
  char *v26; // rax@87
  char *v27; // rax@88
  __int64 v28; // rax@89
  __int64 v29; // rbp@89
  char *v30; // rbx@89
  int *v31; // rax@89
  char *v32; // rax@90
  char v33; // [sp+6h] [bp-122h]@1
  char v34; // [sp+7h] [bp-121h]@1
  char *v35; // [sp+8h] [bp-120h]@1
  int v36; // [sp+10h] [bp-118h]@1
  int v37; // [sp+14h] [bp-114h]@1
  __int64 v38; // [sp+18h] [bp-110h]@1
  __int64 v39; // [sp+20h] [bp-108h]@1
  __int16 v40; // [sp+28h] [bp-100h]@1
  int v41; // [sp+2Ch] [bp-FCh]@1
  __int64 v42; // [sp+30h] [bp-F8h]@1
  __int64 v43; // [sp+38h] [bp-F0h]@1
  bool v44; // [sp+40h] [bp-E8h]@1
  int v45; // [sp+44h] [bp-E4h]@1
  __int64 v46; // [sp+48h] [bp-E0h]@1
  __int64 v47; // [sp+50h] [bp-D8h]@1
  struct stat stat_buf; // [sp+60h] [bp-C8h]@41

  v3 = a2;
  sub_40C3A0(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_4128F0(
    sub_40A800,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  byte_61B4CA = 0;
  sub_405170(&v36);
  v38 = 8589934596LL;
  v45 = 0;
  v37 = 1;
  v39 = 0x100000000LL;
  v40 = 0;
  v41 = 0;
  v42 = 0x1000000LL;
  v43 = 0LL;
  v4 = getenv("POSIXLY_CORRECT");
  v33 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v35 = 0LL;
  v34 = 0;
  v44 = v4 != 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  while ( 2 )
  {
    v9 = sub_411340(a1, v3, "abdfHilLnprst:uvxPRS:TZ", &off_413540, 0LL);
    if ( v9 != -1 )
    {
      switch ( v9 + 131 )
      {
        case 263:
          if ( !filename )
            goto LABEL_5;
          sub_403280(filename, &v36, 1LL);
          BYTE4(v42) = 1;
          continue;
        case 243:
LABEL_5:
          BYTE1(v41) = 1;
          HIWORD(v41) = 257;
          BYTE4(v42) = 1;
          continue;
        case 241:
          LODWORD(v38) = 2;
          continue;
        case 239:
          BYTE7(v39) = 1;
          continue;
        case 236:
          LODWORD(v38) = 3;
          continue;
        case 233:
          BYTE6(v39) = 1;
          continue;
        case 231:
          BYTE2(v42) = 1;
          v37 = 2;
          continue;
        case 229:
          v8 = 1;
          if ( filename )
            v6 = filename;
          continue;
        case 228:
          v37 = 2;
          BYTE2(v42) = 1;
          BYTE1(v41) = 1;
          HIWORD(v41) = 257;
          BYTE4(v42) = 1;
          if ( byte_61B4CA )
            BYTE5(v42) = 1;
          BYTE7(v42) = 1;
          *(_WORD *)((char *)&v43 + 1) = 257;
          continue;
        case 221:
          if ( byte_61B4CA )
          {
            if ( filename )
              v35 = filename;
            else
              BYTE1(v42) = 1;
          }
          else if ( filename )
          {
            v14 = dcgettext(0LL, "warning: ignoring --context; it requires an SELinux-enabled kernel", 5);
            error(0, 0, v14);
          }
          continue;
        case 215:
          v33 = 1;
          continue;
        case 214:
          v7 = filename;
          v8 = 1;
          continue;
        case 213:
        case 245:
          BYTE2(v43) = 1;
          continue;
        case 211:
          v37 = 2;
          continue;
        case 207:
          v37 = 4;
          continue;
        case 203:
          v37 = 3;
          continue;
        case 0:
          sub_40FF60((char)stdout);
          exit(0);
          return result;
        case 267:
          BYTE5(v39) = 1;
          continue;
        case 266:
          byte_61B4C8 = 1;
          continue;
        case 265:
          LODWORD(v10) = sub_409FF0("--sparse", filename, off_413940, dword_413928, 4LL, off_61B3C8);
          HIDWORD(v38) = dword_413928[v10];
          continue;
        case 264:
          if ( filename )
          {
            LODWORD(v11) = sub_409FF0("--reflink", filename, off_413910, dword_413900, 4LL, off_61B3C8);
            v45 = dword_413900[v11];
          }
          else
          {
            v45 = 2;
          }
          continue;
        case 262:
          byte_61B4C9 = 1;
          continue;
        case 261:
          sub_403280(filename, &v36, 0LL);
          continue;
        case 260:
          v34 = 1;
          continue;
        case 259:
          BYTE3(v42) = 0;
          continue;
        case 251:
          LOBYTE(v41) = 1;
          continue;
        case 249:
          BYTE6(v43) = 1;
          continue;
        case 248:
          BYTE5(v43) = 1;
          continue;
        case 247:
          if ( v5 )
            goto LABEL_90;
          if ( __xstat(1, filename, &stat_buf) )
            goto LABEL_89;
          v5 = filename;
          if ( (stat_buf.st_mode & 0xF000) == 0x4000 )
            continue;
          LODWORD(v12) = sub_40DDD0(4LL, filename);
          v3 = v12;
          v13 = dcgettext(0LL, "target %s is not a directory", 5);
          error(1, 0, v13, v3);
          goto LABEL_44;
        case 246:
LABEL_44:
          BYTE4(v43) = 1;
          continue;
        case 1:
          sub_403C80(0);
          return result;
        default:
          break;
      }
LABEL_86:
      sub_403C80(1);
    }
    break;
  }
  if ( BYTE7(v39) && BYTE4(v43) )
  {
    v15 = "cannot make both hard and symbolic links";
    goto LABEL_85;
  }
  if ( v8 )
  {
    v15 = "options --backup and --no-clobber are mutually exclusive";
    if ( (_DWORD)v38 == 2 )
    {
LABEL_85:
      v21 = dcgettext(0LL, v15, 5);
      error(0, 0, v21);
      goto LABEL_86;
    }
    if ( v45 == 2 && HIDWORD(v38) != 2 )
    {
LABEL_82:
      v15 = "--reflink can be used only with --sparse=auto";
      goto LABEL_85;
    }
    v16 = dcgettext(0LL, "backup type", 5);
    v17 = sub_40A730(v16, v6);
  }
  else if ( v45 == 2 )
  {
    if ( HIDWORD(v38) != 2 )
      goto LABEL_82;
    v17 = 0;
  }
  else
  {
    v17 = 0;
  }
  v36 = v17;
  sub_40A180(v7);
  if ( v37 == 1 )
    goto LABEL_71;
LABEL_56:
  if ( BYTE2(v43) )
    goto LABEL_74;
  while ( 1 )
  {
    if ( !BYTE1(v42) && !v35 )
    {
      if ( !BYTE6(v42) || byte_61B4CA )
        goto LABEL_62;
      goto LABEL_70;
    }
    if ( !BYTE6(v42) )
      break;
    if ( BYTE5(v42) )
    {
      v20 = dcgettext(0LL, "cannot set target context and preserve it", 5);
      error(1, 0, v20);
      goto LABEL_77;
    }
    if ( byte_61B4CA )
      goto LABEL_61;
LABEL_70:
    v19 = dcgettext(0LL, "cannot preserve security context without an SELinux-enabled kernel", 5);
    error(1, 0, v19);
LABEL_71:
    if ( !BYTE2(v43) || BYTE7(v39) )
    {
LABEL_77:
      v37 = 4;
      goto LABEL_56;
    }
    v37 = 2;
LABEL_74:
    BYTE4(v39) = v34;
  }
  BYTE5(v42) = 0;
LABEL_61:
  if ( v35 )
  {
    v22 = __errno_location();
    *v22 = 95;
    v23 = v22;
    LODWORD(v24) = sub_40E020(v35);
    v25 = v24;
    v26 = dcgettext(0LL, "failed to set default file creation context to %s", 5);
    error(1, *v23, v26, v25);
    goto LABEL_88;
  }
LABEL_62:
  if ( (_BYTE)v43 )
  {
LABEL_88:
    v27 = dcgettext(0LL, "cannot preserve extended attributes, cp is built without xattr support", 5);
    error(1, 0, v27);
LABEL_89:
    LODWORD(v28) = sub_40DDD0(4LL, filename);
    v29 = v28;
    v30 = dcgettext(0LL, "failed to access %s", 5);
    v31 = __errno_location();
    error(1, *v31, v30, v29);
LABEL_90:
    v32 = dcgettext(0LL, "multiple target directories specified", 5);
    error(1, 0, v32);
    start();
  }
  sub_409500();
  return (unsigned __int8)(sub_4041B0(a1 - dword_61B43C, &v3[dword_61B43C], v5, (unsigned __int8)v33, &v36) ^ 1);
}

int sub_4031CB()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_4031EA()
{
  return 0;
}

int sub_403221()
{
  int result; // eax@4

  if ( !byte_61B468 )
  {
    while ( qword_61B470 < (unsigned __int64)(((&unk_61AE48 - (_UNKNOWN *)&qword_61AE40) >> 3) - 1) )
      (*(&qword_61AE40 + ++qword_61B470))();
    result = sub_4031CB();
    byte_61B468 = 1;
  }
  return result;
}

int sub_403278()
{
  return sub_4031EA();
}

void __fastcall sub_403280(__int64 a1, __int64 a2, char a3)
{
  const char *v3; // r13@1
  char v4; // bp@1
  char v5; // bl@1
  void *v6; // rax@1
  void *v7; // r14@1
  const char *v8; // rbx@3
  signed __int64 v9; // r15@4
  char *v10; // rax@4
  __int64 v11; // rax@6
  bool v12; // zf@15

  v3 = "--preserve";
  v4 = a3;
  v5 = a3;
  LODWORD(v6) = sub_410310();
  v7 = v6;
  if ( !v5 )
    v3 = "--no-preserve";
  v8 = (const char *)v6;
  do
  {
    v9 = 0LL;
    v10 = strchr(v8, 44);
    if ( v10 )
    {
      *v10 = 0;
      v9 = (signed __int64)(v10 + 1);
    }
    LODWORD(v11) = sub_409FF0(v3, v8, off_413500, &dword_4134E0, 4LL, off_61B3C8);
    switch ( v11 )
    {
      case 5LL:
        *(_BYTE *)(a2 + 39) = v4;
        *(_BYTE *)(a2 + 40) = v4;
        break;
      case 4LL:
        *(_BYTE *)(a2 + 38) = v4;
        *(_BYTE *)(a2 + 37) = v4;
        break;
      case 3LL:
        *(_BYTE *)(a2 + 34) = v4;
        break;
      case 2LL:
        *(_BYTE *)(a2 + 29) = v4;
        break;
      case 1LL:
        *(_BYTE *)(a2 + 31) = v4;
        break;
      case 0LL:
      case 7LL:
        *(_BYTE *)(a2 + 30) = v4;
        *(_BYTE *)(a2 + 32) = v4 ^ 1;
        break;
      case 6LL:
        *(_BYTE *)(a2 + 30) = v4;
        v12 = byte_61B4CA == 0;
        *(_BYTE *)(a2 + 31) = v4;
        *(_BYTE *)(a2 + 29) = v4;
        *(_BYTE *)(a2 + 34) = v4;
        *(_BYTE *)(a2 + 32) = v4 ^ 1;
        if ( !v12 )
          *(_BYTE *)(a2 + 37) = v4;
        *(_BYTE *)(a2 + 39) = v4;
        break;
      default:
        abort();
        return;
    }
    v8 = (const char *)v9;
  }
  while ( v9 );
  free(v7);
}

void __fastcall sub_403280(__int64 a1, __int64 a2, char a3)
{
  const char *v3; // r13@1
  char v4; // bp@1
  char v5; // bl@1
  void *v6; // rax@1
  void *v7; // r14@1
  const char *v8; // rbx@3
  signed __int64 v9; // r15@4
  char *v10; // rax@4
  __int64 v11; // rax@6
  bool v12; // zf@15

  v3 = "--preserve";
  v4 = a3;
  v5 = a3;
  LODWORD(v6) = sub_410310();
  v7 = v6;
  if ( !v5 )
    v3 = "--no-preserve";
  v8 = (const char *)v6;
  do
  {
    v9 = 0LL;
    v10 = strchr(v8, 44);
    if ( v10 )
    {
      *v10 = 0;
      v9 = (signed __int64)(v10 + 1);
    }
    LODWORD(v11) = sub_409FF0(v3, v8, off_413500, &dword_4134E0, 4LL, off_61B3C8);
    switch ( v11 )
    {
      case 5LL:
        *(_BYTE *)(a2 + 39) = v4;
        *(_BYTE *)(a2 + 40) = v4;
        break;
      case 4LL:
        *(_BYTE *)(a2 + 38) = v4;
        *(_BYTE *)(a2 + 37) = v4;
        break;
      case 3LL:
        *(_BYTE *)(a2 + 34) = v4;
        break;
      case 2LL:
        *(_BYTE *)(a2 + 29) = v4;
        break;
      case 1LL:
        *(_BYTE *)(a2 + 31) = v4;
        break;
      case 0LL:
      case 7LL:
        *(_BYTE *)(a2 + 30) = v4;
        *(_BYTE *)(a2 + 32) = v4 ^ 1;
        break;
      case 6LL:
        *(_BYTE *)(a2 + 30) = v4;
        v12 = byte_61B4CA == 0;
        *(_BYTE *)(a2 + 31) = v4;
        *(_BYTE *)(a2 + 29) = v4;
        *(_BYTE *)(a2 + 34) = v4;
        *(_BYTE *)(a2 + 32) = v4 ^ 1;
        if ( !v12 )
          *(_BYTE *)(a2 + 37) = v4;
        *(_BYTE *)(a2 + 39) = v4;
        break;
      default:
        abort();
        return;
    }
    v8 = (const char *)v9;
  }
  while ( v9 );
  free(v7);
}

__int64 __fastcall sub_4033E0(char *filename, struct stat *stat_buf, _BYTE *a3)
{
  _BYTE *v3; // r13@1
  int v4; // eax@1
  __int64 result; // rax@3
  int v6; // er12@5
  __int64 v7; // rax@10
  __int64 v8; // rbx@10
  char *v9; // rax@10

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
      LODWORD(v7) = sub_40DDD0(4LL, filename);
      v8 = v7;
      v9 = dcgettext(0LL, "failed to access %s", 5);
      error(1, v6, v9, v8);
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
  __int64 v6; // r13@1
  size_t v7; // rax@1
  void *v8; // rsp@1
  void *v9; // rax@1
  const void *v10; // r12@1
  size_t v11; // rax@1
  size_t v12; // r14@1
  void *v13; // rsp@1
  _QWORD *v14; // rax@1
  char *v15; // rdi@2
  bool v16; // zf@2
  char *v17; // rax@4
  char *v18; // rbx@4
  int v19; // er14@5
  char *v20; // rsi@14
  int v21; // er8@15
  __int64 v22; // rax@16
  __m128i v23; // xmm1@16
  __m128i v24; // xmm2@16
  __m128i v25; // xmm3@16
  __int64 v26; // r15@16
  __m128i v27; // xmm4@16
  __m128i v28; // xmm5@16
  __m128i v29; // xmm6@16
  __m128i v30; // xmm7@16
  __m128i v31; // xmm0@16
  __int64 *v32; // rcx@16
  __int64 v33; // rax@16
  int v34; // esi@18
  int v35; // er14@19
  signed __int16 v36; // ax@19
  __mode_t v37; // esi@26
  __int64 v38; // rax@36
  __int64 v39; // rbx@36
  char *v40; // rax@36
  __int64 result; // rax@36
  int v42; // eax@43
  __mode_t v43; // eax@43
  unsigned __int64 v44; // rsi@49
  __int64 v45; // rax@50
  __int64 v46; // rbx@50
  char *v47; // rax@50
  __int64 v48; // rax@53
  const char *v49; // rsi@53
  __int64 v50; // r12@53
  char *v51; // rbx@54
  int *v52; // rax@54
  __int64 v53; // rax@55
  __int64 v54; // rax@56
  __int64 v55; // [sp+0h] [bp-170h]@1
  _QWORD *v56; // [sp+8h] [bp-168h]@1
  int errnum[2]; // [sp+10h] [bp-160h]@1
  char *filename; // [sp+18h] [bp-158h]@2
  struct stat stat_buf; // [sp+20h] [bp-150h]@1
  struct stat v60; // [sp+B0h] [bp-C0h]@14

  v6 = a6;
  v56 = (_QWORD *)a4;
  *(_QWORD *)errnum = a5;
  v55 = a3;
  v7 = strlen((const char *)src);
  v8 = alloca(v7 + 9);
  v9 = memcpy((void *)(((unsigned __int64)&v56 + 7) & 0xFFFFFFFFFFFFFFF0LL), src, v7 + 1);
  v10 = v9;
  LODWORD(v11) = sub_40AA80(v9, src);
  v12 = v11;
  v13 = alloca(v11 + 9);
  memcpy((void *)(((unsigned __int64)&v56 + 7) & 0xFFFFFFFFFFFFFFF0LL), v10, v11);
  v14 = v56;
  *(_BYTE *)((((unsigned __int64)&v56 + 7) & 0xFFFFFFFFFFFFFFF0LL) + v12) = 0;
  *v14 = 0LL;
  if ( __xstat(1, (const char *)(((unsigned __int64)&v56 + 7) & 0xFFFFFFFFFFFFFFF0LL), &stat_buf) )
  {
    v15 = (char *)v10 + a2;
    v16 = *((_BYTE *)v10 + a2) == 47;
    filename = (char *)v10 + a2;
    if ( v16 )
    {
      do
        ++v15;
      while ( *v15 == 47 );
    }
    else
    {
      v15 = filename;
    }
    while ( 1 )
    {
      v17 = strchr(v15, 47);
      v18 = v17;
      if ( !v17 )
        goto LABEL_47;
      *v17 = 0;
      v19 = __xstat(1, (const char *)v10, &stat_buf);
      if ( v19 || *(_DWORD *)(v6 + 28) & 0xFFFFFF00 )
      {
        v20 = filename;
        if ( __xstat(1, filename, &v60) )
        {
          v21 = *__errno_location();
          if ( v21 )
            goto LABEL_36;
        }
        else if ( (v60.st_mode & 0xF000) != 0x4000 )
        {
          v21 = 20;
LABEL_36:
          errnum[0] = v21;
          LODWORD(v38) = sub_40DDD0(4LL, filename);
          v39 = v38;
          v40 = dcgettext(0LL, "failed to get attributes of %s", 5);
          error(0, errnum[0], v40, v39, v55);
          return 0LL;
        }
        LODWORD(v22) = sub_4100E0(168LL, v20);
        v23 = _mm_load_si128((const __m128i *)&v60.st_nlink);
        v24 = _mm_load_si128((const __m128i *)&v60.st_gid);
        v25 = _mm_load_si128((const __m128i *)&v60.st_size);
        v26 = v22;
        *(__m128i *)v22 = _mm_load_si128((const __m128i *)&v60);
        v27 = _mm_load_si128((const __m128i *)&v60.st_blocks);
        v28 = _mm_load_si128((const __m128i *)&v60.st_atim.tv_nsec);
        v29 = _mm_load_si128((const __m128i *)&v60.st_mtim.tv_nsec);
        v30 = _mm_load_si128((const __m128i *)&v60.st_ctim.tv_nsec);
        *(__m128i *)(v22 + 16) = v23;
        v31 = _mm_load_si128((const __m128i *)&v60.__unused[1]);
        *(__m128i *)(v22 + 32) = v24;
        v32 = v56;
        *(__m128i *)(v22 + 48) = v25;
        *(__m128i *)(v22 + 64) = v27;
        *(__m128i *)(v22 + 80) = v28;
        *(__m128i *)(v22 + 96) = v29;
        *(__m128i *)(v22 + 112) = v30;
        *(__m128i *)(v22 + 128) = v31;
        *(_BYTE *)(v22 + 144) = 0;
        *(_QWORD *)(v22 + 152) = v18 - (_BYTE *)v10;
        v33 = *v32;
        *v32 = v26;
        *(_QWORD *)(v26 + 160) = v33;
        if ( v19 )
          break;
      }
      if ( !(unsigned __int8)sub_404FC0(filename, v10, 0LL, 0LL, v6) )
        return 0LL;
      if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      {
        v44 = (unsigned __int64)v10;
        goto LABEL_50;
      }
      **(_BYTE **)errnum = 0;
LABEL_10:
      if ( *(_QWORD *)(v6 + 32) & 0xFF000000FF00LL
        && !(unsigned __int8)sub_405090(v10, *(_BYTE *)(v6 + 37), 0LL, v6)
        && *(_BYTE *)(v6 + 38) )
      {
        return 0LL;
      }
LABEL_11:
      v16 = v18[1] == 47;
      v15 = v18 + 1;
      *v18 = 47;
      if ( v16 )
      {
        do
          ++v15;
        while ( *v15 == 47 );
      }
    }
    if ( !(unsigned __int8)sub_404FC0(filename, v10, *(_DWORD *)(v26 + 24), 1LL, v6) )
      return 0LL;
    v34 = *(_DWORD *)(v26 + 24);
    **(_BYTE **)errnum = 1;
    if ( *(_BYTE *)(v6 + 29) )
    {
      v35 = v34 & 0x3F;
      v36 = ~(v34 & 0x3F);
    }
    else
    {
      v35 = 0;
      v36 = -1;
      if ( *(_BYTE *)(v6 + 30) )
      {
        v35 = v34 & 0x12;
        v36 = ~(v34 & 0x12);
      }
    }
    if ( *(_BYTE *)(v6 + 32) )
      LOWORD(v34) = 511;
    if ( mkdir((const char *)v10, (unsigned __int16)v36 & (unsigned __int16)v34 & 0xFFF) )
    {
      LODWORD(v53) = sub_40DDD0(4LL, v10);
      v49 = "cannot make directory %s";
      v50 = v53;
      goto LABEL_54;
    }
    if ( v55 )
      __printf_chk(1LL, v55, filename, v10);
    if ( __lxstat(1, (const char *)v10, &stat_buf) )
    {
      LODWORD(v48) = sub_40DDD0(4LL, v10);
      v49 = "failed to get attributes of %s";
      v50 = v48;
LABEL_54:
      v51 = dcgettext(0LL, v49, 5);
      v52 = __errno_location();
      error(0, *v52, v51, v50, v55);
      return 0LL;
    }
    v37 = stat_buf.st_mode;
    if ( !*(_BYTE *)(v6 + 30) )
    {
      if ( v35 & ~stat_buf.st_mode
        && (v42 = sub_4053D0(1LL), v37 = stat_buf.st_mode, v35 &= ~v42, v43 = stat_buf.st_mode, v35 & ~stat_buf.st_mode) )
      {
        *(_BYTE *)(v26 + 144) = 1;
        *(_DWORD *)(v26 + 24) = v43 | v35;
      }
      else
      {
        if ( (v37 & 0x1C0) == 448 )
          goto LABEL_32;
        *(_BYTE *)(v26 + 144) = 1;
        *(_DWORD *)(v26 + 24) = v37 | v35;
      }
    }
    if ( (v37 & 0x1C0) != 448 && chmod((const char *)v10, v37 | 0x1C0) )
    {
      LODWORD(v54) = sub_40DDD0(4LL, v10);
      v49 = "setting permissions for %s";
      v50 = v54;
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
    v44 = ((unsigned __int64)&v56 + 7) & 0xFFFFFFFFFFFFFFF0LL;
LABEL_50:
    LODWORD(v45) = sub_40DDD0(4LL, v44);
    v46 = v45;
    v47 = dcgettext(0LL, "%s exists but is not a directory", 5);
    error(0, 0, v47, v46, v55);
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_403A50(void *src, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13@1
  __int64 v5; // rbx@1
  size_t v6; // rax@1
  void *v7; // rsp@1
  char *v8; // rax@1
  char *v9; // r15@1
  char *v10; // r12@2
  int v11; // er14@4
  bool v12; // zf@7
  __int64 v13; // rdx@8
  __int64 v14; // rax@8
  __int64 v15; // rax@9
  __int64 v16; // r12@9
  char *v17; // rbx@9
  int *v18; // rax@9
  __int64 v19; // rax@16
  const char *v20; // rsi@16
  __int64 v21; // r12@16
  char *v22; // rbx@17
  int *v23; // rax@17
  __int64 v25; // rax@20
  __int64 v26; // [sp+0h] [bp-50h]@0
  __int64 v27; // [sp+8h] [bp-48h]@8
  __int64 v28; // [sp+8h] [bp-48h]@17
  __int64 v29; // [sp+10h] [bp-40h]@8
  __int64 v30; // [sp+18h] [bp-38h]@8

  v4 = a4;
  v5 = a3;
  v6 = strlen((const char *)src);
  v7 = alloca(v6 + 9);
  v8 = (char *)memcpy((void *)(((unsigned __int64)&v27 + 7) & 0xFFFFFFFFFFFFFFF0LL), src, v6 + 1);
  v9 = &v8[a2];
  if ( !v5 )
LABEL_18:
    return 1;
  v10 = v8;
  while ( 1 )
  {
    v12 = *(_BYTE *)(v4 + 31) == 0;
    v10[*(_QWORD *)(v5 + 152)] = 0;
    if ( !v12 )
    {
      v26 = *(_QWORD *)(v5 + 72);
      v13 = *(_QWORD *)(v5 + 88);
      v27 = *(_QWORD *)(v5 + 80);
      v14 = *(_QWORD *)(v5 + 96);
      v29 = v13;
      v30 = v14;
      if ( (unsigned int)sub_40F8A0(v10) )
      {
        v11 = 0;
        LODWORD(v15) = sub_40DDD0(4LL, v10);
        v16 = v15;
        v17 = dcgettext(0LL, "failed to preserve times for %s", 5);
        v18 = __errno_location();
        error(0, *v18, v17, v16, v26);
        return (unsigned int)v11;
      }
    }
    if ( !*(_BYTE *)(v4 + 29) || !lchown(v10, *(_DWORD *)(v5 + 28), *(_DWORD *)(v5 + 32)) )
    {
      v11 = *(_BYTE *)(v4 + 30);
      if ( (_BYTE)v11 )
        goto LABEL_13;
      goto LABEL_5;
    }
    v11 = sub_4051B0(v4);
    if ( !(_BYTE)v11 )
      break;
    lchown(v10, 0xFFFFFFFF, *(_DWORD *)(v5 + 32));
    v11 = *(_BYTE *)(v4 + 30);
    if ( (_BYTE)v11 )
    {
LABEL_13:
      if ( sub_409B40(v9, 0xFFFFFFFFLL, v10, 0xFFFFFFFFLL, *(_DWORD *)(v5 + 24)) )
        return 0;
      goto LABEL_6;
    }
LABEL_5:
    if ( *(_BYTE *)(v5 + 144) && chmod(v10, *(_DWORD *)(v5 + 24)) )
    {
      LODWORD(v19) = sub_40DDD0(4LL, v10);
      v20 = "failed to preserve permissions for %s";
      v21 = v19;
      goto LABEL_17;
    }
LABEL_6:
    v10[*(_QWORD *)(v5 + 152)] = 47;
    v5 = *(_QWORD *)(v5 + 160);
    if ( !v5 )
      goto LABEL_18;
  }
  LODWORD(v25) = sub_40DDD0(4LL, v10);
  v20 = "failed to preserve ownership for %s";
  v21 = v25;
LABEL_17:
  v22 = dcgettext(0LL, v20, 5);
  v23 = __errno_location();
  error(0, *v23, v22, v21, v26, v28);
  return (unsigned int)v11;
}

noreturn void __fastcall  sub_403C80(int status)
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
  char *v51; // rax@11
  char *v52; // r12@13
  char *v53; // rax@13
  char *v54; // rax@15
  char *v55; // rax@16
  char *v56; // rax@16
  char *v57; // rax@18
  char *v58; // rax@20
  __int64 v59; // rcx@20
  const char *v60; // [sp+0h] [bp-88h]@4
  const char *v61; // [sp+8h] [bp-80h]@4
  const char *v62; // [sp+10h] [bp-78h]@4
  const char *v63; // [sp+18h] [bp-70h]@4
  const char *v64; // [sp+20h] [bp-68h]@4
  const char *v65; // [sp+28h] [bp-60h]@4
  const char *v66; // [sp+30h] [bp-58h]@4
  const char *v67; // [sp+38h] [bp-50h]@4
  const char *v68; // [sp+40h] [bp-48h]@4
  const char *v69; // [sp+48h] [bp-40h]@4
  const char *v70; // [sp+50h] [bp-38h]@4
  const char *v71; // [sp+58h] [bp-30h]@4
  __int64 v72; // [sp+60h] [bp-28h]@4
  __int64 v73; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_61B920;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(
         0LL,
         "Usage: %s [OPTION]... [-T] SOURCE DEST\n"
         "  or:  %s [OPTION]... SOURCE... DIRECTORY\n"
         "  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n",
         5);
  __printf_chk(1LL, v4, v2, v2);
  v5 = stdout;
  v6 = dcgettext(0LL, "Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "  -a, --archive                same as -dR --preserve=all\n"
          "      --attributes-only        don't copy the file data, just the attributes\n"
          "      --backup[=CONTROL]       make a backup of each existing destination file\n"
          "  -b                           like --backup but does not accept an argument\n"
          "      --copy-contents          copy contents of special files when recursive\n"
          "  -d                           same as --no-dereference --preserve=links\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "  -f, --force                  if an existing destination file cannot be\n"
          "                                 opened, remove it and try again (this option\n"
          "                                 is ignored when the -n option is also used)\n"
          "  -i, --interactive            prompt before overwrite (overrides a previous -n\n"
          "                                  option)\n"
          "  -H                           follow command-line symbolic links in SOURCE\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "  -l, --link                   hard link files instead of copying\n"
          "  -L, --dereference            always follow symbolic links in SOURCE\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "  -n, --no-clobber             do not overwrite an existing file (overrides\n"
          "                                 a previous -i option)\n"
          "  -P, --no-dereference         never follow symbolic links in SOURCE\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "  -p                           same as --preserve=mode,ownership,timestamps\n"
          "      --preserve[=ATTR_LIST]   preserve the specified attributes (default:\n"
          "                                 mode,ownership,timestamps), if possible\n"
          "                                 additional attributes: context, links, xattr,\n"
          "                                 all\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "      --no-preserve=ATTR_LIST  don't preserve the specified attributes\n"
          "      --parents                use full source file name under DIRECTORY\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "  -R, -r, --recursive          copy directories recursively\n"
          "      --reflink[=WHEN]         control clone/CoW copies. See below\n"
          "      --remove-destination     remove each existing destination file before\n"
          "                                 attempting to open it (contrast with --force)\n",
          5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "      --sparse=WHEN            control creation of sparse files. See below\n"
          "      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n"
          "                                 argument\n",
          5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(
          0LL,
          "  -s, --symbolic-link          make symbolic links instead of copying\n"
          "  -S, --suffix=SUFFIX          override the usual backup suffix\n"
          "  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n"
          "  -T, --no-target-directory    treat DEST as a normal file\n",
          5);
  fputs_unlocked(v26, v25);
  v27 = stdout;
  v28 = dcgettext(
          0LL,
          "  -u, --update                 copy only when the SOURCE file is newer\n"
          "                                 than the destination file or when the\n"
          "                                 destination file is missing\n"
          "  -v, --verbose                explain what is being done\n"
          "  -x, --one-file-system        stay on this file system\n",
          5);
  fputs_unlocked(v28, v27);
  v29 = stdout;
  v30 = dcgettext(
          0LL,
          "  -Z                           set SELinux security context of destination\n"
          "                                 file to default type\n"
          "      --context[=CTX]          like -Z, or if CTX is specified then set the\n"
          "                                 SELinux or SMACK security context to CTX\n",
          5);
  fputs_unlocked(v30, v29);
  v31 = stdout;
  v32 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v32, v31);
  v33 = stdout;
  v34 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v34, v33);
  v35 = stdout;
  v36 = dcgettext(
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
  fputs_unlocked(v36, v35);
  v37 = stdout;
  v38 = dcgettext(
          0LL,
          "\n"
          "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
          "The version control method may be selected via the --backup option or through\n"
          "the VERSION_CONTROL environment variable.  Here are the values:\n"
          "\n",
          5);
  fputs_unlocked(v38, v37);
  v39 = stdout;
  v40 = dcgettext(
          0LL,
          "  none, off       never make backups (even if --backup is given)\n"
          "  numbered, t     make numbered backups\n"
          "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
          "  simple, never   always make simple backups\n",
          5);
  fputs_unlocked(v40, v39);
  v41 = stdout;
  v42 = dcgettext(
          0LL,
          "\n"
          "As a special case, cp makes a backup of SOURCE when the force and backup\n"
          "options are given and SOURCE and DEST are the same name for an existing,\n"
          "regular file.\n",
          5);
  fputs_unlocked(v42, v41);
  v60 = "[";
  v43 = (__int64 *)&v60;
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
  {
    v43 += 2;
    v44 = (_BYTE *)*v43;
    v45 = 0;
    v46 = *v43 == 0;
    if ( !*v43 )
      break;
    v47 = "cp";
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
    __printf_chk(1LL, v50, &unk_412A1E, "https://www.gnu.org/software/coreutils/");
    v51 = setlocale(5, 0LL);
    if ( !v51 || !strncmp(v51, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v55 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v55, &unk_412A1E, "https://www.gnu.org/software/coreutils/");
    v56 = setlocale(5, 0LL);
    if ( !v56 || !strncmp(v56, "en_", 3uLL) )
    {
      v49 = "cp";
      v57 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v52 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v57, "https://www.gnu.org/software/coreutils/", "cp");
LABEL_15:
      v54 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v54, v49, v52);
LABEL_3:
      exit(v1);
    }
    v49 = "cp";
  }
  v58 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v58, "cp", v59);
LABEL_13:
  v52 = "Multi-call invocation" + 10;
  v53 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v53, "https://www.gnu.org/software/coreutils/", "cp");
  if ( v49 != "cp" )
    v52 = "";
  goto LABEL_15;
}

__int64 __fastcall sub_4041B0(signed int a1, __int64 a2, __int64 a3, char a4, int *a5)
{
  int v5; // er12@1
  __int64 v6; // rbx@1
  int *v7; // r14@2
  signed int v8; // er15@6
  void *v9; // rsp@7
  void *v10; // r13@7
  void *v11; // rax@7
  const char *v12; // rdx@7
  void *v13; // r13@7
  char v14; // al@10
  const char *v15; // r12@13
  size_t v16; // rax@15
  size_t v17; // rdx@15
  signed __int64 v18; // rax@15
  void *v19; // rsp@16
  void *v20; // rax@16
  _BYTE *v21; // rax@16
  _BYTE *v22; // r13@16
  bool v23; // cf@16
  bool v24; // zf@16
  const char *v25; // rdi@16
  signed __int64 v26; // rcx@16
  _BYTE *v27; // rsi@16
  void *v28; // rax@20
  const char *v29; // r12@26
  const char *v30; // rbx@26
  int v31; // er13@28
  const char *v32; // rax@32
  int *v33; // rsi@32
  int *v34; // rdi@32
  signed __int64 j; // rcx@32
  void *i; // rdi@38
  void *v38; // rax@41
  char **v39; // r13@43
  __int64 v40; // rax@45
  char *v41; // rax@45
  char *v42; // rax@48
  __int64 v43; // rax@49
  const char *v44; // rsi@49
  __int64 v45; // rbx@49
  char *v46; // rax@50
  __int64 v47; // rax@53
  const char *v48; // rsi@54
  char *v49; // rax@55
  signed __int64 v50; // [sp+0h] [bp-F0h]@6
  __int64 v51; // [sp+8h] [bp-E8h]@1
  unsigned __int8 v52; // [sp+1Eh] [bp-D2h]@1
  char v53; // [sp+1Fh] [bp-D1h]@21
  void *ptr; // [sp+20h] [bp-D0h]@9
  __int64 v55; // [sp+28h] [bp-C8h]@7
  struct stat stat_buf; // [sp+30h] [bp-C0h]@25

  v5 = a1;
  v6 = a2;
  v51 = a3;
  v52 = 0;
  if ( (a3 == 0) >= a1 )
  {
    if ( a1 != 1 )
    {
      v48 = "missing file operand";
      goto LABEL_55;
    }
    LODWORD(v47) = sub_40DDD0(4LL, *(_QWORD *)a2);
    v44 = "missing destination file operand after %s";
    v45 = v47;
    goto LABEL_50;
  }
  v7 = a5;
  if ( a4 )
  {
    if ( v51 )
    {
      v42 = dcgettext(0LL, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5);
      a2 = 0LL;
      error(1, 0, v42);
    }
    else if ( a1 <= 2 )
    {
      sub_4033E0(*(char **)(a2 + 8LL * a1 - 8), &stat_buf, &v52);
      goto LABEL_26;
    }
    LODWORD(v43) = sub_40DDD0(4LL, *(_QWORD *)(a2 + 16));
    v44 = "extra operand %s";
    v45 = v43;
LABEL_50:
    v46 = dcgettext(0LL, v44, 5);
    error(0, 0, v46, v45);
    goto LABEL_51;
  }
  if ( v51 )
  {
LABEL_4:
    if ( v5 != 1 )
    {
      sub_405110(v7);
      sub_405140(v7);
    }
    v8 = 1;
    v50 = v6 + 8LL * (unsigned int)(v5 - 1) + 8;
    while ( 1 )
    {
      v15 = *(const char **)v6;
      v55 = 0LL;
      if ( byte_61B4C8 )
        sub_40ABD0(v15);
      v16 = strlen(v15);
      v17 = v16 + 1;
      v18 = (v16 + 24) & 0xFFFFFFFFFFFFFFF0LL;
      if ( byte_61B4C9 )
      {
        v9 = alloca(v18);
        v10 = memcpy((void *)(((unsigned __int64)&v51 + 7) & 0xFFFFFFFFFFFFFFF0LL), v15, v17);
        sub_40ABD0(v10);
        LODWORD(v11) = sub_40AF00(v51, v10, &v55);
        v12 = "%s -> %s\n";
        v13 = v11;
        if ( !*((_BYTE *)v7 + 46) )
          v12 = 0LL;
        if ( !(unsigned __int8)sub_4034A0(
                                 v11,
                                 v55 - (_QWORD)v11,
                                 (__int64)v12,
                                 (__int64)&ptr,
                                 (__int64)&v52,
                                 (__int64)v7) )
        {
          v14 = byte_61B4C9;
          v8 = 0;
LABEL_11:
          if ( v14 )
          {
            for ( i = ptr; ptr; i = ptr )
            {
              ptr = (void *)*((_QWORD *)i + 20);
              free(i);
            }
          }
          goto LABEL_12;
        }
      }
      else
      {
        v19 = alloca(v18);
        v20 = memcpy((void *)(((unsigned __int64)&v51 + 7) & 0xFFFFFFFFFFFFFFF0LL), v15, v17);
        LODWORD(v21) = sub_40AB40(v20, v15);
        v22 = v21;
        sub_40ABD0(v21);
        v25 = "..";
        v26 = 3LL;
        v27 = v22;
        do
        {
          if ( !v26 )
            break;
          v23 = *v27 < (const unsigned __int8)*v25;
          v24 = *v27++ == *v25++;
          --v26;
        }
        while ( v24 );
        if ( (!v23 && !v24) == v23 )
        {
          LODWORD(v28) = sub_410310(v51, v27);
          v13 = v28;
        }
        else
        {
          LODWORD(v38) = sub_40AF00(v51, v22, 0LL);
          v13 = v38;
        }
      }
      v8 &= sub_409280(v15, v13, v52, v7, &v53, 0LL);
      if ( byte_61B4C9 )
      {
        v8 &= sub_403A50(v13, v55 - (_QWORD)v13, (__int64)ptr, (__int64)v7);
        v14 = byte_61B4C9;
        goto LABEL_11;
      }
LABEL_12:
      v6 += 8LL;
      free(v13);
      if ( v50 == v6 )
        return (unsigned int)v8;
    }
  }
  if ( a1 != 1 )
  {
    v39 = (char **)(a2 + 8LL * a1 - 8);
    if ( !(unsigned __int8)sub_4033E0(*v39, &stat_buf, &v52) )
    {
      if ( a1 == 2 )
        goto LABEL_26;
      LODWORD(v40) = sub_40DDD0(4LL, *v39);
      v6 = v40;
      v41 = dcgettext(0LL, "target %s is not a directory", 5);
      error(1, 0, v41, v6);
    }
    v5 = a1 - 1;
    v51 = *(_QWORD *)(v6 + 8LL * (a1 - 1));
    if ( v51 )
      goto LABEL_4;
  }
LABEL_26:
  v29 = *(const char **)v6;
  v30 = *(const char **)(v6 + 8);
  if ( byte_61B4C9 )
  {
    v48 = "with --parents, the destination must be a directory";
LABEL_55:
    v49 = dcgettext(0LL, v48, 5);
    error(0, 0, v49);
LABEL_51:
    sub_403C80(1);
  }
  if ( *((_BYTE *)v7 + 22) )
  {
    v31 = *v7;
    if ( *v7 )
    {
      if ( !strcmp(v29, v30) && !v52 && (stat_buf.st_mode & 0xF000) == 0x8000 )
      {
        LODWORD(v32) = sub_40A6F0(v30, (unsigned int)v31);
        v33 = v7;
        v34 = &dword_61B480;
        for ( j = 18LL; j; --j )
        {
          *v34 = *v33;
          ++v33;
          ++v34;
        }
        v30 = v32;
        v7 = &dword_61B480;
        dword_61B480 = 0;
      }
    }
  }
  return (unsigned int)sub_409280(v29, v30, 0LL, v7, &v55, 0LL);
}

bool __fastcall sub_404640(char *name, __int16 a2)
{
  bool result; // al@2

  if ( (a2 & 0xF000) == 40960 )
  {
    result = 1;
  }
  else if ( (unsigned __int8)sub_4100A0() )
  {
    result = 1;
  }
  else
  {
    result = euidaccess(name, 2) == 0;
  }
  return result;
}

__int64 __fastcall sub_404690(int fd, size_t a2)
{
  size_t v2; // rbx@1
  size_t v3; // rbp@5
  __int64 v4; // rax@7
  __int64 result; // rax@8
  void *v6; // rax@10

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
  if ( a2 )
  {
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
        goto LABEL_9;
    }
    result = 0LL;
  }
  else
  {
LABEL_9:
    result = 1LL;
  }
  return result;
}

__int64 __fastcall sub_404740(int a1, __off_t a2, __off_t a3)
{
  int v3; // ebx@1
  __int64 result; // rax@2
  int v5; // eax@3

  v3 = fallocate(a1, 3, a2, a3);
  if ( v3 >= 0 || (v5 = *__errno_location(), v5 != 38) && v5 != 95 )
    result = (unsigned int)v3;
  else
    result = 0LL;
  return result;
}

int __fastcall sub_404780(int a1, const char *a2, __mode_t a3)
{
  int result; // eax@2

  if ( a1 >= 0 )
    result = fchmod(a1, a3);
  else
    result = chmod(a2, a3);
  return result;
}

int sub_4047A0()
{
  int *v0; // rax@1
  int *v1; // rbx@1
  char *v2; // rax@1

  v0 = __errno_location();
  *v0 = 95;
  v1 = v0;
  v2 = dcgettext(0LL, "failed to restore the default file creation context", 5);
  error(1, *v1, v2);
  return sub_4047E0();
}

int __fastcall sub_4047E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx@1
  __int64 v4; // rax@1
  __int64 v5; // rbp@1
  __int64 v6; // rax@1
  __int64 v7; // rax@2
  __int64 v8; // rbx@2
  char *v9; // rax@2
  __int64 v10; // rcx@2
  char *v11; // rax@3

  v3 = a3;
  LODWORD(v4) = sub_40DCF0(1LL, 4LL, a2);
  v5 = v4;
  LODWORD(v6) = sub_40DCF0(0LL, 4LL, a1);
  __printf_chk(1LL, "%s -> %s", v6, v5);
  if ( v3 )
  {
    LODWORD(v7) = sub_40DDD0(4LL, v3);
    v8 = v7;
    v9 = dcgettext(0LL, " (backup: %s)", 5);
    __printf_chk(1LL, v9, v8, v10);
  }
  v11 = stdout->_IO_write_ptr;
  if ( v11 >= stdout->_IO_write_end )
  {
    LODWORD(v11) = __overflow(stdout, 10);
  }
  else
  {
    stdout->_IO_write_ptr = v11 + 1;
    *v11 = 10;
  }
  return (unsigned __int64)v11;
}

int __fastcall sub_404890(__int64 a1, char *a2, int *a3)
{
  int *v3; // rbp@1
  int v4; // ebp@2
  __int64 v5; // rbx@2
  char *v6; // rdx@4
  FILE *v7; // rdi@5
  int result; // eax@5
  __int64 v9; // rbx@6
  char *v10; // rax@6
  FILE *v11; // rdi@6
  char v12; // [sp+4h] [bp-34h]@2
  char v13; // [sp+Eh] [bp-2Ah]@2

  v3 = a3;
  if ( sub_404640(a2, *a3) )
  {
    sub_40DDD0(4LL, a2);
    v9 = qword_61B920;
    v10 = dcgettext(0LL, "%s: overwrite %s? ", 5);
    v11 = stderr;
    __fprintf_chk(stderr, 1LL, v10, v9);
    result = sub_410370(v11, 1LL);
  }
  else
  {
    sub_40AD70((unsigned int)*v3, &v12);
    v4 = *v3;
    v13 = 0;
    sub_40DDD0(4LL, a2);
    v5 = qword_61B920;
    if ( *(_BYTE *)(a1 + 24) || *(_DWORD *)(a1 + 20) & 0xFFFF00 )
      v6 = dcgettext(0LL, "%s: replace %s, overriding mode %04lo (%s)? ", 5);
    else
      v6 = dcgettext(0LL, "%s: unwritable %s (mode %04lo, %s); try anyway? ", 5);
    v7 = stderr;
    __fprintf_chk(stderr, 1LL, v6, v5);
    result = sub_410370(v7, 1LL);
  }
  return result;
}

signed __int64 __fastcall sub_4049C0(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5)
{
  char v5; // bp@1
  unsigned int v6; // ebx@1
  int v7; // eax@1
  signed __int64 result; // rax@3
  __int64 v9; // rax@4
  __int64 v10; // rbp@4
  char *v11; // rax@4
  __int64 v12; // rcx@4
  __int64 v13; // rax@5
  __int64 v14; // r13@5
  __int64 v15; // rax@5
  __int64 v16; // rbp@5
  char *v17; // rbx@5
  int *v18; // rax@5

  v5 = a4;
  v6 = a1;
  v7 = sub_409900(4294967196LL, a1, 4294967196LL, a2, (unsigned int)(a5 != 0) << 10, a3);
  if ( v7 < 0 )
  {
    LODWORD(v13) = sub_40DCF0(1LL, 4LL, a1);
    v14 = v13;
    LODWORD(v15) = sub_40DCF0(0LL, 4LL, a2);
    v16 = v15;
    v17 = dcgettext(0LL, "cannot create hard link %s to %s", 5);
    v18 = __errno_location();
    error(0, *v18, v17, v16, v14);
    result = 0LL;
  }
  else
  {
    LOBYTE(v6) = v5 & (v7 > 0);
    if ( (_BYTE)v6 )
    {
      LODWORD(v9) = sub_40DDD0(4LL, a2);
      v10 = v9;
      v11 = dcgettext(0LL, "removed %s\n", 5);
      __printf_chk(1LL, v11, v10, v12);
      result = v6;
    }
    else
    {
      result = 1LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_404AD0(int a1, __int64 a2, char a3, __off_t a4)
{
  char v4; // r12@1
  __off_t v5; // rbx@1
  __off_t v6; // rax@1
  __int64 v8; // rax@5
  const char *v9; // rsi@5
  __int64 v10; // rbp@5
  __int64 v11; // rax@6
  char *v12; // rbx@7
  int *v13; // rax@7

  v4 = a3;
  v5 = a4;
  v6 = lseek(a1, a4, 1);
  if ( v6 < 0 )
  {
    LODWORD(v11) = sub_40DDD0(4LL, a2);
    v9 = "cannot lseek %s";
    v10 = v11;
  }
  else
  {
    if ( !v4 || (signed int)sub_404740(a1, v6 - v5, v5) >= 0 )
      return 1LL;
    LODWORD(v8) = sub_40DDD0(4LL, a2);
    v9 = "error deallocating %s";
    v10 = v8;
  }
  v12 = dcgettext(0LL, v9, 5);
  v13 = __errno_location();
  error(0, *v13, v12, v10);
  return 0LL;
}

signed __int64 __usercall sub_404B90(void *a1, size_t a2, unsigned int a3, int a4, int a5, size_t a6, char a7, __int64 a8, __int64 a9, size_t a10, _QWORD *a11, _BYTE *a12)
{
  unsigned int v12; // er14@4
  unsigned __int64 v13; // r15@4
  size_t v14; // rdx@5
  ssize_t v15; // rax@7
  int *v16; // rax@8
  int *v17; // rbx@9
  unsigned int v18; // er15@9
  __int64 v19; // rax@9
  __int64 v20; // rbp@9
  char *v21; // rax@9
  _QWORD *v23; // rax@12
  char *v24; // r13@12
  size_t v25; // r12@12
  size_t v26; // rbx@12
  char *v27; // r11@12
  char *v28; // rsi@16
  size_t v29; // rdx@16
  char *v30; // ST08_8@20
  int v31; // eax@20
  char v32; // dl@20
  bool v33; // al@20
  unsigned int v34; // er9@21
  __int64 v35; // rax@26
  char v36; // r9@26
  unsigned int v37; // eax@34
  bool v38; // zf@44
  __int64 v39; // rax@47
  __int64 v40; // rbx@47
  char *v41; // rax@47
  __int64 v42; // rax@49
  __int64 v43; // rbp@49
  char *v44; // rbx@49
  int *v45; // rax@49
  __off_t v46; // r13@50
  signed int v47; // [sp+8h] [bp-A0h]@24
  int v48; // [sp+18h] [bp-90h]@4
  bool v49; // [sp+1Dh] [bp-8Bh]@12
  char v50; // [sp+1Eh] [bp-8Ah]@25
  char v51; // [sp+1Fh] [bp-89h]@1
  void *buf; // [sp+20h] [bp-88h]@4
  size_t v53; // [sp+28h] [bp-80h]@1
  ssize_t v54; // [sp+30h] [bp-78h]@7
  size_t nbytes; // [sp+38h] [bp-70h]@4
  size_t v56; // [sp+50h] [bp-58h]@4
  size_t v57; // [sp+58h] [bp-50h]@2
  char v58; // [sp+6Ch] [bp-3Ch]@4

  v51 = a7;
  *a12 = 0;
  v53 = a10;
  *a11 = 0LL;
  if ( !a10 )
    return 1;
  v57 = a6;
  if ( !a6 )
    a6 = a2;
  v58 = a7;
  nbytes = a2;
  v12 = 0;
  v13 = 0LL;
  buf = a1;
  v48 = a5;
  v56 = a6;
  while ( 1 )
  {
LABEL_5:
    v14 = v53;
    if ( nbytes <= v53 )
      v14 = nbytes;
    v15 = read(a4, buf, v14);
    v54 = v15;
    if ( v15 >= 0 )
      break;
    v16 = __errno_location();
    if ( *v16 != 4 )
    {
      v17 = v16;
      v18 = 0;
      LODWORD(v19) = sub_40DDD0(4LL, a8);
      v20 = v19;
      v21 = dcgettext(0LL, "error reading %s", 5);
      error(0, *v17, v21, v20);
      return v18;
    }
  }
  if ( !v15 )
  {
    v46 = v13;
    LOBYTE(a3) = v12;
    goto LABEL_51;
  }
  v23 = a11;
  v24 = (char *)buf;
  v25 = v54;
  v26 = v56;
  *v23 += v54;
  v27 = (char *)buf;
  v49 = v57 != 0;
  while ( 1 )
  {
    if ( v26 > v25 )
      v26 = v25;
    LOBYTE(a3) = v49 && v26 != 0;
    if ( v49 && v26 != 0 )
      break;
    a3 = v12;
    if ( !((unsigned __int8)(v12 ^ 1) & (v26 == v25)) && v26 )
    {
LABEL_38:
      LODWORD(v23) = -1 - v26;
      if ( 0x7FFFFFFFFFFFFFFFLL - v26 < v13 )
      {
        v18 = 0;
        LODWORD(v39) = sub_40DDD0(4LL, a8);
        v40 = v39;
        v41 = dcgettext(0LL, "overflow reading %s", 5);
        error(0, 0, v41, v40);
        return v18;
      }
      v13 += v26;
      v25 -= v26;
      v24 += v26;
      v12 = a3;
      goto LABEL_40;
    }
LABEL_33:
    v13 += v26;
    v47 = 1;
    v50 = 0;
    if ( !(_BYTE)v12 )
      goto LABEL_26;
LABEL_34:
    v37 = sub_404AD0(v48, a9, v51, v13);
    v36 = v50;
    if ( !(_BYTE)v37 )
      return v37;
LABEL_27:
    LODWORD(v23) = v47;
    if ( v47 )
    {
      if ( !v26 )
      {
        v13 = 0LL;
LABEL_44:
        v38 = v53 == v54;
        v53 -= v54;
        *a12 = a3;
        if ( !v38 )
        {
          v12 = a3;
          goto LABEL_5;
        }
        v46 = v13;
LABEL_51:
        if ( (_BYTE)a3 )
          return sub_404AD0(v48, a9, v58, v46);
        return 1;
      }
      if ( !v36 )
      {
        v27 = v24;
        v25 -= v26;
        v12 = a3;
        v24 += v26;
        v13 = 0LL;
        goto LABEL_40;
      }
      v13 = v26;
      v27 = v24;
      v12 = a3;
      v26 = 0LL;
    }
    else
    {
      v27 = v24;
      v25 -= v26;
      v12 = a3;
      v24 += v26;
      v13 = v26;
LABEL_40:
      if ( !v25 )
        goto LABEL_44;
    }
  }
  v28 = v24;
  v29 = v26;
  do
  {
    if ( *v28 )
    {
      v33 = v49 && v26 != 0;
      v32 = v12;
      a3 = 0;
      goto LABEL_21;
    }
    ++v28;
    if ( !--v29 )
    {
      LOBYTE(v23) = v13 != 0;
      v34 = (unsigned int)v23 & (v12 ^ 1);
      goto LABEL_37;
    }
  }
  while ( v29 & 0xF );
  v30 = v27;
  v31 = memcmp(v24, v28, v29);
  v27 = v30;
  LOBYTE(a3) = v31 == 0;
  v32 = v12 ^ (v31 == 0);
  v33 = v31 != 0;
LABEL_21:
  LOBYTE(v34) = v32 & (v13 != 0);
  if ( v26 != v25 || !v33 )
  {
LABEL_37:
    if ( !(_BYTE)v34 )
      goto LABEL_38;
    v47 = 0;
    goto LABEL_25;
  }
  if ( !(_BYTE)v34 )
  {
    a3 = 0;
    goto LABEL_33;
  }
  v47 = 1;
  a3 = 0;
LABEL_25:
  v50 = v34;
  if ( (_BYTE)v12 )
    goto LABEL_34;
LABEL_26:
  v35 = sub_40B000(v48, v27, v13);
  v36 = v50;
  if ( v13 == v35 )
    goto LABEL_27;
  v18 = v12;
  LODWORD(v42) = sub_40DDD0(4LL, a9);
  v43 = v42;
  v44 = dcgettext(0LL, "error writing %s", 5);
  v45 = __errno_location();
  error(0, *v45, v44, v43);
  return v18;
}

signed __int64 __fastcall sub_404FC0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbp@1
  int *v6; // rax@2
  int *v7; // r13@2
  __int64 v8; // rax@3
  __int64 v9; // rbx@3
  char *v10; // rax@3
  int v11; // ebx@3
  signed __int64 result; // rax@4
  unsigned int v13; // ebx@7

  v5 = a5;
  if ( *(_BYTE *)(a5 + 37) )
  {
    v6 = __errno_location();
    v7 = v6;
    if ( !*(_BYTE *)(v5 + 35) || (v11 = *(_BYTE *)(v5 + 38), (_BYTE)v11) )
    {
      *v6 = 95;
      LODWORD(v8) = sub_40DDD0(4LL, a1);
      v9 = v8;
      v10 = dcgettext(0LL, "failed to get security context of %s", 5);
      error(0, *v7, v10, v9);
      v11 = *(_BYTE *)(v5 + 38);
    }
    else
    {
      *v6 = 95;
    }
    result = v11 ^ 1u;
  }
  else
  {
    v13 = a4;
    LOBYTE(v13) = *(_BYTE *)(a5 + 33) & a4;
    if ( (_BYTE)v13 )
    {
      *__errno_location() = 95;
      result = v13;
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
  __int64 v4; // rbx@1
  int *v5; // rax@1
  int *v6; // rbp@1
  __int64 v7; // rax@2
  __int64 v8; // rbx@2
  char *v9; // rax@2
  __int64 result; // rax@2

  v4 = a4;
  v5 = __errno_location();
  v6 = v5;
  if ( !*(_BYTE *)(v4 + 35) || *(_BYTE *)(v4 + 38) )
  {
    *v5 = 95;
    LODWORD(v7) = sub_40DCF0(0LL, 4LL, a1);
    v8 = v7;
    v9 = dcgettext(0LL, "failed to set the security context of %s", 5);
    error(0, *v6, v9, v8);
    result = 0LL;
  }
  else
  {
    *v5 = 95;
    result = 0LL;
  }
  return result;
}

int __fastcall sub_405110(__int64 a1)
{
  __int64 v1; // rax@1

  LODWORD(v1) = sub_40B910(61LL, 0LL, sub_40C2D0, sub_40C310, sub_40C380);
  *(_QWORD *)(a1 + 56) = v1;
  return v1;
}

int __fastcall sub_405140(__int64 a1)
{
  __int64 v1; // rax@1

  LODWORD(v1) = sub_40B910(61LL, 0LL, sub_40C300, sub_40C310, sub_40C380);
  *(_QWORD *)(a1 + 64) = v1;
  return v1;
}

bool __fastcall sub_405170(__int64 a1)
{
  bool result; // al@1

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
  int *v1; // rax@1
  char result; // al@1

  v1 = __errno_location();
  result = *v1 == 22 || *v1 == 1;
  if ( result )
    result = *(_BYTE *)(a1 + 26) ^ 1;
  return result;
}

__int64 __fastcall sub_4051E0(__int64 a1, const char *a2, int a3, __int64 a4, char a5, __int64 a6)
{
  const char *v6; // r12@1
  int v7; // ebx@1
  __uid_t v8; // er14@1
  __gid_t v9; // er13@1
  int v10; // esi@3
  int v11; // edx@3
  int v12; // eax@4
  int *v13; // rax@8
  int v14; // er14@8
  int *v15; // r15@8
  char v16; // al@10
  int v17; // edx@10
  int *v19; // rax@16
  int v20; // ebx@16
  int *v21; // r14@16
  __int64 v22; // rax@19
  __int64 v23; // r12@19
  char *v24; // rbx@19
  int *v25; // rax@19
  int *v26; // rax@22
  int *v27; // rbx@22
  int v28; // eax@22
  __int64 v29; // rax@24
  __int64 v30; // r12@24
  char *v31; // rax@24

  v6 = a2;
  v7 = a3;
  v8 = *(_DWORD *)(a4 + 28);
  v9 = *(_DWORD *)(a4 + 32);
  if ( !a5 )
  {
    if ( *(_QWORD *)(a1 + 24) & 0xFF0000000000FFLL )
    {
      v10 = *(_DWORD *)(a6 + 24);
      v11 = *(_DWORD *)(a4 + 24);
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
    if ( v10 & v12 & 0xFFF && sub_40C480(v6, (unsigned int)v7, (unsigned __int16)v10 & (unsigned __int16)v11 & 0x1C0) )
    {
      v26 = __errno_location();
      v27 = v26;
      v28 = *v26;
      if ( v28 != 1 && v28 != 22 || *(_BYTE *)(a1 + 27) )
      {
        LODWORD(v29) = sub_40DDD0(4LL, v6);
        v30 = v29;
        v31 = dcgettext(0LL, "clearing permissions for %s", 5);
        error(0, *v27, v31, v30);
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
LABEL_14:
    return 1;
  }
  if ( !lchown(v6, v8, v9) )
    goto LABEL_14;
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
    LODWORD(v22) = sub_40DDD0(4LL, v6);
    v23 = v22;
    v24 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
    v25 = __errno_location();
    error(0, *v25, v24, v23);
LABEL_20:
    v17 = -*(_BYTE *)(a1 + 36);
  }
  return (unsigned int)v17;
}

__int64 sub_4053D0()
{
  __int64 result; // rax@2
  int v1; // eax@3
  int v2; // ebx@3

  if ( dword_61B3B0 == -1 )
  {
    v1 = umask(0);
    v2 = v1;
    dword_61B3B0 = v1;
    umask(v1);
    result = (unsigned int)v2;
  }
  else
  {
    result = (unsigned int)dword_61B3B0;
  }
  return result;
}

__int64 __usercall sub_405400(int a1, __int64 a2, const char *a3, char *a4, __int64 a5, __int64 a6, signed int a7, unsigned int a8, _BYTE *a9, _BYTE *a10, _BYTE *a11)
{
  unsigned int v11; // ebp@0
  const char *v12; // r14@1
  __int64 v13; // r13@1
  int v14; // er12@1
  __int64 v15; // rbx@1
  int v16; // eax@5
  struct stat *v17; // rdx@5
  signed __int64 v18; // r8@5
  char *v19; // rsi@5
  __int64 v20; // rdi@8
  int v21; // eax@10
  size_t v22; // rsi@22
  int v23; // eax@22
  int v24; // eax@27
  __int16 v25; // ax@31
  __int64 v26; // rcx@31
  int v27; // er12@33
  __int64 v28; // rdi@35
  char v29; // al@35
  char v30; // al@39
  int v31; // eax@45
  int *v32; // rax@46
  int *v33; // r12@46
  __int64 v34; // rax@55
  __int64 v35; // r12@55
  __int64 v36; // rax@55
  const char *v37; // rsi@55
  __int64 v38; // rbx@55
  char *v39; // rax@56
  __int64 v40; // r8@56
  __int64 v41; // rcx@56
  const char *v42; // rdx@56
  int v43; // er12@68
  char *v44; // rsi@72
  char v45; // al@72
  bool v46; // cf@75
  bool v47; // zf@75
  _BYTE *v48; // rax@75
  _BYTE *v49; // rsi@75
  signed __int64 v50; // rcx@75
  _BYTE *v51; // rdi@75
  void *v52; // r12@75
  char v53; // r8@81
  bool v54; // r12@82
  __int64 v55; // rsi@86
  char v56; // al@86
  int v57; // eax@90
  __int64 v58; // rax@99
  __int64 v59; // r12@99
  char *v60; // rbx@99
  int *v61; // rax@99
  int v62; // eax@104
  __mode_t v63; // edx@105
  __int64 v64; // rax@114
  __int64 v65; // r12@114
  char *v66; // rbx@114
  int *v67; // rax@114
  signed int v68; // eax@115
  int v69; // eax@120
  __int64 v70; // rax@121
  __int64 v71; // r12@121
  char *v72; // rbx@121
  int *v73; // rax@121
  __dev_t v75; // rdx@129
  __ino_t v76; // rdi@129
  size_t v77; // rax@130
  __int64 v78; // rdx@130
  __int64 v79; // rcx@130
  __int64 v80; // r8@130
  __int64 v81; // r9@130
  __int64 v82; // rdx@132
  __int64 v83; // rcx@132
  __int64 v84; // r8@132
  __int64 v85; // r9@132
  int v86; // eax@134
  __int64 v87; // rax@137
  __int64 v88; // r12@137
  __int64 v89; // rax@137
  char *v90; // rax@137
  __int64 v91; // rax@142
  __int64 v92; // r12@142
  __int64 v93; // rax@142
  __int64 v94; // rbx@142
  char *v95; // rax@142
  int *v96; // rax@153
  int *v97; // r12@153
  int v98; // eax@153
  int v99; // eax@160
  int *v100; // rax@161
  __int64 v101; // rax@162
  __int64 v102; // rbx@162
  char *v103; // rax@162
  int v104; // eax@164
  size_t v105; // rax@167
  char v106; // al@172
  __ino_t v107; // rdx@181
  __dev_t v108; // rcx@181
  __int64 v109; // rax@181
  __int64 v110; // rax@186
  const char *v111; // rsi@186
  char *v112; // rax@187
  int v113; // eax@197
  __int64 v114; // rax@198
  const char *v115; // rsi@198
  char *v116; // r12@199
  int *v117; // rax@199
  unsigned __int64 v118; // rax@203
  __int64 v119; // rcx@206
  __int64 v120; // r8@206
  __mode_t v121; // er12@207
  int v122; // eax@208
  __int64 v123; // rax@213
  __int64 v124; // r12@213
  char *v125; // rax@213
  __int64 v126; // rcx@213
  __m128i v127; // xmm1@215
  __m128i v128; // xmm2@215
  __m128i v129; // xmm3@215
  __blkcnt_t v130; // rax@215
  char *v131; // rax@215
  char *v132; // r12@219
  char v133; // r15@219
  void *v134; // rax@221
  void *v135; // rbx@221
  void *v136; // rax@221
  void *v137; // r14@221
  char v138; // al@221
  char v139; // r12@222
  __int64 v140; // rax@227
  int v141; // edx@227
  const char *v142; // rsi@228
  char *v143; // rax@229
  size_t v144; // rax@232
  size_t v145; // rax@233
  signed __int64 v146; // rcx@234
  int v147; // eax@237
  __int64 v148; // rcx@237
  __int64 v149; // rax@240
  bool v150; // r12@245
  signed __int64 v151; // rcx@245
  size_t v152; // r9@246
  struct stat *v153; // rdx@246
  __int64 v154; // rax@253
  __int64 v155; // rax@253
  char v156; // al@254
  __int64 v157; // rax@258
  __int64 v158; // r13@258
  __int64 v159; // rax@258
  const char *v160; // rsi@258
  __int64 v161; // rbx@258
  char *v162; // rax@259
  int v163; // eax@271
  int v164; // eax@272
  bool v165; // al@285
  char v166; // al@286
  __int64 v167; // rax@289
  __int64 v168; // r12@289
  char *v169; // rbx@289
  int *v170; // rax@289
  __int64 v171; // rax@290
  __int64 v172; // rax@290
  int v173; // esi@291
  char *v174; // r12@296
  __int64 v175; // rsi@296
  int v176; // ecx@296
  int *v177; // rax@298
  int *v178; // r12@298
  int *v179; // rax@303
  int v180; // er12@303
  void *v181; // rax@305
  char *v182; // rax@305
  void *v183; // rcx@305
  int v184; // esi@305
  const char *v185; // rdx@305
  char v186; // r8@306
  __int64 v187; // rcx@310
  __int64 v188; // rax@329
  __int64 v189; // rbx@329
  char *v190; // rax@329
  __int64 v191; // rax@330
  __int64 v192; // rax@330
  __int64 v193; // r12@330
  char *v194; // rax@330
  __int64 v195; // rcx@340
  __int64 v196; // rax@340
  char *v197; // rax@261
  __int64 v198; // rdx@261
  __int64 v199; // rcx@261
  __int64 v200; // rax@349
  _BYTE *v201; // rax@354
  char *v202; // rax@356
  size_t v203; // r12@356
  size_t v204; // rax@356
  int v205; // eax@357
  int v206; // eax@358
  size_t v207; // rax@359
  char *v208; // rax@359
  const char *v209; // r12@359
  char *v210; // rax@359
  __int64 v211; // rsi@361
  char *v212; // rax@361
  char *v213; // r12@361
  size_t v214; // rax@362
  void *v215; // rsp@362
  char *v216; // r12@362
  char v217; // al@371
  int v218; // er12@371
  char *v219; // rax@374
  __int64 v220; // rdx@374
  __int64 v221; // rcx@374
  __int64 v222; // rax@375
  __int64 v223; // r12@375
  __int64 v224; // rax@375
  __int64 v225; // rbx@375
  char *v226; // rax@375
  __int64 v227; // rax@376
  __int64 v228; // rax@376
  __int64 v229; // r12@376
  char *v230; // r14@376
  int *v231; // rax@376
  __int64 v232; // rax@378
  const char *v233; // r12@378
  void *v234; // rax@387
  void *v235; // r12@387
  char *v236; // rax@387
  __int64 v237; // rdx@388
  signed int v238; // eax@389
  _BYTE *v239; // rax@394
  __int64 v240; // rax@400
  __int64 v241; // rbx@400
  char *v242; // rax@400
  __int64 v243; // rax@403
  __int64 v244; // rax@404
  char v245; // al@406
  int v246; // er12@409
  int v247; // eax@409
  __int64 v248; // rax@414
  __int64 v249; // rcx@414
  __int64 v250; // rax@414
  __int64 v251; // rax@415
  char v252; // al@419
  __int64 v253; // rax@421
  __int64 v254; // rax@421
  __int64 v255; // rax@422
  char *v256; // r12@422
  int *v257; // rax@422
  int *v258; // rax@423
  __int64 v259; // rax@424
  const char *v260; // rsi@424
  __int64 v261; // rbx@424
  char *v262; // rax@425
  __int64 v263; // rax@426
  void *v264; // rax@429
  char *v265; // r12@429
  int *v266; // rax@429
  __int64 v267; // rax@442
  char *v268; // r12@442
  int *v269; // rax@442
  __int64 v270; // rax@443
  char *v271; // rax@446
  __int64 v272; // rcx@446
  int v273; // eax@448
  __int64 v274; // rax@449
  __int64 v275; // rax@453
  __int64 v276; // r12@453
  char *v277; // rax@453
  __int64 v278; // rax@455
  __int64 v279; // rax@455
  __int64 v280; // rax@458
  __int64 v281; // r12@458
  char *v282; // rax@458
  __int64 v283; // rcx@458
  unsigned __int64 v284; // r12@464
  signed __int64 v285; // rax@465
  __int128 v286; // tt@469
  __blksize_t v287; // rdi@471
  unsigned __int64 v288; // rax@473
  char *v289; // rsi@474
  void *v290; // rax@476
  unsigned __int64 v291; // rdx@476
  bool v292; // r9@477
  int v293; // eax@484
  char v294; // r8@492
  int v295; // eax@493
  __int64 v296; // rax@494
  char *v297; // r12@494
  int *v298; // rax@494
  __int64 v299; // rax@509
  __int64 v300; // rax@510
  __int64 v301; // rax@515
  char *v302; // r12@515
  int *v303; // rax@515
  int v304; // eax@520
  int v305; // eax@522
  void *v306; // rax@524
  char *v307; // r12@524
  int *v308; // rax@524
  int v309; // eax@525
  __off_t v310; // r12@532
  char *v311; // rcx@532
  char *v312; // rbx@532
  char v313; // r15@532
  size_t v314; // r14@532
  char v315; // al@533
  size_t v316; // rdx@535
  __off_t v317; // rsi@535
  unsigned int v318; // er13@535
  __int64 v319; // rax@535
  size_t v320; // r8@536
  char *v321; // rax@543
  __int64 v322; // rcx@553
  bool v323; // r12@558
  __int64 v324; // rax@565
  const char *v325; // rsi@565
  char *v326; // r12@566
  int *v327; // rax@566
  __int64 v328; // rdx@569
  char *v329; // rbx@573
  __int64 v330; // rax@574
  __int64 v331; // r12@574
  __int64 v332; // rax@574
  int v333; // eax@582
  void *v334; // rax@585
  __int64 v335; // rax@589
  __int64 v336; // rax@589
  __int64 v337; // r12@589
  int *v338; // rax@589
  char *v339; // r12@590
  int *v340; // rax@590
  signed __int64 v341; // rcx@593
  const char *v342; // rdi@593
  void *v343; // rax@597
  void *v344; // rax@602
  __int64 v345; // rax@605
  __int64 v346; // rax@301
  __int64 v347; // r12@301
  char *v348; // rax@301
  __int64 v349; // rcx@301
  __int64 v350; // rax@606
  const char *v351; // rsi@606
  char *v352; // r12@607
  int *v353; // rax@607
  void *v354; // rax@608
  char *v355; // rax@608
  int v356; // eax@609
  int v357; // eax@610
  __int64 v358; // rax@611
  char *v359; // r12@611
  int *v360; // rax@611
  __int64 v361; // rax@615
  __int64 v362; // rax@618
  __int64 v363; // rax@619
  __int64 v364; // rax@623
  __int64 v365; // r12@623
  char *v366; // rax@623
  char v367; // [sp+1h] [bp-381h]@203
  unsigned __int64 v368; // [sp+Ah] [bp-378h]@478
  __off_t v369; // [sp+1Ah] [bp-368h]@532
  char v370; // [sp+21h] [bp-361h]@362
  __int64 v371; // [sp+22h] [bp-360h]@532
  unsigned int v372; // [sp+2Ah] [bp-358h]@532
  int v373; // [sp+2Eh] [bp-354h]@295
  char *v374; // [sp+32h] [bp-350h]@476
  int v375; // [sp+3Ah] [bp-348h]@302
  __mode_t v376; // [sp+3Eh] [bp-344h]@113
  __int64 v377; // [sp+42h] [bp-340h]@219
  const char *v378; // [sp+4Ah] [bp-338h]@219
  char *s; // [sp+52h] [bp-330h]@215
  unsigned int v380; // [sp+5Ah] [bp-328h]@219
  char v381; // [sp+5Fh] [bp-323h]@531
  unsigned __int8 v382; // [sp+60h] [bp-322h]@532
  char v383; // [sp+61h] [bp-321h]@81
  struct stat *v384; // [sp+62h] [bp-320h]@219
  __int64 v385; // [sp+6Ah] [bp-318h]@203
  char *s2; // [sp+72h] [bp-310h]@219
  void *s1; // [sp+7Ah] [bp-308h]@72
  char *old; // [sp+82h] [bp-300h]@35
  __int64 v389; // [sp+8Ah] [bp-2F8h]@1
  size_t n; // [sp+92h] [bp-2F0h]@22
  int v391[2]; // [sp+9Ah] [bp-2E8h]@1
  void *ptr; // [sp+A2h] [bp-2E0h]@10
  struct stat *v393; // [sp+AAh] [bp-2D8h]@4
  char *src; // [sp+B2h] [bp-2D0h]@22
  __mode_t v395; // [sp+BAh] [bp-2C8h]@6
  int v396; // [sp+BEh] [bp-2C4h]@6
  int fildes[2]; // [sp+C2h] [bp-2C0h]@1
  char *filename; // [sp+CAh] [bp-2B8h]@1
  char v399; // [sp+D9h] [bp-2A9h]@538
  __int64 v400; // [sp+DAh] [bp-2A8h]@478
  __off_t length; // [sp+E2h] [bp-2A0h]@219
  __int64 v402; // [sp+EAh] [bp-298h]@514
  __int64 v403; // [sp+F2h] [bp-290h]@514
  __int64 v404; // [sp+FAh] [bp-288h]@514
  char v405; // [sp+102h] [bp-280h]@614
  char v406; // [sp+103h] [bp-27Fh]@555
  void *v407; // [sp+10Ah] [bp-278h]@543
  struct stat stat_buf; // [sp+112h] [bp-270h]@4
  struct stat v409; // [sp+1A2h] [bp-1E0h]@22
  struct stat v410; // [sp+232h] [bp-150h]@219
  struct stat v411; // [sp+2C2h] [bp-C0h]@90

  v12 = a3;
  v13 = a6;
  v14 = a1;
  filename = a4;
  LOBYTE(fildes[0]) = a11 != 0LL;
  v47 = *(_BYTE *)(a6 + 24) == 0;
  v15 = a8;
  v389 = a2;
  *(_QWORD *)v391 = a5;
  if ( !v47 && a11 != 0LL )
    *a11 = 0;
  v47 = *(_DWORD *)(a6 + 4) == 2;
  *a10 = 0;
  v393 = &stat_buf;
  if ( !v47 )
  {
    v16 = __xstat(1, a3, &stat_buf);
    v19 = (char *)a3;
    LOBYTE(a7) = v16 != 0;
    if ( !v16 )
      goto LABEL_6;
LABEL_121:
    a7 = 0;
    LODWORD(v70) = sub_40DDD0(4LL, v19);
    v71 = v70;
    v72 = dcgettext(0LL, "cannot stat %s", 5);
    v73 = __errno_location();
    error(0, *v73, v72, v71);
    return (unsigned int)a7;
  }
  v69 = __lxstat(1, a3, &stat_buf);
  v19 = (char *)a3;
  LOBYTE(a7) = v69 != 0;
  if ( v69 )
    goto LABEL_121;
LABEL_6:
  v395 = stat_buf.st_mode;
  v396 = stat_buf.st_mode & 0xF000;
  if ( v396 != 0x4000 )
  {
    if ( !(_BYTE)a8 )
      goto LABEL_10;
    v20 = *(_QWORD *)(v13 + 64);
    if ( *(_DWORD *)v13 )
    {
      sub_40ACA0(v20, v12, v393);
      goto LABEL_10;
    }
    v106 = sub_40AD30(v20, v12, v393);
    if ( v106 )
    {
      LOBYTE(filename) = v106;
      LODWORD(v188) = sub_40DDD0(4LL, v12);
      v189 = v188;
      v190 = dcgettext(0LL, "warning: source file %s specified more than once", 5);
      error(0, 0, v190, v189);
      return (unsigned __int8)filename;
    }
    goto LABEL_173;
  }
  if ( !*(_BYTE *)(v13 + 42) )
  {
    LODWORD(v140) = sub_40DDD0(4LL, v19);
    v141 = 5;
    v15 = v140;
    if ( !*(_BYTE *)(v13 + 25) )
    {
LABEL_244:
      v143 = dcgettext(0LL, "-r not specified; omitting directory %s", v141);
      goto LABEL_230;
    }
    v142 = "omitting directory %s";
    goto LABEL_229;
  }
  if ( (_BYTE)a8 )
LABEL_173:
    sub_40ACA0(*(_QWORD *)(v13 + 64), v12, v393);
LABEL_10:
  LODWORD(ptr) = 1;
  v21 = *(_DWORD *)(v13 + 4);
  if ( v21 != 4 )
    LODWORD(ptr) = (unsigned __int8)a8 & (v21 == 3);
  if ( (_BYTE)v14 )
  {
LABEL_59:
    LOBYTE(src) = 1;
    v26 = 0LL;
    old = 0LL;
    goto LABEL_60;
  }
  if ( v396 != 0x8000 && (!*(_BYTE *)(v13 + 20) || v396 == 0x4000 || v396 == 40960)
    || *(_BYTE *)(v13 + 24)
    || *(_BYTE *)(v13 + 44)
    || *(_BYTE *)(v13 + 23)
    || *(_DWORD *)v13
    || *(_BYTE *)(v13 + 21) )
  {
    v22 = (size_t)filename;
    n = (size_t)&v409;
    v99 = __lxstat(1, filename, &v409);
    v18 = (unsigned int)v14;
    LOBYTE(src) = v99 != 0;
    if ( !v99 )
      goto LABEL_23;
    goto LABEL_161;
  }
  v22 = (size_t)filename;
  n = (size_t)&v409;
  v23 = __xstat(1, filename, &v409);
  v18 = 1LL;
  LOBYTE(src) = v23 != 0;
  if ( v23 )
  {
LABEL_161:
    v100 = __errno_location();
    if ( *v100 != 2 )
    {
      *(_QWORD *)fildes = v100;
      a7 = v14;
      LODWORD(v101) = sub_40DDD0(4LL, filename);
      v102 = v101;
      v103 = dcgettext(0LL, "cannot stat %s", 5);
      error(0, **(_DWORD **)fildes, v103, v102);
      return (unsigned int)a7;
    }
    goto LABEL_59;
  }
LABEL_23:
  if ( stat_buf.st_ino != v409.st_ino || stat_buf.st_dev != v409.st_dev )
  {
    if ( *(_DWORD *)(v13 + 4) != 2 )
      goto LABEL_25;
    v150 = 0;
    v151 = 0LL;
  }
  else
  {
    v150 = *(_BYTE *)(v13 + 23);
    if ( v150 )
      goto LABEL_328;
    if ( *(_DWORD *)(v13 + 4) != 2 )
    {
      v22 = (size_t)filename;
      LOBYTE(old) = v18;
      s2 = (char *)&v410;
      v163 = __lxstat(1, filename, &v410);
      v18 = (unsigned __int8)old;
      if ( v163 )
        goto LABEL_25;
      v22 = (size_t)v12;
      v384 = &v411;
      v164 = __lxstat(1, v12, &v411);
      v18 = (unsigned __int8)old;
      if ( v164 )
        goto LABEL_25;
      if ( v411.st_ino == v410.st_ino )
        v150 = v411.st_dev == v410.st_dev;
      v152 = (size_t)s2;
      v153 = v384;
      if ( (v411.st_mode & 0xF000) == 40960 && (v410.st_mode & 0xF000) == 40960 && *(_BYTE *)(v13 + 21) )
        goto LABEL_25;
      goto LABEL_247;
    }
    v150 = 1;
    v151 = 1LL;
  }
  v152 = n;
  v153 = v393;
  if ( (stat_buf.st_mode & 0xF000) == 40960 && (v409.st_mode & 0xF000) == 40960 )
  {
    v22 = (size_t)filename;
    LODWORD(s1) = v151;
    LOBYTE(old) = v18;
    if ( (unsigned __int8)sub_40E2F0(v12, filename, v393, v151, v18, n) )
      goto LABEL_253;
    v18 = (unsigned __int8)old;
    if ( *(_DWORD *)v13 || !(_DWORD)s1 )
      goto LABEL_25;
    v217 = 1;
    LOBYTE(v218) = *(_BYTE *)(v13 + 24) ^ 1;
    goto LABEL_372;
  }
LABEL_247:
  if ( *(_DWORD *)v13 )
  {
    if ( !v150 )
    {
      if ( *(_BYTE *)(v13 + 24)
        || *(_DWORD *)(v13 + 4) == 2
        || (v153->st_mode & 0xF000) != 40960
        || (*(_DWORD *)(v152 + 24) & 0xF000) == 40960 )
      {
        goto LABEL_25;
      }
LABEL_253:
      LODWORD(v154) = sub_40DCF0(1LL, 4LL, filename);
      v35 = v154;
      LODWORD(v155) = sub_40DCF0(0LL, 4LL, v12);
      v37 = "%s and %s are the same file";
      v38 = v155;
LABEL_56:
      v39 = dcgettext(0LL, v37, 5);
      v40 = v35;
      v41 = v38;
      v42 = v39;
LABEL_57:
      error(0, 0, v42, v41, v40);
      goto LABEL_58;
    }
    v22 = (size_t)filename;
    LOBYTE(src) = v18;
    v252 = sub_40E2F0(v12, filename, v153, v151, v18, v152);
    v18 = (unsigned __int8)src;
    LOBYTE(v218) = v252 ^ 1;
    v217 = 0;
LABEL_372:
    if ( (_BYTE)v218 )
    {
      LOBYTE(src) = v217;
      goto LABEL_25;
    }
    goto LABEL_253;
  }
  v187 = *(_BYTE *)(v13 + 24);
  if ( (_BYTE)v187 || *(_BYTE *)(v13 + 21) )
  {
    if ( (*(_DWORD *)(v152 + 24) & 0xF000) == 40960 )
      goto LABEL_25;
    if ( !v150 || *(_QWORD *)(v152 + 16) <= 1uLL )
    {
      if ( (v153->st_mode & 0xF000) == 40960 )
        goto LABEL_315;
      goto LABEL_345;
    }
    v22 = (size_t)filename;
    LOBYTE(s2) = v18;
    s1 = (void *)v152;
    old = (char *)v153;
    v217 = sub_40E2F0(v12, filename, v153, v187, v18, v152);
    v153 = (struct stat *)old;
    v152 = (size_t)s1;
    v18 = (unsigned __int8)s2;
    if ( !v217 )
    {
      LOBYTE(v218) = *(_BYTE *)(v13 + 24) ^ 1;
      goto LABEL_372;
    }
    if ( (*((_DWORD *)old + 6) & 0xF000) == 40960 )
      goto LABEL_314;
  }
  else if ( (v153->st_mode & 0xF000) == 40960 )
  {
    goto LABEL_317;
  }
  if ( (*(_DWORD *)(v152 + 24) & 0xF000) != 40960 )
  {
LABEL_345:
    if ( v153->st_ino != *(_QWORD *)(v152 + 8) || v153->st_dev != *(_QWORD *)v152 )
      goto LABEL_25;
    if ( *(_BYTE *)(v13 + 23) )
      goto LABEL_328;
  }
LABEL_314:
  LOBYTE(v187) = *(_BYTE *)(v13 + 24);
LABEL_315:
  if ( (_BYTE)v187 )
  {
    if ( (stat_buf.st_mode & 0xF000) == 40960 && *(_QWORD *)(v152 + 16) > 1uLL )
    {
      LOBYTE(s2) = v18;
      s1 = (void *)v152;
      old = (char *)v153;
      v271 = canonicalize_file_name(v12);
      v153 = (struct stat *)old;
      v152 = (size_t)s1;
      v18 = (unsigned __int8)s2;
      if ( v271 )
      {
        v22 = (size_t)filename;
        LOBYTE(old) = (_BYTE)s2;
        src = v271;
        v218 = sub_40E2F0(v271, filename, v153, v272, (unsigned __int8)s2, s1) ^ 1;
        free(src);
        v217 = 0;
        v18 = (unsigned __int8)s2;
        goto LABEL_372;
      }
    }
  }
LABEL_317:
  if ( *(_BYTE *)(v13 + 44) || *(_DWORD *)(v13 + 20) & 0xFF00FF00 && (*(_DWORD *)(v152 + 24) & 0xF000) == 40960 )
  {
    LOBYTE(v218) = *(_QWORD *)v152 == v153->st_dev;
    v217 = 0;
    goto LABEL_372;
  }
  if ( *(_DWORD *)(v13 + 4) != 2 )
    goto LABEL_253;
  if ( (v153->st_mode & 0xF000) == 40960 )
  {
    v22 = (size_t)v12;
    LOBYTE(s1) = v18;
    old = (char *)v152;
    v305 = __xstat(1, v12, &v411);
    v152 = (size_t)old;
    v18 = (unsigned __int8)s1;
    if ( v305 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v411.st_dev = _mm_load_si128((const __m128i *)v153);
    *(__m128i *)&v411.st_nlink = _mm_load_si128((const __m128i *)&v153->st_nlink);
    *(__m128i *)&v411.st_gid = _mm_load_si128((const __m128i *)&v153->st_gid);
    *(__m128i *)&v411.st_size = _mm_load_si128((const __m128i *)&v153->st_size);
    *(__m128i *)&v411.st_blocks = _mm_load_si128((const __m128i *)&v153->st_blocks);
    *(__m128i *)&v411.st_atim.tv_nsec = _mm_load_si128((const __m128i *)&v153->st_atim.tv_nsec);
    *(__m128i *)&v411.st_mtim.tv_nsec = _mm_load_si128((const __m128i *)&v153->st_mtim.tv_nsec);
    *(__m128i *)&v411.st_ctim.tv_nsec = _mm_load_si128((const __m128i *)&v153->st_ctim.tv_nsec);
    *(__m128i *)&v411.__unused[1] = _mm_load_si128((const __m128i *)&v153->__unused[1]);
  }
  if ( (*(_DWORD *)(v152 + 24) & 0xF000) == 40960 )
  {
    v22 = (size_t)filename;
    LOBYTE(old) = v18;
    v304 = __xstat(1, filename, &v410);
    v18 = (unsigned __int8)old;
    if ( v304 )
      goto LABEL_25;
  }
  else
  {
    *(__m128i *)&v410.st_dev = _mm_load_si128((const __m128i *)v152);
    *(__m128i *)&v410.st_nlink = _mm_load_si128((const __m128i *)(v152 + 16));
    *(__m128i *)&v410.st_gid = _mm_load_si128((const __m128i *)(v152 + 32));
    *(__m128i *)&v410.st_size = _mm_load_si128((const __m128i *)(v152 + 48));
    *(__m128i *)&v410.st_blocks = _mm_load_si128((const __m128i *)(v152 + 64));
    *(__m128i *)&v410.st_atim.tv_nsec = _mm_load_si128((const __m128i *)(v152 + 80));
    *(__m128i *)&v410.st_mtim.tv_nsec = _mm_load_si128((const __m128i *)(v152 + 96));
    *(__m128i *)&v410.st_ctim.tv_nsec = _mm_load_si128((const __m128i *)(v152 + 112));
    *(__m128i *)&v410.__unused[1] = _mm_load_si128((const __m128i *)(v152 + 128));
  }
  if ( v411.st_ino == v410.st_ino && v411.st_dev == v410.st_dev )
  {
    if ( !*(_BYTE *)(v13 + 23) )
      goto LABEL_253;
LABEL_328:
    LOBYTE(src) = 1;
  }
LABEL_25:
  if ( v396 == 0x4000 )
  {
    if ( !*(_BYTE *)(v13 + 24) )
      goto LABEL_30;
    v24 = *(_DWORD *)(v13 + 8);
  }
  else
  {
    if ( *(_BYTE *)(v13 + 45) )
    {
      v146 = 0LL;
      if ( *(_BYTE *)(v13 + 31) )
      {
        v146 = 1LL;
        if ( *(_BYTE *)(v13 + 24) )
          v146 = v409.st_dev != stat_buf.st_dev;
      }
      v22 = n;
      LOBYTE(old) = v18;
      v147 = sub_40EB60(filename, n, v393, v146);
      v18 = (unsigned __int8)old;
      if ( v147 >= 0 )
      {
        if ( a11 )
          *a11 = 1;
        LODWORD(v149) = sub_409480(filename, stat_buf.st_ino, stat_buf.st_dev, v148, v18);
        if ( v149 && !(unsigned __int8)sub_4049C0(v149, (__int64)filename, 1u, *(_BYTE *)(v13 + 46), (char)ptr) )
        {
          if ( !*(_BYTE *)(v13 + 37) )
            return (unsigned int)a7;
          goto LABEL_243;
        }
LABEL_171:
        return 1;
      }
    }
    v24 = *(_DWORD *)(v13 + 8);
    if ( !*(_BYTE *)(v13 + 24) )
    {
      if ( v24 == 2 )
        goto LABEL_171;
      if ( v24 == 3 )
      {
        v22 = (size_t)filename;
        LOBYTE(old) = v18;
        v245 = sub_404890(v13, filename, (int *)(n + 24));
        v18 = (unsigned __int8)old;
        if ( !v245 )
          goto LABEL_171;
      }
      goto LABEL_30;
    }
  }
  if ( v24 == 2
    || (v24 == 3
     || v24 == 4
     && *(_BYTE *)(v13 + 47)
     && (v22 = v409.st_mode,
         LOBYTE(old) = v18,
         v165 = sub_404640(filename, v409.st_mode),
         v18 = (unsigned __int8)old,
         !v165))
    && (v22 = (size_t)filename,
        LOBYTE(old) = v18,
        v166 = sub_404890(v13, filename, (int *)(n + 24)),
        v18 = (unsigned __int8)old,
        !v166) )
  {
    if ( !a11 )
      goto LABEL_171;
LABEL_288:
    a7 = 1;
    *a11 = 1;
    return (unsigned int)a7;
  }
LABEL_30:
  if ( (_BYTE)src )
    goto LABEL_171;
  v25 = v409.st_mode;
  v26 = (unsigned int)v18 ^ 1;
  v17 = (struct stat *)(v409.st_mode & 0xF000);
  if ( (_DWORD)v17 != 0x4000 )
  {
    if ( v396 == 0x4000 )
    {
      if ( !*(_BYTE *)(v13 + 24) || (v27 = *(_DWORD *)v13) == 0 )
      {
        LODWORD(v253) = sub_40DCF0(1LL, 4LL, v12);
        v35 = v253;
        LODWORD(v254) = sub_40DCF0(0LL, 4LL, filename);
        v37 = "cannot overwrite non-directory %s with directory %s";
        v38 = v254;
        goto LABEL_56;
      }
      if ( !(_BYTE)a8 )
        goto LABEL_353;
    }
    else
    {
      v27 = *(_DWORD *)v13;
      if ( !(_BYTE)a8 )
        goto LABEL_39;
    }
    if ( v27 != 3 )
    {
      v28 = *(_QWORD *)(v13 + 56);
      LOBYTE(old) = v18 ^ 1;
      v22 = (size_t)filename;
      v29 = sub_40AD30(v28, filename, n);
      v26 = (unsigned __int8)old;
      if ( v29 )
      {
        LODWORD(v278) = sub_40DCF0(1LL, 4LL, v12);
        v35 = v278;
        LODWORD(v279) = sub_40DCF0(0LL, 4LL, filename);
        v37 = "will not overwrite just-created %s with %s";
        v38 = v279;
        goto LABEL_56;
      }
      if ( v396 == 0x4000 )
        goto LABEL_38;
      v25 = v409.st_mode;
      v17 = (struct stat *)(v409.st_mode & 0xF000);
      if ( (_DWORD)v17 != 0x4000 )
        goto LABEL_38;
      goto LABEL_351;
    }
    if ( !*(_BYTE *)(v13 + 24) )
      goto LABEL_394;
LABEL_353:
    v17 = (struct stat *)(stat_buf.st_mode & 0xF000);
    if ( (_DWORD)v17 != 0x4000 )
      goto LABEL_354;
    goto LABEL_412;
  }
  if ( v396 != 0x4000 )
  {
LABEL_351:
    if ( *(_BYTE *)(v13 + 24) )
    {
      v27 = *(_DWORD *)v13;
      if ( *(_DWORD *)v13 )
        goto LABEL_353;
    }
    LODWORD(v263) = sub_40DDD0(4LL, filename);
    v142 = "cannot overwrite directory %s with non-directory";
    v15 = v263;
LABEL_229:
    v143 = dcgettext(0LL, v142, 5);
LABEL_230:
    a7 = 0;
    error(0, 0, v143, v15);
    return (unsigned int)a7;
  }
LABEL_38:
  v27 = *(_DWORD *)v13;
LABEL_39:
  v30 = *(_BYTE *)(v13 + 24);
  if ( v30 )
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
      goto LABEL_398;
    v25 = v409.st_mode;
LABEL_412:
    if ( (v25 & 0xF000) == 0x4000 )
    {
LABEL_398:
      if ( !v27 )
        goto LABEL_396;
      goto LABEL_354;
    }
    if ( !v27 )
    {
      LODWORD(v248) = sub_40DEA0(0LL, 3LL, filename, v26);
      v35 = v248;
      LODWORD(v250) = sub_40DEA0(0LL, 3LL, v12, v249);
      v37 = "cannot move directory onto non-directory: %s -> %s";
      v38 = v250;
      goto LABEL_56;
    }
LABEL_354:
    LOBYTE(n) = v26;
    LODWORD(v201) = sub_40AB40(v12, v22);
    v26 = (unsigned __int8)n;
    v18 = (signed __int64)v201;
    if ( *v201 != 46 )
      goto LABEL_355;
    v30 = 1;
    goto LABEL_434;
  }
  if ( v27 )
  {
LABEL_394:
    LOBYTE(n) = v26;
    LODWORD(v239) = sub_40AB40(v12, v22);
    v26 = (unsigned __int8)n;
    v18 = (signed __int64)v239;
    if ( *v239 != 46 )
    {
LABEL_395:
      if ( (v409.st_mode & 0xF000) == 0x4000 )
      {
LABEL_396:
        old = 0LL;
        goto LABEL_60;
      }
LABEL_355:
      if ( v27 != 3 )
      {
        LOBYTE(n) = v26;
        s1 = (void *)v18;
        src = (char *)strlen((const char *)v18);
        LODWORD(v202) = sub_40AB40(filename, v22);
        old = v202;
        v203 = strlen(v202);
        s2 = src;
INVALID_COLON;
        v204 = strlen(src);
INVALID_COLON;
        v26 = (unsigned __int8)n;
        v385 = v204;
        if ( src == (char *)(v203 + v204) )
        {
          LOBYTE(src) = n;
          n = (size_t)s1;
          v205 = memcmp(s1, old, v203);
          v26 = (unsigned __int8)src;
          if ( !v205 )
          {
            v206 = strcmp((const char *)(n + v203), s2);
            v26 = (unsigned __int8)src;
            if ( !v206 )
            {
              LOBYTE(old) = (_BYTE)src;
              v207 = strlen(filename);
              n = v207;
              LODWORD(v208) = sub_4100E0(v385 + v207 + 1, s2);
              v209 = v208;
              src = src;
INVALID_COLON;
              v210 = (char *)mempcpy(v208, filename, n);
              strcpy(v210, src);
              LODWORD(src) = __xstat(1, v209, &v411);
              free((void *)v209);
              v26 = (unsigned __int8)old;
              if ( !(_DWORD)src && stat_buf.st_ino == v411.st_ino && stat_buf.st_dev == v411.st_dev )
              {
                if ( *(_BYTE *)(v13 + 24) )
                  v329 = dcgettext(0LL, "backing up %s might destroy source;  %s not moved", 5);
                else
                  v329 = dcgettext(0LL, "backing up %s might destroy source;  %s not copied", 5);
                LODWORD(v330) = sub_40DCF0(1LL, 4LL, v12);
                v331 = v330;
                LODWORD(v332) = sub_40DCF0(0LL, 4LL, filename);
                v40 = v331;
                v42 = v329;
                v41 = v332;
                goto LABEL_57;
              }
            }
          }
        }
      }
      v211 = *(_DWORD *)v13;
      LOBYTE(src) = v26;
      LODWORD(v212) = sub_40A6B0(filename, v211, v17, v26, v18);
      v213 = v212;
      old = v212;
      LOBYTE(n) = (_BYTE)src;
      if ( v212 )
      {
        v214 = strlen(v212);
        v215 = alloca(v214 + 9);
        v216 = (char *)memcpy((void *)((unsigned __int64)&v370 & 0xFFFFFFFFFFFFFFF0LL), v213, v214 + 1);
        free(old);
        old = v216;
        v26 = (unsigned __int8)n;
        LOBYTE(src) = 1;
        goto LABEL_60;
      }
      v258 = __errno_location();
      LOBYTE(src) = 1;
      v26 = (unsigned __int8)n;
      v33 = v258;
      if ( *v258 == 2 )
        goto LABEL_60;
      LODWORD(v259) = sub_40DDD0(4LL, filename);
      v260 = "cannot backup %s";
      v261 = v259;
LABEL_425:
      a7 = 0;
      v262 = dcgettext(0LL, v260, 5);
      error(0, *v33, v262, v261);
      return (unsigned int)a7;
    }
    v30 = 0;
LABEL_434:
    v17 = (struct stat *)*(_BYTE *)(v18 + (*(_BYTE *)(v18 + 1) == 46) + 1);
    if ( !(_BYTE)v17 || (_BYTE)v17 == 47 )
      goto LABEL_41;
    if ( v30 )
      goto LABEL_355;
    goto LABEL_395;
  }
LABEL_41:
  old = 0LL;
  v17 = (struct stat *)(v409.st_mode & 0xF000);
  LOBYTE(v17) = v30 | ((_DWORD)v17 == 0x4000);
  if ( (_BYTE)v17
    || (LOBYTE(src) = *(_BYTE *)(v13 + 21), !(_BYTE)src)
    && (!*(_BYTE *)(v13 + 34) || v409.st_nlink <= 1)
    && ((old = 0LL, *(_DWORD *)(v13 + 4) != 2) || (stat_buf.st_mode & 0xF000) == 0x8000) )
  {
LABEL_60:
    if ( !(_BYTE)a8 || !*(_QWORD *)(v13 + 56) )
      goto LABEL_61;
    goto LABEL_50;
  }
  LOBYTE(src) = v26;
  v31 = unlink(filename);
  v26 = (unsigned __int8)src;
  if ( v31 )
  {
    v32 = __errno_location();
    v26 = (unsigned __int8)src;
    v33 = v32;
    if ( *v32 != 2 )
    {
      LODWORD(v300) = sub_40DDD0(4LL, filename);
      v260 = "cannot remove %s";
      v261 = v300;
      goto LABEL_425;
    }
  }
  LOBYTE(src) = *(_BYTE *)(v13 + 46);
  if ( (_BYTE)src )
  {
    LOBYTE(n) = v26;
    LODWORD(v280) = sub_40DDD0(4LL, filename);
    v281 = v280;
    v282 = dcgettext(0LL, "removed %s\n", 5);
    __printf_chk(1LL, v282, v281, v283);
    v26 = (unsigned __int8)n;
    old = 0LL;
    goto LABEL_60;
  }
  if ( !(_BYTE)a8 )
  {
    LOBYTE(src) = *(_BYTE *)(v13 + 42) & (v396 == 0x4000);
    if ( (_BYTE)src )
    {
      v75 = stat_buf.st_dev;
      v76 = stat_buf.st_ino;
      old = 0LL;
      goto LABEL_232;
    }
    LOBYTE(src) = 1;
    old = 0LL;
    goto LABEL_65;
  }
  v47 = *(_QWORD *)(v13 + 56) == 0LL;
  LOBYTE(src) = a8;
  old = 0LL;
  if ( !v47 )
  {
LABEL_50:
    if ( *(_BYTE *)(v13 + 24) )
    {
      if ( *(_BYTE *)(v13 + 46) )
      {
LABEL_147:
        if ( v396 != 0x4000 || !*(_BYTE *)(v13 + 42) )
          goto LABEL_149;
LABEL_129:
        v75 = stat_buf.st_dev;
        v76 = stat_buf.st_ino;
        if ( (_BYTE)a8 )
        {
          LODWORD(v77) = sub_409480(filename, stat_buf.st_ino, stat_buf.st_dev, v26, v18);
          n = v77;
          goto LABEL_131;
        }
LABEL_232:
        LODWORD(v144) = sub_409440(v76, v75, v75, v26);
        n = v144;
LABEL_131:
        if ( !n )
          goto LABEL_145;
        goto LABEL_132;
      }
      goto LABEL_127;
    }
    if ( *(_DWORD *)v13 )
    {
      if ( !*(_BYTE *)(v13 + 46) )
      {
        if ( v396 != 0x4000 )
          goto LABEL_66;
        goto LABEL_190;
      }
LABEL_63:
      if ( v396 != 0x4000 )
      {
        sub_4047E0((__int64)v12, (__int64)filename, (__int64)old);
        goto LABEL_65;
      }
LABEL_190:
      if ( *(_BYTE *)(v13 + 42) )
        goto LABEL_129;
LABEL_66:
      if ( !*(_BYTE *)(v13 + 34) )
      {
        n = 0LL;
        fildes[0] = (unsigned __int8)src;
        goto LABEL_68;
      }
LABEL_143:
      if ( *(_BYTE *)(v13 + 23) )
      {
        n = 0LL;
        goto LABEL_145;
      }
      if ( stat_buf.st_nlink <= 1 )
      {
        v104 = *(_DWORD *)(v13 + 4);
        if ( !(_BYTE)a8 || v104 != 3 )
        {
          n = 0LL;
          if ( v104 != 4 )
            goto LABEL_145;
        }
      }
      LODWORD(v105) = sub_409480(filename, stat_buf.st_ino, stat_buf.st_dev, v26, v18);
      n = v105;
      goto LABEL_168;
    }
    v17 = &v409;
    if ( !(_BYTE)v26 )
    {
      if ( __lxstat(1, filename, &v411) )
        goto LABEL_61;
      v17 = &v411;
    }
    if ( (v17->st_mode & 0xF000) != 40960 || !(unsigned __int8)sub_40AD30(*(_QWORD *)(v13 + 56), filename, v17) )
    {
LABEL_61:
      if ( *(_BYTE *)(v13 + 46) )
      {
        if ( !*(_BYTE *)(v13 + 24) )
          goto LABEL_63;
        goto LABEL_147;
      }
      goto LABEL_127;
    }
    LODWORD(v34) = sub_40DCF0(1LL, 4LL, filename);
    v35 = v34;
    LODWORD(v36) = sub_40DCF0(0LL, 4LL, v12);
    v37 = "will not copy %s through just-created symlink %s";
    v38 = v36;
    goto LABEL_56;
  }
LABEL_127:
  if ( *(_BYTE *)(v13 + 42) && v396 == 0x4000 )
    goto LABEL_129;
LABEL_65:
  if ( !*(_BYTE *)(v13 + 24) )
    goto LABEL_66;
LABEL_149:
  if ( stat_buf.st_nlink != 1 )
  {
    if ( !*(_BYTE *)(v13 + 34) )
    {
      n = 0LL;
      goto LABEL_152;
    }
    goto LABEL_143;
  }
  LODWORD(v145) = sub_409440(stat_buf.st_ino, stat_buf.st_dev, v17, v26);
  n = v145;
LABEL_168:
  if ( !n )
    goto LABEL_145;
  if ( v396 != 0x4000 )
  {
    if ( (unsigned __int8)sub_4049C0(n, (__int64)filename, 1u, *(_BYTE *)(v13 + 46), (char)ptr) )
      goto LABEL_171;
    goto LABEL_138;
  }
LABEL_132:
  if ( (unsigned __int8)sub_40E2F0(v12, n, v78, v79, v80, v81) )
  {
    LODWORD(v191) = sub_40DCF0(1LL, 4LL, qword_61B8E8);
    v15 = v191;
    LODWORD(v192) = sub_40DCF0(0LL, 4LL, qword_61B8F0);
    v193 = v192;
    v194 = dcgettext(0LL, "cannot copy a directory, %s, into itself, %s", 5);
    error(0, 0, v194, v193, v15);
    *a10 = 1;
LABEL_138:
    if ( !*(_BYTE *)(v13 + 37) )
      goto LABEL_139;
    goto LABEL_243;
  }
  if ( (unsigned __int8)sub_40E2F0(filename, n, v82, v83, v84, v85) )
  {
    LODWORD(v240) = sub_40DDD0(4LL, qword_61B8F0);
    v241 = v240;
    v242 = dcgettext(0LL, "warning: source directory %s specified more than once", 5);
    error(0, 0, v242, v241);
    if ( !*(_BYTE *)(v13 + 24) || !LOBYTE(fildes[0]) )
      goto LABEL_171;
    goto LABEL_288;
  }
  v86 = *(_DWORD *)(v13 + 4);
  if ( v86 != 4 && (v86 != 3 || !(_BYTE)a8) )
  {
    LODWORD(v87) = sub_40DCF0(1LL, 4LL, n);
    v88 = v87;
    LODWORD(v89) = sub_40DCF0(0LL, 4LL, filename);
    v15 = v89;
    v90 = dcgettext(0LL, "will not create hard link %s to directory %s", 5);
    error(0, 0, v90, v15, v88);
    goto LABEL_138;
  }
LABEL_145:
  if ( !*(_BYTE *)(v13 + 24) )
  {
    fildes[0] = (unsigned __int8)src;
    goto LABEL_68;
  }
LABEL_152:
  if ( !rename(v12, filename) )
  {
    if ( *(_BYTE *)(v13 + 46) )
    {
      v197 = dcgettext(0LL, "renamed ", 5);
      __printf_chk(1LL, v197, v198, v199);
      sub_4047E0((__int64)v12, (__int64)filename, (__int64)old);
    }
    if ( *(_BYTE *)(v13 + 33) )
      sub_405090((__int64)filename, 0LL, 1LL, v13);
    if ( a11 )
      *a11 = 1;
    if ( (_BYTE)a8 )
    {
      a7 = a8;
      sub_40ACA0(*(_QWORD *)(v13 + 56), filename, v393);
      return (unsigned int)a7;
    }
    goto LABEL_171;
  }
  v96 = __errno_location();
  v97 = v96;
  v98 = *v96;
  if ( v98 == 22 )
  {
    a7 = 1;
    LODWORD(v222) = sub_40DCF0(1LL, 4LL, qword_61B8E8);
    v223 = v222;
    LODWORD(v224) = sub_40DCF0(0LL, 4LL, qword_61B8F0);
    v225 = v224;
    v226 = dcgettext(0LL, "cannot move %s to a subdirectory of itself, %s", 5);
    error(0, 0, v226, v225, v223);
    *a10 = 1;
    return (unsigned int)a7;
  }
  if ( v98 != 18 )
  {
    LODWORD(v171) = sub_40DCF0(1LL, 4LL, filename);
    v158 = v171;
    LODWORD(v172) = sub_40DCF0(0LL, 4LL, v12);
    v160 = "cannot move %s to %s";
    v161 = v172;
    goto LABEL_259;
  }
  if ( v396 == 0x4000 )
  {
    if ( !rmdir(filename) || *v97 == 2 )
      goto LABEL_159;
    goto LABEL_258;
  }
  if ( unlink(filename) && *v97 != 2 )
  {
LABEL_258:
    LODWORD(v157) = sub_40DCF0(1LL, 4LL, filename);
    v158 = v157;
    LODWORD(v159) = sub_40DCF0(0LL, 4LL, v12);
    v160 = "inter-device move failed: %s to %s; unable to remove target";
    v161 = v159;
LABEL_259:
    v162 = dcgettext(0LL, v160, 5);
    error(0, *v97, v162, v161, v158);
    sub_4093F0(stat_buf.st_ino, stat_buf.st_dev);
    return (unsigned int)a7;
  }
  LOBYTE(src) = *(_BYTE *)(v13 + 46) & (v396 != 0x4000);
  if ( !(_BYTE)src )
  {
LABEL_159:
    fildes[0] = 1;
    LOBYTE(src) = 1;
    goto LABEL_68;
  }
  v219 = dcgettext(0LL, "copied ", 5);
  __printf_chk(1LL, v219, v220, v221);
  sub_4047E0((__int64)v12, (__int64)filename, (__int64)old);
  fildes[0] = 1;
LABEL_68:
  v43 = v395 & 0xFFF;
  if ( *(_BYTE *)(v13 + 43) )
    v43 = *(_DWORD *)(v13 + 16) & 0xFFF;
  if ( *(_BYTE *)(v13 + 29) )
  {
    v44 = filename;
    if ( !(unsigned __int8)sub_404FC0((__int64)v12, (__int64)filename, v395, fildes[0], v13) )
      return (unsigned int)a7;
    LODWORD(s1) = v43 & 0x3F;
    if ( v396 != 0x4000 )
      goto LABEL_73;
LABEL_181:
    v107 = stat_buf.st_ino;
    v108 = stat_buf.st_dev;
    v109 = *(_QWORD *)v391;
    if ( *(_QWORD *)v391 )
    {
      while ( *(_QWORD *)(v109 + 8) != stat_buf.st_ino || *(_QWORD *)(v109 + 16) != stat_buf.st_dev )
      {
        v109 = *(_QWORD *)v109;
        if ( !v109 )
          goto LABEL_203;
      }
      LODWORD(v110) = sub_40DDD0(4LL, v12);
      v111 = "cannot copy cyclic symbolic link %s";
      v15 = v110;
      goto LABEL_187;
    }
LABEL_203:
    v118 = (unsigned __int64)&v367 & 0xFFFFFFFFFFFFFFF0LL;
    v47 = (_BYTE)src == 0;
    v385 = v118;
    *(_QWORD *)v118 = *(_QWORD *)v391;
    *(_QWORD *)(v118 + 8) = v107;
    *(_QWORD *)(v118 + 16) = v108;
    if ( v47 && (v409.st_mode & 0xF000) == 0x4000 )
    {
      if ( *(_QWORD *)(v13 + 32) & 0xFF000000FF00LL
        && !(unsigned __int8)sub_405090((__int64)filename, *(_BYTE *)(v13 + 37), 0LL, v13)
        && *(_BYTE *)(v13 + 38) )
      {
        goto LABEL_200;
      }
      v383 = 0;
      LODWORD(s1) = 0;
    }
    else
    {
      if ( mkdir(filename, v43 & ~(_DWORD)s1) )
      {
        LODWORD(v200) = sub_40DDD0(4LL, filename);
        v115 = "cannot create directory %s";
        v15 = v200;
        goto LABEL_199;
      }
      if ( __lxstat(1, filename, &v409) )
      {
        LODWORD(v243) = sub_40DDD0(4LL, filename);
        v115 = "cannot stat %s";
        v15 = v243;
        goto LABEL_199;
      }
      v121 = v409.st_mode;
      v383 = 0;
      if ( (v409.st_mode & 0x1C0) != 448 )
      {
        v122 = chmod(filename, v409.st_mode | 0x1C0);
        v376 = v121;
        v383 = 1;
        if ( v122 )
        {
          LODWORD(v270) = sub_40DDD0(4LL, filename);
          v115 = "setting permissions for %s";
          v15 = v270;
          goto LABEL_199;
        }
      }
      if ( !*a9 )
      {
        sub_409480(filename, v409.st_ino, v409.st_dev, v119, v120);
        *a9 = 1;
      }
      if ( *(_BYTE *)(v13 + 46) )
      {
        if ( *(_BYTE *)(v13 + 24) )
        {
          LODWORD(v123) = sub_40DDD0(4LL, filename);
          v124 = v123;
          v125 = dcgettext(0LL, "created directory %s\n", 5);
          __printf_chk(1LL, v125, v124, v126);
        }
        else
        {
          sub_4047E0((__int64)v12, (__int64)filename, 0LL);
        }
      }
    }
    LOBYTE(ptr) = *(_BYTE *)(v13 + 28) & (v389 != 0);
    if ( !(_BYTE)ptr || (LOBYTE(v391[0]) = 0, v53 = 0, *(_QWORD *)v389 == stat_buf.st_dev) )
    {
      v127 = _mm_loadu_si128((const __m128i *)(v13 + 16));
      v128 = _mm_loadu_si128((const __m128i *)(v13 + 32));
      v129 = _mm_loadu_si128((const __m128i *)(v13 + 48));
      v130 = *(_QWORD *)(v13 + 64);
      *(__m128i *)&v411.st_dev = _mm_loadu_si128((const __m128i *)v13);
      *(__m128i *)&v411.st_nlink = v127;
      *(__m128i *)&v411.st_gid = v128;
      *(__m128i *)&v411.st_size = v129;
      v411.st_blocks = v130;
      LODWORD(v131) = sub_40E7F0(v12, 2LL);
      s = v131;
      if ( v131 )
      {
        if ( *(_DWORD *)(v13 + 4) == 3 )
          HIDWORD(v411.st_dev) = 2;
        if ( *s )
        {
          LOBYTE(v378) = a7;
          v132 = s;
          s2 = (char *)&v410;
          v133 = 0;
          v384 = &v411;
          v377 = v13;
          LOBYTE(ptr) = 1;
          v389 = (__int64)&length;
          *(_QWORD *)v391 = v12;
          v380 = a8;
          do
          {
            LODWORD(v134) = sub_40AF00(*(_QWORD *)v391, v132, 0LL);
            v135 = v134;
            LODWORD(v136) = sub_40AF00(filename, v132, 0LL);
            v137 = v136;
            LOBYTE(v410.st_dev) = *a9;
            v138 = sub_405400((_DWORD)v135, (_DWORD)v136, (unsigned int)fildes[0], (__int64)v393, v385);
            LOBYTE(ptr) = v138 & (unsigned __int8)ptr;
            *a10 |= length;
            free(v137);
            free(v135);
            if ( (_BYTE)length )
              break;
            v133 |= LOBYTE(v410.st_dev);
            v132 += strlen(v132) + 1;
          }
          while ( *v132 );
          v139 = v133;
          v12 = *(const char **)v391;
          a7 = (unsigned __int8)v378;
          v13 = v377;
          v15 = v380;
        }
        else
        {
          v139 = 0;
          LOBYTE(ptr) = 1;
        }
        free(s);
        *a9 = v139;
      }
      else
      {
        LODWORD(v267) = sub_40DDD0(4LL, v12);
        *(_QWORD *)fildes = v267;
        v268 = dcgettext(0LL, "cannot access %s", 5);
        v269 = __errno_location();
        error(0, *v269, v268, *(_QWORD *)fildes);
        LOBYTE(ptr) = 0;
      }
      LOBYTE(v391[0]) = 0;
      v53 = 0;
    }
    goto LABEL_82;
  }
  if ( v396 == 0x4000 )
  {
    if ( !(unsigned __int8)sub_404FC0((__int64)v12, (__int64)filename, v395, fildes[0], v13) )
      return (unsigned int)a7;
    LODWORD(s1) = v43 & 0x12;
    goto LABEL_181;
  }
  v44 = filename;
  v45 = sub_404FC0((__int64)v12, (__int64)filename, v395, fildes[0], v13);
  LODWORD(s1) = 0;
  if ( !v45 )
    return (unsigned int)a7;
LABEL_73:
  LOBYTE(v391[0]) = *(_BYTE *)(v13 + 44);
  if ( LOBYTE(v391[0]) )
  {
    if ( *v12 == 47 )
    {
LABEL_80:
      if ( sub_409A40(v12, 4294967196LL, filename, *(_BYTE *)(v13 + 22)) < 0 )
      {
        LODWORD(v227) = sub_40DCF0(1LL, 4LL, v12);
        v15 = v227;
        LODWORD(v228) = sub_40DCF0(0LL, 4LL, filename);
        v229 = v228;
        v230 = dcgettext(0LL, "cannot create symbolic link %s to %s", 5);
        v231 = __errno_location();
        error(0, *v231, v230, v229, v15);
        goto LABEL_200;
      }
      v383 = 0;
      v53 = 0;
      LOBYTE(ptr) = v391[0];
      goto LABEL_82;
    }
    LODWORD(v48) = sub_40AA60(filename, v44);
    v49 = ".." + 1;
    v50 = 2LL;
    v51 = v48;
    v52 = v48;
    do
    {
      if ( !v50 )
        break;
      v46 = *v49 < *v51;
      v47 = *v49++ == *v51++;
      --v50;
    }
    while ( v47 );
    if ( (!v46 && !v47) == v46
      || __xstat(1, ".", &v410)
      || __xstat(1, (const char *)v52, &v411)
      || v410.st_ino == v411.st_ino && v410.st_dev == v411.st_dev )
    {
      free(v52);
      goto LABEL_80;
    }
    free(v52);
    LODWORD(v196) = sub_40DEA0(0LL, 3LL, filename, v195);
    v111 = "%s: can make relative symbolic links only in current directory";
    v15 = v196;
LABEL_187:
    v112 = dcgettext(0LL, v111, 5);
    error(0, 0, v112, v15);
    goto LABEL_200;
  }
  v383 = *(_BYTE *)(v13 + 23);
  if ( v383 )
  {
    v156 = sub_4049C0((__int64)v12, (__int64)filename, *(_BYTE *)(v13 + 22), 0, (char)ptr);
    v53 = 0;
    v383 = 0;
    LOBYTE(ptr) = v156;
    if ( !v156 )
      goto LABEL_200;
LABEL_82:
    v54 = v396 != 0x4000;
    if ( !(_BYTE)src && *(_BYTE *)(v13 + 20) != 1 && v54 )
    {
      if ( *(_QWORD *)(v13 + 32) & 0xFF000000FF00LL )
      {
        v55 = *(_BYTE *)(v13 + 37);
        LOBYTE(fildes[0]) = v53;
        v56 = sub_405090((__int64)filename, v55, 0LL, v13);
        v53 = fildes[0];
        if ( !v56 )
        {
          if ( *(_BYTE *)(v13 + 38) )
            goto LABEL_200;
        }
      }
    }
    if ( (_BYTE)v15 )
    {
      if ( *(_QWORD *)(v13 + 56) )
      {
        LOBYTE(fildes[0]) = v53;
        v57 = __lxstat(1, filename, &v411);
        v53 = fildes[0];
        if ( !v57 )
        {
          sub_40ACA0(*(_QWORD *)(v13 + 56), filename, &v411);
          v53 = fildes[0];
        }
      }
    }
    if ( *(_BYTE *)(v13 + 23) && v54 || v53 )
      goto LABEL_178;
    if ( *(_BYTE *)(v13 + 31) )
    {
      v411.st_dev = stat_buf.st_atim.tv_sec;
      v411.st_ino = stat_buf.st_atim.tv_nsec;
      v411.st_nlink = stat_buf.st_mtim.tv_sec;
      *(_QWORD *)&v411.st_mode = stat_buf.st_mtim.tv_nsec;
      if ( !LOBYTE(v391[0]) )
      {
        if ( !(unsigned int)sub_40F8A0(filename) )
        {
LABEL_101:
          if ( !*(_BYTE *)(v13 + 29) || !(_BYTE)src && stat_buf.st_uid == v409.st_uid && stat_buf.st_gid == v409.st_gid )
            goto LABEL_108;
          v62 = sub_4051E0(v13, filename, -1, (__int64)v393, (char)src, (__int64)&v409);
          if ( v62 != -1 )
          {
            v63 = v395;
            BYTE1(v63) &= 0xF1u;
            if ( v62 )
              v63 = v395;
            v395 = v63;
LABEL_108:
            if ( !(*(_QWORD *)(v13 + 24) & 0xFF0000000000FFLL) )
            {
              if ( *(_BYTE *)(v13 + 43) )
              {
                v237 = *(_DWORD *)(v13 + 16);
              }
              else
              {
                if ( !*(_BYTE *)(v13 + 32) )
                {
                  if ( (_DWORD)s1 && (LODWORD(s1) = ~(unsigned int)sub_4053D0() & (unsigned int)s1, (_DWORD)s1) )
                  {
                    if ( v383 != 1 )
                    {
                      if ( (_BYTE)src && __lxstat(1, filename, &v409) )
                      {
                        v19 = filename;
                        goto LABEL_121;
                      }
                      v376 = v409.st_mode;
                      if ( !(~v409.st_mode & (unsigned int)s1) )
LABEL_178:
                        return (unsigned __int8)ptr;
                    }
                  }
                  else if ( !v383 )
                  {
                    goto LABEL_178;
                  }
                  if ( !chmod(filename, (unsigned int)s1 | v376) )
                    goto LABEL_178;
                  LODWORD(v64) = sub_40DDD0(4LL, filename);
                  v65 = v64;
                  v66 = dcgettext(0LL, "preserving permissions for %s", 5);
                  v67 = __errno_location();
                  error(0, *v67, v66, v65);
LABEL_115:
                  v68 = (unsigned __int8)ptr;
                  if ( *(_BYTE *)(v13 + 36) )
                    v68 = a7;
                  return (unsigned int)v68;
                }
                v237 = ~(unsigned __int16)sub_4053D0() & 0x1FF;
              }
              v47 = sub_409BD0(filename, 0xFFFFFFFFLL, v237) == 0;
              v238 = (unsigned __int8)ptr;
              if ( !v47 )
                v238 = a7;
              return (unsigned int)v238;
            }
            if ( !sub_409B40(v12, 0xFFFFFFFFLL, filename, 0xFFFFFFFFLL, v395) )
              goto LABEL_178;
            goto LABEL_115;
          }
LABEL_58:
          return 0;
        }
        goto LABEL_99;
      }
      if ( (unsigned int)sub_40F8B0(filename) && *__errno_location() != 38 )
      {
LABEL_99:
        LODWORD(v58) = sub_40DDD0(4LL, filename);
        v59 = v58;
        v60 = dcgettext(0LL, "preserving times for %s", 5);
        v61 = __errno_location();
        error(0, *v61, v60, v59);
        if ( *(_BYTE *)(v13 + 36) )
          goto LABEL_58;
        goto LABEL_100;
      }
    }
LABEL_100:
    if ( LOBYTE(v391[0]) )
      goto LABEL_178;
    goto LABEL_101;
  }
  if ( v396 != 0x8000 && !(*(_BYTE *)(v13 + 20) & (v396 != 40960)) )
  {
    LOBYTE(fildes[0]) = 0;
    if ( v396 == 4096 )
    {
      v411.st_dev = 0LL;
      v246 = v395 & ~(_DWORD)s1;
      v247 = __xmknod(0, filename, v395 & ~(_DWORD)s1, &v411.st_dev);
      v53 = fildes[0];
      if ( !v247 || (v273 = mkfifo(filename, v246 & 0xFFFFEFFF), v53 = fildes[0], !v273) )
      {
        LOBYTE(v391[0]) = v53;
        v383 = v53;
        LOBYTE(ptr) = 1;
        goto LABEL_82;
      }
      LODWORD(v274) = sub_40DDD0(4LL, filename);
      v115 = "cannot create fifo %s";
      v15 = v274;
      goto LABEL_199;
    }
    LOBYTE(ptr) = v396 == 49152 || (v395 & 0xB000) == 0x2000;
    if ( (_BYTE)ptr )
    {
      v411.st_dev = stat_buf.st_rdev;
      v113 = __xmknod(0, filename, v395 & ~(_DWORD)s1, &v411.st_dev);
      v53 = fildes[0];
      LOBYTE(v391[0]) = fildes[0];
      v383 = fildes[0];
      if ( !v113 )
        goto LABEL_82;
      LODWORD(v114) = sub_40DDD0(4LL, filename);
      v115 = "cannot create special file %s";
      v15 = v114;
LABEL_199:
      v116 = dcgettext(0LL, v115, 5);
      v117 = __errno_location();
      error(0, *v117, v116, v15);
      goto LABEL_200;
    }
    if ( v396 != 40960 )
    {
      LODWORD(v251) = sub_40DDD0(4LL, v12);
      v111 = "%s has unknown file type";
      v15 = v251;
      goto LABEL_187;
    }
    v232 = sub_409C30((char *)v12);
    v233 = (const char *)v232;
    if ( !v232 )
    {
      LODWORD(v299) = sub_40DDD0(4LL, v12);
      v115 = "cannot read symbolic link %s";
      v15 = v299;
      goto LABEL_199;
    }
    if ( sub_409A40(v232, 4294967196LL, filename, *(_BYTE *)(v13 + 22)) < 0 )
    {
      fildes[0] = *__errno_location();
      if ( fildes[0] )
      {
        if ( *(_BYTE *)(v13 + 45) == 1 && !(_BYTE)src && (v409.st_mode & 0xF000) == 40960 )
        {
          v341 = -1LL;
          v342 = v233;
          do
          {
            if ( !v341 )
              break;
            v47 = *v342++ == (_BYTE)src;
            --v341;
          }
          while ( !v47 );
          if ( v409.st_size == ~v341 - 1 )
          {
            v343 = (void *)sub_409C30(filename);
            if ( v343 )
            {
              ptr = v343;
              if ( !strcmp((const char *)v343, v233) )
              {
                free(ptr);
                goto LABEL_380;
              }
              free(ptr);
            }
          }
        }
        free((void *)v233);
        LODWORD(v275) = sub_40DDD0(4LL, filename);
        v276 = v275;
        v277 = dcgettext(0LL, "cannot create symbolic link %s", 5);
        error(0, fildes[0], v277, v276);
        goto LABEL_200;
      }
    }
LABEL_380:
    free((void *)v233);
    v383 = *(_BYTE *)(v13 + 37);
    if ( !v383 )
    {
      v53 = *(_BYTE *)(v13 + 29);
      if ( v53 )
      {
        LOBYTE(fildes[0]) = *(_BYTE *)(v13 + 29);
        if ( lchown(filename, stat_buf.st_uid, stat_buf.st_gid) )
        {
          LOBYTE(v391[0]) = sub_4051B0(v13);
          if ( LOBYTE(v391[0]) )
          {
            v53 = 0;
            LOBYTE(ptr) = v391[0];
          }
          else
          {
            v339 = dcgettext(0LL, "failed to preserve ownership for %s", 5);
            v340 = __errno_location();
            error(0, *v340, v339, filename);
            v383 = *(_BYTE *)(v13 + 36);
            if ( v383 )
              goto LABEL_200;
            LOBYTE(v391[0]) = fildes[0];
            LOBYTE(ptr) = fildes[0];
            v53 = 0;
          }
        }
        else
        {
          LOBYTE(v391[0]) = fildes[0];
          LOBYTE(ptr) = fildes[0];
          v53 = 0;
        }
      }
      else
      {
        v383 = 0;
        LOBYTE(v391[0]) = 1;
        LOBYTE(ptr) = 1;
      }
      goto LABEL_82;
    }
LABEL_243:
    sub_4047A0();
    goto LABEL_244;
  }
  v173 = *(_DWORD *)(v13 + 4) == 2;
  LODWORD(v385) = stat_buf.st_mode;
  LOBYTE(s2) = *(_BYTE *)(v13 + 35);
  fildes[0] = sub_40AC50((char)v12);
  if ( fildes[0] < 0 )
  {
    LODWORD(v244) = sub_40DDD0(4LL, v12);
    v115 = "cannot open %s for reading";
    v15 = v244;
    goto LABEL_199;
  }
  if ( __fxstat(1, fildes[0], &v410) )
  {
    LODWORD(v264) = sub_40DDD0(4LL, v12);
    ptr = v264;
    v265 = dcgettext(0LL, "cannot fstat %s", 5);
    v266 = __errno_location();
    v183 = ptr;
    v185 = v265;
    v184 = *v266;
    goto LABEL_306;
  }
  if ( stat_buf.st_ino != v410.st_ino || stat_buf.st_dev != v410.st_dev )
  {
    LODWORD(v234) = sub_40DDD0(4LL, v12);
    v235 = v234;
    v236 = dcgettext(0LL, "skipping file %s, as it was replaced while being copied", 5);
    v183 = v235;
    v184 = 0;
    v185 = v236;
    goto LABEL_306;
  }
  v373 = v43 & 0x1FF;
  if ( (_BYTE)src )
    goto LABEL_444;
  v174 = filename;
  v175 = *(_BYTE *)(v13 + 35) < 1u ? 1 : 513;
  v176 = sub_40AC50((char)filename);
  v391[0] = v176;
  if ( *(_QWORD *)(v13 + 32) & 0xFF000000FF00LL )
  {
    if ( v176 < 0 )
    {
LABEL_298:
      v177 = __errno_location();
      v178 = v177;
      if ( !*(_BYTE *)(v13 + 22) )
      {
        v180 = *v177;
        if ( *v177 != 2 || *(_BYTE *)(v13 + 24) )
        {
          LOBYTE(src) = 0;
          goto LABEL_305;
        }
        v375 = 0;
        goto LABEL_303;
      }
      if ( unlink(filename) )
      {
        LODWORD(v354) = sub_40DDD0(4LL, filename);
        ptr = v354;
        v355 = dcgettext(0LL, "cannot remove %s", 5);
        v183 = ptr;
        v184 = *v178;
        v185 = v355;
        goto LABEL_306;
      }
      if ( *(_BYTE *)(v13 + 46) )
      {
        LODWORD(v346) = sub_40DDD0(4LL, filename);
        v347 = v346;
        v348 = dcgettext(0LL, "removed %s\n", 5);
        __printf_chk(1LL, v348, v347, v349);
      }
      LOBYTE(src) = *(_BYTE *)(v13 + 33);
      v375 = (signed int)s1;
      if ( !(_BYTE)src )
      {
LABEL_303:
        LODWORD(ptr) = v373 & ~v375;
        v391[0] = sub_40AC50((char)filename);
        v179 = __errno_location();
        v180 = *v179;
        v389 = (__int64)v179;
        LOBYTE(v384) = ((unsigned int)v391[0] >> 31) & (v180 == 17);
        if ( (_BYTE)v384 )
        {
          v180 = 17;
          LOBYTE(src) = *(_BYTE *)(v13 + 24);
          if ( (_BYTE)src )
            goto LABEL_305;
          if ( !__lxstat(1, filename, &v411) && (v411.st_mode & 0xF000) == 40960 )
          {
            if ( !*(_BYTE *)(v13 + 48) )
            {
              LOBYTE(v391[0]) = 0;
              LODWORD(v364) = sub_40DDD0(4LL, filename);
              v365 = v364;
              v366 = dcgettext(0LL, "not writing through dangling symlink %s", 5);
              error(0, 0, v366, v365);
              ptr = 0LL;
              v186 = v391[0];
              LOBYTE(src) = (_BYTE)v384;
              goto LABEL_307;
            }
            v391[0] = sub_40AC50((char)filename);
            v180 = *(_DWORD *)v389;
          }
        }
        LOBYTE(src) = ((unsigned int)v391[0] >> 31) & (v180 == 21);
        if ( (_BYTE)src )
        {
          v180 = 21;
          if ( *filename )
            v180 = (filename[strlen(filename) - 1] != 47) + 20;
          goto LABEL_305;
        }
        LOBYTE(src) = 1;
        if ( v391[0] < 0 )
        {
LABEL_305:
          LODWORD(v181) = sub_40DDD0(4LL, filename);
          ptr = v181;
          v182 = dcgettext(0LL, "cannot create regular file %s", 5);
          v183 = ptr;
          v184 = v180;
          v185 = v182;
LABEL_306:
          error(0, v184, v185, v183);
          v186 = 0;
          ptr = 0LL;
          goto LABEL_307;
        }
        goto LABEL_461;
      }
      v186 = sub_404FC0((__int64)v12, (__int64)filename, (unsigned int)v373, 1u, v13);
      if ( !v186 )
      {
        ptr = 0LL;
        goto LABEL_307;
      }
LABEL_444:
      v375 = (signed int)s1;
      goto LABEL_303;
    }
    v294 = sub_405090((__int64)v174, *(_BYTE *)(v13 + 37), 0LL, v13);
    if ( !v294 )
    {
      LOBYTE(src) = *(_BYTE *)(v13 + 38);
      if ( (_BYTE)src )
      {
        LOBYTE(src) = 0;
        ptr = 0LL;
        goto LABEL_493;
      }
    }
  }
  else if ( v391[0] < 0 )
  {
    goto LABEL_298;
  }
  v375 = 0;
LABEL_461:
  v384 = &v411;
  LODWORD(v389) = __fxstat(1, v391[0], &v411);
  if ( (_DWORD)v389 )
  {
    LODWORD(v306) = sub_40DDD0(4LL, filename);
    ptr = v306;
    v307 = dcgettext(0LL, "cannot fstat %s", 5);
    v308 = __errno_location();
    error(0, *v308, v307, ptr);
    v294 = 0;
    ptr = 0LL;
    goto LABEL_493;
  }
  if ( !(_BYTE)s2 )
    goto LABEL_626;
  if ( !*(_DWORD *)(v13 + 52) )
    goto LABEL_464;
  if ( !ioctl(v391[0], 0x40049409uLL, (unsigned int)fildes[0]) )
  {
LABEL_626:
    ptr = 0LL;
    goto LABEL_480;
  }
  if ( *(_DWORD *)(v13 + 52) == 2 )
  {
    LODWORD(v335) = sub_40DCF0(1LL, 4LL, v12);
    v389 = v335;
    LODWORD(v336) = sub_40DCF0(0LL, 4LL, filename);
    v337 = v336;
    ptr = dcgettext(0LL, "failed to clone %s from %s", 5);
    v338 = __errno_location();
    error(0, *v338, (const char *)ptr, v337, v389);
    v294 = 0;
    ptr = 0LL;
    goto LABEL_493;
  }
LABEL_464:
  v284 = getpagesize();
  v377 = v411.st_blksize;
  s = (char *)v411.st_blksize;
  if ( (unsigned __int64)(v411.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
  {
    s = (char *)0x20000;
    v285 = 512LL;
    if ( (unsigned __int64)(v377 - 1) <= 0x1FFFFFFFFFFFFFFFLL )
      v285 = v377;
    v377 = v285;
  }
  j__posix_fadvise(fildes[0], 0LL, 0LL, 2);
  if ( (v410.st_mode & 0xF000) == 0x8000 )
  {
    *(_QWORD *)&v286 = v410.st_size;
    *((_QWORD *)&v286 + 1) = (unsigned __int128)v410.st_size >> 64;
    LODWORD(v389) = v410.st_blocks < (signed __int64)(v286 / 512);
  }
  ptr = (void *)(v284 - 1);
  if ( (v411.st_mode & 0xF000) != 0x8000 )
    goto LABEL_471;
  v333 = *(_DWORD *)(v13 + 12);
  if ( v333 == 3 )
  {
    LODWORD(v344) = sub_4100E0(&s[v284], 0LL);
    ptr = v344;
    v291 = ((unsigned __int64)v344 + v284 - 1) % v284;
    v374 = (char *)v344 + v284 - v291 - 1;
    if ( !(_DWORD)v389 )
    {
      v292 = *(_DWORD *)(v13 + 12) == 3;
      v389 = (__int64)&length;
      goto LABEL_478;
    }
  }
  else
  {
    if ( v333 != 2 || !(v389 & 1) )
    {
LABEL_471:
      v287 = v410.st_blksize;
      LODWORD(v378) = v410.st_mode & 0xF000;
      ptr = (void *)(0x7FFFFFFFFFFFFFFFLL - v284);
      if ( (unsigned __int64)(v410.st_blksize - 0x20000) > 0x1FFFFFFFFFFE0000LL )
        v287 = 0x20000LL;
      LODWORD(v288) = sub_40A780(v287, s, 0x7FFFFFFFFFFFFFFFLL - v284);
      if ( (_DWORD)v378 == 0x8000 && (unsigned __int64)s > v410.st_size )
        s = (char *)(v410.st_size + 1);
      v289 = &s[v288 - 1] - (unsigned __int64)&s[v288 - 1] % v288;
      s = v289;
      if ( !v289 || ptr < v289 )
        s = (char *)v288;
      LODWORD(v290) = sub_4100E0(&s[v284], v289);
      ptr = v290;
      v291 = ((unsigned __int64)v290 + v284 - 1) % v284;
      v374 = (char *)v290 + v284 - v291 - 1;
      if ( !(_DWORD)v389 )
      {
        v47 = *(_DWORD *)(v13 + 12) == 3;
        v377 = 0LL;
        v389 = (__int64)&length;
        v292 = v47;
LABEL_478:
        v368 = v291;
        if ( !(unsigned __int8)sub_404B90(
                                 v374,
                                 (size_t)s,
                                 v11,
                                 fildes[0],
                                 v391[0],
                                 v377,
                                 v292,
                                 (__int64)v12,
                                 (__int64)filename,
                                 0xFFFFFFFFFFFFFFFFLL,
                                 (_QWORD *)v389,
                                 &v400) )
          goto LABEL_516;
        if ( !(_BYTE)v400 || ftruncate(v391[0], length) >= 0 )
          goto LABEL_480;
        goto LABEL_605;
      }
      v381 = 0;
      v380 = 1;
      goto LABEL_532;
    }
    LODWORD(v334) = sub_4100E0(&s[v284], 0LL);
    ptr = v334;
    v374 = (char *)v334 + v284 - ((unsigned __int64)v334 + v284 - 1) % v284 - 1;
  }
  v380 = *(_DWORD *)(v13 + 12);
  v381 = (char)s2;
LABEL_532:
  v310 = 0LL;
  v389 = (__int64)&length;
  v369 = v410.st_size;
  sub_409550((unsigned int)fildes[0], &length);
  v372 = a8;
  v311 = 0LL;
  v371 = v13;
  v312 = (char *)v369;
  v382 = a7;
  v313 = (char)s2;
  v378 = v12;
  v314 = 0LL;
  do
  {
    s2 = v311;
    v315 = sub_409580(v389);
    v311 = s2;
    if ( !v315 )
    {
      LOBYTE(s2) = v313;
      v12 = v378;
      a7 = v382;
      v13 = v371;
      v15 = v372;
      if ( v406 )
        goto LABEL_558;
      if ( !v405 )
      {
        LODWORD(v363) = sub_40DEA0(0LL, 3LL, v378, v311);
        v325 = "%s: failed to get extents info";
        v389 = v363;
        goto LABEL_566;
      }
      v361 = 0LL;
      v292 = *(_DWORD *)(v371 + 12) == 3;
      if ( v381 )
        v361 = v377;
      v377 = v361;
      goto LABEL_478;
    }
    if ( !v404 )
      goto LABEL_556;
    v316 = v314;
    v317 = v310;
    v318 = 0;
    v319 = 0LL;
    while ( 1 )
    {
      v321 = (char *)v407 + 24 * v319;
      v310 = *(_QWORD *)v321;
      v314 = *((_QWORD *)v321 + 1);
      if ( (signed __int64)v312 < (signed __int64)(*(_QWORD *)v321 + v314) )
      {
        if ( v310 > (signed __int64)v312 )
          v310 = (__off_t)v312;
        v314 = (size_t)&v312[-v310];
      }
      v313 = 0;
      if ( v310 - v317 != v316 )
      {
        s2 = (char *)(v310 - v317 - v316);
        if ( lseek(fildes[0], v310, 0) < 0 )
        {
          v12 = v378;
          a7 = v382;
          v13 = v371;
          v15 = v372;
          LODWORD(v350) = sub_40DDD0(4LL, v378);
          v351 = "cannot lseek %s";
          v389 = v350;
        }
        else
        {
          if ( v380 != 1 )
          {
            v313 = sub_404AD0(v391[0], (__int64)filename, v380 == 3, (__off_t)s2);
            if ( !v313 )
            {
LABEL_551:
              a7 = v382;
              v12 = v378;
              v13 = v371;
              v15 = v372;
LABEL_552:
              free(v407);
              goto LABEL_516;
            }
            goto LABEL_536;
          }
          if ( (unsigned __int8)sub_404690(v391[0], (size_t)s2) )
          {
            v320 = 0LL;
            goto LABEL_538;
          }
          a7 = v382;
          v12 = v378;
          v13 = v371;
          v15 = v372;
          LODWORD(v362) = sub_40DEA0(0LL, 3LL, filename, v322);
          v351 = "%s: write failed";
          v389 = v362;
        }
        v352 = dcgettext(0LL, v351, 5);
        v353 = __errno_location();
        error(0, *v353, v352, v389);
        goto LABEL_552;
      }
LABEL_536:
      v320 = 0LL;
      if ( v380 == 3 )
        v320 = v377;
LABEL_538:
      if ( !(unsigned __int8)sub_404B90(
                               v374,
                               (size_t)s,
                               v11,
                               fildes[0],
                               v391[0],
                               v320,
                               1,
                               (__int64)v378,
                               (__int64)filename,
                               v314,
                               &v400,
                               &v399) )
        goto LABEL_551;
      v311 = (char *)(v310 + v400);
      if ( v400 )
        v313 = v399;
      if ( v312 == v311 )
        break;
      v317 = v310;
      v316 = v314;
      v319 = ++v318;
      if ( v318 >= (unsigned __int64)v404 )
        goto LABEL_556;
    }
    v406 = 1;
LABEL_556:
    s2 = v311;
    free(v407);
    v407 = 0LL;
    v404 = 0LL;
    v311 = s2;
  }
  while ( !v406 );
  LOBYTE(s2) = v313;
  v12 = v378;
  a7 = v382;
  v13 = v371;
  v15 = v372;
LABEL_558:
  v323 = v369 > (signed __int64)v311;
  if ( v369 <= (signed __int64)v311 && !(_BYTE)s2 )
    goto LABEL_480;
  if ( v380 == 1 )
  {
    if ( (unsigned __int8)sub_404690(v391[0], v369 - (_QWORD)v311) )
      goto LABEL_480;
    goto LABEL_605;
  }
  v389 = (__int64)v311;
  if ( ftruncate(v391[0], v369) )
  {
LABEL_605:
    LODWORD(v345) = sub_40DDD0(4LL, filename);
    v325 = "failed to extend %s";
    v389 = v345;
LABEL_566:
    v326 = dcgettext(0LL, v325, 5);
    v327 = __errno_location();
    error(0, *v327, v326, v389);
    goto LABEL_516;
  }
  if ( v380 == 3 && v323 && (signed int)sub_404740(v391[0], v389, v369 - v389) < 0 )
  {
    LODWORD(v324) = sub_40DDD0(4LL, filename);
    v325 = "error deallocating %s";
    v389 = v324;
    goto LABEL_566;
  }
LABEL_480:
  if ( !*(_BYTE *)(v13 + 31)
    || (length = stat_buf.st_atim.tv_sec,
        v402 = stat_buf.st_atim.tv_nsec,
        v403 = stat_buf.st_mtim.tv_sec,
        v404 = stat_buf.st_mtim.tv_nsec,
        !(unsigned int)sub_40F460(v391[0], filename))
    || (LODWORD(v301) = sub_40DDD0(4LL, filename),
        v389 = v301,
        v302 = dcgettext(0LL, "preserving times for %s", 5),
        v303 = __errno_location(),
        error(0, *v303, v302, v389),
        !*(_BYTE *)(v13 + 36)) )
  {
    if ( *(_BYTE *)(v13 + 29) && (stat_buf.st_uid != v411.st_uid || stat_buf.st_gid != v411.st_gid) )
    {
      v293 = sub_4051E0(v13, filename, v391[0], (__int64)v393, (char)src, (__int64)v384);
      if ( v293 == -1 )
        goto LABEL_516;
      if ( !v293 )
        LODWORD(v385) = v385 & 0xFFFFF1FF;
    }
    if ( *(_BYTE *)(v13 + 39) && !(v411.st_mode & 0x80) && geteuid() && !sub_404780(v391[0], filename, 0x180u) )
      sub_404780(v391[0], filename, v373 & ~v375);
    if ( !(*(_QWORD *)(v13 + 24) & 0xFF0000000000FFLL) )
    {
      if ( *(_BYTE *)(v13 + 43) )
      {
        v328 = *(_DWORD *)(v13 + 16);
      }
      else
      {
        if ( !*(_BYTE *)(v13 + 32) )
        {
          v294 = 1;
          if ( !v375 )
            goto LABEL_493;
          LOBYTE(v389) = 1;
          v356 = sub_4053D0();
          v294 = v389;
          if ( !(~v356 & v375) )
            goto LABEL_493;
          v357 = sub_404780(v391[0], filename, v373);
          v294 = v389;
          if ( !v357 )
            goto LABEL_493;
          LODWORD(v358) = sub_40DDD0(4LL, filename);
          v389 = v358;
          v359 = dcgettext(0LL, "preserving permissions for %s", 5);
          v360 = __errno_location();
          error(0, *v360, v359, v389);
          goto LABEL_526;
        }
        v328 = ~(unsigned __int16)sub_4053D0() & 0x1B6;
      }
      v294 = sub_409BD0(filename, (unsigned int)v391[0], v328) == 0;
      goto LABEL_493;
    }
    v309 = sub_409B40(v12, (unsigned int)fildes[0], filename, (unsigned int)v391[0], (unsigned int)v385);
    v294 = 1;
    if ( !v309 )
      goto LABEL_493;
LABEL_526:
    v294 = *(_BYTE *)(v13 + 36) ^ 1;
    goto LABEL_493;
  }
LABEL_516:
  v294 = 0;
LABEL_493:
  LOBYTE(v389) = v294;
  v295 = close(v391[0]);
  v186 = v389;
  if ( v295 < 0 )
  {
    LODWORD(v296) = sub_40DDD0(4LL, filename);
    *(_QWORD *)v391 = v296;
    v297 = dcgettext(0LL, "failed to close %s", 5);
    v298 = __errno_location();
    error(0, *v298, v297, *(_QWORD *)v391);
    v186 = 0;
  }
LABEL_307:
  LOBYTE(v391[0]) = v186;
  if ( close(fildes[0]) < 0 )
  {
    LODWORD(v255) = sub_40DDD0(4LL, v12);
    v15 = v255;
    v256 = dcgettext(0LL, "failed to close %s", 5);
    v257 = __errno_location();
    error(0, *v257, v256, v15);
    free(ptr);
    goto LABEL_200;
  }
  LOBYTE(fildes[0]) = v391[0];
  free(ptr);
  v53 = fildes[0];
  LOBYTE(v391[0]) = 0;
  LOBYTE(ptr) = fildes[0];
  if ( LOBYTE(fildes[0]) )
    goto LABEL_82;
LABEL_200:
  if ( *(_BYTE *)(v13 + 37) )
    goto LABEL_243;
  if ( !n )
    sub_4093F0(stat_buf.st_ino, stat_buf.st_dev);
LABEL_139:
  if ( old )
  {
    if ( rename(old, filename) )
    {
      LODWORD(v167) = sub_40DDD0(4LL, filename);
      v168 = v167;
      v169 = dcgettext(0LL, "cannot un-backup %s", 5);
      v170 = __errno_location();
      error(0, *v170, v169, v168);
    }
    else if ( *(_BYTE *)(v13 + 46) )
    {
      LODWORD(v91) = sub_40DCF0(1LL, 4LL, filename);
      v92 = v91;
      LODWORD(v93) = sub_40DCF0(0LL, 4LL, old);
      v94 = v93;
      v95 = dcgettext(0LL, "%s -> %s (unbackup)\n", 5);
      __printf_chk(1LL, v95, v94, v92);
    }
  }
  return (unsigned int)a7;
}

__int64 __usercall sub_409280(unsigned __int8 a1, __int64 a2, const char *a3, char *a4, _BYTE *a5, _BYTE *a6, signed int a7)
{
  int v7; // eax@3
  unsigned int v8; // er10@4
  char v10; // [sp+Fh] [bp-9h]@8

  if ( !a2 )
    __assert_fail("co != NULL", "src/copy.c", 0xB60u, "valid_options");
  if ( *(_DWORD *)a2 > 3u )
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 0xB61u, "valid_options");
  v7 = *(_DWORD *)(a2 + 12);
  if ( (unsigned int)(v7 - 1) > 2 )
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 0xB62u, "valid_options");
  v8 = *(_DWORD *)(a2 + 52);
  if ( v8 > 2 )
    __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 0xB63u, "valid_options");
  if ( *(_BYTE *)(a2 + 23) && *(_BYTE *)(a2 + 44) )
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

void __fastcall sub_4093D0(__int64 a1)
{
  free(*(void **)(a1 + 16));
  free((void *)a1);
}

void __fastcall sub_4093F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  void *v3; // rbx@2
  __int64 v4; // [sp+0h] [bp-28h]@1
  __int64 v5; // [sp+8h] [bp-20h]@1
  __int64 v6; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v5 = a2;
  v6 = 0LL;
  LODWORD(v2) = sub_40C0F0(qword_61B8F8, &v4);
  if ( v2 )
  {
    v3 = (void *)v2;
    free(*(void **)(v2 + 16));
    free(v3);
  }
}

__int64 __fastcall sub_409440(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  __int64 result; // rax@2
  __int64 v4; // [sp+0h] [bp-28h]@1
  __int64 v5; // [sp+8h] [bp-20h]@1

  v4 = a1;
  v5 = a2;
  LODWORD(v2) = sub_40B6A0(qword_61B8F8, &v4);
  if ( v2 )
    result = *(_QWORD *)(v2 + 16);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_409480(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1
  __int64 v4; // rax@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@1
  __int64 v7; // rdi@1
  __int64 v8; // rax@1
  __int64 v9; // rbp@2
  __int64 result; // rax@2

  v3 = a3;
  LODWORD(v4) = sub_4100E0(24LL, a2);
  v5 = v4;
  LODWORD(v6) = sub_410310(a1, a2);
  v7 = qword_61B8F8;
  *(_QWORD *)v5 = a2;
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 8) = v3;
  LODWORD(v8) = sub_40C0B0(v7, v5);
  if ( !v8 )
    sub_410330();
  v9 = v8;
  result = 0LL;
  if ( v5 != v9 )
  {
    free(*(void **)(v5 + 16));
    free((void *)v5);
    result = *(_QWORD *)(v9 + 16);
  }
  return result;
}

int sub_409500()
{
  __int64 v0; // rax@1

  LODWORD(v0) = sub_40B910(103LL, 0LL, sub_4093A0, sub_4093B0, sub_4093D0);
  qword_61B8F8 = v0;
  if ( !v0 )
    sub_410330(103LL, 0LL);
  return v0;
}

__int64 __fastcall sub_409550(int a1, __int64 a2)
{
  __int64 result; // rax@1

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
  unsigned int v1; // er13@1
  __int64 v2; // r12@1
  signed __int64 v3; // rbx@1
  __int64 v4; // rdx@1
  int v5; // eax@2
  int v6; // edi@2
  unsigned __int64 v7; // rcx@4
  __int64 v8; // rdi@5
  unsigned __int64 v9; // rcx@5
  signed __int64 v10; // rbx@5
  __int64 v11; // rax@7
  unsigned int v12; // er8@7
  unsigned __int64 v13; // rax@8
  unsigned __int64 v14; // rdx@8
  unsigned int v15; // edi@9
  __int64 *v16; // rcx@9
  int v17; // er9@11
  __int64 v18; // r10@11
  unsigned __int64 v19; // rsi@11
  __int64 v20; // rcx@20
  char v21; // al@22
  __int64 v22; // rax@24
  __int64 v23; // rdx@24
  bool result; // al@25
  bool v25; // zf@36
  __int64 vars0; // [sp+0h] [bp+0h]@2
  __int64 vars8; // [sp+8h] [bp+8h]@2
  int vars10; // [sp+10h] [bp+10h]@2
  unsigned int vars14; // [sp+14h] [bp+14h]@3
  int vars18; // [sp+18h] [bp+18h]@2
  __int64 vars20[2]; // [sp+20h] [bp+20h]@8
  unsigned __int64 vars30; // [sp+30h] [bp+30h]@8

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
    if ( ioctl(v6, 0xC020660BuLL, &vars0, v4, ~v4, *(_QWORD *)&vars10, *(_QWORD *)&vars18) < 0 )
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
    if ( (24 * v9 & 0x8000000000000000LL) != 0LL || 24 * (unsigned __int128)v9 >> 64 != 0 )
      sub_410330(v8, 3223348747LL);
    LODWORD(v11) = sub_410140(v8, 24 * v9);
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
          if ( *(_DWORD *)(v3 + 16) == (*((_DWORD *)v16 + 10) & 0xFFFFFFFE) && v14 == v19 )
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

void *__fastcall sub_409870(void *src, void *dest)
{
  void *v2; // rbx@1
  __int64 v3; // rax@1
  size_t v4; // rax@1
  size_t v5; // rbp@1
  _BYTE *v6; // rax@3
  void *result; // rax@3

  v2 = dest;
  LODWORD(v3) = sub_40AB40(src, dest);
  v4 = v3 - (_QWORD)src;
  v5 = v4;
  if ( v4 + 9 <= 0x100 || (v2 = malloc(v4 + 9)) != 0LL )
  {
    v6 = mempcpy(v2, src, v5);
    *(_QWORD *)v6 = 6365935209750754627LL;
    v6[8] = 0;
    result = v2;
  }
  else
  {
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_409900(int a1, const char *a2, int a3, const char *a4, int a5, char a6)
{
  char *v6; // r12@1
  int v7; // ebp@1
  char v8; // ST08_1@1
  int v9; // eax@1
  signed int v10; // ebx@1
  int *v11; // rax@3
  char *v13; // rax@5
  const char *v14; // rbx@5
  int v15; // eax@6
  int *v16; // r9@6
  int v17; // er12@7
  int *v18; // ST08_8@9
  int *v19; // [sp+8h] [bp-160h]@5
  char dest; // [sp+30h] [bp-138h]@5

  v6 = (char *)a4;
  v7 = a3;
  v8 = a6;
  v9 = linkat(a1, a2, a3, a4, a5);
  v10 = v9;
  if ( v8 == 1 )
  {
    if ( v9 )
    {
      v11 = __errno_location();
      if ( *v11 == 17 )
      {
        v19 = v11;
        v13 = (char *)sub_409870(v6, &dest);
        v14 = v13;
        if ( v13 )
        {
          v15 = sub_40E910(v13);
          v16 = v19;
          if ( v15 )
          {
            v17 = *v19;
          }
          else
          {
            v17 = renameat(v7, v14, v7, v6);
            if ( v17 )
              v17 = *v19;
            unlinkat(v7, v14, 0);
            v16 = v19;
          }
          if ( v14 != &dest )
          {
            v18 = v16;
            free((void *)v14);
            v16 = v18;
          }
          v10 = 1;
          if ( v17 )
          {
            *v16 = v17;
            v10 = -1;
          }
        }
        else
        {
          v10 = -1;
        }
      }
    }
  }
  return (unsigned int)v10;
}

__int64 __fastcall sub_409A40(const char *a1, int a2, const char *a3, char a4)
{
  char v4; // r14@1
  char *v5; // r12@1
  int v6; // eax@1
  int v7; // ebx@1
  int *v8; // r14@3
  char *v10; // rax@5
  char *v11; // rbx@5
  int v12; // er12@7
  char dest; // [sp+10h] [bp-138h]@5

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
LABEL_11:
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
        goto LABEL_11;
      }
    }
  }
  return (unsigned int)v7;
}

__int64 __fastcall sub_409B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1
  int v4; // eax@1
  int v5; // ebx@1
  __int64 v6; // rax@3
  __int64 v7; // r12@3
  char *v8; // rbp@3
  int *v9; // rax@3
  __int64 result; // rax@4
  __int64 v11; // rax@5
  __int64 v12; // rbp@5
  int *v13; // rax@5

  v3 = a3;
  v4 = sub_40C440();
  v5 = v4;
  if ( v4 == -2 )
  {
    LODWORD(v11) = sub_40E020(a1);
    v12 = v11;
    v13 = __errno_location();
    error(0, *v13, "%s", v12);
    result = (unsigned int)v5;
  }
  else
  {
    if ( v4 == -1 )
    {
      LODWORD(v6) = sub_40E020(v3);
      v7 = v6;
      v8 = dcgettext(0LL, "preserving permissions for %s", 5);
      v9 = __errno_location();
      error(0, *v9, v8, v7);
    }
    result = (unsigned int)v5;
  }
  return result;
}

__int64 __fastcall sub_409BD0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx@1
  __int64 result; // rax@2
  __int64 v5; // rax@3
  __int64 v6; // r12@3
  char *v7; // rbp@3
  int *v8; // rax@3

  v3 = sub_40C480(a1, a2, a3);
  if ( v3 )
  {
    LODWORD(v5) = sub_40E020(a1);
    v6 = v5;
    v7 = dcgettext(0LL, "setting permissions for %s", 5);
    v8 = __errno_location();
    error(0, *v8, v7, v6);
    result = (unsigned int)v3;
  }
  else
  {
    result = 0LL;
  }
  return result;
}

char *__fastcall sub_409C30(char *path, unsigned __int64 a2)
{
  size_t v2; // rbx@1
  char *v3; // rax@3
  char *v4; // rbp@3
  ssize_t v5; // r12@4
  char *v7; // rdi@12

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

noreturn void  sub_409D20()
{
  sub_403C80(1);
}

signed __int64 __fastcall sub_409D30(const char *a1, const char **a2, char *a3, size_t a4)
{
  size_t v4; // r13@1
  char *v5; // rbp@1
  size_t v6; // rax@1
  const char *v7; // r14@1
  size_t v8; // r12@2
  signed __int64 v9; // rbx@2
  bool v10; // zf@4
  char v11; // al@4
  signed __int64 v12; // rax@12
  signed __int64 v14; // [sp+0h] [bp-58h]@1
  char v15; // [sp+17h] [bp-41h]@2
  char *v16; // [sp+18h] [bp-40h]@1

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
  char *v3; // rbx@2
  __int64 v4; // rax@3
  __int64 v5; // rbp@3
  __int64 v6; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  LODWORD(v4) = sub_40E000(1LL, a1);
  v5 = v4;
  LODWORD(v6) = sub_40DCF0(0LL, 8LL, a2);
  error(0, 0, v3, v6, v5);
}

int __fastcall sub_409ED0(__int64 *a1, char *a2, size_t a3)
{
  char *v3; // r14@1
  size_t v4; // r13@1
  char *v5; // rbp@1
  FILE *v6; // rbx@1
  char *v7; // rax@1
  FILE *v8; // rsi@1
  __int64 v9; // rbx@1
  __int64 i; // r12@1
  __int64 v11; // rax@3
  __int64 v12; // rax@6
  char *v13; // rax@7

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
      LODWORD(v11) = sub_40E020(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    LODWORD(v12) = sub_40E020(i);
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
  return (unsigned __int64)v13;
}

__int64 __fastcall sub_409FF0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(__int64 *, char *))
{
  size_t v6; // r15@1
  void (__fastcall *v7)(__int64 *, char *); // r13@1
  char *v8; // rbp@1
  __int64 *v9; // rbx@1
  __int64 result; // rax@1

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (__int64 *)a3;
  result = sub_409D30(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_409E50(a1, (__int64)a2, result);
    sub_409ED0(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

int __fastcall sub_40A0B0(char *path, __int64 a2)
{
  __int64 v2; // r13@1
  char *v3; // rax@1
  char *v4; // rbp@1
  char *v5; // rax@1
  __int16 v6; // r14@3
  char *v7; // r12@3
  int *v8; // rax@3
  int *v9; // r15@3
  unsigned __int64 v10; // rdx@4
  char *v11; // rsi@6

  v2 = a2;
  LODWORD(v3) = sub_40AB40(path, a2);
  v4 = v3;
  LODWORD(v5) = sub_40ABA0(v3);
  if ( (unsigned __int64)v5 > 0xE )
  {
    v6 = *(_WORD *)v4;
    v7 = v5;
    *(_WORD *)v4 = 46;
    v8 = __errno_location();
    *v8 = 0;
    v9 = v8;
    v5 = (char *)pathconf(path, 3);
    if ( (signed __int64)v5 >= 0 || (v10 = 255LL, !*v9) )
      v10 = (unsigned __int64)v5;
    *(_WORD *)v4 = v6;
    if ( (unsigned __int64)v7 > v10 )
    {
      v11 = &path[a2];
      v5 = (char *)(&path[v2] - v4);
      if ( (unsigned __int64)v5 >= v10 )
        v11 = &v4[v10 - 1];
      else
        v10 = (unsigned __int64)(v5 + 1);
      *v11 = 126;
      v4[v10] = 0;
    }
  }
  return (unsigned __int64)v5;
}

void __fastcall sub_40A180(char *a1, __int64 a2)
{
  char *v2; // rbx@1
  char *v3; // rax@4

  v2 = a1;
  if ( (a1 || (v2 = getenv("SIMPLE_BACKUP_SUFFIX")) != 0LL) && *v2 && (LODWORD(v3) = sub_40AB40(v2, a2), v3 == v2) )
    src = v2;
  else
    src = "~";
}

void *__fastcall sub_40A1E0(void *a1, __int64 a2, char a3)
{
  const char *v3; // rax@1
  const char *v4; // r14@1
  size_t v5; // rax@1
  signed __int64 v6; // r14@1
  const char *v7; // rdi@1
  size_t v8; // rax@3
  bool v9; // cf@3
  signed __int64 v10; // rbx@3
  signed __int64 v11; // rsi@3
  signed __int64 v12; // rax@3
  void *v13; // r15@5
  DIR *v14; // r12@6
  char *v15; // rbx@8
  __int64 v16; // rax@8
  __int64 v17; // r13@8
  int v18; // ebp@10
  struct dirent *v19; // rax@11
  char *v20; // rbx@12
  signed __int64 v21; // rbx@14
  unsigned __int64 v22; // rcx@15
  unsigned __int8 v23; // r8@15
  int i; // eax@15
  int v25; // eax@21
  __int64 v26; // rdx@22
  unsigned __int64 v27; // rax@22
  signed __int64 v28; // rax@22
  __int64 v29; // ST50_8@26
  unsigned __int64 v30; // ST18_8@26
  void *v31; // rax@26
  void *v32; // r8@26
  unsigned __int64 v33; // ST18_8@27
  __int64 v34; // rax@27
  char *v35; // rax@27
  char v36; // dl@27
  char *v37; // rax@27
  int v38; // eax@35
  char *v39; // rcx@35
  int v40; // edx@35
  int *v41; // rax@37
  int v42; // ebp@37
  int *v43; // rbx@38
  void *v44; // rdi@40
  __int16 v46; // ax@47
  DIR *v47; // rax@47
  char *v48; // rcx@47
  void *v49; // rdi@49
  size_t v50; // ST20_8@52
  int v51; // ebp@52
  __int64 v52; // [sp+8h] [bp-90h]@1
  void *src; // [sp+10h] [bp-88h]@1
  unsigned __int8 v54; // [sp+18h] [bp-80h]@20
  __int16 v55; // [sp+18h] [bp-80h]@47
  unsigned __int64 v56; // [sp+20h] [bp-78h]@10
  unsigned __int64 size; // [sp+28h] [bp-70h]@10
  signed int v58; // [sp+40h] [bp-58h]@1
  char v59; // [sp+47h] [bp-51h]@1
  unsigned __int64 v60; // [sp+48h] [bp-50h]@5
  unsigned __int64 v61; // [sp+50h] [bp-48h]@20
  void *v62; // [sp+50h] [bp-48h]@27
  size_t v63; // [sp+58h] [bp-40h]@3

  src = a1;
  v58 = a2;
  v59 = a3;
  LODWORD(v3) = sub_40AB40(a1, a2);
  v4 = v3;
  v5 = strlen(v3);
  v6 = v4 - (_BYTE *)a1;
  v7 = src;
INVALID_COLON;
  v52 = v6 + v5;
  if ( !src )
INVALID_COLON;
  {
    sub_40A180(src, a2);
INVALID_COLON;
    v7 = src;
INVALID_COLON;
  }
  v8 = strlen(v7) + 1;
  v9 = v8 < 9;
  v10 = v52 + 1;
  v63 = v8;
  v11 = v8;
  v12 = 9LL;
  if ( !v9 )
    v12 = v11;
  v60 = v10 + v12;
  v13 = malloc(v10 + v12);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      memcpy(v13, src, v52 + 1);
      if ( v58 == 1 )
      {
        memcpy((char *)v13 + v52, src, v63);
INVALID_COLON;
        goto LABEL_33;
      }
      v15 = (char *)v13 + v6;
      LODWORD(v16) = sub_40ABA0((char *)v13 + v6);
      v17 = v16;
      if ( v14 )
        break;
      v46 = *(_WORD *)v15;
      *(_WORD *)v15 = 46;
      v55 = v46;
      LODWORD(v47) = sub_40A9C0(v13, src);
      v48 = &v15[v17];
      v14 = v47;
      if ( v47 )
      {
        *(_WORD *)v15 = v55;
        *(_DWORD *)v48 = 2117172782;
        v48[4] = 0;
LABEL_10:
        v18 = 2;
        v56 = 1LL;
        size = v60;
        while ( 1 )
        {
          v19 = readdir(v14);
          if ( !v19 )
            goto LABEL_30;
          while ( 1 )
          {
            v20 = v19->d_name;
            if ( strlen(v19->d_name) < v17 + 4 )
              break;
            if ( memcmp((char *)v13 + v6, v20, v17 + 2) )
              break;
            v21 = (signed __int64)&v20[v17 + 2];
            if ( (unsigned __int8)(*(_BYTE *)v21 - 49) > 8u )
              break;
            v22 = 1LL;
            v23 = *(_BYTE *)v21 == 57;
            for ( i = *(_BYTE *)(v21 + 1); (unsigned int)(i - 48) <= 9; i = *(_BYTE *)(v21 + v22) )
            {
              ++v22;
              v23 &= (_BYTE)i == 57;
            }
            if ( (_BYTE)i != 126 )
              break;
            if ( *(_BYTE *)(v21 + v22 + 1) )
              break;
            if ( v56 >= v22 )
            {
              v61 = v22;
              v54 = v23;
              if ( v56 != v22 )
                break;
              v25 = memcmp((char *)v13 + v52 + 2, (const void *)v21, v56);
              v23 = v54;
              v22 = v61;
              if ( v25 > 0 )
                break;
            }
            v26 = v23;
            v18 = v23;
            v27 = v23 + v22;
            v56 = v27;
            v28 = v52 + v27 + 4;
            if ( v28 <= size )
            {
              v32 = v13;
            }
            else
            {
              if ( v28 & 0x4000000000000000LL || v28 < 0 )
                size = v28;
              else
                size = 2 * v28;
              v29 = v23;
              v30 = v22;
              v31 = realloc(v13, size);
              v22 = v30;
              v26 = v29;
              v32 = v31;
              if ( !v31 )
                goto LABEL_49;
            }
            v62 = v32;
            v33 = v22;
            v34 = (__int64)v32 + v52;
            *(_WORD *)v34 = 32302;
            *(_BYTE *)(v34 + 2) = 48;
            v35 = (char *)memcpy((char *)v32 + v52 + v26 + 2, (const void *)v21, v22 + 2);
            v36 = v35[v33 - 1];
            v37 = &v35[v33 - 1];
            if ( v36 == 57 )
            {
              do
              {
                *v37-- = 48;
                v36 = *v37;
              }
              while ( *v37 == 57 );
            }
            v13 = v62;
            *v37 = v36 + 1;
            v19 = readdir(v14);
            if ( !v19 )
              goto LABEL_30;
          }
        }
      }
      v50 = (size_t)&v15[v17];
      v51 = *__errno_location() == 12;
      *(_WORD *)v15 = v55;
      v18 = v51 + 2;
      *(_DWORD *)v50 = 2117172782;
      *(_BYTE *)(v50 + 4) = 0;
LABEL_30:
      if ( v18 == 2 )
      {
        if ( v58 == 2 )
        {
          memcpy((char *)v13 + v52, src, v63);
INVALID_COLON;
          v58 = 1;
        }
LABEL_46:
        sub_40A0B0((char *)v13, v52);
        goto LABEL_33;
      }
      if ( v18 == 3 )
      {
LABEL_49:
        v49 = v13;
        v13 = 0LL;
        free(v49);
        *__errno_location() = 12;
        return v13;
      }
      if ( v18 == 1 )
        goto LABEL_46;
LABEL_33:
      if ( !v59 )
        goto LABEL_57;
      if ( !v14 || (v38 = dirfd(v14), v39 = (char *)v13 + v6, v40 = v38, v38 < 0) )
      {
        v39 = (char *)v13;
        v40 = -100;
        v6 = 0LL;
      }
      if ( !(unsigned int)sub_40E040(-100, (char *)src, v40, v39) )
      {
LABEL_57:
        if ( v14 )
          closedir(v14);
        return v13;
      }
      v41 = __errno_location();
      v42 = *v41;
      if ( *v41 != 17 )
      {
        v43 = v41;
        if ( v14 )
          closedir(v14);
        v44 = v13;
        v13 = 0LL;
        free(v44);
        *v43 = v42;
        return v13;
      }
    }
    rewinddir(v14);
    goto LABEL_10;
  }
  return v13;
}

void *__fastcall sub_40A6B0(void *a1, __int64 a2)
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
                                      (void (__fastcall *)(__int64 *, char *))off_61B3C8)];
}

void *__fastcall sub_40A6F0(void *a1, __int64 a2)
{
  void *result; // rax@1

  result = sub_40A1E0(a1, a2, 0);
  if ( !result )
    sub_410330(a1, a2);
  return result;
}

__int64 __fastcall sub_40A730(void *a1, const char *a2)
{
  char *v2; // rax@3

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
  unsigned __int64 v3; // rcx@1
  unsigned __int64 v4; // r8@6
  unsigned __int64 v6; // r8@9
  unsigned __int64 v7; // rax@9
  unsigned __int64 v8; // rdx@10
  unsigned __int64 v9; // rax@11

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

int sub_40A800()
{
  FILE *v0; // rbx@1
  __int64 v1; // rax@1
  int v3; // eax@4
  FILE *v4; // rdi@4
  char *v5; // rax@6
  __int64 v6; // rbx@6
  char *v7; // r12@6
  int *v8; // rax@6
  int *v9; // rbp@6
  __int64 v10; // rax@7
  int v11; // eax@10

  v0 = stdin;
  LODWORD(v1) = sub_410560(stdin);
  if ( !v1 )
  {
    if ( !(unsigned int)sub_4114A0(v0) )
      return sub_40A920(v0);
    goto LABEL_6;
  }
  v11 = sub_410590(v0, 0LL, 1LL);
  v4 = stdin;
  if ( !v11 )
  {
    v3 = sub_410520();
    v4 = stdin;
    if ( v3 )
    {
      sub_4114A0(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_4114A0(v4) )
  {
LABEL_6:
    v5 = dcgettext(0LL, "error closing file", 5);
    v6 = qword_61B908;
    v7 = v5;
    v8 = __errno_location();
    v9 = v8;
    if ( v6 )
    {
      LODWORD(v10) = sub_40DE70(v6, "error closing file");
      error(0, *v9, "%s: %s", v10, v7);
    }
    else
    {
      error(0, *v8, "%s", v7);
    }
    ((void (*)(void))sub_40A920)();
    _exit(status);
  }
  return ((int (*)(void))sub_40A920)();
}

__int64 sub_40A920()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_40DE70(qword_61B918, "write error");
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
  DIR *v1; // rax@1
  DIR *v2; // rbx@1
  int v3; // eax@2
  DIR *result; // rax@3
  int v5; // er12@4
  int *v6; // rax@4
  int *v7; // rbp@4
  int v8; // er14@5
  DIR *v9; // r13@5
  DIR *v10; // rax@7

  v1 = opendir(a1);
  v2 = v1;
  if ( v1 && (v3 = dirfd(v1), (unsigned int)v3 <= 2) )
  {
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
    result = v9;
  }
  else
  {
    result = v2;
  }
  return result;
}

__int64 __fastcall sub_40AA60(void *a1, __int64 a2)
{
  __int64 result; // rax@1

  result = sub_40AAE0(a1);
  if ( !result )
    sub_410330(a1, a2);
  return result;
}

signed __int64 __fastcall sub_40AA80(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp@1
  __int64 v3; // rax@1
  signed __int64 v4; // rdx@2
  signed __int64 result; // rax@7

  v2 = *a1 == 47;
  LODWORD(v3) = sub_40AB40(a1, a2);
  if ( v3 - (signed __int64)a1 > v2 && (v4 = v3 - (_QWORD)a1 - 1, *(_BYTE *)(v3 - 1) == 47) )
  {
    while ( v2 != v4 && a1[v4 - 1] == 47 )
      --v4;
    result = v4;
  }
  else
  {
    result = v3 - (_QWORD)a1;
  }
  return result;
}

_BYTE *__fastcall sub_40AAE0(void *src, __int64 a2)
{
  signed __int64 v2; // rax@1
  size_t v3; // rbx@1
  _BYTE *v4; // rax@1
  _BYTE *v5; // rcx@1
  _BYTE *v6; // rax@2

  v2 = sub_40AA80(src, a2);
  v3 = v2;
  v4 = malloc(v2 + (v2 == 0) + 1);
  v5 = v4;
  if ( v4 )
  {
    v6 = memcpy(v4, src, v3);
    v5 = v6;
    if ( !v3 )
    {
      *v6 = 46;
      v3 = 1LL;
    }
    v6[v3] = 0;
  }
  return v5;
}

_BYTE *__fastcall sub_40AB40(_BYTE *a1)
{
  char v1; // dl@1
  _BYTE *result; // rax@1
  _BYTE *v3; // rcx@4
  char v4; // si@4

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
  size_t result; // rax@1
  signed __int64 v2; // rdx@2

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
  const char *v1; // rbx@1
  char *v2; // rbx@3
  bool v3; // zf@3

  v1 = sub_40AB40(a1);
  if ( !*v1 )
    v1 = a1;
  v2 = (char *)&v1[sub_40ABA0(v1)];
  v3 = *v2 == 0;
  *v2 = 0;
  return !v3;
}

int j__posix_fadvise(int fd, off_t offset, off_t len, int advise)
{
  return posix_fadvise(fd, offset, len, advise);
}

__int64 __fastcall sub_40AC50(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_40EAF0(v4);
}

void __fastcall sub_40ACA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@2
  __int64 v4; // rax@2
  __int64 v5; // rbx@2
  __int64 v6; // rax@2
  __int64 v7; // rax@2

  if ( a1 )
  {
    v3 = a3;
    LODWORD(v4) = sub_4100E0(24LL, a2);
    v5 = v4;
    LODWORD(v6) = sub_410310(a2, a2);
    *(_QWORD *)v5 = v6;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v5 + 16) = *(_QWORD *)v3;
    LODWORD(v7) = sub_40C0B0(a1, v5);
    if ( !v7 )
      sub_410330(a1, v5);
    if ( v5 != v7 )
      sub_40C380(v5, v5);
  }
}

bool __fastcall sub_40AD30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax@2
  __int64 v4; // rax@2
  bool result; // al@2
  __int64 v6; // [sp+0h] [bp-28h]@2
  __int64 v7; // [sp+8h] [bp-20h]@2
  __int64 v8; // [sp+10h] [bp-18h]@2

  if ( a1 )
  {
    v3 = *(_QWORD *)(a3 + 8);
    v6 = a2;
    v7 = v3;
    v8 = *(_QWORD *)a3;
    LODWORD(v4) = sub_40B6A0(a1, &v6);
    result = v4 != 0;
  }
  else
  {
    result = 0;
  }
  return result;
}

signed __int64 __fastcall sub_40AD70(__int16 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14

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
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  return result;
}

__int64 __fastcall sub_40AF00(void *a1, void *a2)
{
  __int64 result; // rax@1

  result = sub_40AF20(a1, a2);
  if ( !result )
    sub_410330(a1, a2);
  return result;
}

void *__fastcall sub_40AF20(void *src, void *a2, _QWORD *a3)
{
  const char *v3; // r12@1
  const char *v4; // rax@1
  const char *v5; // r14@1
  size_t v6; // rax@1
  size_t v7; // rbx@1
  size_t v8; // rbp@1
  size_t v9; // rax@4
  size_t v10; // r14@4
  void *v11; // rax@4
  void *v12; // r15@4
  _BYTE *v13; // rax@5
  char *v14; // rdi@5
  _QWORD *v16; // [sp+0h] [bp-48h]@1
  char v17; // [sp+Fh] [bp-39h]@3

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
  }
  else
  {
    v5 = 0LL;
  }
  return v5;
}

unsigned __int64 __fastcall sub_40B080(unsigned __int64 a1)
{
  signed __int64 v1; // rsi@1
  unsigned __int64 v2; // rsi@3
  unsigned __int64 v3; // rax@4
  signed __int64 v4; // r8@6
  unsigned __int64 v5; // rdi@6
  unsigned __int64 v6; // rcx@6

  v1 = 10LL;
  if ( a1 >= 0xA )
    v1 = a1;
  v2 = v1 | 1;
  if ( v2 != -1LL )
  {
    while ( 1 )
    {
      v3 = v2 - 3 * ((unsigned __int64)(0x0AAAAAAAAAAAAAAABLL * (unsigned __int128)v2 >> 64) >> 1);
      if ( v2 <= 9 )
        goto LABEL_9;
      if ( v2 != 3 * ((unsigned __int64)(0x0AAAAAAAAAAAAAAABLL * (unsigned __int128)v2 >> 64) >> 1) )
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

signed __int64 __fastcall sub_40B140(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

signed __int64 __fastcall sub_40B140(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40B170(__int64 a1, __int64 a2, __int64 **a3, char a4)
{
  __int64 **v4; // r14@1
  char v5; // r13@1
  __int64 v6; // rbp@1
  __int64 *v7; // rax@1
  __int64 v8; // rsi@1
  __int64 *v9; // rbx@2
  __int64 v10; // rax@4
  const __m128i *v12; // rax@16

  v4 = a3;
  v5 = a4;
  v6 = a2;
  v7 = (__int64 *)sub_40B140(a1, a2);
  *v4 = v7;
  v8 = *v7;
  if ( *v7 )
  {
    v9 = v7;
    if ( v8 != v6 )
    {
      if ( !(unsigned __int8)(*(int (__fastcall **)(__int64))(a1 + 56))(v6) )
      {
        v10 = v9[1];
        if ( v10 )
        {
          v8 = *(_QWORD *)v10;
          if ( v6 != *(_QWORD *)v10 )
          {
            while ( !(unsigned __int8)(*(int (__fastcall **)(__int64))(a1 + 56))(v6) )
            {
              v9 = (__int64 *)v9[1];
              v10 = v9[1];
              if ( !v10 )
                return 0LL;
              v8 = *(_QWORD *)v10;
              if ( *(_QWORD *)v10 == v6 )
                goto LABEL_11;
            }
            v10 = v9[1];
            v8 = *(_QWORD *)v10;
          }
LABEL_11:
          if ( v5 )
          {
            v9[1] = *(_QWORD *)(v10 + 8);
            *(_QWORD *)v10 = 0LL;
            *(_QWORD *)(v10 + 8) = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v10;
          }
          return v8;
        }
        return 0LL;
      }
      v8 = *v9;
    }
    if ( v5 )
    {
      v12 = (const __m128i *)v9[1];
      if ( v12 )
      {
        *(__m128i *)v9 = _mm_loadu_si128(v12);
        v12->m128i_i64[0] = 0LL;
        v12->m128i_i64[1] = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v12;
        return v8;
      }
      *v9 = 0LL;
    }
    return v8;
  }
  return 0LL;
}

signed __int64 __fastcall sub_40B290(void **a1)
{
  void *v1; // rax@1
  float v2; // xmm0_4@2
  float v3; // xmm1_4@5
  float v4; // xmm2_4@5
  signed __int64 result; // rax@7

  v1 = *a1;
  if ( *a1 == &unk_415C00 )
  {
    result = 1LL;
  }
  else
  {
    v2 = *((float *)v1 + 2);
    if ( v2 <= 0.1
      || v2 >= 0.89999998
      || *((float *)v1 + 3) <= 1.1
      || (v3 = *(float *)v1 + 0.1, v4 = *((float *)v1 + 1), v4 <= v3)
      || v4 > 1.0
      || (result = 1LL, v2 <= v3) )
    {
      *a1 = &unk_415C00;
      result = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_40B310(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14@1
  unsigned __int64 v4; // r12@1
  __int64 v5; // r15@4
  __int64 v6; // rbx@5
  __int64 v7; // r15@8
  signed __int64 v8; // rax@8
  __int64 v9; // rdx@8
  _QWORD *v10; // rax@12
  _QWORD *v11; // rbx@12
  _QWORD *v12; // rax@13
  __int64 v13; // rdx@15

  v3 = a3;
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    return 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)v4;
      if ( *(_QWORD *)v4 )
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( v6 )
        {
          do
          {
            while ( 1 )
            {
              v7 = *(_QWORD *)v6;
              v8 = sub_40B140(a1, *(_QWORD *)v6);
              v9 = *(_QWORD *)(v6 + 8);
              if ( !*(_QWORD *)v8 )
                break;
              *(_QWORD *)(v6 + 8) = *(_QWORD *)(v8 + 8);
              *(_QWORD *)(v8 + 8) = v6;
              v6 = v9;
              if ( !v9 )
                goto LABEL_10;
            }
            *(_QWORD *)v8 = v7;
            ++*(_QWORD *)(a1 + 24);
            *(_QWORD *)v6 = 0LL;
            *(_QWORD *)(v6 + 8) = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v6;
            v6 = v9;
          }
          while ( v9 );
LABEL_10:
          v5 = *(_QWORD *)v4;
        }
        *(_QWORD *)(v4 + 8) = 0LL;
        if ( !v3 )
          break;
      }
      v4 += 16LL;
      if ( *(_QWORD *)(a2 + 8) <= v4 )
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
    *(_QWORD *)v4 = 0LL;
    v4 += 16LL;
    --*(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 8) <= v4 )
      return 1LL;
  }
  v12 = malloc(0x10uLL);
  if ( v12 )
    goto LABEL_15;
  return 0LL;
}

__int64 __fastcall sub_40B6A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 *v3; // rax@1
  __int64 v4; // rsi@1
  __int64 *v5; // rbx@2
  __int64 result; // rax@7

  v2 = a2;
  v3 = (__int64 *)sub_40B140(a1, a2);
  v4 = *v3;
  if ( *v3 )
  {
    v5 = v3;
    while ( v4 != v2 )
    {
      if ( (unsigned __int8)(*(int (__fastcall **)(__int64))(a1 + 56))(v2) )
      {
        v2 = *v5;
        break;
      }
      v5 = (__int64 *)v5[1];
      if ( !v5 )
        goto LABEL_7;
      v4 = *v5;
    }
    result = v2;
  }
  else
  {
LABEL_7:
    result = 0LL;
  }
  return result;
}

char **__fastcall sub_40B910(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(), __int64 (__fastcall *a4)(), char *a5)
{
  char *v5; // r14@1
  __int64 (__fastcall *v6)(); // r13@1
  __int64 (__fastcall *v7)(); // r12@1
  unsigned __int64 v8; // rbp@1
  void *v9; // rax@5
  char **v10; // rbx@5
  void **v11; // rdi@6
  unsigned __int64 v12; // rbp@9
  char *v13; // rax@12
  char **v14; // rdi@14
  float v16; // xmm1_4@16
  float v17; // xmm0_4@18
  float v18; // xmm0_4@19

  v5 = a5;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  if ( !a3 )
    v7 = sub_40B120;
  if ( !a4 )
    v6 = sub_40B130;
  v9 = malloc(0x50uLL);
  v10 = (char **)v9;
  if ( v9 )
  {
    v11 = (void **)((char *)v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40B290(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40B080(v8);
        if ( !_bittest64((const signed __int64 *)&v12, 0x3Cu) && v12 >> 61 == 0 )
        {
          v10[2] = (char *)v12;
          if ( v12 )
          {
            v13 = (char *)calloc(v12, 0x10uLL);
            *v10 = v13;
            if ( v13 )
            {
              v10[3] = 0LL;
              v10[4] = 0LL;
              v10[1] = &v13[16 * v12];
              v10[6] = (char *)v7;
              v10[7] = (char *)v6;
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
        v17 = (float)(signed int)(v8 & 1 | (v8 >> 1)) + (float)(signed int)(v8 & 1 | (v8 >> 1));
        goto LABEL_19;
      }
    }
    v17 = (float)(signed int)v8;
LABEL_19:
    v18 = v17 / v16;
    if ( v18 >= 1.8446744e19 )
      goto LABEL_14;
    if ( v18 < 9.223372e18 )
      v8 = (unsigned int)(signed int)ffloor(v18);
    else
      v8 = (unsigned int)(signed int)ffloor(v18 - 9.223372e18) ^ 0x8000000000000000LL;
    goto LABEL_9;
  }
  return v10;
}

signed __int64 __fastcall sub_40BC30(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12@1
  float v3; // xmm0_4@3
  float v4; // xmm0_4@4
  unsigned __int64 v5; // rax@7
  size_t v6; // rbx@7
  bool v7; // sf@7
  signed __int64 v8; // rax@7
  void *v9; // rax@12
  signed __int64 v10; // rbx@13
  __int64 v11; // rax@13
  __int64 v12; // rax@13
  __int64 v13; // rax@13
  unsigned int v14; // ebx@13
  void *v16; // [sp+0h] [bp-68h]@12
  __int64 v17; // [sp+8h] [bp-60h]@13
  size_t v18; // [sp+10h] [bp-58h]@13
  __int64 v19; // [sp+18h] [bp-50h]@13
  __int64 v20; // [sp+20h] [bp-48h]@13
  __int64 v21; // [sp+28h] [bp-40h]@13
  __int64 v22; // [sp+30h] [bp-38h]@13
  __int64 v23; // [sp+38h] [bp-30h]@13
  __int64 v24; // [sp+40h] [bp-28h]@13
  __int64 v25; // [sp+48h] [bp-20h]@13

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( (a2 & 0x8000000000000000LL) != 0LL )
      v3 = (float)(signed int)(a2 & 1 | (a2 >> 1)) + (float)(signed int)(a2 & 1 | (a2 >> 1));
    else
      v3 = (float)(signed int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(signed int)ffloor(v4);
    else
      a2 = (unsigned int)(signed int)ffloor(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_40B080(a2);
  v6 = v5;
  v7 = (8 * v5 & 0x8000000000000000LL) != 0LL;
  v8 = v5 >> 61 != 0;
  if ( v7 )
    v8 = 1LL;
  if ( !v6 || v8 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v6 )
    return 1LL;
  v9 = calloc(v6, 0x10uLL);
  v16 = v9;
  if ( !v9 )
    return 0;
  v18 = v6;
  v10 = (signed __int64)v9 + 16 * v6;
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
  v14 = sub_40B310((__int64)&v16, a1, 0);
  if ( (_BYTE)v14 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 72) = v25;
    return v14;
  }
  *(_QWORD *)(a1 + 72) = v25;
  if ( !(unsigned __int8)sub_40B310(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40B310(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40BC30(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12@1
  float v3; // xmm0_4@3
  float v4; // xmm0_4@4
  unsigned __int64 v5; // rax@7
  size_t v6; // rbx@7
  bool v7; // sf@7
  signed __int64 v8; // rax@7
  void *v9; // rax@12
  signed __int64 v10; // rbx@13
  __int64 v11; // rax@13
  __int64 v12; // rax@13
  __int64 v13; // rax@13
  unsigned int v14; // ebx@13
  void *v16; // [sp+0h] [bp-68h]@12
  __int64 v17; // [sp+8h] [bp-60h]@13
  size_t v18; // [sp+10h] [bp-58h]@13
  __int64 v19; // [sp+18h] [bp-50h]@13
  __int64 v20; // [sp+20h] [bp-48h]@13
  __int64 v21; // [sp+28h] [bp-40h]@13
  __int64 v22; // [sp+30h] [bp-38h]@13
  __int64 v23; // [sp+38h] [bp-30h]@13
  __int64 v24; // [sp+40h] [bp-28h]@13
  __int64 v25; // [sp+48h] [bp-20h]@13

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( (a2 & 0x8000000000000000LL) != 0LL )
      v3 = (float)(signed int)(a2 & 1 | (a2 >> 1)) + (float)(signed int)(a2 & 1 | (a2 >> 1));
    else
      v3 = (float)(signed int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(signed int)ffloor(v4);
    else
      a2 = (unsigned int)(signed int)ffloor(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_40B080(a2);
  v6 = v5;
  v7 = (8 * v5 & 0x8000000000000000LL) != 0LL;
  v8 = v5 >> 61 != 0;
  if ( v7 )
    v8 = 1LL;
  if ( !v6 || v8 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v6 )
    return 1LL;
  v9 = calloc(v6, 0x10uLL);
  v16 = v9;
  if ( !v9 )
    return 0;
  v18 = v6;
  v10 = (signed __int64)v9 + 16 * v6;
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
  v14 = sub_40B310((__int64)&v16, a1, 0);
  if ( (_BYTE)v14 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 72) = v25;
    return v14;
  }
  *(_QWORD *)(a1 + 72) = v25;
  if ( !(unsigned __int8)sub_40B310(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40B310(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40BE30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r12@2
  __int64 v4; // rbp@2
  __int64 v5; // rdx@2
  signed __int64 result; // rax@3
  unsigned __int64 v7; // rax@6
  __int64 v8; // rdx@7
  float v9; // xmm1_4@7
  unsigned __int64 v10; // rax@7
  __int64 *v11; // r12@9
  _QWORD *v12; // rax@10
  __int64 v13; // rdx@12
  signed int v14; // edx@13
  float v15; // xmm1_4@13
  __int64 v16; // rdx@15
  __int64 v17; // rax@15
  float v18; // xmm2_4@15
  float v19; // xmm0_4@16
  __int64 v20; // rax@17
  float v21; // xmm1_4@18
  float v22; // xmm0_4@20
  signed __int64 v23; // rcx@27
  signed __int64 v24; // rcx@28
  unsigned __int64 v25; // rsi@30
  __int64 *v26; // [sp+8h] [bp-20h]@2

  if ( !a2 )
    goto LABEL_35;
  v3 = a3;
  v4 = a2;
  v5 = sub_40B170(a1, a2, &v26, 0);
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
        if ( v9 <= (float)((float)(signed int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_40B290((void **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(signed int)v24 + (float)(signed int)v24;
        }
        else
        {
          v19 = (float)(signed int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(signed int)v23 + (float)(signed int)v23;
        }
        else
        {
          v21 = (float)(signed int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18 ? (unsigned int)(signed int)ffloor(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(signed int)ffloor(v22);
        if ( !(unsigned __int8)sub_40BC30(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B170(a1, v4, &v26, 0) )
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
      v9 = (float)(signed int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( (v10 & 0x8000000000000000LL) == 0LL )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(signed int)(v10 & 1 | (v10 >> 1)) + (float)(signed int)(v10 & 1 | (v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( v3 )
    *v3 = v5;
  return result;
}

signed __int64 __fastcall sub_40BE30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r12@2
  __int64 v4; // rbp@2
  __int64 v5; // rdx@2
  signed __int64 result; // rax@3
  unsigned __int64 v7; // rax@6
  __int64 v8; // rdx@7
  float v9; // xmm1_4@7
  unsigned __int64 v10; // rax@7
  __int64 *v11; // r12@9
  _QWORD *v12; // rax@10
  __int64 v13; // rdx@12
  signed int v14; // edx@13
  float v15; // xmm1_4@13
  __int64 v16; // rdx@15
  __int64 v17; // rax@15
  float v18; // xmm2_4@15
  float v19; // xmm0_4@16
  __int64 v20; // rax@17
  float v21; // xmm1_4@18
  float v22; // xmm0_4@20
  signed __int64 v23; // rcx@27
  signed __int64 v24; // rcx@28
  unsigned __int64 v25; // rsi@30
  __int64 *v26; // [sp+8h] [bp-20h]@2

  if ( !a2 )
    goto LABEL_35;
  v3 = a3;
  v4 = a2;
  v5 = sub_40B170(a1, a2, &v26, 0);
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
        if ( v9 <= (float)((float)(signed int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_40B290((void **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(signed int)v24 + (float)(signed int)v24;
        }
        else
        {
          v19 = (float)(signed int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(signed int)v23 + (float)(signed int)v23;
        }
        else
        {
          v21 = (float)(signed int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18 ? (unsigned int)(signed int)ffloor(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(signed int)ffloor(v22);
        if ( !(unsigned __int8)sub_40BC30(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40B170(a1, v4, &v26, 0) )
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
      v9 = (float)(signed int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( (v10 & 0x8000000000000000LL) == 0LL )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(signed int)(v10 & 1 | (v10 >> 1)) + (float)(signed int)(v10 & 1 | (v10 >> 1)))
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
  __int64 v2; // rbx@1
  int v3; // eax@1
  __int64 result; // rax@4
  __int64 v5; // [sp+8h] [bp-10h]@1

  v2 = a2;
  v3 = sub_40BE30(a1, a2, &v5);
  if ( v3 == -1 )
  {
    result = 0LL;
  }
  else
  {
    if ( !v3 )
      v2 = v5;
    result = v2;
  }
  return result;
}

__int64 __fastcall sub_40C0F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  __int64 v3; // rbp@1
  _QWORD *v4; // rax@2
  unsigned __int64 v6; // rax@4
  float *v7; // rdx@5
  float v8; // xmm0_4@5
  unsigned __int64 v9; // rax@5
  float v10; // xmm1_4@6
  __int64 v11; // rax@8
  __int64 v12; // rdx@8
  float v13; // xmm0_4@9
  __int64 v14; // rax@10
  float v15; // xmm1_4@11
  float v16; // xmm0_4@13
  unsigned __int64 v17; // rsi@16
  __int64 v18; // rdi@18
  __int64 v19; // r12@19
  signed int v20; // edx@21
  float v21; // xmm0_4@21
  signed __int64 v22; // rcx@23
  signed __int64 v23; // rcx@24
  _QWORD *v24; // [sp+8h] [bp-20h]@1

  v2 = a1;
  v3 = sub_40B170(a1, a2, &v24, 1);
  if ( !v3 )
    return v3;
  v4 = v24;
  --*(_QWORD *)(a1 + 32);
  if ( *v4 )
    return v3;
  v6 = *(_QWORD *)(a1 + 24) - 1LL;
  *(_QWORD *)(a1 + 24) = v6;
  if ( (v6 & 0x8000000000000000LL) != 0LL )
  {
    v20 = v6 & 1 | (v6 >> 1);
    v9 = *(_QWORD *)(a1 + 16);
    v21 = (float)v20;
    v7 = *(float **)(a1 + 40);
    v8 = v21 + v21;
    if ( (v9 & 0x8000000000000000LL) == 0LL )
      goto LABEL_6;
LABEL_22:
    v10 = (float)(signed int)(v9 & 1 | (v9 >> 1)) + (float)(signed int)(v9 & 1 | (v9 >> 1));
    goto LABEL_7;
  }
  v7 = *(float **)(a1 + 40);
  v8 = (float)(signed int)v6;
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 0x8000000000000000LL) != 0LL )
    goto LABEL_22;
LABEL_6:
  v10 = (float)(signed int)v9;
LABEL_7:
  if ( (float)(v10 * *v7) > v8 )
  {
    sub_40B290((void **)(a1 + 40));
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 40);
    if ( v11 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
      v13 = (float)(signed int)v23 + (float)(signed int)v23;
    }
    else
    {
      v13 = (float)(signed int)v11;
    }
    v14 = *(_QWORD *)(a1 + 24);
    if ( v14 < 0 )
    {
      v22 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
      v15 = (float)(signed int)v22 + (float)(signed int)v22;
    }
    else
    {
      v15 = (float)(signed int)v14;
    }
    if ( (float)(*(float *)v12 * v13) > v15 )
    {
      v16 = v13 * *(float *)(v12 + 4);
      if ( !*(_BYTE *)(v12 + 16) )
        v16 = v16 * *(float *)(v12 + 8);
      if ( v16 >= 9.223372e18 )
        v17 = (unsigned int)(signed int)ffloor(v16 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v17 = (unsigned int)(signed int)ffloor(v16);
      if ( !(unsigned __int8)sub_40BC30(a1, v17) )
      {
        v18 = *(_QWORD *)(a1 + 72);
        if ( v18 )
        {
          do
          {
            v19 = *(_QWORD *)(v18 + 8);
            free((void *)v18);
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

unsigned __int64 __fastcall sub_40C2D0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = sub_4115A0(*(_QWORD *)a1);
  return (*(_QWORD *)(a1 + 8) ^ v2) % a2;
}

unsigned __int64 __fastcall sub_40C300(__int64 a1, unsigned __int64 a2)
{
  return *(_QWORD *)(a1 + 8) % a2;
}

int __fastcall sub_40C310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int result; // eax@2

  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) || *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16) )
    result = 0;
  else
    result = sub_40E2F0(*(_QWORD *)a1, *(_QWORD *)a2, a3, a4, a5, a6);
  return result;
}

void __fastcall sub_40C380(void **a1)
{
  free(*a1);
  free(a1);
}

char *__fastcall sub_40C3A0(const char *a1)
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
  qword_61B920 = v1;
  program_invocation_name = v1;
  return result;
}

int __fastcall sub_40C440(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebp@1
  __int64 v6; // rbx@1
  int result; // eax@2
  char v8; // [sp+Ch] [bp-1Ch]@1

  v5 = a4;
  v6 = a3;
  if ( sub_411440(a1, a2, a5, &v8) )
    result = -2;
  else
    result = sub_411470(&v8, v6, v5);
  return result;
}

int __fastcall sub_40C480(__int64 a1, unsigned int a2, int a3)
{
  int v4; // [sp+Ch] [bp-Ch]@1

  v4 = a3;
  return sub_411470(&v4, a1, a2);
}

char *__fastcall sub_40C4A0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_4115E0(0LL);
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
    v2 = "�\ae";
    if ( !v5 )
      v2 = "��";
    return (char *)v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_40C5A0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_40C4A0("`", v11);
        v58 = sub_40C4A0("'", v11);
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
            return sub_40C5A0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40C5A0((__int64)v9, v79, s);
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
                return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
          return sub_40C5A0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40C5A0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4113C0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_40C5A0((__int64)v9, v10, s);
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
      return sub_40C5A0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_40C5A0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_40C4A0("`", v11);
        v58 = sub_40C4A0("'", v11);
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
            return sub_40C5A0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40C5A0((__int64)v9, v79, s);
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
                return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
            return sub_40C5A0((__int64)v9, v10, s);
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
              return sub_40C5A0((__int64)v9, v10, s);
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
          return sub_40C5A0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40C5A0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4113C0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_40C5A0((__int64)v9, v10, s);
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
      return sub_40C5A0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_40D7D0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_61B418;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61B430 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_410330(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_61B418 == &xmmword_61B420 )
    {
      LODWORD(v20) = sub_410140(0LL, v9);
      v7 = v20;
      off_61B418 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B420);
    }
    else
    {
      LODWORD(v10) = sub_410140(off_61B418, v9);
      off_61B418 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61B430], 0, 16LL * ((signed int)a1 + 1 - dword_61B430));
    dword_61B430 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_40C5A0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_61B940 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4100E0(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_40C5A0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_40D7D0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_61B418;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61B430 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_410330(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_61B418 == &xmmword_61B420 )
    {
      LODWORD(v20) = sub_410140(0LL, v9);
      v7 = v20;
      off_61B418 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B420);
    }
    else
    {
      LODWORD(v10) = sub_410140(off_61B418, v9);
      off_61B418 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61B430], 0, 16LL * ((signed int)a1 + 1 - dword_61B430));
    dword_61B430 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_40C5A0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_61B940 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_4100E0(v15, v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_40C5A0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_40DCF0(__int64 a1, int a2, char *a3)
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
  return sub_40D7D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DCF0(__int64 a1, int a2, char *a3)
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
  return sub_40D7D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DDD0(int a1, char *a2)
{
  return sub_40DCF0(0LL, a1, a2);
}

_BYTE *__fastcall sub_40DDF0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_61BA70;
  v4 = _mm_load_si128((const __m128i *)&xmmword_61BA40);
  v5 = _mm_load_si128((const __m128i *)&xmmword_61BA50);
  v6 = _mm_load_si128((const __m128i *)&xmmword_61BA60);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_40D7D0(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_40DE70(char *a1)
{
  return sub_40DDF0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40DEA0(__int64 a1, int a2, char *a3)
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
  return sub_40D7D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40DEA0(__int64 a1, int a2, char *a3)
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
  return sub_40D7D0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
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
  int v5; // er13@1
  char *v6; // r12@1
  unsigned int v7; // ebp@1
  unsigned int v8; // eax@1
  unsigned int v9; // edx@1
  unsigned int v10; // ST08_4@2
  int *v11; // rax@2
  int *v12; // r9@2
  bool v13; // r15@2
  int v15; // eax@7
  size_t v16; // rbp@11
  size_t v17; // rax@11
  int *v18; // [sp+8h] [bp-160h]@7
  int *v19; // [sp+8h] [bp-160h]@11
  struct stat v20; // [sp+10h] [bp-158h]@15
  struct stat stat_buf; // [sp+A0h] [bp-C8h]@7

  v5 = newfd;
  v6 = a4;
  v7 = a5;
  v8 = syscall(316LL, (unsigned int)oldfd, old, (unsigned int)newfd, a4, a5);
  v9 = v8;
  if ( (v8 & 0x80000000) != 0 )
  {
    v10 = v8;
    v11 = __errno_location();
    v9 = v10;
    v12 = v11;
    v13 = *v11 != 95 && ((*v11 - 22) & 0xFFFFFFEF) != 0;
    if ( !v13 )
    {
      if ( v7 )
      {
        if ( v7 & 0xFFFFFFFE )
        {
          *v11 = 95;
          return (unsigned int)-1;
        }
        v18 = v11;
        v15 = __fxstatat(1, v5, v6, &stat_buf, 256);
        v12 = v18;
        if ( !v15 || *v18 == 75 )
        {
          *v18 = 17;
          return (unsigned int)-1;
        }
        if ( *v18 != 2 )
          return (unsigned int)-1;
        v13 = 1;
      }
      v19 = v12;
      v16 = strlen(old);
      v17 = strlen(v6);
      if ( !v16 || !v17 || old[v16 - 1] != 47 && v6[v17 - 1] != 47 )
        return (unsigned int)renameat(oldfd, old, v5, v6);
      if ( !__fxstatat(1, oldfd, old, &v20, 256) )
      {
        if ( v13 )
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

__int64 __fastcall sub_40E290(int fd, void *buf, size_t n)
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

__int64 __fastcall sub_40E2F0(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // ebx@1
  const char *v3; // rbp@1
  const char *v4; // r12@1
  size_t v5; // r13@1
  const char *v7; // rbp@4
  const char *v8; // r12@4
  int *v9; // rax@7
  int *v10; // rax@5
  __int64 v11; // [sp+0h] [bp-158h]@4
  __int64 v12; // [sp+8h] [bp-150h]@8
  struct stat stat_buf; // [sp+90h] [bp-C8h]@6

  v2 = 0;
  v3 = sub_40AB40(a1);
  v4 = sub_40AB40(a2);
  v5 = sub_40ABA0(v3);
  if ( v5 == sub_40ABA0(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (const char *)sub_40AA60(a1, (__int64)v4);
    v8 = (const char *)sub_40AA60(a2, (__int64)v4);
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
    free((void *)v7);
    free((void *)v8);
  }
  return v2;
}

signed __int64 __fastcall sub_40E420(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax@1
  unsigned __int64 v3; // rdx@1

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

char *__fastcall sub_40E450(DIR *dirp, signed __int64 a2)
{
  DIR *v2; // rbx@2
  unsigned __int64 v3; // r15@2
  unsigned __int64 v4; // r12@2
  char *v5; // r14@2
  char *v6; // r13@2
  int *v7; // rbp@2
  struct dirent *v8; // rax@4
  struct dirent *v9; // rcx@4
  const char *v10; // r8@5
  char v11; // al@5
  const char *v12; // rdi@8
  const char *v13; // ST18_8@8
  size_t v14; // rax@8
  const void *v15; // r8@8
  size_t v16; // rdx@8
  struct dirent *v17; // rcx@9
  size_t n; // ST30_8@10
  struct dirent *v19; // ST28_8@10
  signed __int64 v20; // r12@10
  __int64 v21; // rax@10
  int v22; // ebx@12
  char *v23; // rax@15
  char *v24; // rbp@15
  unsigned __int64 v25; // rsi@16
  __int64 v26; // rbp@16
  signed __int64 v27; // r12@16
  const char **v28; // rbx@16
  char *v29; // rax@16
  const char *v30; // rsi@17
  signed __int64 v32; // rax@26
  size_t v33; // ST30_8@28
  const void *v34; // ST28_8@28
  char *v35; // rax@28
  signed __int64 v36; // ST38_8@35
  size_t v37; // ST30_8@35
  char *v38; // rax@35
  char *v39; // rax@36
  char *v40; // rdi@37
  int (*compar)(const void *, const void *); // [sp+8h] [bp-70h]@1
  signed __int64 v42; // [sp+10h] [bp-68h]@2
  char *src; // [sp+18h] [bp-60h]@9
  unsigned __int64 srca; // [sp+18h] [bp-60h]@22
  signed __int64 v45; // [sp+20h] [bp-58h]@2
  struct dirent *v46; // [sp+28h] [bp-50h]@8

  a2 = (unsigned int)a2;
  compar = (int (*)(const void *, const void *))qword_4169E0[(unsigned __int64)(unsigned int)a2];
  if ( !dirp )
    return 0LL;
  v2 = dirp;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
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
        v13 = v10;
        v46 = v9;
        v14 = strlen(v10);
        v15 = v13;
        v16 = v14 + 1;
        if ( compar )
        {
          v17 = v46;
          src = (char *)(v4 + 1);
          if ( v4 == v45 )
          {
            if ( v5 )
            {
              if ( v4 > 0x555555555555554LL )
                goto LABEL_41;
              v45 = (signed __int64)&src[v4 >> 1];
              a2 = 16LL * (_QWORD)&src[v4 >> 1];
            }
            else if ( v4 )
            {
              a2 = 16 * v4;
              if ( v4 & 0x800000000000000LL || v4 >> 60 != 0 )
LABEL_41:
                sub_410330(v12, a2);
            }
            else
            {
              v45 = 8LL;
              a2 = 128LL;
              src = (char *)1;
            }
            v36 = v14 + 1;
            v37 = (size_t)v15;
            LODWORD(v38) = sub_410140(v5, a2);
            v16 = v36;
            v15 = (const void *)v37;
            v5 = v38;
            v17 = v46;
          }
          n = v16;
          v19 = v17;
          v20 = (signed __int64)&v5[16 * v4];
          LODWORD(v21) = sub_410310(v15, a2);
          *(_QWORD *)v20 = v21;
          v3 += n;
          *(_QWORD *)(v20 + 8) = v19->d_ino;
          v4 = (unsigned __int64)src;
        }
        else
        {
          a2 = v16 + v3;
          srca = v16 + v3;
          if ( v42 - v3 > v16 )
            goto LABEL_29;
          if ( __CFADD__(v16, v3) )
            goto LABEL_41;
          if ( v6 )
          {
            a2 = v16 + v3;
            if ( srca > 0x5555555555555553LL )
              goto LABEL_41;
            v32 = srca + (srca >> 1) + 1;
          }
          else
          {
            v32 = v16 + v3;
            if ( !a2 )
            {
              v42 = 128LL;
              goto LABEL_28;
            }
            if ( a2 < 0 )
              goto LABEL_41;
          }
          v42 = v32;
LABEL_28:
          v33 = v16;
          v34 = v15;
          LODWORD(v35) = sub_410140(v6, v42);
          v16 = v33;
          v15 = v34;
          v6 = v35;
LABEL_29:
          a2 = (signed __int64)v15;
          memcpy(&v6[v3], v15, v16);
          v3 = srca;
        }
      }
    }
  }
  v22 = *v7;
  if ( *v7 )
  {
    free(v5);
    v40 = v6;
    v6 = 0LL;
    free(v40);
    *v7 = v22;
  }
  else
  {
    if ( compar )
    {
      if ( v4 )
      {
        v25 = v4;
        v26 = 0LL;
        qsort(v5, v4, 0x10uLL, compar);
        v27 = (signed __int64)&v5[16 * v4];
        v28 = (const char **)v5;
        LODWORD(v29) = sub_4100E0(v3 + 1, v25);
        v6 = v29;
        do
        {
          v30 = *v28;
          v28 += 2;
          v26 += stpcpy(&v6[v26], v30) - &v6[v26] + 1;
          free((void *)*(v28 - 2));
        }
        while ( v28 != (const char **)v27 );
        v24 = &v6[v26];
      }
      else
      {
        LODWORD(v23) = sub_4100E0(v3 + 1, a2);
        v6 = v23;
        v24 = v23;
      }
      free(v5);
    }
    else if ( v42 == v3 )
    {
      LODWORD(v39) = sub_410140(v6, v42 + 1);
      v6 = v39;
      v24 = &v39[v42];
    }
    else
    {
      v24 = &v6[v3];
    }
    *v24 = 0;
  }
  return v6;
}

char *__fastcall sub_40E7F0(const char *a1, unsigned int a2)
{
  DIR *v2; // rax@1
  DIR *v3; // rbx@2
  char *v4; // rbp@2
  char *result; // rax@3
  int *v6; // rax@5
  int v7; // er12@5
  int *v8; // rbx@5

  v2 = sub_40A9C0(a1);
  if ( v2 )
  {
    v3 = v2;
    v4 = sub_40E450(v2, a2);
    if ( closedir(v3) )
    {
      v6 = __errno_location();
      v7 = *v6;
      v8 = v6;
      free(v4);
      result = 0LL;
      *v8 = v7;
    }
    else
    {
      result = v4;
    }
  }
  else
  {
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_40E860(char *filename)
{
  int v1; // ebx@1
  int *v2; // rax@1
  __int64 result; // rax@3
  __int64 v4; // [sp+0h] [bp-98h]@1

  v1 = __lxstat(1, filename, (struct stat *)&v4);
  v2 = __errno_location();
  if ( v1 && *v2 != 75 )
  {
    result = (unsigned int)-(*v2 != 2);
  }
  else
  {
    *v2 = 17;
    result = 0xFFFFFFFFLL;
  }
  return result;
}

int __fastcall sub_40E8C0(const char *a1)
{
  return mkdir(a1, 0x1C0u);
}

int __fastcall sub_40E8D0(const char *a1, int *a2)
{
  int v2; // esi@1

  v2 = *a2;
  LOBYTE(v2) = v2 & 0x3C | 0xC2;
  return open(a1, v2, 384LL);
}

noreturn void  sub_40E8F0()
{
  __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147u, "gen_tempname_len");
}

__int64 __fastcall sub_40E910(char *s, int a2, __int64 a3, int (__fastcall *a4)(char *, __int64), size_t a5)
{
  size_t v5; // r13@1
  int *v6; // rax@1
  int *v7; // r15@1
  size_t v8; // rax@1
  size_t v9; // rdx@1
  size_t v10; // rbx@2
  void *v11; // rax@3
  void *v12; // rbp@3
  signed int v13; // er12@4
  char *v14; // rbx@4
  char *v15; // r14@5
  __int64 v16; // rax@6
  int v17; // edx@7
  int v18; // ecx@8
  signed int v19; // edx@10
  int v20; // ST10_4@12
  int v21; // ST08_4@12
  char *v23; // [sp+10h] [bp-58h]@2
  __int64 v24; // [sp+18h] [bp-50h]@1
  int (__fastcall *v25)(char *, __int64); // [sp+20h] [bp-48h]@1
  int v26; // [sp+2Ch] [bp-3Ch]@1

  v5 = a5;
  v24 = a3;
  v25 = a4;
  v6 = __errno_location();
  v7 = v6;
  v26 = *v6;
  v8 = strlen(s);
  v9 = v5 + a2;
  if ( v9 > v8 || (v10 = v8 - v9, v23 = &s[v8 - v9], v5 > strspn(&s[v8 - v9], "X")) )
  {
    *v7 = 22;
    v19 = -1;
  }
  else
  {
    LODWORD(v11) = sub_411B80(0LL, v5);
    v12 = v11;
    if ( v11 )
    {
      v13 = 238328;
      v14 = &s[v5] + v10;
      while ( 1 )
      {
        v15 = v23;
        if ( v5 )
        {
          do
          {
            ++v15;
            LODWORD(v16) = sub_411BC0(v12, 61LL);
            *(v15 - 1) = byte_416A80[v16];
          }
          while ( v15 != v14 );
        }
        v17 = v25(s, v24);
        if ( v17 >= 0 )
        {
          *v7 = v26;
          v18 = v26;
          goto LABEL_12;
        }
        v18 = *v7;
        if ( *v7 != 17 )
          break;
        if ( !--v13 )
        {
          sub_411CE0(v12);
          *v7 = 17;
          return (unsigned int)-1;
        }
      }
      v17 = -1;
LABEL_12:
      v20 = v17;
      v21 = v18;
      sub_411CE0(v12);
      v19 = v20;
      *v7 = v21;
    }
    else
    {
      v19 = -1;
    }
  }
  return (unsigned int)v19;
}

__int64 __fastcall sub_40EAF0(int fd)
{
  __int64 result; // rax@2
  int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_412750();
    v3 = __errno_location();
    v4 = *v3;
    v5 = v3;
    close(fd);
    result = (unsigned int)v2;
    *v5 = v4;
  }
  else
  {
    result = (unsigned int)fd;
  }
  return result;
}

__int64 __fastcall sub_40EB60(char *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13@1
  signed __int64 v5; // r12@1
  signed __int64 v6; // rbp@1
  __int64 v7; // r14@1
  signed int v8; // er15@1
  int v9; // ebx@1
  char **v10; // rdx@5
  _QWORD *v11; // rsi@6
  __int64 v12; // rax@7
  __int64 v13; // r9@7
  signed int v14; // edi@10
  __int64 *v16; // rdx@21
  __int64 v17; // rcx@23
  int v18; // er10@23
  int v19; // edi@23
  int v20; // ecx@24
  signed int v21; // esi@24
  signed int v22; // er8@25
  signed int v23; // er15@26
  int v24; // er11@27
  signed __int64 v25; // rax@31
  int v26; // eax@38
  signed int v27; // er8@38
  __int64 v28; // r9@38
  bool v29; // al@38
  int v30; // eax@41
  signed int v31; // er8@41
  int v32; // er10@41
  char v33; // al@42
  int v34; // ecx@42
  int v35; // eax@43
  int v36; // er10@44
  signed int v37; // ecx@48
  signed int v38; // esi@50
  signed __int64 v39; // rax@54
  _QWORD *v40; // rax@57
  __int64 v41; // rdi@59
  __int64 v42; // rax@60
  int v43; // eax@65
  int v44; // eax@68
  __int64 v45; // [sp+0h] [bp-148h]@37
  __int64 v46; // [sp+0h] [bp-148h]@40
  __int64 v47; // [sp+0h] [bp-148h]@43
  bool v48; // [sp+8h] [bp-140h]@2
  __int64 v49; // [sp+10h] [bp-138h]@5
  int v50; // [sp+10h] [bp-138h]@43
  signed int v51; // [sp+18h] [bp-130h]@10
  signed int v52; // [sp+18h] [bp-130h]@37
  signed int v53; // [sp+18h] [bp-130h]@40
  signed int v54; // [sp+18h] [bp-130h]@43
  char **v55; // [sp+18h] [bp-130h]@57
  char *filename; // [sp+20h] [bp-128h]@5
  __int64 v57; // [sp+30h] [bp-118h]@23
  signed int v58; // [sp+3Ch] [bp-10Ch]@26
  __int64 v59; // [sp+48h] [bp-100h]@24
  __int64 v60; // [sp+50h] [bp-F8h]@21
  int v61; // [sp+58h] [bp-F0h]@22
  char v62; // [sp+5Ch] [bp-ECh]@22
  __int64 v63; // [sp+60h] [bp-E8h]@37
  __int64 v64; // [sp+68h] [bp-E0h]@37
  __int64 v65; // [sp+70h] [bp-D8h]@37
  __int64 v66; // [sp+78h] [bp-D0h]@37
  struct stat stat_buf; // [sp+80h] [bp-C8h]@41

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
      goto LABEL_19;
    v9 = 1;
    if ( v6 == v5 )
    {
      if ( v8 <= (signed int)v7 )
        return v8 < (signed int)v7;
LABEL_19:
      return (unsigned int)-1;
    }
    return (unsigned int)v9;
  }
  v48 = v5 == v6 && (_DWORD)v7 == (_DWORD)v4;
  if ( v48 )
    return 0;
  if ( v6 - 1 > v5 )
    goto LABEL_19;
  if ( v5 - 1 <= v6 )
  {
    v10 = (char **)qword_61BA80;
    v49 = a2;
    filename = a1;
    if ( !qword_61BA80 )
    {
      v10 = sub_40B910(0x10uLL, 0LL, sub_40EB40, sub_40EB50, (char *)free);
      qword_61BA80 = (__int64)v10;
      if ( !v10 )
        goto LABEL_21;
    }
    v11 = (_QWORD *)qword_61BA78;
    if ( !qword_61BA78 )
    {
      v55 = v10;
      v40 = malloc(0x10uLL);
      v11 = v40;
      qword_61BA78 = (__int64)v40;
      if ( !v40 )
      {
        v41 = qword_61BA80;
        goto LABEL_60;
      }
      *((_DWORD *)v40 + 2) = 2000000000;
      v10 = v55;
      *((_BYTE *)v40 + 12) = 0;
    }
    *v11 = *(_QWORD *)v49;
    v12 = sub_40C0B0((__int64)v10, (__int64)v11);
    v13 = v12;
    if ( v12 )
    {
      if ( qword_61BA78 == v12 )
        qword_61BA78 = 0LL;
      goto LABEL_10;
    }
    v41 = qword_61BA80;
    if ( !qword_61BA80 )
    {
LABEL_21:
      v16 = &v60;
LABEL_22:
      v61 = 2000000000;
      v13 = (__int64)v16;
      v62 = 0;
      v51 = 2000000000;
      goto LABEL_23;
    }
LABEL_60:
    v60 = *(_QWORD *)v49;
    v42 = sub_40B6A0(v41, (__int64)&v60);
    v16 = &v60;
    v13 = v42;
    if ( !v42 )
      goto LABEL_22;
LABEL_10:
    v14 = *(_DWORD *)(v13 + 8);
    v51 = *(_DWORD *)(v13 + 8);
    if ( *(_BYTE *)(v13 + 12) )
    {
      v6 = ~(v14 == 2000000000) & (unsigned __int64)v6;
      v8 = v4 - v8 % v14;
      goto LABEL_12;
    }
LABEL_23:
    v17 = *(_QWORD *)(v49 + 112);
    v57 = *(_QWORD *)(v49 + 80);
    v18 = (signed int)v17 / 10;
    v19 = (signed int)v7 / 10;
    if ( (signed int)v7 % 10 | (signed int)v57 % 10 | (signed int)v17 % 10 )
    {
LABEL_56:
      *(_DWORD *)(v13 + 8) = v9;
      *(_BYTE *)(v13 + 12) = 1;
      goto LABEL_12;
    }
    v20 = (signed int)v57 / 10;
    v21 = v18;
    v59 = *(_QWORD *)(v49 + 72);
    if ( v51 <= 10 )
    {
      *(_DWORD *)(v13 + 8) = 10;
      v25 = v6;
      v22 = 10;
    }
    else
    {
      v22 = 10;
      if ( (signed int)v7 / 10 % 10 | v18 % 10 | (signed int)v57 / 10 % 10 )
      {
        *(_DWORD *)(v13 + 8) = 10;
        v25 = v6;
      }
      else
      {
        v58 = v8;
        v23 = 8;
        do
        {
          v24 = 10 * v22;
          v22 = v24;
          v20 /= 10;
          v21 /= 10;
          v19 /= 10;
          if ( v24 >= v51 || v19 % 10 | v21 % 10 | v20 % 10 )
          {
            v48 = v24 == 2000000000;
            v8 = v58;
            *(_DWORD *)(v13 + 8) = v24;
            v25 = v6 & ~(v24 == 2000000000);
            goto LABEL_32;
          }
          --v23;
        }
        while ( v23 );
        v8 = v58;
        if ( (*(_BYTE *)(v49 + 104) | (unsigned __int8)(v5 | v59)) & 1 )
        {
          *(_DWORD *)(v13 + 8) = 1000000000;
          v25 = v6;
          v22 = 1000000000;
        }
        else
        {
          *(_DWORD *)(v13 + 8) = 2000000000;
          v22 = 2000000000;
          v25 = v6 & 0xFFFFFFFFFFFFFFFELL;
          v48 = 1;
        }
      }
    }
LABEL_32:
    if ( v5 > v6 || (signed int)v7 >= (signed int)v4 && v5 == v6 )
      return (unsigned int)v9;
    if ( v5 < v25 || v5 == v25 && (signed int)v4 - v8 % v22 > (signed int)v7 )
      goto LABEL_19;
    v52 = v22;
    v63 = v59;
    v64 = (signed int)v57;
    v65 = v5 | v48;
    v66 = (signed int)(v22 / 9u + v7);
    v45 = v13;
    if ( (*(_DWORD *)(v49 + 24) & 0xF000) == 40960 )
    {
      v43 = sub_40F8B0(filename);
      v28 = v45;
      v27 = v52;
      v29 = v43 != 0;
    }
    else
    {
      v26 = sub_40F8A0(filename);
      v27 = v52;
      v28 = v45;
      v29 = v26 != 0;
    }
    if ( v29 )
LABEL_46:
      return (unsigned int)-2;
    v53 = v27;
    v46 = v28;
    if ( (*(_DWORD *)(v49 + 24) & 0xF000) == 40960 )
    {
      v44 = __lxstat(1, filename, &stat_buf);
      v13 = v46;
      v31 = v53;
      v32 = v44;
    }
    else
    {
      v30 = __xstat(1, filename, &stat_buf);
      v31 = v53;
      v13 = v46;
      v32 = v30;
    }
    v33 = stat_buf.st_mtim.tv_sec;
    v34 = stat_buf.st_mtim.tv_nsec;
    if ( v32 | v5 ^ stat_buf.st_mtim.tv_sec | stat_buf.st_mtim.tv_nsec ^ (signed int)v7 )
    {
      v66 = (signed int)v7;
      v65 = v5;
      v35 = *(_DWORD *)(v49 + 24);
      v54 = v31;
      v50 = v32;
      v47 = v13;
      if ( (v35 & 0xF000) == 40960 )
      {
        sub_40F8B0(filename);
        v13 = v47;
        v36 = v50;
        v31 = v54;
      }
      else
      {
        sub_40F8A0(filename);
        v31 = v54;
        v36 = v50;
        v13 = v47;
      }
      if ( v36 )
        goto LABEL_46;
      v33 = stat_buf.st_mtim.tv_sec;
      v34 = stat_buf.st_mtim.tv_nsec;
    }
    v37 = 1000000000 * (v33 & 1) + v34;
    if ( v37 == 10 * (v37 / 10) )
    {
      if ( v31 != 10 )
      {
        v38 = 9;
        v9 = 10;
        do
        {
          v37 /= 10;
          if ( v37 != 10 * (v37 / 10) )
            break;
          if ( !--v38 )
          {
            v39 = -2LL;
            v9 = 2000000000;
            goto LABEL_55;
          }
          v9 *= 10;
        }
        while ( v9 != v31 );
        v39 = ~(v9 == 2000000000);
        goto LABEL_55;
      }
      v9 = 10;
    }
    v39 = -1LL;
LABEL_55:
    v6 &= v39;
    v8 = v4 - v8 % v9;
    goto LABEL_56;
  }
  return (unsigned int)v9;
}

signed __int64 __fastcall sub_40F2D0(__int64 a1, struct timespec **a2)
{
  struct timespec *v2; // rbx@1
  __syscall_slong_t v3; // rax@1
  __syscall_slong_t v4; // rdx@1
  __syscall_slong_t v5; // rax@4
  signed __int64 result; // rax@4
  __syscall_slong_t v7; // rax@7

  v2 = *a2;
  v3 = (*a2)->tv_nsec;
  v4 = (*a2)[1].tv_nsec;
  if ( v3 == 1073741822 )
  {
    result = 1LL;
    if ( v4 == 1073741822 )
      return result;
    v7 = *(_QWORD *)(a1 + 80);
    v2->tv_sec = *(_QWORD *)(a1 + 72);
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
    v5 = *(_QWORD *)(a1 + 96);
    v2[1].tv_sec = *(_QWORD *)(a1 + 88);
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

signed __int64 __fastcall sub_40F3A0(__int64 a1)
{
  unsigned __int64 v1; // r9@1
  unsigned __int64 v2; // rdx@3
  int v3; // ecx@5
  signed int v4; // er10@5
  signed __int64 result; // rax@9

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 - 1073741822 > 1 && v1 > 0x3B9AC9FF || (v2 = *(_QWORD *)(a1 + 24), v2 - 1073741822 > 1) && v2 > 0x3B9AC9FF )
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
      *(_QWORD *)a1 = 0LL;
      v4 = 1;
      v3 = v1 == 1073741822;
    }
    if ( v2 - 1073741822 <= 1 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      v4 = 1;
      v3 += v2 == 1073741822;
    }
    result = v4 + (unsigned int)(v3 == 1);
  }
  return result;
}

__int64 __fastcall sub_40F460(int fd, char *filename, __int64 a3)
{
  char *v3; // rbp@1
  int v4; // ebx@1
  __m128i v5; // xmm1@2
  signed int v6; // er13@2
  struct timespec *v7; // rsi@7
  int v8; // er12@9
  bool v9; // zf@9
  bool v10; // al@14
  signed __int64 v11; // rdi@19
  struct timeval *v12; // r13@19
  signed __int64 v13; // rsi@19
  struct timeval *v14; // rdx@19
  struct utimbuf *v15; // rsi@22
  __time_t v16; // rax@23
  bool v18; // al@30
  __time_t v19; // rdx@34
  bool v20; // bp@40
  bool v21; // r14@40
  __time_t v22; // rax@43
  __m128i v23; // xmm3@43
  bool v24; // dl@43
  bool v25; // r14@43
  __syscall_slong_t v26; // rax@51
  struct timespec *times; // [sp+8h] [bp-120h]@2
  __m128i v28; // [sp+10h] [bp-118h]@2
  __m128i v29; // [sp+20h] [bp-108h]@2
  struct timeval tvp; // [sp+30h] [bp-F8h]@19
  __int64 v31; // [sp+40h] [bp-E8h]@19
  __int64 v32; // [sp+48h] [bp-E0h]@19
  struct utimbuf file_times; // [sp+50h] [bp-D8h]@23
  __m128i v34; // [sp+60h] [bp-C8h]@43
  struct stat stat_buf; // [sp+70h] [bp-B8h]@14

  v3 = filename;
  v4 = fd;
  if ( a3 )
  {
    v5 = _mm_loadu_si128((const __m128i *)(a3 + 16));
    times = (struct timespec *)&v28;
    v28 = _mm_loadu_si128((const __m128i *)a3);
    v29 = v5;
    v6 = sub_40F3A0((__int64)&v28);
    if ( v6 < 0 )
      goto LABEL_53;
  }
  else
  {
    times = 0LL;
    v6 = 0;
  }
  if ( fd < 0 && !filename )
  {
    *__errno_location() = 9;
    goto LABEL_53;
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
      goto LABEL_53;
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
    if ( v8 > 0 )
      goto LABEL_10;
  }
  else
  {
    v8 = futimens(fd, v7);
    v9 = v8 == 0;
    if ( v8 > 0 )
    {
LABEL_10:
      *__errno_location() = 38;
      goto LABEL_11;
    }
  }
  if ( v9 || *__errno_location() != 38 )
  {
    dword_61BA8C = 1;
    return (unsigned int)v8;
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
LABEL_53:
      return (unsigned int)-1;
  }
  if ( !times )
    goto LABEL_26;
  v8 = 0;
  if ( (unsigned __int8)sub_40F2D0((__int64)&stat_buf, &times) )
    return (unsigned int)v8;
LABEL_18:
  if ( times )
  {
    v11 = times->tv_nsec;
    v12 = &tvp;
    tvp.tv_sec = times->tv_sec;
    v13 = times[1].tv_nsec;
    v31 = times[1].tv_sec;
    tvp.tv_usec = ((signed __int64)((unsigned __int128)(2361183241434822607LL * v11) >> 64) >> 7) - (v11 >> 63);
    v14 = &tvp;
    v32 = ((signed __int64)((unsigned __int128)(2361183241434822607LL * v13) >> 64) >> 7) - (v13 >> 63);
    if ( v4 >= 0 )
      goto LABEL_20;
LABEL_27:
    return (unsigned int)futimesat(-100, v3, v14);
  }
LABEL_26:
  v12 = 0LL;
  v14 = 0LL;
  if ( fd < 0 )
    goto LABEL_27;
LABEL_20:
  v8 = futimesat(v4, 0LL, v14);
  if ( !v8 )
  {
    if ( !v12 )
      return (unsigned int)v8;
    v20 = v12->tv_usec > 499999;
    v21 = v12[1].tv_usec > 499999;
    if ( v12->tv_usec <= 499999 && !v21 )
      return (unsigned int)v8;
    if ( __fxstat(1, v4, &stat_buf) )
      return (unsigned int)v8;
    v22 = stat_buf.st_atim.tv_sec - v12->tv_sec;
    v23 = _mm_load_si128((const __m128i *)&v12[1]);
    v24 = stat_buf.st_mtim.tv_sec - v12[1].tv_sec == 1;
    file_times = (struct utimbuf)_mm_load_si128((const __m128i *)v12);
    v34 = v23;
    v25 = v24 && v21;
    if ( v22 != 1 || !v20 || stat_buf.st_atim.tv_nsec )
    {
      if ( !v25 || stat_buf.st_mtim.tv_nsec )
        goto LABEL_49;
    }
    else
    {
      file_times.modtime = 0LL;
      if ( !v25 || stat_buf.st_mtim.tv_nsec )
        goto LABEL_48;
    }
    v34.m128i_i64[1] = 0LL;
LABEL_48:
    futimesat(v4, 0LL, (const struct timeval *__attribute__((__org_arrdim(0,2))) )&file_times);
LABEL_49:
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
  return (unsigned int)v8;
}

__int64 __fastcall sub_40F8A0(char *filename, __int64 a2)
{
  return sub_40F460(-1, filename, a2);
}

__int64 __fastcall sub_40F8B0(char *filename, __int64 a2)
{
  __m128i v2; // xmm1@2
  signed int v3; // ebx@2
  struct timespec *v4; // rdx@5
  int v5; // eax@6
  int v6; // ebp@6
  unsigned int v7; // ebp@11
  __int64 result; // rax@14
  __time_t v9; // rcx@27
  __syscall_slong_t v10; // rax@28
  struct timespec *times; // [sp+8h] [bp-D0h]@2
  __m128i v12; // [sp+10h] [bp-C8h]@2
  __m128i v13; // [sp+20h] [bp-B8h]@2
  struct stat stat_buf; // [sp+30h] [bp-A8h]@11

  if ( a2 )
  {
    v2 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    times = (struct timespec *)&v12;
    v12 = _mm_loadu_si128((const __m128i *)a2);
    v13 = v2;
    v3 = sub_40F3A0((__int64)&v12);
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
            return (unsigned int)sub_40F460(-1, filename, (__int64)times);
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
      if ( (unsigned __int8)sub_40F2D0((__int64)&stat_buf, &times) )
        return v7;
      goto LABEL_12;
    }
LABEL_17:
    if ( __lxstat(1, filename, &stat_buf) )
      return (unsigned int)-1;
    goto LABEL_12;
  }
  dword_61BA8C = 1;
  result = (unsigned int)v6;
  dword_61BA88 = 1;
  return result;
}

int __fastcall sub_40FB00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_40FB00(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_40FF60(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_40FB00(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_40FB00(a1, a2, a3, a4, (__int64)v15, v9);
}

char sub_4100A0()
{
  char result; // al@2
  __uid_t v1; // eax@3

  if ( byte_61BA91 )
  {
    result = byte_61BA90;
  }
  else
  {
    v1 = geteuid();
    byte_61BA91 = 1;
    result = v1 == 0;
    byte_61BA90 = result;
  }
  return result;
}

void *__fastcall sub_4100E0(size_t a1, __int64 a2)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_410330(a1, a2);
  }
  return result;
}

void *__fastcall sub_410140(void *a1, size_t a2)
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
        sub_410330(a1, a2);
    }
  }
  return result;
}

void *__fastcall sub_4102E0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_4100E0(a2, a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_410310(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_4102E0(a1, v1 + 1);
}

noreturn void  sub_410330()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_410370()
{
  unsigned int v0; // ebx@1
  __ssize_t v1; // rax@1
  const char *v2; // rdi@2
  char *v3; // rax@2
  char *v5; // [sp+0h] [bp-18h]@1
  size_t n; // [sp+8h] [bp-10h]@1

  v0 = 0;
  v5 = 0LL;
  n = 0LL;
  v1 = __getdelim(&v5, &n, 10, stdin);
  if ( v1 > 0 )
  {
    v2 = v5;
    v3 = &v5[v1 - 1];
    if ( *v3 == 10 )
    {
      *v3 = 0;
      v2 = v5;
    }
    LOBYTE(v0) = rpmatch(v2) > 0;
  }
  free(v5);
  return v0;
}

__int64 __fastcall sub_4103E0(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_61BA94 < 0 )
    {
      v4 = sub_4103E0(a1);
      if ( v4 >= 0 && dword_61BA94 == -1 )
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
        dword_61BA94 = 1;
      }
      else
      {
        v4 = sub_4103E0(a1);
        if ( v4 >= 0 )
        {
          dword_61BA94 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_410520(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_410590(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

__int64 __fastcall sub_410560(__int64 a1)
{
  __int64 result; // rax@1

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

__int64 __fastcall sub_4105F0(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_4106D0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_410CF0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_4105F0(a2, a7);
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
        sub_4105F0((__int64)v11, a7);
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
            v40 = sub_4106D0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_4106D0(v10, v11, v12, v53, v54, a6, a7, v8, 4288346LL);
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
        v40 = sub_4106D0(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_4112C0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_61BAA0 = dword_61B43C;
  dword_61BAA4 = dword_61B438;
  result = sub_410CF0(a1, a2, a3, a4, a5, a6, (__int64)&dword_61BAA0, a7);
  dword_61B43C = dword_61BAA0;
  filename = (char *)qword_61BAB0;
  dword_61B434 = dword_61BAA8;
  return result;
}

__int64 __fastcall sub_411340(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_4112C0(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_4113C0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_411540(0LL, v6) )
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
  int result; // eax@2

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
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

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

bool __fastcall sub_411540(int a1)
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

unsigned __int64 __fastcall sub_4115A0(_BYTE *a1, unsigned __int64 a2)
{
  __int64 v2; // rcx@1
  unsigned __int64 v3; // rax@2
  __int64 v4; // rax@3
  unsigned __int64 result; // rax@4

  v2 = *a1;
  if ( (_BYTE)v2 )
  {
    v3 = 0LL;
    do
    {
      v4 = __ROL8__(v3, 9);
      ++a1;
      v3 = v2 + v4;
      v2 = *a1;
    }
    while ( (_BYTE)v2 );
    result = v3 % a2;
  }
  else
  {
    result = 0LL;
  }
  return result;
}

const char *sub_4115E0()
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
                sub_412760(v61);
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
            sub_412760(v40);
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

_QWORD *__fastcall sub_411B80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  __int64 v3; // rbx@1
  _QWORD *result; // rax@1

  LODWORD(v2) = sub_411DA0();
  v3 = v2;
  result = 0LL;
  if ( v3 )
  {
    result = sub_4100E0(0x18uLL, a2);
    *result = v3;
    result[2] = 0LL;
    result[1] = 0LL;
  }
  return result;
}

unsigned __int64 __fastcall sub_411BC0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14@1
  unsigned __int64 v3; // r13@1
  __int64 v4; // r12@1
  unsigned __int64 v5; // rbp@1
  unsigned __int64 v6; // rbx@1
  unsigned __int64 v7; // rsi@3
  unsigned __int64 v8; // rax@6
  __int64 v9; // rdx@6
  char *v10; // rax@8
  __int64 v11; // rdx@9
  char v13; // [sp+8h] [bp-40h]@8

  v2 = a2 + 1;
  v3 = a2;
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
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
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        return v5;
      }
    }
    v7 = (v6 - v3) % v2;
    if ( v5 <= v6 - v7 )
      break;
    v6 = v7 - 1;
    v5 %= v2;
  }
  *(_QWORD *)(a1 + 8) = v5 / v2;
  v5 %= v2;
  *(_QWORD *)(a1 + 16) = (v6 - v3) / v2;
  return v5;
}

__int64 __fastcall sub_411CE0(void *ptr)
{
  unsigned int v1; // er12@1
  int *v2; // rax@1
  int v3; // er13@1
  int *v4; // rbp@1

  v1 = sub_412210(*(void **)ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
  *v4 = v3;
  return v1;
}

noreturn void __fastcall  sub_411D40(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

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

noreturn void __fastcall  sub_411D40(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

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

__m128i *__fastcall sub_411DA0(signed __int64 a1, unsigned __int64 a2)
{
  FILE *v2; // rax@3
  FILE *v3; // r13@3
  void *v4; // rax@4
  size_t v5; // rcx@4
  __m128i *v6; // rbx@6
  __m128i *v8; // rax@8
  signed __int64 v9; // r13@8
  int v10; // eax@8
  int v11; // er15@8
  signed __int64 v12; // rdx@9
  signed __int64 v13; // rax@11
  signed __int64 v14; // rbp@11
  struct timeval *v15; // r12@14
  unsigned __int64 v16; // r14@14
  signed __int64 v17; // rbp@15
  unsigned int v18; // eax@18
  __int64 v19; // rdx@19
  unsigned __int64 v20; // rbp@20
  signed __int64 v21; // r14@21
  unsigned int v22; // eax@24
  __int64 v23; // rdx@25
  unsigned __int64 v24; // rbp@26
  signed int v25; // eax@27
  signed int v26; // edi@29
  unsigned int v27; // eax@30
  __int64 v28; // rdx@31
  signed __int64 v29; // rcx@36
  struct timeval *v30; // r15@36
  signed __int64 v31; // rbp@38
  unsigned int v32; // ST08_4@38
  signed __int64 v33; // r14@39
  unsigned __int64 v34; // rcx@41
  struct timeval tv; // [sp+10h] [bp-48h]@14

  if ( !a2 )
  {
    v6 = (__m128i *)sub_4100E0(0x1038uLL, 0LL);
    v6->m128i_i64[0] = 0LL;
    v6->m128i_i64[1] = (__int64)sub_411D40;
    v6[1].m128i_i64[0] = 0LL;
    return v6;
  }
  if ( !a1 )
  {
    v8 = (__m128i *)sub_4100E0(0x1038uLL, a2);
    v8->m128i_i64[0] = 0LL;
    v6 = v8;
    v9 = (signed __int64)&v8[2];
    v8->m128i_i64[1] = (__int64)sub_411D40;
    v8[1].m128i_i64[0] = 0LL;
    v8[1].m128i_i64[1] = 0LL;
    v10 = open("/dev/urandom", 0);
    v11 = v10;
    if ( v10 < 0 )
    {
      v15 = &tv;
      v16 = 20LL;
      gettimeofday(&tv, 0LL);
      v6[2] = _mm_load_si128((const __m128i *)&tv);
      LODWORD(tv.tv_sec) = getpid();
      v6[3].m128i_i32[0] = tv.tv_sec;
    }
    else
    {
      v12 = a2;
      if ( a2 > 0x800 )
        v12 = 2048LL;
      LODWORD(v13) = __read_chk((unsigned int)v10, v9, v12, 4120LL);
      v14 = v13;
      close(v11);
      if ( v14 > 2047 )
        goto LABEL_12;
      if ( v14 < 0 )
        v14 = a1;
      v15 = &tv;
      v29 = 2048 - v14;
      v30 = (struct timeval *)(v9 + v14);
      if ( (unsigned __int64)(2048 - v14) > 0x10 )
        v29 = 16LL;
      v31 = v29 + v14;
      v32 = v29;
      gettimeofday(&tv, 0LL);
      qmemcpy(v30, &tv, v32);
      if ( v31 > 2047 )
        goto LABEL_12;
      v33 = 2048 - v31;
      if ( (unsigned __int64)(2048 - v31) > 4 )
        v33 = 4LL;
      LODWORD(tv.tv_sec) = getpid();
      v34 = (unsigned int)v33;
      v16 = v31 + v33;
      qmemcpy((void *)(v9 + v31), &tv, v34);
      if ( v16 > 0x7FF )
        goto LABEL_12;
    }
    v17 = 2048 - v16;
    if ( 2048 - v16 > 4 )
      v17 = 4LL;
    LODWORD(tv.tv_sec) = getppid();
    if ( (_DWORD)v17 )
    {
      v18 = 0;
      do
      {
        v19 = v18++;
        *(_BYTE *)(v9 + v16 + v19) = *((_BYTE *)&v15->tv_sec + v19);
      }
      while ( v18 < (unsigned int)v17 );
    }
    v20 = v16 + v17;
    if ( v20 <= 0x7FF )
    {
      v21 = 2048 - v20;
      if ( 2048 - v20 > 4 )
        v21 = 4LL;
      LODWORD(tv.tv_sec) = getuid();
      if ( (_DWORD)v21 )
      {
        v22 = 0;
        do
        {
          v23 = v22++;
          *(_BYTE *)(v9 + v20 + v23) = *((_BYTE *)&v15->tv_sec + v23);
        }
        while ( v22 < (unsigned int)v21 );
      }
      v24 = v21 + v20;
      if ( v24 <= 0x7FF )
      {
        LODWORD(tv.tv_sec) = getgid();
        v25 = 2048 - v24;
        if ( 2048 - v24 > 4 )
          v25 = 4;
        v26 = v25;
        if ( v25 )
        {
          v27 = 0;
          do
          {
            v28 = v27++;
            *(_BYTE *)(v9 + v24 + v28) = *((_BYTE *)&v15->tv_sec + v28);
          }
          while ( v27 < v26 );
        }
      }
    }
LABEL_12:
    sub_412510(v9);
    return v6;
  }
  LODWORD(v2) = sub_4127E0(a1, "rb");
  v3 = v2;
  if ( v2 )
  {
    v4 = sub_4100E0(0x1038uLL, (__int64)"rb");
    v5 = 4096LL;
    *(_QWORD *)v4 = v3;
    if ( a2 <= 0x1000 )
      v5 = a2;
    *((_QWORD *)v4 + 1) = sub_411D40;
    v6 = (__m128i *)v4;
    *((_QWORD *)v4 + 2) = a1;
    setvbuf(v3, (char *)v4 + 24, 0, v5);
  }
  else
  {
    v6 = 0LL;
  }
  return v6;
}

int __fastcall sub_4120B0(__int64 a1, char *a2, size_t a3)
{
  __int64 v3; // r12@1
  char *v4; // rbp@1
  size_t v5; // rbx@1
  FILE *v6; // r13@1
  int *v7; // r14@2
  __int64 v8; // rdi@3
  int v9; // edx@4
  size_t v10; // rax@6
  size_t v11; // r15@8
  char *v12; // r13@8
  signed __int64 v13; // r14@8
  char *v14; // rdi@9
  char *v15; // rsi@12

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *(FILE **)a1;
  if ( *(_QWORD *)a1 )
  {
    v7 = __errno_location();
    while ( 1 )
    {
      v10 = fread_unlocked(v4, 1uLL, v5, v6);
      v9 = *v7;
      v4 += v10;
      v5 -= v10;
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
      LODWORD(v10) = (unsigned __int64)memcpy(v4, v12, v5);
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
        LODWORD(v10) = sub_412260(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return v10;
}

__int64 __fastcall sub_412210(void *ptr)
{
  FILE *v1; // rbp@1
  __int64 result; // rax@2

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_412760(v1);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_412260(__int64 a1, __int64 a2)
{
  __int64 v2; // r11@1
  unsigned __int64 v3; // rdx@1
  __int64 v4; // r9@1
  signed __int64 v5; // r8@1
  __int64 result; // rax@1
  signed __int64 v7; // r11@1
  __int64 v8; // rcx@2
  unsigned __int64 v9; // rdx@2
  unsigned __int64 v10; // r8@2
  __int64 v11; // rbx@2
  __int64 v12; // r8@2
  unsigned __int64 v13; // r11@2
  unsigned __int64 v14; // rdx@2
  unsigned __int64 v15; // rcx@2
  __int64 v16; // rbx@2
  __int64 v17; // rcx@2
  unsigned __int64 v18; // rdx@2
  unsigned __int64 v19; // r8@2
  __int64 v20; // rcx@2
  __int64 v21; // r8@2
  unsigned __int64 v22; // rcx@2
  signed __int64 v23; // rsi@3
  __int64 v24; // rcx@4
  unsigned __int64 v25; // rdx@4
  unsigned __int64 v26; // rbx@4
  __int64 v27; // rcx@4
  __int64 v28; // r8@4
  unsigned __int64 v29; // r10@4
  unsigned __int64 v30; // rdx@4
  unsigned __int64 v31; // rcx@4
  __int64 v32; // r11@4
  __int64 v33; // rcx@4
  unsigned __int64 v34; // rdx@4
  unsigned __int64 v35; // r8@4
  __int64 v36; // rcx@4
  __int64 v37; // r8@4
  unsigned __int64 v38; // rcx@4

  v2 = *(_QWORD *)(a1 + 2056);
  v3 = *(_QWORD *)(a1 + 2048);
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 2064) + 1LL;
  result = a1;
  *(_QWORD *)(a1 + 2064) = v5;
  v7 = v5 + v2;
  do
  {
    v8 = *(_QWORD *)result;
    v9 = *(_QWORD *)(result + 1024) + ~((v3 << 21) ^ v3);
    v10 = v7 + v9 + *(_QWORD *)(a1 + (*(_QWORD *)result & 0x7F8LL));
    *(_QWORD *)result = v10;
    v11 = v8 + *(_QWORD *)(a1 + ((v10 >> 8) & 0x7F8));
    *(_QWORD *)v4 = v11;
    v12 = *(_QWORD *)(result + 8);
    v13 = *(_QWORD *)(result + 1032) + ((v9 >> 5) ^ v9);
    v14 = v13 ^ (v13 << 12);
    v15 = v11 + v13 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 8) & 0x7F8LL));
    *(_QWORD *)(result + 8) = v15;
    v16 = v12 + *(_QWORD *)(a1 + ((v15 >> 8) & 0x7F8));
    *(_QWORD *)(v4 + 8) = v16;
    v17 = *(_QWORD *)(result + 16);
    v18 = *(_QWORD *)(result + 1040) + v14;
    v19 = v16 + v18 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 16) & 0x7F8LL));
    *(_QWORD *)(result + 16) = v19;
    v20 = *(_QWORD *)(a1 + ((v19 >> 8) & 0x7F8)) + v17;
    *(_QWORD *)(v4 + 16) = v20;
    v21 = *(_QWORD *)(result + 24);
    v3 = *(_QWORD *)(result + 1048) + ((v18 >> 33) ^ v18);
    v22 = v20 + v3 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 24) & 0x7F8LL));
    result += 32LL;
    v4 += 32LL;
    *(_QWORD *)(result - 8) = v22;
    v7 = v21 + *(_QWORD *)(a1 + ((v22 >> 8) & 0x7F8));
    *(_QWORD *)(v4 - 8) = v7;
  }
  while ( result != a1 + 1024 );
  v23 = a2 + 1024;
  do
  {
    v24 = *(_QWORD *)result;
    v25 = *(_QWORD *)(result - 1024) + ~((v3 << 21) ^ v3);
    v26 = v25 + *(_QWORD *)(a1 + (*(_QWORD *)result & 0x7F8LL));
    *(_QWORD *)result = v7 + v26;
    v27 = *(_QWORD *)(a1 + (((v7 + v26) >> 8) & 0x7F8)) + v24;
    *(_QWORD *)v23 = v27;
    v28 = *(_QWORD *)(result + 8);
    v29 = *(_QWORD *)(result - 1016) + ((v25 >> 5) ^ v25);
    v30 = v29 ^ (v29 << 12);
    v31 = v27 + v29 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 8) & 0x7F8LL));
    *(_QWORD *)(result + 8) = v31;
    v32 = v28 + *(_QWORD *)(a1 + ((v31 >> 8) & 0x7F8));
    *(_QWORD *)(v23 + 8) = v32;
    v33 = *(_QWORD *)(result + 16);
    v34 = *(_QWORD *)(result - 1008) + v30;
    v35 = v32 + v34 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 16) & 0x7F8LL));
    *(_QWORD *)(result + 16) = v35;
    v36 = *(_QWORD *)(a1 + ((v35 >> 8) & 0x7F8)) + v33;
    *(_QWORD *)(v23 + 16) = v36;
    v37 = *(_QWORD *)(result + 24);
    v3 = *(_QWORD *)(result - 1000) + ((v34 >> 33) ^ v34);
    v38 = v36 + v3 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 24) & 0x7F8LL));
    result += 32LL;
    v23 += 32LL;
    *(_QWORD *)(result - 8) = v38;
    v7 = v37 + *(_QWORD *)(a1 + ((v38 >> 8) & 0x7F8));
    *(_QWORD *)(v23 - 8) = v7;
  }
  while ( result != a1 + 2048 );
  *(_QWORD *)(a1 + 2048) = v3;
  *(_QWORD *)(a1 + 2056) = v7;
  return result;
}

unsigned __int64 __fastcall sub_412510(__int64 a1)
{
  __int64 v1; // rdx@1
  __int64 v2; // rax@1
  signed __int64 v3; // rcx@1
  signed __int64 v4; // rsi@1
  signed __int64 v5; // r11@1
  signed __int64 v6; // r12@1
  signed __int64 v7; // r10@1
  signed __int64 v8; // r9@1
  signed __int64 v9; // rbp@1
  signed __int64 v10; // r8@1
  signed __int64 v11; // rbx@1
  signed __int64 v12; // rsi@2
  unsigned __int64 v13; // rcx@2
  signed __int64 v14; // r8@2
  unsigned __int64 v15; // rbx@2
  unsigned __int64 v16; // r9@2
  signed __int64 v17; // r12@2
  signed __int64 v18; // r10@2
  unsigned __int64 v19; // rcx@2
  unsigned __int64 v20; // r11@2
  signed __int64 v21; // rsi@2
  unsigned __int64 v22; // rbx@2
  unsigned __int64 v23; // r13@2
  signed __int64 v24; // r12@2
  unsigned __int64 v25; // rcx@3
  signed __int64 v26; // rsi@3
  signed __int64 v27; // r8@3
  unsigned __int64 v28; // rbx@3
  unsigned __int64 v29; // r9@3
  signed __int64 v30; // r12@3
  signed __int64 v31; // r10@3
  unsigned __int64 v32; // rcx@3
  unsigned __int64 v33; // r11@3
  signed __int64 v34; // rsi@3
  unsigned __int64 v35; // rbx@3
  unsigned __int64 result; // rax@3
  signed __int64 v37; // r12@3

  v1 = a1;
  v2 = a1;
  v3 = -7424904924229222229LL;
  v4 = -9011610652101975858LL;
  v5 = -5576812576440232668LL;
  v6 = -5865837416287532563LL;
  v7 = -8354558816804203872LL;
  v8 = -5046086420515862430LL;
  v9 = a1 + 2048;
  v10 = 7240739780546808700LL;
  v11 = 5259722845879046933LL;
  do
  {
    v12 = *(_QWORD *)(v2 + 32) + v4;
    v13 = *(_QWORD *)(v2 + 56) + v3;
    v14 = *(_QWORD *)v2 - v12 + v10;
    v15 = (v13 >> 9) ^ (*(_QWORD *)(v2 + 40) + v11);
    v16 = *(_QWORD *)(v2 + 8) - v15 + v8;
    v17 = (v14 << 9) ^ (*(_QWORD *)(v2 + 48) + v6);
    v18 = *(_QWORD *)(v2 + 16) - v17 + v7;
    v19 = (v16 >> 23) ^ (v14 + v13);
    v20 = *(_QWORD *)(v2 + 24) - v19 + v5;
    v10 = (v18 << 15) ^ (v16 + v14);
    v21 = v12 - v10;
    *(_QWORD *)v2 = v10;
    v8 = (v20 >> 14) ^ (v18 + v16);
    v22 = v15 - v8;
    *(_QWORD *)(v2 + 8) = v8;
    v7 = (v21 << 20) ^ (v20 + v18);
    v23 = v21 + v22;
    v24 = v17 - v7;
    *(_QWORD *)(v2 + 16) = v7;
    v2 += 64LL;
    v5 = (v22 >> 17) ^ (v21 + v20);
    v11 = v24 + v22;
    v3 = v19 - v5;
    *(_QWORD *)(v2 - 40) = v5;
    v4 = v23 ^ (v24 << 14);
    v6 = v3 + v24;
    *(_QWORD *)(v2 - 24) = v11;
    *(_QWORD *)(v2 - 32) = v4;
    *(_QWORD *)(v2 - 16) = v6;
    *(_QWORD *)(v2 - 8) = v3;
  }
  while ( v9 != v2 );
  do
  {
    v25 = *(_QWORD *)(v1 + 56) + v3;
    v26 = *(_QWORD *)(v1 + 32) + v4;
    v27 = *(_QWORD *)v1 + v10 - v26;
    v28 = (v25 >> 9) ^ (*(_QWORD *)(v1 + 40) + v11);
    v29 = *(_QWORD *)(v1 + 8) + v8 - v28;
    v30 = (v27 << 9) ^ (*(_QWORD *)(v1 + 48) + v6);
    v31 = *(_QWORD *)(v1 + 16) + v7 - v30;
    v32 = (v29 >> 23) ^ (v27 + v25);
    v33 = *(_QWORD *)(v1 + 24) + v5 - v32;
    v10 = (v31 << 15) ^ (v29 + v27);
    v34 = v26 - v10;
    *(_QWORD *)v1 = v10;
    v8 = (v33 >> 14) ^ (v31 + v29);
    v35 = v28 - v8;
    *(_QWORD *)(v1 + 8) = v8;
    v7 = (v34 << 20) ^ (v33 + v31);
    result = v34 + v35;
    v37 = v30 - v7;
    *(_QWORD *)(v1 + 16) = v7;
    v1 += 64LL;
    v5 = (v35 >> 17) ^ (v34 + v33);
    v11 = v37 + v35;
    v3 = v32 - v5;
    *(_QWORD *)(v1 - 40) = v5;
    v4 = result ^ (v37 << 14);
    v6 = v3 + v37;
    *(_QWORD *)(v1 - 24) = v11;
    *(_QWORD *)(v1 - 32) = v4;
    *(_QWORD *)(v1 - 16) = v6;
    *(_QWORD *)(v1 - 8) = v3;
  }
  while ( v9 != v1 );
  *(_QWORD *)(a1 + 2064) = 0LL;
  *(_QWORD *)(a1 + 2056) = 0LL;
  *(_QWORD *)(a1 + 2048) = 0LL;
  return result;
}

__int64 __fastcall sub_412750(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return sub_4103E0(a1, 0, 3LL, a4);
}

int __fastcall sub_412760(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_410520(stream) )
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

FILE *__fastcall sub_4127E0(const char *a1, const char *a2)
{
  FILE *v2; // rax@1
  FILE *v3; // rbx@1
  int v4; // eax@2
  __int64 v5; // rdx@2
  __int64 v6; // rcx@2
  int v8; // er12@4
  int *v9; // rax@7
  int v10; // ebp@7
  int *v11; // rbx@7
  int *v12; // rax@8
  FILE *v13; // rdi@8
  int v14; // er12@8
  int *v15; // rbp@8

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( (unsigned int)v4 <= 2 )
    {
      v8 = sub_412750(v4, (__int64)a2, v5, v6);
      if ( v8 < 0 )
      {
        v12 = __errno_location();
        v13 = v3;
        v3 = 0LL;
        v14 = *v12;
        v15 = v12;
        sub_412760(v13);
        *v15 = v14;
      }
      else if ( sub_412760(v3) || (v3 = fdopen(v8, a2)) == 0LL )
      {
        v9 = __errno_location();
        v10 = *v9;
        v11 = v9;
        close(v8);
        *v11 = v10;
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

int __fastcall sub_4128F0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_61B3A8 )
    v1 = unk_61B3A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_412908(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_61AE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
