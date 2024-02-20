#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  const char *v3; // r12
  int v4; // eax
  char *v5; // rax
  char *v6; // r13
  __int64 v7; // r14
  int v8; // ebp
  const char **v9; // r15
  int v10; // eax
  char v11; // al
  void *v12; // rax
  __int64 v13; // rax
  char *v14; // r12
  char *v15; // rbp
  int v16; // er14
  char v17; // r13
  int *v18; // r13
  char *v19; // rax
  int v20; // esi
  char *v21; // rax
  char *v23; // rbx
  int *v24; // rax
  char *v25; // rbx
  int *v26; // rax
  char *v27; // rbx
  __int64 v28; // rax
  void *v29; // rax
  __int64 v30; // r14
  char *i; // rbp
  char *v32; // rax
  char v33; // al
  char *v34; // rax
  char *v35; // rbx
  int *v36; // rax
  char *v37; // rcx
  char *v38; // rax
  char *v39; // rbx
  int *v40; // rax
  char *v41; // rax
  char *v42; // rax
  __int64 v43; // rbx
  int *v44; // rax
  char *v45; // rax
  char v46; // [rsp+1h] [rbp-A1h]
  char **v47; // [rsp+2h] [rbp-A0h]
  int fd; // [rsp+Ah] [rbp-98h]
  void *v49; // [rsp+12h] [rbp-90h]
  char v50; // [rsp+1Ah] [rbp-88h]
  char *v51; // [rsp+1Ah] [rbp-88h]
  char *ptr; // [rsp+2Ah] [rbp-78h]
  char *v53; // [rsp+32h] [rbp-70h]
  void *v54; // [rsp+3Ah] [rbp-68h]
  char v55; // [rsp+4Ah] [rbp-58h]
  __int128 v56; // [rsp+5Ah] [rbp-48h]

  v3 = 0LL;
  v55 = 0;
  v56 = 0LL;
  sub_4051C0(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40A210(sub_4042C0);
  while ( 1 )
  {
    v4 = sub_4099C0(a1, a2, "fn:s:uvxz", &off_40B420, 0LL);
    if ( v4 == -1 )
      break;
    if ( v4 == 115 )
    {
      dcgettext(0LL, "invalid file size", 5);
      sub_4084D0((_DWORD)s2);
    }
    else if ( v4 <= 115 )
    {
      if ( v4 == -130 )
        sub_403AC0(0);
      if ( v4 <= -130 )
      {
        if ( v4 == -131 )
        {
          sub_408100((char)stdout);
          exit(0);
        }
LABEL_93:
        sub_403AC0(1);
      }
      if ( v4 == 102 )
      {
        v55 = 1;
      }
      else
      {
        if ( v4 != 110 )
          goto LABEL_93;
        v5 = dcgettext(0LL, "invalid number of passes", 5);
        sub_4085A0(s2, 0LL, 0x3FFFFFFFFFFFFFFFLL, "", v5, 0LL);
      }
    }
    else if ( v4 != 120 )
    {
      if ( v4 > 120 )
      {
        if ( v4 != 122 )
        {
          if ( v4 != 128 )
            goto LABEL_93;
          v6 = s2;
          if ( v3 && strcmp(v3, s2) )
            goto LABEL_97;
          v3 = v6;
        }
      }
      else if ( v4 == 117 )
      {
        if ( s2 )
          DWORD2(v56) = dword_40B580[sub_4041E0("--remove", s2, off_40B5A0, dword_40B580, 4LL, off_60F2D8)];
        else
          DWORD2(v56) = 3;
      }
      else
      {
        if ( v4 != 118 )
          goto LABEL_93;
        BYTE12(v56) = 1;
      }
    }
  }
  v7 = dword_60F35C;
  v8 = a1 - dword_60F35C;
  if ( a1 == dword_60F35C )
  {
    v42 = dcgettext(0LL, "missing file operand", 5);
    error(0, 0, v42);
    goto LABEL_93;
  }
  ptr/*INVALID_COLON*/ = (void *)sub_406E30(v3, -1LL);
  if ( !ptr/*INVALID_COLON*/ )
  {
    v43 = sub_406C60(0LL, 3LL, v3);
    v44 = __errno_location();
    error(1, *v44, "%s", v43);
LABEL_97:
    v45 = dcgettext(0LL, "multiple random sources specified", 5);
    error(1, 0, v45);
    start();
  }
  sub_40A210(sub_402A00);
  if ( v8 <= 0 )
  {
    v46 = 1;
  }
  else
  {
    v9 = (const char **)&a2[v7];
    v46 = 1;
    v47 = &(&a2[v7 + 1])[v8 - 1];
    do
    {
      v12 = (void *)sub_406C60(0LL, 3LL, *v9);
      v13 = sub_408470(v12);
      v14 = (char *)*v9;
      v15 = (char *)v13;
      if ( !strcmp(*v9, "-") )
      {
        v10 = sub_408A90(1);
        if ( v10 < 0 )
        {
          v25 = dcgettext(0LL, "%s: fcntl failed", 5);
          v26 = __errno_location();
          error(0, *v26, v25, v15);
          v11 = 0;
        }
        else if ( v10 & 0x400 )
        {
          v21 = dcgettext(0LL, "%s: cannot shred append-only file descriptor", 5);
          error(0, 0, v21, v15);
          v11 = 0;
        }
        else
        {
          v11 = sub_4033D0(1);
        }
        v46 &= v11;
      }
      else
      {
        v16 = sub_4044D0((unsigned __int64)*v9);
        if ( v16 >= 0
          || (v18 = __errno_location(), *v18 == 13)
          && v55
          && !chmod(v14, 0x80u)
          && (v16 = sub_4044D0((char)v14), v16 >= 0) )
        {
          v17 = sub_4033D0(v16);
          if ( close(v16) )
          {
            v17 = 0;
            v23 = dcgettext(0LL, "%s: failed to close", 5);
            v24 = __errno_location();
            error(0, *v24, v23, v15);
          }
          else if ( v17 && DWORD2(v56) )
          {
            ptr = (char *)sub_408470(v14);
            v27 = (char *)sub_404440(ptr, v15);
            v28 = sub_404360(ptr);
            v54 = (void *)v28;
            v29 = (void *)sub_406C60(0LL, 3LL, v28);
            v49 = (void *)sub_408470(v29);
            fd = -1;
            if ( DWORD2(v56) == 3 )
              fd = sub_4044D0((char)v54);
            if ( BYTE12(v56) )
            {
              v34 = dcgettext(0LL, "%s: removing", 5);
              error(0, 0, v34, v15);
            }
            if ( DWORD2(v56) != 1 )
            {
              v50 = v17;
              v30 = sub_4044A0(v27) - 1;
              v53 = v15;
              while ( v30 != -1 )
              {
                memset(v27, 48, v30 + 1);
                v27[v30 + 1] = 0;
                while ( (unsigned int)sub_407A00(-100, v14, -100, ptr) )
                {
                  if ( *__errno_location() != 17 )
                    goto LABEL_87;
                  for ( i = &v27[v30]; ; --i )
                  {
                    v32 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_.", *i);
                    if ( !v32 )
                      __assert_fail("p", "src/shred.c", 0x40Au, "incname");
                    v33 = v32[1];
                    if ( v33 )
                      break;
                    *i = 48;
                    if ( v27 == i )
                      goto LABEL_87;
                  }
                  *i = v33;
                }
                if ( fd >= 0 && (unsigned int)sub_402A60(fd) )
                  v17 = 0;
                if ( BYTE12(v56) )
                {
                  v37 = v53;
                  if ( !v50 )
                    v37 = v14;
                  v51 = v37;
                  v38 = dcgettext(0LL, "%s: renamed to %s", 5);
                  error(0, 0, v38, v51, ptr);
                  v50 = 0;
                }
                memcpy(&v14[v27 - ptr], v27, v30 + 2);
LABEL_87:
                --v30;
              }
              v15 = v53;
            }
            if ( unlink(v14) )
            {
              v17 = 0;
              v35 = dcgettext(0LL, "%s: failed to remove", 5);
              v36 = __errno_location();
              error(0, *v36, v35, v15);
            }
            else if ( BYTE12(v56) )
            {
              v41 = dcgettext(0LL, "%s: removed", 5);
              error(0, 0, v41, v15);
            }
            if ( fd >= 0 )
            {
              if ( (unsigned int)sub_402A60(fd) )
                v17 = 0;
              if ( close(fd) )
              {
                v17 = 0;
                v39 = dcgettext(0LL, "%s: failed to close", 5);
                v40 = __errno_location();
                error(0, *v40, v39, v49);
              }
            }
            free(ptr);
            free(v54);
            free(v49);
          }
        }
        else
        {
          v19 = dcgettext(0LL, "%s: failed to open for writing", 5);
          v20 = *v18;
          v17 = 0;
          error(0, v20, v19, v15);
        }
        v46 &= v17;
      }
      ++v9;
      free(v15);
    }
    while ( v47 != (char **)v9 );
  }
  return (unsigned __int8)v46 ^ 1u;
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

__int64 *sub_40294B()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_40296A()
{
  return 0LL;
}

__int64 *sub_4029A1()
{
  __int64 *result; // rax

  if ( !byte_60F388 )
  {
    while ( qword_60F390 < (unsigned __int64)(&qword_60EE48 - qword_60EE40 - 1) )
      ((void (*)(void))qword_60EE40[++qword_60F390])();
    result = sub_40294B();
    byte_60F388 = 1;
  }
  return result;
}

__int64 sub_4029F8()
{
  return sub_40296A();
}

__int64 sub_402A00()
{
  void *v0; // rbx
  unsigned int v1; // er12
  int *v2; // rax
  int v3; // er13
  int *v4; // rbp

  v0 = ptr;
  v1 = sub_4074C0(*(void **)ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(v0, 24LL, -1LL);
  free(v0);
  *v4 = v3;
  return v1;
}

__int64 sub_402A00()
{
  void *v0; // rbx
  unsigned int v1; // er12
  int *v2; // rax
  int v3; // er13
  int *v4; // rbp

  v0 = ptr;
  v1 = sub_4074C0(*(void **)ptr);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(v0, 24LL, -1LL);
  free(v0);
  *v4 = v3;
  return v1;
}

__int64 __fastcall sub_402A10(char a1, char a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // edx

  result = sub_408A90(a1);
  if ( (int)result > 0 )
  {
    v3 = result;
    v4 = result;
    BYTE1(v3) |= 0x40u;
    BYTE1(v4) &= 0xBFu;
    if ( a2 )
      v4 = v3;
    if ( v4 != (_DWORD)result )
      result = sub_408A90(a1);
  }
  return result;
}

__int64 __fastcall sub_402A60(int fd, __int64 a2)
{
  int *v2; // rax
  int v3; // ebp
  int *v4; // r12
  char *v5; // rax
  int v7; // ebx
  char *v8; // rax

  if ( !fdatasync(fd) )
    return 0LL;
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  if ( (unsigned int)(*v2 - 21) > 1 && v3 != 9 )
  {
    v5 = dcgettext(0LL, "%s: fdatasync failed", 5);
    error(0, v3, v5, a2);
    *v4 = v3;
    return 0xFFFFFFFFLL;
  }
  if ( !fsync(fd) )
    return 0LL;
  v7 = *v4;
  if ( (unsigned int)(*v4 - 21) <= 1 || v7 == 9 )
  {
    sync();
    return 0LL;
  }
  v8 = dcgettext(0LL, "%s: fsync failed", 5);
  error(0, v7, v8, a2);
  *v4 = v7;
  return 0xFFFFFFFFLL;
}

__int64 __usercall sub_402B20(int fd, __int64 a2, signed __int64 *a3, __int64 a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; // er12
  int v9; // ebx
  signed __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned int v12; // eax
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int8 *v17; // rbx
  __off_t v18; // rax
  int *v19; // rax
  int *v20; // rbx
  char *v21; // rax
  __int64 v22; // rcx
  int v23; // esi
  const char *v24; // rdx
  void *v25; // rdi
  int v27; // ecx
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // r15
  unsigned __int8 *v30; // rdi
  size_t v31; // rdx
  unsigned __int64 v32; // rbp
  signed __int64 v33; // r15
  unsigned __int64 v34; // r13
  ssize_t v35; // rax
  int v36; // er14
  char *v37; // rax
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r15
  const char *v41; // rbp
  unsigned __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // r14
  char *v45; // rax
  int v46; // er14
  char *v47; // rax
  char *v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rbx
  char *v51; // rax
  char *v52; // rax
  char *v53; // rax
  __int64 v54; // [rsp+0h] [rbp-858h]
  unsigned __int8 v55; // [rsp+8h] [rbp-850h]
  __int64 v56; // [rsp+8h] [rbp-850h]
  __int64 v57; // [rsp+10h] [rbp-848h]
  bool v58; // [rsp+1Bh] [rbp-83Dh]
  int v59; // [rsp+1Ch] [rbp-83Ch]
  unsigned __int64 v60; // [rsp+20h] [rbp-838h]
  int *v61; // [rsp+28h] [rbp-830h]
  unsigned int v62; // [rsp+28h] [rbp-830h]
  char *ptr; // [rsp+30h] [rbp-828h]
  __int64 v64; // [rsp+38h] [rbp-820h]
  unsigned __int64 *v65; // [rsp+40h] [rbp-818h]
  char *s1; // [rsp+48h] [rbp-810h]
  time_t v67; // [rsp+50h] [rbp-808h]
  __int64 v68; // [rsp+58h] [rbp-800h]
  int v69; // [rsp+69h] [rbp-7EFh]
  char v70; // [rsp+70h] [rbp-7E8h]
  char v71; // [rsp+300h] [rbp-558h]
  __int16 v72; // [rsp+590h] [rbp-2C8h]
  int v73; // [rsp+594h] [rbp-2C4h]

  v8 = fd;
  v9 = a5;
  v10 = *a3;
  v57 = a2;
  v65 = (unsigned __int64 *)a3;
  v59 = a5;
  v64 = a6;
  v11 = getpagesize();
  if ( v9 <= 0
    || (v12 = v9 & 0xFFF | ((v9 & 0xFFF) << 12), BYTE1(v12) == (unsigned __int8)(v12 >> 4))
    && (unsigned __int8)(v12 >> 4) == (_BYTE)v9 )
  {
    v60 = 0x10000LL;
    v13 = 65538LL;
  }
  else
  {
    v60 = 61440LL;
    v13 = 61440LL;
  }
  v14 = v11 - 1;
  ptr = (char *)sub_408240(v13 + v11 - 1);
  v15 = (unsigned __int64)&ptr[v11 - 1] % v11;
  v16 = v10;
  v17 = (unsigned __int8 *)&ptr[v14 - v15];
  v58 = v10 < v60 && v10 > 0;
  if ( !v58 )
    sub_402A10(fd, 1);
  if ( (*(_DWORD *)(a4 + 24) & 0xF000) != 0x2000 || (v72 = 6, v73 = 1, ioctl(fd, 0x40086D01uLL, &v72)) )
  {
    v18 = lseek(fd, 0LL, 0);
    if ( v18 <= 0 )
    {
      if ( !v18 )
      {
        v27 = v59;
        if ( v59 < 0 )
          goto LABEL_68;
        goto LABEL_17;
      }
      v20 = __errno_location();
    }
    else
    {
      v19 = __errno_location();
      *v19 = 22;
      v20 = v19;
    }
    v21 = dcgettext(0LL, "%s: cannot rewind", 5);
    v22 = v57;
    v23 = *v20;
    v24 = v21;
LABEL_11:
    error(0, v23, v24, v22);
LABEL_12:
    v25 = ptr;
    goto LABEL_13;
  }
  v27 = v59;
  if ( v59 < 0 )
  {
LABEL_68:
    strcpy((char *)&v69, "random");
    if ( a8 )
      goto LABEL_69;
    goto LABEL_25;
  }
LABEL_17:
  *(_WORD *)(v17 + 1) = __ROL2__(v27 & 0xFFF | ((_WORD)v27 << 12) & 0xF000, 8);
  *v17 = (v27 & 0xFFF | (v27 << 12) & 0xFFF000u) >> 4;
  if ( v10 >= v13 || v10 < 0 )
  {
    v16 = v13;
    v28 = v13 >> 1;
  }
  else
  {
    v28 = (unsigned __int64)v10 >> 1;
    if ( (unsigned __int64)v10 >> 1 <= 2 )
    {
      v29 = 3LL;
      goto LABEL_22;
    }
  }
  v29 = 3LL;
  do
  {
    v30 = &v17[v29];
    v31 = v29;
    v29 *= 2LL;
    memcpy(v30, v17, v31);
  }
  while ( v29 <= v28 );
LABEL_22:
  if ( v29 < v16 )
  {
    memcpy(&v17[v29], v17, v16 - v29);
    if ( !(v59 & 0x1000) )
      goto LABEL_24;
    goto LABEL_71;
  }
  if ( v59 & 0x1000 && v16 )
  {
LABEL_71:
    v49 = 0LL;
    do
    {
      v17[v49] += -128;
      v49 += 512LL;
    }
    while ( v49 < v16 );
  }
LABEL_24:
  __sprintf_chk(&v69, 1LL, 7LL, "%02x%02x%02x", *v17, v17[1], v17[2]);
  if ( a8 )
  {
LABEL_69:
    v48 = dcgettext(0LL, "%s: pass %lu/%lu (%s)...", 5);
    error(0, 0, v48, v57, a7, a8, &v69);
    v68 = time(0LL) + 5;
  }
LABEL_25:
  s1 = "";
  v55 = 0;
  v67 = 0LL;
  v54 = 0LL;
LABEL_26:
  while ( 1 )
  {
    if ( v10 >= 0 )
    {
      v32 = v10 - v54;
      if ( v10 - v54 < v60 )
        break;
    }
    v32 = v60;
    if ( v59 < 0 )
LABEL_64:
      sub_407360(v64, v17, v32);
LABEL_31:
    v33 = v10;
    v34 = 0LL;
    do
    {
      while ( 1 )
      {
        v35 = write(v8, &v17[v34], v32 - v34);
        if ( v35 <= 0 )
          break;
        v34 += v35;
LABEL_33:
        if ( v32 <= v34 )
          goto LABEL_42;
      }
      if ( v33 < 0 )
      {
        if ( !v35 || (v46 = *__errno_location(), v46 == 28) )
        {
          if ( 0x7FFFFFFFFFFFFFFFLL - v54 < v34 )
          {
LABEL_84:
            v52 = dcgettext(0LL, "%s: file too large", 5);
            v22 = v57;
            v23 = 0;
            v24 = v52;
            goto LABEL_11;
          }
          v40 = v54 + v34;
          v10 = v40;
          v54 = v40;
          *v65 = v40;
          if ( !a8 )
            goto LABEL_26;
          goto LABEL_81;
        }
        if ( v58 || v46 != 22 )
        {
          v50 = sub_405170(v34 + v54, &v72);
          v51 = dcgettext(0LL, "%s: error writing at offset %s", 5);
          error(0, v46, v51, v57, v50);
          goto LABEL_12;
        }
LABEL_62:
        sub_402A10(v8, 0);
        v58 = 1;
        goto LABEL_33;
      }
      v61 = __errno_location();
      v36 = *v61;
      if ( !v58 && v36 == 22 )
        goto LABEL_62;
      v56 = sub_405170(v54 + v34, &v72);
      v37 = dcgettext(0LL, "%s: error writing at offset %s", 5);
      error(0, v36, v37, v57, v56);
      if ( v36 != 5 )
        goto LABEL_12;
      v38 = v34 | 0x1FF;
      if ( (v34 | 0x1FF) >= v32 )
        goto LABEL_12;
      v34 = v38 + 1;
      if ( lseek(v8, v54 + v38 + 1, 0) == -1 )
      {
        v47 = dcgettext(0LL, "%s: lseek failed", 5);
        error(0, *v61, v47, v57);
        goto LABEL_12;
      }
      v55 = 1;
    }
    while ( v32 > v34 );
LABEL_42:
    v39 = v34;
    v10 = v33;
    if ( 0x7FFFFFFFFFFFFFFFLL - v54 < v39 )
      goto LABEL_84;
    v40 = v54 + v39;
    v54 += v39;
    if ( !a8 )
      continue;
    if ( v10 != v40 )
    {
      v67 = time(0LL);
      if ( v68 <= v67 )
      {
        v41 = (const char *)sub_4045E0(v40, &v71, 434LL, 1LL, 1LL);
        if ( strcmp(s1, v41) )
          goto LABEL_47;
      }
      continue;
    }
LABEL_81:
    if ( !*s1 )
    {
      v67 = time(0LL);
      if ( v68 > v67 )
        continue;
    }
    v41 = (const char *)sub_4045E0(v40, &v71, 434LL, 1LL, 1LL);
LABEL_47:
    if ( v10 < 0 )
    {
      v53 = dcgettext(0LL, "%s: pass %lu/%lu (%s)...%s", 5);
      error(0, 0, v53, v57, a7, a8, &v69);
    }
    else
    {
      LODWORD(v42) = 100;
      if ( v10 )
      {
        if ( v40 > 0x28F5C28F5C28F5CLL )
          v42 = v40 / (v10 / 100);
        else
          v42 = 100 * v40 / v10;
      }
      v62 = v42;
      v43 = sub_4045E0(v10, &v72, 432LL, 1LL, 1LL);
      if ( v10 == v40 )
        v41 = (const char *)v43;
      v44 = v43;
      v45 = dcgettext(0LL, "%s: pass %lu/%lu (%s)...%s/%s %d%%", 5);
      error(0, 0, v45, v57, a7, a8, &v69, v41, v44, v62);
    }
    __strcpy_chk(&v70, v41, 652LL);
    v68 = v67 + 5;
    if ( (unsigned int)sub_402A60(v8, v57) )
    {
      if ( *__errno_location() != 5 )
        goto LABEL_12;
      v55 = 1;
      s1 = &v70;
    }
    else
    {
      s1 = &v70;
    }
  }
  if ( v32 && v10 >= v54 )
  {
    if ( v59 < 0 )
      goto LABEL_64;
    goto LABEL_31;
  }
  if ( (unsigned int)sub_402A60(v8, v57) )
  {
    v25 = ptr;
    if ( *__errno_location() == 5 )
    {
      free(ptr);
      return 1LL;
    }
LABEL_13:
    free(v25);
    return 0xFFFFFFFFLL;
  }
  free(ptr);
  return v55;
}

_BOOL8 __fastcall sub_4033D0(int fd, __int64 a2, void *a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // eax
  char *v7; // r13
  char *v8; // r9
  int v9; // eax
  unsigned __int64 v10; // rbx
  int *v11; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  int *v15; // rsi
  char *v16; // rax
  char *v18; // rbx
  int *v19; // rax
  __off_t v20; // rax
  __off_t v21; // rcx
  __off_t v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // r13
  unsigned __int64 v28; // rbx
  int v29; // er8
  int v30; // eax
  __int64 v31; // rax
  int *v32; // r14
  unsigned __int64 v33; // r12
  __int64 v34; // rbx
  _DWORD *v35; // rbx
  __int64 v36; // rbp
  __int64 v37; // r14
  __int64 v38; // r8
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rbp
  unsigned __int64 v42; // r12
  __int64 v43; // rax
  char *v44; // rax
  char *v45; // rax
  unsigned __int64 v46; // r12
  __off_t v47; // rax
  __int64 v48; // rax
  char *v49; // rbx
  int *v50; // rax
  void *ptr; // [rsp+8h] [rbp-120h]
  char *ptra; // [rsp+8h] [rbp-120h]
  char v53; // [rsp+10h] [rbp-118h]
  unsigned __int64 v54; // [rsp+10h] [rbp-118h]
  int v55; // [rsp+10h] [rbp-118h]
  __int64 v56; // [rsp+18h] [rbp-110h]
  __off_t v57; // [rsp+20h] [rbp-108h]
  __int64 v58; // [rsp+28h] [rbp-100h]
  unsigned __int64 v59; // [rsp+30h] [rbp-F8h]
  __int64 v60; // [rsp+30h] [rbp-F8h]
  __off_t v61; // [rsp+38h] [rbp-F0h]
  bool v62; // [rsp+43h] [rbp-E5h]
  int v63; // [rsp+44h] [rbp-E4h]
  __int64 v64; // [rsp+48h] [rbp-E0h]
  __int64 v65; // [rsp+48h] [rbp-E0h]
  __off_t v66; // [rsp+58h] [rbp-D0h]
  struct stat stat_buf; // [rsp+60h] [rbp-C8h]

  v4 = fd;
  v5 = a4;
  v56 = a2;
  ptr = a3;
  v58 = 0LL;
  if ( *(_BYTE *)(a4 + 28) )
    v58 = *(_QWORD *)(a4 + 8) + *(unsigned __int8 *)(a4 + 30);
  if ( __fxstat(1, fd, &stat_buf) )
  {
    v18 = dcgettext(0LL, "%s: fstat failed", 5);
    v19 = __errno_location();
    error(0, *v19, v18, a2);
    return 0;
  }
  v6 = stat_buf.st_mode & 0xF000;
  if ( v6 == 0x2000 )
  {
    if ( isatty(fd) )
      goto LABEL_21;
    v6 = stat_buf.st_mode & 0xF000;
  }
  v62 = v6 == 4096 || v6 == 49152;
  if ( v62 )
  {
LABEL_21:
    v16 = dcgettext(0LL, "%s: invalid file type", 5);
    error(0, 0, v16, a2);
    return 0;
  }
  if ( v6 == 0x8000 && stat_buf.st_size < 0 )
  {
    v45 = dcgettext(0LL, "%s: file has negative size", 5);
    error(0, 0, v45, a2);
    return v62;
  }
  if ( *(_QWORD *)(v5 + 8) & 0x2000000000000000LL || *(_QWORD *)(v5 + 8) >> 62 != 0LL )
    sub_408490();
  v7 = (char *)sub_408240(4LL * *(_QWORD *)(v5 + 8));
  v57 = *(_QWORD *)(v5 + 16);
  if ( v57 == -1 )
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x8000 )
    {
      v47 = lseek(fd, 0LL, 2);
      if ( v47 <= 0 )
      {
        v61 = 0LL;
        v59 = *(_QWORD *)(v5 + 8);
        if ( v59 )
          goto LABEL_12;
      }
      else
      {
        v57 = v47;
        v61 = 0LL;
        v59 = *(_QWORD *)(v5 + 8);
        if ( v59 )
          goto LABEL_12;
      }
      v48 = sub_406E60(ptr);
      v25 = 0LL;
      v53 = 1;
      v24 = v48;
      goto LABEL_55;
    }
    v57 = stat_buf.st_size;
    v53 = *(_BYTE *)(v5 + 29);
    v59 = *(_QWORD *)(v5 + 8);
    if ( v53 )
    {
      v61 = 0LL;
      if ( !v59 )
      {
        v24 = sub_406E60(ptr);
        goto LABEL_53;
      }
      goto LABEL_12;
    }
    v21 = stat_buf.st_blksize;
    if ( (unsigned __int64)(stat_buf.st_blksize - 1) > 0x1FFFFFFFFFFFFFFFLL )
      v21 = 512LL;
    v22 = stat_buf.st_size % v21;
    if ( v21 <= stat_buf.st_size || (v61 = stat_buf.st_size) == 0 )
      v61 = 0LL;
    if ( v22 )
    {
      v23 = v21 - v22;
      if ( 0x7FFFFFFFFFFFFFFFLL - stat_buf.st_size <= v23 )
        v23 = 0x7FFFFFFFFFFFFFFFLL - stat_buf.st_size;
      v57 = v23 + stat_buf.st_size;
    }
    goto LABEL_41;
  }
  v59 = *(_QWORD *)(v5 + 8);
  if ( (stat_buf.st_mode & 0xF000) == 0x8000 )
  {
    v20 = stat_buf.st_blksize;
    v61 = stat_buf.st_size;
    if ( (unsigned __int64)(stat_buf.st_blksize - 1) > 0x1FFFFFFFFFFFFFFFLL )
      v20 = 512LL;
    if ( v20 > v57 )
      v20 = *(_QWORD *)(v5 + 16);
    if ( stat_buf.st_size >= v20 )
    {
      if ( v59 )
      {
        v61 = 0LL;
        goto LABEL_12;
      }
LABEL_78:
      v53 = 1;
      v24 = sub_406E60(ptr);
      goto LABEL_53;
    }
LABEL_41:
    if ( !v59 )
      goto LABEL_42;
    goto LABEL_12;
  }
  v61 = 0LL;
  if ( !v59 )
    goto LABEL_78;
LABEL_12:
  v8 = v7;
  v64 = v5;
  v9 = -2;
  v10 = v59;
  v11 = (int *)&unk_40B340;
  v12 = 0LL;
  while ( !v9 )
  {
    v9 = -2;
    v11 = (int *)&unk_40B344;
LABEL_14:
    v13 = -v9;
    if ( v13 >= v10 )
    {
      v46 = v10;
      v34 = v64;
      v54 = v46 + v12;
      goto LABEL_67;
    }
    v12 += v13;
    v10 -= v13;
LABEL_16:
    v9 = *v11;
  }
  ++v11;
  if ( v9 < 0 )
    goto LABEL_14;
  v14 = v9;
  if ( v9 <= v10 )
  {
    v15 = v11;
    v10 -= v9;
    v11 += v9;
    v8 = (char *)memcpy(v8, v15, 4LL * v9) + 4 * v9;
    goto LABEL_16;
  }
  v54 = v12;
  v32 = v11;
  v33 = v10;
  v34 = v64;
  if ( v33 <= 1 || v9 > 3 * v33 )
  {
    v54 += v33;
    goto LABEL_67;
  }
  v35 = v8;
  while ( 2 )
  {
    ++v32;
    if ( v33 != v14 )
    {
      v36 = v14 - 1;
      if ( v33 <= sub_406E70(ptr, v14 - 1) )
      {
LABEL_62:
        v14 = v36;
        continue;
      }
    }
    break;
  }
  *v35 = *(v32 - 1);
  if ( --v33 )
  {
    ++v35;
    v36 = v14 - 1;
    goto LABEL_62;
  }
  v4 = fd;
  v34 = v64;
LABEL_67:
  v63 = v4;
  v37 = 0LL;
  v65 = v34;
  v38 = v59 - 1;
  v39 = v59;
  v40 = v54 - 1;
  v41 = v54 - 1;
  v42 = v59 - v54;
  do
  {
    while ( v40 <= v41 )
    {
      *(_DWORD *)&v7[4 * v42++] = *(_DWORD *)&v7[4 * v37];
      *(_DWORD *)&v7[4 * v37++] = -1;
      v40 = v38 + v40 - v41;
      if ( v37 == v39 )
        goto LABEL_71;
    }
    v60 = v38;
    v40 -= v41;
    v55 = *(_DWORD *)&v7[4 * v37];
    v43 = sub_406E70(ptr, v42 - 1 - v37);
    v38 = v60;
    v44 = &v7[4 * (v37 + v43)];
    *(_DWORD *)&v7[4 * v37++] = *(_DWORD *)v44;
    *(_DWORD *)v44 = v55;
  }
  while ( v37 != v39 );
LABEL_71:
  v4 = v63;
  v5 = v65;
LABEL_42:
  v24 = sub_406E60(ptr);
  if ( v61 )
  {
    v66 = v61;
    v25 = *(_QWORD *)(v5 + 8);
    v26 = 0LL;
    v53 = 1;
LABEL_44:
    ptra = v7;
    v27 = v5;
    v28 = 0LL;
    while ( 1 )
    {
      if ( v25 + *(unsigned __int8 *)(v27 + 30) <= v28 )
      {
        v5 = v27;
        v7 = ptra;
        goto LABEL_53;
      }
      v29 = 0;
      if ( v28 < v25 )
        v29 = *(_DWORD *)&ptra[4 * v28];
      v30 = sub_402B20(v4, v56, &v66, (__int64)&stat_buf, v29, v24, ++v28, v26);
      if ( v30 )
      {
        if ( v30 < 0 )
        {
          v7 = ptra;
          goto LABEL_57;
        }
        v53 = 0;
      }
      v25 = *(_QWORD *)(v27 + 8);
    }
  }
  v53 = 1;
LABEL_53:
  if ( v57 )
  {
    v25 = *(_QWORD *)(v5 + 8);
LABEL_55:
    v31 = v57;
    v26 = v58;
    v57 = 0LL;
    v66 = v31;
    goto LABEL_44;
  }
  if ( *(_DWORD *)(v5 + 24) && ftruncate(v4, 0LL) && (stat_buf.st_mode & 0xF000) == 0x8000 )
  {
    v49 = dcgettext(0LL, "%s: error truncating", 5);
    v50 = __errno_location();
    error(0, *v50, v49, v56);
  }
  else
  {
    v62 = v53;
  }
LABEL_57:
  free(v7);
  return v62;
}

noreturn void __fastcall  sub_403AC0(int status)
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
  char *v10; // rax
  FILE *v11; // rbp
  char *v12; // rax
  FILE *v13; // rbp
  char *v14; // rax
  FILE *v15; // rbp
  char *v16; // rax
  FILE *v17; // rbp
  char *v18; // rax
  FILE *v19; // rbp
  char *v20; // rax
  FILE *v21; // rbp
  char *v22; // rax
  FILE *v23; // rbp
  char *v24; // rax
  FILE *v25; // rbp
  char *v26; // rax
  FILE *v27; // rbp
  char *v28; // rax
  const char **v29; // rax
  const char *v30; // rbp
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  const char *v39; // [rsp+0h] [rbp-88h]
  const char *v40; // [rsp+8h] [rbp-80h]
  const char *v41; // [rsp+10h] [rbp-78h]
  const char *v42; // [rsp+18h] [rbp-70h]
  const char *v43; // [rsp+20h] [rbp-68h]
  const char *v44; // [rsp+28h] [rbp-60h]
  const char *v45; // [rsp+30h] [rbp-58h]
  const char *v46; // [rsp+38h] [rbp-50h]
  const char *v47; // [rsp+40h] [rbp-48h]
  const char *v48; // [rsp+48h] [rbp-40h]
  const char *v49; // [rsp+50h] [rbp-38h]
  const char *v50; // [rsp+58h] [rbp-30h]
  __int64 v51; // [rsp+60h] [rbp-28h]
  __int64 v52; // [rsp+68h] [rbp-20h]

  v1 = qword_60F3B0;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... FILE...\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "Overwrite the specified FILE(s) repeatedly, in order to make it harder\n"
         "for even very expensive hardware probing to recover the data.\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nIf FILE is -, shred standard output.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v9, v8);
  v10 = dcgettext(
          0LL,
          "  -f, --force    change permissions to allow writing if necessary\n"
          "  -n, --iterations=N  overwrite N times instead of the default (%d)\n"
          "      --random-source=FILE  get random bytes from FILE\n"
          "  -s, --size=N   shred this many bytes (suffixes like K, M, G accepted)\n",
          5);
  __printf_chk(1LL, v10, 3LL);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "  -u             deallocate and remove file after overwriting\n"
          "      --remove[=HOW]  like -u but give control on HOW to delete;  See below\n"
          "  -v, --verbose  show progress\n"
          "  -x, --exact    do not round file sizes up to the next full block;\n"
          "                   this is the default for non-regular files\n"
          "  -z, --zero     add a final overwrite with zeros to hide shredding\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "\n"
          "Delete FILE(s) if --remove (-u) is specified.  The default is not to remove\n"
          "the files because it is common to operate on device files like /dev/hda,\n"
          "and those files usually should not be removed.\n"
          "The optional HOW parameter indicates how to remove a directory entry:\n"
          "'unlink' => use a standard unlink call.\n"
          "'wipe' => also first obfuscate bytes in the name.\n"
          "'wipesync' => also sync each obfuscated byte to disk.\n"
          "The default mode is 'wipesync', but note it can be expensive.\n"
          "\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "CAUTION: Note that shred relies on a very important assumption:\n"
          "that the file system overwrites data in place.  This is the traditional\n"
          "way to do things, but many modern file system designs do not satisfy this\n"
          "assumption.  The following are examples of file systems on which shred is\n"
          "not effective, or is not guaranteed to be effective in all file system modes:\n"
          "\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "* log-structured or journaled file systems, such as those supplied with\n"
          "AIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)\n"
          "\n"
          "* file systems that write redundant data and carry on even if some writes\n"
          "fail, such as RAID-based file systems\n"
          "\n"
          "* file systems that make snapshots, such as Network Appliance's NFS server\n"
          "\n",
          5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "* file systems that cache in temporary locations, such as NFS\n"
          "version 3 clients\n"
          "\n"
          "* compressed file systems\n"
          "\n",
          5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(
          0LL,
          "In the case of ext3 file systems, the above disclaimer applies\n"
          "(and shred is thus of limited effectiveness) only in data=journal mode,\n"
          "which journals file data in addition to just metadata.  In both the\n"
          "data=ordered (default) and data=writeback modes, shred works as usual.\n"
          "Ext3 journaling modes can be changed by adding the data=something option\n"
          "to the mount options for a particular file system in the /etc/fstab file,\n"
          "as documented in the mount man page (man mount).\n"
          "\n",
          5);
  fputs_unlocked(v26, v25);
  v27 = stdout;
  v28 = dcgettext(
          0LL,
          "In addition, file system backups and remote mirrors may contain copies\n"
          "of the file that cannot be removed, and that will allow a shredded file\n"
          "to be recovered later.\n",
          5);
  fputs_unlocked(v28, v27);
  v39 = "[";
  v29 = &v39;
  v40 = "test invocation";
  v41 = "coreutils";
  v42 = "Multi-call invocation";
  v43 = "sha224sum";
  v44 = "sha2 utilities";
  v45 = "sha256sum";
  v46 = "sha2 utilities";
  v47 = "sha384sum";
  v48 = "sha2 utilities";
  v49 = "sha512sum";
  v50 = "sha2 utilities";
  v51 = 0LL;
  v52 = 0LL;
  do
    v29 += 2;
  while ( *v29 && strcmp("shred", *v29) );
  v30 = v29[1];
  if ( v30 )
  {
    v31 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v31, &unk_40A3D4);
    v32 = setlocale(5, 0LL);
    if ( !v32 || !strncmp(v32, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v35 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v35, &unk_40A3D4);
    v36 = setlocale(5, 0LL);
    if ( !v36 || !strncmp(v36, "en_", 3uLL) )
    {
      v30 = "shred";
      v37 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v37, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v30 = "shred";
  }
  v38 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v38, "shred");
LABEL_10:
  v33 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v33, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v34 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v34, v30);
LABEL_3:
  exit(status);
}

noreturn void  sub_403F10()
{
  sub_403AC0(1);
}

__int64 __fastcall sub_403F20(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_404040(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_406DC0(1LL, a1);
  v5 = sub_406AB0(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_4040C0(__int64 *a1, char *a2, size_t a3)
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
      v11 = sub_406DE0(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v12 = sub_406DE0(i);
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

__int64 __fastcall sub_4041E0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
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
  result = sub_403F20(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_404040(a1, (__int64)a2, result);
    sub_4040C0(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_404250(void *s1, __int64 *a2, char *a3, size_t a4)
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

__int64 sub_4042C0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_409AC0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60F3A0 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60F3A8 )
      {
        v5 = sub_406C30();
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
  result = sub_409AC0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_404360(void *a1)
{
  __int64 result; // rax

  result = sub_4043E0(a1);
  if ( !result )
    sub_408490();
  return result;
}

__int64 __fastcall sub_404380(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx

  v2 = *a1 == 47;
  v3 = sub_404440(a1, a2);
  if ( v3 - (__int64)a1 <= v2 )
    return v3 - (_QWORD)a1;
  v4 = v3 - (_QWORD)a1 - 1;
  if ( *(_BYTE *)(v3 - 1) != 47 )
    return v3 - (_QWORD)a1;
  while ( v2 != v4 && a1[v4 - 1] == 47 )
    --v4;
  return v4;
}

_BYTE *__fastcall sub_4043E0(void *src, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // rbx
  _BYTE *v4; // rax
  _BYTE *v5; // rcx
  _BYTE *v6; // rax

  v2 = sub_404380(src, a2);
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

_BYTE *__fastcall sub_404440(_BYTE *a1)
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

size_t __fastcall sub_4044A0(const char *a1)
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

__int64 __fastcall sub_4044D0(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp-28h]

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = v6;
  v4 = open(a1, a2, v3);
  return sub_407C50(v4);
}

long double __fastcall sub_404520(int a1, long double a15)
{
  unsigned __int64 v7; // rax
  long double v8; // fst6
  long double result; // fst7

  if ( a15 >= 9.223372e18 )
    v7 = (__int64)(a15 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v7 = (__int64)a15;
  v8 = (long double)v7;
  if ( a1 )
    return v8;
  result = v8;
  if ( a15 != v8 )
  {
    result = (long double)(__int64)(v7 + 1);
    if ( (__int64)(v7 + 1) < 0 )
      result = result + 1.8446744e19;
  }
  return result;
}

__int64 __fastcall sub_4045E0(__int64 a1, char *a2, __int16 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  struct lconv *v7; // rax
  const char *v8; // r15
  struct lconv *v9; // r12
  size_t v10; // r8
  char *v11; // rax
  const char *v12; // r12
  size_t v13; // rax
  __int64 v14; // r9
  size_t v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  long double v18; // fst7
  long double v19; // fst6
  long double v20; // fst7
  long double v21; // fst6
  long double v22; // fst7
  long double v23; // fst6
  int v24; // ebx
  long double v25; // fst5
  long double v26; // fst4
  long double v27; // fst7
  long double v28; // fst6
  long double v29; // fst7
  __int64 v30; // r14
  long double v31; // fst7
  unsigned __int64 v32; // r15
  long double v33; // fst6
  size_t v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  long double v37; // fst6
  long double v38; // fst7
  size_t v39; // r14
  __int64 v40; // r15
  char *v41; // r14
  int v42; // eax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rtt
  unsigned __int64 v46; // rdx
  int v47; // er9
  int v48; // edi
  int v49; // ecx
  char *v50; // rbp
  unsigned __int8 *v51; // r15
  size_t v52; // rbx
  size_t v53; // rbp
  unsigned __int8 v54; // dl
  size_t v55; // rax
  size_t v56; // rbp
  char *v57; // r14
  unsigned __int64 v58; // rax
  char *v59; // rdx
  unsigned __int64 v60; // r11
  int v61; // eax
  unsigned int v62; // ett
  unsigned int v63; // edx
  unsigned int v64; // edi
  bool v65; // dl
  char v66; // al
  unsigned __int64 v67; // r9
  unsigned int v68; // edx
  __int64 v69; // rdi
  unsigned __int64 v70; // rcx
  signed __int64 v71; // r15
  unsigned int v72; // edx
  __int64 v73; // rsi
  size_t v74; // [rsp+0h] [rbp-B8h]
  __int64 v75; // [rsp+8h] [rbp-B0h]
  char *v76; // [rsp+10h] [rbp-A8h]
  char *s; // [rsp+18h] [rbp-A0h]
  __int16 v78; // [rsp+20h] [rbp-98h]
  int v79; // [rsp+24h] [rbp-94h]
  int v80; // [rsp+24h] [rbp-94h]
  unsigned __int64 v81; // [rsp+28h] [rbp-90h]
  size_t v82; // [rsp+30h] [rbp-88h]
  long double v83; // [rsp+30h] [rbp-88h]
  float v84; // [rsp+30h] [rbp-88h]
  size_t v85; // [rsp+30h] [rbp-88h]
  long double v86; // [rsp+30h] [rbp-88h]
  unsigned int v87; // [rsp+40h] [rbp-78h]
  unsigned int v88; // [rsp+44h] [rbp-74h]
  char *v89; // [rsp+48h] [rbp-70h]
  char src[104]; // [rsp+50h] [rbp-68h]

  v5 = a4;
  v6 = a5;
  v87 = a3 & 0x20;
  s = a2;
  v78 = a3;
  v81 = a5;
  v79 = a3 & 3;
  v88 = v87 < 1 ? 1000 : 1024;
  v7 = localeconv();
  v8 = v7->decimal_point;
  v9 = v7;
  v10 = strlen(v7->decimal_point);
  if ( v10 - 1 >= 0x10 )
    v8 = "%s: pass %lu/%lu (%s)..." + 23;
  v11 = v9->grouping;
  v12 = v9->thousands_sep;
  if ( v10 - 1 >= 0x10 )
    v10 = 1LL;
  v82 = v10;
  v89 = v11;
  v13 = strlen(v12);
  v15 = v82;
  if ( v13 >= 0x11 )
    v12 = "";
  v76 = a2 + 647;
  if ( v6 > v5 )
  {
    if ( !v5 || (v44 = v81 / v5, v81 % v5) )
    {
LABEL_10:
      v18 = (long double)v5;
      v19 = (long double)(__int64)v81;
      if ( (v81 & 0x8000000000000000LL) != 0LL )
      {
        v20 = v18 / (v19 + 1.8446744e19);
        v21 = (long double)a1;
        if ( a1 >= 0 )
        {
LABEL_12:
          v22 = v20 * v21;
          if ( v78 & 0x10 )
          {
LABEL_13:
            v23 = (long double)(int)v88;
            v24 = 0;
            v25 = v23;
            while ( 1 )
            {
              ++v24;
              v26 = v22;
              v27 = v25 * v23;
              if ( v26 < v27 )
                break;
              if ( v24 == 8 )
              {
                v28 = v26;
                v29 = v25;
                goto LABEL_19;
              }
              v25 = v27;
              v22 = v26;
            }
            v28 = v26;
            v29 = v25;
LABEL_19:
            v30 = v82 + 1;
            v31 = v28 / v29;
            v32 = v82 + 1 + (v87 == 0) + 1;
            if ( v79 == 1 )
            {
              __sprintf_chk(s, 1LL, -1LL, "%Lf", v82, v14, *(_QWORD *)&v31);
              v34 = strlen(s);
              if ( v34 > v32 )
              {
                v37 = 10.0;
                v38 = v31 * 10.0;
                goto LABEL_26;
              }
            }
            else
            {
              if ( v31 < 1.8446744073709551615e19 )
              {
                v86 = v31;
                *(_QWORD *)&v31 = COERCE_UNSIGNED_INT128(sub_404520(v79, v31));
                v33 = v86;
              }
              else
              {
                v33 = v31;
              }
              v83 = v33;
              __sprintf_chk(s, 1LL, -1LL, "%Lf", v15, v14, *(_QWORD *)&v31);
              v34 = strlen(s);
              v31 = v33;
              if ( v34 > v32 )
              {
                v37 = 10.0;
                v38 = v83 * 10.0;
LABEL_24:
                if ( v38 < 1.8446744073709551615e19 )
                {
                  v84 = v37;
                  v38 = sub_404520(v79, v38);
                  v37 = v84;
                }
                goto LABEL_26;
              }
            }
            if ( !(v78 & 8) || s[v34 - 1] != 48 )
            {
              v39 = v34 - v30;
              goto LABEL_31;
            }
            v37 = 10.0;
            v38 = v31 * 10.0;
            if ( v79 != 1 )
              goto LABEL_24;
LABEL_26:
            __sprintf_chk(s, 1LL, -1LL, "%Lf", v35, v36, COERCE_UNSIGNED_INT128(v38 / v37));
            v34 = strlen(s);
            v39 = v34;
LABEL_31:
            v40 = (__int64)&v76[-v34];
            v41 = &v76[v39 - v34];
            memmove(&v76[-v34], s, v34);
            goto LABEL_32;
          }
LABEL_27:
          if ( v79 != 1 && v22 < 1.8446744073709551615e19 )
          {
            *(_QWORD *)&v22 = COERCE_UNSIGNED_INT128(sub_404520(v79, v22));
            v14 = v75;
            v15 = v74;
          }
          __sprintf_chk(s, 1LL, -1LL, "%Lf", v15, v14, *(_QWORD *)&v22);
          v24 = -1;
          v34 = strlen(s);
          v39 = v34;
          goto LABEL_31;
        }
      }
      else
      {
        v20 = v18 / v19;
        v21 = (long double)a1;
        if ( a1 >= 0 )
          goto LABEL_12;
      }
      v22 = v20 * (v21 + 1.8446744e19);
      if ( v78 & 0x10 )
        goto LABEL_13;
      goto LABEL_27;
    }
    v17 = a1 / v44;
    v45 = 10 * (a1 % v44);
    v46 = 2 * (v45 % v44);
    v47 = v45 / v44;
    if ( v44 <= v46 )
      v48 = (v44 < v46) + 2;
    else
      v48 = v46 != 0;
    v49 = v78 & 0x10;
    if ( !(v78 & 0x10) )
      goto LABEL_85;
  }
  else
  {
    v16 = v5 / v6;
    if ( v5 % v6 )
      goto LABEL_10;
    v17 = a1 * v16;
    if ( a1 * v16 / (v5 / v6) != a1 )
      goto LABEL_10;
    v48 = 0;
    v47 = 0;
    v49 = v78 & 0x10;
    if ( !(v78 & 0x10) )
    {
LABEL_85:
      v24 = -1;
      goto LABEL_47;
    }
  }
  v24 = 0;
  if ( v88 <= v17 )
  {
    while ( 1 )
    {
      v60 = v17 / v88;
      v62 = v47 + 10 * (v17 % v88);
      v61 = (v47 + 10 * (v17 % v88)) / v88;
      v63 = (v48 >> 1) + 2 * (v62 % v88);
      v47 = v62 / v88;
      v17 /= v88;
      v64 = v63 + v48;
      v48 = v88 > v63 ? v64 != 0 : (v88 < v64) + 2;
      ++v24;
      if ( v88 > v60 )
        break;
      if ( v24 == 8 )
        goto LABEL_47;
    }
    if ( v60 <= 9 )
    {
      if ( v79 == 1 )
        v65 = v48 + (v61 & 1) > 2;
      else
        v65 = v48 > 0 && v79 == 0;
      if ( v65 )
      {
        if ( ++v61 == 10 )
        {
          v17 = v60 + 1;
          if ( v60 == 9 )
          {
            v41 = v76;
LABEL_114:
            v48 = 0;
            goto LABEL_115;
          }
          v48 = 0;
          goto LABEL_107;
        }
      }
      else if ( !v61 )
      {
LABEL_107:
        v41 = v76;
        if ( v78 & 8 )
        {
LABEL_115:
          if ( v79 == 1 )
            goto LABEL_52;
          v47 = 0;
          goto LABEL_48;
        }
        v66 = 48;
        goto LABEL_109;
      }
      v66 = v61 + 48;
LABEL_109:
      s[646] = v66;
      v41 = &s[-v82 + 646];
      if ( (unsigned int)v82 >= 8 )
      {
        v67 = (unsigned __int64)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)v41 = *(_QWORD *)v8;
        *(_QWORD *)&v41[(unsigned int)v82 - 8] = *(_QWORD *)&v8[(unsigned int)v82 - 8];
        if ( (((_DWORD)s + 646 - (_DWORD)v67) & 0xFFFFFFF8) >= 8 )
        {
          v68 = 0;
          do
          {
            v69 = v68;
            v68 += 8;
            *(_QWORD *)(v67 + v69) = *(_QWORD *)(v8 - &v41[-v67] + v69);
          }
          while ( v68 < (((_DWORD)s + 646 - (_DWORD)v67) & 0xFFFFFFF8) );
        }
      }
      else if ( v82 & 4 )
      {
        *(_DWORD *)v41 = *(_DWORD *)v8;
        *(_DWORD *)&v41[(unsigned int)v82 - 4] = *(_DWORD *)&v8[(unsigned int)v82 - 4];
      }
      else if ( (_DWORD)v82 )
      {
        *v41 = *v8;
        if ( v82 & 2 )
          *(_WORD *)&v41[(unsigned int)v82 - 2] = *(_WORD *)&v8[(unsigned int)v82 - 2];
      }
      goto LABEL_114;
    }
  }
LABEL_47:
  v41 = v76;
  if ( v79 == 1 )
  {
    if ( (v48 + (v17 & 1) != 0) + v47 <= 5 )
      goto LABEL_52;
    v41 = v76;
    goto LABEL_50;
  }
LABEL_48:
  if ( v79 || v47 + v48 <= 0 )
  {
LABEL_52:
    v40 = (__int64)v41;
    while ( 1 )
    {
      *(_BYTE *)--v40 = v17 % 0xA + 48;
      if ( v17 <= 9 )
        break;
      v17 /= 0xAuLL;
    }
    if ( !(v78 & 4) )
      goto LABEL_33;
    goto LABEL_56;
  }
LABEL_50:
  ++v17;
  if ( !v49 || v88 != v17 || v24 == 8 )
    goto LABEL_52;
  ++v24;
  if ( !(v78 & 8) )
  {
    *(v41 - 1) = 48;
    v41 += ~v82;
    if ( (unsigned int)v82 >= 8 )
    {
      v70 = (unsigned __int64)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v41 = *(_QWORD *)v8;
      *(_QWORD *)&v41[(unsigned int)v82 - 8] = *(_QWORD *)&v8[(unsigned int)v82 - 8];
      v71 = v8 - &v41[-v70];
      if ( (((_DWORD)v82 + (_DWORD)v41 - (_DWORD)v70) & 0xFFFFFFF8) >= 8 )
      {
        v72 = 0;
        do
        {
          v73 = v72;
          v72 += 8;
          *(_QWORD *)(v70 + v73) = *(_QWORD *)(v71 + v73);
        }
        while ( v72 < (((_DWORD)v82 + (_DWORD)v41 - (_DWORD)v70) & 0xFFFFFFF8) );
      }
    }
    else if ( v82 & 4 )
    {
      *(_DWORD *)v41 = *(_DWORD *)v8;
      *(_DWORD *)&v41[(unsigned int)v82 - 4] = *(_DWORD *)&v8[(unsigned int)v82 - 4];
    }
    else if ( (_DWORD)v82 )
    {
      *v41 = *v8;
      if ( v82 & 2 )
        *(_WORD *)&v41[(unsigned int)v82 - 2] = *(_WORD *)&v8[(unsigned int)v82 - 2];
    }
  }
  v40 = (__int64)(v41 - 1);
  *(v41 - 1) = 49;
LABEL_32:
  if ( !(v78 & 4) )
    goto LABEL_33;
LABEL_56:
  v50 = &v41[-v40];
  v85 = strlen(v12);
  __memcpy_chk(src, v40, &v41[-v40], 41LL);
  v80 = v24;
  v51 = (unsigned __int8 *)v89;
  v52 = (size_t)v50;
  v53 = -1LL;
  while ( 1 )
  {
    v54 = *v51;
    if ( *v51 )
    {
      v55 = v54;
      if ( v54 >= 0x7Fu )
        v55 = v52;
      ++v51;
      v53 = v55;
    }
    if ( v53 > v52 )
    {
      v56 = v52;
      v24 = v80;
      v40 = (__int64)&v41[-v56];
      memcpy(&v41[-v56], src, v56);
      goto LABEL_33;
    }
    v57 = &v41[-v53];
    v52 -= v53;
    memcpy(v57, &src[v52], v53);
    if ( !v52 )
      break;
    v41 = &v57[-v85];
    memcpy(v41, v12, v85);
  }
  v24 = v80;
  v40 = (__int64)v57;
LABEL_33:
  if ( (v78 & 0x80u) != 0 )
  {
    if ( v24 == -1 )
    {
      if ( v81 > 1 )
      {
        v24 = 1;
        v58 = 1LL;
        do
        {
          v58 *= v88;
          if ( v81 <= v58 )
            break;
          ++v24;
        }
        while ( v24 != 8 );
        v42 = v78 & 0x100;
        if ( !(v78 & 0x40) )
          goto LABEL_72;
        goto LABEL_70;
      }
      v24 = 0;
    }
    v42 = v78 & 0x100;
    if ( !(v24 | v42) )
      goto LABEL_36;
    if ( !(v78 & 0x40) )
    {
LABEL_71:
      if ( !v24 )
      {
        v59 = v76;
        if ( !v42 )
          goto LABEL_36;
        goto LABEL_77;
      }
LABEL_72:
      if ( v87 || v24 != 1 )
      {
        v59 = v76 + 1;
        *v76 = byte_40B6B8[v24];
        if ( v42 )
        {
          if ( v87 )
          {
            v59 = v76 + 2;
            v76[1] = 105;
          }
          goto LABEL_77;
        }
      }
      else
      {
        v59 = v76 + 1;
        *v76 = 107;
        if ( v42 )
        {
LABEL_77:
          *v59 = 66;
          v76 = v59 + 1;
          goto LABEL_36;
        }
      }
      v76 = v59;
      goto LABEL_36;
    }
LABEL_70:
    s[647] = 32;
    v76 = s + 648;
    goto LABEL_71;
  }
LABEL_36:
  *v76 = 0;
  return v40;
}

__int64 __fastcall sub_404FB0(char *nptr, int *a2, __int64 *a3)
{
  __int64 *v3; // r12
  char *v4; // rbx
  int v5; // ebp
  int v6; // eax
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rdx
  char *v10; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = nptr;
  if ( nptr || (v4 = getenv("BLOCK_SIZE")) != 0LL || (v4 = getenv("BLOCKSIZE")) != 0LL )
  {
    v5 = 0;
    if ( *v4 == 39 )
    {
      ++v4;
      v5 = 4;
    }
    v6 = sub_403F20(v4, (const char **)off_40B6A0, (char *)dword_40B690, 4uLL);
    if ( v6 >= 0 )
    {
      *v3 = 1LL;
      v7 = dword_40B690[v6] | v5;
      result = 0LL;
      *a2 = v7;
      return result;
    }
    result = sub_4085D0(v4);
    if ( (_DWORD)result )
    {
      *a2 = 0;
      v9 = *v3;
LABEL_15:
      if ( !v9 )
      {
        *v3 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? 1024LL : 512LL;
        result = 4LL;
      }
      return result;
    }
    if ( (unsigned __int8)(*v4 - 48) > 9u )
    {
      if ( v4 != v10 )
      {
        while ( (unsigned __int8)(*++v4 - 48) > 9u )
        {
          if ( v4 == v10 )
            goto LABEL_22;
        }
        goto LABEL_13;
      }
LABEL_22:
      if ( *(v10 - 1) == 66 )
      {
        v5 |= 0x180u;
        if ( *(v10 - 2) != 105 )
          goto LABEL_13;
      }
      else
      {
        LOBYTE(v5) = v5 | 0x80;
      }
      v5 |= 0x20u;
    }
LABEL_13:
    v9 = *v3;
    *a2 = v5;
    goto LABEL_15;
  }
  result = (__int64)getenv("POSIXLY_CORRECT");
  if ( result )
  {
    *v3 = 512LL;
    result = 0LL;
  }
  else
  {
    *v3 = 1024LL;
  }
  *a2 = 0;
  return result;
}

__int64 __fastcall sub_405170(unsigned __int64 a1, __int64 a2)
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

char *__fastcall sub_4051C0(const char *a1)
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
  qword_60F3B0 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_405260(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_409C20();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40B731;
      if ( !v5 )
        v2 = (char *)&unk_40B726;
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
    v2 = (char *)&unk_40B72D;
    if ( !v5 )
      v2 = (char *)&unk_40B72A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_405360(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_405360((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_405360((__int64)v9, v79, s);
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
              return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
          return sub_405360((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_409A40((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_405360((__int64)v9, v10, s);
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
      return sub_405360((__int64)v9, v10, s);
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
        a8 = sub_405260("`", v11);
        v47 = sub_405260("'", v11);
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

unsigned __int64 __fastcall sub_405360(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_405360((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_405360((__int64)v9, v79, s);
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
              return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
          return sub_405360((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_409A40((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_405360((__int64)v9, v10, s);
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
      return sub_405360((__int64)v9, v10, s);
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
        a8 = sub_405260("`", v11);
        v47 = sub_405260("'", v11);
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

_BYTE *__fastcall sub_406590(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F338;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F350 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408490();
    v9 = 16LL * (a1 + 1);
    if ( off_60F338 == &xmmword_60F340 )
    {
      v7 = (__int128 *)sub_4082A0(0LL, v9);
      off_60F338 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F340);
    }
    else
    {
      off_60F338 = (__int128 *)sub_4082A0(off_60F338, v9);
      v7 = off_60F338;
    }
    memset(&v7[dword_60F350], 0, 16LL * (a1 + 1 - dword_60F350));
    dword_60F350 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_405360(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60F3C0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408240(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_405360(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_406590(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F338;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F350 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408490();
    v9 = 16LL * (a1 + 1);
    if ( off_60F338 == &xmmword_60F340 )
    {
      v7 = (__int128 *)sub_4082A0(0LL, v9);
      off_60F338 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F340);
    }
    else
    {
      off_60F338 = (__int128 *)sub_4082A0(off_60F338, v9);
      v7 = off_60F338;
    }
    memset(&v7[dword_60F350], 0, 16LL * (a1 + 1 - dword_60F350));
    dword_60F350 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_405360(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60F3C0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408240(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_405360(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_406AB0(int a1, int a2, char *a3)
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
  return sub_406590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406AB0(int a1, int a2, char *a3)
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
  return sub_406590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406B20(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_406590(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_406B20(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_406590(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_406BB0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_60F4F0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_60F4C0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60F4D0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_60F4E0);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_406590(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_406C30(char *a1)
{
  return sub_406BB0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_406C60(int a1, int a2, char *a3)
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
  return sub_406590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406C60(int a1, int a2, char *a3)
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
  return sub_406590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406CD0(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_60F4C0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_60F4D0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60F4E0);
  v9 = qword_60F4F0;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_406590(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_406DC0(int a1, char *a2)
{
  return sub_406590(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60F300);
}

_BYTE *__fastcall sub_406DE0(char *a1)
{
  return sub_406590(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60F300);
}

_QWORD *__fastcall sub_406E00(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_408240(24LL);
  *result = a1;
  result[2] = 0LL;
  result[1] = 0LL;
  return result;
}

__int64 *sub_406E30()
{
  __int64 v0; // rbx
  __int64 *result; // rax

  v0 = sub_407050();
  result = 0LL;
  if ( v0 )
  {
    result = (__int64 *)sub_408240(24LL);
    *result = v0;
    result[2] = 0LL;
    result[1] = 0LL;
  }
  return result;
}

__int64 __fastcall sub_406E60(__int64 a1)
{
  return *(_QWORD *)a1;
}

unsigned __int64 __fastcall sub_406E70(__int64 *a1, unsigned __int64 a2)
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
      sub_407360(v4, &v13, v9);
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

void __fastcall sub_406F70(void *ptr)
{
  __explicit_bzero_chk(ptr, 24LL, -1LL);
  free(ptr);
}

noreturn void __fastcall  sub_406FF0(char *a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

  if ( a1 )
  {
    v1 = sub_406DE0(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

noreturn void __fastcall  sub_406FF0(char *a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

  if ( a1 )
  {
    v1 = sub_406DE0(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

__m128i *__fastcall sub_407050(__int64 a1, unsigned __int64 a2)
{
  FILE *v2; // r13
  __int64 v3; // rax
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
    v5 = (__m128i *)sub_408240(4152LL);
    v5->m128i_i64[0] = 0LL;
    v5->m128i_i64[1] = (__int64)sub_406FF0;
    v5[1].m128i_i64[0] = 0LL;
    return v5;
  }
  if ( !a1 )
  {
    v7 = (__m128i *)sub_408240(4152LL);
    v7->m128i_i64[0] = 0LL;
    v5 = v7;
    v8 = (__int64)v7[2].m128i_i64;
    v7->m128i_i64[1] = (__int64)sub_406FF0;
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
    sub_4077C0(v8);
    return v5;
  }
  v2 = (FILE *)sub_409B20(a1, "rb");
  if ( !v2 )
    return 0LL;
  v3 = sub_408240(4152LL);
  v4 = 4096LL;
  *(_QWORD *)v3 = v2;
  if ( a2 <= 0x1000 )
    v4 = a2;
  *(_QWORD *)(v3 + 8) = sub_406FF0;
  v5 = (__m128i *)v3;
  *(_QWORD *)(v3 + 16) = a1;
  setvbuf(v2, (char *)(v3 + 24), 0, v4);
  return v5;
}

__int64 __fastcall sub_407360(__int64 a1, char *a2, size_t a3)
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
        sub_407510(v13, v12);
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
          sub_407510(v13, v12);
          goto LABEL_15;
        }
        v15 = v4;
        v4 += 2048;
        result = sub_407510(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_4074C0(void *ptr)
{
  FILE *v1; // rbp
  __int64 result; // rax

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_408A10(v1);
  else
    result = 0LL;
  return result;
}

unsigned __int64 *__fastcall sub_407510(unsigned __int64 *a1, __int64 *a2)
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

unsigned __int64 __fastcall sub_4077C0(_QWORD *a1)
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

__int64 __fastcall sub_407A00(int oldfd, char *old, int newfd, char *a4, unsigned int a5)
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

__int64 __fastcall sub_407C50(int fd)
{
  __int64 result; // rax
  unsigned int v2; // er12
  int *v3; // rax
  int v4; // er13
  int *v5; // rbp

  if ( (unsigned int)fd > 2 )
    return (unsigned int)fd;
  v2 = sub_40A190();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

__int64 __fastcall sub_407CA0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_407CA0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4080A0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_407CA0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_407CA0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_408100(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_407CA0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_407CA0(a1, a2, a3, a4, v15, i);
}

int sub_4081C0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40A3D4);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_408240(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_408490();
  }
  return result;
}

void *__fastcall sub_4082A0(void *a1, size_t a2)
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
        sub_408490();
    }
  }
  return result;
}

void *__fastcall sub_408440(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_408240(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_408470(void *src)
{
  size_t v1; // rax

  v1 = strlen((const char *)src);
  return sub_408440(src, v1 + 1);
}

noreturn void  sub_408490()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_4084D0(char *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // rbp
  int *v13; // r14
  _BYTE *v14; // rax
  int v15; // esi
  int v17; // ebp
  int *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v7 = a4;
  v8 = a3;
  v9 = a6;
  v10 = a7;
  v11 = sub_4085D0(a1);
  if ( v11 )
  {
    v17 = v11;
    v18 = __errno_location();
    v13 = v18;
    if ( v17 == 1 )
    {
      *v18 = 75;
    }
    else if ( v17 == 3 )
    {
      *v18 = 0;
    }
  }
  else
  {
    v12 = v19;
    if ( v19 >= v8 && v19 <= v7 )
      return v12;
    v13 = __errno_location();
    *v13 = v19 < 0x40000000 ? 34 : 75;
  }
  v14 = sub_406DE0(a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", v9, v14);
  return v19;
}

unsigned __int64 __fastcall sub_4085A0(char *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_4084D0(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_4085D0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
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

int __fastcall sub_408A10(FILE *stream)
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
  if ( !(unsigned int)sub_408BD0(stream) )
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

__int64 __fastcall sub_408A90(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_60F4F8 < 0 )
    {
      v3 = sub_408A90(a1);
      if ( v3 >= 0 && dword_60F4F8 == -1 )
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
        dword_60F4F8 = 1;
      }
      else
      {
        v3 = sub_408A90(a1);
        if ( v3 >= 0 )
        {
          dword_60F4F8 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_408BD0(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_408C10(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_408C10(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_408C70(__int64 a1, int *a2)
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

__int64 __fastcall sub_408D50(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_409370(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_408C70(a2, a7);
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
        sub_408C70((__int64)v11, a7);
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
            return (unsigned int)sub_408D50(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408D50(a1, v11, v12, v45, v46, a6, a7, v8, 4246706LL);
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
        return (unsigned int)sub_408D50(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_409940(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60F500 = dword_60F35C;
  dword_60F504 = dword_60F358;
  result = sub_409370(a1, a2, a3, a4, a5, a6, &dword_60F500, a7);
  dword_60F35C = dword_60F500;
  s2 = (char *)qword_60F510;
  dword_60F354 = dword_60F508;
  return result;
}

__int64 __fastcall sub_4099A0(int a1, __int64 a2, char *a3)
{
  return sub_409940(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_4099C0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409940(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_4099E0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409370(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_409A00(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409940(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_409A20(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409370(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409A40(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409BC0(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

int __fastcall sub_409AC0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_408A10(stream);
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

FILE *__fastcall sub_409B20(const char *a1, const char *a2)
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
      v6 = sub_40A190(v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_408A10(v11);
        *v13 = v12;
      }
      else if ( sub_408A10(v3) || (v3 = fdopen(v6, a2)) == 0LL )
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

bool __fastcall sub_409BC0(int a1)
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

const char *sub_409C20()
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
  v1 = qword_60F538;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_60F538 )
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
          qword_60F538 = v1;
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
                sub_408A10(v60);
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
            sub_408A10(v39);
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

__int64 __fastcall sub_40A190(char a1)
{
  return sub_408A90(a1, 0, 3LL);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40A210(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_60F2C8 )
    v1 = (void *)unk_60F2C8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40A228(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_60EE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
