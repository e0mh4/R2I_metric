
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00404230caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401ba5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401baa(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401baf(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bb4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00405d0acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined FUN_00401bc0(int param_1,undefined *param_2)

{
  int iVar1;
  undefined uVar2;
  undefined uVar3;
  
  FUN_00404040(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00408950(FUN_00402490);
  FUN_00403f30(param_1,param_2,"uptime","GNU coreutils",PTR_DAT_0060c250,FUN_00402130,
               "Joseph Arceneaux","David MacKenzie","Kaveh Ghazi",0);
  iVar1 = FUN_00407200(param_1,param_2,"",&DAT_00408e80,0);
  if (iVar1 != -1) {
LAB_00401cbe:
                    /* WARNING: Subroutine does not return */
    FUN_00402130(1);
  }
  if (param_1 == DAT_0060c2b8._4_4_) {
    FUN_00401db0("/var/run/utmp",1);
  }
  else {
    if (param_1 - DAT_0060c2b8._4_4_ != 1) {
      uVar2 = FUN_00405c60(param_2[(long)DAT_0060c2b8._4_4_ + 1]);
      uVar3 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar3,uVar2);
      goto LAB_00401cbe;
    }
    FUN_00401db0(param_2[DAT_0060c2b8._4_4_],0);
  }
  return 0;
}


void FUN_00401cd0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060bff0)
            (FUN_00401bc0,unaff_retaddr,&stack0x00000008,FUN_004088e0,FUN_00408940,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401d08) */
/* WARNING: Removing unreachable block (ram,0x00401d12) */

void FUN_00401cfb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401d49) */

void FUN_00401d1a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401d86) */

void FUN_00401d51(void)

{
  if (DAT_0060c2e8 != '\0') {
    return;
  }
  FUN_00401cfb();
  DAT_0060c2e8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401d49) */

void thunk_FUN_00401d1a(void)

{
  return;
}


void FUN_00401db0(undefined param_1,undefined param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  long lVar6;
  tm *ptVar7;
  undefined uVar8;
  int *piVar9;
  undefined uVar10;
  char *pcVar11;
  byte **ppbVar12;
  char *pcVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  FILE *pFVar18;
  byte *pbVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  byte *pbStack_110;
  char *pcStack_108;
  byte *apbStack_100 [5];
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined uStack_b0;
  undefined uStack_a8;
  undefined uStack_a0;
  long local_70;
  short *local_68;
  time_t local_60;
  double local_58;
  undefined local_50;
  undefined local_48;
  byte **ppbVar13;
  
  bVar22 = 0;
  local_68 = (short *)0x0;
  iVar3 = FUN_00407360(param_1,&local_70,&local_68,param_2);
  if (iVar3 == 0) {
    lVar15 = local_70 + -1;
    if (local_70 == 0) {
      local_60 = time((time_t *)0x0);
    }
    else {
      lVar6 = 0;
      lVar16 = 0;
      psVar5 = local_68;
      do {
        while ((*(char *)(psVar5 + 0x16) == '\0' || (*psVar5 != 7))) {
          if (*psVar5 == 2) {
            lVar6 = (long)*(int *)(psVar5 + 0xaa);
          }
          lVar15 = lVar15 + -1;
          psVar5 = psVar5 + 0xc0;
          if (lVar15 == -1) goto LAB_00401e40;
        }
        lVar15 = lVar15 + -1;
        lVar16 = lVar16 + 1;
        psVar5 = psVar5 + 0xc0;
      } while (lVar15 != -1);
LAB_00401e40:
      local_60 = time((time_t *)0x0);
      if (lVar6 != 0) {
        lVar6 = local_60 - lVar6;
        uVar1 = (lVar6 % 0x15180) / 0xe10;
        uVar2 = (lVar6 % 0x15180 - (long)((int)uVar1 * 0xe10)) / 0x3c;
        ptVar7 = localtime(&local_60);
        if (ptVar7 == (tm *)0x0) {
          uVar8 = dcgettext(0," ??:????  ",5);
          __printf_chk(1,uVar8);
        }
        else {
          uVar8 = dcgettext(0," %H:%M:%S  ",5);
          FUN_00403f10(stdout,uVar8,ptVar7,0,0);
        }
        if (lVar6 == -1) {
          uVar8 = dcgettext(0,"up ???? days ??:??,  ",5);
          __printf_chk(1,uVar8);
        }
        else if (lVar6 < 0x15180) {
          uVar8 = dcgettext(0,"up  %2d:%02d,  ",5);
          __printf_chk(1,uVar8,uVar1 & 0xffffffff,uVar2 & 0xffffffff);
        }
        else {
          uVar8 = dcngettext(0,"up %ld day %2d:%02d,  ","up %ld days %2d:%02d,  ",lVar6 / 0x15180,5)
          ;
          __printf_chk(1,uVar8,lVar6 / 0x15180,uVar1 & 0xffffffff,uVar2 & 0xffffffff);
        }
        uVar8 = dcngettext(0,"%lu user","%lu users",lVar16,5);
        __printf_chk(1,uVar8,lVar16);
        iVar3 = getloadavg(&local_58,3);
        if (iVar3 != -1) {
          if (0 < iVar3) {
            uVar8 = dcgettext(0,",  load average: %.2f",5);
            __printf_chk(local_58,1,uVar8);
          }
          if (iVar3 < 2) {
            if (iVar3 != 1) {
              return;
            }
          }
          else {
            __printf_chk(local_50,1,", %.2f");
            if (iVar3 != 2) {
              __printf_chk(local_48,1,", %.2f");
            }
          }
        }
        pcVar11 = stdout->_IO_write_ptr;
        pFVar18 = stdout;
        if (pcVar11 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar11 + 1;
          *pcVar11 = '\n';
          return;
        }
        goto LAB_004020f0;
      }
    }
    uVar8 = dcgettext(0,"couldn\'t get boot time",5);
    piVar9 = __errno_location();
    pFVar18 = (_IO_FILE *)0x1;
    error(1,*piVar9,uVar8);
LAB_004020f0:
    __overflow(pFVar18,10);
    return;
  }
  uStack_a0 = FUN_00405ae0(0,3,param_1);
  piVar9 = __errno_location();
  iVar3 = 1;
  error(1,*piVar9,"%s",uStack_a0);
  uVar8 = DAT_0060c308;
  if (iVar3 != 0) {
    uVar10 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar10,uVar8);
    goto LAB_0040216f;
  }
  uVar10 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(1,uVar10,uVar8);
  uVar8 = dcgettext(0,
                    "Print the current time, the length of time the system has been up,\nthe number of users on the system, and the average number of jobs\nin the run queue over the last 1, 5 and 15 minutes."
                    ,5);
  __printf_chk(1,uVar8);
  uVar8 = dcgettext(0,
                    "  Processes in\nan uninterruptible sleep state also contribute to the load average.\n"
                    ,5);
  __printf_chk(1,uVar8);
  uVar8 = dcgettext(0,"If FILE is not specified, use %s.  %s as FILE is common.\n\n",5);
  __printf_chk(1,uVar8,"/var/run/utmp","/var/log/wtmp");
  pFVar18 = stdout;
  pcVar11 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar11,pFVar18);
  pFVar18 = stdout;
  pcVar11 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar11,pFVar18);
  pbStack_110 = &DAT_00408a98;
  pcStack_108 = "test invocation";
  apbStack_100[0] = (byte *)0x408b12;
  apbStack_100[1] = (byte *)0x408aaa;
  apbStack_100[2] = (byte *)0x408ac0;
  apbStack_100[3] = (byte *)0x408aca;
  apbStack_100[4] = (byte *)0x408ad9;
  pcStack_d8 = "sha2 utilities";
  pcStack_d0 = "sha384sum";
  pcStack_c8 = "sha2 utilities";
  pcStack_c0 = "sha512sum";
  pcStack_b8 = "sha2 utilities";
  uStack_b0 = 0;
  uStack_a8 = 0;
  ppbVar12 = &pbStack_110;
  do {
    ppbVar13 = ppbVar12;
    ppbVar12 = ppbVar13 + 2;
    pbVar19 = *ppbVar12;
    bVar20 = false;
    bVar21 = pbVar19 == (byte *)0x0;
    if (bVar21) break;
    lVar15 = 7;
    pbVar17 = (byte *)"uptime";
    do {
      if (lVar15 == 0) break;
      lVar15 = lVar15 + -1;
      bVar20 = *pbVar17 < *pbVar19;
      bVar21 = *pbVar17 == *pbVar19;
      pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar22 * -2 + 1;
    } while (bVar21);
  } while ((!bVar20 && !bVar21) != bVar20);
  pcVar11 = (char *)ppbVar13[3];
  if ((byte *)pcVar11 == (byte *)0x0) {
    uVar8 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar8,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar11 = setlocale(5,(char *)0x0);
    if ((pcVar11 != (char *)0x0) && (iVar4 = strncmp(pcVar11,"en_",3), iVar4 != 0)) {
      pcVar11 = "uptime";
      goto LAB_0040243b;
    }
    pcVar11 = "uptime";
    uVar8 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar14 = " invocation";
    __printf_chk(1,uVar8,"https://www.gnu.org/software/coreutils/","uptime");
  }
  else {
    uVar8 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar8,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar14 = setlocale(5,(char *)0x0);
    if ((pcVar14 != (char *)0x0) && (iVar4 = strncmp(pcVar14,"en_",3), iVar4 != 0)) {
LAB_0040243b:
      uVar8 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5
                       );
      __printf_chk(1,uVar8,"uptime");
    }
    pcVar14 = " invocation";
    uVar8 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar8,"https://www.gnu.org/software/coreutils/","uptime");
    if (pcVar11 != "uptime") {
      pcVar14 = "";
    }
  }
  uVar8 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar8,pcVar11,pcVar14);
LAB_0040216f:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}


void FUN_00402130(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  char *pcVar5;
  byte **ppbVar6;
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
  byte **ppbVar7;
  
  uVar4 = DAT_0060c308;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar4);
    goto LAB_0040216f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(1,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Print the current time, the length of time the system has been up,\nthe number of users on the system, and the average number of jobs\nin the run queue over the last 1, 5 and 15 minutes."
                    ,5);
  __printf_chk(1,uVar4);
  uVar4 = dcgettext(0,
                    "  Processes in\nan uninterruptible sleep state also contribute to the load average.\n"
                    ,5);
  __printf_chk(1,uVar4);
  uVar4 = dcgettext(0,"If FILE is not specified, use %s.  %s as FILE is common.\n\n",5);
  __printf_chk(1,uVar4,"/var/run/utmp","/var/log/wtmp");
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  local_88 = &DAT_00408a98;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x408b12;
  local_78[1] = (byte *)0x408aaa;
  local_78[2] = (byte *)0x408ac0;
  local_78[3] = (byte *)0x408aca;
  local_78[4] = (byte *)0x408ad9;
  local_50 = "sha2 utilities";
  local_48 = "sha384sum";
  local_40 = "sha2 utilities";
  local_38 = "sha512sum";
  local_30 = "sha2 utilities";
  local_28 = 0;
  local_20 = 0;
  ppbVar6 = &local_88;
  do {
    ppbVar7 = ppbVar6;
    ppbVar6 = ppbVar7 + 2;
    pbVar11 = *ppbVar6;
    bVar12 = false;
    bVar13 = pbVar11 == (byte *)0x0;
    if (bVar13) break;
    lVar9 = 7;
    pbVar10 = (byte *)"uptime";
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar12 = *pbVar10 < *pbVar11;
      bVar13 = *pbVar10 == *pbVar11;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
      pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
  } while ((!bVar12 && !bVar13) != bVar12);
  pcVar5 = (char *)ppbVar7[3];
  if ((byte *)pcVar5 == (byte *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar2 = strncmp(pcVar5,"en_",3);
      if (iVar2 != 0) {
        pcVar5 = "uptime";
        goto LAB_0040243b;
      }
    }
    pcVar5 = "uptime";
    uVar4 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","uptime");
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_0040243b:
        uVar4 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar4,"uptime");
      }
    }
    pcVar8 = " invocation";
    uVar4 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","uptime");
    if (pcVar5 != "uptime") {
      pcVar8 = "";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar4,pcVar5,pcVar8);
LAB_0040216f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402470(undefined param_1)

{
  DAT_0060c300 = param_1;
  return;
}


void FUN_00402480(undefined param_1)

{
  DAT_0060c2f8 = param_1;
  return;
}


void FUN_00402490(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00407ab0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060c2f8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060c300 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00405ab0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040250e;
    }
  }
  iVar1 = FUN_00407ab0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040250e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060c258);
}


void FUN_00402530(FILE *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  __int32_t **pp_Var2;
  byte *pbVar3;
  
  if (param_3 != 0) {
    pbVar3 = param_2 + param_3;
    pp_Var2 = __ctype_tolower_loc();
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      fputc((*pp_Var2)[bVar1],param_1);
    } while (param_2 != pbVar3);
    return;
  }
  return;
}


void FUN_00402590(FILE *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  __int32_t **pp_Var2;
  byte *pbVar3;
  
  if (param_3 != 0) {
    pbVar3 = param_2 + param_3;
    pp_Var2 = __ctype_toupper_loc();
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      fputc((*pp_Var2)[bVar1],param_1);
    } while (param_2 != pbVar3);
    return;
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

ulong FUN_004025f0(FILE *param_1,char *param_2,tm *param_3,char param_4,undefined param_5,
                  undefined param_6,uint param_7)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  size_t sVar28;
  ulong uVar29;
  char *__s;
  ulong uVar30;
  char *pcVar31;
  uint uVar32;
  bool bVar33;
  char *local_4a8;
  char local_490;
  uint local_478;
  undefined local_458;
  char local_456;
  char local_455 [19];
  char local_442 [10];
  undefined local_438;
  undefined uStack_430;
  undefined local_428;
  undefined uStack_420;
  undefined local_418;
  long lStack_410;
  char *local_408;
  
  __s = param_3->tm_zone;
  uVar19 = param_3->tm_hour;
  if (__s == (char *)0x0) {
    __s = "";
  }
  if ((int)uVar19 < 0xd) {
    if (uVar19 == 0) {
      uVar19 = 0xc;
    }
  }
  else {
    uVar19 = uVar19 - 0xc;
  }
  cVar14 = *param_2;
  uVar29 = 0;
  if (cVar14 == '\0') {
    return 0;
  }
LAB_0040265a:
  if (cVar14 == '%') {
    cVar14 = '\0';
    uVar6 = 0;
    cVar15 = param_4;
    do {
      local_478 = uVar6;
      param_2 = param_2 + 1;
      cVar13 = *param_2;
      cVar3 = cVar13 + -0x30;
      bVar33 = cVar13 == '0';
      while (uVar6 = (uint)cVar13, !bVar33) {
        if (!bVar33 && SBORROW1(cVar13,'0') == cVar3 < '\0') {
          if (cVar13 == '^') {
            cVar15 = '\x01';
            uVar6 = local_478;
          }
          else if (cVar13 != '_') {
LAB_0040271c:
            uVar27 = 0xffffffff;
            if (9 < uVar6 - 0x30) goto LAB_0040272a;
            uVar27 = 0;
            pcVar31 = param_2;
            goto LAB_00402783;
          }
          break;
        }
        if (cVar13 != '#') {
          if (cVar13 != '-') goto LAB_0040271c;
          break;
        }
        param_2 = param_2 + 1;
        cVar13 = *param_2;
        cVar14 = '\x01';
        cVar3 = cVar13 + -0x30;
        bVar33 = cVar3 == '\0';
      }
    } while( true );
  }
  if (0xfffffffffffffffd < uVar29) {
    return 0;
  }
  if (param_1 != (FILE *)0x0) {
    fputc((int)cVar14,param_1);
  }
  uVar29 = uVar29 + 1;
  pcVar31 = param_2;
  goto LAB_0040267a;
LAB_00402783:
  do {
    uVar6 = (uint)pcVar31[1];
    param_2 = pcVar31 + 1;
    uVar23 = uVar6 - 0x30;
    if ((int)uVar27 < 0xccccccd) {
      if ((uVar27 == 0xccccccc) && ('7' < *pcVar31)) goto LAB_004027c6;
      uVar27 = *pcVar31 + -0x30 + uVar27 * 10;
    }
    else {
LAB_004027c6:
      if (9 < uVar23) {
        uVar27 = 0x7fffffff;
        break;
      }
      uVar6 = (uint)pcVar31[2];
      uVar27 = 0x7fffffff;
      param_2 = pcVar31 + 2;
      uVar23 = uVar6 - 0x30;
    }
    pcVar31 = param_2;
  } while (uVar23 < 10);
LAB_0040272a:
  if (((char)uVar6 == 'E') || (uVar23 = uVar6, uVar32 = 0, (char)uVar6 == 'O')) {
    uVar23 = (uint)param_2[1];
    param_2 = param_2 + 1;
    uVar32 = uVar6;
  }
  cVar13 = (char)uVar23;
  pcVar11 = &local_456;
  pcVar31 = param_2;
  uVar6 = uVar19;
  uVar26 = uVar27;
  switch(uVar23 & 0xff) {
  case 0:
    cVar14 = param_2[-1];
    param_2 = param_2 + -1;
LAB_00402b9b:
    uVar6 = 0;
    if (-1 < (int)uVar27) {
      uVar6 = uVar27;
    }
    uVar12 = (ulong)(int)uVar6;
    if (cVar14 != '%') break;
    local_4a8 = (char *)1;
    if (uVar12 != 0) {
      local_4a8 = (char *)uVar12;
    }
    uVar30 = 1;
    pcVar31 = param_2;
    goto LAB_00402bd3;
  case 0x25:
    uVar6 = 0;
    if (-1 < (int)uVar27) {
      uVar6 = uVar27;
    }
    uVar12 = (ulong)(int)uVar6;
    local_4a8 = (char *)1;
    if (uVar12 != 0) {
      local_4a8 = (char *)uVar12;
    }
    if (uVar32 != 0) {
      uVar30 = 1;
      goto LAB_00402bd3;
    }
    if (~uVar29 <= local_4a8) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (1 < (int)uVar27) {
        lVar20 = 0;
        if (local_478 == 0x30) {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x30,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
        else {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x20,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
        uVar23 = (uint)*param_2;
      }
      fputc(uVar23,param_1);
    }
    goto LAB_00402ccc;
  case 0x3a:
    pcVar31 = param_2 + 1;
    lVar20 = 1;
    cVar14 = param_2[1];
    while (cVar14 == ':') {
      lVar20 = lVar20 + 1;
      pcVar31 = param_2 + lVar20;
      cVar14 = param_2[lVar20];
    }
    if (cVar14 == 'z') goto LAB_00403159;
    break;
  case 0x41:
  case 0x42:
  case 0x61:
    if (uVar32 != 0) break;
    if (cVar14 != '\0') {
      cVar15 = cVar14;
    }
LAB_00402800:
    local_490 = '\0';
    uVar32 = 0;
    goto LAB_00402820;
  case 0x43:
    if (uVar32 != 0x45) {
      uVar26 = 2;
      iVar16 = param_3->tm_year;
      iVar7 = iVar16 / 100 + 0x13;
      bVar33 = iVar16 < -0x76c;
      uVar6 = iVar7 - ((uint)(0 < iVar7) & (uint)(iVar16 % 100) >> 0x1f);
      uVar24 = 0;
      bVar5 = false;
      goto LAB_0040296c;
    }
LAB_00403b03:
    uVar23 = 0;
    goto LAB_0040297f;
  case 0x44:
    if (uVar32 == 0) {
      local_4a8 = "%m/%d/%y";
      goto LAB_00402a2c;
    }
    break;
  case 0x46:
    if (uVar32 == 0) {
      local_4a8 = "%Y-%m-%d";
      goto LAB_00402a2c;
    }
    break;
  case 0x47:
  case 0x56:
  case 0x67:
    if (uVar32 != 0x45) {
      iVar16 = param_3->tm_year;
      iVar1 = param_3->tm_yday;
      iVar25 = param_3->tm_wday;
      iVar7 = (iVar1 - iVar25) + 0x17e;
      uVar6 = iVar16 + -100 + (iVar16 >> 0x1f & 400U);
      iVar7 = (iVar1 - iVar7) + 3 + (iVar7 / 7) * 7;
      if (iVar7 < 0) {
        uVar6 = uVar6 - 1;
        iVar7 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar7 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar7 = ~-(uint)((int)uVar6 % 400 == 0) + 0x16e;
        }
        iVar8 = -1;
        iVar25 = ((iVar1 + iVar7) - iVar25) + 0x17e;
        iVar7 = ((iVar1 + iVar7) - iVar25) + 3 + (iVar25 / 7) * 7;
      }
      else {
        iVar8 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar8 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar8 = (uVar6 == ((int)uVar6 / 400) * 400) + 0x16d;
        }
        iVar25 = ((iVar1 - iVar8) - iVar25) + 0x17e;
        iVar1 = ((iVar1 - iVar8) - iVar25) + 3 + (iVar25 / 7) * 7;
        if (-1 < iVar1) {
          iVar7 = iVar1;
        }
        iVar8 = (iVar1 >> 0x1f) + 1;
      }
      if (cVar13 == 'G') {
        uVar6 = iVar16 + 0x76c + iVar8;
        uVar26 = 4;
        bVar33 = iVar16 < -0x76c - iVar8;
        uVar24 = 0;
        bVar5 = false;
        goto LAB_0040296c;
      }
      if (cVar13 == 'g') {
        uVar26 = 2;
        uVar23 = (iVar16 % 100 + iVar8) % 100;
        uVar6 = uVar23;
        if ((int)uVar23 < 0) {
          uVar6 = uVar23 + 100;
          if (iVar16 < -0x76c - iVar8) {
            uVar6 = -uVar23;
          }
        }
      }
      else {
        uVar6 = iVar7 / 7 + 1;
        uVar26 = 2;
      }
      goto LAB_00402960;
    }
    break;
  case 0x48:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_hour;
      uVar26 = 2;
      goto LAB_00402960;
    }
    break;
  case 0x49:
    if (uVar32 != 0x45) {
      uVar26 = 2;
      goto LAB_00402960;
    }
    break;
  case 0x4d:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_min;
      uVar26 = 2;
      goto LAB_00402960;
    }
    break;
  case 0x4e:
    if (uVar32 != 0x45) {
      uVar6 = param_7;
      if (uVar27 == 0xffffffff) {
        uVar27 = 9;
        uVar26 = 9;
      }
      else {
        uVar23 = uVar27;
        uVar24 = param_7;
        if ((int)uVar27 < 9) {
          do {
            uVar23 = uVar23 + 1;
            uVar6 = (int)uVar24 / 10;
            uVar24 = (int)uVar24 / 10;
          } while (uVar23 != 9);
        }
      }
      goto LAB_00402960;
    }
    break;
  case 0x50:
    local_490 = '\x01';
    goto LAB_00403586;
  case 0x52:
    local_4a8 = "%H:%M";
    goto LAB_00402a2c;
  case 0x53:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_sec;
      uVar26 = 2;
      goto LAB_00402960;
    }
    break;
  case 0x54:
    local_4a8 = "%H:%M:%S";
LAB_00402a2c:
    uVar10 = FUN_004025f0(0,local_4a8,param_3,cVar15,param_5,param_6,param_7);
    uVar30 = 0;
    if (-1 < (int)uVar27) {
      uVar30 = (long)(int)uVar27;
    }
    uVar12 = uVar30;
    if (uVar30 <= uVar10) {
      uVar12 = uVar10;
    }
    if (~uVar29 <= uVar12) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (uVar10 < uVar30) {
        uVar30 = (ulong)(int)uVar27;
        if (local_478 == 0x30) {
          if (uVar30 != uVar10) {
            lVar20 = 0;
            do {
              lVar20 = lVar20 + 1;
              fputc(0x30,param_1);
            } while (uVar30 - uVar10 != lVar20);
          }
        }
        else {
          lVar20 = 0;
          if (uVar30 != uVar10) {
            do {
              lVar20 = lVar20 + 1;
              fputc(0x20,param_1);
            } while (uVar30 - uVar10 != lVar20);
          }
        }
      }
      FUN_004025f0(param_1,local_4a8,param_3,cVar15,param_5,param_6,param_7);
    }
    goto LAB_00402b06;
  case 0x55:
    if (uVar32 != 0x45) {
      iVar7 = (param_3->tm_yday - param_3->tm_wday) + 7;
      iVar16 = (int)((ulong)((long)iVar7 * -0x6db6db6d) >> 0x20);
LAB_00402d33:
      uVar6 = (iVar16 + iVar7 >> 2) - (iVar7 >> 0x1f);
      uVar26 = 2;
      goto LAB_00402960;
    }
    break;
  case 0x57:
    if (uVar32 != 0x45) {
      iVar7 = param_3->tm_wday + 6;
      iVar7 = ((iVar7 / 7) * 7 - iVar7) + 7 + param_3->tm_yday;
      iVar16 = (int)((ulong)((long)iVar7 * -0x6db6db6d) >> 0x20);
      goto LAB_00402d33;
    }
    break;
  case 0x58:
  case 99:
  case 0x78:
    if (uVar32 != 0x4f) goto switchD_00402743_caseD_72;
    break;
  case 0x59:
    if (uVar32 == 0x45) goto LAB_00403b03;
    if (uVar32 == 0x4f) break;
    uVar26 = 4;
    bVar33 = param_3->tm_year < -0x76c;
    uVar6 = param_3->tm_year + 0x76c;
    uVar24 = 0;
    bVar5 = false;
    goto LAB_00402dd0;
  case 0x5a:
    if (cVar14 != '\0') {
      cVar15 = '\0';
    }
    sVar9 = strlen(__s);
    sVar28 = (size_t)(int)uVar27;
    uVar12 = 0;
    if (-1 < (int)uVar27) {
      uVar12 = sVar28;
    }
    local_4a8 = (char *)uVar12;
    if (uVar12 <= sVar9) {
      local_4a8 = (char *)sVar9;
    }
    if (~uVar29 <= local_4a8) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (sVar9 < uVar12) {
        if (local_478 == 0x30) {
          if (sVar28 != sVar9) {
            lVar20 = 0;
            do {
              lVar20 = lVar20 + 1;
              fputc(0x30,param_1);
            } while (sVar28 - sVar9 != lVar20);
          }
        }
        else {
          lVar20 = 0;
          if (sVar28 != sVar9) {
            do {
              lVar20 = lVar20 + 1;
              fputc(0x20,param_1);
            } while (sVar28 - sVar9 != lVar20);
          }
        }
      }
      if (cVar14 == '\0') {
        if (cVar15 == '\0') {
          fwrite(__s,sVar9,1,param_1);
        }
        else {
          FUN_00402590(param_1,__s,sVar9);
        }
      }
      else {
        FUN_00402530(param_1,__s,sVar9);
      }
    }
LAB_00402ccc:
    uVar29 = uVar29 + (long)local_4a8;
    goto LAB_0040267a;
  case 0x62:
  case 0x68:
    if (cVar14 != '\0') {
      cVar15 = cVar14;
    }
    if (uVar32 == 0) goto LAB_00402800;
    break;
  case 100:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_mday;
      uVar26 = 2;
      goto LAB_00402960;
    }
    break;
  case 0x65:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_mday;
LAB_00402f90:
      uVar26 = 2;
      if ((local_478 != 0x30) && (local_478 != 0x2d)) {
        local_478 = 0x5f;
      }
      goto LAB_00402960;
    }
    break;
  case 0x6a:
    if (uVar32 != 0x45) {
      uVar26 = 3;
      bVar33 = param_3->tm_yday < -1;
      uVar6 = param_3->tm_yday + 1;
      uVar24 = 0;
      bVar5 = false;
      goto LAB_0040296c;
    }
    break;
  case 0x6b:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_hour;
      goto LAB_00402f90;
    }
    break;
  case 0x6c:
    if (uVar32 != 0x45) goto LAB_00402f90;
    break;
  case 0x6d:
    if (uVar32 != 0x45) {
      uVar26 = 2;
      bVar33 = param_3->tm_mon < -1;
      uVar6 = param_3->tm_mon + 1;
      uVar24 = 0;
      bVar5 = false;
      goto LAB_0040296c;
    }
    break;
  case 0x6e:
    uVar6 = 0;
    if (-1 < (int)uVar27) {
      uVar6 = uVar27;
    }
    uVar12 = (ulong)(int)uVar6;
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    if (~uVar29 <= uVar12) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (1 < (int)uVar27) {
        lVar20 = 0;
        if (local_478 == 0x30) {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x30,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
        else {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x20,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
      }
      fputc(10,param_1);
    }
    goto LAB_00402b06;
  case 0x70:
    local_490 = '\0';
LAB_00403586:
    cVar13 = 'p';
    if (cVar14 != '\0') {
      cVar15 = '\0';
      local_490 = cVar14;
    }
LAB_0040291f:
    if (uVar32 != 0) {
      uVar23 = 0;
      goto LAB_00402991;
    }
    goto LAB_00402820;
  case 0x71:
    uVar23 = 1;
    uVar26 = 1;
    if (uVar32 == 0x4f) goto LAB_0040297f;
    bVar5 = false;
    bVar33 = false;
    uVar24 = 0;
    uVar6 = (param_3->tm_mon * 0xb >> 5) + 1;
    goto LAB_00402dd7;
  case 0x72:
switchD_00402743_caseD_72:
    local_490 = '\0';
    goto LAB_0040291f;
  case 0x73:
    pcVar31 = local_442 + 1;
    local_418 = *(undefined *)&param_3->tm_isdst;
    lStack_410 = param_3->tm_gmtoff;
    local_438 = *(undefined *)param_3;
    uStack_430 = *(undefined *)&param_3->tm_hour;
    local_428 = *(undefined *)&param_3->tm_mon;
    uStack_420 = *(undefined *)&param_3->tm_wday;
    local_408 = param_3->tm_zone;
    lVar21 = FUN_00407970(param_6,&local_438);
    lVar20 = lVar21;
    do {
      lVar4 = lVar20 / 10;
      cVar14 = (char)lVar20 + (char)lVar4 * -10;
      if (lVar21 < 0) {
        cVar14 = -cVar14;
      }
      pcVar31 = pcVar31 + -1;
      *pcVar31 = cVar14 + '0';
      lVar20 = lVar4;
    } while (lVar4 != 0);
    uVar26 = 1;
    if (0 < (int)uVar27) {
      uVar26 = uVar27;
    }
    if (lVar21 < 0) goto LAB_004037c0;
    goto LAB_004032eb;
  case 0x74:
    uVar6 = 0;
    if (-1 < (int)uVar27) {
      uVar6 = uVar27;
    }
    uVar12 = (ulong)(int)uVar6;
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    if (~uVar29 <= uVar12) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (1 < (int)uVar27) {
        lVar20 = 0;
        if (local_478 == 0x30) {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x30,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
        else {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x20,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
      }
      fputc(9,param_1);
    }
LAB_00402b06:
    uVar29 = uVar29 + uVar12;
    goto LAB_0040267a;
  case 0x75:
    uVar6 = (param_3->tm_wday + 6) % 7 + 1;
    uVar26 = 1;
    goto LAB_00402960;
  case 0x77:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_wday;
      uVar26 = 1;
      goto LAB_00402960;
    }
    break;
  case 0x79:
    if (uVar32 == 0x45) goto LAB_00403b03;
    uVar26 = 2;
    uVar23 = param_3->tm_year % 100;
    uVar6 = uVar23;
    if ((int)uVar23 < 0) {
      uVar6 = uVar23 + 100;
      if (param_3->tm_year < -0x76c) {
        uVar6 = -uVar23;
      }
    }
LAB_00402960:
    uVar24 = 0;
    bVar5 = false;
    bVar33 = SUB41(uVar6 >> 0x1f,0);
LAB_0040296c:
    if (uVar32 != 0x4f) {
LAB_00402dd0:
      if (bVar33 != false) goto LAB_00402dd5;
LAB_00402dd7:
      pcVar31 = local_442 + 1;
      do {
        pcVar11 = pcVar31;
        pcVar22 = pcVar31 + -1;
        if ((uVar24 & 1) != 0) {
          pcVar31[-1] = ':';
          pcVar11 = pcVar31 + -1;
          pcVar22 = pcVar31 + -2;
        }
        pcVar31 = pcVar22;
        uVar24 = (int)uVar24 >> 1;
        uVar23 = (uint)((ulong)uVar6 / 10);
        pcVar11[-1] = (char)uVar6 + (char)((ulong)uVar6 / 10) * -10 + '0';
        bVar2 = 9 < uVar6;
        uVar6 = uVar23;
      } while ((bVar2) || (uVar24 != 0));
      if ((int)uVar26 < (int)uVar27) {
        uVar26 = uVar27;
      }
      if (bVar33 == false) {
        if (bVar5) {
          if (local_478 == 0x2d) {
            local_490 = '+';
            goto LAB_004037d4;
          }
          cVar14 = '+';
LAB_00402e73:
          pcVar22 = local_442 + (1 - (long)pcVar31);
          iVar7 = (uVar26 - 1) - (int)pcVar22;
          pcVar11 = (char *)~uVar29;
          if (iVar7 < 1) {
            uVar6 = 0;
            if (-1 < (int)uVar27) {
              uVar6 = uVar27;
            }
            pcVar18 = (char *)(long)(int)uVar6;
            pcVar17 = (char *)0x1;
            if (pcVar18 != (char *)0x0) {
              pcVar17 = pcVar18;
            }
            if (pcVar11 <= pcVar17) {
              return 0;
            }
            if (param_1 != (FILE *)0x0) {
              if ((uVar26 == 0) && ((char *)0x1 < pcVar18)) {
                lVar20 = (long)(int)uVar27;
                if (local_478 == 0x30) {
                  if (lVar20 != 1) {
                    lVar21 = 0;
                    do {
                      lVar21 = lVar21 + 1;
                      fputc(0x30,param_1);
                    } while (lVar20 + -1 != lVar21);
                    local_478 = 0x30;
                  }
                }
                else {
                  lVar21 = 0;
                  if (lVar20 != 1) {
                    do {
                      lVar21 = lVar21 + 1;
                      fputc(0x20,param_1);
                    } while (lVar20 + -1 != lVar21);
                  }
                }
              }
              fputc((int)cVar14,param_1);
            }
            uVar29 = uVar29 + (long)pcVar17;
            pcVar11 = (char *)~uVar29;
          }
          else {
            if (local_478 == 0x5f) goto LAB_004039d8;
            if (pcVar11 <= (char *)(long)(int)uVar26) {
              return 0;
            }
            uVar6 = 0;
            if (-1 < (int)uVar27) {
              uVar6 = uVar27;
            }
            pcVar17 = (char *)(long)(int)uVar6;
            pcVar18 = (char *)0x1;
            if (pcVar17 != (char *)0x0) {
              pcVar18 = pcVar17;
            }
            if (pcVar11 <= pcVar18) {
              return 0;
            }
            if (param_1 != (FILE *)0x0) {
              if ((uVar26 == 0) && ((char *)0x1 < pcVar17)) {
                lVar20 = (long)(int)uVar27;
                if (local_478 == 0x30) {
                  if (lVar20 != 1) {
                    lVar21 = 0;
                    do {
                      lVar21 = lVar21 + 1;
                      fputc(0x30,param_1);
                    } while (lVar20 + -1 != lVar21);
                  }
                }
                else {
                  lVar21 = 0;
                  if (lVar20 != 1) {
                    do {
                      lVar21 = lVar21 + 1;
                      fputc(0x20,param_1);
                    } while (lVar20 + -1 != lVar21);
                  }
                }
              }
              fputc((int)cVar14,param_1);
            }
            uVar29 = uVar29 + (long)pcVar18;
LAB_00402f57:
            if (param_1 != (FILE *)0x0) {
              uVar12 = 0;
              do {
                uVar12 = uVar12 + 1;
                fputc(0x30,param_1);
              } while (uVar12 < (ulong)(long)iVar7);
            }
            uVar29 = uVar29 + (long)iVar7;
            pcVar18 = (char *)0x0;
            uVar27 = 0;
            pcVar11 = (char *)~uVar29;
          }
        }
        else {
LAB_004032eb:
          pcVar22 = local_442 + (1 - (long)pcVar31);
          pcVar11 = (char *)~uVar29;
          if ((local_478 == 0x2d) || (iVar7 = uVar26 - (int)pcVar22, iVar7 < 1)) {
            uVar6 = 0;
            if (-1 < (int)uVar27) {
              uVar6 = uVar27;
            }
            pcVar18 = (char *)(long)(int)uVar6;
            goto LAB_00403327;
          }
          if (local_478 != 0x5f) {
            if (pcVar11 <= (char *)(long)(int)uVar26) {
              return 0;
            }
            goto LAB_00402f57;
          }
          cVar14 = '\0';
LAB_004039d8:
          uVar12 = (ulong)iVar7;
          if (~uVar29 <= uVar12) {
            return 0;
          }
          if (param_1 != (FILE *)0x0) {
            uVar30 = 0;
            do {
              uVar30 = uVar30 + 1;
              fputc(0x20,param_1);
            } while (uVar30 < uVar12);
          }
          uVar29 = uVar29 + uVar12;
          uVar6 = uVar27 - iVar7;
          bVar33 = iVar7 < (int)uVar27;
          uVar27 = 0;
          if (bVar33) {
            uVar27 = uVar6;
          }
          pcVar11 = (char *)~uVar29;
          if (cVar14 == '\0') {
            pcVar18 = (char *)(long)(int)uVar27;
            local_478 = 0x5f;
            pcVar22 = local_442 + (1 - (long)pcVar31);
          }
          else {
            pcVar18 = (char *)(long)(int)uVar27;
            pcVar22 = (char *)0x1;
            if (pcVar18 != (char *)0x0) {
              pcVar22 = pcVar18;
            }
            if (pcVar11 <= pcVar22) {
              return 0;
            }
            if (param_1 != (FILE *)0x0) {
              if ((uVar26 == 0) && (1 < uVar27)) {
                pcVar11 = (char *)0x0;
                do {
                  pcVar11 = pcVar11 + 1;
                  fputc(0x20,param_1);
                } while (pcVar18 + -1 != pcVar11);
              }
              fputc((int)cVar14,param_1);
            }
            uVar29 = uVar29 + (long)pcVar22;
            local_478 = 0x5f;
            pcVar22 = local_442 + (1 - (long)pcVar31);
            pcVar11 = (char *)~uVar29;
          }
        }
      }
      else {
LAB_004037c0:
        cVar14 = '-';
        if (local_478 != 0x2d) goto LAB_00402e73;
        local_490 = '-';
LAB_004037d4:
        uVar6 = 0;
        if (-1 < (int)uVar27) {
          uVar6 = uVar27;
        }
        pcVar18 = (char *)(long)(int)uVar6;
        pcVar11 = (char *)0x1;
        if (pcVar18 != (char *)0x0) {
          pcVar11 = pcVar18;
        }
        if ((char *)~uVar29 <= pcVar11) {
          return 0;
        }
        if (param_1 != (FILE *)0x0) {
          if (((uVar26 == 0) && ((char *)0x1 < pcVar18)) && ((long)(int)uVar27 != 1)) {
            lVar20 = 0;
            do {
              lVar20 = lVar20 + 1;
              fputc(0x20,param_1);
            } while ((long)(int)uVar27 + -1 != lVar20);
          }
          fputc((int)local_490,param_1);
        }
        uVar29 = uVar29 + (long)pcVar11;
        local_478 = 0x2d;
        pcVar22 = local_442 + (1 - (long)pcVar31);
        pcVar11 = (char *)~uVar29;
      }
LAB_00403327:
      pcVar17 = pcVar18;
      if (pcVar18 <= pcVar22) {
        pcVar17 = pcVar22;
      }
      if (pcVar11 <= pcVar17) {
        return 0;
      }
      if (param_1 != (FILE *)0x0) {
        if ((uVar26 == 0) && (pcVar22 < pcVar18)) {
          pcVar11 = (char *)(long)(int)uVar27;
          if (local_478 == 0x30) {
            if (pcVar11 != pcVar22) {
              lVar20 = 0;
              do {
                lVar20 = lVar20 + 1;
                fputc(0x30,param_1);
              } while ((long)pcVar11 - (long)pcVar22 != lVar20);
            }
          }
          else {
            lVar20 = 0;
            if (pcVar11 != pcVar22) {
              do {
                lVar20 = lVar20 + 1;
                fputc(0x20,param_1);
              } while ((long)pcVar11 - (long)pcVar22 != lVar20);
            }
          }
        }
        if (cVar15 == '\0') {
          fwrite(pcVar31,(size_t)pcVar22,1,param_1);
        }
        else {
          FUN_00402590(param_1,pcVar31,pcVar22);
        }
      }
      uVar29 = uVar29 + (long)pcVar17;
      pcVar31 = param_2;
      goto LAB_0040267a;
    }
    uVar23 = uVar26;
    if (bVar33 != false) {
LAB_00402dd5:
      uVar6 = -uVar6;
      goto LAB_00402dd7;
    }
LAB_0040297f:
    local_490 = '\0';
LAB_00402991:
    local_456 = (char)uVar32;
    pcVar11 = local_455;
    uVar32 = uVar23;
LAB_00402820:
    local_458 = 0x2520;
    *pcVar11 = cVar13;
    pcVar11[1] = '\0';
    sVar9 = strftime((char *)&local_438,0x400,(char *)&local_458,param_3);
    pcVar31 = param_2;
    if (sVar9 == 0) goto LAB_0040267a;
    uVar12 = sVar9 - 1;
    uVar30 = 0;
    if (-1 < (int)uVar27) {
      uVar30 = (long)(int)uVar27;
    }
    local_4a8 = (char *)uVar30;
    if (uVar30 <= uVar12) {
      local_4a8 = (char *)uVar12;
    }
    if (~uVar29 <= local_4a8) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if ((uVar32 == 0) && (uVar12 < uVar30)) {
        uVar30 = (ulong)(int)uVar27;
        if (local_478 == 0x30) {
          if (uVar30 != uVar12) {
            lVar20 = 0;
            do {
              lVar20 = lVar20 + 1;
              fputc(0x30,param_1);
            } while (uVar30 - uVar12 != lVar20);
          }
        }
        else {
          lVar20 = 0;
          if (uVar30 != uVar12) {
            do {
              lVar20 = lVar20 + 1;
              fputc(0x20,param_1);
            } while (uVar30 - uVar12 != lVar20);
          }
        }
      }
      if (local_490 == '\0') {
        if (cVar15 == '\0') {
          fwrite((void *)((long)&local_438 + 1),uVar12,1,param_1);
        }
        else {
          FUN_00402590(param_1,(long)&local_438 + 1,uVar12);
        }
      }
      else {
        FUN_00402530(param_1,(long)&local_438 + 1,uVar12);
      }
    }
    goto LAB_00402900;
  case 0x7a:
    lVar20 = 0;
LAB_00403159:
    if (param_3->tm_isdst < 0) goto LAB_0040267a;
    bVar33 = true;
    iVar7 = (int)param_3->tm_gmtoff;
    if ((-1 < iVar7) && (bVar33 = false, iVar7 == 0)) {
      bVar33 = *__s == '-';
    }
    uVar6 = iVar7 / 0xe10;
    uVar23 = (iVar7 / 0x3c) % 0x3c;
    param_2 = pcVar31;
    if (lVar20 == 1) {
LAB_00403d59:
      bVar5 = true;
      uVar26 = 6;
      uVar6 = uVar6 * 100 + uVar23;
      uVar24 = 4;
    }
    else if (lVar20 == 0) {
      uVar24 = 0;
      bVar5 = true;
      uVar26 = 5;
      uVar6 = uVar6 * 100 + uVar23;
    }
    else {
      if (lVar20 != 2) {
        if (lVar20 != 3) {
          cVar14 = *pcVar31;
          goto LAB_00402b9b;
        }
        if (iVar7 % 0x3c == 0) {
          if (uVar23 != 0) goto LAB_00403d59;
          bVar5 = true;
          uVar26 = 3;
          uVar24 = uVar23;
          goto LAB_0040296c;
        }
      }
      bVar5 = true;
      uVar26 = 9;
      uVar24 = 0x14;
      uVar6 = iVar7 % 0x3c + uVar6 * 10000 + uVar23 * 100;
    }
    goto LAB_0040296c;
  }
  pcVar11 = param_2 + -1;
  do {
    pcVar31 = pcVar11;
    pcVar11 = pcVar31 + -1;
  } while (*pcVar31 != '%');
  uVar30 = (ulong)(((int)(param_2 + -1) + 2) - (int)pcVar31);
  uVar6 = 0;
  if (-1 < (int)uVar27) {
    uVar6 = uVar27;
  }
  uVar12 = (ulong)(int)uVar6;
  local_4a8 = (char *)uVar12;
  if (uVar12 <= uVar30) {
    local_4a8 = (char *)uVar30;
  }
LAB_00402bd3:
  if (~uVar29 <= local_4a8) {
    return 0;
  }
  if (param_1 != (FILE *)0x0) {
    if (uVar30 < uVar12) {
      uVar12 = (ulong)(int)uVar27;
      if (local_478 == 0x30) {
        if (uVar12 != uVar30) {
          lVar20 = 0;
          do {
            lVar20 = lVar20 + 1;
            fputc(0x30,param_1);
          } while (uVar12 - uVar30 != lVar20);
        }
      }
      else {
        lVar20 = 0;
        if (uVar12 != uVar30) {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x20,param_1);
          } while (uVar12 - uVar30 != lVar20);
        }
      }
    }
    if (cVar15 == '\0') {
      fwrite(pcVar31,uVar30,1,param_1);
    }
    else {
      FUN_00402590(param_1,pcVar31,uVar30);
    }
  }
LAB_00402900:
  uVar29 = uVar29 + (long)local_4a8;
  pcVar31 = param_2;
LAB_0040267a:
  cVar14 = pcVar31[1];
  param_2 = pcVar31 + 1;
  if (cVar14 == '\0') {
    return uVar29;
  }
  goto LAB_0040265a;
}


void FUN_00403f10(void)

{
  FUN_004025f0();
  return;
}


void FUN_00403f30(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined param_9,undefined param_10,undefined param_11,undefined param_12,
                 undefined param_13,code *param_14)

{
  undefined uVar1;
  char in_AL;
  int iVar2;
  undefined local_f0;
  undefined local_ec;
  undefined *local_e8;
  undefined *local_e0;
  undefined local_d8 [48];
  undefined local_a8;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  undefined local_48;
  undefined local_38;
  
  uVar1 = (undefined)DAT_0060c2b8;
  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  DAT_0060c2b8._0_4_ = 0;
  if ((int)param_9 == 2) {
    iVar2 = FUN_00407200(param_9,param_10,&DAT_004092b8,&PTR_DAT_004092e0,0);
    if (iVar2 != -1) {
      if (iVar2 == 0x68) {
        (*param_14)(0);
      }
      else if (iVar2 == 0x76) {
        local_e8 = &stack0x00000008;
        local_f0 = 0x30;
        local_e0 = local_d8;
        local_ec = 0x30;
        FUN_00406080(stdout,param_11,param_12,param_13,&local_f0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
  }
  DAT_0060c2b8._0_4_ = uVar1;
  DAT_0060c2b8._4_4_ = 0;
  return;
}


void FUN_00404040(byte *param_1)

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
        pbVar6 = &DAT_00409380;
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
  DAT_0060c308 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_004040e0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00407b70();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004041b8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00409391;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00409386;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004041b8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040938d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040938a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_004041e0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00404e31:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00404a66;
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
      goto LAB_00404e31;
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
      param_8 = (char *)FUN_004040e0(&DAT_00409395,param_5);
      param_9 = (char *)FUN_004040e0(&DAT_0040a577);
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
LAB_00404278:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00404288:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00404a08;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00404980:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00404992_caseD_0;
      default:
        bVar20 = false;
        goto switchD_004047fe_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404695;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00404992_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00404992_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00404992_caseD_b:
        bVar17 = 0x76;
        goto LAB_00404695;
      case 0xc:
switchD_00404992_caseD_c:
        bVar17 = 0x66;
LAB_00404695:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004045e8;
        }
LAB_004046a0:
        bVar23 = false;
        goto LAB_0040445b;
      case 0xd:
        bVar20 = false;
switchD_00404378_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004045b0;
      case 0x20:
        bVar25 = false;
LAB_004049da:
        uVar19 = 0x20;
        goto LAB_004049a2;
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
switchD_00404378_caseD_21:
        bVar25 = false;
        goto LAB_004045bb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004049ba:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004043c8;
        }
        bVar23 = false;
        goto LAB_004043df;
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
LAB_004049a2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_004043e1;
      case 0x27:
        bVar20 = false;
        goto switchD_004047fe_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_004047fe_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00404378_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_004047fe_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004045d7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00404980;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00404378_caseD_0;
      default:
        goto switchD_004047fe_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004046a0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00404992_caseD_9;
      case 10:
        goto switchD_00404992_caseD_a;
      case 0xb:
        goto switchD_00404992_caseD_b;
      case 0xc:
        goto switchD_00404992_caseD_c;
      case 0xd:
        goto switchD_00404378_caseD_d;
      case 0x20:
        goto LAB_004049da;
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
        goto switchD_00404378_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004049ba;
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
        goto LAB_004049a2;
      case 0x27:
        goto switchD_004047fe_caseD_27;
      case 0x3f:
        goto switchD_004047fe_caseD_3f;
      case 0x5c:
        goto switchD_00404378_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_004047fe_caseD_7b;
      }
      goto LAB_00404422;
    }
    goto LAB_004045fa;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00404992_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00404378_caseD_0:
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
            goto LAB_004044d8;
          }
LAB_0040471a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040471a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004044d8;
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
LAB_00404759:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004044d8;
        goto LAB_004043e1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004045ec;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004043c8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00404288;
  default:
switchD_004047fe_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00407280(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040510a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00405247;
          goto LAB_00405237;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004045ec;
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
      goto LAB_0040510a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004047d4;
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
    goto LAB_00404812;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00404812;
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
LAB_00404812:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040482a:
      param_5 = 2;
      goto LAB_004045ec;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004043b6;
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
LAB_004043b6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040482a;
    goto LAB_004043c8;
  case 0x23:
  case 0x7e:
LAB_004043ad:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004043b6;
    goto LAB_004045bb;
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
    goto switchD_004047fe_caseD_25;
  case 0x27:
switchD_004047fe_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004043c8;
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
      goto LAB_004044d8;
    }
    goto LAB_004045ec;
  case 0x3f:
switchD_004047fe_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004044d8;
      }
      goto LAB_004045ec;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004043c8;
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
        goto LAB_00404759;
      }
      goto LAB_004045fa;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004043c8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00404378_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004044f4;
    }
    if (local_5c) goto LAB_004045ec;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004044f4;
  case 0x7b:
  case 0x7d:
switchD_004047fe_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_004043ad;
    goto LAB_004045bb;
  }
LAB_004045b0:
  if (!bVar6) {
LAB_004045bb:
    bVar23 = false;
    goto LAB_004043c8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004045d7;
LAB_00404a08:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004045ec:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004045fa:
    uVar9 = FUN_004041e0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004052dd:
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
    uVar9 = FUN_004041e0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004052dd;
LAB_00404a66:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00404278;
  while (__s1[uVar21] != 0) {
LAB_00405237:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00405247:
  bVar23 = false;
LAB_0040510a:
  if (1 < uVar21) {
LAB_00404cce:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004045ec;
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
        if (uVar21 <= uVar22) goto LAB_0040446d;
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
        if (uVar21 <= uVar22) goto LAB_004044f4;
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
LAB_004047d4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00404cce;
  }
switchD_004047fe_caseD_25:
  bVar25 = param_5 == 2;
LAB_004043c8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004043df:
    bVar24 = false;
    bVar20 = bVar26;
LAB_004043e1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004044d8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004044d8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004044f4:
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
      goto LAB_0040446d;
    }
  }
joined_r0x004045d7:
  if (local_5c) {
LAB_004045e8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004045ec;
  }
LAB_00404422:
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
LAB_0040445b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040446d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00404288;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00405410(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060c298;
  if (DAT_0060c2b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00406470();
    }
    if (PTR_DAT_0060c298 == &DAT_0060c2a0) {
      puVar8 = (undefined *)FUN_00406280(0);
      uVar6 = PTR_DAT_0060c2a8._4_4_;
      uVar5 = PTR_DAT_0060c2a8._0_4_;
      uVar3 = _UNK_0060c2a4;
      PTR_DAT_0060c298 = (undefined *)puVar8;
      *puVar8 = _DAT_0060c2a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00406280(PTR_DAT_0060c298);
      PTR_DAT_0060c298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060c2b0 * 4,0,(long)((param_1 + 1) - DAT_0060c2b0) << 4);
    DAT_0060c2b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_004041e0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060c320) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00406220(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_004041e0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004055b0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c420;
  }
  FUN_00406420(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_004055f0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060c420;
  }
  return *param_1;
}


void FUN_00405600(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060c420;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00405610(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c420;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00405650(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c420;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00405670(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060c420;
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


void FUN_004056a0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060c420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_004041e0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00405720(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060c420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_004041e0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00406220(lVar3 + 1);
  FUN_004041e0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00405810(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405720(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405820(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060c298;
  if (1 < DAT_0060c2b0) {
    ppvVar2 = (void **)(PTR_DAT_0060c298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060c298 + (ulong)(DAT_0060c2b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060c320) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060c2a0 = 0x100;
    PTR_DAT_0060c2a8 = &DAT_0060c320;
  }
  if (__ptr_00 != &DAT_0060c2a0) {
    free(__ptr_00);
    PTR_DAT_0060c298 = &DAT_0060c2a0;
  }
  DAT_0060c2b0 = 1;
  return;
}


void FUN_004058c0(undefined param_1,undefined param_2)

{
  FUN_00405410(param_1,param_2,0xffffffffffffffff,&DAT_0060c420);
  return;
}


void FUN_004058e0(void)

{
  FUN_00405410();
  return;
}


void FUN_004058f0(undefined param_1)

{
  FUN_00405410(0,param_1,0xffffffffffffffff,&DAT_0060c420);
  return;
}


void FUN_00405910(undefined param_1,undefined param_2)

{
  FUN_00405410(0,param_1,param_2,&DAT_0060c420);
  return;
}


void FUN_00405930(undefined param_1,int param_2,undefined param_3)

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
    FUN_00405410(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004059a0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00405410(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405a10(undefined param_1,undefined param_2)

{
  FUN_00405930(0,param_1,param_2);
  return;
}


void FUN_00405a20(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004059a0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405a30(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060c450;
  local_48 = _DAT_0060c420;
  uStack_40 = uRam000000000060c428;
  local_38 = _DAT_0060c430;
  uStack_30 = uRam000000000060c438;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060c440;
  uStack_20 = uRam000000000060c448;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00405410(0,param_1,param_2,&local_48);
  return;
}


void FUN_00405aa0(undefined param_1,char param_2)

{
  FUN_00405a30(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00405ab0(undefined param_1)

{
  FUN_00405a30(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00405ad0(undefined param_1,undefined param_2)

{
  FUN_00405a30(param_1,param_2,0x3a);
  return;
}


void FUN_00405ae0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00405410(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405b50(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060c428;
  local_38 = _DAT_0060c430;
  uStack_30 = uRam000000000060c438;
  local_28 = _DAT_0060c440;
  lStack_20 = uRam000000000060c448;
  local_18 = DAT_0060c450;
  local_48 = CONCAT44((int)((ulong)_DAT_0060c420 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00405410(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405bc0(void)

{
  FUN_00405b50();
  return;
}


void FUN_00405bd0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405b50(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00405bf0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00405b50(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00405c10(void)

{
  FUN_00405410();
  return;
}


void FUN_00405c20(undefined param_1,undefined param_2)

{
  FUN_00405410(0,param_1,param_2,&DAT_0060c260);
  return;
}


void FUN_00405c40(undefined param_1,undefined param_2)

{
  FUN_00405410(param_1,param_2,0xffffffffffffffff,&DAT_0060c260);
  return;
}


void FUN_00405c60(undefined param_1)

{
  FUN_00405410(0,param_1,0xffffffffffffffff,&DAT_0060c260);
  return;
}


undefined
FUN_00405c80(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040a0eb,5);
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
    goto LAB_00405efc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00405efc:
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
    goto LAB_00405f99;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405f99:
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
    goto LAB_00405d7a;
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
LAB_00405d7a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00406060(void)

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
  FUN_00405c80();
  return;
}


void FUN_00406080(void)

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
  FUN_00405c80();
  return;
}


void FUN_004060e0(void)

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
  FUN_00405c80();
  return;
}


void FUN_004061a0(void)

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


void FUN_00406220(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406470();
  }
  return;
}


void FUN_00406240(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00406220();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406470();
}


void thunk_FUN_00406220(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406470();
  }
  return;
}


void * FUN_00406280(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406470();
  }
  return pvVar1;
}


void FUN_004062c0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00406280();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406470();
}


void FUN_004062f0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040634b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040634b:
                    /* WARNING: Subroutine does not return */
      FUN_00406470(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00406280(param_1,uVar2 * param_3);
  return;
}


void FUN_00406380(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00406280(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004063ca;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004063ca:
                    /* WARNING: Subroutine does not return */
      FUN_00406470();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00406280(param_1,uVar1);
  return;
}


void FUN_004063d0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00406220();
  memset(__s,0,param_1);
  return;
}


void FUN_004063f0(size_t param_1,ulong param_2)

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
  FUN_00406470();
}


void FUN_00406420(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00406220(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00406450(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00406220(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00406470(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060c258,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004064b0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040652c;
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
      if (iVar9 <= iVar3) goto LAB_0040652c;
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
LAB_0040652c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00406590(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004067b0;
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
            if (local_70 == (char *)0x0) goto LAB_004066f0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_004066f0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_004066f0:
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
              __fprintf_chk(__stream,1,&DAT_0040a571,param_9,*param_4);
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
LAB_004067b0:
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


uint FUN_00406bb0(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00406bfa:
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
          goto LAB_00406cfd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00406cfd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00406d08:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00406c78;
LAB_00406d1c:
    if (*pbVar8 == 0) goto LAB_00406c78;
  }
  else {
    if (param_7[6] == 0) goto LAB_00406bfa;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00406d08;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00406d1c;
LAB_00406c78:
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
        FUN_004064b0(param_2,param_7);
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
LAB_00406de6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040a589;
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
          FUN_004064b0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00406de6;
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
        puVar15 = &DAT_0040a589;
        goto LAB_00406f45;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406ef0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00406590(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040a58a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406ef0:
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
  puVar15 = &DAT_0040a5a8;
LAB_00406f45:
  uVar3 = FUN_00406590(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407180(void)

{
  DAT_0060c460 = DAT_0060c2b8._4_4_;
  _DAT_0060c464 = (undefined)DAT_0060c2b8;
  FUN_00406bb0();
  DAT_0060c2b8._4_4_ = DAT_0060c460;
  _DAT_0060c4b0 = DAT_0060c470;
  _DAT_0060c2b4 = DAT_0060c468;
  return;
}


void FUN_004071e0(void)

{
  FUN_00407180();
  return;
}


void FUN_00407200(void)

{
  FUN_00407180();
  return;
}


void FUN_00407220(void)

{
  FUN_00406bb0();
  return;
}


void FUN_00407240(void)

{
  FUN_00407180();
  return;
}


void FUN_00407260(void)

{
  FUN_00406bb0();
  return;
}


size_t FUN_00407280(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40a5a7;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_004072a4;
  }
  param_1 = &local_1c;
LAB_004072a4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00407b10(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


char * FUN_00407300(long param_1)

{
  char *__dest;
  size_t sVar1;
  char *pcVar2;
  
  __dest = (char *)FUN_00406220(0x21);
  strncpy(__dest,(char *)(param_1 + 0x2c),0x20);
  __dest[0x20] = '\0';
  sVar1 = strlen(__dest);
  pcVar2 = __dest + sVar1;
  if (__dest < pcVar2) {
    do {
      if (pcVar2[-1] != ' ') {
        return __dest;
      }
      pcVar2 = pcVar2 + -1;
      *pcVar2 = '\0';
    } while (__dest != pcVar2);
  }
  return __dest;
}


undefined FUN_00407360(char *param_1,ulong *param_2,long *param_3,uint param_4)

{
  int iVar1;
  utmpx *puVar2;
  undefined *puVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  lVar6 = 0;
  uVar9 = 0;
  uVar7 = 0;
  utmpxname(param_1);
  setutxent();
LAB_00407397:
  puVar2 = getutxent();
  do {
    if (puVar2 == (utmpx *)0x0) {
      endutxent();
      *param_2 = uVar7;
      *param_3 = lVar6;
      return 0;
    }
    if ((puVar2->ut_user[0] == '\0') || (puVar2->ut_type != 7)) {
      if ((param_4 & 2) != 0) goto LAB_00407397;
LAB_004073bb:
      if (uVar7 != uVar9) goto LAB_004073c4;
LAB_00407480:
      if (lVar6 == 0) {
        if (uVar7 == 0) {
          lVar4 = 0x180;
          uVar9 = 1;
          uVar8 = 1;
        }
        else {
          if ((SUB168(ZEXT816(0x180) * ZEXT816(uVar7),0) < 0) ||
             (SUB168(ZEXT816(0x180) * ZEXT816(uVar7) >> 0x40,0) != 0)) goto LAB_00407503;
          uVar8 = uVar7 + 1;
          lVar4 = uVar7 * 0x180;
        }
      }
      else {
        if (0x38e38e38e38e37 < uVar7) {
LAB_00407503:
                    /* WARNING: Subroutine does not return */
          FUN_00406470();
        }
        uVar8 = uVar7 + 1;
        uVar9 = (uVar7 >> 1) + uVar8;
        lVar4 = uVar9 * 0x180;
      }
      lVar6 = FUN_00406280(lVar6,lVar4);
    }
    else {
      if ((((param_4 & 1) == 0) || (puVar2->ut_pid < 1)) ||
         (iVar1 = kill(puVar2->ut_pid,0), -1 < iVar1)) goto LAB_004073bb;
      piVar5 = __errno_location();
      if (*piVar5 == 3) goto LAB_00407397;
      if (uVar7 == uVar9) goto LAB_00407480;
LAB_004073c4:
      uVar8 = uVar7 + 1;
    }
    puVar3 = (undefined *)(uVar7 * 0x180 + lVar6);
    *puVar3 = *(undefined *)puVar2;
    puVar3[0x2f] = *(undefined *)puVar2->__unused;
    lVar4 = (long)puVar3 - (long)(undefined *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    puVar10 = (undefined *)((long)puVar2 - lVar4);
    puVar3 = (undefined *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    for (uVar7 = (ulong)((int)lVar4 + 0x180U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar10;
      puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar11 * -2 + 1;
    }
    puVar2 = getutxent();
    uVar7 = uVar8;
  } while( true );
}


bool FUN_00407510(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = unsetenv("TZ");
  }
  else {
    iVar1 = setenv("TZ",(char *)(param_1 + 9),1);
  }
  if (iVar1 == 0) {
    tzset();
  }
  return iVar1 == 0;
}


void FUN_00407560(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*param_1;
    free(param_1);
    param_1 = plVar1;
  } while (plVar1 != (long *)0x0);
  return;
}


undefined FUN_00407590(undefined param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = __errno_location();
  iVar3 = *piVar2;
  uVar1 = FUN_00407510(param_1);
  if ((char)uVar1 == '\0') {
    iVar3 = *piVar2;
  }
  FUN_00407560(param_1);
  *piVar2 = iVar3;
  return uVar1;
}


undefined * FUN_004075e0(char *param_1)

{
  ulong __n;
  size_t sVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_1 == (char *)0x0) {
    puVar2 = (undefined *)malloc(0x80);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 1) = 0;
      return puVar2;
    }
  }
  else {
    sVar1 = strlen(param_1);
    __n = sVar1 + 1;
    uVar3 = 0x76;
    if (0x75 < __n) {
      uVar3 = __n;
    }
    puVar2 = (undefined *)malloc(uVar3 + 0x11 & 0xfffffffffffffff8);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 1) = 1;
      memcpy((void *)((long)puVar2 + 9),param_1,__n);
      *(undefined *)((long)puVar2 + sVar1 + 10) = 0;
    }
  }
  return puVar2;
}


undefined FUN_00407670(long *param_1,char *param_2)

{
  char *__s2;
  long *plVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  char *__s1;
  
  __s2 = *(char **)(param_2 + 0x30);
  if (__s2 == (char *)0x0) {
    return 1;
  }
  if ((__s2 < param_2) || (param_2 + 0x38 <= __s2)) {
    __s1 = (char *)((long)param_1 + 9);
    if (*__s2 == '\0') {
      __s1 = "";
    }
    else {
LAB_004076b8:
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 != 0) {
        do {
          if (*__s1 == '\0') {
            if ((char *)((long)param_1 + 9) == __s1) {
              if (*(char *)(param_1 + 1) != '\0') goto LAB_004076e3;
              sVar3 = strlen(__s2);
              sVar3 = sVar3 + 1;
              uVar4 = 0;
            }
            else {
              sVar3 = strlen(__s2);
              sVar3 = sVar3 + 1;
              uVar4 = (long)__s1 - (long)(char *)((long)param_1 + 9);
              if (~uVar4 < sVar3) {
                piVar5 = __errno_location();
                *piVar5 = 0xc;
                return 0;
              }
            }
            if (uVar4 + sVar3 < 0x77) {
              memcpy(__s1,__s2,sVar3);
              __s1[sVar3] = '\0';
            }
            else {
              lVar6 = FUN_004075e0(__s2);
              *param_1 = lVar6;
              if (lVar6 == 0) {
                return 0;
              }
              *(undefined *)(lVar6 + 8) = 0;
              __s1 = (char *)(lVar6 + 9);
            }
            break;
          }
LAB_004076e3:
          sVar3 = strlen(__s1);
          __s1 = __s1 + sVar3 + 1;
          if ((*__s1 != '\0') || (plVar1 = (long *)*param_1, plVar1 == (long *)0x0))
          goto LAB_004076b8;
          __s1 = (char *)((long)plVar1 + 9);
          iVar2 = strcmp(__s1,__s2);
          param_1 = plVar1;
          if (iVar2 == 0) break;
        } while( true );
      }
    }
    *(char **)(param_2 + 0x30) = __s1;
  }
  return 1;
}


long FUN_004077f0(long param_1)

{
  char cVar1;
  int iVar2;
  char *__s2;
  long lVar3;
  int *piVar4;
  
  __s2 = getenv("TZ");
  if (__s2 == (char *)0x0) {
    if (*(char *)(param_1 + 8) == '\0') {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 8) != '\0') {
    iVar2 = strcmp((char *)(param_1 + 9),__s2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  lVar3 = FUN_004075e0(__s2);
  if (lVar3 != 0) {
    cVar1 = FUN_00407510(param_1);
    if (cVar1 == '\0') {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      if (lVar3 != 1) {
        FUN_00407560(lVar3);
      }
      *piVar4 = iVar2;
      return 0;
    }
  }
  return lVar3;
}


void FUN_004078a0(long param_1)

{
  if (param_1 != 1) {
    FUN_00407560();
    return;
  }
  return;
}


tm * FUN_004078c0(long param_1,time_t *param_2,tm *param_3)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  
  if (param_1 == 0) {
    ptVar3 = gmtime_r(param_2,param_3);
    return ptVar3;
  }
  lVar2 = FUN_004077f0();
  if (lVar2 != 0) {
    ptVar3 = localtime_r(param_2,param_3);
    if ((ptVar3 == (tm *)0x0) || (cVar1 = FUN_00407670(param_1,param_3), cVar1 == '\0')) {
      if (lVar2 != 1) {
        FUN_00407590(lVar2);
      }
    }
    else if ((lVar2 == 1) || (cVar1 = FUN_00407590(lVar2), cVar1 != '\0')) {
      return param_3;
    }
  }
  return (tm *)0x0;
}


long FUN_00407970(long param_1,uint *param_2)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  long local_60;
  tm local_58;
  
  if (param_1 == 0) {
    lVar2 = FUN_00407a90(param_2);
    return lVar2;
  }
  lVar2 = FUN_004077f0();
  if (lVar2 != 0) {
    local_60 = FUN_004088c0(param_2);
    if (((local_60 != -1) ||
        (((ptVar3 = localtime_r(&local_60,&local_58), ptVar3 != (tm *)0x0 &&
          ((((param_2[8] == 0) == (local_58.tm_isdst == 0) || ((int)param_2[8] < 0)) ||
           (local_58.tm_isdst < 0)))) &&
         ((param_2[4] ^ local_58.tm_mon | param_2[5] ^ local_58.tm_year |
           param_2[3] ^ local_58.tm_mday | param_2[2] ^ local_58.tm_hour |
           param_2[1] ^ local_58.tm_min | *param_2 ^ local_58.tm_sec) == 0)))) &&
       (cVar1 = FUN_00407670(param_1,param_2), cVar1 == '\0')) {
      local_60 = -1;
    }
    if (lVar2 == 1) {
      return local_60;
    }
    cVar1 = FUN_00407590(lVar2);
    if (cVar1 != '\0') {
      return local_60;
    }
  }
  return -1;
}


void FUN_00407a90(long param_1)

{
  *(undefined *)(param_1 + 0x20) = 0;
  FUN_00408480(param_1,gmtime_r,&DAT_0060c498);
  return;
}


ulong FUN_00407ab0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004080e0(param_1);
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


bool FUN_00407b10(int param_1)

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
    pbVar5 = &DAT_0040a5af;
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

char * FUN_00407b70(void)

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
  if (DAT_0060c4a0 != (char *)0x0) goto LAB_00407baa;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00407c95:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00407cb6;
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
        goto LAB_00407c95;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00407cb6:
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
LAB_00407d50:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00407edc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00407d50;
              if (uVar4 == 0x23) goto LAB_00407f41;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00407eef;
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
                FUN_004080e0(__stream);
                goto LAB_00407cf4;
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
LAB_00407edc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00407eef;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00407cee;
    }
  }
  DAT_0060c4a0 = "";
LAB_00407baa:
  cVar1 = *DAT_0060c4a0;
  pcVar7 = DAT_0060c4a0;
  do {
    if (cVar1 == '\0') {
LAB_00407c04:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00407c04;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00407f41:
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
  if (uVar4 == 0xffffffff) goto LAB_00407eef;
  goto LAB_00407d50;
LAB_00407eef:
  FUN_004080e0(__stream);
  if (local_d0 == 0) {
LAB_00407cee:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00407cf4:
  free(__file);
  DAT_0060c4a0 = pcVar7;
  goto LAB_00407baa;
}


int FUN_004080e0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00408147;
    }
    iVar1 = FUN_00408160(param_1);
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
LAB_00408147:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00408160(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004081a0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_004081a0(FILE *param_1,__off_t param_2,int param_3)

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


long FUN_00408200(ulong param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = ((int)((long)param_1 >> 2) + 0x1db) - (uint)((param_1 & 3) == 0);
  iVar4 = ((int)((long)(int)param_6 >> 2) + 0x1db) - (uint)((param_6 & 3) == 0);
  iVar2 = iVar3 / 0x19 + (iVar3 % 0x19 >> 0x1f);
  iVar1 = iVar4 / 0x19 + (iVar4 % 0x19 >> 0x1f);
  return ((long)param_5 +
         (((long)param_4 +
          (((long)param_3 +
           (((param_2 + (param_1 - (long)(int)param_6) * 0x16d) - (long)param_7) +
           (long)(((iVar2 >> 2) - (iVar1 >> 2)) + ((iVar3 - iVar4) - (iVar2 - iVar1)))) * 0x18) -
          (long)param_8) * 0x3c) - (long)param_9) * 0x3c) - (long)param_10;
}


long FUN_00408320(void)

{
  long lVar1;
  long in_R9;
  long param_7;
  
  if (param_7 != 0) {
    lVar1 = FUN_00408200();
    if (!SCARRY8(lVar1,in_R9)) {
      return lVar1 + in_R9;
    }
  }
  if (-1 < in_R9) {
    lVar1 = 0x7fffffffffffffff;
    if (0x7ffffffffffffffd < in_R9) {
      lVar1 = in_R9 + -1;
    }
    return lVar1;
  }
  if (in_R9 < -0x7ffffffffffffffe) {
    return in_R9 + 1;
  }
  return -0x8000000000000000;
}


void FUN_004083c0(code *param_1,long *param_2,undefined param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_30;
  
  local_30 = *param_2;
  lVar2 = (*param_1)(&local_30,param_3);
  if (lVar2 == 0) {
    lVar1 = 0;
    lVar5 = *param_2;
    if (*param_2 != 0) {
      while ((lVar4 = lVar1,
             lVar3 = (ulong)(((uint)lVar4 | (uint)lVar5) & 1) + (lVar5 >> 1) + (lVar4 >> 1),
             lVar4 == lVar3 || (lVar5 == lVar3))) {
        local_30 = lVar3;
        lVar2 = (*param_1)(&local_30,param_3);
        lVar1 = lVar3;
        if (lVar2 == 0) {
          lVar1 = lVar4;
          lVar5 = lVar3;
        }
      }
      if ((lVar2 == 0) && (lVar4 != 0)) {
        local_30 = lVar4;
        (*param_1)(&local_30,param_3);
        return;
      }
    }
  }
  return;
}


long FUN_00408480(int *param_1,code *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  int local_e0;
  long local_c8;
  long local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined local_88;
  long local_78 [4];
  int local_58;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[8];
  uVar11 = 0;
  iVar15 = param_1[4] % 0xc;
  uVar5 = iVar15 >> 0x1f;
  uVar12 = (long)(int)(param_1[4] / 0xc + uVar5) + (long)param_1[5];
  if ((uVar12 & 3) == 0) {
    uVar11 = 1;
    if (uVar12 == ((long)uVar12 / 100) * 100) {
      uVar11 = (uint)(((uint)((long)uVar12 / 100) & 3) == 1);
    }
  }
  iVar13 = 6;
  lVar14 = (long)param_1[3] +
           (long)(int)(*(ushort *)
                        (&DAT_0040a640 +
                        ((long)(int)(iVar15 + (uVar5 & 0xc)) + (long)(int)uVar11 * 0xd) * 2) - 1);
  iVar15 = 0x3b;
  if (iVar1 < 0x3c) {
    iVar15 = iVar1;
  }
  iVar6 = 0;
  if (-1 < iVar15) {
    iVar6 = iVar15;
  }
  local_e0 = (int)*param_3;
  lVar7 = FUN_00408200(uVar12,lVar14,iVar3,iVar2,iVar6,0x46,0,0,0,-local_e0);
  bVar19 = false;
  lVar17 = lVar7;
  lVar18 = lVar7;
  local_c8 = lVar7;
  while( true ) {
    uVar8 = FUN_004083c0(param_2,&local_c8,&local_b8);
    lVar10 = local_c8;
    lVar9 = FUN_00408320(uVar12,lVar14,iVar3,iVar2,iVar6,local_c8,uVar8);
    if (lVar10 == lVar9) break;
    if ((lVar10 == lVar17) && (lVar10 != lVar18)) {
      if (local_98 < 0) goto LAB_00408690;
      if (iVar4 < 0) {
        if (bVar19 <= (local_98 != 0)) goto LAB_00408690;
      }
      else if ((iVar4 != 0) != (local_98 != 0)) goto LAB_00408690;
    }
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) goto LAB_00408740;
    bVar19 = local_98 != 0;
    lVar17 = lVar18;
    lVar18 = lVar10;
    local_c8 = lVar9;
  }
  lVar10 = lVar9;
  if ((((iVar4 == 0) != (local_98 == 0)) && (-1 < iVar4)) && (-1 < local_98)) {
    iVar15 = 0x92c70;
    do {
      iVar16 = 2;
      iVar13 = -iVar15;
      bVar19 = SCARRY8((long)iVar13,lVar10);
      local_c0 = iVar13 + lVar10;
      while( true ) {
        if (!bVar19) {
          uVar8 = 0x408845;
          FUN_004083c0(param_2,&local_c0,local_78);
          if (((iVar4 == 0) == (local_58 == 0)) || (lVar10 = local_c8, local_58 < 0)) {
            local_c8 = FUN_00408320(uVar12,lVar14,iVar3,iVar2,iVar6,local_c0,local_78);
            FUN_004083c0(param_2,&local_c8,&local_b8,uVar8);
            lVar10 = local_c8;
            goto LAB_00408690;
          }
        }
        iVar13 = iVar13 + iVar15 * 2;
        if (iVar16 == 1) break;
        iVar16 = 1;
        bVar19 = SCARRY8((long)iVar13,lVar10);
        local_c0 = iVar13 + lVar10;
      }
      iVar15 = iVar15 + 0x92c70;
    } while (iVar15 != 0x100dc400);
  }
LAB_00408690:
  *param_3 = lVar10 - (-local_e0 + lVar7);
  local_c8 = lVar10;
  if ((local_b8 == iVar1) ||
     ((lVar14 = (long)iVar1 + ((ulong)(iVar1 < 1 && local_b8 == 0x3c) - (long)iVar6),
      local_c8 = lVar10 + lVar14, !SCARRY8(lVar10,lVar14) &&
      (local_78[0] = local_c8, lVar14 = (*param_2)(local_78,&local_b8), lVar14 != 0)))) {
    *param_1 = local_b8;
    param_1[1] = iStack_b4;
    param_1[2] = iStack_b0;
    param_1[3] = iStack_ac;
    param_1[4] = local_a8;
    param_1[5] = iStack_a4;
    param_1[6] = iStack_a0;
    param_1[7] = iStack_9c;
    param_1[8] = local_98;
    param_1[9] = iStack_94;
    param_1[10] = iStack_90;
    param_1[0xb] = iStack_8c;
    *(undefined *)(param_1 + 0xc) = local_88;
  }
  else {
LAB_00408740:
    local_c8 = -1;
  }
  return local_c8;
}


void FUN_004088c0(undefined param_1)

{
  tzset();
  FUN_00408480(param_1,localtime_r,&DAT_0060c4a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408913) */
/* WARNING: Removing unreachable block (ram,0x00408918) */

void FUN_004088e0(void)

{
  __DT_INIT();
  return;
}


void FUN_00408940(void)

{
  return;
}


void FUN_00408950(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060c248);
  return;
}


undefined FUN_00408968(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060be30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401d51();
  return;
}

