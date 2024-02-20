
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00404390caseD_b(void)

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


void switchD_0040610acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00414fb1caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined FUN_00401bd0(uint param_1,undefined *param_2)

{
  FILE *__stream;
  undefined uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined uVar5;
  undefined uVar6;
  undefined auStack_38 [40];
  
  FUN_004041a0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  DAT_0061d250 = 3;
  FUN_00416460(FUN_00403a90);
  FUN_00403bd0(param_1,param_2,&DAT_004164e9,"GNU coreutils",&DAT_0041661f,FUN_00402220,
               "Mike Parker","James Youngman","Paul Eggert",0);
  if (1 < param_1) {
    iVar2 = strcmp((char *)param_2[1],"--");
    if ((iVar2 != 0) || (param_2 = param_2 + 1, param_1 != 2)) {
      DAT_0061d2f8 = param_2 + 1;
      piVar3 = (int *)FUN_004039c0(1);
      __stream = stdout;
      if (*DAT_0061d2f8 != 0) {
        uVar5 = FUN_00405a90(0,8);
        uVar6 = dcgettext(0,"syntax error: unexpected argument %s",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar6,uVar5);
      }
      if (*piVar3 == 0) {
        pcVar4 = (char *)FUN_00403b30(*(undefined *)(piVar3 + 2),auStack_38);
        fputs_unlocked(pcVar4,__stream);
        pcVar4 = stdout->_IO_write_ptr;
        if (pcVar4 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar4 + 1;
          *pcVar4 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
      }
      else {
        if (*piVar3 != 1) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puts(*(char **)(piVar3 + 2));
      }
      uVar1 = FUN_00402090(piVar3);
      return uVar1;
    }
  }
  uVar5 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
  error(0,0,uVar5);
}


void FUN_00401d90(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0061cff0)
            (FUN_00401bd0,unaff_retaddr,&stack0x00000008,FUN_004163f0,FUN_00416450,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401dc8) */
/* WARNING: Removing unreachable block (ram,0x00401dd2) */

void FUN_00401dbb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e09) */

void FUN_00401dda(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e46) */

void FUN_00401e11(void)

{
  if (DAT_0061d2e8 != '\0') {
    return;
  }
  FUN_00401dbb();
  DAT_0061d2e8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e09) */

void thunk_FUN_00401dda(void)

{
  return;
}


long FUN_00401e70(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if ((lVar1 == -0x8000000000000000) && (lVar2 == -1)) {
    *param_1 = 0;
    return lVar1;
  }
  *param_1 = lVar1 % lVar2;
  return lVar1 / lVar2;
}


ulong FUN_00401eb0(char *param_1)

{
  char **ppcVar1;
  int iVar2;
  undefined extraout_var;
  ulong uVar3;
  
  ppcVar1 = DAT_0061d2f8;
  uVar3 = 0;
  if (*DAT_0061d2f8 != (char *)0x0) {
    iVar2 = strcmp(*DAT_0061d2f8,param_1);
    uVar3 = CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00 | (ulong)(iVar2 == 0);
    DAT_0061d2f8 = ppcVar1 + (iVar2 == 0);
  }
  return uVar3;
}


void FUN_00401ee0(char param_1)

{
                    /* WARNING: Subroutine does not return */
  error(3,0x22,&DAT_004164c4,(int)param_1);
}


void FUN_00401f00(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_2 - *param_3;
  if (*param_2 < lVar1 == (bool)-(char)(*param_3 >> 0x3f)) {
    *param_1 = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401ee0(0x2d);
}


void FUN_00401f30(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_2 + *param_3;
  if (lVar1 < *param_2 == (bool)-(char)(*param_3 >> 0x3f)) {
    *param_1 = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401ee0(0x2b);
}


void FUN_00401f60(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    if ((byte)((byte)((byte)((ulong)lVar1 >> 0x38) ^ (byte)((ulong)lVar2 >> 0x38)) >> 7) !=
        (byte)-(char)(lVar1 * lVar2 >> 0x3f)) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ee0(0x2a);
    }
  }
  *param_1 = lVar1 * lVar2;
  return;
}


void FUN_00401fa0(long *param_1,long *param_2,long *param_3)

{
  if ((*param_2 == -0x8000000000000000) && (*param_3 == -1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ee0(0x2f);
  }
  *param_1 = *param_2 / *param_3;
  return;
}


void FUN_00401fd0(void)

{
  undefined uVar1;
  undefined uVar2;
  
  if (*DAT_0061d2f8 != 0) {
    return;
  }
  uVar1 = FUN_00405a90(0,8,DAT_0061d2f8[-1]);
  uVar2 = dcgettext(0,"syntax error: missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar2,uVar1);
}


void FUN_00402020(int *param_1)

{
  if (*param_1 != 1) {
    free(param_1);
    return;
  }
  free(*(void **)(param_1 + 2));
  free(param_1);
  return;
}


undefined * FUN_00402050(undefined param_1)

{
  undefined *puVar1;
  undefined uVar2;
  
  puVar1 = (undefined *)FUN_00406620(0x10);
  *puVar1 = 1;
  uVar2 = FUN_00406850(param_1);
  *(undefined *)(puVar1 + 2) = uVar2;
  return puVar1;
}


bool FUN_00402090(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  if (*param_1 == 0) {
    return *(long *)(param_1 + 2) == 0;
  }
  if (*param_1 == 1) {
    bVar1 = true;
    cVar3 = **(char **)(param_1 + 2);
    if (cVar3 != '\0') {
      pcVar2 = *(char **)(param_1 + 2) + (cVar3 == '-');
      cVar3 = *pcVar2;
      while (cVar3 == '0') {
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
        if (cVar3 == '\0') {
          return true;
        }
      }
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004020f0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("iter->cur.wc == 0","./lib/mbuiter.h",0xb3,"mbuiter_multi_next");
}


undefined FUN_00402110(int *param_1)

{
  char cVar1;
  char *__ptr;
  int iVar2;
  char *pcVar3;
  
  if (*param_1 == 0) {
    return 1;
  }
  if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __ptr = *(char **)(param_1 + 2);
  pcVar3 = __ptr + (*__ptr == '-');
  cVar1 = *pcVar3;
  do {
    if (9 < (int)cVar1 - 0x30U) {
      return 0;
    }
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  } while (cVar1 != '\0');
  iVar2 = FUN_004068b0(__ptr,0,10,param_1 + 2,0);
  if (iVar2 == 0) {
    free(__ptr);
    *param_1 = 0;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  error(3,0x22,"%s",__ptr);
}


void FUN_004021d0(int *param_1)

{
  undefined uVar1;
  undefined auStack_28 [32];
  
  if (*param_1 == 0) {
    uVar1 = FUN_00403b30(*(undefined *)(param_1 + 2),auStack_28);
    uVar1 = FUN_00406850(uVar1);
    *param_1 = 1;
    *(undefined *)(param_1 + 2) = uVar1;
  }
  else if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


void FUN_00402220(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
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
  
  uVar7 = DAT_0061d310;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040225f;
  }
  uVar3 = dcgettext(0,"Usage: %s EXPRESSION\n  or:  %s OPTION\n",5);
  __printf_chk(1,uVar3,uVar7,uVar7);
  pcVar4 = stdout->_IO_write_ptr;
  if (pcVar4 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar4 + 1;
    *pcVar4 = '\n';
  }
  else {
    __overflow(stdout,10);
  }
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nPrint the value of EXPRESSION to standard output.  A blank line below\nseparates increasing precedence groups.  EXPRESSION may be:\n\n  ARG1 | ARG2       ARG1 if it is neither null nor 0, otherwise ARG2\n\n  ARG1 & ARG2       ARG1 if neither argument is null or 0, otherwise 0\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  ARG1 < ARG2       ARG1 is less than ARG2\n  ARG1 <= ARG2      ARG1 is less than or equal to ARG2\n  ARG1 = ARG2       ARG1 is equal to ARG2\n  ARG1 != ARG2      ARG1 is unequal to ARG2\n  ARG1 >= ARG2      ARG1 is greater than or equal to ARG2\n  ARG1 > ARG2       ARG1 is greater than ARG2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  ARG1 + ARG2       arithmetic sum of ARG1 and ARG2\n  ARG1 - ARG2       arithmetic difference of ARG1 and ARG2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  ARG1 * ARG2       arithmetic product of ARG1 and ARG2\n  ARG1 / ARG2       arithmetic quotient of ARG1 divided by ARG2\n  ARG1 % ARG2       arithmetic remainder of ARG1 divided by ARG2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  STRING : REGEXP   anchored pattern match of REGEXP in STRING\n\n  match STRING REGEXP        same as STRING : REGEXP\n  substr STRING POS LENGTH   substring of STRING, POS counted from 1\n  index STRING CHARS         index in STRING where any CHARS is found, or 0\n  length STRING              length of STRING\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  + TOKEN                    interpret TOKEN as a string, even if it is a\n                               keyword like \'match\' or an operator like \'/\'\n\n  ( EXPRESSION )             value of EXPRESSION\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nBeware that many operators need to be escaped or quoted for shells.\nComparisons are arithmetic if both ARGs are numbers, else lexicographical.\nPattern matches return the string matched between \\( and \\) or null; if\n\\( and \\) are not used, they return the number of characters matched or 0.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nExit status is 0 if EXPRESSION is neither null nor 0, 1 if EXPRESSION is null\nor 0, 2 if EXPRESSION is syntactically invalid, and 3 if an error occurred.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_004164ee;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x416568;
  local_78[1] = (byte *)0x416500;
  local_78[2] = (byte *)0x416516;
  local_78[3] = (byte *)0x416520;
  local_78[4] = (byte *)0x41652f;
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
    pbVar9 = *ppbVar5;
    bVar11 = false;
    bVar12 = pbVar9 == (byte *)0x0;
    if (bVar12) break;
    lVar8 = 5;
    pbVar10 = &DAT_004164e9;
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar11 = *pbVar10 < *pbVar9;
      bVar12 = *pbVar10 == *pbVar9;
      pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
  } while ((!bVar11 && !bVar12) != bVar11);
  pbVar9 = ppbVar6[3];
  if (pbVar9 == (byte *)0x0) {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pbVar9 = &DAT_004164e9;
        goto LAB_00402578;
      }
    }
    pbVar9 = &DAT_004164e9;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_004164e9);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00402578:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_004164e9);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_004164e9);
    if (pbVar9 != &DAT_004164e9) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_0040225f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


undefined * FUN_00402630(long param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined uVar8;
  int *piVar9;
  byte *pbVar10;
  ulong uVar11;
  long local_1c8;
  void *local_1c0;
  void *local_1b8;
  undefined local_1a8;
  undefined local_1a0;
  undefined *local_188;
  undefined local_180;
  ulong local_178;
  byte local_170;
  char local_168;
  mbstate_t local_164;
  undefined local_15c;
  byte *local_158;
  size_t local_150;
  undefined local_148;
  int local_144 [7];
  undefined local_128 [264];
  
  FUN_004021d0();
  FUN_004021d0(param_2);
  pcVar1 = *(char **)(param_2 + 8);
  local_188 = local_128;
  local_1c8 = 0;
  local_1c0 = (void *)0x0;
  local_1b8 = (void *)0x0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_180 = 0;
  DAT_0061d4a8 = 0x2c6;
  sVar4 = strlen(pcVar1);
  lVar5 = FUN_00415280(pcVar1,sVar4,&local_1a8);
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    error(2,0,"%s",lVar5);
  }
  pcVar1 = *(char **)(param_1 + 8);
  local_170 = local_170 & 0x7f;
  sVar4 = strlen(pcVar1);
  uVar6 = FUN_00415be0(&local_1a8,pcVar1,sVar4,0,&local_1c8);
  if ((long)uVar6 < 0) {
    if (uVar6 != 0xffffffffffffffff) {
      uVar8 = dcgettext(0,"error in regular expression matcher",5);
      iVar3 = 0x4b;
      if (uVar6 == 0xfffffffffffffffe) {
        piVar9 = __errno_location();
        iVar3 = *piVar9;
      }
                    /* WARNING: Subroutine does not return */
      error(3,iVar3,uVar8);
    }
    if (local_178 == 0) {
      puVar7 = (undefined *)FUN_00406620(0x10);
      *puVar7 = 0;
      *(undefined *)(puVar7 + 2) = 0;
    }
    else {
      puVar7 = (undefined *)FUN_00402050("");
    }
    goto joined_r0x0040277b;
  }
  if (local_178 != 0) {
    *(undefined *)(*(long *)(param_1 + 8) + *(long *)((long)local_1b8 + 8)) = 0;
    puVar7 = (undefined *)FUN_00402050(*(long *)((long)local_1c0 + 8) + *(long *)(param_1 + 8));
    goto joined_r0x0040277b;
  }
  sVar4 = __ctype_get_mb_cur_max();
  uVar11 = uVar6;
  if (sVar4 != 1) {
    pbVar2 = *(byte **)(param_1 + 8);
    local_168 = '\0';
    local_164 = (mbstate_t)0x0;
    uVar11 = local_178;
    local_158 = pbVar2;
    do {
      local_15c = 0;
      if (local_168 == '\0') {
        if ((*(uint *)(&DAT_00417140 + (ulong)(*local_158 >> 5) * 4) >> (*local_158 & 0x1f) & 1) ==
            0) {
          iVar3 = mbsinit(&local_164);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("mbsinit (&iter->state)","./lib/mbuiter.h",0x96,"mbuiter_multi_next");
          }
          local_168 = '\x01';
          goto LAB_0040287e;
        }
        local_150 = 1;
        local_144[0] = (int)(char)*local_158;
        local_148 = 1;
LAB_00402841:
        pbVar10 = local_158;
        if (local_144[0] == 0) goto LAB_00402978;
      }
      else {
LAB_0040287e:
        sVar4 = __ctype_get_mb_cur_max();
        pbVar10 = local_158;
        uVar8 = FUN_00405de0(local_158,sVar4);
        local_150 = FUN_00407dd0(local_144,pbVar10,uVar8,&local_164);
        pbVar10 = local_158;
        if (local_150 == 0xffffffffffffffff) {
          local_150 = 1;
          local_148 = 0;
        }
        else {
          if (local_150 != 0xfffffffffffffffe) {
            if (local_150 == 0) {
              local_150 = 1;
              if (*local_158 != 0) {
LAB_004029e9:
                    /* WARNING: Subroutine does not return */
                __assert_fail("*iter->cur.ptr == \'\\0\'","./lib/mbuiter.h",0xb2,
                              "mbuiter_multi_next");
              }
              if (local_144[0] != 0) {
                FUN_004020f0();
                goto LAB_004029e9;
              }
            }
            local_148 = 1;
            iVar3 = mbsinit(&local_164);
            if (iVar3 != 0) {
              local_168 = '\0';
            }
            goto LAB_00402841;
          }
          local_150 = strlen((char *)local_158);
          local_148 = 0;
        }
      }
      if (uVar6 <= (ulong)((long)pbVar10 - (long)pbVar2)) goto LAB_00402978;
      local_158 = pbVar10 + local_150;
      uVar11 = uVar11 + 1;
    } while( true );
  }
LAB_0040275f:
  puVar7 = (undefined *)FUN_00406620(0x10);
  *puVar7 = 0;
  *(ulong *)(puVar7 + 2) = uVar11;
joined_r0x0040277b:
  if (local_1c8 != 0) {
    free(local_1c0);
    free(local_1b8);
  }
  local_188 = (undefined *)0x0;
  FUN_00415af0(&local_1a8);
  return puVar7;
LAB_00402978:
  local_15c = 1;
  goto LAB_0040275f;
}


undefined * FUN_00402a10(char param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  size_t sVar11;
  size_t sVar12;
  undefined uVar13;
  undefined *puVar14;
  undefined uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong __n;
  ulong uVar19;
  undefined *local_118;
  undefined *local_100;
  mbstate_t local_f4;
  undefined local_ec;
  byte *local_e8;
  size_t local_e0;
  char local_d8;
  int local_d4 [7];
  char local_b8;
  mbstate_t local_b4;
  undefined local_ac;
  byte *local_a8;
  size_t local_a0;
  undefined local_98;
  int local_94 [7];
  char local_78;
  mbstate_t local_74;
  undefined local_6c;
  byte *local_68;
  size_t local_60;
  undefined local_58;
  int local_54 [9];
  
  cVar4 = FUN_00401eb0(&DAT_004165a4);
  if (cVar4 != '\0') {
    FUN_00401fd0();
LAB_00402d9d:
    lVar7 = *DAT_0061d2f8;
    DAT_0061d2f8 = DAT_0061d2f8 + 1;
    puVar17 = (undefined *)FUN_00402050(lVar7);
    return puVar17;
  }
  cVar4 = FUN_00401eb0("length");
  if (cVar4 != '\0') {
    lVar7 = FUN_00402a10(param_1);
    FUN_004021d0(lVar7);
    uVar13 = FUN_00403fd0(*(undefined *)(lVar7 + 8));
    puVar17 = (undefined *)FUN_00406620(0x10);
    *puVar17 = 0;
    *(undefined *)(puVar17 + 2) = uVar13;
    FUN_00402020(lVar7);
    return puVar17;
  }
  cVar4 = FUN_00401eb0("match");
  if (cVar4 != '\0') {
    puVar14 = (undefined *)FUN_00402a10(param_1);
    lVar7 = FUN_00402a10(param_1);
    puVar17 = puVar14;
    if (param_1 != '\0') {
      puVar17 = (undefined *)FUN_00402630(puVar14,lVar7);
      FUN_00402020(puVar14);
    }
    goto LAB_00402e16;
  }
  cVar4 = FUN_00401eb0("index");
  if (cVar4 == '\0') {
    cVar5 = FUN_00401eb0("substr");
    if (cVar5 != '\0') {
      lVar7 = FUN_00402a10(param_1);
      lVar8 = FUN_00402a10(param_1);
      lVar9 = FUN_00402a10(param_1);
      FUN_004021d0(lVar7);
      cVar5 = FUN_00402110(lVar8);
      if ((cVar5 == '\0') || (cVar5 = FUN_00402110(lVar9), cVar5 == '\0')) {
        puVar17 = (undefined *)FUN_00402050("");
      }
      else {
        uVar18 = *(ulong *)(lVar8 + 8);
        uVar19 = 0xffffffffffffffff;
        if (-1 < (long)uVar18) {
          cVar4 = uVar18 == 0;
          uVar19 = uVar18;
        }
        pbVar1 = *(byte **)(lVar7 + 8);
        uVar18 = 0xffffffffffffffff;
        if (-1 < (long)*(ulong *)(lVar9 + 8)) {
          uVar18 = *(ulong *)(lVar9 + 8);
        }
        sVar10 = strlen((char *)pbVar1);
        sVar11 = __ctype_get_mb_cur_max();
        sVar12 = sVar10;
        if (1 < sVar11) {
          sVar12 = FUN_00403fd0(pbVar1);
        }
        if (((sVar12 < uVar19) || (cVar4 != '\0')) || (0xfffffffffffffffd < uVar18 - 1)) {
          local_100 = (undefined *)FUN_00406850("");
        }
        else {
          __n = (sVar12 - uVar19) + 1;
          if (uVar18 < __n) {
            __n = uVar18;
          }
          sVar12 = __ctype_get_mb_cur_max();
          if (sVar12 != 1) {
            local_100 = (undefined *)FUN_00406620(sVar10 + 1);
            uVar18 = 1;
            local_78 = '\0';
            local_74 = (mbstate_t)0x0;
            local_118 = local_100;
            local_68 = pbVar1;
            do {
              local_6c = 0;
              if (local_78 == '\0') {
                if ((*(uint *)(&DAT_00417140 + (ulong)(*local_68 >> 5) * 4) >> (*local_68 & 0x1f) &
                    1) == 0) {
                  iVar6 = mbsinit(&local_74);
                  if (iVar6 != 0) {
                    local_78 = '\x01';
                    goto LAB_00402c7f;
                  }
                  goto LAB_004033f7;
                }
                local_60 = 1;
                local_54[0] = (int)(char)*local_68;
                local_58 = 1;
LAB_00402c02:
                local_6c = 1;
                if (local_54[0] == 0) goto LAB_004033c1;
              }
              else {
LAB_00402c7f:
                sVar12 = __ctype_get_mb_cur_max();
                pbVar1 = local_68;
                uVar13 = FUN_00405de0(local_68,sVar12);
                local_60 = FUN_00407dd0(local_54,pbVar1,uVar13,&local_74);
                if (local_60 == 0xffffffffffffffff) {
                  local_60 = 1;
                  local_58 = 0;
                }
                else {
                  if (local_60 != 0xfffffffffffffffe) {
                    if (local_60 == 0) {
                      local_60 = 1;
                      if (*local_68 != 0) goto LAB_0040344d;
                      if (local_54[0] != 0) goto LAB_00403448;
                    }
                    local_58 = 1;
                    iVar6 = mbsinit(&local_74);
                    if (iVar6 != 0) {
                      local_78 = '\0';
                    }
                    goto LAB_00402c02;
                  }
                  local_60 = strlen((char *)local_68);
                  local_58 = 0;
                }
              }
              sVar12 = local_60;
              pbVar1 = local_68;
              local_6c = 1;
              if (__n == 0) goto LAB_004033c1;
              if (uVar19 <= uVar18) {
                __n = __n - 1;
                local_118 = (undefined *)mempcpy(local_118,local_68,local_60);
              }
              local_68 = pbVar1 + sVar12;
              uVar18 = uVar18 + 1;
            } while( true );
          }
          local_100 = (undefined *)FUN_00406620(__n + 1);
          local_118 = (undefined *)mempcpy(local_100,pbVar1 + (uVar19 - 1),__n);
LAB_004033c1:
          *local_118 = 0;
        }
        puVar17 = (undefined *)FUN_00402050(local_100);
        free(local_100);
      }
      FUN_00402020(lVar7);
      FUN_00402020(lVar8);
      FUN_00402020(lVar9);
      return puVar17;
    }
    FUN_00401fd0();
    cVar4 = FUN_00401eb0(&DAT_004165c0);
    if (cVar4 != '\0') {
      puVar17 = (undefined *)FUN_004039c0(param_1);
      if (*DAT_0061d2f8 == 0) {
        uVar13 = FUN_00405a90(0,8,DAT_0061d2f8[-1]);
        uVar15 = dcgettext(0,"syntax error: expecting \')\' after %s",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar15,uVar13);
      }
      cVar4 = FUN_00401eb0(&DAT_00417f2d);
      if (cVar4 != '\0') {
        return puVar17;
      }
      uVar13 = FUN_00405a90(0,8,*DAT_0061d2f8);
      uVar15 = dcgettext(0,"syntax error: expecting \')\' instead of %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar15,uVar13);
    }
    cVar4 = FUN_00401eb0(&DAT_00417f2d);
    if (cVar4 != '\0') {
      uVar13 = dcgettext(0,"syntax error: unexpected \')\'",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar13);
    }
    goto LAB_00402d9d;
  }
  lVar8 = FUN_00402a10(param_1);
  lVar7 = FUN_00402a10(param_1);
  FUN_004021d0(lVar8);
  FUN_004021d0(lVar7);
  pbVar1 = *(byte **)(lVar7 + 8);
  if (*pbVar1 == 0) {
LAB_00402df5:
    lVar9 = 0;
  }
  else {
    pbVar2 = *(byte **)(lVar8 + 8);
    sVar12 = __ctype_get_mb_cur_max();
    if (1 < sVar12) {
      lVar9 = 0;
      bVar3 = false;
      local_f4 = (mbstate_t)0x0;
      local_e8 = pbVar2;
LAB_00402f62:
      local_ec = 0;
      if ((*(uint *)(&DAT_00417140 + (ulong)(*local_e8 >> 5) * 4) >> (*local_e8 & 0x1f) & 1) == 0) {
        iVar6 = mbsinit(&local_f4);
        if (iVar6 != 0) {
          bVar3 = true;
          goto LAB_00402fdc;
        }
LAB_004033f7:
                    /* WARNING: Subroutine does not return */
        __assert_fail("mbsinit (&iter->state)","./lib/mbuiter.h",0x96,"mbuiter_multi_next");
      }
      local_e0 = 1;
      local_d4[0] = (int)(char)*local_e8;
      local_d8 = '\x01';
      local_ec = 1;
      if (*local_e8 != 0) {
        lVar9 = lVar9 + 1;
        while( true ) {
          pbVar2 = local_e8;
          local_ec = 1;
          lVar16 = FUN_00403d90(pbVar1,(int)(char)*local_e8);
          if (lVar16 != 0) break;
          sVar12 = 1;
          local_e8 = pbVar2;
LAB_00402fc8:
          local_e8 = local_e8 + sVar12;
          local_ec = 0;
          if (!bVar3) goto LAB_00402f62;
LAB_00402fdc:
          sVar12 = __ctype_get_mb_cur_max();
          pbVar2 = local_e8;
          uVar13 = FUN_00405de0(local_e8,sVar12);
          local_e0 = FUN_00407dd0(local_d4,pbVar2,uVar13,&local_f4);
          if (local_e0 == 0xffffffffffffffff) {
            local_d8 = '\0';
            lVar9 = lVar9 + 1;
            local_e0 = 1;
          }
          else {
            if (local_e0 == 0xfffffffffffffffe) {
              local_e0 = strlen((char *)local_e8);
              local_d8 = '\0';
            }
            else {
              if (local_e0 == 0) {
                local_e0 = 1;
                if (*local_e8 != 0) goto LAB_0040344d;
                if (local_d4[0] != 0) goto LAB_00403448;
              }
              local_d8 = '\x01';
              iVar6 = mbsinit(&local_f4);
              if (iVar6 != 0) {
                bVar3 = false;
              }
              local_ec = 1;
              if (local_d4[0] == 0) goto LAB_00402df5;
            }
            local_ec = 1;
            lVar9 = lVar9 + 1;
            if (local_e0 != 1) {
              local_b8 = '\0';
              local_b4 = (mbstate_t)0x0;
              local_a8 = pbVar1;
              do {
                local_ac = 0;
                if (local_b8 == '\0') {
                  if ((*(uint *)(&DAT_00417140 + (ulong)(*local_a8 >> 5) * 4) >> (*local_a8 & 0x1f)
                      & 1) == 0) {
                    iVar6 = mbsinit(&local_b4);
                    if (iVar6 != 0) {
                      local_b8 = '\x01';
                      goto LAB_0040316b;
                    }
                    goto LAB_004033f7;
                  }
                  local_a0 = 1;
                  local_94[0] = (int)(char)*local_a8;
                  local_98 = 1;
LAB_00403131:
                  local_ac = 1;
                  sVar12 = local_e0;
                  if (local_94[0] == 0) goto LAB_00402fc8;
                  if (local_d8 == '\0') goto LAB_0040320e;
                  sVar12 = local_a0;
                  if (local_d4[0] == local_94[0]) goto LAB_00402df7;
                }
                else {
LAB_0040316b:
                  sVar12 = __ctype_get_mb_cur_max();
                  pbVar2 = local_a8;
                  uVar13 = FUN_00405de0(local_a8,sVar12);
                  local_a0 = FUN_00407dd0(local_94,pbVar2,uVar13,&local_b4);
                  if (local_a0 == 0xffffffffffffffff) {
                    local_a0 = 1;
                    local_98 = 0;
                  }
                  else {
                    if (local_a0 != 0xfffffffffffffffe) {
                      if (local_a0 == 0) {
                        local_a0 = 1;
                        if (*local_a8 != 0) goto LAB_0040344d;
                        if (local_94[0] != 0) goto LAB_00403448;
                      }
                      local_98 = 1;
                      iVar6 = mbsinit(&local_b4);
                      if (iVar6 != 0) {
                        local_b8 = '\0';
                      }
                      goto LAB_00403131;
                    }
                    local_a0 = strlen((char *)local_a8);
                    local_98 = 0;
                  }
LAB_0040320e:
                  sVar12 = local_a0;
                  local_ac = 1;
                  if ((local_a0 == local_e0) &&
                     (iVar6 = memcmp(local_a8,local_e8,local_a0), iVar6 == 0)) goto LAB_00402df7;
                }
                local_a8 = local_a8 + sVar12;
              } while( true );
            }
          }
        }
        goto LAB_00402df7;
      }
      goto LAB_00402df5;
    }
    sVar12 = strcspn((char *)pbVar2,(char *)pbVar1);
    if (pbVar2[sVar12] == 0) goto LAB_00402df5;
    lVar9 = sVar12 + 1;
  }
LAB_00402df7:
  puVar17 = (undefined *)FUN_00406620(0x10);
  *puVar17 = 0;
  *(long *)(puVar17 + 2) = lVar9;
  FUN_00402020(lVar8);
LAB_00402e16:
  FUN_00402020(lVar7);
  return puVar17;
LAB_00403448:
  FUN_004020f0();
LAB_0040344d:
                    /* WARNING: Subroutine does not return */
  __assert_fail("*iter->cur.ptr == \'\\0\'","./lib/mbuiter.h",0xb2,"mbuiter_multi_next");
}


undefined FUN_00403470(char param_1)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  
  uVar2 = FUN_00402a10(param_1);
  while( true ) {
    cVar1 = FUN_00401eb0(&DAT_004165df);
    if (cVar1 == '\0') break;
    uVar3 = FUN_00402a10(param_1);
    uVar4 = uVar2;
    if (param_1 != '\0') {
      uVar4 = FUN_00402630(uVar2,uVar3);
      FUN_00402020(uVar2);
    }
    FUN_00402020(uVar3);
    uVar2 = uVar4;
  }
  return uVar2;
}


long FUN_004034e0(char param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined uVar5;
  int iVar6;
  
  lVar2 = FUN_00403470(param_1);
  do {
    cVar1 = FUN_00401eb0(&DAT_004165e1);
    if (cVar1 == '\0') {
      iVar6 = 1;
      cVar1 = FUN_00401eb0(&DAT_004171d6);
      if (cVar1 == '\0') {
        cVar1 = FUN_00401eb0(&DAT_004165e3);
        if (cVar1 == '\0') {
          return lVar2;
        }
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 0;
    }
    lVar3 = FUN_00403470(param_1);
    if (param_1 != '\0') {
      cVar1 = FUN_00402110(lVar2);
      if (cVar1 == '\0') {
LAB_004035c4:
        uVar5 = dcgettext(0,"non-integer argument",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar5);
      }
      cVar1 = FUN_00402110(lVar3);
      if (cVar1 == '\0') goto LAB_004035c4;
      if (iVar6 == 0) {
        pcVar4 = FUN_00401f60;
      }
      else {
        if (*(long *)(lVar3 + 8) == 0) {
          uVar5 = dcgettext(0,"division by zero",5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar5);
        }
        pcVar4 = FUN_00401fa0;
        if (iVar6 != 1) {
          pcVar4 = FUN_00401e70;
        }
      }
      (*pcVar4)(lVar2 + 8,lVar2 + 8,lVar3 + 8);
    }
    FUN_00402020(lVar3);
  } while( true );
}


long FUN_00403610(char param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined uVar6;
  
  lVar3 = FUN_004034e0(param_1);
  do {
    cVar2 = FUN_00401eb0(&DAT_004165a4);
    if (cVar2 == '\0') {
      cVar2 = FUN_00401eb0(&DAT_0041664c);
      if (cVar2 == '\0') {
        return lVar3;
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    lVar4 = FUN_004034e0(param_1);
    if (param_1 != '\0') {
      cVar2 = FUN_00402110(lVar3);
      if (cVar2 == '\0') {
LAB_004036b4:
        uVar6 = dcgettext(0,"non-integer argument",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar6);
      }
      cVar2 = FUN_00402110(lVar4);
      if (cVar2 == '\0') goto LAB_004036b4;
      pcVar5 = FUN_00401f30;
      if (bVar1) {
        pcVar5 = FUN_00401f00;
      }
      (*pcVar5)(lVar3 + 8,lVar3 + 8,lVar4 + 8);
    }
    FUN_00402020(lVar4);
  } while( true );
}


undefined * FUN_004036e0(char param_1)

{
  char *__s1;
  char cVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  undefined uVar8;
  ulong uVar9;
  
  puVar3 = (undefined *)FUN_00403610(param_1);
LAB_0040375a:
  cVar1 = FUN_00401eb0(&DAT_0041660b);
  if (cVar1 == '\0') {
    uVar8 = 1;
    cVar1 = FUN_00401eb0(&DAT_0041660d);
    if (cVar1 == '\0') {
      cVar1 = FUN_00401eb0(&DAT_00416614);
      if ((cVar1 == '\0') && (cVar1 = FUN_00401eb0(&DAT_00416610), cVar1 == '\0')) {
        uVar8 = 3;
        cVar1 = FUN_00401eb0(&DAT_00416613);
        if (cVar1 == '\0') {
          uVar8 = 4;
          cVar1 = FUN_00401eb0(&DAT_00416616);
          if (cVar1 == '\0') {
            cVar1 = FUN_00401eb0(&DAT_00416619);
            if (cVar1 == '\0') {
              return puVar3;
            }
            uVar8 = 5;
          }
        }
      }
      else {
        uVar8 = 2;
      }
    }
  }
  else {
    uVar8 = 0;
  }
  uVar9 = 0;
  lVar4 = FUN_00403610(param_1);
  if (param_1 != '\0') {
    FUN_004021d0(puVar3);
    FUN_004021d0(lVar4);
    __s1 = *(char **)(puVar3 + 2);
    pcVar6 = __s1 + (*__s1 == '-');
    cVar1 = *pcVar6;
    do {
      if (9 < (int)cVar1 - 0x30U) {
        pcVar6 = *(char **)(lVar4 + 8);
        goto LAB_004037b3;
      }
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = *(char **)(lVar4 + 8);
    pcVar7 = pcVar6 + (*pcVar6 == '-');
    cVar1 = *pcVar7;
    do {
      if (9 < (int)cVar1 - 0x30U) goto LAB_004037b3;
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    } while (cVar1 != '\0');
    iVar2 = FUN_00405e20(__s1);
    goto LAB_004037d0;
  }
  goto LAB_00403733;
LAB_004037b3:
  piVar5 = __errno_location();
  *piVar5 = 0;
  iVar2 = strcoll(__s1,pcVar6);
LAB_004037d0:
  switch(uVar8) {
  default:
    uVar9 = (ulong)(long)iVar2 >> 0x3f;
    break;
  case 1:
    uVar9 = (ulong)(iVar2 < 1);
    break;
  case 2:
    uVar9 = (ulong)(iVar2 == 0);
    break;
  case 3:
    uVar9 = (ulong)(iVar2 != 0);
    break;
  case 4:
    uVar9 = (ulong)~(long)iVar2 >> 0x3f;
    break;
  case 5:
    uVar9 = (ulong)(0 < iVar2);
  }
LAB_00403733:
  FUN_00402020(puVar3);
  FUN_00402020(lVar4);
  puVar3 = (undefined *)FUN_00406620(0x10);
  *puVar3 = 0;
  *(ulong *)(puVar3 + 2) = uVar9;
  goto LAB_0040375a;
}


undefined * FUN_00403910(char param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined uVar4;
  
  puVar3 = (undefined *)FUN_004036e0(param_1);
  do {
    cVar1 = FUN_00401eb0(&DAT_0041661b);
    while( true ) {
      if (cVar1 == '\0') {
        return puVar3;
      }
      bVar2 = 0;
      if (param_1 != '\0') {
        bVar2 = FUN_00402090(puVar3);
        bVar2 = bVar2 ^ 1;
      }
      uVar4 = FUN_004036e0(bVar2);
      cVar1 = FUN_00402090(puVar3);
      if ((cVar1 == '\0') && (cVar1 = FUN_00402090(uVar4), cVar1 == '\0')) break;
      FUN_00402020(puVar3);
      FUN_00402020(uVar4);
      puVar3 = (undefined *)FUN_00406620(0x10);
      *puVar3 = 0;
      *(undefined *)(puVar3 + 2) = 0;
      cVar1 = FUN_00401eb0();
    }
    FUN_00402020(uVar4);
  } while( true );
}


undefined * FUN_004039c0(char param_1)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined *)FUN_00403910(param_1);
LAB_004039d8:
  do {
    cVar1 = FUN_00401eb0(&DAT_0041661d);
    while( true ) {
      if (cVar1 == '\0') {
        return puVar3;
      }
      uVar2 = 0;
      if (param_1 != '\0') {
        uVar2 = FUN_00402090(puVar3);
      }
      puVar4 = (undefined *)FUN_00403910(uVar2);
      cVar1 = FUN_00402090(puVar3);
      if (cVar1 == '\0') break;
      FUN_00402020(puVar3);
      cVar1 = FUN_00402090(puVar4);
      puVar3 = puVar4;
      if (cVar1 == '\0') goto LAB_004039d8;
      FUN_00402020(puVar4);
      puVar3 = (undefined *)FUN_00406620(0x10);
      *puVar3 = 0;
      *(undefined *)(puVar3 + 2) = 0;
      cVar1 = FUN_00401eb0();
    }
    FUN_00402020(puVar4);
  } while( true );
}


void FUN_00403a70(undefined param_1)

{
  DAT_0061d308 = param_1;
  return;
}


void FUN_00403a80(undefined param_1)

{
  DAT_0061d300 = param_1;
  return;
}


void FUN_00403a90(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00415ca0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0061d300 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0061d308 != 0) {
        uVar4 = FUN_00405c10();
                    /* WARNING: Subroutine does not return */
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
                    /* WARNING: Subroutine does not return */
      error(0,*piVar2,"%s",uVar3);
    }
  }
  iVar1 = FUN_00415ca0(stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0061d250);
}


char * FUN_00403b30(ulong param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  pcVar1 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  if ((long)param_1 < 0) {
    do {
      pcVar2 = pcVar1;
      uVar3 = (long)param_1 / 10;
      pcVar2[-1] = ((char)uVar3 * '\n' + '0') - (char)param_1;
      pcVar1 = pcVar2 + -1;
      param_1 = uVar3;
    } while (uVar3 != 0);
    pcVar2[-2] = '-';
    return pcVar2 + -2;
  }
  do {
    pcVar1 = pcVar1 + -1;
    uVar3 = param_1 / 10;
    *pcVar1 = (char)param_1 + (char)uVar3 * -10 + '0';
    param_1 = uVar3;
  } while (uVar3 != 0);
  return pcVar1;
}


void FUN_00403bd0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
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
  
  uVar1 = (undefined)DAT_0061d2b8;
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
  DAT_0061d2b8._0_4_ = 0;
  if ((int)param_9 == 2) {
    iVar2 = FUN_00407d50(param_9,param_10,&DAT_004165a4,&PTR_DAT_004170e0,0);
    if (iVar2 != -1) {
      if (iVar2 == 0x68) {
        (*param_14)(0);
      }
      else if (iVar2 == 0x76) {
        local_e8 = &stack0x00000008;
        local_f0 = 0x30;
        local_e0 = local_d8;
        local_ec = 0x30;
        FUN_00406480(stdout,param_11,param_12,param_13,&local_f0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
  }
  DAT_0061d2b8._0_4_ = uVar1;
  DAT_0061d2b8._4_4_ = 0;
  return;
}


uint FUN_00403ce0(wchar_t param_1)

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


void FUN_00403d10(void **param_1,void **param_2)

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


uint FUN_00403d70(byte param_1)

{
  return *(uint *)(&DAT_00417140 + (ulong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1;
}


byte * FUN_00403d90(byte *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  undefined uVar6;
  mbstate_t local_54;
  undefined local_4c;
  byte *local_48;
  size_t local_40;
  undefined local_38;
  int local_34 [9];
  
  sVar4 = __ctype_get_mb_cur_max();
  if ((sVar4 < 2) || ((byte)param_2 < 0x30)) {
    pbVar5 = (byte *)strchr((char *)param_1,param_2);
    return pbVar5;
  }
  bVar2 = false;
  local_54 = (mbstate_t)0x0;
  local_48 = param_1;
  do {
    local_4c = 0;
    if (bVar2) {
LAB_00403e4c:
      sVar4 = __ctype_get_mb_cur_max();
      pbVar5 = local_48;
      uVar6 = FUN_00405de0(local_48,sVar4);
      local_40 = FUN_00407dd0(local_34,pbVar5,uVar6,&local_54);
      pbVar5 = local_48;
      if (local_40 == 0xffffffffffffffff) {
        local_38 = 0;
        local_40 = 1;
        bVar1 = *local_48;
        goto joined_r0x00403f40;
      }
      if (local_40 == 0xfffffffffffffffe) {
        local_40 = strlen((char *)local_48);
        local_38 = 0;
        local_48 = pbVar5;
      }
      else {
        if (local_40 == 0) {
          local_40 = 1;
          if (*local_48 != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xb2,"mbuiter_multi_next");
          }
          if (local_34[0] != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("iter->cur.wc == 0","lib/mbuiter.h",0xb3,"mbuiter_multi_next");
          }
        }
        local_38 = 1;
        iVar3 = mbsinit(&local_54);
        if (iVar3 != 0) {
          bVar2 = false;
        }
        if (local_34[0] == 0) {
          return (byte *)0x0;
        }
      }
      if (local_40 == 1) goto LAB_00403e2c;
    }
    else {
      if ((*(uint *)(&DAT_00417140 + (ulong)(*local_48 >> 5) * 4) >> (*local_48 & 0x1f) & 1) == 0) {
        iVar3 = mbsinit(&local_54);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x96,"mbuiter_multi_next");
        }
        bVar2 = true;
        goto LAB_00403e4c;
      }
      local_40 = 1;
      local_34[0] = (int)(char)*local_48;
      local_38 = 1;
      if (*local_48 == 0) {
        return (byte *)0x0;
      }
LAB_00403e2c:
      bVar1 = *local_48;
joined_r0x00403f40:
      if (bVar1 == (byte)param_2) {
        return local_48;
      }
    }
    local_48 = local_48 + local_40;
  } while( true );
}


size_t FUN_00403fd0(byte *param_1)

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
LAB_00404077:
      sVar5 = __ctype_get_mb_cur_max();
      pbVar2 = local_48;
      uVar6 = FUN_00405de0(local_48,sVar5);
      local_40 = FUN_00407dd0(local_34,pbVar2,uVar6,&local_54);
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
              __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xb2,"mbuiter_multi_next");
            }
            if (local_34[0] != 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("iter->cur.wc == 0","lib/mbuiter.h",0xb3,"mbuiter_multi_next");
            }
          }
          local_38 = 1;
          iVar3 = mbsinit(&local_54);
          if (iVar3 != 0) {
            bVar1 = false;
          }
          goto LAB_00404056;
        }
        local_40 = strlen((char *)local_48);
        local_38 = 0;
      }
    }
    else {
      if ((*(uint *)(&DAT_00417140 + (ulong)(*local_48 >> 5) * 4) >> (*local_48 & 0x1f) & 1) == 0) {
        iVar3 = mbsinit(&local_54);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x96,"mbuiter_multi_next");
        }
        bVar1 = true;
        goto LAB_00404077;
      }
      local_40 = 1;
      local_34[0] = (int)(char)*local_48;
      local_38 = 1;
LAB_00404056:
      if (local_34[0] == 0) {
        return sVar4;
      }
    }
    local_48 = local_48 + local_40;
    sVar4 = sVar4 + 1;
  } while( true );
}


void FUN_004041a0(byte *param_1)

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
      pbVar6 = &DAT_004171d0;
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
        pbVar6 = &DAT_004171d8;
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
  DAT_0061d310 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00404240(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00415d60();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00404318:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004171e9;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004171de;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00404318;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004171e5;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004171e2;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00404340(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00404f91:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00404bc6;
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
      goto LAB_00404f91;
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
      param_8 = (char *)FUN_00404240(&DAT_004171ed,param_5);
      param_9 = (char *)FUN_00404240("\'");
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
LAB_004043d8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004043e8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00404b68;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00404ae0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00404af2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040495e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004047f5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00404af2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00404af2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00404af2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004047f5;
      case 0xc:
switchD_00404af2_caseD_c:
        bVar17 = 0x66;
LAB_004047f5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00404748;
        }
LAB_00404800:
        bVar23 = false;
        goto LAB_004045bb;
      case 0xd:
        bVar20 = false;
switchD_004044d8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00404710;
      case 0x20:
        bVar25 = false;
LAB_00404b3a:
        uVar19 = 0x20;
        goto LAB_00404b02;
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
switchD_004044d8_caseD_21:
        bVar25 = false;
        goto LAB_0040471b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00404b1a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00404528;
        }
        bVar23 = false;
        goto LAB_0040453f;
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
LAB_00404b02:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00404541;
      case 0x27:
        bVar20 = false;
        goto switchD_0040495e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040495e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004044d8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040495e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00404737;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00404ae0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004044d8_caseD_0;
      default:
        goto switchD_0040495e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404800;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00404af2_caseD_9;
      case 10:
        goto switchD_00404af2_caseD_a;
      case 0xb:
        goto switchD_00404af2_caseD_b;
      case 0xc:
        goto switchD_00404af2_caseD_c;
      case 0xd:
        goto switchD_004044d8_caseD_d;
      case 0x20:
        goto LAB_00404b3a;
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
        goto switchD_004044d8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00404b1a;
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
        goto LAB_00404b02;
      case 0x27:
        goto switchD_0040495e_caseD_27;
      case 0x3f:
        goto switchD_0040495e_caseD_3f;
      case 0x5c:
        goto switchD_004044d8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040495e_caseD_7b;
      }
      goto LAB_00404582;
    }
    goto LAB_0040475a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00404af2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004044d8_caseD_0:
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
            goto LAB_00404638;
          }
LAB_0040487a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040487a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00404638;
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
LAB_004048b9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00404638;
        goto LAB_00404541;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040474c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00404528;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004043e8;
  default:
switchD_0040495e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00407dd0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040526a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004053a7;
          goto LAB_00405397;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040474c;
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
      goto LAB_0040526a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00404934;
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
    goto LAB_00404972;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00404972;
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
LAB_00404972:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040498a:
      param_5 = 2;
      goto LAB_0040474c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00404516;
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
LAB_00404516:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040498a;
    goto LAB_00404528;
  case 0x23:
  case 0x7e:
LAB_0040450d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00404516;
    goto LAB_0040471b;
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
    goto switchD_0040495e_caseD_25;
  case 0x27:
switchD_0040495e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00404528;
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
      goto LAB_00404638;
    }
    goto LAB_0040474c;
  case 0x3f:
switchD_0040495e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00404638;
      }
      goto LAB_0040474c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00404528;
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
        goto LAB_004048b9;
      }
      goto LAB_0040475a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00404528;
  case 0x5c:
    if (param_5 != 2) {
switchD_004044d8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00404654;
    }
    if (local_5c) goto LAB_0040474c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00404654;
  case 0x7b:
  case 0x7d:
switchD_0040495e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040450d;
    goto LAB_0040471b;
  }
LAB_00404710:
  if (!bVar6) {
LAB_0040471b:
    bVar23 = false;
    goto LAB_00404528;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00404737;
LAB_00404b68:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040474c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040475a:
    uVar9 = FUN_00404340(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040543d:
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
    uVar9 = FUN_00404340(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040543d;
LAB_00404bc6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004043d8;
  while (__s1[uVar21] != 0) {
LAB_00405397:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004053a7:
  bVar23 = false;
LAB_0040526a:
  if (1 < uVar21) {
LAB_00404e2e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040474c;
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
        if (uVar21 <= uVar22) goto LAB_004045cd;
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
        if (uVar21 <= uVar22) goto LAB_00404654;
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
LAB_00404934:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00404e2e;
  }
switchD_0040495e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00404528:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040453f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00404541:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00404638;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00404638:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00404654:
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
      goto LAB_004045cd;
    }
  }
joined_r0x00404737:
  if (local_5c) {
LAB_00404748:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040474c;
  }
LAB_00404582:
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
LAB_004045bb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_004045cd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004043e8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00405570(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0061d298;
  if (DAT_0061d2b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00406870();
    }
    if (PTR_DAT_0061d298 == &DAT_0061d2a0) {
      puVar8 = (undefined *)FUN_00406680(0);
      uVar6 = PTR_DAT_0061d2a8._4_4_;
      uVar5 = PTR_DAT_0061d2a8._0_4_;
      uVar3 = _UNK_0061d2a4;
      PTR_DAT_0061d298 = (undefined *)puVar8;
      *puVar8 = _DAT_0061d2a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00406680(PTR_DAT_0061d298);
      PTR_DAT_0061d298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0061d2b0 * 4,0,(long)((param_1 + 1) - DAT_0061d2b0) << 4);
    DAT_0061d2b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00404340(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0061d320) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00406620(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00404340(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00405710(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061d420;
  }
  FUN_00406820(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00405750(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0061d420;
  }
  return *param_1;
}


void FUN_00405760(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0061d420;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00405770(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061d420;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_004057b0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061d420;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004057d0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0061d420;
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


void FUN_00405800(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0061d420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00404340(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00405880(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0061d420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00404340(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00406620(lVar3 + 1);
  FUN_00404340(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00405970(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405880(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405980(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0061d298;
  if (1 < DAT_0061d2b0) {
    ppvVar2 = (void **)(PTR_DAT_0061d298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0061d298 + (ulong)(DAT_0061d2b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0061d320) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0061d2a0 = 0x100;
    PTR_DAT_0061d2a8 = &DAT_0061d320;
  }
  if (__ptr_00 != &DAT_0061d2a0) {
    free(__ptr_00);
    PTR_DAT_0061d298 = &DAT_0061d2a0;
  }
  DAT_0061d2b0 = 1;
  return;
}


void FUN_00405a20(undefined param_1,undefined param_2)

{
  FUN_00405570(param_1,param_2,0xffffffffffffffff,&DAT_0061d420);
  return;
}


void FUN_00405a40(void)

{
  FUN_00405570();
  return;
}


void FUN_00405a50(undefined param_1)

{
  FUN_00405570(0,param_1,0xffffffffffffffff,&DAT_0061d420);
  return;
}


void FUN_00405a70(undefined param_1,undefined param_2)

{
  FUN_00405570(0,param_1,param_2,&DAT_0061d420);
  return;
}


void FUN_00405a90(undefined param_1,int param_2,undefined param_3)

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
    FUN_00405570(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405b00(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00405570(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405b70(undefined param_1,undefined param_2)

{
  FUN_00405a90(0,param_1,param_2);
  return;
}


void FUN_00405b80(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405b00(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405b90(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0061d450;
  local_48 = _DAT_0061d420;
  uStack_40 = uRam000000000061d428;
  local_38 = _DAT_0061d430;
  uStack_30 = uRam000000000061d438;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0061d440;
  uStack_20 = uRam000000000061d448;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00405570(0,param_1,param_2,&local_48);
  return;
}


void FUN_00405c00(undefined param_1,char param_2)

{
  FUN_00405b90(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00405c10(undefined param_1)

{
  FUN_00405b90(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00405c30(undefined param_1,undefined param_2)

{
  FUN_00405b90(param_1,param_2,0x3a);
  return;
}


void FUN_00405c40(undefined param_1,int param_2,undefined param_3)

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
    FUN_00405570(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405cb0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000061d428;
  local_38 = _DAT_0061d430;
  uStack_30 = uRam000000000061d438;
  local_28 = _DAT_0061d440;
  lStack_20 = uRam000000000061d448;
  local_18 = DAT_0061d450;
  local_48 = CONCAT44((int)((ulong)_DAT_0061d420 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00405570(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405d20(void)

{
  FUN_00405cb0();
  return;
}


void FUN_00405d30(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405cb0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00405d50(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00405cb0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00405d70(void)

{
  FUN_00405570();
  return;
}


void FUN_00405d80(undefined param_1,undefined param_2)

{
  FUN_00405570(0,param_1,param_2,&DAT_0061d260);
  return;
}


void FUN_00405da0(undefined param_1,undefined param_2)

{
  FUN_00405570(param_1,param_2,0xffffffffffffffff,&DAT_0061d260);
  return;
}


void FUN_00405dc0(undefined param_1)

{
  FUN_00405570(0,param_1,0xffffffffffffffff,&DAT_0061d260);
  return;
}


long FUN_00405de0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00407e50(param_1,0,param_2);
  if (lVar1 != 0) {
    param_2 = (lVar1 - param_1) + 1;
  }
  return param_2;
}


uint FUN_00405e20(byte *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar3 = (uint)*param_1;
  bVar5 = *param_2;
  uVar6 = (uint)bVar5;
  if (*param_1 == 0x2d) {
    do {
      param_1 = param_1 + 1;
      bVar1 = *param_1;
    } while (bVar1 == 0x30);
    uVar3 = (uint)bVar1;
    uVar7 = bVar1 - 0x30;
    if (bVar5 != 0x2d) {
      if (9 < uVar7) {
        while ((char)uVar6 == '0') {
          param_2 = param_2 + 1;
          uVar6 = (uint)*param_2;
        }
        return -(uint)(uVar6 - 0x30 < 10);
      }
      return 0xffffffff;
    }
    do {
      param_2 = param_2 + 1;
      bVar5 = *param_2;
    } while (bVar5 == 0x30);
    if (bVar1 == bVar5) {
      do {
        if (9 < uVar7) {
          uVar6 = (uint)bVar5;
          uVar3 = uVar6 - uVar3;
          goto LAB_00406060;
        }
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        bVar1 = *param_1;
        uVar3 = (uint)bVar1;
        bVar5 = *param_2;
        uVar7 = bVar1 - 0x30;
      } while (bVar1 == bVar5);
    }
    uVar6 = (uint)bVar5;
    uVar3 = uVar6 - uVar3;
    if (uVar7 < 10) {
      uVar8 = 0;
      do {
        lVar2 = uVar8 + 1;
        uVar8 = uVar8 + 1;
      } while (param_1[lVar2] - 0x30 < 10);
      if (9 < uVar6 - 0x30) {
        return -(uint)(uVar8 != 0);
      }
    }
    else {
LAB_00406060:
      uVar8 = 0;
      if (9 < uVar6 - 0x30) {
        return 0;
      }
    }
    uVar4 = 0;
    do {
      lVar2 = uVar4 + 1;
      uVar4 = uVar4 + 1;
    } while (param_2[lVar2] - 0x30 < 10);
    if (uVar8 != uVar4) {
      return (-(uint)(uVar8 < uVar4) & 2) - 1;
    }
  }
  else {
    if (bVar5 == 0x2d) {
      do {
        param_2 = param_2 + 1;
      } while (*param_2 == 0x30);
      if (*param_2 - 0x30 < 10) {
        return 1;
      }
      while ((char)uVar3 == '0') {
        param_1 = param_1 + 1;
        uVar3 = (uint)*param_1;
      }
      return (uint)(uVar3 - 0x30 < 10);
    }
    while ((char)uVar3 == '0') {
      param_1 = param_1 + 1;
      uVar3 = (uint)*param_1;
    }
    while ((char)uVar6 == '0') {
      param_2 = param_2 + 1;
      uVar6 = (uint)*param_2;
    }
    uVar7 = uVar3 - 0x30;
    if ((char)uVar6 == (char)uVar3) {
      do {
        if (9 < uVar7) {
          uVar3 = uVar3 - uVar6;
          goto LAB_00406042;
        }
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar3 = (uint)*param_1;
        uVar6 = (uint)*param_2;
        uVar7 = uVar3 - 0x30;
      } while (*param_1 == *param_2);
    }
    uVar3 = uVar3 - uVar6;
    if (uVar7 < 10) {
      uVar8 = 0;
      do {
        lVar2 = uVar8 + 1;
        uVar8 = uVar8 + 1;
      } while (param_1[lVar2] - 0x30 < 10);
      if (9 < uVar6 - 0x30) {
        return (uint)(uVar8 != 0);
      }
    }
    else {
LAB_00406042:
      uVar8 = 0;
      if (9 < uVar6 - 0x30) {
        return 0;
      }
    }
    uVar4 = 0;
    do {
      lVar2 = uVar4 + 1;
      uVar4 = uVar4 + 1;
    } while (param_2[lVar2] - 0x30 < 10);
    if (uVar8 != uVar4) {
      return -(uint)(uVar8 < uVar4) | 1;
    }
  }
  if (uVar8 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


undefined
FUN_00406080(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_00417f2b,5);
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
    goto LAB_004062fc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_004062fc:
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
    goto LAB_00406399;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00406399:
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
    goto LAB_0040617a;
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
LAB_0040617a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00406460(void)

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
  FUN_00406080();
  return;
}


void FUN_00406480(void)

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
  FUN_00406080();
  return;
}


void FUN_004064e0(void)

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
  FUN_00406080();
  return;
}


void FUN_004065a0(void)

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


void FUN_00406620(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406870();
  }
  return;
}


void FUN_00406640(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00406620();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406870();
}


void thunk_FUN_00406620(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406870();
  }
  return;
}


void * FUN_00406680(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406870();
  }
  return pvVar1;
}


void FUN_004066c0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00406680();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406870();
}


void FUN_004066f0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040674b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040674b:
                    /* WARNING: Subroutine does not return */
      FUN_00406870(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00406680(param_1,uVar2 * param_3);
  return;
}


void FUN_00406780(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00406680(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004067ca;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004067ca:
                    /* WARNING: Subroutine does not return */
      FUN_00406870();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00406680(param_1,uVar1);
  return;
}


void FUN_004067d0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00406620();
  memset(__s,0,param_1);
  return;
}


void FUN_004067f0(size_t param_1,ulong param_2)

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
  FUN_00406870();
}


void FUN_00406820(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00406620(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00406850(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00406620(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00406870(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
                    /* WARNING: Subroutine does not return */
  error(DAT_0061d250,0,"%s",uVar1);
}


ulong FUN_004068b0(byte *param_1,byte **param_2,uint param_3,long *param_4,char *param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *local_40 [2];
  
  if (0x24 < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoimax");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = local_40;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  lVar5 = __strtol_internal(param_1,param_2,param_3,0);
  pbVar3 = *param_2;
  if (pbVar3 == param_1) {
    if (param_5 == (char *)0x0) {
      return 4;
    }
    bVar1 = *pbVar3;
    if (bVar1 == 0) {
      return 4;
    }
    lVar5 = 1;
    uVar6 = 0;
    pcVar7 = strchr(param_5,(int)(char)bVar1);
    if (pcVar7 == (char *)0x0) {
      return 4;
    }
  }
  else {
    if (*piVar4 == 0) {
      uVar6 = 0;
    }
    else {
      if (*piVar4 != 0x22) {
        return 4;
      }
      uVar6 = 1;
    }
    uVar15 = (uint)uVar6;
    if ((param_5 == (char *)0x0) || (bVar1 = *pbVar3, bVar1 == 0)) goto LAB_00406927;
    pcVar7 = strchr(param_5,(int)(char)bVar1);
    if (pcVar7 == (char *)0x0) goto switchD_004069b2_caseD_1;
  }
  uVar15 = (uint)uVar6;
  uVar12 = bVar1 - 0x45;
  bVar11 = (byte)uVar12;
  if (((bVar11 < 0x30) && ((0x814400308945U >> ((ulong)uVar12 & 0x3f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar2 = pbVar3[1];
    if (bVar2 != 0x44) {
      if (bVar2 == 0x69) {
        iVar14 = 0x400;
        iVar13 = (pbVar3[2] == 0x42) + 1 + (uint)(pbVar3[2] == 0x42);
        goto LAB_004069a0;
      }
      if (bVar2 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00406a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_004184a8)[bVar11])();
        return uVar6;
      }
    }
    iVar13 = 2;
    iVar14 = 1000;
  }
  else {
    iVar13 = 1;
    iVar14 = 0x400;
  }
LAB_004069a0:
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    if (lVar5 < -0x20000000000000) goto LAB_00406b48;
    if (lVar5 < 0x20000000000000) {
      lVar5 = lVar5 << 10;
    }
    else {
LAB_00406f00:
      lVar5 = 0x7fffffffffffffff;
      uVar6 = 1;
    }
    break;
  default:
switchD_004069b2_caseD_1:
    *param_4 = lVar5;
    return (ulong)(uVar15 | 2);
  case 3:
    lVar10 = (long)iVar14;
    iVar14 = 6;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00406ef0;
  case 5:
  case 0x25:
    lVar10 = (long)iVar14;
    iVar14 = 3;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00406ef0;
  case 9:
  case 0x29:
    if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                       ZEXT816(0x8000000000000000)) / SEXT816((long)iVar14),0)) goto LAB_00406b48;
    lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                   ZEXT816(0x7fffffffffffffff)) / SEXT816((long)iVar14),0);
LAB_00406aec:
    if (lVar8 < lVar5) goto LAB_00406f00;
    lVar5 = lVar5 * iVar14;
    break;
  case 0xb:
  case 0x2b:
    lVar9 = (long)iVar14;
    lVar10 = SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                    ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0);
    if (lVar10 <= lVar5) {
      lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                     ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0);
      if (lVar8 < lVar5) goto LAB_00406f00;
      lVar5 = lVar5 * lVar9;
      if (lVar10 <= lVar5) goto LAB_00406aec;
    }
LAB_00406b48:
    lVar5 = -0x8000000000000000;
    uVar6 = 1;
    break;
  case 0xe:
    lVar10 = (long)iVar14;
    iVar14 = 5;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00406ef0;
  case 0x12:
  case 0x32:
    lVar10 = (long)iVar14;
    iVar14 = 4;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00406ef0;
  case 0x17:
    lVar10 = (long)iVar14;
    iVar14 = 8;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00406ef0;
  case 0x18:
    lVar10 = (long)iVar14;
    iVar14 = 7;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
LAB_00406ef0:
    uVar6 = (ulong)(uVar15 | uVar12);
    break;
  case 0x20:
    if (lVar5 < -0x40000000000000) goto LAB_00406b48;
    if (0x3fffffffffffff < lVar5) goto LAB_00406f00;
    lVar5 = lVar5 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if (lVar5 < -0x4000000000000000) goto LAB_00406b48;
    if (0x3fffffffffffffff < lVar5) goto LAB_00406f00;
    lVar5 = lVar5 * 2;
  }
  *param_2 = pbVar3 + iVar13;
  if (pbVar3[iVar13] != 0) {
    uVar6 = (ulong)((uint)uVar6 | 2);
  }
LAB_00406927:
  *param_4 = lVar5;
  return uVar6;
}


void FUN_00407000(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040707c;
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
      if (iVar9 <= iVar3) goto LAB_0040707c;
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
LAB_0040707c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004070e0(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00407300;
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
            if (local_70 == (char *)0x0) goto LAB_00407240;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00407240;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00407240:
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
LAB_00407300:
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


uint FUN_00407700(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_0040774a:
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
          goto LAB_0040784d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040784d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00407858:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004077c8;
LAB_0040786c:
    if (*pbVar8 == 0) goto LAB_004077c8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040774a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00407858;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040786c;
LAB_004077c8:
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
        FUN_00407000(param_2,param_7);
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
LAB_00407936:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0041664b;
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
          FUN_00407000(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00407936;
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
        puVar15 = &DAT_0041664b;
        goto LAB_00407a95;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00407a40;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004070e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0041664c);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00407a40:
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
  puVar15 = &DAT_0041875d;
LAB_00407a95:
  uVar3 = FUN_004070e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407cd0(void)

{
  DAT_0061d460 = DAT_0061d2b8._4_4_;
  _DAT_0061d464 = (undefined)DAT_0061d2b8;
  FUN_00407700();
  DAT_0061d2b8._4_4_ = DAT_0061d460;
  _DAT_0061d4a0 = DAT_0061d470;
  _DAT_0061d2b4 = DAT_0061d468;
  return;
}


void FUN_00407d30(void)

{
  FUN_00407cd0();
  return;
}


void FUN_00407d50(void)

{
  FUN_00407cd0();
  return;
}


void FUN_00407d70(void)

{
  FUN_00407700();
  return;
}


void FUN_00407d90(void)

{
  FUN_00407cd0();
  return;
}


void FUN_00407db0(void)

{
  FUN_00407700();
  return;
}


size_t FUN_00407dd0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x41875c;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00407df4;
  }
  param_1 = &local_1c;
LAB_00407df4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00415d00(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00407e50(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00407e90:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00407e90;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


ulong FUN_00407f60(long param_1,long param_2)

{
  bool bVar1;
  ulong in_RAX;
  long lVar2;
  
  bVar1 = param_1 == 0 || param_2 == 0;
  if (bVar1) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == *(long *)(param_2 + 8)) {
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 < 0) {
        return 1;
      }
    } while (*(long *)(*(long *)(param_1 + 0x10) + lVar2 * 8) ==
             *(long *)(*(long *)(param_2 + 0x10) + lVar2 * 8));
  }
  return in_RAX & 0xffffffffffffff00 | (ulong)bVar1;
}


void FUN_00407fb0(long *param_1,code *param_2,undefined param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  
  do {
    do {
      do {
        plVar3 = param_1;
        param_1 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
      param_1 = (long *)plVar3[2];
    } while ((long *)plVar3[2] != (long *)0x0);
    iVar2 = (*param_2)(param_3,plVar3);
    while( true ) {
      if ((iVar2 != 0) || (plVar1 = (long *)*plVar3, plVar1 == (long *)0x0)) {
        return;
      }
      param_1 = (long *)plVar1[2];
      if (param_1 != (long *)0x0 && param_1 != plVar3) break;
      iVar2 = (*param_2)(param_3,plVar1);
      plVar3 = plVar1;
    }
  } while( true );
}


undefined FUN_00408020(char *param_1,long param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x68) == lVar3 || *(long *)(param_2 + 0x68) < lVar3) {
    param_1[8] = '\x02';
    return 0;
  }
  lVar4 = *(long *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x90);
  cVar1 = *(char *)(lVar4 + lVar3);
  *param_1 = cVar1;
  if (((iVar2 < 2) || (lVar3 == *(long *)(param_2 + 0x30))) ||
     (*(int *)(*(long *)(param_2 + 0x10) + lVar3 * 4) != -1)) {
    if (cVar1 == '\\') {
      if (((param_3 & 1) != 0) && (lVar3 + 1 < *(long *)(param_2 + 0x58))) {
        *(long *)(param_2 + 0x48) = lVar3 + 1;
        cVar1 = *(char *)(lVar4 + 1 + lVar3);
        param_1[8] = '\x01';
        *param_1 = cVar1;
        return 1;
      }
    }
    else {
      if (cVar1 == '[') {
        if (lVar3 + 1 < *(long *)(param_2 + 0x58)) {
          cVar1 = *(char *)(lVar4 + 1 + lVar3);
          *param_1 = cVar1;
          if (cVar1 == ':') {
            if ((param_3 & 4) != 0) {
              param_1[8] = '\x1e';
              return 2;
            }
          }
          else {
            if (cVar1 == '=') {
              param_1[8] = '\x1c';
              return 2;
            }
            if (cVar1 == '.') {
              param_1[8] = '\x1a';
              return 2;
            }
          }
        }
        param_1[8] = '\x01';
        *param_1 = '[';
        return 1;
      }
      if (cVar1 == ']') {
        param_1[8] = '\x15';
        return 1;
      }
      if (cVar1 == '^') {
        param_1[8] = '\x19';
        return 1;
      }
      if (cVar1 == '-') {
        param_1[8] = '\x16';
        return 1;
      }
    }
  }
  param_1[8] = '\x01';
  return 1;
}


undefined FUN_00408150(long param_1,long param_2)

{
  if ((*(char *)(param_2 + 0x30) == '\x11') && (param_1 == *(long *)(param_2 + 0x28))) {
    *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 8;
    return 0;
  }
  return 0;
}


int FUN_00408170(long param_1,uint param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  plVar4 = *(long **)(param_1 + 0x98);
  lVar1 = plVar4[6] + param_4 * 0x18;
  if (0 < *(long *)(lVar1 + 8)) {
    lVar10 = 0;
    uVar8 = 1L << ((byte)param_3 & 0x3f);
    do {
      while( true ) {
        lVar5 = *(long *)(*(long *)(lVar1 + 0x10) + lVar10 * 8);
        plVar9 = (long *)(lVar5 * 0x10 + *plVar4);
        cVar3 = *(char *)(plVar9 + 1);
        if (cVar3 != '\b') break;
        if (((param_2 & 1) != 0) && (*plVar9 == param_3)) {
          return -1;
        }
LAB_004081f5:
        lVar10 = lVar10 + 1;
        if (*(long *)(lVar1 + 8) == lVar10 || *(long *)(lVar1 + 8) < lVar10) goto LAB_0040834d;
      }
      if (cVar3 == '\t') {
        if (((param_2 & 2) != 0) && (*plVar9 == param_3)) {
          return 0;
        }
        goto LAB_004081f5;
      }
      if ((cVar3 != '\x04') || (param_5 == -1)) goto LAB_004081f5;
      plVar9 = (long *)(param_5 * 0x28 + *(long *)(param_1 + 0xd8));
      do {
        if ((*plVar9 == lVar5) &&
           ((0x3f < param_3 || ((uVar8 & *(ushort *)((long)plVar9 + 0x22)) != 0)))) {
          lVar6 = **(long **)(plVar4[5] + 0x10 + lVar5 * 0x18);
          if (param_4 == lVar6) {
            return -(param_2 & 1);
          }
          iVar7 = FUN_00408170(param_1,param_2,param_3,lVar6,param_5);
          if (iVar7 == -1) {
            return -1;
          }
          if ((iVar7 == 0) && ((param_2 & 2) != 0)) {
            return 0;
          }
          if (param_3 < 0x40) {
            *(ushort *)((long)plVar9 + 0x22) = *(ushort *)((long)plVar9 + 0x22) & ~(ushort)uVar8;
          }
        }
        plVar2 = plVar9 + 4;
        plVar9 = plVar9 + 5;
      } while (*(char *)plVar2 != '\0');
      lVar10 = lVar10 + 1;
    } while (*(long *)(lVar1 + 8) != lVar10 && lVar10 <= *(long *)(lVar1 + 8));
  }
LAB_0040834d:
  return (int)param_2 >> 1;
}


undefined
FUN_00408380(long param_1,long param_2,undefined param_3,undefined param_4,long param_5,
            undefined param_6)

{
  long lVar1;
  long lVar2;
  undefined uVar3;
  byte bVar4;
  
  lVar1 = *(long *)(param_1 + 0xd8) + param_2 * 0x28;
  lVar2 = *(long *)(lVar1 + 0x10);
  if (param_5 < lVar2) {
    return 0xffffffff;
  }
  lVar1 = *(long *)(lVar1 + 0x18);
  if (param_5 <= lVar1) {
    bVar4 = lVar2 == param_5;
    if (lVar1 == param_5) {
      bVar4 = bVar4 | 2;
    }
    else if (lVar2 != param_5) {
      return 0;
    }
    uVar3 = FUN_00408170(param_1,bVar4,param_3,param_4,param_6);
    return uVar3;
  }
  return 1;
}


undefined FUN_004083f0(long param_1,ulong param_2)

{
  void *pvVar1;
  
  if (1 < *(int *)(param_1 + 0x90)) {
    if (0x1fffffffffffffff < param_2) {
      return 0xc;
    }
    pvVar1 = realloc(*(void **)(param_1 + 0x10),param_2 * 4);
    if (pvVar1 == (void *)0x0) {
      return 0xc;
    }
    *(void **)(param_1 + 0x10) = pvVar1;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      pvVar1 = realloc(*(void **)(param_1 + 0x18),param_2 * 8);
      if (pvVar1 == (void *)0x0) {
        return 0xc;
      }
      *(void **)(param_1 + 0x18) = pvVar1;
    }
  }
  if (*(char *)(param_1 + 0x8b) != '\0') {
    pvVar1 = realloc(*(void **)(param_1 + 8),param_2);
    if (pvVar1 == (void *)0x0) {
      return 0xc;
    }
    *(void **)(param_1 + 8) = pvVar1;
  }
  *(ulong *)(param_1 + 0x40) = param_2;
  return 0;
}


undefined FUN_00408490(long *param_1,undefined param_2)

{
  void *__ptr;
  long lVar1;
  
  lVar1 = param_1[1];
  __ptr = (void *)param_1[2];
  if (*param_1 == lVar1) {
    *param_1 = (lVar1 + 1) * 2;
    __ptr = realloc(__ptr,(lVar1 + 1) * 0x10);
    if (__ptr == (void *)0x0) {
      return 0;
    }
    param_1[2] = (long)__ptr;
    lVar1 = param_1[1];
  }
  param_1[1] = lVar1 + 1;
  *(undefined *)((long)__ptr + lVar1 * 8) = param_2;
  return 1;
}


long * FUN_00408500(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    *param_1 = 1;
    param_1[1] = 1;
    plVar1 = (long *)malloc(8);
    param_1[2] = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = param_2;
      return (long *)0x1;
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    lVar5 = param_1[1];
    plVar1 = (long *)param_1[2];
    if (lVar5 == 0) {
      *plVar1 = param_2;
      plVar1 = (long *)0x1;
      param_1[1] = param_1[1] + 1;
    }
    else {
      if (*param_1 == lVar5) {
        *param_1 = lVar5 * 2;
        plVar1 = (long *)realloc(plVar1,lVar5 << 4);
        if (plVar1 == (long *)0x0) {
          return (long *)0x0;
        }
        param_1[2] = (long)plVar1;
        lVar5 = param_1[1];
      }
      lVar4 = lVar5 * 8;
      if (*plVar1 == param_2 || *plVar1 < param_2) {
        lVar5 = plVar1[lVar5 + -1];
        while (param_2 < lVar5) {
          *(long *)((long)plVar1 + lVar4) = lVar5;
          lVar5 = *(long *)((long)plVar1 + lVar4 + -0x10);
          lVar4 = lVar4 + -8;
        }
      }
      else if (0 < lVar5) {
        plVar2 = plVar1 + lVar5;
        do {
          plVar3 = plVar2 + -1;
          *plVar2 = plVar2[-1];
          plVar2 = plVar3;
        } while (plVar3 != plVar1);
        lVar4 = 0;
      }
      *(long *)((long)plVar1 + lVar4) = param_2;
      plVar1 = (long *)0x1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return plVar1;
}


undefined FUN_00408630(long *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = param_2[2];
  *param_2 = param_3;
  param_2[5] = 0;
  param_2[4] = uVar2;
  pvVar4 = malloc(uVar2 * 8);
  param_2[6] = (ulong)pvVar4;
  if (pvVar4 == (void *)0x0) {
    return 0xc;
  }
  uVar6 = 0;
  if (0 < (long)uVar2) {
    do {
      if (((*(byte *)(*(long *)(param_2[3] + uVar6 * 8) * 0x10 + *param_1 + 8) & 8) == 0) &&
         (cVar3 = FUN_00408490(param_2 + 4), cVar3 == '\0')) {
        return 0xc;
      }
      uVar6 = uVar6 + 1;
    } while (param_2[2] != uVar6 && (long)uVar6 <= (long)param_2[2]);
  }
  plVar1 = (long *)(param_1[8] + (param_3 & param_1[0x11]) * 0x18);
  lVar5 = *plVar1;
  pvVar4 = (void *)plVar1[2];
  lVar7 = lVar5 + 1;
  if (plVar1[1] == lVar5 || plVar1[1] < lVar5) {
    pvVar4 = realloc(pvVar4,lVar7 * 0x10);
    if (pvVar4 == (void *)0x0) {
      return 0xc;
    }
    lVar5 = *plVar1;
    plVar1[2] = (long)pvVar4;
    plVar1[1] = lVar7 * 2;
    lVar7 = lVar5 + 1;
  }
  *plVar1 = lVar7;
  *(ulong **)((long)pvVar4 + lVar5 * 8) = param_2;
  return 0;
}


wint_t FUN_00408730(byte param_1,long param_2)

{
  wint_t wVar1;
  
  wVar1 = btowc((uint)param_1);
  if ((wVar1 == 0xffffffff) && (wVar1 = 0xffffffff, param_2 == 0)) {
    wVar1 = (uint)param_1;
  }
  return wVar1;
}


void FUN_00408760(long *param_1)

{
  __int32_t **pp_Var1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[0xb];
  if (param_1[8] == lVar4 || param_1[8] < lVar4) {
    lVar4 = param_1[8];
  }
  lVar3 = param_1[6];
  if (lVar3 < lVar4) {
    pp_Var1 = __ctype_toupper_loc();
    do {
      uVar2 = (ulong)*(byte *)(*param_1 + lVar3 + param_1[5]);
      if (param_1[0xf] != 0) {
        uVar2 = (ulong)*(byte *)(param_1[0xf] + uVar2);
      }
      *(char *)(param_1[1] + lVar3) = (char)(*pp_Var1)[uVar2];
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
    param_1[6] = lVar4;
    param_1[7] = lVar4;
    return;
  }
  param_1[6] = lVar3;
  param_1[7] = lVar3;
  return;
}


void FUN_004087e0(long *param_1)

{
  byte bVar1;
  undefined uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  uint local_6c;
  undefined local_68 [64];
  
  lVar11 = param_1[0xb];
  lVar9 = param_1[6];
  if (param_1[8] == lVar11 || param_1[8] < lVar11) {
    lVar11 = param_1[8];
  }
  if (lVar9 < lVar11) {
    lVar8 = lVar9;
LAB_00408810:
    do {
      lVar9 = param_1[0xf];
      lVar3 = param_1[4];
      lVar6 = lVar11 - lVar8;
      if (lVar9 == 0) {
        puVar10 = (undefined *)(param_1[5] + lVar8 + *param_1);
      }
      else {
        if (0 < *(int *)(param_1 + 0x12)) {
          lVar4 = 0;
          puVar10 = local_68;
          if (0 < lVar6) {
            while( true ) {
              uVar2 = *(undefined *)
                       (lVar9 + (ulong)*(byte *)(*param_1 + lVar8 + lVar4 + param_1[5]));
              *(undefined *)(param_1[1] + lVar8 + lVar4) = uVar2;
              puVar10[lVar4] = uVar2;
              iVar5 = (int)lVar4 + 1;
              if ((*(int *)(param_1 + 0x12) == iVar5 || *(int *)(param_1 + 0x12) < iVar5) ||
                 (lVar4 = lVar4 + 1, lVar6 == lVar4)) break;
              lVar9 = param_1[0xf];
            }
            goto LAB_00408831;
          }
        }
        puVar10 = local_68;
      }
LAB_00408831:
      lVar6 = FUN_00407dd0(&local_6c,puVar10,lVar6,param_1 + 4);
      if (lVar6 - 1U < 0xfffffffffffffffe) {
        if (lVar6 == -2) {
          if (param_1[0xb] <= param_1[8]) goto LAB_004088b0;
          param_1[4] = lVar3;
          lVar9 = lVar8;
          break;
        }
      }
      else {
LAB_004088b0:
        bVar1 = *(byte *)(*param_1 + lVar8 + param_1[5]);
        if (param_1[0xf] != 0) {
          bVar1 = *(byte *)(param_1[0xf] + (ulong)bVar1);
        }
        local_6c = (uint)bVar1;
        param_1[4] = lVar3;
        lVar6 = 1;
      }
      lVar3 = param_1[2];
      lVar9 = lVar8 + 1;
      *(uint *)(lVar3 + lVar8 * 4) = local_6c;
      lVar6 = lVar8 + lVar6;
      if (lVar6 <= lVar9) {
        lVar8 = lVar9;
        if (lVar11 <= lVar9) break;
        goto LAB_00408810;
      }
      puVar7 = (undefined *)(lVar3 + 4 + lVar8 * 4);
      do {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      } while ((undefined *)(lVar3 + lVar6 * 4) != puVar7);
      lVar8 = lVar6;
      lVar9 = lVar6;
    } while (lVar6 < lVar11);
  }
  param_1[6] = lVar9;
  param_1[7] = lVar9;
  return;
}


undefined FUN_00408990(long *param_1)

{
  wchar_t *pwVar1;
  ulong *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  int iVar8;
  ulong uVar9;
  size_t sVar10;
  __int32_t **pp_Var11;
  ulong uVar12;
  void *pvVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  mbstate_t *local_a8;
  char *local_a0;
  ulong local_98;
  wchar_t *local_90;
  wchar_t local_84;
  mbstate_t local_80;
  char local_78 [72];
  
  lVar17 = param_1[0xb];
  if (param_1[8] == lVar17 || param_1[8] < lVar17) {
    lVar17 = param_1[8];
  }
  if (((*(char *)((long)param_1 + 0x8a) != '\0') || (param_1[0xf] != 0)) ||
     (uVar19 = param_1[6], *(char *)((long)param_1 + 0x8c) != '\0')) {
    uVar12 = param_1[7];
    uVar20 = param_1[6];
    goto LAB_004089ca;
  }
joined_r0x00408b40:
  do {
    if (lVar17 <= (long)uVar19) {
LAB_00408c43:
      param_1[6] = uVar19;
      param_1[7] = uVar19;
      return 0;
    }
    local_a8 = (mbstate_t *)(param_1 + 4);
    pbVar18 = (byte *)(param_1[5] + uVar19 + *param_1);
    bVar3 = *pbVar18;
    if (((bVar3 & 0x80) == 0) && (iVar8 = mbsinit(local_a8), iVar8 != 0)) {
      pp_Var11 = __ctype_toupper_loc();
      *(char *)(param_1[1] + uVar19) = (char)(*pp_Var11)[bVar3];
      *(uint *)(param_1[2] + uVar19 * 4) = (uint)*(byte *)(param_1[1] + uVar19);
      uVar19 = uVar19 + 1;
      goto joined_r0x00408b40;
    }
    local_80 = *(mbstate_t *)(param_1 + 4);
    local_98 = lVar17 - uVar19;
    uVar12 = FUN_00407dd0(&local_84,pbVar18,local_98,local_a8);
    wVar6 = local_84;
    if (uVar12 < 0xfffffffffffffffe) {
      wVar7 = towupper(local_84);
      if (wVar6 == wVar7) {
        memcpy((void *)(param_1[1] + uVar19),(void *)(param_1[5] + uVar19 + *param_1),uVar12);
      }
      else {
        sVar10 = wcrtomb(local_78,wVar7,&local_80);
        uVar20 = uVar19;
        if (uVar12 != sVar10) break;
        memcpy((void *)(param_1[1] + uVar19),local_78,uVar12);
      }
      lVar15 = param_1[2];
      lVar4 = uVar19 * 4;
      uVar20 = uVar19 + 1;
      *(wchar_t *)(lVar15 + uVar19 * 4) = wVar7;
      uVar12 = uVar19 + uVar12;
      uVar19 = uVar20;
      if ((long)uVar20 < (long)uVar12) {
        puVar14 = (undefined *)(lVar15 + 4 + lVar4);
        do {
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
          uVar19 = uVar12;
        } while ((undefined *)(lVar15 + uVar12 * 4) != puVar14);
      }
    }
    else if (uVar12 == 0xfffffffffffffffe) {
      if (param_1[8] < param_1[0xb]) {
        *(mbstate_t *)(param_1 + 4) = local_80;
        goto LAB_00408c43;
      }
      bVar3 = *(byte *)(*param_1 + uVar19 + param_1[5]);
      *(byte *)(param_1[1] + uVar19) = bVar3;
      *(uint *)(param_1[2] + uVar19 * 4) = (uint)bVar3;
      uVar19 = uVar19 + 1;
    }
    else {
      bVar3 = *(byte *)(*param_1 + uVar19 + param_1[5]);
      *(byte *)(param_1[1] + uVar19) = bVar3;
      *(uint *)(param_1[2] + uVar19 * 4) = (uint)bVar3;
      *(mbstate_t *)(param_1 + 4) = local_80;
      uVar19 = uVar19 + 1;
    }
  } while( true );
LAB_004089f0:
  local_90 = &local_84;
  local_80 = *(mbstate_t *)(param_1 + 4);
  lVar4 = param_1[0xf];
  if (lVar4 == 0) {
    local_a0 = (char *)(param_1[5] + uVar19 + *param_1);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x12);
    if ((0 < iVar8) && (0 < (long)local_98)) {
      lVar15 = param_1[5];
      uVar12 = 0;
      lVar5 = *param_1;
      do {
        local_78[uVar12] = *(char *)(lVar4 + (ulong)*(byte *)(lVar15 + uVar19 + lVar5 + uVar12));
        if (iVar8 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
      } while (local_98 != uVar12);
    }
    local_a0 = local_78;
  }
  uVar9 = FUN_00407dd0(local_90,local_a0,local_98,(mbstate_t *)(param_1 + 4));
  wVar6 = local_84;
  if (uVar9 < 0xfffffffffffffffe) {
    wVar7 = towupper(local_84);
    if (wVar6 == wVar7) {
LAB_00408d78:
      memcpy((void *)(param_1[1] + uVar20),local_a0,uVar9);
    }
    else {
      sVar10 = wcrtomb(local_78,wVar7,&local_80);
      if (uVar9 != sVar10) {
        if (sVar10 != 0xffffffffffffffff) {
          if ((ulong)param_1[8] < uVar20 + sVar10) goto LAB_00408aff;
          if (param_1[3] == 0) {
            pvVar13 = malloc(param_1[8] * 8);
            param_1[3] = (long)pvVar13;
            if (pvVar13 == (void *)0x0) {
              return 0xc;
            }
          }
          if (*(char *)((long)param_1 + 0x8c) == '\0') {
            if (uVar20 != 0) {
              lVar17 = param_1[3];
              uVar12 = 0;
              do {
                *(ulong *)(lVar17 + uVar12 * 8) = uVar12;
                uVar12 = uVar12 + 1;
              } while (uVar20 != uVar12);
            }
            *(undefined *)((long)param_1 + 0x8c) = 1;
          }
          memcpy((void *)(param_1[1] + uVar20),local_78,sVar10);
          pwVar1 = (wchar_t *)(param_1[2] + uVar20 * 4);
          lVar17 = param_1[3];
          *pwVar1 = wVar7;
          puVar2 = (ulong *)(lVar17 + uVar20 * 8);
          uVar12 = 1;
          *puVar2 = uVar19;
          if (1 < sVar10) {
            do {
              uVar16 = uVar12;
              if (uVar9 <= uVar12) {
                uVar16 = uVar9 - 1;
              }
              puVar2[uVar12] = uVar16 + uVar19;
              pwVar1[uVar12] = L'\xffffffff';
              uVar12 = uVar12 + 1;
            } while (uVar12 != sVar10);
          }
          lVar17 = param_1[0xb] + (sVar10 - uVar9);
          param_1[0xb] = lVar17;
          if ((long)uVar19 < param_1[0xc]) {
            param_1[0xd] = param_1[0xd] + (sVar10 - uVar9);
          }
          if (param_1[8] == lVar17 || param_1[8] < lVar17) {
            lVar17 = param_1[8];
          }
          uVar12 = uVar19 + uVar9;
          uVar20 = uVar20 + sVar10;
          goto LAB_004089ca;
        }
        goto LAB_00408d78;
      }
      memcpy((void *)(param_1[1] + uVar20),local_78,uVar9);
    }
    if (*(char *)((long)param_1 + 0x8c) == '\0') {
      uVar12 = uVar19 + uVar9;
    }
    else {
      uVar12 = uVar19;
      if (uVar9 != 0) {
        lVar4 = param_1[3];
        uVar12 = uVar9 + uVar19;
        lVar15 = uVar20 - uVar19;
        do {
          *(ulong *)(lVar4 + lVar15 * 8 + uVar19 * 8) = uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
    }
    lVar15 = param_1[2];
    uVar19 = uVar20 + 1;
    uVar9 = uVar20 + uVar9;
    lVar4 = uVar20 * 4;
    *(wchar_t *)(lVar15 + uVar20 * 4) = wVar7;
    uVar20 = uVar19;
    if ((long)uVar19 < (long)uVar9) {
      puVar14 = (undefined *)(lVar15 + 4 + lVar4);
      do {
        *puVar14 = 0xffffffff;
        puVar14 = puVar14 + 1;
        uVar20 = uVar9;
      } while ((undefined *)(lVar15 + uVar9 * 4) != puVar14);
    }
  }
  else {
    if ((uVar9 == 0xfffffffffffffffe) && (param_1[8] < param_1[0xb])) {
LAB_00408aff:
      *(mbstate_t *)(param_1 + 4) = local_80;
LAB_00408b10:
      param_1[6] = uVar20;
      param_1[7] = uVar19;
      return 0;
    }
    bVar3 = *(byte *)(*param_1 + uVar19 + param_1[5]);
    if (param_1[0xf] != 0) {
      bVar3 = *(byte *)(param_1[0xf] + (ulong)bVar3);
    }
    *(byte *)(param_1[1] + uVar20) = bVar3;
    if (*(char *)((long)param_1 + 0x8c) != '\0') {
      *(ulong *)(param_1[3] + uVar20 * 8) = uVar19;
    }
    uVar12 = uVar19 + 1;
    uVar19 = uVar20 + 1;
    *(uint *)(param_1[2] + uVar20 * 4) = (uint)bVar3;
    uVar20 = uVar19;
    if (uVar9 == 0xffffffffffffffff) {
      *(mbstate_t *)(param_1 + 4) = local_80;
    }
  }
LAB_004089ca:
  uVar19 = uVar12;
  if (lVar17 <= (long)uVar20) goto LAB_00408b10;
  local_98 = lVar17 - uVar20;
  goto LAB_004089f0;
}


ulong FUN_00408f90(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (0xffffffffffffffe < (ulong)param_1[8]) {
    return 0xc;
  }
  lVar2 = param_1[8] * 2;
  if (param_1[0xb] < lVar2) {
    lVar2 = param_1[0xb];
  }
  lVar6 = (long)param_2;
  if (param_2 <= lVar2) {
    lVar6 = lVar2;
  }
  uVar1 = FUN_004083f0(param_1,lVar6);
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0) {
    if ((void *)param_1[0x17] != (void *)0x0) {
      pvVar3 = realloc((void *)param_1[0x17],param_1[8] * 8 + 8);
      if (pvVar3 == (void *)0x0) {
        return 0xc;
      }
      param_1[0x17] = (long)pvVar3;
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      if (*(int *)(param_1 + 0x12) < 2) {
        FUN_00408760(param_1);
        return uVar4;
      }
      uVar4 = FUN_00408990();
      return uVar4;
    }
    if (1 < *(int *)(param_1 + 0x12)) {
      FUN_004087e0(param_1);
      return uVar4;
    }
    lVar2 = param_1[0xf];
    if (lVar2 != 0) {
      lVar6 = param_1[0xb];
      lVar5 = param_1[6];
      if (param_1[8] == lVar6 || param_1[8] < lVar6) {
        lVar6 = param_1[8];
      }
      if (lVar5 < lVar6) {
        while( true ) {
          *(undefined *)(param_1[1] + lVar5) =
               *(undefined *)(lVar2 + (ulong)*(byte *)(*param_1 + lVar5 + param_1[5]));
          lVar5 = lVar5 + 1;
          if (lVar6 == lVar5) break;
          lVar2 = param_1[0xf];
        }
        param_1[6] = lVar6;
        param_1[7] = lVar6;
      }
      else {
        param_1[6] = lVar5;
        param_1[7] = lVar5;
      }
    }
  }
  return uVar4;
}


undefined FUN_004090e0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined uVar3;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  if ((param_2 < *(long *)(param_1 + 0x40)) ||
     (*(long *)(param_1 + 0x58) <= *(long *)(param_1 + 0x40))) {
    if ((param_2 < *(long *)(param_1 + 0x30)) ||
       (*(long *)(param_1 + 0x58) <= *(long *)(param_1 + 0x30))) goto LAB_0040910f;
    uVar3 = FUN_00408f90(param_1);
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = FUN_00408f90(param_1);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    return uVar3;
  }
LAB_0040910f:
  if (lVar1 < param_2) {
    memset((void *)(*(long *)(param_1 + 0xb8) + 8 + lVar1 * 8),0,(param_2 - lVar1) * 8);
    *(long *)(param_1 + 0xc0) = param_2;
  }
  return 0;
}


void FUN_00409170(void **param_1)

{
  free(*param_1);
  free(param_1[3]);
  free(param_1);
  return;
}


void FUN_00409190(void **param_1)

{
  if ((*(uint *)(param_1 + 1) & 0x400ff) == 6) {
    FUN_00409170(*param_1);
    return;
  }
  if ((*(uint *)(param_1 + 1) & 0x400ff) != 3) {
    return;
  }
  free(*param_1);
  return;
}


undefined FUN_004091c0(undefined param_1,long param_2)

{
  FUN_00409190(param_2 + 0x28);
  return 0;
}


void * FUN_004091e0(void **param_1,undefined param_2,undefined param_3)

{
  undefined (*pauVar1) [16];
  void *pvVar2;
  undefined *puVar3;
  void *pvVar4;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  bool bVar5;
  
  pvVar4 = param_1[2];
  pvVar2 = param_1[1];
  if (pvVar4 < pvVar2) {
    __ptr = param_1[3];
    __ptr_01 = param_1[5];
LAB_0040920d:
    puVar3 = (undefined *)((long)pvVar4 * 0x10 + (long)*param_1);
    bVar5 = (char)param_3 == '\x06';
    puVar3[1] = param_3;
    *puVar3 = param_2;
    *(uint *)(puVar3 + 1) = (uint)param_3 & 0xfffc00ff;
    if ((char)param_3 == '\x05') {
      bVar5 = 1 < *(int *)((long)param_1 + 0xb4);
    }
    *(byte *)((long)puVar3 + 10) = *(byte *)((long)puVar3 + 10) & 0xef | bVar5 << 4;
    *(undefined *)((long)__ptr + (long)pvVar4 * 8) = 0xffffffffffffffff;
    pauVar1 = (undefined (*) [16])((long)__ptr_01 + (long)param_1[2] * 0x18);
    *pauVar1 = (undefined)0x0;
    *(undefined *)pauVar1[1] = 0;
    pauVar1 = (undefined (*) [16])((long)param_1[6] + (long)param_1[2] * 0x18);
    *pauVar1 = (undefined)0x0;
    *(undefined *)pauVar1[1] = 0;
    pvVar4 = param_1[2];
    param_1[2] = (void *)((long)pvVar4 + 1);
  }
  else {
    if ((void *)((long)pvVar2 * 2) < (void *)0xaaaaaaaaaaaaaab) {
      pvVar4 = realloc(*param_1,(long)pvVar2 << 5);
      if (pvVar4 != (void *)0x0) {
        *param_1 = pvVar4;
        __ptr = realloc(param_1[3],(long)pvVar2 << 4);
        __ptr_00 = realloc(param_1[4],(long)pvVar2 << 4);
        __ptr_01 = realloc(param_1[5],(long)pvVar2 * 0x30);
        __ptr_02 = realloc(param_1[6],(long)pvVar2 * 0x30);
        if ((((__ptr != (void *)0x0) && (__ptr_00 != (void *)0x0)) && (__ptr_01 != (void *)0x0)) &&
           (__ptr_02 != (void *)0x0)) {
          param_1[3] = __ptr;
          pvVar4 = param_1[2];
          param_1[4] = __ptr_00;
          param_1[5] = __ptr_01;
          param_1[6] = __ptr_02;
          param_1[1] = (void *)((long)pvVar2 * 2);
          goto LAB_0040920d;
        }
        free(__ptr);
        free(__ptr_00);
        free(__ptr_01);
        free(__ptr_02);
      }
    }
    pvVar4 = (void *)0xffffffffffffffff;
  }
  return pvVar4;
}


void FUN_004093b0(long *param_1,long param_2,ushort param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_2 * 0x10;
  lVar2 = FUN_004091e0(param_1,*(undefined *)(*param_1 + lVar5),
                       *(undefined *)(*param_1 + 8 + lVar5));
  if (lVar2 != -1) {
    lVar1 = *param_1;
    lVar4 = lVar2 * 0x10 + lVar1;
    uVar3 = *(uint *)(lVar4 + 8) & 0xfffc00ff;
    *(uint *)(lVar4 + 8) = uVar3 | (uint)(param_3 & 0x3ff) << 8;
    uVar3 = (*(uint *)(lVar1 + 8 + lVar5) >> 8 & 0x3ff | (uint)(param_3 & 0x3ff)) << 8 | uVar3;
    *(uint *)(lVar4 + 8) = uVar3;
    *(byte *)(lVar4 + 10) = (byte)(uVar3 >> 0x10) | 4;
    *(long *)(param_1[4] + lVar2 * 8) = param_2;
  }
  return;
}


undefined FUN_00409450(long *param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_48;
  
  do {
    lVar6 = *param_1;
    lVar8 = param_1[5];
    lVar4 = param_2 * 0x10 + lVar6;
    if (*(char *)(lVar4 + 8) == '\x04') {
      local_48 = *(long *)(param_1[3] + param_2 * 8);
      *(undefined *)(lVar8 + 8 + param_3 * 0x18) = 0;
      lVar6 = FUN_004093b0(param_1,local_48,param_5);
      if (lVar6 == -1) {
        return 0xc;
      }
      *(undefined *)(param_1[3] + param_3 * 8) = *(undefined *)(param_1[3] + param_2 * 8);
LAB_0040956a:
      cVar3 = FUN_00408500(param_1[5] + param_3 * 0x18,lVar6);
      param_3 = lVar6;
      param_2 = local_48;
    }
    else {
      lVar1 = lVar8 + param_2 * 0x18;
      lVar2 = *(long *)(lVar1 + 8);
      if (lVar2 == 0) {
        *(undefined *)(param_1[3] + param_3 * 8) = *(undefined *)(param_1[3] + param_2 * 8);
        return 0;
      }
      lVar7 = param_3 * 0x18;
      lVar1 = **(long **)(lVar1 + 0x10);
      *(undefined *)(lVar8 + lVar7 + 8) = 0;
      if (lVar2 != 1) {
        lVar8 = param_1[2] + -1;
        lVar4 = lVar8 * 0x10 + lVar6;
        if (((*(byte *)(lVar4 + 10) & 4) != 0) && (0 < lVar8)) {
          lVar6 = lVar6 - lVar4;
          do {
            if ((*(long *)(param_1[4] + lVar8 * 8) == lVar1) &&
               (param_5 == (*(uint *)(lVar4 + 8) >> 8 & 0x3ff))) {
              cVar3 = FUN_00408500();
              if (cVar3 == '\0') {
                return 0xc;
              }
              goto LAB_00409542;
            }
            lVar4 = lVar4 + lVar6 + -0x20 + param_1[2] * 0x10;
            lVar8 = lVar8 + -1;
          } while (((*(byte *)(lVar4 + 10) & 4) != 0) && (0 < lVar8));
        }
        lVar6 = FUN_004093b0(param_1,lVar1,param_5);
        if (lVar6 == -1) {
          return 0xc;
        }
        cVar3 = FUN_00408500(param_1[5] + lVar7,lVar6);
        if (cVar3 == '\0') {
          return 0xc;
        }
        uVar5 = FUN_00409450(param_1,lVar1,lVar6,param_4,param_5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
LAB_00409542:
        local_48 = *(long *)(*(long *)(param_1[5] + 0x10 + param_2 * 0x18) + 8);
        lVar6 = FUN_004093b0(param_1,local_48,param_5);
        if (lVar6 == -1) {
          return 0xc;
        }
        goto LAB_0040956a;
      }
      if ((param_2 == param_4) && (param_2 != param_3)) {
        cVar3 = FUN_00408500(lVar8 + lVar7,lVar1);
        if (cVar3 == '\0') {
          return 0xc;
        }
        return 0;
      }
      param_5 = param_5 | *(uint *)(lVar4 + 8) >> 8 & 0x3ff;
      param_3 = FUN_004093b0(param_1,lVar1,param_5);
      if (param_3 == -1) {
        return 0xc;
      }
      cVar3 = FUN_00408500(param_1[5] + lVar7,param_3);
      param_2 = lVar1;
    }
    if (cVar3 == '\0') {
      return 0xc;
    }
  } while( true );
}


void FUN_004096e0(void *param_1)

{
  free(*(void **)((long)param_1 + 0x30));
  free(*(void **)((long)param_1 + 0x48));
  if (*(long *)((long)param_1 + 0x50) != (long)param_1 + 8) {
    free(*(void **)(*(long *)((long)param_1 + 0x50) + 0x10));
    free(*(void **)((long)param_1 + 0x50));
  }
  free(*(void **)((long)param_1 + 0x18));
  free(*(void **)((long)param_1 + 0x60));
  free(*(void **)((long)param_1 + 0x58));
  free(param_1);
  return;
}


void FUN_00409740(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  free(*(void **)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x8b) == '\0') {
    return;
  }
  free(*(void **)(param_1 + 8));
  return;
}


void FUN_00409780(long param_1)

{
  void *__ptr;
  void *__ptr_00;
  long lVar1;
  long lVar2;
  
  if (0 < *(long *)(param_1 + 0xe8)) {
    lVar2 = 0;
    do {
      __ptr = *(void **)(*(long *)(param_1 + 0xf8) + lVar2 * 8);
      if (0 < *(long *)((long)__ptr + 0x20)) {
        lVar1 = 0;
        do {
          __ptr_00 = *(void **)(*(long *)((long)__ptr + 0x28) + lVar1 * 8);
          lVar1 = lVar1 + 1;
          free(*(void **)((long)__ptr_00 + 0x20));
          free(__ptr_00);
        } while (*(long *)((long)__ptr + 0x20) != lVar1 && lVar1 <= *(long *)((long)__ptr + 0x20));
      }
      free(*(void **)((long)__ptr + 0x28));
      if (*(long *)((long)__ptr + 0x10) != 0) {
        free(*(void **)(*(long *)((long)__ptr + 0x10) + 0x10));
        free(*(void **)((long)__ptr + 0x10));
      }
      lVar2 = lVar2 + 1;
      free(__ptr);
    } while (*(long *)(param_1 + 0xe8) != lVar2 && lVar2 <= *(long *)(param_1 + 0xe8));
  }
  *(undefined *)(param_1 + 0xe8) = 0;
  *(undefined *)(param_1 + 200) = 0;
  return;
}


undefined FUN_00409840(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined uVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_2 + 0x38);
  switch(*(byte *)(param_2 + 0x30)) {
  default:
    if ((*(byte *)(param_2 + 0x30) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!IS_EPSILON_NODE (node->token.type)","lib/regcomp.c",0x5cc,"link_nfa_nodes");
    }
    *(undefined *)(*(long *)(param_1 + 0x18) + lVar2 * 8) =
         *(undefined *)(*(long *)(param_2 + 0x20) + 0x38);
    break;
  case 2:
    if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("node->next == NULL","lib/regcomp.c",0x5a9,"link_nfa_nodes");
    }
    break;
  case 4:
    uVar3 = *(undefined *)(*(long *)(param_2 + 0x20) + 0x38);
    *(undefined *)(*(long *)(param_1 + 0x18) + lVar2 * 8) = uVar3;
    if (*(char *)(param_2 + 0x30) == '\x04') {
      puVar1 = (undefined *)(*(long *)(param_1 + 0x28) + lVar2 * 0x18);
      *puVar1 = 1;
      puVar1[1] = 1;
      puVar5 = (undefined *)malloc(8);
      puVar1[2] = puVar5;
      if (puVar5 != (undefined *)0x0) {
        *puVar5 = uVar3;
        return 0;
      }
      puVar1[1] = 0;
      *puVar1 = 0;
      return 0xc;
    }
    break;
  case 8:
  case 9:
  case 0xc:
    uVar3 = *(undefined *)(*(long *)(param_2 + 0x20) + 0x38);
    puVar1 = (undefined *)(*(long *)(param_1 + 0x28) + lVar2 * 0x18);
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar5 = (undefined *)malloc(8);
    puVar1[2] = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar1[1] = 0;
      *puVar1 = 0;
      return 0xc;
    }
    *puVar5 = uVar3;
    return 0;
  case 10:
  case 0xb:
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 1;
    if (*(long *)(param_2 + 8) == 0) {
      lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x18) + 0x38);
    }
    if (*(long *)(param_2 + 0x10) == 0) {
      lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x18) + 0x38);
    }
    if (lVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("left > -1","lib/regcomp.c",0x5b9,"link_nfa_nodes");
    }
    if (lVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("right > -1","lib/regcomp.c",0x5ba,"link_nfa_nodes");
    }
    puVar1 = (undefined *)(*(long *)(param_1 + 0x28) + lVar2 * 0x18);
    *puVar1 = 2;
    plVar4 = (long *)malloc(0x10);
    puVar1[2] = plVar4;
    if (plVar4 != (long *)0x0) {
      if (lVar6 == lVar7) {
        puVar1[1] = 1;
        *plVar4 = lVar6;
        return 0;
      }
      puVar1[1] = 2;
      if (lVar6 < lVar7) {
        *plVar4 = lVar6;
        plVar4[1] = lVar7;
        return 0;
      }
      *plVar4 = lVar7;
      plVar4[1] = lVar6;
      return 0;
    }
    return 0xc;
  case 0x10:
    break;
  }
  return 0;
}


ulong FUN_00409ac0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_2 + 1;
  if (lVar1 < *(long *)(param_1 + 0x30)) {
    if (*(int *)(*(long *)(param_1 + 0x10) + lVar1 * 4) == -1) {
      uVar3 = 2;
      do {
        uVar2 = uVar3 & 0xffffffff;
        if (uVar3 == *(long *)(param_1 + 0x30) - param_2) {
          return uVar2;
        }
        uVar3 = uVar3 + 1;
      } while (*(int *)(*(long *)(param_1 + 0x10) + lVar1 * 4 + -8 + uVar3 * 4) == -1);
      return uVar2;
    }
  }
  return 1;
}


long FUN_00409b10(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (0 < param_1) {
    lVar1 = *param_2;
    uVar6 = param_1 - 1;
    uVar5 = 0;
    while (uVar5 < uVar6) {
      uVar4 = uVar5 + uVar6 >> 1;
      lVar2 = *(long *)(lVar1 + uVar4 * 8);
      while (uVar3 = uVar4, param_3 <= lVar2) {
        if (uVar3 <= uVar5) goto LAB_00409b4d;
        uVar4 = uVar5 + uVar3 >> 1;
        lVar2 = *(long *)(lVar1 + uVar4 * 8);
        uVar6 = uVar3;
      }
      uVar5 = uVar3 + 1;
    }
LAB_00409b4d:
    if (param_3 == *(long *)(lVar1 + uVar5 * 8)) {
      return uVar5 + 1;
    }
  }
  return 0;
}


undefined FUN_00409b80(long *param_1,long param_2,long param_3,long param_4,uint param_5)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined uVar4;
  long lVar5;
  
  while( true ) {
    lVar2 = FUN_00409b10(*(undefined *)(param_2 + 8),param_2 + 0x10,param_3);
    if (lVar2 != 0) {
      return 0;
    }
    plVar3 = (long *)(param_3 * 0x10 + *param_1);
    if ((*(byte *)(plVar3 + 1) == param_5) && (*plVar3 == param_4)) {
      if (param_5 != 9) {
        return 0;
      }
      cVar1 = FUN_00408500(param_2,param_3);
      if (cVar1 == '\0') {
        return 0xc;
      }
      return 0;
    }
    cVar1 = FUN_00408500(param_2,param_3);
    if (cVar1 == '\0') {
      return 0xc;
    }
    lVar5 = param_1[5] + param_3 * 0x18;
    lVar2 = *(long *)(lVar5 + 8);
    if (lVar2 == 0) break;
    plVar3 = *(long **)(lVar5 + 0x10);
    if (lVar2 == 2) {
      uVar4 = FUN_00409b80(param_1,param_2,plVar3[1],param_4,param_5);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      plVar3 = *(long **)(param_1[5] + 0x10 + param_3 * 0x18);
    }
    param_3 = *plVar3;
  }
  return 0;
}


void FUN_00409c80(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  
  if (param_3 < *param_1) {
    lVar1 = *param_2;
    do {
      *(undefined *)(lVar1 + param_3 * 8) = *(undefined *)(lVar1 + 8 + param_3 * 8);
      param_3 = param_3 + 1;
    } while (param_3 < *param_1);
  }
  return;
}


undefined FUN_00409cb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined uVar4;
  byte bVar5;
  
  if (*(char *)(param_2 + 0x30) == '\x04') {
    if (*(long *)(param_1 + 0xe0) != 0) {
      uVar4 = *(undefined *)(*(long *)(param_1 + 0xe0) + (long)*(int *)(param_2 + 0x28) * 8);
      *(undefined *)(param_2 + 0x28) = uVar4;
      *(ulong *)(param_1 + 0xa0) = *(ulong *)(param_1 + 0xa0) | (long)(1 << ((byte)uVar4 & 0x1f));
      return 0;
    }
  }
  else if (((*(char *)(param_2 + 0x30) == '\x11') && (lVar1 = *(long *)(param_2 + 8), lVar1 != 0))
          && (*(char *)(lVar1 + 0x30) == '\x11')) {
    lVar2 = *(long *)(lVar1 + 0x28);
    plVar3 = *(long **)(lVar1 + 8);
    *(long **)(param_2 + 8) = plVar3;
    if (plVar3 != (long *)0x0) {
      *plVar3 = param_2;
    }
    *(undefined *)(*(long *)(param_1 + 0xe0) + lVar2 * 8) =
         *(undefined *)(*(long *)(param_1 + 0xe0) + *(long *)(param_2 + 0x28) * 8);
    if (lVar2 < 0x40) {
      bVar5 = (byte)lVar2 & 0x3f;
      *(ulong *)(param_1 + 0xa0) =
           *(ulong *)(param_1 + 0xa0) & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
    }
  }
  return 0;
}


undefined FUN_00409d40(undefined param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x30) == '\v') {
    *(long *)(lVar1 + 0x20) = param_2;
    return 0;
  }
  if (*(char *)(param_2 + 0x30) != '\x10') {
    if (lVar1 != 0) {
      *(undefined *)(lVar1 + 0x20) = *(undefined *)(param_2 + 0x20);
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      *(undefined *)(*(long *)(param_2 + 0x10) + 0x20) = *(undefined *)(param_2 + 0x20);
    }
    return 0;
  }
  lVar2 = *(long *)(param_2 + 0x10);
  *(undefined *)(lVar1 + 0x20) = *(undefined *)(lVar2 + 0x18);
  *(undefined *)(lVar2 + 0x20) = *(undefined *)(param_2 + 0x20);
  return 0;
}


undefined
FUN_00409da0(long param_1,long *param_2,long *param_3,undefined param_4,long param_5,
            undefined param_6,long param_7)

{
  long *plVar1;
  undefined uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar1 = *(long **)(param_1 + 0x98);
  lVar11 = *(long *)(param_1 + 200);
  lVar7 = 0;
  lVar8 = lVar11;
  while (lVar7 < lVar8) {
    lVar9 = (lVar7 + lVar8) / 2;
    lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar9 * 0x28);
    while (lVar10 = lVar9, param_5 <= lVar6) {
      if (lVar10 <= lVar7) goto LAB_00409e2b;
      lVar9 = (lVar7 + lVar10) / 2;
      lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar9 * 0x28);
      lVar8 = lVar10;
    }
    lVar7 = lVar10 + 1;
  }
LAB_00409e2b:
  if (lVar7 < lVar11) {
    if (param_5 != *(long *)(*(long *)(param_1 + 0xd8) + lVar7 * 0x28 + 8)) {
      lVar7 = -1;
    }
  }
  else {
    lVar7 = -1;
  }
  lVar8 = 0;
  lVar6 = lVar11;
  while (lVar8 < lVar6) {
    lVar10 = (lVar8 + lVar6) / 2;
    lVar9 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar10 * 0x28);
    while (lVar3 = lVar10, param_7 <= lVar9) {
      if (lVar3 <= lVar8) goto LAB_00409eb4;
      lVar10 = (lVar8 + lVar3) / 2;
      lVar9 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar10 * 0x28);
      lVar6 = lVar3;
    }
    lVar8 = lVar3 + 1;
  }
LAB_00409eb4:
  if (lVar8 < lVar11) {
    if (param_7 != *(long *)(*(long *)(param_1 + 0xd8) + lVar8 * 0x28 + 8)) {
      lVar8 = -1;
    }
  }
  else {
    lVar8 = -1;
  }
  if (0 < *param_2) {
    lVar11 = 0;
    do {
      lVar6 = *(long *)(*param_3 + lVar11 * 8);
      uVar2 = *(undefined *)(*(long *)(*(long *)(param_1 + 0xd8) + lVar6 * 0x28) * 0x10 + *plVar1);
      iVar4 = FUN_00408380(param_1,lVar6,uVar2,param_4,param_5,lVar7);
      iVar5 = FUN_00408380(param_1,*(undefined *)(*param_3 + lVar11 * 8),uVar2,param_6,param_7,
                           lVar8);
      if (iVar4 != iVar5) {
        return 1;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *param_2);
  }
  return 0;
}


void FUN_00409ff0(long *param_1,code *param_2,undefined param_3)

{
  long **pplVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  do {
    do {
      iVar3 = (*param_2)(param_3,param_1);
      if (iVar3 != 0) {
        return;
      }
      pplVar1 = (long **)(param_1 + 1);
      plVar4 = (long *)0x0;
      plVar5 = param_1;
      param_1 = *pplVar1;
    } while (*pplVar1 != (long *)0x0);
    while ((param_1 = (long *)plVar5[2], param_1 == plVar4 || (param_1 == (long *)0x0))) {
      plVar2 = (long *)*plVar5;
      plVar4 = plVar5;
      plVar5 = plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
    }
  } while( true );
}


undefined FUN_0040a050(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if ((param_2 != 0) && (lVar11 = *(long *)(param_2 + 8), lVar11 != 0)) {
    lVar7 = param_1[1];
    if (*param_1 < lVar7 + lVar11 * 2) {
      lVar11 = lVar11 + *param_1;
      pvVar6 = realloc((void *)param_1[2],lVar11 * 0x10);
      if (pvVar6 == (void *)0x0) {
        return 0xc;
      }
      lVar7 = param_1[1];
      param_1[2] = (long)pvVar6;
      *param_1 = lVar11 * 2;
      lVar11 = *(long *)(param_2 + 8);
    }
    if (lVar7 == 0) {
      pvVar6 = *(void **)(param_2 + 0x10);
      param_1[1] = lVar11;
      memcpy((void *)param_1[2],pvVar6,*(long *)(param_2 + 8) * 8);
    }
    else {
      lVar9 = lVar7 + lVar11 * 2;
      uVar4 = lVar11 - 1;
      lVar7 = lVar7 + -1;
      uVar10 = ~uVar4;
      uVar3 = uVar10;
      while (((long)uVar3 < 0 && (-1 < lVar7))) {
        lVar11 = *(long *)(*(long *)(param_2 + 0x10) + uVar4 * 8);
        plVar1 = (long *)(param_1[2] + lVar7 * 8);
        if (*plVar1 == lVar11) {
          uVar4 = uVar4 - 1;
          lVar7 = lVar7 + -1;
          uVar10 = ~uVar4;
          uVar3 = uVar10;
        }
        else if (*plVar1 < lVar11) {
          uVar4 = uVar4 - 1;
          lVar9 = lVar9 + -1;
          *(long *)(param_1[2] + lVar9 * 8) = lVar11;
          uVar10 = ~uVar4;
          uVar3 = uVar4;
        }
        else {
          lVar7 = lVar7 + -1;
          uVar3 = uVar10;
        }
      }
      if (-1 < (long)uVar4) {
        lVar9 = lVar9 - (uVar4 + 1);
        memcpy((void *)(param_1[2] + lVar9 * 8),*(void **)(param_2 + 0x10),(uVar4 + 1) * 8);
      }
      lVar7 = param_1[1];
      lVar11 = lVar7 + -1 + *(long *)(param_2 + 8) * 2;
      lVar8 = (lVar11 - lVar9) + 1;
      if (lVar8 != 0) {
        lVar5 = lVar7 + -1;
        pvVar6 = (void *)param_1[2];
        param_1[1] = lVar7 + lVar8;
        do {
          while( true ) {
            lVar7 = *(long *)((long)pvVar6 + lVar11 * 8);
            lVar2 = *(long *)((long)pvVar6 + lVar5 * 8);
            plVar1 = (long *)((long)pvVar6 + (lVar5 + lVar8) * 8);
            if (lVar2 < lVar7) break;
            *plVar1 = lVar2;
            lVar5 = lVar5 + -1;
            if (lVar5 < 0) {
              memcpy(pvVar6,(void *)((long)pvVar6 + lVar9 * 8),lVar8 << 3);
              return 0;
            }
          }
          lVar11 = lVar11 + -1;
          *plVar1 = lVar7;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    return 0;
  }
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined FUN_0040a220(undefined *param_1,long *param_2,long param_3,char param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined *puVar5;
  undefined uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined local_78;
  undefined uStack_70;
  void *local_68;
  undefined local_58;
  undefined uStack_50;
  void *local_48;
  
  lVar9 = param_3 * 0x18;
  lVar8 = param_2[5] + lVar9;
  uStack_70 = 0;
  local_78 = *(long *)(lVar8 + 8) + 1;
  local_68 = malloc(local_78 * 8);
  if (local_68 == (void *)0x0) {
    return 0xc;
  }
  lVar10 = *param_2;
  *(undefined *)(param_2[6] + 8 + lVar9) = 0xffffffffffffffff;
  lVar7 = lVar10 + param_3 * 0x10;
  if ((*(uint *)(lVar7 + 8) & 0x3ff00) == 0) {
LAB_0040a2a4:
    if ((*(byte *)(lVar7 + 8) & 8) == 0) goto LAB_0040a410;
    lVar7 = param_2[5];
    lVar8 = lVar7 + lVar9;
    if (*(long *)(lVar8 + 8) < 1) goto LAB_0040a410;
    lVar10 = 0;
    bVar3 = false;
    do {
      while( true ) {
        bVar2 = bVar3;
        lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar10 * 8) * 0x18;
        puVar5 = (undefined *)(param_2[6] + lVar8);
        if (puVar5[1] == -1) break;
        if (puVar5[1] == 0) {
          uVar6 = FUN_0040a220(&local_58,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
        else {
          local_58 = *puVar5;
          uStack_50 = puVar5[1];
          local_48 = (void *)puVar5[2];
        }
        uVar6 = FUN_0040a050(&local_78,&local_58);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (*(long *)(param_2[6] + 8 + lVar8) == 0) {
          bVar2 = true;
          free(local_48);
        }
        lVar7 = param_2[5];
        lVar10 = lVar10 + 1;
        lVar8 = lVar7 + lVar9;
        bVar3 = bVar2;
        if (*(long *)(lVar8 + 8) == lVar10 || *(long *)(lVar8 + 8) < lVar10) goto LAB_0040a38c;
      }
      lVar8 = lVar7 + lVar9;
      bVar2 = true;
      lVar10 = lVar10 + 1;
      bVar3 = true;
    } while (*(long *)(lVar8 + 8) != lVar10 && lVar10 <= *(long *)(lVar8 + 8));
LAB_0040a38c:
    cVar4 = FUN_00408500(&local_78,param_3);
    if (cVar4 == '\0') {
      return 0xc;
    }
    lVar8 = param_2[6];
    if ((param_4 != '\x01') && (bVar2)) {
      *(undefined *)(lVar8 + lVar9 + 8) = 0;
      goto LAB_0040a439;
    }
  }
  else {
    if (*(long *)(lVar8 + 8) != 0) {
      if ((*(byte *)(lVar10 + 10 + **(long **)(lVar8 + 0x10) * 0x10) & 4) == 0) {
        uVar6 = FUN_00409450(param_2,param_3,param_3,param_3,*(uint *)(lVar7 + 8) >> 8 & 0x3ff);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        lVar7 = *param_2 + param_3 * 0x10;
      }
      goto LAB_0040a2a4;
    }
LAB_0040a410:
    cVar4 = FUN_00408500(&local_78,param_3);
    if (cVar4 == '\0') {
      return 0xc;
    }
    lVar8 = param_2[6];
  }
  puVar1 = (undefined *)(lVar8 + lVar9);
  *puVar1 = (undefined)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  *(void **)(lVar8 + 0x10 + lVar9) = local_68;
LAB_0040a439:
  *(void **)(param_1 + 4) = local_68;
  *param_1 = (undefined)local_78;
  param_1[1] = local_78._4_4_;
  param_1[2] = (undefined)uStack_70;
  param_1[3] = uStack_70._4_4_;
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

int FUN_0040a480(long *param_1,undefined *param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined local_48;
  undefined uStack_40;
  void *local_38;
  
  lVar8 = *(long *)(param_2 + 2);
  uStack_40 = 0;
  local_48 = lVar8;
  local_38 = malloc(lVar8 * 8);
  if (local_38 == (void *)0x0) {
    return 0xc;
  }
  if (0 < lVar8) {
    lVar8 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_2 + 4) + lVar8 * 8);
      lVar1 = param_1[6] + lVar2 * 0x18;
      lVar3 = *(long *)(lVar1 + 8);
      if (0 < lVar3) {
        lVar7 = 0;
        do {
          lVar4 = *(long *)(*(long *)(lVar1 + 0x10) + lVar7 * 8);
          plVar6 = (long *)(lVar4 * 0x10 + *param_1);
          if ((param_4 == *(byte *)(plVar6 + 1)) && (param_3 == *plVar6)) {
            if (lVar4 != -1) {
              iVar5 = FUN_00409b80(param_1,&local_48,lVar2,param_3,param_4);
              if (iVar5 == 0) goto LAB_0040a543;
              goto LAB_0040a58e;
            }
            break;
          }
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
      }
      iVar5 = FUN_0040a050(&local_48);
      if (iVar5 != 0) {
LAB_0040a58e:
        free(local_38);
        return iVar5;
      }
LAB_0040a543:
      lVar8 = lVar8 + 1;
    } while (*(long *)(param_2 + 2) != lVar8 && lVar8 <= *(long *)(param_2 + 2));
  }
  free(*(void **)(param_2 + 4));
  *(void **)(param_2 + 4) = local_38;
  *param_2 = (undefined)local_48;
  param_2[1] = local_48._4_4_;
  param_2[2] = (undefined)uStack_40;
  param_2[3] = uStack_40._4_4_;
  return 0;
}


undefined FUN_0040a5c0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  size_t __n;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  lVar5 = *(long *)(param_2 + 8);
  if ((lVar5 == 0) || (lVar8 = *(long *)(param_3 + 8), lVar8 == 0)) {
    return 0;
  }
  lVar6 = param_1[1];
  __ptr = (void *)param_1[2];
  if (*param_1 < lVar5 + lVar8 + lVar6) {
    lVar8 = *param_1 + lVar5 + lVar8;
    __ptr = realloc(__ptr,lVar8 * 8);
    if (__ptr == (void *)0x0) {
      return 0xc;
    }
    lVar6 = param_1[1];
    lVar5 = *(long *)(param_2 + 8);
    param_1[2] = (long)__ptr;
    *param_1 = lVar8;
    lVar8 = *(long *)(param_3 + 8);
  }
  lVar7 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_3 + 0x10);
  lVar4 = lVar8 + -1;
  lVar10 = lVar5 + -1;
  lVar8 = lVar6 + lVar5 + lVar8;
  lVar6 = lVar6 + -1;
  lVar9 = *(long *)(lVar7 + lVar10 * 8);
  lVar5 = *(long *)(lVar2 + lVar4 * 8);
  do {
    bVar11 = SBORROW8(lVar9,lVar5);
    lVar3 = lVar9 - lVar5;
    if (lVar9 == lVar5) goto LAB_0040a646;
    while (bVar11 != lVar3 < 0) {
      lVar4 = lVar4 + -1;
      if (lVar4 < 0) goto LAB_0040a6a0;
      while( true ) {
        lVar5 = *(long *)(lVar2 + lVar4 * 8);
        bVar11 = SBORROW8(lVar9,lVar5);
        lVar3 = lVar9 - lVar5;
        if (lVar3 != 0) break;
LAB_0040a646:
        if (-1 < lVar6) {
          do {
            lVar5 = *(long *)((long)__ptr + lVar6 * 8);
            if (lVar5 <= lVar9) {
              if (lVar5 == lVar9) goto LAB_0040a670;
              break;
            }
            lVar6 = lVar6 + -1;
          } while (lVar6 != -1);
        }
        lVar8 = lVar8 + -1;
        *(long *)((long)__ptr + lVar8 * 8) = lVar9;
LAB_0040a670:
        lVar10 = lVar10 + -1;
        if ((lVar10 < 0) || (lVar4 = lVar4 + -1, lVar4 < 0)) goto LAB_0040a6a0;
        lVar9 = *(long *)(lVar7 + lVar10 * 8);
      }
    }
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
    lVar9 = *(long *)(lVar7 + lVar10 * 8);
  } while( true );
LAB_0040a6a0:
  lVar4 = param_1[1];
  lVar7 = *(long *)(param_2 + 8) + lVar4 + *(long *)(param_3 + 8);
  lVar5 = lVar4 + -1;
  lVar6 = lVar7 + -1;
  lVar7 = lVar7 - lVar8;
  param_1[1] = lVar4 + lVar7;
  if ((lVar7 < 1) || (lVar5 < 0)) {
    __n = lVar7 * 8;
  }
  else {
    do {
      while( true ) {
        lVar4 = *(long *)((long)__ptr + lVar6 * 8);
        lVar2 = *(long *)((long)__ptr + lVar5 * 8);
        plVar1 = (long *)((long)__ptr + (lVar5 + lVar7) * 8);
        if (lVar4 <= lVar2) break;
        lVar6 = lVar6 + -1;
        *plVar1 = lVar4;
        lVar7 = lVar7 + -1;
        if (lVar7 == 0) {
          __ptr = (void *)param_1[2];
          __n = 0;
          goto LAB_0040a724;
        }
      }
      lVar5 = lVar5 + -1;
      *plVar1 = lVar2;
    } while (lVar5 != -1);
    __n = lVar7 << 3;
    __ptr = (void *)param_1[2];
  }
LAB_0040a724:
  memcpy(__ptr,(void *)((long)__ptr + lVar8 * 8),__n);
  return 0;
}


long FUN_0040a780(undefined *param_1,int *param_2,long *param_3,long *param_4,undefined *param_5)

{
  byte *pbVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  iVar6 = *param_2;
  lVar9 = (long)iVar6;
  if (iVar6 == 0xf) {
    puVar7 = (undefined *)malloc(0x3c8);
    if (puVar7 == (undefined *)0x0) {
      return 0;
    }
    uVar2 = *param_1;
    lVar10 = 8;
    *param_1 = puVar7;
    lVar9 = 0;
    *puVar7 = uVar2;
    iVar6 = 1;
  }
  else {
    puVar7 = (undefined *)*param_1;
    iVar6 = iVar6 + 1;
    lVar10 = lVar9 * 0x40 + 8;
  }
  *param_2 = iVar6;
  lVar10 = (long)puVar7 + lVar10;
  lVar8 = lVar9 * 0x40;
  puVar7[lVar9 * 8 + 1] = 0;
  puVar7[lVar9 * 8 + 2] = param_3;
  puVar7[lVar9 * 8 + 3] = param_4;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined *)(puVar7 + lVar9 * 8 + 6) = *param_5;
  *(undefined *)((long)puVar7 + lVar8 + 0x34) = uVar3;
  *(undefined *)(puVar7 + lVar9 * 8 + 7) = uVar4;
  *(undefined *)((long)puVar7 + lVar8 + 0x3c) = uVar5;
  pbVar1 = (byte *)((long)puVar7 + lVar8 + 0x3a);
  *pbVar1 = *pbVar1 & 0xf3;
  puVar7[lVar9 * 8 + 4] = 0;
  puVar7[lVar9 * 8 + 5] = 0;
  puVar7[lVar9 * 8 + 8] = 0xffffffffffffffff;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar10;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar10;
  }
  return lVar10;
}


undefined FUN_0040a860(long **param_1,long param_2)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  long ***ppplVar4;
  long **local_30;
  
  pplVar3 = (long **)*param_1;
  ppplVar4 = &local_30;
  do {
    while( true ) {
      pplVar2 = (long **)FUN_0040a780(param_2 + 0x70,param_2 + 0x80,0,0,param_1 + 5);
      *ppplVar4 = pplVar2;
      if (pplVar2 == (long **)0x0) {
        return 0;
      }
      *pplVar2 = (long *)pplVar3;
      pplVar3 = *ppplVar4;
      *(byte *)((long)pplVar3 + 0x32) = *(byte *)((long)pplVar3 + 0x32) | 4;
      if ((long **)param_1[1] == (long **)0x0) break;
      ppplVar4 = (long ***)(pplVar3 + 1);
      param_1 = (long **)param_1[1];
    }
    pplVar2 = (long **)0x0;
    while ((pplVar1 = (long **)param_1[2], pplVar1 == (long **)0x0 || (pplVar1 == pplVar2))) {
      pplVar1 = (long **)*param_1;
      pplVar3 = (long **)*pplVar3;
      pplVar2 = param_1;
      param_1 = pplVar1;
      if (pplVar1 == (long **)0x0) {
        return local_30;
      }
    }
    ppplVar4 = (long ***)(pplVar3 + 2);
    param_1 = pplVar1;
  } while( true );
}


long FUN_0040a910(undefined *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_60;
  undefined local_48 [8];
  undefined local_40;
  
  lVar7 = *param_2;
  lVar1 = *(long *)(param_3 + 8);
  if ((*(byte *)(param_2 + 7) & 0x10) == 0) {
    local_40 = 8;
    lVar4 = FUN_0040a780(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
    local_40 = 9;
    lVar6 = FUN_0040a780(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
    lVar5 = lVar6;
    if (lVar1 == 0) goto LAB_0040a9c9;
  }
  else {
    if (lVar1 == 0) {
      local_40 = 8;
      lVar4 = FUN_0040a780(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
      local_40 = 9;
      lVar6 = FUN_0040a780(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
      lVar5 = lVar6;
      goto LAB_0040a9c9;
    }
    if (0x3f < (long)*(ulong *)(param_3 + 0x28)) {
      return lVar1;
    }
    if ((*(ulong *)(lVar7 + 0xa0) >> (*(ulong *)(param_3 + 0x28) & 0x3f) & 1) == 0) {
      return lVar1;
    }
    local_40 = 8;
    lVar4 = FUN_0040a780(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
    local_40 = 9;
    lVar5 = FUN_0040a780(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
  }
  local_60 = lVar7 + 0x80;
  local_40 = 0x10;
  lVar6 = FUN_0040a780(lVar7 + 0x70,local_60,lVar1,lVar5,local_48);
LAB_0040a9c9:
  local_60 = lVar7 + 0x80;
  local_40 = 0x10;
  lVar7 = FUN_0040a780(lVar7 + 0x70,local_60,lVar4,lVar6,local_48);
  if ((((lVar7 == 0) || (lVar6 == 0)) || (lVar4 == 0)) || (lVar5 == 0)) {
    lVar7 = 0;
    *param_1 = 0xc;
  }
  else {
    uVar2 = *(undefined *)(param_3 + 0x28);
    *(undefined *)(lVar5 + 0x28) = uVar2;
    *(undefined *)(lVar4 + 0x28) = uVar2;
    bVar3 = *(byte *)(param_3 + 0x32) & 8;
    *(byte *)(lVar5 + 0x32) = *(byte *)(lVar5 + 0x32) & 0xf7 | bVar3;
    *(byte *)(lVar4 + 0x32) = *(byte *)(lVar4 + 0x32) & 0xf7 | bVar3;
  }
  return lVar7;
}


undefined FUN_0040ab30(undefined param_1,long param_2)

{
  long *plVar1;
  undefined local_1c [3];
  
  local_1c[0] = 0;
  if ((*(long *)(param_2 + 8) != 0) && (*(char *)(*(long *)(param_2 + 8) + 0x30) == '\x11')) {
    plVar1 = (long *)FUN_0040a910(local_1c,param_1);
    *(long **)(param_2 + 8) = plVar1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = param_2;
    }
  }
  if ((*(long *)(param_2 + 0x10) != 0) && (*(char *)(*(long *)(param_2 + 0x10) + 0x30) == '\x11')) {
    plVar1 = (long *)FUN_0040a910(local_1c,param_1);
    *(long **)(param_2 + 0x10) = plVar1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = param_2;
    }
  }
  return local_1c[0];
}


undefined FUN_0040abb0(undefined (*param_1) [16],long param_2)

{
  long lVar1;
  void *__dest;
  undefined uVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  *(long *)(*param_1 + 8) = lVar1;
  if (0 < lVar1) {
    *(long *)*param_1 = lVar1;
    __dest = malloc(lVar1 * 8);
    *(void **)param_1[1] = __dest;
    if (__dest == (void *)0x0) {
      *(undefined *)(*param_1 + 8) = 0;
      uVar2 = 0xc;
      *(undefined *)*param_1 = 0;
    }
    else {
      memcpy(__dest,*(void **)(param_2 + 0x10),lVar1 * 8);
      uVar2 = 0;
    }
    return uVar2;
  }
  *(undefined *)param_1[1] = 0;
  *param_1 = (undefined)0x0;
  return 0;
}


undefined FUN_0040ac30(undefined (*param_1) [16],long param_2,long param_3)

{
  long *__src;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *__dest;
  long lVar10;
  
  if (param_2 != 0) {
    lVar9 = *(long *)(param_2 + 8);
    if ((param_3 != 0) && (0 < lVar9)) {
      lVar1 = *(long *)(param_3 + 8);
      if (0 < lVar1) {
        *(long *)*param_1 = lVar9 + lVar1;
        plVar5 = (long *)malloc((lVar9 + lVar1) * 8);
        *(long **)param_1[1] = plVar5;
        if (plVar5 == (long *)0x0) {
          return 0xc;
        }
        lVar2 = *(long *)(param_2 + 0x10);
        lVar10 = 0;
        lVar7 = 0;
        lVar8 = 0;
        __dest = plVar5;
        do {
          __src = (long *)(lVar2 + lVar8 * 8);
          if (lVar1 <= lVar7) {
            lVar10 = lVar10 + (lVar9 - lVar8);
            memcpy(__dest,__src,(lVar9 - lVar8) * 8);
            goto LAB_0040ad59;
          }
          lVar3 = *(long *)(param_3 + 0x10);
          lVar9 = *__src;
          lVar10 = lVar10 + 1;
          lVar4 = *(long *)(lVar3 + lVar7 * 8);
          if (lVar4 < lVar9) {
            lVar7 = lVar7 + 1;
            *__dest = lVar4;
          }
          else {
            *__dest = lVar9;
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + (ulong)(lVar9 == lVar4);
          }
          lVar9 = *(long *)(param_2 + 8);
          __dest = __dest + 1;
        } while (lVar8 < lVar9);
        if (lVar7 < *(long *)(param_3 + 8)) {
          plVar5 = plVar5 + lVar10;
          lVar9 = *(long *)(param_3 + 8) - lVar7;
          lVar10 = lVar10 + lVar9;
          memcpy(plVar5,(void *)(lVar3 + lVar7 * 8),lVar9 * 8);
        }
LAB_0040ad59:
        *(long *)(*param_1 + 8) = lVar10;
        return 0;
      }
      goto LAB_0040ad33;
    }
    if (0 < lVar9) goto LAB_0040ad33;
  }
  if ((param_3 == 0) || (param_2 = param_3, *(long *)(param_3 + 8) < 1)) {
    *(undefined *)param_1[1] = 0;
    *param_1 = (undefined)0x0;
    return 0;
  }
LAB_0040ad33:
  uVar6 = FUN_0040abb0(param_1,param_2);
  return uVar6;
}


ulong * FUN_0040adc0(undefined *param_1,long *param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  ulong *puVar9;
  void *pvVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  lVar14 = *(long *)(param_3 + 8);
  if (lVar14 == 0) {
    *param_1 = 0;
  }
  else {
    uVar15 = (ulong)param_4 + lVar14;
    if (0 < lVar14) {
      plVar8 = *(long **)(param_3 + 0x10);
      plVar2 = plVar8 + lVar14;
      do {
        uVar15 = uVar15 + *plVar8;
        plVar8 = plVar8 + 1;
      } while (plVar2 != plVar8);
    }
    plVar2 = (long *)(param_2[8] + (param_2[0x11] & uVar15) * 0x18);
    lVar14 = *plVar2;
    if (0 < lVar14) {
      lVar16 = plVar2[2];
      lVar13 = 0;
      uVar12 = (ulong)param_4;
      do {
        puVar9 = *(ulong **)(lVar16 + lVar13 * 8);
        if (((*puVar9 == uVar15) && ((*(byte *)(puVar9 + 0xd) & 0xf) == (uint)uVar12)) &&
           (cVar5 = FUN_00407f60(puVar9[10],param_3), cVar5 != '\0')) {
          return puVar9;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar14);
    }
    puVar9 = (ulong *)calloc(0x70,1);
    if (puVar9 != (ulong *)0x0) {
      puVar1 = puVar9 + 1;
      iVar7 = FUN_0040abb0(puVar1,param_3);
      if (iVar7 == 0) {
        lVar14 = *(long *)(param_3 + 8);
        *(byte *)(puVar9 + 0xd) = *(byte *)(puVar9 + 0xd) & 0xf0 | (byte)param_4 & 0xf;
        puVar9[10] = (ulong)puVar1;
        if (0 < lVar14) {
          lVar16 = 0;
          lVar14 = 0;
          do {
            lVar13 = *(long *)(*(long *)(param_3 + 0x10) + lVar16 * 8) * 0x10 + *param_2;
            uVar3 = *(uint *)(lVar13 + 8);
            cVar5 = *(char *)(lVar13 + 8);
            uVar11 = uVar3 >> 8;
            if ((cVar5 != '\x01') || ((uVar3 & 0x3ff00) != 0)) {
              bVar6 = (byte)(((byte)(*(byte *)(lVar13 + 10) >> 4 | *(byte *)(puVar9 + 0xd) >> 5) & 1
                             ) << 5) | *(byte *)(puVar9 + 0xd) & 0xdf;
              *(byte *)(puVar9 + 0xd) = bVar6;
              if (cVar5 == '\x02') {
                *(byte *)(puVar9 + 0xd) = bVar6 | 0x10;
              }
              else if (cVar5 == '\x04') {
                *(byte *)(puVar9 + 0xd) = bVar6 | 0x40;
              }
              if ((uVar3 & 0x3ff00) != 0) {
                if (puVar1 == (ulong *)puVar9[10]) {
                  pvVar10 = malloc(0x18);
                  puVar9[10] = (ulong)pvVar10;
                  if (pvVar10 == (void *)0x0) {
                    FUN_004096e0(puVar9);
                    goto LAB_0040b018;
                  }
                  iVar7 = FUN_0040abb0(pvVar10,param_3);
                  if (iVar7 != 0) goto LAB_0040b018;
                  *(byte *)(puVar9 + 0xd) = *(byte *)(puVar9 + 0xd) | 0x80;
                  lVar14 = 0;
                }
                if ((uVar3 & 0x100) == 0) {
                  if ((uVar11 & 2) != 0) {
                    uVar4 = param_4 & 1;
                    goto joined_r0x0040b04d;
                  }
LAB_0040af93:
                  if ((((uVar11 & 0x10) == 0) || ((param_4 & 2) != 0)) &&
                     (((uVar3 & 0x4000) == 0 || ((param_4 & 4) != 0)))) goto LAB_0040afde;
                }
                else if ((param_4 & 1) != 0) {
                  uVar4 = uVar11 & 2;
joined_r0x0040b04d:
                  if (uVar4 == 0) goto LAB_0040af93;
                }
                if ((-1 < lVar16 - lVar14) && (lVar16 - lVar14 < (long)puVar9[2])) {
                  puVar9[2] = puVar9[2] - 1;
                  FUN_00409c80(puVar9 + 2,puVar9 + 3);
                }
                lVar14 = lVar14 + 1;
              }
            }
LAB_0040afde:
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(long *)(param_3 + 8));
        }
        iVar7 = FUN_00408630(param_2,puVar9,uVar15);
        if (iVar7 == 0) {
          return puVar9;
        }
        FUN_004096e0(puVar9);
      }
      else {
        free(puVar9);
      }
    }
LAB_0040b018:
    *param_1 = 0xc;
  }
  return (ulong *)0x0;
}


ulong * FUN_0040b0c0(undefined *param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar8 = *(ulong *)(param_3 + 8);
  if (uVar8 == 0) {
    *param_1 = 0;
  }
  else {
    if (0 < (long)uVar8) {
      plVar4 = *(long **)(param_3 + 0x10);
      plVar1 = plVar4 + uVar8;
      do {
        uVar8 = uVar8 + *plVar4;
        plVar4 = plVar4 + 1;
      } while (plVar1 != plVar4);
    }
    plVar1 = (long *)(param_2[8] + (param_2[0x11] & uVar8) * 0x18);
    lVar6 = *plVar1;
    if (0 < lVar6) {
      lVar10 = plVar1[2];
      lVar9 = 0;
      do {
        puVar5 = *(ulong **)(lVar10 + lVar9 * 8);
        if ((*puVar5 == uVar8) && (cVar2 = FUN_00407f60(puVar5 + 1,param_3), cVar2 != '\0')) {
          return puVar5;
        }
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
    }
    puVar5 = (ulong *)calloc(0x70,1);
    if (puVar5 != (ulong *)0x0) {
      iVar3 = FUN_0040abb0(puVar5 + 1,param_3);
      if (iVar3 == 0) {
        lVar6 = *(long *)(param_3 + 8);
        puVar5[10] = (ulong)(puVar5 + 1);
        if (0 < lVar6) {
          plVar4 = *(long **)(param_3 + 0x10);
          lVar10 = *param_2;
          plVar1 = plVar4 + lVar6;
          do {
            while( true ) {
              lVar6 = *plVar4 * 0x10 + lVar10;
              cVar2 = *(char *)(lVar6 + 8);
              if (cVar2 == '\x01') break;
              bVar7 = (byte)(((byte)(*(byte *)(lVar6 + 10) >> 4 | *(byte *)(puVar5 + 0xd) >> 5) & 1)
                            << 5) | *(byte *)(puVar5 + 0xd) & 0xdf;
              *(byte *)(puVar5 + 0xd) = bVar7;
              if (cVar2 == '\x02') {
                *(byte *)(puVar5 + 0xd) = bVar7 | 0x10;
              }
              else if (cVar2 == '\x04') {
                *(byte *)(puVar5 + 0xd) = bVar7 | 0x40;
              }
              else if ((cVar2 == '\f') || ((*(uint *)(lVar6 + 8) & 0x3ff00) != 0))
              goto LAB_0040b220;
LAB_0040b1db:
              plVar4 = plVar4 + 1;
              if (plVar1 == plVar4) goto LAB_0040b22d;
            }
            if ((*(uint *)(lVar6 + 8) & 0x3ff00) == 0) goto LAB_0040b1db;
            *(byte *)(puVar5 + 0xd) =
                 (byte)(((byte)(*(byte *)(lVar6 + 10) >> 4 | *(byte *)(puVar5 + 0xd) >> 5) & 1) << 5
                       ) | *(byte *)(puVar5 + 0xd) & 0xdf;
LAB_0040b220:
            plVar4 = plVar4 + 1;
            *(byte *)(puVar5 + 0xd) = *(byte *)(puVar5 + 0xd) | 0x80;
          } while (plVar1 != plVar4);
        }
LAB_0040b22d:
        iVar3 = FUN_00408630(param_2,puVar5,uVar8);
        if (iVar3 == 0) {
          return puVar5;
        }
        FUN_004096e0(puVar5);
      }
      else {
        free(puVar5);
      }
    }
    *param_1 = 0xc;
  }
  return (ulong *)0x0;
}


ulong FUN_0040b2b0(undefined param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined uVar4;
  long lVar5;
  uint local_4c;
  undefined local_48 [16];
  void *local_38;
  
  if (param_4 < 1) {
    return 0;
  }
  lVar5 = 0;
  do {
    while( true ) {
      lVar1 = *(long *)(param_2 + lVar5 * 8);
      lVar2 = *(long *)(param_3 + lVar5 * 8);
      if (lVar1 != 0) break;
      *(long *)(param_2 + lVar5 * 8) = lVar2;
      lVar5 = lVar5 + 1;
      if (param_4 == lVar5) {
        return 0;
      }
    }
    if (lVar2 != 0) {
      uVar3 = FUN_0040ac30(local_48,lVar1 + 8,lVar2 + 8);
      local_4c = (uint)uVar3;
      if (local_4c != 0) {
        return uVar3;
      }
      uVar4 = FUN_0040b0c0(&local_4c,param_1,local_48);
      *(undefined *)(param_2 + lVar5 * 8) = uVar4;
      free(local_38);
      if (local_4c != 0) {
        return (ulong)local_4c;
      }
    }
    lVar5 = lVar5 + 1;
    if (param_4 == lVar5) {
      return 0;
    }
  } while( true );
}


uint FUN_0040b360(long param_1,long param_2,long param_3,undefined param_4,undefined param_5)

{
  long lVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined uVar10;
  long lVar11;
  long *plVar12;
  uint local_5c;
  undefined local_58;
  undefined local_50;
  undefined *local_48;
  
  lVar11 = 0;
  lVar7 = *(long *)(param_1 + 200);
  while (lVar11 < lVar7) {
    lVar8 = (lVar11 + lVar7) / 2;
    lVar1 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar8 * 0x28);
    while (lVar6 = lVar8, param_3 <= lVar1) {
      if (lVar6 <= lVar11) goto LAB_0040b3db;
      lVar8 = (lVar6 + lVar11) / 2;
      lVar1 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar8 * 0x28);
      lVar7 = lVar6;
    }
    lVar11 = lVar6 + 1;
  }
LAB_0040b3db:
  if (lVar11 < *(long *)(param_1 + 200)) {
    lVar7 = *(long *)(param_1 + 0xd8);
    if ((*(long *)(lVar7 + 8 + lVar11 * 0x28) == param_3) && (lVar11 != -1)) {
      lVar1 = *(long *)(param_1 + 0x98);
LAB_0040b433:
      plVar12 = (long *)(lVar7 + lVar11 * 0x28);
      do {
        lVar7 = *plVar12;
        uVar10 = *(undefined *)(param_2 + 8);
        lVar8 = FUN_00409b10(uVar10,param_2 + 0x10,lVar7);
        if (lVar8 != 0) {
          lVar8 = (plVar12[3] + param_3) - plVar12[2];
          if (param_3 == lVar8) {
            uVar2 = **(undefined **)(*(long *)(lVar1 + 0x28) + lVar7 * 0x18 + 0x10);
            lVar7 = FUN_00409b10(uVar10,param_2 + 0x10,uVar2);
            if (lVar7 == 0) goto code_r0x0040b572;
          }
          else {
            uVar10 = *(undefined *)(*(long *)(lVar1 + 0x18) + lVar7 * 8);
            plVar9 = (long *)(*(long *)(param_1 + 0xb8) + lVar8 * 8);
            lVar7 = *plVar9;
            if (lVar7 == 0) {
              local_58 = 1;
              local_50 = 1;
              local_48 = (undefined *)malloc(8);
              if (local_48 == (undefined *)0x0) {
                return 0xc;
              }
              local_5c = 0;
              *local_48 = uVar10;
            }
            else {
              lVar6 = FUN_00409b10(*(undefined *)(lVar7 + 0x10),lVar7 + 0x18,uVar10);
              if (lVar6 != 0) goto LAB_0040b509;
              local_5c = FUN_0040abb0(&local_58,lVar7 + 8);
              cVar3 = FUN_00408500(&local_58,uVar10);
              if ((local_5c != 0) || (cVar3 != '\x01')) {
                free(local_48);
                if (local_5c == 0) {
                  return 0xc;
                }
                return local_5c;
              }
              plVar9 = (long *)(lVar8 * 8 + *(long *)(param_1 + 0xb8));
            }
            lVar7 = FUN_0040b0c0(&local_5c,lVar1,&local_58);
            *plVar9 = lVar7;
            free(local_48);
            if ((*(long *)(*(long *)(param_1 + 0xb8) + lVar8 * 8) == 0) && (local_5c != 0)) {
              return local_5c;
            }
          }
        }
LAB_0040b509:
        plVar9 = plVar12 + 4;
        plVar12 = plVar12 + 5;
        if (*(char *)plVar9 == '\0') {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
code_r0x0040b572:
  local_58 = 1;
  local_50 = 1;
  local_48 = (undefined *)malloc(8);
  if (local_48 == (undefined *)0x0) {
    local_50 = 0;
    local_5c = 0xc;
    local_58 = 0;
  }
  else {
    *local_48 = uVar2;
    local_5c = 0;
  }
  uVar4 = FUN_0040a480(lVar1,&local_58,param_4,param_5);
  uVar5 = FUN_0040a050(param_2,&local_58);
  free(local_48);
  if ((uVar4 | uVar5 | local_5c) != 0) {
    if (local_5c != 0) {
      return local_5c;
    }
    if (uVar4 != 0) {
      return uVar4;
    }
    return uVar5;
  }
  lVar7 = *(long *)(param_1 + 0xd8);
  goto LAB_0040b433;
}


undefined FUN_0040b6f0(long param_1,long *param_2,long *param_3,undefined param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined *puVar6;
  void *__ptr;
  long lVar7;
  long lVar8;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (0 < *param_2) {
    lVar8 = 0;
    do {
      while( true ) {
        lVar2 = *(long *)(*param_3 + lVar8 * 8);
        puVar5 = (ulong *)(lVar2 * 0x10 + *plVar1);
        if (((*(char *)(puVar5 + 1) == '\b') && (uVar3 = *puVar5, (long)uVar3 < 0x40)) &&
           (((ulong)plVar1[0x14] >> (uVar3 & 0x3f) & 1) != 0)) break;
        lVar8 = lVar8 + 1;
        if (*param_2 <= lVar8) {
          return 0;
        }
      }
      lVar7 = *(long *)(param_1 + 0xe8);
      __ptr = *(void **)(param_1 + 0xf8);
      if (lVar7 == *(long *)(param_1 + 0xf0)) {
        lVar4 = lVar7 * 2;
        __ptr = realloc(__ptr,lVar7 << 4);
        if (__ptr == (void *)0x0) {
          return 0xc;
        }
        *(void **)(param_1 + 0xf8) = __ptr;
        lVar7 = *(long *)(param_1 + 0xe8);
        *(long *)(param_1 + 0xf0) = lVar4;
      }
      puVar6 = (undefined *)calloc(1,0x30);
      *(undefined **)((long)__ptr + lVar7 * 8) = puVar6;
      if (puVar6 == (undefined *)0x0) {
        return 0xc;
      }
      *puVar6 = param_4;
      lVar8 = lVar8 + 1;
      puVar6[1] = lVar2;
      *(long *)(param_1 + 0xe8) = lVar7 + 1;
    } while (lVar8 < *param_2);
  }
  return 0;
}


int FUN_0040b840(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  wint_t __wc;
  int iVar2;
  
  if (param_2 < 0) {
LAB_0040b8f0:
    return *(int *)(param_1 + 0x70);
  }
  if (*(long *)(param_1 + 0x58) == param_2) {
    iVar2 = (-(uint)((param_3 & 2) == 0) & 2) + 8;
  }
  else {
    if (1 < *(int *)(param_1 + 0x90)) {
      do {
        __wc = *(wint_t *)(*(long *)(param_1 + 0x10) + param_2 * 4);
        if (__wc != 0xffffffff) {
          if ((*(char *)(param_1 + 0x8e) != '\0') &&
             ((iVar2 = iswalnum(__wc), iVar2 != 0 || (__wc == 0x5f)))) {
            return 1;
          }
          if (__wc != 10) {
            return 0;
          }
          goto LAB_0040b8d1;
        }
        param_2 = param_2 + -1;
      } while (param_2 != -1);
      goto LAB_0040b8f0;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + param_2);
    iVar2 = 1;
    if (((*(ulong *)(*(long *)(param_1 + 0x80) + ((long)(ulong)bVar1 >> 6) * 8) >> (bVar1 & 0x3f) &
         1) == 0) && (iVar2 = 0, bVar1 == 10)) {
LAB_0040b8d1:
      return (uint)(*(char *)(param_1 + 0x8d) != '\0') * 2;
    }
  }
  return iVar2;
}


uint FUN_0040b930(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + param_3);
  bVar2 = *(byte *)(param_2 + 1);
  if (bVar2 == 3) {
    if ((*(ulong *)(*param_2 + ((long)(ulong)bVar1 >> 6) * 8) >> (bVar1 & 0x3f) & 1) == 0) {
      return 0;
    }
  }
  else if (bVar2 < 4) {
    if (bVar2 != 1) {
      return 0;
    }
    if (*(byte *)param_2 != bVar1) {
      return 0;
    }
  }
  else {
    if (bVar2 != 5) {
      if (bVar2 != 7) {
        return 0;
      }
      if ((char)bVar1 < '\0') {
        return 0;
      }
    }
    if (bVar1 == 10) {
      if ((*(byte *)(*(long *)(param_1 + 0x98) + 0xd8) & 0x40) == 0) {
        return 0;
      }
    }
    else if ((bVar1 == 0) && ((*(byte *)(*(long *)(param_1 + 0x98) + 0xd8) & 0x80) != 0)) {
      return 0;
    }
  }
  uVar3 = *(uint *)(param_2 + 1);
  uVar5 = 1;
  if ((uVar3 & 0x3ff00) != 0) {
    uVar5 = uVar3 >> 8;
    uVar4 = FUN_0040b840(param_1,param_3,*(undefined *)(param_1 + 0xa0));
    if ((uVar5 & 4) == 0) {
      if (((uVar5 & 8) != 0) && ((uVar4 & 1) != 0)) {
        return 0;
      }
    }
    else {
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if ((uVar5 & 8) != 0) {
        return 0;
      }
    }
    if (((uVar3 & 0x2000) == 0) || (uVar5 = 0, (uVar4 & 2) != 0)) {
      uVar5 = 1;
      if ((uVar3 & 0x8000) != 0) {
        uVar5 = (uint)((uVar4 & 0xffffffff) >> 3) & 1;
      }
    }
  }
  return uVar5;
}


long FUN_0040ba60(long param_1,long param_2,long *param_3,undefined param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = FUN_0040b840(param_1,param_4,*(undefined *)(param_1 + 0xa0));
  if (0 < param_2) {
    lVar7 = 0;
    do {
      lVar4 = *(long *)(*param_3 + lVar7 * 8);
      lVar6 = lVar4 * 0x10 + **(long **)(param_1 + 0x98);
      uVar1 = *(uint *)(lVar6 + 8);
      uVar5 = uVar1 >> 8;
      if (*(char *)(lVar6 + 8) == '\x02') {
        if ((uVar1 & 0x3ff00) == 0) {
          return lVar4;
        }
        if ((uVar5 & 4) == 0) {
          uVar2 = uVar3 & 1;
          if ((uVar5 & 8) != 0) goto joined_r0x0040bb10;
LAB_0040bae5:
          if ((((uVar1 & 0x2000) == 0) || ((uVar3 & 2) != 0)) &&
             (((uVar1 & 0x8000) == 0 || ((uVar3 & 8) != 0)))) {
            return lVar4;
          }
        }
        else if ((uVar3 & 1) != 0) {
          uVar2 = uVar5 & 8;
joined_r0x0040bb10:
          if (uVar2 == 0) goto LAB_0040bae5;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != param_2);
  }
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined FUN_0040bb30(byte **param_1,byte *param_2,uint param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined uVar3;
  int iVar4;
  byte *pbVar5;
  undefined uVar6;
  long lVar7;
  byte *pbVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  char cVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  wint_t local_4c;
  byte local_46 [6];
  undefined local_40 [2];
  
  pbVar13 = param_2 + -(long)param_1[5];
  if ((long)param_2 < (long)param_1[5]) {
    if (1 < *(int *)(param_1 + 0x12)) {
      param_1[4] = (byte *)0x0;
    }
    param_1[6] = (byte *)0x0;
    param_1[5] = (byte *)0x0;
    param_1[0xb] = param_1[10];
    param_1[7] = (byte *)0x0;
    param_1[0xd] = param_1[0xc];
    *(undefined *)((long)param_1 + 0x8c) = 0;
    *(uint *)(param_1 + 0xe) = (-(uint)((param_3 & 1) == 0) & 2) + 4;
    pbVar13 = param_2;
    if (*(char *)((long)param_1 + 0x8b) != '\0') goto LAB_0040bbba;
    param_1[1] = *param_1;
    if (param_2 == (byte *)0x0) goto LAB_0040bc90;
LAB_0040bbc3:
    pbVar12 = param_1[7];
    pbVar17 = param_1[6];
    if ((long)pbVar13 < (long)pbVar12) {
      if (*(char *)((long)param_1 + 0x8c) == '\0') {
        pbVar17 = pbVar17 + -(long)pbVar13;
        uVar3 = FUN_0040b840(param_1,pbVar13 + -1,param_3);
        *(undefined *)(param_1 + 0xe) = uVar3;
        if (1 < *(int *)(param_1 + 0x12)) {
          memmove(param_1[2],param_1[2] + (long)pbVar13 * 4,(long)pbVar17 * 4);
          pbVar17 = param_1[6] + -(long)pbVar13;
        }
        cVar14 = *(char *)((long)param_1 + 0x8b);
        if (cVar14 != '\0') {
          memmove(param_1[1],param_1[1] + (long)pbVar13,(size_t)pbVar17);
          cVar14 = *(char *)((long)param_1 + 0x8b);
          pbVar17 = param_1[6] + -(long)pbVar13;
        }
        param_1[7] = param_1[7] + -(long)pbVar13;
        param_1[6] = pbVar17;
        goto LAB_0040bc1c;
      }
      pbVar2 = param_1[3];
      pbVar12 = (byte *)0x0;
      pbVar5 = pbVar17;
      do {
        pbVar8 = (byte *)((long)(pbVar12 + (long)pbVar5) / 2);
        lVar7 = *(long *)(pbVar2 + (long)pbVar8 * 8);
        pbVar16 = pbVar8;
        if (lVar7 <= (long)pbVar13) {
          if ((long)pbVar13 <= lVar7) {
            pbVar12 = pbVar8 + -1;
            goto LAB_0040bef5;
          }
          pbVar12 = pbVar8 + 1;
          pbVar16 = pbVar5;
        }
        pbVar5 = pbVar16;
      } while ((long)pbVar12 < (long)pbVar16);
      pbVar12 = pbVar8;
      pbVar16 = pbVar8 + 1;
      if ((long)pbVar13 <= lVar7) {
        pbVar12 = pbVar8 + -1;
        pbVar16 = pbVar8;
      }
LAB_0040bef5:
      uVar3 = FUN_0040b840(param_1,pbVar12,param_3);
      *(undefined *)(param_1 + 0xe) = uVar3;
      if (((pbVar13 == pbVar16) && ((long)pbVar13 < (long)pbVar17)) &&
         (*(byte **)(pbVar2 + (long)pbVar16 * 8) == pbVar13)) {
        memmove(param_1[2],param_1[2] + (long)pbVar13 * 4,((long)pbVar17 - (long)pbVar13) * 4);
        memmove(param_1[1],param_1[1] + (long)pbVar13,(long)param_1[6] - (long)pbVar13);
        pbVar12 = param_1[6];
        param_1[7] = param_1[7] + -(long)pbVar13;
        param_1[6] = pbVar12 + -(long)pbVar13;
        if (0 < (long)(pbVar12 + -(long)pbVar13)) {
          pbVar12 = param_1[3];
          pbVar5 = (byte *)0x0;
          do {
            *(long *)(pbVar12 + (long)pbVar5 * 8) =
                 *(long *)(pbVar12 + (long)pbVar5 * 8 + (long)pbVar13 * 8) - (long)pbVar13;
            pbVar5 = pbVar5 + 1;
          } while (param_1[6] != pbVar5 && (long)pbVar5 <= (long)param_1[6]);
        }
        iVar4 = *(int *)(param_1 + 0x12);
        cVar14 = *(char *)((long)param_1 + 0x8b);
        pbVar5 = param_1[0xb] + -(long)pbVar13;
        pbVar12 = param_1[0xd] + -(long)pbVar13;
      }
      else {
        *(undefined *)((long)param_1 + 0x8c) = 0;
        pbVar5 = param_1[10] + -(long)param_2;
        pbVar12 = param_1[0xc] + -(long)param_2;
        param_1[0xb] = pbVar5 + (long)pbVar13;
        param_1[0xd] = pbVar12 + (long)pbVar13;
        if (0 < (long)pbVar16) {
          do {
            if (*(byte **)(pbVar2 + (long)pbVar16 * 8 + -8) != pbVar13) break;
            pbVar16 = pbVar16 + -1;
          } while (pbVar16 != (byte *)0x0);
        }
        if ((long)pbVar16 < (long)pbVar17) {
          do {
            if (*(int *)(param_1[2] + (long)pbVar16 * 4) != -1) goto LAB_0040c00c;
            pbVar16 = pbVar16 + 1;
          } while (pbVar16 != pbVar17);
LAB_0040c1b8:
          param_1[6] = (byte *)0x0;
          pbVar17 = (byte *)0x0;
        }
        else {
          if (pbVar16 == pbVar17) goto LAB_0040c1b8;
LAB_0040c00c:
          pbVar17 = (byte *)(*(long *)(pbVar2 + (long)pbVar16 * 8) - (long)pbVar13);
          param_1[6] = pbVar17;
          if (pbVar17 != (byte *)0x0) {
            if (0 < (long)pbVar17) {
              puVar9 = (undefined *)param_1[2];
              puVar1 = puVar9 + (long)pbVar17;
              do {
                *puVar9 = 0xffffffff;
                puVar9 = puVar9 + 1;
              } while (puVar1 != puVar9);
            }
            memset(param_1[1],0xff,(size_t)pbVar17);
            pbVar17 = param_1[6];
            pbVar5 = param_1[0xb] + -(long)pbVar13;
            pbVar12 = param_1[0xd] + -(long)pbVar13;
          }
        }
        param_1[7] = pbVar17;
        iVar4 = *(int *)(param_1 + 0x12);
        cVar14 = *(char *)((long)param_1 + 0x8b);
      }
LAB_0040bc30:
      if (cVar14 == '\0') {
LAB_0040bc34:
        param_1[1] = param_1[1] + (long)pbVar13;
      }
      goto LAB_0040bc38;
    }
    if (*(char *)((long)param_1 + 0x8c) != '\0') {
      *(undefined *)((long)param_1 + 0x8c) = 0;
      param_1[0xb] = param_1[10] + (long)pbVar13 + -(long)param_2;
      param_1[0xd] = param_1[0xc] + (long)pbVar13 + -(long)param_2;
    }
    iVar4 = *(int *)(param_1 + 0x12);
    pbVar5 = param_1[5];
    param_1[6] = (byte *)0x0;
    if (1 < iVar4) {
      if (*(char *)((long)param_1 + 0x89) != '\0') {
        pbVar8 = *param_1;
        pbVar2 = pbVar8 + (long)pbVar5;
        pbVar16 = pbVar2 + -1 + (long)pbVar13;
        if (pbVar8 < pbVar2 + ((long)pbVar13 - (long)iVar4)) {
          pbVar8 = pbVar2 + ((long)pbVar13 - (long)iVar4);
        }
        if (pbVar8 <= pbVar16) {
LAB_0040c0ad:
          if ((*pbVar16 & 0xc0) == 0x80) goto LAB_0040c0a0;
          pbVar5 = param_1[0xf];
          lVar7 = (long)(param_1[0xb] + (long)pbVar2) - (long)pbVar16;
          pbVar12 = pbVar16;
          if (pbVar5 != (byte *)0x0) {
            iVar4 = 6;
            if (lVar7 < 7) {
              iVar4 = (int)lVar7;
            }
            iVar4 = iVar4 + -1;
            lVar11 = (long)iVar4;
            while (-1 < iVar4) {
              local_46[lVar11] = pbVar5[pbVar16[lVar11]];
              lVar11 = lVar11 + -1;
              iVar4 = (int)lVar11;
            }
            pbVar12 = local_46;
          }
          local_40[0] = 0;
          uVar10 = FUN_00407dd0(&local_4c,pbVar12,lVar7,local_40);
          if ((uVar10 < (ulong)((long)(pbVar2 + (long)pbVar13) - (long)pbVar16)) ||
             (0xfffffffffffffffd < uVar10)) {
LAB_0040c110:
            pbVar5 = param_1[5];
            pbVar12 = param_1[7];
            goto LAB_0040bdb1;
          }
          pbVar5 = (byte *)(uVar10 - ((long)(pbVar2 + (long)pbVar13) - (long)pbVar16));
          param_1[4] = (byte *)0x0;
          param_1[6] = pbVar5;
          local_40[0]._0_4_ = local_4c;
          if (local_4c == 0xffffffff) goto LAB_0040c110;
          goto LAB_0040be37;
        }
      }
LAB_0040bdb1:
      pbVar5 = pbVar5 + (long)pbVar12;
      if ((long)pbVar5 < (long)param_2) {
        do {
          pbVar12 = param_1[10];
          pbVar2 = param_1[4];
          lVar7 = FUN_00407dd0(local_40,*param_1 + (long)pbVar5,(long)pbVar12 - (long)pbVar5,
                               param_1 + 4);
          if (0xfffffffffffffffc < lVar7 - 1U) {
            if ((lVar7 == 0) || ((long)pbVar12 - (long)pbVar5 == 0)) {
              local_40[0]._0_4_ = 0;
            }
            else {
              local_40[0]._0_4_ = (wint_t)(*param_1)[(long)pbVar5];
            }
            param_1[4] = pbVar2;
            lVar7 = 1;
          }
          pbVar5 = pbVar5 + lVar7;
        } while ((long)pbVar5 < (long)param_2);
        pbVar5 = pbVar5 + -(long)param_2;
        param_1[6] = pbVar5;
        if ((wint_t)local_40[0] == 0xffffffff) goto LAB_0040c1d1;
LAB_0040be37:
        if ((*(char *)((long)param_1 + 0x8e) == '\0') ||
           ((iVar4 = iswalnum((wint_t)local_40[0]), iVar4 == 0 && ((wint_t)local_40[0] != 0x5f)))) {
          iVar4 = 0;
          if ((wint_t)local_40[0] == 10) {
            iVar4 = (uint)(*(char *)((long)param_1 + 0x8d) != '\0') * 2;
          }
        }
        else {
          iVar4 = 1;
        }
        *(int *)(param_1 + 0xe) = iVar4;
      }
      else {
        pbVar5 = pbVar5 + -(long)param_2;
        param_1[6] = pbVar5;
LAB_0040c1d1:
        uVar3 = FUN_0040b840(param_1,pbVar17 + -1,param_3);
        *(undefined *)(param_1 + 0xe) = uVar3;
      }
      if (pbVar5 == (byte *)0x0) {
LAB_0040be65:
        cVar14 = *(char *)((long)param_1 + 0x8b);
      }
      else {
        if (0 < (long)pbVar5) {
          puVar9 = (undefined *)param_1[2];
          puVar1 = puVar9 + (long)pbVar5;
          do {
            *puVar9 = 0xffffffff;
            puVar9 = puVar9 + 1;
          } while (puVar1 != puVar9);
        }
        cVar14 = *(char *)((long)param_1 + 0x8b);
        if (cVar14 != '\0') {
          memset(param_1[1],0xff,(size_t)pbVar5);
          pbVar5 = param_1[6];
          goto LAB_0040be65;
        }
      }
      param_1[7] = pbVar5;
LAB_0040bc1c:
      iVar4 = *(int *)(param_1 + 0x12);
      pbVar5 = param_1[0xb] + -(long)pbVar13;
      pbVar12 = param_1[0xd] + -(long)pbVar13;
      goto LAB_0040bc30;
    }
    uVar10 = (ulong)(pbVar5 + -1)[(long)(*param_1 + (long)pbVar13)];
    param_1[7] = (byte *)0x0;
    if (param_1[0xf] != (byte *)0x0) {
      uVar10 = (ulong)param_1[0xf][uVar10];
    }
    iVar15 = 1;
    if (((*(ulong *)(param_1[0x10] + ((long)uVar10 >> 6) * 8) >> ((byte)uVar10 & 0x3f) & 1) == 0) &&
       (iVar15 = 0, (byte)uVar10 == 10)) {
      iVar15 = (uint)(*(char *)((long)param_1 + 0x8d) != '\0') * 2;
    }
    *(int *)(param_1 + 0xe) = iVar15;
    pbVar5 = param_1[0xb] + -(long)pbVar13;
    pbVar12 = param_1[0xd] + -(long)pbVar13;
    if (*(char *)((long)param_1 + 0x8b) == '\0') goto LAB_0040bc34;
    param_1[5] = param_2;
    param_1[0xb] = pbVar5;
    param_1[0xd] = pbVar12;
  }
  else {
LAB_0040bbba:
    if (pbVar13 != (byte *)0x0) goto LAB_0040bbc3;
LAB_0040bc90:
    iVar4 = *(int *)(param_1 + 0x12);
    pbVar5 = param_1[0xb];
    pbVar12 = param_1[0xd];
LAB_0040bc38:
    param_1[5] = param_2;
    param_1[0xb] = pbVar5;
    param_1[0xd] = pbVar12;
    if (1 < iVar4) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        FUN_004087e0();
      }
      else {
        uVar6 = FUN_00408990(param_1);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      goto LAB_0040bc5e;
    }
  }
  if (*(char *)((long)param_1 + 0x8b) == '\0') {
    param_1[6] = pbVar5;
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    pbVar13 = param_1[0xf];
    if (pbVar13 != (byte *)0x0) {
      pbVar12 = param_1[6];
      if (param_1[8] == pbVar5 || (long)param_1[8] < (long)pbVar5) {
        pbVar5 = param_1[8];
      }
      pbVar17 = pbVar12;
      if ((long)pbVar12 < (long)pbVar5) {
        while( true ) {
          param_1[1][(long)pbVar17] = pbVar13[(*param_1 + (long)pbVar17)[(long)param_2]];
          pbVar17 = pbVar17 + 1;
          pbVar12 = pbVar5;
          if (pbVar5 == pbVar17) break;
          param_2 = param_1[5];
          pbVar13 = param_1[0xf];
        }
      }
      param_1[6] = pbVar12;
      param_1[7] = pbVar12;
    }
  }
  else {
    FUN_00408760(param_1);
  }
LAB_0040bc5e:
  param_1[9] = (byte *)0x0;
  return 0;
LAB_0040c0a0:
  pbVar16 = pbVar16 + -1;
  if (pbVar16 < pbVar8) goto LAB_0040bdb1;
  goto LAB_0040c0ad;
}


/* WARNING: Could not reconcile some variable overlaps */

int FUN_0040c320(long *param_1,long param_2,long param_3,undefined param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined local_58 [16];
  void *local_48 [3];
  
  local_58 = (undefined)0x0;
  lVar1 = param_1[7] + param_2 * 0x18;
  local_48[0] = (void *)0x0;
  lVar7 = *(long *)(lVar1 + 8);
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(lVar1 + 0x10) + lVar9 * 8);
      if ((param_2 != lVar10) && ((*(byte *)(lVar10 * 0x10 + *param_1 + 8) & 8) != 0)) {
        lVar6 = lVar1 + 0x10;
        lVar10 = lVar10 * 0x18;
        lVar8 = param_1[5] + lVar10;
        puVar2 = *(undefined **)(lVar8 + 0x10);
        uVar3 = *puVar2;
        lVar5 = FUN_00409b10(lVar7,lVar6,uVar3);
        if (*(long *)(lVar8 + 8) < 2) {
          if (lVar5 == 0) {
            lVar6 = FUN_00409b10(*(undefined *)(param_3 + 8),param_3 + 0x10,uVar3);
joined_r0x0040c484:
            if (lVar6 != 0) goto LAB_0040c392;
          }
        }
        else if ((lVar5 == 0) &&
                (lVar5 = FUN_00409b10(*(undefined *)(param_3 + 8),param_3 + 0x10,uVar3), lVar5 != 0
                )) {
LAB_0040c392:
          iVar4 = FUN_0040a5c0(local_58,param_4,param_1[7] + lVar10);
          if (iVar4 != 0) {
            free(local_48[0]);
            return iVar4;
          }
          lVar7 = *(long *)(lVar1 + 8);
        }
        else {
          lVar5 = puVar2[1];
          if ((0 < lVar5) && (lVar6 = FUN_00409b10(lVar7,lVar6,lVar5), lVar6 == 0)) {
            lVar6 = FUN_00409b10(*(undefined *)(param_3 + 8),param_3 + 0x10);
            goto joined_r0x0040c484;
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar7);
    lVar9 = 0;
    if (0 < lVar7) {
      do {
        lVar7 = FUN_00409b10(local_58._8_8_,local_48,
                             *(undefined *)(*(long *)(lVar1 + 0x10) + lVar9 * 8));
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_3 + 8);
          lVar10 = FUN_00409b10(lVar7,param_3 + 0x10);
          lVar10 = lVar10 + -1;
          if ((-1 < lVar10) && (lVar10 < lVar7)) {
            *(long *)(param_3 + 8) = lVar7 + -1;
            FUN_00409c80(param_3 + 8,param_3 + 0x10,lVar10);
          }
        }
        lVar9 = lVar9 + 1;
      } while (*(long *)(lVar1 + 8) != lVar9 && lVar9 <= *(long *)(lVar1 + 8));
    }
  }
  free(local_48[0]);
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_0040c550(long *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined uVar4;
  bool bVar5;
  undefined auVar6 [16];
  char cVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  ulong *puVar11;
  void *pvVar12;
  void *__ptr;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  size_t __size;
  long lVar19;
  void **ppvVar20;
  void **ppvVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long local_d0;
  undefined local_98 [4];
  undefined auStack_94 [8];
  undefined uStack_8c;
  undefined local_88 [8];
  undefined uStack_80;
  undefined uStack_7c;
  ulong local_78 [2];
  void *local_68;
  ulong uStack_60;
  undefined local_58 [16];
  undefined local_48 [16];
  ulong local_38;
  
  pvVar10 = malloc(0x3800);
  if (pvVar10 == (void *)0x0) {
    return 0;
  }
  _local_98 = (undefined)0x0;
  puVar11 = (ulong *)((long)pvVar10 + 0x1800);
  _local_88 = (undefined)0x0;
  *(undefined *)(param_2 + 0x58) = 0;
  *(undefined *)(param_2 + 0x60) = 0;
  if (*(long *)(param_2 + 0x10) < 1) {
    free(pvVar10);
  }
  else {
    lVar22 = 0;
    local_d0 = 0;
    do {
      plVar28 = (long *)(*(long *)(*(long *)(param_2 + 0x18) + local_d0 * 8) * 0x10 + *param_1);
      uVar2 = *(uint *)(plVar28 + 1);
      bVar1 = *(byte *)(plVar28 + 1);
      uVar8 = uVar2 >> 8;
      if (bVar1 == 1) {
        *(ulong *)(local_98 + (*(byte *)plVar28 >> 3 & 0x18)) =
             *(ulong *)(local_98 + (*(byte *)plVar28 >> 3 & 0x18)) | 1L << (*(byte *)plVar28 & 0x3f)
        ;
LAB_0040c947:
        auVar6 = _local_98;
        if ((uVar2 & 0x3ff00) == 0) {
LAB_0040ca00:
          lVar26 = 0;
          puVar23 = puVar11;
          if (0 < lVar22) {
            do {
              if ((bVar1 != 1) ||
                 ((*(ulong *)((long)puVar11 + lVar26 * 0x20 + (ulong)(*(byte *)plVar28 >> 3 & 0x18))
                   >> (*(byte *)plVar28 & 0x3f) & 1) != 0)) {
                uVar14 = 0;
                lVar19 = 0;
                do {
                  uVar17 = *(ulong *)(local_98 + lVar19 * 8);
                  uVar15 = puVar23[lVar19];
                  local_78[lVar19] = uVar17 & uVar15;
                  lVar19 = lVar19 + 1;
                  uVar14 = uVar14 | uVar17 & uVar15;
                } while (lVar19 != 4);
                if (uVar14 != 0) {
                  uVar14 = 0;
                  uVar17 = 0;
                  lVar19 = 0;
                  do {
                    uVar18 = ~*(ulong *)(local_98 + lVar19 * 8) & puVar23[lVar19];
                    uVar15 = ~puVar23[lVar19] & *(ulong *)(local_98 + lVar19 * 8);
                    *(ulong *)(local_58 + lVar19 * 8) = uVar18;
                    uVar17 = uVar17 | uVar18;
                    *(ulong *)(local_98 + lVar19 * 8) = uVar15;
                    lVar19 = lVar19 + 1;
                    uVar14 = uVar14 | uVar15;
                  } while (lVar19 != 4);
                  if (uVar17 != 0) {
                    puVar24 = puVar11 + lVar22 * 4;
                    *puVar24 = local_58._0_8_;
                    puVar24[1] = local_58._8_8_;
                    puVar24[2] = local_48._0_8_;
                    puVar24[3] = local_48._8_8_;
                    *puVar23 = local_78[0];
                    puVar23[1] = local_78[1];
                    puVar23[2] = (ulong)local_68;
                    puVar23[3] = uStack_60;
                    iVar9 = FUN_0040abb0((void *)((long)pvVar10 + lVar22 * 0x18),
                                         (void *)((long)pvVar10 + lVar26 * 0x18));
                    if (iVar9 != 0) goto LAB_0040cc23;
                    lVar22 = lVar22 + 1;
                  }
                  cVar7 = FUN_00408500();
                  if (cVar7 == '\0') goto LAB_0040cc23;
                  if (uVar14 == 0) break;
                }
              }
              lVar26 = lVar26 + 1;
              puVar23 = puVar23 + 4;
            } while (lVar26 < lVar22);
          }
          if (lVar22 != lVar26) goto LAB_0040c622;
          puVar23 = puVar11 + lVar22 * 4;
          *(undefined (*) [4])puVar23 = local_98;
          *(undefined *)((long)puVar23 + 4) = auStack_94._0_4_;
          *(undefined *)(puVar23 + 1) = auStack_94._4_4_;
          *(undefined *)((long)puVar23 + 0xc) = uStack_8c;
          *(undefined *)(puVar23 + 2) = local_88._0_4_;
          *(undefined *)((long)puVar23 + 0x14) = local_88._4_4_;
          *(undefined *)(puVar23 + 3) = uStack_80;
          *(undefined *)((long)puVar23 + 0x1c) = uStack_7c;
          uVar4 = *(undefined *)(*(long *)(param_2 + 0x18) + local_d0 * 8);
          puVar13 = (undefined *)((long)pvVar10 + lVar22 * 0x18);
          *puVar13 = 1;
          puVar13[1] = 1;
          puVar16 = (undefined *)malloc(8);
          puVar13[2] = puVar16;
          if (puVar16 == (undefined *)0x0) {
            puVar13[1] = 0;
            *puVar13 = 0;
            if (lVar22 == 0) {
              free(pvVar10);
              return 0;
            }
LAB_0040cc23:
            ppvVar21 = (void **)((long)pvVar10 + 0x10);
            ppvVar20 = ppvVar21 + lVar22 * 3;
            do {
              pvVar12 = *ppvVar21;
              ppvVar21 = ppvVar21 + 3;
              free(pvVar12);
            } while (ppvVar20 != ppvVar21);
            free(pvVar10);
            return 0;
          }
          *puVar16 = uVar4;
          lVar22 = lVar22 + 1;
        }
        else {
          if ((uVar8 & 0x20) != 0) {
            _local_98 = (undefined)0x0;
            _local_88 = (undefined)0x0;
            if ((auVar6 & (undefined)0x400) == (undefined)0x0) goto LAB_0040c622;
            _local_98 = ZEXT816(0x400);
          }
          if ((uVar8 & 0x80) == 0) {
            if ((uVar8 & 4) != 0) {
              if (bVar1 == 1) {
                if ((*(byte *)((long)plVar28 + 10) & 0x40) == 0) goto LAB_0040cc09;
                iVar9 = *(int *)((long)param_1 + 0xb4);
              }
              else {
                iVar9 = *(int *)((long)param_1 + 0xb4);
              }
              if (iVar9 < 2) {
                uVar14 = 0;
                lVar26 = 0;
                do {
                  uVar17 = *(ulong *)(local_98 + lVar26 * 8);
                  uVar15 = param_1[lVar26 + 0x17];
                  *(ulong *)(local_98 + lVar26 * 8) = uVar17 & uVar15;
                  lVar26 = lVar26 + 1;
                  uVar14 = uVar14 | uVar17 & uVar15;
                } while (lVar26 != 4);
              }
              else {
                lVar26 = param_1[0xf];
                uVar14 = 0;
                lVar19 = 0;
                do {
                  uVar17 = (~*(ulong *)(lVar26 + lVar19 * 8) | param_1[lVar19 + 0x17]) &
                           *(ulong *)(local_98 + lVar19 * 8);
                  *(ulong *)(local_98 + lVar19 * 8) = uVar17;
                  lVar19 = lVar19 + 1;
                  uVar14 = uVar14 | uVar17;
                } while (lVar19 != 4);
              }
              if (uVar14 == 0) goto LAB_0040c622;
            }
            if ((uVar8 & 8) != 0) {
              if ((bVar1 == 1) && ((*(byte *)((long)plVar28 + 10) & 0x40) != 0)) goto LAB_0040cc09;
              if (*(int *)((long)param_1 + 0xb4) < 2) {
                uVar14 = 0;
                lVar26 = 0;
                do {
                  uVar17 = param_1[lVar26 + 0x17];
                  uVar15 = *(ulong *)(local_98 + lVar26 * 8);
                  *(ulong *)(local_98 + lVar26 * 8) = ~uVar17 & uVar15;
                  lVar26 = lVar26 + 1;
                  uVar14 = uVar14 | ~uVar17 & uVar15;
                } while (lVar26 != 4);
              }
              else {
                lVar26 = param_1[0xf];
                uVar14 = 0;
                lVar19 = 0;
                do {
                  uVar17 = ~(param_1[lVar19 + 0x17] & *(ulong *)(lVar26 + lVar19 * 8)) &
                           *(ulong *)(local_98 + lVar19 * 8);
                  *(ulong *)(local_98 + lVar19 * 8) = uVar17;
                  lVar19 = lVar19 + 1;
                  uVar14 = uVar14 | uVar17;
                } while (lVar19 != 4);
              }
              if (uVar14 == 0) goto LAB_0040c622;
            }
            goto LAB_0040ca00;
          }
        }
LAB_0040cc09:
        _local_98 = (undefined)0x0;
        _local_88 = (undefined)0x0;
      }
      else {
        if (bVar1 == 3) {
          lVar26 = *plVar28;
          lVar19 = 0;
          do {
            *(ulong *)(local_98 + lVar19) =
                 *(ulong *)(local_98 + lVar19) | *(ulong *)(lVar26 + lVar19);
            lVar19 = lVar19 + 8;
          } while (lVar19 != 0x20);
          goto LAB_0040c947;
        }
        if (bVar1 == 5) {
          if (*(int *)((long)param_1 + 0xb4) < 2) {
            _local_98 = CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff));
            _local_88 = _local_98;
          }
          else {
            lVar26 = param_1[0xf];
            lVar19 = 0;
            do {
              *(ulong *)(local_98 + lVar19) =
                   *(ulong *)(local_98 + lVar19) | *(ulong *)(lVar26 + lVar19);
              lVar19 = lVar19 + 8;
            } while (lVar19 != 0x20);
          }
LAB_0040cc8f:
          if ((param_1[0x1b] & 0x40U) == 0) {
            _local_98 = _local_98 & (undefined)0xffffffffffffffff;
          }
          if ((param_1[0x1b] & 0x80U) != 0) {
            _local_98 = _local_98 & (undefined)0xffffffffffffffff;
          }
          goto LAB_0040c947;
        }
        if (bVar1 == 7) {
          _local_98 = CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff));
          goto LAB_0040cc8f;
        }
      }
LAB_0040c622:
      local_d0 = local_d0 + 1;
    } while (local_d0 < *(long *)(param_2 + 0x10));
    if (0 < lVar22) {
      local_78[1] = 0;
      local_78[0] = lVar22 + 1;
      __size = local_78[0] * 8;
      pvVar12 = malloc(__size);
      local_68 = pvVar12;
      if (((pvVar12 != (void *)0x0) &&
          (_local_98 = _local_98 & (undefined)0xffffffff00000000, lVar22 < 0xaaaaaaaaaaaa856))
         && (__ptr = malloc(lVar22 * 0x18), __ptr != (void *)0x0)) {
        lVar19 = __size - 8;
        lVar29 = 0;
        bVar5 = false;
        lVar26 = lVar19 * 2;
        plVar28 = (long *)((long)pvVar10 + 8);
        local_58 = (undefined)0x0;
        local_48 = (undefined)0x0;
        pvVar12 = pvVar10;
        do {
          local_78[1] = 0;
          lVar27 = 0;
          if (0 < *plVar28) {
            do {
              lVar3 = *(long *)(param_1[3] + *(long *)(plVar28[1] + lVar27 * 8) * 8);
              if (lVar3 != -1) {
                iVar9 = FUN_0040a050(local_78,param_1[6] + lVar3 * 0x18);
                _local_98 = CONCAT124(_auStack_94,iVar9);
                if (iVar9 != 0) goto LAB_0040cdf5;
              }
              lVar27 = lVar27 + 1;
            } while (*plVar28 != lVar27 && lVar27 <= *plVar28);
          }
          lVar27 = FUN_0040adc0(local_98,param_1,local_78,0);
          *(long *)((long)__ptr + lVar29 * 8) = lVar27;
          if ((lVar27 == 0) && (local_98 != (undefined)0x0)) goto LAB_0040cdf5;
          if (*(char *)(lVar27 + 0x68) < '\0') {
            lVar27 = FUN_0040adc0(local_98,param_1,local_78,1);
            *(long *)((long)__ptr + lVar29 * 8 + lVar19) = lVar27;
            if ((lVar27 == 0) && (local_98 != (undefined)0x0)) goto LAB_0040cdf5;
            if ((lVar27 != *(long *)((long)__ptr + lVar29 * 8)) &&
               (1 < *(int *)((long)param_1 + 0xb4))) {
              bVar5 = true;
            }
            lVar27 = FUN_0040adc0(local_98,param_1,local_78,2);
            *(long *)((long)__ptr + lVar29 * 8 + lVar26) = lVar27;
            if ((lVar27 == 0) && (local_98 != (undefined)0x0)) goto LAB_0040cdf5;
          }
          else {
            *(long *)((long)__ptr + lVar29 * 8 + lVar19) = lVar27;
            *(long *)((long)__ptr + lVar29 * 8 + lVar26) = lVar27;
          }
          lVar27 = 0;
          puVar11 = (ulong *)local_58;
          do {
            *(ulong *)((long)puVar11 + lVar27) =
                 *(ulong *)((long)puVar11 + lVar27) | *(ulong *)((long)pvVar12 + lVar27 + 0x1800);
            lVar27 = lVar27 + 8;
          } while (lVar27 != 0x20);
          lVar29 = lVar29 + 1;
          plVar28 = plVar28 + 3;
          pvVar12 = (void *)((long)pvVar12 + 0x20);
        } while (lVar29 != lVar22);
        if (bVar5) {
          puVar13 = (undefined *)calloc(8,0x200);
          *(undefined **)(param_2 + 0x60) = puVar13;
          if (puVar13 != (undefined *)0x0) {
            puVar23 = (ulong *)((long)pvVar10 + 0x1820);
            puVar16 = puVar13;
            do {
              uVar17 = 1;
              puVar25 = puVar16;
              for (uVar14 = *puVar11; uVar14 != 0; uVar14 = uVar14 >> 1) {
                if ((uVar14 & 1) != 0) {
                  if ((puVar23[-4] & uVar17) == 0) {
                    lVar29 = 0;
                    puVar24 = puVar23;
                    do {
                      uVar15 = *puVar24;
                      lVar29 = lVar29 + 1;
                      puVar24 = puVar24 + 4;
                    } while ((uVar15 & uVar17) == 0);
                  }
                  else {
                    lVar29 = 0;
                  }
                  *puVar25 = *(undefined *)((long)__ptr + lVar29 * 8);
                  puVar25[0x100] = *(undefined *)((long)__ptr + lVar29 * 8 + lVar19);
                }
                uVar17 = uVar17 * 2;
                puVar25 = puVar25 + 1;
              }
              puVar11 = puVar11 + 1;
              puVar16 = puVar16 + 0x40;
              puVar23 = puVar23 + 1;
            } while (&local_38 != puVar11);
            goto LAB_0040c86e;
          }
        }
        else {
          puVar13 = (undefined *)calloc(8,0x100);
          *(undefined **)(param_2 + 0x58) = puVar13;
          if (puVar13 != (undefined *)0x0) {
            lVar29 = 0;
            do {
              uVar17 = 1;
              puVar16 = puVar13 + lVar29 * 8;
              for (uVar14 = *(ulong *)((long)puVar11 + lVar29); uVar14 != 0; uVar14 = uVar14 >> 1) {
                if ((uVar14 & 1) != 0) {
                  if ((*(ulong *)((long)pvVar10 + lVar29 + 0x1800) & uVar17) == 0) {
                    puVar23 = (ulong *)((long)pvVar10 + lVar29 + 0x1820);
                    lVar27 = 0;
                    do {
                      uVar15 = *puVar23;
                      lVar27 = lVar27 + 1;
                      puVar23 = puVar23 + 4;
                    } while ((uVar15 & uVar17) == 0);
                    lVar27 = lVar27 * 8;
                  }
                  else {
                    lVar27 = 0;
                  }
                  if ((*(ulong *)((long)param_1 + lVar29 + 0xb8) & uVar17) == 0) {
                    *puVar16 = *(undefined *)((long)__ptr + lVar27);
                  }
                  else {
                    *puVar16 = *(undefined *)((long)__ptr + lVar27 + lVar19);
                  }
                }
                uVar17 = uVar17 * 2;
                puVar16 = puVar16 + 1;
              }
              lVar29 = lVar29 + 8;
            } while (lVar29 != 0x20);
LAB_0040c86e:
            if ((local_58 & (undefined)0x400) != (undefined)0x0) {
              lVar19 = 0;
              do {
                if ((*(byte *)((long)pvVar10 + lVar19 * 0x20 + 0x1801) & 4) != 0) {
                  uVar4 = *(undefined *)((long)__ptr + lVar19 * 8 + lVar26);
                  puVar13[10] = uVar4;
                  if (bVar5) {
                    puVar13[0x10a] = uVar4;
                  }
                  break;
                }
                lVar19 = lVar19 + 1;
              } while (lVar19 != lVar22);
            }
            free(__ptr);
            free(local_68);
            ppvVar21 = (void **)((long)pvVar10 + 0x10);
            ppvVar20 = ppvVar21 + lVar22 * 3;
            do {
              pvVar12 = *ppvVar21;
              ppvVar21 = ppvVar21 + 3;
              free(pvVar12);
            } while (ppvVar20 != ppvVar21);
            free(pvVar10);
            return 1;
          }
        }
LAB_0040cdf5:
        free(__ptr);
        pvVar12 = local_68;
      }
      free(pvVar12);
      ppvVar21 = (void **)((long)pvVar10 + 0x10);
      ppvVar20 = ppvVar21 + lVar22 * 3;
      do {
        pvVar12 = *ppvVar21;
        ppvVar21 = ppvVar21 + 3;
        free(pvVar12);
      } while (ppvVar21 != ppvVar20);
      free(pvVar10);
      return 0;
    }
    free(pvVar10);
    if (lVar22 != 0) {
      return 0;
    }
  }
  pvVar10 = calloc(8,0x100);
  *(void **)(param_2 + 0x58) = pvVar10;
  return (ulong)pvVar10 & 0xffffffffffffff00 | (ulong)(pvVar10 != (void *)0x0);
}


undefined FUN_0040d060(long *param_1,long param_2)

{
  long lVar1;
  undefined uVar2;
  
  if (*(char *)(param_2 + 0x30) == '\x10') {
    uVar2 = *(undefined *)(*(long *)(param_2 + 8) + 0x38);
    *(undefined *)(param_2 + 0x18) = *(undefined *)(*(long *)(param_2 + 8) + 0x18);
    *(undefined *)(param_2 + 0x38) = uVar2;
    return 0;
  }
  *(long *)(param_2 + 0x18) = param_2;
  lVar1 = FUN_004091e0(param_1,*(undefined *)(param_2 + 0x28),*(undefined *)(param_2 + 0x30));
  *(long *)(param_2 + 0x38) = lVar1;
  if (lVar1 == -1) {
    uVar2 = 0xc;
  }
  else {
    uVar2 = 0;
    if (*(char *)(param_2 + 0x30) == '\f') {
      lVar1 = lVar1 * 0x10 + *param_1;
      *(uint *)(lVar1 + 8) =
           *(uint *)(lVar1 + 8) & 0xfffc00ff | (*(uint *)(param_2 + 0x28) & 0x3ff) << 8;
    }
  }
  return uVar2;
}


void FUN_0040d0f0(void **param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  
  pvVar4 = *param_1;
  if ((pvVar4 != (void *)0x0) && (param_1[2] != (void *)0x0)) {
    pvVar6 = (void *)0x0;
    while( true ) {
      pvVar3 = (void *)((long)pvVar6 + 1);
      FUN_00409190((void *)((long)pvVar4 + (long)pvVar6 * 0x10));
      if (param_1[2] < pvVar3 || param_1[2] == pvVar3) break;
      pvVar4 = *param_1;
      pvVar6 = pvVar3;
    }
  }
  pvVar4 = (void *)0x0;
  free(param_1[3]);
  if (param_1[2] != (void *)0x0) {
    do {
      if (param_1[6] != (void *)0x0) {
        free(*(void **)((long)param_1[6] + (long)pvVar4 * 0x18 + 0x10));
      }
      if (param_1[7] != (void *)0x0) {
        free(*(void **)((long)param_1[7] + (long)pvVar4 * 0x18 + 0x10));
      }
      if (param_1[5] != (void *)0x0) {
        free(*(void **)((long)param_1[5] + (long)pvVar4 * 0x18 + 0x10));
      }
      pvVar4 = (void *)((long)pvVar4 + 1);
    } while (pvVar4 <= param_1[2] && param_1[2] != pvVar4);
  }
  pvVar6 = (void *)0x0;
  free(param_1[5]);
  free(param_1[6]);
  free(param_1[7]);
  free(*param_1);
  pvVar4 = param_1[8];
  if (pvVar4 != (void *)0x0) {
    while( true ) {
      lVar5 = 0;
      plVar2 = (long *)((long)pvVar4 + (long)pvVar6 * 0x18);
      if (0 < *plVar2) {
        do {
          lVar1 = lVar5 * 8;
          lVar5 = lVar5 + 1;
          FUN_004096e0(*(undefined *)(plVar2[2] + lVar1));
        } while (lVar5 < *plVar2);
      }
      pvVar6 = (void *)((long)pvVar6 + 1);
      free((void *)plVar2[2]);
      if (param_1[0x11] < pvVar6) break;
      pvVar4 = param_1[8];
    }
    pvVar4 = param_1[8];
  }
  free(pvVar4);
  if ((undefined *)param_1[0xf] != &DAT_004191c0) {
    free(param_1[0xf]);
  }
  free(param_1[0x1c]);
  free(param_1);
  return;
}


void FUN_0040d270(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *param_1) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      free(*(void **)(param_1[2] + 0x28 + lVar1 * 0x30));
      free(*(void **)(param_1[2] + 0x10 + lVar1 * 0x30));
      lVar1 = lVar2;
    } while (lVar2 < *param_1);
  }
  free((void *)param_1[2]);
  return;
}


undefined
FUN_0040d2c0(long *param_1,long *param_2,undefined *param_3,long param_4,void *param_5,
            undefined *param_6)

{
  long lVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  
  lVar5 = *param_1 + -1;
  *param_1 = lVar5;
  if (-1 < lVar5) {
    lVar1 = *param_2;
    lVar5 = lVar5 * 0x30;
    *param_3 = *(undefined *)(lVar1 + lVar5);
    memcpy(param_5,(void *)((undefined *)(lVar1 + lVar5))[2],param_4 << 4);
    free(*(void **)(param_6 + 4));
    free(*(void **)(*param_2 + 0x10 + lVar5));
    lVar5 = lVar5 + *param_2;
    uVar2 = *(undefined *)(lVar5 + 0x1c);
    uVar3 = *(undefined *)(lVar5 + 0x20);
    uVar4 = *(undefined *)(lVar5 + 0x24);
    *param_6 = *(undefined *)(lVar5 + 0x18);
    param_6[1] = uVar2;
    param_6[2] = uVar3;
    param_6[3] = uVar4;
    *(undefined *)(param_6 + 4) = *(undefined *)(lVar5 + 0x28);
    return *(undefined *)(lVar5 + 8);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("num >= 0","lib/regexec.c",0x54f,"pop_fail_stack");
}


undefined FUN_0040d350(long param_1,byte *param_2)

{
  ulong *puVar1;
  size_t sVar2;
  
  sVar2 = strlen((char *)param_2);
  if (sVar2 == 1) {
    puVar1 = (ulong *)(param_1 + (ulong)(*param_2 >> 3 & 0x18));
    *puVar1 = *puVar1 | 1L << (*param_2 & 0x3f);
    return 0;
  }
  return 3;
}


undefined
FUN_0040d3a0(long param_1,long param_2,void **param_3,ulong *param_4,ulong *param_5,char *param_6,
            ulong param_7)

{
  ulong *puVar1;
  ushort *puVar2;
  int iVar3;
  wctype_t wVar4;
  ushort **ppuVar5;
  void *__ptr;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  undefined uVar12;
  bool bVar13;
  undefined uVar14;
  byte bVar15;
  
  bVar15 = 0;
  bVar10 = false;
  bVar13 = (param_7 & 0x400000) == 0;
  if (!bVar13) {
    lVar6 = 6;
    pbVar8 = (byte *)param_6;
    pbVar9 = (byte *)"upper";
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar10 = *pbVar8 < *pbVar9;
      bVar13 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while (bVar13);
    bVar11 = false;
    bVar10 = (!bVar10 && !bVar13) == bVar10;
    if (!bVar10) {
      lVar6 = 6;
      pbVar8 = (byte *)param_6;
      pbVar9 = (byte *)"lower";
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar11 = *pbVar8 < *pbVar9;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar10);
      uVar7 = *param_4;
      if ((!bVar11 && !bVar10) == bVar11) {
        param_6 = "alpha";
      }
      __ptr = *param_3;
      uVar12 = *param_5 < uVar7;
      uVar14 = *param_5 == uVar7;
      goto joined_r0x0040d3ef;
    }
    param_6 = "alpha";
  }
  uVar7 = *param_4;
  __ptr = *param_3;
  uVar12 = *param_5 < uVar7;
  uVar14 = *param_5 == uVar7;
joined_r0x0040d3ef:
  if ((bool)uVar14) {
    uVar7 = uVar7 * 2 + 1;
    __ptr = realloc(__ptr,uVar7 * 8);
    uVar12 = false;
    uVar14 = __ptr == (void *)0x0;
    if ((bool)uVar14) {
      return 0xc;
    }
    *param_3 = __ptr;
    *param_5 = uVar7;
    uVar7 = *param_4;
  }
  *param_4 = uVar7 + 1;
  wVar4 = wctype(param_6);
  lVar6 = 6;
  *(wctype_t *)((long)__ptr + uVar7 * 8) = wVar4;
  pbVar8 = (byte *)param_6;
  pbVar9 = (byte *)"alnum";
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    uVar12 = *pbVar8 < *pbVar9;
    uVar14 = *pbVar8 == *pbVar9;
    pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
    pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
  } while ((bool)uVar14);
  bVar10 = false;
  bVar13 = (!(bool)uVar12 && !(bool)uVar14) == (bool)uVar12;
  if (bVar13) {
    ppuVar5 = __ctype_b_loc();
    lVar6 = 0;
    puVar2 = *ppuVar5;
    if (param_1 == 0) {
      do {
        if ((*(byte *)(puVar2 + lVar6) & 8) != 0) {
          puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
          *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
    }
    else {
      lVar6 = 0;
      do {
        if ((*(byte *)(puVar2 + lVar6) & 8) != 0) {
          puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
          *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
    }
  }
  else {
    lVar6 = 6;
    pbVar8 = (byte *)param_6;
    pbVar9 = &DAT_004187c6;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar10 = *pbVar8 < *pbVar9;
      bVar13 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
    } while (bVar13);
    bVar11 = false;
    bVar10 = (!bVar10 && !bVar13) == bVar10;
    if (bVar10) {
      ppuVar5 = __ctype_b_loc();
      lVar6 = 0;
      puVar2 = *ppuVar5;
      if (param_1 == 0) {
        do {
          if ((*(byte *)(puVar2 + lVar6) & 2) != 0) {
            puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
            *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x100);
      }
      else {
        lVar6 = 0;
        do {
          if ((*(byte *)(puVar2 + lVar6) & 2) != 0) {
            puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
            *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x100);
      }
    }
    else {
      lVar6 = 6;
      pbVar8 = (byte *)param_6;
      pbVar9 = (byte *)"lower";
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar11 = *pbVar8 < *pbVar9;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
      } while (bVar10);
      bVar13 = false;
      bVar10 = (!bVar11 && !bVar10) == bVar11;
      if (bVar10) {
        ppuVar5 = __ctype_b_loc();
        lVar6 = 0;
        puVar2 = *ppuVar5;
        if (param_1 == 0) {
          do {
            if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 2) != 0) {
              puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
              *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x100);
        }
        else {
          lVar6 = 0;
          do {
            if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 2) != 0) {
              puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
              *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x100);
        }
      }
      else {
        lVar6 = 6;
        pbVar8 = (byte *)param_6;
        pbVar9 = (byte *)"space";
        do {
          if (lVar6 == 0) break;
          lVar6 = lVar6 + -1;
          bVar13 = *pbVar8 < *pbVar9;
          bVar10 = *pbVar8 == *pbVar9;
          pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
          pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
        } while (bVar10);
        bVar11 = false;
        bVar10 = (!bVar13 && !bVar10) == bVar13;
        if (bVar10) {
          ppuVar5 = __ctype_b_loc();
          lVar6 = 0;
          puVar2 = *ppuVar5;
          if (param_1 == 0) {
            do {
              if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x20) != 0) {
                puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x100);
          }
          else {
            lVar6 = 0;
            do {
              if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x20) != 0) {
                puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x100);
          }
        }
        else {
          lVar6 = 6;
          pbVar8 = (byte *)param_6;
          pbVar9 = (byte *)"alpha";
          do {
            if (lVar6 == 0) break;
            lVar6 = lVar6 + -1;
            bVar11 = *pbVar8 < *pbVar9;
            bVar10 = *pbVar8 == *pbVar9;
            pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
            pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
          } while (bVar10);
          bVar13 = false;
          bVar10 = (!bVar11 && !bVar10) == bVar11;
          if (bVar10) {
            ppuVar5 = __ctype_b_loc();
            lVar6 = 0;
            puVar2 = *ppuVar5;
            if (param_1 == 0) {
              do {
                if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 4) != 0) {
                  puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                  *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                }
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x100);
            }
            else {
              lVar6 = 0;
              do {
                if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 4) != 0) {
                  puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                  *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                }
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x100);
            }
          }
          else {
            lVar6 = 6;
            pbVar8 = (byte *)param_6;
            pbVar9 = &DAT_004187eb;
            do {
              if (lVar6 == 0) break;
              lVar6 = lVar6 + -1;
              bVar13 = *pbVar8 < *pbVar9;
              bVar10 = *pbVar8 == *pbVar9;
              pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
              pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
            } while (bVar10);
            bVar11 = false;
            bVar10 = (!bVar13 && !bVar10) == bVar13;
            if (bVar10) {
              ppuVar5 = __ctype_b_loc();
              lVar6 = 0;
              puVar2 = *ppuVar5;
              if (param_1 == 0) {
                do {
                  if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 8) != 0) {
                    puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                    *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                  }
                  lVar6 = lVar6 + 1;
                } while (lVar6 != 0x100);
              }
              else {
                lVar6 = 0;
                do {
                  if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 8) != 0) {
                    puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                    *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                  }
                  lVar6 = lVar6 + 1;
                } while (lVar6 != 0x100);
              }
            }
            else {
              lVar6 = 6;
              pbVar8 = (byte *)param_6;
              pbVar9 = (byte *)"print";
              do {
                if (lVar6 == 0) break;
                lVar6 = lVar6 + -1;
                bVar11 = *pbVar8 < *pbVar9;
                bVar10 = *pbVar8 == *pbVar9;
                pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
              } while (bVar10);
              bVar13 = false;
              bVar10 = (!bVar11 && !bVar10) == bVar11;
              if (bVar10) {
                ppuVar5 = __ctype_b_loc();
                lVar6 = 0;
                puVar2 = *ppuVar5;
                if (param_1 == 0) {
                  do {
                    if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x40) != 0) {
                      puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                      *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                    }
                    lVar6 = lVar6 + 1;
                  } while (lVar6 != 0x100);
                }
                else {
                  lVar6 = 0;
                  do {
                    if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x40) != 0) {
                      puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                      *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                    }
                    lVar6 = lVar6 + 1;
                  } while (lVar6 != 0x100);
                }
              }
              else {
                lVar6 = 6;
                pbVar8 = (byte *)param_6;
                pbVar9 = (byte *)"upper";
                do {
                  if (lVar6 == 0) break;
                  lVar6 = lVar6 + -1;
                  bVar13 = *pbVar8 < *pbVar9;
                  bVar10 = *pbVar8 == *pbVar9;
                  pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                  pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
                } while (bVar10);
                bVar11 = false;
                bVar10 = (!bVar13 && !bVar10) == bVar13;
                if (bVar10) {
                  ppuVar5 = __ctype_b_loc();
                  lVar6 = 0;
                  puVar2 = *ppuVar5;
                  if (param_1 == 0) {
                    do {
                      if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 1) != 0) {
                        puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                        *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                      }
                      lVar6 = lVar6 + 1;
                    } while (lVar6 != 0x100);
                  }
                  else {
                    lVar6 = 0;
                    do {
                      if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 1) != 0) {
                        puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18)
                                          );
                        *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                      }
                      lVar6 = lVar6 + 1;
                    } while (lVar6 != 0x100);
                  }
                }
                else {
                  lVar6 = 6;
                  pbVar8 = (byte *)param_6;
                  pbVar9 = (byte *)"blank";
                  do {
                    if (lVar6 == 0) break;
                    lVar6 = lVar6 + -1;
                    bVar11 = *pbVar8 < *pbVar9;
                    bVar10 = *pbVar8 == *pbVar9;
                    pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                    pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
                  } while (bVar10);
                  bVar13 = false;
                  bVar10 = (!bVar11 && !bVar10) == bVar11;
                  if (bVar10) {
                    ppuVar5 = __ctype_b_loc();
                    lVar6 = 0;
                    puVar2 = *ppuVar5;
                    if (param_1 == 0) {
                      do {
                        if ((*(byte *)(puVar2 + lVar6) & 1) != 0) {
                          puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                          *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                        }
                        lVar6 = lVar6 + 1;
                      } while (lVar6 != 0x100);
                    }
                    else {
                      lVar6 = 0;
                      do {
                        if ((*(byte *)(puVar2 + lVar6) & 1) != 0) {
                          puVar1 = (ulong *)(param_2 +
                                            (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                          *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                        }
                        lVar6 = lVar6 + 1;
                      } while (lVar6 != 0x100);
                    }
                  }
                  else {
                    lVar6 = 6;
                    pbVar8 = (byte *)param_6;
                    pbVar9 = (byte *)"graph";
                    do {
                      if (lVar6 == 0) break;
                      lVar6 = lVar6 + -1;
                      bVar13 = *pbVar8 < *pbVar9;
                      bVar10 = *pbVar8 == *pbVar9;
                      pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                      pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
                    } while (bVar10);
                    if ((!bVar13 && !bVar10) == bVar13) {
                      ppuVar5 = __ctype_b_loc();
                      lVar6 = 0;
                      puVar2 = *ppuVar5;
                      if (param_1 == 0) {
                        do {
                          if ((short)puVar2[lVar6] < 0) {
                            puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                            *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                          }
                          lVar6 = lVar6 + 1;
                        } while (lVar6 != 0x100);
                      }
                      else {
                        lVar6 = 0;
                        do {
                          if ((short)puVar2[lVar6] < 0) {
                            puVar1 = (ulong *)(param_2 +
                                              (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                            *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                          }
                          lVar6 = lVar6 + 1;
                        } while (lVar6 != 0x100);
                      }
                    }
                    else {
                      iVar3 = strcmp(param_6,"punct");
                      if (iVar3 == 0) {
                        ppuVar5 = __ctype_b_loc();
                        lVar6 = 0;
                        puVar2 = *ppuVar5;
                        if (param_1 == 0) {
                          do {
                            if ((*(byte *)(puVar2 + lVar6) & 4) != 0) {
                              puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                              *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                            }
                            lVar6 = lVar6 + 1;
                          } while (lVar6 != 0x100);
                        }
                        else {
                          lVar6 = 0;
                          do {
                            if ((*(byte *)(puVar2 + lVar6) & 4) != 0) {
                              puVar1 = (ulong *)(param_2 +
                                                (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                              *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                            }
                            lVar6 = lVar6 + 1;
                          } while (lVar6 != 0x100);
                        }
                      }
                      else {
                        iVar3 = strcmp(param_6,"xdigit");
                        if (iVar3 != 0) {
                          return 4;
                        }
                        ppuVar5 = __ctype_b_loc();
                        lVar6 = 0;
                        puVar2 = *ppuVar5;
                        if (param_1 == 0) {
                          do {
                            if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x10) != 0) {
                              puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                              *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                            }
                            lVar6 = lVar6 + 1;
                          } while (lVar6 != 0x100);
                        }
                        else {
                          lVar6 = 0;
                          do {
                            if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x10) != 0) {
                              puVar1 = (ulong *)(param_2 +
                                                (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                              *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                            }
                            lVar6 = lVar6 + 1;
                          } while (lVar6 != 0x100);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


long FUN_0040db70(long param_1,undefined param_2,undefined param_3,char *param_4,byte param_5,
                 int *param_6)

{
  char cVar1;
  int iVar2;
  ulong *__ptr;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  undefined local_60;
  ulong *local_58;
  undefined local_50;
  undefined local_48 [8];
  undefined local_40;
  
  local_60 = 0;
  __ptr = (ulong *)calloc(0x20,1);
  if (__ptr != (ulong *)0x0) {
    puVar3 = (ulong *)calloc(0x50,1);
    if (puVar3 == (ulong *)0x0) {
      free(__ptr);
      *param_6 = 0xc;
      return 0;
    }
    *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfe | param_5 & 1;
    iVar2 = FUN_0040d3a0(param_2,__ptr,puVar3 + 3,puVar3 + 9,&local_60,param_3,0);
    if (iVar2 != 0) {
      free(__ptr);
      FUN_00409170(puVar3);
      *param_6 = iVar2;
      return 0;
    }
    cVar1 = *param_4;
    while (cVar1 != '\0') {
      lVar9 = (long)cVar1;
      lVar7 = lVar9 + 0x3f;
      if (-1 < lVar9) {
        lVar7 = lVar9;
      }
      param_4 = param_4 + 1;
      bVar8 = cVar1 % '@';
      cVar1 = *param_4;
      __ptr[lVar7 >> 6] = __ptr[lVar7 >> 6] | 1L << (bVar8 & 0x3f);
    }
    if (param_5 != 0) {
      puVar4 = __ptr;
      do {
        *puVar4 = ~*puVar4;
        puVar4 = puVar4 + 1;
      } while (__ptr + 4 != puVar4);
    }
    if (1 < *(int *)(param_1 + 0xb4)) {
      lVar7 = *(long *)(param_1 + 0x78);
      lVar9 = 0;
      do {
        *(ulong *)((long)__ptr + lVar9) =
             *(ulong *)((long)__ptr + lVar9) & *(ulong *)(lVar7 + lVar9);
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0x20);
    }
    lVar7 = param_1 + 0x70;
    lVar9 = param_1 + 0x80;
    local_50 = 3;
    local_58 = __ptr;
    lVar5 = FUN_0040a780(lVar7,lVar9,0,0,&local_58);
    if (lVar5 != 0) {
      if (*(int *)(param_1 + 0xb4) < 2) {
        FUN_00409170(puVar3);
        return lVar5;
      }
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 2;
      local_50 = 6;
      local_58 = puVar3;
      lVar6 = FUN_0040a780(lVar7,lVar9,0,0,&local_58);
      if (lVar6 != 0) {
        local_40 = 10;
        lVar7 = FUN_0040a780(lVar7,lVar9,lVar5,lVar6,local_48);
        return lVar7;
      }
    }
    free(__ptr);
    FUN_00409170(puVar3);
  }
  *param_6 = 0xc;
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ddb0(long **param_1,long *param_2,long *param_3,undefined *param_4)

{
  long **pplVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  wchar_t wVar9;
  long lVar10;
  __int32_t **pp_Var11;
  undefined *puVar12;
  long lVar13;
  size_t sVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long local_170;
  wint_t local_144;
  mbstate_t local_140;
  undefined local_138;
  
  uVar20 = 0;
  plVar3 = *param_1;
  if (*(int *)((long)plVar3 + 0xb4) == 1) {
    uVar20 = (uint)((ulong)param_1[3] >> 0x16) & 1;
  }
  lVar16 = 0;
  if (0 < *param_2) {
    do {
      while( true ) {
        uVar8 = _UNK_0041940c;
        uVar7 = _UNK_00419408;
        uVar6 = _UNK_00419404;
        uVar5 = _DAT_00419400;
        lVar19 = *(long *)(*param_3 + lVar16 * 8);
        lVar13 = *plVar3;
        lVar10 = lVar19 * 0x10;
        pplVar1 = (long **)(lVar13 + lVar10);
        bVar2 = *(byte *)(pplVar1 + 1);
        if (bVar2 == 1) break;
        if (bVar2 == 3) {
          local_170 = 0;
          while( true ) {
            uVar22 = 0;
            uVar15 = *(ulong *)(*(long *)(lVar13 + lVar10) + local_170);
            lVar19 = local_170 * 8;
            do {
              if (((uVar15 >> (uVar22 & 0x3f) & 1) != 0) &&
                 (*(undefined *)((long)param_4 + lVar19) = 1, uVar20 != 0)) {
                lVar13 = lVar19;
                if ((int)lVar19 + 0x80U < 0x180) {
                  pp_Var11 = __ctype_tolower_loc();
                  lVar13 = (long)(*pp_Var11)[lVar19];
                }
                *(undefined *)((long)param_4 + lVar13) = 1;
              }
              uVar21 = (int)uVar22 + 1;
              uVar22 = (ulong)uVar21;
              lVar19 = lVar19 + 1;
            } while (uVar21 != 0x40);
            local_170 = local_170 + 8;
            if (local_170 == 0x20) break;
            lVar13 = *plVar3;
          }
        }
        else if (bVar2 == 6) {
          plVar4 = *pplVar1;
          if ((*(int *)((long)plVar3 + 0xb4) < 2) ||
             (((plVar4[9] == 0 && ((*(byte *)(plVar4 + 4) & 1) == 0)) && (plVar4[8] == 0)))) {
            lVar19 = 0;
            if (0 < plVar4[5]) {
              do {
                local_140 = (mbstate_t)0x0;
                sVar14 = wcrtomb((char *)&local_138,*(wchar_t *)(*plVar4 + lVar19 * 4),&local_140);
                if (sVar14 != 0xffffffffffffffff) {
                  uVar15 = local_138 & 0xff;
                  *(undefined *)((long)param_4 + uVar15) = 1;
                  if (uVar20 != 0) {
                    pp_Var11 = __ctype_tolower_loc();
                    *(undefined *)((long)param_4 + (long)(*pp_Var11)[uVar15]) = 1;
                  }
                }
                if (((*(byte *)((long)param_1 + 0x1a) & 0x40) != 0) &&
                   (1 < *(int *)((long)plVar3 + 0xb4))) {
                  wVar9 = towlower(*(wint_t *)(*plVar4 + lVar19 * 4));
                  sVar14 = wcrtomb((char *)&local_138,wVar9,&local_140);
                  if (sVar14 != 0xffffffffffffffff) {
                    *(undefined *)((long)param_4 + (local_138 & 0xff)) = 1;
                  }
                }
                lVar19 = lVar19 + 1;
              } while (lVar19 < plVar4[5]);
            }
          }
          else {
            local_140 = (mbstate_t)((ulong)local_140 & 0xffffffffffffff00);
            do {
              local_138 = 0;
              lVar19 = FUN_00407dd0(0,&local_140,1,&local_138);
              if (lVar19 == -2) {
                *(undefined *)((long)param_4 + ((ulong)local_140 & 0xff)) = 1;
              }
              local_140 = (mbstate_t)
                          ((ulong)local_140 & 0xffffffffffffff00 |
                          (ulong)(byte)((char)local_140.__count + 1U));
            } while ((byte)((char)local_140.__count + 1U) != 0);
          }
        }
        else {
          if ((bVar2 & 0xfd) == 5) {
            *param_4 = _DAT_00419400;
            param_4[1] = uVar6;
            param_4[2] = uVar7;
            param_4[3] = uVar8;
            param_4[4] = uVar5;
            param_4[5] = uVar6;
            param_4[6] = uVar7;
            param_4[7] = uVar8;
            param_4[8] = uVar5;
            param_4[9] = uVar6;
            param_4[10] = uVar7;
            param_4[0xb] = uVar8;
            param_4[0xc] = uVar5;
            param_4[0xd] = uVar6;
            param_4[0xe] = uVar7;
            param_4[0xf] = uVar8;
            param_4[0x10] = uVar5;
            param_4[0x11] = uVar6;
            param_4[0x12] = uVar7;
            param_4[0x13] = uVar8;
            param_4[0x14] = uVar5;
            param_4[0x15] = uVar6;
            param_4[0x16] = uVar7;
            param_4[0x17] = uVar8;
            param_4[0x18] = uVar5;
            param_4[0x19] = uVar6;
            param_4[0x1a] = uVar7;
            param_4[0x1b] = uVar8;
            param_4[0x1c] = uVar5;
            param_4[0x1d] = uVar6;
            param_4[0x1e] = uVar7;
            param_4[0x1f] = uVar8;
            param_4[0x20] = uVar5;
            param_4[0x21] = uVar6;
            param_4[0x22] = uVar7;
            param_4[0x23] = uVar8;
            param_4[0x24] = uVar5;
            param_4[0x25] = uVar6;
            param_4[0x26] = uVar7;
            param_4[0x27] = uVar8;
            param_4[0x28] = uVar5;
            param_4[0x29] = uVar6;
            param_4[0x2a] = uVar7;
            param_4[0x2b] = uVar8;
            param_4[0x2c] = uVar5;
            param_4[0x2d] = uVar6;
            param_4[0x2e] = uVar7;
            param_4[0x2f] = uVar8;
            param_4[0x30] = uVar5;
            param_4[0x31] = uVar6;
            param_4[0x32] = uVar7;
            param_4[0x33] = uVar8;
            param_4[0x34] = uVar5;
            param_4[0x35] = uVar6;
            param_4[0x36] = uVar7;
            param_4[0x37] = uVar8;
            param_4[0x38] = uVar5;
            param_4[0x39] = uVar6;
            param_4[0x3a] = uVar7;
            param_4[0x3b] = uVar8;
            param_4[0x3c] = uVar5;
            param_4[0x3d] = uVar6;
            param_4[0x3e] = uVar7;
            param_4[0x3f] = uVar8;
            if (bVar2 != 2) {
              return;
            }
LAB_0040e26f:
            *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
            return;
          }
          if (bVar2 == 2) {
            *param_4 = _DAT_00419400;
            param_4[1] = uVar6;
            param_4[2] = uVar7;
            param_4[3] = uVar8;
            param_4[4] = uVar5;
            param_4[5] = uVar6;
            param_4[6] = uVar7;
            param_4[7] = uVar8;
            param_4[8] = uVar5;
            param_4[9] = uVar6;
            param_4[10] = uVar7;
            param_4[0xb] = uVar8;
            param_4[0xc] = uVar5;
            param_4[0xd] = uVar6;
            param_4[0xe] = uVar7;
            param_4[0xf] = uVar8;
            param_4[0x10] = uVar5;
            param_4[0x11] = uVar6;
            param_4[0x12] = uVar7;
            param_4[0x13] = uVar8;
            param_4[0x14] = uVar5;
            param_4[0x15] = uVar6;
            param_4[0x16] = uVar7;
            param_4[0x17] = uVar8;
            param_4[0x18] = uVar5;
            param_4[0x19] = uVar6;
            param_4[0x1a] = uVar7;
            param_4[0x1b] = uVar8;
            param_4[0x1c] = uVar5;
            param_4[0x1d] = uVar6;
            param_4[0x1e] = uVar7;
            param_4[0x1f] = uVar8;
            param_4[0x20] = uVar5;
            param_4[0x21] = uVar6;
            param_4[0x22] = uVar7;
            param_4[0x23] = uVar8;
            param_4[0x24] = uVar5;
            param_4[0x25] = uVar6;
            param_4[0x26] = uVar7;
            param_4[0x27] = uVar8;
            param_4[0x28] = uVar5;
            param_4[0x29] = uVar6;
            param_4[0x2a] = uVar7;
            param_4[0x2b] = uVar8;
            param_4[0x2c] = uVar5;
            param_4[0x2d] = uVar6;
            param_4[0x2e] = uVar7;
            param_4[0x2f] = uVar8;
            param_4[0x30] = uVar5;
            param_4[0x31] = uVar6;
            param_4[0x32] = uVar7;
            param_4[0x33] = uVar8;
            param_4[0x34] = uVar5;
            param_4[0x35] = uVar6;
            param_4[0x36] = uVar7;
            param_4[0x37] = uVar8;
            param_4[0x38] = uVar5;
            param_4[0x39] = uVar6;
            param_4[0x3a] = uVar7;
            param_4[0x3b] = uVar8;
            param_4[0x3c] = uVar5;
            param_4[0x3d] = uVar6;
            param_4[0x3e] = uVar7;
            param_4[0x3f] = uVar8;
            goto LAB_0040e26f;
          }
        }
LAB_0040de2f:
        lVar16 = lVar16 + 1;
        if (*param_2 <= lVar16) {
          return;
        }
      }
      bVar2 = *(byte *)pplVar1;
      *(undefined *)((long)param_4 + (ulong)bVar2) = 1;
      if (uVar20 != 0) {
        pp_Var11 = __ctype_tolower_loc();
        *(undefined *)((long)param_4 + (long)(*pp_Var11)[bVar2]) = 1;
      }
      if (((*(byte *)((long)param_1 + 0x1a) & 0x40) == 0) || (*(int *)((long)plVar3 + 0xb4) < 2))
      goto LAB_0040de2f;
      local_138 = local_138 & 0xffffffffffffff00 | (ulong)*(byte *)(*plVar3 + lVar10);
      uVar15 = lVar19 + 1;
      if (((ulong)plVar3[2] < uVar15 || plVar3[2] == uVar15) ||
         (puVar12 = (undefined *)(*plVar3 + 0x10 + lVar10),
         (*(uint *)(puVar12 + 8) & 0x2000ff) != 0x200001)) {
        lVar19 = 1;
      }
      else {
        puVar17 = (undefined *)((long)&local_138 + 1);
        do {
          puVar18 = puVar17 + 1;
          uVar15 = uVar15 + 1;
          *puVar17 = *puVar12;
          if ((ulong)plVar3[2] < uVar15 || plVar3[2] == uVar15) break;
          puVar12 = (undefined *)(uVar15 * 0x10 + *plVar3);
          puVar17 = puVar18;
        } while ((*(uint *)(puVar12 + 8) & 0x2000ff) == 0x200001);
        lVar19 = (long)puVar18 - (long)&local_138;
      }
      local_140 = (mbstate_t)0x0;
      lVar13 = FUN_00407dd0(&local_144,&local_138,lVar19,&local_140);
      if (lVar13 != lVar19) goto LAB_0040de2f;
      wVar9 = towlower(local_144);
      sVar14 = wcrtomb((char *)&local_138,wVar9,&local_140);
      if (sVar14 == 0xffffffffffffffff) goto LAB_0040de2f;
      lVar16 = lVar16 + 1;
      *(undefined *)((long)param_4 + (local_138 & 0xff)) = 1;
    } while (lVar16 < *param_2);
  }
  return;
}


int FUN_0040e290(long param_1,ulong *param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  wint_t __wc;
  wint_t **ppwVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  wint_t *pwVar6;
  wint_t *pwVar7;
  char *pcVar8;
  long lVar9;
  wint_t *pwVar10;
  long lVar11;
  undefined *puVar12;
  char cVar13;
  
  puVar12 = (undefined *)(param_1 + param_3 * 0x10);
  cVar13 = *(char *)(puVar12 + 1);
  if (cVar13 == '\a') {
    lVar9 = *(long *)(param_4 + 8);
    bVar3 = *(byte *)(lVar9 + param_5);
    if (0xc1 < bVar3) {
      if (param_5 + 1 < *(long *)(param_4 + 0x58)) {
        bVar1 = *(byte *)(lVar9 + 1 + param_5);
        if (bVar3 < 0xe0) {
          if ((byte)(bVar1 + 0x80) < 0x40) {
            return 2;
          }
        }
        else {
          if (bVar3 < 0xf0) {
            if ((bVar3 == 0xe0) && (bVar1 < 0xa0)) {
              return 0;
            }
            lVar11 = 3;
            iVar4 = 3;
          }
          else if (bVar3 < 0xf8) {
            if ((bVar3 == 0xf0) && (bVar1 < 0x90)) {
              return 0;
            }
            lVar11 = 4;
            iVar4 = 4;
          }
          else if (bVar3 < 0xfc) {
            if ((bVar3 == 0xf8) && (bVar1 < 0x88)) {
              return 0;
            }
            lVar11 = 5;
            iVar4 = 5;
          }
          else {
            if (0xfd < bVar3) {
              return 0;
            }
            if ((bVar3 == 0xfc) && (bVar1 < 0x84)) {
              return 0;
            }
            lVar11 = 6;
            iVar4 = 6;
          }
          if (param_5 + lVar11 <= *(long *)(param_4 + 0x58)) {
            pcVar8 = (char *)(lVar9 + param_5 + 1);
            while ((byte)(*pcVar8 + 0x80U) < 0x40) {
              pcVar8 = pcVar8 + 1;
              if ((char *)(lVar9 + param_5 + lVar11) == pcVar8) {
                return iVar4;
              }
            }
          }
        }
      }
    }
  }
  else if (*(int *)(param_4 + 0x90) != 1) {
    iVar4 = FUN_00409ac0(param_4,param_5);
    if (cVar13 == '\x05') {
      if (iVar4 < 2) {
        return 0;
      }
      if (((*param_2 & 0x40) == 0) && (*(char *)(*(long *)(param_4 + 8) + param_5) == '\n')) {
        return 0;
      }
      if ((*param_2 & 0x80) == 0) {
        return iVar4;
      }
      bVar3 = *(byte *)(*(long *)(param_4 + 8) + param_5);
    }
    else {
      if (cVar13 != '\x06') {
        return 0;
      }
      if (iVar4 < 2) {
        return 0;
      }
      ppwVar2 = (wint_t **)*puVar12;
      pwVar10 = ppwVar2[8];
      pwVar7 = ppwVar2[5];
      if ((pwVar10 != (wint_t *)0x0) || (((ulong)pwVar7 | (ulong)ppwVar2[9]) != 0)) {
        __wc = *(wint_t *)(*(long *)(param_4 + 0x10) + param_5 * 4);
        if (0 < (long)pwVar7) {
          if (__wc != **ppwVar2) {
            pwVar6 = (wint_t *)0x0;
            do {
              pwVar6 = (wint_t *)((long)pwVar6 + 1);
              if (pwVar7 == pwVar6) goto LAB_0040e36f;
            } while (__wc != (*ppwVar2)[(long)pwVar6]);
          }
LAB_0040e3a2:
          if ((*(byte *)(ppwVar2 + 4) & 1) != 0) {
            return 0;
          }
          return iVar4;
        }
LAB_0040e36f:
        if (0 < (long)ppwVar2[9]) {
          lVar9 = 0;
          do {
            iVar5 = iswctype(__wc,*(wctype_t *)(ppwVar2[3] + lVar9 * 2));
            if (iVar5 != 0) goto LAB_0040e3a2;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (long)ppwVar2[9]);
          pwVar10 = ppwVar2[8];
        }
        if (0 < (long)pwVar10) {
          pwVar7 = (wint_t *)0x0;
          do {
            if (((int)ppwVar2[1][(long)pwVar7] <= (int)__wc) &&
               ((int)__wc <= (int)ppwVar2[2][(long)pwVar7])) goto LAB_0040e3a2;
            pwVar7 = (wint_t *)((long)pwVar7 + 1);
          } while (pwVar7 != pwVar10);
        }
      }
      bVar3 = *(byte *)(ppwVar2 + 4) & 1;
    }
    if (bVar3 != 0) {
      return iVar4;
    }
  }
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_0040e520(long param_1,long *param_2,long param_3,long param_4,undefined param_5,
                  long param_6,undefined param_7)

{
  long *plVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  undefined uVar9;
  int iVar10;
  long lVar11;
  undefined uVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  long local_f0;
  long local_e8;
  uint local_80;
  uint local_7c;
  undefined local_78 [16];
  long *local_68;
  undefined local_58 [16];
  void *local_48;
  
  plVar1 = *(long **)(param_1 + 0x98);
  lVar13 = param_2[1];
  uVar2 = *(undefined *)(param_3 * 0x10 + *plVar1);
  local_80 = 0;
  lVar11 = *(int *)(param_1 + 0xe0) + param_6;
  if (lVar13 <= lVar11) {
    lVar11 = lVar11 + 1;
    if (0x7fffffffffffffff - lVar13 < lVar11) {
      return 0xc;
    }
    uVar14 = lVar13 + lVar11;
    if (0x1fffffffffffffff < uVar14) {
      return 0xc;
    }
    pvVar15 = realloc((void *)param_2[2],uVar14 * 8);
    if (pvVar15 == (void *)0x0) {
      return 0xc;
    }
    param_2[2] = (long)pvVar15;
    param_2[1] = uVar14;
    memset((void *)((long)pvVar15 + lVar13 * 8),0,lVar11 * 8);
  }
  uVar3 = *(undefined *)(param_1 + 0xb8);
  lVar11 = *param_2;
  lVar13 = param_2[2];
  uVar4 = *(undefined *)(param_1 + 0x48);
  *(long *)(param_1 + 0xb8) = lVar13;
  if (lVar11 == 0) {
    *(long *)(param_1 + 0x48) = param_4;
    uVar9 = FUN_0040b840(param_1,param_4 + -1,*(undefined *)(param_1 + 0xa0));
LAB_0040eaf4:
    local_78 = CONCAT88(1,1);
    local_68 = (long *)malloc(8);
    if (local_68 == (long *)0x0) {
      return 0xc;
    }
    *local_68 = param_3;
    local_80 = 0;
    local_80 = FUN_0040a480(plVar1,local_78,uVar2,param_7);
    if (local_80 != 0) goto LAB_0040e9d5;
  }
  else {
    *(long *)(param_1 + 0x48) = lVar11;
    uVar9 = FUN_0040b840(param_1,lVar11 + -1,*(undefined *)(param_1 + 0xa0));
    if (lVar11 == param_4) goto LAB_0040eaf4;
    lVar13 = *(long *)(lVar13 + lVar11 * 8);
    param_4 = lVar11;
    if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x68) & 0x40) == 0)) {
      local_68 = (long *)0x0;
      local_78 = (undefined)0x0;
      goto LAB_0040e60b;
    }
    uVar14 = FUN_0040abb0(local_78,lVar13 + 8);
    local_80 = (uint)uVar14;
    if (local_80 != 0) {
      return uVar14;
    }
    if ((*(byte *)(lVar13 + 0x68) & 0x40) == 0) goto LAB_0040e60b;
  }
  if (((local_78._8_8_ == 0) ||
      (local_80 = FUN_0040b360(param_1,local_78,param_4,uVar2,param_7), local_80 == 0)) &&
     ((lVar13 = FUN_0040adc0(&local_80,plVar1,local_78,uVar9), lVar13 != 0 || (local_80 == 0)))) {
    *(long *)(*(long *)(param_1 + 0xb8) + param_4 * 8) = lVar13;
LAB_0040e60b:
    if ((param_4 < param_6) && (-1 < *(int *)(param_1 + 0xe0))) {
      local_e8 = 0;
      lVar11 = *(long *)(param_1 + 0xb8);
      lVar7 = param_4;
      do {
        param_4 = lVar7 + 1;
        lVar11 = *(long *)(lVar11 + param_4 * 8);
        local_78 = local_78 & (undefined)0xffffffffffffffff;
        if (lVar11 == 0) {
          if (lVar13 != 0) goto LAB_0040e692;
        }
        else {
          local_80 = FUN_0040a050(local_78,lVar11 + 8);
          if (local_80 != 0) goto LAB_0040e9d5;
          if (lVar13 != 0) {
LAB_0040e692:
            plVar5 = *(long **)(param_1 + 0x98);
            local_7c = 0;
            local_58 = (undefined)0x0;
            local_48 = (void *)0x0;
            if (0 < *(long *)(lVar13 + 0x28)) {
              lVar11 = 0;
              do {
                local_f0 = *(long *)(*(long *)(lVar13 + 0x30) + lVar11 * 8);
                lVar16 = *plVar5 + local_f0 * 0x10;
                if ((*(byte *)(lVar16 + 10) & 0x10) != 0) {
                  iVar10 = FUN_0040e290(*plVar5,plVar5 + 0x1b,local_f0,param_1,lVar7);
                  if (iVar10 < 2) {
                    if (iVar10 == 0) {
                      lVar16 = local_f0 * 0x10 + *plVar5;
                      goto LAB_0040e6e0;
                    }
                    goto LAB_0040e6fd;
                  }
                  lVar16 = iVar10 + lVar7;
                  uVar12 = *(undefined *)(plVar5[3] + local_f0 * 8);
                  lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + lVar16 * 8);
                  local_58 = local_58 & (undefined)0xffffffffffffffff;
                  if ((lVar6 == 0) || (local_7c = FUN_0040a050(local_58,lVar6 + 8), local_7c == 0))
                  {
                    cVar8 = FUN_00408500(local_58,uVar12);
                    if (cVar8 == '\0') goto LAB_0040e9c0;
                    lVar6 = *(long *)(param_1 + 0xb8);
                    uVar12 = FUN_0040b0c0(&local_7c,plVar5,local_58);
                    *(undefined *)(lVar16 * 8 + lVar6) = uVar12;
                    if ((*(long *)(*(long *)(param_1 + 0xb8) + lVar16 * 8) != 0) || (local_7c == 0))
                    goto LAB_0040e6fd;
                  }
                  free(local_48);
                  local_80 = local_7c;
                  if (local_7c == 0) goto LAB_0040e858;
                  goto LAB_0040e9d5;
                }
LAB_0040e6e0:
                cVar8 = FUN_0040b930(param_1,lVar16,lVar7);
                if (cVar8 != '\0') {
LAB_0040e6fd:
                  local_f0 = local_f0 * 8;
                  cVar8 = FUN_00408500(local_78,*(undefined *)(plVar5[3] + local_f0));
                  if (cVar8 == '\0') {
LAB_0040e9c0:
                    free(local_48);
                    local_80 = 0xc;
                    goto LAB_0040e9d5;
                  }
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 < *(long *)(lVar13 + 0x28));
            }
            free(local_48);
            local_80 = 0;
          }
LAB_0040e858:
          if ((local_78._8_8_ != 0) &&
             ((local_80 = FUN_0040a480(plVar1,local_78,uVar2,param_7), local_80 != 0 ||
              (local_80 = FUN_0040b360(param_1,local_78,param_4,uVar2,param_7), local_80 != 0))))
          goto LAB_0040e9d5;
        }
        uVar9 = FUN_0040b840(param_1,lVar7,*(undefined *)(param_1 + 0xa0));
        lVar13 = FUN_0040adc0(&local_80,plVar1,local_78,uVar9);
        if (lVar13 == 0) {
          if (local_80 != 0) goto LAB_0040e9d5;
          lVar11 = *(long *)(param_1 + 0xb8);
          local_e8 = local_e8 + 1;
          *(undefined *)(lVar11 + param_4 * 8) = 0;
        }
        else {
          lVar11 = *(long *)(param_1 + 0xb8);
          local_e8 = 0;
          *(long *)(lVar11 + param_4 * 8) = lVar13;
        }
      } while ((param_4 < param_6) && (lVar7 = param_4, local_e8 <= *(int *)(param_1 + 0xe0)));
    }
    free(local_68);
    lVar11 = *(long *)(*(long *)(param_1 + 0xb8) + param_6 * 8);
    if (lVar11 == 0) {
      *param_2 = param_4;
      *(undefined *)(param_1 + 0xb8) = uVar3;
      *(undefined *)(param_1 + 0x48) = uVar4;
      return 1;
    }
    *param_2 = param_4;
    *(undefined *)(param_1 + 0xb8) = uVar3;
    *(undefined *)(param_1 + 0x48) = uVar4;
    lVar11 = FUN_00409b10(*(undefined *)(lVar11 + 0x10),lVar11 + 0x18,param_5);
    return (ulong)(lVar11 == 0);
  }
LAB_0040e9d5:
  free(local_68);
  return (ulong)local_80;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_0040ec40(long **param_1,size_t param_2,long param_3,size_t *param_4,char param_5)

{
  long *plVar1;
  undefined uVar2;
  size_t sVar3;
  size_t sVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  void *pvVar11;
  size_t sVar12;
  undefined *puVar13;
  long *plVar14;
  size_t sVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  size_t *psVar19;
  undefined auStack_10a0 [505];
  undefined auStack_d8 [8];
  size_t local_d0;
  char local_c1;
  void **local_c0;
  void *local_b8;
  size_t local_b0;
  size_t local_a8;
  long local_a0;
  long *local_98;
  undefined local_90;
  size_t local_80;
  undefined local_78 [16];
  void *local_68 [2];
  long local_58;
  undefined local_50;
  void *local_48;
  
  puVar13 = auStack_d8;
  local_98 = *param_1;
  local_58 = 0;
  local_50 = 2;
  local_48 = (void *)0x0;
  local_a0 = param_3;
  if (param_5 == '\0') {
    local_90 = (long *)0x0;
  }
  else {
    local_90 = &local_58;
    local_48 = malloc(0x60);
    if (local_48 == (void *)0x0) {
      return 0xc;
    }
  }
  local_68[0] = (void *)0x0;
  local_78 = (undefined)0x0;
  sVar10 = local_98[0x12];
  local_b0 = local_a0 * 0x10;
  if (local_b0 < 0xfc0) {
    local_c1 = '\0';
    puVar13 = auStack_d8 + -(local_b0 + 0x10);
    local_b8 = (void *)((long)&local_d0 + -(local_b0 + 0x10));
  }
  else {
    local_b8 = malloc(local_b0);
    local_c1 = '\x01';
    if (local_b8 == (void *)0x0) {
      if (local_90 != (long *)0x0) {
        FUN_0040d270();
      }
      return 0xc;
    }
  }
  *(undefined *)(puVar13 + -8) = 0x40ed1e;
  memcpy(local_b8,param_4,local_b0);
  local_80 = *param_4;
  local_c0 = local_68;
LAB_0040ee19:
  sVar7 = param_4[1];
  if ((long)sVar7 < (long)local_80) {
LAB_0040ef80:
    *(undefined *)(puVar13 + -8) = 0x40ef89;
    free(local_68[0]);
    if (local_c1 != '\0') {
      *(undefined *)(puVar13 + -8) = 0x40f469;
      free(local_b8);
    }
    if (local_90 != (long *)0x0) {
      *(undefined *)(puVar13 + -8) = 0x40efa7;
      FUN_0040d270();
    }
    return 0;
  }
  do {
    sVar15 = sVar10 * 0x10;
    plVar14 = (long *)(*local_98 + sVar15);
    sVar12 = local_80;
    if (*(char *)(plVar14 + 1) == '\b') {
      lVar8 = *plVar14;
      if (lVar8 + 1 < local_a0) {
        (param_4 + (lVar8 + 1) * 2)[1] = 0xffffffffffffffff;
        sVar7 = param_4[1];
        param_4[(lVar8 + 1) * 2] = local_80;
      }
    }
    else if ((*(char *)(plVar14 + 1) == '\t') && (lVar8 = *plVar14 + 1, lVar8 < local_a0)) {
      psVar19 = param_4 + lVar8 * 2;
      if ((long)*psVar19 < (long)local_80) {
        psVar19[1] = local_80;
        *(undefined *)(puVar13 + -8) = 0x40f378;
        local_d0 = sVar15;
        local_a8 = local_80;
        memcpy(local_b8,param_4,local_b0);
        sVar7 = param_4[1];
        sVar12 = local_a8;
        sVar15 = local_d0;
      }
      else if (((*(byte *)((long)plVar14 + 10) & 8) == 0) ||
              (*(long *)((long)local_b8 + lVar8 * 0x10) == -1)) {
        psVar19[1] = local_80;
        sVar7 = param_4[1];
      }
      else {
        *(undefined *)(puVar13 + -8) = 0x40f3ad;
        local_d0 = local_80;
        local_a8 = sVar15;
        memcpy(param_4,local_b8,local_b0);
        sVar7 = param_4[1];
        sVar12 = local_d0;
        sVar15 = local_a8;
      }
    }
    if ((sVar12 == sVar7) && (*(size_t *)(param_2 + 0xb0) == sVar10)) {
      if (local_90 == (long *)0x0) {
        *(undefined *)(puVar13 + -8) = 0x40f4d2;
        free(local_68[0]);
        if (local_c1 == '\0') {
          return 0;
        }
        *(undefined *)(puVar13 + -8) = 0x40f4eb;
        free(local_b8);
        return 0;
      }
      if (local_a0 == 0) {
LAB_0040f21a:
        *(undefined *)(puVar13 + -8) = 0x40f223;
        free(local_68[0]);
        if (local_c1 != '\0') {
          *(undefined *)(puVar13 + -8) = 0x40f4fe;
          free(local_b8);
        }
        *(undefined *)(puVar13 + -8) = 0x40f23c;
        FUN_0040d270(local_90);
        return 0;
      }
      lVar8 = 0;
      psVar19 = param_4;
      while (((long)*psVar19 < 0 || (psVar19[1] != 0xffffffffffffffff))) {
        lVar8 = lVar8 + 1;
        psVar19 = psVar19 + 2;
        if (local_a0 == lVar8) goto LAB_0040f21a;
      }
      if (local_a0 == lVar8) goto LAB_0040f21a;
      *(undefined *)(puVar13 + -8) = 0x40f273;
      sVar10 = FUN_0040d2c0(local_90,local_90 + 2,&local_80,local_a0,param_4,local_78);
      sVar15 = sVar10 << 4;
    }
    sVar7 = local_80;
    plVar1 = *(long **)(param_2 + 0x98);
    lVar8 = *plVar1;
    plVar14 = (long *)(lVar8 + sVar15);
    if ((*(byte *)(plVar14 + 1) & 8) == 0) {
      if ((*(byte *)((long)plVar14 + 10) & 0x10) == 0) {
        if (*(byte *)(plVar14 + 1) != 4) {
LAB_0040ed8d:
          *(undefined *)(puVar13 + -8) = 0x40ed9f;
          local_a8 = sVar7;
          cVar5 = FUN_0040b930(param_2,plVar14,sVar7);
          if (cVar5 == '\0') goto LAB_0040ef3a;
          local_80 = local_a8 + 1;
          sVar12 = *(size_t *)(plVar1[3] + sVar10 * 8);
          goto LAB_0040edba;
        }
        sVar3 = (param_4 + (*plVar14 + 1) * 2)[1];
        sVar4 = param_4[(*plVar14 + 1) * 2];
        sVar12 = sVar3 - sVar4;
        if (local_90 == (long *)0x0) {
          if (sVar12 != 0) goto LAB_0040f0c4;
LAB_0040f288:
          *(undefined *)(puVar13 + -8) = 0x40f29b;
          local_a8 = sVar15;
          cVar5 = FUN_00408500(local_78,sVar10);
          if (cVar5 == '\0') goto LAB_0040f310;
          local_d0 = local_80;
          sVar12 = **(size_t **)(plVar1[5] + sVar10 * 0x18 + 0x10);
          lVar8 = *(long *)(*(long *)(param_2 + 0xb8) + local_80 * 8);
          uVar2 = *(undefined *)(lVar8 + 0x10);
          *(undefined *)(puVar13 + -8) = 0x40f2d9;
          lVar8 = FUN_00409b10(uVar2,lVar8 + 0x18,sVar12);
          if (lVar8 != 0) goto joined_r0x0040ef2a;
          plVar14 = (long *)(*plVar1 + local_a8);
          sVar7 = local_d0;
          goto LAB_0040ed8d;
        }
        if ((sVar4 != 0xffffffffffffffff) && (sVar3 != 0xffffffffffffffff)) {
          if (sVar12 == 0) goto LAB_0040f288;
          lVar8 = *(long *)(param_2 + 8);
          *(undefined *)(puVar13 + -8) = 0x40f0b5;
          local_a8 = sVar12;
          iVar6 = memcmp((void *)(sVar4 + lVar8),(void *)(lVar8 + local_80),sVar12);
          sVar12 = local_a8;
          if (iVar6 == 0) goto LAB_0040f0c4;
        }
      }
      else {
        *(undefined *)(puVar13 + -8) = 0x40f02d;
        local_a8 = sVar15;
        iVar6 = FUN_0040e290(lVar8,plVar1 + 0x1b,sVar10,param_2,local_80);
        sVar12 = (size_t)iVar6;
        sVar7 = local_80;
        if (sVar12 == 0) {
          plVar14 = (long *)(*plVar1 + local_a8);
          goto LAB_0040ed8d;
        }
LAB_0040f0c4:
        local_80 = sVar7 + sVar12;
        sVar12 = *(size_t *)(plVar1[3] + sVar10 * 8);
LAB_0040edba:
        if (local_90 == (long *)0x0) {
LAB_0040ee04:
          local_78 = ZEXT816(local_78._0_8_);
joined_r0x0040ef2a:
          sVar10 = sVar12;
          if ((long)sVar10 < 0) {
            if (sVar10 == 0xfffffffffffffffe) {
LAB_0040f310:
              *(undefined *)(puVar13 + -8) = 0x40f319;
              free(local_68[0]);
              if (local_c1 != '\0') {
LAB_0040f480:
                *(undefined *)(puVar13 + -8) = 0x40f48c;
                free(local_b8);
              }
              if (local_90 == (long *)0x0) {
                return 0xc;
              }
LAB_0040f196:
              *(undefined *)(puVar13 + -8) = 0x40f1a2;
              FUN_0040d270(local_90);
              return 0xc;
            }
            goto LAB_0040ef3a;
          }
          goto LAB_0040ee19;
        }
        if (((long)local_80 <= *(long *)(param_2 + 0xa8)) &&
           (lVar8 = *(long *)(*(long *)(param_2 + 0xb8) + local_80 * 8), lVar8 != 0)) {
          uVar2 = *(undefined *)(lVar8 + 0x10);
          *(undefined *)(puVar13 + -8) = 0x40edfb;
          lVar8 = FUN_00409b10(uVar2,lVar8 + 0x18,sVar12);
          if (lVar8 != 0) goto LAB_0040ee04;
        }
      }
    }
    else {
      local_a8 = *(size_t *)(*(long *)(param_2 + 0xb8) + local_80 * 8);
      lVar8 = plVar1[5] + sVar10 * 0x18;
      *(undefined *)(puVar13 + -8) = 0x40eeaf;
      cVar5 = FUN_00408500(local_78,sVar10);
      if (cVar5 == '\0') goto LAB_0040f310;
      lVar17 = *(long *)(lVar8 + 8);
      if (0 < lVar17) {
        uVar2 = *(undefined *)(local_a8 + 0x10);
        lVar18 = local_a8 + 0x18;
        lVar8 = *(long *)(lVar8 + 0x10);
        lVar16 = 0;
        sVar10 = 0xffffffffffffffff;
        local_a8 = param_2;
        do {
          sVar7 = *(size_t *)(lVar8 + lVar16 * 8);
          *(undefined *)(puVar13 + -8) = 0x40ef02;
          lVar9 = FUN_00409b10(uVar2,lVar18,sVar7);
          param_2 = local_a8;
          sVar12 = sVar10;
          if ((lVar9 != 0) && (sVar12 = sVar7, sVar10 != 0xffffffffffffffff)) {
            *(undefined *)(puVar13 + -8) = 0x40f0f5;
            lVar8 = FUN_00409b10(local_78._8_8_,local_c0,sVar10);
            if ((lVar8 != 0) || (sVar12 = sVar10, local_90 == (long *)0x0)) break;
            lVar17 = *local_90;
            lVar8 = lVar17 + 1;
            *local_90 = lVar8;
            if (lVar8 == local_90[1]) {
              local_a8 = local_80;
              pvVar11 = (void *)local_90[2];
              *(undefined *)(puVar13 + -8) = 0x40f3e7;
              pvVar11 = realloc(pvVar11,lVar8 * 0x60);
              if (pvVar11 != (void *)0x0) {
                local_90[1] = local_90[1] << 1;
                local_90[2] = (long)pvVar11;
                sVar12 = local_a8;
                goto LAB_0040f12a;
              }
            }
            else {
              pvVar11 = (void *)local_90[2];
              sVar12 = local_80;
LAB_0040f12a:
              sVar15 = local_b0;
              psVar19 = (size_t *)(lVar17 * 0x30 + (long)pvVar11);
              psVar19[1] = sVar7;
              *psVar19 = sVar12;
              *(undefined *)(puVar13 + -8) = 0x40f14b;
              pvVar11 = malloc(local_b0);
              psVar19[2] = (size_t)pvVar11;
              if (pvVar11 != (void *)0x0) {
                *(undefined *)(puVar13 + -8) = 0x40f162;
                memcpy(pvVar11,param_4,sVar15);
                *(undefined *)(puVar13 + -8) = 0x40f16f;
                iVar6 = FUN_0040abb0(psVar19 + 3,local_78);
                sVar12 = sVar10;
                if (iVar6 == 0) break;
              }
            }
            *(undefined *)(puVar13 + -8) = 0x40f189;
            free(local_68[0]);
            if (local_c1 == '\0') goto LAB_0040f196;
            goto LAB_0040f480;
          }
          lVar16 = lVar16 + 1;
          sVar10 = sVar12;
        } while (lVar17 != lVar16);
        goto joined_r0x0040ef2a;
      }
LAB_0040ef3a:
      if (local_90 == (long *)0x0) {
        *(undefined *)(puVar13 + -8) = 0x40f49a;
        free(local_68[0]);
        if (local_c1 != '\0') {
          local_90 = (long *)CONCAT44(local_90._4_4_,1);
          *(undefined *)(puVar13 + -8) = 0x40f4be;
          free(local_b8);
          return (ulong)local_90 & 0xffffffff;
        }
        return 1;
      }
    }
    *(undefined *)(puVar13 + -8) = 0x40ef6a;
    sVar10 = FUN_0040d2c0(local_90,local_90 + 2,&local_80,local_a0,param_4,local_78);
    sVar7 = param_4[1];
    if ((long)sVar7 < (long)local_80) goto LAB_0040ef80;
  } while( true );
}


undefined
FUN_0040f510(long param_1,long *param_2,undefined *param_3,undefined param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  uVar3 = FUN_0040e520(param_1,param_3 + 2,*param_3,param_3[1],param_4,param_5,8);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar1 = param_3[1];
  lVar4 = *(long *)(param_1 + 200);
  lVar2 = *param_2;
  pvVar5 = *(void **)(param_1 + 0xd8);
  lVar7 = lVar1;
  if (*(long *)(param_1 + 0xd0) <= lVar4) {
    pvVar5 = realloc(pvVar5,*(long *)(param_1 + 0xd0) * 0x50);
    if (pvVar5 == (void *)0x0) {
      free(*(void **)(param_1 + 0xd8));
      return 0xc;
    }
    *(void **)(param_1 + 0xd8) = pvVar5;
    memset((void *)((long)pvVar5 + *(long *)(param_1 + 200) * 0x28),0,
           *(long *)(param_1 + 0xd0) * 0x28);
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) << 1;
    lVar4 = *(long *)(param_1 + 200);
    pvVar5 = *(void **)(param_1 + 0xd8);
    lVar7 = param_3[1];
  }
  lVar6 = lVar4 * 0x28;
  if ((0 < lVar4) && (param_5 == *(long *)((long)pvVar5 + lVar6 + -0x20))) {
    *(undefined *)((long)pvVar5 + lVar6 + -8) = 1;
  }
  puVar8 = (undefined *)((long)pvVar5 + lVar6);
  *puVar8 = param_4;
  puVar8[1] = param_5;
  *(ushort *)((long)puVar8 + 0x22) = -(ushort)(lVar1 == lVar2);
  puVar8[2] = lVar2;
  puVar8[3] = lVar1;
  *(long *)(param_1 + 200) = lVar4 + 1;
  *(undefined *)(puVar8 + 4) = 0;
  if ((long)*(int *)(param_1 + 0xe0) < lVar1 - lVar2) {
    *(int *)(param_1 + 0xe0) = (int)lVar1 - (int)lVar2;
  }
  uVar3 = FUN_004090e0(param_1,(lVar7 + param_5) - *param_2);
  return uVar3;
}


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0040f6b0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined uVar11;
  long *plVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  size_t __n;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  uint local_5c;
  undefined local_58 [16];
  void *local_48;
  
  lVar1 = *(long *)(param_1 + 0x48);
  plVar2 = *(long **)(param_1 + 0x98);
  local_e0 = 0;
  if (*param_2 < 1) {
    return 0;
  }
LAB_0040f749:
  lVar3 = *(long *)(*param_3 + local_e0 * 8);
  lVar7 = *plVar2 + lVar3 * 0x10;
  if (*(char *)(lVar7 + 8) != '\x04') goto LAB_0040f730;
  uVar16 = *(uint *)(lVar7 + 8);
  if ((uVar16 & 0x3ff00) == 0) {
LAB_0040f7c0:
    lVar19 = *(long *)(param_1 + 200);
    lVar7 = 0;
    lVar9 = lVar19;
    while (lVar7 < lVar9) {
      lVar15 = (lVar7 + lVar9) / 2;
      lVar18 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar15 * 0x28);
      while (lVar17 = lVar15, lVar1 <= lVar18) {
        if (lVar17 <= lVar7) goto LAB_0040f827;
        lVar15 = (lVar17 + lVar7) / 2;
        lVar18 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar15 * 0x28);
        lVar9 = lVar17;
      }
      lVar7 = lVar17 + 1;
    }
LAB_0040f827:
    if (((lVar7 < lVar19) &&
        (plVar10 = (long *)(*(long *)(param_1 + 0xd8) + lVar7 * 0x28), plVar10[1] == lVar1)) &&
       (lVar7 != -1)) {
      do {
        if (lVar3 == *plVar10) goto LAB_0040f85f;
        plVar4 = plVar10 + 4;
        plVar10 = plVar10 + 5;
      } while (*(char *)plVar4 != '\0');
    }
    plVar10 = *(long **)(param_1 + 0x98);
    lVar7 = *plVar10;
    lVar9 = *(long *)(lVar7 + lVar3 * 0x10);
    if (0 < *(long *)(param_1 + 0xe8)) {
      local_c8 = *(long *)(param_1 + 8);
      local_d8 = 0;
      do {
        plVar4 = *(long **)(*(long *)(param_1 + 0xf8) + local_d8 * 8);
        if (lVar9 == *(long *)(lVar7 + plVar4[1] * 0x10)) {
          lVar7 = *plVar4;
          lVar18 = lVar1;
          if (0 < plVar4[4]) {
            lVar15 = 0;
            do {
              lVar5 = *(long *)(plVar4[5] + lVar15 * 8);
              lVar14 = *(long *)(lVar5 + 8);
              __n = lVar14 - lVar7;
              lVar17 = __n + lVar18;
              if (0 < (long)__n) {
                if (*(long *)(param_1 + 0x30) < lVar17) {
                  if (lVar17 <= *(long *)(param_1 + 0x58)) {
                    uVar8 = FUN_004090e0(param_1,lVar17);
                    if ((int)uVar8 != 0) {
                      return uVar8;
                    }
                    local_c8 = *(long *)(param_1 + 8);
                    goto LAB_0040fbb1;
                  }
                }
                else {
LAB_0040fbb1:
                  iVar6 = memcmp((void *)(local_c8 + lVar18),(void *)(local_c8 + lVar7),__n);
                  if (iVar6 == 0) goto LAB_0040fbe4;
                }
                if (plVar4[4] != lVar15 && lVar15 <= plVar4[4]) goto LAB_0040f8f2;
                lVar14 = lVar7;
                lVar17 = lVar18;
                if (lVar15 < 1) goto joined_r0x0040fd08;
                break;
              }
LAB_0040fbe4:
              uVar8 = FUN_0040f510(param_1,plVar4,lVar5,lVar3,lVar1);
              local_c8 = *(long *)(param_1 + 8);
              if (1 < (uint)uVar8) {
                return uVar8;
              }
              lVar15 = lVar15 + 1;
              lVar7 = lVar14;
              lVar18 = lVar17;
            } while (lVar15 < plVar4[4]);
            lVar7 = lVar14 + 1;
            lVar18 = lVar17;
          }
joined_r0x0040fd08:
          do {
            if (lVar1 < lVar7) break;
            lVar15 = lVar18;
            if (lVar7 != *plVar4 && -1 < lVar7 - *plVar4) {
              if (*(long *)(param_1 + 0x30) == lVar18 || *(long *)(param_1 + 0x30) < lVar18) {
                if (*(long *)(param_1 + 0x58) == lVar18 || *(long *)(param_1 + 0x58) < lVar18)
                break;
                uVar8 = FUN_00408f90(param_1,(int)lVar18 + 1);
                if ((int)uVar8 != 0) {
                  return uVar8;
                }
                local_c8 = *(long *)(param_1 + 8);
              }
              lVar15 = lVar18 + 1;
              if (*(char *)(local_c8 + lVar18) != *(char *)(local_c8 + -1 + lVar7)) break;
            }
            lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + lVar7 * 8);
            if ((lVar18 != 0) && (0 < *(long *)(lVar18 + 0x10))) {
              lVar17 = 0;
              do {
                lVar5 = *(long *)(*(long *)(lVar18 + 0x18) + lVar17 * 8);
                plVar12 = (long *)(lVar5 * 0x10 + *plVar10);
                if ((*(char *)(plVar12 + 1) == '\t') && (lVar9 == *plVar12)) {
                  if (lVar5 != -1) {
                    pvVar13 = (void *)plVar4[2];
                    lVar18 = *plVar4;
                    if (pvVar13 == (void *)0x0) {
                      pvVar13 = calloc(0x18,(lVar7 - lVar18) + 1);
                      plVar4[2] = (long)pvVar13;
                      if (pvVar13 == (void *)0x0) {
                        return 0xc;
                      }
                    }
                    uVar8 = FUN_0040e520(param_1,pvVar13,plVar4[1],lVar18,lVar5,lVar7,9);
                    if ((int)uVar8 != 1) {
                      if ((int)uVar8 != 0) {
                        return uVar8;
                      }
                      if (plVar4[4] == plVar4[3]) {
                        lVar18 = plVar4[3] * 2 + 1;
                        pvVar13 = realloc((void *)plVar4[5],lVar18 * 8);
                        if (pvVar13 == (void *)0x0) {
                          return 0xc;
                        }
                        plVar4[5] = (long)pvVar13;
                        plVar4[3] = lVar18;
                      }
                      plVar12 = (long *)calloc(1,0x28);
                      if (plVar12 == (long *)0x0) {
                        return 0xc;
                      }
                      lVar18 = plVar4[4];
                      *(long **)(plVar4[5] + lVar18 * 8) = plVar12;
                      *plVar12 = lVar5;
                      plVar12[1] = lVar7;
                      plVar4[4] = lVar18 + 1;
                      FUN_0040f510(param_1,plVar4,plVar12,lVar3,lVar1);
                    }
                  }
                  break;
                }
                lVar17 = lVar17 + 1;
              } while (*(long *)(lVar18 + 0x10) != lVar17);
            }
            lVar7 = lVar7 + 1;
            lVar18 = lVar15;
          } while( true );
        }
LAB_0040f8f2:
        local_d8 = local_d8 + 1;
        if (*(long *)(param_1 + 0xe8) <= local_d8) goto LAB_0040f910;
        lVar7 = *plVar10;
      } while( true );
    }
LAB_0040f85f:
    local_5c = 0;
  }
  else {
    uVar16 = uVar16 >> 8;
    uVar8 = FUN_0040b840(param_1,lVar1,*(undefined *)(param_1 + 0xa0));
    if ((uVar16 & 4) == 0) {
      if (((uVar16 & 8) == 0) || ((uVar8 & 1) == 0)) {
LAB_0040f709:
        if ((((uVar16 & 0x20) == 0) || ((uVar8 & 2) != 0)) &&
           (((uVar16 & 0x80) == 0 || ((uVar8 & 8) != 0)))) goto LAB_0040f7c0;
      }
    }
    else if (((uVar8 & 1) != 0) && ((uVar16 & 8) == 0)) goto LAB_0040f709;
  }
  goto LAB_0040f730;
LAB_0040f910:
  local_5c = 0;
  if (lVar19 < *(long *)(param_1 + 200)) {
LAB_0040fa99:
    do {
      plVar10 = (long *)(*(long *)(param_1 + 0xd8) + lVar19 * 0x28);
      if ((lVar3 == *plVar10) && (lVar1 == plVar10[1])) {
        lVar7 = plVar10[3];
        lVar9 = plVar10[2];
        if (lVar7 == lVar9) {
          lVar18 = **(long **)(plVar2[5] + 0x10 + lVar3 * 0x18);
        }
        else {
          lVar18 = *(long *)(plVar2[3] + lVar3 * 8);
        }
        local_d0 = plVar2[6] + lVar18 * 0x18;
        lVar17 = (lVar7 + lVar1) - lVar9;
        FUN_0040b840(param_1,lVar17 + -1,*(undefined *)(param_1 + 0xa0));
        local_d8 = 0;
        plVar10 = (long *)(*(long *)(param_1 + 0xb8) + lVar17 * 8);
        lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + lVar1 * 8);
        lVar15 = *plVar10;
        if (lVar18 != 0) {
          local_d8 = *(long *)(lVar18 + 0x10);
        }
        if (lVar15 == 0) {
          lVar15 = FUN_0040adc0(&local_5c,plVar2,local_d0);
          lVar18 = *(long *)(param_1 + 0xb8);
          *plVar10 = lVar15;
          lVar15 = *(long *)(lVar18 + lVar17 * 8);
        }
        else {
          local_5c = FUN_0040ac30(local_58,*(undefined *)(lVar15 + 0x50),local_d0);
          if (local_5c != 0) {
            free(local_48);
            return (ulong)local_5c;
          }
          lVar18 = *(long *)(param_1 + 0xb8);
          uVar11 = FUN_0040adc0(&local_5c,plVar2,local_58);
          *(undefined *)(lVar17 * 8 + lVar18) = uVar11;
          free(local_48);
          lVar18 = *(long *)(param_1 + 0xb8);
          lVar15 = *(long *)(lVar18 + lVar17 * 8);
        }
        if ((lVar15 == 0) && (local_5c != 0)) {
          return (ulong)local_5c;
        }
        if ((lVar7 == lVar9) &&
           (plVar10 = (long *)(*(long *)(lVar18 + lVar1 * 8) + 0x10),
           *plVar10 != local_d8 && local_d8 <= *plVar10)) {
          uVar8 = FUN_0040b6f0(param_1,local_d0 + 8,local_d0 + 0x10);
          local_5c = (uint)uVar8;
          if (local_5c != 0) {
            return uVar8;
          }
          uVar8 = FUN_0040f6b0(param_1,local_d0 + 8,local_d0 + 0x10);
          local_5c = (uint)uVar8;
          if (local_5c != 0) {
            return uVar8;
          }
          lVar19 = lVar19 + 1;
          if (*(long *)(param_1 + 200) <= lVar19) break;
          goto LAB_0040fa99;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(long *)(param_1 + 200));
  }
LAB_0040f730:
  local_e0 = local_e0 + 1;
  if (*param_2 <= local_e0) {
    return 0;
  }
  goto LAB_0040f749;
}


long FUN_0040ff30(int *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined uVar6;
  int iVar7;
  long *plVar8;
  undefined local_58;
  undefined uStack_50;
  void *local_48;
  
  lVar1 = *(long *)(param_2 + 0x48);
  lVar2 = *(long *)(param_2 + 0x98);
  plVar8 = (long *)(*(long *)(param_2 + 0xb8) + lVar1 * 8);
  if (*(long *)(param_2 + 0xc0) < lVar1) {
    *plVar8 = param_3;
    *(long *)(param_2 + 0xc0) = lVar1;
  }
  else if (*plVar8 == 0) {
    *plVar8 = param_3;
  }
  else {
    puVar3 = *(undefined **)(*plVar8 + 0x50);
    if (param_3 == 0) {
      local_58 = *puVar3;
      uStack_50 = puVar3[1];
      local_48 = (void *)puVar3[2];
      uVar6 = FUN_0040b840(param_2,lVar1 + -1,*(undefined *)(param_2 + 0xa0));
      param_3 = FUN_0040adc0(param_1,lVar2,&local_58,uVar6);
      *plVar8 = param_3;
    }
    else {
      lVar4 = *(long *)(param_3 + 0x50);
      iVar7 = FUN_0040ac30(&local_58,lVar4,puVar3);
      *param_1 = iVar7;
      if (iVar7 != 0) {
        return 0;
      }
      uVar6 = FUN_0040b840(param_2,*(long *)(param_2 + 0x48) + -1,*(undefined *)(param_2 + 0xa0));
      lVar5 = *(long *)(param_2 + 0xb8);
      param_3 = FUN_0040adc0(param_1,lVar2,&local_58,uVar6);
      *(long *)(lVar5 + lVar1 * 8) = param_3;
      if (lVar4 != 0) {
        free(local_48);
      }
    }
  }
  if (*(long *)(lVar2 + 0x98) == 0) {
    return param_3;
  }
  if (param_3 != 0) {
    iVar7 = FUN_0040b6f0(param_2,param_3 + 0x10,param_3 + 0x18,lVar1);
    *param_1 = iVar7;
    if (iVar7 == 0) {
      if ((*(byte *)(param_3 + 0x68) & 0x40) == 0) {
        return param_3;
      }
      iVar7 = FUN_0040f6b0(param_2,param_3 + 0x10,param_3 + 0x18);
      *param_1 = iVar7;
      if (iVar7 == 0) {
        return *(long *)(*(long *)(param_2 + 0xb8) + lVar1 * 8);
      }
    }
  }
  return 0;
}


int FUN_004100f0(long param_1,void **param_2)

{
  size_t __n;
  void *pvVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  void *extraout_RDX;
  void *pvVar9;
  long lVar10;
  long lVar11;
  undefined auVar12 [16];
  long local_90;
  int local_7c;
  undefined local_58;
  undefined local_50;
  void **local_48;
  
  pvVar9 = param_2[3];
  pvVar1 = param_2[2];
  local_58 = 1;
  local_50 = 1;
  local_48 = (void **)malloc(8);
  if (local_48 == (void **)0x0) {
    return 0xc;
  }
  *local_48 = pvVar1;
  iVar7 = FUN_00411b80(param_1,param_2,pvVar9,&local_58);
  if (iVar7 == 0) {
    local_7c = 0;
    if (0 < (long)pvVar9) {
      do {
        __n = (long)pvVar9 * 8;
        if (*(long *)((long)*param_2 + (long)pvVar9 * 8) == 0) {
          local_7c = local_7c + 1;
          if (*(int *)(param_1 + 0xe0) < local_7c) goto LAB_004103d6;
        }
        else {
          local_7c = 0;
          if (*(int *)(param_1 + 0xe0) < 0) {
LAB_004103d6:
            memset(*param_2,0,__n);
            free(local_48);
            return 0;
          }
        }
        pvVar9 = (void *)((long)pvVar9 + -1);
        local_50 = 0;
        lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + -8 + __n);
        if ((lVar2 != 0) && (plVar3 = *(long **)(param_1 + 0x98), 0 < *(long *)(lVar2 + 0x28))) {
          local_90 = 0;
          do {
            lVar4 = *(long *)(*(long *)(lVar2 + 0x30) + local_90 * 8);
            lVar11 = lVar4 * 0x10;
            lVar10 = *plVar3 + lVar11;
            if ((*(byte *)(lVar10 + 10) & 0x10) == 0) {
LAB_004101f0:
              cVar6 = FUN_0040b930(param_1,lVar10,pvVar9);
              if (cVar6 != '\0') {
                lVar10 = *(long *)((long)*param_2 + __n);
                if (lVar10 != 0) {
                  auVar12 = FUN_00409b10(*(undefined *)(lVar10 + 0x10),lVar10 + 0x18,
                                         *(undefined *)(plVar3[3] + lVar4 * 8));
                  pvVar8 = SUB168(auVar12 >> 0x40,0);
                  if (SUB168(auVar12,0) != 0) {
                    iVar7 = 1;
                    goto LAB_00410231;
                  }
                }
              }
            }
            else {
              puVar5 = *(undefined **)(param_1 + 0x98);
              pvVar1 = param_2[3];
              iVar7 = FUN_0040e290(*puVar5,puVar5 + 0x1b,lVar4,param_1,pvVar9);
              pvVar8 = extraout_RDX;
              if (iVar7 < 1) {
                if (iVar7 == 0) {
LAB_00410356:
                  lVar10 = *plVar3 + lVar11;
                  goto LAB_004101f0;
                }
              }
              else if ((long)iVar7 + (long)pvVar9 <= (long)pvVar1) {
                lVar10 = *(long *)((long)*param_2 + ((long)iVar7 + (long)pvVar9) * 8);
                if (lVar10 == 0) goto LAB_00410356;
                auVar12 = FUN_00409b10(*(undefined *)(lVar10 + 0x10),lVar10 + 0x18,
                                       *(undefined *)(puVar5[3] + lVar4 * 8));
                pvVar8 = SUB168(auVar12 >> 0x40,0);
                if (SUB168(auVar12,0) == 0) {
                  lVar10 = *plVar3 + lVar11;
                  goto LAB_004101f0;
                }
              }
LAB_00410231:
              if (param_2[5] != (void *)0x0) {
                cVar6 = FUN_00409da0(param_1,param_2 + 5,param_2 + 6,
                                     *(undefined *)(plVar3[3] + lVar4 * 8),
                                     (long)iVar7 + (long)pvVar9,lVar4);
                pvVar8 = pvVar9;
                if (cVar6 != '\0') goto LAB_0041027c;
              }
              cVar6 = FUN_00408500(&local_58,lVar4,pvVar8);
              if (cVar6 == '\0') {
                iVar7 = 0xc;
                goto LAB_00410395;
              }
            }
LAB_0041027c:
            local_90 = local_90 + 1;
          } while (local_90 < *(long *)(lVar2 + 0x28));
        }
        iVar7 = FUN_00411b80(param_1,param_2,pvVar9,&local_58);
        if (iVar7 != 0) goto LAB_00410395;
      } while (pvVar9 != (void *)0x0);
    }
    iVar7 = 0;
  }
LAB_00410395:
  free(local_48);
  return iVar7;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_00410420(long **param_1,long param_2,ulong param_3,long param_4,long param_5,ulong param_6
                  ,long *param_7,ulong *param_8,uint param_9)

{
  long **pplVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined uVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long *plVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  bool bVar32;
  int local_230;
  ulong local_228;
  long *local_218;
  ulong local_210;
  uint local_1ec;
  long *local_1e8;
  long *local_1d8;
  long local_1a8;
  bool local_18b;
  uint local_188;
  uint local_184;
  long local_180;
  long *local_178;
  long *plStack_170;
  long *local_168;
  ulong local_160;
  undefined local_158 [16];
  void *local_148;
  long local_138 [2];
  int *local_128;
  long local_120;
  long local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  int local_c8;
  long *local_c0;
  long *local_b8;
  undefined local_b0;
  byte local_af;
  byte local_ae;
  char local_ad;
  char local_ac;
  byte local_ab;
  byte local_aa;
  int local_a8;
  long *local_a0;
  uint local_98;
  ulong local_90;
  long *local_88;
  long *local_80;
  long local_78;
  undefined local_70;
  long local_68;
  void *local_60;
  int local_58;
  long local_48;
  void *local_40;
  
  plVar3 = *param_1;
  plVar27 = local_138;
  for (lVar26 = 0x20; lVar26 != 0; lVar26 = lVar26 + -1) {
    *plVar27 = 0;
    plVar27 = plVar27 + 1;
  }
  plVar27 = param_1[4];
  local_1d8 = plVar27;
  if (plVar27 != (long *)0x0) {
    if (((*(byte *)(param_1 + 7) & 8) == 0) || (param_4 == param_5)) {
      local_1d8 = (long *)0x0;
    }
    else {
      local_1d8 = (long *)0x0;
      if ((*(byte *)(param_1 + 7) & 1) == 0) {
        local_1d8 = plVar27;
      }
    }
  }
  local_1a8 = 0;
  plVar27 = param_1[6];
  if (plVar27 < param_7) {
    local_1a8 = ((long)param_7 + -1) - (long)plVar27;
    param_7 = (long *)((long)param_7 + ((long)plVar27 - ((long)param_7 + -1)));
  }
  if ((((param_1[2] == (long *)0x0) || (plVar3[9] == 0)) || (plVar3[10] == 0)) ||
     ((plVar3[0xb] == 0 || (plVar3[0xc] == 0)))) {
    local_1ec = 1;
    goto LAB_00410e90;
  }
  if (((*(long *)(plVar3[9] + 0x10) == 0) && (*(long *)(plVar3[10] + 0x10) == 0)) &&
     ((*(long *)(plVar3[0xb] + 0x10) == 0 || (-1 < *(char *)(param_1 + 7))))) {
    if ((param_4 != 0) && (local_1ec = 1, param_5 != 0)) goto LAB_00410e90;
    param_5 = 0;
    param_4 = 0;
  }
  bVar32 = true;
  if (param_7 == (long *)0x0) {
    bVar32 = plVar3[0x13] != 0;
  }
  plVar27 = param_1[5];
  local_a8 = *(int *)((long)plVar3 + 0xb4);
  lVar26 = plVar3[2] + 1;
  if (plVar3[2] + 1 < (long)local_a8) {
    lVar26 = (long)local_a8;
  }
  if ((long)(param_3 + 1) < lVar26) {
    lVar26 = param_3 + 1;
  }
  local_b0 = ((ulong)param_1[3] & 0x400000) != 0;
  local_ad = ((ulong)((uint)param_1[3] & 0x400000) | (ulong)plVar27) != 0;
  local_ae = *(byte *)(plVar3 + 0x16) >> 3 & 1;
  local_af = *(byte *)(plVar3 + 0x16) >> 2 & 1;
  local_138[0] = param_2;
  local_e8 = param_3;
  local_e0 = param_3;
  local_d8 = param_3;
  local_d0 = param_3;
  local_c0 = plVar27;
  local_a0 = plVar3;
  local_1ec = FUN_004083f0(local_138,lVar26);
  plVar19 = local_80;
  if (local_1ec != 0) goto LAB_00410e70;
  local_b8 = plVar3 + 0x17;
  local_aa = *(byte *)(plVar3 + 0x16) >> 4 & 1;
  if ((local_ad != '\0') ||
     (local_108 = param_3, local_138[1] = param_2, 1 < *(int *)((long)plVar3 + 0xb4))) {
    local_108 = 0;
  }
  local_ab = *(byte *)(param_1 + 7) >> 7;
  lVar26 = plVar3[0x13];
  local_90 = 0xffffffffffffffff;
  lVar24 = lVar26 * 2;
  local_98 = param_9;
  local_100 = local_108;
  local_d8 = param_6;
  local_d0 = param_6;
  if (lVar24 < 1) {
LAB_0041076c:
    local_58 = 1;
    local_68 = lVar24;
    local_48 = lVar24;
    if ((param_7 < (long *)0x2) && ((*(byte *)(plVar3 + 0x16) & 2) == 0)) {
      local_80 = (long *)0x0;
    }
    else {
      if (0x1ffffffffffffffe < local_f8) goto LAB_00411471;
      local_80 = (long *)malloc(local_f8 * 8 + 8);
      plVar19 = local_80;
      if (local_80 == (long *)0x0) {
LAB_00411422:
        local_1ec = 0xc;
        goto LAB_00410e70;
      }
    }
    local_c8 = (-(uint)((param_9 & 1) == 0) & 2) + 4;
    iVar7 = ((param_4 <= param_5) - 1) + (uint)(param_4 <= param_5);
    lVar26 = param_5;
    if (param_4 <= param_5) {
      lVar26 = param_4;
    }
    lVar24 = param_5;
    if (param_5 <= param_4) {
      lVar24 = param_4;
    }
    iVar2 = *(int *)((long)plVar3 + 0xb4);
    uVar25 = 8;
    if (local_1d8 != (long *)0x0) {
      uVar25 = 4;
      if (iVar2 != 1) {
        uVar25 = (uint)(((ulong)((uint)param_1[3] & 0x400000) | (ulong)plVar27) == 0) << 2;
      }
      uVar25 = plVar27 != (long *)0x0 | uVar25 | (uint)(param_4 <= param_5) * 2;
    }
    local_180 = param_4;
    if (param_4 <= lVar24 && lVar26 <= param_4) {
      plVar27 = (long *)0x0;
      if (param_4 <= param_5) {
        plVar27 = &local_180;
      }
      do {
        if (uVar25 - 4 < 5) {
                    /* WARNING: Could not recover jumptable at 0x004108e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar13 = (*(code *)(&PTR_DAT_00418908)[uVar25 - 4])();
          return uVar13;
        }
        while( true ) {
          lVar21 = local_180;
          uVar13 = local_180 - local_110;
          if (local_100 <= uVar13) {
            local_1ec = FUN_0040bb30(local_138,local_180,param_9);
            plVar19 = local_80;
            if (local_1ec != 0) goto LAB_00410e70;
            uVar13 = lVar21 - local_110;
          }
          plVar19 = local_1d8;
          if (lVar21 < (long)param_3) {
            plVar19 = (long *)((ulong)*(byte *)(local_138[1] + uVar13) + (long)local_1d8);
          }
          if (*(char *)plVar19 != '\0') break;
          local_180 = lVar21 + iVar7;
          if ((local_180 < lVar26) || (lVar24 < local_180)) goto LAB_00410dc0;
        }
        uVar8 = FUN_0040bb30(local_138,lVar21,param_9);
        plVar31 = local_a0;
        uVar13 = local_f0;
        plVar19 = local_80;
        local_1ec = uVar8;
        if (uVar8 != 0) goto LAB_00410e70;
        if (((iVar2 == 1) || (local_108 == 0)) || (*local_128 != -1)) {
          local_58 = 0;
          local_70 = 0;
          lVar21 = local_a0[9];
          local_78 = 0;
          local_188 = 0;
          local_228 = local_f0;
          if (*(char *)(lVar21 + 0x68) < '\0') {
            uVar9 = FUN_0040b840(local_138,local_f0 - 1,local_98);
            if ((uVar9 & 1) == 0) {
              if (uVar9 == 0) goto LAB_00410a80;
              if ((uVar9 & 6) == 6) {
                lVar21 = plVar31[0xc];
              }
              else if ((uVar9 & 2) == 0) {
                if ((uVar9 & 4) == 0) goto LAB_00410a80;
                lVar21 = FUN_0040adc0(&local_188,plVar31,*(undefined *)(lVar21 + 0x50),uVar9);
              }
              else {
                lVar21 = plVar31[0xb];
              }
            }
            else {
              lVar21 = plVar31[10];
            }
            if (lVar21 == 0) {
              local_1ec = local_188;
              plVar19 = local_80;
              if (local_188 != 0xc) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("err == REG_ESPACE","lib/regexec.c",0x431,"check_matching");
              }
              goto LAB_00410e70;
            }
          }
LAB_00410a80:
          if ((local_80 == (long *)0x0) ||
             (lVar14 = plVar31[0x13], local_80[uVar13] = lVar21, lVar14 == 0)) {
            bVar5 = *(byte *)(lVar21 + 0x68);
            local_18b = plVar27 != (long *)0x0;
LAB_00410ab8:
            local_218 = (long *)0x0;
            local_210 = 0xffffffffffffffff;
            uVar15 = local_f0;
            local_1e8 = plVar27;
            if ((((bVar5 & 0x10) == 0) ||
                ((*(char *)(lVar21 + 0x68) < '\0' &&
                 (local_218 = (long *)FUN_0040ba60(local_138,*(undefined *)(lVar21 + 0x10),
                                                   lVar21 + 0x18,uVar13), uVar15 = local_f0,
                 local_218 == (long *)0x0)))) ||
               (local_218 = (long *)0x1, uVar15 = local_f0, local_210 = uVar13, bVar32)) {
              while ((long)uVar15 < (long)local_d0) {
                uVar13 = uVar15 + 1;
                if ((((long)uVar13 < (long)local_f8) || ((long)local_e0 <= (long)local_f8)) &&
                   (((long)uVar13 < (long)local_108 || ((long)local_e0 <= (long)local_108)))) {
                  bVar5 = *(byte *)(lVar21 + 0x68);
                  plVar19 = local_a0;
                }
                else {
                  local_230 = (int)uVar13;
                  local_188 = FUN_00408f90(local_138,local_230 + 1);
                  if (local_188 != 0) {
                    if (local_188 != 0xc) {
                    /* WARNING: Subroutine does not return */
                      __assert_fail("err == REG_ESPACE","lib/regexec.c",0x468,"check_matching");
                    }
                    goto LAB_00411471;
                  }
                  bVar5 = *(byte *)(lVar21 + 0x68);
                  uVar15 = local_f0;
                  plVar19 = local_a0;
                }
                local_a0 = plVar19;
                if ((bVar5 & 0x20) != 0) {
                  if (0 < *(long *)(lVar21 + 0x10)) {
                    lVar14 = 0;
                    do {
                      lVar29 = *plVar19;
                      lVar16 = *(long *)(*(long *)(lVar21 + 0x18) + lVar14 * 8);
                      lVar17 = lVar16 * 0x10 + lVar29;
                      if ((*(byte *)(lVar17 + 10) & 0x10) == 0) goto LAB_004110ee;
                      uVar9 = *(uint *)(lVar17 + 8);
                      if ((uVar9 & 0x3ff00) == 0) {
LAB_00410fe0:
                        iVar10 = FUN_0040e290(lVar29,plVar19 + 0x1b,lVar16,local_138);
                        uVar15 = local_f0;
                        if (iVar10 != 0) {
                          lVar29 = (long)iVar10 + local_f0;
                          if (iVar10 <= local_58) {
                            iVar10 = local_58;
                          }
                          local_58 = iVar10;
                          local_184 = FUN_004090e0(local_138,lVar29);
                          uVar9 = local_184;
                          if (local_184 != 0) goto joined_r0x004113e2;
                          plVar31 = local_80 + lVar29;
                          pplVar1 = (long **)(plVar19[6] + *(long *)(plVar19[3] + lVar16 * 8) * 0x18
                                             );
                          lVar16 = *plVar31;
                          if (lVar16 == 0) {
                            local_178 = *pplVar1;
                            plStack_170 = pplVar1[1];
                            local_168 = pplVar1[2];
                            uVar11 = FUN_0040b840(local_138,lVar29 + -1,local_98);
                            lVar16 = FUN_0040adc0(&local_184,plVar19,&local_178,uVar11);
                            *plVar31 = lVar16;
                            lVar29 = local_80[lVar29];
                            uVar15 = local_f0;
                          }
                          else {
                            local_184 = FUN_0040ac30(&local_178,*(undefined *)(lVar16 + 0x50));
                            uVar9 = local_184;
                            if (local_184 != 0) goto joined_r0x004113e2;
                            uVar11 = FUN_0040b840(local_138,lVar29 + -1,local_98);
                            plVar31 = local_80 + lVar29;
                            lVar16 = FUN_0040adc0(&local_184,plVar19,&local_178,uVar11);
                            *plVar31 = lVar16;
                            free(local_168);
                            lVar29 = local_80[lVar29];
                            uVar15 = local_f0;
                          }
                          local_f0 = uVar15;
                          if ((lVar29 == 0) && (uVar9 = local_184, local_184 != 0))
                          goto joined_r0x004113e2;
                        }
                      }
                      else {
                        uVar18 = FUN_0040b840(local_138,uVar15,local_98);
                        uVar28 = uVar9 >> 8;
                        if ((uVar28 & 4) == 0) {
                          if (((uVar28 & 8) == 0) || ((uVar18 & 1) == 0)) {
LAB_00410fc1:
                            if ((((uVar28 & 0x20) == 0) || ((uVar18 & 2) != 0)) &&
                               (((uVar9 & 0x8000) == 0 || ((uVar18 & 8) != 0)))) goto LAB_00410fe0;
                          }
                        }
                        else if (((uVar18 & 1) != 0) && ((uVar28 & 8) == 0)) goto LAB_00410fc1;
                      }
LAB_004110ee:
                      lVar14 = lVar14 + 1;
                    } while (lVar14 < *(long *)(lVar21 + 0x10));
                  }
                  local_188 = 0;
                }
                local_f0 = uVar15 + 1;
                uVar15 = (ulong)*(byte *)(local_138[1] + uVar15);
                do {
                  if (*(long *)(lVar21 + 0x58) != 0) {
                    lVar14 = *(long *)(*(long *)(lVar21 + 0x58) + uVar15 * 8);
LAB_00410bbd:
                    if (local_80 != (long *)0x0) goto LAB_00410bc8;
                    goto LAB_00410bde;
                  }
                  lVar14 = *(long *)(lVar21 + 0x60);
                  if (lVar14 != 0) {
                    uVar18 = FUN_0040b840(local_138,local_f0 - 1,local_98);
                    if ((uVar18 & 1) == 0) {
                      lVar14 = *(long *)(lVar14 + uVar15 * 8);
                    }
                    else {
                      lVar14 = *(long *)(lVar14 + 0x800 + uVar15 * 8);
                    }
                    goto LAB_00410bbd;
                  }
                  cVar6 = FUN_0040c550(local_a0,lVar21);
                } while (cVar6 != '\0');
                local_188 = 0xc;
                uVar9 = local_188;
joined_r0x004113e2:
                local_188 = uVar9;
                if (local_80 == (long *)0x0) {
                  plVar19 = (long *)0x0;
                  goto LAB_00411422;
                }
                lVar14 = 0;
LAB_00410bc8:
                lVar14 = FUN_0040ff30(&local_188,local_138,lVar14);
LAB_00410bde:
                if (lVar14 == 0) {
                  plVar19 = local_80;
                  if (local_188 != 0) goto LAB_00411422;
                  if ((local_80 == (long *)0x0) || (((byte)local_218 & (bVar32 ^ 1U)) != 0)) break;
                  do {
                    bVar4 = false;
                    uVar15 = local_f0;
                    do {
                      uVar18 = uVar15 + 1;
                      if (local_78 < (long)uVar18) {
                        if (bVar4) {
                          local_f0 = uVar15;
                        }
                        goto LAB_00410c5d;
                      }
                      bVar4 = true;
                      uVar15 = uVar18;
                    } while (local_80[uVar18] == 0);
                    local_f0 = uVar18;
                    lVar14 = FUN_0040ff30(&local_188,local_138,0);
                    if (local_188 != 0) {
                      if (lVar14 == 0) goto LAB_00410c5d;
                      break;
                    }
                  } while (lVar14 == 0);
                }
                uVar15 = local_f0;
                local_18b = (bool)(local_18b & lVar21 == lVar14);
                if (!local_18b) {
                  uVar13 = local_228;
                }
                lVar21 = lVar14;
                local_228 = uVar13;
                if (((*(byte *)(lVar14 + 0x68) & 0x10) != 0) &&
                   ((-1 < (char)*(byte *)(lVar14 + 0x68) ||
                    (lVar14 = FUN_0040ba60(local_138,*(undefined *)(lVar14 + 0x10),lVar14 + 0x18,
                                           local_f0), lVar14 != 0)))) {
                  uVar13 = uVar15;
                  if (!bVar32) goto LAB_00410c6f;
                  local_210 = uVar15;
                  local_218 = (long *)0x1;
                  local_1e8 = (long *)0x0;
                }
              }
LAB_00410c5d:
              uVar13 = local_210;
              if (local_1e8 != (long *)0x0) {
                *local_1e8 = *local_1e8 + local_228;
              }
            }
          }
          else {
            local_188 = FUN_0040b6f0(local_138,lVar21 + 0x10,lVar21 + 0x18,0);
            if (local_188 == 0) {
              bVar5 = *(byte *)(lVar21 + 0x68);
              if ((bVar5 & 0x40) != 0) {
                local_188 = FUN_0040f6b0(local_138,lVar21 + 0x10,lVar21 + 0x18);
                if (local_188 != 0) goto LAB_00411b2e;
                bVar5 = *(byte *)(lVar21 + 0x68);
              }
              local_18b = false;
              goto LAB_00410ab8;
            }
LAB_00411b2e:
            uVar13 = (long)(int)local_188;
          }
LAB_00410c6f:
          plVar19 = local_80;
          if (uVar13 != 0xffffffffffffffff) {
            if (uVar13 == 0xfffffffffffffffe) goto LAB_00411471;
            local_90 = uVar13;
            if (((*(byte *)(param_1 + 7) & 0x10) == 0) && ((long *)0x1 < param_7)) {
              local_88 = (long *)FUN_0040ba60(local_138,*(undefined *)(local_80[uVar13] + 0x10),
                                              local_80[uVar13] + 0x18,uVar13);
              if (((*(byte *)(plVar3 + 0x16) & 1) != 0) || (plVar3[0x13] != 0)) {
LAB_004114bf:
                plVar20 = local_88;
                plVar31 = local_a0;
                if (uVar13 < 0x1fffffffffffffff) {
                  uVar15 = uVar13 + 1;
                  plVar19 = (long *)malloc(uVar15 * 8);
                  if (plVar19 == (long *)0x0) goto LAB_00411471;
                  if (plVar31[0x13] == 0) {
                    plStack_170 = (long *)0x0;
                    local_158 = (undefined)0x0;
                    local_148 = (void *)0x0;
                    local_178 = plVar19;
                    local_168 = plVar20;
                    local_160 = uVar13;
                    local_1ec = FUN_004100f0(local_138,&local_178);
                    free(local_148);
                    if (local_1ec == 0) {
                      if (*plVar19 == 0) {
                        free(plVar19);
                        goto LAB_004112d0;
                      }
LAB_00411628:
                      free(local_80);
                      local_90 = uVar13;
                      local_88 = plVar20;
                      local_80 = plVar19;
                      goto LAB_00410e53;
                    }
LAB_00411ab9:
                    local_218 = (long *)0x0;
                  }
                  else {
                    local_218 = (long *)malloc(uVar15 * 8);
                    if (local_218 == (long *)0x0) {
                      free(plVar19);
                      local_1ec = 0xc;
                      plVar19 = local_80;
                      goto LAB_00410e70;
                    }
                    while( true ) {
                      memset(local_218,0,uVar15 * 8);
                      local_158 = (undefined)0x0;
                      local_148 = (void *)0x0;
                      local_178 = plVar19;
                      plStack_170 = local_218;
                      local_168 = plVar20;
                      local_160 = uVar13;
                      local_1ec = FUN_004100f0(local_138,&local_178);
                      free(local_148);
                      if (local_1ec != 0) break;
                      if ((*plVar19 != 0) || (*local_218 != 0)) {
                        local_1ec = FUN_0040b2b0(plVar31,plVar19,local_218,uVar15);
                        free(local_218);
                        if (local_1ec != 0) goto LAB_00411ab9;
                        goto LAB_00411628;
                      }
                      do {
                        uVar15 = uVar13;
                        uVar13 = uVar15 - 1;
                        if (uVar13 == 0xffffffffffffffff) {
                          free(plVar19);
                          free(local_218);
                          FUN_00409780(local_138);
                          lVar21 = local_180;
                          goto LAB_004112e0;
                        }
                        lVar21 = local_80[uVar13];
                      } while ((lVar21 == 0) || ((*(byte *)(lVar21 + 0x68) & 0x10) == 0));
                      plVar20 = (long *)FUN_0040ba60(local_138,*(undefined *)(lVar21 + 0x10),
                                                     lVar21 + 0x18,uVar13);
                    }
                  }
                  free(plVar19);
                  free(local_218);
                  plVar19 = local_80;
                  if (local_1ec == 1) goto LAB_004112d0;
                  goto LAB_00410e70;
                }
                local_1ec = 0xc;
                goto LAB_00410e70;
              }
            }
            else if (plVar3[0x13] != 0) {
              local_88 = (long *)FUN_0040ba60(local_138,*(undefined *)(local_80[uVar13] + 0x10),
                                              local_80[uVar13] + 0x18,uVar13);
              goto LAB_004114bf;
            }
LAB_00410e53:
            plVar19 = local_80;
            local_1ec = uVar8;
            if (param_7 == (long *)0x0) goto LAB_00410e70;
            puVar23 = param_8 + 2;
            if ((long *)0x1 < param_7) goto LAB_00411830;
            *param_8 = 0;
            param_8[1] = local_90;
            goto LAB_00411b27;
          }
LAB_004112d0:
          FUN_00409780(local_138);
          lVar21 = local_180;
        }
LAB_004112e0:
        local_180 = lVar21 + iVar7;
      } while ((lVar26 <= local_180) && (local_180 <= lVar24));
    }
LAB_00410dc0:
    local_1ec = 1;
    plVar19 = local_80;
  }
  else {
    if (lVar24 < 0x666666666666667) {
      pvVar12 = malloc(lVar26 * 0x50);
      local_60 = pvVar12;
      local_40 = malloc(lVar26 << 4);
      if ((local_40 != (void *)0x0) && (pvVar12 != (void *)0x0)) goto LAB_0041076c;
    }
LAB_00411471:
    local_1ec = 0xc;
    plVar19 = local_80;
  }
LAB_00410e70:
  free(plVar19);
  if (plVar3[0x13] != 0) {
    FUN_00409780(local_138);
    free(local_40);
    free(local_60);
  }
  FUN_00409740(local_138);
LAB_00410e90:
  return (ulong)local_1ec;
LAB_00411830:
  do {
    puVar23[1] = 0xffffffffffffffff;
    puVar22 = puVar23 + 2;
    *puVar23 = 0xffffffffffffffff;
    puVar23 = puVar22;
  } while (param_8 + (long)param_7 * 2 != puVar22);
  *param_8 = 0;
  param_8[1] = local_90;
  if (((*(byte *)(param_1 + 7) & 0x10) == 0) && (param_7 != (long *)0x1)) {
    bVar32 = false;
    if ((*(byte *)(plVar3 + 0x16) & 1) != 0) {
      bVar32 = 0 < plVar3[0x13];
    }
    local_1ec = FUN_0040ec40(param_1,local_138,param_7,param_8,bVar32);
    plVar19 = local_80;
    if (local_1ec != 0) goto LAB_00410e70;
    uVar13 = *param_8;
  }
  else {
LAB_00411b27:
    uVar13 = 0;
  }
  plVar27 = (long *)0x0;
  puVar23 = param_8;
  while( true ) {
    if (uVar13 != 0xffffffffffffffff) {
      uVar15 = puVar23[1];
      uVar18 = uVar13;
      uVar30 = uVar15;
      if (local_ac != '\0') {
        uVar18 = local_100;
        if (local_108 != uVar13) {
          uVar18 = *(ulong *)(local_120 + uVar13 * 8);
        }
        *puVar23 = uVar18;
        uVar30 = local_100;
        if (local_108 != uVar15) {
          uVar30 = *(ulong *)(local_120 + uVar15 * 8);
        }
      }
      *puVar23 = uVar18 + local_180;
      puVar23[1] = uVar30 + local_180;
    }
    plVar27 = (long *)((long)plVar27 + 1);
    puVar23 = puVar23 + 2;
    if (plVar27 == param_7) break;
    uVar13 = *puVar23;
  }
  if (0 < local_1a8) {
    puVar23 = param_8 + (long)param_7 * 2;
    do {
      *puVar23 = 0xffffffffffffffff;
      puVar22 = puVar23 + 2;
      puVar23[1] = 0xffffffffffffffff;
      puVar23 = puVar22;
    } while (param_8 + (local_1a8 + (long)param_7) * 2 != puVar22);
  }
  lVar26 = plVar3[0x1c];
  plVar19 = local_80;
  local_1ec = uVar8;
  if (lVar26 != 0) {
    for (lVar24 = 0; lVar24 != (long)param_7 + -1; lVar24 = lVar24 + 1) {
      lVar21 = *(long *)(lVar26 + lVar24 * 8);
      if (lVar21 != lVar24) {
        param_8[lVar24 * 2 + 2] = param_8[(lVar21 + 1) * 2];
        param_8[lVar24 * 2 + 3] = param_8[(*(long *)(lVar26 + lVar24 * 8) + 1) * 2 + 1];
      }
    }
  }
  goto LAB_00410e70;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_00411b80(long param_1,ulong *param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  undefined uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  void **ppvVar23;
  long lVar24;
  long lVar25;
  uint local_7c;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  void *local_48 [3];
  
  lVar2 = param_3 * 8;
  plVar4 = *(long **)(param_1 + 0x98);
  plVar16 = (long *)(lVar2 + *(long *)(param_1 + 0xb8));
  lVar5 = *plVar16;
  local_7c = 0;
  if (lVar5 == 0) {
    uVar11 = *param_2;
    if (*(long *)(param_4 + 8) == 0) {
      *(undefined *)(lVar2 + uVar11) = 0;
      return 0;
    }
    uVar12 = FUN_0040b0c0(&local_7c,plVar4,param_4);
    *(undefined *)(lVar2 + uVar11) = uVar12;
    return (ulong)local_7c;
  }
  if (*(long *)(param_4 + 8) == 0) {
    *(undefined *)(*param_2 + param_3 * 8) = 0;
    bVar3 = *(byte *)(*plVar16 + 0x68);
  }
  else {
    local_78 = local_78 & 0xffffffff00000000;
    lVar9 = FUN_0040b0c0(&local_78,plVar4,param_4);
    if ((int)local_78 != 0) {
      return local_78 & 0xffffffff;
    }
    lVar25 = *(long *)(lVar9 + 0x38);
    if (lVar25 == 0) {
      lVar24 = *(long *)(param_4 + 8);
      *(undefined *)(lVar9 + 0x40) = 0;
      *(long *)(lVar9 + 0x38) = lVar24;
      pvVar10 = malloc(lVar24 << 3);
      *(void **)(lVar9 + 0x48) = pvVar10;
      if (pvVar10 == (void *)0x0) {
        return 0xc;
      }
      local_78 = local_78 & 0xffffffff00000000;
      if (0 < *(long *)(param_4 + 8)) {
        do {
          uVar8 = FUN_0040a050(lVar9 + 0x38,
                               plVar4[7] + *(long *)(*(long *)(param_4 + 0x10) + lVar25 * 8) * 0x18)
          ;
          local_78 = local_78 & 0xffffffff00000000 | (ulong)uVar8;
          if (uVar8 != 0) {
            return 0xc;
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 < *(long *)(param_4 + 8));
      }
    }
    lVar25 = lVar5 + 8;
    uVar11 = FUN_0040a5c0(param_4,lVar25,lVar9 + 0x38);
    local_7c = (uint)uVar11;
    if (local_7c != 0) {
      return uVar11;
    }
    if (param_2[5] != 0) {
      lVar9 = *(long *)(param_1 + 0xd8);
      if (0 < (long)param_2[5]) {
        lVar24 = 0;
        do {
          plVar16 = (long *)(lVar9 + *(long *)(param_2[6] + lVar24 * 8) * 0x28);
          if ((plVar16[2] < (long)param_3) && ((long)param_3 <= plVar16[1])) {
            lVar15 = *plVar4;
            lVar18 = *(long *)(param_4 + 8);
            lVar13 = *(long *)(lVar15 + *plVar16 * 0x10);
            if (param_3 == plVar16[3]) {
              if (0 < lVar18) {
                plVar16 = *(long **)(param_4 + 0x10);
                lVar22 = -1;
                lVar21 = -1;
                plVar17 = plVar16;
                do {
                  while( true ) {
                    lVar6 = *plVar17;
                    plVar19 = (long *)(lVar6 * 0x10 + lVar15);
                    if (*(char *)(plVar19 + 1) != '\b') break;
                    if (lVar13 == *plVar19) {
                      lVar21 = lVar6;
                    }
                    plVar17 = plVar17 + 1;
                    if (plVar16 + lVar18 == plVar17) goto LAB_004122ae;
                  }
                  if ((*(char *)(plVar19 + 1) == '\t') && (lVar13 == *plVar19)) {
                    lVar22 = lVar6;
                  }
                  plVar17 = plVar17 + 1;
                } while (plVar16 + lVar18 != plVar17);
LAB_004122ae:
                if (lVar21 < 0) {
                  if (-1 < lVar22) {
LAB_004122cb:
                    lVar18 = 0;
                    while( true ) {
                      lVar13 = plVar16[lVar18];
                      lVar21 = lVar13 * 0x18;
                      lVar15 = FUN_00409b10(*(undefined *)(plVar4[7] + lVar21 + 8),
                                            plVar4[7] + lVar21 + 0x10,lVar22);
                      if ((lVar15 == 0) &&
                         (lVar15 = FUN_00409b10(*(undefined *)(lVar21 + plVar4[6] + 8),
                                                lVar21 + plVar4[6] + 0x10), lVar15 == 0)) {
                        uVar11 = FUN_0040c320(plVar4,lVar13,param_4,lVar25);
                        if ((int)uVar11 != 0) {
                          return uVar11;
                        }
                      }
                      else {
                        lVar18 = lVar18 + 1;
                      }
                      if (*(long *)(param_4 + 8) == lVar18 || *(long *)(param_4 + 8) < lVar18)
                      break;
                      plVar16 = *(long **)(param_4 + 0x10);
                    }
                  }
                }
                else {
                  uVar11 = FUN_0040c320(plVar4,lVar21,param_4,lVar25);
                  if ((int)uVar11 != 0) {
                    return uVar11;
                  }
                  if ((-1 < lVar22) && (0 < *(long *)(param_4 + 8))) {
                    plVar16 = *(long **)(param_4 + 0x10);
                    goto LAB_004122cb;
                  }
                }
              }
            }
            else {
              lVar21 = 0;
              if (0 < lVar18) {
                do {
                  lVar18 = *(long *)(*(long *)(param_4 + 0x10) + lVar21 * 8);
                  plVar16 = (long *)(lVar15 + lVar18 * 0x10);
                  if ((*(byte *)(plVar16 + 1) - 8 < 2) && (lVar13 == *plVar16)) {
                    uVar11 = FUN_0040c320(plVar4,lVar18,param_4,lVar25);
                    if ((int)uVar11 != 0) {
                      return uVar11;
                    }
                    if (*(long *)(param_4 + 8) <= lVar21 + 1) break;
                  }
                  else if (*(long *)(param_4 + 8) <= lVar21 + 1) break;
                  lVar21 = lVar21 + 1;
                  lVar15 = *plVar4;
                } while( true );
              }
            }
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 < (long)param_2[5]);
      }
      local_7c = 0;
    }
    uVar11 = *param_2;
    uVar12 = FUN_0040b0c0(&local_7c,plVar4,param_4);
    *(undefined *)(lVar2 + uVar11) = uVar12;
    if (local_7c != 0) {
      return (ulong)local_7c;
    }
    bVar3 = *(byte *)(*(long *)(lVar2 + *(long *)(param_1 + 0xb8)) + 0x68);
  }
  if ((bVar3 & 0x40) != 0) {
    lVar9 = 0;
    lVar25 = *(long *)(param_1 + 200);
    while (lVar9 < lVar25) {
      lVar18 = (lVar9 + lVar25) / 2;
      lVar24 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar18 * 0x28);
      while (lVar13 = lVar18, (long)param_3 <= lVar24) {
        if (lVar13 <= lVar9) goto LAB_00411db3;
        lVar18 = (lVar9 + lVar13) / 2;
        lVar24 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar18 * 0x28);
        lVar25 = lVar13;
      }
      lVar9 = lVar13 + 1;
    }
LAB_00411db3:
    if (((lVar9 < *(long *)(param_1 + 200)) &&
        (param_3 == *(ulong *)(*(long *)(param_1 + 0xd8) + 8 + lVar9 * 0x28))) && (lVar9 != -1)) {
      plVar4 = *(long **)(param_1 + 0x98);
      local_78 = 0;
      if (0 < *(long *)(lVar5 + 0x10)) {
        lVar25 = 0;
        do {
          uVar11 = *(ulong *)(*(long *)(lVar5 + 0x18) + lVar25 * 8);
          if (((uVar11 != param_2[2]) || (param_3 != param_2[3])) &&
             (*(char *)(uVar11 * 0x10 + *plVar4 + 8) == '\x04')) {
            puVar20 = (ulong *)(lVar9 * 0x28 + *(long *)(param_1 + 0xd8));
            lVar24 = lVar9;
            do {
              if (uVar11 == *puVar20) {
                lVar18 = param_3 + (puVar20[3] - puVar20[2]);
                if (puVar20[3] - puVar20[2] == 0) {
                  uVar12 = **(undefined **)(plVar4[5] + 0x10 + uVar11 * 0x18);
                }
                else {
                  uVar12 = *(undefined *)(plVar4[3] + uVar11 * 8);
                }
                if (((lVar18 <= (long)param_2[3]) &&
                    (lVar13 = *(long *)(*param_2 + lVar18 * 8), lVar13 != 0)) &&
                   ((lVar13 = FUN_00409b10(*(undefined *)(lVar13 + 0x10),lVar13 + 0x18,uVar12),
                    lVar13 != 0 &&
                    (cVar7 = FUN_00409da0(param_1,param_2 + 5,param_2 + 6,uVar11,param_3),
                    cVar7 == '\0')))) {
                  if (local_78 == 0) {
                    local_78 = *param_2;
                    uStack_70 = param_2[1];
                    local_68 = param_2[2];
                    uStack_60 = param_2[3];
                    local_58 = param_2[4];
                    uStack_50 = param_2[5];
                    local_48[0] = (void *)param_2[6];
                    uVar14 = FUN_0040abb0(&local_58,param_2 + 4,lVar18,0x411ee7);
                    if ((int)uVar14 == 0) goto LAB_00411f24;
                  }
                  else {
LAB_00411f24:
                    local_68 = uVar11;
                    uStack_60 = param_3;
                    cVar7 = FUN_00408500(&local_58,lVar24);
                    if (cVar7 == '\0') {
                      uVar14 = 0xc;
                    }
                    else {
                      uVar12 = *(undefined *)(local_78 + lVar2);
                      uVar14 = FUN_004100f0(param_1,&local_78);
                      if (((int)uVar14 == 0) &&
                         ((param_2[1] == 0 ||
                          (uVar14 = FUN_0040b2b0(plVar4,param_2[1],local_78,param_3 + 1),
                          (int)uVar14 == 0)))) {
                        ppvVar23 = local_48;
                        *(undefined *)(local_78 + lVar2) = uVar12;
                        uVar14 = uStack_50;
                        lVar18 = FUN_00409b10(uStack_50,ppvVar23,lVar24);
                        lVar18 = lVar18 + -1;
                        if ((-1 < lVar18) && (lVar18 < (long)uVar14)) {
                          uStack_50 = uVar14 - 1;
                          FUN_00409c80(&uStack_50,ppvVar23,lVar18);
                        }
                        puVar20 = (ulong *)(*(long *)(param_1 + 0xd8) + lVar24 * 0x28);
                        goto LAB_00412000;
                      }
                    }
                  }
                  if (local_78 == 0) {
                    return uVar14;
                  }
                  goto LAB_0041211c;
                }
              }
LAB_00412000:
              lVar24 = lVar24 + 1;
              puVar1 = puVar20 + 4;
              puVar20 = puVar20 + 5;
            } while (*(char *)puVar1 != '\0');
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 < *(long *)(lVar5 + 0x10));
        if (local_78 != 0) {
          uVar14 = 0;
LAB_0041211c:
          free(local_48[0]);
          return uVar14 & 0xffffffff;
        }
      }
    }
  }
  return 0;
}


undefined
FUN_004123b0(undefined *param_1,long *param_2,byte *param_3,int param_4,undefined param_5,
            char param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  undefined auStack_38 [8];
  char local_30;
  
  lVar6 = (long)param_4;
  lVar4 = param_2[9];
  if ((*(int *)(param_2 + 0x12) != 1) && (iVar1 = FUN_00409ac0(param_2,lVar4), 1 < iVar1)) {
    lVar6 = param_2[2];
    *param_1 = 1;
    param_1[2] = *(undefined *)(lVar6 + lVar4 * 4);
    param_2[9] = iVar1 + lVar4;
    return 0;
  }
  bVar7 = param_3[8];
  lVar6 = lVar6 + lVar4;
  param_2[9] = lVar6;
  if (((bVar7 & 0xfb) != 0x1a) && (bVar7 != 0x1c)) {
    if (((bVar7 == 0x16) && (param_6 == '\0')) &&
       (FUN_00408020(auStack_38,param_2,param_5), local_30 != '\x15')) {
      return 0xb;
    }
    bVar7 = *param_3;
    *param_1 = 0;
    *(byte *)(param_1 + 2) = bVar7;
    return 0;
  }
  if (param_2[0xd] <= lVar6) {
    return 7;
  }
  uVar5 = (ulong)*param_3;
  lVar4 = 0;
  do {
    iVar1 = (int)lVar4;
    if ((bVar7 == 0x1e) && (*(char *)((long)param_2 + 0x8b) != '\0')) {
      if (*(char *)((long)param_2 + 0x8c) == '\0') {
        lVar3 = lVar6 + 1;
        param_2[9] = lVar3;
        bVar7 = *(byte *)(lVar6 + *param_2 + param_2[5]);
      }
      else {
        if (((lVar6 != param_2[6]) && (*(int *)(param_2[2] + lVar6 * 4) == -1)) ||
           (bVar7 = *(byte *)(*(long *)(param_2[3] + lVar6 * 8) + *param_2 + param_2[5]),
           (bVar7 & 0x80) != 0)) goto LAB_00412489;
        lVar3 = 1;
        if (*(int *)(param_2 + 0x12) != 1) {
          iVar2 = FUN_00409ac0(param_2,lVar6);
          lVar3 = (long)iVar2;
        }
        lVar3 = lVar3 + lVar6;
        param_2[9] = lVar3;
      }
    }
    else {
LAB_00412489:
      lVar3 = lVar6 + 1;
      param_2[9] = lVar3;
      bVar7 = *(byte *)(param_2[1] + lVar6);
    }
    if (param_2[0xd] == lVar3 || param_2[0xd] < lVar3) {
      return 7;
    }
    if (((byte)uVar5 == bVar7) && (*(char *)(param_2[1] + lVar3) == ']')) {
      param_2[9] = lVar3 + 1;
      *(undefined *)(*(long *)(param_1 + 2) + (long)iVar1) = 0;
      bVar7 = param_3[8];
      if (bVar7 == 0x1c) {
        *param_1 = 2;
        return 0;
      }
      if (bVar7 != 0x1e) {
        if (bVar7 != 0x1a) {
          return 0;
        }
        *param_1 = 3;
        return 0;
      }
      *param_1 = 4;
      return 0;
    }
    *(byte *)(*(long *)(param_1 + 2) + lVar4) = bVar7;
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x20) {
      return 7;
    }
    bVar7 = param_3[8];
    lVar6 = param_2[9];
  } while( true );
}


undefined FUN_004125d0(long *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ushort **ppuVar7;
  undefined uVar8;
  wint_t wVar9;
  byte bVar10;
  uint uVar11;
  undefined local_48 [8];
  char local_40;
  
  lVar2 = param_2[9];
  if (param_2[0xd] == lVar2 || param_2[0xd] < lVar2) {
    *(undefined *)(param_1 + 1) = 2;
    return 0;
  }
  lVar3 = param_2[1];
  iVar5 = *(int *)(param_2 + 0x12);
  bVar1 = *(byte *)(lVar3 + lVar2);
  bVar10 = *(byte *)((long)param_1 + 10) & 0x9f;
  *(byte *)((long)param_1 + 10) = bVar10;
  *(byte *)param_1 = bVar1;
  uVar11 = (uint)param_3;
  if (iVar5 < 2) {
    if (bVar1 == 0x5c) goto LAB_004126d0;
    *(undefined *)(param_1 + 1) = 1;
    ppuVar7 = __ctype_b_loc();
    *(byte *)((long)param_1 + 10) =
         bVar10 | (byte)(((*ppuVar7)[bVar1] >> 3 & 1 | (uint)(bVar1 == 0x5f)) << 6);
  }
  else {
    if ((lVar2 != param_2[6]) && (*(int *)(param_2[2] + lVar2 * 4) == -1)) {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xffdfff00 | 0x200001;
      return 1;
    }
    if (bVar1 == 0x5c) {
LAB_004126d0:
      lVar4 = lVar2 + 1;
      if (param_2[0xb] <= lVar4) {
        *(undefined *)(param_1 + 1) = 0x24;
        return 1;
      }
      if (*(char *)((long)param_2 + 0x8b) == '\0') {
LAB_0041271e:
        uVar6 = (uint)*(byte *)(lVar3 + 1 + lVar2);
LAB_0041272b:
        *(char *)param_1 = (char)uVar6;
        *(undefined *)(param_1 + 1) = 1;
        if (1 < iVar5) {
          wVar9 = *(wint_t *)(param_2[2] + lVar4 * 4);
          goto LAB_0041273e;
        }
        ppuVar7 = __ctype_b_loc();
        *(byte *)((long)param_1 + 10) =
             (byte)(((*ppuVar7)[uVar6] >> 3 & 1 | (uint)((char)uVar6 == '_')) << 6) |
             *(byte *)((long)param_1 + 10) & 0xbf;
      }
      else {
        if (iVar5 < 2) {
LAB_00412bf2:
          if (*(char *)((long)param_2 + 0x8c) == '\0') {
            uVar6 = (uint)*(byte *)(*param_2 + lVar4 + param_2[5]);
          }
          else {
            bVar1 = *(byte *)(*param_2 + param_2[5] + *(long *)(param_2[3] + lVar4 * 8));
            uVar6 = (uint)bVar1;
            if ((bVar1 & 0x80) != 0) goto LAB_0041271e;
          }
          goto LAB_0041272b;
        }
        wVar9 = *(wint_t *)(param_2[2] + lVar4 * 4);
        if ((wVar9 != 0xffffffff) &&
           ((param_2[6] == lVar2 + 2 || (*(int *)(param_2[2] + 4 + lVar4 * 4) != -1))))
        goto LAB_00412bf2;
        bVar1 = *(byte *)(lVar3 + 1 + lVar2);
        *(undefined *)(param_1 + 1) = 1;
        uVar6 = (uint)bVar1;
        *(byte *)param_1 = bVar1;
LAB_0041273e:
        iVar5 = iswalnum(wVar9);
        *(byte *)((long)param_1 + 10) =
             *(byte *)((long)param_1 + 10) & 0xbf | (iVar5 != 0 || wVar9 == 0x5f) << 6;
      }
      switch(uVar6 - 0x27 & 0xff) {
      case 0:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 0x80;
          return 2;
        }
        return 2;
      case 1:
        uVar8 = 2;
        if ((param_3 & 0x2000) != 0) {
          return 2;
        }
        break;
      case 2:
        uVar8 = 2;
        if ((param_3 & 0x2000) != 0) {
          return 2;
        }
        goto LAB_0041280a;
      default:
        return 2;
      case 4:
        uVar8 = 2;
        if ((uVar11 & 0x402) != 2) {
          return 2;
        }
        goto LAB_00412842;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
        if ((param_3 & 0x4000) == 0) {
          *(undefined *)(param_1 + 1) = 4;
          *param_1 = (long)(int)(uVar6 - 0x31);
          return 2;
        }
        return 2;
      case 0x15:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 6;
          return 2;
        }
        return 2;
      case 0x17:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 9;
          return 2;
        }
        return 2;
      case 0x18:
        uVar8 = 2;
        if ((uVar11 & 0x402) != 2) {
          return 2;
        }
        goto LAB_00412872;
      case 0x1b:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 0x200;
          return 2;
        }
        return 2;
      case 0x2c:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0x23;
          return 2;
        }
        return 2;
      case 0x30:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0x21;
          return 2;
        }
        return 2;
      case 0x39:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 0x40;
          return 2;
        }
        return 2;
      case 0x3b:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 0x100;
          return 2;
        }
        return 2;
      case 0x4c:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0x22;
          return 2;
        }
        return 2;
      case 0x50:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0x20;
          return 2;
        }
        return 2;
      case 0x54:
        uVar8 = 2;
        if ((uVar11 & 0x1200) != 0x200) {
          return 2;
        }
        goto LAB_004128d9;
      case 0x55:
        if ((param_3 & 0x8400) == 0) {
          *(undefined *)(param_1 + 1) = 10;
          return 2;
        }
        return 2;
      case 0x56:
        uVar8 = 2;
        if ((uVar11 & 0x1200) != 0x200) {
          return 2;
        }
        goto LAB_004129a1;
      }
      goto LAB_004127ea;
    }
    lVar4 = param_2[2];
    *(undefined *)(param_1 + 1) = 1;
    wVar9 = *(wint_t *)(lVar4 + lVar2 * 4);
    iVar5 = iswalnum(wVar9);
    *(byte *)((long)param_1 + 10) =
         *(byte *)((long)param_1 + 10) & 0xbf | (iVar5 != 0 || wVar9 == 0x5f) << 6;
  }
  switch(bVar1) {
  case 10:
    if ((param_3 & 0x800) == 0) {
      return 1;
    }
    break;
  default:
    return 1;
  case 0x24:
    if (((param_3 & 8) == 0) && (lVar2 + 1 != param_2[0xb])) {
      param_2[9] = lVar2 + 1;
      FUN_004125d0(local_48,param_2,param_3);
      param_2[9] = param_2[9] + -1;
      if (1 < (byte)(local_40 - 9U)) {
        return 1;
      }
    }
    *(undefined *)(param_1 + 1) = 0xc;
    *(undefined *)param_1 = 0x20;
    return 1;
  case 0x28:
    uVar8 = 1;
    if ((param_3 & 0x2000) == 0) {
      return 1;
    }
LAB_004127ea:
    *(undefined *)(param_1 + 1) = 8;
    return uVar8;
  case 0x29:
    uVar8 = 1;
    if ((param_3 & 0x2000) == 0) {
      return 1;
    }
LAB_0041280a:
    *(undefined *)(param_1 + 1) = 9;
    return uVar8;
  case 0x2a:
    *(undefined *)(param_1 + 1) = 0xb;
    return 1;
  case 0x2b:
    uVar8 = 1;
    if ((param_3 & 0x402) != 0) {
      return 1;
    }
LAB_00412842:
    *(undefined *)(param_1 + 1) = 0x12;
    return uVar8;
  case 0x2e:
    *(undefined *)(param_1 + 1) = 5;
    return 1;
  case 0x3f:
    uVar8 = 1;
    if ((param_3 & 0x402) != 0) {
      return 1;
    }
LAB_00412872:
    *(undefined *)(param_1 + 1) = 0x13;
    return uVar8;
  case 0x5b:
    *(undefined *)(param_1 + 1) = 0x14;
    return 1;
  case 0x5e:
    if (((param_3 & 0x800008) == 0) && (lVar2 != 0)) {
      if (*(char *)(lVar3 + -1 + lVar2) != '\n') {
        return 1;
      }
      if ((param_3 & 0x800) == 0) {
        return 1;
      }
    }
    *(undefined *)(param_1 + 1) = 0xc;
    *(undefined *)param_1 = 0x10;
    return 1;
  case 0x7b:
    uVar8 = 1;
    if ((uVar11 & 0x1200) != 0x1200) {
      return 1;
    }
LAB_004128d9:
    *(undefined *)(param_1 + 1) = 0x17;
    return uVar8;
  case 0x7c:
    if ((uVar11 & 0x8400) != 0x8000) {
      return 1;
    }
    break;
  case 0x7d:
    uVar8 = 1;
    if ((uVar11 & 0x1200) != 0x1200) {
      return 1;
    }
LAB_004129a1:
    *(undefined *)(param_1 + 1) = 0x18;
    return uVar8;
  }
  *(undefined *)(param_1 + 1) = 10;
  return 1;
}


long FUN_00412c80(long param_1,byte *param_2,undefined param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = -2;
  lVar5 = -1;
  while( true ) {
    lVar4 = lVar5;
    iVar3 = FUN_004125d0(param_2,param_1,param_3);
    bVar1 = *param_2;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar3;
    bVar2 = param_2[8];
    if (bVar2 == 2) {
      return -2;
    }
    if (bVar2 == 0x18) break;
    if (bVar1 == 0x2c) {
      return lVar4;
    }
    lVar5 = lVar6;
    if (((bVar2 == 1) && ((byte)(bVar1 - 0x30) < 10)) && (lVar4 != -2)) {
      if (lVar4 == -1) {
        lVar5 = (long)(int)(bVar1 - 0x30);
      }
      else {
        lVar5 = (ulong)bVar1 + lVar4 * 10;
        if (0x8030 < lVar5) {
          lVar5 = 0x8030;
        }
        lVar5 = lVar5 + -0x30;
      }
    }
  }
  return lVar4;
}


/* WARNING: Switch with 1 destination removed at 0x0041356d */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Exceeded maximum restarts with more pending */

long FUN_00412d40(long param_1,long *param_2,undefined *param_3,ulong param_4,long param_5,
                 int *param_6)

{
  long lVar1;
  undefined uVar2;
  undefined uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong *__ptr;
  ulong *__ptr_00;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ushort **ppuVar12;
  ulong **ppuVar13;
  void *__ptr_01;
  void *__ptr_02;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  undefined uVar19;
  ushort *puVar20;
  undefined uVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  byte bVar25;
  ulong local_118;
  long local_100;
  ulong local_f8;
  uint local_a8 [2];
  ulong **local_a0;
  int local_98 [2];
  char *local_90;
  undefined local_88 [8];
  char local_80;
  ulong *local_78;
  undefined local_70;
  char local_58 [8];
  undefined local_50;
  
  bVar25 = 0;
  lVar9 = *param_2;
  cVar4 = *(char *)(param_3 + 1);
  switch(cVar4) {
  default:
    goto LAB_00412e0a;
  case '\x01':
    lVar8 = lVar9 + 0x70;
    lVar7 = lVar9 + 0x80;
    local_100 = FUN_0040a780(lVar8,lVar7,0,0,param_3);
    if (local_100 != 0) {
      if (*(int *)(lVar9 + 0xb4) < 2) goto LAB_00412de0;
      do {
        lVar11 = *(long *)(param_1 + 0x48);
        if (((*(long *)(param_1 + 0x68) == lVar11 || *(long *)(param_1 + 0x68) < lVar11) ||
            (lVar11 == *(long *)(param_1 + 0x30))) ||
           (*(int *)(*(long *)(param_1 + 0x10) + lVar11 * 4) != -1)) goto LAB_00412de0;
        iVar5 = FUN_004125d0(param_3,param_1,param_4);
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
        lVar11 = FUN_0040a780(lVar8,lVar7,0,0,param_3);
        local_50 = 0x10;
        local_100 = FUN_0040a780(lVar8,lVar7,local_100,lVar11,local_58);
      } while (lVar11 != 0 && local_100 != 0);
    }
    break;
  case '\x04':
    uVar15 = (ulong)(1 << ((byte)*param_3 & 0x1f));
    if ((*(ulong *)(lVar9 + 0xa8) & uVar15) == 0) {
      *param_6 = 6;
      return 0;
    }
    *(ulong *)(lVar9 + 0xa0) = *(ulong *)(lVar9 + 0xa0) | uVar15;
    local_100 = FUN_0040a780(lVar9 + 0x70,lVar9 + 0x80,0,0,param_3);
    if (local_100 == 0) break;
    *(long *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) + 1;
    *(byte *)(lVar9 + 0xb0) = *(byte *)(lVar9 + 0xb0) | 2;
    goto LAB_00412de0;
  case '\x05':
    local_100 = FUN_0040a780(lVar9 + 0x70,lVar9 + 0x80,0,0,param_3);
    if (local_100 != 0) {
      if (1 < *(int *)(lVar9 + 0xb4)) {
        *(byte *)(lVar9 + 0xb0) = *(byte *)(lVar9 + 0xb0) | 2;
      }
      goto LAB_00412de0;
    }
    break;
  case '\b':
    uVar15 = param_2[6];
    param_2[6] = uVar15 + 1;
    iVar5 = FUN_004125d0(param_3,param_1,param_4 | 0x800000);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
    lVar8 = 0;
    if (*(char *)(param_3 + 1) != '\t') {
      lVar8 = FUN_00414370(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
      if (*param_6 != 0) {
        return 0;
      }
      if (*(char *)(param_3 + 1) != '\t') {
        if (lVar8 != 0) {
          FUN_00407fb0(lVar8,FUN_004091c0,0);
        }
        *param_6 = 8;
        return 0;
      }
    }
    if (uVar15 < 9) {
      *(ulong *)(lVar9 + 0xa8) = *(ulong *)(lVar9 + 0xa8) | (long)(1 << ((byte)uVar15 & 0x1f));
    }
    local_50 = 0x11;
    local_100 = FUN_0040a780(lVar9 + 0x70,lVar9 + 0x80,lVar8,0,local_58);
    if (local_100 != 0) {
      *(ulong *)(local_100 + 0x28) = uVar15;
      goto LAB_00412de0;
    }
    break;
  case '\t':
    goto switchD_00412d7b_caseD_9;
  case '\v':
  case '\x12':
  case '\x13':
    goto switchD_00412d7b_caseD_b;
  case '\f':
    uVar23 = *(uint *)param_3;
    if (((uVar23 & 0x30f) != 0) && (bVar25 = *(byte *)(lVar9 + 0xb0), (bVar25 & 0x10) == 0)) {
      *(byte *)(lVar9 + 0xb0) = bVar25 | 0x10;
      if ((bVar25 & 8) == 0) {
        *(undefined *)(lVar9 + 0xb8) = 0x3ff000000000000;
        *(undefined *)(lVar9 + 0xc0) = 0x7fffffe87fffffe;
        if ((bVar25 & 4) != 0) {
          *(undefined (*) [16])(lVar9 + 200) = (undefined)0x0;
          uVar23 = *(uint *)param_3;
          goto LAB_004137f0;
        }
        iVar5 = 0x80;
        iVar6 = 2;
      }
      else {
        iVar5 = 0;
        iVar6 = 0;
      }
      ppuVar12 = __ctype_b_loc();
      iVar22 = iVar5 + 0x100;
      lVar8 = lVar9 + (long)iVar6 * 8;
      puVar20 = *ppuVar12 + iVar5;
      do {
        lVar7 = 0;
        do {
          if (((*(byte *)(puVar20 + lVar7) & 8) != 0) || (iVar5 + (int)lVar7 == 0x5f)) {
            *(ulong *)(lVar8 + 0xb8) = *(ulong *)(lVar8 + 0xb8) | 1L << ((byte)lVar7 & 0x3f);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x40);
        iVar5 = iVar5 + 0x40;
        lVar8 = lVar8 + 8;
        puVar20 = puVar20 + 0x40;
      } while (iVar22 + iVar6 * -0x40 != iVar5);
    }
LAB_004137f0:
    lVar8 = lVar9 + 0x70;
    lVar9 = lVar9 + 0x80;
    if ((uVar23 - 0x100 & 0xfffffeff) == 0) {
      if (uVar23 == 0x100) {
        *(uint *)param_3 = 6;
        lVar7 = FUN_0040a780(lVar8,lVar9,0,0,param_3);
        *(uint *)param_3 = 9;
      }
      else {
        *(uint *)param_3 = 5;
        lVar7 = FUN_0040a780(lVar8,lVar9,0,0,param_3);
        *(uint *)param_3 = 10;
      }
      lVar11 = FUN_0040a780(lVar8,lVar9,0,0,param_3);
      local_50 = 10;
      lVar9 = FUN_0040a780(lVar8,lVar9,lVar7,lVar11,local_58);
      if (lVar7 == 0 || lVar11 == 0) break;
    }
    else {
      lVar9 = FUN_0040a780(lVar8,lVar9,0,0,param_3);
    }
    if (lVar9 != 0) {
      iVar5 = FUN_004125d0(param_3,param_1,param_4);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
      return lVar9;
    }
    break;
  case '\x14':
    __ptr = (ulong *)calloc(0x20,1);
    __ptr_00 = (ulong *)calloc(0x50,1);
    if (__ptr != (ulong *)0x0 && __ptr_00 != (ulong *)0x0) {
      iVar5 = FUN_00408020(param_3,param_1,param_4);
      cVar4 = *(char *)(param_3 + 1);
      if (cVar4 != '\x02') {
        bVar24 = false;
        if (cVar4 != '\x19') {
LAB_004134d2:
          if (cVar4 == '\x15') {
            *(undefined *)(param_3 + 1) = 1;
          }
          local_f8 = 0;
          uVar21 = 1;
LAB_004134fe:
          local_a8[0] = 3;
          local_a0 = &local_78;
          iVar5 = FUN_004123b0(local_a8,param_1,param_3,iVar5,param_4,uVar21);
          if (iVar5 == 0) {
            iVar5 = FUN_00408020(param_3,param_1,param_4);
            if ((local_a8[0] - 2 & 0xfffffffd) == 0) {
LAB_00413564:
              if (4 < local_a8[0]) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("0","lib/regcomp.c",0xcf3,"parse_bracket_exp");
              }
                    /* WARNING: This code block may not be properly labeled as switch case */
              iVar6 = FUN_0040d350(__ptr,local_a0);
              *param_6 = iVar6;
              if (iVar6 == 0) {
LAB_0041395f:
                if (*(char *)(param_3 + 1) == '\x02') goto LAB_00413ac5;
                if (*(char *)(param_3 + 1) != '\x15') goto code_r0x00413975;
                *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
                if (bVar24) {
                  puVar10 = __ptr;
                  do {
                    *puVar10 = ~*puVar10;
                    puVar10 = puVar10 + 1;
                  } while (__ptr + 4 != puVar10);
                }
                iVar5 = *(int *)(lVar9 + 0xb4);
                if (1 < iVar5) {
                  lVar8 = *(long *)(lVar9 + 0x78);
                  lVar7 = 0;
                  do {
                    *(ulong *)((long)__ptr + lVar7) =
                         *(ulong *)((long)__ptr + lVar7) & *(ulong *)(lVar8 + lVar7);
                    lVar7 = lVar7 + 8;
                  } while (lVar7 != 0x20);
                }
                if (((((__ptr_00[5] != 0) || (__ptr_00[6] != 0)) || (__ptr_00[7] != 0)) ||
                    (__ptr_00[8] != 0)) ||
                   ((1 < iVar5 && ((__ptr_00[9] != 0 || ((*(byte *)(__ptr_00 + 4) & 1) != 0)))))) {
                  *(byte *)(lVar9 + 0xb0) = *(byte *)(lVar9 + 0xb0) | 2;
                  lVar8 = lVar9 + 0x70;
                  lVar7 = lVar9 + 0x80;
                  local_70 = 6;
                  local_78 = __ptr_00;
                  local_100 = FUN_0040a780(lVar8,lVar7,0,0,&local_78);
                  puVar10 = __ptr;
                  if (local_100 != 0) {
                    while (*puVar10 == 0) {
                      puVar10 = puVar10 + 1;
                      if (__ptr + 4 == puVar10) {
                        free(__ptr);
                        goto LAB_00412de0;
                      }
                    }
                    local_70 = 3;
                    local_78 = __ptr;
                    lVar11 = FUN_0040a780(lVar8,lVar7,0,0,&local_78);
                    if (lVar11 != 0) {
                      local_50 = 10;
                      local_100 = FUN_0040a780(lVar8,lVar7,lVar11,local_100,local_58);
                      goto joined_r0x00413e98;
                    }
                  }
LAB_00413e9e:
                  *param_6 = 0xc;
                  goto LAB_004139fb;
                }
                FUN_00409170(__ptr_00);
                local_70 = 3;
                local_78 = __ptr;
                local_100 = FUN_0040a780(lVar9 + 0x70,lVar9 + 0x80,0,0,&local_78);
joined_r0x00413e98:
                if (local_100 == 0) goto LAB_00413e9e;
                goto LAB_00412de0;
              }
              goto LAB_004139fb;
            }
            if (*(char *)(param_3 + 1) == '\x02') {
LAB_00413ac5:
              *param_6 = 7;
              goto LAB_004139fb;
            }
            if (*(char *)(param_3 + 1) != '\x16') goto LAB_00413564;
            *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
            FUN_00408020(local_88);
            if (local_80 == '\x02') goto LAB_00413ac5;
            if (local_80 == '\x15') {
              *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)-iVar5;
              *(undefined *)(param_3 + 1) = 1;
              goto LAB_00413564;
            }
            local_90 = local_58;
            local_98[0] = 3;
            iVar5 = FUN_004123b0(local_98);
            if (iVar5 == 0) {
              iVar5 = FUN_00408020(param_3,param_1,param_4);
              puVar10 = (ulong *)0x0;
              if (1 < *(int *)(lVar9 + 0xb4)) {
                puVar10 = __ptr_00;
              }
              if (((local_a8[0] - 2 & 0xfffffffd) == 0) || ((local_98[0] - 2U & 0xfffffffd) == 0)) {
LAB_004140a6:
                *param_6 = 0xb;
              }
              else {
                if (local_a8[0] == 3) {
                  uVar15 = 0xffffffffffffffff;
                  uVar18 = 0xffffffffffffffff;
                  ppuVar13 = local_a0;
                  do {
                    if (uVar18 == 0) break;
                    uVar18 = uVar18 - 1;
                    cVar4 = *(char *)ppuVar13;
                    ppuVar13 = (ulong **)((long)ppuVar13 + (ulong)bVar25 * -2 + 1);
                  } while (cVar4 != '\0');
                  if (~uVar18 - 1 < 2) {
                    pcVar14 = local_90;
                    if (local_98[0] == 3) {
                      do {
                        if (uVar15 == 0) break;
                        uVar15 = uVar15 - 1;
                        cVar4 = *pcVar14;
                        pcVar14 = pcVar14 + (ulong)bVar25 * -2 + 1;
                      } while (cVar4 != '\0');
                      if (1 < ~uVar15 - 1) goto LAB_00413fa5;
                    }
                    local_a0._0_1_ = *(char *)local_a0;
LAB_00413c3f:
                    if (local_98[0] != 0) {
                      local_90._0_1_ = '\0';
                      if (local_98[0] != 3) goto LAB_00413c5a;
                      goto LAB_00413c56;
                    }
LAB_00414099:
                    goto LAB_00413c5a;
                  }
                }
                else {
                  if (local_98[0] == 3) {
                    uVar15 = 0xffffffffffffffff;
                    pcVar14 = local_90;
                    do {
                      if (uVar15 == 0) break;
                      uVar15 = uVar15 - 1;
                      cVar4 = *pcVar14;
                      pcVar14 = pcVar14 + (ulong)bVar25 * -2 + 1;
                    } while (cVar4 != '\0');
                    if (1 < ~uVar15 - 1) goto LAB_00413fa5;
                    local_a0._0_1_ = '\0';
                    if (local_a8[0] == 0) goto LAB_00413c3a;
LAB_00413c56:
                    local_90._0_1_ = *local_90;
                  }
                  else {
                    if (local_a8[0] == 0) {
LAB_00413c3a:
                      goto LAB_00413c3f;
                    }
                    local_a0._0_1_ = '\0';
                    local_90._0_1_ = '\0';
                    if (local_98[0] == 0) goto LAB_00414099;
                  }
LAB_00413c5a:
                  if ((local_a8[0] == 0) || (ppuVar13 = local_a0, local_a8[0] == 3)) {
                    ppuVar13 = (ulong **)FUN_00408730((char)local_a0,puVar10);
                  }
                  uVar23 = (uint)ppuVar13;
                  if ((local_98[0] == 0) || (local_98[0] == 3)) {
                    local_90._0_4_ = FUN_00408730((char)local_90,puVar10);
                  }
                  if ((uVar23 != 0xffffffff) && ((uint)local_90 != 0xffffffff)) {
                    if (((param_4 & 0x10000) != 0) && ((uint)local_90 < uVar23)) goto LAB_004140a6;
                    if (puVar10 != (ulong *)0x0) {
                      uVar15 = puVar10[8];
                      __ptr_01 = (void *)puVar10[1];
                      if (uVar15 == local_f8) {
                        local_f8 = local_f8 * 2 + 1;
                        __ptr_01 = realloc(__ptr_01,local_f8 * 4);
                        __ptr_02 = realloc((void *)puVar10[2],local_f8 * 4);
                        if ((__ptr_01 == (void *)0x0) || (__ptr_02 == (void *)0x0)) {
                          free(__ptr_01);
                          free(__ptr_02);
                          *param_6 = 0xc;
                          goto LAB_004139fb;
                        }
                        puVar10[2] = (ulong)__ptr_02;
                        uVar15 = puVar10[8];
                        puVar10[1] = (ulong)__ptr_01;
                      }
                      *(uint *)((long)__ptr_01 + uVar15 * 4) = uVar23;
                      puVar10[8] = uVar15 + 1;
                      *(uint *)(puVar10[2] + uVar15 * 4) = (uint)local_90;
                    }
                    lVar8 = 0;
                    do {
                      if ((uVar23 <= (uint)lVar8) && ((uint)lVar8 <= (uint)local_90)) {
                        __ptr[lVar8 >> 6] = __ptr[lVar8 >> 6] | 1L << ((byte)lVar8 & 0x3f);
                      }
                      lVar8 = lVar8 + 1;
                    } while (lVar8 != 0x100);
                    *param_6 = 0;
                    goto LAB_0041395f;
                  }
                }
LAB_00413fa5:
                *param_6 = 3;
              }
              goto LAB_004139fb;
            }
          }
          *param_6 = iVar5;
          goto LAB_004139fb;
        }
        *(byte *)(__ptr_00 + 4) = *(byte *)(__ptr_00 + 4) | 1;
        if ((param_4 & 0x100) != 0) {
          *__ptr = *__ptr | 0x400;
        }
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
        iVar5 = FUN_00408020(param_3,param_1,param_4);
        cVar4 = *(char *)(param_3 + 1);
        if (cVar4 != '\x02') {
          bVar24 = true;
          goto LAB_004134d2;
        }
      }
      *param_6 = 2;
LAB_004139fb:
      free(__ptr);
      FUN_00409170(__ptr_00);
      if (*param_6 != 0) {
        return 0;
      }
      local_100 = 0;
      goto LAB_00412de0;
    }
    free(__ptr);
    free(__ptr_00);
    break;
  case '\x17':
    if ((param_4 & 0x1000000) != 0) goto LAB_004130b5;
switchD_00412d7b_caseD_b:
    if ((param_4 & 0x20) != 0) {
LAB_004130b5:
      *param_6 = 0xd;
      return 0;
    }
    if ((param_4 & 0x10) != 0) {
      iVar5 = FUN_004125d0(param_3,param_1,param_4);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
      lVar9 = FUN_00412d40(param_1,param_2,param_3,param_4,param_5,param_6);
      return lVar9;
    }
    if (cVar4 == '\t') {
switchD_00412d7b_caseD_9:
      if ((param_4 & 0x20000) == 0) {
        *param_6 = 0x10;
        return 0;
      }
    }
switchD_00412d7b_caseD_18:
    *(undefined *)(param_3 + 1) = 1;
    local_100 = FUN_0040a780(lVar9 + 0x70,lVar9 + 0x80,0,0,param_3);
    if (local_100 != 0) {
LAB_00412de0:
      iVar5 = FUN_004125d0(param_3,param_1,param_4);
      uVar15 = (ulong)*(byte *)(param_3 + 1);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
      do {
        bVar25 = (byte)uVar15;
        if (0x17 < bVar25) {
          return local_100;
        }
        uVar18 = (ulong)(bVar25 == 0x12);
        if ((0x8c0800UL >> (uVar15 & 0x3f) & 1) == 0) {
          return local_100;
        }
        uVar19 = *(undefined *)(param_1 + 0x48);
        uVar2 = *param_3;
        uVar3 = param_3[1];
        local_f8 = local_100;
        lVar8 = local_100;
        if (bVar25 == 0x17) {
          uVar18 = FUN_00412c80(param_1,param_3,param_4);
          if (uVar18 == 0xffffffffffffffff) {
            if ((*(char *)(param_3 + 1) == '\x01') && (*(char *)param_3 == ',')) {
              uVar18 = 0;
LAB_004132c9:
              local_118 = FUN_00412c80(param_1,param_3,param_4);
              if (local_118 == 0xfffffffffffffffe) goto LAB_00413262;
              if (((local_118 == 0xffffffffffffffff) || ((long)uVar18 <= (long)local_118)) &&
                 (*(char *)(param_3 + 1) == '\x18')) {
                uVar15 = uVar18;
                if (local_118 != 0xffffffffffffffff) goto LAB_00413384;
                goto joined_r0x00413394;
              }
            }
LAB_004133c0:
            *param_6 = 10;
          }
          else {
            if (uVar18 != 0xfffffffffffffffe) {
              local_118 = uVar18;
              if (*(char *)(param_3 + 1) != '\x18') {
                if (*(char *)(param_3 + 1) != '\x01') goto LAB_00413262;
                if (*(char *)param_3 == ',') goto LAB_004132c9;
                if ((param_4 & 0x200000) == 0) goto LAB_004133c0;
                goto LAB_00413271;
              }
LAB_00413384:
              uVar15 = local_118;
joined_r0x00413394:
              if (0x7fff < (long)uVar15) {
                *param_6 = 0xf;
                goto LAB_004133cb;
              }
              iVar5 = FUN_004125d0(param_3,param_1,param_4);
              *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
              if (local_100 == 0) goto LAB_00413290;
              if ((local_118 | uVar18) == 0) {
                FUN_00407fb0(local_100,FUN_004091c0,0);
                if (*param_6 != 0) goto LAB_0041316b;
                goto LAB_0041329f;
              }
              if ((long)uVar18 < 1) {
                local_f8 = 0;
                goto LAB_00413442;
              }
              if (uVar18 != 1) {
                lVar7 = 2;
                do {
                  lVar8 = FUN_0040a860(lVar8,lVar9);
                  local_50 = 0x10;
                  local_f8 = FUN_0040a780(lVar9 + 0x70,lVar9 + 0x80,local_f8,lVar8,local_58);
                  if ((lVar8 == 0) || (local_f8 == 0)) goto LAB_00413160;
                  lVar7 = lVar7 + 1;
                } while (lVar7 <= (long)uVar18);
              }
              lVar7 = local_f8;
              if (uVar18 != local_118) goto LAB_0041341f;
              goto LAB_00413077;
            }
LAB_00413262:
            if ((param_4 & 0x200000) == 0) {
              if (*(char *)(param_3 + 1) != '\x02') goto LAB_004133c0;
              *param_6 = 9;
              goto LAB_004133cb;
            }
LAB_00413271:
            *(undefined *)(param_1 + 0x48) = uVar19;
            *param_3 = uVar2;
            param_3[1] = uVar3;
            *(undefined *)(param_3 + 1) = 1;
            lVar7 = local_100;
LAB_0041305e:
            if ((*param_6 == 0) || (lVar7 != 0)) goto LAB_00413077;
          }
LAB_004133cb:
          if (local_100 == 0) {
            return 0;
          }
          goto LAB_0041316b;
        }
        if (bVar25 == 0x13) {
          iVar5 = FUN_004125d0(param_3,param_1,param_4);
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
          if (local_100 == 0) goto LAB_00413290;
          if (*(char *)(local_100 + 0x30) == '\x11') {
            local_118 = 1;
            local_f8 = 0;
            goto LAB_004131f8;
          }
          local_118 = 1;
          local_50 = 10;
          local_f8 = 0;
LAB_00412f5a:
          lVar11 = lVar9 + 0x70;
          lVar1 = lVar9 + 0x80;
          lVar7 = FUN_0040a780(lVar11,lVar1,lVar8,0,local_58);
          if (lVar7 == 0) {
LAB_00413160:
            *param_6 = 0xc;
LAB_0041316b:
            FUN_00407fb0(local_100,FUN_004091c0,0);
            return 0;
          }
          for (lVar17 = uVar18 + 2; lVar17 <= (long)local_118; lVar17 = lVar17 + 1) {
            lVar8 = FUN_0040a860(lVar8,lVar9);
            local_50 = 0x10;
            lVar7 = FUN_0040a780(lVar11,lVar1,lVar7,lVar8,local_58);
            if ((lVar8 == 0) || (lVar7 == 0)) goto LAB_00413160;
            local_50 = 10;
            lVar7 = FUN_0040a780(lVar11,lVar1,lVar7,0,local_58);
            if (lVar7 == 0) goto LAB_00413160;
          }
          if (local_f8 != 0) {
            local_50 = 0x10;
            lVar7 = FUN_0040a780(lVar11,lVar1,local_f8,lVar7,local_58);
            goto LAB_0041305e;
          }
        }
        else {
          iVar5 = FUN_004125d0(param_3,param_1,param_4);
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
          if (local_100 != 0) {
            if (bVar25 != 0x12) {
              if (*(char *)(local_100 + 0x30) == '\x11') {
                local_118 = 0xffffffffffffffff;
                uVar18 = 0;
                local_f8 = 0;
LAB_004131f8:
                FUN_00407fb0(lVar8,FUN_00408150,*(undefined *)(lVar8 + 0x28));
                goto LAB_00413209;
              }
              local_118 = 0xffffffffffffffff;
              uVar18 = 0;
              local_f8 = 0;
LAB_00412f55:
              local_50 = 0xb;
              goto LAB_00412f5a;
            }
            local_118 = 0xffffffffffffffff;
            uVar18 = 1;
LAB_0041341f:
            lVar8 = FUN_0040a860(lVar8,lVar9);
            if (lVar8 != 0) {
LAB_00413442:
              if (*(char *)(lVar8 + 0x30) == '\x11') goto LAB_004131f8;
LAB_00413209:
              if (local_118 != 0xffffffffffffffff) {
                local_50 = 10;
                goto LAB_00412f5a;
              }
              goto LAB_00412f55;
            }
            goto LAB_00413160;
          }
LAB_00413290:
          if (*param_6 != 0) {
            return 0;
          }
LAB_0041329f:
          local_100 = 0;
          lVar7 = local_100;
        }
LAB_00413077:
        local_100 = lVar7;
        bVar25 = *(byte *)(param_3 + 1);
        uVar15 = (ulong)bVar25;
      } while (((param_4 & 0x1000000) == 0) || ((bVar25 != 0xb && (bVar25 != 0x17))));
      if (local_100 != 0) {
        FUN_00407fb0(local_100,FUN_004091c0,0);
      }
      goto LAB_004130b5;
    }
    break;
  case '\x18':
    goto switchD_00412d7b_caseD_18;
  case ' ':
  case '!':
    bVar24 = cVar4 == '!';
    uVar19 = *(undefined *)(param_1 + 0x78);
    pcVar14 = "_";
    pcVar16 = "alnum";
    goto LAB_00413594;
  case '\"':
  case '#':
    bVar24 = cVar4 == '#';
    uVar19 = *(undefined *)(param_1 + 0x78);
    pcVar14 = "";
    pcVar16 = "space";
LAB_00413594:
    local_100 = FUN_0040db70(lVar9,uVar19,pcVar16,pcVar14,bVar24,param_6);
    if ((*param_6 != 0) && (local_100 == 0)) {
      return 0;
    }
    goto LAB_00412de0;
  case '$':
    *param_6 = 5;
    return 0;
  }
  *param_6 = 0xc;
LAB_00412e0a:
  return 0;
code_r0x00413975:
  uVar21 = 0;
  goto LAB_004134fe;
}


long FUN_00414230(undefined param_1,long *param_2,long param_3,undefined param_4,long param_5,
                 int *param_6)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined local_48 [8];
  undefined local_40;
  
  lVar1 = *param_2;
  lVar3 = FUN_00412d40();
  if ((*param_6 == 0) || (lVar3 != 0)) {
    while (bVar2 = *(byte *)(param_3 + 8), (bVar2 & 0xf7) != 2) {
      while( true ) {
        if ((bVar2 == 9) && (param_5 != 0)) {
          return lVar3;
        }
        lVar4 = FUN_00412d40(param_1,param_2,param_3,param_4,param_5,param_6);
        if ((*param_6 != 0) && (lVar4 == 0)) {
          if (lVar3 != 0) {
            FUN_00407fb0(lVar3,FUN_004091c0,0);
          }
          goto LAB_00414340;
        }
        if ((lVar3 == 0) || (lVar4 == 0)) break;
        local_40 = 0x10;
        lVar5 = FUN_0040a780(lVar1 + 0x70,lVar1 + 0x80,lVar3,lVar4,local_48);
        if (lVar5 == 0) {
          FUN_00407fb0(lVar4,FUN_004091c0,0);
          FUN_00407fb0(lVar3,FUN_004091c0,0);
          *param_6 = 0xc;
          return 0;
        }
        bVar2 = *(byte *)(param_3 + 8);
        lVar3 = lVar5;
        if ((bVar2 & 0xf7) == 2) {
          return lVar5;
        }
      }
      if (lVar3 == 0) {
        lVar3 = lVar4;
      }
    }
  }
  else {
LAB_00414340:
    lVar3 = 0;
  }
  return lVar3;
}


long FUN_00414370(long param_1,long *param_2,long param_3,ulong param_4,long param_5,int *param_6)

{
  long lVar1;
  undefined uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined local_48 [8];
  undefined local_40;
  
  lVar1 = *param_2;
  uVar2 = *(undefined *)(lVar1 + 0xa8);
  lVar5 = FUN_00414230();
  if ((*param_6 == 0) || (lVar5 != 0)) {
    do {
      if (*(char *)(param_3 + 8) != '\n') {
        return lVar5;
      }
      iVar4 = FUN_004125d0(param_3,param_1,param_4 | 0x800000);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar4;
      if (((*(byte *)(param_3 + 8) & 0xf7) == 2) ||
         ((*(byte *)(param_3 + 8) == 9 && (param_5 != 0)))) {
        lVar6 = 0;
      }
      else {
        uVar3 = *(ulong *)(lVar1 + 0xa8);
        *(undefined *)(lVar1 + 0xa8) = uVar2;
        lVar6 = FUN_00414230(param_1,param_2,param_3,param_4,param_5,param_6);
        if ((*param_6 != 0) && (lVar6 == 0)) {
          if (lVar5 != 0) {
            FUN_00407fb0(lVar5,FUN_004091c0,0);
          }
          goto LAB_004143be;
        }
        *(ulong *)(lVar1 + 0xa8) = *(ulong *)(lVar1 + 0xa8) | uVar3;
      }
      local_40 = 10;
      lVar5 = FUN_0040a780(lVar1 + 0x70,lVar1 + 0x80,lVar5,lVar6,local_48);
    } while (lVar5 != 0);
    *param_6 = 0xc;
  }
  else {
LAB_004143be:
    lVar5 = 0;
  }
  return lVar5;
}


int FUN_004144d0(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined (*pauVar1) [16];
  undefined *puVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  wint_t wVar8;
  long *plVar9;
  long *plVar10;
  size_t sVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  long lVar19;
  long **__ptr;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  byte *pbVar26;
  byte bVar27;
  size_t __size;
  long lVar28;
  bool bVar29;
  bool bVar30;
  byte bVar31;
  ulong local_128;
  int local_10c;
  int local_108 [4];
  undefined local_f8 [8];
  undefined local_f0;
  undefined uStack_ef;
  void *local_e8 [2];
  long local_d8;
  long local_d0 [4];
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_60;
  undefined local_50;
  byte local_4f;
  byte local_4e;
  char local_4d;
  int local_48;
  
  bVar31 = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0x90;
  local_10c = 0;
  __ptr = (long **)*param_1;
  param_1[3] = param_4;
  param_1[2] = 0;
  param_1[6] = 0;
  if ((ulong)param_1[1] < 0xe8) {
    __ptr = (long **)realloc(__ptr,0xe8);
    if (__ptr == (long **)0x0) {
      return 0xc;
    }
    param_1[1] = 0xe8;
    *param_1 = (long)__ptr;
  }
  param_1[2] = 0xe8;
  *__ptr = (long *)0x0;
  __ptr[0x1c] = (long *)0x0;
  puVar25 = (undefined *)((ulong)(__ptr + 1) & 0xfffffffffffffff8);
  for (uVar20 = (ulong)(((int)__ptr - (int)(undefined *)((ulong)(__ptr + 1) & 0xfffffffffffffff8))
                        + 0xe8U >> 3); uVar20 != 0; uVar20 = uVar20 - 1) {
    *puVar25 = 0;
    puVar25 = puVar25 + (ulong)bVar31 * -2 + 1;
  }
  *(undefined *)(__ptr + 0x10) = 0xf;
  if (param_3 < 0x555555555555555) {
    plVar14 = (long *)(param_3 + 1);
    __ptr[1] = plVar14;
    plVar9 = (long *)malloc((long)plVar14 * 0x10);
    *__ptr = plVar9;
    if (param_3 == 0) {
      plVar9 = (long *)0x0;
      uVar20 = 1;
    }
    else {
      uVar20 = 1;
      do {
        uVar20 = uVar20 * 2;
      } while (uVar20 <= param_3);
      plVar9 = (long *)(uVar20 - 1);
    }
    plVar10 = (long *)calloc(0x18,uVar20);
    __ptr[0x11] = plVar9;
    __ptr[8] = plVar10;
    sVar11 = __ctype_get_mb_cur_max();
    *(int *)((long)__ptr + 0xb4) = (int)sVar11;
    pbVar12 = (byte *)nl_langinfo(0xe);
    if ((((*pbVar12 & 0xdf) == 0x55) && ((pbVar12[1] & 0xdf) == 0x54)) &&
       ((pbVar12[2] & 0xdf) == 0x46)) {
      bVar29 = pbVar12[3] < 0x2d;
      bVar30 = pbVar12[3] == 0x2d;
      lVar21 = 2;
      pbVar12 = pbVar12 + (ulong)bVar30 + 3;
      pbVar26 = &DAT_00418803;
      do {
        if (lVar21 == 0) break;
        lVar21 = lVar21 + -1;
        bVar29 = *pbVar12 < *pbVar26;
        bVar30 = *pbVar12 == *pbVar26;
        pbVar12 = pbVar12 + (ulong)bVar31 * -2 + 1;
        pbVar26 = pbVar26 + (ulong)bVar31 * -2 + 1;
      } while (bVar30);
      if ((!bVar29 && !bVar30) == bVar29) {
        *(byte *)(__ptr + 0x16) = *(byte *)(__ptr + 0x16) | 4;
      }
    }
    bVar5 = *(byte *)(__ptr + 0x16);
    *(byte *)(__ptr + 0x16) = bVar5 & 0xf7;
    if (1 < *(int *)((long)__ptr + 0xb4)) {
      if ((bVar5 & 4) == 0) {
        plVar9 = (long *)calloc(0x20,1);
        __ptr[0xf] = plVar9;
        if (plVar9 == (long *)0x0) goto LAB_00414eb0;
        lVar21 = 0;
        do {
          uVar22 = (int)lVar21 * 8;
          iVar6 = 0;
          do {
            while( true ) {
              wVar8 = btowc(uVar22);
              if (wVar8 != 0xffffffff) break;
              if ((uVar22 & 0xffffff80) == 0) {
LAB_00414ef4:
                *(byte *)(__ptr + 0x16) = *(byte *)(__ptr + 0x16) | 8;
              }
LAB_00414efb:
              iVar6 = iVar6 + 1;
              uVar22 = uVar22 + 1;
              if (iVar6 == 0x40) goto LAB_00414f50;
            }
            *(ulong *)((long)__ptr[0xf] + lVar21) =
                 *(ulong *)((long)__ptr[0xf] + lVar21) | 1L << ((byte)iVar6 & 0x3f);
            if ((uVar22 & 0xffffff80) != 0) goto LAB_00414efb;
            if (wVar8 != uVar22) goto LAB_00414ef4;
            iVar6 = iVar6 + 1;
            uVar22 = uVar22 + 1;
          } while (iVar6 != 0x40);
LAB_00414f50:
          lVar21 = lVar21 + 8;
        } while (lVar21 != 0x20);
      }
      else {
        __ptr[0xf] = (long *)&DAT_004191c0;
      }
    }
    if ((*__ptr != (long *)0x0) && (__ptr[8] != (long *)0x0)) {
      local_60 = param_1[5];
      local_10c = 0;
      plVar9 = local_d0;
      for (lVar21 = 0x12; lVar21 != 0; lVar21 = lVar21 + -1) {
        *plVar9 = 0;
        plVar9 = plVar9 + (ulong)bVar31 * -2 + 1;
      }
      iVar6 = *(int *)((long)__ptr + 0xb4);
      uVar20 = (ulong)((uint)param_4 & 0x400000);
      local_50 = (param_4 & 0x400000) != 0;
      uVar23 = local_60 | uVar20;
      local_4d = uVar23 != 0;
      local_4e = *(byte *)(__ptr + 0x16) >> 3 & 1;
      local_4f = *(byte *)(__ptr + 0x16) >> 2 & 1;
      local_d8 = param_2;
      local_88 = param_3;
      local_80 = param_3;
      local_78 = param_3;
      local_70 = param_3;
      local_48 = iVar6;
      if (param_3 == 0) {
LAB_00414712:
        if (local_4d != '\0') {
          param_2 = local_d0[0];
        }
        local_d0[0] = param_2;
        if (uVar20 == 0) {
          if (iVar6 < 2) {
            uVar3 = local_98;
            local_a0 = local_98;
            if (uVar23 != 0) {
              if ((long)local_80 <= (long)local_98) {
                local_98 = local_80;
              }
              uVar3 = local_a8;
              local_a0 = local_a8;
              if ((long)local_a8 < (long)local_98) {
                do {
                  *(undefined *)(param_2 + local_a8) =
                       *(undefined *)(local_60 + *(byte *)(local_d8 + local_a8 + local_b0));
                  local_a8 = local_a8 + 1;
                  uVar3 = local_98;
                  local_a0 = local_98;
                } while (local_98 != local_a8);
              }
            }
          }
          else {
            FUN_004087e0(&local_d8);
            uVar3 = local_a8;
          }
        }
        else {
          if (1 < iVar6) {
            do {
              iVar6 = FUN_00408990(&local_d8);
              if (iVar6 != 0) break;
              uVar3 = local_a8;
              if (((long)param_3 <= (long)local_a0) ||
                 ((long)((long)*(int *)((long)__ptr + 0xb4) + local_a8) < (long)local_98))
              goto LAB_00414819;
              iVar6 = FUN_004083f0(&local_d8,local_98 * 2);
            } while (iVar6 == 0);
            goto LAB_00414c28;
          }
          FUN_00408760(&local_d8);
          uVar3 = local_a8;
        }
LAB_00414819:
        local_a8 = uVar3;
        local_10c = 0;
        lVar21 = *param_1;
        param_1[6] = 0;
        *(ulong *)(lVar21 + 0xd8) = param_4;
        iVar6 = FUN_004125d0(local_108,&local_d8,param_4 | 0x800000);
        local_90 = local_90 + iVar6;
        lVar13 = FUN_00414370(&local_d8,param_1,local_108,param_4,0,&local_10c);
        if (local_10c == 0) {
          local_f0 = 2;
          plVar14 = (long *)FUN_0040a780(lVar21 + 0x70,lVar21 + 0x80,0,0,local_f8);
          plVar9 = plVar14;
          if (lVar13 != 0) {
LAB_004148b7:
            local_f0 = 0x10;
            plVar9 = (long *)FUN_0040a780(lVar21 + 0x70,lVar21 + 0x80,lVar13,plVar14,local_f8);
          }
          lVar21 = *param_1;
          if (plVar14 == (long *)0x0 || plVar9 == (long *)0x0) {
            local_10c = 0xc;
            __ptr[0xd] = (long *)0x0;
          }
          else {
            lVar13 = *(long *)(lVar21 + 8);
            __ptr[0xd] = plVar9;
            sVar11 = lVar13 * 8;
            __size = lVar13 * 0x18;
            pvVar15 = malloc(sVar11);
            *(void **)(lVar21 + 0x18) = pvVar15;
            pvVar16 = malloc(sVar11);
            *(void **)(lVar21 + 0x20) = pvVar16;
            pvVar17 = malloc(__size);
            *(void **)(lVar21 + 0x28) = pvVar17;
            pvVar18 = malloc(__size);
            *(void **)(lVar21 + 0x30) = pvVar18;
            if ((((pvVar15 != (void *)0x0) && (pvVar16 != (void *)0x0)) && (pvVar17 != (void *)0x0))
               && (pvVar18 != (void *)0x0)) {
              lVar13 = param_1[6];
              pvVar15 = malloc(lVar13 * 8);
              *(void **)(lVar21 + 0xe0) = pvVar15;
              if (pvVar15 != (void *)0x0) {
                lVar24 = 0;
                if (lVar13 != 0) {
                  do {
                    *(long *)((long)pvVar15 + lVar24 * 8) = lVar24;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 != lVar13);
                }
                FUN_00409ff0(*(undefined *)(lVar21 + 0x68),FUN_00409cb0,lVar21);
                if (param_1[6] == 0) {
                  plVar14 = *(long **)(lVar21 + 0xe0);
LAB_004149ef:
                  free(plVar14);
                  *(undefined *)(lVar21 + 0xe0) = 0;
                }
                else {
                  plVar14 = *(long **)(lVar21 + 0xe0);
                  lVar13 = *plVar14;
                  if (lVar13 == 0) {
                    do {
                      lVar13 = lVar13 + 1;
                      if (lVar13 == param_1[6]) goto LAB_004149ef;
                    } while (plVar14[lVar13] == lVar13);
                  }
                }
              }
              iVar6 = FUN_00407fb0(*(undefined *)(lVar21 + 0x68),FUN_0040ab30,param_1);
              if ((iVar6 == 0) &&
                 (iVar6 = FUN_00407fb0(*(undefined *)(lVar21 + 0x68),FUN_0040d060,lVar21),
                 iVar6 == 0)) {
                FUN_00409ff0(*(undefined *)(lVar21 + 0x68),FUN_00409d40,lVar21);
                iVar6 = FUN_00409ff0(*(undefined *)(lVar21 + 0x68),FUN_00409840,lVar21);
                if (iVar6 == 0) {
                  bVar31 = 0;
                  lVar13 = 0;
LAB_00414a68:
                  if (*(long *)(lVar21 + 0x10) == lVar13) goto LAB_00414a8c;
LAB_00414a6e:
                  while( true ) {
                    lVar24 = lVar13 * 0x18;
                    if (*(long *)(*(long *)(lVar21 + 0x30) + 8 + lVar24) != 0)
                    goto code_r0x00414a82;
                    iVar6 = FUN_0040a220(local_f8,lVar21,lVar13);
                    if (iVar6 != 0) goto LAB_00414c28;
                    lVar13 = lVar13 + 1;
                    if (*(long *)(*(long *)(lVar21 + 0x30) + 8 + lVar24) != 0) break;
                    bVar31 = 1;
                    free(local_e8[0]);
                    if (*(long *)(lVar21 + 0x10) == lVar13) goto LAB_00414a95;
                  }
                  goto LAB_00414a68;
                }
              }
              goto LAB_00414c28;
            }
            local_10c = 0xc;
          }
        }
        else {
          if (lVar13 != 0) {
            local_f0 = 2;
            plVar14 = (long *)FUN_0040a780(lVar21 + 0x70,lVar21 + 0x80,0,0,local_f8);
            goto LAB_004148b7;
          }
          __ptr[0xd] = (long *)0x0;
          lVar21 = *param_1;
        }
      }
      else {
        iVar6 = FUN_004083f0(&local_d8,plVar14);
        if (iVar6 == 0) {
          iVar6 = *(int *)((long)__ptr + 0xb4);
          goto LAB_00414712;
        }
LAB_00414c28:
        lVar21 = *param_1;
        local_10c = iVar6;
      }
LAB_00414e38:
      puVar25 = *(undefined **)(lVar21 + 0x70);
      while (puVar25 != (undefined *)0x0) {
        puVar2 = (undefined *)*puVar25;
        free(puVar25);
        puVar25 = puVar2;
      }
      *(undefined *)(lVar21 + 0x70) = 0;
      *(undefined *)(lVar21 + 0x80) = 0xf;
      *(undefined *)(lVar21 + 0x68) = 0;
      free(*(void **)(lVar21 + 0x20));
      *(undefined *)(lVar21 + 0x20) = 0;
      FUN_00409740(&local_d8);
      goto LAB_00414e8e;
    }
  }
LAB_00414eb0:
  local_10c = 0xc;
  goto LAB_00414e8e;
code_r0x00414a82:
  lVar13 = lVar13 + 1;
  if (*(long *)(lVar21 + 0x10) != lVar13) goto LAB_00414a6e;
LAB_00414a8c:
  if (bVar31 != 0) {
LAB_00414a95:
    bVar31 = 0;
    lVar13 = 0;
    goto LAB_00414a6e;
  }
  if (((((*(byte *)(param_1 + 7) & 0x10) != 0) || (param_1[6] == 0)) ||
      ((*(byte *)(lVar21 + 0xb0) & 1) == 0)) && (*(long *)(lVar21 + 0x98) == 0)) goto LAB_00414c46;
  pvVar15 = malloc(lVar13 * 0x18);
  *(void **)(lVar21 + 0x38) = pvVar15;
  if (pvVar15 == (void *)0x0) {
    local_10c = 0xc;
    lVar21 = *param_1;
    goto LAB_00414e38;
  }
  uVar23 = 0;
  if (lVar13 == 0) goto LAB_00414c46;
  while( true ) {
    pauVar1 = (undefined (*) [16])((long)pvVar15 + uVar23 * 0x18);
    *pauVar1 = (undefined)0x0;
    *(undefined *)pauVar1[1] = 0;
    if (*(ulong *)(lVar21 + 0x10) <= uVar23 + 1) break;
    pvVar15 = *(void **)(lVar21 + 0x38);
    uVar23 = uVar23 + 1;
  }
  if (*(ulong *)(lVar21 + 0x10) != 0) {
    local_128 = 0;
    lVar13 = *(long *)(lVar21 + 0x30);
    do {
      lVar28 = 0;
      lVar19 = local_128 * 0x18 + lVar13;
      lVar24 = *(long *)(lVar19 + 0x10);
      if (0 < *(long *)(lVar19 + 8)) {
        do {
          cVar4 = FUN_00408490(*(long *)(lVar21 + 0x38) + *(long *)(lVar24 + lVar28 * 8) * 0x18,
                               local_128);
          if (cVar4 == '\0') {
            iVar6 = 0xc;
            goto LAB_00414c28;
          }
          lVar13 = *(long *)(lVar21 + 0x30);
          lVar28 = lVar28 + 1;
        } while (lVar28 < *(long *)(lVar13 + 8 + local_128 * 0x18));
      }
      local_128 = local_128 + 1;
    } while (local_128 <= *(ulong *)(lVar21 + 0x10) && *(ulong *)(lVar21 + 0x10) != local_128);
  }
LAB_00414c46:
  local_10c = 0;
  bVar5 = *(byte *)(__ptr + 0x16) >> 2 & uVar20 == 0;
  if ((bVar5 != 0) && (param_1[5] == 0)) {
    if (__ptr[2] == (long *)0x0) {
LAB_00415243:
      bVar27 = 0;
    }
    else {
      plVar14 = *__ptr;
      bVar27 = 0;
      plVar10 = (long *)0x0;
      plVar9 = plVar14;
      do {
        switch(*(char *)(plVar9 + 1)) {
        default:
                    /* WARNING: Subroutine does not return */
          abort();
        case '\x01':
          if (*(char *)plVar9 < '\0') {
            bVar31 = bVar5;
          }
          break;
        case '\x02':
        case '\x04':
        case '\b':
        case '\t':
        case '\n':
        case '\v':
          break;
        case '\x03':
          if ((*(long *)(*plVar9 + 0x10) != 0) || (*(long *)(*plVar9 + 0x18) != 0))
          goto switchD_00414fb1_caseD_6;
          break;
        case '\x05':
          bVar27 = bVar5;
          break;
        case '\x06':
          goto switchD_00414fb1_caseD_6;
        case '\f':
          uVar22 = *(uint *)plVar9;
          if (uVar22 != 0x20) {
            if (uVar22 < 0x21) {
              if (uVar22 != 0x10) goto switchD_00414fb1_caseD_6;
            }
            else if ((uVar22 != 0x40) && (uVar22 != 0x80)) goto switchD_00414fb1_caseD_6;
          }
        }
        plVar10 = (long *)((long)plVar10 + 1);
        plVar9 = plVar9 + 2;
      } while (plVar10 != __ptr[2]);
      if ((bVar31 | bVar27) == 0) goto LAB_00415243;
      plVar9 = plVar14 + (long)plVar10 * 2;
      do {
        if (*(char *)(plVar14 + 1) == '\x01') {
          if (*(char *)plVar14 < '\0') {
            *(byte *)((long)plVar14 + 10) = *(byte *)((long)plVar14 + 10) & 0xdf;
          }
        }
        else if (*(char *)(plVar14 + 1) == '\x05') {
          *(char *)(plVar14 + 1) = '\a';
        }
        plVar14 = plVar14 + 2;
      } while (plVar9 != plVar14);
    }
    *(undefined *)((long)__ptr + 0xb4) = 1;
    *(byte *)(__ptr + 0x16) =
         (0 < (long)__ptr[0x13] | bVar27) * '\x02' | *(byte *)(__ptr + 0x16) & 0xf9;
  }
switchD_00414fb1_caseD_6:
  plVar14 = *(long **)(__ptr[0xd][3] + 0x38);
  __ptr[0x12] = plVar14;
  iVar7 = FUN_0040abb0(local_f8,__ptr[6] + (long)plVar14 * 3);
  iVar6 = iVar7;
  local_108[0] = iVar7;
  if (iVar7 == 0) {
    if ((0 < (long)__ptr[0x13]) && (lVar21 = CONCAT71(uStack_ef,local_f0), 0 < lVar21)) {
      lVar13 = 0;
LAB_00414cd5:
      do {
        lVar24 = *(long *)((long)local_e8[0] + lVar13 * 8);
        plVar14 = *__ptr + lVar24 * 2;
        if (*(char *)(plVar14 + 1) == '\x04') {
          lVar19 = 0;
          do {
            plVar9 = *__ptr + *(long *)((long)local_e8[0] + lVar19 * 8) * 2;
            if ((*(char *)(plVar9 + 1) == '\t') && (*plVar9 == *plVar14)) {
              lVar24 = *(long *)__ptr[5][lVar24 * 3 + 2];
              lVar19 = FUN_00409b10(lVar21,local_e8,lVar24);
              if (lVar19 == 0) {
                iVar6 = FUN_0040a050(local_f8,__ptr[6] + lVar24 * 3);
                if (iVar6 != 0) goto LAB_00414daf;
                lVar21 = CONCAT71(uStack_ef,local_f0);
                lVar13 = 1;
                if (lVar21 < 2) goto LAB_00414d70;
                goto LAB_00414cd5;
              }
              break;
            }
            lVar19 = lVar19 + 1;
          } while (lVar21 != lVar19);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < lVar21);
    }
LAB_00414d70:
    plVar14 = (long *)FUN_0040adc0(local_108,__ptr,local_f8,0);
    __ptr[9] = plVar14;
    iVar6 = local_108[0];
    if (plVar14 != (long *)0x0) {
      if (*(char *)(plVar14 + 0xd) < '\0') {
        plVar14 = (long *)FUN_0040adc0(local_108,__ptr,local_f8,1);
        __ptr[10] = plVar14;
        plVar14 = (long *)FUN_0040adc0(local_108,__ptr,local_f8,2);
        __ptr[0xb] = plVar14;
        plVar14 = (long *)FUN_0040adc0(local_108,__ptr,local_f8,6);
        __ptr[0xc] = plVar14;
        iVar6 = local_108[0];
        if (((__ptr[10] == (long *)0x0) || (__ptr[0xb] == (long *)0x0)) || (plVar14 == (long *)0x0))
        goto LAB_00414daf;
      }
      else {
        __ptr[0xc] = plVar14;
        __ptr[0xb] = plVar14;
        __ptr[10] = plVar14;
      }
      free(local_e8[0]);
      iVar6 = iVar7;
    }
  }
LAB_00414daf:
  lVar21 = *param_1;
  puVar25 = *(undefined **)(lVar21 + 0x70);
  local_10c = iVar6;
  while (puVar25 != (undefined *)0x0) {
    puVar2 = (undefined *)*puVar25;
    free(puVar25);
    puVar25 = puVar2;
  }
  *(undefined *)(lVar21 + 0x70) = 0;
  *(undefined *)(lVar21 + 0x80) = 0xf;
  *(undefined *)(lVar21 + 0x68) = 0;
  free(*(void **)(lVar21 + 0x20));
  *(undefined *)(lVar21 + 0x20) = 0;
  FUN_00409740(&local_d8);
  if (local_10c == 0) {
    return 0;
  }
LAB_00414e8e:
  FUN_0040d0f0(__ptr);
  *param_1 = 0;
  param_1[1] = 0;
  return local_10c;
}


undefined FUN_00415280(undefined param_1,undefined param_2,long param_3)

{
  int iVar1;
  undefined uVar2;
  
  *(byte *)(param_3 + 0x38) =
       *(byte *)(param_3 + 0x38) & 0xef | (byte)(((uint)(DAT_0061d4a8 >> 0x19) & 1) << 4) | 0x80;
  iVar1 = FUN_004144d0(param_3,param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = dcgettext(0,"Success" + *(long *)(&DAT_004191e0 + (long)iVar1 * 8),5);
    return uVar2;
  }
  return 0;
}


undefined FUN_004152f0(undefined param_1)

{
  undefined uVar1;
  
  uVar1 = DAT_0061d4a8;
  DAT_0061d4a8 = param_1;
  return uVar1;
}


undefined FUN_00415300(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  
  puVar1 = (undefined *)param_1[4];
  lVar2 = *param_1;
  *puVar1 = 0;
  puVar1[0x1f] = 0;
  puVar6 = (undefined *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)puVar1 - (int)(undefined *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8))
                       + 0x100U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_0040ddb0(param_1,*(long *)(lVar2 + 0x48) + 0x10,*(long *)(lVar2 + 0x48) + 0x18,puVar1);
  lVar4 = *(long *)(lVar2 + 0x50);
  if (*(long *)(lVar2 + 0x48) != lVar4) {
    FUN_0040ddb0(param_1,lVar4 + 0x10,lVar4 + 0x18,puVar1);
    lVar4 = *(long *)(lVar2 + 0x48);
  }
  lVar3 = *(long *)(lVar2 + 0x58);
  if (lVar3 != lVar4) {
    FUN_0040ddb0(param_1,lVar3 + 0x10,lVar3 + 0x18,puVar1);
    lVar4 = *(long *)(lVar2 + 0x48);
  }
  lVar2 = *(long *)(lVar2 + 0x60);
  if (lVar2 != lVar4) {
    FUN_0040ddb0(param_1,lVar2 + 0x10,lVar2 + 0x18,puVar1);
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 8;
  return 0;
}


long FUN_004153d0(long param_1,undefined param_2,long param_3,long param_4,long param_5,
                 undefined param_6,ulong *param_7,char param_8)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long *__ptr;
  void *pvVar6;
  void *pvVar7;
  size_t __size;
  long lVar8;
  long lVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar8 = param_5 + param_4;
  if ((param_4 < 0) || (param_3 < param_4)) {
    return -1;
  }
  lVar9 = param_3;
  if (((param_3 < lVar8) || ((-1 < param_5 && (lVar8 < param_4)))) ||
     ((-1 < lVar8 && ((lVar9 = lVar8, -1 < param_5 || (lVar8 < param_4)))))) {
    bVar3 = *(byte *)(param_1 + 0x38);
    bVar4 = bVar3 >> 5 & 3;
    if ((param_4 < lVar9) && ((*(long *)(param_1 + 0x20) != 0 && ((bVar3 & 8) == 0)))) {
      FUN_00415300(param_1);
      bVar3 = *(byte *)(param_1 + 0x38);
    }
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x38);
    lVar9 = 0;
    bVar4 = bVar3 >> 5 & 3;
  }
  if (((bVar3 & 0x10) == 0) && (param_7 != (ulong *)0x0)) {
    if (((bVar3 & 6) == 4) && (uVar12 = *param_7, uVar12 <= *(ulong *)(param_1 + 0x30))) {
      if ((long)uVar12 < 1) goto LAB_00415630;
    }
    else {
      uVar12 = *(ulong *)(param_1 + 0x30) + 1;
    }
    __size = uVar12 << 4;
  }
  else {
LAB_00415630:
    __size = 0x10;
    uVar12 = 1;
    param_7 = (ulong *)0x0;
  }
  __ptr = (long *)malloc(__size);
  if (__ptr == (long *)0x0) {
    return -2;
  }
  iVar5 = FUN_00410420(param_1,param_2,param_3,param_4,lVar9,param_6,uVar12,__ptr,bVar4);
  if (iVar5 == 0) {
    if (param_7 != (ulong *)0x0) {
      uVar1 = uVar12 + 1;
      bVar3 = *(byte *)(param_1 + 0x38) >> 1;
      bVar4 = bVar3 & 3;
      if ((bVar3 & 3) == 0) {
        pvVar6 = malloc(uVar1 * 8);
        param_7[1] = (ulong)pvVar6;
        if (pvVar6 != (void *)0x0) {
          pvVar7 = malloc(uVar1 * 8);
          param_7[2] = (ulong)pvVar7;
          if (pvVar7 != (void *)0x0) {
            *param_7 = uVar1;
            cVar10 = '\x01';
            goto LAB_00415557;
          }
          free(pvVar6);
        }
LAB_004157c2:
        cVar10 = '\0';
      }
      else {
        if (bVar4 == 1) {
          cVar10 = '\x01';
          if (*param_7 < uVar1) {
            pvVar6 = realloc((void *)param_7[1],uVar1 * 8);
            if (pvVar6 == (void *)0x0) goto LAB_004157c2;
            pvVar7 = realloc((void *)param_7[2],uVar1 * 8);
            cVar10 = '\x01';
            if (pvVar7 == (void *)0x0) {
              free(pvVar6);
              cVar10 = '\0';
              goto LAB_004155cd;
            }
            param_7[1] = (ulong)pvVar6;
            param_7[2] = (ulong)pvVar7;
            *param_7 = uVar1;
          }
        }
        else {
          if (bVar4 != 2) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("regs_allocated == REGS_FIXED","lib/regexec.c",0x1f8,"re_copy_regs");
          }
          if (*param_7 <= uVar12 && uVar12 != *param_7) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("regs->num_regs >= nregs","lib/regexec.c",0x1fa,"re_copy_regs");
          }
          cVar10 = '\x02';
        }
LAB_00415557:
        if ((long)uVar12 < 1) {
          uVar12 = 0;
        }
        else {
          uVar1 = param_7[1];
          uVar2 = param_7[2];
          lVar8 = 0;
          do {
            *(undefined *)(uVar1 + lVar8) = *(undefined *)((long)__ptr + lVar8 * 2);
            *(undefined *)(uVar2 + lVar8) = *(undefined *)((long)__ptr + lVar8 * 2 + 8);
            lVar8 = lVar8 + 8;
          } while (lVar8 != uVar12 * 8);
        }
        if (uVar12 <= *param_7 && *param_7 != uVar12) {
          uVar1 = param_7[2];
          uVar2 = param_7[1];
          do {
            uVar11 = uVar12 + 1;
            *(undefined *)(uVar1 + uVar12 * 8) = 0xffffffffffffffff;
            *(undefined *)(uVar2 + uVar12 * 8) = 0xffffffffffffffff;
            uVar12 = uVar11;
          } while (uVar11 <= *param_7 && *param_7 != uVar11);
        }
      }
LAB_004155cd:
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf9 | cVar10 * '\x02';
      if ((cVar10 * '\x02' & 6U) == 0) goto LAB_004154f0;
    }
    lVar8 = *__ptr;
    if (param_8 != '\0') {
      if (param_4 != lVar8) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("pmatch[0].rm_so == start","lib/regexec.c",0x1bd,"re_search_stub");
      }
      lVar8 = __ptr[1] - lVar8;
    }
  }
  else {
    lVar8 = -1;
    if (iVar5 == 1) goto LAB_004154f7;
LAB_004154f0:
    lVar8 = -2;
  }
LAB_004154f7:
  free(__ptr);
  return lVar8;
}


undefined
FUN_00415830(undefined param_1,void *param_2,size_t param_3,void *param_4,size_t param_5,
            undefined param_6,undefined param_7,undefined param_8,undefined param_9,
            undefined param_10)

{
  undefined uVar1;
  void *__dest;
  
  if ((((char)((byte)(param_5 >> 0x38) | (byte)((ulong)param_9 >> 0x38)) < '\0') ||
      ((long)param_3 < 0)) || (SCARRY8(param_3,param_5))) {
LAB_00415940:
    uVar1 = 0xfffffffffffffffe;
  }
  else {
    if (param_5 == 0) {
      __dest = (void *)0x0;
      param_4 = param_2;
    }
    else {
      __dest = (void *)0x0;
      if (param_3 != 0) {
        __dest = malloc(param_3 + param_5);
        if (__dest == (void *)0x0) goto LAB_00415940;
        memcpy(__dest,param_2,param_3);
        memcpy((void *)((long)__dest + param_3),param_4,param_5);
        param_4 = __dest;
      }
    }
    uVar1 = FUN_004153d0(param_1,param_4,param_3 + param_5,param_6,param_7,param_9,param_8,param_10)
    ;
    free(__dest);
  }
  return uVar1;
}


int FUN_00415960(undefined *param_1,char *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  *param_1 = 0;
  uVar6 = (-(uint)((param_3 & 1) == 0) & 0xfd4fca) + 0x3b2fc;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar2 = malloc(0x100);
  param_1[4] = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xc;
  }
  uVar4 = (param_3 & 2) << 0x15;
  uVar5 = uVar4 | uVar6;
  bVar7 = (param_3 & 4) != 0;
  if (bVar7) {
    uVar5 = uVar4 | uVar6 & 0xffffffbf | 0x100;
  }
  param_1[5] = 0;
  *(byte *)(param_1 + 7) =
       (byte)((param_3 >> 3 & 1) << 4) | *(byte *)(param_1 + 7) & 0x6f | bVar7 << 7;
  sVar3 = strlen(param_2);
  iVar1 = FUN_004144d0(param_1,param_2,sVar3,uVar5);
  if (iVar1 == 0x10) {
    iVar1 = 8;
  }
  else if (iVar1 == 0) {
    FUN_00415300(param_1);
    return 0;
  }
  free((void *)param_1[4]);
  param_1[4] = 0;
  return iVar1;
}


ulong FUN_00415a70(uint param_1,undefined param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  char *__s;
  size_t sVar2;
  
  if (param_1 < 0x11) {
    __s = (char *)dcgettext(0,"Success" + *(long *)(&DAT_004191e0 + (long)(int)param_1 * 8),5);
    sVar2 = strlen(__s);
    uVar1 = sVar2 + 1;
    if (param_4 != 0) {
      sVar2 = uVar1;
      if (param_4 < uVar1) {
        sVar2 = param_4 - 1;
        *(undefined *)((long)param_3 + (param_4 - 1)) = 0;
      }
      memcpy(param_3,__s,sVar2);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00415af0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0040d0f0();
  }
  *param_1 = 0;
  param_1[1] = 0;
  free((void *)param_1[4]);
  param_1[4] = 0;
  free((void *)param_1[5]);
  param_1[5] = 0;
  return;
}


bool FUN_00415b40(long param_1,char *param_2,undefined param_3,undefined *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  undefined uVar4;
  
  if ((param_5 & 0xfffffff8) != 0) {
    return (bool)2;
  }
  if ((param_5 & 4) == 0) {
    sVar3 = strlen(param_2);
    uVar4 = 0;
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  else {
    uVar4 = *param_4;
    sVar3 = param_4[1];
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  if ((bVar1 & 0x10) != 0) {
    param_4 = (undefined *)0x0;
    param_3 = 0;
  }
  iVar2 = FUN_00410420(param_1,param_2,sVar3,uVar4,sVar3,sVar3,param_3,param_4,param_5);
  return iVar2 != 0;
}


void FUN_00415be0(void)

{
  FUN_004153d0();
  return;
}


void FUN_00415c00(void)

{
  FUN_004153d0();
  return;
}


void FUN_00415c20(void)

{
  FUN_00415830();
  return;
}


void FUN_00415c40(void)

{
  FUN_00415830();
  return;
}


void FUN_00415c60(long param_1,long *param_2,long param_3,long param_4,long param_5)

{
  if (param_3 != 0) {
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf9 | 2;
    *param_2 = param_3;
    param_2[1] = param_4;
    param_2[2] = param_5;
    return;
  }
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf9;
  *param_2 = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  return;
}


ulong FUN_00415ca0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004162d0(param_1);
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


bool FUN_00415d00(int param_1)

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
    pbVar5 = &DAT_00419410;
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

char * FUN_00415d60(void)

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
  if (DAT_0061d498 != (char *)0x0) goto LAB_00415d9a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00415e85:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00415ea6;
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
        goto LAB_00415e85;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00415ea6:
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
LAB_00415f40:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_004160cc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00415f40;
              if (uVar4 == 0x23) goto LAB_00416131;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_004160df;
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
                FUN_004162d0(__stream);
                goto LAB_00415ee4;
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
LAB_004160cc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_004160df;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00415ede;
    }
  }
  DAT_0061d498 = "";
LAB_00415d9a:
  cVar1 = *DAT_0061d498;
  pcVar7 = DAT_0061d498;
  do {
    if (cVar1 == '\0') {
LAB_00415df4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00415df4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00416131:
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
  if (uVar4 == 0xffffffff) goto LAB_004160df;
  goto LAB_00415f40;
LAB_004160df:
  FUN_004162d0(__stream);
  if (local_d0 == 0) {
LAB_00415ede:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00415ee4:
  free(__file);
  DAT_0061d498 = pcVar7;
  goto LAB_00415d9a;
}


int FUN_004162d0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00416337;
    }
    iVar1 = FUN_00416350(param_1);
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
LAB_00416337:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00416350(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00416390(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00416390(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x00416423) */
/* WARNING: Removing unreachable block (ram,0x00416428) */

void FUN_004163f0(void)

{
  __DT_INIT();
  return;
}


void FUN_00416450(void)

{
  return;
}


void FUN_00416460(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0061d248);
  return;
}


undefined FUN_00416478(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0061ce30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401e11();
  return;
}

