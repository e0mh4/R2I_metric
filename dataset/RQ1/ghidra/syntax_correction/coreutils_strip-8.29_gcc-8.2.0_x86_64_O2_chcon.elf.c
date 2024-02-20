
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00402fa0caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d75(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d7a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d7f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d84(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00404acacaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d8e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d93(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d98(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d9d(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401da2(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401da7(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401dac(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_00401dc0(int param_1,undefined *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined uVar8;
  uint uVar9;
  undefined uVar10;
  char *pcVar11;
  int *piVar12;
  uint uVar13;
  undefined uVar14;
  ulong uVar15;
  long local_58;
  long local_40 [2];
  
  uVar15 = 0xffffffff;
  uVar14 = 0;
  piVar12 = (int *)(long)param_1;
  uVar10 = 0x10;
  uVar8 = 0;
  FUN_00402db0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040adc0(FUN_00402d10);
  local_58 = 0;
LAB_00401e30:
  iVar5 = FUN_00408310((ulong)piVar12 & 0xffffffff,param_2,"HLPRhvu:r:t:l:",
                       &PTR_s_recursive_0040bb80,0);
  bVar2 = DAT_00610341;
  if (iVar5 == -1) {
    iVar5 = (int)uVar15;
    if (DAT_00610341 == 0) {
      DAT_00610342 = iVar5 != 0;
      uVar10 = 0x10;
LAB_00401fd6:
      uVar9 = (uint)uVar10;
      uVar15 = (ulong)DAT_006102dc;
      iVar5 = (int)piVar12 - DAT_006102dc;
      bVar3 = local_58 != 0 | (byte)uVar8;
      if (bVar3 == 0) {
        if (1 < iVar5) goto LAB_00402771;
      }
      else if (0 < iVar5) {
        piVar7 = __errno_location();
        piVar12 = piVar7;
        if (local_58 != 0) goto LAB_00402711;
        DAT_00610330 = 0;
        if ((bVar2 == 0) || ((char)uVar14 == '\0')) {
          DAT_00610338 = (long *)0x0;
        }
        else {
          DAT_00610338 = (long *)FUN_004049f0(&DAT_00610320);
          uVar15 = (ulong)DAT_006102dc;
          if (DAT_00610338 == (long *)0x0) {
            lVar6 = FUN_00404780(4,"/");
            uVar10 = dcgettext(0,"failed to get attributes of %s",5);
            error(1,*piVar7,uVar10,lVar6);
            goto LAB_00402608;
          }
        }
        param_2 = (undefined *)FUN_00405270(param_2 + uVar15,uVar9 | 8,0);
        uVar9 = (uint)bVar3;
        lVar6 = fts_read(param_2);
        goto joined_r0x00402064;
      }
      if ((int)piVar12 <= DAT_006102dc) {
        uVar14 = dcgettext(0,"missing operand",5);
        error(0,0,uVar14);
        goto LAB_00401f37;
      }
    }
    else {
      if ((int)uVar10 == 0x10) {
        uVar15 = (ulong)(iVar5 - 1U);
        if (iVar5 - 1U != 0) {
          DAT_00610342 = false;
          goto LAB_00401fd6;
        }
LAB_004026ef:
        uVar14 = dcgettext(0,"-R --dereference requires either -H or -L",5);
        piVar7 = (int *)error(1,0,uVar14);
LAB_00402711:
        *piVar7 = 0x5f;
        uVar14 = FUN_00404780(4,local_58);
        uVar10 = dcgettext(0,"failed to get security context of %s",5);
        error(1,*piVar12,uVar10,uVar14);
      }
      else if (iVar5 != 0) {
        DAT_00610342 = true;
        goto LAB_00401fd6;
      }
      uVar14 = dcgettext(0,"-R -h requires -P",5);
      error(1,0,uVar14);
LAB_00402771:
      uVar14 = param_2[uVar15];
      DAT_006102dc = (int)uVar15 + 1;
      DAT_00610330 = uVar14;
      piVar7 = __errno_location();
      *piVar7 = 0x5f;
      uVar10 = FUN_004049d0(uVar14);
      uVar14 = dcgettext(0,"invalid context: %s",5);
      error(1,*piVar7,uVar14,uVar10);
    }
    uVar8 = FUN_004049d0(param_2[(long)piVar12 + -1]);
    uVar14 = dcgettext(0,"missing operand after %s",5);
    error(0,0,uVar14,uVar8);
    goto LAB_00401f37;
  }
  if (iVar5 == 0x6c) {
LAB_00401e98:
    uVar8 = 1;
    goto LAB_00401e30;
  }
  if (iVar5 < 0x6d) {
    if (iVar5 == 0x4c) {
      uVar10 = 2;
      goto LAB_00401e30;
    }
    if (iVar5 < 0x4d) {
      if (iVar5 == -0x82) {
        FUN_004028e0(0);
        goto LAB_004026ef;
      }
      if (iVar5 == 0x48) {
        uVar10 = 0x11;
        goto LAB_00401e30;
      }
      if (iVar5 == -0x83) {
        FUN_00404ea0(stdout,"chcon","GNU coreutils",PTR_DAT_00610270,"Russell Coker","Jim Meyering",
                     0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else {
      if (iVar5 == 0x52) {
        DAT_00610341 = 1;
        goto LAB_00401e30;
      }
      if (iVar5 < 0x53) {
        if (iVar5 != 0x50) goto LAB_00401f37;
        uVar10 = 0x10;
        goto LAB_00401e30;
      }
      if (iVar5 == 0x66) goto LAB_00401e30;
      if (iVar5 == 0x68) {
        uVar15 = 0;
        goto LAB_00401e30;
      }
    }
  }
  else {
    if (iVar5 == 0x76) {
      DAT_00610340 = '\x01';
      goto LAB_00401e30;
    }
    if (iVar5 < 0x77) {
      if (((iVar5 == 0x74) || (0x74 < iVar5)) || (iVar5 == 0x72)) goto LAB_00401e98;
    }
    else {
      if (iVar5 == 0x81) goto LAB_00401f48;
      if (iVar5 < 0x82) {
        if (iVar5 != 0x80) goto LAB_00401f37;
        uVar15 = 1;
        goto LAB_00401e30;
      }
      if (iVar5 == 0x82) {
        uVar14 = 1;
        goto LAB_00401e30;
      }
      if (iVar5 == 0x83) {
        local_58 = DAT_006104e8;
        goto LAB_00401e30;
      }
    }
  }
LAB_00401f37:
  FUN_004028e0(1);
LAB_00401f48:
  uVar14 = 0;
  goto LAB_00401e30;
joined_r0x00402064:
  if (lVar6 == 0) {
    if (*piVar7 != 0) {
      uVar9 = 0;
      uVar14 = dcgettext(0,"fts_read failed",5);
      error(0,*piVar7,uVar14);
    }
    iVar5 = fts_close(param_2);
    if (iVar5 != 0) {
      uVar9 = 0;
      uVar14 = dcgettext(0,"fts_close failed",5);
      error(0,*piVar7,uVar14);
    }
    return uVar9 ^ 1;
  }
  pcVar11 = *(char **)(lVar6 + 0x38);
  switch(*(undefined *)(lVar6 + 0x70)) {
  default:
    goto switchD_00402083_caseD_0;
  case 1:
    uVar13 = (uint)DAT_00610341;
    if (DAT_00610341 == 0) goto switchD_00402083_caseD_0;
    if (((DAT_00610338 != (long *)0x0) && (*(long *)(lVar6 + 0x80) == *DAT_00610338)) &&
       (*(long *)(lVar6 + 0x78) == DAT_00610338[1])) {
      iVar5 = strcmp(pcVar11,"/");
      if (iVar5 == 0) {
        uVar14 = FUN_00404780(4,pcVar11);
        uVar10 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
        error(0,0,uVar10,uVar14);
      }
      else {
        uVar14 = FUN_004046a0(1,4,"/");
        uVar10 = FUN_004046a0(0,4,pcVar11);
        uVar8 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
        error(0,0,uVar8,uVar10,uVar14);
      }
      uVar13 = 0;
      uVar14 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
      error(0,0,uVar14);
      fts_set(param_2,lVar6,4);
      fts_read(param_2);
    }
    goto LAB_004020df;
  case 2:
    cVar4 = FUN_004052c0(param_2,lVar6);
    if (cVar4 != '\0') {
      uVar14 = FUN_00404850(0,3,pcVar11);
      uVar10 = dcgettext(0,
                         "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                         ,5);
      uVar13 = 0;
      error(0,0,uVar10,uVar14);
      goto LAB_004020df;
    }
switchD_00402083_caseD_0:
    uVar14 = *(undefined *)(lVar6 + 0x30);
    if (DAT_00610340 != '\0') {
      uVar10 = FUN_00404780(4,pcVar11);
      uVar8 = dcgettext(0,"changing security context of %s\n",5);
      __printf_chk(1,uVar8,uVar10);
    }
    lVar1 = DAT_00610330;
    local_40[0] = 0;
    if (DAT_00610330 == 0) {
      if (DAT_00610342 == '\0') {
        iVar5 = thunk_FUN_00408410(*(undefined *)((long)param_2 + 0x2c),uVar14,local_40);
      }
      else {
        iVar5 = FUN_00408410();
      }
      if ((iVar5 < 0) && (*piVar7 != 0x3d)) {
        uVar14 = FUN_00404780(4,uVar14);
        pcVar11 = "failed to get security context of %s";
      }
      else {
        if (local_40[0] == 0) {
LAB_00402608:
          uVar14 = FUN_00404780(4,uVar14);
          uVar10 = dcgettext(0,"can\'t apply partial context to unlabeled file %s",5);
          uVar13 = 0;
          error(0,0,uVar10,uVar14);
          break;
        }
        *piVar7 = 0x5f;
        uVar14 = FUN_004049d0();
        pcVar11 = "failed to create security context: %s";
      }
      uVar10 = dcgettext(0,pcVar11,5);
      uVar13 = 0;
      error(0,*piVar7,uVar10,uVar14);
    }
    else {
      if (DAT_00610342 == '\0') {
        iVar5 = thunk_FUN_00408410(*(undefined *)((long)param_2 + 0x2c),uVar14,DAT_00610330);
      }
      else {
        iVar5 = thunk_FUN_00408410();
      }
      if (iVar5 == 0) {
        uVar13 = (uint)bVar3;
      }
      else {
        uVar10 = FUN_004049b0(1,lVar1);
        uVar14 = FUN_004046a0(0,4,uVar14);
        uVar8 = dcgettext(0,"failed to change context of %s to %s",5);
        uVar13 = 0;
        error(0,*piVar7,uVar8,uVar14,uVar10);
      }
    }
    break;
  case 4:
    uVar14 = FUN_00404780(4,pcVar11);
    pcVar11 = "cannot read directory %s";
    goto LAB_004020b6;
  case 6:
    if (DAT_00610341 == 0) {
LAB_00402457:
      uVar13 = (uint)bVar3;
      goto LAB_004020df;
    }
    if (((DAT_00610338 == (long *)0x0) || (*(long *)(lVar6 + 0x80) != *DAT_00610338)) ||
       (*(long *)(lVar6 + 0x78) != DAT_00610338[1])) goto switchD_00402083_caseD_0;
    iVar5 = strcmp(pcVar11,"/");
    if (iVar5 == 0) {
      uVar14 = FUN_00404780(4,pcVar11);
      uVar10 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
      error(0,0,uVar10,uVar14);
    }
    else {
      uVar14 = FUN_004046a0(1,4,"/");
      uVar10 = FUN_004046a0(0,4,pcVar11);
      uVar8 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
      error(0,0,uVar8,uVar10,uVar14);
    }
    uVar13 = 0;
    uVar14 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
    error(0,0,uVar14);
    break;
  case 7:
    uVar13 = 0;
    uVar14 = FUN_00404850(0,3,pcVar11);
    error(0,*(undefined *)(lVar6 + 0x40),"%s",uVar14);
    break;
  case 10:
    if ((*(long *)(lVar6 + 0x58) == 0) && (*(long *)(lVar6 + 0x20) == 0)) {
      *(undefined *)(lVar6 + 0x20) = 1;
      fts_set(param_2,lVar6,1);
      goto LAB_00402457;
    }
    uVar14 = FUN_00404780(4,pcVar11);
    pcVar11 = "cannot access %s";
LAB_004020b6:
    uVar10 = dcgettext(0,pcVar11,5);
    uVar13 = 0;
    error(0,*(undefined *)(lVar6 + 0x40),uVar10,uVar14);
  }
  if (DAT_00610341 == 0) {
    fts_set(param_2,lVar6,4);
  }
LAB_004020df:
  uVar9 = uVar9 & uVar13;
  lVar6 = fts_read();
  goto joined_r0x00402064;
}


void FUN_00402800(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060fff0)
            (FUN_00401dc0,unaff_retaddr,&stack0x00000008,FUN_0040ad50,FUN_0040adb0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402838) */
/* WARNING: Removing unreachable block (ram,0x00402842) */

void FUN_0040282b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402879) */

void FUN_0040284a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004028b6) */

void FUN_00402881(void)

{
  if (DAT_00610308 != '\0') {
    return;
  }
  FUN_0040282b();
  DAT_00610308 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402879) */

void thunk_FUN_0040284a(void)

{
  return;
}


void FUN_004028e0(int param_1)

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
  
  uVar7 = DAT_00610358;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040291f;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... CONTEXT FILE...\n  or:  %s [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t TYPE] FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -u, --user=USER        set user USER in the target security context\n  -r, --role=ROLE        set role ROLE in the target security context\n  -t, --type=TYPE        set type TYPE in the target security context\n  -l, --range=RANGE      set range RANGE in the target security context\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-preserve-root  do not treat \'/\' specially (the default)\n      --preserve-root    fail to operate recursively on \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --reference=RFILE  use RFILE\'s security context rather than specifying\n                         a CONTEXT value\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -R, --recursive        operate on files and directories recursively\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v, --verbose          output a diagnostic for every file processed\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links (default)\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040ae2a;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40aea4;
  local_78[1] = (byte *)0x40ae3c;
  local_78[2] = (byte *)0x40ae52;
  local_78[3] = (byte *)0x40ae5c;
  local_78[4] = (byte *)0x40ae6b;
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
    lVar9 = 6;
    pbVar10 = (byte *)"chcon";
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
        pcVar4 = "chcon";
        goto LAB_00402cc3;
      }
    }
    pcVar4 = "chcon";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","chcon");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00402cc3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"chcon");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","chcon");
    if (pcVar4 != "chcon") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_0040291f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402cf0(undefined param_1)

{
  DAT_00610350 = param_1;
  return;
}


void FUN_00402d00(undefined param_1)

{
  DAT_00610348 = param_1;
  return;
}


void FUN_00402d10(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00408530(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00610348 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00610350 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404820();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402d8e;
    }
  }
  iVar1 = FUN_00408530(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402d8e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00610278);
}


void FUN_00402db0(byte *param_1)

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
        pbVar6 = &DAT_0040bd98;
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
  DAT_00610358 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00402e50(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004099e0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00402f28:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040bda9;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040bd9e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00402f28;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040bda5;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040bda2;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402f50(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403ba1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_004037d6;
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
      goto LAB_00403ba1;
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
      param_8 = (char *)FUN_00402e50(&DAT_0040bdad,param_5);
      param_9 = (char *)FUN_00402e50(&DAT_0040d234);
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
LAB_00402fe8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00402ff8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403778;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004036f0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403702_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040356e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403405;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403702_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403702_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403702_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403405;
      case 0xc:
switchD_00403702_caseD_c:
        bVar17 = 0x66;
LAB_00403405:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403358;
        }
LAB_00403410:
        bVar23 = false;
        goto LAB_004031cb;
      case 0xd:
        bVar20 = false;
switchD_004030e8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403320;
      case 0x20:
        bVar25 = false;
LAB_0040374a:
        uVar19 = 0x20;
        goto LAB_00403712;
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
switchD_004030e8_caseD_21:
        bVar25 = false;
        goto LAB_0040332b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040372a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403138;
        }
        bVar23 = false;
        goto LAB_0040314f;
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
LAB_00403712:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403151;
      case 0x27:
        bVar20 = false;
        goto switchD_0040356e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040356e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004030e8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040356e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403347;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004036f0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004030e8_caseD_0;
      default:
        goto switchD_0040356e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403410;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403702_caseD_9;
      case 10:
        goto switchD_00403702_caseD_a;
      case 0xb:
        goto switchD_00403702_caseD_b;
      case 0xc:
        goto switchD_00403702_caseD_c;
      case 0xd:
        goto switchD_004030e8_caseD_d;
      case 0x20:
        goto LAB_0040374a;
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
        goto switchD_004030e8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040372a;
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
        goto LAB_00403712;
      case 0x27:
        goto switchD_0040356e_caseD_27;
      case 0x3f:
        goto switchD_0040356e_caseD_3f;
      case 0x5c:
        goto switchD_004030e8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040356e_caseD_7b;
      }
      goto LAB_00403192;
    }
    goto LAB_0040336a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403702_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004030e8_caseD_0:
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
            goto LAB_00403248;
          }
LAB_0040348a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040348a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403248;
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
LAB_004034c9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403248;
        goto LAB_00403151;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040335c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403138;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00402ff8;
  default:
switchD_0040356e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00408390(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00403e7a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00403fb7;
          goto LAB_00403fa7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040335c;
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
      goto LAB_00403e7a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403544;
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
    goto LAB_00403582;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403582;
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
LAB_00403582:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040359a:
      param_5 = 2;
      goto LAB_0040335c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403126;
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
LAB_00403126:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040359a;
    goto LAB_00403138;
  case 0x23:
  case 0x7e:
LAB_0040311d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403126;
    goto LAB_0040332b;
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
    goto switchD_0040356e_caseD_25;
  case 0x27:
switchD_0040356e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403138;
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
      goto LAB_00403248;
    }
    goto LAB_0040335c;
  case 0x3f:
switchD_0040356e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403248;
      }
      goto LAB_0040335c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403138;
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
        goto LAB_004034c9;
      }
      goto LAB_0040336a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403138;
  case 0x5c:
    if (param_5 != 2) {
switchD_004030e8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403264;
    }
    if (local_5c) goto LAB_0040335c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403264;
  case 0x7b:
  case 0x7d:
switchD_0040356e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040311d;
    goto LAB_0040332b;
  }
LAB_00403320:
  if (!bVar6) {
LAB_0040332b:
    bVar23 = false;
    goto LAB_00403138;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403347;
LAB_00403778:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040335c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040336a:
    uVar9 = FUN_00402f50(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040404d:
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
    uVar9 = FUN_00402f50(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040404d;
LAB_004037d6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00402fe8;
  while (__s1[uVar21] != 0) {
LAB_00403fa7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00403fb7:
  bVar23 = false;
LAB_00403e7a:
  if (1 < uVar21) {
LAB_00403a3e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040335c;
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
        if (uVar21 <= uVar22) goto LAB_004031dd;
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
        if (uVar21 <= uVar22) goto LAB_00403264;
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
LAB_00403544:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00403a3e;
  }
switchD_0040356e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403138:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040314f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403151:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403248;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403248:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403264:
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
      goto LAB_004031dd;
    }
  }
joined_r0x00403347:
  if (local_5c) {
LAB_00403358:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040335c;
  }
LAB_00403192:
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
LAB_004031cb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_004031dd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00402ff8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404180(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_006102b8;
  if (DAT_006102d0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405230();
    }
    if (PTR_DAT_006102b8 == &DAT_006102c0) {
      puVar8 = (undefined *)FUN_00405040(0);
      uVar6 = PTR_DAT_006102c8._4_4_;
      uVar5 = PTR_DAT_006102c8._0_4_;
      uVar3 = _UNK_006102c4;
      PTR_DAT_006102b8 = (undefined *)puVar8;
      *puVar8 = _DAT_006102c0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00405040(PTR_DAT_006102b8);
      PTR_DAT_006102b8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_006102d0 * 4,0,(long)((param_1 + 1) - DAT_006102d0) << 4);
    DAT_006102d0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00402f50(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_00610360) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00404fe0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00402f50(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404320(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00610460;
  }
  FUN_004051e0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404360(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00610460;
  }
  return *param_1;
}


void FUN_00404370(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00610460;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404380(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00610460;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_004043c0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00610460;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004043e0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00610460;
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


void FUN_00404410(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_00610460;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402f50(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404490(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_00610460;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00402f50(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00404fe0(lVar3 + 1);
  FUN_00402f50(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404580(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404490(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404590(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_006102b8;
  if (1 < DAT_006102d0) {
    ppvVar2 = (void **)(PTR_DAT_006102b8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_006102b8 + (ulong)(DAT_006102d0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00610360) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_006102c0 = 0x100;
    PTR_DAT_006102c8 = &DAT_00610360;
  }
  if (__ptr_00 != &DAT_006102c0) {
    free(__ptr_00);
    PTR_DAT_006102b8 = &DAT_006102c0;
  }
  DAT_006102d0 = 1;
  return;
}


void FUN_00404630(undefined param_1,undefined param_2)

{
  FUN_00404180(param_1,param_2,0xffffffffffffffff,&DAT_00610460);
  return;
}


void FUN_00404650(void)

{
  FUN_00404180();
  return;
}


void FUN_00404660(undefined param_1)

{
  FUN_00404180(0,param_1,0xffffffffffffffff,&DAT_00610460);
  return;
}


void FUN_00404680(undefined param_1,undefined param_2)

{
  FUN_00404180(0,param_1,param_2,&DAT_00610460);
  return;
}


void FUN_004046a0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404180(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404710(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00404180(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404780(undefined param_1,undefined param_2)

{
  FUN_004046a0(0,param_1,param_2);
  return;
}


void FUN_00404790(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404710(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004047a0(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_00610490;
  local_48 = _DAT_00610460;
  uStack_40 = uRam0000000000610468;
  local_38 = _DAT_00610470;
  uStack_30 = uRam0000000000610478;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00610480;
  uStack_20 = uRam0000000000610488;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404180(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404810(undefined param_1,char param_2)

{
  FUN_004047a0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404820(undefined param_1)

{
  FUN_004047a0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404840(undefined param_1,undefined param_2)

{
  FUN_004047a0(param_1,param_2,0x3a);
  return;
}


void FUN_00404850(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404180(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004048c0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000610468;
  local_38 = _DAT_00610470;
  uStack_30 = uRam0000000000610478;
  local_28 = _DAT_00610480;
  lStack_20 = uRam0000000000610488;
  local_18 = DAT_00610490;
  local_48 = CONCAT44((int)((ulong)_DAT_00610460 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404180(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404930(void)

{
  FUN_004048c0();
  return;
}


void FUN_00404940(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004048c0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404960(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_004048c0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404980(void)

{
  FUN_00404180();
  return;
}


void FUN_00404990(undefined param_1,undefined param_2)

{
  FUN_00404180(0,param_1,param_2,&DAT_00610280);
  return;
}


void FUN_004049b0(undefined param_1,undefined param_2)

{
  FUN_00404180(param_1,param_2,0xffffffffffffffff,&DAT_00610280);
  return;
}


void FUN_004049d0(undefined param_1)

{
  FUN_00404180(0,param_1,0xffffffffffffffff,&DAT_00610280);
  return;
}


__ino_t * FUN_004049f0(__ino_t *param_1)

{
  int iVar1;
  stat local_98;
  
  iVar1 = __lxstat(1,"/",&local_98);
  if (iVar1 == 0) {
    *param_1 = local_98.st_ino;
    param_1[1] = local_98.st_dev;
    return param_1;
  }
  return (undefined *)0x0;
}


undefined
FUN_00404a40(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040caeb,5);
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
    goto LAB_00404cbc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00404cbc:
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
    goto LAB_00404d59;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00404d59:
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
    goto LAB_00404b3a;
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
LAB_00404b3a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00404e20(void)

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
  FUN_00404a40();
  return;
}


void FUN_00404e40(void)

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
  FUN_00404a40();
  return;
}


void FUN_00404ea0(void)

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
  FUN_00404a40();
  return;
}


void FUN_00404f60(void)

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


void FUN_00404fe0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405230();
  }
  return;
}


void FUN_00405000(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00404fe0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405230();
}


void thunk_FUN_00404fe0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405230();
  }
  return;
}


void * FUN_00405040(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405230();
  }
  return pvVar1;
}


void FUN_00405080(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00405040();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405230();
}


void FUN_004050b0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040510b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040510b:
                    /* WARNING: Subroutine does not return */
      FUN_00405230(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00405040(param_1,uVar2 * param_3);
  return;
}


void FUN_00405140(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00405040(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040518a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040518a:
                    /* WARNING: Subroutine does not return */
      FUN_00405230();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00405040(param_1,uVar1);
  return;
}


void FUN_00405190(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00404fe0();
  memset(__s,0,param_1);
  return;
}


void FUN_004051b0(size_t param_1,ulong param_2)

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
  FUN_00405230();
}


void FUN_004051e0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00404fe0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405210(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00404fe0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405230(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_00610278,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405270(undefined param_1,uint param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = fts_open(param_1,param_2 | 0x200);
  if (lVar1 != 0) {
    return;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_00405230();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("errno != EINVAL","lib/xfts.c",0x29,"xfts_open");
}


bool FUN_004052c0(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = true;
  uVar2 = *(uint *)(param_1 + 0x48) & 0x11;
  if ((uVar2 != 0x10) && (bVar1 = false, uVar2 == 0x11)) {
    return *(long *)(param_2 + 0x58) != 0;
  }
  return bVar1;
}


ulong FUN_004052f0(ulong *param_1,ulong *param_2)

{
  if (param_1[1] != param_2[1]) {
    return 0;
  }
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_00405310(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


ulong FUN_00405320(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_00405330(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_00405340(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = 0xffffffff;
  uVar1 = *(ulong *)(*param_2 + 0x80);
  bVar3 = uVar1 <= *(ulong *)(*param_1 + 0x80);
  if (bVar3) {
    uVar2 = (ulong)(bVar3 && *(ulong *)(*param_1 + 0x80) != uVar1);
  }
  return uVar2;
}


int FUN_00405370(long param_1,long param_2,char param_3)

{
  stat *__stat_buf;
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  __stat_buf = (stat *)(param_2 + 0x78);
  if ((((*(long *)(param_2 + 0x58) == 0) && ((*(uint *)(param_1 + 0x48) & 1) != 0)) ||
      ((*(uint *)(param_1 + 0x48) & 2) != 0)) || (param_3 != '\0')) {
    iVar1 = __xstat(1,*(char **)(param_2 + 0x30),__stat_buf);
    if (iVar1 == 0) {
LAB_00405407:
      uVar2 = *(uint *)(param_2 + 0x90) & 0xf000;
      if (uVar2 == 0x4000) {
        uVar4 = *(ulong *)(param_2 + 0x88);
        if ((uVar4 < 2) || (*(long *)(param_2 + 0x58) < 1)) {
          uVar4 = 0xffffffffffffffff;
        }
        else if ((*(byte *)(param_1 + 0x48) & 0x20) == 0) {
          uVar4 = uVar4 - 2;
        }
        *(ulong *)(param_2 + 0x68) = uVar4;
        iVar1 = 1;
        if ((*(char *)(param_2 + 0x108) == '.') &&
           ((*(char *)(param_2 + 0x109) == '\0' ||
            ((*(uint *)(param_2 + 0x108) & 0xffff00) == 0x2e00)))) {
          iVar1 = (-(uint)(*(long *)(param_2 + 0x58) == 0) & 0xfffffffc) + 5;
        }
      }
      else if (uVar2 == 0xa000) {
        iVar1 = 0xc;
      }
      else {
        iVar1 = (uint)(uVar2 == 0x8000) * 5 + 3;
      }
      return iVar1;
    }
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    if (iVar1 == 2) {
      iVar1 = __lxstat(1,*(char **)(param_2 + 0x30),__stat_buf);
      if (iVar1 == 0) {
        *piVar3 = 0;
        return 0xd;
      }
      iVar1 = *piVar3;
    }
  }
  else {
    iVar1 = __fxstatat(1,*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),__stat_buf,0x100);
    if (iVar1 == 0) goto LAB_00405407;
    piVar3 = __errno_location();
    iVar1 = *piVar3;
  }
  *(int *)(param_2 + 0x40) = iVar1;
  puVar5 = (undefined *)(param_2 + 0x80U & 0xfffffffffffffff8);
  *(undefined *)(param_2 + 0x78) = 0;
  *(undefined *)(param_2 + 0x100) = 0;
  uVar4 = (ulong)(((int)__stat_buf - (int)puVar5) + 0x90U >> 3);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
  }
  return 10;
}


long FUN_00405520(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  __compar_fn_t __compar;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  __compar = *(__compar_fn_t *)(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x10);
  if (param_3 <= *(ulong *)(param_1 + 0x38)) {
LAB_00405575:
    plVar6 = plVar3;
    if (param_2 != 0) {
      do {
        *plVar6 = param_2;
        param_2 = *(long *)(param_2 + 0x10);
        plVar6 = plVar6 + 1;
      } while (param_2 != 0);
    }
    qsort(plVar3,param_3,8,__compar);
    plVar3 = *(long **)(param_1 + 0x10);
    lVar7 = *plVar3;
    lVar4 = lVar7;
    lVar5 = param_3 - 1;
    plVar6 = plVar3;
    if (lVar5 != 0) {
      while( true ) {
        plVar2 = plVar6 + 1;
        plVar6 = plVar6 + 1;
        *(long *)(lVar7 + 0x10) = *plVar2;
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) break;
        lVar7 = *plVar6;
      }
      lVar7 = plVar3[param_3 - 1];
    }
    *(undefined *)(lVar7 + 0x10) = 0;
    return lVar4;
  }
  uVar1 = param_3 + 0x28;
  *(ulong *)(param_1 + 0x38) = uVar1;
  if (uVar1 < 0x2000000000000000) {
    plVar3 = (long *)realloc(plVar3,uVar1 * 8);
    if (plVar3 != (long *)0x0) {
      *(long **)(param_1 + 0x10) = plVar3;
      goto LAB_00405575;
    }
    plVar3 = *(long **)(param_1 + 0x10);
  }
  free(plVar3);
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x38) = 0;
  return param_2;
}


void * FUN_00405620(long param_1,void *param_2,size_t param_3)

{
  undefined uVar1;
  void *pvVar2;
  
  pvVar2 = malloc(param_3 + 0x110 & 0xfffffffffffffff8);
  if (pvVar2 != (void *)0x0) {
    memcpy((void *)((long)pvVar2 + 0x108),param_2,param_3);
    uVar1 = *(undefined *)(param_1 + 0x20);
    *(undefined *)((long)pvVar2 + param_3 + 0x108) = 0;
    *(size_t *)((long)pvVar2 + 0x60) = param_3;
    *(long *)((long)pvVar2 + 0x50) = param_1;
    *(undefined *)((long)pvVar2 + 0x38) = uVar1;
    *(undefined *)((long)pvVar2 + 0x40) = 0;
    *(undefined *)((long)pvVar2 + 0x18) = 0;
    *(undefined *)((long)pvVar2 + 0x72) = 0x30000;
    *(undefined *)((long)pvVar2 + 0x20) = 0;
    *(undefined *)((long)pvVar2 + 0x28) = 0;
  }
  return pvVar2;
}


void FUN_004056b0(void *param_1)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  do {
    pvVar1 = *(void **)((long)param_1 + 0x10);
    if (*(DIR **)((long)param_1 + 0x18) != (DIR *)0x0) {
      closedir(*(DIR **)((long)param_1 + 0x18));
    }
    free(param_1);
    param_1 = pvVar1;
  } while (pvVar1 != (void *)0x0);
  return;
}


void FUN_00405700(undefined param_1)

{
  char cVar1;
  int __fd;
  
  while( true ) {
    cVar1 = FUN_00409940(param_1);
    if (cVar1 != '\0') break;
    __fd = FUN_00409990(param_1);
    if (-1 < __fd) {
      close(__fd);
    }
  }
  return;
}


long FUN_00405740(long param_1)

{
  undefined uVar1;
  int iVar2;
  long lVar3;
  undefined *__ptr;
  undefined *puVar4;
  long lVar5;
  statfs local_98;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if ((*(byte *)(lVar3 + 0x49) & 2) == 0) {
    return 0;
  }
  lVar5 = *(long *)(lVar3 + 0x50);
  if (lVar5 == 0) {
    lVar5 = FUN_00408f60(0xd,0,FUN_00405320,FUN_00405330,free);
    *(long *)(lVar3 + 0x50) = lVar5;
    if (lVar5 == 0) {
      iVar2 = fstatfs(*(int *)(*(long *)(param_1 + 0x50) + 0x2c),&local_98);
      if (iVar2 == 0) {
        return local_98.f_type;
      }
      return 0;
    }
  }
  local_98.f_type = *(long *)(param_1 + 0x78);
  lVar3 = FUN_00408cf0(lVar5,&local_98);
  if (lVar3 == 0) {
    iVar2 = fstatfs(*(int *)(*(long *)(param_1 + 0x50) + 0x2c),&local_98);
    if (iVar2 != 0) {
      return 0;
    }
    __ptr = (undefined *)malloc(0x10);
    if (__ptr != (undefined *)0x0) {
      uVar1 = *(undefined *)(param_1 + 0x78);
      __ptr[1] = local_98.f_type;
      *__ptr = uVar1;
      puVar4 = (undefined *)FUN_00409700(lVar5,__ptr);
      if (puVar4 != (undefined *)0x0) {
        if (__ptr == puVar4) {
          return local_98.f_type;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      free(__ptr);
    }
  }
  else {
    local_98.f_type = *(long *)(lVar3 + 8);
  }
  return local_98.f_type;
}


bool FUN_00405860(void)

{
  long lVar1;
  
  lVar1 = FUN_00405740();
  if (lVar1 != 0x9fa0) {
    if (lVar1 < 0x9fa1) {
      if (lVar1 == 0) {
        return false;
      }
      return lVar1 != 0x6969;
    }
    if (lVar1 != 0x5346414f) {
      if (lVar1 == 0x58465342) {
        return (bool)2;
      }
      return (bool)((lVar1 == 0x52654973) + '\x01');
    }
  }
  return false;
}


void FUN_004058d0(long param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 == param_2) && (iVar1 != -100)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 == '\0') {
    if (((*(byte *)(param_1 + 0x48) & 4) == 0) && (-1 < iVar1)) {
      close(iVar1);
      *(int *)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  else {
    iVar1 = FUN_00409950(param_1 + 0x60);
    if (-1 < iVar1) {
      close(iVar1);
      *(int *)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}


uint FUN_00405940(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x48) & 4;
  if (uVar2 == 0) {
    if ((*(uint *)(param_1 + 0x48) & 0x200) == 0) {
      iVar1 = fchdir(*(int *)(param_1 + 0x28));
      uVar2 = (uint)(iVar1 != 0);
    }
    else {
      FUN_004058d0(param_1,0xffffff9c,1);
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_00405700(param_1 + 0x60);
  return uVar2;
}


undefined FUN_004059a0(void **param_1,size_t *param_2,long param_3)

{
  size_t __size;
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = *param_1;
  __size = *param_2 + 0x100 + param_3;
  if (__size < *param_2) {
    free(pvVar1);
    *param_1 = (void *)0x0;
    piVar2 = __errno_location();
    *piVar2 = 0x24;
    return 0;
  }
  *param_2 = __size;
  pvVar1 = realloc(pvVar1,__size);
  if (pvVar1 != (void *)0x0) {
    *param_1 = pvVar1;
    return 1;
  }
  free(*param_1);
  *param_1 = (void *)0x0;
  return 0;
}


ulong FUN_00405a10(uint param_1,void **param_2)

{
  void *pvVar1;
  ulong uVar2;
  
  if ((param_1 & 0x102) == 0) {
    pvVar1 = malloc(0x20);
    *param_2 = pvVar1;
    uVar2 = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_00408590();
      return 1;
    }
  }
  else {
    pvVar1 = (void *)FUN_00408f60(0x1f,0,FUN_00405310,FUN_004052f0,free);
    *param_2 = pvVar1;
    uVar2 = (ulong)pvVar1 & 0xffffffffffffff00 | (ulong)(pvVar1 != (void *)0x0);
  }
  return uVar2;
}


/* WARNING: Removing unreachable block (ram,0x00408648) */
/* WARNING: Removing unreachable block (ram,0x00409fd8) */

void FUN_00405a70(int param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint __oflag;
  
  __oflag = (param_2 & 0x10) << 0xd | (param_2 & 0x800) << 7 | 0x90900;
  if ((param_2 & 0x200) != 0) {
    iVar1 = openat(param_1,param_3,__oflag,0);
    FUN_0040a090(iVar1);
    return;
  }
  iVar1 = open(param_3,__oflag,0);
  FUN_0040a090(iVar1);
  return;
}


int FUN_00405ac0(long param_1,long param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  stat local_c8;
  
  uVar9 = *(uint *)(param_1 + 0x48);
  bVar10 = false;
  bVar11 = param_4 == (byte *)0x0;
  iVar3 = param_3;
  if (bVar11) {
LAB_00405b60:
    if ((uVar9 & 4) != 0) {
LAB_00405bd0:
      if (((uVar9 & 0x200) != 0) && (-1 < param_3)) {
        close(param_3);
        return 0;
      }
      return 0;
    }
    if (param_3 < 0) {
      bVar2 = 0;
LAB_00405bfe:
      iVar3 = FUN_00405a70(*(undefined *)(param_1 + 0x2c),uVar9,param_4);
      if (iVar3 < 0) {
        return -1;
      }
    }
    else {
      bVar2 = 0;
    }
  }
  else {
    lVar6 = 3;
    pbVar7 = param_4;
    pbVar8 = &DAT_0040ceaa;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar10 = *pbVar7 < *pbVar8;
      bVar11 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar11);
    if ((!bVar10 && !bVar11) != bVar10) goto LAB_00405b60;
    if ((uVar9 & 4) != 0) goto LAB_00405bd0;
    if (param_3 < 0) {
      if ((uVar9 & 0x200) == 0) {
        bVar2 = 1;
      }
      else {
        bVar2 = FUN_00409940(param_1 + 0x60);
        if (bVar2 == 0) {
          iVar3 = FUN_00409990(param_1 + 0x60);
          if (-1 < iVar3) {
            bVar2 = 1;
            param_3 = iVar3;
            goto LAB_00405b72;
          }
          uVar9 = *(uint *)(param_1 + 0x48);
          bVar2 = 1;
        }
      }
      goto LAB_00405bfe;
    }
    bVar2 = 1;
  }
LAB_00405b72:
  iVar4 = __fxstat(1,iVar3,&local_c8);
  if (iVar4 == 0) {
    if ((*(__dev_t *)(param_2 + 0x78) == local_c8.st_dev) &&
       (*(__ino_t *)(param_2 + 0x80) == local_c8.st_ino)) {
      if ((*(byte *)(param_1 + 0x49) & 2) != 0) {
        FUN_004058d0(param_1,iVar3,bVar2 ^ 1);
        return 0;
      }
      iVar4 = fchdir(iVar3);
      goto LAB_00405bb3;
    }
    piVar5 = __errno_location();
    *piVar5 = 2;
  }
  iVar4 = -1;
LAB_00405bb3:
  if (param_3 < 0) {
    piVar5 = __errno_location();
    iVar1 = *piVar5;
    close(iVar3);
    *piVar5 = iVar1;
  }
  return iVar4;
}


undefined FUN_00405c90(uint param_1,undefined *param_2,undefined *param_3)

{
  undefined uVar1;
  undefined *__ptr;
  undefined *puVar2;
  undefined uVar3;
  
  if ((param_1 & 0x102) == 0) {
    uVar3 = FUN_004085a0(*param_2,param_3 + 0xf);
    if ((char)uVar3 != '\0') {
      *param_3 = param_3;
      *(undefined *)(param_3 + 0xe) = 2;
      return uVar3;
    }
  }
  else {
    __ptr = (undefined *)malloc(0x18);
    if (__ptr == (undefined *)0x0) {
      return 0;
    }
    uVar3 = param_3[0xf];
    uVar1 = *param_2;
    __ptr[2] = param_3;
    *__ptr = uVar3;
    __ptr[1] = param_3[0x10];
    puVar2 = (undefined *)FUN_00409700(uVar1,__ptr);
    if (__ptr != puVar2) {
      free(__ptr);
      if (puVar2 == (undefined *)0x0) {
        return 0;
      }
      uVar3 = puVar2[2];
      *(undefined *)(param_3 + 0xe) = 2;
      *param_3 = uVar3;
    }
  }
  return 1;
}


void FUN_00405d40(uint param_1,long **param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  undefined local_28;
  undefined local_20;
  
  if ((param_1 & 0x102) == 0) {
    lVar1 = *(long *)(param_3 + 8);
    if ((lVar1 != 0) && (-1 < *(long *)(lVar1 + 0x58))) {
      plVar2 = *param_2;
      if (plVar2[2] == 0) goto FUN_00401d93;
      if ((*plVar2 == *(long *)(param_3 + 0x80)) && (plVar2[1] == *(long *)(param_3 + 0x78))) {
        lVar3 = *(long *)(lVar1 + 0x80);
        plVar2[1] = *(long *)(lVar1 + 0x78);
        *plVar2 = lVar3;
      }
    }
    return;
  }
  local_28 = *(undefined *)(param_3 + 0x78);
  local_20 = *(undefined *)(param_3 + 0x80);
  __ptr = (void *)FUN_00409740(*param_2,&local_28);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
FUN_00401d93:
                    /* WARNING: Subroutine does not return */
  abort();
}


void * FUN_00405de0(long *param_1,int param_2)

{
  DIR *__dirp;
  ulong uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  dirent *pdVar10;
  size_t sVar11;
  void *pvVar12;
  undefined uVar13;
  void *pvVar14;
  DIR *pDVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ushort uVar19;
  ulong uVar20;
  uint uVar21;
  undefined uVar22;
  bool bVar23;
  void *local_90;
  ulong local_88;
  void *local_80;
  ulong local_78;
  ulong local_60;
  undefined *local_58;
  ulong local_50;
  char local_3a;
  
  lVar17 = *param_1;
  __dirp = *(DIR **)(lVar17 + 0x18);
  if (__dirp == (DIR *)0x0) {
    uVar21 = *(uint *)(param_1 + 9);
    uVar18 = uVar21 & 0x10;
    if ((uVar18 != 0) && (uVar18 = 0x20000, (uVar21 & 1) != 0)) {
      uVar18 = (uint)(*(long *)(lVar17 + 0x58) != 0) << 0x11;
    }
    uVar22 = 0xffffff9c;
    if ((uVar21 & 0x204) == 0x200) {
      uVar22 = *(undefined *)((long)param_1 + 0x2c);
    }
    iVar7 = FUN_00409fb0(uVar22,*(undefined *)(lVar17 + 0x30),
                         (uVar21 & 0x800) << 7 | uVar18 | 0x90900);
    if (-1 < iVar7) {
      pDVar15 = fdopendir(iVar7);
      if (pDVar15 != (DIR *)0x0) {
        *(DIR **)(lVar17 + 0x18) = pDVar15;
        if (*(short *)(lVar17 + 0x70) == 0xb) {
          uVar6 = FUN_00405370(param_1,lVar17,0);
          *(undefined *)(lVar17 + 0x70) = uVar6;
        }
        else if ((*(uint *)(param_1 + 9) & 0x100) != 0) {
          FUN_00405d40(*(uint *)(param_1 + 9),param_1 + 0xb,lVar17);
          FUN_00405370(param_1,lVar17,0);
          cVar5 = FUN_00405c90(*(undefined *)(param_1 + 9),param_1 + 0xb,lVar17);
          if (cVar5 == '\0') {
            piVar9 = __errno_location();
            *piVar9 = 0xc;
            return (void *)0x0;
          }
        }
        local_60 = (ulong)(-(uint)(param_1[8] == 0) & 0x186a1) - 1;
        if (param_2 == 2) {
LAB_00406590:
          bVar23 = false;
          uVar21 = *(uint *)(param_1 + 9);
          goto LAB_00405e34;
        }
        if ((((*(uint *)(param_1 + 9) & 0x38) == 0x18) && (*(long *)(lVar17 + 0x88) == 2)) &&
           (iVar8 = FUN_00405860(lVar17), iVar8 != 0)) {
          if (param_2 != 3) goto LAB_00406590;
          bVar3 = false;
          bVar23 = true;
        }
        else {
          bVar23 = param_2 == 3;
          bVar3 = true;
        }
        if (((*(byte *)((long)param_1 + 0x49) & 2) == 0) ||
           (iVar7 = FUN_0040a450(iVar7,0x406,3), -1 < iVar7)) {
          iVar8 = FUN_00405ac0(param_1,lVar17,iVar7,0);
          if (iVar8 == 0) goto LAB_00405e2b;
          pDVar15 = *(DIR **)(lVar17 + 0x18);
          uVar19 = *(ushort *)(lVar17 + 0x72) | 1;
          if ((bVar23) && (bVar3)) goto LAB_004062cd;
LAB_004062e2:
          *(ushort *)(lVar17 + 0x72) = uVar19;
          closedir(pDVar15);
          uVar21 = *(uint *)(param_1 + 9);
          *(undefined *)(lVar17 + 0x18) = 0;
          if (((uVar21 & 0x200) != 0) && (-1 < iVar7)) {
            close(iVar7);
            uVar21 = *(uint *)(param_1 + 9);
          }
        }
        else {
          pDVar15 = *(DIR **)(lVar17 + 0x18);
          uVar19 = *(ushort *)(lVar17 + 0x72) | 1;
          if ((bVar23) && (bVar3)) {
LAB_004062cd:
            piVar9 = __errno_location();
            *(int *)(lVar17 + 0x40) = *piVar9;
            goto LAB_004062e2;
          }
          *(ushort *)(lVar17 + 0x72) = uVar19;
          closedir(pDVar15);
          uVar21 = *(uint *)(param_1 + 9);
        }
        *(undefined *)(lVar17 + 0x18) = 0;
        bVar23 = false;
        goto LAB_00405e34;
      }
      piVar9 = __errno_location();
      iVar8 = *piVar9;
      close(iVar7);
      *piVar9 = iVar8;
    }
    *(undefined *)(lVar17 + 0x18) = 0;
joined_r0x0040655f:
    if (param_2 == 3) {
      *(undefined *)(lVar17 + 0x70) = 4;
      piVar9 = __errno_location();
      *(int *)(lVar17 + 0x40) = *piVar9;
    }
    return (void *)0x0;
  }
  iVar7 = dirfd(__dirp);
  if (iVar7 < 0) {
    closedir(*(DIR **)(lVar17 + 0x18));
    *(undefined *)(lVar17 + 0x18) = 0;
    goto joined_r0x0040655f;
  }
  if (param_1[8] == 0) {
    local_60 = 100000;
    uVar21 = *(uint *)(param_1 + 9);
    bVar23 = true;
  }
  else {
    local_60 = 0xffffffffffffffff;
LAB_00405e2b:
    bVar23 = true;
    uVar21 = *(uint *)(param_1 + 9);
  }
LAB_00405e34:
  uVar1 = *(ulong *)(lVar17 + 0x48);
  local_88 = uVar1;
  local_50 = uVar1 - 1;
  if (*(char *)(*(long *)(lVar17 + 0x38) + -1 + uVar1) != '/') {
    local_88 = uVar1 + 1;
    local_50 = uVar1;
  }
  local_58 = (undefined *)0x0;
  if ((uVar21 & 4) != 0) {
    local_58 = (undefined *)(local_50 + param_1[4]) + 1;
    *(undefined *)(local_50 + param_1[4]) = 0x2f;
  }
  local_78 = param_1[6] - local_88;
  local_3a = '\0';
  lVar16 = *(long *)(lVar17 + 0x58);
  local_90 = (void *)0x0;
  local_80 = (void *)0x0;
  uVar1 = 0;
  do {
    do {
      uVar20 = uVar1;
      pDVar15 = *(DIR **)(lVar17 + 0x18);
      if (pDVar15 == (DIR *)0x0) goto joined_r0x0040640b;
      piVar9 = __errno_location();
      *piVar9 = 0;
      pdVar10 = readdir(pDVar15);
      if (pdVar10 == (dirent *)0x0) {
        if (*piVar9 != 0) {
          *(int *)(lVar17 + 0x40) = *piVar9;
          *(ushort *)(lVar17 + 0x70) = (-(ushort)(((ulong)__dirp | uVar20) == 0) & 0xfffd) + 7;
        }
        if (*(DIR **)(lVar17 + 0x18) != (DIR *)0x0) {
          closedir(*(DIR **)(lVar17 + 0x18));
          *(undefined *)(lVar17 + 0x18) = 0;
        }
        goto joined_r0x0040640b;
      }
    } while ((((*(byte *)(param_1 + 9) & 0x20) == 0) && (pdVar10->d_name[0] == '.')) &&
            ((uVar1 = uVar20, pdVar10->d_name[1] == '\0' ||
             (*(short *)(pdVar10->d_name + 1) == 0x2e))));
    sVar11 = strlen(pdVar10->d_name);
    pvVar12 = (void *)FUN_00405620(param_1,pdVar10->d_name,sVar11);
    if (pvVar12 == (void *)0x0) {
LAB_00406340:
      iVar7 = *piVar9;
      free(pvVar12);
      FUN_004056b0(local_80);
      closedir(*(DIR **)(lVar17 + 0x18));
      *(undefined *)(lVar17 + 0x18) = 0;
      *(undefined *)(lVar17 + 0x70) = 7;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
      *piVar9 = iVar7;
      return (void *)0x0;
    }
    if (local_78 <= sVar11) {
      lVar2 = param_1[4];
      cVar5 = FUN_004059a0(param_1 + 4,param_1 + 6,local_50 + 2 + sVar11);
      if (cVar5 == '\0') goto LAB_00406340;
      puVar4 = local_58;
      if ((param_1[4] != lVar2) &&
         (local_3a = cVar5, puVar4 = (undefined *)(param_1[4] + local_88),
         (*(byte *)(param_1 + 9) & 4) == 0)) {
        puVar4 = local_58;
      }
      local_58 = puVar4;
      local_78 = param_1[6] - local_88;
    }
    if (CARRY8(sVar11,local_88)) {
      free(pvVar12);
      FUN_004056b0(local_80);
      closedir(*(DIR **)(lVar17 + 0x18));
      *(undefined *)(lVar17 + 0x18) = 0;
      *(undefined *)(lVar17 + 0x70) = 7;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
      *piVar9 = 0x24;
      return (void *)0x0;
    }
    *(long *)((long)pvVar12 + 0x58) = lVar16 + 1;
    lVar2 = *param_1;
    *(size_t *)((long)pvVar12 + 0x48) = sVar11 + local_88;
    *(long *)((long)pvVar12 + 8) = lVar2;
    *(__ino_t *)((long)pvVar12 + 0x80) = pdVar10->d_ino;
    uVar21 = *(uint *)(param_1 + 9);
    if ((uVar21 & 4) == 0) {
      *(void **)((long)pvVar12 + 0x30) = (void *)((long)pvVar12 + 0x108);
    }
    else {
      *(undefined *)((long)pvVar12 + 0x30) = *(undefined *)((long)pvVar12 + 0x38);
      memmove(local_58,(void *)((long)pvVar12 + 0x108),*(long *)((long)pvVar12 + 0x60) + 1);
      uVar21 = *(uint *)(param_1 + 9);
    }
    if ((param_1[8] == 0) || ((uVar21 & 0x400) != 0)) {
      uVar18 = pdVar10->d_type - 1;
      if (((uVar21 & 0x18) == 0x18) && ((pdVar10->d_type & 0xfb) != 0)) {
        *(undefined *)((long)pvVar12 + 0x70) = 0xb;
        if (uVar18 < 0xc) {
          *(undefined *)((long)pvVar12 + 0x90) = *(undefined *)(&DAT_0040cec0 + (ulong)uVar18 * 4)
          ;
          uVar13 = 1;
        }
        else {
          *(undefined *)((long)pvVar12 + 0x90) = 0;
          uVar13 = 1;
        }
      }
      else {
        *(undefined *)((long)pvVar12 + 0x70) = 0xb;
        if (uVar18 < 0xc) {
          *(undefined *)((long)pvVar12 + 0x90) = *(undefined *)(&DAT_0040cec0 + (ulong)uVar18 * 4)
          ;
          uVar13 = 2;
        }
        else {
          *(undefined *)((long)pvVar12 + 0x90) = 0;
          uVar13 = 2;
        }
      }
      *(undefined *)((long)pvVar12 + 0xa8) = uVar13;
    }
    else {
      uVar6 = FUN_00405370(param_1,pvVar12,0);
      *(undefined *)((long)pvVar12 + 0x70) = uVar6;
    }
    *(undefined *)((long)pvVar12 + 0x10) = 0;
    pvVar14 = pvVar12;
    if (local_80 != (void *)0x0) {
      *(void **)((long)local_90 + 0x10) = pvVar12;
      pvVar14 = local_80;
    }
    local_80 = pvVar14;
    uVar1 = uVar20 + 1;
    local_90 = pvVar12;
  } while (uVar20 + 1 < local_60);
  uVar20 = uVar20 + 1;
joined_r0x0040640b:
  if (local_3a != '\0') {
    lVar2 = param_1[4];
    for (lVar16 = param_1[1]; pvVar12 = local_80, lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x10)) {
      if (*(long *)(lVar16 + 0x30) != lVar16 + 0x108) {
        *(long *)(lVar16 + 0x30) = (*(long *)(lVar16 + 0x30) - *(long *)(lVar16 + 0x38)) + lVar2;
      }
      *(long *)(lVar16 + 0x38) = lVar2;
    }
    while (pvVar14 = pvVar12, -1 < *(long *)((long)pvVar14 + 0x58)) {
      if (*(long *)((long)pvVar14 + 0x30) != (long)pvVar14 + 0x108) {
        *(long *)((long)pvVar14 + 0x30) =
             (*(long *)((long)pvVar14 + 0x30) - *(long *)((long)pvVar14 + 0x38)) + lVar2;
      }
      *(long *)((long)pvVar14 + 0x38) = lVar2;
      pvVar12 = *(void **)((long)pvVar14 + 0x10);
      if (*(void **)((long)pvVar14 + 0x10) == (void *)0x0) {
        pvVar12 = *(void **)((long)pvVar14 + 8);
      }
    }
  }
  if ((*(byte *)(param_1 + 9) & 4) != 0) {
    if ((param_1[6] == local_88) || (uVar20 == 0)) {
      local_58 = local_58 + -1;
    }
    *local_58 = 0;
  }
  if ((__dirp == (DIR *)0x0) && (bVar23)) {
    if ((param_2 == 1) || (uVar20 == 0)) {
      if (*(long *)(lVar17 + 0x58) == 0) {
        iVar7 = FUN_00405940(param_1);
      }
      else {
        iVar7 = FUN_00405ac0(param_1,*(undefined *)(lVar17 + 8),0xffffffff,&DAT_0040ceaa);
      }
      if (iVar7 != 0) {
        *(undefined *)(lVar17 + 0x70) = 7;
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
        FUN_004056b0(local_80);
        return (void *)0x0;
      }
      goto LAB_004064a8;
    }
  }
  else {
LAB_004064a8:
    if (uVar20 == 0) {
      if (((param_2 == 3) && (*(short *)(lVar17 + 0x70) != 4)) && (*(short *)(lVar17 + 0x70) != 7))
      {
        *(undefined *)(lVar17 + 0x70) = 6;
      }
      FUN_004056b0(local_80);
      return (void *)0x0;
    }
  }
  lVar16 = param_1[8];
  if (10000 < uVar20) {
    if (lVar16 != 0) goto LAB_00406467;
    lVar17 = FUN_00405740(lVar17);
    if ((lVar17 != 0x6969) && (lVar17 != 0x1021994)) {
      param_1[8] = (long)FUN_00405340;
      pvVar12 = (void *)FUN_00405520(param_1,local_80,uVar20);
      param_1[8] = 0;
      return pvVar12;
    }
    lVar16 = param_1[8];
  }
  if (lVar16 == 0) {
    return local_80;
  }
  if (uVar20 == 1) {
    return local_80;
  }
LAB_00406467:
  pvVar12 = (void *)FUN_00405520(param_1,local_80,uVar20);
  return pvVar12;
}


long * fts_open(char **param_1,uint param_2,long param_3)

{
  undefined uVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  long *__ptr;
  size_t sVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  char **ppcVar12;
  void *local_50;
  byte local_42;
  long local_40;
  
  if ((((param_2 & 0xffffe000) != 0) || ((param_2 & 0x204) == 0x204)) || ((param_2 & 0x12) == 0)) {
    piVar9 = __errno_location();
    *piVar9 = 0x16;
    return (long *)0x0;
  }
  __ptr = (long *)calloc(0x80,1);
  if (__ptr == (long *)0x0) {
    return (long *)0x0;
  }
  __ptr[8] = param_3;
  if ((param_2 & 2) == 0) {
    *(uint *)(__ptr + 9) = param_2;
  }
  else {
    *(uint *)(__ptr + 9) = param_2 & 0xfffffdff | 4;
  }
  pcVar11 = *param_1;
  *(undefined *)((long)__ptr + 0x2c) = 0xffffff9c;
  if (pcVar11 == (char *)0x0) {
    uVar10 = 0x1000;
  }
  else {
    uVar10 = 0;
    ppcVar12 = param_1;
    do {
      sVar5 = strlen(pcVar11);
      if (uVar10 < sVar5) {
        uVar10 = sVar5;
      }
      ppcVar12 = ppcVar12 + 1;
      pcVar11 = *ppcVar12;
    } while (pcVar11 != (char *)0x0);
    uVar10 = uVar10 + 1;
    if (uVar10 < 0x1000) {
      uVar10 = 0x1000;
    }
  }
  local_42 = FUN_004059a0(__ptr + 4,__ptr + 6,uVar10);
  if (local_42 == 0) goto LAB_00406a6b;
  pcVar11 = *param_1;
  if (pcVar11 == (char *)0x0) {
    local_50 = (void *)0x0;
    if (param_3 != 0) {
LAB_004068b3:
      local_42 = (byte)(*(uint *)(__ptr + 9) >> 10) & 1;
      goto LAB_004068c0;
    }
LAB_00406aa2:
    lVar7 = 0;
LAB_004069dc:
    lVar8 = FUN_00405620(__ptr,"",0);
    *__ptr = lVar8;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x10) = lVar7;
      uVar1 = *(undefined *)(__ptr + 9);
      *(undefined *)(lVar8 + 0x70) = 9;
      cVar2 = FUN_00405a10(uVar1,__ptr + 0xb);
      if (cVar2 != '\0') {
        if ((*(uint *)(__ptr + 9) & 0x204) == 0) {
          iVar4 = FUN_00405a70(*(undefined *)((long)__ptr + 0x2c),*(uint *)(__ptr + 9),
                               &DAT_0040ceab);
          *(int *)(__ptr + 5) = iVar4;
          if (iVar4 < 0) {
            *(uint *)(__ptr + 9) = *(uint *)(__ptr + 9) | 4;
          }
        }
        FUN_00409920(__ptr + 0xc,0xffffffff);
        return __ptr;
      }
    }
LAB_00406a50:
    FUN_004056b0(lVar7);
    free(local_50);
  }
  else {
    local_50 = (void *)FUN_00405620(__ptr,"",0);
    if (local_50 != (void *)0x0) {
      pcVar11 = *param_1;
      *(undefined *)((long)local_50 + 0x58) = 0xffffffffffffffff;
      *(undefined *)((long)local_50 + 0x68) = 0xffffffffffffffff;
      if (param_3 != 0) goto LAB_004068b3;
LAB_004068c0:
      if (pcVar11 == (char *)0x0) goto LAB_00406aa2;
      local_40 = 0;
      uVar10 = 0;
      lVar8 = 0;
      do {
        sVar5 = strlen(pcVar11);
        if (((2 < sVar5) && ((((byte)(param_2 >> 0xc) ^ 1) & 1) != 0)) &&
           (pcVar11[sVar5 - 1] == '/')) {
          do {
            if (pcVar11[sVar5 - 2] != '/') break;
            sVar5 = sVar5 - 1;
          } while (sVar5 != 1);
        }
        lVar6 = FUN_00405620(__ptr,pcVar11,sVar5);
        lVar7 = lVar8;
        if (lVar6 == 0) goto LAB_00406a50;
        *(undefined *)(lVar6 + 0x58) = 0;
        *(void **)(lVar6 + 8) = local_50;
        *(long *)(lVar6 + 0x30) = lVar6 + 0x108;
        lVar7 = lVar6;
        if ((lVar8 == 0) || (local_42 == 0)) {
          uVar3 = FUN_00405370(__ptr,lVar6,0);
          *(undefined *)(lVar6 + 0x70) = uVar3;
          if (param_3 != 0) goto LAB_00406958;
          *(undefined *)(lVar6 + 0x10) = 0;
          if (lVar8 != 0) goto LAB_00406af0;
        }
        else {
          *(undefined *)(lVar6 + 0xa8) = 2;
          *(undefined *)(lVar6 + 0x70) = 0xb;
          if (param_3 == 0) {
            *(undefined *)(lVar6 + 0x10) = 0;
LAB_00406af0:
            *(long *)(local_40 + 0x10) = lVar6;
            lVar7 = lVar8;
          }
          else {
LAB_00406958:
            *(long *)(lVar6 + 0x10) = lVar8;
            lVar6 = local_40;
          }
        }
        local_40 = lVar6;
        uVar10 = uVar10 + 1;
        pcVar11 = param_1[uVar10];
        lVar8 = lVar7;
      } while (pcVar11 != (char *)0x0);
      if ((param_3 != 0) && (1 < uVar10)) {
        lVar7 = FUN_00405520(__ptr,lVar7,uVar10);
      }
      goto LAB_004069dc;
    }
  }
  free((void *)__ptr[4]);
LAB_00406a6b:
  free(__ptr);
  return (long *)0x0;
}


int fts_close(void **param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *__ptr;
  void *__ptr_00;
  
  __ptr = *param_1;
  if (__ptr != (void *)0x0) {
    lVar1 = *(long *)((long)__ptr + 0x58);
    while (__ptr_00 = __ptr, -1 < lVar1) {
      while (__ptr = *(void **)((long)__ptr_00 + 0x10), __ptr != (void *)0x0) {
        free(__ptr_00);
        __ptr_00 = __ptr;
        if (*(long *)((long)__ptr + 0x58) < 0) goto LAB_00406b8b;
      }
      __ptr = *(void **)((long)__ptr_00 + 8);
      free(__ptr_00);
      lVar1 = *(long *)((long)__ptr + 0x58);
    }
LAB_00406b8b:
    free(__ptr);
  }
  if (param_1[1] != (void *)0x0) {
    FUN_004056b0();
  }
  free(param_1[2]);
  free(param_1[4]);
  if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar2 = fchdir(*(int *)(param_1 + 5));
      if (iVar2 == 0) {
        iVar2 = close(*(int *)(param_1 + 5));
        if (iVar2 == 0) goto LAB_00406bc2;
        piVar4 = __errno_location();
      }
      else {
        piVar4 = __errno_location();
        iVar2 = *piVar4;
        iVar3 = close(*(int *)(param_1 + 5));
        if ((iVar3 == 0) || (iVar2 != 0)) goto LAB_00406bc4;
      }
      iVar2 = *piVar4;
      goto LAB_00406bc4;
    }
  }
  else if ((-1 < *(int *)((long)param_1 + 0x2c)) &&
          (iVar2 = close(*(int *)((long)param_1 + 0x2c)), iVar2 != 0)) {
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    goto LAB_00406bc4;
  }
LAB_00406bc2:
  iVar2 = 0;
LAB_00406bc4:
  FUN_00405700(param_1 + 0xc);
  if (param_1[10] != (void *)0x0) {
    FUN_004091a0();
  }
  if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
    free(param_1[0xb]);
  }
  else if (param_1[0xb] != (void *)0x0) {
    FUN_004091a0();
  }
  free(param_1);
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    *piVar4 = iVar2;
    iVar2 = -1;
  }
  return iVar2;
}


void * fts_read(void **param_1)

{
  ulong uVar1;
  char *__s;
  short sVar2;
  undefined uVar3;
  long lVar4;
  char cVar5;
  undefined uVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  size_t sVar11;
  long lVar12;
  void *pvVar13;
  void *pvVar14;
  uint uVar15;
  
  pvVar14 = *param_1;
  if (pvVar14 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar15 = *(uint *)(param_1 + 9);
  if ((uVar15 & 0x4000) != 0) {
    return (void *)0x0;
  }
  sVar7 = *(short *)((long)pvVar14 + 0x74);
  *(undefined *)((long)pvVar14 + 0x74) = 3;
  if (sVar7 == 1) {
    uVar6 = FUN_00405370(param_1,pvVar14,0);
    *(undefined *)((long)pvVar14 + 0x70) = uVar6;
    return pvVar14;
  }
  sVar2 = *(short *)((long)pvVar14 + 0x70);
  pvVar13 = pvVar14;
  if (sVar7 == 2) {
    if (1 < (ushort)(sVar2 - 0xcU)) {
      if (sVar2 == 1) goto LAB_00406e17;
      goto LAB_00406d40;
    }
    sVar7 = FUN_00405370(param_1,pvVar14,1);
    *(short *)((long)pvVar14 + 0x70) = sVar7;
    if (sVar7 != 1) {
      *param_1 = pvVar14;
      if (sVar7 != 0xb) {
        return pvVar14;
      }
      goto LAB_00407080;
    }
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar8 = FUN_00405a70(*(undefined *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                           &DAT_0040ceab);
      *(int *)((long)pvVar14 + 0x44) = iVar8;
      if (iVar8 < 0) {
        piVar9 = __errno_location();
        iVar8 = *piVar9;
        *(undefined *)((long)pvVar14 + 0x70) = 7;
        *(int *)((long)pvVar14 + 0x40) = iVar8;
        *param_1 = pvVar14;
        return pvVar14;
      }
      *(ushort *)((long)pvVar14 + 0x72) = *(ushort *)((long)pvVar14 + 0x72) | 2;
      sVar7 = *(short *)((long)pvVar14 + 0x70);
      goto LAB_00406ff7;
    }
    *param_1 = pvVar14;
LAB_0040700e:
    if (*(long *)((long)pvVar14 + 0x58) != 0) goto LAB_0040701e;
  }
  else {
    if (sVar2 == 1) {
      if (sVar7 == 4) goto LAB_00406eb2;
LAB_00406e17:
      if (((uVar15 & 0x40) != 0) && (*(void **)((long)pvVar14 + 0x78) != param_1[3])) {
LAB_00406eb2:
        if ((*(byte *)((long)pvVar14 + 0x72) & 2) != 0) {
          close(*(int *)((long)pvVar14 + 0x44));
        }
        if (param_1[1] != (void *)0x0) {
          FUN_004056b0();
          param_1[1] = (void *)0x0;
        }
        uVar3 = *(undefined *)(param_1 + 9);
        *(undefined *)((long)pvVar14 + 0x70) = 6;
        FUN_00405d40(uVar3,param_1 + 0xb,pvVar14);
        return pvVar14;
      }
      if (param_1[1] == (void *)0x0) {
LAB_004070d9:
        pvVar13 = (void *)FUN_00405de0(param_1,3);
        param_1[1] = pvVar13;
        if (pvVar13 == (void *)0x0) {
          uVar15 = *(uint *)(param_1 + 9);
          if ((uVar15 & 0x4000) != 0) {
            return (void *)0x0;
          }
          if ((*(int *)((long)pvVar14 + 0x40) != 0) && (*(short *)((long)pvVar14 + 0x70) != 4)) {
            *(undefined *)((long)pvVar14 + 0x70) = 7;
          }
          FUN_00405d40(uVar15,param_1 + 0xb,pvVar14);
          return pvVar14;
        }
      }
      else {
        if ((uVar15 & 0x2000) != 0) {
          *(uint *)(param_1 + 9) = uVar15 & 0xffffdfff;
          FUN_004056b0();
          param_1[1] = (void *)0x0;
          goto LAB_004070d9;
        }
        iVar8 = FUN_00405ac0(param_1,pvVar14,0xffffffff,*(undefined *)((long)pvVar14 + 0x30));
        if (iVar8 == 0) {
          pvVar13 = param_1[1];
        }
        else {
          piVar9 = __errno_location();
          pvVar13 = param_1[1];
          iVar8 = *piVar9;
          *(ushort *)((long)pvVar14 + 0x72) = *(ushort *)((long)pvVar14 + 0x72) | 1;
          *(int *)((long)pvVar14 + 0x40) = iVar8;
          for (pvVar14 = pvVar13; pvVar14 != (void *)0x0; pvVar14 = *(void **)((long)pvVar14 + 0x10)
              ) {
            *(undefined *)((long)pvVar14 + 0x30) =
                 *(undefined *)(*(long *)((long)pvVar14 + 8) + 0x30);
          }
        }
      }
      param_1[1] = (void *)0x0;
      pvVar14 = pvVar13;
    }
    else {
LAB_00406d40:
      do {
        pvVar14 = *(void **)((long)pvVar13 + 0x10);
        if (pvVar14 == (void *)0x0) {
          pvVar14 = *(void **)((long)pvVar13 + 8);
          if (*(long *)((long)pvVar14 + 0x18) != 0) {
            lVar4 = *(long *)((long)pvVar14 + 0x48);
            *param_1 = pvVar14;
            *(undefined *)((long)param_1[4] + lVar4) = 0;
            pvVar14 = (void *)FUN_00405de0(param_1,3);
            if (pvVar14 != (void *)0x0) {
              free(pvVar13);
              goto LAB_00406fba;
            }
            if ((*(byte *)((long)param_1 + 0x49) & 0x40) != 0) {
              return (void *)0x0;
            }
            pvVar14 = *(void **)((long)pvVar13 + 8);
          }
          *param_1 = pvVar14;
          free(pvVar13);
          if (*(long *)((long)pvVar14 + 0x58) == -1) {
            free(pvVar14);
            piVar9 = __errno_location();
            *piVar9 = 0;
            *param_1 = (void *)0x0;
            return (void *)0x0;
          }
          if (*(short *)((long)pvVar14 + 0x70) != 0xb) {
            *(undefined *)((long)param_1[4] + *(long *)((long)pvVar14 + 0x48)) = 0;
            if (*(long *)((long)pvVar14 + 0x58) == 0) {
              iVar8 = FUN_00405940(param_1);
              if (iVar8 == 0) goto LAB_00406da6;
LAB_004071bf:
              piVar9 = __errno_location();
              *(int *)((long)pvVar14 + 0x40) = *piVar9;
              *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
              if (*(short *)((long)pvVar14 + 0x70) == 2) {
                return (void *)0x0;
              }
              uVar15 = *(uint *)(param_1 + 9);
            }
            else {
              if ((*(ushort *)((long)pvVar14 + 0x72) & 2) == 0) {
                if (((*(ushort *)((long)pvVar14 + 0x72) & 1) == 0) &&
                   (iVar8 = FUN_00405ac0(param_1,*(undefined *)((long)pvVar14 + 8),0xffffffff,
                                         &DAT_0040ceaa), iVar8 != 0)) goto LAB_004071bf;
              }
              else {
                iVar8 = *(int *)((long)pvVar14 + 0x44);
                if ((*(uint *)(param_1 + 9) & 4) == 0) {
                  if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
                    iVar8 = fchdir(iVar8);
                    if (iVar8 != 0) {
                      piVar9 = __errno_location();
                      *(int *)((long)pvVar14 + 0x40) = *piVar9;
                      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
                    }
                    iVar8 = *(int *)((long)pvVar14 + 0x44);
                  }
                  else {
                    FUN_004058d0(param_1,iVar8,1);
                    iVar8 = *(int *)((long)pvVar14 + 0x44);
                  }
                }
                close(iVar8);
              }
LAB_00406da6:
              uVar15 = *(uint *)(param_1 + 9);
              if (*(short *)((long)pvVar14 + 0x70) == 2) goto LAB_00406dd8;
            }
            if (*(int *)((long)pvVar14 + 0x40) == 0) {
              *(undefined *)((long)pvVar14 + 0x70) = 6;
              FUN_00405d40(uVar15,param_1 + 0xb,pvVar14);
              uVar15 = *(uint *)(param_1 + 9);
            }
            else {
              *(undefined *)((long)pvVar14 + 0x70) = 7;
            }
LAB_00406dd8:
            if ((uVar15 & 0x4000) != 0) {
              return (void *)0x0;
            }
            return pvVar14;
          }
          goto FUN_00401d98;
        }
        *param_1 = pvVar14;
        free(pvVar13);
        if (*(long *)((long)pvVar14 + 0x58) == 0) {
          iVar8 = FUN_00405940(param_1);
          if (iVar8 != 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
            return (void *)0x0;
          }
          if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
            free(param_1[0xb]);
          }
          else if (param_1[0xb] != (void *)0x0) {
            FUN_004091a0();
          }
          __s = (char *)((long)pvVar14 + 0x108);
          pvVar13 = param_1[4];
          *(long *)((long)pvVar14 + 0x48) = *(long *)((long)pvVar14 + 0x60);
          memmove(pvVar13,__s,*(long *)((long)pvVar14 + 0x60) + 1);
          pcVar10 = strrchr(__s,0x2f);
          if ((pcVar10 != (char *)0x0) &&
             ((__s != pcVar10 || (*(char *)((long)pvVar14 + 0x109) != '\0')))) {
            sVar11 = strlen(pcVar10 + 1);
            memmove(__s,pcVar10 + 1,sVar11 + 1);
            *(size_t *)((long)pvVar14 + 0x60) = sVar11;
          }
          pvVar13 = param_1[4];
          uVar3 = *(undefined *)(param_1 + 9);
          *(void **)((long)pvVar14 + 0x38) = pvVar13;
          *(void **)((long)pvVar14 + 0x30) = pvVar13;
          FUN_00405a10(uVar3,param_1 + 0xb);
          sVar7 = *(short *)((long)pvVar14 + 0x70);
          goto LAB_00406ff7;
        }
        pvVar13 = pvVar14;
      } while (*(short *)((long)pvVar14 + 0x74) == 4);
      if (*(short *)((long)pvVar14 + 0x74) == 2) {
        sVar7 = FUN_00405370(param_1,pvVar14,1);
        *(short *)((long)pvVar14 + 0x70) = sVar7;
        if ((sVar7 == 1) && ((*(uint *)(param_1 + 9) & 4) == 0)) {
          iVar8 = FUN_00405a70(*(undefined *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                               &DAT_0040ceab);
          *(int *)((long)pvVar14 + 0x44) = iVar8;
          if (iVar8 < 0) {
            piVar9 = __errno_location();
            iVar8 = *piVar9;
            *(undefined *)((long)pvVar14 + 0x70) = 7;
            *(int *)((long)pvVar14 + 0x40) = iVar8;
          }
          else {
            *(ushort *)((long)pvVar14 + 0x72) = *(ushort *)((long)pvVar14 + 0x72) | 2;
          }
        }
        *(undefined *)((long)pvVar14 + 0x74) = 3;
      }
    }
LAB_00406fba:
    lVar4 = *(long *)(*(long *)((long)pvVar14 + 8) + 0x48);
    lVar12 = lVar4 + -1;
    if (*(char *)(*(long *)(*(long *)((long)pvVar14 + 8) + 0x38) + -1 + lVar4) != '/') {
      lVar12 = lVar4;
    }
    pvVar13 = param_1[4];
    *(undefined *)(lVar12 + (long)pvVar13) = 0x2f;
    memmove((undefined *)(lVar12 + (long)pvVar13) + 1,(void *)((long)pvVar14 + 0x108),
            *(long *)((long)pvVar14 + 0x60) + 1);
    sVar7 = *(short *)((long)pvVar14 + 0x70);
LAB_00406ff7:
    *param_1 = pvVar14;
    if (sVar7 != 0xb) {
LAB_00407001:
      if (sVar7 != 1) {
        return pvVar14;
      }
      goto LAB_0040700e;
    }
LAB_00407080:
    if (*(long *)((long)pvVar14 + 0xa8) != 2) {
      if (*(long *)((long)pvVar14 + 0xa8) == 1) {
        return pvVar14;
      }
FUN_00401d98:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)((long)pvVar14 + 8);
    if (((*(long *)(lVar4 + 0x68) == 0) && ((*(uint *)(param_1 + 9) & 0x18) == 0x18)) &&
       (iVar8 = FUN_00405860(lVar4), iVar8 == 2)) {
      sVar7 = *(short *)((long)pvVar14 + 0x70);
      goto LAB_00407001;
    }
    sVar7 = FUN_00405370(param_1,pvVar14,0);
    *(short *)((long)pvVar14 + 0x70) = sVar7;
    if ((*(uint *)((long)pvVar14 + 0x90) & 0xf000) != 0x4000) goto LAB_00407001;
    if (*(long *)((long)pvVar14 + 0x58) != 0) {
      uVar1 = *(long *)(lVar4 + 0x68) - 1;
      if (uVar1 < 0xfffffffffffffffe) {
        *(ulong *)(lVar4 + 0x68) = uVar1;
      }
      if (sVar7 != 1) {
        return pvVar14;
      }
      goto LAB_0040701e;
    }
    if (sVar7 != 1) {
      return pvVar14;
    }
  }
  param_1[3] = *(void **)((long)pvVar14 + 0x78);
LAB_0040701e:
  cVar5 = FUN_00405c90(*(undefined *)(param_1 + 9),param_1 + 0xb,pvVar14);
  if (cVar5 == '\0') {
    piVar9 = __errno_location();
    pvVar14 = (void *)0x0;
    *piVar9 = 0xc;
  }
  return pvVar14;
}


undefined fts_set(undefined param_1,long param_2,uint param_3)

{
  int *piVar1;
  
  if (param_3 < 5) {
    *(short *)(param_2 + 0x74) = (short)param_3;
    return 0;
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 1;
}


long fts_children(long *param_1,uint param_2)

{
  int __fd;
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined uVar5;
  
  piVar2 = __errno_location();
  if ((param_2 & 0xffffdfff) != 0) {
    *piVar2 = 0x16;
    return 0;
  }
  lVar4 = *param_1;
  *piVar2 = 0;
  if ((*(byte *)((long)param_1 + 0x49) & 0x40) == 0) {
    if (*(short *)(lVar4 + 0x70) == 9) {
      return *(long *)(lVar4 + 0x10);
    }
    lVar3 = 0;
    if (*(short *)(lVar4 + 0x70) == 1) {
      if (param_1[1] != 0) {
        FUN_004056b0();
      }
      uVar5 = 1;
      if (param_2 == 0x2000) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
        uVar5 = 2;
      }
      if (((*(long *)(lVar4 + 0x58) == 0) && (**(char **)(lVar4 + 0x30) != '/')) &&
         ((*(uint *)(param_1 + 9) & 4) == 0)) {
        __fd = FUN_00405a70(*(undefined *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                            &DAT_0040ceab);
        if (__fd < 0) {
          param_1[1] = 0;
          lVar3 = 0;
        }
        else {
          lVar4 = FUN_00405de0(param_1,uVar5);
          param_1[1] = lVar4;
          if ((*(byte *)((long)param_1 + 0x49) & 2) == 0) {
            iVar1 = fchdir(__fd);
            if (iVar1 != 0) {
              iVar1 = *piVar2;
              close(__fd);
              *piVar2 = iVar1;
              return 0;
            }
            close(__fd);
          }
          else {
            FUN_004058d0(param_1,__fd,1);
          }
          lVar3 = param_1[1];
        }
      }
      else {
        lVar3 = FUN_00405de0(param_1,uVar5);
        param_1[1] = lVar3;
      }
    }
    return lVar3;
  }
  return 0;
}


void FUN_004075c0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040763c;
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
      if (iVar9 <= iVar3) goto LAB_0040763c;
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
LAB_0040763c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004076a0(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004078c0;
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
            if (local_70 == (char *)0x0) goto LAB_00407800;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00407800;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00407800:
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
              __fprintf_chk(__stream,1," \'%s%s\'",param_9,*param_4);
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
LAB_004078c0:
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


uint FUN_00407cc0(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00407d0a:
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
          goto LAB_00407e0d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00407e0d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00407e18:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00407d88;
LAB_00407e2c:
    if (*pbVar8 == 0) goto LAB_00407d88;
  }
  else {
    if (param_7[6] == 0) goto LAB_00407d0a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00407e18;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00407e2c;
LAB_00407d88:
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
        FUN_004075c0(param_2,param_7);
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
LAB_00407ef6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040cff9;
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
          FUN_004075c0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00407ef6;
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
        puVar15 = &DAT_0040cff9;
        goto LAB_00408055;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00408000;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004076a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040cffa);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00408000:
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
  puVar15 = &DAT_0040d018;
LAB_00408055:
  uVar3 = FUN_004076a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408290(void)

{
  DAT_006104a0 = DAT_006102dc;
  _DAT_006104a4 = DAT_006102d8;
  FUN_00407cc0();
  DAT_006102dc = DAT_006104a0;
  DAT_006104e8 = DAT_006104b0;
  _DAT_006102d4 = DAT_006104a8;
  return;
}


void FUN_004082f0(void)

{
  FUN_00408290();
  return;
}


void FUN_00408310(void)

{
  FUN_00408290();
  return;
}


void FUN_00408330(void)

{
  FUN_00407cc0();
  return;
}


void FUN_00408350(void)

{
  FUN_00408290();
  return;
}


void FUN_00408370(void)

{
  FUN_00407cc0();
  return;
}


size_t FUN_00408390(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40d017;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_004083b4;
  }
  param_1 = &local_1c;
LAB_004083b4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00408670(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


undefined FUN_00408410(ulong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *__ptr;
  char *unaff_RBX;
  uint *unaff_RBP;
  char *pcVar4;
  undefined *unaff_R12;
  char *unaff_R13;
  
  do {
    pcVar4 = param_2;
    *(char **)((long)register0x00000020 + -8) = unaff_R13;
    *(undefined **)((long)register0x00000020 + -0x10) = unaff_R12;
    *(uint **)((long)register0x00000020 + -0x18) = unaff_RBP;
    *(char **)((long)register0x00000020 + -0x20) = unaff_RBX;
    unaff_RBX = (char *)(param_1 & 0xffffffff);
    unaff_R12 = (undefined *)((long)register0x00000020 + -0xfe8);
    *(undefined *)((long)register0x00000020 + -0xff0) = 0x408427;
    unaff_RBP = (uint *)__errno_location();
    iVar3 = (int)unaff_RBX;
    if ((iVar3 == -100) || (*pcVar4 == '/')) goto LAB_0040849a;
    *(undefined *)((long)register0x00000020 + -0xff0) = 0x408446;
    param_2 = unaff_RBX;
    __ptr = (undefined *)
            FUN_0040ac10((undefined *)((long)register0x00000020 + -0xfe8),unaff_RBX,pcVar4);
    if ((__ptr != (undefined *)0x0) &&
       (*unaff_RBP = 0x5f, __ptr != (undefined *)((long)register0x00000020 + -0xfe8))) {
      *(undefined *)((long)register0x00000020 + -0xff0) = 0x40845f;
      free(__ptr);
    }
    *(undefined *)((long)register0x00000020 + -0xff0) = 0x408467;
    iVar2 = FUN_0040a000((undefined *)((long)register0x00000020 + -0xfe8));
    if (iVar2 == 0) {
      if ((-1 < iVar3) && (*(int *)((long)register0x00000020 + -0xfe8) == iVar3)) {
        *(undefined *)((long)register0x00000020 + -0xff0) = 0x4084d8;
        FUN_0040a070((undefined *)((long)register0x00000020 + -0xfe8));
        *unaff_RBP = 9;
        return 0xffffffff;
      }
      *(undefined *)((long)register0x00000020 + -0xff0) = 0x40847b;
      iVar3 = fchdir(iVar3);
      if (iVar3 != 0) {
        uVar1 = *unaff_RBP;
        *(undefined *)((long)register0x00000020 + -0xff0) = 0x4084c3;
        FUN_0040a070((undefined *)((long)register0x00000020 + -0xfe8));
        *unaff_RBP = uVar1;
        return 0xffffffff;
      }
      *unaff_RBP = 0x5f;
      *(undefined *)((long)register0x00000020 + -0xff0) = 0x40848e;
      iVar3 = FUN_0040a050((undefined *)((long)register0x00000020 + -0xfe8));
      if (iVar3 == 0) {
        *(undefined *)((long)register0x00000020 + -0xff0) = 0x40849a;
        FUN_0040a070((undefined *)((long)register0x00000020 + -0xfe8));
LAB_0040849a:
        *unaff_RBP = 0x5f;
        return 0xffffffff;
      }
    }
    else {
      uVar1 = *unaff_RBP;
      *(undefined *)((long)register0x00000020 + -0xff0) = 0x4084e9;
      FUN_00409f50(uVar1);
    }
    param_1 = (ulong)*unaff_RBP;
    *(undefined *)((long)register0x00000020 + -0xff0) = 0x4084f1;
    FUN_00409f80();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xfe8);
    unaff_R13 = pcVar4;
  } while( true );
}


undefined thunk_FUN_00408410(ulong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *__ptr;
  char *unaff_RBX;
  uint *unaff_RBP;
  char *pcVar4;
  undefined *unaff_R12;
  char *unaff_R13;
  
  do {
    pcVar4 = param_2;
    *(char **)((long)register0x00000020 + -8) = unaff_R13;
    *(undefined **)((long)register0x00000020 + -0x10) = unaff_R12;
    *(uint **)((long)register0x00000020 + -0x18) = unaff_RBP;
    *(char **)((long)register0x00000020 + -0x20) = unaff_RBX;
    unaff_RBX = (char *)(param_1 & 0xffffffff);
    unaff_R12 = (undefined *)((long)register0x00000020 + -0xfe8);
    *(undefined *)((long)register0x00000020 + -0xff0) = 0x408427;
    unaff_RBP = (uint *)__errno_location();
    iVar3 = (int)unaff_RBX;
    if ((iVar3 == -100) || (*pcVar4 == '/')) goto LAB_0040849a;
    *(undefined *)((long)register0x00000020 + -0xff0) = 0x408446;
    param_2 = unaff_RBX;
    __ptr = (undefined *)
            FUN_0040ac10((undefined *)((long)register0x00000020 + -0xfe8),unaff_RBX,pcVar4);
    if ((__ptr != (undefined *)0x0) &&
       (*unaff_RBP = 0x5f, __ptr != (undefined *)((long)register0x00000020 + -0xfe8))) {
      *(undefined *)((long)register0x00000020 + -0xff0) = 0x40845f;
      free(__ptr);
    }
    *(undefined *)((long)register0x00000020 + -0xff0) = 0x408467;
    iVar2 = FUN_0040a000((undefined *)((long)register0x00000020 + -0xfe8));
    if (iVar2 == 0) {
      if ((-1 < iVar3) && (*(int *)((long)register0x00000020 + -0xfe8) == iVar3)) {
        *(undefined *)((long)register0x00000020 + -0xff0) = 0x4084d8;
        FUN_0040a070((undefined *)((long)register0x00000020 + -0xfe8));
        *unaff_RBP = 9;
        return 0xffffffff;
      }
      *(undefined *)((long)register0x00000020 + -0xff0) = 0x40847b;
      iVar3 = fchdir(iVar3);
      if (iVar3 != 0) {
        uVar1 = *unaff_RBP;
        *(undefined *)((long)register0x00000020 + -0xff0) = 0x4084c3;
        FUN_0040a070((undefined *)((long)register0x00000020 + -0xfe8));
        *unaff_RBP = uVar1;
        return 0xffffffff;
      }
      *unaff_RBP = 0x5f;
      *(undefined *)((long)register0x00000020 + -0xff0) = 0x40848e;
      iVar3 = FUN_0040a050((undefined *)((long)register0x00000020 + -0xfe8));
      if (iVar3 == 0) {
        *(undefined *)((long)register0x00000020 + -0xff0) = 0x40849a;
        FUN_0040a070((undefined *)((long)register0x00000020 + -0xfe8));
LAB_0040849a:
        *unaff_RBP = 0x5f;
        return 0xffffffff;
      }
    }
    else {
      uVar1 = *unaff_RBP;
      *(undefined *)((long)register0x00000020 + -0xff0) = 0x4084e9;
      FUN_00409f50(uVar1);
    }
    param_1 = (ulong)*unaff_RBP;
    *(undefined *)((long)register0x00000020 + -0xff0) = 0x4084f1;
    FUN_00409f80();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xfe8);
    unaff_R13 = pcVar4;
  } while( true );
}


undefined thunk_FUN_00408410(ulong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *__ptr;
  char *unaff_RBX;
  undefined *puVar4;
  uint *unaff_RBP;
  char *pcVar5;
  undefined *unaff_R12;
  char *unaff_R13;
  
  puVar4 = (undefined *)register0x00000020;
  do {
    pcVar5 = param_2;
    *(char **)(puVar4 + -8) = unaff_R13;
    *(undefined **)(puVar4 + -0x10) = unaff_R12;
    *(uint **)(puVar4 + -0x18) = unaff_RBP;
    *(char **)(puVar4 + -0x20) = unaff_RBX;
    unaff_RBX = (char *)(param_1 & 0xffffffff);
    unaff_R12 = puVar4 + -0xfe8;
    *(undefined *)(puVar4 + -0xff0) = 0x408427;
    unaff_RBP = (uint *)__errno_location();
    iVar3 = (int)unaff_RBX;
    if ((iVar3 == -100) || (*pcVar5 == '/')) goto LAB_0040849a;
    *(undefined *)(puVar4 + -0xff0) = 0x408446;
    param_2 = unaff_RBX;
    __ptr = (undefined *)FUN_0040ac10(puVar4 + -0xfe8,unaff_RBX,pcVar5);
    if ((__ptr != (undefined *)0x0) && (*unaff_RBP = 0x5f, __ptr != puVar4 + -0xfe8)) {
      *(undefined *)(puVar4 + -0xff0) = 0x40845f;
      free(__ptr);
    }
    *(undefined *)(puVar4 + -0xff0) = 0x408467;
    iVar2 = FUN_0040a000(puVar4 + -0xfe8);
    if (iVar2 == 0) {
      if ((-1 < iVar3) && (*(int *)(puVar4 + -0xfe8) == iVar3)) {
        *(undefined *)(puVar4 + -0xff0) = 0x4084d8;
        FUN_0040a070(puVar4 + -0xfe8);
        *unaff_RBP = 9;
        return 0xffffffff;
      }
      *(undefined *)(puVar4 + -0xff0) = 0x40847b;
      iVar3 = fchdir(iVar3);
      if (iVar3 != 0) {
        uVar1 = *unaff_RBP;
        *(undefined *)(puVar4 + -0xff0) = 0x4084c3;
        FUN_0040a070(puVar4 + -0xfe8);
        *unaff_RBP = uVar1;
        return 0xffffffff;
      }
      *unaff_RBP = 0x5f;
      *(undefined *)(puVar4 + -0xff0) = 0x40848e;
      iVar3 = FUN_0040a050(puVar4 + -0xfe8);
      if (iVar3 == 0) {
        *(undefined *)(puVar4 + -0xff0) = 0x40849a;
        FUN_0040a070(puVar4 + -0xfe8);
LAB_0040849a:
        *unaff_RBP = 0x5f;
        return 0xffffffff;
      }
    }
    else {
      uVar1 = *unaff_RBP;
      *(undefined *)(puVar4 + -0xff0) = 0x4084e9;
      FUN_00409f50(uVar1);
    }
    param_1 = (ulong)*unaff_RBP;
    *(undefined *)(puVar4 + -0xff0) = 0x4084f1;
    FUN_00409f80();
    puVar4 = puVar4 + -0xfe8;
    unaff_R13 = pcVar5;
  } while( true );
}


undefined thunk_FUN_00408410(ulong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *__ptr;
  char *unaff_RBX;
  undefined *puVar4;
  uint *unaff_RBP;
  char *pcVar5;
  undefined *unaff_R12;
  char *unaff_R13;
  
  puVar4 = (undefined *)register0x00000020;
  do {
    pcVar5 = param_2;
    *(char **)(puVar4 + -8) = unaff_R13;
    *(undefined **)(puVar4 + -0x10) = unaff_R12;
    *(uint **)(puVar4 + -0x18) = unaff_RBP;
    *(char **)(puVar4 + -0x20) = unaff_RBX;
    unaff_RBX = (char *)(param_1 & 0xffffffff);
    unaff_R12 = puVar4 + -0xfe8;
    *(undefined *)(puVar4 + -0xff0) = 0x408427;
    unaff_RBP = (uint *)__errno_location();
    iVar3 = (int)unaff_RBX;
    if ((iVar3 == -100) || (*pcVar5 == '/')) goto LAB_0040849a;
    *(undefined *)(puVar4 + -0xff0) = 0x408446;
    param_2 = unaff_RBX;
    __ptr = (undefined *)FUN_0040ac10(puVar4 + -0xfe8,unaff_RBX,pcVar5);
    if ((__ptr != (undefined *)0x0) && (*unaff_RBP = 0x5f, __ptr != puVar4 + -0xfe8)) {
      *(undefined *)(puVar4 + -0xff0) = 0x40845f;
      free(__ptr);
    }
    *(undefined *)(puVar4 + -0xff0) = 0x408467;
    iVar2 = FUN_0040a000(puVar4 + -0xfe8);
    if (iVar2 == 0) {
      if ((-1 < iVar3) && (*(int *)(puVar4 + -0xfe8) == iVar3)) {
        *(undefined *)(puVar4 + -0xff0) = 0x4084d8;
        FUN_0040a070(puVar4 + -0xfe8);
        *unaff_RBP = 9;
        return 0xffffffff;
      }
      *(undefined *)(puVar4 + -0xff0) = 0x40847b;
      iVar3 = fchdir(iVar3);
      if (iVar3 != 0) {
        uVar1 = *unaff_RBP;
        *(undefined *)(puVar4 + -0xff0) = 0x4084c3;
        FUN_0040a070(puVar4 + -0xfe8);
        *unaff_RBP = uVar1;
        return 0xffffffff;
      }
      *unaff_RBP = 0x5f;
      *(undefined *)(puVar4 + -0xff0) = 0x40848e;
      iVar3 = FUN_0040a050(puVar4 + -0xfe8);
      if (iVar3 == 0) {
        *(undefined *)(puVar4 + -0xff0) = 0x40849a;
        FUN_0040a070(puVar4 + -0xfe8);
LAB_0040849a:
        *unaff_RBP = 0x5f;
        return 0xffffffff;
      }
    }
    else {
      uVar1 = *unaff_RBP;
      *(undefined *)(puVar4 + -0xff0) = 0x4084e9;
      FUN_00409f50(uVar1);
    }
    param_1 = (ulong)*unaff_RBP;
    *(undefined *)(puVar4 + -0xff0) = 0x4084f1;
    FUN_00409f80();
    puVar4 = puVar4 + -0xfe8;
    unaff_R13 = pcVar5;
  } while( true );
}


ulong FUN_00408530(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040a3d0(param_1);
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


void FUN_00408590(long param_1)

{
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x18) = 0x95f616;
  return;
}


undefined FUN_004085a0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 3) != 0x95f616) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("state->magic == 9827862","lib/cycle-check.c",0x3c,"cycle_check");
  }
  uVar2 = param_1[2];
  lVar3 = param_2[1];
  if (uVar2 == 0) {
    param_1[2] = 1;
  }
  else {
    if ((*param_1 == lVar3) && (*param_2 == param_1[1])) {
      return 1;
    }
    uVar1 = uVar2 + 1;
    param_1[2] = uVar1;
    if ((uVar2 & uVar1) != 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 1;
    }
  }
  lVar4 = *param_2;
  *param_1 = lVar3;
  param_1[1] = lVar4;
  return 0;
}


void FUN_00408620(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_0040a090(iVar1);
  return;
}


bool FUN_00408670(int param_1)

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
    pbVar5 = &DAT_0040d054;
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


ulong FUN_004086d0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = 10;
  if (9 < param_1) {
    uVar3 = param_1;
  }
  uVar3 = uVar3 | 1;
  do {
    if (uVar3 == 0xffffffffffffffff) {
      return 0xffffffffffffffff;
    }
    uVar1 = uVar3 % 3;
    if (uVar3 < 10) {
LAB_00408750:
      if (uVar1 != 0) {
        return uVar3;
      }
    }
    else if (uVar1 != 0) {
      lVar5 = 0x10;
      uVar4 = 9;
      uVar2 = 3;
      do {
        uVar2 = uVar2 + 2;
        uVar4 = uVar4 + lVar5;
        uVar1 = uVar3 % uVar2;
        if (uVar3 <= uVar4) goto LAB_00408750;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_00408770(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_00408780(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_00408790(long *param_1,undefined param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_004087c0(long param_1,long param_2,long **param_3,char param_4)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_00408790();
  *param_3 = plVar6;
  lVar8 = *plVar6;
  if (lVar8 == 0) {
    return 0;
  }
  if (lVar8 != param_2) {
    cVar5 = (**(code **)(param_1 + 0x38))(param_2);
    if (cVar5 == '\0') {
      plVar7 = (long *)plVar6[1];
      if (plVar7 == (long *)0x0) {
        return 0;
      }
      lVar8 = *plVar7;
      do {
        if (param_2 == lVar8) {
LAB_0040884c:
          if (param_4 == '\0') {
            return lVar8;
          }
          plVar6[1] = plVar7[1];
          *plVar7 = 0;
          plVar7[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar7;
          return lVar8;
        }
        cVar5 = (**(code **)(param_1 + 0x38))(param_2);
        if (cVar5 != '\0') {
          plVar7 = (long *)plVar6[1];
          lVar8 = *plVar7;
          goto LAB_0040884c;
        }
        plVar6 = (long *)plVar6[1];
        plVar7 = (long *)plVar6[1];
        if (plVar7 == (long *)0x0) {
          return 0;
        }
        lVar8 = *plVar7;
      } while( true );
    }
    lVar8 = *plVar6;
  }
  if (param_4 != '\0') {
    puVar1 = (undefined *)plVar6[1];
    if (puVar1 != (undefined *)0x0) {
      uVar2 = *(undefined *)((long)puVar1 + 4);
      uVar3 = *(undefined *)(puVar1 + 1);
      uVar4 = *(undefined *)((long)puVar1 + 0xc);
      *(undefined *)plVar6 = *(undefined *)puVar1;
      *(undefined *)((long)plVar6 + 4) = uVar2;
      *(undefined *)(plVar6 + 1) = uVar3;
      *(undefined *)((long)plVar6 + 0xc) = uVar4;
      *puVar1 = 0;
      puVar1[1] = *(undefined *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar1;
      return lVar8;
    }
    *plVar6 = 0;
  }
  return lVar8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_004088e0(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_0040d0d0) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_0040d0e4 < fVar1) && (fVar1 < DAT_0040d0e8)) && (_DAT_0040d0ec < pfVar2[3])) &&
     (_DAT_0040d0f0 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_0040d0e4;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_0040d0f4)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_0040d0d0;
  return 0;
}


undefined FUN_00408960(long param_1,long **param_2,char param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *param_2;
  if (param_2[1] <= plVar5) {
    return 1;
  }
  do {
    while (lVar6 = *plVar5, lVar6 == 0) {
LAB_00408988:
      plVar5 = plVar5 + 2;
      if (param_2[1] < plVar5 || param_2[1] == plVar5) {
        return 1;
      }
    }
    plVar3 = (long *)plVar5[1];
    if ((long *)plVar5[1] != (long *)0x0) {
      do {
        while( true ) {
          lVar6 = *plVar3;
          plVar2 = (long *)FUN_00408790(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_004089ff;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_004089ff:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_00408988;
    plVar3 = (long *)FUN_00408790(param_1,lVar6);
    if (*plVar3 == 0) {
      *plVar3 = lVar6;
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    }
    else {
      plVar4 = *(long **)(param_1 + 0x48);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)malloc(0x10);
        if (plVar4 == (long *)0x0) {
          return 0;
        }
      }
      else {
        *(long *)(param_1 + 0x48) = plVar4[1];
      }
      lVar1 = plVar3[1];
      *plVar4 = lVar6;
      plVar4[1] = lVar1;
      plVar3[1] = (long)plVar4;
    }
    *plVar5 = 0;
    plVar5 = plVar5 + 2;
    param_2[3] = (long *)((long)param_2[3] + -1);
    if (param_2[1] < plVar5 || param_2[1] == plVar5) {
      return 1;
    }
  } while( true );
}


undefined FUN_00408ab0(long param_1)

{
  return *(undefined *)(param_1 + 0x10);
}


undefined FUN_00408ac0(long param_1)

{
  return *(undefined *)(param_1 + 0x18);
}


undefined FUN_00408ad0(long param_1)

{
  return *(undefined *)(param_1 + 0x20);
}


void FUN_00408ae0(long **param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *param_1;
  plVar1 = param_1[1];
  uVar3 = 0;
  if (plVar1 <= plVar5) {
    return;
  }
  do {
    while (*plVar5 == 0) {
      plVar5 = plVar5 + 2;
      if (plVar1 <= plVar5) {
        return;
      }
    }
    uVar4 = 1;
    for (lVar2 = plVar5[1]; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      uVar4 = uVar4 + 1;
    }
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    plVar5 = plVar5 + 2;
  } while (plVar5 < plVar1);
  return;
}


bool FUN_00408b30(long **param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *param_1;
  plVar3 = (long *)0x0;
  plVar4 = (long *)0x0;
  do {
    while( true ) {
      if (param_1[1] <= plVar2) {
        if (param_1[3] != plVar4) {
          return false;
        }
        return param_1[4] == plVar3;
      }
      if (*plVar2 != 0) break;
LAB_00408b48:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_00408b48;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ba0(long **param_1,undefined param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  double dVar7;
  double dVar8;
  
  uVar5 = 0;
  plVar1 = param_1[2];
  plVar2 = param_1[3];
  for (plVar6 = *param_1; plVar6 < param_1[1]; plVar6 = plVar6 + 2) {
    while (*plVar6 != 0) {
      uVar4 = 1;
      for (lVar3 = plVar6[1]; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
        uVar4 = uVar4 + 1;
      }
      if (uVar5 < uVar4) {
        uVar5 = uVar4;
      }
      plVar6 = plVar6 + 2;
      if (param_1[1] <= plVar6) goto LAB_00408c0d;
    }
  }
LAB_00408c0d:
  __fprintf_chk(param_2,1,"# entries:         %lu\n",param_1[4]);
  __fprintf_chk(param_2,1,"# buckets:         %lu\n",plVar1);
  if ((long)plVar2 < 0) {
    dVar7 = (double)((ulong)plVar2 >> 1 | (ulong)((uint)plVar2 & 1));
    dVar7 = dVar7 + dVar7;
  }
  else {
    dVar7 = (double)(long)plVar2;
  }
  if ((long)plVar1 < 0) {
    dVar8 = (double)((ulong)plVar1 >> 1 | (ulong)((uint)plVar1 & 1));
    dVar8 = dVar8 + dVar8;
  }
  else {
    dVar8 = (double)(long)plVar1;
  }
  __fprintf_chk((dVar7 * _DAT_0040d108) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_00408cf0(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00408790();
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    return 0;
  }
  while( true ) {
    if (lVar3 == param_2) {
      return param_2;
    }
    cVar1 = (**(code **)(param_1 + 0x38))(param_2);
    if (cVar1 != '\0') break;
    plVar2 = (long *)plVar2[1];
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    lVar3 = *plVar2;
  }
  return *plVar2;
}


long FUN_00408d50(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00401da2();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00401da2();
  return lVar1;
}


long FUN_00408da0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_00408790();
  plVar3 = plVar2;
  do {
    lVar1 = *plVar3;
    plVar3 = (long *)plVar3[1];
    if (lVar1 == param_2) {
      if (plVar3 != (long *)0x0) {
        return *plVar3;
      }
      break;
    }
  } while (plVar3 != (long *)0x0);
  do {
    plVar2 = plVar2 + 2;
    if (*(long **)(param_1 + 8) <= plVar2) {
      return 0;
    }
  } while (*plVar2 == 0);
  return *plVar2;
}


ulong FUN_00408e10(long **param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *param_1;
  if (param_1[1] < plVar3 || param_1[1] == plVar3) {
    return 0;
  }
  uVar2 = 0;
  do {
    if (*plVar3 != 0) {
      if (param_3 <= uVar2) {
        return uVar2;
      }
      *(long *)(param_2 + uVar2 * 8) = *plVar3;
      uVar2 = uVar2 + 1;
      for (puVar1 = (undefined *)plVar3[1]; puVar1 != (undefined *)0x0;
          puVar1 = (undefined *)puVar1[1]) {
        if (param_3 == uVar2) {
          return param_3;
        }
        uVar2 = uVar2 + 1;
        *(undefined *)(param_2 + -8 + uVar2 * 8) = *puVar1;
      }
    }
    plVar3 = plVar3 + 2;
  } while (plVar3 <= param_1[1] && param_1[1] != plVar3);
  return uVar2;
}


long FUN_00408e80(long **param_1,code *param_2,undefined param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *param_1;
  if (param_1[1] < plVar5 || param_1[1] == plVar5) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar4 = *plVar5;
      plVar2 = plVar5;
      if (lVar4 != 0) {
        while( true ) {
          cVar1 = (*param_2)(lVar4,param_3);
          if (cVar1 == '\0') {
            return lVar3;
          }
          plVar2 = (long *)plVar2[1];
          lVar3 = lVar3 + 1;
          if (plVar2 == (long *)0x0) break;
          lVar4 = *plVar2;
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
  return lVar3;
}


ulong FUN_00408f00(byte *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = 0;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar2 = (uVar2 * 0x1f + (ulong)bVar1) % param_2;
    bVar1 = *param_1;
  }
  return uVar2;
}


void FUN_00408f40(undefined *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_00408f60(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_00408770;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_00408780;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_0040d0d0;
    cVar1 = FUN_004088e0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00409040;
    fVar4 = DAT_0040d0f8;
    if ((long)param_1 < 0) goto LAB_004090c3;
LAB_0040907e:
    fVar3 = (float)param_1;
LAB_00409087:
    fVar3 = fVar3 / fVar4;
    if (_DAT_0040d0fc <= fVar3) goto LAB_00409040;
    if (fVar3 < _DAT_0040d100) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_0040d100) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_004088e0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00409040;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040907e;
LAB_004090c3:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_00409087;
    }
  }
  __nmemb = (void *)FUN_004086d0(param_1);
  if (((((ulong)__nmemb >> 0x3c & 1) == 0) && ((ulong)__nmemb >> 0x3d == 0)) &&
     (__ptr[2] = __nmemb, __nmemb != (void *)0x0)) {
    pvVar2 = calloc((size_t)__nmemb,0x10);
    *__ptr = pvVar2;
    if (pvVar2 != (void *)0x0) {
      __ptr[3] = (void *)0x0;
      __ptr[4] = (void *)0x0;
      __ptr[1] = (void *)((long)__nmemb * 0x10 + (long)pvVar2);
      __ptr[6] = param_3;
      __ptr[7] = param_4;
      __ptr[8] = param_5;
      __ptr[9] = (void *)0x0;
      return __ptr;
    }
  }
LAB_00409040:
  free(__ptr);
  return (void **)0x0;
}


void FUN_004090f0(long **param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *param_1;
  if (*param_1 < param_1[1]) {
    do {
      while (*plVar5 != 0) {
        plVar4 = param_1[8];
        plVar3 = (long *)plVar5[1];
        while (plVar3 != (long *)0x0) {
          if (plVar4 != (long *)0x0) {
            (*(code *)plVar4)(*plVar3);
            plVar4 = param_1[8];
          }
          plVar1 = (long *)plVar3[1];
          plVar2 = param_1[9];
          *plVar3 = 0;
          plVar3[1] = (long)plVar2;
          param_1[9] = plVar3;
          plVar3 = plVar1;
        }
        if (plVar4 != (long *)0x0) {
          (*(code *)plVar4)(*plVar5);
        }
        *plVar5 = 0;
        plVar4 = plVar5 + 2;
        plVar5[1] = 0;
        plVar5 = plVar4;
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_00409183;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_00409183:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_004091a0(long **param_1)

{
  void *pvVar1;
  void *__ptr;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *param_1;
  plVar2 = param_1[1];
  if ((param_1[8] != (long *)0x0) && (param_1[4] != (long *)0x0)) {
    if (plVar2 <= plVar4) goto LAB_0040923c;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_004091ff;
      }
      while( true ) {
        (*(code *)param_1[8])(lVar5);
        plVar3 = (long *)plVar3[1];
        if (plVar3 == (long *)0x0) break;
        lVar5 = *plVar3;
      }
      plVar2 = param_1[1];
      plVar4 = plVar4 + 2;
    } while (plVar4 < plVar2);
LAB_004091ff:
    plVar4 = *param_1;
  }
  if (plVar4 < plVar2) {
    do {
      __ptr = (void *)plVar4[1];
      while (__ptr != (void *)0x0) {
        pvVar1 = *(void **)((long)__ptr + 8);
        free(__ptr);
        __ptr = pvVar1;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 <= param_1[1] && param_1[1] != plVar4);
  }
LAB_0040923c:
  plVar4 = param_1[9];
  while (plVar4 != (long *)0x0) {
    plVar2 = (long *)plVar4[1];
    free(plVar4);
    plVar4 = plVar2;
  }
  free(*param_1);
  free(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00409280(void **param_1,ulong param_2)

{
  char cVar1;
  undefined uVar2;
  float fVar3;
  void *local_68;
  void *local_60;
  void *local_58;
  void *local_50;
  undefined local_48;
  void *local_40;
  void *local_38;
  void *local_30;
  void *local_28;
  void *local_20;
  
  local_40 = param_1[5];
  if (*(char *)((long)local_40 + 0x10) == '\0') {
    if ((long)param_2 < 0) {
      fVar3 = (float)(param_2 >> 1 | (ulong)((uint)param_2 & 1));
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)param_2;
    }
    fVar3 = fVar3 / *(float *)((long)local_40 + 8);
    if (_DAT_0040d0fc <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_0040d100) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_0040d100) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_004086d0(param_2);
  if ((local_58 != (void *)0x0) && (-1 < (long)local_58 * 8 && (ulong)local_58 >> 0x3d == 0)) {
    if (param_1[2] == local_58) {
      return 1;
    }
    local_68 = calloc((size_t)local_58,0x10);
    if (local_68 != (void *)0x0) {
      local_60 = (void *)((long)local_58 * 0x10 + (long)local_68);
      local_38 = param_1[6];
      local_50 = (void *)0x0;
      local_30 = param_1[7];
      local_48 = 0;
      local_28 = param_1[8];
      local_20 = param_1[9];
      uVar2 = FUN_00408960(&local_68,param_1,0);
      if ((char)uVar2 != '\0') {
        free(*param_1);
        *param_1 = local_68;
        param_1[1] = local_60;
        param_1[2] = local_58;
        param_1[3] = local_50;
        param_1[9] = local_20;
        return uVar2;
      }
      param_1[9] = local_20;
      cVar1 = FUN_00408960(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_00408960(param_1,&local_68,0), cVar1 != '\0')) {
        free(local_68);
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00409480(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  long *local_20;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = FUN_004087c0(param_1,param_2,&local_20,0);
  if (lVar2 != 0) {
    if (param_3 != (long *)0x0) {
      *param_3 = lVar2;
    }
    return 0;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  if ((long)uVar6 < 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    fVar7 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = fVar7 + fVar7;
    if ((long)uVar3 < 0) goto LAB_0040957a;
LAB_004094eb:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_00409502;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_004094eb;
LAB_0040957a:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_00409502;
  }
  FUN_004088e0(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x28);
  uVar6 = *(ulong *)(param_1 + 0x10);
  if ((long)uVar6 < 0) {
    fVar7 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
    fVar7 = fVar7 + fVar7;
  }
  else {
    fVar7 = (float)uVar6;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  if ((long)uVar6 < 0) {
    fVar8 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float)uVar6;
  }
  if (*(float *)(lVar2 + 8) * fVar7 < fVar8) {
    fVar7 = fVar7 * *(float *)(lVar2 + 0xc);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      fVar7 = fVar7 * *(float *)(lVar2 + 8);
    }
    if (_DAT_0040d0fc <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_0040d100 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_0040d100) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_00409280(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_004087c0(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_00401dac();
      return uVar5;
    }
  }
LAB_00409502:
  if (*local_20 == 0) {
    *local_20 = param_2;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    return 1;
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)malloc(0x10);
    if (plVar4 == (long *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    *(long *)(param_1 + 0x48) = plVar4[1];
  }
  lVar2 = local_20[1];
  *plVar4 = param_2;
  plVar4[1] = lVar2;
  local_20[1] = (long)plVar4;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return 1;
}


undefined FUN_00409700(undefined param_1,undefined param_2)

{
  int iVar1;
  undefined local_10;
  
  iVar1 = FUN_00409480(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00409740(long param_1,undefined param_2)

{
  float *pfVar1;
  ulong uVar2;
  void *pvVar3;
  void *__ptr;
  char cVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  long *local_20;
  
  lVar5 = FUN_004087c0(param_1,param_2,&local_20,1);
  if (lVar5 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  if (*local_20 == 0) {
    uVar6 = *(long *)(param_1 + 0x18) - 1;
    *(ulong *)(param_1 + 0x18) = uVar6;
    if ((long)uVar6 < 0) {
      uVar2 = *(ulong *)(param_1 + 0x10);
      fVar7 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
      pfVar1 = *(float **)(param_1 + 0x28);
      fVar7 = fVar7 + fVar7;
    }
    else {
      pfVar1 = *(float **)(param_1 + 0x28);
      fVar7 = (float)uVar6;
      uVar2 = *(ulong *)(param_1 + 0x10);
    }
    if ((long)uVar2 < 0) {
      fVar8 = (float)(uVar2 >> 1 | (ulong)((uint)uVar2 & 1));
      fVar8 = fVar8 + fVar8;
    }
    else {
      fVar8 = (float)uVar2;
    }
    if (fVar7 < fVar8 * *pfVar1) {
      FUN_004088e0(param_1 + 0x28);
      uVar6 = *(ulong *)(param_1 + 0x10);
      pfVar1 = *(float **)(param_1 + 0x28);
      if ((long)uVar6 < 0) {
        fVar7 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
        fVar7 = fVar7 + fVar7;
      }
      else {
        fVar7 = (float)uVar6;
      }
      uVar6 = *(ulong *)(param_1 + 0x18);
      if ((long)uVar6 < 0) {
        fVar8 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
        fVar8 = fVar8 + fVar8;
      }
      else {
        fVar8 = (float)uVar6;
      }
      if (fVar8 < *pfVar1 * fVar7) {
        fVar7 = fVar7 * pfVar1[1];
        if (*(char *)(pfVar1 + 4) == '\0') {
          fVar7 = fVar7 * pfVar1[2];
        }
        if (_DAT_0040d100 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_0040d100) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_00409280(param_1,uVar6);
        if (cVar4 == '\0') {
          __ptr = *(void **)(param_1 + 0x48);
          while (__ptr != (void *)0x0) {
            pvVar3 = *(void **)((long)__ptr + 8);
            free(__ptr);
            __ptr = pvVar3;
          }
          *(undefined *)(param_1 + 0x48) = 0;
        }
      }
    }
    return lVar5;
  }
  return lVar5;
}


void FUN_00409920(undefined *param_1,undefined param_2)

{
  *(undefined *)(param_1 + 5) = 0;
  *(undefined *)(param_1 + 7) = 1;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = param_2;
  return;
}


undefined FUN_00409940(long param_1)

{
  return *(undefined *)(param_1 + 0x1c);
}


undefined FUN_00409950(long param_1,undefined param_2)

{
  undefined *puVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(byte *)(param_1 + 0x1c) ^ 1);
  uVar3 = *(int *)(param_1 + 0x14) + uVar4 & 3;
  puVar1 = (undefined *)(param_1 + (ulong)uVar3 * 4);
  uVar2 = *puVar1;
  *puVar1 = param_2;
  *(uint *)(param_1 + 0x14) = uVar3;
  if (*(uint *)(param_1 + 0x18) == uVar3) {
    *(uint *)(param_1 + 0x18) = uVar4 + *(uint *)(param_1 + 0x18) & 3;
  }
  *(undefined *)(param_1 + 0x1c) = 0;
  return uVar2;
}


undefined FUN_00409990(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined uVar3;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  puVar1 = (undefined *)(param_1 + (ulong)uVar2 * 4);
  uVar3 = *puVar1;
  *puVar1 = *(undefined *)(param_1 + 0x10);
  if (uVar2 != *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 0x14) = uVar2 + 3 & 3;
    return uVar3;
  }
  *(undefined *)(param_1 + 0x1c) = 1;
  return uVar3;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_004099e0(void)

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
  if (DAT_006104d8 != (char *)0x0) goto LAB_00409a1a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00409b05:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00409b26;
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
        goto LAB_00409b05;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00409b26:
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
LAB_00409bc0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00409d4c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00409bc0;
              if (uVar4 == 0x23) goto LAB_00409db1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00409d5f;
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
                FUN_0040a3d0(__stream);
                goto LAB_00409b64;
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
LAB_00409d4c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00409d5f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00409b5e;
    }
  }
  DAT_006104d8 = "";
LAB_00409a1a:
  cVar1 = *DAT_006104d8;
  pcVar7 = DAT_006104d8;
  do {
    if (cVar1 == '\0') {
LAB_00409a74:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00409a74;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00409db1:
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
  if (uVar4 == 0xffffffff) goto LAB_00409d5f;
  goto LAB_00409bc0;
LAB_00409d5f:
  FUN_0040a3d0(__stream);
  if (local_d0 == 0) {
LAB_00409b5e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00409b64:
  free(__file);
  DAT_006104d8 = pcVar7;
  goto LAB_00409a1a;
}


void FUN_00409f50(undefined param_1)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"unable to record current working directory",5);
  error(DAT_00610278,param_1,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00409f80(undefined param_1)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"failed to return to initial working directory",5);
  error(DAT_00610278,param_1,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00409fb0(int param_1,char *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_3 & 0x40) != 0) {
    uVar2 = param_4 & 0xffffffff;
  }
  iVar1 = openat(param_1,param_2,param_3,uVar2);
  FUN_0040a090(iVar1);
  return;
}


int FUN_0040a000(int *param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined *)(param_1 + 2) = 0;
  iVar1 = FUN_00408620(&DAT_0040ceab,0x80000);
  *param_1 = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  lVar2 = FUN_0040a630(0,0);
  *(long *)(param_1 + 2) = lVar2;
  return -(uint)(lVar2 == 0);
}


void FUN_0040a050(int *param_1)

{
  if (-1 < *param_1) {
    fchdir(*param_1);
    return;
  }
  FUN_0040a160(*(undefined *)(param_1 + 2));
  return;
}


void FUN_0040a070(int *param_1)

{
  if (-1 < *param_1) {
    close(*param_1);
  }
  free(*(void **)(param_1 + 2));
  return;
}


uint FUN_0040a090(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_0040ad40();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


void FUN_0040a0e0(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    return;
  }
  iVar1 = close(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("! close_fail","lib/chdir-long.c",0x40,"cdb_free");
}


undefined FUN_0040a120(int *param_1,char *param_2)

{
  int iVar1;
  undefined uVar2;
  
  iVar1 = openat(*param_1,param_2,0x10900);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0040a0e0(*param_1);
    *param_1 = iVar1;
    uVar2 = 0;
  }
  return uVar2;
}


int FUN_0040a160(char *param_1)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  undefined *puVar5;
  char *__s;
  int local_2c;
  
  iVar1 = chdir(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x24) {
    return iVar1;
  }
  sVar3 = strlen(param_1);
  local_2c = -100;
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 < len","lib/chdir-long.c",0x7e,"chdir_long");
  }
  if (sVar3 < 0x1000) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("4096 <= len","lib/chdir-long.c",0x7f,"chdir_long");
  }
  sVar4 = strspn(param_1,"/");
  if (sVar4 == 2) {
    puVar5 = (undefined *)FUN_0040ab00(param_1 + 3,0x2f,sVar3 - 3);
    if (puVar5 == (undefined *)0x0) {
      return -1;
    }
    *puVar5 = 0;
    iVar1 = FUN_0040a120(&local_2c,param_1);
    *puVar5 = 0x2f;
    if (iVar1 != 0) goto LAB_0040a290;
    sVar4 = strspn(puVar5 + 1,"/");
    __s = puVar5 + 1 + sVar4;
  }
  else {
    __s = param_1;
    if (sVar4 != 0) {
      iVar1 = FUN_0040a120(&local_2c,"/");
      if (iVar1 != 0) goto LAB_0040a290;
      __s = param_1 + sVar4;
    }
  }
  if (*__s == '/') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("*dir != \'/\'","lib/chdir-long.c",0xa2,"chdir_long");
  }
  param_1 = param_1 + sVar3;
  if (param_1 < __s) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dir <= dir_end","lib/chdir-long.c",0xa3,"chdir_long");
  }
  while (0xfff < (long)param_1 - (long)__s) {
    puVar5 = (undefined *)memrchr(__s,0x2f,0x1000);
    if (puVar5 == (undefined *)0x0) {
      *piVar2 = 0x24;
      return -1;
    }
    *puVar5 = 0;
    if (0xfff < (long)puVar5 - (long)__s) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("slash - dir < 4096","lib/chdir-long.c",0xb3,"chdir_long");
    }
    iVar1 = FUN_0040a120(&local_2c,__s);
    *puVar5 = 0x2f;
    if (iVar1 != 0) goto LAB_0040a290;
    sVar3 = strspn(puVar5 + 1,"/");
    __s = puVar5 + 1 + sVar3;
  }
  if (((param_1 <= __s) || (iVar1 = FUN_0040a120(&local_2c,__s), iVar1 == 0)) &&
     (iVar1 = fchdir(local_2c), iVar1 == 0)) {
    FUN_0040a0e0(local_2c);
    return 0;
  }
LAB_0040a290:
  iVar1 = *piVar2;
  FUN_0040a0e0(local_2c);
  *piVar2 = iVar1;
  return -1;
}


int FUN_0040a3d0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_0040a437;
    }
    iVar1 = FUN_0040a590(param_1);
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
LAB_0040a437:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0040a450(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_006104e0 < 0) {
    iVar1 = FUN_0040a450(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_006104e0 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_006104e0 = 1;
      return iVar1;
    }
    iVar1 = FUN_0040a450(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_006104e0 = -1;
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


void FUN_0040a590(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_0040a5d0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_0040a5d0(FILE *param_1,__off_t param_2,int param_3)

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


void * FUN_0040a630(void *param_1,size_t param_2)

{
  char *__filename;
  bool bVar1;
  __dev_t _Var2;
  __dev_t _Var3;
  __ino_t _Var4;
  __ino_t _Var5;
  int iVar6;
  int iVar7;
  int *piVar8;
  DIR *__dirp;
  dirent *pdVar9;
  size_t __n;
  void *pvVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  __ino_t _Var15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  __dev_t local_120;
  void *local_110;
  void *local_108;
  ulong local_100;
  void *local_e8;
  stat local_c8;
  
  if (param_2 == 0) {
    local_100 = 0x1000;
    if (param_1 != (void *)0x0) {
      piVar8 = __errno_location();
      *piVar8 = 0x16;
      return (void *)0x0;
    }
LAB_0040a662:
    local_110 = malloc(local_100);
    if (local_110 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    local_110 = param_1;
    local_100 = param_2;
    if (param_1 == (void *)0x0) goto LAB_0040a662;
  }
  lVar13 = (long)local_110 + local_100;
  *(undefined *)(lVar13 + -1) = 0;
  iVar6 = __lxstat(1,".",&local_c8);
  _Var15 = local_c8.st_ino;
  _Var2 = local_c8.st_dev;
  if (-1 < iVar6) {
    local_120 = local_c8.st_dev;
    iVar6 = __lxstat(1,"/",&local_c8);
    _Var4 = local_c8.st_ino;
    _Var3 = local_c8.st_dev;
    if (-1 < iVar6) {
      local_e8 = (void *)(lVar13 + -1);
      bVar16 = _Var2 != local_c8.st_dev;
      bVar17 = _Var15 != local_c8.st_ino;
      if (!bVar16 && !bVar17) {
LAB_0040a948:
        if (local_e8 == (void *)((long)local_110 + (local_100 - 1))) {
          *(undefined *)((long)local_e8 + -1) = 0x2f;
          local_e8 = (void *)((long)local_e8 + -1);
        }
        memmove(local_110,local_e8,lVar13 - (long)local_e8);
        local_108 = param_1;
        if (param_2 == 0) {
          local_108 = realloc(local_110,lVar13 - (long)local_e8);
        }
        if (local_108 != (void *)0x0) {
          return local_108;
        }
        return local_110;
      }
      piVar8 = __errno_location();
      __dirp = (DIR *)0x0;
      iVar6 = -100;
      do {
        iVar6 = openat(iVar6,"..",0);
        if (iVar6 < 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) goto LAB_0040aa01;
          goto joined_r0x0040aa0f;
        }
        iVar7 = __fxstat(1,iVar6,&local_c8);
        if (iVar7 != 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) {
            closedir(__dirp);
          }
LAB_0040aa6d:
          close(iVar6);
          goto joined_r0x0040aa0f;
        }
        if (((__dirp != (DIR *)0x0) && (iVar7 = closedir(__dirp), iVar7 != 0)) ||
           (_Var5 = local_c8.st_ino, _Var2 = local_c8.st_dev, __dirp = fdopendir(iVar6),
           bVar1 = bVar16 || bVar17, __dirp == (DIR *)0x0)) {
          iVar7 = *piVar8;
          goto LAB_0040aa6d;
        }
LAB_0040a7c0:
        do {
          do {
            *piVar8 = 0;
            pdVar9 = readdir(__dirp);
            if (pdVar9 == (dirent *)0x0) {
              iVar7 = *piVar8;
              if ((iVar7 == 0) && (bVar1)) {
                rewinddir(__dirp);
                pdVar9 = readdir(__dirp);
                if (pdVar9 != (dirent *)0x0) {
                  bVar11 = false;
                  bVar1 = bVar11;
                  if (pdVar9->d_name[0] == '.') goto LAB_0040a9d0;
                  break;
                }
                iVar7 = *piVar8;
              }
              if (iVar7 == 0) {
                *piVar8 = 2;
                iVar7 = 2;
              }
              goto LAB_0040aa01;
            }
            if (pdVar9->d_name[0] == '.') {
LAB_0040a9d0:
              if ((pdVar9->d_name[1] == '\0') || (*(short *)(pdVar9->d_name + 1) == 0x2e))
              goto LAB_0040a7c0;
            }
            bVar11 = bVar1;
          } while ((bVar1) &&
                  (bVar18 = pdVar9->d_ino == _Var15, bVar11 = bVar18 || _Var2 != local_120,
                  !bVar18 && _Var2 == local_120));
          __filename = pdVar9->d_name;
          iVar7 = __fxstatat(1,iVar6,__filename,&local_c8,0x100);
          bVar1 = bVar11;
        } while ((((iVar7 != 0) || ((local_c8.st_mode & 0xf000) != 0x4000)) ||
                 (local_c8.st_dev != local_120)) || (local_c8.st_ino != _Var15));
        uVar14 = (long)local_e8 - (long)local_110;
        __n = strlen(__filename);
        if (uVar14 <= __n) {
          if (param_2 == 0) {
            uVar12 = local_100;
            if (local_100 <= __n) {
              uVar12 = __n;
            }
            if ((!CARRY8(local_100,uVar12)) &&
               (pvVar10 = realloc(local_110,local_100 + uVar12), pvVar10 != (void *)0x0)) {
              local_e8 = memcpy((void *)((long)pvVar10 + uVar12 + uVar14),
                                (void *)((long)pvVar10 + uVar14),local_100 - uVar14);
              local_110 = pvVar10;
              local_100 = local_100 + uVar12;
              goto LAB_0040a8df;
            }
            *piVar8 = 0xc;
            iVar7 = 0xc;
          }
          else {
            *piVar8 = 0x22;
            iVar7 = 0x22;
          }
LAB_0040aa01:
          closedir(__dirp);
          goto joined_r0x0040aa0f;
        }
LAB_0040a8df:
        pvVar10 = memcpy((void *)((long)local_e8 - __n),__filename,__n);
        local_e8 = (void *)((long)pvVar10 + -1);
        local_120 = _Var2;
        *(undefined *)((long)pvVar10 + -1) = 0x2f;
        _Var15 = _Var5;
      } while ((_Var3 != _Var2) || (_Var4 != _Var5));
      iVar6 = closedir(__dirp);
      if (iVar6 == 0) {
        lVar13 = (long)local_110 + local_100;
        goto LAB_0040a948;
      }
      goto LAB_0040aa30;
    }
  }
  piVar8 = __errno_location();
LAB_0040aa30:
  iVar7 = *piVar8;
joined_r0x0040aa0f:
  if (param_1 == (void *)0x0) {
    free(local_110);
  }
  *piVar8 = iVar7;
  return (void *)0x0;
}


ulong * FUN_0040ab00(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_0040ab40:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_0040ab40;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


undefined * FUN_0040ac10(undefined *param_1,undefined param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char acStack_48 [40];
  
  if (*param_3 == '\0') {
    *param_1 = 0;
    return param_1;
  }
  if (DAT_006104e4 == 0) {
    iVar1 = open("/proc/self/fd",0x10900);
    if (iVar1 < 0) {
      DAT_006104e4 = 0xffffffff;
      return (undefined *)0x0;
    }
    __sprintf_chk(acStack_48,1,0x20,"/proc/self/fd/%d/../fd",iVar1);
    iVar2 = access(acStack_48,0);
    DAT_006104e4 = (-(uint)(iVar2 == 0) & 2) - 1;
    close(iVar1);
  }
  if (DAT_006104e4 < 0) {
LAB_0040ac9d:
    param_1 = (undefined *)0x0;
  }
  else {
    sVar3 = strlen(param_3);
    if (0xfc0 < sVar3 + 0x1b) {
      param_1 = (undefined *)malloc(sVar3 + 0x1b);
      if (param_1 == (undefined *)0x0) goto LAB_0040ac9d;
    }
    iVar1 = __sprintf_chk(param_1,1,0xffffffffffffffff,"/proc/self/fd/%d/",param_2);
    strcpy(param_1 + iVar1,param_3);
  }
  return param_1;
}


void FUN_0040ad40(undefined param_1)

{
  FUN_0040a450(param_1,0,3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ad83) */
/* WARNING: Removing unreachable block (ram,0x0040ad88) */

void FUN_0040ad50(void)

{
  __DT_INIT();
  return;
}


void FUN_0040adb0(void)

{
  return;
}


void FUN_0040adc0(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_00610268);
  return;
}


undefined FUN_0040add8(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060fe30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402881();
  return;
}

