
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00402a60caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401705(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040170a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040170f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401714(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_004048aacaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_00401720(int param_1,undefined *param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char **ppcVar7;
  long lVar8;
  char **ppcVar9;
  undefined *puVar10;
  char **ppcVar11;
  char **ppcVar12;
  char **ppcVar13;
  undefined uVar14;
  int *piVar15;
  undefined uVar16;
  uint uVar17;
  char **ppcVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  char **ppcVar22;
  long *plVar23;
  char **ppcVar24;
  char *local_58;
  int local_4c;
  undefined local_48 [8];
  char *local_40;
  
  FUN_00402870(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00406700(FUN_00402480);
  FUN_00402760(param_1,param_2,"tsort","coreutils",PTR_DAT_0060a1f0,FUN_00402150);
  iVar5 = FUN_00405f60(param_1,param_2,&DAT_00406814,&DAT_00406b40);
  if (iVar5 == -1) {
    if (param_1 - DAT_0060a258._4_4_ < 2) {
      if (DAT_0060a258._4_4_ == param_1) {
        ppcVar7 = (char **)FUN_00401f80(0);
        local_4c = 0;
        local_58 = "-";
      }
      else {
        local_58 = (char *)param_2[DAT_0060a258._4_4_];
        local_4c = strcmp(local_58,"-");
        ppcVar7 = (char **)FUN_00401f80(0);
        if ((local_4c != 0) && (lVar8 = FUN_004025b0(local_58,"r",stdin), lVar8 == 0)) {
          uVar14 = FUN_00404310(0,3,local_58);
          piVar15 = __errno_location();
          error(1,*piVar15,"%s",uVar14);
LAB_00401d0e:
                    /* WARNING: Subroutine does not return */
          __assert_fail("len != 0","src/tsort.c",0x1d3,"tsort");
        }
      }
      FUN_00402530(stdin,2);
      FUN_004044b0(local_48);
      do {
        ppcVar9 = (char **)0x0;
        do {
          ppcVar24 = ppcVar9;
          lVar8 = FUN_004044c0(stdin,&DAT_00406811,3,local_48);
          pcVar2 = local_40;
          if (lVar8 == -1) {
            if (ppcVar24 != (char **)0x0) goto LAB_00401dc8;
            if (ppcVar7[2] != (char *)0x0) {
              FUN_00401f10(ppcVar7[2],FUN_00401f00);
            }
            uVar17 = 1;
            goto LAB_00401b21;
          }
          if (lVar8 == 0) goto LAB_00401d0e;
          if (ppcVar7 == (char **)0x0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("root","src/tsort.c",0x8a,"search_item");
          }
          ppcVar22 = (char **)ppcVar7[2];
          ppcVar18 = ppcVar7;
          ppcVar11 = ppcVar22;
          if (ppcVar22 != (char **)0x0) {
LAB_004018c2:
            ppcVar9 = ppcVar11;
            iVar6 = strcmp(pcVar2,*ppcVar9);
            if (iVar6 != 0) {
              ppcVar11 = (char **)ppcVar9[2];
              if (iVar6 < 0) {
                ppcVar11 = (char **)ppcVar9[1];
              }
              if (ppcVar11 != (char **)0x0) goto code_r0x004018b2;
              ppcVar11 = (char **)FUN_00401f80(pcVar2);
              if (iVar6 < 0) {
                ppcVar9[1] = (char *)ppcVar11;
              }
              else {
                ppcVar9[2] = (char *)ppcVar11;
              }
              iVar6 = strcmp(pcVar2,*ppcVar22);
              if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("!STREQ (str, s->str)","src/tsort.c",0xae,"search_item");
              }
              ppcVar13 = (char **)ppcVar22[2];
              if (iVar6 < 0) {
                ppcVar13 = (char **)ppcVar22[1];
              }
              ppcVar9 = ppcVar13;
              iVar21 = 1;
              if (iVar6 < 0) {
                iVar21 = iVar5;
              }
              while (ppcVar11 != ppcVar9) {
                iVar6 = strcmp(pcVar2,*ppcVar9);
                if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("!STREQ (str, p->str)","src/tsort.c",0xbc,"search_item");
                }
                if (iVar6 < 0) {
                  *(undefined *)(ppcVar9 + 3) = 0xffffffff;
                  ppcVar9 = (char **)ppcVar9[1];
                }
                else {
                  *(undefined *)(ppcVar9 + 3) = 1;
                  ppcVar9 = (char **)ppcVar9[2];
                }
              }
              iVar6 = *(int *)(ppcVar22 + 3);
              ppcVar9 = ppcVar11;
              if ((iVar6 == 0) || (iVar20 = -iVar21, iVar6 == iVar20)) {
                *(int *)(ppcVar22 + 3) = iVar21 + iVar6;
              }
              else {
                if (iVar21 == *(int *)(ppcVar13 + 3)) {
                  if (iVar21 < 0) {
                    ppcVar22[1] = ppcVar13[2];
                    ppcVar13[2] = (char *)ppcVar22;
                  }
                  else {
                    ppcVar22[2] = ppcVar13[1];
                    ppcVar13[1] = (char *)ppcVar22;
                  }
                  *(undefined *)(ppcVar13 + 3) = 0;
                  *(undefined *)(ppcVar22 + 3) = 0;
                }
                else {
                  ppcVar11 = (char **)ppcVar13[1];
                  ppcVar12 = (char **)ppcVar13[2];
                  if (iVar21 < 0) {
                    ppcVar13[2] = ppcVar12[1];
                    ppcVar12[1] = (char *)ppcVar13;
                    ppcVar22[1] = ppcVar12[2];
                    ppcVar12[2] = (char *)ppcVar22;
                  }
                  else {
                    ppcVar13[1] = ppcVar11[2];
                    ppcVar11[2] = (char *)ppcVar13;
                    ppcVar22[2] = ppcVar11[1];
                    ppcVar11[1] = (char *)ppcVar22;
                    ppcVar12 = ppcVar11;
                  }
                  *(undefined *)(ppcVar22 + 3) = 0;
                  *(undefined *)(ppcVar13 + 3) = 0;
                  if (iVar21 == *(int *)(ppcVar12 + 3)) {
                    *(int *)(ppcVar22 + 3) = iVar20;
                  }
                  else if (iVar20 == *(int *)(ppcVar12 + 3)) {
                    *(int *)(ppcVar13 + 3) = iVar21;
                  }
                  *(undefined *)(ppcVar12 + 3) = 0;
                  ppcVar13 = ppcVar12;
                }
                if ((char **)ppcVar18[2] == ppcVar22) {
                  ppcVar18[2] = (char *)ppcVar13;
                }
                else {
                  ppcVar18[1] = (char *)ppcVar13;
                }
              }
            }
            goto joined_r0x004018db;
          }
          ppcVar9 = (char **)FUN_00401f80(local_40);
          ppcVar7[2] = (char *)ppcVar9;
INVALID_JUMP; //joined_r0x004018db:
        } while (ppcVar24 == (char **)0x0);
        iVar6 = strcmp(*ppcVar24,*ppcVar9);
        if (iVar6 != 0) {
          ppcVar9[4] = ppcVar9[4] + 1;
          puVar10 = (undefined *)FUN_00404dc0(0x10);
          pcVar2 = ppcVar24[6];
          *puVar10 = ppcVar9;
          puVar10[1] = pcVar2;
          ppcVar24[6] = (char *)puVar10;
        }
      } while( true );
    }
    uVar14 = FUN_00404490(param_2[(long)DAT_0060a258._4_4_ + 1],0,param_1 - DAT_0060a258._4_4_,
                          "Mark Kettenis");
    uVar16 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar16,uVar14);
  }
  FUN_00402150(1);
LAB_00401d92:
  if (local_4c != 0) goto LAB_00401e01;
  uVar14 = dcgettext(0,"standard input",5);
  do {
    piVar15 = __errno_location();
    error(1,*piVar15,"%s",uVar14);
LAB_00401dc8:
    uVar14 = FUN_00404310(0,3,local_58);
    uVar16 = dcgettext(0,"%s: input contains an odd number of tokens",5);
    error(1,0,uVar16,uVar14);
LAB_00401e01:
    uVar14 = FUN_00404310(0,3,local_58);
  } while( true );
LAB_00401b21:
  if (DAT_0060a298 == 0) goto LAB_00401be3;
  if (ppcVar7[2] == (char *)0x0) {
    if (DAT_0060a2b0 != (char **)0x0) goto LAB_00401b60;
  }
  else {
    FUN_00401f10(ppcVar7[2],FUN_00401ff0);
    lVar8 = DAT_0060a298;
    for (; DAT_0060a2b0 != (char **)0x0; DAT_0060a2b0 = (char **)DAT_0060a2b0[5]) {
LAB_00401b60:
      plVar23 = (long *)DAT_0060a2b0[6];
      puts(*DAT_0060a2b0);
      lVar19 = DAT_0060a2a8;
      bVar4 = false;
      lVar8 = DAT_0060a298 + -1;
      *DAT_0060a2b0 = (char *)0x0;
      DAT_0060a298 = lVar8;
      if (plVar23 != (long *)0x0) {
        do {
          lVar3 = *plVar23;
          plVar1 = (long *)(lVar3 + 0x20);
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) {
            *(long *)(lVar19 + 0x28) = lVar3;
            bVar4 = true;
            lVar19 = lVar3;
          }
          plVar23 = (long *)plVar23[1];
        } while (plVar23 != (long *)0x0);
        if (bVar4) {
          DAT_0060a2a8 = lVar19;
        }
      }
    }
    if (lVar8 == 0) goto LAB_00401be3;
  }
  uVar14 = FUN_00404310(0,3,local_58);
  uVar16 = dcgettext(0,"%s: input contains a loop:",5);
  uVar17 = 0;
  error(0,0,uVar16,uVar14);
  do {
    if (ppcVar7[2] != (char *)0x0) {
      FUN_00401f10(ppcVar7[2],FUN_00402030);
    }
  } while (DAT_0060a2a0 != 0);
  goto LAB_00401b21;
LAB_00401be3:
  iVar5 = FUN_00405050(stdin);
  if (iVar5 == 0) {
    return uVar17 ^ 1;
  }
  goto LAB_00401d92;
code_r0x004018b2:
  if (*(int *)(ppcVar11 + 3) != 0) {
    ppcVar18 = ppcVar9;
    ppcVar22 = ppcVar11;
  }
  goto LAB_004018c2;
}


void FUN_00401e20(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00609ff0)
            (FUN_00401720,unaff_retaddr,&stack0x00000008,FUN_00406690,FUN_004066f0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401e58) */
/* WARNING: Removing unreachable block (ram,0x00401e62) */

void FUN_00401e4b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e99) */

void FUN_00401e6a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401ed6) */

void FUN_00401ea1(void)

{
  if (DAT_0060a288 != '\0') {
    return;
  }
  FUN_00401e4b();
  DAT_0060a288 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e99) */

void thunk_FUN_00401e6a(void)

{
  return;
}


undefined FUN_00401f00(void)

{
  DAT_0060a298 = DAT_0060a298 + 1;
  return 0;
}


undefined FUN_00401f10(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  char cVar1;
  undefined uVar2;
  
  while( true ) {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00401f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1);
        return uVar2;
      }
    }
    else {
      cVar1 = FUN_00401f10(*(long *)(param_1 + 8),UNRECOVERED_JUMPTABLE);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1);
    if ((char)uVar2 != '\0') break;
    param_1 = *(long *)(param_1 + 0x10);
    if (param_1 == 0) {
      return uVar2;
    }
  }
  return 1;
}


long * FUN_00401f80(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00404dc0(0x38);
  if (param_1 != 0) {
    param_1 = FUN_00404ff0(param_1);
  }
  *plVar1 = param_1;
  plVar1[2] = 0;
  plVar1[1] = 0;
  *(undefined *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  plVar1[5] = 0;
  plVar1[6] = 0;
  return plVar1;
}


undefined FUN_00401ff0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = DAT_0060a2a8;
  plVar2 = DAT_0060a2b0;
  if (((param_1[4] == 0) && (*param_1 != 0)) &&
     (plVar1 = param_1, plVar2 = param_1, DAT_0060a2b0 != (long *)0x0)) {
    DAT_0060a2a8[5] = (long)param_1;
    plVar1 = param_1;
    plVar2 = DAT_0060a2b0;
  }
  DAT_0060a2b0 = plVar2;
  DAT_0060a2a8 = plVar1;
  return 0;
}


undefined FUN_00402030(undefined *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long **pplVar4;
  
  if (param_1[4] != 0) {
    if (DAT_0060a2a0 == (undefined *)0x0) {
      DAT_0060a2a0 = param_1;
      return 0;
    }
    plVar1 = (long *)param_1[6];
    if (plVar1 != (long *)0x0) {
      if (DAT_0060a2a0 == (undefined *)*plVar1) {
        pplVar4 = (long **)(param_1 + 6);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)plVar3[1];
          if (plVar1 == (long *)0x0) {
            return 0;
          }
        } while (DAT_0060a2a0 != (undefined *)*plVar1);
        pplVar4 = (long **)(plVar3 + 1);
      }
      if (param_1[5] != 0) {
        do {
          puVar2 = (undefined *)DAT_0060a2a0[5];
          error(0,0,"%s",*DAT_0060a2a0);
          if (param_1 == DAT_0060a2a0) {
            plVar3 = (long *)(*pplVar4)[1];
            plVar1 = (long *)(**pplVar4 + 0x20);
            *plVar1 = *plVar1 + -1;
            *pplVar4 = plVar3;
            do {
              puVar2 = (undefined *)DAT_0060a2a0[5];
              DAT_0060a2a0[5] = 0;
              DAT_0060a2a0 = puVar2;
            } while (puVar2 != (undefined *)0x0);
            DAT_0060a2a0 = (undefined *)0x0;
            return 1;
          }
          DAT_0060a2a0[5] = 0;
          DAT_0060a2a0 = puVar2;
        } while (puVar2 != (undefined *)0x0);
        return 1;
      }
      param_1[5] = DAT_0060a2a0;
      DAT_0060a2a0 = param_1;
      return 0;
    }
  }
  return 0;
}


void FUN_00402150(int param_1)

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
  
  uVar7 = DAT_0060a2c8;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040218f;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION] [FILE]\nWrite totally ordered list consistent with the partial ordering in FILE.\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,&DAT_00406813,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040676a;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x4067e4;
  local_78[1] = (byte *)0x40677c;
  local_78[2] = (byte *)0x406792;
  local_78[3] = (byte *)0x40679c;
  local_78[4] = (byte *)0x4067ab;
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
    pbVar10 = (byte *)"tsort";
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
        pcVar4 = "tsort";
        goto LAB_00402433;
      }
    }
    pcVar4 = "tsort";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","tsort");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00402433:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"tsort");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","tsort");
    if (pcVar4 != "tsort") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_0040218f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402460(undefined param_1)

{
  DAT_0060a2c0 = param_1;
  return;
}


void FUN_00402470(undefined param_1)

{
  DAT_0060a2b8 = param_1;
  return;
}


void FUN_00402480(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00406060(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060a2b8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060a2c0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_004042e0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_004024fe;
    }
  }
  iVar1 = FUN_00406060(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_004024fe:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060a1f8);
}


void FUN_00402520(void)

{
  (*(code *)PTR_posix_fadvise_0060a0f0)();
  return;
}


void FUN_00402530(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


undefined FUN_00402560(int param_1)

{
  int __fd;
  int *piVar1;
  undefined uVar2;
  
  uVar2 = 1;
  __fd = open("/dev/null",0);
  if ((param_1 != __fd) && (uVar2 = 0, -1 < __fd)) {
    close(__fd);
    piVar1 = __errno_location();
    *piVar1 = 9;
    return 0;
  }
  return uVar2;
}


long FUN_004025b0(undefined param_1,undefined param_2,FILE *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  
  iVar3 = fileno(param_3);
  piVar4 = __errno_location();
  if (iVar3 == 1) {
    cVar6 = false;
    cVar7 = false;
LAB_00402620:
    iVar3 = dup2(0,0);
    if (iVar3 != 0) {
      cVar2 = FUN_00402560();
      if (cVar2 != '\0') {
        cVar1 = cVar2;
        if ((bool)cVar7 != false) goto LAB_004026a8;
        goto LAB_00402644;
      }
      cVar2 = '\x01';
      lVar5 = 0;
      goto LAB_0040266f;
    }
    cVar2 = '\0';
    cVar1 = '\0';
    if ((bool)cVar7 == false) {
LAB_00402644:
      if (((bool)cVar6 == false) || (cVar6 = FUN_00402560(2), cVar6 != '\0')) goto LAB_0040265c;
      iVar3 = *piVar4;
      lVar5 = 0;
      goto LAB_00402716;
    }
LAB_004026a8:
    cVar2 = cVar1;
    cVar7 = FUN_00402560(1);
    if (cVar7 != '\0') goto LAB_00402644;
    iVar3 = *piVar4;
    lVar5 = 0;
    if ((bool)cVar6 != false) {
      close(2);
    }
  }
  else {
    if (iVar3 == 2) {
      cVar6 = false;
LAB_0040260a:
      iVar3 = dup2(1,1);
      cVar7 = iVar3 != 1;
      goto LAB_00402620;
    }
    if (iVar3 != 0) {
      iVar3 = dup2(2,2);
      cVar6 = iVar3 != 2;
      goto LAB_0040260a;
    }
    cVar6 = '\0';
    cVar7 = '\0';
    cVar2 = '\0';
LAB_0040265c:
    lVar5 = FUN_00405110(param_1,param_2,param_3);
LAB_0040266f:
    iVar3 = *piVar4;
    if (cVar6 != '\0') {
LAB_00402716:
      close(2);
    }
    if (cVar7 == '\0') goto joined_r0x004026dd;
  }
  close(1);
joined_r0x004026dd:
  if (cVar2 != '\0') {
    close(0);
  }
  if (lVar5 == 0) {
    *piVar4 = iVar3;
  }
  return lVar5;
}


void FUN_00402760(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
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
  
  uVar1 = (undefined)DAT_0060a258;
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
  DAT_0060a258._0_4_ = 0;
  if ((int)param_9 == 2) {
    iVar2 = FUN_00405f60(param_9,param_10,&DAT_00406b82,&PTR_DAT_00406ba0,0);
    if (iVar2 != -1) {
      if (iVar2 == 0x68) {
        (*param_14)(0);
      }
      else if (iVar2 == 0x76) {
        local_e8 = &stack0x00000008;
        local_f0 = 0x30;
        local_e0 = local_d8;
        local_ec = 0x30;
        FUN_00404c20(stdout,param_11,param_12,param_13,&local_f0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
  }
  DAT_0060a258._0_4_ = uVar1;
  DAT_0060a258._4_4_ = 0;
  return;
}


void FUN_00402870(byte *param_1)

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
        pbVar6 = &DAT_00406c40;
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
  DAT_0060a2c8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00402910(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406120();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004029e8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00406c51;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00406c46;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004029e8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00406c4d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00406c4a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402a10(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403661:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403296;
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
      goto LAB_00403661;
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
      param_8 = (char *)FUN_00402910(&DAT_00406c55,param_5);
      param_9 = (char *)FUN_00402910(&DAT_00407e37);
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
LAB_00402aa8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00402ab8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403238;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004031b0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004031c2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040302e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00402ec5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004031c2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004031c2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004031c2_caseD_b:
        bVar17 = 0x76;
        goto LAB_00402ec5;
      case 0xc:
switchD_004031c2_caseD_c:
        bVar17 = 0x66;
LAB_00402ec5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00402e18;
        }
LAB_00402ed0:
        bVar23 = false;
        goto LAB_00402c8b;
      case 0xd:
        bVar20 = false;
switchD_00402ba8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00402de0;
      case 0x20:
        bVar25 = false;
LAB_0040320a:
        uVar19 = 0x20;
        goto LAB_004031d2;
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
switchD_00402ba8_caseD_21:
        bVar25 = false;
        goto LAB_00402deb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004031ea:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00402bf8;
        }
        bVar23 = false;
        goto LAB_00402c0f;
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
LAB_004031d2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00402c11;
      case 0x27:
        bVar20 = false;
        goto switchD_0040302e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040302e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00402ba8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040302e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00402e07;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004031b0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00402ba8_caseD_0;
      default:
        goto switchD_0040302e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00402ed0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004031c2_caseD_9;
      case 10:
        goto switchD_004031c2_caseD_a;
      case 0xb:
        goto switchD_004031c2_caseD_b;
      case 0xc:
        goto switchD_004031c2_caseD_c;
      case 0xd:
        goto switchD_00402ba8_caseD_d;
      case 0x20:
        goto LAB_0040320a;
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
        goto switchD_00402ba8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004031ea;
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
        goto LAB_004031d2;
      case 0x27:
        goto switchD_0040302e_caseD_27;
      case 0x3f:
        goto switchD_0040302e_caseD_3f;
      case 0x5c:
        goto switchD_00402ba8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040302e_caseD_7b;
      }
      goto LAB_00402c52;
    }
    goto LAB_00402e2a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004031c2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00402ba8_caseD_0:
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
            goto LAB_00402d08;
          }
LAB_00402f4a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00402f4a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00402d08;
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
LAB_00402f89:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00402d08;
        goto LAB_00402c11;
      }
      bVar26 = param_5 == 2;
      goto LAB_00402e1c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00402bf8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00402ab8;
  default:
switchD_0040302e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00405fe0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040393a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00403a77;
          goto LAB_00403a67;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00402e1c;
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
      goto LAB_0040393a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403004;
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
    goto LAB_00403042;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403042;
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
LAB_00403042:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040305a:
      param_5 = 2;
      goto LAB_00402e1c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00402be6;
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
LAB_00402be6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040305a;
    goto LAB_00402bf8;
  case 0x23:
  case 0x7e:
LAB_00402bdd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00402be6;
    goto LAB_00402deb;
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
    goto switchD_0040302e_caseD_25;
  case 0x27:
switchD_0040302e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00402bf8;
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
      goto LAB_00402d08;
    }
    goto LAB_00402e1c;
  case 0x3f:
switchD_0040302e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00402d08;
      }
      goto LAB_00402e1c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00402bf8;
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
        goto LAB_00402f89;
      }
      goto LAB_00402e2a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00402bf8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00402ba8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00402d24;
    }
    if (local_5c) goto LAB_00402e1c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00402d24;
  case 0x7b:
  case 0x7d:
switchD_0040302e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00402bdd;
    goto LAB_00402deb;
  }
LAB_00402de0:
  if (!bVar6) {
LAB_00402deb:
    bVar23 = false;
    goto LAB_00402bf8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00402e07;
LAB_00403238:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00402e1c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00402e2a:
    uVar9 = FUN_00402a10(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00403b0d:
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
    uVar9 = FUN_00402a10(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00403b0d;
LAB_00403296:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00402aa8;
  while (__s1[uVar21] != 0) {
LAB_00403a67:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00403a77:
  bVar23 = false;
LAB_0040393a:
  if (1 < uVar21) {
LAB_004034fe:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00402e1c;
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
        if (uVar21 <= uVar22) goto LAB_00402c9d;
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
        if (uVar21 <= uVar22) goto LAB_00402d24;
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
LAB_00403004:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_004034fe;
  }
switchD_0040302e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00402bf8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00402c0f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00402c11:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00402d08;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00402d08:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00402d24:
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
      goto LAB_00402c9d;
    }
  }
joined_r0x00402e07:
  if (local_5c) {
LAB_00402e18:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00402e1c;
  }
LAB_00402c52:
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
LAB_00402c8b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00402c9d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00402ab8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00403c40(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060a238;
  if (DAT_0060a250 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405010();
    }
    if (PTR_DAT_0060a238 == &DAT_0060a240) {
      puVar8 = (undefined *)FUN_00404e20(0);
      uVar6 = PTR_DAT_0060a248._4_4_;
      uVar5 = PTR_DAT_0060a248._0_4_;
      uVar3 = _UNK_0060a244;
      PTR_DAT_0060a238 = (undefined *)puVar8;
      *puVar8 = _DAT_0060a240;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00404e20(PTR_DAT_0060a238);
      PTR_DAT_0060a238 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060a250 * 4,0,(long)((param_1 + 1) - DAT_0060a250) << 4);
    DAT_0060a250 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00402a10(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060a2e0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00404dc0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00402a10(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00403de0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a3e0;
  }
  FUN_00404fc0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00403e20(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060a3e0;
  }
  return *param_1;
}


void FUN_00403e30(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060a3e0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00403e40(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a3e0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00403e80(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a3e0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00403ea0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060a3e0;
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


void FUN_00403ed0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060a3e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402a10(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00403f50(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060a3e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00402a10(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00404dc0(lVar3 + 1);
  FUN_00402a10(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404040(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00403f50(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404050(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060a238;
  if (1 < DAT_0060a250) {
    ppvVar2 = (void **)(PTR_DAT_0060a238 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060a238 + (ulong)(DAT_0060a250 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060a2e0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060a240 = 0x100;
    PTR_DAT_0060a248 = &DAT_0060a2e0;
  }
  if (__ptr_00 != &DAT_0060a240) {
    free(__ptr_00);
    PTR_DAT_0060a238 = &DAT_0060a240;
  }
  DAT_0060a250 = 1;
  return;
}


void FUN_004040f0(undefined param_1,undefined param_2)

{
  FUN_00403c40(param_1,param_2,0xffffffffffffffff,&DAT_0060a3e0);
  return;
}


void FUN_00404110(void)

{
  FUN_00403c40();
  return;
}


void FUN_00404120(undefined param_1)

{
  FUN_00403c40(0,param_1,0xffffffffffffffff,&DAT_0060a3e0);
  return;
}


void FUN_00404140(undefined param_1,undefined param_2)

{
  FUN_00403c40(0,param_1,param_2,&DAT_0060a3e0);
  return;
}


void FUN_00404160(undefined param_1,int param_2,undefined param_3)

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
    FUN_00403c40(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004041d0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00403c40(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404240(undefined param_1,undefined param_2)

{
  FUN_00404160(0,param_1,param_2);
  return;
}


void FUN_00404250(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004041d0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404260(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060a410;
  local_48 = _DAT_0060a3e0;
  uStack_40 = uRam000000000060a3e8;
  local_38 = _DAT_0060a3f0;
  uStack_30 = uRam000000000060a3f8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060a400;
  uStack_20 = uRam000000000060a408;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00403c40(0,param_1,param_2,&local_48);
  return;
}


void FUN_004042d0(undefined param_1,char param_2)

{
  FUN_00404260(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_004042e0(undefined param_1)

{
  FUN_00404260(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404300(undefined param_1,undefined param_2)

{
  FUN_00404260(param_1,param_2,0x3a);
  return;
}


void FUN_00404310(undefined param_1,int param_2,undefined param_3)

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
    FUN_00403c40(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404380(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060a3e8;
  local_38 = _DAT_0060a3f0;
  uStack_30 = uRam000000000060a3f8;
  local_28 = _DAT_0060a400;
  lStack_20 = uRam000000000060a408;
  local_18 = DAT_0060a410;
  local_48 = CONCAT44((int)((ulong)_DAT_0060a3e0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00403c40(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004043f0(void)

{
  FUN_00404380();
  return;
}


void FUN_00404400(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404380(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404420(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00404380(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404440(void)

{
  FUN_00403c40();
  return;
}


void FUN_00404450(undefined param_1,undefined param_2)

{
  FUN_00403c40(0,param_1,param_2,&DAT_0060a200);
  return;
}


void FUN_00404470(undefined param_1,undefined param_2)

{
  FUN_00403c40(param_1,param_2,0xffffffffffffffff,&DAT_0060a200);
  return;
}


void FUN_00404490(undefined param_1)

{
  FUN_00403c40(0,param_1,0xffffffffffffffff,&DAT_0060a200);
  return;
}


void FUN_004044b0(undefined *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


ulong FUN_004044c0(_IO_FILE *param_1,byte *param_2,long param_3,ulong *param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined local_58 [16];
  undefined local_48 [16];
  
  local_58 = (undefined)0x0;
  local_48 = (undefined)0x0;
  if (param_3 == 0) goto LAB_0040453c;
  pbVar4 = param_2 + param_3;
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *(ulong *)(local_58 + (bVar1 >> 3 & 0x18)) =
         *(ulong *)(local_58 + (bVar1 >> 3 & 0x18)) | 1L << (bVar1 & 0x3f);
  } while (pbVar4 != param_2);
  pbVar4 = (byte *)param_1->_IO_read_ptr;
  if (param_1->_IO_read_end <= pbVar4) goto LAB_00404546;
LAB_00404520:
  param_1->_IO_read_ptr = (char *)(pbVar4 + 1);
  uVar6 = (ulong)*pbVar4;
LAB_0040452b:
  if ((*(ulong *)(local_58 + ((ulong)(long)(int)uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0)
  goto LAB_00404554;
LAB_0040453c:
  pbVar4 = (byte *)param_1->_IO_read_ptr;
  if (param_1->_IO_read_end <= pbVar4) goto LAB_00404546;
  goto LAB_00404520;
LAB_00404546:
  uVar2 = __uflow(param_1);
  uVar6 = (ulong)uVar2;
  if ((int)uVar2 < 0) {
LAB_00404554:
    uVar3 = param_4[1];
    uVar8 = *param_4;
    uVar7 = 0;
    goto LAB_0040459c;
  }
  goto LAB_0040452b;
LAB_0040459c:
  iVar5 = (int)uVar6;
  if ((iVar5 < 0) && (uVar7 == 0)) {
    return 0xffffffffffffffff;
  }
  if (uVar7 == uVar8) {
    if (uVar3 == 0) {
      if (uVar7 == 0) {
        uVar8 = 0x80;
      }
      else if ((long)uVar7 < 0) goto LAB_0040462a;
    }
    else {
      if (0x5555555555555553 < uVar7) {
LAB_0040462a:
                    /* WARNING: Subroutine does not return */
        FUN_00405010();
      }
      uVar8 = uVar7 + 1 + (uVar7 >> 1);
    }
    uVar3 = FUN_00404e20(uVar3,uVar8);
  }
  if ((iVar5 < 0) ||
     ((*(ulong *)(local_58 + ((ulong)(long)iVar5 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0)) {
    *(undefined *)(uVar3 + uVar7) = 0;
    param_4[1] = uVar3;
    *param_4 = uVar8;
    return uVar7;
  }
  *(undefined *)(uVar3 + uVar7) = (char)uVar6;
  uVar7 = uVar7 + 1;
  pbVar4 = (byte *)param_1->_IO_read_ptr;
  if (pbVar4 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar4 + 1);
    uVar6 = (ulong)*pbVar4;
  }
  else {
    uVar2 = __uflow(param_1);
    uVar6 = (ulong)uVar2;
  }
  goto LAB_0040459c;
}


ulong FUN_00404640(undefined param_1,long param_2,undefined param_3,undefined param_4,
                  long *param_5,void **param_6)

{
  long lVar1;
  void *__ptr;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  size_t __n;
  undefined local_48;
  void *local_40;
  
  if (param_2 == 0) {
    lVar4 = 0x200;
    uVar6 = 0x40;
  }
  else {
    uVar6 = param_2 + 1;
    lVar4 = uVar6 * 8;
    if ((lVar4 < 0) || (uVar6 >> 0x3d != 0)) {
LAB_0040468a:
                    /* WARNING: Subroutine does not return */
      FUN_00405010();
    }
  }
  lVar1 = FUN_00404dc0(lVar4);
  uVar5 = 0;
  __ptr = (void *)FUN_00404dc0(lVar4);
  local_48 = 0;
  local_40 = (void *)0x0;
  do {
    lVar4 = FUN_004044c0(param_1,param_3,param_4,&local_48);
    if (uVar6 <= uVar5) {
      if (lVar1 == 0) {
        if (uVar6 == 0) {
          lVar3 = 0x80;
          uVar6 = 0x10;
        }
        else {
          lVar3 = uVar6 << 3;
          if ((lVar3 < 0) || (uVar6 >> 0x3d != 0)) goto LAB_0040468a;
        }
      }
      else {
        if (0xaaaaaaaaaaaaaa9 < uVar6) goto LAB_0040468a;
        uVar6 = uVar6 + 1 + (uVar6 >> 1);
        lVar3 = uVar6 * 8;
      }
      lVar1 = FUN_00404e20(lVar1,lVar3);
      __ptr = (void *)FUN_00404e20(__ptr,lVar3);
    }
    if (lVar4 == -1) {
      *(undefined *)(lVar1 + uVar5 * 8) = 0;
      *(undefined *)((long)__ptr + uVar5 * 8) = 0;
      free(local_40);
      *param_5 = lVar1;
      if (param_6 == (void **)0x0) {
        free(__ptr);
      }
      else {
        *param_6 = __ptr;
      }
      return uVar5;
    }
    __n = lVar4 + 1;
    if ((long)__n < 0) goto LAB_0040468a;
    pvVar2 = (void *)FUN_00404dc0(__n);
    *(long *)((long)__ptr + uVar5 * 8) = lVar4;
    pvVar2 = memcpy(pvVar2,local_40,__n);
    *(void **)(lVar1 + uVar5 * 8) = pvVar2;
    uVar5 = uVar5 + 1;
  } while( true );
}


undefined
FUN_00404820(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_004079ab,5);
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
    goto LAB_00404a9c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00404a9c:
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
    goto LAB_00404b39;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00404b39:
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
    goto LAB_0040491a;
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
LAB_0040491a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00404c00(void)

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
  FUN_00404820();
  return;
}


void FUN_00404c20(void)

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
  FUN_00404820();
  return;
}


void FUN_00404c80(void)

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
  FUN_00404820();
  return;
}


void FUN_00404d40(void)

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


void FUN_00404dc0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405010();
  }
  return;
}


void FUN_00404de0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00404dc0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405010();
}


void thunk_FUN_00404dc0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405010();
  }
  return;
}


void * FUN_00404e20(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405010();
  }
  return pvVar1;
}


void FUN_00404e60(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00404e20();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405010();
}


void FUN_00404e90(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00404eeb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00404eeb:
                    /* WARNING: Subroutine does not return */
      FUN_00405010(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00404e20(param_1,uVar2 * param_3);
  return;
}


void FUN_00404f20(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00404e20(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00404f6a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00404f6a:
                    /* WARNING: Subroutine does not return */
      FUN_00405010();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00404e20(param_1,uVar1);
  return;
}


void FUN_00404f70(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00404dc0();
  memset(__s,0,param_1);
  return;
}


void FUN_00404f90(size_t param_1,ulong param_2)

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
  FUN_00405010();
}


void FUN_00404fc0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00404dc0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00404ff0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00404dc0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405010(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060a1f8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


int FUN_00405050(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004050b7;
    }
    iVar1 = FUN_004050d0(param_1);
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
LAB_004050b7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_004050d0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004051b0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


FILE * FUN_00405110(char *param_1,char *param_2,FILE *param_3)

{
  int iVar1;
  int iVar2;
  FILE *pFVar3;
  int *piVar4;
  
  pFVar3 = freopen(param_1,param_2,param_3);
  if ((pFVar3 != (FILE *)0x0) && (param_1 != (char *)0x0)) {
    iVar1 = fileno(pFVar3);
    iVar2 = dup2(iVar1,iVar1);
    if ((iVar2 < 0) && (piVar4 = __errno_location(), *piVar4 == 9)) {
      iVar2 = open("/dev/null",0x80000);
      if (iVar1 != iVar2) {
        iVar1 = dup2(iVar2,iVar1);
        if (iVar1 < 0) {
          close(iVar2);
          return pFVar3;
        }
        close(iVar2);
      }
      pFVar3 = freopen(param_1,param_2,pFVar3);
      return pFVar3;
    }
  }
  return pFVar3;
}


ulong FUN_004051b0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00405210(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040528c;
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
      if (iVar9 <= iVar3) goto LAB_0040528c;
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
LAB_0040528c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004052f0(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405510;
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
            if (local_70 == (char *)0x0) goto LAB_00405450;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405450;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405450:
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
              __fprintf_chk(__stream,1,&DAT_00407e31,param_9,*param_4);
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
LAB_00405510:
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


uint FUN_00405910(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_0040595a:
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
          goto LAB_00405a5d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00405a5d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00405a68:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004059d8;
LAB_00405a7c:
    if (*pbVar8 == 0) goto LAB_004059d8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040595a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00405a68;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00405a7c;
LAB_004059d8:
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
        FUN_00405210(param_2,param_7);
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
LAB_00405b46:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00407e49;
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
          FUN_00405210(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00405b46;
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
        puVar15 = &DAT_00407e49;
        goto LAB_00405ca5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00405c50;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004052f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00407e4a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00405c50:
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
  puVar15 = &DAT_00407e68;
LAB_00405ca5:
  uVar3 = FUN_004052f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405ee0(void)

{
  DAT_0060a420 = DAT_0060a258._4_4_;
  _DAT_0060a424 = (undefined)DAT_0060a258;
  FUN_00405910();
  DAT_0060a258._4_4_ = DAT_0060a420;
  _DAT_0060a460 = DAT_0060a430;
  _DAT_0060a254 = DAT_0060a428;
  return;
}


void FUN_00405f40(void)

{
  FUN_00405ee0();
  return;
}


void FUN_00405f60(void)

{
  FUN_00405ee0();
  return;
}


void FUN_00405f80(void)

{
  FUN_00405910();
  return;
}


void FUN_00405fa0(void)

{
  FUN_00405ee0();
  return;
}


void FUN_00405fc0(void)

{
  FUN_00405910();
  return;
}


size_t FUN_00405fe0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = &DAT_00406814;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00406004;
  }
  param_1 = &local_1c;
LAB_00406004:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004060c0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00406060(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00405050(param_1);
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


bool FUN_004060c0(int param_1)

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
    pbVar5 = &DAT_00407e6c;
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

char * FUN_00406120(void)

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
  if (DAT_0060a458 != (char *)0x0) goto LAB_0040615a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406245:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406266;
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
        goto LAB_00406245;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406266:
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
LAB_00406300:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040648c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00406300;
              if (uVar4 == 0x23) goto LAB_004064f1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040649f;
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
                FUN_00405050(__stream);
                goto LAB_004062a4;
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
LAB_0040648c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040649f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040629e;
    }
  }
  DAT_0060a458 = "";
LAB_0040615a:
  cVar1 = *DAT_0060a458;
  pcVar7 = DAT_0060a458;
  do {
    if (cVar1 == '\0') {
LAB_004061b4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004061b4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004064f1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040649f;
  goto LAB_00406300;
LAB_0040649f:
  FUN_00405050(__stream);
  if (local_d0 == 0) {
LAB_0040629e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004062a4:
  free(__file);
  DAT_0060a458 = pcVar7;
  goto LAB_0040615a;
}


/* WARNING: Removing unreachable block (ram,0x004066c3) */
/* WARNING: Removing unreachable block (ram,0x004066c8) */

void FUN_00406690(void)

{
  __DT_INIT();
  return;
}


void FUN_004066f0(void)

{
  return;
}


void FUN_00406700(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060a1e8);
  return;
}


undefined FUN_00406718(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00609e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401ea1();
  return;
}

