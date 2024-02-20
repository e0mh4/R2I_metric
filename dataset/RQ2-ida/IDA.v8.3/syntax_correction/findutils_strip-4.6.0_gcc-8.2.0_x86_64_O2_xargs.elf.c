#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, const char **a2, char **a3)
{
  char *v4; // rbx
  const char *v5; // rdi
  __pid_t v6; // eax
  char *v7; // r12
  int *v8; // rax
  void (*v9)(void); // r14
  int v10; // r13d
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
  __int64 v49; // rdx
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
  __int64 v63; // r13
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
  __sighandler_t sa_handler; // [rsp+18h] [rbp-100h]
  unsigned __int64 v88; // [rsp+18h] [rbp-100h]
  int v89; // [rsp+2Ch] [rbp-ECh] BYREF
  char v90[13]; // [rsp+33h] [rbp-E5h] BYREF
  struct sigaction endptr; // [rsp+40h] [rbp-D8h] BYREF

  v4 = (char *)a2;
  v5 = *a2;
  strcpy(v90, "echo");
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
    v13 = sub_40B0F0((unsigned int)a1, v4, "+0a:E:e::i::I:l::L:n:prs:txP:d:", &off_40D6E0, &v89);
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
          goto LABEL_59;
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
          goto LABEL_59;
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
          formatb = (&off_40D6E0)[4 * v89];
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
    switch ( (char)v22 )
    {
      case '\\':
        goto LABEL_59;
      case 'a':
        LOBYTE(v22) = 7;
        goto LABEL_59;
      case 'b':
        LOBYTE(v22) = 8;
        goto LABEL_59;
      case 'f':
        LOBYTE(v22) = 12;
        goto LABEL_59;
      case 'n':
        LOBYTE(v22) = 10;
        goto LABEL_59;
      case 'r':
        LOBYTE(v22) = 13;
        goto LABEL_59;
      case 't':
        LOBYTE(v22) = 9;
        goto LABEL_59;
      case 'v':
        LOBYTE(v22) = 11;
        goto LABEL_59;
      default:
        formata = name;
        v25 = __errno_location();
        if ( (_BYTE)v22 == 120 )
        {
          *v25 = 0;
          endptr.sa_handler = 0LL;
          v73 = strtoul(formata + 2, (char **)&endptr, 16);
          v31 = formata;
          LOBYTE(v22) = v73;
          if ( v73 > 0xFF )
          {
            v32 = "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lx.";
            goto LABEL_56;
          }
        }
        else
        {
          v86 = v25;
          v26 = __ctype_b_loc();
          v27 = formata;
          v28 = v86;
          if ( ((*v26)[v22] & 0x800) != 0 )
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
          endptr.sa_handler = 0LL;
          v30 = strtoul(v29, (char **)&endptr, 8);
          v31 = formata;
          LOBYTE(v22) = v30;
          if ( v30 > 0xFF )
          {
            v32 = "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lo.";
LABEL_56:
            v33 = dcgettext(0LL, v32, 5);
            error(1, 0, v33, formata, 255LL);
            v31 = formata;
          }
        }
        if ( *(_BYTE *)endptr.sa_handler )
        {
          sa_handler = endptr.sa_handler;
          formate = v31;
          v34 = dcgettext(
                  0LL,
                  "Invalid escape sequence %s in input delimiter specification; trailing characters %s not recognised.",
                  5);
          error(1, 0, v34, formate, sa_handler);
        }
LABEL_59:
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
  endptr.sa_handler = (__sighandler_t)sub_402ED0;
  sigemptyset(&endptr.sa_mask);
  endptr.sa_flags = 0;
  if ( sigaction(10, &endptr, 0LL) )
  {
    v70 = dcgettext(0LL, "Cannot set SIGUSR1 signal handler", 5);
    v71 = __errno_location();
    error(0, *v71, v70);
  }
  endptr.sa_handler = (__sighandler_t)sub_403720;
  sigemptyset(&endptr.sa_mask);
  endptr.sa_flags = 0;
  if ( sigaction(12, &endptr, 0LL) )
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
  if ( dword_61233C == a1 )
  {
    v4 = &v90[5];
    a1 = 1;
    dword_61233C = 0;
    *(_QWORD *)&v90[5] = v90;
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
        v63 = *(_QWORD *)&v4[8 * dword_61233C];
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
    v38 = sub_409680(8LL * a1);
    v39 = dword_61233C;
    v40 = -1LL;
    v41 = v38;
    if ( a1 > dword_61233C )
    {
      do
      {
        *(_QWORD *)(v38 + 8 * v39) = strlen(*(const char **)&v4[8 * v39]);
        ++v39;
      }
      while ( a1 > (int)v39 );
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
        *(_QWORD *)&v4[8 * dword_61233C],
        *(_QWORD *)(v41 + 8LL * dword_61233C) + 1LL,
        0LL,
        0LL,
        (unsigned __int8)byte_6122B4,
        dword_61233C);
      byte_6122B4 = 0;
      v47 = dword_61233C + 1;
      if ( a1 > dword_61233C + 1 )
      {
        do
        {
          v48 = *(_QWORD *)(v41 + 8 * v47);
          v49 = *(_QWORD *)&v4[8 * v47++];
          sub_404A40(&dword_612420, &qword_612480, v49, v48, 0LL, 0LL, qword_6124E0, v46, (unsigned __int8)byte_6122B4);
        }
        while ( a1 > (int)v47 );
      }
      v40 = (__int64)&qword_612480;
      v42 = &dword_612420;
      sub_404C00(&dword_612420, &qword_612480);
    }
  }
  else
  {
    while ( dword_61233C < a1 )
    {
      v75 = v37;
      v37 = &qword_612480;
      sub_4047A0(
        &dword_612420,
        &qword_612480,
        *(_QWORD *)&v4[8 * dword_61233C],
        strlen(*(const char **)&v4[8 * dword_61233C]) + 1,
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
noreturn void __fastcall  start(__int64 a1, __int64 a2, void (*a3)(void))
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

__int64 *sub_402E0B()
{
  return &program_invocation_short_name;
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

// attributes: thunk
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
  unsigned int v2; // r13d
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
  int stat_loc; // [rsp+18h] [rbp-3Ch] BYREF

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
      if ( !__OFSUB__((v9 & 0x7F) + 1, 1) && (v9 & 0x7F) != 0 )
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
  __int64 result; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  char *endptr; // [rsp+8h] [rbp-30h] BYREF

  result = strtol(a1, &endptr, 10);
  if ( endptr == a1 || *endptr )
  {
    v13 = qword_612528;
    v14 = dcgettext(0LL, "%s: invalid number for -%c option\n", 5);
    fprintf(stderr, v14, v13, a2);
    sub_4032B0(stderr);
    exit(1);
  }
  if ( result < a3 )
  {
    v11 = qword_612528;
    v12 = dcgettext(0LL, "%s: value for -%c option should be >= %ld\n", 5);
    fprintf(stderr, v12, v11, a2, a3);
    if ( !a5 )
      return a3;
    goto LABEL_12;
  }
  if ( a4 >= 0 && result > a4 )
  {
    v9 = qword_612528;
    v10 = dcgettext(0LL, "%s: value for -%c option should be <= %ld\n", 5);
    fprintf(stderr, v10, v9, a2, a4);
    if ( !a5 )
      return a4;
LABEL_12:
    sub_4032B0(stderr);
    exit(1);
  }
  return result;
}

FILE *__fastcall sub_4036C0(int a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  FILE *v6; // rbx
  int v7; // eax
  int v8; // ebp
  int *v10; // rax
  int v11; // r13d
  int *v12; // r12

  v6 = 0LL;
  v7 = sub_405410(a1, 0, a3, a4, a5, a6);
  if ( v7 >= 0 )
  {
    v8 = v7;
    v6 = fdopen(v7, "r");
    if ( !v6 )
    {
      v10 = __errno_location();
      v11 = *v10;
      v12 = v10;
      close(v8);
      *v12 = v11;
    }
  }
  return v6;
}

__int64 sub_403720()
{
  __int64 result; // rax

  result = (unsigned int)dword_6122B0;
  if ( dword_6122B0 > 1 )
    return (unsigned int)--dword_6122B0;
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
        return sub_404C00(&dword_612420, &qword_612480);
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
  unsigned int v5; // ebx
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
    *v0++ = v2;
  }
  v4 = qword_6124E0;
  byte_6123B0 = 1;
  if ( qword_6124E0 == v0 )
    return 0xFFFFFFFFLL;
  *v0 = 0;
LABEL_10:
  v5 = (_DWORD)v0 + 1 - (_DWORD)v4;
  result = v5;
  if ( !qword_612450 )
  {
    sub_4047A0(&dword_612420, &qword_612480, v4, (int)v5, 0LL, 0LL, (unsigned __int8)byte_6122B4);
    return v5;
  }
  return result;
}

__int64 sub_4038B0()
{
  char *v0; // rbx
  char *v1; // r13
  char v2; // r14
  __int64 v3; // rbp
  int v4; // r12d
  char *v5; // r15
  int v6; // r15d
  char *v7; // rax
  char *v8; // rax
  int v9; // eax
  int v10; // eax
  char *v11; // rbp
  int v12; // ebx
  unsigned int v13; // r14d
  int v15; // eax
  int v16; // eax
  int v17; // eax
  char *v18; // rbp
  char *v19; // rax
  char *v20; // rbp
  int v21; // ebx
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
    if ( (v6 & 0xFFFFFF80) != 0 )
      goto LABEL_28;
LABEL_23:
    if ( ((*__ctype_b_loc())[v6] & 1) == 0 && v6 != 10 && v6 != 13 )
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
      if ( (v10 & 0xFFFFFF80) == 0 )
        goto LABEL_23;
LABEL_28:
      ;
    }
    while ( (unsigned int)(v6 - 11) <= 1 );
    if ( v6 != 10 )
    {
      while ( 1 )
      {
        if ( !qword_612450 && (v6 & 0xFFFFFF80) == 0 && ((*__ctype_b_loc())[v6] & 1) != 0 )
        {
          v20 = qword_6124E0;
          *v0 = 0;
          v21 = (_DWORD)v0 + 1 - (_DWORD)v20;
          v13 = v21;
          if ( s1 && *s1 == *v20 && !strcmp(s1, v20) )
            goto LABEL_36;
          sub_4047A0(&dword_612420, &qword_612480, v20, v21, 0LL, 0LL, (unsigned __int8)byte_6122B4);
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
  if ( (v3 & 0xFFFFFF80) != 0 || ((*__ctype_b_loc())[v3] & 1) == 0 )
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
  v12 = (_DWORD)v0 + 1 - (_DWORD)v11;
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
    sub_4047A0(&dword_612420, &qword_612480, v11, v12, 0LL, 0LL, (unsigned __int8)byte_6122B4);
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

bool __fastcall sub_403F30(char a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  unsigned __int64 v6; // rbx
  char *v7; // r12
  int v8; // eax
  int v9; // ebx
  char *v11; // rbx
  int *v12; // rax
  char *v13; // rbp
  int *v14; // rax
  char *v15; // rbx
  int *v16; // rax

  if ( qword_612480 != 1 )
  {
    v6 = 0LL;
    do
    {
      a2 = (__int64)"%s ";
      if ( fprintf(stderr, "%s ", *(const char **)(qword_612488 + 8 * v6)) < 0 )
      {
        v7 = dcgettext(0LL, "Failed to write to stderr", 5);
        a2 = (unsigned int)*__errno_location();
        error(1, a2, v7);
      }
      ++v6;
    }
    while ( qword_612480 - 1 > v6 );
  }
  if ( a1 )
  {
    if ( !qword_6123A8 )
    {
      qword_6123A8 = sub_4036C0((int)"/dev/tty", a2, a3, a4, a5, a6);
      if ( !qword_6123A8 )
      {
        v15 = dcgettext(0LL, "failed to open /dev/tty for reading", 5);
        v16 = __errno_location();
        error(1, *v16, v15);
      }
    }
    fwrite("?...", 1uLL, 4uLL, stderr);
    if ( (unsigned int)sub_409E80(stderr) )
    {
      v11 = dcgettext(0LL, "Failed to write to stderr", 5);
      v12 = __errno_location();
      error(1, *v12, v11);
    }
    v8 = _IO_getc(qword_6123A8);
    v9 = v8;
    if ( v8 != 10 && v8 != -1 )
    {
      do
        v8 = _IO_getc(qword_6123A8);
      while ( v8 != -1 && v8 != 10 );
    }
    if ( v8 == -1 )
    {
      v13 = dcgettext(0LL, "Failed to read from stdin", 5);
      v14 = __errno_location();
      error(1, *v14, v13);
    }
    return (v9 & 0xFFFFFFDF) == 89;
  }
  else
  {
    _IO_putc(10, stderr);
    return 0;
  }
}

__int64 __fastcall sub_404120(__int64 a1, __int64 a2, int a3, const char **a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rbp
  char *v13; // rbx
  int *v14; // rax
  char *v16; // rbx
  int *v17; // rax
  char *v18; // rbx
  int *v19; // rax
  char *v20; // rbx
  int *v21; // rax
  __int64 v22; // r13
  int v23; // esi
  char *v24; // r12
  int *v25; // rbx
  char *v26; // r13
  int v27; // edi
  const char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  int buf; // [rsp+8h] [rbp-40h] BYREF
  int pipedes[2]; // [rsp+Ch] [rbp-3Ch] BYREF
  int stat_loc[13]; // [rsp+14h] [rbp-34h] BYREF

  if ( dword_6122B0 && qword_6123E8 >= (unsigned __int64)dword_6122B0 )
  {
    do
    {
      a2 = 1LL;
      sub_402F30(0, 1u);
    }
    while ( dword_6122B0 <= (unsigned __int64)qword_6123E8 );
  }
  if ( !byte_6123C1 )
    goto LABEL_5;
  if ( !sub_403F30(1, a2, a3, (int)a4, a5, a6) )
    return 1LL;
  if ( !byte_6123C1 )
  {
LABEL_5:
    if ( byte_6123C2 )
      sub_403F30(0, a2, a3, (int)a4, a5, a6);
  }
  sub_402F30(0, 0);
  if ( pipe(pipedes) )
  {
    v16 = dcgettext(0LL, "could not create pipe before fork", 5);
    v17 = __errno_location();
    error(1, *v17, v16);
  }
  sub_409D40(pipedes[1], 2, 1, v7, v8, v9);
  while ( 1 )
  {
    v10 = fork();
    if ( v10 >= 0 || *__errno_location() != 11 || !qword_6123E8 )
      break;
    sub_402F30(0, 1u);
  }
  if ( v10 == -1 )
  {
    v20 = dcgettext(0LL, "cannot fork", 5);
    v21 = __errno_location();
    error(1, *v21, v20);
LABEL_33:
    close(pipedes[0]);
    status = 0;
    sub_405550();
    v22 = (unsigned int)sub_4031A0(0);
    v23 = snprintf(0LL, 0LL, "%u", v22) + 1;
    v24 = (char *)malloc(v23);
    v25 = __errno_location();
    if ( v24 )
    {
      snprintf(v24, v23, "%u", (unsigned int)v22);
      v26 = qword_6123B8;
      if ( qword_6123B8 && setenv(qword_6123B8, v24, 1) < 0 )
      {
        v30 = dcgettext(0LL, "failed to set environment variable %s", 5);
        error(0, *v25, v30, v26);
      }
      free(v24);
    }
    else
    {
      v29 = dcgettext(0LL, "unable to allocate memory", 5);
      error(0, *v25, v29);
    }
    if ( !dword_6124D8 )
    {
      strcpy((char *)stat_loc, "/dev/null");
      close(0);
      if ( open((const char *)stat_loc, 0) < 0 )
      {
        v28 = (const char *)sub_408C90(0LL, 8LL, stat_loc);
        error(0, *v25, "%s", v28);
      }
    }
    if ( (unsigned __int8)sub_405070(a4) )
    {
      *v25 = 7;
    }
    else
    {
      execvp(*a4, (char *const *)a4);
      if ( !*v25 )
        goto LABEL_42;
    }
    write(pipedes[1], v25, 4uLL);
LABEL_42:
    close(pipedes[1]);
    if ( *v25 == 7 || (error(0, *v25, "%s", *a4), *v25 != 2) )
      v27 = 126;
    else
      v27 = 127;
    _exit(v27);
  }
  if ( !v10 )
    goto LABEL_33;
  close(pipedes[1]);
  v11 = sub_408FE0(pipedes[0], &buf, 4uLL);
  v12 = v11;
  if ( v11 == 4 )
  {
    close(pipedes[0]);
    waitpid(v10, stat_loc, 0);
    if ( buf != 7 )
    {
      if ( buf != 2 )
        exit(126);
      exit(127);
    }
    return 0LL;
  }
  else
  {
    if ( v11 == -1 )
    {
      close(pipedes[0]);
      v18 = dcgettext(
              0LL,
              "errno-buffer safe_read failed in xargs_do_exec (this is probably a bug, please report it)",
              5);
      v19 = __errno_location();
      error(0, *v19, v18);
    }
    else if ( v11 )
    {
      v13 = dcgettext(0LL, "read returned unexpected value %zu; this is probably a bug, please report it", 5);
      v14 = __errno_location();
      error(1, *v14, v13, v12);
    }
    else
    {
      sub_4031A0(v10);
    }
    close(pipedes[0]);
    return 1LL;
  }
}

__int64 __fastcall sub_404580(int a1)
{
  char *v1; // r12
  unsigned int v2; // ebp
  unsigned int v3; // eax
  __int64 v5; // [rsp-10h] [rbp-28h]

  sub_409E80(stderr);
  v1 = dcgettext(0LL, "Kevin Dalley", 5);
  v2 = (unsigned int)dcgettext(0LL, "James Youngman", 5);
  v3 = (unsigned int)dcgettext(0LL, "Eric B. Decker", 5);
  sub_409550((_DWORD)stdout, a1, (unsigned int)&unk_40D94B, (_DWORD)off_6122B8, v3, v2, v1, 0LL);
  return v5;
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
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v14; // rcx

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
      v14 = a4 - 1;
      result = a4 - (v12 >> 1);
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
        return 1LL;
    }
    return result;
  }
  if ( !result )
    return 1LL;
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

__int64 __fastcall sub_4047A0(__int64 a1, __int64 a2, char *a3, __int64 a4, const char *a5, __int64 a6, __int64 a7)
{
  char *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rdx
  char *v19; // rax

  if ( !a3 )
    __assert_fail("arg != NULL", "buildcmd.c", 0x165u, "bc_push_arg");
  if ( (_DWORD)a7 )
  {
    if ( a3 != "do_not_care" )
      goto LABEL_4;
LABEL_31:
    v12 = *(_QWORD *)a2;
    v14 = *(_QWORD *)(a2 + 16);
    result = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)a2 < v14 )
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
  result = *(_QWORD *)(a2 + 8);
  if ( v12 >= v14 )
  {
LABEL_16:
    if ( result )
    {
      *(_QWORD *)(a2 + 16) = 2 * v14;
      result = sub_4096D0(result, 16 * v14);
    }
    else
    {
      *(_QWORD *)(a2 + 16) = 64LL;
      result = sub_409680(512LL);
    }
    *(_QWORD *)(a2 + 8) = result;
    v12 = *(_QWORD *)a2;
    if ( a3 != "do_not_care" )
      goto LABEL_19;
LABEL_32:
    *(_QWORD *)a2 = v12 + 1;
    *(_QWORD *)(result + 8 * v12) = 0LL;
    goto LABEL_26;
  }
LABEL_19:
  v16 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a2 = v12 + 1;
  *(_QWORD *)(result + 8 * v12) = v16 + *(_QWORD *)(a2 + 24);
  if ( a5 )
  {
    strcpy((char *)(v16 + *(_QWORD *)(a2 + 24)), a5);
    v16 = a6 + *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 32) = v16;
  }
  strcpy((char *)(*(_QWORD *)(a2 + 24) + v16), a3);
  v17 = *(_QWORD *)(a2 + 32) + a4;
  result = *(_QWORD *)a2;
  *(_QWORD *)(a2 + 32) = v17;
  if ( (_DWORD)a7 )
  {
    if ( result != *(_QWORD *)(a1 + 32) )
    {
LABEL_28:
      *(_QWORD *)(a2 + 40) = v17;
      return result;
    }
    goto LABEL_25;
  }
  v18 = *(_QWORD *)(a1 + 80);
  if ( v18 && v18 == result - *(_QWORD *)(a1 + 56) || result == *(_QWORD *)(a1 + 32) )
  {
LABEL_25:
    result = sub_404C00(a1, a2);
LABEL_26:
    if ( !(_DWORD)a7 )
      return result;
    v17 = *(_QWORD *)(a2 + 32);
    goto LABEL_28;
  }
  return result;
}

__int64 __fastcall sub_404A40(
        _QWORD *a1,
        __int64 a2,
        const char *a3,
        size_t a4,
        const char *a5,
        __int64 a6,
        const char *a7,
        __int64 a8,
        int a9)
{
  __int64 v12; // rdi
  char *v13; // rbx
  size_t v14; // rbp
  __int64 v15; // r13
  size_t v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rsi
  char *v21; // rax
  const char *v22; // [rsp+8h] [rbp-70h]

  v12 = a1[3];
  v13 = dest;
  v14 = v12 - 1;
  if ( !dest )
  {
    v13 = (char *)sub_409680(v12 + 1);
    dest = v13;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v18 = sub_4066F0(a3, a1[6]);
      v22 = (const char *)v18;
      if ( v18 )
        break;
      if ( a4 >= v14 )
        goto LABEL_13;
      v19 = a3;
      a3 += a4;
      strncpy(v13, v19, a4);
      v14 -= a4;
      v13 += a4;
      a4 = 0LL;
      if ( !*a3 )
        goto LABEL_11;
    }
    v15 = v18 - (_QWORD)a3;
    if ( v14 <= v18 - (__int64)a3 )
      goto LABEL_13;
    v16 = v14 - v15;
    strncpy(v13, a3, v18 - (_QWORD)a3);
    v13 += v15;
    if ( a6 + a8 >= v16 )
      break;
    v14 = v16 - (a6 + a8);
    if ( a5 )
    {
      strcpy(v13, a5);
      v13 += a6;
    }
    strcpy(v13, a7);
    v17 = a1[5];
    v13 += a8;
    a3 = &v22[v17];
    a4 = a4 - v17 - v15;
    if ( !v22[v17] )
      goto LABEL_11;
  }
  a3 = v22;
LABEL_13:
  if ( *a3 )
  {
    v21 = dcgettext(0LL, "command too long", 5);
    error(1, 0, v21);
  }
LABEL_11:
  *v13 = 0;
  LODWORD(a7) = a9;
  return sub_4047A0((__int64)a1, a2, dest, v13 + 1 - dest, 0LL, 0LL, (__int64)a7);
}

unsigned __int64 __fastcall sub_404C00(__int64 a1, unsigned __int64 *a2)
{
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
  unsigned __int64 result; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // [rsp+10h] [rbp-40h]

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
      v10 = a2[1];
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
      v14 = a2[1];
      do
      {
        ++v12;
        v8[v13++] = *(_QWORD *)(v14 + 8 * v12 - 8);
      }
      while ( v6 > v13 && v12 < v9 );
      if ( v13 < v7 )
        __assert_fail("dst_pos >= ctl->initial_argc", "buildcmd.c", 0x102u, "copy_args");
    }
    v21 = v6;
    v15 = a2[6];
    v8[v13] = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD *))(a1 + 64))(
           a1,
           v15,
           (unsigned int)v13,
           v8) )
    {
      v20 = sub_404600(a1, (__int64)a2, 1, v21);
      v7 = *(_QWORD *)(a1 + 56);
      v6 = v20;
      v4 = v13 + v4 - v7;
    }
    else if ( *(_QWORD *)(a1 + 56) + 1LL < v21 )
    {
      v19 = sub_404600(a1, (__int64)a2, 0, v21);
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
    v9 = *a2;
  }
  while ( v4 + 1 < *a2 - v7 );
  free(v8);
  v17 = a2[5];
  *a2 = v7;
  a2[4] = v17;
  result = 0xFFFFFFFF00000000LL;
  a2[7] = 0xFFFFFFFF00000000LL;
  return result;
}

__int64 sub_404E30()
{
  __int64 result; // rax

  result = sysconf(0);
  if ( result <= 0 )
    return 0x7FFFFFFFFFFFFFFFLL;
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
    i = *++v1;
  }
  return v0;
}

__int64 __fastcall sub_404EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 result; // rax

  v2 = sub_404E60();
  *(_QWORD *)(a1 + 16) = 4096LL;
  v3 = v2;
  v4 = sysconf(0);
  *(_DWORD *)a1 = 0;
  if ( v4 <= 0 )
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

unsigned __int64 __fastcall sub_404FB0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  a2[4] = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[8] = 0LL;
  a2[9] = 0LL;
  if ( v3 > 0x7FFFFFFFFFFFF7FFLL )
    __assert_fail("ctl->arg_max <= (LONG_MAX - 2048L)", "buildcmd.c", 0x24Cu, "bc_init_state");
  v5 = sub_409680(v3 + 1);
  a2[5] = 0LL;
  a2[3] = v5;
  result = 0xFFFFFFFF00000000LL;
  a2[4] = 0LL;
  a2[7] = 0xFFFFFFFF00000000LL;
  a2[6] = a3;
  return result;
}

unsigned __int64 __fastcall sub_405050(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax

  *a2 = *(_QWORD *)(a1 + 56);
  a2[4] = a2[5];
  result = 0xFFFFFFFF00000000LL;
  a2[7] = 0xFFFFFFFF00000000LL;
  return result;
}

__int64 __fastcall sub_405070(const char **a1)
{
  unsigned __int64 v2; // rbp
  const char *v3; // rdi
  unsigned __int64 i; // rbx
  size_t v5; // rax
  unsigned int v7; // edx

  v2 = 0LL;
  v3 = *a1;
  for ( i = 0LL; v3; v2 += v5 )
  {
    v5 = strlen(v3);
    v3 = a1[++i];
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
  int v2; // r12d
  int v3; // ebx
  struct dirent *v4; // rax
  char v5; // dl
  int v6; // eax

  v0 = sub_405AA0("/proc/self/fd");
  if ( !v0 )
    return (unsigned int)-1;
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
    return (unsigned int)-1;
  return (unsigned int)v3;
}

__int64 __fastcall sub_405160(int a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( (sub_409D40(a1, 1, a3, a4, a5, a6) & 1) != 0 )
    return 0;
  v8 = sub_405740(*(void **)a2);
  if ( !v8 )
    return (unsigned int)-1;
  v9 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = v8;
  *(_DWORD *)(v8 + 4 * v9) = a1;
  result = 0LL;
  *(_QWORD *)(a2 + 8) = v9 + 1;
  return result;
}

__int64 __fastcall sub_4051D0(int a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  int v9; // ecx
  unsigned __int64 i; // rax

  if ( (sub_409D40(a1, 1, a3, a4, a5, a6) & 1) != 0 )
    return 0LL;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a2 + 8);
  if ( v7 < v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)a2 + 4 * v7);
    if ( v9 < a1 )
    {
      for ( i = v7 + 1; ; ++i )
      {
        if ( v8 == i )
        {
          *(_QWORD *)(a2 + 16) = v8;
          goto LABEL_9;
        }
        v9 = *(_DWORD *)(*(_QWORD *)a2 + 4 * (i + 1) - 4);
        if ( a1 <= v9 )
          break;
      }
      *(_QWORD *)(a2 + 16) = i;
    }
    if ( a1 == v9 )
      return 0LL;
  }
LABEL_9:
  *(_DWORD *)(a2 + 24) = a1;
  return 0xFFFFFFFFLL;
}

__int64 sub_405260()
{
  __int64 v0; // rax
  unsigned int v1; // ebx
  int v2; // eax
  unsigned int rlim_cur; // edx
  struct rlimit v5; // [rsp+0h] [rbp-18h] BYREF

  v0 = sysconf(4);
  v1 = v0;
  if ( v0 == -1 )
    v1 = 20;
  v2 = getrlimit(RLIMIT_NOFILE, &v5);
  rlim_cur = v1;
  if ( !v2 )
  {
    rlim_cur = v5.rlim_cur;
    if ( v5.rlim_cur == -1LL )
      return v1;
  }
  return rlim_cur;
}

__int64 __fastcall sub_4052B0(int a1, __int64 (__fastcall *a2)(_QWORD, __int64), __int64 a3)
{
  int v5; // ebp
  int v6; // r15d
  struct pollfd *v7; // rax
  int v8; // edx
  int v9; // edi
  __int64 v10; // rbx
  __int64 result; // rax
  struct pollfd v12[71]; // [rsp+0h] [rbp-238h] BYREF

  if ( a1 <= 0 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = 64;
    if ( a1 - v5 <= 64 )
      v6 = a1 - v5;
    if ( a1 - v5 > 0 )
      break;
    if ( poll(v12, v6, 0) == -1 )
      return 0xFFFFFFFFLL;
LABEL_13:
    v5 += v6;
    if ( a1 <= v5 )
      return 0LL;
  }
  v7 = v12;
  v8 = 0;
  do
  {
    ++v7;
    v7[-1].revents = 0;
    v9 = v5 + v8++;
    v7[-1].events = 5;
    v7[-1].fd = v9;
  }
  while ( v8 < v6 );
  if ( poll(v12, v6, 0) == -1 )
    return 0xFFFFFFFFLL;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v12[v10].revents != 32 )
    {
      result = a2((unsigned int)v12[v10].fd, a3);
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
  void *v2; // [rsp+0h] [rbp-28h] BYREF
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

__int64 __fastcall sub_405410(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r12d
  char v7; // bp
  __int64 result; // rax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // edx
  int v12; // r14d
  char v13; // bp

  if ( (a2 & 0x40) != 0 )
    v6 = a3;
  else
    v6 = 0;
  v7 = byte_6124F9;
  if ( !byte_6124F9 )
  {
    v10 = sub_405B30((unsigned int)"/", 0x80000, a3, a4, a5, a6);
    v12 = v10;
    if ( v10 >= 0 )
    {
      v13 = sub_409D40(v10, 1, v11, a4, a5, a6);
      close(v12);
      byte_6124F9 = 1;
      byte_6124F8 = v13 & 1;
    }
    else
    {
      byte_6124F8 = v7;
      byte_6124F9 = 1;
    }
  }
  LODWORD(result) = sub_405B30(a1, a2 | 0x80000u, v6, a4, a5, a6);
  v9 = result;
  if ( (int)result < 0 || byte_6124F8 )
    return (unsigned int)result;
  sub_405860((unsigned int)result, 1LL);
  return v9;
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
  __int64 v6[3]; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+18h] [rbp-20h]

  v0 = qword_612500;
  v1 = ptr;
  v2 = sub_4050E0();
  if ( v2 < 0 )
    v2 = sub_405260();
  v6[1] = v0;
  v6[0] = (__int64)v1;
  v6[2] = 0LL;
  v7 = -1;
  result = sub_4052B0(
             (unsigned int)(v2 != 0x7FFFFFFF) + v2,
             (__int64 (__fastcall *)(_QWORD, __int64))sub_4051D0,
             (__int64)v6);
  v4 = v7;
  if ( v7 >= 0 )
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
  char *endptr; // [rsp+8h] [rbp-30h] BYREF

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
  int *v6; // rax
  int v7; // r14d
  unsigned __int64 v8; // rsi
  int *v9; // r12
  void *result; // rax
  size_t v11; // rdi

  v6 = __errno_location();
  v7 = *v6;
  if ( !a2 )
    __assert_fail("wanted > 0u", "extendbuf.c", 0x47u, "extendbuf");
  v8 = *a3;
  v9 = v6;
  if ( *a3 )
  {
    result = ptr;
    if ( v8 < a2 )
    {
      v11 = 2 * v8;
      if ( v8 <= 2 * v8 )
        goto LABEL_8;
      v11 = a2;
      goto LABEL_18;
    }
  }
  else
  {
    v11 = 32LL;
    if ( a2 > 0x10 )
    {
      while ( 1 )
      {
LABEL_8:
        if ( v11 >= a2 )
        {
          if ( !v8 )
            goto LABEL_10;
          goto LABEL_17;
        }
        if ( v11 > 2 * v11 )
          break;
        v11 *= 2LL;
      }
      v11 = a2;
      if ( !v8 )
        goto LABEL_10;
LABEL_17:
      result = ptr;
      if ( v8 != v11 )
      {
LABEL_18:
        *a3 = v11;
        result = realloc(ptr, v11);
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
      if ( ptr )
        __assert_fail("NULL == existing", "extendbuf.c", 0x4Fu, "extendbuf");
      *a3 = v11;
      result = malloc(v11);
    }
  }
  if ( result )
    goto LABEL_13;
  return 0LL;
}

void *__fastcall sub_405840(void *ptr, unsigned __int64 a2, unsigned __int64 *a3)
{
  void *result; // rax

  result = sub_405740(ptr, a2, a3);
  if ( !result )
  {
    free(ptr);
    sub_4098A0();
  }
  return result;
}

__int64 __fastcall sub_405860(int a1, char a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  __int64 result; // rax

  v6 = sub_409D40(a1, 1, 0, a4, a5, a6);
  if ( v6 < 0 )
    return 0xFFFFFFFFLL;
  v9 = v6;
  v10 = v6 | 1;
  v11 = v9 & 0xFFFFFFFE;
  if ( a2 )
    v11 = v10;
  result = 0LL;
  if ( v11 != v9 )
    return (unsigned int)-((unsigned int)sub_409D40(a1, 2, v11, v9, v7, v8) == -1);
  return result;
}

__int64 sub_4058E0()
{
  FILE *v0; // rbx
  int v2; // eax
  FILE *v3; // rdi
  char *v4; // rax
  __int64 v5; // rbx
  const char *v6; // r12
  int *v7; // rax
  int *v8; // rbp
  const char *v9; // rax
  int v10; // eax

  v0 = stdin;
  if ( sub_409EC0(stdin) )
  {
    v10 = sub_409EF0(v0, 0LL, 1LL);
    v3 = stdin;
    if ( v10 || (v2 = sub_409E80(stdin), v3 = stdin, !v2) )
    {
      if ( !(unsigned int)sub_40B2B0(v3) )
        return sub_405A00();
    }
    else
    {
      sub_40B2B0(stdin);
    }
LABEL_6:
    v4 = dcgettext(0LL, "error closing file", 5);
    v5 = qword_612510;
    v6 = v4;
    v7 = __errno_location();
    v8 = v7;
    if ( v5 )
    {
      v9 = (const char *)sub_408E10(v5);
      error(0, *v8, "%s: %s", v9, v6);
    }
    else
    {
      error(0, *v7, "%s", v6);
    }
    sub_405A00();
    _exit(dword_6122C0);
  }
  if ( (unsigned int)sub_40B2B0(v0) )
    goto LABEL_6;
  return sub_405A00();
}

__int64 sub_405A00()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

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
        v5 = (const char *)sub_408E10(qword_612520);
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
  int v5; // r12d
  int *v6; // rax
  int *v7; // rbp
  int v8; // r14d
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

  v3 = 0LL;
  if ( (a2 & 0x40) != 0 )
    v3 = a3;
  v4 = open(a1, a2, v3);
  return sub_409090(v4);
}

__int64 __fastcall sub_405B80(unsigned __int8 *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbp
  void *v6; // rsp
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // r8
  unsigned __int8 *v12; // r9
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v16; // rax
  __int64 v17; // [rsp-Eh] [rbp-38h] BYREF
  _QWORD *v18; // [rsp-6h] [rbp-30h]
  _QWORD v19[5]; // [rsp+2h] [rbp-28h] BYREF

  if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
    return 0LL;
  v19[4] = v4;
  if ( 8 * a3 > 0xFAF )
  {
    v18 = a4;
    v19[0] = a3;
    v19[1] = a2;
    v16 = sub_40B890();
    a4 = v18;
    a3 = v19[0];
    v7 = (_QWORD *)v16;
    if ( v16 )
      goto LABEL_4;
    return 0LL;
  }
  v6 = alloca(8 * a3 + 24);
  v7 = v19;
  if ( &v17 == (__int64 *)-16LL )
    return 0LL;
LABEL_4:
  v7[1] = 1LL;
  v8 = 0LL;
  v9 = 2LL;
  if ( a3 > 2 )
  {
    do
    {
      v10 = *(_BYTE *)(a2 + v9 - 1);
      if ( v10 == *(_BYTE *)(a2 + v8) )
      {
LABEL_22:
        ++v8;
        v7[v9] = v9 - v8;
      }
      else
      {
        while ( v8 )
        {
          v8 -= v7[v8];
          if ( *(_BYTE *)(a2 + v8) == v10 )
            goto LABEL_22;
        }
        v7[v9] = v9;
        v8 = 0LL;
      }
      ++v9;
    }
    while ( a3 != v9 );
  }
  *a4 = 0LL;
  v11 = *a1;
  v12 = a1;
  v13 = 0LL;
LABEL_12:
  while ( 2 )
  {
    if ( (_BYTE)v11 )
    {
      while ( *(_BYTE *)(a2 + v13) != (_BYTE)v11 )
      {
        if ( !v13 )
        {
          v11 = v12[1];
          ++a1;
          ++v12;
          goto LABEL_12;
        }
        v14 = v7[v13];
        a1 += v14;
        v13 -= v14;
      }
      if ( a3 != ++v13 )
      {
        v11 = *++v12;
        continue;
      }
      *a4 = a1;
    }
    break;
  }
  sub_40B900(v7, a2, a3, a4, v11, v12);
  return 1LL;
}

noreturn void  sub_405D00()
{
  __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
}

__int64 __fastcall sub_405D20(char *a1, unsigned __int64 a2, char **a3)
{
  __int64 v3; // r9
  void *v4; // rsp
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  char v11; // al
  size_t v12; // rdx
  size_t mb_cur_max; // rax
  char *v14; // r14
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r15
  __int64 *v18; // r14
  bool v19; // cc
  char v20; // bl
  __int64 *v21; // rax
  size_t v22; // rdx
  __int64 v23; // r15
  char v24; // al
  __int64 *v25; // rax
  size_t v26; // rdx
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  void *v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  char *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r14
  int v39; // eax
  size_t v40; // rax
  char *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  char *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  unsigned __int64 v52; // [rsp+10h] [rbp-100h] BYREF
  mbstate_t *v53; // [rsp+18h] [rbp-F8h]
  char v54; // [rsp+20h] [rbp-F0h]
  mbstate_t v55; // [rsp+24h] [rbp-ECh] BYREF
  char v56; // [rsp+2Ch] [rbp-E4h]
  void *src; // [rsp+30h] [rbp-E0h]
  size_t n; // [rsp+38h] [rbp-D8h]
  char v59; // [rsp+40h] [rbp-D0h]
  unsigned int v60; // [rsp+44h] [rbp-CCh] BYREF
  __int64 v61; // [rsp+48h] [rbp-C8h] BYREF
  char v62; // [rsp+60h] [rbp-B0h]
  mbstate_t v63; // [rsp+64h] [rbp-ACh] BYREF
  char v64; // [rsp+6Ch] [rbp-A4h]
  char *s; // [rsp+70h] [rbp-A0h]
  size_t v66; // [rsp+78h] [rbp-98h]
  char v67; // [rsp+80h] [rbp-90h]
  int v68[7]; // [rsp+84h] [rbp-8Ch] BYREF
  char v69; // [rsp+A0h] [rbp-70h]
  mbstate_t v70; // [rsp+A4h] [rbp-6Ch] BYREF
  char v71; // [rsp+ACh] [rbp-64h]
  void *s2; // [rsp+B0h] [rbp-60h]
  size_t v73; // [rsp+B8h] [rbp-58h]
  char v74; // [rsp+C0h] [rbp-50h]
  unsigned int v75[19]; // [rsp+C4h] [rbp-4Ch] BYREF

  v52 = sub_40BA40((char *)a2);
  if ( v52 > 0x492492492492492LL )
    return 0LL;
  if ( 56 * v52 > 0xFAF )
  {
    v5 = (__int64 *)sub_40B890();
  }
  else
  {
    v4 = alloca(56 * v52 + 24);
    v5 = (__int64 *)&v52;
  }
  if ( !v5 )
    return 0LL;
  src = (void *)a2;
  v6 = v5;
  v54 = 0;
  v56 = 0;
  v55 = 0LL;
  v7 = &v5[6 * v52];
  while ( 1 )
  {
    if ( !v54 )
    {
      v8 = *(unsigned __int8 *)src;
      if ( (((unsigned int)dword_40F520[(*(_BYTE *)src >> 5) & 7] >> v8) & 1) != 0 )
      {
        n = 1LL;
        v9 = *(char *)src;
        v59 = 1;
        v60 = v9;
        v10 = v9;
        v56 = 1;
        if ( !v9 )
          goto LABEL_23;
        goto LABEL_8;
      }
      if ( !mbsinit(&v55) )
        goto LABEL_114;
      v54 = 1;
    }
    mb_cur_max = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    v15 = sub_409040(src, mb_cur_max);
    a2 = (unsigned __int64)v14;
    v16 = sub_40B170(&v60, v14, v15, &v55);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v59 = 0;
      v56 = 1;
      goto LABEL_9;
    }
    if ( v16 != -2LL )
      break;
    v32 = strlen((const char *)src);
    v59 = 0;
    n = v32;
    v11 = 0;
    v56 = 1;
LABEL_9:
    a2 = (unsigned __int64)src;
    v12 = n;
    if ( src == &v61 )
    {
      v31 = memcpy(v6 + 3, src, n);
      v12 = n;
      *v6 = (__int64)v31;
      v11 = v59;
    }
    else
    {
      *v6 = (__int64)src;
    }
    v6[1] = v12;
    *((_BYTE *)v6 + 16) = v11;
    if ( v11 )
      *((_DWORD *)v6 + 5) = v60;
    src = (char *)src + v12;
    v6 += 6;
    v56 = 0;
  }
  if ( !v16 )
  {
    n = 1LL;
    if ( *(_BYTE *)src )
      goto LABEL_113;
    if ( v60 )
      goto LABEL_115;
  }
  v59 = 1;
  if ( mbsinit(&v55) )
    v54 = 0;
  v10 = v60;
  v56 = 1;
  if ( v60 )
  {
LABEL_8:
    v11 = 1;
    goto LABEL_9;
  }
LABEL_23:
  v17 = 0LL;
  v18 = v5 + 6;
  v19 = v52 <= 2;
  v7[1] = 1LL;
  v53 = (mbstate_t *)2;
  if ( !v19 )
  {
    do
    {
      v20 = *((_BYTE *)v18 + 16);
      while ( 1 )
      {
        v21 = &v5[6 * v17];
        if ( v20 && *((_BYTE *)v21 + 16) )
        {
          if ( *((_DWORD *)v18 + 5) == *((_DWORD *)v21 + 5) )
            goto LABEL_32;
        }
        else
        {
          v22 = v18[1];
          if ( v22 == v21[1] )
          {
            a2 = *v21;
            if ( !memcmp((const void *)*v18, (const void *)*v21, v22) )
            {
LABEL_32:
              ++v17;
              v7[(_QWORD)v53] = (__int64)v53 - v17;
              goto LABEL_33;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= v7[v17];
      }
      v7[(_QWORD)v53] = (__int64)v53;
LABEL_33:
      v53 = (mbstate_t *)((char *)v53 + 1);
      v18 += 6;
    }
    while ( (mbstate_t *)v52 != v53 );
  }
  v62 = 0;
  v23 = 0LL;
  v64 = 0;
  *a3 = 0LL;
  v69 = 0;
  v63 = 0LL;
  v70 = 0LL;
  v71 = 0;
  v53 = &v63;
  s = a1;
  s2 = a1;
  v24 = 0;
LABEL_35:
  if ( v24 )
  {
    if ( !v74 )
      goto LABEL_37;
    goto LABEL_49;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v69 )
      {
        v8 = *(unsigned __int8 *)s2;
        if ( (((unsigned int)dword_40F520[(*(_BYTE *)s2 >> 5) & 7] >> v8) & 1) != 0 )
        {
          v73 = 1LL;
          v28 = *(char *)s2;
          v74 = 1;
          v75[0] = v28;
          v71 = 1;
          goto LABEL_49;
        }
        if ( !mbsinit(&v70) )
          goto LABEL_114;
        v69 = 1;
      }
      v33 = __ctype_get_mb_cur_max();
      v34 = (char *)s2;
      v35 = sub_409040(s2, v33);
      a2 = (unsigned __int64)v34;
      v36 = sub_40B170(v75, v34, v35, &v70);
      v73 = v36;
      switch ( v36 )
      {
        case -1LL:
          v73 = 1LL;
          v74 = 0;
          v71 = 1;
LABEL_37:
          v25 = &v5[6 * v23];
          goto LABEL_38;
        case -2LL:
          v49 = strlen((const char *)s2);
          v74 = 0;
          v73 = v49;
          v71 = 1;
          goto LABEL_37;
        case 0LL:
          v73 = 1LL;
          if ( *(_BYTE *)s2 )
            goto LABEL_113;
          if ( v75[0] )
            goto LABEL_115;
          break;
      }
      v74 = 1;
      if ( mbsinit(&v70) )
        v69 = 0;
      v71 = 1;
LABEL_49:
      v29 = v75[0];
      if ( !v75[0] )
        goto LABEL_54;
      v25 = &v5[6 * v23];
      if ( *((_BYTE *)v25 + 16) )
      {
        if ( *((_DWORD *)v25 + 5) != v75[0] )
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
        v26 = v25[1];
        if ( v26 != v73 )
          goto LABEL_39;
        a2 = (unsigned __int64)s2;
        if ( memcmp((const void *)*v25, s2, v26) )
        {
          if ( !v23 )
          {
LABEL_40:
            if ( v64 )
            {
              if ( v67 )
                goto LABEL_44;
              goto LABEL_45;
            }
            if ( !v62 )
            {
              if ( (((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1) != 0 )
              {
                v66 = 1LL;
                v27 = *s;
                v67 = 1;
                v68[0] = v27;
                v64 = 1;
LABEL_44:
                if ( !v68[0] )
LABEL_117:
                  abort();
LABEL_45:
                s += v66;
                s2 = (char *)s2 + v73;
                v64 = 0;
                v71 = 0;
                continue;
              }
              if ( mbsinit(v53) )
              {
                v62 = 1;
                goto LABEL_99;
              }
LABEL_114:
              __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_99:
            v45 = __ctype_get_mb_cur_max();
            v46 = s;
            v47 = sub_409040(s, v45);
            a2 = (unsigned __int64)v46;
            v48 = sub_40B170(v68, v46, v47, &v63);
            v66 = v48;
            if ( v48 == -1 )
            {
              v66 = 1LL;
              v67 = 0;
              goto LABEL_45;
            }
            if ( v48 == -2 )
            {
              v50 = strlen(s);
              v67 = 0;
              v66 = v50;
              goto LABEL_45;
            }
            if ( v48 )
            {
LABEL_104:
              v67 = 1;
              if ( mbsinit(&v63) )
                v62 = 0;
              v64 = 1;
              goto LABEL_44;
            }
            v66 = 1LL;
            if ( !*s )
            {
              if ( !v68[0] )
                goto LABEL_104;
LABEL_115:
              sub_405D00();
            }
LABEL_113:
            __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_74:
          v37 = v7[v23];
          v24 = v71;
          v38 = v23 - v37;
          if ( !v37 )
            goto LABEL_35;
          if ( !v64 )
            goto LABEL_78;
          if ( v67 )
            goto LABEL_81;
          while ( 2 )
          {
            while ( 2 )
            {
              v64 = 0;
              s += v66;
              if ( !--v37 )
              {
                v24 = v71;
                v23 = v38;
                goto LABEL_35;
              }
LABEL_78:
              if ( !v62 )
              {
                v8 = (unsigned __int8)*s;
                if ( (((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> v8) & 1) != 0 )
                {
                  v66 = 1LL;
                  v39 = *s;
                  v67 = 1;
                  v68[0] = v39;
                  v64 = 1;
LABEL_81:
                  a2 = (unsigned int)v68[0];
                  if ( !v68[0] )
                    goto LABEL_117;
                  continue;
                }
                if ( !mbsinit(v53) )
                  goto LABEL_114;
                v62 = 1;
              }
              break;
            }
            v40 = __ctype_get_mb_cur_max();
            v41 = s;
            v42 = sub_409040(s, v40);
            a2 = (unsigned __int64)v41;
            v43 = sub_40B170(v68, v41, v42, &v63);
            v66 = v43;
            switch ( v43 )
            {
              case -1LL:
                v66 = 1LL;
                v67 = 0;
                continue;
              case -2LL:
                v44 = strlen(s);
                v67 = 0;
                v66 = v44;
                continue;
              case 0LL:
                v66 = 1LL;
                if ( *s )
                  goto LABEL_113;
                if ( v68[0] )
                  __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
                break;
            }
            break;
          }
          v67 = 1;
          if ( mbsinit(&v63) )
            v62 = 0;
          v64 = 1;
          goto LABEL_81;
        }
      }
      break;
    }
    ++v23;
    s2 = (char *)s2 + v73;
    v71 = 0;
    if ( v52 != v23 )
      continue;
    break;
  }
  *a3 = s;
LABEL_54:
  sub_40B900(v5, a2, v29, v8, v10, v3);
  return 1LL;
}

__int64 __fastcall sub_405D20(char *a1, unsigned __int64 a2, char **a3)
{
  __int64 v3; // r9
  void *v4; // rsp
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  char v11; // al
  size_t v12; // rdx
  size_t mb_cur_max; // rax
  char *v14; // r14
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r15
  __int64 *v18; // r14
  bool v19; // cc
  char v20; // bl
  __int64 *v21; // rax
  size_t v22; // rdx
  __int64 v23; // r15
  char v24; // al
  __int64 *v25; // rax
  size_t v26; // rdx
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  void *v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  char *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r14
  int v39; // eax
  size_t v40; // rax
  char *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  char *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  unsigned __int64 v52; // [rsp+10h] [rbp-100h] BYREF
  mbstate_t *v53; // [rsp+18h] [rbp-F8h]
  char v54; // [rsp+20h] [rbp-F0h]
  mbstate_t v55; // [rsp+24h] [rbp-ECh] BYREF
  char v56; // [rsp+2Ch] [rbp-E4h]
  void *src; // [rsp+30h] [rbp-E0h]
  size_t n; // [rsp+38h] [rbp-D8h]
  char v59; // [rsp+40h] [rbp-D0h]
  unsigned int v60; // [rsp+44h] [rbp-CCh] BYREF
  __int64 v61; // [rsp+48h] [rbp-C8h] BYREF
  char v62; // [rsp+60h] [rbp-B0h]
  mbstate_t v63; // [rsp+64h] [rbp-ACh] BYREF
  char v64; // [rsp+6Ch] [rbp-A4h]
  char *s; // [rsp+70h] [rbp-A0h]
  size_t v66; // [rsp+78h] [rbp-98h]
  char v67; // [rsp+80h] [rbp-90h]
  int v68[7]; // [rsp+84h] [rbp-8Ch] BYREF
  char v69; // [rsp+A0h] [rbp-70h]
  mbstate_t v70; // [rsp+A4h] [rbp-6Ch] BYREF
  char v71; // [rsp+ACh] [rbp-64h]
  void *s2; // [rsp+B0h] [rbp-60h]
  size_t v73; // [rsp+B8h] [rbp-58h]
  char v74; // [rsp+C0h] [rbp-50h]
  unsigned int v75[19]; // [rsp+C4h] [rbp-4Ch] BYREF

  v52 = sub_40BA40((char *)a2);
  if ( v52 > 0x492492492492492LL )
    return 0LL;
  if ( 56 * v52 > 0xFAF )
  {
    v5 = (__int64 *)sub_40B890();
  }
  else
  {
    v4 = alloca(56 * v52 + 24);
    v5 = (__int64 *)&v52;
  }
  if ( !v5 )
    return 0LL;
  src = (void *)a2;
  v6 = v5;
  v54 = 0;
  v56 = 0;
  v55 = 0LL;
  v7 = &v5[6 * v52];
  while ( 1 )
  {
    if ( !v54 )
    {
      v8 = *(unsigned __int8 *)src;
      if ( (((unsigned int)dword_40F520[(*(_BYTE *)src >> 5) & 7] >> v8) & 1) != 0 )
      {
        n = 1LL;
        v9 = *(char *)src;
        v59 = 1;
        v60 = v9;
        v10 = v9;
        v56 = 1;
        if ( !v9 )
          goto LABEL_23;
        goto LABEL_8;
      }
      if ( !mbsinit(&v55) )
        goto LABEL_114;
      v54 = 1;
    }
    mb_cur_max = __ctype_get_mb_cur_max();
    v14 = (char *)src;
    v15 = sub_409040(src, mb_cur_max);
    a2 = (unsigned __int64)v14;
    v16 = sub_40B170(&v60, v14, v15, &v55);
    n = v16;
    if ( v16 == -1LL )
    {
      n = 1LL;
      v11 = 0;
      v59 = 0;
      v56 = 1;
      goto LABEL_9;
    }
    if ( v16 != -2LL )
      break;
    v32 = strlen((const char *)src);
    v59 = 0;
    n = v32;
    v11 = 0;
    v56 = 1;
LABEL_9:
    a2 = (unsigned __int64)src;
    v12 = n;
    if ( src == &v61 )
    {
      v31 = memcpy(v6 + 3, src, n);
      v12 = n;
      *v6 = (__int64)v31;
      v11 = v59;
    }
    else
    {
      *v6 = (__int64)src;
    }
    v6[1] = v12;
    *((_BYTE *)v6 + 16) = v11;
    if ( v11 )
      *((_DWORD *)v6 + 5) = v60;
    src = (char *)src + v12;
    v6 += 6;
    v56 = 0;
  }
  if ( !v16 )
  {
    n = 1LL;
    if ( *(_BYTE *)src )
      goto LABEL_113;
    if ( v60 )
      goto LABEL_115;
  }
  v59 = 1;
  if ( mbsinit(&v55) )
    v54 = 0;
  v10 = v60;
  v56 = 1;
  if ( v60 )
  {
LABEL_8:
    v11 = 1;
    goto LABEL_9;
  }
LABEL_23:
  v17 = 0LL;
  v18 = v5 + 6;
  v19 = v52 <= 2;
  v7[1] = 1LL;
  v53 = (mbstate_t *)2;
  if ( !v19 )
  {
    do
    {
      v20 = *((_BYTE *)v18 + 16);
      while ( 1 )
      {
        v21 = &v5[6 * v17];
        if ( v20 && *((_BYTE *)v21 + 16) )
        {
          if ( *((_DWORD *)v18 + 5) == *((_DWORD *)v21 + 5) )
            goto LABEL_32;
        }
        else
        {
          v22 = v18[1];
          if ( v22 == v21[1] )
          {
            a2 = *v21;
            if ( !memcmp((const void *)*v18, (const void *)*v21, v22) )
            {
LABEL_32:
              ++v17;
              v7[(_QWORD)v53] = (__int64)v53 - v17;
              goto LABEL_33;
            }
          }
        }
        if ( !v17 )
          break;
        v17 -= v7[v17];
      }
      v7[(_QWORD)v53] = (__int64)v53;
LABEL_33:
      v53 = (mbstate_t *)((char *)v53 + 1);
      v18 += 6;
    }
    while ( (mbstate_t *)v52 != v53 );
  }
  v62 = 0;
  v23 = 0LL;
  v64 = 0;
  *a3 = 0LL;
  v69 = 0;
  v63 = 0LL;
  v70 = 0LL;
  v71 = 0;
  v53 = &v63;
  s = a1;
  s2 = a1;
  v24 = 0;
LABEL_35:
  if ( v24 )
  {
    if ( !v74 )
      goto LABEL_37;
    goto LABEL_49;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !v69 )
      {
        v8 = *(unsigned __int8 *)s2;
        if ( (((unsigned int)dword_40F520[(*(_BYTE *)s2 >> 5) & 7] >> v8) & 1) != 0 )
        {
          v73 = 1LL;
          v28 = *(char *)s2;
          v74 = 1;
          v75[0] = v28;
          v71 = 1;
          goto LABEL_49;
        }
        if ( !mbsinit(&v70) )
          goto LABEL_114;
        v69 = 1;
      }
      v33 = __ctype_get_mb_cur_max();
      v34 = (char *)s2;
      v35 = sub_409040(s2, v33);
      a2 = (unsigned __int64)v34;
      v36 = sub_40B170(v75, v34, v35, &v70);
      v73 = v36;
      switch ( v36 )
      {
        case -1LL:
          v73 = 1LL;
          v74 = 0;
          v71 = 1;
LABEL_37:
          v25 = &v5[6 * v23];
          goto LABEL_38;
        case -2LL:
          v49 = strlen((const char *)s2);
          v74 = 0;
          v73 = v49;
          v71 = 1;
          goto LABEL_37;
        case 0LL:
          v73 = 1LL;
          if ( *(_BYTE *)s2 )
            goto LABEL_113;
          if ( v75[0] )
            goto LABEL_115;
          break;
      }
      v74 = 1;
      if ( mbsinit(&v70) )
        v69 = 0;
      v71 = 1;
LABEL_49:
      v29 = v75[0];
      if ( !v75[0] )
        goto LABEL_54;
      v25 = &v5[6 * v23];
      if ( *((_BYTE *)v25 + 16) )
      {
        if ( *((_DWORD *)v25 + 5) != v75[0] )
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
        v26 = v25[1];
        if ( v26 != v73 )
          goto LABEL_39;
        a2 = (unsigned __int64)s2;
        if ( memcmp((const void *)*v25, s2, v26) )
        {
          if ( !v23 )
          {
LABEL_40:
            if ( v64 )
            {
              if ( v67 )
                goto LABEL_44;
              goto LABEL_45;
            }
            if ( !v62 )
            {
              if ( (((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1) != 0 )
              {
                v66 = 1LL;
                v27 = *s;
                v67 = 1;
                v68[0] = v27;
                v64 = 1;
LABEL_44:
                if ( !v68[0] )
LABEL_117:
                  abort();
LABEL_45:
                s += v66;
                s2 = (char *)s2 + v73;
                v64 = 0;
                v71 = 0;
                continue;
              }
              if ( mbsinit(v53) )
              {
                v62 = 1;
                goto LABEL_99;
              }
LABEL_114:
              __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
            }
LABEL_99:
            v45 = __ctype_get_mb_cur_max();
            v46 = s;
            v47 = sub_409040(s, v45);
            a2 = (unsigned __int64)v46;
            v48 = sub_40B170(v68, v46, v47, &v63);
            v66 = v48;
            if ( v48 == -1 )
            {
              v66 = 1LL;
              v67 = 0;
              goto LABEL_45;
            }
            if ( v48 == -2 )
            {
              v50 = strlen(s);
              v67 = 0;
              v66 = v50;
              goto LABEL_45;
            }
            if ( v48 )
            {
LABEL_104:
              v67 = 1;
              if ( mbsinit(&v63) )
                v62 = 0;
              v64 = 1;
              goto LABEL_44;
            }
            v66 = 1LL;
            if ( !*s )
            {
              if ( !v68[0] )
                goto LABEL_104;
LABEL_115:
              sub_405D00();
            }
LABEL_113:
            __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
          }
LABEL_74:
          v37 = v7[v23];
          v24 = v71;
          v38 = v23 - v37;
          if ( !v37 )
            goto LABEL_35;
          if ( !v64 )
            goto LABEL_78;
          if ( v67 )
            goto LABEL_81;
          while ( 2 )
          {
            while ( 2 )
            {
              v64 = 0;
              s += v66;
              if ( !--v37 )
              {
                v24 = v71;
                v23 = v38;
                goto LABEL_35;
              }
LABEL_78:
              if ( !v62 )
              {
                v8 = (unsigned __int8)*s;
                if ( (((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> v8) & 1) != 0 )
                {
                  v66 = 1LL;
                  v39 = *s;
                  v67 = 1;
                  v68[0] = v39;
                  v64 = 1;
LABEL_81:
                  a2 = (unsigned int)v68[0];
                  if ( !v68[0] )
                    goto LABEL_117;
                  continue;
                }
                if ( !mbsinit(v53) )
                  goto LABEL_114;
                v62 = 1;
              }
              break;
            }
            v40 = __ctype_get_mb_cur_max();
            v41 = s;
            v42 = sub_409040(s, v40);
            a2 = (unsigned __int64)v41;
            v43 = sub_40B170(v68, v41, v42, &v63);
            v66 = v43;
            switch ( v43 )
            {
              case -1LL:
                v66 = 1LL;
                v67 = 0;
                continue;
              case -2LL:
                v44 = strlen(s);
                v67 = 0;
                v66 = v44;
                continue;
              case 0LL:
                v66 = 1LL;
                if ( *s )
                  goto LABEL_113;
                if ( v68[0] )
                  __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
                break;
            }
            break;
          }
          v67 = 1;
          if ( mbsinit(&v63) )
            v62 = 0;
          v64 = 1;
          goto LABEL_81;
        }
      }
      break;
    }
    ++v23;
    s2 = (char *)s2 + v73;
    v71 = 0;
    if ( v52 != v23 )
      continue;
    break;
  }
  *a3 = s;
LABEL_54:
  sub_40B900(v5, a2, v29, v8, v10, v3);
  return 1LL;
}

size_t __fastcall sub_4066F0(char *a1, char *a2)
{
  char *v3; // rbp
  char v4; // r15
  size_t result; // rax
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
  char v16; // bp
  int v17; // ecx
  char v18; // cl
  __int64 v19; // rdx
  char *v20; // rdi
  char *v21; // rdx
  char v22; // si
  char v23; // cl
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  char v26; // r14
  __int32 v27; // eax
  int v28; // ecx
  __m128i si128; // xmm1
  __m128i v30; // xmm0
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  bool v37; // al
  size_t v38; // rax
  void *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rax
  size_t v42; // r15
  size_t v43; // rax
  void *v44; // r15
  __int64 v45; // rax
  void *v46; // rax
  size_t v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  size_t v50; // rax
  void *v51; // rax
  unsigned __int64 v52; // r14
  int v53; // eax
  __int8 v54; // dl
  size_t v55; // rax
  char *v56; // r15
  __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  int v61; // eax
  size_t v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  size_t v65; // rax
  char *v66; // r14
  __int64 v67; // rax
  __int64 v68; // rax
  size_t mb_cur_max; // rax
  char *v70; // r12
  __int64 v71; // rax
  __int64 v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  const char *v76; // [rsp+0h] [rbp-188h]
  unsigned __int64 v77; // [rsp+0h] [rbp-188h]
  size_t v78; // [rsp+0h] [rbp-188h]
  void *v79; // [rsp+0h] [rbp-188h]
  unsigned __int64 v80; // [rsp+8h] [rbp-180h]
  mbstate_t v81; // [rsp+14h] [rbp-174h] BYREF
  char v82; // [rsp+1Ch] [rbp-16Ch]
  char *v83; // [rsp+20h] [rbp-168h]
  size_t v84; // [rsp+28h] [rbp-160h]
  char v85; // [rsp+30h] [rbp-158h]
  int v86[7]; // [rsp+34h] [rbp-154h] BYREF
  char v87; // [rsp+50h] [rbp-138h]
  mbstate_t v88; // [rsp+54h] [rbp-134h] BYREF
  char v89; // [rsp+5Ch] [rbp-12Ch]
  char *s; // [rsp+60h] [rbp-128h]
  size_t v91; // [rsp+68h] [rbp-120h]
  char v92; // [rsp+70h] [rbp-118h]
  int v93[7]; // [rsp+74h] [rbp-114h] BYREF
  __m128i v94; // [rsp+90h] [rbp-F8h] BYREF
  size_t n[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __m128i v96; // [rsp+B0h] [rbp-D8h] BYREF
  __m128i v97; // [rsp+C0h] [rbp-C8h] BYREF
  mbstate_t v98[2]; // [rsp+D0h] [rbp-B8h] BYREF
  void *s1[2]; // [rsp+E0h] [rbp-A8h]
  __int128 v100[2]; // [rsp+F0h] [rbp-98h] BYREF
  char ps[12]; // [rsp+110h] [rbp-78h] BYREF
  char v102; // [rsp+11Ch] [rbp-6Ch]
  void *s2; // [rsp+120h] [rbp-68h]
  size_t v104; // [rsp+128h] [rbp-60h]
  char v105; // [rsp+130h] [rbp-58h]
  int v106[21]; // [rsp+134h] [rbp-54h] BYREF

  v3 = a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v17 = *a2;
    v83 = a2;
    v82 = 0;
    v81 = 0LL;
    if ( (((unsigned int)dword_40F520[(unsigned __int8)v17 >> 5] >> v17) & 1) != 0 )
    {
      v84 = 1LL;
      v86[0] = v17;
      v85 = 1;
      v82 = 1;
LABEL_17:
      if ( !v86[0] )
        return (size_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v81) )
      goto LABEL_172;
    mb_cur_max = __ctype_get_mb_cur_max();
    v70 = v83;
    v71 = sub_409040(v83, mb_cur_max);
    v72 = sub_40B170(v86, v70, v71, &v81);
    v84 = v72;
    if ( v72 == -1 )
    {
      v84 = 1LL;
      v85 = 0;
      v82 = 1;
    }
    else
    {
      if ( v72 != -2 )
      {
        if ( !v72 )
        {
          v84 = 1LL;
          if ( *v83 )
            goto LABEL_173;
          if ( v86[0] )
            goto LABEL_161;
        }
        v85 = 1;
        mbsinit(&v81);
        v82 = 1;
        goto LABEL_17;
      }
      v75 = strlen(v83);
      v85 = 0;
      v84 = v75;
      v82 = 1;
    }
LABEL_29:
    s = a2;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 1;
    v87 = 0;
    v88 = 0LL;
    v89 = 0;
    n[0] = (size_t)a1;
    v94.m128i_i8[0] = 0;
    *(__int64 *)((char *)v94.m128i_i64 + 4) = 0LL;
    v94.m128i_i8[12] = 0;
    v80 = 0LL;
    while ( 1 )
    {
      if ( !v94.m128i_i8[0] )
      {
        if ( (((unsigned int)dword_40F520[(*(_BYTE *)n[0] >> 5) & 7] >> *(_BYTE *)n[0]) & 1) != 0 )
        {
          n[1] = 1LL;
          v27 = *(char *)n[0];
          v96.m128i_i8[0] = 1;
          v96.m128i_i32[1] = v27;
          v94.m128i_i8[12] = 1;
          goto LABEL_33;
        }
        if ( !mbsinit((const mbstate_t *)((char *)v94.m128i_i64 + 4)) )
          goto LABEL_172;
        v94.m128i_i8[0] = 1;
      }
      v47 = __ctype_get_mb_cur_max();
      v78 = n[0];
      v48 = sub_409040(n[0], v47);
      v49 = sub_40B170((char *)v96.m128i_i64 + 4, v78, v48, (char *)v94.m128i_i64 + 4);
      n[1] = v49;
      if ( v49 == -1 )
      {
        n[1] = 1LL;
        v96.m128i_i8[0] = 0;
        v94.m128i_i8[12] = 1;
        goto LABEL_85;
      }
      if ( v49 == -2 )
        break;
      if ( !v49 )
      {
        n[1] = 1LL;
        if ( *(_BYTE *)n[0] )
          goto LABEL_173;
        if ( v96.m128i_i32[1] )
          goto LABEL_161;
      }
      v96.m128i_i8[0] = 1;
      if ( mbsinit((const mbstate_t *)((char *)v94.m128i_i64 + 4)) )
        v94.m128i_i8[0] = 0;
      v94.m128i_i8[12] = 1;
LABEL_33:
      if ( !v96.m128i_i32[1] )
        return 0LL;
      if ( ((unsigned __int8)v26 & (v24 > 9)) != 0 )
      {
        if ( v25 >= 5 * v24 )
          goto LABEL_106;
        ++v25;
        v26 &= v24 > 9;
      }
      else
      {
        ++v25;
      }
LABEL_37:
      if ( v85 )
      {
        if ( v96.m128i_i32[1] == v86[0] )
          goto LABEL_39;
LABEL_66:
        v42 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v42 = n[1];
      if ( n[1] == v84 && !memcmp((const void *)n[0], v83, n[1]) )
      {
LABEL_39:
        v28 = *a2;
        si128 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v30 = _mm_load_si128(&v94);
        ps[0] = 0;
        *(__m128i *)s1 = si128;
        v31 = _mm_load_si128(&v96);
        s1[0] = (void *)(si128.m128i_i64[1] + si128.m128i_i64[0]);
        v32 = _mm_load_si128(&v97);
        *(__m128i *)&v98[0].__count = v30;
        v100[0] = (__int128)v31;
        v33 = dword_40F520[(unsigned __int8)v28 >> 5];
        v100[1] = (__int128)v32;
        v98[1].__wchb[0] = 0;
        v102 = 0;
        *(_QWORD *)&ps[4] = 0LL;
        if ( ((v33 >> v28) & 1) != 0 )
        {
          v104 = 1LL;
          v106[0] = v28;
          v105 = 1;
          v102 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((const mbstate_t *)&ps[4]) )
        {
          ps[0] = 1;
          v62 = __ctype_get_mb_cur_max();
          v79 = s2;
          v63 = sub_409040(s2, v62);
          v64 = sub_40B170(v106, v79, v63, &ps[4]);
          v104 = v64;
          switch ( v64 )
          {
            case -1LL:
              v104 = 1LL;
              v105 = 0;
              break;
            case -2LL:
              v73 = strlen((const char *)s2);
              v105 = 0;
              v104 = v73;
              break;
            case 0LL:
              v104 = 1LL;
              if ( !*(_BYTE *)s2 )
              {
                if ( !v106[0] )
                  goto LABEL_142;
LABEL_161:
                sub_405D00();
              }
LABEL_173:
              __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
            default:
LABEL_142:
              v105 = 1;
              if ( mbsinit((const mbstate_t *)&ps[4]) )
                ps[0] = 0;
              v102 = 1;
LABEL_41:
              if ( !v106[0] )
                abort();
              break;
          }
          v102 = 0;
          ++v25;
          s2 = (char *)s2 + v104;
          while ( 2 )
          {
            if ( ps[0] )
            {
LABEL_55:
              v38 = __ctype_get_mb_cur_max();
              v39 = s2;
              v40 = sub_409040(s2, v38);
              v41 = sub_40B170(v106, v39, v40, &ps[4]);
              v104 = v41;
              if ( v41 == -1 )
              {
                v104 = 1LL;
                v105 = 0;
                v102 = 1;
              }
              else if ( v41 == -2 )
              {
                v50 = strlen((const char *)s2);
                v105 = 0;
                v104 = v50;
                v102 = 1;
              }
              else
              {
                if ( !v41 )
                {
                  v104 = 1LL;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_173;
                  if ( v106[0] )
                    goto LABEL_161;
                }
                v105 = 1;
                if ( mbsinit((const mbstate_t *)&ps[4]) )
                  ps[0] = 0;
                v102 = 1;
                if ( !v106[0] )
                  return n[0];
              }
            }
            else
            {
              if ( (((unsigned int)dword_40F520[(*(_BYTE *)s2 >> 5) & 7] >> *(_BYTE *)s2) & 1) == 0 )
              {
                if ( !mbsinit((const mbstate_t *)&ps[4]) )
                  goto LABEL_172;
                ps[0] = 1;
                goto LABEL_55;
              }
              v104 = 1LL;
              v34 = *(char *)s2;
              v105 = 1;
              v106[0] = v34;
              v102 = 1;
              if ( !v34 )
                return n[0];
            }
            if ( !v98[1].__wchb[0] )
            {
              if ( !LOBYTE(v98[0].__count) )
              {
                if ( (((unsigned int)dword_40F520[(*(_BYTE *)s1[0] >> 5) & 7] >> *(_BYTE *)s1[0]) & 1) != 0 )
                {
                  s1[1] = (void *)1;
                  v35 = *(char *)s1[0];
                  LOBYTE(v100[0]) = 1;
                  DWORD1(v100[0]) = v35;
                  v98[1].__wchb[0] = 1;
LABEL_49:
                  v36 = DWORD1(v100[0]);
                  if ( !DWORD1(v100[0]) )
                    return 0LL;
LABEL_50:
                  if ( v105 )
                  {
                    v37 = v106[0] != v36;
LABEL_52:
                    if ( v37 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned __int64)s1[1];
                    ++v25;
                    s2 = (char *)s2 + v104;
                    v98[1].__wchb[0] = 0;
                    v102 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != (void *)v104 )
                    goto LABEL_66;
                  v37 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((const mbstate_t *)&v98[0]) )
                  goto LABEL_172;
                LOBYTE(v98[0].__count) = 1;
              }
              v43 = __ctype_get_mb_cur_max();
              v44 = s1[0];
              v45 = sub_409040(s1[0], v43);
              v46 = (void *)sub_40B170((char *)v100 + 4, v44, v45, &v98[0]);
              s1[1] = v46;
              if ( v46 == (void *)-1LL )
              {
                s1[1] = (void *)1;
                LOBYTE(v100[0]) = 0;
                v98[1].__wchb[0] = 1;
              }
              else
              {
                if ( v46 != (void *)-2LL )
                {
                  if ( !v46 )
                  {
                    s1[1] = (void *)1;
                    if ( *(_BYTE *)s1[0] )
                      goto LABEL_173;
                    if ( DWORD1(v100[0]) )
                      goto LABEL_161;
                  }
                  LOBYTE(v100[0]) = 1;
                  if ( mbsinit((const mbstate_t *)&v98[0]) )
                    LOBYTE(v98[0].__count) = 0;
                  v36 = DWORD1(v100[0]);
                  v98[1].__wchb[0] = 1;
                  if ( !DWORD1(v100[0]) )
                    return 0LL;
                  goto LABEL_50;
                }
                v51 = (void *)strlen((const char *)s1[0]);
                LOBYTE(v100[0]) = 0;
                s1[1] = v51;
                v98[1].__wchb[0] = 1;
              }
              goto LABEL_65;
            }
            break;
          }
          if ( LOBYTE(v100[0]) )
            goto LABEL_49;
          goto LABEL_65;
        }
LABEL_172:
        __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v42;
      ++v24;
      v94.m128i_i8[12] = 0;
    }
    v60 = strlen((const char *)n[0]);
    v96.m128i_i8[0] = 0;
    n[1] = v60;
    v94.m128i_i8[12] = 1;
LABEL_85:
    if ( ((unsigned __int8)v26 & (v24 > 9)) == 0 )
    {
      ++v25;
      goto LABEL_88;
    }
    if ( v25 < 5 * v24 )
    {
      ++v25;
      v26 &= v24 > 9;
      goto LABEL_88;
    }
LABEL_106:
    v52 = v25 - v80;
    if ( v25 != v80 )
    {
      if ( !v89 )
        goto LABEL_110;
      if ( v92 )
        goto LABEL_113;
      while ( 1 )
      {
        v89 = 0;
        s += v91;
        if ( !--v52 )
          goto LABEL_129;
LABEL_110:
        if ( !v87 )
        {
          if ( (((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1) != 0 )
          {
            v91 = 1LL;
            v53 = *s;
            v92 = 1;
            v93[0] = v53;
            v89 = 1;
            goto LABEL_113;
          }
          if ( !mbsinit(&v88) )
            goto LABEL_172;
          v87 = 1;
        }
        v55 = __ctype_get_mb_cur_max();
        v56 = s;
        v57 = sub_409040(s, v55);
        v58 = sub_40B170(v93, v56, v57, &v88);
        v91 = v58;
        switch ( v58 )
        {
          case -1LL:
            v91 = 1LL;
            v92 = 0;
            continue;
          case -2LL:
            v59 = strlen(s);
            v92 = 0;
            v91 = v59;
            continue;
          case 0LL:
            v91 = 1LL;
            if ( *s )
              goto LABEL_173;
            if ( v93[0] )
              goto LABEL_161;
            break;
        }
        v92 = 1;
        if ( mbsinit(&v88) )
          v87 = 0;
        v89 = 1;
LABEL_113:
        if ( !v93[0] )
          goto LABEL_114;
      }
    }
    if ( v89 )
    {
      if ( !v92 )
        goto LABEL_133;
      goto LABEL_132;
    }
LABEL_129:
    if ( !v87 )
    {
      if ( (((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1) != 0 )
      {
        v91 = 1LL;
        v61 = *s;
        v92 = 1;
        v93[0] = v61;
        v89 = 1;
        goto LABEL_132;
      }
      if ( !mbsinit(&v88) )
        goto LABEL_172;
      v87 = 1;
    }
    v65 = __ctype_get_mb_cur_max();
    v66 = s;
    v67 = sub_409040(s, v65);
    v68 = sub_40B170(v93, v66, v67, &v88);
    v91 = v68;
    switch ( v68 )
    {
      case -1LL:
        v91 = 1LL;
        v92 = 0;
        v89 = 1;
        goto LABEL_133;
      case -2LL:
        v74 = strlen(s);
        v92 = 0;
        v91 = v74;
        v89 = 1;
        goto LABEL_133;
      case 0LL:
        v91 = 1LL;
        if ( *s )
          goto LABEL_173;
        if ( v93[0] )
          goto LABEL_161;
        break;
    }
    v92 = 1;
    if ( mbsinit(&v88) )
      v87 = 0;
    v89 = 1;
LABEL_132:
    if ( !v93[0] )
    {
LABEL_114:
      v26 = sub_405D20(a1, (unsigned __int64)a2, (char **)ps);
      if ( v26 )
        return *(_QWORD *)ps;
      v54 = v96.m128i_i8[0];
LABEL_134:
      v80 = v25++;
      if ( !v54 )
        goto LABEL_88;
      goto LABEL_37;
    }
LABEL_133:
    v54 = v96.m128i_i8[0];
    v26 = 1;
    goto LABEL_134;
  }
  v4 = *a2;
  result = (size_t)a1;
  if ( !*a2 )
    return result;
  v6 = *a1;
  if ( !*a1 )
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
    v18 = a2[1];
    if ( !v18 )
      return (size_t)v3;
    if ( !*v15 )
      return 0LL;
    v14 = v9 + 2;
    if ( v18 == *v15 )
      break;
LABEL_12:
    v16 = v11 & (v8 > 9);
    if ( v16 )
    {
      if ( v14 < 5 * v8 || v7 && (v76 = v7, v12 = strnlen(v7, v14 - v10), v10 = v14, v7 = &v76[v12], v76[v12]) )
      {
        v11 = v16;
      }
      else
      {
        v77 = v10;
        v13 = strlen(a2);
        v11 = sub_405B80(v15, (__int64)a2, v13, ps);
        v10 = v77;
        if ( v11 )
          return *(_QWORD *)ps;
        v7 = 0LL;
      }
    }
    v6 = *v15;
    v3 = (char *)v15;
    v9 = v14;
  }
  v19 = -(__int64)v9;
  v20 = &a2[v19];
  v21 = &v3[v19];
  while ( 1 )
  {
    v23 = v20[v14];
    if ( !v23 )
      return (size_t)v3;
    v22 = v21[v14];
    if ( !v22 )
      return 0LL;
    ++v14;
    if ( v23 != v22 )
      goto LABEL_12;
  }
}

size_t __fastcall sub_4066F0(char *a1, char *a2)
{
  char *v3; // rbp
  char v4; // r15
  size_t result; // rax
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
  char v16; // bp
  int v17; // ecx
  char v18; // cl
  __int64 v19; // rdx
  char *v20; // rdi
  char *v21; // rdx
  char v22; // si
  char v23; // cl
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  char v26; // r14
  __int32 v27; // eax
  int v28; // ecx
  __m128i si128; // xmm1
  __m128i v30; // xmm0
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  bool v37; // al
  size_t v38; // rax
  void *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rax
  size_t v42; // r15
  size_t v43; // rax
  void *v44; // r15
  __int64 v45; // rax
  void *v46; // rax
  size_t v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  size_t v50; // rax
  void *v51; // rax
  unsigned __int64 v52; // r14
  int v53; // eax
  __int8 v54; // dl
  size_t v55; // rax
  char *v56; // r15
  __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  int v61; // eax
  size_t v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  size_t v65; // rax
  char *v66; // r14
  __int64 v67; // rax
  __int64 v68; // rax
  size_t mb_cur_max; // rax
  char *v70; // r12
  __int64 v71; // rax
  __int64 v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  const char *v76; // [rsp+0h] [rbp-188h]
  unsigned __int64 v77; // [rsp+0h] [rbp-188h]
  size_t v78; // [rsp+0h] [rbp-188h]
  void *v79; // [rsp+0h] [rbp-188h]
  unsigned __int64 v80; // [rsp+8h] [rbp-180h]
  mbstate_t v81; // [rsp+14h] [rbp-174h] BYREF
  char v82; // [rsp+1Ch] [rbp-16Ch]
  char *v83; // [rsp+20h] [rbp-168h]
  size_t v84; // [rsp+28h] [rbp-160h]
  char v85; // [rsp+30h] [rbp-158h]
  int v86[7]; // [rsp+34h] [rbp-154h] BYREF
  char v87; // [rsp+50h] [rbp-138h]
  mbstate_t v88; // [rsp+54h] [rbp-134h] BYREF
  char v89; // [rsp+5Ch] [rbp-12Ch]
  char *s; // [rsp+60h] [rbp-128h]
  size_t v91; // [rsp+68h] [rbp-120h]
  char v92; // [rsp+70h] [rbp-118h]
  int v93[7]; // [rsp+74h] [rbp-114h] BYREF
  __m128i v94; // [rsp+90h] [rbp-F8h] BYREF
  size_t n[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __m128i v96; // [rsp+B0h] [rbp-D8h] BYREF
  __m128i v97; // [rsp+C0h] [rbp-C8h] BYREF
  mbstate_t v98[2]; // [rsp+D0h] [rbp-B8h] BYREF
  void *s1[2]; // [rsp+E0h] [rbp-A8h]
  __int128 v100[2]; // [rsp+F0h] [rbp-98h] BYREF
  char ps[12]; // [rsp+110h] [rbp-78h] BYREF
  char v102; // [rsp+11Ch] [rbp-6Ch]
  void *s2; // [rsp+120h] [rbp-68h]
  size_t v104; // [rsp+128h] [rbp-60h]
  char v105; // [rsp+130h] [rbp-58h]
  int v106[21]; // [rsp+134h] [rbp-54h] BYREF

  v3 = a1;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    v17 = *a2;
    v83 = a2;
    v82 = 0;
    v81 = 0LL;
    if ( (((unsigned int)dword_40F520[(unsigned __int8)v17 >> 5] >> v17) & 1) != 0 )
    {
      v84 = 1LL;
      v86[0] = v17;
      v85 = 1;
      v82 = 1;
LABEL_17:
      if ( !v86[0] )
        return (size_t)v3;
      goto LABEL_29;
    }
    if ( !mbsinit(&v81) )
      goto LABEL_172;
    mb_cur_max = __ctype_get_mb_cur_max();
    v70 = v83;
    v71 = sub_409040(v83, mb_cur_max);
    v72 = sub_40B170(v86, v70, v71, &v81);
    v84 = v72;
    if ( v72 == -1 )
    {
      v84 = 1LL;
      v85 = 0;
      v82 = 1;
    }
    else
    {
      if ( v72 != -2 )
      {
        if ( !v72 )
        {
          v84 = 1LL;
          if ( *v83 )
            goto LABEL_173;
          if ( v86[0] )
            goto LABEL_161;
        }
        v85 = 1;
        mbsinit(&v81);
        v82 = 1;
        goto LABEL_17;
      }
      v75 = strlen(v83);
      v85 = 0;
      v84 = v75;
      v82 = 1;
    }
LABEL_29:
    s = a2;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 1;
    v87 = 0;
    v88 = 0LL;
    v89 = 0;
    n[0] = (size_t)a1;
    v94.m128i_i8[0] = 0;
    *(__int64 *)((char *)v94.m128i_i64 + 4) = 0LL;
    v94.m128i_i8[12] = 0;
    v80 = 0LL;
    while ( 1 )
    {
      if ( !v94.m128i_i8[0] )
      {
        if ( (((unsigned int)dword_40F520[(*(_BYTE *)n[0] >> 5) & 7] >> *(_BYTE *)n[0]) & 1) != 0 )
        {
          n[1] = 1LL;
          v27 = *(char *)n[0];
          v96.m128i_i8[0] = 1;
          v96.m128i_i32[1] = v27;
          v94.m128i_i8[12] = 1;
          goto LABEL_33;
        }
        if ( !mbsinit((const mbstate_t *)((char *)v94.m128i_i64 + 4)) )
          goto LABEL_172;
        v94.m128i_i8[0] = 1;
      }
      v47 = __ctype_get_mb_cur_max();
      v78 = n[0];
      v48 = sub_409040(n[0], v47);
      v49 = sub_40B170((char *)v96.m128i_i64 + 4, v78, v48, (char *)v94.m128i_i64 + 4);
      n[1] = v49;
      if ( v49 == -1 )
      {
        n[1] = 1LL;
        v96.m128i_i8[0] = 0;
        v94.m128i_i8[12] = 1;
        goto LABEL_85;
      }
      if ( v49 == -2 )
        break;
      if ( !v49 )
      {
        n[1] = 1LL;
        if ( *(_BYTE *)n[0] )
          goto LABEL_173;
        if ( v96.m128i_i32[1] )
          goto LABEL_161;
      }
      v96.m128i_i8[0] = 1;
      if ( mbsinit((const mbstate_t *)((char *)v94.m128i_i64 + 4)) )
        v94.m128i_i8[0] = 0;
      v94.m128i_i8[12] = 1;
LABEL_33:
      if ( !v96.m128i_i32[1] )
        return 0LL;
      if ( ((unsigned __int8)v26 & (v24 > 9)) != 0 )
      {
        if ( v25 >= 5 * v24 )
          goto LABEL_106;
        ++v25;
        v26 &= v24 > 9;
      }
      else
      {
        ++v25;
      }
LABEL_37:
      if ( v85 )
      {
        if ( v96.m128i_i32[1] == v86[0] )
          goto LABEL_39;
LABEL_66:
        v42 = n[1];
        goto LABEL_67;
      }
LABEL_88:
      v42 = n[1];
      if ( n[1] == v84 && !memcmp((const void *)n[0], v83, n[1]) )
      {
LABEL_39:
        v28 = *a2;
        si128 = _mm_load_si128((const __m128i *)n);
        s2 = a2;
        v30 = _mm_load_si128(&v94);
        ps[0] = 0;
        *(__m128i *)s1 = si128;
        v31 = _mm_load_si128(&v96);
        s1[0] = (void *)(si128.m128i_i64[1] + si128.m128i_i64[0]);
        v32 = _mm_load_si128(&v97);
        *(__m128i *)&v98[0].__count = v30;
        v100[0] = (__int128)v31;
        v33 = dword_40F520[(unsigned __int8)v28 >> 5];
        v100[1] = (__int128)v32;
        v98[1].__wchb[0] = 0;
        v102 = 0;
        *(_QWORD *)&ps[4] = 0LL;
        if ( ((v33 >> v28) & 1) != 0 )
        {
          v104 = 1LL;
          v106[0] = v28;
          v105 = 1;
          v102 = 1;
          goto LABEL_41;
        }
        if ( mbsinit((const mbstate_t *)&ps[4]) )
        {
          ps[0] = 1;
          v62 = __ctype_get_mb_cur_max();
          v79 = s2;
          v63 = sub_409040(s2, v62);
          v64 = sub_40B170(v106, v79, v63, &ps[4]);
          v104 = v64;
          switch ( v64 )
          {
            case -1LL:
              v104 = 1LL;
              v105 = 0;
              break;
            case -2LL:
              v73 = strlen((const char *)s2);
              v105 = 0;
              v104 = v73;
              break;
            case 0LL:
              v104 = 1LL;
              if ( !*(_BYTE *)s2 )
              {
                if ( !v106[0] )
                  goto LABEL_142;
LABEL_161:
                sub_405D00();
              }
LABEL_173:
              __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xB2u, "mbuiter_multi_next");
            default:
LABEL_142:
              v105 = 1;
              if ( mbsinit((const mbstate_t *)&ps[4]) )
                ps[0] = 0;
              v102 = 1;
LABEL_41:
              if ( !v106[0] )
                abort();
              break;
          }
          v102 = 0;
          ++v25;
          s2 = (char *)s2 + v104;
          while ( 2 )
          {
            if ( ps[0] )
            {
LABEL_55:
              v38 = __ctype_get_mb_cur_max();
              v39 = s2;
              v40 = sub_409040(s2, v38);
              v41 = sub_40B170(v106, v39, v40, &ps[4]);
              v104 = v41;
              if ( v41 == -1 )
              {
                v104 = 1LL;
                v105 = 0;
                v102 = 1;
              }
              else if ( v41 == -2 )
              {
                v50 = strlen((const char *)s2);
                v105 = 0;
                v104 = v50;
                v102 = 1;
              }
              else
              {
                if ( !v41 )
                {
                  v104 = 1LL;
                  if ( *(_BYTE *)s2 )
                    goto LABEL_173;
                  if ( v106[0] )
                    goto LABEL_161;
                }
                v105 = 1;
                if ( mbsinit((const mbstate_t *)&ps[4]) )
                  ps[0] = 0;
                v102 = 1;
                if ( !v106[0] )
                  return n[0];
              }
            }
            else
            {
              if ( (((unsigned int)dword_40F520[(*(_BYTE *)s2 >> 5) & 7] >> *(_BYTE *)s2) & 1) == 0 )
              {
                if ( !mbsinit((const mbstate_t *)&ps[4]) )
                  goto LABEL_172;
                ps[0] = 1;
                goto LABEL_55;
              }
              v104 = 1LL;
              v34 = *(char *)s2;
              v105 = 1;
              v106[0] = v34;
              v102 = 1;
              if ( !v34 )
                return n[0];
            }
            if ( !v98[1].__wchb[0] )
            {
              if ( !LOBYTE(v98[0].__count) )
              {
                if ( (((unsigned int)dword_40F520[(*(_BYTE *)s1[0] >> 5) & 7] >> *(_BYTE *)s1[0]) & 1) != 0 )
                {
                  s1[1] = (void *)1;
                  v35 = *(char *)s1[0];
                  LOBYTE(v100[0]) = 1;
                  DWORD1(v100[0]) = v35;
                  v98[1].__wchb[0] = 1;
LABEL_49:
                  v36 = DWORD1(v100[0]);
                  if ( !DWORD1(v100[0]) )
                    return 0LL;
LABEL_50:
                  if ( v105 )
                  {
                    v37 = v106[0] != v36;
LABEL_52:
                    if ( v37 )
                      goto LABEL_66;
                    s1[0] = (char *)s1[0] + (unsigned __int64)s1[1];
                    ++v25;
                    s2 = (char *)s2 + v104;
                    v98[1].__wchb[0] = 0;
                    v102 = 0;
                    continue;
                  }
LABEL_65:
                  if ( s1[1] != (void *)v104 )
                    goto LABEL_66;
                  v37 = memcmp(s1[0], s2, (size_t)s1[1]) != 0;
                  goto LABEL_52;
                }
                if ( !mbsinit((const mbstate_t *)&v98[0]) )
                  goto LABEL_172;
                LOBYTE(v98[0].__count) = 1;
              }
              v43 = __ctype_get_mb_cur_max();
              v44 = s1[0];
              v45 = sub_409040(s1[0], v43);
              v46 = (void *)sub_40B170((char *)v100 + 4, v44, v45, &v98[0]);
              s1[1] = v46;
              if ( v46 == (void *)-1LL )
              {
                s1[1] = (void *)1;
                LOBYTE(v100[0]) = 0;
                v98[1].__wchb[0] = 1;
              }
              else
              {
                if ( v46 != (void *)-2LL )
                {
                  if ( !v46 )
                  {
                    s1[1] = (void *)1;
                    if ( *(_BYTE *)s1[0] )
                      goto LABEL_173;
                    if ( DWORD1(v100[0]) )
                      goto LABEL_161;
                  }
                  LOBYTE(v100[0]) = 1;
                  if ( mbsinit((const mbstate_t *)&v98[0]) )
                    LOBYTE(v98[0].__count) = 0;
                  v36 = DWORD1(v100[0]);
                  v98[1].__wchb[0] = 1;
                  if ( !DWORD1(v100[0]) )
                    return 0LL;
                  goto LABEL_50;
                }
                v51 = (void *)strlen((const char *)s1[0]);
                LOBYTE(v100[0]) = 0;
                s1[1] = v51;
                v98[1].__wchb[0] = 1;
              }
              goto LABEL_65;
            }
            break;
          }
          if ( LOBYTE(v100[0]) )
            goto LABEL_49;
          goto LABEL_65;
        }
LABEL_172:
        __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
      }
LABEL_67:
      n[0] += v42;
      ++v24;
      v94.m128i_i8[12] = 0;
    }
    v60 = strlen((const char *)n[0]);
    v96.m128i_i8[0] = 0;
    n[1] = v60;
    v94.m128i_i8[12] = 1;
LABEL_85:
    if ( ((unsigned __int8)v26 & (v24 > 9)) == 0 )
    {
      ++v25;
      goto LABEL_88;
    }
    if ( v25 < 5 * v24 )
    {
      ++v25;
      v26 &= v24 > 9;
      goto LABEL_88;
    }
LABEL_106:
    v52 = v25 - v80;
    if ( v25 != v80 )
    {
      if ( !v89 )
        goto LABEL_110;
      if ( v92 )
        goto LABEL_113;
      while ( 1 )
      {
        v89 = 0;
        s += v91;
        if ( !--v52 )
          goto LABEL_129;
LABEL_110:
        if ( !v87 )
        {
          if ( (((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1) != 0 )
          {
            v91 = 1LL;
            v53 = *s;
            v92 = 1;
            v93[0] = v53;
            v89 = 1;
            goto LABEL_113;
          }
          if ( !mbsinit(&v88) )
            goto LABEL_172;
          v87 = 1;
        }
        v55 = __ctype_get_mb_cur_max();
        v56 = s;
        v57 = sub_409040(s, v55);
        v58 = sub_40B170(v93, v56, v57, &v88);
        v91 = v58;
        switch ( v58 )
        {
          case -1LL:
            v91 = 1LL;
            v92 = 0;
            continue;
          case -2LL:
            v59 = strlen(s);
            v92 = 0;
            v91 = v59;
            continue;
          case 0LL:
            v91 = 1LL;
            if ( *s )
              goto LABEL_173;
            if ( v93[0] )
              goto LABEL_161;
            break;
        }
        v92 = 1;
        if ( mbsinit(&v88) )
          v87 = 0;
        v89 = 1;
LABEL_113:
        if ( !v93[0] )
          goto LABEL_114;
      }
    }
    if ( v89 )
    {
      if ( !v92 )
        goto LABEL_133;
      goto LABEL_132;
    }
LABEL_129:
    if ( !v87 )
    {
      if ( (((unsigned int)dword_40F520[((unsigned __int8)*s >> 5) & 7] >> *s) & 1) != 0 )
      {
        v91 = 1LL;
        v61 = *s;
        v92 = 1;
        v93[0] = v61;
        v89 = 1;
        goto LABEL_132;
      }
      if ( !mbsinit(&v88) )
        goto LABEL_172;
      v87 = 1;
    }
    v65 = __ctype_get_mb_cur_max();
    v66 = s;
    v67 = sub_409040(s, v65);
    v68 = sub_40B170(v93, v66, v67, &v88);
    v91 = v68;
    switch ( v68 )
    {
      case -1LL:
        v91 = 1LL;
        v92 = 0;
        v89 = 1;
        goto LABEL_133;
      case -2LL:
        v74 = strlen(s);
        v92 = 0;
        v91 = v74;
        v89 = 1;
        goto LABEL_133;
      case 0LL:
        v91 = 1LL;
        if ( *s )
          goto LABEL_173;
        if ( v93[0] )
          goto LABEL_161;
        break;
    }
    v92 = 1;
    if ( mbsinit(&v88) )
      v87 = 0;
    v89 = 1;
LABEL_132:
    if ( !v93[0] )
    {
LABEL_114:
      v26 = sub_405D20(a1, (unsigned __int64)a2, (char **)ps);
      if ( v26 )
        return *(_QWORD *)ps;
      v54 = v96.m128i_i8[0];
LABEL_134:
      v80 = v25++;
      if ( !v54 )
        goto LABEL_88;
      goto LABEL_37;
    }
LABEL_133:
    v54 = v96.m128i_i8[0];
    v26 = 1;
    goto LABEL_134;
  }
  v4 = *a2;
  result = (size_t)a1;
  if ( !*a2 )
    return result;
  v6 = *a1;
  if ( !*a1 )
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
    v18 = a2[1];
    if ( !v18 )
      return (size_t)v3;
    if ( !*v15 )
      return 0LL;
    v14 = v9 + 2;
    if ( v18 == *v15 )
      break;
LABEL_12:
    v16 = v11 & (v8 > 9);
    if ( v16 )
    {
      if ( v14 < 5 * v8 || v7 && (v76 = v7, v12 = strnlen(v7, v14 - v10), v10 = v14, v7 = &v76[v12], v76[v12]) )
      {
        v11 = v16;
      }
      else
      {
        v77 = v10;
        v13 = strlen(a2);
        v11 = sub_405B80(v15, (__int64)a2, v13, ps);
        v10 = v77;
        if ( v11 )
          return *(_QWORD *)ps;
        v7 = 0LL;
      }
    }
    v6 = *v15;
    v3 = (char *)v15;
    v9 = v14;
  }
  v19 = -(__int64)v9;
  v20 = &a2[v19];
  v21 = &v3[v19];
  while ( 1 )
  {
    v23 = v20[v14];
    if ( !v23 )
      return (size_t)v3;
    v22 = v21[v14];
    if ( !v22 )
      return 0LL;
    ++v14;
    if ( v23 != v22 )
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
        return (const char *)&unk_40DDCE;
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
      return (const char *)&unk_40DDD2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "*iter->cur.ptr == '\\0'" + 21;
  return v6;
}

unsigned __int64 __fastcall sub_407760(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        const char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v11; // ebp
  char v12; // zf
  size_t mb_cur_max; // rax
  int v14; // edx
  int v15; // r11d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // r11
  int v20; // r10d
  unsigned __int64 v21; // r13
  int v22; // r8d
  _BYTE *v23; // r9
  size_t v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r12
  unsigned __int8 v27; // al
  char *v28; // rax
  char i; // al
  size_t v30; // rax
  bool v31; // al
  char v32; // cl
  int v33; // esi
  int v34; // r10d
  int v35; // r11d
  int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  const unsigned __int16 **v39; // rax
  unsigned __int64 v40; // rcx
  int v41; // edx
  int v42; // eax
  __int64 v44; // rsi
  int v45; // eax
  char v46; // dl
  const char *v47; // rax
  size_t v48; // rax
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // r15
  _BYTE *v53; // rdx
  int v54; // edi
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int8 v57; // si
  bool v58; // bp
  int v59; // eax
  unsigned __int64 v60; // rsi
  _BYTE *v61; // rdi
  unsigned __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  unsigned __int8 v66; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 v68; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v69; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+20h] [rbp-98h]
  _BYTE *v72; // [rsp+28h] [rbp-90h]
  int v73; // [rsp+28h] [rbp-90h]
  unsigned __int8 v74; // [rsp+28h] [rbp-90h]
  _BYTE *v75; // [rsp+28h] [rbp-90h]
  unsigned __int64 v76; // [rsp+28h] [rbp-90h]
  unsigned __int8 v77; // [rsp+30h] [rbp-88h]
  unsigned __int8 v78; // [rsp+30h] [rbp-88h]
  unsigned __int64 v79; // [rsp+30h] [rbp-88h]
  char v80; // [rsp+30h] [rbp-88h]
  int v81; // [rsp+30h] [rbp-88h]
  int v82; // [rsp+38h] [rbp-80h]
  unsigned __int64 v83; // [rsp+38h] [rbp-80h]
  int v84; // [rsp+38h] [rbp-80h]
  int v85; // [rsp+38h] [rbp-80h]
  _BYTE *v86; // [rsp+38h] [rbp-80h]
  int v87; // [rsp+40h] [rbp-78h]
  unsigned __int64 v88; // [rsp+40h] [rbp-78h]
  const char *s2; // [rsp+48h] [rbp-70h]
  size_t v90; // [rsp+50h] [rbp-68h]
  bool v92; // [rsp+5Dh] [rbp-5Bh]
  unsigned __int8 v93; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int64 v94; // [rsp+60h] [rbp-58h]
  _BYTE *v95; // [rsp+68h] [rbp-50h]
  wint_t wc; // [rsp+74h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+78h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v11 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v15 = a5;
  v90 = mb_cur_max;
  v16 = a4;
  switch ( a5 )
  {
    case 0:
      v92 = 0;
      v17 = 0LL;
      v66 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v66 = 0;
        goto LABEL_38;
      }
      v92 = 1;
      v17 = 0LL;
      v66 = 0;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    case 3:
      v92 = 1;
      v17 = 0LL;
      v15 = 2;
      v66 = 1;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    case 4:
      if ( v11 )
      {
LABEL_2:
        v92 = 1;
        v17 = 0LL;
        v15 = 2;
        v66 = 0;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      else
      {
        v66 = 1;
LABEL_38:
        if ( a2 )
          *a1 = 39;
        v92 = 0;
        v17 = 1LL;
        v15 = 2;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      break;
    case 5:
      if ( v11 )
      {
        v92 = 1;
        v17 = 0LL;
        v66 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v92 = 0;
        v17 = 1LL;
        v66 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v92 = 1;
      v17 = 0LL;
      v15 = 5;
      v66 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v92 = 0;
      v17 = 0LL;
      v66 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_407660("`", a5);
        v28 = (char *)sub_407660((char *)"'", a5);
        v16 = a4;
        v15 = a5;
        a9 = v28;
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
      v73 = v15;
      v69 = v16;
      v92 = v11 != 0;
      v30 = strlen(a9);
      v66 = 1;
      v16 = v69;
      n = v30;
      v15 = v73;
      s2 = a9;
      break;
    default:
      abort();
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
      LOBYTE(v11) = *(_BYTE *)(a3 + v21) != 0;
    if ( !(_BYTE)v11 )
    {
      v45 = v20;
      v34 = v19;
      v35 = v45;
      v27 = v17 == 0 && v92 && v45 == 2;
      if ( v27 )
        goto LABEL_132;
      if ( s2 )
      {
        if ( !v92 )
        {
          v46 = *s2;
          if ( *s2 )
          {
            v47 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                v9[v17] = v46;
              v46 = v47[++v17];
            }
            while ( v46 );
          }
        }
      }
      if ( v17 < v10 )
        v9[v17] = 0;
      return v17;
    }
    v23 = (_BYTE *)(a3 + v21);
    v68 = v66 & (v20 != 2);
    if ( v68 )
      break;
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        if ( !v66 )
        {
          if ( (a6 & 1) != 0 )
          {
            ++v21;
            continue;
          }
          if ( !v92 )
          {
            ++v21;
            v11 = v22;
            LOBYTE(v26) = 0;
            goto LABEL_148;
          }
          v11 = 0;
          if ( a7 )
          {
            v68 = 0;
            LOBYTE(v26) = 0;
            goto LABEL_18;
          }
          LOBYTE(v26) = 0;
          goto LABEL_122;
        }
LABEL_103:
        if ( v92 )
        {
          v64 = v20;
          v34 = v19;
          v35 = v64;
          v27 = v64 == 2;
          goto LABEL_132;
        }
        v68 = 0;
LABEL_105:
        LOBYTE(v14) = v20 == 2;
        v36 = v22 ^ 1;
        LOBYTE(v36) = (v20 == 2) & (v22 ^ 1);
        if ( (_BYTE)v36 )
        {
          if ( v17 < v10 )
            v9[v17] = 39;
          if ( v10 > v17 + 1 )
            v9[v17 + 1] = 36;
          if ( v10 > v17 + 2 )
            v9[v17 + 2] = 39;
          v37 = v17 + 3;
          if ( v10 <= v17 + 3 )
          {
            v17 += 4LL;
            ++v21;
            v22 = v36;
            LOBYTE(v26) = 48;
            goto LABEL_82;
          }
          v22 = v36;
LABEL_114:
          v9[v37] = 92;
        }
        else
        {
          v37 = v17;
          if ( v17 < v10 )
            goto LABEL_114;
        }
        v17 = v37 + 1;
        v38 = v21 + 1;
        if ( v20 == 2 )
        {
          ++v21;
          LOBYTE(v26) = 48;
          goto LABEL_82;
        }
        LOBYTE(v26) = 48;
        if ( v38 < v19 && (unsigned __int8)(*(_BYTE *)(a3 + v38) - 48) <= 9u )
        {
          if ( v10 > v17 )
            v9[v17] = 48;
          if ( v10 > v37 + 2 )
            v9[v37 + 2] = 48;
          v17 = v37 + 3;
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
      case 0xA:
        LOBYTE(v26) = 10;
        v32 = 110;
        goto LABEL_130;
      case 0xB:
        LOBYTE(v26) = 11;
        v32 = 118;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0xC:
        LOBYTE(v26) = 12;
        v32 = 102;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0xD:
        LOBYTE(v26) = 13;
        v32 = 114;
LABEL_130:
        LOBYTE(v14) = v20 == 2;
        v68 = v20 == 2 && v92;
        if ( !v68 )
          goto LABEL_88;
        v42 = v20;
        v34 = v19;
        v35 = v42;
        v27 = v68;
        goto LABEL_132;
      case 0x20:
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
        LOBYTE(v14) = v20 == 2;
        goto LABEL_64;
      case 0x23:
      case 0x7E:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_63;
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
        goto LABEL_127;
      case 0x27:
LABEL_73:
        v14 = 0;
        LOBYTE(v26) = 39;
        if ( v20 != 2 )
          goto LABEL_65;
        if ( v92 )
          goto LABEL_270;
        if ( v17 < v10 )
          v9[v17] = 39;
        if ( v10 > v17 + 1 )
          v9[v17 + 1] = 92;
        if ( v10 > v17 + 2 )
          v9[v17 + 2] = 39;
        v17 += 3LL;
        ++v21;
        v22 = 0;
        LOBYTE(v26) = 39;
LABEL_82:
        if ( !v68 )
          goto LABEL_33;
        goto LABEL_67;
      case 0x3F:
LABEL_69:
        if ( v20 == 2 )
        {
          if ( v92 )
          {
LABEL_270:
            v34 = v19;
            v35 = 2;
            v27 = v92;
LABEL_132:
            if ( v66 && v27 )
              v35 = 4;
            return sub_407760((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
          }
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
        if ( (a6 & 4) == 0 )
        {
          v14 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_65;
        }
        v14 = 0;
        LOBYTE(v26) = 63;
        if ( v21 + 2 >= v19 || *(_BYTE *)(a3 + v21 + 1) != 63 )
          goto LABEL_65;
        v26 = *(unsigned __int8 *)(a3 + v21 + 2);
        if ( (unsigned __int8)v26 > 0x3Eu || (v44 = 0x7000A38200000000LL, !_bittest64(&v44, v26)) )
        {
          LOBYTE(v26) = 63;
LABEL_65:
          v11 = (v14 | v66 ^ 1) ^ 1;
          LOBYTE(v11) = v92 | (v14 | v66 ^ 1) ^ 1;
          if ( (_BYTE)v11 )
          {
LABEL_17:
            v11 = 0;
            if ( !a7 )
              goto LABEL_121;
            goto LABEL_18;
          }
          goto LABEL_66;
        }
        if ( v92 )
          goto LABEL_269;
        if ( v17 < v10 )
          v9[v17] = 63;
        if ( v10 > v17 + 1 )
          v9[v17 + 1] = 34;
        if ( v10 > v17 + 2 )
          v9[v17 + 2] = 34;
        if ( v10 > v17 + 3 )
          v9[v17 + 3] = 63;
        v17 += 4LL;
        v14 = 0;
        v11 = 0;
        v21 += 2LL;
LABEL_118:
        if ( v66 && !(_BYTE)v14 )
        {
          if ( !a7 )
          {
LABEL_121:
            v27 = v20 == 2;
            if ( !v68 )
            {
LABEL_122:
              ++v21;
              v11 = v22 & (v11 ^ 1);
              goto LABEL_148;
            }
LABEL_20:
            if ( v92 )
            {
LABEL_92:
              v33 = v20;
              v34 = v19;
              v35 = v33;
              goto LABEL_132;
            }
LABEL_21:
            ++v21;
            goto LABEL_22;
          }
LABEL_18:
          if ( ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v26 >> 5)) >> v26) & 1) == 0 )
            goto LABEL_121;
          v27 = v20 == 2;
          goto LABEL_20;
        }
LABEL_66:
        ++v21;
        if ( !v68 )
        {
          v11 = v22 & (v11 ^ 1);
LABEL_148:
          if ( (_BYTE)v11 )
          {
            if ( v17 < v10 )
              v9[v17] = 39;
            if ( v10 > v17 + 1 )
              v9[v17 + 1] = 39;
            v17 += 2LL;
            v22 = 0;
          }
          goto LABEL_33;
        }
LABEL_67:
        v27 = v20 == 2;
LABEL_22:
        v14 = v22 ^ 1;
        if ( (v27 & ((unsigned __int8)v22 ^ 1)) != 0 )
        {
          if ( v10 > v17 )
            v9[v17] = 39;
          if ( v10 > v17 + 1 )
            v9[v17 + 1] = 36;
          if ( v10 > v17 + 2 )
            v9[v17 + 2] = 39;
          v17 += 3LL;
          LOBYTE(v14) = v27 & (v22 ^ 1);
          v22 = v14;
        }
        if ( v17 < v10 )
          v9[v17] = 92;
        ++v17;
LABEL_33:
        if ( v17 < v10 )
          v9[v17] = v26;
        ++v17;
        break;
      case 0x5C:
        if ( v20 == 2 )
        {
          if ( v92 )
            goto LABEL_270;
          ++v21;
          v11 = v22;
          LOBYTE(v26) = 92;
          goto LABEL_148;
        }
LABEL_87:
        v11 = v92 & v66;
        LOBYTE(v26) = 92;
        v32 = 92;
        v14 = v11;
        LOBYTE(v14) = (n != 0) & v11;
        if ( (_BYTE)v14 )
        {
          ++v21;
          v11 = v22;
          goto LABEL_148;
        }
LABEL_88:
        if ( !v66 )
          goto LABEL_65;
        v27 = v14;
        LOBYTE(v26) = v32;
        goto LABEL_20;
      case 0x7B:
      case 0x7D:
LABEL_60:
        v31 = v19 != 1;
        if ( v19 == -1LL )
          v31 = *(_BYTE *)(a3 + 1) != 0;
        LOBYTE(v14) = v20 == 2;
        if ( v31 )
          goto LABEL_65;
LABEL_63:
        if ( v21 )
          goto LABEL_65;
LABEL_64:
        v27 = v14 & v92;
        if ( ((unsigned __int8)v14 & v92) == 0 )
          goto LABEL_65;
        goto LABEL_206;
      default:
LABEL_124:
        if ( v90 == 1 )
        {
          v84 = v20;
          v79 = v19;
          v74 = v22;
          v39 = __ctype_b_loc();
          v22 = v74;
          v19 = v79;
          v20 = v84;
          v40 = 1LL;
          v41 = (*v39)[(unsigned __int8)v26];
          LOWORD(v41) = (unsigned __int16)v41 >> 14;
          v14 = v41 ^ 1;
          LOBYTE(v14) = v66 & v14;
        }
        else
        {
          ps = 0LL;
          if ( v19 == -1LL )
          {
            v85 = v20;
            v80 = v22;
            v75 = v23;
            v48 = strlen((const char *)a3);
            v20 = v85;
            LOBYTE(v22) = v80;
            v23 = v75;
            v19 = v48;
          }
          v94 = v17;
          v93 = v22;
          v49 = 0LL;
          v95 = v23;
          v86 = v9;
          v88 = v10;
          v76 = v19;
          v81 = v20;
          while ( 1 )
          {
            v50 = v21 + v49;
            v51 = sub_40B170(&wc, a3 + v21 + v49, v76 - (v21 + v49), &ps);
            v52 = v51;
            if ( !v51 )
            {
              v11 ^= 1u;
              v40 = v49;
              v9 = v86;
              v22 = v93;
              v17 = v94;
              v10 = v88;
              v14 = (unsigned __int8)(v11 & v66);
              v19 = v76;
              v20 = v81;
              goto LABEL_256;
            }
            if ( v51 == -1 )
            {
              v40 = v49;
              v22 = v93;
              v17 = v94;
              v9 = v86;
              v10 = v88;
              v19 = v76;
              v20 = v81;
              v14 = v66;
              goto LABEL_256;
            }
            if ( v51 == -2 )
              break;
            v27 = v92 && v81 == 2;
            if ( v27 && v52 != 1 )
            {
              v53 = (_BYTE *)(a3 + v50 + 1);
              do
              {
                if ( (unsigned __int8)(*v53 - 91) <= 0x21u && ((1LL << (*v53 - 91)) & 0x20000002BLL) != 0 )
                {
                  LODWORD(v9) = (_DWORD)v86;
                  LODWORD(v10) = v88;
                  v34 = v76;
                  v35 = v81;
                  goto LABEL_132;
                }
                ++v53;
              }
              while ( (_BYTE *)(a3 + v52 + v50) != v53 );
            }
            if ( !iswprint(wc) )
              v11 = 0;
            v49 += v52;
            if ( mbsinit(&ps) )
            {
              v40 = v49;
              v22 = v93;
              v17 = v94;
              v14 = v11 ^ 1;
              v9 = v86;
              v10 = v88;
              v19 = v76;
              v20 = v81;
              LOBYTE(v14) = v66 & (v11 ^ 1);
              goto LABEL_256;
            }
          }
          v19 = v76;
          v60 = v21 + v49;
          v61 = (_BYTE *)(a3 + v21 + v49);
          v62 = v49;
          v40 = v49;
          v22 = v93;
          v17 = v94;
          v9 = v86;
          v10 = v88;
          v20 = v81;
          if ( v60 < v76 && *v61 )
          {
            do
              ++v62;
            while ( v76 > v21 + v62 && v95[v62] );
            v40 = v62;
          }
          v14 = v66;
LABEL_256:
          if ( v40 > 1 )
            goto LABEL_210;
        }
        if ( (_BYTE)v14 )
        {
          v14 = v66;
LABEL_210:
          v55 = v21 + v40;
          v56 = 0;
          v57 = v68;
          while ( 1 )
          {
            if ( (_BYTE)v14 )
            {
              v58 = v20 == 2;
              v27 = v20 == 2;
              if ( v92 )
              {
LABEL_206:
                v54 = v20;
                v34 = v19;
                v35 = v54;
                goto LABEL_132;
              }
              v59 = v22 ^ 1;
              if ( (v58 & ((unsigned __int8)v22 ^ 1)) != 0 )
              {
                if ( v17 < v10 )
                  v9[v17] = 39;
                if ( v10 > v17 + 1 )
                  v9[v17 + 1] = 36;
                if ( v10 > v17 + 2 )
                  v9[v17 + 2] = 39;
                v17 += 3LL;
                LOBYTE(v59) = v58 & (v22 ^ 1);
                v22 = v59;
              }
              if ( v17 < v10 )
                v9[v17] = 92;
              if ( v10 > v17 + 1 )
                v9[v17 + 1] = ((unsigned __int8)v26 >> 6) + 48;
              if ( v10 > v17 + 2 )
                v9[v17 + 2] = (((unsigned __int8)v26 >> 3) & 7) + 48;
              ++v21;
              v17 += 3LL;
              LOBYTE(v26) = (v26 & 7) + 48;
              if ( v55 <= v21 )
                goto LABEL_33;
              v56 = v14;
            }
            else
            {
              v11 = v22 & (v56 ^ 1);
              if ( v57 )
              {
                if ( v17 < v10 )
                  v9[v17] = 92;
                ++v17;
              }
              if ( ++v21 >= v55 )
                goto LABEL_148;
              if ( (_BYTE)v11 )
              {
                if ( v17 < v10 )
                  v9[v17] = 39;
                if ( v10 > v17 + 1 )
                  v9[v17 + 1] = 39;
                v17 += 2LL;
                v57 = 0;
                v22 = 0;
              }
              else
              {
                v57 = 0;
              }
            }
            if ( v17 < v10 )
              v9[v17] = v26;
            LOBYTE(v26) = *(_BYTE *)(a3 + v21);
            ++v17;
          }
        }
LABEL_127:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_65;
    }
  }
  if ( !n )
    goto LABEL_275;
  if ( v19 == -1LL && n > 1 )
  {
    v82 = v20;
    v77 = v22;
    v24 = strlen((const char *)a3);
    v20 = v82;
    v22 = v77;
    v23 = (_BYTE *)(a3 + v21);
    v19 = v24;
  }
  if ( v21 + n > v19 )
    goto LABEL_275;
  v87 = v20;
  v83 = v19;
  v78 = v22;
  v72 = v23;
  v25 = memcmp(v23, s2, n);
  v23 = v72;
  v22 = v78;
  v19 = v83;
  v20 = v87;
  if ( v25 )
  {
LABEL_275:
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
      case 0xA:
LABEL_90:
        LOBYTE(v26) = 110;
        v27 = 0;
        goto LABEL_91;
      case 0xB:
LABEL_101:
        LOBYTE(v26) = 118;
        v27 = 0;
        goto LABEL_91;
      case 0xC:
LABEL_100:
        LOBYTE(v26) = 102;
        v27 = 0;
LABEL_91:
        if ( v92 )
          goto LABEL_92;
        goto LABEL_21;
      case 0xD:
        v68 = 0;
LABEL_96:
        LOBYTE(v26) = 13;
        v32 = 114;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0x20:
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
        v68 = 0;
LABEL_85:
        v14 = 0;
        goto LABEL_65;
      case 0x23:
      case 0x7E:
        v68 = 0;
LABEL_98:
        if ( v21 )
          goto LABEL_17;
        v14 = 0;
        goto LABEL_65;
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
        v68 = 0;
        goto LABEL_17;
      case 0x27:
        v68 = 0;
        goto LABEL_73;
      case 0x3F:
        v68 = 0;
        goto LABEL_69;
      case 0x5C:
        v68 = 0;
        goto LABEL_87;
      case 0x7B:
      case 0x7D:
        v68 = 0;
        goto LABEL_60;
      default:
        v68 = 0;
        goto LABEL_124;
    }
  }
  if ( !v92 )
  {
    LOBYTE(v26) = *v72;
    switch ( *v72 )
    {
      case 0:
        goto LABEL_105;
      case 7:
        goto LABEL_94;
      case 8:
        goto LABEL_93;
      case 9:
        goto LABEL_102;
      case 0xA:
        goto LABEL_90;
      case 0xB:
        goto LABEL_101;
      case 0xC:
        goto LABEL_100;
      case 0xD:
        goto LABEL_96;
      case 0x20:
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
        goto LABEL_85;
      case 0x23:
      case 0x7E:
        goto LABEL_98;
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
        goto LABEL_17;
      case 0x27:
        goto LABEL_73;
      case 0x3F:
        goto LABEL_69;
      case 0x5C:
        goto LABEL_87;
      case 0x7B:
      case 0x7D:
        goto LABEL_60;
      default:
        goto LABEL_124;
    }
  }
LABEL_269:
  v63 = v20;
  v34 = v19;
  v35 = v63;
  return sub_407760((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
}

unsigned __int64 __fastcall sub_407760(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        const char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v11; // ebp
  char v12; // zf
  size_t mb_cur_max; // rax
  int v14; // edx
  int v15; // r11d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // r11
  int v20; // r10d
  unsigned __int64 v21; // r13
  int v22; // r8d
  _BYTE *v23; // r9
  size_t v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r12
  unsigned __int8 v27; // al
  char *v28; // rax
  char i; // al
  size_t v30; // rax
  bool v31; // al
  char v32; // cl
  int v33; // esi
  int v34; // r10d
  int v35; // r11d
  int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  const unsigned __int16 **v39; // rax
  unsigned __int64 v40; // rcx
  int v41; // edx
  int v42; // eax
  __int64 v44; // rsi
  int v45; // eax
  char v46; // dl
  const char *v47; // rax
  size_t v48; // rax
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // r15
  _BYTE *v53; // rdx
  int v54; // edi
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int8 v57; // si
  bool v58; // bp
  int v59; // eax
  unsigned __int64 v60; // rsi
  _BYTE *v61; // rdi
  unsigned __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  unsigned __int8 v66; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 v68; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v69; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+20h] [rbp-98h]
  _BYTE *v72; // [rsp+28h] [rbp-90h]
  int v73; // [rsp+28h] [rbp-90h]
  unsigned __int8 v74; // [rsp+28h] [rbp-90h]
  _BYTE *v75; // [rsp+28h] [rbp-90h]
  unsigned __int64 v76; // [rsp+28h] [rbp-90h]
  unsigned __int8 v77; // [rsp+30h] [rbp-88h]
  unsigned __int8 v78; // [rsp+30h] [rbp-88h]
  unsigned __int64 v79; // [rsp+30h] [rbp-88h]
  char v80; // [rsp+30h] [rbp-88h]
  int v81; // [rsp+30h] [rbp-88h]
  int v82; // [rsp+38h] [rbp-80h]
  unsigned __int64 v83; // [rsp+38h] [rbp-80h]
  int v84; // [rsp+38h] [rbp-80h]
  int v85; // [rsp+38h] [rbp-80h]
  _BYTE *v86; // [rsp+38h] [rbp-80h]
  int v87; // [rsp+40h] [rbp-78h]
  unsigned __int64 v88; // [rsp+40h] [rbp-78h]
  const char *s2; // [rsp+48h] [rbp-70h]
  size_t v90; // [rsp+50h] [rbp-68h]
  bool v92; // [rsp+5Dh] [rbp-5Bh]
  unsigned __int8 v93; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int64 v94; // [rsp+60h] [rbp-58h]
  _BYTE *v95; // [rsp+68h] [rbp-50h]
  wint_t wc; // [rsp+74h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+78h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v11 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v15 = a5;
  v90 = mb_cur_max;
  v16 = a4;
  switch ( a5 )
  {
    case 0:
      v92 = 0;
      v17 = 0LL;
      v66 = 0;
      n = 0LL;
      s2 = 0LL;
      break;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v11 )
      {
        v66 = 0;
        goto LABEL_38;
      }
      v92 = 1;
      v17 = 0LL;
      v66 = 0;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    case 3:
      v92 = 1;
      v17 = 0LL;
      v15 = 2;
      v66 = 1;
      n = 1LL;
      s2 = "*iter->cur.ptr == '\\0'" + 21;
      break;
    case 4:
      if ( v11 )
      {
LABEL_2:
        v92 = 1;
        v17 = 0LL;
        v15 = 2;
        v66 = 0;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      else
      {
        v66 = 1;
LABEL_38:
        if ( a2 )
          *a1 = 39;
        v92 = 0;
        v17 = 1LL;
        v15 = 2;
        n = 1LL;
        s2 = "*iter->cur.ptr == '\\0'" + 21;
      }
      break;
    case 5:
      if ( v11 )
      {
        v92 = 1;
        v17 = 0LL;
        v66 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
          *a1 = 34;
        v92 = 0;
        v17 = 1LL;
        v66 = 1;
        n = 1LL;
        s2 = "\"";
      }
      break;
    case 6:
      v92 = 1;
      v17 = 0LL;
      v15 = 5;
      v66 = 1;
      n = 1LL;
      s2 = "\"";
      break;
    case 7:
      v92 = 0;
      v17 = 0LL;
      v66 = 1;
      n = 0LL;
      s2 = 0LL;
      break;
    case 8:
    case 9:
    case 10:
      if ( !v12 )
      {
        a8 = sub_407660("`", a5);
        v28 = (char *)sub_407660((char *)"'", a5);
        v16 = a4;
        v15 = a5;
        a9 = v28;
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
      v73 = v15;
      v69 = v16;
      v92 = v11 != 0;
      v30 = strlen(a9);
      v66 = 1;
      v16 = v69;
      n = v30;
      v15 = v73;
      s2 = a9;
      break;
    default:
      abort();
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
      LOBYTE(v11) = *(_BYTE *)(a3 + v21) != 0;
    if ( !(_BYTE)v11 )
    {
      v45 = v20;
      v34 = v19;
      v35 = v45;
      v27 = v17 == 0 && v92 && v45 == 2;
      if ( v27 )
        goto LABEL_132;
      if ( s2 )
      {
        if ( !v92 )
        {
          v46 = *s2;
          if ( *s2 )
          {
            v47 = &s2[-v17];
            do
            {
              if ( v10 > v17 )
                v9[v17] = v46;
              v46 = v47[++v17];
            }
            while ( v46 );
          }
        }
      }
      if ( v17 < v10 )
        v9[v17] = 0;
      return v17;
    }
    v23 = (_BYTE *)(a3 + v21);
    v68 = v66 & (v20 != 2);
    if ( v68 )
      break;
    LOBYTE(v26) = *v23;
    switch ( *v23 )
    {
      case 0:
        if ( !v66 )
        {
          if ( (a6 & 1) != 0 )
          {
            ++v21;
            continue;
          }
          if ( !v92 )
          {
            ++v21;
            v11 = v22;
            LOBYTE(v26) = 0;
            goto LABEL_148;
          }
          v11 = 0;
          if ( a7 )
          {
            v68 = 0;
            LOBYTE(v26) = 0;
            goto LABEL_18;
          }
          LOBYTE(v26) = 0;
          goto LABEL_122;
        }
LABEL_103:
        if ( v92 )
        {
          v64 = v20;
          v34 = v19;
          v35 = v64;
          v27 = v64 == 2;
          goto LABEL_132;
        }
        v68 = 0;
LABEL_105:
        LOBYTE(v14) = v20 == 2;
        v36 = v22 ^ 1;
        LOBYTE(v36) = (v20 == 2) & (v22 ^ 1);
        if ( (_BYTE)v36 )
        {
          if ( v17 < v10 )
            v9[v17] = 39;
          if ( v10 > v17 + 1 )
            v9[v17 + 1] = 36;
          if ( v10 > v17 + 2 )
            v9[v17 + 2] = 39;
          v37 = v17 + 3;
          if ( v10 <= v17 + 3 )
          {
            v17 += 4LL;
            ++v21;
            v22 = v36;
            LOBYTE(v26) = 48;
            goto LABEL_82;
          }
          v22 = v36;
LABEL_114:
          v9[v37] = 92;
        }
        else
        {
          v37 = v17;
          if ( v17 < v10 )
            goto LABEL_114;
        }
        v17 = v37 + 1;
        v38 = v21 + 1;
        if ( v20 == 2 )
        {
          ++v21;
          LOBYTE(v26) = 48;
          goto LABEL_82;
        }
        LOBYTE(v26) = 48;
        if ( v38 < v19 && (unsigned __int8)(*(_BYTE *)(a3 + v38) - 48) <= 9u )
        {
          if ( v10 > v17 )
            v9[v17] = 48;
          if ( v10 > v37 + 2 )
            v9[v37 + 2] = 48;
          v17 = v37 + 3;
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
      case 0xA:
        LOBYTE(v26) = 10;
        v32 = 110;
        goto LABEL_130;
      case 0xB:
        LOBYTE(v26) = 11;
        v32 = 118;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0xC:
        LOBYTE(v26) = 12;
        v32 = 102;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0xD:
        LOBYTE(v26) = 13;
        v32 = 114;
LABEL_130:
        LOBYTE(v14) = v20 == 2;
        v68 = v20 == 2 && v92;
        if ( !v68 )
          goto LABEL_88;
        v42 = v20;
        v34 = v19;
        v35 = v42;
        v27 = v68;
        goto LABEL_132;
      case 0x20:
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
        LOBYTE(v14) = v20 == 2;
        goto LABEL_64;
      case 0x23:
      case 0x7E:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_63;
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
        goto LABEL_127;
      case 0x27:
LABEL_73:
        v14 = 0;
        LOBYTE(v26) = 39;
        if ( v20 != 2 )
          goto LABEL_65;
        if ( v92 )
          goto LABEL_270;
        if ( v17 < v10 )
          v9[v17] = 39;
        if ( v10 > v17 + 1 )
          v9[v17 + 1] = 92;
        if ( v10 > v17 + 2 )
          v9[v17 + 2] = 39;
        v17 += 3LL;
        ++v21;
        v22 = 0;
        LOBYTE(v26) = 39;
LABEL_82:
        if ( !v68 )
          goto LABEL_33;
        goto LABEL_67;
      case 0x3F:
LABEL_69:
        if ( v20 == 2 )
        {
          if ( v92 )
          {
LABEL_270:
            v34 = v19;
            v35 = 2;
            v27 = v92;
LABEL_132:
            if ( v66 && v27 )
              v35 = 4;
            return sub_407760((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
          }
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
        if ( (a6 & 4) == 0 )
        {
          v14 = 0;
          LOBYTE(v26) = 63;
          goto LABEL_65;
        }
        v14 = 0;
        LOBYTE(v26) = 63;
        if ( v21 + 2 >= v19 || *(_BYTE *)(a3 + v21 + 1) != 63 )
          goto LABEL_65;
        v26 = *(unsigned __int8 *)(a3 + v21 + 2);
        if ( (unsigned __int8)v26 > 0x3Eu || (v44 = 0x7000A38200000000LL, !_bittest64(&v44, v26)) )
        {
          LOBYTE(v26) = 63;
LABEL_65:
          v11 = (v14 | v66 ^ 1) ^ 1;
          LOBYTE(v11) = v92 | (v14 | v66 ^ 1) ^ 1;
          if ( (_BYTE)v11 )
          {
LABEL_17:
            v11 = 0;
            if ( !a7 )
              goto LABEL_121;
            goto LABEL_18;
          }
          goto LABEL_66;
        }
        if ( v92 )
          goto LABEL_269;
        if ( v17 < v10 )
          v9[v17] = 63;
        if ( v10 > v17 + 1 )
          v9[v17 + 1] = 34;
        if ( v10 > v17 + 2 )
          v9[v17 + 2] = 34;
        if ( v10 > v17 + 3 )
          v9[v17 + 3] = 63;
        v17 += 4LL;
        v14 = 0;
        v11 = 0;
        v21 += 2LL;
LABEL_118:
        if ( v66 && !(_BYTE)v14 )
        {
          if ( !a7 )
          {
LABEL_121:
            v27 = v20 == 2;
            if ( !v68 )
            {
LABEL_122:
              ++v21;
              v11 = v22 & (v11 ^ 1);
              goto LABEL_148;
            }
LABEL_20:
            if ( v92 )
            {
LABEL_92:
              v33 = v20;
              v34 = v19;
              v35 = v33;
              goto LABEL_132;
            }
LABEL_21:
            ++v21;
            goto LABEL_22;
          }
LABEL_18:
          if ( ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v26 >> 5)) >> v26) & 1) == 0 )
            goto LABEL_121;
          v27 = v20 == 2;
          goto LABEL_20;
        }
LABEL_66:
        ++v21;
        if ( !v68 )
        {
          v11 = v22 & (v11 ^ 1);
LABEL_148:
          if ( (_BYTE)v11 )
          {
            if ( v17 < v10 )
              v9[v17] = 39;
            if ( v10 > v17 + 1 )
              v9[v17 + 1] = 39;
            v17 += 2LL;
            v22 = 0;
          }
          goto LABEL_33;
        }
LABEL_67:
        v27 = v20 == 2;
LABEL_22:
        v14 = v22 ^ 1;
        if ( (v27 & ((unsigned __int8)v22 ^ 1)) != 0 )
        {
          if ( v10 > v17 )
            v9[v17] = 39;
          if ( v10 > v17 + 1 )
            v9[v17 + 1] = 36;
          if ( v10 > v17 + 2 )
            v9[v17 + 2] = 39;
          v17 += 3LL;
          LOBYTE(v14) = v27 & (v22 ^ 1);
          v22 = v14;
        }
        if ( v17 < v10 )
          v9[v17] = 92;
        ++v17;
LABEL_33:
        if ( v17 < v10 )
          v9[v17] = v26;
        ++v17;
        break;
      case 0x5C:
        if ( v20 == 2 )
        {
          if ( v92 )
            goto LABEL_270;
          ++v21;
          v11 = v22;
          LOBYTE(v26) = 92;
          goto LABEL_148;
        }
LABEL_87:
        v11 = v92 & v66;
        LOBYTE(v26) = 92;
        v32 = 92;
        v14 = v11;
        LOBYTE(v14) = (n != 0) & v11;
        if ( (_BYTE)v14 )
        {
          ++v21;
          v11 = v22;
          goto LABEL_148;
        }
LABEL_88:
        if ( !v66 )
          goto LABEL_65;
        v27 = v14;
        LOBYTE(v26) = v32;
        goto LABEL_20;
      case 0x7B:
      case 0x7D:
LABEL_60:
        v31 = v19 != 1;
        if ( v19 == -1LL )
          v31 = *(_BYTE *)(a3 + 1) != 0;
        LOBYTE(v14) = v20 == 2;
        if ( v31 )
          goto LABEL_65;
LABEL_63:
        if ( v21 )
          goto LABEL_65;
LABEL_64:
        v27 = v14 & v92;
        if ( ((unsigned __int8)v14 & v92) == 0 )
          goto LABEL_65;
        goto LABEL_206;
      default:
LABEL_124:
        if ( v90 == 1 )
        {
          v84 = v20;
          v79 = v19;
          v74 = v22;
          v39 = __ctype_b_loc();
          v22 = v74;
          v19 = v79;
          v20 = v84;
          v40 = 1LL;
          v41 = (*v39)[(unsigned __int8)v26];
          LOWORD(v41) = (unsigned __int16)v41 >> 14;
          v14 = v41 ^ 1;
          LOBYTE(v14) = v66 & v14;
        }
        else
        {
          ps = 0LL;
          if ( v19 == -1LL )
          {
            v85 = v20;
            v80 = v22;
            v75 = v23;
            v48 = strlen((const char *)a3);
            v20 = v85;
            LOBYTE(v22) = v80;
            v23 = v75;
            v19 = v48;
          }
          v94 = v17;
          v93 = v22;
          v49 = 0LL;
          v95 = v23;
          v86 = v9;
          v88 = v10;
          v76 = v19;
          v81 = v20;
          while ( 1 )
          {
            v50 = v21 + v49;
            v51 = sub_40B170(&wc, a3 + v21 + v49, v76 - (v21 + v49), &ps);
            v52 = v51;
            if ( !v51 )
            {
              v11 ^= 1u;
              v40 = v49;
              v9 = v86;
              v22 = v93;
              v17 = v94;
              v10 = v88;
              v14 = (unsigned __int8)(v11 & v66);
              v19 = v76;
              v20 = v81;
              goto LABEL_256;
            }
            if ( v51 == -1 )
            {
              v40 = v49;
              v22 = v93;
              v17 = v94;
              v9 = v86;
              v10 = v88;
              v19 = v76;
              v20 = v81;
              v14 = v66;
              goto LABEL_256;
            }
            if ( v51 == -2 )
              break;
            v27 = v92 && v81 == 2;
            if ( v27 && v52 != 1 )
            {
              v53 = (_BYTE *)(a3 + v50 + 1);
              do
              {
                if ( (unsigned __int8)(*v53 - 91) <= 0x21u && ((1LL << (*v53 - 91)) & 0x20000002BLL) != 0 )
                {
                  LODWORD(v9) = (_DWORD)v86;
                  LODWORD(v10) = v88;
                  v34 = v76;
                  v35 = v81;
                  goto LABEL_132;
                }
                ++v53;
              }
              while ( (_BYTE *)(a3 + v52 + v50) != v53 );
            }
            if ( !iswprint(wc) )
              v11 = 0;
            v49 += v52;
            if ( mbsinit(&ps) )
            {
              v40 = v49;
              v22 = v93;
              v17 = v94;
              v14 = v11 ^ 1;
              v9 = v86;
              v10 = v88;
              v19 = v76;
              v20 = v81;
              LOBYTE(v14) = v66 & (v11 ^ 1);
              goto LABEL_256;
            }
          }
          v19 = v76;
          v60 = v21 + v49;
          v61 = (_BYTE *)(a3 + v21 + v49);
          v62 = v49;
          v40 = v49;
          v22 = v93;
          v17 = v94;
          v9 = v86;
          v10 = v88;
          v20 = v81;
          if ( v60 < v76 && *v61 )
          {
            do
              ++v62;
            while ( v76 > v21 + v62 && v95[v62] );
            v40 = v62;
          }
          v14 = v66;
LABEL_256:
          if ( v40 > 1 )
            goto LABEL_210;
        }
        if ( (_BYTE)v14 )
        {
          v14 = v66;
LABEL_210:
          v55 = v21 + v40;
          v56 = 0;
          v57 = v68;
          while ( 1 )
          {
            if ( (_BYTE)v14 )
            {
              v58 = v20 == 2;
              v27 = v20 == 2;
              if ( v92 )
              {
LABEL_206:
                v54 = v20;
                v34 = v19;
                v35 = v54;
                goto LABEL_132;
              }
              v59 = v22 ^ 1;
              if ( (v58 & ((unsigned __int8)v22 ^ 1)) != 0 )
              {
                if ( v17 < v10 )
                  v9[v17] = 39;
                if ( v10 > v17 + 1 )
                  v9[v17 + 1] = 36;
                if ( v10 > v17 + 2 )
                  v9[v17 + 2] = 39;
                v17 += 3LL;
                LOBYTE(v59) = v58 & (v22 ^ 1);
                v22 = v59;
              }
              if ( v17 < v10 )
                v9[v17] = 92;
              if ( v10 > v17 + 1 )
                v9[v17 + 1] = ((unsigned __int8)v26 >> 6) + 48;
              if ( v10 > v17 + 2 )
                v9[v17 + 2] = (((unsigned __int8)v26 >> 3) & 7) + 48;
              ++v21;
              v17 += 3LL;
              LOBYTE(v26) = (v26 & 7) + 48;
              if ( v55 <= v21 )
                goto LABEL_33;
              v56 = v14;
            }
            else
            {
              v11 = v22 & (v56 ^ 1);
              if ( v57 )
              {
                if ( v17 < v10 )
                  v9[v17] = 92;
                ++v17;
              }
              if ( ++v21 >= v55 )
                goto LABEL_148;
              if ( (_BYTE)v11 )
              {
                if ( v17 < v10 )
                  v9[v17] = 39;
                if ( v10 > v17 + 1 )
                  v9[v17 + 1] = 39;
                v17 += 2LL;
                v57 = 0;
                v22 = 0;
              }
              else
              {
                v57 = 0;
              }
            }
            if ( v17 < v10 )
              v9[v17] = v26;
            LOBYTE(v26) = *(_BYTE *)(a3 + v21);
            ++v17;
          }
        }
LABEL_127:
        LOBYTE(v14) = v20 == 2;
        goto LABEL_65;
    }
  }
  if ( !n )
    goto LABEL_275;
  if ( v19 == -1LL && n > 1 )
  {
    v82 = v20;
    v77 = v22;
    v24 = strlen((const char *)a3);
    v20 = v82;
    v22 = v77;
    v23 = (_BYTE *)(a3 + v21);
    v19 = v24;
  }
  if ( v21 + n > v19 )
    goto LABEL_275;
  v87 = v20;
  v83 = v19;
  v78 = v22;
  v72 = v23;
  v25 = memcmp(v23, s2, n);
  v23 = v72;
  v22 = v78;
  v19 = v83;
  v20 = v87;
  if ( v25 )
  {
LABEL_275:
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
      case 0xA:
LABEL_90:
        LOBYTE(v26) = 110;
        v27 = 0;
        goto LABEL_91;
      case 0xB:
LABEL_101:
        LOBYTE(v26) = 118;
        v27 = 0;
        goto LABEL_91;
      case 0xC:
LABEL_100:
        LOBYTE(v26) = 102;
        v27 = 0;
LABEL_91:
        if ( v92 )
          goto LABEL_92;
        goto LABEL_21;
      case 0xD:
        v68 = 0;
LABEL_96:
        LOBYTE(v26) = 13;
        v32 = 114;
        LOBYTE(v14) = v20 == 2;
        goto LABEL_88;
      case 0x20:
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
        v68 = 0;
LABEL_85:
        v14 = 0;
        goto LABEL_65;
      case 0x23:
      case 0x7E:
        v68 = 0;
LABEL_98:
        if ( v21 )
          goto LABEL_17;
        v14 = 0;
        goto LABEL_65;
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
        v68 = 0;
        goto LABEL_17;
      case 0x27:
        v68 = 0;
        goto LABEL_73;
      case 0x3F:
        v68 = 0;
        goto LABEL_69;
      case 0x5C:
        v68 = 0;
        goto LABEL_87;
      case 0x7B:
      case 0x7D:
        v68 = 0;
        goto LABEL_60;
      default:
        v68 = 0;
        goto LABEL_124;
    }
  }
  if ( !v92 )
  {
    LOBYTE(v26) = *v72;
    switch ( *v72 )
    {
      case 0:
        goto LABEL_105;
      case 7:
        goto LABEL_94;
      case 8:
        goto LABEL_93;
      case 9:
        goto LABEL_102;
      case 0xA:
        goto LABEL_90;
      case 0xB:
        goto LABEL_101;
      case 0xC:
        goto LABEL_100;
      case 0xD:
        goto LABEL_96;
      case 0x20:
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
        goto LABEL_85;
      case 0x23:
      case 0x7E:
        goto LABEL_98;
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
        goto LABEL_17;
      case 0x27:
        goto LABEL_73;
      case 0x3F:
        goto LABEL_69;
      case 0x5C:
        goto LABEL_87;
      case 0x7B:
      case 0x7D:
        goto LABEL_60;
      default:
        goto LABEL_124;
    }
  }
LABEL_269:
  v63 = v20;
  v34 = v19;
  v35 = v63;
  return sub_407760((int)v9, v10, a3, v34, v35, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
}

_BYTE *__fastcall sub_408770(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  __m128i *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  _BYTE *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rax
  int v17; // r8d
  __m128i *v19; // rax
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)off_612318;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_612330 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( off_612318 == &xmmword_612320 )
    {
      v19 = (__m128i *)sub_4096D0(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      off_612318 = v19;
      *v19 = _mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      v10 = (__m128i *)sub_4096D0(off_612318, v9);
      v11 = (unsigned int)(a1 + 1);
      off_612318 = v10;
      v7 = v10;
    }
    memset(&v7[dword_612330], 0, 16 * (v11 - (unsigned int)dword_612330));
    dword_612330 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(a4 + 4) | 1;
  v21 = *v12;
  v14 = sub_407760(v13, *v12, a2, a3, *(_DWORD *)a4, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
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
    v17 = *(_DWORD *)a4;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_407760(v16, v15, a2, a3, v17, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v23;
  return v13;
}

_BYTE *__fastcall sub_408770(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  __m128i *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  _BYTE *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rax
  int v17; // r8d
  __m128i *v19; // rax
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)off_612318;
  v8 = v6;
  v23 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_612330 <= (unsigned int)a1 )
  {
    v9 = 16LL * (unsigned int)(a1 + 1);
    if ( off_612318 == &xmmword_612320 )
    {
      v19 = (__m128i *)sub_4096D0(0LL, v9);
      v11 = (unsigned int)(a1 + 1);
      v7 = v19;
      off_612318 = v19;
      *v19 = _mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      v10 = (__m128i *)sub_4096D0(off_612318, v9);
      v11 = (unsigned int)(a1 + 1);
      off_612318 = v10;
      v7 = v10;
    }
    memset(&v7[dword_612330], 0, 16 * (v11 - (unsigned int)dword_612330));
    dword_612330 = a1 + 1;
  }
  v12 = (unsigned __int64 *)&v7[a1];
  v13 = (_BYTE *)v12[1];
  v24 = *(_DWORD *)(a4 + 4) | 1;
  v21 = *v12;
  v14 = sub_407760(v13, *v12, a2, a3, *(_DWORD *)a4, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
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
    v17 = *(_DWORD *)a4;
    v12[1] = (unsigned __int64)v16;
    v13 = v16;
    sub_407760(v16, v15, a2, a3, v17, v24, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v23;
  return v13;
}

__int64 __fastcall sub_408910(__int128 *a1)
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
    v1 = &xmmword_612640;
  result = sub_409840(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_408A00(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_612640;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_407760(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((const char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_408A80(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_612640;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_407760(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_409680(v11 + 1);
  sub_407760(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_408B80()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)off_612318;
  if ( (unsigned int)dword_612330 > 1 )
  {
    v1 = (void **)((char *)off_612318 + 24);
    v2 = (void **)((char *)off_612318 + 16 * (unsigned int)(dword_612330 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_612540 )
  {
    free(v4);
    *(_QWORD *)&xmmword_612320 = 256LL;
    *((_QWORD *)&xmmword_612320 + 1) = &unk_612540;
  }
  if ( v0 != &xmmword_612320 )
  {
    free(v0);
    off_612318 = &xmmword_612320;
  }
  dword_612330 = 1;
}

_BYTE *__fastcall sub_408C90(int a1, int a2, __int64 a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408C90(int a1, int a2, __int64 a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408D00(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_408770(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_408D00(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_408770(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_408D90(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_612670;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612640);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612650);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612660);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_408770(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_408E10(__int64 a1)
{
  return sub_408D90(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_408E40(int a1, int a2, __int64 a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408E40(int a1, int a2, __int64 a3)
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
  return sub_408770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408EB0(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612640);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612650);
  si128 = _mm_load_si128((const __m128i *)&xmmword_612660);
  v8 = qword_612670;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_408770(a1, a4, a5, (__int64)v6);
}

ssize_t __fastcall sub_408FE0(int fd, void *buf, size_t nbytes)
{
  ssize_t v4; // rbp
  int v5; // eax

  while ( 1 )
  {
    v4 = read(fd, buf, nbytes);
    if ( v4 >= 0 )
      break;
    v5 = *__errno_location();
    if ( v5 != 4 )
    {
      if ( v5 != 22 || nbytes <= 0x7FFFE000 )
        return v4;
      nbytes = 2147475456LL;
    }
  }
  return v4;
}

__int64 __fastcall sub_409040(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  bool v5; // zf
  __int64 result; // rax

  v3 = sub_40B1A0(a1, 0LL, a2);
  v4 = v3 - a1 + 1;
  v5 = v3 == 0;
  result = a2;
  if ( !v5 )
    return v4;
  return result;
}

__int64 __fastcall sub_409080(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  return sub_409D40(a1, 0, 3, a4, a5, a6);
}

__int64 __fastcall sub_409090(unsigned int fd, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  unsigned int v7; // r12d
  int *v8; // rax
  int v9; // r13d
  int *v10; // rbp

  if ( fd > 2 )
    return fd;
  v7 = sub_409080(fd, a2, a3, a4, a5, a6);
  v8 = __errno_location();
  v9 = *v8;
  v10 = v8;
  close(fd);
  result = v7;
  *v10 = v9;
  return result;
}

int __fastcall sub_4090E0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
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

  if ( a2 )
    fprintf(stream, "%s (%s) %s\n", a2, a3, a4);
  else
    fprintf(stream, "%s %s\n", a3, a4);
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v40, v39, v38, v37, v36);
    case 5LL:
      v41 = a5[4];
      v42 = a5[3];
      v43 = a5[2];
      v44 = a5[1];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v46, v45, v44, v43, v42, v41);
      return v60;
    case 6LL:
      v47 = a5[1];
      v48 = a5[4];
      v49 = a5[3];
      v50 = a5[2];
      v51 = *a5;
      v63 = v47;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v52, v51, v63, v50, v49, v48);
      return v60;
    case 7LL:
      v53 = a5[6];
      v54 = a5[5];
      v55 = a5[4];
      v56 = a5[3];
      v67 = a5[2];
      v64 = a5[1];
      v57 = *a5;
      v58 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return fprintf(stream, v58, v57, v64, v67, v56, v55, v54, v53);
    case 8LL:
      v10 = a5[7];
      v11 = a5[6];
      v12 = a5[5];
      v13 = a5[4];
      v14 = a5[2];
      v68 = a5[3];
      v15 = a5[1];
      v16 = *a5;
      v65 = v14;
      v61 = v15;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v17, v16, v61, v65, v68, v13, v12, v11, v10);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[7];
      v22 = a5[6];
      v70 = a5[8];
      v23 = a5[5];
      v24 = a5[4];
      v69 = a5[3];
      v66 = a5[2];
      v25 = *a5;
      v62 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = a5[1];
      v21 = a5[7];
      v22 = a5[6];
      v70 = a5[8];
      v23 = a5[5];
      v24 = a5[4];
      v69 = a5[3];
      v66 = a5[2];
      v25 = *a5;
      v62 = v59;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return fprintf(stream, v26, v25, v62, v66, v69, v24, v23, v22, v21, v70);
  }
}

int __fastcall sub_4090E0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
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

  if ( a2 )
    fprintf(stream, "%s (%s) %s\n", a2, a3, a4);
  else
    fprintf(stream, "%s %s\n", a3, a4);
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return fprintf(stream, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return fprintf(stream, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return fprintf(stream, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v40, v39, v38, v37, v36);
    case 5LL:
      v41 = a5[4];
      v42 = a5[3];
      v43 = a5[2];
      v44 = a5[1];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      fprintf(stream, v46, v45, v44, v43, v42, v41);
      return v60;
    case 6LL:
      v47 = a5[1];
      v48 = a5[4];
      v49 = a5[3];
      v50 = a5[2];
      v51 = *a5;
      v63 = v47;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      fprintf(stream, v52, v51, v63, v50, v49, v48);
      return v60;
    case 7LL:
      v53 = a5[6];
      v54 = a5[5];
      v55 = a5[4];
      v56 = a5[3];
      v67 = a5[2];
      v64 = a5[1];
      v57 = *a5;
      v58 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return fprintf(stream, v58, v57, v64, v67, v56, v55, v54, v53);
    case 8LL:
      v10 = a5[7];
      v11 = a5[6];
      v12 = a5[5];
      v13 = a5[4];
      v14 = a5[2];
      v68 = a5[3];
      v15 = a5[1];
      v16 = *a5;
      v65 = v14;
      v61 = v15;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return fprintf(stream, v17, v16, v61, v65, v68, v13, v12, v11, v10);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[7];
      v22 = a5[6];
      v70 = a5[8];
      v23 = a5[5];
      v24 = a5[4];
      v69 = a5[3];
      v66 = a5[2];
      v25 = *a5;
      v62 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = a5[1];
      v21 = a5[7];
      v22 = a5[6];
      v70 = a5[8];
      v23 = a5[5];
      v24 = a5[4];
      v69 = a5[3];
      v66 = a5[2];
      v25 = *a5;
      v62 = v59;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return fprintf(stream, v26, v25, v62, v66, v69, v24, v23, v22, v21, v70);
  }
}

int __fastcall sub_4094F0(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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

int __fastcall sub_409550(FILE *a1, const char *a2, const char *a3, const char *a4, __int64 a5, __int64 a6, char a7)
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

// attributes: thunk
void *__fastcall sub_4096C0(size_t a1)
{
  return sub_409680(a1);
}

void *__fastcall sub_4096D0(void *a1, size_t a2)
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
        sub_4098A0();
    }
  }
  return result;
}

void *__fastcall sub_409800(size_t n)
{
  void *v1; // rax

  v1 = sub_409680(n);
  return memset(v1, 0, n);
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

void *__fastcall sub_409870(const char *src)
{
  size_t v1; // rbx
  void *v2; // rax

  v1 = strlen(src) + 1;
  v2 = sub_409680(v1);
  return memcpy(v2, src, v1);
}

noreturn void  sub_4098A0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(dword_6122C0, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_4098E0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **p_endptr; // r15
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
  int v26; // r9d
  bool v27; // of
  int v28; // edi
  int v29; // edi
  int v30; // edi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // kr20_8
  int v33; // edi
  char *basea; // [rsp+8h] [rbp-50h]
  char *baseb; // [rsp+8h] [rbp-50h]
  char *basec; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 0x60u, "xstrtoul");
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
  v13 = strtoul(nptr, p_endptr, a3);
  v14 = *p_endptr;
  v15 = v13;
  if ( *p_endptr == nptr )
  {
    basea = *p_endptr;
    if ( a5 )
    {
      v17 = *nptr;
      if ( *nptr )
      {
        v16 = 0;
        v15 = 1LL;
        v19 = strchr(a5, v17);
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
  if ( a5 )
  {
    v17 = *v14;
    if ( *v14 )
    {
      basec = *p_endptr;
      v22 = strchr(a5, v17);
      v20 = basec;
      if ( !v22 )
      {
LABEL_26:
        *a4 = v15;
        v16 |= 2u;
        return v16;
      }
LABEL_20:
      baseb = v20;
      if ( strchr(a5, 48) )
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
              case 'B':
                v23 = 1LL;
                goto LABEL_83;
              case 'E':
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_77;
              case 'G':
              case 'g':
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_72;
              case 'K':
              case 'k':
                v23 = 1LL;
                v31 = 1024LL;
                goto LABEL_69;
              case 'M':
              case 'm':
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_65;
              case 'P':
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_59;
              case 'T':
              case 't':
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_53;
              case 'Y':
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_47;
              case 'Z':
                v23 = 1LL;
                v24 = 1024LL;
                goto LABEL_41;
              case 'b':
                v23 = 1LL;
                goto LABEL_38;
              case 'c':
                v23 = 1LL;
                goto LABEL_33;
              case 'w':
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
        case 'B':
          v23 = (int)v23;
LABEL_83:
          if ( v15 >> 54 )
            goto LABEL_70;
          v15 <<= 10;
          break;
        case 'E':
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
        case 'G':
        case 'g':
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
        case 'K':
        case 'k':
          v31 = (int)v24;
          v23 = (int)v23;
LABEL_69:
          v32 = v15;
          v15 *= v31;
          if ( !is_mul_ok(v31, v32) )
            goto LABEL_70;
          break;
        case 'M':
        case 'm':
          v23 = (int)v23;
LABEL_65:
          if ( !is_mul_ok(v24, v15) || !is_mul_ok(v24, v24 * v15) )
            goto LABEL_70;
          v15 *= v24 * v24;
          break;
        case 'P':
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
        case 'T':
        case 't':
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
        case 'Y':
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
        case 'Z':
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
        case 'b':
          v23 = (int)v23;
LABEL_38:
          if ( v15 >> 55 )
            goto LABEL_70;
          v15 <<= 9;
          break;
        case 'c':
          v23 = (int)v23;
          break;
        case 'w':
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
      *p_endptr = &baseb[v23];
      if ( baseb[v23] )
        v16 |= 2u;
    }
  }
  *a4 = v15;
  return v16;
}

__int64 __fastcall sub_409D40(int a1, int a2, __int64 a3, int a4, int a5, int a6)
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
    if ( dword_612678 < 0 )
    {
      v6 = sub_409D40(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_612678 == -1 )
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
        v6 = sub_409D40(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_612678 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_612678 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_409E80(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
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
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      result += *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 72);
  }
  return result;
}

int __fastcall sub_409EF0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_409F50(__int64 a1, int *a2)
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
  v3 = a2[12];
  v4 = *a2;
  v5 = a2[13];
  v6 = v3;
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
  a2[13] = v4;
  result = (unsigned int)(v4 - v8);
  a2[12] = result + v3;
  return result;
}

__int64 __fastcall sub_40A030(int a1, __int64 *a2, char *a3, const char **a4, int *a5, int a6, int *a7, int a8)
{
  int *v8; // r12
  int v9; // eax
  int v10; // ebp
  _BYTE *v11; // r8
  char v12; // al
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // rax
  const char *v18; // rbx
  unsigned int v19; // r13d
  char v20; // r14
  char *v21; // rax
  char v22; // dl
  char v23; // dl
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  int v31; // edx
  __int64 v32; // rax
  _BYTE *v33; // rcx
  int v34; // esi
  char v35; // cl
  __int64 v36; // rax
  char v37; // r13
  const char *i; // r14
  int v39; // r13d
  size_t v40; // r14
  const char **v41; // rbp
  const char *v42; // r12
  const char **v43; // r15
  _BYTE *v44; // r13
  unsigned int v45; // eax
  const char **v46; // rbx
  const char *v47; // r15
  __int64 v48; // r14
  const char *v49; // rsi
  size_t v50; // r13
  int v51; // ebp
  _QWORD *v52; // rax
  _BYTE *v53; // r13
  int v54; // eax
  int v55; // ecx
  const char *v56; // rbx
  unsigned int *v57; // rax
  int v58; // r15d
  _QWORD *v59; // rdi
  _QWORD *v60; // r14
  char *v61; // rbx
  char *v62; // rax
  unsigned int v63; // ebp
  __int64 v64; // rbx
  char *v65; // rax
  char *v66; // rax
  const char *v67; // rbp
  __int64 v68; // rbx
  unsigned int v69; // r13d
  char *v70; // rax
  const char *v71; // rbx
  void *v72; // rdi
  __int64 v73; // rbx
  char *v74; // rax
  __int64 v75; // rbp
  __int64 v76; // rbx
  char *v77; // rax
  char *v78; // rbx
  const char **j; // rax
  const char *v80; // rbx
  size_t v81; // rax
  const char *v82; // rbx
  size_t v83; // rax
  _QWORD *v84; // rdi
  _QWORD *v85; // rbx
  int v86; // eax
  char v87; // r13
  const char *v88; // r14
  int v89; // ebp
  int v90; // eax
  _BYTE *v91; // rbp
  __int64 v92; // rbx
  char *v93; // rax
  int v94; // eax
  const char **v95; // rsi
  __int64 v96; // rbp
  __int64 v97; // rbx
  char *v98; // rax
  const char *v99; // rbx
  size_t v100; // rax
  __int64 v101; // rbx
  char *v102; // rax
  __int64 v103; // rax
  char *v104; // rax
  const char *v105; // rbp
  __int64 v106; // rbx
  char *v107; // rax
  __int64 v108; // rbp
  char *v109; // rax
  __int64 v110; // rbx
  char *v111; // rax
  const char *v112; // rbp
  __int64 v113; // rbx
  char *v114; // rax
  const char *v115; // rbp
  __int64 v116; // rbx
  char *v117; // rax
  char *s; // [rsp+0h] [rbp-98h]
  char *sa; // [rsp+0h] [rbp-98h]
  int sb; // [rsp+0h] [rbp-98h]
  int v121; // [rsp+Ch] [rbp-8Ch]
  int v122; // [rsp+Ch] [rbp-8Ch]
  _BYTE *v124; // [rsp+18h] [rbp-80h]
  _BYTE *v125; // [rsp+18h] [rbp-80h]
  const char **v126; // [rsp+18h] [rbp-80h]
  char *v127; // [rsp+18h] [rbp-80h]
  int v129; // [rsp+20h] [rbp-78h]
  int v131; // [rsp+2Ch] [rbp-6Ch]
  int v132; // [rsp+2Ch] [rbp-6Ch]
  int v133; // [rsp+2Ch] [rbp-6Ch]
  int v134; // [rsp+2Ch] [rbp-6Ch]
  const char *v136; // [rsp+38h] [rbp-60h]
  int v137; // [rsp+38h] [rbp-60h]
  int v138; // [rsp+40h] [rbp-58h]
  _BYTE *v139; // [rsp+40h] [rbp-58h]
  char v140; // [rsp+48h] [rbp-50h]
  int v141; // [rsp+48h] [rbp-50h]
  char v143; // [rsp+50h] [rbp-48h] BYREF
  __int64 v144; // [rsp+58h] [rbp-40h]

  v8 = a7;
  s = a3;
  v121 = a7[1];
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
  if ( ((*a3 - 43) & 0xFD) == 0 )
  {
    v12 = a3[1];
    s = a3 + 1;
  }
LABEL_9:
  v13 = v12 == 58;
  v14 = 0;
  if ( !v13 )
    v14 = v121;
  v122 = v14;
  if ( !v11 || !*v11 )
  {
    v25 = *a7;
    if ( a7[13] > *a7 )
      a7[13] = v25;
    if ( v25 < a7[12] )
      a7[12] = v25;
    if ( a7[10] == 1 )
    {
      v31 = a7[13];
      if ( a7[12] == v31 )
      {
        if ( v25 != v31 )
        {
          a7[12] = v25;
          v31 = v25;
        }
      }
      else if ( v25 != v31 )
      {
        sub_409F50((__int64)a2, a7);
        v31 = *a7;
      }
      if ( a1 <= v31 )
      {
LABEL_117:
        v25 = v31;
      }
      else
      {
        v32 = v31;
        while ( 1 )
        {
          v33 = (_BYTE *)a2[v32];
          v34 = v32;
          v31 = v32;
          if ( *v33 == 45 )
          {
            if ( v33[1] )
              break;
          }
          v31 = ++v32;
          *a7 = v34 + 1;
          if ( a1 <= (int)v32 )
            goto LABEL_117;
        }
        v25 = *a7;
      }
      a7[13] = v31;
    }
    if ( a1 == v25 )
    {
      v10 = a7[13];
      v27 = a7[12];
LABEL_51:
      if ( v27 != v10 )
        *a7 = v27;
      return (unsigned int)-1;
    }
    v26 = a2[v25];
    if ( !strcmp((const char *)v26, "--") )
    {
      v27 = a7[12];
      v28 = a7[13];
      v29 = v25 + 1;
      *a7 = v29;
      if ( v27 == v28 )
      {
        a7[12] = v29;
        v27 = v29;
      }
      else if ( v29 != v28 )
      {
        sub_409F50((__int64)a2, a7);
        v27 = a7[12];
      }
      a7[13] = a1;
      *a7 = a1;
      goto LABEL_51;
    }
    if ( *(_BYTE *)v26 == 45 )
    {
      v35 = *(_BYTE *)(v26 + 1);
      if ( v35 )
      {
        v11 = (_BYTE *)(v26 + ((a4 != 0LL) & (unsigned __int8)(v35 == 45)) + 1);
        *((_QWORD *)a7 + 4) = v11;
        goto LABEL_13;
      }
    }
    if ( a7[10] )
    {
      *((_QWORD *)a7 + 2) = v26;
      v19 = 1;
      *a7 = v25 + 1;
      return v19;
    }
    return (unsigned int)-1;
  }
LABEL_13:
  if ( !a4 )
    goto LABEL_18;
  v15 = *a7;
  v16 = a2[v15];
  if ( *(_BYTE *)(v16 + 1) != 45 )
  {
    if ( !a6 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v16 + 2) )
    {
      v131 = *a7;
      v124 = v11;
      v17 = strchr(s, *(char *)(v16 + 1));
      v11 = v124;
      v15 = v131;
      if ( v17 )
        goto LABEL_18;
    }
  }
  v44 = v11;
  if ( !*v11 || *v11 == 61 )
  {
    v133 = 0;
    v45 = 0;
  }
  else
  {
    do
      ++v44;
    while ( *v44 && *v44 != 61 );
    v45 = (_DWORD)v44 - (_DWORD)v11;
    v133 = (_DWORD)v44 - (_DWORD)v11;
  }
  v46 = a4;
  v47 = *a4;
  if ( !*a4 )
  {
LABEL_134:
    if ( a6 )
    {
      v61 = (char *)a2[(int)v15];
      if ( v61[1] != 45 )
      {
        v134 = v15;
        v127 = (char *)*((_QWORD *)a7 + 4);
        v62 = strchr(s, *v127);
        v11 = v127;
        LODWORD(v15) = v134;
        if ( v62 )
        {
LABEL_18:
          v18 = v11 + 1;
          v125 = v11;
          *((_QWORD *)a7 + 4) = v11 + 1;
          v19 = (char)*v11;
          v20 = *v11;
          v21 = strchr(s, v19);
          if ( !v125[1] )
            ++*a7;
          if ( (unsigned __int8)(v20 - 58) <= 1u || !v21 )
          {
            if ( v122 )
            {
              v73 = *a2;
              v74 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
              fprintf(stderr, v74, v73, v19);
            }
            a7[2] = v19;
            return 63;
          }
          v22 = v21[1];
          if ( *v21 != 87 || v22 != 59 )
          {
            if ( v22 == 58 )
            {
              v23 = v125[1];
              if ( v21[2] == 58 )
              {
                if ( v23 )
                {
                  *((_QWORD *)a7 + 2) = v18;
                  ++*a7;
                }
                else
                {
                  *((_QWORD *)a7 + 2) = 0LL;
                }
              }
              else
              {
                v24 = *a7;
                if ( v23 )
                {
                  *((_QWORD *)a7 + 2) = v18;
                  *a7 = v24 + 1;
                }
                else if ( v10 == (_DWORD)v24 )
                {
                  if ( v122 )
                  {
                    v101 = *a2;
                    v102 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                    fprintf(stderr, v102, v101, v19);
                  }
                  a7[2] = v19;
                  v19 = 5 * (*s != 58) + 58;
                }
                else
                {
                  *a7 = v24 + 1;
                  *((_QWORD *)a7 + 2) = a2[v24];
                }
              }
              *((_QWORD *)a7 + 4) = 0LL;
            }
            return v19;
          }
          if ( !a4 )
            goto LABEL_204;
          v36 = *a7;
          if ( v125[1] )
          {
            *((_QWORD *)a7 + 2) = v18;
            *a7 = v36 + 1;
          }
          else
          {
            if ( v10 == (_DWORD)v36 )
            {
              if ( v122 )
              {
                v110 = *a2;
                v111 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
                fprintf(stderr, v111, v110, v19);
              }
              a7[2] = v19;
              return 5 * (unsigned int)(*s != 58) + 58;
            }
            *a7 = v36 + 1;
            v18 = (const char *)a2[v36];
            *((_QWORD *)a7 + 2) = v18;
          }
          *((_QWORD *)a7 + 4) = v18;
          v37 = *v18;
          for ( i = v18; *i; v37 = *++i )
          {
            if ( v37 == 61 )
              break;
          }
          if ( !*a4 )
          {
LABEL_204:
            *((_QWORD *)v8 + 4) = 0LL;
            return 87;
          }
          v140 = v37;
          v136 = i;
          v39 = 0;
          v138 = v10;
          v40 = i - v18;
          v41 = a4;
          v42 = *a4;
          v43 = 0LL;
          v132 = 0;
          v129 = 0;
          do
          {
            if ( !strncmp(v42, v18, v40) )
            {
              if ( (unsigned int)v40 == strlen(v42) )
              {
                v94 = v39;
                v95 = v41;
                v88 = v136;
                v87 = v140;
                v89 = v138;
                v8 = a7;
                v132 = v94;
                v43 = v95;
                goto LABEL_174;
              }
              if ( v43 )
              {
                if ( !a6 && *((_DWORD *)v43 + 2) == *((_DWORD *)v41 + 2) && v43[2] == v41[2] )
                {
                  v86 = 1;
                  if ( *((_DWORD *)v43 + 6) == *((_DWORD *)v41 + 6) )
                    v86 = v129;
                  v129 = v86;
                }
                else
                {
                  v129 = 1;
                }
              }
              else
              {
                v132 = v39;
                v43 = v41;
              }
            }
            v41 += 4;
            v42 = *v41;
            ++v39;
          }
          while ( *v41 );
          v87 = v140;
          v88 = v136;
          v89 = v138;
          v8 = a7;
          if ( v129 )
          {
            if ( v122 )
            {
              v108 = *a2;
              v109 = dcgettext(0LL, "%s: option '-W %s' is ambiguous\n", 5);
              fprintf(stderr, v109, v108, v18);
              v18 = (const char *)*((_QWORD *)a7 + 4);
            }
            v19 = 63;
            v100 = strlen(v18);
            ++*a7;
            *((_QWORD *)a7 + 4) = &v18[v100];
            return v19;
          }
          if ( !v43 )
            goto LABEL_204;
LABEL_174:
          v90 = *((_DWORD *)v43 + 2);
          if ( v87 )
          {
            if ( !v90 )
            {
              if ( v122 )
              {
                v112 = *v43;
                v113 = *a2;
                v114 = dcgettext(0LL, "%s: option '-W %s' doesn't allow an argument\n", 5);
                fprintf(stderr, v114, v113, v112);
                v18 = (const char *)*((_QWORD *)v8 + 4);
              }
              v19 = 63;
              *((_QWORD *)v8 + 4) = &v18[strlen(v18)];
              return v19;
            }
            *((_QWORD *)v8 + 2) = v88 + 1;
            goto LABEL_177;
          }
          if ( v90 != 1 )
          {
            *((_QWORD *)v8 + 2) = 0LL;
            goto LABEL_177;
          }
          v103 = *v8;
          if ( (int)v103 < v89 )
          {
            *v8 = v103 + 1;
            *((_QWORD *)v8 + 2) = a2[v103];
LABEL_177:
            *((_QWORD *)v8 + 4) = &v18[strlen(v18)];
            if ( a5 )
              *a5 = v132;
            v57 = (unsigned int *)v43[2];
            v19 = *((_DWORD *)v43 + 6);
            if ( v57 )
              goto LABEL_116;
            return v19;
          }
          if ( v122 )
          {
            v115 = *v43;
            v116 = *a2;
            v117 = dcgettext(0LL, "%s: option '-W %s' requires an argument\n", 5);
            fprintf(stderr, v117, v116, v115);
          }
          *((_QWORD *)v8 + 4) += strlen(*((const char **)v8 + 4));
          if ( *s != 58 )
            return 63;
          return 58;
        }
        if ( !v122 )
        {
LABEL_139:
          v19 = 63;
          *((_QWORD *)a7 + 4) = "";
          *a7 = v15 + 1;
          a7[2] = 0;
          return v19;
        }
LABEL_138:
        v63 = *v61;
        sa = v11;
        v64 = *a2;
        v65 = dcgettext(0LL, "%s: unrecognized option '%c%s'\n", 5);
        fprintf(stderr, v65, v64, v63, sa);
        LODWORD(v15) = *a7;
        goto LABEL_139;
      }
      if ( !v122 )
        goto LABEL_139;
      v91 = (_BYTE *)*((_QWORD *)a7 + 4);
    }
    else
    {
      if ( !v122 )
        goto LABEL_139;
      v91 = (_BYTE *)*((_QWORD *)a7 + 4);
      v61 = (char *)a2[v15];
      v11 = v91;
      if ( v61[1] != 45 )
        goto LABEL_138;
    }
    v92 = *a2;
    v93 = dcgettext(0LL, "%s: unrecognized option '--%s'\n", 5);
    fprintf(stderr, v93, v92, v91);
    LODWORD(v15) = *a7;
    goto LABEL_139;
  }
  v139 = v44;
  v48 = 0LL;
  v49 = v11;
  v50 = v45;
  v51 = 0;
  v137 = -1;
  v141 = 0;
  v126 = 0LL;
  while ( 1 )
  {
    if ( strncmp(v47, v49, v50) )
      goto LABEL_101;
    if ( v133 == (unsigned int)strlen(v47) )
    {
      v58 = v51;
      v53 = v139;
      v10 = a1;
      if ( v141 || v48 )
      {
        v59 = (_QWORD *)v48;
        if ( v48 )
        {
          do
          {
            v60 = (_QWORD *)v59[1];
            free(v59);
            v59 = v60;
          }
          while ( v60 );
        }
      }
      LODWORD(v15) = *a7;
      v137 = v58;
      v126 = v46;
      goto LABEL_110;
    }
    if ( !v126 )
      break;
    if ( !v141 )
    {
      if ( !a6
        && *((_DWORD *)v126 + 2) == *((_DWORD *)v46 + 2)
        && v126[2] == v46[2]
        && *((_DWORD *)v126 + 6) == *((_DWORD *)v46 + 6) )
      {
        v141 = 0;
      }
      else
      {
        v52 = malloc(0x10uLL);
        if ( v52 )
        {
          *v52 = v46;
          v52[1] = v48;
          v48 = (__int64)v52;
        }
        else
        {
          if ( v48 )
          {
            v72 = (void *)v48;
            do
            {
              v48 = *(_QWORD *)(v48 + 8);
              free(v72);
              v72 = (void *)v48;
            }
            while ( v48 );
          }
          v141 = 1;
        }
      }
    }
LABEL_101:
    v46 += 4;
    v47 = *v46;
    ++v51;
    if ( !*v46 )
      goto LABEL_107;
LABEL_102:
    v49 = (const char *)*((_QWORD *)a7 + 4);
  }
  v126 = v46;
  v46 += 4;
  v47 = *v46;
  v137 = v51++;
  if ( *v46 )
    goto LABEL_102;
LABEL_107:
  v53 = v139;
  v10 = a1;
  v15 = *a7;
  if ( (_BYTE)v141 || v48 )
  {
    if ( v122 )
    {
      if ( v48 )
      {
        v144 = v48;
        v75 = a2[v15];
        v76 = *a2;
        v77 = dcgettext(0LL, "%s: option '%s' is ambiguous; possibilities:", 5);
        fprintf(stderr, v77, v76, v75);
        v78 = &v143;
        for ( j = v126; ; j = *(const char ***)v78 )
        {
          fprintf(stderr, " '--%s'", *j);
          v78 = (char *)*((_QWORD *)v78 + 1);
          if ( !v78 )
            break;
        }
        fputc(10, stderr);
        goto LABEL_161;
      }
      if ( (_BYTE)v141 )
      {
        v96 = a2[v15];
        v97 = *a2;
        v98 = dcgettext(0LL, "%s: option '%s' is ambiguous\n", 5);
        fprintf(stderr, v98, v97, v96);
LABEL_161:
        v80 = (const char *)*((_QWORD *)a7 + 4);
        v81 = strlen(v80);
        ++*a7;
        a7[2] = 0;
        *((_QWORD *)a7 + 4) = &v80[v81];
        return 63;
      }
    }
    v82 = (const char *)*((_QWORD *)a7 + 4);
    sb = *a7;
    v83 = strlen(v82);
    a7[2] = 0;
    *((_QWORD *)a7 + 4) = &v82[v83];
    *a7 = sb + 1;
    if ( v48 )
    {
      v84 = (_QWORD *)v48;
      do
      {
        v85 = (_QWORD *)v84[1];
        free(v84);
        v84 = v85;
      }
      while ( v85 );
    }
    return 63;
  }
  if ( !v126 )
    goto LABEL_134;
LABEL_110:
  v54 = v15 + 1;
  *a7 = v15 + 1;
  v55 = *((_DWORD *)v126 + 2);
  if ( !*v53 )
  {
    if ( v55 != 1 )
      goto LABEL_113;
    if ( v54 < v10 )
    {
      *a7 = v15 + 2;
      *((_QWORD *)a7 + 2) = a2[v54];
      goto LABEL_113;
    }
    if ( v122 )
    {
      v105 = *v126;
      v106 = *a2;
      v107 = dcgettext(0LL, "%s: option '--%s' requires an argument\n", 5);
      fprintf(stderr, v107, v106, v105);
    }
    v99 = (const char *)*((_QWORD *)a7 + 4);
    *((_QWORD *)a7 + 4) = &v99[strlen(v99)];
    a7[2] = *((_DWORD *)v126 + 6);
    if ( *s == 58 )
      return 58;
    return 63;
  }
  if ( v55 )
  {
    *((_QWORD *)a7 + 2) = v53 + 1;
LABEL_113:
    v56 = (const char *)*((_QWORD *)a7 + 4);
    *((_QWORD *)a7 + 4) = &v56[strlen(v56)];
    if ( a5 )
      *a5 = v137;
    v57 = (unsigned int *)v126[2];
    v19 = *((_DWORD *)v126 + 6);
    if ( v57 )
    {
LABEL_116:
      *v57 = v19;
      return 0;
    }
  }
  else
  {
    if ( v122 )
    {
      v66 = (char *)a2[v54 - 1];
      v67 = *v126;
      v68 = *a2;
      if ( v66[1] == 45 )
      {
        v104 = dcgettext(0LL, "%s: option '--%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v104, v68, v67);
      }
      else
      {
        v69 = *v66;
        v70 = dcgettext(0LL, "%s: option '%c%s' doesn't allow an argument\n", 5);
        fprintf(stderr, v70, v68, v69, v67);
      }
    }
    v71 = (const char *)*((_QWORD *)a7 + 4);
    v19 = 63;
    *((_QWORD *)a7 + 4) = &v71[strlen(v71)];
    a7[2] = *((_DWORD *)v126 + 6);
  }
  return v19;
}

__int64 __fastcall sub_40B070(int a1, __int64 *a2, char *a3, const char **a4, int *a5, int a6, int a7)
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

__int64 __fastcall sub_40B0D0(int a1, __int64 *a2, char *a3)
{
  return sub_40B070(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40B0F0(int a1, __int64 *a2, char *a3, const char **a4, int *a5)
{
  return sub_40B070(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40B110(int a1, __int64 *a2, char *a3, const char **a4, int *a5, int *a6)
{
  return sub_40A030(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40B130(int a1, __int64 *a2, char *a3, const char **a4, int *a5)
{
  return sub_40B070(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40B150(int a1, __int64 *a2, char *a3, const char **a4, int *a5, int *a6)
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
  _BYTE *v5; // rcx
  _BYTE *v6; // rdi

  if ( !a3 )
    return 0LL;
  if ( ((unsigned __int8)a1 & 7) != 0 )
  {
    if ( (_BYTE)a2 == *a1 )
      return a1;
    while ( 1 )
    {
      ++a1;
      if ( !--a3 )
        return 0LL;
      if ( ((unsigned __int8)a1 & 7) == 0 )
        break;
      if ( *a1 == (_BYTE)a2 )
        return a1;
    }
  }
  v4 = ((((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
  if ( a3 > 7 && (((v4 ^ *(_QWORD *)a1) - 0x101010101010101LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) == 0 )
  {
    while ( 1 )
    {
      a3 -= 8LL;
      a1 += 8;
      if ( a3 <= 7 )
        break;
      if ( (((v4 ^ *(_QWORD *)a1) - 0x101010101010101LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) != 0 )
        goto LABEL_15;
    }
    if ( !a3 )
      return 0LL;
  }
LABEL_15:
  if ( (_BYTE)a2 != *a1 )
  {
    v5 = a1 + 1;
    v6 = &a1[a3];
    while ( 1 )
    {
      result = v5;
      if ( v5 == v6 )
        break;
      if ( *v5++ == (_BYTE)a2 )
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
    return -1;
  }
  if ( !result )
    return result;
  if ( v1 )
    return -1;
  return -(*__errno_location() != 9);
}

const char *sub_40B320()
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
          v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
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
                v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
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
            fclose(v39);
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

__int64 __fastcall sub_40B890(__int64 a1)
{
  bool v1; // cf
  size_t v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

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
    v7 = qword_6126C0[v6];
    qword_6126C0[v6] = v4;
    *v5 = v7;
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

int __fastcall sub_40B990(wint_t wc)
{
  int result; // eax

  result = wcwidth(wc);
  if ( result < 0 )
    return iswcntrl(wc) == 0;
  return result;
}

__int64 __fastcall sub_40B9C0(__int64 a1, __int64 a2)
{
  const void *v3; // rax
  const void *v4; // rsi
  size_t v5; // rdx
  __int64 result; // rax
  void *v7; // rax

  v3 = (const void *)(a2 + 24);
  v4 = *(const void **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v4 == v3 )
  {
    v7 = memcpy((void *)(a1 + 24), v4, v5);
    v5 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a1 = v7;
  }
  else
  {
    *(_QWORD *)a1 = v4;
  }
  result = *(unsigned __int8 *)(a2 + 16);
  *(_QWORD *)(a1 + 8) = v5;
  *(_BYTE *)(a1 + 16) = result;
  if ( (_BYTE)result )
  {
    result = *(unsigned int *)(a2 + 20);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}

size_t __fastcall sub_40BA40(char *s)
{
  __int64 v1; // rbx
  wchar_t v3; // eax
  __int64 mb_cur_max; // rax
  char *v5; // rbp
  __int64 v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  char v9; // [rsp+0h] [rbp-58h]
  mbstate_t ps; // [rsp+4h] [rbp-54h] BYREF
  char i; // [rsp+Ch] [rbp-4Ch]
  char *sa; // [rsp+10h] [rbp-48h]
  size_t v13; // [rsp+18h] [rbp-40h]
  char v14; // [rsp+20h] [rbp-38h]
  wchar_t v15[13]; // [rsp+24h] [rbp-34h] BYREF

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
        if ( (((unsigned int)dword_40F520[((unsigned __int8)*sa >> 5) & 7] >> *sa) & 1) != 0 )
        {
          v13 = 1LL;
          v3 = *sa;
          v14 = 1;
          v15[0] = v3;
          goto LABEL_7;
        }
        if ( !mbsinit(&ps) )
          __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 0x96u, "mbuiter_multi_next");
        v9 = 1;
      }
      mb_cur_max = __ctype_get_mb_cur_max();
      v5 = sa;
      v6 = sub_409040((__int64)sa, mb_cur_max);
      v7 = sub_40B170(v15, v5, v6, &ps);
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
          if ( v15[0] )
            __assert_fail("iter->cur.wc == 0", "mbuiter.h", 0xB3u, "mbuiter_multi_next");
          break;
      }
      v14 = 1;
      if ( mbsinit(&ps) )
        v9 = 0;
LABEL_7:
      if ( !v15[0] )
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
  if ( &qword_6122A8 )
    v1 = (void *)qword_6122A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40BC98(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_611E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
