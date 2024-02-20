__int64 __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // ebp
  char **v4; // rbx
  char *v5; // rdi
  __pid_t v6; // eax
  char *v7; // r12
  int *v8; // rax
  void (*v9)(void); // r14
  int v10; // er13
  __int64 (__fastcall *v11)(); // r12
  const char *v12; // r15
  int v13; // eax
  __int64 v14; // rax
  const char *v15; // rax
  char *v16; // rax
  int *v17; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  int *v25; // rax
  const unsigned __int16 **v26; // rax
  char *v27; // r9
  int *v28; // r8
  const char *v29; // rdi
  unsigned __int64 v30; // rax
  char *v31; // r9
  const char *v32; // rsi
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  __int64 *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r15
  int *v42; // rdi
  unsigned __int64 v43; // kr18_8
  int v44; // eax
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // r13
  __int64 v48; // rcx
  char *v49; // rdx
  __int64 v50; // r13
  char *v51; // rax
  __int64 v52; // r13
  char *v53; // rax
  __int64 v54; // r13
  char *v55; // rax
  __int64 v56; // r13
  __int64 v57; // r14
  char *v58; // rax
  __int64 v59; // r13
  char *v60; // rax
  char *v61; // rax
  char *v62; // rax
  char *v63; // r13
  char *v64; // rax
  __int64 v65; // r14
  char *v66; // r13
  int *v67; // rax
  char *v68; // r13
  int *v69; // rax
  char *v70; // r13
  int *v71; // rax
  char *v72; // rax
  unsigned __int64 v73; // rax
  char *v74; // rax
  __int64 *v75; // [rsp-8h] [rbp-120h]
  int v76; // [rsp+8h] [rbp-110h]
  int v77; // [rsp+Ch] [rbp-10Ch]
  char *formatb; // [rsp+10h] [rbp-108h]
  char *format; // [rsp+10h] [rbp-108h]
  const char *formatc; // [rsp+10h] [rbp-108h]
  char *formata; // [rsp+10h] [rbp-108h]
  char *formate; // [rsp+10h] [rbp-108h]
  char *formatd; // [rsp+10h] [rbp-108h]
  char *formatf; // [rsp+10h] [rbp-108h]
  char *v85; // [rsp+18h] [rbp-100h]
  int *v86; // [rsp+18h] [rbp-100h]
  char *v87; // [rsp+18h] [rbp-100h]
  unsigned __int64 v88; // [rsp+18h] [rbp-100h]
  int v89; // [rsp+2Ch] [rbp-ECh]
  int v90; // [rsp+33h] [rbp-E5h]
  int *v91; // [rsp+38h] [rbp-E0h]
  char *endptr; // [rsp+40h] [rbp-D8h]
  sigset_t set; // [rsp+48h] [rbp-D0h]
  int v94; // [rsp+C8h] [rbp-50h]

  v3 = a1;
  v4 = a2;
  v5 = *a2;
  strcpy((char *)&v90, "echo");
  if ( !*a2 )
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
  if ( (unsigned int)sub_40BC80(sub_4058E0) || (unsigned int)sub_40BC80(sub_403EC0) )
  {
    v7 = dcgettext(0LL, "The atexit library function failed", 5);
    v8 = __errno_location();
    error(1, *v8, v7);
  }
  v9 = (void (*)(void))sub_402F00;
  v10 = sub_404EA0(&dword_612420, 2048LL);
  if ( (unsigned int)(v10 - 1) > 1 )
  {
    v23 = sysconf(0);
    if ( v23 > 0 )
    {
      if ( v23 <= 2048 )
        __assert_fail("val > XARGS_POSIX_HEADROOM", "xargs.c", 0x1D8u, "main");
      v24 = v23 - 2048;
      if ( v24 > qword_612438 )
        v24 = qword_612438;
      qword_612438 = v24;
    }
    if ( (unsigned __int64)qword_612438 <= 0x7FF )
      __assert_fail("bc_ctl.arg_max >= LINE_MAX", "xargs.c", 0x1F4u, "main");
    v9 = (void (*)(void))nullsub_1;
    qword_612460 = (__int64)&sub_404120;
    sub_404F80(&dword_612420);
  }
  v77 = 1;
  v11 = (__int64 (__fastcall *)())sub_4038B0;
  v12 = "-";
  v76 = 0;
  while ( 1 )
  {
    v13 = sub_40B0F0((unsigned int)v3, v4, "+0a:E:e::i::I:l::L:n:prs:txP:d:", off_40D6E0, &v89);
    if ( v13 == -1 )
      break;
    switch ( v13 )
    {
      case 48:
        byte_6123C0 = 0;
        v11 = sub_403790;
        continue;
      case 69:
      case 101:
        if ( name && *name )
          s1 = name;
        else
          s1 = 0LL;
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
      case 76:
        v14 = sub_403570(name, 76LL, 1LL, -1LL, 1LL);
        qword_612470 = 0LL;
        qword_612468 = v14;
        qword_612450 = 0LL;
        continue;
      case 80:
        dword_6122B0 = sub_403570(name, 80LL, 0LL, 0x7FFFFFFFLL, 1LL);
        continue;
      case 83:
        v76 = 1;
        continue;
      case 97:
        v12 = name;
        continue;
      case 100:
        LOBYTE(v22) = *name;
        if ( ~(strlen(name) + 1) == -3LL )
          goto LABEL_60;
        if ( (_BYTE)v22 != 92 )
        {
          LOBYTE(v22) = 0;
          formatf = name;
          v36 = dcgettext(
                  0LL,
                  "Invalid input delimiter specification %s: the delimiter must be either a single character or an escape"
                  " sequence starting with \\.",
                  5);
          error(1, 0, v36, formatf);
          goto LABEL_60;
        }
        break;
      case 104:
        sub_4032B0(stdout);
        return 0LL;
      case 108:
        if ( name )
          qword_612468 = sub_403570(name, 108LL, 1LL, -1LL, 1LL);
        else
          qword_612468 = 1LL;
        qword_612470 = 0LL;
        qword_612450 = 0LL;
        continue;
      case 110:
        v21 = sub_403570(name, 110LL, 1LL, -1LL, 1LL);
        qword_612468 = 0LL;
        qword_612470 = v21;
        if ( v21 == 1 && qword_612450 )
          qword_612470 = 0LL;
        else
          qword_612450 = 0LL;
        continue;
      case 112:
        byte_6123C1 = 1;
        goto LABEL_12;
      case 114:
        v77 = 0;
        continue;
      case 115:
        v9();
        v19 = sub_403570(name, 115LL, 1LL, qword_612428, 0LL);
        v20 = v19;
        if ( qword_612428 < v19 )
        {
          formatd = (char *)qword_612428;
          v88 = v19;
          v35 = dcgettext(0LL, "warning: value %ld for -s option is too large, using %ld instead", 5);
          error(0, 0, v35, v88, formatd);
          v20 = qword_612428;
        }
        qword_612438 = v20;
        continue;
      case 116:
LABEL_12:
        byte_6123C2 = 1;
        continue;
      case 118:
        sub_404580("xargs");
        return 0LL;
      case 120:
        dword_612420 = 1;
        continue;
      case 128:
        if ( strchr(name, 61) )
        {
          formatb = off_40D6E0[4 * v89];
          v16 = dcgettext(0LL, "option --%s may not be set to a value which includes `='", 5);
          error(1, 0, v16, formatb);
        }
        qword_6123B8 = name;
        format = name;
        if ( unsetenv(name) )
        {
          v85 = format;
          formatc = dcgettext(0LL, "failed to unset environment variable %s", 5);
          v17 = __errno_location();
          error(1, *v17, formatc, v85);
        }
        continue;
      default:
        sub_4032B0(stderr);
        return 1LL;
    }
    v22 = (unsigned __int8)name[1];
    switch ( (_BYTE)v22 )
    {
      case 0x5C:
        goto LABEL_60;
      case 0x61:
        LOBYTE(v22) = 7;
        goto LABEL_60;
      case 0x62:
        LOBYTE(v22) = 8;
        goto LABEL_60;
      case 0x66:
        LOBYTE(v22) = 12;
        goto LABEL_60;
      case 0x6E:
        LOBYTE(v22) = 10;
        goto LABEL_60;
      case 0x72:
        LOBYTE(v22) = 13;
        goto LABEL_60;
      case 0x74:
        LOBYTE(v22) = 9;
        goto LABEL_60;
      case 0x76:
        LOBYTE(v22) = 11;
        goto LABEL_60;
      default:
        formata = name;
        v25 = __errno_location();
        if ( (_BYTE)v22 == 120 )
        {
          *v25 = 0;
          endptr = 0LL;
          v73 = strtoul(formata + 2, &endptr, 16);
          v31 = formata;
          LOBYTE(v22) = v73;
          if ( v73 > 0xFF )
          {
            v32 = "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lx.";
            goto LABEL_57;
          }
        }
        else
        {
          v86 = v25;
          v26 = __ctype_b_loc();
          v27 = formata;
          v28 = v86;
          if ( (*v26)[v22] & 0x800 )
          {
            v29 = formata + 1;
          }
          else
          {
            v74 = dcgettext(0LL, "Invalid escape sequence %s in input delimiter specification.", 5);
            error(1, 0, v74, formata);
            v29 = 0LL;
            v27 = formata;
            v28 = v86;
          }
          formata = v27;
          *v28 = 0;
          endptr = 0LL;
          v30 = strtoul(v29, &endptr, 8);
          v31 = formata;
          LOBYTE(v22) = v30;
          if ( v30 > 0xFF )
          {
            v32 = "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lo.";
LABEL_57:
            v33 = dcgettext(0LL, v32, 5);
            error(1, 0, v33, formata, 255LL);
            v31 = formata;
            goto LABEL_58;
          }
        }
LABEL_58:
        if ( *endptr )
        {
          v87 = endptr;
          formate = v31;
          v34 = dcgettext(
                  0LL,
                  "Invalid escape sequence %s in input delimiter specification; trailing characters %s not recognised.",
                  5);
          error(1, 0, v34, formate, v87);
        }
LABEL_60:
        byte_6123C0 = v22;
        v11 = sub_403790;
        break;
    }
  }
  if ( s1 && v11 == sub_403790 )
  {
    v72 = dcgettext(0LL, "warning: the -E option has no effect if -0 or -d is used.\n", 5);
    error(0, 0, v72);
  }
  v9();
  if ( v10 )
    __assert_fail("BC_INIT_OK == bcstatus", "xargs.c", 0x2A2u, "main");
  endptr = (char *)sub_402ED0;
  sigemptyset(&set);
  v94 = 0;
  if ( sigaction(10, (const struct sigaction *)&endptr, 0LL) )
  {
    v70 = dcgettext(0LL, "Cannot set SIGUSR1 signal handler", 5);
    v71 = __errno_location();
    error(0, *v71, v70);
  }
  endptr = (char *)sub_403720;
  sigemptyset(&set);
  v94 = 0;
  if ( sigaction(12, (const struct sigaction *)&endptr, 0LL) )
  {
    v68 = dcgettext(0LL, "Cannot set SIGUSR2 signal handler", 5);
    v69 = __errno_location();
    error(0, *v69, v68);
  }
  if ( !strcmp(v12, "-") )
  {
    fp = stdin;
  }
  else
  {
    dword_6124D8 = 1;
    fp = (_IO_FILE *)sub_4036C0(v12);
    if ( !fp )
    {
      v65 = sub_408C90(0LL, 8LL, v12);
      v66 = dcgettext(0LL, "Cannot open input file %s", 5);
      v67 = __errno_location();
      error(1, *v67, v66, v65);
    }
  }
  if ( qword_612450 || qword_612468 )
    dword_612420 = 1;
  if ( dword_61233C == v3 )
  {
    v4 = (char **)&v91;
    v3 = 1;
    dword_61233C = 0;
    v91 = &v90;
  }
  if ( v76 )
  {
    v50 = sub_404E60();
    v51 = dcgettext(0LL, "Your environment variables take up %lu bytes\n", 5);
    fprintf(stderr, v51, v50);
    v52 = qword_612428;
    v53 = dcgettext(0LL, "POSIX upper limit on argument length (this system): %lu\n", 5);
    fprintf(stderr, v53, v52);
    v54 = qword_612430;
    v55 = dcgettext(0LL, "POSIX smallest allowable upper limit on argument length (all systems): %lu\n", 5);
    fprintf(stderr, v55, v54);
    v56 = qword_612428;
    v57 = sub_404E60();
    v58 = dcgettext(0LL, "Maximum length of command we could actually use: %lu\n", 5);
    fprintf(stderr, v58, v56 - v57);
    v59 = qword_612438;
    v60 = dcgettext(0LL, "Size of command buffer we are actually using: %lu\n", 5);
    fprintf(stderr, v60, v59);
    v61 = dcgettext(0LL, "Maximum parallelism (--max-procs must be no greater): %lu\n", 5);
    fprintf(stderr, v61, 0x7FFFFFFFLL);
    if ( isatty(0) )
    {
      v62 = dcgettext(
              0LL,
              "\n"
              "Execution of xargs will continue now, and it will try to read its input and run commands; if this is not w"
              "hat you wanted to happen, please type the end-of-file keystroke.\n",
              5);
      fprintf(stderr, v62);
      if ( v77 )
      {
        v63 = v4[dword_61233C];
        v64 = dcgettext(
                0LL,
                "Warning: %s will be run at least once.  If you do not want that to happen, then press the interrupt keystroke.\n",
                5);
        fprintf(stderr, v64, v63);
      }
    }
  }
  qword_6124E0 = (char *)sub_409680(qword_612438 + 1);
  v37 = 0LL;
  qword_612498 = sub_409680(qword_612438 + 1);
  signal(17, 0LL);
  if ( qword_612450 )
  {
    v38 = sub_409680(8LL * v3);
    v39 = dword_61233C;
    v40 = -1LL;
    v41 = v38;
    if ( v3 > dword_61233C )
    {
      do
      {
        *(_QWORD *)(v38 + 8 * v39) = strlen(v4[v39]);
        ++v39;
      }
      while ( v3 > (int)v39 );
    }
    v43 = strlen((const char *)qword_612450) + 1;
    v42 = (int *)(qword_612450 + v43);
    qword_612448 = v43 - 1;
    while ( 1 )
    {
      v44 = ((__int64 (__fastcall *)(int *, __int64))v11)(v42, v40);
      if ( v44 == -1 )
        break;
      v45 = v44;
      sub_405050(&dword_612420, &qword_612480);
      v46 = v45 - 1;
      qword_6124A0 = 0LL;
      sub_4047A0(
        &dword_612420,
        &qword_612480,
        v4[dword_61233C],
        *(_QWORD *)(v41 + 8LL * dword_61233C) + 1LL,
        0LL,
        0LL,
        (unsigned __int8)byte_6122B4,
        dword_61233C);
      byte_6122B4 = 0;
      v47 = dword_61233C + 1;
      if ( v3 > dword_61233C + 1 )
      {
        do
        {
          v48 = *(_QWORD *)(v41 + 8 * v47);
          v49 = v4[v47++];
          sub_404A40(&dword_612420, &qword_612480, v49, v48, 0LL, 0LL, qword_6124E0, v46, (unsigned __int8)byte_6122B4);
        }
        while ( v3 > (int)v47 );
      }
      v40 = (__int64)&qword_612480;
      v42 = &dword_612420;
      sub_404C00(&dword_612420, &qword_612480);
    }
  }
  else
  {
    while ( dword_61233C < v3 )
    {
      v75 = v37;
      v37 = &qword_612480;
      sub_4047A0(
        &dword_612420,
        &qword_612480,
        v4[dword_61233C],
        strlen(v4[dword_61233C]) + 1,
        0LL,
        0LL,
        (unsigned __int8)byte_6122B4,
        v75);
      ++dword_61233C;
    }
    byte_6122B4 = 0;
    qword_612458 = qword_612480;
    qword_6124A8 = qword_6124A0;
    while ( (unsigned int)v11() != -1 )
    {
      if ( qword_612468 && qword_612468 <= (unsigned __int64)qword_6124D0 )
      {
        sub_404C00(&dword_612420, &qword_612480);
        qword_6124D0 = 0LL;
      }
    }
    if ( qword_612480 != qword_612458 || v77 && !byte_6123F0 )
      sub_404C00(&dword_612420, &qword_612480);
  }
  dword_6123C4 = status;
  return (unsigned int)status;
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

__int64 *sub_402E0B()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_402E2A()
{
  return 0LL;
}

__int64 *sub_402E61()
{
  __int64 *result; // rax

  if ( !byte_612388 )
  {
    while ( qword_612390 < (unsigned __int64)(&qword_611E48 - qword_611E40 - 1) )
      ((void (*)(void))qword_611E40[++qword_612390])();
    result = sub_402E0B();
    byte_612388 = 1;
  }
  return result;
}

__int64 sub_402EB8()
{
  return sub_402E2A();
}

void nullsub_1()
{
  ;
}

__int64 sub_402ED0()
{
  __int64 result; // rax

  result = (unsigned int)dword_6122B0;
  if ( dword_6122B0 != 0x7FFFFFFF )
    result = (unsigned int)++dword_6122B0;
  dword_6123CC = 1;
  return result;
}

void sub_402F00()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "environment is too large for exec", 5);
  error(1, 0, v0);
}

void __fastcall sub_402F30(unsigned __int8 a1, unsigned int a2)
{
  unsigned int v2; // er13
  int v3; // ebx
  __pid_t v4; // eax
  int *v5; // r14
  char *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int16 v9; // bx
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rbx
  char *v13; // rax
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // [rsp+4h] [rbp-50h]
  __int64 v17; // [rsp+4h] [rbp-50h]
  int stat_loc; // [rsp+18h] [rbp-3Ch]

  if ( qword_6123E8 )
  {
    v2 = 0;
    do
    {
      dword_6123CC = 0;
      v3 = (a1 ^ 1) & (a2 <= v2);
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
              v14 = qword_6123E8;
              v15 = dcgettext(0LL, "WARNING: Lost track of %lu child processes", 5);
              error(0, 0, v15, v14);
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
        v12 = *(_QWORD *)qword_612488;
        v13 = dcgettext(0LL, "%s: exited with status 255; aborting", 5);
        error(124, 0, v13, v12);
        v9 = stat_loc;
      }
      if ( (_BYTE)v9 == 127 )
      {
        v17 = *(_QWORD *)qword_612488;
        v11 = dcgettext(0LL, "%s: stopped by signal %d", 5);
        error(125, 0, v11, v17, HIBYTE(v9));
        v9 = stat_loc;
      }
      if ( (char)((v9 & 0x7F) + 1) > 1 )
      {
        v16 = *(_QWORD *)qword_612488;
        v10 = dcgettext(0LL, "%s: terminated by signal %d", 5);
        error(125, 0, v10, v16, v9 & 0x7F);
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
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned int v3; // ebp
  _DWORD *v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx

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
      v2 = sub_4096D0(qword_6123E0, v8);
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
    if ( !*(_DWORD *)(qword_6123E0 + 4LL * v3) )
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
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax

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
  int v5; // er14
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  char *endptr; // [rsp+8h] [rbp-30h]

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
  FILE *v1; // rbx
  int v2; // eax
  int v3; // ebp
  int *v5; // rax
  int v6; // er13
  int *v7; // r12

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
  __int64 result; // rax

  result = (unsigned int)dword_6122B0;
  if ( dword_6122B0 > 1 )
    result = (unsigned int)--dword_6122B0;
  return result;
}

__int64 sub_403740()
{
  __int64 result; // rax

  if ( !qword_612450 && !byte_6122B4 )
  {
    result = qword_612458;
    if ( qword_612480 != qword_612458 )
    {
      result = (unsigned int)dword_612420;
      if ( !dword_612420 )
        result = sub_404C00(&dword_612420, &qword_612480);
    }
  }
  return result;
}

__int64 sub_403790()
{
  char *v0; // rbx
  char *v1; // r12
  int v2; // ebp
  char *v3; // rax
  char *v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax

  v0 = qword_6124E0;
  v1 = &qword_6124E0[qword_612438 - 1 - qword_6124A8];
  if ( byte_6123B0 )
    return 0xFFFFFFFFLL;
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
    return 0xFFFFFFFFLL;
  *v0 = 0;
LABEL_10:
  v5 = v0 + 1 - v4;
  result = (unsigned int)v5;
  if ( !qword_612450 )
  {
    sub_4047A0(&dword_612420, &qword_612480, v4, (int)v5, 0LL, 0LL, (unsigned __int8)byte_6122B4);
    result = (unsigned int)v5;
  }
  return result;
}

__int64 sub_4038B0()
{
  char *v0; // rbx
  char *v1; // r13
  char v2; // r14
  __int64 v3; // rbp
  int v4; // er12
  char *v5; // r15
  int v6; // er15
  char *v7; // rax
  char *v8; // rax
  int v9; // eax
  int v10; // eax
  char *v11; // rbp
  __int64 v12; // rbx
  unsigned int v13; // er14
  int v15; // eax
  int v16; // eax
  int v17; // eax
  char *v18; // rbp
  char *v19; // rax
  char *v20; // rbp
  __int64 v21; // rbx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  char *v25; // rbp
  char *v26; // rax
  char *v27; // rcx
  int v28; // eax
  char *v29; // rbx
  char *v30; // rax
  int v31; // [rsp+8h] [rbp-40h]
  char v32; // [rsp+Fh] [rbp-39h]

  v0 = qword_6124E0;
  v1 = &qword_6124E0[qword_612438 - 1 - qword_6124A8];
  if ( byte_6123A0 )
    return (unsigned int)-1;
  v2 = 0;
  v32 = 1;
  v3 = -1LL;
  v4 = 1;
  v31 = 0;
  while ( 2 )
  {
    v6 = _IO_getc(fp);
    if ( v6 == -1 )
    {
      v24 = (int)qword_6124E0;
      byte_6123A0 = 1;
      if ( qword_6124E0 != v0 )
      {
        *v0 = 0;
        v13 = (_DWORD)v0 + 1 - v24;
        if ( v4 == 2 )
          goto LABEL_71;
        goto LABEL_62;
      }
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
        v16 = (int)qword_6124E0;
        byte_6123A0 = 1;
        if ( v0 == qword_6124E0 )
          return (unsigned int)-1;
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
    if ( v6 != 10 )
    {
      while ( 1 )
      {
        if ( !qword_612450 && !(v6 & 0xFFFFFF80) && (*__ctype_b_loc())[v6] & 1 )
        {
          v20 = qword_6124E0;
          *v0 = 0;
          v21 = v0 + 1 - v20;
          v13 = v21;
          if ( s1 && *s1 == *v20 && !strcmp(s1, v20) )
            goto LABEL_36;
          sub_4047A0(&dword_612420, &qword_612480, v20, (int)v21, 0LL, 0LL, (unsigned __int8)byte_6122B4);
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
          v28 = (int)qword_6124E0;
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
                sub_4047A0(&dword_612420, &qword_612480, qword_6124E0, (int)v13, 0LL, 0LL, (unsigned __int8)byte_6122B4);
              return v13;
            }
          }
          return (unsigned int)-1;
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
          }
          else
          {
            v18 = dcgettext(0LL, "single", 5);
            v19 = dcgettext(
                    0LL,
                    "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option",
                    5);
            error(1, 0, v19, v18);
            v3 = 10LL;
            v5 = v0;
            v4 = 2;
          }
          goto LABEL_10;
        }
LABEL_16:
        if ( v31 != v6 )
          break;
        v2 = 1;
        v23 = _IO_getc(fp);
        if ( v23 == -1 )
          goto LABEL_42;
        v3 = v6;
        v6 = v23;
LABEL_3:
        if ( v6 == 10 )
          goto LABEL_30;
      }
      v3 = v6;
      v4 = 2;
      v5 = v0;
      if ( !(dword_612400 | (unsigned int)v3) )
      {
LABEL_18:
        v3 = 0LL;
        v7 = dcgettext(
               0LL,
               "WARNING: a NUL character occurred in the input.  It cannot be passed through in the argument list.  Did y"
               "ou mean to use the --null option?",
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
      continue;
    }
    break;
  }
LABEL_30:
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
    goto LABEL_22;
  }
  *v0 = 0;
  v12 = v0 + 1 - v11;
  v13 = v12;
  if ( s1 && *s1 == *v11 && !strcmp(s1, v11) )
  {
LABEL_36:
    byte_6123A0 = 1;
    if ( v32 )
      return (unsigned int)-1;
  }
  else if ( !qword_612450 )
  {
    sub_4047A0(&dword_612420, &qword_612480, v11, (int)v12, 0LL, 0LL, (unsigned __int8)byte_6122B4);
  }
  return v13;
}

__pid_t sub_403EC0()
{
  __pid_t result; // eax

  result = getpid();
  if ( result != dword_6123D0 )
    __assert_fail("getpid () == parent", "xargs.c", 0x60Cu, "wait_for_proc_all");
  if ( !byte_6123A1 )
  {
    byte_6123A1 = 1;
    sub_402F30(1u, 0);
    result = status;
    byte_6123A1 = 0;
    if ( dword_6123C4 != status )
      _exit(status);
  }
  return result;
}

bool __fastcall sub_403F30(char a1)
{
  unsigned __int64 v1; // rbx
  char *v2; // r12
  int *v3; // rax
  int v4; // eax
  int v5; // ebx
  bool result; // al
  char *v7; // rbx
  int *v8; // rax
  char *v9; // rbp
  int *v10; // rax
  char *v11; // rbx
  int *v12; // rax

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
    if ( (unsigned int)sub_409E80(stderr) )
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

__int64 __fastcall sub_404120(__int64 a1, __int64 a2, __int64 a3, const char **a4)
{
  const char **v4; // rbp
  __int64 v5; // rsi
  __pid_t v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbp
  char *v9; // rbx
  int *v10; // rax
  __int64 result; // rax
  char *v12; // rbx
  int *v13; // rax
  char *v14; // rbx
  int *v15; // rax
  char *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // r13
  int v19; // esi
  char *v20; // r12
  int *v21; // rbx
  char *v22; // r13
  int v23; // edi
  __int64 v24; // rax
  char *v25; // rax
  char *v26; // rax
  int buf; // [rsp+8h] [rbp-40h]
  int pipedes[2]; // [rsp+Ch] [rbp-3Ch]
  int stat_loc[2]; // [rsp+14h] [rbp-34h]
  __int16 v30; // [rsp+1Ch] [rbp-2Ch]

  v4 = a4;
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
  if ( pipe(pipedes) )
  {
    v12 = dcgettext(0LL, "could not create pipe before fork", 5);
    v13 = __errno_location();
    error(1, *v13, v12);
  }
  v5 = 2LL;
  sub_409D40(pipedes[1]);
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
    v17 = (unsigned int)pipedes[0];
    close(pipedes[0]);
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
      if ( qword_6123B8 && setenv(qword_6123B8, v20, 1) < 0 )
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
      v30 = 108;
      *(_QWORD *)stat_loc = 7815273878500238383LL;
      close(0);
      if ( open((const char *)stat_loc, 0) < 0 )
      {
        v24 = sub_408C90(0LL, 8LL, stat_loc);
        error(0, *v21, "%s", v24);
      }
    }
    if ( (unsigned __int8)sub_405070(v4) )
    {
      *v21 = 7;
    }
    else
    {
      execvp(*v4, (char *const *)v4);
      if ( !*v21 )
        goto LABEL_43;
    }
    write(pipedes[1], v21, 4uLL);
LABEL_43:
    close(pipedes[1]);
    if ( *v21 == 7 || (error(0, *v21, "%s", *v4), *v21 != 2) )
      v23 = 126;
    else
      v23 = 127;
    _exit(v23);
  }
  if ( !v6 )
    goto LABEL_34;
  close(pipedes[1]);
  v7 = sub_408FE0(pipedes[0], &buf, 4uLL);
  v8 = v7;
  if ( v7 == 4 )
  {
    close(pipedes[0]);
    waitpid(v6, stat_loc, 0);
    if ( buf != 7 )
    {
      if ( buf != 2 )
        exit(126);
      exit(127);
    }
    result = 0LL;
  }
  else
  {
    if ( v7 == -1 )
    {
      close(pipedes[0]);
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
    close(pipedes[0]);
    result = 1LL;
  }
  return result;
}

char *sub_404580()
{
  char *v0; // r12

  sub_409E80(stderr);
  v0 = dcgettext(0LL, "Kevin Dalley", 5);
  dcgettext(0LL, "James Youngman", 5);
  dcgettext(0LL, "Eric B. Decker", 5);
  sub_409550((char)stdout);
  return v0;
}

unsigned __int64 __fastcall sub_404600(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx

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
  unsigned int v2; // ebx
  char *v3; // rax
  char *v5; // r12
  int *v6; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

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

unsigned __int64 __fastcall sub_4047A0(__int64 a1, __int64 a2, char *a3, __int64 a4, char *a5, __int64 a6, __int64 a7)
{
  unsigned __int64 *v7; // rbx
  char *v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r15
  char *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 v18; // rdx
  char *v19; // rax
  char *src; // [rsp+8h] [rbp-40h]

  src = a5;
  if ( !a3 )
    __assert_fail("arg != NULL", "buildcmd.c", 0x165u, "bc_push_arg");
  v7 = (unsigned __int64 *)a2;
  v8 = a3;
  v9 = a4;
  v10 = a6;
  if ( (_DWORD)a7 )
  {
    if ( a3 != "do_not_care" )
      goto LABEL_4;
LABEL_31:
    v12 = *(_QWORD *)a2;
    v14 = *(_QWORD *)(a2 + 16);
    result = v7[1];
    if ( *v7 < v14 )
      goto LABEL_32;
    goto LABEL_16;
  }
  *(_DWORD *)(a2 + 56) = 1;
  if ( a3 == "do_not_care" )
    goto LABEL_31;
LABEL_4:
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 32) + a4 + a6) <= *(_QWORD *)(a1 + 24) )
    goto LABEL_10;
  if ( (_DWORD)a7 || *(_QWORD *)a2 == *(_QWORD *)(a1 + 56) )
  {
    v19 = dcgettext(0LL, "cannot fit single argument within argument list size limit", 5);
    error(1, 0, v19);
    if ( *(_QWORD *)(a1 + 48) )
      goto LABEL_8;
LABEL_35:
    if ( !*(_DWORD *)a1 || !*(_QWORD *)(a1 + 72) && !*(_QWORD *)(a1 + 80) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(a1 + 48) )
    goto LABEL_35;
LABEL_8:
  v11 = dcgettext(0LL, "argument list too long", 5);
  error(1, 0, v11);
LABEL_9:
  sub_404C00(a1, a2);
LABEL_10:
  v12 = *(_QWORD *)a2;
  if ( !(_DWORD)a7 && (v13 = *(_QWORD *)(a1 + 80)) != 0 && v13 == v12 - *(_QWORD *)(a1 + 56)
    || v12 == *(_QWORD *)(a1 + 32) )
  {
    sub_404C00(a1, a2);
    v12 = *(_QWORD *)a2;
  }
  v14 = *(_QWORD *)(a2 + 16);
  result = v7[1];
  if ( v12 >= v14 )
  {
LABEL_16:
    if ( result )
    {
      v7[2] = 2 * v14;
      result = sub_4096D0(result, 16 * v14);
    }
    else
    {
      v7[2] = 64LL;
      result = sub_409680(512LL);
    }
    v7[1] = result;
    v12 = *v7;
    if ( v8 != "do_not_care" )
      goto LABEL_19;
LABEL_32:
    *v7 = v12 + 1;
    *(_QWORD *)(result + 8 * v12) = 0LL;
    goto LABEL_26;
  }
LABEL_19:
  v16 = v7[4];
  *v7 = v12 + 1;
  *(_QWORD *)(result + 8 * v12) = v16 + v7[3];
  if ( src )
  {
    strcpy((char *)(v16 + v7[3]), src);
    v16 = v10 + v7[4];
    v7[4] = v16;
  }
  strcpy((char *)(v7[3] + v16), v8);
  v17 = v7[4] + v9;
  result = *v7;
  v7[4] = v17;
  if ( (_DWORD)a7 )
  {
    if ( result != *(_QWORD *)(a1 + 32) )
    {
LABEL_28:
      v7[5] = v17;
      return result;
    }
    goto LABEL_25;
  }
  v18 = *(_QWORD *)(a1 + 80);
  if ( v18 && v18 == result - *(_QWORD *)(a1 + 56) || result == *(_QWORD *)(a1 + 32) )
  {
LABEL_25:
    result = sub_404C00(a1, v7);
LABEL_26:
    if ( !(_DWORD)a7 )
      return result;
    v17 = v7[4];
    goto LABEL_28;
  }
  return result;
}

unsigned __int64 __fastcall sub_404A40(__int64 a1, __int64 a2, const char *a3, size_t a4, char *a5, __int64 a6, const char *a7, __int64 a8, int a9)
{
  const char *v9; // r15
  __int64 v10; // r14
  size_t v11; // r12
  __int64 v12; // rdi
  char *v13; // rbx
  unsigned __int64 v14; // rbp
  __int64 v15; // r13
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rsi
  char *v21; // rax
  const char *v22; // [rsp+8h] [rbp-70h]
  __int64 v23; // [rsp+18h] [rbp-60h]
  char *src; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+30h] [rbp-48h]

  v9 = a3;
  v10 = a1;
  v11 = a4;
  v12 = *(_QWORD *)(a1 + 24);
  v13 = dest;
  v25 = a2;
  src = a5;
  v14 = v12 - 1;
  v23 = a6;
  if ( !dest )
  {
    v13 = (char *)sub_409680(v12 + 1);
    dest = v13;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v18 = sub_4066F0(v9, *(_QWORD *)(v10 + 48));
      v22 = (const char *)v18;
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
    v15 = v18 - (_QWORD)v9;
    if ( v14 <= v18 - (__int64)v9 )
      goto LABEL_13;
    v16 = v14 - v15;
    strncpy(v13, v9, v18 - (_QWORD)v9);
    v13 += v15;
    if ( v23 + a8 >= v16 )
      break;
    v14 = v16 - (v23 + a8);
    if ( src )
    {
      strcpy(v13, src);
      v13 += v23;
    }
    strcpy(v13, a7);
    v17 = *(_QWORD *)(v10 + 40);
    v13 += a8;
    v9 = &v22[v17];
    v11 = v11 - v17 - v15;
    if ( !v22[v17] )
      goto LABEL_11;
  }
  v9 = v22;
LABEL_13:
  if ( *v9 )
  {
    v21 = dcgettext(0LL, "command too long", 5);
    error(1, 0, v21);
  }
LABEL_11:
  *v13 = 0;
  LODWORD(a7) = a9;
  return sub_4047A0(v10, v25, dest, v13 + 1 - dest, 0LL, 0LL, (__int64)a7);
}

__int64 __fastcall sub_404C00(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r12
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 i; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  char *v16; // rax
  unsigned __int64 v17; // rax
  __int64 result; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // [rsp+10h] [rbp-40h]

  v2 = a2;
  sub_4047A0(a1, (__int64)a2, "do_not_care", 0LL, 0LL, 0LL, 0LL);
  v3 = *a2;
  if ( !*a2 )
    __assert_fail("state->cmd_argc > 0", "buildcmd.c", 0x115u, "bc_do_exec");
  if ( *(_QWORD *)(a2[1] + 8 * v3 - 8) )
    __assert_fail("state->cmd_argv[state->cmd_argc-1] == NULL", "buildcmd.c", 0x116u, "bc_do_exec");
  v4 = 0LL;
  v5 = sub_409680(8 * v3 + 8);
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = (_QWORD *)v5;
  v9 = *a2;
  do
  {
    if ( v7 )
    {
      v10 = v2[1];
      for ( i = 0LL; i != v7; v8[i - 1] = *(_QWORD *)(v10 + 8 * i - 8) )
        ++i;
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
      v14 = v2[1];
      do
        v8[++v13 - 1] = *(_QWORD *)(v14 + 8 * ++v12 - 8);
      while ( v6 > v13 && v12 < v9 );
      if ( v13 < v7 )
        __assert_fail("dst_pos >= ctl->initial_argc", "buildcmd.c", 0x102u, "copy_args");
    }
    v21 = v6;
    v15 = v2[6];
    v8[v13] = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD *))(a1 + 64))(
           a1,
           v15,
           (unsigned int)v13,
           v8) )
    {
      v20 = sub_404600(a1, (__int64)v2, 1, v21);
      v7 = *(_QWORD *)(a1 + 56);
      v6 = v20;
      v4 = v13 + v4 - v7;
    }
    else if ( *(_QWORD *)(a1 + 56) + 1LL < v21 )
    {
      v19 = sub_404600(a1, (__int64)v2, 0, v21);
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
    v9 = *v2;
  }
  while ( v4 + 1 < *v2 - v7 );
  free(v8);
  v17 = v2[5];
  *v2 = v7;
  v2[4] = v17;
  result = -4294967296LL;
  v2[7] = -4294967296LL;
  return result;
}

__int64 sub_404E30()
{
  __int64 result; // rax

  result = sysconf(0);
  if ( result <= 0 )
    result = 0x7FFFFFFFFFFFFFFFLL;
  return result;
}

__int64 sub_404E60()
{
  __int64 v0; // rbp
  char **v1; // rbx
  char *i; // rdi
  size_t v3; // rax

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

__int64 __fastcall sub_404EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 result; // rax

  v2 = sub_404E60();
  *(_QWORD *)(a1 + 16) = 4096LL;
  v3 = v2;
  v4 = sysconf(0);
  *(_DWORD *)a1 = 0;
  if ( (__int64)v4 <= 0 )
    v4 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v3 > v4 )
    return 1LL;
  if ( v3 + a2 >= v4 )
    return 2LL;
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
  return result;
}

unsigned __int64 __fastcall sub_404F80(_QWORD *a1)
{
  unsigned __int64 result; // rax

  result = a1[1];
  if ( result > 0x1FFFF )
  {
    result = a1[2];
    if ( result < 0x20001 )
      result = 0x20000LL;
  }
  a1[3] = result;
  return result;
}

__int64 __fastcall sub_405050(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_QWORD *)(a1 + 56);
  a2[4] = a2[5];
  result = -4294967296LL;
  a2[7] = -4294967296LL;
  return result;
}

__int64 __fastcall sub_405070(const char **a1)
{
  const char **v1; // r12
  unsigned __int64 v2; // rbp
  const char *v3; // rdi
  unsigned __int64 i; // rbx
  size_t v5; // rax
  unsigned int v7; // edx

  v1 = a1;
  v2 = 0LL;
  v3 = *a1;
  for ( i = 0LL; v3; v2 += v5 )
  {
    v5 = strlen(v3);
    v3 = v1[++i];
  }
  if ( (unsigned int)sub_404710("__GNU_FINDUTILS_EXEC_ARG_COUNT_LIMIT", i) )
    return 1LL;
  LOBYTE(v7) = (unsigned int)sub_404710("__GNU_FINDUTILS_EXEC_ARG_LENGTH_LIMIT", v2) != 0;
  return v7;
}

__int64 sub_4050E0()
{
  __int64 v0; // rax
  DIR *v1; // rbp
  int v2; // er12
  int v3; // ebx
  struct dirent *v4; // rax
  char v5; // dl
  int v6; // eax

  v0 = sub_405AA0("/proc/self/fd");
  if ( !v0 )
    goto LABEL_15;
  v1 = (DIR *)v0;
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

__int64 __fastcall sub_405160(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  if ( sub_409D40(a1) & 1 )
    return 0;
  v4 = sub_405740(*(void **)a2);
  if ( !v4 )
    return (unsigned int)-1;
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = v4;
  *(_DWORD *)(v4 + 4 * v5) = a1;
  result = 0LL;
  *(_QWORD *)(a2 + 8) = v5 + 1;
  return result;
}

__int64 __fastcall sub_4051D0(int a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  int v5; // ecx
  __int64 i; // rax

  v2 = a2;
  if ( sub_409D40(a1) & 1 )
    return 0LL;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v3 < v4 )
  {
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
      return 0LL;
  }
LABEL_9:
  *(_DWORD *)(v2 + 24) = a1;
  return 0xFFFFFFFFLL;
}

__int64 sub_405260()
{
  __int64 v0; // rax
  int v1; // ebx
  int v2; // eax
  unsigned int v3; // edx
  struct rlimit v5; // [rsp+0h] [rbp-18h]

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
  return v3;
}

__int64 __fastcall sub_4052B0(int a1, __int64 (__fastcall *a2)(_QWORD, __int64), __int64 a3)
{
  int v3; // er14
  __int64 v4; // r12
  int v5; // ebp
  int v6; // er15
  int *v7; // rax
  int v8; // edx
  int v9; // edi
  __int64 v10; // rbx
  __int64 result; // rax
  int v12; // [rsp+0h] [rbp-238h]
  __int16 v13[281]; // [rsp+6h] [rbp-232h]

  if ( a1 <= 0 )
    return 0LL;
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
      return 0xFFFFFFFFLL;
LABEL_13:
    v5 += v6;
    if ( v3 <= v5 )
      return 0LL;
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
    return 0xFFFFFFFFLL;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v13[4 * v10] != 32 )
    {
      result = a2((unsigned int)*(&v12 + 2 * v10), v4);
      if ( (_DWORD)result )
        return result;
    }
    if ( v6 <= (int)++v10 )
      goto LABEL_13;
  }
}

__int64 sub_4053A0()
{
  int v0; // eax
  __int64 result; // rax
  void *v2; // [rsp+0h] [rbp-28h]
  __int64 v3; // [rsp+8h] [rbp-20h]
  __int64 v4; // [rsp+10h] [rbp-18h]

  v0 = sub_4050E0();
  if ( v0 < 0 )
    v0 = sub_405260();
  v2 = 0LL;
  v4 = 0LL;
  v3 = 0LL;
  sub_4052B0((v0 != 0x7FFFFFFF) + v0, (__int64 (__fastcall *)(_QWORD, __int64))sub_405160, (__int64)&v2);
  ptr = v2;
  result = v3;
  qword_612500 = v3;
  return result;
}

__int64 __fastcall sub_405410(char a1)
{
  char v1; // bp
  __int64 result; // rax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // er14
  char v6; // bp

  v1 = byte_6124F9;
  if ( !byte_6124F9 )
  {
    v4 = sub_405B30((unsigned __int64)"/");
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = sub_409D40(v4);
      close(v5);
      byte_6124F9 = 1;
      byte_6124F8 = v6 & 1;
    }
    else
    {
      byte_6124F8 = v1;
      byte_6124F9 = 1;
    }
  }
  LODWORD(result) = sub_405B30(a1);
  v3 = result;
  if ( (int)result < 0 || byte_6124F8 )
    return (unsigned int)result;
  sub_405860((unsigned int)result, 1LL);
  return v3;
}

void sub_405520()
{
  free(ptr);
  ptr = 0LL;
  qword_612500 = 0LL;
}

__int64 sub_405550()
{
  __int64 v0; // rbx
  void *v1; // rbp
  int v2; // eax
  __int64 result; // rax
  unsigned int v4; // ebx
  char *v5; // rax
  void *v6; // [rsp+0h] [rbp-38h]
  __int64 v7; // [rsp+8h] [rbp-30h]
  __int64 v8; // [rsp+10h] [rbp-28h]
  int v9; // [rsp+18h] [rbp-20h]

  v0 = qword_612500;
  v1 = ptr;
  v2 = sub_4050E0();
  if ( v2 < 0 )
    v2 = sub_405260();
  v7 = v0;
  v6 = v1;
  v8 = 0LL;
  v9 = -1;
  result = sub_4052B0(
             (unsigned int)(v2 != 0x7FFFFFFF) + v2,
             (__int64 (__fastcall *)(_QWORD, __int64))sub_4051D0,
             (__int64)&v6);
  v4 = v9;
  if ( v9 >= 0 )
  {
    v5 = dcgettext(
           0LL,
           "File descriptor %d will leak; please report this as a bug, remembering to include a detailed description of t"
           "he simplest way to reproduce this problem.",
           5);
    error(0, 0, v5, v4);
    __assert_fail("no_leaks", "fdleak.c", 0x17Eu, "complain_about_leaky_fds");
  }
  return result;
}

__int64 __fastcall sub_4055F0(char *nptr, unsigned int a2)
{
  int *v2; // rax
  int *v3; // r12
  __int64 v4; // rbx
  __int64 v6; // rbp
  char *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  char *v10; // rax
  char *endptr; // [rsp+8h] [rbp-30h]

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
      v6 = sub_408C90(0LL, a2, endptr);
      v7 = dcgettext(0LL, "Expected an integer: %s", 5);
      error(1, *v3, v7, v6);
    }
    return (unsigned int)v4;
  }
  v8 = sub_408C90(1LL, a2, nptr);
  v9 = sub_408C90(0LL, a2, endptr);
  v10 = dcgettext(0LL, "Unexpected suffix %s on %s", 5);
  error(1, *v3, v10, v9, v8);
  return (unsigned int)v4;
}

void *__fastcall sub_405740(void *ptr, unsigned __int64 a2, unsigned __int64 *a3)
{
  void *v3; // r13
  unsigned __int64 *v4; // rbp
  unsigned __int64 v5; // rbx
  int *v6; // rax
  int v7; // er14
  unsigned __int64 v8; // rsi
  int *v9; // r12
  void *result; // rax
  size_t v11; // rdi

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

__int64 __fastcall sub_405860(char a1, char a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // edx
  __int64 result; // rax

  v2 = sub_409D40(a1);
  if ( v2 < 0 )
    return 0xFFFFFFFFLL;
  v3 = v2;
  v4 = v2 | 1;
  v5 = v3 & 0xFFFFFFFE;
  if ( a2 )
    v5 = v4;
  result = 0LL;
  if ( v5 != v3 )
    result = (unsigned int)-((unsigned int)sub_409D40(a1) == -1);
  return result;
}

__int64 sub_4058E0()
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
  if ( !sub_409EC0(stdin) )
  {
    if ( !(unsigned int)sub_40B2B0(v0) )
      return sub_405A00();
    goto LABEL_6;
  }
  v10 = sub_409EF0(v0, 0LL, 1LL);
  v3 = stdin;
  if ( !v10 )
  {
    v2 = sub_409E80(stdin);
    v3 = stdin;
    if ( v2 )
    {
      sub_40B2B0(stdin);
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_40B2B0(v3) )
  {
LABEL_6:
    v4 = dcgettext(0LL, "error closing file", 5);
    v5 = qword_612510;
    v6 = v4;
    v7 = __errno_location();
    v8 = v7;
    if ( v5 )
    {
      v9 = sub_408E10(v5);
      error(0, *v8, "%s: %s", v9, v6);
    }
    else
    {
      error(0, *v7, "%s", v6);
    }
    sub_405A00();
    _exit(dword_6122C0);
  }
  return sub_405A00();
}

__int64 sub_405A00()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

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
        v5 = sub_408E10(qword_612520);
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
  v5 = sub_409080(v3);
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

__int64 __fastcall sub_405B30(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp-28h]

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = v6;
  v4 = open(a1, a2, v3);
  return sub_409090(v4);
}

__int64 __usercall sub_405B80@<rax>(unsigned __int64 a1@<rdx>, _QWORD *a2@<rcx>, __int64 a3@<rbp>, unsigned __int8 *a4@<rdi>, __int64 a5@<rsi>)
{
  unsigned __int8 *v5; // rbx
  void *v6; // rsp
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // r8
  unsigned __int8 *v12; // r9
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v16; // rax
  _QWORD *v17; // [rsp-6h] [rbp-30h]
  unsigned __int64 v18; // [rsp+2h] [rbp-28h]
  __int64 v19; // [rsp+Ah] [rbp-20h]
  __int64 v20; // [rsp+22h] [rbp-8h]

  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    return 0LL;
  v20 = a3;
  v5 = a4;
  if ( 8 * a1 > 0xFAF )
  {
    v17 = a2;
    v18 = a1;
    v19 = a5;
    v16 = sub_40B890();
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
      }
      if ( a1 != ++v13 )
      {
        v11 = *++v12;
        continue;
      }
      *a2 = v5;
    }
    break;
  }
  sub_40B900(v7, a5, a1, a2, v11, v12);
  return 1LL;
}

void __noreturn sub_405D00()
{
  __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
}

__int64 __fastcall sub_405D20(mbstate_t *a1, char *a2, char **a3)
{
  __int64 v3; // r9
  void *v4; // rsp
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  char v11; // al
  size_t v12; // rdx
  size_t v13; // rax
  char *v14; // r14
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r15
  __int64 v18; // r14
  bool v19; // cc
  char v20; // bl
  __int64 v21; // rax
  size_t v22; // rdx
  __int64 v23; // r15
  char *v24; // rax
  char v25; // al
  __int64 v26; // rax
  size_t v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  void *v32; // rax
  size_t v33; // rax
  size_t v34; // rax
  char *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r14
  unsigned int v40; // eax
  size_t v41; // rax
  char *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  char *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  char **v52; // [rsp+0h] [rbp-110h]
  mbstate_t *ps; // [rsp+8h] [rbp-108h]
  unsigned __int64 v54; // [rsp+10h] [rbp-100h]
  mbstate_t *v55; // [rsp+18h] [rbp-F8h]
  char v56; // [rsp+20h] [rbp-F0h]
  __int64 v57; // [rsp+24h] [rbp-ECh]
  char v58; // [rsp+2Ch] [rbp-E4h]
  void *src; // [rsp+30h] [rbp-E0h]
  size_t n; // [rsp+38h] [rbp-D8h]
  char v61; // [rsp+40h] [rbp-D0h]
  unsigned int v62; // [rsp+44h] [rbp-CCh]
  __int64 v63; // [rsp+48h] [rbp-C8h]
  char v64; // [rsp+60h] [rbp-B0h]
  __int64 v65; // [rsp+64h] [rbp-ACh]
  char v66; // [rsp+6Ch] [rbp-A4h]
  char *s; // [rsp+70h] [rbp-A0h]
  size_t v68; // [rsp+78h] [rbp-98h]
  char v69; // [rsp+80h] [rbp-90h]
  unsigned int v70; // [rsp+84h] [rbp-8Ch]
  char v71; // [rsp+A0h] [rbp-70h]
  __int64 v72; // [rsp+A4h] [rbp-6Ch]
  char v73; // [rsp+ACh] [rbp-64h]
  void *s2; // [rsp+B0h] [rbp-60h]
  size_t v75; // [rsp+B8h] [rbp-58h]
  char v76; // [rsp+C0h] [rbp-50h]
  unsigned int v77; // [rsp+C4h] [rbp-4Ch]

  ps = a1;
  v52 = a3;
  v54 = sub_40BA40(a2);
  if ( v54 > 0x492492492492492LL )
    return 0LL;
  if ( 56 * v54 > 0xFAF )
  {
    v5 = sub_40B890();
  }
  else
  {
    v4 = alloca(56 * v54 + 24);
    v5 = (((unsigned __int64)&ps + 7) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( !v5 )
    return 0LL;
  src = a2;
  v6 = v5;
  v56 = 0;
  v58 = 0;
  v57 = 0LL;
  v7 = v5 + 48 * v54;
  while ( 1 )
  {
    if ( !v56 )
    {
      v8 = *(unsigned __int8 *)src;
      if ( ((unsigned int)dword_40F520[(*(_BYTE *)src >> 5) & 7] >> v8) & 1 )
      {
        n = 1LL;
        v9 = *(char *)src;
        v61 = 1;
        v62 = v9;
        v10 = v9;
        v58 = 1;
        if ( !v9 )
          goto LABEL_23;
        goto LABEL_8;
      }
      if ( !mbsinit((const mbstate_t *)&v57) )
        goto LABEL_114;
      v56 = 1;
    }
    v13 = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    v15 = sub_409040(src, v13);
    a2 = v14;
    v16 = sub_40B170(&v62, v14, v15, &v57);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v61 = 0;
      v58 = 1;
      goto LABEL_9;
    }
    if ( v16 != -2LL )
      break;
    v33 = strlen((const char *)src);
    v61 = 0;
    n = v33;
    v11 = 0;
    v58 = 1;
LABEL_9:
    a2 = (char *)src;
    v12 = n;
    if ( src == &v63 )
    {
      v32 = memcpy((void *)(v6 + 24), src, n);
      v12 = n;
      *(_QWORD *)v6 = v32;
      v11 = v61;
    }
    else
    {
      *(_QWORD *)v6 = src;
    }
    *(_QWORD *)(v6 + 8) = v12;
    *(_BYTE *)(v6 + 16) = v11;
    if ( v11 )
      *(_DWORD *)(v6 + 20) = v62;
    src = (char *)src + v12;
    v6 += 48LL;
    v58 = 0;
  }
  if ( !v16 )
  {
    n = 1LL;
    if ( *(_BYTE *)src )
      goto LABEL_113;
    if ( v62 )
      goto LABEL_115;
  }
  v61 = 1;
  if ( mbsinit((const mbstate_t *)&v57) )
    v56 = 0;
  v10 = v62;
  v58 = 1;
  if ( v62 )
  {
LABEL_8:
    v11 = 1;
    goto LABEL_9;
  }
LABEL_23:
  v17 = 0LL;
  v18 = v5 + 48;
  v19 = v54 <= 2;
  *(_QWORD *)(v7 + 8) = 1LL;
  v55 = (mbstate_t *)2;
  if ( !v19 )
  {
    do
    {
      v20 = *(_BYTE *)(v18 + 16);
      while ( 1 )
      {
        v21 = v5 + 48 * v17;
        if ( v20 && *(_BYTE *)(v21 + 16) )
        {
          if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v21 + 20) )
            goto LABEL_32;
        }
        else
        {
          v22 = *(_QWORD *)(v18 + 8);
          if ( v22 == *(_QWORD *)(v21 + 8) )
          {
            a2 = *(char **)v21;
            if ( !memcmp(*(const void **)v18, *(const void **)v21, v22) )
            {
LABEL_32:
              *(_QWORD *)(v7 + 8LL * (_QWORD)v55) = (char *)v55 - ++v17;
              goto LABEL_33;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= *(_QWORD *)(v7 + 8 * v17);
      }
      *(_QWORD *)(v7 + 8LL * (_QWORD)v55) = v55;
LABEL_33:
      v55 = (mbstate_t *)((char *)v55 + 1);
      v18 += 48LL;
    }
    while ( (mbstate_t *)v54 != v55 );
  }
  v64 = 0;
  v23 = 0LL;
  v66 = 0;
  *v52 = 0LL;
  v24 = (char *)ps;
  ps = (mbstate_t *)&v72;
  v71 = 0;
  v65 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v55 = (mbstate_t *)&v65;
  s = v24;
  s2 = v24;
  v25 = 0;
LABEL_35:
  if ( v25 )
  {
    if ( !v76 )
      goto LABEL_37;
    goto LABEL_49;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v71 )
      {
        v8 = *(unsigned __int8 *)s2;
        if ( ((unsigned int)dword_40F520[(*(_BYTE *)s2 >> 5) & 7] >> v8) & 1 )
        {
          v75 = 1LL;
          v29 = *(char *)s2;
          v76 = 1;
          v77 = v29;
          v73 = 1;
          goto LABEL_49;
        }
        if ( !mbsinit(ps) )
          goto LABEL_114;
        v71 = 1;
      }
      v34 = __ctype_get_mb_cur_max();
      v35 = (char *)s2;
      v36 = sub_409040(s2, v34);
      a2 = v35;
      v37 = sub_40B170(&v77, v35, v36, &v72);
      v75 = v37;
      switch ( v37 )
      {
        case -1LL:
          v75 = 1LL;
          v76 = 0;
          v73 = 1;
LABEL_37:
          v26 = v5 + 48 * v23;
          goto LABEL_38;
        case -2LL:
          v50 = strlen((const char *)s2);
          v76 = 0;
          v75 = v50;
          v73 = 1;
          goto LABEL_37;
        case 0LL:
          v75 = 1LL;
          if ( *(_BYTE *)s2 )
            goto LABEL_113;
          if ( v77 )
            goto LABEL_115;
          break;
      }
      v76 = 1;
      if ( mbsinit((const mbstate_t *)&v72) )
        v71 = 0;
      v73 = 1;
LABEL_49:
      v30 = v77;
      if ( !v77 )
        goto LABEL_54;
      v26 = v5 + 48 * v23;
      if ( *(_BYTE *)(v26 + 16) )
      {
        if ( *(_DWORD *)(v26 + 20) != v77 )
        {
LABEL_39:
          if ( !v23 )
            goto LABEL_40;
          goto LABEL_74;
        }
      }
      else
      {
LABEL_38:
        v27 = *(_QWORD *)(v26 + 8);
        if ( v27 != v75 )
          goto LABEL_39;
        a2 = (char *)s2;
        if ( memcmp(*(const void **)v26, s2, v27) )
        {
          if ( !v23 )
          {
LABEL_40:
            if ( v66 )
            {
              if ( v69 )
                goto LABEL_44;
              goto LABEL_45;
            }
            if ( !v64 )
            {
              if ( ((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
              {
                v68 = 1LL;
                v28 = *s;
                v69 = 1;
                v70 = v28;
                v66 = 1;
LABEL_44:
                if ( !v70 )
LABEL_117:
                  abort();
LABEL_45:
                s += v68;
                s2 = (char *)s2 + v75;
                v66 = 0;
                v73 = 0;
                continue;
              }
              if ( mbsinit(v55) )
              {
                v64 = 1;
                goto LABEL_99;
              }
LABEL_114:
              __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_99:
            v46 = __ctype_get_mb_cur_max();
            v47 = s;
            v48 = sub_409040(s, v46);
            a2 = v47;
            v49 = sub_40B170(&v70, v47, v48, &v65);
            v68 = v49;
            if ( v49 == -1 )
            {
              v68 = 1LL;
              v69 = 0;
              goto LABEL_45;
            }
            if ( v49 == -2 )
            {
              v51 = strlen(s);
              v69 = 0;
              v68 = v51;
              goto LABEL_45;
            }
            if ( v49 )
            {
LABEL_104:
              v69 = 1;
              if ( mbsinit((const mbstate_t *)&v65) )
                v64 = 0;
              v66 = 1;
              goto LABEL_44;
            }
            v68 = 1LL;
            if ( !*s )
            {
              if ( !v70 )
                goto LABEL_104;
LABEL_115:
              sub_405D00();
            }
LABEL_113:
            __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_74:
          v38 = *(_QWORD *)(v7 + 8 * v23);
          v25 = v73;
          v39 = v23 - v38;
          if ( !v38 )
            goto LABEL_35;
          if ( !v66 )
            goto LABEL_78;
          if ( v69 )
            goto LABEL_81;
          while ( 2 )
          {
            while ( 2 )
            {
              v66 = 0;
              s += v68;
              if ( !--v38 )
              {
                v25 = v73;
                v23 = v39;
                goto LABEL_35;
              }
LABEL_78:
              if ( !v64 )
              {
                v8 = (unsigned __int8)*s;
                if ( ((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> v8) & 1 )
                {
                  v68 = 1LL;
                  v40 = *s;
                  v69 = 1;
                  v70 = v40;
                  v66 = 1;
LABEL_81:
                  a2 = (char *)v70;
                  if ( !v70 )
                    goto LABEL_117;
                  continue;
                }
                if ( !mbsinit(v55) )
                  goto LABEL_114;
                v64 = 1;
              }
              break;
            }
            v41 = __ctype_get_mb_cur_max();
            v42 = s;
            v43 = sub_409040(s, v41);
            a2 = v42;
            v44 = sub_40B170(&v70, v42, v43, &v65);
            v68 = v44;
            switch ( v44 )
            {
              case -1LL:
                v68 = 1LL;
                v69 = 0;
                continue;
              case -2LL:
                v45 = strlen(s);
                v69 = 0;
                v68 = v45;
                continue;
              case 0LL:
                v68 = 1LL;
                if ( *s )
                  goto LABEL_113;
                if ( v70 )
                  __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
                break;
            }
            break;
          }
          v69 = 1;
          if ( mbsinit((const mbstate_t *)&v65) )
            v64 = 0;
          v66 = 1;
          goto LABEL_81;
        }
      }
      break;
    }
    ++v23;
    s2 = (char *)s2 + v75;
    v73 = 0;
    if ( v54 != v23 )
      continue;
    break;
  }
  *v52 = s;
LABEL_54:
  sub_40B900(v5, a2, v30, v8, v10, v3);
  return 1LL;
}

__int64 __fastcall sub_405D20(mbstate_t *a1, char *a2, char **a3)
{
  __int64 v3; // r9
  void *v4; // rsp
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  char v11; // al
  size_t v12; // rdx
  size_t v13; // rax
  char *v14; // r14
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r15
  __int64 v18; // r14
  bool v19; // cc
  char v20; // bl
  __int64 v21; // rax
  size_t v22; // rdx
  __int64 v23; // r15
  char *v24; // rax
  char v25; // al
  __int64 v26; // rax
  size_t v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  void *v32; // rax
  size_t v33; // rax
  size_t v34; // rax
  char *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r14
  unsigned int v40; // eax
  size_t v41; // rax
  char *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  char *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  char **v52; // [rsp+0h] [rbp-110h]
  mbstate_t *ps; // [rsp+8h] [rbp-108h]
  unsigned __int64 v54; // [rsp+10h] [rbp-100h]
  mbstate_t *v55; // [rsp+18h] [rbp-F8h]
  char v56; // [rsp+20h] [rbp-F0h]
  __int64 v57; // [rsp+24h] [rbp-ECh]
  char v58; // [rsp+2Ch] [rbp-E4h]
  void *src; // [rsp+30h] [rbp-E0h]
  size_t n; // [rsp+38h] [rbp-D8h]
  char v61; // [rsp+40h] [rbp-D0h]
  unsigned int v62; // [rsp+44h] [rbp-CCh]
  __int64 v63; // [rsp+48h] [rbp-C8h]
  char v64; // [rsp+60h] [rbp-B0h]
  __int64 v65; // [rsp+64h] [rbp-ACh]
  char v66; // [rsp+6Ch] [rbp-A4h]
  char *s; // [rsp+70h] [rbp-A0h]
  size_t v68; // [rsp+78h] [rbp-98h]
  char v69; // [rsp+80h] [rbp-90h]
  unsigned int v70; // [rsp+84h] [rbp-8Ch]
  char v71; // [rsp+A0h] [rbp-70h]
  __int64 v72; // [rsp+A4h] [rbp-6Ch]
  char v73; // [rsp+ACh] [rbp-64h]
  void *s2; // [rsp+B0h] [rbp-60h]
  size_t v75; // [rsp+B8h] [rbp-58h]
  char v76; // [rsp+C0h] [rbp-50h]
  unsigned int v77; // [rsp+C4h] [rbp-4Ch]

  ps = a1;
  v52 = a3;
  v54 = sub_40BA40(a2);
  if ( v54 > 0x492492492492492LL )
    return 0LL;
  if ( 56 * v54 > 0xFAF )
  {
    v5 = sub_40B890();
  }
  else
  {
    v4 = alloca(56 * v54 + 24);
    v5 = (((unsigned __int64)&ps + 7) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( !v5 )
    return 0LL;
  src = a2;
  v6 = v5;
  v56 = 0;
  v58 = 0;
  v57 = 0LL;
  v7 = v5 + 48 * v54;
  while ( 1 )
  {
    if ( !v56 )
    {
      v8 = *(unsigned __int8 *)src;
      if ( ((unsigned int)dword_40F520[(*(_BYTE *)src >> 5) & 7] >> v8) & 1 )
      {
        n = 1LL;
        v9 = *(char *)src;
        v61 = 1;
        v62 = v9;
        v10 = v9;
        v58 = 1;
        if ( !v9 )
          goto LABEL_23;
        goto LABEL_8;
      }
      if ( !mbsinit((const mbstate_t *)&v57) )
        goto LABEL_114;
      v56 = 1;
    }
    v13 = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    v15 = sub_409040(src, v13);
    a2 = v14;
    v16 = sub_40B170(&v62, v14, v15, &v57);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v61 = 0;
      v58 = 1;
      goto LABEL_9;
    }
    if ( v16 != -2LL )
      break;
    v33 = strlen((const char *)src);
    v61 = 0;
    n = v33;
    v11 = 0;
    v58 = 1;
LABEL_9:
    a2 = (char *)src;
    v12 = n;
    if ( src == &v63 )
    {
      v32 = memcpy((void *)(v6 + 24), src, n);
      v12 = n;
      *(_QWORD *)v6 = v32;
      v11 = v61;
    }
    else
    {
      *(_QWORD *)v6 = src;
    }
    *(_QWORD *)(v6 + 8) = v12;
    *(_BYTE *)(v6 + 16) = v11;
    if ( v11 )
      *(_DWORD *)(v6 + 20) = v62;
    src = (char *)src + v12;
    v6 += 48LL;
    v58 = 0;
  }
  if ( !v16 )
  {
    n = 1LL;
    if ( *(_BYTE *)src )
      goto LABEL_113;
    if ( v62 )
      goto LABEL_115;
  }
  v61 = 1;
  if ( mbsinit((const mbstate_t *)&v57) )
    v56 = 0;
  v10 = v62;
  v58 = 1;
  if ( v62 )
  {
LABEL_8:
    v11 = 1;
    goto LABEL_9;
  }
LABEL_23:
  v17 = 0LL;
  v18 = v5 + 48;
  v19 = v54 <= 2;
  *(_QWORD *)(v7 + 8) = 1LL;
  v55 = (mbstate_t *)2;
  if ( !v19 )
  {
    do
    {
      v20 = *(_BYTE *)(v18 + 16);
      while ( 1 )
      {
        v21 = v5 + 48 * v17;
        if ( v20 && *(_BYTE *)(v21 + 16) )
        {
          if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v21 + 20) )
            goto LABEL_32;
        }
        else
        {
          v22 = *(_QWORD *)(v18 + 8);
          if ( v22 == *(_QWORD *)(v21 + 8) )
          {
            a2 = *(char **)v21;
            if ( !memcmp(*(const void **)v18, *(const void **)v21, v22) )
            {
LABEL_32:
              *(_QWORD *)(v7 + 8LL * (_QWORD)v55) = (char *)v55 - ++v17;
              goto LABEL_33;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= *(_QWORD *)(v7 + 8 * v17);
      }
      *(_QWORD *)(v7 + 8LL * (_QWORD)v55) = v55;
LABEL_33:
      v55 = (mbstate_t *)((char *)v55 + 1);
      v18 += 48LL;
    }
    while ( (mbstate_t *)v54 != v55 );
  }
  v64 = 0;
  v23 = 0LL;
  v66 = 0;
  *v52 = 0LL;
  v24 = (char *)ps;
  ps = (mbstate_t *)&v72;
  v71 = 0;
  v65 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v55 = (mbstate_t *)&v65;
  s = v24;
  s2 = v24;
  v25 = 0;
LABEL_35:
  if ( v25 )
  {
    if ( !v76 )
      goto LABEL_37;
    goto LABEL_49;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v71 )
      {
        v8 = *(unsigned __int8 *)s2;
        if ( ((unsigned int)dword_40F520[(*(_BYTE *)s2 >> 5) & 7] >> v8) & 1 )
        {
          v75 = 1LL;
          v29 = *(char *)s2;
          v76 = 1;
          v77 = v29;
          v73 = 1;
          goto LABEL_49;
        }
        if ( !mbsinit(ps) )
          goto LABEL_114;
        v71 = 1;
      }
      v34 = __ctype_get_mb_cur_max();
      v35 = (char *)s2;
      v36 = sub_409040(s2, v34);
      a2 = v35;
      v37 = sub_40B170(&v77, v35, v36, &v72);
      v75 = v37;
      switch ( v37 )
      {
        case -1LL:
          v75 = 1LL;
          v76 = 0;
          v73 = 1;
LABEL_37:
          v26 = v5 + 48 * v23;
          goto LABEL_38;
        case -2LL:
          v50 = strlen((const char *)s2);
          v76 = 0;
          v75 = v50;
          v73 = 1;
          goto LABEL_37;
        case 0LL:
          v75 = 1LL;
          if ( *(_BYTE *)s2 )
            goto LABEL_113;
          if ( v77 )
            goto LABEL_115;
          break;
      }
      v76 = 1;
      if ( mbsinit((const mbstate_t *)&v72) )
        v71 = 0;
      v73 = 1;
LABEL_49:
      v30 = v77;
      if ( !v77 )
        goto LABEL_54;
      v26 = v5 + 48 * v23;
      if ( *(_BYTE *)(v26 + 16) )
      {
        if ( *(_DWORD *)(v26 + 20) != v77 )
        {
LABEL_39:
          if ( !v23 )
            goto LABEL_40;
          goto LABEL_74;
        }
      }
      else
      {
LABEL_38:
        v27 = *(_QWORD *)(v26 + 8);
        if ( v27 != v75 )
          goto LABEL_39;
        a2 = (char *)s2;
        if ( memcmp(*(const void **)v26, s2, v27) )
        {
          if ( !v23 )
          {
LABEL_40:
            if ( v66 )
            {
              if ( v69 )
                goto LABEL_44;
              goto LABEL_45;
            }
            if ( !v64 )
            {
              if ( ((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
              {
                v68 = 1LL;
                v28 = *s;
                v69 = 1;
                v70 = v28;
                v66 = 1;
LABEL_44:
                if ( !v70 )
LABEL_117:
                  abort();
LABEL_45:
                s += v68;
                s2 = (char *)s2 + v75;
                v66 = 0;
                v73 = 0;
                continue;
              }
              if ( mbsinit(v55) )
              {
                v64 = 1;
                goto LABEL_99;
              }
LABEL_114:
              __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_99:
            v46 = __ctype_get_mb_cur_max();
            v47 = s;
            v48 = sub_409040(s, v46);
            a2 = v47;
            v49 = sub_40B170(&v70, v47, v48, &v65);
            v68 = v49;
            if ( v49 == -1 )
            {
              v68 = 1LL;
              v69 = 0;
              goto LABEL_45;
            }
            if ( v49 == -2 )
            {
              v51 = strlen(s);
              v69 = 0;
              v68 = v51;
              goto LABEL_45;
            }
            if ( v49 )
            {
LABEL_104:
              v69 = 1;
              if ( mbsinit((const mbstate_t *)&v65) )
                v64 = 0;
              v66 = 1;
              goto LABEL_44;
            }
            v68 = 1LL;
            if ( !*s )
            {
              if ( !v70 )
                goto LABEL_104;
LABEL_115:
              sub_405D00();
            }
LABEL_113:
            __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_74:
          v38 = *(_QWORD *)(v7 + 8 * v23);
          v25 = v73;
          v39 = v23 - v38;
          if ( !v38 )
            goto LABEL_35;
          if ( !v66 )
            goto LABEL_78;
          if ( v69 )
            goto LABEL_81;
          while ( 2 )
          {
            while ( 2 )
            {
              v66 = 0;
              s += v68;
              if ( !--v38 )
              {
                v25 = v73;
                v23 = v39;
                goto LABEL_35;
              }
LABEL_78:
              if ( !v64 )
              {
                v8 = (unsigned __int8)*s;
                if ( ((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> v8) & 1 )
                {
                  v68 = 1LL;
                  v40 = *s;
                  v69 = 1;
                  v70 = v40;
                  v66 = 1;
LABEL_81:
                  a2 = (char *)v70;
                  if ( !v70 )
                    goto LABEL_117;
                  continue;
                }
                if ( !mbsinit(v55) )
                  goto LABEL_114;
                v64 = 1;
              }
              break;
            }
            v41 = __ctype_get_mb_cur_max();
            v42 = s;
            v43 = sub_409040(s, v41);
            a2 = v42;
            v44 = sub_40B170(&v70, v42, v43, &v65);
            v68 = v44;
            switch ( v44 )
            {
              case -1LL:
                v68 = 1LL;
                v69 = 0;
                continue;
              case -2LL:
                v45 = strlen(s);
                v69 = 0;
                v68 = v45;
                continue;
              case 0LL:
                v68 = 1LL;
                if ( *s )
                  goto LABEL_113;
                if ( v70 )
                  __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
                break;
            }
            break;
          }
          v69 = 1;
          if ( mbsinit((const mbstate_t *)&v65) )
            v64 = 0;
          v66 = 1;
          goto LABEL_81;
        }
      }
      break;
    }
    ++v23;
    s2 = (char *)s2 + v75;
    v73 = 0;
    if ( v54 != v23 )
      continue;
    break;
  }
  *v52 = s;
LABEL_54:
  sub_40B900(v5, a2, v30, v8, v10, v3);
  return 1LL;
}

mbstate_t __fastcall sub_4066F0(mbstate_t *a1, char *a2)
{
  __int64 v2; // r13
  char *v3; // rbp
  char v4; // r15
  mbstate_t result; // rax
  unsigned __int8 v6; // cl
  const char *v7; // r9
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  char v11; // al
  size_t v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int8 *v15; // r14
  __int64 v16; // rbp
  int v17; // ecx
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rdi
  char v21; // si
  char v22; // cl
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  char v25; // r14
  int v26; // eax
  int v27; // ecx
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  unsigned int v32; // eax
  int v33; // eax
  __int32 v34; // eax
  __int32 v35; // eax
  bool v36; // al
  size_t v37; // rax
  void *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  size_t v41; // r15
  size_t v42; // rax
  void *v43; // r15
  __int64 v44; // rax
  void *v45; // rax
  size_t v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // rax
  void *v50; // rax
  unsigned __int64 v51; // r14
  int v52; // eax
  char v53; // dl
  size_t v54; // rax
  char *v55; // r15
  __int64 v56; // rax
  __int64 v57; // rax
  size_t v58; // rax
  size_t v59; // rax
  int v60; // eax
  size_t v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  size_t v64; // rax
  char *v65; // r14
  __int64 v66; // rax
  __int64 v67; // rax
  size_t v68; // rax
  char *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  const char *v75; // [rsp+0h] [rbp-188h]
  unsigned __int64 v76; // [rsp+0h] [rbp-188h]
  size_t v77; // [rsp+0h] [rbp-188h]
  void *v78; // [rsp+0h] [rbp-188h]
  unsigned __int64 v79; // [rsp+8h] [rbp-180h]
  mbstate_t v80; // [rsp+14h] [rbp-174h]
  char v81; // [rsp+1Ch] [rbp-16Ch]
  char *v82; // [rsp+20h] [rbp-168h]
  size_t v83; // [rsp+28h] [rbp-160h]
  char v84; // [rsp+30h] [rbp-158h]
  int v85; // [rsp+34h] [rbp-154h]
  char v86; // [rsp+50h] [rbp-138h]
  mbstate_t v87; // [rsp+54h] [rbp-134h]
  char v88; // [rsp+5Ch] [rbp-12Ch]
  char *s; // [rsp+60h] [rbp-128h]
  size_t v90; // [rsp+68h] [rbp-120h]
  char v91; // [rsp+70h] [rbp-118h]
  int v92; // [rsp+74h] [rbp-114h]
  __int128 v93; // [rsp+90h] [rbp-F8h]
  size_t n[2]; // [rsp+A0h] [rbp-E8h]
  __int128 v95; // [rsp+B0h] [rbp-D8h]
  __int128 v96; // [rsp+C0h] [rbp-C8h]
  mbstate_t v97[2]; // [rsp+D0h] [rbp-B8h]
  void *s1[2]; // [rsp+E0h] [rbp-A8h]
  __m128i v99; // [rsp+F0h] [rbp-98h]
  __m128i v100; // [rsp+100h] [rbp-88h]
  mbstate_t ps; // [rsp+110h] [rbp-78h]
  char v102; // [rsp+11Ch] [rbp-6Ch]
  void *s2; // [rsp+120h] [rbp-68h]
  size_t v104; // [rsp+128h] [rbp-60h]
  char v105; // [rsp+130h] [rbp-58h]
  int v106; // [rsp+134h] [rbp-54h]

  v2 = (__int64)a2;
  v3 = (char *)a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v17 = *a2;
    v82 = a2;
    v81 = 0;
    v80 = 0LL;
    if ( ((unsigned int)dword_40F520[(unsigned __int8)v17 >> 5] >> v17) & 1 )
    {
      v83 = 1LL;
      v85 = v17;
      v84 = 1;
      v81 = 1;
LABEL_17:
      if ( !v85 )
        return (mbstate_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v80) )
      goto LABEL_173;
    v68 = __ctype_get_mb_cur_max();
    v69 = v82;
    v70 = sub_409040(v82, v68);
    v71 = sub_40B170(&v85, v69, v70, &v80);
    v83 = v71;
    if ( v71 == -1 )
    {
      v83 = 1LL;
      v84 = 0;
      v81 = 1;
    }
    else
    {
      if ( v71 != -2 )
      {
        if ( !v71 )
        {
          v83 = 1LL;
          if ( *v82 )
            goto LABEL_174;
          if ( v85 )
            goto LABEL_162;
        }
        v84 = 1;
        mbsinit(&v80);
        v81 = 1;
        goto LABEL_17;
      }
      v74 = strlen(v82);
      v84 = 0;
      v83 = v74;
      v81 = 1;
    }
LABEL_29:
    s = a2;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 1;
    v86 = 0;
    v87 = 0LL;
    v88 = 0;
    n[0] = (size_t)a1;
    LOBYTE(v93) = 0;
    *(_QWORD *)((char *)&v93 + 4) = 0LL;
    BYTE12(v93) = 0;
    v79 = 0LL;
    while ( 1 )
    {
      if ( !(_BYTE)v93 )
      {
        if ( ((unsigned int)dword_40F520[(*(_BYTE *)n[0] >> 5) & 7] >> *(_BYTE *)n[0]) & 1 )
        {
          n[1] = 1LL;
          v26 = *(char *)n[0];
          LOBYTE(v95) = 1;
          DWORD1(v95) = v26;
          BYTE12(v93) = 1;
          goto LABEL_33;
        }
        if ( !mbsinit((const mbstate_t *)((char *)&v93 + 4)) )
          goto LABEL_173;
        LOBYTE(v93) = 1;
      }
      v46 = __ctype_get_mb_cur_max();
      v77 = n[0];
      v47 = sub_409040(n[0], v46);
      v48 = sub_40B170((char *)&v95 + 4, v77, v47, (char *)&v93 + 4);
      n[1] = v48;
      switch ( v48 )
      {
        case -1LL:
          n[1] = 1LL;
          LOBYTE(v95) = 0;
          BYTE12(v93) = 1;
          goto LABEL_85;
        case -2LL:
          v59 = strlen((const char *)n[0]);
          LOBYTE(v95) = 0;
          n[1] = v59;
          BYTE12(v93) = 1;
LABEL_85:
          if ( !((unsigned __int8)v25 & (v23 > 9)) )
          {
            ++v24;
            goto LABEL_88;
          }
          if ( v24 < 5 * v23 )
          {
            ++v24;
            v25 &= v23 > 9;
            goto LABEL_88;
          }
LABEL_106:
          v51 = v24 - v79;
          if ( v24 == v79 )
          {
            if ( !v88 )
              goto LABEL_130;
            if ( !v91 )
              goto LABEL_134;
LABEL_133:
            if ( v92 )
              goto LABEL_134;
LABEL_115:
            v25 = sub_405D20(a1, a2, (char **)&ps);
            if ( v25 )
              return ps;
            v53 = v95;
LABEL_135:
            v79 = v24++;
            if ( !v53 )
              goto LABEL_88;
            goto LABEL_37;
          }
          if ( !v88 )
            goto LABEL_110;
          if ( v91 )
            goto LABEL_113;
          while ( 2 )
          {
            while ( 2 )
            {
              v88 = 0;
              s += v90;
              if ( !--v51 )
                goto LABEL_130;
LABEL_110:
              if ( !v86 )
              {
                if ( ((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
                {
                  v90 = 1LL;
                  v52 = *s;
                  v91 = 1;
                  v92 = v52;
                  v88 = 1;
LABEL_113:
                  if ( !v92 )
                  {
                    if ( v88 )
                      goto LABEL_115;
LABEL_130:
                    if ( !v86 )
                    {
                      if ( ((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
                      {
                        v90 = 1LL;
                        v60 = *s;
                        v91 = 1;
                        v92 = v60;
                        v88 = 1;
                        goto LABEL_133;
                      }
                      if ( !mbsinit(&v87) )
                        goto LABEL_173;
                      v86 = 1;
                    }
                    v64 = __ctype_get_mb_cur_max();
                    v65 = s;
                    v66 = sub_409040(s, v64);
                    v67 = sub_40B170(&v92, v65, v66, &v87);
                    v90 = v67;
                    if ( v67 == -1 )
                    {
                      v90 = 1LL;
                      v91 = 0;
                      v88 = 1;
                    }
                    else
                    {
                      if ( v67 != -2 )
                      {
                        if ( !v67 )
                        {
                          v90 = 1LL;
                          if ( *s )
                            goto LABEL_174;
                          if ( v92 )
                            goto LABEL_162;
                        }
                        v91 = 1;
                        if ( mbsinit(&v87) )
                          v86 = 0;
                        v88 = 1;
                        goto LABEL_133;
                      }
                      v73 = strlen(s);
                      v91 = 0;
                      v90 = v73;
                      v88 = 1;
                    }
LABEL_134:
                    v53 = v95;
                    v25 = 1;
                    goto LABEL_135;
                  }
                  continue;
                }
                if ( !mbsinit(&v87) )
                  goto LABEL_173;
                v86 = 1;
              }
              break;
            }
            v54 = __ctype_get_mb_cur_max();
            v55 = s;
            v56 = sub_409040(s, v54);
            v57 = sub_40B170(&v92, v55, v56, &v87);
            v90 = v57;
            switch ( v57 )
            {
              case -1LL:
                v90 = 1LL;
                v91 = 0;
                continue;
              case -2LL:
                v58 = strlen(s);
                v91 = 0;
                v90 = v58;
                continue;
              case 0LL:
                v90 = 1LL;
                if ( *s )
                  goto LABEL_174;
                if ( v92 )
                  goto LABEL_162;
                break;
            }
            break;
          }
          v91 = 1;
          if ( mbsinit(&v87) )
            v86 = 0;
          v88 = 1;
          goto LABEL_113;
        case 0LL:
          n[1] = 1LL;
          if ( *(_BYTE *)n[0] )
            goto LABEL_174;
          if ( DWORD1(v95) )
            goto LABEL_162;
          break;
      }
      LOBYTE(v95) = 1;
      if ( mbsinit((const mbstate_t *)((char *)&v93 + 4)) )
        LOBYTE(v93) = 0;
      BYTE12(v93) = 1;
LABEL_33:
      if ( !DWORD1(v95) )
        return 0LL;
      if ( (unsigned __int8)v25 & (v23 > 9) )
      {
        if ( v24 >= 5 * v23 )
          goto LABEL_106;
        ++v24;
        v25 &= v23 > 9;
      }
      else
      {
        ++v24;
      }
LABEL_37:
      if ( v84 )
      {
        if ( DWORD1(v95) == v85 )
          goto LABEL_39;
LABEL_66:
        v41 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v41 = n[1];
      if ( n[1] == v83 && !memcmp((const void *)n[0], v82, n[1]) )
      {
LABEL_39:
        v27 = *a2;
        v28 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v29 = _mm_load_si128((const __m128i *)&v93);
        LOBYTE(ps.__count) = 0;
        *(__m128i *)s1 = v28;
        v30 = _mm_load_si128((const __m128i *)&v95);
        s1[0] = (void *)(v28.m128i_i64[1] + v28.m128i_i64[0]);
        v31 = _mm_load_si128((const __m128i *)&v96);
        *(__m128i *)&v97[0].__count = v29;
        v99 = v30;
        v32 = dword_40F520[(unsigned __int8)v27 >> 5];
        v100 = v31;
        v97[1].__wchb[0] = 0;
        v102 = 0;
        *(mbstate_t *)((char *)&ps + 4) = 0LL;
        if ( (v32 >> v27) & 1 )
        {
          v104 = 1LL;
          v106 = v27;
          v105 = 1;
          v102 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
        {
          LOBYTE(ps.__count) = 1;
          v61 = __ctype_get_mb_cur_max();
          v78 = s2;
          v62 = sub_409040(s2, v61);
          v63 = sub_40B170(&v106, v78, v62, &ps.4);
          v104 = v63;
          if ( v63 == -1 )
          {
            v104 = 1LL;
            v105 = 0;
          }
          else if ( v63 == -2 )
          {
            v72 = strlen((const char *)s2);
            v105 = 0;
            v104 = v72;
          }
          else
          {
            if ( !v63 )
            {
              v104 = 1LL;
              if ( !*(_BYTE *)s2 )
              {
                if ( !v106 )
                  goto LABEL_143;
LABEL_162:
                sub_405D00();
              }
LABEL_174:
              __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
            }
LABEL_143:
            v105 = 1;
            if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
              LOBYTE(ps.__count) = 0;
            v102 = 1;
LABEL_41:
            if ( !v106 )
              abort();
          }
          v102 = 0;
          ++v24;
          s2 = (char *)s2 + v104;
          while ( 2 )
          {
            if ( LOBYTE(ps.__count) )
            {
LABEL_55:
              v37 = __ctype_get_mb_cur_max();
              v38 = s2;
              v39 = sub_409040(s2, v37);
              v40 = sub_40B170(&v106, v38, v39, &ps.4);
              v104 = v40;
              if ( v40 == -1 )
              {
                v104 = 1LL;
                v105 = 0;
                v102 = 1;
              }
              else if ( v40 == -2 )
              {
                v49 = strlen((const char *)s2);
                v105 = 0;
                v104 = v49;
                v102 = 1;
              }
              else
              {
                if ( !v40 )
                {
                  v104 = 1LL;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_174;
                  if ( v106 )
                    goto LABEL_162;
                }
                v105 = 1;
                if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  LOBYTE(ps.__count) = 0;
                v102 = 1;
                if ( !v106 )
                  return (mbstate_t)n[0];
              }
            }
            else
            {
              if ( !(((unsigned int)dword_40F520[(*(_BYTE *)s2 >> 5) & 7] >> *(_BYTE *)s2) & 1) )
              {
                if ( !mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  goto LABEL_173;
                LOBYTE(ps.__count) = 1;
                goto LABEL_55;
              }
              v104 = 1LL;
              v33 = *(char *)s2;
              v105 = 1;
              v106 = v33;
              v102 = 1;
              if ( !v33 )
                return (mbstate_t)n[0];
            }
            if ( !v97[1].__wchb[0] )
            {
              if ( !LOBYTE(v97[0].__count) )
              {
                if ( ((unsigned int)dword_40F520[(*(_BYTE *)s1[0] >> 5) & 7] >> *(_BYTE *)s1[0]) & 1 )
                {
                  s1[1] = (void *)1;
                  v34 = *(char *)s1[0];
                  v99.m128i_i8[0] = 1;
                  v99.m128i_i32[1] = v34;
                  v97[1].__wchb[0] = 1;
LABEL_49:
                  v35 = v99.m128i_i32[1];
                  if ( !v99.m128i_i32[1] )
                    return 0LL;
LABEL_50:
                  if ( v105 )
                  {
                    v36 = v106 != v35;
LABEL_52:
                    if ( v36 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned __int64)s1[1];
                    ++v24;
                    s2 = (char *)s2 + v104;
                    v97[1].__wchb[0] = 0;
                    v102 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != (void *)v104 )
                    goto LABEL_66;
                  v36 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((mbstate_t *)((char *)v97 + 4)) )
                  goto LABEL_173;
                LOBYTE(v97[0].__count) = 1;
              }
              v42 = __ctype_get_mb_cur_max();
              v43 = s1[0];
              v44 = sub_409040(s1[0], v42);
              v45 = (void *)sub_40B170((char *)v99.m128i_i64 + 4, v43, v44, &v97[0].4);
              s1[1] = v45;
              if ( v45 == (void *)-1LL )
              {
                s1[1] = (void *)1;
                v99.m128i_i8[0] = 0;
                v97[1].__wchb[0] = 1;
              }
              else
              {
                if ( v45 != (void *)-2LL )
                {
                  if ( !v45 )
                  {
                    s1[1] = (void *)1;
                    if ( *(_BYTE *)s1[0] )
                      goto LABEL_174;
                    if ( v99.m128i_i32[1] )
                      goto LABEL_162;
                  }
                  v99.m128i_i8[0] = 1;
                  if ( mbsinit((mbstate_t *)((char *)v97 + 4)) )
                    LOBYTE(v97[0].__count) = 0;
                  v35 = v99.m128i_i32[1];
                  v97[1].__wchb[0] = 1;
                  if ( !v99.m128i_i32[1] )
                    return 0LL;
                  goto LABEL_50;
                }
                v50 = (void *)strlen((const char *)s1[0]);
                v99.m128i_i8[0] = 0;
                s1[1] = v50;
                v97[1].__wchb[0] = 1;
              }
              goto LABEL_65;
            }
            break;
          }
          if ( v99.m128i_i8[0] )
            goto LABEL_49;
          goto LABEL_65;
        }
LABEL_173:
        __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v41;
      ++v23;
      BYTE12(v93) = 0;
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
    v14 = v9 + 1;
    v15 = (unsigned __int8 *)(v3 + 1);
    if ( v4 != v6 )
    {
      if ( !v3[1] )
        return 0LL;
      goto LABEL_12;
    }
    v18 = *(_BYTE *)(v2 + 1);
    if ( !v18 )
      return (mbstate_t)v3;
    if ( !*v15 )
      return 0LL;
    v14 = v9 + 2;
    if ( v18 == *v15 )
      break;
LABEL_12:
    LOBYTE(v9) = v11 & (v8 > 9);
    v16 = (unsigned int)v9;
    if ( (unsigned __int8)v11 & (v8 > 9) )
    {
      if ( v14 < 5 * v8 || v7 && (v75 = v7, v12 = strnlen(v7, v14 - v10), v10 = v14, v7 = &v75[v12], v75[v12]) )
      {
        v11 = v16;
      }
      else
      {
        v76 = v10;
        v13 = strlen((const char *)v2);
        v11 = sub_405B80(v13, &ps, v16, v15, v2);
        v10 = v76;
        if ( v11 )
          return ps;
        v7 = 0LL;
      }
    }
    v6 = *v15;
    v3 = (char *)v15;
    v9 = v14;
  }
  v19 = -(__int64)v9;
  v20 = v2 + v19;
  v9 = (unsigned __int64)&v3[v19];
  while ( 1 )
  {
    v22 = *(_BYTE *)(v20 + v14);
    if ( !v22 )
      return (mbstate_t)v3;
    v21 = *(_BYTE *)(v9 + v14);
    if ( !v21 )
      return 0LL;
    ++v14;
    if ( v22 != v21 )
      goto LABEL_12;
  }
}

mbstate_t __fastcall sub_4066F0(mbstate_t *a1, char *a2)
{
  __int64 v2; // r13
  char *v3; // rbp
  char v4; // r15
  mbstate_t result; // rax
  unsigned __int8 v6; // cl
  const char *v7; // r9
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  char v11; // al
  size_t v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int8 *v15; // r14
  __int64 v16; // rbp
  int v17; // ecx
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rdi
  char v21; // si
  char v22; // cl
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  char v25; // r14
  int v26; // eax
  int v27; // ecx
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  unsigned int v32; // eax
  int v33; // eax
  __int32 v34; // eax
  __int32 v35; // eax
  bool v36; // al
  size_t v37; // rax
  void *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  size_t v41; // r15
  size_t v42; // rax
  void *v43; // r15
  __int64 v44; // rax
  void *v45; // rax
  size_t v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // rax
  void *v50; // rax
  unsigned __int64 v51; // r14
  int v52; // eax
  char v53; // dl
  size_t v54; // rax
  char *v55; // r15
  __int64 v56; // rax
  __int64 v57; // rax
  size_t v58; // rax
  size_t v59; // rax
  int v60; // eax
  size_t v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  size_t v64; // rax
  char *v65; // r14
  __int64 v66; // rax
  __int64 v67; // rax
  size_t v68; // rax
  char *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  const char *v75; // [rsp+0h] [rbp-188h]
  unsigned __int64 v76; // [rsp+0h] [rbp-188h]
  size_t v77; // [rsp+0h] [rbp-188h]
  void *v78; // [rsp+0h] [rbp-188h]
  unsigned __int64 v79; // [rsp+8h] [rbp-180h]
  mbstate_t v80; // [rsp+14h] [rbp-174h]
  char v81; // [rsp+1Ch] [rbp-16Ch]
  char *v82; // [rsp+20h] [rbp-168h]
  size_t v83; // [rsp+28h] [rbp-160h]
  char v84; // [rsp+30h] [rbp-158h]
  int v85; // [rsp+34h] [rbp-154h]
  char v86; // [rsp+50h] [rbp-138h]
  mbstate_t v87; // [rsp+54h] [rbp-134h]
  char v88; // [rsp+5Ch] [rbp-12Ch]
  char *s; // [rsp+60h] [rbp-128h]
  size_t v90; // [rsp+68h] [rbp-120h]
  char v91; // [rsp+70h] [rbp-118h]
  int v92; // [rsp+74h] [rbp-114h]
  __int128 v93; // [rsp+90h] [rbp-F8h]
  size_t n[2]; // [rsp+A0h] [rbp-E8h]
  __int128 v95; // [rsp+B0h] [rbp-D8h]
  __int128 v96; // [rsp+C0h] [rbp-C8h]
  mbstate_t v97[2]; // [rsp+D0h] [rbp-B8h]
  void *s1[2]; // [rsp+E0h] [rbp-A8h]
  __m128i v99; // [rsp+F0h] [rbp-98h]
  __m128i v100; // [rsp+100h] [rbp-88h]
  mbstate_t ps; // [rsp+110h] [rbp-78h]
  char v102; // [rsp+11Ch] [rbp-6Ch]
  void *s2; // [rsp+120h] [rbp-68h]
  size_t v104; // [rsp+128h] [rbp-60h]
  char v105; // [rsp+130h] [rbp-58h]
  int v106; // [rsp+134h] [rbp-54h]

  v2 = (__int64)a2;
  v3 = (char *)a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v17 = *a2;
    v82 = a2;
    v81 = 0;
    v80 = 0LL;
    if ( ((unsigned int)dword_40F520[(unsigned __int8)v17 >> 5] >> v17) & 1 )
    {
      v83 = 1LL;
      v85 = v17;
      v84 = 1;
      v81 = 1;
LABEL_17:
      if ( !v85 )
        return (mbstate_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v80) )
      goto LABEL_173;
    v68 = __ctype_get_mb_cur_max();
    v69 = v82;
    v70 = sub_409040(v82, v68);
    v71 = sub_40B170(&v85, v69, v70, &v80);
    v83 = v71;
    if ( v71 == -1 )
    {
      v83 = 1LL;
      v84 = 0;
      v81 = 1;
    }
    else
    {
      if ( v71 != -2 )
      {
        if ( !v71 )
        {
          v83 = 1LL;
          if ( *v82 )
            goto LABEL_174;
          if ( v85 )
            goto LABEL_162;
        }
        v84 = 1;
        mbsinit(&v80);
        v81 = 1;
        goto LABEL_17;
      }
      v74 = strlen(v82);
      v84 = 0;
      v83 = v74;
      v81 = 1;
    }
LABEL_29:
    s = a2;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 1;
    v86 = 0;
    v87 = 0LL;
    v88 = 0;
    n[0] = (size_t)a1;
    LOBYTE(v93) = 0;
    *(_QWORD *)((char *)&v93 + 4) = 0LL;
    BYTE12(v93) = 0;
    v79 = 0LL;
    while ( 1 )
    {
      if ( !(_BYTE)v93 )
      {
        if ( ((unsigned int)dword_40F520[(*(_BYTE *)n[0] >> 5) & 7] >> *(_BYTE *)n[0]) & 1 )
        {
          n[1] = 1LL;
          v26 = *(char *)n[0];
          LOBYTE(v95) = 1;
          DWORD1(v95) = v26;
          BYTE12(v93) = 1;
          goto LABEL_33;
        }
        if ( !mbsinit((const mbstate_t *)((char *)&v93 + 4)) )
          goto LABEL_173;
        LOBYTE(v93) = 1;
      }
      v46 = __ctype_get_mb_cur_max();
      v77 = n[0];
      v47 = sub_409040(n[0], v46);
      v48 = sub_40B170((char *)&v95 + 4, v77, v47, (char *)&v93 + 4);
      n[1] = v48;
      switch ( v48 )
      {
        case -1LL:
          n[1] = 1LL;
          LOBYTE(v95) = 0;
          BYTE12(v93) = 1;
          goto LABEL_85;
        case -2LL:
          v59 = strlen((const char *)n[0]);
          LOBYTE(v95) = 0;
          n[1] = v59;
          BYTE12(v93) = 1;
LABEL_85:
          if ( !((unsigned __int8)v25 & (v23 > 9)) )
          {
            ++v24;
            goto LABEL_88;
          }
          if ( v24 < 5 * v23 )
          {
            ++v24;
            v25 &= v23 > 9;
            goto LABEL_88;
          }
LABEL_106:
          v51 = v24 - v79;
          if ( v24 == v79 )
          {
            if ( !v88 )
              goto LABEL_130;
            if ( !v91 )
              goto LABEL_134;
LABEL_133:
            if ( v92 )
              goto LABEL_134;
LABEL_115:
            v25 = sub_405D20(a1, a2, (char **)&ps);
            if ( v25 )
              return ps;
            v53 = v95;
LABEL_135:
            v79 = v24++;
            if ( !v53 )
              goto LABEL_88;
            goto LABEL_37;
          }
          if ( !v88 )
            goto LABEL_110;
          if ( v91 )
            goto LABEL_113;
          while ( 2 )
          {
            while ( 2 )
            {
              v88 = 0;
              s += v90;
              if ( !--v51 )
                goto LABEL_130;
LABEL_110:
              if ( !v86 )
              {
                if ( ((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
                {
                  v90 = 1LL;
                  v52 = *s;
                  v91 = 1;
                  v92 = v52;
                  v88 = 1;
LABEL_113:
                  if ( !v92 )
                  {
                    if ( v88 )
                      goto LABEL_115;
LABEL_130:
                    if ( !v86 )
                    {
                      if ( ((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1 )
                      {
                        v90 = 1LL;
                        v60 = *s;
                        v91 = 1;
                        v92 = v60;
                        v88 = 1;
                        goto LABEL_133;
                      }
                      if ( !mbsinit(&v87) )
                        goto LABEL_173;
                      v86 = 1;
                    }
                    v64 = __ctype_get_mb_cur_max();
                    v65 = s;
                    v66 = sub_409040(s, v64);
                    v67 = sub_40B170(&v92, v65, v66, &v87);
                    v90 = v67;
                    if ( v67 == -1 )
                    {
                      v90 = 1LL;
                      v91 = 0;
                      v88 = 1;
                    }
                    else
                    {
                      if ( v67 != -2 )
                      {
                        if ( !v67 )
                        {
                          v90 = 1LL;
                          if ( *s )
                            goto LABEL_174;
                          if ( v92 )
                            goto LABEL_162;
                        }
                        v91 = 1;
                        if ( mbsinit(&v87) )
                          v86 = 0;
                        v88 = 1;
                        goto LABEL_133;
                      }
                      v73 = strlen(s);
                      v91 = 0;
                      v90 = v73;
                      v88 = 1;
                    }
LABEL_134:
                    v53 = v95;
                    v25 = 1;
                    goto LABEL_135;
                  }
                  continue;
                }
                if ( !mbsinit(&v87) )
                  goto LABEL_173;
                v86 = 1;
              }
              break;
            }
            v54 = __ctype_get_mb_cur_max();
            v55 = s;
            v56 = sub_409040(s, v54);
            v57 = sub_40B170(&v92, v55, v56, &v87);
            v90 = v57;
            switch ( v57 )
            {
              case -1LL:
                v90 = 1LL;
                v91 = 0;
                continue;
              case -2LL:
                v58 = strlen(s);
                v91 = 0;
                v90 = v58;
                continue;
              case 0LL:
                v90 = 1LL;
                if ( *s )
                  goto LABEL_174;
                if ( v92 )
                  goto LABEL_162;
                break;
            }
            break;
          }
          v91 = 1;
          if ( mbsinit(&v87) )
            v86 = 0;
          v88 = 1;
          goto LABEL_113;
        case 0LL:
          n[1] = 1LL;
          if ( *(_BYTE *)n[0] )
            goto LABEL_174;
          if ( DWORD1(v95) )
            goto LABEL_162;
          break;
      }
      LOBYTE(v95) = 1;
      if ( mbsinit((const mbstate_t *)((char *)&v93 + 4)) )
        LOBYTE(v93) = 0;
      BYTE12(v93) = 1;
LABEL_33:
      if ( !DWORD1(v95) )
        return 0LL;
      if ( (unsigned __int8)v25 & (v23 > 9) )
      {
        if ( v24 >= 5 * v23 )
          goto LABEL_106;
        ++v24;
        v25 &= v23 > 9;
      }
      else
      {
        ++v24;
      }
LABEL_37:
      if ( v84 )
      {
        if ( DWORD1(v95) == v85 )
          goto LABEL_39;
LABEL_66:
        v41 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v41 = n[1];
      if ( n[1] == v83 && !memcmp((const void *)n[0], v82, n[1]) )
      {
LABEL_39:
        v27 = *a2;
        v28 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v29 = _mm_load_si128((const __m128i *)&v93);
        LOBYTE(ps.__count) = 0;
        *(__m128i *)s1 = v28;
        v30 = _mm_load_si128((const __m128i *)&v95);
        s1[0] = (void *)(v28.m128i_i64[1] + v28.m128i_i64[0]);
        v31 = _mm_load_si128((const __m128i *)&v96);
        *(__m128i *)&v97[0].__count = v29;
        v99 = v30;
        v32 = dword_40F520[(unsigned __int8)v27 >> 5];
        v100 = v31;
        v97[1].__wchb[0] = 0;
        v102 = 0;
        *(mbstate_t *)((char *)&ps + 4) = 0LL;
        if ( (v32 >> v27) & 1 )
        {
          v104 = 1LL;
          v106 = v27;
          v105 = 1;
          v102 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
        {
          LOBYTE(ps.__count) = 1;
          v61 = __ctype_get_mb_cur_max();
          v78 = s2;
          v62 = sub_409040(s2, v61);
          v63 = sub_40B170(&v106, v78, v62, &ps.4);
          v104 = v63;
          if ( v63 == -1 )
          {
            v104 = 1LL;
            v105 = 0;
          }
          else if ( v63 == -2 )
          {
            v72 = strlen((const char *)s2);
            v105 = 0;
            v104 = v72;
          }
          else
          {
            if ( !v63 )
            {
              v104 = 1LL;
              if ( !*(_BYTE *)s2 )
              {
                if ( !v106 )
                  goto LABEL_143;
LABEL_162:
                sub_405D00();
              }
LABEL_174:
              __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
            }
LABEL_143:
            v105 = 1;
            if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
              LOBYTE(ps.__count) = 0;
            v102 = 1;
LABEL_41:
            if ( !v106 )
              abort();
          }
          v102 = 0;
          ++v24;
          s2 = (char *)s2 + v104;
          while ( 2 )
          {
            if ( LOBYTE(ps.__count) )
            {
LABEL_55:
              v37 = __ctype_get_mb_cur_max();
              v38 = s2;
              v39 = sub_409040(s2, v37);
              v40 = sub_40B170(&v106, v38, v39, &ps.4);
              v104 = v40;
              if ( v40 == -1 )
              {
                v104 = 1LL;
                v105 = 0;
                v102 = 1;
              }
              else if ( v40 == -2 )
              {
                v49 = strlen((const char *)s2);
                v105 = 0;
                v104 = v49;
                v102 = 1;
              }
              else
              {
                if ( !v40 )
                {
                  v104 = 1LL;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_174;
                  if ( v106 )
                    goto LABEL_162;
                }
                v105 = 1;
                if ( mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  LOBYTE(ps.__count) = 0;
                v102 = 1;
                if ( !v106 )
                  return (mbstate_t)n[0];
              }
            }
            else
            {
              if ( !(((unsigned int)dword_40F520[(*(_BYTE *)s2 >> 5) & 7] >> *(_BYTE *)s2) & 1) )
              {
                if ( !mbsinit((mbstate_t *)((char *)&ps + 4)) )
                  goto LABEL_173;
                LOBYTE(ps.__count) = 1;
                goto LABEL_55;
              }
              v104 = 1LL;
              v33 = *(char *)s2;
              v105 = 1;
              v106 = v33;
              v102 = 1;
              if ( !v33 )
                return (mbstate_t)n[0];
            }
            if ( !v97[1].__wchb[0] )
            {
              if ( !LOBYTE(v97[0].__count) )
              {
                if ( ((unsigned int)dword_40F520[(*(_BYTE *)s1[0] >> 5) & 7] >> *(_BYTE *)s1[0]) & 1 )
                {
                  s1[1] = (void *)1;
                  v34 = *(char *)s1[0];
                  v99.m128i_i8[0] = 1;
                  v99.m128i_i32[1] = v34;
                  v97[1].__wchb[0] = 1;
LABEL_49:
                  v35 = v99.m128i_i32[1];
                  if ( !v99.m128i_i32[1] )
                    return 0LL;
LABEL_50:
                  if ( v105 )
                  {
                    v36 = v106 != v35;
LABEL_52:
                    if ( v36 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned __int64)s1[1];
                    ++v24;
                    s2 = (char *)s2 + v104;
                    v97[1].__wchb[0] = 0;
                    v102 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != (void *)v104 )
                    goto LABEL_66;
                  v36 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((mbstate_t *)((char *)v97 + 4)) )
                  goto LABEL_173;
                LOBYTE(v97[0].__count) = 1;
              }
              v42 = __ctype_get_mb_cur_max();
              v43 = s1[0];
              v44 = sub_409040(s1[0], v42);
              v45 = (void *)sub_40B170((char *)v99.m128i_i64 + 4, v43, v44, &v97[0].4);
              s1[1] = v45;
              if ( v45 == (void *)-1LL )
              {
                s1[1] = (void *)1;
                v99.m128i_i8[0] = 0;
                v97[1].__wchb[0] = 1;
              }
              else
              {
                if ( v45 != (void *)-2LL )
                {
                  if ( !v45 )
                  {
                    s1[1] = (void *)1;
                    if ( *(_BYTE *)s1[0] )
                      goto LABEL_174;
                    if ( v99.m128i_i32[1] )
                      goto LABEL_162;
                  }
                  v99.m128i_i8[0] = 1;
                  if ( mbsinit((mbstate_t *)((char *)v97 + 4)) )
                    LOBYTE(v97[0].__count) = 0;
                  v35 = v99.m128i_i32[1];
                  v97[1].__wchb[0] = 1;
                  if ( !v99.m128i_i32[1] )
                    return 0LL;
                  goto LABEL_50;
                }
                v50 = (void *)strlen((const char *)s1[0]);
                v99.m128i_i8[0] = 0;
                s1[1] = v50;
                v97[1].__wchb[0] = 1;
              }
              goto LABEL_65;
            }
            break;
          }
          if ( v99.m128i_i8[0] )
            goto LABEL_49;
          goto LABEL_65;
        }
LABEL_173:
        __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v41;
      ++v23;
      BYTE12(v93) = 0;
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
    v14 = v9 + 1;
    v15 = (unsigned __int8 *)(v3 + 1);
    if ( v4 != v6 )
    {
      if ( !v3[1] )
        return 0LL;
      goto LABEL_12;
    }
    v18 = *(_BYTE *)(v2 + 1);
    if ( !v18 )
      return (mbstate_t)v3;
    if ( !*v15 )
      return 0LL;
    v14 = v9 + 2;
    if ( v18 == *v15 )
      break;
LABEL_12:
    LOBYTE(v9) = v11 & (v8 > 9);
    v16 = (unsigned int)v9;
    if ( (unsigned __int8)v11 & (v8 > 9) )
    {
      if ( v14 < 5 * v8 || v7 && (v75 = v7, v12 = strnlen(v7, v14 - v10), v10 = v14, v7 = &v75[v12], v75[v12]) )
      {
        v11 = v16;
      }
      else
      {
        v76 = v10;
        v13 = strlen((const char *)v2);
        v11 = sub_405B80(v13, &ps, v16, v15, v2);
        v10 = v76;
        if ( v11 )
          return ps;
        v7 = 0LL;
      }
    }
    v6 = *v15;
    v3 = (char *)v15;
    v9 = v14;
  }
  v19 = -(__int64)v9;
  v20 = v2 + v19;
  v9 = (unsigned __int64)&v3[v19];
  while ( 1 )
  {
    v22 = *(_BYTE *)(v20 + v14);
    if ( !v22 )
      return (mbstate_t)v3;
    v21 = *(_BYTE *)(v9 + v14);
    if ( !v21 )
      return 0LL;
    ++v14;
    if ( v22 != v21 )
      goto LABEL_12;
  }
}

char *__fastcall sub_4075C0(const char *a1)
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
  qword_612528 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_407660(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40B320();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40DDD9;
      if ( !v5 )
        v2 = (char *)&unk_40DDCE;
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
    v2 = (char *)&unk_40DDD5;
    if ( !v5 )
      v2 = (char *)&unk_40DDD2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "*iter->cur.ptr == '\\0'" + 21;
  return v6;
}

unsigned __int64 __fastcall sub_407760(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
{
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  int v11; // ebp
  char v12; // zf
  size_t v13; // rax
  int v14; // edx
  int v15; // er11
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // r11
  int v20; // er10
  unsigned __int64 v21; // r13
  int v22; // er8
  char *v23; // r9
  size_t v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r12
  bool v27; // al
  const char *v28; // rax
  char i; // al
  size_t v30; // rax
  bool v31; // al
  char v32; // cl
  int v33; // eax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  const unsigned __int16 **v36; // rax
  unsigned __int64 v37; // rcx
  int v38; // edx
  unsigned __int64 result; // rax
  __int64 v40; // rsi
  char v41; // dl
  const char *v42; // rax
  size_t v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // r15
  char *v48; // rdx
  unsigned __int64 v49; // rcx
  int v50; // eax
  char v51; // si
  unsigned __int64 v52; // rsi
  char *v53; // rdi
  unsigned __int64 v54; // rax
  int v55; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 v56; // [rsp+Ch] [rbp-ACh]
  unsigned __int64 v57; // [rsp+10h] [rbp-A8h]
  char v58; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+10h] [rbp-A8h]
  char *s; // [rsp+18h] [rbp-A0h]
  size_t n; // [rsp+20h] [rbp-98h]
  char *v62; // [rsp+28h] [rbp-90h]
  int v63; // [rsp+28h] [rbp-90h]
  unsigned __int8 v64; // [rsp+28h] [rbp-90h]
  char *v65; // [rsp+28h] [rbp-90h]
  unsigned __int64 v66; // [rsp+28h] [rbp-90h]
  unsigned __int8 v67; // [rsp+30h] [rbp-88h]
  unsigned __int8 v68; // [rsp+30h] [rbp-88h]
  unsigned __int64 v69; // [rsp+30h] [rbp-88h]
  char v70; // [rsp+30h] [rbp-88h]
  int v71; // [rsp+30h] [rbp-88h]
  int v72; // [rsp+38h] [rbp-80h]
  unsigned __int64 v73; // [rsp+38h] [rbp-80h]
  int v74; // [rsp+38h] [rbp-80h]
  int v75; // [rsp+38h] [rbp-80h]
  __int64 v76; // [rsp+38h] [rbp-80h]
  int v77; // [rsp+40h] [rbp-78h]
  unsigned __int64 v78; // [rsp+40h] [rbp-78h]
  const char *s2; // [rsp+48h] [rbp-70h]
  size_t v80; // [rsp+50h] [rbp-68h]
  char v81; // [rsp+58h] [rbp-60h]
  bool v82; // [rsp+5Dh] [rbp-5Bh]
  unsigned __int8 v83; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int64 v84; // [rsp+60h] [rbp-58h]
  char *v85; // [rsp+68h] [rbp-50h]
  wint_t wc; // [rsp+74h] [rbp-44h]
  mbstate_t ps; // [rsp+78h] [rbp-40h]

  v9 = (__int64)a1;
  v10 = a2;
  v11 = a6 & 2;
  s = a3;
  v57 = a4;
  v55 = a5;
  v81 = a6;
  v13 = __ctype_get_mb_cur_max();
  v15 = v55;
  v80 = v13;
  v16 = v57;
  switch ( v55 )
  {
    case 0:
      v82 = 0;
      v17 = 0LL;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v56 = 0;
        goto LABEL_38;
      }
      v82 = 1;
      v17 = 0LL;
      v56 = 0;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    case 3:
      v82 = 1;
      v17 = 0LL;
      v15 = 2;
      v56 = 1;
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
        v56 = 0;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      else
      {
        v56 = 1;
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
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v82 = 0;
        v17 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v82 = 1;
      v17 = 0LL;
      v15 = 5;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v82 = 0;
      v17 = 0LL;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_407660("`", v55);
        v28 = sub_407660("'", v55);
        v16 = v57;
        v15 = v55;
        a9 = (char *)v28;
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
      v63 = v15;
      v59 = v16;
      v82 = v11 != 0;
      v30 = strlen(a9);
      v56 = 1;
      v16 = v59;
      n = v30;
      v15 = v63;
      s2 = a9;
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
LABEL_4:
  while ( 2 )
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
          v41 = *s2;
          if ( *s2 )
          {
            v42 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                *(_BYTE *)(v9 + v17) = v41;
              v41 = v42[++v17];
            }
            while ( v41 );
          }
        }
      }
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 0;
      return v17;
    }
    v23 = &s[v21];
    v58 = v56 & (v20 != 2);
    if ( v56 & (v20 != 2) )
    {
      if ( !n )
        goto LABEL_271;
      if ( v19 == -1LL && n > 1 )
      {
        v72 = v20;
        v67 = v22;
        v24 = strlen(s);
        v20 = v72;
        v22 = v67;
        v23 = &s[v21];
        v19 = v24;
      }
      if ( v21 + n > v19 )
        goto LABEL_271;
      v77 = v20;
      v73 = v19;
      v68 = v22;
      v62 = v23;
      v25 = memcmp(v23, s2, n);
      v23 = v62;
      v22 = v68;
      v19 = v73;
      v20 = v77;
      if ( v25 )
      {
LABEL_271:
        LOBYTE(v26) = *v23;
        switch ( *v23 )
        {
          case 0:
            goto LABEL_103;
          case 7:
LABEL_94:
            LOBYTE(v26) = 97;
            v27 = 0;
            goto LABEL_91;
          case 8:
LABEL_93:
            LOBYTE(v26) = 98;
            v27 = 0;
            goto LABEL_91;
          case 9:
LABEL_102:
            LOBYTE(v26) = 116;
            v27 = 0;
            goto LABEL_91;
          case 10:
LABEL_90:
            LOBYTE(v26) = 110;
            v27 = 0;
            goto LABEL_91;
          case 11:
LABEL_101:
            LOBYTE(v26) = 118;
            v27 = 0;
            goto LABEL_91;
          case 12:
LABEL_100:
            LOBYTE(v26) = 102;
            v27 = 0;
LABEL_91:
            if ( v82 )
              return sub_407760(v9, v10, s);
            goto LABEL_21;
          case 13:
            v58 = 0;
LABEL_96:
            LOBYTE(v26) = 13;
            v32 = 114;
            LOBYTE(v14) = v20 == 2;
            goto LABEL_88;
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
            v58 = 0;
LABEL_85:
            v14 = 0;
            goto LABEL_65;
          case 35:
          case 126:
            v58 = 0;
LABEL_98:
            if ( v21 )
              goto LABEL_17;
            v14 = 0;
            goto LABEL_65;
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
            v58 = 0;
            goto LABEL_17;
          case 39:
            v58 = 0;
            goto LABEL_73;
          case 63:
            v58 = 0;
            goto LABEL_69;
          case 92:
            v58 = 0;
            goto LABEL_87;
          case 123:
          case 125:
            v58 = 0;
            goto LABEL_60;
          default:
            v58 = 0;
            goto LABEL_124;
        }
      }
      if ( !v82 )
      {
        LOBYTE(v26) = *v62;
        switch ( *v62 )
        {
          case 0:
            goto LABEL_105;
          case 7:
            goto LABEL_94;
          case 8:
            goto LABEL_93;
          case 9:
            goto LABEL_102;
          case 10:
            goto LABEL_90;
          case 11:
            goto LABEL_101;
          case 12:
            goto LABEL_100;
          case 13:
            goto LABEL_96;
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
          case 35:
          case 126:
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
            goto LABEL_17;
          case 39:
            goto LABEL_73;
          case 63:
            goto LABEL_69;
          case 92:
            goto LABEL_87;
          case 123:
          case 125:
            goto LABEL_60;
          default:
            goto LABEL_124;
        }
      }
      return sub_407760(v9, v10, s);
    }
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        if ( !v56 )
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
            LOBYTE(v26) = 0;
            goto LABEL_144;
          }
          v11 = 0;
          if ( a7 )
          {
            v58 = 0;
            LOBYTE(v26) = 0;
            goto LABEL_18;
          }
          LOBYTE(v26) = 0;
          goto LABEL_122;
        }
LABEL_103:
        if ( v82 )
          return sub_407760(v9, v10, s);
        v58 = 0;
LABEL_105:
        LOBYTE(v14) = v20 == 2;
        v33 = v22 ^ 1;
        LOBYTE(v33) = (v20 == 2) & (v22 ^ 1);
        if ( (_BYTE)v33 )
        {
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 36;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v34 = v17 + 3;
          if ( v10 <= v17 + 3 )
          {
            v17 += 4LL;
            ++v21;
            v22 = v33;
            LOBYTE(v26) = 48;
            goto LABEL_82;
          }
          v22 = v33;
        }
        else
        {
          v34 = v17;
          if ( v17 >= v10 )
            goto LABEL_115;
        }
        *(_BYTE *)(v9 + v34) = 92;
LABEL_115:
        v17 = v34 + 1;
        v35 = v21 + 1;
        if ( v20 == 2 )
        {
          ++v21;
          LOBYTE(v26) = 48;
          goto LABEL_82;
        }
        LOBYTE(v26) = 48;
        if ( v35 < v19 && (unsigned __int8)(s[v35] - 48) <= 9u )
        {
          if ( v10 > v17 )
            *(_BYTE *)(v9 + v17) = 48;
          if ( v10 > v34 + 2 )
            *(_BYTE *)(v9 + v34 + 2) = 48;
          v17 = v34 + 3;
          LOBYTE(v26) = 48;
        }
        goto LABEL_118;
      case 7:
        LOBYTE(v26) = 7;
        v32 = 97;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 8:
        LOBYTE(v26) = 8;
        v32 = 98;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 9:
        LOBYTE(v26) = 9;
        v32 = 116;
        goto LABEL_130;
      case 10:
        LOBYTE(v26) = 10;
        v32 = 110;
        goto LABEL_130;
      case 11:
        LOBYTE(v26) = 11;
        v32 = 118;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 12:
        LOBYTE(v26) = 12;
        v32 = 102;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 13:
        LOBYTE(v26) = 13;
        v32 = 114;
LABEL_130:
        LOBYTE(v14) = v20 == 2;
        v58 = v20 == 2 && v82;
        if ( v58 )
          return sub_407760(v9, v10, s);
        goto LABEL_88;
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
        goto LABEL_64;
      case 35:
      case 126:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_63;
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
      case 39:
LABEL_73:
        v14 = 0;
        LOBYTE(v26) = 39;
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
        LOBYTE(v26) = 39;
LABEL_82:
        if ( !v58 )
          goto LABEL_33;
        goto LABEL_67;
      case 63:
LABEL_69:
        if ( v20 == 2 )
        {
          if ( v82 )
            return sub_407760(v9, v10, s);
          v11 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_66;
        }
        if ( v20 != 5 )
        {
          LOBYTE(v26) = 63;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_65;
        }
        if ( !(v81 & 4) )
        {
          v14 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_65;
        }
        v14 = 0;
        LOBYTE(v26) = 63;
        if ( v21 + 2 >= v19 || s[v21 + 1] != 63 )
          goto LABEL_65;
        v26 = (unsigned __int8)s[v21 + 2];
        if ( (unsigned __int8)v26 > 0x3Eu || (v40 = 8070630310989004800LL, !_bittest64(&v40, v26)) )
        {
          LOBYTE(v26) = 63;
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
LABEL_118:
        if ( !v56 || (_BYTE)v14 )
          goto LABEL_66;
        if ( a7 )
          goto LABEL_18;
        goto LABEL_121;
      case 92:
        if ( v20 == 2 )
        {
          if ( v82 )
            return sub_407760(v9, v10, s);
          ++v21;
          v11 = v22;
          LOBYTE(v26) = 92;
          goto LABEL_144;
        }
LABEL_87:
        v11 = v82 & v56;
        LOBYTE(v26) = 92;
        v32 = 92;
        v14 = v82 & v56;
        LOBYTE(v14) = (n != 0) & v14;
        if ( (_BYTE)v14 )
        {
          ++v21;
          v11 = v22;
          goto LABEL_144;
        }
LABEL_88:
        if ( !v56 )
          goto LABEL_65;
        v27 = v14;
        LOBYTE(v26) = v32;
        goto LABEL_20;
      case 123:
      case 125:
LABEL_60:
        v31 = v19 != 1;
        if ( v19 == -1LL )
          v31 = s[1] != 0;
        LOBYTE(v14) = v20 == 2;
        if ( v31 )
          goto LABEL_65;
LABEL_63:
        if ( v21 )
          goto LABEL_65;
LABEL_64:
        if ( !((unsigned __int8)v14 & v82) )
          goto LABEL_65;
        return sub_407760(v9, v10, s);
      default:
LABEL_124:
        if ( v80 == 1 )
        {
          v74 = v20;
          v69 = v19;
          v64 = v22;
          v36 = __ctype_b_loc();
          v22 = v64;
          v19 = v69;
          v20 = v74;
          v37 = 1LL;
          v38 = (*v36)[(unsigned __int8)v26];
          LOWORD(v38) = (unsigned __int16)v38 >> 14;
          v14 = v38 ^ 1;
          LOBYTE(v14) = v56 & v14;
          goto LABEL_126;
        }
        ps = 0LL;
        if ( v19 == -1LL )
        {
          v75 = v20;
          v70 = v22;
          v65 = v23;
          v43 = strlen(s);
          v20 = v75;
          LOBYTE(v22) = v70;
          v23 = v65;
          v19 = v43;
        }
        v84 = v17;
        v83 = v22;
        v44 = 0LL;
        v85 = v23;
        v76 = v9;
        v78 = v10;
        v66 = v19;
        v71 = v20;
        break;
    }
    break;
  }
  while ( 1 )
  {
    v45 = v21 + v44;
    v46 = sub_40B170(&wc, &s[v21 + v44], v66 - (v21 + v44), &ps);
    v47 = v46;
    switch ( v46 )
    {
      case 0LL:
        v11 ^= 1u;
        v37 = v44;
        v9 = v76;
        v22 = v83;
        v17 = v84;
        v10 = v78;
        v14 = (unsigned __int8)(v11 & v56);
        v19 = v66;
        v20 = v71;
        goto LABEL_252;
      case -1LL:
        v37 = v44;
        v22 = v83;
        v17 = v84;
        v9 = v76;
        v10 = v78;
        v19 = v66;
        v20 = v71;
        v14 = v56;
        goto LABEL_252;
      case -2LL:
        v19 = v66;
        v52 = v21 + v44;
        v53 = &s[v21 + v44];
        v54 = v44;
        v37 = v44;
        v22 = v83;
        v17 = v84;
        v9 = v76;
        v10 = v78;
        v20 = v71;
        if ( v52 < v66 && *v53 )
        {
          do
            ++v54;
          while ( v66 > v21 + v54 && v85[v54] );
          v37 = v54;
        }
        v14 = v56;
LABEL_252:
        if ( v37 > 1 )
          goto LABEL_206;
LABEL_126:
        if ( (_BYTE)v14 )
        {
          v14 = v56;
LABEL_206:
          v49 = v21 + v37;
          v50 = 0;
          v51 = v58;
          while ( 1 )
          {
            if ( (_BYTE)v14 )
            {
              if ( v82 )
                return sub_407760(v9, v10, s);
              if ( (v20 == 2) & ((unsigned __int8)v22 ^ 1) )
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
                *(_BYTE *)(v9 + v17 + 1) = ((unsigned __int8)v26 >> 6) + 48;
              if ( v10 > v17 + 2 )
                *(_BYTE *)(v9 + v17 + 2) = (((unsigned __int8)v26 >> 3) & 7) + 48;
              ++v21;
              v17 += 3LL;
              LOBYTE(v26) = (v26 & 7) + 48;
              if ( v49 <= v21 )
                goto LABEL_33;
              v50 = v14;
            }
            else
            {
              v11 = v22 & (v50 ^ 1);
              if ( v51 )
              {
                if ( v17 < v10 )
                  *(_BYTE *)(v9 + v17) = 92;
                ++v17;
              }
              if ( ++v21 >= v49 )
                goto LABEL_144;
              if ( (_BYTE)v11 )
              {
                if ( v17 < v10 )
                  *(_BYTE *)(v9 + v17) = 39;
                if ( v10 > v17 + 1 )
                  *(_BYTE *)(v9 + v17 + 1) = 39;
                v17 += 2LL;
                v51 = 0;
                v22 = 0;
              }
              else
              {
                v51 = 0;
              }
            }
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = v26;
            LOBYTE(v26) = s[v21];
            ++v17;
          }
        }
LABEL_127:
        LOBYTE(v14) = v20 == 2;
LABEL_65:
        v11 = (v14 | v56 ^ 1) ^ 1;
        LOBYTE(v11) = v82 | (v14 | v56 ^ 1) ^ 1;
        if ( v82 | (unsigned __int8)(v14 | v56 ^ 1) ^ 1 )
        {
LABEL_17:
          v11 = 0;
          if ( a7 )
          {
LABEL_18:
            if ( (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v26 >> 5)) >> v26) & 1 )
            {
              v27 = v20 == 2;
LABEL_20:
              if ( v82 )
                return sub_407760(v9, v10, s);
LABEL_21:
              ++v21;
              goto LABEL_22;
            }
          }
LABEL_121:
          v27 = v20 == 2;
          if ( v58 )
            goto LABEL_20;
LABEL_122:
          ++v21;
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
          goto LABEL_33;
        }
LABEL_66:
        ++v21;
        if ( !v58 )
        {
          v11 = v22 & (v11 ^ 1);
          goto LABEL_144;
        }
LABEL_67:
        v27 = v20 == 2;
LABEL_22:
        v14 = v22 ^ 1;
        if ( v27 & ((unsigned __int8)v22 ^ 1) )
        {
          if ( v10 > v17 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 36;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v17 += 3LL;
          LOBYTE(v14) = v27 & (v22 ^ 1);
          v22 = v14;
        }
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = 92;
        ++v17;
LABEL_33:
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = v26;
        ++v17;
        goto LABEL_4;
    }
    if ( v82 && v71 == 2 && v46 != 1 )
      break;
LABEL_187:
    if ( !iswprint(wc) )
      v11 = 0;
    v44 += v47;
    if ( mbsinit(&ps) )
    {
      v37 = v44;
      v22 = v83;
      v17 = v84;
      v14 = v11 ^ 1;
      v9 = v76;
      v10 = v78;
      v19 = v66;
      v20 = v71;
      LOBYTE(v14) = v56 & (v11 ^ 1);
      goto LABEL_252;
    }
  }
  v48 = &s[v45 + 1];
  while ( (unsigned __int8)(*v48 - 91) > 0x21u || !((1LL << (*v48 - 91)) & 0x20000002BLL) )
  {
    if ( &s[v46 + v45] == ++v48 )
      goto LABEL_187;
  }
  v9 = v76;
  v10 = v78;
  return sub_407760(v9, v10, s);
}

unsigned __int64 __fastcall sub_407760(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
{
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  int v11; // ebp
  char v12; // zf
  size_t v13; // rax
  int v14; // edx
  int v15; // er11
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // r11
  int v20; // er10
  unsigned __int64 v21; // r13
  int v22; // er8
  char *v23; // r9
  size_t v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r12
  bool v27; // al
  const char *v28; // rax
  char i; // al
  size_t v30; // rax
  bool v31; // al
  char v32; // cl
  int v33; // eax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  const unsigned __int16 **v36; // rax
  unsigned __int64 v37; // rcx
  int v38; // edx
  unsigned __int64 result; // rax
  __int64 v40; // rsi
  char v41; // dl
  const char *v42; // rax
  size_t v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // r15
  char *v48; // rdx
  unsigned __int64 v49; // rcx
  int v50; // eax
  char v51; // si
  unsigned __int64 v52; // rsi
  char *v53; // rdi
  unsigned __int64 v54; // rax
  int v55; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 v56; // [rsp+Ch] [rbp-ACh]
  unsigned __int64 v57; // [rsp+10h] [rbp-A8h]
  char v58; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+10h] [rbp-A8h]
  char *s; // [rsp+18h] [rbp-A0h]
  size_t n; // [rsp+20h] [rbp-98h]
  char *v62; // [rsp+28h] [rbp-90h]
  int v63; // [rsp+28h] [rbp-90h]
  unsigned __int8 v64; // [rsp+28h] [rbp-90h]
  char *v65; // [rsp+28h] [rbp-90h]
  unsigned __int64 v66; // [rsp+28h] [rbp-90h]
  unsigned __int8 v67; // [rsp+30h] [rbp-88h]
  unsigned __int8 v68; // [rsp+30h] [rbp-88h]
  unsigned __int64 v69; // [rsp+30h] [rbp-88h]
  char v70; // [rsp+30h] [rbp-88h]
  int v71; // [rsp+30h] [rbp-88h]
  int v72; // [rsp+38h] [rbp-80h]
  unsigned __int64 v73; // [rsp+38h] [rbp-80h]
  int v74; // [rsp+38h] [rbp-80h]
  int v75; // [rsp+38h] [rbp-80h]
  __int64 v76; // [rsp+38h] [rbp-80h]
  int v77; // [rsp+40h] [rbp-78h]
  unsigned __int64 v78; // [rsp+40h] [rbp-78h]
  const char *s2; // [rsp+48h] [rbp-70h]
  size_t v80; // [rsp+50h] [rbp-68h]
  char v81; // [rsp+58h] [rbp-60h]
  bool v82; // [rsp+5Dh] [rbp-5Bh]
  unsigned __int8 v83; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int64 v84; // [rsp+60h] [rbp-58h]
  char *v85; // [rsp+68h] [rbp-50h]
  wint_t wc; // [rsp+74h] [rbp-44h]
  mbstate_t ps; // [rsp+78h] [rbp-40h]

  v9 = (__int64)a1;
  v10 = a2;
  v11 = a6 & 2;
  s = a3;
  v57 = a4;
  v55 = a5;
  v81 = a6;
  v13 = __ctype_get_mb_cur_max();
  v15 = v55;
  v80 = v13;
  v16 = v57;
  switch ( v55 )
  {
    case 0:
      v82 = 0;
      v17 = 0LL;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v56 = 0;
        goto LABEL_38;
      }
      v82 = 1;
      v17 = 0LL;
      v56 = 0;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    case 3:
      v82 = 1;
      v17 = 0LL;
      v15 = 2;
      v56 = 1;
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
        v56 = 0;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      else
      {
        v56 = 1;
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
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v82 = 0;
        v17 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v82 = 1;
      v17 = 0LL;
      v15 = 5;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v82 = 0;
      v17 = 0LL;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_407660("`", v55);
        v28 = sub_407660("'", v55);
        v16 = v57;
        v15 = v55;
        a9 = (char *)v28;
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
      v63 = v15;
      v59 = v16;
      v82 = v11 != 0;
      v30 = strlen(a9);
      v56 = 1;
      v16 = v59;
      n = v30;
      v15 = v63;
      s2 = a9;
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
LABEL_4:
  while ( 2 )
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
          v41 = *s2;
          if ( *s2 )
          {
            v42 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                *(_BYTE *)(v9 + v17) = v41;
              v41 = v42[++v17];
            }
            while ( v41 );
          }
        }
      }
      if ( v17 < v10 )
        *(_BYTE *)(v9 + v17) = 0;
      return v17;
    }
    v23 = &s[v21];
    v58 = v56 & (v20 != 2);
    if ( v56 & (v20 != 2) )
    {
      if ( !n )
        goto LABEL_271;
      if ( v19 == -1LL && n > 1 )
      {
        v72 = v20;
        v67 = v22;
        v24 = strlen(s);
        v20 = v72;
        v22 = v67;
        v23 = &s[v21];
        v19 = v24;
      }
      if ( v21 + n > v19 )
        goto LABEL_271;
      v77 = v20;
      v73 = v19;
      v68 = v22;
      v62 = v23;
      v25 = memcmp(v23, s2, n);
      v23 = v62;
      v22 = v68;
      v19 = v73;
      v20 = v77;
      if ( v25 )
      {
LABEL_271:
        LOBYTE(v26) = *v23;
        switch ( *v23 )
        {
          case 0:
            goto LABEL_103;
          case 7:
LABEL_94:
            LOBYTE(v26) = 97;
            v27 = 0;
            goto LABEL_91;
          case 8:
LABEL_93:
            LOBYTE(v26) = 98;
            v27 = 0;
            goto LABEL_91;
          case 9:
LABEL_102:
            LOBYTE(v26) = 116;
            v27 = 0;
            goto LABEL_91;
          case 10:
LABEL_90:
            LOBYTE(v26) = 110;
            v27 = 0;
            goto LABEL_91;
          case 11:
LABEL_101:
            LOBYTE(v26) = 118;
            v27 = 0;
            goto LABEL_91;
          case 12:
LABEL_100:
            LOBYTE(v26) = 102;
            v27 = 0;
LABEL_91:
            if ( v82 )
              return sub_407760(v9, v10, s);
            goto LABEL_21;
          case 13:
            v58 = 0;
LABEL_96:
            LOBYTE(v26) = 13;
            v32 = 114;
            LOBYTE(v14) = v20 == 2;
            goto LABEL_88;
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
            v58 = 0;
LABEL_85:
            v14 = 0;
            goto LABEL_65;
          case 35:
          case 126:
            v58 = 0;
LABEL_98:
            if ( v21 )
              goto LABEL_17;
            v14 = 0;
            goto LABEL_65;
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
            v58 = 0;
            goto LABEL_17;
          case 39:
            v58 = 0;
            goto LABEL_73;
          case 63:
            v58 = 0;
            goto LABEL_69;
          case 92:
            v58 = 0;
            goto LABEL_87;
          case 123:
          case 125:
            v58 = 0;
            goto LABEL_60;
          default:
            v58 = 0;
            goto LABEL_124;
        }
      }
      if ( !v82 )
      {
        LOBYTE(v26) = *v62;
        switch ( *v62 )
        {
          case 0:
            goto LABEL_105;
          case 7:
            goto LABEL_94;
          case 8:
            goto LABEL_93;
          case 9:
            goto LABEL_102;
          case 10:
            goto LABEL_90;
          case 11:
            goto LABEL_101;
          case 12:
            goto LABEL_100;
          case 13:
            goto LABEL_96;
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
          case 35:
          case 126:
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
            goto LABEL_17;
          case 39:
            goto LABEL_73;
          case 63:
            goto LABEL_69;
          case 92:
            goto LABEL_87;
          case 123:
          case 125:
            goto LABEL_60;
          default:
            goto LABEL_124;
        }
      }
      return sub_407760(v9, v10, s);
    }
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        if ( !v56 )
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
            LOBYTE(v26) = 0;
            goto LABEL_144;
          }
          v11 = 0;
          if ( a7 )
          {
            v58 = 0;
            LOBYTE(v26) = 0;
            goto LABEL_18;
          }
          LOBYTE(v26) = 0;
          goto LABEL_122;
        }
LABEL_103:
        if ( v82 )
          return sub_407760(v9, v10, s);
        v58 = 0;
LABEL_105:
        LOBYTE(v14) = v20 == 2;
        v33 = v22 ^ 1;
        LOBYTE(v33) = (v20 == 2) & (v22 ^ 1);
        if ( (_BYTE)v33 )
        {
          if ( v17 < v10 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 36;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v34 = v17 + 3;
          if ( v10 <= v17 + 3 )
          {
            v17 += 4LL;
            ++v21;
            v22 = v33;
            LOBYTE(v26) = 48;
            goto LABEL_82;
          }
          v22 = v33;
        }
        else
        {
          v34 = v17;
          if ( v17 >= v10 )
            goto LABEL_115;
        }
        *(_BYTE *)(v9 + v34) = 92;
LABEL_115:
        v17 = v34 + 1;
        v35 = v21 + 1;
        if ( v20 == 2 )
        {
          ++v21;
          LOBYTE(v26) = 48;
          goto LABEL_82;
        }
        LOBYTE(v26) = 48;
        if ( v35 < v19 && (unsigned __int8)(s[v35] - 48) <= 9u )
        {
          if ( v10 > v17 )
            *(_BYTE *)(v9 + v17) = 48;
          if ( v10 > v34 + 2 )
            *(_BYTE *)(v9 + v34 + 2) = 48;
          v17 = v34 + 3;
          LOBYTE(v26) = 48;
        }
        goto LABEL_118;
      case 7:
        LOBYTE(v26) = 7;
        v32 = 97;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 8:
        LOBYTE(v26) = 8;
        v32 = 98;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 9:
        LOBYTE(v26) = 9;
        v32 = 116;
        goto LABEL_130;
      case 10:
        LOBYTE(v26) = 10;
        v32 = 110;
        goto LABEL_130;
      case 11:
        LOBYTE(v26) = 11;
        v32 = 118;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 12:
        LOBYTE(v26) = 12;
        v32 = 102;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 13:
        LOBYTE(v26) = 13;
        v32 = 114;
LABEL_130:
        LOBYTE(v14) = v20 == 2;
        v58 = v20 == 2 && v82;
        if ( v58 )
          return sub_407760(v9, v10, s);
        goto LABEL_88;
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
        goto LABEL_64;
      case 35:
      case 126:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_63;
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
      case 39:
LABEL_73:
        v14 = 0;
        LOBYTE(v26) = 39;
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
        LOBYTE(v26) = 39;
LABEL_82:
        if ( !v58 )
          goto LABEL_33;
        goto LABEL_67;
      case 63:
LABEL_69:
        if ( v20 == 2 )
        {
          if ( v82 )
            return sub_407760(v9, v10, s);
          v11 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_66;
        }
        if ( v20 != 5 )
        {
          LOBYTE(v26) = 63;
          LOBYTE(v14) = v20 == 2;
          goto LABEL_65;
        }
        if ( !(v81 & 4) )
        {
          v14 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_65;
        }
        v14 = 0;
        LOBYTE(v26) = 63;
        if ( v21 + 2 >= v19 || s[v21 + 1] != 63 )
          goto LABEL_65;
        v26 = (unsigned __int8)s[v21 + 2];
        if ( (unsigned __int8)v26 > 0x3Eu || (v40 = 8070630310989004800LL, !_bittest64(&v40, v26)) )
        {
          LOBYTE(v26) = 63;
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
LABEL_118:
        if ( !v56 || (_BYTE)v14 )
          goto LABEL_66;
        if ( a7 )
          goto LABEL_18;
        goto LABEL_121;
      case 92:
        if ( v20 == 2 )
        {
          if ( v82 )
            return sub_407760(v9, v10, s);
          ++v21;
          v11 = v22;
          LOBYTE(v26) = 92;
          goto LABEL_144;
        }
LABEL_87:
        v11 = v82 & v56;
        LOBYTE(v26) = 92;
        v32 = 92;
        v14 = v82 & v56;
        LOBYTE(v14) = (n != 0) & v14;
        if ( (_BYTE)v14 )
        {
          ++v21;
          v11 = v22;
          goto LABEL_144;
        }
LABEL_88:
        if ( !v56 )
          goto LABEL_65;
        v27 = v14;
        LOBYTE(v26) = v32;
        goto LABEL_20;
      case 123:
      case 125:
LABEL_60:
        v31 = v19 != 1;
        if ( v19 == -1LL )
          v31 = s[1] != 0;
        LOBYTE(v14) = v20 == 2;
        if ( v31 )
          goto LABEL_65;
LABEL_63:
        if ( v21 )
          goto LABEL_65;
LABEL_64:
        if ( !((unsigned __int8)v14 & v82) )
          goto LABEL_65;
        return sub_407760(v9, v10, s);
      default:
LABEL_124:
        if ( v80 == 1 )
        {
          v74 = v20;
          v69 = v19;
          v64 = v22;
          v36 = __ctype_b_loc();
          v22 = v64;
          v19 = v69;
          v20 = v74;
          v37 = 1LL;
          v38 = (*v36)[(unsigned __int8)v26];
          LOWORD(v38) = (unsigned __int16)v38 >> 14;
          v14 = v38 ^ 1;
          LOBYTE(v14) = v56 & v14;
          goto LABEL_126;
        }
        ps = 0LL;
        if ( v19 == -1LL )
        {
          v75 = v20;
          v70 = v22;
          v65 = v23;
          v43 = strlen(s);
          v20 = v75;
          LOBYTE(v22) = v70;
          v23 = v65;
          v19 = v43;
        }
        v84 = v17;
        v83 = v22;
        v44 = 0LL;
        v85 = v23;
        v76 = v9;
        v78 = v10;
        v66 = v19;
        v71 = v20;
        break;
    }
    break;
  }
  while ( 1 )
  {
    v45 = v21 + v44;
    v46 = sub_40B170(&wc, &s[v21 + v44], v66 - (v21 + v44), &ps);
    v47 = v46;
    switch ( v46 )
    {
      case 0LL:
        v11 ^= 1u;
        v37 = v44;
        v9 = v76;
        v22 = v83;
        v17 = v84;
        v10 = v78;
        v14 = (unsigned __int8)(v11 & v56);
        v19 = v66;
        v20 = v71;
        goto LABEL_252;
      case -1LL:
        v37 = v44;
        v22 = v83;
        v17 = v84;
        v9 = v76;
        v10 = v78;
        v19 = v66;
        v20 = v71;
        v14 = v56;
        goto LABEL_252;
      case -2LL:
        v19 = v66;
        v52 = v21 + v44;
        v53 = &s[v21 + v44];
        v54 = v44;
        v37 = v44;
        v22 = v83;
        v17 = v84;
        v9 = v76;
        v10 = v78;
        v20 = v71;
        if ( v52 < v66 && *v53 )
        {
          do
            ++v54;
          while ( v66 > v21 + v54 && v85[v54] );
          v37 = v54;
        }
        v14 = v56;
LABEL_252:
        if ( v37 > 1 )
          goto LABEL_206;
LABEL_126:
        if ( (_BYTE)v14 )
        {
          v14 = v56;
LABEL_206:
          v49 = v21 + v37;
          v50 = 0;
          v51 = v58;
          while ( 1 )
          {
            if ( (_BYTE)v14 )
            {
              if ( v82 )
                return sub_407760(v9, v10, s);
              if ( (v20 == 2) & ((unsigned __int8)v22 ^ 1) )
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
                *(_BYTE *)(v9 + v17 + 1) = ((unsigned __int8)v26 >> 6) + 48;
              if ( v10 > v17 + 2 )
                *(_BYTE *)(v9 + v17 + 2) = (((unsigned __int8)v26 >> 3) & 7) + 48;
              ++v21;
              v17 += 3LL;
              LOBYTE(v26) = (v26 & 7) + 48;
              if ( v49 <= v21 )
                goto LABEL_33;
              v50 = v14;
            }
            else
            {
              v11 = v22 & (v50 ^ 1);
              if ( v51 )
              {
                if ( v17 < v10 )
                  *(_BYTE *)(v9 + v17) = 92;
                ++v17;
              }
              if ( ++v21 >= v49 )
                goto LABEL_144;
              if ( (_BYTE)v11 )
              {
                if ( v17 < v10 )
                  *(_BYTE *)(v9 + v17) = 39;
                if ( v10 > v17 + 1 )
                  *(_BYTE *)(v9 + v17 + 1) = 39;
                v17 += 2LL;
                v51 = 0;
                v22 = 0;
              }
              else
              {
                v51 = 0;
              }
            }
            if ( v17 < v10 )
              *(_BYTE *)(v9 + v17) = v26;
            LOBYTE(v26) = s[v21];
            ++v17;
          }
        }
LABEL_127:
        LOBYTE(v14) = v20 == 2;
LABEL_65:
        v11 = (v14 | v56 ^ 1) ^ 1;
        LOBYTE(v11) = v82 | (v14 | v56 ^ 1) ^ 1;
        if ( v82 | (unsigned __int8)(v14 | v56 ^ 1) ^ 1 )
        {
LABEL_17:
          v11 = 0;
          if ( a7 )
          {
LABEL_18:
            if ( (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v26 >> 5)) >> v26) & 1 )
            {
              v27 = v20 == 2;
LABEL_20:
              if ( v82 )
                return sub_407760(v9, v10, s);
LABEL_21:
              ++v21;
              goto LABEL_22;
            }
          }
LABEL_121:
          v27 = v20 == 2;
          if ( v58 )
            goto LABEL_20;
LABEL_122:
          ++v21;
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
          goto LABEL_33;
        }
LABEL_66:
        ++v21;
        if ( !v58 )
        {
          v11 = v22 & (v11 ^ 1);
          goto LABEL_144;
        }
LABEL_67:
        v27 = v20 == 2;
LABEL_22:
        v14 = v22 ^ 1;
        if ( v27 & ((unsigned __int8)v22 ^ 1) )
        {
          if ( v10 > v17 )
            *(_BYTE *)(v9 + v17) = 39;
          if ( v10 > v17 + 1 )
            *(_BYTE *)(v9 + v17 + 1) = 36;
          if ( v10 > v17 + 2 )
            *(_BYTE *)(v9 + v17 + 2) = 39;
          v17 += 3LL;
          LOBYTE(v14) = v27 & (v22 ^ 1);
          v22 = v14;
        }
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = 92;
        ++v17;
LABEL_33:
        if ( v17 < v10 )
          *(_BYTE *)(v9 + v17) = v26;
        ++v17;
        goto LABEL_4;
    }
    if ( v82 && v71 == 2 && v46 != 1 )
      break;
LABEL_187:
    if ( !iswprint(wc) )
      v11 = 0;
    v44 += v47;
    if ( mbsinit(&ps) )
    {
      v37 = v44;
      v22 = v83;
      v17 = v84;
      v14 = v11 ^ 1;
      v9 = v76;
      v10 = v78;
      v19 = v66;
      v20 = v71;
      LOBYTE(v14) = v56 & (v11 ^ 1);
      goto LABEL_252;
    }
  }
  v48 = &s[v45 + 1];
  while ( (unsigned __int8)(*v48 - 91) > 0x21u || !((1LL << (*v48 - 91)) & 0x20000002BLL) )
  {
    if ( &s[v46 + v45] == ++v48 )
      goto LABEL_187;
  }
  v9 = v76;
  v10 = v78;
  return sub_407760(v9, v10, s);
}

_BYTE *__fastcall sub_408770(signed int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  __int128 *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  _BYTE *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rax
  int v17; // er8
  __int128 *v19; // rax
  char *v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v20 = a2;
  v6 = __errno_location();
  v7 = off_612318;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_612330 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( off_612318 == &xmmword_612320 )
    {
      v19 = (__int128 *)sub_4096D0(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      off_612318 = v19;
      *v19 = (__int128)_mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      v10 = (__int128 *)sub_4096D0(off_612318, v9);
      v11 = (unsigned int)(a1 + 1);
      off_612318 = v10;
      v7 = v10;
    }
    memset(&v7[dword_612330], 0, 16 * (v11 - (unsigned int)dword_612330));
    dword_612330 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v21 = *v12;
  v14 = sub_407760(v13, *v12, v20, v4, *(_DWORD *)v5, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v21 <= v14 )
  {
    v15 = v14 + 1;
    *v12 = v14 + 1;
    if ( v13 != (_BYTE *)&unk_612540 )
    {
      v22 = v14 + 1;
      free(v13);
      v15 = v22;
    }
    v16 = (_BYTE *)sub_409680(v15);
    v17 = *(_DWORD *)v5;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_407760(v16, v15, v20, v4, v17, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_408770(signed int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  __int128 *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  _BYTE *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rax
  int v17; // er8
  __int128 *v19; // rax
  char *v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v20 = a2;
  v6 = __errno_location();
  v7 = off_612318;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_612330 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( off_612318 == &xmmword_612320 )
    {
      v19 = (__int128 *)sub_4096D0(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      off_612318 = v19;
      *v19 = (__int128)_mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      v10 = (__int128 *)sub_4096D0(off_612318, v9);
      v11 = (unsigned int)(a1 + 1);
      off_612318 = v10;
      v7 = v10;
    }
    memset(&v7[dword_612330], 0, 16 * (v11 - (unsigned int)dword_612330));
    dword_612330 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v21 = *v12;
  v14 = sub_407760(v13, *v12, v20, v4, *(_DWORD *)v5, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v21 <= v14 )
  {
    v15 = v14 + 1;
    *v12 = v14 + 1;
    if ( v13 != (_BYTE *)&unk_612540 )
    {
      v22 = v14 + 1;
      free(v13);
      v15 = v22;
    }
    v16 = (_BYTE *)sub_409680(v15);
    v17 = *(_DWORD *)v5;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_407760(v16, v15, v20, v4, v17, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_408C90(signed int a1, int a2, char *a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408C90(signed int a1, int a2, char *a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408D00(signed int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_408770(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_408D00(signed int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_408770(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_408D90(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_612670;
  v7 = _mm_load_si128((const __m128i *)&xmmword_612640);
  v8 = _mm_load_si128((const __m128i *)&xmmword_612650);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_612660);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_408770(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_408E10(char *a1)
{
  return sub_408D90(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_408E40(signed int a1, int a2, char *a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408E40(signed int a1, int a2, char *a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408EB0(signed int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_612640);
  v7 = _mm_load_si128((const __m128i *)&xmmword_612650);
  v8 = _mm_load_si128((const __m128i *)&xmmword_612660);
  v9 = qword_612670;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_408770(a1, a4, a5, (__int64)&v6);
}

ssize_t __fastcall sub_408FE0(int fd, void *buf, size_t nbytes)
{
  size_t v3; // rbx
  ssize_t v4; // rbp
  int v5; // eax

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

__int64 __fastcall sub_409040(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  bool v5; // zf
  __int64 result; // rax

  v2 = a2;
  v3 = sub_40B1A0(a1, 0LL, a2);
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
  __int64 result; // rax
  unsigned int v2; // er12
  int *v3; // rax
  int v4; // er13
  int *v5; // rbp

  if ( (unsigned int)fd > 2 )
    return (unsigned int)fd;
  v2 = sub_409080(fd);
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

int __fastcall sub_4090E0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // rax
  int result; // eax
  const char *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // r12
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // r13
  __int64 v51; // rbx
  char *v52; // rax
  __int64 v53; // r13
  __int64 v54; // r12
  __int64 v55; // r15
  __int64 v56; // r14
  __int64 v57; // rbx
  char *v58; // rax
  __int64 v59; // rcx
  int v60; // [rsp-10h] [rbp-68h]
  __int64 v61; // [rsp+0h] [rbp-58h]
  __int64 v62; // [rsp+0h] [rbp-58h]
  __int64 v63; // [rsp+0h] [rbp-58h]
  __int64 v64; // [rsp+0h] [rbp-58h]
  __int64 v65; // [rsp+8h] [rbp-50h]
  __int64 v66; // [rsp+8h] [rbp-50h]
  __int64 v67; // [rsp+8h] [rbp-50h]
  __int64 v68; // [rsp+10h] [rbp-48h]
  __int64 v69; // [rsp+10h] [rbp-48h]
  __int64 v70; // [rsp+18h] [rbp-40h]

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
    case 1LL:
      v27 = *v7;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v28, v27);
    case 2LL:
      v29 = v7[1];
      v30 = *v7;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v31, v30, v29);
    case 3LL:
      v32 = v7[2];
      v33 = v7[1];
      v34 = *v7;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v35, v34, v33, v32);
    case 4LL:
      v36 = v7[3];
      v37 = v7[2];
      v38 = v7[1];
      v39 = *v7;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v40, v39, v38, v37, v36);
    case 5LL:
      v41 = v7[4];
      v42 = v7[3];
      v43 = v7[2];
      v44 = v7[1];
      v45 = *v7;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v46, v45, v44, v43, v42, v41);
      return v60;
    case 6LL:
      v47 = v7[1];
      v48 = v7[4];
      v49 = v7[3];
      v50 = v7[2];
      v51 = *v7;
      v63 = v47;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v52, v51, v63, v50, v49, v48);
      return v60;
    case 7LL:
      v53 = v7[6];
      v54 = v7[5];
      v55 = v7[4];
      v56 = v7[3];
      v67 = v7[2];
      v64 = v7[1];
      v57 = *v7;
      v58 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return fprintf(stream, v58, v57, v64, v67, v56, v55, v54, v53);
    case 8LL:
      v10 = v7[7];
      v11 = v7[6];
      v12 = v7[5];
      v13 = v7[4];
      v14 = v7[2];
      v68 = v7[3];
      v15 = v7[1];
      v16 = *v7;
      v65 = v14;
      v61 = v15;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v17, v16, v61, v65, v68, v13, v12, v11, v10);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = v7[1];
      v21 = v7[7];
      v22 = v7[6];
      v70 = v7[8];
      v23 = v7[5];
      v24 = v7[4];
      v69 = v7[3];
      v66 = v7[2];
      v25 = *v7;
      v62 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = v7[1];
      v21 = v7[7];
      v22 = v7[6];
      v70 = v7[8];
      v23 = v7[5];
      v24 = v7[4];
      v69 = v7[3];
      v66 = v7[2];
      v25 = *v7;
      v62 = v59;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return fprintf(stream, v26, v25, v62, v66, v69, v24, v23, v22, v21, v70);
  }
}

int __fastcall sub_4090E0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // rax
  int result; // eax
  const char *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // r12
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // r13
  __int64 v51; // rbx
  char *v52; // rax
  __int64 v53; // r13
  __int64 v54; // r12
  __int64 v55; // r15
  __int64 v56; // r14
  __int64 v57; // rbx
  char *v58; // rax
  __int64 v59; // rcx
  int v60; // [rsp-10h] [rbp-68h]
  __int64 v61; // [rsp+0h] [rbp-58h]
  __int64 v62; // [rsp+0h] [rbp-58h]
  __int64 v63; // [rsp+0h] [rbp-58h]
  __int64 v64; // [rsp+0h] [rbp-58h]
  __int64 v65; // [rsp+8h] [rbp-50h]
  __int64 v66; // [rsp+8h] [rbp-50h]
  __int64 v67; // [rsp+8h] [rbp-50h]
  __int64 v68; // [rsp+10h] [rbp-48h]
  __int64 v69; // [rsp+10h] [rbp-48h]
  __int64 v70; // [rsp+18h] [rbp-40h]

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
    case 1LL:
      v27 = *v7;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v28, v27);
    case 2LL:
      v29 = v7[1];
      v30 = *v7;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v31, v30, v29);
    case 3LL:
      v32 = v7[2];
      v33 = v7[1];
      v34 = *v7;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v35, v34, v33, v32);
    case 4LL:
      v36 = v7[3];
      v37 = v7[2];
      v38 = v7[1];
      v39 = *v7;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v40, v39, v38, v37, v36);
    case 5LL:
      v41 = v7[4];
      v42 = v7[3];
      v43 = v7[2];
      v44 = v7[1];
      v45 = *v7;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v46, v45, v44, v43, v42, v41);
      return v60;
    case 6LL:
      v47 = v7[1];
      v48 = v7[4];
      v49 = v7[3];
      v50 = v7[2];
      v51 = *v7;
      v63 = v47;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v52, v51, v63, v50, v49, v48);
      return v60;
    case 7LL:
      v53 = v7[6];
      v54 = v7[5];
      v55 = v7[4];
      v56 = v7[3];
      v67 = v7[2];
      v64 = v7[1];
      v57 = *v7;
      v58 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return fprintf(stream, v58, v57, v64, v67, v56, v55, v54, v53);
    case 8LL:
      v10 = v7[7];
      v11 = v7[6];
      v12 = v7[5];
      v13 = v7[4];
      v14 = v7[2];
      v68 = v7[3];
      v15 = v7[1];
      v16 = *v7;
      v65 = v14;
      v61 = v15;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v17, v16, v61, v65, v68, v13, v12, v11, v10);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = v7[1];
      v21 = v7[7];
      v22 = v7[6];
      v70 = v7[8];
      v23 = v7[5];
      v24 = v7[4];
      v69 = v7[3];
      v66 = v7[2];
      v25 = *v7;
      v62 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = v7[1];
      v21 = v7[7];
      v22 = v7[6];
      v70 = v7[8];
      v23 = v7[5];
      v24 = v7[4];
      v69 = v7[3];
      v66 = v7[2];
      v25 = *v7;
      v62 = v59;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return fprintf(stream, v26, v25, v62, v66, v69, v24, v23, v22, v21, v70);
  }
}

int __fastcall sub_4094F0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_4090E0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_4090E0(a1, a2, a3, a4, v12, i);
}

int __fastcall sub_409550(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4090E0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_4090E0(a1, a2, a3, a4, v15, i);
}

int sub_409610()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  printf(v0, "bug-findutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  printf(v1, &unk_40D94B, "http://www.gnu.org/software/findutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <http://www.gnu.org/gethelp/>\n", 5);
  return fputs(v3, v2);
}

void *__fastcall sub_409680(size_t a1)
{
  void *result; // rax

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
        sub_4098A0();
    }
  }
  return result;
}

void *__fastcall sub_409820(size_t a1, size_t a2)
{
  void *result; // rax

  result = calloc(a1, a2);
  if ( !result )
    sub_4098A0();
  return result;
}

void *__fastcall sub_409840(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_409680(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_409870(void *src)
{
  size_t v1; // rax
  size_t v2; // rbx
  void *v3; // rax

  v1 = strlen((const char *)src);
  v2 = v1 + 1;
  v3 = sub_409680(v1 + 1);
  return memcpy(v3, src, v2);
}

void __noreturn sub_4098A0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(dword_6122C0, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_4098E0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15
  unsigned __int64 *v6; // r14
  const char *v7; // r13
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // rax
  char *v14; // r8
  unsigned __int64 v15; // rbx
  unsigned int v16; // ebp
  char v17; // r12
  char *v19; // rax
  char *v20; // r8
  char v21; // al
  char *v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  int v25; // edi
  int v26; // er9
  bool v27; // of
  int v28; // edi
  int v29; // edi
  int v30; // edi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // kr20_8
  int v33; // edi
  int base; // [rsp+8h] [rbp-50h]
  char *basea; // [rsp+8h] [rbp-50h]
  char *baseb; // [rsp+8h] [rbp-50h]
  char *basec; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h]

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
  while ( v11[v10] & 0x2000 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = strtoul(nptr, v5, base);
  v14 = *v5;
  v15 = v13;
  if ( *v5 == nptr )
  {
    basea = *v5;
    if ( v7 )
    {
      v17 = *nptr;
      if ( *nptr )
      {
        v16 = 0;
        v15 = 1LL;
        v19 = strchr(v7, v17);
        v20 = basea;
        if ( v19 )
          goto LABEL_20;
      }
    }
    return 4;
  }
  if ( *v9 )
  {
    v16 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
    return 4;
  }
  v16 = 0;
LABEL_11:
  if ( v7 )
  {
    v17 = *v14;
    if ( *v14 )
    {
      basec = *v5;
      v22 = strchr(v7, v17);
      v20 = basec;
      if ( !v22 )
      {
LABEL_26:
        *v6 = v15;
        v16 |= 2u;
        return v16;
      }
LABEL_20:
      baseb = v20;
      if ( strchr(v7, 48) )
      {
        v21 = baseb[1];
        if ( v21 != 68 )
        {
          if ( v21 == 105 )
          {
            v24 = 1024LL;
            LODWORD(v23) = 2 * (baseb[2] == 66) + 1;
            goto LABEL_28;
          }
          if ( v21 != 66 )
          {
            switch ( v17 )
            {
              case 66:
                v23 = 1LL;
                goto LABEL_83;
              case 69:
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_77;
              case 71:
              case 103:
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_72;
              case 75:
              case 107:
                v23 = 1LL;
                v31 = 1024LL;
                goto LABEL_69;
              case 77:
              case 109:
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_65;
              case 80:
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_59;
              case 84:
              case 116:
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_53;
              case 89:
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_47;
              case 90:
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_41;
              case 98:
                v23 = 1LL;
                goto LABEL_38;
              case 99:
                v23 = 1LL;
                goto LABEL_33;
              case 119:
                v23 = 1LL;
                goto LABEL_31;
              default:
                goto LABEL_26;
            }
          }
        }
        LODWORD(v23) = 2;
        v24 = 1000LL;
      }
      else
      {
        LODWORD(v23) = 1;
        v24 = 1024LL;
      }
LABEL_28:
      switch ( v17 )
      {
        case 66:
          v23 = (int)v23;
LABEL_83:
          if ( v15 >> 54 )
            goto LABEL_70;
          v15 <<= 10;
          break;
        case 69:
          v23 = (int)v23;
LABEL_77:
          v33 = 6;
          v26 = 0;
          do
          {
            v27 = (v24 * (unsigned __int128)v15) >> 64 != 0;
            v15 *= v24;
            if ( v27 )
            {
              v26 = 1;
              v15 = -1LL;
            }
            --v33;
          }
          while ( v33 );
          goto LABEL_45;
        case 71:
        case 103:
          v23 = (int)v23;
LABEL_72:
          if ( is_mul_ok(v24, v15) && is_mul_ok(v24, v24 * v15) && is_mul_ok(v24, v24 * v24 * v15) )
          {
            v15 *= v24 * v24 * v24;
          }
          else
          {
            v15 = -1LL;
            v16 |= 1u;
          }
          break;
        case 75:
        case 107:
          v31 = (int)v24;
          v23 = (int)v23;
LABEL_69:
          v32 = v15;
          v15 *= v31;
          if ( !is_mul_ok(v31, v32) )
            goto LABEL_70;
          break;
        case 77:
        case 109:
          v23 = (int)v23;
LABEL_65:
          if ( !is_mul_ok(v24, v15) || !is_mul_ok(v24, v24 * v15) )
            goto LABEL_70;
          v15 *= v24 * v24;
          break;
        case 80:
          v23 = (int)v23;
LABEL_59:
          v30 = 5;
          v26 = 0;
          do
          {
            v27 = (v24 * (unsigned __int128)v15) >> 64 != 0;
            v15 *= v24;
            if ( v27 )
            {
              v26 = 1;
              v15 = -1LL;
            }
            --v30;
          }
          while ( v30 );
          goto LABEL_45;
        case 84:
        case 116:
          v23 = (int)v23;
LABEL_53:
          v29 = 4;
          v26 = 0;
          do
          {
            v27 = (v24 * (unsigned __int128)v15) >> 64 != 0;
            v15 *= v24;
            if ( v27 )
            {
              v26 = 1;
              v15 = -1LL;
            }
            --v29;
          }
          while ( v29 );
          goto LABEL_45;
        case 89:
          v23 = (int)v23;
LABEL_47:
          v28 = 8;
          v26 = 0;
          do
          {
            v27 = (v24 * (unsigned __int128)v15) >> 64 != 0;
            v15 *= v24;
            if ( v27 )
            {
              v26 = 1;
              v15 = -1LL;
            }
            --v28;
          }
          while ( v28 );
          goto LABEL_45;
        case 90:
          v23 = (int)v23;
LABEL_41:
          v25 = 7;
          v26 = 0;
          do
          {
            v27 = (v24 * (unsigned __int128)v15) >> 64 != 0;
            v15 *= v24;
            if ( v27 )
            {
              v26 = 1;
              v15 = -1LL;
            }
            --v25;
          }
          while ( v25 );
LABEL_45:
          v16 |= v26;
          break;
        case 98:
          v23 = (int)v23;
LABEL_38:
          if ( v15 >> 55 )
            goto LABEL_70;
          v15 <<= 9;
          break;
        case 99:
          v23 = (int)v23;
          break;
        case 119:
          v23 = (int)v23;
LABEL_31:
          if ( (v15 & 0x8000000000000000LL) != 0LL )
          {
LABEL_70:
            v16 = 1;
            v15 = -1LL;
          }
          else
          {
            v15 *= 2LL;
          }
          break;
        default:
          goto LABEL_26;
      }
LABEL_33:
      *v5 = &baseb[v23];
      if ( baseb[v23] )
        v16 |= 2u;
      goto LABEL_13;
    }
  }
LABEL_13:
  *v6 = v15;
  return v16;
}

__int64 __fastcall sub_409D40(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_612678 < 0 )
    {
      v3 = sub_409D40(a1);
      if ( v3 >= 0 && dword_612678 == -1 )
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
        dword_612678 = 1;
      }
      else
      {
        v3 = sub_409D40(a1);
        if ( v3 >= 0 )
        {
          dword_612678 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_409E80(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_409EF0(stream, 0LL, 1LL);
  return fflush(stream);
}

__int64 __fastcall sub_409EC0(__int64 a1)
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

int __fastcall sub_409EF0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_409F50(__int64 a1, int *a2)
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
  v3 = a2[12];
  v4 = *a2;
  v5 = a2[13];
  v6 = a2[12];
  v7 = *a2;
  v8 = a2[13];
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
  a2[13] = v4;
  result = (unsigned int)(v4 - v8);
  a2[12] = result + v3;
  return result;
}

__int64 __fastcall sub_40A030(int a1, __int64 a2, char *a3, const char **a4, int *a5, int a6, int *a7, int a8)
{
  int *v8; // r12
  int v9; // eax
  int v10; // ebp
  _BYTE *v11; // r8
  char v12; // al
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // rax
  const char *v19; // rbx
  unsigned int v20; // er13
  char v21; // r14
  char *v22; // rax
  char v23; // dl
  char v24; // dl
  __int64 v25; // rax
  int v26; // eax
  _BYTE *v27; // rdx
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  int v32; // edx
  __int64 v33; // rax
  _BYTE *v34; // rcx
  int v35; // esi
  char v36; // cl
  __int64 v37; // rax
  char v38; // r13
  const char *i; // r14
  int v40; // er13
  size_t v41; // r14
  const char **v42; // rbp
  const char *v43; // r12
  const char **v44; // r15
  _BYTE *v45; // r13
  unsigned int v46; // eax
  const char **v47; // rbx
  const char *v48; // r15
  __int64 v49; // r14
  const char *v50; // rsi
  size_t v51; // r13
  int v52; // ebp
  _QWORD *v53; // rax
  _BYTE *v54; // r13
  bool v55; // si
  int v56; // eax
  int v57; // ecx
  __int64 v58; // rbx
  unsigned int *v59; // rax
  int v60; // er15
  _QWORD *v61; // rdi
  _QWORD *v62; // r14
  char *v63; // rbx
  char *v64; // rax
  unsigned int v65; // ebp
  __int64 v66; // rbx
  char *v67; // rax
  char *v68; // rax
  const char *v69; // rbp
  __int64 v70; // rbx
  unsigned int v71; // er13
  char *v72; // rax
  __int64 v73; // rbx
  void *v74; // rdi
  __int64 v75; // rbx
  char *v76; // rax
  __int64 v77; // rbp
  __int64 v78; // rbx
  char *v79; // rax
  char *v80; // rbx
  const char **j; // rax
  __int64 v82; // rbx
  size_t v83; // rax
  __int64 v84; // rbx
  size_t v85; // rax
  _QWORD *v86; // rdi
  _QWORD *v87; // rbx
  int v88; // eax
  char v89; // r13
  const char *v90; // r14
  int v91; // ebp
  int v92; // eax
  __int64 v93; // rbp
  __int64 v94; // rbx
  char *v95; // rax
  int v96; // eax
  const char **v97; // rsi
  __int64 v98; // rbp
  __int64 v99; // rbx
  char *v100; // rax
  __int64 v101; // rbx
  size_t v102; // rax
  __int64 v103; // rbx
  char *v104; // rax
  __int64 v105; // rax
  char *v106; // rax
  const char *v107; // rbp
  __int64 v108; // rbx
  char *v109; // rax
  __int64 v110; // rbp
  char *v111; // rax
  __int64 v112; // rbx
  char *v113; // rax
  const char *v114; // rbp
  __int64 v115; // rbx
  char *v116; // rax
  const char *v117; // rbp
  __int64 v118; // rbx
  char *v119; // rax
  char *s; // [rsp+0h] [rbp-98h]
  char *sa; // [rsp+0h] [rbp-98h]
  int sb; // [rsp+0h] [rbp-98h]
  int v123; // [rsp+Ch] [rbp-8Ch]
  int v124; // [rsp+Ch] [rbp-8Ch]
  __int64 *v125; // [rsp+10h] [rbp-88h]
  _BYTE *v126; // [rsp+18h] [rbp-80h]
  _BYTE *v127; // [rsp+18h] [rbp-80h]
  const char **v128; // [rsp+18h] [rbp-80h]
  _BYTE *v129; // [rsp+18h] [rbp-80h]
  const char **v130; // [rsp+20h] [rbp-78h]
  int v131; // [rsp+20h] [rbp-78h]
  int v132; // [rsp+28h] [rbp-70h]
  int v133; // [rsp+2Ch] [rbp-6Ch]
  int v134; // [rsp+2Ch] [rbp-6Ch]
  int v135; // [rsp+2Ch] [rbp-6Ch]
  int v136; // [rsp+2Ch] [rbp-6Ch]
  int *v137; // [rsp+30h] [rbp-68h]
  const char *v138; // [rsp+38h] [rbp-60h]
  int v139; // [rsp+38h] [rbp-60h]
  int v140; // [rsp+40h] [rbp-58h]
  _BYTE *v141; // [rsp+40h] [rbp-58h]
  char v142; // [rsp+48h] [rbp-50h]
  int v143; // [rsp+48h] [rbp-50h]
  int v144; // [rsp+4Ch] [rbp-4Ch]
  char v145; // [rsp+50h] [rbp-48h]
  __int64 v146; // [rsp+58h] [rbp-40h]

  v8 = a7;
  v125 = (__int64 *)a2;
  s = a3;
  v130 = a4;
  v137 = a5;
  v132 = a6;
  v123 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  *((_QWORD *)a7 + 2) = 0LL;
  v9 = *a7;
  v10 = a1;
  if ( !*a7 )
  {
    *a7 = 1;
    v9 = 1;
    goto LABEL_4;
  }
  if ( !a7[6] )
  {
LABEL_4:
    a7[13] = v9;
    a7[12] = v9;
    *((_QWORD *)a7 + 4) = 0LL;
    if ( a8 )
    {
      a7[11] = 1;
      v11 = 0LL;
      if ( *a3 != 45 )
      {
        if ( *a3 != 43 )
        {
LABEL_7:
          a7[10] = 0;
LABEL_8:
          a7[6] = 1;
          v12 = *s;
          goto LABEL_9;
        }
LABEL_68:
        a7[10] = 0;
        ++s;
        goto LABEL_8;
      }
    }
    else if ( getenv("POSIXLY_CORRECT") )
    {
      v11 = (_BYTE *)*((_QWORD *)a7 + 4);
      a7[11] = 1;
      if ( *s != 45 )
      {
        if ( *s != 43 )
          goto LABEL_7;
        goto LABEL_68;
      }
    }
    else
    {
      a7[11] = 0;
      if ( *s != 45 )
      {
        if ( *s != 43 )
        {
          a7[10] = 1;
          v11 = (_BYTE *)*((_QWORD *)a7 + 4);
          goto LABEL_8;
        }
        v11 = (_BYTE *)*((_QWORD *)a7 + 4);
        goto LABEL_68;
      }
      v11 = (_BYTE *)*((_QWORD *)a7 + 4);
    }
    a7[10] = 2;
    ++s;
    goto LABEL_8;
  }
  v11 = (_BYTE *)*((_QWORD *)a7 + 4);
  v12 = *a3;
  if ( !((*a3 - 43) & 0xFD) )
  {
    v12 = a3[1];
    s = a3 + 1;
  }
LABEL_9:
  v13 = v12 == 58;
  v14 = 0;
  if ( !v13 )
    v14 = v123;
  v124 = v14;
  if ( !v11 || !*v11 )
  {
    v26 = *a7;
    if ( a7[13] > *a7 )
      a7[13] = v26;
    if ( v26 < a7[12] )
      a7[12] = v26;
    if ( a7[10] == 1 )
    {
      v32 = a7[13];
      if ( a7[12] == v32 )
      {
        if ( v26 != v32 )
        {
          a7[12] = v26;
          v32 = v26;
        }
      }
      else if ( v26 != v32 )
      {
        sub_409F50(a2, a7);
        v32 = *a7;
      }
      if ( a1 <= v32 )
      {
LABEL_117:
        v26 = v32;
      }
      else
      {
        v33 = v32;
        while ( 1 )
        {
          v34 = (_BYTE *)v125[v33];
          v35 = v33;
          v32 = v33;
          if ( *v34 == 45 )
          {
            if ( v34[1] )
              break;
          }
          v32 = ++v33;
          *a7 = v35 + 1;
          if ( a1 <= (int)v33 )
            goto LABEL_117;
        }
        v26 = *a7;
      }
      a7[13] = v32;
    }
    if ( a1 == v26 )
    {
      v10 = a7[13];
      v28 = a7[12];
LABEL_51:
      if ( v28 != v10 )
        *a7 = v28;
      return (unsigned int)-1;
    }
    v27 = (_BYTE *)v125[v26];
    if ( !strcmp((const char *)v125[v26], (const char *)&unk_40F291) )
    {
      v28 = a7[12];
      v29 = a7[13];
      v30 = v26 + 1;
      *a7 = v30;
      if ( v28 == v29 )
      {
        a7[12] = v30;
        v28 = v30;
      }
      else if ( v30 != v29 )
      {
        sub_409F50((__int64)v125, a7);
        v28 = a7[12];
      }
      a7[13] = a1;
      *a7 = a1;
      goto LABEL_51;
    }
    if ( *v27 == 45 )
    {
      v36 = v27[1];
      if ( v36 )
      {
        v11 = &v27[(v130 != 0LL && v36 == 45) + 1];
        *((_QWORD *)a7 + 4) = v11;
        goto LABEL_13;
      }
    }
    if ( a7[10] )
    {
      *((_QWORD *)a7 + 2) = v27;
      v20 = 1;
      *a7 = v26 + 1;
      return v20;
    }
    return (unsigned int)-1;
  }
LABEL_13:
  if ( !v130 )
    goto LABEL_18;
  v15 = *a7;
  v16 = v15;
  v17 = v125[v15];
  if ( *(_BYTE *)(v17 + 1) != 45 )
  {
    if ( !v132 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v17 + 2) )
    {
      v133 = v16;
      v126 = v11;
      v18 = strchr(s, *(char *)(v17 + 1));
      v11 = v126;
      v16 = v133;
      if ( v18 )
        goto LABEL_18;
    }
  }
  v45 = v11;
  if ( *v11 && *v11 != 61 )
  {
    do
      ++v45;
    while ( *v45 && *v45 != 61 );
    v46 = (_DWORD)v45 - (_DWORD)v11;
    v135 = (_DWORD)v45 - (_DWORD)v11;
  }
  else
  {
    v135 = 0;
    v46 = 0;
  }
  v47 = v130;
  v48 = *v130;
  if ( !*v130 )
  {
LABEL_134:
    if ( v132 )
    {
      v63 = (char *)v125[(int)v16];
      if ( v63[1] != 45 )
      {
        v136 = v16;
        v129 = (_BYTE *)*((_QWORD *)a7 + 4);
        v64 = strchr(s, **((char **)a7 + 4));
        v11 = v129;
        LODWORD(v16) = v136;
        if ( v64 )
        {
LABEL_18:
          v19 = v11 + 1;
          v127 = v11;
          *((_QWORD *)a7 + 4) = v11 + 1;
          v20 = (char)*v11;
          v21 = *v11;
          v22 = strchr(s, v20);
          if ( !v127[1] )
            ++*a7;
          if ( (unsigned __int8)(v21 - 58) <= 1u || !v22 )
          {
            if ( v124 )
            {
              v75 = *v125;
              v76 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
              fprintf(stderr, v76, v75, v20);
            }
            a7[2] = v20;
            return 63;
          }
          v23 = v22[1];
          if ( *v22 != 87 || v23 != 59 )
          {
            if ( v23 == 58 )
            {
              v24 = v127[1];
              if ( v22[2] == 58 )
              {
                if ( v24 )
                {
                  *((_QWORD *)a7 + 2) = v19;
                  ++*a7;
                }
                else
                {
                  *((_QWORD *)a7 + 2) = 0LL;
                }
              }
              else
              {
                v25 = *a7;
                if ( v24 )
                {
                  *((_QWORD *)a7 + 2) = v19;
                  *a7 = v25 + 1;
                }
                else if ( v10 == (_DWORD)v25 )
                {
                  if ( v124 )
                  {
                    v103 = *v125;
                    v104 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                    fprintf(stderr, v104, v103, v20);
                  }
                  a7[2] = v20;
                  v20 = 5 * (*s != 58) + 58;
                }
                else
                {
                  *a7 = v25 + 1;
                  *((_QWORD *)a7 + 2) = v125[v25];
                }
              }
              *((_QWORD *)a7 + 4) = 0LL;
            }
            return v20;
          }
          if ( !v130 )
            goto LABEL_204;
          v37 = *a7;
          if ( v127[1] )
          {
            *((_QWORD *)a7 + 2) = v19;
            *a7 = v37 + 1;
          }
          else
          {
            if ( v10 == (_DWORD)v37 )
            {
              if ( v124 )
              {
                v112 = *v125;
                v113 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                fprintf(stderr, v113, v112, v20);
              }
              a7[2] = v20;
              return 5 * (unsigned int)(*s != 58) + 58;
            }
            *a7 = v37 + 1;
            v19 = (const char *)v125[v37];
            *((_QWORD *)a7 + 2) = v19;
          }
          *((_QWORD *)a7 + 4) = v19;
          v38 = *v19;
          for ( i = v19; *i; v38 = *++i )
          {
            if ( v38 == 61 )
              break;
          }
          if ( !*v130 )
          {
LABEL_204:
            *((_QWORD *)v8 + 4) = 0LL;
            return 87;
          }
          v142 = v38;
          v138 = i;
          v40 = 0;
          v140 = v10;
          v41 = i - v19;
          v42 = v130;
          v43 = *v130;
          v44 = 0LL;
          v134 = 0;
          v131 = 0;
          do
          {
            if ( !strncmp(v43, v19, v41) )
            {
              if ( (unsigned int)v41 == strlen(v43) )
              {
                v96 = v40;
                v97 = v42;
                v90 = v138;
                v89 = v142;
                v91 = v140;
                v8 = a7;
                v134 = v96;
                v44 = v97;
                goto LABEL_174;
              }
              if ( v44 )
              {
                if ( v132 || *((_DWORD *)v44 + 2) != *((_DWORD *)v42 + 2) || v44[2] != v42[2] )
                {
                  v131 = 1;
                }
                else
                {
                  v88 = 1;
                  if ( *((_DWORD *)v44 + 6) == *((_DWORD *)v42 + 6) )
                    v88 = v131;
                  v131 = v88;
                }
              }
              else
              {
                v134 = v40;
                v44 = v42;
              }
            }
            v42 += 4;
            v43 = *v42;
            ++v40;
          }
          while ( *v42 );
          v89 = v142;
          v90 = v138;
          v91 = v140;
          v8 = a7;
          if ( v131 )
          {
            if ( v124 )
            {
              v110 = *v125;
              v111 = dcgettext(0LL, "%s: option '-W %s' is ambiguous\n", 5);
              fprintf(stderr, v111, v110, v19);
              v19 = (const char *)*((_QWORD *)a7 + 4);
            }
            v20 = 63;
            v102 = strlen(v19);
            ++*a7;
            *((_QWORD *)a7 + 4) = &v19[v102];
            return v20;
          }
          if ( !v44 )
            goto LABEL_204;
LABEL_174:
          v92 = *((_DWORD *)v44 + 2);
          if ( v89 )
          {
            if ( !v92 )
            {
              if ( v124 )
              {
                v114 = *v44;
                v115 = *v125;
                v116 = dcgettext(0LL, "%s: option '-W %s' doesn't allow an argument\n", 5);
                fprintf(stderr, v116, v115, v114);
                v19 = (const char *)*((_QWORD *)v8 + 4);
              }
              v20 = 63;
              *((_QWORD *)v8 + 4) = &v19[strlen(v19)];
              return v20;
            }
            *((_QWORD *)v8 + 2) = v90 + 1;
            goto LABEL_177;
          }
          if ( v92 != 1 )
          {
            *((_QWORD *)v8 + 2) = 0LL;
            goto LABEL_177;
          }
          v105 = *v8;
          if ( (int)v105 < v91 )
          {
            *v8 = v105 + 1;
            *((_QWORD *)v8 + 2) = v125[v105];
LABEL_177:
            *((_QWORD *)v8 + 4) = &v19[strlen(v19)];
            if ( v137 )
              *v137 = v134;
            v59 = (unsigned int *)v44[2];
            v20 = *((_DWORD *)v44 + 6);
            if ( v59 )
              goto LABEL_116;
            return v20;
          }
          if ( v124 )
          {
            v117 = *v44;
            v118 = *v125;
            v119 = dcgettext(0LL, "%s: option '-W %s' requires an argument\n", 5);
            fprintf(stderr, v119, v118, v117);
          }
          *((_QWORD *)v8 + 4) += strlen(*((const char **)v8 + 4));
          if ( *s != 58 )
            return 63;
          return 58;
        }
        if ( !v124 )
        {
LABEL_139:
          v20 = 63;
          *((_QWORD *)a7 + 4) = "";
          *a7 = v16 + 1;
          a7[2] = 0;
          return v20;
        }
LABEL_138:
        v65 = *v63;
        sa = v11;
        v66 = *v125;
        v67 = dcgettext(0LL, "%s: unrecognized option '%c%s'\n", 5);
        fprintf(stderr, v67, v66, v65, sa);
        LODWORD(v16) = *a7;
        goto LABEL_139;
      }
      if ( !v124 )
        goto LABEL_139;
      v93 = *((_QWORD *)a7 + 4);
    }
    else
    {
      if ( !v124 )
        goto LABEL_139;
      v93 = *((_QWORD *)a7 + 4);
      v63 = (char *)v125[v16];
      v11 = (_BYTE *)*((_QWORD *)a7 + 4);
      if ( v63[1] != 45 )
        goto LABEL_138;
    }
    v94 = *v125;
    v95 = dcgettext(0LL, "%s: unrecognized option '--%s'\n", 5);
    fprintf(stderr, v95, v94, v93);
    LODWORD(v16) = *a7;
    goto LABEL_139;
  }
  v141 = v45;
  v49 = 0LL;
  v144 = a1;
  v50 = v11;
  v51 = v46;
  v52 = 0;
  v139 = -1;
  v143 = 0;
  v128 = 0LL;
  while ( 1 )
  {
    if ( strncmp(v48, v50, v51) )
      goto LABEL_101;
    if ( v135 == (unsigned int)strlen(v48) )
    {
      v60 = v52;
      v54 = v141;
      v10 = v144;
      if ( v143 || v49 )
      {
        v61 = (_QWORD *)v49;
        if ( v49 )
        {
          do
          {
            v62 = (_QWORD *)v61[1];
            free(v61);
            v61 = v62;
          }
          while ( v62 );
        }
      }
      LODWORD(v16) = *a7;
      v139 = v60;
      v128 = v47;
      goto LABEL_110;
    }
    if ( !v128 )
      break;
    if ( !v143 )
    {
      if ( v132
        || *((_DWORD *)v128 + 2) != *((_DWORD *)v47 + 2)
        || v128[2] != v47[2]
        || *((_DWORD *)v128 + 6) != *((_DWORD *)v47 + 6) )
      {
        v53 = malloc(0x10uLL);
        if ( v53 )
        {
          *v53 = v47;
          v53[1] = v49;
          v49 = (__int64)v53;
        }
        else
        {
          if ( v49 )
          {
            v74 = (void *)v49;
            do
            {
              v49 = *(_QWORD *)(v49 + 8);
              free(v74);
              v74 = (void *)v49;
            }
            while ( v49 );
          }
          v143 = 1;
        }
      }
      else
      {
        v143 = 0;
      }
    }
LABEL_101:
    v47 += 4;
    v48 = *v47;
    ++v52;
    if ( !*v47 )
      goto LABEL_107;
LABEL_102:
    v50 = (const char *)*((_QWORD *)a7 + 4);
  }
  v128 = v47;
  v47 += 4;
  v48 = *v47;
  v139 = v52++;
  if ( *v47 )
    goto LABEL_102;
LABEL_107:
  v54 = v141;
  v10 = v144;
  v55 = v49 != 0;
  v16 = *a7;
  if ( (_BYTE)v143 || v55 )
  {
    if ( v124 )
    {
      if ( v55 )
      {
        v146 = v49;
        v77 = v125[v16];
        v78 = *v125;
        v79 = dcgettext(0LL, "%s: option '%s' is ambiguous; possibilities:", 5);
        fprintf(stderr, v79, v78, v77);
        v80 = &v145;
        for ( j = v128; ; j = *(const char ***)v80 )
        {
          fprintf(stderr, " '--%s'", *j);
          v80 = (char *)*((_QWORD *)v80 + 1);
          if ( !v80 )
            break;
        }
        fputc(10, stderr);
        goto LABEL_161;
      }
      if ( (_BYTE)v143 )
      {
        v98 = v125[v16];
        v99 = *v125;
        v100 = dcgettext(0LL, "%s: option '%s' is ambiguous\n", 5);
        fprintf(stderr, v100, v99, v98);
LABEL_161:
        v82 = *((_QWORD *)a7 + 4);
        v83 = strlen(*((const char **)a7 + 4));
        ++*a7;
        a7[2] = 0;
        *((_QWORD *)a7 + 4) = v83 + v82;
        return 63;
      }
    }
    v84 = *((_QWORD *)a7 + 4);
    sb = *a7;
    v85 = strlen(*((const char **)a7 + 4));
    a7[2] = 0;
    *((_QWORD *)a7 + 4) = v85 + v84;
    *a7 = sb + 1;
    if ( v49 )
    {
      v86 = (_QWORD *)v49;
      do
      {
        v87 = (_QWORD *)v86[1];
        free(v86);
        v86 = v87;
      }
      while ( v87 );
    }
    return 63;
  }
  if ( !v128 )
    goto LABEL_134;
LABEL_110:
  v56 = v16 + 1;
  *a7 = v16 + 1;
  v57 = *((_DWORD *)v128 + 2);
  if ( !*v54 )
  {
    if ( v57 != 1 )
      goto LABEL_113;
    if ( v56 < v10 )
    {
      *a7 = v16 + 2;
      *((_QWORD *)a7 + 2) = v125[v56];
      goto LABEL_113;
    }
    if ( v124 )
    {
      v107 = *v128;
      v108 = *v125;
      v109 = dcgettext(0LL, "%s: option '--%s' requires an argument\n", 5);
      fprintf(stderr, v109, v108, v107);
    }
    v101 = *((_QWORD *)a7 + 4);
    *((_QWORD *)a7 + 4) = strlen(*((const char **)a7 + 4)) + v101;
    a7[2] = *((_DWORD *)v128 + 6);
    if ( *s == 58 )
      return 58;
    return 63;
  }
  if ( v57 )
  {
    *((_QWORD *)a7 + 2) = v54 + 1;
LABEL_113:
    v58 = *((_QWORD *)a7 + 4);
    *((_QWORD *)a7 + 4) = strlen(*((const char **)a7 + 4)) + v58;
    if ( v137 )
      *v137 = v139;
    v59 = (unsigned int *)v128[2];
    v20 = *((_DWORD *)v128 + 6);
    if ( v59 )
    {
LABEL_116:
      *v59 = v20;
      v20 = 0;
    }
  }
  else
  {
    if ( v124 )
    {
      v68 = (char *)v125[v56 - 1];
      v69 = *v128;
      v70 = *v125;
      if ( v68[1] == 45 )
      {
        v106 = dcgettext(0LL, "%s: option '--%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v106, v70, v69);
      }
      else
      {
        v71 = *v68;
        v72 = dcgettext(0LL, "%s: option '%c%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v72, v70, v71, v69);
      }
    }
    v73 = *((_QWORD *)a7 + 4);
    v20 = 63;
    *((_QWORD *)a7 + 4) = strlen(*((const char **)a7 + 4)) + v73;
    a7[2] = *((_DWORD *)v128 + 6);
  }
  return v20;
}

__int64 __fastcall sub_40B070(int a1, __int64 a2, char *a3, const char **a4, int *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_612680 = dword_61233C;
  dword_612684 = dword_612338;
  result = sub_40A030(a1, a2, a3, a4, a5, a6, &dword_612680, a7);
  dword_61233C = dword_612680;
  name = (char *)qword_612690;
  dword_612334 = dword_612688;
  return result;
}

__int64 __fastcall sub_40B0D0(int a1, __int64 a2, char *a3)
{
  return sub_40B070(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40B0F0(int a1, __int64 a2, char *a3, const char **a4, int *a5)
{
  return sub_40B070(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40B110(int a1, __int64 a2, char *a3, const char **a4, int *a5, int *a6)
{
  return sub_40A030(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40B130(int a1, __int64 a2, char *a3, const char **a4, int *a5)
{
  return sub_40B070(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40B150(int a1, __int64 a2, char *a3, const char **a4, int *a5, int *a6)
{
  return sub_40A030(a1, a2, a3, a4, a5, 1, a6, 0);
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
    a2 = "";
    a1 = 0LL;
  }
  return mbrtowc(a1, a2, a3, a4);
}

_BYTE *__fastcall sub_40B1A0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  _BYTE *v6; // rdi

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
  v4 = ((((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
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
    v5 = (__int64)(a1 + 1);
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
  size_t v1; // r12
  int v2; // ebp
  int result; // eax

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
                fclose(v60);
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
            fclose(v39);
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

__int64 __fastcall sub_40B890(__int64 a1)
{
  bool v1; // cf
  size_t v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rax

  v1 = __CFADD__(a1, 16LL);
  v2 = a1 + 16;
  if ( v1 )
    return 0LL;
  v3 = (__int64 *)malloc(v2);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 3) = 336984906;
    v4 = (__int64)(v3 + 2);
    v6 = (unsigned __int64)(v3 + 2) % 0x101;
    v7 = v6;
    v8 = qword_6126C0[v6];
    qword_6126C0[v7] = v4;
    *v5 = v8;
  }
  return v4;
}

void __fastcall sub_40B900(unsigned __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 *v3; // rcx

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 - 4) == 336984906 )
    {
      v1 = qword_6126C0[a1 % 0x101];
      if ( v1 )
      {
        if ( v1 == a1 )
        {
          v3 = &qword_6126C0[a1 % 0x101];
LABEL_12:
          *v3 = *(_QWORD *)(a1 - 16);
          free((void *)(a1 - 16));
        }
        else
        {
          while ( 1 )
          {
            v2 = *(_QWORD *)(v1 - 16);
            if ( !v2 )
              break;
            if ( a1 == v2 )
            {
              v3 = (__int64 *)(v1 - 16);
              goto LABEL_12;
            }
            v1 = *(_QWORD *)(v1 - 16);
          }
        }
      }
    }
  }
}

__int64 __fastcall sub_40B9C0(__int64 a1, const void **a2)
{
  const void **v2; // rbx
  __int64 v3; // rax
  const void *v4; // rsi
  size_t v5; // rdx
  __int64 result; // rax
  void *v7; // rax

  v2 = a2;
  v3 = (__int64)(a2 + 3);
  v4 = *a2;
  v5 = (size_t)v2[1];
  if ( v4 == (const void *)v3 )
  {
    v7 = memcpy((void *)(a1 + 24), v4, v5);
    v5 = (size_t)v2[1];
    *(_QWORD *)a1 = v7;
  }
  else
  {
    *(_QWORD *)a1 = v4;
  }
  result = *((unsigned __int8 *)v2 + 16);
  *(_QWORD *)(a1 + 8) = v5;
  *(_BYTE *)(a1 + 16) = result;
  if ( (_BYTE)result )
  {
    result = *((unsigned int *)v2 + 5);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}

size_t __fastcall sub_40BA40(char *s)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rax
  char *v5; // rbp
  __int64 v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  char v9; // [rsp+0h] [rbp-58h]
  mbstate_t ps; // [rsp+4h] [rbp-54h]
  char i; // [rsp+Ch] [rbp-4Ch]
  char *sa; // [rsp+10h] [rbp-48h]
  size_t v13; // [rsp+18h] [rbp-40h]
  char v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+24h] [rbp-34h]

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
        if ( ((unsigned int)dword_40F520[((unsigned __int8)*sa >> 5) & 7] >> *sa) & 1 )
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
      switch ( v7 )
      {
        case 0xFFFFFFFFFFFFFFFFLL:
          v13 = 1LL;
          v14 = 0;
          goto LABEL_8;
        case 0xFFFFFFFFFFFFFFFELL:
          v8 = strlen(sa);
          v14 = 0;
          v13 = v8;
          goto LABEL_8;
        case 0uLL:
          v13 = 1LL;
          if ( *sa )
            __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
          if ( v15 )
            __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
          break;
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

int __fastcall sub_40BC80(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_6122A8 )
    v1 = (void *)unk_6122A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40BC98(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_611E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
