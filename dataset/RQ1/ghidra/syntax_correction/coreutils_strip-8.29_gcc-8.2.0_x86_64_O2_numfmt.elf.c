
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00405b60caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401b45(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401b4a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401b4f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401b54(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040763acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined FUN_00401b60(int param_1,undefined *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  __ssize_t _Var9;
  int *piVar10;
  ushort **ppuVar11;
  undefined uVar12;
  undefined uVar13;
  char cVar14;
  long lVar15;
  uint uVar16;
  char *pcVar17;
  int *piVar18;
  undefined *puVar19;
  long lVar20;
  char *pcVar21;
  bool bVar22;
  undefined auVar23 [16];
  int *local_58;
  int *local_50;
  char *local_48;
  int *local_40 [2];
  
  FUN_00405970(*param_2);
  pcVar6 = setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  DAT_00610340 = nl_langinfo(0x10000);
  if ((DAT_00610340 == (char *)0x0) || (*DAT_00610340 == '\0')) {
    DAT_00610340 = ".";
  }
  sVar7 = strlen(DAT_00610340);
  DAT_0061033c = (undefined)sVar7;
  FUN_00409fa0(FUN_00405490);
  iVar4 = DAT_00610254;
LAB_00401bf0:
  DAT_00610254 = iVar4;
  iVar3 = FUN_004096e0(param_1,param_2,&DAT_0040a1bf,&PTR_s_from_0040bd80,0);
  if (iVar3 == -1) {
    if ((DAT_00610370 != (char *)0x0) && (DAT_00610398 != 0)) goto LAB_00402745;
    if ((pcVar6 == (char *)0x0) && (DAT_00610348 != '\0')) {
      uVar12 = dcgettext(0,"failed to set locale",5);
      error(0,0,uVar12);
    }
    if ((DAT_00610348 == '\0') || ((DAT_006103b0 | DAT_006103ac) != 0)) {
LAB_00402065:
      pcVar6 = DAT_00610370;
      if (DAT_00610370 == (char *)0x0) goto LAB_004021a2;
    }
    else if (DAT_00610398 == 0) {
      if (DAT_00610380 == (int *)0x0) {
        if (DAT_00610370 == (char *)0x0) {
          uVar12 = dcgettext(0,"no conversion option specified",5);
          error(0,0,uVar12);
          goto LAB_00402065;
        }
      }
      else if (DAT_00610370 == (char *)0x0) goto LAB_004021af;
    }
    else if (DAT_00610370 == (char *)0x0) goto LAB_00402370;
    pcVar6 = DAT_00610370;
    local_40[0] = (int *)0x0;
    lVar20 = 0;
    lVar8 = 0;
    goto LAB_0040209c;
  }
  if (iVar3 == 0x84) {
LAB_00401f60:
    lVar8 = FUN_004053b0("--round",DAT_00610570,&PTR_DAT_0040c060,&DAT_0040c030);
    DAT_00610278 = *(undefined *)(&DAT_0040c030 + lVar8 * 4);
    iVar4 = DAT_00610254;
    goto LAB_00401bf0;
  }
  iVar4 = DAT_00610254;
  if (iVar3 < 0x85) {
    if (iVar3 == 0x7a) {
      DAT_00610250 = 0;
      goto LAB_00401bf0;
    }
    if (iVar3 < 0x7b) {
      if (iVar3 == -0x82) {
        FUN_00404360(0);
        goto LAB_004026e5;
      }
      if (iVar3 != 100) {
        if (iVar3 == -0x83) {
          FUN_00407a10(stdout,"numfmt","GNU coreutils",PTR_DAT_00610280,"Assaf Gordon",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00401e73;
      }
      cVar14 = *DAT_00610570;
      iVar4 = (int)cVar14;
      if ((cVar14 == '\0') || (DAT_00610570[1] == '\0')) goto LAB_00401bf0;
      goto LAB_0040289f;
    }
    if (iVar3 == 0x81) {
      DAT_00610270 = FUN_004029b0(DAT_00610570);
      iVar4 = DAT_00610254;
      goto LAB_00401bf0;
    }
    if (0x81 < iVar3) {
      if (iVar3 == 0x82) {
        lVar8 = FUN_004053b0(&DAT_0040a1ca,DAT_00610570,&PTR_DAT_0040c0a0,&DAT_0040c090);
        DAT_006103ac = *(uint *)(&DAT_0040c090 + lVar8 * 4);
        iVar4 = DAT_00610254;
      }
      else {
        if (iVar3 != 0x83) goto LAB_00401e73;
        DAT_00610268 = FUN_004029b0(DAT_00610570);
        iVar4 = DAT_00610254;
      }
      goto LAB_00401bf0;
    }
    if (iVar3 == 0x80) {
      lVar8 = FUN_004053b0("--from",DAT_00610570,&PTR_DAT_0040c100,&DAT_0040c0d0);
      DAT_006103b0 = *(uint *)(&DAT_0040c0d0 + lVar8 * 4);
      iVar4 = DAT_00610254;
      goto LAB_00401bf0;
    }
LAB_00401e73:
    FUN_00404360(1);
  }
  else {
    if (iVar3 == 0x89) goto LAB_00401e87;
    if (iVar3 < 0x8a) {
      if (iVar3 == 0x86) {
        DAT_00610398 = 1;
        goto LAB_00401bf0;
      }
      if (iVar3 < 0x86) {
        DAT_006103a0 = DAT_00610570;
        goto LAB_00401bf0;
      }
      if (iVar3 == 0x87) {
        iVar4 = FUN_00407e00(DAT_00610570,0,10,&DAT_00610380);
        if ((iVar4 != 0) || (DAT_00610380 == (int *)0x0)) goto LAB_00402849;
        iVar4 = DAT_00610254;
        if ((long)DAT_00610380 < 0) {
          DAT_00610258 = 0;
          DAT_00610380 = (int *)-(long)DAT_00610380;
        }
        goto LAB_00401bf0;
      }
      if (iVar3 == 0x88) {
        if (DAT_00610568 != 0) goto LAB_0040287d;
        FUN_00404b00(DAT_00610570,1);
        iVar4 = DAT_00610254;
        goto LAB_00401bf0;
      }
      goto LAB_00401e73;
    }
    if (iVar3 == 0x8b) {
      if (DAT_00610570 == (char *)0x0) {
        DAT_00610350 = 1;
      }
      else {
        iVar4 = FUN_00408550(DAT_00610570,0,10,&DAT_00610350);
        if ((iVar4 != 0) || (iVar4 = DAT_00610254, DAT_00610350 == 0)) {
          pcVar6 = (char *)FUN_00407590(DAT_00610570);
          uVar12 = dcgettext(0,"invalid header value %s",5);
          error(1,0,uVar12,pcVar6);
          goto LAB_00401f60;
        }
      }
      goto LAB_00401bf0;
    }
    if (0x8a < iVar3) {
      if (iVar3 == 0x8c) {
        DAT_00610370 = DAT_00610570;
      }
      else {
        if (iVar3 != 0x8d) goto LAB_00401e73;
        lVar8 = FUN_004053b0("--invalid",DAT_00610570,&PTR_s_abort_0040c000,&DAT_0040bfe0);
        DAT_006103a8 = *(int *)(&DAT_0040bfe0 + lVar8 * 4);
        iVar4 = DAT_00610254;
      }
      goto LAB_00401bf0;
    }
  }
  DAT_00610338 = '\x01';
LAB_00401e87:
  DAT_00610348 = '\x01';
  iVar4 = DAT_00610254;
  goto LAB_00401bf0;
LAB_0040209c:
  if (DAT_00610370[lVar8] == '%') {
    lVar15 = lVar8 + 1;
    if (DAT_00610370[lVar8 + 1] != '%') goto LAB_004023b4;
    lVar15 = 2;
  }
  else {
    if (DAT_00610370[lVar8] == '\0') goto LAB_004026e5;
    lVar15 = 1;
  }
  lVar8 = lVar8 + lVar15;
  lVar20 = lVar20 + 1;
  goto LAB_0040209c;
LAB_004023b4:
  bVar22 = false;
  local_58 = (int *)(DAT_00610370 + lVar15);
  do {
    while( true ) {
      while( true ) {
        sVar7 = strspn((char *)local_58," ");
        lVar15 = lVar15 + sVar7;
        local_58 = (int *)(pcVar6 + lVar15);
        if (*(char *)local_58 != '\'') break;
        DAT_00610398 = 1;
        lVar15 = lVar15 + 1;
        local_58 = (int *)(pcVar6 + lVar15);
      }
      if (*(char *)local_58 != '0') break;
      lVar15 = lVar15 + 1;
      bVar22 = true;
      local_58 = (int *)(pcVar6 + lVar15);
    }
  } while (sVar7 != 0);
  local_50 = __errno_location();
  *local_50 = 0;
  piVar10 = (int *)strtol((char *)local_58,(char **)local_40,10);
  if (*local_50 == 0x22) goto LAB_00402715;
  piVar18 = local_50;
  piVar2 = DAT_00610380;
  if ((local_40[0] != local_58) && (piVar10 != (int *)0x0)) {
    if ((DAT_00610348 == '\0') || (DAT_00610380 == (int *)0x0)) {
LAB_00402625:
      if ((long)piVar10 < 0) {
        DAT_00610258 = 0;
        piVar2 = (int *)-(long)piVar10;
      }
      else {
        piVar2 = piVar10;
        if (bVar22) goto LAB_0040246a;
      }
    }
    else {
      if ((!bVar22) || ((long)piVar10 < 1)) {
        local_58 = local_50;
        local_50 = piVar10;
        uVar12 = dcgettext(0,"--format padding overriding --padding",5);
        error(0,0,uVar12);
        piVar18 = local_58;
        piVar10 = local_50;
        goto LAB_00402625;
      }
LAB_0040246a:
      DAT_00610378 = piVar10;
      piVar2 = DAT_00610380;
    }
  }
  DAT_00610380 = piVar2;
  lVar8 = (long)local_40[0] - (long)pcVar6;
  if (*(char *)local_40[0] != '\0') {
    if (*(char *)local_40[0] == '.') {
      *piVar18 = 0;
      local_58 = piVar18;
      DAT_00610260 = strtol(pcVar6 + lVar8 + 1,(char **)local_40,10);
      if ((*local_58 == 0x22) || (DAT_00610260 < 0)) goto LAB_00402819;
      ppuVar11 = __ctype_b_loc();
      cVar14 = pcVar6[lVar8 + 1];
      if (((*(byte *)(*ppuVar11 + cVar14) & 1) != 0) || (cVar14 == '+')) goto LAB_00402819;
      lVar8 = (long)local_40[0] - (long)pcVar6;
    }
    if (pcVar6[lVar8] == 'f') {
      lVar8 = lVar8 + 1;
      pcVar17 = pcVar6 + lVar8;
      cVar14 = *pcVar17;
      if (*pcVar17 == '\0') {
        if (lVar20 != 0) {
LAB_004020c4:
          DAT_00610368 = (char *)FUN_00407de0(pcVar6,lVar20);
          if (*pcVar17 != '\0') goto LAB_004025b4;
        }
      }
      else {
        do {
          cVar1 = pcVar6[lVar8 + 1];
          lVar15 = lVar8 + 1;
          if (cVar14 == '%') {
            if (cVar1 != '%') goto LAB_00402789;
            cVar1 = pcVar6[lVar8 + 2];
            lVar15 = lVar8 + 2;
          }
          lVar8 = lVar15;
          cVar14 = cVar1;
        } while (cVar1 != '\0');
        if (lVar20 != 0) goto LAB_004020c4;
LAB_004025b4:
        DAT_00610360 = (char *)FUN_00407d80(pcVar17);
      }
      if (DAT_00610338 != '\0') {
        pcVar17 = DAT_00610360;
        if (DAT_00610360 == (char *)0x0) {
          pcVar17 = "";
        }
        local_50 = (int *)FUN_00407570(2,pcVar17);
        pcVar17 = DAT_00610368;
        if (DAT_00610368 == (char *)0x0) {
          pcVar17 = "";
        }
        pcVar21 = "Left";
        puVar19 = &DAT_0040a1b6;
        uVar12 = FUN_00407570(1,pcVar17);
        if (DAT_00610258 != 0) {
          pcVar21 = "Right";
        }
        local_58 = DAT_00610380;
        if (DAT_00610398 == 0) {
          puVar19 = &DAT_0040a1ba;
        }
        auVar23 = FUN_00407570(0,pcVar6);
        __fprintf_chk(stderr,1,
                      "format String:\n  input: %s\n  grouping: %s\n  padding width: %ld\n  alignment: %s\n  prefix: %s\n  suffix: %s\n"
                      ,SUB168(auVar23,0),puVar19,local_58,pcVar21,uVar12,local_50,
                      SUB168(auVar23 >> 0x40,0));
      }
LAB_004021a2:
      if (DAT_00610398 == 0) {
LAB_004021af:
        if (DAT_00610388 <= DAT_00610380) {
          FUN_00402bd0();
        }
        DAT_00610358 = 0;
        if (DAT_00610380 == (int *)0x0) {
          DAT_00610358 = (uint)(DAT_00610254 == 0x80);
        }
        if (DAT_006103a8 != 0) {
          DAT_0061025c = 0;
        }
        if (DAT_006102f8._4_4_ < param_1) {
          if ((DAT_00610348 != '\0') && (DAT_00610350 != 0)) {
            uVar12 = dcgettext(0,"--header ignored with command-line input",5);
            error(0,0,uVar12);
            if (param_1 <= DAT_006102f8._4_4_) {
              return 0;
            }
          }
          uVar16 = 1;
          do {
            uVar5 = FUN_004041a0(param_2[DAT_006102f8._4_4_],1);
            uVar16 = uVar16 & uVar5;
            DAT_006102f8._4_4_ = DAT_006102f8._4_4_ + 1;
          } while (DAT_006102f8._4_4_ < param_1);
        }
        else {
          local_48 = (char *)0x0;
          local_40[0] = (int *)0x0;
          while ((bVar22 = DAT_00610350 != 0, DAT_00610350 = DAT_00610350 + -1, bVar22 &&
                 (_Var9 = getdelim(&local_48,(size_t *)local_40,(uint)DAT_00610250,stdin), 0 < _Var9
                 ))) {
            fputs_unlocked(local_48,stdout);
          }
          uVar16 = 1;
          while (_Var9 = getdelim(&local_48,(size_t *)local_40,(uint)DAT_00610250,stdin), 0 < _Var9)
          {
            bVar22 = (int)local_48[_Var9 + -1] == (uint)DAT_00610250;
            if (bVar22) {
              local_48[_Var9 + -1] = '\0';
            }
            uVar5 = FUN_004041a0(local_48,bVar22);
            uVar16 = uVar16 & uVar5;
          }
          if ((*(byte *)&stdin->_flags & 0x20) != 0) {
            uVar12 = dcgettext(0,"error reading input",5);
            piVar10 = __errno_location();
            error(0,*piVar10,uVar12);
          }
        }
        if (DAT_00610348 == '\0') {
          if (uVar16 != 0) {
            return 0;
          }
        }
        else {
          if (uVar16 != 0) {
            return 0;
          }
          uVar12 = dcgettext(0,"failed to convert some of the input numbers",5);
          error(0,0,uVar12);
        }
        if (DAT_006103a8 - 2U < 2) {
          return 0;
        }
        return 2;
      }
      if (DAT_006103ac == 0) {
LAB_00402370:
        if ((DAT_00610348 != '\0') && (pcVar6 = nl_langinfo(0x10001), *pcVar6 == '\0')) {
          uVar12 = dcgettext(0,"grouping has no effect in this locale",5);
          error(0,0,uVar12);
        }
        goto LAB_004021af;
      }
      goto LAB_00402767;
    }
    goto LAB_004027b9;
  }
LAB_004027e9:
  pcVar6 = (char *)FUN_00407590(pcVar6);
  uVar12 = dcgettext(0,"format %s ends in %%",5);
  error(1,0,uVar12,pcVar6);
LAB_00402819:
  uVar12 = FUN_00407590(pcVar6);
  uVar13 = dcgettext(0,"invalid precision in format %s",5);
  error(1,0,uVar13,uVar12);
LAB_00402849:
  uVar12 = FUN_00407590(DAT_00610570);
  uVar13 = dcgettext(0,"invalid padding value %s",5);
  error(1,0,uVar13,uVar12);
LAB_0040287d:
  uVar12 = dcgettext(0,"multiple field specifications",5);
  error(1,0,uVar12);
LAB_0040289f:
  uVar12 = dcgettext(0,"the delimiter must be a single character",5);
  auVar23 = error(1,0,uVar12);
  piVar10 = local_58;
  local_58 = SUB168(auVar23,0);
  (*(code *)PTR___libc_start_main_0060fff0)
            (FUN_00401b60,piVar10,&local_50,FUN_00409f30,FUN_00409f90,SUB168(auVar23 >> 0x40,0),
             &local_58);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
LAB_004026e5:
  pcVar6 = (char *)FUN_00407590(pcVar6);
  uVar12 = dcgettext(0,"format %s has no %% directive",5);
  error(1,0,uVar12,pcVar6);
LAB_00402715:
  pcVar6 = (char *)FUN_00407590(pcVar6);
  uVar12 = dcgettext(0,"invalid format %s (width overflow)",5);
  error(1,0,uVar12,pcVar6);
LAB_00402745:
  uVar12 = dcgettext(0,"--grouping cannot be combined with --format",5);
  error(1,0,uVar12);
LAB_00402767:
  uVar12 = dcgettext(0,"grouping cannot be combined with --to",5);
  error(1,0,uVar12);
LAB_00402789:
  pcVar6 = (char *)FUN_00407590(pcVar6);
  uVar12 = dcgettext(0,"format %s has too many %% directives",5);
  error(1,0,uVar12,pcVar6);
LAB_004027b9:
  pcVar6 = (char *)FUN_00407590(pcVar6);
  uVar12 = dcgettext(0,"invalid format %s, directive must be %%[0][\'][-][N][.][N]f",5);
  error(1,0,uVar12,pcVar6);
  goto LAB_004027e9;
}


void FUN_004028d0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060fff0)
            (FUN_00401b60,unaff_retaddr,&stack0x00000008,FUN_00409f30,FUN_00409f90,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402908) */
/* WARNING: Removing unreachable block (ram,0x00402912) */

void FUN_004028fb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402949) */

void FUN_0040291a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402986) */

void FUN_00402951(void)

{
  if (DAT_00610328 != '\0') {
    return;
  }
  FUN_004028fb();
  DAT_00610328 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402949) */

void thunk_FUN_0040291a(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_004029b0(char *param_1)

{
  int iVar1;
  size_t __n;
  void *__dest;
  undefined uVar2;
  undefined uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  char *extraout_RDX;
  float *pfVar7;
  char **ppcVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  float fVar12;
  float fVar13;
  char *local_28;
  long local_20;
  
  __n = strlen(param_1);
  local_28 = (char *)0x0;
  if ((__n == 0) || ((int)param_1[__n - 1] - 0x30U < 10)) {
    pcVar5 = param_1;
    pcVar10 = (char *)0x0;
  }
  else {
    __dest = (void *)FUN_00407b50(__n + 2);
    pcVar11 = (char *)((__n - 1) + (long)__dest);
    local_28 = pcVar11;
    pcVar5 = (char *)memcpy(__dest,param_1,__n);
    pcVar10 = pcVar5;
    if (((*pcVar11 == 'i') && (__n != 1)) && (9 < (int)pcVar11[-1] - 0x30U)) {
      *pcVar11 = '\0';
    }
    else {
      local_28 = pcVar11 + 2;
      *(undefined *)(pcVar11 + 1) = 0x42;
    }
  }
  iVar1 = FUN_00408550(pcVar5,&local_28,10,&local_20);
  if (((iVar1 == 0) && (*local_28 == '\0')) && (local_20 != 0)) {
    free(pcVar10);
    return local_20;
  }
  free(pcVar10);
  uVar2 = FUN_00407590(param_1);
  uVar3 = dcgettext(0,"invalid unit size: %s",5);
  pfVar7 = (float *)0x0;
  ppcVar8 = (char **)0x1;
  error(1,0,uVar3,uVar2);
  pcVar5 = *ppcVar8;
  if ((pcVar5 == (char *)0x0) || (uVar6 = (int)*pcVar5 - 0x30, 9 < uVar6)) {
    iVar1 = strncmp(pcVar5,DAT_00610340,(long)DAT_0061033c);
    if (iVar1 != 0) {
      return 3;
    }
    lVar4 = 0;
    fVar13 = (float)0;
  }
  else {
    lVar4 = 0;
    uVar9 = 0;
    fVar13 = (float)0;
    do {
      pcVar5 = pcVar5 + 1;
      if (((float)0 != fVar13) || (uVar6 != 0)) {
        uVar9 = uVar9 + 1;
      }
      if (0x12 < uVar9) {
        if (0x1b < uVar9) {
          return 2;
        }
        lVar4 = 1;
      }
      fVar12 = (float)_DAT_0040c130;
      *ppcVar8 = pcVar5;
      fVar13 = (float)uVar6 + fVar12 * fVar13;
    } while ((pcVar5 != (char *)0x0) && (uVar6 = (int)*pcVar5 - 0x30, uVar6 < 10));
  }
  if (*extraout_RDX != '\0') {
    fVar13 = -fVar13;
  }
  *pfVar7 = fVar13;
  return lVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00402af0(char **param_1,float *param_2,char *param_3)

{
  int iVar1;
  undefined uVar2;
  char *__s1;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  __s1 = *param_1;
  if ((__s1 == (char *)0x0) || (uVar3 = (int)*__s1 - 0x30, 9 < uVar3)) {
    iVar1 = strncmp(__s1,DAT_00610340,(long)DAT_0061033c);
    if (iVar1 != 0) {
      return 3;
    }
    uVar2 = 0;
    fVar6 = (float)0;
  }
  else {
    uVar2 = 0;
    uVar4 = 0;
    fVar6 = (float)0;
    do {
      __s1 = __s1 + 1;
      if (((float)0 != fVar6) || (uVar3 != 0)) {
        uVar4 = uVar4 + 1;
      }
      if (0x12 < uVar4) {
        if (0x1b < uVar4) {
          return 2;
        }
        uVar2 = 1;
      }
      fVar5 = (float)_DAT_0040c130;
      *param_1 = __s1;
      fVar6 = (float)uVar3 + fVar5 * fVar6;
    } while ((__s1 != (char *)0x0) && (uVar3 = (int)*__s1 - 0x30, uVar3 < 10));
  }
  if (*param_3 != '\0') {
    fVar6 = -fVar6;
  }
  *param_2 = fVar6;
  return uVar2;
}


void FUN_00402bd0(long param_1)

{
  DAT_00610388 = param_1 + 1;
  DAT_00610390 = FUN_00407bb0(DAT_00610390);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00402c00(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  size_t sVar9;
  size_t sVar10;
  ushort **ppuVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  byte bVar17;
  uint *puVar18;
  uint *puVar19;
  undefined *puVar20;
  ulong uVar21;
  byte extraout_DL;
  int iVar22;
  int iVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  uint *__src;
  ulong uVar28;
  undefined *puVar29;
  byte *pbVar30;
  ulong uVar31;
  bool bVar32;
  undefined in_FPUControlWord;
  float in_ST0;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  unkbyte10 Var37;
  float in_ST1;
  float fVar38;
  float fVar39;
  float in_ST2;
  float in_ST3;
  float in_ST4;
  byte *apbStack_190 [5];
  float local_168 [4];
  int local_158;
  byte local_148;
  long local_128;
  ushort local_11c [9];
  char local_10a;
  char local_109;
  byte *local_108 [2];
  undefined local_f8;
  undefined uStack_f0;
  float local_b8 [13];
  
  pcVar13 = DAT_006103a0;
  pfVar26 = local_168;
  pfVar24 = local_168;
  puVar8 = DAT_00610560;
  if (DAT_00610560 != (ulong *)0x0) {
    for (; *puVar8 != 0xffffffffffffffff; puVar8 = puVar8 + 2) {
      if ((*puVar8 <= param_2) && (param_2 < puVar8[1] || param_2 == puVar8[1])) goto LAB_00402c76;
    }
LAB_00402c40:
    fputs_unlocked((char *)param_1,stdout);
    return 1;
  }
  if (param_2 != 1) goto LAB_00402c40;
LAB_00402c76:
  if (DAT_006103a0 != (char *)0x0) {
    sVar9 = strlen((char *)param_1);
    sVar10 = strlen(pcVar13);
    if (sVar10 < sVar9) {
      iVar4 = strcmp(pcVar13,(char *)(param_1 + (sVar9 - sVar10)));
      bVar17 = DAT_00610338;
      if (iVar4 == 0) {
        param_1[sVar9 - sVar10] = 0;
        if (bVar17 != 0) {
          uVar14 = FUN_00407590(pcVar13);
          __fprintf_chk(stderr,1,"trimming suffix %s\n",uVar14);
        }
      }
      else if (DAT_00610338 != 0) {
        fwrite("no valid suffix found\n",1,0x16,stderr);
      }
    }
  }
  bVar17 = *param_1;
  pbVar30 = param_1;
  if (bVar17 == 0) {
    iVar4 = 0;
  }
  else {
    ppuVar11 = __ctype_b_loc();
    do {
      if ((*(byte *)(*ppuVar11 + bVar17) & 1) == 0) break;
      pbVar30 = pbVar30 + 1;
      bVar17 = *pbVar30;
    } while (bVar17 != 0);
    iVar4 = (int)param_1 - (int)pbVar30;
  }
  if (DAT_00610358 == 0) {
LAB_00402fcd:
    local_158 = DAT_006103b0;
    local_108[0] = (byte *)0x0;
    local_168[0] = 0.0;
    local_f8 = SUB108((float)0.0,0);
    uStack_f0 = (undefined)((unkuint)(float)0.0 >> 0x40);
    uVar21 = (ulong)((-(uint)(DAT_006103b0 - 3U < 2) & 0x18) + 1000);
    if (DAT_00610338 != 0) {
      uVar14 = FUN_00407570(1,DAT_00610340);
      uVar15 = FUN_00407570(0,pbVar30);
      __fprintf_chk(stderr,1,
                    "simple_strtod_human:\n  input string: %s\n  locale decimal-point: %s\n  MAX_UNSCALED_DIGITS: %d\n"
                    ,uVar15,uVar14,0x12);
    }
  }
  else {
    if ((iVar4 == 0) && ((long)param_2 < 2)) {
      DAT_00610380 = (undefined *)0x0;
    }
    else {
      DAT_00610380 = (undefined *)strlen((char *)param_1);
      if (DAT_00610388 <= DAT_00610380) {
        FUN_00402bd0(DAT_00610380);
      }
    }
    if (DAT_00610338 != 0) {
      __fprintf_chk(stderr,1,"setting Auto-Padding to %ld characters\n",DAT_00610380);
      goto LAB_00402fcd;
    }
    local_168[0] = 0.0;
    local_158 = DAT_006103b0;
    local_f8 = SUB108((float)0.0,0);
    uStack_f0 = (undefined)((unkuint)(float)0.0 >> 0x40);
    uVar21 = (ulong)((-(uint)(DAT_006103b0 - 3U < 2) & 0x18) + 1000);
  }
  local_10a = *pbVar30 == 0x2d;
  local_108[0] = pbVar30;
  if ((bool)local_10a) {
    local_108[0] = pbVar30 + 1;
  }
  uVar5 = FUN_00402af0(local_108,&local_f8,&local_10a);
  pbVar12 = local_108[0];
  __src = (uint *)(ulong)uVar5;
  if (uVar5 < 2) {
    sVar9 = (size_t)DAT_0061033c;
    iVar4 = strncmp((char *)local_108[0],DAT_00610340,sVar9);
    if (iVar4 != 0) {
      uVar31 = 0;
LAB_00402dca:
      uVar5 = (uint)__src;
      if (DAT_00610338 != 0) {
        __fprintf_chk(stderr,1,"  parsed numeric value: %Lf\n  input precision = %d\n",
                      uVar31 & 0xffffffff);
      }
      pbVar12 = local_108[0];
      local_148 = *local_108[0];
      if (*local_108[0] == 0) {
        if (local_158 != 4) {
          fVar33 = (float)1;
          bVar17 = DAT_00610338;
          goto LAB_00402eb4;
        }
        uVar5 = 6;
        pcVar13 = "missing \'i\' suffix in input: %s (e.g Ki/Mi/Gi)";
      }
      else {
        ppuVar11 = __ctype_b_loc();
        while (pbVar1 = pbVar12 + 1, (*(byte *)(*ppuVar11 + local_148) & 1) != 0) {
          local_148 = pbVar12[1];
          pbVar12 = pbVar1;
          local_108[0] = pbVar1;
        }
        pcVar13 = strchr("KMGTPEZY",(int)(char)local_148);
        if (pcVar13 == (char *)0x0) {
          uVar5 = 5;
          pcVar13 = "invalid suffix in input: %s";
        }
        else {
          if (local_158 != 0) {
            iVar4 = 0;
            if ((byte)(local_148 + 0xbb) < 0x16) {
              iVar4 = *(int *)(&DAT_0040bd20 + (ulong)(byte)(local_148 + 0xbb) * 4);
            }
            local_108[0] = pbVar12 + 1;
            iVar6 = (int)uVar21;
            if (local_158 == 1) {
              if (pbVar12[1] == 0x69) {
                local_108[0] = pbVar12 + 2;
                if (DAT_00610338 == 0) {
                  fVar33 = (float)_DAT_0040c134;
                  uVar21 = 0x400;
                }
                else {
                  uVar21 = 0x400;
                  local_158 = iVar4;
                  __fprintf_chk(stderr,1,"  Auto-scaling, found \'i\', switching to base %d\n",0x400
                               );
                  fVar33 = (float)_DAT_0040c134;
                  iVar4 = local_158;
                }
              }
              else {
                local_158 = iVar6;
                fVar33 = (float)iVar6;
              }
            }
            else {
              if (local_158 == 4) {
                if (pbVar12[1] != 0x69) {
                  uVar31 = 0;
                  uVar5 = 6;
                  pcVar13 = "missing \'i\' suffix in input: %s (e.g Ki/Mi/Gi)";
                  goto LAB_004034ed;
                }
                local_108[0] = pbVar12 + 2;
              }
              local_158 = iVar6;
              fVar33 = (float)iVar6;
            }
            bVar17 = DAT_00610338;
            if (iVar4 == 0) goto LAB_0040411c;
            iVar4 = iVar4 + -1;
            fVar34 = fVar33;
            if (iVar4 != 0) {
              do {
                fVar34 = fVar34 * fVar33;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              uVar31 = 0;
              pfVar24 = local_168;
              fVar33 = fVar34;
              goto LAB_00402eb4;
            }
            uVar31 = 0;
            pfVar24 = local_168;
            goto LAB_00402eb4;
          }
          uVar5 = 4;
          pcVar13 = "rejecting suffix in input: %s (consider using --from)";
        }
      }
      goto LAB_004034ed;
    }
    local_b8[0] = (float)local_168[0];
    local_108[0] = pbVar12 + sVar9;
    local_108[1] = local_108[0];
    if (*local_108[0] == 0x2d) {
      local_108[1] = local_108[0] + 1;
      iVar4 = 1;
    }
    local_109 = (char)iVar4;
    uVar5 = FUN_00402af0(local_108 + 1,local_b8,&local_109);
    if (1 < uVar5) {
      __src = (uint *)(ulong)uVar5;
      goto LAB_004031aa;
    }
    if (uVar5 == 1) {
      __src = (uint *)0x1;
    }
    if (local_109 == '\0') {
      uVar31 = (long)local_108[1] - (long)local_108[0];
      fVar33 = local_b8[0];
      if ((int)uVar31 != 0) {
        iVar4 = (int)uVar31 + -1;
        if (iVar4 == 0) {
          fVar33 = local_b8[0] / (float)_DAT_0040c130;
        }
        else {
          fVar33 = (float)_DAT_0040c130;
          do {
            fVar33 = fVar33 * (float)_DAT_0040c130;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          fVar33 = local_b8[0] / fVar33;
        }
      }
      if (local_10a == '\0') {
        fVar33 = (float)CONCAT28(uStack_f0,local_f8) + fVar33;
      }
      else {
        fVar33 = (float)CONCAT28(uStack_f0,local_f8) - fVar33;
      }
      local_f8 = SUB108(fVar33,0);
      uStack_f0 = (undefined)((unkuint)fVar33 >> 0x40);
      local_108[0] = local_108[1];
      goto LAB_00402dca;
    }
switchD_004031b5_caseD_3:
    uVar31 = 0;
    uVar5 = 3;
    pcVar13 = "invalid number: %s";
  }
  else {
LAB_004031aa:
    uVar5 = (uint)__src;
    switch(__src) {
    default:
      uVar31 = 0;
      pcVar13 = (char *)0x0;
      break;
    case (uint *)0x2:
      uVar31 = 0;
      pcVar13 = "value too large to be converted: %s";
      break;
    case (uint *)0x3:
      goto switchD_004031b5_caseD_3;
    case (uint *)0x4:
      uVar31 = 0;
      pcVar13 = "rejecting suffix in input: %s (consider using --from)";
      break;
    case (uint *)0x5:
      uVar31 = 0;
      pcVar13 = "invalid suffix in input: %s";
      break;
    case (uint *)0x6:
      uVar31 = 0;
      pcVar13 = "missing \'i\' suffix in input: %s (e.g Ki/Mi/Gi)";
    }
  }
LAB_004034ed:
  pfVar25 = (float *)local_168;
  if (DAT_006103a8 != 3) {
    uVar14 = FUN_00407590(pbVar30);
    uVar15 = dcgettext(0,pcVar13,5);
    error(DAT_0061025c,0,uVar15,uVar14);
    pfVar25 = (float *)local_168;
  }
LAB_00402f40:
  uVar3 = DAT_006103ac;
  iVar4 = DAT_00610398;
  uVar7 = DAT_00610278;
  uVar2 = DAT_0061025c;
  fVar33 = *(float *)((long)pfVar25 + 0x70);
  if ((DAT_00610270 != 1) || (DAT_00610268 != 1)) {
    *(long *)((long)pfVar25 + 0x10) = DAT_00610270;
    fVar34 = (float)*(long *)((long)pfVar25 + 0x10);
    if (DAT_00610270 < 0) {
      fVar34 = fVar34 + (float)_DAT_0040c138;
    }
    *(long *)((long)pfVar25 + 0x10) = DAT_00610268;
    fVar35 = (float)*(long *)((long)pfVar25 + 0x10);
    if (DAT_00610268 < 0) {
      fVar35 = fVar35 + (float)_DAT_0040c138;
    }
    fVar33 = (fVar34 * fVar33) / fVar35;
  }
  if (1 < uVar5) goto LAB_00402f98;
  if (DAT_00610260 != 0xffffffffffffffff) {
    uVar31 = DAT_00610260;
  }
  if ((fVar33 < _DAT_0040c150) || (_DAT_0040c160 < fVar33)) {
    if ((DAT_006103ac == 0) && (0x12 < uVar31)) {
LAB_00403691:
      if (DAT_006103a8 != 3) {
        *pfVar25 = fVar33;
        if (uVar31 == 0) {
          *(undefined *)((long)pfVar25 + -8) = 0x403fad;
          uVar14 = dcgettext(0,"value too large to be printed: \'%Lg\' (consider using --to)",5);
          *(float *)((long)pfVar25 + -0x10) = *pfVar25;
          *(undefined *)((long)pfVar25 + -0x18) = 0x403fc5;
          error(uVar2,0,uVar14);
        }
        else {
          *(undefined *)((long)pfVar25 + -8) = 0x4036c1;
          uVar14 = dcgettext(0,
                             "value/precision too large to be printed: \'%Lg/%lu\' (consider using --to)"
                             ,5);
          *(float *)((long)pfVar25 + -0x10) = *pfVar25;
          *(undefined *)((long)pfVar25 + -0x18) = 0x4036dc;
          error(uVar2,0,uVar14,uVar31);
        }
      }
LAB_00402f98:
      *(undefined *)((long)pfVar25 + -8) = 0x402fa9;
      fputs_unlocked((char *)param_1,stdout);
      return 0;
    }
  }
  else {
    uVar5 = 0;
    fVar34 = fVar33;
    while( true ) {
      fVar35 = -fVar34;
      if ((float)0 <= fVar34) {
        fVar35 = fVar34;
      }
      if (fVar35 < (float)_DAT_0040c130) break;
      fVar34 = (float)_DAT_0040c130 / fVar34;
      uVar5 = uVar5 + 1;
    }
    if ((DAT_006103ac == 0) && (0x12 < uVar5 + uVar31)) goto LAB_00403691;
    in_ST3 = in_ST2;
    in_ST4 = in_ST2;
    if (0x1a < uVar5) {
      *pfVar25 = fVar33;
      if (DAT_006103a8 != 3) {
        *(undefined *)((long)pfVar25 + -8) = 0x40326e;
        uVar14 = dcgettext(0,"value too large to be printed: \'%Lg\' (cannot handle values > 999Y)",
                           5);
        *(float *)((long)pfVar25 + -0x10) = *pfVar25;
        *(undefined *)((long)pfVar25 + -0x18) = 0x40328a;
        error(DAT_0061025c,0,uVar14);
      }
      goto LAB_00402f98;
    }
  }
  uVar21 = (ulong)DAT_006103ac;
  uVar28 = (ulong)DAT_00610278;
  *(undefined *)((long)pfVar25 + 0x70) = 0x25;
  puVar29 = (undefined *)((long)pfVar25 + 0x71);
  if (DAT_00610398 != 0) {
    *(undefined *)((long)pfVar25 + 0x71) = 0x27;
    puVar29 = (undefined *)((long)pfVar25 + 0x72);
  }
  if (DAT_00610378 != 0) {
    *(float *)((long)pfVar25 + 0x10) = fVar33;
    *(undefined *)((long)pfVar25 + -8) = 0x403679;
    iVar6 = __snprintf_chk(puVar29,0x3e,1,0x3f,&DAT_0040a0c9);
    fVar33 = *(float *)((long)pfVar25 + 0x10);
    puVar29 = (undefined *)((long)puVar29 + (long)iVar6);
  }
  if (DAT_00610338 != 0) {
    *(float *)((long)pfVar25 + 0x10) = fVar33;
    *(undefined *)((long)pfVar25 + -8) = 0x403646;
    fwrite("double_to_human:\n",1,0x11,stderr);
    fVar33 = *(float *)((long)pfVar25 + 0x10);
  }
  if (uVar3 == 0) {
    iVar6 = (int)uVar31;
    if (iVar6 == 0) {
      *(undefined *)((long)pfVar25 + 0x4e) = in_FPUControlWord;
      *(ushort *)((long)pfVar25 + 0x4c) =
           *(ushort *)((long)pfVar25 + 0x4e) & 0xff |
           (ushort)(byte)((ulong)*(ushort *)((long)pfVar25 + 0x4e) >> 8) << 8 | 0xc00;
      *(long *)((long)pfVar25 + 0x10) = (long)ROUND(fVar33 / _DAT_0040c170);
      in_FPUControlWord = *(undefined *)((long)pfVar25 + 0x4e);
      if (uVar7 < 5) goto LAB_004035cd;
      fVar34 = (float)0;
    }
    else {
      iVar22 = iVar6 + -1;
      if (iVar22 == 0) {
        *(undefined *)((long)pfVar25 + 0x4e) = in_FPUControlWord;
        *(ushort *)((long)pfVar25 + 0x4c) =
             *(ushort *)((long)pfVar25 + 0x4e) & 0xff |
             (ushort)(byte)((ulong)*(ushort *)((long)pfVar25 + 0x4e) >> 8) << 8 | 0xc00;
        *(long *)((long)pfVar25 + 0x10) =
             (long)ROUND((fVar33 * (float)_DAT_0040c130) / _DAT_0040c170);
        in_FPUControlWord = *(undefined *)((long)pfVar25 + 0x4e);
        if (uVar7 < 5) goto LAB_004035cd;
        fVar34 = (float)0;
        in_ST4 = in_ST3;
      }
      else {
        fVar35 = (float)_DAT_0040c130;
        fVar34 = fVar35;
        iVar23 = iVar22;
        do {
          fVar34 = fVar34 * fVar35;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        *(undefined *)((long)pfVar25 + 0x4e) = in_FPUControlWord;
        *(ushort *)((long)pfVar25 + 0x4c) =
             *(ushort *)((long)pfVar25 + 0x4e) & 0xff |
             (ushort)(byte)((ulong)*(ushort *)((long)pfVar25 + 0x4e) >> 8) << 8 | 0xc00;
        *(long *)((long)pfVar25 + 0x10) = (long)ROUND((fVar34 * fVar33) / _DAT_0040c170);
        in_FPUControlWord = *(undefined *)((long)pfVar25 + 0x4e);
        if (uVar7 < 5) {
LAB_004035cd:
                    /* WARNING: Could not recover jumptable at 0x004035cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar14 = (*(code *)(&PTR_DAT_0040bc40)[uVar28])();
          return uVar14;
        }
        fVar34 = fVar35;
        do {
          fVar34 = fVar34 * fVar35;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        fVar34 = (float)0 / fVar34;
        in_ST3 = in_ST2;
        in_ST4 = in_ST2;
      }
    }
    uVar28 = uVar31 & 0xffffffff;
    in_ST0 = in_ST1;
    fVar35 = in_ST2;
    fVar36 = in_ST3;
    fVar38 = in_ST4;
    if (DAT_00610338 != 0) {
      *(float *)((long)pfVar25 + 0x10) = fVar33;
      pcVar13 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
      *(int *)((long)pfVar25 + 0x20) = iVar6;
      if (iVar4 == 0) {
        pcVar13 = "  no scaling, returning value: %.*Lf\n";
      }
      *(float *)((long)pfVar25 + -0x10) = fVar34;
      *pfVar25 = fVar34;
      *(undefined *)((long)pfVar25 + -0x18) = 0x403771;
      fVar39 = in_ST4;
      __fprintf_chk(stderr,1,pcVar13,uVar31 & 0xffffffff);
      fVar34 = *pfVar25;
      fVar33 = *(float *)((long)pfVar25 + 0x10);
      uVar28 = (ulong)*(uint *)((long)pfVar25 + 0x20);
      in_ST0 = in_ST1;
      fVar35 = in_ST2;
      fVar36 = in_ST3;
      fVar38 = in_ST4;
      in_ST4 = fVar39;
    }
    in_ST3 = fVar38;
    in_ST2 = fVar36;
    in_ST1 = fVar35;
    *(float *)((long)pfVar25 + 0x10) = fVar33;
    __src = (uint *)((long)pfVar25 + 0xb0);
    *puVar29 = 0x664c2a2e;
    *(undefined *)(puVar29 + 1) = 0;
    *(float *)((long)pfVar25 + -0x10) = fVar34;
    *pfVar25 = fVar34;
    *(undefined *)((long)pfVar25 + -0x18) = 0x4037cd;
    uVar5 = __snprintf_chk(__src,0x80,1,0x80,(long)pfVar25 + 0x70,uVar28);
    param_1 = *(byte **)((long)pfVar25 + -0x10);
    pbVar30 = *(byte **)((long)pfVar25 + -8);
    if (0x7f < uVar5) goto LAB_004040ef;
    Var37 = *(unkbyte10 *)((long)pfVar25 + 0x10);
LAB_004037ea:
    puVar19 = __src;
    bVar17 = DAT_00610338;
    if (DAT_006103a0 != (char *)0x0) {
LAB_004037f9:
      do {
        puVar18 = puVar19;
        bVar17 = DAT_00610338;
        uVar7 = *puVar18 + 0xfefefeff & ~*puVar18;
        uVar5 = uVar7 & 0x80808080;
        puVar19 = puVar18 + 1;
      } while (uVar5 == 0);
      *pfVar25 = (float)Var37;
      bVar32 = (uVar7 & 0x8080) == 0;
      if (bVar32) {
        uVar5 = uVar5 >> 0x10;
      }
      if (bVar32) {
        puVar19 = (uint *)((long)puVar18 + 6);
      }
      *(undefined *)((long)pfVar25 + -8) = 0x403847;
      __strncat_chk(__src,DAT_006103a0,
                    (undefined *)
                    ((long)__src +
                    (0x7f - (long)((long)puVar19 + (-3 - (ulong)CARRY1((byte)uVar5,(byte)uVar5))))),
                    0x80);
      Var37 = *pfVar25;
    }
    puVar19 = __src;
    if (bVar17 != 0) {
      *pfVar25 = (float)Var37;
      *(undefined *)((long)pfVar25 + -8) = 0x403859;
      uVar14 = FUN_00407590(__src);
      *(float *)((long)pfVar25 + -0x10) = *pfVar25;
      *(undefined *)((long)pfVar25 + -0x18) = 0x40387e;
      __fprintf_chk(stderr,1,"formatting output:\n  value: %Lf\n  humanized: %s\n",uVar14);
    }
LAB_0040388e:
    do {
      puVar18 = puVar19;
      uVar7 = *puVar18 + 0xfefefeff & ~*puVar18;
      uVar5 = uVar7 & 0x80808080;
      puVar19 = puVar18 + 1;
    } while (uVar5 == 0);
    bVar32 = (uVar7 & 0x8080) == 0;
    if (bVar32) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar32) {
      puVar19 = (uint *)((long)puVar18 + 6);
    }
    puVar20 = (undefined *)
              ((long)puVar19 + ((-3 - (ulong)CARRY1((byte)uVar5,(byte)uVar5)) - (long)__src));
    if ((DAT_00610380 == (undefined *)0x0) || (DAT_00610380 <= puVar20)) {
      if (DAT_00610388 <= puVar20 + 1) {
        *(undefined *)((long)pfVar25 + -8) = 0x4038e9;
        FUN_00402bd0();
      }
      *(undefined *)((long)pfVar25 + -8) = 0x4038f8;
      strcpy(DAT_00610390,(char *)__src);
    }
    else {
      *(undefined **)((long)pfVar25 + 0x70) = DAT_00610380;
      *(undefined *)((long)pfVar25 + -8) = 0x403e28;
      FUN_00405530(__src,DAT_00610390,DAT_00610388,(undefined *)((long)pfVar25 + 0x70),DAT_00610258,
                   2);
      if (DAT_00610338 != 0) {
        *(undefined *)((long)pfVar25 + -8) = 0x403e41;
        uVar14 = FUN_00407590(DAT_00610390);
        *(undefined *)((long)pfVar25 + -8) = 0x403e5c;
        __fprintf_chk(stderr,1,"  After padding: %s\n",uVar14);
      }
    }
    if (DAT_00610368 != (char *)0x0) {
      *(undefined *)((long)pfVar25 + -8) = 0x403910;
      fputs_unlocked(DAT_00610368,stdout);
    }
    *(undefined *)((long)pfVar25 + -8) = 0x403928;
    fputs_unlocked(DAT_00610390,stdout);
    if (DAT_00610360 == (char *)0x0) {
      return 1;
    }
    *(undefined *)((long)pfVar25 + -8) = 0x403944;
    fputs_unlocked(DAT_00610360,stdout);
    return 1;
  }
  if (uVar3 - 3 < 2) {
    *(undefined *)((long)pfVar25 + 0x20) = 0x400;
    *(undefined *)((long)pfVar25 + 0x10) = DAT_0040c140;
  }
  else {
    *(undefined *)((long)pfVar25 + 0x20) = 1000;
    *(undefined *)((long)pfVar25 + 0x10) = DAT_0040c148;
  }
  fVar34 = fVar33;
  if ((fVar33 < _DAT_0040c150) || (_DAT_0040c160 < fVar33)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    while( true ) {
      fVar35 = -fVar34;
      if ((float)0 <= fVar34) {
        fVar35 = fVar34;
      }
      in_ST3 = in_ST2;
      if (fVar35 < (float)*(int *)((long)pfVar25 + 0x20)) break;
      fVar34 = fVar34 / (float)*(int *)((long)pfVar25 + 0x20);
      uVar5 = uVar5 + 1;
    }
  }
  if (DAT_00610338 != 0) {
    *(float *)((long)pfVar25 + 0x30) = fVar33;
    *(float *)((long)pfVar25 + -0x10) = fVar34;
    *(float *)((long)pfVar25 + 0x20) = fVar34;
    *(undefined *)((long)pfVar25 + -0x18) = 0x403efb;
    __fprintf_chk(*(undefined *)((long)pfVar25 + 0x10),stderr,1,
                  "  scaled value to %Lf * %0.f ^ %u\n",uVar5);
    fVar33 = *(float *)((long)pfVar25 + 0x30);
    fVar34 = *(float *)((long)pfVar25 + 0x20);
  }
  uVar21 = (ulong)DAT_00610338;
  fVar35 = in_ST2;
  bVar17 = DAT_00610338;
  if (DAT_00610260 != 0xffffffffffffffff) {
    uVar31 = (ulong)(uVar5 * 3);
    if ((long)DAT_00610260 < (long)(ulong)(uVar5 * 3)) {
      uVar31 = DAT_00610260;
    }
    iVar4 = (int)uVar31;
    if (iVar4 == 0) goto LAB_00403d0d;
    iVar6 = iVar4 + -1;
    if (iVar6 == 0) goto LAB_00403e7f;
    fVar35 = (float)_DAT_0040c130;
    fVar36 = fVar35;
    iVar22 = iVar6;
    do {
      fVar36 = fVar36 * fVar35;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    *(undefined *)((long)pfVar25 + 0x4e) = in_FPUControlWord;
    *(ushort *)((long)pfVar25 + 0x4c) =
         *(ushort *)((long)pfVar25 + 0x4e) & 0xff |
         (ushort)(byte)((ulong)*(ushort *)((long)pfVar25 + 0x4e) >> 8) << 8 | 0xc00;
    *(long *)((long)pfVar25 + 0x20) = (long)ROUND((fVar36 * fVar34) / _DAT_0040c170);
    fVar38 = (float)*(long *)((long)pfVar25 + 0x20) * _DAT_0040c170;
    fVar34 = fVar36 * fVar34 - fVar38;
    fVar36 = (float)*(double *)((long)pfVar25 + 0x10);
    pfVar27 = pfVar25;
    switch(uVar28) {
    case 0:
      goto LAB_00403a1f;
    case 1:
      goto LAB_00403c10;
    case 2:
      goto LAB_00403b7e;
    case 3:
      *(long *)((long)pfVar25 + 0x20) = (long)ROUND(fVar34);
      fVar39 = (float)*(long *)((long)pfVar25 + 0x20) + fVar38;
      break;
    case 4:
      goto LAB_00403bd6;
    default:
      goto switchD_004033ed_caseD_5;
    }
    goto LAB_00403a62;
  }
  fVar36 = -fVar34;
  if ((float)0 <= fVar34) {
    fVar36 = fVar34;
  }
  in_ST3 = in_ST2;
  if ((float)_DAT_0040c130 <= fVar36) {
LAB_00403d0d:
    *(undefined *)((long)pfVar25 + 0x4e) = in_FPUControlWord;
    *(ushort *)((long)pfVar25 + 0x4c) =
         *(ushort *)((long)pfVar25 + 0x4e) & 0xff |
         (ushort)(byte)((ulong)*(ushort *)((long)pfVar25 + 0x4e) >> 8) << 8 | 0xc00;
    *(long *)((long)pfVar25 + 0x20) = (long)ROUND(fVar34 / _DAT_0040c170);
    fVar38 = (float)*(long *)((long)pfVar25 + 0x20) * _DAT_0040c170;
    fVar34 = fVar34 - fVar38;
    fVar36 = (float)*(double *)((long)pfVar25 + 0x10);
    switch(uVar28) {
    case 0:
      iVar4 = 0;
      break;
    case 1:
      iVar4 = 0;
      goto LAB_00403c10;
    case 2:
      iVar4 = 0;
      goto LAB_00403b7e;
    case 3:
      *(long *)((long)pfVar25 + 0x20) = (long)ROUND(fVar34);
      fVar39 = (float)*(long *)((long)pfVar25 + 0x20) + fVar38;
      goto LAB_00403a73;
    case 4:
      iVar4 = 0;
      goto LAB_00403bd6;
    default:
switchD_00403d49_caseD_5:
      fVar39 = (float)0;
      goto LAB_00403a7d;
    }
    goto LAB_00403a1f;
  }
LAB_00403e7f:
  *(undefined *)((long)pfVar25 + 0x4e) = in_FPUControlWord;
  *(ushort *)((long)pfVar25 + 0x4c) =
       *(ushort *)((long)pfVar25 + 0x4e) & 0xff |
       (ushort)(byte)((ulong)*(ushort *)((long)pfVar25 + 0x4e) >> 8) << 8 | 0xc00;
  *(long *)((long)pfVar25 + 0x20) = (long)ROUND((fVar34 * (float)_DAT_0040c130) / _DAT_0040c170);
  fVar38 = (float)*(long *)((long)pfVar25 + 0x20) * _DAT_0040c170;
  fVar34 = fVar34 * (float)_DAT_0040c130 - fVar38;
  fVar36 = (float)*(double *)((long)pfVar25 + 0x10);
  in_ST3 = in_ST2;
  switch(uVar28) {
  case 0:
    iVar4 = 1;
    goto LAB_00403a1f;
  case 1:
    iVar4 = 1;
LAB_00403c10:
    fVar34 = -fVar34;
    *(long *)((long)pfVar25 + 0x40) = (long)ROUND(fVar34);
LAB_00403b9a:
    *(long *)((long)pfVar25 + 0x20) = *(long *)((long)pfVar25 + 0x40);
    *(ulong *)((long)pfVar25 + 0x20) =
         -(*(long *)((long)pfVar25 + 0x40) +
          (ulong)((float)*(long *)((long)pfVar25 + 0x20) < fVar34));
    fVar39 = (float)*(long *)((long)pfVar25 + 0x20);
    break;
  case 2:
    iVar4 = 1;
LAB_00403b7e:
    if (fVar34 < (float)0) {
      fVar34 = -fVar34;
      *(long *)((long)pfVar25 + 0x40) = (long)ROUND(fVar34);
      goto LAB_00403b9a;
    }
LAB_00403a1f:
    *(long *)((long)pfVar25 + 0x20) = (long)ROUND(fVar34);
    fVar39 = (float)*(long *)((long)pfVar25 + 0x20);
    if (fVar39 < fVar34) {
      *(long *)((long)pfVar25 + 0x20) = *(long *)((long)pfVar25 + 0x20) + 1;
      fVar39 = (float)*(long *)((long)pfVar25 + 0x20);
    }
    break;
  case 3:
    *(long *)((long)pfVar25 + 0x20) = (long)ROUND(fVar34);
    fVar39 = (float)*(long *)((long)pfVar25 + 0x20) + fVar38;
    goto LAB_00403c5d;
  case 4:
    iVar4 = 1;
LAB_00403bd6:
    if (fVar34 < (float)0) {
      *(long *)((long)pfVar25 + 0x20) = (long)ROUND(fVar34 - (float)_DAT_0040c13c);
      fVar39 = (float)*(long *)((long)pfVar25 + 0x20);
    }
    else {
      *(long *)((long)pfVar25 + 0x20) = (long)ROUND(fVar34 + (float)_DAT_0040c13c);
      fVar39 = (float)*(long *)((long)pfVar25 + 0x20);
    }
    break;
  default:
    goto switchD_00403d49_caseD_5;
  }
  fVar39 = fVar39 + fVar38;
  fVar35 = in_ST2;
  in_ST3 = in_ST2;
  if (iVar4 == 0) goto LAB_00403a73;
  fVar35 = (float)_DAT_0040c130;
  iVar6 = iVar4 + -1;
  if (iVar6 == 0) {
LAB_00403c5d:
    fVar39 = fVar39 / (float)_DAT_0040c130;
    fVar35 = in_ST2;
    in_ST3 = in_ST2;
    goto LAB_00403a73;
  }
LAB_00403a62:
  do {
    fVar34 = fVar35;
    do {
      fVar34 = fVar34 * fVar35;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    fVar39 = fVar39 / fVar34;
    fVar35 = in_ST2;
    in_ST3 = in_ST2;
    bVar17 = (byte)uVar21;
LAB_00403a73:
    if (fVar39 < (float)0) {
      fVar34 = -fVar39;
      if (fVar36 <= -fVar39) goto LAB_00403a85;
LAB_00403cec:
      fVar36 = in_ST0;
      uVar7 = (uint)(uVar5 != 0 && fVar34 < (float)_DAT_0040c130);
    }
    else {
LAB_00403a7d:
      if (fVar36 <= fVar39) {
LAB_00403a85:
        uVar5 = uVar5 + 1;
        fVar39 = fVar39 / fVar36;
      }
      if (fVar39 != (float)0) {
        fVar34 = fVar39;
        if (fVar39 < (float)0) {
          fVar34 = -fVar39;
        }
        goto LAB_00403cec;
      }
      uVar7 = 0;
      fVar36 = in_ST0;
    }
    in_ST0 = in_ST3;
    if (bVar17 != 0) {
      *(float *)((long)pfVar25 + 0x20) = fVar33;
      *(uint *)((long)pfVar25 + 0x30) = uVar7;
      *(float *)((long)pfVar25 + -0x10) = fVar39;
      *pfVar25 = fVar39;
      *(undefined *)((long)pfVar25 + -0x18) = 0x403dc5;
      __fprintf_chk(*(undefined *)((long)pfVar25 + 0x10),stderr,1,
                    "  after rounding, value=%Lf * %0.f ^ %u\n",uVar5);
      fVar33 = *(float *)((long)pfVar25 + 0x20);
      fVar39 = *pfVar25;
    }
    pcVar13 = "(error)";
    *puVar29 = 0x664c2a2e;
    *(undefined *)(puVar29 + 1) = 0x7325;
    *(undefined *)((long)puVar29 + 6) = 0;
    if (uVar5 < 9) {
      pcVar13 = *(char **)(&UNK_0040bcc0 + (ulong)uVar5 * 8);
    }
    *(float *)((long)pfVar25 + 0x10) = fVar33;
    uVar21 = 0x80;
    __src = (uint *)((long)pfVar25 + 0xb0);
    *(char **)((long)pfVar25 + -0x10) = pcVar13;
    *(float *)((long)pfVar25 + -0x20) = fVar39;
    *pfVar25 = fVar39;
    *(undefined *)(pfVar25 + -4) = 0x403b2a;
    in_ST2 = in_ST0;
    uVar7 = __snprintf_chk(__src,0x7f,1,0x80,(undefined *)((long)pfVar25 + 0x70));
    Var37 = *(unkbyte10 *)((long)pfVar25 + 0x10);
    if (uVar7 < 0x7f) {
      if ((uVar5 != 0) && (uVar3 == 4)) {
        *pfVar25 = (float)Var37;
        *(undefined *)((long)pfVar25 + -8) = 0x403feb;
        __strncat_chk(__src,&DAT_0040a35f,0x7f - (long)(int)uVar7,0x80);
        Var37 = *pfVar25;
      }
      if (DAT_00610338 != 0) {
        *pfVar25 = (float)Var37;
        *(undefined *)((long)pfVar25 + -8) = 0x403f1e;
        uVar14 = FUN_00407590(__src);
        *(undefined *)((long)pfVar25 + -8) = 0x403f39;
        __fprintf_chk(stderr,1,"  returning value: %s\n",uVar14);
        Var37 = *pfVar25;
        goto LAB_004037ea;
      }
      puVar19 = __src;
      if (DAT_006103a0 == (char *)0x0) goto LAB_0040388e;
      goto LAB_004037f9;
    }
    *(undefined *)((long)pfVar25 + -8) = 0x40414f;
    uVar14 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
    *(ulong *)((long)pfVar25 + -8) = uVar21;
    pfVar27 = (float *)((long)pfVar25 + -0x10);
    *(ulong *)((long)pfVar25 + -0x10) = uVar21;
    *(float *)((long)pfVar25 + -0x10) = *pfVar25;
    *(undefined *)((long)pfVar25 + -0x18) = 0x404168;
    iVar6 = error(1,0,uVar14);
    fVar33 = in_ST3;
switchD_004033ed_caseD_5:
    fVar39 = (float)0;
    pfVar25 = pfVar27;
  } while( true );
LAB_004040ef:
  *pfVar25 = *pfVar25;
  *(undefined *)((long)pfVar25 + -8) = 0x404103;
  uVar14 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
  *(ulong *)((long)pfVar25 + -8) = uVar21;
  pfVar26 = (float *)((long)pfVar25 + -0x10);
  *(ulong *)((long)pfVar25 + -0x10) = uVar21;
  *(float *)((long)pfVar25 + -0x10) = *pfVar25;
  *(undefined *)((long)pfVar25 + -0x18) = 0x40411c;
  error(1,0,uVar14);
  bVar17 = extraout_DL;
LAB_0040411c:
  uVar5 = (uint)__src;
  uVar31 = 0;
  fVar33 = (float)1;
  pfVar24 = pfVar26;
LAB_00402eb4:
  if (bVar17 == 0) {
    *(float *)((long)pfVar24 + 0x70) = *(float *)((long)pfVar24 + 0x70) * fVar33;
  }
  else {
    *(float *)((long)pfVar24 + -0x10) = fVar33;
    *(float *)((long)pfVar24 + 0x10) = fVar33;
    *(undefined *)((long)pfVar24 + -0x18) = 0x40348e;
    __fprintf_chk(stderr,1,"  suffix power=%d^%d = %Lf\n",uVar21);
    fVar33 = *(float *)((long)pfVar24 + 0x10) * *(float *)((long)pfVar24 + 0x70);
    *(float *)((long)pfVar24 + 0x70) = fVar33;
    if (DAT_00610338 != 0) {
      *(float *)((long)pfVar24 + -0x10) = fVar33;
      *(float *)((long)pfVar24 + -0x20) = fVar33;
      *(undefined *)((long)pfVar24 + -0x28) = 0x4034da;
      __fprintf_chk(stderr,1,"  returning value: %Lf (%LG)\n");
    }
  }
  pfVar25 = (float *)pfVar24;
  if ((*(char **)((long)pfVar24 + 0x60) == (char *)0x0) ||
     (**(char **)((long)pfVar24 + 0x60) == '\0')) {
    if ((uVar5 == 1) && (DAT_00610348 != '\0')) {
      *(undefined *)((long)pfVar24 + -8) = 0x40317e;
      uVar14 = FUN_00407590();
      *(undefined *)((long)pfVar24 + -8) = 0x403192;
      uVar15 = dcgettext(0,"large input value %s: possible precision loss",5);
      *(undefined *)((long)pfVar24 + -8) = 0x4031a3;
      error(0,0,uVar15,uVar14);
    }
  }
  else {
    uVar5 = 5;
    if (DAT_006103a8 != 3) {
      *(undefined *)((long)pfVar24 + -8) = 0x402eff;
      uVar14 = FUN_00407570(1);
      *(undefined *)((long)pfVar24 + -8) = 0x402f0c;
      uVar15 = FUN_00407570(0,pbVar30);
      *(undefined *)((long)pfVar24 + -8) = 0x402f20;
      uVar16 = dcgettext(0,"invalid suffix in input %s: %s",5);
      *(undefined *)((long)pfVar24 + -8) = 0x402f38;
      error(DAT_0061025c,0,uVar16,uVar15,uVar14);
    }
  }
  goto LAB_00402f40;
}


undefined FUN_004041a0(byte *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  undefined uVar8;
  long lVar9;
  
  lVar9 = 0;
  uVar8 = 1;
  uVar3 = DAT_00610254;
  do {
    lVar9 = lVar9 + 1;
    bVar6 = *param_1;
    pbVar5 = param_1;
    if (uVar3 == 0x80) {
      if (bVar6 == 0) {
LAB_00404213:
        cVar2 = FUN_00402c00(param_1,lVar9);
        bVar6 = DAT_00610250;
        if (cVar2 == '\0') {
          uVar8 = 0;
        }
        if (param_2 != '\0') {
          pbVar5 = (byte *)stdout->_IO_write_ptr;
          if (pbVar5 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(pbVar5 + 1);
            *pbVar5 = bVar6;
          }
          else {
            __overflow(stdout,(uint)DAT_00610250);
          }
        }
        return uVar8;
      }
      ppuVar4 = __ctype_b_loc();
      while (((*(byte *)(*ppuVar4 + bVar6) & 1) != 0 || (bVar6 == 10))) {
        pbVar5 = pbVar5 + 1;
        bVar6 = *pbVar5;
        if (bVar6 == 0) goto LAB_00404213;
      }
      bVar6 = *pbVar5;
      while( true ) {
        if (bVar6 == 0) goto LAB_00404213;
        if (((*(byte *)(*ppuVar4 + bVar6) & 1) != 0) || (bVar6 == 10)) break;
        pbVar5 = pbVar5 + 1;
        bVar6 = *pbVar5;
      }
      bVar6 = *pbVar5;
LAB_004042ac:
      if (bVar6 == 0) goto LAB_00404213;
    }
    else {
      if ((int)(char)bVar6 == uVar3) goto LAB_004042ac;
      if (bVar6 == 0) goto LAB_00404213;
      do {
        pbVar5 = pbVar5 + 1;
        if (*pbVar5 == 0) goto LAB_00404213;
      } while ((int)(char)*pbVar5 != uVar3);
    }
    *pbVar5 = 0;
    cVar2 = FUN_00402c00(param_1,lVar9);
    uVar3 = DAT_00610254;
    if (cVar2 == '\0') {
      uVar8 = 0;
    }
    pcVar1 = stdout->_IO_write_ptr;
    uVar7 = 0x20;
    if (DAT_00610254 != 0x80) {
      uVar7 = DAT_00610254;
    }
    if (pcVar1 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = (char)uVar7;
    }
    else {
      __overflow(stdout,uVar7 & 0xff);
      uVar3 = DAT_00610254;
    }
    param_1 = pbVar5 + 1;
  } while( true );
}


void FUN_00404360(int param_1)

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
  undefined auVar15 [16];
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
  
  uVar7 = DAT_006103d8;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040439f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [NUMBER]...\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Reformat NUMBER(s), or the numbers from standard input if none are specified.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --debug          print warnings about invalid input\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -d, --delimiter=X    use X instead of whitespace for field delimiter\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --field=FIELDS   replace the numbers in these input fields (default=1)\n                         see FIELDS below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --format=FORMAT  use printf style floating-point FORMAT;\n                         see FORMAT below for details\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --from=UNIT      auto-scale input numbers to UNITs; default is \'none\';\n                         see UNIT below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --from-unit=N    specify the input unit size (instead of the default 1)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --grouping       use locale-defined grouping of digits, e.g. 1,000,000\n                         (which means it has no effect in the C/POSIX locale)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --header[=N]     print (without converting) the first N header lines;\n                         N defaults to 1 if not specified\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --invalid=MODE   failure mode for invalid numbers: MODE can be:\n                         abort (default), fail, warn, ignore\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --padding=N      pad the output to N characters; positive N will\n                         right-align; negative N will left-align;\n                         padding is ignored if the output is wider than N;\n                         the default is to automatically pad if a whitespace\n                         is found\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --round=METHOD   use METHOD for rounding when scaling; METHOD can be:\n                         up, down, from-zero (default), towards-zero, nearest\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --suffix=SUFFIX  add SUFFIX to output numbers, and accept optional\n                         SUFFIX in input numbers\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --to=UNIT        auto-scale output numbers to UNITs; see UNIT below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --to-unit=N      the output unit size (instead of the default 1)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nUNIT options:\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  none       no auto-scaling is done; suffixes will trigger an error\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  auto       accept optional single/two letter suffix:\n               1K = 1000,\n               1Ki = 1024,\n               1M = 1000000,\n               1Mi = 1048576,\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  si         accept optional single letter suffix:\n               1K = 1000,\n               1M = 1000000,\n               ...\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  iec        accept optional single letter suffix:\n               1K = 1024,\n               1M = 1048576,\n               ...\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  iec-i      accept optional two-letter suffix:\n               1Ki = 1024,\n               1Mi = 1048576,\n               ...\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFIELDS supports cut(1) style field ranges:\n  N    N\'th field, counted from 1\n  N-   from N\'th field, to end of line\n  N-M  from N\'th to M\'th field (inclusive)\n  -M   from first to M\'th field (inclusive)\n  -    all fields\nMultiple fields/ranges can be separated with commas\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFORMAT must be suitable for printing one floating-point argument \'%f\'.\nOptional quote (%\'f) will enable --grouping (if supported by current locale).\nOptional width value (%10f) will pad output. Optional zero (%010f) width\nwill zero pad the number. Optional negative values (%-10f) will left align.\nOptional precision (%.1f) will override the input determined precision.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar7 = DAT_006103d8;
  uVar3 = dcgettext(0,
                    "\nExit status is 0 if all input numbers were successfully converted.\nBy default, %s will stop at the first conversion error with exit status 2.\nWith --invalid=\'fail\' a warning is printed for each conversion error\nand the exit status is 2.  With --invalid=\'warn\' each conversion error is\ndiagnosed, but the exit status is 0.  With --invalid=\'ignore\' conversion\nerrors are not diagnosed and the exit status is 0.\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7);
  uVar7 = DAT_006103d8;
  auVar15 = dcgettext(0,
                      "\nExamples:\n  $ %s --to=si 1000\n            -> \"1.0K\"\n  $ %s --to=iec 2048\n           -> \"2.0K\"\n  $ %s --to=iec-i 4096\n           -> \"4.0Ki\"\n  $ echo 1K | %s --from=si\n           -> \"1000\"\n  $ echo 1K | %s --from=iec\n           -> \"1024\"\n  $ df -B1 | %s --header --field 2-4 --to=si\n  $ ls -l  | %s --header --field 5 --to=iec\n  $ ls -lh | %s --header --field 5 --from=iec --padding=10\n  $ ls -lh | %s --header --field 5 --from=iec --format %%10f\n"
                      ,5);
  __printf_chk(1,SUB168(auVar15,0),uVar7,uVar7,uVar7,uVar7,uVar7,uVar7,uVar7,uVar7,uVar7,
               SUB168(auVar15 >> 0x40,0));
  local_88 = &DAT_0040a123;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40a19d;
  local_78[1] = (byte *)0x40a135;
  local_78[2] = (byte *)0x40a14b;
  local_78[3] = (byte *)0x40a155;
  local_78[4] = (byte *)0x40a164;
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
    lVar9 = 7;
    pbVar10 = (byte *)"numfmt";
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
        pcVar4 = "numfmt";
        goto LAB_004049e3;
      }
    }
    pcVar4 = "numfmt";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","numfmt");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_004049e3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"numfmt");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","numfmt");
    if (pcVar4 != "numfmt") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_0040439f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


ulong FUN_00404a10(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffff;
  iVar1 = *param_2;
  if (iVar1 <= *param_1) {
    uVar2 = (ulong)(*param_1 != iVar1 && iVar1 <= *param_1);
  }
  return uVar2;
}


void FUN_00404a30(undefined param_1,undefined param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (DAT_00610568 == DAT_006103c0) {
    if (DAT_00610560 == 0) {
      if (DAT_006103c0 == 0) {
        lVar2 = 0x80;
        DAT_006103c0 = 8;
      }
      else {
        lVar2 = DAT_006103c0 << 4;
        if ((lVar2 < 0) || (DAT_006103c0 >> 0x3c != 0)) goto LAB_00404ae7;
      }
    }
    else {
      if (0x555555555555554 < DAT_006103c0) {
LAB_00404ae7:
                    /* WARNING: Subroutine does not return */
        FUN_00407da0();
      }
      DAT_006103c0 = DAT_006103c0 + 1 + (DAT_006103c0 >> 1);
      lVar2 = DAT_006103c0 * 0x10;
    }
    DAT_00610560 = FUN_00407bb0(DAT_00610560,lVar2);
  }
  puVar1 = (undefined *)(DAT_00610560 + DAT_00610568 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  DAT_00610568 = DAT_00610568 + 1;
  return;
}


void FUN_00404b00(byte *param_1,uint param_2)

{
  undefined *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort **ppuVar6;
  ulong uVar7;
  size_t sVar8;
  void *__ptr;
  undefined uVar9;
  undefined uVar10;
  long lVar11;
  ulong *puVar12;
  undefined extraout_RDX;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  ulong *__dest;
  ulong uVar16;
  ulong *__ptr_00;
  ulong uVar17;
  bool bVar18;
  bool bVar19;
  ulong local_50;
  
  bVar18 = false;
  bVar19 = (param_2 & 1) == 0;
  if (!bVar19) {
    lVar11 = 2;
    pbVar13 = param_1;
    pbVar15 = &DAT_0040dc7a;
    do {
      if (lVar11 == 0) break;
      lVar11 = lVar11 + -1;
      bVar18 = *pbVar13 < *pbVar15;
      bVar19 = *pbVar13 == *pbVar15;
      pbVar13 = pbVar13 + 1;
      pbVar15 = pbVar15 + 1;
    } while (bVar19);
    if ((!bVar18 && !bVar19) == bVar18) {
      param_1 = param_1 + 1;
      uVar16 = 1;
      bVar18 = true;
      goto LAB_00404b40;
    }
  }
  uVar16 = 0;
  bVar18 = false;
LAB_00404b40:
  bVar5 = false;
  bVar19 = false;
  local_50 = 1;
  bVar4 = bVar18;
  do {
    bVar2 = *param_1;
    if (bVar2 == 0x2d) {
      if (bVar18) {
        if ((param_2 & 4) == 0) {
          uVar10 = dcgettext(0,"invalid field range",5);
        }
        else {
          uVar10 = dcgettext(0,"invalid byte or character range",5);
        }
        goto LAB_00404f0b;
      }
      bVar5 = (bool)(uVar16 == 0 & bVar4);
      if (bVar5) {
        if ((param_2 & 4) == 0) {
LAB_00404fd8:
          uVar10 = dcgettext(0,"fields are numbered from 1",5);
        }
        else {
          uVar10 = dcgettext(0,"byte/character positions are numbered from 1",5);
        }
        goto LAB_00404f0b;
      }
      if (bVar4) {
        uVar17 = 0;
        local_50 = uVar16;
        bVar18 = bVar4;
      }
      else {
        uVar17 = 0;
        local_50 = 1;
        bVar18 = true;
        bVar5 = bVar4;
      }
    }
    else if (((bVar2 == 0x2c) || (ppuVar6 = __ctype_b_loc(), (*(byte *)(*ppuVar6 + bVar2) & 1) != 0)
             ) || (bVar2 == 0)) {
      if (bVar18) {
        if (bVar4) {
          if (!bVar19) goto LAB_00404bbb;
LAB_00404d79:
          if (uVar16 < local_50) goto LAB_00404f8f;
          FUN_00404a30(local_50,uVar16);
        }
        else {
          if (bVar19) goto LAB_00404d79;
          if ((param_2 & 1) == 0) {
            uVar10 = 5;
            pcVar14 = "invalid range with no endpoint: -";
            goto LAB_00404f04;
          }
          local_50 = 1;
LAB_00404bbb:
          FUN_00404a30(local_50,0xffffffffffffffff);
        }
        bVar2 = *param_1;
      }
      else {
        if (uVar16 == 0) {
          if ((param_2 & 4) == 0) goto LAB_00404fd8;
          uVar10 = dcgettext(0,"byte/character positions are numbered from 1",5);
          goto LAB_00404f0b;
        }
        FUN_00404a30(uVar16,uVar16);
        bVar2 = *param_1;
      }
      if (bVar2 == 0) {
        if (DAT_00610568 != 0) {
          uVar17 = 0;
          qsort(DAT_00610560,DAT_00610568,0x10,FUN_00404a10);
          uVar16 = DAT_00610568;
          __ptr_00 = DAT_00610560;
LAB_00404c80:
          do {
            if (uVar16 <= uVar17) {
LAB_00404d11:
              DAT_00610568 = uVar16;
              if ((param_2 & 2) != 0) {
                DAT_00610560 = (ulong *)0x0;
                DAT_00610568 = 0;
                DAT_006103c0 = 0;
                if (1 < *__ptr_00) {
                  FUN_00404a30(1,*__ptr_00 - 1);
                }
                puVar12 = __ptr_00 + 2;
                if (1 < uVar16) {
                  do {
                    if (puVar12[-1] + 1 != *puVar12) {
                      FUN_00404a30(puVar12[-1] + 1,*puVar12 - 1);
                    }
                    puVar12 = puVar12 + 2;
                  } while (__ptr_00 + uVar16 * 2 != puVar12);
                }
                if (__ptr_00[uVar16 * 2 + -1] != 0xffffffffffffffff) {
                  FUN_00404a30(__ptr_00[uVar16 * 2 + -1] + 1,0xffffffffffffffff);
                }
                free(__ptr_00);
                __ptr_00 = DAT_00610560;
              }
              DAT_00610568 = DAT_00610568 + 1;
              DAT_00610560 = (ulong *)FUN_00407bb0(__ptr_00,DAT_00610568 * 0x10);
              puVar1 = (undefined *)((long)DAT_00610560 + -0x10 + DAT_00610568 * 0x10);
              puVar1[1] = 0xffffffffffffffff;
              *puVar1 = 0xffffffffffffffff;
              return;
            }
            while (uVar17 = uVar17 + 1, uVar17 < uVar16) {
              __dest = __ptr_00 + uVar17 * 2;
              puVar12 = __ptr_00 + uVar17 * 2 + -2;
              uVar7 = puVar12[1];
              if (uVar7 < *__dest) break;
              do {
                if (uVar7 <= __dest[1]) {
                  uVar7 = __dest[1];
                }
                puVar12[1] = uVar7;
                memmove(__dest,__ptr_00 + uVar17 * 2 + 2,(uVar16 - uVar17) * 0x10 - 0x10);
                uVar16 = DAT_00610568 - 1;
                __ptr_00 = DAT_00610560;
                DAT_00610568 = uVar16;
                if (uVar16 <= uVar17) goto LAB_00404c80;
                puVar12 = DAT_00610560 + uVar17 * 2 + -2;
                __dest = DAT_00610560 + uVar17 * 2;
                uVar7 = puVar12[1];
              } while (*__dest < uVar7 || *__dest == uVar7);
              if (uVar16 <= uVar17) goto LAB_00404d11;
            }
          } while( true );
        }
        uVar10 = 5;
        if ((param_2 & 4) != 0) {
          uVar10 = dcgettext(0,"missing list of byte/character positions",5);
LAB_00404f0b:
          do {
            error(0,0,uVar10);
            FUN_00404360(1);
LAB_00404f23:
            pbVar13 = DAT_006103b8;
            sVar8 = strspn((char *)DAT_006103b8,"0123456789");
            __ptr = (void *)FUN_00407de0(pbVar13,sVar8);
            uVar10 = FUN_00407590(__ptr);
            if ((param_2 & 4) == 0) {
              uVar9 = dcgettext(0,"field number %s is too large",5);
            }
            else {
              uVar9 = dcgettext(0,"byte/character offset %s is too large",5);
            }
            error(0,0,uVar9,uVar10);
            free(__ptr);
            FUN_00404360();
LAB_00404f8f:
            uVar10 = 5;
            pcVar14 = "invalid decreasing range";
LAB_00404f04:
            uVar10 = dcgettext(0,pcVar14,uVar10);
          } while( true );
        }
LAB_00405086:
        pcVar14 = "missing list of fields";
        goto LAB_00404f04;
      }
      uVar17 = 0;
      bVar5 = false;
      bVar18 = false;
      bVar4 = false;
      bVar19 = false;
    }
    else {
      if (9 < (int)(char)bVar2 - 0x30U) {
        uVar10 = FUN_00407590(param_1);
        if ((param_2 & 4) == 0) {
          uVar9 = dcgettext(0,"invalid field value %s",5);
        }
        else {
          uVar9 = dcgettext(0,"invalid byte/character position %s",5);
        }
        error(0,0,uVar9,uVar10);
        FUN_00404360(1);
        uVar10 = extraout_RDX;
        goto LAB_00405086;
      }
      if ((!bVar5) || (DAT_006103b8 == (byte *)0x0)) {
        DAT_006103b8 = param_1;
      }
      bVar3 = bVar18;
      if (!bVar18) {
        bVar4 = true;
        bVar3 = bVar19;
      }
      if (0x1999999999999999 < uVar16) goto LAB_00404f23;
      uVar17 = (long)((char)bVar2 + -0x30) + uVar16 * 10;
      if (uVar17 < uVar16) goto LAB_00404f23;
      if (uVar17 == 0xffffffffffffffff) goto LAB_00404f23;
      bVar5 = true;
      bVar19 = bVar3;
    }
    param_1 = param_1 + 1;
    uVar16 = uVar17;
  } while( true );
}


void FUN_004050a0(void)

{
  DAT_00610568 = 0;
  DAT_006103c0 = 0;
  free(DAT_00610560);
  DAT_00610560 = (void *)0x0;
  return;
}


void FUN_004050e0(void)

{
  FUN_00404360(1);
  return;
}


long FUN_004050f0(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_00405187:
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
          goto LAB_00405187;
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


void FUN_00405210(undefined param_1,undefined param_2,long param_3)

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
  uVar2 = FUN_00407570(1,param_1);
  uVar3 = FUN_00407260(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_00405290(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_00407590(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00405360;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00407590(lVar5);
    __fprintf_chk(stderr,1,&DAT_0040c36b,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00405360:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_004053b0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_004050f0(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_00405210(param_1,param_2,lVar1);
    FUN_00405290(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_00405420(void *param_1,long *param_2,void *param_3,size_t param_4)

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


void FUN_00405470(undefined param_1)

{
  DAT_006103d0 = param_1;
  return;
}


void FUN_00405480(undefined param_1)

{
  DAT_006103c8 = param_1;
  return;
}


void FUN_00405490(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_004097e0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_006103c8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_006103d0 == 0) {
        error(0,*piVar2,&DAT_0040c36d,uVar3);
      }
      else {
        uVar4 = FUN_004073e0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040550e;
    }
  }
  iVar1 = FUN_004097e0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040550e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00610290);
}


long FUN_00405530(char *param_1,undefined *param_2,long param_3,ulong *param_4,int param_5,
                 uint param_6)

{
  size_t __n;
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  size_t sVar7;
  size_t sVar8;
  char *__s;
  ulong uVar9;
  undefined *puVar10;
  wchar_t *pwVar12;
  wchar_t wVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  wchar_t *local_68;
  char *local_50;
  size_t local_48;
  undefined *puVar11;
  
  uVar4 = strlen(param_1);
  uVar14 = uVar4;
  if (((param_6 & 2) == 0) && (sVar7 = __ctype_get_mb_cur_max(), 1 < sVar7)) {
    sVar7 = mbstowcs((wchar_t *)0x0,param_1,0);
    if (sVar7 == 0xffffffffffffffff) {
      if ((param_6 & 1) == 0) {
LAB_004056e0:
        local_68 = (wchar_t *)0x0;
        __s = (char *)0x0;
        lVar15 = -1;
        goto LAB_0040564e;
      }
      goto LAB_00405568;
    }
    __n = sVar7 + 1;
    local_68 = (wchar_t *)malloc(__n * 4);
    local_50 = param_1;
    if (local_68 == (wchar_t *)0x0) {
      __s = (char *)0x0;
      if ((param_6 & 1) == 0) goto LAB_004056e0;
      goto LAB_00405576;
    }
    sVar8 = mbstowcs(local_68,param_1,__n);
    if (sVar8 == 0) {
      __s = (char *)0x0;
      goto LAB_00405576;
    }
    local_68[sVar7] = L'\0';
    wVar13 = *local_68;
    if (wVar13 != L'\0') {
      bVar2 = false;
      pwVar12 = local_68;
      do {
        iVar3 = iswprint(wVar13);
        if (iVar3 == 0) {
          *pwVar12 = L'�';
          bVar2 = true;
        }
        pwVar12 = pwVar12 + 1;
        wVar13 = *pwVar12;
      } while (wVar13 != L'\0');
      iVar3 = wcswidth(local_68,__n);
      uVar14 = (ulong)iVar3;
      if (!bVar2) goto LAB_00405850;
      local_48 = wcstombs((char *)0x0,local_68,0);
LAB_004057c0:
      local_48 = local_48 + 1;
      __s = (char *)malloc(local_48);
      if (__s == (char *)0x0) {
        if ((param_6 & 1) == 0) {
          lVar15 = -1;
          goto LAB_0040564e;
        }
      }
      else {
        uVar4 = *param_4;
        wVar13 = *local_68;
        pwVar12 = local_68;
        if (wVar13 == L'\0') {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          do {
            iVar3 = wcwidth(wVar13);
            if (iVar3 == -1) {
              *pwVar12 = L'�';
              lVar15 = 1;
            }
            else {
              lVar15 = (long)iVar3;
            }
            uVar6 = lVar15 + uVar14;
            if (uVar4 < uVar6) break;
            pwVar12 = pwVar12 + 1;
            wVar13 = *pwVar12;
            uVar14 = uVar6;
          } while (wVar13 != L'\0');
        }
        *pwVar12 = L'\0';
        uVar4 = wcstombs(__s,local_68,local_48);
        local_50 = __s;
      }
      goto LAB_00405576;
    }
    iVar3 = wcswidth(local_68,__n);
    uVar14 = (ulong)iVar3;
LAB_00405850:
    uVar6 = *param_4;
    local_48 = uVar4;
    if (uVar6 < uVar14) goto LAB_004057c0;
    __s = (char *)0x0;
LAB_0040567b:
    uVar16 = uVar4;
    uVar9 = uVar14;
    if (uVar6 <= uVar14) goto LAB_00405588;
    uVar6 = uVar6 - uVar14;
    *param_4 = uVar14;
    if (param_5 != 0) goto LAB_00405598;
LAB_0040569d:
    uVar4 = 0;
    uVar14 = uVar6;
  }
  else {
LAB_00405568:
    local_68 = (wchar_t *)0x0;
    __s = (char *)0x0;
    local_50 = param_1;
LAB_00405576:
    uVar6 = *param_4;
    uVar9 = uVar6;
    uVar16 = uVar6;
    if (uVar14 <= uVar6) goto LAB_0040567b;
LAB_00405588:
    uVar6 = 0;
    *param_4 = uVar9;
    if (param_5 == 0) goto LAB_0040569d;
LAB_00405598:
    uVar4 = uVar6;
    uVar14 = 0;
    if (param_5 != 1) {
      uVar4 = (ulong)((uint)uVar6 & 1) + (uVar6 >> 1);
      uVar14 = uVar6 >> 1;
    }
  }
  uVar6 = uVar4 + uVar16;
  if ((param_6 & 4) != 0) {
    uVar4 = 0;
    uVar6 = uVar16;
  }
  if ((param_6 & 8) != 0) {
    uVar14 = 0;
  }
  if (param_3 != 0) {
    puVar1 = param_2 + param_3 + -1;
    puVar10 = param_2;
    if ((param_2 < puVar1) && (puVar5 = param_2, uVar4 != 0)) {
      do {
        puVar10 = puVar5 + 1;
        *puVar5 = 0x20;
        if (param_2 + (uVar4 - (long)puVar10) == (undefined *)0x0) break;
        puVar5 = puVar10;
      } while (puVar10 < puVar1);
    }
    *puVar10 = 0;
    uVar4 = (long)puVar1 - (long)puVar10;
    if (uVar16 < (ulong)((long)puVar1 - (long)puVar10)) {
      uVar4 = uVar16;
    }
    puVar5 = (undefined *)mempcpy(puVar10,local_50,uVar4);
    puVar10 = puVar5;
    if ((puVar5 < puVar1) && (puVar11 = puVar5, uVar14 != 0)) {
      do {
        puVar10 = puVar11 + 1;
        *puVar11 = 0x20;
        if (puVar5 + (uVar14 - (long)puVar10) == (undefined *)0x0) break;
        puVar11 = puVar10;
      } while (puVar10 < puVar1);
    }
    *puVar10 = 0;
  }
  lVar15 = uVar14 + uVar6;
LAB_0040564e:
  free(local_68);
  free(__s);
  return lVar15;
}


void * FUN_004058d0(undefined param_1,ulong *param_2,undefined param_3,undefined param_4)

{
  ulong __size;
  ulong uVar1;
  void *__ptr;
  ulong uVar2;
  void *__ptr_00;
  
  uVar1 = *param_2;
  uVar2 = uVar1;
  __ptr_00 = (void *)0x0;
  while( true ) {
    __size = uVar2 + 1;
    __ptr = realloc(__ptr_00,__size);
    if (__ptr == (void *)0x0) {
      free(__ptr_00);
      return (void *)0x0;
    }
    *param_2 = uVar1;
    uVar2 = FUN_00405530(param_1,__ptr,__size,param_2,param_3,param_4);
    if (uVar2 == 0xffffffffffffffff) break;
    __ptr_00 = __ptr;
    if (uVar2 < __size) {
      return __ptr;
    }
  }
  free(__ptr);
  return (void *)0x0;
}


void FUN_00405970(byte *param_1)

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
        pbVar6 = &DAT_0040c3c8;
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
  DAT_006103d8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00405a10(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004098a0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00405ae8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040c3d9;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040c3ce;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00405ae8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040c3d5;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040c3d2;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00405b10(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00406761:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00406396;
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
      goto LAB_00406761;
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
      param_8 = (char *)FUN_00405a10(&DAT_0040c3dd,param_5);
      param_9 = (char *)FUN_00405a10(&DAT_0040dc67);
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
LAB_00405ba8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00405bb8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00406338;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004062b0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004062c2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040612e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405fc5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004062c2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004062c2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004062c2_caseD_b:
        bVar17 = 0x76;
        goto LAB_00405fc5;
      case 0xc:
switchD_004062c2_caseD_c:
        bVar17 = 0x66;
LAB_00405fc5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00405f18;
        }
LAB_00405fd0:
        bVar23 = false;
        goto LAB_00405d8b;
      case 0xd:
        bVar20 = false;
switchD_00405ca8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00405ee0;
      case 0x20:
        bVar25 = false;
LAB_0040630a:
        uVar19 = 0x20;
        goto LAB_004062d2;
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
switchD_00405ca8_caseD_21:
        bVar25 = false;
        goto LAB_00405eeb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004062ea:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00405cf8;
        }
        bVar23 = false;
        goto LAB_00405d0f;
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
LAB_004062d2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00405d11;
      case 0x27:
        bVar20 = false;
        goto switchD_0040612e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040612e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00405ca8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040612e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00405f07;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004062b0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00405ca8_caseD_0;
      default:
        goto switchD_0040612e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405fd0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004062c2_caseD_9;
      case 10:
        goto switchD_004062c2_caseD_a;
      case 0xb:
        goto switchD_004062c2_caseD_b;
      case 0xc:
        goto switchD_004062c2_caseD_c;
      case 0xd:
        goto switchD_00405ca8_caseD_d;
      case 0x20:
        goto LAB_0040630a;
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
        goto switchD_00405ca8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004062ea;
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
        goto LAB_004062d2;
      case 0x27:
        goto switchD_0040612e_caseD_27;
      case 0x3f:
        goto switchD_0040612e_caseD_3f;
      case 0x5c:
        goto switchD_00405ca8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040612e_caseD_7b;
      }
      goto LAB_00405d52;
    }
    goto LAB_00405f2a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004062c2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00405ca8_caseD_0:
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
            goto LAB_00405e08;
          }
LAB_0040604a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040604a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00405e08;
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
LAB_00406089:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00405e08;
        goto LAB_00405d11;
      }
      bVar26 = param_5 == 2;
      goto LAB_00405f1c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00405cf8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00405bb8;
  default:
switchD_0040612e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00409760(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00406a3a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00406b77;
          goto LAB_00406b67;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00405f1c;
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
      goto LAB_00406a3a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00406104;
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
    goto LAB_00406142;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00406142;
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
LAB_00406142:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040615a:
      param_5 = 2;
      goto LAB_00405f1c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00405ce6;
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
LAB_00405ce6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040615a;
    goto LAB_00405cf8;
  case 0x23:
  case 0x7e:
LAB_00405cdd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00405ce6;
    goto LAB_00405eeb;
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
    goto switchD_0040612e_caseD_25;
  case 0x27:
switchD_0040612e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00405cf8;
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
      goto LAB_00405e08;
    }
    goto LAB_00405f1c;
  case 0x3f:
switchD_0040612e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00405e08;
      }
      goto LAB_00405f1c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00405cf8;
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
        goto LAB_00406089;
      }
      goto LAB_00405f2a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00405cf8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00405ca8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00405e24;
    }
    if (local_5c) goto LAB_00405f1c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00405e24;
  case 0x7b:
  case 0x7d:
switchD_0040612e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00405cdd;
    goto LAB_00405eeb;
  }
LAB_00405ee0:
  if (!bVar6) {
LAB_00405eeb:
    bVar23 = false;
    goto LAB_00405cf8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00405f07;
LAB_00406338:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00405f1c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00405f2a:
    uVar9 = FUN_00405b10(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00406c0d:
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
    uVar9 = FUN_00405b10(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00406c0d;
LAB_00406396:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00405ba8;
  while (__s1[uVar21] != 0) {
LAB_00406b67:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00406b77:
  bVar23 = false;
LAB_00406a3a:
  if (1 < uVar21) {
LAB_004065fe:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00405f1c;
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
        if (uVar21 <= uVar22) goto LAB_00405d9d;
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
        if (uVar21 <= uVar22) goto LAB_00405e24;
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
LAB_00406104:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_004065fe;
  }
switchD_0040612e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00405cf8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00405d0f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00405d11:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00405e08;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00405e08:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00405e24:
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
      goto LAB_00405d9d;
    }
  }
joined_r0x00405f07:
  if (local_5c) {
LAB_00405f18:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00405f1c;
  }
LAB_00405d52:
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
LAB_00405d8b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00405d9d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00405bb8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00406d40(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_006102d8;
  if (DAT_006102f0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00407da0();
    }
    if (PTR_DAT_006102d8 == &DAT_006102e0) {
      puVar8 = (undefined *)FUN_00407bb0(0);
      uVar6 = PTR_DAT_006102e8._4_4_;
      uVar5 = PTR_DAT_006102e8._0_4_;
      uVar3 = _UNK_006102e4;
      PTR_DAT_006102d8 = (undefined *)puVar8;
      *puVar8 = _DAT_006102e0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00407bb0(PTR_DAT_006102d8);
      PTR_DAT_006102d8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_006102f0 * 4,0,(long)((param_1 + 1) - DAT_006102f0) << 4);
    DAT_006102f0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00405b10(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_006103e0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00407b50(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00405b10(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00406ee0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006104e0;
  }
  FUN_00407d50(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00406f20(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006104e0;
  }
  return *param_1;
}


void FUN_00406f30(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006104e0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00406f40(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006104e0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00406f80(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006104e0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00406fa0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006104e0;
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


void FUN_00406fd0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_006104e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00405b10(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00407050(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_006104e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00405b10(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00407b50(lVar3 + 1);
  FUN_00405b10(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00407140(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00407050(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407150(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_006102d8;
  if (1 < DAT_006102f0) {
    ppvVar2 = (void **)(PTR_DAT_006102d8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_006102d8 + (ulong)(DAT_006102f0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_006103e0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_006102e0 = 0x100;
    PTR_DAT_006102e8 = &DAT_006103e0;
  }
  if (__ptr_00 != &DAT_006102e0) {
    free(__ptr_00);
    PTR_DAT_006102d8 = &DAT_006102e0;
  }
  DAT_006102f0 = 1;
  return;
}


void FUN_004071f0(undefined param_1,undefined param_2)

{
  FUN_00406d40(param_1,param_2,0xffffffffffffffff,&DAT_006104e0);
  return;
}


void FUN_00407210(void)

{
  FUN_00406d40();
  return;
}


void FUN_00407220(undefined param_1)

{
  FUN_00406d40(0,param_1,0xffffffffffffffff,&DAT_006104e0);
  return;
}


void FUN_00407240(undefined param_1,undefined param_2)

{
  FUN_00406d40(0,param_1,param_2,&DAT_006104e0);
  return;
}


void FUN_00407260(undefined param_1,int param_2,undefined param_3)

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
    FUN_00406d40(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004072d0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00406d40(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407340(undefined param_1,undefined param_2)

{
  FUN_00407260(0,param_1,param_2);
  return;
}


void FUN_00407350(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004072d0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407360(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_00610510;
  local_48 = _DAT_006104e0;
  uStack_40 = uRam00000000006104e8;
  local_38 = _DAT_006104f0;
  uStack_30 = uRam00000000006104f8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00610500;
  uStack_20 = uRam0000000000610508;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00406d40(0,param_1,param_2,&local_48);
  return;
}


void FUN_004073d0(undefined param_1,char param_2)

{
  FUN_00407360(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_004073e0(undefined param_1)

{
  FUN_00407360(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00407400(undefined param_1,undefined param_2)

{
  FUN_00407360(param_1,param_2,0x3a);
  return;
}


void FUN_00407410(undefined param_1,int param_2,undefined param_3)

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
    FUN_00406d40(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407480(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam00000000006104e8;
  local_38 = _DAT_006104f0;
  uStack_30 = uRam00000000006104f8;
  local_28 = _DAT_00610500;
  lStack_20 = uRam0000000000610508;
  local_18 = DAT_00610510;
  local_48 = CONCAT44((int)((ulong)_DAT_006104e0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00406d40(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004074f0(void)

{
  FUN_00407480();
  return;
}


void FUN_00407500(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00407480(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00407520(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00407480(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00407540(void)

{
  FUN_00406d40();
  return;
}


void FUN_00407550(undefined param_1,undefined param_2)

{
  FUN_00406d40(0,param_1,param_2,&DAT_006102a0);
  return;
}


void FUN_00407570(undefined param_1,undefined param_2)

{
  FUN_00406d40(param_1,param_2,0xffffffffffffffff,&DAT_006102a0);
  return;
}


void FUN_00407590(undefined param_1)

{
  FUN_00406d40(0,param_1,0xffffffffffffffff,&DAT_006102a0);
  return;
}


undefined
FUN_004075b0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040d12b,5);
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
    goto LAB_0040782c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040782c:
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
    goto LAB_004078c9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004078c9:
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
    goto LAB_004076aa;
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
LAB_004076aa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00407990(void)

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
  FUN_004075b0();
  return;
}


void FUN_004079b0(void)

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
  FUN_004075b0();
  return;
}


void FUN_00407a10(void)

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
  FUN_004075b0();
  return;
}


void FUN_00407ad0(void)

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


void FUN_00407b50(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00407da0();
  }
  return;
}


void FUN_00407b70(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00407b50();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00407da0();
}


void thunk_FUN_00407b50(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00407da0();
  }
  return;
}


void * FUN_00407bb0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00407da0();
  }
  return pvVar1;
}


void FUN_00407bf0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00407bb0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00407da0();
}


void FUN_00407c20(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00407c7b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00407c7b:
                    /* WARNING: Subroutine does not return */
      FUN_00407da0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00407bb0(param_1,uVar2 * param_3);
  return;
}


void FUN_00407cb0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00407bb0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00407cfa;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00407cfa:
                    /* WARNING: Subroutine does not return */
      FUN_00407da0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00407bb0(param_1,uVar1);
  return;
}


void FUN_00407d00(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00407b50();
  memset(__s,0,param_1);
  return;
}


void FUN_00407d20(size_t param_1,ulong param_2)

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
  FUN_00407da0();
}


void FUN_00407d50(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00407b50(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00407d80(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00407b50(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00407da0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_00610290,0,&DAT_0040c36d,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407de0(char *param_1,size_t param_2)

{
  char *pcVar1;
  
  pcVar1 = strndup(param_1,param_2);
  if (pcVar1 != (char *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00407da0();
}


ulong FUN_00407e00(byte *param_1,byte **param_2,uint param_3,long *param_4,char *param_5)

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
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtol");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = local_40;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  lVar5 = strtol((char *)param_1,(char **)param_2,param_3);
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
    if ((param_5 == (char *)0x0) || (bVar1 = *pbVar3, bVar1 == 0)) goto LAB_00407e75;
    pcVar7 = strchr(param_5,(int)(char)bVar1);
    if (pcVar7 == (char *)0x0) goto switchD_00407f02_caseD_1;
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
        goto LAB_00407ef0;
      }
      if (bVar2 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00407f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040d6a8)[bVar11])();
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
LAB_00407ef0:
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    if (lVar5 < -0x20000000000000) goto LAB_00408098;
    if (lVar5 < 0x20000000000000) {
      lVar5 = lVar5 << 10;
    }
    else {
LAB_00408450:
      lVar5 = 0x7fffffffffffffff;
      uVar6 = 1;
    }
    break;
  default:
switchD_00407f02_caseD_1:
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
    goto LAB_00408440;
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
    goto LAB_00408440;
  case 9:
  case 0x29:
    if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                       ZEXT816(0x8000000000000000)) / SEXT816((long)iVar14),0)) goto LAB_00408098;
    lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                   ZEXT816(0x7fffffffffffffff)) / SEXT816((long)iVar14),0);
LAB_0040803c:
    if (lVar8 < lVar5) goto LAB_00408450;
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
      if (lVar8 < lVar5) goto LAB_00408450;
      lVar5 = lVar5 * lVar9;
      if (lVar10 <= lVar5) goto LAB_0040803c;
    }
LAB_00408098:
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
    goto LAB_00408440;
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
    goto LAB_00408440;
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
    goto LAB_00408440;
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
LAB_00408440:
    uVar6 = (ulong)(uVar15 | uVar12);
    break;
  case 0x20:
    if (lVar5 < -0x40000000000000) goto LAB_00408098;
    if (0x3fffffffffffff < lVar5) goto LAB_00408450;
    lVar5 = lVar5 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if (lVar5 < -0x4000000000000000) goto LAB_00408098;
    if (0x3fffffffffffffff < lVar5) goto LAB_00408450;
    lVar5 = lVar5 * 2;
  }
  *param_2 = pbVar3 + iVar13;
  if (pbVar3[iVar13] != 0) {
    uVar6 = (ulong)((uint)uVar6 | 2);
  }
LAB_00407e75:
  *param_4 = lVar5;
  return uVar6;
}


ulong FUN_00408550(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_004085f2;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_004086dc_caseD_1;
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
        goto LAB_004086ca;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x004086b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040d830)[bVar8])();
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
LAB_004086ca:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00408737;
  default:
switchD_004086dc_caseD_1:
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
    goto LAB_004087c4;
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
    goto joined_r0x004086fc;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00408737;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x004086fc:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00408737:
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
    goto LAB_004087c4;
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
    goto LAB_004087c4;
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
    goto LAB_004087c4;
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
LAB_004087c4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00408737;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00408737;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_004085f2:
  *param_4 = uVar6;
  return uVar14;
}


void FUN_00408990(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00408a0c;
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
      if (iVar9 <= iVar3) goto LAB_00408a0c;
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
LAB_00408a0c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00408a70(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00408c90;
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
            if (local_70 == (char *)0x0) goto LAB_00408bd0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00408bd0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00408bd0:
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
              __fprintf_chk(__stream,1,&DAT_0040dc61,param_9,*param_4);
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
LAB_00408c90:
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


uint FUN_00409090(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_004090da:
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
          goto LAB_004091dd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_004091dd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_004091e8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00409158;
LAB_004091fc:
    if (*pbVar8 == 0) goto LAB_00409158;
  }
  else {
    if (param_7[6] == 0) goto LAB_004090da;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_004091e8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004091fc;
LAB_00409158:
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
        FUN_00408990(param_2,param_7);
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
LAB_004092c6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040dc79;
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
          FUN_00408990(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_004092c6;
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
        puVar15 = &DAT_0040dc79;
        goto LAB_00409425;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_004093d0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00408a70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040dc7a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_004093d0:
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
  puVar15 = &DAT_0040dc98;
LAB_00409425:
  uVar3 = FUN_00408a70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409660(void)

{
  DAT_00610520 = DAT_006102f8._4_4_;
  _DAT_00610524 = (undefined)DAT_006102f8;
  FUN_00409090();
  DAT_006102f8._4_4_ = DAT_00610520;
  DAT_00610570 = DAT_00610530;
  _DAT_006102f4 = DAT_00610528;
  return;
}


void FUN_004096c0(void)

{
  FUN_00409660();
  return;
}


void FUN_004096e0(void)

{
  FUN_00409660();
  return;
}


void FUN_00409700(void)

{
  FUN_00409090();
  return;
}


void FUN_00409720(void)

{
  FUN_00409660();
  return;
}


void FUN_00409740(void)

{
  FUN_00409090();
  return;
}


size_t FUN_00409760(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40dc97;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00409784;
  }
  param_1 = &local_1c;
LAB_00409784:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00409840(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_004097e0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00409e10(param_1);
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


bool FUN_00409840(int param_1)

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
    pbVar5 = &DAT_0040dc9c;
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

char * FUN_004098a0(void)

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
  if (DAT_00610558 != (char *)0x0) goto LAB_004098da;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004099c5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004099e6;
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
        goto LAB_004099c5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004099e6:
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
LAB_00409a80:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00409c0c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00409a80;
              if (uVar4 == 0x23) goto LAB_00409c71;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00409c1f;
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
                FUN_00409e10(__stream);
                goto LAB_00409a24;
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
LAB_00409c0c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00409c1f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00409a1e;
    }
  }
  DAT_00610558 = "";
LAB_004098da:
  cVar1 = *DAT_00610558;
  pcVar7 = DAT_00610558;
  do {
    if (cVar1 == '\0') {
LAB_00409934:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00409934;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00409c71:
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
  if (uVar4 == 0xffffffff) goto LAB_00409c1f;
  goto LAB_00409a80;
LAB_00409c1f:
  FUN_00409e10(__stream);
  if (local_d0 == 0) {
LAB_00409a1e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00409a24:
  free(__file);
  DAT_00610558 = pcVar7;
  goto LAB_004098da;
}


int FUN_00409e10(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00409e77;
    }
    iVar1 = FUN_00409e90(param_1);
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
LAB_00409e77:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00409e90(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00409ed0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00409ed0(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x00409f63) */
/* WARNING: Removing unreachable block (ram,0x00409f68) */

void FUN_00409f30(void)

{
  __DT_INIT();
  return;
}


void FUN_00409f90(void)

{
  return;
}


void FUN_00409fa0(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_00610248);
  return;
}


undefined FUN_00409fb8(undefined param_1,undefined param_2,undefined param_3)

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
  FUN_00402951();
  return;
}

