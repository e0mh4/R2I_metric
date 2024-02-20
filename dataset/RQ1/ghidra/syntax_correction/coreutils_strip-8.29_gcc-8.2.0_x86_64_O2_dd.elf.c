
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00406c00caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401fa5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401faa(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401faf(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401fb4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004087aacaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040b71ccaseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00401fd0(ulong param_1,char **param_2)

{
  __int32_t *p_Var1;
  _union_1454 _Var2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char **ppcVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  __int32_t **pp_Var11;
  int *piVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined *puVar22;
  char *pcVar23;
  __off_t _Var24;
  char *pcVar25;
  char *pcVar26;
  byte *__src;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined uVar30;
  __sighandler_t p_Var31;
  ulong unaff_R13;
  ulong unaff_R14;
  char *unaff_R15;
  bool bVar32;
  ulong local_f0;
  uint local_dc;
  undefined local_d8 [8];
  undefined local_d0;
  undefined uStack_cc;
  undefined uStack_c8;
  undefined uStack_c4;
  uint local_c0;
  __uid_t _Stack_bc;
  __gid_t _Stack_b8;
  int iStack_b4;
  undefined local_b0;
  undefined uStack_ac;
  undefined uStack_a8;
  undefined uStack_a4;
  undefined local_a0;
  undefined uStack_9c;
  undefined uStack_98;
  undefined uStack_94;
  undefined local_90;
  undefined uStack_8c;
  undefined uStack_88;
  undefined uStack_84;
  undefined local_80;
  undefined uStack_7c;
  undefined uStack_78;
  undefined uStack_74;
  undefined local_70;
  undefined uStack_6c;
  undefined uStack_68;
  undefined uStack_64;
  undefined local_60;
  undefined uStack_5c;
  undefined uStack_58;
  undefined uStack_54;
  int local_50;
  
  param_1 = param_1 & 0xffffffff;
  ppcVar7 = (char **)getenv("POSIXLY_CORRECT");
  sigemptyset((sigset_t *)&DAT_00614500);
  if (ppcVar7 == (char **)0x0) {
    sigaddset((sigset_t *)&DAT_00614500,10);
  }
  sigaction_t(2,(sigaction *)0x0,(sigaction *)local_d8);
  if (local_d8 != (undefined)0x1) {
    sigaddset((sigset_t *)&DAT_00614500,2);
  }
  local_d0 = _DAT_00614500;
  uStack_cc = uRam0000000000614504;
  uStack_c8 = uRam0000000000614508;
  uStack_c4 = uRam000000000061450c;
  local_c0 = _DAT_00614510;
  _Stack_bc = _Ram0000000000614514;
  _Stack_b8 = _Ram0000000000614518;
  iStack_b4 = iRam000000000061451c;
  local_b0 = _DAT_00614520;
  uStack_ac = uRam0000000000614524;
  uStack_a8 = uRam0000000000614528;
  uStack_a4 = uRam000000000061452c;
  local_a0 = _DAT_00614530;
  uStack_9c = uRam0000000000614534;
  uStack_98 = uRam0000000000614538;
  uStack_94 = uRam000000000061453c;
  local_90 = _DAT_00614540;
  uStack_8c = uRam0000000000614544;
  uStack_88 = uRam0000000000614548;
  uStack_84 = uRam000000000061454c;
  local_80 = _DAT_00614550;
  uStack_7c = uRam0000000000614554;
  uStack_78 = uRam0000000000614558;
  uStack_74 = uRam000000000061455c;
  local_70 = _DAT_00614560;
  uStack_6c = uRam0000000000614564;
  uStack_68 = uRam0000000000614568;
  uStack_64 = uRam000000000061456c;
  local_60 = _DAT_00614570;
  uStack_5c = uRam0000000000614574;
  uStack_58 = uRam0000000000614578;
  uStack_54 = uRam000000000061457c;
  iVar4 = sigismember((sigset_t *)&DAT_00614500,10);
  if (iVar4 != 0) {
    local_d8 = (undefined)FUN_00403d40;
    local_50 = 0;
    sigaction_t(10,(sigaction *)local_d8,(sigaction *)0x0);
  }
  iVar4 = sigismember((sigset_t *)&DAT_00614500,2);
  if (iVar4 != 0) {
    local_d8 = (undefined)FUN_00403d30;
    local_50 = -0x40000000;
    sigaction_t(2,(sigaction *)local_d8,(sigaction *)0x0);
  }
  FUN_00406a10(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040da80(FUN_00404720);
  iVar4 = getpagesize();
  iVar6 = (int)param_1;
  DAT_00614658 = (long)iVar4;
  FUN_00406900(param_1,param_2,&DAT_0040dc23,"coreutils",PTR_DAT_006142c8,FUN_00405460,"Paul Rubin",
               "David MacKenzie","Stuart Kemp",0);
  pcVar9 = (char *)0x0;
  DAT_006142b8 = 0;
  iVar4 = FUN_0040a500(param_1,param_2,"",&DAT_0040f680,0);
  if (iVar4 != -1) {
    uVar19 = FUN_00405460();
    goto LAB_0040391f;
  }
  lVar8 = 0;
  do {
    (&DAT_006143e0)[lVar8] = (char)lVar8;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x100);
  if ((int)DAT_0061433c < iVar6) {
    unaff_R13 = 0;
    unaff_R14 = 0;
    local_f0 = 0;
    ppcVar7 = param_2 + (int)DAT_0061433c;
    param_1 = 0xffffffffffffffff;
    param_2 = param_2 + (ulong)(~DAT_0061433c + iVar6) + (long)(int)DAT_0061433c + 1;
    do {
      unaff_R15 = *ppcVar7;
      pcVar9 = strchr(unaff_R15,0x3d);
      if (pcVar9 == (char *)0x0) {
LAB_00403980:
        uVar20 = FUN_00408630(unaff_R15);
        uVar21 = dcgettext(0,"unrecognized operand %s",5);
                    /* WARNING: Subroutine does not return */
        FUN_004041e0(0,0,uVar21,uVar20);
      }
      pcVar9 = pcVar9 + 1;
      cVar3 = 'i';
      pcVar25 = "if";
      pcVar23 = unaff_R15;
      do {
        pcVar26 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
        if (*pcVar23 != cVar3) goto LAB_00402920;
        cVar3 = *pcVar25;
        pcVar23 = pcVar26;
      } while (cVar3 != '\0');
      cVar3 = *pcVar26;
      pcVar23 = DAT_00614660;
      pcVar25 = pcVar9;
      if ((cVar3 != '\0') && (cVar3 != '=')) {
LAB_00402920:
        cVar3 = 'o';
        pcVar25 = "of";
        pcVar23 = unaff_R15;
        do {
          pcVar26 = pcVar23 + 1;
          pcVar25 = pcVar25 + 1;
          if (*pcVar23 != cVar3) goto LAB_00402960;
          cVar3 = *pcVar25;
          pcVar23 = pcVar26;
        } while (cVar3 != '\0');
        cVar3 = *pcVar26;
        pcVar23 = pcVar9;
        pcVar25 = DAT_00614668;
        if ((cVar3 != '=') && (cVar3 != '\0')) {
LAB_00402960:
          cVar3 = 'c';
          pcVar25 = "conv";
          pcVar23 = unaff_R15;
          do {
            pcVar26 = pcVar23 + 1;
            pcVar25 = pcVar25 + 1;
            if (*pcVar23 != cVar3) goto LAB_004029b0;
            cVar3 = *pcVar25;
            pcVar23 = pcVar26;
          } while (cVar3 != '\0');
          cVar3 = *pcVar26;
          if ((cVar3 == '\0') || (cVar3 == '=')) {
            uVar27 = FUN_004059d0(pcVar9,"ascii",0,"invalid conversion");
            DAT_0061460c = DAT_0061460c | uVar27;
            pcVar23 = DAT_00614660;
            pcVar25 = DAT_00614668;
          }
          else {
LAB_004029b0:
            cVar3 = 'i';
            pcVar25 = "iflag";
            pcVar23 = unaff_R15;
            do {
              pcVar26 = pcVar23 + 1;
              pcVar25 = pcVar25 + 1;
              if (*pcVar23 != cVar3) goto LAB_004029fe;
              cVar3 = *pcVar25;
              pcVar23 = pcVar26;
            } while (cVar3 != '\0');
            cVar3 = *pcVar26;
            if ((cVar3 == '\0') || (cVar3 == '=')) {
              uVar27 = FUN_004059d0(pcVar9,"append",0,"invalid input flag");
              DAT_00614608 = DAT_00614608 | uVar27;
              pcVar23 = DAT_00614660;
              pcVar25 = DAT_00614668;
            }
            else {
LAB_004029fe:
              cVar3 = 'o';
              pcVar25 = "oflag";
              pcVar23 = unaff_R15;
              do {
                pcVar26 = pcVar23 + 1;
                pcVar25 = pcVar25 + 1;
                if (*pcVar23 != cVar3) goto LAB_00403386;
                cVar3 = *pcVar25;
                pcVar23 = pcVar26;
              } while (cVar3 != '\0');
              cVar3 = *pcVar26;
              if ((cVar3 == '\0') || (cVar3 == '=')) {
                uVar27 = FUN_004059d0(pcVar9,"append",0,"invalid output flag");
                DAT_00614604 = DAT_00614604 | uVar27;
                pcVar23 = DAT_00614660;
                pcVar25 = DAT_00614668;
              }
              else {
LAB_00403386:
                cVar3 = 's';
                pcVar25 = "status";
                pcVar23 = unaff_R15;
                do {
                  pcVar26 = pcVar23 + 1;
                  pcVar25 = pcVar25 + 1;
                  if (*pcVar23 != cVar3) goto LAB_00403676;
                  cVar3 = *pcVar25;
                  pcVar23 = pcVar26;
                } while (cVar3 != '\0');
                cVar3 = *pcVar26;
                if ((cVar3 == '=') || (cVar3 == '\0')) {
                  _DAT_006142bc = FUN_004059d0(pcVar9,&DAT_0040f3e0,1,"invalid status level");
                  pcVar23 = DAT_00614660;
                  pcVar25 = DAT_00614668;
                }
                else {
LAB_00403676:
                  local_d8 = (undefined)((ulong)local_d8 & 0xffffffff00000000);
                  uVar19 = FUN_004042d0(pcVar9,local_d8);
                  cVar3 = 'i';
                  pcVar25 = "ibs";
                  pcVar23 = unaff_R15;
                  do {
                    pcVar26 = pcVar23 + 1;
                    pcVar25 = pcVar25 + 1;
                    if (*pcVar23 != cVar3) goto LAB_004037c4;
                    cVar3 = *pcVar25;
                    pcVar23 = pcVar26;
                  } while (cVar3 != '\0');
                  cVar3 = *pcVar26;
                  if ((cVar3 == '=') || (cVar3 == '\0')) {
                    uVar13 = (DAT_00614658 + 2) * -2;
                    DAT_00614650 = uVar19;
                    if (0x7fffffffffffffff < uVar13) {
                      uVar13 = 0x7fffffffffffffff;
                    }
LAB_004036f5:
                    if (uVar19 == 0) {
LAB_00403869:
                      local_d8 = (undefined)CONCAT44(local_d8._4_4_,4);
                      goto LAB_0040370f;
                    }
                    uVar18 = unaff_R13;
                    uVar28 = local_f0;
                    if (uVar13 < uVar19) {
                      local_d8 = (undefined)CONCAT44(local_d8._4_4_,1);
                      goto LAB_0040370f;
                    }
                  }
                  else {
LAB_004037c4:
                    cVar3 = 'o';
                    pcVar25 = "obs";
                    pcVar23 = unaff_R15;
                    do {
                      pcVar26 = pcVar23 + 1;
                      pcVar25 = pcVar25 + 1;
                      if (*pcVar23 != cVar3) goto LAB_0040391f;
                      cVar3 = *pcVar25;
                      pcVar23 = pcVar26;
                    } while (cVar3 != '\0');
                    cVar3 = *pcVar26;
                    if ((cVar3 == '=') || (cVar3 == '\0')) {
                      uVar13 = -DAT_00614658;
                      DAT_00614648 = uVar19;
                      if (0x7ffffffffffffffe < uVar13 && DAT_00614658 != -0x7fffffffffffffff) {
                        uVar13 = 0x7fffffffffffffff;
                      }
                      goto LAB_004036f5;
                    }
LAB_0040391f:
                    cVar3 = 'b';
                    pcVar25 = "bs";
                    pcVar23 = unaff_R15;
                    do {
                      pcVar26 = pcVar23 + 1;
                      pcVar25 = pcVar25 + 1;
                      if (*pcVar23 != cVar3) goto LAB_00403822;
                      cVar3 = *pcVar25;
                      pcVar23 = pcVar26;
                    } while (cVar3 != '\0');
                    cVar3 = *pcVar26;
                    if ((cVar3 == '=') || (cVar3 == '\0')) {
                      uVar13 = (DAT_00614658 + 2) * -2;
                      unaff_R14 = uVar19;
                      if (0x7fffffffffffffff < uVar13) {
                        uVar13 = 0x7fffffffffffffff;
                      }
                      goto LAB_004036f5;
                    }
LAB_00403822:
                    cVar3 = 'c';
                    pcVar25 = "cbs";
                    pcVar23 = unaff_R15;
                    do {
                      pcVar26 = pcVar23 + 1;
                      pcVar25 = pcVar25 + 1;
                      uVar28 = local_f0;
                      if (*pcVar23 != cVar3) goto LAB_00403ad4;
                      cVar3 = *pcVar25;
                      pcVar23 = pcVar26;
                    } while (cVar3 != '\0');
                    cVar3 = *pcVar26;
                    if ((cVar3 == '=') || (cVar3 == '\0')) {
                      uVar18 = unaff_R13;
                      DAT_00614640 = uVar19;
                      if (uVar19 != 0) goto LAB_0040379a;
                      goto LAB_00403869;
                    }
LAB_00403ad4:
                    cVar3 = 's';
                    pcVar25 = "skip";
                    pcVar23 = unaff_R15;
                    do {
                      pcVar26 = pcVar23 + 1;
                      pcVar25 = pcVar25 + 1;
                      if (*pcVar23 != cVar3) goto LAB_0040375e;
                      cVar3 = *pcVar25;
                      pcVar23 = pcVar26;
                    } while (cVar3 != '\0');
                    cVar3 = *pcVar26;
                    uVar18 = uVar19;
                    if ((cVar3 != '=') && (cVar3 != '\0')) {
LAB_0040375e:
                      cVar3 = 's';
                      pcVar25 = "seek";
                      pcVar23 = unaff_R15;
                      do {
                        pcVar26 = pcVar23 + 1;
                        pcVar25 = pcVar25 + 1;
                        if (cVar3 != *pcVar23) goto LAB_00403c02;
                        cVar3 = *pcVar25;
                        pcVar23 = pcVar26;
                      } while (cVar3 != '\0');
                      cVar3 = *pcVar26;
                      uVar18 = unaff_R13;
                      uVar28 = uVar19;
                      if ((cVar3 != '=') && (cVar3 != '\0')) {
LAB_00403c02:
                        cVar3 = 'c';
                        pcVar25 = "count";
                        pcVar23 = unaff_R15;
                        do {
                          pcVar26 = pcVar23 + 1;
                          pcVar25 = pcVar25 + 1;
                          if (*pcVar23 != cVar3) goto LAB_00403980;
                          cVar3 = *pcVar25;
                          pcVar23 = pcVar26;
                        } while (cVar3 != '\0');
                        cVar3 = *pcVar26;
                        param_1 = uVar19;
                        uVar18 = unaff_R13;
                        uVar28 = local_f0;
                        if ((cVar3 != '=') && (cVar3 != '\0')) goto LAB_00403980;
                      }
                    }
                  }
LAB_0040379a:
                  local_f0 = uVar28;
                  unaff_R13 = uVar18;
                  pcVar23 = DAT_00614660;
                  pcVar25 = DAT_00614668;
                  if (local_d8._0_4_ != 0) {
LAB_0040370f:
                    uVar20 = FUN_00408630(pcVar9);
                    uVar21 = dcgettext(0,"invalid number",5);
                    uVar30 = 0x4b;
                    if (local_d8._0_4_ != 1) {
                      uVar30 = 0;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_004041e0(1,uVar30,"%s: %s",uVar21,uVar20);
                  }
                }
              }
            }
          }
        }
      }
      DAT_00614668 = pcVar25;
      DAT_00614660 = pcVar23;
      ppcVar7 = ppcVar7 + 1;
    } while (param_2 != ppcVar7);
    uVar19 = unaff_R14;
    uVar13 = unaff_R14;
    if (unaff_R14 == 0) goto LAB_00402a62;
  }
  else {
    local_f0 = 0;
    param_1 = 0xffffffffffffffff;
    unaff_R13 = 0;
LAB_00402a62:
    DAT_0061460c = DAT_0061460c | 0x800;
    if (DAT_00614650 == 0) {
      DAT_00614650 = 0x200;
    }
    uVar19 = DAT_00614648;
    uVar13 = DAT_00614650;
    if (DAT_00614648 == 0) {
      DAT_00614648 = 0x200;
      uVar19 = DAT_00614648;
    }
  }
  DAT_00614650 = uVar13;
  DAT_00614648 = uVar19;
  if (DAT_00614640 == 0) {
    DAT_0061460c = DAT_0061460c & 0xffffffe7;
  }
  uVar27 = DAT_0061460c;
  if ((DAT_00614608 & 0x101000) != 0) {
    DAT_00614608 = DAT_00614608 | 0x101000;
  }
  if ((DAT_00614604 & 1) != 0) {
    uVar20 = FUN_00408630("fullblock");
    pcVar9 = "invalid output flag";
LAB_004038f8:
    uVar21 = dcgettext(0,pcVar9,5);
                    /* WARNING: Subroutine does not return */
    FUN_004041e0(0,0,"%s: %s",uVar21,uVar20);
  }
  if ((DAT_00614608 & 0x10) != 0) {
    uVar20 = FUN_00408630("seek_bytes");
    pcVar9 = "invalid input flag";
    goto LAB_004038f8;
  }
  if ((DAT_00614604 & 0xc) != 0) {
    pcVar9 = "count_bytes";
    if ((DAT_00614604 & 4) == 0) {
      pcVar9 = "skip_bytes";
    }
    uVar20 = FUN_00408630(pcVar9);
    pcVar9 = "invalid output flag";
    goto LAB_004038f8;
  }
  if ((DAT_00614608 & 8) == 0) {
    if (unaff_R13 != 0) {
      DAT_00614638 = unaff_R13;
    }
  }
  else if (unaff_R13 != 0) {
    DAT_00614638 = unaff_R13 / DAT_00614650;
    DAT_00614630 = unaff_R13 % DAT_00614650;
  }
  if ((DAT_00614608 & 4) == 0) {
    if (param_1 != 0xffffffffffffffff) {
      DAT_006142c0 = param_1;
    }
  }
  else if (param_1 != 0xffffffffffffffff) {
    DAT_00614610 = param_1 % DAT_00614650;
    DAT_006142c0 = param_1 / DAT_00614650;
  }
  if ((DAT_00614604 & 0x10) == 0) {
    if (local_f0 != 0) {
      DAT_00614628 = local_f0;
    }
  }
  else if (local_f0 != 0) {
    DAT_00614628 = local_f0 / DAT_00614648;
    DAT_00614620 = (__sighandler_t)(local_f0 % DAT_00614648);
  }
  if ((DAT_0061460c & 0x800 | DAT_00614608 & 1) == 0) {
    if (((DAT_00614638 == 0) && (0xfffffffffffffffd < DAT_006142c0 - 1)) &&
       (((DAT_00614604 | DAT_00614608) & 0x4000) == 0)) {
      DAT_006145a8 = 0;
      DAT_006144e0 = FUN_00404900;
    }
    else {
      DAT_006145a8 = 1;
      DAT_006144e0 = FUN_00404900;
    }
  }
  else {
    DAT_006144e0 = FUN_00404a10;
    DAT_006145a8 = 0;
    if ((DAT_00614608 & 1) == 0) {
      DAT_006144e0 = FUN_00404900;
    }
  }
  uVar5 = DAT_00614608 & 0xfffffffe;
  if (((DAT_0061460c & 7) - 1 & DAT_0061460c & 7) != 0) {
    DAT_00614608 = uVar5;
    uVar20 = dcgettext(0,"cannot combine any two of {ascii,ebcdic,ibm}",5);
                    /* WARNING: Subroutine does not return */
    FUN_004041e0(1,0,uVar20);
  }
  if (((DAT_0061460c & 0x18) - 1 & DAT_0061460c & 0x18) != 0) {
    DAT_00614608 = uVar5;
    uVar20 = dcgettext(0,"cannot combine block and unblock",5);
                    /* WARNING: Subroutine does not return */
    FUN_004041e0(1,0,uVar20);
  }
  if (((DAT_0061460c & 0x60) - 1 & DAT_0061460c & 0x60) != 0) {
    DAT_00614608 = uVar5;
    uVar20 = dcgettext(0,"cannot combine lcase and ucase",5);
                    /* WARNING: Subroutine does not return */
    FUN_004041e0(1,0,uVar20);
  }
  if (((DAT_0061460c & 0x3000) - 1 & DAT_0061460c & 0x3000) != 0) {
    DAT_00614608 = uVar5;
    uVar20 = dcgettext(0,"cannot combine excl and nocreat",5);
                    /* WARNING: Subroutine does not return */
    FUN_004041e0(1,0,uVar20);
  }
  local_dc = (DAT_00614608 & 0x4002) - 1 & DAT_00614608 & 0x4002 |
             (DAT_00614604 & 0x4002) - 1 & DAT_00614604 & 0x4002;
  if (local_dc != 0) {
    DAT_00614608 = uVar5;
    uVar20 = dcgettext(0,"cannot combine direct and nocache",5);
                    /* WARNING: Subroutine does not return */
    FUN_004041e0(1,0,uVar20);
  }
  if ((DAT_00614608 & 2) != 0) {
    DAT_006144e9 = (DAT_006142c0 | DAT_00614610) == 0;
    DAT_006144eb = 1;
    uVar5 = DAT_00614608 & 0xfffffffc;
  }
  DAT_00614608 = uVar5;
  if ((DAT_00614604 & 2) != 0) {
    DAT_006144e8 = (DAT_006142c0 | DAT_00614610) == 0;
    DAT_006144ea = '\x01';
    DAT_00614604 = DAT_00614604 & 0xfffffffd;
  }
  if ((DAT_0061460c & 1) != 0) {
    puVar22 = (undefined *)&DAT_006143e0;
    do {
      puVar10 = (undefined *)((long)puVar22 + 1);
      *(undefined *)puVar22 = (&DAT_0040f0e0)[*(byte *)puVar22];
      puVar22 = puVar10;
    } while ((code **)puVar10 != &DAT_006144e0);
    DAT_00614600 = '\x01';
  }
  if ((uVar27 & 0x40) == 0) {
    if ((uVar27 & 0x20) != 0) {
      pp_Var11 = __ctype_tolower_loc();
      p_Var1 = *pp_Var11;
      puVar22 = (undefined *)&DAT_006143e0;
      do {
        puVar10 = (undefined *)((long)puVar22 + 1);
        *(char *)puVar22 = (char)p_Var1[*(byte *)puVar22];
        puVar22 = puVar10;
      } while ((code **)puVar10 != &DAT_006144e0);
      goto LAB_00402482;
    }
  }
  else {
    pp_Var11 = __ctype_toupper_loc();
    p_Var1 = *pp_Var11;
    puVar22 = (undefined *)&DAT_006143e0;
    do {
      puVar10 = (undefined *)((long)puVar22 + 1);
      *(char *)puVar22 = (char)p_Var1[*(byte *)puVar22];
      puVar22 = puVar10;
    } while ((code **)puVar10 != &DAT_006144e0);
LAB_00402482:
    DAT_00614600 = '\x01';
  }
  if ((uVar27 & 2) == 0) {
    if ((uVar27 & 4) != 0) {
      puVar22 = (undefined *)&DAT_006143e0;
      do {
        puVar10 = (undefined *)((long)puVar22 + 1);
        *(undefined *)puVar22 = (&DAT_0040f1e0)[*(byte *)puVar22];
        puVar22 = puVar10;
      } while ((code **)puVar10 != &DAT_006144e0);
      goto LAB_004024b6;
    }
  }
  else {
    puVar22 = (undefined *)&DAT_006143e0;
    do {
      puVar10 = (undefined *)((long)puVar22 + 1);
      *(undefined *)puVar22 = (&DAT_0040f2e0)[*(byte *)puVar22];
      puVar22 = puVar10;
    } while ((code **)puVar10 != &DAT_006144e0);
LAB_004024b6:
    DAT_00614600 = '\x01';
    DAT_006142ba = 0x25;
    DAT_006142b9 = 0x40;
  }
  pcVar9 = DAT_00614668;
  uVar27 = DAT_00614608;
  piVar12 = __errno_location();
  if (pcVar9 == (char *)0x0) {
    DAT_00614668 = (char *)dcgettext(0,"standard input",5);
    FUN_004043e0(0,uVar27,DAT_00614668);
  }
  else {
    iVar4 = FUN_004048b0(0,pcVar9,uVar27,0);
    if (iVar4 < 0) {
      uVar20 = FUN_004083e0(4,DAT_00614668);
      uVar21 = dcgettext(0,"failed to open %s",5);
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(1,*piVar12,uVar21,uVar20);
    }
  }
  DAT_006145b0 = lseek(0,0,1);
  uVar27 = DAT_00614604;
  DAT_006145bc = (byte)~(byte)(DAT_006145b0 >> 0x38) >> 7;
  if ((long)DAT_006145b0 < 0) {
    DAT_006145b0 = 0;
  }
  DAT_006145b8 = *piVar12;
  if (DAT_00614660 == (char *)0x0) {
    DAT_00614660 = (char *)dcgettext(0,"standard output",5);
    FUN_004043e0(1,uVar27,DAT_00614660);
  }
  else {
    uVar27 = (int)DAT_0061460c >> 6 & 0x80U | DAT_00614604 |
             (uint)((DAT_0061460c & 0x1000) == 0) << 6;
    if (DAT_00614628 == 0) {
      uVar27 = uVar27 | -(uint)((DAT_0061460c & 0x200) == 0) & 0x200;
LAB_00402598:
      iVar4 = FUN_004048b0(1,DAT_00614660,uVar27 | 1,0x1b6);
      if (iVar4 < 0) {
        uVar20 = FUN_004083e0(4,DAT_00614660);
        uVar21 = dcgettext(0,"failed to open %s",5);
                    /* WARNING: Subroutine does not return */
        FUN_004041e0(1,*piVar12,uVar21,uVar20);
      }
    }
    else {
      iVar4 = FUN_004048b0(1,DAT_00614660,uVar27 | 2,0x1b6);
      if (iVar4 < 0) goto LAB_00402598;
    }
    uVar13 = DAT_00614648;
    uVar19 = DAT_00614628;
    if ((DAT_00614628 != 0) && ((DAT_0061460c & 0x200) == 0)) {
      p_Var31 = DAT_00614620 + DAT_00614628 * DAT_00614648;
      if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(DAT_00614648),0) <
          DAT_00614628) {
        uVar20 = dcgettext(0,
                           "offset too large: cannot truncate to a length of seek=%lu (%lu-byte) blocks"
                           ,5);
                    /* WARNING: Subroutine does not return */
        FUN_004041e0(1,0,uVar20,uVar19,uVar13);
      }
      iVar4 = FUN_00404bf0();
      if (iVar4 != 0) {
        iVar4 = *piVar12;
        iVar6 = __fxstat(1,1,(stat *)local_d8);
        if (iVar6 != 0) {
          uVar20 = FUN_004083e0(4,DAT_00614660);
          uVar21 = dcgettext(0,"cannot fstat %s",5);
                    /* WARNING: Subroutine does not return */
          FUN_004041e0(1,*piVar12,uVar21,uVar20);
        }
        if (((local_c0 & 0xf000) - 0x4000 & 0xffffb000) == 0) {
          uVar20 = FUN_004083e0(4,DAT_00614660);
          uVar21 = dcgettext(0,"failed to truncate to %lu bytes in output file %s",5);
                    /* WARNING: Subroutine does not return */
          FUN_004041e0(1,iVar4,uVar21,p_Var31,uVar20);
        }
      }
    }
  }
  DAT_006145d0 = FUN_00405c40();
  uVar28 = DAT_00614650;
  uVar18 = DAT_00614638;
  uVar13 = DAT_00614630;
  uVar19 = DAT_006145b0;
  _DAT_006145c8 = DAT_006145d0 + 1000000000;
  if (((DAT_00614638 | DAT_00614630) != 0) &&
     (((lVar8 = FUN_00405150(0,DAT_00614668,DAT_00614638,DAT_00614650,&DAT_00614630), lVar8 != 0 ||
       ((uVar13 + uVar19 + uVar18 * uVar28 != DAT_006145b0 && (DAT_006145a9 != 1)))) &&
      (_DAT_006142bc != 1)))) {
    uVar20 = FUN_004084b0(0,3,DAT_00614668);
    uVar21 = dcgettext(0,"%s: cannot skip to specified offset",5);
                    /* WARNING: Subroutine does not return */
    FUN_004041e0(0,0,uVar21,uVar20);
  }
  if ((DAT_00614628 | (ulong)DAT_00614620) != 0) {
    local_d8 = (undefined)DAT_00614620;
    lVar8 = FUN_00405150();
    if (lVar8 == 0) {
      if (local_d8 != (undefined)0x0) {
        memset(DAT_00614590,0,(size_t)local_d8);
        goto LAB_0040271f;
      }
    }
    else {
      memset(DAT_00614590,0,DAT_00614648);
      do {
        uVar19 = DAT_00614648;
        uVar13 = FUN_00404c30(DAT_00614590,DAT_00614648);
        if (uVar19 != uVar13) goto LAB_004039b2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      if (local_d8 != (undefined)0x0) {
LAB_0040271f:
        _Var2 = (_union_1454)local_d8;
        p_Var31 = (__sighandler_t)FUN_00404c30(DAT_00614590,local_d8);
        if (p_Var31 != _Var2.sa_handler) {
LAB_004039b2:
          uVar20 = FUN_004083e0(4,DAT_00614660);
          uVar21 = dcgettext(0,"writing to %s",5);
                    /* WARNING: Subroutine does not return */
          FUN_004041e0(0,*piVar12,uVar21,uVar20);
        }
      }
    }
  }
  if ((DAT_006142c0 | DAT_00614610) == 0) {
LAB_00403245:
    if ((DAT_006144eb != 0) && (cVar3 = FUN_004045a0(0,0), cVar3 == '\0')) {
      uVar20 = FUN_004084b0(0,3,DAT_00614668);
      uVar21 = dcgettext(0,"failed to discard cache for: %s",5);
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,*piVar12,uVar21,uVar20);
    }
    if ((DAT_006144ea != '\0') && (cVar3 = FUN_004045a0(1,0), cVar3 == '\0')) {
      uVar20 = FUN_004084b0(0,3,DAT_00614660);
      uVar21 = dcgettext(0,"failed to discard cache for: %s",5);
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,*piVar12,uVar21,uVar20);
    }
LAB_00402f7b:
    FUN_00404760();
    FUN_004040b0();
    FUN_00404810();
    return 0;
  }
  if (DAT_00614598 == (byte *)0x0) {
    FUN_00404a80();
  }
  FUN_00404ba0();
  uVar19 = 0;
  while( true ) {
    if ((_DAT_006142bc == 4) && (lVar8 = FUN_00405c40(), _DAT_006145c8 <= lVar8)) {
      FUN_00403d50();
      _DAT_006145c8 = _DAT_006145c8 + 1000000000;
    }
    uVar18 = DAT_00614610;
    uVar13 = DAT_006142c0;
    uVar28 = DAT_006145e0 + DAT_006145e8;
    if ((DAT_00614610 != 0) + DAT_006142c0 <= uVar28) break;
    pbVar14 = DAT_00614598;
    if ((DAT_0061460c & 0x500) == 0x500) {
      uVar27 = DAT_0061460c & 0x18;
      if (uVar27 != 0) {
        uVar27 = 0x20;
      }
      pbVar14 = (byte *)memset(DAT_00614598,uVar27,DAT_00614650);
    }
    if (uVar28 < uVar13) {
      uVar13 = (*DAT_006144e0)(0,pbVar14,DAT_00614650);
      if ((long)uVar13 < 1) goto LAB_00402b57;
LAB_00402808:
      bVar32 = CARRY8(uVar13,DAT_006145b0);
      DAT_006145b0 = uVar13 + DAT_006145b0;
      if (bVar32) {
        DAT_006145a9 = 1;
      }
      if (DAT_006144eb != 0) {
        FUN_004045a0(0,uVar13);
      }
      uVar19 = uVar13;
      if (DAT_00614650 <= uVar13) goto LAB_00402c78;
      goto LAB_00402842;
    }
    uVar13 = (*DAT_006144e0)(0,pbVar14,uVar18);
    if (0 < (long)uVar13) goto LAB_00402808;
LAB_00402b57:
    if (uVar13 == 0) {
      DAT_006144e9 = DAT_006144e9 | DAT_006144eb;
      if (DAT_006144ea != '\0') {
        local_dc = (uint)((DAT_0061460c & 0x200) == 0);
      }
      DAT_006144e8 = ((byte)local_dc | DAT_006144e8) & 1;
      break;
    }
    if (((DAT_0061460c & 0x100) == 0) || (_DAT_006142bc != 1)) {
      uVar20 = FUN_004083e0(4,DAT_00614668);
      uVar21 = dcgettext(0,"error reading %s",5);
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,*piVar12,uVar21,uVar20);
    }
    FUN_004040b0();
    uVar13 = DAT_00614650 - uVar19;
    FUN_004045a0();
    if (DAT_006145bc == 0) {
      if (DAT_006145b8 == 0x1d) goto LAB_00402c4f;
      *piVar12 = DAT_006145b8;
LAB_00402bf9:
      uVar20 = FUN_004084b0(0,3,DAT_00614668);
      uVar21 = dcgettext(0,"%s: cannot seek",5);
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,*piVar12,uVar21,uVar20);
    }
    uVar18 = uVar13 + DAT_006145b0;
    if (CARRY8(uVar13,DAT_006145b0)) {
      DAT_006145a9 = 1;
LAB_00402d2e:
      DAT_006145b0 = uVar18;
      uVar20 = FUN_004083e0(4,DAT_00614668);
      uVar21 = dcgettext(0,"offset overflow while reading file %s",5);
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,0,uVar21,uVar20);
    }
    DAT_006145a9 = DAT_006145a9 | (byte)(uVar18 >> 0x3f);
    if (DAT_006145a9 != 0) goto LAB_00402d2e;
    DAT_006145b0 = uVar18;
    uVar28 = lseek(0,0,1);
    if ((long)uVar28 < 0) goto LAB_00402bf9;
    if (uVar28 != uVar18) {
      uVar18 = uVar18 - uVar28;
      if ((((long)uVar18 < 0) || (uVar13 < uVar18)) && (_DAT_006142bc != 1)) {
        uVar20 = dcgettext(0,"warning: invalid file offset after failed read",5);
                    /* WARNING: Subroutine does not return */
        FUN_004041e0(0,0,uVar20);
      }
      lVar8 = FUN_004044d0(DAT_00614668,0,uVar18,1);
      if (lVar8 < 0) {
        if (*piVar12 == 0) {
          uVar20 = dcgettext(0,"cannot work around kernel bug after all",5);
                    /* WARNING: Subroutine does not return */
          FUN_004041e0(0,0,uVar20);
        }
        goto LAB_00402bf9;
      }
    }
LAB_00402c4f:
    if (((DAT_0061460c & 0x400) != 0) && (uVar19 == 0)) {
      uVar13 = 0;
      uVar19 = uVar13;
      if (DAT_00614650 == 0) {
LAB_00402c78:
        DAT_006145e0 = DAT_006145e0 + 1;
        uVar19 = 0;
      }
      else {
LAB_00402842:
        uVar18 = DAT_00614650;
        DAT_006145e8 = DAT_006145e8 + 1;
        uVar13 = uVar19;
        if (((DAT_0061460c & 0x400) != 0) && (uVar13 = uVar18, (DAT_0061460c & 0x100) == 0)) {
          uVar27 = DAT_0061460c & 0x18;
          if (uVar27 != 0) {
            uVar27 = 0x20;
          }
          memset(DAT_00614598 + uVar19,uVar27,DAT_00614650 - uVar19);
        }
      }
      __src = DAT_00614598;
      pbVar14 = DAT_00614590;
      if (DAT_00614598 == DAT_00614590) {
        uVar18 = FUN_00404c30(DAT_00614598,uVar13);
        DAT_006145d8 = DAT_006145d8 + uVar18;
        if (uVar18 != uVar13) goto LAB_00402ef1;
        if (DAT_00614650 == uVar13) {
          DAT_006145f0 = DAT_006145f0 + 1;
        }
        else {
          DAT_006145f8 = DAT_006145f8 + 1;
        }
      }
      else {
        if ((DAT_00614600 != '\0') && (uVar13 != 0)) {
          pbVar15 = DAT_00614598 + uVar13;
          pbVar17 = DAT_00614598;
          do {
            pbVar16 = pbVar17 + 1;
            *pbVar17 = (&DAT_006143e0)[*pbVar17];
            pbVar17 = pbVar16;
          } while (pbVar16 != pbVar15);
        }
        uVar27 = DAT_0061460c;
        if ((DAT_0061460c & 0x80) != 0) {
          if (DAT_006143c1 == '\0') {
            pbVar15 = __src;
            __src = __src + 1;
          }
          else {
            pbVar15 = __src + -1;
            uVar13 = uVar13 + 1;
            DAT_006143c1 = '\0';
            __src[-1] = DAT_006143c0;
          }
          if ((uVar13 & 1) == 0) {
            pbVar15 = pbVar15 + uVar13;
          }
          else {
            uVar13 = uVar13 - 1;
            DAT_006143c1 = '\x01';
            pbVar15 = pbVar15 + uVar13;
            DAT_006143c0 = *pbVar15;
          }
          pbVar17 = pbVar15 + (uVar13 >> 1) * -2;
          if (uVar13 >> 1 != 0) {
            do {
              pbVar16 = pbVar15 + -2;
              *pbVar15 = pbVar15[-2];
              pbVar15 = pbVar16;
            } while (pbVar16 != pbVar17);
          }
        }
        if ((uVar27 & 8) == 0) {
          if ((uVar27 & 0x10) == 0) {
            do {
              uVar18 = DAT_00614648;
              uVar28 = DAT_00614648 - DAT_00614588;
              if (uVar13 < DAT_00614648 - DAT_00614588) {
                uVar28 = uVar13;
              }
              uVar13 = uVar13 - uVar28;
              uVar29 = uVar28 + DAT_00614588;
              memcpy(pbVar14 + DAT_00614588,__src,uVar28);
              DAT_00614588 = uVar29;
              if (uVar18 <= uVar29) {
                FUN_00404e50();
              }
              __src = __src + uVar28;
              pbVar14 = DAT_00614590;
            } while (uVar13 != 0);
          }
          else {
            FUN_00405000(__src,uVar13);
          }
        }
        else {
          FUN_00404ef0(__src,uVar13);
        }
      }
    }
  }
  if (DAT_006143c1 == '\0') {
LAB_004031ca:
    if ((DAT_0061460c & 8) == 0) goto LAB_004030f9;
    if (DAT_00614580 != 0) {
      uVar19 = DAT_00614580;
      if (DAT_00614580 < DAT_00614640) {
        do {
          bVar32 = DAT_00614648 <= DAT_00614588 + 1;
          pbVar14 = DAT_00614590 + DAT_00614588;
          DAT_00614588 = DAT_00614588 + 1;
          *pbVar14 = DAT_006142b9;
          if (bVar32) {
            FUN_00404e50();
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < DAT_00614640);
        goto LAB_004030f9;
      }
      goto LAB_00403109;
    }
  }
  else {
    if ((DAT_0061460c & 8) != 0) {
      FUN_00404ef0(&DAT_006143c0,1);
      goto LAB_004031ca;
    }
    if ((DAT_0061460c & 0x10) != 0) {
      FUN_00405000(&DAT_006143c0,1);
      goto LAB_004031ca;
    }
    bVar32 = DAT_00614648 <= DAT_00614588 + 1;
    pbVar14 = DAT_00614590 + DAT_00614588;
    DAT_00614588 = DAT_00614588 + 1;
    *pbVar14 = DAT_006143c0;
    if (bVar32) {
      FUN_00404e50();
      goto LAB_004031ca;
    }
LAB_004030f9:
    if (DAT_00614580 != 0) {
LAB_00403109:
      if ((DAT_0061460c & 0x10) != 0) {
        bVar32 = DAT_00614648 <= DAT_00614588 + 1;
        pbVar14 = DAT_00614590 + DAT_00614588;
        DAT_00614588 = DAT_00614588 + 1;
        *pbVar14 = DAT_006142ba;
        if (bVar32) {
          FUN_00404e50();
        }
      }
    }
  }
  if (DAT_00614588 != 0) {
    uVar19 = FUN_00404c30(DAT_00614590);
    DAT_006145d8 = DAT_006145d8 + uVar19;
    if (uVar19 != 0) {
      DAT_006145f8 = DAT_006145f8 + 1;
    }
    if (uVar19 != DAT_00614588) {
LAB_00402ef1:
      uVar20 = FUN_004083e0(4,DAT_00614660);
      pcVar9 = "error writing %s";
      goto LAB_00402f0f;
    }
  }
  if (DAT_00614618 != '\0') {
    iVar4 = __fxstat(1,1,(stat *)local_d8);
    if (iVar4 != 0) {
      uVar20 = FUN_004083e0(4,DAT_00614660);
      pcVar9 = "cannot fstat %s";
      goto LAB_00402f0f;
    }
    if (((((local_c0 & 0xf000) == 0x8000) && (_Var24 = lseek(1,0,1), -1 < _Var24)) &&
        (CONCAT44(uStack_a4,uStack_a8) < _Var24)) && (iVar4 = FUN_00404bf0(_Var24), iVar4 != 0)) {
      uVar20 = FUN_004083e0(4,DAT_00614660);
      uVar21 = dcgettext(0,"failed to truncate to %ld bytes in output file %s",5);
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,*piVar12,uVar21,_Var24,uVar20);
    }
  }
  if (((DAT_0061460c & 0x4000) == 0) || (iVar4 = fdatasync(1), iVar4 == 0)) {
    if ((DAT_0061460c & 0x8000) == 0) {
LAB_00402f34:
      if ((DAT_006142c0 != 0) || (DAT_00614610 != 0)) {
        if ((DAT_006144eb != 0) || (DAT_006144e9 != 0)) {
          FUN_004045a0(0,0);
        }
        if ((DAT_006144ea != '\0') || (DAT_006144e8 != 0)) {
          FUN_004045a0(1,0);
        }
        goto LAB_00402f7b;
      }
      goto LAB_00403245;
    }
  }
  else {
    if ((*piVar12 - 0x16U & 0xffffffef) != 0) {
      uVar20 = FUN_004083e0(4,DAT_00614660);
      uVar21 = dcgettext(0,"fdatasync failed for %s",5);
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,*piVar12,uVar21,uVar20);
    }
    DAT_0061460c = DAT_0061460c | 0x8000;
  }
  do {
    iVar4 = fsync(1);
    if (iVar4 == 0) goto LAB_00402f34;
  } while (*piVar12 == 4);
  uVar20 = FUN_004083e0(4,DAT_00614660);
  pcVar9 = "fsync failed for %s";
LAB_00402f0f:
  uVar21 = dcgettext(0,pcVar9,5);
                    /* WARNING: Subroutine does not return */
  FUN_004041e0(0,*piVar12,uVar21,uVar20);
}


void FUN_00403c50(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00613ff0)
            (FUN_00401fd0,unaff_retaddr,&stack0x00000008,FUN_0040da10,FUN_0040da70,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00403c88) */
/* WARNING: Removing unreachable block (ram,0x00403c92) */

void FUN_00403c7b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403cc9) */

void FUN_00403c9a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403d06) */

void FUN_00403cd1(void)

{
  if (DAT_00614388 != '\0') {
    return;
  }
  FUN_00403c7b();
  DAT_00614388 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403cc9) */

void thunk_FUN_00403c9a(void)

{
  return;
}


void FUN_00403d30(undefined param_1)

{
  DAT_006144f0 = param_1;
  return;
}


void FUN_00403d40(void)

{
  DAT_006144ec = DAT_006144ec + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00403d50(long param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  char *pcVar4;
  size_t sVar5;
  undefined uVar6;
  undefined uVar7;
  long lVar8;
  char *pcVar9;
  char *pcStack_818;
  char local_7f8 [32];
  undefined local_7d8 [654];
  undefined local_54a [654];
  char local_2bc [660];
  
  lVar8 = param_1;
  if (param_1 == 0) {
    lVar8 = FUN_00405c40();
  }
  __s = (char *)FUN_00405d70(DAT_006145d8,local_7d8,0x1d1,1,1);
  pcVar4 = (char *)FUN_00405d70(DAT_006145d8,local_54a,0x1f1,1,1);
  if (DAT_006145d0 < lVar8) {
    pcStack_818 = (char *)FUN_00405d70(DAT_006145d8,local_2bc,0x1d1,1000000000,lVar8 - DAT_006145d0)
    ;
    sVar5 = strlen(pcStack_818);
    *(undefined *)(pcStack_818 + sVar5) = DAT_0040f0c0;
    pcStack_818[sVar5 + 2] = DAT_0040f0c2;
  }
  else {
    uVar7 = dcgettext(0,"Infinity",5);
    pcStack_818 = local_2bc;
    __snprintf_chk(pcStack_818,0x28e,1,0x28e,"%s B/s",uVar7);
  }
  pcVar9 = "%g s";
  if (param_1 != 0) {
    pcVar1 = stderr->_IO_write_ptr;
    if (pcVar1 < stderr->_IO_write_end) {
      pcVar9 = "%.0f s";
      stderr->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\r';
    }
    else {
      __overflow(stderr,0xd);
      pcVar9 = "%.0f s";
    }
  }
  __snprintf_chk(local_7f8,0x18,1,0x18,pcVar9);
  sVar5 = strlen(__s);
  uVar7 = DAT_006145d8;
  if (__s[sVar5 - 2] == ' ') {
    uVar6 = dcngettext(0,"%lu byte copied, %s, %s","%lu bytes copied, %s, %s",DAT_006145d8,5);
    pcStack_818 = (char *)__fprintf_chk(stderr,1,uVar6,uVar7,local_7f8,pcStack_818);
    iVar2 = (int)pcStack_818;
  }
  else {
    sVar5 = strlen(pcVar4);
    uVar7 = DAT_006145d8;
    if (pcVar4[sVar5 - 2] == ' ') {
      uVar6 = dcgettext(0,"%lu bytes (%s) copied, %s, %s",5);
      pcVar4 = local_7f8;
    }
    else {
      uVar6 = dcgettext(0,"%lu bytes (%s, %s) copied, %s, %s",5);
      pcStack_818 = local_7f8;
    }
    iVar2 = __fprintf_chk(stderr,1,uVar6,uVar7,__s,pcVar4);
  }
  if (param_1 == 0) {
    pcVar4 = stderr->_IO_write_ptr;
    if (pcVar4 < stderr->_IO_write_end) {
      stderr->_IO_write_ptr = pcVar4 + 1;
      *pcVar4 = '\n';
      return pcVar4;
    }
    uVar3 = __overflow(stderr,10);
    pcStack_818 = (char *)(ulong)uVar3;
    iVar2 = DAT_006145c0;
  }
  else if ((-1 < iVar2) && (iVar2 < DAT_006145c0)) {
    pcStack_818 = (char *)__fprintf_chk(stderr,1,&DAT_0040db4f,DAT_006145c0 - iVar2,"");
  }
  DAT_006145c0 = iVar2;
  return pcStack_818;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_004040b0(void)

{
  char *pcVar1;
  long lVar2;
  undefined uVar3;
  undefined uVar4;
  undefined in_RAX;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  
  if (_DAT_006142bc == 1) {
    return in_RAX;
  }
  if (0 < DAT_006145c0) {
    pcVar1 = stderr->_IO_write_ptr;
    if (pcVar1 < stderr->_IO_write_end) {
      stderr->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __overflow(stderr,10);
    }
    DAT_006145c0 = 0;
  }
  uVar7 = DAT_006145f8;
  uVar4 = DAT_006145f0;
  uVar3 = DAT_006145e8;
  uVar6 = DAT_006145e0;
  uVar5 = dcgettext(0,"%lu+%lu records in\n%lu+%lu records out\n",5);
  __fprintf_chk(stderr,1,uVar5,uVar6,uVar3,uVar4);
  lVar2 = DAT_006145a0;
  if (DAT_006145a0 != 0) {
    uVar6 = dcngettext(0,"%lu truncated record\n","%lu truncated records\n",DAT_006145a0,5);
    uVar7 = __fprintf_chk(stderr,1,uVar6,lVar2);
  }
  if (_DAT_006142bc != 2) {
    uVar6 = FUN_00403d50(0);
    return uVar6;
  }
  return uVar7;
}


void FUN_004041e0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined param_9,undefined param_10,undefined param_11,undefined param_12,
                 undefined param_13,undefined param_14)

{
  char *pcVar1;
  char in_AL;
  undefined local_e0;
  undefined local_dc;
  undefined *local_d8;
  undefined *local_d0;
  undefined local_c8 [24];
  undefined local_b0;
  undefined local_a8;
  undefined local_a0;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  undefined local_48;
  undefined local_38;
  undefined local_28;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  if (0 < DAT_006145c0) {
    pcVar1 = stderr->_IO_write_ptr;
    if (pcVar1 < stderr->_IO_write_end) {
      stderr->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __overflow(stderr,10);
    }
    DAT_006145c0 = 0;
  }
  local_d8 = &stack0x00000008;
  local_d0 = local_c8;
  local_e0 = 0x18;
  local_dc = 0x30;
  FUN_00408710(param_9,param_10,param_11,&local_e0);
  return;
}


ulong FUN_004042d0(byte *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  long lVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  ulong local_28;
  char *local_20;
  
  bVar11 = 0;
  iVar1 = FUN_00408f50(param_1,&local_20,10,&local_28,"bcEGkKMPTwYZ0");
  if (iVar1 == 2) {
    if (*local_20 != 'x') goto LAB_0040431a;
    uVar2 = FUN_004042d0(local_20 + 1,param_2);
    if ((uVar2 == 0) ||
       (uVar3 = (local_28 * uVar2) / uVar2, bVar9 = local_28 == uVar3, local_28 = uVar3, bVar9)) {
      bVar9 = false;
      bVar10 = local_28 == 0;
      if (bVar10) {
        lVar7 = 2;
        pbVar8 = &DAT_0040db8f;
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          bVar9 = *param_1 < *pbVar8;
          bVar10 = *param_1 == *pbVar8;
          param_1 = param_1 + (ulong)bVar11 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar11 * -2 + 1;
        } while (bVar10);
        if ((!bVar9 && !bVar10) == bVar9) {
          uVar4 = FUN_00408610(1,&DAT_0040db8e);
          uVar5 = FUN_00408610(0,&DAT_0040db8f);
          uVar6 = dcgettext(0,"warning: %s is a zero multiplier; use %s if that is intended",5);
                    /* WARNING: Subroutine does not return */
          FUN_004041e0(0,0,uVar6,uVar5,uVar4);
        }
      }
      local_28 = local_28 * uVar2;
    }
    else {
      *param_2 = 1;
      local_28 = 0;
    }
  }
  else if (iVar1 != 0) {
LAB_0040431a:
    *param_2 = iVar1;
    return 0;
  }
  return local_28;
}


void FUN_004043e0(ulong param_1,uint param_2,undefined param_3)

{
  uint uVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  int *piVar5;
  uint uVar6;
  stat sStack_b8;
  
  if ((param_2 & 0xfffdfeff) != 0) {
    uVar1 = FUN_004095d0(param_1,3);
    uVar6 = param_2 & 0xfffdfeff | uVar1;
    if ((int)uVar1 < 0) goto LAB_00404472;
    if (uVar1 == uVar6) {
      return;
    }
    if ((uVar6 & 0x10000) != 0) {
      iVar2 = __fxstat(1,(int)(param_1 & 0xffffffff),&sStack_b8);
      if (iVar2 != 0) goto LAB_00404472;
      if ((sStack_b8.st_mode & 0xf000) != 0x4000) {
        piVar5 = __errno_location();
        *piVar5 = 0x14;
        goto LAB_00404472;
      }
      uVar6 = uVar6 & 0xfffeffff;
      if (uVar6 == uVar1) {
        return;
      }
    }
    iVar2 = FUN_004095d0(param_1 & 0xffffffff,4,uVar6);
    if (iVar2 == -1) {
LAB_00404472:
      uVar3 = FUN_004083e0(4,param_3);
      uVar4 = dcgettext(0,"setting flags for %s",5);
      piVar5 = __errno_location();
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(1,*piVar5,uVar4,uVar3);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__off_t FUN_004044d0(undefined param_1,int param_2,__off_t param_3,int param_4)

{
  int iVar1;
  __off_t _Var2;
  undefined uVar3;
  int *piVar4;
  undefined auStack_88 [8];
  long local_80;
  long local_60;
  undefined local_58;
  long local_50;
  long local_30;
  
  iVar1 = ioctl(param_2,0x80306d02,auStack_88);
  _Var2 = lseek(param_2,param_3,param_4);
  if ((-1 < _Var2) && (iVar1 == 0)) {
    iVar1 = ioctl(param_2,0x80306d02,&local_58);
    if ((iVar1 == 0) && ((local_80 == local_50 && (local_60 == local_30)))) {
      if (_DAT_006142bc != 1) {
        uVar3 = dcgettext(0,
                          "warning: working around lseek kernel bug for file (%s)\n  of mt_type=0x%0lx -- see <sys/mtio.h> for the list of types"
                          ,5);
                    /* WARNING: Subroutine does not return */
        FUN_004041e0(0,0,uVar3,param_1,local_58);
      }
      piVar4 = __errno_location();
      _Var2 = -1;
      *piVar4 = 0;
    }
  }
  return _Var2;
}


bool FUN_004045a0(int param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  ulong __offset;
  ulong uVar6;
  char cVar7;
  
  if (param_1 == 0) {
    puVar2 = &DAT_006143a8;
    cVar7 = DAT_006144e9;
  }
  else {
    puVar2 = &DAT_006143a0;
    cVar7 = DAT_006144e8;
  }
  uVar4 = *puVar2;
  if (param_2 == 0) {
    if ((uVar4 == 0) && (cVar7 == '\0')) {
      return true;
    }
    uVar6 = 0;
    if (param_1 == 0) goto LAB_00404617;
LAB_0040464f:
    if (DAT_006142b0 == -1) {
      return false;
    }
    if (DAT_006142b0 < 0) {
      DAT_006142b0 = lseek(1,0,1);
      lVar5 = DAT_006142b0;
      goto LAB_0040467b;
    }
    lVar5 = DAT_006142b0;
    if (param_2 != 0) {
      DAT_006142b0 = DAT_006142b0 + uVar6 + uVar4;
      lVar5 = DAT_006142b0;
      goto LAB_0040467b;
    }
  }
  else {
    uVar4 = uVar4 + param_2;
    uVar6 = (ulong)((uint)uVar4 & 0x1ffff);
    *puVar2 = uVar6;
    if ((uVar4 <= uVar6) || (uVar4 = uVar4 - uVar6, uVar4 == 0)) {
      return true;
    }
    if (param_1 != 0) goto LAB_0040464f;
LAB_00404617:
    lVar5 = DAT_006145b0;
    if (DAT_006145bc == '\0') {
      piVar3 = __errno_location();
      *piVar3 = 0x1d;
      return false;
    }
LAB_0040467b:
    if (lVar5 < 0) {
      return false;
    }
  }
  __offset = lVar5 - uVar4;
  if ((param_2 == 0) && (uVar4 != 0)) {
    if (cVar7 == '\0') {
      __offset = __offset - uVar6;
      goto LAB_0040469c;
    }
  }
  else {
    __offset = __offset - uVar6;
    if (uVar4 != 0) goto LAB_0040469c;
  }
  uVar4 = 0;
  __offset = __offset - __offset % DAT_00614658;
LAB_0040469c:
  iVar1 = posix_fadvise(param_1,__offset,uVar4,4);
  return iVar1 != -1;
}


void FUN_00404720(void)

{
  int iVar1;
  
  if (DAT_006142b8 != '\0') {
    FUN_00405b30();
    return;
  }
  iVar1 = FUN_00405ab0(stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(1);
}


void FUN_00404760(void)

{
  int iVar1;
  undefined uVar2;
  undefined uVar3;
  int *piVar4;
  
  iVar1 = close(0);
  if (iVar1 < 0) {
    uVar2 = FUN_004083e0(4,DAT_00614668);
    uVar3 = dcgettext(0,"closing input file %s",5);
    piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
    FUN_004041e0(1,*piVar4,uVar3,uVar2);
  }
  iVar1 = close(1);
  if (-1 < iVar1) {
    return;
  }
  uVar2 = FUN_004083e0(4,DAT_00614660);
  uVar3 = dcgettext(0,"closing output file %s",5);
  piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
  FUN_004041e0(1,*piVar4,uVar3,uVar2);
}


void FUN_00404810(void)

{
  int __sig;
  sigset_t sStack_88;
  
  if ((DAT_006144f0 == 0) && (DAT_006144ec == 0)) {
    return;
  }
  do {
    sigprocmask(0,(sigset_t *)&DAT_00614500,&sStack_88);
    __sig = DAT_006144f0;
    if (DAT_006144ec != 0) {
      DAT_006144ec = DAT_006144ec + -1;
    }
    sigprocmask(2,&sStack_88,(sigset_t *)0x0);
    if (__sig == 0) {
      FUN_004040b0();
    }
    else {
      FUN_00404760();
      FUN_004040b0();
      raise(__sig);
    }
  } while ((DAT_006144f0 != 0) || (DAT_006144ec != 0));
  return;
}


int FUN_004048b0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  int *piVar2;
  
  do {
    FUN_00404810();
    iVar1 = FUN_00405bd0(param_1,param_2,param_3,param_4);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00404900(int param_1,void *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  undefined uVar5;
  
  do {
    FUN_00404810();
    uVar3 = read(param_1,param_2,param_3);
    if (uVar3 == 0xffffffffffffffff) {
      piVar4 = __errno_location();
      iVar1 = *piVar4;
      if (iVar1 == 0x16) {
        if ((long)DAT_006143b8 < 1) {
          DAT_006143b8 = uVar3;
          return 0xffffffffffffffff;
        }
        if (param_3 <= DAT_006143b8) {
          DAT_006143b8 = uVar3;
          return 0xffffffffffffffff;
        }
        if ((DAT_00614608._1_1_ & 0x40) == 0) {
          DAT_006143b8 = uVar3;
          return 0xffffffffffffffff;
        }
        *piVar4 = 0;
        DAT_006143b8 = 0;
        return 0;
      }
    }
    else {
      if (-1 < (long)uVar3) break;
      piVar4 = __errno_location();
      iVar1 = *piVar4;
    }
  } while (iVar1 == 4);
  if (((long)uVar3 < 1) || (param_3 <= uVar3)) {
    if ((long)uVar3 < 1) {
      DAT_006143b8 = uVar3;
      return uVar3;
    }
  }
  else {
    FUN_00404810();
  }
  uVar2 = DAT_006143b8;
  if (((DAT_006145a8 != '\0') && (0 < (long)DAT_006143b8)) && (DAT_006143b8 < param_3)) {
    if (_DAT_006142bc != 1) {
      uVar5 = dcngettext(0,"warning: partial read (%lu byte); suggest iflag=fullblock",
                         "warning: partial read (%lu bytes); suggest iflag=fullblock",DAT_006143b8,5
                        );
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,0,uVar5,uVar2);
    }
    DAT_006145a8 = '\0';
  }
  DAT_006143b8 = uVar3;
  return uVar3;
}


long FUN_00404a10(undefined param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar2 = 0;
  while( true ) {
    lVar1 = FUN_00404900(param_1,param_2,param_3);
    if (lVar1 < 0) {
      return lVar1;
    }
    if (lVar1 == 0) break;
    lVar2 = lVar2 + lVar1;
    param_2 = param_2 + lVar1;
    param_3 = param_3 - lVar1;
    if (param_3 == 0) {
      return lVar2;
    }
  }
  return lVar2;
}


ulong FUN_00404a80(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined uVar5;
  undefined uVar6;
  undefined auStack_2a8 [664];
  
  uVar3 = DAT_00614658;
  lVar2 = DAT_00614650;
  pvVar4 = malloc(DAT_00614650 + 3 + DAT_00614658 * 2);
  if (pvVar4 != (void *)0x0) {
    uVar1 = (long)pvVar4 + uVar3 + 1;
    DAT_00614598 = uVar1 - uVar1 % uVar3;
    return uVar1 / uVar3;
  }
  uVar5 = FUN_00405d70(lVar2,auStack_2a8,0x1f1,1,1);
  uVar6 = dcgettext(0,"memory exhausted by input buffer of size %lu bytes (%s)",5);
                    /* WARNING: Subroutine does not return */
  FUN_004041e0(1,0,uVar6,lVar2,uVar5);
}


ulong FUN_00404b10(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined uVar5;
  undefined uVar6;
  undefined auStack_2a8 [664];
  
  uVar3 = DAT_00614658;
  lVar2 = DAT_00614648;
  pvVar4 = malloc((DAT_00614658 - 1) + DAT_00614648);
  if (pvVar4 != (void *)0x0) {
    uVar1 = (long)pvVar4 + (uVar3 - 1);
    DAT_00614590 = uVar1 - uVar1 % uVar3;
    return uVar1 / uVar3;
  }
  uVar5 = FUN_00405d70(lVar2,auStack_2a8,0x1f1,1,1);
  uVar6 = dcgettext(0,"memory exhausted by output buffer of size %lu bytes (%s)",5);
                    /* WARNING: Subroutine does not return */
  FUN_004041e0(1,0,uVar6,lVar2,uVar5);
}


undefined FUN_00404ba0(undefined param_1,undefined param_2,undefined param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined uVar5;
  undefined uVar6;
  undefined in_RAX;
  undefined auStack_2a8 [664];
  
  uVar3 = DAT_00614658;
  lVar2 = DAT_00614648;
  if (DAT_00614590 != 0) {
    return CONCAT88(param_3,in_RAX);
  }
  if ((DAT_0061460c._1_1_ & 8) == 0) {
    if (DAT_00614598 != 0) {
      DAT_00614590 = DAT_00614598;
      return CONCAT88(param_3,DAT_00614598);
    }
    FUN_00404a80();
    DAT_00614590 = DAT_00614598;
    return CONCAT88(in_RAX,DAT_00614598);
  }
  pvVar4 = malloc((DAT_00614658 - 1) + DAT_00614648);
  if (pvVar4 != (void *)0x0) {
    uVar1 = (long)pvVar4 + (uVar3 - 1);
    DAT_00614590 = uVar1 - uVar1 % uVar3;
    return CONCAT88(uVar1 % uVar3,uVar1 / uVar3);
  }
  uVar5 = FUN_00405d70(lVar2,auStack_2a8,0x1f1,1,1);
  uVar6 = dcgettext(0,"memory exhausted by output buffer of size %lu bytes (%s)",5);
                    /* WARNING: Subroutine does not return */
  FUN_004041e0(1,0,uVar6,lVar2,uVar5);
}


int FUN_00404bf0(__off_t param_1)

{
  int iVar1;
  int *piVar2;
  
  do {
    FUN_00404810();
    iVar1 = ftruncate(1,param_1);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00404c30(char *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  __off_t _Var5;
  undefined uVar6;
  undefined uVar7;
  size_t __n;
  ulong uVar8;
  char *__s2;
  
  if (((DAT_00614604._1_1_ & 0x40) != 0) && (param_2 < DAT_00614648)) {
    uVar2 = FUN_004095d0(1,3);
    iVar1 = FUN_004095d0(1,4,uVar2 & 0xffffbfff);
    if ((iVar1 != 0) && (_DAT_006142bc != 1)) {
      uVar6 = FUN_004084b0(0,3,DAT_00614660);
      uVar7 = dcgettext(0,"failed to turn off O_DIRECT: %s",5);
      piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,*piVar4,uVar7,uVar6);
    }
    DAT_006144e8 = 1;
    FUN_004045a0(1,0);
    DAT_0061460c = DAT_0061460c | 0x8000;
  }
  uVar8 = 0;
  if (param_2 != 0) {
    do {
      FUN_00404810();
      uVar2 = DAT_0061460c;
      DAT_00614618 = 0;
      __n = param_2;
      __s2 = param_1;
      if ((DAT_0061460c & 0x10000) == 0) {
LAB_00404cb8:
        uVar3 = write(1,param_1 + uVar8,param_2 - uVar8);
        if ((long)uVar3 < 0) {
          piVar4 = __errno_location();
          iVar1 = *piVar4;
          goto joined_r0x00404cd9;
        }
        if (uVar3 == 0) {
          piVar4 = __errno_location();
          *piVar4 = 0x1c;
          break;
        }
LAB_00404c6e:
        uVar8 = uVar8 + uVar3;
      }
      else {
        do {
          if (*__s2 != '\0') goto LAB_00404cb8;
          __s2 = __s2 + 1;
          __n = __n - 1;
          if (__n == 0) goto LAB_00404d00;
        } while ((__n & 0xf) != 0);
        iVar1 = memcmp(param_1,__s2,__n);
        if (iVar1 != 0) goto LAB_00404cb8;
LAB_00404d00:
        _Var5 = lseek(1,param_2,1);
        if (_Var5 < 0) {
          DAT_0061460c = uVar2 & 0xfffeffff;
          goto LAB_00404cb8;
        }
        DAT_00614618 = 1;
        uVar3 = param_2;
        if (-1 < (long)param_2) goto LAB_00404c6e;
        piVar4 = __errno_location();
        iVar1 = *piVar4;
joined_r0x00404cd9:
        if (iVar1 != 4) break;
      }
    } while (uVar8 < param_2);
    if ((DAT_006144ea != '\0') && (uVar8 != 0)) {
      FUN_004045a0(1,uVar8);
      return uVar8;
    }
  }
  return uVar8;
}


void FUN_00404e30(void)

{
  FUN_00404760();
  FUN_004040b0();
  FUN_00404810();
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void FUN_00404e50(void)

{
  long lVar1;
  undefined uVar2;
  undefined uVar3;
  int *piVar4;
  
  lVar1 = FUN_00404c30(DAT_00614590,DAT_00614648);
  DAT_006145d8 = DAT_006145d8 + lVar1;
  if (DAT_00614648 == lVar1) {
    DAT_00614588 = 0;
    DAT_006145f0 = DAT_006145f0 + 1;
    return;
  }
  uVar2 = FUN_004083e0(4,DAT_00614660);
  uVar3 = dcgettext(0,"writing to %s",5);
  piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
  FUN_004041e0(0,*piVar4,uVar3,uVar2);
}


void FUN_00404ef0(char *param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  
  pcVar2 = param_1 + param_2;
  if (param_2 != 0) {
    do {
      while (uVar4 = DAT_00614580, *param_1 == DAT_006142ba) {
        if (DAT_00614580 < DAT_00614640) {
          do {
            bVar5 = DAT_00614648 <= DAT_00614588 + 1;
            puVar3 = (undefined *)(DAT_00614590 + DAT_00614588);
            DAT_00614588 = DAT_00614588 + 1;
            *puVar3 = DAT_006142b9;
            if (bVar5) {
              FUN_00404e50();
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < DAT_00614640);
        }
        DAT_00614580 = 0;
        param_1 = param_1 + 1;
        if (pcVar2 == param_1) {
          DAT_00614580 = 0;
          return;
        }
      }
      if (DAT_00614580 == DAT_00614640) {
        DAT_006145a0 = DAT_006145a0 + 1;
      }
      else if (DAT_00614580 < DAT_00614640) {
        uVar1 = DAT_00614588 + 1;
        bVar5 = DAT_00614648 <= uVar1;
        *(char *)(DAT_00614590 + DAT_00614588) = *param_1;
        DAT_00614588 = uVar1;
        if (bVar5) {
          FUN_00404e50();
          uVar4 = DAT_00614580;
        }
      }
      DAT_00614580 = uVar4 + 1;
      param_1 = param_1 + 1;
    } while (pcVar2 != param_1);
  }
  return;
}


void FUN_00405000(long param_1,ulong param_2)

{
  undefined *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    return;
  }
  uVar6 = 0;
  do {
    bVar7 = DAT_00614580 < DAT_00614640;
    cVar2 = *(char *)(param_1 + uVar6);
    DAT_00614580 = DAT_00614580 + 1;
    if (bVar7) {
      uVar6 = uVar6 + 1;
      uVar3 = DAT_00614588;
      lVar5 = DAT_00614590;
      uVar4 = DAT_00614648;
      if (DAT_006142b9 == cVar2) {
        DAT_006143b0 = DAT_006143b0 + 1;
      }
      else {
        for (; DAT_006143b0 != 0; DAT_006143b0 = DAT_006143b0 + -1) {
          DAT_00614588 = uVar3 + 1;
          *(char *)(lVar5 + uVar3) = DAT_006142b9;
          if (uVar4 <= DAT_00614588) {
            FUN_00404e50();
            uVar4 = DAT_00614648;
            lVar5 = DAT_00614590;
          }
          uVar3 = DAT_00614588;
        }
        DAT_00614588 = uVar3 + 1;
        *(char *)(lVar5 + uVar3) = cVar2;
        if (uVar4 <= DAT_00614588) goto LAB_004050dc;
      }
    }
    else {
      DAT_006143b0 = 0;
      DAT_00614580 = 0;
      bVar7 = DAT_00614648 <= DAT_00614588 + 1;
      puVar1 = (undefined *)(DAT_00614590 + DAT_00614588);
      DAT_00614588 = DAT_00614588 + 1;
      *puVar1 = DAT_006142ba;
      if (bVar7) {
LAB_004050dc:
        FUN_00404e50();
      }
    }
    if (param_2 <= uVar6) {
      return;
    }
  } while( true );
}


ulong FUN_00405150(int param_1,undefined param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  undefined uVar5;
  undefined uVar6;
  char *pcVar7;
  ulong uVar8;
  bool bVar9;
  int local_cc;
  stat local_c8;
  
  uVar8 = *param_5;
  piVar2 = __errno_location();
  *piVar2 = 0;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(param_4),0) < param_3) {
    lVar3 = FUN_004044d0(param_2,param_1,0,2);
    if (lVar3 < 0) {
      local_cc = 0;
      goto LAB_00405207;
    }
  }
  else {
    uVar8 = uVar8 + param_3 * param_4;
    lVar3 = FUN_004044d0(param_2,param_1,uVar8,1);
    if (-1 < lVar3) {
      if (param_1 == 0) {
        iVar1 = __fxstat(1,0,&local_c8);
        if (iVar1 != 0) {
          uVar5 = FUN_004083e0(4,param_2);
          uVar6 = dcgettext(0,"cannot fstat %s",5);
                    /* WARNING: Subroutine does not return */
          FUN_004041e0(1,*piVar2,uVar6,uVar5);
        }
        uVar4 = 0;
        if (((local_c8.st_mode & 0xd000) == 0x8000) &&
           ((ulong)local_c8.st_size < uVar8 + DAT_006145b0)) {
          uVar4 = uVar8 - local_c8.st_size;
          uVar8 = local_c8.st_size - DAT_006145b0;
          uVar4 = uVar4 / param_4;
        }
        bVar9 = CARRY8(uVar8,DAT_006145b0);
        DAT_006145b0 = uVar8 + DAT_006145b0;
        if (bVar9) {
          DAT_006145a9 = 1;
        }
      }
      else {
LAB_004051c8:
        *param_5 = 0;
        uVar4 = 0;
      }
      return uVar4;
    }
    local_cc = *piVar2;
    lVar3 = FUN_004044d0(param_2,param_1,0,2);
    if (lVar3 < 0) {
LAB_00405207:
      if (param_1 == 0) {
        lVar3 = DAT_00614598;
        if (DAT_00614598 == 0) {
          FUN_00404a80();
          lVar3 = DAT_00614598;
        }
      }
      else {
        FUN_00404ba0();
        lVar3 = DAT_00614590;
      }
      do {
        uVar8 = param_4;
        if (param_3 == 0) {
          uVar8 = *param_5;
          goto LAB_0040528f;
        }
        while( true ) {
          uVar8 = (*DAT_006144e0)(param_1,lVar3,uVar8);
          if ((long)uVar8 < 0) {
            if (param_1 == 0) {
              uVar5 = FUN_004083e0(4,param_2);
              uVar6 = dcgettext(0,"error reading %s",5);
                    /* WARNING: Subroutine does not return */
              FUN_004041e0(0,*piVar2,uVar6,uVar5);
            }
            goto LAB_004053db;
          }
          if (uVar8 == 0) {
            return param_3;
          }
          if ((param_1 == 0) &&
             (bVar9 = CARRY8(uVar8,DAT_006145b0), DAT_006145b0 = uVar8 + DAT_006145b0, bVar9)) {
            DAT_006145a9 = 1;
          }
          if (param_3 == 0) goto LAB_004051c8;
          param_3 = param_3 - 1;
          if (param_3 != 0) break;
          uVar8 = *param_5;
          if (uVar8 == 0) {
            return 0;
          }
LAB_0040528f:
          param_3 = 0;
        }
      } while( true );
    }
    if (local_cc != 0) goto LAB_004052c1;
  }
  local_cc = 0x4b;
LAB_004052c1:
  if (param_1 == 0) {
    uVar5 = FUN_004084b0(0,3,param_2);
    pcVar7 = "%s: cannot skip";
  }
  else {
LAB_004053db:
    uVar5 = FUN_004084b0(0,3,param_2);
    pcVar7 = "%s: cannot seek";
  }
  uVar6 = dcgettext(0,pcVar7,5);
                    /* WARNING: Subroutine does not return */
  FUN_004041e0(0,local_cc,uVar6,uVar5);
}


void FUN_00405460(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  undefined uVar5;
  byte **ppbVar6;
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
  byte **ppbVar7;
  
  uVar5 = DAT_00614680;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_0040549f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPERAND]...\n  or:  %s OPTION\n",5);
  __printf_chk(1,uVar3,uVar5,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Copy a file, converting and formatting according to the operands.\n\n  bs=BYTES        read and write up to BYTES bytes at a time (default: 512);\n                  overrides ibs and obs\n  cbs=BYTES       convert BYTES bytes at a time\n  conv=CONVS      convert the file as per the comma separated symbol list\n  count=N         copy only N input blocks\n  ibs=BYTES       read up to BYTES bytes at a time (default: 512)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  if=FILE         read from FILE instead of stdin\n  iflag=FLAGS     read as per the comma separated symbol list\n  obs=BYTES       write BYTES bytes at a time (default: 512)\n  of=FILE         write to FILE instead of stdout\n  oflag=FLAGS     write as per the comma separated symbol list\n  seek=N          skip N obs-sized blocks at start of output\n  skip=N          skip N ibs-sized blocks at start of input\n  status=LEVEL    The LEVEL of information to print to stderr;\n                  \'none\' suppresses everything but error messages,\n                  \'noxfer\' suppresses the final transfer statistics,\n                  \'progress\' shows periodic transfer statistics\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nN and BYTES may be followed by the following multiplicative suffixes:\nc =1, w =2, b =512, kB =1000, K =1024, MB =1000*1000, M =1024*1024, xM =M,\nGB =1000*1000*1000, G =1024*1024*1024, and so on for T, P, E, Z, Y.\n\nEach CONV symbol may be:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  ascii     from EBCDIC to ASCII\n  ebcdic    from ASCII to EBCDIC\n  ibm       from ASCII to alternate EBCDIC\n  block     pad newline-terminated records with spaces to cbs-size\n  unblock   replace trailing spaces in cbs-size records with newline\n  lcase     change upper case to lower case\n  ucase     change lower case to upper case\n  sparse    try to seek rather than write the output for NUL input blocks\n  swab      swap every pair of input bytes\n  sync      pad every input block with NULs to ibs-size; when used\n            with block or unblock, pad with spaces rather than NULs\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  excl      fail if the output file already exists\n  nocreat   do not create the output file\n  notrunc   do not truncate the output file\n  noerror   continue after read errors\n  fdatasync  physically write output file data before finishing\n  fsync     likewise, but also write metadata\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nEach FLAG symbol may be:\n\n  append    append mode (makes sense only for output; conv=notrunc suggested)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  direct    use direct I/O for data\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  directory  fail unless a directory\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  dsync     use synchronized I/O for data\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  sync      likewise, but also for metadata\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  fullblock  accumulate full blocks of input (iflag only)\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  nonblock  use non-blocking I/O\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  noatime   do not update access time\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  nocache   Request to drop cache.  See also oflag=sync\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  noctty    do not assign controlling terminal from file\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  count_bytes  treat \'count=N\' as a byte count (iflag only)\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  skip_bytes  treat \'skip=N\' as a byte count (iflag only)\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  seek_bytes  treat \'seek=N\' as a byte count (oflag only)\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nSending a %s signal to a running \'dd\' process makes it\nprint I/O statistics to standard error and then resume copying.\n\nOptions are:\n\n"
                    ,5);
  __printf_chk(1,uVar5,&DAT_0040dc26);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040dc2b;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40dca5;
  local_78[1] = (byte *)0x40dc3d;
  local_78[2] = (byte *)0x40dc53;
  local_78[3] = (byte *)0x40dc5d;
  local_78[4] = (byte *)0x40dc6c;
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
    pbVar9 = *ppbVar6;
    bVar11 = false;
    bVar12 = pbVar9 == (byte *)0x0;
    if (bVar12) break;
    lVar8 = 3;
    pbVar10 = &DAT_0040dc23;
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar11 = *pbVar10 < *pbVar9;
      bVar12 = *pbVar10 == *pbVar9;
      pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
  } while ((!bVar11 && !bVar12) != bVar11);
  pbVar9 = ppbVar7[3];
  if (pbVar9 == (byte *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pbVar9 = &DAT_0040dc23;
        goto LAB_004059a3;
      }
    }
    pbVar9 = &DAT_0040dc23;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0040dc23);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_004059a3:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,&DAT_0040dc23);
      }
    }
    pcVar4 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0040dc23);
    if (pbVar9 != &DAT_0040dc23) {
      pcVar4 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pbVar9,pcVar4);
LAB_0040549f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


uint FUN_004059d0(char *param_1,char *param_2,char param_3,undefined param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined uVar6;
  undefined uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  
  uVar9 = 0;
LAB_004059e5:
  pcVar4 = strchr(param_1,0x2c);
  pcVar11 = param_2;
  do {
    lVar8 = 0;
    do {
      pcVar1 = pcVar11 + lVar8;
      cVar2 = param_1[lVar8];
      if (*pcVar1 == '\0') {
        if (((cVar2 == ',') || (cVar2 == '\0')) && (uVar3 = *(uint *)(pcVar11 + 0xc), uVar3 != 0)) {
          uVar10 = uVar9 | uVar3;
          uVar9 = uVar3;
          if (param_3 == '\0') {
            uVar9 = uVar10;
          }
          if (pcVar4 == (char *)0x0) {
            return uVar9;
          }
          param_1 = pcVar4 + 1;
          goto LAB_004059e5;
        }
        break;
      }
      lVar8 = lVar8 + 1;
    } while (*pcVar1 == cVar2);
    if (*pcVar11 == '\0') {
      if (pcVar4 == (char *)0x0) {
        sVar5 = strlen(param_1);
      }
      else {
        sVar5 = (long)pcVar4 - (long)param_1;
      }
      uVar6 = FUN_00408370(0,8,param_1,sVar5);
      uVar7 = dcgettext(0,param_4,5);
                    /* WARNING: Subroutine does not return */
      FUN_004041e0(0,0,"%s: %s",uVar7,uVar6);
    }
    pcVar11 = pcVar11 + 0x10;
  } while( true );
}


ulong FUN_00405ab0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00409550(param_1);
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


void FUN_00405b10(undefined param_1)

{
  DAT_00614678 = param_1;
  return;
}


void FUN_00405b20(undefined param_1)

{
  DAT_00614670 = param_1;
  return;
}


void FUN_00405b30(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00405ab0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00614670 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00614678 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00408480();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00405bae;
    }
  }
  iVar1 = FUN_00405ab0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00405bae:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_006142d0);
}


int FUN_00405bd0(int param_1,char *param_2,int param_3,uint param_4)

{
  int iVar1;
  int __fd;
  int iVar2;
  int *piVar3;
  
  __fd = open(param_2,param_3,(ulong)param_4);
  if ((param_1 != __fd) && (-1 < __fd)) {
    iVar2 = dup2(__fd,param_1);
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    close(__fd);
    *piVar3 = iVar1;
    return iVar2;
  }
  return __fd;
}


long FUN_00405c40(void)

{
  int iVar1;
  timespec local_18;
  
  iVar1 = clock_gettime(1,&local_18);
  if (iVar1 != 0) {
    FUN_00405c70(&local_18);
  }
  return local_18.tv_sec * 1000000000 + local_18.tv_nsec;
}


void FUN_00405c70(timespec *param_1)

{
  int iVar1;
  timeval local_18;
  
  iVar1 = clock_gettime(0,param_1);
  if (iVar1 != 0) {
    gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    param_1->tv_sec = local_18.tv_sec;
    param_1->tv_nsec = local_18.tv_usec * 1000;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405d08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405cb0(int param_1)

{
  ulong uVar1;
  float fVar2;
  float param_7;
  
  if ((float)_DAT_0040f734 <= param_7) {
    uVar1 = (long)ROUND(param_7 - (float)_DAT_0040f734) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)ROUND(param_7);
  }
  fVar2 = (float)uVar1;
  if ((long)uVar1 < 0) {
    fVar2 = fVar2 + (float)_DAT_0040f738;
  }
  if (((param_1 == 0) && (param_7 != fVar2)) && ((long)(uVar1 + 1) < 0)) {
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00405d70(ulong param_1,char *param_2,uint param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  lconv *plVar9;
  ulong uVar10;
  size_t sVar11;
  size_t __n;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  char *__s;
  undefined *__dest;
  undefined *puVar21;
  undefined *puVar22;
  byte *pbVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *local_a8;
  undefined local_68 [56];
  
  uVar5 = param_3 & 0x20;
  uVar14 = param_3 & 3;
  uVar6 = (-(uint)(uVar5 == 0) & 0xffffffe8) + 0x400;
  plVar9 = localeconv();
  puVar21 = (undefined *)plVar9->decimal_point;
  uVar10 = strlen((char *)puVar21);
  bVar24 = 0xf < uVar10 - 1;
  if (bVar24) {
    puVar21 = (undefined *)&DAT_0040f6b9;
  }
  pbVar23 = (byte *)plVar9->grouping;
  __s = plVar9->thousands_sep;
  if (bVar24) {
    uVar10 = 1;
  }
  sVar11 = strlen(__s);
  if (0x10 < sVar11) {
    __s = "";
  }
  local_a8 = (undefined *)(param_2 + 0x287);
  uVar15 = (uint)uVar10;
  if (param_4 < param_5) {
    if (param_4 != 0) {
      auVar3 = ZEXT816(param_5) / ZEXT816(param_4);
      if (param_5 % param_4 == 0) {
        uVar17 = SUB168(ZEXT816(param_1) / (auVar3 & (undefined)0xffffffffffffffff),0);
        auVar2 = ZEXT816((ulong)(SUB168(ZEXT816(param_1) %
                                        (auVar3 & (undefined)0xffffffffffffffff),0) * 10));
        uVar18 = SUB168(auVar2 % (auVar3 & (undefined)0xffffffffffffffff),0) * 2;
        uVar8 = SUB164(auVar2 / (auVar3 & (undefined)0xffffffffffffffff),0);
        uVar12 = (ulong)uVar8;
        if (uVar18 < SUB168(auVar3,0)) {
          uVar19 = (uint)(uVar18 != 0);
        }
        else {
          uVar19 = (SUB168(auVar3,0) < uVar18) + 2;
        }
        goto joined_r0x00406108;
      }
    }
LAB_00405e55:
    fVar25 = (float)param_4;
    if ((long)param_4 < 0) {
      fVar25 = fVar25 + (float)_DAT_0040f738;
    }
    if ((long)param_5 < 0) {
      fVar25 = fVar25 / ((float)param_5 + (float)_DAT_0040f738);
      if ((long)param_1 < 0) goto LAB_00406068;
LAB_00405e92:
      fVar25 = (float)param_1 * fVar25;
      if ((param_3 & 0x10) != 0) goto LAB_00405e9f;
LAB_00405fb0:
      if ((uVar14 != 1) && (fVar25 < _DAT_0040f740)) {
        FUN_00405cb0();
        uVar10 = SUB108(fVar25,0);
      }
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf",uVar10);
      uVar16 = 0xffffffff;
      __n = strlen(param_2);
      sVar11 = __n;
    }
    else {
      fVar25 = fVar25 / (float)param_5;
      if (-1 < (long)param_1) goto LAB_00405e92;
LAB_00406068:
      fVar25 = ((float)param_1 + (float)_DAT_0040f738) * fVar25;
      if ((param_3 & 0x10) == 0) goto LAB_00405fb0;
LAB_00405e9f:
      uVar16 = 0;
      fVar27 = (float)uVar6;
      do {
        fVar26 = fVar27;
        uVar16 = uVar16 + 1;
        fVar27 = fVar26 * (float)uVar6;
        if (fVar25 < fVar27) break;
      } while (uVar16 != 8);
      fVar25 = fVar25 / fVar26;
      uVar17 = uVar10 + 2 + (ulong)(uVar5 == 0);
      if (uVar14 == 1) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar17) goto LAB_004063d8;
      }
      else {
        if (fVar25 < _DAT_0040f740) {
          FUN_00405cb0();
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar17) {
LAB_004063d8:
          if (((param_3 & 8) == 0) || (param_2[__n - 1] != '0')) {
            sVar11 = __n - (uVar10 + 1);
            goto LAB_00406000;
          }
          if (uVar14 == 1) goto LAB_00405f76;
        }
        if (fVar25 * (float)_DAT_0040f73c < _DAT_0040f740) {
          FUN_00405cb0(uVar14);
        }
      }
LAB_00405f76:
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf");
      __n = strlen(param_2);
      sVar11 = __n;
    }
LAB_00406000:
    puVar22 = (undefined *)((long)local_a8 - __n);
    memmove(puVar22,param_2,__n);
    __dest = (undefined *)(sVar11 + (long)puVar22);
  }
  else {
    if ((param_4 % param_5 != 0) ||
       (uVar17 = SUB168(ZEXT816(param_4) / ZEXT816(param_5),0) * param_1,
       SUB168(ZEXT816(uVar17) /
              (ZEXT816(param_4) / ZEXT816(param_5) & (undefined)0xffffffffffffffff),0) !=
       param_1)) goto LAB_00405e55;
    uVar19 = 0;
    uVar12 = 0;
    uVar8 = 0;
joined_r0x00406108:
    puVar22 = local_a8;
    if ((param_3 & 0x10) == 0) {
      uVar16 = 0xffffffff;
LAB_00406121:
      if (uVar14 != 1) goto LAB_00406130;
      __dest = local_a8;
      if (5 < (int)(uVar8 + (((uint)uVar17 & 1) + uVar19 != 0))) goto LAB_00406141;
LAB_00406173:
      do {
        puVar22 = (undefined *)((long)puVar22 + -1);
        *(char *)puVar22 = (char)uVar17 + (char)(uVar17 / 10) * -10 + '0';
        bVar24 = 9 < uVar17;
        uVar17 = uVar17 / 10;
      } while (bVar24);
    }
    else {
      uVar8 = (uint)uVar12;
      uVar20 = (ulong)uVar6;
      uVar16 = 0;
      uVar18 = uVar17;
      if (uVar17 < uVar20) goto LAB_00406121;
      while( true ) {
        uVar17 = uVar18 / uVar20;
        uVar7 = (int)uVar12 + (int)(uVar18 % uVar20) * 10;
        uVar12 = uVar7 / uVar20;
        uVar8 = (uint)uVar12;
        uVar7 = ((int)uVar19 >> 1) + (uVar7 % uVar6) * 2;
        uVar19 = uVar19 + uVar7;
        if (uVar7 < uVar6) {
          uVar19 = (uint)(uVar19 != 0);
        }
        else {
          uVar19 = (uVar6 < uVar19) + 2;
        }
        uVar16 = uVar16 + 1;
        if (uVar17 < uVar20) break;
        uVar18 = uVar17;
        if (uVar16 == 8) goto LAB_00406121;
      }
      if (9 < uVar17) goto LAB_00406121;
      if (uVar14 == 1) {
        bVar24 = 2 < (uVar8 & 1) + uVar19;
      }
      else {
        bVar24 = uVar19 != 0 && uVar14 == 0;
      }
      if (bVar24) {
        uVar8 = uVar8 + 1;
        if (uVar8 != 10) goto LAB_004065d8;
        uVar17 = uVar17 + 1;
        if (uVar17 == 10) goto LAB_0040658e;
        uVar19 = 0;
LAB_00406547:
        if ((param_3 & 8) != 0) goto LAB_00406590;
        cVar4 = '0';
      }
      else {
        if (uVar8 == 0) goto LAB_00406547;
LAB_004065d8:
        cVar4 = (char)uVar8 + '0';
      }
      param_2[0x286] = cVar4;
      uVar12 = uVar10 & 0xffffffff;
      puVar22 = (undefined *)(param_2 + (0x286 - uVar10));
      if (uVar15 < 8) {
        if ((uVar10 & 4) == 0) {
          if (((int)uVar12 != 0) &&
             (*(undefined *)puVar22 = *(undefined *)puVar21, (uVar10 & 2) != 0)) {
            *(undefined *)((long)puVar22 + (uVar12 - 2)) =
                 *(undefined *)((long)puVar21 + (uVar12 - 2));
          }
        }
        else {
          *(undefined *)puVar22 = *(undefined *)puVar21;
          *(undefined *)((long)puVar22 + (uVar12 - 4)) =
               *(undefined *)((long)puVar21 + (uVar12 - 4));
        }
      }
      else {
        *puVar22 = *puVar21;
        *(undefined *)((long)puVar22 + ((uVar10 & 0xffffffff) - 8)) =
             *(undefined *)((long)puVar21 + ((uVar10 & 0xffffffff) - 8));
        lVar13 = (long)puVar22 - ((ulong)(puVar22 + 1) & 0xfffffffffffffff8);
        uVar8 = (int)lVar13 + uVar15 & 0xfffffff8;
        if (7 < uVar8) {
          uVar19 = 0;
          do {
            uVar12 = (ulong)uVar19;
            uVar19 = uVar19 + 8;
            *(undefined *)(((ulong)(puVar22 + 1) & 0xfffffffffffffff8) + uVar12) =
                 *(undefined *)((long)puVar21 + (uVar12 - lVar13));
          } while (uVar19 < uVar8);
        }
      }
LAB_0040658e:
      uVar19 = 0;
LAB_00406590:
      __dest = puVar22;
      if (uVar14 == 1) goto LAB_00406173;
      uVar8 = 0;
LAB_00406130:
      __dest = puVar22;
      if ((uVar14 != 0) || ((int)(uVar19 + uVar8) < 1)) goto LAB_00406173;
LAB_00406141:
      uVar17 = uVar17 + 1;
      __dest = puVar22;
      if ((((param_3 & 0x10) == 0) || (uVar6 != uVar17)) || (uVar16 == 8)) goto LAB_00406173;
      uVar16 = uVar16 + 1;
      if ((param_3 & 8) == 0) {
        *(undefined *)((long)puVar22 + -1) = 0x30;
        puVar22 = (undefined *)((long)puVar22 + ~uVar10);
        uVar17 = uVar10 & 0xffffffff;
        if (uVar15 < 8) {
          if ((uVar10 & 4) == 0) {
            if (((int)uVar17 != 0) &&
               (*(undefined *)puVar22 = *(undefined *)puVar21, (uVar10 & 2) != 0)) {
              *(undefined *)((long)puVar22 + (uVar17 - 2)) =
                   *(undefined *)((long)puVar21 + (uVar17 - 2));
            }
          }
          else {
            *(undefined *)puVar22 = *(undefined *)puVar21;
            *(undefined *)((long)puVar22 + (uVar17 - 4)) =
                 *(undefined *)((long)puVar21 + (uVar17 - 4));
          }
        }
        else {
          *puVar22 = *puVar21;
          *(undefined *)((long)puVar22 + ((uVar10 & 0xffffffff) - 8)) =
               *(undefined *)((long)puVar21 + ((uVar10 & 0xffffffff) - 8));
          lVar13 = (long)puVar22 - ((ulong)(puVar22 + 1) & 0xfffffffffffffff8);
          uVar14 = (int)lVar13 + uVar15 & 0xfffffff8;
          if (7 < uVar14) {
            uVar15 = 0;
            do {
              uVar10 = (ulong)uVar15;
              uVar15 = uVar15 + 8;
              *(undefined *)(((ulong)(puVar22 + 1) & 0xfffffffffffffff8) + uVar10) =
                   *(undefined *)((long)puVar21 + (uVar10 - lVar13));
            } while (uVar15 < uVar14);
          }
        }
      }
      *(undefined *)((long)puVar22 + -1) = 0x31;
      __dest = puVar22;
      puVar22 = (undefined *)((long)puVar22 + -1);
    }
  }
  if ((param_3 & 4) != 0) {
    sVar11 = strlen(__s);
    uVar17 = (long)__dest - (long)puVar22;
    __memcpy_chk(local_68,puVar22,uVar17,0x29);
    uVar10 = 0xffffffffffffffff;
    while( true ) {
      bVar1 = *pbVar23;
      if (bVar1 != 0) {
        uVar10 = (ulong)bVar1;
        if (0x7e < bVar1) {
          uVar10 = uVar17;
        }
        pbVar23 = pbVar23 + 1;
      }
      if (uVar17 < uVar10) break;
      puVar22 = (undefined *)((long)__dest - uVar10);
      uVar17 = uVar17 - uVar10;
      memcpy(puVar22,local_68 + uVar17,uVar10);
      if (uVar17 == 0) goto LAB_00406025;
      __dest = (undefined *)((long)puVar22 - sVar11);
      memcpy(__dest,__s,sVar11);
    }
    puVar22 = (undefined *)((long)__dest - uVar17);
    memcpy(puVar22,local_68,uVar17);
  }
LAB_00406025:
  if ((param_3 & 0x80) == 0) goto LAB_00406048;
  if (uVar16 == 0xffffffff) {
    if (param_5 < 2) {
      uVar16 = 0;
      goto LAB_00406035;
    }
    uVar16 = 1;
    uVar10 = 1;
    do {
      uVar10 = uVar10 * uVar6;
      if (param_5 <= uVar10) break;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 8);
    if ((param_3 & 0x40) != 0) goto LAB_004062b1;
LAB_004062d0:
    if ((uVar5 == 0) && (uVar16 == 1)) {
      *(undefined *)local_a8 = 0x6b;
      puVar21 = (undefined *)((long)local_a8 + 1);
      if ((param_3 & 0x100) == 0) {
LAB_00406503:
        local_a8 = (undefined *)((long)local_a8 + 1);
        goto LAB_00406048;
      }
    }
    else {
      *(undefined *)local_a8 = (&UNK_0040f728)[(int)uVar16];
      if ((param_3 & 0x100) == 0) goto LAB_00406503;
      puVar21 = (undefined *)((long)local_a8 + 1);
      if (uVar5 != 0) {
        *(undefined *)((long)local_a8 + 1) = 0x69;
        puVar21 = (undefined *)((long)local_a8 + 2);
      }
    }
  }
  else {
LAB_00406035:
    if ((param_3 & 0x100 | uVar16) == 0) goto LAB_00406048;
    if ((param_3 & 0x40) != 0) {
LAB_004062b1:
      local_a8 = (undefined *)(param_2 + 0x288);
      param_2[0x287] = ' ';
    }
    if (uVar16 != 0) goto LAB_004062d0;
    puVar21 = local_a8;
    if ((param_3 & 0x100) == 0) goto LAB_00406048;
  }
  local_a8 = (undefined *)((long)puVar21 + 1);
  *(undefined *)puVar21 = 0x42;
LAB_00406048:
  *(undefined *)local_a8 = 0;
  return puVar22;
}


char * FUN_00406740(char *param_1,uint *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  char *local_30 [2];
  
  if (((param_1 == (char *)0x0) && (param_1 = getenv("BLOCK_SIZE"), param_1 == (char *)0x0)) &&
     (param_1 = getenv("BLOCKSIZE"), param_1 == (char *)0x0)) {
    pcVar3 = getenv("POSIXLY_CORRECT");
    if (pcVar3 == (char *)0x0) {
      *param_3 = 0x400;
      *param_2 = 0;
    }
    else {
      *param_3 = 0x200;
      pcVar3 = (char *)0x0;
      *param_2 = 0;
    }
  }
  else {
    uVar5 = 0;
    if (*param_1 == '\'') {
      param_1 = param_1 + 1;
      uVar5 = 4;
    }
    iVar2 = FUN_0040a670(param_1,&PTR_s_human_readable_0040f710,&DAT_0040f700,4);
    if (iVar2 < 0) {
      pcVar3 = (char *)FUN_00408f50(param_1,local_30,0,param_3,"eEgGkKmMpPtTyYzZ0");
      if ((int)pcVar3 == 0) {
        cVar1 = *param_1;
        while (9 < (byte)(cVar1 - 0x30U)) {
          if (param_1 == local_30[0]) {
            if (local_30[0][-1] == 'B') {
              uVar5 = uVar5 | 0x180;
              if (local_30[0][-2] != 'i') break;
            }
            else {
              uVar5 = uVar5 | 0x80;
            }
            uVar5 = uVar5 | 0x20;
            break;
          }
          param_1 = param_1 + 1;
          cVar1 = *param_1;
        }
        lVar4 = *param_3;
        *param_2 = uVar5;
      }
      else {
        *param_2 = 0;
        lVar4 = *param_3;
      }
      if (lVar4 == 0) {
        pcVar3 = getenv("POSIXLY_CORRECT");
        *param_3 = (ulong)(-(uint)(pcVar3 == (char *)0x0) & 0x200) + 0x200;
        return (char *)0x4;
      }
    }
    else {
      *param_3 = 1;
      pcVar3 = (char *)0x0;
      *param_2 = uVar5 | *(uint *)(&DAT_0040f700 + (long)iVar2 * 4);
    }
  }
  return pcVar3;
}


void FUN_00406900(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
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
  
  uVar1 = DAT_00614338;
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
  DAT_00614338 = 0;
  if ((int)param_9 == 2) {
    iVar2 = FUN_0040a500(param_9,param_10,&DAT_0040f750,&PTR_DAT_0040f760,0);
    if (iVar2 != -1) {
      if (iVar2 == 0x68) {
        (*param_14)(0);
      }
      else if (iVar2 == 0x76) {
        local_e8 = &stack0x00000008;
        local_f0 = 0x30;
        local_e0 = local_d8;
        local_ec = 0x30;
        FUN_00408b20(stdout,param_11,param_12,param_13,&local_f0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
  }
  DAT_00614338 = uVar1;
  DAT_0061433c = 0;
  return;
}


void FUN_00406a10(byte *param_1)

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
        pbVar6 = &DAT_0040f800;
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
  DAT_00614680 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00406ab0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040aa50();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00406b88:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040f811;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040f806;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00406b88;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040f80d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040f80a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00406bb0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00407801:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00407436;
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
      goto LAB_00407801;
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
      param_8 = (char *)FUN_00406ab0(&DAT_0040f815,param_5);
      param_9 = (char *)FUN_00406ab0(&DAT_00410d8f);
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
LAB_00406c48:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00406c58:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_004073d8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00407350:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00407362_caseD_0;
      default:
        bVar20 = false;
        goto switchD_004071ce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00407065;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00407362_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00407362_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00407362_caseD_b:
        bVar17 = 0x76;
        goto LAB_00407065;
      case 0xc:
switchD_00407362_caseD_c:
        bVar17 = 0x66;
LAB_00407065:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00406fb8;
        }
LAB_00407070:
        bVar23 = false;
        goto LAB_00406e2b;
      case 0xd:
        bVar20 = false;
switchD_00406d48_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00406f80;
      case 0x20:
        bVar25 = false;
LAB_004073aa:
        uVar19 = 0x20;
        goto LAB_00407372;
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
switchD_00406d48_caseD_21:
        bVar25 = false;
        goto LAB_00406f8b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040738a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00406d98;
        }
        bVar23 = false;
        goto LAB_00406daf;
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
LAB_00407372:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00406db1;
      case 0x27:
        bVar20 = false;
        goto switchD_004071ce_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_004071ce_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00406d48_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_004071ce_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00406fa7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00407350;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00406d48_caseD_0;
      default:
        goto switchD_004071ce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00407070;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00407362_caseD_9;
      case 10:
        goto switchD_00407362_caseD_a;
      case 0xb:
        goto switchD_00407362_caseD_b;
      case 0xc:
        goto switchD_00407362_caseD_c;
      case 0xd:
        goto switchD_00406d48_caseD_d;
      case 0x20:
        goto LAB_004073aa;
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
        goto switchD_00406d48_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040738a;
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
        goto LAB_00407372;
      case 0x27:
        goto switchD_004071ce_caseD_27;
      case 0x3f:
        goto switchD_004071ce_caseD_3f;
      case 0x5c:
        goto switchD_00406d48_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_004071ce_caseD_7b;
      }
      goto LAB_00406df2;
    }
    goto LAB_00406fca;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00407362_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00406d48_caseD_0:
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
            goto LAB_00406ea8;
          }
LAB_004070ea:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_004070ea;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00406ea8;
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
LAB_00407129:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00406ea8;
        goto LAB_00406db1;
      }
      bVar26 = param_5 == 2;
      goto LAB_00406fbc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00406d98;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00406c58;
  default:
switchD_004071ce_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_0040a580(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00407ada;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00407c17;
          goto LAB_00407c07;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00406fbc;
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
      goto LAB_00407ada;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004071a4;
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
    goto LAB_004071e2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_004071e2;
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
LAB_004071e2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_004071fa:
      param_5 = 2;
      goto LAB_00406fbc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00406d86;
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
LAB_00406d86:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_004071fa;
    goto LAB_00406d98;
  case 0x23:
  case 0x7e:
LAB_00406d7d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00406d86;
    goto LAB_00406f8b;
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
    goto switchD_004071ce_caseD_25;
  case 0x27:
switchD_004071ce_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00406d98;
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
      goto LAB_00406ea8;
    }
    goto LAB_00406fbc;
  case 0x3f:
switchD_004071ce_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00406ea8;
      }
      goto LAB_00406fbc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00406d98;
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
        goto LAB_00407129;
      }
      goto LAB_00406fca;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00406d98;
  case 0x5c:
    if (param_5 != 2) {
switchD_00406d48_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00406ec4;
    }
    if (local_5c) goto LAB_00406fbc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00406ec4;
  case 0x7b:
  case 0x7d:
switchD_004071ce_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00406d7d;
    goto LAB_00406f8b;
  }
LAB_00406f80:
  if (!bVar6) {
LAB_00406f8b:
    bVar23 = false;
    goto LAB_00406d98;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00406fa7;
LAB_004073d8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00406fbc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00406fca:
    uVar9 = FUN_00406bb0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00407cad:
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
    uVar9 = FUN_00406bb0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00407cad;
LAB_00407436:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00406c48;
  while (__s1[uVar21] != 0) {
LAB_00407c07:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00407c17:
  bVar23 = false;
LAB_00407ada:
  if (1 < uVar21) {
LAB_0040769e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00406fbc;
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
        if (uVar21 <= uVar22) goto LAB_00406e3d;
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
        if (uVar21 <= uVar22) goto LAB_00406ec4;
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
LAB_004071a4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040769e;
  }
switchD_004071ce_caseD_25:
  bVar25 = param_5 == 2;
LAB_00406d98:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00406daf:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00406db1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00406ea8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00406ea8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00406ec4:
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
      goto LAB_00406e3d;
    }
  }
joined_r0x00406fa7:
  if (local_5c) {
LAB_00406fb8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00406fbc;
  }
LAB_00406df2:
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
LAB_00406e2b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00406e3d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00406c58;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00407de0(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_00614318;
  if (DAT_00614330 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00408f10();
    }
    if (PTR_DAT_00614318 == &DAT_00614320) {
      puVar8 = (undefined *)FUN_00408d20(0);
      uVar6 = PTR_DAT_00614328._4_4_;
      uVar5 = PTR_DAT_00614328._0_4_;
      uVar3 = _UNK_00614324;
      PTR_DAT_00614318 = (undefined *)puVar8;
      *puVar8 = _DAT_00614320;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00408d20(PTR_DAT_00614318);
      PTR_DAT_00614318 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_00614330 * 4,0,(long)((param_1 + 1) - DAT_00614330) << 4);
    DAT_00614330 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00406bb0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_006146a0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00408cc0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00406bb0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00407f80(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006147a0;
  }
  FUN_00408ec0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00407fc0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006147a0;
  }
  return *param_1;
}


void FUN_00407fd0(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006147a0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00407fe0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006147a0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00408020(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006147a0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00408040(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006147a0;
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


void FUN_00408070(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_006147a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00406bb0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_004080f0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_006147a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00406bb0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00408cc0(lVar3 + 1);
  FUN_00406bb0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_004081e0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004080f0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004081f0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00614318;
  if (1 < DAT_00614330) {
    ppvVar2 = (void **)(PTR_DAT_00614318 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00614318 + (ulong)(DAT_00614330 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_006146a0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00614320 = 0x100;
    PTR_DAT_00614328 = &DAT_006146a0;
  }
  if (__ptr_00 != &DAT_00614320) {
    free(__ptr_00);
    PTR_DAT_00614318 = &DAT_00614320;
  }
  DAT_00614330 = 1;
  return;
}


void FUN_00408290(undefined param_1,undefined param_2)

{
  FUN_00407de0(param_1,param_2,0xffffffffffffffff,&DAT_006147a0);
  return;
}


void FUN_004082b0(void)

{
  FUN_00407de0();
  return;
}


void FUN_004082c0(undefined param_1)

{
  FUN_00407de0(0,param_1,0xffffffffffffffff,&DAT_006147a0);
  return;
}


void FUN_004082e0(undefined param_1,undefined param_2)

{
  FUN_00407de0(0,param_1,param_2,&DAT_006147a0);
  return;
}


void FUN_00408300(undefined param_1,int param_2,undefined param_3)

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
    FUN_00407de0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408370(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00407de0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004083e0(undefined param_1,undefined param_2)

{
  FUN_00408300(0,param_1,param_2);
  return;
}


void FUN_004083f0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00408370(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408400(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_006147d0;
  local_48 = _DAT_006147a0;
  uStack_40 = uRam00000000006147a8;
  local_38 = _DAT_006147b0;
  uStack_30 = uRam00000000006147b8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_006147c0;
  uStack_20 = uRam00000000006147c8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00407de0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00408470(undefined param_1,char param_2)

{
  FUN_00408400(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00408480(undefined param_1)

{
  FUN_00408400(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_004084a0(undefined param_1,undefined param_2)

{
  FUN_00408400(param_1,param_2,0x3a);
  return;
}


void FUN_004084b0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00407de0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408520(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam00000000006147a8;
  local_38 = _DAT_006147b0;
  uStack_30 = uRam00000000006147b8;
  local_28 = _DAT_006147c0;
  lStack_20 = uRam00000000006147c8;
  local_18 = DAT_006147d0;
  local_48 = CONCAT44((int)((ulong)_DAT_006147a0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00407de0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408590(void)

{
  FUN_00408520();
  return;
}


void FUN_004085a0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00408520(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_004085c0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00408520(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004085e0(void)

{
  FUN_00407de0();
  return;
}


void FUN_004085f0(undefined param_1,undefined param_2)

{
  FUN_00407de0(0,param_1,param_2,&DAT_006142e0);
  return;
}


void FUN_00408610(undefined param_1,undefined param_2)

{
  FUN_00407de0(param_1,param_2,0xffffffffffffffff,&DAT_006142e0);
  return;
}


void FUN_00408630(undefined param_1)

{
  FUN_00407de0(0,param_1,0xffffffffffffffff,&DAT_006142e0);
  return;
}


void FUN_00408650(undefined param_1,undefined param_2,long param_3,undefined param_4,
                 undefined param_5,undefined param_6)

{
  void *__ptr;
  undefined uVar1;
  int *piVar2;
  
  __ptr = (void *)FUN_004094c0(param_5,param_6);
  if (__ptr == (void *)0x0) {
    uVar1 = dcgettext(0,"unable to display error message",5);
    piVar2 = __errno_location();
    error(0,*piVar2,uVar1);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 != 0) {
    error_at_line(param_1,param_2,param_3,param_4,"%s",__ptr);
    free(__ptr);
    return;
  }
  error(param_1,param_2,"%s",__ptr);
  free(__ptr);
  return;
}


void FUN_00408710(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00408650(param_1,param_2,0,0,param_3,param_4);
  return;
}


undefined
FUN_00408720(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0041058b,5);
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
    goto LAB_0040899c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040899c:
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
    goto LAB_00408a39;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00408a39:
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
    goto LAB_0040881a;
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
LAB_0040881a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00408b00(void)

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
  FUN_00408720();
  return;
}


void FUN_00408b20(void)

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
  FUN_00408720();
  return;
}


void FUN_00408b80(void)

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
  FUN_00408720();
  return;
}


void FUN_00408c40(void)

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


void FUN_00408cc0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408f10();
  }
  return;
}


void FUN_00408ce0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00408cc0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408f10();
}


void thunk_FUN_00408cc0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408f10();
  }
  return;
}


void * FUN_00408d20(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408f10();
  }
  return pvVar1;
}


void FUN_00408d60(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00408d20();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408f10();
}


void FUN_00408d90(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00408deb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00408deb:
                    /* WARNING: Subroutine does not return */
      FUN_00408f10(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00408d20(param_1,uVar2 * param_3);
  return;
}


void FUN_00408e20(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00408d20(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00408e6a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00408e6a:
                    /* WARNING: Subroutine does not return */
      FUN_00408f10();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00408d20(param_1,uVar1);
  return;
}


void FUN_00408e70(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00408cc0();
  memset(__s,0,param_1);
  return;
}


void FUN_00408e90(size_t param_1,ulong param_2)

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
  FUN_00408f10();
}


void FUN_00408ec0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00408cc0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00408ef0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00408cc0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00408f10(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_006142d0,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00408f50(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  int *piVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  ulong uVar6;
  char *pcVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  byte *local_40 [2];
  
  if (0x24 < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoumax");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = local_40;
  }
  piVar3 = __errno_location();
  *piVar3 = 0;
  bVar12 = *param_1;
  ppuVar4 = __ctype_b_loc();
  pbVar5 = param_1;
  while ((*(byte *)((long)*ppuVar4 + (ulong)bVar12 * 2 + 1) & 0x20) != 0) {
    pbVar5 = pbVar5 + 1;
    bVar12 = *pbVar5;
  }
  if (bVar12 == 0x2d) {
    return 4;
  }
  uVar6 = __strtoul_internal(param_1,param_2,param_3,0);
  pbVar5 = *param_2;
  if (pbVar5 == param_1) {
    if ((param_5 == (char *)0x0) || (bVar12 = *param_1, bVar12 == 0)) {
      return 4;
    }
    uVar14 = 0;
    uVar6 = 1;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) {
      return 4;
    }
  }
  else {
    if (*piVar3 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
      if (*piVar3 != 0x22) {
        return 4;
      }
    }
    uVar13 = (uint)uVar14;
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00408ff2;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_004090dc_caseD_1;
  }
  uVar13 = (uint)uVar14;
  uVar9 = bVar12 - 0x45;
  bVar8 = (byte)uVar9;
  if (((bVar8 < 0x30) && ((0x814400308945U >> ((ulong)uVar9 & 0x3f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar1 = pbVar5[1];
    if (bVar1 != 0x44) {
      if (bVar1 == 0x69) {
        uVar11 = 0x400;
        iVar15 = (pbVar5[2] == 0x42) + 1 + (uint)(pbVar5[2] == 0x42);
        goto LAB_004090ca;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x004090b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00410958)[bVar8])();
        return uVar6;
      }
    }
    iVar15 = 2;
    uVar11 = 1000;
  }
  else {
    iVar15 = 1;
    uVar11 = 0x400;
  }
LAB_004090ca:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00409137;
  default:
switchD_004090dc_caseD_1:
    *param_4 = uVar6;
    return (ulong)(uVar13 | 2);
  case 3:
    iVar16 = 6;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_004091c4;
  case 5:
  case 0x25:
    uVar11 = (ulong)iVar10;
    if (((SUB168(ZEXT816(uVar6) * ZEXT816(uVar11) >> 0x40,0) != 0) ||
        (auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar11) & (undefined)0xffffffffffffffff) *
                  ZEXT816(uVar11), SUB168(auVar2 >> 0x40,0) != 0)) ||
       (auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816(uVar11),
       uVar6 = SUB168(auVar2,0), SUB168(auVar2 >> 0x40,0) != 0)) {
      uVar6 = 0xffffffffffffffff;
      uVar14 = 1;
    }
    break;
  case 9:
  case 0x29:
    auVar2 = ZEXT816(uVar6) * ZEXT816(uVar11);
    goto joined_r0x004090fc;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00409137;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x004090fc:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00409137:
      uVar14 = 1;
      uVar6 = 0xffffffffffffffff;
    }
    break;
  case 0xe:
    iVar16 = 5;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_004091c4;
  case 0x12:
  case 0x32:
    iVar16 = 4;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_004091c4;
  case 0x17:
    iVar16 = 8;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_004091c4;
  case 0x18:
    iVar16 = 7;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
LAB_004091c4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00409137;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00409137;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00408ff2:
  *param_4 = uVar6;
  return uVar14;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined * FUN_00409390(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  char *__s;
  size_t sVar3;
  ulong uVar4;
  undefined *puVar5;
  int *piVar6;
  char **ppcVar7;
  ulong uVar8;
  undefined *__dest;
  long lVar9;
  bool bVar10;
  ulong local_50;
  char **ppcStack_48;
  
  local_50 = *param_2;
  ppcStack_48 = (char **)param_2[1];
  uVar2 = param_2[2];
  if (param_1 == 0) {
    __dest = (undefined *)FUN_00408cc0(1);
    puVar5 = __dest;
  }
  else {
    uVar8 = 0;
    lVar9 = param_1;
    do {
      uVar4 = local_50 & 0xffffffff;
      if ((uint)local_50 < 0x30) {
        local_50 = (ulong)((uint)local_50 + 8);
        ppcVar7 = (char **)(uVar4 + uVar2);
      }
      else {
        ppcVar7 = ppcStack_48;
        ppcStack_48 = ppcStack_48 + 1;
      }
      sVar3 = strlen(*ppcVar7);
      bVar10 = CARRY8(uVar8,sVar3);
      uVar8 = uVar8 + sVar3;
      if (bVar10) {
        uVar8 = 0xffffffffffffffff;
      }
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if (0x7fffffff < uVar8) {
      piVar6 = __errno_location();
      *piVar6 = 0x4b;
      return (undefined *)0x0;
    }
    puVar5 = (undefined *)FUN_00408cc0(uVar8 + 1);
    __dest = puVar5;
    do {
      uVar1 = *(uint *)param_2;
      if (uVar1 < 0x30) {
        ppcVar7 = (char **)((ulong)uVar1 + param_2[2]);
        *(uint *)param_2 = uVar1 + 8;
      }
      else {
        ppcVar7 = (char **)param_2[1];
        param_2[1] = (ulong)(ppcVar7 + 1);
      }
      __s = *ppcVar7;
      sVar3 = strlen(__s);
      memcpy(__dest,__s,sVar3);
      __dest = __dest + sVar3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *__dest = 0;
  return puVar5;
}


undefined FUN_004094c0(char *param_1,undefined param_2)

{
  int iVar1;
  long lVar2;
  undefined uVar3;
  int *piVar4;
  undefined local_10 [2];
  
  if (*param_1 != '\0') {
    if ((*param_1 == '%') && (param_1[1] == 's')) {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + 1;
        if (param_1[lVar2 * 2] == '\0') goto LAB_004094f8;
      } while ((param_1[lVar2 * 2] == '%') && (param_1[lVar2 * 2 + 1] == 's'));
    }
    iVar1 = FUN_0040a600(local_10,param_1,param_2);
    if (-1 < iVar1) {
      return local_10[0];
    }
    piVar4 = __errno_location();
    if (*piVar4 != 0xc) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00408f10();
  }
  lVar2 = 0;
LAB_004094f8:
  uVar3 = FUN_00409390(lVar2);
  return uVar3;
}


int FUN_00409550(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004095b7;
    }
    iVar1 = FUN_00409710(param_1);
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
LAB_004095b7:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_004095d0(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_006147d8 < 0) {
    iVar1 = FUN_004095d0(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_006147d8 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_006147d8 = 1;
      return iVar1;
    }
    iVar1 = FUN_004095d0(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_006147d8 = -1;
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


void FUN_00409710(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00409750(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00409750(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_004097b0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040982c;
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
      if (iVar9 <= iVar3) goto LAB_0040982c;
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
LAB_0040982c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00409890(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00409ab0;
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
            if (local_70 == (char *)0x0) goto LAB_004099f0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_004099f0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_004099f0:
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
              __fprintf_chk(__stream,1,&DAT_00410d89,param_9,*param_4);
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
LAB_00409ab0:
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


uint FUN_00409eb0(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00409efa:
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
          goto LAB_00409ffd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00409ffd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_0040a008:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00409f78;
LAB_0040a01c:
    if (*pbVar8 == 0) goto LAB_00409f78;
  }
  else {
    if (param_7[6] == 0) goto LAB_00409efa;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_0040a008;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040a01c;
LAB_00409f78:
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
        FUN_004097b0(param_2,param_7);
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
LAB_0040a0e6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00410d91;
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
          FUN_004097b0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_0040a0e6;
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
        puVar15 = &DAT_00410d91;
        goto LAB_0040a245;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_0040a1f0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00409890(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00410d92);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_0040a1f0:
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
  puVar15 = &DAT_00410db0;
LAB_0040a245:
  uVar3 = FUN_00409890(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a480(void)

{
  DAT_006147e0 = DAT_0061433c;
  _DAT_006147e4 = DAT_00614338;
  FUN_00409eb0();
  DAT_0061433c = DAT_006147e0;
  _DAT_00614820 = DAT_006147f0;
  _DAT_00614334 = DAT_006147e8;
  return;
}


void FUN_0040a4e0(void)

{
  FUN_0040a480();
  return;
}


void FUN_0040a500(void)

{
  FUN_0040a480();
  return;
}


void FUN_0040a520(void)

{
  FUN_00409eb0();
  return;
}


void FUN_0040a540(void)

{
  FUN_0040a480();
  return;
}


void FUN_0040a560(void)

{
  FUN_00409eb0();
  return;
}


size_t FUN_0040a580(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x410daf;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_0040a5a4;
  }
  param_1 = &local_1c;
LAB_0040a5a4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_0040a9f0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_0040a600(void **param_1,undefined param_2,undefined param_3)

{
  void *__ptr;
  int *piVar1;
  ulong local_10;
  
  __ptr = (void *)FUN_0040afc0(0,&local_10,param_2,param_3);
  if (__ptr == (void *)0x0) {
    local_10 = 0xffffffff;
  }
  else if (local_10 < 0x80000000) {
    *param_1 = __ptr;
    local_10 = local_10 & 0xffffffff;
  }
  else {
    free(__ptr);
    piVar1 = __errno_location();
    *piVar1 = 0x4b;
    local_10 = 0xffffffff;
  }
  return local_10;
}


void FUN_0040a660(void)

{
  FUN_00405460(1);
  return;
}


long FUN_0040a670(char *param_1,char **param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  size_t sVar4;
  long lVar5;
  void *__s2;
  char *__s1;
  long local_58;
  
  __n = strlen(param_1);
  __s1 = *param_2;
  local_58 = -1;
  lVar2 = local_58;
  if (__s1 != (char *)0x0) {
    bVar1 = false;
    lVar2 = 0;
    __s2 = param_3;
LAB_0040a707:
    do {
      lVar5 = lVar2;
      iVar3 = strncmp(__s1,param_1,__n);
      if (iVar3 == 0) {
        sVar4 = strlen(__s1);
        if (sVar4 == __n) {
          return lVar5;
        }
        if (local_58 == -1) {
          __s2 = (void *)((long)__s2 + param_4);
          __s1 = param_2[lVar5 + 1];
          lVar2 = lVar5 + 1;
          local_58 = lVar5;
          if (__s1 == (char *)0x0) break;
          goto LAB_0040a707;
        }
        if (param_3 == (void *)0x0) {
          bVar1 = true;
        }
        else {
          iVar3 = memcmp((void *)(local_58 * param_4 + (long)param_3),__s2,param_4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      __s2 = (void *)((long)__s2 + param_4);
      __s1 = param_2[lVar5 + 1];
      lVar2 = lVar5 + 1;
    } while (__s1 != (char *)0x0);
    lVar2 = -2;
    if (!bVar1) {
      lVar2 = local_58;
    }
  }
  local_58 = lVar2;
  return local_58;
}


void FUN_0040a790(undefined param_1,undefined param_2,long param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  uVar2 = FUN_00408610(1,param_1);
  uVar3 = FUN_00408300(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_0040a810(long *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined uVar3;
  long lVar4;
  void *__s2;
  long lVar5;
  void *__s1;
  
  __stream = stderr;
  __s1 = (void *)0x0;
  pcVar2 = (char *)dcgettext(0,"Valid arguments are:",5);
  lVar4 = 0;
  fputs_unlocked(pcVar2,__stream);
  lVar5 = *param_1;
  while (lVar5 != 0) {
    while ((__s2 = param_2, lVar4 == 0 || (iVar1 = memcmp(__s1,__s2,param_3), iVar1 != 0))) {
      lVar4 = lVar4 + 1;
      uVar3 = FUN_00408630(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_0040a8e0;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00408630(lVar5);
    __fprintf_chk(stderr,1,", %s",uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_0040a8e0:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_0040a930(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_0040a670(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_0040a790(param_1,param_2,lVar1);
    FUN_0040a810(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_0040a9a0(void *param_1,long *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_2 = param_2 + 1;
    do {
      iVar1 = memcmp(param_1,param_3,param_4);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = *param_2;
      param_3 = (void *)((long)param_3 + param_4);
      param_2 = param_2 + 1;
    } while (lVar2 != 0);
  }
  return lVar2;
}


bool FUN_0040a9f0(int param_1)

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
    pbVar5 = &DAT_00410e09;
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

char * FUN_0040aa50(void)

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
  if (DAT_00614818 != (char *)0x0) goto LAB_0040aa8a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040ab75:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040ab96;
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
        goto LAB_0040ab75;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040ab96:
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
LAB_0040ac30:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040adbc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040ac30;
              if (uVar4 == 0x23) goto LAB_0040ae21;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040adcf;
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
                FUN_00409550(__stream);
                goto LAB_0040abd4;
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
LAB_0040adbc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040adcf;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040abce;
    }
  }
  DAT_00614818 = "";
LAB_0040aa8a:
  cVar1 = *DAT_00614818;
  pcVar7 = DAT_00614818;
  do {
    if (cVar1 == '\0') {
LAB_0040aae4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040aae4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040ae21:
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
  if (uVar4 == 0xffffffff) goto LAB_0040adcf;
  goto LAB_0040ac30;
LAB_0040adcf:
  FUN_00409550(__stream);
  if (local_d0 == 0) {
LAB_0040abce:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040abd4:
  free(__file);
  DAT_00614818 = pcVar7;
  goto LAB_0040aa8a;
}


/* WARNING: Removing unreachable block (ram,0x0040c7fc) */
/* WARNING: Removing unreachable block (ram,0x0040c93d) */
/* WARNING: Removing unreachable block (ram,0x0040c810) */
/* WARNING: Removing unreachable block (ram,0x0040bce4) */
/* WARNING: Removing unreachable block (ram,0x0040b2b0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined *
FUN_0040afc0(undefined *param_1,undefined *param_2,undefined *param_3,undefined param_4)

{
  undefined uVar1;
  unkbyte10 Var2;
  undefined uVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *__n;
  undefined *puVar13;
  undefined *puVar14;
  uint *puVar15;
  int *piVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  char *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  char *pcVar25;
  char *pcVar26;
  undefined *puVar27;
  size_t sVar28;
  uint uVar29;
  long lVar30;
  undefined *puVar31;
  undefined *puVar32;
  bool bVar33;
  ushort in_FPUControlWord;
  float fVar34;
  undefined auStack_6f8 [4];
  uint local_6f4;
  undefined *local_6f0;
  undefined *local_6e8;
  undefined *local_6e0;
  undefined *local_6d8;
  undefined *local_6d0;
  undefined *local_6c8;
  long local_6c0;
  undefined local_6b8;
  undefined *local_6b0;
  undefined local_6a8 [4];
  undefined auStack_6a4 [12];
  undefined *local_698;
  undefined *local_690;
  int local_684;
  undefined local_680;
  uint local_67c;
  undefined local_678 [8];
  undefined *local_670;
  undefined auStack_668 [112];
  long local_588;
  undefined *local_580;
  long local_578;
  ulong local_570;
  undefined auStack_568 [78];
  undefined local_2f8 [356];
  
  local_6d8 = param_2;
  local_690 = param_1;
  iVar10 = FUN_0040cd00(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined *)0x0;
  }
  iVar10 = FUN_0040cae0(param_4,local_678);
  if (iVar10 < 0) {
    if (local_580 != auStack_568) {
      free(local_580);
    }
    if (local_670 != auStack_668) {
      free(local_670);
    }
    piVar16 = __errno_location();
    *piVar16 = 0x16;
    return (undefined *)0x0;
  }
  uVar11 = local_578 + 7;
  if (uVar11 < 7) {
    uVar11 = 0xffffffffffffffff;
  }
  uVar12 = uVar11 + local_570;
  puVar27 = auStack_6f8;
  if ((!CARRY8(uVar11,local_570)) &&
     (sVar28 = uVar12 + 6, puVar27 = auStack_6f8, uVar12 < 0xfffffffffffffffa)) {
    if (sVar28 < 4000) {
      local_6e0 = (undefined *)0x0;
      lVar30 = -(uVar12 + 0x1d & 0xfffffffffffffff0);
      puVar27 = auStack_6f8 + lVar30;
      local_6b0 = (undefined *)((long)&local_6f0 + lVar30);
LAB_0040b084:
      puVar31 = (undefined *)0x0;
      if (local_690 != (undefined *)0x0) {
        puVar31 = (undefined *)*local_6d8;
      }
      __n = (undefined *)0x0;
      local_6c0 = 0;
      puVar24 = (undefined *)*local_580;
      puVar20 = local_690;
      _local_6a8 = (int *)param_3;
      puVar32 = local_580;
      puVar14 = __n;
      if (puVar24 == param_3) goto LAB_0040b238;
      do {
        puVar24 = (undefined *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_0040b1ce:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_0040b5b0;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_0040b1ce;
          }
          if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined *)_local_6a8;
            _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x40b12c;
            puVar13 = (undefined *)malloc((size_t)puVar31);
            if (puVar13 == (undefined *)0x0) goto LAB_0040b5b0;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined *)(puVar27 + -8) = 0x40b17a;
              puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x40b20f;
            puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined *)0x0) {
LAB_0040b7c5:
              *(undefined *)(puVar27 + -8) = 0x40b7ca;
              piVar16 = __errno_location();
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_0040b7d8;
            }
            puVar24 = local_698;
          }
        }
        *(undefined *)(puVar27 + -8) = 0x40b238;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_0040b238:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_0040c3c2;
              goto LAB_0040b5b0;
            }
            if (puVar14 <= puVar31) goto LAB_0040c3c2;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_0040c99f:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_0040b5b0;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_0040c99f;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined *)0x0) || (bVar33)) {
              *(undefined *)(puVar27 + -8) = 0x40c959;
              puVar24 = (undefined *)malloc((size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_0040b5b0;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined *)(puVar27 + -8) = 0x40c985;
                puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined *)(puVar27 + -8) = 0x40c3b6;
              puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_0040b7c5;
            }
LAB_0040c3c2:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined *)(puVar27 + -8) = 0x40c3e0;
              puVar20 = (undefined *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined *)(puVar27 + -8) = 0x40c3fb;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined *)(puVar27 + -8) = 0x40c417;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined *)(puVar27 + -8) = 0x40c433;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_0040bcec;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_0040bf62:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_0040b5b0;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_0040bf62;
                }
                if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined *)(puVar27 + -8) = 0x40beae;
                  puVar24 = (undefined *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_0040b5b0;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined *)(puVar27 + -8) = 0x40bee0;
                    puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined *)(puVar27 + -8) = 0x40b6a6;
                  puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_0040b7c5;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_0040b6b7;
          }
          if (lVar30 == -1) goto LAB_0040bcec;
          puVar15 = (uint *)(local_670 + lVar30 * 0x10);
          uVar4 = *puVar15;
          local_698 = (undefined *)((ulong)local_698 & 0xffffffff00000000 | (ulong)uVar4);
          if (bVar8 == 0x6e) {
            switch(uVar4) {
            case 0x12:
              **(undefined **)(puVar15 + 4) = (char)__n;
              break;
            case 0x13:
              **(undefined **)(puVar15 + 4) = (short)__n;
              break;
            case 0x14:
              **(undefined **)(puVar15 + 4) = (int)__n;
              break;
            case 0x15:
            case 0x16:
              **(undefined **)(puVar15 + 4) = __n;
              break;
            default:
switchD_0040b71c_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar27 + -8) = 0x401fc3;
              abort();
            }
          }
          else {
            bVar8 = bVar8 & 0xdf;
            if (((((byte)(bVar8 + 0xbb) < 3) || (bVar8 == 0x41)) && (uVar4 == 0xc)) &&
               (fVar34 = *(float *)(puVar15 + 4), fVar34 == fVar34 + fVar34)) {
              pcVar21 = (char *)puVar32[4];
              local_6b8._0_4_ = *(uint *)(puVar32 + 2);
              if ((char *)puVar32[3] == pcVar21) {
                puVar24 = (undefined *)0x0;
              }
              else {
                puVar13 = (undefined *)puVar32[5];
                if (puVar13 == (undefined *)0xffffffffffffffff) {
                  puVar24 = (undefined *)0x0;
                  local_698 = puVar13;
                  pcVar25 = (char *)puVar32[3];
                  do {
                    pcVar26 = pcVar25 + 1;
                    uVar11 = 0xffffffffffffffff;
                    if (puVar24 < (undefined *)0x199999999999999a) {
                      uVar11 = (long)puVar24 * 10;
                    }
                    puVar24 = (undefined *)((long)(*pcVar25 + -0x30) + uVar11);
                    pcVar6 = pcVar26;
                    if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                      do {
                        puVar24 = local_698;
                        if (pcVar21 == pcVar6) goto LAB_0040b540;
                        pcVar26 = pcVar6 + 1;
                        cVar9 = *pcVar6;
                        pcVar6 = pcVar26;
                      } while (cVar9 != '0');
                      puVar24 = (undefined *)0xffffffffffffffff;
                    }
                    pcVar25 = pcVar26;
                  } while (pcVar21 != pcVar26);
                }
                else {
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_0040bcec;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined *)-(long)(undefined *)(long)iVar10;
                  }
                }
              }
LAB_0040b540:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_0040bbf0:
                puVar18 = (undefined *)0xc;
                if (bVar8 != 0x41) {
                  puVar18 = (undefined *)0x12;
                }
                puVar13 = (undefined *)0x0;
                if (bVar8 != 0x41) {
                  puVar13 = (undefined *)0x6;
                }
              }
              else {
                if (puVar32[8] == -1) {
                  pcVar25 = (char *)puVar32[6] + 1;
                  puVar13 = (undefined *)0x0;
                  if (pcVar21 != pcVar25) {
                    do {
                      pcVar26 = pcVar25 + 1;
                      uVar11 = 0xffffffffffffffff;
                      if (puVar13 < (undefined *)0x199999999999999a) {
                        uVar11 = (long)puVar13 * 10;
                      }
                      puVar13 = (undefined *)((long)(*pcVar25 + -0x30) + uVar11);
                      pcVar6 = pcVar26;
                      if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                        do {
                          if (pcVar21 == pcVar6) goto LAB_0040b5b0;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_0040b57c;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_0040bcec;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_0040bbf0;
LAB_0040b57c:
                  if (puVar13 != (undefined *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined *)0xfffffffffffffff4) goto LAB_0040bc0e;
                    goto LAB_0040b5b0;
                  }
                }
                puVar18 = (undefined *)0xc;
              }
LAB_0040bc0e:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
              if (puVar17 < (undefined *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
                *(undefined *)(puVar27 + -8) = 0x40bc62;
                puVar18 = (undefined *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined *)0x0) goto LAB_0040b5b0;
              }
              uVar4 = local_680 & 0xffff0000;
              uVar29 = (uint)in_FPUControlWord;
              local_680 = uVar4 | uVar29;
              uVar7 = local_680;
              local_680 = local_680 | 0x300;
              if ((float)0 <= fVar34) {
                if (((uint)local_6b8 & 4) == 0) {
                  puVar17 = puVar18;
                  if (((uint)local_6b8 & 8) != 0) {
                    puVar17 = (undefined *)((long)puVar18 + 1);
                    *(undefined *)puVar18 = 0x20;
                  }
                }
                else {
                  *(undefined *)puVar18 = 0x2b;
                  puVar17 = (undefined *)((long)puVar18 + 1);
                }
              }
              else {
                *(undefined *)puVar18 = 0x2d;
                fVar34 = -fVar34;
                puVar17 = (undefined *)((long)puVar18 + 1);
              }
              local_680._2_2_ = (undefined)(uVar4 >> 0x10);
              if (fVar34 <= (float)0) {
                if (fVar34 != (float)0) goto LAB_0040bcec;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined *)0x0)) {
LAB_0040c137:
                    puVar13 = (undefined *)((long)puVar17 + 1);
                  }
                  else {
                    local_6f0 = (undefined *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined *)(puVar27 + -8) = 0x40c671;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = (undefined *)_local_6a8;
                    puVar24 = local_6e8;
                    if (local_6c8 != (undefined *)0x0) {
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined *)((long)(puVar17 + 1) + (long)local_6c8));
                      puVar13 = (undefined *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                }
                else if (bVar8 == 0x45) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (_local_6a8 = (int *)((long)puVar17 + 1), puVar13 != (undefined *)0x0)) {
                    local_6f0 = (undefined *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined *)(puVar27 + -8) = 0x40c8cf;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar24 = local_6e8;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (local_6c8 != (undefined *)0x0) {
                      puVar14 = (undefined *)_local_6a8;
                      do {
                        puVar23 = puVar14 + 1;
                        *puVar14 = 0x30;
                        puVar14 = puVar23;
                      } while (puVar23 != (undefined *)((long)(puVar17 + 1) + (long)local_6c8));
                      _local_6a8 = (int *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                  uVar3 = *(undefined *)(puVar32 + 9);
                  puVar13 = (undefined *)((long)_local_6a8 + 4);
                  *(undefined *)((long)_local_6a8 + 3) = 0x30;
                  *(undefined *)_local_6a8 = uVar3;
                  *(undefined *)((long)_local_6a8 + 1) = 0x302b;
                }
                else if (bVar8 == 0x47) {
                  *(undefined *)puVar17 = 0x30;
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_0040c137;
                  if (puVar13 == (undefined *)0x0) {
                    local_6e8 = (undefined *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined *)(puVar27 + -8) = 0x40ca87;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6e8;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6b8;
                    puVar13 = local_6c8;
                    puVar24 = local_6d0;
                    local_6b8._0_4_ = (uint)local_6a8;
                  }
                  else {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar17 + 1;
                    local_6d0 = puVar18;
                    local_6c8 = (undefined *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar13;
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,
                                                   (undefined *)((long)puVar13 + -1));
                    *(undefined *)(puVar27 + -8) = 0x40c59d;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f4;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = local_6e8;
                    puVar24 = local_6f0;
                    local_6b8._0_4_ = (uint)local_6c8;
                    if (_local_6a8 != (int *)0x0) {
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 !=
                               (undefined *)((undefined *)((long)puVar17 + 1) + (long)local_6b8));
                      puVar13 = (undefined *)((long)local_6e8 + (long)_local_6a8);
                    }
                  }
                }
                else {
                  if (bVar8 != 0x41) goto LAB_0040bcec;
                  *(undefined *)puVar17 = 0x30;
                  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                  cVar9 = *(char *)(puVar32 + 9);
                  *(undefined *)(puVar17 + 1) = 0x30;
                  *(char *)((long)puVar17 + 1) = cVar9 + '\x17';
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (puVar22 = (undefined *)((long)puVar17 + 3), puVar13 != (undefined *)0x0)) {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar18;
                    local_6d0 = puVar13;
                    local_6c8 = (undefined *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar17 + 2;
                    *(undefined *)(puVar27 + -8) = 0x40c9e9;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 3) = cVar9;
                    puVar18 = local_6e8;
                    puVar22 = local_6b8;
                    puVar24 = local_6f0;
                    local_6b8._0_4_ = (uint)local_6c8;
                    uVar29 = local_6f4;
                    if (local_6d0 != (undefined *)0x0) {
                      puVar13 = local_6b8;
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined *)((long)(puVar17 + 2) + (long)local_6d0));
                      puVar22 = (undefined *)((long)local_6b8 + (long)local_6d0);
                    }
                  }
                  in_FPUControlWord = (ushort)uVar29;
                  cVar9 = *(char *)(puVar32 + 9);
                  puVar13 = (undefined *)((long)puVar22 + 3);
                  *(undefined *)((long)puVar22 + 1) = 0x302b;
                  *(char *)puVar22 = cVar9 + '\x0f';
                  puVar17 = (undefined *)_local_6a8;
                }
              }
              else {
                if (fVar34 + fVar34 != fVar34) goto LAB_0040bcec;
                puVar13 = (undefined *)((long)puVar17 + 3);
                if ((byte)(*(char *)(puVar32 + 9) + 0xbfU) < 0x1a) {
                  *(undefined *)(puVar17 + 1) = 0x46;
                  *puVar17 = 0x4e49;
                  puVar17 = (undefined *)0x0;
                }
                else {
                  *(undefined *)(puVar17 + 1) = 0x66;
                  *puVar17 = 0x6e69;
                  puVar17 = (undefined *)0x0;
                }
              }
              local_680 = CONCAT22(local_680._2_2_,in_FPUControlWord);
              _local_6a8 = (int *)((long)puVar13 - (long)puVar18);
              if (_local_6a8 < puVar24) {
                lVar30 = (long)puVar24 - (long)_local_6a8;
                puVar24 = (undefined *)((long)puVar13 + lVar30);
                _local_6a8 = (int *)((long)puVar24 - (long)puVar18);
                if (((uint)local_6b8 & 2) == 0) {
                  if ((((uint)local_6b8 & 0x20) == 0) || (puVar17 == (undefined *)0x0)) {
                    puVar14 = (undefined *)0xffffffffffffffff;
                    puVar17 = puVar13;
                    if (puVar18 < puVar13) {
                      do {
                        *(undefined *)((long)puVar24 + (long)puVar14) =
                             *(undefined *)((long)puVar13 + (long)puVar14);
                        puVar14 = puVar14 + -1;
                        puVar17 = puVar18;
                      } while ((undefined *)((long)puVar18 + (-1 - (long)puVar13)) != puVar14);
                    }
                    if (lVar30 != 0) {
                      puVar24 = puVar17;
                      do {
                        puVar13 = (undefined *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x20;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined *)(lVar30 + (long)puVar17));
                    }
                  }
                  else {
                    puVar22 = puVar13;
                    if (puVar17 < puVar13) {
                      puVar14 = (undefined *)0xffffffffffffffff;
                      do {
                        *(undefined *)((long)puVar24 + (long)puVar14) =
                             *(undefined *)((long)puVar13 + (long)puVar14);
                        puVar14 = puVar14 + -1;
                        puVar22 = puVar17;
                      } while (puVar14 != (undefined *)((long)puVar17 + (-1 - (long)puVar13)));
                    }
                    if (lVar30 != 0) {
                      puVar24 = puVar22;
                      do {
                        puVar13 = (undefined *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x30;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined *)(lVar30 + (long)puVar22));
                    }
                  }
                }
                else if (lVar30 != 0) {
                  do {
                    puVar17 = (undefined *)((long)puVar13 + 1);
                    *(undefined *)puVar13 = 0x20;
                    puVar13 = puVar17;
                  } while (puVar24 != puVar17);
                }
              }
              if (local_698 <= _local_6a8) {
LAB_0040bcec:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_0040bcf1;
                abort();
              }
              puVar14 = __n + (long)_local_6a8;
              puVar24 = puVar20;
              if (puVar31 + -(long)__n <= _local_6a8) {
                if (CARRY8((ulong)__n,(ulong)_local_6a8) == false) {
                  if (puVar31 < puVar14) {
                    if (puVar31 == (undefined *)0x0) {
                      if (puVar14 < (undefined *)0xd) {
                        puVar31 = (undefined *)0xc;
                      }
                      else {
LAB_0040c7ea:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_0040b5b0;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_0040c7ea;
                    }
                    if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x40c4d7;
                      puVar24 = (undefined *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_0040b5b0;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined *)(puVar27 + -8) = 0x40c525;
                        puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x40c252;
                      puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_0040b5b0;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
              }
              local_698 = puVar18;
              *(undefined *)(puVar27 + -8) = 0x40c286;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined *)(puVar27 + -8) = 0x40c2a5;
                free(puVar13);
              }
            }
            else {
              uVar4 = *(uint *)(puVar32 + 2);
              puVar24 = (undefined *)(local_6b0 + 1);
              *local_6b0 = 0x25;
              if ((uVar4 & 1) != 0) {
                local_6b0[1] = 0x27;
                puVar24 = (undefined *)(local_6b0 + 2);
              }
              if ((uVar4 & 2) != 0) {
                *(undefined *)puVar24 = 0x2d;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 4) != 0) {
                *(undefined *)puVar24 = 0x2b;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 8) != 0) {
                *(undefined *)puVar24 = 0x20;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x10) != 0) {
                *(undefined *)puVar24 = 0x23;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x40) != 0) {
                *(undefined *)puVar24 = 0x49;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x20) != 0) {
                *(undefined *)puVar24 = 0x30;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              pvVar5 = (void *)puVar32[3];
              puVar13 = local_670;
              if (pvVar5 != (void *)puVar32[4]) {
                local_6b8 = local_670;
                sVar28 = (long)(void *)puVar32[4] - (long)pvVar5;
                _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined *)(puVar27 + -8) = 0x40b359;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined *)(puVar27 + -8) = 0x40b396;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              if ((uint)local_698 < 0x11) {
                uVar11 = 1L << ((byte)local_698 & 0x3f);
                if ((uVar11 & 0x14180) == 0) {
                  if ((uVar11 & 0x1000) == 0) {
                    if ((uVar11 & 0x600) != 0) {
                      *(undefined *)puVar24 = 0x6c;
                      puVar24 = (undefined *)((long)puVar24 + 1);
                      goto LAB_0040b7b8;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_0040b7b8:
                  *(undefined *)puVar24 = 0x6c;
                  puVar24 = (undefined *)((long)puVar24 + 1);
                }
              }
              uVar3 = *(undefined *)(puVar32 + 9);
              *(undefined *)((long)puVar24 + 1) = 0;
              *(undefined *)puVar24 = uVar3;
              if (puVar32[5] == -1) {
                local_6b8 = (undefined *)((ulong)local_6b8._4_4_ << 0x20);
              }
              else {
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_0040bcec;
                local_6b8 = (undefined *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_0040bcec;
                (&local_680)[(ulong)local_6b8 & 0xffffffff] =
                     *(int *)((long)(puVar13 + puVar32[8] * 0x10) + 0x10);
                local_6b8 = (undefined *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)((uint)local_6b8 + 1));
              }
              puVar14 = __n + 2;
              puVar13 = puVar20;
              if (__n < (undefined *)0xfffffffffffffffe) {
                if (puVar31 < puVar14) {
                  if (puVar31 == (undefined *)0x0) {
                    if (puVar14 < (undefined *)0xd) {
                      puVar31 = (undefined *)0xc;
                    }
                    else {
LAB_0040bba2:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_0040b5b0;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_0040bba2;
                  }
                  if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined *)(puVar27 + -8) = 0x40be4e;
                    puVar13 = (undefined *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_0040b5b0;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined *)(puVar27 + -8) = 0x40be80;
                      puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined *)(puVar27 + -8) = 0x40b4a8;
                    puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_0040b5b0;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040b5b0;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined *)(puVar27 + -8) = 0x40b4c5;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_0040b4e8:
              uVar4 = local_680;
              puVar14 = local_6b0;
              local_684 = -1;
              uVar12 = (long)puVar31 - (long)__n;
              *_local_6a8 = 0;
              uVar11 = 0x7fffffff;
              if (uVar12 < 0x80000000) {
                uVar11 = uVar12;
              }
              switch((ulong)local_698 & 0xffffffff) {
              default:
                goto switchD_0040b71c_caseD_5;
              case 1:
                uVar19 = (ulong)(uint)(int)*(char *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 2:
                uVar19 = (ulong)*(byte *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 3:
                uVar19 = (ulong)(uint)(int)(short)local_670[puVar32[10] * 0x10 + 8];
                break;
              case 4:
                uVar19 = (ulong)(ushort)local_670[puVar32[10] * 0x10 + 8];
                break;
              case 5:
              case 6:
              case 0xd:
              case 0xe:
                uVar19 = (ulong)*(uint *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 7:
              case 8:
              case 9:
              case 10:
              case 0xf:
              case 0x10:
              case 0x11:
                piVar16 = *(int **)(local_670 + puVar32[10] * 0x10 + 8);
                local_6d0 = puVar13;
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -8) = &local_684;
                  *(int **)(puVar27 + -0x10) = piVar16;
                  goto LAB_0040bdc2;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_0040b82a:
                  puVar14 = local_6b0;
                  *(undefined *)(puVar27 + -0x18) = 0x40b847;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_0040b850;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_0040bd76;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined *)(puVar27 + -8) = 0x40bb1e;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_0040b850;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x40bfbe;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_0040b850;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_0040b82a;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined *)(puVar27 + -0x38) = 0x40c01f;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_0040b850;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_0040bd7d;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_0040bdc2:
                uVar19 = (ulong)local_680;
LAB_0040b96a:
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x40b987;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_0040b85e;
LAB_0040b99e:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                      *(undefined *)(puVar27 + -8) = 0x40b9f4;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined *)(puVar27 + -8) = 0x40ba08;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined *)(puVar27 + -8) = 0x40ba24;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined *)(puVar27 + -8) = 0x40ba40;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined *)0x0;
                  }
                  goto LAB_0040b878;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_0040b4e8;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_0040b96a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_0040bd76:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_0040bd7d:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined *)(puVar27 + -0x28) = 0x40bda1;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_0040b850:
              if (local_684 < 0) goto LAB_0040b99e;
LAB_0040b85e:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_0040bcec;
              if (local_684 < iVar10) {
LAB_0040b878:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                    *(undefined *)(puVar27 + -8) = 0x40c086;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined *)(puVar27 + -8) = 0x40c09a;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined *)(puVar27 + -8) = 0x40c0b6;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined *)(puVar27 + -8) = 0x40c0d2;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040b5bf;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_0040b5bf;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_0040b5bf;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined *)0x0) || (bVar33)) {
                      *(undefined *)(puVar27 + -8) = 0x40bd1f;
                      puVar13 = (undefined *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_0040b5bf;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined *)(puVar27 + -8) = 0x40bd4d;
                        puVar13 = (undefined *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined *)(puVar27 + -8) = 0x40b90d;
                      puVar13 = (undefined *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_0040b5bf;
                    }
                  }
                }
                goto LAB_0040b4e8;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_0040b6b7:
          _local_6a8 = (int *)puVar32[1];
          puVar32 = puVar32 + 0xb;
          puVar24 = (undefined *)*puVar32;
          local_6c0 = local_6c0 + 1;
          puVar14 = __n;
        } while ((int *)puVar24 == _local_6a8);
      } while( true );
    }
    puVar27 = auStack_6f8;
    if (sVar28 != 0xffffffffffffffff) {
      local_6b0 = (undefined *)malloc(sVar28);
      puVar27 = auStack_6f8;
      if (local_6b0 != (undefined *)0x0) {
        local_6e0 = local_6b0;
        puVar27 = auStack_6f8;
        goto LAB_0040b084;
      }
    }
  }
  goto LAB_0040b6e0;
LAB_0040b5b0:
  *(undefined *)(puVar27 + -8) = 0x40b5b5;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_0040b5bf:
  if ((puVar20 != local_690) && (puVar20 != (undefined *)0x0)) {
LAB_0040b7d8:
    *(undefined *)(puVar27 + -8) = 0x40b7e0;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined *)(puVar27 + -8) = 0x40b5e9;
    free(puVar31);
    goto LAB_0040b5e9;
  }
LAB_0040b6e0:
  *(undefined *)(puVar27 + -8) = 0x40b6e5;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_0040b5e9:
  if (local_580 != auStack_568) {
    *(undefined *)(puVar27 + -8) = 0x40b605;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined *)(puVar27 + -8) = 0x40b621;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined *)0x0;
}


undefined FUN_0040cae0(uint *param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  unkbyte10 *pVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char **ppcVar9;
  
  puVar2 = (undefined *)param_2[1];
  if (*param_2 != 0) {
    uVar6 = 0;
    do {
      switch(*puVar2) {
      default:
        return 0xffffffff;
      case 1:
      case 2:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        *(char *)(puVar2 + 4) = (char)*puVar8;
        break;
      case 3:
      case 4:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        *(short *)(puVar2 + 4) = (short)*puVar8;
        break;
      case 5:
      case 6:
      case 0xd:
      case 0xe:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        puVar2[4] = *puVar8;
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined *)(puVar2 + 4) = *puVar7;
        break;
      case 0xb:
        uVar1 = param_1[1];
        if (uVar1 < 0xb0) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          param_1[1] = uVar1 + 0x10;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined *)(puVar2 + 4) = *puVar7;
        break;
      case 0xc:
        pVar3 = (unkbyte10 *)(*(long *)(param_1 + 2) + 0xfU & 0xfffffffffffffff0);
        *(long *)(param_1 + 2) = (long)pVar3 + 0x10;
        *(unkbyte10 *)(puVar2 + 4) = *pVar3;
        break;
      case 0xf:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          ppcVar9 = (char **)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          ppcVar9 = *(char ***)(param_1 + 2);
          *(char ***)(param_1 + 2) = ppcVar9 + 1;
        }
        pcVar5 = *ppcVar9;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "(NULL)";
        }
        *(char **)(puVar2 + 4) = pcVar5;
        break;
      case 0x10:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        puVar4 = (undefined *)*puVar7;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = &DAT_00411020;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined FUN_0040cd00(byte *param_1,ulong *param_2,byte **param_3)

{
  ulong *puVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong *__dest;
  ulong uVar8;
  int *piVar9;
  byte **__dest_00;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  byte *pbVar18;
  byte **__ptr;
  byte *pbVar19;
  ulong uVar20;
  ulong *__ptr_00;
  bool bVar21;
  ulong local_78;
  ulong local_70;
  byte *local_68;
  
  puVar1 = param_2 + 4;
  ppbVar2 = param_3 + 2;
  pbVar19 = (byte *)0x7;
  uVar8 = 0;
  *param_2 = 0;
  param_2[1] = (ulong)puVar1;
  *param_3 = (byte *)0x0;
  param_3[1] = (byte *)ppbVar2;
  local_70 = 0;
  local_78 = 0;
  local_68 = (byte *)0x0;
  __dest = puVar1;
  uVar20 = 7;
LAB_0040cd7b:
  do {
    pbVar11 = param_1;
    pbVar12 = (byte *)0xffffffffffffffff;
    if (*pbVar11 == 0) {
      __dest[uVar8 * 0xb] = (ulong)pbVar11;
      param_2[2] = local_78;
      param_2[3] = local_70;
      return 0;
    }
    param_1 = pbVar11 + 1;
  } while (*pbVar11 != 0x25);
  ppbVar3 = (byte **)(__dest + uVar8 * 0xb);
  *ppbVar3 = pbVar11;
  *(undefined *)(ppbVar3 + 2) = 0;
  ppbVar3[3] = (byte *)0x0;
  ppbVar3[4] = (byte *)0x0;
  ppbVar3[5] = (byte *)0xffffffffffffffff;
  ppbVar3[6] = (byte *)0x0;
  ppbVar3[7] = (byte *)0x0;
  ppbVar3[8] = (byte *)0xffffffffffffffff;
  ppbVar3[10] = (byte *)0xffffffffffffffff;
  bVar17 = pbVar11[1];
  pbVar11 = param_1;
  pbVar18 = (byte *)0xffffffffffffffff;
  if (9 < (byte)(bVar17 - 0x30)) {
LAB_0040ce46:
    do {
      pbVar11 = param_1 + 1;
      if (bVar17 == 0x27) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 1;
      }
      else if (bVar17 == 0x2d) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 2;
      }
      else if (bVar17 == 0x2b) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 4;
      }
      else if (bVar17 == 0x20) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 8;
      }
      else if (bVar17 == 0x23) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x10;
      }
      else if (bVar17 == 0x30) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x20;
      }
      else {
        if (bVar17 != 0x49) goto LAB_0040cea8;
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x40;
      }
      bVar17 = *pbVar11;
      param_1 = pbVar11;
    } while( true );
  }
  do {
    bVar4 = pbVar11[1];
    pbVar11 = pbVar11 + 1;
  } while ((byte)(bVar4 - 0x30) < 10);
  pbVar18 = pbVar12;
  if (bVar4 != 0x24) goto LAB_0040ce46;
  pbVar11 = (byte *)0x0;
  do {
    pbVar18 = param_1;
    pbVar14 = (byte *)0xffffffffffffffff;
    if (pbVar11 < (byte *)0x199999999999999a) {
      pbVar14 = (byte *)((long)pbVar11 * 10);
    }
    while( true ) {
      iVar6 = (int)(char)bVar17;
      bVar17 = pbVar18[1];
      pbVar11 = pbVar14 + (iVar6 + -0x30);
      param_1 = pbVar18 + 1;
      if (CARRY8((long)(iVar6 + -0x30),(ulong)pbVar14) == false) break;
      pbVar18 = param_1;
      pbVar14 = pbVar12;
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_0040d087_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_0040ce46;
  }
  goto switchD_0040d087_caseD_26;
LAB_0040cea8:
  if (bVar17 != 0x2a) {
    pbVar12 = local_68;
    if ((byte)(bVar17 - 0x30) < 10) {
      ppbVar3[3] = param_1;
      pbVar14 = param_1;
      uVar8 = local_78;
      if ((byte)(*param_1 - 0x30) < 10) {
        do {
          pbVar11 = pbVar14;
          pbVar14 = pbVar11 + 1;
        } while ((byte)(pbVar11[1] - 0x30) < 10);
        pbVar11 = pbVar11 + 2;
        uVar8 = (long)pbVar14 - (long)param_1;
        if ((ulong)((long)pbVar14 - (long)param_1) <= local_78) {
          uVar8 = local_78;
        }
      }
      local_78 = uVar8;
      ppbVar3[4] = pbVar14;
      bVar17 = *pbVar14;
      param_1 = pbVar14;
    }
joined_r0x0040cfba:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_0040cec1;
    bVar17 = param_1[1];
    ppbVar3[6] = param_1;
    if (bVar17 != 0x2a) {
      if ((byte)(param_1[1] - 0x30) < 10) {
        do {
          pbVar11 = pbVar11 + 1;
        } while ((byte)(*pbVar11 - 0x30) < 10);
        uVar8 = (long)pbVar11 - (long)param_1;
      }
      else {
        uVar8 = 1;
      }
      ppbVar3[7] = pbVar11;
      bVar17 = *pbVar11;
      param_1 = pbVar11;
      if (uVar8 <= local_70) {
        uVar8 = local_70;
      }
      goto LAB_0040cec1;
    }
    pbVar11 = param_1 + 2;
    ppbVar3[7] = pbVar11;
    uVar8 = 2;
    if (1 < local_70) {
      uVar8 = local_70;
    }
    iVar6 = (int)(char)param_1[2];
    pbVar14 = pbVar11;
    if ((byte)(param_1[2] - 0x30) < 10) {
      do {
        bVar17 = pbVar14[1];
        pbVar14 = pbVar14 + 1;
      } while ((byte)(bVar17 - 0x30) < 10);
      if (bVar17 != 0x24) goto LAB_0040cfff;
      uVar16 = 0;
      do {
        pbVar12 = pbVar11;
        uVar15 = 0xffffffffffffffff;
        if (uVar16 < 0x199999999999999a) {
          uVar15 = uVar16 * 10;
        }
        while( true ) {
          iVar7 = iVar6 + -0x30;
          uVar16 = uVar15 + (long)iVar7;
          pbVar11 = pbVar12 + 1;
          iVar6 = (int)(char)*pbVar11;
          bVar17 = *pbVar11 - 0x30;
          if (CARRY8(uVar15,(long)iVar7) == false) break;
          pbVar12 = pbVar11;
          uVar15 = 0xffffffffffffffff;
          if (9 < bVar17) goto switchD_0040d087_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_0040d087_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_0040cfff:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_0040d087_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_0040d01e:
      if (pbVar12 <= pbVar14) {
        do {
          pbVar12 = pbVar12 + 1;
          *(undefined *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
        } while (pbVar12 <= pbVar14);
        *param_3 = pbVar12;
      }
      iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
      param_1 = pbVar11;
      if (iVar6 == 0) {
        *(undefined *)(__dest_00 + (long)pbVar14 * 4) = 5;
        bVar17 = *pbVar11;
LAB_0040cec1:
        local_70 = uVar8;
        uVar5 = 0;
        do {
          param_1 = param_1 + 1;
          if (bVar17 == 0x68) {
            uVar5 = uVar5 | 1 << ((byte)uVar5 & 1);
          }
          else if (bVar17 == 0x4c) {
            uVar5 = uVar5 | 4;
          }
          else {
            if ((((bVar17 != 0x6c) && (bVar17 != 0x6a)) && ((bVar17 & 0xdf) != 0x5a)) &&
               (bVar17 != 0x74)) goto code_r0x0040d084;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_0040cec1;
      }
      goto LAB_0040d4cc;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_0040d6b9;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_0040d96b:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_0040d6a0;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_0040d96b;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_0040d01e;
    }
    goto LAB_0040d6a0;
  }
  ppbVar3[3] = param_1;
  ppbVar3[4] = pbVar11;
  uVar8 = 1;
  if (local_78 != 0) {
    uVar8 = local_78;
  }
  iVar6 = (int)(char)param_1[1];
  pbVar14 = pbVar11;
  if ((byte)(param_1[1] - 0x30) < 10) {
    do {
      bVar17 = pbVar14[1];
      pbVar14 = pbVar14 + 1;
    } while ((byte)(bVar17 - 0x30) < 10);
    if (bVar17 != 0x24) goto LAB_0040cf4d;
    pbVar14 = (byte *)0x0;
    do {
      pbVar10 = pbVar11;
      pbVar13 = (byte *)0xffffffffffffffff;
      if (pbVar14 < (byte *)0x199999999999999a) {
        pbVar13 = (byte *)((long)pbVar14 * 10);
      }
      while( true ) {
        iVar7 = iVar6 + -0x30;
        pbVar14 = pbVar13 + iVar7;
        iVar6 = (int)(char)pbVar10[1];
        pbVar11 = pbVar10 + 1;
        bVar17 = pbVar10[1] - 0x30;
        if (CARRY8((ulong)pbVar13,(long)iVar7) == false) break;
        pbVar10 = pbVar11;
        pbVar13 = pbVar12;
        if (9 < bVar17) goto switchD_0040d087_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_0040d087_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_0040cf4d:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_0040d087_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_0040cf6c:
    if (pbVar12 <= pbVar14) {
      do {
        pbVar12 = pbVar12 + 1;
        *(undefined *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
      } while (pbVar12 <= pbVar14);
      *param_3 = pbVar12;
    }
    iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
    param_1 = pbVar11;
    local_78 = uVar8;
    pbVar12 = local_68;
    if (iVar6 == 0) {
      *(undefined *)(__dest_00 + (long)pbVar14 * 4) = 5;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    else {
      if (iVar6 != 5) goto LAB_0040d4cc;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x0040cfba;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_0040d6a0;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_0040d7b9;
      goto LAB_0040d28d;
    }
    goto LAB_0040d6a0;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_0040d7b9:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_0040d28d:
    param_3[1] = (byte *)__dest_00;
    goto LAB_0040cf6c;
  }
  goto LAB_0040d6b9;
code_r0x0040d084:
  switch(bVar17) {
  case 0x25:
    goto switchD_0040d087_caseD_25;
  default:
    goto switchD_0040d087_caseD_26;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    iVar6 = 0xc;
    if ((int)uVar5 < 0x10) {
      iVar6 = ((uVar5 & 4) != 0) + 0xb;
    }
    break;
  case 0x43:
    iVar6 = 0xe;
    bVar17 = 99;
    break;
  case 0x53:
    iVar6 = 0x10;
    bVar17 = 0x73;
    break;
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x78:
    iVar6 = 10;
    if (((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) && (iVar6 = 8, (int)uVar5 < 8)) &&
       (iVar6 = 2, (uVar5 & 2) == 0)) {
      iVar6 = (-(uint)((uVar5 & 1) == 0) & 2) + 4;
    }
    break;
  case 99:
    iVar6 = (7 < (int)uVar5) + 0xd;
    break;
  case 100:
  case 0x69:
    iVar6 = 9;
    if ((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) &&
       ((iVar6 = 7, (int)uVar5 < 8 && (iVar6 = 1, (uVar5 & 2) == 0)))) {
      iVar6 = (-(uint)((uVar5 & 1) == 0) & 2) + 3;
    }
    break;
  case 0x6e:
    iVar6 = 0x16;
    if ((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) &&
       ((iVar6 = 0x15, (int)uVar5 < 8 && (iVar6 = 0x12, (uVar5 & 2) == 0)))) {
      iVar6 = ((uVar5 & 1) == 0) + 0x13;
    }
    break;
  case 0x70:
    iVar6 = 0x11;
    break;
  case 0x73:
    iVar6 = (7 < (int)uVar5) + 0xf;
  }
  if (pbVar18 == (byte *)0xffffffffffffffff) {
    ppbVar3[10] = local_68;
    bVar21 = local_68 == (byte *)0xffffffffffffffff;
    pbVar18 = local_68;
    local_68 = local_68 + 1;
    if (bVar21) {
switchD_0040d087_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_0040d4cc;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_0040d0b5:
    pbVar11 = *param_3;
    if (pbVar11 <= pbVar18) {
      do {
        pbVar11 = pbVar11 + 1;
        *(undefined *)(__dest_00 + (long)pbVar11 * 4 + -4) = 0;
      } while (pbVar11 <= pbVar18);
      *param_3 = pbVar11;
    }
    iVar7 = *(int *)(__dest_00 + (long)pbVar18 * 4);
    if (iVar7 == 0) {
      *(int *)(__dest_00 + (long)pbVar18 * 4) = iVar6;
    }
    else if (iVar7 != iVar6) {
LAB_0040d4cc:
      if (ppbVar2 != __dest_00) {
        free(__dest_00);
      }
      if (puVar1 != (ulong *)param_2[1]) {
        free((ulong *)param_2[1]);
      }
      piVar9 = __errno_location();
      *piVar9 = 0x16;
      return 0xffffffff;
    }
switchD_0040d087_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_0040cd7b;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_0040d9f3:
      __ptr = (byte **)param_3[1];
      goto LAB_0040d6a0;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_0040d9f3;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_0040d18f;
LAB_0040d2b4:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_0040d18f:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_0040cd7b;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_0040d2b4;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_0040d6c9;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_0040d6b9;
LAB_0040d656:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_0040d59b:
        param_3[1] = (byte *)__dest_00;
        goto LAB_0040d0b5;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_0040d656;
        goto LAB_0040d59b;
      }
      goto LAB_0040d9f3;
    }
LAB_0040d6a0:
    if (ppbVar2 == __ptr) goto LAB_0040d6b9;
  }
  free(__ptr);
LAB_0040d6b9:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_0040d6c9:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x0040da43) */
/* WARNING: Removing unreachable block (ram,0x0040da48) */

void FUN_0040da10(void)

{
  __DT_INIT();
  return;
}


void FUN_0040da70(void)

{
  return;
}


void FUN_0040da80(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_006142a8);
  return;
}


undefined FUN_0040da98(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00613e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00403cd1();
  return;
}

