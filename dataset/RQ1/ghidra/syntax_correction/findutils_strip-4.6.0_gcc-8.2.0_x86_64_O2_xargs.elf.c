
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void FUN_00402000(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402005(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004077b2caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040200f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402014(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402019(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040201e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040915fcaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00402030(int param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  _union_1454 _Var9;
  int iVar10;
  int iVar11;
  undefined uVar12;
  int *piVar13;
  ushort **ppuVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  ulong extraout_RDX;
  undefined *puVar19;
  undefined *puVar20;
  byte *pbVar21;
  undefined *puVar22;
  byte *pbVar23;
  byte bVar24;
  code *pcVar25;
  code *pcVar26;
  byte bVar27;
  byte *local_108;
  int local_ec;
  undefined local_e5;
  undefined local_e1;
  undefined *local_e0;
  sigaction local_d8;
  
  bVar27 = 0;
  pcVar16 = (char *)*param_2;
  local_e5 = 0x6f686365;
  local_e1 = 0;
  if ((undefined *)pcVar16 == (undefined *)0x0) {
    pcVar16 = "xargs";
  }
  FUN_004075c0(pcVar16);
  FUN_004053a0();
  _DAT_006123d0 = getpid();
  DAT_006123c4 = 0;
  setlocale(6,"");
  bindtextdomain("findutils",
                 "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("findutils");
  iVar10 = FUN_0040bc80(FUN_004058e0);
  if ((iVar10 != 0) || (iVar10 = FUN_0040bc80(FUN_00403ec0), iVar10 != 0)) {
    uVar12 = dcgettext(0,"The atexit library function failed",5);
    piVar13 = __errno_location();
    error(1,*piVar13,uVar12);
  }
  pcVar26 = FUN_00402f00;
  iVar10 = FUN_00404ea0(&DAT_00612420,0x800);
  if (1 < iVar10 - 1U) {
    lVar18 = sysconf(0);
    uVar17 = DAT_00612438;
    if (0 < lVar18) {
      if (lVar18 < 0x801) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("val > XARGS_POSIX_HEADROOM","xargs.c",0x1d8,"main");
      }
      uVar17 = lVar18 - 0x800U;
      if (DAT_00612438 < lVar18 - 0x800U) {
        uVar17 = DAT_00612438;
      }
    }
    DAT_00612438 = uVar17;
    if (DAT_00612438 < 0x800) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("bc_ctl.arg_max >= LINE_MAX","xargs.c",500,"main");
    }
    pcVar26 = FUN_00402ec0;
    _DAT_00612460 = FUN_00404120;
    FUN_00404f80(&DAT_00612420);
  }
  bVar7 = true;
  pcVar25 = FUN_004038b0;
  bVar6 = false;
  pbVar21 = &DAT_0040f292;
  uVar17 = DAT_00612438;
  while (DAT_00612438 = uVar17,
        iVar11 = FUN_0040b0f0(param_1,param_2,"+0a:E:e::i::I:l::L:n:prs:txP:d:",&PTR_DAT_0040d6e0,
                              &local_ec), local_108 = DAT_00612ec8, iVar11 != -1) {
    uVar17 = DAT_00612438;
    switch(iVar11) {
    case 0x30:
      DAT_006123c0 = 0;
      pcVar25 = FUN_00403790;
      break;
    default:
      FUN_004032b0(stderr);
      return 1;
    case 0x45:
    case 0x65:
      DAT_006123f8 = DAT_00612ec8;
      if ((DAT_00612ec8 == (byte *)0x0) || (*DAT_00612ec8 == 0)) {
        DAT_006123f8 = (byte *)0x0;
      }
      break;
    case 0x49:
    case 0x69:
      DAT_00612450 = DAT_00612ec8;
      if (DAT_00612ec8 == (byte *)0x0) {
        DAT_00612450 = &DAT_0040d232;
      }
      _DAT_00612470 = 0;
      DAT_00612468 = 0;
      break;
    case 0x4c:
      DAT_00612468 = FUN_00403570(DAT_00612ec8,0x4c,1,0xffffffffffffffff,1);
      _DAT_00612470 = 0;
      DAT_00612450 = (byte *)0x0;
      uVar17 = DAT_00612438;
      break;
    case 0x50:
      DAT_006122b0 = FUN_00403570(DAT_00612ec8,0x50,0,0x7fffffff,1);
      uVar17 = DAT_00612438;
      break;
    case 0x53:
      bVar6 = true;
      break;
    case 0x61:
      pbVar21 = DAT_00612ec8;
      break;
    case 100:
      lVar18 = -1;
      bVar24 = *DAT_00612ec8;
      pbVar23 = DAT_00612ec8;
      do {
        if (lVar18 == 0) break;
        lVar18 = lVar18 + -1;
        bVar3 = *pbVar23;
        pbVar23 = pbVar23 + (ulong)bVar27 * -2 + 1;
      } while (bVar3 != 0);
      if (lVar18 != -3) {
        if (bVar24 == 0x5c) {
          bVar24 = DAT_00612ec8[1];
          switch(bVar24) {
          case 0x5c:
            break;
          default:
            piVar13 = __errno_location();
            if (bVar24 == 0x78) {
              *piVar13 = 0;
              local_d8.__sigaction_handler.sa_handler = (__sighandler_t)0x0;
              uVar17 = strtoul((char *)(local_108 + 2),(char **)&local_d8,0x10);
              if (0xff < uVar17) {
                pcVar16 = 
                "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lx."
                ;
                goto LAB_0040259d;
              }
            }
            else {
              ppuVar14 = __ctype_b_loc();
              if ((*(byte *)((long)*ppuVar14 + (ulong)bVar24 * 2 + 1) & 8) == 0) {
                uVar12 = dcgettext(0,"Invalid escape sequence %s in input delimiter specification.",
                                   5);
                error(1,0,uVar12,local_108);
                pbVar23 = (byte *)0x0;
              }
              else {
                pbVar23 = local_108 + 1;
              }
              *piVar13 = 0;
              local_d8.__sigaction_handler.sa_handler = (__sighandler_t)0x0;
              uVar17 = strtoul((char *)pbVar23,(char **)&local_d8,8);
              if (0xff < uVar17) {
                pcVar16 = 
                "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lo."
                ;
LAB_0040259d:
                uVar12 = dcgettext(0,pcVar16,5);
                error(1,0,uVar12,local_108,0xff);
              }
            }
            _Var9 = local_d8.__sigaction_handler;
            bVar24 = (byte)uVar17;
            if (*local_d8.__sigaction_handler.sa_handler != (__sighandler_t)0x0) {
              uVar12 = dcgettext(0,
                                 "Invalid escape sequence %s in input delimiter specification; trailing characters %s not recognised."
                                 ,5);
              error(1,0,uVar12,local_108,_Var9.sa_handler);
            }
            break;
          case 0x61:
            bVar24 = 7;
            break;
          case 0x62:
            bVar24 = 8;
            break;
          case 0x66:
            bVar24 = 0xc;
            break;
          case 0x6e:
            bVar24 = 10;
            break;
          case 0x72:
            bVar24 = 0xd;
            break;
          case 0x74:
            bVar24 = 9;
            break;
          case 0x76:
            bVar24 = 0xb;
          }
        }
        else {
          bVar24 = 0;
          uVar12 = dcgettext(0,
                             "Invalid input delimiter specification %s: the delimiter must be either a single character or an escape sequence starting with \\."
                             ,5);
          error(1,0,uVar12,local_108);
        }
      }
      pcVar25 = FUN_00403790;
      DAT_006123c0 = bVar24;
      uVar17 = DAT_00612438;
      break;
    case 0x68:
      FUN_004032b0(stdout);
      return 0;
    case 0x6c:
      if (DAT_00612ec8 == (byte *)0x0) {
        DAT_00612468 = 1;
      }
      else {
        DAT_00612468 = FUN_00403570(DAT_00612ec8,0x6c,1,0xffffffffffffffff,1);
      }
      _DAT_00612470 = 0;
      DAT_00612450 = (byte *)0x0;
      uVar17 = DAT_00612438;
      break;
    case 0x6e:
      _DAT_00612470 = FUN_00403570(DAT_00612ec8,0x6e,1,0xffffffffffffffff,1);
      DAT_00612468 = 0;
      uVar17 = DAT_00612438;
      if ((_DAT_00612470 == 1) && (DAT_00612450 != (byte *)0x0)) {
        _DAT_00612470 = 0;
      }
      else {
        DAT_00612450 = (byte *)0x0;
      }
      break;
    case 0x70:
      DAT_006123c1 = 1;
    case 0x74:
      DAT_006123c2 = 1;
      break;
    case 0x72:
      bVar7 = false;
      break;
    case 0x73:
      (*pcVar26)();
      uVar17 = FUN_00403570(DAT_00612ec8,0x73,1,DAT_00612428,0);
      uVar8 = DAT_00612428;
      if (DAT_00612428 < uVar17) {
        uVar12 = dcgettext(0,"warning: value %ld for -s option is too large, using %ld instead",5);
        error(0,0,uVar12,uVar17,uVar8);
        uVar17 = DAT_00612428;
      }
      break;
    case 0x76:
      FUN_00404580("xargs");
      return 0;
    case 0x78:
      DAT_00612420 = 1;
      break;
    case 0x80:
      pcVar16 = strchr((char *)DAT_00612ec8,0x3d);
      if (pcVar16 != (char *)0x0) {
        puVar5 = (&PTR_DAT_0040d6e0)[(long)local_ec * 4];
        uVar12 = dcgettext(0,"option --%s may not be set to a value which includes `=\'",5);
        error(1,0,uVar12,puVar5);
      }
      pbVar23 = DAT_00612ec8;
      DAT_006123b8 = DAT_00612ec8;
      iVar11 = unsetenv((char *)DAT_00612ec8);
      uVar17 = DAT_00612438;
      if (iVar11 != 0) {
        uVar12 = dcgettext(0,"failed to unset environment variable %s",5);
        piVar13 = __errno_location();
        error(1,*piVar13,uVar12,pbVar23);
        uVar17 = DAT_00612438;
      }
    }
  }
  if ((DAT_006123f8 != (byte *)0x0) && (pcVar25 == FUN_00403790)) {
    uVar12 = dcgettext(0,"warning: the -E option has no effect if -0 or -d is used.\n",5);
    error(0,0,uVar12);
  }
  (*pcVar26)();
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("BC_INIT_OK == bcstatus","xargs.c",0x2a2,"main");
  }
  local_d8.__sigaction_handler.sa_handler = FUN_00402ed0;
  sigemptyset(&local_d8.sa_mask);
  local_d8.sa_flags = 0;
  iVar10 = sigaction_t(10,&local_d8,(sigaction *)0x0);
  if (iVar10 != 0) {
    uVar12 = dcgettext(0,"Cannot set SIGUSR1 signal handler",5);
    piVar13 = __errno_location();
    error(0,*piVar13,uVar12);
  }
  local_d8.__sigaction_handler.sa_handler = FUN_00403720;
  sigemptyset(&local_d8.sa_mask);
  local_d8.sa_flags = 0;
  iVar10 = sigaction_t(0xc,&local_d8,(sigaction *)0x0);
  if (iVar10 != 0) {
    uVar12 = dcgettext(0,"Cannot set SIGUSR2 signal handler",5);
    piVar13 = __errno_location();
    error(0,*piVar13,uVar12);
  }
  iVar10 = strcmp((char *)pbVar21,"-");
  if (iVar10 == 0) {
    DAT_006124e8 = stdin;
  }
  else {
    _DAT_006124d8 = 1;
    DAT_006124e8 = FUN_004036c0(pbVar21);
    if (DAT_006124e8 == 0) {
      FUN_00408c90(0,8,pbVar21);
      uVar12 = dcgettext(0,"Cannot open input file %s",5);
      piVar13 = __errno_location();
      error(1,*piVar13,uVar12);
    }
  }
  if ((DAT_00612450 != (byte *)0x0) || (DAT_00612468 != 0)) {
    DAT_00612420 = 1;
  }
  if (DAT_0061233c == param_1) {
    local_e0 = &local_e5;
    param_2 = &local_e0;
    param_1 = 1;
    DAT_0061233c = 0;
  }
  if (bVar6) {
    uVar12 = FUN_00404e60();
    pcVar16 = (char *)dcgettext(0,"Your environment variables take up %lu bytes\n",5);
    fprintf(stderr,pcVar16,uVar12);
    uVar17 = DAT_00612428;
    pcVar16 = (char *)dcgettext(0,"POSIX upper limit on argument length (this system): %lu\n",5);
    fprintf(stderr,pcVar16,uVar17);
    uVar12 = DAT_00612430;
    pcVar16 = (char *)dcgettext(0,
                                "POSIX smallest allowable upper limit on argument length (all systems): %lu\n"
                                ,5);
    fprintf(stderr,pcVar16,uVar12);
    uVar17 = DAT_00612428;
    lVar18 = FUN_00404e60();
    pcVar16 = (char *)dcgettext(0,"Maximum length of command we could actually use: %lu\n",5);
    fprintf(stderr,pcVar16,uVar17 - lVar18);
    uVar17 = DAT_00612438;
    pcVar16 = (char *)dcgettext(0,"Size of command buffer we are actually using: %lu\n",5);
    fprintf(stderr,pcVar16,uVar17);
    pcVar16 = (char *)dcgettext(0,"Maximum parallelism (--max-procs must be no greater): %lu\n",5);
    fprintf(stderr,pcVar16,0x7fffffff);
    iVar10 = isatty(0);
    if (iVar10 != 0) {
      pcVar16 = (char *)dcgettext(0,
                                  "\nExecution of xargs will continue now, and it will try to read its input and run commands; if this is not what you wanted to happen, please type the end-of-file keystroke.\n"
                                  ,5);
      fprintf(stderr,pcVar16);
      if (bVar7) {
        puVar22 = param_2[DAT_0061233c];
        pcVar16 = (char *)dcgettext(0,
                                    "Warning: %s will be run at least once.  If you do not want that to happen, then press the interrupt keystroke.\n"
                                    ,5);
        fprintf(stderr,pcVar16,puVar22);
      }
    }
  }
  DAT_006124e0 = FUN_00409680(DAT_00612438 + 1);
  _DAT_00612498 = FUN_00409680(DAT_00612438 + 1);
  puVar19 = (undefined *)0x0;
  signal(0x11,(__sighandler_t)0x0);
  if (DAT_00612450 == (byte *)0x0) {
    for (; DAT_0061233c < param_1; DAT_0061233c = DAT_0061233c + 1) {
      uVar17 = 0xffffffffffffffff;
      puVar22 = param_2[DAT_0061233c];
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar4 = *(char *)puVar22;
        puVar22 = (undefined *)((long)puVar22 + (ulong)bVar27 * -2 + 1);
      } while (cVar4 != '\0');
      puVar20 = &DAT_00612480;
      FUN_004047a0(&DAT_00612420,&DAT_00612480,param_2[DAT_0061233c],~uVar17,0,0,DAT_006122b4,
                   puVar19);
      puVar19 = puVar20;
    }
    DAT_006122b4 = 0;
    DAT_00612458 = DAT_00612480;
    _DAT_006124a8 = DAT_006124a0;
    while (iVar10 = (*pcVar25)(), iVar10 != -1) {
      if ((DAT_00612468 != 0) && (DAT_00612468 <= _DAT_006124d0)) {
        FUN_00404c00(&DAT_00612420,&DAT_00612480);
        _DAT_006124d0 = 0;
      }
    }
    if ((DAT_00612480 != DAT_00612458) || ((bVar7 && (DAT_006123f0 == '\0')))) {
      FUN_00404c00(&DAT_00612420,&DAT_00612480);
    }
  }
  else {
    lVar15 = FUN_00409680((long)param_1 << 3);
    lVar18 = (long)DAT_0061233c;
    iVar10 = DAT_0061233c;
    while (iVar10 < param_1) {
      uVar17 = 0xffffffffffffffff;
      puVar22 = param_2[lVar18];
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar4 = *(char *)puVar22;
        puVar22 = (undefined *)((long)puVar22 + (ulong)bVar27 * -2 + 1);
      } while (cVar4 != '\0');
      *(ulong *)(lVar15 + lVar18 * 8) = ~uVar17 - 1;
      lVar18 = lVar18 + 1;
      iVar10 = (int)lVar18;
    }
    uVar17 = 0xffffffffffffffff;
    pbVar21 = DAT_00612450;
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      bVar24 = *pbVar21;
      pbVar21 = pbVar21 + (ulong)bVar27 * -2 + 1;
    } while (bVar24 != 0);
    _DAT_00612448 = ~uVar17 - 1;
    while (iVar10 = (*pcVar25)(), iVar10 != -1) {
      FUN_00405050(&DAT_00612420,&DAT_00612480);
      lVar18 = (long)DAT_0061233c;
      DAT_006124a0 = 0;
      uVar17 = (ulong)DAT_006122b4;
      FUN_004047a0(&DAT_00612420,&DAT_00612480,param_2[lVar18],*(long *)(lVar15 + lVar18 * 8) + 1,0,
                   0,uVar17,lVar18);
      DAT_006122b4 = 0;
      iVar11 = DAT_0061233c + 1;
      lVar18 = (long)iVar11;
      while (iVar11 < param_1) {
        lVar1 = lVar18 * 8;
        ppuVar2 = param_2 + lVar18;
        lVar18 = lVar18 + 1;
        FUN_00404a40(&DAT_00612420,&DAT_00612480,*ppuVar2,*(undefined *)(lVar15 + lVar1),0,0,
                     DAT_006124e0,(long)iVar10 + -1,DAT_006122b4);
        uVar17 = extraout_RDX;
        iVar11 = (int)lVar18;
      }
      FUN_00404c00(&DAT_00612420,&DAT_00612480,uVar17);
    }
  }
  DAT_006123c4 = DAT_006123c8;
  return DAT_006123c8;
}


void FUN_00402de0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00611ff0)
            (FUN_00402030,unaff_retaddr,&stack0x00000008,FUN_0040bc10,FUN_0040bc70,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402e18) */
/* WARNING: Removing unreachable block (ram,0x00402e22) */

void FUN_00402e0b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402e59) */

void FUN_00402e2a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402e96) */

void FUN_00402e61(void)

{
  if (DAT_00612388 != '\0') {
    return;
  }
  FUN_00402e0b();
  DAT_00612388 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402e59) */

void thunk_FUN_00402e2a(void)

{
  return;
}


void FUN_00402ec0(void)

{
  return;
}


void FUN_00402ed0(void)

{
  if (DAT_006122b0 != 0x7fffffff) {
    DAT_006122b0 = DAT_006122b0 + 1;
  }
  DAT_006123cc = 1;
  return;
}


void FUN_00402f00(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"environment is too large for exec",5);
  error(1,0,uVar1);
  return;
}


void FUN_00402f30(byte param_1,uint param_2)

{
  long lVar1;
  __pid_t _Var2;
  int *piVar3;
  undefined uVar4;
  undefined uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint local_54;
  uint local_3c [3];
  
  if (DAT_006123e8 == 0) {
    return;
  }
  uVar8 = 0;
  local_54 = (local_54 & 0xffffff00 | (uint)param_1) ^ 1;
  do {
    DAT_006123cc = 0;
    uVar7 = param_2 <= uVar8 & local_54;
    while( true ) {
      do {
        while (_Var2 = waitpid(-1,(int *)local_3c,uVar7), lVar1 = DAT_006123e8, _Var2 == -1) {
          piVar3 = __errno_location();
          if (*piVar3 != 4) {
            uVar5 = dcgettext(0,"error waiting for child process",5);
            error(1,*piVar3,uVar5);
          }
          if ((DAT_006123cc != 0) && (param_1 == 0)) {
            uVar7 = 1;
          }
        }
        if (_Var2 == 0) {
          if (uVar7 == 0) {
            uVar5 = dcgettext(0,"WARNING: Lost track of %lu child processes",5);
            error(0,0,uVar5,lVar1);
            return;
          }
          return;
        }
      } while (DAT_006123d8 == 0);
      if (_Var2 == *DAT_006123e0) break;
      uVar6 = 0;
      while( true ) {
        uVar6 = (ulong)((int)uVar6 + 1);
        if (DAT_006123d8 <= uVar6) break;
        if (DAT_006123e0[uVar6] == _Var2) goto LAB_00403040;
      }
      if (uVar6 != DAT_006123d8) goto LAB_00403040;
    }
    uVar6 = 0;
LAB_00403040:
    DAT_006123e0[uVar6] = 0;
    uVar8 = uVar8 + 1;
    DAT_006123e8 = DAT_006123e8 + -1;
    if ((char)(local_3c[0] >> 8) == -1) {
      uVar5 = dcgettext(0,"%s: exited with status 255; aborting",5);
      error(0x7c,0,uVar5);
    }
    if ((char)local_3c[0] == '\x7f') {
      uVar7 = local_3c[0] >> 8;
      uVar5 = *DAT_00612488;
      uVar4 = dcgettext(0,"%s: stopped by signal %d",5);
      error(0x7d,0,uVar4,uVar5,(char)uVar7);
    }
    if ('\x01' < (char)(((byte)local_3c[0] & 0x7f) + 1)) {
      uVar7 = local_3c[0] & 0x7f;
      uVar5 = *DAT_00612488;
      uVar4 = dcgettext(0,"%s: terminated by signal %d",5);
      error(0x7d,0,uVar4,uVar5,uVar7);
    }
    if ((char)(local_3c[0] >> 8) != '\0') {
      DAT_006123c8 = 0x7b;
    }
    if (DAT_006123e8 == 0) {
      return;
    }
  } while( true );
}


ulong FUN_004031a0(int param_1)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = DAT_006123d8;
  if (DAT_006123d8 == 0) {
    lVar6 = 0;
    uVar3 = 0;
    if (DAT_006123e0 == (int *)0x0) {
      lVar7 = 0x80;
      DAT_006123d8 = 0x20;
    }
    else {
LAB_00403225:
      DAT_006123d8 = DAT_006123d8 + 1 + (DAT_006123d8 >> 1);
      lVar7 = DAT_006123d8 * 4;
    }
    piVar2 = (int *)FUN_004096d0(DAT_006123e0,lVar7);
    uVar1 = DAT_006123d8;
    uVar5 = uVar3;
    DAT_006123e0 = piVar2;
    if (uVar8 < DAT_006123d8) {
      do {
        piVar2[uVar8] = 0;
        uVar8 = (ulong)((int)uVar5 + 1);
        uVar5 = uVar8;
      } while (uVar8 < uVar1);
    }
LAB_004031ef:
    piVar4 = (int *)((long)piVar2 + lVar6);
    if (*(int *)((long)piVar2 + lVar6) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0 == pids[i]","xargs.c",0x58c,"add_proc");
    }
  }
  else if (*DAT_006123e0 == 0) {
    uVar3 = 0;
    piVar4 = DAT_006123e0;
  }
  else {
    uVar3 = 0;
    do {
      uVar3 = (ulong)((int)uVar3 + 1);
      lVar6 = uVar3 * 4;
      if (DAT_006123d8 <= uVar3) {
        piVar2 = DAT_006123e0;
        if (uVar3 == DAT_006123d8) goto LAB_00403225;
        goto LAB_004031ef;
      }
      piVar4 = DAT_006123e0 + uVar3;
    } while (DAT_006123e0[uVar3] != 0);
  }
  *piVar4 = param_1;
  DAT_006123e8 = DAT_006123e8 + 1;
  DAT_006123f0 = 1;
  return uVar3;
}


void FUN_004032b0(FILE *param_1)

{
  undefined uVar1;
  char *pcVar2;
  
  uVar1 = DAT_00612528;
  pcVar2 = (char *)dcgettext(0,"Usage: %s [OPTION]... COMMAND [INITIAL-ARGS]...\n",5);
  fprintf(param_1,pcVar2,uVar1);
  pcVar2 = (char *)dcgettext(0,
                             "Run COMMAND with arguments INITIAL-ARGS and more arguments read from input.\n\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "Mandatory and optional arguments to long options are also\nmandatory or optional for the corresponding short option.\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -0, --null                   items are separated by a null, not whitespace;\n                                 disables quote and backslash processing and\n                                 logical EOF processing\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -a, --arg-file=FILE          read arguments from FILE, not standard input\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -d, --delimiter=CHARACTER    items in input stream are separated by CHARACTER,\n                                 not by whitespace; disables quote and backslash\n                                 processing and logical EOF processing\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -E END                       set logical EOF string; if END occurs as a line\n                                 of input, the rest of the input is ignored\n                                 (ignored if -0 or -d was specified)\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -e, --eof[=END]              equivalent to -E END if END is specified;\n                                 otherwise, there is no end-of-file string\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,"  -I R                         same as --replace=R\n",5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -i, --replace[=R]            replace R in INITIAL-ARGS with names read\n                                 from standard input; if R is unspecified,\n                                 assume {}\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -L, --max-lines=MAX-LINES    use at most MAX-LINES non-blank input lines per\n                                 command line\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -l[MAX-LINES]                similar to -L but defaults to at most one non-\n                                 blank input line if MAX-LINES is not specified\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -n, --max-args=MAX-ARGS      use at most MAX-ARGS arguments per command line\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -P, --max-procs=MAX-PROCS    run at most MAX-PROCS processes at a time\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,"  -p, --interactive            prompt before running commands\n",5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "      --process-slot-var=VAR   set environment variable VAR in child processes\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -r, --no-run-if-empty        if there are no arguments, then do not run COMMAND;\n                                 if this option is not given, COMMAND will be\n                                 run at least once\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -s, --max-chars=MAX-CHARS    limit length of command line to MAX-CHARS\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,"      --show-limits            show limits on command-line length\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -t, --verbose                print commands before executing them\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "  -x, --exit                   exit if the size (see -s) is exceeded\n"
                             ,5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,"      --help                   display this help and exit\n",5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,
                             "      --version                output version information and exit\n",
                             5);
  fputs(pcVar2,param_1);
  pcVar2 = (char *)dcgettext(0,"\nReport bugs to <bug-findutils@gnu.org>.\n",5);
  fputs(pcVar2,param_1);
  return;
}


long FUN_00403570(char *param_1,uint param_2,long param_3,long param_4,int param_5)

{
  undefined uVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  char *local_30;
  
  uVar4 = (ulong)param_2;
  lVar2 = strtol(param_1,&local_30,10);
  uVar1 = DAT_00612528;
  if ((local_30 == param_1) || (*local_30 != '\0')) {
    pcVar3 = (char *)dcgettext(0,"%s: invalid number for -%c option\n",5);
    fprintf(stderr,pcVar3,uVar1,uVar4);
    FUN_004032b0(stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (lVar2 < param_3) {
    pcVar3 = (char *)dcgettext(0,"%s: value for -%c option should be >= %ld\n",5);
    fprintf(stderr,pcVar3,uVar1,uVar4,param_3);
    if (param_5 == 0) {
      return param_3;
    }
LAB_0040369c:
    FUN_004032b0(stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if ((-1 < param_4) && (param_4 < lVar2)) {
    pcVar3 = (char *)dcgettext(0,"%s: value for -%c option should be <= %ld\n",5);
    fprintf(stderr,pcVar3,uVar1,uVar4,param_4);
    lVar2 = param_4;
    if (param_5 != 0) goto LAB_0040369c;
  }
  return lVar2;
}


FILE * FUN_004036c0(undefined param_1)

{
  int iVar1;
  int __fd;
  FILE *pFVar2;
  int *piVar3;
  
  pFVar2 = (FILE *)0x0;
  __fd = FUN_00405410(param_1,0);
  if (-1 < __fd) {
    pFVar2 = fdopen(__fd,"r");
    if (pFVar2 == (FILE *)0x0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      close(__fd);
      *piVar3 = iVar1;
    }
  }
  return pFVar2;
}


void FUN_00403720(void)

{
  if (1 < DAT_006122b0) {
    DAT_006122b0 = DAT_006122b0 + -1;
  }
  return;
}


void FUN_00403740(void)

{
  if ((((DAT_00612450 == 0) && (DAT_006122b4 == '\0')) && (DAT_00612480 != DAT_00612458)) &&
     (DAT_00612420 == 0)) {
    FUN_00404c00(&DAT_00612420,&DAT_00612480);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00403790(undefined param_1,undefined param_2,undefined *param_3)

{
  int iVar1;
  undefined uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = DAT_006124e0 + ((DAT_00612438 + -1) - _DAT_006124a8);
  puVar4 = DAT_006124e0;
  if (DAT_006123b0 == '\0') {
    while (iVar1 = _IO_getc(DAT_006124e8), param_3 = DAT_006124e0, iVar1 != -1) {
      if (DAT_006123c0 == iVar1) {
        _DAT_006124d0 = _DAT_006124d0 + 1;
        *puVar4 = 0;
        goto LAB_00403836;
      }
      if (puVar5 <= puVar4) {
        FUN_00403740();
        uVar2 = dcgettext(0,"argument line too long",5);
        error(1,0,uVar2);
      }
      *puVar4 = (char)iVar1;
      puVar4 = puVar4 + 1;
    }
    DAT_006123b0 = '\x01';
    if (DAT_006124e0 != puVar4) {
      *puVar4 = 0;
LAB_00403836:
      puVar4 = puVar4 + (1 - (long)param_3);
      uVar3 = (ulong)puVar4 & 0xffffffff;
      if (DAT_00612450 == 0) {
        FUN_004047a0(&DAT_00612420,&DAT_00612480,param_3,(long)(int)puVar4,0,0,DAT_006122b4);
        return CONCAT88(0x4037dc,(ulong)puVar4 & 0xffffffff);
      }
      goto LAB_00403849;
    }
  }
  uVar3 = 0xffffffff;
LAB_00403849:
  return CONCAT88(param_3,uVar3);
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004038b0(void)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined uVar8;
  undefined uVar9;
  ushort **ppuVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  int iVar14;
  uint local_40;
  
  pcVar13 = DAT_006124e0 + ((DAT_00612438 + -1) - _DAT_006124a8);
  if (DAT_006123a0 == '\0') {
    bVar1 = false;
    bVar2 = true;
    uVar12 = 0xffffffffffffffff;
    iVar7 = 1;
    local_40 = 0;
    pcVar11 = DAT_006124e0;
    while (uVar4 = _IO_getc(DAT_006124e8), pcVar3 = DAT_006124e0, uVar4 != 0xffffffff) {
      if (iVar7 == 1) goto LAB_00403a4d;
      uVar6 = uVar4;
      if (iVar7 != 2) goto joined_r0x00403914;
      if (uVar4 == 10) goto LAB_00403bdd;
LAB_004039a5:
      if (local_40 == uVar4) {
        do {
          bVar1 = true;
          uVar6 = _IO_getc(DAT_006124e8);
          if (uVar6 == 0xffffffff) {
LAB_00403b80:
            pcVar13 = DAT_006124e0;
            DAT_006123a0 = '\x01';
            if (pcVar11 == DAT_006124e0) {
              DAT_006123a0 = '\x01';
              return -1;
            }
            *pcVar11 = '\0';
            iVar14 = ((int)pcVar11 + 1) - (int)pcVar13;
            goto LAB_00403d7b;
          }
          uVar12 = (ulong)(int)uVar4;
joined_r0x00403914:
          iVar7 = (int)pcVar11;
          if (uVar6 == 10) {
            if (((uVar12 & 0xffffff80) != 0) ||
               (ppuVar10 = __ctype_b_loc(), (*(byte *)(*ppuVar10 + uVar12) & 1) == 0)) {
              _DAT_006124d0 = _DAT_006124d0 + 1;
            }
            pcVar3 = DAT_006124e0;
            bVar1 = (bool)(bVar1 | DAT_006124e0 != pcVar11);
            if (bVar1) {
              *pcVar11 = '\0';
              iVar7 = (iVar7 + 1) - (int)pcVar3;
              if (((DAT_006123f8 == (char *)0x0) || (*DAT_006123f8 != *pcVar3)) ||
                 (iVar14 = strcmp(DAT_006123f8,pcVar3), iVar14 != 0)) {
                if (DAT_00612450 == 0) {
                  FUN_004047a0(&DAT_00612420,&DAT_00612480,pcVar3,(long)iVar7,0,0,DAT_006122b4);
                  return iVar7;
                }
                return iVar7;
              }
LAB_00403b01:
              if (bVar2) {
                DAT_006123a0 = 1;
                return -1;
              }
              DAT_006123a0 = 1;
              return iVar7;
            }
            uVar4 = _IO_getc(DAT_006124e8);
            if (uVar4 != 0xffffffff) {
              uVar12 = 10;
              goto LAB_00403a4d;
            }
            goto LAB_00403b80;
          }
          if (((DAT_00612450 == 0) && ((uVar6 & 0xffffff80) == 0)) &&
             (ppuVar10 = __ctype_b_loc(), pcVar3 = DAT_006124e0,
             (*(byte *)(*ppuVar10 + (int)uVar6) & 1) != 0)) {
            *pcVar11 = '\0';
            iVar7 = (iVar7 + 1) - (int)pcVar3;
            if (((DAT_006123f8 != (char *)0x0) && (*DAT_006123f8 == *pcVar3)) &&
               (iVar14 = strcmp(DAT_006123f8,pcVar3), iVar14 == 0)) goto LAB_00403b01;
            FUN_004047a0(&DAT_00612420,&DAT_00612480,pcVar3,(long)iVar7,0,0,DAT_006122b4);
            pcVar11 = DAT_006124e0;
            uVar4 = _IO_getc(DAT_006124e8);
            bVar2 = false;
            if (uVar4 != 0xffffffff) {
              uVar12 = (ulong)(int)uVar6;
              bVar1 = true;
LAB_00403a4d:
              if ((uVar4 & 0xffffff80) != 0) goto LAB_00403a97;
              do {
                ppuVar10 = __ctype_b_loc();
                uVar6 = uVar4;
                if ((((*(byte *)(*ppuVar10 + (int)uVar4) & 1) == 0) && (uVar4 != 10)) &&
                   (uVar4 != 0xd)) goto LAB_00403a97;
                while( true ) {
                  uVar4 = _IO_getc(DAT_006124e8);
                  if (uVar4 == 0xffffffff) goto LAB_00403b80;
                  uVar12 = (ulong)(int)uVar6;
                  if ((uVar4 & 0xffffff80) == 0) break;
LAB_00403a97:
                  uVar6 = uVar4;
                  if (1 < uVar4 - 0xb) goto joined_r0x00403914;
                }
              } while( true );
            }
            goto LAB_00403b80;
          }
          if (uVar6 != 0x27) {
            if (uVar6 == 0x5c) {
              uVar6 = _IO_getc(DAT_006124e8);
              if (uVar6 == 0xffffffff) goto LAB_00403b80;
            }
            else if (uVar6 == 0x22) goto LAB_00403bb0;
            iVar7 = 0;
            uVar5 = uVar6 | _DAT_00612400;
            bVar1 = true;
            uVar4 = uVar6;
            goto joined_r0x0040395d;
          }
LAB_00403bb0:
          uVar4 = _IO_getc(DAT_006124e8);
          pcVar3 = DAT_006124e0;
          local_40 = uVar6;
          if (uVar4 == 0xffffffff) {
            DAT_006123a0 = '\x01';
            if (pcVar11 == DAT_006124e0) {
              DAT_006123a0 = '\x01';
              return -1;
            }
            *pcVar11 = '\0';
            iVar14 = (iVar7 + 1) - (int)pcVar3;
            goto LAB_00403e60;
          }
          bVar1 = true;
          if (uVar4 != 10) goto LAB_004039a5;
LAB_00403bdd:
          FUN_00403740();
          if (local_40 == 0x22) {
            iVar7 = 2;
            uVar8 = dcgettext(0,"double",5);
            uVar9 = dcgettext(0,
                              "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option"
                              ,5);
            uVar12 = 10;
            error(1,0,uVar9,uVar8);
            goto joined_r0x00403962;
          }
          uVar8 = dcgettext(0,"single",5);
          uVar9 = dcgettext(0,
                            "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option"
                            ,5);
          error(1,0,uVar9,uVar8);
          if (local_40 != 10) {
            uVar12 = 10;
            iVar7 = 2;
            goto joined_r0x00403962;
          }
        } while( true );
      }
      iVar7 = 2;
      uVar5 = uVar4 | _DAT_00612400;
joined_r0x0040395d:
      uVar12 = (ulong)(int)uVar4;
      if (uVar5 == 0) {
        uVar12 = 0;
        uVar8 = dcgettext(0,
                          "WARNING: a NUL character occurred in the input.  It cannot be passed through in the argument list.  Did you mean to use the --null option?"
                          ,5);
        error(0,0,uVar8);
        _DAT_00612400 = 1;
      }
joined_r0x00403962:
      if (pcVar13 <= pcVar11) {
        FUN_00403740();
        uVar8 = dcgettext(0,"argument line too long",5);
        error(1,0,uVar8);
      }
      *pcVar11 = (char)uVar12;
      pcVar11 = pcVar11 + 1;
    }
    DAT_006123a0 = '\x01';
    if (DAT_006124e0 != pcVar11) {
      *pcVar11 = '\0';
      iVar14 = ((int)pcVar11 + 1) - (int)pcVar3;
      if (iVar7 == 2) {
LAB_00403e60:
        FUN_00403740();
        if (local_40 == 0x22) {
          uVar8 = dcgettext(0,"double",5);
        }
        else {
          uVar8 = dcgettext(0,"single",5);
        }
        uVar9 = dcgettext(0,
                          "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option"
                          ,5);
        error(1,0,uVar9,uVar8);
      }
LAB_00403d7b:
      if (((!bVar2) || (DAT_006123f8 == (char *)0x0)) ||
         ((*DAT_006123f8 != *DAT_006124e0 || (iVar7 = strcmp(DAT_006123f8,DAT_006124e0), iVar7 != 0)
          ))) {
        if (DAT_00612450 == 0) {
          FUN_004047a0(&DAT_00612420,&DAT_00612480,DAT_006124e0,(long)iVar14,0,0,DAT_006122b4);
          return iVar14;
        }
        return iVar14;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ec0(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  if (_Var1 != _DAT_006123d0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("getpid () == parent","xargs.c",0x60c,"wait_for_proc_all");
  }
  if (DAT_006123a1 == '\0') {
    DAT_006123a1 = 1;
    FUN_00402f30(1,0);
    DAT_006123a1 = '\0';
    if (DAT_006123c4 != DAT_006123c8) {
                    /* WARNING: Subroutine does not return */
      _exit(DAT_006123c8);
    }
  }
  return;
}


ulong FUN_00403f30(char param_1)

{
  int iVar1;
  uint uVar2;
  undefined uVar3;
  int *piVar4;
  undefined extraout_var;
  ulong uVar5;
  
  if (DAT_00612480 != 1) {
    uVar5 = 0;
    do {
      iVar1 = fprintf(stderr,"%s ",*(undefined *)(DAT_00612488 + uVar5 * 8));
      if (iVar1 < 0) {
        uVar3 = dcgettext(0,"Failed to write to stderr",5);
        piVar4 = __errno_location();
        error(1,*piVar4,uVar3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_00612480 - 1U);
  }
  if (param_1 == '\0') {
    _IO_putc(10,stderr);
    return 0;
  }
  if ((DAT_006123a8 == (_IO_FILE *)0x0) &&
     (DAT_006123a8 = (_IO_FILE *)FUN_004036c0("/dev/tty"), DAT_006123a8 == (_IO_FILE *)0x0)) {
    uVar3 = dcgettext(0,"failed to open /dev/tty for reading",5);
    piVar4 = __errno_location();
    error(1,*piVar4,uVar3);
  }
  fwrite(&DAT_0040d1ea,1,4,stderr);
  iVar1 = FUN_00409e80(stderr);
  if (iVar1 != 0) {
    uVar3 = dcgettext(0,"Failed to write to stderr",5);
    piVar4 = __errno_location();
    error(1,*piVar4,uVar3);
  }
  uVar2 = _IO_getc(DAT_006123a8);
  if ((uVar2 == 10) || (uVar2 == 0xffffffff)) {
    uVar5 = (ulong)uVar2;
  }
  else {
    do {
      iVar1 = _IO_getc(DAT_006123a8);
      uVar5 = CONCAT44(extraout_var,iVar1);
      if (iVar1 == -1) break;
    } while (iVar1 != 10);
  }
  if ((int)uVar5 == -1) {
    uVar3 = dcgettext(0,"Failed to read from stdin",5);
    piVar4 = __errno_location();
    uVar5 = error(1,*piVar4,uVar3);
  }
  return uVar5 & 0xffffffffffffff00 | (ulong)((uVar2 & 0xffffffdf) == 0x59);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00404120(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  __pid_t __pid;
  uint uVar4;
  long lVar5;
  undefined uVar6;
  int *piVar7;
  char *__s;
  char **in_RCX;
  int local_40;
  int local_3c;
  int local_38;
  undefined local_34;
  undefined local_2c;
  
  if ((DAT_006122b0 != 0) && ((ulong)(long)DAT_006122b0 <= DAT_006123e8)) {
    do {
      FUN_00402f30(0,1);
    } while ((ulong)(long)DAT_006122b0 <= DAT_006123e8);
  }
  if (DAT_006123c1 == '\0') {
LAB_00404179:
    if (DAT_006123c2 != '\0') {
      FUN_00403f30(0);
    }
  }
  else {
    cVar2 = FUN_00403f30(1);
    if (cVar2 == '\0') {
      return 1;
    }
    if (DAT_006123c1 == '\0') goto LAB_00404179;
  }
  FUN_00402f30(0,0);
  iVar3 = pipe(&local_3c);
  if (iVar3 != 0) {
    uVar6 = dcgettext(0,"could not create pipe before fork",5);
    piVar7 = __errno_location();
    error(1,*piVar7,uVar6);
  }
  FUN_00409d40(local_38,2,1);
  while (((__pid = fork(), __pid < 0 && (piVar7 = __errno_location(), *piVar7 == 0xb)) &&
         (DAT_006123e8 != 0))) {
    FUN_00402f30(0);
  }
  if (__pid == -1) {
    uVar6 = dcgettext(0,"cannot fork",5);
    piVar7 = __errno_location();
    error(1,*piVar7,uVar6);
  }
  else if (__pid != 0) {
    close(local_38);
    lVar5 = FUN_00408fe0(local_3c,&local_40,4);
    if (lVar5 == 4) {
      close(local_3c);
      waitpid(__pid,(int *)&local_34,0);
      if (local_40 != 7) {
        if (local_40 == 2) {
                    /* WARNING: Subroutine does not return */
          exit(0x7f);
        }
                    /* WARNING: Subroutine does not return */
        exit(0x7e);
      }
      uVar6 = 0;
    }
    else {
      if (lVar5 == -1) {
        close(local_3c);
        uVar6 = dcgettext(0,
                          "errno-buffer safe_read failed in xargs_do_exec (this is probably a bug, please report it)"
                          ,5);
        piVar7 = __errno_location();
        error(0,*piVar7,uVar6);
      }
      else if (lVar5 == 0) {
        FUN_004031a0(__pid);
      }
      else {
        uVar6 = dcgettext(0,
                          "read returned unexpected value %zu; this is probably a bug, please report it"
                          ,5);
        piVar7 = __errno_location();
        error(1,*piVar7,uVar6,lVar5);
      }
      close(local_3c);
      uVar6 = 1;
    }
    return uVar6;
  }
  close(local_3c);
  DAT_006123c8 = 0;
  FUN_00405550();
  uVar4 = FUN_004031a0();
  iVar3 = snprintf((char *)0x0,0,"%u",(ulong)uVar4);
  __s = (char *)malloc((long)(iVar3 + 1));
  piVar7 = __errno_location();
  if (__s == (char *)0x0) {
    uVar6 = dcgettext(0,"unable to allocate memory",5);
    error(0,*piVar7,uVar6);
  }
  else {
    snprintf(__s,(long)(iVar3 + 1),"%u",(ulong)uVar4);
    pcVar1 = DAT_006123b8;
    if ((DAT_006123b8 != (char *)0x0) && (iVar3 = setenv(DAT_006123b8,__s,1), iVar3 < 0)) {
      uVar6 = dcgettext(0,"failed to set environment variable %s",5);
      error(0,*piVar7,uVar6,pcVar1);
    }
    free(__s);
  }
  if (_DAT_006124d8 == 0) {
    local_2c = 0x6c;
    local_34 = 0x6c756e2f7665642f;
    close(0);
    iVar3 = open((char *)&local_34,0);
    if (iVar3 < 0) {
      uVar6 = FUN_00408c90(0,8,&local_34);
      error(0,*piVar7,"%s",uVar6);
    }
  }
  cVar2 = FUN_00405070(in_RCX);
  if (cVar2 == '\0') {
    execvp(*in_RCX,in_RCX);
    if (*piVar7 == 0) goto LAB_00404480;
  }
  else {
    *piVar7 = 7;
  }
  write(local_38,piVar7,4);
LAB_00404480:
  close(local_38);
  if ((*piVar7 == 7) || (error(0,*piVar7,"%s",*in_RCX), *piVar7 != 2)) {
    iVar3 = 0x7e;
  }
  else {
    iVar3 = 0x7f;
  }
                    /* WARNING: Subroutine does not return */
  _exit(iVar3);
}


undefined FUN_00404580(undefined param_1)

{
  ulong uVar1;
  undefined uVar2;
  undefined uVar3;
  
  FUN_00409e80(stderr);
  uVar1 = dcgettext(0,"Kevin Dalley",5);
  uVar2 = dcgettext(0,"James Youngman",5);
  uVar3 = dcgettext(0,"Eric B. Decker",5);
  FUN_00409550(stdout,param_1,"GNU findutils",PTR_s_4_6_0_006122b8,uVar3,uVar2);
  return ZEXT816(uVar1);
}


ulong FUN_00404600(long param_1,long param_2,char param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x40);
  if (param_3 == '\0') {
    if ((param_4 < *(ulong *)(param_2 + 0x48)) || (*(ulong *)(param_2 + 0x48) == 0)) {
      *(ulong *)(param_2 + 0x48) = param_4;
    }
    if ((uVar2 == 0) || (*(ulong *)(param_2 + 0x48) <= uVar2)) {
      uVar1 = param_4 >> 1;
    }
    else {
      uVar2 = *(ulong *)(param_2 + 0x48) - uVar2;
      uVar1 = param_4 - (uVar2 >> 1);
      if (uVar2 == 1) {
        uVar1 = param_4 - 1;
      }
    }
  }
  else {
    if (uVar2 < param_4) {
      *(ulong *)(param_2 + 0x40) = param_4;
      uVar2 = param_4;
    }
    if ((uVar2 == 0) || (*(ulong *)(param_2 + 0x48) <= uVar2)) {
      lVar3 = *(long *)(param_1 + 0x38);
      uVar1 = param_4 + 1;
      if (param_4 == 0xffffffffffffffff) {
        uVar1 = 0xffffffffffffffff;
      }
      if (lVar3 == 0) {
        return uVar1;
      }
      goto LAB_0040463b;
    }
    uVar2 = *(ulong *)(param_2 + 0x48) - uVar2;
    uVar1 = (uVar2 >> 1) + param_4;
    if (uVar2 == 1) {
      uVar1 = param_4 + 1;
    }
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
LAB_0040463b:
  uVar2 = lVar3 + 1;
  if (uVar2 < uVar1) {
    return uVar1;
  }
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  return uVar2;
}


undefined FUN_00404700(void)

{
  return 0;
}


bool FUN_00404710(char *param_1,ulong param_2)

{
  int iVar1;
  char *pcVar2;
  undefined uVar3;
  int *piVar4;
  bool bVar5;
  undefined auStack_28 [8];
  ulong local_20;
  
  bVar5 = false;
  pcVar2 = getenv(param_1);
  if (pcVar2 != (char *)0x0) {
    iVar1 = FUN_004098e0(pcVar2,auStack_28,10,&local_20,0);
    if (iVar1 != 0) {
      uVar3 = dcgettext(0,"Environment variable %s is not set to a valid decimal number",5);
      piVar4 = __errno_location();
      error(1,*piVar4,uVar3,param_1);
      return false;
    }
    bVar5 = local_20 < param_2;
  }
  return bVar5;
}


void FUN_004047a0(int *param_1,ulong *param_2,char *param_3,long param_4,char *param_5,long param_6,
                 int param_7)

{
  ulong uVar1;
  undefined uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("arg != NULL","buildcmd.c",0x165,"bc_push_arg");
  }
  if (param_7 == 0) {
    *(undefined *)(param_2 + 7) = 1;
    if (param_3 == "do_not_care") goto LAB_00404964;
LAB_004047e6:
    uVar1 = param_4 + param_6 + param_2[4];
    if (*(ulong *)(param_1 + 6) <= uVar1 && uVar1 != *(ulong *)(param_1 + 6)) {
      if ((param_7 == 0) && (*param_2 != *(ulong *)(param_1 + 0xe))) {
        if (*(long *)(param_1 + 0xc) != 0) goto LAB_00404816;
LAB_004049a0:
        if ((*param_1 != 0) &&
           ((*(long *)(param_1 + 0x12) != 0 || (*(long *)(param_1 + 0x14) != 0))))
        goto LAB_00404816;
      }
      else {
        uVar2 = dcgettext(0,"cannot fit single argument within argument list size limit",5);
        error(1,0,uVar2);
        if (*(long *)(param_1 + 0xc) == 0) goto LAB_004049a0;
LAB_00404816:
        uVar2 = dcgettext(0,"argument list too long",5);
        error(1,0,uVar2);
      }
      FUN_00404c00(param_1,param_2);
    }
    uVar1 = *param_2;
    if ((((param_7 == 0) && (*(long *)(param_1 + 0x14) != 0)) &&
        (*(long *)(param_1 + 0x14) == uVar1 - *(long *)(param_1 + 0xe))) ||
       (uVar1 == *(ulong *)(param_1 + 8))) {
      FUN_00404c00(param_1,param_2);
      uVar1 = *param_2;
    }
    uVar4 = param_2[2];
    uVar3 = param_2[1];
    if (uVar4 <= uVar1) {
LAB_00404881:
      if (uVar3 == 0) {
        param_2[2] = 0x40;
        uVar3 = FUN_00409680(0x200);
        param_2[1] = uVar3;
      }
      else {
        param_2[2] = uVar4 * 2;
        uVar3 = FUN_004096d0(uVar3,uVar4 << 4);
        param_2[1] = uVar3;
      }
      uVar1 = *param_2;
      if (param_3 == "do_not_care") goto LAB_00404978;
    }
    uVar4 = param_2[4];
    *param_2 = uVar1 + 1;
    *(ulong *)(uVar3 + uVar1 * 8) = param_2[3] + uVar4;
    if (param_5 != (char *)0x0) {
      strcpy((char *)(param_2[3] + uVar4),param_5);
      uVar4 = param_2[4] + param_6;
      param_2[4] = uVar4;
    }
    strcpy((char *)(uVar4 + param_2[3]),param_3);
    uVar4 = param_4 + param_2[4];
    uVar1 = *param_2;
    param_2[4] = uVar4;
    if (param_7 == 0) {
      if (((*(long *)(param_1 + 0x14) == 0) ||
          (*(long *)(param_1 + 0x14) != uVar1 - *(long *)(param_1 + 0xe))) &&
         (uVar1 != *(ulong *)(param_1 + 8))) {
        return;
      }
    }
    else if (uVar1 != *(ulong *)(param_1 + 8)) goto LAB_0040493b;
    FUN_00404c00(param_1,param_2);
  }
  else {
    if (param_3 != "do_not_care") goto LAB_004047e6;
LAB_00404964:
    uVar1 = *param_2;
    uVar4 = param_2[2];
    uVar3 = param_2[1];
    if (uVar4 <= uVar1) goto LAB_00404881;
LAB_00404978:
    *param_2 = uVar1 + 1;
    *(undefined *)(uVar3 + uVar1 * 8) = 0;
  }
  if (param_7 == 0) {
    return;
  }
  uVar4 = param_2[4];
LAB_0040493b:
  param_2[5] = uVar4;
  return;
}


void FUN_00404a40(long param_1,undefined param_2,char *param_3,ulong param_4,char *param_5,
                 long param_6,char *param_7,long param_8)

{
  char *pcVar1;
  undefined uVar2;
  char *__dest;
  ulong uVar3;
  ulong __n;
  
  uVar3 = *(long *)(param_1 + 0x18) - 1;
  __dest = DAT_006124f0;
  if (DAT_006124f0 == (char *)0x0) {
    __dest = (char *)FUN_00409680(*(long *)(param_1 + 0x18) + 1);
    DAT_006124f0 = __dest;
  }
  do {
    while (pcVar1 = (char *)FUN_004066f0(param_3,*(undefined *)(param_1 + 0x30)),
          pcVar1 == (char *)0x0) {
      if (uVar3 <= param_4) {
LAB_00404bb5:
        if (*param_3 != '\0') {
          uVar2 = dcgettext(0,"command too long",5);
          error(1,0,uVar2);
        }
        goto LAB_00404b6c;
      }
      pcVar1 = param_3 + param_4;
      strncpy(__dest,param_3,param_4);
      uVar3 = uVar3 - param_4;
      __dest = __dest + param_4;
      param_4 = 0;
      param_3 = pcVar1;
      if (*pcVar1 == '\0') goto LAB_00404b6c;
    }
    __n = (long)pcVar1 - (long)param_3;
    if (uVar3 <= __n) goto LAB_00404bb5;
    strncpy(__dest,param_3,__n);
    __dest = __dest + __n;
    param_3 = pcVar1;
    if (uVar3 - __n <= (ulong)(param_8 + param_6)) goto LAB_00404bb5;
    uVar3 = (uVar3 - __n) - (param_8 + param_6);
    if (param_5 != (char *)0x0) {
      strcpy(__dest,param_5);
      __dest = __dest + param_6;
    }
    strcpy(__dest,param_7);
    __dest = __dest + param_8;
    param_3 = pcVar1 + *(long *)(param_1 + 0x28);
    param_4 = (param_4 - *(long *)(param_1 + 0x28)) - __n;
  } while (*param_3 != '\0');
LAB_00404b6c:
  *__dest = '\0';
  FUN_004047a0(param_1,param_2,DAT_006124f0,__dest + (1 - (long)DAT_006124f0),0,0);
  return;
}


void FUN_00404c00(long param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  void *__ptr;
  ulong uVar3;
  ulong uVar4;
  undefined uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  FUN_004047a0(param_1,param_2,"do_not_care",0,0,0,0);
  uVar7 = *param_2;
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("state->cmd_argc > 0","buildcmd.c",0x115,"bc_do_exec");
  }
  if (*(long *)((param_2[1] - 8) + uVar7 * 8) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("state->cmd_argv[state->cmd_argc-1] == NULL","buildcmd.c",0x116,"bc_do_exec");
  }
  uVar9 = 0;
  __ptr = (void *)FUN_00409680(uVar7 * 8 + 8);
  uVar7 = *param_2;
  uVar8 = *(ulong *)(param_1 + 0x38);
  uVar6 = uVar7;
  do {
    if (uVar8 == 0) {
      uVar3 = 0;
      uVar4 = uVar9;
    }
    else {
      uVar4 = param_2[1];
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        *(undefined *)((long)__ptr + uVar3 * 8 + -8) = *(undefined *)((uVar4 - 8) + uVar3 * 8);
      } while (uVar3 != uVar8);
      uVar4 = uVar9 + uVar8;
      uVar3 = uVar8;
    }
    if ((uVar3 < uVar6) && (uVar4 < uVar7)) {
      uVar1 = param_2[1];
      do {
        uVar4 = uVar4 + 1;
        uVar3 = uVar3 + 1;
        *(undefined *)((long)__ptr + uVar3 * 8 + -8) = *(undefined *)((uVar1 - 8) + uVar4 * 8);
        if (uVar6 <= uVar3) break;
      } while (uVar4 < uVar7);
      if (uVar3 < uVar8) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("dst_pos >= ctl->initial_argc","buildcmd.c",0x102,"copy_args");
      }
    }
    uVar7 = param_2[6];
    *(undefined *)((long)__ptr + uVar3 * 8) = 0;
    iVar2 = (**(code **)(param_1 + 0x40))(param_1,uVar7,uVar3 & 0xffffffff,__ptr);
    if (iVar2 == 0) {
      if (*(long *)(param_1 + 0x38) + 1U < uVar6) {
        uVar6 = FUN_00404600(param_1,param_2,0,uVar6);
        uVar8 = *(ulong *)(param_1 + 0x38);
      }
      else {
        uVar5 = dcgettext(0,"can\'t call exec() due to argument size restrictions",5);
        error(1,0,uVar5);
        uVar8 = *(ulong *)(param_1 + 0x38);
      }
    }
    else {
      uVar6 = FUN_00404600(param_1,param_2,1,uVar6);
      uVar8 = *(ulong *)(param_1 + 0x38);
      uVar9 = (uVar9 - uVar8) + uVar3;
    }
    uVar7 = *param_2;
    if (uVar7 - uVar8 <= uVar9 + 1) {
      free(__ptr);
      *param_2 = uVar8;
      param_2[4] = param_2[5];
      param_2[7] = 0xffffffff00000000;
      return;
    }
  } while( true );
}


long FUN_00404e30(void)

{
  long lVar1;
  
  lVar1 = sysconf(0);
  if (lVar1 < 1) {
    lVar1 = 0x7fffffffffffffff;
  }
  return lVar1;
}


long FUN_00404e60(void)

{
  char *__s;
  size_t sVar1;
  char **ppcVar2;
  long lVar3;
  
  lVar3 = 0;
  __s = *environ;
  ppcVar2 = environ;
  while (__s != (char *)0x0) {
    sVar1 = strlen(__s);
    ppcVar2 = ppcVar2 + 1;
    lVar3 = lVar3 + 1 + sVar1;
    __s = *ppcVar2;
  }
  return lVar3;
}


undefined FUN_00404ea0(undefined *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = FUN_00404e60();
  *(undefined *)(param_1 + 4) = 0x1000;
  uVar2 = sysconf(0);
  *param_1 = 0;
  if ((long)uVar2 < 1) {
    uVar2 = 0x7fffffffffffffff;
  }
  *(ulong *)(param_1 + 2) = uVar2;
  if (uVar2 < uVar1) {
    return 1;
  }
  if (uVar2 <= uVar1 + param_2) {
    return 2;
  }
  uVar2 = uVar2 - (uVar1 + param_2);
  *(ulong *)(param_1 + 2) = uVar2;
  lVar3 = (uVar2 >> 3) - 2;
  *(long *)(param_1 + 8) = lVar3;
  if (lVar3 != 0) {
    *(ulong *)(param_1 + 6) = uVar2;
    *(undefined *)(param_1 + 10) = 0;
    *(undefined *)(param_1 + 0xc) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(code **)(param_1 + 0x10) = FUN_00404700;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x14) = 0;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("ctl->max_arg_count > 0","buildcmd.c",0x216,"bc_init_controlinfo");
}


void FUN_00404f80(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if ((0x1ffff < uVar1) && (uVar1 = *(ulong *)(param_1 + 0x10), uVar1 < 0x20001)) {
    uVar1 = 0x20000;
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  return;
}


void FUN_00404fb0(long param_1,undefined *param_2,undefined param_3)

{
  ulong uVar1;
  undefined uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  *param_2 = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if (uVar1 < 0x7ffffffffffff800) {
    uVar2 = FUN_00409680(uVar1 + 1);
    param_2[5] = 0;
    param_2[3] = uVar2;
    param_2[4] = 0;
    param_2[7] = 0xffffffff00000000;
    param_2[6] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("ctl->arg_max <= (LONG_MAX - 2048L)","buildcmd.c",0x24c,"bc_init_state");
}


void FUN_00405050(long param_1,undefined *param_2)

{
  *param_2 = *(undefined *)(param_1 + 0x38);
  param_2[4] = param_2[5];
  param_2[7] = 0xffffffff00000000;
  return;
}


ulong FUN_00405070(char **param_1)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  ulong extraout_RDX;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  lVar3 = 0;
  __s = *param_1;
  while (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + sVar2;
    __s = param_1[lVar3];
  }
  iVar1 = FUN_00404710("__GNU_FINDUTILS_EXEC_ARG_COUNT_LIMIT",lVar3);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00404710("__GNU_FINDUTILS_EXEC_ARG_LENGTH_LIMIT",lVar4);
  return extraout_RDX & 0xffffff00 | (ulong)(iVar1 != 0);
}


int FUN_004050e0(void)

{
  bool bVar1;
  int iVar2;
  DIR *__dirp;
  dirent *pdVar3;
  int iVar4;
  
  __dirp = (DIR *)FUN_00405aa0("/proc/self/fd");
  if (__dirp == (DIR *)0x0) {
    return -1;
  }
  bVar1 = false;
  iVar4 = -1;
  do {
    pdVar3 = readdir(__dirp);
    while( true ) {
      if (pdVar3 == (dirent *)0x0) {
        closedir(__dirp);
        if (!bVar1) {
          return -1;
        }
        return iVar4;
      }
      if ((pdVar3->d_name[0] == '.') && ((pdVar3->d_name[1] == '.' || (pdVar3->d_name[1] == '\0'))))
      break;
      bVar1 = true;
      iVar2 = FUN_004055f0(pdVar3->d_name,0);
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
      pdVar3 = readdir(__dirp);
    }
  } while( true );
}


undefined FUN_00405160(undefined param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined uVar4;
  
  uVar2 = FUN_00409d40(param_1,1);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_00405740(*param_2,param_2[1] * 4 + 4,param_2 + 2);
    if (lVar3 != 0) {
      lVar1 = param_2[1];
      *param_2 = lVar3;
      *(int *)(lVar3 + lVar1 * 4) = (int)param_1;
      param_2[1] = lVar1 + 1;
      return 0;
    }
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


undefined FUN_004051d0(undefined param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  iVar2 = (int)param_1;
  uVar3 = FUN_00409d40(param_1,1);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  uVar3 = param_2[2];
  uVar1 = param_2[1];
  if (uVar3 < uVar1) {
    iVar5 = *(int *)(*param_2 + uVar3 * 4);
    if (iVar5 < iVar2) {
      uVar3 = uVar3 + 1;
      do {
        uVar4 = uVar3;
        if (uVar1 == uVar4) {
          param_2[2] = uVar1;
          goto LAB_00405228;
        }
        iVar5 = *(int *)(*param_2 + -4 + (uVar4 + 1) * 4);
        uVar3 = uVar4 + 1;
      } while (iVar5 < iVar2);
      param_2[2] = uVar4;
    }
    if (iVar2 == iVar5) {
      return 0;
    }
  }
LAB_00405228:
  *(int *)(param_2 + 3) = iVar2;
  return 0xffffffff;
}


ulong FUN_00405260(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  rlimit local_18;
  
  uVar2 = sysconf(4);
  if (uVar2 == 0xffffffffffffffff) {
    uVar2 = 0x14;
  }
  iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
  uVar3 = uVar2 & 0xffffffff;
  if ((iVar1 == 0) &&
     (uVar3 = local_18.rlim_cur & 0xffffffff, local_18.rlim_cur == 0xffffffffffffffff)) {
    uVar3 = uVar2 & 0xffffffff;
  }
  return uVar3;
}


undefined FUN_004052b0(int param_1,code *param_2,undefined param_3)

{
  int iVar1;
  int iVar2;
  pollfd *ppVar3;
  undefined uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  pollfd *local_238;
  
  if (param_1 < 1) {
    return 0;
  }
  iVar6 = 0;
  do {
    iVar2 = param_1 - iVar6;
    iVar7 = 0x40;
    if (iVar2 < 0x41) {
      iVar7 = iVar2;
    }
    if (iVar2 < 1) {
      iVar2 = poll(local_238,(long)iVar7,0);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
    }
    else {
      iVar2 = 0;
      ppVar3 = local_238;
      do {
        *(undefined *)((long)ppVar3 + 6) = 0;
        iVar1 = iVar6 + iVar2;
        iVar2 = iVar2 + 1;
        *(undefined *)((long)ppVar3 + 4) = 5;
        ppVar3->fd = iVar1;
        ppVar3 = poll((long)ppVar3 + 8);
      } while (iVar2 < iVar7);
      iVar2 = poll(local_238,(long)iVar7,0);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      lVar5 = 0;
      do {
        if ((local_238[lVar5].revents != 0x20) &&
           (uVar4 = (*param_2)(local_238[lVar5].fd,param_3), (int)uVar4 != 0)) {
          return uVar4;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < iVar7);
    }
    iVar6 = iVar6 + iVar7;
    if (param_1 <= iVar6) {
      return 0;
    }
  } while( true );
}


void FUN_004053a0(void)

{
  int iVar1;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  iVar1 = FUN_004050e0();
  if (iVar1 < 0) {
    iVar1 = FUN_00405260();
  }
  local_28 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_004052b0(iVar1 + (uint)(iVar1 != 0x7fffffff),FUN_00405160,&local_28);
  DAT_00612508 = local_28;
  DAT_00612500 = local_20;
  return;
}


int FUN_00405410(undefined param_1,uint param_2,undefined param_3)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 & 0x40) == 0) {
    param_3 = 0;
  }
  bVar1 = DAT_006124f9;
  if (DAT_006124f9 == 0) {
    iVar2 = FUN_00405b30(&DAT_0040ddc6,0x80000);
    if (iVar2 < 0) {
      DAT_006124f9 = 1;
      DAT_006124f8 = bVar1;
    }
    else {
      bVar1 = FUN_00409d40(iVar2,1);
      close(iVar2);
      DAT_006124f8 = bVar1 & 1;
      DAT_006124f9 = 1;
    }
  }
  iVar2 = FUN_00405b30(param_1,param_2 | 0x80000,param_3);
  if ((-1 < iVar2) && (DAT_006124f8 == 0)) {
    FUN_00405860(iVar2,1);
    return iVar2;
  }
  return iVar2;
}


void FUN_00405520(void)

{
  free(DAT_00612508);
  DAT_00612508 = (void *)0x0;
  DAT_00612500 = 0;
  return;
}


void FUN_00405550(void)

{
  int iVar1;
  undefined uVar2;
  undefined local_38;
  undefined local_30;
  undefined local_28;
  int local_20;
  
  local_38 = DAT_00612508;
  local_30 = DAT_00612500;
  iVar1 = FUN_004050e0();
  if (iVar1 < 0) {
    iVar1 = FUN_00405260();
  }
  local_28 = 0;
  local_20 = -1;
  FUN_004052b0(iVar1 + (uint)(iVar1 != 0x7fffffff),FUN_004051d0,&local_38);
  iVar1 = local_20;
  if (local_20 < 0) {
    return;
  }
  uVar2 = dcgettext(0,
                    "File descriptor %d will leak; please report this as a bug, remembering to include a detailed description of the simplest way to reproduce this problem."
                    ,5);
  error(0,0,uVar2,iVar1);
                    /* WARNING: Subroutine does not return */
  __assert_fail("no_leaks","fdleak.c",0x17e,"complain_about_leaky_fds");
}


ulong FUN_004055f0(char *param_1,undefined param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  char *local_30;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  uVar2 = strtol(param_1,&local_30,10);
  if (uVar2 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
    if (uVar2 + 0x80000000 < 0x100000000) {
      if (*local_30 != '\0') {
        uVar3 = FUN_00408c90(1,param_2,param_1);
        uVar4 = FUN_00408c90(0,param_2,local_30);
        uVar5 = dcgettext(0,"Unexpected suffix %s on %s",5);
        error(1,*piVar1,uVar5,uVar4,uVar3);
        return uVar2 & 0xffffffff;
      }
      if (local_30 == param_1) {
        uVar3 = FUN_00408c90(0,param_2);
        uVar4 = dcgettext(0,"Expected an integer: %s",5);
        error(1,*piVar1,uVar4,uVar3);
      }
      goto LAB_00405671;
    }
  }
  else {
    error(1,*piVar1,"%s",param_1);
  }
  *piVar1 = 0x22;
  error(1,0x22,"%s",param_1);
LAB_00405671:
  return uVar2 & 0xffffffff;
}


void * FUN_00405740(void *param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  
  piVar5 = __errno_location();
  iVar1 = *piVar5;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("wanted > 0u","extendbuf.c",0x47,"extendbuf");
  }
  uVar2 = *param_3;
  if (uVar2 == 0) {
    uVar6 = 0x20;
    if (param_2 < 0x11) {
      param_2 = 0x10;
    }
    else {
LAB_00405794:
      do {
        uVar4 = uVar6;
        if (param_2 <= uVar6) break;
        bVar3 = uVar6 <= uVar6 * 2;
        uVar6 = uVar6 * 2;
        uVar4 = param_2;
      } while (bVar3);
      param_2 = uVar4;
      if (uVar2 != 0) {
        if (uVar2 == param_2) goto joined_r0x004057fa;
        goto LAB_004057e8;
      }
    }
    if (param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("NULL == existing","extendbuf.c",0x4f,"extendbuf");
    }
    *param_3 = param_2;
    param_1 = malloc(param_2);
  }
  else {
    if (param_2 <= uVar2) goto joined_r0x004057fa;
    uVar6 = uVar2 * 2;
    if (uVar2 <= uVar2 * 2) goto LAB_00405794;
LAB_004057e8:
    *param_3 = param_2;
    param_1 = realloc(param_1,param_2);
  }
joined_r0x004057fa:
  if (param_1 != (void *)0x0) {
    *piVar5 = iVar1;
    return param_1;
  }
  return (void *)0x0;
}


void FUN_00405840(void *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00405740();
  if (lVar1 != 0) {
    return;
  }
  free(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_004098a0();
}


int FUN_00405860(ulong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_00409d40(param_1,1,0);
  if ((int)uVar2 < 0) {
    iVar3 = -1;
  }
  else {
    uVar1 = uVar2 & 0xfffffffe;
    if (param_2 != '\0') {
      uVar1 = uVar2 | 1;
    }
    iVar3 = 0;
    if (uVar1 != uVar2) {
      iVar3 = FUN_00409d40(param_1 & 0xffffffff,2);
      iVar3 = -(uint)(iVar3 == -1);
    }
  }
  return iVar3;
}


void FUN_004058c0(undefined param_1)

{
  FUN_00409d40(param_1,0x406,0);
  return;
}


void FUN_004058d0(undefined param_1)

{
  DAT_00612510 = param_1;
  return;
}


void FUN_004058e0(void)

{
  int iVar1;
  long lVar2;
  undefined uVar3;
  int *piVar4;
  undefined uVar5;
  
  uVar3 = stdin;
  lVar2 = FUN_00409ec0(stdin);
  if (lVar2 == 0) {
    iVar1 = FUN_0040b2b0(uVar3);
    if (iVar1 == 0) {
      FUN_00405a00();
      return;
    }
  }
  else {
    iVar1 = FUN_00409ef0(uVar3,0,1);
    if (iVar1 == 0) {
      iVar1 = FUN_00409e80(stdin);
      if (iVar1 != 0) {
        FUN_0040b2b0(stdin);
        goto LAB_00405938;
      }
    }
    iVar1 = FUN_0040b2b0(stdin);
    if (iVar1 == 0) {
      FUN_00405a00();
      return;
    }
  }
LAB_00405938:
  uVar3 = dcgettext(0,"error closing file",5);
  lVar2 = DAT_00612510;
  piVar4 = __errno_location();
  if (lVar2 == 0) {
    error(0,*piVar4,"%s",uVar3);
  }
  else {
    uVar5 = FUN_00408e10(lVar2);
    error(0,*piVar4,"%s: %s",uVar5,uVar3);
  }
  FUN_00405a00();
                    /* WARNING: Subroutine does not return */
  _exit(DAT_006122c0);
}


void FUN_004059e0(undefined param_1)

{
  DAT_00612520 = param_1;
  return;
}


void FUN_004059f0(undefined param_1)

{
  DAT_00612518 = param_1;
  return;
}


void FUN_00405a00(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_0040b2b0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00612518 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00612520 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00408e10();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00405a7e;
    }
  }
  iVar1 = FUN_0040b2b0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00405a7e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_006122c0);
}


DIR * FUN_00405aa0(char *param_1)

{
  uint uVar1;
  int __fd;
  DIR *__dirp;
  int *piVar2;
  DIR *pDVar3;
  int iVar4;
  
  __dirp = opendir(param_1);
  if (__dirp != (DIR *)0x0) {
    uVar1 = dirfd(__dirp);
    if (uVar1 < 3) {
      __fd = FUN_00409080(uVar1);
      piVar2 = __errno_location();
      if (__fd < 0) {
        iVar4 = *piVar2;
        pDVar3 = (DIR *)0x0;
      }
      else {
        pDVar3 = fdopendir(__fd);
        iVar4 = *piVar2;
        if (pDVar3 == (DIR *)0x0) {
          close(__fd);
        }
      }
      closedir(__dirp);
      *piVar2 = iVar4;
      return pDVar3;
    }
  }
  return __dirp;
}


void FUN_00405b30(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_00409090(iVar1);
  return;
}


undefined FUN_00405b80(char *param_1,long param_2,ulong param_3,char **param_4)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined auStack_38 [8];
  char **local_30;
  ulong local_28;
  long local_20;
  
  if (0x1fffffffffffffff < param_3) {
    return 0;
  }
  puVar2 = auStack_38;
  if (param_3 * 8 < 0xfb0) {
    lVar1 = -(param_3 * 8 + 0x27 & 0xfffffffffffffff0);
    puVar2 = auStack_38 + lVar1;
    lVar1 = (long)&local_20 + lVar1;
  }
  else {
    local_30 = param_4;
    local_28 = param_3;
    local_20 = param_2;
    lVar1 = FUN_0040b890();
    param_4 = local_30;
    param_3 = local_28;
    param_2 = local_20;
  }
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined *)(lVar1 + 8) = 1;
  lVar4 = 0;
  uVar5 = 2;
  if (2 < param_3) {
    do {
      cVar3 = *(char *)(param_2 + lVar4);
      while (*(char *)(param_2 + -1 + uVar5) != cVar3) {
        if (lVar4 == 0) {
          *(ulong *)(lVar1 + uVar5 * 8) = uVar5;
          lVar4 = 0;
          goto LAB_00405c22;
        }
        lVar4 = lVar4 - *(long *)(lVar1 + lVar4 * 8);
        cVar3 = *(char *)(param_2 + lVar4);
      }
      lVar4 = lVar4 + 1;
      *(ulong *)(lVar1 + uVar5 * 8) = uVar5 - lVar4;
LAB_00405c22:
      uVar5 = uVar5 + 1;
    } while (param_3 != uVar5);
  }
  *param_4 = (char *)0x0;
  cVar3 = *param_1;
  uVar5 = 0;
  pcVar6 = param_1;
joined_r0x00405c43:
  do {
    if (cVar3 == '\0') {
LAB_00405c5f:
      *(undefined *)(puVar2 + -8) = 0x405c64;
      FUN_0040b900();
      return 1;
    }
    if (*(char *)(param_2 + uVar5) == cVar3) {
      uVar5 = uVar5 + 1;
      if (param_3 == uVar5) {
        *param_4 = param_1;
        goto LAB_00405c5f;
      }
      cVar3 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
      goto joined_r0x00405c43;
    }
    if (uVar5 == 0) {
      cVar3 = pcVar6[1];
      param_1 = param_1 + 1;
      pcVar6 = pcVar6 + 1;
    }
    else {
      lVar4 = *(long *)(lVar1 + uVar5 * 8);
      param_1 = param_1 + lVar4;
      uVar5 = uVar5 - lVar4;
    }
  } while( true );
}


void FUN_00405d00(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("iter->cur.wc == 0","mbuiter.h",0xb3,"mbuiter_multi_next");
}


undefined FUN_00405d20(mbstate_t *param_1,byte *param_2,mbstate_t **param_3)

{
  byte *pbVar1;
  byte *__s1;
  mbstate_t *pmVar2;
  mbstate_t *__s2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  undefined uVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  byte **ppbVar9;
  byte *pbVar10;
  mbstate_t ***pppmVar11;
  mbstate_t *pmVar12;
  long lVar13;
  mbstate_t *pmVar14;
  mbstate_t **local_118;
  mbstate_t *local_110;
  mbstate_t *local_108;
  mbstate_t *local_100;
  char local_f8;
  mbstate_t local_f4;
  undefined local_ec;
  byte *local_e8;
  byte *local_e0;
  char local_d8;
  int local_d4;
  byte abStack_d0 [24];
  char local_b8;
  mbstate_t local_b4;
  char local_ac;
  mbstate_t *local_a8;
  size_t local_a0;
  char local_98;
  int local_94 [7];
  char local_78;
  mbstate_t local_74;
  char local_6c;
  mbstate_t *local_68;
  byte *local_60;
  char local_58;
  int local_54 [9];
  
  pppmVar11 = &local_118;
  local_118 = param_3;
  local_110 = param_1;
  local_108 = (mbstate_t *)FUN_0040ba40(param_2);
  if (local_108 < (mbstate_t *)0x492492492492493) {
    if ((ulong)((long)local_108 * 0x38) < 0xfb0) {
      lVar13 = -((long)local_108 * 0x38 + 0x27U & 0xfffffffffffffff0);
      pppmVar11 = (mbstate_t ***)((long)&local_118 + lVar13);
      ppbVar9 = (byte **)((long)&local_100 + lVar13);
    }
    else {
      ppbVar9 = (byte **)FUN_0040b890();
    }
    pmVar2 = local_108;
    if (ppbVar9 != (byte **)0x0) {
      local_e8 = param_2;
      local_f8 = '\0';
      local_ec = 0;
      local_f4 = (mbstate_t)0x0;
      ppbVar8 = ppbVar9;
      do {
        local_ec = 0;
        if (local_f8 == '\0') {
          if ((*(uint *)(&DAT_0040f520 + (ulong)(*local_e8 >> 5) * 4) >> (*local_e8 & 0x1f) & 1) ==
              0) {
            *(undefined *)((long)pppmVar11 + -8) = 0x406220;
            iVar4 = mbsinit(&local_f4);
            if (iVar4 == 0) {
LAB_004066af:
                    /* WARNING: Subroutine does not return */
              *(undefined *)((long)pppmVar11 + -8) = 0x4066c8;
              __assert_fail("mbsinit (&iter->state)","mbuiter.h",0x96,"mbuiter_multi_next");
            }
            local_f8 = '\x01';
            goto LAB_00405ea2;
          }
          local_e0 = (byte *)0x1;
          local_d8 = '\x01';
          local_d4 = (int)(char)*local_e8;
          local_ec = 1;
          if ((char)*local_e8 == 0) goto LAB_00405f57;
LAB_00405e45:
          cVar3 = '\x01';
        }
        else {
LAB_00405ea2:
          *(undefined *)((long)pppmVar11 + -8) = 0x405ea7;
          sVar5 = __ctype_get_mb_cur_max();
          pbVar10 = local_e8;
          *(undefined *)((long)pppmVar11 + -8) = 0x405eb9;
          uVar6 = FUN_00409040(pbVar10,sVar5);
          *(undefined *)((long)pppmVar11 + -8) = 0x405ed3;
          local_e0 = (byte *)FUN_0040b170(&local_d4,pbVar10,uVar6,&local_f4);
          pbVar10 = local_e8;
          if (local_e0 == (byte *)0xffffffffffffffff) {
            local_e0 = (byte *)0x1;
            cVar3 = '\0';
            local_d8 = '\0';
            local_ec = 1;
          }
          else {
            if (local_e0 != (byte *)0xfffffffffffffffe) {
              if (local_e0 == (byte *)0x0) {
                local_e0 = (byte *)0x1;
                if (*local_e8 != 0) {
LAB_00406696:
                    /* WARNING: Subroutine does not return */
                  *(undefined *)((long)pppmVar11 + -8) = 0x4066af;
                  __assert_fail("*iter->cur.ptr == \'\\0\'","mbuiter.h",0xb2,"mbuiter_multi_next");
                }
                if (local_d4 != 0) {
LAB_004066c8:
                  *(undefined *)((long)pppmVar11 + -8) = 0x4066cd;
                  FUN_00405d00();
LAB_004066cd:
                    /* WARNING: Subroutine does not return */
                  *(undefined *)((long)pppmVar11 + -8) = 0x4066e6;
                  __assert_fail("iter->cur.wc == 0","mbuiter.h",0xb3,"mbuiter_multi_next");
                }
              }
              local_d8 = '\x01';
              *(undefined *)((long)pppmVar11 + -8) = 0x405f35;
              iVar4 = mbsinit(&local_f4);
              if (iVar4 != 0) {
                local_f8 = '\0';
              }
              local_ec = 1;
              if (local_d4 != 0) goto LAB_00405e45;
              goto LAB_00405f57;
            }
            *(undefined *)((long)pppmVar11 + -8) = 0x40628c;
            local_e0 = (byte *)strlen((char *)pbVar10);
            local_d8 = '\0';
            cVar3 = '\0';
            local_ec = 1;
          }
        }
        pbVar1 = local_e0;
        pbVar10 = local_e8;
        local_ec = 1;
        if (local_e8 == abStack_d0) {
          *(undefined *)((long)pppmVar11 + -8) = 0x406244;
          pbVar10 = (byte *)memcpy(ppbVar8 + 3,pbVar10,(size_t)pbVar1);
          *ppbVar8 = pbVar10;
          cVar3 = local_d8;
        }
        else {
          *ppbVar8 = local_e8;
        }
        ppbVar8[1] = local_e0;
        *(char *)(ppbVar8 + 2) = cVar3;
        if (cVar3 != '\0') {
          *(int *)((long)ppbVar8 + 0x14) = local_d4;
        }
        local_e8 = local_e8 + (long)local_e0;
        ppbVar8 = ppbVar8 + 6;
        local_ec = 0;
      } while( true );
    }
  }
  return 0;
LAB_00405f57:
  local_ec = 1;
  lVar13 = 0;
  ppbVar9[(long)pmVar2 * 6 + 1] = (byte *)0x1;
  local_100 = (mbstate_t *)0x2;
  ppbVar8 = ppbVar9;
  if (local_108 < (mbstate_t *)0x3) {
LAB_0040600b:
    local_a8 = local_110;
    local_b8 = '\0';
    local_ac = '\0';
    *local_118 = (mbstate_t *)0x0;
    local_110 = &local_74;
    local_78 = '\0';
    local_b4 = (mbstate_t)0x0;
    local_74 = (mbstate_t)0x0;
    local_6c = '\0';
    local_100 = &local_b4;
    local_68 = local_a8;
    pmVar14 = (mbstate_t *)0x0;
    do {
      do {
        if (local_6c == '\0') goto LAB_00406142;
        if (local_58 != '\0') goto LAB_00406182;
LAB_00406092:
        ppbVar8 = ppbVar9 + (long)pmVar14 * 6;
LAB_0040609d:
        __s2 = local_68;
        pbVar10 = ppbVar8[1];
        pmVar12 = local_100;
        if (pbVar10 == local_60) {
          pbVar1 = *ppbVar8;
          *(undefined *)((long)pppmVar11 + -8) = 0x406364;
          iVar4 = memcmp(pbVar1,__s2,(size_t)pbVar10);
          pmVar12 = local_100;
          if (iVar4 == 0) goto LAB_004061a7;
        }
joined_r0x0040636f:
        local_100 = pmVar12;
        if (pmVar14 == (mbstate_t *)0x0) {
          if (local_ac == '\0') {
            if (local_b8 == '\0') {
              if ((*(uint *)(&DAT_0040f520 + (ulong)(*(byte *)&local_a8->__count >> 5) * 4) >>
                   (*(byte *)&local_a8->__count & 0x1f) & 1) != 0) {
                local_a0 = 1;
                local_98 = '\x01';
                local_94[0] = (int)(char)*(byte *)&local_a8->__count;
                local_ac = '\x01';
                goto LAB_00406113;
              }
              *(undefined *)((long)pppmVar11 + -8) = 0x406554;
              iVar4 = mbsinit(pmVar12);
              if (iVar4 == 0) goto LAB_004066af;
              local_b8 = '\x01';
            }
            *(undefined *)((long)pppmVar11 + -8) = 0x406568;
            sVar5 = __ctype_get_mb_cur_max();
            pmVar12 = local_a8;
            *(undefined *)((long)pppmVar11 + -8) = 0x40657a;
            uVar6 = FUN_00409040(pmVar12,sVar5);
            *(undefined *)((long)pppmVar11 + -8) = 0x406597;
            local_a0 = FUN_0040b170(local_94,pmVar12,uVar6,&local_b4);
            pmVar12 = local_a8;
            if (local_a0 == 0xffffffffffffffff) {
              local_a0 = 1;
              local_98 = '\0';
              goto LAB_00406121;
            }
            if (local_a0 == 0xfffffffffffffffe) {
              *(undefined *)((long)pppmVar11 + -8) = 0x406683;
              local_a0 = strlen((char *)pmVar12);
              local_98 = '\0';
              goto LAB_00406121;
            }
            if (local_a0 == 0) {
              local_a0 = 1;
              if (*(byte *)&local_a8->__count != 0) goto LAB_00406696;
              if (local_94[0] != 0) goto LAB_004066c8;
            }
            local_98 = '\x01';
            *(undefined *)((long)pppmVar11 + -8) = 0x4065f7;
            iVar4 = mbsinit(&local_b4);
            if (iVar4 != 0) {
              local_b8 = '\0';
            }
            local_ac = '\x01';
          }
          else if (local_98 == '\0') goto LAB_00406121;
LAB_00406113:
          if (local_94[0] == 0) {
                    /* WARNING: Subroutine does not return */
            *(code **)((long)pppmVar11 + -8) = FUN_00402005;
            abort();
          }
LAB_00406121:
          local_a8 = (mbstate_t *)((long)&local_a8->__count + local_a0);
          local_68 = (mbstate_t *)(local_60 + (long)&local_68->__count);
          local_ac = '\0';
          local_6c = '\0';
LAB_00406142:
          do {
            pmVar12 = local_110;
            if (local_78 == '\0') {
              if ((*(uint *)(&DAT_0040f520 + (ulong)(*(byte *)&local_68->__count >> 5) * 4) >>
                   (*(byte *)&local_68->__count & 0x1f) & 1) == 0) {
                *(undefined *)((long)pppmVar11 + -8) = 0x4062bc;
                iVar4 = mbsinit(pmVar12);
                if (iVar4 != 0) {
                  local_78 = '\x01';
                  goto LAB_004062c8;
                }
                goto LAB_004066af;
              }
              local_60 = (byte *)0x1;
              local_58 = '\x01';
              local_54[0] = (int)(char)*(byte *)&local_68->__count;
              local_6c = '\x01';
            }
            else {
LAB_004062c8:
              *(undefined *)((long)pppmVar11 + -8) = 0x4062cd;
              sVar5 = __ctype_get_mb_cur_max();
              pmVar12 = local_68;
              *(undefined *)((long)pppmVar11 + -8) = 0x4062dc;
              uVar6 = FUN_00409040(pmVar12,sVar5);
              *(undefined *)((long)pppmVar11 + -8) = 0x4062f3;
              local_60 = (byte *)FUN_0040b170(local_54,pmVar12,uVar6,&local_74);
              pmVar12 = local_68;
              if (local_60 == (byte *)0xffffffffffffffff) {
                local_60 = (byte *)0x1;
                local_58 = '\0';
                local_6c = '\x01';
                goto LAB_00406092;
              }
              if (local_60 == (byte *)0xfffffffffffffffe) {
                *(undefined *)((long)pppmVar11 + -8) = 0x406631;
                local_60 = (byte *)strlen((char *)pmVar12);
                local_58 = '\0';
                local_6c = '\x01';
                goto LAB_00406092;
              }
              if (local_60 == (byte *)0x0) {
                local_60 = (byte *)0x1;
                if (*(byte *)&local_68->__count != 0) goto LAB_00406696;
                if (local_54[0] != 0) goto LAB_004066c8;
              }
              local_58 = '\x01';
              *(undefined *)((long)pppmVar11 + -8) = 0x406341;
              iVar4 = mbsinit(&local_74);
              if (iVar4 != 0) {
                local_78 = '\0';
              }
              local_6c = '\x01';
            }
LAB_00406182:
            if (local_54[0] == 0) goto LAB_004061d1;
            ppbVar8 = ppbVar9 + (long)pmVar14 * 6;
            if (*(char *)(ppbVar8 + 2) == '\0') goto LAB_0040609d;
            pmVar12 = local_100;
            if (*(int *)((long)ppbVar8 + 0x14) != local_54[0]) goto joined_r0x0040636f;
LAB_004061a7:
            pmVar14 = (mbstate_t *)((long)&pmVar14->__count + 1);
            local_68 = (mbstate_t *)(local_60 + (long)&local_68->__count);
            local_6c = '\0';
            if (local_108 == pmVar14) {
              *local_118 = local_a8;
LAB_004061d1:
              *(undefined *)((long)pppmVar11 + -8) = 0x4061d9;
              FUN_0040b900(ppbVar9);
              return 1;
            }
          } while( true );
        }
        pbVar10 = ppbVar9[(long)((long)&pmVar14->__count + (long)pmVar2 * 6)];
        pmVar12 = (mbstate_t *)((long)pmVar14 - (long)pbVar10);
      } while (pbVar10 == (byte *)0x0);
      if (local_ac == '\0') goto LAB_004063be;
      if (local_98 != '\0') goto LAB_00406408;
      while( true ) {
        local_ac = '\0';
        local_a8 = (mbstate_t *)((long)&local_a8->__count + local_a0);
        pbVar10 = pbVar10 + -1;
        pmVar14 = pmVar12;
        if (pbVar10 == (byte *)0x0) break;
LAB_004063be:
        pmVar14 = local_100;
        if (local_b8 == '\0') {
          if ((*(uint *)(&DAT_0040f520 + (ulong)(*(byte *)&local_a8->__count >> 5) * 4) >>
               (*(byte *)&local_a8->__count & 0x1f) & 1) == 0) {
            *(undefined *)((long)pppmVar11 + -8) = 0x40642c;
            iVar4 = mbsinit(pmVar14);
            if (iVar4 != 0) {
              local_b8 = '\x01';
              goto LAB_0040643b;
            }
            goto LAB_004066af;
          }
          local_a0 = 1;
          local_98 = '\x01';
          local_94[0] = (int)(char)*(byte *)&local_a8->__count;
          local_ac = '\x01';
LAB_00406408:
          if (local_94[0] == 0) {
            uVar6 = FUN_00402000();
            return uVar6;
          }
        }
        else {
LAB_0040643b:
          *(undefined *)((long)pppmVar11 + -8) = 0x406440;
          sVar5 = __ctype_get_mb_cur_max();
          pmVar14 = local_a8;
          *(undefined *)((long)pppmVar11 + -8) = 0x406452;
          uVar6 = FUN_00409040(pmVar14,sVar5);
          *(undefined *)((long)pppmVar11 + -8) = 0x40646c;
          local_a0 = FUN_0040b170(local_94,pmVar14,uVar6,&local_b4);
          pmVar14 = local_a8;
          if (local_a0 == 0xffffffffffffffff) {
            local_a0 = 1;
            local_98 = '\0';
          }
          else {
            if (local_a0 != 0xfffffffffffffffe) {
              if (local_a0 == 0) {
                local_a0 = 1;
                if (*(byte *)&local_a8->__count != 0) goto LAB_00406696;
                if (local_94[0] != 0) goto LAB_004066cd;
              }
              local_98 = '\x01';
              *(undefined *)((long)pppmVar11 + -8) = 0x4064c8;
              iVar4 = mbsinit(&local_b4);
              if (iVar4 != 0) {
                local_b8 = '\0';
              }
              local_ac = '\x01';
              goto LAB_00406408;
            }
            *(undefined *)((long)pppmVar11 + -8) = 0x40650c;
            local_a0 = strlen((char *)pmVar14);
            local_98 = '\0';
          }
        }
      }
    } while( true );
  }
LAB_00405f80:
  cVar3 = *(char *)(ppbVar8 + 8);
  do {
    ppbVar7 = ppbVar9 + lVar13 * 6;
    if ((cVar3 == '\0') || (*(char *)(ppbVar7 + 2) == '\0')) {
      pbVar10 = ppbVar8[7];
      if (pbVar10 == ppbVar7[1]) {
        pbVar1 = *ppbVar7;
        __s1 = ppbVar8[6];
        *(undefined *)((long)pppmVar11 + -8) = 0x405fd1;
        iVar4 = memcmp(__s1,pbVar1,(size_t)pbVar10);
        if (iVar4 == 0) goto LAB_00405fd5;
      }
    }
    else if (*(int *)((long)ppbVar8 + 0x44) == *(int *)((long)ppbVar7 + 0x14)) {
LAB_00405fd5:
      lVar13 = lVar13 + 1;
      ppbVar9[(long)((long)&local_100->__count + (long)pmVar2 * 6)] =
           (byte *)((long)local_100 - lVar13);
      goto LAB_00405feb;
    }
    if (lVar13 == 0) break;
    lVar13 = lVar13 - (long)ppbVar9[(long)pmVar2 * 6 + lVar13];
  } while( true );
  ppbVar9[(long)((long)&local_100->__count + (long)pmVar2 * 6)] = (byte *)local_100;
LAB_00405feb:
  local_100 = (mbstate_t *)((long)&local_100->__count + 1);
  ppbVar8 = ppbVar8 + 6;
  if (local_108 == local_100) goto LAB_0040600b;
  goto LAB_00405f80;
}


/* WARNING: Could not reconcile some variable overlaps */

byte * FUN_004066f0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  size_t sVar7;
  undefined uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  bool bVar16;
  ulong local_180;
  mbstate_t local_174;
  undefined local_16c;
  byte *local_168;
  size_t local_160;
  char local_158;
  int local_154 [7];
  char local_138;
  mbstate_t local_134;
  char local_12c;
  byte *local_128;
  size_t local_120;
  char local_118;
  int local_114 [7];
  undefined local_f8;
  mbstate_t mStack_f4;
  undefined uStack_ec;
  byte *local_e8;
  size_t sStack_e0;
  undefined local_d8;
  int iStack_d4;
  undefined uStack_d0;
  undefined uStack_cc;
  undefined local_c8;
  undefined uStack_c4;
  undefined uStack_c0;
  undefined uStack_bc;
  undefined local_b8;
  mbstate_t mStack_b4;
  undefined uStack_ac;
  byte *local_a8;
  size_t sStack_a0;
  undefined local_98;
  int iStack_94;
  undefined uStack_90;
  undefined uStack_8c;
  undefined local_88;
  undefined uStack_84;
  undefined uStack_80;
  undefined uStack_7c;
  undefined local_78;
  mbstate_t mStack_74;
  undefined local_6c;
  byte *local_68;
  size_t local_60;
  char local_58;
  int local_54 [9];
  
  sVar7 = __ctype_get_mb_cur_max();
  if (1 < sVar7) {
    bVar5 = *param_2;
    local_16c = 0;
    local_174 = (mbstate_t)0x0;
    local_168 = param_2;
    if ((*(uint *)(&DAT_0040f520 + (ulong)(bVar5 >> 5) * 4) >> (bVar5 & 0x1f) & 1) == 0) {
      iVar6 = mbsinit(&local_174);
      if (iVar6 == 0) {
LAB_0040758c:
                    /* WARNING: Subroutine does not return */
        __assert_fail("mbsinit (&iter->state)","mbuiter.h",0x96,"mbuiter_multi_next");
      }
      sVar7 = __ctype_get_mb_cur_max();
      pbVar12 = local_168;
      uVar8 = FUN_00409040(local_168,sVar7);
      local_160 = FUN_0040b170(local_154,pbVar12,uVar8,&local_174);
      if (local_160 == 0xffffffffffffffff) {
        local_160 = 1;
        local_158 = '\0';
        goto LAB_004068c7;
      }
      if (local_160 == 0xfffffffffffffffe) {
        local_160 = strlen((char *)local_168);
        local_158 = '\0';
        goto LAB_004068c7;
      }
      if (local_160 != 0) goto LAB_004074b0;
      local_160 = 1;
      if (*local_168 == 0) {
        if (local_154[0] == 0) goto LAB_004074b0;
        goto LAB_004074aa;
      }
LAB_004075a5:
                    /* WARNING: Subroutine does not return */
      __assert_fail("*iter->cur.ptr == \'\\0\'","mbuiter.h",0xb2,"mbuiter_multi_next");
    }
    local_160 = 1;
    local_158 = '\x01';
    local_154[0] = (int)(char)bVar5;
LAB_00406842:
    if (local_154[0] == 0) {
      return param_1;
    }
LAB_004068c7:
    local_16c = 1;
    uVar14 = 0;
    bVar5 = 1;
    local_138 = '\0';
    local_134 = (mbstate_t)0x0;
    local_12c = '\0';
    local_f8 = local_f8 & 0xffffff00;
    mStack_f4 = (mbstate_t)0x0;
    local_180 = 0;
    uVar11 = 0;
    local_128 = param_2;
    local_e8 = param_1;
    uVar2 = uStack_ec;
LAB_00406920:
    uStack_ec = uVar2 & 0xffffff00;
    if ((char)local_f8 != '\0') {
LAB_00406f39:
      sVar7 = __ctype_get_mb_cur_max();
      pbVar12 = local_e8;
      uVar8 = FUN_00409040(local_e8,sVar7);
      sStack_e0 = FUN_0040b170(&iStack_d4,pbVar12,uVar8,&mStack_f4);
      if (sStack_e0 == 0xffffffffffffffff) {
        sStack_e0 = 1;
        local_d8 = (uint)local_d8._1_3_;
      }
      else {
        if (sStack_e0 != 0xfffffffffffffffe) {
          if (sStack_e0 == 0) {
            sStack_e0 = 1;
            if (*local_e8 != 0) goto LAB_004075a5;
            if (iStack_d4 != 0) goto LAB_004074aa;
          }
          local_d8 = CONCAT31(local_d8._1_3_,1);
          iVar6 = mbsinit(&mStack_f4);
          if (iVar6 != 0) {
            local_f8 = local_f8 & 0xffffff00;
          }
          goto LAB_00406980;
        }
        sStack_e0 = strlen((char *)local_e8);
        local_d8 = local_d8 >> 8;
      }
      local_d8 = local_d8 << 8;
      uStack_ec = CONCAT31(uStack_ec._1_3_,1);
      bVar9 = 9 < uVar14 & bVar5;
      if ((bVar9 != 0) && (bVar5 = bVar9, uVar14 * 5 <= uVar11)) goto LAB_00407068;
LAB_00406eb8:
      sVar7 = sStack_e0;
      uVar13 = uVar11 + 1;
      if ((sStack_e0 == local_160) && (iVar6 = memcmp(local_e8,local_168,sStack_e0), iVar6 == 0)) {
LAB_004069d1:
        uVar13 = uVar11 + 1;
        bVar9 = *param_2;
        local_78 = local_78 & 0xffffff00;
        sStack_a0 = sStack_e0;
        local_a8 = local_e8 + sStack_e0;
        local_b8 = local_f8;
        mStack_b4.__count = mStack_f4.__count;
        mStack_b4.__value.__wch = mStack_f4.__value.__wch;
        local_98 = local_d8;
        iStack_94 = iStack_d4;
        uStack_90 = uStack_d0;
        uStack_8c = uStack_cc;
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        uStack_80 = uStack_c0;
        uStack_7c = uStack_bc;
        uStack_ac = uStack_ec & 0xffffff00;
        local_6c = 0;
        mStack_74.__count = 0;
        mStack_74.__value.__wch = 0;
        local_68 = param_2;
        if ((*(uint *)(&DAT_0040f520 + (ulong)(bVar9 >> 5) * 4) >> (bVar9 & 0x1f) & 1) == 0) {
          iVar6 = mbsinit(&mStack_74);
          if (iVar6 == 0) goto LAB_0040758c;
          local_78 = CONCAT31(local_78._1_3_,1);
          sVar7 = __ctype_get_mb_cur_max();
          pbVar12 = local_68;
          uVar8 = FUN_00409040(local_68,sVar7);
          local_60 = FUN_0040b170(local_54,pbVar12,uVar8,&mStack_74);
          if (local_60 == 0xffffffffffffffff) {
            local_60 = 1;
            local_58 = '\0';
            goto LAB_00406aa9;
          }
          if (local_60 == 0xfffffffffffffffe) {
            local_60 = strlen((char *)local_68);
            local_58 = '\0';
            goto LAB_00406aa9;
          }
          if (local_60 == 0) {
            local_60 = 1;
            if (*local_68 != 0) goto LAB_004075a5;
            if (local_54[0] != 0) goto LAB_004074aa;
          }
          local_58 = '\x01';
          iVar6 = mbsinit(&mStack_74);
          if (iVar6 != 0) {
            local_78 = local_78 & 0xffffff00;
          }
        }
        else {
          local_60 = 1;
          local_58 = '\x01';
          local_54[0] = (int)(char)bVar9;
        }
        local_6c = 1;
        if (local_54[0] == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
LAB_00406aa9:
        local_68 = local_68 + local_60;
        do {
          local_6c = 0;
          uVar13 = uVar13 + 1;
          if ((char)local_78 == '\0') {
            if ((*(uint *)(&DAT_0040f520 + (ulong)(*local_68 >> 5) * 4) >> (*local_68 & 0x1f) & 1)
                == 0) {
              iVar6 = mbsinit(&mStack_74);
              if (iVar6 != 0) {
                local_78 = CONCAT31(local_78._1_3_,1);
                goto LAB_00406c03;
              }
              goto LAB_0040758c;
            }
            local_60 = 1;
            local_54[0] = (int)(char)*local_68;
            local_58 = '\x01';
joined_r0x00406b23:
            if (local_54[0] == 0) {
              return local_e8;
            }
          }
          else {
LAB_00406c03:
            sVar7 = __ctype_get_mb_cur_max();
            pbVar12 = local_68;
            uVar8 = FUN_00409040(local_68,sVar7);
            local_60 = FUN_0040b170(local_54,pbVar12,uVar8,&mStack_74);
            if (local_60 == 0xffffffffffffffff) {
              local_60 = 1;
              local_58 = '\0';
            }
            else {
              if (local_60 != 0xfffffffffffffffe) {
                if (local_60 == 0) {
                  local_60 = 1;
                  if (*local_68 != 0) goto LAB_004075a5;
                  if (local_54[0] != 0) goto LAB_004074aa;
                }
                local_58 = '\x01';
                iVar6 = mbsinit(&mStack_74);
                if (iVar6 != 0) {
                  local_78 = local_78 & 0xffffff00;
                }
                goto joined_r0x00406b23;
              }
              local_60 = strlen((char *)local_68);
              local_58 = '\0';
            }
          }
          local_6c = 1;
          if ((char)uStack_ac == '\0') {
            if ((char)local_b8 == '\0') {
              if ((*(uint *)(&DAT_0040f520 + (ulong)(*local_a8 >> 5) * 4) >> (*local_a8 & 0x1f) & 1)
                  != 0) {
                sStack_a0 = 1;
                iStack_94 = (int)(char)*local_a8;
                local_98 = CONCAT31(local_98._1_3_,1);
                uStack_ac = CONCAT31(uStack_ac._1_3_,1);
                goto LAB_00406b8f;
              }
              iVar6 = mbsinit(&mStack_b4);
              if (iVar6 == 0) goto LAB_0040758c;
              local_b8 = CONCAT31(local_b8._1_3_,1);
            }
            sVar7 = __ctype_get_mb_cur_max();
            pbVar12 = local_a8;
            uVar8 = FUN_00409040(local_a8,sVar7);
            sStack_a0 = FUN_0040b170(&iStack_94,pbVar12,uVar8,&mStack_b4);
            if (sStack_a0 == 0xffffffffffffffff) {
              sStack_a0 = 1;
              local_98 = (uint)local_98._1_3_ << 8;
              uStack_ac = CONCAT31(uStack_ac._1_3_,1);
            }
            else {
              if (sStack_a0 != 0xfffffffffffffffe) {
                if (sStack_a0 == 0) {
                  sStack_a0 = 1;
                  if (*local_a8 != 0) goto LAB_004075a5;
                  if (iStack_94 != 0) goto LAB_004074aa;
                }
                local_98 = CONCAT31(local_98._1_3_,1);
                iVar6 = mbsinit(&mStack_b4);
                if (iVar6 != 0) {
                  local_b8 = local_b8 & 0xffffff00;
                }
                uStack_ac = CONCAT31(uStack_ac._1_3_,1);
                if (iStack_94 != 0) goto LAB_00406b9e;
                goto LAB_00406e08;
              }
              sStack_a0 = strlen((char *)local_a8);
              local_98 = local_98 & 0xffffff00;
              uStack_ac = CONCAT31(uStack_ac._1_3_,1);
            }
LAB_00406cec:
            sVar7 = sStack_e0;
            if (sStack_a0 != local_60) break;
            iVar6 = memcmp(local_a8,local_68,sStack_a0);
            bVar16 = iVar6 != 0;
          }
          else {
            if ((char)local_98 == '\0') goto LAB_00406cec;
LAB_00406b8f:
            if (iStack_94 == 0) goto LAB_00406e08;
LAB_00406b9e:
            if (local_58 == '\0') goto LAB_00406cec;
            bVar16 = local_54[0] != iStack_94;
          }
          sVar7 = sStack_e0;
          if (bVar16) break;
          local_a8 = local_a8 + sStack_a0;
          local_68 = local_68 + local_60;
          uStack_ac = uStack_ac & 0xffffff00;
        } while( true );
      }
      goto LAB_00406d0a;
    }
    if ((*(uint *)(&DAT_0040f520 + (ulong)(*local_e8 >> 5) * 4) >> (*local_e8 & 0x1f) & 1) == 0) {
      iVar6 = mbsinit(&mStack_f4);
      if (iVar6 != 0) {
        local_f8 = CONCAT31(local_f8._1_3_,1);
        goto LAB_00406f39;
      }
      goto LAB_0040758c;
    }
    sStack_e0 = 1;
    iStack_d4 = (int)(char)*local_e8;
    local_d8 = CONCAT31(local_d8._1_3_,1);
    uStack_ec._1_3_ = (undefined)(uVar2 >> 8);
LAB_00406980:
    uStack_ec = CONCAT31(uStack_ec._1_3_,1);
    if (iStack_d4 == 0) goto LAB_00406e08;
    bVar9 = 9 < uVar14 & bVar5;
    if ((bVar9 != 0) && (bVar5 = bVar9, uVar14 * 5 <= uVar11)) {
LAB_00407068:
      lVar15 = uVar11 - local_180;
      if (lVar15 == 0) {
        if (local_12c == '\0') goto LAB_00407238;
        if (local_118 != '\0') {
LAB_0040727e:
          if (local_114[0] == 0) goto LAB_004070f6;
        }
LAB_0040728c:
        bVar5 = 1;
      }
      else {
        if (local_12c == '\0') goto LAB_0040709f;
        if (local_118 != '\0') goto LAB_004070e1;
LAB_00407086:
        do {
          local_12c = '\0';
          local_128 = local_128 + local_120;
          lVar15 = lVar15 + -1;
          if (lVar15 == 0) goto LAB_00407238;
LAB_0040709f:
          if (local_138 == '\0') {
            if ((*(uint *)(&DAT_0040f520 + (ulong)(*local_128 >> 5) * 4) >> (*local_128 & 0x1f) & 1)
                == 0) {
              iVar6 = mbsinit(&local_134);
              if (iVar6 != 0) {
                local_138 = '\x01';
                goto LAB_0040713f;
              }
              goto LAB_0040758c;
            }
            local_120 = 1;
            local_114[0] = (int)(char)*local_128;
            local_118 = '\x01';
            local_12c = '\x01';
          }
          else {
LAB_0040713f:
            sVar7 = __ctype_get_mb_cur_max();
            pbVar12 = local_128;
            uVar8 = FUN_00409040(local_128,sVar7);
            local_120 = FUN_0040b170(local_114,pbVar12,uVar8,&local_134);
            if (local_120 == 0xffffffffffffffff) {
              local_120 = 1;
              local_118 = '\0';
              goto LAB_00407086;
            }
            if (local_120 == 0xfffffffffffffffe) {
              local_120 = strlen((char *)local_128);
              local_118 = '\0';
              goto LAB_00407086;
            }
            if (local_120 == 0) {
              local_120 = 1;
              if (*local_128 != 0) goto LAB_004075a5;
              if (local_114[0] != 0) goto LAB_004074aa;
            }
            local_118 = '\x01';
            iVar6 = mbsinit(&local_134);
            if (iVar6 != 0) {
              local_138 = '\0';
            }
            local_12c = '\x01';
          }
INVALID_JUMP; //LAB_004070e1:
        } while (local_114[0] != 0);
        if (local_12c == '\0') {
LAB_00407238:
          if (local_138 == '\0') {
            if ((*(uint *)(&DAT_0040f520 + (ulong)(*local_128 >> 5) * 4) >> (*local_128 & 0x1f) & 1)
                != 0) {
              local_120 = 1;
              local_114[0] = (int)(char)*local_128;
              local_118 = '\x01';
              local_12c = '\x01';
              goto LAB_0040727e;
            }
            iVar6 = mbsinit(&local_134);
            if (iVar6 == 0) goto LAB_0040758c;
            local_138 = '\x01';
          }
          sVar7 = __ctype_get_mb_cur_max();
          pbVar12 = local_128;
          uVar8 = FUN_00409040(local_128,sVar7);
          local_120 = FUN_0040b170(local_114,pbVar12,uVar8,&local_134);
          if (local_120 != 0xffffffffffffffff) {
            if (local_120 == 0xfffffffffffffffe) {
              local_120 = strlen((char *)local_128);
              local_118 = '\0';
              local_12c = '\x01';
              goto LAB_0040728c;
            }
            if (local_120 == 0) {
              local_120 = 1;
              if (*local_128 != 0) goto LAB_004075a5;
              if (local_114[0] != 0) goto LAB_004074aa;
            }
            local_118 = '\x01';
            iVar6 = mbsinit(&local_134);
            if (iVar6 != 0) {
              local_138 = '\0';
            }
            local_12c = '\x01';
            goto LAB_0040727e;
          }
          local_120 = 1;
          local_118 = '\0';
          local_12c = '\x01';
          goto LAB_0040728c;
        }
LAB_004070f6:
        bVar5 = FUN_00405d20(param_1,param_2,&local_78);
        if (bVar5 != 0) goto LAB_00407531;
      }
      local_180 = uVar11;
      if ((char)local_d8 == '\0') goto LAB_00406eb8;
    }
    uVar13 = uVar11 + 1;
    if (local_158 == '\0') goto LAB_00406eb8;
    sVar7 = sStack_e0;
    if (iStack_d4 == local_154[0]) goto LAB_004069d1;
LAB_00406d0a:
    local_e8 = local_e8 + sVar7;
    uVar14 = uVar14 + 1;
    uVar11 = uVar13;
    uVar2 = uStack_ec;
    goto LAB_00406920;
  }
  bVar5 = *param_2;
  if (bVar5 != 0) {
    bVar9 = *param_1;
    if (bVar9 != 0) {
      uVar13 = 0;
      uVar14 = 0;
      uVar11 = 0;
      bVar4 = 1;
      pbVar12 = param_2;
      do {
        uVar13 = uVar13 + 1;
        pbVar1 = param_1 + 1;
        if (bVar5 == bVar9) {
          if (param_2[1] == 0) {
            return param_1;
          }
          if (*pbVar1 == 0) break;
          uVar10 = uVar14 + 2;
          if (param_2[1] == *pbVar1) {
            do {
              lVar15 = uVar10 + -uVar14;
              if (param_2[lVar15] == 0) {
                return param_1;
              }
              lVar3 = uVar10 + -uVar14;
              if (param_1[lVar3] == 0) goto LAB_00406e08;
              uVar10 = uVar10 + 1;
            } while (param_2[lVar15] == param_1[lVar3]);
          }
        }
        else {
          uVar10 = uVar14 + 1;
          if (param_1[1] == 0) break;
        }
        uVar14 = uVar10;
        bVar9 = 9 < uVar13 & bVar4;
        if ((bVar9 != 0) && (bVar4 = bVar9, uVar13 * 5 <= uVar14)) {
          if (pbVar12 != (byte *)0x0) {
            sVar7 = strnlen((char *)pbVar12,uVar14 - uVar11);
            pbVar12 = pbVar12 + sVar7;
            uVar11 = uVar14;
            if (*pbVar12 != 0) goto LAB_004067a0;
          }
          sVar7 = strlen((char *)param_2);
          bVar4 = FUN_00405b80(pbVar1,param_2,sVar7,&local_78);
          if (bVar4 != 0) {
LAB_00407531:
            return (byte *)CONCAT44(mStack_74.__count,local_78);
          }
          pbVar12 = (byte *)0x0;
        }
LAB_004067a0:
        bVar9 = *pbVar1;
        param_1 = pbVar1;
      } while( true );
    }
LAB_00406e08:
    param_1 = (byte *)0x0;
  }
  return param_1;
LAB_004074aa:
  FUN_00405d00();
LAB_004074b0:
  local_158 = '\x01';
  mbsinit(&local_174);
  goto LAB_00406842;
}


void FUN_004075c0(byte *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (param_1 == (byte *)0x0) {
    fwrite("A NULL argv[0] was passed through an exec system call.\n",1,0x37,stderr);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar2 = strrchr((char *)param_1,0x2f);
  if (pcVar2 != (char *)0x0) {
    pbVar1 = (byte *)(pcVar2 + 1);
    uVar4 = (long)pbVar1 - (long)param_1;
    bVar7 = uVar4 < 6;
    bVar9 = uVar4 == 6;
    if (6 < (long)uVar4) {
      lVar3 = 7;
      pbVar5 = (byte *)(pcVar2 + -6);
      pbVar6 = &DAT_0040ddc0;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar5 < *pbVar6;
        bVar9 = *pbVar5 == *pbVar6;
        pbVar5 = pbVar5 + (ulong)bVar10 * -2 + 1;
        pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      bVar8 = false;
      bVar7 = (!bVar7 && !bVar9) == bVar7;
      if (bVar7) {
        lVar3 = 3;
        pbVar5 = pbVar1;
        pbVar6 = &DAT_0040ddc8;
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar8 = *pbVar5 < *pbVar6;
          bVar7 = *pbVar5 == *pbVar6;
          pbVar5 = pbVar5 + (ulong)bVar10 * -2 + 1;
          pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
        } while (bVar7);
        param_1 = pbVar1;
        if ((!bVar8 && !bVar7) == bVar8) {
          param_1 = (byte *)(pcVar2 + 4);
          program_invocation_short_name = param_1;
        }
      }
    }
  }
  DAT_00612528 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00407660(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040b320();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00407738:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040ddd9;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040ddce;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00407738;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040ddd5;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040ddd2;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00407760(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
                  uint param_6,long param_7,char *param_8,char *param_9)

{
  byte *__s1;
  ulong uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  ushort **ppuVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  uint uVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  bool bVar22;
  byte local_ac;
  size_t local_98;
  char *local_70;
  bool local_5b;
  wint_t local_44;
  mbstate_t local_40 [2];
  
  uVar17 = param_6 & 2;
  sVar5 = __ctype_get_mb_cur_max();
  switch(param_5) {
  case 0:
    local_5b = false;
    uVar15 = 0;
    local_ac = 0;
    local_98 = 0;
    local_70 = (char *)0x0;
    break;
  case 2:
    if (uVar17 == 0) {
      local_ac = 0;
LAB_004079b6:
      if (param_2 != 0) {
        *param_1 = 0x27;
      }
      local_5b = false;
      uVar15 = 1;
      param_5 = 2;
      local_98 = 1;
      local_70 = "\'";
    }
    else {
      local_5b = true;
      uVar15 = 0;
      local_ac = 0;
      local_98 = 1;
      local_70 = "\'";
    }
    break;
  case 3:
    local_5b = true;
    uVar15 = 0;
    param_5 = 2;
    local_ac = 1;
    local_98 = 1;
    local_70 = "\'";
    break;
  case 4:
    if (uVar17 == 0) {
      local_ac = 1;
      goto LAB_004079b6;
    }
  case 1:
    local_5b = true;
    uVar15 = 0;
    param_5 = 2;
    local_ac = 0;
    local_98 = 1;
    local_70 = "\'";
    break;
  case 5:
    if (uVar17 == 0) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      local_5b = false;
      uVar15 = 1;
      local_ac = 1;
      local_98 = 1;
      local_70 = "\"";
    }
    else {
      local_5b = true;
      uVar15 = 0;
      local_ac = 1;
      local_98 = 1;
      local_70 = "\"";
    }
    break;
  case 6:
    local_5b = true;
    uVar15 = 0;
    param_5 = 5;
    local_ac = 1;
    local_98 = 1;
    local_70 = "\"";
    break;
  case 7:
    local_5b = false;
    uVar15 = 0;
    local_ac = 1;
    local_98 = 0;
    local_70 = (char *)0x0;
    break;
  case 8:
  case 9:
  case 10:
    if (param_5 != 10) {
      param_8 = (char *)FUN_00407660(&DAT_0040dddd,param_5);
      param_9 = (char *)FUN_00407660("\'",param_5);
    }
    uVar15 = 0;
    if (uVar17 == 0) {
      cVar11 = *param_8;
      while (cVar11 != '\0') {
        if (uVar15 < param_2) {
          param_1[uVar15] = cVar11;
        }
        uVar15 = uVar15 + 1;
        cVar11 = param_8[uVar15];
      }
    }
    local_5b = uVar17 != 0;
    local_98 = strlen(param_9);
    local_ac = 1;
    local_70 = param_9;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar20 = 0;
  bVar9 = 0;
LAB_00407800:
  bVar21 = param_4 != uVar20;
  if (param_4 == 0xffffffffffffffff) {
    bVar21 = param_3[uVar20] != '\0';
  }
  if (bVar21 == false) {
    bVar22 = (bool)(param_5 == 2 & local_5b & uVar15 == 0);
    if (bVar22 == false) {
      uVar20 = uVar15;
      if (((local_70 != (char *)0x0) && (local_5b == false)) && (cVar11 = *local_70, cVar11 != '\0')
         ) {
        do {
          if (uVar20 < param_2) {
            param_1[uVar20] = cVar11;
          }
          uVar20 = uVar20 + 1;
          cVar11 = local_70[uVar20 - uVar15];
        } while (cVar11 != '\0');
      }
      if (param_2 <= uVar20) {
        return uVar20;
      }
      param_1[uVar20] = 0;
      return uVar20;
    }
    goto LAB_00407f40;
  }
  bVar2 = (bool)(param_5 != 2 & local_ac);
  __s1 = (byte *)(param_3 + uVar20);
  uVar14 = uVar15;
  bVar22 = local_5b;
  bVar3 = bVar9;
  if (bVar2 != false) {
    if (local_98 == 0) {
LAB_00408110:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00408122_caseD_0;
      default:
        bVar2 = false;
        goto switchD_00407efe_caseD_1;
      case 7:
switchD_00408122_caseD_7:
        bVar18 = 0x61;
        break;
      case 8:
switchD_00408122_caseD_8:
        bVar18 = 0x62;
        break;
      case 9:
switchD_00408122_caseD_9:
        bVar18 = 0x74;
        break;
      case 10:
switchD_00408122_caseD_a:
        bVar18 = 0x6e;
        break;
      case 0xb:
switchD_00408122_caseD_b:
        bVar18 = 0x76;
        break;
      case 0xc:
switchD_00408122_caseD_c:
        bVar18 = 0x66;
        break;
      case 0xd:
        bVar2 = false;
switchD_004078f1_caseD_d:
        uVar19 = 0xd;
        bVar10 = 0x72;
        bVar21 = param_5 == 2;
        goto LAB_00407ce0;
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x5b:
      case 0x5e:
      case 0x60:
      case 0x7c:
        bVar2 = false;
switchD_004078f1_caseD_20:
        bVar21 = false;
        goto LAB_00407bc8;
      case 0x23:
      case 0x7e:
        bVar2 = false;
switchD_004078f1_caseD_23:
        if (uVar20 == 0) {
          bVar21 = false;
          goto LAB_00407bc8;
        }
        goto switchD_004078f1_caseD_25;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
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
      case 0x3a:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
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
      case 0x5a:
      case 0x5d:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
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
      case 0x7a:
        bVar2 = false;
        goto switchD_004078f1_caseD_25;
      case 0x27:
        bVar2 = false;
        goto switchD_00407efe_caseD_27;
      case 0x3f:
        bVar2 = false;
        goto switchD_00407efe_caseD_3f;
      case 0x5c:
        bVar2 = false;
        goto switchD_004078f1_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar2 = false;
        goto switchD_00407efe_caseD_7b;
      }
      bVar22 = false;
      goto joined_r0x00407d05;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_98)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar20 + local_98) || (iVar4 = memcmp(__s1,local_70,local_98), iVar4 != 0))
    goto LAB_00408110;
    if (local_5b == false) {
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004078f1_caseD_0;
      default:
        goto switchD_00407efe_caseD_1;
      case 7:
        goto switchD_00408122_caseD_7;
      case 8:
        goto switchD_00408122_caseD_8;
      case 9:
        goto switchD_00408122_caseD_9;
      case 10:
        goto switchD_00408122_caseD_a;
      case 0xb:
        goto switchD_00408122_caseD_b;
      case 0xc:
        goto switchD_00408122_caseD_c;
      case 0xd:
        goto switchD_004078f1_caseD_d;
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x5b:
      case 0x5e:
      case 0x60:
      case 0x7c:
        goto switchD_004078f1_caseD_20;
      case 0x23:
      case 0x7e:
        goto switchD_004078f1_caseD_23;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
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
      case 0x3a:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
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
      case 0x5a:
      case 0x5d:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
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
      case 0x7a:
        goto switchD_004078f1_caseD_25;
      case 0x27:
        goto switchD_00407efe_caseD_27;
      case 0x3f:
        goto switchD_00407efe_caseD_3f;
      case 0x5c:
        goto switchD_004078f1_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00407efe_caseD_7b;
      }
    }
    goto LAB_00407f52;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (local_ac == 0) {
      if ((param_6 & 1) != 0) goto LAB_00408420;
      if (local_5b == false) {
        uVar20 = uVar20 + 1;
        bVar18 = 0;
        goto LAB_00408068;
      }
      bVar21 = false;
      bVar16 = false;
      if (param_7 != 0) {
        bVar2 = false;
        uVar19 = 0;
        goto LAB_00407919;
      }
      bVar18 = 0;
      goto LAB_00407e72;
    }
switchD_00408122_caseD_0:
    if (local_5b == false) {
      bVar2 = false;
switchD_004078f1_caseD_0:
      bVar22 = param_5 == 2;
      bVar3 = (bVar9 ^ 1) & bVar22;
      if (bVar3 == 0) {
        bVar3 = bVar9;
        if (uVar15 < param_2) goto LAB_00407e05;
      }
      else {
        if (uVar15 < param_2) {
          param_1[uVar15] = 0x27;
        }
        if (uVar15 + 1 < param_2) {
          param_1[uVar15 + 1] = 0x24;
        }
        if (uVar15 + 2 < param_2) {
          param_1[uVar15 + 2] = 0x27;
        }
        uVar14 = uVar15 + 3;
        if (param_2 <= uVar14) {
          uVar14 = uVar15 + 4;
          bVar18 = 0x30;
          goto LAB_00407c87;
        }
LAB_00407e05:
        param_1[uVar14] = 0x5c;
        uVar15 = uVar14;
      }
      uVar14 = uVar15 + 1;
      if (param_5 != 2) {
        uVar19 = 0x30;
        bVar9 = bVar3;
        if ((uVar20 + 1 < param_4) && ((byte)(param_3[uVar20 + 1] - 0x30U) < 10)) {
          if (uVar14 < param_2) {
            param_1[uVar14] = 0x30;
          }
          if (uVar15 + 2 < param_2) {
            param_1[uVar15 + 2] = 0x30;
          }
          uVar14 = uVar15 + 3;
          uVar19 = 0x30;
        }
        goto LAB_00407e3b;
      }
      bVar18 = 0x30;
      goto LAB_00407c87;
    }
    bVar22 = param_5 == 2;
LAB_00407f40:
    if ((local_ac != 0) && (bVar22 != false)) {
      param_5 = 4;
    }
LAB_00407f52:
    uVar15 = FUN_00407760(param_1,param_2,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                          param_9);
    return uVar15;
  default:
switchD_00407efe_caseD_1:
    if (sVar5 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar8 = 0;
      do {
        uVar1 = uVar20 + uVar8;
        lVar7 = FUN_0040b170(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar7 == 0) {
          bVar10 = local_ac & (bVar21 ^ 1U);
          goto LAB_00408620;
        }
        bVar10 = local_ac;
        if (lVar7 == -1) goto LAB_00408620;
        if (lVar7 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00408620;
          goto LAB_004086af;
        }
        bVar22 = (bool)(param_5 == 2 & local_5b);
        if ((bVar22 != false) && (lVar7 != 1)) {
          pcVar13 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar13 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar13 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) goto LAB_00407f40;
            pcVar13 = pcVar13 + 1;
          } while (param_3 + uVar1 + lVar7 != pcVar13);
        }
        iVar4 = iswprint(local_44);
        if (iVar4 == 0) {
          bVar21 = false;
        }
        uVar8 = uVar8 + lVar7;
        iVar4 = mbsinit(local_40);
      } while (iVar4 == 0);
      bVar10 = (bVar21 ^ 1U) & local_ac;
      goto LAB_00408620;
    }
    ppuVar6 = __ctype_b_loc();
    uVar8 = 1;
    bVar10 = ((byte)((*ppuVar6)[uVar19] >> 0xe) ^ 1) & local_ac;
    goto LAB_00407ed8;
  case 7:
    uVar19 = 7;
    bVar10 = 0x61;
    bVar21 = param_5 == 2;
    break;
  case 8:
    uVar19 = 8;
    bVar10 = 0x62;
    bVar21 = param_5 == 2;
    break;
  case 9:
    uVar19 = 9;
    bVar10 = 0x74;
    goto LAB_00407f13;
  case 10:
    uVar19 = 10;
    bVar10 = 0x6e;
    goto LAB_00407f13;
  case 0xb:
    uVar19 = 0xb;
    bVar10 = 0x76;
    bVar21 = param_5 == 2;
    break;
  case 0xc:
    uVar19 = 0xc;
    bVar10 = 0x66;
    bVar21 = param_5 == 2;
    break;
  case 0xd:
    uVar19 = 0xd;
    bVar10 = 0x72;
LAB_00407f13:
    bVar22 = (bool)(local_5b & param_5 == 2);
    bVar2 = bVar22;
    bVar21 = param_5 == 2;
    if (bVar22 != false) goto LAB_00407f40;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x5b:
  case 0x5e:
  case 0x60:
  case 0x7c:
    goto LAB_00407bb6;
  case 0x23:
  case 0x7e:
    goto LAB_00407bb1;
  case 0x25:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
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
  case 0x3a:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
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
  case 0x5a:
  case 0x5d:
  case 0x5f:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
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
  case 0x7a:
    goto switchD_00407efe_caseD_25;
  case 0x27:
switchD_00407efe_caseD_27:
    bVar21 = false;
    uVar19 = 0x27;
    if (param_5 != 2) goto LAB_00407bc8;
    if (local_5b == false) {
      if (uVar15 < param_2) {
        param_1[uVar15] = 0x27;
      }
      if (uVar15 + 1 < param_2) {
        param_1[uVar15 + 1] = 0x5c;
      }
      if (uVar15 + 2 < param_2) {
        param_1[uVar15 + 2] = 0x27;
      }
      uVar14 = uVar15 + 3;
      bVar3 = 0;
      bVar18 = 0x27;
LAB_00407c87:
      uVar20 = uVar20 + 1;
      bVar9 = bVar3;
      if (bVar2 != false) goto LAB_00407bef;
      goto LAB_00407997;
    }
    goto LAB_00407f40;
  case 0x3f:
switchD_00407efe_caseD_3f:
    if (param_5 != 2) {
      if (param_5 != 5) {
        bVar21 = param_5 == 2;
        uVar19 = 0x3f;
        goto LAB_00407bc8;
      }
      if ((param_6 & 4) == 0) {
        bVar21 = false;
        uVar19 = 0x3f;
        goto LAB_00407bc8;
      }
      uVar8 = uVar20 + 2;
      bVar21 = false;
      uVar19 = 0x3f;
      if ((param_4 <= uVar8) || (param_3[uVar20 + 1] != '?')) goto LAB_00407bc8;
      uVar19 = (ulong)(byte)param_3[uVar8];
      if ((0x3e < (byte)param_3[uVar8]) || ((0x7000a38200000000U >> (uVar19 & 0x3f) & 1) == 0)) {
        uVar19 = 0x3f;
        goto LAB_00407bc8;
      }
      if (local_5b == false) {
        if (uVar15 < param_2) {
          param_1[uVar15] = 0x3f;
        }
        if (uVar15 + 1 < param_2) {
          param_1[uVar15 + 1] = 0x22;
        }
        if (uVar15 + 2 < param_2) {
          param_1[uVar15 + 2] = 0x22;
        }
        if (uVar15 + 3 < param_2) {
          param_1[uVar15 + 3] = 0x3f;
        }
        uVar14 = uVar15 + 4;
        bVar22 = false;
        bVar21 = false;
        uVar20 = uVar8;
LAB_00407e3b:
        bVar18 = (byte)uVar19;
        uVar15 = uVar14;
        bVar3 = bVar9;
        if ((local_ac == 0) || (bVar22)) goto LAB_00407be0;
        if (param_7 != 0) goto LAB_00407919;
        goto LAB_00407e60;
      }
      goto LAB_00407f52;
    }
    if (local_5b == false) {
      bVar21 = false;
      bVar18 = 0x3f;
      goto LAB_00407be0;
    }
    goto LAB_00407f40;
  case 0x5c:
    if (param_5 == 2) {
      if (local_5b == false) {
        uVar20 = uVar20 + 1;
        bVar18 = 0x5c;
        goto LAB_00408068;
      }
      goto LAB_00407f40;
    }
switchD_004078f1_caseD_5c:
    uVar19 = 0x5c;
    bVar18 = 0x5c;
    bVar10 = 0x5c;
    bVar21 = (bool)(local_ac & local_5b & local_98 != 0);
    if (bVar21 == false) break;
    uVar20 = uVar20 + 1;
LAB_00408068:
    bVar21 = bVar9 != 0;
    bVar9 = bVar3;
    if (bVar21) {
      if (uVar14 < param_2) {
        param_1[uVar14] = 0x27;
      }
      if (uVar14 + 1 < param_2) {
        param_1[uVar14 + 1] = 0x27;
      }
      uVar14 = uVar14 + 2;
      bVar9 = 0;
    }
    goto LAB_00407997;
  case 0x7b:
  case 0x7d:
switchD_00407efe_caseD_7b:
    bVar22 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar22 = param_3[1] != '\0';
    }
    bVar21 = param_5 == 2;
    if (bVar22) goto LAB_00407bc8;
LAB_00407bb1:
    bVar21 = param_5 == 2;
    if (uVar20 != 0) goto LAB_00407bc8;
LAB_00407bb6:
    bVar21 = param_5 == 2;
    bVar22 = (bool)(local_5b & bVar21);
    if (bVar22 != false) goto LAB_00407f40;
LAB_00407bc8:
    bVar18 = (byte)uVar19;
    bVar21 = (bool)((local_ac ^ 1 | bVar21) ^ 1 | local_5b);
    if (bVar21 == false) {
LAB_00407be0:
      uVar20 = uVar20 + 1;
      uVar14 = uVar15;
      if (bVar2 == false) {
        bVar9 = (bVar21 ^ 1U) & bVar3;
        goto LAB_00408068;
      }
LAB_00407bef:
      bVar22 = param_5 == 2;
    }
    else {
switchD_004078f1_caseD_25:
      bVar18 = (byte)uVar19;
      bVar21 = false;
      if (param_7 == 0) {
LAB_00407e60:
        bVar22 = param_5 == 2;
        uVar15 = uVar14;
        bVar16 = bVar21;
        bVar3 = bVar9;
        if (bVar2 == false) {
LAB_00407e72:
          uVar20 = uVar20 + 1;
          bVar9 = (bVar16 ^ 1U) & bVar3;
          uVar14 = uVar15;
          goto LAB_00408068;
        }
      }
      else {
LAB_00407919:
        bVar18 = (byte)uVar19;
        uVar14 = uVar15;
        if ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar18 & 0x1f) & 1) == 0) goto LAB_00407e60;
        bVar22 = param_5 == 2;
        bVar3 = bVar9;
      }
joined_r0x00407d05:
      if (local_5b != false) goto LAB_00407f40;
      uVar20 = uVar20 + 1;
    }
    bVar9 = (bVar3 ^ 1) & bVar22;
    if (bVar9 != 0) {
      if (uVar14 < param_2) {
        param_1[uVar14] = 0x27;
      }
      if (uVar14 + 1 < param_2) {
        param_1[uVar14 + 1] = 0x24;
      }
      if (uVar14 + 2 < param_2) {
        param_1[uVar14 + 2] = 0x27;
      }
      uVar14 = uVar14 + 3;
      bVar3 = bVar9;
    }
    if (uVar14 < param_2) {
      param_1[uVar14] = 0x5c;
    }
    uVar14 = uVar14 + 1;
    bVar9 = bVar3;
LAB_00407997:
    if (uVar14 < param_2) {
      param_1[uVar14] = bVar18;
    }
    uVar15 = uVar14 + 1;
    goto LAB_00407800;
  }
LAB_00407ce0:
  bVar22 = bVar21;
  bVar18 = bVar10;
  bVar21 = bVar22;
  if (local_ac == 0) goto LAB_00407bc8;
  goto joined_r0x00407d05;
  while (__s1[uVar8] != 0) {
LAB_004086af:
    uVar8 = uVar8 + 1;
    if (param_4 <= uVar20 + uVar8) break;
  }
LAB_00408620:
  bVar12 = bVar10;
  if (1 < uVar8) {
LAB_0040842e:
    uVar8 = uVar8 + uVar20;
    bVar10 = 0;
    uVar15 = uVar20;
    do {
      bVar18 = (byte)uVar19;
      if (bVar12 == 0) {
        bVar9 = (bVar10 ^ 1) & bVar3;
        if (bVar2 != false) {
          if (uVar14 < param_2) {
            param_1[uVar14] = 0x5c;
          }
          uVar14 = uVar14 + 1;
        }
        uVar20 = uVar15 + 1;
        if (uVar8 <= uVar20) goto LAB_00408068;
        if (bVar9 == 0) {
          bVar2 = false;
        }
        else {
          if (uVar14 < param_2) {
            param_1[uVar14] = 0x27;
          }
          if (uVar14 + 1 < param_2) {
            param_1[uVar14 + 1] = 0x27;
          }
          uVar14 = uVar14 + 2;
          bVar2 = false;
          bVar3 = 0;
        }
      }
      else {
        bVar22 = param_5 == 2;
        if (local_5b != false) goto LAB_00407f40;
        bVar9 = (bVar3 ^ 1) & bVar22;
        if (bVar9 != 0) {
          if (uVar14 < param_2) {
            param_1[uVar14] = 0x27;
          }
          if (uVar14 + 1 < param_2) {
            param_1[uVar14 + 1] = 0x24;
          }
          if (uVar14 + 2 < param_2) {
            param_1[uVar14 + 2] = 0x27;
          }
          uVar14 = uVar14 + 3;
          bVar3 = bVar9;
        }
        if (uVar14 < param_2) {
          param_1[uVar14] = 0x5c;
        }
        if (uVar14 + 1 < param_2) {
          param_1[uVar14 + 1] = (char)(uVar19 >> 6) + '0';
        }
        if (uVar14 + 2 < param_2) {
          param_1[uVar14 + 2] = ((byte)(uVar19 >> 3) & 7) + 0x30;
        }
        uVar20 = uVar15 + 1;
        uVar14 = uVar14 + 3;
        bVar18 = (bVar18 & 7) + 0x30;
        bVar10 = bVar12;
        bVar9 = bVar3;
        if (uVar8 <= uVar20) goto LAB_00407997;
      }
      uVar15 = uVar15 + 1;
      if (uVar14 < param_2) {
        param_1[uVar14] = bVar18;
      }
      uVar19 = (ulong)(byte)param_3[uVar15];
      uVar14 = uVar14 + 1;
    } while( true );
  }
LAB_00407ed8:
  bVar12 = local_ac;
  if (bVar10 != 0) goto LAB_0040842e;
switchD_00407efe_caseD_25:
  bVar21 = param_5 == 2;
  goto LAB_00407bc8;
LAB_00408420:
  uVar20 = uVar20 + 1;
  goto LAB_00407800;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00408770(uint param_1,undefined param_2,undefined param_3,undefined *param_4)

{
  int iVar1;
  uint uVar2;
  undefined uVar3;
  ulong uVar4;
  undefined uVar5;
  undefined uVar6;
  int *piVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *__ptr;
  ulong *puVar10;
  
  piVar7 = __errno_location();
  iVar1 = *piVar7;
  if (-1 < (int)param_1) {
    puVar8 = (undefined *)PTR_DAT_00612318;
    if (DAT_00612330 <= param_1) {
      if (PTR_DAT_00612318 == &DAT_00612320) {
        puVar8 = (undefined *)FUN_004096d0(0);
        uVar6 = PTR_DAT_00612328._4_4_;
        uVar5 = PTR_DAT_00612328._0_4_;
        uVar3 = _UNK_00612324;
        PTR_DAT_00612318 = (undefined *)puVar8;
        *puVar8 = _DAT_00612320;
        puVar8[1] = uVar3;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
      else {
        puVar8 = (undefined *)FUN_004096d0(PTR_DAT_00612318);
        PTR_DAT_00612318 = (undefined *)puVar8;
      }
      memset(puVar8 + (ulong)DAT_00612330 * 4,0,((ulong)(param_1 + 1) - (ulong)DAT_00612330) * 0x10)
      ;
      DAT_00612330 = param_1 + 1;
    }
    uVar2 = param_4[1];
    puVar10 = (ulong *)(puVar8 + (long)(int)param_1 * 4);
    uVar4 = *puVar10;
    __ptr = (undefined *)puVar10[1];
    uVar9 = FUN_00407760(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                         *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
    if (uVar4 <= uVar9) {
      uVar9 = uVar9 + 1;
      *puVar10 = uVar9;
      if (__ptr != &DAT_00612540) {
        free(__ptr);
      }
      __ptr = (undefined *)FUN_00409680(uVar9);
      uVar3 = *param_4;
      puVar10[1] = (ulong)__ptr;
      FUN_00407760(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                   *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
    }
    *piVar7 = iVar1;
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408910(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00612640;
  }
  FUN_00409840(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00408950(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00612640;
  }
  return *param_1;
}


void FUN_00408960(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00612640;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00408970(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00612640;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_004089b0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00612640;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004089d0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00612640;
  }
  *param_1 = 10;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)(param_1 + 10) = param_2;
    *(long *)(param_1 + 0xc) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408a00(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_00612640;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00407760(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00408a80(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_00612640;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00407760(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00409680(lVar3 + 1);
  FUN_00407760(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00408b70(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00408a80(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408b80(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00612318;
  if (1 < DAT_00612330) {
    ppvVar2 = (void **)(PTR_DAT_00612318 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00612318 + (ulong)(DAT_00612330 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00612540) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00612320 = 0x100;
    PTR_DAT_00612328 = &DAT_00612540;
  }
  if (__ptr_00 != &DAT_00612320) {
    free(__ptr_00);
    PTR_DAT_00612318 = &DAT_00612320;
  }
  DAT_00612330 = 1;
  return;
}


void FUN_00408c20(undefined param_1,undefined param_2)

{
  FUN_00408770(param_1,param_2,0xffffffffffffffff,&DAT_00612640);
  return;
}


void FUN_00408c40(void)

{
  FUN_00408770();
  return;
}


void FUN_00408c50(undefined param_1)

{
  FUN_00408770(0,param_1,0xffffffffffffffff,&DAT_00612640);
  return;
}


void FUN_00408c70(undefined param_1,undefined param_2)

{
  FUN_00408770(0,param_1,param_2,&DAT_00612640);
  return;
}


void FUN_00408c90(undefined param_1,int param_2,undefined param_3)

{
  int local_48;
  undefined local_44;
  undefined local_40;
  undefined local_38;
  undefined local_30;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_00408770(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408d00(undefined param_1,int param_2,undefined param_3,undefined param_4)

{
  int local_48;
  undefined local_44;
  undefined local_40;
  undefined local_38;
  undefined local_30;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_00408770(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408d70(undefined param_1,undefined param_2)

{
  FUN_00408c90(0,param_1,param_2);
  return;
}


void FUN_00408d80(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00408d00(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408d90(undefined param_1,undefined param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  undefined uStack_20;
  undefined local_18;
  
  local_18 = DAT_00612670;
  local_48 = _DAT_00612640;
  uStack_40 = uRam0000000000612648;
  local_38 = _DAT_00612650;
  uStack_30 = uRam0000000000612658;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00612660;
  uStack_20 = uRam0000000000612668;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00408770(0,param_1,param_2,&local_48);
  return;
}


void FUN_00408e00(undefined param_1,char param_2)

{
  FUN_00408d90(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00408e10(undefined param_1)

{
  FUN_00408d90(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00408e30(undefined param_1,undefined param_2)

{
  FUN_00408d90(param_1,param_2,0x3a);
  return;
}


void FUN_00408e40(undefined param_1,int param_2,undefined param_3)

{
  int local_48;
  undefined local_44;
  undefined local_40;
  undefined local_38;
  undefined local_30;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_2 != 10) {
    local_40 = 0x400000000000000;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_00408770(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408eb0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000612648;
  local_38 = _DAT_00612650;
  uStack_30 = uRam0000000000612658;
  local_28 = _DAT_00612660;
  lStack_20 = uRam0000000000612668;
  local_18 = DAT_00612670;
  local_48 = CONCAT44((int)((ulong)_DAT_00612640 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00408770(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408f20(void)

{
  FUN_00408eb0();
  return;
}


void FUN_00408f30(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00408eb0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00408f50(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00408eb0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00408f70(void)

{
  FUN_00408770();
  return;
}


void FUN_00408f80(undefined param_1,undefined param_2)

{
  FUN_00408770(0,param_1,param_2,&DAT_006122e0);
  return;
}


void FUN_00408fa0(undefined param_1,undefined param_2)

{
  FUN_00408770(param_1,param_2,0xffffffffffffffff,&DAT_006122e0);
  return;
}


void FUN_00408fc0(undefined param_1)

{
  FUN_00408770(0,param_1,0xffffffffffffffff,&DAT_006122e0);
  return;
}


ssize_t FUN_00408fe0(int param_1,void *param_2,ulong param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  while( true ) {
    do {
      sVar1 = read(param_1,param_2,param_3);
      if (-1 < sVar1) {
        return sVar1;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    if (*piVar2 != 0x16) break;
    if (param_3 < 0x7fffe001) {
      return sVar1;
    }
    param_3 = 0x7fffe000;
  }
  return sVar1;
}


long FUN_00409040(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0040b1a0(param_1,0,param_2);
  if (lVar1 != 0) {
    param_2 = (lVar1 - param_1) + 1;
  }
  return param_2;
}


void FUN_00409080(undefined param_1)

{
  FUN_00409d40(param_1,0,3);
  return;
}


uint FUN_00409090(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_00409080();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


ulong FUN_004090e0(FILE *param_1,long param_2,undefined param_3,undefined param_4,
                  undefined *param_5,undefined param_6)

{
  uint uVar1;
  undefined uVar2;
  char *pcVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  ulong uVar8;
  undefined local_58;
  undefined local_50;
  undefined local_48;
  undefined local_40;
  
  if (param_2 == 0) {
    fprintf(param_1,"%s %s\n");
  }
  else {
    fprintf(param_1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar2 = dcgettext(0,&DAT_0040eb2b,5);
  fprintf(param_1,"Copyright %s %d Free Software Foundation, Inc.",uVar2,0x7df);
  pcVar3 = (char *)dcgettext(0,
                             "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                             ,5);
  fputs(pcVar3,param_1);
  switch(param_6) {
  case 0:
                    /* WARNING: Subroutine does not return */
    abort();
  case 1:
    uVar2 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s.\n",5);
    uVar1 = fprintf(param_1,pcVar3,uVar2);
    return (ulong)uVar1;
  case 2:
    uVar2 = param_5[1];
    uVar7 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s and %s.\n",5);
    uVar1 = fprintf(param_1,pcVar3,uVar7,uVar2);
    return (ulong)uVar1;
  case 3:
    uVar2 = param_5[2];
    uVar7 = param_5[1];
    uVar6 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, and %s.\n",5);
    uVar1 = fprintf(param_1,pcVar3,uVar6,uVar7,uVar2);
    return (ulong)uVar1;
  case 4:
    uVar2 = param_5[3];
    uVar7 = param_5[2];
    uVar6 = param_5[1];
    uVar5 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    uVar1 = fprintf(param_1,pcVar3,uVar5,uVar6,uVar7,uVar2);
    return (ulong)uVar1;
  case 5:
    uVar8 = param_5[4];
    uVar7 = param_5[3];
    uVar6 = param_5[2];
    uVar2 = param_5[1];
    uVar5 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
    break;
  case 6:
    uVar2 = param_5[1];
    uVar8 = param_5[4];
    uVar7 = param_5[3];
    uVar6 = param_5[2];
    uVar5 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    break;
  case 7:
    local_50 = param_5[2];
    local_58 = param_5[1];
    uVar7 = param_5[6];
    uVar6 = param_5[5];
    uVar5 = param_5[4];
    uVar2 = param_5[3];
    uVar4 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
    goto LAB_004091cb;
  case 8:
    uVar2 = param_5[3];
    uVar7 = param_5[6];
    uVar6 = param_5[5];
    uVar5 = param_5[4];
    local_50 = param_5[2];
    local_58 = param_5[1];
    uVar4 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
LAB_004091cb:
    uVar1 = fprintf(param_1,pcVar3,uVar4,local_58,local_50,uVar2,uVar5,uVar6,uVar7);
    return (ulong)uVar1;
  case 9:
    local_40 = param_5[8];
    local_48 = param_5[3];
    pcVar3 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    local_50 = param_5[2];
    local_58 = param_5[1];
    uVar2 = param_5[7];
    uVar7 = param_5[6];
    uVar6 = param_5[5];
    uVar5 = param_5[4];
    uVar4 = *param_5;
    goto LAB_00409240;
  default:
    local_40 = param_5[8];
    local_48 = param_5[3];
    pcVar3 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    local_50 = param_5[2];
    local_58 = param_5[1];
    uVar2 = param_5[7];
    uVar7 = param_5[6];
    uVar6 = param_5[5];
    uVar5 = param_5[4];
    uVar4 = *param_5;
LAB_00409240:
    pcVar3 = (char *)dcgettext(0,pcVar3,5);
    uVar1 = fprintf(param_1,pcVar3,uVar4,local_58,local_50,local_48,uVar5,uVar6,uVar7,uVar2,local_40
                   );
    return (ulong)uVar1;
  }
  fprintf(param_1,pcVar3,uVar5,uVar2,uVar6,uVar7);
  return uVar8;
}


void FUN_004094d0(void)

{
  long lVar1;
  long *in_R8;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = *in_R8;
  while (lVar1 != 0) {
    lVar2 = lVar2 + 1;
    lVar1 = in_R8[lVar2];
  }
  FUN_004090e0();
  return;
}


void FUN_004094f0(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint *in_R8;
  long lVar4;
  long local_58 [11];
  
  lVar4 = 0;
  do {
    uVar1 = *in_R8;
    if (uVar1 < 0x30) {
      *in_R8 = uVar1 + 8;
      lVar3 = *(long *)((ulong)uVar1 + *(long *)(in_R8 + 4));
      local_58[lVar4] = lVar3;
    }
    else {
      plVar2 = *(long **)(in_R8 + 2);
      *(long **)(in_R8 + 2) = plVar2 + 1;
      lVar3 = *plVar2;
      local_58[lVar4] = lVar3;
    }
  } while ((lVar3 != 0) && (lVar4 = lVar4 + 1, lVar4 != 10));
  FUN_004090e0();
  return;
}


void FUN_00409550(void)

{
  long lVar1;
  undefined in_R8;
  ulong uVar2;
  undefined in_R9;
  long lVar3;
  long *plVar4;
  long local_88 [10];
  long local_38 [4];
  long local_18 [3];
  
  local_18[0] = in_R8;
  plVar4 = (long *)&stack0x00000008;
  uVar2 = 0x20;
  local_18[1] = in_R9;
  lVar3 = 0;
  do {
    if ((uint)uVar2 < 0x30) {
      lVar1 = *(long *)((long)local_38 + uVar2);
      local_88[lVar3] = lVar1;
      uVar2 = (ulong)((uint)uVar2 + 8);
    }
    else {
      lVar1 = *plVar4;
      local_88[lVar3] = lVar1;
      plVar4 = plVar4 + 1;
    }
  } while ((lVar1 != 0) && (lVar3 = lVar3 + 1, lVar3 != 10));
  FUN_004090e0();
  return;
}


void FUN_00409610(void)

{
  FILE *__stream;
  char *pcVar1;
  
  pcVar1 = (char *)dcgettext(0,"\nReport bugs to: %s\n",5);
  printf(pcVar1,"bug-findutils@gnu.org");
  pcVar1 = (char *)dcgettext(0,"%s home page: <%s>\n",5);
  printf(pcVar1,"GNU findutils","http://www.gnu.org/software/findutils/");
  __stream = stdout;
  pcVar1 = (char *)dcgettext(0,"General help using GNU software: <http://www.gnu.org/gethelp/>\n",5)
  ;
  fputs(pcVar1,__stream);
  return;
}


void FUN_00409680(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004098a0();
  }
  return;
}


void FUN_004096a0(ulong param_1,ulong param_2)

{
  if (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0) {
    FUN_00409680(SUB168(ZEXT816(param_1) * ZEXT816(param_2),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004098a0();
}


void thunk_FUN_00409680(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004098a0();
  }
  return;
}


void * FUN_004096d0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004098a0();
  }
  return pvVar1;
}


void FUN_00409710(undefined param_1,ulong param_2,ulong param_3)

{
  if (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0) {
    FUN_004096d0(param_1,SUB168(ZEXT816(param_2) * ZEXT816(param_3),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004098a0();
}


void FUN_00409730(long param_1,ulong *param_2,ulong param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  
  uVar2 = *param_2;
  if (param_1 == 0) {
    if (uVar2 == 0) {
      auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x80);
      uVar2 = (ulong)(0x80 < param_3) + SUB168(auVar1 / ZEXT816(param_3),0);
      *param_2 = uVar2;
      FUN_004096d0(0,uVar2 * param_3,SUB168(auVar1 % ZEXT816(param_3),0));
      return;
    }
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0xaaaaaaaaaaaaaaaa);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_004098a0(param_1,param_2,SUB168(auVar1 % ZEXT816(param_3),0));
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004096d0(param_1,uVar2 * param_3);
  return;
}


void FUN_004097b0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      uVar1 = 0x80;
    }
    *param_2 = uVar1;
    FUN_004096d0(0,uVar1);
    return;
  }
  if (uVar1 < 0xaaaaaaaaaaaaaaaa) {
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
    *param_2 = uVar1;
    FUN_004096d0(param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004098a0();
}


void FUN_00409800(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00409680();
  memset(__s,0,param_1);
  return;
}


void FUN_00409820(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = calloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004098a0();
}


void FUN_00409840(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00409680(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00409870(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00409680(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004098a0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_006122c0,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_004098e0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  int *piVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  byte *local_40 [2];
  
  if (0x24 < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","xstrtol.c",0x60,"xstrtoul");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = local_40;
  }
  piVar3 = __errno_location();
  *piVar3 = 0;
  bVar9 = *param_1;
  ppuVar4 = __ctype_b_loc();
  pbVar5 = param_1;
  while ((*(byte *)((long)*ppuVar4 + (ulong)bVar9 * 2 + 1) & 0x20) != 0) {
    pbVar5 = pbVar5 + 1;
    bVar9 = *pbVar5;
  }
  if (bVar9 == 0x2d) {
    return 4;
  }
  uVar6 = strtoul((char *)param_1,(char **)param_2,param_3);
  pbVar5 = *param_2;
  if (pbVar5 == param_1) {
    if ((param_5 == (char *)0x0) || (bVar9 = *param_1, bVar9 == 0)) {
      return 4;
    }
    uVar10 = 0;
    uVar6 = 1;
    pcVar7 = strchr(param_5,(int)(char)bVar9);
    if (pcVar7 == (char *)0x0) {
      return 4;
    }
  }
  else {
    if (*piVar3 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
      if (*piVar3 != 0x22) {
        return 4;
      }
    }
    if ((param_5 == (char *)0x0) || (bVar9 = *pbVar5, bVar9 == 0)) goto LAB_00409988;
    pcVar7 = strchr(param_5,(int)(char)bVar9);
    if (pcVar7 == (char *)0x0) goto switchD_00409a6e_caseD_43;
  }
  pcVar7 = strchr(param_5,0x30);
  if (pcVar7 != (char *)0x0) {
    bVar1 = pbVar5[1];
    if (bVar1 == 0x44) {
LAB_00409a76:
      iVar11 = 2;
      uVar8 = 1000;
      goto LAB_00409a60;
    }
    if (bVar1 == 0x69) {
      uVar8 = 0x400;
      iVar11 = (pbVar5[2] == 0x42) + 1 + (uint)(pbVar5[2] == 0x42);
      goto LAB_00409a60;
    }
    if (bVar1 == 0x42) goto LAB_00409a76;
    switch(bVar9) {
    case 0x42:
      lVar12 = 1;
      goto LAB_00409bfc;
    default:
      goto switchD_00409a6e_caseD_43;
    case 0x45:
      lVar12 = 1;
      uVar8 = 0x400;
      goto LAB_00409bd8;
    case 0x47:
    case 0x67:
      lVar12 = 1;
      uVar8 = 0x400;
      goto LAB_00409bab;
    case 0x4b:
    case 0x6b:
      lVar12 = 1;
      uVar8 = 0x400;
      goto LAB_00409b84;
    case 0x4d:
    case 0x6d:
      lVar12 = 1;
      uVar8 = 0x400;
      goto LAB_00409b69;
    case 0x50:
      lVar12 = 1;
      uVar8 = 0x400;
      goto LAB_00409b41;
    case 0x54:
    case 0x74:
      lVar12 = 1;
      uVar8 = 0x400;
      goto LAB_00409b19;
    case 0x59:
      lVar12 = 1;
      uVar8 = 0x400;
      goto LAB_00409af4;
    case 0x5a:
      lVar12 = 1;
      uVar8 = 0x400;
      goto LAB_00409acd;
    case 0x62:
      lVar12 = 1;
      goto LAB_00409ab7;
    case 99:
      lVar12 = 1;
      break;
    case 0x77:
      lVar12 = 1;
      goto LAB_00409a85;
    }
    goto LAB_00409a98;
  }
  iVar11 = 1;
  uVar8 = 0x400;
LAB_00409a60:
  switch(bVar9) {
  case 0x42:
    lVar12 = (long)iVar11;
LAB_00409bfc:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00409b93;
  default:
switchD_00409a6e_caseD_43:
    *param_4 = uVar6;
    return uVar10 | 2;
  case 0x45:
    lVar12 = (long)iVar11;
LAB_00409bd8:
    iVar11 = 6;
    uVar13 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar8),0);
      if (SUB168(auVar2 * ZEXT816(uVar8) >> 0x40,0) != 0) {
        uVar13 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_00409aec;
  case 0x47:
  case 0x67:
    lVar12 = (long)iVar11;
LAB_00409bab:
    if (((SUB168(ZEXT816(uVar6) * ZEXT816(uVar8) >> 0x40,0) != 0) ||
        (auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar8) & (undefined)0xffffffffffffffff) *
                  ZEXT816(uVar8), SUB168(auVar2 >> 0x40,0) != 0)) ||
       (auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816(uVar8),
       uVar6 = SUB168(auVar2,0), SUB168(auVar2 >> 0x40,0) != 0)) {
      uVar6 = 0xffffffffffffffff;
      uVar10 = 1;
    }
    break;
  case 0x4b:
  case 0x6b:
    uVar8 = (ulong)(int)uVar8;
    lVar12 = (long)iVar11;
LAB_00409b84:
    auVar2 = ZEXT816(uVar6) * ZEXT816(uVar8);
    goto joined_r0x00409b74;
  case 0x4d:
  case 0x6d:
    lVar12 = (long)iVar11;
LAB_00409b69:
    if (SUB168(ZEXT816(uVar6) * ZEXT816(uVar8) >> 0x40,0) != 0) goto LAB_00409b93;
    auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar8) & (undefined)0xffffffffffffffff) *
             ZEXT816(uVar8);
joined_r0x00409b74:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00409b93:
      uVar10 = 1;
      uVar6 = 0xffffffffffffffff;
    }
    break;
  case 0x50:
    lVar12 = (long)iVar11;
LAB_00409b41:
    iVar11 = 5;
    uVar13 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar8),0);
      if (SUB168(auVar2 * ZEXT816(uVar8) >> 0x40,0) != 0) {
        uVar13 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_00409aec;
  case 0x54:
  case 0x74:
    lVar12 = (long)iVar11;
LAB_00409b19:
    iVar11 = 4;
    uVar13 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar8),0);
      if (SUB168(auVar2 * ZEXT816(uVar8) >> 0x40,0) != 0) {
        uVar13 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_00409aec;
  case 0x59:
    lVar12 = (long)iVar11;
LAB_00409af4:
    iVar11 = 8;
    uVar13 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar8),0);
      if (SUB168(auVar2 * ZEXT816(uVar8) >> 0x40,0) != 0) {
        uVar13 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_00409aec;
  case 0x5a:
    lVar12 = (long)iVar11;
LAB_00409acd:
    iVar11 = 7;
    uVar13 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816(uVar8),0);
      if (SUB168(auVar2 * ZEXT816(uVar8) >> 0x40,0) != 0) {
        uVar13 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
LAB_00409aec:
    uVar10 = uVar10 | uVar13;
    break;
  case 0x62:
    lVar12 = (long)iVar11;
LAB_00409ab7:
    if (uVar6 >> 0x37 != 0) goto LAB_00409b93;
    uVar6 = uVar6 << 9;
    break;
  case 99:
    lVar12 = (long)iVar11;
    break;
  case 0x77:
    lVar12 = (long)iVar11;
LAB_00409a85:
    if ((long)uVar6 < 0) goto LAB_00409b93;
    uVar6 = uVar6 * 2;
  }
LAB_00409a98:
  *param_2 = pbVar5 + lVar12;
  if (pbVar5[lVar12] != 0) {
    uVar10 = uVar10 | 2;
  }
LAB_00409988:
  *param_4 = uVar6;
  return uVar10;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00409d40(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_00612678 < 0) {
    iVar1 = FUN_00409d40(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_00612678 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_00612678 = 1;
      return iVar1;
    }
    iVar1 = FUN_00409d40(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_00612678 = -1;
  }
  uVar2 = fcntl(iVar1,1);
  if ((-1 < (int)uVar2) && (iVar3 = fcntl(iVar1,2,(ulong)(uVar2 | 1)), iVar3 != -1)) {
    return iVar1;
  }
  piVar4 = __errno_location();
  iVar3 = *piVar4;
  close(iVar1);
  *piVar4 = iVar3;
  return -1;
}


void FUN_00409e80(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00409ef0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


long FUN_00409ec0(uint *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if ((*(ulong *)(param_1 + 10) < *(ulong *)(param_1 + 8) ||
       *(ulong *)(param_1 + 10) == *(ulong *)(param_1 + 8)) &&
     (lVar1 = *(long *)(param_1 + 4) - *(long *)(param_1 + 2), (*param_1 & 0x100) != 0)) {
    lVar1 = lVar1 + (*(long *)(param_1 + 0x16) - *(long *)(param_1 + 0x12));
  }
  return lVar1;
}


ulong FUN_00409ef0(FILE *param_1,__off_t param_2,int param_3)

{
  uint uVar1;
  int __fd;
  ulong uVar2;
  
  if (((param_1->_IO_read_end == param_1->_IO_read_ptr) &&
      (param_1->_IO_write_ptr == param_1->_IO_write_base)) &&
     (param_1->_IO_save_base == (char *)0x0)) {
    __fd = fileno(param_1);
    uVar2 = lseek(__fd,param_2,param_3);
    if (uVar2 != 0xffffffffffffffff) {
      param_1->_flags = param_1->_flags & 0xffffffef;
      param_1->_offset = uVar2;
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar1 = fseeko(param_1,param_2,param_3);
  return (ulong)uVar1;
}


void FUN_00409f50(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = param_2[0xc];
  iVar2 = *param_2;
  iVar3 = param_2[0xd];
  iVar8 = iVar1;
  iVar9 = iVar2;
  while (iVar3 < iVar9) {
    while( true ) {
      if (iVar3 <= iVar8) goto LAB_00409fcc;
      iVar10 = iVar9 - iVar3;
      iVar7 = iVar3 - iVar8;
      if (iVar10 <= iVar7) break;
      lVar6 = (long)iVar8;
      iVar9 = iVar9 - iVar7;
      puVar5 = (undefined *)(param_1 + lVar6 * 8);
      do {
        uVar4 = *puVar5;
        *puVar5 = puVar5[iVar9 - lVar6];
        puVar5[iVar9 - lVar6] = uVar4;
        puVar5 = puVar5 + 1;
      } while ((undefined *)(param_1 + 8 + ((ulong)(iVar7 - 1) + lVar6) * 8) != puVar5);
      if (iVar9 <= iVar3) goto LAB_00409fcc;
    }
    lVar6 = (long)iVar8;
    puVar5 = (undefined *)(param_1 + lVar6 * 8);
    do {
      uVar4 = *puVar5;
      *puVar5 = puVar5[iVar3 - lVar6];
      puVar5[iVar3 - lVar6] = uVar4;
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined *)(param_1 + 8 + ((ulong)(iVar10 - 1) + lVar6) * 8));
    iVar8 = iVar8 + iVar10;
  }
LAB_00409fcc:
  param_2[0xd] = iVar2;
  param_2[0xc] = iVar1 + (iVar2 - iVar3);
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

uint FUN_0040a030(uint param_1,undefined *param_2,char *param_3,char **param_4,int *param_5,
                 int param_6,uint *param_7,int param_8)

{
  byte bVar1;
  undefined uVar2;
  uint *puVar3;
  undefined uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  size_t sVar12;
  long **pplVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  char **ppcVar17;
  long **pplVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  byte *pbVar23;
  char **ppcVar24;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  char *local_98;
  char **local_80;
  uint local_6c;
  int local_50;
  long *local_48;
  long **local_40;
  
  bVar27 = 0;
  uVar20 = param_7[1];
  if ((int)param_1 < 1) {
    return 0xffffffff;
  }
  *(undefined *)(param_7 + 4) = 0;
  uVar7 = *param_7;
  local_98 = param_3;
  if (uVar7 == 0) {
    *param_7 = 1;
    uVar7 = 1;
LAB_0040a093:
    param_7[0xd] = uVar7;
    param_7[0xc] = uVar7;
    *(undefined *)(param_7 + 8) = 0;
    if (param_8 == 0) {
      pcVar11 = getenv("POSIXLY_CORRECT");
      if (pcVar11 == (char *)0x0) {
        param_7[0xb] = 0;
        if (*param_3 == '-') {
          pbVar23 = *(byte **)(param_7 + 8);
LAB_0040a350:
          param_7[10] = 2;
          local_98 = param_3 + 1;
          goto LAB_0040a0e3;
        }
        if (*param_3 != '+') {
          param_7[10] = 1;
          pbVar23 = *(byte **)(param_7 + 8);
          goto LAB_0040a0e3;
        }
        pbVar23 = *(byte **)(param_7 + 8);
      }
      else {
        pbVar23 = *(byte **)(param_7 + 8);
        param_7[0xb] = 1;
        if (*param_3 == '-') goto LAB_0040a350;
        if (*param_3 != '+') goto LAB_0040a0da;
      }
LAB_0040a455:
      param_7[10] = 0;
      local_98 = param_3 + 1;
    }
    else {
      param_7[0xb] = 1;
      pbVar23 = (byte *)0x0;
      if (*param_3 == '-') goto LAB_0040a350;
      if (*param_3 == '+') goto LAB_0040a455;
LAB_0040a0da:
      param_7[10] = 0;
    }
LAB_0040a0e3:
    param_7[6] = 1;
    cVar6 = *local_98;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040a093;
    pbVar23 = *(byte **)(param_7 + 8);
    cVar6 = *param_3;
    if ((cVar6 - 0x2bU & 0xfd) == 0) {
      cVar6 = param_3[1];
      local_98 = param_3 + 1;
    }
  }
  uVar7 = 0;
  if (cVar6 != ':') {
    uVar7 = uVar20;
  }
  if ((pbVar23 == (byte *)0x0) || (*pbVar23 == 0)) {
    uVar20 = *param_7;
    if (param_7[0xd] != uVar20 && (int)uVar20 <= (int)param_7[0xd]) {
      param_7[0xd] = uVar20;
    }
    if ((int)uVar20 < (int)param_7[0xc]) {
      param_7[0xc] = uVar20;
    }
    if (param_7[10] == 1) {
      uVar10 = param_7[0xd];
      if (param_7[0xc] == uVar10) {
        if (uVar20 != uVar10) {
          param_7[0xc] = uVar20;
          uVar10 = uVar20;
        }
      }
      else if (uVar20 != uVar10) {
        FUN_00409f50(param_2,param_7);
        uVar10 = *param_7;
      }
      uVar20 = uVar10;
      uVar10 = uVar20;
      if ((int)uVar20 < (int)param_1) {
        lVar15 = (long)(int)uVar20;
        do {
          if ((*(char *)param_2[lVar15] == '-') && (((char *)param_2[lVar15])[1] != '\0')) {
            uVar20 = *param_7;
            uVar10 = (uint)lVar15;
            break;
          }
          uVar20 = (uint)lVar15 + 1;
          lVar15 = lVar15 + 1;
          *param_7 = uVar20;
          uVar10 = uVar20;
        } while ((int)lVar15 < (int)param_1);
      }
      param_7[0xd] = uVar10;
    }
    bVar25 = param_1 < uVar20;
    bVar26 = param_1 == uVar20;
    if (bVar26) {
      param_1 = param_7[0xd];
      uVar20 = param_7[0xc];
LAB_0040a372:
      if (uVar20 != param_1) {
        *param_7 = uVar20;
      }
      return 0xffffffff;
    }
    lVar15 = 3;
    pbVar23 = (byte *)param_2[(int)uVar20];
    pbVar22 = pbVar23;
    pbVar19 = &DAT_0040f291;
    do {
      if (lVar15 == 0) break;
      lVar15 = lVar15 + -1;
      bVar25 = *pbVar22 < *pbVar19;
      bVar26 = *pbVar22 == *pbVar19;
      pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
    } while (bVar26);
    if ((!bVar25 && !bVar26) == bVar25) {
      uVar20 = uVar20 + 1;
      *param_7 = uVar20;
      if (param_7[0xc] == param_7[0xd]) {
        param_7[0xc] = uVar20;
      }
      else {
        bVar25 = uVar20 != param_7[0xd];
        uVar20 = param_7[0xc];
        if (bVar25) {
          FUN_00409f50(param_2,param_7);
          uVar20 = param_7[0xc];
        }
      }
      param_7[0xd] = param_1;
      *param_7 = param_1;
      goto LAB_0040a372;
    }
    if ((*pbVar23 != 0x2d) || (pbVar23[1] == 0)) {
      if (param_7[10] == 0) {
        return 0xffffffff;
      }
      *(byte **)(param_7 + 4) = pbVar23;
      *param_7 = uVar20 + 1;
      return 1;
    }
    pbVar23 = pbVar23 + (ulong)(param_4 != (char **)0x0 && pbVar23[1] == 0x2d) + 1;
    *(byte **)(param_7 + 8) = pbVar23;
  }
  if (param_4 != (char **)0x0) {
    uVar20 = *param_7;
    cVar6 = *(char *)(param_2[(int)uVar20] + 1);
    if ((cVar6 == '-') ||
       ((param_6 != 0 &&
        ((*(char *)(param_2[(int)uVar20] + 2) != '\0' ||
         (pcVar11 = strchr(local_98,(int)cVar6), pcVar11 == (char *)0x0)))))) {
      uVar16 = (ulong)(int)uVar20;
      pbVar22 = pbVar23;
      if ((*pbVar23 == 0) || (*pbVar23 == 0x3d)) {
        local_6c = 0;
      }
      else {
        do {
          pbVar22 = pbVar22 + 1;
          if (*pbVar22 == 0) break;
        } while (*pbVar22 != 0x3d);
        local_6c = (int)pbVar22 - (int)pbVar23;
      }
      pcVar11 = *param_4;
      if (pcVar11 != (char *)0x0) {
        pplVar18 = (long **)0x0;
        iVar21 = 0;
        iVar5 = -1;
        local_50 = 0;
        local_80 = (char **)0x0;
        ppcVar17 = param_4;
LAB_0040a694:
        iVar9 = strncmp(pcVar11,(char *)pbVar23,(ulong)local_6c);
        iVar8 = local_50;
        if (iVar9 == 0) {
          sVar12 = strlen(pcVar11);
          if (local_6c != (uint)sVar12) {
            if (local_80 != (char **)0x0) {
              if ((local_50 == 0) &&
                 ((((param_6 != 0 || (*(int *)(local_80 + 1) != *(int *)(ppcVar17 + 1))) ||
                   (local_80[2] != ppcVar17[2])) ||
                  (iVar8 = param_6, *(int *)(local_80 + 3) != *(int *)(ppcVar17 + 3))))) {
                pplVar13 = (long **)malloc(0x10);
                if (pplVar13 == (long **)0x0) {
                  while (pplVar18 != (long **)0x0) {
                    pplVar13 = (long **)pplVar18[1];
                    free(pplVar18);
                    pplVar18 = pplVar13;
                  }
                  local_50 = 1;
                  iVar8 = local_50;
                }
                else {
                  *pplVar13 = (long *)ppcVar17;
                  pplVar13[1] = (long *)pplVar18;
                  pplVar18 = pplVar13;
                  iVar8 = local_50;
                }
              }
              goto LAB_0040a680;
            }
            pcVar11 = ppcVar17[4];
            local_80 = ppcVar17;
            iVar5 = iVar21;
            goto joined_r0x0040a68d;
          }
          if ((local_50 != 0) || (pplVar18 != (long **)0x0)) {
            while (pplVar18 != (long **)0x0) {
              pplVar13 = (long **)pplVar18[1];
              free(pplVar18);
              pplVar18 = pplVar13;
            }
          }
          uVar20 = *param_7;
          local_80 = ppcVar17;
          goto LAB_0040a716;
        }
LAB_0040a680:
        local_50 = iVar8;
        pcVar11 = ppcVar17[4];
joined_r0x0040a68d:
        if (pcVar11 != (char *)0x0) goto LAB_0040a68f;
        uVar20 = *param_7;
        uVar16 = (ulong)(int)uVar20;
        if (((char)local_50 != '\0') || (pplVar18 != (long **)0x0)) {
          if (uVar7 != 0) {
            if (pplVar18 != (long **)0x0) {
              uVar4 = param_2[uVar16];
              uVar2 = *param_2;
              local_40 = pplVar18;
              pcVar11 = (char *)dcgettext(0,"%s: option \'%s\' is ambiguous; possibilities:",5);
              fprintf(stderr,pcVar11,uVar2,uVar4);
              pplVar18 = &local_48;
              while( true ) {
                fprintf(stderr," \'--%s\'",*local_80);
                pplVar18 = (long **)pplVar18[1];
                if (pplVar18 == (long **)0x0) break;
                local_80 = (char **)*pplVar18;
              }
              fputc(10,stderr);
            }
            else {
              if ((char)local_50 == '\0') goto LAB_0040ab51;
              uVar4 = param_2[uVar16];
              uVar2 = *param_2;
              pcVar11 = (char *)dcgettext(0,"%s: option \'%s\' is ambiguous\n",5);
              fprintf(stderr,pcVar11,uVar2,uVar4);
            }
            pcVar11 = *(char **)(param_7 + 8);
            sVar12 = strlen(pcVar11);
            *param_7 = *param_7 + 1;
            param_7[2] = 0;
            *(char **)(param_7 + 8) = pcVar11 + sVar12;
            return 0x3f;
          }
LAB_0040ab51:
          pcVar11 = *(char **)(param_7 + 8);
          sVar12 = strlen(pcVar11);
          param_7[2] = 0;
          *(char **)(param_7 + 8) = pcVar11 + sVar12;
          *param_7 = uVar20 + 1;
          while (pplVar18 != (long **)0x0) {
            pplVar13 = (long **)pplVar18[1];
            free(pplVar18);
            pplVar18 = pplVar13;
          }
          return 0x3f;
        }
        iVar21 = iVar5;
        if (local_80 != (char **)0x0) {
LAB_0040a716:
          uVar10 = uVar20 + 1;
          *param_7 = uVar10;
          if (*pbVar22 == 0) {
            if (*(int *)(local_80 + 1) == 1) {
              if ((int)param_1 <= (int)uVar10) {
                if (uVar7 != 0) {
                  pcVar11 = *local_80;
                  uVar4 = *param_2;
                  pcVar14 = (char *)dcgettext(0,"%s: option \'--%s\' requires an argument\n",5);
                  fprintf(stderr,pcVar14,uVar4,pcVar11);
                }
                pcVar11 = *(char **)(param_7 + 8);
                sVar12 = strlen(pcVar11);
                *(char **)(param_7 + 8) = pcVar11 + sVar12;
                param_7[2] = *(uint *)(local_80 + 3);
                if (*local_98 == ':') {
                  return 0x3a;
                }
                return 0x3f;
              }
              *param_7 = uVar20 + 2;
              *(undefined *)(param_7 + 4) = param_2[(int)uVar10];
            }
          }
          else {
            if (*(int *)(local_80 + 1) == 0) {
              if (uVar7 != 0) {
                pcVar11 = *local_80;
                uVar4 = *param_2;
                if (((char *)param_2[(long)(int)uVar10 + -1])[1] == '-') {
                  pcVar14 = (char *)dcgettext(0,"%s: option \'--%s\' doesn\'t allow an argument\n",5
                                             );
                  fprintf(stderr,pcVar14,uVar4,pcVar11);
                }
                else {
                  cVar6 = *(char *)param_2[(long)(int)uVar10 + -1];
                  pcVar14 = (char *)dcgettext(0,"%s: option \'%c%s\' doesn\'t allow an argument\n",5
                                             );
                  fprintf(stderr,pcVar14,uVar4,(ulong)(uint)(int)cVar6,pcVar11);
                }
              }
              pcVar11 = *(char **)(param_7 + 8);
              sVar12 = strlen(pcVar11);
              *(char **)(param_7 + 8) = pcVar11 + sVar12;
              param_7[2] = *(uint *)(local_80 + 3);
              return 0x3f;
            }
            *(byte **)(param_7 + 4) = pbVar22 + 1;
          }
          pcVar11 = *(char **)(param_7 + 8);
          sVar12 = strlen(pcVar11);
          *(char **)(param_7 + 8) = pcVar11 + sVar12;
          if (param_5 != (int *)0x0) {
            *param_5 = iVar21;
          }
          puVar3 = (uint *)local_80[2];
          uVar20 = *(uint *)(local_80 + 3);
          goto joined_r0x0040ac44;
        }
      }
      if (param_6 == 0) {
        if (uVar7 == 0) goto LAB_0040a92f;
        pbVar23 = *(byte **)(param_7 + 8);
        pcVar11 = (char *)param_2[uVar16];
        if (pcVar11[1] != '-') goto LAB_0040a8f1;
      }
      else {
        pcVar11 = (char *)param_2[(int)uVar16];
        if (pcVar11[1] != '-') {
          pbVar23 = *(byte **)(param_7 + 8);
          pcVar14 = strchr(local_98,(int)(char)*pbVar23);
          uVar16 = uVar16 & 0xffffffff;
          if (pcVar14 == (char *)0x0) {
            if (uVar7 == 0) goto LAB_0040a92f;
LAB_0040a8f1:
            cVar6 = *pcVar11;
            uVar4 = *param_2;
            pcVar11 = (char *)dcgettext(0,"%s: unrecognized option \'%c%s\'\n",5);
            fprintf(stderr,pcVar11,uVar4,(ulong)(uint)(int)cVar6,pbVar23);
            uVar16 = (ulong)*param_7;
            goto LAB_0040a92f;
          }
          goto LAB_0040a178;
        }
        if (uVar7 == 0) goto LAB_0040a92f;
        pbVar23 = *(byte **)(param_7 + 8);
      }
      uVar4 = *param_2;
      pcVar11 = (char *)dcgettext(0,"%s: unrecognized option \'--%s\'\n",5);
      fprintf(stderr,pcVar11,uVar4,pbVar23);
      uVar16 = (ulong)*param_7;
LAB_0040a92f:
      *(char **)(param_7 + 8) = "";
      *param_7 = (int)uVar16 + 1;
      param_7[2] = 0;
      return 0x3f;
    }
  }
LAB_0040a178:
  pbVar22 = pbVar23 + 1;
  *(byte **)(param_7 + 8) = pbVar22;
  bVar1 = *pbVar23;
  uVar20 = (uint)(char)bVar1;
  pcVar11 = strchr(local_98,uVar20);
  if (pbVar23[1] == 0) {
    *param_7 = *param_7 + 1;
  }
  if (((byte)(bVar1 - 0x3a) < 2) || (pcVar11 == (char *)0x0)) {
    if (uVar7 != 0) {
      uVar4 = *param_2;
      pcVar11 = (char *)dcgettext(0,"%s: invalid option -- \'%c\'\n",5);
      fprintf(stderr,pcVar11,uVar4,(ulong)uVar20);
    }
    param_7[2] = uVar20;
    return 0x3f;
  }
  if ((*pcVar11 != 'W') || (pcVar11[1] != ';')) {
    if (pcVar11[1] == ':') {
      if (pcVar11[2] == ':') {
        if (pbVar23[1] == 0) {
          *(undefined *)(param_7 + 4) = 0;
        }
        else {
          *(byte **)(param_7 + 4) = pbVar22;
          *param_7 = *param_7 + 1;
        }
      }
      else {
        uVar10 = *param_7;
        if (pbVar23[1] == 0) {
          if (param_1 == uVar10) {
            if (uVar7 != 0) {
              uVar4 = *param_2;
              pcVar11 = (char *)dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
              fprintf(stderr,pcVar11,uVar4,(ulong)uVar20);
            }
            param_7[2] = uVar20;
            uVar20 = (uint)(*local_98 != ':') * 5 + 0x3a;
          }
          else {
            *param_7 = uVar10 + 1;
            *(undefined *)(param_7 + 4) = param_2[(int)uVar10];
          }
        }
        else {
          *(byte **)(param_7 + 4) = pbVar22;
          *param_7 = uVar10 + 1;
        }
      }
      *(undefined *)(param_7 + 8) = 0;
      return uVar20;
    }
    return uVar20;
  }
  if (param_4 != (char **)0x0) {
    uVar10 = *param_7;
    if (pbVar23[1] == 0) {
      if (param_1 == uVar10) {
        if (uVar7 != 0) {
          uVar4 = *param_2;
          pcVar11 = (char *)dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
          fprintf(stderr,pcVar11,uVar4,(ulong)uVar20);
        }
        param_7[2] = uVar20;
        return (uint)(*local_98 != ':') * 5 + 0x3a;
      }
      *param_7 = uVar10 + 1;
      pbVar22 = (byte *)param_2[(int)uVar10];
      *(byte **)(param_7 + 4) = pbVar22;
    }
    else {
      *(byte **)(param_7 + 4) = pbVar22;
      *param_7 = uVar10 + 1;
    }
    *(byte **)(param_7 + 8) = pbVar22;
    bVar1 = *pbVar22;
    pbVar23 = pbVar22;
    while ((bVar1 != 0 && (bVar1 != 0x3d))) {
      pbVar23 = pbVar23 + 1;
      bVar1 = *pbVar23;
    }
    pcVar11 = *param_4;
    if (pcVar11 != (char *)0x0) {
      iVar21 = 0;
      local_6c = 0;
      ppcVar17 = (char **)0x0;
      bVar25 = false;
      do {
        iVar8 = strncmp(pcVar11,(char *)pbVar22,(long)pbVar23 - (long)pbVar22);
        ppcVar24 = ppcVar17;
        iVar5 = local_6c;
        bVar26 = bVar25;
        if (iVar8 == 0) {
          sVar12 = strlen(pcVar11);
          if (((long)pbVar23 - (long)pbVar22 & 0xffffffffU) == sVar12) goto LAB_0040abfb;
          ppcVar24 = param_4;
          iVar5 = iVar21;
          if (ppcVar17 != (char **)0x0) {
            if (((param_6 == 0) && (*(int *)(ppcVar17 + 1) == *(int *)(param_4 + 1))) &&
               (ppcVar17[2] == param_4[2])) {
              ppcVar24 = ppcVar17;
              iVar5 = local_6c;
              bVar26 = true;
              if (*(int *)(ppcVar17 + 3) == *(int *)(param_4 + 3)) {
                bVar26 = bVar25;
              }
            }
            else {
              ppcVar24 = ppcVar17;
              iVar5 = local_6c;
              bVar26 = true;
            }
          }
        }
        local_6c = iVar5;
        param_4 = param_4 + 4;
        pcVar11 = *param_4;
        iVar21 = iVar21 + 1;
        ppcVar17 = ppcVar24;
        bVar25 = bVar26;
      } while (pcVar11 != (char *)0x0);
      if (bVar26) {
        if (uVar7 != 0) {
          uVar4 = *param_2;
          pcVar11 = (char *)dcgettext(0,"%s: option \'-W %s\' is ambiguous\n",5);
          fprintf(stderr,pcVar11,uVar4,pbVar22);
          pbVar22 = *(byte **)(param_7 + 8);
        }
        sVar12 = strlen((char *)pbVar22);
        *param_7 = *param_7 + 1;
        *(byte **)(param_7 + 8) = pbVar22 + sVar12;
        return 0x3f;
      }
      param_4 = ppcVar24;
      iVar21 = local_6c;
      if (ppcVar24 != (char **)0x0) {
LAB_0040abfb:
        local_6c = iVar21;
        if (bVar1 == 0) {
          if (*(int *)(param_4 + 1) == 1) {
            uVar20 = *param_7;
            if ((int)param_1 <= (int)uVar20) {
              if (uVar7 != 0) {
                uVar4 = *param_2;
                pcVar11 = (char *)dcgettext(0,"%s: option \'-W %s\' requires an argument\n",5);
                fprintf(stderr,pcVar11,uVar4);
              }
              uVar16 = 0xffffffffffffffff;
              pcVar11 = *(char **)(param_7 + 8);
              do {
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                cVar6 = *pcVar11;
                pcVar11 = pcVar11 + (ulong)bVar27 * -2 + 1;
              } while (cVar6 != '\0');
              *(char **)(param_7 + 8) = *(char **)(param_7 + 8) + (~uVar16 - 1);
              if (*local_98 != ':') {
                return 0x3f;
              }
              return 0x3a;
            }
            *param_7 = uVar20 + 1;
            *(undefined *)(param_7 + 4) = param_2[(int)uVar20];
          }
          else {
            *(undefined *)(param_7 + 4) = 0;
          }
        }
        else {
          if (*(int *)(param_4 + 1) == 0) {
            if (uVar7 != 0) {
              pcVar11 = *param_4;
              uVar4 = *param_2;
              pcVar14 = (char *)dcgettext(0,"%s: option \'-W %s\' doesn\'t allow an argument\n",5);
              fprintf(stderr,pcVar14,uVar4,pcVar11);
              pbVar22 = *(byte **)(param_7 + 8);
            }
            sVar12 = strlen((char *)pbVar22);
            *(byte **)(param_7 + 8) = pbVar22 + sVar12;
            return 0x3f;
          }
          *(byte **)(param_7 + 4) = pbVar23 + 1;
        }
        sVar12 = strlen((char *)pbVar22);
        *(byte **)(param_7 + 8) = pbVar22 + sVar12;
        if (param_5 != (int *)0x0) {
          *param_5 = local_6c;
        }
        puVar3 = (uint *)param_4[2];
        uVar20 = *(uint *)(param_4 + 3);
joined_r0x0040ac44:
        if (puVar3 != (uint *)0x0) {
          *puVar3 = uVar20;
          return 0;
        }
        return uVar20;
      }
    }
  }
  *(undefined *)(param_7 + 8) = 0;
  return 0x57;
LAB_0040a68f:
  iVar21 = iVar21 + 1;
  ppcVar17 = ppcVar17 + 4;
  pbVar23 = *(byte **)(param_7 + 8);
  goto LAB_0040a694;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b070(void)

{
  DAT_00612680 = DAT_0061233c;
  _DAT_00612684 = DAT_00612338;
  FUN_0040a030();
  DAT_0061233c = DAT_00612680;
  DAT_00612ec8 = DAT_00612690;
  _DAT_00612334 = DAT_00612688;
  return;
}


void FUN_0040b0d0(void)

{
  FUN_0040b070();
  return;
}


void FUN_0040b0f0(void)

{
  FUN_0040b070();
  return;
}


void FUN_0040b110(void)

{
  FUN_0040a030();
  return;
}


void FUN_0040b130(void)

{
  FUN_0040b070();
  return;
}


void FUN_0040b150(void)

{
  FUN_0040a030();
  return;
}


size_t FUN_0040b170(wchar_t *param_1,char *param_2,size_t param_3,mbstate_t *param_4)

{
  size_t sVar1;
  
  if (param_2 == (char *)0x0) {
    param_3 = 1;
    param_2 = "";
    param_1 = (wchar_t *)0x0;
  }
  else if (param_3 == 0) {
    return 0xfffffffffffffffe;
  }
  sVar1 = mbrtowc(param_1,param_2,param_3,param_4);
  return sVar1;
}


ulong * FUN_0040b1a0(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_0040b1e0:
    uVar4 = (long)(int)(uint)CONCAT11(param_2,param_2) |
            (long)(int)(uint)CONCAT11(param_2,param_2) << 0x10;
    uVar4 = uVar4 | uVar4 << 0x20;
    if (7 < param_3) {
      uVar2 = *param_1 ^ uVar4;
      for (uVar2 = ~uVar2 & uVar2 + 0xfefefefefefefeff; (uVar2 & 0x8080808080808080) == 0;
          uVar2 = ~uVar2 & uVar2 + 0xfefefefefefefeff) {
        param_3 = param_3 - 8;
        param_1 = param_1 + 1;
        if (param_3 < 8) {
          if (param_3 == 0) {
            return (ulong *)0x0;
          }
          break;
        }
        uVar2 = *param_1 ^ uVar4;
      }
    }
    if (param_2 != *(char *)param_1) {
      puVar3 = (ulong *)((long)param_1 + param_3);
      do {
        param_1 = (ulong *)((long)param_1 + 1);
        if (param_1 == puVar3) {
          return (ulong *)0x0;
        }
      } while (*(char *)param_1 != param_2);
    }
  }
  else {
    cVar1 = *(char *)param_1;
    while (param_2 != cVar1) {
      param_1 = (ulong *)((long)param_1 + 1);
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return (ulong *)0x0;
      }
      if (((ulong)param_1 & 7) == 0) goto LAB_0040b1e0;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


int FUN_0040b2b0(FILE *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = __fpending();
  iVar1 = ferror(param_1);
  iVar2 = fclose(param_1);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      return 0;
    }
    if (lVar3 == 0) {
      piVar4 = __errno_location();
      return -(uint)(*piVar4 != 9);
    }
  }
  else if (iVar2 == 0) {
    piVar4 = __errno_location();
    *piVar4 = 0;
    return -1;
  }
  return -1;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_0040b320(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *__s1;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  size_t __n;
  char *__file;
  FILE *__stream;
  byte *pbVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  char *__ptr;
  bool bVar14;
  long local_d0;
  undefined local_c0;
  undefined local_b8;
  undefined auStack_80 [8];
  undefined local_78;
  
  __s1 = nl_langinfo(0xe);
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  if (DAT_006126b8 != (char *)0x0) goto LAB_0040b35a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x74;
    sVar5 = 0x66;
    __n = 0x65;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040b445:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040b466;
    }
  }
  else {
    __n = strlen(pcVar7);
    if (__n == 0) {
      sVar6 = 0xe;
    }
    else {
      if (pcVar7[__n - 1] != '/') {
        sVar6 = __n + 0xf;
        sVar5 = __n + 1;
        goto LAB_0040b445;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040b466:
      puVar13 = (undefined *)(__file + sVar5);
      *puVar13 = 0x2e74657372616863;
      *(undefined *)((long)puVar13 + 0xc) = 0x73;
      *(undefined *)(puVar13 + 1) = 0x61696c61;
      iVar2 = open(__file,0);
      if (-1 < iVar2) {
        __stream = fdopen(iVar2,"r");
        local_d0 = 0;
        if (__stream != (FILE *)0x0) {
          pcVar7 = (char *)0x0;
LAB_0040b500:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040b68c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040b500;
              if (uVar4 == 0x23) goto LAB_0040b6f1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040b69f;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined *)((long)puVar10 + 6);
              }
              lVar11 = (long)puVar13 +
                       ((-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)) - (long)&local_b8);
              puVar13 = &local_78;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined *)((long)puVar10 + 6);
              }
              local_c0 = (long)puVar13 +
                         ((-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)) - (long)&local_78);
              lVar9 = lVar11 + local_c0;
              if (local_d0 == 0) {
                pcVar7 = (char *)malloc(lVar9 + 3);
              }
              else {
                lVar9 = lVar9 + local_d0;
                pcVar7 = (char *)realloc(__ptr,lVar9 + 3);
              }
              local_d0 = lVar9 + 2;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = "";
                free(__ptr);
                fclose(__stream);
                goto LAB_0040b4a4;
              }
              uVar12 = lVar11 + 1;
              puVar13 = (undefined *)(pcVar7 + (-2 - lVar11) + (local_d0 - local_c0));
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_b8;
                    if ((uVar12 & 2) != 0) {
                      *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 2));
                    }
                  }
                }
                else {
                  *(undefined *)puVar13 = (undefined)local_b8;
                  *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 4));
                }
              }
              else {
                *puVar13 = CONCAT44(local_b8._4_4_,(undefined)local_b8);
                *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 8));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined *)((long)&local_b8 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              uVar12 = local_c0 + 1;
              puVar13 = (undefined *)(pcVar7 + (local_d0 - local_c0) + -1);
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_78;
                    if ((uVar12 & 2) != 0) {
                      *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined *)((long)auStack_80 + (uVar12 & 0xffffffff) + 6);
                    }
                  }
                }
                else {
                  *(undefined *)puVar13 = (undefined)local_78;
                  *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined *)((long)auStack_80 + (uVar12 & 0xffffffff) + 4);
                }
              }
              else {
                *puVar13 = CONCAT44(local_78._4_4_,(undefined)local_78);
                *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined *)((long)auStack_80 + (uVar12 & 0xffffffff));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined *)((long)&local_78 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              pbVar8 = (byte *)__stream->_IO_read_ptr;
              if (pbVar8 < __stream->_IO_read_end) break;
LAB_0040b68c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040b69f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040b49e;
    }
  }
  DAT_006126b8 = "";
LAB_0040b35a:
  cVar1 = *DAT_006126b8;
  pcVar7 = DAT_006126b8;
  do {
    if (cVar1 == '\0') {
LAB_0040b3b4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040b3b4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040b6f1:
  do {
    pbVar8 = (byte *)__stream->_IO_read_ptr;
    if (pbVar8 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
      uVar4 = (uint)*pbVar8;
      bVar14 = true;
    }
    else {
      uVar4 = __uflow(__stream);
      bVar14 = uVar4 != 0xffffffff;
    }
  } while ((uVar4 != 10) && (bVar14));
  if (uVar4 == 0xffffffff) goto LAB_0040b69f;
  goto LAB_0040b500;
LAB_0040b69f:
  fclose(__stream);
  if (local_d0 == 0) {
LAB_0040b49e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040b4a4:
  free(__file);
  DAT_006126b8 = pcVar7;
  goto LAB_0040b35a;
}


undefined * FUN_0040b890(ulong param_1)

{
  undefined uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_1 < 0xfffffffffffffff0) {
    puVar2 = (undefined *)malloc(param_1 + 0x10);
    puVar3 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2 + 2;
      *(undefined *)((long)puVar2 + 0xc) = 0x1415fb4a;
      uVar1 = *(undefined *)(&DAT_006126c0 + ((ulong)puVar3 % 0x101) * 8);
      *(undefined **)(&DAT_006126c0 + ((ulong)puVar3 % 0x101) * 8) = puVar3;
      *puVar2 = uVar1;
    }
    return puVar3;
  }
  return (undefined *)0x0;
}


void FUN_0040b900(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 - 4) == 0x1415fb4a)) {
    uVar1 = *(ulong *)(&DAT_006126c0 + (param_1 % 0x101) * 8);
    if (uVar1 != 0) {
      if (uVar1 == param_1) {
        puVar3 = (undefined *)(&DAT_006126c0 + (param_1 % 0x101) * 8);
      }
      else {
        do {
          uVar2 = uVar1;
          uVar1 = *(ulong *)(uVar2 - 0x10);
          if (uVar1 == 0) {
            return;
          }
        } while (param_1 != uVar1);
        puVar3 = (undefined *)(uVar2 - 0x10);
      }
      *puVar3 = *(undefined *)(param_1 - 0x10);
      free((void *)(param_1 - 0x10));
      return;
    }
  }
  return;
}


uint FUN_0040b990(wchar_t param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = wcwidth(param_1);
  if (-1 < (int)uVar1) {
    return uVar1;
  }
  iVar2 = iswcntrl(param_1);
  return (uint)(iVar2 == 0);
}


void FUN_0040b9c0(void **param_1,void **param_2)

{
  char cVar1;
  void **__src;
  void *pvVar2;
  void *__n;
  
  __src = (void **)*param_2;
  __n = param_2[1];
  if (__src == param_2 + 3) {
    pvVar2 = memcpy(param_1 + 3,__src,(size_t)__n);
    __n = param_2[1];
    *param_1 = pvVar2;
  }
  else {
    *param_1 = __src;
  }
  cVar1 = *(char *)(param_2 + 2);
  param_1[1] = __n;
  *(char *)(param_1 + 2) = cVar1;
  if (cVar1 != '\0') {
    *(undefined *)((long)param_1 + 0x14) = *(undefined *)((long)param_2 + 0x14);
  }
  return;
}


uint FUN_0040ba20(byte param_1)

{
  return *(uint *)(&DAT_0040f520 + (ulong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1;
}


size_t FUN_0040ba40(byte *param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined uVar6;
  mbstate_t local_54;
  undefined local_4c;
  byte *local_48;
  size_t local_40;
  undefined local_38;
  int local_34 [9];
  
  sVar4 = __ctype_get_mb_cur_max();
  if (sVar4 < 2) {
    sVar4 = strlen((char *)param_1);
    return sVar4;
  }
  sVar4 = 0;
  bVar1 = false;
  local_54 = (mbstate_t)0x0;
  local_48 = param_1;
  do {
    local_4c = 0;
    if (bVar1) {
LAB_0040bae7:
      sVar5 = __ctype_get_mb_cur_max();
      pbVar2 = local_48;
      uVar6 = FUN_00409040(local_48,sVar5);
      local_40 = FUN_0040b170(local_34,pbVar2,uVar6,&local_54);
      if (local_40 == 0xffffffffffffffff) {
        local_40 = 1;
        local_38 = 0;
      }
      else {
        if (local_40 != 0xfffffffffffffffe) {
          if (local_40 == 0) {
            local_40 = 1;
            if (*local_48 != 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("*iter->cur.ptr == \'\\0\'","mbuiter.h",0xb2,"mbuiter_multi_next");
            }
            if (local_34[0] != 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("iter->cur.wc == 0","mbuiter.h",0xb3,"mbuiter_multi_next");
            }
          }
          local_38 = 1;
          iVar3 = mbsinit(&local_54);
          if (iVar3 != 0) {
            bVar1 = false;
          }
          goto LAB_0040bac6;
        }
        local_40 = strlen((char *)local_48);
        local_38 = 0;
      }
    }
    else {
      if ((*(uint *)(&DAT_0040f520 + (ulong)(*local_48 >> 5) * 4) >> (*local_48 & 0x1f) & 1) == 0) {
        iVar3 = mbsinit(&local_54);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("mbsinit (&iter->state)","mbuiter.h",0x96,"mbuiter_multi_next");
        }
        bVar1 = true;
        goto LAB_0040bae7;
      }
      local_40 = 1;
      local_34[0] = (int)(char)*local_48;
      local_38 = 1;
LAB_0040bac6:
      if (local_34[0] == 0) {
        return sVar4;
      }
    }
    local_48 = local_48 + local_40;
    sVar4 = sVar4 + 1;
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0040bc43) */
/* WARNING: Removing unreachable block (ram,0x0040bc48) */

void FUN_0040bc10(void)

{
  __DT_INIT();
  return;
}


void FUN_0040bc70(void)

{
  return;
}


void FUN_0040bc80(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_006122a8);
  return;
}


undefined FUN_0040bc98(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00611e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402e61();
  return;
}

