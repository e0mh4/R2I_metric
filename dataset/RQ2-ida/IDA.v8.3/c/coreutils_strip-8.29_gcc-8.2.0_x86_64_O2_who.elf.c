__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char v3; // r12
  int v4; // eax
  int v5; // ebx
  __int64 v7; // rbx
  char *v8; // rax

  v3 = 1;
  sub_4036C0(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409E30(sub_403520);
  while ( 1 )
  {
    v4 = sub_406910(a1, a2, "abdlmpqrstuwHT", &off_40A760, 0LL);
    if ( v4 == -1 )
      break;
    if ( v4 == 109 )
    {
      byte_60E3A8 = 1;
    }
    else if ( v4 <= 109 )
    {
      if ( v4 == 84 )
      {
LABEL_37:
        byte_60E3B1 = 1;
      }
      else if ( v4 <= 84 )
      {
        if ( v4 == -130 )
          sub_403080(0);
        if ( v4 != 72 )
        {
          if ( v4 == -131 )
          {
            sub_405760(
              (_DWORD)stdout,
              (unsigned int)"who",
              (unsigned int)&unk_40A018,
              (_DWORD)off_60E280,
              (unsigned int)"Joseph Arceneaux",
              (unsigned int)"David MacKenzie",
              "Michael Stone",
              0LL);
            exit(0);
          }
LABEL_31:
          sub_403080(1);
        }
        byte_60E3B2 = 1;
      }
      else if ( v4 == 98 )
      {
        byte_60E3AF = 1;
        v3 = 0;
      }
      else if ( v4 <= 98 )
      {
        if ( v4 != 97 )
          goto LABEL_31;
        byte_60E3AF = 1;
        v3 = 0;
        byte_60E3AE = 1;
        byte_60E3AD = 1;
        byte_60E3AC = 1;
        byte_60E3AA = 1;
        byte_60E3AB = 1;
        byte_60E3A9 = 1;
        byte_60E3B1 = 1;
        byte_60E3B3 = 1;
        byte_60E3B0 = 1;
      }
      else if ( v4 == 100 )
      {
        byte_60E3AE = 1;
        v3 = 0;
        byte_60E3B3 = 1;
        byte_60E3B0 = 1;
      }
      else
      {
        if ( v4 != 108 )
          goto LABEL_31;
        byte_60E3AD = 1;
        v3 = 0;
        byte_60E3B3 = 1;
      }
    }
    else if ( v4 == 115 )
    {
      byte_60E3B4 = 1;
    }
    else if ( v4 <= 115 )
    {
      if ( v4 == 113 )
      {
        byte_60E3B5 = 1;
      }
      else if ( v4 <= 113 )
      {
        if ( v4 != 112 )
          goto LABEL_31;
        byte_60E3AC = 1;
        v3 = 0;
      }
      else
      {
        byte_60E3AA = 1;
        v3 = 0;
        byte_60E3B3 = 1;
      }
    }
    else if ( v4 == 117 )
    {
      byte_60E3A9 = 1;
      v3 = 0;
      byte_60E3B3 = 1;
    }
    else if ( v4 < 117 )
    {
      byte_60E3AB = 1;
      v3 = 0;
    }
    else
    {
      if ( v4 == 119 )
        goto LABEL_37;
      if ( v4 != 128 )
        goto LABEL_31;
      byte_60E3B6 = 1;
    }
  }
  if ( v3 )
  {
    byte_60E3A9 = 1;
    byte_60E3B4 = 1;
  }
  if ( byte_60E3B0 )
    byte_60E3B4 = 0;
  if ( (unsigned __int8)sub_4035C0(2LL) )
  {
    format = "%Y-%m-%d %H:%M";
    dword_60E398 = 16;
  }
  else
  {
    format = "%b %e %H:%M";
    dword_60E398 = 12;
  }
  v5 = a1 - dword_60E2FC;
  if ( a1 - dword_60E2FC == 1 )
  {
    sub_402920(a2[dword_60E2FC], 0LL);
  }
  else
  {
    if ( v5 <= 1 )
    {
      if ( v5 + 1 < 0 == __OFADD__(1, v5) )
        goto LABEL_49;
LABEL_56:
      v7 = sub_4052E0(a2[dword_60E2FC + 2]);
      v8 = dcgettext(0LL, "extra operand %s", 5);
      error(0, 0, v8, v7);
      goto LABEL_31;
    }
    if ( v5 != 2 )
      goto LABEL_56;
    byte_60E3A8 = 1;
LABEL_49:
    sub_402920("/var/run/utmp", 1LL);
  }
  return 0LL;
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

__int64 *sub_40201B()
{
  return &program_invocation_short_name;
}

__int64 sub_40203A()
{
  return 0LL;
}

__int64 *sub_402071()
{
  __int64 *result; // rax

  if ( !byte_60E328 )
  {
    while ( qword_60E330 < (unsigned __int64)(&qword_60DE48 - qword_60DE40 - 1) )
      ((void (*)(void))qword_60DE40[++qword_60E330])();
    result = sub_40201B();
    byte_60E328 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_4020C8()
{
  return sub_40203A();
}

void __fastcall sub_4020D0(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        char *s,
        __int64 a9,
        const char *a10)
{
  const char *v12; // rbx
  char *v13; // r8
  char v14; // r12
  __int64 v15; // rdi
  size_t v16; // rax
  _BYTE *v17; // rax
  void *v18; // rbp
  const char *v19; // r8
  char *v20; // rbx
  char *i; // rax
  size_t v22; // rax
  int v24; // [rsp+4h] [rbp-74h]
  char *v25; // [rsp+20h] [rbp-58h] BYREF
  char v26[8]; // [rsp+2Bh] [rbp-4Dh] BYREF
  char v27[69]; // [rsp+33h] [rbp-45h] BYREF

  v12 = (const char *)a2;
  byte_60E279 = a3;
  v24 = a4;
  v13 = a7;
  v14 = byte_60E3B4;
  if ( !byte_60E3B3 || byte_60E3B4 || (v22 = strlen(a7), v13 = a7, v22 > 6) )
  {
    v26[0] = 0;
  }
  else
  {
    a2 = 1LL;
    __sprintf_chk(v26, 1LL, 8LL, " %-6s", a7);
    v14 = byte_60E3B4;
  }
  if ( v14 || strlen(s) > 0xB )
  {
    v27[0] = 0;
  }
  else
  {
    a2 = 1LL;
    __sprintf_chk(v27, 1LL, 13LL, " %10s", s);
  }
  v15 = 1LL;
  if ( byte_60E3B0 )
  {
    v16 = strlen(a10);
    v15 = v16 + 2;
    if ( v16 <= 0xB )
      v15 = 14LL;
  }
  v17 = (_BYTE *)sub_4058A0(v15, a2, a3, a4, v13);
  v18 = v17;
  if ( byte_60E3B0 )
    __sprintf_chk(v17, 1LL, -1LL, " %-12s", a10);
  else
    *v17 = 0;
  v19 = (const char *)&unk_60E278;
  if ( !byte_60E3B1 )
    v19 = "";
  if ( !v12 )
    v12 = "   .";
  if ( (unsigned int)sub_405B30(
                       (unsigned int)&v25,
                       (unsigned int)"%-8.*s%s %-12.*s %-*s%s%s %-8s%s",
                       a1,
                       (_DWORD)v12,
                       (_DWORD)v19,
                       v24,
                       a5,
                       (unsigned int)dword_60E398,
                       a6,
                       v26,
                       v27,
                       a9,
                       v18) == -1 )
    sub_405AF0();
  v20 = v25;
  for ( i = &v20[strlen(v25)]; *(i - 1) == 32; --i )
    ;
  *i = 0;
  puts(v25);
  free(v25);
  free(v18);
}

char *__fastcall sub_402310(__int64 a1)
{
  char *v1; // rax
  size_t v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  char *v6; // rbx
  char *v7; // rax

  v1 = dcgettext(0LL, "id=", 5);
  v2 = strlen(v1);
  v6 = (char *)sub_4058A0(v2 + 5, "id=", v3, v4, v5);
  v7 = dcgettext(0LL, "id=", 5);
  strcpy(v6, v7);
  return strncat(v6, (const char *)(a1 + 40), 4uLL);
}

char *__fastcall sub_402380(int a1)
{
  struct tm *v1; // rax
  time_t timer; // [rsp+8h] [rbp-10h] BYREF

  timer = a1;
  v1 = localtime(&timer);
  if ( !v1 )
    return (char *)sub_403620(timer, s);
  strftime(s, 0x21uLL, format, v1);
  return s;
}

void __fastcall sub_4023E0(__int64 a1, __time_t a2)
{
  char v4; // cl
  char *v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  char *v8; // rdx
  __time_t tv_sec; // r14
  unsigned int v10; // r15d
  char v11; // dl
  char *v12; // rax
  char *v13; // rcx
  __int64 v14; // rsi
  char *v15; // rax
  char *v16; // r13
  size_t v17; // rax
  unsigned __int64 v18; // rdx
  void *v19; // r10
  size_t v20; // rax
  void *v21; // r10
  unsigned __int64 v22; // rax
  const char *v23; // rbp
  char *v24; // rax
  char *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char *v29; // rax
  int v30; // ecx
  unsigned int v31; // edx
  bool v32; // cf
  unsigned __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // ecx
  const char *v42; // rax
  int v43; // ecx
  __int64 v44; // [rsp+8h] [rbp-250h]
  char *v45; // [rsp+10h] [rbp-248h]
  char *v46; // [rsp+10h] [rbp-248h]
  void *ptr; // [rsp+18h] [rbp-240h]
  void *ptra; // [rsp+18h] [rbp-240h]
  unsigned __int64 v49; // [rsp+20h] [rbp-238h]
  size_t v50; // [rsp+28h] [rbp-230h]
  char v51[19]; // [rsp+3Dh] [rbp-21Bh] BYREF
  char filename[48]; // [rsp+50h] [rbp-208h] BYREF
  struct stat stat_buf; // [rsp+80h] [rbp-1D8h] BYREF
  char s[328]; // [rsp+110h] [rbp-148h] BYREF

  __sprintf_chk(&v51[7], 1LL, 12LL, "%ld", *(int *)(a1 + 4));
  v4 = *(_BYTE *)(a1 + 8);
  if ( v4 == 47 )
  {
    v5 = (char *)(a1 + 8);
    v6 = (__int64)filename;
    v7 = a1 + 40;
    v44 = a1 + 8;
    v8 = filename;
  }
  else
  {
    v6 = (__int64)filename;
    strcpy(filename, "/dev/");
    v7 = a1 + 40;
    v5 = (char *)(a1 + 8);
    v8 = &filename[5];
    v44 = a1 + 8;
    if ( !v4 )
      goto LABEL_5;
  }
  do
  {
    ++v8;
    ++v5;
    *(v8 - 1) = v4;
    if ( v7 <= (unsigned __int64)v5 )
      break;
    v4 = *v5;
  }
  while ( *v5 );
LABEL_5:
  *v8 = 0;
  if ( __xstat(1, filename, &stat_buf) )
  {
    v10 = 63;
LABEL_8:
    v11 = *(_BYTE *)(a1 + 76);
    strcpy(v51, "  ?");
    if ( v11 )
      goto LABEL_9;
    goto LABEL_33;
  }
  tv_sec = stat_buf.st_atim.tv_sec;
  v10 = (stat_buf.st_mode & 0x10) == 0 ? 45 : 43;
  if ( !stat_buf.st_atim.tv_sec )
  {
    v10 = (char)v10;
    goto LABEL_8;
  }
  if ( timer == 0x8000000000000000LL )
    time(&timer);
  if ( tv_sec > a2 && tv_sec >= timer - 86399 && tv_sec <= timer )
  {
    v41 = timer - tv_sec;
    if ( (int)timer - (int)tv_sec <= 59 )
    {
      v25 = "  .  ";
    }
    else
    {
      if ( v41 > 86399 )
        __assert_fail("seconds_idle / (60 * 60) < 24", "src/who.c", 0xCDu, "idle_string");
      __sprintf_chk(&unk_60E381, 1LL, 6LL, "%02d:%02d", (unsigned int)(v41 / 3600), v41 % 3600 / 0x3Cu);
      v25 = (char *)&unk_60E381;
    }
  }
  else
  {
    v25 = dcgettext(0LL, " old ", 5);
  }
  v10 = (char)v10;
  v6 = 1LL;
  __sprintf_chk(v51, 1LL, 7LL, "%.*s", 6, v25);
  v11 = *(_BYTE *)(a1 + 76);
  if ( v11 )
  {
LABEL_9:
    v12 = (char *)(a1 + 76);
    v13 = s;
    do
    {
      ++v13;
      ++v12;
      *(v13 - 1) = v11;
      if ( a1 + 332 <= (unsigned __int64)v12 )
        break;
      v11 = *v12;
    }
    while ( *v12 );
    *v13 = 0;
    v14 = 58LL;
    v15 = strchr(s, 58);
    if ( v15 )
    {
      v14 = (__int64)(v15 + 1);
      *v15 = 0;
      v16 = s;
      v45 = v15 + 1;
      if ( s[0] )
      {
        if ( byte_60E3B6 )
        {
          v16 = (char *)sub_4034E0(s);
          if ( !v16 )
            v16 = s;
        }
      }
      v17 = strlen(v16);
      v18 = qword_60E390;
      v50 = v17;
      v19 = ::ptr;
      if ( v45 )
      {
        v49 = qword_60E390;
        ptr = ::ptr;
        v20 = strlen(v45);
        v21 = ptr;
        v22 = v50 + v20 + 4;
        if ( v22 > v49 )
        {
          v34 = ptr;
          qword_60E390 = v22;
          ptra = (void *)v22;
          free(v34);
          v21 = (void *)sub_4058A0(ptra, v14, v35, v36, v37);
          ::ptr = v21;
        }
        __sprintf_chk(v21, 1LL, -1LL, "(%s:%s)", v16, v45);
LABEL_21:
        if ( v16 != s )
          free(v16);
        v23 = (const char *)::ptr;
        if ( !::ptr )
          v23 = "";
        goto LABEL_25;
      }
LABEL_46:
      v33 = v17 + 3;
      if ( v33 > v18 )
      {
        qword_60E390 = v33;
        v46 = (char *)v33;
        free(v19);
        v19 = (void *)sub_4058A0(v46, v14, v38, v39, v40);
        ::ptr = v19;
      }
      __sprintf_chk(v19, 1LL, -1LL, "(%s)", v16);
      goto LABEL_21;
    }
    if ( s[0] && byte_60E3B6 )
    {
      v42 = (const char *)sub_4034E0(s);
      v16 = (char *)v42;
      if ( v42 )
      {
        v17 = strlen(v42);
        v18 = qword_60E390;
        v19 = ::ptr;
        goto LABEL_46;
      }
      v29 = s;
      do
      {
        v43 = *(_DWORD *)v29;
        v29 += 4;
        v31 = ~v43 & (v43 - 16843009) & 0x80808080;
      }
      while ( !v31 );
    }
    else
    {
      v29 = s;
      do
      {
        v30 = *(_DWORD *)v29;
        v29 += 4;
        v31 = ~v30 & (v30 - 16843009) & 0x80808080;
      }
      while ( !v31 );
    }
    v19 = ::ptr;
    v16 = s;
    if ( (v31 & 0x8080) == 0 )
    {
      v31 >>= 16;
      v29 += 2;
    }
    v14 = v31;
    v32 = __CFADD__((_BYTE)v31, (_BYTE)v31);
    LOBYTE(v14) = 2 * v31;
    v18 = qword_60E390;
    v17 = &v29[-v32 - 3] - s;
    goto LABEL_46;
  }
LABEL_33:
  v23 = (const char *)::ptr;
  if ( !qword_60E390 )
  {
    qword_60E390 = 1LL;
    free(::ptr);
    v23 = (const char *)sub_4058A0(1LL, v6, v26, v27, v28);
    ::ptr = (void *)v23;
  }
  *v23 = 0;
LABEL_25:
  v24 = sub_402380(*(_DWORD *)(a1 + 340));
  sub_4020D0(32, a1 + 44, v10, 32LL, v44, (__int64)v24, v51, &v51[7], (__int64)v23, "");
}

void __fastcall sub_402920(__int64 a1, unsigned int a2)
{
  const char *v2; // r13
  char *v3; // r14
  __int64 v4; // rbp
  __time_t v5; // r12
  __int64 v6; // rbx
  __int16 v7; // bp
  __int64 v8; // rbx
  __int64 v9; // rbp
  const char *v10; // r12
  char *v11; // rax
  const char *v12; // rax
  const char *v13; // rdx
  char *v14; // r13
  int v15; // r15d
  int v16; // ebp
  char *v17; // rax
  bool v18; // zf
  unsigned int v19; // r15d
  unsigned int v20; // ebp
  char *v21; // rax
  const char *v22; // rbp
  char *v23; // rax
  const char *v24; // rsi
  char *v25; // rbp
  char *v26; // rax
  char *v27; // rbp
  char *v28; // rax
  char *v29; // r15
  char *v30; // rax
  char *v31; // rax
  char *v32; // r12
  char *v33; // r15
  char *v34; // rbx
  char *v35; // rax
  char *v36; // rbp
  char *v37; // r15
  char *v38; // rax
  const char *v39; // r15
  char *v40; // rax
  unsigned __int64 v41; // kr08_8
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int64 v44; // kr10_8
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned __int64 v47; // kr18_8
  unsigned __int64 v48; // kr20_8
  __int64 v49; // rdx
  __int64 v50; // r8
  const char *v51; // rbx
  int *v52; // rax
  char *v53; // [rsp+8h] [rbp-70h]
  unsigned int v54; // [rsp+8h] [rbp-70h]
  char *v55; // [rsp+10h] [rbp-68h]
  unsigned int v56; // [rsp+10h] [rbp-68h]
  char *v57; // [rsp+18h] [rbp-60h]
  __int64 v58; // [rsp+20h] [rbp-58h] BYREF
  void *ptr; // [rsp+28h] [rbp-50h] BYREF
  char s[68]; // [rsp+34h] [rbp-44h] BYREF

  if ( (unsigned int)sub_406A70(a1, &v58, &ptr, a2) )
  {
    v51 = (const char *)sub_405160(0LL, 3LL, a1);
    v52 = __errno_location();
    error(1, *v52, "%s", v51);
    sub_403080(1);
  }
  v3 = (char *)ptr;
  v4 = v58;
  if ( byte_60E3B5 )
  {
    v8 = v58 - 1;
    v9 = 0LL;
    if ( v58 )
    {
      v10 = "";
      do
      {
        if ( v3[44] && *(_WORD *)v3 == 7 )
        {
          ++v9;
          v12 = (const char *)sub_406A10(v3);
          v13 = v10;
          v14 = (char *)v12;
          v10 = "  .  " + 4;
          __printf_chk(1LL, "%s%s", v13, v12);
          free(v14);
        }
        --v8;
        v3 += 384;
      }
      while ( v8 != -1 );
    }
    v11 = dcgettext(0LL, "\n# users=%lu\n", 5);
    __printf_chk(1LL, v11, v9);
  }
  else
  {
    if ( byte_60E3B2 )
    {
      v57 = dcgettext(0LL, "EXIT", 5);
      v32 = dcgettext(0LL, "COMMENT", 5);
      v33 = dcgettext(0LL, "PID", 5);
      v34 = dcgettext(0LL, "IDLE", 5);
      v55 = dcgettext(0LL, "TIME", 5);
      v53 = dcgettext(0LL, "LINE", 5);
      v35 = dcgettext(0LL, "NAME", 5);
      sub_4020D0(-1, (__int64)v35, 32LL, 0xFFFFFFFFLL, (__int64)v53, (__int64)v55, v34, v33, (__int64)v32, v57);
    }
    if ( byte_60E3A8 )
    {
      v31 = ttyname(0);
      v2 = v31;
      if ( !v31 )
        goto LABEL_35;
      if ( !strncmp(v31, "/dev/", 5uLL) )
        v2 += 5;
    }
    v5 = 0x8000000000000000LL;
    v6 = v4 - 1;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = *(_WORD *)v3;
        if ( byte_60E3A8 && strncmp(v2, v3 + 8, 0x20uLL) )
          goto LABEL_24;
        if ( byte_60E3A9 && v3[44] && v7 == 7 )
        {
          sub_4023E0((__int64)v3, v5);
          v7 = *(_WORD *)v3;
          goto LABEL_24;
        }
        if ( byte_60E3AA && v7 == 1 )
          break;
        if ( byte_60E3AF && v7 == 2 )
        {
          v24 = "system boot";
          v25 = sub_402380(*((_DWORD *)v3 + 85));
          goto LABEL_47;
        }
        if ( byte_60E3AB && v7 == 3 )
        {
          v24 = "clock change";
          v25 = sub_402380(*((_DWORD *)v3 + 85));
LABEL_47:
          v26 = dcgettext(0LL, v24, 5);
          sub_4020D0(
            -1,
            (__int64)"",
            32LL,
            0xFFFFFFFFLL,
            (__int64)v26,
            (__int64)v25,
            (char *)"",
            (char *)"",
            (__int64)"",
            "");
LABEL_45:
          v7 = *(_WORD *)v3;
          goto LABEL_24;
        }
        if ( byte_60E3AC && v7 == 5 )
        {
          v27 = sub_402310((__int64)v3);
          __sprintf_chk(s, 1LL, 12LL, "%ld", *((int *)v3 + 1));
          v28 = sub_402380(*((_DWORD *)v3 + 85));
          sub_4020D0(-1, (__int64)"", 32LL, 32LL, (__int64)(v3 + 8), (__int64)v28, (char *)"", s, (__int64)v27, "");
        }
        else
        {
          if ( !byte_60E3AD || v7 != 6 )
          {
            if ( byte_60E3AE && v7 == 8 )
            {
              v36 = sub_402310((__int64)v3);
              __sprintf_chk(s, 1LL, 12LL, "%ld", *((int *)v3 + 1));
              if ( !qword_60E340 )
              {
                v47 = strlen(dcgettext(0LL, "term=", 5)) + 1;
                v48 = strlen(dcgettext(0LL, "exit=", 5)) + 1;
                qword_60E340 = sub_4058A0(v47 - 1 + v48 + 13, "exit=", v49, v48, v50);
              }
              v56 = *((__int16 *)v3 + 167);
              v37 = dcgettext(0LL, "exit=", 5);
              v54 = *((__int16 *)v3 + 166);
              v38 = dcgettext(0LL, "term=", 5);
              __sprintf_chk(qword_60E340, 1LL, -1LL, "%s%d %s%d", v38, v54, v37, v56);
              v39 = (const char *)qword_60E340;
              v40 = sub_402380(*((_DWORD *)v3 + 85));
              sub_4020D0(-1, (__int64)"", 32LL, 32LL, (__int64)(v3 + 8), (__int64)v40, (char *)"", s, (__int64)v36, v39);
              free(v36);
              v7 = *(_WORD *)v3;
            }
            goto LABEL_24;
          }
          v27 = sub_402310((__int64)v3);
          __sprintf_chk(s, 1LL, 12LL, "%ld", *((int *)v3 + 1));
          v29 = sub_402380(*((_DWORD *)v3 + 85));
          v30 = dcgettext(0LL, "LOGIN", 5);
          sub_4020D0(-1, (__int64)v30, 32LL, 32LL, (__int64)(v3 + 8), (__int64)v29, (char *)"", s, (__int64)v27, "");
        }
        free(v27);
        v7 = *(_WORD *)v3;
LABEL_24:
        if ( v7 == 2 )
          v5 = *((int *)v3 + 85);
        --v6;
        v3 += 384;
        if ( v6 == -1 )
          goto LABEL_35;
      }
      v15 = *((_DWORD *)v3 + 1) % 256;
      v16 = *((_DWORD *)v3 + 1) / 256;
      if ( !*(_QWORD *)&qword_60E350 )
      {
        v44 = strlen(dcgettext(0LL, "run-level", 5)) + 1;
        *(_QWORD *)&qword_60E350 = sub_4058A0(v44 + 2, "run-level", v45, v44, v46);
      }
      v17 = dcgettext(0LL, "run-level", 5);
      __sprintf_chk(*(_QWORD *)&qword_60E350, 1LL, -1LL, "%s %c", v17, (unsigned __int8)v15);
      if ( !qword_60E348 )
      {
        v41 = strlen(dcgettext(0LL, "last=", 5)) + 1;
        qword_60E348 = sub_4058A0(v41 + 1, "last=", v42, v41 + 1, v43);
      }
      v18 = (_BYTE)v16 == 78;
      v19 = (unsigned __int8)v16;
      v20 = 83;
      if ( !v18 )
        v20 = v19;
      v21 = dcgettext(0LL, "last=", 5);
      __sprintf_chk(qword_60E348, 1LL, -1LL, "%s%c", v21, v20);
      v22 = "";
      if ( v19 - 32 <= 0x5E )
        v22 = (const char *)qword_60E348;
      v23 = sub_402380(*((_DWORD *)v3 + 85));
      sub_4020D0(
        -1,
        (__int64)"",
        32LL,
        0xFFFFFFFFLL,
        *(__int64 *)&qword_60E350,
        (__int64)v23,
        (char *)"",
        (char *)"",
        (__int64)v22,
        "");
      goto LABEL_45;
    }
  }
LABEL_35:
  free(ptr);
}

void __fastcall __noreturn sub_403080(int status)
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
  char *v20; // rax
  __int64 *v21; // rax
  char *v22; // rbp
  char *v23; // rax
  char *v24; // rax
  const char *v25; // r12
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  __int64 v32[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_60E408;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(0LL, "Print information about users who are currently logged in.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(
         0LL,
         "\n"
         "  -a, --all         same as -b -d --login -p -r -t -T -u\n"
         "  -b, --boot        time of last system boot\n"
         "  -d, --dead        print dead processes\n"
         "  -H, --heading     print line of column headings\n",
         5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "  -l, --login       print system login processes\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "      --lookup      attempt to canonicalize hostnames via DNS\n"
          "  -m                only hostname and user associated with stdin\n"
          "  -p, --process     print active processes spawned by init\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  -q, --count       all login names and number of users logged on\n"
          "  -r, --runlevel    print current runlevel\n"
          "  -s, --short       print only name, line, and time (default)\n"
          "  -t, --time        print last system clock change\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "  -T, -w, --mesg    add user's message status as +, - or ?\n"
          "  -u, --users       list users logged in\n"
          "      --message     same as -T\n"
          "      --writable    same as -T\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v19, v18);
  v20 = dcgettext(
          0LL,
          "\n"
          "If FILE is not specified, use %s.  %s as FILE is common.\n"
          "If ARG1 ARG2 given, -m presumed: 'am i' or 'mom likes' are usual.\n",
          5);
  __printf_chk(1LL, v20, "/var/run/utmp", "/var/log/wtmp");
  v32[0] = (__int64)"[";
  v21 = v32;
  v32[1] = (__int64)"test invocation";
  v32[2] = (__int64)"coreutils";
  v32[3] = (__int64)"Multi-call invocation";
  v32[4] = (__int64)"sha224sum";
  v32[5] = (__int64)"sha2 utilities";
  v32[6] = (__int64)"sha256sum";
  v32[7] = (__int64)"sha2 utilities";
  v32[8] = (__int64)"sha384sum";
  v32[9] = (__int64)"sha2 utilities";
  v32[10] = (__int64)"sha512sum";
  v32[11] = (__int64)"sha2 utilities";
  v32[12] = 0LL;
  v32[13] = 0LL;
  do
    v21 += 2;
  while ( *v21 && strcmp("who", (const char *)*v21) );
  v22 = (char *)v21[1];
  if ( v22 )
  {
    v23 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v23, &unk_40A018, "https://www.gnu.org/software/coreutils/");
    v24 = setlocale(5, 0LL);
    if ( !v24 || !strncmp(v24, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v28 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v28, &unk_40A018, "https://www.gnu.org/software/coreutils/");
    v29 = setlocale(5, 0LL);
    if ( !v29 || !strncmp(v29, "en_", 3uLL) )
    {
      v22 = "who";
      v30 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v25 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v30, "https://www.gnu.org/software/coreutils/", "who");
LABEL_12:
      v27 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v27, v22, v25);
LABEL_3:
      exit(status);
    }
    v22 = "who";
  }
  v31 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v31, "who");
LABEL_10:
  v25 = "Multi-call invocation" + 10;
  v26 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v26, "https://www.gnu.org/software/coreutils/", "who");
  if ( v22 != "who" )
    v25 = "";
  goto LABEL_12;
}

char *__fastcall sub_403450(char *s, int *a2)
{
  int v3; // eax
  struct addrinfo *v4; // r12
  char *ai_canonname; // rdi
  char *v6; // rbx
  struct addrinfo *pai; // [rsp+8h] [rbp-20h] BYREF

  req.ai_flags = 2;
  pai = 0LL;
  v3 = getaddrinfo(s, 0LL, &req, &pai);
  if ( !v3 )
  {
    v4 = pai;
    ai_canonname = pai->ai_canonname;
    if ( !ai_canonname )
      ai_canonname = s;
    v6 = strdup(ai_canonname);
    if ( !v6 )
    {
      if ( a2 )
        *a2 = -10;
    }
    freeaddrinfo(v4);
    return v6;
  }
  v6 = 0LL;
  if ( !a2 )
    return v6;
  *a2 = v3;
  return 0LL;
}

char *__fastcall sub_4034E0(char *a1)
{
  return sub_403450(a1, &dword_60E3F0);
}

__int64 sub_403520()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_406C80(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60E3F8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60E400 )
      {
        v5 = (const char *)sub_405130();
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
  result = sub_406C80(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

bool __fastcall sub_4035C0(int a1)
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

__int64 __fastcall sub_403620(__int64 a1, __int64 a2)
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

char *__fastcall sub_4036C0(const char *a1)
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
  qword_60E408 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_403760(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_406CE0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40AA11;
      if ( !v5 )
        return (char *)&unk_40AA06;
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
    v2 = (char *)&unk_40AA0D;
    if ( !v5 )
      return (char *)&unk_40AA0A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_403860(
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
                return sub_403860((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_403860((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_406990((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_403860((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_403760("`", a5);
        v51 = sub_403760("'", a5);
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

unsigned __int64 __fastcall sub_403860(
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
                return sub_403860((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_403860((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_406990((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_403860((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_403760("`", a5);
        v51 = sub_403760("'", a5);
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

_BYTE *__fastcall sub_404A90(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  _BYTE *v17; // rax
  int v18; // r8d
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)off_60E2D8;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E2F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405AF0();
    v9 = 16LL * (a1 + 1);
    if ( off_60E2D8 == &xmmword_60E2E0 )
    {
      v7 = (__m128i *)sub_405900(0LL, v9);
      off_60E2D8 = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60E2E0);
    }
    else
    {
      off_60E2D8 = (void *)sub_405900(off_60E2D8, v9);
      v7 = (__m128i *)off_60E2D8;
    }
    memset(&v7[dword_60E2F0], 0, 16LL * (a1 + 1 - dword_60E2F0));
    dword_60E2F0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v24 = *(_DWORD *)(a4 + 4) | 1;
  v21 = *v10;
  v12 = sub_403860(v11, *v10, a2, a3, *(_DWORD *)a4, v24, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v21 <= v12 )
  {
    v16 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E420 )
    {
      v22 = v12 + 1;
      free(v11);
      v16 = v22;
    }
    v17 = (_BYTE *)sub_4058A0(v16, v16, v13, v14, v15);
    v18 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v17;
    v11 = v17;
    sub_403860(v17, v16, a2, a3, v18, v24, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v23;
  return v11;
}

_BYTE *__fastcall sub_404A90(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  _BYTE *v17; // rax
  int v18; // r8d
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)off_60E2D8;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E2F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405AF0();
    v9 = 16LL * (a1 + 1);
    if ( off_60E2D8 == &xmmword_60E2E0 )
    {
      v7 = (__m128i *)sub_405900(0LL, v9);
      off_60E2D8 = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60E2E0);
    }
    else
    {
      off_60E2D8 = (void *)sub_405900(off_60E2D8, v9);
      v7 = (__m128i *)off_60E2D8;
    }
    memset(&v7[dword_60E2F0], 0, 16LL * (a1 + 1 - dword_60E2F0));
    dword_60E2F0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v24 = *(_DWORD *)(a4 + 4) | 1;
  v21 = *v10;
  v12 = sub_403860(v11, *v10, a2, a3, *(_DWORD *)a4, v24, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v21 <= v12 )
  {
    v16 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E420 )
    {
      v22 = v12 + 1;
      free(v11);
      v16 = v22;
    }
    v17 = (_BYTE *)sub_4058A0(v16, v16, v13, v14, v15);
    v18 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v17;
    v11 = v17;
    sub_403860(v17, v16, a2, a3, v18, v24, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v23;
  return v11;
}

__int64 __fastcall sub_404C30(__int128 *a1)
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
    v1 = &xmmword_60E520;
  result = sub_405AA0(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_404D20(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_60E520;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_403860(
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

_BYTE *__fastcall sub_404DA0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v13; // [rsp+10h] [rbp-58h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_60E520;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v12 = *v6;
  v14 = sub_403860(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v13 = (_BYTE *)sub_4058A0(v14 + 1, v14 + 1, v8, v9, v10);
  sub_403860(v13, v14 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v12;
  if ( a3 )
    *a3 = v14;
  return v13;
}

void sub_404EA0()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)off_60E2D8;
  if ( dword_60E2F0 > 1 )
  {
    v1 = (void **)((char *)off_60E2D8 + 24);
    v2 = (void **)((char *)off_60E2D8 + 16 * (unsigned int)(dword_60E2F0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_60E420 )
  {
    free(v4);
    *(_QWORD *)&xmmword_60E2E0 = 256LL;
    *((_QWORD *)&xmmword_60E2E0 + 1) = &unk_60E420;
  }
  if ( v0 != &xmmword_60E2E0 )
  {
    free(v0);
    off_60E2D8 = &xmmword_60E2E0;
  }
  dword_60E2F0 = 1;
}

_BYTE *__fastcall sub_404FB0(int a1, int a2, __int64 a3)
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
  return sub_404A90(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_404FB0(int a1, int a2, __int64 a3)
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
  return sub_404A90(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405020(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_404A90(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_405020(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_404A90(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_4050B0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_60E550;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E520);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E530);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E540);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_404A90(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_405130(__int64 a1)
{
  return sub_4050B0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_405160(int a1, int a2, __int64 a3)
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
  return sub_404A90(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405160(int a1, int a2, __int64 a3)
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
  return sub_404A90(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4051D0(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E520);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E530);
  si128 = _mm_load_si128((const __m128i *)&xmmword_60E540);
  v8 = qword_60E550;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_404A90(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_4052E0(__int64 a1)
{
  return sub_404A90(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60E2A0);
}

__int64 __fastcall sub_405300(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_405300(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_405700(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_405300(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_405300(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_405760(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_405300(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_405300(a1, a2, a3, a4, v15, i);
}

int sub_405820()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40A018, "https://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_4058A0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405AF0();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_4058F0(size_t a1)
{
  return sub_4058A0(a1);
}

void *__fastcall sub_405900(void *a1, size_t a2)
{
  void *result; // rax

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
        sub_405AF0();
    }
  }
  return result;
}

void *__fastcall sub_405A50(size_t n)
{
  void *v1; // rax

  v1 = sub_4058A0(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_405A70(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_405AF0(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_405AA0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4058A0(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_405AD0(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_405AA0(src, v1 + 1);
}

void __noreturn sub_405AF0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_405B30(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+8h] [rbp-D0h] BYREF

  va_start(va, a2);
  return sub_406C20(a1, a2, va);
}

__int64 __fastcall sub_405BC0(__int64 a1, int *a2)
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

__int64 __fastcall sub_405CA0(
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

__int64 __fastcall sub_4062C0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_405BC0((__int64)a2, a7);
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
        sub_405BC0((__int64)a2, a7);
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
            return (unsigned int)sub_405CA0(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_405CA0(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_405CA0(a1, a2, v12, a4, a5, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_406890(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60E560 = dword_60E2FC;
  dword_60E564 = dword_60E2F8;
  result = sub_4062C0(a1, a2, a3, a4, a5, a6, &dword_60E560, a7);
  dword_60E2FC = dword_60E560;
  qword_60E5A0 = qword_60E570;
  dword_60E2F4 = dword_60E568;
  return result;
}

__int64 __fastcall sub_4068F0(int a1, __int64 *a2, const char *a3)
{
  return sub_406890(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_406910(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_406890(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_406930(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4062C0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_406950(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_406890(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_406970(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4062C0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_406990(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  const char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch] BYREF

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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !sub_4035C0(0) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

char *__fastcall sub_406A10(__int64 a1)
{
  char *v1; // rbx
  char *v2; // rax

  v1 = (char *)sub_4058A0(0x21uLL);
  strncpy(v1, (const char *)(a1 + 44), 0x20uLL);
  v1[32] = 0;
  v2 = &v1[strlen(v1)];
  if ( v1 < v2 )
  {
    do
    {
      if ( *(v2 - 1) != 32 )
        break;
      *--v2 = 0;
    }
    while ( v1 != v2 );
  }
  return v1;
}

__int64 __fastcall sub_406A70(const char *a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  char *v4; // r14
  int v5; // r13d
  int v6; // r12d
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  struct utmpx *v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // rax
  __pid_t ut_pid; // edi
  __int64 v15; // rdx
  size_t v16; // rsi
  char *v17; // rax
  __int64 v20; // [rsp+18h] [rbp-40h]

  v4 = 0LL;
  v5 = a4 & 1;
  v6 = a4 & 2;
  v7 = 0LL;
  v8 = 0LL;
  utmpxname(a1);
  setutxent();
LABEL_2:
  while ( 2 )
  {
    v9 = getutxent();
    if ( v9 )
    {
      while ( v9->ut_user[0] && v9->ut_type == 7 )
      {
        if ( !v5 )
          goto LABEL_6;
        ut_pid = v9->ut_pid;
        if ( ut_pid <= 0 || kill(ut_pid, 0) >= 0 )
          goto LABEL_6;
        if ( *__errno_location() == 3 )
          goto LABEL_2;
        if ( v8 != v7 )
        {
LABEL_7:
          v10 = v8 + 1;
          goto LABEL_8;
        }
LABEL_15:
        if ( v4 )
        {
          if ( v8 > 0x38E38E38E38E37LL )
            goto LABEL_24;
          v15 = v8 + 1;
          v7 = v8 + 1 + (v8 >> 1);
          v16 = 384 * v7;
        }
        else if ( v8 )
        {
          if ( ((384 * v8) & 0x8000000000000000LL) != 0LL || !is_mul_ok(v8, 0x180uLL) )
LABEL_24:
            sub_405AF0();
          v15 = v8 + 1;
          v16 = 384 * v8;
        }
        else
        {
          v16 = 384LL;
          v7 = 1LL;
          v15 = 1LL;
        }
        v20 = v15;
        v17 = (char *)sub_405900(v4, v16);
        v10 = v20;
        v4 = v17;
LABEL_8:
        v11 = 3 * v8;
        v8 = v10;
        v12 = &v4[128 * v11];
        *(_QWORD *)v12 = *(_QWORD *)&v9->ut_type;
        *((_QWORD *)v12 + 47) = *(_QWORD *)&v9->__unused[12];
        qmemcpy(
          (void *)((unsigned __int64)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)((char *)v9 - &v12[-((unsigned __int64)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
          8LL * (((unsigned int)v12 - (((_DWORD)v12 + 8) & 0xFFFFFFF8) + 384) >> 3));
        v9 = getutxent();
        if ( !v9 )
          goto LABEL_9;
      }
      if ( v6 )
        continue;
LABEL_6:
      if ( v8 != v7 )
        goto LABEL_7;
      goto LABEL_15;
    }
    break;
  }
LABEL_9:
  endutxent();
  *a2 = v8;
  *a3 = v4;
  return 0LL;
}

__int64 __fastcall sub_406C20(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  unsigned int v4; // edx
  unsigned __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  v3 = (void *)sub_407370(0LL, &v6, a2, a3);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = v6;
  if ( v6 > 0x7FFFFFFF )
  {
    free(v3);
    *__errno_location() = 75;
    return 0xFFFFFFFFLL;
  }
  else
  {
    *a1 = v3;
    return v4;
  }
}

__int64 __fastcall sub_406C80(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_407250(stream);
  if ( v2 )
  {
    if ( !(_DWORD)result )
    {
      *__errno_location() = 0;
      return 0xFFFFFFFFLL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( !(_DWORD)result )
    return result;
  if ( v1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)-(*__errno_location() != 9);
}

const char *sub_406CE0()
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
  v1 = qword_60E598;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_60E598 )
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
          v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_20:
          qword_60E598 = v1;
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
                v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
                v2 = v58;
                free(v59);
                sub_407250(v60);
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
            sub_407250(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
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

int __fastcall sub_407250(FILE *stream)
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
  if ( !(unsigned int)sub_4072D0(stream) )
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

int __fastcall sub_4072D0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_407310(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_407310(FILE *a1, __off_t a2, int a3)
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

char *__fastcall sub_407370(void *a1, size_t *a2, _BYTE *a3, __int64 a4, double a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  __int64 *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  _BYTE *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  __int64 v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // r11d
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  unsigned __int64 v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  int v80; // ebx
  __int64 v81; // rax
  char *v82; // rdi
  unsigned __int128 v83; // fst7
  __int64 v84; // rax
  char *v85; // rdi
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  __int64 v149; // [rsp-8h] [rbp-718h]
  int *v150; // [rsp+10h] [rbp-700h]
  int *v151; // [rsp+18h] [rbp-6F8h]
  __int64 v152; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v153; // [rsp+28h] [rbp-6E8h]
  char *v154; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v156; // [rsp+40h] [rbp-6D0h]
  void *v157; // [rsp+48h] [rbp-6C8h]
  char *v158; // [rsp+50h] [rbp-6C0h]
  __int64 v159; // [rsp+58h] [rbp-6B8h]
  _BYTE *v160; // [rsp+60h] [rbp-6B0h]
  __int64 *v161; // [rsp+68h] [rbp-6A8h]
  long double v162; // [rsp+70h] [rbp-6A0h]
  void *v163; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v165; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v166; // [rsp+98h] [rbp-678h]
  unsigned int v167; // [rsp+9Ch] [rbp-674h]
  char v168[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v169; // [rsp+A8h] [rbp-668h]
  _BYTE v170[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v171; // [rsp+190h] [rbp-580h] BYREF
  void *v172; // [rsp+198h] [rbp-578h]
  __int64 v173; // [rsp+1A0h] [rbp-570h]
  __int64 v174; // [rsp+1A8h] [rbp-568h]
  _BYTE v175[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v176[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v156 = a2;
  if ( (int)sub_4090B0(a3, &v171, v168) < 0 )
    return 0LL;
  if ( (int)sub_408E90(a4, v168) >= 0 )
  {
    v7 = v173 + 7;
    if ( (unsigned __int64)(v173 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v174, v7);
    v8 = v174 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v161 = &v152;
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = (__int64 *)malloc(v9);
      v161 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v156;
    v12 = (char *)v172;
    v13 = a3;
    v14 = (char *)src;
    v159 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v172;
    if ( *(_BYTE **)v172 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (void *)(v16 - v13);
    v18 = (unsigned __int64)v17 + v15;
    v19 = (size_t)v17 + v15;
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v160 = v13;
          LOBYTE(v162) = v20;
          v163 = v17;
          v21 = (char *)malloc(v11);
          v17 = v163;
          v13 = v160;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v162) )
          {
            *(_QWORD *)&v162 = v160;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = v163;
            v13 = *(_BYTE **)&v162;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v162 = v13;
          v163 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = v163;
          v13 = *(_BYTE **)&v162;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)v17 + v15;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v171 != v159 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_238;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v162 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v163) = v14 == src;
          v95 = (char *)malloc(v11);
          if ( !v95 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v163 )
            v14 = (char *)memcpy(v95, v14, v19);
          else
            v14 = v95;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v169;
      v28 = (long double *)((char *)v169 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v163) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v163 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v163 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v66 + 1;
                  v127 = -1LL;
                  v128 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v127 = 10 * v50;
                  v76 = __CFADD__(v127, v128);
                  v50 = v127 + v128;
                  v66 = v126;
                  if ( v76 )
                  {
                    if ( v67 == v126 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v163;
                      goto LABEL_82;
                    }
                    while ( *v66++ != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v169 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v129 = v51 + 1;
                v55 = 0LL;
                if ( v52 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v133 = 10 * v55;
                    v76 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v55 = v134;
                    if ( v76 )
                    {
                      if ( v52 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v52 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v54 = (char *)v169 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v56;
                  if ( v50 >= v56 )
                    v86 = v50;
                  v76 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v163 = v87;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v176;
                  }
                  else
                  {
                    v157 = (void *)v50;
                    v158 = (char *)v55;
                    LODWORD(v160) = v68;
                    v162 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v68 = (int)v160;
                    _FST7 = v162;
                    v89 = v88;
                    v55 = (unsigned __int64)v158;
                    v50 = (unsigned __int64)v157;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v166;
                  LOBYTE(v91) = v166;
                  HIBYTE(v91) = BYTE1(v166) | 3;
                  LOWORD(v166) = v91;
                  __asm { fxam }
                  if ( (v62 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v68 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v68 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v12[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || v55 )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v158;
                        v97 = *(char **)&v162;
                        v124 = *v122;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || (v105 = v92 + 1, v55) )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v158;
                        v105 = *(char **)&v162;
                        v140 = *v138;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v12[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v152) = v90;
                          v153 = v50;
                          v154 = v92 + 2;
                          v157 = v89;
                          LODWORD(v158) = v68;
                          v160 = (_BYTE *)v55;
                          *(_QWORD *)&v162 = v55 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v162;
                          v118 = (__int64)v160;
                          v119 = *v116;
                          LOBYTE(v68) = (_BYTE)v158;
                          v89 = (char *)v157;
                          v97 = v154;
                          v50 = v153;
                          LOWORD(v90) = WORD2(v152);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v154) = v90;
                          v157 = (void *)v50;
                          v158 = v92 + 2;
                          v160 = v89;
                          LODWORD(v162) = v68;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v162);
                          v89 = v160;
                          v148 = *v147;
                          v97 = v158;
                          v50 = (unsigned __int64)v157;
                          LOWORD(v90) = (_WORD)v154;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v162 = v92 + 2;
                  v135 = v12[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v68 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v55) )
                  {
                    HIDWORD(v152) = v90;
                    v153 = v50;
                    v154 = v89;
                    v157 = (void *)v55;
                    LODWORD(v158) = v68;
                    v160 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v157;
                    v136 = (__int64)v160;
                    v145 = *v143;
                    LOBYTE(v68) = (_BYTE)v158;
                    v89 = v154;
                    v50 = v153;
                    LOWORD(v90) = WORD2(v152);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v12[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v162;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v166) = v90;
                  v98 = v97 - v89;
                  if ( v50 > v97 - v89 )
                  {
                    v99 = v50 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v68 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v68 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v163 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v19;
                  v15 = v98 + v19;
                  if ( v11 - v19 <= v98 )
                  {
                    if ( __CFADD__(v98, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v103 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v11 = v98 + v19;
                      }
LABEL_280:
                      if ( !v14 || v14 == src )
                      {
                        LOBYTE(v160) = v14 == src;
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v114 = (char *)malloc(v11);
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v160 )
                        {
                          v115 = (char *)memcpy(v114, v14, v19);
                          v89 = (char *)v163;
                          v98 = *(_QWORD *)&v162;
                          v14 = v115;
                        }
                        else
                        {
                          v14 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v104 = (char *)realloc(v14, v11);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        v14 = v104;
                      }
                    }
                  }
                  v163 = v89;
                  memcpy(&v14[v19], v89, v98);
                  if ( v163 != v176 )
                    free(v163);
                  goto LABEL_110;
                }
LABEL_375:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = (char *)v161 + 1;
        *(_BYTE *)v161 = 37;
        if ( (v31 & 1) != 0 )
        {
          v33 = (__int64)v161;
          *((_BYTE *)v161 + 1) = 39;
          v32 = (char *)(v33 + 2);
        }
        if ( (v31 & 2) != 0 )
          *v32++ = 45;
        if ( (v31 & 4) != 0 )
          *v32++ = 43;
        if ( (v31 & 8) != 0 )
          *v32++ = 32;
        if ( (v31 & 0x10) != 0 )
          *v32++ = 35;
        if ( (v31 & 0x40) != 0 )
          *v32++ = 73;
        if ( (v31 & 0x20) != 0 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        if ( (unsigned int)v163 <= 0x10 )
        {
          v38 = 1LL << (char)v163;
          if ( ((1LL << (char)v163) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v38 & 0x1000) != 0 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( (v38 & 0x600) == 0 )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v160) = 1;
            v166 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v160) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v160;
          *(&v166 + (unsigned int)v160) = *((_DWORD *)v43 + 4);
          LODWORD(v160) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v162 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v172 != v175 )
                    free(v172);
                  if ( v169 != v170 )
                    free(v169);
                  v14 = 0LL;
                  **(_DWORD **)&v162 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v162 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v162) = v14 == src;
            v94 = (char *)malloc(v11);
            v46 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v162) )
              v46 = (char *)memcpy(v94, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v158 = v46;
            v47 = __errno_location();
            v48 = v158;
            v158 = v32;
            *(_QWORD *)&v162 = v47;
            LODWORD(v154) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v165 = -1;
              **(_DWORD **)&v162 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (int)v163 )
              {
                case 1:
                  v72 = (unsigned int)*((char *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v72 = *((unsigned __int8 *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v72 = (unsigned int)*((__int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v72 = *((unsigned __int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v72 = *((unsigned int *)v169 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v150 = &v165;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v71 = &v48[v19];
                  v72 = *((_QWORD *)v169 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, &v165, v151);
LABEL_131:
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
LABEL_209:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v166, a5, v167, v72);
LABEL_210:
                    v48 = (char *)v157;
LABEL_132:
                    v74 = v165;
                    if ( v165 < 0 )
                    {
LABEL_154:
                      if ( v158[1] )
                      {
                        v158[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v80 = **(_DWORD **)&v162;
                        if ( !**(_DWORD **)&v162 )
                        {
                          v80 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v80 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        **(_DWORD **)&v162 = v80;
                        return 0LL;
                      }
LABEL_136:
                      v165 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v162 = (_DWORD)v154;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        v14 = 0LL;
                        **(_DWORD **)&v162 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v48 == src )
                          {
                            v157 = v48;
                            v93 = (char *)malloc(v11);
                            v48 = (char *)v157;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v93, v157, v19);
                            else
                              v48 = v93;
                          }
                          else
                          {
                            v157 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v157;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 11:
                  v84 = *((_QWORD *)v12 + 10);
                  v85 = &v48[v19];
                  v157 = v48;
                  a5 = *((double *)v169 + 4 * v84 + 2);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, &v165, v151);
                  }
                  else
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, &v165, a5, v152, v153);
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, v167, &v165);
                  }
                  v48 = (char *)v157;
                  goto LABEL_132;
                case 12:
                  v81 = *((_QWORD *)v12 + 10);
                  v82 = &v48[v19];
                  v157 = v48;
                  v83 = *((unsigned __int128 *)v169 + 2 * v81 + 1);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v83, v83 >> 64);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v160 != 2 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, &v165, a5, v83, v83 >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v167, v149);
                  v48 = (char *)v157;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v72 = v166;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, v150, v151);
            v74 = v165;
            v48 = (char *)v157;
            if ( v165 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v13 = (_BYTE *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v159;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v107 = v19;
    v108 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v108 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v108 )
        {
LABEL_303:
          v109 = v14 == src;
          if ( !v14 || v14 == src )
          {
            v142 = (char *)malloc(v11);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v14 = (char *)memcpy(v142, v14, v107);
            else
              v14 = v142;
          }
          else
          {
            v110 = (char *)realloc(v14, v11);
            if ( !v110 )
              goto LABEL_126;
            v14 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_303;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v14[v107] = 0;
    if ( v11 > v108 && v14 != src )
    {
      v111 = (char *)realloc(v14, v108);
      if ( v111 )
        v14 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v172 != v175 )
      free(v172);
    if ( v169 != v170 )
      free(v169);
    *v156 = v107;
    return v14;
  }
  if ( v172 != v175 )
    free(v172);
  if ( v169 != v170 )
    free(v169);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

char *__fastcall sub_407370(void *a1, size_t *a2, _BYTE *a3, __int64 a4, double a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  __int64 *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  _BYTE *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  __int64 v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // r11d
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  unsigned __int64 v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  int v80; // ebx
  __int64 v81; // rax
  char *v82; // rdi
  unsigned __int128 v83; // fst7
  __int64 v84; // rax
  char *v85; // rdi
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  __int64 v149; // [rsp-8h] [rbp-718h]
  int *v150; // [rsp+10h] [rbp-700h]
  int *v151; // [rsp+18h] [rbp-6F8h]
  __int64 v152; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v153; // [rsp+28h] [rbp-6E8h]
  char *v154; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v156; // [rsp+40h] [rbp-6D0h]
  void *v157; // [rsp+48h] [rbp-6C8h]
  char *v158; // [rsp+50h] [rbp-6C0h]
  __int64 v159; // [rsp+58h] [rbp-6B8h]
  _BYTE *v160; // [rsp+60h] [rbp-6B0h]
  __int64 *v161; // [rsp+68h] [rbp-6A8h]
  long double v162; // [rsp+70h] [rbp-6A0h]
  void *v163; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v165; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v166; // [rsp+98h] [rbp-678h]
  unsigned int v167; // [rsp+9Ch] [rbp-674h]
  char v168[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v169; // [rsp+A8h] [rbp-668h]
  _BYTE v170[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v171; // [rsp+190h] [rbp-580h] BYREF
  void *v172; // [rsp+198h] [rbp-578h]
  __int64 v173; // [rsp+1A0h] [rbp-570h]
  __int64 v174; // [rsp+1A8h] [rbp-568h]
  _BYTE v175[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v176[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v156 = a2;
  if ( (int)sub_4090B0(a3, &v171, v168) < 0 )
    return 0LL;
  if ( (int)sub_408E90(a4, v168) >= 0 )
  {
    v7 = v173 + 7;
    if ( (unsigned __int64)(v173 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v174, v7);
    v8 = v174 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v161 = &v152;
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = (__int64 *)malloc(v9);
      v161 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v156;
    v12 = (char *)v172;
    v13 = a3;
    v14 = (char *)src;
    v159 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v172;
    if ( *(_BYTE **)v172 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (void *)(v16 - v13);
    v18 = (unsigned __int64)v17 + v15;
    v19 = (size_t)v17 + v15;
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v160 = v13;
          LOBYTE(v162) = v20;
          v163 = v17;
          v21 = (char *)malloc(v11);
          v17 = v163;
          v13 = v160;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v162) )
          {
            *(_QWORD *)&v162 = v160;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = v163;
            v13 = *(_BYTE **)&v162;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v162 = v13;
          v163 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = v163;
          v13 = *(_BYTE **)&v162;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)v17 + v15;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v171 != v159 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_238;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v162 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v163) = v14 == src;
          v95 = (char *)malloc(v11);
          if ( !v95 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v163 )
            v14 = (char *)memcpy(v95, v14, v19);
          else
            v14 = v95;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v169;
      v28 = (long double *)((char *)v169 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v163) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v163 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v163 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v66 + 1;
                  v127 = -1LL;
                  v128 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v127 = 10 * v50;
                  v76 = __CFADD__(v127, v128);
                  v50 = v127 + v128;
                  v66 = v126;
                  if ( v76 )
                  {
                    if ( v67 == v126 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v163;
                      goto LABEL_82;
                    }
                    while ( *v66++ != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v169 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v129 = v51 + 1;
                v55 = 0LL;
                if ( v52 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v133 = 10 * v55;
                    v76 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v55 = v134;
                    if ( v76 )
                    {
                      if ( v52 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v52 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v54 = (char *)v169 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v56;
                  if ( v50 >= v56 )
                    v86 = v50;
                  v76 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v163 = v87;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v176;
                  }
                  else
                  {
                    v157 = (void *)v50;
                    v158 = (char *)v55;
                    LODWORD(v160) = v68;
                    v162 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v68 = (int)v160;
                    _FST7 = v162;
                    v89 = v88;
                    v55 = (unsigned __int64)v158;
                    v50 = (unsigned __int64)v157;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v166;
                  LOBYTE(v91) = v166;
                  HIBYTE(v91) = BYTE1(v166) | 3;
                  LOWORD(v166) = v91;
                  __asm { fxam }
                  if ( (v62 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v68 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v68 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v12[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || v55 )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v158;
                        v97 = *(char **)&v162;
                        v124 = *v122;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || (v105 = v92 + 1, v55) )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v158;
                        v105 = *(char **)&v162;
                        v140 = *v138;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v12[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v152) = v90;
                          v153 = v50;
                          v154 = v92 + 2;
                          v157 = v89;
                          LODWORD(v158) = v68;
                          v160 = (_BYTE *)v55;
                          *(_QWORD *)&v162 = v55 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v162;
                          v118 = (__int64)v160;
                          v119 = *v116;
                          LOBYTE(v68) = (_BYTE)v158;
                          v89 = (char *)v157;
                          v97 = v154;
                          v50 = v153;
                          LOWORD(v90) = WORD2(v152);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v154) = v90;
                          v157 = (void *)v50;
                          v158 = v92 + 2;
                          v160 = v89;
                          LODWORD(v162) = v68;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v162);
                          v89 = v160;
                          v148 = *v147;
                          v97 = v158;
                          v50 = (unsigned __int64)v157;
                          LOWORD(v90) = (_WORD)v154;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v162 = v92 + 2;
                  v135 = v12[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v68 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v55) )
                  {
                    HIDWORD(v152) = v90;
                    v153 = v50;
                    v154 = v89;
                    v157 = (void *)v55;
                    LODWORD(v158) = v68;
                    v160 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v157;
                    v136 = (__int64)v160;
                    v145 = *v143;
                    LOBYTE(v68) = (_BYTE)v158;
                    v89 = v154;
                    v50 = v153;
                    LOWORD(v90) = WORD2(v152);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v12[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v162;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v166) = v90;
                  v98 = v97 - v89;
                  if ( v50 > v97 - v89 )
                  {
                    v99 = v50 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v68 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v68 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v163 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v19;
                  v15 = v98 + v19;
                  if ( v11 - v19 <= v98 )
                  {
                    if ( __CFADD__(v98, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v103 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v11 = v98 + v19;
                      }
LABEL_280:
                      if ( !v14 || v14 == src )
                      {
                        LOBYTE(v160) = v14 == src;
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v114 = (char *)malloc(v11);
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v160 )
                        {
                          v115 = (char *)memcpy(v114, v14, v19);
                          v89 = (char *)v163;
                          v98 = *(_QWORD *)&v162;
                          v14 = v115;
                        }
                        else
                        {
                          v14 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v104 = (char *)realloc(v14, v11);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        v14 = v104;
                      }
                    }
                  }
                  v163 = v89;
                  memcpy(&v14[v19], v89, v98);
                  if ( v163 != v176 )
                    free(v163);
                  goto LABEL_110;
                }
LABEL_375:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = (char *)v161 + 1;
        *(_BYTE *)v161 = 37;
        if ( (v31 & 1) != 0 )
        {
          v33 = (__int64)v161;
          *((_BYTE *)v161 + 1) = 39;
          v32 = (char *)(v33 + 2);
        }
        if ( (v31 & 2) != 0 )
          *v32++ = 45;
        if ( (v31 & 4) != 0 )
          *v32++ = 43;
        if ( (v31 & 8) != 0 )
          *v32++ = 32;
        if ( (v31 & 0x10) != 0 )
          *v32++ = 35;
        if ( (v31 & 0x40) != 0 )
          *v32++ = 73;
        if ( (v31 & 0x20) != 0 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        if ( (unsigned int)v163 <= 0x10 )
        {
          v38 = 1LL << (char)v163;
          if ( ((1LL << (char)v163) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v38 & 0x1000) != 0 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( (v38 & 0x600) == 0 )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v160) = 1;
            v166 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v160) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v160;
          *(&v166 + (unsigned int)v160) = *((_DWORD *)v43 + 4);
          LODWORD(v160) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v162 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v172 != v175 )
                    free(v172);
                  if ( v169 != v170 )
                    free(v169);
                  v14 = 0LL;
                  **(_DWORD **)&v162 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v162 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v162) = v14 == src;
            v94 = (char *)malloc(v11);
            v46 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v162) )
              v46 = (char *)memcpy(v94, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v158 = v46;
            v47 = __errno_location();
            v48 = v158;
            v158 = v32;
            *(_QWORD *)&v162 = v47;
            LODWORD(v154) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v165 = -1;
              **(_DWORD **)&v162 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (int)v163 )
              {
                case 1:
                  v72 = (unsigned int)*((char *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v72 = *((unsigned __int8 *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v72 = (unsigned int)*((__int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v72 = *((unsigned __int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v72 = *((unsigned int *)v169 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v150 = &v165;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v71 = &v48[v19];
                  v72 = *((_QWORD *)v169 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, &v165, v151);
LABEL_131:
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
LABEL_209:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v166, a5, v167, v72);
LABEL_210:
                    v48 = (char *)v157;
LABEL_132:
                    v74 = v165;
                    if ( v165 < 0 )
                    {
LABEL_154:
                      if ( v158[1] )
                      {
                        v158[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v80 = **(_DWORD **)&v162;
                        if ( !**(_DWORD **)&v162 )
                        {
                          v80 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v80 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        **(_DWORD **)&v162 = v80;
                        return 0LL;
                      }
LABEL_136:
                      v165 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v162 = (_DWORD)v154;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        v14 = 0LL;
                        **(_DWORD **)&v162 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v48 == src )
                          {
                            v157 = v48;
                            v93 = (char *)malloc(v11);
                            v48 = (char *)v157;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v93, v157, v19);
                            else
                              v48 = v93;
                          }
                          else
                          {
                            v157 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v157;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 11:
                  v84 = *((_QWORD *)v12 + 10);
                  v85 = &v48[v19];
                  v157 = v48;
                  a5 = *((double *)v169 + 4 * v84 + 2);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, &v165, v151);
                  }
                  else
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, &v165, a5, v152, v153);
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, v167, &v165);
                  }
                  v48 = (char *)v157;
                  goto LABEL_132;
                case 12:
                  v81 = *((_QWORD *)v12 + 10);
                  v82 = &v48[v19];
                  v157 = v48;
                  v83 = *((unsigned __int128 *)v169 + 2 * v81 + 1);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v83, v83 >> 64);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v160 != 2 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, &v165, a5, v83, v83 >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v167, v149);
                  v48 = (char *)v157;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v72 = v166;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, v150, v151);
            v74 = v165;
            v48 = (char *)v157;
            if ( v165 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v13 = (_BYTE *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v159;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v107 = v19;
    v108 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v108 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v108 )
        {
LABEL_303:
          v109 = v14 == src;
          if ( !v14 || v14 == src )
          {
            v142 = (char *)malloc(v11);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v14 = (char *)memcpy(v142, v14, v107);
            else
              v14 = v142;
          }
          else
          {
            v110 = (char *)realloc(v14, v11);
            if ( !v110 )
              goto LABEL_126;
            v14 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_303;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v14[v107] = 0;
    if ( v11 > v108 && v14 != src )
    {
      v111 = (char *)realloc(v14, v108);
      if ( v111 )
        v14 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v172 != v175 )
      free(v172);
    if ( v169 != v170 )
      free(v169);
    *v156 = v107;
    return v14;
  }
  if ( v172 != v175 )
    free(v172);
  if ( v169 != v170 )
    free(v169);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

__int64 __fastcall sub_408E90(int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  _QWORD *v5; // r10
  unsigned int v7; // ecx
  _DWORD *v8; // r10
  unsigned int v9; // ecx
  _DWORD *v10; // r10
  unsigned int v11; // ecx
  _DWORD *v12; // r10
  unsigned int v13; // ecx
  _QWORD *v14; // r10
  long double *v15; // rcx
  unsigned int v16; // ecx
  void **v17; // r10
  void *v18; // rcx
  unsigned int v19; // ecx
  const char **v20; // r10
  const char *v21; // rcx

  v2 = a2[1];
  if ( *a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
        case 1:
        case 2:
          v11 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v12 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*((_QWORD *)a1 + 2) + v11);
            *a1 = v11 + 8;
          }
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 3:
        case 4:
          v9 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v10 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + v9);
            *a1 = v9 + 8;
          }
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v8 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*((_QWORD *)a1 + 2) + v7);
            *a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
          v4 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v5 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*((_QWORD *)a1 + 2) + v4);
            *a1 = v4 + 8;
          }
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 0xB:
          v13 = a1[1];
          if ( v13 > 0xAF )
          {
            v14 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*((_QWORD *)a1 + 2) + v13);
            a1[1] = v13 + 16;
          }
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *((_QWORD *)a1 + 1) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0xF:
          v19 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v20 = (const char **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*((_QWORD *)a1 + 2) + v19);
            *a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *(_QWORD *)(v2 + 16) = v21;
          goto LABEL_7;
        case 0x10:
          v16 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v17 = (void **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*((_QWORD *)a1 + 2) + v16);
            *a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_40BE40;
          *(_QWORD *)(v2 + 16) = v18;
LABEL_7:
          ++v3;
          v2 += 32LL;
          if ( *a2 <= v3 )
            return 0LL;
          continue;
        default:
          return 0xFFFFFFFFLL;
      }
    }
  }
  return 0LL;
}

__int64 __fastcall sub_4090B0(char *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r13
  char *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // r14
  char *v12; // r12
  char v13; // bl
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rbx
  _DWORD *v19; // r13
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  _BYTE *v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  _DWORD *v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // rax
  int *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // r12
  _QWORD *v35; // rax
  _BYTE *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  _DWORD *v39; // rax
  _DWORD *v40; // rsi
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _BYTE *v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  char *v47; // rdi
  bool v48; // cf
  unsigned __int64 v49; // rdx
  unsigned __int8 v50; // bl
  _QWORD *v51; // rdi
  unsigned __int64 v52; // r9
  _DWORD *v53; // rax
  char *i; // rcx
  char *v55; // rdx
  unsigned __int64 v56; // rax
  const void *v57; // rsi
  _QWORD *v58; // rdi
  unsigned __int64 v59; // r9
  _DWORD *v60; // rax
  _DWORD *v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  char *v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int8 v67; // si
  _BYTE *v68; // rdx
  unsigned __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rax
  _BYTE *v72; // rdi
  unsigned __int64 v73; // rdx
  unsigned __int8 v74; // bl
  _DWORD *v75; // rax
  _DWORD *src; // [rsp+8h] [rbp-80h]
  _QWORD *srca; // [rsp+8h] [rbp-80h]
  _QWORD *srcb; // [rsp+8h] [rbp-80h]
  unsigned __int64 v79; // [rsp+10h] [rbp-78h]
  unsigned __int64 v80; // [rsp+18h] [rbp-70h]
  unsigned __int64 v81; // [rsp+20h] [rbp-68h]
  _QWORD *v82; // [rsp+28h] [rbp-60h]
  unsigned __int64 v83; // [rsp+30h] [rbp-58h]
  char *v84; // [rsp+30h] [rbp-58h]
  unsigned __int64 v85; // [rsp+30h] [rbp-58h]
  int v86; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+30h] [rbp-58h]
  _BYTE *v88; // [rsp+30h] [rbp-58h]
  char *v89; // [rsp+30h] [rbp-58h]
  _BYTE *v90; // [rsp+30h] [rbp-58h]
  _QWORD *v91; // [rsp+38h] [rbp-50h]
  __int64 v92; // [rsp+38h] [rbp-50h]
  _QWORD *v93; // [rsp+38h] [rbp-50h]
  __int64 v94; // [rsp+38h] [rbp-50h]
  __int64 v95; // [rsp+38h] [rbp-50h]
  __int64 v96; // [rsp+38h] [rbp-50h]
  __int64 v97; // [rsp+38h] [rbp-50h]
  __int64 v98; // [rsp+38h] [rbp-50h]
  unsigned __int64 v99; // [rsp+40h] [rbp-48h]
  unsigned __int64 v100; // [rsp+40h] [rbp-48h]
  unsigned __int64 v101; // [rsp+40h] [rbp-48h]
  unsigned __int64 v102; // [rsp+40h] [rbp-48h]
  unsigned __int64 v103; // [rsp+40h] [rbp-48h]
  unsigned __int64 v104; // [rsp+40h] [rbp-48h]
  _QWORD *v105; // [rsp+48h] [rbp-40h]
  _QWORD *v106; // [rsp+48h] [rbp-40h]
  _QWORD *v107; // [rsp+48h] [rbp-40h]
  _QWORD *v108; // [rsp+48h] [rbp-40h]
  _QWORD *v109; // [rsp+48h] [rbp-40h]
  _QWORD *v110; // [rsp+48h] [rbp-40h]

  v3 = a2 + 4;
  v4 = a2;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *a2 = 0LL;
  a2[1] = a2 + 4;
  v82 = a2 + 4;
  *a3 = 0LL;
  src = a3 + 2;
  a3[1] = (unsigned __int64)(a3 + 2);
  v80 = 0LL;
  v79 = 0LL;
  v81 = 0LL;
  while ( 1 )
  {
    if ( !*a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v79;
      v4[3] = v80;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (char *)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *((_DWORD *)v12 + 4) = 0;
  *((_QWORD *)v12 + 3) = 0LL;
  *((_QWORD *)v12 + 4) = 0LL;
  *((_QWORD *)v12 + 5) = -1LL;
  *((_QWORD *)v12 + 6) = 0LL;
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = -1LL;
  *((_QWORD *)v12 + 10) = -1LL;
  v13 = a1[1];
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_16;
  v36 = a1 + 1;
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_16;
  }
  v62 = 0LL;
  do
  {
    v63 = -1LL;
    v64 = v13 - 48;
    if ( v62 <= 0x1999999999999999LL )
      v63 = 10 * v62;
    v65 = v9;
    while ( 1 )
    {
      v13 = v9[1];
      v48 = __CFADD__(v63, v64);
      v66 = v63 + v64;
      v62 = v66;
      ++v9;
      v67 = v13 - 48;
      if ( !v48 )
        break;
      if ( v67 > 9u )
        goto LABEL_130;
      v63 = -1LL;
      v65 = v9;
      v64 = v13 - 48;
    }
  }
  while ( v67 <= 9u );
  v11 = v66 - 1;
  if ( v66 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_130;
  v9 = v65 + 2;
  v13 = v65[2];
  while ( 1 )
  {
LABEL_16:
    v14 = v9 + 1;
    switch ( v13 )
    {
      case '\'':
        *((_DWORD *)v12 + 4) |= 1u;
        goto LABEL_15;
      case '-':
        *((_DWORD *)v12 + 4) |= 2u;
        goto LABEL_15;
      case '+':
        *((_DWORD *)v12 + 4) |= 4u;
        goto LABEL_15;
      case ' ':
        *((_DWORD *)v12 + 4) |= 8u;
        goto LABEL_15;
      case '#':
        *((_DWORD *)v12 + 4) |= 0x10u;
        goto LABEL_15;
    }
    if ( v13 != 48 )
      break;
    *((_DWORD *)v12 + 4) |= 0x20u;
LABEL_15:
    v13 = *v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *((_DWORD *)v12 + 4) |= 0x40u;
    goto LABEL_15;
  }
  if ( v13 == 42 )
  {
    v16 = 1LL;
    *((_QWORD *)v12 + 3) = v9;
    *((_QWORD *)v12 + 4) = v14;
    if ( v79 )
      v16 = v79;
    v79 = v16;
    v17 = v9[1];
    if ( (unsigned __int8)(v9[1] - 48) > 9u )
      goto LABEL_39;
    v43 = v9 + 1;
    do
      ++v43;
    while ( (unsigned __int8)(*v43 - 48) <= 9u );
    if ( *v43 == 36 )
    {
      v44 = 0LL;
      do
      {
        v45 = -1LL;
        v46 = v17 - 48;
        if ( v44 <= 0x1999999999999999LL )
          v45 = 10 * v44;
        v47 = v14;
        while ( 1 )
        {
          v48 = __CFADD__(v46, v45);
          v49 = v46 + v45;
          v17 = v14[1];
          v44 = v49;
          ++v14;
          v50 = v17 - 48;
          if ( !v48 )
            break;
          if ( v50 > 9u )
            goto LABEL_130;
          v45 = -1LL;
          v47 = v14;
          v46 = v17 - 48;
        }
      }
      while ( v50 <= 9u );
      v18 = v49 - 1;
      if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_130;
      *((_QWORD *)v12 + 5) = v18;
      v14 = v47 + 2;
    }
    else
    {
LABEL_39:
      v18 = *((_QWORD *)v12 + 5);
      if ( v18 == -1LL )
      {
        *((_QWORD *)v12 + 5) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v18 = v81++;
      }
    }
    v19 = (_DWORD *)a3[1];
    if ( v6 > v18 )
    {
      v20 = *a3;
LABEL_42:
      if ( v20 <= v18 )
      {
        do
        {
          ++v20;
          v19[8 * v20 - 8] = 0;
        }
        while ( v20 <= v18 );
        *a3 = v20;
      }
      v21 = &v19[8 * v18];
      if ( *v21 )
      {
        if ( *v21 == 5 )
        {
          v13 = *v14;
          v9 = v14++;
          goto LABEL_25;
        }
        goto LABEL_131;
      }
      *v21 = 5;
      v13 = *v14;
      v9 = v14++;
      if ( v13 != 46 )
        goto LABEL_26;
LABEL_47:
      v22 = v9[1] == 42;
      *((_QWORD *)v12 + 6) = v9;
      if ( !v22 )
      {
        if ( (unsigned __int8)(v9[1] - 48) > 9u )
        {
          v9 = v14;
          v37 = 1LL;
        }
        else
        {
          do
            ++v14;
          while ( (unsigned __int8)(*v14 - 48) <= 9u );
          v37 = v14 - v9;
          v9 = v14;
        }
        *((_QWORD *)v12 + 7) = v14;
        v13 = *v14;
        if ( v80 >= v37 )
          v37 = v80;
        v80 = v37;
        goto LABEL_26;
      }
      v23 = 2LL;
      v24 = v9 + 2;
      *((_QWORD *)v12 + 7) = v9 + 2;
      if ( v80 >= 2 )
        v23 = v80;
      v80 = v23;
      v25 = v9[2];
      if ( (unsigned __int8)(v9[2] - 48) > 9u )
        goto LABEL_51;
      v68 = v9 + 2;
      do
        ++v68;
      while ( (unsigned __int8)(*v68 - 48) <= 9u );
      if ( *v68 == 36 )
      {
        v69 = 0LL;
        do
        {
          v70 = -1LL;
          v71 = v25 - 48;
          if ( v69 <= 0x1999999999999999LL )
            v70 = 10 * v69;
          v72 = v24;
          while ( 1 )
          {
            v48 = __CFADD__(v71, v70);
            v73 = v71 + v70;
            v25 = (char)*++v24;
            v69 = v73;
            v74 = v25 - 48;
            if ( !v48 )
              break;
            if ( v74 > 9u )
              goto LABEL_130;
            v70 = -1LL;
            v72 = v24;
            v71 = v25 - 48;
          }
        }
        while ( v74 <= 9u );
        v26 = v73 - 1;
        if ( v73 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *((_QWORD *)v12 + 8) = v26;
          v24 = v72 + 2;
LABEL_52:
          v19 = (_DWORD *)a3[1];
          if ( v6 > v26 )
          {
            v27 = *a3;
            goto LABEL_54;
          }
          v59 = 2 * v6;
          if ( v59 <= v26 )
            v59 = v26 + 1;
          if ( v59 <= 0x7FFFFFFFFFFFFFFLL )
          {
            v108 = v4;
            v102 = v59;
            v96 = v7;
            v88 = v24;
            if ( src == v19 )
            {
              v75 = malloc(32 * v59);
              v24 = v88;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v75 )
                goto LABEL_162;
              v27 = *a3;
              v40 = src;
              v19 = v75;
            }
            else
            {
              v60 = realloc(v19, 32 * v59);
              v40 = (_DWORD *)a3[1];
              v24 = v88;
              v19 = v60;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v60 )
                goto LABEL_160;
              v27 = *a3;
              if ( src != v40 )
                goto LABEL_171;
            }
            v110 = v4;
            v104 = v6;
            v98 = v7;
            v90 = v24;
            memcpy(v19, v40, 32 * v27);
            v27 = *a3;
            v4 = v110;
            v6 = v104;
            v7 = v98;
            v24 = v90;
LABEL_171:
            a3[1] = (unsigned __int64)v19;
LABEL_54:
            if ( v27 <= v26 )
            {
              do
              {
                ++v27;
                v19[8 * v27 - 8] = 0;
              }
              while ( v27 <= v26 );
              *a3 = v27;
            }
            v28 = &v19[8 * v26];
            if ( !*v28 )
            {
              *v28 = 5;
              v9 = v24;
              v13 = *v24;
              goto LABEL_26;
            }
            if ( *v28 == 5 )
            {
              v13 = *v24;
              v9 = v24;
              goto LABEL_26;
            }
            goto LABEL_131;
          }
LABEL_159:
          v40 = v19;
          goto LABEL_160;
        }
      }
      else
      {
LABEL_51:
        v26 = *((_QWORD *)v12 + 8);
        if ( v26 != -1LL )
          goto LABEL_52;
        *((_QWORD *)v12 + 8) = v81;
        if ( v81 != -1LL )
        {
          v26 = v81++;
          goto LABEL_52;
        }
      }
LABEL_130:
      v19 = (_DWORD *)a3[1];
LABEL_131:
      if ( src != v19 )
      {
        srca = v4;
        free(v19);
        v4 = srca;
      }
      v51 = (_QWORD *)v4[1];
      if ( v82 != v51 )
        free(v51);
      *__errno_location() = 22;
      return 0xFFFFFFFFLL;
    }
    v38 = 2 * v6;
    if ( v38 <= v18 )
      v38 = v18 + 1;
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_159;
    v105 = v4;
    v99 = v38;
    v92 = v7;
    v84 = v14;
    if ( src == v19 )
    {
      v61 = malloc(32 * v38);
      v14 = v84;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v61 )
        goto LABEL_162;
      v20 = *a3;
      v40 = src;
      v19 = v61;
    }
    else
    {
      v39 = realloc(v19, 32 * v38);
      v40 = (_DWORD *)a3[1];
      v14 = v84;
      v19 = v39;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v39 )
        goto LABEL_160;
      v20 = *a3;
      if ( src != v40 )
        goto LABEL_93;
    }
    v109 = v4;
    v103 = v6;
    v97 = v7;
    v89 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *a3;
    v4 = v109;
    v6 = v103;
    v7 = v97;
    v14 = v89;
LABEL_93:
    a3[1] = (unsigned __int64)v19;
    goto LABEL_42;
  }
  if ( (unsigned __int8)(v13 - 48) <= 9u )
  {
    *((_QWORD *)v12 + 3) = v9;
    if ( (unsigned __int8)(*v9 - 48) <= 9u )
    {
      for ( i = v9; ; ++i )
      {
        v55 = i + 1;
        if ( (unsigned __int8)(i[1] - 48) > 9u )
          break;
      }
      v14 = i + 2;
      v56 = v55 - v9;
      v9 = v55;
      if ( v79 >= v56 )
        v56 = v79;
      v79 = v56;
    }
    *((_QWORD *)v12 + 4) = v9;
    v13 = *v9;
  }
LABEL_25:
  if ( v13 == 46 )
    goto LABEL_47;
LABEL_26:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_33;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_33;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_33:
      v13 = *v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case '%':
      goto LABEL_70;
    case 'A':
    case 'E':
    case 'F':
    case 'G':
    case 'a':
    case 'e':
    case 'f':
    case 'g':
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      goto LABEL_62;
    case 'C':
      v29 = 14;
      v13 = 99;
      goto LABEL_62;
    case 'S':
      v29 = 16;
      v13 = 115;
      goto LABEL_62;
    case 'X':
    case 'o':
    case 'u':
    case 'x':
      v29 = 10;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 6 : 4;
        }
      }
      goto LABEL_62;
    case 'c':
      v29 = (v15 > 7) + 13;
      goto LABEL_62;
    case 'd':
    case 'i':
      v29 = 9;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 5 : 3;
        }
      }
      goto LABEL_62;
    case 'n':
      v29 = 22;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( (v15 & 2) == 0 )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      goto LABEL_62;
    case 'p':
      v29 = 17;
      goto LABEL_62;
    case 's':
      v29 = (v15 > 7) + 15;
LABEL_62:
      if ( v11 == -1LL )
      {
        *((_QWORD *)v12 + 10) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v11 = v81++;
      }
      else
      {
        *((_QWORD *)v12 + 10) = v11;
      }
      v19 = (_DWORD *)a3[1];
      if ( v6 > v11 )
        goto LABEL_65;
      v52 = 2 * v6;
      if ( v52 <= v11 )
        v52 = v11 + 1;
      if ( v52 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_159;
      v106 = v4;
      v100 = v52;
      v94 = v7;
      v86 = v29;
      if ( src == v19 )
      {
        v53 = malloc(32 * v52);
        v29 = v86;
        v7 = v94;
        v6 = v100;
        v4 = v106;
        if ( !v53 )
          goto LABEL_162;
        goto LABEL_158;
      }
      v53 = realloc(v19, 32 * v52);
      v29 = v86;
      v7 = v94;
      v19 = v53;
      v6 = v100;
      v4 = v106;
      if ( !v53 )
        goto LABEL_210;
      if ( src == (_DWORD *)a3[1] )
      {
        v19 = src;
LABEL_158:
        v57 = v19;
        v107 = v4;
        v101 = v6;
        v19 = v53;
        v95 = v7;
        v87 = v29;
        memcpy(v53, v57, 32 * *a3);
        v4 = v107;
        v29 = v87;
        v6 = v101;
        v7 = v95;
      }
      a3[1] = (unsigned __int64)v19;
LABEL_65:
      v30 = *a3;
      if ( *a3 <= v11 )
      {
        do
        {
          ++v30;
          v19[8 * v30 - 8] = 0;
        }
        while ( v30 <= v11 );
        *a3 = v30;
      }
      v31 = &v19[8 * v11];
      if ( *v31 )
      {
        if ( *v31 != v29 )
          goto LABEL_131;
      }
      else
      {
        *v31 = v29;
      }
LABEL_70:
      v12[72] = v13;
      v32 = *v4;
      *((_QWORD *)v12 + 1) = v9;
      v8 = v32 + 1;
      *v4 = v32 + 1;
      if ( v7 > (unsigned __int64)(v32 + 1) )
      {
        v3 = (_QWORD *)v4[1];
        goto LABEL_3;
      }
      if ( v7 >= 0 )
      {
        v33 = 2 * v7;
        if ( (unsigned __int64)(2 * v7) <= 0x2E8BA2E8BA2E8BALL )
        {
          v34 = (_QWORD *)v4[1];
          v91 = v4;
          v83 = v6;
          if ( v82 == v34 )
          {
            v41 = malloc(176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v41;
            if ( !v41 )
            {
              v40 = (_DWORD *)a3[1];
              if ( src != v40 )
                goto LABEL_161;
              goto LABEL_164;
            }
          }
          else
          {
            v35 = realloc(v34, 176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v35;
            if ( !v35 )
              goto LABEL_210;
            v34 = (_QWORD *)v91[1];
            v8 = *v91;
            if ( v82 != v34 )
              goto LABEL_77;
          }
          v93 = v4;
          v85 = v6;
          v42 = memcpy(v3, v34, 88 * v8);
          v4 = v93;
          v6 = v85;
          v3 = v42;
          v8 = *v93;
LABEL_77:
          v4[1] = v3;
          v7 = v33;
          goto LABEL_3;
        }
      }
LABEL_210:
      v40 = (_DWORD *)a3[1];
LABEL_160:
      if ( src != v40 )
      {
LABEL_161:
        srcb = v4;
        free(v40);
        v4 = srcb;
      }
LABEL_162:
      v58 = (_QWORD *)v4[1];
      if ( v82 != v58 )
        free(v58);
LABEL_164:
      *__errno_location() = 12;
      result = 0xFFFFFFFFLL;
      break;
    default:
      goto LABEL_130;
  }
  return result;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409E30(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_60E268 )
    v1 = (void *)qword_60E268;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409E48(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_60DE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
