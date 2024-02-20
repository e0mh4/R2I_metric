
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_004053b0caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402075(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040207a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040207f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402084(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402089(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00407d2acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

byte FUN_004020a0(int param_1,undefined *param_2)

{
  byte *__file;
  size_t __n;
  ulong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  byte *__ptr;
  void *pvVar7;
  char *pcVar8;
  size_t sVar9;
  int *piVar10;
  char *pcVar11;
  undefined uVar12;
  long lVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte **ppbVar17;
  undefined uVar18;
  undefined uVar19;
  bool bVar20;
  byte bVar21;
  undefined auVar22 [16];
  undefined uStack_a8;
  byte **local_a0;
  int local_98;
  int local_94;
  void *local_90;
  byte *local_88;
  byte *local_80;
  void *local_78;
  byte *local_70;
  void *local_68;
  byte **local_60;
  undefined local_58 [16];
  undefined local_48 [8];
  undefined uStack_40;
  
  bVar21 = 0;
  local_58 = (undefined)0x0;
  _local_48 = (undefined)0x0;
  FUN_004051c0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040a210(FUN_004042c0);
  local_58 = CONCAT88(3,local_58._0_8_);
  _local_48 = CONCAT88(uStack_40,0xffffffffffffffff);
  pcVar8 = (char *)0x0;
LAB_00402120:
  pcVar14 = pcVar8;
  iVar3 = FUN_004099c0(param_1,param_2,"fn:s:uvxz",&PTR_s_exact_0040b420,0);
  pcVar8 = DAT_0060f540;
  if (iVar3 == -1) {
    lVar6 = (long)DAT_0060f35c;
    param_1 = param_1 - DAT_0060f35c;
    if (param_1 == 0) {
      uVar12 = dcgettext(0,"missing file operand",5);
      error(0,0,uVar12);
      goto LAB_0040289b;
    }
    DAT_0060f398 = FUN_00406e30(pcVar14,0xffffffffffffffff);
    if (DAT_0060f398 != 0) {
      FUN_0040a210();
      if (param_1 < 1) {
        uStack_a8 = 0x100000000000000;
      }
      else {
        ppbVar17 = (byte **)(param_2 + lVar6);
        uStack_a8 = CONCAT17(1,(undefined)uStack_a8);
        local_a0 = (byte **)(param_2 + (ulong)(param_1 - 1) + lVar6 + 1);
        local_94 = iVar3;
        do {
          uVar18 = 0;
          uVar19 = 1;
          uVar12 = FUN_00406c60(0,3,*ppbVar17);
          __ptr = (byte *)FUN_00408470(uVar12);
          lVar6 = DAT_0060f398;
          __file = *ppbVar17;
          lVar13 = 2;
          pbVar15 = __file;
          pbVar16 = &DAT_0040ccb2;
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            uVar18 = *pbVar15 < *pbVar16;
            uVar19 = *pbVar15 == *pbVar16;
            pbVar15 = pbVar15 + (ulong)bVar21 * -2 + 1;
            pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
          } while ((bool)uVar19);
          if ((!(bool)uVar18 && !(bool)uVar19) == (bool)uVar18) {
            uVar4 = FUN_00408a90(1,3);
            if ((int)uVar4 < 0) {
              uVar12 = dcgettext(0,"%s: fcntl failed",5);
              piVar10 = __errno_location();
              error(0,*piVar10,uVar12,__ptr);
              bVar2 = 0;
            }
            else if ((uVar4 & 0x400) == 0) {
              bVar2 = FUN_004033d0(1,__ptr,lVar6,local_58);
            }
            else {
              uVar12 = dcgettext(0,"%s: cannot shred append-only file descriptor",5);
              error(0,0,uVar12,__ptr);
              bVar2 = 0;
            }
            uStack_a8 = uStack_a8 & 0xffffffffffffff | (ulong)(uStack_a8._7_1_ & bVar2) << 0x38;
          }
          else {
            iVar3 = FUN_004044d0(__file,0x101);
            if ((iVar3 < 0) &&
               ((((piVar10 = __errno_location(), *piVar10 != 0xd || (local_58[0] == '\0')) ||
                 (iVar3 = chmod((char *)__file,0x80), iVar3 != 0)) ||
                (iVar3 = FUN_004044d0(__file,0x101), iVar3 < 0)))) {
              uVar12 = dcgettext(0,"%s: failed to open for writing",5);
              bVar2 = 0;
              error(0,*piVar10,uVar12,__ptr);
            }
            else {
              bVar2 = FUN_004033d0(iVar3,__ptr,lVar6,local_58);
              iVar3 = close(iVar3);
              if (iVar3 == 0) {
                if ((bVar2 != 0) && ((int)uStack_40 != 0)) {
                  pvVar7 = (void *)FUN_00408470(__file);
                  local_78 = pvVar7;
                  pcVar8 = (char *)FUN_00404440(pvVar7);
                  local_68 = (void *)FUN_00404360(pvVar7);
                  uVar12 = FUN_00406c60(0,3,local_68);
                  local_90 = (void *)FUN_00408470(uVar12);
                  local_98 = local_94;
                  if ((int)uStack_40 == 3) {
                    local_98 = FUN_004044d0(local_68,0x10900);
                  }
                  if (uStack_40._4_1_ != '\0') {
                    uVar12 = dcgettext(0,"%s: removing",5);
                    error(0,0,uVar12,__ptr);
                  }
                  if ((int)uStack_40 != 1) {
                    sVar9 = FUN_004044a0(pcVar8);
                    pvVar7 = local_78;
                    local_88 = (byte *)((ulong)local_88 & 0xffffffffffffff00 | (ulong)bVar2);
                    local_80 = __file + ((long)pcVar8 - (long)local_78);
                    local_70 = __ptr;
                    local_60 = ppbVar17;
LAB_00402626:
                    __n = sVar9;
                    sVar9 = __n - 1;
                    __ptr = local_70;
                    ppbVar17 = local_60;
                    if (sVar9 != 0xffffffffffffffff) {
                      memset(pcVar8,0x30,__n);
                      pcVar8[__n] = '\0';
                      while (iVar3 = FUN_00407a00(0xffffff9c,__file,0xffffff9c,pvVar7,1), iVar3 != 0
                            ) {
                        piVar10 = __errno_location();
                        if (*piVar10 != 0x11) goto LAB_00402626;
                        pcVar14 = pcVar8 + sVar9;
                        while( true ) {
                          pcVar11 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_."
                                           ,(int)*pcVar14);
                          if (pcVar11 == (char *)0x0) goto LAB_004028ac;
                          if (pcVar11[1] != '\0') break;
                          *pcVar14 = '0';
                          bVar20 = pcVar8 == pcVar14;
                          pcVar14 = pcVar14 + -1;
                          if (bVar20) goto LAB_00402626;
                        }
                        *pcVar14 = pcVar11[1];
                      }
                      if ((-1 < local_98) && (iVar3 = FUN_00402a60(local_98,local_90), iVar3 != 0))
                      {
                        bVar2 = 0;
                      }
                      if (uStack_40._4_1_ != '\0') {
                        local_88 = local_70;
                        if ((char)local_88 == '\0') {
                          local_88 = __file;
                        }
                        uVar12 = dcgettext(0,"%s: renamed to %s",5);
                        error(0,0,uVar12,local_88,pvVar7);
                        local_88 = (byte *)((ulong)local_88 & 0xffffffffffffff00);
                      }
                      memcpy(local_80,pcVar8,__n + 1);
                      goto LAB_00402626;
                    }
                  }
                  iVar3 = unlink((char *)__file);
                  if (iVar3 == 0) {
                    if (uStack_40._4_1_ != '\0') {
                      uVar12 = dcgettext(0,"%s: removed",5);
                      error(0,0,uVar12,__ptr);
                    }
                  }
                  else {
                    bVar2 = 0;
                    uVar12 = dcgettext(0,"%s: failed to remove",5);
                    piVar10 = __errno_location();
                    error(0,*piVar10,uVar12,__ptr);
                  }
                  iVar3 = local_98;
                  if (-1 < local_98) {
                    iVar5 = FUN_00402a60(local_98,local_90);
                    if (iVar5 != 0) {
                      bVar2 = 0;
                    }
                    iVar3 = close(iVar3);
                    if (iVar3 != 0) {
                      bVar2 = 0;
                      uVar12 = dcgettext(0,"%s: failed to close",5);
                      piVar10 = __errno_location();
                      error(0,*piVar10,uVar12,local_90);
                    }
                  }
                  free(local_78);
                  free(local_68);
                  free(local_90);
                }
              }
              else {
                bVar2 = 0;
                uVar12 = dcgettext(0,"%s: failed to close",5);
                piVar10 = __errno_location();
                error(0,*piVar10,uVar12,__ptr);
              }
            }
            uStack_a8 = uStack_a8 & 0xffffffffffffff | (ulong)(uStack_a8._7_1_ & bVar2) << 0x38;
          }
          ppbVar17 = ppbVar17 + 1;
          free(__ptr);
        } while (local_a0 != ppbVar17);
      }
      return uStack_a8._7_1_ ^ 1;
    }
    uVar12 = FUN_00406c60(0,3,pcVar14);
    piVar10 = __errno_location();
    error(1,*piVar10,&DAT_0040b61c,uVar12);
    goto LAB_004028f2;
  }
  if (iVar3 == 0x73) {
    uVar12 = dcgettext(0,"invalid file size",5);
    uVar12 = FUN_004084d0(DAT_0060f540,0,0,0x7fffffffffffffff,"cbBkKMGTPEZY0",uVar12,0);
    _local_48 = CONCAT88(uStack_40,uVar12);
    pcVar8 = pcVar14;
    goto LAB_00402120;
  }
  if (iVar3 < 0x74) {
    if (iVar3 == -0x82) goto LAB_004028a5;
    if (-0x82 < iVar3) {
      if (iVar3 == 0x66) {
        local_58 = CONCAT151(local_58._1_15_,1);
        pcVar8 = pcVar14;
      }
      else {
        if (iVar3 != 0x6e) goto LAB_0040289b;
        dcgettext(0,"invalid number of passes",5);
        uVar12 = FUN_004085a0(DAT_0060f540,0,0x3fffffffffffffff,"");
        local_58 = CONCAT88(uVar12,local_58._0_8_);
        pcVar8 = pcVar14;
      }
      goto LAB_00402120;
    }
    if (iVar3 == -0x83) {
      FUN_00408100(stdout,"shred","GNU coreutils",PTR_DAT_0060f2d0,"Colin Plumb",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  }
  else {
    if (iVar3 == 0x78) {
      _local_48 = CONCAT113(1,_local_48);
      pcVar8 = pcVar14;
      goto LAB_00402120;
    }
    if (0x78 < iVar3) {
      if (iVar3 == 0x7a) {
        pcVar8 = pcVar14;
      }
      else {
        if (iVar3 != 0x80) goto LAB_0040289b;
        if ((pcVar14 != (char *)0x0) && (iVar3 = strcmp(pcVar14,DAT_0060f540), iVar3 != 0)) {
LAB_004028f2:
          uVar12 = dcgettext(0,"multiple random sources specified",5);
          auVar22 = error(1,0,uVar12);
          uVar1 = uStack_a8;
          uStack_a8 = SUB168(auVar22,0);
          (*(code *)PTR___libc_start_main_0060eff0)
                    (FUN_004020a0,uVar1,&local_a0,FUN_0040a1a0,FUN_0040a200,
                     SUB168(auVar22 >> 0x40,0),&uStack_a8);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      goto LAB_00402120;
    }
    if (iVar3 == 0x75) {
      if (DAT_0060f540 == (char *)0x0) {
        _local_48 = CONCAT48(3,local_48);
        pcVar8 = pcVar14;
      }
      else {
        lVar6 = FUN_004041e0("--remove",DAT_0060f540,&PTR_s_unlink_0040b5a0,&DAT_0040b580);
        _local_48 = CONCAT48(*(undefined *)(&DAT_0040b580 + lVar6 * 4),local_48);
        pcVar8 = pcVar14;
      }
      goto LAB_00402120;
    }
    if (iVar3 == 0x76) {
      _local_48 = CONCAT112(1,_local_48);
      pcVar8 = pcVar14;
      goto LAB_00402120;
    }
  }
LAB_0040289b:
  FUN_00403ac0(1);
LAB_004028a5:
  FUN_00403ac0(0);
LAB_004028ac:
                    /* WARNING: Subroutine does not return */
  __assert_fail("p","src/shred.c",0x40a,"incname");
}


void FUN_00402920(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060eff0)
            (FUN_004020a0,unaff_retaddr,&stack0x00000008,FUN_0040a1a0,FUN_0040a200,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402958) */
/* WARNING: Removing unreachable block (ram,0x00402962) */

void FUN_0040294b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402999) */

void FUN_0040296a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004029d6) */

void FUN_004029a1(void)

{
  if (DAT_0060f388 != '\0') {
    return;
  }
  FUN_0040294b();
  DAT_0060f388 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402999) */

void thunk_FUN_0040296a(void)

{
  return;
}


void FUN_00402a00(void)

{
  FUN_00406f90(DAT_0060f398);
  return;
}


void FUN_00402a10(ulong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00408a90(param_1,3);
  if (0 < (int)uVar1) {
    uVar2 = uVar1 & 0xffffbfff;
    if (param_2 != '\0') {
      uVar2 = uVar1 | 0x4000;
    }
    if (uVar2 != uVar1) {
      FUN_00408a90(param_1 & 0xffffffff,4);
      return;
    }
  }
  return;
}


undefined FUN_00402a60(int param_1,undefined param_2)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  
  iVar1 = fdatasync(param_1);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
      uVar3 = dcgettext(0,"%s: fdatasync failed",5);
      error(0,iVar1,uVar3,param_2);
      *piVar2 = iVar1;
      return 0xffffffff;
    }
    iVar1 = fsync(param_1);
    if (iVar1 != 0) {
      iVar1 = *piVar2;
      if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
        uVar3 = dcgettext(0,"%s: fsync failed",5);
        error(0,iVar1,uVar3,param_2);
        *piVar2 = iVar1;
        return 0xffffffff;
      }
      sync();
    }
  }
  return 0;
}


undefined
FUN_00402b20(int param_1,long param_2,undefined param_3,ulong *param_4,uint param_5,
            undefined param_6,undefined param_7,long param_8)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  void *__ptr;
  __off_t _Var5;
  int *piVar6;
  undefined uVar7;
  ssize_t sVar8;
  undefined uVar9;
  char *__s2;
  char *pcVar10;
  time_t tVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  ulong uVar15;
  undefined *__src;
  undefined uVar16;
  ulong uVar17;
  size_t __n;
  ulong uVar18;
  ulong uVar19;
  ulong local_858;
  undefined local_850;
  ulong local_838;
  char *local_810;
  time_t local_808;
  long local_800;
  undefined local_7ef;
  undefined local_7eb;
  undefined local_7e9;
  char local_7e8 [656];
  undefined local_558 [656];
  undefined local_2c8 [2];
  undefined local_2c4;
  
  uVar19 = *param_4;
  iVar3 = getpagesize();
  if ((int)param_5 < 1) {
LAB_00403000:
    local_838 = 0x10000;
    uVar17 = 0x10002;
  }
  else {
    uVar14 = param_5 & 0xfff;
    uVar4 = uVar14 << 0xc | uVar14;
    cVar12 = (char)(uVar4 >> 4);
    if (((char)(uVar4 >> 8) == cVar12) && (cVar12 == (char)uVar14)) goto LAB_00403000;
    local_838 = 0xf000;
    uVar17 = 0xf000;
  }
  lVar1 = (long)iVar3 - 1;
  __ptr = (void *)FUN_00408240(uVar17 + lVar1);
  uVar15 = lVar1 + (long)__ptr;
  __src = (undefined *)(uVar15 - uVar15 % (ulong)(long)iVar3);
  bVar13 = 0 < (long)uVar19 && uVar19 < local_838;
  if (0 >= (long)uVar19 || uVar19 >= local_838) {
    FUN_00402a10(param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 0xf000) != 0x2000) {
LAB_00402bde:
    _Var5 = lseek(param_1,0,0);
    if (_Var5 < 1) {
      if (_Var5 == 0) goto joined_r0x00402c54;
      piVar6 = __errno_location();
    }
    else {
      piVar6 = __errno_location();
      *piVar6 = 0x16;
    }
    uVar7 = dcgettext(0,"%s: cannot rewind",5);
    iVar3 = *piVar6;
LAB_00402c18:
    error(0,iVar3,uVar7,param_3);
LAB_00402c26:
    free(__ptr);
    return 0xffffffff;
  }
  local_2c8[0] = 6;
  local_2c4 = 1;
  iVar3 = ioctl(param_1,0x40086d01,local_2c8);
  if (iVar3 != 0) goto LAB_00402bde;
joined_r0x00402c54:
  if ((int)param_5 < 0) {
    local_7ef = 0x646e6172;
    local_7eb = 0x6d6f;
    local_7e9 = 0;
    goto joined_r0x0040312a;
  }
  uVar4 = (param_5 & 0xfff) << 0xc | param_5 & 0xfff;
  uVar2 = (ushort)uVar4;
  *(ushort *)(__src + 1) = uVar2 << 8 | uVar2 >> 8;
  *__src = (char)(uVar4 >> 4);
  if ((uVar19 < uVar17) && (-1 < (long)uVar19)) {
    uVar15 = uVar19 >> 1;
    uVar17 = uVar19;
    if (2 < uVar15) goto LAB_00402c9d;
    uVar18 = 3;
  }
  else {
    uVar15 = uVar17 >> 1;
LAB_00402c9d:
    __n = 3;
    do {
      uVar18 = __n * 2;
      memcpy(__src + __n,__src,__n);
      __n = uVar18;
    } while (uVar18 <= uVar15);
  }
  if (uVar18 < uVar17) {
    memcpy(__src + uVar18,__src,uVar17 - uVar18);
    if ((param_5 & 0x1000) != 0) goto LAB_004031b1;
  }
  else if (((param_5 & 0x1000) != 0) && (uVar17 != 0)) {
LAB_004031b1:
    uVar15 = 0;
    do {
      __src[uVar15] = __src[uVar15] + -0x80;
      uVar15 = uVar15 + 0x200;
    } while (uVar15 < uVar17);
  }
  __sprintf_chk(&local_7ef,1,7,"%02x%02x%02x",*__src,__src[1],__src[2]);
joined_r0x0040312a:
  if (param_8 != 0) {
    uVar7 = dcgettext(0,"%s: pass %lu/%lu (%s)...",5);
    error(0,0,uVar7,param_3,param_7,param_8,&local_7ef);
    tVar11 = time((time_t *)0x0);
    local_800 = tVar11 + 5;
  }
  local_810 = "";
  local_850 = 0;
  local_808 = 0;
  local_858 = 0;
LAB_00402d37:
  do {
    uVar17 = local_838;
    if (((-1 < (long)uVar19) && (uVar15 = uVar19 - local_858, uVar15 < local_838)) &&
       ((uVar15 == 0 || (uVar17 = uVar15, (long)uVar19 < (long)local_858)))) {
      iVar3 = FUN_00402a60(param_1,param_3);
      if (iVar3 == 0) {
        free(__ptr);
        return local_850;
      }
      piVar6 = __errno_location();
      if (*piVar6 == 5) {
        free(__ptr);
        return 1;
      }
      goto LAB_00402c26;
    }
    if ((int)param_5 < 0) {
      FUN_00407360(param_6,__src,uVar17);
    }
    uVar15 = 0;
    do {
      while (sVar8 = write(param_1,__src + uVar15,uVar17 - uVar15), 0 < sVar8) {
        uVar15 = uVar15 + sVar8;
LAB_00402d8b:
        if (uVar17 <= uVar15) goto LAB_00402e61;
      }
      if ((long)uVar19 < 0) {
        if (sVar8 != 0) {
          piVar6 = __errno_location();
          iVar3 = *piVar6;
          if (iVar3 != 0x1c) {
            if ((!bVar13) && (iVar3 == 0x16)) goto LAB_00403048;
            uVar7 = FUN_00405170(local_858 + uVar15,local_2c8);
            uVar9 = dcgettext(0,"%s: error writing at offset %s",5);
            error(0,iVar3,uVar9,param_3,uVar7);
            goto LAB_00402c26;
          }
        }
        if (0x7fffffffffffffff - local_858 < uVar15) goto LAB_004032d0;
        uVar19 = uVar15 + local_858;
        *param_4 = uVar19;
        local_858 = uVar19;
        if (param_8 == 0) goto LAB_00402d37;
        goto LAB_00403287;
      }
      piVar6 = __errno_location();
      iVar3 = *piVar6;
      if ((!bVar13) && (iVar3 == 0x16)) {
LAB_00403048:
        FUN_00402a10(param_1,0);
        bVar13 = true;
        goto LAB_00402d8b;
      }
      uVar7 = FUN_00405170(local_858 + uVar15,local_2c8);
      uVar9 = dcgettext(0,"%s: error writing at offset %s",5);
      error(0,iVar3,uVar9,param_3,uVar7);
      if ((iVar3 != 5) || (uVar17 <= (uVar15 | 0x1ff))) goto LAB_00402c26;
      uVar15 = (uVar15 | 0x1ff) + 1;
      _Var5 = lseek(param_1,local_858 + uVar15,0);
      if (_Var5 == -1) {
        uVar7 = dcgettext(0,"%s: lseek failed",5);
        error(0,*piVar6,uVar7,param_3);
        goto LAB_00402c26;
      }
      local_850 = 1;
    } while (uVar15 < uVar17);
LAB_00402e61:
    if (0x7fffffffffffffff - local_858 < uVar15) goto LAB_004032d0;
    local_858 = uVar15 + local_858;
  } while (param_8 == 0);
  if (uVar19 == local_858) {
LAB_00403287:
    if ((*local_810 == '\0') && (local_808 = time((time_t *)0x0), local_808 < local_800))
    goto LAB_00402d37;
    __s2 = (char *)FUN_004045e0(local_858,local_558,0x1b2,1,1);
  }
  else {
    local_808 = time((time_t *)0x0);
    if (local_808 < local_800) goto LAB_00402d37;
    __s2 = (char *)FUN_004045e0(local_858,local_558,0x1b2,1,1);
    iVar3 = strcmp(local_810,__s2);
    if (iVar3 == 0) goto LAB_00402d37;
  }
  if ((long)uVar19 < 0) {
    uVar7 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s",5);
    error(0,0,uVar7,param_3,param_7,param_8,&local_7ef,__s2);
  }
  else {
    uVar16 = 100;
    if (uVar19 != 0) {
      if (local_858 < 0x28f5c28f5c28f5d) {
        uVar16 = (undefined)((local_858 * 100) / uVar19);
      }
      else {
        uVar16 = (undefined)
                 (local_858 /
                 (ulong)(((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar19) >> 0x40
                                        ,0) + uVar19) >> 6) - ((long)uVar19 >> 0x3f)));
      }
    }
    pcVar10 = (char *)FUN_004045e0(uVar19,local_2c8,0x1b0,1,1);
    if (uVar19 == local_858) {
      __s2 = pcVar10;
    }
    uVar7 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s/%s %d%%",5);
    error(0,0,uVar7,param_3,param_7,param_8,&local_7ef,__s2,pcVar10,uVar16);
  }
  __strcpy_chk(local_7e8,__s2,0x28c);
  local_800 = local_808 + 5;
  iVar3 = FUN_00402a60(param_1,param_3);
  if (iVar3 == 0) {
    local_810 = local_7e8;
  }
  else {
    piVar6 = __errno_location();
    if (*piVar6 != 5) goto LAB_00402c26;
    local_810 = local_7e8;
    local_850 = 1;
  }
  goto LAB_00402d37;
LAB_004032d0:
  uVar7 = dcgettext(0,"%s: file too large",5);
  iVar3 = 0;
  goto LAB_00402c18;
}


char FUN_004033d0(int param_1,undefined param_2,undefined param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  undefined uVar5;
  ulong uVar6;
  long lVar7;
  __off_t _Var8;
  bool bVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  int *__src;
  ulong uVar13;
  long local_118;
  long local_108;
  long local_100;
  ulong local_f8;
  long local_f0;
  char local_e5;
  long local_d0;
  stat local_c8;
  
  local_100 = 0;
  if (*(char *)(param_4 + 0x1c) != '\0') {
    local_100 = (ulong)*(byte *)(param_4 + 0x1e) + *(long *)(param_4 + 8);
  }
  iVar1 = __fxstat(1,param_1,&local_c8);
  if (iVar1 != 0) {
    uVar5 = dcgettext(0,"%s: fstat failed",5);
    piVar3 = __errno_location();
    error(0,*piVar3,uVar5,param_2);
    return false;
  }
  uVar2 = local_c8.st_mode & 0xf000;
  if (uVar2 == 0x2000) {
    iVar1 = isatty(param_1);
    if (iVar1 != 0) goto LAB_00403560;
    uVar2 = local_c8.st_mode & 0xf000;
  }
  bVar9 = uVar2 == 0xc000 || uVar2 == 0x1000;
  if (uVar2 == 0xc000 || uVar2 == 0x1000) {
LAB_00403560:
    uVar5 = dcgettext(0,"%s: invalid file type",5);
    error(0,0,uVar5,param_2);
    return false;
  }
  if ((uVar2 == 0x8000) && (local_c8.st_size < 0)) {
    uVar5 = dcgettext(0,"%s: file has negative size",5);
    error(0,0,uVar5,param_2);
    return bVar9;
  }
  if (((long)(*(ulong *)(param_4 + 8) << 2) < 0) || (*(ulong *)(param_4 + 8) >> 0x3e != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408490();
  }
  piVar3 = (int *)FUN_00408240();
  local_108 = *(long *)(param_4 + 0x10);
  if (local_108 == -1) {
    if ((local_c8.st_mode & 0xf000) != 0x8000) {
      _Var8 = lseek(param_1,0,2);
      if (_Var8 < 1) {
        local_f8 = *(ulong *)(param_4 + 8);
      }
      else {
        local_f8 = *(ulong *)(param_4 + 8);
        local_108 = _Var8;
      }
      local_f0 = 0;
      if (local_f8 == 0) {
        uVar5 = FUN_00406e60(param_3);
        uVar10 = 0;
        local_e5 = '\x01';
        goto LAB_00403795;
      }
      goto LAB_004034d1;
    }
    local_e5 = *(char *)(param_4 + 0x1d);
    local_f8 = *(ulong *)(param_4 + 8);
    local_108 = local_c8.st_size;
    if (local_e5 != '\0') {
      local_f0 = 0;
      if (local_f8 == 0) {
        uVar5 = FUN_00406e60(param_3);
        goto LAB_00403785;
      }
      goto LAB_004034d1;
    }
    if (0x1fffffffffffffff < local_c8.st_blksize - 1U) {
      local_c8.st_blksize = 0x200;
    }
    if ((local_c8.st_blksize <= local_c8.st_size) ||
       (local_f0 = local_c8.st_size, local_c8.st_size == 0)) {
      local_f0 = 0;
    }
    if (local_c8.st_size % local_c8.st_blksize != 0) {
      local_c8.st_blksize = local_c8.st_blksize - local_c8.st_size % local_c8.st_blksize;
      if (0x7fffffffffffffff - local_c8.st_size <= local_c8.st_blksize) {
        local_c8.st_blksize = 0x7fffffffffffffff - local_c8.st_size;
      }
      local_108 = local_c8.st_size + local_c8.st_blksize;
    }
  }
  else {
    local_f8 = *(ulong *)(param_4 + 8);
    if ((local_c8.st_mode & 0xf000) != 0x8000) {
      local_f0 = 0;
      if (local_f8 == 0) {
LAB_0040398b:
        uVar5 = FUN_00406e60(param_3);
        local_e5 = '\x01';
        goto LAB_00403785;
      }
      goto LAB_004034d1;
    }
    local_f0 = local_c8.st_size;
    if (0x1fffffffffffffff < local_c8.st_blksize - 1U) {
      local_c8.st_blksize = 0x200;
    }
    if (local_108 < local_c8.st_blksize) {
      local_c8.st_blksize = local_108;
    }
    if (local_c8.st_blksize <= local_c8.st_size) {
      if (local_f8 == 0) goto LAB_0040398b;
      local_f0 = 0;
      goto LAB_004034d1;
    }
  }
  if (local_f8 != 0) {
LAB_004034d1:
    local_118 = 0;
    iVar1 = -2;
    piVar12 = (int *)&DAT_0040b340;
    uVar10 = local_f8;
    piVar11 = piVar3;
    do {
      if (iVar1 == 0) {
        iVar1 = -2;
        piVar12 = &DAT_0040b344;
LAB_0040350b:
        uVar13 = (ulong)-iVar1;
        if (uVar10 <= uVar13) {
          local_118 = local_118 + uVar10;
          goto LAB_00403858;
        }
        local_118 = local_118 + uVar13;
      }
      else {
        __src = piVar12 + 1;
        piVar12 = __src;
        if (iVar1 < 0) goto LAB_0040350b;
        uVar13 = (ulong)iVar1;
        if (uVar10 < uVar13) goto LAB_004037d0;
        piVar12 = __src + uVar13;
        pvVar4 = memcpy(piVar11,__src,uVar13 * 4);
        piVar11 = (int *)((long)pvVar4 + uVar13 * 4);
      }
      uVar10 = uVar10 - uVar13;
      iVar1 = *piVar12;
    } while( true );
  }
  goto LAB_004036e8;
LAB_004037d0:
  if ((1 < uVar10) && (uVar13 <= uVar10 * 3)) {
    do {
      if ((uVar10 == uVar13) || (uVar6 = FUN_00406e70(param_3), piVar12 = piVar11, uVar6 < uVar10))
      {
        piVar12 = piVar11 + 1;
        *piVar11 = *__src;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_00403858;
      }
      uVar13 = uVar13 - 1;
      piVar11 = piVar12;
      __src = __src + 1;
    } while( true );
  }
  local_118 = local_118 + uVar10;
LAB_00403858:
  uVar6 = 0;
  uVar10 = local_118 - 1;
  local_118 = local_f8 - local_118;
  uVar13 = uVar10;
  do {
    while (iVar1 = piVar3[uVar6], uVar10 < uVar13) {
      uVar13 = uVar13 - uVar10;
      lVar7 = FUN_00406e70(param_3,(local_118 + -1) - uVar6);
      lVar7 = lVar7 + uVar6;
      piVar3[uVar6] = piVar3[lVar7];
      uVar6 = uVar6 + 1;
      piVar3[lVar7] = iVar1;
      if (uVar6 == local_f8) goto LAB_004036e8;
    }
    piVar3[local_118] = iVar1;
    local_118 = local_118 + 1;
    piVar3[uVar6] = -1;
    uVar6 = uVar6 + 1;
    uVar13 = (uVar13 + (local_f8 - 1)) - uVar10;
  } while (uVar6 != local_f8);
LAB_004036e8:
  uVar5 = FUN_00406e60(param_3);
  if (local_f0 == 0) {
    local_e5 = '\x01';
    goto LAB_00403785;
  }
  local_d0 = local_f0;
  uVar10 = *(ulong *)(param_4 + 8);
  local_e5 = '\x01';
  lVar7 = 0;
  while( true ) {
    uVar13 = 0;
    while (uVar13 < *(byte *)(param_4 + 0x1e) + uVar10) {
      iVar1 = 0;
      if (uVar13 < uVar10) {
        iVar1 = piVar3[uVar13];
      }
      uVar13 = uVar13 + 1;
      iVar1 = FUN_00402b20(param_1,&local_c8,param_2,&local_d0,iVar1,uVar5,uVar13,lVar7);
      if (iVar1 != 0) {
        local_e5 = bVar9;
        if (iVar1 < 0) goto LAB_004037bd;
        local_e5 = '\0';
      }
      uVar10 = *(ulong *)(param_4 + 8);
    }
LAB_00403785:
    if (local_108 == 0) break;
    uVar10 = *(ulong *)(param_4 + 8);
LAB_00403795:
    local_d0 = local_108;
    local_108 = 0;
    lVar7 = local_100;
  }
  if (((*(int *)(param_4 + 0x18) != 0) && (iVar1 = ftruncate(param_1,0), iVar1 != 0)) &&
     ((local_c8.st_mode & 0xf000) == 0x8000)) {
    uVar5 = dcgettext(0,"%s: error truncating",5);
    piVar11 = __errno_location();
    error(0,*piVar11,uVar5,param_2);
    local_e5 = bVar9;
  }
LAB_004037bd:
  free(piVar3);
  return local_e5;
}


void FUN_00403ac0(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  undefined uVar5;
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
  
  uVar5 = DAT_0060f3b0;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_00403aff;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(1,uVar3,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Overwrite the specified FILE(s) repeatedly, in order to make it harder\nfor even very expensive hardware probing to recover the data.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nIf FILE is -, shred standard output.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "  -f, --force    change permissions to allow writing if necessary\n  -n, --iterations=N  overwrite N times instead of the default (%d)\n      --random-source=FILE  get random bytes from FILE\n  -s, --size=N   shred this many bytes (suffixes like K, M, G accepted)\n"
                    ,5);
  __printf_chk(1,uVar5,3);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -u             deallocate and remove file after overwriting\n      --remove[=HOW]  like -u but give control on HOW to delete;  See below\n  -v, --verbose  show progress\n  -x, --exact    do not round file sizes up to the next full block;\n                   this is the default for non-regular files\n  -z, --zero     add a final overwrite with zeros to hide shredding\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nDelete FILE(s) if --remove (-u) is specified.  The default is not to remove\nthe files because it is common to operate on device files like /dev/hda,\nand those files usually should not be removed.\nThe optional HOW parameter indicates how to remove a directory entry:\n\'unlink\' => use a standard unlink call.\n\'wipe\' => also first obfuscate bytes in the name.\n\'wipesync\' => also sync each obfuscated byte to disk.\nThe default mode is \'wipesync\', but note it can be expensive.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "CAUTION: Note that shred relies on a very important assumption:\nthat the file system overwrites data in place.  This is the traditional\nway to do things, but many modern file system designs do not satisfy this\nassumption.  The following are examples of file systems on which shred is\nnot effective, or is not guaranteed to be effective in all file system modes:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "* log-structured or journaled file systems, such as those supplied with\nAIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)\n\n* file systems that write redundant data and carry on even if some writes\nfail, such as RAID-based file systems\n\n* file systems that make snapshots, such as Network Appliance\'s NFS server\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "* file systems that cache in temporary locations, such as NFS\nversion 3 clients\n\n* compressed file systems\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "In the case of ext3 file systems, the above disclaimer applies\n(and shred is thus of limited effectiveness) only in data=journal mode,\nwhich journals file data in addition to just metadata.  In both the\ndata=ordered (default) and data=writeback modes, shred works as usual.\nExt3 journaling modes can be changed by adding the data=something option\nto the mount options for a particular file system in the /etc/fstab file,\nas documented in the mount man page (man mount).\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "In addition, file system backups and remote mirrors may contain copies\nof the file that cannot be removed, and that will allow a shredded file\nto be recovered later.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040a35e;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40a3d8;
  local_78[1] = (byte *)0x40a370;
  local_78[2] = (byte *)0x40a386;
  local_78[3] = (byte *)0x40a390;
  local_78[4] = (byte *)0x40a39f;
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
    lVar9 = 6;
    pbVar10 = (byte *)"shred";
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar12 = *pbVar10 < *pbVar11;
      bVar13 = *pbVar10 == *pbVar11;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
      pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
  } while ((!bVar12 && !bVar13) != bVar12);
  pcVar4 = (char *)ppbVar7[3];
  if ((byte *)pcVar4 == (byte *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pcVar4 = "shred";
        goto LAB_00403ee3;
      }
    }
    pcVar4 = "shred";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","shred");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00403ee3:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,"shred");
      }
    }
    pcVar8 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","shred");
    if (pcVar4 != "shred") {
      pcVar8 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pcVar4,pcVar8);
LAB_00403aff:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


/* WARNING: Removing unreachable block (ram,0x00403b06) */
/* WARNING: Removing unreachable block (ram,0x00403d70) */
/* WARNING: Removing unreachable block (ram,0x00403d7c) */
/* WARNING: Removing unreachable block (ram,0x00403d86) */
/* WARNING: Removing unreachable block (ram,0x00403d88) */
/* WARNING: Removing unreachable block (ram,0x00403d92) */
/* WARNING: Removing unreachable block (ram,0x00403e5f) */
/* WARNING: Removing unreachable block (ram,0x00403e8e) */
/* WARNING: Removing unreachable block (ram,0x00403ede) */
/* WARNING: Removing unreachable block (ram,0x00403ea4) */
/* WARNING: Removing unreachable block (ram,0x00403dab) */
/* WARNING: Removing unreachable block (ram,0x00403dda) */
/* WARNING: Removing unreachable block (ram,0x00403ee3) */
/* WARNING: Removing unreachable block (ram,0x00403df4) */
/* WARNING: Removing unreachable block (ram,0x00403e30) */
/* WARNING: Removing unreachable block (ram,0x00403e34) */

void FUN_00403f10(void)

{
  undefined uVar1;
  undefined uVar2;
  
  uVar1 = DAT_0060f3b0;
  uVar2 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
  __fprintf_chk(stderr,1,uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


long FUN_00403f20(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_00403fb7:
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
          goto LAB_00403fb7;
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


void FUN_00404040(undefined param_1,undefined param_2,long param_3)

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
  uVar2 = FUN_00406dc0(1,param_1);
  uVar3 = FUN_00406ab0(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_004040c0(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_00406de0(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00404190;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00406de0(lVar5);
    __fprintf_chk(stderr,1,&DAT_0040b61a,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00404190:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_004041e0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00403f20(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_00404040(param_1,param_2,lVar1);
    FUN_004040c0(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_00404250(void *param_1,long *param_2,void *param_3,size_t param_4)

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


void FUN_004042a0(undefined param_1)

{
  DAT_0060f3a8 = param_1;
  return;
}


void FUN_004042b0(undefined param_1)

{
  DAT_0060f3a0 = param_1;
  return;
}


void FUN_004042c0(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00409ac0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060f3a0 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060f3a8 == 0) {
        error(0,*piVar2,&DAT_0040b61c,uVar3);
      }
      else {
        uVar4 = FUN_00406c30();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040433e;
    }
  }
  iVar1 = FUN_00409ac0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040433e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060f2e0);
}


void FUN_00404360(void)

{
  long lVar1;
  
  lVar1 = FUN_004043e0();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408490();
}


ulong FUN_00404380(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_00404440();
  uVar3 = lVar2 - (long)param_1;
  if (((cVar1 == '/') < uVar3) && (*(char *)(lVar2 + -1) == '/')) {
    do {
      uVar4 = uVar3 - 1;
      if ((cVar1 == '/') == uVar4) {
        return uVar4;
      }
      lVar2 = uVar3 - 2;
      uVar3 = uVar4;
    } while (param_1[lVar2] == '/');
    return uVar4;
  }
  return uVar3;
}


undefined * FUN_004043e0(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_00404380();
  __dest = (undefined *)malloc(__n + 1 + (ulong)(__n == 0));
  if (__dest != (undefined *)0x0) {
    __dest = (undefined *)memcpy(__dest,param_1,__n);
    if (__n == 0) {
      *__dest = 0x2e;
      __n = 1;
    }
    __dest[__n] = 0;
  }
  return __dest;
}


char * FUN_00404440(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  while (cVar3 == '/') {
    param_1 = param_1 + 1;
    cVar3 = *param_1;
  }
  if (cVar3 != '\0') {
    bVar1 = false;
    pcVar2 = param_1;
    do {
      while (cVar3 == '/') {
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
        bVar1 = true;
        if (cVar3 == '\0') {
          return param_1;
        }
      }
      if (bVar1) {
        bVar1 = false;
        param_1 = pcVar2;
      }
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar2;
    } while (cVar3 != '\0');
  }
  return param_1;
}


void FUN_004044a0(char *param_1)

{
  long lVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_1);
  if (1 < sVar2) {
    while (lVar1 = sVar2 - 1, sVar2 = sVar2 - 1, param_1[lVar1] == '/') {
      if (sVar2 == 1) {
        return;
      }
    }
  }
  return;
}


void FUN_004044d0(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_00407c50(iVar1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404520(int param_1)

{
  ulong uVar1;
  float fVar2;
  float param_7;
  
  if ((float)_DAT_0040b6c4 <= param_7) {
    uVar1 = (long)ROUND(param_7 - (float)_DAT_0040b6c4) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)ROUND(param_7);
  }
  fVar2 = (float)uVar1;
  if ((long)uVar1 < 0) {
    fVar2 = fVar2 + (float)_DAT_0040b6c8;
  }
  if (((param_1 == 0) && (param_7 != fVar2)) && ((long)(uVar1 + 1) < 0)) {
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004045e0(ulong param_1,char *param_2,uint param_3,ulong param_4,ulong param_5)

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
    puVar21 = (undefined *)0x40a2b3;
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
        goto joined_r0x00404978;
      }
    }
LAB_004046c5:
    fVar25 = (float)param_4;
    if ((long)param_4 < 0) {
      fVar25 = fVar25 + (float)_DAT_0040b6c8;
    }
    if ((long)param_5 < 0) {
      fVar25 = fVar25 / ((float)param_5 + (float)_DAT_0040b6c8);
      if ((long)param_1 < 0) goto LAB_004048d8;
LAB_00404702:
      fVar25 = (float)param_1 * fVar25;
      if ((param_3 & 0x10) != 0) goto LAB_0040470f;
LAB_00404820:
      if ((uVar14 != 1) && (fVar25 < _DAT_0040b6d0)) {
        FUN_00404520();
        uVar10 = SUB108(fVar25,0);
      }
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf",uVar10);
      uVar16 = 0xffffffff;
      __n = strlen(param_2);
      sVar11 = __n;
    }
    else {
      fVar25 = fVar25 / (float)param_5;
      if (-1 < (long)param_1) goto LAB_00404702;
LAB_004048d8:
      fVar25 = ((float)param_1 + (float)_DAT_0040b6c8) * fVar25;
      if ((param_3 & 0x10) == 0) goto LAB_00404820;
LAB_0040470f:
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
        if (__n <= uVar17) goto LAB_00404c48;
      }
      else {
        if (fVar25 < _DAT_0040b6d0) {
          FUN_00404520();
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar17) {
LAB_00404c48:
          if (((param_3 & 8) == 0) || (param_2[__n - 1] != '0')) {
            sVar11 = __n - (uVar10 + 1);
            goto LAB_00404870;
          }
          if (uVar14 == 1) goto LAB_004047e6;
        }
        if (fVar25 * (float)_DAT_0040b6cc < _DAT_0040b6d0) {
          FUN_00404520(uVar14);
        }
      }
LAB_004047e6:
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf");
      __n = strlen(param_2);
      sVar11 = __n;
    }
LAB_00404870:
    puVar22 = (undefined *)((long)local_a8 - __n);
    memmove(puVar22,param_2,__n);
    __dest = (undefined *)(sVar11 + (long)puVar22);
  }
  else {
    if ((param_4 % param_5 != 0) ||
       (uVar17 = SUB168(ZEXT816(param_4) / ZEXT816(param_5),0) * param_1,
       SUB168(ZEXT816(uVar17) /
              (ZEXT816(param_4) / ZEXT816(param_5) & (undefined)0xffffffffffffffff),0) !=
       param_1)) goto LAB_004046c5;
    uVar19 = 0;
    uVar12 = 0;
    uVar8 = 0;
joined_r0x00404978:
    puVar22 = local_a8;
    if ((param_3 & 0x10) == 0) {
      uVar16 = 0xffffffff;
LAB_00404991:
      if (uVar14 != 1) goto LAB_004049a0;
      __dest = local_a8;
      if (5 < (int)(uVar8 + (((uint)uVar17 & 1) + uVar19 != 0))) goto LAB_004049b1;
LAB_004049e3:
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
      if (uVar17 < uVar20) goto LAB_00404991;
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
        if (uVar16 == 8) goto LAB_00404991;
      }
      if (9 < uVar17) goto LAB_00404991;
      if (uVar14 == 1) {
        bVar24 = 2 < (uVar8 & 1) + uVar19;
      }
      else {
        bVar24 = uVar19 != 0 && uVar14 == 0;
      }
      if (bVar24) {
        uVar8 = uVar8 + 1;
        if (uVar8 != 10) goto LAB_00404e48;
        uVar17 = uVar17 + 1;
        if (uVar17 == 10) goto LAB_00404dfe;
        uVar19 = 0;
LAB_00404db7:
        if ((param_3 & 8) != 0) goto LAB_00404e00;
        cVar4 = '0';
      }
      else {
        if (uVar8 == 0) goto LAB_00404db7;
LAB_00404e48:
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
LAB_00404dfe:
      uVar19 = 0;
LAB_00404e00:
      __dest = puVar22;
      if (uVar14 == 1) goto LAB_004049e3;
      uVar8 = 0;
LAB_004049a0:
      __dest = puVar22;
      if ((uVar14 != 0) || ((int)(uVar19 + uVar8) < 1)) goto LAB_004049e3;
LAB_004049b1:
      uVar17 = uVar17 + 1;
      __dest = puVar22;
      if ((((param_3 & 0x10) == 0) || (uVar6 != uVar17)) || (uVar16 == 8)) goto LAB_004049e3;
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
      if (uVar17 == 0) goto LAB_00404895;
      __dest = (undefined *)((long)puVar22 - sVar11);
      memcpy(__dest,__s,sVar11);
    }
    puVar22 = (undefined *)((long)__dest - uVar17);
    memcpy(puVar22,local_68,uVar17);
  }
LAB_00404895:
  if ((param_3 & 0x80) == 0) goto LAB_004048b8;
  if (uVar16 == 0xffffffff) {
    if (param_5 < 2) {
      uVar16 = 0;
      goto LAB_004048a5;
    }
    uVar16 = 1;
    uVar10 = 1;
    do {
      uVar10 = uVar10 * uVar6;
      if (param_5 <= uVar10) break;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 8);
    if ((param_3 & 0x40) != 0) goto LAB_00404b21;
LAB_00404b40:
    if ((uVar5 == 0) && (uVar16 == 1)) {
      *(undefined *)local_a8 = 0x6b;
      puVar21 = (undefined *)((long)local_a8 + 1);
      if ((param_3 & 0x100) == 0) {
LAB_00404d73:
        local_a8 = (undefined *)((long)local_a8 + 1);
        goto LAB_004048b8;
      }
    }
    else {
      *(undefined *)local_a8 = (&UNK_0040b6b8)[(int)uVar16];
      if ((param_3 & 0x100) == 0) goto LAB_00404d73;
      puVar21 = (undefined *)((long)local_a8 + 1);
      if (uVar5 != 0) {
        *(undefined *)((long)local_a8 + 1) = 0x69;
        puVar21 = (undefined *)((long)local_a8 + 2);
      }
    }
  }
  else {
LAB_004048a5:
    if ((param_3 & 0x100 | uVar16) == 0) goto LAB_004048b8;
    if ((param_3 & 0x40) != 0) {
LAB_00404b21:
      local_a8 = (undefined *)(param_2 + 0x288);
      param_2[0x287] = ' ';
    }
    if (uVar16 != 0) goto LAB_00404b40;
    puVar21 = local_a8;
    if ((param_3 & 0x100) == 0) goto LAB_004048b8;
  }
  local_a8 = (undefined *)((long)puVar21 + 1);
  *(undefined *)puVar21 = 0x42;
LAB_004048b8:
  *(undefined *)local_a8 = 0;
  return puVar22;
}


char * FUN_00404fb0(char *param_1,uint *param_2,long *param_3)

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
    iVar2 = FUN_00403f20(param_1,&PTR_s_human_readable_0040b6a0,&DAT_0040b690,4);
    if (iVar2 < 0) {
      pcVar3 = (char *)FUN_004085d0(param_1,local_30,0,param_3,"eEgGkKmMpPtTyYzZ0");
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
      *param_2 = uVar5 | *(uint *)(&DAT_0040b690 + (long)iVar2 * 4);
    }
  }
  return pcVar3;
}


char * FUN_00405170(ulong param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  return pcVar2;
}


void FUN_004051c0(byte *param_1)

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
        pbVar6 = &DAT_0040b720;
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
  DAT_0060f3b0 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00405260(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00409c20();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00405338:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040b731;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040b726;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00405338;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040b72d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040b72a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00405360(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00405fb1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00405be6;
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
      goto LAB_00405fb1;
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
      param_8 = (char *)FUN_00405260(&DAT_0040b735,param_5);
      param_9 = (char *)FUN_00405260(&DAT_0040ccaf);
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
LAB_004053f8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00405408:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00405b88;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00405b00:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00405b12_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040597e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405815;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00405b12_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00405b12_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00405b12_caseD_b:
        bVar17 = 0x76;
        goto LAB_00405815;
      case 0xc:
switchD_00405b12_caseD_c:
        bVar17 = 0x66;
LAB_00405815:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00405768;
        }
LAB_00405820:
        bVar23 = false;
        goto LAB_004055db;
      case 0xd:
        bVar20 = false;
switchD_004054f8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00405730;
      case 0x20:
        bVar25 = false;
LAB_00405b5a:
        uVar19 = 0x20;
        goto LAB_00405b22;
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
switchD_004054f8_caseD_21:
        bVar25 = false;
        goto LAB_0040573b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00405b3a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00405548;
        }
        bVar23 = false;
        goto LAB_0040555f;
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
LAB_00405b22:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00405561;
      case 0x27:
        bVar20 = false;
        goto switchD_0040597e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040597e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004054f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040597e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00405757;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00405b00;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004054f8_caseD_0;
      default:
        goto switchD_0040597e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405820;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00405b12_caseD_9;
      case 10:
        goto switchD_00405b12_caseD_a;
      case 0xb:
        goto switchD_00405b12_caseD_b;
      case 0xc:
        goto switchD_00405b12_caseD_c;
      case 0xd:
        goto switchD_004054f8_caseD_d;
      case 0x20:
        goto LAB_00405b5a;
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
        goto switchD_004054f8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00405b3a;
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
        goto LAB_00405b22;
      case 0x27:
        goto switchD_0040597e_caseD_27;
      case 0x3f:
        goto switchD_0040597e_caseD_3f;
      case 0x5c:
        goto switchD_004054f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040597e_caseD_7b;
      }
      goto LAB_004055a2;
    }
    goto LAB_0040577a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00405b12_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004054f8_caseD_0:
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
            goto LAB_00405658;
          }
LAB_0040589a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040589a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00405658;
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
LAB_004058d9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00405658;
        goto LAB_00405561;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040576c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00405548;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00405408;
  default:
switchD_0040597e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00409a40(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040628a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004063c7;
          goto LAB_004063b7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040576c;
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
      goto LAB_0040628a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00405954;
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
    goto LAB_00405992;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00405992;
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
LAB_00405992:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_004059aa:
      param_5 = 2;
      goto LAB_0040576c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00405536;
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
LAB_00405536:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_004059aa;
    goto LAB_00405548;
  case 0x23:
  case 0x7e:
LAB_0040552d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00405536;
    goto LAB_0040573b;
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
    goto switchD_0040597e_caseD_25;
  case 0x27:
switchD_0040597e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00405548;
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
      goto LAB_00405658;
    }
    goto LAB_0040576c;
  case 0x3f:
switchD_0040597e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00405658;
      }
      goto LAB_0040576c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00405548;
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
        goto LAB_004058d9;
      }
      goto LAB_0040577a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00405548;
  case 0x5c:
    if (param_5 != 2) {
switchD_004054f8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00405674;
    }
    if (local_5c) goto LAB_0040576c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00405674;
  case 0x7b:
  case 0x7d:
switchD_0040597e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040552d;
    goto LAB_0040573b;
  }
LAB_00405730:
  if (!bVar6) {
LAB_0040573b:
    bVar23 = false;
    goto LAB_00405548;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00405757;
LAB_00405b88:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040576c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040577a:
    uVar9 = FUN_00405360(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040645d:
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
    uVar9 = FUN_00405360(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040645d;
LAB_00405be6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004053f8;
  while (__s1[uVar21] != 0) {
LAB_004063b7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004063c7:
  bVar23 = false;
LAB_0040628a:
  if (1 < uVar21) {
LAB_00405e4e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040576c;
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
        if (uVar21 <= uVar22) goto LAB_004055ed;
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
        if (uVar21 <= uVar22) goto LAB_00405674;
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
LAB_00405954:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00405e4e;
  }
switchD_0040597e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00405548:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040555f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00405561:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00405658;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00405658:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00405674:
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
      goto LAB_004055ed;
    }
  }
joined_r0x00405757:
  if (local_5c) {
LAB_00405768:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040576c;
  }
LAB_004055a2:
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
LAB_004055db:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_004055ed:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00405408;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00406590(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060f338;
  if (DAT_0060f350 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00408490();
    }
    if (PTR_DAT_0060f338 == &DAT_0060f340) {
      puVar8 = (undefined *)FUN_004082a0(0);
      uVar6 = PTR_DAT_0060f348._4_4_;
      uVar5 = PTR_DAT_0060f348._0_4_;
      uVar3 = _UNK_0060f344;
      PTR_DAT_0060f338 = (undefined *)puVar8;
      *puVar8 = _DAT_0060f340;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_004082a0(PTR_DAT_0060f338);
      PTR_DAT_0060f338 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060f350 * 4,0,(long)((param_1 + 1) - DAT_0060f350) << 4);
    DAT_0060f350 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00405360(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060f3c0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00408240(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00405360(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00406730(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f4c0;
  }
  FUN_00408440(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00406770(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f4c0;
  }
  return *param_1;
}


void FUN_00406780(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f4c0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00406790(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f4c0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_004067d0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f4c0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004067f0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f4c0;
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


void FUN_00406820(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060f4c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00405360(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_004068a0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060f4c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00405360(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00408240(lVar3 + 1);
  FUN_00405360(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00406990(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004068a0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004069a0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060f338;
  if (1 < DAT_0060f350) {
    ppvVar2 = (void **)(PTR_DAT_0060f338 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060f338 + (ulong)(DAT_0060f350 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060f3c0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060f340 = 0x100;
    PTR_DAT_0060f348 = &DAT_0060f3c0;
  }
  if (__ptr_00 != &DAT_0060f340) {
    free(__ptr_00);
    PTR_DAT_0060f338 = &DAT_0060f340;
  }
  DAT_0060f350 = 1;
  return;
}


void FUN_00406a40(undefined param_1,undefined param_2)

{
  FUN_00406590(param_1,param_2,0xffffffffffffffff,&DAT_0060f4c0);
  return;
}


void FUN_00406a60(void)

{
  FUN_00406590();
  return;
}


void FUN_00406a70(undefined param_1)

{
  FUN_00406590(0,param_1,0xffffffffffffffff,&DAT_0060f4c0);
  return;
}


void FUN_00406a90(undefined param_1,undefined param_2)

{
  FUN_00406590(0,param_1,param_2,&DAT_0060f4c0);
  return;
}


void FUN_00406ab0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00406590(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406b20(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00406590(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406b90(undefined param_1,undefined param_2)

{
  FUN_00406ab0(0,param_1,param_2);
  return;
}


void FUN_00406ba0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00406b20(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406bb0(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060f4f0;
  local_48 = _DAT_0060f4c0;
  uStack_40 = uRam000000000060f4c8;
  local_38 = _DAT_0060f4d0;
  uStack_30 = uRam000000000060f4d8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060f4e0;
  uStack_20 = uRam000000000060f4e8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00406590(0,param_1,param_2,&local_48);
  return;
}


void FUN_00406c20(undefined param_1,char param_2)

{
  FUN_00406bb0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00406c30(undefined param_1)

{
  FUN_00406bb0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00406c50(undefined param_1,undefined param_2)

{
  FUN_00406bb0(param_1,param_2,0x3a);
  return;
}


void FUN_00406c60(undefined param_1,int param_2,undefined param_3)

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
    FUN_00406590(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406cd0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060f4c8;
  local_38 = _DAT_0060f4d0;
  uStack_30 = uRam000000000060f4d8;
  local_28 = _DAT_0060f4e0;
  lStack_20 = uRam000000000060f4e8;
  local_18 = DAT_0060f4f0;
  local_48 = CONCAT44((int)((ulong)_DAT_0060f4c0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00406590(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406d40(void)

{
  FUN_00406cd0();
  return;
}


void FUN_00406d50(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00406cd0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00406d70(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00406cd0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00406d90(void)

{
  FUN_00406590();
  return;
}


void FUN_00406da0(undefined param_1,undefined param_2)

{
  FUN_00406590(0,param_1,param_2,&DAT_0060f300);
  return;
}


void FUN_00406dc0(undefined param_1,undefined param_2)

{
  FUN_00406590(param_1,param_2,0xffffffffffffffff,&DAT_0060f300);
  return;
}


void FUN_00406de0(undefined param_1)

{
  FUN_00406590(0,param_1,0xffffffffffffffff,&DAT_0060f300);
  return;
}


void FUN_00406e00(undefined param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_00408240(0x18);
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}


long * FUN_00406e30(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00407050();
  plVar2 = (long *)0x0;
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_00408240(0x18);
    *plVar2 = lVar1;
    plVar2[2] = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}


undefined FUN_00406e60(undefined *param_1)

{
  return *param_1;
}


ulong FUN_00406e70(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_40 [16];
  
  uVar1 = param_2 + 1;
  uVar3 = *param_1;
  uVar9 = param_1[1];
  uVar8 = param_1[2];
  while( true ) {
    uVar4 = uVar9;
    if (uVar8 < param_2) {
      lVar7 = 0;
      uVar4 = uVar8;
      do {
        lVar7 = lVar7 + 1;
        uVar4 = uVar4 * 0x100 + 0xff;
      } while (uVar4 < param_2);
      FUN_00407360(uVar3,local_40,lVar7);
      pbVar5 = local_40;
      do {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        uVar8 = uVar8 * 0x100 + 0xff;
        uVar9 = uVar9 * 0x100 + (ulong)bVar2;
        uVar4 = uVar9;
      } while (uVar8 < param_2);
    }
    if (uVar8 == param_2) break;
    uVar6 = (uVar8 - param_2) % uVar1;
    uVar9 = uVar4 % uVar1;
    if (uVar4 <= uVar8 - uVar6) {
      param_1[1] = uVar4 / uVar1;
      param_1[2] = (uVar8 - param_2) / uVar1;
      return uVar9;
    }
    uVar8 = uVar6 - 1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  return uVar4;
}


void FUN_00406f70(void *param_1)

{
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  return;
}


undefined FUN_00406f90(undefined *param_1)

{
  int iVar1;
  undefined uVar2;
  int *piVar3;
  
  uVar2 = FUN_004074c0(*param_1);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


void FUN_00406ff0(long param_1)

{
  undefined uVar1;
  int *piVar2;
  undefined uVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_00406de0();
    piVar2 = __errno_location();
    if (*piVar2 == 0) {
      uVar3 = dcgettext(0,"%s: end of file",5);
    }
    else {
      uVar3 = dcgettext(0,"%s: read error",5);
    }
    error(DAT_0060f2e0,*piVar2,uVar3,uVar1);
    FUN_00402089();
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


FILE ** FUN_00407050(FILE *param_1,ulong param_2)

{
  int __fd;
  uint uVar1;
  FILE *pFVar2;
  FILE **ppFVar3;
  FILE **ppFVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  timeval *ptVar8;
  undefined *puVar9;
  ulong uVar10;
  byte bVar11;
  __uid_t local_48;
  undefined uStack_44;
  undefined uStack_40;
  undefined uStack_3c;
  
  bVar11 = 0;
  if (param_2 == 0) {
    ppFVar3 = (FILE **)FUN_00408240(0x1038);
    *ppFVar3 = (FILE *)0x0;
    ppFVar3[1] = (FILE *)FUN_00406ff0;
    ppFVar3[2] = (FILE *)0x0;
    return ppFVar3;
  }
  if (param_1 != (FILE *)0x0) {
    pFVar2 = (FILE *)FUN_00409b20(param_1,&DAT_0040c4a4);
    if (pFVar2 != (FILE *)0x0) {
      ppFVar3 = (FILE **)FUN_00408240(0x1038);
      *ppFVar3 = pFVar2;
      __n = 0x1000;
      if (param_2 < 0x1001) {
        __n = param_2;
      }
      ppFVar3[1] = (FILE *)FUN_00406ff0;
      ppFVar3[2] = param_1;
      setvbuf(pFVar2,(char *)(ppFVar3 + 3),0,__n);
      return ppFVar3;
    }
    return (FILE **)0x0;
  }
  ppFVar4 = (FILE **)FUN_00408240(0x1038);
  *ppFVar4 = (FILE *)0x0;
  ppFVar3 = ppFVar4 + 4;
  ppFVar4[1] = (FILE *)FUN_00406ff0;
  ppFVar4[2] = (FILE *)0x0;
  ppFVar4[3] = (FILE *)0x0;
  __fd = open("/dev/urandom",0);
  if (__fd < 0) {
    uVar5 = 0x14;
    gettimeofday((timeval *)&local_48,(__timezone_ptr_t)0x0);
    *(__uid_t *)(ppFVar4 + 4) = local_48;
    *(undefined *)((long)ppFVar4 + 0x24) = uStack_44;
    *(undefined *)(ppFVar4 + 5) = uStack_40;
    *(undefined *)((long)ppFVar4 + 0x2c) = uStack_3c;
    local_48 = getpid();
    *(__uid_t *)(ppFVar4 + 6) = local_48;
  }
  else {
    if (0x800 < param_2) {
      param_2 = 0x800;
    }
    pFVar2 = (FILE *)__read_chk(__fd,ppFVar3,param_2,0x1018);
    close(__fd);
    if (0x7ff < (long)pFVar2) goto LAB_00407158;
    if ((long)pFVar2 < 0) {
      pFVar2 = param_1;
    }
    uVar5 = 0x800 - (long)pFVar2;
    if (0x10 < uVar5) {
      uVar5 = 0x10;
    }
    lVar7 = (long)&pFVar2->_flags + uVar5;
    gettimeofday((timeval *)&local_48,(__timezone_ptr_t)0x0);
    ptVar8 = (timeval *)&local_48;
    puVar9 = (undefined *)((long)ppFVar3 + (long)pFVar2);
    for (uVar5 = uVar5 & 0xffffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *(undefined *)&ptVar8->tv_sec;
      ptVar8 = (timeval *)((long)ptVar8 + (ulong)bVar11 * -2 + 1);
      puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
    }
    if (0x7ff < lVar7) goto LAB_00407158;
    uVar10 = 0x800 - lVar7;
    if (4 < uVar10) {
      uVar10 = 4;
    }
    local_48 = getpid();
    uVar5 = uVar10 + lVar7;
    ptVar8 = (timeval *)&local_48;
    puVar9 = (undefined *)((long)ppFVar3 + lVar7);
    for (uVar10 = uVar10 & 0xffffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar9 = *(undefined *)&ptVar8->tv_sec;
      ptVar8 = (timeval *)((long)ptVar8 + (ulong)bVar11 * -2 + 1);
      puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
    }
    if (0x7ff < uVar5) goto LAB_00407158;
  }
  uVar10 = 0x800 - uVar5;
  if (4 < uVar10) {
    uVar10 = 4;
  }
  local_48 = getppid();
  if ((uint)uVar10 != 0) {
    uVar1 = 0;
    do {
      uVar6 = (ulong)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined *)((long)ppFVar3 + uVar6 + uVar5) = *(undefined *)((long)&local_48 + uVar6);
    } while (uVar1 < (uint)uVar10);
  }
  uVar10 = uVar10 + uVar5;
  if (uVar10 < 0x800) {
    uVar5 = 0x800 - uVar10;
    if (4 < uVar5) {
      uVar5 = 4;
    }
    local_48 = getuid();
    if ((uint)uVar5 != 0) {
      uVar1 = 0;
      do {
        uVar6 = (ulong)uVar1;
        uVar1 = uVar1 + 1;
        *(undefined *)((long)ppFVar3 + uVar6 + uVar10) = *(undefined *)((long)&local_48 + uVar6);
      } while (uVar1 < (uint)uVar5);
    }
    uVar10 = uVar10 + uVar5;
    if (uVar10 < 0x800) {
      local_48 = getgid();
      uVar5 = 0x800 - uVar10;
      if (4 < uVar5) {
        uVar5 = 4;
      }
      if ((uint)uVar5 != 0) {
        uVar1 = 0;
        do {
          uVar6 = (ulong)uVar1;
          uVar1 = uVar1 + 1;
          *(undefined *)((long)ppFVar3 + uVar6 + uVar10) = *(undefined *)((long)&local_48 + uVar6);
        } while (uVar1 < (uint)uVar5);
      }
    }
  }
LAB_00407158:
  FUN_004077c0(ppFVar3);
  return ppFVar4;
}


void FUN_00407340(long param_1,undefined param_2)

{
  *(undefined *)(param_1 + 8) = param_2;
  return;
}


void FUN_00407350(long param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x10) = param_2;
  return;
}


void FUN_00407360(FILE **param_1,void *param_2,FILE *param_3)

{
  FILE **ppFVar1;
  int *piVar2;
  size_t sVar3;
  int iVar4;
  void *__dest;
  FILE **__src;
  FILE *pFVar5;
  
  pFVar5 = *param_1;
  if (pFVar5 != (FILE *)0x0) {
    piVar2 = __errno_location();
    while( true ) {
      sVar3 = fread_unlocked(param_2,1,(size_t)param_3,pFVar5);
      iVar4 = *piVar2;
      param_2 = (void *)((long)param_2 + sVar3);
      param_3 = (FILE *)((long)param_3 - sVar3);
      if (param_3 == (FILE *)0x0) break;
      pFVar5 = param_1[2];
      if ((*(byte *)&(*param_1)->_flags & 0x20) == 0) {
        iVar4 = 0;
      }
      *piVar2 = iVar4;
      (*(code *)param_1[1])(pFVar5);
      pFVar5 = *param_1;
    }
    return;
  }
  pFVar5 = param_1[3];
  __src = param_1 + 0x107;
  ppFVar1 = param_1 + 4;
  __dest = param_2;
  if (param_3 <= pFVar5) {
    __src = (FILE **)((long)__src + (0x800 - (long)pFVar5));
    goto LAB_00407475;
  }
  do {
    param_2 = (void *)((long)__dest + (long)pFVar5);
    param_3 = (FILE *)((long)param_3 - (long)pFVar5);
    memcpy(__dest,(void *)((0x800 - (long)pFVar5) + (long)__src),(size_t)pFVar5);
    if (((ulong)param_2 & 7) == 0) goto LAB_0040745b;
    pFVar5 = (FILE *)0x800;
    FUN_00407510(ppFVar1,__src);
    __dest = param_2;
  } while ((FILE *)0x800 < param_3);
  goto LAB_0040746f;
LAB_0040745b:
  while ((FILE *)0x7ff < param_3) {
    FUN_00407510(ppFVar1,param_2);
    param_3 = (FILE *)&param_3[-10]._fileno;
    param_2 = (void *)((long)param_2 + 0x800);
    if (param_3 == (FILE *)0x0) {
      param_1[3] = (FILE *)0x0;
      return;
    }
  }
  FUN_00407510(ppFVar1,__src);
LAB_0040746f:
  pFVar5 = (FILE *)0x800;
LAB_00407475:
  memcpy(param_2,__src,(size_t)param_3);
  param_1[3] = (FILE *)((long)pFVar5 - (long)param_3);
  return;
}


int FUN_004074c0(FILE **param_1)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  int *piVar3;
  __off_t _Var4;
  
  __stream = *param_1;
  __explicit_bzero_chk(param_1,0x1038,0xffffffffffffffff);
  free(param_1);
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  iVar1 = fileno(__stream);
  if (-1 < iVar1) {
    iVar1 = __freading();
    if (iVar1 != 0) {
      iVar1 = fileno(__stream);
      _Var4 = lseek(iVar1,0,1);
      if (_Var4 == -1) goto LAB_00408a77;
    }
    iVar1 = FUN_00408bd0(__stream);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      iVar2 = fclose(__stream);
      if (iVar1 != 0) {
        *piVar3 = iVar1;
        iVar2 = -1;
      }
      return iVar2;
    }
  }
LAB_00408a77:
  iVar1 = fclose(__stream);
  return iVar1;
}


void FUN_00407510(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = param_1[0x102];
  uVar3 = param_1[0x100];
  param_1[0x102] = lVar6 + 1;
  lVar6 = param_1[0x101] + lVar6 + 1;
  plVar1 = param_1;
  plVar5 = param_2;
  do {
    lVar4 = *plVar1;
    uVar3 = ~(uVar3 ^ uVar3 << 0x15) + plVar1[0x80];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar4 & 0x7f8)) + uVar3 + lVar6;
    *plVar1 = lVar6;
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8)) + lVar4;
    *plVar5 = lVar4;
    lVar6 = plVar1[1];
    uVar3 = (uVar3 ^ uVar3 >> 5) + plVar1[0x81];
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar3 + lVar4;
    plVar1[1] = lVar4;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar4 >> 8) & 0x7f8)) + lVar6;
    plVar5[1] = lVar6;
    lVar4 = plVar1[2];
    uVar3 = (uVar3 * 0x1000 ^ uVar3) + plVar1[0x82];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar4 & 0x7f8)) + uVar3 + lVar6;
    plVar1[2] = lVar6;
    lVar4 = lVar4 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    plVar5[2] = lVar4;
    lVar6 = plVar1[3];
    uVar3 = (uVar3 ^ uVar3 >> 0x21) + plVar1[0x83];
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar3 + lVar4;
    plVar2 = plVar1 + 4;
    plVar1[3] = lVar4;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar4 >> 8) & 0x7f8)) + lVar6;
    plVar5[3] = lVar6;
    plVar1 = plVar2;
    plVar5 = plVar5 + 4;
  } while (plVar2 != param_1 + 0x80);
  plVar1 = param_2 + 0x80;
  do {
    lVar4 = *plVar2;
    uVar3 = ~(uVar3 ^ uVar3 << 0x15) + plVar2[-0x80];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar4 & 0x7f8)) + uVar3 + lVar6;
    *plVar2 = lVar6;
    lVar4 = lVar4 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    *plVar1 = lVar4;
    lVar6 = plVar2[1];
    uVar3 = (uVar3 ^ uVar3 >> 5) + plVar2[-0x7f];
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar3 + lVar4;
    plVar2[1] = lVar4;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar4 >> 8) & 0x7f8)) + lVar6;
    plVar1[1] = lVar6;
    lVar4 = plVar2[2];
    uVar3 = (uVar3 * 0x1000 ^ uVar3) + plVar2[-0x7e];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar4 & 0x7f8)) + uVar3 + lVar6;
    plVar2[2] = lVar6;
    lVar4 = lVar4 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    plVar1[2] = lVar4;
    lVar6 = plVar2[3];
    uVar3 = (uVar3 ^ uVar3 >> 0x21) + plVar2[-0x7d];
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar3 + lVar4;
    plVar5 = plVar2 + 4;
    plVar2[3] = lVar4;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar4 >> 8) & 0x7f8)) + lVar6;
    plVar1[3] = lVar6;
    plVar2 = plVar5;
    plVar1 = plVar1 + 4;
  } while (plVar5 != param_1 + 0x100);
  param_1[0x100] = uVar3;
  param_1[0x101] = lVar6;
  return;
}


void FUN_004077c0(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar3 = 0x98f5704f6c44c0ab;
  uVar7 = 0x82f053db8355e0ce;
  uVar13 = 0xb29b2e824a595524;
  uVar14 = 0xae985bf2cbfc89ed;
  uVar11 = 0x8c0ea5053d4712a0;
  uVar10 = 0xb9f8b322c73ac862;
  uVar8 = 0x647c4677a2884b7c;
  uVar5 = 0x48fe4a0fa5a09315;
  puVar1 = param_1;
  do {
    lVar9 = uVar8 + (*puVar1 - (uVar7 + puVar1[4]));
    uVar6 = uVar5 + puVar1[5] ^ uVar3 + puVar1[7] >> 9;
    uVar10 = uVar10 + (puVar1[1] - uVar6);
    uVar5 = uVar14 + puVar1[6] ^ lVar9 * 0x200;
    lVar12 = uVar11 + (puVar1[2] - uVar5);
    uVar3 = uVar3 + puVar1[7] + lVar9 ^ uVar10 >> 0x17;
    uVar13 = uVar13 + (puVar1[3] - uVar3);
    uVar8 = lVar9 + uVar10 ^ lVar12 * 0x8000;
    lVar9 = (uVar7 + puVar1[4]) - uVar8;
    *puVar1 = uVar8;
    uVar10 = uVar10 + lVar12 ^ uVar13 >> 0xe;
    uVar6 = uVar6 - uVar10;
    puVar1[1] = uVar10;
    uVar11 = lVar12 + uVar13 ^ lVar9 * 0x100000;
    lVar12 = uVar5 - uVar11;
    puVar1[2] = uVar11;
    puVar2 = puVar1 + 8;
    uVar13 = uVar13 + lVar9 ^ uVar6 >> 0x11;
    uVar5 = uVar6 + lVar12;
    uVar3 = uVar3 - uVar13;
    puVar1[3] = uVar13;
    uVar7 = lVar12 * 0x4000 ^ lVar9 + uVar6;
    uVar14 = lVar12 + uVar3;
    puVar1[5] = uVar5;
    puVar1[4] = uVar7;
    puVar1[6] = uVar14;
    puVar1[7] = uVar3;
    puVar1 = puVar2;
    puVar4 = param_1;
  } while (param_1 + 0x100 != puVar2);
  do {
    lVar9 = (uVar8 + *puVar4) - (uVar7 + puVar4[4]);
    uVar6 = uVar5 + puVar4[5] ^ uVar3 + puVar4[7] >> 9;
    uVar5 = (uVar10 + puVar4[1]) - uVar6;
    uVar14 = uVar14 + puVar4[6] ^ lVar9 * 0x200;
    lVar12 = (uVar11 + puVar4[2]) - uVar14;
    uVar3 = uVar3 + puVar4[7] + lVar9 ^ uVar5 >> 0x17;
    uVar13 = (uVar13 + puVar4[3]) - uVar3;
    uVar8 = lVar9 + uVar5 ^ lVar12 * 0x8000;
    lVar9 = (uVar7 + puVar4[4]) - uVar8;
    *puVar4 = uVar8;
    uVar10 = uVar5 + lVar12 ^ uVar13 >> 0xe;
    uVar6 = uVar6 - uVar10;
    puVar4[1] = uVar10;
    uVar11 = lVar12 + uVar13 ^ lVar9 * 0x100000;
    lVar12 = uVar14 - uVar11;
    puVar4[2] = uVar11;
    puVar1 = puVar4 + 8;
    uVar13 = uVar13 + lVar9 ^ uVar6 >> 0x11;
    uVar5 = uVar6 + lVar12;
    uVar3 = uVar3 - uVar13;
    puVar4[3] = uVar13;
    uVar7 = lVar12 * 0x4000 ^ lVar9 + uVar6;
    uVar14 = lVar12 + uVar3;
    puVar4[5] = uVar5;
    puVar4[4] = uVar7;
    puVar4[6] = uVar14;
    puVar4[7] = uVar3;
    puVar4 = puVar1;
  } while (param_1 + 0x100 != puVar1);
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
  return;
}


ulong FUN_00407a00(uint param_1,char *param_2,uint param_3,char *param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  size_t sVar6;
  size_t sVar7;
  stat local_158;
  stat local_c8;
  
  uVar4 = syscall(0x13c,(ulong)param_1,param_2,(ulong)param_3,param_4,(ulong)param_5);
  if (-1 < (int)uVar4) {
    return uVar4 & 0xffffffff;
  }
  piVar5 = __errno_location();
  bVar1 = (*piVar5 - 0x16U & 0xffffffef) != 0 && *piVar5 != 0x5f;
  if (bVar1) {
    return uVar4 & 0xffffffff;
  }
  if (param_5 != 0) {
    if ((param_5 & 0xfffffffe) != 0) {
      *piVar5 = 0x5f;
      return 0xffffffff;
    }
    iVar2 = __fxstatat(1,param_3,param_4,&local_c8,0x100);
    if ((iVar2 == 0) || (*piVar5 == 0x4b)) {
      *piVar5 = 0x11;
      return 0xffffffff;
    }
    if (*piVar5 != 2) {
      return 0xffffffff;
    }
    bVar1 = true;
  }
  sVar6 = strlen(param_2);
  sVar7 = strlen(param_4);
  if (((sVar6 != 0) && (sVar7 != 0)) && ((param_2[sVar6 - 1] == '/' || (param_4[sVar7 - 1] == '/')))
     ) {
    iVar2 = __fxstatat(1,param_1,param_2,&local_158,0x100);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    if (bVar1) {
      if ((local_158.st_mode & 0xf000) != 0x4000) {
        *piVar5 = 2;
        return 0xffffffff;
      }
    }
    else {
      iVar2 = __fxstatat(1,param_3,param_4,&local_c8,0x100);
      if (iVar2 == 0) {
        if ((local_c8.st_mode & 0xf000) != 0x4000) {
          *piVar5 = 0x14;
          return 0xffffffff;
        }
        if ((local_158.st_mode & 0xf000) != 0x4000) {
          *piVar5 = 0x15;
          return 0xffffffff;
        }
      }
      else if ((*piVar5 != 2) || ((local_158.st_mode & 0xf000) != 0x4000)) {
        return 0xffffffff;
      }
    }
  }
  uVar3 = renameat(param_1,param_2,param_3,param_4);
  return (ulong)uVar3;
}


uint FUN_00407c50(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_0040a190();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


undefined
FUN_00407ca0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040c4ba,5);
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
    goto LAB_00407f1c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00407f1c:
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
    goto LAB_00407fb9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00407fb9:
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
    goto LAB_00407d9a;
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
LAB_00407d9a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00408080(void)

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
  FUN_00407ca0();
  return;
}


void FUN_004080a0(void)

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
  FUN_00407ca0();
  return;
}


void FUN_00408100(void)

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
  FUN_00407ca0();
  return;
}


void FUN_004081c0(void)

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


void FUN_00408240(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408490();
  }
  return;
}


void FUN_00408260(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00408240();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408490();
}


void thunk_FUN_00408240(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408490();
  }
  return;
}


void * FUN_004082a0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408490();
  }
  return pvVar1;
}


void FUN_004082e0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004082a0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408490();
}


void FUN_00408310(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040836b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040836b:
                    /* WARNING: Subroutine does not return */
      FUN_00408490(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004082a0(param_1,uVar2 * param_3);
  return;
}


void FUN_004083a0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004082a0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004083ea;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004083ea:
                    /* WARNING: Subroutine does not return */
      FUN_00408490();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004082a0(param_1,uVar1);
  return;
}


void FUN_004083f0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00408240();
  memset(__s,0,param_1);
  return;
}


void FUN_00408410(size_t param_1,ulong param_2)

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
  FUN_00408490();
}


void FUN_00408440(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00408240(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00408470(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00408240(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00408490(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060f2e0,0,&DAT_0040b61c,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_004084d0(undefined param_1,undefined param_2,ulong param_3,ulong param_4,
                  undefined param_5,undefined param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  ulong local_40 [2];
  
  iVar2 = FUN_004085d0(param_1,0,param_2,local_40);
  uVar1 = local_40[0];
  if (iVar2 == 0) {
    if ((param_3 <= local_40[0]) && (local_40[0] <= param_4)) {
      return local_40[0];
    }
    piVar3 = __errno_location();
    *piVar3 = (-(uint)(uVar1 < 0x40000000) & 0xffffffd7) + 0x4b;
  }
  else {
    piVar3 = __errno_location();
    if (iVar2 == 1) {
      *piVar3 = 0x4b;
    }
    else if (iVar2 == 3) {
      *piVar3 = 0;
    }
  }
  uVar4 = FUN_00406de0(param_1);
  iVar2 = *piVar3;
  if (iVar2 == 0x16) {
    iVar2 = 0;
  }
  if (param_7 == 0) {
    param_7 = 1;
  }
  error(param_7,iVar2,"%s: %s",param_6,uVar4);
  return local_40[0];
}


void FUN_004085a0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6)

{
  FUN_004084d0(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_004085d0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00408672;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040875c_caseD_1;
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
        goto LAB_0040874a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00408731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040c878)[bVar8])();
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
LAB_0040874a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_004087b7;
  default:
switchD_0040875c_caseD_1:
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
    goto LAB_00408844;
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
    goto joined_r0x0040877c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_004087b7;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0040877c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_004087b7:
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
    goto LAB_00408844;
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
    goto LAB_00408844;
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
    goto LAB_00408844;
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
LAB_00408844:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_004087b7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_004087b7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00408672:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_00408a10(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00408a77;
    }
    iVar1 = FUN_00408bd0(param_1);
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
LAB_00408a77:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00408a90(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0060f4f8 < 0) {
    iVar1 = FUN_00408a90(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0060f4f8 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0060f4f8 = 1;
      return iVar1;
    }
    iVar1 = FUN_00408a90(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0060f4f8 = -1;
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


void FUN_00408bd0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00408c10(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00408c10(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00408c70(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00408cec;
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
      if (iVar9 <= iVar3) goto LAB_00408cec;
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
LAB_00408cec:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00408d50(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00408f70;
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
            if (local_70 == (char *)0x0) goto LAB_00408eb0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00408eb0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00408eb0:
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
              __fprintf_chk(__stream,1,&DAT_0040cca9,param_9,*param_4);
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
LAB_00408f70:
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


uint FUN_00409370(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_004093ba:
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
          goto LAB_004094bd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_004094bd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_004094c8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00409438;
LAB_004094dc:
    if (*pbVar8 == 0) goto LAB_00409438;
  }
  else {
    if (param_7[6] == 0) goto LAB_004093ba;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_004094c8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004094dc;
LAB_00409438:
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
        FUN_00408c70(param_2,param_7);
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
LAB_004095a6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040ccb1;
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
          FUN_00408c70(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_004095a6;
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
        puVar15 = &DAT_0040ccb1;
        goto LAB_00409705;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_004096b0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00408d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040ccb2);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_004096b0:
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
  puVar15 = &DAT_0040ccd0;
LAB_00409705:
  uVar3 = FUN_00408d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409940(void)

{
  DAT_0060f500 = DAT_0060f35c;
  _DAT_0060f504 = DAT_0060f358;
  FUN_00409370();
  DAT_0060f35c = DAT_0060f500;
  DAT_0060f540 = DAT_0060f510;
  _DAT_0060f354 = DAT_0060f508;
  return;
}


void FUN_004099a0(void)

{
  FUN_00409940();
  return;
}


void FUN_004099c0(void)

{
  FUN_00409940();
  return;
}


void FUN_004099e0(void)

{
  FUN_00409370();
  return;
}


void FUN_00409a00(void)

{
  FUN_00409940();
  return;
}


void FUN_00409a20(void)

{
  FUN_00409370();
  return;
}


size_t FUN_00409a40(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40cccf;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00409a64;
  }
  param_1 = &local_1c;
LAB_00409a64:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00409bc0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00409ac0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00408a10(param_1);
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


FILE * FUN_00409b20(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  FILE *pFVar4;
  int *piVar5;
  
  __stream = fopen(param_1,param_2);
  pFVar4 = __stream;
  if ((__stream != (FILE *)0x0) && (uVar1 = fileno(__stream), uVar1 < 3)) {
    iVar2 = FUN_0040a190(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_00408a10(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_00408a10(__stream);
      if ((iVar3 == 0) && (pFVar4 = fdopen(iVar2,param_2), pFVar4 != (FILE *)0x0)) {
        return pFVar4;
      }
      piVar5 = __errno_location();
      iVar3 = *piVar5;
      close(iVar2);
      *piVar5 = iVar3;
      pFVar4 = (FILE *)0x0;
    }
  }
  return pFVar4;
}


bool FUN_00409bc0(int param_1)

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
    pbVar5 = &DAT_0040ccd4;
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

char * FUN_00409c20(void)

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
  if (DAT_0060f538 != (char *)0x0) goto LAB_00409c5a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00409d45:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00409d66;
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
        goto LAB_00409d45;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00409d66:
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
LAB_00409e00:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00409f8c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00409e00;
              if (uVar4 == 0x23) goto LAB_00409ff1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00409f9f;
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
                FUN_00408a10(__stream);
                goto LAB_00409da4;
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
LAB_00409f8c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00409f9f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00409d9e;
    }
  }
  DAT_0060f538 = "";
LAB_00409c5a:
  cVar1 = *DAT_0060f538;
  pcVar7 = DAT_0060f538;
  do {
    if (cVar1 == '\0') {
LAB_00409cb4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00409cb4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00409ff1:
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
  if (uVar4 == 0xffffffff) goto LAB_00409f9f;
  goto LAB_00409e00;
LAB_00409f9f:
  FUN_00408a10(__stream);
  if (local_d0 == 0) {
LAB_00409d9e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00409da4:
  free(__file);
  DAT_0060f538 = pcVar7;
  goto LAB_00409c5a;
}


void FUN_0040a190(undefined param_1)

{
  FUN_00408a90(param_1,0,3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a1d3) */
/* WARNING: Removing unreachable block (ram,0x0040a1d8) */

void FUN_0040a1a0(void)

{
  __DT_INIT();
  return;
}


void FUN_0040a200(void)

{
  return;
}


void FUN_0040a210(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060f2c8);
  return;
}


undefined FUN_0040a228(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060ee30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_004029a1();
  return;
}

