
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00403250caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401df5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401dfa(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401dff(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e04(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00404d2acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00401e10(uint param_1,undefined *param_2)

{
  char **__argv;
  _union_1454 _Var1;
  int iVar2;
  __pid_t _Var3;
  undefined uVar4;
  undefined uVar5;
  int *piVar6;
  undefined local_158 [32];
  sigset_t local_138;
  sigaction local_b8;
  
  FUN_00403060(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  DAT_0060b2a0 = 0x7d;
  FUN_00406db0(FUN_00402f00);
LAB_00401e68:
  do {
    iVar2 = FUN_004062c0(param_1,param_2,"+k:s:v",&PTR_s_kill_after_00407820,0);
    if (iVar2 == -1) {
      if (1 < (int)(param_1 - DAT_0060b318._4_4_)) {
        DAT_0060b318._4_4_ = DAT_0060b318._4_4_ + 1;
        uVar5 = FUN_00402bf0();
        __argv = (char **)(param_2 + DAT_0060b318._4_4_);
        DAT_0060b518 = *__argv;
        if (DAT_0060b522 == '\0') {
          setpgid(0,0);
        }
        iVar2 = DAT_0060b290;
        sigemptyset(&local_b8.sa_mask);
        local_b8.__sigaction_handler.sa_handler = FUN_00402680;
        local_b8.sa_flags = 0x10000000;
        sigaction_t(0xe,&local_b8,(sigaction *)0x0);
        sigaction_t(2,&local_b8,(sigaction *)0x0);
        sigaction_t(3,&local_b8,(sigaction *)0x0);
        sigaction_t(1,&local_b8,(sigaction *)0x0);
        sigaction_t(0xf,&local_b8,(sigaction *)0x0);
        sigaction_t(iVar2,&local_b8,(sigaction *)0x0);
        signal(0x15,(__sighandler_t)0x1);
        signal(0x16,(__sighandler_t)0x1);
        sigemptyset(&local_b8.sa_mask);
        local_b8.__sigaction_handler.sa_handler = FUN_004024e0;
        local_b8.sa_flags = 0x10000000;
        sigaction_t(0x11,&local_b8,(sigaction *)0x0);
        FUN_00402620(0x11);
        DAT_0060b530 = fork();
        if (DAT_0060b530 == -1) {
          uVar5 = dcgettext(0,"fork system call failed",5);
          piVar6 = __errno_location();
          param_1 = 0x7d;
          error(0,*piVar6,uVar5);
        }
        else if (DAT_0060b530 == 0) {
          signal(0x15,(__sighandler_t)0x0);
          signal(0x16,(__sighandler_t)0x0);
          execvp(*__argv,__argv);
          piVar6 = __errno_location();
          iVar2 = *piVar6;
          uVar5 = FUN_00404c80(DAT_0060b518);
          param_1 = (iVar2 == 2) + 0x7e;
          uVar4 = dcgettext(0,"failed to run command %s",5);
          error(0,*piVar6,uVar4,uVar5);
        }
        else {
          FUN_00402620(0xe);
          FUN_004024f0(uVar5,1);
          iVar2 = DAT_0060b290;
          sigemptyset((sigset_t *)&local_b8);
          sigaddset((sigset_t *)&local_b8,0xe);
          sigaddset((sigset_t *)&local_b8,2);
          sigaddset((sigset_t *)&local_b8,3);
          sigaddset((sigset_t *)&local_b8,1);
          sigaddset((sigset_t *)&local_b8,0xf);
          sigaddset((sigset_t *)&local_b8,iVar2);
          sigaddset((sigset_t *)&local_b8,0x11);
          iVar2 = sigprocmask(0,(sigset_t *)&local_b8,&local_138);
          if (iVar2 != 0) {
            uVar5 = dcgettext(0,"warning: sigprocmask",5);
            piVar6 = __errno_location();
            error(0,*piVar6,uVar5);
          }
          while( true ) {
            _Var3 = waitpid(DAT_0060b530,(int *)&local_b8,1);
            _Var1 = local_b8.__sigaction_handler;
            if (_Var3 != 0) break;
            sigsuspend(&local_138);
          }
          if (_Var3 < 0) {
            uVar5 = dcgettext(0,"error waiting for command",5);
            piVar6 = __errno_location();
            error(0,*piVar6,uVar5);
            param_1 = 0x7d;
          }
          else {
            param_1 = local_b8.__sigaction_handler._0_4_ & 0x7f;
            if (((ulong)local_b8.__sigaction_handler.sa_handler & 0x7f) == 0) {
              param_1 = local_b8.__sigaction_handler._0_4_ >> 8 & 0xff;
            }
            else if ((char)param_1 == '\0' || (char)((char)param_1 + '\x01') < '\x01') {
              uVar5 = dcgettext(0,"unknown status from command (%d)",5);
              error(0,0,uVar5,(ulong)_Var1.sa_handler & 0xffffffff);
              param_1 = 1;
            }
            else {
              if (((ulong)local_b8.__sigaction_handler.sa_handler & 0x80) != 0) {
                uVar5 = dcgettext(0,"the monitored command dumped core",5);
                error(0,0,uVar5);
              }
              if (_DAT_0060b534 == 0) {
                iVar2 = prctl(4);
                if (iVar2 == 0) {
                  signal(param_1,(__sighandler_t)0x0);
                  FUN_00402620(param_1);
                  raise(param_1);
                }
                else {
LAB_004023c6:
                  uVar5 = dcgettext(0,"warning: disabling core dumps failed",5);
                  piVar6 = __errno_location();
                  error(0,*piVar6,uVar5);
                }
              }
              param_1 = param_1 + 0x80;
            }
          }
          if ((_DAT_0060b534 != 0) && (DAT_0060b521 == '\0')) {
            param_1 = 0x7c;
          }
        }
        return param_1;
      }
      goto LAB_00401ee9;
    }
    if (iVar2 != 0x73) {
      if (iVar2 < 0x74) {
        if (iVar2 == -0x82) {
          FUN_00402850(0);
          goto LAB_004023c6;
        }
        if (iVar2 != 0x6b) goto LAB_00401ef8;
        DAT_0060b528 = FUN_00402bf0(DAT_0060b6e0);
      }
      else if (iVar2 == 0x80) {
        DAT_0060b522 = '\x01';
      }
      else if (iVar2 == 0x81) {
        DAT_0060b521 = '\x01';
      }
      else {
        if (iVar2 != 0x76) goto LAB_00401ee9;
        DAT_0060b520 = 1;
      }
      goto LAB_00401e68;
    }
    DAT_0060b290 = FUN_00402cc0(DAT_0060b6e0,local_158);
    if (DAT_0060b290 == -1) {
LAB_00401ee9:
      do {
        iVar2 = FUN_00402850(0x7d);
INVALID_JUMP; //LAB_00401ef8:
      } while (iVar2 != -0x83);
      FUN_00405100(stdout,"timeout","GNU coreutils",PTR_DAT_0060b298,"Padraig Brady",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  } while( true );
}


void FUN_00402400(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060aff0)
            (FUN_00401e10,unaff_retaddr,&stack0x00000008,FUN_00406d40,FUN_00406da0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402438) */
/* WARNING: Removing unreachable block (ram,0x00402442) */

void FUN_0040242b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402479) */

void FUN_0040244a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004024b6) */

void FUN_00402481(void)

{
  if (DAT_0060b508 != '\0') {
    return;
  }
  FUN_0040242b();
  DAT_0060b508 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402479) */

void thunk_FUN_0040244a(void)

{
  return;
}


void FUN_004024e0(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004024f0(double param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  uint __seconds;
  timer_t local_30;
  itimerspec local_28;
  
  local_28.it_value = (timespec)FUN_00402fa0();
  local_28.it_interval.tv_sec = 0;
  local_28.it_interval.tv_nsec = 0;
  iVar1 = timer_create(0,(sigevent *)0x0,&local_30);
  if (iVar1 == 0) {
    iVar1 = timer_settime(local_30,0,&local_28,(itimerspec *)0x0);
    if (iVar1 == 0) {
      return;
    }
    if (param_2 != '\0') {
      uVar3 = dcgettext(0,"warning: timer_settime",5);
      piVar2 = __errno_location();
      error(0,*piVar2,uVar3);
    }
    timer_delete(local_30);
  }
  else if (param_2 != '\0') {
    piVar2 = __errno_location();
    if (*piVar2 != 0x26) {
      uVar3 = dcgettext(0,"warning: timer_create",5);
      error(0,*piVar2,uVar3);
    }
  }
  __seconds = 0xffffffff;
  if (param_1 < _DAT_00407920) {
    __seconds = (uint)((double)((long)param_1 & 0xffffffff) < param_1) + (int)(long)param_1;
  }
  alarm(__seconds);
  return;
}


void FUN_00402620(int param_1)

{
  int iVar1;
  undefined uVar2;
  int *piVar3;
  sigset_t sStack_88;
  
  sigemptyset(&sStack_88);
  sigaddset(&sStack_88,param_1);
  iVar1 = sigprocmask(1,&sStack_88,(sigset_t *)0x0);
  if (iVar1 != 0) {
    uVar2 = dcgettext(0,"warning: sigprocmask",5);
    piVar3 = __errno_location();
    error(0,*piVar3,uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402680(int param_1)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  undefined uVar5;
  bool bVar6;
  undefined local_38 [32];
  
  dVar1 = DAT_0060b528;
  if (param_1 == 0xe) {
    _DAT_0060b534 = 1;
    param_1 = DAT_0060b290;
  }
  if (DAT_0060b530 == 0) {
                    /* WARNING: Subroutine does not return */
    _exit(param_1 + 0x80);
  }
  if (DAT_0060b528 == _DAT_00407928) {
    iVar2 = DAT_0060b530;
    if (DAT_0060b520 == '\0') goto LAB_004026ca;
LAB_00402730:
    iVar2 = FUN_00406520(param_1,local_38);
    if (iVar2 != 0) {
      __snprintf_chk(local_38,0x13,1,0x13,&DAT_00406e46,param_1);
    }
    uVar4 = FUN_00404c80(DAT_0060b518);
    uVar5 = dcgettext(0,"sending signal %s to command %s",5);
    error(0,0,uVar5,local_38,uVar4);
  }
  else {
    piVar3 = __errno_location();
    DAT_0060b290 = 9;
    iVar2 = *piVar3;
    FUN_004024f0(dVar1,0);
    bVar6 = DAT_0060b520 != '\0';
    DAT_0060b528 = 0.0;
    *piVar3 = iVar2;
    if (bVar6) goto LAB_00402730;
  }
  iVar2 = DAT_0060b530;
  if (DAT_0060b530 == 0) {
    signal(param_1,(__sighandler_t)0x1);
  }
LAB_004026ca:
  kill(iVar2,param_1);
  if (DAT_0060b522 == '\0') {
    signal(param_1,(__sighandler_t)0x1);
    kill(0,param_1);
    if ((param_1 != 9) && (param_1 != 0x12)) {
      if (iVar2 == 0) {
        signal(0x12,(__sighandler_t)0x1);
      }
      kill(iVar2,0x12);
      signal(0x12,(__sighandler_t)0x1);
      kill(0,0x12);
      return;
    }
  }
  return;
}


void FUN_00402850(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined uVar7;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte *local_88;
  char *local_80;
  byte *local_78 [5];
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined local_28;
  undefined local_20;
  byte **ppbVar6;
  
  uVar7 = DAT_0060b550;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040288f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION] DURATION COMMAND [ARG]...\n  or:  %s [OPTION]\n",5);
  __printf_chk(1,uVar3,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Start COMMAND, and kill it if still running after DURATION.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --preserve-status\n                 exit with the same status as COMMAND, even when the\n                   command times out\n      --foreground\n                 when not running timeout directly from a shell prompt,\n                   allow COMMAND to read from the TTY and get TTY signals;\n                   in this mode, children of COMMAND will not be timed out\n  -k, --kill-after=DURATION\n                 also send a KILL signal if COMMAND is still running\n                   this long after the initial signal was sent\n  -s, --signal=SIGNAL\n                 specify the signal to be sent on timeout;\n                   SIGNAL may be a name like \'HUP\' or a number;\n                   see \'kill -l\' for a list of signals\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -v, --verbose  diagnose to stderr any signal sent upon timeout\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nDURATION is a floating point number with an optional suffix:\n\'s\' for seconds (the default), \'m\' for minutes, \'h\' for hours or \'d\' for days.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nIf the command times out, and --preserve-status is not set, then exit with\nstatus 124.  Otherwise, exit with the status of COMMAND.  If no signal\nis specified, send the TERM signal upon timeout.  The TERM signal kills\nany process that does not block or catch that signal.  It may be necessary\nto use the KILL (9) signal, since this signal cannot be caught, in which\ncase the exit status is 128+9 rather than 124.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00406e51;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x406ecb;
  local_78[1] = (byte *)0x406e63;
  local_78[2] = (byte *)0x406e79;
  local_78[3] = (byte *)0x406e83;
  local_78[4] = (byte *)0x406e92;
  local_50 = "sha2 utilities";
  local_48 = "sha384sum";
  local_40 = "sha2 utilities";
  local_38 = "sha512sum";
  local_30 = "sha2 utilities";
  local_28 = 0;
  local_20 = 0;
  ppbVar5 = &local_88;
  do {
    ppbVar6 = ppbVar5;
    ppbVar5 = ppbVar6 + 2;
    pbVar11 = *ppbVar5;
    bVar12 = false;
    bVar13 = pbVar11 == (byte *)0x0;
    if (bVar13) break;
    lVar9 = 8;
    pbVar10 = (byte *)"timeout";
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar12 = *pbVar10 < *pbVar11;
      bVar13 = *pbVar10 == *pbVar11;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
      pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
  } while ((!bVar12 && !bVar13) != bVar12);
  pcVar4 = (char *)ppbVar6[3];
  if ((byte *)pcVar4 == (byte *)0x0) {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pcVar4 = "timeout";
        goto LAB_00402bc3;
      }
    }
    pcVar4 = "timeout";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","timeout");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00402bc3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"timeout");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","timeout");
    if (pcVar4 != "timeout") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_0040288f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00402bf0(undefined param_1)

{
  char cVar1;
  int *piVar2;
  undefined uVar3;
  double extraout_XMM0_Qa;
  double local_18;
  char *local_10;
  
  cVar1 = FUN_004054d0(param_1,&local_10,&local_18,FUN_00402e70);
  if (((cVar1 != '\0') || (piVar2 = __errno_location(), *piVar2 == 0x22)) &&
     (_DAT_00407928 <= local_18)) {
    cVar1 = *local_10;
    if (cVar1 == '\0') {
      return local_18;
    }
    if (local_10[1] == '\0') {
      if (cVar1 == 'h') {
        return local_18 * _DAT_00407938;
      }
      if ('h' < cVar1) goto LAB_00402c98;
      if (cVar1 == 'd') {
        return local_18 * _DAT_00407940;
      }
    }
  }
  while( true ) {
    param_1 = FUN_00404c80(param_1);
    uVar3 = dcgettext(0,"invalid time interval %s",5);
    error(0,0,uVar3,param_1);
    cVar1 = FUN_00402850(0x7d);
    local_18 = extraout_XMM0_Qa;
LAB_00402c98:
    if (cVar1 == 'm') break;
    if (cVar1 == 's') {
      return local_18;
    }
  }
  return local_18 * _DAT_00407930;
}


uint FUN_00402cc0(char *param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined uVar5;
  undefined uVar6;
  char *__ptr;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint local_34;
  char *local_30;
  
  if ((int)*param_1 - 0x30U < 10) {
    piVar3 = __errno_location();
    *piVar3 = 0;
    lVar4 = strtol(param_1,&local_30,10);
    if (((local_30 == param_1) || (*local_30 != '\0')) ||
       ((*piVar3 != 0 || (local_34 = (uint)lVar4, (int)local_34 != lVar4)))) {
      local_34 = 0xffffffff;
      goto LAB_00402d30;
    }
    if (local_34 == 0xffffffff) goto LAB_00402d30;
    uVar8 = 0x7f;
    if (0xfe < (int)local_34) {
      uVar8 = 0xff;
    }
    uVar8 = uVar8 & local_34;
    local_34 = uVar8;
  }
  else {
    __ptr = (char *)FUN_00405470();
    cVar1 = *__ptr;
    pcVar9 = __ptr;
    while (cVar1 != '\0') {
      pcVar7 = strchr("abcdefghijklmnopqrstuvwxyz",(int)cVar1);
      if (pcVar7 != (char *)0x0) {
        *pcVar9 = cVar1 + -0x20;
      }
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    iVar2 = FUN_004063c0(__ptr,&local_34);
    if ((iVar2 != 0) &&
       ((((*__ptr != 'S' || (__ptr[1] != 'I')) || (__ptr[2] != 'G')) ||
        (iVar2 = FUN_004063c0(__ptr + 3,&local_34), iVar2 != 0)))) {
      local_34 = 0xffffffff;
      free(__ptr);
      goto LAB_00402d30;
    }
    uVar8 = local_34;
    free(__ptr);
    if ((int)uVar8 < 0) goto LAB_00402d30;
  }
  iVar2 = FUN_00406520(uVar8,param_2);
  if (iVar2 == 0) {
    return local_34;
  }
LAB_00402d30:
  uVar5 = FUN_00404c80(param_1);
  uVar6 = dcgettext(0,"%s: invalid signal",5);
  error(0,0,uVar6,uVar5);
  return 0xffffffff;
}


double FUN_00402e70(char *param_1,char **param_2)

{
  double dVar1;
  
  if (DAT_0060b538 == (__locale_t)0x0) {
    DAT_0060b538 = newlocale(0x1fbf,"C",(__locale_t)0x0);
  }
  if (DAT_0060b538 != (__locale_t)0x0) {
    dVar1 = strtod_l(param_1,param_2,DAT_0060b538);
    return dVar1;
  }
  if (param_2 != (char **)0x0) {
    *param_2 = param_1;
  }
  return 0.0;
}


void FUN_00402ee0(undefined param_1)

{
  DAT_0060b548 = param_1;
  return;
}


void FUN_00402ef0(undefined param_1)

{
  DAT_0060b540 = param_1;
  return;
}


void FUN_00402f00(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_004065f0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060b540 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060b548 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404ad0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402f7e;
    }
  }
  iVar1 = FUN_004065f0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402f7e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060b2a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00402fa0(double param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  if (param_1 <= _DAT_00407990) {
    return ZEXT816(0x8000000000000000);
  }
  if (DAT_00407998 <= param_1) {
    return CONCAT88(999999999,0x7fffffffffffffff);
  }
  dVar3 = (param_1 - (double)(long)param_1) * _DAT_004079a0;
  lVar2 = (long)dVar3;
  lVar2 = (ulong)((double)lVar2 < dVar3) + lVar2;
  lVar1 = lVar2 / 1000000000 + (long)param_1;
  lVar2 = lVar2 % 1000000000;
  if (-1 < lVar2) {
    return CONCAT88(lVar2,lVar1);
  }
  return CONCAT88(lVar2 + 1000000000,lVar1 + -1);
}


void FUN_00403060(byte *param_1)

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
      pbVar6 = (byte *)"/.libs/";
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
        pbVar6 = &DAT_004079e8;
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
  DAT_0060b550 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403100(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004066b0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004031d8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004079f9;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004079ee;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004031d8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004079f5;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004079f2;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403200(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
                  uint param_6,long param_7,char *param_8,char *param_9)

{
  byte *__s1;
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  ulong uVar9;
  ushort **ppuVar10;
  long lVar11;
  char *pcVar12;
  byte bVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  bool bVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  size_t local_a0;
  char *local_78;
  ulong local_70;
  bool local_5c;
  bool local_5b;
  wint_t local_44;
  mbstate_t local_40 [2];
  
  sVar8 = __ctype_get_mb_cur_max();
  uVar18 = param_6 & 2;
  local_5c = uVar18 != 0;
  uVar9 = param_2;
  switch(param_5) {
  case 0:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    local_5b = false;
    local_70 = 0;
    local_5c = false;
    bVar6 = false;
    local_a0 = 0;
    local_78 = (char *)0x0;
    break;
  case 2:
    if (uVar18 != 0) {
      bVar2 = true;
      bVar3 = false;
      uVar15 = 0;
      local_5b = false;
      local_70 = 0;
      local_5c = true;
      bVar6 = false;
      local_a0 = 1;
      local_78 = "\'";
      break;
    }
    bVar6 = false;
LAB_00403e51:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403a86;
    }
    bVar2 = true;
    bVar3 = false;
    uVar15 = 1;
    param_5 = 2;
    local_70 = 0;
    local_5b = false;
    local_5c = false;
    local_a0 = 1;
    local_78 = "\'";
    break;
  case 3:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    param_5 = 2;
    local_5b = false;
    local_70 = 0;
    local_5c = true;
    bVar6 = true;
    local_a0 = 1;
    local_78 = "\'";
    break;
  case 4:
    if (uVar18 == 0) {
      bVar6 = true;
      goto LAB_00403e51;
    }
  case 1:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    param_5 = 2;
    local_5b = false;
    local_70 = 0;
    local_5c = true;
    bVar6 = false;
    local_a0 = 1;
    local_78 = "\'";
    break;
  case 5:
    if (uVar18 == 0) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      local_5b = false;
      local_70 = 0;
      bVar2 = true;
      bVar3 = false;
      local_5c = false;
      uVar15 = 1;
      bVar6 = true;
      local_a0 = 1;
      local_78 = "\"";
    }
    else {
      bVar2 = true;
      bVar3 = false;
      uVar15 = 0;
      local_5b = false;
      local_70 = 0;
      local_5c = true;
      bVar6 = true;
      local_a0 = 1;
      local_78 = "\"";
    }
    break;
  case 6:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    param_5 = 5;
    local_5b = false;
    local_70 = 0;
    local_5c = true;
    bVar6 = true;
    local_a0 = 1;
    local_78 = "\"";
    break;
  case 7:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    local_5b = false;
    local_70 = 0;
    local_5c = false;
    bVar6 = true;
    local_a0 = 0;
    local_78 = (char *)0x0;
    break;
  case 8:
  case 9:
  case 10:
    if (param_5 != 10) {
      param_8 = (char *)FUN_00403100(&DAT_004079fd,param_5);
      param_9 = (char *)FUN_00403100(&DAT_00408bd7);
    }
    uVar15 = 0;
    if (uVar18 == 0) {
      cVar14 = *param_8;
      while (cVar14 != '\0') {
        if (uVar15 < param_2) {
          param_1[uVar15] = cVar14;
        }
        uVar15 = uVar15 + 1;
        cVar14 = param_8[uVar15];
      }
    }
    local_a0 = strlen(param_9);
    bVar2 = true;
    bVar3 = false;
    local_78 = param_9;
    local_5b = false;
    local_70 = 0;
    bVar6 = true;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_00403298:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004032a8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403a28;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004039a0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004039b2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040381e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004036b5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004039b2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004039b2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004039b2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004036b5;
      case 0xc:
switchD_004039b2_caseD_c:
        bVar17 = 0x66;
LAB_004036b5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403608;
        }
LAB_004036c0:
        bVar23 = false;
        goto LAB_0040347b;
      case 0xd:
        bVar20 = false;
switchD_00403398_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004035d0;
      case 0x20:
        bVar25 = false;
LAB_004039fa:
        uVar19 = 0x20;
        goto LAB_004039c2;
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
        bVar20 = false;
switchD_00403398_caseD_21:
        bVar25 = false;
        goto LAB_004035db;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004039da:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004033e8;
        }
        bVar23 = false;
        goto LAB_004033ff;
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
        bVar25 = false;
LAB_004039c2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403401;
      case 0x27:
        bVar20 = false;
        goto switchD_0040381e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040381e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403398_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040381e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004035f7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004039a0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403398_caseD_0;
      default:
        goto switchD_0040381e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004036c0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004039b2_caseD_9;
      case 10:
        goto switchD_004039b2_caseD_a;
      case 0xb:
        goto switchD_004039b2_caseD_b;
      case 0xc:
        goto switchD_004039b2_caseD_c;
      case 0xd:
        goto switchD_00403398_caseD_d;
      case 0x20:
        goto LAB_004039fa;
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
        goto switchD_00403398_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004039da;
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
        goto LAB_004039c2;
      case 0x27:
        goto switchD_0040381e_caseD_27;
      case 0x3f:
        goto switchD_0040381e_caseD_3f;
      case 0x5c:
        goto switchD_00403398_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040381e_caseD_7b;
      }
      goto LAB_00403442;
    }
    goto LAB_0040361a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004039b2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403398_caseD_0:
        bVar26 = param_5 == 2;
        bVar24 = (bool)((bVar3 ^ 1U) & bVar26);
        if (bVar24) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x27;
          }
          if (uVar15 + 1 < uVar9) {
            param_1[uVar15 + 1] = 0x24;
          }
          if (uVar15 + 2 < uVar9) {
            param_1[uVar15 + 2] = 0x27;
          }
          uVar16 = uVar15 + 3;
          bVar3 = bVar24;
          if (uVar9 <= uVar15 + 3) {
            uVar16 = uVar15 + 4;
            bVar23 = false;
            bVar17 = 0x30;
            bVar4 = bVar24;
            goto LAB_004034f8;
          }
LAB_0040373a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040373a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004034f8;
        }
        uVar19 = 0x30;
        if ((uVar22 + 1 < param_4) && ((byte)(param_3[uVar22 + 1] - 0x30U) < 10)) {
          if (uVar16 < uVar9) {
            param_1[uVar16] = 0x30;
          }
          if (uVar15 + 2 < uVar9) {
            param_1[uVar15 + 2] = 0x30;
          }
          uVar16 = uVar15 + 3;
          uVar19 = 0x30;
        }
LAB_00403779:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004034f8;
        goto LAB_00403401;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040360c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004033e8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004032a8;
  default:
switchD_0040381e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406340(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040412a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404267;
          goto LAB_00404257;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040360c;
            }
            pcVar12 = pcVar12 + 1;
          } while (param_3 + uVar1 + lVar11 != pcVar12);
        }
        iVar7 = iswprint(local_44);
        if (iVar7 == 0) {
          bVar23 = false;
        }
        uVar21 = uVar21 + lVar11;
        iVar7 = mbsinit(local_40);
      } while (iVar7 == 0);
      bVar25 = (bool)((bVar23 ^ 1U) & bVar6);
      goto LAB_0040412a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004037f4;
  case 7:
    bVar25 = param_5 == 2;
    uVar19 = 7;
    bVar13 = 0x61;
    break;
  case 8:
    bVar25 = param_5 == 2;
    uVar19 = 8;
    bVar13 = 0x62;
    break;
  case 9:
    uVar19 = 9;
    bVar13 = 0x74;
    goto LAB_00403832;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403832;
  case 0xb:
    bVar25 = param_5 == 2;
    uVar19 = 0xb;
    bVar13 = 0x76;
    break;
  case 0xc:
    bVar25 = param_5 == 2;
    uVar19 = 0xc;
    bVar13 = 0x66;
    break;
  case 0xd:
    uVar19 = 0xd;
    bVar13 = 0x72;
LAB_00403832:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040384a:
      param_5 = 2;
      goto LAB_0040360c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004033d6;
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
    bVar23 = false;
LAB_004033d6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040384a;
    goto LAB_004033e8;
  case 0x23:
  case 0x7e:
LAB_004033cd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004033d6;
    goto LAB_004035db;
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
    goto switchD_0040381e_caseD_25;
  case 0x27:
switchD_0040381e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004033e8;
    }
    if (!local_5c) {
      if ((uVar9 == 0) || (uVar19 = 0, uVar21 = uVar9, local_70 != 0)) {
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x27;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = 0x5c;
        }
        uVar19 = uVar9;
        uVar21 = local_70;
        if (uVar15 + 2 < uVar9) {
          param_1[uVar15 + 2] = 0x27;
        }
      }
      uVar16 = uVar15 + 3;
      bVar17 = 0x27;
      uVar9 = uVar19;
      local_70 = uVar21;
      bVar24 = false;
      bVar4 = false;
      goto LAB_004034f8;
    }
    goto LAB_0040360c;
  case 0x3f:
switchD_0040381e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004034f8;
      }
      goto LAB_0040360c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004033e8;
    }
    if (((((param_6 & 4) != 0) && (uVar21 = uVar22 + 2, uVar21 < param_4)) &&
        (param_3[uVar22 + 1] == '?')) &&
       ((uVar19 = (ulong)(byte)param_3[uVar21], (byte)param_3[uVar21] < 0x3f &&
        ((0x7000a38200000000U >> (uVar19 & 0x3f) & 1) != 0)))) {
      if (!local_5c) {
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x3f;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = 0x22;
        }
        if (uVar15 + 2 < uVar9) {
          param_1[uVar15 + 2] = 0x22;
        }
        if (uVar15 + 3 < uVar9) {
          param_1[uVar15 + 3] = 0x3f;
        }
        uVar16 = uVar15 + 4;
        bVar26 = false;
        uVar22 = uVar21;
        bVar24 = false;
        goto LAB_00403779;
      }
      goto LAB_0040361a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004033e8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403398_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403514;
    }
    if (local_5c) goto LAB_0040360c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403514;
  case 0x7b:
  case 0x7d:
switchD_0040381e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_004033cd;
    goto LAB_004035db;
  }
LAB_004035d0:
  if (!bVar6) {
LAB_004035db:
    bVar23 = false;
    goto LAB_004033e8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004035f7;
LAB_00403a28:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040360c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040361a:
    uVar9 = FUN_00403200(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004042fd:
    uVar22 = uVar15;
    if (((local_78 != (char *)0x0) && (bVar23)) && (cVar14 = *local_78, cVar14 != '\0')) {
      do {
        if (uVar22 < uVar9) {
          param_1[uVar22] = cVar14;
        }
        uVar22 = uVar22 + 1;
        cVar14 = local_78[uVar22 - uVar15];
      } while (cVar14 != '\0');
    }
    if (uVar22 < uVar9) {
      param_1[uVar22] = 0;
    }
    return uVar22;
  }
  if (bVar2) {
    uVar9 = FUN_00403200(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004042fd;
LAB_00403a86:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403298;
  while (__s1[uVar21] != 0) {
LAB_00404257:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404267:
  bVar23 = false;
LAB_0040412a:
  if (1 < uVar21) {
LAB_00403cee:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040360c;
        bVar26 = (bool)(bVar26 & (bVar4 ^ 1U));
        if (bVar26) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x27;
          }
          if (uVar15 + 1 < uVar9) {
            param_1[uVar15 + 1] = 0x24;
          }
          if (uVar15 + 2 < uVar9) {
            param_1[uVar15 + 2] = 0x27;
          }
          uVar15 = uVar15 + 3;
          bVar4 = bVar26;
        }
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x5c;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = (char)(uVar19 >> 6) + '0';
        }
        if (uVar15 + 2 < uVar9) {
          param_1[uVar15 + 2] = ((byte)(uVar19 >> 3) & 7) + 0x30;
        }
        uVar22 = uVar16 + 1;
        uVar15 = uVar15 + 3;
        bVar17 = (bVar17 & 7) + 0x30;
        bVar26 = bVar25;
        if (uVar21 <= uVar22) goto LAB_0040348d;
      }
      else {
        bVar3 = (bool)((bVar26 ^ 1U) & bVar4);
        if (bVar20) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x5c;
          }
          uVar15 = uVar15 + 1;
        }
        uVar22 = uVar16 + 1;
        if (uVar21 <= uVar22) goto LAB_00403514;
        if (bVar3) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x27;
          }
          if (uVar15 + 1 < uVar9) {
            param_1[uVar15 + 1] = 0x27;
          }
          uVar15 = uVar15 + 2;
          bVar20 = false;
          bVar4 = false;
        }
        else {
          bVar20 = false;
        }
      }
      uVar16 = uVar16 + 1;
      if (uVar15 < uVar9) {
        param_1[uVar15] = bVar17;
      }
      uVar19 = (ulong)(byte)param_3[uVar16];
      uVar15 = uVar15 + 1;
    } while( true );
  }
LAB_004037f4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00403cee;
  }
switchD_0040381e_caseD_25:
  bVar25 = param_5 == 2;
LAB_004033e8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004033ff:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403401:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004034f8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004034f8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403514:
      if (bVar3) {
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x27;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = 0x27;
        }
        uVar15 = uVar15 + 2;
        bVar4 = false;
      }
      goto LAB_0040348d;
    }
  }
joined_r0x004035f7:
  if (local_5c) {
LAB_00403608:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040360c;
  }
LAB_00403442:
  bVar25 = (bool)((bVar3 ^ 1U) & bVar25);
  if (bVar25) {
    if (uVar15 < uVar9) {
      param_1[uVar15] = 0x27;
    }
    if (uVar15 + 1 < uVar9) {
      param_1[uVar15 + 1] = 0x24;
    }
    if (uVar15 + 2 < uVar9) {
      param_1[uVar15 + 2] = 0x27;
    }
    uVar15 = uVar15 + 3;
    bVar3 = bVar25;
  }
LAB_0040347b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040348d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004032a8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404430(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined *)PTR_DAT_0060b2f8;
  if (DAT_0060b310 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405490();
    }
    if (PTR_DAT_0060b2f8 == &DAT_0060b300) {
      puVar8 = (undefined *)FUN_004052a0(0);
      uVar6 = PTR_DAT_0060b308._4_4_;
      uVar5 = PTR_DAT_0060b308._0_4_;
      uVar3 = _UNK_0060b304;
      PTR_DAT_0060b2f8 = (undefined *)puVar8;
      *puVar8 = _DAT_0060b300;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_004052a0(PTR_DAT_0060b2f8);
      PTR_DAT_0060b2f8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060b310 * 4,0,(long)((param_1 + 1) - DAT_0060b310) << 4);
    DAT_0060b310 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403200(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060b560) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00405240(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403200(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004045d0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b660;
  }
  FUN_00405440(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404610(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b660;
  }
  return *param_1;
}


void FUN_00404620(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b660;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404630(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b660;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00404670(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b660;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404690(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b660;
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


void FUN_004046c0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060b660;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403200(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404740(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060b660;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403200(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00405240(lVar3 + 1);
  FUN_00403200(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404830(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404740(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404840(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060b2f8;
  if (1 < DAT_0060b310) {
    ppvVar2 = (void **)(PTR_DAT_0060b2f8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060b2f8 + (ulong)(DAT_0060b310 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060b560) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060b300 = 0x100;
    PTR_DAT_0060b308 = &DAT_0060b560;
  }
  if (__ptr_00 != &DAT_0060b300) {
    free(__ptr_00);
    PTR_DAT_0060b2f8 = &DAT_0060b300;
  }
  DAT_0060b310 = 1;
  return;
}


void FUN_004048e0(undefined param_1,undefined param_2)

{
  FUN_00404430(param_1,param_2,0xffffffffffffffff,&DAT_0060b660);
  return;
}


void FUN_00404900(void)

{
  FUN_00404430();
  return;
}


void FUN_00404910(undefined param_1)

{
  FUN_00404430(0,param_1,0xffffffffffffffff,&DAT_0060b660);
  return;
}


void FUN_00404930(undefined param_1,undefined param_2)

{
  FUN_00404430(0,param_1,param_2,&DAT_0060b660);
  return;
}


void FUN_00404950(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404430(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004049c0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00404430(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404a30(undefined param_1,undefined param_2)

{
  FUN_00404950(0,param_1,param_2);
  return;
}


void FUN_00404a40(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004049c0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404a50(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060b690;
  local_48 = _DAT_0060b660;
  uStack_40 = uRam000000000060b668;
  local_38 = _DAT_0060b670;
  uStack_30 = uRam000000000060b678;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060b680;
  uStack_20 = uRam000000000060b688;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404430(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404ac0(undefined param_1,char param_2)

{
  FUN_00404a50(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404ad0(undefined param_1)

{
  FUN_00404a50(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404af0(undefined param_1,undefined param_2)

{
  FUN_00404a50(param_1,param_2,0x3a);
  return;
}


void FUN_00404b00(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404430(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404b70(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060b668;
  local_38 = _DAT_0060b670;
  uStack_30 = uRam000000000060b678;
  local_28 = _DAT_0060b680;
  lStack_20 = uRam000000000060b688;
  local_18 = DAT_0060b690;
  local_48 = CONCAT44((int)((ulong)_DAT_0060b660 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404430(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404be0(void)

{
  FUN_00404b70();
  return;
}


void FUN_00404bf0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404b70(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404c10(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00404b70(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404c30(void)

{
  FUN_00404430();
  return;
}


void FUN_00404c40(undefined param_1,undefined param_2)

{
  FUN_00404430(0,param_1,param_2,&DAT_0060b2c0);
  return;
}


void FUN_00404c60(undefined param_1,undefined param_2)

{
  FUN_00404430(param_1,param_2,0xffffffffffffffff,&DAT_0060b2c0);
  return;
}


void FUN_00404c80(undefined param_1)

{
  FUN_00404430(0,param_1,0xffffffffffffffff,&DAT_0060b2c0);
  return;
}


undefined
FUN_00404ca0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
            undefined param_6)

{
  undefined uVar1;
  char *pcVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined local_58;
  undefined local_50;
  undefined local_48;
  
  if (param_2 == 0) {
    __fprintf_chk(param_1,1,"%s %s\n",param_3,param_4);
  }
  else {
    __fprintf_chk(param_1,1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar1 = dcgettext(0,&DAT_0040874b,5);
  __fprintf_chk(param_1,1,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7e1);
  pcVar2 = (char *)dcgettext(0,
                             "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                             ,5);
  fputs_unlocked(pcVar2,param_1);
  switch(param_6) {
  case 0:
                    /* WARNING: Subroutine does not return */
    abort();
  case 1:
    uVar1 = *param_5;
    uVar4 = dcgettext(0,"Written by %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar4,uVar1);
    return uVar1;
  case 2:
    uVar1 = param_5[1];
    uVar4 = *param_5;
    uVar5 = dcgettext(0,"Written by %s and %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar5,uVar4,uVar1);
    return uVar1;
  case 3:
    uVar1 = param_5[2];
    uVar4 = param_5[1];
    uVar5 = *param_5;
    uVar6 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar6,uVar5,uVar4,uVar1);
    return uVar1;
  case 4:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    goto LAB_00404f1c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00404f1c:
    __fprintf_chk(param_1,1,uVar7,uVar6,uVar5,uVar4);
    return uVar1;
  case 6:
    local_58 = param_5[1];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar1 = param_5[2];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    goto LAB_00404fb9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00404fb9:
    uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_58,uVar1,uVar6,uVar5,uVar4);
    return uVar1;
  case 8:
    local_48 = param_5[7];
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    goto LAB_00404d9a;
  case 9:
    local_48 = param_5[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar7 = *param_5;
    break;
  default:
    local_48 = param_5[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar7 = *param_5;
  }
  uVar3 = dcgettext(0,pcVar2,5);
LAB_00404d9a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405080(void)

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
  FUN_00404ca0();
  return;
}


void FUN_004050a0(void)

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
  FUN_00404ca0();
  return;
}


void FUN_00405100(void)

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
  FUN_00404ca0();
  return;
}


void FUN_004051c0(void)

{
  FILE *__stream;
  undefined uVar1;
  char *__s;
  
  uVar1 = dcgettext(0,"\nReport bugs to: %s\n",5);
  __printf_chk(1,uVar1,"bug-coreutils@gnu.org");
  uVar1 = dcgettext(0,"%s home page: <%s>\n",5);
  __printf_chk(1,uVar1,"GNU coreutils","https://www.gnu.org/software/coreutils/");
  __stream = stdout;
  __s = (char *)dcgettext(0,"General help using GNU software: <https://www.gnu.org/gethelp/>\n",5);
  fputs_unlocked(__s,__stream);
  return;
}


void FUN_00405240(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405490();
  }
  return;
}


void FUN_00405260(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00405240();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405490();
}


void thunk_FUN_00405240(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405490();
  }
  return;
}


void * FUN_004052a0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405490();
  }
  return pvVar1;
}


void FUN_004052e0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004052a0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405490();
}


void FUN_00405310(long param_1,ulong *param_2,ulong param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (param_1 == 0) {
    if (uVar2 == 0) {
      uVar2 = (ulong)(0x80 < param_3) +
              SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(param_3),0);
    }
    uVar3 = (ulong)(SUB168(ZEXT816(uVar2) * ZEXT816(param_3) >> 0x40,0) != 0);
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040536b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040536b:
                    /* WARNING: Subroutine does not return */
      FUN_00405490(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004052a0(param_1,uVar2 * param_3);
  return;
}


void FUN_004053a0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004052a0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004053ea;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004053ea:
                    /* WARNING: Subroutine does not return */
      FUN_00405490();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004052a0(param_1,uVar1);
  return;
}


void FUN_004053f0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00405240();
  memset(__s,0,param_1);
  return;
}


void FUN_00405410(size_t param_1,ulong param_2)

{
  void *pvVar1;
  
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    pvVar1 = calloc(param_1,param_2);
    if (pvVar1 != (void *)0x0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405490();
}


void FUN_00405440(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00405240(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405470(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00405240(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405490(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060b2a0,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004054d0(char *param_1,char **param_2,double *param_3,code *param_4)

{
  int *piVar1;
  bool bVar2;
  double dVar3;
  char *local_30;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  dVar3 = (double)(*param_4)(param_1,&local_30);
  if (local_30 == param_1) {
    bVar2 = false;
LAB_00405529:
    if (param_2 == (char **)0x0) goto LAB_00405532;
  }
  else {
    if (param_2 == (char **)0x0) {
      bVar2 = false;
      if (*local_30 != '\0') goto LAB_00405532;
      if (dVar3 == _DAT_00407928) {
        bVar2 = true;
        goto LAB_00405532;
      }
LAB_00405521:
      bVar2 = *piVar1 != 0x22;
      goto LAB_00405529;
    }
    bVar2 = true;
    if (dVar3 != _DAT_00407928) goto LAB_00405521;
  }
  *param_2 = local_30;
LAB_00405532:
  *param_3 = dVar3;
  return bVar2;
}


void FUN_00405570(long param_1,int *param_2)

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
  
  iVar1 = param_2[0xb];
  iVar2 = *param_2;
  iVar3 = param_2[0xc];
  iVar8 = iVar1;
  iVar9 = iVar2;
  while (iVar3 < iVar9) {
    while( true ) {
      if (iVar3 <= iVar8) goto LAB_004055ec;
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
      if (iVar9 <= iVar3) goto LAB_004055ec;
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
LAB_004055ec:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405650(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
                int param_6,int *param_7,int param_8,undefined param_9)

{
  char cVar1;
  undefined uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined uVar8;
  undefined uVar9;
  char **ppcVar10;
  char *pcVar11;
  char **ppcVar12;
  char *pcVar13;
  char *__s1;
  FILE *__stream;
  ulong uVar14;
  size_t sVar15;
  char *__s1_00;
  long lVar16;
  char *local_70;
  uint local_44;
  
  pcVar13 = *(char **)(param_7 + 8);
  cVar1 = *pcVar13;
  pcVar11 = pcVar13;
  if ((cVar1 == '=') || (cVar1 == '\0')) {
    sVar15 = 0;
  }
  else {
    do {
      pcVar11 = pcVar11 + 1;
      if (*pcVar11 == '\0') break;
    } while (*pcVar11 != '=');
    sVar15 = (long)pcVar11 - (long)pcVar13;
  }
  uVar14 = 0;
  __s1 = *param_4;
  ppcVar10 = param_4;
  __s1_00 = __s1;
  if (__s1 != (char *)0x0) {
    while( true ) {
      iVar5 = strncmp(__s1_00,pcVar13,sVar15);
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405870;
      ppcVar10 = ppcVar10 + 4;
      __s1_00 = *ppcVar10;
      iVar5 = (int)uVar14 + 1;
      if (__s1_00 == (char *)0x0) break;
      uVar14 = (ulong)iVar5;
    }
    lVar16 = 0;
    ppcVar10 = (char **)0x0;
    local_44 = 0xffffffff;
    bVar3 = false;
    bVar4 = false;
    local_70 = (char *)0x0;
    ppcVar12 = param_4;
    do {
      iVar6 = strncmp(__s1,pcVar13,sVar15);
      if (iVar6 == 0) {
        if (ppcVar10 == (char **)0x0) {
          local_44 = (uint)lVar16;
          ppcVar10 = ppcVar12;
        }
        else if (((((param_6 != 0) || (*(int *)(ppcVar10 + 1) != *(int *)(ppcVar12 + 1))) ||
                  (ppcVar10[2] != ppcVar12[2])) ||
                 (*(int *)(ppcVar10 + 3) != *(int *)(ppcVar12 + 3))) && (!bVar3)) {
          if (param_8 == 0) {
            bVar3 = true;
            if (local_70 == (char *)0x0) goto LAB_004057b0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_004057b0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_004057b0:
      ppcVar12 = ppcVar12 + 4;
      __s1 = *ppcVar12;
      lVar16 = lVar16 + 1;
    } while (__s1 != (char *)0x0);
    if ((local_70 != (char *)0x0) || (bVar3)) {
      if (param_8 != 0) {
        if (bVar3) {
          uVar2 = *param_2;
          uVar8 = dcgettext(0,"%s: option \'%s%s\' is ambiguous\n",5);
          __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
          pcVar13 = *(char **)(param_7 + 8);
        }
        else {
          flockfile(stderr);
          uVar2 = *(undefined *)(param_7 + 8);
          uVar8 = *param_2;
          uVar9 = dcgettext(0,"%s: option \'%s%s\' is ambiguous; possibilities:",5);
          __fprintf_chk(stderr,1,uVar9,uVar8,param_9,uVar2);
          pcVar13 = local_70;
          __stream = stderr;
          do {
            if (*pcVar13 != '\0') {
              __fprintf_chk(__stream,1,&DAT_00408bd1,param_9,*param_4);
              __stream = stderr;
            }
            pcVar13 = pcVar13 + 1;
            param_4 = param_4 + 4;
          } while (local_70 + uVar14 + 1 != pcVar13);
          fputc(10,__stream);
          funlockfile(stderr);
          pcVar13 = *(char **)(param_7 + 8);
        }
      }
      if (bVar4) {
        free(local_70);
      }
      sVar15 = strlen(pcVar13);
      *(char **)(param_7 + 8) = pcVar13 + sVar15;
      *param_7 = *param_7 + 1;
      param_7[2] = 0;
      return 0x3f;
    }
    if (ppcVar10 != (char **)0x0) {
      uVar14 = (ulong)local_44;
LAB_00405870:
      iVar6 = *param_7;
      *(undefined *)(param_7 + 8) = 0;
      iVar5 = iVar6 + 1;
      *param_7 = iVar5;
      if (*pcVar11 == '\0') {
        if (*(int *)(ppcVar10 + 1) == 1) {
          if (param_1 <= iVar5) {
            if (param_8 != 0) {
              pcVar13 = *ppcVar10;
              uVar2 = *param_2;
              uVar8 = dcgettext(0,"%s: option \'%s%s\' requires an argument\n",5);
              __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
            }
            param_7[2] = *(int *)(ppcVar10 + 3);
            return (uint)(*param_3 != ':') * 5 + 0x3a;
          }
          *param_7 = iVar6 + 2;
          *(undefined *)(param_7 + 4) = param_2[iVar5];
        }
      }
      else {
        if (*(int *)(ppcVar10 + 1) == 0) {
          if (param_8 != 0) {
            pcVar13 = *ppcVar10;
            uVar2 = *param_2;
            uVar8 = dcgettext(0,"%s: option \'%s%s\' doesn\'t allow an argument\n",5);
            __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
          }
          param_7[2] = *(int *)(ppcVar10 + 3);
          return 0x3f;
        }
        *(char **)(param_7 + 4) = pcVar11 + 1;
      }
      if (param_5 != (undefined *)0x0) {
        *param_5 = (int)uVar14;
      }
      if ((int *)ppcVar10[2] == (int *)0x0) {
        return *(int *)(ppcVar10 + 3);
      }
      *(int *)ppcVar10[2] = *(int *)(ppcVar10 + 3);
      return 0;
    }
  }
  if (((param_6 != 0) && (*(char *)(param_2[*param_7] + 1) != '-')) &&
     (pcVar11 = strchr(param_3,(int)cVar1), pcVar11 != (char *)0x0)) {
    return -1;
  }
  if (param_8 != 0) {
    uVar2 = *param_2;
    uVar8 = dcgettext(0,"%s: unrecognized option \'%s%s\'\n",5);
    __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
  }
  *(undefined *)(param_7 + 8) = 0;
  *param_7 = *param_7 + 1;
  param_7[2] = 0;
  return 0x3f;
}


uint FUN_00405c70(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
                 ulong param_6,uint *param_7,int param_8)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined *puVar15;
  
  bVar14 = 0;
  uVar3 = param_7[1];
  if ((int)param_1 < 1) {
    return 0xffffffff;
  }
  uVar11 = *param_7;
  *(undefined *)(param_7 + 4) = 0;
  if (uVar11 == 0) {
    *param_7 = 1;
    uVar11 = 1;
LAB_00405cba:
    param_7[0xc] = uVar11;
    param_7[0xb] = uVar11;
    *(undefined *)(param_7 + 8) = 0;
    if (*param_3 == '-') {
      param_7[10] = 2;
      param_3 = param_3 + 1;
      pbVar8 = (byte *)0x0;
    }
    else if (*param_3 == '+') {
      param_7[10] = 0;
      param_3 = param_3 + 1;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)0x0;
      if (param_8 == 0) {
        pcVar4 = getenv("POSIXLY_CORRECT");
        param_6 = param_6 & 0xffffffff;
        if (pcVar4 == (char *)0x0) {
          param_7[10] = 1;
          pbVar8 = *(byte **)(param_7 + 8);
          goto LAB_00405dbd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00405dbd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00405dc8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00405d38;
LAB_00405ddc:
    if (*pbVar8 == 0) goto LAB_00405d38;
  }
  else {
    if (param_7[6] == 0) goto LAB_00405cba;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00405dc8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00405ddc;
LAB_00405d38:
    uVar11 = *param_7;
    if (param_7[0xc] != uVar11 && (int)uVar11 <= (int)param_7[0xc]) {
      param_7[0xc] = uVar11;
    }
    if ((int)uVar11 < (int)param_7[0xb]) {
      param_7[0xb] = uVar11;
    }
    if (param_7[10] == 1) {
      uVar7 = param_7[0xc];
      if (param_7[0xb] == uVar7) {
        if (uVar11 != uVar7) {
          param_7[0xb] = uVar11;
          uVar7 = uVar11;
        }
      }
      else if (uVar11 != uVar7) {
        FUN_00405570(param_2,param_7);
        param_6 = param_6 & 0xffffffff;
        uVar7 = *param_7;
      }
      uVar11 = uVar7;
      uVar7 = uVar11;
      if ((int)uVar11 < (int)param_1) {
        lVar6 = (long)(int)uVar11;
        do {
          if ((*(char *)param_2[lVar6] == '-') && (((char *)param_2[lVar6])[1] != '\0')) {
            uVar11 = *param_7;
            uVar7 = (uint)lVar6;
            break;
          }
          uVar11 = (uint)lVar6 + 1;
          lVar6 = lVar6 + 1;
          *param_7 = uVar11;
          uVar7 = uVar11;
        } while ((int)lVar6 < (int)param_1);
      }
      param_7[0xc] = uVar7;
    }
    bVar12 = param_1 < uVar11;
    bVar13 = param_1 == uVar11;
    if (bVar13) {
      param_1 = param_7[0xc];
      uVar11 = param_7[0xb];
LAB_00405ea6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00408be9;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar12 = *pbVar9 < *pbVar10;
      bVar13 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + (ulong)bVar14 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
    if ((!bVar12 && !bVar13) == bVar12) {
      uVar11 = uVar11 + 1;
      *param_7 = uVar11;
      if (param_7[0xb] == param_7[0xc]) {
        param_7[0xb] = uVar11;
      }
      else {
        bVar12 = uVar11 != param_7[0xc];
        uVar11 = param_7[0xb];
        if (bVar12) {
          FUN_00405570(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00405ea6;
    }
    if ((*pbVar8 != 0x2d) || (bVar14 = pbVar8[1], bVar14 == 0)) {
      if (param_7[10] == 0) {
        return 0xffffffff;
      }
      *(byte **)(param_7 + 4) = pbVar8;
      *param_7 = uVar11 + 1;
      return 1;
    }
    if (param_4 != 0) {
      if (bVar14 == 0x2d) {
        *(byte **)(param_7 + 8) = pbVar8 + 2;
        puVar15 = &DAT_00408be9;
        goto LAB_00406005;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00405fb0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405650(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00408bea);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00405fb0:
    pbVar8 = pbVar8 + 1;
  }
  pbVar9 = pbVar8 + 1;
  *(byte **)(param_7 + 8) = pbVar9;
  bVar14 = *pbVar8;
  uVar11 = (uint)(char)bVar14;
  pcVar4 = strchr(param_3,uVar11);
  if (pbVar8[1] == 0) {
    *param_7 = *param_7 + 1;
  }
  if (((byte)(bVar14 - 0x3a) < 2) || (pcVar4 == (char *)0x0)) {
    if (uVar3 != 0) {
      uVar1 = *param_2;
      uVar5 = dcgettext(0,"%s: invalid option -- \'%c\'\n",5);
      __fprintf_chk(stderr,1,uVar5,uVar1,uVar11);
    }
    param_7[2] = uVar11;
    return 0x3f;
  }
  if (((*pcVar4 != 'W') || (param_4 == 0)) || (pcVar4[1] != ';')) {
    if (pcVar4[1] == ':') {
      if (pcVar4[2] == ':') {
        if (pbVar8[1] == 0) {
          *(undefined *)(param_7 + 4) = 0;
        }
        else {
          *(byte **)(param_7 + 4) = pbVar9;
          *param_7 = *param_7 + 1;
        }
      }
      else {
        uVar7 = *param_7;
        if (pbVar8[1] == 0) {
          if (param_1 == uVar7) {
            if (uVar3 != 0) {
              uVar1 = *param_2;
              uVar5 = dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
              __fprintf_chk(stderr,1,uVar5,uVar1,uVar11);
            }
            param_7[2] = uVar11;
            uVar11 = (uint)(*param_3 != ':') * 5 + 0x3a;
          }
          else {
            uVar1 = param_2[(int)uVar7];
            *param_7 = uVar7 + 1;
            *(undefined *)(param_7 + 4) = uVar1;
          }
        }
        else {
          *(byte **)(param_7 + 4) = pbVar9;
          *param_7 = uVar7 + 1;
        }
      }
      *(undefined *)(param_7 + 8) = 0;
      return uVar11;
    }
    return uVar11;
  }
  if (pbVar8[1] == 0) {
    if (*param_7 == param_1) {
      if (uVar3 != 0) {
        uVar1 = *param_2;
        uVar5 = dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
        __fprintf_chk(stderr,1,uVar5,uVar1,uVar11);
      }
      param_7[2] = uVar11;
      return (uint)(*param_3 != ':') * 5 + 0x3a;
    }
    pbVar9 = (byte *)param_2[(int)*param_7];
  }
  *(byte **)(param_7 + 8) = pbVar9;
  param_6 = 0;
  *(undefined *)(param_7 + 4) = 0;
  puVar15 = &DAT_00408c08;
LAB_00406005:
  uVar3 = FUN_00405650(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406240(void)

{
  DAT_0060b6a0 = DAT_0060b318._4_4_;
  _DAT_0060b6a4 = (undefined)DAT_0060b318;
  FUN_00405c70();
  DAT_0060b318._4_4_ = DAT_0060b6a0;
  DAT_0060b6e0 = DAT_0060b6b0;
  _DAT_0060b314 = DAT_0060b6a8;
  return;
}


void FUN_004062a0(void)

{
  FUN_00406240();
  return;
}


void FUN_004062c0(void)

{
  FUN_00406240();
  return;
}


void FUN_004062e0(void)

{
  FUN_00405c70();
  return;
}


void FUN_00406300(void)

{
  FUN_00406240();
  return;
}


void FUN_00406320(void)

{
  FUN_00405c70();
  return;
}


size_t FUN_00406340(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x408c07;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00406364;
  }
  param_1 = &local_1c;
LAB_00406364:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00406650(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


int FUN_004063c0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *__s1;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  char *local_30 [2];
  
  bVar10 = 0;
  __s1 = "HUP";
  uVar3 = 0;
  if ((int)(char)*param_1 - 0x30U < 10) {
    uVar3 = strtol((char *)param_1,local_30,10);
    if ((*local_30[0] == '\0') && ((long)uVar3 < 0x41)) {
LAB_0040640e:
      *param_2 = (int)uVar3;
      return (int)uVar3 >> 0x1f;
    }
  }
  else {
    do {
      iVar1 = strcmp(__s1,(char *)param_1);
      if (iVar1 == 0) {
        uVar3 = (ulong)(uint)(&DAT_0060b320)[uVar3 * 3];
        goto LAB_0040640e;
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar5;
      __s1 = __s1 + 0xc;
    } while (uVar5 != 0x23);
    iVar1 = __libc_current_sigrtmin();
    iVar2 = __libc_current_sigrtmax();
    bVar8 = false;
    bVar9 = iVar1 == 0;
    if (0 < iVar1) {
      lVar4 = 5;
      pbVar6 = param_1;
      pbVar7 = (byte *)"RTMIN";
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar8 = *pbVar6 < *pbVar7;
        bVar9 = *pbVar6 == *pbVar7;
        pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      if ((!bVar8 && !bVar9) == bVar8) {
        lVar4 = strtol((char *)(param_1 + 5),local_30,10);
        if (((*local_30[0] == '\0') && (-1 < lVar4)) && (lVar4 <= iVar2 - iVar1)) {
          uVar3 = (ulong)(uint)((int)lVar4 + iVar1);
          goto LAB_0040640e;
        }
        goto LAB_00406440;
      }
    }
    bVar8 = false;
    bVar9 = iVar2 == 0;
    if (0 < iVar2) {
      lVar4 = 5;
      pbVar6 = param_1;
      pbVar7 = (byte *)"RTMAX";
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar8 = *pbVar6 < *pbVar7;
        bVar9 = *pbVar6 == *pbVar7;
        pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      if ((((!bVar8 && !bVar9) == bVar8) &&
          (lVar4 = strtol((char *)(param_1 + 5),local_30,10), *local_30[0] == '\0')) &&
         ((iVar1 - iVar2 <= lVar4 && (lVar4 < 1)))) {
        uVar3 = (ulong)(uint)((int)lVar4 + iVar2);
        goto LAB_0040640e;
      }
    }
  }
LAB_00406440:
  *param_2 = -1;
  return -1;
}


int FUN_00406520(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  
  piVar3 = &DAT_0060b320;
  uVar5 = 0;
  do {
    if (*piVar3 == param_1) {
      strcpy((char *)param_2,&DAT_0060b324 + uVar5 * 0xc);
      return 0;
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar4;
    piVar3 = piVar3 + 3;
  } while (uVar4 != 0x23);
  iVar1 = __libc_current_sigrtmin();
  iVar2 = __libc_current_sigrtmax();
  if ((param_1 < iVar1) || (iVar2 < param_1)) {
    param_1 = -1;
  }
  else {
    if ((iVar2 - iVar1 >> 1) + iVar1 < param_1) {
      *param_2 = 0x414d5452;
      *(undefined *)(param_2 + 1) = 0x58;
      iVar1 = iVar2;
    }
    else {
      *param_2 = 0x494d5452;
      *(undefined *)(param_2 + 1) = 0x4e;
    }
    param_1 = param_1 - iVar1;
    if (param_1 != 0) {
      __sprintf_chk((long)param_2 + 5,1,0xffffffffffffffff,&DAT_00408c18,param_1);
      return 0;
    }
  }
  return param_1;
}


ulong FUN_004065f0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00406c20(param_1);
  if ((uVar1 & 0x20) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (lVar2 == 0) {
      piVar4 = __errno_location();
      return (ulong)-(uint)(*piVar4 != 9);
    }
  }
  else if ((int)uVar3 == 0) {
    piVar4 = __errno_location();
    *piVar4 = 0;
    return 0xffffffff;
  }
  return 0xffffffff;
}


bool FUN_00406650(int param_1)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  
  bVar9 = 0;
  pbVar2 = (byte *)setlocale(param_1,(char *)0x0);
  bVar1 = true;
  bVar6 = false;
  bVar8 = pbVar2 == (byte *)0x0;
  if (!bVar8) {
    lVar3 = 2;
    pbVar4 = pbVar2;
    pbVar5 = &DAT_0040797b;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar8 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
      pbVar5 = pbVar5 + (ulong)bVar9 * -2 + 1;
    } while (bVar8);
    bVar1 = false;
    bVar7 = false;
    bVar6 = (!bVar6 && !bVar8) == bVar6;
    if (!bVar6) {
      lVar3 = 6;
      pbVar4 = (byte *)"POSIX";
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar2 < *pbVar4;
        bVar6 = *pbVar2 == *pbVar4;
        pbVar2 = pbVar2 + (ulong)bVar9 * -2 + 1;
        pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
      } while (bVar6);
      return (!bVar7 && !bVar6) != bVar7;
    }
  }
  return bVar1;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_004066b0(void)

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
  if (DAT_0060b6d8 != (char *)0x0) goto LAB_004066ea;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004067d5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004067f6;
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
        goto LAB_004067d5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004067f6:
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
LAB_00406890:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00406a1c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00406890;
              if (uVar4 == 0x23) goto LAB_00406a81;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00406a2f;
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
                FUN_00406c20(__stream);
                goto LAB_00406834;
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
LAB_00406a1c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00406a2f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040682e;
    }
  }
  DAT_0060b6d8 = "";
LAB_004066ea:
  cVar1 = *DAT_0060b6d8;
  pcVar7 = DAT_0060b6d8;
  do {
    if (cVar1 == '\0') {
LAB_00406744:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406744;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00406a81:
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
  if (uVar4 == 0xffffffff) goto LAB_00406a2f;
  goto LAB_00406890;
LAB_00406a2f:
  FUN_00406c20(__stream);
  if (local_d0 == 0) {
LAB_0040682e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00406834:
  free(__file);
  DAT_0060b6d8 = pcVar7;
  goto LAB_004066ea;
}


int FUN_00406c20(FILE *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __off_t _Var4;
  
  iVar1 = fileno(param_1);
  if (-1 < iVar1) {
    iVar1 = __freading();
    if (iVar1 != 0) {
      iVar1 = fileno(param_1);
      _Var4 = lseek(iVar1,0,1);
      if (_Var4 == -1) goto LAB_00406c87;
    }
    iVar1 = FUN_00406ca0(param_1);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      iVar2 = fclose(param_1);
      if (iVar1 != 0) {
        *piVar3 = iVar1;
        iVar2 = -1;
      }
      return iVar2;
    }
  }
LAB_00406c87:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00406ca0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00406ce0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00406ce0(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x00406d73) */
/* WARNING: Removing unreachable block (ram,0x00406d78) */

void FUN_00406d40(void)

{
  __DT_INIT();
  return;
}


void FUN_00406da0(void)

{
  return;
}


void FUN_00406db0(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060b288);
  return;
}


undefined FUN_00406dc8(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060ae10; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402481();
  return;
}

