signed __int64 __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // ebp@1
  char **v4; // rbx@1
  char *v5; // rdi@1
  __pid_t v6; // eax@3
  char *v7; // r12@4
  int *v8; // rax@4
  void (*v9)(void); // r14@5
  int v10; // er13@5
  __int64 (__fastcall *v11)(); // r12@6
  const char *v12; // r15@6
  int v13; // eax@7
  __int64 v14; // rax@15
  const char *v15; // rax@16
  char *v16; // ST30_8@24
  char *v17; // rax@24
  char *v18; // ST38_8@26
  const char *v19; // ST30_8@26
  int *v20; // rax@26
  unsigned __int64 v22; // rax@30
  __int64 v23; // rcx@30
  __int64 v24; // rax@34
  __int64 v25; // rax@37
  signed __int64 v26; // rcx@39
  char *v27; // rdi@39
  __int64 v28; // r12@39
  bool v29; // zf@41
  __int64 v30; // rax@48
  unsigned __int64 v31; // rax@50
  int *v32; // rax@55
  const unsigned __int16 **v33; // rax@56
  char *v34; // r9@56
  int *v35; // r8@56
  const char *v36; // rdi@57
  unsigned __int64 v37; // rax@58
  char *v38; // r9@58
  const char *v39; // rsi@59
  char *v40; // rax@60
  char *v41; // ST38_8@62
  char *v42; // ST30_8@62
  char *v43; // rax@62
  char *v44; // ST30_8@31
  unsigned __int64 v45; // ST38_8@31
  char *v46; // rax@31
  char *v47; // ST30_8@68
  char *v48; // rax@68
  char *v49; // rsi@77
  signed __int64 v50; // rdi@77
  char *v51; // rax@84
  __int64 v52; // rax@84
  __int64 *v53; // rsi@84
  int *v54; // rdi@84
  __int64 v55; // rdx@84
  __int64 v56; // rcx@84
  __int64 *v57; // r8@84
  __int64 v58; // rax@85
  __int64 v59; // r8@85
  __int64 v60; // rdx@85
  __int64 *v61; // rsi@85
  __int64 v62; // r15@85
  int *v63; // rdi@87
  signed __int64 v64; // rcx@87
  __int64 v65; // r13@92
  __int64 v66; // rcx@93
  char *v67; // rdx@93
  __int64 *v68; // ST18_8@95
  int *v69; // ST10_8@95
  __int64 v70; // rax@114
  __int64 v71; // r13@114
  char *v72; // rax@114
  __int64 v73; // r13@114
  char *v74; // rax@114
  __int64 v75; // r13@114
  char *v76; // rax@114
  FILE *v77; // rdi@114
  char *v78; // rsi@114
  __int64 v79; // r13@114
  __int64 v80; // rax@114
  __int64 v81; // r14@114
  char *v82; // rax@114
  __int64 v83; // r13@114
  char *v84; // rax@114
  char *v85; // r13@116
  _IO_FILE *v86; // rax@117
  __int64 v87; // rax@118
  __int64 v88; // r14@118
  char *v89; // r13@118
  char *v90; // r13@76
  int *v91; // rax@76
  char *v92; // r13@74
  int *v93; // rax@74
  char *v94; // rax@71
  unsigned __int64 v95; // rax@121
  char *v96; // rax@123
  signed int v97; // [sp+8h] [bp-110h]@6
  signed int v98; // [sp+Ch] [bp-10Ch]@6
  char *format; // [sp+10h] [bp-108h]@25
  char *formata; // [sp+10h] [bp-108h]@55
  int *v101; // [sp+18h] [bp-100h]@56
  int v102; // [sp+2Ch] [bp-ECh]@7
  int v103; // [sp+33h] [bp-E5h]@1
  char v104; // [sp+37h] [bp-E1h]@1
  int *v105; // [sp+38h] [bp-E0h]@82
  char *endptr; // [sp+40h] [bp-D8h]@58
  sigset_t set; // [sp+48h] [bp-D0h]@73
  int v108; // [sp+C8h] [bp-50h]@73

  v3 = a1;
  v4 = a2;
  v5 = *a2;
  v103 = 1869112165;
  v104 = 0;
  if ( !v5 )
    v5 = "xargs";
  sub_4075C0(v5, a2, a3);
  sub_4053A0();
  v6 = getpid();
  dword_6123C4 = 0;
  dword_6123D0 = v6;
  setlocale(6, "");
  bindtextdomain(
    "findutils",
    "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("findutils");
  if ( sub_40BC80(
         sub_4058E0,
         "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale")
    || sub_40BC80(
         sub_403EC0,
         "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale") )
  {
    v7 = dcgettext(0LL, "The atexit library function failed", 5);
    v8 = __errno_location();
    error(1, *v8, v7);
  }
  v9 = (void (*)(void))sub_402F00;
  v10 = sub_404EA0(&dword_612420, 2048LL);
  if ( (unsigned int)(v10 - 1) > 1 )
  {
    v30 = sysconf(0);
    if ( v30 > 0 )
    {
      if ( v30 <= 2048 )
        __assert_fail("val > XARGS_POSIX_HEADROOM", "xargs.c", 0x1D8u, "main");
      v31 = v30 - 2048;
      if ( v31 > qword_612438 )
        v31 = qword_612438;
      qword_612438 = v31;
    }
    if ( (unsigned __int64)qword_612438 <= 0x7FF )
      __assert_fail("bc_ctl.arg_max >= LINE_MAX", "xargs.c", 0x1F4u, "main");
    v9 = (void (*)(void))nullsub_2;
    qword_612460 = (__int64)sub_404120;
    sub_404F80(&dword_612420);
  }
  v98 = 1;
  v11 = (__int64 (__fastcall *)())sub_4038B0;
  v12 = "-";
  v97 = 0;
  while ( 1 )
  {
    v13 = sub_40B0F0((unsigned int)v3, v4, "+0a:E:e::i::I:l::L:n:prs:txP:d:", off_40D6E0, &v102);
    if ( v13 == -1 )
      break;
    switch ( v13 )
    {
      case 112:
        byte_6123C1 = 1;
        goto LABEL_12;
      case 116:
LABEL_12:
        byte_6123C2 = 1;
        continue;
      case 83:
        v97 = 1;
        continue;
      case 80:
        dword_6122B0 = sub_403570(name, 80LL, 0LL, 0x7FFFFFFFLL, 1LL);
        continue;
      case 76:
        LODWORD(v14) = sub_403570(name, 76LL, 1LL, -1LL, 1LL);
        qword_612470 = 0LL;
        qword_612468 = v14;
        qword_612450 = 0LL;
        continue;
      case 73:
      case 105:
        v15 = name;
        if ( !name )
          v15 = "{}";
        qword_612450 = (__int64)v15;
        qword_612470 = 0LL;
        qword_612468 = 0LL;
        continue;
      case 69:
      case 101:
        if ( name && *name )
          s1 = name;
        else
          s1 = 0LL;
        continue;
      case 48:
        byte_6123C0 = 0;
        v11 = sub_403790;
        continue;
      case 128:
        if ( strchr(name, 61) )
        {
          v16 = (char *)off_40D6E0[4 * v102];
          v17 = dcgettext(0LL, "option --%s may not be set to a value which includes `='", 5);
          error(1, 0, v17, v16);
        }
        qword_6123B8 = (__int64)name;
        format = name;
        if ( unsetenv(name) )
        {
          v18 = format;
          v19 = dcgettext(0LL, "failed to unset environment variable %s", 5);
          v20 = __errno_location();
          error(1, *v20, v19, v18);
        }
        continue;
      case 120:
        dword_612420 = 1;
        continue;
      case 118:
        sub_404580("xargs");
        return 0LL;
      case 115:
        v9();
        LODWORD(v22) = sub_403570(name, 115LL, 1LL, qword_612428, 0LL);
        v23 = v22;
        if ( qword_612428 < v22 )
        {
          v44 = (char *)qword_612428;
          v45 = v22;
          v46 = dcgettext(0LL, "warning: value %ld for -s option is too large, using %ld instead", 5);
          error(0, 0, v46, v45, v44);
          v23 = qword_612428;
        }
        qword_612438 = v23;
        continue;
      case 114:
        v98 = 0;
        continue;
      case 110:
        LODWORD(v24) = sub_403570(name, 110LL, 1LL, -1LL, 1LL);
        qword_612468 = 0LL;
        qword_612470 = v24;
        if ( v24 == 1 && qword_612450 )
          qword_612470 = 0LL;
        else
          qword_612450 = 0LL;
        continue;
      case 108:
        if ( name )
        {
          LODWORD(v25) = sub_403570(name, 108LL, 1LL, -1LL, 1LL);
          qword_612468 = v25;
        }
        else
        {
          qword_612468 = 1LL;
        }
        qword_612470 = 0LL;
        qword_612450 = 0LL;
        continue;
      case 100:
        v26 = -1LL;
        v27 = name;
        LOBYTE(v28) = *name;
        do
        {
          if ( !v26 )
            break;
          v29 = *v27++ == 0;
          --v26;
        }
        while ( !v29 );
        if ( v26 == -3 )
          goto LABEL_63;
        if ( (_BYTE)v28 != 92 )
        {
          LOBYTE(v28) = 0;
          v47 = name;
          v48 = dcgettext(
                  0LL,
                  "Invalid input delimiter specification %s: the delimiter must be either a single character or an escape"
                  " sequence starting with \\.",
                  5);
          error(1, 0, v48, v47);
          goto LABEL_63;
        }
        break;
      case 97:
        v12 = name;
        continue;
      case 104:
        sub_4032B0(stdout);
        return 0LL;
      default:
        sub_4032B0(stderr);
        return 1LL;
    }
    v28 = (unsigned __int8)name[1];
    switch ( (_BYTE)v28 )
    {
      default:
        formata = name;
        v32 = __errno_location();
        if ( (_BYTE)v28 == 120 )
        {
          *v32 = 0;
          endptr = 0LL;
          v95 = strtoul(formata + 2, &endptr, 16);
          v38 = formata;
          LOBYTE(v28) = v95;
          if ( v95 > 0xFF )
          {
            v39 = "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lx.";
            goto LABEL_60;
          }
        }
        else
        {
          v101 = v32;
          v33 = __ctype_b_loc();
          v34 = formata;
          v35 = v101;
          if ( HIBYTE((*v33)[v28]) & 8 )
          {
            v36 = formata + 1;
          }
          else
          {
            v96 = dcgettext(0LL, "Invalid escape sequence %s in input delimiter specification.", 5);
            error(1, 0, v96, formata);
            v36 = 0LL;
            v34 = formata;
            v35 = v101;
          }
          formata = v34;
          *v35 = 0;
          endptr = 0LL;
          v37 = strtoul(v36, &endptr, 8);
          v38 = formata;
          LOBYTE(v28) = v37;
          if ( v37 > 0xFF )
          {
            v39 = "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lo.";
LABEL_60:
            v40 = dcgettext(0LL, v39, 5);
            error(1, 0, v40, formata, 255LL);
            v38 = formata;
            goto LABEL_61;
          }
        }
LABEL_61:
        if ( *endptr )
        {
          v41 = endptr;
          v42 = v38;
          v43 = dcgettext(
                  0LL,
                  "Invalid escape sequence %s in input delimiter specification; trailing characters %s not recognised.",
                  5);
          error(1, 0, v43, v42, v41);
        }
LABEL_63:
        byte_6123C0 = v28;
        v11 = sub_403790;
        break;
      case 0x5C:
        goto LABEL_63;
      case 0x61:
        LOBYTE(v28) = 7;
        goto LABEL_63;
      case 0x72:
        LOBYTE(v28) = 13;
        goto LABEL_63;
      case 0x6E:
        LOBYTE(v28) = 10;
        goto LABEL_63;
      case 0x66:
        LOBYTE(v28) = 12;
        goto LABEL_63;
      case 0x62:
        LOBYTE(v28) = 8;
        goto LABEL_63;
      case 0x76:
        LOBYTE(v28) = 11;
        goto LABEL_63;
      case 0x74:
        LOBYTE(v28) = 9;
        goto LABEL_63;
    }
  }
  if ( s1 && v11 == sub_403790 )
  {
    v94 = dcgettext(0LL, "warning: the -E option has no effect if -0 or -d is used.\n", 5);
    error(0, 0, v94);
  }
  v9();
  if ( v10 )
    __assert_fail("BC_INIT_OK == bcstatus", "xargs.c", 0x2A2u, "main");
  endptr = (char *)sub_402ED0;
  sigemptyset(&set);
  v108 = 0;
  if ( sigaction(10, (const struct sigaction *)&endptr, 0LL) )
  {
    v92 = dcgettext(0LL, "Cannot set SIGUSR1 signal handler", 5);
    v93 = __errno_location();
    error(0, *v93, v92);
  }
  endptr = (char *)sub_403720;
  sigemptyset(&set);
  v108 = 0;
  if ( sigaction(12, (const struct sigaction *)&endptr, 0LL) )
  {
    v90 = dcgettext(0LL, "Cannot set SIGUSR2 signal handler", 5);
    v91 = __errno_location();
    error(0, *v91, v90);
  }
  v49 = "-";
  v50 = (signed __int64)v12;
  if ( !strcmp(v12, "-") )
  {
    fp = (_IO_FILE *)stdin;
  }
  else
  {
    dword_6124D8 = 1;
    v50 = (signed __int64)v12;
    LODWORD(v86) = sub_4036C0(v12, "-");
    fp = v86;
    if ( !v86 )
    {
      LODWORD(v87) = sub_408C90(0LL, 8LL, v12);
      v88 = v87;
      v89 = dcgettext(0LL, "Cannot open input file %s", 5);
      v50 = 1LL;
      v49 = (char *)(unsigned int)*__errno_location();
      error(1, (int)v49, v89, v88);
    }
  }
  if ( qword_612450 || qword_612468 )
    dword_612420 = 1;
  if ( dword_61233C == v3 )
  {
    v4 = (char **)&v105;
    v3 = 1;
    dword_61233C = 0;
    v105 = &v103;
  }
  if ( v97 )
  {
    LODWORD(v70) = sub_404E60(v50, v49);
    v71 = v70;
    v72 = dcgettext(0LL, "Your environment variables take up %lu bytes\n", 5);
    fprintf(stderr, v72, v71);
    v73 = qword_612428;
    v74 = dcgettext(0LL, "POSIX upper limit on argument length (this system): %lu\n", 5);
    fprintf(stderr, v74, v73);
    v75 = qword_612430;
    v76 = dcgettext(0LL, "POSIX smallest allowable upper limit on argument length (all systems): %lu\n", 5);
    v77 = stderr;
    v78 = v76;
    fprintf(stderr, v76, v75);
    v79 = qword_612428;
    LODWORD(v80) = sub_404E60(v77, v78);
    v81 = v80;
    v82 = dcgettext(0LL, "Maximum length of command we could actually use: %lu\n", 5);
    fprintf(stderr, v82, v79 - v81);
    v83 = qword_612438;
    v84 = dcgettext(0LL, "Size of command buffer we are actually using: %lu\n", 5);
    fprintf(stderr, v84, v83);
    v49 = dcgettext(0LL, "Maximum parallelism (--max-procs must be no greater): %lu\n", 5);
    fprintf(stderr, v49, 0x7FFFFFFFLL);
    if ( isatty(0) )
    {
      v49 = dcgettext(
              0LL,
              "\n"
              "Execution of xargs will continue now, and it will try to read its input and run commands; if this is not w"
              "hat you wanted to happen, please type the end-of-file keystroke.\n",
              5);
      fprintf(stderr, v49);
      if ( v98 )
      {
        v85 = v4[dword_61233C];
        v49 = dcgettext(
                0LL,
                "Warning: %s will be run at least once.  If you do not want that to happen, then press the interrupt keystroke.\n",
                5);
        fprintf(stderr, v49, v85);
      }
    }
  }
  LODWORD(v51) = sub_409680(qword_612438 + 1, v49);
  qword_6124E0 = v51;
  LODWORD(v52) = sub_409680(qword_612438 + 1, v49);
  v53 = 0LL;
  v54 = (int *)17;
  qword_612498 = v52;
  signal(17, 0LL);
  if ( qword_612450 )
  {
    LODWORD(v58) = sub_409680(8LL * v3, 0LL);
    v60 = dword_61233C;
    v61 = (__int64 *)-1;
    v62 = v58;
    if ( v3 > dword_61233C )
    {
      do
      {
        *(_QWORD *)(v58 + 8 * v60) = strlen(v4[v60]);
        ++v60;
      }
      while ( v3 > (signed int)v60 );
    }
    v63 = (int *)qword_612450;
    v64 = -1LL;
    do
    {
      if ( !v64 )
        break;
      v29 = *(_BYTE *)v63 == 0;
      v63 = (int *)((char *)v63 + 1);
      --v64;
    }
    while ( !v29 );
    qword_612448 = ~v64 - 1;
    while ( ((int (__fastcall *)(int *, __int64 *, __int64, signed __int64, __int64))v11)(v63, v61, v60, v64, v59) != -1 )
    {
      sub_405050(&dword_612420, &qword_612480);
      qword_6124A0 = 0LL;
      sub_4047A0(&dword_612420, &qword_612480, v4[dword_61233C], *(_QWORD *)(v62 + 8LL * dword_61233C) + 1LL, 0LL, 0LL);
      byte_6122B4 = 0;
      v65 = dword_61233C + 1;
      if ( v3 > dword_61233C + 1 )
      {
        do
        {
          v66 = *(_QWORD *)(v62 + 8 * v65);
          v67 = v4[v65++];
          sub_404A40(&dword_612420, &qword_612480, v67, v66, 0LL, 0LL);
        }
        while ( v3 > (signed int)v65 );
      }
      v61 = &qword_612480;
      v63 = &dword_612420;
      sub_404C00(&dword_612420, &qword_612480);
    }
  }
  else
  {
    while ( dword_61233C < v3 )
    {
      v68 = v53;
      v53 = &qword_612480;
      v69 = (int *)(unsigned __int8)byte_6122B4;
      sub_4047A0(&dword_612420, &qword_612480, v4[dword_61233C], strlen(v4[dword_61233C]) + 1, 0LL, 0LL);
      ++dword_61233C;
      v54 = v69;
      v57 = v68;
    }
    byte_6122B4 = 0;
    qword_612458 = qword_612480;
    qword_6124A8 = qword_6124A0;
    while ( ((int (__fastcall *)(int *, __int64 *, __int64, __int64, __int64 *))v11)(v54, v53, v55, v56, v57) != -1 )
    {
      if ( qword_612468 && qword_612468 <= (unsigned __int64)qword_6124D0 )
      {
        v53 = &qword_612480;
        v54 = &dword_612420;
        sub_404C00(&dword_612420, &qword_612480);
        qword_6124D0 = 0LL;
      }
    }
    if ( qword_612480 != qword_612458 || v98 && !byte_6123F0 )
      sub_404C00(&dword_612420, &qword_612480);
  }
  dword_6123C4 = status;
  return (unsigned int)status;
}

int sub_402E0B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_402E2A()
{
  return 0;
}

int sub_402E61()
{
  int result; // eax@4

  if ( !byte_612388 )
  {
    while ( qword_612390 < (unsigned __int64)(((&unk_611E48 - (_UNKNOWN *)&qword_611E40) >> 3) - 1) )
      (*(&qword_611E40 + ++qword_612390))();
    result = sub_402E0B();
    byte_612388 = 1;
  }
  return result;
}

int sub_402EB8()
{
  return sub_402E2A();
}

void nullsub_2()
{
  ;
}

__int64 sub_402ED0()
{
  __int64 result; // rax@1

  result = (unsigned int)dword_6122B0;
  if ( dword_6122B0 != 0x7FFFFFFF )
    result = (unsigned int)(dword_6122B0++ + 1);
  dword_6123CC = 1;
  return result;
}

void sub_402F00()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "environment is too large for exec", 5);
  error(1, 0, v0);
}

void __fastcall sub_402F30(char a1, unsigned int a2)
{
  unsigned int v2; // er13@2
  signed int v3; // ebx@3
  __pid_t v4; // eax@4
  int *v5; // r14@8
  char *v6; // rax@9
  unsigned int v7; // edx@16
  __int64 v8; // rcx@18
  __int16 v9; // bx@20
  __int64 v10; // ST08_8@25
  char *v11; // rax@25
  __int64 v12; // ST08_8@23
  char *v13; // rax@23
  __int64 v14; // rbx@21
  char *v15; // rax@21
  __int64 v16; // rbx@31
  char *v17; // rax@31
  int stat_loc; // [sp+18h] [bp-3Ch]@4

  if ( qword_6123E8 )
  {
    v2 = 0;
    do
    {
      dword_6123CC = 0;
      v3 = (unsigned __int8)(a1 ^ 1) & (a2 <= v2);
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            v4 = waitpid(-1, &stat_loc, v3);
            if ( v4 != -1 )
              break;
            v5 = __errno_location();
            if ( *v5 != 4 )
            {
              v6 = dcgettext(0LL, "error waiting for child process", 5);
              error(1, *v5, v6);
            }
            if ( dword_6123CC && !a1 )
              v3 = 1;
          }
          if ( !v4 )
          {
            if ( !v3 )
            {
              v16 = qword_6123E8;
              v17 = dcgettext(0LL, "WARNING: Lost track of %lu child processes", 5);
              error(0, 0, v17, v16);
            }
            return;
          }
        }
        while ( !qword_6123D8 );
        if ( v4 == *(_DWORD *)qword_6123E0 )
          break;
        v7 = 0;
        while ( 1 )
        {
          v8 = ++v7;
          if ( v7 >= (unsigned __int64)qword_6123D8 )
            break;
          if ( *(_DWORD *)(qword_6123E0 + 4LL * v7) == v4 )
            goto LABEL_20;
        }
        if ( v7 != qword_6123D8 )
          goto LABEL_20;
      }
      v8 = 0LL;
LABEL_20:
      *(_DWORD *)(qword_6123E0 + 4 * v8) = 0;
      v9 = stat_loc;
      ++v2;
      --qword_6123E8;
      if ( BYTE1(stat_loc) == 255 )
      {
        v14 = *(_QWORD *)qword_612488;
        v15 = dcgettext(0LL, "%s: exited with status 255; aborting", 5);
        error(124, 0, v15, v14);
        v9 = stat_loc;
      }
      if ( (_BYTE)v9 == 127 )
      {
        v12 = *(_QWORD *)qword_612488;
        v13 = dcgettext(0LL, "%s: stopped by signal %d", 5);
        error(125, 0, v13, v12, HIBYTE(v9));
        v9 = stat_loc;
      }
      if ( (char)((v9 & 0x7F) + 1) > 1 )
      {
        v10 = *(_QWORD *)qword_612488;
        v11 = dcgettext(0LL, "%s: terminated by signal %d", 5);
        error(125, 0, v11, v10, v9 & 0x7F);
        HIBYTE(v9) = BYTE1(stat_loc);
      }
      if ( HIBYTE(v9) )
        status = 123;
    }
    while ( qword_6123E8 );
  }
}

__int64 __fastcall sub_4031A0(int a1)
{
  unsigned __int64 v1; // r12@1
  __int64 v2; // rax@1
  unsigned int v3; // ebp@3
  _DWORD *v4; // rdx@4
  signed __int64 v5; // rbx@5
  __int64 result; // rax@8
  unsigned __int64 v7; // rdx@10
  signed __int64 v8; // rsi@10
  unsigned __int64 v9; // rcx@11
  unsigned int v10; // edx@12

  v1 = qword_6123D8;
  v2 = qword_6123E0;
  if ( !qword_6123D8 )
  {
    v5 = 0LL;
    v3 = 0;
    if ( !qword_6123E0 )
    {
      v8 = 128LL;
      v7 = 32LL;
LABEL_11:
      qword_6123D8 = v7;
      LODWORD(v2) = sub_4096D0(qword_6123E0, v8);
      v9 = qword_6123D8;
      qword_6123E0 = v2;
      if ( v1 < qword_6123D8 )
      {
        v10 = v3;
        do
        {
          *(_DWORD *)(v2 + 4 * v1) = 0;
          v1 = ++v10;
        }
        while ( v10 < v9 );
      }
      goto LABEL_7;
    }
LABEL_10:
    v7 = qword_6123D8 + ((unsigned __int64)qword_6123D8 >> 1) + 1;
    v8 = 4 * v7;
    goto LABEL_11;
  }
  if ( !*(_DWORD *)qword_6123E0 )
  {
    v4 = (_DWORD *)qword_6123E0;
    v3 = 0;
    goto LABEL_8;
  }
  v3 = 0;
  while ( 1 )
  {
    v5 = 4LL * ++v3;
    if ( v3 >= (unsigned __int64)qword_6123D8 )
      break;
    v4 = (_DWORD *)(qword_6123E0 + v5);
    if ( !*(_DWORD *)(qword_6123E0 + v5) )
      goto LABEL_8;
  }
  if ( v3 == qword_6123D8 )
    goto LABEL_10;
LABEL_7:
  v4 = (_DWORD *)(v2 + v5);
  if ( *(_DWORD *)(v2 + v5) )
    __assert_fail("0 == pids[i]", "xargs.c", 0x58Cu, "add_proc");
LABEL_8:
  *v4 = a1;
  result = v3;
  ++qword_6123E8;
  byte_6123F0 = 1;
  return result;
}

int __fastcall sub_4032B0(FILE *stream)
{
  __int64 v1; // rbp@1
  char *v2; // rax@1
  char *v3; // rax@1
  char *v4; // rax@1
  char *v5; // rax@1
  char *v6; // rax@1
  char *v7; // rax@1
  char *v8; // rax@1
  char *v9; // rax@1
  char *v10; // rax@1
  char *v11; // rax@1
  char *v12; // rax@1
  char *v13; // rax@1
  char *v14; // rax@1
  char *v15; // rax@1
  char *v16; // rax@1
  char *v17; // rax@1
  char *v18; // rax@1
  char *v19; // rax@1
  char *v20; // rax@1
  char *v21; // rax@1
  char *v22; // rax@1
  char *v23; // rax@1
  char *v24; // rax@1
  char *v25; // rax@1

  v1 = qword_612528;
  v2 = dcgettext(0LL, "Usage: %s [OPTION]... COMMAND [INITIAL-ARGS]...\n", 5);
  fprintf(stream, v2, v1);
  v3 = dcgettext(0LL, "Run COMMAND with arguments INITIAL-ARGS and more arguments read from input.\n\n", 5);
  fputs(v3, stream);
  v4 = dcgettext(
         0LL,
         "Mandatory and optional arguments to long options are also\n"
         "mandatory or optional for the corresponding short option.\n",
         5);
  fputs(v4, stream);
  v5 = dcgettext(
         0LL,
         "  -0, --null                   items are separated by a null, not whitespace;\n"
         "                                 disables quote and backslash processing and\n"
         "                                 logical EOF processing\n",
         5);
  fputs(v5, stream);
  v6 = dcgettext(0LL, "  -a, --arg-file=FILE          read arguments from FILE, not standard input\n", 5);
  fputs(v6, stream);
  v7 = dcgettext(
         0LL,
         "  -d, --delimiter=CHARACTER    items in input stream are separated by CHARACTER,\n"
         "                                 not by whitespace; disables quote and backslash\n"
         "                                 processing and logical EOF processing\n",
         5);
  fputs(v7, stream);
  v8 = dcgettext(
         0LL,
         "  -E END                       set logical EOF string; if END occurs as a line\n"
         "                                 of input, the rest of the input is ignored\n"
         "                                 (ignored if -0 or -d was specified)\n",
         5);
  fputs(v8, stream);
  v9 = dcgettext(
         0LL,
         "  -e, --eof[=END]              equivalent to -E END if END is specified;\n"
         "                                 otherwise, there is no end-of-file string\n",
         5);
  fputs(v9, stream);
  v10 = dcgettext(0LL, "  -I R                         same as --replace=R\n", 5);
  fputs(v10, stream);
  v11 = dcgettext(
          0LL,
          "  -i, --replace[=R]            replace R in INITIAL-ARGS with names read\n"
          "                                 from standard input; if R is unspecified,\n"
          "                                 assume {}\n",
          5);
  fputs(v11, stream);
  v12 = dcgettext(
          0LL,
          "  -L, --max-lines=MAX-LINES    use at most MAX-LINES non-blank input lines per\n"
          "                                 command line\n",
          5);
  fputs(v12, stream);
  v13 = dcgettext(
          0LL,
          "  -l[MAX-LINES]                similar to -L but defaults to at most one non-\n"
          "                                 blank input line if MAX-LINES is not specified\n",
          5);
  fputs(v13, stream);
  v14 = dcgettext(0LL, "  -n, --max-args=MAX-ARGS      use at most MAX-ARGS arguments per command line\n", 5);
  fputs(v14, stream);
  v15 = dcgettext(0LL, "  -P, --max-procs=MAX-PROCS    run at most MAX-PROCS processes at a time\n", 5);
  fputs(v15, stream);
  v16 = dcgettext(0LL, "  -p, --interactive            prompt before running commands\n", 5);
  fputs(v16, stream);
  v17 = dcgettext(0LL, "      --process-slot-var=VAR   set environment variable VAR in child processes\n", 5);
  fputs(v17, stream);
  v18 = dcgettext(
          0LL,
          "  -r, --no-run-if-empty        if there are no arguments, then do not run COMMAND;\n"
          "                                 if this option is not given, COMMAND will be\n"
          "                                 run at least once\n",
          5);
  fputs(v18, stream);
  v19 = dcgettext(0LL, "  -s, --max-chars=MAX-CHARS    limit length of command line to MAX-CHARS\n", 5);
  fputs(v19, stream);
  v20 = dcgettext(0LL, "      --show-limits            show limits on command-line length\n", 5);
  fputs(v20, stream);
  v21 = dcgettext(0LL, "  -t, --verbose                print commands before executing them\n", 5);
  fputs(v21, stream);
  v22 = dcgettext(0LL, "  -x, --exit                   exit if the size (see -s) is exceeded\n", 5);
  fputs(v22, stream);
  v23 = dcgettext(0LL, "      --help                   display this help and exit\n", 5);
  fputs(v23, stream);
  v24 = dcgettext(0LL, "      --version                output version information and exit\n", 5);
  fputs(v24, stream);
  v25 = dcgettext(0LL, "\nReport bugs to <bug-findutils@gnu.org>.\n", 5);
  return fputs(v25, stream);
}

__int64 __fastcall sub_403570(const char *a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // er14@1
  __int64 v6; // r12@1
  __int64 v7; // rbp@1
  __int64 result; // rax@1
  __int64 v9; // rbx@6
  char *v10; // rax@6
  __int64 v11; // rbx@9
  char *v12; // rax@9
  __int64 v13; // rbx@11
  char *v14; // rax@11
  char *endptr; // [sp+8h] [bp-30h]@1

  v5 = a5;
  v6 = a4;
  v7 = a3;
  result = strtol(a1, &endptr, 10);
  if ( endptr == a1 || *endptr )
  {
    v13 = qword_612528;
    v14 = dcgettext(0LL, "%s: invalid number for -%c option\n", 5);
    fprintf(stderr, v14, v13, a2);
    sub_4032B0(stderr);
    exit(1);
  }
  if ( result < v7 )
  {
    v11 = qword_612528;
    v12 = dcgettext(0LL, "%s: value for -%c option should be >= %ld\n", 5);
    fprintf(stderr, v12, v11, a2, v7);
    if ( !v5 )
      return v7;
    goto LABEL_13;
  }
  if ( v6 >= 0 && result > v6 )
  {
    v9 = qword_612528;
    v10 = dcgettext(0LL, "%s: value for -%c option should be <= %ld\n", 5);
    fprintf(stderr, v10, v9, a2, v6);
    if ( !v5 )
      return v6;
LABEL_13:
    sub_4032B0(stderr);
    exit(1);
  }
  return result;
}

FILE *__fastcall sub_4036C0(char a1)
{
  FILE *v1; // rbx@1
  int v2; // eax@1
  int v3; // ebp@2
  int *v5; // rax@3
  int v6; // er13@3
  int *v7; // r12@3

  v1 = 0LL;
  v2 = sub_405410(a1);
  if ( v2 >= 0 )
  {
    v3 = v2;
    v1 = fdopen(v2, "r");
    if ( !v1 )
    {
      v5 = __errno_location();
      v6 = *v5;
      v7 = v5;
      close(v3);
      *v7 = v6;
    }
  }
  return v1;
}

__int64 sub_403720()
{
  __int64 result; // rax@1

  result = (unsigned int)dword_6122B0;
  if ( dword_6122B0 > 1 )
    result = (unsigned int)(dword_6122B0-- - 1);
  return result;
}

int sub_403740()
{
  int result; // eax@4

  if ( !qword_612450 && !byte_6122B4 )
  {
    result = qword_612458;
    if ( qword_612480 != qword_612458 )
    {
      result = dword_612420;
      if ( !dword_612420 )
        result = sub_404C00(&dword_612420, &qword_612480);
    }
  }
  return result;
}

signed __int64 sub_403790()
{
  char *v0; // rbx@1
  char *v1; // r12@1
  int v2; // ebp@4
  char *v3; // rax@7
  char *v4; // rdx@8
  signed __int64 v5; // rbx@10
  signed __int64 result; // rax@10

  v0 = qword_6124E0;
  v1 = &qword_6124E0[qword_612438 - 1 - qword_6124A8];
  if ( byte_6123B0 )
  {
LABEL_14:
    result = 0xFFFFFFFFLL;
  }
  else
  {
    while ( 1 )
    {
      v2 = _IO_getc(fp);
      if ( v2 == -1 )
        break;
      if ( byte_6123C0 == v2 )
      {
        ++qword_6124D0;
        v4 = qword_6124E0;
        *v0 = 0;
        goto LABEL_10;
      }
      if ( v0 >= v1 )
      {
        sub_403740();
        v3 = dcgettext(0LL, "argument line too long", 5);
        error(1, 0, v3);
      }
      *(++v0 - 1) = v2;
    }
    v4 = qword_6124E0;
    byte_6123B0 = 1;
    if ( qword_6124E0 == v0 )
      goto LABEL_14;
    *v0 = 0;
LABEL_10:
    v5 = v0 + 1 - v4;
    result = (unsigned int)v5;
    if ( !qword_612450 )
    {
      sub_4047A0(&dword_612420, &qword_612480, v4, (signed int)v5, 0LL, 0LL);
      result = (unsigned int)v5;
    }
  }
  return result;
}

__int64 sub_4038B0()
{
  char *v0; // rbx@1
  char *v1; // r13@1
  char v2; // r14@2
  signed __int64 v3; // rbp@2
  signed int v4; // er12@2
  char *v5; // r15@9
  int v6; // er15@12
  char *v7; // rax@18
  char *v8; // rax@19
  int v9; // eax@20
  int v10; // eax@26
  char *v11; // rbp@32
  signed __int64 v12; // rbx@33
  int v13; // er14@33
  int v15; // eax@41
  int v16; // eax@42
  int v17; // eax@44
  char *v18; // rbp@47
  char *v19; // rax@47
  char *v20; // rbp@51
  signed __int64 v21; // rbx@51
  int v22; // eax@54
  int v23; // eax@58
  int v24; // eax@60
  char *v25; // rbp@68
  char *v26; // rax@68
  char *v27; // rcx@68
  int v28; // eax@69
  char *v29; // rbx@72
  char *v30; // rax@73
  int v31; // [sp+8h] [bp-40h]@2
  char v32; // [sp+Fh] [bp-39h]@2

  v0 = qword_6124E0;
  v1 = &qword_6124E0[qword_612438 - 1 - qword_6124A8];
  if ( byte_6123A0 )
    goto LABEL_37;
  v2 = 0;
  v32 = 1;
  v3 = -1LL;
  v4 = 1;
  v31 = 0;
LABEL_12:
  v6 = _IO_getc(fp);
  if ( v6 == -1 )
  {
    v24 = (signed int)qword_6124E0;
    byte_6123A0 = 1;
    if ( qword_6124E0 != v0 )
    {
      *v0 = 0;
      v13 = (_DWORD)v0 + 1 - v24;
      if ( v4 == 2 )
        goto LABEL_71;
      goto LABEL_62;
    }
LABEL_37:
    return (unsigned int)-1;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      if ( v6 == 10 )
        goto LABEL_46;
      goto LABEL_16;
    }
    goto LABEL_3;
  }
LABEL_22:
  while ( 2 )
  {
    if ( v6 & 0xFFFFFF80 )
      goto LABEL_28;
LABEL_23:
    if ( !((*__ctype_b_loc())[v6] & 1) && v6 != 10 && v6 != 13 )
      goto LABEL_28;
    do
    {
      v10 = _IO_getc(fp);
      if ( v10 == -1 )
      {
LABEL_42:
        v16 = (signed int)qword_6124E0;
        byte_6123A0 = 1;
        if ( v0 == qword_6124E0 )
          goto LABEL_37;
        *v0 = 0;
        v13 = (_DWORD)v0 + 1 - v16;
        goto LABEL_62;
      }
      v3 = v6;
      v6 = v10;
      if ( !(v10 & 0xFFFFFF80) )
        goto LABEL_23;
LABEL_28:
      ;
    }
    while ( (unsigned int)(v6 - 11) <= 1 );
    while ( v6 != 10 )
    {
      if ( !qword_612450 && !(v6 & 0xFFFFFF80) && (*__ctype_b_loc())[v6] & 1 )
      {
        v20 = qword_6124E0;
        *v0 = 0;
        v21 = v0 + 1 - v20;
        v13 = v21;
        if ( s1 && *s1 == *v20 && !strcmp(s1, v20) )
          goto LABEL_36;
        sub_4047A0(&dword_612420, &qword_612480, v20, (signed int)v21, 0LL, 0LL);
        v0 = qword_6124E0;
        v22 = _IO_getc(fp);
        v32 = 0;
        if ( v22 == -1 )
          goto LABEL_42;
        v3 = v6;
        v2 = 1;
        v6 = v22;
        goto LABEL_22;
      }
      if ( v6 != 39 )
      {
        if ( v6 == 92 )
        {
          v15 = _IO_getc(fp);
          v3 = v15;
          if ( v15 == -1 )
            goto LABEL_42;
LABEL_9:
          v4 = 0;
          v5 = v0;
          v2 = 1;
          if ( !(dword_612400 | (unsigned int)v3) )
            goto LABEL_18;
          goto LABEL_10;
        }
        if ( v6 != 34 )
        {
          v3 = v6;
          goto LABEL_9;
        }
      }
      v17 = _IO_getc(fp);
      if ( v17 == -1 )
      {
        v28 = (signed int)qword_6124E0;
        byte_6123A0 = 1;
        if ( v0 != qword_6124E0 )
        {
          *v0 = 0;
          v31 = v6;
          v13 = (_DWORD)v0 + 1 - v28;
LABEL_71:
          sub_403740();
          if ( v31 == 34 )
            v29 = dcgettext(0LL, "double", 5);
          else
            v29 = dcgettext(0LL, "single", 5);
          v30 = dcgettext(
                  0LL,
                  "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option",
                  5);
          error(1, 0, v30, v29);
LABEL_62:
          if ( !v32 || !s1 || *s1 != *qword_6124E0 || strcmp(s1, qword_6124E0) )
          {
            if ( !qword_612450 )
              sub_4047A0(&dword_612420, &qword_612480, qword_6124E0, v13, 0LL, 0LL);
            return (unsigned int)v13;
          }
        }
        goto LABEL_37;
      }
      v31 = v6;
      v6 = v17;
      v2 = 1;
      if ( v17 == 10 )
      {
LABEL_46:
        sub_403740();
        if ( v31 == 34 )
        {
          v5 = v0;
          v4 = 2;
          v25 = dcgettext(0LL, "double", 5);
          v26 = dcgettext(
                  0LL,
                  "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option",
                  5);
          v27 = v25;
          v3 = 10LL;
          error(1, 0, v26, v27);
          goto LABEL_10;
        }
        v18 = dcgettext(0LL, "single", 5);
        v19 = dcgettext(
                0LL,
                "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option",
                5);
        error(1, 0, v19, v18);
        if ( v31 != 10 )
        {
          v3 = 10LL;
          v5 = v0;
          v4 = 2;
          goto LABEL_10;
        }
      }
      else
      {
LABEL_16:
        if ( v31 != v6 )
        {
          v3 = v6;
          v4 = 2;
          v5 = v0;
          if ( !(dword_612400 | (unsigned int)v3) )
          {
LABEL_18:
            v3 = 0LL;
            v7 = dcgettext(
                   0LL,
                   "WARNING: a NUL character occurred in the input.  It cannot be passed through in the argument list.  D"
                   "id you mean to use the --null option?",
                   5);
            error(0, 0, v7);
            dword_612400 = 1;
            if ( v1 > v0 )
              goto LABEL_11;
            goto LABEL_19;
          }
LABEL_10:
          if ( v1 > v0 )
            goto LABEL_11;
LABEL_19:
          sub_403740();
          v8 = dcgettext(0LL, "argument line too long", 5);
          error(1, 0, v8);
LABEL_11:
          *v5 = v3;
          ++v0;
          goto LABEL_12;
        }
      }
      v2 = 1;
      v23 = _IO_getc(fp);
      if ( v23 == -1 )
        goto LABEL_42;
      v3 = v6;
      v6 = v23;
LABEL_3:
      ;
    }
    if ( v3 & 0xFFFFFF80 || !((*__ctype_b_loc())[v3] & 1) )
      ++qword_6124D0;
    v11 = qword_6124E0;
    v2 |= qword_6124E0 != v0;
    if ( !v2 )
    {
      v9 = _IO_getc(fp);
      if ( v9 == -1 )
        goto LABEL_42;
      v3 = 10LL;
      v6 = v9;
      continue;
    }
    break;
  }
  *v0 = 0;
  v12 = v0 + 1 - v11;
  v13 = v12;
  if ( s1 && *s1 == *v11 && !strcmp(s1, v11) )
  {
LABEL_36:
    byte_6123A0 = 1;
    if ( v32 )
      goto LABEL_37;
  }
  else if ( !qword_612450 )
  {
    sub_4047A0(&dword_612420, &qword_612480, v11, (signed int)v12, 0LL, 0LL);
  }
  return (unsigned int)v13;
}

__pid_t sub_403EC0()
{
  __pid_t result; // eax@1

  result = getpid();
  if ( result != dword_6123D0 )
    __assert_fail("getpid () == parent", "xargs.c", 0x60Cu, "wait_for_proc_all");
  if ( !byte_6123A1 )
  {
    byte_6123A1 = 1;
    sub_402F30(1, 0);
    result = status;
    byte_6123A1 = 0;
    if ( dword_6123C4 != status )
      _exit(status);
  }
  return result;
}

bool __fastcall sub_403F30(char a1)
{
  unsigned __int64 v1; // rbx@2
  char *v2; // r12@5
  int *v3; // rax@5
  int v4; // eax@10
  int v5; // ebx@10
  bool result; // al@16
  char *v7; // rbx@9
  int *v8; // rax@9
  char *v9; // rbp@15
  int *v10; // rax@15
  char *v11; // rbx@19
  int *v12; // rax@19

  if ( qword_612480 != 1 )
  {
    v1 = 0LL;
    do
    {
      if ( fprintf(stderr, "%s ", *(_QWORD *)(qword_612488 + 8 * v1)) < 0 )
      {
        v2 = dcgettext(0LL, "Failed to write to stderr", 5);
        v3 = __errno_location();
        error(1, *v3, v2);
      }
      ++v1;
    }
    while ( qword_612480 - 1 > v1 );
  }
  if ( a1 )
  {
    if ( !qword_6123A8 )
    {
      qword_6123A8 = sub_4036C0((unsigned __int64)"/dev/tty");
      if ( !qword_6123A8 )
      {
        v11 = dcgettext(0LL, "failed to open /dev/tty for reading", 5);
        v12 = __errno_location();
        error(1, *v12, v11);
      }
    }
    fwrite("?...", 1uLL, 4uLL, stderr);
    if ( sub_409E80(stderr, 1LL) )
    {
      v7 = dcgettext(0LL, "Failed to write to stderr", 5);
      v8 = __errno_location();
      error(1, *v8, v7);
    }
    v4 = _IO_getc(qword_6123A8);
    v5 = v4;
    if ( v4 != 10 && v4 != -1 )
    {
      do
        v4 = _IO_getc(qword_6123A8);
      while ( v4 != -1 && v4 != 10 );
    }
    if ( v4 == -1 )
    {
      v9 = dcgettext(0LL, "Failed to read from stdin", 5);
      v10 = __errno_location();
      error(1, *v10, v9);
    }
    result = (v5 & 0xFFFFFFDF) == 89;
  }
  else
  {
    _IO_putc(10, stderr);
    result = 0;
  }
  return result;
}

signed __int64 __usercall sub_404120@<rax>(const char **a1@<rcx>, unsigned int a2, char a3, __int64 a4)
{
  const char **v4; // rbp@1
  signed __int64 v5; // rsi@9
  __pid_t v6; // ebx@13
  __int64 v7; // rax@16
  __int64 v8; // rbp@16
  char *v9; // rbx@19
  int *v10; // rax@19
  signed __int64 result; // rax@20
  char *v12; // rbx@8
  int *v13; // rax@8
  char *v14; // rbx@26
  int *v15; // rax@26
  char *v16; // rbx@33
  __int64 v17; // rdi@34
  __int64 v18; // r13@34
  size_t v19; // r14@34
  char *v20; // r12@34
  int *v21; // rbx@34
  __int64 v22; // r13@35
  int v23; // edi@45
  __int64 v24; // rax@51
  char *v25; // rax@52
  char *v26; // rax@37
  int v27; // [sp+5Ch] [bp+14h]@27

  v4 = a1;
  if ( dword_6122B0 && qword_6123E8 >= (unsigned __int64)dword_6122B0 )
  {
    do
      sub_402F30(0, 1u);
    while ( dword_6122B0 <= (unsigned __int64)qword_6123E8 );
  }
  if ( !byte_6123C1 )
    goto LABEL_55;
  if ( !sub_403F30(1) )
    return 1LL;
  if ( !byte_6123C1 )
  {
LABEL_55:
    if ( byte_6123C2 )
      sub_403F30(0);
  }
  sub_402F30(0, 0);
  if ( pipe((int *__attribute__((__org_arrdim(0,2))) )&a2 + 1) )
  {
    v12 = dcgettext(0LL, "could not create pipe before fork", 5);
    v13 = __errno_location();
    error(1, *v13, v12);
  }
  v5 = 2LL;
  sub_409D40(a3);
  while ( 1 )
  {
    v6 = fork();
    if ( v6 >= 0 || *__errno_location() != 11 || !qword_6123E8 )
      break;
    v5 = 1LL;
    sub_402F30(0, 1u);
  }
  if ( v6 == -1 )
  {
    v16 = dcgettext(0LL, "cannot fork", 5);
    v5 = (unsigned int)*__errno_location();
    error(1, v5, v16);
LABEL_34:
    v17 = *(&a2 + 1);
    close(*(&a2 + 1));
    status = 0;
    sub_405550(v17, v5);
    v18 = (unsigned int)sub_4031A0(0);
    v19 = snprintf(0LL, 0LL, "%u", v18) + 1;
    v20 = (char *)malloc(v19);
    v21 = __errno_location();
    if ( v20 )
    {
      snprintf(v20, v19, "%u", (unsigned int)v18);
      v22 = qword_6123B8;
      if ( qword_6123B8 && setenv((const char *)qword_6123B8, v20, 1) < 0 )
      {
        v26 = dcgettext(0LL, "failed to set environment variable %s", 5);
        error(0, *v21, v26, v22);
      }
      free(v20);
    }
    else
    {
      v25 = dcgettext(0LL, "unable to allocate memory", 5);
      error(0, *v21, v25);
    }
    if ( !dword_6124D8 )
    {
      WORD2(a4) = 108;
      *(_QWORD *)&v27 = 7815273878500238383LL;
      close(0);
      if ( open((const char *)&v27, 0) < 0 )
      {
        LODWORD(v24) = sub_408C90(0LL, 8LL, &v27);
        error(0, *v21, "%s", v24);
      }
    }
    if ( (unsigned __int8)sub_405070(v4) )
    {
      *v21 = 7;
    }
    else
    {
      execvp(*v4, (char *const *__attribute__((__org_arrdim(0,0))) )v4);
      if ( !*v21 )
        goto LABEL_43;
    }
    write(a3, v21, 4uLL);
LABEL_43:
    close(a3);
    if ( *v21 == 7 || (error(0, *v21, "%s", *v4), *v21 != 2) )
      v23 = 126;
    else
      v23 = 127;
    _exit(v23);
  }
  if ( !v6 )
    goto LABEL_34;
  close(a3);
  v7 = sub_408FE0(*(&a2 + 1), &a2, 4uLL);
  v8 = v7;
  if ( v7 == 4 )
  {
    close(*(&a2 + 1));
    waitpid(v6, &v27, 0);
    if ( a2 != 7 )
    {
      if ( a2 != 2 )
        exit(126);
      exit(127);
    }
    result = 0LL;
  }
  else
  {
    if ( v7 == -1 )
    {
      close(*(&a2 + 1));
      v14 = dcgettext(
              0LL,
              "errno-buffer safe_read failed in xargs_do_exec (this is probably a bug, please report it)",
              5);
      v15 = __errno_location();
      error(0, *v15, v14);
    }
    else if ( v7 )
    {
      v9 = dcgettext(0LL, "read returned unexpected value %zu; this is probably a bug, please report it", 5);
      v10 = __errno_location();
      error(1, *v10, v9, v8);
    }
    else
    {
      sub_4031A0(v6);
    }
    close(*(&a2 + 1));
    result = 1LL;
  }
  return result;
}

char *__fastcall sub_404580(__int64 a1, __int64 a2)
{
  char *v2; // r12@1

  sub_409E80(stderr, a2);
  v2 = dcgettext(0LL, "Kevin Dalley", 5);
  dcgettext(0LL, "James Youngman", 5);
  dcgettext(0LL, "Eric B. Decker", 5);
  sub_409550((char)stdout);
  return v2;
}

unsigned __int64 __fastcall sub_404600(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax@1
  unsigned __int64 v5; // rdx@5
  __int64 v6; // rdx@6
  unsigned __int64 result; // rax@6
  unsigned __int64 v8; // rdx@9
  unsigned __int64 v9; // rdx@14
  __int64 v10; // rdx@18
  unsigned __int64 v11; // rsi@25
  unsigned __int64 v12; // rdx@28
  unsigned __int64 v13; // rsi@28
  signed __int64 v14; // rcx@28

  v4 = *(_QWORD *)(a2 + 64);
  if ( a3 )
  {
    if ( a4 > v4 )
    {
      *(_QWORD *)(a2 + 64) = a4;
      v4 = a4;
    }
    if ( !v4 || (v5 = *(_QWORD *)(a2 + 72), v4 >= v5) )
    {
      v6 = *(_QWORD *)(a1 + 56);
      result = a4 + 1;
      if ( a4 == -1LL )
        result = -1LL;
      if ( v6 )
        goto LABEL_9;
      return result;
    }
    v11 = v5 - v4;
    result = ((v5 - v4) >> 1) + a4;
    if ( v11 == 1 )
      result = a4 + 1;
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 72);
    if ( v9 > a4 || !v9 )
      *(_QWORD *)(a2 + 72) = a4;
    if ( v4 && (v10 = *(_QWORD *)(a2 + 72), v10 > v4) )
    {
      v12 = v10 - v4;
      v13 = a4;
      v14 = a4 - 1;
      result = v13 - (v12 >> 1);
      if ( v12 == 1 )
        result = v14;
    }
    else
    {
      result = a4 >> 1;
    }
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
LABEL_9:
    v8 = v6 + 1;
    if ( v8 >= result )
    {
      result = v8;
      if ( !v8 )
        result = 1LL;
    }
    return result;
  }
  if ( !result )
    result = 1LL;
  return result;
}

__int64 sub_404700()
{
  return 0LL;
}

__int64 __fastcall sub_404710(const char *a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx@1
  char *v3; // rax@1
  char *v5; // r12@5
  int *v6; // rax@5
  unsigned __int64 v7; // [sp+8h] [bp-20h]@0

  v2 = 0;
  v3 = getenv(a1);
  if ( !v3 )
    return v2;
  if ( !(unsigned int)sub_4098E0(v3) )
    return v7 < a2;
  v5 = dcgettext(0LL, "Environment variable %s is not set to a valid decimal number", 5);
  v6 = __errno_location();
  error(1, *v6, v5, a1);
  return 0LL;
}

int __fastcall sub_4047A0(__int64 a1, __int64 a2, char *a3, __int64 a4, char *a5, __int64 a6, int a7)
{
  __int64 v7; // rbx@2
  char *v8; // r13@2
  __int64 v9; // rbp@2
  __int64 v10; // r15@2
  char *v11; // rax@8
  unsigned __int64 v12; // rdx@10
  __int64 v13; // rax@11
  unsigned __int64 v14; // rsi@15
  unsigned __int64 v15; // rax@15
  __int64 v16; // rcx@19
  __int64 v17; // rbp@21
  __int64 v18; // rdx@22
  char *v19; // rax@39
  char *src; // [sp+8h] [bp-40h]@1

  src = a5;
  if ( !a3 )
    __assert_fail("arg != NULL", "buildcmd.c", 0x165u, "bc_push_arg");
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = a6;
  if ( a7 )
  {
    if ( a3 != "do_not_care" )
      goto LABEL_4;
  }
  else
  {
    *(_DWORD *)(a2 + 56) = 1;
    if ( a3 != "do_not_care" )
    {
LABEL_4:
      if ( (unsigned __int64)(*(_QWORD *)(a2 + 32) + a4 + a6) <= *(_QWORD *)(a1 + 24) )
        goto LABEL_10;
      if ( a7 || *(_QWORD *)a2 == *(_QWORD *)(a1 + 56) )
      {
        v19 = dcgettext(0LL, "cannot fit single argument within argument list size limit", 5);
        error(1, 0, v19);
        if ( *(_QWORD *)(a1 + 48) )
          goto LABEL_8;
      }
      else if ( *(_QWORD *)(a1 + 48) )
      {
LABEL_8:
        v11 = dcgettext(0LL, "argument list too long", 5);
        error(1, 0, v11);
LABEL_9:
        sub_404C00(a1, a2);
LABEL_10:
        v12 = *(_QWORD *)a2;
        if ( !a7 && (v13 = *(_QWORD *)(a1 + 80)) != 0 && v13 == v12 - *(_QWORD *)(a1 + 56)
          || v12 == *(_QWORD *)(a1 + 32) )
        {
          sub_404C00(a1, a2);
          v12 = *(_QWORD *)a2;
        }
        v14 = *(_QWORD *)(a2 + 16);
        v15 = *(_QWORD *)(v7 + 8);
        if ( v12 < v14 )
          goto LABEL_19;
        goto LABEL_16;
      }
      if ( !*(_DWORD *)a1 || !*(_QWORD *)(a1 + 72) && !*(_QWORD *)(a1 + 80) )
        goto LABEL_9;
      goto LABEL_8;
    }
  }
  v12 = *(_QWORD *)a2;
  v14 = *(_QWORD *)(a2 + 16);
  v15 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)v7 < v14 )
  {
LABEL_32:
    *(_QWORD *)v7 = v12 + 1;
    *(_QWORD *)(v15 + 8 * v12) = 0LL;
    goto LABEL_26;
  }
LABEL_16:
  if ( v15 )
  {
    *(_QWORD *)(v7 + 16) = 2 * v14;
    LODWORD(v15) = sub_4096D0(v15, 16 * v14);
    *(_QWORD *)(v7 + 8) = v15;
  }
  else
  {
    *(_QWORD *)(v7 + 16) = 64LL;
    LODWORD(v15) = sub_409680(512LL, v14);
    *(_QWORD *)(v7 + 8) = v15;
  }
  v12 = *(_QWORD *)v7;
  if ( v8 == "do_not_care" )
    goto LABEL_32;
LABEL_19:
  v16 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)v7 = v12 + 1;
  *(_QWORD *)(v15 + 8 * v12) = v16 + *(_QWORD *)(v7 + 24);
  if ( src )
  {
    strcpy((char *)(v16 + *(_QWORD *)(v7 + 24)), src);
    v16 = v10 + *(_QWORD *)(v7 + 32);
    *(_QWORD *)(v7 + 32) = v16;
  }
  strcpy((char *)(*(_QWORD *)(v7 + 24) + v16), v8);
  v17 = *(_QWORD *)(v7 + 32) + v9;
  v15 = *(_QWORD *)v7;
  *(_QWORD *)(v7 + 32) = v17;
  if ( a7 )
  {
    if ( v15 != *(_QWORD *)(a1 + 32) )
      goto LABEL_28;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 80);
    if ( (!v18 || v18 != v15 - *(_QWORD *)(a1 + 56)) && v15 != *(_QWORD *)(a1 + 32) )
      return v15;
  }
  LODWORD(v15) = sub_404C00(a1, v7);
LABEL_26:
  if ( a7 )
  {
    v17 = *(_QWORD *)(v7 + 32);
LABEL_28:
    *(_QWORD *)(v7 + 40) = v17;
  }
  return v15;
}

int __fastcall sub_404A40(__int64 a1, __int64 a2, const char *a3, size_t a4, char *a5, __int64 a6, const char *a7, __int64 a8, int a9)
{
  const char *v9; // r15@1
  __int64 v10; // r14@1
  size_t v11; // r12@1
  __int64 v12; // rdi@1
  char *v13; // rbx@1
  unsigned __int64 v14; // rbp@1
  signed __int64 v15; // r13@3
  unsigned __int64 v16; // rbp@4
  __int64 v17; // rax@7
  const char *v18; // rax@8
  const char *v19; // rsi@10
  char *v21; // rax@14
  char *v22; // rax@2
  const char *v23; // [sp+8h] [bp-70h]@8
  __int64 v24; // [sp+18h] [bp-60h]@1
  char *src; // [sp+20h] [bp-58h]@1
  __int64 v26; // [sp+30h] [bp-48h]@1

  v9 = a3;
  v10 = a1;
  v11 = a4;
  v12 = *(_QWORD *)(a1 + 24);
  v13 = dest;
  v26 = a2;
  src = a5;
  v14 = v12 - 1;
  v24 = a6;
  if ( !dest )
  {
    LODWORD(v22) = sub_409680(v12 + 1, a2);
    v13 = v22;
    dest = v22;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      LODWORD(v18) = sub_4066F0(v9, *(_QWORD *)(v10 + 48));
      v23 = v18;
      if ( v18 )
        break;
      if ( v11 >= v14 )
        goto LABEL_13;
      v19 = v9;
      v9 += v11;
      strncpy(v13, v19, v11);
      v14 -= v11;
      v13 += v11;
      v11 = 0LL;
      if ( !*v9 )
        goto LABEL_11;
    }
    v15 = v18 - v9;
    if ( v14 <= v18 - v9 )
      goto LABEL_13;
    v16 = v14 - v15;
    strncpy(v13, v9, v18 - v9);
    v13 += v15;
    if ( v24 + a8 >= v16 )
      break;
    v14 = v16 - (v24 + a8);
    if ( src )
    {
      strcpy(v13, src);
      v13 += v24;
    }
    strcpy(v13, a7);
    v17 = *(_QWORD *)(v10 + 40);
    v13 += a8;
    v9 = &v23[v17];
    v11 = v11 - v17 - v15;
    if ( !v23[v17] )
      goto LABEL_11;
  }
  v9 = v23;
LABEL_13:
  if ( *v9 )
  {
    v21 = dcgettext(0LL, "command too long", 5);
    error(1, 0, v21);
  }
LABEL_11:
  *v13 = 0;
  return sub_4047A0(v10, v26, dest, v13 + 1 - dest, 0LL, 0LL, a9);
}

signed __int64 __fastcall sub_404C00(__int64 a1, __int64 a2)
{
  __int64 v2; // r12@1
  unsigned __int64 v3; // rax@1
  unsigned __int64 v4; // r13@3
  _QWORD *v5; // rax@3
  unsigned __int64 v6; // r8@3
  unsigned __int64 v7; // rbp@3
  _QWORD *v8; // r15@3
  unsigned __int64 v9; // rdx@3
  __int64 v10; // rsi@5
  __int64 v11; // rax@5
  unsigned __int64 v12; // rax@7
  unsigned __int64 v13; // rbx@7
  __int64 v14; // rsi@10
  __int64 v15; // rsi@14
  char *v16; // rax@16
  __int64 v17; // rax@18
  signed __int64 result; // rax@18
  unsigned __int64 v19; // rax@19
  unsigned __int64 v20; // rax@20
  unsigned __int64 v21; // [sp+10h] [bp-40h]@14

  v2 = a2;
  sub_4047A0(a1, a2, "do_not_care", 0LL, 0LL, 0LL, 0);
  v3 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    __assert_fail("state->cmd_argc > 0", "buildcmd.c", 0x115u, "bc_do_exec");
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v3 - 8) )
    __assert_fail("state->cmd_argv[state->cmd_argc-1] == NULL", "buildcmd.c", 0x116u, "bc_do_exec");
  v4 = 0LL;
  LODWORD(v5) = sub_409680(8 * v3 + 8, a2);
  v6 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = v5;
  v9 = *(_QWORD *)a2;
  do
  {
    if ( v7 )
    {
      v10 = *(_QWORD *)(v2 + 8);
      v11 = 0LL;
      do
      {
        ++v11;
        v8[v11 - 1] = *(_QWORD *)(v10 + 8 * v11 - 8);
      }
      while ( v11 != v7 );
      v12 = v4 + v7;
      v13 = v7;
    }
    else
    {
      v12 = v4;
      v13 = 0LL;
    }
    if ( v6 > v13 && v12 < v9 )
    {
      v14 = *(_QWORD *)(v2 + 8);
      do
        v8[++v13 - 1] = *(_QWORD *)(v14 + 8 * ++v12 - 8);
      while ( v6 > v13 && v12 < v9 );
      if ( v13 < v7 )
        __assert_fail("dst_pos >= ctl->initial_argc", "buildcmd.c", 0x102u, "copy_args");
    }
    v21 = v6;
    v15 = *(_QWORD *)(v2 + 48);
    v8[v13] = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, void *))(a1 + 64))(a1, v15, (unsigned int)v13, v8) )
    {
      v20 = sub_404600(a1, v2, 1, v21);
      v7 = *(_QWORD *)(a1 + 56);
      v6 = v20;
      v4 = v13 + v4 - v7;
    }
    else if ( *(_QWORD *)(a1 + 56) + 1LL < v21 )
    {
      v19 = sub_404600(a1, v2, 0, v21);
      v7 = *(_QWORD *)(a1 + 56);
      v6 = v19;
    }
    else
    {
      v16 = dcgettext(0LL, "can't call exec() due to argument size restrictions", 5);
      error(1, 0, v16);
      v7 = *(_QWORD *)(a1 + 56);
      v6 = v21;
    }
    v9 = *(_QWORD *)v2;
  }
  while ( v4 + 1 < *(_QWORD *)v2 - v7 );
  free(v8);
  v17 = *(_QWORD *)(v2 + 40);
  *(_QWORD *)v2 = v7;
  *(_QWORD *)(v2 + 32) = v17;
  result = -4294967296LL;
  *(_QWORD *)(v2 + 56) = -4294967296LL;
  return result;
}

__int64 sub_404E60()
{
  __int64 v0; // rbp@1
  char **v1; // rbx@1
  char *i; // rdi@1
  size_t v3; // rax@2

  v0 = 0LL;
  v1 = environ;
  for ( i = *environ; *v1; v0 += v3 + 1 )
  {
    v3 = strlen(i);
    ++v1;
    i = *v1;
  }
  return v0;
}

signed __int64 __fastcall sub_404EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  unsigned __int64 v3; // rbp@1
  unsigned __int64 v4; // rax@1
  unsigned __int64 v5; // rax@5
  signed __int64 result; // rax@6

  v2 = sub_404E60();
  *(_QWORD *)(a1 + 16) = 4096LL;
  v3 = v2;
  v4 = sysconf(0);
  *(_DWORD *)a1 = 0;
  if ( (signed __int64)v4 <= 0 )
    v4 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v3 > v4 )
  {
    result = 1LL;
  }
  else if ( v3 + a2 >= v4 )
  {
    result = 2LL;
  }
  else
  {
    v5 = v4 - (v3 + a2);
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 32) = (v5 >> 3) - 2;
    if ( v5 >> 3 == 2 )
      __assert_fail("ctl->max_arg_count > 0", "buildcmd.c", 0x216u, "bc_init_controlinfo");
    *(_QWORD *)(a1 + 24) = v5;
    result = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = sub_404700;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  return result;
}

unsigned __int64 __fastcall sub_404F80(__int64 a1)
{
  unsigned __int64 result; // rax@1

  result = *(_QWORD *)(a1 + 8);
  if ( result > 0x1FFFF )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( result < 0x20001 )
      result = 0x20000LL;
  }
  *(_QWORD *)(a1 + 24) = result;
  return result;
}

signed __int64 __fastcall sub_405050(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax@1

  *(_QWORD *)a2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 40);
  result = -4294967296LL;
  *(_QWORD *)(a2 + 56) = -4294967296LL;
  return result;
}

signed __int64 __fastcall sub_405070(const char **a1)
{
  const char **v1; // r12@1
  unsigned __int64 v2; // rbp@1
  const char *v3; // rdi@1
  unsigned __int64 i; // rbx@1
  size_t v5; // rax@2
  signed __int64 result; // rax@4
  unsigned int v7; // edx@5

  v1 = a1;
  v2 = 0LL;
  v3 = *a1;
  for ( i = 0LL; v3; v2 += v5 )
  {
    v5 = strlen(v3);
    v3 = v1[++i];
  }
  if ( (unsigned int)sub_404710("__GNU_FINDUTILS_EXEC_ARG_COUNT_LIMIT", i) )
  {
    result = 1LL;
  }
  else
  {
    LOBYTE(v7) = (unsigned int)sub_404710("__GNU_FINDUTILS_EXEC_ARG_LENGTH_LIMIT", v2) != 0;
    result = v7;
  }
  return result;
}

__int64 sub_4050E0()
{
  DIR *v0; // rax@1
  DIR *v1; // rbp@2
  signed int v2; // er12@2
  signed int v3; // ebx@2
  struct dirent *v4; // rax@3
  char v5; // dl@5
  signed int v6; // eax@7

  LODWORD(v0) = sub_405AA0("/proc/self/fd");
  if ( !v0 )
    goto LABEL_15;
  v1 = v0;
  v2 = 0;
  v3 = -1;
  while ( 1 )
  {
    v4 = readdir(v1);
    if ( !v4 )
      break;
    while ( 1 )
    {
      if ( v4->d_name[0] == 46 )
      {
        v5 = v4->d_name[1];
        if ( v5 == 46 || !v5 )
          break;
      }
      v2 = 1;
      v6 = sub_4055F0(v4->d_name);
      if ( v3 < v6 )
        v3 = v6;
      v4 = readdir(v1);
      if ( !v4 )
        goto LABEL_10;
    }
  }
LABEL_10:
  closedir(v1);
  if ( !v2 )
LABEL_15:
    v3 = -1;
  return (unsigned int)v3;
}

signed __int64 __fastcall sub_4051D0(int a1, __int64 a2)
{
  __int64 v2; // rbp@1
  unsigned __int64 v3; // rax@2
  unsigned __int64 v4; // rsi@2
  int v5; // ecx@3
  signed __int64 i; // rax@4
  signed __int64 result; // rax@9

  v2 = a2;
  if ( sub_409D40(a1) & 1 )
    goto LABEL_15;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v3 >= v4 )
    goto LABEL_9;
  v5 = *(_DWORD *)(*(_QWORD *)v2 + 4 * v3);
  if ( v5 < a1 )
  {
    for ( i = v3 + 1; ; ++i )
    {
      if ( v4 == i )
      {
        *(_QWORD *)(v2 + 16) = v4;
        goto LABEL_9;
      }
      v5 = *(_DWORD *)(*(_QWORD *)v2 + 4 * (i + 1) - 4);
      if ( a1 <= v5 )
        break;
    }
    *(_QWORD *)(v2 + 16) = i;
  }
  if ( a1 == v5 )
  {
LABEL_15:
    result = 0LL;
  }
  else
  {
LABEL_9:
    *(_DWORD *)(v2 + 24) = a1;
    result = 0xFFFFFFFFLL;
  }
  return result;
}

__int64 sub_405260()
{
  __int64 v0; // rax@1
  signed int v1; // ebx@1
  int v2; // eax@3
  signed int v3; // edx@3
  struct rlimit v5; // [sp+0h] [bp-18h]@3

  v0 = sysconf(4);
  v1 = v0;
  if ( v0 == -1 )
    v1 = 20;
  v2 = getrlimit(RLIMIT_NOFILE, &v5);
  v3 = v1;
  if ( !v2 )
  {
    v3 = v5.rlim_cur;
    if ( v5.rlim_cur == -1LL )
      v3 = v1;
  }
  return (unsigned int)v3;
}

int __fastcall sub_4052B0(int a1, int (__fastcall *a2)(_QWORD, __int64), __int64 a3)
{
  int v3; // er14@2
  __int64 v4; // r12@2
  int v5; // ebp@2
  int v6; // er15@3
  int *v7; // rax@6
  int v8; // edx@6
  int v9; // edi@7
  __int64 v10; // rbx@9
  int result; // eax@11
  int v12; // [sp+0h] [bp-238h]@6
  __int16 v13[281]; // [sp+6h] [bp-232h]@10

  if ( a1 <= 0 )
  {
    result = 0;
  }
  else
  {
    v3 = a1;
    v4 = a3;
    v5 = 0;
    while ( 1 )
    {
      v6 = 64;
      if ( v3 - v5 <= 64 )
        v6 = v3 - v5;
      if ( v3 - v5 > 0 )
        break;
      if ( poll((struct pollfd *)&v12, v6, 0) == -1 )
        return -1;
LABEL_13:
      v5 += v6;
      if ( v3 <= v5 )
        return 0;
    }
    v7 = &v12;
    v8 = 0;
    do
    {
      v7 += 2;
      *((_WORD *)v7 - 1) = 0;
      v9 = v5 + v8++;
      *((_WORD *)v7 - 2) = 5;
      *(v7 - 2) = v9;
    }
    while ( v8 < v6 );
    if ( poll((struct pollfd *)&v12, v6, 0) == -1 )
      return -1;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v13[4 * v10] != 32 )
      {
        result = a2((unsigned int)*(&v12 + 2 * v10), v4);
        if ( result )
          break;
      }
      if ( v6 <= (signed int)++v10 )
        goto LABEL_13;
    }
  }
  return result;
}

__int64 sub_4053A0()
{
  int v0; // eax@1
  __int64 result; // rax@3
  __int64 v2; // [sp+0h] [bp-28h]@3
  __int64 v3; // [sp+8h] [bp-20h]@3
  __int64 v4; // [sp+10h] [bp-18h]@3

  v0 = sub_4050E0();
  if ( v0 < 0 )
    v0 = sub_405260();
  v2 = 0LL;
  v4 = 0LL;
  v3 = 0LL;
  sub_4052B0((v0 != 0x7FFFFFFF) + v0, (int (__fastcall *)(_QWORD, __int64))sub_405160, (__int64)&v2);
  qword_612508 = v2;
  result = v3;
  qword_612500 = v3;
  return result;
}

__int64 __fastcall sub_405410(char a1, __int64 a2, __int64 a3)
{
  char v3; // bp@1
  __int64 result; // rax@2
  unsigned int v5; // ebx@2
  int v6; // eax@5
  int v7; // er14@5
  char v8; // bp@8
  __int64 v9; // [sp+30h] [bp-48h]@1

  v9 = a3;
  v3 = byte_6124F9;
  if ( !byte_6124F9 )
  {
    v6 = sub_405B30((unsigned __int64)"/");
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = sub_409D40(v6);
      close(v7);
      byte_6124F9 = 1;
      byte_6124F8 = v8 & 1;
    }
    else
    {
      byte_6124F8 = v3;
      byte_6124F9 = 1;
    }
  }
  LODWORD(result) = sub_405B30(a1);
  v5 = result;
  if ( (signed int)result < 0 || byte_6124F8 )
  {
    result = (unsigned int)result;
  }
  else
  {
    sub_405860((unsigned int)result, 1LL);
    result = v5;
  }
  return result;
}

int sub_405550()
{
  __int64 v0; // rbx@1
  __int64 v1; // rbp@1
  int v2; // eax@1
  int result; // eax@3
  int v4; // ebx@3
  char *v5; // rax@4
  __int64 v6; // [sp+0h] [bp-38h]@3
  __int64 v7; // [sp+8h] [bp-30h]@3
  __int64 v8; // [sp+10h] [bp-28h]@3
  int v9; // [sp+18h] [bp-20h]@3

  v0 = qword_612500;
  v1 = qword_612508;
  v2 = sub_4050E0();
  if ( v2 < 0 )
    v2 = sub_405260();
  v7 = v0;
  v6 = v1;
  v8 = 0LL;
  v9 = -1;
  result = sub_4052B0((v2 != 0x7FFFFFFF) + v2, (int (__fastcall *)(_QWORD, __int64))sub_4051D0, (__int64)&v6);
  v4 = v9;
  if ( v9 >= 0 )
  {
    v5 = dcgettext(
           0LL,
           "File descriptor %d will leak; please report this as a bug, remembering to include a detailed description of t"
           "he simplest way to reproduce this problem.",
           5);
    error(0, 0, v5, (unsigned int)v4);
    __assert_fail("no_leaks", "fdleak.c", 0x17Eu, "complain_about_leaky_fds");
  }
  return result;
}

__int64 __fastcall sub_4055F0(char *nptr, unsigned int a2)
{
  int *v2; // rax@1
  int *v3; // r12@1
  __int64 v4; // rbx@1
  __int64 v6; // rax@8
  __int64 v7; // rbp@8
  char *v8; // rax@8
  __int64 v9; // rax@9
  __int64 v10; // r14@9
  __int64 v11; // rax@9
  __int64 v12; // rbp@9
  char *v13; // rax@9
  char *endptr; // [sp+8h] [bp-30h]@1

  v2 = __errno_location();
  *v2 = 0;
  v3 = v2;
  v4 = strtol(nptr, &endptr, 10);
  if ( (unsigned __int64)(v4 + 0x7FFFFFFFFFFFFFFFLL) > 0xFFFFFFFFFFFFFFFDLL )
  {
    error(1, *v3, "%s", nptr);
LABEL_3:
    *v3 = 34;
    error(1, 34, "%s", nptr);
    return (unsigned int)v4;
  }
  if ( (unsigned __int64)(v4 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_3;
  if ( !*endptr )
  {
    if ( endptr == nptr )
    {
      LODWORD(v6) = sub_408C90(0LL, a2, endptr);
      v7 = v6;
      v8 = dcgettext(0LL, "Expected an integer: %s", 5);
      error(1, *v3, v8, v7);
    }
    return (unsigned int)v4;
  }
  LODWORD(v9) = sub_408C90(1LL, a2, nptr);
  v10 = v9;
  LODWORD(v11) = sub_408C90(0LL, a2, endptr);
  v12 = v11;
  v13 = dcgettext(0LL, "Unexpected suffix %s on %s", 5);
  error(1, *v3, v13, v12, v10);
  return (unsigned int)v4;
}

void *__fastcall sub_405740(void *ptr, unsigned __int64 a2, unsigned __int64 *a3)
{
  void *v3; // r13@1
  unsigned __int64 *v4; // rbp@1
  unsigned __int64 v5; // rbx@1
  int *v6; // rax@1
  int v7; // er14@1
  unsigned __int64 v8; // rsi@2
  int *v9; // r12@2
  void *result; // rax@3
  size_t v11; // rdi@4

  v3 = ptr;
  v4 = a3;
  v5 = a2;
  v6 = __errno_location();
  v7 = *v6;
  if ( !a2 )
    __assert_fail("wanted > 0u", "extendbuf.c", 0x47u, "extendbuf");
  v8 = *v4;
  v9 = v6;
  if ( *v4 )
  {
    result = ptr;
    if ( v8 < v5 )
    {
      v11 = 2 * v8;
      if ( v8 <= 2 * v8 )
        goto LABEL_8;
      v11 = v5;
      goto LABEL_18;
    }
  }
  else
  {
    v11 = 32LL;
    if ( v5 > 0x10 )
    {
      while ( 1 )
      {
LABEL_8:
        if ( v11 >= v5 )
        {
          if ( !v8 )
            goto LABEL_10;
          goto LABEL_17;
        }
        if ( v11 > 2 * v11 )
          break;
        v11 *= 2LL;
      }
      v11 = v5;
      if ( !v8 )
        goto LABEL_10;
LABEL_17:
      result = v3;
      if ( v8 != v11 )
      {
LABEL_18:
        *v4 = v11;
        result = realloc(v3, v11);
        if ( !result )
          return 0LL;
LABEL_13:
        *v9 = v7;
        return result;
      }
    }
    else
    {
      v11 = 16LL;
LABEL_10:
      if ( v3 )
        __assert_fail("NULL == existing", "extendbuf.c", 0x4Fu, "extendbuf");
      *v4 = v11;
      result = malloc(v11);
    }
  }
  if ( result )
    goto LABEL_13;
  return 0LL;
}

signed __int64 __fastcall sub_405860(char a1, char a2)
{
  int v2; // eax@1
  int v3; // ecx@2
  int v4; // eax@2
  unsigned int v5; // edx@2
  signed __int64 result; // rax@4

  v2 = sub_409D40(a1);
  if ( v2 < 0 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v3 = v2;
    v4 = v2 | 1;
    v5 = v3 & 0xFFFFFFFE;
    if ( a2 )
      v5 = v4;
    result = 0LL;
    if ( v5 != v3 )
      result = (unsigned int)-((unsigned int)sub_409D40(a1) == -1);
  }
  return result;
}

int sub_4058E0()
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

  v0 = (FILE *)stdin;
  LODWORD(v1) = sub_409EC0(stdin);
  if ( !v1 )
  {
    if ( !(unsigned int)sub_40B2B0(v0) )
      return sub_405A00(v0);
    goto LABEL_6;
  }
  v11 = sub_409EF0(v0, 0LL, 1LL);
  v4 = (FILE *)stdin;
  if ( !v11 )
  {
    v3 = sub_409E80(stdin, 0LL);
    v4 = (FILE *)stdin;
    if ( v3 )
    {
      sub_40B2B0((FILE *)stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_40B2B0(v4) )
  {
LABEL_6:
    v5 = dcgettext(0LL, "error closing file", 5);
    v6 = qword_612510;
    v7 = v5;
    v8 = __errno_location();
    v9 = v8;
    if ( v6 )
    {
      LODWORD(v10) = sub_408E10(v6, "error closing file");
      error(0, *v9, "%s: %s", v10, v7);
    }
    else
    {
      error(0, *v8, "%s", v7);
    }
    ((void (*)(void))sub_405A00)();
    _exit(dword_6122C0);
  }
  return ((int (*)(void))sub_405A00)();
}

__int64 sub_405A00()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_40B2B0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_612518 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_612520 )
      {
        LODWORD(v5) = sub_408E10(qword_612520, "write error");
        error(0, *v1, "%s: %s", v5, v4);
      }
      else
      {
        error(0, *v1, "%s", v3);
      }
LABEL_8:
      _exit(dword_6122C0);
    }
  }
  result = sub_40B2B0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

DIR *__fastcall sub_405AA0(const char *a1)
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
    v5 = sub_409080((unsigned int)v3);
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

__int64 __fastcall sub_405B30(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_409090(v4);
}

signed __int64 __usercall sub_405B80@<rax>(unsigned __int64 a1@<rdx>, _QWORD *a2@<rcx>, __int64 a3@<rbp>, _BYTE *a4@<rdi>, __int64 a5@<rsi>)
{
  _BYTE *v5; // rbx@2
  void *v6; // rsp@3
  unsigned __int64 v7; // rdi@3
  __int64 v8; // r8@4
  signed __int64 v9; // r9@4
  char v10; // al@5
  __int64 v11; // r8@11
  _BYTE *v12; // r9@11
  __int64 v13; // rax@11
  __int64 v14; // r10@15
  unsigned __int64 v16; // rax@17
  _QWORD *v17; // [sp-6h] [bp-30h]@17
  unsigned __int64 v18; // [sp+2h] [bp-28h]@17
  __int64 v19; // [sp+Ah] [bp-20h]@17
  __int64 v20; // [sp+22h] [bp-8h]@2

  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    return 0LL;
  v20 = a3;
  v5 = a4;
  if ( 8 * a1 > 0xFAF )
  {
    v17 = a2;
    v18 = a1;
    v19 = a5;
    LODWORD(v16) = sub_40B890();
    a2 = v17;
    a1 = v18;
    v7 = v16;
    if ( v16 )
      goto LABEL_4;
    return 0LL;
  }
  v6 = alloca(8 * a1 + 24);
  v7 = (((unsigned __int64)&v17 + 7) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  if ( (((unsigned __int64)&v17 + 7) & 0xFFFFFFFFFFFFFFF0LL) == -16LL )
    return 0LL;
LABEL_4:
  *(_QWORD *)(v7 + 8) = 1LL;
  v8 = 0LL;
  v9 = 2LL;
  if ( a1 > 2 )
  {
    do
    {
      v10 = *(_BYTE *)(a5 + v9 - 1);
      if ( v10 == *(_BYTE *)(a5 + v8) )
      {
LABEL_22:
        *(_QWORD *)(v7 + 8 * v9) = v9 - ++v8;
      }
      else
      {
        while ( v8 )
        {
          v8 -= *(_QWORD *)(v7 + 8 * v8);
          if ( *(_BYTE *)(a5 + v8) == v10 )
            goto LABEL_22;
        }
        *(_QWORD *)(v7 + 8 * v9) = v9;
        v8 = 0LL;
      }
      ++v9;
    }
    while ( a1 != v9 );
  }
  *a2 = 0LL;
  v11 = *v5;
  v12 = v5;
  v13 = 0LL;
LABEL_12:
  while ( 2 )
  {
    if ( (_BYTE)v11 )
    {
      while ( *(_BYTE *)(a5 + v13) != (_BYTE)v11 )
      {
        if ( !v13 )
        {
          v11 = v12[1];
          ++v5;
          ++v12;
          goto LABEL_12;
        }
        v14 = *(_QWORD *)(v7 + 8 * v13);
        v5 += v14;
        v13 -= v14;
        if ( !(_BYTE)v11 )
          goto LABEL_16;
      }
      if ( a1 != ++v13 )
      {
        v11 = (v12++)[1];
        continue;
      }
      *a2 = v5;
    }
    break;
  }
LABEL_16:
  sub_40B900(v7, a5, a1, a2, v11, v12);
  return 1LL;
}

void __noreturn sub_405D00()
{
  __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
}

signed __int64 __fastcall sub_405D20(mbstate_t *a1, char *a2, char **a3)
{
  __int64 v3; // r9@1
  void *v4; // rsp@3
  unsigned __int64 v5; // r12@3
  unsigned __int64 v6; // rbx@5
  __int64 v7; // r13@5
  __int64 v8; // rcx@6
  unsigned int v9; // eax@7
  __int64 v10; // r8@7
  char v11; // al@8
  size_t v12; // rdx@9
  size_t v13; // rax@15
  char *v14; // r14@15
  __int64 v15; // rax@15
  size_t v16; // rax@15
  __int64 v17; // r15@23
  signed __int64 v18; // r14@23
  bool v19; // cf@23
  bool v20; // zf@23
  char v21; // bl@24
  signed __int64 v22; // rax@29
  size_t v23; // rdx@30
  __int64 v24; // r15@34
  char *v25; // rax@34
  char v26; // al@34
  signed __int64 v27; // rax@37
  size_t v28; // rdx@38
  unsigned int v29; // eax@43
  unsigned int v30; // eax@48
  __int64 v31; // rdx@49
  unsigned __int64 v33; // rax@56
  void *v34; // rax@59
  size_t v35; // rax@61
  size_t v36; // rax@64
  char *v37; // rbx@64
  __int64 v38; // rax@64
  __int64 v39; // rax@64
  __int64 v40; // rbx@74
  __int64 v41; // r14@74
  unsigned int v42; // eax@80
  size_t v43; // rax@85
  char *v44; // r15@85
  __int64 v45; // rax@85
  __int64 v46; // rax@85
  size_t v47; // rax@94
  size_t v48; // rax@99
  char *v49; // rbx@99
  __int64 v50; // rax@99
  __int64 v51; // rax@99
  size_t v52; // rax@108
  size_t v53; // rax@112
  char **v54; // [sp+0h] [bp-110h]@1
  mbstate_t *ps; // [sp+8h] [bp-108h]@1
  unsigned __int64 v56; // [sp+10h] [bp-100h]@1
  mbstate_t *v57; // [sp+18h] [bp-F8h]@23
  char v58; // [sp+20h] [bp-F0h]@5
  __int64 v59; // [sp+24h] [bp-ECh]@5
  char v60; // [sp+2Ch] [bp-E4h]@5
  void *src; // [sp+30h] [bp-E0h]@5
  size_t n; // [sp+38h] [bp-D8h]@7
  char v63; // [sp+40h] [bp-D0h]@7
  unsigned int v64; // [sp+44h] [bp-CCh]@7
  __int64 v65; // [sp+48h] [bp-C8h]@9
  char v66; // [sp+60h] [bp-B0h]@34
  __int64 v67; // [sp+64h] [bp-ACh]@34
  char v68; // [sp+6Ch] [bp-A4h]@34
  char *s; // [sp+70h] [bp-A0h]@34
  __int64 v70; // [sp+78h] [bp-98h]@43
  char v71; // [sp+80h] [bp-90h]@43
  unsigned int v72; // [sp+84h] [bp-8Ch]@43
  char v73; // [sp+A0h] [bp-70h]@34
  __int64 v74; // [sp+A4h] [bp-6Ch]@34
  char v75; // [sp+ACh] [bp-64h]@34
  void *s2; // [sp+B0h] [bp-60h]@34
  __int64 v77; // [sp+B8h] [bp-58h]@38
  char v78; // [sp+C0h] [bp-50h]@36
  unsigned int v79; // [sp+C4h] [bp-4Ch]@48

  ps = a1;
  v54 = a3;
  v56 = sub_40BA40(a2);
  if ( v56 > 0x492492492492492LL )
    return 0LL;
  if ( 56 * v56 > 0xFAF )
  {
    LODWORD(v33) = sub_40B890();
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
      if ( ((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)src >> 5) & 7)] >> v8) & 1 )
      {
        n = 1LL;
        v9 = *(_BYTE *)src;
        v63 = 1;
        v64 = v9;
        v10 = v9;
        v60 = 1;
        if ( !v9 )
          goto LABEL_23;
        goto LABEL_8;
      }
      if ( !mbsinit((const mbstate_t *)&v59) )
        goto LABEL_114;
      v58 = 1;
    }
    v13 = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    LODWORD(v15) = sub_409040(src, v13);
    a2 = v14;
    LODWORD(v16) = sub_40B170(&v64, v14, v15, &v59);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v63 = 0;
      v60 = 1;
      goto LABEL_9;
    }
    if ( v16 != -2LL )
      break;
    v35 = strlen((const char *)src);
    v63 = 0;
    n = v35;
    v11 = 0;
    v60 = 1;
LABEL_9:
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
      goto LABEL_113;
    if ( v64 )
      goto LABEL_115;
  }
  v63 = 1;
  if ( mbsinit((const mbstate_t *)&v59) )
    v58 = 0;
  v10 = v64;
  v60 = 1;
  if ( v64 )
  {
LABEL_8:
    v11 = 1;
    goto LABEL_9;
  }
LABEL_23:
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
            goto LABEL_32;
        }
        else
        {
          v23 = *(_QWORD *)(v18 + 8);
          if ( v23 == *(_QWORD *)(v22 + 8) )
          {
            a2 = *(char **)v22;
            if ( !memcmp(*(const void **)v18, *(const void **)v22, v23) )
            {
LABEL_32:
              *(_QWORD *)(v7 + 8LL * (_QWORD)v57) = (char *)v57 - ++v17;
              goto LABEL_33;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= *(_QWORD *)(v7 + 8 * v17);
      }
      *(_QWORD *)(v7 + 8LL * (_QWORD)v57) = v57;
LABEL_33:
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
LABEL_35:
  if ( v26 )
  {
    if ( !v78 )
      goto LABEL_37;
    goto LABEL_49;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v73 )
      {
        v8 = *(_BYTE *)s2;
        if ( ((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)s2 >> 5) & 7)] >> v8) & 1 )
        {
          v77 = 1LL;
          v30 = *(_BYTE *)s2;
          v78 = 1;
          v79 = v30;
          v75 = 1;
          goto LABEL_49;
        }
        if ( !mbsinit(ps) )
          goto LABEL_114;
        v73 = 1;
      }
      v36 = __ctype_get_mb_cur_max();
      v37 = (char *)s2;
      LODWORD(v38) = sub_409040(s2, v36);
      a2 = v37;
      LODWORD(v39) = sub_40B170(&v79, v37, v38, &v74);
      v77 = v39;
      if ( v39 == -1 )
      {
        v77 = 1LL;
        v78 = 0;
        v75 = 1;
LABEL_37:
        v27 = v5 + 48 * v24;
        goto LABEL_38;
      }
      if ( v39 == -2 )
      {
        v52 = strlen((const char *)s2);
        v78 = 0;
        v77 = v52;
        v75 = 1;
        goto LABEL_37;
      }
      if ( !v39 )
      {
        v77 = 1LL;
        if ( *(_BYTE *)s2 )
          goto LABEL_113;
        if ( v79 )
          goto LABEL_115;
      }
      v78 = 1;
      if ( mbsinit((const mbstate_t *)&v74) )
        v73 = 0;
      v75 = 1;
LABEL_49:
      v31 = v79;
      if ( !v79 )
        goto LABEL_54;
      v27 = v5 + 48 * v24;
      if ( *(_BYTE *)(v27 + 16) )
      {
        if ( *(_DWORD *)(v27 + 20) != v79 )
        {
LABEL_39:
          if ( !v24 )
            goto LABEL_40;
          goto LABEL_74;
        }
      }
      else
      {
LABEL_38:
        v28 = *(_QWORD *)(v27 + 8);
        if ( v28 != v77 )
          goto LABEL_39;
        a2 = (char *)s2;
        if ( memcmp(*(const void **)v27, s2, v28) )
        {
          if ( !v24 )
          {
LABEL_40:
            if ( v68 )
            {
              if ( v71 )
                goto LABEL_44;
              goto LABEL_45;
            }
            if ( !v66 )
            {
              if ( ((unsigned int)dword_40F520[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
              {
                v70 = 1LL;
                v29 = *s;
                v71 = 1;
                v72 = v29;
                v68 = 1;
LABEL_44:
                if ( !v72 )
LABEL_117:
                  abort();
LABEL_45:
                s += v70;
                s2 = (char *)s2 + v77;
                v68 = 0;
                v75 = 0;
                continue;
              }
              if ( mbsinit(v57) )
              {
                v66 = 1;
                goto LABEL_99;
              }
LABEL_114:
              __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_99:
            v48 = __ctype_get_mb_cur_max();
            v49 = s;
            LODWORD(v50) = sub_409040(s, v48);
            a2 = v49;
            LODWORD(v51) = sub_40B170(&v72, v49, v50, &v67);
            v70 = v51;
            if ( v51 == -1 )
            {
              v70 = 1LL;
              v71 = 0;
              goto LABEL_45;
            }
            if ( v51 == -2 )
            {
              v53 = strlen(s);
              v71 = 0;
              v70 = v53;
              goto LABEL_45;
            }
            if ( v51 )
            {
LABEL_104:
              v71 = 1;
              if ( mbsinit((const mbstate_t *)&v67) )
                v66 = 0;
              v68 = 1;
              goto LABEL_44;
            }
            v70 = 1LL;
            if ( !*s )
            {
              if ( !v72 )
                goto LABEL_104;
LABEL_115:
              sub_405D00();
            }
LABEL_113:
            __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_74:
          v40 = *(_QWORD *)(v7 + 8 * v24);
          v26 = v75;
          v41 = v24 - v40;
          if ( !v40 )
            goto LABEL_35;
          if ( !v68 )
            goto LABEL_78;
          if ( v71 )
            goto LABEL_81;
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
                  goto LABEL_35;
                }
LABEL_78:
                if ( !v66 )
                {
                  v8 = (unsigned __int8)*s;
                  if ( ((unsigned int)dword_40F520[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> v8) & 1 )
                  {
                    v70 = 1LL;
                    v42 = *s;
                    v71 = 1;
                    v72 = v42;
                    v68 = 1;
LABEL_81:
                    a2 = (char *)v72;
                    if ( !v72 )
                      goto LABEL_117;
                    continue;
                  }
                  if ( !mbsinit(v57) )
                    goto LABEL_114;
                  v66 = 1;
                }
                break;
              }
              v43 = __ctype_get_mb_cur_max();
              v44 = s;
              LODWORD(v45) = sub_409040(s, v43);
              a2 = v44;
              LODWORD(v46) = sub_40B170(&v72, v44, v45, &v67);
              v70 = v46;
              if ( v46 == -1 )
              {
                v70 = 1LL;
                v71 = 0;
                continue;
              }
              break;
            }
            if ( v46 == -2 )
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
              goto LABEL_113;
            if ( v72 )
              __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
          }
          v71 = 1;
          if ( mbsinit((const mbstate_t *)&v67) )
            v66 = 0;
          v68 = 1;
          goto LABEL_81;
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
LABEL_54:
  sub_40B900(v5, a2, v31, v8, v10, v3);
  return 1LL;
}

signed __int64 __fastcall sub_405D20(mbstate_t *a1, char *a2, char **a3)
{
  __int64 v3; // r9@1
  void *v4; // rsp@3
  unsigned __int64 v5; // r12@3
  unsigned __int64 v6; // rbx@5
  __int64 v7; // r13@5
  __int64 v8; // rcx@6
  unsigned int v9; // eax@7
  __int64 v10; // r8@7
  char v11; // al@8
  size_t v12; // rdx@9
  size_t v13; // rax@15
  char *v14; // r14@15
  __int64 v15; // rax@15
  size_t v16; // rax@15
  __int64 v17; // r15@23
  signed __int64 v18; // r14@23
  bool v19; // cf@23
  bool v20; // zf@23
  char v21; // bl@24
  signed __int64 v22; // rax@29
  size_t v23; // rdx@30
  __int64 v24; // r15@34
  char *v25; // rax@34
  char v26; // al@34
  signed __int64 v27; // rax@37
  size_t v28; // rdx@38
  unsigned int v29; // eax@43
  unsigned int v30; // eax@48
  __int64 v31; // rdx@49
  unsigned __int64 v33; // rax@56
  void *v34; // rax@59
  size_t v35; // rax@61
  size_t v36; // rax@64
  char *v37; // rbx@64
  __int64 v38; // rax@64
  __int64 v39; // rax@64
  __int64 v40; // rbx@74
  __int64 v41; // r14@74
  unsigned int v42; // eax@80
  size_t v43; // rax@85
  char *v44; // r15@85
  __int64 v45; // rax@85
  __int64 v46; // rax@85
  size_t v47; // rax@94
  size_t v48; // rax@99
  char *v49; // rbx@99
  __int64 v50; // rax@99
  __int64 v51; // rax@99
  size_t v52; // rax@108
  size_t v53; // rax@112
  char **v54; // [sp+0h] [bp-110h]@1
  mbstate_t *ps; // [sp+8h] [bp-108h]@1
  unsigned __int64 v56; // [sp+10h] [bp-100h]@1
  mbstate_t *v57; // [sp+18h] [bp-F8h]@23
  char v58; // [sp+20h] [bp-F0h]@5
  __int64 v59; // [sp+24h] [bp-ECh]@5
  char v60; // [sp+2Ch] [bp-E4h]@5
  void *src; // [sp+30h] [bp-E0h]@5
  size_t n; // [sp+38h] [bp-D8h]@7
  char v63; // [sp+40h] [bp-D0h]@7
  unsigned int v64; // [sp+44h] [bp-CCh]@7
  __int64 v65; // [sp+48h] [bp-C8h]@9
  char v66; // [sp+60h] [bp-B0h]@34
  __int64 v67; // [sp+64h] [bp-ACh]@34
  char v68; // [sp+6Ch] [bp-A4h]@34
  char *s; // [sp+70h] [bp-A0h]@34
  __int64 v70; // [sp+78h] [bp-98h]@43
  char v71; // [sp+80h] [bp-90h]@43
  unsigned int v72; // [sp+84h] [bp-8Ch]@43
  char v73; // [sp+A0h] [bp-70h]@34
  __int64 v74; // [sp+A4h] [bp-6Ch]@34
  char v75; // [sp+ACh] [bp-64h]@34
  void *s2; // [sp+B0h] [bp-60h]@34
  __int64 v77; // [sp+B8h] [bp-58h]@38
  char v78; // [sp+C0h] [bp-50h]@36
  unsigned int v79; // [sp+C4h] [bp-4Ch]@48

  ps = a1;
  v54 = a3;
  v56 = sub_40BA40(a2);
  if ( v56 > 0x492492492492492LL )
    return 0LL;
  if ( 56 * v56 > 0xFAF )
  {
    LODWORD(v33) = sub_40B890();
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
      if ( ((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)src >> 5) & 7)] >> v8) & 1 )
      {
        n = 1LL;
        v9 = *(_BYTE *)src;
        v63 = 1;
        v64 = v9;
        v10 = v9;
        v60 = 1;
        if ( !v9 )
          goto LABEL_23;
        goto LABEL_8;
      }
      if ( !mbsinit((const mbstate_t *)&v59) )
        goto LABEL_114;
      v58 = 1;
    }
    v13 = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    LODWORD(v15) = sub_409040(src, v13);
    a2 = v14;
    LODWORD(v16) = sub_40B170(&v64, v14, v15, &v59);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v63 = 0;
      v60 = 1;
      goto LABEL_9;
    }
    if ( v16 != -2LL )
      break;
    v35 = strlen((const char *)src);
    v63 = 0;
    n = v35;
    v11 = 0;
    v60 = 1;
LABEL_9:
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
      goto LABEL_113;
    if ( v64 )
      goto LABEL_115;
  }
  v63 = 1;
  if ( mbsinit((const mbstate_t *)&v59) )
    v58 = 0;
  v10 = v64;
  v60 = 1;
  if ( v64 )
  {
LABEL_8:
    v11 = 1;
    goto LABEL_9;
  }
LABEL_23:
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
            goto LABEL_32;
        }
        else
        {
          v23 = *(_QWORD *)(v18 + 8);
          if ( v23 == *(_QWORD *)(v22 + 8) )
          {
            a2 = *(char **)v22;
            if ( !memcmp(*(const void **)v18, *(const void **)v22, v23) )
            {
LABEL_32:
              *(_QWORD *)(v7 + 8LL * (_QWORD)v57) = (char *)v57 - ++v17;
              goto LABEL_33;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= *(_QWORD *)(v7 + 8 * v17);
      }
      *(_QWORD *)(v7 + 8LL * (_QWORD)v57) = v57;
LABEL_33:
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
LABEL_35:
  if ( v26 )
  {
    if ( !v78 )
      goto LABEL_37;
    goto LABEL_49;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v73 )
      {
        v8 = *(_BYTE *)s2;
        if ( ((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)s2 >> 5) & 7)] >> v8) & 1 )
        {
          v77 = 1LL;
          v30 = *(_BYTE *)s2;
          v78 = 1;
          v79 = v30;
          v75 = 1;
          goto LABEL_49;
        }
        if ( !mbsinit(ps) )
          goto LABEL_114;
        v73 = 1;
      }
      v36 = __ctype_get_mb_cur_max();
      v37 = (char *)s2;
      LODWORD(v38) = sub_409040(s2, v36);
      a2 = v37;
      LODWORD(v39) = sub_40B170(&v79, v37, v38, &v74);
      v77 = v39;
      if ( v39 == -1 )
      {
        v77 = 1LL;
        v78 = 0;
        v75 = 1;
LABEL_37:
        v27 = v5 + 48 * v24;
        goto LABEL_38;
      }
      if ( v39 == -2 )
      {
        v52 = strlen((const char *)s2);
        v78 = 0;
        v77 = v52;
        v75 = 1;
        goto LABEL_37;
      }
      if ( !v39 )
      {
        v77 = 1LL;
        if ( *(_BYTE *)s2 )
          goto LABEL_113;
        if ( v79 )
          goto LABEL_115;
      }
      v78 = 1;
      if ( mbsinit((const mbstate_t *)&v74) )
        v73 = 0;
      v75 = 1;
LABEL_49:
      v31 = v79;
      if ( !v79 )
        goto LABEL_54;
      v27 = v5 + 48 * v24;
      if ( *(_BYTE *)(v27 + 16) )
      {
        if ( *(_DWORD *)(v27 + 20) != v79 )
        {
LABEL_39:
          if ( !v24 )
            goto LABEL_40;
          goto LABEL_74;
        }
      }
      else
      {
LABEL_38:
        v28 = *(_QWORD *)(v27 + 8);
        if ( v28 != v77 )
          goto LABEL_39;
        a2 = (char *)s2;
        if ( memcmp(*(const void **)v27, s2, v28) )
        {
          if ( !v24 )
          {
LABEL_40:
            if ( v68 )
            {
              if ( v71 )
                goto LABEL_44;
              goto LABEL_45;
            }
            if ( !v66 )
            {
              if ( ((unsigned int)dword_40F520[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
              {
                v70 = 1LL;
                v29 = *s;
                v71 = 1;
                v72 = v29;
                v68 = 1;
LABEL_44:
                if ( !v72 )
LABEL_117:
                  abort();
LABEL_45:
                s += v70;
                s2 = (char *)s2 + v77;
                v68 = 0;
                v75 = 0;
                continue;
              }
              if ( mbsinit(v57) )
              {
                v66 = 1;
                goto LABEL_99;
              }
LABEL_114:
              __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_99:
            v48 = __ctype_get_mb_cur_max();
            v49 = s;
            LODWORD(v50) = sub_409040(s, v48);
            a2 = v49;
            LODWORD(v51) = sub_40B170(&v72, v49, v50, &v67);
            v70 = v51;
            if ( v51 == -1 )
            {
              v70 = 1LL;
              v71 = 0;
              goto LABEL_45;
            }
            if ( v51 == -2 )
            {
              v53 = strlen(s);
              v71 = 0;
              v70 = v53;
              goto LABEL_45;
            }
            if ( v51 )
            {
LABEL_104:
              v71 = 1;
              if ( mbsinit((const mbstate_t *)&v67) )
                v66 = 0;
              v68 = 1;
              goto LABEL_44;
            }
            v70 = 1LL;
            if ( !*s )
            {
              if ( !v72 )
                goto LABEL_104;
LABEL_115:
              sub_405D00();
            }
LABEL_113:
            __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_74:
          v40 = *(_QWORD *)(v7 + 8 * v24);
          v26 = v75;
          v41 = v24 - v40;
          if ( !v40 )
            goto LABEL_35;
          if ( !v68 )
            goto LABEL_78;
          if ( v71 )
            goto LABEL_81;
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
                  goto LABEL_35;
                }
LABEL_78:
                if ( !v66 )
                {
                  v8 = (unsigned __int8)*s;
                  if ( ((unsigned int)dword_40F520[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> v8) & 1 )
                  {
                    v70 = 1LL;
                    v42 = *s;
                    v71 = 1;
                    v72 = v42;
                    v68 = 1;
LABEL_81:
                    a2 = (char *)v72;
                    if ( !v72 )
                      goto LABEL_117;
                    continue;
                  }
                  if ( !mbsinit(v57) )
                    goto LABEL_114;
                  v66 = 1;
                }
                break;
              }
              v43 = __ctype_get_mb_cur_max();
              v44 = s;
              LODWORD(v45) = sub_409040(s, v43);
              a2 = v44;
              LODWORD(v46) = sub_40B170(&v72, v44, v45, &v67);
              v70 = v46;
              if ( v46 == -1 )
              {
                v70 = 1LL;
                v71 = 0;
                continue;
              }
              break;
            }
            if ( v46 == -2 )
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
              goto LABEL_113;
            if ( v72 )
              __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
          }
          v71 = 1;
          if ( mbsinit((const mbstate_t *)&v67) )
            v66 = 0;
          v68 = 1;
          goto LABEL_81;
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
LABEL_54:
  sub_40B900(v5, a2, v31, v8, v10, v3);
  return 1LL;
}

mbstate_t __fastcall sub_4066F0(mbstate_t *a1, char *a2)
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
  __int64 v18; // rbp@12
  int v19; // ecx@15
  char v20; // cl@20
  signed __int64 v21; // rdx@23
  __int64 v22; // rdi@23
  char v23; // si@24
  char v24; // cl@26
  unsigned __int64 v25; // r12@29
  unsigned __int64 v26; // rbx@29
  char v27; // r14@29
  __int128 *v28; // r15@30
  int v29; // eax@32
  int v30; // ecx@39
  __m128i v31; // xmm1@39
  __m128i v32; // xmm0@39
  __m128i v33; // xmm2@39
  __m128i v34; // xmm3@39
  unsigned int v35; // eax@39
  int v36; // eax@44
  __int32 v37; // eax@48
  __int32 v38; // eax@49
  bool v39; // al@51
  size_t v40; // rax@55
  void *v41; // r15@55
  __int64 v42; // rax@55
  void *v43; // rax@55
  size_t v44; // r15@66
  size_t v45; // rax@70
  void *v46; // r15@70
  __int64 v47; // rax@70
  void *v48; // rax@70
  size_t v49; // rax@94
  size_t v50; // ST00_8@94
  __int64 v51; // rax@94
  size_t v52; // rax@94
  void *v53; // rax@102
  void *v54; // rax@103
  unsigned __int64 v55; // r14@106
  int v56; // eax@112
  char v57; // dl@116
  size_t v58; // rax@119
  char *v59; // r15@119
  __int64 v60; // rax@119
  __int64 v61; // rax@119
  size_t v62; // rax@128
  size_t v63; // rax@129
  int v64; // eax@132
  size_t v65; // rax@138
  void *v66; // ST00_8@138
  __int64 v67; // rax@138
  void *v68; // rax@138
  size_t v69; // rax@148
  char *v70; // r14@148
  __int64 v71; // rax@148
  __int64 v72; // rax@148
  size_t v73; // rax@157
  char *v74; // r12@157
  __int64 v75; // rax@157
  __int64 v76; // rax@157
  void *v77; // rax@165
  size_t v78; // rax@166
  size_t v79; // rax@168
  unsigned __int64 v80; // [sp+8h] [bp-180h]@29
  mbstate_t v81; // [sp+14h] [bp-174h]@15
  char v82; // [sp+1Ch] [bp-16Ch]@15
  char *v83; // [sp+20h] [bp-168h]@15
  __int64 v84; // [sp+28h] [bp-160h]@16
  char v85; // [sp+30h] [bp-158h]@16
  int v86; // [sp+34h] [bp-154h]@16
  char v87; // [sp+50h] [bp-138h]@29
  mbstate_t v88; // [sp+54h] [bp-134h]@29
  char v89; // [sp+5Ch] [bp-12Ch]@29
  char *s; // [sp+60h] [bp-128h]@29
  __int64 v91; // [sp+68h] [bp-120h]@109
  char v92; // [sp+70h] [bp-118h]@108
  int v93; // [sp+74h] [bp-114h]@112
  __int128 v94; // [sp+90h] [bp-F8h]@29
  size_t n[2]; // [sp+A0h] [bp-E8h]@29
  __int128 v96; // [sp+B0h] [bp-D8h]@32
  __int128 v97; // [sp+C0h] [bp-C8h]@39
  mbstate_t v98[2]; // [sp+D0h] [bp-B8h]@39
  void *s1[2]; // [sp+E0h] [bp-A8h]@39
  __m128i v100; // [sp+F0h] [bp-98h]@39
  __m128i v101; // [sp+100h] [bp-88h]@39
  mbstate_t ps; // [sp+110h] [bp-78h]@7
  char v103; // [sp+11Ch] [bp-6Ch]@39
  void *s2; // [sp+120h] [bp-68h]@39
  void *v105; // [sp+128h] [bp-60h]@40
  char v106; // [sp+130h] [bp-58h]@40
  int v107; // [sp+134h] [bp-54h]@40

  v2 = (__int64)a2;
  v3 = a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v19 = *a2;
    v83 = a2;
    v82 = 0;
    v81 = 0LL;
    if ( ((unsigned int)dword_40F520[(unsigned __int64)((unsigned __int8)v19 >> 5)] >> v19) & 1 )
    {
      v84 = 1LL;
      v86 = v19;
      v85 = 1;
      v82 = 1;
LABEL_17:
      if ( !v86 )
        return (mbstate_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v81) )
      goto LABEL_173;
    v73 = __ctype_get_mb_cur_max();
    v74 = v83;
    LODWORD(v75) = sub_409040(v83, v73);
    LODWORD(v76) = sub_40B170(&v86, v74, v75, &v81);
    v84 = v76;
    if ( v76 == -1 )
    {
      v84 = 1LL;
      v85 = 0;
      v82 = 1;
    }
    else
    {
      if ( v76 != -2 )
      {
        if ( !v76 )
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
      v79 = strlen(v83);
      v85 = 0;
      v84 = v79;
      v82 = 1;
    }
LABEL_29:
    s = a2;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 1;
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
      v28 = &v94;
      if ( !(_BYTE)v94 )
      {
        if ( ((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)n[0] >> 5) & 7)] >> *(_BYTE *)n[0]) & 1 )
        {
          n[1] = 1LL;
          v29 = *(_BYTE *)n[0];
          LOBYTE(v96) = 1;
          DWORD1(v96) = v29;
          BYTE12(v94) = 1;
          goto LABEL_33;
        }
        v28 = &v94;
        if ( !mbsinit((const mbstate_t *)((char *)&v94 + 4)) )
          goto LABEL_173;
        LOBYTE(v94) = 1;
      }
      v49 = __ctype_get_mb_cur_max();
      v50 = n[0];
      LODWORD(v51) = sub_409040(n[0], v49);
      LODWORD(v52) = sub_40B170((char *)v28 + 36, v50, v51, (char *)v28 + 4);
      n[1] = v52;
      if ( v52 == -1LL )
      {
        n[1] = 1LL;
        LOBYTE(v96) = 0;
        BYTE12(v94) = 1;
        goto LABEL_85;
      }
      if ( v52 == -2LL )
      {
        v63 = strlen((const char *)n[0]);
        LOBYTE(v96) = 0;
        n[1] = v63;
        BYTE12(v94) = 1;
LABEL_85:
        if ( !((unsigned __int8)v27 & (v25 > 9)) )
        {
          ++v26;
          goto LABEL_88;
        }
        if ( v26 < 5 * v25 )
        {
          ++v26;
          v27 &= v25 > 9;
          goto LABEL_88;
        }
LABEL_106:
        v55 = v26 - v80;
        if ( v26 == v80 )
        {
          if ( !v89 )
            goto LABEL_130;
          if ( !v92 )
            goto LABEL_134;
LABEL_133:
          if ( v93 )
            goto LABEL_134;
LABEL_115:
          v27 = sub_405D20(a1, a2, (char **)&ps);
          if ( v27 )
            return ps;
          v57 = v96;
LABEL_135:
          v80 = v26++;
          if ( !v57 )
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
            while ( 2 )
            {
              v89 = 0;
              s += v91;
              if ( !--v55 )
                goto LABEL_130;
LABEL_110:
              if ( !v87 )
              {
                if ( ((unsigned int)dword_40F520[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
                {
                  v91 = 1LL;
                  v56 = *s;
                  v92 = 1;
                  v93 = v56;
                  v89 = 1;
LABEL_113:
                  if ( !v93 )
                  {
                    if ( v89 )
                      goto LABEL_115;
LABEL_130:
                    if ( !v87 )
                    {
                      if ( ((unsigned int)dword_40F520[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
                      {
                        v91 = 1LL;
                        v64 = *s;
                        v92 = 1;
                        v93 = v64;
                        v89 = 1;
                        goto LABEL_133;
                      }
                      if ( !mbsinit(&v88) )
                        goto LABEL_173;
                      v87 = 1;
                    }
                    v69 = __ctype_get_mb_cur_max();
                    v70 = s;
                    LODWORD(v71) = sub_409040(s, v69);
                    LODWORD(v72) = sub_40B170(&v93, v70, v71, &v88);
                    v91 = v72;
                    if ( v72 == -1 )
                    {
                      v91 = 1LL;
                      v92 = 0;
                      v89 = 1;
                    }
                    else
                    {
                      if ( v72 != -2 )
                      {
                        if ( !v72 )
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
                      v78 = strlen(s);
                      v92 = 0;
                      v91 = v78;
                      v89 = 1;
                    }
LABEL_134:
                    v57 = v96;
                    v27 = 1;
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
            v58 = __ctype_get_mb_cur_max();
            v59 = s;
            LODWORD(v60) = sub_409040(s, v58);
            LODWORD(v61) = sub_40B170(&v93, v59, v60, &v88);
            v91 = v61;
            if ( v61 == -1 )
            {
              v91 = 1LL;
              v92 = 0;
              continue;
            }
            break;
          }
          if ( v61 == -2 )
          {
            v62 = strlen(s);
            v92 = 0;
            v91 = v62;
            continue;
          }
          break;
        }
        if ( !v61 )
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
        goto LABEL_113;
      }
      if ( !v52 )
      {
        n[1] = 1LL;
        if ( *(_BYTE *)n[0] )
          goto LABEL_174;
        if ( DWORD1(v96) )
          goto LABEL_162;
      }
      LOBYTE(v96) = 1;
      if ( mbsinit((const mbstate_t *)((char *)v28 + 4)) )
        LOBYTE(v94) = 0;
      BYTE12(v94) = 1;
LABEL_33:
      if ( !DWORD1(v96) )
        return 0LL;
      if ( (unsigned __int8)v27 & (v25 > 9) )
      {
        if ( v26 >= 5 * v25 )
          goto LABEL_106;
        ++v26;
        v27 &= v25 > 9;
      }
      else
      {
        ++v26;
      }
LABEL_37:
      if ( v85 )
      {
        if ( DWORD1(v96) == v86 )
          goto LABEL_39;
LABEL_66:
        v44 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v44 = n[1];
      if ( n[1] == v84 && !memcmp((const void *)n[0], v83, n[1]) )
      {
LABEL_39:
        v30 = *a2;
        v31 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v32 = _mm_load_si128((const __m128i *)&v94);
        LOBYTE(ps.__count) = 0;
        *(__m128i *)s1 = v31;
        v33 = _mm_load_si128((const __m128i *)&v96);
        s1[0] = (void *)(v31.m128i_i64[1] + v31.m128i_i64[0]);
        v34 = _mm_load_si128((const __m128i *)&v97);
        *(__m128i *)&v98[0].__count = v32;
        v100 = v33;
        v35 = dword_40F520[(unsigned __int64)((unsigned __int8)v30 >> 5)];
        v101 = v34;
        v98[1].__wchb[0] = 0;
        v103 = 0;
        *(mbstate_t *)((char *)&ps + 4) = 0LL;
        if ( (v35 >> v30) & 1 )
        {
          v105 = (void *)1;
          v107 = v30;
          v106 = 1;
          v103 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
        {
          LOBYTE(ps.__count) = 1;
          v65 = __ctype_get_mb_cur_max();
          v66 = s2;
          LODWORD(v67) = sub_409040(s2, v65);
          LODWORD(v68) = sub_40B170(&v107, v66, v67, &ps.4);
          v105 = v68;
          if ( v68 == (void *)-1 )
          {
            v105 = (void *)1;
            v106 = 0;
          }
          else if ( v68 == (void *)-2 )
          {
            v77 = (void *)strlen((const char *)s2);
            v106 = 0;
            v105 = v77;
          }
          else
          {
            if ( !v68 )
            {
              v105 = (void *)1;
              if ( !*(_BYTE *)s2 )
              {
                if ( !v107 )
                  goto LABEL_143;
LABEL_162:
                sub_405D00();
              }
LABEL_174:
              __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
            }
LABEL_143:
            v106 = 1;
            if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
              LOBYTE(ps.__count) = 0;
            v103 = 1;
LABEL_41:
            if ( !v107 )
              abort();
          }
          v103 = 0;
          ++v26;
          s2 = (char *)s2 + (_QWORD)v105;
          while ( 2 )
          {
            if ( LOBYTE(ps.__count) )
            {
LABEL_55:
              v40 = __ctype_get_mb_cur_max();
              v41 = s2;
              LODWORD(v42) = sub_409040(s2, v40);
              LODWORD(v43) = sub_40B170(&v107, v41, v42, &ps.4);
              v105 = v43;
              if ( v43 == (void *)-1 )
              {
                v105 = (void *)1;
                v106 = 0;
                v103 = 1;
              }
              else if ( v43 == (void *)-2 )
              {
                v53 = (void *)strlen((const char *)s2);
                v106 = 0;
                v105 = v53;
                v103 = 1;
              }
              else
              {
                if ( !v43 )
                {
                  v105 = (void *)1;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_174;
                  if ( v107 )
                    goto LABEL_162;
                }
                v106 = 1;
                if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  LOBYTE(ps.__count) = 0;
                v103 = 1;
                if ( !v107 )
                  return (mbstate_t)n[0];
              }
            }
            else
            {
              if ( !(((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)s2 >> 5) & 7)] >> *(_BYTE *)s2) & 1) )
              {
                if ( !mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  break;
                LOBYTE(ps.__count) = 1;
                goto LABEL_55;
              }
              v105 = (void *)1;
              v36 = *(_BYTE *)s2;
              v106 = 1;
              v107 = v36;
              v103 = 1;
              if ( !v36 )
                return (mbstate_t)n[0];
            }
            if ( !v98[1].__wchb[0] )
            {
              if ( !LOBYTE(v98[0].__count) )
              {
                if ( ((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)s1[0] >> 5) & 7)] >> *(_BYTE *)s1[0]) & 1 )
                {
                  s1[1] = (void *)1;
                  v37 = *(_BYTE *)s1[0];
                  v100.m128i_i8[0] = 1;
                  v100.m128i_i32[1] = v37;
                  v98[1].__wchb[0] = 1;
LABEL_49:
                  v38 = v100.m128i_i32[1];
                  if ( !v100.m128i_i32[1] )
                    return 0LL;
LABEL_50:
                  if ( v106 )
                  {
                    v39 = v107 != v38;
LABEL_52:
                    if ( v39 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned int)s1[1];
                    ++v26;
                    s2 = (char *)s2 + (_QWORD)v105;
                    v98[1].__wchb[0] = 0;
                    v103 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != v105 )
                    goto LABEL_66;
                  v39 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((mbstate_t *)((char *)v98 + 4)) )
                  break;
                LOBYTE(v98[0].__count) = 1;
              }
              v45 = __ctype_get_mb_cur_max();
              v46 = s1[0];
              LODWORD(v47) = sub_409040(s1[0], v45);
              LODWORD(v48) = sub_40B170((char *)&v100.m128i_i64[0] + 4, v46, v47, &v98[0].4);
              s1[1] = v48;
              if ( v48 == (void *)-1 )
              {
                s1[1] = (void *)1;
                v100.m128i_i8[0] = 0;
                v98[1].__wchb[0] = 1;
              }
              else
              {
                if ( v48 != (void *)-2 )
                {
                  if ( !v48 )
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
                  v38 = v100.m128i_i32[1];
                  v98[1].__wchb[0] = 1;
                  if ( !v100.m128i_i32[1] )
                    return 0LL;
                  goto LABEL_50;
                }
                v54 = (void *)strlen((const char *)s1[0]);
                v100.m128i_i8[0] = 0;
                s1[1] = v54;
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
        __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v44;
      ++v25;
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
    LOBYTE(v9) = v11 & (v8 > 9);
    v18 = (unsigned int)v9;
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
        v11 = sub_405B80(v15, &ps, v18, v17, v2);
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
  v9 = (unsigned __int64)v3 + v21;
  while ( 1 )
  {
    v24 = *(_BYTE *)(v22 + v16);
    if ( !v24 )
      return (mbstate_t)v3;
    v23 = *(_BYTE *)(v9 + v16);
    if ( !v23 )
      return 0LL;
    ++v16;
    if ( v24 != v23 )
      goto LABEL_12;
  }
}

mbstate_t __fastcall sub_4066F0(mbstate_t *a1, char *a2)
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
  __int64 v18; // rbp@12
  int v19; // ecx@15
  char v20; // cl@20
  signed __int64 v21; // rdx@23
  __int64 v22; // rdi@23
  char v23; // si@24
  char v24; // cl@26
  unsigned __int64 v25; // r12@29
  unsigned __int64 v26; // rbx@29
  char v27; // r14@29
  __int128 *v28; // r15@30
  int v29; // eax@32
  int v30; // ecx@39
  __m128i v31; // xmm1@39
  __m128i v32; // xmm0@39
  __m128i v33; // xmm2@39
  __m128i v34; // xmm3@39
  unsigned int v35; // eax@39
  int v36; // eax@44
  __int32 v37; // eax@48
  __int32 v38; // eax@49
  bool v39; // al@51
  size_t v40; // rax@55
  void *v41; // r15@55
  __int64 v42; // rax@55
  void *v43; // rax@55
  size_t v44; // r15@66
  size_t v45; // rax@70
  void *v46; // r15@70
  __int64 v47; // rax@70
  void *v48; // rax@70
  size_t v49; // rax@94
  size_t v50; // ST00_8@94
  __int64 v51; // rax@94
  size_t v52; // rax@94
  void *v53; // rax@102
  void *v54; // rax@103
  unsigned __int64 v55; // r14@106
  int v56; // eax@112
  char v57; // dl@116
  size_t v58; // rax@119
  char *v59; // r15@119
  __int64 v60; // rax@119
  __int64 v61; // rax@119
  size_t v62; // rax@128
  size_t v63; // rax@129
  int v64; // eax@132
  size_t v65; // rax@138
  void *v66; // ST00_8@138
  __int64 v67; // rax@138
  void *v68; // rax@138
  size_t v69; // rax@148
  char *v70; // r14@148
  __int64 v71; // rax@148
  __int64 v72; // rax@148
  size_t v73; // rax@157
  char *v74; // r12@157
  __int64 v75; // rax@157
  __int64 v76; // rax@157
  void *v77; // rax@165
  size_t v78; // rax@166
  size_t v79; // rax@168
  unsigned __int64 v80; // [sp+8h] [bp-180h]@29
  mbstate_t v81; // [sp+14h] [bp-174h]@15
  char v82; // [sp+1Ch] [bp-16Ch]@15
  char *v83; // [sp+20h] [bp-168h]@15
  __int64 v84; // [sp+28h] [bp-160h]@16
  char v85; // [sp+30h] [bp-158h]@16
  int v86; // [sp+34h] [bp-154h]@16
  char v87; // [sp+50h] [bp-138h]@29
  mbstate_t v88; // [sp+54h] [bp-134h]@29
  char v89; // [sp+5Ch] [bp-12Ch]@29
  char *s; // [sp+60h] [bp-128h]@29
  __int64 v91; // [sp+68h] [bp-120h]@109
  char v92; // [sp+70h] [bp-118h]@108
  int v93; // [sp+74h] [bp-114h]@112
  __int128 v94; // [sp+90h] [bp-F8h]@29
  size_t n[2]; // [sp+A0h] [bp-E8h]@29
  __int128 v96; // [sp+B0h] [bp-D8h]@32
  __int128 v97; // [sp+C0h] [bp-C8h]@39
  mbstate_t v98[2]; // [sp+D0h] [bp-B8h]@39
  void *s1[2]; // [sp+E0h] [bp-A8h]@39
  __m128i v100; // [sp+F0h] [bp-98h]@39
  __m128i v101; // [sp+100h] [bp-88h]@39
  mbstate_t ps; // [sp+110h] [bp-78h]@7
  char v103; // [sp+11Ch] [bp-6Ch]@39
  void *s2; // [sp+120h] [bp-68h]@39
  void *v105; // [sp+128h] [bp-60h]@40
  char v106; // [sp+130h] [bp-58h]@40
  int v107; // [sp+134h] [bp-54h]@40

  v2 = (__int64)a2;
  v3 = a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v19 = *a2;
    v83 = a2;
    v82 = 0;
    v81 = 0LL;
    if ( ((unsigned int)dword_40F520[(unsigned __int64)((unsigned __int8)v19 >> 5)] >> v19) & 1 )
    {
      v84 = 1LL;
      v86 = v19;
      v85 = 1;
      v82 = 1;
LABEL_17:
      if ( !v86 )
        return (mbstate_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v81) )
      goto LABEL_173;
    v73 = __ctype_get_mb_cur_max();
    v74 = v83;
    LODWORD(v75) = sub_409040(v83, v73);
    LODWORD(v76) = sub_40B170(&v86, v74, v75, &v81);
    v84 = v76;
    if ( v76 == -1 )
    {
      v84 = 1LL;
      v85 = 0;
      v82 = 1;
    }
    else
    {
      if ( v76 != -2 )
      {
        if ( !v76 )
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
      v79 = strlen(v83);
      v85 = 0;
      v84 = v79;
      v82 = 1;
    }
LABEL_29:
    s = a2;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 1;
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
      v28 = &v94;
      if ( !(_BYTE)v94 )
      {
        if ( ((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)n[0] >> 5) & 7)] >> *(_BYTE *)n[0]) & 1 )
        {
          n[1] = 1LL;
          v29 = *(_BYTE *)n[0];
          LOBYTE(v96) = 1;
          DWORD1(v96) = v29;
          BYTE12(v94) = 1;
          goto LABEL_33;
        }
        v28 = &v94;
        if ( !mbsinit((const mbstate_t *)((char *)&v94 + 4)) )
          goto LABEL_173;
        LOBYTE(v94) = 1;
      }
      v49 = __ctype_get_mb_cur_max();
      v50 = n[0];
      LODWORD(v51) = sub_409040(n[0], v49);
      LODWORD(v52) = sub_40B170((char *)v28 + 36, v50, v51, (char *)v28 + 4);
      n[1] = v52;
      if ( v52 == -1LL )
      {
        n[1] = 1LL;
        LOBYTE(v96) = 0;
        BYTE12(v94) = 1;
        goto LABEL_85;
      }
      if ( v52 == -2LL )
      {
        v63 = strlen((const char *)n[0]);
        LOBYTE(v96) = 0;
        n[1] = v63;
        BYTE12(v94) = 1;
LABEL_85:
        if ( !((unsigned __int8)v27 & (v25 > 9)) )
        {
          ++v26;
          goto LABEL_88;
        }
        if ( v26 < 5 * v25 )
        {
          ++v26;
          v27 &= v25 > 9;
          goto LABEL_88;
        }
LABEL_106:
        v55 = v26 - v80;
        if ( v26 == v80 )
        {
          if ( !v89 )
            goto LABEL_130;
          if ( !v92 )
            goto LABEL_134;
LABEL_133:
          if ( v93 )
            goto LABEL_134;
LABEL_115:
          v27 = sub_405D20(a1, a2, (char **)&ps);
          if ( v27 )
            return ps;
          v57 = v96;
LABEL_135:
          v80 = v26++;
          if ( !v57 )
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
            while ( 2 )
            {
              v89 = 0;
              s += v91;
              if ( !--v55 )
                goto LABEL_130;
LABEL_110:
              if ( !v87 )
              {
                if ( ((unsigned int)dword_40F520[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
                {
                  v91 = 1LL;
                  v56 = *s;
                  v92 = 1;
                  v93 = v56;
                  v89 = 1;
LABEL_113:
                  if ( !v93 )
                  {
                    if ( v89 )
                      goto LABEL_115;
LABEL_130:
                    if ( !v87 )
                    {
                      if ( ((unsigned int)dword_40F520[(unsigned __int64)(((unsigned __int8)*s >> 5) & 7)] >> *s) & 1 )
                      {
                        v91 = 1LL;
                        v64 = *s;
                        v92 = 1;
                        v93 = v64;
                        v89 = 1;
                        goto LABEL_133;
                      }
                      if ( !mbsinit(&v88) )
                        goto LABEL_173;
                      v87 = 1;
                    }
                    v69 = __ctype_get_mb_cur_max();
                    v70 = s;
                    LODWORD(v71) = sub_409040(s, v69);
                    LODWORD(v72) = sub_40B170(&v93, v70, v71, &v88);
                    v91 = v72;
                    if ( v72 == -1 )
                    {
                      v91 = 1LL;
                      v92 = 0;
                      v89 = 1;
                    }
                    else
                    {
                      if ( v72 != -2 )
                      {
                        if ( !v72 )
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
                      v78 = strlen(s);
                      v92 = 0;
                      v91 = v78;
                      v89 = 1;
                    }
LABEL_134:
                    v57 = v96;
                    v27 = 1;
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
            v58 = __ctype_get_mb_cur_max();
            v59 = s;
            LODWORD(v60) = sub_409040(s, v58);
            LODWORD(v61) = sub_40B170(&v93, v59, v60, &v88);
            v91 = v61;
            if ( v61 == -1 )
            {
              v91 = 1LL;
              v92 = 0;
              continue;
            }
            break;
          }
          if ( v61 == -2 )
          {
            v62 = strlen(s);
            v92 = 0;
            v91 = v62;
            continue;
          }
          break;
        }
        if ( !v61 )
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
        goto LABEL_113;
      }
      if ( !v52 )
      {
        n[1] = 1LL;
        if ( *(_BYTE *)n[0] )
          goto LABEL_174;
        if ( DWORD1(v96) )
          goto LABEL_162;
      }
      LOBYTE(v96) = 1;
      if ( mbsinit((const mbstate_t *)((char *)v28 + 4)) )
        LOBYTE(v94) = 0;
      BYTE12(v94) = 1;
LABEL_33:
      if ( !DWORD1(v96) )
        return 0LL;
      if ( (unsigned __int8)v27 & (v25 > 9) )
      {
        if ( v26 >= 5 * v25 )
          goto LABEL_106;
        ++v26;
        v27 &= v25 > 9;
      }
      else
      {
        ++v26;
      }
LABEL_37:
      if ( v85 )
      {
        if ( DWORD1(v96) == v86 )
          goto LABEL_39;
LABEL_66:
        v44 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v44 = n[1];
      if ( n[1] == v84 && !memcmp((const void *)n[0], v83, n[1]) )
      {
LABEL_39:
        v30 = *a2;
        v31 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v32 = _mm_load_si128((const __m128i *)&v94);
        LOBYTE(ps.__count) = 0;
        *(__m128i *)s1 = v31;
        v33 = _mm_load_si128((const __m128i *)&v96);
        s1[0] = (void *)(v31.m128i_i64[1] + v31.m128i_i64[0]);
        v34 = _mm_load_si128((const __m128i *)&v97);
        *(__m128i *)&v98[0].__count = v32;
        v100 = v33;
        v35 = dword_40F520[(unsigned __int64)((unsigned __int8)v30 >> 5)];
        v101 = v34;
        v98[1].__wchb[0] = 0;
        v103 = 0;
        *(mbstate_t *)((char *)&ps + 4) = 0LL;
        if ( (v35 >> v30) & 1 )
        {
          v105 = (void *)1;
          v107 = v30;
          v106 = 1;
          v103 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
        {
          LOBYTE(ps.__count) = 1;
          v65 = __ctype_get_mb_cur_max();
          v66 = s2;
          LODWORD(v67) = sub_409040(s2, v65);
          LODWORD(v68) = sub_40B170(&v107, v66, v67, &ps.4);
          v105 = v68;
          if ( v68 == (void *)-1 )
          {
            v105 = (void *)1;
            v106 = 0;
          }
          else if ( v68 == (void *)-2 )
          {
            v77 = (void *)strlen((const char *)s2);
            v106 = 0;
            v105 = v77;
          }
          else
          {
            if ( !v68 )
            {
              v105 = (void *)1;
              if ( !*(_BYTE *)s2 )
              {
                if ( !v107 )
                  goto LABEL_143;
LABEL_162:
                sub_405D00();
              }
LABEL_174:
              __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
            }
LABEL_143:
            v106 = 1;
            if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
              LOBYTE(ps.__count) = 0;
            v103 = 1;
LABEL_41:
            if ( !v107 )
              abort();
          }
          v103 = 0;
          ++v26;
          s2 = (char *)s2 + (_QWORD)v105;
          while ( 2 )
          {
            if ( LOBYTE(ps.__count) )
            {
LABEL_55:
              v40 = __ctype_get_mb_cur_max();
              v41 = s2;
              LODWORD(v42) = sub_409040(s2, v40);
              LODWORD(v43) = sub_40B170(&v107, v41, v42, &ps.4);
              v105 = v43;
              if ( v43 == (void *)-1 )
              {
                v105 = (void *)1;
                v106 = 0;
                v103 = 1;
              }
              else if ( v43 == (void *)-2 )
              {
                v53 = (void *)strlen((const char *)s2);
                v106 = 0;
                v105 = v53;
                v103 = 1;
              }
              else
              {
                if ( !v43 )
                {
                  v105 = (void *)1;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_174;
                  if ( v107 )
                    goto LABEL_162;
                }
                v106 = 1;
                if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  LOBYTE(ps.__count) = 0;
                v103 = 1;
                if ( !v107 )
                  return (mbstate_t)n[0];
              }
            }
            else
            {
              if ( !(((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)s2 >> 5) & 7)] >> *(_BYTE *)s2) & 1) )
              {
                if ( !mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  break;
                LOBYTE(ps.__count) = 1;
                goto LABEL_55;
              }
              v105 = (void *)1;
              v36 = *(_BYTE *)s2;
              v106 = 1;
              v107 = v36;
              v103 = 1;
              if ( !v36 )
                return (mbstate_t)n[0];
            }
            if ( !v98[1].__wchb[0] )
            {
              if ( !LOBYTE(v98[0].__count) )
              {
                if ( ((unsigned int)dword_40F520[(unsigned __int64)((*(_BYTE *)s1[0] >> 5) & 7)] >> *(_BYTE *)s1[0]) & 1 )
                {
                  s1[1] = (void *)1;
                  v37 = *(_BYTE *)s1[0];
                  v100.m128i_i8[0] = 1;
                  v100.m128i_i32[1] = v37;
                  v98[1].__wchb[0] = 1;
LABEL_49:
                  v38 = v100.m128i_i32[1];
                  if ( !v100.m128i_i32[1] )
                    return 0LL;
LABEL_50:
                  if ( v106 )
                  {
                    v39 = v107 != v38;
LABEL_52:
                    if ( v39 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned int)s1[1];
                    ++v26;
                    s2 = (char *)s2 + (_QWORD)v105;
                    v98[1].__wchb[0] = 0;
                    v103 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != v105 )
                    goto LABEL_66;
                  v39 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((mbstate_t *)((char *)v98 + 4)) )
                  break;
                LOBYTE(v98[0].__count) = 1;
              }
              v45 = __ctype_get_mb_cur_max();
              v46 = s1[0];
              LODWORD(v47) = sub_409040(s1[0], v45);
              LODWORD(v48) = sub_40B170((char *)&v100.m128i_i64[0] + 4, v46, v47, &v98[0].4);
              s1[1] = v48;
              if ( v48 == (void *)-1 )
              {
                s1[1] = (void *)1;
                v100.m128i_i8[0] = 0;
                v98[1].__wchb[0] = 1;
              }
              else
              {
                if ( v48 != (void *)-2 )
                {
                  if ( !v48 )
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
                  v38 = v100.m128i_i32[1];
                  v98[1].__wchb[0] = 1;
                  if ( !v100.m128i_i32[1] )
                    return 0LL;
                  goto LABEL_50;
                }
                v54 = (void *)strlen((const char *)s1[0]);
                v100.m128i_i8[0] = 0;
                s1[1] = v54;
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
        __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v44;
      ++v25;
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
    LOBYTE(v9) = v11 & (v8 > 9);
    v18 = (unsigned int)v9;
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
        v11 = sub_405B80(v15, &ps, v18, v17, v2);
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
  v9 = (unsigned __int64)v3 + v21;
  while ( 1 )
  {
    v24 = *(_BYTE *)(v22 + v16);
    if ( !v24 )
      return (mbstate_t)v3;
    v23 = *(_BYTE *)(v9 + v16);
    if ( !v23 )
      return 0LL;
    ++v16;
    if ( v24 != v23 )
      goto LABEL_12;
  }
}

char *__fastcall sub_4075C0(const char *a1)
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
  qword_612528 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_407660(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  const char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  LODWORD(v4) = sub_40B320(0LL);
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

unsigned __int64 __fastcall sub_407760(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
{
  __int64 v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // ebp@1
  char v12; // zf@1
  size_t v13; // rax@1
  int v14; // edx@1
  signed int v15; // er11@1
  unsigned __int64 v16; // r10@1
  unsigned __int64 v17; // rbx@2
  signed int v18; // eax@3
  unsigned __int64 v19; // r11@3
  signed int v20; // er10@3
  unsigned __int64 v21; // r13@3
  int v22; // er8@3
  char *v23; // r9@7
  signed int v24; // ST58_4@11
  unsigned __int8 v25; // ST50_1@11
  size_t v26; // rax@11
  signed int v27; // ST60_4@13
  unsigned __int64 v28; // ST58_8@13
  unsigned __int8 v29; // ST50_1@13
  int v30; // eax@13
  unsigned __int64 v31; // r12@15
  bool v32; // al@19
  const char *v33; // rax@50
  char i; // al@52
  signed int v35; // ST48_4@56
  unsigned __int64 v36; // ST30_8@56
  size_t v37; // rax@56
  bool v38; // al@60
  char v39; // cl@87
  int v40; // eax@105
  signed __int64 v41; // rcx@112
  unsigned __int64 v42; // rax@115
  signed int v43; // ST58_4@125
  unsigned __int64 v44; // ST50_8@125
  unsigned __int8 v45; // ST48_1@125
  const unsigned __int16 **v46; // rax@125
  unsigned __int64 v47; // rcx@125
  int v48; // edx@125
  unsigned __int64 result; // rax@132
  signed __int64 v50; // rsi@161
  char v51; // dl@177
  const char *v52; // rax@178
  signed int v53; // ST58_4@185
  char v54; // ST50_1@185
  char *v55; // ST48_8@185
  size_t v56; // rax@185
  unsigned __int64 v57; // rbx@186
  unsigned __int64 v58; // r14@190
  __int64 v59; // rax@190
  __int64 v60; // r15@190
  char *v61; // rdx@195
  unsigned __int64 v62; // rcx@206
  int v63; // eax@206
  char v64; // si@206
  unsigned __int64 v65; // rsi@255
  char *v66; // rdi@255
  unsigned __int64 v67; // rax@255
  int v68; // [sp+Ch] [bp-ACh]@1
  char v69; // [sp+Ch] [bp-ACh]@2
  unsigned __int64 v70; // [sp+10h] [bp-A8h]@1
  char v71; // [sp+10h] [bp-A8h]@7
  char *s; // [sp+18h] [bp-A0h]@1
  unsigned __int64 n; // [sp+20h] [bp-98h]@2
  char *v74; // [sp+28h] [bp-90h]@13
  unsigned __int64 v75; // [sp+28h] [bp-90h]@186
  signed int v76; // [sp+30h] [bp-88h]@186
  __int64 v77; // [sp+38h] [bp-80h]@186
  unsigned __int64 v78; // [sp+40h] [bp-78h]@186
  const char *s2; // [sp+48h] [bp-70h]@2
  size_t v80; // [sp+50h] [bp-68h]@1
  char v81; // [sp+58h] [bp-60h]@1
  bool v82; // [sp+5Dh] [bp-5Bh]@2
  unsigned __int8 v83; // [sp+5Eh] [bp-5Ah]@186
  unsigned __int64 v84; // [sp+60h] [bp-58h]@186
  char *v85; // [sp+68h] [bp-50h]@186
  wint_t wc; // [sp+74h] [bp-44h]@187
  mbstate_t ps; // [sp+78h] [bp-40h]@184

  v9 = (__int64)a1;
  v10 = a2;
  v11 = a6 & 2;
  s = a3;
  v70 = a4;
  v68 = a5;
  v81 = a6;
  v13 = __ctype_get_mb_cur_max();
  v15 = v68;
  v80 = v13;
  v16 = v70;
  switch ( v68 )
  {
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v69 = 0;
        goto LABEL_38;
      }
      v82 = 1;
      v17 = 0LL;
      v69 = 0;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    case 4:
      if ( v11 )
      {
LABEL_2:
        v82 = 1;
        v17 = 0LL;
        v15 = 2;
        v69 = 0;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      else
      {
        v69 = 1;
LABEL_38:
        if ( a2 )
          *a1 = 39;
        v82 = 0;
        v17 = 1LL;
        v15 = 2;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      break;
    case 5:
      if ( v11 )
      {
        v82 = 1;
        v17 = 0LL;
        v69 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v82 = 0;
        v17 = 1LL;
        v69 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v82 = 1;
      v17 = 0LL;
      v15 = 5;
      v69 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v82 = 0;
      v17 = 0LL;
      v69 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_407660("`", v68);
        v33 = sub_407660("'", v68);
        v16 = v70;
        v15 = v68;
        a9 = (char *)v33;
      }
      v17 = 0LL;
      if ( !v11 )
      {
        for ( i = *a8; i; i = a8[v17] )
        {
          if ( a2 > v17 )
            a1[v17] = i;
          ++v17;
        }
      }
      v35 = v15;
      v36 = v16;
      v82 = v11 != 0;
      v37 = strlen(a9);
      v69 = 1;
      v16 = v36;
      n = v37;
      v15 = v35;
      s2 = a9;
      break;
    case 0:
      v82 = 0;
      v17 = 0LL;
      v69 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 3:
      v82 = 1;
      v17 = 0LL;
      v15 = 2;
      v69 = 1;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    default:
      abort();
      return result;
  }
  v18 = v15;
  v19 = v16;
  v20 = v18;
  v21 = 0LL;
  v22 = 0;
  while ( 1 )
  {
    LOBYTE(v11) = v19 != v21;
    if ( v19 == -1LL )
      LOBYTE(v11) = s[v21] != 0;
    if ( !(_BYTE)v11 )
    {
      if ( v17 == 0 && v82 && v20 == 2 )
        return sub_407760(v9, v10, s);
      if ( s2 )
      {
        if ( !v82 )
        {
          v51 = *s2;
          if ( *s2 )
          {
            v52 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                *(_BYTE *)(v9 + v17) = v51;
              v51 = v52[++v17];
            }
            while ( v51 );
          }
        }
      }
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 0;
      return v17;
    }
    v23 = &s[v21];
    v71 = v69 & (v20 != 2);
    if ( !((unsigned __int8)v69 & (v20 != 2)) )
    {
      LOBYTE(v31) = *v23;
      switch ( *v23 )
      {
        case 123:
        case 125:
LABEL_60:
          v38 = v19 != 1;
          if ( v19 == -1LL )
            v38 = s[1] != 0;
          LOBYTE(v14) = v20 == 2;
          if ( v38 )
            goto LABEL_65;
          goto LABEL_63;
        case 63:
LABEL_69:
          if ( v20 == 2 )
          {
            if ( v82 )
              return sub_407760(v9, v10, s);
            v11 = 0;
            LOBYTE(v31) = 63;
            goto LABEL_66;
          }
          if ( v20 != 5 )
          {
            LOBYTE(v31) = 63;
            LOBYTE(v14) = v20 == 2;
            goto LABEL_65;
          }
          if ( !(v81 & 4) )
          {
            v14 = 0;
            LOBYTE(v31) = 63;
            goto LABEL_65;
          }
          v14 = 0;
          LOBYTE(v31) = 63;
          if ( v21 + 2 >= v19 || s[v21 + 1] != 63 )
            goto LABEL_65;
          v31 = (unsigned __int8)s[v21 + 2];
          if ( (unsigned __int8)v31 > 0x3Eu || (v50 = 8070630310989004800LL, !_bittest64(&v50, v31)) )
          {
            LOBYTE(v31) = 63;
            goto LABEL_65;
          }
          if ( v82 )
            return sub_407760(v9, v10, s);
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 63;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 34;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 34;
          if ( v10 > v17 + 3 )
            *(_BYTE *)(v9 + v17 + 3) = 63;
          v17 += 4LL;
          v14 = 0;
          v11 = 0;
          v21 += 2LL;
          goto LABEL_118;
        case 39:
LABEL_73:
          v14 = 0;
          LOBYTE(v31) = 39;
          if ( v20 != 2 )
            goto LABEL_65;
          if ( v82 )
            return sub_407760(v9, v10, s);
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 92;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v17 += 3LL;
          ++v21;
          v22 = 0;
          LOBYTE(v31) = 39;
          goto LABEL_82;
        default:
          goto LABEL_124;
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
          goto LABEL_127;
        case 10:
          LOBYTE(v31) = 10;
          v39 = 110;
          goto LABEL_130;
        case 9:
          LOBYTE(v31) = 9;
          v39 = 116;
          goto LABEL_130;
        case 7:
          LOBYTE(v31) = 7;
          v39 = 97;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 0:
          if ( !v69 )
          {
            if ( v81 & 1 )
            {
              ++v21;
              continue;
            }
            if ( !v82 )
            {
              ++v21;
              v11 = v22;
              LOBYTE(v31) = 0;
              goto LABEL_144;
            }
            v11 = 0;
            if ( a7 )
            {
              v71 = 0;
              LOBYTE(v31) = 0;
              goto LABEL_18;
            }
            LOBYTE(v31) = 0;
            goto LABEL_122;
          }
LABEL_103:
          if ( v82 )
            return sub_407760(v9, v10, s);
          v71 = 0;
LABEL_105:
          LOBYTE(v14) = v20 == 2;
          v40 = v22 ^ 1;
          LOBYTE(v40) = (v20 == 2) & (v22 ^ 1);
          if ( (_BYTE)v40 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v41 = v17 + 3;
            if ( v10 <= v17 + 3 )
            {
              v17 += 4LL;
              ++v21;
              v22 = v40;
              LOBYTE(v31) = 48;
              goto LABEL_82;
            }
            v22 = v40;
LABEL_114:
            *(_BYTE *)(v9 + v41) = 92;
            goto LABEL_115;
          }
          v41 = v17;
          if ( v17 < v10 )
            goto LABEL_114;
LABEL_115:
          v17 = v41 + 1;
          v42 = v21 + 1;
          if ( v20 == 2 )
          {
            ++v21;
            LOBYTE(v31) = 48;
LABEL_82:
            if ( v71 )
              goto LABEL_67;
            goto LABEL_33;
          }
          LOBYTE(v31) = 48;
          if ( v42 < v19 && (unsigned __int8)(s[v42] - 48) <= 9u )
          {
            if ( v10 > v17 )
              *(_BYTE *)(v9 + v17) = 48;
            if ( v10 > v41 + 2 )
              *(_BYTE *)(v9 + v41 + 2) = 48;
            v17 = v41 + 3;
            LOBYTE(v31) = 48;
          }
LABEL_118:
          if ( !v69 || (_BYTE)v14 )
            goto LABEL_66;
          if ( a7 )
            goto LABEL_18;
          break;
        case 8:
          LOBYTE(v31) = 8;
          v39 = 98;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 92:
          if ( v20 == 2 )
          {
            if ( v82 )
              return sub_407760(v9, v10, s);
            ++v21;
            v11 = v22;
            LOBYTE(v31) = 92;
            goto LABEL_144;
          }
LABEL_87:
          v11 = v82 & (unsigned __int8)v69;
          LOBYTE(v31) = 92;
          v39 = 92;
          v14 = v82 & (unsigned __int8)v69;
          LOBYTE(v14) = (n != 0) & v14;
          if ( (_BYTE)v14 )
          {
            ++v21;
            v11 = v22;
            goto LABEL_144;
          }
LABEL_88:
          if ( !v69 )
            goto LABEL_65;
          v32 = v14;
          LOBYTE(v31) = v39;
          goto LABEL_20;
        case 35:
        case 126:
          LOBYTE(v14) = v20 == 2;
LABEL_63:
          if ( !v21 )
            goto LABEL_64;
          goto LABEL_65;
        case 32:
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
          LOBYTE(v14) = v20 == 2;
LABEL_64:
          if ( !((unsigned __int8)v14 & v82) )
            goto LABEL_65;
          return sub_407760(v9, v10, s);
        case 13:
          LOBYTE(v31) = 13;
          v39 = 114;
LABEL_130:
          LOBYTE(v14) = v20 == 2;
          v71 = v20 == 2 && v82;
          if ( v71 )
            return sub_407760(v9, v10, s);
          goto LABEL_88;
        case 12:
          LOBYTE(v31) = 12;
          v39 = 102;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 11:
          LOBYTE(v31) = 11;
          v39 = 118;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
      }
LABEL_121:
      v32 = v20 == 2;
      if ( v71 )
        goto LABEL_20;
LABEL_122:
      ++v21;
      v11 = v22 & (v11 ^ 1);
      goto LABEL_144;
    }
    if ( !n )
      goto LABEL_271;
    if ( v19 == -1LL && n > 1 )
    {
      v24 = v20;
      v25 = v22;
      v26 = strlen(s);
      v20 = v24;
      v22 = v25;
      v23 = &s[v21];
      v19 = v26;
    }
    if ( v21 + n > v19
      || (v27 = v20,
          v28 = v19,
          v29 = v22,
          v74 = v23,
          v30 = memcmp(v23, s2, n),
          v23 = v74,
          v22 = v29,
          v19 = v28,
          v20 = v27,
          v30) )
    {
LABEL_271:
      LOBYTE(v31) = *v23;
      switch ( *v23 )
      {
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
          v71 = 0;
          goto LABEL_17;
        case 123:
        case 125:
          v71 = 0;
          goto LABEL_60;
        case 63:
          v71 = 0;
          goto LABEL_69;
        case 39:
          v71 = 0;
          goto LABEL_73;
        case 32:
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
          v71 = 0;
LABEL_85:
          v14 = 0;
          goto LABEL_65;
        case 92:
          v71 = 0;
          goto LABEL_87;
        case 10:
LABEL_90:
          LOBYTE(v31) = 110;
          v32 = 0;
          goto LABEL_91;
        case 8:
LABEL_93:
          LOBYTE(v31) = 98;
          v32 = 0;
          goto LABEL_91;
        case 7:
LABEL_94:
          LOBYTE(v31) = 97;
          v32 = 0;
          goto LABEL_91;
        case 13:
          v71 = 0;
LABEL_96:
          LOBYTE(v31) = 13;
          v39 = 114;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 35:
        case 126:
          v71 = 0;
LABEL_98:
          if ( v21 )
            goto LABEL_17;
          v14 = 0;
          goto LABEL_65;
        case 12:
LABEL_100:
          LOBYTE(v31) = 102;
          v32 = 0;
          goto LABEL_91;
        case 11:
LABEL_101:
          LOBYTE(v31) = 118;
          v32 = 0;
          goto LABEL_91;
        case 9:
LABEL_102:
          LOBYTE(v31) = 116;
          v32 = 0;
LABEL_91:
          if ( v82 )
            return sub_407760(v9, v10, s);
          goto LABEL_21;
        case 0:
          goto LABEL_103;
        default:
          v71 = 0;
          break;
      }
    }
    else
    {
      if ( v82 )
        return sub_407760(v9, v10, s);
      LOBYTE(v31) = *v74;
      switch ( *v74 )
      {
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
          goto LABEL_17;
        case 123:
        case 125:
          goto LABEL_60;
        case 63:
          goto LABEL_69;
        case 39:
          goto LABEL_73;
        case 32:
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
          goto LABEL_85;
        case 92:
          goto LABEL_87;
        case 10:
          goto LABEL_90;
        case 8:
          goto LABEL_93;
        case 7:
          goto LABEL_94;
        case 13:
          goto LABEL_96;
        case 35:
        case 126:
          goto LABEL_98;
        case 12:
          goto LABEL_100;
        case 11:
          goto LABEL_101;
        case 9:
          goto LABEL_102;
        case 0:
          goto LABEL_105;
        default:
          break;
      }
    }
LABEL_124:
    if ( v80 != 1 )
      break;
    v43 = v20;
    v44 = v19;
    v45 = v22;
    v46 = __ctype_b_loc();
    v22 = v45;
    v19 = v44;
    v20 = v43;
    v47 = 1LL;
    v48 = (*v46)[(unsigned __int8)v31];
    LOWORD(v48) = (unsigned __int16)v48 >> 14;
    v14 = v48 ^ 1;
    LOBYTE(v14) = v69 & v14;
LABEL_126:
    if ( (_BYTE)v14 )
    {
      v14 = (unsigned __int8)v69;
LABEL_206:
      v62 = v21 + v47;
      v63 = 0;
      v64 = v71;
      while ( 1 )
      {
        if ( (_BYTE)v14 )
        {
          if ( v82 )
            return sub_407760(v9, v10, s);
          if ( (v20 == 2) & (unsigned __int8)(v22 ^ 1) )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v17 += 3LL;
            v22 ^= 1u;
          }
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 92;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = ((unsigned __int8)v31 >> 6) + 48;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = (((unsigned __int8)v31 >> 3) & 7) + 48;
          ++v21;
          v17 += 3LL;
          LOBYTE(v31) = (v31 & 7) + 48;
          if ( v62 <= v21 )
            goto LABEL_33;
          v63 = v14;
        }
        else
        {
          v11 = v22 & (v63 ^ 1);
          if ( v64 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 92;
            ++v17;
          }
          if ( ++v21 >= v62 )
            goto LABEL_144;
          if ( (_BYTE)v11 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 39;
            v17 += 2LL;
            v64 = 0;
            v22 = 0;
          }
          else
          {
            v64 = 0;
          }
        }
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = v31;
        LOBYTE(v31) = s[v21];
        ++v17;
      }
    }
LABEL_127:
    LOBYTE(v14) = v20 == 2;
LABEL_65:
    v11 = (v14 | (unsigned __int8)v69 ^ 1) ^ 1;
    LOBYTE(v11) = v82 | (v14 | v69 ^ 1) ^ 1;
    if ( v82 | (unsigned __int8)((v14 | v69 ^ 1) ^ 1) )
    {
LABEL_17:
      v11 = 0;
      if ( a7 )
      {
LABEL_18:
        if ( (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v31 >> 5)) >> v31) & 1 )
        {
          v32 = v20 == 2;
LABEL_20:
          if ( v82 )
            return sub_407760(v9, v10, s);
LABEL_21:
          ++v21;
LABEL_22:
          v14 = v22 ^ 1;
          if ( v32 & (unsigned __int8)(v22 ^ 1) )
          {
            if ( v10 > v17 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v17 += 3LL;
            LOBYTE(v14) = v32 & (v22 ^ 1);
            v22 = v14;
          }
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 92;
          ++v17;
          goto LABEL_33;
        }
      }
      goto LABEL_121;
    }
LABEL_66:
    ++v21;
    if ( v71 )
    {
LABEL_67:
      v32 = v20 == 2;
      goto LABEL_22;
    }
    v11 = v22 & (v11 ^ 1);
LABEL_144:
    if ( (_BYTE)v11 )
    {
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 39;
      if ( v10 > v17 + 1 )
        *(_BYTE *)(v9 + v17 + 1) = 39;
      v17 += 2LL;
      v22 = 0;
    }
LABEL_33:
    if ( v17 < v10 )
      *(_BYTE *)(v9 + v17) = v31;
    ++v17;
  }
  ps = 0LL;
  if ( v19 == -1LL )
  {
    v53 = v20;
    v54 = v22;
    v55 = v23;
    v56 = strlen(s);
    v20 = v53;
    LOBYTE(v22) = v54;
    v23 = v55;
    v19 = v56;
  }
  v84 = v17;
  v83 = v22;
  v57 = 0LL;
  v85 = v23;
  v77 = v9;
  v78 = v10;
  v75 = v19;
  v76 = v20;
  while ( 1 )
  {
    v58 = v21 + v57;
    LODWORD(v59) = sub_40B170(&wc, &s[v21] + v57, v75 - (v21 + v57), &ps);
    v60 = v59;
    if ( !v59 )
    {
      v11 ^= 1u;
      v47 = v57;
      v9 = v77;
      v22 = v83;
      v17 = v84;
      v10 = v78;
      v14 = (unsigned __int8)(v11 & v69);
      v19 = v75;
      v20 = v76;
      goto LABEL_252;
    }
    if ( v59 == -1 )
    {
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v9 = v77;
      v10 = v78;
      v19 = v75;
      v20 = v76;
      v14 = (unsigned __int8)v69;
      goto LABEL_252;
    }
    if ( v59 == -2 )
    {
      v19 = v75;
      v65 = v21 + v57;
      v66 = &s[v21] + v57;
      v67 = v57;
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v9 = v77;
      v10 = v78;
      v20 = v76;
      if ( v65 < v75 && *v66 )
      {
        do
          ++v67;
        while ( v75 > v21 + v67 && v85[v67] );
        v47 = v67;
      }
      v14 = (unsigned __int8)v69;
LABEL_252:
      if ( v47 > 1 )
        goto LABEL_206;
      goto LABEL_126;
    }
    if ( v82 && v76 == 2 && v59 != 1 )
      break;
LABEL_187:
    if ( !iswprint(wc) )
      v11 = 0;
    v57 += v60;
    if ( mbsinit(&ps) )
    {
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v14 = v11 ^ 1;
      v9 = v77;
      v10 = v78;
      v19 = v75;
      v20 = v76;
      LOBYTE(v14) = v69 & (v11 ^ 1);
      goto LABEL_252;
    }
  }
  v61 = &s[v58 + 1];
  while ( (unsigned __int8)(*v61 - 91) > 0x21u || !((1LL << (*v61 - 91)) & 0x20000002BLL) )
  {
    if ( &s[v59] + v58 == ++v61 )
      goto LABEL_187;
  }
  v9 = v77;
  v10 = v78;
  return sub_407760(v9, v10, s);
}

unsigned __int64 __fastcall sub_407760(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
{
  __int64 v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // ebp@1
  char v12; // zf@1
  size_t v13; // rax@1
  int v14; // edx@1
  signed int v15; // er11@1
  unsigned __int64 v16; // r10@1
  unsigned __int64 v17; // rbx@2
  signed int v18; // eax@3
  unsigned __int64 v19; // r11@3
  signed int v20; // er10@3
  unsigned __int64 v21; // r13@3
  int v22; // er8@3
  char *v23; // r9@7
  signed int v24; // ST58_4@11
  unsigned __int8 v25; // ST50_1@11
  size_t v26; // rax@11
  signed int v27; // ST60_4@13
  unsigned __int64 v28; // ST58_8@13
  unsigned __int8 v29; // ST50_1@13
  int v30; // eax@13
  unsigned __int64 v31; // r12@15
  bool v32; // al@19
  const char *v33; // rax@50
  char i; // al@52
  signed int v35; // ST48_4@56
  unsigned __int64 v36; // ST30_8@56
  size_t v37; // rax@56
  bool v38; // al@60
  char v39; // cl@87
  int v40; // eax@105
  signed __int64 v41; // rcx@112
  unsigned __int64 v42; // rax@115
  signed int v43; // ST58_4@125
  unsigned __int64 v44; // ST50_8@125
  unsigned __int8 v45; // ST48_1@125
  const unsigned __int16 **v46; // rax@125
  unsigned __int64 v47; // rcx@125
  int v48; // edx@125
  unsigned __int64 result; // rax@132
  signed __int64 v50; // rsi@161
  char v51; // dl@177
  const char *v52; // rax@178
  signed int v53; // ST58_4@185
  char v54; // ST50_1@185
  char *v55; // ST48_8@185
  size_t v56; // rax@185
  unsigned __int64 v57; // rbx@186
  unsigned __int64 v58; // r14@190
  __int64 v59; // rax@190
  __int64 v60; // r15@190
  char *v61; // rdx@195
  unsigned __int64 v62; // rcx@206
  int v63; // eax@206
  char v64; // si@206
  unsigned __int64 v65; // rsi@255
  char *v66; // rdi@255
  unsigned __int64 v67; // rax@255
  int v68; // [sp+Ch] [bp-ACh]@1
  char v69; // [sp+Ch] [bp-ACh]@2
  unsigned __int64 v70; // [sp+10h] [bp-A8h]@1
  char v71; // [sp+10h] [bp-A8h]@7
  char *s; // [sp+18h] [bp-A0h]@1
  unsigned __int64 n; // [sp+20h] [bp-98h]@2
  char *v74; // [sp+28h] [bp-90h]@13
  unsigned __int64 v75; // [sp+28h] [bp-90h]@186
  signed int v76; // [sp+30h] [bp-88h]@186
  __int64 v77; // [sp+38h] [bp-80h]@186
  unsigned __int64 v78; // [sp+40h] [bp-78h]@186
  const char *s2; // [sp+48h] [bp-70h]@2
  size_t v80; // [sp+50h] [bp-68h]@1
  char v81; // [sp+58h] [bp-60h]@1
  bool v82; // [sp+5Dh] [bp-5Bh]@2
  unsigned __int8 v83; // [sp+5Eh] [bp-5Ah]@186
  unsigned __int64 v84; // [sp+60h] [bp-58h]@186
  char *v85; // [sp+68h] [bp-50h]@186
  wint_t wc; // [sp+74h] [bp-44h]@187
  mbstate_t ps; // [sp+78h] [bp-40h]@184

  v9 = (__int64)a1;
  v10 = a2;
  v11 = a6 & 2;
  s = a3;
  v70 = a4;
  v68 = a5;
  v81 = a6;
  v13 = __ctype_get_mb_cur_max();
  v15 = v68;
  v80 = v13;
  v16 = v70;
  switch ( v68 )
  {
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v69 = 0;
        goto LABEL_38;
      }
      v82 = 1;
      v17 = 0LL;
      v69 = 0;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    case 4:
      if ( v11 )
      {
LABEL_2:
        v82 = 1;
        v17 = 0LL;
        v15 = 2;
        v69 = 0;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      else
      {
        v69 = 1;
LABEL_38:
        if ( a2 )
          *a1 = 39;
        v82 = 0;
        v17 = 1LL;
        v15 = 2;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      break;
    case 5:
      if ( v11 )
      {
        v82 = 1;
        v17 = 0LL;
        v69 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v82 = 0;
        v17 = 1LL;
        v69 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v82 = 1;
      v17 = 0LL;
      v15 = 5;
      v69 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v82 = 0;
      v17 = 0LL;
      v69 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_407660("`", v68);
        v33 = sub_407660("'", v68);
        v16 = v70;
        v15 = v68;
        a9 = (char *)v33;
      }
      v17 = 0LL;
      if ( !v11 )
      {
        for ( i = *a8; i; i = a8[v17] )
        {
          if ( a2 > v17 )
            a1[v17] = i;
          ++v17;
        }
      }
      v35 = v15;
      v36 = v16;
      v82 = v11 != 0;
      v37 = strlen(a9);
      v69 = 1;
      v16 = v36;
      n = v37;
      v15 = v35;
      s2 = a9;
      break;
    case 0:
      v82 = 0;
      v17 = 0LL;
      v69 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 3:
      v82 = 1;
      v17 = 0LL;
      v15 = 2;
      v69 = 1;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    default:
      abort();
      return result;
  }
  v18 = v15;
  v19 = v16;
  v20 = v18;
  v21 = 0LL;
  v22 = 0;
  while ( 1 )
  {
    LOBYTE(v11) = v19 != v21;
    if ( v19 == -1LL )
      LOBYTE(v11) = s[v21] != 0;
    if ( !(_BYTE)v11 )
    {
      if ( v17 == 0 && v82 && v20 == 2 )
        return sub_407760(v9, v10, s);
      if ( s2 )
      {
        if ( !v82 )
        {
          v51 = *s2;
          if ( *s2 )
          {
            v52 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                *(_BYTE *)(v9 + v17) = v51;
              v51 = v52[++v17];
            }
            while ( v51 );
          }
        }
      }
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 0;
      return v17;
    }
    v23 = &s[v21];
    v71 = v69 & (v20 != 2);
    if ( !((unsigned __int8)v69 & (v20 != 2)) )
    {
      LOBYTE(v31) = *v23;
      switch ( *v23 )
      {
        case 123:
        case 125:
LABEL_60:
          v38 = v19 != 1;
          if ( v19 == -1LL )
            v38 = s[1] != 0;
          LOBYTE(v14) = v20 == 2;
          if ( v38 )
            goto LABEL_65;
          goto LABEL_63;
        case 63:
LABEL_69:
          if ( v20 == 2 )
          {
            if ( v82 )
              return sub_407760(v9, v10, s);
            v11 = 0;
            LOBYTE(v31) = 63;
            goto LABEL_66;
          }
          if ( v20 != 5 )
          {
            LOBYTE(v31) = 63;
            LOBYTE(v14) = v20 == 2;
            goto LABEL_65;
          }
          if ( !(v81 & 4) )
          {
            v14 = 0;
            LOBYTE(v31) = 63;
            goto LABEL_65;
          }
          v14 = 0;
          LOBYTE(v31) = 63;
          if ( v21 + 2 >= v19 || s[v21 + 1] != 63 )
            goto LABEL_65;
          v31 = (unsigned __int8)s[v21 + 2];
          if ( (unsigned __int8)v31 > 0x3Eu || (v50 = 8070630310989004800LL, !_bittest64(&v50, v31)) )
          {
            LOBYTE(v31) = 63;
            goto LABEL_65;
          }
          if ( v82 )
            return sub_407760(v9, v10, s);
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 63;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 34;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 34;
          if ( v10 > v17 + 3 )
            *(_BYTE *)(v9 + v17 + 3) = 63;
          v17 += 4LL;
          v14 = 0;
          v11 = 0;
          v21 += 2LL;
          goto LABEL_118;
        case 39:
LABEL_73:
          v14 = 0;
          LOBYTE(v31) = 39;
          if ( v20 != 2 )
            goto LABEL_65;
          if ( v82 )
            return sub_407760(v9, v10, s);
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 92;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v17 += 3LL;
          ++v21;
          v22 = 0;
          LOBYTE(v31) = 39;
          goto LABEL_82;
        default:
          goto LABEL_124;
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
          goto LABEL_127;
        case 10:
          LOBYTE(v31) = 10;
          v39 = 110;
          goto LABEL_130;
        case 9:
          LOBYTE(v31) = 9;
          v39 = 116;
          goto LABEL_130;
        case 7:
          LOBYTE(v31) = 7;
          v39 = 97;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 0:
          if ( !v69 )
          {
            if ( v81 & 1 )
            {
              ++v21;
              continue;
            }
            if ( !v82 )
            {
              ++v21;
              v11 = v22;
              LOBYTE(v31) = 0;
              goto LABEL_144;
            }
            v11 = 0;
            if ( a7 )
            {
              v71 = 0;
              LOBYTE(v31) = 0;
              goto LABEL_18;
            }
            LOBYTE(v31) = 0;
            goto LABEL_122;
          }
LABEL_103:
          if ( v82 )
            return sub_407760(v9, v10, s);
          v71 = 0;
LABEL_105:
          LOBYTE(v14) = v20 == 2;
          v40 = v22 ^ 1;
          LOBYTE(v40) = (v20 == 2) & (v22 ^ 1);
          if ( (_BYTE)v40 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v41 = v17 + 3;
            if ( v10 <= v17 + 3 )
            {
              v17 += 4LL;
              ++v21;
              v22 = v40;
              LOBYTE(v31) = 48;
              goto LABEL_82;
            }
            v22 = v40;
LABEL_114:
            *(_BYTE *)(v9 + v41) = 92;
            goto LABEL_115;
          }
          v41 = v17;
          if ( v17 < v10 )
            goto LABEL_114;
LABEL_115:
          v17 = v41 + 1;
          v42 = v21 + 1;
          if ( v20 == 2 )
          {
            ++v21;
            LOBYTE(v31) = 48;
LABEL_82:
            if ( v71 )
              goto LABEL_67;
            goto LABEL_33;
          }
          LOBYTE(v31) = 48;
          if ( v42 < v19 && (unsigned __int8)(s[v42] - 48) <= 9u )
          {
            if ( v10 > v17 )
              *(_BYTE *)(v9 + v17) = 48;
            if ( v10 > v41 + 2 )
              *(_BYTE *)(v9 + v41 + 2) = 48;
            v17 = v41 + 3;
            LOBYTE(v31) = 48;
          }
LABEL_118:
          if ( !v69 || (_BYTE)v14 )
            goto LABEL_66;
          if ( a7 )
            goto LABEL_18;
          break;
        case 8:
          LOBYTE(v31) = 8;
          v39 = 98;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 92:
          if ( v20 == 2 )
          {
            if ( v82 )
              return sub_407760(v9, v10, s);
            ++v21;
            v11 = v22;
            LOBYTE(v31) = 92;
            goto LABEL_144;
          }
LABEL_87:
          v11 = v82 & (unsigned __int8)v69;
          LOBYTE(v31) = 92;
          v39 = 92;
          v14 = v82 & (unsigned __int8)v69;
          LOBYTE(v14) = (n != 0) & v14;
          if ( (_BYTE)v14 )
          {
            ++v21;
            v11 = v22;
            goto LABEL_144;
          }
LABEL_88:
          if ( !v69 )
            goto LABEL_65;
          v32 = v14;
          LOBYTE(v31) = v39;
          goto LABEL_20;
        case 35:
        case 126:
          LOBYTE(v14) = v20 == 2;
LABEL_63:
          if ( !v21 )
            goto LABEL_64;
          goto LABEL_65;
        case 32:
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
          LOBYTE(v14) = v20 == 2;
LABEL_64:
          if ( !((unsigned __int8)v14 & v82) )
            goto LABEL_65;
          return sub_407760(v9, v10, s);
        case 13:
          LOBYTE(v31) = 13;
          v39 = 114;
LABEL_130:
          LOBYTE(v14) = v20 == 2;
          v71 = v20 == 2 && v82;
          if ( v71 )
            return sub_407760(v9, v10, s);
          goto LABEL_88;
        case 12:
          LOBYTE(v31) = 12;
          v39 = 102;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 11:
          LOBYTE(v31) = 11;
          v39 = 118;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
      }
LABEL_121:
      v32 = v20 == 2;
      if ( v71 )
        goto LABEL_20;
LABEL_122:
      ++v21;
      v11 = v22 & (v11 ^ 1);
      goto LABEL_144;
    }
    if ( !n )
      goto LABEL_271;
    if ( v19 == -1LL && n > 1 )
    {
      v24 = v20;
      v25 = v22;
      v26 = strlen(s);
      v20 = v24;
      v22 = v25;
      v23 = &s[v21];
      v19 = v26;
    }
    if ( v21 + n > v19
      || (v27 = v20,
          v28 = v19,
          v29 = v22,
          v74 = v23,
          v30 = memcmp(v23, s2, n),
          v23 = v74,
          v22 = v29,
          v19 = v28,
          v20 = v27,
          v30) )
    {
LABEL_271:
      LOBYTE(v31) = *v23;
      switch ( *v23 )
      {
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
          v71 = 0;
          goto LABEL_17;
        case 123:
        case 125:
          v71 = 0;
          goto LABEL_60;
        case 63:
          v71 = 0;
          goto LABEL_69;
        case 39:
          v71 = 0;
          goto LABEL_73;
        case 32:
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
          v71 = 0;
LABEL_85:
          v14 = 0;
          goto LABEL_65;
        case 92:
          v71 = 0;
          goto LABEL_87;
        case 10:
LABEL_90:
          LOBYTE(v31) = 110;
          v32 = 0;
          goto LABEL_91;
        case 8:
LABEL_93:
          LOBYTE(v31) = 98;
          v32 = 0;
          goto LABEL_91;
        case 7:
LABEL_94:
          LOBYTE(v31) = 97;
          v32 = 0;
          goto LABEL_91;
        case 13:
          v71 = 0;
LABEL_96:
          LOBYTE(v31) = 13;
          v39 = 114;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_88;
        case 35:
        case 126:
          v71 = 0;
LABEL_98:
          if ( v21 )
            goto LABEL_17;
          v14 = 0;
          goto LABEL_65;
        case 12:
LABEL_100:
          LOBYTE(v31) = 102;
          v32 = 0;
          goto LABEL_91;
        case 11:
LABEL_101:
          LOBYTE(v31) = 118;
          v32 = 0;
          goto LABEL_91;
        case 9:
LABEL_102:
          LOBYTE(v31) = 116;
          v32 = 0;
LABEL_91:
          if ( v82 )
            return sub_407760(v9, v10, s);
          goto LABEL_21;
        case 0:
          goto LABEL_103;
        default:
          v71 = 0;
          break;
      }
    }
    else
    {
      if ( v82 )
        return sub_407760(v9, v10, s);
      LOBYTE(v31) = *v74;
      switch ( *v74 )
      {
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
          goto LABEL_17;
        case 123:
        case 125:
          goto LABEL_60;
        case 63:
          goto LABEL_69;
        case 39:
          goto LABEL_73;
        case 32:
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
          goto LABEL_85;
        case 92:
          goto LABEL_87;
        case 10:
          goto LABEL_90;
        case 8:
          goto LABEL_93;
        case 7:
          goto LABEL_94;
        case 13:
          goto LABEL_96;
        case 35:
        case 126:
          goto LABEL_98;
        case 12:
          goto LABEL_100;
        case 11:
          goto LABEL_101;
        case 9:
          goto LABEL_102;
        case 0:
          goto LABEL_105;
        default:
          break;
      }
    }
LABEL_124:
    if ( v80 != 1 )
      break;
    v43 = v20;
    v44 = v19;
    v45 = v22;
    v46 = __ctype_b_loc();
    v22 = v45;
    v19 = v44;
    v20 = v43;
    v47 = 1LL;
    v48 = (*v46)[(unsigned __int8)v31];
    LOWORD(v48) = (unsigned __int16)v48 >> 14;
    v14 = v48 ^ 1;
    LOBYTE(v14) = v69 & v14;
LABEL_126:
    if ( (_BYTE)v14 )
    {
      v14 = (unsigned __int8)v69;
LABEL_206:
      v62 = v21 + v47;
      v63 = 0;
      v64 = v71;
      while ( 1 )
      {
        if ( (_BYTE)v14 )
        {
          if ( v82 )
            return sub_407760(v9, v10, s);
          if ( (v20 == 2) & (unsigned __int8)(v22 ^ 1) )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v17 += 3LL;
            v22 ^= 1u;
          }
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 92;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = ((unsigned __int8)v31 >> 6) + 48;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = (((unsigned __int8)v31 >> 3) & 7) + 48;
          ++v21;
          v17 += 3LL;
          LOBYTE(v31) = (v31 & 7) + 48;
          if ( v62 <= v21 )
            goto LABEL_33;
          v63 = v14;
        }
        else
        {
          v11 = v22 & (v63 ^ 1);
          if ( v64 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 92;
            ++v17;
          }
          if ( ++v21 >= v62 )
            goto LABEL_144;
          if ( (_BYTE)v11 )
          {
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 39;
            v17 += 2LL;
            v64 = 0;
            v22 = 0;
          }
          else
          {
            v64 = 0;
          }
        }
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = v31;
        LOBYTE(v31) = s[v21];
        ++v17;
      }
    }
LABEL_127:
    LOBYTE(v14) = v20 == 2;
LABEL_65:
    v11 = (v14 | (unsigned __int8)v69 ^ 1) ^ 1;
    LOBYTE(v11) = v82 | (v14 | v69 ^ 1) ^ 1;
    if ( v82 | (unsigned __int8)((v14 | v69 ^ 1) ^ 1) )
    {
LABEL_17:
      v11 = 0;
      if ( a7 )
      {
LABEL_18:
        if ( (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v31 >> 5)) >> v31) & 1 )
        {
          v32 = v20 == 2;
LABEL_20:
          if ( v82 )
            return sub_407760(v9, v10, s);
LABEL_21:
          ++v21;
LABEL_22:
          v14 = v22 ^ 1;
          if ( v32 & (unsigned __int8)(v22 ^ 1) )
          {
            if ( v10 > v17 )
              *(_BYTE *)(v9 + v17) = 39;
            if ( v10 > v17 + 1 )
              *(_BYTE *)(v9 + v17 + 1) = 36;
            if ( v10 > v17 + 2 )
              *(_BYTE *)(v9 + v17 + 2) = 39;
            v17 += 3LL;
            LOBYTE(v14) = v32 & (v22 ^ 1);
            v22 = v14;
          }
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 92;
          ++v17;
          goto LABEL_33;
        }
      }
      goto LABEL_121;
    }
LABEL_66:
    ++v21;
    if ( v71 )
    {
LABEL_67:
      v32 = v20 == 2;
      goto LABEL_22;
    }
    v11 = v22 & (v11 ^ 1);
LABEL_144:
    if ( (_BYTE)v11 )
    {
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 39;
      if ( v10 > v17 + 1 )
        *(_BYTE *)(v9 + v17 + 1) = 39;
      v17 += 2LL;
      v22 = 0;
    }
LABEL_33:
    if ( v17 < v10 )
      *(_BYTE *)(v9 + v17) = v31;
    ++v17;
  }
  ps = 0LL;
  if ( v19 == -1LL )
  {
    v53 = v20;
    v54 = v22;
    v55 = v23;
    v56 = strlen(s);
    v20 = v53;
    LOBYTE(v22) = v54;
    v23 = v55;
    v19 = v56;
  }
  v84 = v17;
  v83 = v22;
  v57 = 0LL;
  v85 = v23;
  v77 = v9;
  v78 = v10;
  v75 = v19;
  v76 = v20;
  while ( 1 )
  {
    v58 = v21 + v57;
    LODWORD(v59) = sub_40B170(&wc, &s[v21] + v57, v75 - (v21 + v57), &ps);
    v60 = v59;
    if ( !v59 )
    {
      v11 ^= 1u;
      v47 = v57;
      v9 = v77;
      v22 = v83;
      v17 = v84;
      v10 = v78;
      v14 = (unsigned __int8)(v11 & v69);
      v19 = v75;
      v20 = v76;
      goto LABEL_252;
    }
    if ( v59 == -1 )
    {
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v9 = v77;
      v10 = v78;
      v19 = v75;
      v20 = v76;
      v14 = (unsigned __int8)v69;
      goto LABEL_252;
    }
    if ( v59 == -2 )
    {
      v19 = v75;
      v65 = v21 + v57;
      v66 = &s[v21] + v57;
      v67 = v57;
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v9 = v77;
      v10 = v78;
      v20 = v76;
      if ( v65 < v75 && *v66 )
      {
        do
          ++v67;
        while ( v75 > v21 + v67 && v85[v67] );
        v47 = v67;
      }
      v14 = (unsigned __int8)v69;
LABEL_252:
      if ( v47 > 1 )
        goto LABEL_206;
      goto LABEL_126;
    }
    if ( v82 && v76 == 2 && v59 != 1 )
      break;
LABEL_187:
    if ( !iswprint(wc) )
      v11 = 0;
    v57 += v60;
    if ( mbsinit(&ps) )
    {
      v47 = v57;
      v22 = v83;
      v17 = v84;
      v14 = v11 ^ 1;
      v9 = v77;
      v10 = v78;
      v19 = v75;
      v20 = v76;
      LOBYTE(v14) = v69 & (v11 ^ 1);
      goto LABEL_252;
    }
  }
  v61 = &s[v58 + 1];
  while ( (unsigned __int8)(*v61 - 91) > 0x21u || !((1LL << (*v61 - 91)) & 0x20000002BLL) )
  {
    if ( &s[v59] + v58 == ++v61 )
      goto LABEL_187;
  }
  v9 = v77;
  v10 = v78;
  return sub_407760(v9, v10, s);
}

_BYTE *__fastcall sub_408770(unsigned int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@3
  __int128 *v10; // rax@4
  __int64 v11; // rdx@4
  signed __int64 v12; // rbx@6
  _BYTE *v13; // r12@6
  unsigned __int64 v14; // ST30_8@6
  unsigned __int64 v15; // rax@6
  unsigned __int64 v16; // rsi@7
  __int64 v17; // ST30_8@8
  _BYTE *v18; // rax@9
  int v19; // er8@9
  __int128 *v21; // rax@11
  char *v22; // [sp+8h] [bp-50h]@1
  int v23; // [sp+18h] [bp-40h]@1
  int v24; // [sp+1Ch] [bp-3Ch]@6

  v4 = a3;
  v5 = a4;
  v22 = a2;
  v6 = __errno_location();
  v7 = off_612318;
  v8 = v6;
  v23 = *v6;
  if ( (a1 & 0x80000000) != 0 )
    abort();
  if ( dword_612330 <= a1 )
  {
    v9 = 16LL * (a1 + 1);
    if ( off_612318 == &xmmword_612320 )
    {
      LODWORD(v21) = sub_4096D0(0LL, v9);
      v11 = a1 + 1;
      v7 = v21;
      off_612318 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      LODWORD(v10) = sub_4096D0(off_612318, v9);
      v11 = a1 + 1;
      off_612318 = v10;
      v7 = v10;
    }
    memset(&v7[dword_612330], 0, 16 * (v11 - (unsigned int)dword_612330));
    dword_612330 = a1 + 1;
  }
  v12 = (signed __int64)&v7[a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_407760(
          v13,
          *(_QWORD *)v12,
          v22,
          v4,
          *(_DWORD *)v5,
          v24,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_612540 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_409680(v16, v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_407760(v18, v16, v22, v4, v19, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_408770(unsigned int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@3
  __int128 *v10; // rax@4
  __int64 v11; // rdx@4
  signed __int64 v12; // rbx@6
  _BYTE *v13; // r12@6
  unsigned __int64 v14; // ST30_8@6
  unsigned __int64 v15; // rax@6
  unsigned __int64 v16; // rsi@7
  __int64 v17; // ST30_8@8
  _BYTE *v18; // rax@9
  int v19; // er8@9
  __int128 *v21; // rax@11
  char *v22; // [sp+8h] [bp-50h]@1
  int v23; // [sp+18h] [bp-40h]@1
  int v24; // [sp+1Ch] [bp-3Ch]@6

  v4 = a3;
  v5 = a4;
  v22 = a2;
  v6 = __errno_location();
  v7 = off_612318;
  v8 = v6;
  v23 = *v6;
  if ( (a1 & 0x80000000) != 0 )
    abort();
  if ( dword_612330 <= a1 )
  {
    v9 = 16LL * (a1 + 1);
    if ( off_612318 == &xmmword_612320 )
    {
      LODWORD(v21) = sub_4096D0(0LL, v9);
      v11 = a1 + 1;
      v7 = v21;
      off_612318 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      LODWORD(v10) = sub_4096D0(off_612318, v9);
      v11 = a1 + 1;
      off_612318 = v10;
      v7 = v10;
    }
    memset(&v7[dword_612330], 0, 16 * (v11 - (unsigned int)dword_612330));
    dword_612330 = a1 + 1;
  }
  v12 = (signed __int64)&v7[a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_407760(
          v13,
          *(_QWORD *)v12,
          v22,
          v4,
          *(_DWORD *)v5,
          v24,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_612540 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_409680(v16, v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_407760(v18, v16, v22, v4, v19, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_408C90(unsigned int a1, int a2, char *a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408C90(unsigned int a1, int a2, char *a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408D90(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_612670;
  v4 = _mm_load_si128((const __m128i *)&xmmword_612640);
  v5 = _mm_load_si128((const __m128i *)&xmmword_612650);
  v6 = _mm_load_si128((const __m128i *)&xmmword_612660);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_408770(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_408E10(char *a1)
{
  return sub_408D90(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

__int64 __fastcall sub_408FE0(int fd, void *buf, size_t nbytes)
{
  unsigned __int64 v3; // rbx@1
  ssize_t v4; // rbp@2
  int v5; // eax@3

  v3 = nbytes;
  while ( 1 )
  {
    v4 = read(fd, buf, v3);
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

signed __int64 __fastcall sub_409040(__int64 a1, signed __int64 a2)
{
  signed __int64 v2; // rbx@1
  __int64 v3; // rax@1
  signed __int64 v4; // rsi@1
  bool v5; // zf@1
  signed __int64 result; // rax@1

  v2 = a2;
  LODWORD(v3) = sub_40B1A0(a1, 0LL, a2);
  v4 = v3 - a1 + 1;
  v5 = v3 == 0;
  result = v2;
  if ( !v5 )
    result = v4;
  return result;
}

__int64 __fastcall sub_409080(char a1)
{
  return sub_409D40(a1);
}

__int64 __fastcall sub_409090(int fd)
{
  __int64 result; // rax@2
  unsigned int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_409080(fd);
    v3 = __errno_location();
    v4 = *v3;
    v5 = v3;
    close(fd);
    result = v2;
    *v5 = v4;
  }
  else
  {
    result = (unsigned int)fd;
  }
  return result;
}

int __fastcall sub_4090E0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // r14@5
  __int64 v11; // r13@5
  __int64 v12; // r12@5
  __int64 v13; // r15@5
  __int64 v14; // r8@5
  __int64 v15; // ST40_8@5
  __int64 v16; // rcx@5
  __int64 v17; // rbx@5
  __int64 v18; // ST38_8@5
  __int64 v19; // ST30_8@5
  char *v20; // rax@5
  int result; // eax@5
  const char *v22; // rsi@7
  __int64 v23; // rcx@7
  __int64 v24; // r14@7
  __int64 v25; // r13@7
  __int64 v26; // r12@7
  __int64 v27; // r15@7
  __int64 v28; // rbx@7
  char *v29; // rax@8
  __int64 v30; // rbx@9
  char *v31; // rax@9
  __int64 v32; // r12@10
  __int64 v33; // rbx@10
  char *v34; // rax@10
  __int64 v35; // r13@11
  __int64 v36; // r12@11
  __int64 v37; // rbx@11
  char *v38; // rax@11
  __int64 v39; // r14@12
  __int64 v40; // r13@12
  __int64 v41; // r12@12
  __int64 v42; // rbx@12
  char *v43; // rax@12
  __int64 v44; // r15@13
  __int64 v45; // r14@13
  __int64 v46; // r13@13
  __int64 v47; // r12@13
  __int64 v48; // rbx@13
  char *v49; // rax@13
  __int64 v50; // rcx@15
  __int64 v51; // r12@15
  __int64 v52; // r15@15
  __int64 v53; // r14@15
  __int64 v54; // r13@15
  __int64 v55; // rbx@15
  __int64 v56; // ST30_8@15
  char *v57; // rax@15
  __int64 v58; // r13@16
  __int64 v59; // r12@16
  __int64 v60; // r15@16
  __int64 v61; // r14@16
  __int64 v62; // ST38_8@16
  __int64 v63; // ST30_8@16
  __int64 v64; // rbx@16
  char *v65; // rax@16
  __int64 v66; // rcx@17
  int v67; // [sp-10h] [bp-68h]@13
  __int64 v68; // [sp-8h] [bp-60h]@0
  __int64 v69; // [sp+0h] [bp-58h]@7
  __int64 v70; // [sp+8h] [bp-50h]@7
  __int64 v71; // [sp+10h] [bp-48h]@7
  __int64 v72; // [sp+18h] [bp-40h]@7

  v6 = a6;
  v7 = a5;
  if ( a2 )
    fprintf(stream, "%s (%s) %s\n", a2, a3, a4);
  else
    fprintf(stream, "%s %s\n");
  v8 = dcgettext(0LL, "(C)", 5);
  fprintf(stream, "Copyright %s %d Free Software Foundation, Inc.", v8, 2015LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 56);
      v11 = *(_QWORD *)(v7 + 48);
      v12 = *(_QWORD *)(v7 + 40);
      v13 = *(_QWORD *)(v7 + 32);
      v14 = *(_QWORD *)(v7 + 16);
      v15 = *(_QWORD *)(v7 + 24);
      v16 = *(_QWORD *)(v7 + 8);
      v17 = *(_QWORD *)v7;
      v18 = v14;
      v19 = v16;
      v20 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v20, v17, v19, v18, v15, v13, v12, v11, v10);
    case 9LL:
      v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v23 = *(_QWORD *)(v7 + 8);
      v24 = *(_QWORD *)(v7 + 56);
      v25 = *(_QWORD *)(v7 + 48);
      v72 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 40);
      v27 = *(_QWORD *)(v7 + 32);
      v71 = *(_QWORD *)(v7 + 24);
      v70 = *(_QWORD *)(v7 + 16);
      v28 = *(_QWORD *)v7;
      v69 = v23;
      goto LABEL_8;
    case 1LL:
      v30 = *(_QWORD *)v7;
      v31 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v31, v30);
    case 2LL:
      v32 = *(_QWORD *)(v7 + 8);
      v33 = *(_QWORD *)v7;
      v34 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v34, v33, v32);
    case 3LL:
      v35 = *(_QWORD *)(v7 + 16);
      v36 = *(_QWORD *)(v7 + 8);
      v37 = *(_QWORD *)v7;
      v38 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v38, v37, v36, v35);
    case 4LL:
      v39 = *(_QWORD *)(v7 + 24);
      v40 = *(_QWORD *)(v7 + 16);
      v41 = *(_QWORD *)(v7 + 8);
      v42 = *(_QWORD *)v7;
      v43 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v43, v42, v41, v40, v39);
    case 5LL:
      v44 = *(_QWORD *)(v7 + 32);
      v45 = *(_QWORD *)(v7 + 24);
      v46 = *(_QWORD *)(v7 + 16);
      v47 = *(_QWORD *)(v7 + 8);
      v48 = *(_QWORD *)v7;
      v49 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v49, v48, v47, v46, v45, v44);
      goto LABEL_14;
    case 6LL:
      v50 = *(_QWORD *)(v7 + 8);
      v51 = *(_QWORD *)(v7 + 40);
      v52 = *(_QWORD *)(v7 + 32);
      v53 = *(_QWORD *)(v7 + 24);
      v54 = *(_QWORD *)(v7 + 16);
      v55 = *(_QWORD *)v7;
      v56 = v50;
      v57 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v57, v55, v56, v54, v53, v52);
LABEL_14:
      result = v67;
      break;
    case 7LL:
      v58 = *(_QWORD *)(v7 + 48);
      v59 = *(_QWORD *)(v7 + 40);
      v60 = *(_QWORD *)(v7 + 32);
      v61 = *(_QWORD *)(v7 + 24);
      v62 = *(_QWORD *)(v7 + 16);
      v63 = *(_QWORD *)(v7 + 8);
      v64 = *(_QWORD *)v7;
      v65 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      result = fprintf(stream, v65, v64, v63, v62, v61, v60, v59, v58, v68);
      break;
    default:
      v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v66 = *(_QWORD *)(v7 + 8);
      v24 = *(_QWORD *)(v7 + 56);
      v25 = *(_QWORD *)(v7 + 48);
      v72 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 40);
      v27 = *(_QWORD *)(v7 + 32);
      v71 = *(_QWORD *)(v7 + 24);
      v70 = *(_QWORD *)(v7 + 16);
      v28 = *(_QWORD *)v7;
      v69 = v66;
LABEL_8:
      v29 = dcgettext(0LL, v22, 5);
      result = fprintf(stream, v29, v28, v69, v70, v71, v27, v26, v25, v24, v72);
      break;
  }
  return result;
}

int __fastcall sub_4090E0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // r14@5
  __int64 v11; // r13@5
  __int64 v12; // r12@5
  __int64 v13; // r15@5
  __int64 v14; // r8@5
  __int64 v15; // ST40_8@5
  __int64 v16; // rcx@5
  __int64 v17; // rbx@5
  __int64 v18; // ST38_8@5
  __int64 v19; // ST30_8@5
  char *v20; // rax@5
  int result; // eax@5
  const char *v22; // rsi@7
  __int64 v23; // rcx@7
  __int64 v24; // r14@7
  __int64 v25; // r13@7
  __int64 v26; // r12@7
  __int64 v27; // r15@7
  __int64 v28; // rbx@7
  char *v29; // rax@8
  __int64 v30; // rbx@9
  char *v31; // rax@9
  __int64 v32; // r12@10
  __int64 v33; // rbx@10
  char *v34; // rax@10
  __int64 v35; // r13@11
  __int64 v36; // r12@11
  __int64 v37; // rbx@11
  char *v38; // rax@11
  __int64 v39; // r14@12
  __int64 v40; // r13@12
  __int64 v41; // r12@12
  __int64 v42; // rbx@12
  char *v43; // rax@12
  __int64 v44; // r15@13
  __int64 v45; // r14@13
  __int64 v46; // r13@13
  __int64 v47; // r12@13
  __int64 v48; // rbx@13
  char *v49; // rax@13
  __int64 v50; // rcx@15
  __int64 v51; // r12@15
  __int64 v52; // r15@15
  __int64 v53; // r14@15
  __int64 v54; // r13@15
  __int64 v55; // rbx@15
  __int64 v56; // ST30_8@15
  char *v57; // rax@15
  __int64 v58; // r13@16
  __int64 v59; // r12@16
  __int64 v60; // r15@16
  __int64 v61; // r14@16
  __int64 v62; // ST38_8@16
  __int64 v63; // ST30_8@16
  __int64 v64; // rbx@16
  char *v65; // rax@16
  __int64 v66; // rcx@17
  int v67; // [sp-10h] [bp-68h]@13
  __int64 v68; // [sp-8h] [bp-60h]@0
  __int64 v69; // [sp+0h] [bp-58h]@7
  __int64 v70; // [sp+8h] [bp-50h]@7
  __int64 v71; // [sp+10h] [bp-48h]@7
  __int64 v72; // [sp+18h] [bp-40h]@7

  v6 = a6;
  v7 = a5;
  if ( a2 )
    fprintf(stream, "%s (%s) %s\n", a2, a3, a4);
  else
    fprintf(stream, "%s %s\n");
  v8 = dcgettext(0LL, "(C)", 5);
  fprintf(stream, "Copyright %s %d Free Software Foundation, Inc.", v8, 2015LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 56);
      v11 = *(_QWORD *)(v7 + 48);
      v12 = *(_QWORD *)(v7 + 40);
      v13 = *(_QWORD *)(v7 + 32);
      v14 = *(_QWORD *)(v7 + 16);
      v15 = *(_QWORD *)(v7 + 24);
      v16 = *(_QWORD *)(v7 + 8);
      v17 = *(_QWORD *)v7;
      v18 = v14;
      v19 = v16;
      v20 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v20, v17, v19, v18, v15, v13, v12, v11, v10);
    case 9LL:
      v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v23 = *(_QWORD *)(v7 + 8);
      v24 = *(_QWORD *)(v7 + 56);
      v25 = *(_QWORD *)(v7 + 48);
      v72 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 40);
      v27 = *(_QWORD *)(v7 + 32);
      v71 = *(_QWORD *)(v7 + 24);
      v70 = *(_QWORD *)(v7 + 16);
      v28 = *(_QWORD *)v7;
      v69 = v23;
      goto LABEL_8;
    case 1LL:
      v30 = *(_QWORD *)v7;
      v31 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v31, v30);
    case 2LL:
      v32 = *(_QWORD *)(v7 + 8);
      v33 = *(_QWORD *)v7;
      v34 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v34, v33, v32);
    case 3LL:
      v35 = *(_QWORD *)(v7 + 16);
      v36 = *(_QWORD *)(v7 + 8);
      v37 = *(_QWORD *)v7;
      v38 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v38, v37, v36, v35);
    case 4LL:
      v39 = *(_QWORD *)(v7 + 24);
      v40 = *(_QWORD *)(v7 + 16);
      v41 = *(_QWORD *)(v7 + 8);
      v42 = *(_QWORD *)v7;
      v43 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v43, v42, v41, v40, v39);
    case 5LL:
      v44 = *(_QWORD *)(v7 + 32);
      v45 = *(_QWORD *)(v7 + 24);
      v46 = *(_QWORD *)(v7 + 16);
      v47 = *(_QWORD *)(v7 + 8);
      v48 = *(_QWORD *)v7;
      v49 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v49, v48, v47, v46, v45, v44);
      goto LABEL_14;
    case 6LL:
      v50 = *(_QWORD *)(v7 + 8);
      v51 = *(_QWORD *)(v7 + 40);
      v52 = *(_QWORD *)(v7 + 32);
      v53 = *(_QWORD *)(v7 + 24);
      v54 = *(_QWORD *)(v7 + 16);
      v55 = *(_QWORD *)v7;
      v56 = v50;
      v57 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v57, v55, v56, v54, v53, v52);
LABEL_14:
      result = v67;
      break;
    case 7LL:
      v58 = *(_QWORD *)(v7 + 48);
      v59 = *(_QWORD *)(v7 + 40);
      v60 = *(_QWORD *)(v7 + 32);
      v61 = *(_QWORD *)(v7 + 24);
      v62 = *(_QWORD *)(v7 + 16);
      v63 = *(_QWORD *)(v7 + 8);
      v64 = *(_QWORD *)v7;
      v65 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      result = fprintf(stream, v65, v64, v63, v62, v61, v60, v59, v58, v68);
      break;
    default:
      v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v66 = *(_QWORD *)(v7 + 8);
      v24 = *(_QWORD *)(v7 + 56);
      v25 = *(_QWORD *)(v7 + 48);
      v72 = *(_QWORD *)(v7 + 64);
      v26 = *(_QWORD *)(v7 + 40);
      v27 = *(_QWORD *)(v7 + 32);
      v71 = *(_QWORD *)(v7 + 24);
      v70 = *(_QWORD *)(v7 + 16);
      v28 = *(_QWORD *)v7;
      v69 = v66;
LABEL_8:
      v29 = dcgettext(0LL, v22, 5);
      result = fprintf(stream, v29, v28, v69, v70, v71, v27, v26, v25, v24, v72);
      break;
  }
  return result;
}

int __fastcall sub_409550(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4090E0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_4090E0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_409680(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_4098A0();
  }
  return result;
}

void *__fastcall sub_4096D0(void *a1, size_t a2)
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
        sub_4098A0();
    }
  }
  return result;
}

void *__fastcall sub_409840(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_409680(a2);
  return memcpy(v2, a1, a2);
}

void __noreturn sub_4098A0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(dword_6122C0, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_4098E0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15@2
  unsigned __int64 *v6; // r14@2
  const char *v7; // r13@2
  int *v8; // rax@4
  int *v9; // r12@4
  char v10; // bl@4
  const unsigned __int16 *v11; // rsi@4
  char *v12; // rax@4
  unsigned __int64 v13; // rax@8
  char *v14; // r8@8
  unsigned __int64 v15; // rbx@8
  signed int v16; // ebp@10
  char v17; // r12@12
  char *v19; // rax@19
  char *v20; // r8@19
  char v21; // al@21
  char *v22; // ST08_8@25
  char *v23; // rax@25
  signed __int64 v24; // rsi@27
  unsigned __int64 v25; // rcx@27
  signed int v26; // edi@41
  signed int v27; // er9@41
  bool v28; // of@42
  signed int v29; // edi@47
  signed int v30; // edi@53
  signed int v31; // edi@59
  unsigned __int64 v32; // rdx@68
  unsigned __int64 v33; // kr10_8@69
  signed int v34; // edi@77
  int base; // [sp+8h] [bp-50h]@2
  char *basea[2]; // [sp+8h] [bp-50h]@17
  char *baseb; // [sp+8h] [bp-50h]@20
  char *endptr; // [sp+18h] [bp-40h]@3

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 0x60u, "xstrtoul");
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
  while ( HIBYTE(v11[(unsigned __int8)v10]) & 0x20 )
    v10 = *++v12;
  if ( v10 == 45 )
    goto LABEL_16;
  v13 = strtoul(nptr, v5, base);
  v14 = *v5;
  v15 = v13;
  if ( *v5 == nptr )
  {
    basea[0] = *v5;
    if ( v7 )
    {
      v17 = *nptr;
      if ( *nptr )
      {
        v16 = 0;
        v15 = 1LL;
        v19 = strchr(v7, v17);
        v20 = basea[0];
        if ( v19 )
          goto LABEL_20;
      }
    }
    goto LABEL_16;
  }
  if ( *v9 )
  {
    v16 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
LABEL_16:
    return 4;
  }
  v16 = 0;
LABEL_11:
  if ( v7 )
  {
    v17 = *v14;
    if ( *v14 )
    {
      v22 = *v5;
      v23 = strchr(v7, v17);
      v20 = v22;
      if ( !v23 )
      {
LABEL_26:
        *v6 = v15;
        v16 |= 2u;
        return (unsigned int)v16;
      }
LABEL_20:
      baseb = v20;
      if ( !strchr(v7, 48) )
      {
        LODWORD(v24) = 1;
        v25 = 1024LL;
        goto LABEL_28;
      }
      v21 = baseb[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v25 = 1024LL;
          LODWORD(v24) = 2 * (baseb[2] == 66) + 1;
LABEL_28:
          switch ( v17 )
          {
            default:
              goto LABEL_26;
            case 119:
              v24 = (signed int)v24;
LABEL_31:
              if ( (v15 & 0x8000000000000000LL) != 0LL )
                goto LABEL_70;
              v15 *= 2LL;
              goto LABEL_33;
            case 99:
              v24 = (signed int)v24;
              goto LABEL_33;
            case 98:
              v24 = (signed int)v24;
LABEL_38:
              if ( v15 >> 55 )
                goto LABEL_70;
              v15 <<= 9;
              goto LABEL_33;
            case 90:
              v24 = (signed int)v24;
LABEL_41:
              v26 = 7;
              v27 = 0;
              do
              {
                v28 = v25 * (unsigned __int128)v15 >> 64 != 0;
                v15 *= v25;
                if ( v28 )
                {
                  v27 = 1;
                  v15 = -1LL;
                }
                --v26;
              }
              while ( v26 );
              goto LABEL_45;
            case 89:
              v24 = (signed int)v24;
LABEL_47:
              v29 = 8;
              v27 = 0;
              do
              {
                v28 = v25 * (unsigned __int128)v15 >> 64 != 0;
                v15 *= v25;
                if ( v28 )
                {
                  v27 = 1;
                  v15 = -1LL;
                }
                --v29;
              }
              while ( v29 );
              goto LABEL_45;
            case 84:
            case 116:
              v24 = (signed int)v24;
LABEL_53:
              v30 = 4;
              v27 = 0;
              do
              {
                v28 = v25 * (unsigned __int128)v15 >> 64 != 0;
                v15 *= v25;
                if ( v28 )
                {
                  v27 = 1;
                  v15 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_45;
            case 80:
              v24 = (signed int)v24;
LABEL_59:
              v31 = 5;
              v27 = 0;
              do
              {
                v28 = v25 * (unsigned __int128)v15 >> 64 != 0;
                v15 *= v25;
                if ( v28 )
                {
                  v27 = 1;
                  v15 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_45;
            case 77:
            case 109:
              v24 = (signed int)v24;
LABEL_65:
              if ( !is_mul_ok(v25, v15) || !is_mul_ok(v25, v25 * v15) )
                goto LABEL_70;
              v15 *= v25 * v25;
              goto LABEL_33;
            case 75:
            case 107:
              v32 = (signed int)v25;
              v24 = (signed int)v24;
LABEL_69:
              v33 = v15;
              v15 *= v32;
              if ( !is_mul_ok(v32, v33) )
                goto LABEL_70;
              goto LABEL_33;
            case 71:
            case 103:
              v24 = (signed int)v24;
LABEL_72:
              if ( is_mul_ok(v25, v15) && is_mul_ok(v25, v25 * v15) && is_mul_ok(v25, v25 * v25 * v15) )
              {
                v15 *= v25 * v25 * v25;
              }
              else
              {
                v15 = -1LL;
                v16 |= 1u;
              }
              goto LABEL_33;
            case 69:
              v24 = (signed int)v24;
LABEL_77:
              v34 = 6;
              v27 = 0;
              do
              {
                v28 = v25 * (unsigned __int128)v15 >> 64 != 0;
                v15 *= v25;
                if ( v28 )
                {
                  v27 = 1;
                  v15 = -1LL;
                }
                --v34;
              }
              while ( v34 );
LABEL_45:
              v16 |= v27;
              goto LABEL_33;
            case 66:
              v24 = (signed int)v24;
              break;
          }
          goto LABEL_83;
        }
        if ( v21 != 66 )
        {
          switch ( v17 )
          {
            default:
              goto LABEL_26;
            case 119:
              v24 = 1LL;
              goto LABEL_31;
            case 99:
              v24 = 1LL;
              goto LABEL_33;
            case 98:
              v24 = 1LL;
              goto LABEL_38;
            case 90:
              v24 = 1LL;
              v25 = 1024LL;
              goto LABEL_41;
            case 89:
              v24 = 1LL;
              v25 = 1024LL;
              goto LABEL_47;
            case 84:
            case 116:
              v24 = 1LL;
              v25 = 1024LL;
              goto LABEL_53;
            case 80:
              v24 = 1LL;
              v25 = 1024LL;
              goto LABEL_59;
            case 77:
            case 109:
              v24 = 1LL;
              v25 = 1024LL;
              goto LABEL_65;
            case 75:
            case 107:
              v24 = 1LL;
              v32 = 1024LL;
              goto LABEL_69;
            case 71:
            case 103:
              v24 = 1LL;
              v25 = 1024LL;
              goto LABEL_72;
            case 69:
              v24 = 1LL;
              v25 = 1024LL;
              goto LABEL_77;
            case 66:
              v24 = 1LL;
              break;
          }
LABEL_83:
          if ( v15 >> 54 )
          {
LABEL_70:
            v16 = 1;
            v15 = -1LL;
          }
          else
          {
            v15 <<= 10;
          }
LABEL_33:
          *v5 = &baseb[v24];
          if ( baseb[v24] )
            v16 |= 2u;
          goto LABEL_13;
        }
      }
      LODWORD(v24) = 2;
      v25 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *v6 = v15;
  return (unsigned int)v16;
}

__int64 __fastcall sub_409D40(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_612678 < 0 )
    {
      v4 = sub_409D40(a1);
      if ( v4 >= 0 && dword_612678 == -1 )
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
        dword_612678 = 1;
      }
      else
      {
        v4 = sub_409D40(a1);
        if ( v4 >= 0 )
        {
          dword_612678 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_409E80(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_409EF0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

__int64 __fastcall sub_409EC0(__int64 a1)
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

int __fastcall sub_409EF0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_409F50(__int64 a1, __int64 a2)
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
  v3 = *(_DWORD *)(a2 + 48);
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 52);
  v6 = *(_DWORD *)(a2 + 48);
  v7 = *(_DWORD *)a2;
  v8 = *(_DWORD *)(a2 + 52);
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
  *(_DWORD *)(a2 + 52) = v4;
  result = (unsigned int)(v4 - v8);
  *(_DWORD *)(a2 + 48) = result + v3;
  return result;
}

__int64 __fastcall sub_40A030(signed int a1, __int64 a2, __int64 a3, const char **a4, signed int *a5, int a6, __int64 a7, int a8)
{
  __int64 v8; // r12@1
  signed int v9; // eax@2
  signed int v10; // ebp@2
  _BYTE *v11; // r8@5
  char v12; // al@8
  int v13; // eax@9
  __int64 v14; // rax@14
  __int64 v15; // rdx@14
  __int64 v16; // rax@14
  int v17; // ST2C_4@17
  _BYTE *v18; // ST18_8@17
  char *v19; // rax@17
  const char *v20; // rbx@18
  int v21; // er13@18
  char v22; // r14@18
  char *v23; // rax@18
  char v24; // dl@22
  char v25; // dl@24
  __int64 v26; // rax@25
  unsigned int v27; // eax@31
  bool v28; // cf@36
  bool v29; // zf@36
  signed __int64 v30; // rcx@37
  _BYTE *v31; // rdi@37
  __int64 v32; // rdx@37
  _BYTE *v33; // rsi@37
  int v34; // edx@41
  int v35; // ecx@41
  int v36; // eax@41
  signed int v38; // edx@57
  __int64 v39; // rax@61
  __int64 v40; // rcx@63
  int v41; // esi@63
  char v42; // cl@67
  __int64 v43; // rax@76
  char v44; // r13@78
  const char *i; // r14@78
  signed int v46; // er13@83
  size_t v47; // r14@83
  const char **v48; // rbp@83
  const char *v49; // r12@83
  const char **v50; // r15@83
  _BYTE *v51; // r13@92
  int v52; // eax@96
  const char **v53; // rbx@97
  const char *v54; // r15@97
  __int64 v55; // r14@98
  const char *v56; // rsi@98
  size_t v57; // r13@98
  signed int v58; // ebp@98
  _QWORD *v59; // rax@102
  _BYTE *v60; // r13@110
  bool v61; // si@110
  signed int v62; // eax@113
  int v63; // ecx@113
  __int64 v64; // rbx@116
  int *v65; // rax@118
  signed int v66; // er15@127
  __int64 v67; // rdi@128
  __int64 v68; // r14@129
  __int64 v69; // rbx@138
  int v70; // ST2C_4@139
  _BYTE *v71; // ST18_8@139
  char *v72; // rax@139
  unsigned int v73; // ebp@141
  _BYTE *v74; // ST00_8@141
  __int64 v75; // rbx@141
  char *v76; // rax@141
  __int64 v77; // rax@148
  const char *v78; // rbp@148
  __int64 v79; // rbx@148
  unsigned int v80; // er13@149
  char *v81; // rax@149
  __int64 v82; // rbx@150
  void *v83; // rdi@152
  __int64 v84; // rbx@122
  char *v85; // rax@122
  __int64 v86; // rbp@160
  __int64 v87; // rbx@160
  char *v88; // rax@160
  char *v89; // rbx@160
  const char **j; // rax@160
  __int64 v91; // rbx@164
  size_t v92; // rax@164
  __int64 v93; // rbx@166
  signed int v94; // ST00_4@166
  size_t v95; // rax@166
  __int64 v96; // rdi@167
  __int64 v97; // rbx@168
  signed int v98; // eax@172
  char v99; // r13@175
  const char *v100; // r14@175
  signed int v101; // ebp@175
  int v102; // eax@177
  __int64 v103; // rbp@188
  __int64 v104; // rbx@189
  char *v105; // rax@189
  signed int v106; // eax@195
  const char **v107; // rsi@195
  __int64 v108; // rbp@197
  __int64 v109; // rbx@197
  char *v110; // rax@197
  __int64 v111; // rbx@200
  size_t v112; // rax@206
  __int64 v113; // rbx@191
  char *v114; // rax@191
  __int64 v115; // rax@211
  char *v116; // rax@213
  const char *v117; // rbp@199
  __int64 v118; // rbx@199
  char *v119; // rax@199
  __int64 v120; // rbp@205
  char *v121; // rax@205
  __int64 v122; // rbx@209
  char *v123; // rax@209
  const char *v124; // rbp@215
  __int64 v125; // rbx@215
  char *v126; // rax@215
  const char *v127; // rbp@218
  __int64 v128; // rbx@218
  char *v129; // rax@218
  const char *v130; // [sp+0h] [bp-98h]@1
  int v131; // [sp+Ch] [bp-8Ch]@1
  int v132; // [sp+Ch] [bp-8Ch]@11
  __int64 *v133; // [sp+10h] [bp-88h]@1
  _BYTE *v134; // [sp+18h] [bp-80h]@18
  const char **v135; // [sp+18h] [bp-80h]@98
  const char **v136; // [sp+20h] [bp-78h]@1
  signed int v137; // [sp+20h] [bp-78h]@83
  int v138; // [sp+28h] [bp-70h]@1
  signed int v139; // [sp+2Ch] [bp-6Ch]@83
  int v140; // [sp+2Ch] [bp-6Ch]@96
  signed int *v141; // [sp+30h] [bp-68h]@1
  const char *v142; // [sp+38h] [bp-60h]@83
  signed int v143; // [sp+38h] [bp-60h]@98
  signed int v144; // [sp+40h] [bp-58h]@83
  _BYTE *v145; // [sp+40h] [bp-58h]@98
  char v146; // [sp+48h] [bp-50h]@83
  signed int v147; // [sp+48h] [bp-50h]@98
  signed int v148; // [sp+4Ch] [bp-4Ch]@98
  char v149; // [sp+50h] [bp-48h]@160
  __int64 v150; // [sp+58h] [bp-40h]@160

  v8 = a7;
  v133 = (__int64 *)a2;
  v130 = (const char *)a3;
  v136 = a4;
  v141 = a5;
  v138 = a6;
  v131 = *(_DWORD *)(a7 + 4);
  if ( a1 <= 0 )
    goto LABEL_56;
  *(_QWORD *)(a7 + 16) = 0LL;
  v9 = *(_DWORD *)a7;
  v10 = a1;
  if ( !*(_DWORD *)a7 )
  {
    *(_DWORD *)a7 = 1;
    v9 = 1;
    goto LABEL_4;
  }
  if ( !*(_DWORD *)(a7 + 24) )
  {
LABEL_4:
    *(_DWORD *)(a7 + 52) = v9;
    *(_DWORD *)(a7 + 48) = v9;
    *(_QWORD *)(a7 + 32) = 0LL;
    if ( a8 )
    {
      *(_DWORD *)(a7 + 44) = 1;
      v11 = 0LL;
      if ( *(_BYTE *)a3 != 45 )
      {
        if ( *(_BYTE *)a3 != 43 )
        {
LABEL_7:
          *(_DWORD *)(a7 + 40) = 0;
LABEL_8:
          *(_DWORD *)(a7 + 24) = 1;
          v12 = *v130;
          goto LABEL_9;
        }
LABEL_71:
        *(_DWORD *)(a7 + 40) = 0;
        ++v130;
        goto LABEL_8;
      }
    }
    else if ( getenv("POSIXLY_CORRECT") )
    {
      v11 = *(_BYTE **)(a7 + 32);
      *(_DWORD *)(a7 + 44) = 1;
      if ( *v130 != 45 )
      {
        if ( *v130 != 43 )
          goto LABEL_7;
        goto LABEL_71;
      }
    }
    else
    {
      *(_DWORD *)(a7 + 44) = 0;
      if ( *v130 != 45 )
      {
        if ( *v130 != 43 )
        {
          *(_DWORD *)(a7 + 40) = 1;
          v11 = *(_BYTE **)(a7 + 32);
          goto LABEL_8;
        }
        v11 = *(_BYTE **)(a7 + 32);
        goto LABEL_71;
      }
      v11 = *(_BYTE **)(a7 + 32);
    }
    *(_DWORD *)(a7 + 40) = 2;
    ++v130;
    goto LABEL_8;
  }
  v11 = *(_BYTE **)(a7 + 32);
  v12 = *(_BYTE *)a3;
  if ( !((*(_BYTE *)a3 - 43) & 0xFD) )
  {
    v12 = *(_BYTE *)(a3 + 1);
    v130 = (const char *)(a3 + 1);
  }
LABEL_9:
  v29 = v12 == 58;
  v13 = 0;
  if ( !v29 )
    v13 = v131;
  v132 = v13;
  if ( !v11 || !*v11 )
  {
    v27 = *(_DWORD *)a7;
    if ( *(_DWORD *)(a7 + 52) > *(_DWORD *)a7 )
      *(_DWORD *)(a7 + 52) = v27;
    if ( (signed int)v27 < *(_DWORD *)(a7 + 48) )
      *(_DWORD *)(a7 + 48) = v27;
    if ( *(_DWORD *)(a7 + 40) == 1 )
    {
      v38 = *(_DWORD *)(a7 + 52);
      if ( *(_DWORD *)(a7 + 48) == v38 )
      {
        if ( v27 != v38 )
        {
          *(_DWORD *)(a7 + 48) = v27;
          v38 = v27;
        }
      }
      else if ( v27 != v38 )
      {
        sub_409F50(a2, a7);
        v38 = *(_DWORD *)a7;
      }
      if ( a1 <= v38 )
      {
LABEL_120:
        v27 = v38;
      }
      else
      {
        v39 = v38;
        while ( 1 )
        {
          v40 = v133[v39];
          v41 = v39;
          v38 = v39;
          if ( *(_BYTE *)v40 == 45 )
          {
            if ( *(_BYTE *)(v40 + 1) )
              break;
          }
          v38 = v39++ + 1;
          *(_DWORD *)a7 = v41 + 1;
          if ( a1 <= (signed int)v39 )
            goto LABEL_120;
        }
        v27 = *(_DWORD *)a7;
      }
      *(_DWORD *)(a7 + 52) = v38;
    }
    v28 = a1 < v27;
    v29 = a1 == v27;
    if ( a1 == v27 )
    {
      v10 = *(_DWORD *)(a7 + 52);
      v34 = *(_DWORD *)(a7 + 48);
LABEL_54:
      if ( v34 != v10 )
        *(_DWORD *)a7 = v34;
      goto LABEL_56;
    }
    v30 = 3LL;
    v31 = &unk_40F291;
    v32 = v133[v27];
    v33 = (_BYTE *)v133[v27];
    do
    {
      if ( !v30 )
        break;
      v28 = *v33 < *v31;
      v29 = *v33++ == *v31++;
      --v30;
    }
    while ( v29 );
    if ( (!v28 && !v29) == v28 )
    {
      v34 = *(_DWORD *)(a7 + 48);
      v35 = *(_DWORD *)(a7 + 52);
      v36 = v27 + 1;
      *(_DWORD *)a7 = v36;
      if ( v34 == v35 )
      {
        *(_DWORD *)(a7 + 48) = v36;
        v34 = v36;
      }
      else if ( v36 != v35 )
      {
        sub_409F50((__int64)v133, a7);
        v34 = *(_DWORD *)(a7 + 48);
      }
      *(_DWORD *)(a7 + 52) = v10;
      *(_DWORD *)a7 = v10;
      goto LABEL_54;
    }
    if ( *(_BYTE *)v32 == 45 )
    {
      v42 = *(_BYTE *)(v32 + 1);
      if ( v42 )
      {
        v11 = (_BYTE *)(v32 + ((v136 != 0LL) & (unsigned __int8)(v42 == 45)) + 1);
        *(_QWORD *)(a7 + 32) = v11;
        goto LABEL_13;
      }
    }
    if ( *(_DWORD *)(a7 + 40) )
    {
      *(_QWORD *)(a7 + 16) = v32;
      v21 = 1;
      *(_DWORD *)a7 = v27 + 1;
      return (unsigned int)v21;
    }
LABEL_56:
    return (unsigned int)-1;
  }
LABEL_13:
  if ( !v136 )
    goto LABEL_18;
  v14 = *(_DWORD *)a7;
  v15 = v14;
  v16 = v133[v14];
  if ( *(_BYTE *)(v16 + 1) != 45 )
  {
    if ( !v138 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v16 + 2) )
    {
      v17 = v15;
      v18 = v11;
      v19 = strchr(v130, *(_BYTE *)(v16 + 1));
      v11 = v18;
      v15 = v17;
      if ( v19 )
        goto LABEL_18;
    }
  }
  v51 = v11;
  if ( *v11 && *v11 != 61 )
  {
    do
      ++v51;
    while ( *v51 && *v51 != 61 );
    v52 = (_DWORD)v51 - (_DWORD)v11;
    v140 = (_DWORD)v51 - (_DWORD)v11;
  }
  else
  {
    v140 = 0;
    v52 = 0;
  }
  v53 = v136;
  v54 = *v136;
  if ( !*v136 )
  {
LABEL_137:
    if ( v138 )
    {
      v69 = v133[(signed int)v15];
      if ( *(_BYTE *)(v69 + 1) != 45 )
      {
        v70 = v15;
        v71 = *(_BYTE **)(a7 + 32);
        v72 = strchr(v130, **(_BYTE **)(a7 + 32));
        v11 = v71;
        LODWORD(v15) = v70;
        if ( v72 )
        {
LABEL_18:
          v20 = v11 + 1;
          v134 = v11;
          *(_QWORD *)(a7 + 32) = v11 + 1;
          v21 = *v11;
          v22 = *v11;
          v23 = strchr(v130, v21);
          if ( !v134[1] )
            ++*(_DWORD *)a7;
          if ( (unsigned __int8)(v22 - 58) <= 1u || !v23 )
          {
            if ( v132 )
            {
              v84 = *v133;
              v85 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
              fprintf(stderr, v85, v84, (unsigned int)v21, v130);
            }
            *(_DWORD *)(a7 + 8) = v21;
            return 63;
          }
          v24 = v23[1];
          if ( *v23 != 87 || v24 != 59 )
          {
            if ( v24 == 58 )
            {
              v25 = v134[1];
              if ( v23[2] == 58 )
              {
                if ( v25 )
                {
                  *(_QWORD *)(a7 + 16) = v20;
                  ++*(_DWORD *)a7;
                }
                else
                {
                  *(_QWORD *)(a7 + 16) = 0LL;
                }
              }
              else
              {
                v26 = *(_DWORD *)a7;
                if ( v25 )
                {
                  *(_QWORD *)(a7 + 16) = v20;
                  *(_DWORD *)a7 = v26 + 1;
                }
                else if ( v10 == (_DWORD)v26 )
                {
                  if ( v132 )
                  {
                    v113 = *v133;
                    v114 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                    fprintf(stderr, v114, v113, (unsigned int)v21, v130);
                  }
                  *(_DWORD *)(a7 + 8) = v21;
                  v21 = 5 * (*v130 != 58) + 58;
                }
                else
                {
                  *(_DWORD *)a7 = v26 + 1;
                  *(_QWORD *)(a7 + 16) = v133[v26];
                }
              }
              *(_QWORD *)(a7 + 32) = 0LL;
            }
            return (unsigned int)v21;
          }
          if ( !v136 )
            goto LABEL_207;
          v43 = *(_DWORD *)a7;
          if ( v134[1] )
          {
            *(_QWORD *)(a7 + 16) = v20;
            *(_DWORD *)a7 = v43 + 1;
          }
          else
          {
            if ( v10 == (_DWORD)v43 )
            {
              if ( v132 )
              {
                v122 = *v133;
                v123 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                fprintf(stderr, v123, v122, (unsigned int)v21, v130);
              }
              *(_DWORD *)(a7 + 8) = v21;
              return (unsigned int)(5 * (*v130 != 58) + 58);
            }
            *(_DWORD *)a7 = v43 + 1;
            v20 = (const char *)v133[v43];
            *(_QWORD *)(a7 + 16) = v20;
          }
          *(_QWORD *)(a7 + 32) = v20;
          v44 = *v20;
          for ( i = v20; *i; v44 = *++i )
          {
            if ( v44 == 61 )
              break;
          }
          if ( !*v136 )
          {
LABEL_207:
            *(_QWORD *)(v8 + 32) = 0LL;
            return 87;
          }
          v146 = v44;
          v142 = i;
          v46 = 0;
          v144 = v10;
          v47 = i - v20;
          v48 = v136;
          v49 = *v136;
          v50 = 0LL;
          v139 = 0;
          v137 = 0;
          do
          {
            if ( !strncmp(v49, v20, v47) )
            {
              if ( (unsigned int)v47 == strlen(v49) )
              {
                v106 = v46;
                v107 = v48;
                v100 = v142;
                v99 = v146;
                v101 = v144;
                v8 = a7;
                v139 = v106;
                v50 = v107;
                goto LABEL_177;
              }
              if ( v50 )
              {
                if ( v138 || *((_DWORD *)v50 + 2) != *((_DWORD *)v48 + 2) || v50[2] != v48[2] )
                {
                  v137 = 1;
                }
                else
                {
                  v98 = 1;
                  if ( *((_DWORD *)v50 + 6) == *((_DWORD *)v48 + 6) )
                    v98 = v137;
                  v137 = v98;
                }
              }
              else
              {
                v139 = v46;
                v50 = v48;
              }
            }
            v48 += 4;
            v49 = *v48;
            ++v46;
          }
          while ( *v48 );
          v99 = v146;
          v100 = v142;
          v101 = v144;
          v8 = a7;
          if ( v137 )
          {
            if ( v132 )
            {
              v120 = *v133;
              v121 = dcgettext(0LL, "%s: option '-W %s' is ambiguous\n", 5);
              fprintf(stderr, v121, v120, v20, v130);
              v20 = *(const char **)(a7 + 32);
            }
            v21 = 63;
            v112 = strlen(v20);
            ++*(_DWORD *)a7;
            *(_QWORD *)(a7 + 32) = &v20[v112];
            return (unsigned int)v21;
          }
          if ( !v50 )
            goto LABEL_207;
LABEL_177:
          v102 = *((_DWORD *)v50 + 2);
          if ( v99 )
          {
            if ( !v102 )
            {
              if ( v132 )
              {
                v124 = *v50;
                v125 = *v133;
                v126 = dcgettext(0LL, "%s: option '-W %s' doesn't allow an argument\n", 5);
                fprintf(stderr, v126, v125, v124, v130);
                v20 = *(const char **)(v8 + 32);
              }
              v21 = 63;
              *(_QWORD *)(v8 + 32) = &v20[strlen(v20)];
              return (unsigned int)v21;
            }
            *(_QWORD *)(v8 + 16) = v100 + 1;
            goto LABEL_180;
          }
          if ( v102 != 1 )
          {
            *(_QWORD *)(v8 + 16) = 0LL;
            goto LABEL_180;
          }
          v115 = *(_DWORD *)v8;
          if ( (signed int)v115 < v101 )
          {
            *(_DWORD *)v8 = v115 + 1;
            *(_QWORD *)(v8 + 16) = v133[v115];
LABEL_180:
            *(_QWORD *)(v8 + 32) = &v20[strlen(v20)];
            if ( v141 )
              *v141 = v139;
            v65 = (int *)v50[2];
            v21 = *((_DWORD *)v50 + 6);
            if ( v65 )
              goto LABEL_119;
            return (unsigned int)v21;
          }
          if ( v132 )
          {
            v127 = *v50;
            v128 = *v133;
            v129 = dcgettext(0LL, "%s: option '-W %s' requires an argument\n", 5);
            fprintf(stderr, v129, v128, v127, v130);
          }
          *(_QWORD *)(v8 + 32) = *(_QWORD *)(v8 + 32) + strlen(*(const char **)(v8 + 32)) + 1 - 1;
          if ( *v130 != 58 )
            goto LABEL_165;
LABEL_201:
          return 58;
        }
        if ( !v132 )
        {
LABEL_142:
          v21 = 63;
          *(_QWORD *)(a7 + 32) = "";
          *(_DWORD *)a7 = v15 + 1;
          *(_DWORD *)(a7 + 8) = 0;
          return (unsigned int)v21;
        }
LABEL_141:
        v73 = *(_BYTE *)v69;
        v74 = v11;
        v75 = *v133;
        v76 = dcgettext(0LL, "%s: unrecognized option '%c%s'\n", 5);
        fprintf(stderr, v76, v75, v73, v74, v74);
        LODWORD(v15) = *(_DWORD *)a7;
        goto LABEL_142;
      }
      if ( !v132 )
        goto LABEL_142;
      v103 = *(_QWORD *)(a7 + 32);
    }
    else
    {
      if ( !v132 )
        goto LABEL_142;
      v103 = *(_QWORD *)(a7 + 32);
      v69 = v133[v15];
      v11 = *(_BYTE **)(a7 + 32);
      if ( *(_BYTE *)(v69 + 1) != 45 )
        goto LABEL_141;
    }
    v104 = *v133;
    v105 = dcgettext(0LL, "%s: unrecognized option '--%s'\n", 5);
    fprintf(stderr, v105, v104, v103, v130);
    LODWORD(v15) = *(_DWORD *)a7;
    goto LABEL_142;
  }
  v145 = v51;
  v55 = 0LL;
  v148 = v10;
  v56 = v11;
  v57 = (unsigned int)v52;
  v58 = 0;
  v143 = -1;
  v147 = 0;
  v135 = 0LL;
  while ( 1 )
  {
    if ( strncmp(v54, v56, v57) )
      goto LABEL_104;
    if ( v140 == (unsigned int)strlen(v54) )
    {
      v66 = v58;
      v60 = v145;
      v10 = v148;
      if ( v147 || v55 )
      {
        v67 = v55;
        if ( v55 )
        {
          do
          {
            v68 = *(_QWORD *)(v67 + 8);
            free((void *)v67);
            v67 = v68;
          }
          while ( v68 );
        }
      }
      LODWORD(v15) = *(_DWORD *)a7;
      v143 = v66;
      v135 = v53;
      goto LABEL_113;
    }
    if ( !v135 )
      break;
    if ( !v147 )
    {
      if ( v138
        || *((_DWORD *)v135 + 2) != *((_DWORD *)v53 + 2)
        || v135[2] != v53[2]
        || *((_DWORD *)v135 + 6) != *((_DWORD *)v53 + 6) )
      {
        v59 = malloc(0x10uLL);
        if ( v59 )
        {
          *v59 = v53;
          v59[1] = v55;
          v55 = (__int64)v59;
        }
        else
        {
          if ( v55 )
          {
            v83 = (void *)v55;
            do
            {
              v55 = *(_QWORD *)(v55 + 8);
              free(v83);
              v83 = (void *)v55;
            }
            while ( v55 );
          }
          v147 = 1;
        }
      }
      else
      {
        v147 = 0;
      }
    }
LABEL_104:
    v53 += 4;
    v54 = *v53;
    ++v58;
    if ( !*v53 )
      goto LABEL_110;
LABEL_105:
    v56 = *(const char **)(a7 + 32);
  }
  v135 = v53;
  v53 += 4;
  v54 = *v53;
  v143 = v58++;
  if ( *v53 )
    goto LABEL_105;
LABEL_110:
  v60 = v145;
  v10 = v148;
  v61 = v55 != 0;
  v15 = *(_DWORD *)a7;
  if ( (_BYTE)v147 || v61 )
  {
    if ( v132 )
    {
      if ( v61 )
      {
        v150 = v55;
        v86 = v133[v15];
        v87 = *v133;
        v88 = dcgettext(0LL, "%s: option '%s' is ambiguous; possibilities:", 5);
        fprintf(stderr, v88, v87, v86, v130);
        v89 = &v149;
        for ( j = v135; ; j = *(const char ***)v89 )
        {
          fprintf(stderr, " '--%s'", *j);
          v89 = (char *)*((_QWORD *)v89 + 1);
          if ( !v89 )
            break;
        }
        fputc(10, stderr);
        goto LABEL_164;
      }
      if ( (_BYTE)v147 )
      {
        v108 = v133[v15];
        v109 = *v133;
        v110 = dcgettext(0LL, "%s: option '%s' is ambiguous\n", 5);
        fprintf(stderr, v110, v109, v108, v130);
LABEL_164:
        v91 = *(_QWORD *)(a7 + 32);
        v92 = strlen(*(const char **)(a7 + 32));
        ++*(_DWORD *)a7;
        *(_DWORD *)(a7 + 8) = 0;
        *(_QWORD *)(a7 + 32) = v92 + v91;
        goto LABEL_165;
      }
    }
    v93 = *(_QWORD *)(a7 + 32);
    v94 = *(_DWORD *)a7;
    v95 = strlen(*(const char **)(a7 + 32));
    *(_DWORD *)(a7 + 8) = 0;
    *(_QWORD *)(a7 + 32) = v95 + v93;
    *(_DWORD *)a7 = v94 + 1;
    if ( v55 )
    {
      v96 = v55;
      do
      {
        v97 = *(_QWORD *)(v96 + 8);
        free((void *)v96);
        v96 = v97;
      }
      while ( v97 );
    }
    goto LABEL_165;
  }
  if ( !v135 )
    goto LABEL_137;
LABEL_113:
  v62 = v15 + 1;
  *(_DWORD *)a7 = v15 + 1;
  v63 = *((_DWORD *)v135 + 2);
  if ( !*v60 )
  {
    if ( v63 != 1 )
      goto LABEL_116;
    if ( v62 < v10 )
    {
      *(_DWORD *)a7 = v15 + 2;
      *(_QWORD *)(a7 + 16) = v133[v62];
      goto LABEL_116;
    }
    if ( v132 )
    {
      v117 = *v135;
      v118 = *v133;
      v119 = dcgettext(0LL, "%s: option '--%s' requires an argument\n", 5);
      fprintf(stderr, v119, v118, v117, v130);
    }
    v111 = *(_QWORD *)(a7 + 32);
    *(_QWORD *)(a7 + 32) = strlen(*(const char **)(a7 + 32)) + v111;
    *(_DWORD *)(a7 + 8) = *((_DWORD *)v135 + 6);
    if ( *v130 == 58 )
      goto LABEL_201;
LABEL_165:
    return 63;
  }
  if ( v63 )
  {
    *(_QWORD *)(a7 + 16) = v60 + 1;
LABEL_116:
    v64 = *(_QWORD *)(a7 + 32);
    *(_QWORD *)(a7 + 32) = strlen(*(const char **)(a7 + 32)) + v64;
    if ( v141 )
      *v141 = v143;
    v65 = (int *)v135[2];
    v21 = *((_DWORD *)v135 + 6);
    if ( v65 )
    {
LABEL_119:
      *v65 = v21;
      v21 = 0;
    }
  }
  else
  {
    if ( v132 )
    {
      v77 = v133[v62 - 1];
      v78 = *v135;
      v79 = *v133;
      if ( *(_BYTE *)(v77 + 1) == 45 )
      {
        v116 = dcgettext(0LL, "%s: option '--%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v116, v79, v78, v130);
      }
      else
      {
        v80 = *(_BYTE *)v77;
        v81 = dcgettext(0LL, "%s: option '%c%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v81, v79, v80, v78, v130);
      }
    }
    v82 = *(_QWORD *)(a7 + 32);
    v21 = 63;
    *(_QWORD *)(a7 + 32) = strlen(*(const char **)(a7 + 32)) + v82;
    *(_DWORD *)(a7 + 8) = *((_DWORD *)v135 + 6);
  }
  return (unsigned int)v21;
}

__int64 __fastcall sub_40B070(signed int a1, __int64 a2, __int64 a3, const char **a4, signed int *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_612680 = dword_61233C;
  dword_612684 = dword_612338;
  result = sub_40A030(a1, a2, a3, a4, a5, a6, (__int64)&dword_612680, a7);
  dword_61233C = dword_612680;
  name = (char *)qword_612690;
  dword_612334 = dword_612688;
  return result;
}

__int64 __fastcall sub_40B0F0(signed int a1, __int64 a2, __int64 a3, const char **a4, signed int *a5)
{
  return sub_40B070(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_40B170(wchar_t *a1, const char *a2, size_t a3, mbstate_t *a4)
{
  if ( a2 )
  {
    if ( !a3 )
      return -2LL;
  }
  else
  {
    a3 = 1LL;
    a2 = "%s: invalid option -- '%c'\n" + 27;
    a1 = 0LL;
  }
  return mbrtowc(a1, a2, a3, a4);
}

_BYTE *__fastcall sub_40B1A0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

int __fastcall sub_40B2B0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebp@1
  int result; // eax@1

  v1 = __fpending(stream);
  v2 = ferror(stream);
  result = fclose(stream);
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

const char *sub_40B320()
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
                fclose(v61);
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
            fclose(v40);
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
      v14 = 116LL;
      v9 = 102LL;
      v10 = 101LL;
      v7 = "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
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

signed __int64 __fastcall sub_40B890(__int64 a1)
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
      v8 = qword_6126C0[v6];
      qword_6126C0[v7] = v4;
      *v5 = v8;
    }
    result = v4;
  }
  return result;
}

void __fastcall sub_40B900(unsigned __int64 a1)
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
      v2 = qword_6126C0[v1];
      if ( v2 )
      {
        if ( v2 == a1 )
        {
          v4 = &qword_6126C0[v1];
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

size_t __fastcall sub_40BA40(char *s)
{
  __int64 v1; // rbx@2
  int v3; // eax@6
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
  int v15; // [sp+24h] [bp-34h]@6

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
        if ( ((unsigned int)dword_40F520[(unsigned __int64)(((unsigned __int8)*sa >> 5) & 7)] >> *sa) & 1 )
        {
          v13 = 1LL;
          v3 = *sa;
          v14 = 1;
          v15 = v3;
          goto LABEL_7;
        }
        if ( !mbsinit(&ps) )
          __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
        v9 = 1;
      }
      v4 = __ctype_get_mb_cur_max();
      v5 = sa;
      v6 = sub_409040((__int64)sa, v4);
      v7 = sub_40B170(&v15, v5, v6, &ps);
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
          __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
        if ( v15 )
          __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
      }
      v14 = 1;
      if ( mbsinit(&ps) )
        v9 = 0;
LABEL_7:
      if ( !v15 )
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

int __fastcall sub_40BC80(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_6122A8 )
    v1 = unk_6122A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40BC98(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_611E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
