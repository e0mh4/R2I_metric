__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  const char *v3; // r12@1
  int v4; // eax@2
  __int64 v5; // rax@9
  char *v6; // rax@19
  char *v7; // r13@24
  __int64 v8; // r14@30
  int v9; // ebp@30
  __int64 v10; // rax@31
  char **v11; // r15@33
  int v12; // eax@34
  char v13; // al@36
  __int64 v14; // rax@39
  bool v15; // cf@39
  bool v16; // zf@39
  char *v17; // rax@39
  char *v18; // r12@39
  signed __int64 v19; // rcx@39
  char *v20; // rdi@39
  char *v21; // rbp@39
  char *v22; // rsi@39
  int v23; // er14@43
  int *v24; // r13@44
  char *v25; // rax@49
  int v26; // esi@49
  char *v27; // rax@50
  char *v29; // rbx@53
  int *v30; // rax@53
  char *v31; // rbx@54
  int *v32; // rax@54
  char *v33; // rax@59
  char *v34; // r14@59
  char *v35; // rax@59
  char *v36; // rbx@59
  void *v37; // rax@59
  __int64 v38; // rax@59
  void *v39; // rax@59
  __int64 v40; // rax@64
  signed __int64 v41; // r14@64
  char *i; // rbp@69
  char *v43; // rax@72
  char v44; // al@73
  char *v45; // rax@62
  char *v46; // rbx@81
  int *v47; // rax@81
  char *v48; // rcx@86
  char *v49; // ST30_8@88
  char *v50; // rax@88
  char *v51; // rbx@94
  int *v52; // rax@94
  char *v53; // rax@78
  char *v54; // rax@95
  __int64 v55; // rax@99
  __int64 v56; // rbx@99
  int *v57; // rax@99
  char *v58; // rax@100
  char v59; // [sp+1h] [bp-A1h]@33
  char **v60; // [sp+2h] [bp-A0h]@33
  signed int fd; // [sp+Ah] [bp-98h]@59
  void *v62; // [sp+12h] [bp-90h]@59
  char v63; // [sp+1Ah] [bp-88h]@64
  char *ptr; // [sp+2Ah] [bp-78h]@59
  char *v65; // [sp+32h] [bp-70h]@64
  void *v66; // [sp+3Ah] [bp-68h]@59
  char v67; // [sp+4Ah] [bp-58h]@1
  __int64 v68; // [sp+62h] [bp-40h]@1

  v3 = 0LL;
  v67 = 0;
  v68 = 0LL;
  sub_4051C0(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40A210(
    sub_4042C0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
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
LABEL_96:
        sub_403AC0(1);
      }
      if ( v4 == 102 )
      {
        v67 = 1;
      }
      else
      {
        if ( v4 != 110 )
          goto LABEL_96;
        v6 = dcgettext(0LL, "invalid number of passes", 5);
        sub_4085A0(s2, 0LL, 0x3FFFFFFFFFFFFFFFLL, "", v6, 0LL);
      }
    }
    else if ( v4 != 120 )
    {
      if ( v4 > 120 )
      {
        if ( v4 != 122 )
        {
          if ( v4 != 128 )
            goto LABEL_96;
          v7 = s2;
          if ( v3 && strcmp(v3, s2) )
            goto LABEL_100;
          v3 = v7;
        }
      }
      else if ( v4 == 117 )
      {
        if ( s2 )
        {
          LODWORD(v5) = sub_4041E0("--remove", s2, off_40B5A0, dword_40B580, 4LL, off_60F2D8);
          LODWORD(v68) = dword_40B580[v5];
        }
        else
        {
          LODWORD(v68) = 3;
        }
      }
      else
      {
        if ( v4 != 118 )
          goto LABEL_96;
        BYTE4(v68) = 1;
      }
    }
  }
  v8 = dword_60F35C;
  v9 = a1 - dword_60F35C;
  if ( a1 == dword_60F35C )
  {
    v54 = dcgettext(0LL, "missing file operand", 5);
    error(0, 0, v54);
    goto LABEL_96;
  }
  LODWORD(v10) = sub_406E30(v3, -1LL);
  qword_60F398 = v10;
  if ( !v10 )
  {
    LODWORD(v55) = sub_406C60(0LL, 3LL, v3);
    v56 = v55;
    v57 = __errno_location();
    error(1, *v57, "%s", v56);
LABEL_100:
    v58 = dcgettext(0LL, "multiple random sources specified", 5);
    error(1, 0, v58);
    start();
  }
  sub_40A210(sub_402A00, -1LL);
  if ( v9 <= 0 )
  {
    v59 = 1;
  }
  else
  {
    v11 = &a2[v8];
    v59 = 1;
    v60 = &(&a2[v8 + 1])[8 * (unsigned int)(v9 - 1)];
    do
    {
      LODWORD(v14) = sub_406C60(0LL, 3LL, *v11);
      LODWORD(v17) = sub_408470(v14);
      v18 = *v11;
      v19 = 2LL;
      v20 = "-";
      v21 = v17;
      v22 = *v11;
      do
      {
        if ( !v19 )
          break;
        v15 = (unsigned __int8)*v22 < (unsigned __int8)*v20;
        v16 = *v22++ == *v20++;
        --v19;
      }
      while ( v16 );
      if ( (!v15 && !v16) == v15 )
      {
        v12 = sub_408A90(1);
        if ( v12 < 0 )
        {
          v31 = dcgettext(0LL, "%s: fcntl failed", 5);
          v32 = __errno_location();
          error(0, *v32, v31, v21);
          v13 = 0;
        }
        else if ( BYTE1(v12) & 4 )
        {
          v27 = dcgettext(0LL, "%s: cannot shred append-only file descriptor", 5);
          error(0, 0, v27, v21);
          v13 = 0;
        }
        else
        {
          v13 = sub_4033D0(1);
        }
        v59 &= v13;
      }
      else
      {
        v23 = sub_4044D0((unsigned __int64)*v11);
        if ( v23 >= 0
          || (v24 = __errno_location(), *v24 == 13)
          && v67
          && !chmod(v18, 0x80u)
          && (v23 = sub_4044D0((char)v18), v23 >= 0) )
        {
          LODWORD(v24) = sub_4033D0(v23);
          if ( close(v23) )
          {
            LOBYTE(v24) = 0;
            v29 = dcgettext(0LL, "%s: failed to close", 5);
            v30 = __errno_location();
            error(0, *v30, v29, v21);
          }
          else if ( (_BYTE)v24 && (_DWORD)v68 )
          {
            LODWORD(v33) = sub_408470(v18);
            v34 = v33;
            ptr = v33;
            LODWORD(v35) = sub_404440(v33, v21);
            v36 = v35;
            LODWORD(v37) = sub_404360(v34);
            v66 = v37;
            LODWORD(v38) = sub_406C60(0LL, 3LL, v37);
            LODWORD(v39) = sub_408470(v38);
            v62 = v39;
            fd = -1;
            if ( (_DWORD)v68 == 3 )
              fd = sub_4044D0((char)v66);
            if ( BYTE4(v68) )
            {
              v45 = dcgettext(0LL, "%s: removing", 5);
              error(0, 0, v45, v21);
            }
            if ( (_DWORD)v68 != 1 )
            {
              LODWORD(v40) = sub_4044A0(v36);
              v63 = (char)v24;
              v41 = v40 - 1;
              v65 = v21;
              while ( v41 != -1 )
              {
                memset(v36, 48, v41 + 1);
                v36[v41 + 1] = 0;
                while ( (unsigned int)sub_407A00(-100, v18, -100, ptr) )
                {
                  if ( *__errno_location() != 17 )
                    goto LABEL_90;
                  for ( i = &v36[v41]; ; --i )
                  {
                    v43 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_.", *i);
                    if ( !v43 )
                      __assert_fail("p", "src/shred.c", 0x40Au, "incname");
                    v44 = v43[1];
                    if ( v44 )
                      break;
                    *i = 48;
                    if ( v36 == i )
                      goto LABEL_90;
                  }
                  *i = v44;
                }
                if ( fd >= 0 && (unsigned int)sub_402A60(fd) )
                  LOBYTE(v24) = 0;
                if ( BYTE4(v68) )
                {
                  v48 = v65;
                  if ( !v63 )
                    v48 = v18;
                  v49 = v48;
                  v50 = dcgettext(0LL, "%s: renamed to %s", 5);
                  error(0, 0, v50, v49, ptr);
                  v63 = 0;
                }
                memcpy(&v18[v36 - ptr], v36, v41 + 2);
LABEL_90:
                --v41;
              }
              v21 = v65;
            }
            if ( unlink(v18) )
            {
              LOBYTE(v24) = 0;
              v46 = dcgettext(0LL, "%s: failed to remove", 5);
              v47 = __errno_location();
              error(0, *v47, v46, v21);
            }
            else if ( BYTE4(v68) )
            {
              v53 = dcgettext(0LL, "%s: removed", 5);
              error(0, 0, v53, v21);
            }
            if ( fd >= 0 )
            {
              if ( (unsigned int)sub_402A60(fd) )
                LOBYTE(v24) = 0;
              if ( close(fd) )
              {
                LOBYTE(v24) = 0;
                v51 = dcgettext(0LL, "%s: failed to close", 5);
                v52 = __errno_location();
                error(0, *v52, v51, v62);
              }
            }
            free(ptr);
            free(v66);
            free(v62);
          }
        }
        else
        {
          v25 = dcgettext(0LL, "%s: failed to open for writing", 5);
          v26 = *v24;
          LOBYTE(v24) = 0;
          error(0, v26, v25, v21);
        }
        v59 &= (unsigned __int8)v24;
      }
      ++v11;
      free(v21);
    }
    while ( v60 != v11 );
  }
  return (unsigned __int8)(v59 ^ 1);
}

int sub_40294B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_40296A()
{
  return 0;
}

int sub_4029A1()
{
  int result; // eax@4

  if ( !byte_60F388 )
  {
    while ( qword_60F390 < (unsigned __int64)(((&unk_60EE48 - (_UNKNOWN *)&qword_60EE40) >> 3) - 1) )
      (*(&qword_60EE40 + ++qword_60F390))();
    result = sub_40294B();
    byte_60F388 = 1;
  }
  return result;
}

int sub_4029F8()
{
  return sub_40296A();
}

void sub_402A00()
{
  JUMPOUT(sub_406F90);
}

__int64 __fastcall sub_402A10(char a1, char a2)
{
  __int64 result; // rax@1
  int v3; // ecx@2
  int v4; // edx@2

  result = sub_408A90(a1);
  if ( (signed int)result > 0 )
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
  int *v2; // rax@2
  int v3; // ebp@2
  int *v4; // r12@2
  char *v5; // rax@4
  int v7; // ebx@6
  char *v8; // rax@11

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

__int64 __usercall sub_402B20@<rax>(int fd@<edi>, __int64 a2@<rdx>, signed __int64 *a3@<rcx>, __int64 a4@<rsi>, int a5@<r8d>, __int64 a6@<r9>, __int64 a7, __int64 a8)
{
  int v8; // er12@1
  int v9; // ebx@1
  signed __int64 v10; // r13@1
  unsigned __int64 v11; // r14@1
  int v12; // eax@2
  unsigned __int64 v13; // r15@4
  signed __int64 v14; // rbx@5
  void *v15; // rax@5
  unsigned __int64 v16; // rdx@5
  unsigned __int64 v17; // r14@5
  unsigned __int64 v18; // rbx@5
  __off_t v19; // rax@8
  int *v20; // rax@9
  int *v21; // rbx@9
  char *v22; // rax@10
  __int64 v23; // rcx@10
  int v24; // esi@10
  const char *v25; // rdx@10
  void *v26; // rdi@12
  int v28; // ecx@16
  __int16 v29; // ax@17
  unsigned __int64 v30; // rbp@19
  unsigned __int64 v31; // r15@20
  void *v32; // rdi@21
  size_t v33; // rdx@21
  __int64 v34; // ST10_8@24
  unsigned __int64 v35; // rbp@27
  signed __int64 v36; // r15@31
  unsigned __int64 v37; // r13@31
  ssize_t v38; // rax@34
  int v39; // er14@36
  __int64 v40; // rax@38
  __int64 v41; // ST28_8@38
  char *v42; // rax@38
  signed __int64 v43; // r9@39
  unsigned __int64 v44; // rax@42
  unsigned __int64 v45; // r15@43
  const char *v46; // rax@46
  const char *v47; // rbp@46
  unsigned __int64 v48; // r9@48
  const char *v49; // rax@51
  const char *v50; // r14@53
  char *v51; // rax@53
  int v52; // er14@59
  char *v53; // rax@65
  char *v54; // rax@69
  unsigned __int64 v55; // rax@71
  __int64 v56; // rax@77
  __int64 v57; // rbx@77
  char *v58; // rax@77
  const char *v59; // rax@83
  char *v60; // rax@84
  char *v61; // rax@89
  __int64 v62; // [sp+0h] [bp-858h]@0
  char v63; // [sp+8h] [bp-850h]@25
  __int64 v64; // [sp+10h] [bp-848h]@1
  bool v65; // [sp+1Bh] [bp-83Dh]@5
  int v66; // [sp+1Ch] [bp-83Ch]@1
  unsigned __int64 v67; // [sp+20h] [bp-838h]@4
  int *v68; // [sp+28h] [bp-830h]@36
  unsigned int v69; // [sp+28h] [bp-830h]@51
  void *ptr; // [sp+30h] [bp-828h]@5
  __int64 v71; // [sp+38h] [bp-820h]@1
  unsigned __int64 *v72; // [sp+40h] [bp-818h]@1
  char *s1; // [sp+48h] [bp-810h]@25
  time_t v74; // [sp+50h] [bp-808h]@25
  signed __int64 v75; // [sp+58h] [bp-800h]@0
  int v76; // [sp+69h] [bp-7EFh]@24
  __int16 v77; // [sp+6Dh] [bp-7EBh]@68
  char v78; // [sp+6Fh] [bp-7E9h]@68
  char v79; // [sp+70h] [bp-7E8h]@54
  char v80; // [sp+300h] [bp-558h]@46
  __int16 v81; // [sp+590h] [bp-2C8h]@38
  int v82; // [sp+594h] [bp-2C4h]@66

  v8 = fd;
  v9 = a5;
  v10 = *a3;
  v64 = a2;
  v72 = (unsigned __int64 *)a3;
  v66 = a5;
  v71 = a6;
  v11 = getpagesize();
  if ( v9 <= 0
    || (v12 = v9 & 0xFFF | ((v9 & 0xFFF) << 12), BYTE1(v12) == (unsigned __int8)((unsigned int)v12 >> 4))
    && (unsigned __int8)((unsigned int)v12 >> 4) == (_BYTE)v9 )
  {
    v67 = 0x10000LL;
    v13 = 65538LL;
  }
  else
  {
    v67 = 61440LL;
    v13 = 61440LL;
  }
  v14 = v11 - 1;
  LODWORD(v15) = sub_408240(v13 + v11 - 1);
  ptr = v15;
  v16 = ((unsigned __int64)v15 + v11 - 1) % v11;
  v17 = v10;
  v18 = (unsigned __int64)v15 + v14 - v16;
  v65 = v10 < v67 && v10 > 0;
  if ( !v65 )
    sub_402A10(fd, 1);
  if ( (*(_DWORD *)(a4 + 24) & 0xF000) != 0x2000 || (v81 = 6, v82 = 1, ioctl(fd, 0x40086D01uLL, &v81)) )
  {
    v19 = lseek(fd, 0LL, 0);
    if ( v19 <= 0 )
    {
      if ( !v19 )
      {
        v28 = v66;
        if ( v66 < 0 )
          goto LABEL_68;
        goto LABEL_17;
      }
      v21 = __errno_location();
    }
    else
    {
      v20 = __errno_location();
      *v20 = 22;
      v21 = v20;
    }
    v22 = dcgettext(0LL, "%s: cannot rewind", 5);
    v23 = v64;
    v24 = *v21;
    v25 = v22;
LABEL_11:
    error(0, v24, v25, v23, v62);
LABEL_12:
    v26 = ptr;
    goto LABEL_13;
  }
  v28 = v66;
  if ( v66 < 0 )
  {
LABEL_68:
    v76 = 1684955506;
    v77 = 28015;
    v78 = 0;
    if ( a8 )
      goto LABEL_69;
    goto LABEL_25;
  }
LABEL_17:
  v29 = __ROL2__(v28 & 0xFFF | ((_WORD)v28 << 12) & 0xF000, 8);
  *(_WORD *)(v18 + 1) = v29;
  *(_BYTE *)v18 = (v28 & 0xFFF | (v28 << 12) & 0xFFF000u) >> 4;
  if ( v10 >= v13 || v10 < 0 )
  {
    v17 = v13;
    v30 = v13 >> 1;
  }
  else
  {
    v30 = (unsigned __int64)v10 >> 1;
    if ( (unsigned __int64)v10 >> 1 <= 2 )
    {
      v31 = 3LL;
      goto LABEL_22;
    }
  }
  v31 = 3LL;
  do
  {
    v32 = (void *)(v18 + v31);
    v33 = v31;
    v31 *= 2LL;
    memcpy(v32, (const void *)v18, v33);
  }
  while ( v31 <= v30 );
LABEL_22:
  if ( v31 < v17 )
  {
    memcpy((void *)(v18 + v31), (const void *)v18, v17 - v31);
    if ( !(v66 & 0x1000) )
      goto LABEL_24;
    goto LABEL_71;
  }
  if ( v66 & 0x1000 && v17 )
  {
LABEL_71:
    v55 = 0LL;
    do
    {
      *(_BYTE *)(v18 + v55) += -128;
      v55 += 512LL;
    }
    while ( v55 < v17 );
  }
LABEL_24:
  v34 = *(_BYTE *)(v18 + 2);
  __sprintf_chk(&v76, 1LL, 7LL, "%02x%02x%02x", *(_BYTE *)v18, *(_BYTE *)(v18 + 1));
  if ( a8 )
  {
LABEL_69:
    v54 = dcgettext(0LL, "%s: pass %lu/%lu (%s)...", 5);
    error(0, 0, v54, v64, a7, a8, &v76);
    v75 = time(0LL) + 5;
  }
LABEL_25:
  s1 = "";
  v63 = 0;
  v74 = 0LL;
  v62 = 0LL;
LABEL_26:
  while ( 1 )
  {
    if ( v10 >= 0 )
    {
      v35 = v10 - v62;
      if ( v10 - v62 < v67 )
        break;
    }
    v35 = v67;
    if ( v66 < 0 )
LABEL_64:
      sub_407360(v71, v18, v35);
LABEL_31:
    v36 = v10;
    v37 = 0LL;
    do
    {
      while ( 1 )
      {
        v38 = write(v8, (const void *)(v18 + v37), v35 - v37);
        if ( v38 <= 0 )
          break;
        v37 += v38;
LABEL_33:
        if ( v35 <= v37 )
          goto LABEL_42;
      }
      if ( v36 < 0 )
      {
        if ( !v38 || (v52 = *__errno_location(), v52 == 28) )
        {
          if ( 0x7FFFFFFFFFFFFFFFLL - v62 < v37 )
          {
LABEL_84:
            v60 = dcgettext(0LL, "%s: file too large", 5);
            v23 = v64;
            v24 = 0;
            v25 = v60;
            goto LABEL_11;
          }
          v45 = v62 + v37;
          v10 = v45;
          v62 = v45;
          *v72 = v45;
          if ( !a8 )
            goto LABEL_26;
          goto LABEL_81;
        }
        if ( v65 || v52 != 22 )
        {
          LODWORD(v56) = sub_405170(v37 + v62, &v81);
          v57 = v56;
          v58 = dcgettext(0LL, "%s: error writing at offset %s", 5);
          error(0, v52, v58, v64, v57, v62);
          goto LABEL_12;
        }
LABEL_62:
        sub_402A10(v8, 0);
        v65 = 1;
        goto LABEL_33;
      }
      v68 = __errno_location();
      v39 = *v68;
      if ( !v65 && v39 == 22 )
        goto LABEL_62;
      LODWORD(v40) = sub_405170(v62 + v37, &v81);
      v41 = v40;
      v42 = dcgettext(0LL, "%s: error writing at offset %s", 5);
      error(0, v39, v42, v64, v41, v62);
      if ( v39 != 5 )
        goto LABEL_12;
      v43 = v37 | 0x1FF;
      if ( (v37 | 0x1FF) >= v35 )
        goto LABEL_12;
      v37 = v43 + 1;
      if ( lseek(v8, v62 + v43 + 1, 0) == -1 )
      {
        v53 = dcgettext(0LL, "%s: lseek failed", 5);
        error(0, *v68, v53, v64);
        goto LABEL_12;
      }
      v63 = 1;
    }
    while ( v35 > v37 );
LABEL_42:
    v44 = v37;
    v10 = v36;
    if ( 0x7FFFFFFFFFFFFFFFLL - v62 < v44 )
      goto LABEL_84;
    v45 = v62 + v44;
    v62 += v44;
    if ( !a8 )
      continue;
    if ( v10 != v45 )
    {
      v74 = time(0LL);
      if ( v75 <= v74 )
      {
        LODWORD(v46) = sub_4045E0(v45, &v80, 434LL, 1LL, 1LL);
        v47 = v46;
        if ( strcmp(s1, v46) )
          goto LABEL_47;
      }
      continue;
    }
LABEL_81:
    if ( !*s1 )
    {
      v74 = time(0LL);
      if ( v75 > v74 )
        continue;
    }
    LODWORD(v59) = sub_4045E0(v45, &v80, 434LL, 1LL, 1LL);
    v47 = v59;
LABEL_47:
    if ( v10 < 0 )
    {
      v61 = dcgettext(0LL, "%s: pass %lu/%lu (%s)...%s", 5);
      error(0, 0, v61, v64, a7, a8, &v76);
    }
    else
    {
      LODWORD(v48) = 100;
      if ( v10 )
      {
        if ( v45 > 0x28F5C28F5C28F5CLL )
          v48 = v45
              / (((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v10) >> 64) + v10) >> 6) - (v10 >> 63));
        else
          v48 = 100 * v45 / v10;
      }
      v69 = v48;
      LODWORD(v49) = sub_4045E0(v10, &v81, 432LL, 1LL, 1LL);
      if ( v10 == v45 )
        v47 = v49;
      v50 = v49;
      v51 = dcgettext(0LL, "%s: pass %lu/%lu (%s)...%s/%s %d%%", 5);
      error(0, 0, v51, v64, a7, a8, &v76, v47, v50, v69);
    }
    __strcpy_chk(&v79, v47, 652LL);
    v75 = v74 + 5;
    if ( (unsigned int)sub_402A60(v8, v64) )
    {
      if ( *__errno_location() != 5 )
        goto LABEL_12;
      v63 = 1;
      s1 = &v79;
    }
    else
    {
      s1 = &v79;
    }
  }
  if ( v10 != v62 && v10 >= v62 )
  {
    if ( v66 < 0 )
      goto LABEL_64;
    goto LABEL_31;
  }
  if ( (unsigned int)sub_402A60(v8, v64) )
  {
    v26 = ptr;
    if ( *__errno_location() == 5 )
    {
      free(ptr);
      return 1LL;
    }
LABEL_13:
    free(v26);
    return 0xFFFFFFFFLL;
  }
  free(ptr);
  return (unsigned __int8)v63;
}

__int64 __fastcall sub_4033D0(int fd, __int64 a2, void *a3, __int64 a4)
{
  int v4; // ebp@1
  __int64 v5; // rbx@1
  const void *v6; // rsi@3
  int v7; // eax@4
  signed __int64 v8; // rdi@7
  char *v9; // rax@9
  char *v10; // r13@9
  char *v11; // r9@12
  signed int v12; // eax@12
  unsigned __int64 v13; // rbx@12
  signed int *v14; // r12@12
  __int64 v15; // r14@12
  unsigned __int64 v16; // rax@14
  signed __int64 v17; // r15@19
  char *v18; // rax@21
  char *v20; // rbx@23
  int *v21; // rax@23
  __off_t v22; // rax@24
  __off_t v23; // rcx@33
  __off_t v24; // rdx@35
  __int128 v25; // tt@35
  signed __int64 v26; // rcx@38
  __int64 v27; // rax@42
  __int64 v28; // r14@42
  unsigned __int64 v29; // rdx@43
  __int64 v30; // r12@43
  __int64 v31; // r13@44
  unsigned __int64 v32; // rbx@44
  int v33; // er8@45
  int v34; // eax@47
  __int64 v35; // rax@55
  signed int *v36; // r14@58
  unsigned __int64 v37; // r12@58
  __int64 v38; // rbx@58
  char *v39; // rbx@60
  signed __int64 v40; // rbp@61
  unsigned __int64 v41; // rax@64
  __int64 v42; // r14@67
  signed __int64 v43; // r8@67
  unsigned __int64 v44; // rbx@67
  unsigned __int64 v45; // r15@67
  unsigned __int64 v46; // rbp@67
  unsigned __int64 v47; // r12@67
  signed __int64 v48; // ST40_8@70
  int v49; // ST20_4@70
  __int64 v50; // rax@70
  char *v51; // rax@70
  char *v52; // rax@75
  unsigned __int64 v53; // r12@77
  __int64 v54; // rax@78
  __off_t v55; // rax@79
  __int64 v56; // rax@81
  __int64 v57; // rax@83
  char *v58; // rbx@90
  int *v59; // rax@90
  void *ptr; // [sp+8h] [bp-120h]@1
  char *ptra; // [sp+8h] [bp-120h]@44
  char v62; // [sp+10h] [bp-118h]@32
  unsigned __int64 v63; // [sp+10h] [bp-118h]@58
  __int64 v64; // [sp+18h] [bp-110h]@1
  __off_t v65; // [sp+20h] [bp-108h]@9
  __int64 v66; // [sp+28h] [bp-100h]@1
  unsigned __int64 v67; // [sp+30h] [bp-F8h]@10
  __off_t v68; // [sp+38h] [bp-F0h]@11
  bool v69; // [sp+43h] [bp-E5h]@5
  int v70; // [sp+44h] [bp-E4h]@12
  int v71; // [sp+44h] [bp-E4h]@67
  __int64 v72; // [sp+48h] [bp-E0h]@12
  __int64 v73; // [sp+48h] [bp-E0h]@67
  __int64 v74; // [sp+58h] [bp-D0h]@43
  struct stat stat_buf; // [sp+60h] [bp-C8h]@3

  v4 = fd;
  v5 = a4;
  v64 = a2;
  ptr = a3;
  v66 = 0LL;
  if ( *(_BYTE *)(a4 + 28) )
    v66 = *(_QWORD *)(a4 + 8) + *(_BYTE *)(a4 + 30);
  v6 = (const void *)(unsigned int)fd;
  if ( __fxstat(1, fd, &stat_buf) )
  {
    v20 = dcgettext(0LL, "%s: fstat failed", 5);
    v21 = __errno_location();
    error(0, *v21, v20, v64);
    return 0;
  }
  v7 = stat_buf.st_mode & 0xF000;
  if ( v7 == 0x2000 )
  {
    if ( isatty(fd) )
      goto LABEL_21;
    v7 = stat_buf.st_mode & 0xF000;
  }
  v69 = v7 == 4096 || v7 == 49152;
  if ( v69 )
  {
LABEL_21:
    v18 = dcgettext(0LL, "%s: invalid file type", 5);
    error(0, 0, v18, v64);
    return 0;
  }
  if ( v7 == 0x8000 && stat_buf.st_size < 0 )
  {
    v52 = dcgettext(0LL, "%s: file has negative size", 5);
    error(0, 0, v52, v64);
    return v69;
  }
  v8 = 4LL * *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v5 + 8) & 0x2000000000000000LL || *(_QWORD *)(v5 + 8) >> 62 != 0LL )
    sub_408490(v8, v6);
  LODWORD(v9) = sub_408240(v8);
  v10 = v9;
  v65 = *(_QWORD *)(v5 + 16);
  if ( v65 == -1 )
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x8000 )
    {
      v6 = 0LL;
      v55 = lseek(v4, 0LL, 2);
      if ( v55 <= 0 )
      {
        v68 = 0LL;
        v67 = *(_QWORD *)(v5 + 8);
        if ( v67 )
          goto LABEL_12;
      }
      else
      {
        v65 = v55;
        v68 = 0LL;
        v67 = *(_QWORD *)(v5 + 8);
        if ( v67 )
          goto LABEL_12;
      }
      LODWORD(v56) = sub_406E60(ptr, 0LL);
      v29 = 0LL;
      v62 = 1;
      v28 = v56;
      goto LABEL_55;
    }
    v6 = (const void *)stat_buf.st_size;
    v65 = stat_buf.st_size;
    v62 = *(_BYTE *)(v5 + 29);
    v67 = *(_QWORD *)(v5 + 8);
    if ( v62 )
    {
      v68 = 0LL;
      if ( !v67 )
      {
        LODWORD(v57) = sub_406E60(ptr, stat_buf.st_size);
        v28 = v57;
        goto LABEL_53;
      }
      goto LABEL_12;
    }
    v23 = stat_buf.st_blksize;
    if ( (unsigned __int64)(stat_buf.st_blksize - 1) > 0x1FFFFFFFFFFFFFFFLL )
      v23 = 512LL;
    *(_QWORD *)&v25 = stat_buf.st_size;
    *((_QWORD *)&v25 + 1) = (unsigned __int128)stat_buf.st_size >> 64;
    v24 = v25 % v23;
    if ( v23 <= stat_buf.st_size || (v68 = stat_buf.st_size) == 0 )
      v68 = 0LL;
    if ( v24 )
    {
      v26 = v23 - v24;
      if ( 0x7FFFFFFFFFFFFFFFLL - stat_buf.st_size <= v26 )
        v26 = 0x7FFFFFFFFFFFFFFFLL - stat_buf.st_size;
      v65 = v26 + stat_buf.st_size;
    }
    goto LABEL_41;
  }
  v67 = *(_QWORD *)(v5 + 8);
  if ( (stat_buf.st_mode & 0xF000) == 0x8000 )
  {
    v22 = stat_buf.st_blksize;
    v68 = stat_buf.st_size;
    if ( (unsigned __int64)(stat_buf.st_blksize - 1) > 0x1FFFFFFFFFFFFFFFLL )
      v22 = 512LL;
    if ( v22 > v65 )
      v22 = *(_QWORD *)(v5 + 16);
    if ( stat_buf.st_size >= v22 )
    {
      if ( v67 )
      {
        v68 = 0LL;
        goto LABEL_12;
      }
LABEL_78:
      LODWORD(v54) = sub_406E60(ptr, v6);
      v62 = 1;
      v28 = v54;
      goto LABEL_53;
    }
LABEL_41:
    if ( !v67 )
      goto LABEL_42;
    goto LABEL_12;
  }
  v68 = 0LL;
  if ( !v67 )
    goto LABEL_78;
LABEL_12:
  v11 = v10;
  v72 = v5;
  v12 = -2;
  v13 = v67;
  v70 = v4;
  v14 = (signed int *)&unk_40B340;
  v15 = 0LL;
  while ( !v12 )
  {
    v12 = -2;
    v14 = (signed int *)&unk_40B344;
LABEL_14:
    v16 = -v12;
    if ( v16 >= v13 )
    {
      v53 = v13;
      v38 = v72;
      v63 = v53 + v15;
      goto LABEL_67;
    }
    v15 += v16;
    v13 -= v16;
LABEL_16:
    v12 = *v14;
  }
  ++v14;
  if ( v12 < 0 )
    goto LABEL_14;
  v17 = v12;
  if ( v12 <= v13 )
  {
    v6 = v14;
    v13 -= v12;
    v14 += v12;
    v11 = (char *)memcpy(v11, v6, 4LL * v12) + 4 * v12;
    goto LABEL_16;
  }
  v63 = v15;
  v36 = v14;
  v37 = v13;
  v38 = v72;
  if ( v37 <= 1 || v12 > 3 * v37 )
  {
    v63 += v37;
    goto LABEL_67;
  }
  v39 = v11;
  while ( 2 )
  {
    ++v36;
    if ( v37 != v17 )
    {
      v40 = v17 - 1;
      v6 = (const void *)(v17 - 1);
      LODWORD(v41) = sub_406E70(ptr, v17 - 1);
      if ( v37 <= v41 )
      {
LABEL_62:
        v17 = v40;
        continue;
      }
    }
    break;
  }
  *(_DWORD *)v39 = *(v36 - 1);
  if ( --v37 )
  {
    v39 += 4;
    v40 = v17 - 1;
    goto LABEL_62;
  }
  v4 = v70;
  v38 = v72;
LABEL_67:
  v71 = v4;
  v42 = 0LL;
  v73 = v38;
  v43 = v67 - 1;
  v44 = v67;
  v45 = v63 - 1;
  v46 = v63 - 1;
  v47 = v67 - v63;
  do
  {
    while ( v45 <= v46 )
    {
      *(_DWORD *)&v10[4 * v47++] = *(_DWORD *)&v10[4 * v42];
      *(_DWORD *)&v10[4 * v42++] = -1;
      v45 = v43 + v45 - v46;
      if ( v42 == v44 )
        goto LABEL_71;
    }
    v48 = v43;
    v45 -= v46;
    v49 = *(_DWORD *)&v10[4 * v42];
    LODWORD(v50) = sub_406E70(ptr, v47 - 1 - v42);
    v43 = v48;
    v51 = &v10[4 * (v42 + v50)];
    v6 = (const void *)*(_DWORD *)v51;
    *(_DWORD *)&v10[4 * v42++] = (_DWORD)v6;
    *(_DWORD *)v51 = v49;
  }
  while ( v42 != v44 );
LABEL_71:
  v4 = v71;
  v5 = v73;
LABEL_42:
  LODWORD(v27) = sub_406E60(ptr, v6);
  v28 = v27;
  if ( v68 )
  {
    v74 = v68;
    v29 = *(_QWORD *)(v5 + 8);
    v30 = 0LL;
    v62 = 1;
LABEL_44:
    ptra = v10;
    v31 = v5;
    v32 = 0LL;
    while ( 1 )
    {
      if ( v29 + *(_BYTE *)(v31 + 30) <= v32 )
      {
        v5 = v31;
        v10 = ptra;
        goto LABEL_53;
      }
      v33 = 0;
      if ( v32 < v29 )
        v33 = *(_DWORD *)&ptra[4 * v32];
      v34 = sub_402B20(v4, v64, &v74, (__int64)&stat_buf, v33, v28, ++v32, v30);
      if ( v34 )
      {
        if ( v34 < 0 )
        {
          v10 = ptra;
          goto LABEL_57;
        }
        v62 = 0;
      }
      v29 = *(_QWORD *)(v31 + 8);
    }
  }
  v62 = 1;
LABEL_53:
  if ( v65 )
  {
    v29 = *(_QWORD *)(v5 + 8);
LABEL_55:
    v35 = v65;
    v30 = v66;
    v65 = 0LL;
    v74 = v35;
    goto LABEL_44;
  }
  if ( *(_DWORD *)(v5 + 24) && ftruncate(v4, 0LL) && (stat_buf.st_mode & 0xF000) == 0x8000 )
  {
    v58 = dcgettext(0LL, "%s: error truncating", 5);
    v59 = __errno_location();
    error(0, *v59, v58, v64);
  }
  else
  {
    v69 = v62;
  }
LABEL_57:
  free(v10);
  return v69;
}

void __fastcall __noreturn sub_403AC0(int status)
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
  char *v11; // rax@4
  FILE *v12; // rbp@4
  char *v13; // rax@4
  FILE *v14; // rbp@4
  char *v15; // rax@4
  FILE *v16; // rbp@4
  char *v17; // rax@4
  FILE *v18; // rbp@4
  char *v19; // rax@4
  FILE *v20; // rbp@4
  char *v21; // rax@4
  FILE *v22; // rbp@4
  char *v23; // rax@4
  FILE *v24; // rbp@4
  char *v25; // rax@4
  FILE *v26; // rbp@4
  char *v27; // rax@4
  FILE *v28; // rbp@4
  char *v29; // rax@4
  __int64 *v30; // rax@4
  _BYTE *v31; // rdi@5
  bool v32; // cf@5
  bool v33; // zf@5
  const char *v34; // rsi@6
  signed __int64 v35; // rcx@6
  const char *v36; // rbp@10
  char *v37; // rax@11
  char *v38; // rax@11
  char *v39; // rax@13
  char *v40; // rax@14
  char *v41; // rax@15
  char *v42; // rax@15
  char *v43; // rax@17
  char *v44; // rax@19
  const char *v45; // [sp+0h] [bp-88h]@4
  const char *v46; // [sp+8h] [bp-80h]@4
  const char *v47; // [sp+10h] [bp-78h]@4
  const char *v48; // [sp+18h] [bp-70h]@4
  const char *v49; // [sp+20h] [bp-68h]@4
  const char *v50; // [sp+28h] [bp-60h]@4
  const char *v51; // [sp+30h] [bp-58h]@4
  const char *v52; // [sp+38h] [bp-50h]@4
  const char *v53; // [sp+40h] [bp-48h]@4
  const char *v54; // [sp+48h] [bp-40h]@4
  const char *v55; // [sp+50h] [bp-38h]@4
  const char *v56; // [sp+58h] [bp-30h]@4
  __int64 v57; // [sp+60h] [bp-28h]@4
  __int64 v58; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_60F3B0;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... FILE...\n", 5);
  __printf_chk(1LL, v4, v2);
  v5 = stdout;
  v6 = dcgettext(
         0LL,
         "Overwrite the specified FILE(s) repeatedly, in order to make it harder\n"
         "for even very expensive hardware probing to recover the data.\n",
         5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nIf FILE is -, shred standard output.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v10, v9);
  v11 = dcgettext(
          0LL,
          "  -f, --force    change permissions to allow writing if necessary\n"
          "  -n, --iterations=N  overwrite N times instead of the default (%d)\n"
          "      --random-source=FILE  get random bytes from FILE\n"
          "  -s, --size=N   shred this many bytes (suffixes like K, M, G accepted)\n",
          5);
  __printf_chk(1LL, v11, 3LL);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  -u             deallocate and remove file after overwriting\n"
          "      --remove[=HOW]  like -u but give control on HOW to delete;  See below\n"
          "  -v, --verbose  show progress\n"
          "  -x, --exact    do not round file sizes up to the next full block;\n"
          "                   this is the default for non-regular files\n"
          "  -z, --zero     add a final overwrite with zeros to hide shredding\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(
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
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
          0LL,
          "CAUTION: Note that shred relies on a very important assumption:\n"
          "that the file system overwrites data in place.  This is the traditional\n"
          "way to do things, but many modern file system designs do not satisfy this\n"
          "assumption.  The following are examples of file systems on which shred is\n"
          "not effective, or is not guaranteed to be effective in all file system modes:\n"
          "\n",
          5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(
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
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(
          0LL,
          "* file systems that cache in temporary locations, such as NFS\n"
          "version 3 clients\n"
          "\n"
          "* compressed file systems\n"
          "\n",
          5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
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
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(
          0LL,
          "In addition, file system backups and remote mirrors may contain copies\n"
          "of the file that cannot be removed, and that will allow a shredded file\n"
          "to be recovered later.\n",
          5);
  fputs_unlocked(v29, v28);
  v45 = "[";
  v30 = (__int64 *)&v45;
  v46 = "test invocation";
  v47 = "coreutils";
  v48 = "Multi-call invocation";
  v49 = "sha224sum";
  v50 = "sha2 utilities";
  v51 = "sha256sum";
  v52 = "sha2 utilities";
  v53 = "sha384sum";
  v54 = "sha2 utilities";
  v55 = "sha512sum";
  v56 = "sha2 utilities";
  v57 = 0LL;
  v58 = 0LL;
  do
  {
    v30 += 2;
    v31 = (_BYTE *)*v30;
    v32 = 0;
    v33 = *v30 == 0;
    if ( !*v30 )
      break;
    v34 = "shred";
    v35 = 6LL;
    do
    {
      if ( !v35 )
        break;
      v32 = (const unsigned __int8)*v34 < *v31;
      v33 = *v34++ == *v31++;
      --v35;
    }
    while ( v33 );
  }
  while ( (!v32 && !v33) != v32 );
  v36 = (const char *)v30[1];
  if ( v36 )
  {
    v37 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v37, &unk_40A3D4);
    v38 = setlocale(5, 0LL);
    if ( !v38 || !strncmp(v38, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v41 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v41, &unk_40A3D4);
    v42 = setlocale(5, 0LL);
    if ( !v42 || !strncmp(v42, "en_", 3uLL) )
    {
      v36 = "shred";
      v43 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v43, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v36 = "shred";
  }
  v44 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v44, "shred");
LABEL_13:
  v39 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v39, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v40 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v40, v36);
LABEL_3:
  exit(v1);
}

void __noreturn sub_403F10()
{
  sub_403AC0(1);
}

signed __int64 __fastcall sub_403F20(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_404040(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx@2
  __int64 v4; // rax@3
  __int64 v5; // rbp@3
  __int64 v6; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  LODWORD(v4) = sub_406DC0(1LL, a1);
  v5 = v4;
  LODWORD(v6) = sub_406AB0(0LL, 8LL, a2);
  error(0, 0, v3, v6, v5);
}

int __fastcall sub_4040C0(__int64 *a1, char *a2, size_t a3)
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
      LODWORD(v11) = sub_406DE0(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    LODWORD(v12) = sub_406DE0(i);
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

__int64 __fastcall sub_4041E0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(__int64 *, char *))
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
  result = sub_403F20(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_404040(a1, (__int64)a2, result);
    sub_4040C0(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

__int64 sub_4042C0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_406C30(qword_60F3A8, "write error");
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

__int64 __fastcall sub_404360(void *a1, __int64 a2)
{
  __int64 result; // rax@1

  result = sub_4043E0(a1);
  if ( !result )
    sub_408490(a1, a2);
  return result;
}

signed __int64 __fastcall sub_404380(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp@1
  __int64 v3; // rax@1
  signed __int64 v4; // rdx@2
  signed __int64 result; // rax@7

  v2 = *a1 == 47;
  LODWORD(v3) = sub_404440(a1, a2);
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

_BYTE *__fastcall sub_4043E0(void *src, __int64 a2)
{
  signed __int64 v2; // rax@1
  size_t v3; // rbx@1
  _BYTE *v4; // rax@1
  _BYTE *v5; // rcx@1
  _BYTE *v6; // rax@2

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

size_t __fastcall sub_4044A0(const char *a1)
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

__int64 __fastcall sub_4044D0(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_407C50(v4);
}

long double __usercall sub_404520@<st0>(int a1@<edi>, __int128 a2)
{
  __int128 v2; // fst7@2
  unsigned __int64 v3; // rax@2
  long double v4; // fst6@3
  long double v5; // t0@4
  __int128 v6; // fst6@4
  long double result; // fst7@4

  if ( *(long double *)&a2 >= 9.223372e18 )
  {
    v2 = a2;
    v3 = (signed __int64)(*(long double *)&a2 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  else
  {
    v2 = a2;
    v3 = (signed __int64)*(long double *)&a2;
  }
  v4 = (long double)v3;
  if ( a1 )
  {
    result = v4;
  }
  else
  {
    v5 = v4;
    v6 = v2;
    result = v5;
    if ( *(long double *)&v6 != v5 )
    {
      result = (long double)(signed __int64)(v3 + 1);
      if ( ((v3 + 1) & 0x8000000000000000LL) != 0LL )
        result = result + 1.8446744e19;
    }
  }
  return result;
}

signed __int64 __fastcall sub_4045E0(unsigned __int64 a1, char *a2, __int16 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r14@1
  unsigned __int64 v6; // rbp@1
  struct lconv *v7; // rax@1
  const char *v8; // r15@1
  struct lconv *v9; // r12@1
  size_t v10; // r8@1
  char *v11; // rax@3
  const char *v12; // r12@3
  size_t v13; // rax@5
  __int64 v14; // r9@5
  size_t v15; // r8@5
  unsigned __int64 v16; // rax@8
  unsigned __int64 v17; // rsi@9
  long double v18; // fst7@10
  long double v19; // fst6@10
  long double v20; // fst7@11
  long double v21; // fst6@11
  long double v22; // fst7@12
  long double v23; // fst6@13
  signed int v24; // ebx@13
  long double v25; // fst5@13
  long double v26; // fst4@15
  long double v27; // fst7@15
  long double v28; // fst6@17
  long double v29; // fst7@17
  signed __int64 v30; // r14@19
  long double v31; // fst7@19
  unsigned __int64 v32; // r15@19
  long double v33; // fst6@21
  size_t v34; // rax@22
  __int64 v35; // r8@22
  __int64 v36; // r9@22
  long double v37; // fst7@23
  size_t v38; // r14@26
  signed __int64 v39; // r15@31
  char *v40; // r14@31
  int v41; // eax@35
  unsigned __int64 v43; // rcx@42
  unsigned __int64 v44; // rtt@43
  unsigned __int64 v45; // rdx@43
  int v46; // er9@43
  signed int v47; // edi@44
  int v48; // ecx@45
  char *v49; // rbp@56
  char *v50; // r15@56
  size_t v51; // rbx@56
  size_t v52; // rbp@56
  char v53; // dl@57
  size_t v54; // rax@58
  size_t v55; // rbp@62
  char *v56; // r14@63
  unsigned __int64 v57; // rax@66
  _BYTE *v58; // rdx@74
  unsigned __int64 v59; // r11@81
  int v60; // eax@81
  unsigned int v61; // ett@81
  int v62; // edx@81
  int v63; // edi@81
  size_t v64; // ST00_8@29
  __int64 v65; // ST08_8@29
  long double v66; // ST30_16@83
  bool v67; // dl@104
  char v68; // al@108
  unsigned __int64 v69; // r9@122
  unsigned int v70; // edx@123
  __int64 v71; // rdi@124
  unsigned __int64 v72; // rcx@134
  signed __int64 v73; // r15@134
  unsigned int v74; // edx@135
  __int64 v75; // rsi@136
  signed __int64 v76; // [sp+10h] [bp-A8h]@7
  char *s; // [sp+18h] [bp-A0h]@1
  __int16 v78; // [sp+20h] [bp-98h]@1
  int v79; // [sp+24h] [bp-94h]@1
  signed int v80; // [sp+24h] [bp-94h]@56
  unsigned __int64 v81; // [sp+28h] [bp-90h]@1
  size_t v82; // [sp+30h] [bp-88h]@5
  size_t v83; // [sp+30h] [bp-88h]@56
  int v84; // [sp+40h] [bp-78h]@1
  unsigned int v85; // [sp+44h] [bp-74h]@1
  char *v86; // [sp+48h] [bp-70h]@5
  char src[104]; // [sp+50h] [bp-68h]@56

  v5 = a4;
  v6 = a5;
  v84 = a3 & 0x20;
  s = a2;
  v78 = a3;
  v81 = a5;
  v79 = a3 & 3;
  v85 = (unsigned int)v84 < 1 ? 1000 : 1024;
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
  v86 = v11;
  v13 = strlen(v12);
  v15 = v82;
  if ( v13 >= 0x11 )
    v12 = "";
  v76 = (signed __int64)(a2 + 647);
  if ( v6 > v5 )
  {
    if ( !v5 || (v43 = v81 / v5, v81 % v5) )
    {
LABEL_10:
      v18 = (long double)v5;
      v19 = (long double)(signed __int64)v81;
      if ( (v81 & 0x8000000000000000LL) != 0LL )
      {
        v20 = v18 / (v19 + 1.8446744e19);
        v21 = (long double)(signed __int64)a1;
        if ( (a1 & 0x8000000000000000LL) == 0LL )
        {
LABEL_12:
          v22 = v20 * v21;
          if ( v78 & 0x10 )
          {
LABEL_13:
            v23 = (long double)(signed int)v85;
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
            v32 = v82 + 1 + (v84 == 0) + 1;
            if ( v79 == 1 )
            {
              __sprintf_chk(s, 1LL, -1LL, "%.1Lf", v82, v14);
              v34 = strlen(s);
              if ( v34 > v32 )
                goto LABEL_26;
            }
            else
            {
              if ( v31 < 1.8446744073709551615e19 )
              {
                v66 = v31;
                sub_404520(v79, *(__int128 *)&v31);
                v33 = v66;
              }
              else
              {
                v33 = v31;
              }
              __sprintf_chk(s, 1LL, -1LL, "%.1Lf", v15, v14);
              v34 = strlen(s);
              v31 = v33;
              if ( v34 > v32 )
              {
                v37 = v33 * 10.0;
LABEL_24:
                if ( v37 < 1.8446744073709551615e19 )
                  sub_404520(v79, *(__int128 *)&v37);
                goto LABEL_26;
              }
            }
            if ( !(v78 & 8) || s[v34 - 1] != 48 )
            {
              v38 = v34 - v30;
              goto LABEL_31;
            }
            v37 = v31 * 10.0;
            if ( v79 != 1 )
              goto LABEL_24;
LABEL_26:
            __sprintf_chk(s, 1LL, -1LL, "%.0Lf", v35, v36);
            v34 = strlen(s);
            v38 = v34;
LABEL_31:
            v39 = v76 - v34;
            v40 = (char *)(v76 - v34 + v38);
            memmove((void *)(v76 - v34), s, v34);
            goto LABEL_32;
          }
LABEL_27:
          if ( v79 != 1 && v22 < 1.8446744073709551615e19 )
          {
            sub_404520(v79, *(__int128 *)&v22);
            v15 = v64;
            v14 = v65;
          }
          __sprintf_chk(s, 1LL, -1LL, "%.0Lf", v15, v14);
          v24 = -1;
          v34 = strlen(s);
          v38 = v34;
          goto LABEL_31;
        }
      }
      else
      {
        v20 = v18 / v19;
        v21 = (long double)(signed __int64)a1;
        if ( (a1 & 0x8000000000000000LL) == 0LL )
          goto LABEL_12;
      }
      v22 = v20 * (v21 + 1.8446744e19);
      if ( v78 & 0x10 )
        goto LABEL_13;
      goto LABEL_27;
    }
    v17 = a1 / v43;
    v44 = 10 * (a1 % v43);
    v45 = 2 * (v44 % v43);
    v46 = v44 / v43;
    if ( v43 <= v45 )
      v47 = (v43 < v45) + 2;
    else
      v47 = v45 != 0;
    v48 = v78 & 0x10;
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
    v47 = 0;
    v46 = 0;
    v48 = v78 & 0x10;
    if ( !(v78 & 0x10) )
    {
LABEL_85:
      v24 = -1;
      goto LABEL_47;
    }
  }
  v24 = 0;
  if ( v85 <= v17 )
  {
    while ( 1 )
    {
      v59 = v17 / v85;
      v61 = v46 + 10 * (v17 % v85);
      v60 = (v46 + 10 * (v17 % v85)) / v85;
      v62 = (v47 >> 1) + 2 * (v61 % v85);
      v46 = v61 / v85;
      v17 /= v85;
      v63 = v62 + v47;
      v47 = v85 > v62 ? (unsigned __int8)(v63 != 0) : (unsigned int)(v85 < v63) + 2;
      ++v24;
      if ( v85 > v59 )
        break;
      if ( v24 == 8 )
        goto LABEL_47;
    }
    if ( v59 <= 9 )
    {
      if ( v79 == 1 )
        v67 = v47 + (v60 & 1) > 2;
      else
        v67 = v47 > 0 && v79 == 0;
      if ( v67 )
      {
        if ( ++v60 == 10 )
        {
          v17 = v59 + 1;
          if ( v59 == 9 )
          {
            v40 = (char *)v76;
LABEL_114:
            v47 = 0;
            goto LABEL_115;
          }
          v47 = 0;
          goto LABEL_107;
        }
      }
      else if ( !v60 )
      {
LABEL_107:
        v40 = (char *)v76;
        if ( v78 & 8 )
        {
LABEL_115:
          if ( v79 == 1 )
            goto LABEL_52;
          v46 = 0;
          goto LABEL_48;
        }
        v68 = 48;
        goto LABEL_109;
      }
      v68 = v60 + 48;
LABEL_109:
      s[646] = v68;
      v40 = &s[-v82 + 646];
      if ( (unsigned int)v82 >= 8 )
      {
        v69 = (unsigned __int64)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)v40 = *(_QWORD *)v8;
        *(_QWORD *)&v40[(unsigned int)v82 - 8] = *(_QWORD *)&v8[(unsigned int)v82 - 8];
        if ( (((_DWORD)v82 + (_DWORD)v40 - (_DWORD)v69) & 0xFFFFFFF8) >= 8 )
        {
          v70 = 0;
          do
          {
            v71 = v70;
            v70 += 8;
            *(_QWORD *)(v69 + v71) = *(_QWORD *)(v8 - &v40[-v69] + v71);
          }
          while ( v70 < (((_DWORD)v82 + (_DWORD)v40 - (_DWORD)v69) & 0xFFFFFFF8) );
        }
      }
      else if ( v82 & 4 )
      {
        *(_DWORD *)v40 = *(_DWORD *)v8;
        *(_DWORD *)&v40[(unsigned int)v82 - 4] = *(_DWORD *)&v8[(unsigned int)v82 - 4];
      }
      else if ( (_DWORD)v82 )
      {
        *v40 = *v8;
        if ( v82 & 2 )
          *(_WORD *)&v40[(unsigned int)v82 - 2] = *(_WORD *)&v8[(unsigned int)v82 - 2];
      }
      goto LABEL_114;
    }
  }
LABEL_47:
  v40 = (char *)v76;
  if ( v79 == 1 )
  {
    if ( (v47 + (v17 & 1) != 0) + v46 <= 5 )
      goto LABEL_52;
    v40 = (char *)v76;
    goto LABEL_50;
  }
LABEL_48:
  if ( v79 || v46 + v47 <= 0 )
  {
LABEL_52:
    v39 = (signed __int64)v40;
    while ( 1 )
    {
      *(_BYTE *)--v39 = v17 - 10 * ((unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)v17 >> 64) >> 3) + 48;
      if ( v17 <= 9 )
        break;
      v17 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)v17 >> 64) >> 3;
    }
    if ( !(v78 & 4) )
      goto LABEL_33;
    goto LABEL_56;
  }
LABEL_50:
  ++v17;
  if ( !v48 || v85 != v17 || v24 == 8 )
    goto LABEL_52;
  ++v24;
  if ( !(v78 & 8) )
  {
    *(v40 - 1) = 48;
    v40 += ~v82;
    if ( (unsigned int)v82 >= 8 )
    {
      v72 = (unsigned __int64)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v40 = *(_QWORD *)v8;
      *(_QWORD *)&v40[(unsigned int)v82 - 8] = *(_QWORD *)&v8[(unsigned int)v82 - 8];
      v73 = v8 - &v40[-v72];
      if ( (((_DWORD)v82 + (_DWORD)v40 - (_DWORD)v72) & 0xFFFFFFF8) >= 8 )
      {
        v74 = 0;
        do
        {
          v75 = v74;
          v74 += 8;
          *(_QWORD *)(v72 + v75) = *(_QWORD *)(v73 + v75);
        }
        while ( v74 < (((_DWORD)v82 + (_DWORD)v40 - (_DWORD)v72) & 0xFFFFFFF8) );
      }
    }
    else if ( v82 & 4 )
    {
      *(_DWORD *)v40 = *(_DWORD *)v8;
      *(_DWORD *)&v40[(unsigned int)v82 - 4] = *(_DWORD *)&v8[(unsigned int)v82 - 4];
    }
    else if ( (_DWORD)v82 )
    {
      *v40 = *v8;
      if ( v82 & 2 )
        *(_WORD *)&v40[(unsigned int)v82 - 2] = *(_WORD *)&v8[(unsigned int)v82 - 2];
    }
  }
  v39 = (signed __int64)(v40 - 1);
  *(v40 - 1) = 49;
LABEL_32:
  if ( !(v78 & 4) )
    goto LABEL_33;
LABEL_56:
  v49 = &v40[-v39];
  v83 = strlen(v12);
  __memcpy_chk(src, v39, &v40[-v39], 41LL);
  v80 = v24;
  v50 = v86;
  v51 = (size_t)v49;
  v52 = -1LL;
  while ( 1 )
  {
    v53 = *v50;
    if ( *v50 )
    {
      v54 = (unsigned __int8)v53;
      if ( (unsigned __int8)v53 >= 0x7Fu )
        v54 = v51;
      ++v50;
      v52 = v54;
    }
    if ( v52 > v51 )
    {
      v55 = v51;
      v24 = v80;
      v39 = (signed __int64)&v40[-v55];
      memcpy(&v40[-v55], src, v55);
      goto LABEL_33;
    }
    v56 = &v40[-v52];
    v51 -= v52;
    memcpy(v56, &src[v51], v52);
    if ( !v51 )
      break;
    v40 = &v56[-v83];
    memcpy(v40, v12, v83);
  }
  v24 = v80;
  v39 = (signed __int64)v56;
LABEL_33:
  if ( v78 & 0x80 )
  {
    if ( v24 == -1 )
    {
      if ( v81 > 1 )
      {
        v24 = 1;
        v57 = 1LL;
        do
        {
          v57 *= v85;
          if ( v81 <= v57 )
            break;
          ++v24;
        }
        while ( v24 != 8 );
        v41 = v78 & 0x100;
        if ( !(v78 & 0x40) )
          goto LABEL_72;
        goto LABEL_70;
      }
      v24 = 0;
    }
    v41 = v78 & 0x100;
    if ( !(v24 | v41) )
      goto LABEL_36;
    if ( !(v78 & 0x40) )
    {
LABEL_71:
      if ( !v24 )
      {
        v58 = (_BYTE *)v76;
        if ( !v41 )
          goto LABEL_36;
        goto LABEL_77;
      }
LABEL_72:
      if ( v84 || v24 != 1 )
      {
        v58 = (_BYTE *)(v76 + 1);
        *(_BYTE *)v76 = byte_40B6B8[(signed __int64)v24];
        if ( v41 )
        {
          if ( v84 )
          {
            v58 = (_BYTE *)(v76 + 2);
            *(_BYTE *)(v76 + 1) = 105;
          }
          goto LABEL_77;
        }
      }
      else
      {
        v58 = (_BYTE *)(v76 + 1);
        *(_BYTE *)v76 = 107;
        if ( v41 )
        {
LABEL_77:
          *v58 = 66;
          v76 = (signed __int64)(v58 + 1);
          goto LABEL_36;
        }
      }
      v76 = (signed __int64)v58;
      goto LABEL_36;
    }
LABEL_70:
    s[647] = 32;
    v76 = (signed __int64)(s + 648);
    goto LABEL_71;
  }
LABEL_36:
  *(_BYTE *)v76 = 0;
  return v39;
}

signed __int64 __fastcall sub_405170(unsigned __int64 a1, __int64 a2)
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

char *__fastcall sub_4051C0(const char *a1)
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
  qword_60F3B0 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_405260(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_409C20(0LL);
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

unsigned __int64 __fastcall sub_405360(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_405260("`", v11);
        v58 = sub_405260("'", v11);
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
            return sub_405360((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_405360((__int64)v9, v79, s);
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
                return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
          return sub_405360((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_405360((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_409A40((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_405360((__int64)v9, v10, s);
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
      return sub_405360((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_405360(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_405260("`", v11);
        v58 = sub_405260("'", v11);
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
            return sub_405360((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_405360((__int64)v9, v79, s);
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
                return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
            return sub_405360((__int64)v9, v10, s);
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
              return sub_405360((__int64)v9, v10, s);
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
          return sub_405360((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_405360((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_409A40((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_405360((__int64)v9, v10, s);
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
      return sub_405360((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_406590(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F338;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_60F350 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_408490(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_60F338 == &xmmword_60F340 )
    {
      LODWORD(v20) = sub_4082A0(0LL, v9);
      v7 = v20;
      off_60F338 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F340);
    }
    else
    {
      LODWORD(v10) = sub_4082A0(off_60F338, v9);
      off_60F338 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60F350], 0, 16LL * ((signed int)a1 + 1 - dword_60F350));
    dword_60F350 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_405360(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60F3C0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_408240(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_405360(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_406590(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F338;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_60F350 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_408490(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_60F338 == &xmmword_60F340 )
    {
      LODWORD(v20) = sub_4082A0(0LL, v9);
      v7 = v20;
      off_60F338 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F340);
    }
    else
    {
      LODWORD(v10) = sub_4082A0(off_60F338, v9);
      off_60F338 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60F350], 0, 16LL * ((signed int)a1 + 1 - dword_60F350));
    dword_60F350 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_405360(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60F3C0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_408240(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_405360(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_406AB0(__int64 a1, int a2, char *a3)
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
  return sub_406590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406AB0(__int64 a1, int a2, char *a3)
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
  return sub_406590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406BB0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60F4F0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60F4C0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60F4D0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60F4E0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_406590(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_406C30(char *a1)
{
  return sub_406BB0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_406C60(__int64 a1, int a2, char *a3)
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
  return sub_406590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406C60(__int64 a1, int a2, char *a3)
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
  return sub_406590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406DC0(__int64 a1, char *a2)
{
  return sub_406590(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60F300);
}

_BYTE *__fastcall sub_406DE0(char *a1)
{
  return sub_406590(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60F300);
}

int sub_406E30()
{
  __int64 v0; // rbx@1
  __int64 v1; // rax@1

  LODWORD(v1) = sub_407050();
  v0 = v1;
  LODWORD(v1) = 0;
  if ( v0 )
  {
    LODWORD(v1) = sub_408240(24LL);
    *(_QWORD *)v1 = v0;
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(v1 + 8) = 0LL;
  }
  return v1;
}

__int64 __fastcall sub_406E60(__int64 a1)
{
  return *(_QWORD *)a1;
}

unsigned __int64 __fastcall sub_406E70(__int64 a1, unsigned __int64 a2)
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

__int64 __fastcall sub_406F90(void **a1)
{
  unsigned int v1; // er12@1
  int *v2; // rax@1
  int v3; // er13@1
  int *v4; // rbp@1

  v1 = sub_4074C0(*a1);
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  __explicit_bzero_chk(a1, 24LL, -1LL);
  free(a1);
  *v4 = v3;
  return v1;
}

void __fastcall __noreturn sub_406FF0(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

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

void __fastcall __noreturn sub_406FF0(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

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

__int64 __fastcall sub_407050(signed __int64 a1, unsigned __int64 a2)
{
  FILE *v2; // rax@3
  FILE *v3; // r13@3
  __int64 v4; // rax@4
  size_t v5; // rcx@4
  __int64 v6; // rbx@6
  __int64 v8; // rax@8
  signed __int64 v9; // r13@8
  int v10; // eax@8
  int v11; // er15@8
  signed __int64 v12; // rdx@9
  signed __int64 v13; // rax@11
  signed __int64 v14; // rbp@11
  __int64 v15; // rax@13
  struct timeval *v16; // r12@14
  unsigned __int64 v17; // r14@14
  signed __int64 v18; // rbp@15
  unsigned int v19; // eax@18
  __int64 v20; // rdx@19
  unsigned __int64 v21; // rbp@20
  signed __int64 v22; // r14@21
  unsigned int v23; // eax@24
  __int64 v24; // rdx@25
  unsigned __int64 v25; // rbp@26
  signed int v26; // eax@27
  signed int v27; // edi@29
  unsigned int v28; // eax@30
  __int64 v29; // rdx@31
  signed __int64 v30; // rcx@36
  struct timeval *v31; // r15@36
  signed __int64 v32; // rbp@38
  unsigned int v33; // ST08_4@38
  signed __int64 v34; // r14@39
  unsigned __int64 v35; // rcx@41
  struct timeval tv; // [sp+10h] [bp-48h]@14

  if ( !a2 )
  {
    LODWORD(v15) = sub_408240(4152LL);
    v6 = v15;
    *(_QWORD *)v15 = 0LL;
    *(_QWORD *)(v15 + 8) = sub_406FF0;
    *(_QWORD *)(v15 + 16) = 0LL;
    return v6;
  }
  if ( !a1 )
  {
    LODWORD(v8) = sub_408240(4152LL);
    *(_QWORD *)v8 = 0LL;
    v6 = v8;
    v9 = v8 + 32;
    *(_QWORD *)(v8 + 8) = sub_406FF0;
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    v10 = open("/dev/urandom", 0);
    v11 = v10;
    if ( v10 < 0 )
    {
      v16 = &tv;
      v17 = 20LL;
      gettimeofday(&tv, 0LL);
      *(__m128i *)(v6 + 32) = _mm_load_si128((const __m128i *)&tv);
      LODWORD(tv.tv_sec) = getpid();
      *(_DWORD *)(v6 + 48) = tv.tv_sec;
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
      v16 = &tv;
      v30 = 2048 - v14;
      v31 = (struct timeval *)(v9 + v14);
      if ( (unsigned __int64)(2048 - v14) > 0x10 )
        v30 = 16LL;
      v32 = v30 + v14;
      v33 = v30;
      gettimeofday(&tv, 0LL);
      qmemcpy(v31, &tv, v33);
      if ( v32 > 2047 )
        goto LABEL_12;
      v34 = 2048 - v32;
      if ( (unsigned __int64)(2048 - v32) > 4 )
        v34 = 4LL;
      LODWORD(tv.tv_sec) = getpid();
      v35 = (unsigned int)v34;
      v17 = v32 + v34;
      qmemcpy((void *)(v9 + v32), &tv, v35);
      if ( v17 > 0x7FF )
        goto LABEL_12;
    }
    v18 = 2048 - v17;
    if ( 2048 - v17 > 4 )
      v18 = 4LL;
    LODWORD(tv.tv_sec) = getppid();
    if ( (_DWORD)v18 )
    {
      v19 = 0;
      do
      {
        v20 = v19++;
        *(_BYTE *)(v9 + v17 + v20) = *((_BYTE *)&v16->tv_sec + v20);
      }
      while ( v19 < (unsigned int)v18 );
    }
    v21 = v17 + v18;
    if ( v21 <= 0x7FF )
    {
      v22 = 2048 - v21;
      if ( 2048 - v21 > 4 )
        v22 = 4LL;
      LODWORD(tv.tv_sec) = getuid();
      if ( (_DWORD)v22 )
      {
        v23 = 0;
        do
        {
          v24 = v23++;
          *(_BYTE *)(v9 + v21 + v24) = *((_BYTE *)&v16->tv_sec + v24);
        }
        while ( v23 < (unsigned int)v22 );
      }
      v25 = v22 + v21;
      if ( v25 <= 0x7FF )
      {
        LODWORD(tv.tv_sec) = getgid();
        v26 = 2048 - v25;
        if ( 2048 - v25 > 4 )
          v26 = 4;
        v27 = v26;
        if ( v26 )
        {
          v28 = 0;
          do
          {
            v29 = v28++;
            *(_BYTE *)(v9 + v25 + v29) = *((_BYTE *)&v16->tv_sec + v29);
          }
          while ( v28 < v27 );
        }
      }
    }
LABEL_12:
    sub_4077C0(v9);
    return v6;
  }
  LODWORD(v2) = sub_409B20(a1, "rb");
  v3 = v2;
  if ( v2 )
  {
    LODWORD(v4) = sub_408240(4152LL);
    v5 = 4096LL;
    *(_QWORD *)v4 = v3;
    if ( a2 <= 0x1000 )
      v5 = a2;
    *(_QWORD *)(v4 + 8) = sub_406FF0;
    v6 = v4;
    *(_QWORD *)(v4 + 16) = a1;
    setvbuf(v3, (char *)(v4 + 24), 0, v5);
  }
  else
  {
    v6 = 0LL;
  }
  return v6;
}

int __fastcall sub_407360(__int64 a1, char *a2, size_t a3)
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
        LODWORD(v10) = sub_407510(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return v10;
}

__int64 __fastcall sub_4074C0(void *ptr)
{
  FILE *v1; // rbp@1
  __int64 result; // rax@2

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_408A10(v1);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_407510(__int64 a1, __int64 a2)
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

unsigned __int64 __fastcall sub_4077C0(__int64 a1)
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

__int64 __fastcall sub_407A00(int oldfd, char *old, int newfd, char *a4, unsigned int a5)
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

__int64 __fastcall sub_407C50(int fd)
{
  __int64 result; // rax@2
  int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_40A190();
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

int __fastcall sub_407CA0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_407CA0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_408100(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_407CA0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_407CA0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_408240(size_t a1, __int64 a2)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_408490(a1, a2);
  }
  return result;
}

void *__fastcall sub_4082A0(void *a1, size_t a2)
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
        sub_408490(a1, a2);
    }
  }
  return result;
}

void *__fastcall sub_408440(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_408240(a2, a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_408470(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_408440(a1, v1 + 1);
}

void __noreturn sub_408490()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_4084D0(char *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned __int64 v7; // r15@1
  unsigned __int64 v8; // r14@1
  __int64 v9; // r13@1
  int v10; // ebx@1
  int v11; // eax@1
  unsigned __int64 v12; // rbp@2
  int *v13; // r14@4
  _BYTE *v14; // rax@5
  int v15; // esi@5
  int v17; // ebp@11
  int *v18; // rax@11
  unsigned __int64 v19; // [sp+8h] [bp-40h]@0

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

int __fastcall sub_408A10(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_408BD0(stream) )
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

__int64 __fastcall sub_408A90(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_60F4F8 < 0 )
    {
      v4 = sub_408A90(a1);
      if ( v4 >= 0 && dword_60F4F8 == -1 )
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
        dword_60F4F8 = 1;
      }
      else
      {
        v4 = sub_408A90(a1);
        if ( v4 >= 0 )
        {
          dword_60F4F8 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_408BD0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_408C10(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_408C10(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_408C70(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_408D50(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_409370(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_408C70(a2, a7);
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
        sub_408C70((__int64)v11, a7);
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
            v40 = sub_408D50(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_408D50(v10, v11, v12, v53, v54, a6, a7, v8, 4246706LL);
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
        v40 = sub_408D50(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_409940(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60F500 = dword_60F35C;
  dword_60F504 = dword_60F358;
  result = sub_409370(a1, a2, a3, a4, a5, a6, (__int64)&dword_60F500, a7);
  dword_60F35C = dword_60F500;
  s2 = (char *)qword_60F510;
  dword_60F354 = dword_60F508;
  return result;
}

__int64 __fastcall sub_4099C0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_409940(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_409A40(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409BC0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

int __fastcall sub_409AC0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

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
      v6 = sub_40A190((unsigned int)v4);
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

const char *sub_409C20()
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
                sub_408A10(v61);
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
            sub_408A10(v40);
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

__int64 __fastcall sub_40A190(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return sub_408A90(a1, 0, 3LL, a4);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40A210(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60F2C8 )
    v1 = unk_60F2C8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40A228(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60EE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
